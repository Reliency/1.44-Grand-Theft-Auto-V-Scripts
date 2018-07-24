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
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31[1] = { 0 };
	int iLocal_32[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35[1] = { 0 };
	int iLocal_36[1] = { 0 };
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	var uLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	var uLocal_47[1] = { 0 };
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	struct<8> Local_53[13];
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	var uLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81[2] = { 0, 0 };
	int iLocal_82 = 0;
	int iLocal_83[2] = { 0, 0 };
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90[1] = { 0 };
	int iLocal_91[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_92[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_93[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_94[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101[2] = { 0, 0 };
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	var uLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	vector3 vLocal_118 = { 0f, 0f, 0f };
	vector3 vLocal_119 = { 0f, 0f, 0f };
	vector3 vLocal_120 = { 0f, 0f, 0f };
	vector3 vLocal_121 = { 0f, 0f, 0f };
	float fLocal_122 = 0f;
	char* sLocal_123 = NULL;
	var uLocal_124[4] = { 0, 0, 0, 0 };
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 4;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 4;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 4;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 4;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 4;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 4;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 8;
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
	var uLocal_198 = 16;
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
	var uLocal_363 = 3;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
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
	vLocal_118 = { -2145.486f, 3018.294f, 31.81f };
	vLocal_119 = { 1744.308f, 3270.673f, 40.2076f };
	fLocal_122 = 330.4836f;
	unk_0x25A523E067E06F54(1);
	if (unk_0xE8A79675302ED812(3))
	{
		func_270();
		func_268();
	}
	unk_0x34DAC25A04E24704("EXTRASUNNY", 30f);
	func_266();
	if (!func_265())
	{
		iLocal_28 = 0;
	}
	else
	{
		iLocal_28 = 1;
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		unk_0x2E94C9549322098D("M_ThePortOfLSHeistPrep2B", 0);
		func_264();
		func_258();
		func_257();
		func_256();
		func_254();
		switch (iLocal_28)
		{
			case 0:
				func_253();
				break;
			
			case 1:
				func_248();
				break;
			
			case 2:
				func_230();
				break;
			
			case 3:
				func_222();
				break;
			
			case 4:
				func_126();
				break;
			
			case 5:
				func_28();
				break;
			
			case 6:
				func_4();
				break;
		}
		if (iLocal_28 != 6)
		{
			if (iLocal_76 == 1)
			{
				func_1();
			}
		}
	}
}

void func_1()//Position - 0x149
{
	if ((iLocal_28 == 2 || iLocal_28 == 3) || iLocal_28 == 4)
	{
		if (iLocal_79 == 1)
		{
			func_3(1);
			return;
		}
	}
	if (iLocal_28 == 2)
	{
		if (unk_0x724D816EA203A79E(iLocal_34))
		{
			if (unk_0xE59B7F5A03335350(iLocal_34, 0))
			{
				if (func_2(iLocal_34, unk_0xBC25C936A095B5BA(), 1) > 850f)
				{
					func_3(2);
					return;
				}
			}
		}
	}
	if (iLocal_28 == 3 || iLocal_28 == 4)
	{
		if (unk_0x724D816EA203A79E(iLocal_34))
		{
			if (unk_0xE59B7F5A03335350(iLocal_34, 0))
			{
				if (func_2(iLocal_34, unk_0xBC25C936A095B5BA(), 1) > 100f)
				{
					func_3(2);
					return;
				}
				else if ((unk_0xBCDD4514E5CAE591(iLocal_34, 3, 30000) || unk_0xBCDD4514E5CAE591(iLocal_34, 1, 40000)) || unk_0xBCDD4514E5CAE591(iLocal_34, 0, 7000))
				{
					func_3(3);
					return;
				}
			}
		}
	}
}

float func_2(int iParam0, int iParam1, bool bParam2)//Position - 0x228
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

void func_3(int iParam0)//Position - 0x286
{
	iLocal_29 = iParam0;
	if (iLocal_28 != 6)
	{
		iLocal_28 = 6;
		iLocal_54 = 0;
	}
}

void func_4()//Position - 0x29E
{
	switch (iLocal_54)
	{
		case 0:
			unk_0xEB233A3B7635D2AC();
			unk_0x7456702622C62EA0(1);
			switch (iLocal_29)
			{
				case 0:
					break;
				
				case 1:
					sLocal_123 = "DP_FAIL1";
					break;
				
				case 2:
					sLocal_123 = "DP_FAIL2";
					break;
				
				case 3:
					sLocal_123 = "DP_FAIL3";
					break;
			}
			if (iLocal_29 == 0)
			{
				func_13(0);
			}
			else
			{
				func_11(sLocal_123);
			}
			iLocal_54 = 1;
			break;
		
		case 1:
			if (func_10())
			{
				if (func_9())
				{
				}
				else
				{
					func_7(-1139.164f, 2662.465f, 16.9873f, 74.9925f);
					func_5(-1147.504f, 2663.104f, 17.0938f, 40.2433f);
				}
				func_268();
			}
			break;
	}
}

void func_5(vector3 vParam0, float fParam1)//Position - 0x362
{
	func_6(&(Global_181DF.f_B3B), vParam0, fParam1);
}

void func_6(var uParam0, vector3 vParam1, var uParam2)//Position - 0x37B
{
	*uParam0 = { vParam1 };
	uParam0->f_6 = uParam2;
}

void func_7(vector3 vParam0, float fParam1)//Position - 0x391
{
	if (func_8(Global_11632, 0f, 0f, 0f, 0))
	{
		Global_11632 = { vParam0 };
		Global_11635 = fParam1;
	}
}

bool func_8(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x3BD
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_9()//Position - 0x404
{
	if (Global_16B1B == 7)
	{
		return 1;
	}
	return 0;
}

int func_10()//Position - 0x419
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

void func_11(char* sParam0)//Position - 0x446
{
	func_12(sParam0);
	func_13(0);
}

void func_12(char* sParam0)//Position - 0x459
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

void func_13(int iParam0)//Position - 0x498
{
	int iVar0;
	
	if (Global_19B04.f_2360 || func_27(0))
	{
		iVar0 = func_26();
		if (!func_14(iVar0))
		{
			return;
		}
		unk_0xF0059F27F7BB6680(&(Global_1478C[iVar0 /*5*/].f_1), 5);
		Global_16B3F = iParam0;
	}
}

int func_14(int iParam0)//Position - 0x4DD
{
	int iVar0;
	int iVar1;
	
	func_19();
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		unk_0x31E433A1F2A666D9(5000);
	}
	iVar0 = Global_1478C[iParam0 /*5*/];
	iVar1 = Global_1164F.f_6D[iVar0 /*4*/];
	func_18(iVar1, 1);
	unk_0xD0D466F17C0F30DB(unk_0xB5CEFD608600A09F());
	unk_0xD50A43D7C495F078(unk_0xB5CEFD608600A09F());
	func_15(&(Global_19B04.f_932.f_21B), iVar1);
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

void func_15(var uParam0, int iParam1)//Position - 0x5F4
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
			if (!func_17(Global_19B04.f_4848[iVar0], &vVar2, &fVar3))
			{
				Global_19B04.f_4848[iVar0] = 318;
				func_16(&(uParam0->f_8E4[iVar0]));
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

void func_16(var uParam0)//Position - 0x7BD
{
	*uParam0 = -15;
}

int func_17(int iParam0, var uParam1, float fParam2)//Position - 0x7CB
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
			return func_17(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_17(8, uParam1, fParam2);
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

void func_18(int iParam0, bool bParam1)//Position - 0x113A
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

void func_19()//Position - 0x1178
{
	Global_16B3E = 1;
	if (unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1))
	{
		if (unk_0xF1734B55490E9045(&Global_1162A))
		{
			switch (func_20())
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
			switch (func_20())
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

int func_20()//Position - 0x125F
{
	func_21();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_21()//Position - 0x1278
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_25(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_24(unk_0xBC25C936A095B5BA());
			if (func_23(iVar0) && (!func_22(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_23(Global_19B04.f_932.f_21B.f_10CD))
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

bool func_22(int iParam0)//Position - 0x1375
{
	return Global_8C41 == iParam0;
}

bool func_23(int iParam0)//Position - 0x1383
{
	return iParam0 < 3;
}

int func_24(int iParam0)//Position - 0x138F
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_25(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_25(int iParam0)//Position - 0x13CC
{
	if (func_23(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_26()//Position - 0x13F6
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

bool func_27(bool bParam0)//Position - 0x142B
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_1163A, 0);
}

void func_28()//Position - 0x1456
{
	func_118();
	if (iLocal_54 == 0)
	{
		if (iLocal_75 == 1)
		{
			iLocal_76 = 0;
			func_33();
			iLocal_75 = 0;
		}
		if (unk_0x724D816EA203A79E(iLocal_34))
		{
			unk_0x346478B12F69D4E3(iLocal_34, false);
		}
		if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			unk_0x69194304DB679A9C(unk_0xBC25C936A095B5BA(), 0, -1, 0);
		}
		if (unk_0x17FAADF9916EF741())
		{
			unk_0x8B6B50EADA01F251(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true));
		}
		if (!unk_0x726D9204B160D23E())
		{
			unk_0x829FA4611BD56B44(800);
		}
		unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 0);
		if (unk_0x724D816EA203A79E(iLocal_34))
		{
			if (unk_0xE59B7F5A03335350(iLocal_34, 0))
			{
				if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_34, 0))
				{
					unk_0x932E201A82D2EDB8(unk_0xBC25C936A095B5BA(), iLocal_34, 0);
				}
			}
		}
		iLocal_76 = 1;
		iLocal_54 = 1;
	}
	if (iLocal_54 == 1)
	{
		if (unk_0x724D816EA203A79E(iLocal_34))
		{
			if (unk_0xE59B7F5A03335350(iLocal_34, 0))
			{
				if (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_34, 1))
				{
					unk_0x82948B11F55E5713(iLocal_34, 0, 0);
					unk_0x82948B11F55E5713(iLocal_34, 1, 0);
					unk_0xD421BC740C5340C3(iLocal_34, 2);
					unk_0x8300C56586249382(iLocal_34, 0);
					unk_0x346478B12F69D4E3(iLocal_34, true);
					func_29();
				}
			}
		}
	}
}

void func_29()//Position - 0x154F
{
	func_31(0, 0);
	func_30(1, 1);
	func_268();
}

void func_30(int iParam0, int iParam1)//Position - 0x1567
{
	Global_1164E = iParam1;
	if (Global_DA99)
	{
		return;
	}
	if (Global_DAB4)
	{
		Global_DAB4 = 0;
		return;
	}
	if (unk_0xB731B8C5BCE89836(joaat("mission_stat_watcher")) > 0)
	{
		if (Global_DA99)
		{
		}
		Global_DAB3 = iParam0;
		Global_DA99 = 1;
		Global_DAA4 = 1;
	}
}

void func_31(bool bParam0, int iParam1)//Position - 0x15B1
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
		if ((func_27(0) && Global_11638.f_1 == 1) && func_32(Global_11638))
		{
		}
		else
		{
			Global_DA9F = 1;
		}
	}
	if (Global_19B04.f_2360 || func_27(0))
	{
		iVar0 = func_26();
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

int func_32(int iParam0)//Position - 0x1687
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

void func_33()//Position - 0x16C5
{
	func_116();
	func_115();
	func_36();
	if (!func_35() || func_27(0))
	{
		func_34();
	}
	unk_0xF3F01A78937DC905(0f);
}

void func_34()//Position - 0x16F5
{
	switch (iLocal_28)
	{
		case 2:
			unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
			if (unk_0x724D816EA203A79E(iLocal_39))
			{
				if (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_39, 0))
				{
					unk_0xBD53A029D0155A42(unk_0xBC25C936A095B5BA(), iLocal_39, -1);
				}
			}
			else
			{
				unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), -1565.084f, 2780.813f, 16.4022f, 1, 0, 0, 1);
				unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), 53.6086f);
			}
			break;
		
		case 3:
			unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
			if (func_20() == 2)
			{
				if (unk_0x724D816EA203A79E(iLocal_34))
				{
					if (unk_0xE59B7F5A03335350(iLocal_34, 0))
					{
						if (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_34, 0))
						{
							unk_0xBD53A029D0155A42(unk_0xBC25C936A095B5BA(), iLocal_34, -1);
						}
						unk_0x346478B12F69D4E3(iLocal_34, false);
					}
				}
			}
			break;
		
		case 4:
			unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
			if (func_20() == 2)
			{
				if (unk_0x724D816EA203A79E(iLocal_34))
				{
					if (unk_0xE59B7F5A03335350(iLocal_34, 0))
					{
						if (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_34, 0))
						{
							unk_0xBD53A029D0155A42(unk_0xBC25C936A095B5BA(), iLocal_34, -1);
						}
					}
				}
			}
			break;
		
		case 5:
			unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
			if (func_20() == 2)
			{
				if (unk_0x724D816EA203A79E(iLocal_34))
				{
					if (unk_0xE59B7F5A03335350(iLocal_34, 0))
					{
						if (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_34, 0))
						{
							unk_0xBD53A029D0155A42(unk_0xBC25C936A095B5BA(), iLocal_34, -1);
						}
					}
				}
			}
			break;
	}
}

bool func_35()//Position - 0x183C
{
	return unk_0xFA30DFD0084E92FE(Global_16B1B.f_14, 13);
}

void func_36()//Position - 0x1850
{
	switch (iLocal_28)
	{
		case 2:
			unk_0x6C5F5B5F6894CCE3(-1588.1f, 2794.9f, 17.2f, 20f, 1, 0, 0, false);
			func_108(-1720.5f, 2568.4f, 67.1f, -1523.2f, 3002f, -70f, 100f, -1155.06f, 2665.979f, 17.0939f, 219.2079f, 1, 0, 1, 0, 0);
			unk_0x4516EDD0A096FB5B(-1588.1f, 2794.9f, 17.2f, 20f, 6);
			unk_0xF243B7A14FCFD0F4(joaat("cargobob"));
			unk_0xF243B7A14FCFD0F4(joaat("s_m_y_marine_01"));
			unk_0xF243B7A14FCFD0F4(joaat("s_m_m_pilot_02"));
			unk_0xF243B7A14FCFD0F4(joaat("buzzard"));
			while (((!unk_0xD6513D668481290A(joaat("cargobob")) || !unk_0xD6513D668481290A(joaat("s_m_y_marine_01"))) || !unk_0xD6513D668481290A(joaat("s_m_m_pilot_02"))) || !unk_0xD6513D668481290A(joaat("buzzard")))
			{
				SYSTEM::WAIT(0);
			}
			if (func_265())
			{
				if (func_107())
				{
					if (!unk_0x8C1A6E7D5F410F4A(func_106()) && !unk_0xA19D269B4B5A1532(func_106()))
					{
						func_104();
						while (!func_103())
						{
							SYSTEM::WAIT(0);
						}
					}
				}
			}
			iLocal_80 = 0;
			iLocal_55 = 0;
			while (iLocal_55 <= 12)
			{
				iLocal_97[iLocal_55] = 0;
				iLocal_55++;
			}
			if (!unk_0x724D816EA203A79E(iLocal_34))
			{
				unk_0x6C5F5B5F6894CCE3(vLocal_118, 10f, 1, 0, 0, false);
				iLocal_34 = unk_0x61C05BF08A1E0EFE(joaat("cargobob"), vLocal_118, fLocal_122, 1, 1, 0);
				unk_0xE4F4552195F606F3(iLocal_34, 0);
				unk_0x346478B12F69D4E3(iLocal_34, true);
				unk_0xB71D41C0310C93DE(iLocal_34, 1, 1);
				unk_0x2CA123B0622F495C(joaat("cargobob"));
				unk_0x8510BC031C24B862(joaat("cargobob"), 1);
				unk_0xDB35A2F9333ABEC5(iLocal_34, 1);
				unk_0xDDBD8CD1389FC0B5(iLocal_34, 0);
				func_102(iLocal_34, 0);
			}
			func_99();
			if (!unk_0x724D816EA203A79E(iLocal_35[0]))
			{
				if (unk_0xD6513D668481290A(joaat("buzzard")))
				{
					unk_0x6C5F5B5F6894CCE3(-1866.446f, 3071.395f, 31.8104f, 10f, 1, 0, 0, false);
					iLocal_35[0] = unk_0x61C05BF08A1E0EFE(joaat("buzzard"), -1866.446f, 3071.395f, 31.8104f, 150.2863f, 1, 1, 0);
					unk_0xB71D41C0310C93DE(iLocal_35[0], 1, 1);
					unk_0xE4F4552195F606F3(iLocal_35[0], 1);
					unk_0xF0A40F19AAB79E88(iLocal_35[0], 1084227584);
					unk_0x55662F9F262C2F9B(iLocal_35[0], "DH_P_2B_ENEMY_CHOPPERS", 0);
					unk_0x2CA123B0622F495C(joaat("buzzard"));
					unk_0x8300C56586249382(iLocal_35[0], 0);
				}
			}
			if (func_265())
			{
				if (!unk_0x724D816EA203A79E(iLocal_39))
				{
					if (func_107())
					{
						if (!unk_0x8C1A6E7D5F410F4A(func_106()) && !unk_0xA19D269B4B5A1532(func_106()))
						{
							iLocal_39 = func_37(-1535.209f, 2744.551f, 16.6437f, 47.9754f);
							unk_0x2CA123B0622F495C(func_106());
							unk_0xA73D1278857991A2(iLocal_39, true);
							unk_0xDB35A2F9333ABEC5(iLocal_39, 1);
						}
					}
				}
			}
			unk_0x8E25082A46F87892(unk_0xBC25C936A095B5BA(), joaat("weapon_unarmed"), true);
			unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 0, 0);
			unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
			unk_0x9332FDC92BD28643(1);
			break;
		
		case 3:
			unk_0x2625AE158F7FFBAD("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS");
			SYSTEM::WAIT(1500);
			unk_0xF243B7A14FCFD0F4(joaat("cargobob"));
			unk_0xF243B7A14FCFD0F4(joaat("buzzard"));
			unk_0xF243B7A14FCFD0F4(joaat("s_m_y_marine_01"));
			unk_0xF243B7A14FCFD0F4(joaat("s_m_m_pilot_02"));
			while (((!unk_0xD6513D668481290A(joaat("cargobob")) || !unk_0xD6513D668481290A(joaat("buzzard"))) || !unk_0xD6513D668481290A(joaat("s_m_y_marine_01"))) || !unk_0xD6513D668481290A(joaat("s_m_m_pilot_02")))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_80 = 0;
			iLocal_55 = 0;
			while (iLocal_55 <= 12)
			{
				iLocal_97[iLocal_55] = 0;
				iLocal_55++;
			}
			if (!unk_0x724D816EA203A79E(iLocal_34))
			{
				unk_0x6C5F5B5F6894CCE3(vLocal_118, 10f, 1, 0, 0, false);
				iLocal_34 = unk_0x61C05BF08A1E0EFE(joaat("cargobob"), vLocal_118, fLocal_122, 1, 1, 0);
				unk_0x346478B12F69D4E3(iLocal_34, true);
				unk_0xB71D41C0310C93DE(iLocal_34, 1, 1);
				unk_0x251A179731E0D207(iLocal_34);
				unk_0x2CA123B0622F495C(joaat("cargobob"));
				unk_0x8510BC031C24B862(joaat("cargobob"), 1);
				unk_0xDB35A2F9333ABEC5(iLocal_34, 1);
				unk_0xDDBD8CD1389FC0B5(iLocal_34, 0);
				func_102(iLocal_34, 0);
			}
			func_99();
			if (!unk_0x724D816EA203A79E(iLocal_35[0]))
			{
				if (unk_0xD6513D668481290A(joaat("buzzard")))
				{
					unk_0x6C5F5B5F6894CCE3(-1866.446f, 3071.395f, 31.8104f, 10f, 1, 0, 0, false);
					iLocal_35[0] = unk_0x61C05BF08A1E0EFE(joaat("buzzard"), -1866.446f, 3071.395f, 31.8104f, 150.2863f, 1, 1, 0);
					unk_0xB71D41C0310C93DE(iLocal_35[0], 1, 1);
					unk_0xE4F4552195F606F3(iLocal_35[0], 1);
					unk_0xF0A40F19AAB79E88(iLocal_35[0], 1084227584);
					unk_0x55662F9F262C2F9B(iLocal_35[0], "DH_P_2B_ENEMY_CHOPPERS", 0);
					unk_0x2CA123B0622F495C(joaat("buzzard"));
					unk_0x8300C56586249382(iLocal_35[0], 0);
				}
			}
			if (!unk_0x724D816EA203A79E(iLocal_31[0]))
			{
				iLocal_31[0] = unk_0xFD8987C090669BD5(iLocal_35[0], 26, joaat("s_m_m_pilot_02"), -1, 1, true);
				unk_0x2CA123B0622F495C(joaat("s_m_m_pilot_02"));
			}
			else if (!unk_0x62F3A07C43FFB568(iLocal_31[0], iLocal_35[0], 0))
			{
				unk_0xBD53A029D0155A42(iLocal_31[0], iLocal_35[0], -1);
			}
			unk_0x7A535CE1F001F3FE(unk_0xBC25C936A095B5BA(), joaat("gadget_parachute"), -1, false, true);
			unk_0xA1D24DCCB6F72A84("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", true);
			unk_0x5C083DB6ACC5827F("AZ_AFB_ALARM_SPEECH", 1, 1);
			break;
		
		case 4:
			unk_0xF243B7A14FCFD0F4(joaat("cargobob"));
			unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 0, 0);
			unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
			while (!unk_0xD6513D668481290A(joaat("cargobob")))
			{
				SYSTEM::WAIT(0);
			}
			if (!unk_0x724D816EA203A79E(iLocal_34))
			{
				unk_0x6C5F5B5F6894CCE3(vLocal_118, 10f, 1, 0, 0, false);
				iLocal_34 = unk_0x61C05BF08A1E0EFE(joaat("cargobob"), -629.1677f, 2871.31f, 385.0313f, 283.1214f, 1, 1, 0);
				unk_0xB71D41C0310C93DE(iLocal_34, 1, 1);
				unk_0x2CA123B0622F495C(joaat("cargobob"));
				unk_0x8510BC031C24B862(joaat("cargobob"), 1);
				unk_0xDDBD8CD1389FC0B5(iLocal_34, 0);
				unk_0xDB35A2F9333ABEC5(iLocal_34, 1);
				unk_0x2D655AA68FA1736B(iLocal_34, true, 1, 0);
				unk_0x251A179731E0D207(iLocal_34);
				unk_0xA4DFFFD5B234240D(iLocal_34, 30f);
				func_102(iLocal_34, 0);
			}
			unk_0x7A535CE1F001F3FE(unk_0xBC25C936A095B5BA(), joaat("gadget_parachute"), -1, false, true);
			break;
		
		case 5:
			unk_0xF243B7A14FCFD0F4(joaat("cargobob"));
			unk_0xF243B7A14FCFD0F4(joaat("sandking"));
			while (!unk_0xD6513D668481290A(joaat("cargobob")) || !unk_0xD6513D668481290A(joaat("sandking")))
			{
				SYSTEM::WAIT(0);
			}
			if (!unk_0x724D816EA203A79E(iLocal_34))
			{
				unk_0x6C5F5B5F6894CCE3(1749.61f, 3272.95f, 40.1533f, 5f, 1, 0, 0, false);
				iLocal_34 = unk_0x61C05BF08A1E0EFE(joaat("cargobob"), 1749.61f, 3272.95f, 40.1533f, 51.128f, 1, 1, 0);
				unk_0xB71D41C0310C93DE(iLocal_34, 1, 1);
				unk_0x2CA123B0622F495C(joaat("cargobob"));
				unk_0xDB35A2F9333ABEC5(iLocal_34, 1);
				unk_0xDDBD8CD1389FC0B5(iLocal_34, 0);
				func_102(iLocal_34, 0);
			}
			if (!unk_0x724D816EA203A79E(iLocal_36[0]))
			{
				iLocal_36[0] = unk_0x61C05BF08A1E0EFE(joaat("sandking"), 1754.951f, 3290.994f, 40.1176f, 182.397f, 1, 1, 0);
				unk_0x346478B12F69D4E3(iLocal_36[0], true);
				unk_0x2CA123B0622F495C(joaat("sandking"));
			}
			if (unk_0x724D816EA203A79E(iLocal_36[0]))
			{
				iLocal_89 = 1;
			}
			break;
	}
}

int func_37(vector3 vParam0, float fParam1)//Position - 0x1F2E
{
	return func_38(&(Global_181DF.f_B3B), vParam0, fParam1, 0);
}

int func_38(var uParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0x1F48
{
	int iVar0;
	vector3 vVar1;
	bool bVar2;
	var uVar3;
	int iVar4;
	
	if (func_98(uParam0))
	{
		if (func_8(vParam1, 0f, 0f, 0f, 0))
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
		if (func_97(uParam0))
		{
			unk_0x6C5F5B5F6894CCE3(vParam1, 5f, 1, 0, 0, false);
			func_96(vParam1, 5f, 0);
			iVar0 = unk_0x61C05BF08A1E0EFE(uParam0->f_C.f_42, vParam1, fParam2, 1, 1, 0);
			if (unk_0x724D816EA203A79E(iVar0))
			{
				vVar1 = { unk_0x541C2AEF053615BC(iVar0, true) };
				if (SYSTEM::VDIST2(vVar1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					unk_0xD5874E4A4BF782FC(iVar0, vParam1, 0, 0, 1);
				}
				func_79(iVar0, &(uParam0->f_C), 0, 1);
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
							func_78(uParam0->f_B, 1);
						}
						else if (unk_0x7512ED01F3F46714(unk_0x6F79ECA8C83E4357(iVar0)))
						{
							func_78(uParam0->f_B, 2);
						}
					}
					unk_0x551DF575AE9A2969(iVar0, 0);
					unk_0x2487C8A04B65E2BD(iVar0, 0);
					unk_0xA73D1278857991A2(iVar0, true);
					func_77(iVar0, uParam0->f_B);
				}
				else if ((!func_74(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_A) && unk_0x3362CDE8460ED38B(unk_0x1377080E9B0BD993(), "startup_positioning"))
				{
					iVar4 = func_73(iVar0);
					if (iVar4 == -1)
					{
						uParam0->f_A = 0;
					}
					else
					{
						func_66(iVar4);
					}
				}
				if (((Global_16B1B != 13 && Global_16B1B != 10) && Global_16B1B != 11) && Global_16B1B != 12)
				{
					if (unk_0x56BEECB328B6D29D(&(Global_16B1B.f_3)) == Global_11484)
					{
						if (uParam0->f_C.f_42 == Global_19B04.f_7F22.f_45[21 /*78*/].f_42)
						{
							func_63(24, 0);
							func_66(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_39(iVar0, uParam0->f_B);
				}
				unk_0x2CA123B0622F495C(uParam0->f_C.f_42);
				vVar1 = { unk_0x541C2AEF053615BC(iVar0, true) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_39(int iParam0, int iParam1)//Position - 0x21F9
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_45(iParam0))
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
	func_40(iParam0, &(Global_19B04.f_7F22.f_1586));
}

void func_40(int iParam0, var uParam1)//Position - 0x23FB
{
	int iVar0;
	
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		func_44(uParam1);
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
		if (uParam1->f_41 == -1 && !func_43(uParam1->f_42))
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
		func_42(&iParam0, &(uParam1->f_9), &(uParam1->f_3B));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xFC8A228C62614C5C(iParam0, iVar0 + 1))
			{
				unk_0xF0059F27F7BB6680(&(uParam1->f_4D), func_41(iVar0 + 1));
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

int func_41(int iParam0)//Position - 0x26A4
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

int func_42(int iParam0, var uParam1, var uParam2)//Position - 0x2754
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

int func_43(int iParam0)//Position - 0x282E
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

void func_44(var uParam0)//Position - 0x284E
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

int func_45(int iParam0)//Position - 0x28FE
{
	if ((((((((((!unk_0x724D816EA203A79E(iParam0) || !unk_0xE59B7F5A03335350(iParam0, 0)) || func_61(iParam0, 0, 0)) || func_61(iParam0, 1, 0)) || func_61(iParam0, 2, 0)) || func_60(iParam0) != 145) || func_59(iParam0)) || func_58(iParam0)) || func_57(iParam0)) || func_56(iParam0)) || !func_46(unk_0x6F79ECA8C83E4357(iParam0)))
	{
		if (func_58(iParam0))
		{
		}
		if (func_58(iParam0))
		{
		}
		if (func_61(iParam0, 0, 0))
		{
		}
		if (func_61(iParam0, 1, 0))
		{
		}
		if (func_61(iParam0, 2, 0))
		{
		}
		if (func_60(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_46(int iParam0)//Position - 0x29DB
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_47(iParam0, 0))
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

int func_47(int iParam0, bool bParam1)//Position - 0x2B8C
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
		if (!func_55())
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
		if ((((!func_54() && !func_53()) && !func_52()) && !func_51()) && !func_55())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xF49912B78E2591B6() || unk_0x8ACB0C3FACC09467()) || unk_0xF7E138CFA19B55E7())
		{
		}
		else if (!func_52())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_50(iParam0))
		{
			return 0;
		}
	}
	if (!func_48(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_48(int iParam0)//Position - 0x2D1A
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_49())
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

int func_49()//Position - 0x2DE5
{
	if (unk_0x8ACB0C3FACC09467())
	{
		return unk_0xC9D803F7D7E10861();
	}
	return 0;
}

int func_50(int iParam0)//Position - 0x2DFC
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

int func_51()//Position - 0x48A6
{
	return 0;
}

int func_52()//Position - 0x48AF
{
	return 1;
}

int func_53()//Position - 0x48B8
{
	return 1;
}

int func_54()//Position - 0x48C1
{
	if (unk_0x7B2F21BFE86AEB61(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_55()//Position - 0x48DA
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

int func_56(int iParam0)//Position - 0x4995
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x6F79ECA8C83E4357(iParam0);
	sVar1 = unk_0x2232934AD664DD49(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x3362CDE8460ED38B(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_47(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_57(int iParam0)//Position - 0x49DB
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

int func_58(int iParam0)//Position - 0x4A16
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

int func_59(int iParam0)//Position - 0x4A92
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

int func_60(int iParam0)//Position - 0x4B7A
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

int func_61(int iParam0, int iParam1, bool bParam2)//Position - 0x4BDD
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0x724D816EA203A79E(iParam0) || !unk_0xE59B7F5A03335350(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_62(iParam1, iVar0, &sVar1, &iVar2))
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

int func_62(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x4C4E
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

void func_63(int iParam0, bool bParam1)//Position - 0x4D26
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_65(iParam0, 0))
		{
			func_64(iParam0, 1, 0);
			func_64(iParam0, 2, 0);
			func_64(iParam0, 3, 0);
			func_64(iParam0, 4, 0);
			func_64(iParam0, 0, 1);
			Global_110A8[iParam0] = 1;
		}
	}
	else
	{
		func_64(iParam0, 0, 0);
	}
}

void func_64(int iParam0, int iParam1, bool bParam2)//Position - 0x4D83
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

bool func_65(int iParam0, int iParam1)//Position - 0x4DBE
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_19B04.f_7F22[iParam0], iParam1);
}

void func_66(int iParam0)//Position - 0x4DE1
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_70(&(Global_110A8.f_22B[0 /*21*/]), iParam0))
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
			if (((((iParam0 == 24 && func_65(iParam0, 0)) && Global_11435.f_42 == 0) && Global_19B04.f_7F22.f_7A6[Global_110A8.f_22B[0 /*21*/].f_E] != 0) && Global_19B04.f_7F22.f_7A6[Global_110A8.f_22B[0 /*21*/].f_E] > 3) && (!func_68(0, Global_110A8.f_22B[0 /*21*/].f_C) || !func_68(1, Global_110A8.f_22B[0 /*21*/].f_C)))
			{
				func_67(&(Global_19B04.f_7F22.f_45[Global_110A8.f_22B[0 /*21*/].f_E /*78*/]), &Global_11435);
				Global_11483 = Global_19B04.f_7F22.f_15D7;
			}
			func_63(iParam0, 0);
		}
	}
}

void func_67(var uParam0, var uParam1)//Position - 0x4F53
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

int func_68(int iParam0, int iParam1)//Position - 0x501F
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
	if (iParam0 < 0 || iParam0 >= func_69(&(Global_19B04.f_7F22.f_13AE[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_47(Global_19B04.f_7F22.f_13AE[iVar0 /*157*/][iParam0 /*78*/].f_42, 0);
}

int func_69(var uParam0)//Position - 0x5091
{
	return *uParam0;
}

int func_70(var uParam0, int iParam1)//Position - 0x509C
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
			uParam0->f_4 = func_71(0, 1);
			uParam0->f_C = 0;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_71(0, 1);
			uParam0->f_C = 0;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_71(1, 1);
			uParam0->f_C = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_71(1, 2);
			uParam0->f_C = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 19);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_71(1, 1);
			uParam0->f_C = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_71(1, 2);
			uParam0->f_C = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 19);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_71(2, 1);
			uParam0->f_C = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_71(2, 1);
			uParam0->f_C = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_71(2, 1);
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
			if (func_55())
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
			if (func_55())
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
		if (!func_8(Global_19B04.f_7F22.f_748[uParam0->f_E /*3*/], 0f, 0f, 0f, 0))
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
		if (!func_8(Global_19B04.f_932.f_21B.f_DF0[1 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_19B04.f_932.f_21B.f_DF0[1 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_19B04.f_932.f_21B.f_E05[1 /*4*/][uParam0->f_C];
		}
	}
	else if (unk_0xFA30DFD0084E92FE(uParam0->f_9, 20))
	{
		if (!func_8(Global_19B04.f_932.f_21B.f_DF0[0 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_19B04.f_932.f_21B.f_DF0[0 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_19B04.f_932.f_21B.f_E05[0 /*4*/][uParam0->f_C];
		}
	}
	return iVar0;
}

int func_71(int iParam0, int iParam1)//Position - 0x6793
{
	struct<82> Var0;
	
	if (func_23(iParam0))
	{
		Var0.f_B = 12;
		Var0.f_1F = 49;
		Var0.f_51 = 2;
		func_72(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_72(int iParam0, var uParam1, int iParam2)//Position - 0x67D5
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

int func_73(int iParam0)//Position - 0x6A31
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

int func_74(int iParam0, vector3 vParam1, bool bParam2)//Position - 0x6AF4
{
	int iVar0;
	var uVar1[3];
	int iVar2;
	int iVar3;
	
	iVar0 = unk_0x6F79ECA8C83E4357(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_76(iParam0, Global_110A8.f_8B[38], 0))
			{
				func_66(38);
				return 1;
			}
			break;
		
		case 1938952078:
			if (func_76(iParam0, Global_110A8.f_8B[43], 1))
			{
				func_66(43);
				return 1;
			}
			break;
		
		case joaat("cuban800"):
			iVar2 = unk_0xD7F48BFEBC0E3FB2(unk_0xBC25C936A095B5BA(), &uVar1);
			iVar3 = 0;
			while (iVar3 <= (iVar2 - 1))
			{
				if (func_76(iParam0, uVar1[iVar3], 1) && func_75(unk_0x541C2AEF053615BC(uVar1[iVar3], true), 2136.133f, 4780.563f, 39.9702f, 5f, 0))
				{
					if ((!bParam2 || func_8(vParam1, 0f, 0f, 0f, 0)) || unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(iParam0, true), unk_0x541C2AEF053615BC(uVar1[iVar3], true), true) < 10f)
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
					func_66(14);
					return 1;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((unk_0x724D816EA203A79E(Global_110A8.f_1E4[20]) && unk_0xE59B7F5A03335350(iParam0, 0)) && unk_0xE59B7F5A03335350(Global_110A8.f_1E4[20], 0))
			{
				if (unk_0x6F79ECA8C83E4357(Global_110A8.f_1E4[20]) == joaat("swift2") && unk_0x0FF608FD384AF8FA(iParam0) == unk_0x0FF608FD384AF8FA(Global_110A8.f_1E4[20]))
				{
					func_66(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_75(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0x6CFC
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

int func_76(int iParam0, int iParam1, bool bParam2)//Position - 0x6D77
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

void func_77(int iParam0, int iParam1)//Position - 0x6DD8
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

void func_78(int iParam0, int iParam1)//Position - 0x6E5A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x724D816EA203A79E(Global_1613F[iVar0]))
		{
			if (iParam0 == 145 || Global_16149[iVar0] == iParam0)
			{
				if (iParam1 == 0 || unk_0x6F79ECA8C83E4357(Global_1613F[iVar0]) == func_71(iParam0, iParam1))
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

void func_79(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x6EF8
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		if (!func_88(iParam0))
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
			if (unk_0xFA30DFD0084E92FE(uParam1->f_4D, func_41(iVar0 + 1)))
			{
			}
			else
			{
				unk_0xF0059F27F7BB6680(&(uParam1->f_4D), func_41(iVar0 + 1));
			}
		}
		else if (uParam1->f_42 == joaat("sandking") || uParam1->f_42 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (unk_0xFA30DFD0084E92FE(uParam1->f_4D, func_41(iVar1 + 1)))
			{
			}
			else
			{
				unk_0xF0059F27F7BB6680(&(uParam1->f_4D), func_41(iVar1 + 1));
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
		if (((unk_0xFA30DFD0084E92FE(uParam1->f_4D, 15) || func_87(iParam0)) || (((uParam1->f_3E == 0 && uParam1->f_3F == 0) && uParam1->f_40 == 0) && uParam1->f_9[20] > 0)) && func_86())
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
		if (uParam1->f_41 == -1 && !func_43(uParam1->f_42))
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
						func_85(iParam0, uParam1->f_45);
					}
				}
				else
				{
					func_85(iParam0, uParam1->f_45);
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
			func_80(&iParam0, &(uParam1->f_9), &(uParam1->f_3B));
		}
		if (!unk_0x8C1A6E7D5F410F4A(uParam1->f_42) && !unk_0xE7B3A320107C1379(uParam1->f_42))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (unk_0xFA30DFD0084E92FE(uParam1->f_4D, func_41(iVar2 + 1)))
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

int func_80(int iParam0, var uParam1, var uParam2)//Position - 0x7446
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
	if (func_84(unk_0x6F79ECA8C83E4357(*iParam0), 1) && unk_0x3EB14CBD49DA0017(*iParam0, 24) != func_83(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0x5C9F67BE33A5A3EE(*iParam0, 24, func_83(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_82(iParam0);
	if (func_81(*iParam0))
	{
		unk_0xDB35A2F9333ABEC5(*iParam0, 1);
		unk_0xA73D1278857991A2(*iParam0, true);
	}
	return 1;
}

int func_81(int iParam0)//Position - 0x75C4
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

void func_82(var uParam0)//Position - 0x76A0
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

int func_83(int iParam0, int iParam1)//Position - 0x76E0
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

int func_84(int iParam0, int iParam1)//Position - 0x77C5
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

void func_85(int iParam0, int iParam1)//Position - 0x7A38
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

bool func_86()//Position - 0x7A9D
{
	return unk_0x7B2F21BFE86AEB61(-1691188696);
}

int func_87(int iParam0)//Position - 0x7AAE
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

int func_88(int iParam0)//Position - 0x7AF9
{
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		if (!func_94(unk_0xB5CEFD608600A09F(), -1))
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
	if (func_90(unk_0xB5CEFD608600A09F()) == 3)
	{
		if (unk_0x724D816EA203A79E(iParam0) && unk_0xE59B7F5A03335350(iParam0, 0))
		{
			if (func_89(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_89(int iParam0)//Position - 0x7B80
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

int func_90(int iParam0)//Position - 0x7BAF
{
	if (func_93(iParam0) == 233)
	{
		return func_91(iParam0);
	}
	return -1;
}

int func_91(int iParam0)//Position - 0x7BCC
{
	if (func_92(iParam0, 0))
	{
		return Global_18C80F[iParam0 /*558*/].f_B.f_B0;
	}
	return -1;
}

int func_92(int iParam0, int iParam1)//Position - 0x7BEF
{
	if (Global_18C80F[iParam0 /*558*/].f_B.f_21 != -1 || (iParam1 && Global_18C80F[iParam0 /*558*/].f_B.f_20 != -1))
	{
		return 1;
	}
	return 0;
}

int func_93(int iParam0)//Position - 0x7C2A
{
	if (func_92(iParam0, 0))
	{
		return Global_18C80F[iParam0 /*558*/].f_B.f_21;
	}
	return -1;
}

int func_94(int iParam0, int iParam1)//Position - 0x7C4D
{
	int iVar0;
	
	if (func_95(iParam0, 1, 1))
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

int func_95(int iParam0, bool bParam1, bool bParam2)//Position - 0x7C9A
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

void func_96(vector3 vParam0, float fParam1, bool bParam2)//Position - 0x7CE4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_70(&(Global_110A8.f_22B[0 /*21*/]), iVar0))
		{
			if (unk_0xF0F2FC9DE291567F(vParam0, Global_110A8.f_22B[0 /*21*/], bParam2) <= fParam1)
			{
				func_66(iVar0);
			}
		}
		iVar0++;
	}
}

int func_97(var uParam0)//Position - 0x7D34
{
	if (func_98(uParam0))
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

int func_98(var uParam0)//Position - 0x7D69
{
	if (uParam0->f_C.f_42 == 0)
	{
		return 0;
	}
	if (!func_47(uParam0->f_C.f_42, 0))
	{
		return 0;
	}
	if (uParam0->f_C.f_42 == joaat("stunt") && func_75(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

void func_99()//Position - 0x7DC8
{
	if (iLocal_80 == 0)
	{
		if (unk_0xD6513D668481290A(joaat("s_m_y_marine_01")) && unk_0xD6513D668481290A(joaat("s_m_m_pilot_02")))
		{
			if (!unk_0x724D816EA203A79E(iLocal_32[0]))
			{
				iLocal_32[0] = unk_0x01B3635C3E8EDD81(26, joaat("s_m_y_marine_01"), -1590.523f, 2796.302f, 15.9184f, 247.0896f, 1, true);
			}
			if (!unk_0x724D816EA203A79E(iLocal_32[1]))
			{
				iLocal_32[1] = unk_0x01B3635C3E8EDD81(26, joaat("s_m_y_marine_01"), -2303.8f, 3387.99f, 30.034f, 58.5763f, 1, true);
			}
			if (!unk_0x724D816EA203A79E(iLocal_32[2]))
			{
				iLocal_32[2] = unk_0x01B3635C3E8EDD81(26, joaat("s_m_y_marine_01"), -1697.329f, 2909.941f, 31.9506f, 245.656f, 1, true);
			}
			if (!unk_0x724D816EA203A79E(iLocal_32[3]))
			{
				iLocal_32[3] = unk_0x01B3635C3E8EDD81(26, joaat("s_m_y_marine_01"), -1696.369f, 2905.772f, 31.9454f, 6.3714f, 1, true);
			}
			if (!unk_0x724D816EA203A79E(iLocal_32[4]))
			{
				iLocal_32[4] = unk_0x01B3635C3E8EDD81(26, joaat("s_m_y_marine_01"), -1843.707f, 2821.611f, 31.8528f, 271.6265f, 1, true);
			}
			if (!unk_0x724D816EA203A79E(iLocal_32[5]))
			{
				iLocal_32[5] = unk_0x01B3635C3E8EDD81(26, joaat("s_m_y_marine_01"), -2006.877f, 2955.101f, 31.8103f, 332.0101f, 1, true);
			}
			if (!unk_0x724D816EA203A79E(iLocal_32[6]))
			{
				iLocal_32[6] = unk_0x01B3635C3E8EDD81(26, joaat("s_m_y_marine_01"), -2010.022f, 2956.805f, 31.8103f, 288.1283f, 1, true);
			}
			if (iLocal_28 != 3)
			{
				if (!unk_0x724D816EA203A79E(iLocal_32[7]))
				{
					iLocal_32[7] = unk_0x01B3635C3E8EDD81(26, joaat("s_m_y_marine_01"), -2140.213f, 3034.609f, 31.81f, 302.4493f, 1, true);
				}
				if (!unk_0x724D816EA203A79E(iLocal_32[8]))
				{
					iLocal_32[8] = unk_0x01B3635C3E8EDD81(26, joaat("s_m_y_marine_01"), -2136.053f, 3031.494f, 31.81f, 38.6856f, 1, true);
				}
			}
			if (!unk_0x724D816EA203A79E(iLocal_32[9]))
			{
				iLocal_32[9] = unk_0x01B3635C3E8EDD81(26, joaat("s_m_y_marine_01"), -2035.429f, 3058.876f, 31.8103f, 169.8222f, 1, true);
			}
			if (!unk_0x724D816EA203A79E(iLocal_32[10]))
			{
				iLocal_32[10] = unk_0x01B3635C3E8EDD81(26, joaat("s_m_y_marine_01"), -2146.467f, 3160.749f, 31.8106f, 356.4766f, 1, true);
			}
			if (!unk_0x724D816EA203A79E(iLocal_32[11]))
			{
				iLocal_32[11] = unk_0x01B3635C3E8EDD81(26, joaat("s_m_y_marine_01"), -2280.087f, 3172.423f, 31.8103f, 353.663f, 1, true);
			}
			if (!unk_0x724D816EA203A79E(iLocal_32[12]))
			{
				iLocal_32[12] = unk_0x01B3635C3E8EDD81(26, joaat("s_m_y_marine_01"), -2277.376f, 3177.8f, 31.8103f, 175.0685f, 1, true);
			}
			if (!unk_0x724D816EA203A79E(iLocal_31[0]))
			{
				iLocal_31[0] = unk_0x01B3635C3E8EDD81(26, joaat("s_m_m_pilot_02"), -1859.831f, 3071.758f, 31.8104f, 139.3607f, 1, true);
				unk_0x70FF586D857F1A81(iLocal_31[0], 0, 2, 0, false);
				unk_0xB0031DDAE4FF0BC3(iLocal_31[0], 8, 0, 0, 0);
				unk_0xB71D41C0310C93DE(iLocal_31[0], 1, 1);
				unk_0x7A535CE1F001F3FE(iLocal_31[0], joaat("weapon_assaultrifle"), 2000, true, true);
				unk_0x4106FAF8AA1D69D5(iLocal_31[0], iLocal_44);
				unk_0xFC3C88E2313FA926(iLocal_31[0], 0);
				unk_0x2E35C4FA5F0ED22F(iLocal_31[0], 1);
				func_101(iLocal_31[0], 595);
				func_100(iLocal_31[0], 0);
			}
			iLocal_55 = 0;
			while (iLocal_55 <= 12)
			{
				if (iLocal_97[iLocal_55] == 0)
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_32[iLocal_55]))
					{
						unk_0xB71D41C0310C93DE(iLocal_32[iLocal_55], 1, 1);
						unk_0x7A535CE1F001F3FE(iLocal_32[iLocal_55], joaat("weapon_assaultrifle"), 2000, true, true);
						unk_0x4106FAF8AA1D69D5(iLocal_32[iLocal_55], iLocal_44);
						unk_0xFC3C88E2313FA926(iLocal_32[iLocal_55], 10);
						func_101(iLocal_32[iLocal_55], 595);
						func_100(iLocal_32[iLocal_55], 0);
						unk_0x2E35C4FA5F0ED22F(iLocal_32[iLocal_55], 1);
						iLocal_97[iLocal_55] = 1;
					}
				}
				iLocal_55++;
			}
			unk_0x2CA123B0622F495C(joaat("s_m_y_marine_01"));
			unk_0x2CA123B0622F495C(joaat("s_m_m_pilot_02"));
			iLocal_80 = 1;
		}
	}
}

void func_100(int iParam0, bool bParam1)//Position - 0x81E0
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 64)
		{
			if (Global_DABD[iVar0 /*2*/] != 0)
			{
				if (Global_DABD[iVar0 /*2*/] == iParam0)
				{
					return;
				}
			}
			iVar0++;
		}
	}
	if (64 == Global_DABC)
	{
		return;
	}
	iVar1 = -1;
	iVar2 = 0;
	while (iVar1 == -1 && iVar2 != 64)
	{
		if (Global_DABD[iVar2 /*2*/] == 0)
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (iVar1 == -1)
	{
		return;
	}
	Global_DABD[iVar1 /*2*/] = iParam0;
	Global_DABD[iVar1 /*2*/].f_1 = 7;
	Global_DABC++;
}

void func_101(var uParam0, int iParam1)//Position - 0x827B
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_10A77[iVar0 /*2*/] == 0)
		{
			Global_10A77[iVar0 /*2*/] = uParam0;
			Global_10A77[iVar0 /*2*/].f_1 = iParam1;
			if (iVar0 == Global_10A98)
			{
				Global_10A98++;
			}
			return;
		}
		iVar0++;
	}
}

void func_102(int iParam0, int iParam1)//Position - 0x82D1
{
	Global_16B1B.f_16[iParam1] = iParam0;
}

bool func_103()//Position - 0x82E5
{
	return func_97(&(Global_181DF.f_B3B));
}

void func_104()//Position - 0x82F8
{
	func_105(&(Global_181DF.f_B3B));
}

void func_105(var uParam0)//Position - 0x830B
{
	if (func_98(uParam0))
	{
		unk_0xF243B7A14FCFD0F4(uParam0->f_C.f_42);
	}
}

var func_106()//Position - 0x8329
{
	return Global_181DF.f_B3B.f_C.f_42;
}

bool func_107()//Position - 0x833C
{
	return func_98(&(Global_181DF.f_B3B));
}

void func_108(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)//Position - 0x834F
{
	func_109(vParam0, vParam1, fParam2, vParam3, fParam4, 0f, 0f, 0f, bParam5, bParam6, bParam7, bParam8, bParam9);
}

void func_109(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, float fParam4, vector3 vParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)//Position - 0x8378
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
				func_114(iVar0);
			}
			if (unk_0x0C265B3C448E6954(iVar0, vParam0, vParam1, fParam2, 0, true, 0))
			{
				bVar1 = true;
			}
			else
			{
				vVar6 = { unk_0x541C2AEF053615BC(iVar0, true) };
				if ((vVar6.z > vParam0.z && vVar6.z < vParam1.z) || (vVar6.z > vParam1.z && vVar6.z < vParam0.z))
				{
					if (func_111(iVar0, vParam0, vParam1, fParam2))
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
						if (unk_0xF0F2FC9DE291567F(vParam0 + vParam1 / Vector(2f, 2f, 2f), unk_0x541C2AEF053615BC(iVar0, true), true) < 20f)
						{
							bVar1 = true;
							bVar2 = false;
						}
					}
				}
			}
			if (bParam8)
			{
				if (func_61(iVar0, func_20(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!func_110(vParam5))
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
							unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), unk_0x541C2AEF053615BC(iVar0, true), 1, 0, 0, 1);
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
				unk_0x641B19E156645A92(iVar8, unk_0x541C2AEF053615BC(iVar8, true), 1, 0, 0, 1);
			}
			iVar9 = unk_0x7C02672B11D4F65B(unk_0x6F79ECA8C83E4357(iVar0));
			if (iVar9 <= 2)
			{
				iVar8 = unk_0x3187EF5798B5D209(iVar0, 0, 0);
				if (unk_0x724D816EA203A79E(iVar8) && !unk_0x36CEFBE9B745A58D(iVar8))
				{
					unk_0x641B19E156645A92(iVar8, unk_0x541C2AEF053615BC(iVar8, true), 1, 0, 0, 1);
				}
			}
			if (iVar9 <= 4)
			{
				iVar8 = unk_0x3187EF5798B5D209(iVar0, 1, 0);
				if (unk_0x724D816EA203A79E(iVar8) && !unk_0x36CEFBE9B745A58D(iVar8))
				{
					unk_0x641B19E156645A92(iVar8, unk_0x541C2AEF053615BC(iVar8, true), 1, 0, 0, 1);
				}
				iVar8 = unk_0x3187EF5798B5D209(iVar0, 2, 0);
				if (unk_0x724D816EA203A79E(iVar8) && !unk_0x36CEFBE9B745A58D(iVar8))
				{
					unk_0x641B19E156645A92(iVar8, unk_0x541C2AEF053615BC(iVar8, true), 1, 0, 0, 1);
				}
			}
			unk_0xCF6040807CC0E4A5(&iVar0);
		}
	}
}

int func_110(vector3 vParam0)//Position - 0x876C
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_111(int iParam0, vector3 vParam1, vector3 vParam2, float fParam3)//Position - 0x8796
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
		vVar0 = { func_113(vParam1 - vParam2) };
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
		if (((((((((((((((func_112(vVar6[0 /*3*/], vVar6[1 /*3*/], vVar2, vVar3) || func_112(vVar6[0 /*3*/], vVar6[1 /*3*/], vVar3, vVar5)) || func_112(vVar6[0 /*3*/], vVar6[1 /*3*/], vVar4, vVar5)) || func_112(vVar6[0 /*3*/], vVar6[1 /*3*/], vVar2, vVar4)) || func_112(vVar6[1 /*3*/], vVar6[3 /*3*/], vVar2, vVar3)) || func_112(vVar6[1 /*3*/], vVar6[3 /*3*/], vVar3, vVar5)) || func_112(vVar6[1 /*3*/], vVar6[3 /*3*/], vVar4, vVar5)) || func_112(vVar6[1 /*3*/], vVar6[3 /*3*/], vVar2, vVar4)) || func_112(vVar6[3 /*3*/], vVar6[2 /*3*/], vVar2, vVar3)) || func_112(vVar6[3 /*3*/], vVar6[2 /*3*/], vVar3, vVar5)) || func_112(vVar6[3 /*3*/], vVar6[2 /*3*/], vVar4, vVar5)) || func_112(vVar6[3 /*3*/], vVar6[2 /*3*/], vVar2, vVar4)) || func_112(vVar6[2 /*3*/], vVar6[0 /*3*/], vVar2, vVar3)) || func_112(vVar6[2 /*3*/], vVar6[0 /*3*/], vVar3, vVar5)) || func_112(vVar6[2 /*3*/], vVar6[0 /*3*/], vVar4, vVar5)) || func_112(vVar6[2 /*3*/], vVar6[0 /*3*/], vVar2, vVar4))
		{
			return 1;
		}
	}
	return 0;
}

int func_112(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3, struct<2> Param4, var uParam5, struct<2> Param6, var uParam7)//Position - 0x8A8C
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

Vector3 func_113(vector3 vParam0)//Position - 0x8B40
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

void func_114(int iParam0)//Position - 0x8B7F
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

void func_115()//Position - 0x8BE4
{
	if (!func_35())
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), 1738.131f, 3283.38f, 40.1261f, 1, 0, 0, 1);
			unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), 25.3545f);
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_31[0]))
	{
		unk_0xF845620A03C7425B(&(iLocal_31[0]));
	}
	iLocal_55 = 0;
	while (iLocal_55 <= 12)
	{
		if (unk_0x724D816EA203A79E(iLocal_32[iLocal_55]))
		{
			unk_0xF845620A03C7425B(&(iLocal_32[iLocal_55]));
		}
		iLocal_55++;
	}
	if (func_20() == 2)
	{
		if (unk_0x724D816EA203A79E(uLocal_124[0]))
		{
			unk_0xF845620A03C7425B(&(uLocal_124[0]));
		}
	}
	if (func_20() == 0)
	{
		if (unk_0x724D816EA203A79E(uLocal_124[2]))
		{
			unk_0xF845620A03C7425B(&(uLocal_124[2]));
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_35[0]))
	{
		unk_0x38E412DB4A45B900(iLocal_35[0], 0);
	}
	unk_0x2D23F487A48A1C6D("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", 1);
	unk_0x5C083DB6ACC5827F("AZ_AFB_ALARM_SPEECH", 0, 0);
	if (unk_0x144E80F5C46A6B75("DH_P_2B_ENTER_CHOPPER"))
	{
		unk_0xC1300D0F3A74E20B("DH_P_2B_ENTER_CHOPPER");
	}
	if (unk_0x144E80F5C46A6B75("DH_P_2B_ENEMY_CHOPPERS_ARRIVE"))
	{
		unk_0xC1300D0F3A74E20B("DH_P_2B_ENEMY_CHOPPERS_ARRIVE");
	}
	if (unk_0x724D816EA203A79E(iLocal_33))
	{
		unk_0xCF6040807CC0E4A5(&iLocal_33);
	}
	if (unk_0x724D816EA203A79E(iLocal_39))
	{
		unk_0xCF6040807CC0E4A5(&iLocal_39);
	}
	if (unk_0x724D816EA203A79E(iLocal_34))
	{
		unk_0xCF6040807CC0E4A5(&iLocal_34);
	}
	if (unk_0x724D816EA203A79E(iLocal_35[0]))
	{
		unk_0xCF6040807CC0E4A5(&(iLocal_35[0]));
	}
	if (unk_0x724D816EA203A79E(Global_15DFD[0]))
	{
		if (!unk_0xB248FAA35ED47DB9(Global_15DFD[0], 1))
		{
			unk_0x77815D3407C6700D(Global_15DFD[0], true, 1);
		}
		unk_0xCF6040807CC0E4A5(&(Global_15DFD[0]));
	}
	if (unk_0x724D816EA203A79E(Global_15DFD[1]))
	{
		if (!unk_0xB248FAA35ED47DB9(Global_15DFD[1], 1))
		{
			unk_0x77815D3407C6700D(Global_15DFD[1], true, 1);
		}
		unk_0xCF6040807CC0E4A5(&(Global_15DFD[1]));
	}
	if (unk_0x724D816EA203A79E(Global_15DFD[2]))
	{
		if (!unk_0xB248FAA35ED47DB9(Global_15DFD[2], 1))
		{
			unk_0x77815D3407C6700D(Global_15DFD[2], true, 1);
		}
		unk_0xCF6040807CC0E4A5(&(Global_15DFD[2]));
	}
	if (unk_0x724D816EA203A79E(iLocal_36[0]))
	{
		unk_0xCF6040807CC0E4A5(&(iLocal_36[0]));
	}
	if (unk_0x724D816EA203A79E(iLocal_42))
	{
		unk_0xA35241BCE4C1A24B(&iLocal_42);
	}
	if (unk_0x724D816EA203A79E(iLocal_43))
	{
		unk_0xA35241BCE4C1A24B(&iLocal_43);
	}
	if (unk_0xEF0E25DA0CB6E8FF(iLocal_40))
	{
		if (unk_0xEDEA6C8F42EE05F6(iLocal_40))
		{
			unk_0x062C9995BFD27B2A(false, false, 3000, 1, 0, 0);
		}
		unk_0x4EC087603E1DEF9C(iLocal_40, 0);
	}
}

void func_116()//Position - 0x8E2E
{
	if (unk_0x2DA8CA50A72528FB(iLocal_45))
	{
		unk_0x07B8ECB35A4ED3AC(&iLocal_45);
	}
	if (unk_0x2DA8CA50A72528FB(iLocal_46))
	{
		unk_0x07B8ECB35A4ED3AC(&iLocal_46);
	}
	if (unk_0x2DA8CA50A72528FB(iLocal_48))
	{
		unk_0x07B8ECB35A4ED3AC(&iLocal_48);
	}
	iLocal_55 = 0;
	while (iLocal_55 <= 12)
	{
		func_117(&(Local_53[iLocal_55 /*8*/]));
		iLocal_55++;
	}
	unk_0x5499DFC49A11E05F();
}

void func_117(int iParam0)//Position - 0x8E84
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

void func_118()//Position - 0x8EF6
{
	if (iLocal_28 == 5)
	{
		if (unk_0x2DA8CA50A72528FB(iLocal_45))
		{
			unk_0x07B8ECB35A4ED3AC(&iLocal_45);
		}
		if (unk_0x2DA8CA50A72528FB(iLocal_46))
		{
			unk_0x07B8ECB35A4ED3AC(&iLocal_46);
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_34))
	{
		if (unk_0xE59B7F5A03335350(iLocal_34, 0))
		{
			if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_34, 0))
			{
				if (unk_0x2DA8CA50A72528FB(iLocal_45))
				{
					unk_0x07B8ECB35A4ED3AC(&iLocal_45);
				}
				if (iLocal_107 == 1)
				{
					if (unk_0x105601648511CC64() < iLocal_68 + 7500)
					{
						unk_0xEB233A3B7635D2AC();
					}
				}
				if (iLocal_28 == 4)
				{
					if (!unk_0x2DA8CA50A72528FB(iLocal_46))
					{
						iLocal_46 = func_125(vLocal_119, 0);
					}
					if (iLocal_78 == 0)
					{
						if (!unk_0x4B8E3E5901E59EB8())
						{
							if (!func_124() || !unk_0x11D38424F1DD3B8F())
							{
								func_123("DP_GOD4", 7500, 1);
								iLocal_69 = unk_0x105601648511CC64();
								iLocal_78 = 1;
							}
						}
					}
				}
				if (iLocal_28 == 3)
				{
					if (!unk_0x2DA8CA50A72528FB(uLocal_47[0]))
					{
						uLocal_47[0] = func_122(iLocal_31[0], 1, 0);
					}
				}
			}
			else if (iLocal_28 != 5)
			{
				if (!unk_0x2DA8CA50A72528FB(iLocal_45))
				{
					iLocal_45 = func_119(iLocal_34, 0, 0);
				}
				if (iLocal_28 == 3 || iLocal_28 == 4)
				{
					if (iLocal_107 == 0)
					{
						unk_0xEB233A3B7635D2AC();
						func_123("DP_GOD6", 7500, 1);
						iLocal_68 = unk_0x105601648511CC64();
						iLocal_107 = 1;
					}
				}
				if (unk_0x2DA8CA50A72528FB(iLocal_46))
				{
					unk_0x07B8ECB35A4ED3AC(&iLocal_46);
				}
				if (iLocal_28 == 3)
				{
					if (unk_0x2DA8CA50A72528FB(uLocal_47[0]))
					{
						unk_0x07B8ECB35A4ED3AC(&(uLocal_47[0]));
					}
				}
				if (iLocal_28 == 4)
				{
					if (iLocal_78 == 1)
					{
						if (unk_0x105601648511CC64() < iLocal_69 + 7500)
						{
							unk_0xEB233A3B7635D2AC();
						}
					}
				}
			}
		}
		else
		{
			if (unk_0x2DA8CA50A72528FB(iLocal_45))
			{
				unk_0x07B8ECB35A4ED3AC(&iLocal_45);
			}
			if (iLocal_76 == 1)
			{
				iLocal_79 = 1;
			}
		}
	}
	else
	{
		if (unk_0x2DA8CA50A72528FB(iLocal_45))
		{
			unk_0x07B8ECB35A4ED3AC(&iLocal_45);
		}
		if (iLocal_76 == 1)
		{
			iLocal_79 = 1;
		}
	}
}

int func_119(int iParam0, bool bParam1, bool bParam2)//Position - 0x90A9
{
	return func_120(iParam0, !bParam1, bParam2);
}

int func_120(int iParam0, bool bParam1, bool bParam2)//Position - 0x90BC
{
	int iVar0;
	
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x511FE22BCF5353CD(iParam0);
	if (unk_0xD27AC0E9B78CFDD7(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(iVar0, func_121(unk_0x7AF0088ABFA713B6(), 1f, 1f));
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
		unk_0x3F5F1772D71D5EC4(iVar0, func_121(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
		unk_0xF9C2945DB5BAB4BF(iVar0, bParam1);
	}
	else if (unk_0xB12D030810E8447D(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(iVar0, func_121(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_121(bool bParam0, float fParam1, float fParam2)//Position - 0x9160
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_122(int iParam0, bool bParam1, bool bParam2)//Position - 0x9177
{
	return func_120(iParam0, !bParam1, bParam2);
}

void func_123(char* sParam0, int iParam1, int iParam2)//Position - 0x918A
{
	iParam2 = iParam2;
	unk_0x3714DE83381EADC2(sParam0);
	unk_0x41D8F63F629E76BE(iParam1, 1);
}

int func_124()//Position - 0x91A3
{
	if (Global_3DB8 != 0 || unk_0xE6711F601F11B66B())
	{
		return 1;
	}
	return 0;
}

int func_125(vector3 vParam0, bool bParam1)//Position - 0x91C5
{
	int iVar0;
	
	iVar0 = unk_0x390CF6C8AD6903B7(vParam0);
	unk_0x3F5F1772D71D5EC4(iVar0, func_121(unk_0x7AF0088ABFA713B6(), 1f, 1f));
	unk_0x0BBAABB52887CF8C(iVar0, bParam1);
	return iVar0;
}

void func_126()//Position - 0x91F1
{
	if (iLocal_54 > 0)
	{
		func_118();
		func_221();
	}
	if (iLocal_54 == 0)
	{
		if (iLocal_75 == 1)
		{
			iLocal_76 = 0;
			func_33();
			iLocal_75 = 0;
		}
		iLocal_111 = 0;
		iLocal_112 = 0;
		iLocal_115 = 0;
		iLocal_116 = 0;
		if (unk_0x2DA8CA50A72528FB(iLocal_48))
		{
			unk_0x07B8ECB35A4ED3AC(&iLocal_48);
		}
		unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 0, 0);
		unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
		if (unk_0x724D816EA203A79E(iLocal_34))
		{
			unk_0x346478B12F69D4E3(iLocal_34, false);
		}
		unk_0x9332FDC92BD28643(0);
		iLocal_55 = 0;
		while (iLocal_55 <= 12)
		{
			if (unk_0x724D816EA203A79E(iLocal_32[iLocal_55]))
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_32[iLocal_55]))
				{
					unk_0x22321800954A532E(iLocal_32[iLocal_55], true);
					unk_0x02537C8C1BEEB477(&(iLocal_32[iLocal_55]));
				}
			}
			iLocal_55++;
		}
		if (unk_0x724D816EA203A79E(iLocal_35[0]))
		{
			unk_0x1E7A09C1710FB071(&(iLocal_35[0]));
		}
		if (unk_0x724D816EA203A79E(iLocal_31[0]))
		{
			unk_0x02537C8C1BEEB477(&(iLocal_31[0]));
		}
		if (!unk_0x144E80F5C46A6B75("DH_P_2B_ENTER_CHOPPER"))
		{
			unk_0xD6423910AAD8A379("DH_P_2B_ENTER_CHOPPER");
		}
		if (unk_0x17FAADF9916EF741())
		{
			if (!func_35())
			{
				unk_0x8B6B50EADA01F251(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true));
			}
			func_219(iLocal_34, -1, 1);
		}
		if (!unk_0x726D9204B160D23E())
		{
			unk_0x829FA4611BD56B44(800);
		}
		unk_0x1D1C393C7689E5A6(10f, 5f, 4);
		iLocal_76 = 1;
		iLocal_54 = 1;
	}
	if (iLocal_54 == 1)
	{
		if (iLocal_115 == 0)
		{
			if (unk_0x724D816EA203A79E(iLocal_34))
			{
				if (unk_0xE59B7F5A03335350(iLocal_34, 0))
				{
					if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_34, 0))
					{
						if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), vLocal_118, true) > 800f)
						{
							func_144(2, "STAGE_FLY_CARGOBOB_TO_HANGER", 1, 0, 0, 1);
							iLocal_115 = 1;
						}
					}
				}
			}
		}
		if (unk_0x724D816EA203A79E(iLocal_34))
		{
			if (unk_0xE59B7F5A03335350(iLocal_34, 0))
			{
				if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_34, 0))
				{
					if (unk_0x2A348A3A98B80B13(iLocal_34))
					{
						if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), vLocal_118, true) > 800f)
						{
							if (iLocal_111 == 0 && iLocal_78 == 1)
							{
								if (!unk_0x4B8E3E5901E59EB8())
								{
									if (!func_124() || !unk_0x11D38424F1DD3B8F())
									{
										func_143(&uLocal_198, 2, unk_0xBC25C936A095B5BA(), "TREVOR", 0, 1);
										if (func_142(&uLocal_198, "DP2BAUD", "DP2B_CHAT59", 7, 0, 0, 0))
										{
											iLocal_111 = 1;
										}
									}
								}
							}
							if (iLocal_111 == 1 && iLocal_116 == 0)
							{
								if (func_141(72) == 0)
								{
									if (!func_124())
									{
										if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
										{
											func_143(&uLocal_198, 3, 0, "Wade", 0, 1);
											if (func_130(&uLocal_198, 24, "DP2BAUD", "DP2B_WADEP3", 7, 1, 0, 0, 0))
											{
												iLocal_116 = 1;
											}
										}
									}
								}
								else if (!func_124())
								{
									if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
									{
										func_143(&uLocal_198, 3, 0, "Wade", 0, 1);
										if (func_130(&uLocal_198, 24, "DP2BAUD", "DP2B_WADEP4", 7, 1, 0, 0, 0))
										{
											iLocal_116 = 1;
										}
									}
								}
							}
						}
						else if (func_129(71) == 0)
						{
							if (iLocal_112 == 0)
							{
								if (!func_124())
								{
									if (!unk_0xF16DAFF595E80F7C())
									{
										func_128("DP_HELP4", -1);
										iLocal_112 = 1;
									}
								}
							}
						}
					}
				}
			}
		}
		if (unk_0x724D816EA203A79E(iLocal_34))
		{
			if (unk_0xE59B7F5A03335350(iLocal_34, 0))
			{
				if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_34, 0))
				{
					if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vLocal_119, 2f, 2f, 2f, 1, true, 0))
					{
					}
					if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 1721.001f, 3264.248f, 38.40064f, 1765.509f, 3276.518f, 46.05385f, 48.25f, 0, true, 0))
					{
						if (!unk_0x2A348A3A98B80B13(iLocal_34) && unk_0xB66CFDE6B830965A(iLocal_34))
						{
							func_127(1, 600);
							unk_0x1D1C393C7689E5A6(8f, 5f, 4);
							iLocal_54 = 0;
							iLocal_28 = 5;
						}
					}
				}
			}
		}
	}
}

void func_127(bool bParam0, int iParam1)//Position - 0x9597
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

void func_128(char* sParam0, int iParam1)//Position - 0x9631
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, true, iParam1);
}

int func_129(int iParam0)//Position - 0x9648
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_19B04.f_2360.f_63.f_3A[iParam0];
}

bool func_130(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)//Position - 0x9675
{
	func_140(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
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
	if (iParam5 == 1)
	{
		Global_3DC4 = 1;
	}
	else
	{
		Global_3DC4 = 0;
	}
	Global_280001 = 0;
	return func_131(sParam3, iParam4, bParam8);
}

int func_131(char* sParam0, int iParam1, bool bParam2)//Position - 0x96D4
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
					func_139();
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
		if (func_138(8, -1))
		{
			return 0;
		}
		Global_3E04 = { Global_3DFE };
		func_137();
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
				func_136();
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
				if (func_135())
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
			if (func_134())
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
			func_133();
			Global_3DC2 = bParam2;
		}
		Global_3DBA = iParam1;
		StringCopy(&Global_3C3B, sParam0, 24);
		Global_394A = 0;
		func_132();
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
		func_139();
	}
	return 0;
}

void func_132()//Position - 0x99A0
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

void func_133()//Position - 0x99D1
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

int func_134()//Position - 0x9A66
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_135()//Position - 0x9A8D
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

void func_136()//Position - 0x9B26
{
	if (func_22(14))
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
		Global_389D = func_20();
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

void func_137()//Position - 0x9BC8
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

bool func_138(int iParam0, int iParam1)//Position - 0x9C1F
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

void func_139()//Position - 0x9C5A
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

void func_140(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x9CB1
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

int func_141(int iParam0)//Position - 0x9D07
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_19B04.f_2360.f_14A[iParam0 /*6*/];
}

bool func_142(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x9D33
{
	func_140(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_131(sParam2, iParam3, 0);
}

void func_143(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x9D81
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

void func_144(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x9E1C
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	int iVar4;
	var uVar5;
	int iVar6;
	
	if (iParam3 == 1)
	{
		if (!unk_0x3362CDE8460ED38B("FinaleC2", unk_0x1377080E9B0BD993()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_16B40)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_16B40)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_218(1);
		if (iParam0 <= Global_16B40)
		{
		}
		iVar1 = func_216(unk_0x1377080E9B0BD993(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_19B04.f_2360.f_14A[iVar1 /*6*/].f_1 = 0;
			iVar2 = func_214(iVar1);
			cVar3 = { Global_147B0[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_19B04.f_2360.f_63.f_CD[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			unk_0x1B7435D54924A668(&cVar3, iVar2, Global_16B40, iParam0);
		}
		else
		{
			iVar4 = func_209(unk_0x1377080E9B0BD993(), 1);
			if (iVar4 != -1)
			{
				Global_19B04.f_4871[iVar4 /*6*/].f_4 = 0;
				MemCopy(&uVar5, {func_208(iVar4)}, 4);
				unk_0x1B7435D54924A668(&uVar5, 0, Global_16B40, iParam0);
			}
			else
			{
				iVar6 = func_207(&(Global_16B1B.f_3));
				if (iVar6 > -1)
				{
					Global_19B04.f_617D.f_4[iVar6] = 0;
				}
			}
		}
		Global_154EE = iParam2;
		Global_16B40 = iParam0;
		func_145(iParam0, sParam1, iParam4, iParam5);
		if (unk_0x3362CDE8460ED38B(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_16B40)
	{
	}
}

void func_145(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x9F91
{
	func_146(&Global_181DF, unk_0x1377080E9B0BD993(), iParam0, uParam1, iParam3, iParam2);
}

void func_146(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x9FAD
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_20();
	uParam0->f_1 = func_196();
	unk_0x6E1ECC86C790262C(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		func_171(&(uParam0->f_B35), 0);
		func_170(unk_0xBC25C936A095B5BA());
		func_163(unk_0xBC25C936A095B5BA(), 0);
		unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_11[iVar1] = Global_19B04.f_932.f_21B.f_126[iVar1];
		if (iVar1 == func_162())
		{
			func_155(unk_0xBC25C936A095B5BA(), &(uParam0->f_268[iVar1 /*65*/]), 1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_268[iVar1 /*65*/][iVar0] = Global_16A49[iVar1 /*65*/][iVar0];
				uParam0->f_268[iVar1 /*65*/].f_D[iVar0] = Global_16A49[iVar1 /*65*/].f_D[iVar0];
				iVar0++;
			}
			uParam0->f_268[iVar1 /*65*/].f_3B = Global_16A49[iVar1 /*65*/].f_3B;
			uParam0->f_268[iVar1 /*65*/].f_3C = Global_16A49[iVar1 /*65*/].f_3C;
			uParam0->f_268[iVar1 /*65*/].f_3D = Global_16A49[iVar1 /*65*/].f_3D;
			uParam0->f_268[iVar1 /*65*/].f_3E = Global_16A49[iVar1 /*65*/].f_3E;
			uParam0->f_268[iVar1 /*65*/].f_3F = Global_16A49[iVar1 /*65*/].f_3F;
			uParam0->f_268[iVar1 /*65*/].f_40 = Global_16A49[iVar1 /*65*/].f_40;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_268[iVar1 /*65*/].f_27[iVar0] = Global_16A49[iVar1 /*65*/].f_27[iVar0];
				uParam0->f_268[iVar1 /*65*/].f_31[iVar0] = Global_16A49[iVar1 /*65*/].f_31[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_32C[iVar1 /*472*/][iVar0 /*5*/] = { Global_19B04.f_932.f_21B.f_12A[iVar1 /*472*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			uParam0->f_32C[iVar1 /*472*/].f_DD[iVar0 /*5*/] = { Global_19B04.f_932.f_21B.f_12A[iVar1 /*472*/].f_DD[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				unk_0x6CB99B97664C3727(joaat("sp0_weap_purch_0"), &(uParam0->f_8B5[iVar1 /*32*/][0]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_purch_1"), &(uParam0->f_8B5[iVar1 /*32*/][1]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_8B5[iVar1 /*32*/].f_5[0]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_8B5[iVar1 /*32*/].f_5[1]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_8B5[iVar1 /*32*/].f_5[2]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_8B5[iVar1 /*32*/].f_5[3]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_8B5[iVar1 /*32*/].f_5[4]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[0]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[1]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[2]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[3]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[4]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[5]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[6]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[7]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[8]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[9]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[10]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[11]), -1);
				break;
			
			case 1:
				unk_0x6CB99B97664C3727(joaat("sp1_weap_purch_0"), &(uParam0->f_8B5[iVar1 /*32*/][0]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_purch_1"), &(uParam0->f_8B5[iVar1 /*32*/][1]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_8B5[iVar1 /*32*/].f_5[0]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_8B5[iVar1 /*32*/].f_5[1]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_8B5[iVar1 /*32*/].f_5[2]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_8B5[iVar1 /*32*/].f_5[3]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_8B5[iVar1 /*32*/].f_5[4]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[0]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[1]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[2]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[3]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[4]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[5]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[6]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[7]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[8]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[9]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[10]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[11]), -1);
				break;
			
			case 2:
				unk_0x6CB99B97664C3727(joaat("sp2_weap_purch_0"), &(uParam0->f_8B5[iVar1 /*32*/][0]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_purch_1"), &(uParam0->f_8B5[iVar1 /*32*/][1]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_8B5[iVar1 /*32*/].f_5[0]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_8B5[iVar1 /*32*/].f_5[1]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_8B5[iVar1 /*32*/].f_5[2]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_8B5[iVar1 /*32*/].f_5[3]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_8B5[iVar1 /*32*/].f_5[4]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[0]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[1]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[2]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[3]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[4]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[5]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[6]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[7]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[8]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[9]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[10]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_19B04.f_5037.f_E9[iVar1 /*69*/].f_1;
		uParam0->f_D[iVar1] = Global_CF95[iVar1];
		uParam0->f_19[0 /*295*/][iVar1 /*98*/] = { Global_19B04.f_932.f_21B.f_953[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_19[1 /*295*/][iVar1 /*98*/] = { Global_19B04.f_932.f_21B.f_953[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_B07[iVar1 /*15*/][iVar0] = Global_19B04.f_932.f_1ED[iVar1 /*15*/][iVar0];
			uParam0->f_B07[iVar1 /*15*/].f_5[iVar0] = Global_19B04.f_932.f_1ED[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_B07[iVar1 /*15*/].f_A[iVar0] = Global_19B04.f_932.f_1ED[iVar1 /*15*/].f_A[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_91A[iVar1 /*164*/][iVar0] = Global_19B04.f_932[iVar1 /*164*/][iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_4[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_8[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_C[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_C[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_10[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_10[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_14[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_14[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_18[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_18[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_1C[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_1C[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_20[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_24[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_28[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_2C[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_2C[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_30[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_30[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_34[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_34[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_38[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_38[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_3C[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_3C[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_40[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_44[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_48[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_4C[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_4C[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_50[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_50[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_54[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_54[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_58[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_58[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_5C[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_5C[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_60[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_64[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_68[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_6C[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_6C[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_70[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_70[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_74[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_74[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_78[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_78[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_7C[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_7C[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_80[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_84[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_88[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_8C[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_8C[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_90[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_90[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_94[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_94[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_98[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_98[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_9C[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_9C[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_A0[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_A0[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	unk_0x6CB99B97664C3727(joaat("sp0_special_ability"), &(uParam0->f_916[0]), -1);
	unk_0x6CB99B97664C3727(joaat("sp1_special_ability"), &(uParam0->f_916[1]), -1);
	unk_0x6CB99B97664C3727(joaat("sp2_special_ability"), &(uParam0->f_916[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_148(&(uParam0->f_B3B), uParam0, iParam5, 1, 1, 0);
	}
	func_147(&(uParam0->f_B95));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_147(var uParam0)//Position - 0xAE35
{
	*uParam0 = Global_15B75;
	uParam0->f_1 = Global_15B76;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_148(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0xAE57
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = unk_0xBC25C936A095B5BA();
	}
	if (unk_0x724D816EA203A79E(iParam2))
	{
		uParam1->f_5 = func_24(iParam2);
	}
	if (func_154(iParam2, &iVar0, iParam3, iParam5))
	{
		func_149(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0x724D816EA203A79E(iVar0))
	{
		if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
		{
			if (unk_0x5E87CB0495C97732(iVar0, joaat("skylift")) && unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iVar0, 0))
			{
				func_149(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_149(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0xAEDF
{
	if (unk_0xE59B7F5A03335350(iParam2, 0))
	{
		func_151(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_150(iParam2))
		{
			uParam1->f_3 = 1;
		}
		else
		{
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

int func_150(int iParam0)//Position - 0xAF1F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_16B1B.f_16[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_151(var uParam0, int iParam1, int iParam2)//Position - 0xAF4D
{
	func_40(iParam1, &(uParam0->f_C));
	uParam0->f_7 = func_153(iParam1, 145, 0);
	uParam0->f_B = func_60(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_A)
		{
			uParam0->f_A = func_152(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { unk_0x541C2AEF053615BC(iParam1, true) };
		uParam0->f_6 = unk_0x349C94FFF43E2979(iParam1);
		uParam0->f_3 = { unk_0xB5D9AE572C19509E(iParam1) };
		if (unk_0x0C265B3C448E6954(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, true, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_11431 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_152(int iParam0)//Position - 0xB029
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x724D816EA203A79E(Global_110A8.f_1E4[iVar0]))
		{
			if (iParam0 == Global_110A8.f_1E4[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_153(int iParam0, int iParam1, int iParam2)//Position - 0xB06B
{
	int iVar0;
	
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 0;
	}
	if (!unk_0xE59B7F5A03335350(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x724D816EA203A79E(Global_1613F[iVar0]))
		{
			if (Global_1613F[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_16149[iVar0])
				{
					if (iParam2 == 0 || unk_0x6F79ECA8C83E4357(iParam0) == func_71(iParam1, iParam2))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_154(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0xB0F9
{
	char* sVar0;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (!unk_0x36CEFBE9B745A58D(iParam0))
		{
			if (iParam0 == unk_0xBC25C936A095B5BA())
			{
				*uParam1 = unk_0x3E12B546F3F2597A();
			}
			else
			{
				*uParam1 = unk_0x9FE9D386222EEE47(iParam0, 1);
			}
			if (unk_0x724D816EA203A79E(*uParam1))
			{
				if (unk_0xE59B7F5A03335350(*uParam1, 0))
				{
					if (iParam2 == 0 || unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(*uParam1, true), unk_0x541C2AEF053615BC(iParam0, true), true) < 100f)
					{
						if (unk_0x5E87CB0495C97732(*uParam1, joaat("taxi")))
						{
							if (unk_0x3187EF5798B5D209(*uParam1, -1, 0) != iParam0 && unk_0x3187EF5798B5D209(*uParam1, -1, 0) != 0)
							{
								return 0;
							}
						}
						if (func_61(*uParam1, func_20(), 1))
						{
							sVar0 = unk_0x1377080E9B0BD993();
							if (!unk_0x3362CDE8460ED38B(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!unk_0x5237AF95232D78C5(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (unk_0x3C03CFD5DD1E2D97(*uParam1, "IgnoredByQuickSave"))
							{
								if (unk_0x75236BEC3BDDE069(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (unk_0x5E87CB0495C97732(*uParam1, joaat("blimp")))
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_155(int iParam0, var uParam1, int iParam2)//Position - 0xB226
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		iVar0 = func_24(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_161(iParam0, iVar1, &(uParam1->f_D[iVar1]), uParam1[iVar1], &(uParam1->f_1A[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_160(iParam0, iVar1, &(uParam1->f_27[iVar1]), &(uParam1->f_31[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_23(iVar0))
		{
			uParam1->f_3B = Global_19B04.f_932.f_21B[iVar0 /*65*/].f_3B;
			uParam1->f_3C = Global_19B04.f_932.f_21B[iVar0 /*65*/].f_3C;
			uParam1->f_3D = Global_19B04.f_932.f_21B[iVar0 /*65*/].f_3D;
			uParam1->f_3E = Global_19B04.f_932.f_21B[iVar0 /*65*/].f_3E;
			uParam1->f_3F = Global_19B04.f_932.f_21B[iVar0 /*65*/].f_3F;
			uParam1->f_40 = Global_19B04.f_932.f_21B[iVar0 /*65*/].f_40;
		}
		else if (unk_0x7AF0088ABFA713B6() && unk_0x6F79ECA8C83E4357(iParam0) == unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			if (func_159(161, -1))
			{
				uParam1->f_3B = func_156(2051, Global_11486, 0);
			}
			else
			{
				uParam1->f_3B = func_156(752, Global_11486, 0);
			}
			uParam1->f_3C = func_156(753, Global_11486, 0);
			uParam1->f_3D = func_156(754, Global_11486, 0);
		}
		if (unk_0x7AF0088ABFA713B6() && iParam0 == unk_0xBC25C936A095B5BA())
		{
			if (func_159(161, -1))
			{
				uParam1->f_3B = func_156(2051, Global_11486, 0);
			}
			else
			{
				uParam1->f_3B = func_156(752, Global_11486, 0);
			}
		}
	}
}

int func_156(int iParam0, int iParam1, int iParam2)//Position - 0xB3D0
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_157(iParam1)];
	if (unk_0x6CB99B97664C3727(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_157(var uParam0)//Position - 0xB402
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_158();
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

var func_158()//Position - 0xB436
{
	return Global_1407E0;
}

int func_159(int iParam0, int iParam1)//Position - 0xB442
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2705A2[iParam0 /*3*/][func_157(iParam1)];
	if (unk_0x9CADE88F210A0BAE(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_160(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0xB46E
{
	int iVar0;
	
	iVar0 = func_24(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x35C830BCF2BF70BE(iParam0, iParam1);
		*uParam3 = unk_0x98F83843E924A56E(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (unk_0x4B4D220E2BCD09B8(iParam0) && unk_0xB2B29814741DDD85(iParam0) != -1)
				{
					*uParam2 = unk_0xB2B29814741DDD85(iParam0);
					*uParam3 = unk_0xC226620531B0B29B(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_161(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)//Position - 0xB9B6
{
	int iVar0;
	
	iVar0 = func_24(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0xA86A4D206EC8EB16(iParam0, iParam1);
		*uParam3 = unk_0x695D13ECF7DAEC22(iParam0, iParam1);
		*uParam4 = unk_0x41AF5D2DF638D88F(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

int func_162()//Position - 0xBBF7
{
	func_21();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_163(int iParam0, bool bParam1)//Position - 0xBC10
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_24(iParam0);
	if (func_23(iVar0) && !unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (iParam0 == unk_0xBC25C936A095B5BA())
		{
			func_164(iParam0, &(Global_19B04.f_932.f_21B.f_12A[iVar0 /*472*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_19B04.f_932.f_21B.f_6B3[iVar2 /*4*/][iVar0] = unk_0x45068B6398B7C15B(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0x2BCE278DDEEAB2EB();
					if (Global_19B04.f_932.f_21B.f_6B3[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_19B04.f_932.f_21B.f_6D4 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0x98ACC000724833AC(unk_0xB5CEFD608600A09F(), &iVar3);
			if (iVar0 == 0)
			{
				unk_0x3A57956BCE003880(joaat("sp0_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 1)
			{
				unk_0x3A57956BCE003880(joaat("sp1_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 2)
			{
				unk_0x3A57956BCE003880(joaat("sp2_parachute_current_tint"), iVar3, 1);
			}
		}
	}
}

void func_164(int iParam0, var uParam1)//Position - 0xBD03
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar5;
	int iVar6;
	struct<2> Var7;
	struct<4> Var8;
	int iVar9;
	int iVar10;
	
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*5*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_169(iVar0);
			if (iVar3 != 0)
			{
				Var4 = unk_0xFEBBB8B5E3A12A20(iParam0, func_169(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4 != 0 && Var4 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0x46C0645571D5BB21(iParam0, Var4);
					if (Var4 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = unk_0x5BA4FE244D010B3B(iParam0, Var4);
					Var4.f_4 = unk_0x8C4F3A254E8EA3BD(iParam0, Var4);
					if (Var4.f_1 == -1)
					{
						if (!unk_0xDBF94F25838DCE55(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_167(Var4, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0x1D3364A4FCD401E3(iParam0, Var4, iVar2))
						{
							unk_0xF0059F27F7BB6680(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_167(Var4, iVar1);
					}
				}
				*(uParam1[iVar0 /*5*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (50 - 1))
		{
			uParam1->f_DD[iVar0 /*5*/].f_1 = 0;
			iVar0++;
		}
		iVar6 = unk_0x8E3F7DC568AC987B();
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			if ((unk_0x6740839132C4BD08(iVar5, &Var7) && !func_166(Var7.f_1)) && iVar9 < 50)
			{
				if (!unk_0xD90F58A58682ED2F(Var7))
				{
					Var4 = Var7.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = unk_0x46C0645571D5BB21(iParam0, Var4);
					if (unk_0x7B2E29350659BE8E(iParam0, Var4, 0))
					{
						Var4.f_3 = unk_0x5BA4FE244D010B3B(iParam0, Var4);
						Var4.f_4 = unk_0x8C4F3A254E8EA3BD(iParam0, Var4);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0xDBF94F25838DCE55(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_DD[iVar9 /*5*/].f_1 = Var4.f_1;
					iVar10 = 0;
					iVar1 = 0;
					while (iVar1 < unk_0x24C19AF1AF00F6A0(iVar5))
					{
						if (unk_0x9278F82C9078D16B(iVar5, iVar1, &Var8))
						{
							if (!func_165(Var8.f_3))
							{
								if (unk_0x1D3364A4FCD401E3(iParam0, Var4, Var8.f_3))
								{
									unk_0xF0059F27F7BB6680(&(Var4.f_2), iVar10);
								}
								iVar10++;
							}
						}
						iVar1++;
					}
				}
				if (Var4 != 0)
				{
					if (!unk_0x7B2E29350659BE8E(iParam0, Var4, 0))
					{
						Var4 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_DD[iVar9 /*5*/] = { Var4 };
				iVar9++;
			}
			iVar5++;
		}
	}
}

int func_165(int iParam0)//Position - 0xBF8D
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

int func_166(int iParam0)//Position - 0xC094
{
	if (unk_0x7AF0088ABFA713B6())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return 0;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return 0;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return 0;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 0;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return 0;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return 0;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return 0;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return 0;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
				return 0;
				break;
			
			case -947031628:
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
			case joaat("weapon_flashlight"):
			case joaat("weapon_switchblade"):
			case joaat("weapon_revolver"):
			case joaat("weapon_dbshotgun"):
			case joaat("weapon_compactrifle"):
			case 317205821:
			case -1121678507:
			case 125959754:
			case -853065399:
			case -1169823560:
			case -1810795771:
			case 419712736:
			case -1746263880:
				return 1;
				break;
			}
	}
	return 0;
}

int func_167(int iParam0, int iParam1)//Position - 0xC208
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
				iVar1 = func_168(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < unk_0x24C19AF1AF00F6A0(iVar1))
					{
						if (unk_0x9278F82C9078D16B(iVar1, iVar2, &Var5))
						{
							if (!func_165(Var5.f_3))
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

int func_168(int iParam0, var uParam1)//Position - 0xCD79
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

int func_169(int iParam0)//Position - 0xCDB4
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

void func_170(int iParam0)//Position - 0xD028
{
	int iVar0;
	
	iVar0 = func_24(iParam0);
	if (func_23(iVar0) && !unk_0x36CEFBE9B745A58D(iParam0))
	{
		Global_19B04.f_932.f_21B.f_126[iVar0] = unk_0x27C402B01C926499(iParam0);
	}
}

void func_171(var uParam0, int iParam1)//Position - 0xD064
{
	int iVar0;
	vector3 vVar1;
	var uVar2;
	int iVar3;
	
	*uParam0 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
	uParam0->f_3 = unk_0x349C94FFF43E2979(unk_0xBC25C936A095B5BA());
	uParam0->f_5 = unk_0xADC5538B9DCA2177(unk_0xBC25C936A095B5BA());
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		uParam0->f_4 = unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F());
	}
	if (SYSTEM::VDIST(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (SYSTEM::VDIST(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.472f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (unk_0xB731B8C5BCE89836(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (unk_0xFA30DFD0084E92FE(Global_1163A, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (unk_0xFA30DFD0084E92FE(Global_1163A, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (unk_0xFA30DFD0084E92FE(Global_1163A, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (unk_0xFA30DFD0084E92FE(Global_1163A, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA()) == unk_0x5E29F9399E0829A3(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, true, 0) || unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, true, 0))
	{
		*uParam0 = { -601.59f, 2099.197f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.376f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (SYSTEM::VDIST(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.932f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (SYSTEM::VDIST(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.93f, 2594.153f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 1)
	{
		if (func_174(&iVar0))
		{
			if (func_173(iVar0, &vVar1, &uVar2))
			{
				vVar1.z = (vVar1.z + 1f);
				*uParam0 = { vVar1 };
				uParam0->f_3 = uVar2;
			}
		}
		else if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, true, 0))
		{
			iVar3 = func_20();
			if (iVar3 == 0)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar3 == 1)
			{
				*uParam0 = { -68.5531f, -1824.377f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar3 == 2)
			{
				*uParam0 = { -220.8189f, -1162.302f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, true, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, true, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, true, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_172(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_172(vector3 vParam0, char* sParam1, vector3 vParam2)//Position - 0xD5BF
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xB47B61546691E6E3(vParam0))
	{
		iVar0 = unk_0x5E29F9399E0829A3(vParam2, sParam1);
		if (!unk_0xBF697FA7422C0621(iVar0))
		{
			return 0;
		}
		iVar1 = unk_0x77E1B0C83C9CC9DD(vParam0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_173(int iParam0, var uParam1, var uParam2)//Position - 0xD603
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
		
		case 1:
			*uParam1 = { 129.8484f, -1716.528f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
		
		case 2:
			*uParam1 = { -1296.913f, -1120.999f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
		
		case 3:
			*uParam1 = { 1938.028f, 3718.736f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
		
		case 4:
			*uParam1 = { 1197.866f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
		
		case 5:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
		
		case 6:
			*uParam1 = { -287.7696f, 6238.081f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
		
		case 7:
			*uParam1 = { 99.2876f, -1395.16f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
		
		case 8:
			*uParam1 = { 1679.445f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
		
		case 9:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
		
		case 10:
			*uParam1 = { -1088.054f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
		
		case 11:
			*uParam1 = { 1194.163f, 2695.644f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
		
		case 12:
			*uParam1 = { -821.2829f, -1088.027f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
		
		case 13:
			*uParam1 = { -3.3416f, 6521.303f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
		
		case 14:
			*uParam1 = { -1208.417f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
		
		case 15:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
		
		case 16:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
		
		case 17:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
		
		case 18:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
		
		case 19:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
		
		case 20:
			*uParam1 = { -1461.355f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
		
		case 21:
			*uParam1 = { -1347.739f, -1278.573f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
		
		case 22:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
		
		case 23:
			*uParam1 = { 1858.774f, 3742.393f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
		
		case 24:
			*uParam1 = { -286.3272f, 6202.802f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
		
		case 25:
			*uParam1 = { -1161.596f, -1417.7f, 3.712f };
			*uParam2 = 246.9161f;
			break;
		
		case 26:
			*uParam1 = { 1308.952f, -1660.611f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
		
		case 27:
			*uParam1 = { -3161.585f, 1074.214f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
		
		case 28:
			*uParam1 = { 28.423f, -1110.814f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
		
		case 29:
			*uParam1 = { 1704.966f, 3749.709f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
		
		case 30:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
		
		case 31:
			*uParam1 = { 837.7854f, -1017.963f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
		
		case 32:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
		
		case 33:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
		
		case 34:
			*uParam1 = { -1323.06f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
		
		case 35:
			*uParam1 = { -1106.102f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
		
		case 36:
			*uParam1 = { -3157.932f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
		
		case 37:
			*uParam1 = { 2562.882f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
		
		case 38:
			*uParam1 = { 822.48f, -2142.875f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
		
		case 39:
			*uParam1 = { -1137.053f, -1993.916f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
		
		case 40:
			*uParam1 = { 717.8107f, -1084.081f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
		
		case 41:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
		
		case 42:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
		
		case 43:
			*uParam1 = { 1201.709f, 2664.813f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
		
		case 44:
			*uParam1 = { -200.1521f, -1297.502f, 30.296f };
			*uParam2 = 269.0687f;
			break;
		
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 48:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_8(*uParam1, 0f, 0f, 0f, 0);
}

int func_174(var uParam0)//Position - 0xDCCE
{
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (func_195())
		{
			*uParam0 = func_180(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false), 6, -1, 0, 1, -1);
			if (func_179(*uParam0) && !func_175(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_175(int iParam0)//Position - 0xDD29
{
	return func_176(iParam0, 0, 1);
}

int func_176(int iParam0, int iParam1, bool bParam2)//Position - 0xDD39
{
	if (bParam2)
	{
		return unk_0xFA30DFD0084E92FE(Global_16B4F.f_531[iParam0], iParam1);
	}
	else if (unk_0x7AF0088ABFA713B6())
	{
		if (func_178() == 0)
		{
			return unk_0xFA30DFD0084E92FE(func_156(func_177(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xFA30DFD0084E92FE(Global_19B04.f_29C[iParam0], iParam1);
	}
	return 0;
}

int func_177(int iParam0)//Position - 0xDD99
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

int func_178()//Position - 0xE08D
{
	return Global_62BD;
}

int func_179(int iParam0)//Position - 0xE098
{
	return func_176(iParam0, 5, 1);
}

int func_180(vector3 vParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)//Position - 0xE0A8
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 48)
	{
		if (iParam1 == 6 || iParam1 == func_194(iVar0))
		{
			if (!bParam3 || func_193(iVar0))
			{
				fVar1 = unk_0xF0F2FC9DE291567F(vParam0, func_181(iVar0, 0), true);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam2) || iParam2 == -1)) && (iParam4 || iVar0 != 21)) && iVar0 != iParam5)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_181(int iParam0, bool bParam1)//Position - 0xE14A
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
		
		case 45:
			return func_192(Global_1732A);
			break;
		
		case 46:
			if (Global_183F8F != func_191())
			{
				if (func_190(Global_183F8F))
				{
					return func_183(2, 2);
				}
				else if (func_182(Global_183F8F))
				{
					return func_183(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 47:
			return 510.1f, 4749.5f, -69f;
			break;
		
		case 48:
			return -1422.197f, -3015.803f, -79.1603f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_182(int iParam0)//Position - 0xE704
{
	if (iParam0 != func_191())
	{
		if ((unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 0) || unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 1)) || unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_183(int iParam0, int iParam1)//Position - 0xE762
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar1 = { 1000000f, 1000000f, 1000000f };
	if (Global_183F8F != func_191())
	{
		if (iParam1 == 3)
		{
			if (func_184(iParam0, 1, &vVar0, 0, 0))
			{
				vVar1 = { vVar0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (unk_0xFA30DFD0084E92FE(Global_18402B[Global_183F8F /*770*/].f_111.f_F4, 4))
			{
				if (func_184(iParam0, 1, &vVar0, 0, 0))
				{
					vVar1 = { vVar0 };
				}
			}
			else if (unk_0xFA30DFD0084E92FE(Global_18402B[Global_183F8F /*770*/].f_111.f_F4, 5))
			{
				if (func_184(iParam0, 2, &vVar0, 0, 0))
				{
					vVar1 = { vVar0 };
				}
			}
		}
	}
	return vVar1;
}

int func_184(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)//Position - 0xE810
{
	struct<4> Var0;
	vector3 vVar1;
	struct<4> Var2;
	vector3 vVar3;
	
	if (!func_189(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_189(iParam1, &vVar1))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var2 = { func_187(iParam0) };
	}
	else
	{
		Var2 = { func_186(iParam0) };
	}
	vVar3 = { Var2 - Var0 };
	vVar3 = { func_185(vVar3, -Var0.f_3.f_2) };
	vVar3 = { func_185(vVar3, vVar1.f_3.f_2) };
	*uParam2 = { unk_0x89D97EB4FAE4A574(vVar1, 0f, vVar3) };
	uParam2->f_3 = { Var2.f_3 };
	return 1;
}

Vector3 func_185(vector3 vParam0, float fParam1)//Position - 0xE8A5
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = SYSTEM::SIN(fParam1);
	fVar2 = SYSTEM::COS(fParam1);
	vVar0.x = ((vParam0.x * fVar2) - (vParam0.y * fVar1));
	vVar0.y = ((vParam0.x * fVar1) + (vParam0.y * fVar2));
	vVar0.z = vParam0.z;
	return vVar0;
}

struct<6> func_186(int iParam0)//Position - 0xE8E9
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 1:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 2:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 3:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 4:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 5:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 6:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 7:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 8:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
	}
	return Var0;
}

struct<6> func_187(int iParam0)//Position - 0xEA6D
{
	return func_188(iParam0);
}

struct<6> func_188(int iParam0)//Position - 0xEA7B
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1105.22f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			Var0 = { 1104.105f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 19:
			Var0 = { 1105.22f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 20:
			Var0 = { 1104.105f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 2:
			Var0 = { 1102f, -3011.925f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { 1103f, -3010f, -38.125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { 1103.213f, -3013.483f, -39.03f };
			Var0.f_3 = { 0f, 0f, 31.32f };
			break;
		
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101.408f, -3012.32f, -38.45339f };
			break;
		
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103.037f, -3012.318f, -39.99874f };
			break;
		
		case 7:
			Var0 = { 1105.645f, -3012.04f, -39.542f };
			Var0.f_3 = { 0f, 0f, -86.04f };
			break;
		
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104.063f, -3012.368f, -39.99875f };
			break;
		
		case 9:
			Var0 = { 1105.665f, -3012.334f, -38.50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 10:
			Var0 = { 1102.504f, -3012.35f, -39.341f };
			Var0.f_3 = { 0f, 0f, -96.48f };
			break;
		
		case 11:
			Var0 = { 1102.928f, -3012.693f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 12:
			Var0 = { 1102.942f, -3011.315f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 61:
			Var0 = { 1101.994f, -3012.878f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 62:
			Var0 = { 1103.152f, -3013.032f, -38.24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 13:
			Var0 = { 1102.465f, -3009.515f, -39.341f };
			Var0.f_3 = { 0f, 0f, -12.96f };
			break;
		
		case 14:
			Var0 = { 1102.917f, -3009.525f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 15:
			Var0 = { 1102.922f, -3010.887f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 63:
			Var0 = { 1101.682f, -3009.227f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { 1102.453f, -3008.51f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 16:
			Var0 = { 1104.684f, -3009.561f, -39.341f };
			Var0.f_3 = { 0f, 0f, 169.56f };
			break;
		
		case 17:
			Var0 = { 1104.34f, -3008.698f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 18:
			Var0 = { 1104.344f, -3009.618f, -37.98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 65:
			Var0 = { 1105.459f, -3009.793f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 66:
			Var0 = { 1104.783f, -3010.433f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 44:
			Var0 = { 1104.025f, -3007.316f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 21:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 22:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 23:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 24:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 25:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 26:
			Var0 = { 1102.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 27:
			Var0 = { 1102.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 28:
			Var0 = { 1105.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 29:
			Var0 = { 1105.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 30:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 31:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 32:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 33:
			Var0 = { 1102.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 34:
			Var0 = { 1102.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 35:
			Var0 = { 1105.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 36:
			Var0 = { 1105.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 37:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 38:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 39:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
		
		case 40:
			Var0 = { 1102.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 41:
			Var0 = { 1102.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 42:
			Var0 = { 1105.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 43:
			Var0 = { 1105.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 45:
			Var0 = { 1101f, -3011.9f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 46:
			Var0 = { 1102f, -3010f, -38.115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 47:
			Var0 = { 1105.174f, -3004.16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 48:
			Var0 = { 1105.175f, -3005.818f, -37.91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 49:
			Var0 = { 1106.6f, -3000.847f, -39.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 50:
			Var0 = { 1106.601f, -3002.171f, -37.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 51:
			Var0 = { 1101.95f, -3011.9f, -39.2f };
			Var0.f_3 = { 0f, 0f, 49.5f };
			break;
		
		case 52:
			Var0 = { 1101.95f, -3010f, -39.2f };
			Var0.f_3 = { 0f, 0f, 130.32f };
			break;
		
		case 53:
			Var0 = { 1105.16f, -3009.06f, -39.2f };
			Var0.f_3 = { 0f, 0f, -44.64f };
			break;
		
		case 54:
			Var0 = { 1102.476f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 55:
			Var0 = { 1099f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 56:
			Var0 = { 1103.593f, -3008.27f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 57:
			Var0 = { 1103.565f, -3014f, -39.988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 58:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 59:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 60:
			Var0 = { 1103.55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 67:
			Var0 = { 1103.55f, -3013.762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 68:
			Var0 = { 1103.55f, -3006.186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103.6f, -3013.933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_189(int iParam0, var uParam1)//Position - 0xF542
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

int func_190(int iParam0)//Position - 0xF5C4
{
	if (iParam0 != func_191())
	{
		if ((unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 3) || unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 4)) || unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 5))
		{
			return 1;
		}
	}
	return 0;
}

int func_191()//Position - 0xF622
{
	return -1;
}

Vector3 func_192(int iParam0)//Position - 0xF62B
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974.9542f, -3000.091f, -35f;
			break;
		
		case 6:
			return -1586.36f, -566.6f, 106.17f;
			break;
		
		case 7:
			return -1389.87f, -465.17f, 82.68f;
			break;
		
		case 8:
			return -145.81f, -590.2f, 171.13f;
			break;
		
		case 9:
			return -62.49f, -823.55f, 288.74f;
			break;
		
		case 4:
			return 1102.515f, -3158.888f, -38.5186f;
			break;
		
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
			break;
		
		case 10:
			return 1103.562f, -3000f, -40f;
			break;
		
		case 11:
			return 938.3077f, -3196.112f, -100f;
			break;
		
		case 12:
			return -1266.802f, -3014.836f, -49.4895f;
			break;
		
		case 13:
			return 520.0001f, 4750f, -70f;
			break;
		
		case 14:
			return 345.0041f, 4842.001f, -59.9997f;
			break;
		
		case 15:
			return -1604.664f, -3012.583f, -79.9999f;
			break;
		
		case 16:
			return -1421.015f, -3012.587f, -80f;
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_193(int iParam0)//Position - 0xF7FE
{
	return func_176(iParam0, 0, 0);
}

int func_194(int iParam0)//Position - 0xF80E
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

bool func_195()//Position - 0xFAA8
{
	return Global_16B4F.f_141 > 0;
}

var func_196()//Position - 0xFAB9
{
	var uVar0;
	
	func_206(&uVar0, unk_0xF40D00CD7B81C0A8());
	func_205(&uVar0, unk_0x7E09057438B9D216());
	func_204(&uVar0, unk_0x6E06C0DB9B43570D());
	func_199(&uVar0, unk_0xBE14F159908E4EE5());
	func_198(&uVar0, unk_0xDD6A91E47ED4D0CF());
	func_197(&uVar0, unk_0x4EEB3860BFC44B78());
	return uVar0;
}

void func_197(var uParam0, int iParam1)//Position - 0xFAFF
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

void func_198(var uParam0, int iParam1)//Position - 0xFB85
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_199(var uParam0, int iParam1)//Position - 0xFBB8
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_203(*uParam0);
	iVar1 = func_201(*uParam0);
	if (iParam1 < 1 || iParam1 > func_200(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_200(int iParam0, int iParam1)//Position - 0xFC09
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

var func_201(int iParam0)//Position - 0xFCAB
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_202(unk_0xFA30DFD0084E92FE(iParam0, 31), -1, 1)) + 2011;
}

int func_202(bool bParam0, int iParam1, int iParam2)//Position - 0xFCD0
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_203(var uParam0)//Position - 0xFCE7
{
	return uParam0 & 15;
}

void func_204(var uParam0, int iParam1)//Position - 0xFCF4
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_205(var uParam0, int iParam1)//Position - 0xFD2E
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_206(var uParam0, int iParam1)//Position - 0xFD69
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_207(char* sParam0)//Position - 0xFDA5
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

struct<2> func_208(int iParam0)//Position - 0xFDFB
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

int func_209(char* sParam0, int iParam1)//Position - 0x10249
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = unk_0x56BEECB328B6D29D(sParam0);
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < 63)
	{
		iVar0 = iVar3;
		func_210(iVar0, &sVar1);
		if (unk_0x56BEECB328B6D29D(sVar1) == iVar2)
		{
			return iVar0;
		}
		iVar3++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

void func_210(int iParam0, var uParam1)//Position - 0x10292
{
	switch (iParam0)
	{
		case 0:
			func_211(uParam1, "Abigail1", func_213(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_212(iParam0), 1, 0);
			break;
		
		case 1:
			func_211(uParam1, "Abigail2", func_213(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_212(iParam0), 1, 0);
			break;
		
		case 2:
			func_211(uParam1, "Barry1", func_213(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_212(iParam0), 1, 0);
			break;
		
		case 3:
			func_211(uParam1, "Barry2", func_213(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_212(iParam0), 1, 1);
			break;
		
		case 4:
			func_211(uParam1, "Barry3", func_213(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_212(iParam0), 0, 0);
			break;
		
		case 5:
			func_211(uParam1, "Barry3A", func_213(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 6:
			func_211(uParam1, "Barry3C", func_213(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 7:
			func_211(uParam1, "Barry4", func_213(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_212(iParam0), 0, 0);
			break;
		
		case 8:
			func_211(uParam1, "Dreyfuss1", func_213(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_212(iParam0), 0, 0);
			break;
		
		case 9:
			func_211(uParam1, "Epsilon1", func_213(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_212(iParam0), 0, 0);
			break;
		
		case 10:
			func_211(uParam1, "Epsilon2", func_213(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_212(iParam0), 1, 0);
			break;
		
		case 11:
			func_211(uParam1, "Epsilon3", func_213(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_212(iParam0), 0, 0);
			break;
		
		case 12:
			func_211(uParam1, "Epsilon4", func_213(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_212(iParam0), 0, 0);
			break;
		
		case 13:
			func_211(uParam1, "Epsilon5", func_213(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_212(iParam0), 1, 0);
			break;
		
		case 14:
			func_211(uParam1, "Epsilon6", func_213(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 15:
			func_211(uParam1, "Epsilon7", func_213(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_212(iParam0), 0, 0);
			break;
		
		case 16:
			func_211(uParam1, "Epsilon8", func_213(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_212(iParam0), 1, 0);
			break;
		
		case 17:
			func_211(uParam1, "Extreme1", func_213(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 18:
			func_211(uParam1, "Extreme2", func_213(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 19:
			func_211(uParam1, "Extreme3", func_213(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 20:
			func_211(uParam1, "Extreme4", func_213(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_212(iParam0), 0, 0);
			break;
		
		case 21:
			func_211(uParam1, "Fanatic1", func_213(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_212(iParam0), 1, 0);
			break;
		
		case 22:
			func_211(uParam1, "Fanatic2", func_213(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_212(iParam0), 1, 0);
			break;
		
		case 23:
			func_211(uParam1, "Fanatic3", func_213(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_212(iParam0), 0, 1);
			break;
		
		case 24:
			func_211(uParam1, "Hao1", func_213(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_212(iParam0), 0, 1);
			break;
		
		case 25:
			func_211(uParam1, "Hunting1", func_213(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 26:
			func_211(uParam1, "Hunting2", func_213(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 27:
			func_211(uParam1, "Josh1", func_213(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_212(iParam0), 1, 0);
			break;
		
		case 28:
			func_211(uParam1, "Josh2", func_213(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_212(iParam0), 1, 1);
			break;
		
		case 29:
			func_211(uParam1, "Josh3", func_213(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_212(iParam0), 1, 1);
			break;
		
		case 30:
			func_211(uParam1, "Josh4", func_213(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_212(iParam0), 1, 0);
			break;
		
		case 31:
			func_211(uParam1, "Maude1", func_213(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 32:
			func_211(uParam1, "Minute1", func_213(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 33:
			func_211(uParam1, "Minute2", func_213(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 34:
			func_211(uParam1, "Minute3", func_213(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 35:
			func_211(uParam1, "MrsPhilips1", func_213(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_212(iParam0), 0, 0);
			break;
		
		case 36:
			func_211(uParam1, "MrsPhilips2", func_213(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_212(iParam0), 0, 0);
			break;
		
		case 37:
			func_211(uParam1, "Nigel1", func_213(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_212(iParam0), 1, 0);
			break;
		
		case 38:
			func_211(uParam1, "Nigel1A", func_213(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_212(iParam0), 1, 1);
			break;
		
		case 39:
			func_211(uParam1, "Nigel1B", func_213(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_212(iParam0), 1, 1);
			break;
		
		case 40:
			func_211(uParam1, "Nigel1C", func_213(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_212(iParam0), 1, 1);
			break;
		
		case 41:
			func_211(uParam1, "Nigel1D", func_213(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_212(iParam0), 1, 1);
			break;
		
		case 42:
			func_211(uParam1, "Nigel2", func_213(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_212(iParam0), 1, 1);
			break;
		
		case 43:
			func_211(uParam1, "Nigel3", func_213(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_212(iParam0), 1, 1);
			break;
		
		case 44:
			func_211(uParam1, "Omega1", func_213(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_212(iParam0), 0, 0);
			break;
		
		case 45:
			func_211(uParam1, "Omega2", func_213(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_212(iParam0), 0, 0);
			break;
		
		case 46:
			func_211(uParam1, "Paparazzo1", func_213(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 47:
			func_211(uParam1, "Paparazzo2", func_213(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 48:
			func_211(uParam1, "Paparazzo3", func_213(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_212(iParam0), 0, 0);
			break;
		
		case 49:
			func_211(uParam1, "Paparazzo3A", func_213(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 50:
			func_211(uParam1, "Paparazzo3B", func_213(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 51:
			func_211(uParam1, "Paparazzo4", func_213(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_212(iParam0), 0, 0);
			break;
		
		case 52:
			func_211(uParam1, "Rampage1", func_213(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_212(iParam0), 0, 0);
			break;
		
		case 54:
			func_211(uParam1, "Rampage3", func_213(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_212(iParam0), 1, 0);
			break;
		
		case 55:
			func_211(uParam1, "Rampage4", func_213(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_212(iParam0), 1, 0);
			break;
		
		case 56:
			func_211(uParam1, "Rampage5", func_213(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_212(iParam0), 0, 0);
			break;
		
		case 53:
			func_211(uParam1, "Rampage2", func_213(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_212(iParam0), 1, 0);
			break;
		
		case 57:
			func_211(uParam1, "TheLastOne", func_213(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 58:
			func_211(uParam1, "Tonya1", func_213(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 59:
			func_211(uParam1, "Tonya2", func_213(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 60:
			func_211(uParam1, "Tonya3", func_213(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 61:
			func_211(uParam1, "Tonya4", func_213(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		case 62:
			func_211(uParam1, "Tonya5", func_213(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_212(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_211(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0x11447
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

int func_212(int iParam0)//Position - 0x114D8
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

struct<2> func_213(int iParam0)//Position - 0x1181E
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_208(iParam0) };
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

int func_214(int iParam0)//Position - 0x11855
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_215(Global_19B04.f_2360.f_63.f_CD[10]);
			break;
		
		case 74:
		case 75:
			return func_215(Global_19B04.f_2360.f_63.f_CD[8]);
			break;
		
		case 84:
		case 85:
			return func_215(Global_19B04.f_2360.f_63.f_CD[11]);
			break;
		
		case 90:
			return func_215(Global_19B04.f_2360.f_63.f_CD[7]);
			break;
		
		case 93:
			return func_215(Global_19B04.f_2360.f_63.f_CD[9]);
			break;
	}
	return 0;
}

int func_215(int iParam0)//Position - 0x11911
{
	switch (iParam0)
	{
		case 1:
		case 3:
		case 5:
		case 6:
		case 8:
			return 0;
			break;
		
		case 2:
		case 4:
		case 7:
		case 9:
			return 1;
			break;
	}
	return -1;
}

int func_216(char* sParam0, bool bParam1)//Position - 0x11965
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x56BEECB328B6D29D(sParam0);
	iVar1 = func_217(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_217(int iParam0, bool bParam1)//Position - 0x1198F
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

void func_218(bool bParam0)//Position - 0x119C5
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

void func_219(int iParam0, int iParam1, int iParam2)//Position - 0x11C47
{
	if (func_265() && func_35())
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
		func_220(0);
	}
}

void func_220(int iParam0)//Position - 0x11D0B
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

void func_221()//Position - 0x11D34
{
	if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), vLocal_119, true) < 500f)
	{
		if (iLocal_89 == 0)
		{
			if (!unk_0x724D816EA203A79E(iLocal_36[0]))
			{
				unk_0xF243B7A14FCFD0F4(joaat("sandking"));
				if (unk_0xD6513D668481290A(joaat("sandking")))
				{
					iLocal_36[0] = unk_0x61C05BF08A1E0EFE(joaat("sandking"), 1754.951f, 3290.994f, 40.1176f, 182.397f, 1, 1, 0);
					unk_0x346478B12F69D4E3(iLocal_36[0], true);
					unk_0x2CA123B0622F495C(joaat("sandking"));
				}
			}
			if (unk_0x724D816EA203A79E(iLocal_36[0]))
			{
				iLocal_89 = 1;
			}
		}
	}
	else if (iLocal_89 == 1)
	{
		if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), vLocal_119, true) > 550f)
		{
			if (unk_0x724D816EA203A79E(iLocal_36[0]))
			{
				unk_0xCF6040807CC0E4A5(&(iLocal_36[0]));
			}
			iLocal_89 = 0;
		}
	}
}

void func_222()//Position - 0x11E04
{
	if (iLocal_54 > 0)
	{
		func_118();
		func_228();
		func_221();
		if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) != 4)
		{
			unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 4, 0);
			unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
		}
		func_227();
		func_226();
		iLocal_55 = 0;
		while (iLocal_55 <= 12)
		{
			if (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_34, 0))
			{
				func_225(iLocal_32[iLocal_55], &(Local_53[iLocal_55 /*8*/]), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1);
			}
			else
			{
				func_117(&(Local_53[iLocal_55 /*8*/]));
			}
			iLocal_55++;
		}
	}
	if (iLocal_54 == 0)
	{
		if (iLocal_75 == 1)
		{
			iLocal_76 = 0;
			func_33();
			iLocal_75 = 0;
		}
		iLocal_78 = 0;
		iLocal_81[0] = 0;
		iLocal_81[1] = 0;
		iLocal_82 = 0;
		iLocal_83[0] = 0;
		iLocal_83[1] = 0;
		iLocal_84 = 0;
		iLocal_89 = 0;
		iLocal_90[0] = 0;
		iLocal_95 = 0;
		iLocal_96 = 0;
		iLocal_102 = 0;
		iLocal_103 = 0;
		iLocal_104 = 0;
		iLocal_105 = 0;
		iLocal_106 = 0;
		iLocal_107 = 0;
		iLocal_62 = unk_0x105601648511CC64();
		iLocal_67 = unk_0x105601648511CC64();
		if (unk_0x724D816EA203A79E(iLocal_34))
		{
			unk_0x346478B12F69D4E3(iLocal_34, false);
		}
		func_144(1, "STAGE_ESCAPE_MILITARY", 0, 0, 0, 1);
		if (unk_0x17FAADF9916EF741())
		{
			if (!func_35())
			{
				unk_0x8B6B50EADA01F251(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true));
			}
			func_219(iLocal_34, -1, 1);
		}
		if (!unk_0x726D9204B160D23E())
		{
			unk_0x829FA4611BD56B44(800);
		}
		if (!unk_0x144E80F5C46A6B75("DH_P_2B_ENTER_CHOPPER"))
		{
			unk_0xD6423910AAD8A379("DH_P_2B_ENTER_CHOPPER");
		}
		if (!unk_0x144E80F5C46A6B75("DH_P_2B_ENEMY_CHOPPERS_ARRIVE"))
		{
			unk_0xD6423910AAD8A379("DH_P_2B_ENEMY_CHOPPERS_ARRIVE");
		}
		func_224(602, 0);
		unk_0x9332FDC92BD28643(0);
		if (unk_0x724D816EA203A79E(iLocal_34))
		{
			if (unk_0xE59B7F5A03335350(iLocal_34, 0))
			{
				func_223(iLocal_34, -1);
			}
		}
		unk_0x1D1C393C7689E5A6(10f, 5f, 4);
		iLocal_76 = 1;
		iLocal_54 = 1;
	}
	if (iLocal_54 == 1)
	{
		if (iLocal_83[0] == 1)
		{
			if (unk_0x2DA8CA50A72528FB(uLocal_47[0]))
			{
				unk_0x07B8ECB35A4ED3AC(&(uLocal_47[0]));
			}
			if (unk_0x724D816EA203A79E(iLocal_35[0]))
			{
				unk_0x38E412DB4A45B900(iLocal_35[0], 0);
			}
			if (unk_0x144E80F5C46A6B75("DH_P_2B_ENEMY_CHOPPERS_ARRIVE"))
			{
				unk_0xC1300D0F3A74E20B("DH_P_2B_ENEMY_CHOPPERS_ARRIVE");
			}
			func_127(1, 602);
			func_224(600, 0);
			if (unk_0x724D816EA203A79E(iLocal_34))
			{
				if (unk_0xE59B7F5A03335350(iLocal_34, 0))
				{
					if (unk_0x0C265B3C448E6954(iLocal_34, 1721.001f, 3264.248f, 38.40064f, 1765.509f, 3276.518f, 46.05385f, 48.25f, 0, true, 0))
					{
						if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_34, 0))
						{
							unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 0, 0);
							unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
							iLocal_54 = 0;
							iLocal_28 = 5;
						}
						else
						{
							unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 0, 0);
							unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
							func_29();
						}
					}
					else
					{
						iLocal_54 = 0;
						iLocal_28 = 4;
					}
				}
			}
		}
		else if (iLocal_84 == 0)
		{
			if (unk_0x724D816EA203A79E(iLocal_34))
			{
				if (unk_0xE59B7F5A03335350(iLocal_34, 0))
				{
					if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_34, 0))
					{
						if (unk_0x105601648511CC64() > iLocal_62 + 10000)
						{
							if (!unk_0x4B8E3E5901E59EB8())
							{
								func_123("DP_GOD5", 7500, 1);
								iLocal_84 = 1;
							}
						}
					}
				}
			}
		}
	}
}

void func_223(int iParam0, int iParam1)//Position - 0x120E6
{
	Global_DAAA = iParam0;
	Global_DAAB = iParam1;
}

void func_224(int iParam0, bool bParam1)//Position - 0x120F8
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

int func_225(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x12142
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

void func_226()//Position - 0x12319
{
	iLocal_37 = unk_0x39827CF9BEAB804C(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 300f, joaat("lazer"), 4);
	iLocal_38 = unk_0x39827CF9BEAB804C(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 300f, joaat("lazer"), 16386);
	if (unk_0x724D816EA203A79E(iLocal_37) && unk_0x2A348A3A98B80B13(iLocal_37))
	{
		if (!unk_0x2DA8CA50A72528FB(iLocal_48))
		{
			iLocal_48 = unk_0x511FE22BCF5353CD(iLocal_37);
			unk_0xF9C2945DB5BAB4BF(iLocal_48, false);
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_38) && unk_0x2A348A3A98B80B13(iLocal_38))
	{
		if (!unk_0x2DA8CA50A72528FB(iLocal_49))
		{
			iLocal_49 = unk_0x511FE22BCF5353CD(iLocal_38);
			unk_0xF9C2945DB5BAB4BF(iLocal_49, false);
		}
	}
}

void func_227()//Position - 0x123B1
{
	if (iLocal_28 == 3)
	{
		if (unk_0x724D816EA203A79E(iLocal_34))
		{
			if (unk_0xE59B7F5A03335350(iLocal_34, 0))
			{
				if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_34, 0))
				{
					vLocal_121 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
					if (unk_0x724D816EA203A79E(iLocal_35[0]))
					{
						if (unk_0xE59B7F5A03335350(iLocal_35[0], 0))
						{
							if (unk_0x724D816EA203A79E(iLocal_31[0]))
							{
								if (!unk_0x36CEFBE9B745A58D(iLocal_31[0]))
								{
									if (func_2(unk_0xBC25C936A095B5BA(), iLocal_31[0], 1) < 600f)
									{
										if (unk_0xF0F2FC9DE291567F(vLocal_121, -75.8f, -819.9f, 326f, true) > 1600f && unk_0xF0F2FC9DE291567F(vLocal_121, -2159f, 3067f, 33f, true) < 1000f)
										{
											if (vLocal_121.z > 70f)
											{
												if (iLocal_30 != 2)
												{
													iLocal_90[0] = 1;
													iLocal_30 = 2;
												}
											}
											else if (iLocal_30 != 1)
											{
												iLocal_90[0] = 1;
												iLocal_30 = 1;
											}
											if (iLocal_95 == 1)
											{
												if (iLocal_96 == 0)
												{
													if (!func_124())
													{
														if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
														{
															func_143(&uLocal_198, 4, 0, "PilotDispatch", 0, 1);
															func_143(&uLocal_198, 5, 0, "PilotDispatch2", 0, 1);
															if (func_142(&uLocal_198, "DP2BAUD", "DP2B_CHAT54", 7, 0, 0, 0))
															{
																iLocal_96 = 1;
															}
														}
													}
												}
											}
										}
										else
										{
											if (unk_0xF0F2FC9DE291567F(vLocal_121, -75.8f, -819.9f, 326f, true) < 1600f)
											{
												if (iLocal_30 != 3)
												{
													iLocal_90[0] = 1;
													iLocal_30 = 3;
												}
												if (iLocal_95 == 0)
												{
													if (!func_124())
													{
														if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
														{
															func_143(&uLocal_198, 4, 0, "PilotDispatch", 0, 1);
															func_143(&uLocal_198, 5, 0, "PilotDispatch2", 0, 1);
															if (func_142(&uLocal_198, "DP2BAUD", "DP2B_CHAT53", 7, 0, 0, 0))
															{
																iLocal_95 = 1;
															}
														}
													}
												}
											}
											if (unk_0xF0F2FC9DE291567F(vLocal_121, -2159f, 3067f, 33f, true) > 1000f)
											{
												if (iLocal_30 != 3)
												{
													iLocal_90[0] = 1;
													iLocal_30 = 3;
												}
											}
										}
									}
									else if (iLocal_30 != 4)
									{
										iLocal_90[0] = 1;
										iLocal_30 = 4;
									}
								}
							}
						}
					}
				}
				else if (unk_0xF0F2FC9DE291567F(vLocal_121, -75.8f, -819.9f, 326f, true) > 1600f)
				{
					if (iLocal_30 != 0)
					{
						iLocal_90[0] = 1;
						iLocal_30 = 0;
					}
					if (iLocal_95 == 1)
					{
						if (iLocal_96 == 0)
						{
							if (!func_124())
							{
								if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
								{
									func_143(&uLocal_198, 4, 0, "PilotDispatch", 0, 1);
									func_143(&uLocal_198, 5, 0, "PilotDispatch2", 0, 1);
									if (func_142(&uLocal_198, "DP2BAUD", "DP2B_CHAT54", 7, 0, 0, 0))
									{
										iLocal_96 = 1;
									}
								}
							}
						}
					}
				}
				else
				{
					if (iLocal_30 != 3)
					{
						iLocal_90[0] = 1;
						iLocal_30 = 3;
					}
					if (iLocal_95 == 0)
					{
						if (!func_124())
						{
							if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
							{
								func_143(&uLocal_198, 4, 0, "PilotDispatch", 0, 1);
								func_143(&uLocal_198, 5, 0, "PilotDispatch2", 0, 1);
								if (func_142(&uLocal_198, "DP2BAUD", "DP2B_CHAT53", 7, 0, 0, 0))
								{
									iLocal_95 = 1;
								}
							}
						}
					}
				}
			}
		}
	}
	if (iLocal_81[0] == 0)
	{
		if (iLocal_28 == 2)
		{
			if (unk_0x724D816EA203A79E(iLocal_35[0]))
			{
				if (unk_0xE59B7F5A03335350(iLocal_35[0], 0))
				{
					if (unk_0x724D816EA203A79E(iLocal_31[0]))
					{
						if (!unk_0x36CEFBE9B745A58D(iLocal_31[0]))
						{
							if (func_2(unk_0xBC25C936A095B5BA(), iLocal_31[0], 1) < 200f)
							{
								vLocal_120 = { unk_0x541C2AEF053615BC(iLocal_35[0], true) };
								unk_0xA4E856A8CD53B8DF(iLocal_31[0]);
								unk_0xE95574194EEDAEF7(iLocal_31[0], vLocal_120, 10f, 0, 0);
								unk_0xB90F3BE2A1EF63DB(iLocal_31[0], 250f, 0);
								iLocal_81[0] = 1;
							}
						}
					}
				}
			}
		}
		if (iLocal_28 == 3)
		{
			if (unk_0x724D816EA203A79E(iLocal_35[0]))
			{
				if (unk_0xE59B7F5A03335350(iLocal_35[0], 0))
				{
					if (unk_0x724D816EA203A79E(iLocal_31[0]))
					{
						if (!unk_0x36CEFBE9B745A58D(iLocal_31[0]))
						{
							if (!unk_0x2DA8CA50A72528FB(uLocal_47[0]))
							{
								uLocal_47[0] = func_122(iLocal_31[0], 1, 0);
							}
							vLocal_120 = { unk_0x541C2AEF053615BC(iLocal_35[0], true) };
							unk_0xA4E856A8CD53B8DF(iLocal_31[0]);
							unk_0xC5A6DFE2B8987B17(&uLocal_367);
							if (!unk_0x62F3A07C43FFB568(iLocal_31[0], iLocal_35[0], 0))
							{
								unk_0xD179FA0466FA4FE3(0, iLocal_35[0], 20000, -1, 2f, 1, 0);
							}
							unk_0x143DD8A84CAA784C(0, iLocal_35[0], 0, 0, vLocal_120.x, vLocal_120.y, (vLocal_120.z + 20f), 4, 30f, 10f, -1f, 170, 40, -1082130432, 0);
							unk_0x143DD8A84CAA784C(0, iLocal_35[0], 0, unk_0xBC25C936A095B5BA(), 0f, 0f, 0f, 6, 40f, 20f, -1f, 170, 40, -1082130432, 0);
							unk_0x535008C596714F9E(uLocal_367);
							unk_0xA8E6405305C0D7DF(iLocal_31[0], uLocal_367);
							unk_0x02DAF06EA4F08219(&uLocal_367);
							iLocal_81[0] = 1;
						}
					}
				}
			}
		}
	}
	else if (iLocal_28 == 3)
	{
		if (unk_0x724D816EA203A79E(iLocal_35[0]))
		{
			if (unk_0xE59B7F5A03335350(iLocal_35[0], 0))
			{
				if (unk_0x724D816EA203A79E(iLocal_31[0]))
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_31[0]))
					{
						if (unk_0x62F3A07C43FFB568(iLocal_31[0], iLocal_35[0], 0))
						{
							if (unk_0x105601648511CC64() > (iLocal_67 + 90000))
							{
								if (iLocal_104 == 0)
								{
									unk_0xFC3C88E2313FA926(iLocal_31[0], 100);
									iLocal_103 = 0;
									iLocal_104 = 1;
								}
							}
							else if (unk_0x105601648511CC64() > iLocal_67 + 10000 && !unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_34, 0))
							{
								if (iLocal_104 == 0)
								{
									unk_0xFC3C88E2313FA926(iLocal_31[0], 100);
									iLocal_103 = 0;
									iLocal_104 = 1;
								}
							}
							else if (iLocal_103 == 0)
							{
								unk_0xFC3C88E2313FA926(iLocal_31[0], 0);
								iLocal_104 = 0;
								iLocal_103 = 1;
							}
							if (func_2(iLocal_35[0], unk_0xBC25C936A095B5BA(), 1) < 300f)
							{
								if (iLocal_106 == 0)
								{
									unk_0xD9584325F5E42F85(iLocal_31[0], joaat("vehicle_weapon_space_rocket"));
									unk_0xF2BA021070DE727E(iLocal_31[0], -1857128337);
									iLocal_105 = 0;
									iLocal_106 = 1;
								}
							}
							else if (iLocal_105 == 0)
							{
								unk_0xD9584325F5E42F85(iLocal_31[0], joaat("vehicle_weapon_player_buzzard"));
								unk_0xF2BA021070DE727E(iLocal_31[0], 1566631136);
								iLocal_106 = 0;
								iLocal_105 = 1;
							}
						}
					}
				}
			}
		}
		if (iLocal_82 == 0)
		{
			if (unk_0x724D816EA203A79E(iLocal_35[0]))
			{
				if (unk_0xE59B7F5A03335350(iLocal_35[0], 0))
				{
					if (unk_0x724D816EA203A79E(iLocal_31[0]))
					{
						if (!unk_0x36CEFBE9B745A58D(iLocal_31[0]))
						{
							if (unk_0x62F3A07C43FFB568(iLocal_31[0], iLocal_35[0], 0))
							{
								unk_0xFC3C88E2313FA926(iLocal_31[0], 0);
								unk_0xD9584325F5E42F85(iLocal_31[0], joaat("vehicle_weapon_space_rocket"));
								iLocal_82 = 1;
							}
						}
					}
				}
			}
		}
		switch (iLocal_30)
		{
			case 0:
				if (iLocal_90[0] == 1)
				{
					if (unk_0x724D816EA203A79E(iLocal_35[0]))
					{
						if (unk_0xE59B7F5A03335350(iLocal_35[0], 0))
						{
							if (unk_0x724D816EA203A79E(iLocal_31[0]))
							{
								if (!unk_0x36CEFBE9B745A58D(iLocal_31[0]))
								{
									unk_0x143DD8A84CAA784C(iLocal_31[0], iLocal_35[0], 0, unk_0xBC25C936A095B5BA(), 0f, 0f, 0f, 6, 20f, 20f, -1f, 15, 10, -1082130432, 0);
									iLocal_90[0] = 0;
								}
							}
						}
					}
				}
				break;
			
			case 1:
				if (iLocal_90[0] == 1)
				{
					if (unk_0x724D816EA203A79E(iLocal_35[0]))
					{
						if (unk_0xE59B7F5A03335350(iLocal_35[0], 0))
						{
							if (unk_0x724D816EA203A79E(iLocal_31[0]))
							{
								if (!unk_0x36CEFBE9B745A58D(iLocal_31[0]))
								{
									unk_0x143DD8A84CAA784C(iLocal_31[0], iLocal_35[0], 0, unk_0xBC25C936A095B5BA(), 0f, 0f, 0f, 6, 40f, 20f, -1f, 50, 20, -1082130432, 0);
									iLocal_90[0] = 0;
								}
							}
						}
					}
				}
				break;
			
			case 2:
				if (iLocal_90[0] == 1)
				{
					if (unk_0x724D816EA203A79E(iLocal_35[0]))
					{
						if (unk_0xE59B7F5A03335350(iLocal_35[0], 0))
						{
							if (unk_0x724D816EA203A79E(iLocal_31[0]))
							{
								if (!unk_0x36CEFBE9B745A58D(iLocal_31[0]))
								{
									unk_0x143DD8A84CAA784C(iLocal_31[0], iLocal_35[0], 0, unk_0xBC25C936A095B5BA(), 0f, 0f, 0f, 6, 40f, 20f, -1f, 170, 70, -1082130432, 0);
									iLocal_90[0] = 0;
								}
							}
						}
					}
				}
				break;
			
			case 3:
				if (iLocal_90[0] == 1)
				{
					if (unk_0x724D816EA203A79E(iLocal_35[0]))
					{
						if (unk_0xE59B7F5A03335350(iLocal_35[0], 0))
						{
							if (unk_0x724D816EA203A79E(iLocal_31[0]))
							{
								if (!unk_0x36CEFBE9B745A58D(iLocal_31[0]))
								{
									unk_0x143DD8A84CAA784C(iLocal_31[0], iLocal_35[0], 0, 0, unk_0xA4455714F3DCE207(iLocal_35[0], 20f, 0f, 0f), 4, 10f, 10f, unk_0x349C94FFF43E2979(iLocal_35[0]), SYSTEM::ROUND(unk_0x276BE5B3D036272C(iLocal_35[0], unk_0x541C2AEF053615BC(iLocal_35[0], true), 1, 1)), 100, -1082130432, 0);
									iLocal_90[0] = 0;
								}
							}
						}
					}
				}
				if (iLocal_102 == 0)
				{
					if (unk_0xF0F2FC9DE291567F(vLocal_121, -2159f, 3067f, 33f, true) > 1000f)
					{
						if (unk_0x724D816EA203A79E(iLocal_35[0]))
						{
							if (unk_0xE59B7F5A03335350(iLocal_35[0], 0))
							{
								if (unk_0x724D816EA203A79E(iLocal_31[0]))
								{
									if (!unk_0x36CEFBE9B745A58D(iLocal_31[0]))
									{
										unk_0x143DD8A84CAA784C(iLocal_31[0], iLocal_35[0], 0, unk_0xBC25C936A095B5BA(), 0f, 0f, 0f, 6, 20f, 20f, -1f, 170, 70, -1082130432, 0);
										iLocal_102 = 1;
									}
								}
							}
						}
					}
				}
				break;
			
			case 4:
				if (iLocal_90[0] == 1)
				{
					if (unk_0x724D816EA203A79E(iLocal_35[0]))
					{
						if (unk_0xE59B7F5A03335350(iLocal_35[0], 0))
						{
							if (unk_0x724D816EA203A79E(iLocal_31[0]))
							{
								if (!unk_0x36CEFBE9B745A58D(iLocal_31[0]))
								{
									unk_0x143DD8A84CAA784C(iLocal_31[0], iLocal_35[0], 0, unk_0xBC25C936A095B5BA(), 0f, 0f, 0f, 8, 40f, 50f, -1f, 200, 170, -1082130432, 0);
									iLocal_90[0] = 0;
								}
							}
						}
					}
				}
				break;
			}
	}
	if (unk_0x724D816EA203A79E(iLocal_31[0]))
	{
		if (unk_0x36CEFBE9B745A58D(iLocal_31[0]))
		{
			if (unk_0x2DA8CA50A72528FB(uLocal_47[0]))
			{
				unk_0x07B8ECB35A4ED3AC(&(uLocal_47[0]));
			}
			iLocal_83[0] = 1;
		}
	}
	else
	{
		if (unk_0x2DA8CA50A72528FB(uLocal_47[0]))
		{
			unk_0x07B8ECB35A4ED3AC(&(uLocal_47[0]));
		}
		iLocal_83[0] = 1;
	}
	if (unk_0x724D816EA203A79E(iLocal_35[0]))
	{
		if (!unk_0xE59B7F5A03335350(iLocal_35[0], 0))
		{
			if (unk_0x2DA8CA50A72528FB(uLocal_47[0]))
			{
				unk_0x07B8ECB35A4ED3AC(&(uLocal_47[0]));
			}
			iLocal_83[0] = 1;
		}
	}
	else
	{
		if (unk_0x2DA8CA50A72528FB(uLocal_47[0]))
		{
			unk_0x07B8ECB35A4ED3AC(&(uLocal_47[0]));
		}
		iLocal_83[0] = 1;
	}
	if (unk_0x724D816EA203A79E(iLocal_35[0]))
	{
		if (unk_0xE59B7F5A03335350(iLocal_35[0], 0))
		{
			if (unk_0x724D816EA203A79E(iLocal_31[0]))
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_31[0]))
				{
					if (unk_0x62F3A07C43FFB568(iLocal_31[0], iLocal_35[0], 0))
					{
						if (unk_0x2DA8CA50A72528FB(uLocal_47[0]))
						{
							unk_0x3F5F1772D71D5EC4(uLocal_47[0], 1f);
						}
					}
					if (func_2(unk_0xBC25C936A095B5BA(), iLocal_31[0], 1) > 600f)
					{
						if (unk_0x2DA8CA50A72528FB(uLocal_47[0]))
						{
							unk_0x07B8ECB35A4ED3AC(&(uLocal_47[0]));
						}
						iLocal_83[0] = 1;
					}
				}
			}
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_31[0]))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_31[0]))
		{
			if (unk_0x149E9368A11035DE(iLocal_31[0]))
			{
				unk_0xA4E856A8CD53B8DF(iLocal_31[0]);
				unk_0x65E471E4A2D56226(iLocal_31[0], 0, 0);
				if (unk_0x2DA8CA50A72528FB(uLocal_47[0]))
				{
					unk_0x07B8ECB35A4ED3AC(&(uLocal_47[0]));
				}
				iLocal_83[0] = 1;
			}
		}
	}
}

void func_228()//Position - 0x12EBD
{
	if (iLocal_85 == 0)
	{
		if ((((func_229(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 3, 0, 0) || unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -1601.514f, 2794.148f, 14.84222f, -1587.692f, 2806.101f, 20.29557f, 16f, 0, true, 0)) || unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -1598.278f, 2803.98f, 17.01772f, -1665.98f, 2895.398f, 34.58953f, 14.5f, 0, true, 0)) || unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -1648.554f, 2873.74f, 24.85017f, -1673.864f, 2889.698f, 38.18856f, 14.5f, 0, true, 0)) || unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -1647.446f, 2873.969f, 24.82373f, -1667.316f, 2914.302f, 39.39478f, 14.5f, 0, true, 0))
		{
			iLocal_85 = 1;
		}
	}
	if (iLocal_85 == 1)
	{
		if ((((!func_229(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 3, 0, 0) && !unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -1601.514f, 2794.148f, 14.84222f, -1587.692f, 2806.101f, 20.29557f, 16f, 0, true, 0)) && !unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -1598.278f, 2803.98f, 17.01772f, -1665.98f, 2895.398f, 34.58953f, 14.5f, 0, true, 0)) && !unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -1648.554f, 2873.74f, 24.85017f, -1673.864f, 2889.698f, 38.18856f, 14.5f, 0, true, 0)) && !unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -1647.446f, 2873.969f, 24.82373f, -1667.316f, 2914.302f, 39.39478f, 14.5f, 0, true, 0))
		{
			iLocal_85 = 0;
		}
	}
	if (iLocal_80 == 1)
	{
		if (((iLocal_85 == 1 || iLocal_98 == 1) || iLocal_109 == 1) || iLocal_86 == 1)
		{
			if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) != 4)
			{
				unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 4, 0);
				unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
			}
			iLocal_55 = 0;
			while (iLocal_55 <= 12)
			{
				if (unk_0x724D816EA203A79E(iLocal_32[iLocal_55]))
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_32[iLocal_55]))
					{
						if (unk_0x724D816EA203A79E(iLocal_34))
						{
							if (unk_0xE59B7F5A03335350(iLocal_34, 0))
							{
								if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_34, 0) || iLocal_87 == 1)
								{
									if (func_2(unk_0xBC25C936A095B5BA(), iLocal_32[iLocal_55], 1) < 39f)
									{
										if (iLocal_91[iLocal_55] == 0)
										{
											unk_0xA4E856A8CD53B8DF(iLocal_32[iLocal_55]);
											unk_0xE95574194EEDAEF7(iLocal_32[iLocal_55], unk_0x541C2AEF053615BC(iLocal_32[iLocal_55], true), 50f, 0, 0);
											unk_0xB8CBD998685C0685(iLocal_32[iLocal_55], unk_0xBC25C936A095B5BA(), 0, 16);
											unk_0x91629AC1E1F78419(iLocal_32[iLocal_55], 51, true);
											unk_0x91629AC1E1F78419(iLocal_32[iLocal_55], 43, true);
											iLocal_92[iLocal_55] = 0;
											iLocal_93[iLocal_55] = 0;
											iLocal_94[iLocal_55] = 0;
											iLocal_91[iLocal_55] = 1;
										}
									}
									else if (iLocal_92[iLocal_55] == 0)
									{
										unk_0xA4E856A8CD53B8DF(iLocal_32[iLocal_55]);
										unk_0xC5A6DFE2B8987B17(&uLocal_367);
										unk_0x346129B364057FF6(0, unk_0x541C2AEF053615BC(iLocal_34, true), 2f, -1, 20f, 0, 1193033728);
										unk_0xB8CBD998685C0685(0, unk_0xBC25C936A095B5BA(), 0, 16);
										unk_0x535008C596714F9E(uLocal_367);
										unk_0xA8E6405305C0D7DF(iLocal_32[iLocal_55], uLocal_367);
										unk_0x02DAF06EA4F08219(&uLocal_367);
										iLocal_93[iLocal_55] = 0;
										iLocal_94[iLocal_55] = 0;
										iLocal_91[iLocal_55] = 0;
										iLocal_92[iLocal_55] = 1;
									}
								}
								else
								{
									if (func_2(unk_0xBC25C936A095B5BA(), iLocal_32[iLocal_55], 1) < 39f)
									{
										if (iLocal_93[iLocal_55] == 0)
										{
											unk_0xA4E856A8CD53B8DF(iLocal_32[iLocal_55]);
											unk_0xE95574194EEDAEF7(iLocal_32[iLocal_55], unk_0x541C2AEF053615BC(iLocal_32[iLocal_55], true), 50f, 0, 0);
											unk_0xB8CBD998685C0685(iLocal_32[iLocal_55], unk_0xBC25C936A095B5BA(), 0, 16);
											unk_0x91629AC1E1F78419(iLocal_32[iLocal_55], 51, true);
											unk_0x91629AC1E1F78419(iLocal_32[iLocal_55], 43, true);
											iLocal_92[iLocal_55] = 0;
											iLocal_94[iLocal_55] = 0;
											iLocal_91[iLocal_55] = 0;
											iLocal_93[iLocal_55] = 1;
										}
									}
									if (func_2(unk_0xBC25C936A095B5BA(), iLocal_32[iLocal_55], 1) > 41f && func_2(unk_0xBC25C936A095B5BA(), iLocal_32[iLocal_55], 1) < 400f)
									{
										if (iLocal_94[iLocal_55] == 0)
										{
											iLocal_74 = unk_0x491B2241281A03B7(0, 4);
											unk_0xA4E856A8CD53B8DF(iLocal_32[iLocal_55]);
											unk_0xE95574194EEDAEF7(iLocal_32[iLocal_55], unk_0x541C2AEF053615BC(iLocal_32[iLocal_55], true), 50f, 0, 0);
											unk_0xC5A6DFE2B8987B17(&uLocal_367);
											if (iLocal_74 == 0)
											{
												unk_0x9565F9267674873A(0, unk_0xBC25C936A095B5BA(), -1, 25f, 2f, 1073741824, 0);
											}
											else if (iLocal_74 == 1)
											{
												unk_0xDE2D2B13F24A979D(0, 500);
												unk_0x9565F9267674873A(0, unk_0xBC25C936A095B5BA(), -1, 25f, 2f, 1073741824, 0);
											}
											else if (iLocal_74 == 2)
											{
												unk_0x9565F9267674873A(0, unk_0xBC25C936A095B5BA(), -1, 25f, 3f, 1073741824, 0);
											}
											else if (iLocal_74 == 3)
											{
												unk_0xDE2D2B13F24A979D(0, 500);
												unk_0x9565F9267674873A(0, unk_0xBC25C936A095B5BA(), -1, 25f, 3f, 1073741824, 0);
											}
											unk_0x535008C596714F9E(uLocal_367);
											unk_0xA8E6405305C0D7DF(iLocal_32[iLocal_55], uLocal_367);
											unk_0x02DAF06EA4F08219(&uLocal_367);
											iLocal_92[iLocal_55] = 0;
											iLocal_93[iLocal_55] = 0;
											iLocal_91[iLocal_55] = 0;
											iLocal_94[iLocal_55] = 1;
										}
									}
								}
							}
						}
					}
				}
				iLocal_55++;
			}
		}
		if (((iLocal_85 == 0 && iLocal_98 == 0) && iLocal_109 == 0) && iLocal_86 == 0)
		{
			iLocal_72 = 0;
			while (iLocal_72 <= 1)
			{
				if (unk_0x724D816EA203A79E(iLocal_32[iLocal_72]))
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_32[iLocal_72]))
					{
						if (func_2(iLocal_32[iLocal_72], unk_0xBC25C936A095B5BA(), 1) < 25f)
						{
							if (iLocal_101[iLocal_72] == 0)
							{
								if (!unk_0xD1DC4B08247A4317(iLocal_32[iLocal_72]))
								{
									unk_0x49D46EE47C9CCB66(iLocal_32[iLocal_72]);
								}
								else
								{
									unk_0xA4E856A8CD53B8DF(iLocal_32[iLocal_72]);
								}
								unk_0x57D65255D3D3B6A7(iLocal_32[iLocal_72], unk_0xBC25C936A095B5BA(), -1, 0);
								iLocal_101[iLocal_72] = 1;
							}
							if (iLocal_110 == 1)
							{
								if (unk_0x105601648511CC64() > iLocal_70 + 20000)
								{
									iLocal_109 = 1;
								}
							}
						}
						else if (func_2(iLocal_32[iLocal_72], unk_0xBC25C936A095B5BA(), 1) > 30f)
						{
							if (iLocal_101[iLocal_72] == 1)
							{
								if (!unk_0xD1DC4B08247A4317(iLocal_32[iLocal_72]))
								{
									unk_0x49D46EE47C9CCB66(iLocal_32[iLocal_72]);
								}
								else
								{
									unk_0xA4E856A8CD53B8DF(iLocal_32[iLocal_72]);
								}
								unk_0x57D65255D3D3B6A7(iLocal_32[iLocal_72], unk_0xBC25C936A095B5BA(), 1, 0);
								iLocal_101[iLocal_72] = 0;
							}
						}
					}
				}
				iLocal_72++;
			}
		}
	}
}

int func_229(vector3 vParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x13547
{
	vector3 vVar0[15];
	vector3 vVar1[15];
	float fVar2[15];
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar5 = 0;
	switch (iParam1)
	{
		case 1:
			vVar0[0 /*3*/] = { -1332.211f, 100.4608f, 40.38437f };
			vVar1[0 /*3*/] = { -1094.238f, 148.4274f, 73f };
			fVar2[0] = 171.25f;
			vVar0[1 /*3*/] = { -999.7344f, -110.2231f, 25.25706f };
			vVar1[1 /*3*/] = { -1149.494f, 109.2558f, 73f };
			fVar2[1] = 132f;
			vVar0[2 /*3*/] = { -1035.113f, -84.95885f, 28.2746f };
			vVar1[2 /*3*/] = { -1261.103f, 50.08148f, 73f };
			fVar2[2] = 132f;
			iVar3 = 3;
			break;
		
		case 2:
			vVar0[0 /*3*/] = { -804.3439f, -3346.5f, 10f };
			vVar1[0 /*3*/] = { -1816.954f, -2768.893f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 247f;
			vVar0[1 /*3*/] = { -1911.488f, -2934.197f, 10f };
			vVar1[1 /*3*/] = { -968.6236f, -3477.748f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 149f;
			vVar0[2 /*3*/] = { -844.9433f, -2802.785f, 10f };
			vVar1[2 /*3*/] = { -1011.081f, -3086.904f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 185.5f;
			vVar0[3 /*3*/] = { -1021.086f, -2952.277f, 10f };
			vVar1[3 /*3*/] = { -1599.008f, -2616.271f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 250f;
			vVar0[4 /*3*/] = { -1027.136f, -2436.457f, 10f };
			vVar1[4 /*3*/] = { -1392.61f, -2226.763f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 193.5f;
			vVar0[5 /*3*/] = { -1497.549f, -2408.712f, 10f };
			vVar1[5 /*3*/] = { -1136.917f, -2617.955f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 234.5f;
			vVar0[6 /*3*/] = { -982.7924f, -2831.709f, 12.93313f };
			vVar1[6 /*3*/] = { -966.4677f, -2803.458f, 16.68313f };
			fVar2[6] = 16f;
			vVar0[7 /*3*/] = { -1110.083f, -3496.806f, 12f };
			vVar1[7 /*3*/] = { -1955.298f, -3010.431f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 80f;
			vVar0[8 /*3*/] = { -1886.899f, -3193.024f, 12f };
			vVar1[8 /*3*/] = { -1836.143f, -3105.268f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 142f;
			vVar0[9 /*3*/] = { -1134.337f, -3535.648f, 12f };
			vVar1[9 /*3*/] = { -1259.649f, -3463.486f, IntToFloat((250 + iParam2)) };
			fVar2[9] = 30.75f;
			vVar0[10 /*3*/] = { -969.1279f, -3463.899f, 12f };
			vVar1[10 /*3*/] = { -896.3734f, -3505.715f, IntToFloat((250 + iParam2)) };
			fVar2[10] = 150f;
			vVar0[11 /*3*/] = { -1369.491f, -2173.579f, 10f };
			vVar1[11 /*3*/] = { -1685.626f, -2720.364f, IntToFloat((250 + iParam2)) };
			fVar2[11] = 29.25f;
			vVar0[12 /*3*/] = { -1010.926f, -3550.943f, 10f };
			vVar1[12 /*3*/] = { -1110.198f, -3493.617f, IntToFloat((250 + iParam2)) };
			fVar2[12] = 43f;
			iVar3 = 13;
			break;
		
		case 3:
			vVar0[0 /*3*/] = { -1773.944f, 3287.334f, 30f };
			vVar1[0 /*3*/] = { -2029.776f, 2845.083f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 255f;
			vVar0[1 /*3*/] = { -2725.889f, 3291.099f, 30f };
			vVar1[1 /*3*/] = { -2009.182f, 2879.835f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 180f;
			vVar0[2 /*3*/] = { -2442.026f, 3326.699f, 30f };
			vVar1[2 /*3*/] = { -2033.928f, 3089.049f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 205f;
			vVar0[3 /*3*/] = { -1917.165f, 3374.209f, 30f };
			vVar1[3 /*3*/] = { -2016.791f, 3195.058f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 86.25f;
			vVar0[4 /*3*/] = { -2192.753f, 3373.278f, 30f };
			vVar1[4 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 150.5f;
			vVar0[5 /*3*/] = { -2077.663f, 3344.514f, 30f };
			vVar1[5 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 140.5f;
			vVar0[6 /*3*/] = { -2861.755f, 3352.661f, 30f };
			vVar1[6 /*3*/] = { -2715.871f, 3269.916f, IntToFloat((250 + iParam2)) };
			fVar2[6] = 90f;
			vVar0[7 /*3*/] = { -2005.574f, 3364.533f, 30f };
			vVar1[7 /*3*/] = { -1977.569f, 3330.888f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 100f;
			vVar0[8 /*3*/] = { -1682.235f, 3004.285f, 30f };
			vVar1[8 /*3*/] = { -1942.747f, 2947.441f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 248.75f;
			vVar0[9 /*3*/] = { -2393.295f, 2936.406f, 31.6801f };
			vVar1[9 /*3*/] = { -2453.037f, 3006.863f, 52.31003f };
			fVar2[9] = 128f;
			vVar0[10 /*3*/] = { -2347.185f, 3023.83f, 31.56573f };
			vVar1[10 /*3*/] = { -2517.33f, 2989.063f, 49.95644f };
			fVar2[10] = 127.25f;
			vVar0[11 /*3*/] = { -2259.922f, 3358.04f, 29.99972f };
			vVar1[11 /*3*/] = { -2299.772f, 3385.79f, 38.06014f };
			fVar2[11] = 16f;
			vVar0[12 /*3*/] = { -2476.309f, 3363.914f, 31.67933f };
			vVar1[12 /*3*/] = { -2431.981f, 3287.669f, 39.97826f };
			fVar2[12] = 214.25f;
			vVar0[13 /*3*/] = { -2103.081f, 2797.783f, 29.37864f };
			vVar1[13 /*3*/] = { -2096.821f, 2874.423f, 57.80989f };
			fVar2[13] = 65.75f;
			if (bParam3)
			{
				iVar6 = iParam2;
			}
			else
			{
				iVar6 = 0;
			}
			vVar1[9 /*3*/].f_2 = (vVar1[9 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[10 /*3*/].f_2 = (vVar1[10 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[11 /*3*/].f_2 = (vVar1[11 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[12 /*3*/].f_2 = (vVar1[12 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[13 /*3*/].f_2 = (vVar1[13 /*3*/].f_2 + IntToFloat(iVar6));
			iVar3 = 14;
			break;
		
		case 4:
			vVar0[0 /*3*/] = { 1541.607f, 2527.555f, 40f };
			vVar1[0 /*3*/] = { 1815.575f, 2535.06f, IntToFloat((150 + iParam2)) };
			fVar2[0] = 114f;
			vVar0[1 /*3*/] = { 1788.879f, 2445.727f, 40f };
			vVar1[1 /*3*/] = { 1716.96f, 2502.957f, IntToFloat((150 + iParam2)) };
			fVar2[1] = 88.5f;
			vVar0[2 /*3*/] = { 1601.157f, 2436.244f, 40f };
			vVar1[2 /*3*/] = { 1650.078f, 2515.923f, IntToFloat((150 + iParam2)) };
			fVar2[2] = 133.25f;
			vVar0[3 /*3*/] = { 1706.331f, 2407.597f, 40f };
			vVar1[3 /*3*/] = { 1698.555f, 2460.208f, IntToFloat((150 + iParam2)) };
			fVar2[3] = 104.5f;
			vVar0[4 /*3*/] = { 1712.452f, 2756.218f, 40f };
			vVar1[4 /*3*/] = { 1718.848f, 2589.162f, IntToFloat((150 + iParam2)) };
			fVar2[4] = 121.75f;
			vVar0[5 /*3*/] = { 1830.228f, 2661.24f, 40f };
			vVar1[5 /*3*/] = { 1774.812f, 2679.419f, IntToFloat((150 + iParam2)) };
			fVar2[5] = 84.5f;
			vVar0[6 /*3*/] = { 1559.05f, 2632.22f, 40f };
			vVar1[6 /*3*/] = { 1657.208f, 2595.484f, IntToFloat((150 + iParam2)) };
			fVar2[6] = 103.75f;
			vVar0[7 /*3*/] = { 1612.021f, 2716.869f, 40f };
			vVar1[7 /*3*/] = { 1657.165f, 2669.721f, IntToFloat((150 + iParam2)) };
			fVar2[7] = 104.25f;
			vVar0[8 /*3*/] = { 1809.872f, 2729.827f, 40f };
			vVar1[8 /*3*/] = { 1789.855f, 2705.037f, IntToFloat((150 + iParam2)) };
			fVar2[8] = 91f;
			vVar0[9 /*3*/] = { 1818.789f, 2605.948f, 40f };
			vVar1[9 /*3*/] = { 1783.114f, 2606.783f, IntToFloat((150 + iParam2)) };
			fVar2[9] = 51.25f;
			iVar3 = 10;
			break;
		
		case 5:
			vVar0[0 /*3*/] = { 3411.002f, 3663.185f, 20f };
			vVar1[0 /*3*/] = { 3615.583f, 3626.194f, IntToFloat((40 + iParam2)) };
			fVar2[0] = 45.75f;
			vVar0[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			vVar1[1 /*3*/] = { 3643.801f, 3694.362f, IntToFloat((40 + iParam2)) };
			fVar2[1] = 99f;
			vVar0[2 /*3*/] = { 3446.036f, 3795.688f, 20f };
			vVar1[2 /*3*/] = { 3650.914f, 3766.152f, IntToFloat((40 + iParam2)) };
			fVar2[2] = 81.5f;
			iVar3 = 3;
			break;
		
		case 6:
			vVar0[0 /*3*/] = { 526.053f, -3391.497f, -10f };
			vVar1[0 /*3*/] = { 523.2289f, -3118.678f, IntToFloat((10 + iParam2)) };
			fVar2[0] = 120f;
			vVar0[1 /*3*/] = { 459.4397f, -3199.99f, 4.819676f };
			vVar1[1 /*3*/] = { 593.8928f, -3199.998f, 30.06926f };
			fVar2[1] = 170f;
			vVar0[2 /*3*/] = { 552.8467f, -3111.054f, 4.819394f };
			vVar1[2 /*3*/] = { 585.3137f, -3111.844f, 17.56923f };
			fVar2[2] = 12.5f;
			vVar0[3 /*3*/] = { 598.4666f, -3140.147f, 4.819257f };
			vVar1[3 /*3*/] = { 597.4973f, -3117.063f, 17.31926f };
			fVar2[3] = 9.75f;
			iVar3 = 4;
			break;
		
		case 7:
			vVar0[0 /*3*/] = { -1108.55f, -570.8798f, 20f };
			vVar1[0 /*3*/] = { -1187.811f, -477.5037f, IntToFloat((50 + iParam2)) };
			fVar2[0] = 162f;
			vVar0[1 /*3*/] = { -1201.378f, -485.9673f, 20f };
			vVar1[1 /*3*/] = { -1215.796f, -464.8281f, IntToFloat((50 + iParam2)) };
			fVar2[1] = 124f;
			vVar0[2 /*3*/] = { -985.6311f, -525.4233f, 20f };
			vVar1[2 /*3*/] = { -1013.393f, -475.2057f, IntToFloat((50 + iParam2)) };
			fVar2[2] = 55f;
			vVar0[3 /*3*/] = { -1055.849f, -477.8226f, 20f };
			vVar1[3 /*3*/] = { -1073.333f, -498.717f, IntToFloat((50 + iParam2)) };
			fVar2[3] = 142f;
			iVar3 = 4;
			break;
		
		case 8:
			vVar0[0 /*3*/] = { 461.5684f, -984.572f, 29.43951f };
			vVar1[0 /*3*/] = { 471.17f, -984.4292f, 40.14212f };
			fVar2[0] = 7.75f;
			vVar0[1 /*3*/] = { 457.3404f, -984.756f, 34.43951f };
			vVar1[1 /*3*/] = { 457.2084f, -993.7189f, 29.38958f };
			fVar2[1] = 14.75f;
			vVar0[2 /*3*/] = { 477.6227f, -986.6f, 40.00819f };
			vVar1[2 /*3*/] = { 424.8687f, -986.3279f, 48.71241f };
			fVar2[2] = 31.5f;
			vVar0[3 /*3*/] = { 474.3889f, -974.4613f, 39.55761f };
			vVar1[3 /*3*/] = { 474.0358f, -1021.972f, 49.10033f };
			fVar2[3] = 30.5f;
			vVar0[4 /*3*/] = { 442.1768f, -974.1888f, 29.68951f };
			vVar1[4 /*3*/] = { 442.1855f, -979.8635f, 33.43951f };
			fVar2[4] = 6.75f;
			iVar3 = 5;
			break;
	}
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		if (unk_0x7352105EC4D7541F(vParam0, vVar0[iVar4 /*3*/], vVar1[iVar4 /*3*/], fVar2[iVar4], iVar5, 1))
		{
			return 1;
		}
		iVar4++;
	}
	return 0;
}

void func_230()//Position - 0x1429D
{
	if (iLocal_54 > 0)
	{
		func_118();
		func_228();
		func_227();
	}
	if (iLocal_54 == 0)
	{
		if (iLocal_75 == 1)
		{
			iLocal_76 = 0;
			func_33();
			iLocal_75 = 0;
		}
		iLocal_77 = 0;
		iLocal_80 = 0;
		iLocal_81[0] = 0;
		iLocal_81[1] = 0;
		iLocal_85 = 0;
		iLocal_86 = 0;
		iLocal_87 = 0;
		iLocal_99 = 0;
		iLocal_100 = 0;
		iLocal_101[0] = 0;
		iLocal_101[1] = 0;
		iLocal_109 = 0;
		iLocal_110 = 0;
		iLocal_113 = 0;
		iLocal_114 = 0;
		iLocal_117 = 0;
		iLocal_70 = 0;
		iLocal_55 = 0;
		while (iLocal_55 <= 12)
		{
			iLocal_91[iLocal_55] = 0;
			iLocal_92[iLocal_55] = 0;
			iLocal_93[iLocal_55] = 0;
			iLocal_94[iLocal_55] = 0;
			iLocal_55++;
		}
		unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 0, 0);
		unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
		unk_0x2625AE158F7FFBAD("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS");
		iLocal_61 = unk_0x105601648511CC64();
		unk_0x8510BC031C24B862(joaat("lazer"), 1);
		unk_0xF243B7A14FCFD0F4(joaat("s_m_y_marine_01"));
		unk_0xF243B7A14FCFD0F4(joaat("s_m_m_pilot_02"));
		if (!unk_0x724D816EA203A79E(iLocal_34))
		{
			if (unk_0x724D816EA203A79E(Global_15DFD[0]))
			{
				if (unk_0xE59B7F5A03335350(Global_15DFD[0], 0))
				{
					unk_0x77815D3407C6700D(Global_15DFD[0], true, 1);
					iLocal_34 = Global_15DFD[0];
					unk_0xE4F4552195F606F3(iLocal_34, 0);
					unk_0xB71D41C0310C93DE(iLocal_34, 1, 1);
					unk_0x2CA123B0622F495C(joaat("cargobob"));
					unk_0x8510BC031C24B862(joaat("cargobob"), 1);
					unk_0xDDBD8CD1389FC0B5(iLocal_34, 0);
					unk_0xDB35A2F9333ABEC5(iLocal_34, 1);
					func_102(iLocal_34, 0);
				}
			}
		}
		if (!unk_0x724D816EA203A79E(iLocal_35[0]))
		{
			if (unk_0x724D816EA203A79E(Global_15DFD[1]))
			{
				if (unk_0xE59B7F5A03335350(Global_15DFD[1], 0))
				{
					unk_0x77815D3407C6700D(Global_15DFD[1], true, 1);
					iLocal_35[0] = Global_15DFD[1];
					unk_0xE4F4552195F606F3(iLocal_35[0], 1);
					unk_0xB71D41C0310C93DE(iLocal_35[0], 1, 1);
					unk_0x346478B12F69D4E3(iLocal_35[0], false);
					unk_0x55662F9F262C2F9B(iLocal_35[0], "DH_P_2B_ENEMY_CHOPPERS", 0);
					unk_0x8300C56586249382(iLocal_35[0], 0);
				}
			}
		}
		if (unk_0x724D816EA203A79E(Global_15DFD[2]))
		{
			if (unk_0xE59B7F5A03335350(Global_15DFD[2], 0))
			{
				if (unk_0x8C1A6E7D5F410F4A(unk_0x6F79ECA8C83E4357(Global_15DFD[2])))
				{
					unk_0x77815D3407C6700D(Global_15DFD[2], true, 1);
					func_238(1734.799f, 3234.833f, 40.7041f, 321.0399f, 0, 145);
				}
				if (((unk_0x7C28D15641461C68(unk_0x6F79ECA8C83E4357(Global_15DFD[2])) || unk_0x7512ED01F3F46714(unk_0x6F79ECA8C83E4357(Global_15DFD[2]))) || unk_0x2B4DE5C0D509B0F9(unk_0x6F79ECA8C83E4357(Global_15DFD[2]))) || unk_0x89B9572166100905(unk_0x6F79ECA8C83E4357(Global_15DFD[2])))
				{
					unk_0x77815D3407C6700D(Global_15DFD[2], true, 1);
					func_238(1748.05f, 3294.7f, 40.106f, 204.2419f, 0, 145);
				}
			}
		}
		if (unk_0x724D816EA203A79E(Global_15DFD.f_9[0]))
		{
			unk_0x77815D3407C6700D(Global_15DFD.f_9[0], true, 1);
			iLocal_32[0] = Global_15DFD.f_9[0];
		}
		if (unk_0x724D816EA203A79E(Global_15DFD.f_9[1]))
		{
			unk_0x77815D3407C6700D(Global_15DFD.f_9[1], true, 1);
			iLocal_32[1] = Global_15DFD.f_9[1];
		}
		if (unk_0x724D816EA203A79E(iLocal_34))
		{
			unk_0x346478B12F69D4E3(iLocal_34, false);
		}
		unk_0x9B90420B04C07704("PoliceScannerDisabled", 1);
		if (unk_0x17FAADF9916EF741())
		{
			if (!func_35())
			{
				unk_0x8B6B50EADA01F251(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true));
			}
			func_219(iLocal_39, -1, 1);
		}
		if (!unk_0x726D9204B160D23E())
		{
			unk_0x829FA4611BD56B44(800);
		}
		func_237(unk_0xBC25C936A095B5BA(), -1);
		func_236(73);
		iLocal_76 = 1;
		iLocal_54 = 1;
	}
	if (iLocal_54 == 1)
	{
		if (unk_0xD64C9DAB4705D565("ARMY_GUARD"))
		{
			if (unk_0x18205062F45F681D("ARMY_GUARD"))
			{
				unk_0xBB8B5725691B10D0("ARMY_GUARD", false);
			}
		}
		func_99();
		if (iLocal_86 == 0)
		{
			if (unk_0x105601648511CC64() > iLocal_61 + 3000)
			{
				iLocal_63 = 0;
				while (iLocal_63 <= 12)
				{
					if (unk_0x724D816EA203A79E(iLocal_32[iLocal_63]))
					{
						if (!unk_0x36CEFBE9B745A58D(iLocal_32[iLocal_63]))
						{
							if (func_2(unk_0xBC25C936A095B5BA(), iLocal_32[iLocal_63], 1) < 40f)
							{
								if (unk_0x1028B6250119A74B(iLocal_32[iLocal_63], unk_0xBC25C936A095B5BA()))
								{
									if (unk_0x4FCDC2EC534819EF(unk_0xBC25C936A095B5BA()))
									{
										unk_0xA1D24DCCB6F72A84("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", false);
										unk_0x5C083DB6ACC5827F("AZ_AFB_ALARM_SPEECH", 1, 1);
										iLocal_86 = 1;
									}
									if (iLocal_85 == 1)
									{
										unk_0xA1D24DCCB6F72A84("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", false);
										unk_0x5C083DB6ACC5827F("AZ_AFB_ALARM_SPEECH", 1, 1);
										iLocal_86 = 1;
									}
									if (iLocal_114 == 0)
									{
										if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) && !func_235(0))
										{
											if (func_234(unk_0xBC25C936A095B5BA()) != joaat("weapon_unarmed"))
											{
												iLocal_73 = unk_0x105601648511CC64();
												iLocal_114 = 1;
											}
										}
									}
									else if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) && !func_235(0))
									{
										if (func_234(unk_0xBC25C936A095B5BA()) != joaat("weapon_unarmed"))
										{
											if (unk_0x105601648511CC64() > iLocal_73 + 3000)
											{
												unk_0xA1D24DCCB6F72A84("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", false);
												unk_0x5C083DB6ACC5827F("AZ_AFB_ALARM_SPEECH", 1, 1);
												iLocal_86 = 1;
											}
										}
										else if (iLocal_113 == 0)
										{
											iLocal_114 = 0;
											iLocal_113 = 1;
										}
									}
								}
							}
						}
					}
					iLocal_63++;
				}
			}
		}
		if (iLocal_77 == 0)
		{
			unk_0xEB233A3B7635D2AC();
			unk_0x1D1C393C7689E5A6(5f, 10f, 4);
			func_123("DP_GOD2", 7500, 1);
			iLocal_77 = 1;
		}
		if (iLocal_85 == 1)
		{
			if (!func_233(5))
			{
				func_232(5);
			}
		}
		else if (func_233(5))
		{
			func_231(5);
		}
		if (unk_0x724D816EA203A79E(iLocal_34))
		{
			if (unk_0xE59B7F5A03335350(iLocal_34, 0))
			{
				if (func_2(unk_0xBC25C936A095B5BA(), iLocal_34, 1) < 30f)
				{
					iLocal_87 = 1;
				}
				if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_34, 0))
				{
					unk_0x7A535CE1F001F3FE(unk_0xBC25C936A095B5BA(), joaat("gadget_parachute"), -1, false, true);
					iLocal_54 = 0;
					unk_0x1D1C393C7689E5A6(10f, 10f, 4);
					iLocal_28 = 3;
				}
			}
		}
	}
}

void func_231(int iParam0)//Position - 0x14803
{
	unk_0x7CB6FD92BE491AD9(&Global_15B7B, iParam0);
}

void func_232(int iParam0)//Position - 0x14815
{
	unk_0xF0059F27F7BB6680(&Global_15B7B, iParam0);
}

bool func_233(int iParam0)//Position - 0x14827
{
	return unk_0xFA30DFD0084E92FE(Global_15B7B, iParam0);
}

int func_234(int iParam0)//Position - 0x14839
{
	var uVar0;
	
	unk_0x9CDD10270A1ACF6F(iParam0, &uVar0, 1);
	return uVar0;
}

int func_235(int iParam0)//Position - 0x1484D
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

void func_236(int iParam0)//Position - 0x148A7
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

void func_237(int iParam0, int iParam1)//Position - 0x148CB
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

void func_238(vector3 vParam0, float fParam1, int iParam2, int iParam3)//Position - 0x14936
{
	vector3 vVar0;
	var uVar1;
	
	if (unk_0x724D816EA203A79E(Global_17646.f_4))
	{
		if (unk_0xE59B7F5A03335350(Global_17646.f_4, 0))
		{
			if (func_247(24) != Global_17646.f_4)
			{
				if (iParam2 == 1)
				{
					if (func_244(unk_0x541C2AEF053615BC(Global_17646.f_4, true), iParam3, &vVar0, &uVar1))
					{
						vParam0 = { vVar0 };
						fParam1 = uVar1;
					}
				}
				func_239(Global_17646.f_4, vParam0, fParam1, 24, 0);
			}
		}
	}
}

void func_239(int iParam0, vector3 vParam1, float fParam2, int iParam3, bool bParam4)//Position - 0x149B1
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
		func_243(iParam3);
		Var0.f_9 = 49;
		Var0.f_3B = 2;
		func_40(iParam0, &Var0);
		if (func_8(vParam1, 0f, 0f, 0f, 0))
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
		func_241(iParam3, &Var0, vParam1, fParam2, func_60(iParam0));
		func_240(iParam3, iParam0, 0);
	}
}

void func_240(int iParam0, int iParam1, int iParam2)//Position - 0x14ADA
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_70(&(Global_110A8.f_22B[0 /*21*/]), iParam0))
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
				Global_19B04.f_7F22.f_12C1 = func_196();
			}
			if (iParam1 != Global_110A8.f_8B[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_247(iParam0);
					if ((unk_0x724D816EA203A79E(iVar0) && unk_0xE59B7F5A03335350(iVar0, 0)) && iParam1 != iVar0)
					{
						func_39(iVar0, 145);
					}
				}
				Global_11432 = iParam1;
				Global_11433 = iParam0;
				Global_11434 = iParam2;
			}
		}
	}
}

void func_241(int iParam0, var uParam1, vector3 vParam2, float fParam3, int iParam4)//Position - 0x14BF7
{
	if (func_70(&(Global_110A8.f_22B[0 /*21*/]), iParam0))
	{
		if (unk_0xFA30DFD0084E92FE(Global_110A8.f_22B[0 /*21*/].f_9, 10))
		{
			func_242(iParam0);
			func_67(uParam1, &(Global_19B04.f_7F22.f_45[Global_110A8.f_22B[0 /*21*/].f_E /*78*/]));
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
			func_63(iParam0, 1);
		}
	}
}

void func_242(int iParam0)//Position - 0x14CF6
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_70(&(Global_110A8.f_22B[0 /*21*/]), iParam0))
	{
		if (unk_0x724D816EA203A79E(Global_110A8.f_8B[iParam0]))
		{
			unk_0x77815D3407C6700D(Global_110A8.f_8B[iParam0], true, 1);
			unk_0x1E7A09C1710FB071(&(Global_110A8.f_8B[iParam0]));
			Global_110A8.f_8B[iParam0] = 0;
		}
		if (unk_0xFA30DFD0084E92FE(Global_110A8.f_22B[0 /*21*/].f_9, 13))
		{
			func_63(iParam0, 0);
		}
	}
}

void func_243(int iParam0)//Position - 0x14D70
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_242(iParam0);
	func_63(iParam0, 0);
}

int func_244(vector3 vParam0, int iParam1, var uParam2, var uParam3)//Position - 0x14D97
{
	int iVar0;
	
	iVar0 = func_245(vParam0, iParam1, 1);
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

int func_245(vector3 vParam0, int iParam1, int iParam2)//Position - 0x14EAD
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
				if (func_246(iVar0) || iParam2 == 0)
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

bool func_246(int iParam0)//Position - 0x14F3C
{
	return unk_0xFA30DFD0084E92FE(Global_19B04.f_1C20[iParam0], 0);
}

int func_247(int iParam0)//Position - 0x14F54
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_110A8.f_8B[iParam0];
}

void func_248()//Position - 0x14F70
{
	if (iLocal_54 == 0)
	{
		func_252(1, 0);
		func_252(2, 0);
		func_252(7, 0);
		func_252(8, 0);
		func_252(9, 0);
		func_252(10, 0);
		func_252(4, 0);
		func_252(12, 0);
		unk_0xB2CB6EAA6B280A84("MarineGroupHash", &iLocal_44);
		unk_0xA902E18EDF6FA0C8(5, iLocal_44, 1862763509);
		unk_0xA902E18EDF6FA0C8(5, -472287501, 1862763509);
		unk_0xA902E18EDF6FA0C8(1, iLocal_44, -472287501);
		unk_0xA902E18EDF6FA0C8(1, -472287501, iLocal_44);
		unk_0xA902E18EDF6FA0C8(1, -1533126372, iLocal_44);
		unk_0xA902E18EDF6FA0C8(1, iLocal_44, -1533126372);
		unk_0xA902E18EDF6FA0C8(1, -1533126372, -472287501);
		unk_0xA902E18EDF6FA0C8(1, -472287501, -1533126372);
		if (func_265())
		{
			if (Global_154ED == 1)
			{
				if (func_251() == 0)
				{
					func_250(vLocal_118, fLocal_122, 1, 0);
					iLocal_75 = 1;
					iLocal_54 = 0;
					iLocal_28 = 3;
				}
				if (func_251() == 1)
				{
					func_250(-629.1677f, 2871.31f, 385.0313f, 283.1214f, 1, 0);
					iLocal_75 = 1;
					iLocal_54 = 0;
					iLocal_28 = 4;
				}
				if (func_251() == 2)
				{
					func_249();
				}
			}
			else
			{
				if (func_251() == 0)
				{
					func_250(-1565.084f, 2780.813f, 16.4022f, 53.6086f, 1, 0);
					iLocal_75 = 1;
					iLocal_54 = 0;
					iLocal_28 = 2;
				}
				if (func_251() == 1)
				{
					func_250(vLocal_118, fLocal_122, 1, 0);
					iLocal_75 = 1;
					iLocal_54 = 0;
					iLocal_28 = 3;
				}
				if (func_251() == 2)
				{
					func_250(-629.1677f, 2871.31f, 385.0313f, 283.1214f, 1, 0);
					iLocal_75 = 1;
					iLocal_54 = 0;
					iLocal_28 = 4;
				}
			}
		}
		else if (func_27(0))
		{
			func_250(-1565.084f, 2780.813f, 16.4022f, 53.6086f, 1, 0);
			iLocal_75 = 1;
			iLocal_54 = 0;
			iLocal_28 = 2;
		}
		else
		{
			iLocal_54 = 0;
			iLocal_28 = 2;
		}
	}
}

void func_249()//Position - 0x1513A
{
	iLocal_76 = 0;
	if (!unk_0x17FAADF9916EF741())
	{
		unk_0x7A41D32A383895D8(0);
	}
	unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), 1747.04f, 3267.456f, 40.246f, 1, 0, 0, 1);
	unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), 229.0887f);
	if (unk_0x724D816EA203A79E(iLocal_34))
	{
		unk_0xCF6040807CC0E4A5(&iLocal_34);
	}
	if (!unk_0x724D816EA203A79E(iLocal_34))
	{
		unk_0xF243B7A14FCFD0F4(joaat("cargobob"));
		while (!unk_0xD6513D668481290A(joaat("cargobob")))
		{
			SYSTEM::WAIT(0);
		}
		iLocal_34 = unk_0x61C05BF08A1E0EFE(joaat("cargobob"), 1740.852f, 3263.161f, 40.2743f, 280.3712f, 1, 1, 0);
		unk_0x82948B11F55E5713(iLocal_34, 0, 1);
		unk_0x82948B11F55E5713(iLocal_34, 1, 1);
		unk_0xD421BC740C5340C3(iLocal_34, 2);
		unk_0xDB35A2F9333ABEC5(iLocal_34, 1);
		unk_0x346478B12F69D4E3(iLocal_34, true);
		unk_0xDDBD8CD1389FC0B5(iLocal_34, 0);
		func_102(iLocal_34, 0);
	}
	if (unk_0x17FAADF9916EF741())
	{
		unk_0x8B6B50EADA01F251(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true));
	}
	unk_0xF3F01A78937DC905(0f);
	if (!unk_0x726D9204B160D23E())
	{
		unk_0x829FA4611BD56B44(800);
	}
	while (!unk_0x726D9204B160D23E())
	{
		unk_0x829FA4611BD56B44(800);
		SYSTEM::WAIT(0);
	}
	func_29();
}

void func_250(vector3 vParam0, float fParam1, int iParam2, int iParam3)//Position - 0x15249
{
	if (func_265())
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
		func_220(1);
	}
}

int func_251()//Position - 0x152DE
{
	if (!Global_16B1B == 10 && !Global_16B1B == 9)
	{
		return 0;
	}
	return Global_16B1B.f_2;
}

void func_252(int iParam0, bool bParam1)//Position - 0x15308
{
	unk_0x9890B3060AC38D29(iParam0, !bParam1);
	unk_0xE85B33FB221A23CD(iParam0, bParam1);
}

void func_253()//Position - 0x15321
{
	if (!func_265())
	{
		if (iLocal_54 == 0)
		{
			iLocal_28 = 1;
		}
	}
	else
	{
		iLocal_54 = 0;
		iLocal_28 = 1;
	}
}

void func_254()//Position - 0x15343
{
	if (unk_0x724D816EA203A79E(iLocal_34))
	{
		if (unk_0xE59B7F5A03335350(iLocal_34, 0))
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_34, 0))
				{
					if (unk_0x25EF720B1CAB1E23(unk_0xBC25C936A095B5BA(), iLocal_34))
					{
						if (func_255(unk_0xBC25C936A095B5BA(), iLocal_34) == -1)
						{
							unk_0xBBC4195AD74D153D(0, 114, 1);
						}
					}
				}
			}
		}
	}
}

int func_255(int iParam0, int iParam1)//Position - 0x1539B
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

void func_256()//Position - 0x1540D
{
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (iLocal_28 == 2 || iLocal_28 == 3)
		{
			if (func_229(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 3, 200, 0) || iLocal_86 == 1)
			{
				unk_0xC87F56DCAF19EC70(unk_0xB5CEFD608600A09F());
				unk_0xAEEA080912A0AB35(unk_0xB5CEFD608600A09F());
			}
		}
		if (iLocal_28 == 4)
		{
			if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) != 0 && unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), vLocal_118, true) > 1000f)
			{
				unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 0, 0);
				unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
			}
		}
	}
}

void func_257()//Position - 0x154A4
{
}

void func_258()//Position - 0x154AC
{
	if (iLocal_98 == 0)
	{
		iLocal_64 = 0;
		while (iLocal_64 <= 12)
		{
			if (unk_0x724D816EA203A79E(iLocal_32[iLocal_64]))
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_32[iLocal_64]))
				{
					if (unk_0x1028B6250119A74B(iLocal_32[iLocal_64], unk_0xBC25C936A095B5BA()))
					{
						if (func_2(iLocal_32[iLocal_64], unk_0xBC25C936A095B5BA(), 1) < 40f)
						{
							if (unk_0x32E373675659FDB0(unk_0xBC25C936A095B5BA()))
							{
								iLocal_98 = 1;
							}
						}
						if (func_2(iLocal_32[iLocal_64], unk_0xBC25C936A095B5BA(), 1) < 25f)
						{
							if (func_234(unk_0xBC25C936A095B5BA()) != joaat("weapon_unarmed"))
							{
								if (func_263(iLocal_32[iLocal_64], 6))
								{
									iLocal_98 = 1;
								}
							}
						}
					}
				}
			}
			iLocal_64++;
		}
	}
	if (iLocal_88 == 0)
	{
		if (func_20() == 2)
		{
			func_143(&uLocal_198, 2, unk_0xBC25C936A095B5BA(), "TREVOR", 0, 1);
			iLocal_88 = 1;
		}
	}
	if (iLocal_85 == 0)
	{
		iLocal_71 = 0;
		while (iLocal_71 <= 1)
		{
			if (unk_0x724D816EA203A79E(iLocal_32[iLocal_71]))
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_32[iLocal_71]))
				{
					if (iLocal_99 == 0 && iLocal_100 == 0)
					{
						if (!func_124())
						{
							if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
							{
								if (func_2(unk_0xBC25C936A095B5BA(), iLocal_32[iLocal_71], 1) < 25f)
								{
									if (unk_0x1028B6250119A74B(iLocal_32[iLocal_71], unk_0xBC25C936A095B5BA()))
									{
										if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) && !func_235(0))
										{
											if (func_234(unk_0xBC25C936A095B5BA()) != joaat("weapon_unarmed"))
											{
												if (unk_0x724D816EA203A79E(iLocal_32[0]))
												{
													if (!unk_0x36CEFBE9B745A58D(iLocal_32[0]))
													{
														if (func_2(unk_0xBC25C936A095B5BA(), iLocal_32[0], 1) < 30f)
														{
															func_143(&uLocal_198, 4, iLocal_32[0], "ARMY_Guard01", 0, 1);
														}
													}
												}
												if (unk_0x724D816EA203A79E(iLocal_32[1]))
												{
													if (!unk_0x36CEFBE9B745A58D(iLocal_32[1]))
													{
														if (func_2(unk_0xBC25C936A095B5BA(), iLocal_32[1], 1) < 30f)
														{
															func_143(&uLocal_198, 4, iLocal_32[1], "ARMY_Guard01", 0, 1);
														}
													}
												}
												if (func_142(&uLocal_198, "ARMYAUD", "ARMY_WRN1", 7, 0, 0, 0))
												{
													iLocal_66 = unk_0x105601648511CC64();
													iLocal_65 = unk_0x105601648511CC64();
													iLocal_99 = 1;
												}
											}
										}
									}
								}
							}
						}
					}
					if (iLocal_100 == 0 && iLocal_99 == 0)
					{
						if (!func_124())
						{
							if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
							{
								if (func_2(unk_0xBC25C936A095B5BA(), iLocal_32[iLocal_71], 1) < 25f)
								{
									if (unk_0x1028B6250119A74B(iLocal_32[iLocal_71], unk_0xBC25C936A095B5BA()))
									{
										if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
										{
											if (func_234(unk_0xBC25C936A095B5BA()) == joaat("weapon_unarmed") || func_235(0))
											{
												if (unk_0x724D816EA203A79E(iLocal_32[0]))
												{
													if (!unk_0x36CEFBE9B745A58D(iLocal_32[0]))
													{
														if (func_2(unk_0xBC25C936A095B5BA(), iLocal_32[0], 1) < 30f)
														{
															func_143(&uLocal_198, 4, iLocal_32[0], "ARMY_Guard01", 0, 1);
														}
													}
												}
												if (unk_0x724D816EA203A79E(iLocal_32[1]))
												{
													if (!unk_0x36CEFBE9B745A58D(iLocal_32[1]))
													{
														if (func_2(unk_0xBC25C936A095B5BA(), iLocal_32[1], 1) < 30f)
														{
															func_143(&uLocal_198, 4, iLocal_32[1], "ARMY_Guard01", 0, 1);
														}
													}
												}
												if (func_142(&uLocal_198, "ARMYAUD", "ARMY_WRN1", 7, 0, 0, 0))
												{
													iLocal_66 = unk_0x105601648511CC64();
													iLocal_65 = unk_0x105601648511CC64();
													iLocal_100 = 1;
												}
											}
										}
									}
								}
							}
						}
					}
					if (iLocal_99 == 1 || iLocal_100 == 1)
					{
						if (iLocal_98 == 0 && iLocal_85 == 0)
						{
							if (iLocal_117 == 0)
							{
								if (unk_0x105601648511CC64() > iLocal_65 + 8000)
								{
									if (!func_124())
									{
										if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
										{
											if (func_2(unk_0xBC25C936A095B5BA(), iLocal_32[iLocal_71], 1) < 25f)
											{
												if (unk_0x1028B6250119A74B(iLocal_32[iLocal_71], unk_0xBC25C936A095B5BA()))
												{
													if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) && !func_235(0))
													{
														if (func_234(unk_0xBC25C936A095B5BA()) != joaat("weapon_unarmed"))
														{
															if (unk_0x724D816EA203A79E(iLocal_32[0]))
															{
																if (!unk_0x36CEFBE9B745A58D(iLocal_32[0]))
																{
																	if (func_2(unk_0xBC25C936A095B5BA(), iLocal_32[0], 1) < 30f)
																	{
																		func_143(&uLocal_198, 4, iLocal_32[0], "ARMY_Guard01", 0, 1);
																	}
																}
															}
															if (unk_0x724D816EA203A79E(iLocal_32[1]))
															{
																if (!unk_0x36CEFBE9B745A58D(iLocal_32[1]))
																{
																	if (func_2(unk_0xBC25C936A095B5BA(), iLocal_32[1], 1) < 30f)
																	{
																		func_143(&uLocal_198, 4, iLocal_32[1], "ARMY_Guard01", 0, 1);
																	}
																}
															}
															if (func_142(&uLocal_198, "ARMYAUD", "ARMY_WRN1a", 7, 0, 0, 0))
															{
																iLocal_65 = unk_0x105601648511CC64();
																iLocal_117 = 1;
															}
														}
													}
												}
											}
										}
									}
								}
							}
							if (unk_0x105601648511CC64() > iLocal_66 + 8000)
							{
								if (!func_124())
								{
									if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
									{
										if (func_2(unk_0xBC25C936A095B5BA(), iLocal_32[iLocal_71], 1) < 25f)
										{
											if (unk_0x1028B6250119A74B(iLocal_32[iLocal_71], unk_0xBC25C936A095B5BA()))
											{
												if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
												{
													if (func_234(unk_0xBC25C936A095B5BA()) == joaat("weapon_unarmed") || func_235(0))
													{
														if (unk_0x724D816EA203A79E(iLocal_32[0]))
														{
															if (!unk_0x36CEFBE9B745A58D(iLocal_32[0]))
															{
																if (func_2(unk_0xBC25C936A095B5BA(), iLocal_32[0], 1) < 30f)
																{
																	func_143(&uLocal_198, 4, iLocal_32[0], "ARMY_Guard01", 0, 1);
																}
															}
														}
														if (unk_0x724D816EA203A79E(iLocal_32[1]))
														{
															if (!unk_0x36CEFBE9B745A58D(iLocal_32[1]))
															{
																if (func_2(unk_0xBC25C936A095B5BA(), iLocal_32[1], 1) < 30f)
																{
																	func_143(&uLocal_198, 4, iLocal_32[1], "ARMY_Guard01", 0, 1);
																}
															}
														}
														if (iLocal_117 == 0)
														{
															if (func_142(&uLocal_198, "ARMYAUD", "ARMY_WRN1a", 7, 0, 0, 0))
															{
																iLocal_66 = unk_0x105601648511CC64();
																iLocal_117 = 1;
															}
														}
														if (iLocal_110 == 0)
														{
															iLocal_70 = unk_0x105601648511CC64();
															iLocal_110 = 1;
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			iLocal_71++;
		}
	}
	if (unk_0x105601648511CC64() > iLocal_56 + 12000)
	{
		if (iLocal_85 == 1 || iLocal_98 == 1)
		{
			if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
			{
				if (!func_124())
				{
					if (func_262())
					{
						iLocal_60 = unk_0x491B2241281A03B7(0, 6);
						if (iLocal_60 == 0)
						{
							func_259(func_261(), "OVER_THERE", 9);
							iLocal_56 = unk_0x105601648511CC64();
						}
						else if (iLocal_60 == 1)
						{
							func_259(func_261(), "PROVOKE_TRESSPASS", 9);
							iLocal_56 = unk_0x105601648511CC64();
						}
						else if (iLocal_60 == 2)
						{
							func_259(func_261(), "UP_THERE", 9);
							iLocal_56 = unk_0x105601648511CC64();
						}
						else if (iLocal_60 == 3)
						{
							func_259(func_261(), "suspect_spotted", 9);
							iLocal_56 = unk_0x105601648511CC64();
						}
						else if (iLocal_60 == 4)
						{
							func_259(func_261(), "GENERIC_INSULT_HIGH", 9);
							iLocal_56 = unk_0x105601648511CC64();
						}
						else if (iLocal_60 == 5)
						{
							func_259(func_261(), "GENERIC_INSULT_MED", 9);
							iLocal_56 = unk_0x105601648511CC64();
						}
					}
				}
			}
		}
	}
}

void func_259(int iParam0, char* sParam1, int iParam2)//Position - 0x15B79
{
	unk_0x53D8178763EDCE60(iParam0, sParam1, func_260(iParam2), 1);
}

int func_260(int iParam0)//Position - 0x15B90
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

int func_261()//Position - 0x15D85
{
	int iVar0;
	
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		unk_0x50AE3E919DC9BC67(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 30f, 0, 1, &iVar0, 0, 1, -1);
	}
	iLocal_58 = 0;
	while (iLocal_58 <= 9)
	{
		if (unk_0x724D816EA203A79E(iLocal_32[iLocal_58]))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_32[iLocal_58]))
			{
				if (iVar0 == iLocal_32[iLocal_58])
				{
					return iLocal_32[iLocal_58];
				}
			}
		}
		iLocal_58++;
	}
	return 0;
}

int func_262()//Position - 0x15DF6
{
	iLocal_59 = 0;
	while (iLocal_59 <= 9)
	{
		if (unk_0x724D816EA203A79E(iLocal_32[iLocal_59]))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_32[iLocal_59]))
			{
				if (func_2(unk_0xBC25C936A095B5BA(), iLocal_32[iLocal_59], 1) < 25f)
				{
					return 1;
				}
			}
		}
		iLocal_59++;
	}
	return 0;
}

int func_263(int iParam0, int iParam1)//Position - 0x15E49
{
	if (unk_0x724D816EA203A79E(iParam0) && !unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), iParam1))
		{
			if (unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), iParam0) || unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_264()//Position - 0x15E95
{
	if (unk_0xD64C9DAB4705D565("ARMY_HELI"))
	{
		if (unk_0x18205062F45F681D("ARMY_HELI"))
		{
			unk_0xBB8B5725691B10D0("ARMY_HELI", false);
		}
	}
}

int func_265()//Position - 0x15EBC
{
	if (Global_16B1B == 10 || Global_16B1B == 9)
	{
		return 1;
	}
	return 0;
}

void func_266()//Position - 0x15EE0
{
	func_267(73);
	unk_0x900CF084251DED26("DOCKP2B", 0);
	while (!unk_0xFA9040D29FE330BD(0))
	{
		SYSTEM::WAIT(0);
	}
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		unk_0x69194304DB679A9C(unk_0xBC25C936A095B5BA(), 0, -1, 0);
	}
	unk_0xE85B33FB221A23CD(5, false);
	unk_0xE85B33FB221A23CD(3, false);
	unk_0xE85B33FB221A23CD(4, false);
	unk_0x379ACE23D404525C(-2024.2f, 2968f, 30.2f, -2004f, 2921.5f, 37.6f, false, 1);
	unk_0x379ACE23D404525C(-2133.3f, 2993.7f, 41.1f, -2152.7f, 3039.4f, 31.6f, false, 1);
	unk_0x379ACE23D404525C(-1884.6f, 2827.7f, 41.8f, -1843.1f, 2772.1f, 29.9f, false, 1);
	iLocal_50 = unk_0x1DAA351326EA3537(-1884.6f, 2827.7f, 41.8f, -1843.1f, 2772.1f, 29.9f, 0, 1, 1, 1);
	iLocal_52 = unk_0x1DAA351326EA3537(-2168.3f, 3223.6f, 52.8f, -2156.2f, 3205f, 29f, 0, 1, 1, 1);
	unk_0x6C5F5B5F6894CCE3(-1876.8f, 2806.1f, 32.3f, 8f, 1, 0, 0, false);
	unk_0x6C5F5B5F6894CCE3(-1857.7f, 2797.9f, 32.4f, 8f, 1, 0, 0, false);
	unk_0x9B90420B04C07704("WantedMusicOnMission", 1);
	unk_0x8510BC031C24B862(joaat("buzzard"), 1);
	unk_0x379ACE23D404525C(-2195.3f, 3231.1f, 41.4f, -2164.1f, 3250.5f, 29f, false, 1);
	unk_0xDD56BACCCF835044(-2195.3f, 3231.1f, 41.4f, -2164.1f, 3250.5f, 29f, 0);
	unk_0x379ACE23D404525C(-2050.8f, 3139.5f, 41f, -2018.5f, 3160f, 27f, false, 1);
	unk_0xDD56BACCCF835044(-2050.8f, 3139.5f, 41f, -2018.5f, 3160f, 27f, 0);
}

void func_267(int iParam0)//Position - 0x160C6
{
	Global_15B7B = 0;
	switch (iParam0)
	{
		case 72:
			func_232(2);
			func_232(4);
			break;
		
		case 73:
			func_232(0);
			func_232(1);
			func_232(7);
			break;
		
		case 92:
			func_232(10);
			func_232(9);
			func_232(13);
			func_232(6);
			break;
		
		case 68:
			func_232(11);
			break;
		
		case 78:
			func_232(14);
			break;
		
		case 79:
			func_232(3);
			break;
		
		default:
			break;
	}
}

void func_268()//Position - 0x16154
{
	func_269();
	unk_0x8510BC031C24B862(joaat("cargobob"), 0);
	unk_0x8510BC031C24B862(joaat("buzzard"), 0);
	unk_0x9332FDC92BD28643(1);
	unk_0x379ACE23D404525C(-2195.3f, 3231.1f, 41.4f, -2164.1f, 3250.5f, 29f, true, 1);
	unk_0x379ACE23D404525C(-2050.8f, 3139.5f, 41f, -2018.5f, 3160f, 27f, true, 1);
	unk_0xF437E11BAB5814AF();
	unk_0x483687B0FCA5415A(iLocal_50, 0);
	unk_0x483687B0FCA5415A(iLocal_51, 0);
	unk_0x483687B0FCA5415A(iLocal_52, 0);
	func_252(1, 1);
	func_252(2, 1);
	func_252(7, 1);
	func_252(8, 1);
	func_252(9, 1);
	func_252(10, 1);
	func_252(4, 1);
	func_252(12, 1);
	func_116();
	if (unk_0xD64C9DAB4705D565("ARMY_GUARD"))
	{
		if (!unk_0x18205062F45F681D("ARMY_GUARD"))
		{
			unk_0xBB8B5725691B10D0("ARMY_GUARD", true);
		}
	}
	unk_0x2D23F487A48A1C6D("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", 1);
	unk_0x5C083DB6ACC5827F("AZ_AFB_ALARM_SPEECH", 0, 0);
	unk_0x9B90420B04C07704("PoliceScannerDisabled", 0);
	unk_0x9B90420B04C07704("WantedMusicOnMission", 0);
	iLocal_55 = 0;
	while (iLocal_55 <= 12)
	{
		func_117(&(Local_53[iLocal_55 /*8*/]));
		iLocal_55++;
	}
	if (unk_0xD64C9DAB4705D565("ARMY_HELI"))
	{
		if (!unk_0x18205062F45F681D("ARMY_HELI"))
		{
			unk_0xBB8B5725691B10D0("ARMY_HELI", true);
		}
	}
	unk_0x926FDA90094AA5FA(iLocal_44);
	unk_0x95E4B6F3ED223F5A();
}

void func_269()//Position - 0x1629C
{
	Global_15B7B = 0;
}

void func_270()//Position - 0x162A9
{
	int iVar0;
	
	if (unk_0xACE95AD318CE412B("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_19B04.f_2360 || func_27(0))
	{
		if (!func_271())
		{
			iVar0 = func_26();
			if (iVar0 != -1)
			{
				if (!func_14(iVar0))
				{
					return;
				}
				unk_0xF0059F27F7BB6680(&(Global_1478C[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_19();
		}
	}
}

int func_271()//Position - 0x1631A
{
	if (((Global_16B1B == 13 || Global_16B1B == 10) || Global_16B1B == 11) || Global_16B1B == 12)
	{
		return 0;
	}
	return 1;
}

