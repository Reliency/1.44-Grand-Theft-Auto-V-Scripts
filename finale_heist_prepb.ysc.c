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
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_36[2] = { 0, 0 };
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60[7] = { 0, 0, 0, 0, 0, 0, 0 };
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
	int iLocal_80[2] = { 0, 0 };
	int iLocal_81[2] = { 0, 0 };
	int iLocal_82[2] = { 0, 0 };
	int iLocal_83[2] = { 0, 0 };
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	vector3 vLocal_92 = { 0f, 0f, 0f };
	vector3 vLocal_93 = { 0f, 0f, 0f };
	vector3 vLocal_94 = { 0f, 0f, 0f };
	vector3 vLocal_95[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_96 = { 0f, 0f, 0f };
	float fLocal_97 = 0f;
	char* sLocal_98 = NULL;
	var uLocal_99 = 16;
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
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_278[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_279 = 0;
	int iLocal_280[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_281[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_282[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_283[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_284[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_285[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303[2] = { 0, 0 };
	int iLocal_304[2] = { 0, 0 };
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	int iLocal_311 = 0;
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	int iLocal_320 = 0;
	int iLocal_321 = 0;
	int iLocal_322 = 0;
	int iLocal_323 = 0;
	int iLocal_324 = 0;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328[2] = { 0, 0 };
	int iLocal_329[2] = { 0, 0 };
	int iLocal_330[2] = { 0, 0 };
	int iLocal_331[2] = { 0, 0 };
	int iLocal_332[2] = { 0, 0 };
	int iLocal_333[2] = { 0, 0 };
	int iLocal_334[2] = { 0, 0 };
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340[2] = { 0, 0 };
	int iLocal_341[2] = { 0, 0 };
	int iLocal_342 = 0;
	int iLocal_343 = 0;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	int iLocal_359 = 0;
	int iLocal_360 = 0;
	int iLocal_361[2] = { 0, 0 };
	int iLocal_362 = 0;
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
	vLocal_92 = { 27.7189f, -608.7927f, 30.6293f };
	vLocal_96 = { 903.1f, -1548.8f, 29.8f };
	fLocal_97 = 0f;
	if (unk_0xE8A79675302ED812(3))
	{
		unk_0x3857DADBD6EC8A54("FHPRB_STOP");
		func_204();
		func_203();
	}
	if (func_202(0))
	{
		unk_0x900CF084251DED26("FINPRB", 0);
	}
	unk_0xB2CB6EAA6B280A84("WorkerPedMainGroup", &iLocal_264);
	unk_0xB2CB6EAA6B280A84("GuardMainGroup", &iLocal_265);
	unk_0x8510BC031C24B862(joaat("packer"), true);
	unk_0xA902E18EDF6FA0C8(5, iLocal_265, 1862763509);
	unk_0xA902E18EDF6FA0C8(5, iLocal_264, 1862763509);
	unk_0xA902E18EDF6FA0C8(1, iLocal_265, iLocal_264);
	unk_0xA902E18EDF6FA0C8(1, iLocal_264, iLocal_265);
	unk_0xA902E18EDF6FA0C8(1, iLocal_265, -1533126372);
	unk_0xA902E18EDF6FA0C8(1, -1533126372, iLocal_265);
	unk_0xA902E18EDF6FA0C8(1, iLocal_264, -1533126372);
	unk_0xA902E18EDF6FA0C8(1, -1533126372, iLocal_264);
	while (true)
	{
		unk_0x2E94C9549322098D("M_FINPRB", 0);
		if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 230, false);
		}
		func_200();
		if (iLocal_272 == 0)
		{
			if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0)
			{
				func_199(27, 1);
				iLocal_272 = 1;
			}
		}
		if (iLocal_295 == 1)
		{
			func_195();
		}
		func_192();
		func_185();
		func_177();
		func_172();
		func_169();
		switch (iLocal_28)
		{
			case 0:
				func_168();
				break;
			
			case 1:
				func_165();
				break;
			
			case 2:
				func_141();
				break;
			
			case 3:
				func_139();
				break;
			
			case 4:
				func_115();
				break;
			
			case 5:
				func_20();
				break;
			
			case 6:
				func_1();
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x1EC
{
	switch (iLocal_53)
	{
		case 0:
			unk_0xEB233A3B7635D2AC();
			unk_0x7456702622C62EA0(1);
			unk_0x3857DADBD6EC8A54("FHPRA_FAIL");
			switch (iLocal_30)
			{
				case 0:
					break;
				
				case 4:
					sLocal_98 = "FPB_FAIL1";
					break;
				
				case 3:
					sLocal_98 = "FPB_FAIL2";
					break;
				
				case 1:
					sLocal_98 = "FPB_FAIL3";
					break;
				
				case 2:
					sLocal_98 = "FPB_FAIL10";
					break;
				
				case 5:
					if (func_14() == 0)
					{
						sLocal_98 = "FPB_FAIL7";
					}
					if (func_14() == 2)
					{
						sLocal_98 = "FPB_FAIL8";
					}
					if (func_14() == 1)
					{
						sLocal_98 = "FPB_FAIL9";
					}
					break;
				
				case 6:
					sLocal_98 = "FPB_FAIL11";
					break;
			}
			if (iLocal_30 == 0)
			{
				func_6(0);
			}
			else
			{
				func_4(sLocal_98);
			}
			iLocal_53 = 1;
			break;
		
		case 1:
			if (func_3())
			{
				if (func_2())
				{
				}
				func_203();
			}
			break;
	}
}

int func_2()//Position - 0x2CD
{
	if (Global_16B1B == 7)
	{
		return 1;
	}
	return 0;
}

int func_3()//Position - 0x2E2
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

void func_4(char* sParam0)//Position - 0x30F
{
	func_5(sParam0);
	func_6(0);
}

void func_5(char* sParam0)//Position - 0x322
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

void func_6(int iParam0)//Position - 0x361
{
	int iVar0;
	
	if (Global_19B04.f_2360 || func_202(0))
	{
		iVar0 = func_13();
		if (!func_7(iVar0))
		{
			return;
		}
		unk_0xF0059F27F7BB6680(&(Global_1478C[iVar0 /*5*/].f_1), 5);
		Global_16B3F = iParam0;
	}
}

int func_7(int iParam0)//Position - 0x3A6
{
	int iVar0;
	int iVar1;
	
	func_12();
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		unk_0x31E433A1F2A666D9(5000);
	}
	iVar0 = Global_1478C[iParam0 /*5*/];
	iVar1 = Global_1164F.f_6D[iVar0 /*4*/];
	func_11(iVar1, 1);
	unk_0xD0D466F17C0F30DB(unk_0xB5CEFD608600A09F());
	unk_0xD50A43D7C495F078(unk_0xB5CEFD608600A09F());
	func_8(&(Global_19B04.f_932.f_21B), iVar1);
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

void func_8(var uParam0, int iParam1)//Position - 0x4BD
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
			if (!func_10(Global_19B04.f_4848[iVar0], &vVar2, &fVar3))
			{
				Global_19B04.f_4848[iVar0] = 318;
				func_9(&(uParam0->f_8E4[iVar0]));
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

void func_9(var uParam0)//Position - 0x686
{
	*uParam0 = -15;
}

int func_10(int iParam0, var uParam1, float fParam2)//Position - 0x694
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
			return func_10(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_10(8, uParam1, fParam2);
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

void func_11(int iParam0, bool bParam1)//Position - 0x1003
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

void func_12()//Position - 0x1041
{
	Global_16B3E = 1;
	if (unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1))
	{
		if (unk_0xF1734B55490E9045(&Global_1162A))
		{
			switch (func_14())
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
			switch (func_14())
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

int func_13()//Position - 0x1128
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

int func_14()//Position - 0x115D
{
	func_15();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_15()//Position - 0x1176
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_19(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_18(unk_0xBC25C936A095B5BA());
			if (func_17(iVar0) && (!func_16(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_17(Global_19B04.f_932.f_21B.f_10CD))
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

bool func_16(int iParam0)//Position - 0x1273
{
	return Global_8C41 == iParam0;
}

bool func_17(int iParam0)//Position - 0x1281
{
	return iParam0 < 3;
}

int func_18(int iParam0)//Position - 0x128D
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_19(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_19(int iParam0)//Position - 0x12CA
{
	if (func_17(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_20()//Position - 0x12F4
{
	func_169();
	if (iLocal_53 == 0)
	{
		if (iLocal_266 == 1)
		{
			func_34();
			iLocal_266 = 0;
		}
		iLocal_273 = 0;
		iLocal_274 = 0;
		iLocal_275 = 0;
		unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 0);
		if (func_33(iLocal_37, 0))
		{
			if (!func_32(iLocal_37))
			{
				while (!func_31(iLocal_37, 0))
				{
					SYSTEM::WAIT(0);
				}
			}
		}
		if (func_33(iLocal_39, 0))
		{
			if (!func_32(iLocal_39))
			{
				while (!func_31(iLocal_39, 0))
				{
					SYSTEM::WAIT(0);
				}
			}
		}
		if (func_33(iLocal_38, 0))
		{
			if (!func_32(iLocal_38))
			{
				while (!func_31(iLocal_38, 0))
				{
					SYSTEM::WAIT(0);
				}
			}
		}
		if (unk_0x17FAADF9916EF741())
		{
			if (!func_30())
			{
				unk_0x8B6B50EADA01F251(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true));
			}
			func_27(iLocal_33, -1, 1);
		}
		if (!unk_0x726D9204B160D23E())
		{
			unk_0x829FA4611BD56B44(800);
		}
		iLocal_295 = 1;
		iLocal_53 = 1;
	}
	if (iLocal_53 == 1)
	{
		if (unk_0x724D816EA203A79E(iLocal_33))
		{
			if (unk_0xE59B7F5A03335350(iLocal_33, 0))
			{
				if (func_14() == 0)
				{
					if (func_33(iLocal_39, 0))
					{
						if (unk_0x62F3A07C43FFB568(iLocal_39, iLocal_33, 0))
						{
							unk_0xA4E856A8CD53B8DF(iLocal_39);
							unk_0x57EB4CC8F1928A47(iLocal_39);
							unk_0x2E35C4FA5F0ED22F(iLocal_39, true);
							unk_0x932E201A82D2EDB8(iLocal_39, iLocal_33, 0);
						}
					}
					if (func_33(iLocal_38, 0))
					{
						if (unk_0x62F3A07C43FFB568(iLocal_38, iLocal_33, 0))
						{
							unk_0xA4E856A8CD53B8DF(iLocal_38);
							unk_0x57EB4CC8F1928A47(iLocal_38);
							unk_0x2E35C4FA5F0ED22F(iLocal_38, true);
							unk_0x932E201A82D2EDB8(iLocal_38, iLocal_33, 0);
						}
					}
				}
				if (func_14() == 2)
				{
					if (func_33(iLocal_37, 0))
					{
						if (unk_0x62F3A07C43FFB568(iLocal_37, iLocal_33, 0))
						{
							unk_0xA4E856A8CD53B8DF(iLocal_37);
							unk_0x57EB4CC8F1928A47(iLocal_37);
							unk_0x2E35C4FA5F0ED22F(iLocal_37, true);
							unk_0x932E201A82D2EDB8(iLocal_37, iLocal_33, 0);
						}
					}
					if (func_33(iLocal_38, 0))
					{
						if (unk_0x62F3A07C43FFB568(iLocal_38, iLocal_33, 0))
						{
							unk_0xA4E856A8CD53B8DF(iLocal_38);
							unk_0x57EB4CC8F1928A47(iLocal_38);
							unk_0x2E35C4FA5F0ED22F(iLocal_38, true);
							unk_0x932E201A82D2EDB8(iLocal_38, iLocal_33, 0);
						}
					}
				}
				if (func_14() == 1)
				{
					if (func_33(iLocal_37, 0))
					{
						if (unk_0x62F3A07C43FFB568(iLocal_37, iLocal_33, 0))
						{
							unk_0xA4E856A8CD53B8DF(iLocal_37);
							unk_0x57EB4CC8F1928A47(iLocal_37);
							unk_0x2E35C4FA5F0ED22F(iLocal_37, true);
							unk_0x932E201A82D2EDB8(iLocal_37, iLocal_33, 0);
						}
					}
					if (func_33(iLocal_39, 0))
					{
						if (unk_0x62F3A07C43FFB568(iLocal_39, iLocal_33, 0))
						{
							unk_0xA4E856A8CD53B8DF(iLocal_39);
							unk_0x57EB4CC8F1928A47(iLocal_39);
							unk_0x2E35C4FA5F0ED22F(iLocal_39, true);
							unk_0x932E201A82D2EDB8(iLocal_39, iLocal_33, 0);
						}
					}
				}
				if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_33, 0))
				{
					unk_0x932E201A82D2EDB8(unk_0xBC25C936A095B5BA(), iLocal_33, 0);
				}
			}
		}
		SYSTEM::SETTIMERB(0);
		iLocal_53 = 2;
	}
	if (iLocal_53 == 2)
	{
		if (unk_0x724D816EA203A79E(iLocal_33))
		{
			if (unk_0xE59B7F5A03335350(iLocal_33, 0))
			{
				if (iLocal_275 == 0)
				{
					if (func_14() == 0)
					{
						if (func_33(iLocal_39, 0))
						{
							if (!unk_0x62F3A07C43FFB568(iLocal_39, iLocal_33, 0))
							{
								if (func_32(iLocal_39))
								{
									if (func_24(iLocal_39))
									{
										iLocal_275 = 1;
									}
								}
								else
								{
									iLocal_275 = 1;
								}
							}
						}
						else
						{
							iLocal_273 = 1;
						}
						if (func_33(iLocal_38, 0))
						{
							if (!unk_0x62F3A07C43FFB568(iLocal_38, iLocal_33, 0))
							{
								if (func_32(iLocal_38))
								{
									if (func_24(iLocal_38))
									{
										iLocal_275 = 1;
									}
								}
								else
								{
									iLocal_275 = 1;
								}
							}
						}
						else
						{
							iLocal_274 = 1;
						}
					}
					if (func_14() == 2)
					{
						if (func_33(iLocal_37, 0))
						{
							if (!unk_0x62F3A07C43FFB568(iLocal_37, iLocal_33, 0))
							{
								if (func_32(iLocal_37))
								{
									if (func_24(iLocal_37))
									{
										iLocal_275 = 1;
									}
								}
								else
								{
									iLocal_275 = 1;
								}
							}
						}
						else
						{
							iLocal_273 = 1;
						}
						if (func_33(iLocal_38, 0))
						{
							if (!unk_0x62F3A07C43FFB568(iLocal_38, iLocal_33, 0))
							{
								if (func_32(iLocal_38))
								{
									if (func_24(iLocal_38))
									{
										iLocal_275 = 1;
									}
								}
								else
								{
									iLocal_275 = 1;
								}
							}
						}
						else
						{
							iLocal_274 = 1;
						}
					}
					if (func_14() == 1)
					{
						if (func_33(iLocal_37, 0))
						{
							if (!unk_0x62F3A07C43FFB568(iLocal_37, iLocal_33, 0))
							{
								if (func_32(iLocal_37))
								{
									if (func_24(iLocal_37))
									{
										iLocal_275 = 1;
									}
								}
								else
								{
									iLocal_275 = 1;
								}
							}
						}
						else
						{
							iLocal_273 = 1;
						}
						if (func_33(iLocal_39, 0))
						{
							if (!unk_0x62F3A07C43FFB568(iLocal_39, iLocal_33, 0))
							{
								if (func_32(iLocal_39))
								{
									if (func_24(iLocal_39))
									{
										iLocal_275 = 1;
									}
								}
								else
								{
									iLocal_275 = 1;
								}
							}
						}
						else
						{
							iLocal_274 = 1;
						}
					}
					if (iLocal_273 == 1 && iLocal_274 == 1)
					{
						iLocal_275 = 1;
					}
				}
				else if (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_33, 1))
				{
					unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
					SYSTEM::SETTIMERB(0);
					iLocal_53 = 3;
				}
			}
		}
	}
	if (iLocal_53 == 3)
	{
		if (unk_0x724D816EA203A79E(iLocal_33))
		{
			if (unk_0xE59B7F5A03335350(iLocal_33, 0))
			{
				unk_0x127F627F30266DD9(iLocal_33, 0);
				unk_0xD421BC740C5340C3(iLocal_33, 2);
				unk_0x346478B12F69D4E3(iLocal_33, true);
			}
		}
		if (unk_0x724D816EA203A79E(iLocal_32))
		{
			if (unk_0xE59B7F5A03335350(iLocal_32, 0))
			{
				unk_0x346478B12F69D4E3(iLocal_32, true);
			}
		}
		iLocal_53 = 4;
	}
	if (iLocal_53 == 4)
	{
		func_21();
	}
}

void func_21()//Position - 0x1781
{
	func_22(0, 0);
	func_203();
}

void func_22(bool bParam0, int iParam1)//Position - 0x1793
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
		if ((func_202(0) && Global_11638.f_1 == 1) && func_23(Global_11638))
		{
		}
		else
		{
			Global_DA9F = 1;
		}
	}
	if (Global_19B04.f_2360 || func_202(0))
	{
		iVar0 = func_13();
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

int func_23(int iParam0)//Position - 0x1869
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

int func_24(int iParam0)//Position - 0x18A7
{
	int iVar0;
	
	return 0;
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		iVar0 = func_18(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_25(iVar0) != iParam0)
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

int func_25(int iParam0)//Position - 0x18FF
{
	if (iParam0 > 3)
	{
		return 0;
	}
	if (iParam0 == func_14())
	{
		return unk_0xBC25C936A095B5BA();
	}
	return Global_161D2[func_26(iParam0)];
}

int func_26(int iParam0)//Position - 0x1930
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

void func_27(int iParam0, int iParam1, int iParam2)//Position - 0x196B
{
	if (func_29() && func_30())
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
		func_28(0);
	}
}

void func_28(int iParam0)//Position - 0x1A2F
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

int func_29()//Position - 0x1A58
{
	if (Global_16B1B == 10 || Global_16B1B == 9)
	{
		return 1;
	}
	return 0;
}

bool func_30()//Position - 0x1A7C
{
	return unk_0xFA30DFD0084E92FE(Global_16B1B.f_14, 13);
}

int func_31(int iParam0, int iParam1)//Position - 0x1A90
{
	int iVar0;
	
	return 0;
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		iVar0 = func_18(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_25(iVar0) != iParam0)
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
			unk_0xB71D41C0310C93DE(iParam0, false, 1);
			unk_0xF0059F27F7BB6680(&Global_15B7A, iVar0);
			return 1;
		}
	}
	return 0;
}

int func_32(int iParam0)//Position - 0x1B17
{
	int iVar0;
	
	return 0;
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		iVar0 = func_18(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_25(iVar0) != iParam0)
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

int func_33(int iParam0, int iParam1)//Position - 0x1B60
{
	int iVar0;
	
	return 0;
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		iVar0 = func_18(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_25(iVar0) != iParam0)
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

void func_34()//Position - 0x1BBC
{
	iLocal_295 = 0;
	iLocal_337 = 0;
	unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 0, 0);
	unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
	if (!unk_0x17FAADF9916EF741())
	{
		unk_0x7A41D32A383895D8(0);
	}
	func_113();
	unk_0xEB233A3B7635D2AC();
	func_112();
	func_111();
	func_36();
	if (!func_30())
	{
		func_35();
	}
	unk_0xF3F01A78937DC905(0f);
}

void func_35()//Position - 0x1C11
{
	switch (iLocal_28)
	{
		case 2:
			unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), 856.9501f, -1573.177f, 29.4751f, 1, false, 0, 1);
			unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), 288.3586f);
			break;
		
		case 3:
			unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), 856.9501f, -1573.177f, 29.4751f, 1, false, 0, 1);
			unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), 288.3586f);
			break;
		
		case 4:
			if (unk_0x724D816EA203A79E(iLocal_33))
			{
				if (unk_0xE59B7F5A03335350(iLocal_33, 0))
				{
					if (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_33, 0))
					{
						unk_0xBD53A029D0155A42(unk_0xBC25C936A095B5BA(), iLocal_33, -1);
					}
				}
			}
			break;
		
		case 5:
			if (unk_0x724D816EA203A79E(iLocal_33))
			{
				if (unk_0xE59B7F5A03335350(iLocal_33, 0))
				{
					if (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_33, 0))
					{
						unk_0xBD53A029D0155A42(unk_0xBC25C936A095B5BA(), iLocal_33, -1);
					}
				}
			}
			break;
	}
}

void func_36()//Position - 0x1CEE
{
	switch (iLocal_28)
	{
		case 3:
			iLocal_313 = 0;
			iLocal_314 = 0;
			iLocal_315 = 0;
			func_107();
			if (func_106() && func_103(7f, 7f, 7f, 1))
			{
				func_101();
				while (!func_100())
				{
					SYSTEM::WAIT(0);
				}
				iLocal_34 = func_37(818.8139f, -1610.406f, 30.7951f, 264.412f);
			}
			unk_0xDF53A66AEE1401AA(0.01f);
			break;
		
		case 4:
			iLocal_313 = 0;
			iLocal_314 = 0;
			iLocal_315 = 0;
			func_107();
			if (unk_0x724D816EA203A79E(iLocal_33))
			{
				if (unk_0xE59B7F5A03335350(iLocal_33, 0))
				{
					unk_0x641B19E156645A92(iLocal_33, 89.2131f, -596.9456f, 30.6224f, 1, false, 0, 1);
					unk_0x019CE76D5286C95C(iLocal_33, 161.1163f);
				}
			}
			unk_0x6C5F5B5F6894CCE3(41f, -615f, 30f, 50f, 1, 1, 0, false);
			break;
		
		case 5:
			iLocal_313 = 1;
			iLocal_314 = 1;
			iLocal_315 = 1;
			func_107();
			unk_0x6C5F5B5F6894CCE3(41f, -615f, 30f, 50f, 1, 1, 0, false);
			if (unk_0x724D816EA203A79E(iLocal_33))
			{
				if (unk_0xE59B7F5A03335350(iLocal_33, 0))
				{
					unk_0x641B19E156645A92(iLocal_33, 28.4065f, -608.9371f, 30.6293f, 1, false, 0, 1);
					unk_0x019CE76D5286C95C(iLocal_33, 70.7778f);
				}
			}
			unk_0xF243B7A14FCFD0F4(joaat("s_m_m_security_01"));
			while (!unk_0xD6513D668481290A(joaat("s_m_m_security_01")))
			{
				SYSTEM::WAIT(0);
			}
			if (!unk_0x724D816EA203A79E(iLocal_40))
			{
				iLocal_40 = unk_0x01B3635C3E8EDD81(26, joaat("s_m_m_security_01"), 64.904f, -617.9949f, 30.7028f, 223.555f, 1, true);
				unk_0x2CA123B0622F495C(joaat("s_m_m_security_01"));
				unk_0xC8FD3EBBB90E8D7F(iLocal_40, 324, true);
			}
			break;
	}
}

int func_37(vector3 vParam0, float fParam1)//Position - 0x1E97
{
	return func_38(&(Global_17646.f_B3B), vParam0, fParam1, 0);
}

int func_38(var uParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0x1EB1
{
	int iVar0;
	vector3 vVar1;
	bool bVar2;
	var uVar3;
	int iVar4;
	
	if (func_99(uParam0))
	{
		if (func_98(vParam1, 0f, 0f, 0f, 0))
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

void func_39(int iParam0, int iParam1)//Position - 0x2162
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

void func_40(int iParam0, var uParam1)//Position - 0x2364
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

int func_41(int iParam0)//Position - 0x260D
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

int func_42(int iParam0, var uParam1, var uParam2)//Position - 0x26BD
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

int func_43(int iParam0)//Position - 0x2797
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

void func_44(var uParam0)//Position - 0x27B7
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

int func_45(int iParam0)//Position - 0x2867
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

int func_46(int iParam0)//Position - 0x2944
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

int func_47(int iParam0, bool bParam1)//Position - 0x2AF5
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

int func_48(int iParam0)//Position - 0x2C83
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

int func_49()//Position - 0x2D4F
{
	if (unk_0x8ACB0C3FACC09467())
	{
		return unk_0xC9D803F7D7E10861();
	}
	return 0;
}

int func_50(int iParam0)//Position - 0x2D66
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

int func_51()//Position - 0x480E
{
	return 0;
}

int func_52()//Position - 0x4817
{
	return 1;
}

int func_53()//Position - 0x4820
{
	return 1;
}

int func_54()//Position - 0x4829
{
	if (unk_0x7B2F21BFE86AEB61(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_55()//Position - 0x4842
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

int func_56(int iParam0)//Position - 0x48FD
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

int func_57(int iParam0)//Position - 0x4943
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

int func_58(int iParam0)//Position - 0x497E
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

int func_59(int iParam0)//Position - 0x49FA
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

int func_60(int iParam0)//Position - 0x4AE2
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

int func_61(int iParam0, int iParam1, bool bParam2)//Position - 0x4B45
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

int func_62(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x4BB6
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

void func_63(int iParam0, bool bParam1)//Position - 0x4C8E
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

void func_64(int iParam0, int iParam1, bool bParam2)//Position - 0x4CEB
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

bool func_65(int iParam0, int iParam1)//Position - 0x4D26
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_19B04.f_7F22[iParam0], iParam1);
}

void func_66(int iParam0)//Position - 0x4D49
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

void func_67(var uParam0, var uParam1)//Position - 0x4EBB
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

int func_68(int iParam0, int iParam1)//Position - 0x4F87
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

int func_69(var uParam0)//Position - 0x4FF9
{
	return *uParam0;
}

int func_70(var uParam0, int iParam1)//Position - 0x5004
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
		if (!func_98(Global_19B04.f_7F22.f_748[uParam0->f_E /*3*/], 0f, 0f, 0f, 0))
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
		if (!func_98(Global_19B04.f_932.f_21B.f_DF0[1 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_19B04.f_932.f_21B.f_DF0[1 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_19B04.f_932.f_21B.f_E05[1 /*4*/][uParam0->f_C];
		}
	}
	else if (unk_0xFA30DFD0084E92FE(uParam0->f_9, 20))
	{
		if (!func_98(Global_19B04.f_932.f_21B.f_DF0[0 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_19B04.f_932.f_21B.f_DF0[0 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_19B04.f_932.f_21B.f_E05[0 /*4*/][uParam0->f_C];
		}
	}
	return iVar0;
}

int func_71(int iParam0, int iParam1)//Position - 0x66FB
{
	struct<82> Var0;
	
	if (func_17(iParam0))
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

void func_72(int iParam0, var uParam1, int iParam2)//Position - 0x673D
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

int func_73(int iParam0)//Position - 0x6999
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

int func_74(int iParam0, vector3 vParam1, bool bParam2)//Position - 0x6A5C
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
					if ((!bParam2 || func_98(vParam1, 0f, 0f, 0f, 0)) || unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(iParam0, true), unk_0x541C2AEF053615BC(uVar1[iVar3], true), true) < 10f)
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

int func_75(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0x6C64
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

int func_76(int iParam0, int iParam1, bool bParam2)//Position - 0x6CDF
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

void func_77(int iParam0, int iParam1)//Position - 0x6D40
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

void func_78(int iParam0, int iParam1)//Position - 0x6DC2
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

void func_79(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x6E60
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

int func_80(int iParam0, var uParam1, var uParam2)//Position - 0x73AE
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

int func_81(int iParam0)//Position - 0x752C
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

void func_82(var uParam0)//Position - 0x7608
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

int func_83(int iParam0, int iParam1)//Position - 0x7648
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

int func_84(int iParam0, int iParam1)//Position - 0x772D
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

void func_85(int iParam0, int iParam1)//Position - 0x79A0
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

bool func_86()//Position - 0x7A05
{
	return unk_0x7B2F21BFE86AEB61(-1691188696);
}

int func_87(int iParam0)//Position - 0x7A16
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

int func_88(int iParam0)//Position - 0x7A61
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

int func_89(int iParam0)//Position - 0x7AE8
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

int func_90(int iParam0)//Position - 0x7B17
{
	if (func_93(iParam0) == 233)
	{
		return func_91(iParam0);
	}
	return -1;
}

int func_91(int iParam0)//Position - 0x7B34
{
	if (func_92(iParam0, 0))
	{
		return Global_18C80F[iParam0 /*558*/].f_B.f_B0;
	}
	return -1;
}

int func_92(int iParam0, int iParam1)//Position - 0x7B57
{
	if (Global_18C80F[iParam0 /*558*/].f_B.f_21 != -1 || (iParam1 && Global_18C80F[iParam0 /*558*/].f_B.f_20 != -1))
	{
		return 1;
	}
	return 0;
}

int func_93(int iParam0)//Position - 0x7B92
{
	if (func_92(iParam0, 0))
	{
		return Global_18C80F[iParam0 /*558*/].f_B.f_21;
	}
	return -1;
}

int func_94(int iParam0, int iParam1)//Position - 0x7BB5
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

int func_95(int iParam0, bool bParam1, bool bParam2)//Position - 0x7C02
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

void func_96(vector3 vParam0, float fParam1, bool bParam2)//Position - 0x7C4C
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

int func_97(var uParam0)//Position - 0x7C9C
{
	if (func_99(uParam0))
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

bool func_98(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x7CD1
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_99(var uParam0)//Position - 0x7D18
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

bool func_100()//Position - 0x7D77
{
	return func_97(&(Global_17646.f_B3B));
}

void func_101()//Position - 0x7D8A
{
	func_102(&(Global_17646.f_B3B));
}

void func_102(var uParam0)//Position - 0x7D9D
{
	if (func_99(uParam0))
	{
		unk_0xF243B7A14FCFD0F4(uParam0->f_C.f_42);
	}
}

int func_103(vector3 vParam0, int iParam1)//Position - 0x7DBB
{
	return func_104(Global_17646.f_B3B.f_C.f_42, vParam0, iParam1);
}

int func_104(int iParam0, vector3 vParam1, int iParam2)//Position - 0x7DD8
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam2 == 1)
	{
		vParam1 = { func_105() };
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

Vector3 func_105()//Position - 0x7E42
{
	return 2.55f, 5.665f, 2.55f;
}

int func_106()//Position - 0x7E59
{
	return func_99(&(Global_17646.f_B3B));
}

void func_107()//Position - 0x7E6C
{
	unk_0xF243B7A14FCFD0F4(joaat("armytrailer2"));
	unk_0xF243B7A14FCFD0F4(joaat("packer"));
	unk_0xF243B7A14FCFD0F4(joaat("s_m_y_construct_01"));
	unk_0xF243B7A14FCFD0F4(joaat("s_m_m_security_01"));
	unk_0xF243B7A14FCFD0F4(joaat("bison2"));
	while ((((!unk_0xD6513D668481290A(joaat("armytrailer2")) || !unk_0xD6513D668481290A(joaat("packer"))) || !unk_0xD6513D668481290A(joaat("s_m_y_construct_01"))) || !unk_0xD6513D668481290A(joaat("s_m_m_security_01"))) || !unk_0xD6513D668481290A(joaat("bison2")))
	{
		SYSTEM::WAIT(0);
	}
	if (!unk_0x724D816EA203A79E(iLocal_32))
	{
		if (unk_0x724D816EA203A79E(Global_15DFD[1]))
		{
			unk_0x77815D3407C6700D(Global_15DFD[1], true, 1);
			iLocal_32 = Global_15DFD[1];
			unk_0x0E622862E5E566BB(iLocal_32);
		}
		else
		{
			iLocal_32 = unk_0x61C05BF08A1E0EFE(joaat("armytrailer2"), 919.303f, -1553.88f, 29.7789f, 167.1917f, 1, 1, 0);
			unk_0x0E622862E5E566BB(iLocal_32);
		}
	}
	if (!unk_0x724D816EA203A79E(iLocal_33))
	{
		if (unk_0x724D816EA203A79E(Global_15DFD[2]))
		{
			unk_0x77815D3407C6700D(Global_15DFD[2], true, 1);
			iLocal_33 = Global_15DFD[2];
			unk_0xA73D1278857991A2(iLocal_33, true);
			unk_0xD421BC740C5340C3(iLocal_33, 7);
			func_110(iLocal_33, -1);
			func_109(iLocal_33, -1);
		}
		else
		{
			iLocal_33 = unk_0x61C05BF08A1E0EFE(joaat("packer"), 919.303f, -1553.88f, 29.7789f, 167.1917f, 1, 1, 0);
			unk_0xA73D1278857991A2(iLocal_33, true);
			unk_0xD421BC740C5340C3(iLocal_33, 7);
			func_110(iLocal_33, -1);
			func_109(iLocal_33, -1);
		}
	}
	unk_0x0A0AE625CFB21683(iLocal_33, iLocal_32, 0.5f);
	unk_0x2CA123B0622F495C(joaat("armytrailer2"));
	unk_0x2CA123B0622F495C(joaat("packer"));
	unk_0x2CA123B0622F495C(joaat("bison2"));
	if (!unk_0x724D816EA203A79E(iLocal_35[0]))
	{
		if (unk_0x724D816EA203A79E(Global_15DFD.f_9[0]))
		{
			unk_0x77815D3407C6700D(Global_15DFD.f_9[0], true, 1);
			iLocal_35[0] = Global_15DFD.f_9[0];
			unk_0x4106FAF8AA1D69D5(iLocal_35[0], iLocal_264);
			func_108(iLocal_35[0], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x2E35C4FA5F0ED22F(iLocal_35[0], true);
		}
		else
		{
			iLocal_35[0] = unk_0x01B3635C3E8EDD81(26, joaat("s_m_y_construct_01"), 912.34f, -1543.297f, 29.6469f, 16.169f, 1, true);
			unk_0x4106FAF8AA1D69D5(iLocal_35[0], iLocal_264);
			if (unk_0xABB25056487DF1D7(912.3f, -1542.6f, 30.4f, 3f, 0))
			{
				unk_0xB0B4388ED09F180E(iLocal_35[0], 912.3f, -1542.6f, 30.4f, 5f, 0);
			}
			unk_0x2E35C4FA5F0ED22F(iLocal_35[0], true);
			func_108(iLocal_35[0], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
		}
	}
	if (!unk_0x724D816EA203A79E(iLocal_35[1]))
	{
		if (unk_0x724D816EA203A79E(Global_15DFD.f_9[1]))
		{
			unk_0x77815D3407C6700D(Global_15DFD.f_9[1], true, 1);
			iLocal_35[1] = Global_15DFD.f_9[1];
			unk_0x4106FAF8AA1D69D5(iLocal_35[1], iLocal_264);
			func_108(iLocal_35[1], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x2E35C4FA5F0ED22F(iLocal_35[1], true);
		}
		else
		{
			iLocal_35[1] = unk_0x01B3635C3E8EDD81(26, joaat("s_m_y_construct_01"), 917.5028f, -1517.401f, 29.9673f, 158.5738f, 1, true);
			unk_0x4106FAF8AA1D69D5(iLocal_35[1], iLocal_264);
			if (unk_0xABB25056487DF1D7(917.5028f, -1517.401f, 29.9673f, 3f, 0))
			{
				unk_0xB0B4388ED09F180E(iLocal_35[1], 917.5028f, -1517.401f, 29.9673f, 5f, 0);
			}
			func_108(iLocal_35[1], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x2E35C4FA5F0ED22F(iLocal_35[1], true);
		}
	}
	if (!unk_0x724D816EA203A79E(iLocal_35[2]))
	{
		if (unk_0x724D816EA203A79E(Global_15DFD.f_9[2]))
		{
			unk_0x77815D3407C6700D(Global_15DFD.f_9[2], true, 1);
			iLocal_35[2] = Global_15DFD.f_9[2];
			unk_0x4106FAF8AA1D69D5(iLocal_35[2], iLocal_264);
			func_108(iLocal_35[2], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x2E35C4FA5F0ED22F(iLocal_35[2], true);
		}
		else
		{
			iLocal_35[2] = unk_0x01B3635C3E8EDD81(26, joaat("s_m_y_construct_01"), 869.6423f, -1541.423f, 29.2516f, 346.9848f, 1, true);
			unk_0x4106FAF8AA1D69D5(iLocal_35[2], iLocal_264);
			if (unk_0xABB25056487DF1D7(869.6423f, -1541.423f, 29.2516f, 3f, 0))
			{
				unk_0xB0B4388ED09F180E(iLocal_35[2], 869.6423f, -1541.423f, 29.2516f, 5f, 0);
			}
			func_108(iLocal_35[2], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x2E35C4FA5F0ED22F(iLocal_35[2], true);
		}
	}
	if (!unk_0x724D816EA203A79E(iLocal_35[3]))
	{
		if (unk_0x724D816EA203A79E(Global_15DFD.f_9[3]))
		{
			unk_0x77815D3407C6700D(Global_15DFD.f_9[3], true, 1);
			iLocal_35[3] = Global_15DFD.f_9[3];
			unk_0x4106FAF8AA1D69D5(iLocal_35[3], iLocal_264);
			func_108(iLocal_35[3], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x2E35C4FA5F0ED22F(iLocal_35[3], true);
		}
		else
		{
			iLocal_35[3] = unk_0x01B3635C3E8EDD81(26, joaat("s_m_y_construct_01"), 884.3046f, -1573.188f, 29.8247f, 182.9722f, 1, true);
			unk_0x4106FAF8AA1D69D5(iLocal_35[3], iLocal_264);
			if (unk_0xABB25056487DF1D7(884.3046f, -1573.188f, 29.8247f, 3f, 0))
			{
				unk_0xB0B4388ED09F180E(iLocal_35[3], 884.3046f, -1573.188f, 29.8247f, 5f, 0);
			}
			func_108(iLocal_35[3], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x2E35C4FA5F0ED22F(iLocal_35[3], true);
		}
	}
	if (!unk_0x724D816EA203A79E(iLocal_35[4]))
	{
		if (unk_0x724D816EA203A79E(Global_15DFD.f_9[4]))
		{
			unk_0x77815D3407C6700D(Global_15DFD.f_9[4], true, 1);
			iLocal_35[4] = Global_15DFD.f_9[4];
			unk_0x4106FAF8AA1D69D5(iLocal_35[4], iLocal_264);
			func_108(iLocal_35[4], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x2E35C4FA5F0ED22F(iLocal_35[4], true);
		}
		else
		{
			iLocal_35[4] = unk_0x01B3635C3E8EDD81(26, joaat("s_m_y_construct_01"), 903.8805f, -1575.02f, 29.8327f, 308.1952f, 1, true);
			unk_0x4106FAF8AA1D69D5(iLocal_35[4], iLocal_264);
			if (unk_0xABB25056487DF1D7(903.8805f, -1575.02f, 29.8327f, 3f, 0))
			{
				unk_0xB0B4388ED09F180E(iLocal_35[4], 903.8805f, -1575.02f, 29.8327f, 5f, 0);
			}
			func_108(iLocal_35[4], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x2E35C4FA5F0ED22F(iLocal_35[4], true);
		}
	}
	if (!unk_0x724D816EA203A79E(iLocal_35[5]))
	{
		if (unk_0x724D816EA203A79E(Global_15DFD.f_9[5]))
		{
			unk_0x77815D3407C6700D(Global_15DFD.f_9[5], true, 1);
			iLocal_35[5] = Global_15DFD.f_9[5];
			unk_0x4106FAF8AA1D69D5(iLocal_35[5], iLocal_264);
			func_108(iLocal_35[5], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x2E35C4FA5F0ED22F(iLocal_35[5], true);
		}
		else
		{
			iLocal_35[5] = unk_0x01B3635C3E8EDD81(26, joaat("s_m_y_construct_01"), 906.2186f, -1575.108f, 29.8125f, 55.9906f, 1, true);
			unk_0x4106FAF8AA1D69D5(iLocal_35[5], iLocal_264);
			if (unk_0xABB25056487DF1D7(906.2186f, -1575.108f, 29.8125f, 3f, 0))
			{
				unk_0xB0B4388ED09F180E(iLocal_35[5], 906.2186f, -1575.108f, 29.8125f, 5f, 0);
			}
			func_108(iLocal_35[5], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x2E35C4FA5F0ED22F(iLocal_35[5], true);
		}
	}
	if (!unk_0x724D816EA203A79E(iLocal_35[6]))
	{
		if (unk_0x724D816EA203A79E(Global_15DFD.f_9[8]))
		{
			unk_0x77815D3407C6700D(Global_15DFD.f_9[8], true, 1);
			iLocal_35[6] = Global_15DFD.f_9[8];
			unk_0x4106FAF8AA1D69D5(iLocal_35[6], iLocal_264);
			func_108(iLocal_35[6], 20f, 5f, 120f, -45f, 45f);
			unk_0x2E35C4FA5F0ED22F(iLocal_35[6], true);
		}
		else
		{
			iLocal_35[6] = unk_0x01B3635C3E8EDD81(26, joaat("s_m_y_construct_01"), 889.285f, -1561.485f, 29.6539f, 22.2456f, 1, true);
			unk_0x4106FAF8AA1D69D5(iLocal_35[6], iLocal_264);
			if (unk_0xABB25056487DF1D7(889.285f, -1561.485f, 29.6539f, 3f, 0))
			{
				unk_0xB0B4388ED09F180E(iLocal_35[6], 889.285f, -1561.485f, 29.6539f, 5f, 0);
			}
			func_108(iLocal_35[6], 20f, 5f, 120f, -45f, 45f);
			unk_0x2E35C4FA5F0ED22F(iLocal_35[6], true);
		}
	}
	if (!unk_0x724D816EA203A79E(iLocal_36[0]))
	{
		if (unk_0x724D816EA203A79E(Global_15DFD.f_9[6]))
		{
			unk_0x77815D3407C6700D(Global_15DFD.f_9[6], true, 1);
			iLocal_36[0] = Global_15DFD.f_9[6];
			unk_0x4106FAF8AA1D69D5(iLocal_36[0], iLocal_265);
			func_108(iLocal_36[0], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x2E35C4FA5F0ED22F(iLocal_36[0], true);
			unk_0x7A535CE1F001F3FE(iLocal_36[0], joaat("weapon_pistol"), 100, false, false);
			unk_0x36C3B58DA78A2679(iLocal_36[0], "S_M_M_GENERICSECURITY_01_LATINO_MINI_01");
		}
		else
		{
			iLocal_36[0] = unk_0x01B3635C3E8EDD81(26, joaat("s_m_m_security_01"), 863.1551f, -1564.572f, 29.3231f, 130.7946f, 1, true);
			unk_0x4106FAF8AA1D69D5(iLocal_36[0], iLocal_265);
			func_108(iLocal_36[0], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x2E35C4FA5F0ED22F(iLocal_36[0], true);
			unk_0x7A535CE1F001F3FE(iLocal_36[0], joaat("weapon_pistol"), 100, false, false);
			unk_0x36C3B58DA78A2679(iLocal_36[0], "S_M_M_GENERICSECURITY_01_LATINO_MINI_01");
		}
	}
	if (!unk_0x724D816EA203A79E(iLocal_36[1]))
	{
		if (unk_0x724D816EA203A79E(Global_15DFD.f_9[7]))
		{
			unk_0x77815D3407C6700D(Global_15DFD.f_9[7], true, 1);
			iLocal_36[1] = Global_15DFD.f_9[7];
			unk_0x4106FAF8AA1D69D5(iLocal_36[1], iLocal_265);
			func_108(iLocal_36[1], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x2E35C4FA5F0ED22F(iLocal_36[1], true);
			unk_0x7A535CE1F001F3FE(iLocal_36[1], joaat("weapon_pistol"), 100, false, false);
			unk_0x36C3B58DA78A2679(iLocal_36[1], "S_M_M_GENERICSECURITY_01_LATINO_MINI_02");
		}
		else
		{
			iLocal_36[1] = unk_0x01B3635C3E8EDD81(26, joaat("s_m_m_security_01"), 940.2881f, -1573.877f, 29.3866f, 269.1856f, 1, true);
			unk_0x4106FAF8AA1D69D5(iLocal_36[1], iLocal_265);
			func_108(iLocal_36[1], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x2E35C4FA5F0ED22F(iLocal_36[1], true);
			unk_0x7A535CE1F001F3FE(iLocal_36[1], joaat("weapon_pistol"), 100, false, false);
			unk_0x36C3B58DA78A2679(iLocal_36[1], "S_M_M_GENERICSECURITY_01_LATINO_MINI_02");
		}
	}
	unk_0x2CA123B0622F495C(joaat("s_m_y_construct_01"));
	unk_0x2CA123B0622F495C(joaat("s_m_m_security_01"));
}

void func_108(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0x895E
{
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		unk_0x6CCBC1B22488DC0C(iParam0, fParam1);
		unk_0xAA40189C27870A99(iParam0, fParam2);
		unk_0x3BA6DE071C07D143(iParam0, (fParam3 / 2f));
		unk_0x1BAA0038DD57C475(iParam0, fParam4);
		unk_0x9C4E6006A4F26EB5(iParam0, fParam5);
	}
}

void func_109(int iParam0, int iParam1)//Position - 0x899A
{
	Global_DAAA = iParam0;
	Global_DAAB = iParam1;
}

void func_110(int iParam0, int iParam1)//Position - 0x89AC
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

void func_111()//Position - 0x8A17
{
	iLocal_54 = 0;
	while (iLocal_54 <= 6)
	{
		if (unk_0x724D816EA203A79E(iLocal_35[iLocal_54]) && unk_0xB248FAA35ED47DB9(iLocal_35[iLocal_54], 1))
		{
			unk_0xF845620A03C7425B(&(iLocal_35[iLocal_54]));
		}
		iLocal_54++;
	}
	if (unk_0x724D816EA203A79E(iLocal_36[0]) && unk_0xB248FAA35ED47DB9(iLocal_36[0], 1))
	{
		unk_0xF845620A03C7425B(&(iLocal_36[0]));
	}
	if (unk_0x724D816EA203A79E(iLocal_36[1]) && unk_0xB248FAA35ED47DB9(iLocal_36[1], 1))
	{
		unk_0xF845620A03C7425B(&(iLocal_36[1]));
	}
	if (unk_0x724D816EA203A79E(iLocal_37) && unk_0xB248FAA35ED47DB9(iLocal_37, 1))
	{
		unk_0xF845620A03C7425B(&iLocal_37);
	}
	if (unk_0x724D816EA203A79E(iLocal_38) && unk_0xB248FAA35ED47DB9(iLocal_38, 1))
	{
		unk_0xF845620A03C7425B(&iLocal_38);
	}
	if (unk_0x724D816EA203A79E(iLocal_39) && unk_0xB248FAA35ED47DB9(iLocal_39, 1))
	{
		unk_0xF845620A03C7425B(&iLocal_39);
	}
	if (unk_0x724D816EA203A79E(iLocal_40) && unk_0xB248FAA35ED47DB9(iLocal_40, 1))
	{
		unk_0xF845620A03C7425B(&iLocal_40);
	}
	if (!func_30())
	{
		unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), 519.1906f, -2980.994f, 5.0443f, 1, false, 0, 1);
		unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), 270.1911f);
	}
	if (unk_0x724D816EA203A79E(iLocal_32) && unk_0xB248FAA35ED47DB9(iLocal_32, 1))
	{
		unk_0xCF6040807CC0E4A5(&iLocal_32);
	}
	if (unk_0x724D816EA203A79E(Global_15DFD[3]))
	{
		unk_0x77815D3407C6700D(Global_15DFD[3], true, 0);
		unk_0xCF6040807CC0E4A5(&(Global_15DFD[3]));
	}
	if (unk_0x724D816EA203A79E(iLocal_33) && unk_0xB248FAA35ED47DB9(iLocal_33, 1))
	{
		unk_0xCF6040807CC0E4A5(&iLocal_33);
	}
	unk_0x4EA570997E107F35("cellphone@str");
	unk_0x4EA570997E107F35("misscarsteal4@director_grip");
	unk_0x748798F6C2AB96B7("FHPRB_START");
	unk_0x748798F6C2AB96B7("FHPRB_TRUCK");
	unk_0x748798F6C2AB96B7("FHPRB_COPS");
	unk_0x748798F6C2AB96B7("FHPRB_LOST");
	unk_0x748798F6C2AB96B7("FHPRB_STOP");
	unk_0x6C5F5B5F6894CCE3(889.5f, -1553.8f, 30f, 150f, 1, 0, 0, false);
}

void func_112()//Position - 0x8BEF
{
	if (unk_0x2DA8CA50A72528FB(iLocal_49))
	{
		unk_0x07B8ECB35A4ED3AC(&iLocal_49);
	}
	if (unk_0x2DA8CA50A72528FB(iLocal_50))
	{
		unk_0x07B8ECB35A4ED3AC(&iLocal_50);
	}
	if (unk_0x2DA8CA50A72528FB(iLocal_51))
	{
		unk_0x07B8ECB35A4ED3AC(&iLocal_51);
	}
	if (unk_0x2DA8CA50A72528FB(iLocal_52))
	{
		unk_0x07B8ECB35A4ED3AC(&iLocal_52);
	}
}

void func_113()//Position - 0x8C33
{
	Global_394A = 0;
	func_114();
}

void func_114()//Position - 0x8C43
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

void func_115()//Position - 0x8C9A
{
	func_133();
	if (iLocal_53 == 0)
	{
		if (iLocal_266 == 1)
		{
			func_34();
			iLocal_266 = 0;
		}
		iLocal_267 = 0;
		iLocal_269 = 0;
		iLocal_346 = 0;
		iLocal_85 = 0;
		iLocal_86 = 0;
		unk_0xAEC867D0DBB7AFEB(5);
		unk_0x4EA570997E107F35("cellphone@str");
		unk_0x4EA570997E107F35("misscarsteal4@director_grip");
		if (!unk_0x726D9204B160D23E())
		{
			unk_0x8B6B50EADA01F251(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true));
			unk_0x829FA4611BD56B44(800);
		}
		unk_0xDF53A66AEE1401AA(1f);
		unk_0x1D1C393C7689E5A6(10f, 5f, 4);
		iLocal_295 = 1;
		iLocal_53 = 1;
	}
	if (iLocal_53 == 1)
	{
		func_132(&uLocal_99, 3, 0, "LESTER", 0, 1);
		if (func_14() == 0)
		{
			func_132(&uLocal_99, 0, unk_0xBC25C936A095B5BA(), "MICHAEL", 0, 1);
		}
		if (func_14() == 1)
		{
			func_132(&uLocal_99, 1, unk_0xBC25C936A095B5BA(), "FRANKLIN", 0, 1);
		}
		if (func_14() == 2)
		{
			func_132(&uLocal_99, 2, unk_0xBC25C936A095B5BA(), "TREVOR", 0, 1);
		}
		iLocal_53 = 2;
	}
	if (iLocal_53 == 2)
	{
		if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 0)
		{
			if (func_14() == 0)
			{
				if (func_122(&uLocal_99, 12, "FHPBAUD", "FHPB_CHAT1", 7, 1, 0, 0, 0))
				{
					unk_0x1D1C393C7689E5A6(5f, 5f, 4);
					SYSTEM::SETTIMERA(0);
					iLocal_53 = 3;
				}
			}
			if (func_14() == 1)
			{
				if (func_122(&uLocal_99, 12, "FHPBAUD", "FHPB_CHAT3", 7, 1, 0, 0, 0))
				{
					unk_0x1D1C393C7689E5A6(5f, 5f, 4);
					SYSTEM::SETTIMERA(0);
					iLocal_53 = 3;
				}
			}
			if (func_14() == 2)
			{
				if (func_122(&uLocal_99, 12, "FHPBAUD", "FHPB_CHAT2", 7, 1, 0, 0, 0))
				{
					unk_0x1D1C393C7689E5A6(5f, 5f, 4);
					SYSTEM::SETTIMERA(0);
					iLocal_53 = 3;
				}
			}
		}
	}
	if (iLocal_53 == 3)
	{
		if (!unk_0x2DA8CA50A72528FB(iLocal_50))
		{
			if (!func_121())
			{
				if (SYSTEM::TIMERA() > 10500)
				{
					iLocal_50 = func_119(vLocal_92, 1);
				}
			}
		}
		if (func_121())
		{
			iLocal_53 = 4;
		}
	}
	if (iLocal_53 == 4)
	{
		if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 0)
		{
			if (unk_0xE59B7F5A03335350(iLocal_33, 0))
			{
				if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_33, 0))
				{
					if (unk_0x6E80E5225F67328D(iLocal_33))
					{
						if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vLocal_92, 4f, 4f, 2f, true, true, 2))
						{
							if (func_117(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 4f, 3, 0.5f, 0, 1, 0))
							{
								unk_0x3857DADBD6EC8A54("FHPRB_STOP");
								if (unk_0x2DA8CA50A72528FB(iLocal_50))
								{
									unk_0x07B8ECB35A4ED3AC(&iLocal_50);
								}
								unk_0x1D1C393C7689E5A6(5f, 5f, 4);
								func_116(0, -1);
								iLocal_53 = 0;
								iLocal_28 = 5;
							}
						}
					}
				}
			}
		}
	}
}

void func_116(bool bParam0, int iParam1)//Position - 0x8ED8
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

int func_117(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x8F72
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

void func_118(int iParam0)//Position - 0x9101
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

int func_119(vector3 vParam0, bool bParam1)//Position - 0x912D
{
	int iVar0;
	
	iVar0 = unk_0x390CF6C8AD6903B7(vParam0);
	unk_0x3F5F1772D71D5EC4(iVar0, func_120(unk_0x7AF0088ABFA713B6(), 1f, 1f));
	unk_0x0BBAABB52887CF8C(iVar0, bParam1);
	return iVar0;
}

float func_120(bool bParam0, float fParam1, float fParam2)//Position - 0x9159
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_121()//Position - 0x9170
{
	if (Global_3DB8 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_122(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)//Position - 0x9187
{
	func_131(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
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
	return func_123(sParam3, iParam4, bParam8);
}

int func_123(char* sParam0, int iParam1, bool bParam2)//Position - 0x91E6
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
					func_114();
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
		if (func_130(8, -1))
		{
			return 0;
		}
		Global_3E04 = { Global_3DFE };
		func_129();
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
				func_128();
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
				if (func_127())
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
			if (func_126())
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
			func_125();
			Global_3DC2 = bParam2;
		}
		Global_3DBA = iParam1;
		StringCopy(&Global_3C3B, sParam0, 24);
		Global_394A = 0;
		func_124();
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
		func_114();
	}
	return 0;
}

void func_124()//Position - 0x94B2
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

void func_125()//Position - 0x94E3
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

int func_126()//Position - 0x9578
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_127()//Position - 0x959F
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

void func_128()//Position - 0x9638
{
	if (func_16(14))
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
		Global_389D = func_14();
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

void func_129()//Position - 0x96DA
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

bool func_130(int iParam0, int iParam1)//Position - 0x9731
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

void func_131(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x976C
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

void func_132(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x97C2
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

void func_133()//Position - 0x985D
{
	if (unk_0xE59B7F5A03335350(iLocal_33, 0))
	{
		if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_33, 0))
		{
			if (unk_0x6E80E5225F67328D(iLocal_33))
			{
				if (func_138("HELP_1"))
				{
					unk_0x7456702622C62EA0(1);
				}
				if (unk_0x2DA8CA50A72528FB(iLocal_49))
				{
					unk_0x07B8ECB35A4ED3AC(&iLocal_49);
				}
				if (unk_0x2DA8CA50A72528FB(iLocal_52))
				{
					if (iLocal_294 == 1)
					{
						if (unk_0x105601648511CC64() < iLocal_85 + 7500)
						{
							unk_0xEB233A3B7635D2AC();
						}
					}
					unk_0x07B8ECB35A4ED3AC(&iLocal_52);
				}
				if (iLocal_28 == 4)
				{
					if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 0)
					{
						if (iLocal_346 == 0)
						{
							unk_0x748798F6C2AB96B7("FHPRB_COPS");
							unk_0x3857DADBD6EC8A54("FHPRB_LOST");
							iLocal_346 = 1;
						}
						if (iLocal_269 == 1)
						{
							if (unk_0x105601648511CC64() < iLocal_86 + 7500)
							{
								unk_0xEB233A3B7635D2AC();
							}
							iLocal_269 = 0;
						}
						if (iLocal_53 > 3)
						{
							if (!unk_0x2DA8CA50A72528FB(iLocal_50))
							{
								iLocal_50 = func_119(vLocal_92, 1);
							}
							if (iLocal_267 == 0)
							{
								if (!unk_0x4B8E3E5901E59EB8())
								{
									func_137("GOD_2", 7500, 1);
									iLocal_267 = 1;
								}
							}
						}
					}
					else
					{
						if (unk_0x2DA8CA50A72528FB(iLocal_50))
						{
							unk_0x07B8ECB35A4ED3AC(&iLocal_50);
						}
						if (iLocal_269 == 0)
						{
							unk_0xEB233A3B7635D2AC();
							func_137("GOD_4", 7500, -1);
							unk_0x3857DADBD6EC8A54("FHPRB_COPS");
							iLocal_86 = unk_0x105601648511CC64();
							iLocal_269 = 1;
							iLocal_346 = 0;
						}
					}
				}
			}
			else
			{
				if (unk_0x2DA8CA50A72528FB(iLocal_49))
				{
					unk_0x07B8ECB35A4ED3AC(&iLocal_49);
				}
				if (unk_0x2DA8CA50A72528FB(iLocal_50))
				{
					unk_0x07B8ECB35A4ED3AC(&iLocal_50);
				}
				if (unk_0xE59B7F5A03335350(iLocal_32, 0))
				{
					if (!unk_0x2DA8CA50A72528FB(iLocal_52))
					{
						iLocal_52 = func_135(iLocal_32, 0, 0);
						unk_0xF9C2945DB5BAB4BF(iLocal_52, true);
						if (unk_0x4B8E3E5901E59EB8())
						{
							unk_0xEB233A3B7635D2AC();
						}
						if (iLocal_294 == 0)
						{
							func_137("GOD_6", 7500, -1);
							iLocal_85 = unk_0x105601648511CC64();
							iLocal_294 = 1;
						}
						if (!func_138("HELP_1"))
						{
							func_134("HELP_1");
						}
					}
				}
			}
		}
		else
		{
			if (unk_0x2DA8CA50A72528FB(iLocal_52))
			{
				unk_0x07B8ECB35A4ED3AC(&iLocal_52);
			}
			if (unk_0x2DA8CA50A72528FB(iLocal_50))
			{
				unk_0x07B8ECB35A4ED3AC(&iLocal_50);
			}
			if (unk_0xE59B7F5A03335350(iLocal_33, 0))
			{
				if (!unk_0x2DA8CA50A72528FB(iLocal_49))
				{
					iLocal_49 = func_135(iLocal_33, 0, 0);
					unk_0xF9C2945DB5BAB4BF(iLocal_49, true);
				}
			}
			if (iLocal_270 == 0)
			{
				unk_0xEB233A3B7635D2AC();
				func_137("GOD_5", 7500, -1);
				iLocal_270 = 1;
			}
		}
	}
}

void func_134(char* sParam0)//Position - 0x9A72
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 1, true, -1);
}

int func_135(int iParam0, bool bParam1, bool bParam2)//Position - 0x9A88
{
	return func_136(iParam0, !bParam1, bParam2);
}

int func_136(int iParam0, bool bParam1, bool bParam2)//Position - 0x9A9B
{
	int iVar0;
	
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x511FE22BCF5353CD(iParam0);
	if (unk_0xD27AC0E9B78CFDD7(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(iVar0, func_120(unk_0x7AF0088ABFA713B6(), 1f, 1f));
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
		unk_0x3F5F1772D71D5EC4(iVar0, func_120(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
		unk_0xF9C2945DB5BAB4BF(iVar0, bParam1);
	}
	else if (unk_0xB12D030810E8447D(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(iVar0, func_120(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
	}
	return iVar0;
}

void func_137(char* sParam0, int iParam1, int iParam2)//Position - 0x9B3F
{
	iParam2 = iParam2;
	unk_0x3714DE83381EADC2(sParam0);
	unk_0x41D8F63F629E76BE(iParam1, 1);
}

int func_138(char* sParam0)//Position - 0x9B58
{
	unk_0xF07D20149ECBC61E(sParam0);
	return unk_0xA66DBDA0A072514A(0);
}

void func_139()//Position - 0x9B6B
{
	if (iLocal_53 > 1)
	{
		func_133();
	}
	if (iLocal_53 == 0)
	{
		if (iLocal_266 == 1)
		{
			func_34();
			iLocal_266 = 0;
		}
		iLocal_296 = 0;
		iLocal_297 = 0;
		iLocal_298 = 0;
		iLocal_299 = 0;
		iLocal_300 = 0;
		iLocal_301 = 0;
		iLocal_302 = 0;
		iLocal_303[0] = 0;
		iLocal_303[1] = 0;
		iLocal_304[0] = 0;
		iLocal_304[1] = 0;
		iLocal_305 = 0;
		iLocal_306 = 0;
		iLocal_307 = 0;
		iLocal_308 = 0;
		iLocal_309 = 0;
		iLocal_310 = 0;
		iLocal_311 = 0;
		iLocal_318 = 0;
		iLocal_319 = 0;
		iLocal_320 = 0;
		iLocal_321 = 0;
		iLocal_322 = 0;
		iLocal_323 = 0;
		iLocal_324 = 0;
		iLocal_325 = 0;
		iLocal_326 = 0;
		iLocal_327 = 0;
		iLocal_328[0] = 0;
		iLocal_328[1] = 0;
		iLocal_329[0] = 0;
		iLocal_329[1] = 0;
		iLocal_330[0] = 0;
		iLocal_330[1] = 0;
		iLocal_331[0] = 0;
		iLocal_331[1] = 0;
		iLocal_332[0] = 0;
		iLocal_332[1] = 0;
		iLocal_333[0] = 0;
		iLocal_333[1] = 0;
		iLocal_334[0] = 0;
		iLocal_334[1] = 0;
		iLocal_336 = 0;
		iLocal_339 = 0;
		iLocal_340[0] = 0;
		iLocal_341[0] = 0;
		iLocal_340[1] = 0;
		iLocal_341[1] = 0;
		iLocal_343 = 0;
		iLocal_344 = 0;
		iLocal_345 = 0;
		iLocal_359 = 0;
		iLocal_270 = 0;
		iLocal_271 = 0;
		iLocal_276 = 0;
		iLocal_286 = 0;
		iLocal_287 = 0;
		iLocal_288 = 0;
		iLocal_289 = 0;
		iLocal_290 = 0;
		iLocal_291 = 0;
		iLocal_292 = 0;
		iLocal_293 = 0;
		iLocal_294 = 0;
		iLocal_312 = 0;
		iLocal_342 = 0;
		iLocal_360 = 0;
		iLocal_362 = 0;
		iLocal_335 = 0;
		iLocal_85 = 0;
		iLocal_86 = 0;
		iLocal_54 = 0;
		while (iLocal_54 <= 6)
		{
			iLocal_268[iLocal_54] = 0;
			iLocal_282[iLocal_54] = 0;
			iLocal_284[iLocal_54] = 0;
			iLocal_285[iLocal_54] = 0;
			iLocal_283[iLocal_54] = 0;
			iLocal_54++;
		}
		unk_0x522053D86D6E1C7A("cellphone@str");
		unk_0x522053D86D6E1C7A("misscarsteal4@director_grip");
		if (unk_0xE59B7F5A03335350(iLocal_33, 0))
		{
			if (!unk_0x2DA8CA50A72528FB(iLocal_49))
			{
				iLocal_49 = func_135(iLocal_33, 0, 0);
				unk_0xF9C2945DB5BAB4BF(iLocal_49, true);
			}
		}
		unk_0xAEC867D0DBB7AFEB(0);
		if (unk_0x17FAADF9916EF741())
		{
			if (!func_30())
			{
				unk_0x8B6B50EADA01F251(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true));
			}
			if (unk_0x724D816EA203A79E(iLocal_34))
			{
				func_27(iLocal_34, -1, 1);
				unk_0x1E7A09C1710FB071(&iLocal_34);
			}
			else
			{
				func_27(0, -1, 1);
			}
		}
		if (!unk_0x726D9204B160D23E())
		{
			unk_0x829FA4611BD56B44(800);
		}
		unk_0x3857DADBD6EC8A54("FHPRB_START");
		unk_0x6C5F5B5F6894CCE3(43.5f, -615.8f, 32.4f, 50f, 1, 0, 0, false);
		iLocal_295 = 1;
		iLocal_53 = 1;
	}
	if (iLocal_53 == 1)
	{
		if (iLocal_342 == 0)
		{
			if (!unk_0x4B8E3E5901E59EB8())
			{
				unk_0x1D1C393C7689E5A6(5f, 8f, 4);
				func_137("GOD_1", 7500, 1);
				iLocal_342 = 1;
			}
		}
		if (unk_0xE59B7F5A03335350(iLocal_33, 0))
		{
			if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_33, 0))
			{
				unk_0x3857DADBD6EC8A54("FHPRB_TRUCK");
				if (unk_0x2DA8CA50A72528FB(iLocal_49))
				{
					unk_0x07B8ECB35A4ED3AC(&iLocal_49);
				}
				func_140(656, 0);
				unk_0xDF53A66AEE1401AA(1f);
				iLocal_53 = 2;
			}
		}
	}
	if (iLocal_53 == 2)
	{
		if (unk_0xE59B7F5A03335350(iLocal_33, 0))
		{
			if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_33, 0))
			{
				if (unk_0x6E80E5225F67328D(iLocal_33))
				{
					if (func_138("HELP_1"))
					{
						unk_0x7456702622C62EA0(1);
					}
					if (unk_0x2DA8CA50A72528FB(iLocal_49))
					{
						unk_0x07B8ECB35A4ED3AC(&iLocal_49);
					}
					if (unk_0x2DA8CA50A72528FB(iLocal_52))
					{
						unk_0x07B8ECB35A4ED3AC(&iLocal_52);
					}
					if (unk_0xF0F2FC9DE291567F(vLocal_93, vLocal_96, true) < 100f)
					{
						if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 0)
						{
							if (iLocal_271 == 1)
							{
								if (unk_0x105601648511CC64() < iLocal_86 + 7500)
								{
									unk_0xEB233A3B7635D2AC();
									iLocal_271 = 0;
								}
							}
							if (iLocal_312 == 0)
							{
								unk_0x1D1C393C7689E5A6(5f, 8f, 4);
								func_137("GOD_7", 7500, -1);
								iLocal_312 = 1;
							}
						}
						else if (iLocal_271 == 0)
						{
							unk_0x1D1C393C7689E5A6(5f, 8f, 4);
							unk_0xB4513103F3EB41DB("SCRIPTED_SCANNER_REPORT_BS_PREP_B_01", 0f);
							iLocal_86 = unk_0x105601648511CC64();
							func_137("GOD_4", 7500, -1);
							iLocal_271 = 1;
						}
					}
					else if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 0)
					{
						iLocal_53 = 0;
						iLocal_28 = 4;
					}
				}
				else
				{
					if (unk_0x2DA8CA50A72528FB(iLocal_49))
					{
						unk_0x07B8ECB35A4ED3AC(&iLocal_49);
					}
					if (unk_0xE59B7F5A03335350(iLocal_32, 0))
					{
						if (!unk_0x2DA8CA50A72528FB(iLocal_52))
						{
							iLocal_52 = func_135(iLocal_32, 0, 0);
							unk_0xF9C2945DB5BAB4BF(iLocal_52, true);
							if (unk_0x4B8E3E5901E59EB8())
							{
								unk_0xEB233A3B7635D2AC();
							}
							if (iLocal_294 == 0)
							{
								func_137("GOD_6", 7500, -1);
								iLocal_294 = 1;
							}
							if (!func_138("HELP_1"))
							{
								func_134("HELP_1");
							}
						}
					}
				}
			}
			else
			{
				if (unk_0x2DA8CA50A72528FB(iLocal_52))
				{
					unk_0x07B8ECB35A4ED3AC(&iLocal_52);
				}
				if (unk_0xE59B7F5A03335350(iLocal_33, 0))
				{
					if (!unk_0x2DA8CA50A72528FB(iLocal_49))
					{
						iLocal_49 = func_135(iLocal_33, 0, 0);
						unk_0xF9C2945DB5BAB4BF(iLocal_49, true);
					}
				}
				if (iLocal_270 == 0)
				{
					unk_0xEB233A3B7635D2AC();
					func_137("GOD_5", 7500, -1);
					iLocal_270 = 1;
				}
			}
		}
	}
}

void func_140(int iParam0, bool bParam1)//Position - 0xA007
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

void func_141()//Position - 0xA051
{
	if (iLocal_53 == 0)
	{
		if (iLocal_266 == 1)
		{
			func_34();
			iLocal_266 = 0;
		}
		func_164();
		func_107();
		if (!unk_0x726D9204B160D23E())
		{
			unk_0x8B6B50EADA01F251(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true));
			unk_0x829FA4611BD56B44(800);
		}
		if (unk_0x724D816EA203A79E(Global_15DFD[3]))
		{
			if (unk_0xE59B7F5A03335350(Global_15DFD[3], 0))
			{
				if (unk_0x8C1A6E7D5F410F4A(unk_0x6F79ECA8C83E4357(Global_15DFD[3])))
				{
					unk_0x77815D3407C6700D(Global_15DFD[3], true, 1);
					func_143(1.0095f, -631.9655f, 34.7259f, 349.0681f, 0, 145);
				}
				if (((unk_0x7C28D15641461C68(unk_0x6F79ECA8C83E4357(Global_15DFD[3])) || unk_0x7512ED01F3F46714(unk_0x6F79ECA8C83E4357(Global_15DFD[3]))) || unk_0x2B4DE5C0D509B0F9(unk_0x6F79ECA8C83E4357(Global_15DFD[3]))) || unk_0x89B9572166100905(unk_0x6F79ECA8C83E4357(Global_15DFD[3])))
				{
					unk_0x77815D3407C6700D(Global_15DFD[3], true, 1);
					func_143(49.0052f, -599.5534f, 30.6299f, 158.5544f, 0, 145);
				}
			}
		}
		func_142(79);
		iLocal_295 = 1;
		iLocal_53 = 1;
	}
	if (iLocal_53 == 1)
	{
		iLocal_53 = 0;
		iLocal_28 = 3;
	}
}

void func_142(int iParam0)//Position - 0xA17E
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

void func_143(vector3 vParam0, float fParam1, int iParam2, int iParam3)//Position - 0xA1A2
{
	vector3 vVar0;
	var uVar1;
	
	if (unk_0x724D816EA203A79E(Global_17646.f_4))
	{
		if (unk_0xE59B7F5A03335350(Global_17646.f_4, 0))
		{
			if (func_163(24) != Global_17646.f_4)
			{
				if (iParam2 == 1)
				{
					if (func_160(unk_0x541C2AEF053615BC(Global_17646.f_4, true), iParam3, &vVar0, &uVar1))
					{
						vParam0 = { vVar0 };
						fParam1 = uVar1;
					}
				}
				func_144(Global_17646.f_4, vParam0, fParam1, 24, 0);
			}
		}
	}
}

void func_144(int iParam0, vector3 vParam1, float fParam2, int iParam3, bool bParam4)//Position - 0xA21D
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
		func_159(iParam3);
		Var0.f_9 = 49;
		Var0.f_3B = 2;
		func_40(iParam0, &Var0);
		if (func_98(vParam1, 0f, 0f, 0f, 0))
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
		func_157(iParam3, &Var0, vParam1, fParam2, func_60(iParam0));
		func_145(iParam3, iParam0, 0);
	}
}

void func_145(int iParam0, int iParam1, int iParam2)//Position - 0xA346
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
				Global_19B04.f_7F22.f_12C1 = func_146();
			}
			if (iParam1 != Global_110A8.f_8B[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_163(iParam0);
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

var func_146()//Position - 0xA463
{
	var uVar0;
	
	func_156(&uVar0, unk_0xF40D00CD7B81C0A8());
	func_155(&uVar0, unk_0x7E09057438B9D216());
	func_154(&uVar0, unk_0x6E06C0DB9B43570D());
	func_149(&uVar0, unk_0xBE14F159908E4EE5());
	func_148(&uVar0, unk_0xDD6A91E47ED4D0CF());
	func_147(&uVar0, unk_0x4EEB3860BFC44B78());
	return uVar0;
}

void func_147(var uParam0, int iParam1)//Position - 0xA4A9
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

void func_148(var uParam0, int iParam1)//Position - 0xA52F
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_149(var uParam0, int iParam1)//Position - 0xA562
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_153(*uParam0);
	iVar1 = func_151(*uParam0);
	if (iParam1 < 1 || iParam1 > func_150(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_150(int iParam0, int iParam1)//Position - 0xA5B3
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

var func_151(int iParam0)//Position - 0xA655
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_152(unk_0xFA30DFD0084E92FE(iParam0, 31), -1, 1)) + 2011;
}

int func_152(bool bParam0, int iParam1, int iParam2)//Position - 0xA67A
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_153(var uParam0)//Position - 0xA691
{
	return uParam0 & 15;
}

void func_154(var uParam0, int iParam1)//Position - 0xA69E
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_155(var uParam0, int iParam1)//Position - 0xA6D8
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_156(var uParam0, int iParam1)//Position - 0xA713
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

void func_157(int iParam0, var uParam1, vector3 vParam2, float fParam3, int iParam4)//Position - 0xA74F
{
	if (func_70(&(Global_110A8.f_22B[0 /*21*/]), iParam0))
	{
		if (unk_0xFA30DFD0084E92FE(Global_110A8.f_22B[0 /*21*/].f_9, 10))
		{
			func_158(iParam0);
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

void func_158(int iParam0)//Position - 0xA84E
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

void func_159(int iParam0)//Position - 0xA8C8
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_158(iParam0);
	func_63(iParam0, 0);
}

int func_160(vector3 vParam0, int iParam1, var uParam2, var uParam3)//Position - 0xA8EF
{
	int iVar0;
	
	iVar0 = func_161(vParam0, iParam1, 1);
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

int func_161(vector3 vParam0, int iParam1, int iParam2)//Position - 0xAA05
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
				if (func_162(iVar0) || iParam2 == 0)
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

bool func_162(int iParam0)//Position - 0xAA94
{
	return unk_0xFA30DFD0084E92FE(Global_19B04.f_1C20[iParam0], 0);
}

int func_163(int iParam0)//Position - 0xAAAC
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_110A8.f_8B[iParam0];
}

void func_164()//Position - 0xAAC8
{
	Global_154EE = 1;
}

void func_165()//Position - 0xAAD5
{
	unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 1);
	unk_0xDF53A66AEE1401AA(0.01f);
	iLocal_44 = unk_0x1DAA351326EA3537(861.6f, -1599.7f, 27.9f, 961.8f, -1476.4f, 49.7f, 0, 1, 1, 1);
	iLocal_45 = unk_0x1DAA351326EA3537(851.2f, -1598.2f, 29.7f, 855.7f, -1587.1f, 33f, 0, 1, 1, 1);
	iLocal_46 = unk_0x1DAA351326EA3537(859.4f, -1569.6f, 32.3f, 865.4f, -1561f, 28.7f, 0, 1, 1, 1);
	iLocal_47 = unk_0x1DAA351326EA3537(939f, -1576.8f, 33f, 943.8f, -1571.3f, 28.9f, 0, 1, 1, 1);
	iLocal_42 = unk_0x1DAA351326EA3537(5.4f, -588f, 39.1f, 57.4f, -678.8f, 25.4f, 0, 1, 1, 1);
	iLocal_43 = unk_0x1DAA351326EA3537(50.9f, -641.6f, 37.7f, 81.1f, -608.4f, 29.5f, 0, 1, 1, 1);
	if (func_29())
	{
		if (Global_154ED == 1)
		{
			func_167(28.4065f, -608.9371f, 30.6293f, 70.7778f, 1, 0);
			iLocal_360 = 1;
			iLocal_266 = 1;
			iLocal_53 = 0;
			iLocal_28 = 5;
		}
		else if (func_166() == 0)
		{
			if (func_106() && func_103(7f, 7f, 7f, 1))
			{
				func_167(818.8139f, -1610.406f, 30.7951f, 264.412f, 1, 0);
			}
			else
			{
				func_167(825.5603f, -1605.825f, 30.9548f, 312.5221f, 1, 0);
			}
			iLocal_266 = 1;
			iLocal_360 = 1;
			iLocal_53 = 0;
			iLocal_28 = 3;
		}
	}
	else if (func_202(0))
	{
		iLocal_266 = 1;
		iLocal_360 = 1;
		iLocal_53 = 0;
		iLocal_28 = 3;
	}
	else
	{
		iLocal_53 = 0;
		iLocal_28 = 2;
	}
}

int func_166()//Position - 0xAC9C
{
	if (!Global_16B1B == 10 && !Global_16B1B == 9)
	{
		return 0;
	}
	return Global_16B1B.f_2;
}

void func_167(vector3 vParam0, float fParam1, int iParam2, int iParam3)//Position - 0xACC6
{
	if (func_29())
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
		func_28(1);
	}
}

void func_168()//Position - 0xAD5B
{
	if (!func_29())
	{
		iLocal_28 = 1;
	}
	else
	{
		iLocal_28 = 1;
	}
}

void func_169()//Position - 0xAD74
{
	if (!unk_0x724D816EA203A79E(iLocal_40))
	{
		if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 45f, -616.2f, 30.8f, true) < 150f)
		{
			unk_0xF243B7A14FCFD0F4(joaat("s_m_m_security_01"));
			if (unk_0xD6513D668481290A(joaat("s_m_m_security_01")))
			{
				iLocal_40 = unk_0x01B3635C3E8EDD81(26, joaat("s_m_m_security_01"), 64.904f, -617.9949f, 30.7028f, 223.555f, 1, true);
				unk_0xC8FD3EBBB90E8D7F(iLocal_40, 324, true);
			}
			unk_0x2CA123B0622F495C(joaat("s_m_m_security_01"));
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_40))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_40))
		{
			if (unk_0xABB25056487DF1D7(65.2f, -617.2f, 30.8f, 5f, 0))
			{
				if (iLocal_337 == 0)
				{
					if (unk_0xD1DC4B08247A4317(iLocal_40))
					{
						unk_0xA4E856A8CD53B8DF(iLocal_40);
					}
					else
					{
						unk_0x49D46EE47C9CCB66(iLocal_40);
					}
					unk_0xBE2047F9F9DE6F43(iLocal_40, 65.2f, -617.2f, 31f, 2f, 0);
					unk_0x22321800954A532E(iLocal_40, true);
					iLocal_89 = unk_0x105601648511CC64();
					iLocal_337 = 1;
				}
				else if (unk_0x105601648511CC64() > iLocal_89 + 5000)
				{
					if (!unk_0xD8BE87198802B1F7(iLocal_40))
					{
						iLocal_337 = 0;
					}
				}
			}
			if (func_171(unk_0xBC25C936A095B5BA(), iLocal_40, 1) < 20f)
			{
				if (iLocal_316 == 0)
				{
					unk_0x56F2E1B5599188FA(iLocal_40, unk_0xBC25C936A095B5BA(), -1, 1072, 3);
					iLocal_316 = 1;
				}
			}
			else if (iLocal_316 == 1)
			{
				unk_0x56F2E1B5599188FA(iLocal_40, unk_0xBC25C936A095B5BA(), 1, 0, 2);
				iLocal_316 = 0;
			}
		}
	}
	if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 45f, -616.2f, 30.8f, true) < 50f)
	{
		if (iLocal_338 == 0)
		{
			iLocal_90 = 498972213;
			iLocal_91 = -512924631;
			unk_0x0DE091F0061B5F19(iLocal_90, -1184516519, 61f, -633f, 32f, 1, 1, 0);
			unk_0x0DE091F0061B5F19(iLocal_91, -1184516519, 66f, -618f, 32f, 1, 1, 0);
			iLocal_338 = 1;
		}
		if (iLocal_338 == 1)
		{
			if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 0)
			{
				if (vLocal_93.x > 35f)
				{
					if (fLocal_97 < 1f)
					{
						fLocal_97 = (fLocal_97 + 0.02f);
					}
					else
					{
						fLocal_97 = 1f;
					}
					if (fLocal_97 <= 1f)
					{
						unk_0xC0D8311F0A9723A0(iLocal_90, fLocal_97, 0, 1);
						unk_0xC0D8311F0A9723A0(iLocal_91, fLocal_97, 0, 1);
						unk_0xF72F6BB050622804(iLocal_90, 4, 0, 1);
						unk_0xF72F6BB050622804(iLocal_91, 4, 0, 1);
						iLocal_317 = 0;
					}
				}
				if (vLocal_93.x < 35f)
				{
					if (fLocal_97 > 0f)
					{
						fLocal_97 = (fLocal_97 - 0.02f);
					}
					else
					{
						fLocal_97 = 0f;
					}
					if (fLocal_97 >= 0f)
					{
						unk_0xC0D8311F0A9723A0(iLocal_90, fLocal_97, 0, 1);
						unk_0xC0D8311F0A9723A0(iLocal_91, fLocal_97, 0, 1);
						unk_0xF72F6BB050622804(iLocal_90, 4, 0, 1);
						unk_0xF72F6BB050622804(iLocal_91, 4, 0, 1);
						iLocal_317 = 0;
					}
				}
			}
			else if (iLocal_317 == 0)
			{
				if (vLocal_93.x < 35f)
				{
					if (fLocal_97 > 0f)
					{
						fLocal_97 = (fLocal_97 - 0.02f);
					}
					else
					{
						fLocal_97 = 0f;
					}
					if (fLocal_97 >= 0f)
					{
						unk_0xC0D8311F0A9723A0(iLocal_90, fLocal_97, 0, 1);
						unk_0xC0D8311F0A9723A0(iLocal_91, fLocal_97, 0, 1);
						unk_0xF72F6BB050622804(iLocal_90, 4, 0, 1);
						unk_0xF72F6BB050622804(iLocal_91, 4, 0, 1);
						iLocal_317 = 1;
					}
				}
			}
		}
		if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 62.90151f, -638.6329f, 29.9188f, 70.78919f, -617.1338f, 36.91788f, 10.75f, 0, true, 0))
		{
			if (unk_0x724D816EA203A79E(iLocal_40))
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_40))
				{
					if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 0)
					{
						if (iLocal_314 == 0)
						{
							if (iLocal_313 == 0)
							{
								func_132(&uLocal_99, 4, iLocal_40, "FHPBSecGuard", 0, 1);
								if (func_170(&uLocal_99, "FHPBAUD", "FHPB_CHAT20", 7, 0, 0, 0))
								{
									iLocal_313 = 1;
								}
							}
						}
						else if (iLocal_315 == 0)
						{
							func_132(&uLocal_99, 4, iLocal_40, "FHPBSecGuard", 0, 1);
							if (func_170(&uLocal_99, "FHPBAUD", "FHPB_CHAT22", 7, 0, 0, 0))
							{
								iLocal_315 = 1;
							}
						}
					}
					else if (iLocal_314 == 0)
					{
						func_132(&uLocal_99, 4, iLocal_40, "FHPBSecGuard", 0, 1);
						if (func_170(&uLocal_99, "FHPBAUD", "FHPB_CHAT21", 7, 0, 0, 0))
						{
							iLocal_314 = 1;
						}
					}
				}
			}
		}
	}
}

bool func_170(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xB148
{
	func_131(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_123(sParam2, iParam3, 0);
}

float func_171(int iParam0, int iParam1, bool bParam2)//Position - 0xB196
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

void func_172()//Position - 0xB1F4
{
	int iVar0;
	
	if (!unk_0x4B8E3E5901E59EB8())
	{
		if (!func_176() || !unk_0x11D38424F1DD3B8F())
		{
			if (iLocal_28 == 3)
			{
				if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) && iLocal_31 == 0)
				{
					if (func_14() == 0)
					{
						if (iLocal_29 == 1)
						{
							if (iLocal_291 == 0)
							{
								if (func_174() && func_173())
								{
									if (func_170(&uLocal_99, "SOL1AUD", "SOL1_SEE5", 7, 0, 0, 0))
									{
										iLocal_88 = unk_0x105601648511CC64();
										iLocal_291 = 1;
									}
								}
							}
						}
						if (iLocal_29 == 1)
						{
							if (iLocal_291 == 1 && unk_0x105601648511CC64() > iLocal_88 + 7000)
							{
								if (func_174() && func_173())
								{
									if (func_170(&uLocal_99, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
									{
										iLocal_88 = unk_0x105601648511CC64();
									}
								}
							}
						}
					}
					if (iLocal_29 == 2)
					{
						if (iLocal_325 == 0)
						{
							if (func_174())
							{
								if (func_170(&uLocal_99, "SOL1AUD", "SOL1_SEC3", 7, 0, 0, 0))
								{
									iLocal_79 = unk_0x105601648511CC64();
									iLocal_325 = 1;
								}
							}
						}
					}
				}
				else if (iLocal_31 == 2 && iLocal_29 == 1)
				{
					if (iLocal_336 == 0)
					{
						if (func_174() && func_173())
						{
							if (func_170(&uLocal_99, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
							{
								iLocal_84 = unk_0x105601648511CC64();
								iLocal_336 = 1;
							}
						}
					}
					else if (unk_0x105601648511CC64() > iLocal_84 + 8000)
					{
						if (func_174() && func_173())
						{
							if (func_170(&uLocal_99, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
							{
								iLocal_84 = unk_0x105601648511CC64();
							}
						}
					}
				}
				if (iLocal_29 == 4)
				{
					if (iLocal_290 == 0)
					{
						func_113();
						if (func_174())
						{
							unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &iVar0, 1);
							if (iVar0 != joaat("weapon_unarmed") && iVar0 != 0)
							{
								if (func_170(&uLocal_99, "SOL1AUD", "SOL1_ARM3", 7, 0, 0, 0))
								{
									iLocal_61 = unk_0x105601648511CC64();
									iLocal_286 = 1;
									iLocal_290 = 1;
								}
							}
							else
							{
								iLocal_61 = unk_0x105601648511CC64();
								iLocal_286 = 1;
								iLocal_290 = 1;
							}
						}
					}
					if (iLocal_290 == 1)
					{
						if (iLocal_286 == 0)
						{
							iLocal_61 = unk_0x105601648511CC64();
							iLocal_286 = 1;
						}
						if (iLocal_286 == 1)
						{
							if (unk_0x105601648511CC64() > iLocal_61 + 9000)
							{
								if (func_174())
								{
									if (func_170(&uLocal_99, "SOL1AUD", "SOL1_PAN3", 7, 0, 0, 0))
									{
										iLocal_286 = 0;
									}
								}
							}
						}
					}
				}
				if (iLocal_29 == 3)
				{
					if (iLocal_322 == 1)
					{
						if (iLocal_288 == 0)
						{
							if (iLocal_289 == 1)
							{
								if (func_174())
								{
									if (func_170(&uLocal_99, "SOL1AUD", "SOL1_STEAL3", 7, 0, 0, 0))
									{
										iLocal_288 = 1;
									}
								}
							}
						}
					}
					if (iLocal_287 == 0)
					{
						if (unk_0x724D816EA203A79E(iLocal_33))
						{
							if (unk_0xE59B7F5A03335350(iLocal_33, 0))
							{
								if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_33, 0))
								{
									if (func_174())
									{
										if (func_170(&uLocal_99, "SOL1AUD", "SOL1_OUT3", 7, 0, 0, 0))
										{
											iLocal_62 = unk_0x105601648511CC64();
											iLocal_288 = 1;
										}
									}
								}
							}
						}
					}
					if (unk_0x105601648511CC64() > iLocal_62 + 10000)
					{
						if (unk_0x724D816EA203A79E(iLocal_33))
						{
							if (unk_0xE59B7F5A03335350(iLocal_33, 0))
							{
								if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_33, 0))
								{
									if (func_174())
									{
										if (func_170(&uLocal_99, "SOL1AUD", "SOL1_OUT3", 7, 0, 0, 0))
										{
											iLocal_62 = unk_0x105601648511CC64();
										}
									}
								}
							}
						}
					}
					if (iLocal_323 == 1)
					{
						if (iLocal_324 == 0)
						{
							if (func_174())
							{
								if (func_170(&uLocal_99, "SOL1AUD", "SOL1_SEC3", 7, 0, 0, 0))
								{
									iLocal_324 = 1;
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_173()//Position - 0xB532
{
	if (func_14() == 0)
	{
		func_132(&uLocal_99, 0, unk_0xBC25C936A095B5BA(), "MICHAEL", 0, 1);
		return 1;
	}
	if (func_14() == 1)
	{
		func_132(&uLocal_99, 1, unk_0xBC25C936A095B5BA(), "FRANKLIN", 0, 1);
		return 1;
	}
	if (func_14() == 2)
	{
		func_132(&uLocal_99, 2, unk_0xBC25C936A095B5BA(), "TREVOR", 0, 1);
		return 1;
	}
	return 0;
}

int func_174()//Position - 0xB592
{
	int iVar0;
	
	iLocal_57 = 0;
	while (iLocal_57 <= 6)
	{
		if (unk_0x724D816EA203A79E(iLocal_35[iLocal_57]))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_35[iLocal_57]))
			{
				iVar0 = func_175(unk_0xBC25C936A095B5BA(), iLocal_264, 0, 0, -1);
				if (unk_0x724D816EA203A79E(iVar0))
				{
					if (!unk_0x36CEFBE9B745A58D(iVar0))
					{
					}
				}
				if (iVar0 == iLocal_35[iLocal_57] && func_171(unk_0xBC25C936A095B5BA(), iVar0, 1) < 15f)
				{
					func_132(&uLocal_99, 5, iLocal_35[iLocal_57], "CONSTRUCTION3", 0, 1);
					return 1;
				}
			}
		}
		iLocal_57++;
	}
	return 0;
}

int func_175(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xB624
{
	int iVar0[16];
	int iVar1;
	
	iVar1 = 0;
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		unk_0x252B0CBDBF5803ED(iParam0, &iVar0, iParam4);
		iVar1 = 0;
		while (iVar1 <= (iVar0 - 1))
		{
			if (unk_0x724D816EA203A79E(iVar0[iVar1]))
			{
				if (!unk_0x36CEFBE9B745A58D(iVar0[iVar1]))
				{
					if (unk_0x84788C4CA5E15BDC(iVar0[iVar1]) == iParam1)
					{
						if (iParam2 <= 0)
						{
							if (iParam3 == 1)
							{
								if (unk_0xD1DC4B08247A4317(iVar0[iVar1]))
								{
									return iVar0[iVar1];
								}
							}
							else
							{
								return iVar0[iVar1];
							}
						}
						else if (iVar1 + iParam2) <= (iVar0 - 1)
						{
							if (unk_0x724D816EA203A79E(iVar0[(iVar1 + iParam2)]))
							{
								if (!unk_0x36CEFBE9B745A58D(iVar0[(iVar1 + iParam2)]))
								{
									if (unk_0x84788C4CA5E15BDC(iVar0[(iVar1 + iParam2)]) == iParam1)
									{
										if (iParam3 == 1)
										{
											if (unk_0xD1DC4B08247A4317(iVar0[(iVar1 + iParam2)]))
											{
												return iVar0[(iVar1 + iParam2)];
											}
										}
										else
										{
											return iVar0[(iVar1 + iParam2)];
										}
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_176()//Position - 0xB72B
{
	if (Global_3DB8 != 0 || unk_0xE6711F601F11B66B())
	{
		return 1;
	}
	return 0;
}

void func_177()//Position - 0xB74D
{
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0x75F706B6889D7D86(unk_0xBC25C936A095B5BA()) && unk_0x32E373675659FDB0(unk_0xBC25C936A095B5BA()))
		{
			unk_0xDF53A66AEE1401AA(0f);
		}
		else
		{
			unk_0xDF53A66AEE1401AA(1f);
		}
	}
	func_184();
	if (iLocal_303[0])
	{
		if (func_171(unk_0xBC25C936A095B5BA(), iLocal_36[0], 1) < 20f && unk_0x1028B6250119A74B(iLocal_36[0], unk_0xBC25C936A095B5BA()))
		{
			if (iLocal_328[0] == 0)
			{
				unk_0x56F2E1B5599188FA(iLocal_36[0], unk_0xBC25C936A095B5BA(), -1, 1072, 3);
				iLocal_328[0] = 1;
			}
			if (iLocal_328[0] == 1)
			{
				if (unk_0xF4FCC3C1048FF2AB(iLocal_36[0], 150319005) != 0 || unk_0xF4FCC3C1048FF2AB(iLocal_36[0], 150319005) != 1)
				{
					iLocal_328[0] = 0;
				}
			}
		}
		else if (iLocal_328[0] == 1)
		{
			unk_0x56F2E1B5599188FA(iLocal_36[0], unk_0xBC25C936A095B5BA(), 1, 0, 2);
			iLocal_328[0] = 0;
		}
	}
	if (iLocal_303[1])
	{
		if (func_171(unk_0xBC25C936A095B5BA(), iLocal_36[1], 1) < 20f && unk_0x1028B6250119A74B(iLocal_36[1], unk_0xBC25C936A095B5BA()))
		{
			if (iLocal_328[1] == 0)
			{
				unk_0x56F2E1B5599188FA(iLocal_36[1], unk_0xBC25C936A095B5BA(), -1, 1072, 3);
				iLocal_328[1] = 1;
			}
			if (iLocal_328[1] == 1)
			{
				if (unk_0xF4FCC3C1048FF2AB(iLocal_36[1], 150319005) != 0 || unk_0xF4FCC3C1048FF2AB(iLocal_36[1], 150319005) != 1)
				{
					iLocal_328[1] = 0;
				}
			}
		}
		else if (iLocal_328[1] == 1)
		{
			unk_0x56F2E1B5599188FA(iLocal_36[1], unk_0xBC25C936A095B5BA(), 1, 0, 2);
			iLocal_328[1] = 0;
		}
	}
	if (iLocal_303[0] && iLocal_303[1])
	{
		if (func_171(unk_0xBC25C936A095B5BA(), iLocal_36[0], 1) < func_171(unk_0xBC25C936A095B5BA(), iLocal_36[1], 1))
		{
			iLocal_298 = 1;
			iLocal_299 = 0;
		}
		else
		{
			iLocal_298 = 0;
			iLocal_299 = 1;
		}
	}
	else
	{
		if (iLocal_303[0] && !iLocal_303[1])
		{
			iLocal_298 = 1;
			iLocal_299 = 0;
		}
		if (iLocal_303[1] && !iLocal_303[0])
		{
			iLocal_298 = 0;
			iLocal_299 = 1;
		}
	}
	switch (iLocal_31)
	{
		case 0:
			if (unk_0xD64C9DAB4705D565("SCRAP_SECURITY"))
			{
				if (!unk_0x18205062F45F681D("SCRAP_SECURITY"))
				{
					unk_0xBB8B5725691B10D0("SCRAP_SECURITY", true);
				}
				if (unk_0x18205062F45F681D("SCRAP_SECURITY"))
				{
					if (unk_0x724D816EA203A79E(iLocal_36[0]))
					{
						if (!unk_0x36CEFBE9B745A58D(iLocal_36[0]))
						{
							if (!unk_0xCDE4868DBC945E20(iLocal_36[0]))
							{
								if (unk_0xABB25056487DF1D7(863.1551f, -1564.572f, 29.3231f, 5f, 1))
								{
									iLocal_83[0] = unk_0x105601648511CC64();
									if (!unk_0x26879BF7A62B3FDC(iLocal_36[0]))
									{
										if (iLocal_341[0] == 0)
										{
											unk_0xDAC1A196FF8C70B5(iLocal_36[0], 863.1551f, -1564.572f, 29.3231f, 5f, 0);
											iLocal_340[0] = 0;
											iLocal_341[0] = 1;
										}
									}
								}
								else if (unk_0x105601648511CC64() > iLocal_83[0] + 2000)
								{
									if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(iLocal_36[0], true), 863.1551f, -1564.572f, 29.3231f, true) > 3f)
									{
										if (iLocal_340[0] == 0)
										{
											unk_0x346129B364057FF6(iLocal_36[0], 863.1551f, -1564.572f, 29.3231f, 1f, -1, 1048576000, 0, 1193033728);
											iLocal_341[0] = 0;
											iLocal_340[0] = 1;
										}
									}
								}
							}
						}
					}
					if (unk_0x724D816EA203A79E(iLocal_36[1]))
					{
						if (!unk_0x36CEFBE9B745A58D(iLocal_36[1]))
						{
							if (!unk_0xCDE4868DBC945E20(iLocal_36[1]))
							{
								if (unk_0xABB25056487DF1D7(940.2881f, -1573.877f, 29.3866f, 5f, 1))
								{
									iLocal_83[1] = unk_0x105601648511CC64();
									if (!unk_0x26879BF7A62B3FDC(iLocal_36[1]))
									{
										if (iLocal_341[1] == 0)
										{
											unk_0xDAC1A196FF8C70B5(iLocal_36[1], 940.2881f, -1573.877f, 29.3866f, 5f, 0);
											iLocal_340[1] = 0;
											iLocal_341[1] = 1;
										}
									}
								}
								else if (unk_0x105601648511CC64() > iLocal_83[1] + 2000)
								{
									if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(iLocal_36[1], true), 940.2881f, -1573.877f, 29.3866f, true) > 3f)
									{
										if (iLocal_340[1] == 0)
										{
											unk_0x346129B364057FF6(iLocal_36[1], 940.2881f, -1573.877f, 29.3866f, 1f, -1, 1048576000, 0, 1193033728);
											iLocal_341[1] = 0;
											iLocal_340[1] = 1;
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (unk_0x724D816EA203A79E(iLocal_36[0]))
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_36[0]))
				{
					if (func_171(unk_0xBC25C936A095B5BA(), iLocal_36[0], 1) < 20f)
					{
						if ((func_183(unk_0xBC25C936A095B5BA()) == joaat("weapon_unarmed") || unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0)) || func_182(0))
						{
							if (unk_0xC5B8A5F778E321DD(unk_0xBC25C936A095B5BA(), iLocal_36[0], 100f) || unk_0x1028B6250119A74B(iLocal_36[0], unk_0xBC25C936A095B5BA()))
							{
								if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 860.4606f, -1563.58f, 28.81788f, 865.0807f, -1575.088f, 30.93324f, 5.75f, 0, true, 0) || unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 855.4593f, -1548.228f, 28.27722f, 863.1765f, -1563.288f, 33.31375f, 4.75f, 0, true, 0))
								{
									if (iLocal_334[0] == 0)
									{
										if (!unk_0xC5B8A5F778E321DD(iLocal_36[0], unk_0xBC25C936A095B5BA(), 45f))
										{
											if (!unk_0xD1DC4B08247A4317(iLocal_36[0]))
											{
												unk_0x49D46EE47C9CCB66(iLocal_36[0]);
											}
											else
											{
												unk_0xA4E856A8CD53B8DF(iLocal_36[0]);
											}
											unk_0x85DB484A637CEAB9(iLocal_36[0], unk_0xBC25C936A095B5BA(), 5000);
											iLocal_82[0] = unk_0x105601648511CC64();
											func_181(iLocal_36[0]);
											iLocal_334[0] = 1;
										}
									}
									if (iLocal_334[0] == 1)
									{
										if (unk_0x105601648511CC64() > iLocal_82[0] + 5000)
										{
											iLocal_334[0] = 0;
										}
									}
									if (iLocal_304[0] == 0 && iLocal_304[1] == 0)
									{
										if (iLocal_302 == 0)
										{
											func_179(iLocal_36[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 6);
											iLocal_66 = unk_0x105601648511CC64();
											iLocal_302 = 1;
										}
										else if (unk_0x105601648511CC64() > iLocal_66 + 15000)
										{
											func_179(iLocal_36[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
											iLocal_66 = unk_0x105601648511CC64();
										}
									}
									else
									{
										if (iLocal_304[0] == 1)
										{
											if (iLocal_305 == 0)
											{
												func_179(iLocal_36[0], "PROVOKE_GEBERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_72 = unk_0x105601648511CC64();
												iLocal_305 = 1;
											}
											else if (unk_0x105601648511CC64() > iLocal_72 + 15000)
											{
												func_179(iLocal_36[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_72 = unk_0x105601648511CC64();
											}
										}
										if (iLocal_304[1] == 1)
										{
											if (iLocal_306 == 0)
											{
												func_179(iLocal_36[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_73 = unk_0x105601648511CC64();
												iLocal_306 = 1;
											}
											else if (unk_0x105601648511CC64() > iLocal_73 + 15000)
											{
												func_179(iLocal_36[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_73 = unk_0x105601648511CC64();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			if (unk_0x724D816EA203A79E(iLocal_36[1]))
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_36[1]))
				{
					if (func_171(unk_0xBC25C936A095B5BA(), iLocal_36[1], 1) < 15f)
					{
						if ((func_183(unk_0xBC25C936A095B5BA()) == joaat("weapon_unarmed") || unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0)) || func_182(0))
						{
							if (unk_0xC5B8A5F778E321DD(unk_0xBC25C936A095B5BA(), iLocal_36[1], 100f))
							{
								if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 939.8862f, -1575.635f, 28.59783f, 952.9254f, -1575.484f, 33.19459f, 13.75f, 0, true, 0))
								{
									if (iLocal_334[1] == 0)
									{
										if (!unk_0xC5B8A5F778E321DD(iLocal_36[1], unk_0xBC25C936A095B5BA(), 45f))
										{
											if (!unk_0xD1DC4B08247A4317(iLocal_36[1]))
											{
												unk_0x49D46EE47C9CCB66(iLocal_36[1]);
											}
											else
											{
												unk_0xA4E856A8CD53B8DF(iLocal_36[1]);
											}
											unk_0x85DB484A637CEAB9(iLocal_36[1], unk_0xBC25C936A095B5BA(), 5000);
											iLocal_82[1] = unk_0x105601648511CC64();
											func_181(iLocal_36[1]);
											iLocal_334[1] = 1;
										}
									}
									if (iLocal_334[1] == 1)
									{
										if (unk_0x105601648511CC64() > iLocal_82[1] + 5000)
										{
											iLocal_334[1] = 0;
										}
									}
									if (iLocal_304[0] == 0 && iLocal_304[1] == 0)
									{
										if (iLocal_302 == 0)
										{
											func_179(iLocal_36[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
											iLocal_66 = unk_0x105601648511CC64();
											iLocal_302 = 1;
										}
										else if (unk_0x105601648511CC64() > iLocal_66 + 15000)
										{
											func_179(iLocal_36[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
											iLocal_66 = unk_0x105601648511CC64();
										}
									}
									else
									{
										if (iLocal_304[1] == 1)
										{
											if (iLocal_305 == 0)
											{
												func_179(iLocal_36[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
												iLocal_72 = unk_0x105601648511CC64();
												iLocal_305 = 1;
											}
											else if (unk_0x105601648511CC64() > iLocal_72 + 15000)
											{
												func_179(iLocal_36[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
												iLocal_72 = unk_0x105601648511CC64();
											}
										}
										if (iLocal_304[0] == 1)
										{
											if (iLocal_306 == 0)
											{
												func_179(iLocal_36[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
												iLocal_73 = unk_0x105601648511CC64();
												iLocal_306 = 1;
											}
											else if (unk_0x105601648511CC64() > iLocal_73 + 15000)
											{
												func_179(iLocal_36[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
												iLocal_73 = unk_0x105601648511CC64();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 2:
			if (iLocal_360 == 0)
			{
				iLocal_360 = 1;
			}
			if (func_178() || iLocal_297 == 1)
			{
				if (unk_0x724D816EA203A79E(iLocal_36[0]))
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_36[0]))
					{
						if (unk_0x1028B6250119A74B(iLocal_36[0], unk_0xBC25C936A095B5BA()))
						{
							iLocal_81[0] = unk_0x105601648511CC64();
							iLocal_332[0] = 1;
							if (iLocal_331[0] == 0)
							{
								if (unk_0xD1DC4B08247A4317(iLocal_36[0]))
								{
									unk_0xA4E856A8CD53B8DF(iLocal_36[0]);
								}
								else
								{
									unk_0x49D46EE47C9CCB66(iLocal_36[0]);
								}
								unk_0x91629AC1E1F78419(iLocal_36[0], 50, true);
								unk_0xB8CBD998685C0685(iLocal_36[0], unk_0xBC25C936A095B5BA(), 0, 16);
								func_181(iLocal_36[0]);
								iLocal_331[0] = 1;
							}
						}
						else if (iLocal_333[0] == 0)
						{
							if (iLocal_332[0] == 0)
							{
								if (unk_0xD1DC4B08247A4317(iLocal_36[0]))
								{
									unk_0xA4E856A8CD53B8DF(iLocal_36[0]);
								}
								else
								{
									unk_0x49D46EE47C9CCB66(iLocal_36[0]);
								}
								unk_0x346129B364057FF6(iLocal_36[0], unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 3f, -1, 1048576000, 0, 1193033728);
								func_181(iLocal_36[0]);
								iLocal_333[0] = 1;
							}
							if (iLocal_332[0] == 1)
							{
								if (unk_0x105601648511CC64() > iLocal_81[0] + 500)
								{
									if (unk_0xD1DC4B08247A4317(iLocal_36[0]))
									{
										unk_0xA4E856A8CD53B8DF(iLocal_36[0]);
									}
									else
									{
										unk_0x49D46EE47C9CCB66(iLocal_36[0]);
									}
									unk_0x346129B364057FF6(iLocal_36[0], unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 3f, -1, 1048576000, 0, 1193033728);
									func_181(iLocal_36[0]);
									iLocal_333[0] = 1;
								}
							}
						}
					}
				}
				if (unk_0x724D816EA203A79E(iLocal_36[1]))
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_36[1]))
					{
						if (unk_0x1028B6250119A74B(iLocal_36[1], unk_0xBC25C936A095B5BA()))
						{
							iLocal_81[1] = unk_0x105601648511CC64();
							iLocal_332[1] = 1;
							if (iLocal_331[1] == 0)
							{
								if (unk_0xD1DC4B08247A4317(iLocal_36[1]))
								{
									unk_0xA4E856A8CD53B8DF(iLocal_36[1]);
								}
								else
								{
									unk_0x49D46EE47C9CCB66(iLocal_36[1]);
								}
								unk_0x91629AC1E1F78419(iLocal_36[1], 50, true);
								unk_0xB8CBD998685C0685(iLocal_36[1], unk_0xBC25C936A095B5BA(), 0, 16);
								func_181(iLocal_36[1]);
								iLocal_331[1] = 1;
							}
						}
						else if (iLocal_333[1] == 0)
						{
							if (iLocal_332[1] == 0)
							{
								if (unk_0xD1DC4B08247A4317(iLocal_36[1]))
								{
									unk_0xA4E856A8CD53B8DF(iLocal_36[1]);
								}
								else
								{
									unk_0x49D46EE47C9CCB66(iLocal_36[1]);
								}
								unk_0x346129B364057FF6(iLocal_36[1], unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 3f, -1, 1048576000, 0, 1193033728);
								func_181(iLocal_36[1]);
								iLocal_333[1] = 1;
							}
							if (iLocal_332[1] == 1)
							{
								if (unk_0x105601648511CC64() > iLocal_81[1] + 500)
								{
									if (unk_0xD1DC4B08247A4317(iLocal_36[1]))
									{
										unk_0xA4E856A8CD53B8DF(iLocal_36[1]);
									}
									else
									{
										unk_0x49D46EE47C9CCB66(iLocal_36[1]);
									}
									unk_0x346129B364057FF6(iLocal_36[1], unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 3f, -1, 1048576000, 0, 1193033728);
									func_181(iLocal_36[1]);
									iLocal_333[1] = 1;
								}
							}
						}
					}
				}
				if (func_178())
				{
					if (iLocal_307 == 0)
					{
						if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) < 2)
						{
							unk_0xAEC867D0DBB7AFEB(5);
							unk_0xDF53A66AEE1401AA(1f);
							unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 2, 0);
							unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
							iLocal_307 = 1;
						}
					}
					if (iLocal_298 == 1)
					{
						if (iLocal_300 == 0)
						{
							if (func_171(unk_0xBC25C936A095B5BA(), iLocal_36[0], 1) < 20f)
							{
								if (!unk_0x9986AD62CA3DE747(iLocal_36[0]))
								{
									func_179(iLocal_36[0], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
									iLocal_71 = unk_0x105601648511CC64();
									iLocal_300 = 1;
								}
							}
						}
						else if (unk_0x105601648511CC64() > iLocal_71 + 7000)
						{
							if (func_171(unk_0xBC25C936A095B5BA(), iLocal_36[0], 1) < 20f)
							{
								if (!unk_0x9986AD62CA3DE747(iLocal_36[0]))
								{
									func_179(iLocal_36[0], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
									iLocal_71 = unk_0x105601648511CC64();
								}
							}
						}
					}
					if (iLocal_299 == 1)
					{
						if (iLocal_300 == 0)
						{
							if (func_171(unk_0xBC25C936A095B5BA(), iLocal_36[1], 1) < 20f)
							{
								if (!unk_0x9986AD62CA3DE747(iLocal_36[1]))
								{
									func_179(iLocal_36[1], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
									iLocal_71 = unk_0x105601648511CC64();
									iLocal_300 = 1;
								}
							}
						}
						else if (unk_0x105601648511CC64() > iLocal_71 + 7000)
						{
							if (func_171(unk_0xBC25C936A095B5BA(), iLocal_36[1], 1) < 20f)
							{
								if (!unk_0x9986AD62CA3DE747(iLocal_36[1]))
								{
									func_179(iLocal_36[1], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
									iLocal_71 = unk_0x105601648511CC64();
								}
							}
						}
					}
				}
				else
				{
					if (iLocal_339 == 0)
					{
						iLocal_41 = func_175(unk_0xBC25C936A095B5BA(), -1533126372, 0, 0, 28);
						if (iLocal_41 != 0)
						{
							if (unk_0x724D816EA203A79E(iLocal_41))
							{
								if (!unk_0x36CEFBE9B745A58D(iLocal_41))
								{
									if (func_171(unk_0xBC25C936A095B5BA(), iLocal_41, 1) < 35f)
									{
										iLocal_339 = 1;
									}
								}
							}
						}
					}
					if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0 && iLocal_339 == 0)
					{
						if (iLocal_298 == 1)
						{
							if (iLocal_301 == 0)
							{
								if (func_171(unk_0xBC25C936A095B5BA(), iLocal_36[0], 1) < 20f)
								{
									if (!unk_0x9986AD62CA3DE747(iLocal_36[0]))
									{
										func_179(iLocal_36[0], "GENERIC_INSULT_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
										iLocal_70 = unk_0x105601648511CC64();
										iLocal_301 = 1;
									}
								}
							}
							else if (unk_0x105601648511CC64() > iLocal_70 + 7000)
							{
								if (func_171(unk_0xBC25C936A095B5BA(), iLocal_36[0], 1) < 20f)
								{
									if (!unk_0x9986AD62CA3DE747(iLocal_36[0]))
									{
										func_179(iLocal_36[0], "GENERIC_CURSE_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
										iLocal_70 = unk_0x105601648511CC64();
									}
								}
							}
						}
						if (iLocal_299 == 1)
						{
							if (iLocal_301 == 0)
							{
								if (func_171(unk_0xBC25C936A095B5BA(), iLocal_36[1], 1) < 20f)
								{
									if (!unk_0x9986AD62CA3DE747(iLocal_36[1]))
									{
										func_179(iLocal_36[1], "GENERIC_INSULT_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
										iLocal_70 = unk_0x105601648511CC64();
										iLocal_301 = 1;
									}
								}
							}
							else if (unk_0x105601648511CC64() > iLocal_70 + 7000)
							{
								if (func_171(unk_0xBC25C936A095B5BA(), iLocal_36[1], 1) < 20f)
								{
									if (!unk_0x9986AD62CA3DE747(iLocal_36[1]))
									{
										func_179(iLocal_36[1], "GENERIC_CURSE_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
										iLocal_70 = unk_0x105601648511CC64();
									}
								}
							}
						}
					}
				}
			}
			if (!func_178())
			{
				if (iLocal_309 == 0)
				{
					if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 893.2f, -1556.5f, 30f, true) < 18f)
					{
						if (unk_0x724D816EA203A79E(iLocal_36[0]))
						{
							if (!unk_0x36CEFBE9B745A58D(iLocal_36[0]))
							{
								if (unk_0x1028B6250119A74B(iLocal_36[0], unk_0xBC25C936A095B5BA()))
								{
									iLocal_65 = unk_0x105601648511CC64();
									iLocal_309 = 1;
								}
							}
						}
						if (unk_0x724D816EA203A79E(iLocal_36[1]))
						{
							if (!unk_0x36CEFBE9B745A58D(iLocal_36[1]))
							{
								if (unk_0x1028B6250119A74B(iLocal_36[1], unk_0xBC25C936A095B5BA()))
								{
									iLocal_65 = unk_0x105601648511CC64();
									iLocal_309 = 1;
								}
							}
						}
					}
				}
				if (iLocal_297 == 0)
				{
					if (unk_0x724D816EA203A79E(iLocal_36[0]))
					{
						if (!unk_0x36CEFBE9B745A58D(iLocal_36[0]))
						{
							if (func_171(unk_0xBC25C936A095B5BA(), iLocal_36[0], 1) > 4f)
							{
								if (unk_0x1028B6250119A74B(iLocal_36[0], unk_0xBC25C936A095B5BA()))
								{
									if (iLocal_329[0] == 0)
									{
										if (unk_0xD1DC4B08247A4317(iLocal_36[0]))
										{
											unk_0xA4E856A8CD53B8DF(iLocal_36[0]);
										}
										else
										{
											unk_0x49D46EE47C9CCB66(iLocal_36[0]);
										}
										unk_0x9565F9267674873A(iLocal_36[0], unk_0xBC25C936A095B5BA(), -1, 0.5f, 2f, 1073741824, 0);
										func_181(iLocal_36[0]);
										iLocal_329[0] = 1;
									}
									iLocal_80[0] = unk_0x105601648511CC64();
								}
								else if (unk_0x105601648511CC64() > iLocal_80[0] + 500)
								{
									if (iLocal_330[0] == 0)
									{
										if (unk_0xD1DC4B08247A4317(iLocal_36[0]))
										{
											unk_0xA4E856A8CD53B8DF(iLocal_36[0]);
										}
										else
										{
											unk_0x49D46EE47C9CCB66(iLocal_36[0]);
										}
										unk_0x346129B364057FF6(iLocal_36[0], unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 2f, -1, 1048576000, 0, 1193033728);
										func_181(iLocal_36[0]);
										iLocal_330[0] = 1;
									}
								}
							}
							else if (iLocal_361[0] == 0)
							{
								if (unk_0xD1DC4B08247A4317(iLocal_36[0]))
								{
									unk_0xA4E856A8CD53B8DF(iLocal_36[0]);
								}
								else
								{
									unk_0x49D46EE47C9CCB66(iLocal_36[0]);
								}
								unk_0xC5A6DFE2B8987B17(&uLocal_48);
								unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 0);
								unk_0xDE2D2B13F24A979D(0, 2000);
								unk_0xAFD74A5E065F57E0(uLocal_48, 1);
								unk_0x535008C596714F9E(uLocal_48);
								unk_0xA8E6405305C0D7DF(iLocal_36[0], uLocal_48);
								unk_0x02DAF06EA4F08219(&uLocal_48);
								func_181(iLocal_36[0]);
								iLocal_361[0] = 1;
							}
							if (iLocal_335 == 0)
							{
								if (iLocal_326 == 0 || iLocal_302 == 1)
								{
									if (iLocal_296 == 0)
									{
										if (func_171(unk_0xBC25C936A095B5BA(), iLocal_36[0], 1) < 10f)
										{
											if (!unk_0x9986AD62CA3DE747(iLocal_36[0]))
											{
												func_179(iLocal_36[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 1);
												iLocal_67 = unk_0x105601648511CC64();
												iLocal_68 = unk_0x105601648511CC64();
												iLocal_65 = unk_0x105601648511CC64();
												iLocal_309 = 1;
												iLocal_296 = 1;
												iLocal_304[0] = 1;
											}
										}
									}
									else if (unk_0x105601648511CC64() > iLocal_67 + 7000)
									{
										if (func_171(unk_0xBC25C936A095B5BA(), iLocal_36[0], 1) < 10f)
										{
											if (!unk_0x9986AD62CA3DE747(iLocal_36[0]))
											{
												func_179(iLocal_36[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
												iLocal_67 = unk_0x105601648511CC64();
											}
										}
									}
								}
								else if (iLocal_302 == 0)
								{
									if (iLocal_327 == 0)
									{
										if (func_171(unk_0xBC25C936A095B5BA(), iLocal_36[0], 1) < 10f)
										{
											if (!unk_0x9986AD62CA3DE747(iLocal_36[0]))
											{
												func_179(iLocal_36[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 8);
												iLocal_296 = 1;
												iLocal_327 = 1;
											}
										}
									}
								}
							}
							else if (unk_0x105601648511CC64() > iLocal_68 + 7000)
							{
								if (func_171(unk_0xBC25C936A095B5BA(), iLocal_36[0], 1) < 15f)
								{
									if (!unk_0x9986AD62CA3DE747(iLocal_36[0]))
									{
										func_179(iLocal_36[0], "FIGHT", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
										iLocal_68 = unk_0x105601648511CC64();
									}
								}
							}
						}
					}
					if (unk_0x724D816EA203A79E(iLocal_36[1]))
					{
						if (!unk_0x36CEFBE9B745A58D(iLocal_36[1]))
						{
							if (func_171(unk_0xBC25C936A095B5BA(), iLocal_36[1], 1) > 4f)
							{
								if (unk_0x1028B6250119A74B(iLocal_36[1], unk_0xBC25C936A095B5BA()))
								{
									if (iLocal_329[1] == 0)
									{
										if (unk_0xD1DC4B08247A4317(iLocal_36[1]))
										{
											unk_0xA4E856A8CD53B8DF(iLocal_36[1]);
										}
										else
										{
											unk_0x49D46EE47C9CCB66(iLocal_36[1]);
										}
										unk_0x9565F9267674873A(iLocal_36[1], unk_0xBC25C936A095B5BA(), -1, 0.5f, 2f, 1073741824, 0);
										func_181(iLocal_36[1]);
										iLocal_329[1] = 1;
									}
									iLocal_80[1] = unk_0x105601648511CC64();
								}
								else if (unk_0x105601648511CC64() > iLocal_80[1] + 500)
								{
									if (iLocal_330[1] == 0)
									{
										if (unk_0xD1DC4B08247A4317(iLocal_36[1]))
										{
											unk_0xA4E856A8CD53B8DF(iLocal_36[1]);
										}
										else
										{
											unk_0x49D46EE47C9CCB66(iLocal_36[1]);
										}
										unk_0x346129B364057FF6(iLocal_36[1], unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 2f, -1, 1048576000, 0, 1193033728);
										func_181(iLocal_36[1]);
										iLocal_330[1] = 1;
									}
								}
							}
							else if (iLocal_361[1] == 0)
							{
								if (unk_0xD1DC4B08247A4317(iLocal_36[1]))
								{
									unk_0xA4E856A8CD53B8DF(iLocal_36[1]);
								}
								else
								{
									unk_0x49D46EE47C9CCB66(iLocal_36[1]);
								}
								unk_0xC5A6DFE2B8987B17(&uLocal_48);
								unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 0);
								unk_0xDE2D2B13F24A979D(0, 2000);
								unk_0xAFD74A5E065F57E0(uLocal_48, 1);
								unk_0x535008C596714F9E(uLocal_48);
								unk_0xA8E6405305C0D7DF(iLocal_36[1], uLocal_48);
								unk_0x02DAF06EA4F08219(&uLocal_48);
								func_181(iLocal_36[1]);
								iLocal_361[1] = 1;
							}
							if (iLocal_335 == 0)
							{
								if (iLocal_326 == 0 || iLocal_302 == 1)
								{
									if (iLocal_296 == 0)
									{
										if (func_171(unk_0xBC25C936A095B5BA(), iLocal_36[1], 1) < 10f)
										{
											if (!unk_0x9986AD62CA3DE747(iLocal_36[1]))
											{
												func_179(iLocal_36[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
												iLocal_67 = unk_0x105601648511CC64();
												iLocal_69 = unk_0x105601648511CC64();
												iLocal_65 = unk_0x105601648511CC64();
												iLocal_309 = 1;
												iLocal_296 = 1;
												iLocal_304[1] = 1;
											}
										}
									}
									else if (unk_0x105601648511CC64() > iLocal_67 + 7000)
									{
										if (func_171(unk_0xBC25C936A095B5BA(), iLocal_36[1], 1) < 10f)
										{
											if (!unk_0x9986AD62CA3DE747(iLocal_36[1]))
											{
												func_179(iLocal_36[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 11);
												iLocal_67 = unk_0x105601648511CC64();
											}
										}
									}
								}
								else if (iLocal_302 == 0)
								{
									if (iLocal_327 == 0)
									{
										if (func_171(unk_0xBC25C936A095B5BA(), iLocal_36[1], 1) < 10f)
										{
											if (!unk_0x9986AD62CA3DE747(iLocal_36[1]))
											{
												func_179(iLocal_36[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 8);
												iLocal_296 = 1;
												iLocal_327 = 1;
											}
										}
									}
								}
							}
							else if (unk_0x105601648511CC64() > iLocal_69 + 7000)
							{
								if (func_171(unk_0xBC25C936A095B5BA(), iLocal_36[1], 1) < 10f)
								{
									if (!unk_0x9986AD62CA3DE747(iLocal_36[1]))
									{
										func_179(iLocal_36[1], "FIGHT", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 11);
										iLocal_69 = unk_0x105601648511CC64();
									}
								}
							}
						}
					}
					if (iLocal_309 == 1)
					{
						if (iLocal_335 == 0)
						{
							if (unk_0x105601648511CC64() > iLocal_65 + 22000)
							{
								iLocal_335 = 1;
							}
						}
					}
					if (iLocal_309 == 1)
					{
						if (iLocal_297 == 0)
						{
							if (unk_0x105601648511CC64() > iLocal_65 + 30000)
							{
								unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 2, 0);
								iLocal_297 = 1;
							}
						}
					}
					if (unk_0x724D816EA203A79E(iLocal_33))
					{
						if (unk_0xE59B7F5A03335350(iLocal_33, 0))
						{
							if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_33, 1))
							{
								if (unk_0x1028B6250119A74B(iLocal_36[0], unk_0xBC25C936A095B5BA()) || unk_0x1028B6250119A74B(iLocal_36[1], unk_0xBC25C936A095B5BA()))
								{
									iLocal_297 = 1;
								}
							}
							if (func_171(unk_0xBC25C936A095B5BA(), iLocal_33, 1) < 5f && unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA()))
							{
								if (unk_0x1028B6250119A74B(iLocal_36[0], unk_0xBC25C936A095B5BA()) || unk_0x1028B6250119A74B(iLocal_36[1], unk_0xBC25C936A095B5BA()))
								{
									iLocal_297 = 1;
								}
							}
						}
					}
					if (unk_0x724D816EA203A79E(iLocal_36[0]))
					{
						if (!unk_0x36CEFBE9B745A58D(iLocal_36[0]))
						{
							if (unk_0xABB2AFD7539464EA(unk_0xBC25C936A095B5BA()))
							{
								if (unk_0xFF2EA801C4691698(unk_0xBC25C936A095B5BA()))
								{
									if (unk_0x1028B6250119A74B(iLocal_36[0], unk_0xBC25C936A095B5BA()))
									{
										iLocal_297 = 1;
									}
								}
							}
						}
					}
					if (unk_0x724D816EA203A79E(iLocal_36[1]))
					{
						if (!unk_0x36CEFBE9B745A58D(iLocal_36[1]))
						{
							if (unk_0xABB2AFD7539464EA(unk_0xBC25C936A095B5BA()))
							{
								if (unk_0xFF2EA801C4691698(unk_0xBC25C936A095B5BA()))
								{
									if (unk_0x1028B6250119A74B(iLocal_36[1], unk_0xBC25C936A095B5BA()))
									{
										iLocal_297 = 1;
									}
								}
							}
						}
					}
				}
			}
			break;
	}
}

int func_178()//Position - 0xCE17
{
	if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		iLocal_64 = 0;
		while (iLocal_64 <= 6)
		{
			if (unk_0x724D816EA203A79E(iLocal_35[iLocal_64]))
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_35[iLocal_64]))
				{
					if (func_183(unk_0xBC25C936A095B5BA()) != joaat("weapon_unarmed") && !func_182(0))
					{
						if (unk_0x1028B6250119A74B(iLocal_35[iLocal_64], unk_0xBC25C936A095B5BA()))
						{
							return 1;
						}
					}
				}
			}
			iLocal_64++;
		}
		if (unk_0x724D816EA203A79E(iLocal_36[0]))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_36[0]))
			{
				if (func_183(unk_0xBC25C936A095B5BA()) != joaat("weapon_unarmed") && !func_182(0))
				{
					if (unk_0x1028B6250119A74B(iLocal_36[0], unk_0xBC25C936A095B5BA()))
					{
						return 1;
					}
				}
			}
		}
		if (unk_0x724D816EA203A79E(iLocal_36[1]))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_36[1]))
			{
				if (func_183(unk_0xBC25C936A095B5BA()) != joaat("weapon_unarmed") && !func_182(0))
				{
					if (unk_0x1028B6250119A74B(iLocal_36[1], unk_0xBC25C936A095B5BA()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_179(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0xCF1D
{
	unk_0x7E80A36CD8BDF4D1(iParam0, sParam1, sParam2, func_180(iParam3), 0);
}

int func_180(int iParam0)//Position - 0xCF36
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

void func_181(int iParam0)//Position - 0xD12B
{
	if (iParam0 == iLocal_36[0])
	{
		iLocal_328[0] = 0;
		iLocal_340[0] = 0;
		iLocal_341[0] = 0;
		iLocal_334[0] = 0;
		iLocal_331[0] = 0;
		iLocal_333[0] = 0;
		iLocal_329[0] = 0;
		iLocal_330[0] = 0;
		iLocal_361[0] = 0;
	}
	if (iParam0 == iLocal_36[1])
	{
		iLocal_328[1] = 0;
		iLocal_340[1] = 0;
		iLocal_341[1] = 0;
		iLocal_334[1] = 0;
		iLocal_331[1] = 0;
		iLocal_333[1] = 0;
		iLocal_329[1] = 0;
		iLocal_330[1] = 0;
		iLocal_361[1] = 0;
	}
}

int func_182(int iParam0)//Position - 0xD1C5
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

int func_183(int iParam0)//Position - 0xD21F
{
	var uVar0;
	
	unk_0x9CDD10270A1ACF6F(iParam0, &uVar0, 1);
	return uVar0;
}

void func_184()//Position - 0xD233
{
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			vLocal_93 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_36[0]))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_36[0]))
		{
			vLocal_95[0 /*3*/] = { unk_0x541C2AEF053615BC(iLocal_36[0], true) };
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_36[1]))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_36[1]))
		{
			vLocal_95[1 /*3*/] = { unk_0x541C2AEF053615BC(iLocal_36[1], true) };
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_36[0]))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_36[0]))
		{
			iLocal_303[0] = 1;
		}
		else
		{
			iLocal_303[0] = 0;
		}
	}
	else
	{
		iLocal_303[0] = 0;
	}
	if (unk_0x724D816EA203A79E(iLocal_36[1]))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_36[1]))
		{
			iLocal_303[1] = 1;
		}
		else
		{
			iLocal_303[1] = 0;
		}
	}
	else
	{
		iLocal_303[1] = 0;
	}
	if (iLocal_31 != 0)
	{
		if (iLocal_31 == 1)
		{
			if (iLocal_303[0] == 1)
			{
				if (iLocal_303[1] == 1)
				{
					if (func_171(unk_0xBC25C936A095B5BA(), iLocal_36[0], 1) < func_171(unk_0xBC25C936A095B5BA(), iLocal_36[1], 1))
					{
						if (func_171(unk_0xBC25C936A095B5BA(), iLocal_36[0], 1) < 20f)
						{
							if (((vLocal_93.x < vLocal_95[0 /*3*/] && !unk_0xC5B8A5F778E321DD(unk_0xBC25C936A095B5BA(), iLocal_36[0], 90f)) && !unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, true, 0)) && !unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 855.4593f, -1548.228f, 28.27722f, 863.1765f, -1563.288f, 33.31375f, 4.75f, 0, true, 0))
							{
								iLocal_31 = 0;
								iLocal_340[0] = 0;
								iLocal_341[0] = 0;
								iLocal_340[1] = 0;
								iLocal_341[1] = 0;
								iLocal_83[0] = unk_0x105601648511CC64();
								iLocal_83[1] = unk_0x105601648511CC64();
							}
						}
						else if (vLocal_93.x < vLocal_95[0 /*3*/])
						{
							iLocal_31 = 0;
							iLocal_340[0] = 0;
							iLocal_341[0] = 0;
							iLocal_340[1] = 0;
							iLocal_341[1] = 0;
							iLocal_83[0] = unk_0x105601648511CC64();
							iLocal_83[1] = unk_0x105601648511CC64();
						}
					}
					else if (func_171(unk_0xBC25C936A095B5BA(), iLocal_36[1], 1) < 15f)
					{
						if ((vLocal_93.x > vLocal_95[1 /*3*/] && !unk_0xC5B8A5F778E321DD(unk_0xBC25C936A095B5BA(), iLocal_36[1], 90f)) && !unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, true, 0))
						{
							iLocal_31 = 0;
							iLocal_340[0] = 0;
							iLocal_341[0] = 0;
							iLocal_340[1] = 0;
							iLocal_341[1] = 0;
							iLocal_83[0] = unk_0x105601648511CC64();
							iLocal_83[1] = unk_0x105601648511CC64();
						}
					}
					else if (vLocal_93.x > vLocal_95[1 /*3*/])
					{
						iLocal_31 = 0;
						iLocal_340[0] = 0;
						iLocal_341[0] = 0;
						iLocal_340[1] = 0;
						iLocal_341[1] = 0;
						iLocal_83[0] = unk_0x105601648511CC64();
						iLocal_83[1] = unk_0x105601648511CC64();
					}
				}
				else if (func_171(unk_0xBC25C936A095B5BA(), iLocal_36[0], 1) < func_171(unk_0xBC25C936A095B5BA(), iLocal_36[1], 1))
				{
					if (func_171(unk_0xBC25C936A095B5BA(), iLocal_36[0], 1) < 15f)
					{
						if ((vLocal_93.x < vLocal_95[0 /*3*/] && !unk_0xC5B8A5F778E321DD(unk_0xBC25C936A095B5BA(), iLocal_36[0], 90f)) && !unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, true, 0))
						{
							iLocal_31 = 0;
							iLocal_340[0] = 0;
							iLocal_341[0] = 0;
							iLocal_340[1] = 0;
							iLocal_341[1] = 0;
							iLocal_83[0] = unk_0x105601648511CC64();
							iLocal_83[1] = unk_0x105601648511CC64();
						}
					}
					else if (vLocal_93.x < vLocal_95[0 /*3*/])
					{
						iLocal_31 = 0;
						iLocal_340[0] = 0;
						iLocal_341[0] = 0;
						iLocal_340[1] = 0;
						iLocal_341[1] = 0;
						iLocal_83[0] = unk_0x105601648511CC64();
						iLocal_83[1] = unk_0x105601648511CC64();
					}
				}
			}
			else if (iLocal_303[1] == 1)
			{
				if (func_171(unk_0xBC25C936A095B5BA(), iLocal_36[1], 1) < 15f)
				{
					if ((vLocal_93.x > vLocal_95[1 /*3*/] && !unk_0xC5B8A5F778E321DD(unk_0xBC25C936A095B5BA(), iLocal_36[1], 90f)) && !unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, true, 0))
					{
						iLocal_31 = 0;
						iLocal_340[0] = 0;
						iLocal_341[0] = 0;
						iLocal_340[1] = 0;
						iLocal_341[1] = 0;
						iLocal_83[0] = unk_0x105601648511CC64();
						iLocal_83[1] = unk_0x105601648511CC64();
					}
				}
				else if (vLocal_93.x > vLocal_95[1 /*3*/])
				{
					iLocal_31 = 0;
					iLocal_340[0] = 0;
					iLocal_341[0] = 0;
					iLocal_340[1] = 0;
					iLocal_341[1] = 0;
					iLocal_83[0] = unk_0x105601648511CC64();
					iLocal_83[1] = unk_0x105601648511CC64();
				}
			}
		}
		if (iLocal_31 == 2)
		{
			if (iLocal_297 == 0)
			{
				if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, true, 0) || vLocal_93.x > 942f)
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_36[1]))
					{
						if (vLocal_93.x > vLocal_95[1 /*3*/])
						{
							if (!unk_0xC5B8A5F778E321DD(unk_0xBC25C936A095B5BA(), iLocal_36[1], 90f))
							{
								iLocal_31 = 0;
								iLocal_340[0] = 0;
								iLocal_341[0] = 0;
								iLocal_340[1] = 0;
								iLocal_341[1] = 0;
								iLocal_83[0] = unk_0x105601648511CC64();
								iLocal_83[1] = unk_0x105601648511CC64();
							}
						}
					}
					else if (vLocal_93.x > 942f)
					{
						if (!unk_0xC5B8A5F778E321DD(unk_0xBC25C936A095B5BA(), iLocal_36[1], 90f))
						{
							iLocal_31 = 0;
							iLocal_340[0] = 0;
							iLocal_341[0] = 0;
							iLocal_340[1] = 0;
							iLocal_341[1] = 0;
							iLocal_83[0] = unk_0x105601648511CC64();
							iLocal_83[1] = unk_0x105601648511CC64();
						}
					}
				}
				if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, true, 0) || vLocal_93.x < 860f)
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_36[0]))
					{
						if (vLocal_93.x < vLocal_95[0 /*3*/])
						{
							if (!unk_0xC5B8A5F778E321DD(unk_0xBC25C936A095B5BA(), iLocal_36[0], 90f))
							{
								iLocal_31 = 0;
								iLocal_340[0] = 0;
								iLocal_341[0] = 0;
								iLocal_340[1] = 0;
								iLocal_341[1] = 0;
								iLocal_83[0] = unk_0x105601648511CC64();
								iLocal_83[1] = unk_0x105601648511CC64();
							}
						}
					}
					else if (vLocal_93.x < 860f)
					{
						if (!unk_0xC5B8A5F778E321DD(unk_0xBC25C936A095B5BA(), iLocal_36[0], 90f))
						{
							iLocal_31 = 0;
							iLocal_340[0] = 0;
							iLocal_341[0] = 0;
							iLocal_340[1] = 0;
							iLocal_341[1] = 0;
							iLocal_83[0] = unk_0x105601648511CC64();
							iLocal_83[1] = unk_0x105601648511CC64();
						}
					}
				}
			}
		}
	}
	if (iLocal_31 != 1)
	{
		if (iLocal_31 != 2)
		{
			if (iLocal_303[0] == 1)
			{
				if (func_171(unk_0xBC25C936A095B5BA(), iLocal_36[0], 1) < 20f)
				{
					if ((func_183(unk_0xBC25C936A095B5BA()) == joaat("weapon_unarmed") || unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0)) || func_182(0))
					{
						if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 860.4606f, -1563.58f, 28.81788f, 865.0807f, -1575.088f, 30.93324f, 5.75f, 0, true, 0))
						{
							if (vLocal_93.x > vLocal_95[0 /*3*/] || unk_0xC5B8A5F778E321DD(unk_0xBC25C936A095B5BA(), iLocal_36[0], 90f))
							{
								iLocal_31 = 1;
							}
						}
						if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 855.4593f, -1548.228f, 28.27722f, 863.1765f, -1563.288f, 33.31375f, 4.75f, 0, true, 0))
						{
							iLocal_31 = 1;
						}
					}
				}
			}
			if (iLocal_303[1] == 1)
			{
				if (func_171(unk_0xBC25C936A095B5BA(), iLocal_36[1], 1) < 15f)
				{
					if ((func_183(unk_0xBC25C936A095B5BA()) == joaat("weapon_unarmed") || unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0)) || func_182(0))
					{
						if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 939.8862f, -1575.635f, 28.59783f, 952.9254f, -1575.484f, 33.19459f, 13.75f, 0, true, 0))
						{
							if (vLocal_93.x < vLocal_95[1 /*3*/] || unk_0xC5B8A5F778E321DD(unk_0xBC25C936A095B5BA(), iLocal_36[1], 90f))
							{
								iLocal_31 = 1;
							}
						}
					}
				}
			}
		}
	}
	if (iLocal_31 != 2)
	{
		if (unk_0xC9FA5D38428AB6BE(-1, 892.9f, -1552.4f, 30f, 40f))
		{
			iLocal_31 = 2;
			iLocal_297 = 1;
		}
		if (iLocal_359 == 1)
		{
			iLocal_31 = 2;
			iLocal_297 = 1;
		}
		if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) != 0)
		{
			if (unk_0x724D816EA203A79E(iLocal_36[0]))
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_36[0]))
				{
					if (unk_0x1028B6250119A74B(iLocal_36[0], unk_0xBC25C936A095B5BA()))
					{
						iLocal_31 = 2;
						iLocal_297 = 1;
					}
				}
			}
			if (unk_0x724D816EA203A79E(iLocal_36[1]))
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_36[1]))
				{
					if (unk_0x1028B6250119A74B(iLocal_36[1], unk_0xBC25C936A095B5BA()))
					{
						iLocal_31 = 2;
						iLocal_297 = 1;
					}
				}
			}
		}
		if (iLocal_326 == 0)
		{
			if (iLocal_325 == 1)
			{
				if (unk_0x105601648511CC64() > iLocal_79 + 4000)
				{
					iLocal_78 = 0;
					while (iLocal_78 <= 6)
					{
						if (func_176())
						{
							if (unk_0x724D816EA203A79E(iLocal_35[iLocal_78]))
							{
								if (!unk_0x36CEFBE9B745A58D(iLocal_35[iLocal_78]))
								{
									if (unk_0x01D780A383381D10(iLocal_35[iLocal_78]))
									{
										iLocal_31 = 2;
										iLocal_326 = 1;
									}
								}
							}
						}
						iLocal_78++;
					}
				}
			}
		}
		if ((iLocal_29 == 4 || iLocal_29 == 3) || iLocal_325 == 1)
		{
			iLocal_31 = 2;
			iLocal_322 = 1;
			iLocal_297 = 1;
		}
		if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			if (iLocal_303[0] == 1)
			{
				if (func_183(unk_0xBC25C936A095B5BA()) != joaat("weapon_unarmed") && !func_182(0))
				{
					if (unk_0x1028B6250119A74B(iLocal_36[0], unk_0xBC25C936A095B5BA()))
					{
						iLocal_31 = 2;
					}
				}
			}
			if (iLocal_303[1] == 1)
			{
				if (func_183(unk_0xBC25C936A095B5BA()) != joaat("weapon_unarmed") && !func_182(0))
				{
					if (unk_0x1028B6250119A74B(iLocal_36[1], unk_0xBC25C936A095B5BA()))
					{
						iLocal_31 = 2;
					}
				}
			}
		}
		if (unk_0xF0F2FC9DE291567F(vLocal_93, vLocal_96, true) < 36f)
		{
			if (iLocal_303[0] == 1)
			{
				if (unk_0x1028B6250119A74B(iLocal_36[0], unk_0xBC25C936A095B5BA()))
				{
					iLocal_31 = 2;
				}
				if (func_171(iLocal_36[0], unk_0xBC25C936A095B5BA(), 1) < 20f)
				{
					if (unk_0x0921C54CF8DFC6E7(unk_0xB5CEFD608600A09F(), iLocal_36[0]))
					{
						iLocal_31 = 2;
					}
				}
			}
			if (iLocal_303[1] == 1)
			{
				if (vLocal_93.z < 36f || unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
				{
					if (unk_0x1028B6250119A74B(iLocal_36[1], unk_0xBC25C936A095B5BA()))
					{
						iLocal_31 = 2;
					}
					if (func_171(iLocal_36[1], unk_0xBC25C936A095B5BA(), 1) < 20f)
					{
						if (unk_0x0921C54CF8DFC6E7(unk_0xB5CEFD608600A09F(), iLocal_36[1]))
						{
							iLocal_31 = 2;
						}
					}
				}
			}
		}
		if (iLocal_303[0] == 1)
		{
			if (func_171(unk_0xBC25C936A095B5BA(), iLocal_36[0], 1) < 20f)
			{
				if (vLocal_93.x > vLocal_95[0 /*3*/] && unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, true, 0))
				{
					if (unk_0x1028B6250119A74B(iLocal_36[0], unk_0xBC25C936A095B5BA()) || unk_0x0921C54CF8DFC6E7(unk_0xB5CEFD608600A09F(), iLocal_36[0]))
					{
						iLocal_31 = 2;
					}
				}
			}
		}
		if (iLocal_303[1] == 1)
		{
			if (func_171(unk_0xBC25C936A095B5BA(), iLocal_36[1], 1) < 20f)
			{
				if (vLocal_93.x < vLocal_95[1 /*3*/] && unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, true, 0))
				{
					if (unk_0x1028B6250119A74B(iLocal_36[1], unk_0xBC25C936A095B5BA()) || unk_0x0921C54CF8DFC6E7(unk_0xB5CEFD608600A09F(), iLocal_36[1]))
					{
						iLocal_31 = 2;
					}
				}
			}
		}
	}
}

void func_185()//Position - 0xDE28
{
	iLocal_55 = 0;
	while (iLocal_55 <= 6)
	{
		if (unk_0x724D816EA203A79E(iLocal_35[iLocal_55]))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_35[iLocal_55]))
			{
				if (iLocal_278[iLocal_55] == 0)
				{
					if (func_171(unk_0xBC25C936A095B5BA(), iLocal_35[iLocal_55], 1) > 20f)
					{
						iLocal_278[iLocal_55] = 1;
					}
				}
				if (iLocal_278[iLocal_55] == 1)
				{
					if (func_171(unk_0xBC25C936A095B5BA(), iLocal_35[iLocal_55], 1) < 20f)
					{
						iLocal_278[iLocal_55] = 0;
					}
				}
			}
			else if (iLocal_278[iLocal_55] == 0)
			{
				iLocal_278[iLocal_55] = 1;
			}
		}
		else if (iLocal_278[iLocal_55] == 0)
		{
			iLocal_278[iLocal_55] = 1;
		}
		iLocal_55++;
	}
	if (((((iLocal_278[0] == 1 && iLocal_278[1] == 1) && iLocal_278[2] == 1) && iLocal_278[3] == 1) && iLocal_278[4] == 1) && iLocal_278[5] == 1)
	{
		iLocal_279 = 1;
	}
	else
	{
		iLocal_279 = 0;
	}
	iLocal_54 = 0;
	while (iLocal_54 <= 6)
	{
		if (unk_0x724D816EA203A79E(iLocal_35[iLocal_54]))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_35[iLocal_54]))
			{
				func_190(iLocal_35[iLocal_54]);
				if (iLocal_28 == 3 || iLocal_28 == 4)
				{
					if (iLocal_31 == 2 && iLocal_29 == 0)
					{
						func_189(1);
						if (iLocal_311 == 1)
						{
							func_113();
						}
					}
					if (unk_0xBF94E62A1FA7B7F3(iLocal_35[iLocal_54], 18))
					{
						if (iLocal_29 != 4)
						{
							func_189(4);
							if (iLocal_311 == 1)
							{
								func_187();
							}
							iLocal_359 = 1;
						}
					}
					if (iLocal_29 != 4)
					{
						if (unk_0xC9FA5D38428AB6BE(-1, 892.9f, -1552.4f, 30f, 40f))
						{
							func_189(4);
							if (iLocal_311 == 1)
							{
								func_187();
							}
						}
					}
					if ((((((((func_186(iLocal_35[iLocal_54], iLocal_35[0]) || func_186(iLocal_35[iLocal_54], iLocal_35[1])) || func_186(iLocal_35[iLocal_54], iLocal_35[2])) || func_186(iLocal_35[iLocal_54], iLocal_35[3])) || func_186(iLocal_35[iLocal_54], iLocal_35[4])) || func_186(iLocal_35[iLocal_54], iLocal_35[5])) || func_186(iLocal_35[iLocal_54], iLocal_35[6])) || func_186(iLocal_35[iLocal_54], iLocal_36[0])) || func_186(iLocal_35[iLocal_54], iLocal_36[1]))
					{
						if (iLocal_29 != 4)
						{
							func_189(4);
							if (iLocal_311 == 1)
							{
								func_187();
							}
							iLocal_359 = 1;
						}
					}
					if ((func_183(unk_0xBC25C936A095B5BA()) == joaat("weapon_unarmed") || unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1)) || func_182(0))
					{
						if (iLocal_297 == 0)
						{
							if (func_171(unk_0xBC25C936A095B5BA(), iLocal_35[iLocal_54], 1) > 20f)
							{
								if (iLocal_277[iLocal_54] == 1)
								{
									iLocal_277[iLocal_54] = 0;
								}
								if (((((iLocal_279 == 1 && iLocal_29 != 0) && iLocal_29 != 2) && iLocal_29 != 3) && iLocal_29 != 4) && iLocal_31 != 2)
								{
									func_189(0);
								}
							}
							if (func_171(unk_0xBC25C936A095B5BA(), iLocal_35[iLocal_54], 1) < 20f && unk_0x1028B6250119A74B(iLocal_35[iLocal_54], unk_0xBC25C936A095B5BA()))
							{
								if (((iLocal_29 != 1 && iLocal_29 != 2) && iLocal_29 != 3) && iLocal_29 != 4)
								{
									if (iLocal_326 == 0 && iLocal_297 == 0)
									{
										func_189(1);
										if (iLocal_311 == 1)
										{
											func_113();
										}
									}
									else
									{
										func_189(3);
										if (iLocal_311 == 1)
										{
											func_187();
										}
									}
								}
							}
							if (func_171(unk_0xBC25C936A095B5BA(), iLocal_35[iLocal_54], 1) < 20f && unk_0x1028B6250119A74B(iLocal_35[iLocal_54], unk_0xBC25C936A095B5BA()))
							{
								if (iLocal_277[iLocal_54] == 0)
								{
									iLocal_60[iLocal_54] = unk_0x105601648511CC64();
									iLocal_277[iLocal_54] = 1;
								}
								if (iLocal_277[iLocal_54] == 1)
								{
									if (unk_0x105601648511CC64() > iLocal_60[iLocal_54] + 24000)
									{
										if ((iLocal_29 != 2 && iLocal_29 != 3) && iLocal_29 != 4)
										{
											func_189(2);
											if (iLocal_311 == 1)
											{
												func_187();
											}
										}
									}
								}
							}
						}
						if (iLocal_297 == 1)
						{
							if (func_171(unk_0xBC25C936A095B5BA(), iLocal_35[iLocal_54], 1) < 20f && unk_0x1028B6250119A74B(iLocal_35[iLocal_54], unk_0xBC25C936A095B5BA()))
							{
								if (iLocal_29 != 3 && iLocal_29 != 4)
								{
									func_189(3);
									if (iLocal_311 == 1)
									{
										func_187();
									}
								}
							}
						}
						if (unk_0xABB2AFD7539464EA(unk_0xBC25C936A095B5BA()))
						{
							if (iLocal_308 == 0)
							{
								iLocal_74 = unk_0x105601648511CC64();
								iLocal_308 = 1;
							}
							else if (unk_0x105601648511CC64() > iLocal_74 + 3000)
							{
								if (func_171(unk_0xBC25C936A095B5BA(), iLocal_35[iLocal_54], 1) < 20f && unk_0x1028B6250119A74B(iLocal_35[iLocal_54], unk_0xBC25C936A095B5BA()))
								{
									if (iLocal_29 != 3 && iLocal_29 != 4)
									{
										func_189(3);
										if (iLocal_311 == 1)
										{
											func_187();
										}
									}
								}
							}
						}
						else if (iLocal_308 == 1)
						{
							iLocal_308 = 0;
						}
						if (unk_0x724D816EA203A79E(iLocal_33))
						{
							if (unk_0xE59B7F5A03335350(iLocal_33, 0))
							{
								if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_33, 1))
								{
									if (unk_0x1028B6250119A74B(iLocal_35[iLocal_54], unk_0xBC25C936A095B5BA()))
									{
										if (iLocal_29 != 3 && iLocal_29 != 4)
										{
											iLocal_289 = 1;
											func_189(3);
											if (iLocal_311 == 1)
											{
												func_187();
											}
										}
									}
								}
								if (func_171(unk_0xBC25C936A095B5BA(), iLocal_33, 1) < 5f && unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA()))
								{
									if (unk_0x1028B6250119A74B(iLocal_35[iLocal_54], unk_0xBC25C936A095B5BA()))
									{
										if (iLocal_29 != 3 && iLocal_29 != 4)
										{
											iLocal_289 = 1;
											func_189(3);
											if (iLocal_311 == 1)
											{
												func_187();
											}
										}
									}
									if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 917.3436f, -1554.42f, 29.26611f, 916.8774f, -1556.441f, 33.00661f, 2.25f, 0, true, 0))
									{
										if (unk_0x724D816EA203A79E(iLocal_35[0]))
										{
											if (!unk_0x36CEFBE9B745A58D(iLocal_35[0]))
											{
												if (unk_0x4DBCE270B354E123(iLocal_35[0], 912.3f, -1542.6f, 30f, 3f, 3f, 3f, false, true, 0))
												{
													if (iLocal_29 != 3 && iLocal_29 != 4)
													{
														iLocal_289 = 1;
														func_189(3);
														if (iLocal_311 == 1)
														{
															func_187();
														}
													}
												}
											}
										}
									}
								}
							}
						}
						if (unk_0x724D816EA203A79E(iLocal_35[6]))
						{
							if (!unk_0x36CEFBE9B745A58D(iLocal_35[6]))
							{
								if (func_171(unk_0xBC25C936A095B5BA(), iLocal_35[6], 1) < 20f)
								{
									if ((unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 928.7163f, -1546.671f, 27.34603f, 921.8971f, -1549.752f, 34.04724f, 6.25f, 0, true, 0) || unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 931.868f, -1545.185f, 27.3653f, 925.8857f, -1547.303f, 34.07205f, 3.5f, 0, true, 0)) || unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 929.4908f, -1524.829f, 32.84098f, 929.3696f, -1545.288f, 37.34258f, 5f, 0, true, 0))
									{
										if (unk_0x1028B6250119A74B(iLocal_35[6], unk_0xBC25C936A095B5BA()))
										{
											if (vLocal_93.z > 31f)
											{
												if (iLocal_29 != 3 && iLocal_29 != 4)
												{
													iLocal_323 = 1;
													func_189(3);
													if (iLocal_311 == 1)
													{
														func_187();
													}
												}
											}
											else if (((iLocal_29 != 1 && iLocal_29 != 2) && iLocal_29 != 3) && iLocal_29 != 4)
											{
												func_189(1);
												if (iLocal_311 == 1)
												{
													func_113();
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
						if (iLocal_276 == 0)
						{
							iLocal_59 = unk_0x105601648511CC64();
							iLocal_276 = 1;
						}
						if (iLocal_276 == 1)
						{
							if (unk_0x105601648511CC64() > iLocal_59 + 4000 || iLocal_29 == 3)
							{
								if (func_171(unk_0xBC25C936A095B5BA(), iLocal_35[iLocal_54], 1) < 20f)
								{
									if (unk_0x1028B6250119A74B(iLocal_35[iLocal_54], unk_0xBC25C936A095B5BA()))
									{
										if (iLocal_29 != 4)
										{
											func_189(4);
											if (iLocal_311 == 1)
											{
												func_187();
											}
										}
									}
								}
							}
						}
						if (func_171(unk_0xBC25C936A095B5BA(), iLocal_35[iLocal_54], 1) < 40f)
						{
							if (unk_0x32E373675659FDB0(unk_0xBC25C936A095B5BA()))
							{
								if (unk_0x1028B6250119A74B(iLocal_35[iLocal_54], unk_0xBC25C936A095B5BA()) || unk_0x0921C54CF8DFC6E7(unk_0xB5CEFD608600A09F(), iLocal_35[iLocal_54]))
								{
									if (iLocal_29 != 4)
									{
										func_189(4);
										if (iLocal_311 == 1)
										{
											func_187();
										}
									}
								}
							}
						}
					}
				}
			}
		}
		iLocal_54++;
	}
}

int func_186(int iParam0, int iParam1)//Position - 0xE689
{
	if (((func_171(iParam0, iParam1, 1) < 20f && unk_0xC5B8A5F778E321DD(iParam0, iParam1, 90f)) && !unk_0x36CEFBE9B745A58D(iParam0)) && unk_0x36CEFBE9B745A58D(iParam1))
	{
		return 1;
	}
	return 0;
}

void func_187()//Position - 0xE6D1
{
	Global_394A = 0;
	func_188();
}

void func_188()//Position - 0xE6E1
{
	unk_0x5C7DC611411E2CF9();
	Global_41AB = 0;
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x1E08809A5041F85B(false);
		Global_3DB8 = 6;
	}
}

void func_189(int iParam0)//Position - 0xE702
{
	iLocal_29 = iParam0;
	iLocal_58 = 0;
}

void func_190(int iParam0)//Position - 0xE711
{
	iLocal_56 = 0;
	while (iLocal_56 <= 6)
	{
		if (iParam0 == iLocal_35[iLocal_56])
		{
			if (func_171(unk_0xBC25C936A095B5BA(), iParam0, 1) < 20f && unk_0x1028B6250119A74B(iParam0, unk_0xBC25C936A095B5BA()))
			{
				if (iLocal_280[iLocal_56] == 0)
				{
					unk_0x56F2E1B5599188FA(iParam0, unk_0xBC25C936A095B5BA(), -1, 1072, 3);
					iLocal_280[iLocal_56] = 1;
				}
			}
			else if (iLocal_280[iLocal_56] == 1)
			{
				unk_0x56F2E1B5599188FA(iParam0, unk_0xBC25C936A095B5BA(), 1, 1072, 3);
				iLocal_280[iLocal_56] = 0;
			}
		}
		iLocal_56++;
	}
	switch (iLocal_29)
	{
		case 0:
			if (iLocal_58 == 0)
			{
				unk_0x2E35C4FA5F0ED22F(iParam0, true);
				if (iParam0 == iLocal_35[0])
				{
					if (unk_0xABB25056487DF1D7(912.2f, -1542.5f, 29.8f, 3f, 0))
					{
						if (unk_0xF4FCC3C1048FF2AB(iLocal_35[0], 1647992574) != 1 && unk_0xF4FCC3C1048FF2AB(iLocal_35[0], -1680762137) != 1)
						{
							unk_0xDAC1A196FF8C70B5(iLocal_35[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[1])
				{
					if (unk_0xABB25056487DF1D7(917.4f, -1517.4f, 30f, 3f, 0))
					{
						if (unk_0xF4FCC3C1048FF2AB(iLocal_35[1], 1647992574) != 1 && unk_0xF4FCC3C1048FF2AB(iLocal_35[1], -1680762137) != 1)
						{
							unk_0xDAC1A196FF8C70B5(iLocal_35[1], 917.4f, -1517.4f, 30f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[2])
				{
					if (unk_0xABB25056487DF1D7(869.8f, -1541.2f, 29.4f, 3f, 0))
					{
						if (unk_0xF4FCC3C1048FF2AB(iLocal_35[2], 1647992574) != 1 && unk_0xF4FCC3C1048FF2AB(iLocal_35[2], -1680762137) != 1)
						{
							unk_0xDAC1A196FF8C70B5(iLocal_35[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[3])
				{
					if (unk_0xABB25056487DF1D7(884.2f, -1574.1f, 30f, 3f, 0))
					{
						if (unk_0xF4FCC3C1048FF2AB(iLocal_35[3], 1647992574) != 1 && unk_0xF4FCC3C1048FF2AB(iLocal_35[3], -1680762137) != 1)
						{
							unk_0xDAC1A196FF8C70B5(iLocal_35[3], 884.2f, -1574.1f, 30f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[4])
				{
					if (unk_0xABB25056487DF1D7(904f, -1575f, 30f, 3f, 0))
					{
						if (unk_0xF4FCC3C1048FF2AB(iLocal_35[4], 1647992574) != 1 && unk_0xF4FCC3C1048FF2AB(iLocal_35[4], -1680762137) != 1)
						{
							unk_0xDAC1A196FF8C70B5(iLocal_35[4], 904f, -1575f, 30f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[5])
				{
					if (unk_0xABB25056487DF1D7(905.9f, -1574.8f, 29.9f, 3f, 0))
					{
						if (unk_0xF4FCC3C1048FF2AB(iLocal_35[5], 1647992574) != 1 && unk_0xF4FCC3C1048FF2AB(iLocal_35[5], -1680762137) != 1)
						{
							unk_0xDAC1A196FF8C70B5(iLocal_35[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[6])
				{
					if (unk_0xABB25056487DF1D7(889.5f, -1562f, 29.7f, 3f, 0))
					{
						if (unk_0xF4FCC3C1048FF2AB(iLocal_35[6], 1647992574) != 1 && unk_0xF4FCC3C1048FF2AB(iLocal_35[6], -1680762137) != 1)
						{
							unk_0xDAC1A196FF8C70B5(iLocal_35[6], 889.5f, -1562f, 29.7f, 20f, 0);
						}
					}
				}
				iLocal_58++;
			}
			if (iLocal_58 == 1)
			{
				if (unk_0x724D816EA203A79E(iLocal_35[4]))
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_35[4]))
					{
						if (unk_0x724D816EA203A79E(iLocal_35[5]))
						{
							if (!unk_0x36CEFBE9B745A58D(iLocal_35[5]))
							{
								if (func_171(unk_0xBC25C936A095B5BA(), iLocal_35[4], 1) < 25f)
								{
									if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 926.455f, -1582.384f, 29.32759f, 909.6322f, -1581.374f, 31.58907f, 9.5f, 0, true, 0) || vLocal_93.y > -1573f)
									{
										if (iLocal_311 == 0)
										{
											func_132(&uLocal_99, 3, iLocal_35[4], "CONSTRUCTION2", 0, 1);
											func_132(&uLocal_99, 5, iLocal_35[5], "CONSTRUCTION3", 0, 1);
											unk_0x56F2E1B5599188FA(iLocal_35[4], iLocal_35[5], -1, 0, 2);
											unk_0x56F2E1B5599188FA(iLocal_35[5], iLocal_35[4], -1, 0, 2);
											if (!func_176())
											{
												if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
												{
													if (func_170(&uLocal_99, "SOL1AUD", "SOL1_TALK", 6, 1, 1, 0))
													{
														iLocal_311 = 1;
													}
												}
											}
										}
									}
								}
								if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), 921.9f, -1556.5f, 30f, 5f, 5f, 5f, false, true, 1))
								{
									if (iLocal_318 == 0)
									{
										iLocal_76 = unk_0x105601648511CC64();
										iLocal_318 = 1;
									}
									if (iLocal_318 == 1)
									{
										if (unk_0x105601648511CC64() > iLocal_76 + 4000)
										{
											if (iLocal_311 == 0)
											{
												func_132(&uLocal_99, 3, iLocal_35[4], "CONSTRUCTION2", 0, 1);
												func_132(&uLocal_99, 5, iLocal_35[5], "CONSTRUCTION3", 0, 1);
												unk_0x56F2E1B5599188FA(iLocal_35[4], iLocal_35[5], -1, 0, 2);
												unk_0x56F2E1B5599188FA(iLocal_35[5], iLocal_35[4], -1, 0, 2);
												if (!func_176())
												{
													if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
													{
														if (func_170(&uLocal_99, "SOL1AUD", "SOL1_TALK", 6, 1, 1, 0))
														{
															iLocal_311 = 1;
														}
													}
												}
											}
										}
									}
								}
								if (iLocal_311 == 1 && !func_176())
								{
									if (iLocal_310 == 0)
									{
										if (unk_0xABB25056487DF1D7(865f, -1558.1f, 29.5f, 3f, 0))
										{
											unk_0x44C98C11ED6DD327(iLocal_35[4]);
											unk_0x44C98C11ED6DD327(iLocal_35[5]);
											unk_0xBE2047F9F9DE6F43(iLocal_35[4], 865f, -1558.1f, 29.5f, 3f, 0);
											iLocal_310 = 1;
										}
									}
								}
							}
						}
					}
				}
				if (iParam0 == iLocal_35[6])
				{
					if (iLocal_319 == 0)
					{
						if (iLocal_320 == 0)
						{
							iLocal_77 = unk_0x105601648511CC64();
							iLocal_320 = 1;
						}
						if (unk_0x105601648511CC64() > iLocal_77 + 30000)
						{
							if (iLocal_319 == 0)
							{
								if (unk_0xABB25056487DF1D7(925f, -1561f, 30f, 3f, 0))
								{
									unk_0xBE2047F9F9DE6F43(iLocal_35[6], 925f, -1561f, 30f, 3f, 0);
									iLocal_319 = 1;
									iLocal_320 = 0;
								}
							}
						}
					}
					if (iLocal_319 == 1)
					{
						if (unk_0x4DBCE270B354E123(iLocal_35[6], 925f, -1561f, 30f, 3f, 3f, 3f, false, true, 0))
						{
							if (func_171(unk_0xBC25C936A095B5BA(), iLocal_35[6], 1) < 15f && vLocal_93.z < 40f)
							{
								if (iLocal_321 == 0)
								{
									if (unk_0xABB25056487DF1D7(909.5f, -1515.5f, 30f, 3f, 0))
									{
										unk_0xDAC1A196FF8C70B5(iLocal_35[6], 909.5f, -1515.5f, 30f, 50f, 0);
										iLocal_321 = 1;
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (iLocal_58 == 0)
			{
				iLocal_56 = 0;
				while (iLocal_56 <= 6)
				{
					if (iLocal_31 == 0)
					{
						if (iParam0 == iLocal_35[iLocal_56])
						{
							if (func_171(unk_0xBC25C936A095B5BA(), iParam0, 1) < 20f)
							{
								if (iLocal_281[iLocal_56] == 0)
								{
									if (unk_0x1028B6250119A74B(iParam0, unk_0xBC25C936A095B5BA()) || unk_0x0921C54CF8DFC6E7(unk_0xB5CEFD608600A09F(), iParam0))
									{
										if (!unk_0xD1DC4B08247A4317(iParam0))
										{
											unk_0x49D46EE47C9CCB66(iParam0);
										}
										if (unk_0xD1DC4B08247A4317(iParam0))
										{
											unk_0xA4E856A8CD53B8DF(iParam0);
										}
										unk_0xC5A6DFE2B8987B17(&uLocal_48);
										unk_0x9565F9267674873A(0, unk_0xBC25C936A095B5BA(), -1, 2f, 1f, 1073741824, 0);
										unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 0);
										unk_0x535008C596714F9E(uLocal_48);
										unk_0xA8E6405305C0D7DF(iParam0, uLocal_48);
										unk_0x02DAF06EA4F08219(&uLocal_48);
										unk_0x2E35C4FA5F0ED22F(iParam0, true);
										iLocal_280[iLocal_56] = 0;
										iLocal_281[iLocal_56] = 1;
									}
								}
								if (iLocal_281[iLocal_56] == 1)
								{
									if (!unk_0xC5B8A5F778E321DD(iParam0, unk_0xBC25C936A095B5BA(), 45f))
									{
										unk_0x85DB484A637CEAB9(iParam0, unk_0xBC25C936A095B5BA(), 0);
										iLocal_281[iLocal_56] = 0;
									}
								}
							}
							else
							{
								if (iLocal_281[iLocal_56] == 1)
								{
									iLocal_281[iLocal_56] = 0;
								}
								if (iParam0 == iLocal_35[0])
								{
									if (unk_0xABB25056487DF1D7(912.2f, -1542.5f, 29.8f, 3f, 0))
									{
										if (unk_0xF4FCC3C1048FF2AB(iLocal_35[0], 1647992574) != 1 && unk_0xF4FCC3C1048FF2AB(iLocal_35[0], -1680762137) != 1)
										{
											unk_0xDAC1A196FF8C70B5(iLocal_35[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
											unk_0x2E35C4FA5F0ED22F(iLocal_35[0], true);
										}
									}
								}
								if (iParam0 == iLocal_35[1])
								{
									if (unk_0xABB25056487DF1D7(917.4f, -1517.4f, 30f, 3f, 0))
									{
										if (unk_0xF4FCC3C1048FF2AB(iLocal_35[1], 1647992574) != 1 && unk_0xF4FCC3C1048FF2AB(iLocal_35[1], -1680762137) != 1)
										{
											unk_0xDAC1A196FF8C70B5(iLocal_35[1], 917.4f, -1517.4f, 30f, 20f, 0);
											unk_0x2E35C4FA5F0ED22F(iLocal_35[1], true);
										}
									}
								}
								if (iParam0 == iLocal_35[2])
								{
									if (unk_0xABB25056487DF1D7(869.8f, -1541.2f, 29.4f, 3f, 0))
									{
										if (unk_0xF4FCC3C1048FF2AB(iLocal_35[2], 1647992574) != 1 && unk_0xF4FCC3C1048FF2AB(iLocal_35[2], -1680762137) != 1)
										{
											unk_0xDAC1A196FF8C70B5(iLocal_35[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
											unk_0x2E35C4FA5F0ED22F(iLocal_35[2], true);
										}
									}
								}
								if (iParam0 == iLocal_35[3])
								{
									if (unk_0xABB25056487DF1D7(884.2f, -1574.1f, 30f, 3f, 0))
									{
										if (unk_0xF4FCC3C1048FF2AB(iLocal_35[3], 1647992574) != 1 && unk_0xF4FCC3C1048FF2AB(iLocal_35[3], -1680762137) != 1)
										{
											unk_0xDAC1A196FF8C70B5(iLocal_35[3], 884.2f, -1574.1f, 30f, 20f, 0);
											unk_0x2E35C4FA5F0ED22F(iLocal_35[3], true);
										}
									}
								}
								if (iParam0 == iLocal_35[4])
								{
									if (unk_0xABB25056487DF1D7(904f, -1575f, 30f, 3f, 0))
									{
										if (unk_0xF4FCC3C1048FF2AB(iLocal_35[4], 1647992574) != 1 && unk_0xF4FCC3C1048FF2AB(iLocal_35[4], -1680762137) != 1)
										{
											unk_0xDAC1A196FF8C70B5(iLocal_35[4], 904f, -1575f, 30f, 20f, 0);
											unk_0x2E35C4FA5F0ED22F(iLocal_35[4], true);
										}
									}
								}
								if (iParam0 == iLocal_35[5])
								{
									if (unk_0xABB25056487DF1D7(905.9f, -1574.8f, 29.9f, 3f, 0))
									{
										if (unk_0xF4FCC3C1048FF2AB(iLocal_35[5], 1647992574) != 1 && unk_0xF4FCC3C1048FF2AB(iLocal_35[5], -1680762137) != 1)
										{
											unk_0xDAC1A196FF8C70B5(iLocal_35[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
											unk_0x2E35C4FA5F0ED22F(iLocal_35[5], true);
										}
									}
								}
								if (iParam0 == iLocal_35[6])
								{
									if (unk_0xABB25056487DF1D7(889.5f, -1562f, 29.7f, 3f, 0))
									{
										if (unk_0xF4FCC3C1048FF2AB(iLocal_35[6], 1647992574) != 1 && unk_0xF4FCC3C1048FF2AB(iLocal_35[6], -1680762137) != 1)
										{
											unk_0xDAC1A196FF8C70B5(iLocal_35[6], 889.5f, -1562f, 29.7f, 20f, 0);
											unk_0x2E35C4FA5F0ED22F(iLocal_35[6], true);
										}
									}
								}
							}
						}
					}
					else if (iParam0 == iLocal_35[iLocal_56])
					{
						if (func_171(unk_0xBC25C936A095B5BA(), iParam0, 1) < 20f)
						{
							if (iLocal_281[iLocal_56] == 0)
							{
								if (unk_0x1028B6250119A74B(iParam0, unk_0xBC25C936A095B5BA()) || unk_0x0921C54CF8DFC6E7(unk_0xB5CEFD608600A09F(), iParam0))
								{
									if (!unk_0xD1DC4B08247A4317(iParam0))
									{
										unk_0x49D46EE47C9CCB66(iParam0);
									}
									if (unk_0xD1DC4B08247A4317(iParam0))
									{
										unk_0xA4E856A8CD53B8DF(iParam0);
									}
									unk_0xC5A6DFE2B8987B17(&uLocal_48);
									unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 0);
									unk_0x56F2E1B5599188FA(0, unk_0xBC25C936A095B5BA(), -1, 1072, 3);
									unk_0x535008C596714F9E(uLocal_48);
									unk_0xA8E6405305C0D7DF(iParam0, uLocal_48);
									unk_0x02DAF06EA4F08219(&uLocal_48);
									unk_0x2E35C4FA5F0ED22F(iParam0, true);
									iLocal_280[iLocal_56] = 0;
									iLocal_281[iLocal_56] = 1;
								}
							}
							if (iLocal_281[iLocal_56] == 1)
							{
								if (!unk_0xC5B8A5F778E321DD(iParam0, unk_0xBC25C936A095B5BA(), 45f))
								{
									unk_0x85DB484A637CEAB9(iParam0, unk_0xBC25C936A095B5BA(), 0);
									iLocal_281[iLocal_56] = 0;
								}
							}
						}
						else
						{
							if (iLocal_281[iLocal_56] == 1)
							{
								iLocal_281[iLocal_56] = 0;
							}
							if (iParam0 == iLocal_35[0])
							{
								if (unk_0xABB25056487DF1D7(912.2f, -1542.5f, 29.8f, 3f, 0))
								{
									if (unk_0xF4FCC3C1048FF2AB(iLocal_35[0], 1647992574) != 1 && unk_0xF4FCC3C1048FF2AB(iLocal_35[0], -1680762137) != 1)
									{
										unk_0xDAC1A196FF8C70B5(iLocal_35[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
										unk_0x2E35C4FA5F0ED22F(iLocal_35[0], true);
									}
								}
							}
							if (iParam0 == iLocal_35[1])
							{
								if (unk_0xABB25056487DF1D7(917.4f, -1517.4f, 30f, 3f, 0))
								{
									if (unk_0xF4FCC3C1048FF2AB(iLocal_35[1], 1647992574) != 1 && unk_0xF4FCC3C1048FF2AB(iLocal_35[1], -1680762137) != 1)
									{
										unk_0xDAC1A196FF8C70B5(iLocal_35[1], 917.4f, -1517.4f, 30f, 20f, 0);
										unk_0x2E35C4FA5F0ED22F(iLocal_35[1], true);
									}
								}
							}
							if (iParam0 == iLocal_35[2])
							{
								if (unk_0xABB25056487DF1D7(869.8f, -1541.2f, 29.4f, 3f, 0))
								{
									if (unk_0xF4FCC3C1048FF2AB(iLocal_35[2], 1647992574) != 1 && unk_0xF4FCC3C1048FF2AB(iLocal_35[2], -1680762137) != 1)
									{
										unk_0xDAC1A196FF8C70B5(iLocal_35[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
										unk_0x2E35C4FA5F0ED22F(iLocal_35[2], true);
									}
								}
							}
							if (iParam0 == iLocal_35[3])
							{
								if (unk_0xABB25056487DF1D7(884.2f, -1574.1f, 30f, 3f, 0))
								{
									if (unk_0xF4FCC3C1048FF2AB(iLocal_35[3], 1647992574) != 1 && unk_0xF4FCC3C1048FF2AB(iLocal_35[3], -1680762137) != 1)
									{
										unk_0xDAC1A196FF8C70B5(iLocal_35[3], 884.2f, -1574.1f, 30f, 20f, 0);
										unk_0x2E35C4FA5F0ED22F(iLocal_35[3], true);
									}
								}
							}
							if (iParam0 == iLocal_35[4])
							{
								if (unk_0xABB25056487DF1D7(904f, -1575f, 30f, 3f, 0))
								{
									if (unk_0xF4FCC3C1048FF2AB(iLocal_35[4], 1647992574) != 1 && unk_0xF4FCC3C1048FF2AB(iLocal_35[4], -1680762137) != 1)
									{
										unk_0xDAC1A196FF8C70B5(iLocal_35[4], 904f, -1575f, 30f, 20f, 0);
										unk_0x2E35C4FA5F0ED22F(iLocal_35[4], true);
									}
								}
							}
							if (iParam0 == iLocal_35[5])
							{
								if (unk_0xABB25056487DF1D7(905.9f, -1574.8f, 29.9f, 3f, 0))
								{
									if (unk_0xF4FCC3C1048FF2AB(iLocal_35[5], 1647992574) != 1 && unk_0xF4FCC3C1048FF2AB(iLocal_35[5], -1680762137) != 1)
									{
										unk_0xDAC1A196FF8C70B5(iLocal_35[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
										unk_0x2E35C4FA5F0ED22F(iLocal_35[5], true);
									}
								}
							}
							if (iParam0 == iLocal_35[6])
							{
								if (unk_0xABB25056487DF1D7(889.5f, -1562f, 29.7f, 3f, 0))
								{
									if (unk_0xF4FCC3C1048FF2AB(iLocal_35[6], 1647992574) != 1 && unk_0xF4FCC3C1048FF2AB(iLocal_35[6], -1680762137) != 1)
									{
										unk_0xDAC1A196FF8C70B5(iLocal_35[6], 889.5f, -1562f, 29.7f, 20f, 0);
										unk_0x2E35C4FA5F0ED22F(iLocal_35[6], true);
									}
								}
							}
						}
					}
					iLocal_56++;
				}
			}
			break;
		
		case 2:
			if (iLocal_360 == 0)
			{
				iLocal_360 = 1;
			}
			if (iLocal_58 == 0)
			{
				unk_0xA902E18EDF6FA0C8(5, iLocal_264, 1862763509);
				iLocal_58++;
			}
			if (iLocal_58 == 1)
			{
				iLocal_56 = 0;
				while (iLocal_56 <= 6)
				{
					if (iParam0 == iLocal_35[iLocal_56])
					{
						if (func_171(iParam0, unk_0xBC25C936A095B5BA(), 1) < 15f)
						{
							if (func_171(iParam0, unk_0xBC25C936A095B5BA(), 1) > 3f)
							{
								if (unk_0xF4FCC3C1048FF2AB(iParam0, 242628503) != 0 || unk_0xF4FCC3C1048FF2AB(iParam0, 242628503) != 1)
								{
									if (!unk_0xD1DC4B08247A4317(iParam0))
									{
										unk_0x49D46EE47C9CCB66(iParam0);
									}
									if (unk_0xD1DC4B08247A4317(iParam0))
									{
										unk_0xA4E856A8CD53B8DF(iParam0);
									}
									unk_0xC5A6DFE2B8987B17(&uLocal_48);
									unk_0x9565F9267674873A(0, unk_0xBC25C936A095B5BA(), -1, 1f, 1f, 1073741824, 0);
									unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 0);
									unk_0x535008C596714F9E(uLocal_48);
									unk_0xA8E6405305C0D7DF(iParam0, uLocal_48);
									unk_0x02DAF06EA4F08219(&uLocal_48);
									iLocal_280[iLocal_56] = 0;
								}
							}
						}
						else
						{
							if (iParam0 == iLocal_35[0])
							{
								if (unk_0xABB25056487DF1D7(912.2f, -1542.5f, 29.8f, 3f, 0))
								{
									if (unk_0xF4FCC3C1048FF2AB(iLocal_35[0], 1647992574) != 1 && unk_0xF4FCC3C1048FF2AB(iLocal_35[0], -1680762137) != 1)
									{
										unk_0xDAC1A196FF8C70B5(iLocal_35[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
										unk_0x2E35C4FA5F0ED22F(iLocal_35[0], true);
									}
								}
							}
							if (iParam0 == iLocal_35[1])
							{
								if (unk_0xABB25056487DF1D7(917.4f, -1517.4f, 30f, 3f, 0))
								{
									if (unk_0xF4FCC3C1048FF2AB(iLocal_35[1], 1647992574) != 1 && unk_0xF4FCC3C1048FF2AB(iLocal_35[1], -1680762137) != 1)
									{
										unk_0xDAC1A196FF8C70B5(iLocal_35[1], 917.4f, -1517.4f, 30f, 20f, 0);
										unk_0x2E35C4FA5F0ED22F(iLocal_35[1], true);
									}
								}
							}
							if (iParam0 == iLocal_35[2])
							{
								if (unk_0xABB25056487DF1D7(869.8f, -1541.2f, 29.4f, 3f, 0))
								{
									if (unk_0xF4FCC3C1048FF2AB(iLocal_35[2], 1647992574) != 1 && unk_0xF4FCC3C1048FF2AB(iLocal_35[2], -1680762137) != 1)
									{
										unk_0xDAC1A196FF8C70B5(iLocal_35[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
										unk_0x2E35C4FA5F0ED22F(iLocal_35[2], true);
									}
								}
							}
							if (iParam0 == iLocal_35[3])
							{
								if (unk_0xABB25056487DF1D7(884.2f, -1574.1f, 30f, 3f, 0))
								{
									if (unk_0xF4FCC3C1048FF2AB(iLocal_35[3], 1647992574) != 1 && unk_0xF4FCC3C1048FF2AB(iLocal_35[3], -1680762137) != 1)
									{
										unk_0xDAC1A196FF8C70B5(iLocal_35[3], 884.2f, -1574.1f, 30f, 20f, 0);
										unk_0x2E35C4FA5F0ED22F(iLocal_35[3], true);
									}
								}
							}
							if (iParam0 == iLocal_35[4])
							{
								if (unk_0xABB25056487DF1D7(904f, -1575f, 30f, 3f, 0))
								{
									if (unk_0xF4FCC3C1048FF2AB(iLocal_35[4], 1647992574) != 1 && unk_0xF4FCC3C1048FF2AB(iLocal_35[4], -1680762137) != 1)
									{
										unk_0xDAC1A196FF8C70B5(iLocal_35[4], 904f, -1575f, 30f, 20f, 0);
										unk_0x2E35C4FA5F0ED22F(iLocal_35[4], true);
									}
								}
							}
							if (iParam0 == iLocal_35[5])
							{
								if (unk_0xABB25056487DF1D7(905.9f, -1574.8f, 29.9f, 3f, 0))
								{
									if (unk_0xF4FCC3C1048FF2AB(iLocal_35[5], 1647992574) != 1 && unk_0xF4FCC3C1048FF2AB(iLocal_35[5], -1680762137) != 1)
									{
										unk_0xDAC1A196FF8C70B5(iLocal_35[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
										unk_0x2E35C4FA5F0ED22F(iLocal_35[5], true);
									}
								}
							}
							if (iParam0 == iLocal_35[6])
							{
								if (unk_0xABB25056487DF1D7(889.5f, -1562f, 29.7f, 3f, 0))
								{
									if (unk_0xF4FCC3C1048FF2AB(iLocal_35[6], 1647992574) != 1 && unk_0xF4FCC3C1048FF2AB(iLocal_35[6], -1680762137) != 1)
									{
										unk_0xDAC1A196FF8C70B5(iLocal_35[6], 889.5f, -1562f, 29.7f, 20f, 0);
										unk_0x2E35C4FA5F0ED22F(iLocal_35[6], true);
									}
								}
							}
						}
					}
					iLocal_56++;
				}
			}
			break;
		
		case 3:
			if (iLocal_360 == 0)
			{
				iLocal_360 = 1;
			}
			if (iLocal_292 == 0)
			{
				if (iLocal_293 == 0)
				{
					iLocal_63 = unk_0x105601648511CC64();
					iLocal_293 = 1;
				}
				if (iLocal_293 == 1)
				{
					if (unk_0x105601648511CC64() > iLocal_63 + 9000)
					{
						unk_0xAEC867D0DBB7AFEB(5);
						unk_0xDF53A66AEE1401AA(1f);
						unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 2, 0);
						unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
						iLocal_292 = 1;
					}
				}
			}
			if (iLocal_58 == 0)
			{
				unk_0xA902E18EDF6FA0C8(5, iLocal_264, 1862763509);
				iLocal_58++;
			}
			if (iLocal_58 == 1)
			{
				if (iLocal_28 == 3)
				{
					iLocal_56 = 0;
					while (iLocal_56 <= 6)
					{
						if (iParam0 == iLocal_35[iLocal_56])
						{
							if (func_171(iParam0, unk_0xBC25C936A095B5BA(), 1) < 100f)
							{
								if (iLocal_282[iLocal_56] == 0)
								{
									unk_0x2E35C4FA5F0ED22F(iParam0, true);
									iLocal_282[iLocal_56] = 1;
								}
								if (iLocal_283[iLocal_56] == 0)
								{
									if (!unk_0xD1DC4B08247A4317(iParam0))
									{
										unk_0x49D46EE47C9CCB66(iParam0);
									}
									if (unk_0xD1DC4B08247A4317(iParam0))
									{
										unk_0xA4E856A8CD53B8DF(iParam0);
									}
									unk_0xB90F3BE2A1EF63DB(iParam0, 100f, 0);
									iLocal_280[iLocal_56] = 0;
									iLocal_283[iLocal_56] = 1;
								}
							}
						}
						iLocal_56++;
					}
					if (iLocal_345 == 0)
					{
						if (unk_0x724D816EA203A79E(iLocal_35[0]))
						{
							if (!unk_0x36CEFBE9B745A58D(iLocal_35[0]))
							{
								if (unk_0x724D816EA203A79E(iLocal_33))
								{
									if (unk_0xE59B7F5A03335350(iLocal_33, 0))
									{
										if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_33, 1) && unk_0x4DBCE270B354E123(iLocal_33, 919.2f, -1554.4f, 30f, 4f, 4f, 4f, false, true, 0))
										{
											if (!unk_0xD1DC4B08247A4317(iLocal_35[0]))
											{
												unk_0x49D46EE47C9CCB66(iLocal_35[0]);
											}
											if (unk_0xD1DC4B08247A4317(iLocal_35[0]))
											{
												unk_0xA4E856A8CD53B8DF(iLocal_35[0]);
											}
											unk_0xC5A6DFE2B8987B17(&uLocal_48);
											unk_0x346129B364057FF6(0, 917.8f, -1561f, 29f, 3f, -1, 1048576000, 0, 1193033728);
											unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 0);
											unk_0xE896C0AD02364F2A(0, "misscarsteal4@director_grip", "mcs_2_loop_grip1", 8f, -8f, -1, 1, 0, 0, 0, 0);
											unk_0x535008C596714F9E(uLocal_48);
											unk_0xA8E6405305C0D7DF(iLocal_35[0], uLocal_48);
											unk_0x02DAF06EA4F08219(&uLocal_48);
											iLocal_345 = 1;
										}
									}
								}
							}
						}
					}
					if (iLocal_345 == 1 && iLocal_362 == 0)
					{
						if (unk_0x724D816EA203A79E(iLocal_35[0]))
						{
							if (!unk_0x36CEFBE9B745A58D(iLocal_35[0]))
							{
								if (unk_0x4DBCE270B354E123(iLocal_35[0], 917.8f, -1561f, 29f, 2f, 2f, 2f, false, true, 0))
								{
									func_132(&uLocal_99, 3, iLocal_35[0], "FHPrepBWorker", 0, 1);
									func_179(iLocal_35[0], "FHPB_BBAA", "FHPrepBWorker", 4);
									iLocal_362 = 1;
								}
							}
						}
					}
					if (iLocal_344 == 0)
					{
						if (unk_0x105601648511CC64() > iLocal_63 + 3000)
						{
							if (unk_0x724D816EA203A79E(iLocal_35[5]))
							{
								if (!unk_0x36CEFBE9B745A58D(iLocal_35[5]))
								{
									unk_0xE896C0AD02364F2A(iLocal_35[5], "cellphone@str", "cellphone_call_listen_c", 4f, -8f, -1, 49, 0, 0, 0, 0);
									iLocal_87 = unk_0x105601648511CC64();
									iLocal_344 = 1;
								}
							}
						}
					}
					else if (iLocal_343 == 0)
					{
						if (unk_0x105601648511CC64() > iLocal_87 + 5000)
						{
							if (unk_0x724D816EA203A79E(iLocal_35[5]))
							{
								if (!unk_0x36CEFBE9B745A58D(iLocal_35[5]))
								{
									unk_0xA4E856A8CD53B8DF(iLocal_35[5]);
									unk_0xB8CBD998685C0685(iLocal_35[5], unk_0xBC25C936A095B5BA(), 0, 16);
									iLocal_343 = 1;
								}
							}
						}
					}
				}
				iLocal_56 = 0;
				while (iLocal_56 <= 6)
				{
					if (iLocal_268[iLocal_56] == 0)
					{
						if (iParam0 == iLocal_35[iLocal_56])
						{
							if (unk_0x724D816EA203A79E(iParam0))
							{
								if (!unk_0x36CEFBE9B745A58D(iParam0))
								{
									unk_0x2E35C4FA5F0ED22F(iParam0, true);
									if (unk_0x5237AF95232D78C5(iParam0, 0))
									{
										if (func_171(iParam0, unk_0xBC25C936A095B5BA(), 1) > 200f)
										{
											if (!unk_0xD1DC4B08247A4317(iParam0))
											{
												unk_0x49D46EE47C9CCB66(iParam0);
											}
											if (unk_0xD1DC4B08247A4317(iParam0))
											{
												unk_0xA4E856A8CD53B8DF(iParam0);
											}
											unk_0x5558ED6D4A2DEC93(iParam0, unk_0xBC25C936A095B5BA(), 1000f, -1, 0, 0);
											iLocal_268[iLocal_56] = 1;
										}
									}
									else if (func_171(iParam0, unk_0xBC25C936A095B5BA(), 1) > 100f)
									{
										if (!unk_0xD1DC4B08247A4317(iParam0))
										{
											unk_0x49D46EE47C9CCB66(iParam0);
										}
										if (unk_0xD1DC4B08247A4317(iParam0))
										{
											unk_0xA4E856A8CD53B8DF(iParam0);
										}
										unk_0x5558ED6D4A2DEC93(iParam0, unk_0xBC25C936A095B5BA(), 1000f, -1, 0, 0);
										iLocal_268[iLocal_56] = 1;
									}
								}
							}
						}
					}
					iLocal_56++;
				}
			}
			if (iLocal_28 == 4)
			{
				iLocal_56 = 0;
				while (iLocal_56 <= 6)
				{
					if (iLocal_268[iLocal_56] == 0)
					{
						if (iParam0 == iLocal_35[iLocal_56])
						{
							if (unk_0x724D816EA203A79E(iParam0))
							{
								if (!unk_0x36CEFBE9B745A58D(iParam0))
								{
									if (!unk_0xD1DC4B08247A4317(iParam0))
									{
										unk_0x49D46EE47C9CCB66(iParam0);
									}
									if (unk_0xD1DC4B08247A4317(iParam0))
									{
										unk_0xA4E856A8CD53B8DF(iParam0);
									}
									unk_0x2E35C4FA5F0ED22F(iParam0, true);
									unk_0x5558ED6D4A2DEC93(iParam0, unk_0xBC25C936A095B5BA(), 1000f, -1, 0, 0);
									unk_0x22321800954A532E(iParam0, true);
									unk_0x02537C8C1BEEB477(&iParam0);
									iLocal_268[iLocal_56] = 1;
								}
							}
						}
					}
					iLocal_56++;
				}
			}
			break;
		
		case 4:
			if (iLocal_360 == 0)
			{
				iLocal_360 = 1;
			}
			if (iLocal_292 == 0)
			{
				if (iLocal_293 == 0)
				{
					iLocal_63 = unk_0x105601648511CC64();
					iLocal_293 = 1;
				}
				if (iLocal_293 == 1)
				{
					if (unk_0x105601648511CC64() > iLocal_63 + 6000)
					{
						unk_0xAEC867D0DBB7AFEB(5);
						unk_0xDF53A66AEE1401AA(1f);
						unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 2, 0);
						unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
						iLocal_292 = 1;
					}
				}
			}
			if (iLocal_58 == 0)
			{
				unk_0xA902E18EDF6FA0C8(5, iLocal_264, 1862763509);
				unk_0x2E35C4FA5F0ED22F(iParam0, true);
				iLocal_58++;
			}
			if (iLocal_58 == 1)
			{
				iLocal_56 = 0;
				while (iLocal_56 <= 6)
				{
					if (unk_0x724D816EA203A79E(iLocal_35[iLocal_56]))
					{
						if (!unk_0x36CEFBE9B745A58D(iLocal_35[iLocal_56]))
						{
							if (func_171(unk_0xBC25C936A095B5BA(), iLocal_35[iLocal_56], 1) < 15f)
							{
								if (func_191(iLocal_35[iLocal_56], 6))
								{
									if (unk_0x1028B6250119A74B(iLocal_35[iLocal_56], unk_0xBC25C936A095B5BA()))
									{
										if (iLocal_285[iLocal_56] == 0)
										{
											if (!unk_0xD1DC4B08247A4317(iLocal_35[iLocal_56]))
											{
												unk_0x49D46EE47C9CCB66(iLocal_35[iLocal_56]);
											}
											if (unk_0xD1DC4B08247A4317(iLocal_35[iLocal_56]))
											{
												unk_0xA4E856A8CD53B8DF(iLocal_35[iLocal_56]);
											}
											unk_0x2A2F7485FD2B9A29(iLocal_35[iLocal_56], -1, unk_0xBC25C936A095B5BA(), -1, 0);
											iLocal_285[iLocal_56] = 1;
											iLocal_284[iLocal_56] = 0;
											iLocal_280[iLocal_56] = 0;
											iLocal_75 = unk_0x105601648511CC64();
										}
									}
									else if (unk_0x105601648511CC64() > iLocal_75 + 300)
									{
										iLocal_284[iLocal_56] = 0;
									}
								}
								else if (iLocal_284[iLocal_56] == 0)
								{
									if (!unk_0xD1DC4B08247A4317(iLocal_35[iLocal_56]))
									{
										unk_0x49D46EE47C9CCB66(iLocal_35[iLocal_56]);
									}
									if (unk_0xD1DC4B08247A4317(iLocal_35[iLocal_56]))
									{
										unk_0xA4E856A8CD53B8DF(iLocal_35[iLocal_56]);
									}
									unk_0x5558ED6D4A2DEC93(iLocal_35[iLocal_56], unk_0xBC25C936A095B5BA(), 250f, -1, 0, 0);
									iLocal_284[iLocal_56] = 1;
									iLocal_285[iLocal_56] = 0;
								}
							}
							else if (iLocal_284[iLocal_56] == 0)
							{
								if (!unk_0xD1DC4B08247A4317(iLocal_35[iLocal_56]))
								{
									unk_0x49D46EE47C9CCB66(iLocal_35[iLocal_56]);
								}
								if (unk_0xD1DC4B08247A4317(iLocal_35[iLocal_56]))
								{
									unk_0xA4E856A8CD53B8DF(iLocal_35[iLocal_56]);
								}
								unk_0x5558ED6D4A2DEC93(iLocal_35[iLocal_56], unk_0xBC25C936A095B5BA(), 250f, -1, 0, 0);
								iLocal_284[iLocal_56] = 1;
								iLocal_285[iLocal_56] = 0;
							}
						}
					}
					iLocal_56++;
				}
			}
			break;
	}
}

int func_191(int iParam0, int iParam1)//Position - 0x10102
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

void func_192()//Position - 0x1014E
{
	iLocal_37 = func_25(0);
	iLocal_38 = func_25(1);
	iLocal_39 = func_25(2);
	if (func_33(iLocal_37, 0))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_37))
		{
			if (!func_32(iLocal_37))
			{
				if (!func_194())
				{
					if (func_193(iLocal_37))
					{
						if (func_31(iLocal_37, 0))
						{
							unk_0x77815D3407C6700D(iLocal_37, true, 1);
							unk_0x2E35C4FA5F0ED22F(iLocal_37, true);
							unk_0xA4E856A8CD53B8DF(iLocal_37);
							iLocal_350 = 0;
							iLocal_353 = 0;
							iLocal_356 = 0;
						}
					}
				}
			}
			else
			{
				if (iLocal_350 == 0)
				{
					if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
					{
						iLocal_350 = 1;
					}
					else if (unk_0x5237AF95232D78C5(iLocal_37, 0))
					{
						if (!unk_0x62F3A07C43FFB568(iLocal_37, unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0))
						{
							iLocal_350 = 1;
						}
					}
				}
				if (iLocal_350 == 0)
				{
					if (func_194())
					{
						iLocal_350 = 1;
					}
				}
				if (iLocal_347 == 1)
				{
					if ((func_193(iLocal_37) && unk_0xB248FAA35ED47DB9(iLocal_37, 1)) && iLocal_350 == 0)
					{
						vLocal_94 = { unk_0x541C2AEF053615BC(iLocal_37, true) };
						unk_0x4B656426561BA934(vLocal_94.x, vLocal_94.y, vLocal_92.x, vLocal_92.y);
						if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 0)
						{
							if (iLocal_353 == 0)
							{
								if (unk_0x37718415CE714A5B(vLocal_94.x, vLocal_94.y, vLocal_92.x, vLocal_92.y))
								{
									unk_0x827661D9AAD4A354(iLocal_37, unk_0x9FE9D386222EEE47(iLocal_37, 0), vLocal_92, 4, 30f, 786468, 3f, 15f, 0);
									iLocal_356 = 0;
									iLocal_353 = 1;
								}
							}
						}
						else if (unk_0x724D816EA203A79E(unk_0x39827CF9BEAB804C(vLocal_94, 200f, joaat("police3"), 32768)))
						{
							if (iLocal_356 == 0)
							{
								unk_0x488EB206498BC561(iLocal_37, unk_0x9FE9D386222EEE47(iLocal_37, 0), unk_0x39827CF9BEAB804C(vLocal_94, 200f, joaat("police3"), 32768), 8, 40f, 262144, 300f, 1f, 1);
								iLocal_353 = 0;
								iLocal_356 = 1;
							}
						}
						else if (iLocal_353 == 0)
						{
							if (unk_0x37718415CE714A5B(vLocal_94.x, vLocal_94.y, vLocal_92.x, vLocal_92.y))
							{
								unk_0x827661D9AAD4A354(iLocal_37, unk_0x9FE9D386222EEE47(iLocal_37, 0), vLocal_92, 4, 30f, 786468, 3f, 15f, 0);
								iLocal_356 = 0;
								iLocal_353 = 1;
							}
						}
					}
					else
					{
						iLocal_350 = 1;
					}
				}
				if (iLocal_350 == 1)
				{
					if (func_24(iLocal_37))
					{
						iLocal_350 = 0;
					}
				}
			}
		}
	}
	if (func_33(iLocal_39, 0))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_39))
		{
			if (!func_32(iLocal_39))
			{
				if (!func_194())
				{
					if (func_193(iLocal_39))
					{
						if (func_31(iLocal_39, 0))
						{
							unk_0x77815D3407C6700D(iLocal_39, true, 1);
							unk_0x2E35C4FA5F0ED22F(iLocal_39, true);
							unk_0xA4E856A8CD53B8DF(iLocal_39);
							iLocal_352 = 0;
							iLocal_354 = 0;
							iLocal_357 = 0;
						}
					}
				}
			}
			else
			{
				if (iLocal_352 == 0)
				{
					if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
					{
						iLocal_352 = 1;
					}
					else if (unk_0x5237AF95232D78C5(iLocal_39, 0))
					{
						if (!unk_0x62F3A07C43FFB568(iLocal_39, unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0))
						{
							iLocal_352 = 1;
						}
					}
				}
				if (iLocal_352 == 0)
				{
					if (func_194())
					{
						iLocal_352 = 1;
					}
				}
				if (iLocal_348 == 1)
				{
					if ((func_193(iLocal_39) && unk_0xB248FAA35ED47DB9(iLocal_39, 1)) && iLocal_352 == 0)
					{
						vLocal_94 = { unk_0x541C2AEF053615BC(iLocal_39, true) };
						unk_0x4B656426561BA934(vLocal_94.x, vLocal_94.y, vLocal_92.x, vLocal_92.y);
						if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 0)
						{
							if (iLocal_354 == 0)
							{
								if (unk_0x37718415CE714A5B(vLocal_94.x, vLocal_94.y, vLocal_92.x, vLocal_92.y))
								{
									unk_0x827661D9AAD4A354(iLocal_39, unk_0x9FE9D386222EEE47(iLocal_39, 0), vLocal_92, 4, 30f, 786468, 3f, 15f, 0);
									iLocal_357 = 0;
									iLocal_354 = 1;
								}
							}
						}
						else if (unk_0x724D816EA203A79E(unk_0x39827CF9BEAB804C(vLocal_94, 200f, joaat("police3"), 32768)))
						{
							if (iLocal_357 == 0)
							{
								unk_0x488EB206498BC561(iLocal_39, unk_0x9FE9D386222EEE47(iLocal_39, 0), unk_0x39827CF9BEAB804C(vLocal_94, 200f, joaat("police3"), 32768), 8, 40f, 262144, 300f, 1f, 1);
								iLocal_354 = 0;
								iLocal_357 = 1;
							}
						}
						else if (iLocal_354 == 0)
						{
							if (unk_0x37718415CE714A5B(vLocal_94.x, vLocal_94.y, vLocal_92.x, vLocal_92.y))
							{
								unk_0x827661D9AAD4A354(iLocal_39, unk_0x9FE9D386222EEE47(iLocal_39, 0), vLocal_92, 4, 30f, 786468, 3f, 15f, 0);
								iLocal_357 = 0;
								iLocal_354 = 1;
							}
						}
					}
					else
					{
						iLocal_352 = 1;
					}
				}
				if (iLocal_352 == 1)
				{
					if (func_24(iLocal_39))
					{
						iLocal_352 = 0;
					}
				}
			}
		}
	}
	if (func_33(iLocal_38, 0))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_38))
		{
			if (!func_32(iLocal_38))
			{
				if (!func_194())
				{
					if (func_193(iLocal_38))
					{
						if (func_31(iLocal_38, 0))
						{
							unk_0x77815D3407C6700D(iLocal_38, true, 1);
							unk_0x2E35C4FA5F0ED22F(iLocal_38, true);
							unk_0xA4E856A8CD53B8DF(iLocal_38);
							iLocal_351 = 0;
							iLocal_355 = 0;
							iLocal_358 = 0;
						}
					}
				}
			}
			else
			{
				if (iLocal_351 == 0)
				{
					if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
					{
						iLocal_351 = 1;
					}
					else if (unk_0x5237AF95232D78C5(iLocal_38, 0))
					{
						if (!unk_0x62F3A07C43FFB568(iLocal_38, unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0))
						{
							iLocal_351 = 1;
						}
					}
				}
				if (iLocal_351 == 0)
				{
					if (func_194())
					{
						iLocal_351 = 1;
					}
				}
				if (iLocal_349 == 1)
				{
					if ((func_193(iLocal_38) && unk_0xB248FAA35ED47DB9(iLocal_38, 1)) && iLocal_351 == 0)
					{
						vLocal_94 = { unk_0x541C2AEF053615BC(iLocal_38, true) };
						unk_0x4B656426561BA934(vLocal_94.x, vLocal_94.y, vLocal_92.x, vLocal_92.y);
						if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 0)
						{
							if (iLocal_355 == 0)
							{
								if (unk_0x37718415CE714A5B(vLocal_94.x, vLocal_94.y, vLocal_92.x, vLocal_92.y))
								{
									unk_0x827661D9AAD4A354(iLocal_38, unk_0x9FE9D386222EEE47(iLocal_38, 0), vLocal_92, 4, 30f, 786468, 3f, 15f, 0);
									iLocal_358 = 0;
									iLocal_355 = 1;
								}
							}
						}
						else if (unk_0x724D816EA203A79E(unk_0x39827CF9BEAB804C(vLocal_94, 200f, joaat("police3"), 32768)))
						{
							if (iLocal_358 == 0)
							{
								unk_0x488EB206498BC561(iLocal_38, unk_0x9FE9D386222EEE47(iLocal_38, 0), unk_0x39827CF9BEAB804C(vLocal_94, 200f, joaat("police3"), 32768), 8, 40f, 262144, 300f, 1f, 1);
								iLocal_355 = 0;
								iLocal_358 = 1;
							}
						}
						else if (iLocal_355 == 0)
						{
							if (unk_0x37718415CE714A5B(vLocal_94.x, vLocal_94.y, vLocal_92.x, vLocal_92.y))
							{
								unk_0x827661D9AAD4A354(iLocal_38, unk_0x9FE9D386222EEE47(iLocal_38, 0), vLocal_92, 4, 30f, 786468, 3f, 15f, 0);
								iLocal_358 = 0;
								iLocal_355 = 1;
							}
						}
					}
					else
					{
						iLocal_351 = 1;
					}
				}
				if (iLocal_351 == 1)
				{
					if (func_24(iLocal_38))
					{
						iLocal_351 = 0;
					}
				}
			}
		}
	}
}

int func_193(int iParam0)//Position - 0x10777
{
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		if (!unk_0x36CEFBE9B745A58D(iParam0))
		{
			if (unk_0x62F3A07C43FFB568(iParam0, unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0) && unk_0x3187EF5798B5D209(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), -1, 0) == iParam0)
			{
				if (unk_0x724D816EA203A79E(iLocal_33))
				{
					if (unk_0xE59B7F5A03335350(iLocal_33, 0))
					{
						if ((unk_0x62F3A07C43FFB568(iParam0, iLocal_33, 0) && unk_0x3187EF5798B5D209(iLocal_33, -1, 0) == iParam0) && !unk_0x4DBCE270B354E123(iLocal_33, vLocal_92, 3f, 3f, 3f, false, true, 0))
						{
							if (iParam0 == iLocal_37)
							{
								iLocal_347 = 1;
							}
							if (iParam0 == iLocal_39)
							{
								iLocal_348 = 1;
							}
							if (iParam0 == iLocal_38)
							{
								iLocal_349 = 1;
							}
							return 1;
						}
					}
				}
			}
		}
	}
	if (iParam0 == iLocal_37)
	{
		iLocal_347 = 0;
	}
	if (iParam0 == iLocal_39)
	{
		iLocal_348 = 0;
	}
	if (iParam0 == iLocal_38)
	{
		iLocal_349 = 0;
	}
	return 0;
}

bool func_194()//Position - 0x10859
{
	return Global_4334;
}

void func_195()//Position - 0x10864
{
	if (unk_0x724D816EA203A79E(iLocal_33))
	{
		if (!unk_0xE59B7F5A03335350(iLocal_33, 0))
		{
			func_198(3);
			return;
		}
		else
		{
			if (func_197(&iLocal_33))
			{
				func_198(2);
				return;
			}
			if (unk_0x724D816EA203A79E(iLocal_32))
			{
				if (!unk_0xE59B7F5A03335350(iLocal_32, 0))
				{
					func_198(1);
					return;
				}
				if (unk_0xE59B7F5A03335350(iLocal_32, 0))
				{
					if (!unk_0x6E80E5225F67328D(iLocal_33))
					{
						if ((unk_0xE7259E40522CC260(iLocal_32) || func_196(iLocal_32)) || func_197(&iLocal_32))
						{
							func_198(1);
							return;
						}
					}
				}
			}
		}
	}
	if (iLocal_28 == 3 || iLocal_28 == 4)
	{
		if (unk_0x724D816EA203A79E(iLocal_32))
		{
			if (unk_0xE59B7F5A03335350(iLocal_32, 0))
			{
				if (func_171(iLocal_32, unk_0xBC25C936A095B5BA(), 1) > 600f)
				{
					func_198(5);
					return;
				}
			}
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_40))
	{
		if (unk_0x36CEFBE9B745A58D(iLocal_40))
		{
			func_198(6);
			return;
		}
	}
}

int func_196(int iParam0)//Position - 0x1094F
{
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (unk_0x1D403DFADBC2DE3C(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xE59B7F5A03335350(iParam0, 0))
		{
			if (!unk_0x7544D2465B934445(iParam0))
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

int func_197(int iParam0)//Position - 0x10992
{
	if (unk_0xE59B7F5A03335350(*iParam0, 0))
	{
		if (((unk_0xBCDD4514E5CAE591(*iParam0, 0, 7000) || unk_0xBCDD4514E5CAE591(*iParam0, 3, 30000)) || unk_0xBCDD4514E5CAE591(*iParam0, 2, 30000)) || unk_0xBCDD4514E5CAE591(*iParam0, 1, 40000))
		{
			return 1;
		}
	}
	return 0;
}

void func_198(int iParam0)//Position - 0x109EC
{
	iLocal_30 = iParam0;
	if (iLocal_28 != 6)
	{
		iLocal_28 = 6;
		iLocal_53 = 0;
	}
}

void func_199(int iParam0, int iParam1)//Position - 0x10A04
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

void func_200()//Position - 0x10A49
{
	if (iLocal_28 == 5)
	{
		if (iLocal_360 == 0)
		{
			func_201(657);
		}
	}
}

void func_201(int iParam0)//Position - 0x10A65
{
	bool bVar0;
	int iVar1;
	
	Global_DAA0 = 0;
	if (!Global_DB80[iParam0 /*13*/] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_109DE)
	{
		if (Global_109DF[iVar1 /*9*/] == iParam0)
		{
			bVar0 = true;
			Global_109DF[iVar1 /*9*/].f_1 = 1;
			Global_109DF[iVar1 /*9*/].f_2 = 0f;
			if (Global_109DF[iVar1 /*9*/].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

bool func_202(bool bParam0)//Position - 0x10AD6
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_1163A, 0);
}

void func_203()//Position - 0x10B01
{
	unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 0);
	unk_0x8510BC031C24B862(joaat("packer"), false);
	unk_0x8510BC031C24B862(joaat("phantom"), false);
	unk_0x748798F6C2AB96B7("FHPRB_START");
	unk_0x748798F6C2AB96B7("FHPRB_TRUCK");
	unk_0x748798F6C2AB96B7("FHPRB_COPS");
	unk_0x748798F6C2AB96B7("FHPRB_LOST");
	unk_0x748798F6C2AB96B7("FHPRB_STOP");
	unk_0x483687B0FCA5415A(iLocal_42, 0);
	unk_0x483687B0FCA5415A(iLocal_43, 0);
	unk_0x483687B0FCA5415A(iLocal_44, 0);
	unk_0x483687B0FCA5415A(iLocal_45, 0);
	unk_0x483687B0FCA5415A(iLocal_46, 0);
	unk_0x483687B0FCA5415A(iLocal_47, 0);
	if (unk_0xD64C9DAB4705D565("SCRAP_SECURITY"))
	{
		if (unk_0x18205062F45F681D("SCRAP_SECURITY"))
		{
			unk_0xBB8B5725691B10D0("SCRAP_SECURITY", false);
		}
	}
	unk_0xAEC867D0DBB7AFEB(5);
	if (unk_0x86BC948CAD7C61EF(iLocal_90))
	{
		unk_0x906C49077ACDA06A(iLocal_90);
	}
	if (unk_0x86BC948CAD7C61EF(iLocal_91))
	{
		unk_0x906C49077ACDA06A(iLocal_91);
	}
	unk_0x95E4B6F3ED223F5A();
}

void func_204()//Position - 0x10BC1
{
	int iVar0;
	
	if (unk_0xACE95AD318CE412B("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_19B04.f_2360 || func_202(0))
	{
		if (!func_205())
		{
			iVar0 = func_13();
			if (iVar0 != -1)
			{
				if (!func_7(iVar0))
				{
					return;
				}
				unk_0xF0059F27F7BB6680(&(Global_1478C[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_12();
		}
	}
}

int func_205()//Position - 0x10C32
{
	if (((Global_16B1B == 13 || Global_16B1B == 10) || Global_16B1B == 11) || Global_16B1B == 12)
	{
		return 0;
	}
	return 1;
}

