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
	int iLocal_85 = 0;
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
	var uLocal_230 = 0;
	struct<411> Local_231 = { 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
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
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	int iLocal_258 = 0;
	vector3 vLocal_259[1] = {{ 0f, 0f, 0f } };
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	vector3 vLocal_262 = { 0f, 0f, 0f };
	vector3 vLocal_263 = { 0f, 0f, 0f };
	vector3 vLocal_264 = { 0f, 0f, 0f };
	vector3 vLocal_265 = { 0f, 0f, 0f };
	vector3 vLocal_266 = { 0f, 0f, 0f };
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	var uLocal_269 = 0;
	int iLocal_270 = 0;
	float fLocal_271 = 0f;
	float fLocal_272 = 0f;
	float fLocal_273 = 0f;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	bool bLocal_277 = 0;
	bool bLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	char* sLocal_281 = NULL;
	char* sLocal_282 = NULL;
	bool bLocal_283 = 0;
	struct<28> Local_284 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 5;
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
	var uLocal_330 = 1097859072;
	var uLocal_331 = 1500;
	var uLocal_332 = 45;
	var uLocal_333 = 1103626240;
	var uLocal_334 = 5;
	int iLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
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
	iLocal_260 = joaat("a_m_y_soucent_04");
	vLocal_262 = { -1230.55f, -896.7814f, 11.11059f };
	vLocal_263 = { 58.8213f, 293.848f, 109.6124f };
	vLocal_264 = { 62.7742f, 307.4984f, 109.981f };
	vLocal_265 = { 0f, 0f, 0f };
	vLocal_266 = { 0f, 0f, 0f };
	iLocal_267 = 1;
	fLocal_271 = 0f;
	fLocal_272 = 12f;
	sLocal_282 = "random@drunk_driver_1";
	if (unk_0xE8A79675302ED812(67))
	{
		func_429(2);
		func_428();
	}
	unk_0x25A523E067E06F54(1);
	func_415();
	while (true)
	{
		if (unk_0x724D816EA203A79E(Local_231.f_2))
		{
			func_8();
		}
		else
		{
			func_1(&Local_231);
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(var uParam0)//Position - 0x13A
{
	uParam0->f_2 = unk_0xBC25C936A095B5BA();
	func_6(&(uParam0->f_F4));
	uParam0->f_1AC = func_2();
}

int func_2()//Position - 0x15B
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

int func_3(int iParam0)//Position - 0x1A6
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

int func_4(int iParam0)//Position - 0x1E3
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

bool func_5(int iParam0)//Position - 0x20D
{
	return iParam0 < 3;
}

void func_6(var uParam0)//Position - 0x219
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

void func_7(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x2A1
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

void func_8()//Position - 0x33C
{
	if (func_414(&Local_231))
	{
		func_413(&Local_231);
		if (Local_231.f_19A > 0)
		{
			if ((unk_0x105601648511CC64() % 1000) < 50)
			{
			}
			if (func_412(&Local_231, 0))
			{
				func_410();
			}
		}
		else if (func_409(&Local_231, 31) > 5f)
		{
			func_429(2);
			func_428();
		}
	}
	else
	{
		func_408(&Local_231);
		func_374(&Local_231, &uLocal_328);
		func_373(&Local_231, &uLocal_269, 0);
		func_372(&Local_231);
		if (Local_231.f_19A > 2 && iLocal_258 == 0)
		{
			if (!func_371(&Local_231))
			{
				func_338();
			}
			else
			{
				func_332(&Local_231, "Taxi Not Driveable", func_337(&Local_231));
			}
		}
		if (Local_231.f_19A == 9 && iLocal_258 == 0)
		{
			func_308(&Local_231, 0, 0);
			func_306();
			if (bLocal_277)
			{
				if (func_305())
				{
					func_332(&Local_231, "Rider is too damn uncomfortable.", 9);
				}
			}
		}
		switch (Local_231.f_19A)
		{
			case 0:
				func_304(&(vLocal_259[0 /*3*/]), "TAXI_SC_BN_01", 100);
				func_303(&Local_231, &vLocal_259);
				func_300();
				func_299(&Local_231, 16, 4f, 0);
				func_297(&Local_231, vLocal_263, vLocal_264, "TaxiOtis", iLocal_260, 135.3f, 40f);
				func_295(&Local_231);
				func_294(&Local_231, 1);
				break;
			
			case 1:
				if (func_292())
				{
					func_291();
					func_271();
					func_270(&Local_231);
					Local_231.f_E = { vLocal_263 };
					func_294(&Local_231, 3);
				}
				break;
			
			case 3:
				if (func_265(&Local_231, 1))
				{
					if (!unk_0x1D403DFADBC2DE3C(Local_231.f_3, 0))
					{
						unk_0xB0031DDAE4FF0BC3(Local_231.f_3, 3, 1, 0, 0);
						unk_0xB0031DDAE4FF0BC3(Local_231.f_3, 4, 1, 0, 0);
						unk_0xB0031DDAE4FF0BC3(Local_231.f_3, 0, 1, 0, 0);
						unk_0xABA7AE40608505F2(Local_231.f_3, 1024, true);
						unk_0xABA7AE40608505F2(Local_231.f_3, 131072, true);
					}
					func_264(&Local_231, 1, 0);
					func_294(&Local_231, 5);
				}
				break;
			
			case 5:
				if (func_234(&Local_231, 0, 1109393408))
				{
					func_294(&Local_231, 15);
				}
				break;
			
			case 15:
				if (func_233(&Local_231))
				{
					Local_231.f_11 = { vLocal_262 };
					func_230(&Local_231, 9, 1, 0, 0);
					func_229(&Local_231);
					Local_231.f_2E = unk_0x8D66276473ABD7CC(Local_231.f_4);
					func_228();
					switch (func_227(&Local_231))
					{
						case 2:
							sLocal_281 = "vomit_van";
							break;
						
						case 0:
							sLocal_281 = "vomit_low";
							break;
						
						case 1:
							sLocal_281 = "vomit_outside";
							break;
					}
					func_294(&Local_231, 9);
				}
				if (unk_0xE59B7F5A03335350(Local_231.f_4, 0))
				{
					if (!unk_0x62F3A07C43FFB568(Local_231.f_2, Local_231.f_4, 0))
					{
						func_225(&Local_231);
						func_294(&Local_231, 5);
					}
				}
				break;
			
			case 9:
				if (!iLocal_280)
				{
					if ((func_224(&Local_231, 0) || func_224(&Local_231, 2)) || func_223(&Local_231, 2))
					{
						iLocal_280 = 1;
					}
				}
				if (func_220(&Local_231, 1086324736) && iLocal_258 == 1)
				{
					if (iLocal_261 != 0)
					{
						unk_0x2CA8D9DC16C6AF09(iLocal_261, 0);
						iLocal_261 = 0;
					}
					unk_0xA4E856A8CD53B8DF(Local_231.f_3);
					bLocal_277 = true;
				}
				switch (iLocal_258)
				{
					case 0:
						if (func_202(&Local_231, 1086324736, 1097859072))
						{
							func_200(&uLocal_287);
							func_199(&Local_284, 3, 0);
							unk_0x07B8ECB35A4ED3AC(&(Local_231.f_9));
							func_197(&Local_231);
							func_188(&(Local_231.f_F4), Local_231.f_90, "txm1_arrive", 9, 0, 0, 0);
							func_294(&Local_231, 22);
						}
						if ((((func_187(&Local_231) >= 2 && unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) < 1) && !unk_0x8730A01B72F31307(Local_231.f_4)) && !(unk_0x637D801AD41A6525(Local_231.f_4) <= -145f || unk_0x637D801AD41A6525(Local_231.f_4) >= 145f)) && !bLocal_277)
						{
							if (func_186())
							{
								func_184();
								func_230(&Local_231, 61, 1, 0, 0);
							}
							Local_231.f_4C = 0;
							iLocal_258 = 1;
						}
						if (unk_0xEF0E25DA0CB6E8FF(Local_231))
						{
							unk_0x4EC087603E1DEF9C(Local_231, 0);
							unk_0x062C9995BFD27B2A(false, false, 3000, 1, 0, 0);
						}
						break;
					
					case 1:
						if (!bLocal_277)
						{
							func_182(&(Local_231.f_3));
						}
						if (func_179())
						{
							if (bLocal_278)
							{
								func_230(&Local_231, 62, 1, 0, 0);
								iLocal_258 = 0;
							}
							else
							{
								func_230(&Local_231, 63, 1, 0, 0);
								iLocal_258 = 0;
							}
							unk_0x4AED68BFACFB14CB(true);
						}
						if (!func_174(&Local_231))
						{
							func_162(&Local_231, 1);
							if (!unk_0x8CC5A4A5615C6420(unk_0xFC1CAE18F3ECBF2D()))
							{
								unk_0xDDCAA2E64649E083(unk_0xFC1CAE18F3ECBF2D(), true, 0);
							}
						}
						else if (unk_0x4DBCE270B354E123(Local_231.f_4, Local_231.f_11, 2f, 2f, 20f, false, true, 0))
						{
							unk_0xDDCAA2E64649E083(unk_0xFC1CAE18F3ECBF2D(), false, 0);
						}
						break;
				}
				break;
			
			case 22:
				if (!func_186())
				{
					if (bLocal_277)
					{
						func_161(0);
					}
					else
					{
						func_161(1);
						func_160(&Local_231, 0);
					}
					func_294(&Local_231, 27);
				}
				break;
			
			case 27:
				if (func_150(&Local_231, 1))
				{
					func_149(&Local_231);
					func_230(&Local_231, 104, 1, 1, 0);
					func_294(&Local_231, 29);
				}
				break;
			
			case 28:
				if (func_109(&uLocal_230, &Local_231, &(Local_231.f_3), &uLocal_251, 1))
				{
					func_230(&Local_231, 104, 1, 1, 0);
					func_294(&Local_231, 29);
				}
				break;
			
			case 29:
				if (func_78(&Local_231, &iLocal_335))
				{
					func_10(1, &Local_231, 1);
					func_294(&Local_231, 30);
				}
				if (!unk_0x36CEFBE9B745A58D(Local_231.f_3))
				{
					if (func_9(Local_231.f_3, -1226.25f, -902.82f, 11.33f, 1) < 3f)
					{
						unk_0x2E9860A2B72187F5(Local_231.f_3, 60, true);
					}
				}
				break;
			
			case 30:
				if (!unk_0x36CEFBE9B745A58D(Local_231.f_3))
				{
					if (func_9(Local_231.f_3, -1226.25f, -902.82f, 11.33f, 1) < 3f)
					{
						unk_0x2E9860A2B72187F5(Local_231.f_3, 60, true);
					}
					if (func_9(Local_231.f_3, Local_231.f_1D, 1) < 1f)
					{
						func_428();
					}
				}
				else
				{
					func_428();
				}
				break;
			}
	}
}

float func_9(int iParam0, vector3 vParam1, bool bParam2)//Position - 0x98D
{
	if (unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		return -1f;
	}
	return unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(iParam0, true), vParam1, bParam2);
}

void func_10(bool bParam0, var uParam1, bool bParam2)//Position - 0x9B7
{
	if (bParam0)
	{
		func_52(uParam1);
		if (!unk_0x36CEFBE9B745A58D(uParam1->f_3))
		{
			unk_0xC8FD3EBBB90E8D7F(uParam1->f_3, 317, true);
		}
	}
	else
	{
		func_50(1, 0);
	}
	func_11(uParam1, bParam2);
}

void func_11(var uParam0, bool bParam1)//Position - 0x9F3
{
	func_413(uParam0);
	if (func_186())
	{
		func_48();
	}
	func_46();
	unk_0xEB233A3B7635D2AC();
	unk_0x7456702622C62EA0(1);
	func_43(0);
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		unk_0xA73D1278857991A2(uParam0->f_4, false);
		unk_0xE421FE22DE8008EB(uParam0->f_4);
		unk_0xBF86DE1BFE3AA5CF(uParam0->f_4);
	}
	func_40(uParam0->f_E, 1);
	func_38(uParam0->f_E, 1, 1114636288);
	func_37(&(uParam0->f_F4), 3);
	unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 32, true);
	if (func_34())
	{
		unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
	}
	unk_0xD5E53AA0828339DA(1);
	func_24(0, 1, 1, 0, 0);
	unk_0x43F06392C4EF25E0(true);
	unk_0x59B038076F830627(true);
	if (unk_0xEF0E25DA0CB6E8FF(*uParam0))
	{
		unk_0x4EC087603E1DEF9C(*uParam0, 0);
		unk_0x062C9995BFD27B2A(false, false, 3000, 1, 0, 0);
		unk_0x4AED68BFACFB14CB(true);
	}
	if (func_23(Global_19B04.f_4A7C, 4))
	{
		func_21(&(Global_19B04.f_4A7C), 4);
		unk_0x8510BC031C24B862(func_20(), false);
	}
	if (bParam1)
	{
		func_19(uParam0);
	}
	func_18(uParam0);
	unk_0x4EA570997E107F35("gestures@m@standing@casual");
	unk_0x4EA570997E107F35("oddjobs@taxi@");
	unk_0x4EA570997E107F35("oddjobs@towingcome_here");
	if (unk_0x57D316754A262B34())
	{
		func_16(uParam0->f_19B);
	}
	if (!unk_0x8CC5A4A5615C6420(unk_0xFC1CAE18F3ECBF2D()))
	{
		unk_0xDDCAA2E64649E083(unk_0xFC1CAE18F3ECBF2D(), true, 0);
	}
	unk_0x739C5CCC39AE3137(SYSTEM::ROUND((func_12(&iLocal_82) * 1000f)), 12, 0);
}

float func_12(var uParam0)//Position - 0xB46
{
	if (func_15(uParam0))
	{
		if (func_14(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_13(unk_0xFA30DFD0084E92FE(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

float func_13(bool bParam0)//Position - 0xB82
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

bool func_14(var uParam0)//Position - 0xBDA
{
	return unk_0xFA30DFD0084E92FE(*uParam0, 2);
}

bool func_15(var uParam0)//Position - 0xBEA
{
	return unk_0xFA30DFD0084E92FE(*uParam0, 1);
}

void func_16(int iParam0)//Position - 0xBFA
{
	var uVar0;
	
	if (iLocal_57[0] != 0)
	{
		MemCopy(&uVar0, {func_17(iParam0)}, 6);
		if (!unk_0xEAEFBBEC1AEA464B(&uVar0))
		{
		}
	}
}

struct<8> func_17(int iParam0)//Position - 0xC21
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

void func_18(var uParam0)//Position - 0xCEA
{
	unk_0x0E330AFCF19FCA1E(uParam0->f_33[0]);
}

void func_19(var uParam0)//Position - 0xCFE
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

int func_20()//Position - 0xDF7
{
	return joaat("taxi");
}

void func_21(var uParam0, int iParam1)//Position - 0xE04
{
	func_22(uParam0, iParam1);
}

void func_22(var uParam0, int iParam1)//Position - 0xE14
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_23(var uParam0, int iParam1)//Position - 0xE29
{
	return (uParam0 && iParam1) != 0;
}

void func_24(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)//Position - 0xE38
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
			if (!func_32())
			{
				Global_389D.f_1 = 3;
			}
			Global_3DB8 = 5;
		}
		func_31(1, iParam3, iParam2, 0);
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
		func_31(0, iParam3, iParam2, 0);
		if (unk_0x7AF0088ABFA713B6())
		{
			if ((((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_29(unk_0xB5CEFD608600A09F())) && !func_26(unk_0xB5CEFD608600A09F(), 0)) && !func_25()) && !bParam4)
			{
				unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), false);
			}
		}
		else if ((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_29(unk_0xB5CEFD608600A09F())) && !bParam4)
		{
			unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), false);
		}
		Global_11540 = 0;
	}
}

bool func_25()//Position - 0xF61
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_27.f_12, 14);
}

bool func_26(int iParam0, int iParam1)//Position - 0xF7E
{
	bool bVar0;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		bVar0 = func_27(-1, 0) == 8;
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

int func_27(int iParam0, bool bParam1)//Position - 0xFC9
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_28();
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

int func_28()//Position - 0x100A
{
	return Global_1407E0;
}

int func_29(int iParam0)//Position - 0x1016
{
	if (func_26(iParam0, 0))
	{
		return 1;
	}
	if (func_30())
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

bool func_30()//Position - 0x1058
{
	return unk_0xFA30DFD0084E92FE(Global_240006, 3);
}

int func_31(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x1069
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

int func_32()//Position - 0x109C
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_33(int iParam0)//Position - 0x10C3
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

int func_34()//Position - 0x10E6
{
	if (!func_36() && !func_35())
	{
		if (!unk_0xE7A89C39746A63AC(unk_0xFC1CAE18F3ECBF2D()))
		{
			return 1;
		}
	}
	return 0;
}

int func_35()//Position - 0x1111
{
	if (unk_0xB731B8C5BCE89836(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_36()//Position - 0x112B
{
	if (unk_0xB731B8C5BCE89836(joaat("appinternet")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_37(var uParam0, int iParam1)//Position - 0x1145
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_38(vector3 vParam0, bool bParam1, float fParam2)//Position - 0x1162
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { func_39(vParam0, 1f, -fParam2, -fParam2, -fParam2) };
	vVar1 = { func_39(vParam0, 1f, fParam2, fParam2, fParam2) };
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

Vector3 func_39(vector3 vParam0, float fParam1, struct<2> Param2, float fParam3)//Position - 0x11D7
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

void func_40(vector3 vParam0, bool bParam1)//Position - 0x1224
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!func_41(vParam0, func_42(), 0))
	{
		vVar0 = { func_39(vParam0, 1f, -30f, -30f, -10f) };
		vVar1 = { func_39(vParam0, 1f, 30f, 30f, 10f) };
		unk_0x379ACE23D404525C(vVar0, vVar1, bParam1, 1);
	}
}

bool func_41(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x1284
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

Vector3 func_42()//Position - 0x12CB
{
	vector3 vVar0;
	
	return vVar0;
}

void func_43(int iParam0)//Position - 0x12D7
{
	if (Global_3943)
	{
		func_44(0, 0);
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
	if (!func_32())
	{
		Global_389D.f_1 = 3;
	}
}

void func_44(bool bParam0, bool bParam1)//Position - 0x1347
{
	if (bParam0)
	{
		if (func_45(0))
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

int func_45(int iParam0)//Position - 0x13BB
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

void func_46()//Position - 0x1415
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
					func_47(Global_15FB1[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_47(int iParam0, bool bParam1)//Position - 0x149C
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

void func_48()//Position - 0x14DA
{
	Global_394A = 0;
	func_49();
}

void func_49()//Position - 0x14EA
{
	unk_0x5C7DC611411E2CF9();
	Global_41AB = 0;
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x1E08809A5041F85B(false);
		Global_3DB8 = 6;
	}
}

void func_50(int iParam0, int iParam1)//Position - 0x150B
{
	switch (iParam0)
	{
		case 0:
			Global_19B04.f_4A7C.f_16[0]++;
			func_51("Fares Completed ++ = ", Global_19B04.f_4A7C.f_16[0]);
			break;
		
		case 1:
			Global_19B04.f_4A7C.f_16[1]++;
			func_51("Fares Failed ++ = ", Global_19B04.f_4A7C.f_16[1]);
			break;
		
		case 2:
			Global_19B04.f_4A7C.f_16[2]++;
			func_51("Fares Accepted ++ ", Global_19B04.f_4A7C.f_16[2]);
			break;
		
		case 3:
			Global_19B04.f_4A7C.f_16[3]++;
			func_51("Fares Expired ++ ", Global_19B04.f_4A7C.f_16[3]);
			break;
		
		case 13:
			Global_19B04.f_4A7C.f_16[13]++;
			func_51("Passengers run ++ = ", Global_19B04.f_4A7C.f_16[13]);
			break;
		
		case 14:
			Global_19B04.f_4A7C.f_16[14]++;
			func_51("Passenger Forced to Pay ++ = ", Global_19B04.f_4A7C.f_16[14]);
			break;
		
		case 4:
			if (iParam1 != 0)
			{
				if (iParam1 > Global_19B04.f_4A7C.f_16[4])
				{
					Global_19B04.f_4A7C.f_16[4] = iParam1;
					func_51("This distance ", iParam1);
					func_51(" is longer than current best", Global_19B04.f_4A7C.f_16[4]);
				}
				else
				{
					func_51("Longest Distance Not Beat ", Global_19B04.f_4A7C.f_16[4]);
				}
			}
			break;
		
		case 5:
			Global_19B04.f_4A7C.f_16[5] = (Global_19B04.f_4A7C.f_16[5] + iParam1);
			func_51("Total Distance w/ Passenger = ", Global_19B04.f_4A7C.f_16[5]);
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
			func_51("Wanted Levels ++ = ", Global_19B04.f_4A7C.f_16[6]);
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
			func_51("Wanted Levels Lost = ", Global_19B04.f_4A7C.f_16[7]);
			break;
		
		case 8:
			Global_19B04.f_4A7C.f_16[8]++;
			func_51("Taxis wrecked ++ = ", Global_19B04.f_4A7C.f_16[8]);
			break;
		
		case 9:
			Global_19B04.f_4A7C.f_16[9]++;
			func_51("Horn Honked ++ = ", Global_19B04.f_4A7C.f_16[9]);
			break;
		
		case 10:
			Global_19B04.f_4A7C.f_16[10] = (Global_19B04.f_4A7C.f_16[10] + iParam1);
			func_51("Total Money Earned = ", Global_19B04.f_4A7C.f_16[10]);
			break;
		
		case 11:
			Global_19B04.f_4A7C.f_16[11] = (Global_19B04.f_4A7C.f_16[11] + iParam1);
			func_51("Total Tips Earned = ", Global_19B04.f_4A7C.f_16[11]);
			break;
		
		case 12:
			if (iParam1 > Global_19B04.f_4A7C.f_16[12])
			{
				Global_19B04.f_4A7C.f_16[12] = iParam1;
				func_51("New Highest Tip = ", Global_19B04.f_4A7C.f_16[12]);
			}
			else
			{
				func_51("Highest Tip Not Reached = ", Global_19B04.f_4A7C.f_16[12]);
			}
			break;
	}
}

void func_51(char* sParam0, int iParam1)//Position - 0x18FC
{
}

void func_52(var uParam0)//Position - 0x1904
{
	func_50(0, 0);
	if (uParam0->f_19B != 9)
	{
		func_429(1);
		func_64(15, 1);
	}
	func_62(&(Global_19B04.f_4A7C), 1024);
	if (!func_23(Global_19B04.f_4A7C, 64))
	{
		func_53(func_60(func_61(uParam0)), 0, 0);
	}
}

void func_53(int iParam0, int iParam1, int iParam2)//Position - 0x1958
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
		func_59((891 + iParam0), 1, -1, 1);
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
		func_54();
	}
}

void func_54()//Position - 0x1A40
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
		func_58(13, SYSTEM::FLOOR(Global_19B04.f_27B5.f_F0D));
	}
	if (!unk_0xF9BFA43C1BAFD016())
	{
		if (!Global_11542)
		{
			if (func_57() == 2 == 0 && !unk_0x7AF0088ABFA713B6())
			{
				if (unk_0x670C0C6C780A3F84())
				{
					Global_199FA = 0;
				}
				if (!Global_DA9F)
				{
					func_55();
				}
			}
		}
	}
}

int func_55()//Position - 0x1F01
{
	if (func_56(0))
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

bool func_56(bool bParam0)//Position - 0x1F4C
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_1163A, 0);
}

int func_57()//Position - 0x1F77
{
	return Global_62BD;
}

int func_58(int iParam0, int iParam1)//Position - 0x1F82
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

int func_59(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x1FD3
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
		iParam2 = func_28();
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

int func_60(int iParam0)//Position - 0x24ED
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

int func_61(var uParam0)//Position - 0x2583
{
	return uParam0->f_19B;
}

void func_62(var uParam0, int iParam1)//Position - 0x2590
{
	func_63(uParam0, iParam1);
}

void func_63(var uParam0, int iParam1)//Position - 0x25A0
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_64(int iParam0, int iParam1)//Position - 0x25B1
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_65(iParam0, iParam1);
}

int func_65(int iParam0, int iParam1)//Position - 0x25CC
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

int func_66(var uParam0, int iParam1)//Position - 0x2669
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

int func_67(var uParam0, int iParam1)//Position - 0x271A
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

bool func_68(var uParam0, int iParam1)//Position - 0x2795
{
	return (*uParam0)[iParam1] == 78;
}

void func_69(var uParam0)//Position - 0x27A6
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

void func_70(var uParam0, int iParam1)//Position - 0x27DA
{
	(*uParam0)[iParam1] = 78;
}

void func_71(var uParam0, float fParam1)//Position - 0x27EA
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

float func_72(var uParam0)//Position - 0x2807
{
	return uParam0->f_50;
}

bool func_73(var uParam0, int iParam1)//Position - 0x2813
{
	return func_74(uParam0, iParam1) != -1;
}

int func_74(var uParam0, int iParam1)//Position - 0x2825
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

bool func_75(var uParam0)//Position - 0x2852
{
	return uParam0->f_4F == 1;
}

int func_76(int iParam0)//Position - 0x2860
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

bool func_77(int iParam0)//Position - 0x28B0
{
	return Global_8C41 == iParam0;
}

int func_78(var uParam0, int iParam1)//Position - 0x28BE
{
	switch (iLocal_160)
	{
		case 0:
			if (!func_186() && func_409(uParam0, 0) > 1f)
			{
				if (func_34())
				{
					unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
				}
				func_108(uParam0);
				func_21(&(Global_19B04.f_4A7C), 4096);
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
				func_299(uParam0, 0, 0, 0);
				func_104(0);
				iLocal_160 = 7;
				return 1;
			}
			break;
	}
	return 0;
}

void func_79(var uParam0)//Position - 0x2990
{
	int iVar0;
	
	iVar0 = ((uParam0->f_32 + uParam0->f_38) + uParam0->f_69);
	if (iVar0 > 0)
	{
		func_80(func_96(), 21, iVar0, 0, 0);
		func_50(10, iVar0);
		iLocal_57[0] = iVar0;
	}
}

void func_80(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x29CE
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

int func_81(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x2AB5
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

void func_82(bool bParam0)//Position - 0x30B4
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

void func_83(int iParam0)//Position - 0x3336
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

void func_84(int iParam0)//Position - 0x3390
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_59(129, 0, -1, 1);
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

char* func_85(int iParam0)//Position - 0x3467
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

int func_86()//Position - 0x34EF
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_87(int iParam0)//Position - 0x34FC
{
	func_94(93, iParam0);
	func_94(29, iParam0);
	func_94(30, iParam0);
}

bool func_88(int iParam0)//Position - 0x351C
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

int func_89(int iParam0, int iParam1, int iParam2)//Position - 0x356A
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_28();
	}
	iVar1 = func_91(iParam0, iParam1);
	uVar2 = func_90(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDAB376DC6F83D68C(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_90(int iParam0)//Position - 0x35A7
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

int func_91(int iParam0, int iParam1)//Position - 0x3893
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_28();
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

int func_92(bool bParam0)//Position - 0x3B60
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
		func_58(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_64(27, 1);
	return 1;
}

void func_93(int iParam0, int iParam1)//Position - 0x3C17
{
	int iVar0;
	
	unk_0x6CB99B97664C3727(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x3A57956BCE003880(iParam0, iVar0, 1);
}

void func_94(int iParam0, int iParam1)//Position - 0x3C3A
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

void func_95()//Position - 0x3C97
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

int func_96()//Position - 0x3D0C
{
	func_97();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_97()//Position - 0x3D25
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

int func_98(var uParam0, int iParam1)//Position - 0x3E22
{
	if (!func_15(&(uParam0->f_2)))
	{
		func_102(&(uParam0->f_2));
	}
	unk_0x4E0EC60D119222B1(14);
	unk_0x4B6031094354FED6(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0x694514BD37EC4E94(2, 201) || uParam0->f_8)
		{
			if (!func_15(&(uParam0->f_5)))
			{
				func_102(&(uParam0->f_5));
				func_101(uParam0, 1051260355);
			}
		}
		if (func_15(&(uParam0->f_5)))
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
		if (!func_15(&(uParam0->f_5)))
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

void func_99(var uParam0)//Position - 0x3F25
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_100(var uParam0)//Position - 0x3F3B
{
	if (func_15(uParam0))
	{
		if (func_14(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_13(unk_0xFA30DFD0084E92FE(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

void func_101(var uParam0, float fParam1)//Position - 0x3F7A
{
	unk_0x29CD142125FE177B(*uParam0, "SHARD_ANIM_OUT");
	unk_0x1E1FB49121565EB6(uParam0->f_9);
	unk_0xD44E04EBBDC4CE88(fParam1);
	unk_0xF9FBC2F3F73D94C9();
}

void func_102(int iParam0)//Position - 0x3FA0
{
	func_103(iParam0, 0f);
}

void func_103(int iParam0, float fParam1)//Position - 0x3FAF
{
	iParam0->f_1 = (func_13(unk_0xFA30DFD0084E92FE(*iParam0, 4)) - fParam1);
	unk_0xF0059F27F7BB6680(iParam0, 1);
	unk_0x7CB6FD92BE491AD9(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_104(int iParam0)//Position - 0x3FDD
{
	Global_11646 = iParam0;
	Global_11647 = iParam0;
}

void func_105(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, char* sParam7, int iParam8, int iParam9)//Position - 0x3FF1
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

char* func_106()//Position - 0x405F
{
	if (unk_0x7AF0088ABFA713B6())
	{
		return "SHOW_COND_SHARD_MESSAGE";
	}
	return "SHOW_SHARD_MIDSIZED_MESSAGE";
}

char* func_107(var uParam0)//Position - 0x4079
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

void func_108(var uParam0)//Position - 0x4113
{
	int iVar0;
	
	Local_161.f_1 = SYSTEM::TO_FLOAT(uParam0->f_32);
	Local_161.f_2 = SYSTEM::TO_FLOAT(uParam0->f_38);
	func_50(11, uParam0->f_38);
	func_50(12, uParam0->f_38);
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

int func_109(var uParam0, var uParam1, int iParam2, var uParam3, bool bParam4)//Position - 0x41C2
{
	int iVar0;
	
	switch (*uParam0)
	{
		case 0:
			if (!unk_0x1D403DFADBC2DE3C(*iParam2, 0))
			{
				func_147(uParam1, 320, bParam4);
				unk_0x8EF3D958386640FE(*iParam2, unk_0x491B2241281A03B7(100, 300));
				func_145(uParam1, iParam2, "TAXI_BLIP_PASS", 1);
				func_50(13, 0);
				*uParam0 = 1;
			}
			else
			{
				*uParam0 = 5;
			}
			break;
		
		case 1:
			if (!unk_0x1D403DFADBC2DE3C(*iParam2, 0))
			{
				if (!unk_0x5237AF95232D78C5(*iParam2, 0))
				{
					unk_0xDDCAA2E64649E083(unk_0xFC1CAE18F3ECBF2D(), true, 0);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x1D403DFADBC2DE3C(*iParam2, 0))
			{
				func_116(&uLocal_45, *iParam2, 0, 0, 1, 1, 1);
				if (!func_115(uParam1->f_2, *iParam2))
				{
					if (unk_0xE59B7F5A03335350(uParam1->f_4, 0))
					{
						if (unk_0xD9C1758D86688CEA(*iParam2, uParam1->f_4, 1))
						{
							*uParam0 = 3;
						}
					}
					if (unk_0xD9C1758D86688CEA(*iParam2, uParam1->f_2, 1))
					{
						*uParam0 = 3;
					}
					if (*uParam0 != 3)
					{
						if (!unk_0x5237AF95232D78C5(uParam1->f_2, 0))
						{
							if (unk_0xE642C1AC73CE364E(uParam1->f_2, *iParam2, 20f, 20f, 10f, 0, 1, 0))
							{
								if (unk_0x32E373675659FDB0(uParam1->f_2))
								{
									*uParam0 = 3;
								}
								else
								{
									if (unk_0xE642C1AC73CE364E(uParam1->f_2, *iParam2, 2f, 2f, 10f, 0, 1, 0))
									{
										*uParam0 = 3;
									}
									if (unk_0x72C9157015C2151B(uParam1->f_2, 6))
									{
										if (unk_0xCDE05E3688DE990D())
										{
											*uParam0 = 3;
										}
									}
								}
							}
							else if (unk_0xE642C1AC73CE364E(uParam1->f_2, *iParam2, 50f, 50f, 10f, 0, 1, 0))
							{
								if (unk_0x32E373675659FDB0(uParam1->f_2))
								{
									*uParam0 = 3;
								}
							}
						}
						else if (unk_0xE642C1AC73CE364E(uParam1->f_2, *iParam2, 50f, 50f, 25f, 0, 1, 0))
						{
							if (unk_0x32E373675659FDB0(uParam1->f_2))
							{
								*uParam0 = 3;
							}
						}
					}
				}
				else
				{
					func_113(&uLocal_45, 0, 0);
					uParam1->f_6D = 1;
					*uParam0 = 5;
				}
			}
			else
			{
				func_113(&uLocal_45, 0, 0);
				*uParam0 = 5;
			}
			break;
		
		case 3:
			func_113(&uLocal_45, 0, 0);
			if (!unk_0x1D403DFADBC2DE3C(*iParam2, 0))
			{
				if (unk_0x2DA8CA50A72528FB(uParam1->f_8))
				{
					unk_0x07B8ECB35A4ED3AC(&(uParam1->f_8));
				}
				unk_0x2E35C4FA5F0ED22F(*iParam2, true);
				unk_0xC5A6DFE2B8987B17(&iVar0);
				unk_0xEE7131C3C73E7282(0, 5000);
				unk_0x5558ED6D4A2DEC93(0, uParam1->f_2, 1000f, -1, 0, 0);
				unk_0x0D042F5C6172D20A(0, 0);
				unk_0x535008C596714F9E(iVar0);
				unk_0xA8E6405305C0D7DF(*iParam2, iVar0);
				unk_0x02DAF06EA4F08219(&iVar0);
				unk_0x22321800954A532E(*iParam2, true);
				func_230(uParam1, 109, 1, 0, 0);
				*uParam0 = 4;
				unk_0xEB233A3B7635D2AC();
			}
			else
			{
				*uParam0 = 4;
				unk_0xEB233A3B7635D2AC();
			}
			if (unk_0x2DA8CA50A72528FB(uParam1->f_8))
			{
				unk_0x07B8ECB35A4ED3AC(&(uParam1->f_8));
			}
			func_110(*iParam2, uParam3, 1, -1);
			break;
		
		case 4:
			if (unk_0xF1B911222059B1A1(uParam3->f_6))
			{
				if (unk_0x2DA8CA50A72528FB(uParam3->f_5))
				{
					unk_0x07B8ECB35A4ED3AC(&(uParam3->f_5));
				}
				func_197(uParam1);
				func_50(14, 0);
				uParam1->f_38 = 0;
				*uParam0 = 5;
			}
			break;
		
		case 5:
			if (!unk_0x1D403DFADBC2DE3C(*iParam2, 0))
			{
				unk_0x02537C8C1BEEB477(iParam2);
				if (unk_0x2DA8CA50A72528FB(uParam1->f_8))
				{
					unk_0x07B8ECB35A4ED3AC(&(uParam1->f_8));
				}
			}
			else
			{
				unk_0xED946BB96C5E9C4A(unk_0xFC1CAE18F3ECBF2D(), 2, 0);
				unk_0xCE6A8FE7DACF8BD4(unk_0xFC1CAE18F3ECBF2D(), 0);
			}
			return 1;
			break;
	}
	return 0;
}

void func_110(int iParam0, var uParam1, bool bParam2, int iParam3)//Position - 0x44F7
{
	vector3 vVar0;
	
	uParam1->f_1 = 0;
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		uParam1->f_2 = { unk_0x541C2AEF053615BC(iParam0, true) };
		unk_0x8EF3D958386640FE(iParam0, 0);
		*uParam1 = 0;
	}
	else
	{
		if (iParam3 <= 0)
		{
			*uParam1 = unk_0x491B2241281A03B7(80, 200);
		}
		else
		{
			*uParam1 = iParam3;
		}
		uParam1->f_2 = { unk_0x733A3EDEC245A3D2(iParam0, 1067030938, 1069547520) };
	}
	unk_0xF0059F27F7BB6680(&(uParam1->f_1), 3);
	unk_0xF0059F27F7BB6680(&(uParam1->f_1), 4);
	vVar0 = { unk_0xEFF59CF8CAAFA23E(uParam1->f_2, 1067030938, 1069547520) };
	uParam1->f_6 = unk_0x249B372087B496EC(joaat("pickup_money_variable"), vVar0, uParam1->f_1, *uParam1, 1, 0);
	if (bParam2)
	{
		if (!unk_0x2DA8CA50A72528FB(uParam1->f_5))
		{
			uParam1->f_5 = func_111(uParam1->f_6);
			unk_0x436D0272182E484D(uParam1->f_5, "TAXI_BLIP_MONE");
		}
		else
		{
			unk_0x436D0272182E484D(uParam1->f_5, "TAXI_BLIP_MONE");
		}
	}
}

int func_111(int iParam0)//Position - 0x45D3
{
	int iVar0;
	
	if (!unk_0xA901403F1DB7A780(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x480F8C5F7EE6B525(iParam0);
	unk_0x3F5F1772D71D5EC4(iVar0, func_112(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
	return iVar0;
}

float func_112(bool bParam0, float fParam1, float fParam2)//Position - 0x460B
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_113(var uParam0, int iParam1, int iParam2)//Position - 0x4622
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
		if (func_114(uParam0->f_3))
		{
			unk_0x7456702622C62EA0(1);
		}
	}
	if (!unk_0xEAEFBBEC1AEA464B(sVar0))
	{
		if (func_114(sVar0))
		{
			unk_0x7456702622C62EA0(1);
		}
	}
}

int func_114(char* sParam0)//Position - 0x46FF
{
	unk_0xF07D20149ECBC61E(sParam0);
	return unk_0xA66DBDA0A072514A(0);
}

int func_115(int iParam0, int iParam1)//Position - 0x4712
{
	if (!unk_0x36CEFBE9B745A58D(iParam1))
	{
		if (!unk_0xE642C1AC73CE364E(iParam0, iParam1, 100f, 100f, 50f, 0, 1, 0))
		{
			if (!unk_0x33CC9445B2DF9387(unk_0x541C2AEF053615BC(iParam1, true), 15f))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_116(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x475B
{
	func_117(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_117(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)//Position - 0x4775
{
	func_118(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_118(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x4792
{
	if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
	{
		func_113(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_119(uParam0, iParam1, vParam2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_119(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x47CA
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
	if (func_114(iVar0))
	{
		func_144();
	}
	if (func_143(iParam1) && unk_0x8F6EAC9E7D6812D5(iParam1))
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
			if (func_138(uParam0, bParam5, bParam7, 0))
			{
				func_135(uParam0, iParam1, vParam2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_124(iVar0))
				{
					if ((unk_0xEAEFBBEC1AEA464B(uParam0->f_3) && !unk_0xEAEFBBEC1AEA464B(iVar0)) && unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
					{
						if ((iVar1 && !unk_0xF16DAFF595E80F7C()) && uParam6)
						{
							if (!func_114(iVar0))
							{
								func_123(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x3362CDE8460ED38B("CMN_HINT", iVar0))
								{
									func_122(1);
								}
							}
						}
					}
				}
			}
			else if (func_124(iVar0))
			{
				if (unk_0xEAEFBBEC1AEA464B(uParam0->f_3) && !unk_0xEAEFBBEC1AEA464B(iVar0))
				{
					if (((unk_0xD1DC4B08247A4317(iParam1) && iVar1) && !unk_0xF16DAFF595E80F7C()) && uParam6)
					{
						if (!func_114(iVar0))
						{
							func_123(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x3362CDE8460ED38B("CMN_HINT", iVar0))
							{
								func_122(1);
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
				if (func_114(sParam3))
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
						func_113(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xE3CA72BD77D43B09(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x3D875C2512206692(6) == 3 || unk_0x3D875C2512206692(6) == 4)
					{
						func_113(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x57379381A330B2FF(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x3D875C2512206692(4) == 3 || unk_0x3D875C2512206692(4) == 4)
					{
						func_113(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xD3A0CD3AD9C3D22A(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x3D875C2512206692(5) == 3 || unk_0x3D875C2512206692(5) == 4)
					{
						func_113(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x5CFC8E6CC224744A(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x3D875C2512206692(2) == 3 || unk_0x3D875C2512206692(2) == 4)
					{
						func_113(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x621126C4FACA4770() == 3 || unk_0x621126C4FACA4770() == 4)
				{
					func_113(uParam0, iVar0, 1);
				}
			}
			if (!func_138(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_121(uParam0))
				{
					func_120(uParam0);
				}
			}
		}
	}
	else
	{
		func_113(uParam0, iVar0, 0);
	}
}

void func_120(var uParam0)//Position - 0x4B37
{
	if (func_143(unk_0xBC25C936A095B5BA()))
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

int func_121(var uParam0)//Position - 0x4BA0
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

int func_122(bool bParam0)//Position - 0x4BCB
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

void func_123(char* sParam0, int iParam1)//Position - 0x4C75
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, true, iParam1);
}

int func_124(char* sParam0)//Position - 0x4C8C
{
	if (!func_125(1, 1, 0))
	{
		if ((!unk_0xF1734B55490E9045(sParam0) && func_114(sParam0)) || func_114("CMN_HINT"))
		{
			unk_0x7456702622C62EA0(1);
		}
		return 0;
	}
	switch (Global_8C41)
	{
		case 0:
		case 3:
			if (func_122(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_122(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_122(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_125(bool bParam0, bool bParam1, bool bParam2)//Position - 0x4D25
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
	if (func_45(0))
	{
		return 0;
	}
	if (func_134())
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
	if ((func_133() || func_132(Global_440000.f_243FE)) || func_131())
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			iVar1 = func_130(unk_0xBC25C936A095B5BA(), 0);
			if (((unk_0xE8E192A5EFE0253F(iVar0, iVar1) || (unk_0x6F79ECA8C83E4357(iVar0) == 562680400 && iVar1 != -1)) || (unk_0x6F79ECA8C83E4357(iVar0) == 1181327175 && iVar1 != -1)) || (((unk_0x6F79ECA8C83E4357(iVar0) == -1693015116 && iVar1 == 0) && func_129(iVar0, 10)) && unk_0x3EB14CBD49DA0017(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (func_126(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	return 1;
}

int func_126(int iParam0)//Position - 0x4F73
{
	if (iParam0 != func_128())
	{
		if (func_127(iParam0, 1, 1))
		{
			return Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1;
		}
		else if ((Global_140856 && iParam0 == unk_0xB5CEFD608600A09F()) && func_127(iParam0, 1, 0))
		{
			return Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1;
		}
	}
	return 0;
}

int func_127(int iParam0, bool bParam1, bool bParam2)//Position - 0x4FD9
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

int func_128()//Position - 0x5023
{
	return -1;
}

int func_129(int iParam0, int iParam1)//Position - 0x502C
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

int func_130(int iParam0, int iParam1)//Position - 0x508E
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

var func_131()//Position - 0x5113
{
	return Global_255A46.f_10;
}

bool func_132(int iParam0)//Position - 0x5121
{
	return iParam0 == 51;
}

var func_133()//Position - 0x512E
{
	return Global_255A46.f_F;
}

bool func_134()//Position - 0x513C
{
	return unk_0x105601648511CC64() <= Global_43C1.f_1671 + 100;
}

void func_135(var uParam0, int iParam1, vector3 vParam2, int iParam3)//Position - 0x5151
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
		func_113(uParam0, 0, 0);
	}
	if (func_41(vParam2, 0f, 0f, 0f, 0))
	{
		if (unk_0x386592AF38881675(iParam1))
		{
			iVar0 = unk_0x399F7937FFE4DEBF(iParam1);
			if (!unk_0x5237AF95232D78C5(iVar0, 0))
			{
				if (unk_0x15DBD981998D4FE1(iVar0))
				{
					if (!func_136())
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

bool func_136()//Position - 0x5261
{
	return func_137(unk_0xB5CEFD608600A09F());
}

int func_137(int iParam0)//Position - 0x5271
{
	if (unk_0x6F79ECA8C83E4357(unk_0xA95CF30C72EB526E(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_138(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x5290
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
					if (func_142(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x105601648511CC64();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_141(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x105601648511CC64();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_141(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x105601648511CC64();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_142(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x105601648511CC64();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_121(uParam0))
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
						if (!func_142(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x105601648511CC64();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_141(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x105601648511CC64();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_141(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x105601648511CC64();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_142(bParam1, bParam2, bParam3))
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
					if (!func_142(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_141(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_141(bParam1, bParam2, bParam3) || unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
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
				else if (!func_142(bParam1, bParam2, bParam3))
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
						if (func_140(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_139(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1) || func_139(bParam1, bParam2, bParam3))
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
					else if (func_140(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_121(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_125(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_144();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_139(bool bParam0, bool bParam1, bool bParam2)//Position - 0x55FC
{
	if (!func_125(bParam0, bParam1, bParam2))
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

int func_140(bool bParam0, bool bParam1, bool bParam2)//Position - 0x564E
{
	if (!func_125(bParam0, bParam1, bParam2))
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

int func_141(bool bParam0, bool bParam1, bool bParam2)//Position - 0x5697
{
	if (!func_125(bParam0, bParam1, bParam2))
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

int func_142(bool bParam0, bool bParam1, bool bParam2)//Position - 0x56F6
{
	if (!func_125(bParam0, bParam1, bParam2))
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

int func_143(int iParam0)//Position - 0x574C
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

void func_144()//Position - 0x57A7
{
	unk_0xF0059F27F7BB6680(&Global_93C, 4);
}

void func_145(var uParam0, var uParam1, char* sParam2, bool bParam3)//Position - 0x57B7
{
	if (bParam3)
	{
		func_413(uParam0);
	}
	if (!unk_0x2DA8CA50A72528FB(uParam0->f_8))
	{
		uParam0->f_8 = func_146(*uParam1, 0, 0);
	}
	if (!unk_0xEAEFBBEC1AEA464B(sParam2))
	{
		unk_0x436D0272182E484D(uParam0->f_8, sParam2);
	}
}

int func_146(int iParam0, bool bParam1, bool bParam2)//Position - 0x57F7
{
	int iVar0;
	
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x511FE22BCF5353CD(iParam0);
	if (unk_0xD27AC0E9B78CFDD7(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(iVar0, func_112(unk_0x7AF0088ABFA713B6(), 1f, 1f));
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
		unk_0x3F5F1772D71D5EC4(iVar0, func_112(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
		unk_0xF9C2945DB5BAB4BF(iVar0, bParam1);
	}
	else if (unk_0xB12D030810E8447D(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(iVar0, func_112(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
	}
	return iVar0;
}

void func_147(var uParam0, int iParam1, bool bParam2)//Position - 0x589B
{
	int iVar0;
	
	if (!unk_0x1D403DFADBC2DE3C(uParam0->f_3, 0))
	{
		unk_0x2E35C4FA5F0ED22F(uParam0->f_3, false);
		unk_0x5502708AECB47F5D(uParam0->f_3);
		unk_0xABA7AE40608505F2(uParam0->f_3, 3, false);
		unk_0x91629AC1E1F78419(uParam0->f_3, 17, true);
		unk_0xA4E856A8CD53B8DF(uParam0->f_3);
		if ((func_9(uParam0->f_3, uParam0->f_1D, 1) <= 200f && !func_148(uParam0->f_1D)) && !bParam2)
		{
			func_149(uParam0);
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

int func_148(vector3 vParam0)//Position - 0x598F
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_149(var uParam0)//Position - 0x59B9
{
	int iVar0;
	
	if (!unk_0x1D403DFADBC2DE3C(uParam0->f_3, 0))
	{
		if (func_41(func_42(), uParam0->f_1D, 0))
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

int func_150(var uParam0, bool bParam1)//Position - 0x5B9E
{
	if (!unk_0x1D403DFADBC2DE3C(uParam0->f_3, 0))
	{
		if (func_159(uParam0) && func_155(uParam0, 1, 1084227584))
		{
			if (bParam1)
			{
				if (func_154(uParam0, 2097152))
				{
					func_151(uParam0);
				}
			}
			else
			{
				func_151(uParam0);
			}
		}
		else if (!func_159(uParam0))
		{
			if (bParam1)
			{
				if (func_154(uParam0, 2097152))
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

void func_151(var uParam0)//Position - 0x5C3B
{
	vector3 vVar0;
	
	if (func_148(uParam0->f_1D))
	{
		vVar0 = { uParam0->f_11 };
	}
	else
	{
		vVar0 = { uParam0->f_1D };
	}
	func_152(uParam0, vVar0);
}

void func_152(var uParam0, vector3 vParam1)//Position - 0x5C71
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		if (!unk_0x1D403DFADBC2DE3C(uParam0->f_3, 0) && unk_0x25EF720B1CAB1E23(uParam0->f_3, uParam0->f_4))
		{
			vVar0 = { unk_0xA4455714F3DCE207(uParam0->f_4, -1.78774f, -1.62399f, -0.6206f) };
			vVar1 = { unk_0xA4455714F3DCE207(uParam0->f_4, 1.78498f, -1.24105f, -0.6422f) };
			if (func_153(uParam0->f_3, uParam0->f_4) == 0)
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

int func_153(int iParam0, int iParam1)//Position - 0x5D92
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

bool func_154(var uParam0, int iParam1)//Position - 0x5E04
{
	if (iParam1 != 1073741824)
	{
		return (func_23(uParam0->f_51, iParam1) && !func_186());
	}
	return func_186();
}

int func_155(var uParam0, bool bParam1, float fParam2)//Position - 0x5E31
{
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		if (unk_0x62F3A07C43FFB568(uParam0->f_2, uParam0->f_4, 0))
		{
			if (func_45(1))
			{
				func_43(0);
			}
			if (func_34())
			{
				func_158();
				return 1;
			}
			else if (func_156(uParam0->f_4, fParam2, 1, 1056964608, 0, 1, 0))
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

int func_156(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x5EB2
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
	func_157(iParam0);
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

void func_157(int iParam0)//Position - 0x6041
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

void func_158()//Position - 0x606D
{
	if (unk_0x36210078ECC9DC40(unk_0xB5CEFD608600A09F()))
	{
		unk_0xD50A43D7C495F078(unk_0xB5CEFD608600A09F());
	}
}

int func_159(var uParam0)//Position - 0x6088
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

void func_160(var uParam0, int iParam1)//Position - 0x60BD
{
	if (iParam1 < 5)
	{
		unk_0xF0059F27F7BB6680(&(uParam0->f_3C[iParam1 /*3*/]), 2);
		uParam0->f_69 = (uParam0->f_69 + uParam0->f_3C[iParam1 /*3*/].f_1);
	}
}

void func_161(bool bParam0)//Position - 0x60EB
{
	if (Local_231.f_38 < Local_231.f_3A)
	{
		func_230(&Local_231, 103, 1, 0, 0);
	}
	else if (Local_231.f_38 >= Local_231.f_3B)
	{
		if (!bParam0)
		{
			func_230(&Local_231, 101, 1, 0, 0);
		}
		else
		{
			func_62(&(Local_231.f_52), 4194304);
			func_230(&Local_231, 22, 1, 0, 0);
		}
	}
	else if (!bParam0)
	{
		func_230(&Local_231, 102, 1, 0, 0);
	}
	else
	{
		func_62(&(Local_231.f_52), 2097152);
		func_230(&Local_231, 22, 1, 0, 0);
	}
}

void func_162(var uParam0, bool bParam1)//Position - 0x617B
{
	func_173(uParam0, uParam0->f_3);
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		if (!unk_0x62F3A07C43FFB568(uParam0->f_2, uParam0->f_4, 0))
		{
			if (!func_172(uParam0, 14))
			{
				if (func_186())
				{
					func_171(1);
				}
				func_170(uParam0, 11, 1);
				func_165(uParam0, 1);
				func_299(uParam0, 14, 0f, 1);
				if (uParam0->f_19A < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_159(uParam0))
				{
					if ((unk_0x105601648511CC64() % 1000) < 50)
					{
					}
					if (unk_0x5237AF95232D78C5(uParam0->f_2, 0))
					{
						if (func_409(uParam0, 15) > 5f)
						{
							func_299(uParam0, 15, 0f, 1);
						}
					}
					if (func_409(uParam0, 14) > 20f)
					{
						func_332(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (func_409(uParam0, 14) > 20f)
				{
					if (func_163(uParam0->f_4, 1) > 40f)
					{
						func_332(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_332(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}

float func_163(int iParam0, bool bParam1)//Position - 0x6286
{
	return func_164(unk_0xA95CF30C72EB526E(unk_0xFC1CAE18F3ECBF2D()), iParam0, bParam1);
}

float func_164(int iParam0, int iParam1, bool bParam2)//Position - 0x629E
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

void func_165(var uParam0, bool bParam1)//Position - 0x62FC
{
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		if (bParam1)
		{
			if (unk_0x2DA8CA50A72528FB(uParam0->f_8))
			{
				unk_0x7781946F1FC054FA(uParam0->f_8, 0);
				unk_0x0BBAABB52887CF8C(uParam0->f_8, false);
				func_169(uParam0, &(uParam0->f_62), 4, 3);
			}
			else if (unk_0x2DA8CA50A72528FB(uParam0->f_9))
			{
				unk_0x7781946F1FC054FA(uParam0->f_9, 0);
				unk_0x0BBAABB52887CF8C(uParam0->f_9, false);
				unk_0xEB233A3B7635D2AC();
				if (func_159(uParam0))
				{
					func_230(uParam0, 2, 1, 0, 0);
				}
				else
				{
					func_169(uParam0, &(uParam0->f_62), 4, 3);
				}
			}
			func_166(uParam0, 0, 0);
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

void func_166(var uParam0, bool bParam1, bool bParam2)//Position - 0x641A
{
	if (bParam1)
	{
		func_413(uParam0);
	}
	if (!unk_0x2DA8CA50A72528FB(uParam0->f_A))
	{
		uParam0->f_A = func_146(uParam0->f_4, 1, 0);
		unk_0x436D0272182E484D(uParam0->f_A, "TAXI_BLIP_CAR");
		unk_0x0BBAABB52887CF8C(uParam0->f_A, true);
		func_167(uParam0);
		if (bParam2)
		{
			unk_0xEB233A3B7635D2AC();
			func_230(uParam0, 3, 1, 0, 0);
		}
	}
}

void func_167(var uParam0)//Position - 0x6475
{
	func_299(uParam0, 14, 0, 0);
	func_168();
}

void func_168()//Position - 0x648B
{
	int iVar0;
	
	iVar0 = unk_0x3E12B546F3F2597A();
	if (unk_0xE59B7F5A03335350(iVar0, 0))
	{
		unk_0xF2C27FE5A8B98CB5(-1, "Radio_Off", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_169(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x64B4
{
	if (!func_23(*uParam1, iParam2))
	{
		unk_0xEB233A3B7635D2AC();
		func_230(uParam0, iParam3, 1, 0, 0);
		func_62(uParam1, iParam2);
	}
}

void func_170(var uParam0, int iParam1, bool bParam2)//Position - 0x64E0
{
	uParam0->f_19E = iParam1;
	if (bParam2)
	{
	}
}

void func_171(int iParam0)//Position - 0x64F4
{
	Global_41AB = iParam0;
}

bool func_172(var uParam0, int iParam1)//Position - 0x6501
{
	return func_15(&(uParam0->f_92[iParam1 /*3*/]));
}

void func_173(var uParam0, int iParam1)//Position - 0x6515
{
	if (unk_0x724D816EA203A79E(iParam1))
	{
		if (!unk_0x36CEFBE9B745A58D(iParam1))
		{
			if (unk_0x231DB1D0F4218A1B(unk_0xB5CEFD608600A09F()))
			{
				if ((unk_0xD2B7EC731CF3F2D6(iParam1, joaat("weapon_stungun"), 0) || unk_0xD2B7EC731CF3F2D6(iParam1, 0, 2)) || unk_0xD2B7EC731CF3F2D6(iParam1, 0, 1))
				{
					func_332(uParam0, "Passenger injured by player with weapon.", 14);
				}
				unk_0xA67D3DDB524B8DBA(unk_0xB5CEFD608600A09F());
			}
		}
	}
}

int func_174(var uParam0)//Position - 0x657A
{
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		if (unk_0x3187EF5798B5D209(uParam0->f_4, -1, 0) == uParam0->f_2)
		{
			if (func_172(uParam0, 14))
			{
				func_175(uParam0);
			}
			func_165(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

void func_175(var uParam0)//Position - 0x65BC
{
	func_178(uParam0, 14, 0);
	func_178(uParam0, 15, 0);
	func_177();
	if (func_176())
	{
		func_171(0);
	}
}

int func_176()//Position - 0x65E6
{
	if (Global_41AB == 1)
	{
		return 1;
	}
	return 0;
}

void func_177()//Position - 0x65FD
{
	int iVar0;
	
	iVar0 = unk_0x3E12B546F3F2597A();
	if (unk_0xE59B7F5A03335350(iVar0, 0))
	{
		unk_0xF2C27FE5A8B98CB5(-1, "Radio_On", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_178(var uParam0, int iParam1, bool bParam2)//Position - 0x6626
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

int func_179()//Position - 0x666F
{
	if (unk_0xE59B7F5A03335350(Local_231.f_4, 0))
	{
		if (iLocal_274 && unk_0x8910237449BB6F79(Local_231.f_4) < 5f)
		{
			if (!func_172(&Local_231, 21))
			{
				func_299(&Local_231, 21, 0, 0);
			}
		}
		if (unk_0x8910237449BB6F79(Local_231.f_4) >= 5f && func_172(&Local_231, 21))
		{
			func_178(&Local_231, 21, 0);
		}
	}
	if (bLocal_277)
	{
		func_180(&Local_231, 21);
		fLocal_273 = func_409(&Local_231, 21);
		if (fLocal_273 >= fLocal_272)
		{
			bLocal_278 = true;
			return 1;
		}
		else
		{
			bLocal_278 = false;
			return 1;
		}
	}
	return 0;
}

void func_180(var uParam0, int iParam1)//Position - 0x6711
{
	int iVar0;
	
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (!func_14(&(uParam0->f_92[iVar0 /*3*/])))
			{
				func_181(&(uParam0->f_92[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (func_15(&(uParam0->f_92[iParam1 /*3*/])))
	{
		if (!func_14(&(uParam0->f_92[iParam1 /*3*/])))
		{
			func_181(&(uParam0->f_92[iParam1 /*3*/]));
		}
	}
}

void func_181(int iParam0)//Position - 0x677D
{
	if (func_15(iParam0))
	{
		if (!func_14(iParam0))
		{
			iParam0->f_2 = (func_13(unk_0xFA30DFD0084E92FE(*iParam0, 4)) - iParam0->f_1);
			unk_0xF0059F27F7BB6680(iParam0, 2);
		}
	}
}

int func_182(var uParam0)//Position - 0x67B7
{
	float fVar0;
	vector3 vVar1;
	
	if (!unk_0x36CEFBE9B745A58D(*uParam0))
	{
		switch (iLocal_268)
		{
			case 0:
				if (!func_186())
				{
					if (func_188(&(Local_231.f_F4), "txm1aud", "txm1_Puke1", 8, 0, 0, 0))
					{
						unk_0xE896C0AD02364F2A(*uParam0, sLocal_282, sLocal_281, 8f, -4f, -1, 0, 0, 0, 0, 0);
						if (!unk_0x1D403DFADBC2DE3C(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0))
						{
							switch (func_130(*uParam0, 0))
							{
								case 0:
									unk_0xD5DC0505375F4D00(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 1);
									break;
								
								case 2:
									unk_0xD5DC0505375F4D00(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 3);
									break;
								
								default:
									unk_0xD5DC0505375F4D00(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 3);
									break;
								}
						}
						if (func_172(&Local_231, 10))
						{
							func_178(&Local_231, 10, 0);
						}
						iLocal_268++;
					}
				}
				else if ((unk_0x105601648511CC64() % 1000) < 50)
				{
				}
				break;
			
			case 1:
				if (unk_0x96044E39418AAF17(*uParam0, sLocal_282, sLocal_281, 3))
				{
					fVar0 = unk_0x4A3B2CF8BADDD74E(*uParam0, sLocal_282, sLocal_281);
					if (bLocal_283)
					{
					}
					if (fVar0 > 0.243f && fVar0 < 0.28f)
					{
						if (!iLocal_274)
						{
							unk_0xC913AF98662D4928("scr_puke_in_car", *uParam0, vLocal_265, vLocal_266, 31086, 1065353216, 0, 0, 0);
							iLocal_274 = 1;
						}
					}
					else if (fVar0 > 0.295f && fVar0 < 0.37f)
					{
						if (!iLocal_275)
						{
							unk_0xC913AF98662D4928("scr_puke_in_car", *uParam0, vLocal_265, vLocal_266, 31086, 1065353216, 0, 0, 0);
							iLocal_275 = 1;
						}
					}
					else if (fVar0 > 0.487857f && fVar0 < 0.55f)
					{
						if (!iLocal_276)
						{
							unk_0xC913AF98662D4928("scr_puke_in_car", *uParam0, vLocal_265, vLocal_266, 31086, 1065353216, 0, 0, 0);
							iLocal_276 = 1;
							if (!iLocal_279)
							{
								StringCopy(&vVar1, "txm1_pukeR1", 24);
								func_183(&vVar1);
								func_188(&(Local_231.f_F4), "txm1aud", &vVar1, 8, 0, 0, 0);
								iLocal_279 = 1;
							}
						}
					}
					if (unk_0x4A3B2CF8BADDD74E(*uParam0, sLocal_282, sLocal_281) > 0.9f)
					{
						iLocal_268++;
					}
				}
				break;
			
			case 2:
				if (!unk_0x96044E39418AAF17(*uParam0, sLocal_282, sLocal_281, 3))
				{
				}
				unk_0xE896C0AD02364F2A(*uParam0, sLocal_282, "drunk_idle", 8f, -8f, -1, 1, 0, 0, 0, 0);
				iLocal_274 = 0;
				iLocal_268++;
				break;
			
			case 3:
				bLocal_277 = true;
				if (!func_172(&Local_231, 10))
				{
					func_299(&Local_231, 10, 0, 0);
				}
				return 1;
				break;
			}
	}
	return 0;
}

void func_183(char* sParam0)//Position - 0x6A64
{
	StringConCat(sParam0, "F", 24);
}

void func_184()//Position - 0x6A74
{
	Global_394A = 0;
	func_185();
}

void func_185()//Position - 0x6A84
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

int func_186()//Position - 0x6ADB
{
	if (Global_3DB8 != 0 || unk_0xE6711F601F11B66B())
	{
		return 1;
	}
	return 0;
}

int func_187(var uParam0)//Position - 0x6AFD
{
	return uParam0->f_68;
}

bool func_188(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x6B09
{
	func_196(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_189(sParam2, iParam3, 0);
}

int func_189(char* sParam0, int iParam1, bool bParam2)//Position - 0x6B57
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
					func_185();
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
		if (func_195(8, -1))
		{
			return 0;
		}
		Global_3E04 = { Global_3DFE };
		func_194();
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
				func_193();
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
				if (func_192())
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
			if (func_32())
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
			func_191();
			Global_3DC2 = bParam2;
		}
		Global_3DBA = iParam1;
		StringCopy(&Global_3C3B, sParam0, 24);
		Global_394A = 0;
		func_190();
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
		func_185();
	}
	return 0;
}

void func_190()//Position - 0x6E23
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

void func_191()//Position - 0x6E55
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

int func_192()//Position - 0x6EEA
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

void func_193()//Position - 0x6F83
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

void func_194()//Position - 0x7025
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

bool func_195(int iParam0, int iParam1)//Position - 0x707D
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

void func_196(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x70B8
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

void func_197(var uParam0)//Position - 0x710E
{
	float fVar0;
	
	fVar0 = uParam0->f_29;
	fVar0 = func_198(fVar0);
	iLocal_57[4] = SYSTEM::CEIL(fVar0);
	iLocal_57[5] = SYSTEM::CEIL(fVar0);
	func_50(4, SYSTEM::CEIL(fVar0));
	func_50(5, SYSTEM::CEIL(fVar0));
	uParam0->f_32 = SYSTEM::CEIL((fVar0 * 100f));
}

float func_198(float fParam0)//Position - 0x7160
{
	return (fParam0 * 0.0006213712f);
}

void func_199(var uParam0, int iParam1, bool bParam2)//Position - 0x7170
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

void func_200(var uParam0)//Position - 0x7194
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(uParam0[iVar0 /*8*/])->f_6 = 0;
		(uParam0[iVar0 /*8*/])->f_7 = 0;
		StringCopy(uParam0[iVar0 /*8*/], func_201(), 24);
		iVar0++;
	}
	unk_0xEB233A3B7635D2AC();
	func_48();
}

var func_201()//Position - 0x71D4
{
	var uVar0;
	
	return uVar0;
}

int func_202(var uParam0, float fParam1, float fParam2)//Position - 0x71DE
{
	if ((((unk_0x726D9204B160D23E() && !unk_0x26641E1BFD792DBC()) && !unk_0x422F9EDE839E6ABB()) && !unk_0x17FAADF9916EF741()) && !uParam0->f_8E)
	{
		if (func_219(uParam0))
		{
			func_218(uParam0, &(uParam0->f_2B));
			func_215(uParam0);
			func_210(uParam0);
			func_206(uParam0, fParam2, 1117782016);
			func_205(uParam0);
			func_203(uParam0);
			if ((SYSTEM::ROUND(func_409(uParam0, 7)) % 5) == 0 && !iLocal_85)
			{
				iLocal_85 = 1;
			}
			if ((SYSTEM::ROUND(func_409(uParam0, 7)) % 5) == 2 && iLocal_85)
			{
				iLocal_85 = 0;
			}
			return func_220(uParam0, fParam1);
		}
	}
	return 0;
}

void func_203(var uParam0)//Position - 0x7292
{
	float fVar0;
	
	if ((func_159(uParam0) && func_23(uParam0->f_51, 67108864)) && unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 0)
	{
		if ((unk_0x105601648511CC64() - iLocal_89) >= 10000)
		{
			fVar0 = func_204(uParam0->f_11, 1);
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
		if (iLocal_88 >= 2 && !func_186())
		{
			func_230(uParam0, 136, 1, 0, 1);
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
			if (!func_159(uParam0))
			{
			}
			if (!func_23(uParam0->f_51, 67108864))
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

float func_204(vector3 vParam0, bool bParam1)//Position - 0x7368
{
	return func_9(unk_0xA95CF30C72EB526E(unk_0xFC1CAE18F3ECBF2D()), vParam0, bParam1);
}

void func_205(var uParam0)//Position - 0x7382
{
	if (unk_0xD95B48C451FB1A20(unk_0xFC1CAE18F3ECBF2D()) && !func_23(uParam0->f_2C, 2))
	{
		func_62(&(uParam0->f_2C), 2);
	}
	else if (!unk_0xD95B48C451FB1A20(unk_0xFC1CAE18F3ECBF2D()) && func_23(uParam0->f_2C, 2))
	{
		func_21(&(uParam0->f_2C), 2);
		uParam0->f_2F++;
		func_50(9, 0);
	}
	if (uParam0->f_2F > 30)
	{
		func_230(uParam0, 47, 1, 0, 0);
		uParam0->f_2F = 0;
		uParam0->f_4C = (uParam0->f_4C + SYSTEM::CEIL(5f));
	}
}

void func_206(var uParam0, float fParam1, float fParam2)//Position - 0x740B
{
	if (func_159(uParam0) && func_23(uParam0->f_2C, 4))
	{
		if ((unk_0xB66CFDE6B830965A(uParam0->f_4) || unk_0x8910237449BB6F79(uParam0->f_4) < 3f) && func_209(uParam0))
		{
			if (!func_172(uParam0, 2))
			{
				func_207(uParam0, 2);
			}
			else if (func_159(uParam0))
			{
				if (func_409(uParam0, 2) > fParam1 && !func_172(uParam0, 14))
				{
					if (func_36())
					{
						func_230(uParam0, 48, 1, 0, 0);
					}
					else
					{
						func_230(uParam0, 48, 1, 0, 0);
					}
					func_299(uParam0, 2, 0, 0);
					if (func_172(uParam0, 10))
					{
						func_299(uParam0, 10, 0, 0);
					}
				}
				if (!func_172(uParam0, 3))
				{
					func_299(uParam0, 3, 0, 0);
				}
				else if (func_409(uParam0, 3) >= fParam2)
				{
					func_178(uParam0, 3, 0);
					func_332(uParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (func_172(uParam0, 2))
			{
				func_178(uParam0, 2, 0);
			}
			if (func_172(uParam0, 3))
			{
				func_178(uParam0, 3, 0);
			}
		}
	}
}

void func_207(var uParam0, int iParam1)//Position - 0x7526
{
	func_208(&(uParam0->f_92[iParam1 /*3*/]));
}

void func_208(int iParam0)//Position - 0x753A
{
	if (!func_15(iParam0))
	{
		func_102(iParam0);
	}
}

int func_209(var uParam0)//Position - 0x7552
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

void func_210(var uParam0)//Position - 0x757C
{
	if (!func_23(uParam0->f_2C, 1))
	{
		switch (uParam0->f_19C)
		{
			case 0:
				if (unk_0x904E94842BB9E173(unk_0xFC1CAE18F3ECBF2D()) >= 1)
				{
					if (func_409(uParam0, 9) > 1f)
					{
						func_214(uParam0, unk_0x904E94842BB9E173(unk_0xFC1CAE18F3ECBF2D()));
						if (uParam0->f_19A != 22)
						{
							func_230(uParam0, 50, 1, 1, 0);
						}
						func_299(uParam0, 9, 0, 0);
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
				if (!func_186() && func_409(uParam0, 9) > 4f)
				{
					func_230(uParam0, 52, 1, 0, 0);
					uParam0->f_19C = 2;
				}
				break;
			
			case 2:
				if (func_213("TAXI_OBJ_POL", 0, 0))
				{
					if (uParam0->f_19A != 22)
					{
						func_230(uParam0, 51, 0, 0, 0);
					}
					uParam0->f_19C = 3;
				}
				else if (unk_0x904E94842BB9E173(unk_0xFC1CAE18F3ECBF2D()) < 1)
				{
					uParam0->f_19C = 3;
				}
				break;
			
			case 3:
				if (unk_0x86B385F1E3450315(unk_0xFC1CAE18F3ECBF2D(), func_212(uParam0)))
				{
					func_214(uParam0, unk_0x904E94842BB9E173(unk_0xFC1CAE18F3ECBF2D()));
					func_50(6, 0);
				}
				if (!func_211(uParam0))
				{
					if (!unk_0xE6711F601F11B66B())
					{
						if (func_409(uParam0, 16) > 10f)
						{
							if (uParam0->f_19A != 22)
							{
								func_230(uParam0, 51, 1, 0, 0);
							}
						}
					}
				}
				if (unk_0x904E94842BB9E173(unk_0xFC1CAE18F3ECBF2D()) < 1)
				{
					if (func_213("TAXI_OBJ_POL", 0, 0))
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
				if (!func_186())
				{
					if (uParam0->f_19A != 22)
					{
						func_230(uParam0, 53, 1, 0, 1);
					}
					func_50(7, func_212(uParam0));
					func_214(uParam0, 0);
					uParam0->f_19C = 5;
				}
				break;
			
			case 5:
				if (!func_186())
				{
					func_178(uParam0, 9, 0);
					func_299(uParam0, 11, 0, 0);
					uParam0->f_19C = 0;
				}
				break;
			}
	}
}

bool func_211(var uParam0)//Position - 0x77A0
{
	return uParam0->f_6E;
}

int func_212(var uParam0)//Position - 0x77AC
{
	return uParam0->f_6A;
}

bool func_213(char* sParam0, int iParam1, char* sParam2)//Position - 0x77B8
{
	unk_0xE2CFC41F8121CE68(sParam0);
	if (iParam1 == 1)
	{
		unk_0xC9C304D0AABE1335(sParam2);
	}
	return unk_0x121EFFA2D57472F2();
}

void func_214(var uParam0, int iParam1)//Position - 0x77D6
{
	if (uParam0->f_6A != iParam1)
	{
		uParam0->f_6A = iParam1;
	}
}

void func_215(var uParam0)//Position - 0x77ED
{
	if (func_217(uParam0))
	{
		func_216(uParam0);
	}
}

void func_216(var uParam0)//Position - 0x7804
{
	if (unk_0xFFAEC2D4BAF978BE() && uParam0->f_1A2.f_4 != 0)
	{
		uParam0->f_1A2.f_4 = 0;
	}
	switch (uParam0->f_1A2.f_4)
	{
		case 0:
			uParam0->f_1A2 = unk_0x93DD0CE3F3963C56();
			func_178(uParam0, 20, 0);
			uParam0->f_1A2.f_4++;
			break;
		
		case 1:
			if (uParam0->f_1A2.f_8 && !uParam0->f_1A2 == uParam0->f_1A2.f_2)
			{
				if (func_409(uParam0, 20) > 3f)
				{
					func_230(uParam0, 87, 1, 0, 0);
					uParam0->f_1A2.f_8 = 0;
					uParam0->f_1A2.f_4++;
				}
			}
			else if (uParam0->f_1A2 == uParam0->f_1A2.f_1)
			{
				if (!func_23(uParam0->f_51, 262144) || !func_23(uParam0->f_51, 1048576))
				{
					if (func_409(uParam0, 20) > 5f)
					{
						uParam0->f_1A2.f_5 = 1;
						func_230(uParam0, 84, 1, 0, 0);
						uParam0->f_1A2.f_4++;
					}
				}
			}
			else if (uParam0->f_1A2 == uParam0->f_1A2.f_2)
			{
				if (!func_23(uParam0->f_52, 67108864))
				{
					if (func_409(uParam0, 20) > 5f)
					{
						uParam0->f_1A2.f_6 = 1;
						uParam0->f_1A2.f_8 = 0;
						func_230(uParam0, 85, 1, 0, 0);
						func_178(uParam0, 22, 0);
						uParam0->f_1A2.f_4++;
					}
				}
			}
			else if (uParam0->f_1A2.f_7)
			{
				if (func_409(uParam0, 20) > 8f)
				{
					func_230(uParam0, 86, 1, 0, 0);
					uParam0->f_1A2.f_4++;
				}
			}
			break;
		
		case 2:
			if (func_23(uParam0->f_51, 262144) || func_23(uParam0->f_52, 67108864))
			{
				if (!func_172(uParam0, 22))
				{
					func_207(uParam0, 22);
				}
			}
			if (func_172(uParam0, 22) && func_409(uParam0, 22) > 15f)
			{
				if (uParam0->f_1A2 == uParam0->f_1A2.f_1)
				{
					if (!func_23(uParam0->f_51, 1048576))
					{
						func_230(uParam0, 84, 1, 0, 0);
						func_178(uParam0, 22, 0);
					}
				}
				else if (uParam0->f_1A2 == uParam0->f_1A2.f_2)
				{
					if (!func_23(uParam0->f_52, 134217728))
					{
						func_230(uParam0, 85, 1, 0, 0);
						func_178(uParam0, 22, 0);
					}
				}
			}
			break;
	}
}

bool func_217(var uParam0)//Position - 0x7A7F
{
	return uParam0->f_78;
}

void func_218(var uParam0, var uParam1)//Position - 0x7A8B
{
	unk_0x70870CD1718D74F0(uParam0->f_1AC, uParam1, -1);
	uParam0->f_29 = (*uParam1 - uParam0->f_2A);
}

int func_219(var uParam0)//Position - 0x7AAC
{
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
		{
			if (!unk_0x62F3A07C43FFB568(uParam0->f_3, uParam0->f_4, 1) && !unk_0x8F1FDD0A40DC834A(uParam0->f_3))
			{
				func_332(uParam0, "Passenger left car.", 9);
			}
			else if (func_174(uParam0))
			{
				if (func_213("TAXI_OBJ_PICKUP", 0, 0))
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
				func_162(uParam0, 1);
			}
		}
	}
	return 0;
}

int func_220(var uParam0, float fParam1)//Position - 0x7B3B
{
	if (func_61(uParam0) == 2)
	{
		if (unk_0x4DBCE270B354E123(uParam0->f_4, uParam0->f_11, (fParam1 + 1f), (fParam1 + 1f), 2f, !uParam0->f_8C, true, 0))
		{
		}
		if (((func_222(uParam0->f_4, uParam0->f_11, 1) <= (fParam1 + 1f) && unk_0x904E94842BB9E173(unk_0xFC1CAE18F3ECBF2D()) < 1) && func_221(1, 1, 1)) && unk_0x58F9E0EA914AEF2C(uParam0->f_4))
		{
			return func_155(uParam0, 1, fParam1);
		}
	}
	else if (((unk_0x4DBCE270B354E123(uParam0->f_4, uParam0->f_11, (fParam1 + 1f), (fParam1 + 1f), 2f, !uParam0->f_8C, true, 0) && unk_0x904E94842BB9E173(unk_0xFC1CAE18F3ECBF2D()) < 1) && func_221(1, 1, 1)) && unk_0x58F9E0EA914AEF2C(uParam0->f_4))
	{
		return func_155(uParam0, 1, fParam1);
	}
	return 0;
}

int func_221(bool bParam0, bool bParam1, bool bParam2)//Position - 0x7C12
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

float func_222(int iParam0, vector3 vParam1, bool bParam2)//Position - 0x7CF7
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

int func_223(var uParam0, int iParam1)//Position - 0x7D31
{
	if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
	{
		if (unk_0x62F3A07C43FFB568(uParam0->f_3, uParam0->f_4, 0))
		{
			if (unk_0x1AAF0C23233C57AF(uParam0->f_4, iParam1, 0))
			{
				if (unk_0xF4FCC3C1048FF2AB(uParam0->f_3, 355471868) != 1)
				{
					unk_0x9BFB4F4439403039(uParam0->f_3, uParam0->f_4, 0);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_224(var uParam0, int iParam1)//Position - 0x7D86
{
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
		{
			if (unk_0x62F3A07C43FFB568(uParam0->f_3, uParam0->f_4, 0))
			{
				if (!unk_0x1AAF0C23233C57AF(uParam0->f_4, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_225(var uParam0)//Position - 0x7DCA
{
	func_226(uParam0, 1000);
	if (!unk_0x1D403DFADBC2DE3C(uParam0->f_3, 0) && !unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0x49D46EE47C9CCB66(uParam0->f_3);
		unk_0x85DB484A637CEAB9(uParam0->f_3, unk_0xBC25C936A095B5BA(), 0);
	}
	func_184();
	func_175(uParam0);
}

void func_226(var uParam0, int iParam1)//Position - 0x7E16
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

int func_227(var uParam0)//Position - 0x7E50
{
	if (unk_0x724D816EA203A79E(uParam0->f_4) && unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		if ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("granger") || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("rebel")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("rebel2")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("sandking")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("sandking2")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("patriot")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("surfer")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("surfer2")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("mesa")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("rancherxl")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("tiptruck2")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("mixer")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("mixer2")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("rubble")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("scrap")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("tiptruck")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("armytanker")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("barracks")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("barracks2")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("pranger")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("ambulance")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == 1938952078) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("policet")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("riot")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("sheriff2")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("stockade")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("stockade3")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("biff")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("hauler")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("packer")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("trash")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("benson")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("phantom")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("pounder")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("utillitruck")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("utillitruck2")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("utillitruck3")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("dloader")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("flatbed")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("tourbus")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("towtruck")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("towtruck2")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("camper")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("taco")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("boxville")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("boxville2")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("burrito")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("burrito2")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("burrito3")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("burrito4")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("gburrito")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("journey")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("mule")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("mule2")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("pony")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("rumpo")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("speedo")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("speedo2")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("youga"))
		{
			return 2;
		}
		else if ((((((((((((((((((((((unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("phoenix") || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("coquette")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("dune")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("cheetah")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("cogcabrio")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("jb700")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("monroe")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("ninef")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("ninef2")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("rapidgt")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("rapidgt2")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("stinger")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("stingergt")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("ztype")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("banshee")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("bullet")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("carbonizzare")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("comet2")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("entityxf")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("f620")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("infernus")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("surano")) || unk_0x6F79ECA8C83E4357(uParam0->f_4) == joaat("voltic"))
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 3;
}

void func_228()//Position - 0x84E7
{
	func_62(&(Local_231.f_37), 2);
	func_62(&(Local_231.f_37), 4);
	func_62(&(Local_231.f_37), 16);
	func_62(&(Local_231.f_37), 64);
	func_62(&(Local_231.f_37), 256);
	func_62(&(Local_231.f_37), 512);
	func_62(&(Local_231.f_37), 1024);
	func_62(&(Local_231.f_37), 2048);
	func_62(&(Local_231.f_37), 67108864);
	func_62(&(Local_231.f_37), 134217728);
	func_62(&(Local_231.f_37), 536870912);
	func_62(&(Local_231.f_37), 268435456);
	func_62(&(Local_231.f_37), 8192);
	func_62(&(Local_231.f_37), 16384);
	func_62(&(Local_231.f_37), 32768);
	func_62(&(Local_231.f_37), 65536);
	func_62(&(Local_231.f_37), 131072);
	func_62(&(Local_231.f_37), 262144);
	func_62(&(Local_231.f_37), 524288);
	func_62(&(Local_231.f_37), 1048576);
	func_62(&(Local_231.f_37), 2097152);
	func_62(&(Local_231.f_64), 64);
	func_62(&(Local_231.f_64), 2048);
	func_62(&(Local_231.f_64), 128);
	func_62(&(Local_231.f_64), 32);
	func_62(&(Local_231.f_64), 256);
	func_62(&(Local_231.f_64), 8);
	func_62(&(Local_231.f_64), 1);
	func_62(&(Local_231.f_64), 4096);
	func_62(&(Local_231.f_64), 8192);
	unk_0x7CB6FD92BE491AD9(&uLocal_328, 2);
	func_207(&Local_231, 7);
}

void func_229(var uParam0)//Position - 0x866A
{
	unk_0xA67D3DDB524B8DBA(unk_0xB5CEFD608600A09F());
	unk_0xDDCAA2E64649E083(unk_0xFC1CAE18F3ECBF2D(), true, 0);
	func_226(uParam0, 1000);
}

void func_230(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x868D
{
	uParam0->f_1A0 = iParam1;
	if (bParam4)
	{
		func_299(uParam0, 16, 4f, 0);
		if (func_231(uParam0))
		{
			func_48();
		}
	}
	func_264(uParam0, iParam2, bParam3);
}

int func_231(var uParam0)//Position - 0x86C2
{
	vector3 vVar0;
	struct<6> Var1;
	
	StringCopy(&vVar0, uParam0->f_8F, 24);
	if (func_186())
	{
		Var1 = { func_232() };
		if (!unk_0xF1734B55490E9045(&Var1))
		{
			StringConCat(&vVar0, "_obj1", 24);
			if (unk_0x3362CDE8460ED38B(&Var1, &vVar0))
			{
				return 1;
			}
			StringCopy(&vVar0, uParam0->f_8F, 24);
			StringConCat(&vVar0, "_gret1", 24);
			func_183(&vVar0);
			if (unk_0x3362CDE8460ED38B(&Var1, &vVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<6> func_232()//Position - 0x8728
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_3DB8 == 4)
	{
		return Global_3C3B;
	}
	return Var0;
}

int func_233(var uParam0)//Position - 0x874C
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

int func_234(var uParam0, bool bParam1, float fParam2)//Position - 0x879F
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
			func_162(uParam0, 1);
			if (func_34())
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
			func_262(uParam0);
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
			if (func_172(uParam0, 14))
			{
				func_175(uParam0);
				func_165(uParam0, 0);
			}
			if (func_172(uParam0, 9))
			{
				func_178(uParam0, 9, 0);
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
				if (uParam0->f_8D && func_261(uParam0, uParam0->f_3) > 300f)
				{
					func_332(uParam0, "Left Passenger", 8);
				}
				switch (uParam0->f_30)
				{
					case 0:
						if (unk_0xF4FCC3C1048FF2AB(uParam0->f_3, 242628503) != 1 || ((func_164(unk_0xBC25C936A095B5BA(), uParam0->f_3, 1) < 20f && func_222(uParam0->f_3, uParam0->f_B, 1) <= 28f) && func_222(uParam0->f_4, uParam0->f_B, 1) <= 28f))
						{
							if (func_258(uParam0, fParam2))
							{
								uParam0->f_30++;
							}
						}
						break;
					
					case 1:
						if (func_257(uParam0, 0, 28f, fVar4, 4f))
						{
							uParam0->f_8A = 1;
							if (bLocal_86)
							{
								uParam0->f_7 = func_256(uParam0->f_4, uParam0->f_3);
								iVar0 = func_255(uParam0, &iVar1);
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
							if (!func_209(uParam0))
							{
								unk_0xA4E856A8CD53B8DF(uParam0->f_3);
							}
							else if (((unk_0xF4FCC3C1048FF2AB(uParam0->f_3, 242628503) != 1 && unk_0xF4FCC3C1048FF2AB(uParam0->f_3, 242628503) != 0) && unk_0xF4FCC3C1048FF2AB(uParam0->f_3, 242628503) != 7) && func_261(uParam0, uParam0->f_3) > 8f)
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
							if (func_164(uParam0->f_4, uParam0->f_3, 1) < 3f)
							{
								if (!func_254(uParam0, 1))
								{
									unk_0x49D46EE47C9CCB66(uParam0->f_3);
									func_332(uParam0, "You had a dead body in your back seat.", 5);
								}
								else if (!func_253(uParam0->f_4))
								{
									unk_0x49D46EE47C9CCB66(uParam0->f_3);
									func_332(uParam0, "You had a dead body in your back seat.", 0);
								}
							}
						}
						func_251(uParam0);
						if (func_261(uParam0, uParam0->f_3) < fVar4 || func_34())
						{
							if (unk_0x62F3A07C43FFB568(uParam0->f_2, uParam0->f_4, 0))
							{
								if (func_236(uParam0))
								{
									func_235(uParam0);
									iLocal_81 = unk_0x105601648511CC64();
									unk_0xC8FD3EBBB90E8D7F(uParam0->f_3, 26, true);
									func_178(uParam0, 5, 0);
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

void func_235(var uParam0)//Position - 0x8CB1
{
	if (unk_0x2DA8CA50A72528FB(uParam0->f_8))
	{
		unk_0x0BBAABB52887CF8C(uParam0->f_8, false);
		unk_0x07B8ECB35A4ED3AC(&(uParam0->f_8));
	}
}

int func_236(var uParam0)//Position - 0x8CD5
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	vector3 vVar7;
	
	func_250("UPDATE_PASSENGER_ENTER_CUTSCENE", &(uParam0->f_4E), 1000);
	iVar6 = -1;
	if (!unk_0x1D403DFADBC2DE3C(uParam0->f_3, 0) && !unk_0x1D403DFADBC2DE3C(uParam0->f_4, 0))
	{
		func_249();
	}
	if (bLocal_86)
	{
		iLocal_78 = 10;
	}
	if ((iLocal_78 < 7 && iLocal_78 > 0) && !bLocal_86)
	{
		if (func_247(iLocal_80))
		{
			iLocal_78 = 7;
		}
	}
	switch (iLocal_78)
	{
		case 0:
			if (func_155(uParam0, 0, 1084227584) && func_221(1, 1, 1))
			{
				if (func_254(uParam0, 1))
				{
					iLocal_80 = unk_0x105601648511CC64();
					SYSTEM::SETTIMERA(0);
					iLocal_78 = 1;
				}
				else
				{
					func_332(uParam0, "You had a dead body in your back seat.", 5);
				}
			}
			break;
		
		case 1:
			if (SYSTEM::TIMERA() > 500)
			{
				uParam0->f_7 = func_256(uParam0->f_4, uParam0->f_3);
				iVar3 = func_255(uParam0, &iVar4);
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
			iVar6 = func_246(&(uParam0->f_199), unk_0xA4455714F3DCE207(uParam0->f_4, 0f, 2.2f, 0.275f), unk_0xA4455714F3DCE207(uParam0->f_4, vVar0), 1);
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
				func_245(0, 0, 1);
				unk_0xA0C0B32E74BE8DB7(unk_0x541C2AEF053615BC(uParam0->f_4, true), 3f, 0);
				unk_0x4516EDD0A096FB5B(unk_0x541C2AEF053615BC(uParam0->f_4, true), 25f, 0);
				unk_0x7456702622C62EA0(1);
				unk_0xEB233A3B7635D2AC();
				func_243();
				func_264(uParam0, 0, 0);
				vVar7 = { unk_0xA4455714F3DCE207(uParam0->f_4, vVar2) };
				unk_0x641B19E156645A92(uParam0->f_3, vVar7, 1, false, 0, 1);
				unk_0x019CE76D5286C95C(uParam0->f_3, func_241(uParam0));
				func_240(uParam0, 1f, 1f, 1f, 0f, 0f, 0f, 1112014848);
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
			func_250("TAXI_PED_ENTER_CUT_WAIT", &(uParam0->f_4E), 1000);
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
					unk_0x82948B11F55E5713(uParam0->f_4, func_239(uParam0->f_7), 1);
				}
				unk_0x062C9995BFD27B2A(false, false, 3000, 1, 0, 0);
				unk_0x4EC087603E1DEF9C(*uParam0, 0);
				unk_0x4EC087603E1DEF9C(uParam0->f_1, 0);
				unk_0xF3F01A78937DC905(0f);
				unk_0x2B9AEC08E469E384(0f, 1065353216);
				unk_0x829FA4611BD56B44(800);
				unk_0x7456702622C62EA0(1);
				unk_0xEB233A3B7635D2AC();
				func_243();
				func_264(uParam0, 0, 0);
				iLocal_78 = 8;
			}
			break;
		
		case 8:
			if (unk_0x726D9204B160D23E() && !unk_0x26641E1BFD792DBC())
			{
				func_237(1, 1, 1);
				return 1;
			}
			break;
		
		case 9:
			unk_0x062C9995BFD27B2A(false, false, 3000, 1, 0, 0);
			unk_0x4EC087603E1DEF9C(*uParam0, 0);
			unk_0x4EC087603E1DEF9C(uParam0->f_1, 0);
			unk_0xF3F01A78937DC905(0f);
			unk_0x2B9AEC08E469E384(0f, 1065353216);
			func_237(1, 1, 1);
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

void func_237(bool bParam0, bool bParam1, int iParam2)//Position - 0x91E2
{
	if (bParam0)
	{
		unk_0xDDCAA2E64649E083(unk_0xFC1CAE18F3ECBF2D(), true, 0);
	}
	unk_0xD5E53AA0828339DA(1);
	func_24(0, 1, iParam2, 0, 0);
	if (bParam1)
	{
		unk_0x43F06392C4EF25E0(true);
		unk_0x59B038076F830627(true);
	}
	func_238(23, 0);
}

void func_238(int iParam0, bool bParam1)//Position - 0x921E
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

int func_239(int iParam0)//Position - 0x9240
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

void func_240(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3)//Position - 0x9278
{
	if (!unk_0xEF0E25DA0CB6E8FF(*uParam0))
	{
		*uParam0 = unk_0x585DE1CBEEB2D27D(26379945, vParam1, vParam2, fParam3, 0, 2);
	}
}

float func_241(var uParam0)//Position - 0x92A3
{
	float fVar0;
	vector3 vVar1;
	
	fVar0 = 0f;
	vVar1 = { func_42() };
	if (uParam0->f_7 == 2)
	{
		vVar1 = { unk_0xA4455714F3DCE207(uParam0->f_4, 0.773f, -0.646f, -0.6422f) };
	}
	else
	{
		vVar1 = { unk_0xA4455714F3DCE207(uParam0->f_4, -0.773f, -0.646f, -0.6422f) };
	}
	fVar0 = func_242(unk_0x541C2AEF053615BC(uParam0->f_3, true), vVar1);
	return fVar0;
}

float func_242(struct<2> Param0, float fParam1, struct<2> Param2, var uParam3)//Position - 0x930C
{
	return unk_0xFDC254CE02DB0919((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

void func_243()//Position - 0x9326
{
	Global_394A = 0;
	func_244();
}

void func_244()//Position - 0x9336
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

void func_245(int iParam0, int iParam1, int iParam2)//Position - 0x935A
{
	unk_0xDDCAA2E64649E083(unk_0xFC1CAE18F3ECBF2D(), false, iParam0);
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		unk_0x7A71B0C6DDC0D7DA(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 15f);
	}
	unk_0xD5E53AA0828339DA(iParam1);
	func_43(0);
	func_24(1, 1, iParam2, 0, 0);
	unk_0x43F06392C4EF25E0(false);
	unk_0x59B038076F830627(false);
	func_238(23, 1);
}

int func_246(var uParam0, vector3 vParam1, vector3 vParam2, bool bParam3)//Position - 0x93B1
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

int func_247(int iParam0)//Position - 0x942B
{
	if (func_248() && unk_0x105601648511CC64() >= iParam0 + 1000)
	{
		unk_0x7A41D32A383895D8(500);
		while (!unk_0x17FAADF9916EF741())
		{
			SYSTEM::WAIT(0);
		}
		func_43(0);
		func_184();
		return 1;
	}
	return 0;
}

int func_248()//Position - 0x946E
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

void func_249()//Position - 0x94A0
{
	if (func_36())
	{
		unk_0xA451DE3BE57FDA90("appInternet");
	}
	if (func_35())
	{
		unk_0xA451DE3BE57FDA90("appCamera");
	}
	if (func_45(1))
	{
		func_43(0);
	}
}

void func_250(char* sParam0, int iParam1, int iParam2)//Position - 0x94D3
{
	if (unk_0x105601648511CC64() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = unk_0x105601648511CC64();
}

void func_251(var uParam0)//Position - 0x94F2
{
	int iVar0;
	
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
		{
			if (func_163(uParam0->f_3, 1) > 30f || func_252(uParam0))
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
					func_332(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

int func_252(var uParam0)//Position - 0x95C3
{
	if ((unk_0x8910237449BB6F79(uParam0->f_4) > 3f && func_409(uParam0, 5) > 15f) || unk_0x8730A01B72F31307(uParam0->f_4))
	{
		return 1;
	}
	return 0;
}

int func_253(int iParam0)//Position - 0x95FD
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

int func_254(var uParam0, bool bParam1)//Position - 0x96B9
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

int func_255(var uParam0, var uParam1)//Position - 0x9773
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

int func_256(int iParam0, int iParam1)//Position - 0x97E8
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

int func_257(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4)//Position - 0x98A0
{
	if (!unk_0x1D403DFADBC2DE3C(uParam0->f_3, 0))
	{
		if (!unk_0x41A5D6415E2CC10E(uParam0->f_3) && func_163(uParam0->f_3, 1) < fParam2)
		{
			if (!func_172(uParam0, 5))
			{
				func_299(uParam0, 5, 0, 0);
			}
		}
		else if (func_172(uParam0, 5))
		{
			func_178(uParam0, 5, 0);
		}
		if (((func_409(uParam0, 5) > IntToFloat(iParam1) && unk_0x8910237449BB6F79(uParam0->f_4) < fParam4) && !unk_0x41A5D6415E2CC10E(uParam0->f_3)) || func_163(uParam0->f_3, 1) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_258(var uParam0, float fParam1)//Position - 0x993E
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
			if ((func_164(uParam0->f_4, uParam0->f_3, 0) <= fParam1 && !uParam0->f_8E) && unk_0x357058E632979E65((vVar0.z - vVar1.z)) < 5f)
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
				if (!func_23(uParam0->f_2C, 128))
				{
					func_230(uParam0, 4, 1, 0, 1);
				}
			}
			else
			{
				func_259(uParam0->f_3, "TAXI_HAIL", uParam0->f_91, 4);
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

void func_259(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x9C1B
{
	unk_0x7E80A36CD8BDF4D1(iParam0, sParam1, sParam2, func_260(iParam3), 0);
}

int func_260(int iParam0)//Position - 0x9C34
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

float func_261(var uParam0, int iParam1)//Position - 0x9E29
{
	if (!unk_0x1D403DFADBC2DE3C(iParam1, 0))
	{
		if (func_209(uParam0))
		{
			return func_164(uParam0->f_4, iParam1, 1);
		}
	}
	return 0f;
}

void func_262(var uParam0)//Position - 0x9E54
{
	func_173(uParam0, uParam0->f_3);
	if (func_209(uParam0))
	{
		if (func_172(uParam0, 14))
		{
			func_175(uParam0);
			if (unk_0x2DA8CA50A72528FB(uParam0->f_A))
			{
				unk_0x07B8ECB35A4ED3AC(&(uParam0->f_A));
			}
		}
	}
	if (!func_172(uParam0, 9))
	{
		if (unk_0x2DA8CA50A72528FB(uParam0->f_8))
		{
			unk_0x7781946F1FC054FA(uParam0->f_8, 0);
			unk_0x0BBAABB52887CF8C(uParam0->f_8, false);
		}
		func_299(uParam0, 9, 0, 0);
		func_263("TAXI_OBJ_POL", 7500, 1);
	}
}

void func_263(char* sParam0, int iParam1, int iParam2)//Position - 0x9ED2
{
	iParam2 = iParam2;
	unk_0x3714DE83381EADC2(sParam0);
	unk_0x41D8F63F629E76BE(iParam1, 1);
}

void func_264(var uParam0, int iParam1, bool bParam2)//Position - 0x9EEB
{
	uParam0->f_6E = iParam1;
	if (bParam2)
	{
		func_48();
		func_299(uParam0, 16, 4f, 0);
		unk_0xEB233A3B7635D2AC();
	}
}

int func_265(var uParam0, int iParam1)//Position - 0x9F10
{
	if (!unk_0xFA9040D29FE330BD(2))
	{
		return 0;
	}
	func_269(12);
	if (func_23(uParam0->f_2C, 8))
	{
		if (!func_23(uParam0->f_2C, 128))
		{
			if (unk_0x4FCDC2EC534819EF(unk_0xBC25C936A095B5BA()) && !func_23(uParam0->f_2C, 256))
			{
				func_62(&(uParam0->f_2C), 256);
			}
			if (func_23(uParam0->f_2C, 256) && unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
			{
				func_230(uParam0, 135, 1, 0, 1);
				func_62(&(uParam0->f_2C), 128);
			}
		}
	}
	if (!func_268(uParam0, iParam1))
	{
		if (func_163(uParam0->f_3, 1) < 35f)
		{
			if (!func_23(uParam0->f_2C, 8))
			{
				unk_0x85DB484A637CEAB9(uParam0->f_3, unk_0xBC25C936A095B5BA(), 0);
				func_230(uParam0, 133, 1, 0, 1);
				func_62(&(uParam0->f_2C), 8);
			}
		}
		if ((unk_0x36CEFBE9B745A58D(uParam0->f_3) || unk_0x889DA6CE8E4DB344(uParam0->f_3)) || func_163(uParam0->f_3, 1) > 400f)
		{
			func_332(uParam0, "ped is fleeing or injured", 5);
		}
	}
	else
	{
		uParam0->f_4 = unk_0x9FE9D386222EEE47(uParam0->f_2, 0);
		unk_0xA73D1278857991A2(uParam0->f_4, true);
		if (unk_0x3187EF5798B5D209(uParam0->f_4, -1, 0) == uParam0->f_2)
		{
			unk_0x0E622862E5E566BB(uParam0->f_4);
			func_266(uParam0);
			func_50(2, 0);
			bLocal_86 = true;
			func_208(&iLocal_82);
			return 1;
		}
		else
		{
			func_332(uParam0, "No Taxi", 21);
			func_123("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}

void func_266(var uParam0)//Position - 0xA089
{
	if (!unk_0x1D403DFADBC2DE3C(uParam0->f_4, 0))
	{
		if (func_267())
		{
		}
	}
}

int func_267()//Position - 0xA0A5
{
	if (unk_0xFA30DFD0084E92FE(unk_0x491B2241281A03B7(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_268(var uParam0, int iParam1)//Position - 0xA0C6
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
				bVar2 = func_253(iVar0);
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
					if (!func_23(uParam0->f_2C, 64))
					{
						if (unk_0xFA9040D29FE330BD(2))
						{
							func_123("TX_VIP_DMGD", -1);
							if (func_114("TX_VIP_DMGD"))
							{
								func_62(&(uParam0->f_2C), 64);
							}
						}
					}
					return 0;
				}
				else if (!bVar4 || !bVar3)
				{
					if (!func_23(uParam0->f_2C, 32))
					{
						if (unk_0xFA9040D29FE330BD(2))
						{
							func_123("TX_VIP_CAR", -1);
							if (func_114("TX_VIP_CAR"))
							{
								func_62(&(uParam0->f_2C), 32);
							}
						}
					}
					return 0;
				}
				else if (!bVar5)
				{
					if (!func_23(uParam0->f_2C, 16))
					{
						if (unk_0xFA9040D29FE330BD(2))
						{
							func_123("TX_VIP_SMALL", -1);
							if (func_114("TX_VIP_SMALL"))
							{
								func_62(&(uParam0->f_2C), 16);
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
			func_21(&(uParam0->f_2C), 16);
			func_21(&(uParam0->f_2C), 64);
			func_21(&(uParam0->f_2C), 32);
		}
	}
	return 0;
}

void func_269(int iParam0)//Position - 0xA6DB
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

void func_270(var uParam0)//Position - 0xA734
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_22(&(uParam0->f_64), iVar0);
		iVar0++;
	}
}

void func_271()//Position - 0xA759
{
	Local_165 = 0;
	func_288(43788/*func_290*/, 43763/*func_289*/, 1);
	func_288(43524/*func_286*/, 43501/*func_285*/, 1);
	func_288(43439/*func_284*/, 43414/*func_283*/, 1);
	func_288(43342/*func_282*/, 43318/*func_281*/, 1);
	func_288(43208/*func_280*/, 43187/*func_279*/, 1);
	func_288(43134/*func_277*/, 43109/*func_276*/, 1);
	func_288(42967/*func_273*/, 42944/*func_272*/, 1);
}

int func_272(var uParam0, var uParam1)//Position - 0xA7C0
{
	uParam1 = uParam1;
	func_332(uParam0, "Taxi Not Driveable", 1);
	return 1;
}

int func_273(var uParam0)//Position - 0xA7D7
{
	if (unk_0x724D816EA203A79E(uParam0->f_4))
	{
		if (func_275(uParam0->f_4))
		{
			func_274(uParam0, 1);
			return 1;
		}
	}
	return 0;
}

void func_274(var uParam0, int iParam1)//Position - 0xA801
{
	uParam0->f_75 = 1;
	uParam0->f_76 = iParam1;
}

int func_275(int iParam0)//Position - 0xA814
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

int func_276(var uParam0, var uParam1)//Position - 0xA865
{
	uParam1 = uParam1;
	func_332(uParam0, "Didn't lose police in time.", 9);
	return 1;
}

int func_277(var uParam0)//Position - 0xA87E
{
	if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0)
	{
		if (func_278(uParam0->f_55, 32))
		{
			return 1;
		}
	}
	return 0;
}

bool func_278(var uParam0, int iParam1)//Position - 0xA8A4
{
	return (uParam0 && iParam1) != 0;
}

int func_279(var uParam0, var uParam1)//Position - 0xA8B3
{
	uParam1 = uParam1;
	func_274(uParam0, 11);
	return 1;
}

int func_280(var uParam0)//Position - 0xA8C8
{
	if (unk_0x724D816EA203A79E(uParam0->f_4))
	{
		if (unk_0x149E9368A11035DE(uParam0->f_4) && !unk_0x58F9E0EA914AEF2C(uParam0->f_4))
		{
			if (!func_172(uParam0, 25))
			{
				func_299(uParam0, 25, 0, 0);
			}
			else if (func_409(uParam0, 25) > 2f)
			{
				return 1;
			}
		}
		else if (func_172(uParam0, 25))
		{
			func_178(uParam0, 25, 0);
		}
	}
	return 0;
}

int func_281(var uParam0, var uParam1)//Position - 0xA936
{
	uParam1 = uParam1;
	func_332(uParam0, "Taxi Is Flipped", 0);
	return 1;
}

int func_282(var uParam0)//Position - 0xA94E
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

int func_283(var uParam0, var uParam1)//Position - 0xA996
{
	uParam1 = uParam1;
	func_332(uParam0, "Stayed stopped for too long.", 9);
	return 1;
}

int func_284(var uParam0)//Position - 0xA9AF
{
	if (!unk_0x1D403DFADBC2DE3C(uParam0->f_4, 0))
	{
		if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
		{
			if (unk_0xB66CFDE6B830965A(uParam0->f_4))
			{
				if (func_278(uParam0->f_56, 8))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_285(var uParam0, var uParam1)//Position - 0xA9ED
{
	uParam1 = uParam1;
	func_332(uParam0, "Taxi Not Driveable", 0);
	return 1;
}

int func_286(var uParam0)//Position - 0xAA04
{
	if (unk_0x724D816EA203A79E(uParam0->f_4))
	{
		if (func_287(uParam0->f_4))
		{
			func_274(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

int func_287(int iParam0)//Position - 0xAA2E
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

void func_288(int iParam0, int iParam1, bool bParam2)//Position - 0xAA89
{
	if (Local_165 >= 16)
	{
		Local_165 = 16;
		return;
	}
	Local_165.f_1[Local_165 /*4*/] = 0;
	func_63(&(Local_165.f_1[Local_165 /*4*/]), 1);
	if (bParam2)
	{
		func_63(&(Local_165.f_1[Local_165 /*4*/]), 2);
	}
	Local_165.f_1[Local_165 /*4*/].f_2 = iParam0;
	Local_165.f_1[Local_165 /*4*/].f_3 = iParam1;
	Local_165++;
}

int func_289(var uParam0, var uParam1)//Position - 0xAAF3
{
	uParam1 = uParam1;
	func_332(uParam0, "Passenger injured.", 15);
	return 1;
}

int func_290(var uParam0)//Position - 0xAB0C
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

void func_291()//Position - 0xAB4C
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

int func_292()//Position - 0xAD24
{
	if (!unk_0xD6513D668481290A(iLocal_260))
	{
		func_250("TAXI_ASSETS_STREAMED - Loading A_M_Y_SouCent_01", &iLocal_267, 1000);
		return 0;
	}
	if (!unk_0xA7F138B5B1AB2CF6(iLocal_335))
	{
		return 0;
	}
	if (!func_293(&iLocal_267, 1))
	{
		func_250("TAXI_ASSETS_STREAMED - Loading shared assets", &iLocal_267, 1000);
		return 0;
	}
	return 1;
}

int func_293(int iParam0, bool bParam1)//Position - 0xAD77
{
	if (!unk_0xD6513D668481290A(func_20()))
	{
		func_250("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", iParam0, 1000);
		return 0;
	}
	if (bParam1)
	{
		if (!unk_0xF9E082857622D91E("gestures@m@standing@casual"))
		{
			func_250("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", iParam0, 1000);
			return 0;
		}
	}
	if (!unk_0xF9E082857622D91E("oddjobs@taxi@"))
	{
		func_250("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0xF9E082857622D91E("oddjobs@towingcome_here"))
	{
		func_250("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0xF9E082857622D91E("misscommon@response"))
	{
		func_250("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0xFA9040D29FE330BD(2))
	{
		func_250("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", iParam0, 1000);
		return 0;
	}
	return 1;
}

void func_294(var uParam0, int iParam1)//Position - 0xAE2E
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

int func_295(var uParam0)//Position - 0xB04D
{
	if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
	{
		uParam0->f_8 = func_296(uParam0->f_3, 0, 0);
		unk_0xC2A76C105FD557E3(1, 0f);
		unk_0x0BBAABB52887CF8C(uParam0->f_8, true);
		unk_0x436D0272182E484D(uParam0->f_8, "TAXI_BLIP_PASS");
		unk_0x56F2E1B5599188FA(uParam0->f_3, unk_0xBC25C936A095B5BA(), -1, 2048, 4);
	}
	return 1;
}

int func_296(int iParam0, bool bParam1, bool bParam2)//Position - 0xB09C
{
	return func_146(iParam0, !bParam1, bParam2);
}

int func_297(var uParam0, vector3 vParam1, vector3 vParam2, char* sParam3, int iParam4, float fParam5, float fParam6)//Position - 0xB0AF
{
	if (!unk_0x724D816EA203A79E(uParam0->f_3))
	{
		func_298(uParam0, uParam0->f_E);
		uParam0->f_B = { vParam1 };
		uParam0->f_E = { vParam2 };
		func_40(uParam0->f_E, 0);
		unk_0xA0C0B32E74BE8DB7(uParam0->f_E, 2f, 0);
		func_38(uParam0->f_E, 0, fParam6);
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

void func_298(var uParam0, vector3 vParam1)//Position - 0xB204
{
	uParam0->f_33[0] = unk_0xF0EA164D7EE8F57D(vParam1, 20f, 5f, 0);
}

void func_299(var uParam0, int iParam1, float fParam2, bool bParam3)//Position - 0xB222
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

void func_300()//Position - 0xB294
{
	unk_0xF243B7A14FCFD0F4(iLocal_260);
	unk_0x522053D86D6E1C7A(sLocal_282);
	unk_0x284F2ACE6839D3C0("Taxi_Vomit", false, -1);
	iLocal_335 = func_302();
	unk_0xA8396BF0E2C53C39();
	func_301(1);
}

void func_301(bool bParam0)//Position - 0xB2C5
{
	unk_0xF243B7A14FCFD0F4(func_20());
	if (bParam0)
	{
		unk_0x522053D86D6E1C7A("gestures@m@standing@casual");
	}
	unk_0x522053D86D6E1C7A("oddjobs@taxi@");
	unk_0x522053D86D6E1C7A("oddjobs@towingcome_here");
	unk_0x522053D86D6E1C7A("misscommon@response");
	unk_0x900CF084251DED26("TAXI", 2);
	if (!func_23(Global_19B04.f_4A7C, 128))
	{
		func_62(&(Global_19B04.f_4A7C), 128);
	}
}

int func_302()//Position - 0xB31F
{
	return unk_0x9934FEFB3B8C6DB8("MIDSIZED_MESSAGE");
}

void func_303(var uParam0, var uParam1)//Position - 0xB32F
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

void func_304(var uParam0, char* sParam1, int iParam2)//Position - 0xB3A6
{
	*uParam0 = 0;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = sParam1;
}

int func_305()//Position - 0xB3BE
{
	float fVar0;
	int iVar1;
	
	fVar0 = SYSTEM::TO_FLOAT(unk_0x105601648511CC64());
	iVar1 = func_187(&Local_231);
	if ((fVar0 - fLocal_271) > 5f)
	{
		fLocal_271 = fVar0;
		if (iLocal_270 == 0)
		{
			if (func_9(Local_231.f_4, Local_231.f_11, 1) < 200f)
			{
				iLocal_270++;
			}
			if (iVar1 >= 5)
			{
				if (!func_186())
				{
					return 1;
				}
				else
				{
					func_184();
					fLocal_271 = 0f;
				}
			}
		}
		else if (iVar1 >= 7)
		{
			if (!func_186())
			{
				return 1;
			}
			else
			{
				func_184();
				fLocal_271 = 0f;
			}
		}
	}
	return 0;
}

void func_306()//Position - 0xB450
{
	if (func_307(&Local_231, 27, 155f))
	{
	}
}

int func_307(var uParam0, int iParam1, float fParam2)//Position - 0xB469
{
	if (uParam0->f_19A < 29)
	{
		if (func_172(uParam0, 7))
		{
			func_207(uParam0, 23);
			if (func_409(uParam0, 7) > fParam2 && func_409(uParam0, 23) > 35f)
			{
				func_299(uParam0, 23, 0, 0);
				func_230(uParam0, iParam1, 1, 0, 0);
				return 1;
			}
		}
	}
	return 0;
}

void func_308(var uParam0, int iParam1, bool bParam2)//Position - 0xB4C7
{
	if (uParam0->f_19B == 0)
	{
		if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 0)
		{
			if (bParam2)
			{
				if (func_409(uParam0, 10) > (20f + 10f))
				{
					if (uParam0->f_70)
					{
						func_230(uParam0, 92, 1, 0, 0);
						uParam0->f_70 = 0;
					}
					else
					{
						func_230(uParam0, 83, 1, 0, 0);
					}
					uParam0->f_71 = 1;
					func_299(uParam0, 10, 0f, 1);
				}
			}
			else if (func_409(uParam0, 10) > 20f)
			{
				if (uParam0->f_70)
				{
					func_230(uParam0, 92, 1, 0, 0);
					uParam0->f_70 = 0;
				}
				else
				{
					func_230(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_71 = 1;
				func_299(uParam0, 10, 0f, 1);
			}
		}
	}
	if (uParam0->f_19B == 1)
	{
		if (func_409(uParam0, 10) > 30f)
		{
			if (!func_186())
			{
				if (uParam0->f_70)
				{
					func_230(uParam0, 92, 1, 0, 0);
					uParam0->f_70 = 0;
				}
				else
				{
					func_230(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_71 = 1;
				func_299(uParam0, 10, 0f, 1);
			}
		}
	}
	if (func_23(uParam0->f_64, 64))
	{
		if (!func_15(&(Local_162[5 /*10*/].f_6)))
		{
			func_208(&(Local_162[5 /*10*/].f_6));
		}
		else if (func_100(&(Local_162[5 /*10*/].f_6)) > 6f)
		{
			if (func_331(uParam0))
			{
				if (uParam0->f_71)
				{
					func_230(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_230(uParam0, Local_162[5 /*10*/].f_9, 1, 0, 0);
				}
				func_330(uParam0, 1);
				func_328(5, uParam0);
				func_327(uParam0);
			}
		}
	}
	if (func_23(uParam0->f_64, 1))
	{
		if (!func_15(&(Local_162[0 /*10*/].f_6)))
		{
			func_208(&(Local_162[0 /*10*/].f_6));
		}
		else if (func_100(&(Local_162[0 /*10*/].f_6)) > 5f)
		{
			if (func_326(uParam0))
			{
				func_330(uParam0, 1);
				func_328(0, uParam0);
				if (uParam0->f_71)
				{
					func_230(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_230(uParam0, Local_162[0 /*10*/].f_9, 1, 0, 0);
				}
				func_327(uParam0);
			}
		}
	}
	if (func_23(uParam0->f_64, 2))
	{
		if (!func_15(&(Local_162[1 /*10*/].f_6)))
		{
			func_208(&(Local_162[1 /*10*/].f_6));
		}
		else if (func_100(&(Local_162[1 /*10*/].f_6)) > 5f)
		{
			if (func_325(uParam0))
			{
				func_330(uParam0, 1);
				func_328(1, uParam0);
				if (uParam0->f_71)
				{
					func_230(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_230(uParam0, Local_162[1 /*10*/].f_9, 1, 0, 0);
				}
				func_327(uParam0);
			}
		}
	}
	if (func_23(uParam0->f_64, 2048))
	{
		if (!func_15(&(Local_162[8 /*10*/].f_6)))
		{
			if (unk_0x724D816EA203A79E(uParam0->f_4))
			{
				uParam0->f_2E = unk_0x8D66276473ABD7CC(uParam0->f_4);
				func_208(&(Local_162[8 /*10*/].f_6));
			}
		}
		else if (func_100(&(Local_162[8 /*10*/].f_6)) > 7f || Local_162[8 /*10*/].f_1 == 0)
		{
			if (func_324(uParam0))
			{
				func_330(uParam0, 1);
				func_328(8, uParam0);
				func_327(uParam0);
			}
		}
	}
	if (func_23(uParam0->f_64, 128))
	{
		if (!func_15(&(Local_162[6 /*10*/].f_6)))
		{
			func_208(&(Local_162[6 /*10*/].f_6));
		}
		else if (func_100(&(Local_162[6 /*10*/].f_6)) > 5f)
		{
			if (func_323(uParam0))
			{
				func_330(uParam0, 1);
				func_328(6, uParam0);
				if (uParam0->f_71)
				{
					func_230(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_230(uParam0, Local_162[6 /*10*/].f_9, 1, 0, 0);
				}
				func_327(uParam0);
			}
		}
	}
	if (func_23(uParam0->f_64, 32))
	{
		if (!func_15(&(Local_162[4 /*10*/].f_6)))
		{
			func_208(&(Local_162[4 /*10*/].f_6));
		}
		else if (func_100(&(Local_162[4 /*10*/].f_6)) > 4f)
		{
			if (func_322(uParam0))
			{
				func_330(uParam0, 1);
				func_328(4, uParam0);
				if (uParam0->f_71)
				{
					func_230(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_230(uParam0, Local_162[4 /*10*/].f_9, 1, 0, 0);
				}
				func_327(uParam0);
			}
		}
	}
	if (func_23(uParam0->f_64, 256))
	{
		if (!func_15(&(Local_162[7 /*10*/].f_6)))
		{
			func_208(&(Local_162[7 /*10*/].f_6));
		}
		else if (func_100(&(Local_162[7 /*10*/].f_6)) > 5f || Local_162[7 /*10*/].f_1 == 0)
		{
			if (func_321(uParam0))
			{
				func_328(7, uParam0);
				func_330(uParam0, 1);
				if (uParam0->f_71)
				{
					func_230(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_230(uParam0, Local_162[7 /*10*/].f_9, 1, 0, 1);
				}
				func_327(uParam0);
			}
		}
	}
	if (func_23(uParam0->f_64, 8))
	{
		if (!func_15(&(Local_162[9 /*10*/].f_6)))
		{
			func_208(&(Local_162[9 /*10*/].f_6));
		}
		else if (func_100(&(Local_162[9 /*10*/].f_6)) <= 7f)
		{
			unk_0xA67D3DDB524B8DBA(unk_0xB5CEFD608600A09F());
		}
		else if (func_100(&(Local_162[9 /*10*/].f_6)) > 7f || Local_162[9 /*10*/].f_1 == 0)
		{
			if (func_320(uParam0))
			{
				func_330(uParam0, 1);
				func_328(9, uParam0);
				if (uParam0->f_71)
				{
					func_230(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_230(uParam0, Local_162[9 /*10*/].f_9, 1, 0, 1);
				}
				func_327(uParam0);
			}
		}
	}
	if (func_23(uParam0->f_64, 16384))
	{
		if (!func_15(&(Local_162[13 /*10*/].f_6)))
		{
			func_208(&(Local_162[13 /*10*/].f_6));
		}
		else if (func_100(&(Local_162[13 /*10*/].f_6)) > 10f)
		{
			if (func_314(uParam0))
			{
				func_330(uParam0, 1);
				func_328(13, uParam0);
				if (uParam0->f_71)
				{
					func_230(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_230(uParam0, Local_162[13 /*10*/].f_9, 1, 0, 0);
				}
				func_327(uParam0);
			}
		}
	}
	if (func_23(uParam0->f_64, 32768))
	{
		if (!func_15(&(Local_162[14 /*10*/].f_6)))
		{
			func_208(&(Local_162[14 /*10*/].f_6));
		}
		else if (func_100(&(Local_162[14 /*10*/].f_6)) > 7f)
		{
			if (func_313(uParam0))
			{
				func_330(uParam0, 1);
				func_328(14, uParam0);
				if (uParam0->f_71)
				{
					func_230(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_230(uParam0, Local_162[14 /*10*/].f_9, 1, 0, 0);
				}
				func_327(uParam0);
			}
		}
	}
	if (func_23(uParam0->f_64, 4096))
	{
		if (!func_15(&(Local_162[11 /*10*/].f_6)))
		{
			func_208(&(Local_162[11 /*10*/].f_6));
		}
		else if (func_100(&(Local_162[11 /*10*/].f_6)) > 8f)
		{
			if (func_312(uParam0))
			{
				func_330(uParam0, 1);
				func_328(11, uParam0);
				if (uParam0->f_71)
				{
					func_230(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_230(uParam0, Local_162[11 /*10*/].f_9, 1, 0, 0);
				}
				func_327(uParam0);
			}
		}
	}
	if (func_23(uParam0->f_64, 8192))
	{
		if (!func_15(&(Local_162[12 /*10*/].f_6)))
		{
			func_208(&(Local_162[12 /*10*/].f_6));
		}
		else if (func_100(&(Local_162[12 /*10*/].f_6)) > 5f)
		{
			if (func_311(uParam0))
			{
				func_330(uParam0, 1);
				func_328(12, uParam0);
				if (uParam0->f_71)
				{
					func_230(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_230(uParam0, Local_162[12 /*10*/].f_9, 1, 0, 0);
				}
				func_327(uParam0);
			}
		}
	}
	if (func_23(uParam0->f_64, 4))
	{
		if (!func_15(&(Local_162[2 /*10*/].f_6)))
		{
			func_310(&(Local_162[2 /*10*/].f_6), 0f);
		}
		else if (func_100(&(Local_162[2 /*10*/].f_6)) > 5f)
		{
			if (func_309(uParam0))
			{
				if (uParam0->f_71)
				{
					func_230(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_230(uParam0, Local_162[2 /*10*/].f_9, 1, 0, 0);
				}
				func_330(uParam0, 1);
				func_328(2, uParam0);
				func_327(uParam0);
			}
		}
	}
}

int func_309(var uParam0)//Position - 0xBCC1
{
	float fVar0;
	
	if (!unk_0x36CEFBE9B745A58D(uParam0->f_2))
	{
		if ((!unk_0x63276C96B907C69E(uParam0->f_2) && !func_15(&(Local_162[0 /*10*/].f_3))) && !func_15(&(Local_162[1 /*10*/].f_3)))
		{
			if (!func_15(&(Local_162[2 /*10*/].f_3)))
			{
				uParam0->f_25 = unk_0x8910237449BB6F79(uParam0->f_2);
				if (uParam0->f_25 > 10f)
				{
					func_208(&(Local_162[2 /*10*/].f_3));
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

void func_310(int iParam0, float fParam1)//Position - 0xBDA4
{
	if (!func_15(iParam0))
	{
		func_103(iParam0, fParam1);
	}
}

int func_311(var uParam0)//Position - 0xBDBE
{
	vector3 vVar0;
	
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		vVar0 = { unk_0xA43418B5859810A6(uParam0->f_4, 1) };
		if (vVar0.y < -10f && !func_15(&(Local_162[0 /*10*/].f_3)))
		{
			if (!func_15(&(Local_162[12 /*10*/].f_3)))
			{
				func_208(&(Local_162[12 /*10*/].f_3));
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

int func_312(var uParam0)//Position - 0xBE4D
{
	vector3 vVar0;
	
	if ((((((unk_0xE59B7F5A03335350(uParam0->f_4, 0) && !func_15(&(Local_162[0 /*10*/].f_3))) && !func_15(&(Local_162[1 /*10*/].f_3))) && !func_15(&(Local_162[5 /*10*/].f_3))) && !func_15(&(Local_162[9 /*10*/].f_3))) && !func_15(&(Local_162[7 /*10*/].f_3))) && !func_15(&(Local_162[8 /*10*/].f_3)))
	{
		vVar0 = { unk_0xA43418B5859810A6(uParam0->f_4, 1) };
		if (unk_0x357058E632979E65(vVar0.x) > 2.5f && !func_15(&(Local_162[0 /*10*/].f_3)))
		{
			if (!func_15(&(Local_162[11 /*10*/].f_3)))
			{
				func_208(&(Local_162[11 /*10*/].f_3));
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

int func_313(var uParam0)//Position - 0xBF7D
{
	if (((((unk_0xE59B7F5A03335350(uParam0->f_4, 0) && !func_15(&(Local_162[0 /*10*/].f_3))) && !func_15(&(Local_162[8 /*10*/].f_3))) && !func_15(&(Local_162[5 /*10*/].f_3))) && !func_15(&(Local_162[9 /*10*/].f_3))) && !func_15(&(Local_162[7 /*10*/].f_3)))
	{
		if (!func_15(&(Local_162[14 /*10*/].f_3)))
		{
			uParam0->f_5 = unk_0x39827CF9BEAB804C(unk_0x541C2AEF053615BC(uParam0->f_4, true), 10f, 0, 260);
			if (unk_0x724D816EA203A79E(uParam0->f_5))
			{
				if ((unk_0x8910237449BB6F79(uParam0->f_4) > 15f && func_164(uParam0->f_5, uParam0->f_4, 1) < 3f) && (!unk_0x1D403DFADBC2DE3C(uParam0->f_5, 0) && !unk_0x1AAF0C23233C57AF(uParam0->f_5, -1, 0)))
				{
					func_208(&(Local_162[14 /*10*/].f_3));
				}
			}
		}
		else if ((func_100(&(Local_162[14 /*10*/].f_3)) < 1.5f && func_164(uParam0->f_5, uParam0->f_4, 1) > 4.5f) && !unk_0x127812AA6652253F(uParam0->f_5))
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

int func_314(var uParam0)//Position - 0xC104
{
	if (((unk_0xE59B7F5A03335350(uParam0->f_4, 0) && !func_15(&(Local_162[9 /*10*/].f_3))) && !func_15(&(Local_162[7 /*10*/].f_3))) && !func_15(&(Local_162[4 /*10*/].f_3)))
	{
		if (!func_315(uParam0->f_4) && unk_0x8910237449BB6F79(uParam0->f_4) > 15f)
		{
			if (!func_15(&(Local_162[13 /*10*/].f_3)))
			{
				func_208(&(Local_162[13 /*10*/].f_3));
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

bool func_315(int iParam0)//Position - 0xC1BB
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
	vVar3 = { func_319((vVar1.x - vVar0.x), (vVar1.y - vVar0.y), 0f) };
	vVar4 = { func_318(vVar3, 0) * Vector(fVar9, fVar9, fVar9) };
	vVar3 = { vVar3 * Vector(2f, 2f, 2f) };
	vVar5 = { vVar0 - vVar3 + vVar4 };
	vVar6 = { vVar0 - vVar3 - vVar4 };
	vVar7 = { vVar1 + vVar3 + vVar4 };
	vVar8 = { vVar1 + vVar3 - vVar4 };
	vVar8 = { vVar8 };
	return func_316(unk_0x541C2AEF053615BC(iParam0, true), vVar5, vVar6, vVar7);
}

int func_316(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3)//Position - 0xC2A4
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
	vVar0 = { func_319(vParam2 - vParam1) };
	vVar1 = { func_319(vParam3 - vParam1) };
	fVar2 = func_317(vParam0, vVar0);
	fVar3 = func_317(vParam1, vVar0);
	fVar4 = func_317(vParam2, vVar0);
	fVar5 = func_317(vParam0, vVar1);
	fVar6 = func_317(vParam1, vVar1);
	fVar7 = func_317(vParam3, vVar1);
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

float func_317(vector3 vParam0, vector3 vParam1)//Position - 0xC38D
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_318(vector3 vParam0, int iParam1)//Position - 0xC3AE
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

Vector3 func_319(vector3 vParam0)//Position - 0xC40C
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

int func_320(var uParam0)//Position - 0xC44B
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

int func_321(var uParam0)//Position - 0xC480
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

int func_322(var uParam0)//Position - 0xC516
{
	int iVar0;
	
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		iVar0 = unk_0xDE2406913267F913(unk_0xB5CEFD608600A09F());
		if (iVar0 == 0)
		{
			if (!func_15(&(Local_162[4 /*10*/].f_3)))
			{
				func_208(&(Local_162[4 /*10*/].f_3));
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

int func_323(var uParam0)//Position - 0xC588
{
	int iVar0;
	
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		iVar0 = unk_0x2D2916537452B0DE(unk_0xB5CEFD608600A09F());
		if (iVar0 == 0)
		{
			if (!func_15(&(Local_162[6 /*10*/].f_3)))
			{
				func_208(&(Local_162[6 /*10*/].f_3));
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

int func_324(var uParam0)//Position - 0xC5FE
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
					func_230(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_230(uParam0, 72, 1, 0, 1);
				}
				func_99(&(Local_162[2 /*10*/].f_6));
				return 1;
			}
		}
	}
	return 0;
}

int func_325(var uParam0)//Position - 0xC67F
{
	vector3 vVar0;
	
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		vVar0 = { unk_0xA43418B5859810A6(uParam0->f_4, 1) };
		if (unk_0x357058E632979E65(vVar0.x) > 3f && !func_15(&(Local_162[0 /*10*/].f_3)))
		{
			if (!func_15(&(Local_162[1 /*10*/].f_3)))
			{
				func_208(&(Local_162[1 /*10*/].f_3));
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

int func_326(var uParam0)//Position - 0xC70B
{
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		if (!unk_0x58F9E0EA914AEF2C(uParam0->f_4) && unk_0x2A348A3A98B80B13(uParam0->f_4))
		{
			if (!func_15(&(Local_162[0 /*10*/].f_3)))
			{
				func_208(&(Local_162[0 /*10*/].f_3));
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

void func_327(var uParam0)//Position - 0xC795
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_15(&(Local_162[iVar0 /*10*/].f_6)))
		{
			func_102(&(Local_162[iVar0 /*10*/].f_6));
		}
		iVar0++;
	}
	func_299(uParam0, 10, 0f, 1);
	unk_0xA67D3DDB524B8DBA(unk_0xB5CEFD608600A09F());
}

void func_328(int iParam0, var uParam1)//Position - 0xC7DD
{
	Local_162[iParam0 /*10*/].f_1++;
	func_329(uParam1, iParam0);
	func_99(&(Local_162[iParam0 /*10*/].f_6));
	uParam1->f_70 = 1;
}

void func_329(var uParam0, int iParam1)//Position - 0xC810
{
	uParam0->f_4C = (uParam0->f_4C + Local_162[iParam1 /*10*/]);
}

void func_330(var uParam0, int iParam1)//Position - 0xC827
{
	uParam0->f_68 = (uParam0->f_68 + iParam1);
}

int func_331(var uParam0)//Position - 0xC83A
{
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		if (unk_0x8910237449BB6F79(uParam0->f_4) > 25f)
		{
			if (!func_15(&(Local_162[5 /*10*/].f_3)))
			{
				func_208(&(Local_162[5 /*10*/].f_3));
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

void func_332(var uParam0, char* sParam1, int iParam2)//Position - 0xC8B1
{
	vector3 vVar0;
	
	func_184();
	func_429(2);
	vVar0 = { func_336() };
	if ((!unk_0xF1734B55490E9045(&vVar0) && func_186()) && !unk_0x3362CDE8460ED38B(&vVar0, "NULL"))
	{
	}
	else
	{
		unk_0xEB233A3B7635D2AC();
		unk_0x7456702622C62EA0(1);
		StringCopy(&vVar0, uParam0->f_8F, 24);
		if (!unk_0x1D403DFADBC2DE3C(uParam0->f_3, 0))
		{
			if (!func_159(uParam0))
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
		func_299(uParam0, 3, 0, 0);
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
				func_334(uParam0, &vVar0);
			}
			else if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
			{
				func_259(uParam0->f_3, "TAXI_FAIL", uParam0->f_91, 4);
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
			func_334(uParam0, &vVar0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_SPK", 24);
		}
		else if (uParam0->f_19F == 15)
		{
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 2)
		{
			StringConCat(&vVar0, "_lost1", 24);
			func_334(uParam0, &vVar0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 3)
		{
			StringConCat(&vVar0, "_spotd1", 24);
			func_334(uParam0, &vVar0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 4)
		{
			StringConCat(&vVar0, "_wntd1", 24);
			func_334(uParam0, &vVar0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 5)
		{
			StringConCat(&vVar0, "_spook", 24);
			func_334(uParam0, &vVar0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_SPK", 24);
			if (func_159(uParam0))
			{
				if (unk_0xB66CFDE6B830965A(uParam0->f_4))
				{
					func_147(uParam0, 4096, 0);
				}
				else
				{
					func_147(uParam0, 0, 0);
				}
			}
		}
		else if (iParam2 == 6)
		{
			StringConCat(&vVar0, "_hit2", 24);
			func_334(uParam0, &vVar0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 7)
		{
			StringConCat(&vVar0, "_jak", 24);
			func_334(uParam0, &vVar0);
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
				func_334(uParam0, &vVar0);
			}
			else if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
			{
				func_259(uParam0->f_3, "CALL_COPS_COMMIT", uParam0->f_91, 4);
			}
			unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 1, 0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&vVar0, "_shot1", 24);
			func_334(uParam0, &vVar0);
			unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 1, 0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&vVar0, "_shot1", 24);
			func_334(uParam0, &vVar0);
			unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 1, 0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_CK", 24);
		}
		else if (iParam2 == 11)
		{
			func_50(8, 0);
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
				func_334(uParam0, &vVar0);
			}
			else if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
			{
				func_259(uParam0->f_3, "GENERIC_INSULT_MED", uParam0->f_91, 4);
			}
			func_147(uParam0, 0, 0);
			func_334(uParam0, &vVar0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_WAT", 24);
		}
		else if (iParam2 == 0)
		{
			func_50(8, 0);
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
				func_334(uParam0, &vVar0);
			}
			else if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
			{
				func_259(uParam0->f_3, "TAXI_FAIL", uParam0->f_91, 4);
			}
			func_334(uParam0, &vVar0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_DR", 24);
		}
		else if (iParam2 == 1)
		{
			func_50(8, 0);
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
				func_334(uParam0, &vVar0);
			}
			else if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
			{
				func_259(uParam0->f_3, "TAXI_FAIL", uParam0->f_91, 4);
			}
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 19)
		{
			StringCopy(&vVar0, "OJTX_QUIT_", 24);
			func_333(&vVar0);
			func_188(&(uParam0->f_F4), "OJTXAUD", &vVar0, 7, 0, 0, 0);
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
			func_334(uParam0, &vVar0);
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
					func_334(uParam0, &vVar0);
				}
			}
			else if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
			{
				func_259(uParam0->f_3, "TAXI_FAIL", uParam0->f_91, 4);
			}
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_FAIL", 24);
			func_50(3, 0);
		}
		func_299(uParam0, 3, 0f, 1);
	}
}

void func_333(char* sParam0)//Position - 0xCE60
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

void func_334(var uParam0, char* sParam1)//Position - 0xCEB3
{
	if (func_335(uParam0))
	{
		func_188(&(uParam0->f_F4), uParam0->f_90, sParam1, 9, 0, 0, 0);
	}
}

int func_335(var uParam0)//Position - 0xCEDB
{
	if (!unk_0x1D403DFADBC2DE3C(uParam0->f_3, 0))
	{
		if (func_164(unk_0xBC25C936A095B5BA(), uParam0->f_3, 1) < 40f && !unk_0x41A5D6415E2CC10E(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_336()//Position - 0xCF19
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

int func_337(var uParam0)//Position - 0xCF5F
{
	return uParam0->f_76;
}

void func_338()//Position - 0xCF6B
{
	if (func_370(&Local_231, &Local_284))
	{
		switch (Local_284.f_1B)
		{
			case 0:
				if (Local_231.f_19A == 9)
				{
					if (!func_369(&Local_231) && unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) < 1)
					{
						if (func_368("TX_OBJ_TIE_DO") || unk_0x2DA8CA50A72528FB(Local_231.f_9))
						{
							Local_284.f_1B++;
						}
						else if (func_367(&Local_231) != 10)
						{
							func_230(&Local_231, 10, 1, 0, 1);
						}
					}
				}
				break;
			
			case 1:
				if (!bLocal_277)
				{
					if (func_367(&Local_231) > 10 && func_367(&Local_231) != 15)
					{
						func_230(&Local_231, 15, 1, 0, 0);
						func_299(&Local_231, 10, 0, 0);
						if (bLocal_283)
						{
						}
					}
				}
				else
				{
					Local_284.f_1B++;
				}
				break;
			
			case 2:
				if ((bLocal_277 && iLocal_258 == 0) && !func_186())
				{
					if (func_367(&Local_231) > 10 && func_367(&Local_231) != 16)
					{
						func_230(&Local_231, 16, 1, 0, 0);
						func_299(&Local_231, 10, 0, 0);
						if (bLocal_283)
						{
						}
					}
				}
				break;
			
			case 3:
				break;
			}
	}
	func_339(&Local_231, &uLocal_287, &Local_284, 4, bLocal_283);
}

int func_339(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)//Position - 0xD0C8
{
	char cVar0[48];
	struct<6> Var1;
	
	func_350(uParam0, uParam1);
	if ((*uParam2 == -1 && uParam0->f_19A < 29) && !uParam0->f_6D)
	{
		if (func_349(uParam1))
		{
			*uParam2 = 1;
			if (bParam4)
			{
			}
		}
	}
	if (!uParam0->f_6D)
	{
		switch (*uParam2)
		{
			case 1:
				if (!func_348(uParam0))
				{
					uParam2->f_7 = { func_347(uParam1) };
					func_188(&(uParam0->f_F4), uParam0->f_90, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam4)
					{
					}
				}
				break;
			
			case 2:
				if (func_186())
				{
					uParam2->f_D = { func_232() };
					if (unk_0x3362CDE8460ED38B(&(uParam2->f_D), &(uParam2->f_7)))
					{
						*uParam2 = 3;
						if (bParam4)
						{
						}
					}
					else
					{
						*uParam2 = 1;
					}
				}
				break;
			
			case 3:
				if (func_211(uParam0))
				{
					if (func_186())
					{
						if (unk_0x8C2668F45F2BB3F2(unk_0xBC25C936A095B5BA()))
						{
							uParam2->f_1D = 1;
						}
						else
						{
							uParam2->f_1D = 0;
						}
						func_299(uParam0, 17, 0f, 1);
						if (uParam0->f_19B == 1)
						{
							uParam2->f_1 = { func_336() };
							func_48();
						}
						else
						{
							uParam2->f_1 = { func_346() };
							func_184();
						}
						if (unk_0x904E94842BB9E173(unk_0xFC1CAE18F3ECBF2D()) >= 1)
						{
							*uParam2 = 0;
						}
						else if (uParam0->f_19B == 1)
						{
							*uParam2 = 4;
						}
						else
						{
							*uParam2 = 6;
						}
					}
				}
				else if (func_186())
				{
					uParam2->f_13 = { func_346() };
				}
				else
				{
					func_63(&(uParam2->f_1A), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_1B))));
					uParam2->f_1B++;
					func_344(uParam1);
					func_299(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam4)
					{
					}
					return 1;
				}
				break;
			
			case 4:
				if (((!func_172(uParam0, 14) && !func_186()) && !func_211(uParam0)) && func_409(uParam0, 18) > 1f)
				{
					func_299(uParam0, 18, 0, 0);
					*uParam2 = 5;
					if (bParam4)
					{
					}
				}
				break;
			
			case 5:
				if ((func_409(uParam0, 18) > 1.5f && !func_186()) && !func_211(uParam0))
				{
					StringCopy(&cVar0, uParam0->f_8F, 24);
					if (func_343(uParam2, &cVar0))
					{
						func_188(&(uParam0->f_F4), uParam0->f_90, &cVar0, 8, 0, 0, 0);
						func_299(uParam0, 18, 0, 0);
						*uParam2 = 7;
					}
					else
					{
						if (uParam2->f_1D)
						{
							StringConCat(&cVar0, "_resB", 24);
						}
						else
						{
							StringConCat(&cVar0, "_resA", 24);
						}
						Var1 = { cVar0 };
						func_342(&(uParam2->f_19), iParam3, &cVar0, 1, 1, 0);
						func_341(&(uParam0->f_F4), uParam0->f_90, &Var1, &cVar0, 8, 0, 0);
						func_299(uParam0, 18, 0, 0);
						*uParam2 = 6;
					}
				}
				break;
			
			case 6:
				if (!func_186() && func_409(uParam0, 17) > 1f)
				{
					if (func_409(uParam0, 18) > 0.5f || uParam0->f_19B == 0)
					{
						if (unk_0x3362CDE8460ED38B(&(uParam2->f_13), &(uParam2->f_1)) && uParam0->f_19B != 0)
						{
							StringCopy(&(uParam2->f_1), uParam0->f_8F, 24);
							StringConCat(&(uParam2->f_1), "_end1", 24);
							func_183(&(uParam2->f_1));
							func_188(&(uParam0->f_F4), uParam0->f_90, &(uParam2->f_1), 8, 0, 0, 0);
							func_178(uParam0, 17, 1);
							*uParam2 = 7;
						}
						else if (!unk_0xF1734B55490E9045(&(uParam2->f_1)))
						{
							func_340(&(uParam0->f_F4), uParam0->f_90, &(uParam2->f_D), &(uParam2->f_1), 8, 0, 0);
							if (bParam4)
							{
							}
						}
						*uParam2 = 3;
					}
				}
				break;
			
			case 7:
				if (!func_186())
				{
					func_63(&(uParam2->f_1A), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_1B))));
					uParam2->f_1B++;
					func_344(uParam1);
					func_299(uParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
			}
	}
	return 0;
}

int func_340(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0xD48F
{
	func_196(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_189(sParam2, iParam4, 0);
}

int func_341(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0xD4E3
{
	func_196(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_189(sParam2, iParam4, 0);
}

void func_342(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0xD537
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = SYSTEM::TO_FLOAT(iVar2);
		iVar1 = SYSTEM::ROUND(SYSTEM::POW(2f, fVar0));
		if (!func_278(*uParam0, iVar1))
		{
			func_63(uParam0, iVar1);
			if (bParam5)
			{
				if (!bParam4)
				{
					StringIntConCat(sParam2, iVar2 + 1, 24);
					func_183(sParam2);
				}
				else
				{
					func_183(sParam2);
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

int func_343(var uParam0, char* sParam1)//Position - 0xD5CE
{
	if (unk_0x3362CDE8460ED38B(&(uParam0->f_D), "txm3_bant1") || unk_0x3362CDE8460ED38B(&(uParam0->f_D), "txm9_bant2"))
	{
		StringConCat(sParam1, "_resBn1", 24);
		return 1;
	}
	if ((unk_0x3362CDE8460ED38B(&(uParam0->f_D), "txm6_bant3M") || unk_0x3362CDE8460ED38B(&(uParam0->f_D), "txm6_bant3T")) || unk_0x3362CDE8460ED38B(&(uParam0->f_D), "txm6_bant3F"))
	{
		func_62(&(uParam0->f_1C), 1);
		StringConCat(sParam1, "_resBn1", 24);
		return 1;
	}
	return 0;
}

void func_344(var uParam0)//Position - 0xD64C
{
	int iVar0;
	
	iVar0 = func_345(uParam0);
	if (iVar0 > -1)
	{
		func_21(&((uParam0[iVar0 /*8*/])->f_7), 2);
		func_21(&((uParam0[iVar0 /*8*/])->f_7), 4);
		func_62(&((uParam0[iVar0 /*8*/])->f_7), 8);
		StringCopy(uParam0[iVar0 /*8*/], func_201(), 24);
	}
}

int func_345(var uParam0)//Position - 0xD696
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_23((uParam0[iVar0 /*8*/])->f_7, 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

struct<6> func_346()//Position - 0xD6C6
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

struct<6> func_347(var uParam0)//Position - 0xD772
{
	int iVar0;
	struct<6> Var1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_23((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			Var1 = { *(uParam0[iVar0 /*8*/]) };
			func_62(&((uParam0[iVar0 /*8*/])->f_7), 4);
		}
		iVar0++;
	}
	return Var1;
}

int func_348(var uParam0)//Position - 0xD7B9
{
	switch (uParam0->f_19B)
	{
		case 0:
			if (func_213("TX_OBJ_NEX_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_213("TX_OBJ_TIE_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_213("TX_OBJ_DL_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if ((func_213("TX_OBJ_GYB_DO", 0, 0) || func_213("TAXI_OBJ_GYB", 0, 0)) || func_213("TAXI_OBJ_GYB_2", 0, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_213("TX_OBJ_TTB_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 5:
			if ((func_213("TX_OBJ_CYI_DO", 0, 0) || func_213("TAXI_OBJ_CYI_01", 0, 0)) || func_213("TAXI_OBJ_CYI_02", 0, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (((func_213("TX_OBJ_GYN_DO", 0, 0) || func_213("TAXI_OBJ_GYN", 0, 0)) || func_213("TAXI_OBJ_GYN_TG", 0, 0)) || func_213("TAXI_OBJ_GYN_GF", 0, 0))
			{
				return 1;
			}
			break;
		
		case 7:
			if ((func_213("TAXI_OBJ_CC1", 0, 0) || func_213("TAXI_OBJ_CC2", 0, 0)) || func_213("TAXI_OBJ_CC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if ((func_213("TAXI_OBJ_FTC1", 0, 0) || func_213("TAXI_OBJ_FTC2", 0, 0)) || func_213("TAXI_OBJ_FTC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 9:
			if (func_213("TX_OBJ_PRO_DO", 0, 0))
			{
				return 1;
			}
			break;
	}
	return (((((func_213("TAXI_OBJ_GETRUN", 0, 0) || func_213("TAXI_OBJ_DRIVE", 0, 0)) || func_213("TAXI_OBJ_RETURN", 0, 0)) || func_213("TAXI_OBJ_POL", 0, 0)) || func_213("TAXI_OBJ_RUNOUT", 0, 0)) || func_213("TAXI_OBJ_POL", 0, 0));
}

int func_349(var uParam0)//Position - 0xD9D9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_23((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_350(var uParam0, var uParam1)//Position - 0xDA08
{
	vector3 vVar0;
	char cVar1[48];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5[8];
	bool bVar6;
	
	if (func_348(uParam0))
	{
	}
	else if (!uParam0->f_6E)
	{
	}
	else if (func_172(uParam0, 14))
	{
		StringCopy(&vVar0, uParam0->f_8F, 24);
		switch (func_367(uParam0))
		{
			case 55:
				StringConCat(&vVar0, "_lvMe1", 24);
				cVar1 = { vVar0 };
				func_342(&(uParam0->f_5D), 3, &cVar1, 0, 1, 0);
				func_341(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
				func_299(uParam0, 16, 0, 0);
				func_366(4, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_264(uParam0, 0, 0);
				break;
			
			case 2:
				if (!func_186())
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
						func_365(uParam0, &vVar0, 0, 0, 8);
					}
				}
				else
				{
					func_362(uParam0, vVar0, func_364(uParam0, 2));
				}
				if (func_23(uParam0->f_62, 4))
				{
					func_299(uParam0, 16, 0, 0);
					func_264(uParam0, 0, 0);
				}
				func_169(uParam0, &(uParam0->f_62), 4, 3);
				break;
			
			case 3:
				if (func_409(uParam0, 16) > 1f)
				{
					func_171(1);
					if (uParam0->f_19B == 9)
					{
						func_263("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						func_263("TAXI_VIP_RETURN", 7500, 1);
					}
					func_299(uParam0, 16, 0, 0);
					func_264(uParam0, 0, 0);
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
					func_365(uParam0, &vVar0, 0, 1, 8);
				}
				else if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
				{
					func_259(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_91, 4);
				}
				break;
		}
	}
	else if ((func_409(uParam0, 16) > func_112(uParam0->f_19B == 0, 1f, 4f) && !uParam0->f_8E) && (((uParam0->f_19B == 0 || uParam0->f_19B == 1) && !func_186()) || (uParam0->f_19B != 0 && uParam0->f_19B != 1)))
	{
		StringCopy(&vVar0, uParam0->f_8F, 24);
		switch (func_367(uParam0))
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
				func_365(uParam0, &vVar0, 1, 0, 8);
				break;
			
			case 56:
				StringConCat(&vVar0, "_lvMe2", 24);
				cVar1 = { vVar0 };
				func_342(&(uParam0->f_5D), 3, &cVar1, 0, 1, 0);
				func_341(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
				func_299(uParam0, 16, 0, 0);
				func_366(4, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_264(uParam0, 0, 0);
				break;
			
			case 0:
				if (uParam0->f_19B == 9)
				{
					func_188(&(uParam0->f_F4), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				func_230(uParam0, 1, 1, 0, 0);
				break;
			
			case 1:
				func_299(uParam0, 16, 0, 0);
				func_230(uParam0, 4, 0, 0, 0);
				break;
			
			case 4:
				StringConCat(&vVar0, "_hail1", 24);
				cVar1 = { vVar0 };
				if (!func_23(uParam0->f_2C, 128))
				{
					if ((uParam0->f_19B == 0 || uParam0->f_19B == 1) || uParam0->f_19B == 4)
					{
						func_342(&(uParam0->f_63), 4, &cVar1, 0, 1, 0);
						func_341(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
					}
					else
					{
						func_365(uParam0, &vVar0, 0, 0, 8);
					}
				}
				func_299(uParam0, 16, 4f, 0);
				uParam0->f_8D = 1;
				func_299(uParam0, 16, 0, 0);
				func_264(uParam0, 0, 0);
				break;
			
			case 5:
				if (uParam0->f_19B == 7)
				{
					func_263("TAXI_OBJ_GPCKUP", 7500, 1);
				}
				else
				{
					func_263("TAXI_OBJ_PICKUP", 7500, 1);
				}
				uParam0->f_8D = 1;
				func_299(uParam0, 16, 0, 0);
				func_264(uParam0, 0, 0);
				break;
			
			case 8:
				StringConCat(&vVar0, "_obj1", 24);
				func_365(uParam0, &vVar0, 0, 0, 8);
				if (uParam0->f_19B != 7 && uParam0->f_19B != 4)
				{
					if (!unk_0x2DA8CA50A72528FB(uParam0->f_9))
					{
						uParam0->f_9 = func_361(uParam0->f_11, 1);
					}
					else if (unk_0xB1D6718ACE798CBB(uParam0->f_9) == 0)
					{
						unk_0x7781946F1FC054FA(uParam0->f_9, 255);
						unk_0x1423825E528B4DE1(uParam0->f_9, uParam0->f_11);
						unk_0x0BBAABB52887CF8C(uParam0->f_9, true);
					}
				}
				func_230(uParam0, 10, 1, 0, 0);
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
				func_183(&vVar0);
				if (uParam0->f_19B != 9)
				{
					func_365(uParam0, &vVar0, 0, 0, 8);
				}
				else
				{
					func_259(uParam0->f_3, "TAXI_START", uParam0->f_91, 4);
				}
				if (uParam0->f_19B != 7 && uParam0->f_19B != 4)
				{
					if (!unk_0x2DA8CA50A72528FB(uParam0->f_9))
					{
						uParam0->f_9 = func_361(uParam0->f_11, 1);
					}
					else if (unk_0xB1D6718ACE798CBB(uParam0->f_9) == 0)
					{
						unk_0x7781946F1FC054FA(uParam0->f_9, 255);
						unk_0x1423825E528B4DE1(uParam0->f_9, uParam0->f_11);
						unk_0x0BBAABB52887CF8C(uParam0->f_9, true);
					}
				}
				func_230(uParam0, 10, 1, 0, 0);
				uParam0->f_1A1 = 10;
				break;
			
			case 7:
				StringConCat(&vVar0, "_dest2", 24);
				func_360(uParam0, 33554432, vVar0, "", 1, 8);
				func_299(uParam0, 16, 0, 0);
				func_230(uParam0, 10, 1, 0, 0);
				uParam0->f_1A1 = 10;
				break;
			
			case 10:
				if (!func_186())
				{
					func_359(uParam0, 0);
					func_62(&(uParam0->f_2C), 4);
					func_299(uParam0, 16, 0, 0);
					func_230(uParam0, 13, 0, 0, 0);
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
				func_183(&vVar0);
				func_357(vVar0, uParam1);
				func_299(uParam0, 16, 0, 0);
				func_299(uParam0, 11, 0, 0);
				func_264(uParam0, 0, 0);
				break;
			
			case 15:
				if (func_409(uParam0, 11) > uParam0->f_24)
				{
					if (uParam0->f_19B == 0)
					{
						StringConCat(&vVar0, "_ban1", 24);
					}
					else
					{
						StringConCat(&vVar0, "_bant1", 24);
						func_183(&vVar0);
					}
					func_357(vVar0, uParam1);
					func_62(&(uParam0->f_51), 67108864);
					func_299(uParam0, 16, 0, 0);
					func_299(uParam0, 11, 0, 0);
					func_264(uParam0, 0, 0);
				}
				break;
			
			case 16:
				if (func_409(uParam0, 11) > uParam0->f_24)
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
							func_183(&vVar0);
						}
					}
					func_357(vVar0, uParam1);
					func_299(uParam0, 11, 0, 0);
					func_299(uParam0, 16, 0, 0);
					func_264(uParam0, 0, 0);
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
					func_183(&vVar0);
				}
				func_357(vVar0, uParam1);
				func_299(uParam0, 16, 0, 0);
				func_264(uParam0, 0, 0);
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
				func_183(&vVar0);
				func_357(vVar0, uParam1);
				func_299(uParam0, 16, 0, 0);
				func_264(uParam0, 0, 0);
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
				func_183(&vVar0);
				func_357(vVar0, uParam1);
				func_299(uParam0, 16, 0, 0);
				func_264(uParam0, 0, 0);
				break;
			
			case 20:
				StringConCat(&vVar0, "_dest2b", 24);
				func_183(&vVar0);
				func_357(vVar0, uParam1);
				func_299(uParam0, 16, 0, 0);
				func_299(uParam0, 11, 0, 0);
				func_264(uParam0, 0, 0);
				func_62(&(uParam0->f_52), 262144);
				uParam0->f_24 = 20f;
				break;
			
			case 23:
				StringConCat(&vVar0, "_seePt1", 24);
				func_365(uParam0, &vVar0, 0, 0, 8);
				func_230(uParam0, 24, 1, 0, 0);
				break;
			
			case 24:
				uParam0->f_1A1 = 24;
				func_299(uParam0, 16, 0, 0);
				func_264(uParam0, 0, 0);
				break;
			
			case 90:
				StringConCat(&vVar0, "_talk", 24);
				StringIntConCat(&vVar0, 1, 24);
				func_183(&vVar0);
				func_365(uParam0, &vVar0, 1, 0, 8);
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
				func_365(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 91:
				StringConCat(&vVar0, "_ig1c", 24);
				func_365(uParam0, &vVar0, 0, 0, 8);
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
					func_356(&(uParam0->f_5A), 8, &vVar0, &iVar5, 1, 0);
				}
				else
				{
					func_356(&(uParam0->f_5A), 3, &vVar0, &iVar5, 1, 0);
				}
				func_357(vVar0, uParam1);
				func_366(0, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_299(uParam0, 16, 0, 0);
				func_299(uParam0, 6, 0f, 1);
				func_264(uParam0, 0, 0);
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
					func_356(&(uParam0->f_59), 8, &vVar0, &iVar5, 1, 0);
				}
				else
				{
					func_356(&(uParam0->f_59), 3, &vVar0, &iVar5, 1, 0);
				}
				func_357(vVar0, uParam1);
				func_366(0, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 1);
				func_299(uParam0, 16, 0, 0);
				func_299(uParam0, 6, 0f, 1);
				func_264(uParam0, 0, 0);
				break;
			
			case 12:
				func_263("TAXI_OBJ_GYB", 3500, 1);
				func_299(uParam0, 16, 0, 0);
				func_264(uParam0, 0, 0);
				break;
			
			case 11:
				if (uParam0->f_19A == 12 || uParam0->f_19A == 18)
				{
					func_263("TAXI_OBJ_GYN_TG", 7500, 1);
				}
				else if (uParam0->f_19A < 21)
				{
					func_263("TAXI_OBJ_GYN", 7500, 1);
				}
				else
				{
					func_263("TAXI_OBJ_GYN_GF", 7500, 1);
				}
				uParam0->f_1A1 = 11;
				uParam0->f_8D = 1;
				func_299(uParam0, 16, 0, 0);
				func_264(uParam0, 0, 0);
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
				func_365(uParam0, &vVar0, 0, 0, 8);
				func_230(uParam0, 29, 1, 0, 0);
				break;
			
			case 29:
				if (!func_23(uParam0->f_62, 268435456))
				{
					func_263("TAXI_OBJ_CYI_01", 7500, 1);
					func_62(&(uParam0->f_62), 268435456);
				}
				uParam0->f_1A1 = 29;
				func_299(uParam0, 16, 0, 0);
				func_264(uParam0, 0, 0);
				break;
			
			case 30:
				StringConCat(&vVar0, "_rCar1", 24);
				func_183(&vVar0);
				func_357(vVar0, uParam1);
				uParam0->f_7C = { vVar0 };
				func_299(uParam0, 16, 0, 0);
				func_264(uParam0, 0, 0);
				break;
			
			case 31:
				StringConCat(&vVar0, "_rCar2", 24);
				func_183(&vVar0);
				func_357(vVar0, uParam1);
				uParam0->f_7C = { vVar0 };
				func_299(uParam0, 16, 0, 0);
				func_264(uParam0, 0, 0);
				break;
			
			case 32:
				StringConCat(&vVar0, "_rCar3", 24);
				func_183(&vVar0);
				func_357(vVar0, uParam1);
				uParam0->f_7C = { vVar0 };
				func_299(uParam0, 16, 0, 0);
				func_264(uParam0, 0, 0);
				break;
			
			case 33:
				func_263("TAXI_OBJ_CYI_02", 7500, 1);
				uParam0->f_1A1 = 33;
				func_299(uParam0, 16, 0, 0);
				func_264(uParam0, 0, 0);
				break;
			
			case 34:
				if (!func_23(uParam0->f_52, 8192))
				{
					if (func_409(uParam0, 11) > uParam0->f_24)
					{
						StringConCat(&vVar0, "_airBr1", 24);
						func_183(&vVar0);
						if (uParam0->f_19B == 5)
						{
							func_357(vVar0, uParam1);
						}
						else
						{
							func_365(uParam0, &vVar0, 0, 0, 8);
						}
						func_62(&(uParam0->f_52), 8192);
						func_299(uParam0, 16, 0, 0);
						func_299(uParam0, 11, 0, 0);
						func_264(uParam0, 0, 0);
					}
				}
				break;
			
			case 35:
				if (!func_23(uParam0->f_52, 16384))
				{
					StringConCat(&vVar0, "_seeD1", 24);
					func_183(&vVar0);
					func_365(uParam0, &vVar0, 0, 0, 8);
					func_62(&(uParam0->f_52), 16384);
				}
				break;
			
			case 36:
				if (!func_23(uParam0->f_52, 32768))
				{
					StringConCat(&vVar0, "_seeD2", 24);
					func_183(&vVar0);
					func_365(uParam0, &vVar0, 0, 0, 8);
					func_62(&(uParam0->f_52), 32768);
				}
				break;
			
			case 37:
				StringConCat(&vVar0, "_done1", 24);
				func_365(uParam0, &vVar0, 0, 0, 8);
				func_230(uParam0, 46, 1, 0, 0);
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
				func_183(&vVar0);
				func_365(uParam0, &vVar0, 0, 0, 8);
				func_230(uParam0, 139, 1, 0, 0);
				uParam0->f_1A1 = 139;
				func_264(uParam0, 0, 0);
				break;
			
			case 139:
				func_263("TAXI_OBJ_FTC2", 7500, 1);
				uParam0->f_1A1 = 13;
				func_230(uParam0, 13, 0, 0, 0);
				break;
			
			case 38:
				StringConCat(&vVar0, "_dOff1", 24);
				cVar1 = { vVar0 };
				iVar4 = unk_0x491B2241281A03B7(0, 120);
				if (!func_23(uParam0->f_52, 268435456))
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
					func_62(&(uParam0->f_52), 268435456);
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
				func_341(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
				func_299(uParam0, 16, 0, 0);
				func_264(uParam0, 0, 0);
				break;
			
			case 39:
				StringConCat(&vVar0, "_bdOff1", 24);
				cVar1 = { vVar0 };
				iVar4 = unk_0x491B2241281A03B7(0, 100);
				if (!func_23(uParam0->f_52, 268435456))
				{
					if (iVar4 < 50)
					{
						StringConCat(&cVar1, "_1", 24);
					}
					else
					{
						StringConCat(&cVar1, "_2", 24);
					}
					func_62(&(uParam0->f_52), 268435456);
				}
				else if (iVar4 < 50)
				{
					StringConCat(&cVar1, "_3", 24);
				}
				else
				{
					StringConCat(&cVar1, "_4", 24);
				}
				func_341(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
				func_299(uParam0, 16, 0, 0);
				func_264(uParam0, 0, 0);
				break;
			
			case 41:
				StringConCat(&vVar0, "_dr2P", 24);
				func_365(uParam0, &vVar0, 0, 0, 8);
				func_299(uParam0, 16, 0, 0);
				func_264(uParam0, 0, 0);
				break;
			
			case 42:
				StringConCat(&vVar0, "_dr2N", 24);
				func_365(uParam0, &vVar0, 0, 0, 8);
				func_299(uParam0, 16, 0, 0);
				func_264(uParam0, 0, 0);
				break;
			
			case 40:
				StringConCat(&vVar0, "_dOff2", 24);
				func_365(uParam0, &vVar0, 0, 0, 8);
				func_230(uParam0, 44, 1, 0, 0);
				break;
			
			case 44:
				func_263("TAXI_OBJ_CC2", 7500, 1);
				uParam0->f_1A1 = 44;
				func_264(uParam0, 0, 0);
				func_230(uParam0, 97, 1, 0, 0);
				break;
			
			case 43:
				StringConCat(&vVar0, "_dOff3", 24);
				func_365(uParam0, &vVar0, 0, 0, 8);
				func_230(uParam0, 45, 1, 0, 0);
				break;
			
			case 45:
				if (!func_186())
				{
					func_263("TAXI_OBJ_CC3", 7500, 1);
					uParam0->f_1A1 = 45;
					func_264(uParam0, 0, 0);
					func_230(uParam0, 98, 1, 0, 0);
				}
				break;
			
			case 46:
				func_263("TAXI_OBJ_FTC3", 7500, 1);
				uParam0->f_1A1 = 46;
				func_264(uParam0, 0, 0);
				break;
			
			case 21:
				if (!func_23(uParam0->f_51, 1))
				{
					func_355(uParam0, 1, vVar0, "_sick1", 8);
					func_21(&(uParam0->f_51), 2);
				}
				else if (!func_23(uParam0->f_51, 2))
				{
					func_355(uParam0, 2, vVar0, "_sick2", 8);
					func_21(&(uParam0->f_51), 1);
				}
				func_366(12, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_264(uParam0, 0, 0);
				break;
			
			case 22:
				if (!func_23(uParam0->f_52, 2097152))
				{
					StringConCat(&vVar0, "_nopke1", 24);
				}
				else if (!func_23(uParam0->f_52, 4194304))
				{
					StringConCat(&vVar0, "_nopke2", 24);
				}
				func_62(&(uParam0->f_51), 2097152);
				func_365(uParam0, &vVar0, 0, 0, 8);
				func_299(uParam0, 16, 0, 0);
				func_366(17, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 1);
				func_264(uParam0, 0, 0);
				break;
			
			case 61:
				StringConCat(&vVar0, "_Puke1", 24);
				func_365(uParam0, &vVar0, 0, 0, 8);
				func_366(18, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				break;
			
			case 63:
				StringConCat(&vVar0, "_PkStp2", 24);
				func_365(uParam0, &vVar0, 0, 0, 8);
				func_366(20, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_299(uParam0, 16, 0, 0);
				func_264(uParam0, 0, 0);
				break;
			
			case 62:
				StringConCat(&vVar0, "_PkStp1", 24);
				func_365(uParam0, &vVar0, 0, 0, 8);
				func_366(19, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				break;
			
			case 64:
				StringConCat(&vVar0, "_PukeR1", 24);
				func_183(&vVar0);
				func_365(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 71:
				if (!func_23(uParam0->f_51, 4))
				{
					func_355(uParam0, 4, vVar0, "_turns1", 8);
				}
				else if (!func_23(uParam0->f_51, 8))
				{
					func_355(uParam0, 8, vVar0, "_turns2", 8);
				}
				else
				{
					func_355(uParam0, 8, vVar0, "_turns3", 8);
					func_21(&(uParam0->f_51), 4);
					func_21(&(uParam0->f_51), 8);
				}
				func_366(13, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_264(uParam0, 0, 0);
				break;
			
			case 72:
				if (func_354(uParam0))
				{
					func_362(uParam0, vVar0, func_364(uParam0, 72));
				}
				else if (uParam0->f_19B == 9)
				{
					if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
					{
						func_259(uParam0->f_3, "CRASH_GENERIC", uParam0->f_91, 4);
					}
				}
				else if (uParam0->f_19B == 1)
				{
					StringConCat(&vVar0, "_carHt", 24);
					cVar1 = { vVar0 };
					func_342(&(uParam0->f_5F), 5, &cVar1, 1, 0, 1);
					func_188(&(uParam0->f_F4), uParam0->f_90, &cVar1, 8, 0, 0, 0);
				}
				else
				{
					StringConCat(&vVar0, "_carHt1", 24);
					cVar1 = { vVar0 };
					if (uParam0->f_19B == 0)
					{
						func_342(&(uParam0->f_5F), 8, &cVar1, 1, 1, 0);
					}
					else
					{
						func_342(&(uParam0->f_5F), 5, &cVar1, 1, 1, 0);
					}
					func_341(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
				}
				func_366(2, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), cVar1, 0);
				func_299(uParam0, 16, 0, 0);
				func_264(uParam0, 0, 0);
				break;
			
			case 73:
				StringConCat(&vVar0, "_genPnHi", 24);
				func_365(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 75:
				if (!func_23(uParam0->f_53, 128))
				{
					StringConCat(&vVar0, "_nMiss1", 24);
					func_188(&(uParam0->f_F4), uParam0->f_90, &vVar0, 8, 0, 0, 0);
					func_62(&(uParam0->f_53), 128);
					func_21(&(uParam0->f_53), 256);
					func_299(uParam0, 16, 0, 0);
				}
				else if (!func_23(uParam0->f_53, 256))
				{
					StringConCat(&vVar0, "_nMiss2", 24);
					func_188(&(uParam0->f_F4), uParam0->f_90, &vVar0, 8, 0, 0, 0);
					func_62(&(uParam0->f_53), 256);
					func_21(&(uParam0->f_53), 512);
					func_299(uParam0, 16, 0, 0);
				}
				else if (!func_23(uParam0->f_53, 512))
				{
					StringConCat(&vVar0, "_nMiss3", 24);
					func_188(&(uParam0->f_F4), uParam0->f_90, &vVar0, 8, 0, 0, 0);
					func_62(&(uParam0->f_53), 512);
					func_21(&(uParam0->f_53), 128);
					func_299(uParam0, 16, 0, 0);
				}
				func_264(uParam0, 0, 0);
				break;
			
			case 76:
				if (uParam0->f_19B == 1 || uParam0->f_19B == 0)
				{
					bVar6 = true;
				}
				if (!func_23(uParam0->f_53, 1))
				{
					StringConCat(&vVar0, "_air1", 24);
					if (bVar6)
					{
						func_183(&vVar0);
					}
					func_188(&(uParam0->f_F4), uParam0->f_90, &vVar0, 8, 0, 0, 0);
					func_62(&(uParam0->f_53), 1);
					func_21(&(uParam0->f_53), 2);
					func_299(uParam0, 16, 0, 0);
				}
				else if (!func_23(uParam0->f_53, 2))
				{
					StringConCat(&vVar0, "_air2", 24);
					if (bVar6)
					{
						func_183(&vVar0);
					}
					func_188(&(uParam0->f_F4), uParam0->f_90, &vVar0, 8, 0, 0, 0);
					func_62(&(uParam0->f_53), 2);
					if (uParam0->f_19B == 0)
					{
						func_21(&(uParam0->f_53), 4);
					}
					else
					{
						func_21(&(uParam0->f_53), 1);
					}
					func_299(uParam0, 16, 0, 0);
				}
				else if (!func_23(uParam0->f_53, 4))
				{
					StringConCat(&vVar0, "_air3", 24);
					if (bVar6)
					{
						func_183(&vVar0);
					}
					func_188(&(uParam0->f_F4), uParam0->f_90, &vVar0, 8, 0, 0, 0);
					func_62(&(uParam0->f_53), 4);
					func_21(&(uParam0->f_53), 1);
					func_299(uParam0, 16, 0, 0);
				}
				func_366(11, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_264(uParam0, 0, 0);
				break;
			
			case 79:
				if (uParam0->f_19B == 1 || uParam0->f_19B == 0)
				{
					bVar6 = true;
				}
				if (!func_23(uParam0->f_51, 4096))
				{
					func_360(uParam0, 4096, vVar0, "_sideW1", bVar6, 8);
				}
				else if (!func_23(uParam0->f_51, 8192))
				{
					func_360(uParam0, 8192, vVar0, "_sideW2", bVar6, 8);
				}
				func_366(15, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_264(uParam0, 0, 0);
				break;
			
			case 80:
				if (uParam0->f_19B == 1 || uParam0->f_19B == 0)
				{
					bVar6 = true;
				}
				if (!func_23(uParam0->f_51, 16384))
				{
					func_360(uParam0, 16384, vVar0, "_opLne1", bVar6, 8);
				}
				else if (!func_23(uParam0->f_51, 32768))
				{
					func_360(uParam0, 32768, vVar0, "_opLne2", bVar6, 8);
				}
				func_366(14, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_264(uParam0, 0, 0);
				break;
			
			case 83:
				if (uParam0->f_19B == 0)
				{
					if (!func_23(uParam0->f_52, 8))
					{
						func_353(uParam0, 8, vVar0, "_bored1", 8, 0);
					}
					else if (!func_23(uParam0->f_52, 16))
					{
						func_353(uParam0, 16, vVar0, "_bored2", 8, 0);
					}
					else if (!func_23(uParam0->f_52, 32))
					{
						func_353(uParam0, 32, vVar0, "_bored3", 8, 0);
					}
					func_366(9, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
					func_264(uParam0, 0, 0);
				}
				if (uParam0->f_19B == 1)
				{
					StringConCat(&vVar0, "_good1", 24);
					cVar1 = { vVar0 };
					func_342(&(uParam0->f_5D), 6, &cVar1, 0, 1, 0);
					func_341(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
					func_366(9, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
					func_299(uParam0, 16, 0, 0);
					func_264(uParam0, 0, 0);
				}
				break;
			
			case 92:
				StringConCat(&vVar0, "_EtoB1", 24);
				cVar1 = { vVar0 };
				func_342(&(uParam0->f_60), 2, &cVar1, 0, 1, 0);
				func_341(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
				func_366(9, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_299(uParam0, 16, 0, 0);
				func_264(uParam0, 0, 0);
				break;
			
			case 93:
				StringConCat(&vVar0, "_BtoE1", 24);
				cVar1 = { vVar0 };
				func_342(&(uParam0->f_61), 2, &cVar1, 0, 1, 0);
				func_341(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
				func_366(12, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_299(uParam0, 16, 0, 0);
				func_264(uParam0, 0, 0);
				break;
			
			case 81:
				if (!func_23(uParam0->f_51, 65536))
				{
					func_360(uParam0, 65536, vVar0, "_runLit1", 1, 8);
				}
				else if (!func_23(uParam0->f_51, 131072))
				{
					func_360(uParam0, 131072, vVar0, "_runLit2", 1, 8);
				}
				func_264(uParam0, 0, 0);
				break;
			
			case 82:
				if (func_354(uParam0))
				{
					func_362(uParam0, vVar0, func_364(uParam0, 82));
				}
				else if (uParam0->f_19B == 9)
				{
					if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
					{
						func_259(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_91, 4);
					}
				}
				else if (!func_23(uParam0->f_53, 8))
				{
					StringConCat(&vVar0, "_hitR1", 24);
					func_183(&vVar0);
					func_188(&(uParam0->f_F4), uParam0->f_90, &vVar0, 8, 0, 0, 0);
					func_62(&(uParam0->f_53), 8);
					func_21(&(uParam0->f_53), 16);
					func_299(uParam0, 16, 0, 0);
				}
				else if (!func_23(uParam0->f_53, 16))
				{
					StringConCat(&vVar0, "_hitR2", 24);
					func_183(&vVar0);
					func_188(&(uParam0->f_F4), uParam0->f_90, &vVar0, 8, 0, 0, 0);
					func_62(&(uParam0->f_53), 16);
					func_21(&(uParam0->f_53), 32);
					func_299(uParam0, 16, 0, 0);
				}
				else if (!func_23(uParam0->f_53, 32))
				{
					StringConCat(&vVar0, "_hitR3", 24);
					func_183(&vVar0);
					func_188(&(uParam0->f_F4), uParam0->f_90, &vVar0, 8, 0, 0, 0);
					func_62(&(uParam0->f_53), 32);
					if (uParam0->f_19B == 0)
					{
						func_21(&(uParam0->f_53), 64);
					}
					else
					{
						func_21(&(uParam0->f_53), 8);
					}
					func_299(uParam0, 16, 0, 0);
				}
				else if (!func_23(uParam0->f_53, 64))
				{
					StringConCat(&vVar0, "_hitR4", 24);
					func_183(&vVar0);
					func_188(&(uParam0->f_F4), uParam0->f_90, &vVar0, 8, 0, 0, 0);
					func_62(&(uParam0->f_53), 64);
					func_21(&(uParam0->f_53), 8);
					func_299(uParam0, 16, 0, 0);
				}
				func_366(1, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_264(uParam0, 0, 0);
				break;
			
			case 65:
				if (!func_186())
				{
					if (uParam0->f_73)
					{
						StringConCat(&vVar0, "_aggro2", 24);
					}
					else
					{
						StringConCat(&vVar0, "_aggro", 24);
					}
					func_365(uParam0, &vVar0, 0, 1, 8);
				}
				else
				{
					func_362(uParam0, vVar0, func_364(uParam0, 65));
					func_264(uParam0, 0, 0);
				}
				uParam0->f_6B++;
				break;
			
			case 66:
				if (!func_186())
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
					func_365(uParam0, &vVar0, 0, 1, 8);
				}
				else
				{
					func_362(uParam0, vVar0, func_364(uParam0, 66));
					func_264(uParam0, 0, 0);
				}
				uParam0->f_6B++;
				break;
			
			case 13:
				if (uParam0->f_19B == 8)
				{
					if (!uParam0->f_6D && !func_186())
					{
						switch (uParam0->f_19E)
						{
							case 3:
								StringConCat(&vVar0, "_warnC1", 24);
								func_365(uParam0, &vVar0, 0, 0, 8);
								break;
							
							case 6:
								StringConCat(&vVar0, "_warnF1", 24);
								func_365(uParam0, &vVar0, 0, 0, 8);
								break;
							
							case 1:
								StringConCat(&vVar0, "_far1", 24);
								func_365(uParam0, &vVar0, 0, 0, 8);
								func_366(21, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
								break;
							
							case 2:
								StringConCat(&vVar0, "_close1", 24);
								func_365(uParam0, &vVar0, 0, 0, 8);
								func_366(22, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
								break;
							
							case 10:
								StringConCat(&vVar0, "_hit1", 24);
								func_365(uParam0, &vVar0, 0, 0, 8);
								break;
							
							case 8:
								StringConCat(&vVar0, "_good1", 24);
								cVar1 = { vVar0 };
								func_342(&(uParam0->f_5D), 6, &cVar1, 1, 1, 0);
								func_341(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
								func_366(23, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), cVar1, 0);
								func_299(uParam0, 16, 0, 0);
								func_264(uParam0, 0, 0);
								break;
							
							case 9:
								if (!iLocal_58)
								{
									StringConCat(&vVar0, "_sBant1", 24);
									cVar1 = { vVar0 };
									func_365(uParam0, &vVar0, 0, 0, 8);
									func_299(uParam0, 16, 0, 0);
									func_299(uParam0, 11, 0, 0);
									func_264(uParam0, 0, 0);
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
									func_183(&vVar0);
									func_365(uParam0, &vVar0, 0, 0, 8);
									func_299(uParam0, 16, 0, 0);
									func_299(uParam0, 11, 0, 0);
									func_264(uParam0, 0, 0);
									iLocal_58 = 0;
								}
								break;
							
							case 7:
								StringConCat(&vVar0, "_done1", 24);
								func_365(uParam0, &vVar0, 0, 0, 8);
								break;
						}
						func_230(uParam0, 143, 0, 0, 0);
					}
				}
				break;
			
			case 78:
				StringConCat(&vVar0, "_speed1", 24);
				cVar1 = { vVar0 };
				func_342(&(uParam0->f_57), 6, &cVar1, 1, 1, 0);
				func_341(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
				func_366(10, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_299(uParam0, 16, 0, 0);
				func_264(uParam0, 0, 0);
				break;
			
			case 25:
				if (!func_23(uParam0->f_52, 1))
				{
					func_353(uParam0, 1, vVar0, "_close1", 8, 0);
				}
				else if (!func_23(uParam0->f_52, 2))
				{
					func_353(uParam0, 2, vVar0, "_close2", 8, 0);
				}
				else if (!func_23(uParam0->f_52, 4))
				{
					func_353(uParam0, 4, vVar0, "_close3", 8, 0);
				}
				func_264(uParam0, 0, 0);
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
				func_342(&(uParam0->f_56), 4, &cVar1, 0, 1, 0);
				if (uParam0->f_19B != 9)
				{
					func_341(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
				}
				else if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
				{
					func_259(uParam0->f_3, "TAXI_STOPPED", uParam0->f_91, 4);
				}
				func_299(uParam0, 16, 0, 0);
				func_366(5, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_264(uParam0, 0, 0);
				break;
			
			case 74:
				if (func_354(uParam0))
				{
					func_362(uParam0, vVar0, func_364(uParam0, 74));
				}
				else if (uParam0->f_19B == 9)
				{
					if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
					{
						func_259(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_91, 4);
					}
				}
				else
				{
					StringConCat(&vVar0, "_roll1", 24);
					func_352(uParam0, vVar0, 8);
				}
				func_366(3, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_299(uParam0, 16, 0, 0);
				func_264(uParam0, 0, 0);
				break;
			
			case 70:
				if (!func_23(uParam0->f_53, 1024))
				{
					func_62(&(uParam0->f_53), 1024);
					func_299(uParam0, 16, 0, 0);
					StringConCat(&vVar0, "_swrv1", 24);
					func_183(&vVar0);
					func_188(&(uParam0->f_F4), uParam0->f_90, &vVar0, 8, 0, 0, 0);
				}
				else if (!func_23(uParam0->f_53, 2048))
				{
					func_62(&(uParam0->f_53), 2048);
					func_299(uParam0, 16, 0, 0);
					StringConCat(&vVar0, "_swrv2", 24);
					func_183(&vVar0);
					func_188(&(uParam0->f_F4), uParam0->f_90, &vVar0, 8, 0, 0, 0);
				}
				else if (!func_23(uParam0->f_53, 4096))
				{
					func_62(&(uParam0->f_53), 4096);
					func_299(uParam0, 16, 0, 0);
					StringConCat(&vVar0, "_swrv3", 24);
					func_183(&vVar0);
					func_188(&(uParam0->f_F4), uParam0->f_90, &vVar0, 8, 0, 0, 0);
				}
				func_264(uParam0, 0, 0);
				break;
			
			case 69:
				if (!func_23(uParam0->f_52, 1024))
				{
					func_353(uParam0, 1024, vVar0, "_rvrs1", 8, 1);
					func_21(&(uParam0->f_52), 2048);
				}
				else if (!func_23(uParam0->f_52, 2048))
				{
					func_353(uParam0, 2048, vVar0, "_rvrs2", 8, 1);
				}
				func_264(uParam0, 0, 0);
				break;
			
			case 67:
				StringConCat(&vVar0, "_ofrd1", 24);
				cVar1 = { vVar0 };
				func_342(&(uParam0->f_58), 4, &cVar1, 0, 1, 0);
				func_341(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
				func_366(16, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), cVar1, 0);
				func_299(uParam0, 16, 0, 0);
				func_264(uParam0, 0, 0);
				break;
			
			case 68:
				StringConCat(&vVar0, "_ofrdch1", 24);
				func_188(&(uParam0->f_F4), uParam0->f_90, &vVar0, 9, 0, 0, 0);
				func_299(uParam0, 16, 0, 0);
				func_264(uParam0, 0, 0);
				break;
			
			case 49:
				StringConCat(&vVar0, "_losPol1", 24);
				func_365(uParam0, &vVar0, 0, 0, 8);
				func_230(uParam0, 52, 1, 0, 0);
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
					func_365(uParam0, &vVar0, 0, 0, 8);
				}
				else if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
				{
					func_259(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_91, 4);
				}
				func_299(uParam0, 16, 0, 0);
				func_264(uParam0, 0, 0);
				break;
			
			case 51:
				if (func_354(uParam0))
				{
					if (uParam0->f_19B == 2)
					{
						StringConCat(&vVar0, "_copBa1", 24);
						cVar1 = { vVar0 };
						cVar1 = { vVar0 };
						func_365(uParam0, &vVar0, 0, 0, 8);
						func_230(uParam0, 52, 1, 0, 0);
						func_299(uParam0, 16, 0, 0);
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
						func_365(uParam0, &vVar0, 0, 0, 8);
						func_299(uParam0, 16, 0, 0);
					}
				}
				else
				{
					StringConCat(&vVar0, "_copBa1", 24);
					cVar1 = { vVar0 };
					func_342(&(uParam0->f_55), 6, &cVar1, 1, 1, 0);
					func_341(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
					func_299(uParam0, 16, 0, 0);
					func_264(uParam0, 0, 0);
				}
				break;
			
			case 53:
				StringConCat(&vVar0, "_evdeP1", 24);
				func_366(8, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_365(uParam0, &vVar0, 0, 0, 8);
				func_299(uParam0, 10, 0f, 1);
				break;
			
			case 52:
				if (unk_0x904E94842BB9E173(unk_0xFC1CAE18F3ECBF2D()) >= 1)
				{
					func_263("TAXI_OBJ_POL", 7500, 1);
					uParam0->f_1A1 = 52;
				}
				func_264(uParam0, 0, 0);
				break;
			
			case 54:
				StringConCat(&vVar0, "_cpFz1", 24);
				func_183(&vVar0);
				func_365(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 84:
				if (!func_23(uParam0->f_51, 262144))
				{
					func_360(uParam0, 262144, vVar0, "_rdCh1", 1, 8);
				}
				else if (!func_23(uParam0->f_51, 1048576))
				{
					if (uParam0->f_19B == 0 || uParam0->f_19B == 1)
					{
						func_360(uParam0, 1048576, vVar0, "_rdCh2", 1, 8);
					}
					else
					{
						func_360(uParam0, 1048576, vVar0, "_rdCh2", 0, 8);
					}
				}
				func_366(7, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_264(uParam0, 0, 0);
				break;
			
			case 85:
				if (!func_23(uParam0->f_52, 67108864))
				{
					if (uParam0->f_1A2.f_6)
					{
						func_351(uParam0, 67108864, vVar0, "_rdLk1", 1, 7);
					}
				}
				else if (!func_23(uParam0->f_52, 134217728))
				{
					func_351(uParam0, 134217728, vVar0, "_rdFv1", 0, 7);
				}
				func_366(6, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_264(uParam0, 0, 0);
				break;
			
			case 86:
				StringConCat(&vVar0, "_rdneu1", 24);
				func_365(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 87:
				StringConCat(&vVar0, "_rdtip1", 24);
				cVar1 = { vVar0 };
				StringConCat(&cVar1, "_", 24);
				StringIntConCat(&cVar1, uParam0->f_1A2.f_3, 24);
				func_341(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
				func_299(uParam0, 16, 0, 0);
				func_264(uParam0, 0, 0);
				break;
			
			case 100:
				func_263("TAXI_OBJ_GYB_2", 7500, 1);
				uParam0->f_1A1 = 100;
				func_264(uParam0, 0, 0);
				break;
			
			case 47:
				if (uParam0->f_19B == 1)
				{
					StringConCat(&vVar0, "_horn", 24);
					func_365(uParam0, &vVar0, 0, 0, 8);
				}
				break;
			
			case 101:
				StringConCat(&vVar0, "_thank1", 24);
				if ((uParam0->f_19B == 1 || uParam0->f_19B == 5) || uParam0->f_19B == 0)
				{
					func_183(&vVar0);
				}
				func_62(&(uParam0->f_51), 2097152);
				if (uParam0->f_19B != 9)
				{
					func_365(uParam0, &vVar0, 0, 0, 8);
				}
				break;
			
			case 102:
				StringConCat(&vVar0, "_thank2", 24);
				if ((uParam0->f_19B == 1 || uParam0->f_19B == 5) || uParam0->f_19B == 0)
				{
					func_183(&vVar0);
				}
				func_62(&(uParam0->f_51), 2097152);
				if (uParam0->f_19B != 9)
				{
					func_365(uParam0, &vVar0, 0, 0, 8);
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
					func_183(&vVar0);
				}
				func_62(&(uParam0->f_51), 2097152);
				if (uParam0->f_19B != 9)
				{
					func_365(uParam0, &vVar0, 0, 0, 8);
				}
				break;
			
			case 97:
				if (!func_23(uParam0->f_52, 65536))
				{
					if (func_409(uParam0, 11) > uParam0->f_24)
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
						func_183(&vVar0);
						func_357(vVar0, uParam1);
						func_62(&(uParam0->f_52), 65536);
						func_299(uParam0, 16, 0, 0);
						func_299(uParam0, 11, 0, 0);
						func_264(uParam0, 0, 0);
					}
				}
				break;
			
			case 98:
				if (!func_23(uParam0->f_52, 131072))
				{
					if (func_409(uParam0, 11) > uParam0->f_24)
					{
						StringConCat(&vVar0, "_ccbb1", 24);
						func_183(&vVar0);
						func_357(vVar0, uParam1);
						func_62(&(uParam0->f_52), 131072);
						func_299(uParam0, 16, 0, 0);
						func_299(uParam0, 11, 0, 0);
						func_264(uParam0, 0, 0);
					}
				}
				break;
			
			case 99:
				if (!func_23(uParam0->f_52, 8388608))
				{
					StringConCat(&vVar0, "_close1", 24);
					func_62(&(uParam0->f_52), 8388608);
				}
				else if (!func_23(uParam0->f_52, 16777216))
				{
					StringConCat(&vVar0, "_close2", 24);
					func_62(&(uParam0->f_52), 16777216);
				}
				else if (!func_23(uParam0->f_52, 33554432))
				{
					StringConCat(&vVar0, "_close3", 24);
					func_62(&(uParam0->f_52), 33554432);
				}
				func_357(vVar0, uParam1);
				func_299(uParam0, 16, 0, 0);
				func_264(uParam0, 0, 0);
				break;
			
			case 58:
				if (uParam0->f_19B == 6)
				{
					StringConCat(&vVar0, "_kill1", 24);
					cVar1 = { vVar0 };
					func_342(&(uParam0->f_5D), 6, &cVar1, 1, 1, 1);
					func_183(&vVar0);
					func_341(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
				}
				else if (uParam0->f_19B == 8)
				{
					StringConCat(&vVar0, "_cheat1", 24);
					func_365(uParam0, &vVar0, 0, 0, 8);
				}
				else
				{
					StringConCat(&vVar0, "_kill1", 24);
					func_365(uParam0, &vVar0, 0, 0, 8);
				}
				func_299(uParam0, 16, 0, 0);
				func_264(uParam0, 0, 0);
				break;
			
			case 95:
				StringConCat(&vVar0, "_wndw2", 24);
				func_357(vVar0, uParam1);
				func_299(uParam0, 16, 0, 0);
				func_299(uParam0, 11, 0, 0);
				func_264(uParam0, 0, 0);
				break;
			
			case 94:
				StringConCat(&vVar0, "_wndw0", 24);
				func_357(vVar0, uParam1);
				func_299(uParam0, 16, 0, 0);
				func_299(uParam0, 11, 0, 0);
				func_264(uParam0, 0, 0);
				break;
			
			case 96:
				StringConCat(&vVar0, "_wndw1", 24);
				func_357(vVar0, uParam1);
				func_299(uParam0, 16, 0, 0);
				func_299(uParam0, 11, 0, 0);
				func_264(uParam0, 0, 0);
				break;
			
			case 113:
				StringConCat(&vVar0, "_csite1", 24);
				func_183(&vVar0);
				func_365(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 119:
				StringConCat(&vVar0, "_fair1", 24);
				func_183(&vVar0);
				func_365(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 115:
				StringConCat(&vVar0, "_AlCk1", 24);
				cVar1 = { vVar0 };
				func_342(&(uParam0->f_5B), 5, &cVar1, 1, 1, 0);
				func_341(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
				func_299(uParam0, 16, 0, 0);
				func_264(uParam0, 0, 0);
				break;
			
			case 116:
				StringConCat(&vVar0, "_eggG1", 24);
				cVar1 = { vVar0 };
				func_342(&(uParam0->f_5C), 5, &cVar1, 1, 1, 0);
				func_341(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
				func_299(uParam0, 16, 0, 0);
				func_264(uParam0, 0, 0);
				break;
			
			case 114:
				StringConCat(&vVar0, "_goons1", 24);
				func_365(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 59:
				StringConCat(&vVar0, "_oRun1", 24);
				func_365(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 117:
				StringConCat(&vVar0, "_gotG1", 24);
				func_365(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 118:
				StringConCat(&vVar0, "_getA1", 24);
				func_365(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 120:
				StringConCat(&vVar0, "_gnawy1", 24);
				func_365(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 121:
				StringConCat(&vVar0, "_grl1", 24);
				func_183(&vVar0);
				func_365(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 122:
				StringConCat(&vVar0, "_figt1", 24);
				func_365(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 123:
				StringConCat(&vVar0, "_gEgg1", 24);
				func_365(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 124:
				StringConCat(&vVar0, "_gEgg3", 24);
				func_365(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 125:
				StringConCat(&vVar0, "_gEgg2", 24);
				func_365(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 126:
				StringConCat(&vVar0, "_gLeav1", 24);
				func_365(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 127:
				StringConCat(&vVar0, "_aKill1", 24);
				func_365(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 129:
				StringConCat(&vVar0, "_gHelp1", 24);
				func_183(&vVar0);
				func_365(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 130:
				StringConCat(&vVar0, "_gDest1", 24);
				func_365(uParam0, &vVar0, 0, 0, 8);
				func_230(uParam0, 11, 1, 0, 0);
				break;
			
			case 128:
				StringConCat(&vVar0, "_gKO1", 24);
				func_365(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 132:
				StringConCat(&vVar0, "_gThank1", 24);
				func_62(&(uParam0->f_51), 2097152);
				func_365(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 131:
				StringConCat(&vVar0, "_gDriv1", 24);
				func_183(&vVar0);
				func_357(vVar0, uParam1);
				func_62(&(uParam0->f_51), 67108864);
				func_299(uParam0, 16, 0, 0);
				func_299(uParam0, 11, 0, 0);
				func_264(uParam0, 0, 0);
				break;
			
			case 60:
				StringConCat(&vVar0, "_cash1", 24);
				func_365(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 105:
				if (!func_23(uParam0->f_51, 33554432) && uParam0->f_19B != 9)
				{
					func_360(uParam0, 33554432, vVar0, "_noPay1", 1, 8);
				}
				else if (uParam0->f_19B == 9)
				{
					if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
					{
						func_259(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_91, 4);
					}
				}
				func_230(uParam0, 108, 1, 0, 0);
				break;
			
			case 106:
				StringConCat(&vVar0, "_foot", 24);
				func_188(&(uParam0->f_F4), uParam0->f_90, &vVar0, 9, 0, 0, 0);
				func_299(uParam0, 16, 0, 0);
				func_264(uParam0, 0, 0);
				break;
			
			case 107:
				if (!func_23(uParam0->f_51, 268435456))
				{
					func_360(uParam0, 268435456, vVar0, "_kPay1", 1, 8);
				}
				func_230(uParam0, 52, 1, 0, 0);
				break;
			
			case 108:
				func_263("TAXI_OBJ_RUNOUT", 7500, 1);
				uParam0->f_1A1 = 108;
				func_264(uParam0, 0, 0);
				break;
			
			case 109:
				if (!func_23(uParam0->f_51, 4194304))
				{
					if (uParam0->f_19B == 2 || uParam0->f_19B == 6)
					{
						func_360(uParam0, 4194304, vVar0, "_mPay1", 0, 8);
					}
					else if (uParam0->f_19B == 9)
					{
						if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
						{
							func_259(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_91, 4);
						}
					}
					else
					{
						func_360(uParam0, 4194304, vVar0, "_mPay1", 1, 8);
					}
				}
				func_230(uParam0, 111, 1, 0, 0);
				break;
			
			case 111:
				func_263("TAXI_OBJ_GETRUN", 7500, 1);
				uParam0->f_1A1 = 111;
				func_264(uParam0, 0, 0);
				break;
			
			case 110:
				StringConCat(&vVar0, "_runoff", 24);
				func_188(&(uParam0->f_F4), uParam0->f_90, &vVar0, 9, 0, 0, 0);
				func_299(uParam0, 16, 0, 0);
				func_264(uParam0, 0, 0);
				break;
			
			case 141:
				if (!func_23(uParam0->f_51, 16777216))
				{
					func_360(uParam0, 16777216, vVar0, "_ret1", 1, 8);
				}
				func_264(uParam0, 0, 0);
				break;
			
			case 88:
				func_263("TAXI_TIEFLEE", 7500, 1);
				func_264(uParam0, 0, 0);
				break;
			
			case 57:
				if (!func_23(uParam0->f_62, 536870912))
				{
					func_263("TAXI_OBJ_CYI_1B", 7500, 1);
					func_62(&(uParam0->f_62), 536870912);
				}
				uParam0->f_1A1 = 57;
				func_264(uParam0, 0, 0);
				break;
			
			case 104:
				StringConCat(&vVar0, "_joke1", 24);
				func_183(&vVar0);
				func_365(uParam0, &vVar0, 0, 0, 8);
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
				func_365(uParam0, &vVar0, 0, 0, 8);
				func_264(uParam0, 0, 0);
				break;
			
			case 140:
				StringConCat(&vVar0, "_shout", 24);
				func_365(uParam0, &vVar0, 0, 0, 8);
				func_264(uParam0, 0, 0);
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
				func_365(uParam0, &vVar0, 0, 0, 8);
				func_264(uParam0, 0, 0);
				break;
			
			case 133:
				StringConCat(&vVar0, "_getCar", 24);
				func_365(uParam0, &vVar0, 1, 0, 8);
				func_230(uParam0, 134, 1, 0, 0);
				break;
			
			case 134:
				func_263("TX_VIP", 7500, 0);
				uParam0->f_1A1 = 134;
				func_230(uParam0, 0, 0, 0, 0);
				func_264(uParam0, 0, 0);
				break;
			}
	}
}

void func_351(var uParam0, int iParam1, vector3 vParam2, var uParam3, var uParam4, var uParam5, char* sParam6, bool bParam7, int iParam8)//Position - 0x10CC9
{
	func_62(&(uParam0->f_52), iParam1);
	func_299(uParam0, 16, 0, 0);
	StringConCat(&vParam2, sParam6, 24);
	if (bParam7)
	{
		func_183(&vParam2);
	}
	func_188(&(uParam0->f_F4), uParam0->f_90, &vParam2, iParam8, 0, 0, 0);
}

void func_352(var uParam0, struct<6> Param1, int iParam2)//Position - 0x10D0A
{
	vector3 vVar0[24];
	
	cVar0 = { Param1 };
	if (!func_23(uParam0->f_52, 64))
	{
		func_62(&(uParam0->f_52), 64);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!func_23(uParam0->f_52, 128))
	{
		func_62(&(uParam0->f_52), 128);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, unk_0x491B2241281A03B7(1, 3), 24);
	}
	func_341(&(uParam0->f_F4), uParam0->f_90, &Param1, &cVar0, iParam2, 0, 0);
	func_299(uParam0, 16, 0, 0);
}

void func_353(var uParam0, int iParam1, vector3 vParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, int iParam7, bool bParam8)//Position - 0x10D91
{
	func_62(&(uParam0->f_52), iParam1);
	func_299(uParam0, 16, 0, 0);
	StringConCat(&vParam2, sParam6, 24);
	if ((((uParam0->f_19B == 1 || uParam0->f_19B == 0) || uParam0->f_19B == 5) || uParam0->f_19B == 8) || uParam0->f_19B == 2)
	{
		if (bParam8)
		{
			func_183(&vParam2);
		}
	}
	func_188(&(uParam0->f_F4), uParam0->f_90, &vParam2, iParam7, 0, 0, 0);
}

int func_354(var uParam0)//Position - 0x10E11
{
	if ((((((uParam0->f_19B == 2 || uParam0->f_19B == 3) || uParam0->f_19B == 4) || uParam0->f_19B == 5) || uParam0->f_19B == 6) || uParam0->f_19B == 7) || uParam0->f_19B == 8)
	{
		return 1;
	}
	return 0;
}

void func_355(var uParam0, int iParam1, vector3 vParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, int iParam7)//Position - 0x10E77
{
	func_62(&(uParam0->f_51), iParam1);
	func_299(uParam0, 16, 0, 0);
	StringConCat(&vParam2, sParam6, 24);
	func_188(&(uParam0->f_F4), uParam0->f_90, &vParam2, iParam7, 0, 0, 0);
}

void func_356(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x10EAD
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = SYSTEM::TO_FLOAT(iVar2);
		iVar1 = SYSTEM::ROUND(SYSTEM::POW(2f, fVar0));
		if (!func_278(*uParam0, iVar1))
		{
			func_63(uParam0, iVar1);
			if (bParam5)
			{
				StringConCat(sParam2, "_", 24);
			}
			StringIntConCat(sParam2, iVar2 + 1, 24);
			if ((*iParam3)[iVar2])
			{
				func_183(sParam2);
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

void func_357(char[24] cParam0, var uParam1)//Position - 0x10F2E
{
	int iVar0;
	
	iVar0 = func_358(uParam1);
	if (iVar0 > -1)
	{
		*(uParam1[iVar0 /*8*/]) = { cParam0 };
		func_62(&((uParam1[iVar0 /*8*/])->f_7), 2);
	}
}

int func_358(var uParam0)//Position - 0x10F5D
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

void func_359(var uParam0, bool bParam1)//Position - 0x10F8A
{
	switch (uParam0->f_19B)
	{
		case 0:
			if (bParam1)
			{
				func_263("TX_OBJ_NEX_PU", 7500, 1);
			}
			else
			{
				func_263("TX_OBJ_NEX_DO", 7500, 1);
			}
			break;
		
		case 1:
			if (bParam1)
			{
				func_263("TX_OBJ_TIE_PU", 7500, 1);
			}
			else
			{
				func_263("TX_OBJ_TIE_DO", 7500, 1);
			}
			break;
		
		case 2:
			if (bParam1)
			{
				func_263("TX_OBJ_DL_PU", 7500, 1);
			}
			else
			{
				func_263("TX_OBJ_DL_DO", 7500, 1);
			}
			break;
		
		case 3:
			if (bParam1)
			{
				func_263("TX_OBJ_GYB_PU", 7500, 1);
			}
			else
			{
				func_263("TX_OBJ_GYB_DO", 7500, 1);
			}
			break;
		
		case 4:
			if (bParam1)
			{
				func_263("TX_OBJ_TTB_PU", 7500, 1);
			}
			else
			{
				func_263("TX_OBJ_TTB_DO", 7500, 1);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				func_263("TX_OBJ_CYI_PU", 7500, 1);
			}
			else
			{
				func_263("TX_OBJ_CYI_DO", 7500, 1);
			}
			break;
		
		case 6:
			if (bParam1)
			{
				func_263("TX_OBJ_GYN_PU", 7500, 1);
			}
			else
			{
				func_263("TX_OBJ_GYN_DO", 7500, 1);
			}
			break;
		
		case 7:
			if (bParam1)
			{
				func_263("TX_OBJ_CC_PU", 7500, 1);
			}
			else
			{
				func_263("TAXI_OBJ_CC1", 7500, 1);
			}
			break;
		
		case 8:
			if (bParam1)
			{
				func_263("TX_OBJ_FC_PU", 7500, 1);
			}
			else
			{
				func_263("TAXI_OBJ_FTC1", 7500, 1);
			}
			break;
		
		case 9:
			if (bParam1)
			{
				func_263("TX_OBJ_PRO_PU", 7500, 1);
			}
			else
			{
				func_263("TX_OBJ_PRO_DO", 7500, 1);
			}
			break;
	}
	if (!bParam1)
	{
		uParam0->f_8B = 1;
	}
}

void func_360(var uParam0, int iParam1, vector3 vParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, bool bParam7, int iParam8)//Position - 0x11141
{
	func_62(&(uParam0->f_51), iParam1);
	func_299(uParam0, 16, 0, 0);
	StringConCat(&vParam2, sParam6, 24);
	if (bParam7)
	{
		func_183(&vParam2);
	}
	func_188(&(uParam0->f_F4), uParam0->f_90, &vParam2, iParam8, 0, 0, 0);
}

int func_361(vector3 vParam0, bool bParam1)//Position - 0x11182
{
	int iVar0;
	
	iVar0 = unk_0x390CF6C8AD6903B7(vParam0);
	unk_0x3F5F1772D71D5EC4(iVar0, func_112(unk_0x7AF0088ABFA713B6(), 1f, 1f));
	unk_0x0BBAABB52887CF8C(iVar0, bParam1);
	return iVar0;
}

void func_362(var uParam0, char[12] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char* sParam5)//Position - 0x111AE
{
	func_299(uParam0, 16, 0, 0);
	func_299(uParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam5, 24);
	if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
	{
		unk_0xD508385315EA1DAC(uParam0->f_3, &cParam1, func_363(uParam0));
	}
}

char* func_363(var uParam0)//Position - 0x111EC
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

char* func_364(var uParam0, int iParam1)//Position - 0x11286
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

bool func_365(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x1162F
{
	func_299(uParam0, 16, 0, 0);
	if (bParam3)
	{
		func_299(uParam0, 17, 0f, 1);
	}
	func_264(uParam0, iParam2, 0);
	return func_188(&(uParam0->f_F4), uParam0->f_90, sParam1, iParam4, 0, 0, 0);
}

void func_366(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam5)//Position - 0x1166C
{
	if (iParam0 == 0)
	{
		if (func_23(*uParam2, 2))
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
		if (func_23(*uParam2, 1073741824))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 1)
	{
		if (func_23(*uParam2, 4))
		{
			if (!func_23(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_21(uParam2, 4096);
			}
		}
		else if (func_23(*uParam2, 8))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 5)
	{
		if (func_23(*uParam2, 512))
		{
			if (!func_23(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_21(uParam2, 4096);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (func_23(*uParam2, 16))
		{
			if (!func_23(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_21(uParam2, 4096);
			}
		}
		else if (func_23(*uParam2, 32))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 3)
	{
		if (func_23(*uParam2, 64))
		{
			if (!func_23(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_21(uParam2, 4096);
			}
		}
		else if (func_23(*uParam2, 128))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 4)
	{
		if (func_23(*uParam2, 256))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 6)
	{
		if (func_23(*uParam2, 1024))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 7)
	{
		if (func_23(*uParam2, 2048))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 9)
	{
		if (func_23(*uParam2, 8192))
		{
			if (func_23(*uParam2, 2097152))
			{
				*uParam1 += 3;
				*uParam3 = { cParam4 };
			}
			else if (func_23(*uParam2, 4194304))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 10)
	{
		if (func_23(*uParam2, 16384))
		{
			if (func_23(*uParam2, 4194304))
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
		if (func_23(*uParam2, 32768))
		{
			if (func_23(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_23(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 12)
	{
		if (func_23(*uParam2, 65536))
		{
			if (func_23(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 13)
	{
		if (func_23(*uParam2, 131072))
		{
			if (func_23(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_23(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 14)
	{
		if (func_23(*uParam2, 262144))
		{
			if (func_23(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_23(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 15)
	{
		if (func_23(*uParam2, 524288))
		{
			if (func_23(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_23(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 16)
	{
		if (func_23(*uParam2, 1048576))
		{
			if (func_23(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_23(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 21)
	{
		if (func_23(*uParam2, 8388608))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 22)
	{
		if (func_23(*uParam2, 16777216))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 23)
	{
		if (func_23(*uParam2, 33554432))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 17)
	{
		if (func_23(*uParam2, 67108864))
		{
			if (func_23(*uParam2, 67108864))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 18)
	{
		if (func_23(*uParam2, 134217728))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 20)
	{
		if (func_23(*uParam2, 536870912))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 19)
	{
		if (func_23(*uParam2, 268435456))
		{
			*uParam1++;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 25)
	{
		if (func_23(*uParam2, 32768))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
}

int func_367(var uParam0)//Position - 0x11C76
{
	return uParam0->f_1A0;
}

int func_368(char* sParam0)//Position - 0x11C83
{
	if (!unk_0xEAEFBBEC1AEA464B(sParam0))
	{
		if (func_213(sParam0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_369(var uParam0)//Position - 0x11CA5
{
	if (func_186())
	{
		return 1;
	}
	if (func_172(uParam0, 17))
	{
		return 1;
	}
	if (func_172(uParam0, 14))
	{
		return 1;
	}
	if (func_211(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_370(var uParam0, var uParam1)//Position - 0x11CE4
{
	return ((*uParam1 == -1 && uParam0->f_19C == 0) && !func_172(uParam0, 9));
}

bool func_371(var uParam0)//Position - 0x11D0B
{
	return uParam0->f_75;
}

void func_372(var uParam0)//Position - 0x11D17
{
	int iVar0;
	
	if (uParam0->f_19A >= 5)
	{
		if (unk_0x724D816EA203A79E(uParam0->f_4))
		{
			if (Local_165 > 0 && !func_278(Local_165.f_1[4 /*4*/], 4))
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 <= (Local_165 - 1))
				{
					if (func_278(Local_165.f_1[iVar0 /*4*/], 2))
					{
						Stack.Push(uParam0);
						Call_Loc(Local_165.f_1[iVar0 /*4*/].f_2);
						if (StackVal)
						{
							if (!func_278(Local_165.f_1[iVar0 /*4*/], 4))
							{
								func_63(&(Local_165.f_1[iVar0 /*4*/]), 4);
								Local_165.f_1[iVar0 /*4*/].f_1 = unk_0x105601648511CC64();
							}
						}
						else
						{
							func_22(&(Local_165.f_1[iVar0 /*4*/]), 12);
						}
						if (func_278(Local_165.f_1[iVar0 /*4*/], 4) && !func_278(Local_165.f_1[iVar0 /*4*/], 8))
						{
							Stack.Push(uParam0);
							Stack.Push(Local_165.f_1[iVar0 /*4*/].f_1);
							Call_Loc(Local_165.f_1[iVar0 /*4*/].f_3);
							if (StackVal)
							{
								func_63(&(Local_165.f_1[iVar0 /*4*/]), 8);
							}
						}
					}
					iVar0++;
				}
			}
		}
		else
		{
			func_332(uParam0, "Taxi Garbage Collected", 18);
		}
	}
}

void func_373(var uParam0, var uParam1, bool bParam2)//Position - 0x11E2A
{
	if (!func_23(uParam0->f_37, 1))
	{
		switch (*uParam1)
		{
			case 0:
				if (!unk_0xF1734B55490E9045(&(uParam0->f_7C)) && func_186())
				{
					*uParam1++;
				}
				break;
			
			case 1:
				if (!func_186())
				{
					StringCopy(&(uParam0->f_7C), func_201(), 24);
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

int func_374(var uParam0, var uParam1)//Position - 0x11EB0
{
	var uVar0;
	
	if (!func_172(uParam0, 27))
	{
		func_207(uParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!uParam0->f_6D && func_409(uParam0, 27) > 5f)
	{
		if (func_401(uParam0->f_3, uParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_299(uParam0, 27, 0, 0);
			func_299(uParam0, 10, 0, 0);
			func_399(uParam0, &uVar0, uParam1);
		}
		func_396(uParam0);
	}
	if (uParam0->f_19A >= 3 && uParam0->f_19A <= 5)
	{
		func_375(uParam0);
	}
	if ((((!unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()) && (unk_0xEF0E25DA0CB6E8FF(*uParam0) && !unk_0xEDEA6C8F42EE05F6(*uParam0))) && (unk_0xEF0E25DA0CB6E8FF(uParam0->f_1) && !unk_0xEDEA6C8F42EE05F6(uParam0->f_1))) && !unk_0x4B8E3E5901E59EB8()) && !func_186())
	{
		if (func_409(uParam0, 26) > 10f)
		{
			func_178(uParam0, 26, 0);
			unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
		}
	}
	else if (func_172(uParam0, 26))
	{
		func_178(uParam0, 26, 0);
	}
	return 0;
}

void func_375(var uParam0)//Position - 0x11FDA
{
	if (!func_395(uParam0->f_1AD))
	{
		uParam0->f_1AD = func_394();
		func_385(&(uParam0->f_1AD), 0, 0, unk_0x491B2241281A03B7(4, 7), 0, 0, 0);
	}
	else if (func_376(uParam0->f_1AD))
	{
		func_332(uParam0, "Player took too long to make pickup", 9);
	}
}

bool func_376(int iParam0)//Position - 0x12027
{
	return func_377(func_394(), iParam0);
}

int func_377(int iParam0, int iParam1)//Position - 0x12039
{
	int iVar0;
	int iVar1;
	
	if (!func_395(iParam1) || !func_395(iParam0))
	{
		return 1;
	}
	iVar0 = func_383(iParam0);
	iVar1 = func_383(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_382(iParam0);
	iVar1 = func_382(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_381(iParam0);
	iVar1 = func_381(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_380(iParam0);
	iVar1 = func_380(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_379(iParam0);
	iVar1 = func_379(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_378(iParam0);
	iVar1 = func_378(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_378(int iParam0)//Position - 0x12145
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_379(int iParam0)//Position - 0x12158
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_380(int iParam0)//Position - 0x1216B
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_381(int iParam0)//Position - 0x1217E
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_382(int iParam0)//Position - 0x12190
{
	return iParam0 & 15;
}

var func_383(int iParam0)//Position - 0x1219D
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_384(unk_0xFA30DFD0084E92FE(iParam0, 31), -1, 1)) + 2011;
}

int func_384(bool bParam0, int iParam1, int iParam2)//Position - 0x121C2
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_385(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x121D9
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_383(*uParam0);
	iVar1 = func_382(*uParam0);
	iVar2 = func_381(*uParam0);
	iVar3 = func_380(*uParam0);
	iVar4 = func_379(*uParam0);
	iVar5 = func_378(*uParam0);
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
	iVar6 = func_393(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_393(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_386(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_386(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1235B
{
	func_392(uParam0, iParam1);
	func_391(uParam0, iParam2);
	func_390(uParam0, iParam3);
	func_389(uParam0, iParam5);
	func_388(uParam0, iParam4);
	func_387(uParam0, iParam6);
}

void func_387(var uParam0, int iParam1)//Position - 0x12393
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

void func_388(var uParam0, int iParam1)//Position - 0x12419
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_382(*uParam0);
	iVar1 = func_383(*uParam0);
	if (iParam1 < 1 || iParam1 > func_393(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_389(var uParam0, int iParam1)//Position - 0x1246A
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_390(var uParam0, int iParam1)//Position - 0x1249D
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_391(var uParam0, int iParam1)//Position - 0x124D7
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_392(var uParam0, int iParam1)//Position - 0x12512
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_393(int iParam0, int iParam1)//Position - 0x1254E
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

int func_394()//Position - 0x125F0
{
	var uVar0;
	
	func_392(&uVar0, unk_0xF40D00CD7B81C0A8());
	func_391(&uVar0, unk_0x7E09057438B9D216());
	func_390(&uVar0, unk_0x6E06C0DB9B43570D());
	func_388(&uVar0, unk_0xBE14F159908E4EE5());
	func_389(&uVar0, unk_0xDD6A91E47ED4D0CF());
	func_387(&uVar0, unk_0x4EEB3860BFC44B78());
	return uVar0;
}

int func_395(int iParam0)//Position - 0x12636
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
	iVar0 = func_378(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_379(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_380(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_383(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_382(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_381(iParam0);
	if (iVar5 < 1 || iVar5 > func_393(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_396(var uParam0)//Position - 0x12712
{
	var uVar0;
	
	if (uParam0->f_19A < 7 && !uParam0->f_8A)
	{
		if (((uParam0->f_19B == 9 && func_398()) && !func_209(uParam0)) || ((uParam0->f_19B != 9 && func_268(uParam0, 1)) && !func_209(uParam0)))
		{
			uVar0 = func_397(uParam0->f_4);
			unk_0x91BCA7FA73FFCDF2(&uVar0);
			uParam0->f_4 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			unk_0x77815D3407C6700D(uParam0->f_4, true, 0);
			func_175(uParam0);
			func_165(uParam0, 0);
		}
	}
}

var func_397(var uParam0)//Position - 0x127A8
{
	return uParam0;
}

int func_398()//Position - 0x127B2
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
					if (unk_0x5E87CB0495C97732(iVar0, func_20()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_399(var uParam0, var uParam1, var uParam2)//Position - 0x12809
{
	switch (*uParam1)
	{
		case 1:
			if (func_400(uParam0, 0, 1))
			{
				func_332(uParam0, "Aggro Aiming", 5);
			}
			break;
		
		case 4:
			if (func_400(uParam0, 0, 4))
			{
				func_332(uParam0, "Aggro Shot Near", 8);
			}
			break;
		
		case 8:
			if (func_400(uParam0, 0, 8))
			{
				func_332(uParam0, "Aggro Heard Shot", 8);
			}
			break;
		
		case 16:
			if (func_400(uParam0, 1, 1))
			{
				func_332(uParam0, "Aggro Attacked", 14);
			}
			break;
		
		case 32:
			if (func_400(uParam0, 0, 1))
			{
				func_332(uParam0, "Aggro Minor Attacked", 8);
			}
			break;
		
		case 2:
			if (!func_23(*uParam2, 2) && func_159(uParam0))
			{
				func_332(uParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}

int func_400(var uParam0, int iParam1, int iParam2)//Position - 0x128E4
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
				func_230(uParam0, 66, 1, 0, 1);
			}
			else
			{
				func_230(uParam0, 65, 1, 0, 1);
			}
		}
	}
	return 0;
}

int func_401(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x12961
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0xBC25C936A095B5BA();
	if (!unk_0x1D403DFADBC2DE3C(iVar0, 0) && !unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		if (!func_23(*uParam2, 1))
		{
			if (func_407(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_23(*uParam2, 2))
		{
			if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_23(*uParam2, 4))
		{
			if (func_405(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_23(*uParam2, 8))
		{
			if (func_404(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_23(*uParam2, 128);
		if (bParam4)
		{
			if (func_402(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_23(*uParam2, 16))
		{
			if (func_402(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
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

int func_402(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x12A8B
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
	if (func_403(unk_0xBC25C936A095B5BA(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x2CDE18D6C89522AD(iParam0) && func_163(iParam0, 1) < 1.5f)
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

int func_403(int iParam0, int iParam1)//Position - 0x12C53
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

int func_404(int iParam0, int iParam1, var uParam2)//Position - 0x12CA8
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

int func_405(int iParam0, int iParam1, var uParam2, bool bParam3)//Position - 0x12CF6
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
			if (unk_0x042228744678C7D4(iParam0) || func_406(iVar1))
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

int func_406(int iParam0)//Position - 0x12E6F
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
						if (func_164(unk_0xBC25C936A095B5BA(), iParam0, 1) < 40f)
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

int func_407(int iParam0, var uParam1)//Position - 0x12F3D
{
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		if (unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 6))
		{
			if (unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), iParam0) || unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), iParam0))
			{
				if (unk_0xC5B8A5F778E321DD(iParam0, unk_0xBC25C936A095B5BA(), 90f))
				{
					if (func_163(iParam0, 1) < uParam1->f_2)
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

void func_408(var uParam0)//Position - 0x12FC2
{
	if (!func_23(uParam0->f_62, 2))
	{
		if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
		{
			if (func_9(uParam0->f_4, uParam0->f_11, 1) < 180f)
			{
				unk_0xEDAD35A0D81ED3FB(uParam0->f_11, 25f, 0, 0, 0, 0, false, 0);
				func_62(&(uParam0->f_62), 2);
			}
		}
	}
}

float func_409(var uParam0, int iParam1)//Position - 0x13019
{
	if (!func_15(&(uParam0->f_92[iParam1 /*3*/])))
	{
		func_208(&(uParam0->f_92[iParam1 /*3*/]));
	}
	return func_100(&(uParam0->f_92[iParam1 /*3*/]));
}

void func_410()//Position - 0x13049
{
	func_411(&Local_231);
	func_428();
}

void func_411(var uParam0)//Position - 0x1305C
{
	func_10(0, uParam0, 1);
	if (uParam0->f_19B != 9)
	{
		func_429(2);
	}
}

int func_412(var uParam0, bool bParam1)//Position - 0x1307B
{
	if (bParam1)
	{
		return 1;
	}
	if ((((!func_186() && func_409(uParam0, 3) > 1f) || uParam0->f_19F == 18) || uParam0->f_19F == 14) || uParam0->f_19F == 15)
	{
		if (!unk_0x1D403DFADBC2DE3C(uParam0->f_3, 0))
		{
			if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
			{
				if (unk_0x62F3A07C43FFB568(uParam0->f_3, uParam0->f_4, 0))
				{
					if (func_61(uParam0) == 0 || func_278(uParam0->f_55, 32))
					{
						if (!unk_0xB66CFDE6B830965A(uParam0->f_4))
						{
							func_147(uParam0, 4160, 0);
						}
						else
						{
							func_147(uParam0, 0, 0);
						}
						return 1;
					}
					else
					{
						func_147(uParam0, 0, 0);
						return 1;
					}
				}
				else
				{
					func_147(uParam0, 0, 0);
					return 1;
				}
			}
			else
			{
				func_147(uParam0, 0, 0);
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

void func_413(var uParam0)//Position - 0x1317A
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

int func_414(var uParam0)//Position - 0x131BB
{
	if (uParam0->f_6D && uParam0->f_19A < 29)
	{
		return 1;
	}
	return 0;
}

void func_415()//Position - 0x131DC
{
	func_417(&Local_231, 1);
	Local_231.f_19A = 0;
	func_416(&Local_231, 2, 4);
	Local_231.f_17 = { 31.3927f, 229.9863f, 108.45f };
	Local_231.f_21 = 340.5f;
	Local_231.f_1A = { -1239.992f, -902.0005f, 10.8342f };
	Local_231.f_22 = 305.2155f;
	Local_231.f_1D = { -1224.093f, -907.3411f, 11.3263f };
}

void func_416(var uParam0, int iParam1, int iParam2)//Position - 0x13252
{
	uParam0->f_3A = iParam1;
	uParam0->f_3B = iParam2;
}

void func_417(var uParam0, int iParam1)//Position - 0x13266
{
	func_427(1);
	func_177();
	func_6(&(uParam0->f_F4));
	func_426(uParam0);
	uParam0->f_19B = iParam1;
	if (!func_23(Global_19B04.f_4A7C, 4))
	{
		func_62(&(Global_19B04.f_4A7C), 4);
	}
	func_421(uParam0);
	func_419(uParam0);
	unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 32, false);
	uParam0->f_66 = (func_418(uParam0->f_19B) % uParam0->f_65);
	uParam0->f_50 = 0;
	uParam0->f_1AC = func_2();
	unk_0x900CF084251DED26("TAXI", 2);
}

int func_418(int iParam0)//Position - 0x132E8
{
	return Global_19B04.f_4A7C.f_27[iParam0];
}

void func_419(var uParam0)//Position - 0x132FD
{
	switch (func_61(uParam0))
	{
		case 0:
			func_420(uParam0, "EXC", "Txm2", "Txm2aud");
			uParam0->f_65 = 2;
			break;
		
		case 1:
			func_420(uParam0, "TIE", "Txm1", "txm1aud");
			uParam0->f_65 = 1;
			break;
		
		case 2:
			func_420(uParam0, "DED", "Txm3", "Txm3aud");
			uParam0->f_65 = 1;
			break;
		
		case 3:
			func_420(uParam0, "GYB", "Txm12", "Txm12au");
			uParam0->f_65 = 2;
			break;
		
		case 4:
			func_420(uParam0, "TTB", "Txm6", "Txm6aud");
			uParam0->f_65 = 2;
			break;
		
		case 5:
			func_420(uParam0, "CUI", "Txm8", "Txm8aud");
			uParam0->f_65 = 1;
			break;
		
		case 6:
			func_420(uParam0, "GYN", "Txm9", "Txm9aud");
			uParam0->f_65 = 1;
			break;
		
		case 7:
			func_420(uParam0, "TCC", "Txm10", "Txm10au");
			uParam0->f_65 = 2;
			break;
		
		case 8:
			func_420(uParam0, "TFC", "Txm4", "Txm4aud");
			uParam0->f_65 = 1;
			break;
		
		case 9:
			func_420(uParam0, "PRO", "txmP", "TxmPaud");
			uParam0->f_65 = 1;
			break;
	}
}

void func_420(var uParam0, char* sParam1, char* sParam2, char* sParam3)//Position - 0x13450
{
	uParam0->f_7A = sParam1;
	uParam0->f_8F = sParam2;
	uParam0->f_90 = sParam3;
}

void func_421(var uParam0)//Position - 0x1346A
{
	int iVar0;
	
	switch (uParam0->f_19B)
	{
		case 0:
			func_425(uParam0, 3);
			func_424(uParam0, 14);
			break;
		
		case 1:
			func_425(uParam0, 14);
			func_424(uParam0, 8);
			break;
		
		case 2:
			func_425(uParam0, 8);
			func_424(uParam0, 7);
			break;
		
		case 3:
			func_425(uParam0, 15);
			func_424(uParam0, 6);
			break;
		
		case 4:
			func_425(uParam0, 0);
			func_424(uParam0, 3);
			break;
		
		case 5:
			func_425(uParam0, 6);
			func_424(uParam0, 7);
			break;
		
		case 6:
			func_425(uParam0, 8);
			func_424(uParam0, 15);
			break;
		
		case 7:
			func_425(uParam0, 8);
			func_424(uParam0, 14);
			break;
		
		case 8:
			func_425(uParam0, 7);
			func_424(uParam0, 15);
			break;
		
		case 9:
			func_425(uParam0, unk_0x491B2241281A03B7(0, 17));
			iVar0 = func_423((uParam0->f_1A2.f_2 + unk_0x491B2241281A03B7(1, 17)), 0, 16);
			func_424(uParam0, iVar0);
			func_422(uParam0);
			uParam0->f_1A2.f_7 = 1;
			uParam0->f_1A2.f_8 = 1;
			break;
	}
}

void func_422(var uParam0)//Position - 0x135A1
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

int func_423(int iParam0, int iParam1, int iParam2)//Position - 0x13662
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

void func_424(var uParam0, int iParam1)//Position - 0x13704
{
	uParam0->f_1A2.f_1 = iParam1;
}

void func_425(var uParam0, int iParam1)//Position - 0x13715
{
	uParam0->f_1A2.f_2 = iParam1;
}

void func_426(var uParam0)//Position - 0x13726
{
	uParam0->f_2 = unk_0xBC25C936A095B5BA();
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_E = { func_42() };
	uParam0->f_11 = { func_42() };
	uParam0->f_23 = 0f;
	uParam0->f_4C = 0;
	uParam0->f_31 = 0;
	uParam0->f_6D = 0;
	uParam0->f_24 = 0f;
	uParam0->f_19A = 2;
	uParam0->f_7B = "TRS_FINDING_LOCATION";
	func_178(uParam0, 32, 0);
}

void func_427(bool bParam0)//Position - 0x13784
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

void func_428()//Position - 0x137B0
{
	if (unk_0xF9E082857622D91E(sLocal_282))
	{
		unk_0x4EA570997E107F35(sLocal_282);
	}
	if (iLocal_261 != 0)
	{
		unk_0x2CA8D9DC16C6AF09(iLocal_261, 0);
		iLocal_261 = 0;
	}
	unk_0xC32C243942383443();
	unk_0x95E4B6F3ED223F5A();
}

void func_429(int iParam0)//Position - 0x137E4
{
	Global_195FA.f_16 = iParam0;
}

