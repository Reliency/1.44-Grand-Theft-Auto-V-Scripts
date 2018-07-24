#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
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
	vector3 vLocal_43 = { 0f, 0f, 0f };
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	vector3 vLocal_48 = { 0f, 0f, 0f };
	int iLocal_49 = 0;
	bool bLocal_50 = 0;
	vector3 vLocal_51[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_52[2] = { 0f, 0f };
	vector3 vLocal_53[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_54[3] = { 0f, 0f, 0f };
	vector3 vLocal_55[4] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_56[4] = { 0f, 0f, 0f, 0f };
	vector3 vLocal_57 = { 0f, 0f, 0f };
	vector3 vLocal_58 = { 0f, 0f, 0f };
	vector3 vLocal_59 = { 0f, 0f, 0f };
	int iLocal_60 = 0;
	vector3 vLocal_61 = { 0f, 0f, 0f };
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66[2] = { 0, 0 };
	int iLocal_67[3] = { 0, 0, 0 };
	int iLocal_68[4] = { 0, 0, 0, 0 };
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	vector3 vLocal_71 = { 0f, 0f, 0f };
	vector3 vLocal_72 = { 0f, 0f, 0f };
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	bool bLocal_79 = 0;
	int iLocal_80[2] = { 0, 0 };
	int iLocal_81[2] = { 0, 0 };
	bool bLocal_82 = 0;
	bool bLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
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
	int iLocal_103[2] = { 0, 0 };
	int iLocal_104 = 0;
	vector3 vLocal_105 = { 0f, 0f, 0f };
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	bool bLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	var uLocal_116[2] = { 0, 0 };
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	vector3 vLocal_123 = { 0f, 0f, 0f };
	float fLocal_124 = 0f;
	vector3 vLocal_125 = { 0f, 0f, 0f };
	vector3 vLocal_126 = { 0f, 0f, 0f };
	vector3 vLocal_127 = { 0f, 0f, 0f };
	vector3 vLocal_128 = { 0f, 0f, 0f };
	int iLocal_129 = 0;
	char* sLocal_130 = NULL;
	char* sLocal_131 = NULL;
	char* sLocal_132 = NULL;
	char* sLocal_133 = NULL;
	char* sLocal_134 = NULL;
	int iLocal_135 = 0;
	float fLocal_136 = 0f;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
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
	struct<2> Local_316 = { 0, 5 } ;
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
	var uLocal_332 = 5;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iLocal_0 = 3;
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	vLocal_71 = { -824.1719f, -187.654f, 36.5707f };
	vLocal_72 = { -1202.94f, -779.74f, 17.33f };
	vLocal_48 = { ScriptParam_316.f_1[0 /*3*/] };
	func_241();
	if (unk_0xE8A79675302ED812(11))
	{
		func_239();
		func_227();
	}
	if (iLocal_47 == 1)
	{
		if (!func_226(0) || !func_225(0))
		{
			unk_0x95E4B6F3ED223F5A();
		}
	}
	else if (iLocal_47 == 2)
	{
		if (!func_226(14) || !func_225(14))
		{
			unk_0x95E4B6F3ED223F5A();
		}
	}
	if (func_195(vLocal_48, 5, iLocal_73, 0, 0))
	{
		func_192(5);
	}
	else
	{
		unk_0x95E4B6F3ED223F5A();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (unk_0x684B06333594F9EA() || iLocal_99)
		{
			if (!func_191())
			{
				if (func_190())
				{
					func_227();
				}
			}
			unk_0x2E94C9549322098D("RE_SR", 0);
			if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
			{
				switch (iLocal_46)
				{
					case 0:
						if (iLocal_49)
						{
							iLocal_142 = 1;
							iLocal_46 = 1;
						}
						else
						{
							if (func_178())
							{
								func_227();
							}
							if (!bLocal_50)
							{
								func_177();
							}
							if (bLocal_50)
							{
								func_176();
							}
						}
						break;
					
					case 1:
						switch (iLocal_44)
						{
							case 0:
								if (!iLocal_76)
								{
									func_175();
									if (unk_0x18487DB48DC3A046(iLocal_88))
									{
										func_169();
										iLocal_76 = 1;
									}
								}
								else
								{
									if (iLocal_47 == 1)
									{
										unk_0xE9B1C9E275C24095();
									}
									func_166();
									unk_0xB165D6ED2E977354(iLocal_88);
									if (func_165())
									{
										if (!iLocal_94)
										{
											if (iLocal_47 == 1)
											{
												if (func_164(&uLocal_151, "REROBAU", "REROB_CH2", "REROB_CH2_1", 4, 0, 0))
												{
													iLocal_94 = 1;
												}
											}
											else if (iLocal_47 == 2)
											{
												if (func_164(&uLocal_151, "REROBAU", "REROB_CH", "REROB_CH_1", 4, 0, 0))
												{
													iLocal_94 = 1;
												}
											}
										}
									}
									if (func_163())
									{
										if (unk_0x2DA8CA50A72528FB(iLocal_122))
										{
											unk_0x07B8ECB35A4ED3AC(&iLocal_122);
										}
										unk_0xA98B19EC1C93FC3C(unk_0xB5CEFD608600A09F());
										unk_0xDF53A66AEE1401AA(0f);
										iVar0 = 0;
										while (iVar0 < iLocal_66)
										{
											if (!unk_0x36CEFBE9B745A58D(iLocal_66[iVar0]))
											{
												unk_0xB8CBD998685C0685(iLocal_66[iVar0], unk_0xBC25C936A095B5BA(), 0, 16);
												unk_0x22321800954A532E(iLocal_66[iVar0], true);
												if (!unk_0x2DA8CA50A72528FB(uLocal_116[iVar0]))
												{
													uLocal_116[iVar0] = func_162(iLocal_66[iVar0], 1, 145);
												}
											}
											iVar0++;
										}
										if (iLocal_47 == 2)
										{
											iVar0 = 0;
											while (iVar0 < iLocal_67)
											{
												if (!unk_0x36CEFBE9B745A58D(iLocal_67[iVar0]))
												{
													unk_0xEE7131C3C73E7282(iLocal_67[iVar0], -1);
													unk_0x22321800954A532E(iLocal_67[iVar0], true);
												}
												iVar0++;
											}
											iVar0 = 0;
											while (iVar0 < iLocal_68)
											{
												if (!unk_0x36CEFBE9B745A58D(iLocal_68[iVar0]))
												{
													unk_0xEE7131C3C73E7282(iLocal_68[iVar0], -1);
													unk_0x22321800954A532E(iLocal_68[iVar0], true);
												}
												iVar0++;
											}
										}
										unk_0xA35241BCE4C1A24B(&iLocal_102);
										bLocal_79 = true;
										iLocal_44 = 1;
										iLocal_45 = 3;
									}
									if (func_161())
									{
										func_154(1);
										SYSTEM::SETTIMERA(0);
										unk_0x9C23040DD1853B23(88, vLocal_123, 15000f);
										iLocal_44 = 1;
									}
								}
								break;
							
							case 1:
								unk_0x6A095EC1C9AF12A4(unk_0xB5CEFD608600A09F());
								func_166();
								iVar1 = 0;
								while (iVar1 < iLocal_67)
								{
									if (unk_0x724D816EA203A79E(iLocal_67[iVar1]))
									{
										if (unk_0xD9C1758D86688CEA(iLocal_67[iVar1], unk_0xBC25C936A095B5BA(), 1))
										{
											func_153();
										}
									}
									iVar1++;
								}
								iVar1 = 0;
								while (iVar1 < iLocal_68)
								{
									if (unk_0x724D816EA203A79E(iLocal_68[iVar1]))
									{
										if (unk_0xD9C1758D86688CEA(iLocal_68[iVar1], unk_0xBC25C936A095B5BA(), 1))
										{
											func_153();
										}
									}
									iVar1++;
								}
								switch (iLocal_45)
								{
									case 0:
										if (func_161())
										{
											func_149();
											func_147();
										}
										break;
									
									case 1:
										func_146();
										func_147();
										break;
									
									case 2:
										func_145();
										func_144();
										func_143();
										if (SYSTEM::TIMERB() > 500)
										{
											if (unk_0x724D816EA203A79E(iLocal_102))
											{
												if (!unk_0xE7E55F7532DEE345(iLocal_102))
												{
													func_142();
													unk_0x8E25082A46F87892(iLocal_66[0], joaat("weapon_unarmed"), true);
													unk_0x5DBE04849460E608(iLocal_102, iLocal_66[0], unk_0xFA18E720A39243D0(iLocal_66[0], 57005), 0.3f, 0f, 0f, 80f, -90f, 0f, 1, 1, 0, 0, 2, 1);
												}
											}
										}
										if (unk_0x876474582C5DECDE(vLocal_123 - Vector(20f, 20f, 20f), vLocal_123 + Vector(20f, 20f, 20f), 0))
										{
											if (!unk_0x36CEFBE9B745A58D(iLocal_67[1]))
											{
												unk_0xAB43C54784946B9F(iLocal_67[1], vLocal_59, 150f, -1, 0, 0);
												unk_0x2E35C4FA5F0ED22F(iLocal_67[1], false);
												unk_0x02537C8C1BEEB477(&(iLocal_67[1]));
											}
											if (!unk_0x36CEFBE9B745A58D(iLocal_67[2]))
											{
												unk_0xAB43C54784946B9F(iLocal_67[2], vLocal_59, 150f, -1, 0, 0);
												unk_0x2E35C4FA5F0ED22F(iLocal_67[2], false);
												unk_0x02537C8C1BEEB477(&(iLocal_67[2]));
											}
											iVar2 = 0;
											while (iVar2 <= (iLocal_65 - 1))
											{
												if (!unk_0x36CEFBE9B745A58D(iLocal_68[iVar2]))
												{
													unk_0xB71D41C0310C93DE(iLocal_68[iVar2], true, 1);
													unk_0xC5A6DFE2B8987B17(&iLocal_87);
													if (iLocal_47 == 1)
													{
														unk_0xE896C0AD02364F2A(0, "random@robbery", "exit_flee", 4f, -4f, -1, 5632, 0f, 0, 1, 0);
													}
													else if (iLocal_47 == 2)
													{
														unk_0x346129B364057FF6(0, -1201.476f, -790.2733f, 15.5475f, 2f, -1, 1048576000, 0, 1193033728);
													}
													unk_0xAB43C54784946B9F(0, vLocal_59, 150f, -1, 0, 0);
													unk_0x535008C596714F9E(iLocal_87);
													unk_0xA8E6405305C0D7DF(iLocal_68[iVar2], iLocal_87);
													unk_0x02DAF06EA4F08219(&iLocal_87);
													unk_0x22321800954A532E(iLocal_68[iVar2], true);
													unk_0x2E35C4FA5F0ED22F(iLocal_68[iVar2], false);
													unk_0xB105531EDD3DE51B(iLocal_68[iVar2], true);
													unk_0x02537C8C1BEEB477(&(iLocal_68[iVar2]));
												}
												iVar2++;
											}
										}
										if (func_141() || SYSTEM::TIMERA() > 20000)
										{
											if (!iLocal_99)
											{
												if (!unk_0x1D403DFADBC2DE3C(iLocal_66[0], 0))
												{
													func_133(0, 1, 1, 0, 0);
													func_128(0);
													unk_0x59B038076F830627(true);
													unk_0x43F06392C4EF25E0(true);
													unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
													unk_0xE896C0AD02364F2A(unk_0xBC25C936A095B5BA(), "random@shop_robbery", "kneel_getup_p", 2f, -2f, 2700, 0, 0, 0, 0, 0);
													if (iLocal_47 == 1)
													{
														if (unk_0x724D816EA203A79E(iLocal_102))
														{
															unk_0xDC078F87049ECECE(iLocal_102, false, 0);
															unk_0xD434A01DEA38A939(iLocal_102, false, 0);
														}
													}
													else if (iLocal_47 == 2)
													{
													}
													iVar1 = 0;
													while (iVar1 < iLocal_67)
													{
														if (!unk_0x36CEFBE9B745A58D(iLocal_67[iVar1]))
														{
															unk_0x2E35C4FA5F0ED22F(iLocal_67[iVar1], false);
														}
														iVar1++;
													}
													iVar1 = 0;
													while (iVar1 < iLocal_68)
													{
														if (!unk_0x36CEFBE9B745A58D(iLocal_68[iVar1]))
														{
															unk_0x2E35C4FA5F0ED22F(iLocal_68[iVar1], false);
														}
														iVar1++;
													}
													if (!unk_0x36CEFBE9B745A58D(iLocal_67[0]))
													{
														unk_0x2E35C4FA5F0ED22F(iLocal_67[0], true);
														unk_0xC5A6DFE2B8987B17(&iLocal_87);
														unk_0xE896C0AD02364F2A(0, "random@robbery", "f_distressed_loop", 2f, -2f, -1, 9, 0, 0, 0, 0);
														unk_0x535008C596714F9E(iLocal_87);
														unk_0xA8E6405305C0D7DF(iLocal_67[0], iLocal_87);
														unk_0x02DAF06EA4F08219(&iLocal_87);
														unk_0x22321800954A532E(iLocal_67[0], true);
													}
													if (!func_127())
													{
														func_116(&uLocal_151, "REROBAU", "REROB_CLAWAY", 4, 0, 0, 0);
													}
													iLocal_99 = 1;
												}
											}
										}
										if (!iLocal_78)
										{
											if (unk_0x96044E39418AAF17(unk_0xBC25C936A095B5BA(), "random@shop_robbery", "kneel_getup_p", 3))
											{
												if (unk_0x4A3B2CF8BADDD74E(unk_0xBC25C936A095B5BA(), "random@shop_robbery", "kneel_getup_p") > 0.7f || (unk_0x4A3B2CF8BADDD74E(unk_0xBC25C936A095B5BA(), "random@shop_robbery", "kneel_getup_p") > 0.6f && func_115(64)))
												{
													unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
													iLocal_78 = 1;
												}
											}
										}
										if (iLocal_47 == 1)
										{
											if (!func_161())
											{
												if (!iLocal_111)
												{
													iLocal_111 = 1;
												}
											}
											if (!bLocal_96)
											{
												func_114();
											}
											if (!unk_0x36CEFBE9B745A58D(iLocal_66[0]) && unk_0xE59B7F5A03335350(iLocal_106, 0))
											{
												if (unk_0x62F3A07C43FFB568(iLocal_66[0], iLocal_106, 0))
												{
													if (unk_0x724D816EA203A79E(iLocal_102))
													{
														unk_0xA35241BCE4C1A24B(&iLocal_102);
														bLocal_96 = true;
													}
												}
											}
											if (func_113() && !iLocal_97)
											{
												if (unk_0x2DA8CA50A72528FB(uLocal_116[0]))
												{
													unk_0x07B8ECB35A4ED3AC(&(uLocal_116[0]));
												}
												if (unk_0x2DA8CA50A72528FB(uLocal_116[1]))
												{
													unk_0x07B8ECB35A4ED3AC(&(uLocal_116[1]));
												}
												if (!unk_0x2DA8CA50A72528FB(iLocal_120))
												{
													iLocal_120 = func_111(iLocal_106, 1, 0);
												}
												bLocal_96 = true;
												if (!unk_0x36CEFBE9B745A58D(iLocal_115))
												{
													unk_0x91629AC1E1F78419(iLocal_115, 17, true);
													unk_0x91629AC1E1F78419(iLocal_115, 6, true);
													unk_0x91629AC1E1F78419(iLocal_115, 1, true);
													unk_0x1A06AE15BF21D407(iLocal_115, iLocal_106, unk_0xBC25C936A095B5BA(), 8, 16f, 786469, -1f, -1f, 1);
													unk_0x22321800954A532E(iLocal_115, true);
													iLocal_97 = 1;
												}
											}
											if (iLocal_97 && !iLocal_143)
											{
												if (unk_0xE59B7F5A03335350(iLocal_106, 0) && !unk_0x36CEFBE9B745A58D(iLocal_115))
												{
													if (!unk_0x4DBCE270B354E123(iLocal_106, vLocal_51[0 /*3*/], 20f, 20f, 10f, false, true, 0))
													{
														unk_0x1A06AE15BF21D407(iLocal_115, iLocal_106, unk_0xBC25C936A095B5BA(), 8, 19f, 786469, -1f, -1f, 1);
														iLocal_143 = 1;
													}
												}
											}
											if (func_110())
											{
												if (!unk_0x36CEFBE9B745A58D(iLocal_115))
												{
													if (unk_0xE59B7F5A03335350(iLocal_106, 0))
													{
														if (!iLocal_98)
														{
															unk_0x91629AC1E1F78419(iLocal_115, 17, true);
															unk_0x91629AC1E1F78419(iLocal_115, 6, true);
															unk_0x91629AC1E1F78419(iLocal_115, 1, true);
															unk_0x1A06AE15BF21D407(iLocal_115, iLocal_106, unk_0xBC25C936A095B5BA(), 8, 17f, 786469, -1f, -1f, 1);
															iLocal_98 = 1;
														}
														if (!unk_0x36CEFBE9B745A58D(iLocal_66[0]))
														{
															if (unk_0x62F3A07C43FFB568(iLocal_66[0], iLocal_106, 0))
															{
																if (unk_0x2DA8CA50A72528FB(uLocal_116[0]))
																{
																	unk_0x07B8ECB35A4ED3AC(&(uLocal_116[0]));
																}
																if (unk_0x2DA8CA50A72528FB(uLocal_116[1]))
																{
																	unk_0x07B8ECB35A4ED3AC(&(uLocal_116[1]));
																}
																if (!unk_0x2DA8CA50A72528FB(iLocal_120))
																{
																	iLocal_120 = func_111(iLocal_106, 1, 0);
																}
																bLocal_96 = true;
															}
														}
													}
												}
												iVar3 = 0;
												while (iVar3 <= (iLocal_63 - 1))
												{
													if (!iLocal_80[iVar3])
													{
														if (!unk_0x36CEFBE9B745A58D(iLocal_66[iVar3]))
														{
															if (unk_0x5237AF95232D78C5(iLocal_66[iVar3], 0) && !unk_0x36CEFBE9B745A58D(iLocal_115))
															{
																unk_0x10790F4A9247B707(iLocal_66[iVar3], unk_0xBC25C936A095B5BA(), 0, 0.3f, 0.7f, 1.9f, -1f, 15, 0, -753768974);
																iLocal_80[iVar3] = 1;
															}
															else if (!unk_0x2DA8CA50A72528FB(iLocal_121))
															{
																unk_0xB8CBD998685C0685(iLocal_66[iVar3], unk_0xBC25C936A095B5BA(), 0, 16);
																unk_0x22321800954A532E(iLocal_66[iVar3], true);
																if (unk_0x2DA8CA50A72528FB(iLocal_120))
																{
																	unk_0x07B8ECB35A4ED3AC(&iLocal_120);
																}
																if (!unk_0x2DA8CA50A72528FB(uLocal_116[iVar3]))
																{
																	uLocal_116[iVar3] = func_162(iLocal_66[iVar3], 1, 145);
																}
																iLocal_80[iVar3] = 1;
															}
														}
													}
													if (!iLocal_81[iVar3])
													{
														if (unk_0xE59B7F5A03335350(iLocal_106, 0))
														{
															if (!unk_0x36CEFBE9B745A58D(iLocal_66[iVar3]))
															{
																if ((unk_0x36CEFBE9B745A58D(iLocal_115) || unk_0x1AAF0C23233C57AF(iLocal_106, -1, 0)) || unk_0x7544D2465B934445(iLocal_66[iVar3]))
																{
																	unk_0xB71D41C0310C93DE(iLocal_66[iVar3], true, 1);
																	unk_0xC5A6DFE2B8987B17(&iLocal_87);
																	unk_0xA3981DED4FC2E56E(0, 0, 0);
																	unk_0x5558ED6D4A2DEC93(0, unk_0xBC25C936A095B5BA(), 300f, -1, 0, 0);
																	unk_0x535008C596714F9E(iLocal_87);
																	unk_0xA8E6405305C0D7DF(iLocal_66[iVar3], iLocal_87);
																	unk_0x02DAF06EA4F08219(&iLocal_87);
																	unk_0x22321800954A532E(iLocal_66[iVar3], true);
																	if (!unk_0x36CEFBE9B745A58D(iLocal_115))
																	{
																		unk_0xB71D41C0310C93DE(iLocal_115, true, 1);
																		unk_0xC5A6DFE2B8987B17(&iLocal_87);
																		unk_0xA3981DED4FC2E56E(0, 0, 0);
																		unk_0x5558ED6D4A2DEC93(0, unk_0xBC25C936A095B5BA(), 300f, -1, 0, 0);
																		unk_0x535008C596714F9E(iLocal_87);
																		unk_0xA8E6405305C0D7DF(iLocal_115, iLocal_87);
																		unk_0x02DAF06EA4F08219(&iLocal_87);
																		unk_0x22321800954A532E(iLocal_115, true);
																	}
																	if (!unk_0x2DA8CA50A72528FB(iLocal_121))
																	{
																		if (unk_0x2DA8CA50A72528FB(iLocal_120))
																		{
																			unk_0x07B8ECB35A4ED3AC(&iLocal_120);
																		}
																		if (!unk_0x2DA8CA50A72528FB(uLocal_116[iVar3]))
																		{
																			uLocal_116[iVar3] = func_162(iLocal_66[iVar3], 1, 145);
																		}
																	}
																	iLocal_81[iVar3] = 1;
																}
															}
														}
														else
														{
															if (!unk_0x36CEFBE9B745A58D(iLocal_66[iVar3]))
															{
																unk_0xB71D41C0310C93DE(iLocal_66[iVar3], true, 1);
																unk_0xC5A6DFE2B8987B17(&iLocal_87);
																unk_0xA3981DED4FC2E56E(0, 0, 0);
																unk_0x5558ED6D4A2DEC93(0, unk_0xBC25C936A095B5BA(), 300f, -1, 0, 0);
																unk_0x535008C596714F9E(iLocal_87);
																unk_0xA8E6405305C0D7DF(iLocal_66[iVar3], iLocal_87);
																unk_0x02DAF06EA4F08219(&iLocal_87);
																unk_0x22321800954A532E(iLocal_66[iVar3], true);
															}
															if (!unk_0x36CEFBE9B745A58D(iLocal_115))
															{
																unk_0xB71D41C0310C93DE(iLocal_115, true, 1);
																unk_0xC5A6DFE2B8987B17(&iLocal_87);
																unk_0xA3981DED4FC2E56E(0, 0, 0);
																unk_0x5558ED6D4A2DEC93(0, unk_0xBC25C936A095B5BA(), 300f, -1, 0, 0);
																unk_0x535008C596714F9E(iLocal_87);
																unk_0xA8E6405305C0D7DF(iLocal_115, iLocal_87);
																unk_0x02DAF06EA4F08219(&iLocal_87);
																unk_0x22321800954A532E(iLocal_115, true);
															}
															if (!unk_0x2DA8CA50A72528FB(iLocal_121))
															{
																if (unk_0x2DA8CA50A72528FB(iLocal_120))
																{
																	unk_0x07B8ECB35A4ED3AC(&iLocal_120);
																}
																if (!unk_0x2DA8CA50A72528FB(uLocal_116[iVar3]))
																{
																	uLocal_116[iVar3] = func_162(iLocal_66[iVar3], 1, 145);
																}
																iLocal_81[iVar3] = 1;
															}
														}
													}
													iVar3++;
												}
											}
											if (bLocal_96)
											{
												if (func_109())
												{
													func_108();
													func_105();
													iLocal_45 = 9;
												}
											}
										}
										else if (iLocal_47 == 2)
										{
											if (unk_0x36CEFBE9B745A58D(iLocal_66[0]))
											{
												if (unk_0x2DA8CA50A72528FB(uLocal_116[0]))
												{
													func_104(&uLocal_151, 3);
													unk_0x07B8ECB35A4ED3AC(&(uLocal_116[0]));
												}
											}
											if (unk_0x36CEFBE9B745A58D(iLocal_66[1]))
											{
												if (unk_0x2DA8CA50A72528FB(uLocal_116[1]))
												{
													func_104(&uLocal_151, 4);
													unk_0x07B8ECB35A4ED3AC(&(uLocal_116[1]));
												}
											}
											if (unk_0x36CEFBE9B745A58D(iLocal_66[0]))
											{
												if (unk_0x724D816EA203A79E(iLocal_102))
												{
													if (unk_0xE7E55F7532DEE345(iLocal_102))
													{
														unk_0x17175087F2DB6AC8(iLocal_102, 1, true);
													}
													unk_0xA35241BCE4C1A24B(&iLocal_102);
													func_108();
													func_105();
													iLocal_45 = 9;
												}
											}
											else if (unk_0xD9C1758D86688CEA(iLocal_66[0], unk_0xBC25C936A095B5BA(), 1))
											{
												if (unk_0x724D816EA203A79E(iLocal_102))
												{
													if (unk_0xE7E55F7532DEE345(iLocal_102))
													{
														unk_0x17175087F2DB6AC8(iLocal_102, 1, true);
													}
													unk_0xA35241BCE4C1A24B(&iLocal_102);
													func_108();
													func_105();
													iLocal_45 = 9;
												}
											}
										}
										break;
									
									case 3:
										func_146();
										break;
									
									case 9:
										func_145();
										func_102();
										break;
									
									case 10:
										func_99(2);
										func_98(iLocal_122, &uLocal_148);
										if (iLocal_47 == 1)
										{
											if (!iLocal_95)
											{
												unk_0x522053D86D6E1C7A("random@robbery");
												if (!unk_0xF9E082857622D91E("random@robbery"))
												{
													unk_0x522053D86D6E1C7A("random@robbery");
												}
												else if (!unk_0x36CEFBE9B745A58D(iLocal_67[0]))
												{
													unk_0x641B19E156645A92(iLocal_67[0], -818.5553f, -185.4815f, 36.5689f, 1, false, 0, 1);
													unk_0x019CE76D5286C95C(iLocal_67[0], 47.0582f);
													unk_0xE896C0AD02364F2A(iLocal_67[0], "random@robbery", "stand_worried_female", 8f, -8f, -1, 9, 0, 0, 0, 0);
													if (!unk_0x36CEFBE9B745A58D(iLocal_67[1]))
													{
														unk_0xAB43C54784946B9F(iLocal_67[1], vLocal_59, 150f, -1, 0, 0);
														unk_0x2E35C4FA5F0ED22F(iLocal_67[1], false);
														unk_0x02537C8C1BEEB477(&(iLocal_67[1]));
													}
													if (!unk_0x36CEFBE9B745A58D(iLocal_67[2]))
													{
														unk_0xAB43C54784946B9F(iLocal_67[2], vLocal_59, 150f, -1, 0, 0);
														unk_0x2E35C4FA5F0ED22F(iLocal_67[2], false);
														unk_0x02537C8C1BEEB477(&(iLocal_67[2]));
													}
													iVar4 = 0;
													while (iVar4 <= (iLocal_65 - 1))
													{
														if (!unk_0x36CEFBE9B745A58D(iLocal_68[iVar4]))
														{
															unk_0xC5A6DFE2B8987B17(&iLocal_87);
															unk_0xE896C0AD02364F2A(0, "random@robbery", "exit_flee", 4f, -4f, -1, 5632, 0f, 0, 1, 0);
															unk_0xAB43C54784946B9F(0, vLocal_59, 150f, -1, 0, 0);
															unk_0x535008C596714F9E(iLocal_87);
															unk_0xA8E6405305C0D7DF(iLocal_68[iVar4], iLocal_87);
															unk_0x02DAF06EA4F08219(&iLocal_87);
															unk_0x22321800954A532E(iLocal_68[iVar4], true);
															unk_0x2E35C4FA5F0ED22F(iLocal_68[iVar4], false);
															unk_0xB105531EDD3DE51B(iLocal_68[iVar4], true);
															unk_0x02537C8C1BEEB477(&(iLocal_68[iVar4]));
														}
														iVar4++;
													}
													iLocal_95 = 1;
												}
											}
											func_74(6, 3);
											func_74(7, 3);
										}
										else if (iLocal_47 == 2)
										{
											if (!iLocal_95)
											{
												unk_0x522053D86D6E1C7A("random@robbery");
												if (!unk_0xF9E082857622D91E("random@robbery"))
												{
													unk_0x522053D86D6E1C7A("random@robbery");
												}
												else if (!unk_0x36CEFBE9B745A58D(iLocal_67[0]))
												{
													unk_0x641B19E156645A92(iLocal_67[0], -1197.455f, -776.0289f, 16.3254f, 1, false, 0, 1);
													unk_0x019CE76D5286C95C(iLocal_67[0], 205.7753f);
													unk_0xE896C0AD02364F2A(iLocal_67[0], "random@robbery", "stand_worried_female", 8f, -8f, -1, 9, 0, 0, 0, 0);
													if (!unk_0x36CEFBE9B745A58D(iLocal_67[1]))
													{
														unk_0xAB43C54784946B9F(iLocal_67[1], vLocal_59, 150f, -1, 0, 0);
														unk_0x2E35C4FA5F0ED22F(iLocal_67[1], false);
														unk_0x02537C8C1BEEB477(&(iLocal_67[1]));
													}
													if (!unk_0x36CEFBE9B745A58D(iLocal_67[2]))
													{
														unk_0xAB43C54784946B9F(iLocal_67[2], vLocal_59, 150f, -1, 0, 0);
														unk_0x2E35C4FA5F0ED22F(iLocal_67[2], false);
														unk_0x02537C8C1BEEB477(&(iLocal_67[2]));
													}
													iVar5 = 0;
													while (iVar5 <= (iLocal_65 - 1))
													{
														if (!unk_0x36CEFBE9B745A58D(iLocal_68[iVar5]))
														{
															unk_0xAB43C54784946B9F(iLocal_68[iVar5], vLocal_59, 150f, -1, 0, 0);
															unk_0x2E35C4FA5F0ED22F(iLocal_68[iVar5], false);
															unk_0xB105531EDD3DE51B(iLocal_68[iVar5], true);
															unk_0x02537C8C1BEEB477(&(iLocal_68[iVar5]));
														}
														iVar5++;
													}
													iLocal_95 = 1;
												}
											}
											if (unk_0x70CF24CEFB0F53B0(-1201.43f, -776.86f, 17.99f, 6f, joaat("v_ilev_clothmiddoor"), 0))
											{
												unk_0x702FD033579B62CE(joaat("v_ilev_clothmiddoor"), -1201.43f, -776.86f, 17.99f, 0, 0f, 0);
											}
										}
										if (func_165())
										{
										}
										if ((func_161() && !unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0)) && !unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()))
										{
											SYSTEM::SETTIMERA(0);
											iLocal_45 = 11;
										}
										if (SYSTEM::VDIST(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), func_241()) > (fLocal_124 + 150f))
										{
											iLocal_45 = 12;
										}
										if (SYSTEM::TIMERA() > 120000)
										{
											iLocal_45 = 14;
										}
										if (unk_0x36CEFBE9B745A58D(iLocal_67[0]))
										{
											func_73(2);
											func_53();
										}
										else if (unk_0xD9C1758D86688CEA(iLocal_67[0], unk_0xBC25C936A095B5BA(), 1))
										{
											func_73(2);
											func_53();
										}
										break;
									
									case 11:
										func_1();
										break;
									
									case 12:
										func_73(2);
										func_53();
										break;
									
									case 7:
										func_53();
										break;
									
									case 14:
										func_73(2);
										func_53();
										break;
									
									case 13:
										if (!iLocal_144)
										{
											if (!unk_0x36CEFBE9B745A58D(iLocal_67[0]))
											{
												unk_0xA4E856A8CD53B8DF(iLocal_67[0]);
												if (iLocal_47 == 1)
												{
													func_116(&uLocal_151, "REROBAU", "REROB_LSTH", 4, 0, 0, 0);
												}
												else if (iLocal_47 == 2)
												{
													func_116(&uLocal_151, "REROBAU", "REROB_CLLOST", 4, 0, 0, 0);
												}
												unk_0x27EEADDC6B3B755E(iLocal_67[0], 20000);
												unk_0x22321800954A532E(iLocal_67[0], true);
												unk_0x2E35C4FA5F0ED22F(iLocal_67[0], false);
												iLocal_144 = 1;
											}
										}
										if (!func_127())
										{
											iLocal_44 = 2;
										}
										break;
								}
								break;
							
							case 2:
								func_153();
								break;
						}
						break;
					}
			}
		}
		else
		{
			func_227();
		}
	}
}

void func_1()//Position - 0x1228
{
	if (func_161())
	{
		if (unk_0x2DA8CA50A72528FB(iLocal_122))
		{
			unk_0x07B8ECB35A4ED3AC(&iLocal_122);
		}
		if (!iLocal_113)
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_67[0]))
			{
				func_133(1, 1, 1, 0, 0);
				unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 0);
				unk_0x7456702622C62EA0(1);
				unk_0xADC7E88690E324EB(unk_0x541C2AEF053615BC(iLocal_67[0], true), 20f, 0);
				unk_0x59B038076F830627(false);
				unk_0x43F06392C4EF25E0(false);
				if (iLocal_47 == 1)
				{
					bLocal_112 = true;
				}
				else if (iLocal_47 == 2)
				{
				}
				iLocal_113 = 1;
			}
		}
	}
	if (!bLocal_112)
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_67[0]))
		{
			bLocal_112 = true;
		}
	}
	if (bLocal_112)
	{
		if (!iLocal_114)
		{
			unk_0x0FC2D36CE8F740E4(unk_0xBC25C936A095B5BA(), true);
			unk_0x8E25082A46F87892(unk_0xBC25C936A095B5BA(), joaat("weapon_unarmed"), true);
			if (unk_0x2DA8CA50A72528FB(iLocal_122))
			{
				unk_0x07B8ECB35A4ED3AC(&iLocal_122);
			}
			vLocal_125 = { unk_0x541C2AEF053615BC(iLocal_67[0], false) };
			if (iLocal_47 == 1)
			{
				vLocal_125 = { -820.77f, -186.514f, 36.569f };
				vLocal_127 = { 0f, 0f, -60f };
				fLocal_136 = 0.855f;
				sLocal_130 = "random@robbery";
				sLocal_131 = "return_bag_stand_b";
				sLocal_132 = "return_bag_stand_b_female";
				sLocal_133 = "return_bag_stand_b_bag";
				sLocal_134 = "return_bag_stand_b_cam";
			}
			else if (iLocal_47 == 2)
			{
				vLocal_125 = { -1198.295f, -776.533f, 16.326f };
				vLocal_127 = { 0f, 0f, -60.25f };
				fLocal_136 = 0.785f;
				sLocal_130 = "random@robbery";
				sLocal_131 = "return_bag_stand_c_rt";
				sLocal_132 = "return_bag_stand_c_rt_female";
				sLocal_133 = "return_bag_stand_c_rt_bag";
				sLocal_134 = "return_bag_stand_c_rt_cam";
			}
			iLocal_135 = unk_0xD0D858E538FD01C3(vLocal_125, vLocal_127, 2);
			iLocal_129 = unk_0x578D5D08EC980893("DEFAULT_ANIMATED_CAMERA", false);
			unk_0xA4DB448107C6D171(iLocal_129, iLocal_135, sLocal_134, sLocal_130);
			unk_0x49D46EE47C9CCB66(unk_0xBC25C936A095B5BA());
			unk_0xB62398E536F695FC(unk_0xBC25C936A095B5BA(), iLocal_135, sLocal_130, sLocal_131, 1000f, -2f, 5, 0, 1148846080, 0);
			unk_0x2EB4D46478766D87(unk_0xBC25C936A095B5BA(), 0, 0);
			unk_0x49D46EE47C9CCB66(iLocal_67[0]);
			unk_0xB62398E536F695FC(iLocal_67[0], iLocal_135, sLocal_130, sLocal_132, 1000f, -2f, 4, 0, 1148846080, 0);
			unk_0x2EB4D46478766D87(iLocal_67[0], 0, 0);
			iLocal_102 = unk_0xB6896943DA475493(joaat("prop_cs_duffel_01"), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), true, true, false);
			unk_0xBEBE356CCD6268A1(iLocal_102, iLocal_135, sLocal_133, sLocal_130, 1000f, 8f, 0, 1148846080);
			if (!unk_0x36CEFBE9B745A58D(iLocal_67[0]))
			{
				func_52();
				unk_0x348665177DBFB93B(iLocal_129, true);
				unk_0x062C9995BFD27B2A(true, false, 3000, 1, 0, 0);
				SYSTEM::SETTIMERA(0);
				iLocal_114 = 1;
			}
		}
	}
	if ((SYSTEM::TIMERA() > 1500 && iLocal_114) && !iLocal_93)
	{
		func_50();
		SYSTEM::WAIT(0);
		if (iLocal_47 == 1)
		{
			func_116(&uLocal_151, "REROBAU", "REROB_TKH", 4, 0, 0, 0);
		}
		else if (iLocal_47 == 2)
		{
			func_116(&uLocal_151, "REROBAU", "REROB_CLDISC", 4, 0, 0, 0);
		}
		iLocal_93 = 1;
	}
	if (unk_0x8FD30584EB38411B(iLocal_135) > fLocal_136 && iLocal_114)
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_67[0]))
		{
			unk_0x8EF3D958386640FE(iLocal_67[0], iLocal_118);
			unk_0xA4E856A8CD53B8DF(iLocal_67[0]);
			unk_0xC5A6DFE2B8987B17(&iLocal_87);
			unk_0xE896C0AD02364F2A(0, "random@robbery", "stand_worried_female", 2f, -2f, -1, 1, 0, 0, 0, 0);
			unk_0x535008C596714F9E(iLocal_87);
			unk_0xA8E6405305C0D7DF(iLocal_67[0], iLocal_87);
			unk_0x02DAF06EA4F08219(&iLocal_87);
			unk_0x22321800954A532E(iLocal_67[0], true);
		}
		if (unk_0x724D816EA203A79E(iLocal_102))
		{
			unk_0xA35241BCE4C1A24B(&iLocal_102);
		}
		unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
		unk_0x3E2B7D349B5735D3(unk_0xBC25C936A095B5BA(), -668482597, false, 0, 0);
		unk_0x56EDA6006F1B166D(unk_0xB5CEFD608600A09F(), 1f, 650, 0f, 1, 0);
		func_133(0, 1, 1, 0, 0);
		unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 4);
		unk_0x59B038076F830627(true);
		unk_0x43F06392C4EF25E0(true);
		unk_0x0FC2D36CE8F740E4(unk_0xBC25C936A095B5BA(), false);
		unk_0xF3F01A78937DC905(0f);
		unk_0x9CB4DD3D88846081(0, 0, 3, 0);
		unk_0x4EC087603E1DEF9C(iLocal_129, 0);
		func_49();
		func_48(joaat("rc_wallets_returned"), 1);
		if (iLocal_47 == 1)
		{
			func_12(func_43(), 1, iLocal_118);
			func_2(0, func_43(), 1);
		}
		else if (iLocal_47 == 2)
		{
			func_12(func_43(), 1, iLocal_118);
			func_2(14, func_43(), 1);
		}
		func_73(3);
		func_53();
	}
}

void func_2(int iParam0, int iParam1, bool bParam2)//Position - 0x1606
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 5;
			break;
		
		case 1:
			iVar0 = 7;
			break;
		
		case 2:
			iVar0 = 6;
			break;
		
		default:
			return;
			break;
	}
	if (bParam2)
	{
		if (!func_11(iParam0, iVar0, 0))
		{
			func_10(iParam0, iVar0, 0);
		}
	}
	else if (func_11(iParam0, iVar0, 0))
	{
		func_3(iParam0, iVar0, 0);
	}
}

void func_3(int iParam0, int iParam1, bool bParam2)//Position - 0x1672
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0x7CB6FD92BE491AD9(&(Global_16B4F.f_531[iParam0]), iParam1);
	}
	else if (unk_0x7AF0088ABFA713B6())
	{
		if (func_9() == 0)
		{
			iVar0 = func_7(func_8(iParam0), -1, 0);
			unk_0x7CB6FD92BE491AD9(&iVar0, iParam1);
			func_4(func_8(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_29C[iParam0]), iParam1);
	}
}

void func_4(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x16DB
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_5(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, iParam3);
	}
}

int func_5(var uParam0)//Position - 0x170B
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_6();
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

int func_6()//Position - 0x173F
{
	return Global_1407E0;
}

int func_7(int iParam0, int iParam1, int iParam2)//Position - 0x174B
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_5(iParam1)];
	if (unk_0x6CB99B97664C3727(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_8(int iParam0)//Position - 0x177D
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

int func_9()//Position - 0x1A71
{
	return Global_62BD;
}

void func_10(int iParam0, int iParam1, bool bParam2)//Position - 0x1A7C
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0xF0059F27F7BB6680(&(Global_16B4F.f_531[iParam0]), iParam1);
	}
	else if (unk_0x7AF0088ABFA713B6())
	{
		if (func_9() == 0)
		{
			iVar0 = func_7(func_8(iParam0), -1, 0);
			unk_0xF0059F27F7BB6680(&iVar0, iParam1);
			func_4(func_8(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xF0059F27F7BB6680(&(Global_19B04.f_29C[iParam0]), iParam1);
	}
}

int func_11(int iParam0, int iParam1, bool bParam2)//Position - 0x1AE5
{
	if (bParam2)
	{
		return unk_0xFA30DFD0084E92FE(Global_16B4F.f_531[iParam0], iParam1);
	}
	else if (unk_0x7AF0088ABFA713B6())
	{
		if (func_9() == 0)
		{
			return unk_0xFA30DFD0084E92FE(func_7(func_8(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xFA30DFD0084E92FE(Global_19B04.f_29C[iParam0], iParam1);
	}
	return 0;
}

int func_12(int iParam0, int iParam1, int iParam2)//Position - 0x1B45
{
	if (Global_19B04.f_6D75[iParam0 /*29*/].f_11 == 3)
	{
		return 0;
	}
	if (Global_19B04.f_6D75[iParam0 /*29*/].f_11 == 4)
	{
		return 0;
	}
	return func_13(Global_19B04.f_6D75[iParam0 /*29*/].f_11, 0, iParam1, iParam2, 0);
}

int func_13(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x1B8E
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_42();
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
					func_41(99, 1);
					func_48(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_48(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_48(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_25(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_21(5))
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
							func_48(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_48(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_48(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_21(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_48(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_48(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_48(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_48(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_48(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_48(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_48(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_48(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_48(joaat("sp2_money_spent_property"), iParam3);
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
									func_48(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_48(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_48(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_48(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_48(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_48(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_21(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_48(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_48(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_48(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_48(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_48(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_48(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_20(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_41(95, iParam3);
					break;
				
				case 1:
					func_41(97, iParam3);
					break;
				
				case 2:
					func_41(96, iParam3);
					break;
			}
			func_41(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_16(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_16(iVar1);
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
					func_48(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_48(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_48(joaat("sp2_total_cash_earned"), iParam3);
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
	func_15(iParam0);
	if (Global_8C41 == 15)
	{
		func_14(0);
	}
	return 1;
}

void func_14(bool bParam0)//Position - 0x218D
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

void func_15(int iParam0)//Position - 0x240F
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

void func_16(int iParam0)//Position - 0x2469
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_19(129, 0, -1, 1);
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
	else if (unk_0xFA30DFD0084E92FE(Global_19B04.f_5037.f_1D7, iParam0) || unk_0xFA30DFD0084E92FE(Global_200000[func_18() /*12171*/].f_1E08.f_A, iParam0))
	{
		bVar0 = true;
		unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_5037.f_1D7), iParam0);
		unk_0x7CB6FD92BE491AD9(&(Global_200000[func_18() /*12171*/].f_1E08.f_A), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x2E94302CFF011F2E("COUP_RED");
		unk_0xC9C304D0AABE1335(func_17(iParam0));
		unk_0x7BB0762D8C75A3C7(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_17(int iParam0)//Position - 0x2540
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

int func_18()//Position - 0x25C8
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_19(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x25D5
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
		iParam2 = func_6();
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

void func_20(int iParam0)//Position - 0x2AEF
{
	func_41(93, iParam0);
	func_41(29, iParam0);
	func_41(30, iParam0);
}

bool func_21(int iParam0)//Position - 0x2B0F
{
	if (iParam0 == 8)
	{
		return func_22(129, -1, -1);
	}
	if (!unk_0x7AF0088ABFA713B6())
	{
		return unk_0xFA30DFD0084E92FE(Global_19B04.f_5037.f_1D7, iParam0);
	}
	return unk_0xFA30DFD0084E92FE(Global_200000[func_18() /*12171*/].f_1E08.f_A, iParam0);
}

int func_22(int iParam0, int iParam1, int iParam2)//Position - 0x2B5D
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_6();
	}
	iVar1 = func_24(iParam0, iParam1);
	uVar2 = func_23(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDAB376DC6F83D68C(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_23(int iParam0)//Position - 0x2B9A
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

int func_24(int iParam0, int iParam1)//Position - 0x2E86
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_6();
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

int func_25(bool bParam0)//Position - 0x3153
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
		func_40(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_26(27, 1);
	return 1;
}

int func_26(int iParam0, int iParam1)//Position - 0x320A
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_27(iParam0, iParam1);
}

int func_27(int iParam0, int iParam1)//Position - 0x3225
{
	if (func_39(14) && !func_38(iParam0))
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
	if (func_37(&Global_411EB6))
	{
		if (func_35(&Global_411EB6, iParam0))
		{
			return 0;
		}
		if (func_28(&Global_411EB6, iParam0))
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

int func_28(var uParam0, int iParam1)//Position - 0x32C2
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x6D5CBCB6411EDE89(iParam1))
	{
		return 0;
	}
	if (func_39(14) && !func_38(iParam1))
	{
		return 0;
	}
	if (func_35(uParam0, iParam1))
	{
		return 0;
	}
	if (func_34(uParam0) < 0f)
	{
		func_33(uParam0, 0);
	}
	func_31(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_29(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_29(var uParam0, int iParam1)//Position - 0x3373
{
	int iVar0;
	
	if (unk_0x6D5CBCB6411EDE89(iParam1))
	{
		return 0;
	}
	if (func_39(14) && !func_38(iParam1))
	{
		return 0;
	}
	if (func_35(uParam0, iParam1))
	{
		return 0;
	}
	if (func_34(uParam0) < 0f)
	{
		func_33(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_30(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_30(var uParam0, int iParam1)//Position - 0x33EE
{
	return (*uParam0)[iParam1] == 78;
}

void func_31(var uParam0)//Position - 0x33FF
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_32(uParam0, iVar0);
		iVar0++;
	}
	func_33(uParam0, (Global_411EB5 - 0.5f));
}

void func_32(var uParam0, int iParam1)//Position - 0x3433
{
	(*uParam0)[iParam1] = 78;
}

void func_33(var uParam0, float fParam1)//Position - 0x3443
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

float func_34(var uParam0)//Position - 0x3460
{
	return uParam0->f_50;
}

bool func_35(var uParam0, int iParam1)//Position - 0x346C
{
	return func_36(uParam0, iParam1) != -1;
}

int func_36(var uParam0, int iParam1)//Position - 0x347E
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

bool func_37(var uParam0)//Position - 0x34AB
{
	return uParam0->f_4F == 1;
}

int func_38(int iParam0)//Position - 0x34B9
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

bool func_39(int iParam0)//Position - 0x3509
{
	return Global_8C41 == iParam0;
}

int func_40(int iParam0, int iParam1)//Position - 0x3517
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

void func_41(int iParam0, int iParam1)//Position - 0x3568
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

void func_42()//Position - 0x35C5
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

int func_43()//Position - 0x363A
{
	func_44();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_44()//Position - 0x3653
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_47(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_46(unk_0xBC25C936A095B5BA());
			if (func_45(iVar0) && (!func_39(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_45(Global_19B04.f_932.f_21B.f_10CD))
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

bool func_45(int iParam0)//Position - 0x3750
{
	return iParam0 < 3;
}

int func_46(int iParam0)//Position - 0x375C
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_47(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_47(int iParam0)//Position - 0x3799
{
	if (func_45(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_48(int iParam0, int iParam1)//Position - 0x37C3
{
	int iVar0;
	
	unk_0x6CB99B97664C3727(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x3A57956BCE003880(iParam0, iVar0, 1);
}

void func_49()//Position - 0x37E6
{
	if (iLocal_47 == 1)
	{
		if (unk_0x724D816EA203A79E(iLocal_67[0]))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_67[0]))
			{
				unk_0x2E35C4FA5F0ED22F(iLocal_67[0], false);
				unk_0x02537C8C1BEEB477(&(iLocal_67[0]));
			}
		}
		if (unk_0x724D816EA203A79E(iLocal_67[1]))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_67[1]))
			{
				unk_0x2E35C4FA5F0ED22F(iLocal_67[1], false);
				unk_0x02537C8C1BEEB477(&(iLocal_67[1]));
			}
		}
		if (unk_0x724D816EA203A79E(iLocal_68[0]))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_68[0]))
			{
				unk_0x2E35C4FA5F0ED22F(iLocal_68[0], false);
				unk_0x02537C8C1BEEB477(&(iLocal_68[0]));
			}
		}
		if (unk_0x724D816EA203A79E(iLocal_68[1]))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_68[1]))
			{
				unk_0x2E35C4FA5F0ED22F(iLocal_68[1], false);
				unk_0x02537C8C1BEEB477(&(iLocal_68[1]));
			}
		}
		if (unk_0x724D816EA203A79E(iLocal_68[2]))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_68[2]))
			{
				unk_0x641B19E156645A92(iLocal_68[2], -820.424f, -181.9059f, 36.5687f, 1, false, 0, 1);
				unk_0x019CE76D5286C95C(iLocal_68[2], 167.7909f);
				unk_0x2E35C4FA5F0ED22F(iLocal_68[2], false);
				unk_0x02537C8C1BEEB477(&(iLocal_68[2]));
			}
		}
	}
}

void func_50()//Position - 0x38FA
{
	Global_394A = 0;
	func_51();
}

void func_51()//Position - 0x390A
{
	unk_0x5C7DC611411E2CF9();
	Global_41AB = 0;
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x1E08809A5041F85B(false);
		Global_3DB8 = 6;
	}
}

void func_52()//Position - 0x392B
{
	if (iLocal_47 == 1)
	{
		if (unk_0xE59B7F5A03335350(unk_0x3E12B546F3F2597A(), 0))
		{
			if (unk_0x4DBCE270B354E123(unk_0x3E12B546F3F2597A(), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 8f, 8f, 8f, false, true, 0) || unk_0x4DBCE270B354E123(unk_0x3E12B546F3F2597A(), -823.1281f, -187.9591f, 36.6189f, 8f, 8f, 8f, false, true, 0))
			{
				unk_0x641B19E156645A92(unk_0x3E12B546F3F2597A(), -831.9709f, -192.0823f, 36.5008f, 0, false, 0, 1);
				unk_0xF0A40F19AAB79E88(unk_0x3E12B546F3F2597A(), 1084227584);
			}
		}
		unk_0x6C5F5B5F6894CCE3(-823.1281f, -187.9591f, 36.6189f, 3f, 1, 0, 0, false);
	}
	else if (iLocal_47 == 2)
	{
		if (unk_0xE59B7F5A03335350(unk_0x3E12B546F3F2597A(), 0))
		{
			if (unk_0x4DBCE270B354E123(unk_0x3E12B546F3F2597A(), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 8f, 8f, 8f, false, true, 0) || unk_0x4DBCE270B354E123(unk_0x3E12B546F3F2597A(), -1201.017f, -777.5527f, 16.3398f, 8f, 8f, 8f, false, true, 0))
			{
				unk_0x641B19E156645A92(unk_0x3E12B546F3F2597A(), -1205.936f, -781.2014f, 16.0088f, 0, false, 0, 1);
				unk_0xF0A40F19AAB79E88(unk_0x3E12B546F3F2597A(), 1084227584);
			}
		}
		unk_0x6C5F5B5F6894CCE3(-1201.017f, -777.5527f, 16.3398f, 8f, 1, 0, 0, false);
	}
}

void func_53()//Position - 0x3A8A
{
	while (!func_72())
	{
		SYSTEM::WAIT(0);
	}
	unk_0xA250DC6A7CADB56D(unk_0xB5CEFD608600A09F(), 1);
	func_57(5, iLocal_73);
	func_54();
	func_227();
}

void func_54()//Position - 0x3ABA
{
	func_55();
}

int func_55()//Position - 0x3AC7
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

bool func_56(bool bParam0)//Position - 0x3B12
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_1163A, 0);
}

void func_57(int iParam0, int iParam1)//Position - 0x3B3D
{
	if (iParam0 == -1)
	{
		iParam0 = func_70();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_69(iParam0))
	{
		func_68(iParam0, iParam1);
		if (!func_67(51))
		{
			func_63("RE_REWARD", 1, 0, 4000, 10000, func_66(), 0, 138, 0);
			func_62(51);
		}
		if (func_61(iParam0))
		{
			Global_19B04.f_6186.f_2 = 3;
		}
		if (func_60(iParam0, iParam1) != 322)
		{
			func_58(func_60(iParam0, iParam1), vLocal_43.x, vLocal_43.y);
		}
		Global_19AF8 = iParam1;
		if (Global_19AF6 == 0)
		{
			if (((Global_19AF9 == 1 || Global_19AF9 == 5) || Global_19AF9 == 11) || Global_19AF9 == 25)
			{
				func_73(2);
			}
			else if ((Global_19AF9 == 26 || Global_19AF9 == 8) || Global_19AF9 == 17)
			{
				func_73(7);
			}
			else
			{
				func_73(1);
			}
		}
	}
}

void func_58(int iParam0, var uParam1, var uParam2)//Position - 0x3C41
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
		func_19((891 + iParam0), 1, -1, 1);
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
		func_59();
	}
}

void func_59()//Position - 0x3D29
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
		func_40(13, SYSTEM::FLOOR(Global_19B04.f_27B5.f_F0D));
	}
	if (!unk_0xF9BFA43C1BAFD016())
	{
		if (!Global_11542)
		{
			if (func_9() == 2 == 0 && !unk_0x7AF0088ABFA713B6())
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

int func_60(int iParam0, int iParam1)//Position - 0x41EB
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

int func_61(int iParam0)//Position - 0x455F
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

void func_62(int iParam0)//Position - 0x458E
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

void func_63(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x45D0
{
	func_64(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_64(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x45F2
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
		func_65();
	}
}

void func_65()//Position - 0x47C6
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

int func_66()//Position - 0x48E6
{
	func_44();
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

int func_67(int iParam0)//Position - 0x492C
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

void func_68(int iParam0, int iParam1)//Position - 0x496F
{
	unk_0xF0059F27F7BB6680(&(Global_19B04.f_6186.f_8[iParam0]), iParam1);
}

int func_69(int iParam0)//Position - 0x498A
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

int func_70()//Position - 0x4A3B
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x1377080E9B0BD993(), 64);
	uVar1 = func_71(Var0);
	return uVar1;
}

int func_71(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x4A58
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

int func_72()//Position - 0x4C32
{
	return 1;
}

void func_73(int iParam0)//Position - 0x4C3B
{
	Global_19AF6 = iParam0;
}

void func_74(int iParam0, int iParam1)//Position - 0x4C49
{
	int iVar0;
	
	if (iParam0 != 226)
	{
		if (Global_11542)
		{
			iVar0 = Global_252E21.f_4B[iParam0];
		}
		else
		{
			iVar0 = Global_19B04.f_1C40[iParam0];
		}
		if (iVar0 != iParam1 || unk_0xFA30DFD0084E92FE(Global_7BCC[(iParam0 / 32)], (iParam0 % 32)))
		{
			if ((((iParam1 == 4 || iParam1 == 3) || iParam1 == 5) || iParam1 == 6) || iParam1 == 2)
			{
				unk_0xF0059F27F7BB6680(&(Global_7BD5[(iParam0 / 32)]), (iParam0 % 32));
				Global_7DA4[iParam0] = iParam1;
			}
			else if (Global_11542)
			{
				Global_252E21.f_4B[iParam0] = iParam1;
			}
			else
			{
				Global_19B04.f_1C40[iParam0] = iParam1;
			}
			unk_0xF0059F27F7BB6680(&(Global_7BCC[(iParam0 / 32)]), (iParam0 % 32));
			func_76(iParam0);
			if (unk_0xFA30DFD0084E92FE(Global_7BCC[(iParam0 / 32)], (iParam0 % 32)))
			{
				func_75(iParam0);
			}
		}
	}
}

void func_75(int iParam0)//Position - 0x4D42
{
	if (!unk_0xFA30DFD0084E92FE(Global_7F7B.f_E4[(iParam0 / 32)], (iParam0 % 23)))
	{
		unk_0xF0059F27F7BB6680(&(Global_7F7B.f_E4[(iParam0 / 32)]), (iParam0 % 23));
		Global_7F7B[Global_7F7B.f_E3] = iParam0;
		Global_7F7B.f_E3++;
	}
}

void func_76(int iParam0)//Position - 0x4D90
{
	struct<7> Var0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	
	if (!func_96())
	{
		return;
	}
	if (unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		return;
	}
	Var0 = { func_95(iParam0) };
	if (unk_0xFA30DFD0084E92FE(Var0.f_4, 2))
	{
		func_81(iParam0, &Var0);
	}
	if (!unk_0x86BC948CAD7C61EF(Var0.f_5))
	{
		if (unk_0x866EAD7E27D8D0F8())
		{
			return;
		}
	}
	bVar1 = false;
	bVar2 = false;
	fVar4 = unk_0xF0F2FC9DE291567F(Var0, unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), true);
	if ((unk_0xFA30DFD0084E92FE(Global_7BD5[(iParam0 / 32)], (iParam0 % 32)) && Global_7DA4[iParam0] == 2) && fVar4 > 210f)
	{
		unk_0x7CB6FD92BE491AD9(&(Global_7BD5[(iParam0 / 32)]), (iParam0 % 32));
		Global_7BDE[iParam0] = 0;
	}
	if (unk_0xB731B8C5BCE89836(joaat("startup_positioning")) == 0)
	{
		if (unk_0xFA30DFD0084E92FE(Global_7CC1[(iParam0 / 32)], (iParam0 % 32)))
		{
			if (fVar4 < 25f)
			{
				if (Global_16B4F.f_13F == 0)
				{
					if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
					{
						Global_16B4F.f_13F = unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA());
					}
				}
				iVar5 = Global_16B4F.f_13F;
				iVar6 = unk_0x9911032C958CE1B0(Var0);
				if (iVar5 == iVar6 && iVar5 != 0)
				{
					unk_0xF0059F27F7BB6680(&(Global_7BD5[(iParam0 / 32)]), (iParam0 % 32));
					Global_7DA4[iParam0] = 3;
					unk_0xF0059F27F7BB6680(&(Global_7BCC[(iParam0 / 32)]), (iParam0 % 32));
				}
			}
			unk_0x7CB6FD92BE491AD9(&(Global_7CC1[(iParam0 / 32)]), (iParam0 % 32));
		}
	}
	if (unk_0xFA30DFD0084E92FE(Global_7BD5[(iParam0 / 32)], (iParam0 % 32)))
	{
		iVar3 = Global_7DA4[iParam0];
	}
	else if (unk_0xFA30DFD0084E92FE(Var0.f_4, 0))
	{
		if (Global_19B04.f_2360)
		{
			iVar3 = func_78(iParam0);
		}
		else
		{
			iVar3 = 0;
		}
		if (func_39(14))
		{
			iVar3 = 0;
		}
	}
	else if (unk_0xFA30DFD0084E92FE(Var0.f_4, 1) && unk_0xB731B8C5BCE89836(joaat("ambient_solomon")) == 0)
	{
		if (func_77())
		{
			iVar3 = 0;
		}
		else
		{
			iVar3 = 1;
		}
	}
	else
	{
		iVar3 = Global_19B04.f_1C40[iParam0];
	}
	if (Global_7E87[iParam0] != iVar3)
	{
		bVar1 = true;
	}
	if (unk_0xFA30DFD0084E92FE(Global_7BCC[(iParam0 / 32)], (iParam0 % 32)))
	{
		if (!unk_0xFA30DFD0084E92FE(Global_7BD5[(iParam0 / 32)], (iParam0 % 32)) || (Global_7BDE[iParam0] == 0 && Global_7DA4[iParam0] != 2))
		{
			bVar1 = true;
		}
	}
	if (bVar1)
	{
		if (!Global_7BCB)
		{
		}
		else
		{
			if (!unk_0x86BC948CAD7C61EF(Var0.f_5))
			{
				unk_0x0DE091F0061B5F19(Var0.f_5, Var0.f_3, Var0, 0, 0, 0);
			}
			switch (iVar3)
			{
				case 1:
					if (unk_0xFA30DFD0084E92FE(Var0.f_4, 3))
					{
						bVar7 = true;
					}
					else if (fVar4 > 3f || unk_0x357058E632979E65(unk_0x85B5E0DAAA1A87EB(Var0.f_5)) <= 0.015f)
					{
						iVar8 = unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA());
						iVar9 = unk_0x9911032C958CE1B0(Var0);
						if (iVar8 != iVar9 || iVar8 == 0)
						{
							bVar7 = true;
						}
					}
					if (bVar7)
					{
						if (Var0.f_6 != 0f)
						{
							unk_0x5160ED39E7FD1D94(Var0.f_5, Var0.f_6, 0, 0);
						}
						unk_0xF72F6BB050622804(Var0.f_5, iVar3, 0, 1);
						bVar2 = true;
					}
					break;
				
				case 4:
					if (Var0.f_6 != 0f)
					{
						unk_0x5160ED39E7FD1D94(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0xF72F6BB050622804(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				case 2:
					if (Var0.f_6 != 0f)
					{
						unk_0x5160ED39E7FD1D94(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0xF72F6BB050622804(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				case 0:
					if (Var0.f_6 != 0f)
					{
						unk_0x5160ED39E7FD1D94(Var0.f_5, Var0.f_6, 0, 1);
					}
					unk_0xF72F6BB050622804(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				case 3:
					if (Var0.f_6 != 0f)
					{
						unk_0x5160ED39E7FD1D94(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0xF72F6BB050622804(Var0.f_5, 0, 0, 1);
					bVar2 = true;
					break;
				
				case 5:
					if (Var0.f_6 != 0f)
					{
						unk_0x5160ED39E7FD1D94(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0xF72F6BB050622804(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				case 6:
					if (Var0.f_6 != 0f)
					{
						unk_0x5160ED39E7FD1D94(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0xF72F6BB050622804(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				default:
					if (Var0.f_6 != 0f)
					{
						unk_0x5160ED39E7FD1D94(Var0.f_5, Var0.f_6, 0, 0);
					}
					unk_0xF72F6BB050622804(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				}
		}
		if (bVar2)
		{
			unk_0x7CB6FD92BE491AD9(&(Global_7BCC[(iParam0 / 32)]), (iParam0 % 32));
			Global_7E87[iParam0] = iVar3;
		}
	}
	if (unk_0xFA30DFD0084E92FE(Global_7BD5[(iParam0 / 32)], (iParam0 % 32)) && Global_7DA4[iParam0] != 2)
	{
		unk_0xF0059F27F7BB6680(&(Global_7BCC[(iParam0 / 32)]), (iParam0 % 32));
		func_75(iParam0);
		if (Global_7BDE[iParam0] < 2)
		{
			Global_7BDE[iParam0]++;
		}
	}
}

int func_77()//Position - 0x5273
{
	if (unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
	{
		return 0;
	}
	switch (func_43())
	{
		case 0:
			if (Global_19B04.f_2360.f_63.f_3A[65])
			{
				return 1;
			}
			break;
		
		case 1:
			if (Global_19B04.f_2360.f_63.f_3A[66])
			{
				return 1;
			}
			break;
		
		case 2:
			if (Global_19B04.f_2360.f_63.f_3A[65])
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_78(int iParam0)//Position - 0x52F2
{
	int iVar0;
	
	iVar0 = func_43();
	if (func_79(iParam0))
	{
		return 1;
	}
	if (iParam0 == 49)
	{
		if (iVar0 == 1)
		{
			if (unk_0xFA30DFD0084E92FE(Global_19B04.f_1C20[5], 0) || unk_0xFA30DFD0084E92FE(Global_19B04.f_1C20[6], 0))
			{
				return 0;
			}
		}
		if (func_45(iVar0))
		{
			if (unk_0xFA30DFD0084E92FE(Global_1583F[5], iVar0))
			{
				return 0;
			}
		}
	}
	switch (iParam0)
	{
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
			if (iVar0 == 0)
			{
				if (unk_0xFA30DFD0084E92FE(Global_19B04.f_1C20[0], 0))
				{
					return 0;
				}
			}
			if (func_45(iVar0))
			{
				if (unk_0xFA30DFD0084E92FE(Global_1583F[0], iVar0))
				{
					if (iParam0 != 40)
					{
						return 0;
					}
					else
					{
						return 1;
					}
				}
			}
			break;
		
		case 47:
		case 48:
		case 49:
			if (iVar0 == 1)
			{
				if (unk_0xFA30DFD0084E92FE(Global_19B04.f_1C20[5], 0))
				{
					return 0;
				}
			}
			if (func_45(iVar0))
			{
				if (unk_0xFA30DFD0084E92FE(Global_1583F[5], iVar0))
				{
					return 0;
				}
			}
			break;
		
		case 50:
			if (iVar0 == 1)
			{
				if (unk_0xFA30DFD0084E92FE(Global_19B04.f_1C20[6], 0))
				{
					return 0;
				}
			}
			if (func_45(iVar0))
			{
				if (unk_0xFA30DFD0084E92FE(Global_1583F[6], iVar0))
				{
					return 0;
				}
			}
			break;
		
		case 51:
		case 52:
			if (iVar0 == 2)
			{
				if (unk_0xFA30DFD0084E92FE(Global_19B04.f_1C20[2], 0))
				{
					return 0;
				}
				if (func_45(iVar0))
				{
					if (unk_0xFA30DFD0084E92FE(Global_1583F[2], iVar0))
					{
						return 0;
					}
				}
			}
			else if (iVar0 == 0)
			{
				if (unk_0xFA30DFD0084E92FE(Global_19B04.f_1C20[1], 0))
				{
					return 0;
				}
				if (func_45(iVar0))
				{
					if (unk_0xFA30DFD0084E92FE(Global_1583F[1], iVar0))
					{
						return 0;
					}
				}
			}
			break;
		
		case 53:
			if (iVar0 == 2)
			{
				if (unk_0xFA30DFD0084E92FE(Global_19B04.f_1C20[3], 0))
				{
					return 0;
				}
			}
			if (func_45(iVar0))
			{
				if (unk_0xFA30DFD0084E92FE(Global_1583F[3], iVar0))
				{
					return 0;
				}
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 1;
}

int func_79(int iParam0)//Position - 0x5547
{
	int iVar0;
	
	if ((iParam0 == 40 || iParam0 == 49) || iParam0 == 52)
	{
		if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
			{
				iVar0 = unk_0x6F79ECA8C83E4357(func_80(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 1)));
				switch (iVar0)
				{
					case joaat("utillitruck"):
					case joaat("monster"):
						return 1;
						break;
					}
				}
			}
	}
	return 0;
}

int func_80(int iParam0)//Position - 0x55B3
{
	return iParam0;
}

void func_81(int iParam0, var uParam1)//Position - 0x55BD
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xFA30DFD0084E92FE(uParam1->f_4, 2))
	{
		return;
	}
	iVar0 = func_84();
	iVar1 = func_83(iVar0);
	switch (iParam0)
	{
		case 133:
		case 134:
		case 201:
		case 202:
			if (func_82(iParam0))
			{
				if (iVar1 < 19)
				{
					if (iVar1 >= 7)
					{
						Global_19B04.f_1C40[iParam0] = 0;
						unk_0xF72F6BB050622804(uParam1->f_5, Global_19B04.f_1C40[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 19)
			{
				if (SYSTEM::VDIST(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false), *uParam1) >= 12f)
				{
					Global_19B04.f_1C40[iParam0] = 1;
					unk_0xF72F6BB050622804(uParam1->f_5, Global_19B04.f_1C40[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7)
			{
				if (SYSTEM::VDIST(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false), *uParam1) >= 12f)
				{
					Global_19B04.f_1C40[iParam0] = 1;
					unk_0xF72F6BB050622804(uParam1->f_5, Global_19B04.f_1C40[iParam0], 1, 1);
				}
			}
			break;
		
		case 199:
		case 200:
		case 203:
		case 204:
			if (func_82(iParam0))
			{
				if (iVar1 < 18)
				{
					if (iVar1 >= 7)
					{
						Global_19B04.f_1C40[iParam0] = 0;
						unk_0xF72F6BB050622804(uParam1->f_5, Global_19B04.f_1C40[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 18)
			{
				if (SYSTEM::VDIST(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false), *uParam1) >= 12f)
				{
					Global_19B04.f_1C40[iParam0] = 1;
					unk_0xF72F6BB050622804(uParam1->f_5, Global_19B04.f_1C40[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7)
			{
				if (SYSTEM::VDIST(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false), *uParam1) >= 12f)
				{
					Global_19B04.f_1C40[iParam0] = 1;
					unk_0xF72F6BB050622804(uParam1->f_5, Global_19B04.f_1C40[iParam0], 1, 1);
				}
			}
			break;
		
		case 141:
		case 142:
			if (func_82(iParam0))
			{
				if ((unk_0xB731B8C5BCE89836(joaat("jewelry_heist")) == 0 && unk_0xB731B8C5BCE89836(joaat("jewelry_setup1")) == 0) && !Global_19B04.f_2360.f_63.f_3A[4])
				{
					if (iVar1 < 21)
					{
						if (iVar1 >= 7)
						{
							Global_19B04.f_1C40[iParam0] = 0;
							unk_0xF72F6BB050622804(uParam1->f_5, Global_19B04.f_1C40[iParam0], 1, 1);
						}
					}
					else
					{
						return;
					}
				}
				else if (!Global_19B04.f_2360.f_63.f_3A[4])
				{
					Global_19B04.f_1C40[iParam0] = 0;
					unk_0xF72F6BB050622804(uParam1->f_5, Global_19B04.f_1C40[iParam0], 1, 1);
				}
			}
			else if (Global_19B04.f_2360.f_63.f_3A[4])
			{
				Global_19B04.f_1C40[iParam0] = 1;
				unk_0xF72F6BB050622804(uParam1->f_5, Global_19B04.f_1C40[iParam0], 1, 1);
			}
			else if (unk_0xB731B8C5BCE89836(joaat("jewelry_heist")) == 0 && unk_0xB731B8C5BCE89836(joaat("jewelry_setup1")) == 0)
			{
				if (iVar1 >= 21)
				{
					if (SYSTEM::VDIST(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false), *uParam1) >= 18f)
					{
						Global_19B04.f_1C40[iParam0] = 1;
						unk_0xF72F6BB050622804(uParam1->f_5, Global_19B04.f_1C40[iParam0], 1, 1);
					}
				}
				else if (iVar1 < 7)
				{
					if (SYSTEM::VDIST(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false), *uParam1) >= 18f)
					{
						Global_19B04.f_1C40[iParam0] = 1;
						unk_0xF72F6BB050622804(uParam1->f_5, Global_19B04.f_1C40[iParam0], 1, 1);
					}
				}
			}
			break;
		
		case 145:
		case 146:
		case 143:
		case 144:
			if (func_82(iParam0))
			{
				if (iVar1 < 20)
				{
					if (iVar1 >= 9)
					{
						Global_19B04.f_1C40[iParam0] = 0;
						unk_0xF72F6BB050622804(uParam1->f_5, Global_19B04.f_1C40[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 20)
			{
				if (SYSTEM::VDIST(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false), *uParam1) >= 40f)
				{
					Global_19B04.f_1C40[iParam0] = 1;
					unk_0xF72F6BB050622804(uParam1->f_5, Global_19B04.f_1C40[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 9)
			{
				if (SYSTEM::VDIST(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false), *uParam1) >= 40f)
				{
					Global_19B04.f_1C40[iParam0] = 1;
					unk_0xF72F6BB050622804(uParam1->f_5, Global_19B04.f_1C40[iParam0], 1, 1);
				}
			}
			break;
		
		case 147:
		case 148:
			if (!func_82(iParam0))
			{
				Global_19B04.f_1C40[iParam0] = 1;
				unk_0xF72F6BB050622804(uParam1->f_5, Global_19B04.f_1C40[iParam0], 1, 1);
			}
			break;
		
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
			if (!func_82(iParam0))
			{
				if (unk_0xB731B8C5BCE89836(joaat("assassin_valet")) == 0)
				{
					Global_19B04.f_1C40[iParam0] = 1;
					unk_0xF72F6BB050622804(uParam1->f_5, Global_19B04.f_1C40[iParam0], 1, 1);
				}
			}
			else if (unk_0xB731B8C5BCE89836(joaat("assassin_valet")) > 0)
			{
				Global_19B04.f_1C40[iParam0] = 0;
				unk_0xF72F6BB050622804(uParam1->f_5, Global_19B04.f_1C40[iParam0], 1, 1);
			}
			break;
		
		case 158:
		case 159:
			if (unk_0xB731B8C5BCE89836(Global_147B0[70 /*34*/].f_6) == 0)
			{
				if (!func_82(iParam0))
				{
					Global_19B04.f_1C40[iParam0] = 1;
					unk_0xF72F6BB050622804(uParam1->f_5, Global_19B04.f_1C40[iParam0], 1, 1);
				}
			}
			break;
		
		case 160:
		case 161:
			if (unk_0xB731B8C5BCE89836(joaat("omega2")) == 0)
			{
				if (!func_82(iParam0))
				{
					Global_19B04.f_1C40[iParam0] = 1;
					unk_0xF72F6BB050622804(uParam1->f_5, Global_19B04.f_1C40[iParam0], 1, 1);
				}
			}
			break;
		
		case 70:
		case 71:
		case 72:
			if (!func_82(iParam0) && unk_0xB731B8C5BCE89836(Global_147B0[26 /*34*/].f_6) == 0)
			{
				Global_19B04.f_1C40[iParam0] = 1;
				unk_0xF72F6BB050622804(uParam1->f_5, Global_19B04.f_1C40[iParam0], 1, 1);
			}
			else
			{
				return;
			}
			break;
		
		case 101:
		case 102:
		case 103:
		case 104:
			if (!func_82(iParam0))
			{
				if (unk_0xB731B8C5BCE89836(Global_147B0[43 /*34*/].f_6) == 0)
				{
					Global_19B04.f_1C40[iParam0] = 1;
					unk_0xF72F6BB050622804(uParam1->f_5, Global_19B04.f_1C40[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 190:
		case 191:
			if (!func_82(iParam0))
			{
				Global_19B04.f_1C40[iParam0] = 1;
				unk_0xF72F6BB050622804(uParam1->f_5, Global_19B04.f_1C40[iParam0], 1, 1);
			}
			break;
		
		case 193:
			if (!func_82(iParam0))
			{
				if (unk_0xB731B8C5BCE89836(Global_147B0[93 /*34*/].f_6) > 0)
				{
					Global_19B04.f_1C40[iParam0] = 1;
					unk_0xF72F6BB050622804(uParam1->f_5, Global_19B04.f_1C40[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 198:
			if (!func_82(iParam0))
			{
				Global_19B04.f_1C40[iParam0] = 1;
				unk_0xF72F6BB050622804(uParam1->f_5, Global_19B04.f_1C40[iParam0], 1, 1);
			}
			break;
		
		case 80:
			if (!func_82(iParam0))
			{
				if (unk_0xB731B8C5BCE89836(Global_147B0[8 /*34*/].f_6) == 0 && unk_0xB731B8C5BCE89836(Global_147B0[10 /*34*/].f_6) == 0)
				{
					Global_19B04.f_1C40[iParam0] = 1;
					unk_0xF72F6BB050622804(uParam1->f_5, Global_19B04.f_1C40[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 205:
		case 206:
			if (!func_82(iParam0))
			{
				if (unk_0xB731B8C5BCE89836(Global_147B0[47 /*34*/].f_6) == 0)
				{
					Global_19B04.f_1C40[iParam0] = 1;
					unk_0xF72F6BB050622804(uParam1->f_5, Global_19B04.f_1C40[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 207:
			if (unk_0xB731B8C5BCE89836(Global_147B0[70 /*34*/].f_6) == 0)
			{
				if (!func_82(iParam0))
				{
					Global_19B04.f_1C40[iParam0] = 1;
					unk_0xF72F6BB050622804(uParam1->f_5, Global_19B04.f_1C40[iParam0], 1, 1);
				}
			}
			break;
		
		case 208:
		case 209:
		case 211:
		case 210:
		case 212:
		case 213:
		case 214:
		case 215:
			if (unk_0xB731B8C5BCE89836(Global_147B0[48 /*34*/].f_6) == 0)
			{
				if (!func_82(iParam0))
				{
					Global_19B04.f_1C40[iParam0] = 1;
					unk_0xF72F6BB050622804(uParam1->f_5, Global_19B04.f_1C40[iParam0], 1, 1);
				}
			}
			break;
		
		case 99:
		case 100:
			if (unk_0xB731B8C5BCE89836(Global_147B0[39 /*34*/].f_6) == 0)
			{
				if (!func_82(iParam0))
				{
					Global_19B04.f_1C40[iParam0] = 1;
					unk_0xF72F6BB050622804(uParam1->f_5, Global_19B04.f_1C40[iParam0], 1, 1);
				}
			}
			break;
		
		case 216:
			if (!func_82(iParam0))
			{
				Global_19B04.f_1C40[iParam0] = 1;
				unk_0xF72F6BB050622804(uParam1->f_5, Global_19B04.f_1C40[iParam0], 1, 1);
			}
			break;
		
		case 217:
		case 218:
			if (!func_82(iParam0))
			{
				Global_19B04.f_1C40[iParam0] = 1;
				unk_0xF72F6BB050622804(uParam1->f_5, Global_19B04.f_1C40[iParam0], 1, 1);
			}
			break;
		
		case 219:
		case 220:
		case 221:
		case 222:
			if (func_82(iParam0))
			{
				Global_19B04.f_1C40[iParam0] = 0;
				unk_0xF72F6BB050622804(uParam1->f_5, Global_19B04.f_1C40[iParam0], 1, 1);
			}
			break;
	}
}

bool func_82(int iParam0)//Position - 0x5F58
{
	struct<7> Var0;
	int iVar1;
	
	Var0 = { func_95(iParam0) };
	iVar1 = unk_0x6AAFA9D1E65503EA(Var0.f_5);
	return ((iVar1 == 1 || iVar1 == 4) || iVar1 == 2);
}

int func_83(int iParam0)//Position - 0x5F8C
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_84()//Position - 0x5F9F
{
	var uVar0;
	
	func_94(&uVar0, unk_0xF40D00CD7B81C0A8());
	func_93(&uVar0, unk_0x7E09057438B9D216());
	func_92(&uVar0, unk_0x6E06C0DB9B43570D());
	func_87(&uVar0, unk_0xBE14F159908E4EE5());
	func_86(&uVar0, unk_0xDD6A91E47ED4D0CF());
	func_85(&uVar0, unk_0x4EEB3860BFC44B78());
	return uVar0;
}

void func_85(var uParam0, int iParam1)//Position - 0x5FE5
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

void func_86(var uParam0, int iParam1)//Position - 0x606B
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_87(var uParam0, int iParam1)//Position - 0x609E
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_91(*uParam0);
	iVar1 = func_89(*uParam0);
	if (iParam1 < 1 || iParam1 > func_88(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_88(int iParam0, int iParam1)//Position - 0x60EF
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

int func_89(int iParam0)//Position - 0x6191
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_90(unk_0xFA30DFD0084E92FE(iParam0, 31), -1, 1)) + 2011;
}

int func_90(bool bParam0, int iParam1, int iParam2)//Position - 0x61B6
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_91(int iParam0)//Position - 0x61CD
{
	return iParam0 & 15;
}

void func_92(var uParam0, int iParam1)//Position - 0x61DA
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_93(var uParam0, int iParam1)//Position - 0x6214
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_94(var uParam0, int iParam1)//Position - 0x624F
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

struct<7> func_95(int iParam0)//Position - 0x628B
{
	struct<7> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 133f, -1711f, 29f };
			Var0.f_5 = 1804701345;
			break;
		
		case 1:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -1287.857f, -1115.742f, 7.1401f };
			Var0.f_5 = 1403601067;
			break;
		
		case 2:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 1932.952f, 3725.154f, 32.9944f };
			Var0.f_5 = -2031139496;
			break;
		
		case 3:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 1207.873f, -470.063f, 66.358f };
			Var0.f_5 = 1796834809;
			break;
		
		case 4:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -29.8692f, -148.1571f, 57.2265f };
			Var0.f_5 = 96153298;
			break;
		
		case 5:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -280.7851f, 6232.782f, 31.8455f };
			Var0.f_5 = -281080954;
			break;
		
		case 6:
			Var0.f_3 = joaat("v_ilev_hd_door_l");
			Var0 = { -824f, -187f, 38f };
			Var0 = { -823.2001f, -187.0831f, 37.819f };
			Var0.f_5 = 183249434;
			break;
		
		case 7:
			Var0.f_3 = joaat("v_ilev_hd_door_r");
			Var0 = { -823f, -188f, 38f };
			Var0 = { -822.4442f, -188.3924f, 37.819f };
			Var0.f_5 = 758345384;
			break;
		
		case 8:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 82.3186f, -1392.752f, 29.5261f };
			Var0.f_5 = -1069262641;
			break;
		
		case 9:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 82.3186f, -1390.476f, 29.5261f };
			Var0.f_5 = 1968521986;
			break;
		
		case 10:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 1686.983f, 4821.741f, 42.2131f };
			Var0.f_5 = -2143706301;
			break;
		
		case 11:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 1687.282f, 4819.484f, 42.2131f };
			Var0.f_5 = -1403421822;
			break;
		
		case 12:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 418.637f, -806.457f, 29.6396f };
			Var0.f_5 = -1950137670;
			break;
		
		case 13:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 418.637f, -808.733f, 29.6396f };
			Var0.f_5 = 1226259807;
			break;
		
		case 14:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -1096.661f, 2705.446f, 19.2578f };
			Var0.f_5 = 1090833557;
			break;
		
		case 15:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -1094.965f, 2706.964f, 19.2578f };
			Var0.f_5 = 897332612;
			break;
		
		case 16:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 1196.825f, 2703.221f, 38.3726f };
			Var0.f_5 = 1095946640;
			break;
		
		case 17:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 1199.101f, 2703.221f, 38.3726f };
			Var0.f_5 = 801975945;
			break;
		
		case 18:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -818.7642f, -1079.544f, 11.4781f };
			Var0.f_5 = -167996547;
			break;
		
		case 19:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -816.7932f, -1078.406f, 11.4781f };
			Var0.f_5 = -1935818563;
			break;
		
		case 20:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -0.0564f, 6517.461f, 32.0278f };
			Var0.f_5 = 1891185217;
			break;
		
		case 21:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -1.7253f, 6515.914f, 32.0278f };
			Var0.f_5 = 1236591681;
			break;
		
		case 22:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { -1201.435f, -776.8566f, 17.9918f };
			Var0.f_5 = 1980808685;
			break;
		
		case 23:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { 617.2458f, 2751.022f, 42.7578f };
			Var0.f_5 = 1352749757;
			break;
		
		case 24:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { 127.8201f, -211.8274f, 55.2275f };
			Var0.f_5 = -566554453;
			break;
		
		case 25:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { -3167.75f, 1055.536f, 21.5329f };
			Var0.f_5 = 1284749450;
			break;
		
		case 26:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -716.6754f, -155.42f, 37.6749f };
			Var0.f_5 = 261851994;
			break;
		
		case 27:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -715.6154f, -157.2561f, 37.6749f };
			Var0.f_5 = 217646625;
			break;
		
		case 28:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -157.0924f, -306.4413f, 39.994f };
			Var0.f_5 = 1801139578;
			break;
		
		case 29:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -156.4022f, -304.4366f, 39.994f };
			Var0.f_5 = -2123275866;
			break;
		
		case 30:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -1454.782f, -231.7927f, 50.0565f };
			Var0.f_5 = 1312689981;
			break;
		
		case 31:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -1456.201f, -233.3682f, 50.0565f };
			Var0.f_5 = -595055661;
			break;
		
		case 32:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { 321.81f, 178.36f, 103.68f };
			Var0.f_5 = -265260897;
			break;
		
		case 33:
			Var0.f_3 = -1212951353;
			Var0 = { 1859.89f, 3749.79f, 33.18f };
			Var0.f_5 = -1284867488;
			break;
		
		case 34:
			Var0.f_3 = -1212951353;
			Var0 = { -289.1752f, 6199.112f, 31.637f };
			Var0.f_5 = 302307081;
			break;
		
		case 35:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { -1155.454f, -1424.008f, 5.0461f };
			Var0.f_5 = -681886015;
			break;
		
		case 36:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { 1321.286f, -1650.597f, 52.3663f };
			Var0.f_5 = -2086556500;
			break;
		
		case 37:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { -3167.789f, 1074.767f, 20.9209f };
			Var0.f_5 = -1496386696;
			break;
		
		case 38:
			Var0.f_3 = joaat("v_ilev_mm_doorm_l");
			Var0 = { -817f, 179f, 73f };
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 0);
			Var0.f_5 = -2097039789;
			break;
		
		case 39:
			Var0.f_3 = joaat("v_ilev_mm_doorm_r");
			Var0 = { -816f, 178f, 73f };
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 0);
			Var0.f_5 = -2127416656;
			break;
		
		case 40:
			Var0.f_3 = joaat("prop_ld_garaged_01");
			Var0 = { -815f, 186f, 73f };
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 0);
			Var0.f_5 = -1986583853;
			Var0.f_6 = 6.5f;
			break;
		
		case 41:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = { -797f, 177f, 73f };
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 0);
			Var0.f_5 = 776026812;
			break;
		
		case 42:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = { -795f, 178f, 73f };
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 0);
			Var0.f_5 = 698422331;
			break;
		
		case 43:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = { -793f, 181f, 73f };
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 0);
			Var0.f_5 = 535076355;
			break;
		
		case 44:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = { -794f, 183f, 73f };
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 0);
			Var0.f_5 = 474675599;
			break;
		
		case 45:
			Var0.f_3 = joaat("prop_bh1_48_gate_1");
			Var0 = { -849f, 179f, 70f };
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 0);
			Var0.f_5 = -1978427516;
			break;
		
		case 46:
			Var0.f_3 = joaat("v_ilev_mm_windowwc");
			Var0 = { -802.7333f, 167.5041f, 77.5824f };
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 0);
			Var0.f_5 = -1700375831;
			break;
		
		case 47:
			Var0.f_3 = joaat("v_ilev_fa_frontdoor");
			Var0 = { -14f, -1441f, 31f };
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 0);
			Var0.f_5 = 613961892;
			break;
		
		case 48:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = { -15f, -1427f, 31f };
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 0);
			Var0.f_5 = -272570634;
			break;
		
		case 49:
			Var0.f_3 = joaat("prop_sc1_21_g_door_01");
			Var0 = { -25.28f, -1431.06f, 30.84f };
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 0);
			Var0.f_5 = -1040675994;
			break;
		
		case 50:
			Var0.f_3 = joaat("v_ilev_fh_frontdoor");
			Var0 = { 7.52f, 539.53f, 176.18f };
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 0);
			Var0.f_5 = 1201219326;
			break;
		
		case 51:
			Var0.f_3 = joaat("v_ilev_trevtraildr");
			Var0 = { 1973f, 3815f, 34f };
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 0);
			Var0.f_5 = 1736361794;
			break;
		
		case 52:
			Var0.f_3 = joaat("prop_cs4_10_tr_gd_01");
			Var0 = { 1972.787f, 3824.554f, 32.5831f };
			Var0.f_5 = 1113956670;
			Var0.f_6 = 12f;
			break;
		
		case 53:
			Var0.f_3 = joaat("v_ilev_trev_doorfront");
			Var0 = { -1150f, -1521f, 11f };
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 0);
			Var0.f_5 = -1361617046;
			break;
	}
	switch (iParam0)
	{
		case 54:
			Var0.f_3 = joaat("prop_com_ls_door_01");
			Var0 = { -1145.9f, -1991.14f, 14.18f };
			Var0.f_5 = -1871080926;
			Var0.f_6 = 25f;
			break;
		
		case 55:
			Var0.f_3 = joaat("prop_id2_11_gdoor");
			Var0 = { 723.12f, -1088.83f, 23.28f };
			Var0.f_5 = 1168079979;
			Var0.f_6 = 25f;
			break;
		
		case 56:
			Var0.f_3 = joaat("prop_com_ls_door_01");
			Var0 = { -356.09f, -134.77f, 40.01f };
			Var0.f_5 = 1206354175;
			Var0.f_6 = 25f;
			break;
		
		case 57:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 108.8502f, 6617.876f, 32.673f };
			Var0.f_5 = -1038180727;
			Var0.f_6 = 25f;
			break;
		
		case 58:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 114.3206f, 6623.226f, 32.7161f };
			Var0.f_5 = 1200466273;
			Var0.f_6 = 25f;
			break;
		
		case 59:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 1182.305f, 2645.242f, 38.807f };
			Var0.f_5 = 1391004277;
			Var0.f_6 = 25f;
			break;
		
		case 60:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 1174.654f, 2645.242f, 38.6826f };
			Var0.f_5 = -459199009;
			Var0.f_6 = 25f;
			break;
		
		case 225:
			Var0.f_3 = -427498890;
			Var0 = { -205.7007f, -1310.692f, 30.2957f };
			Var0.f_5 = -288764223;
			Var0.f_6 = 25f;
			break;
		
		case 61:
			Var0.f_3 = joaat("v_ilev_janitor_frontdoor");
			Var0 = { -107.5401f, -9.0258f, 70.6696f };
			Var0.f_5 = -252283844;
			break;
		
		case 62:
			Var0.f_3 = joaat("v_ilev_ss_door8");
			Var0 = { 717f, -975f, 25f };
			Var0.f_5 = -826072862;
			break;
		
		case 63:
			Var0.f_3 = joaat("v_ilev_ss_door7");
			Var0 = { 719f, -975f, 25f };
			Var0.f_5 = 763780711;
			break;
		
		case 64:
			Var0.f_3 = joaat("v_ilev_ss_door02");
			Var0 = { 709.9813f, -963.5311f, 30.5453f };
			Var0.f_5 = -874851305;
			break;
		
		case 65:
			Var0.f_3 = joaat("v_ilev_ss_door03");
			Var0 = { 709.9894f, -960.6675f, 30.5453f };
			Var0.f_5 = -1480820165;
			break;
		
		case 66:
			Var0.f_3 = joaat("v_ilev_store_door");
			Var0 = { 707.8046f, -962.4564f, 30.5453f };
			Var0.f_5 = 949391213;
			break;
		
		case 67:
			Var0.f_3 = -1212951353;
			Var0 = { 1393f, 3599f, 35f };
			Var0.f_5 = 212192855;
			break;
		
		case 68:
			Var0.f_3 = -1212951353;
			Var0 = { 1395f, 3600f, 35f };
			Var0.f_5 = -126474752;
			break;
		
		case 69:
			Var0.f_3 = joaat("v_ilev_ss_door04");
			Var0 = { 1387f, 3614f, 39f };
			Var0.f_5 = 1765671336;
			break;
		
		case 70:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1083.547f, -1975.435f, 31.6222f };
			Var0.f_5 = 792295685;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 2);
			break;
		
		case 71:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1065.237f, -2006.079f, 32.2329f };
			Var0.f_5 = 563273144;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 2);
			break;
		
		case 72:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1085.307f, -2018.561f, 41.6289f };
			Var0.f_5 = -726993043;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 2);
			break;
		
		case 73:
			Var0.f_3 = joaat("v_ilev_bank4door02");
			Var0 = { -111f, 6464f, 32f };
			Var0.f_5 = 178228075;
			break;
		
		case 74:
			Var0.f_3 = joaat("v_ilev_bank4door01");
			Var0 = { -110f, 6462f, 32f };
			Var0.f_5 = 1852297978;
			break;
		
		case 75:
			Var0.f_3 = joaat("v_ilev_lester_doorfront");
			Var0 = { 1274f, -1721f, 55f };
			Var0.f_5 = -565026078;
			break;
		
		case 76:
			Var0.f_3 = joaat("v_ilev_lester_doorveranda");
			Var0 = { 1271.89f, -1707.57f, 53.79f };
			Var0.f_5 = 1646172266;
			break;
		
		case 77:
			Var0.f_3 = joaat("v_ilev_lester_doorveranda");
			Var0 = { 1270.77f, -1708.1f, 53.75f };
			Var0.f_5 = 204467342;
			break;
		
		case 78:
			Var0.f_3 = joaat("v_ilev_deviantfrontdoor");
			Var0 = { -127.5f, -1456.18f, 37.94f };
			Var0.f_5 = 2047070410;
			break;
		
		case 79:
			Var0.f_3 = joaat("prop_com_gar_door_01");
			Var0 = { 483.56f, -1316.08f, 32.18f };
			Var0.f_5 = 1417775309;
			break;
		
		case 80:
			Var0.f_3 = joaat("v_ilev_cs_door");
			Var0 = { 483f, -1312f, 29f };
			Var0.f_5 = -106474626;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 2);
			break;
		
		case 81:
			Var0.f_3 = joaat("prop_strip_door_01");
			Var0 = { 128f, -1299f, 29f };
			Var0.f_5 = 1840510598;
			break;
		
		case 82:
			Var0.f_3 = joaat("prop_magenta_door");
			Var0 = { 96f, -1285f, 29f };
			Var0.f_5 = 1382825971;
			break;
		
		case 83:
			Var0.f_3 = joaat("prop_motel_door_09");
			Var0 = { 549f, -1773f, 34f };
			Var0.f_5 = 232536303;
			break;
		
		case 84:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = { 974f, -1839f, 36f };
			Var0.f_5 = 1267246609;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 3);
			break;
		
		case 85:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = { 977f, -105f, 75f };
			Var0.f_5 = -1900237971;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 3);
			break;
		
		case 86:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1391f, 1163f, 114f };
			Var0.f_5 = 2077901353;
			break;
		
		case 87:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1391f, 1161f, 114f };
			Var0.f_5 = -2102079126;
			break;
		
		case 88:
			Var0.f_3 = joaat("prop_cs6_03_door_l");
			Var0 = { 1396f, 1143f, 115f };
			Var0.f_5 = -1905793212;
			break;
		
		case 89:
			Var0.f_3 = joaat("prop_cs6_03_door_r");
			Var0 = { 1396f, 1141f, 115f };
			Var0.f_5 = -1797032505;
			break;
		
		case 90:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1409f, 1146f, 114f };
			Var0.f_5 = -62235167;
			break;
		
		case 91:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1409f, 1148f, 114f };
			Var0.f_5 = -1727188163;
			break;
		
		case 92:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1408f, 1159f, 114f };
			Var0.f_5 = -562748873;
			break;
		
		case 93:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1408f, 1161f, 114f };
			Var0.f_5 = 1976429759;
			break;
		
		case 94:
			Var0.f_3 = joaat("prop_gar_door_01");
			Var0 = { -1067f, -1666f, 5f };
			Var0.f_5 = 1341041543;
			break;
		
		case 95:
			Var0.f_3 = joaat("prop_gar_door_02");
			Var0 = { -1065f, -1669f, 5f };
			Var0.f_5 = -1631467220;
			break;
		
		case 96:
			Var0.f_3 = joaat("prop_map_door_01");
			Var0 = { -1104.66f, -1638.48f, 4.68f };
			Var0.f_5 = -1788473129;
			break;
		
		case 97:
			Var0.f_3 = joaat("v_ilev_fib_door1");
			Var0 = { -31.72f, -1101.85f, 26.57f };
			Var0.f_5 = -1831288286;
			break;
		
		case 98:
			Var0.f_3 = joaat("v_ilev_tort_door");
			Var0 = { 134.4f, -2204.1f, 7.52f };
			Var0.f_5 = 963876966;
			break;
		
		case 99:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = { 3628f, 3747f, 28f };
			Var0.f_5 = 1773088812;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 2);
			break;
		
		case 100:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = { 3621f, 3752f, 28f };
			Var0.f_5 = -1332101528;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 2);
			break;
		
		case 101:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = { -608.73f, -1610.32f, 27.16f };
			Var0.f_5 = -1811763714;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 2);
			break;
		
		case 102:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = { -611.32f, -1610.09f, 27.16f };
			Var0.f_5 = 1608500665;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 2);
			break;
		
		case 103:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = { -592.94f, -1631.58f, 27.16f };
			Var0.f_5 = -1456048340;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 2);
			break;
		
		case 104:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = { -592.71f, -1628.99f, 27.16f };
			Var0.f_5 = 943854909;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 2);
			break;
		
		case 105:
			Var0.f_3 = joaat("v_ilev_ss_door04");
			Var0 = { 1991f, 3053f, 47f };
			Var0.f_5 = -89065356;
			break;
		
		case 106:
			Var0.f_3 = 479144380;
			Var0 = { 1988.353f, 3054.411f, 47.3204f };
			Var0.f_5 = -925491840;
			break;
		
		case 107:
			Var0.f_3 = joaat("prop_epsilon_door_l");
			Var0 = { -700.17f, 47.31f, 44.3f };
			Var0.f_5 = 1999872275;
			break;
		
		case 108:
			Var0.f_3 = joaat("prop_epsilon_door_r");
			Var0 = { -697.94f, 48.35f, 44.3f };
			Var0.f_5 = 1999872275;
			break;
		
		case 109:
			Var0.f_3 = -1230442770;
			Var0 = { 241.3574f, 361.0488f, 105.8963f };
			Var0.f_5 = 1538555582;
			break;
		
		case 110:
			Var0.f_3 = joaat("prop_ch2_09c_garage_door");
			Var0 = { -689.11f, 506.97f, 110.64f };
			Var0.f_5 = -961994186;
			break;
		
		case 111:
			Var0.f_3 = joaat("v_ilev_door_orangesolid");
			Var0 = { -1055.96f, -236.43f, 44.17f };
			Var0.f_5 = -1772472848;
			break;
		
		case 112:
			Var0.f_3 = joaat("prop_magenta_door");
			Var0 = { 29f, 3661f, 41f };
			Var0.f_5 = -46374650;
			break;
		
		case 113:
			Var0.f_3 = joaat("prop_cs4_05_tdoor");
			Var0 = { 32f, 3667f, 41f };
			Var0.f_5 = -358302761;
			break;
		
		case 114:
			Var0.f_3 = joaat("v_ilev_housedoor1");
			Var0 = { 87f, -1959f, 21f };
			Var0.f_5 = -1237936041;
			break;
		
		case 115:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = { 0f, -1823f, 30f };
			Var0.f_5 = 1487374207;
			break;
		
		case 116:
			Var0.f_3 = joaat("p_cut_door_03");
			Var0 = { 23.34f, -1897.6f, 23.05f };
			Var0.f_5 = -199126299;
			break;
		
		case 117:
			Var0.f_3 = joaat("p_cut_door_02");
			Var0 = { 524.2f, 3081.14f, 41.16f };
			Var0.f_5 = -897071863;
			break;
		
		case 118:
			Var0.f_3 = joaat("v_ilev_po_door");
			Var0 = { -1910.58f, -576.01f, 19.25f };
			Var0.f_5 = -864465775;
			break;
		
		case 119:
			Var0.f_3 = joaat("prop_ss1_10_door_l");
			Var0 = { -720.39f, 256.86f, 80.29f };
			Var0.f_5 = -208439480;
			break;
		
		case 120:
			Var0.f_3 = joaat("prop_ss1_10_door_r");
			Var0 = { -718.42f, 257.79f, 80.29f };
			Var0.f_5 = -1001088805;
			break;
		
		case 121:
			Var0.f_3 = joaat("v_ilev_fibl_door02");
			Var0 = { 106.38f, -742.7f, 46.18f };
			Var0.f_5 = 756894459;
			break;
		
		case 122:
			Var0.f_3 = joaat("v_ilev_fibl_door01");
			Var0 = { 105.76f, -746.65f, 46.18f };
			Var0.f_5 = 476981677;
			break;
		
		case 123:
			Var0.f_3 = joaat("v_ilev_ct_door01");
			Var0 = { -2343.53f, 3265.37f, 32.96f };
			Var0.f_5 = 2081647379;
			break;
		
		case 124:
			Var0.f_3 = joaat("v_ilev_ct_door01");
			Var0 = { -2342.23f, 3267.62f, 32.96f };
			Var0.f_5 = 2081647379;
			break;
		
		case 125:
			Var0.f_3 = joaat("ap1_02_door_l");
			Var0 = { -1041.933f, -2748.167f, 22.0308f };
			Var0.f_5 = 169965357;
			break;
		
		case 126:
			Var0.f_3 = joaat("ap1_02_door_r");
			Var0 = { -1044.841f, -2746.489f, 22.0308f };
			Var0.f_5 = 311232516;
			break;
		
		case 128:
			Var0.f_3 = joaat("v_ilev_fb_doorshortl");
			Var0 = { -1045.12f, -232.004f, 39.4379f };
			Var0.f_5 = -1563127729;
			break;
		
		case 129:
			Var0.f_3 = joaat("v_ilev_fb_doorshortr");
			Var0 = { -1046.516f, -229.3581f, 39.4379f };
			Var0.f_5 = 759145763;
			break;
		
		case 130:
			Var0.f_3 = joaat("v_ilev_fb_door01");
			Var0 = { -1083.62f, -260.4167f, 38.1867f };
			Var0.f_5 = -84399179;
			break;
		
		case 131:
			Var0.f_3 = joaat("v_ilev_fb_door02");
			Var0 = { -1080.974f, -259.0204f, 38.1867f };
			Var0.f_5 = -461898059;
			break;
		
		case 127:
			Var0.f_3 = joaat("v_ilev_gtdoor");
			Var0 = { -1042.57f, -240.6f, 38.11f };
			Var0.f_5 = 1259065971;
			break;
		
		case 132:
			Var0.f_3 = joaat("prop_damdoor_01");
			Var0 = { 1385.258f, -2079.949f, 52.7638f };
			Var0.f_5 = -884051216;
			break;
		
		case 133:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { 1656.57f, 4849.66f, 42.35f };
			Var0.f_5 = 243782214;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 2);
			break;
		
		case 134:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { 1656.25f, 4852.24f, 42.35f };
			Var0.f_5 = 714115627;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 2);
			break;
		
		case 135:
			Var0.f_3 = -1184516519;
			Var0 = { -1051.402f, -474.6847f, 36.6199f };
			Var0.f_5 = 1668106976;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 1);
			break;
		
		case 136:
			Var0.f_3 = -1184516519;
			Var0 = { -1049.285f, -476.6376f, 36.7584f };
			Var0.f_5 = 1382347031;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 1);
			break;
		
		case 137:
			Var0.f_3 = 1230099731;
			Var0 = { -1210.957f, -580.8765f, 27.2373f };
			Var0.f_5 = -966790948;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 1);
			break;
		
		case 138:
			Var0.f_3 = 1230099731;
			Var0 = { -1212.445f, -578.4401f, 27.2373f };
			Var0.f_5 = -2068750132;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 1);
			break;
		
		case 139:
			Var0.f_3 = joaat("v_ilev_roc_door4");
			Var0 = { -565.1712f, 276.6259f, 83.2863f };
			Var0.f_5 = -1716533184;
			break;
		
		case 140:
			Var0.f_3 = joaat("v_ilev_roc_door4");
			Var0 = { -561.2863f, 293.5043f, 87.7771f };
			Var0.f_5 = 2146505927;
			break;
		
		case 141:
			Var0.f_3 = joaat("p_jewel_door_l");
			Var0 = { -631.96f, -236.33f, 38.21f };
			Var0.f_5 = 1874948872;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 2);
			break;
		
		case 142:
			Var0.f_3 = joaat("p_jewel_door_r1");
			Var0 = { -630.43f, -238.44f, 38.21f };
			Var0.f_5 = -1965020851;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 2);
			break;
		
		case 145:
			Var0.f_3 = -1743257725;
			Var0 = { 231.62f, 216.23f, 106.4f };
			Var0.f_5 = 1951546856;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 2);
			break;
		
		case 146:
			Var0.f_3 = -1743257725;
			Var0 = { 232.72f, 213.88f, 106.4f };
			Var0.f_5 = -431382051;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 2);
			break;
		
		case 143:
			Var0.f_3 = 110411286;
			Var0 = { 258.32f, 203.84f, 106.43f };
			Var0.f_5 = -293975210;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 2);
			break;
		
		case 144:
			Var0.f_3 = 110411286;
			Var0 = { 260.76f, 202.95f, 106.43f };
			Var0.f_5 = -785215289;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 2);
			break;
		
		case 148:
			Var0.f_3 = -222270721;
			Var0 = { 256.31f, 220.66f, 106.43f };
			Var0.f_5 = -366143778;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 2);
			break;
		
		case 147:
			Var0.f_3 = joaat("v_ilev_bk_door");
			Var0 = { 266.36f, 217.57f, 110.43f };
			Var0.f_5 = 440819155;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 2);
			break;
		
		case 149:
			Var0.f_3 = joaat("v_ilev_shrf2door");
			Var0 = { -442.66f, 6015.222f, 31.8663f };
			Var0.f_5 = -588495243;
			break;
		
		case 150:
			Var0.f_3 = joaat("v_ilev_shrf2door");
			Var0 = { -444.4985f, 6017.06f, 31.8663f };
			Var0.f_5 = 1815504139;
			break;
		
		case 151:
			Var0.f_3 = joaat("v_ilev_shrfdoor");
			Var0 = { 1855.685f, 3683.93f, 34.5928f };
			Var0.f_5 = 1344911780;
			break;
		
		case 152:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1223.35f, -172.41f, 39.98f };
			Var0.f_5 = -320891223;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 2);
			break;
		
		case 153:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1220.93f, -173.68f, 39.98f };
			Var0.f_5 = 1511747875;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 2);
			break;
		
		case 154:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1211.99f, -190.57f, 39.98f };
			Var0.f_5 = -1517722103;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 2);
			break;
		
		case 155:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1213.26f, -192.98f, 39.98f };
			Var0.f_5 = -1093199712;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 2);
			break;
		
		case 156:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1217.77f, -201.54f, 39.98f };
			Var0.f_5 = 1902048492;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 2);
			break;
		
		case 157:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1219.04f, -203.95f, 39.98f };
			Var0.f_5 = -444768985;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 2);
			break;
		
		case 158:
			Var0.f_3 = joaat("prop_ch3_04_door_01l");
			Var0 = { 2514.32f, -317.34f, 93.32f };
			Var0.f_5 = 404057594;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 2);
			break;
		
		case 159:
			Var0.f_3 = joaat("prop_ch3_04_door_01r");
			Var0 = { 2512.42f, -319.26f, 93.32f };
			Var0.f_5 = -1417472813;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 2);
			break;
		
		case 160:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_l");
			Var0 = { 2333.23f, 2574.97f, 47.03f };
			Var0.f_5 = -1376084479;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 2);
			break;
		
		case 161:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_r");
			Var0 = { 2329.65f, 2576.64f, 47.03f };
			Var0.f_5 = 457472151;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 2);
			break;
		
		case 162:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 16.1279f, -1114.605f, 29.9469f };
			Var0.f_5 = 1071759151;
			break;
		
		case 163:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 18.572f, -1115.495f, 29.9469f };
			Var0.f_5 = -2119023917;
			break;
		
		case 165:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 1698.176f, 3751.506f, 34.8553f };
			Var0.f_5 = -1488490473;
			break;
		
		case 166:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 1699.937f, 3753.42f, 34.8553f };
			Var0.f_5 = -511187813;
			break;
		
		case 167:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 244.7274f, -44.0791f, 70.91f };
			Var0.f_5 = -248569395;
			break;
		
		case 168:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 243.8379f, -46.5232f, 70.91f };
			Var0.f_5 = 989443413;
			break;
		
		case 169:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 845.3624f, -1024.539f, 28.3448f };
			Var0.f_5 = 2022251829;
			break;
		
		case 170:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 842.7684f, -1024.539f, 23.3448f };
			Var0.f_5 = 649820567;
			break;
		
		case 171:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -326.1122f, 6075.27f, 31.6047f };
			Var0.f_5 = 537455378;
			break;
		
		case 172:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -324.273f, 6077.109f, 31.6047f };
			Var0.f_5 = 1121431731;
			break;
		
		case 173:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -665.2424f, -944.3256f, 21.9792f };
			Var0.f_5 = -1437380438;
			break;
		
		case 174:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -662.6414f, -944.3256f, 21.9792f };
			Var0.f_5 = -946336965;
			break;
		
		case 175:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -1313.826f, -389.1259f, 36.8457f };
			Var0.f_5 = 1893144650;
			break;
		
		case 176:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -1314.465f, -391.6472f, 36.8457f };
			Var0.f_5 = 435841678;
			break;
		
		case 177:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -1114.009f, 2689.77f, 18.7041f };
			Var0.f_5 = 948508314;
			break;
		
		case 178:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -1112.071f, 2691.505f, 18.7041f };
			Var0.f_5 = -1796714665;
			break;
		
		case 179:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -3164.845f, 1081.392f, 20.9887f };
			Var0.f_5 = -1155247245;
			break;
		
		case 180:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -3163.812f, 1083.778f, 20.9887f };
			Var0.f_5 = 782482084;
			break;
		
		case 181:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 2570.905f, 303.3556f, 108.8848f };
			Var0.f_5 = -1194470801;
			break;
		
		case 182:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 2568.304f, 303.3556f, 108.8848f };
			Var0.f_5 = -2129698061;
			break;
		
		case 183:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 813.1779f, -2148.27f, 29.7689f };
			Var0.f_5 = 1071759151;
			break;
		
		case 184:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 810.5769f, -2148.27f, 29.7689f };
			Var0.f_5 = -2119023917;
			break;
		
		case 164:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = { 6.8179f, -1098.209f, 29.9469f };
			Var0.f_5 = 1487704245;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 3);
			break;
		
		case 185:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = { 827.5342f, -2160.493f, 29.7688f };
			Var0.f_5 = 1529812051;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 3);
			break;
		
		case 186:
			Var0.f_3 = joaat("prop_lrggate_01c_l");
			Var0 = { -1107.01f, 289.38f, 64.76f };
			Var0.f_5 = 904342475;
			break;
		
		case 187:
			Var0.f_3 = joaat("prop_lrggate_01c_r");
			Var0 = { -1101.62f, 290.36f, 64.76f };
			Var0.f_5 = -795418380;
			break;
		
		case 188:
			Var0.f_3 = joaat("prop_lrggate_01c_l");
			Var0 = { -1138.64f, 300.82f, 67.18f };
			Var0.f_5 = -1502457334;
			break;
		
		case 189:
			Var0.f_3 = joaat("prop_lrggate_01c_r");
			Var0 = { -1137.05f, 295.59f, 67.18f };
			Var0.f_5 = -1994188940;
			break;
		
		case 190:
			Var0.f_3 = joaat("v_ilev_bl_doorel_l");
			Var0 = { -2053.16f, 3239.49f, 30.5f };
			Var0.f_5 = -621770121;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 2);
			break;
		
		case 191:
			Var0.f_3 = joaat("v_ilev_bl_doorel_r");
			Var0 = { -2054.39f, 3237.23f, 30.5f };
			Var0.f_5 = 1018580481;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 2);
			break;
		
		case 192:
			Var0.f_3 = joaat("v_ilev_cbankcountdoor01");
			Var0 = { -108.91f, 6469.11f, 31.91f };
			Var0.f_5 = 421926217;
			break;
		
		case 193:
			Var0.f_3 = joaat("prop_fnclink_03gate5");
			Var0 = { -182.91f, 6168.37f, 32.14f };
			Var0.f_5 = -1331552374;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 2);
			break;
	}
	switch (iParam0)
	{
		case 196:
			Var0.f_3 = joaat("v_ilev_csr_door_l");
			Var0 = { -59.89f, -1092.95f, 26.88f };
			Var0.f_5 = -293141277;
			break;
		
		case 197:
			Var0.f_3 = joaat("v_ilev_csr_door_r");
			Var0 = { -60.55f, -1094.75f, 26.89f };
			Var0.f_5 = 506750037;
			break;
		
		case 194:
			Var0.f_3 = joaat("v_ilev_csr_door_l");
			Var0 = { -39.13f, -1108.22f, 26.72f };
			Var0.f_5 = 1496005418;
			break;
		
		case 195:
			Var0.f_3 = joaat("v_ilev_csr_door_r");
			Var0 = { -37.33f, -1108.87f, 26.72f };
			Var0.f_5 = -1863079210;
			break;
		
		case 198:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1943.73f, 3803.63f, 32.31f };
			Var0.f_5 = -2018911784;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 2);
			break;
		
		case 199:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { 316.39f, -276.49f, 54.52f };
			Var0.f_5 = -93934272;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 2);
			break;
		
		case 200:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { 313.96f, -275.6f, 54.52f };
			Var0.f_5 = 667682830;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 2);
			break;
		
		case 201:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { -2965.71f, 484.22f, 16.05f };
			Var0.f_5 = 1876735830;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 2);
			break;
		
		case 202:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { -2965.82f, 481.63f, 16.05f };
			Var0.f_5 = -2112857171;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 2);
			break;
		
		case 205:
			Var0.f_3 = joaat("v_ilev_abbmaindoor");
			Var0 = { 962.1f, -2183.83f, 31.06f };
			Var0.f_5 = 2046930518;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 2);
			break;
		
		case 206:
			Var0.f_3 = joaat("v_ilev_abbmaindoor2");
			Var0 = { 961.79f, -2187.08f, 31.06f };
			Var0.f_5 = 1208502884;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 2);
			break;
		
		case 207:
			Var0.f_3 = joaat("prop_ch3_04_door_02");
			Var0 = { 2508.43f, -336.63f, 115.76f };
			Var0.f_5 = 1986432421;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 2);
			break;
		
		case 208:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2255.19f, 322.26f, 184.93f };
			Var0.f_5 = -722798986;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 2);
			break;
		
		case 209:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2254.06f, 319.7f, 184.93f };
			Var0.f_5 = 204301578;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 2);
			break;
		
		case 210:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2301.13f, 336.91f, 184.93f };
			Var0.f_5 = -320140460;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 2);
			break;
		
		case 211:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2298.57f, 338.05f, 184.93f };
			Var0.f_5 = 65222916;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 2);
			break;
		
		case 212:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2222.32f, 305.86f, 184.93f };
			Var0.f_5 = -920027322;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 2);
			break;
		
		case 213:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2221.19f, 303.3f, 184.93f };
			Var0.f_5 = -58432001;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 2);
			break;
		
		case 214:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2280.6f, 265.43f, 184.93f };
			Var0.f_5 = -2007378629;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 2);
			break;
		
		case 215:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2278.04f, 266.57f, 184.93f };
			Var0.f_5 = 418772613;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 2);
			break;
		
		case 216:
			Var0.f_3 = joaat("prop_gar_door_04");
			Var0 = { 778.31f, -1867.49f, 30.66f };
			Var0.f_5 = 1679064921;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 2);
			break;
		
		case 217:
			Var0.f_3 = joaat("prop_gate_tep_01_l");
			Var0 = { -721.35f, 91.01f, 56.68f };
			Var0.f_5 = 412198396;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 2);
			break;
		
		case 218:
			Var0.f_3 = joaat("prop_gate_tep_01_r");
			Var0 = { -728.84f, 88.64f, 56.68f };
			Var0.f_5 = -1053755588;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 2);
			break;
		
		case 219:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = { -2287.62f, 363.9f, 174.93f };
			Var0.f_5 = -53446139;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 2);
			break;
		
		case 220:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = { -2289.78f, 362.91f, 174.93f };
			Var0.f_5 = 1333960556;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 2);
			break;
		
		case 221:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = { -2289.86f, 362.88f, 174.93f };
			Var0.f_5 = -41786493;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 2);
			break;
		
		case 222:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = { -2292.01f, 361.89f, 174.93f };
			Var0.f_5 = 1750120734;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 2);
			break;
		
		case 223:
			Var0.f_3 = joaat("prop_fnclink_07gate1");
			Var0 = { 1803.94f, 3929.01f, 33.72f };
			Var0.f_5 = 1661506222;
			break;
		
		case 203:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { -348.81f, -47.26f, 49.39f };
			Var0.f_5 = -2116116146;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 2);
			break;
		
		case 204:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { -351.26f, -46.41f, 49.39f };
			Var0.f_5 = -74083138;
			unk_0xF0059F27F7BB6680(&(Var0.f_4), 2);
			break;
		
		case 224:
			Var0.f_3 = joaat("prop_abat_slide");
			Var0 = { 962.9084f, -2105.814f, 34.6432f };
			Var0.f_5 = -1670085357;
			break;
	}
	return Var0;
}

int func_96()//Position - 0x8E95
{
	if ((func_9() == -1 || func_9() == 999) && !func_97() == 0)
	{
		return 1;
	}
	return 0;
}

int func_97()//Position - 0x8EC5
{
	return Global_62BE;
}

void func_98(int iParam0, var uParam1)//Position - 0x8ED0
{
	int iVar0;
	int iVar1;
	
	if (*uParam1 == -99)
	{
		*uParam1 = unk_0x105601648511CC64();
	}
	if (unk_0x2DA8CA50A72528FB(iParam0))
	{
		iVar0 = (unk_0x105601648511CC64() - *uParam1);
		if (iVar0 < 5000)
		{
			iVar1 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(iVar0) / 1000f));
			if ((iVar1 * 1000 - iVar0) < 500)
			{
				if (unk_0xB1D6718ACE798CBB(iParam0) != 255)
				{
					unk_0x7781946F1FC054FA(iParam0, 255);
				}
			}
			else if (unk_0xB1D6718ACE798CBB(iParam0) != 0)
			{
				unk_0x7781946F1FC054FA(iParam0, 0);
			}
		}
		else if (*uParam1 != -100)
		{
			*uParam1 = -100;
			if (unk_0xB1D6718ACE798CBB(iParam0) != 255)
			{
				unk_0x7781946F1FC054FA(iParam0, 255);
			}
		}
	}
}

void func_99(int iParam0)//Position - 0x8F6F
{
	switch (iParam0)
	{
		case 0:
			if (Global_19B04.f_6186.f_2 < 3)
			{
				if (!unk_0x5107E30005FCFEA8())
				{
					func_100(func_101(iParam0), -1);
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
					func_100(func_101(iParam0), -1);
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
					func_100(func_101(iParam0), -1);
					Global_19B04.f_6186.f_4++;
					unk_0xF0059F27F7BB6680(&Global_19B00, 2);
				}
			}
			break;
	}
}

void func_100(char* sParam0, int iParam1)//Position - 0x9050
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, true, iParam1);
}

char* func_101(int iParam0)//Position - 0x9067
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

void func_102()//Position - 0x90AB
{
	if (unk_0xF1B911222059B1A1(iLocal_62))
	{
		func_48(joaat("rc_wallets_recovered"), 1);
		if (!unk_0x36CEFBE9B745A58D(iLocal_67[0]))
		{
			iLocal_122 = func_162(iLocal_67[0], 0, 145);
		}
		func_103(&uLocal_148);
		fLocal_124 = SYSTEM::VDIST(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), func_241());
		SYSTEM::SETTIMERA(0);
		iLocal_45 = 10;
	}
	if (unk_0xA901403F1DB7A780(iLocal_62))
	{
		if (SYSTEM::VDIST(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), unk_0x85EA1A40FC3A6769(iLocal_62)) > 200f)
		{
			func_153();
		}
	}
}

void func_103(var uParam0)//Position - 0x912C
{
	*uParam0 = -99;
}

void func_104(var uParam0, int iParam1)//Position - 0x913A
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_105()//Position - 0x9157
{
	int iVar0;
	
	if (!unk_0xA901403F1DB7A780(iLocal_62))
	{
		unk_0xF0059F27F7BB6680(&iLocal_60, 3);
		unk_0xF0059F27F7BB6680(&iLocal_60, 4);
		unk_0xF0059F27F7BB6680(&iLocal_60, 1);
		if (!bLocal_96)
		{
			if (unk_0x1D403DFADBC2DE3C(iLocal_66[0], 0))
			{
				if (unk_0x724D816EA203A79E(iLocal_66[0]))
				{
					vLocal_61 = { unk_0x733A3EDEC245A3D2(iLocal_66[0], 1067030938, 1069547520) };
				}
			}
			else
			{
				vLocal_61 = { unk_0xEFF59CF8CAAFA23E(unk_0x541C2AEF053615BC(iLocal_66[0], true), 1067030938, 1069547520) };
			}
		}
		else if (unk_0x724D816EA203A79E(iLocal_106))
		{
			vLocal_61 = { unk_0xEFF59CF8CAAFA23E(unk_0x541C2AEF053615BC(iLocal_106, false), 1067030938, 1069547520) };
		}
		vLocal_61 = { vLocal_61.x, vLocal_61.y, (vLocal_61.z + 0.25f) };
		iLocal_62 = unk_0x249B372087B496EC(joaat("pickup_money_med_bag"), vLocal_61, iLocal_60, iLocal_118, 1, joaat("prop_cs_duffel_01"));
		iLocal_121 = func_106(iLocal_62);
		if (iLocal_47 == 1)
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_63 - 1))
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_66[iVar0]))
				{
					unk_0xB71D41C0310C93DE(iLocal_66[iVar0], true, 1);
					unk_0xA4E856A8CD53B8DF(iLocal_66[iVar0]);
					unk_0xC5A6DFE2B8987B17(&iLocal_87);
					unk_0xA3981DED4FC2E56E(0, 0, 0);
					unk_0x5558ED6D4A2DEC93(0, unk_0xBC25C936A095B5BA(), 300f, -1, 0, 0);
					unk_0x535008C596714F9E(iLocal_87);
					unk_0xA8E6405305C0D7DF(iLocal_66[iVar0], iLocal_87);
					unk_0x02DAF06EA4F08219(&iLocal_87);
					unk_0x22321800954A532E(iLocal_66[iVar0], true);
				}
				iVar0++;
			}
		}
		else if (iLocal_47 == 2)
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_66[0]))
			{
				unk_0xD999D66C5AFA4BE3(iLocal_66[0]);
				if (!unk_0xFF2AD13F5BBF6764(iLocal_66[0]))
				{
					func_50();
					SYSTEM::WAIT(0);
					func_116(&uLocal_151, "REROBAU", "REROB_DRP", 4, 0, 0, 0);
				}
			}
		}
	}
}

int func_106(int iParam0)//Position - 0x92F4
{
	int iVar0;
	
	if (!unk_0xA901403F1DB7A780(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x480F8C5F7EE6B525(iParam0);
	unk_0x3F5F1772D71D5EC4(iVar0, func_107(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
	return iVar0;
}

float func_107(bool bParam0, float fParam1, float fParam2)//Position - 0x932C
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_108()//Position - 0x9343
{
	if (unk_0x2DA8CA50A72528FB(iLocal_121))
	{
		unk_0x07B8ECB35A4ED3AC(&iLocal_121);
	}
	if (unk_0x2DA8CA50A72528FB(iLocal_122))
	{
		unk_0x07B8ECB35A4ED3AC(&iLocal_122);
	}
	if (unk_0x2DA8CA50A72528FB(iLocal_120))
	{
		unk_0x07B8ECB35A4ED3AC(&iLocal_120);
	}
	if (unk_0x2DA8CA50A72528FB(uLocal_116[0]))
	{
		unk_0x07B8ECB35A4ED3AC(&(uLocal_116[0]));
	}
	if (unk_0x2DA8CA50A72528FB(uLocal_116[1]))
	{
		unk_0x07B8ECB35A4ED3AC(&(uLocal_116[1]));
	}
}

int func_109()//Position - 0x93A2
{
	if (!unk_0x724D816EA203A79E(iLocal_66[0]))
	{
		iLocal_84 = 1;
	}
	else if (unk_0x36CEFBE9B745A58D(iLocal_66[0]))
	{
		iLocal_84 = 1;
	}
	if (!bLocal_96)
	{
		if (!unk_0x724D816EA203A79E(iLocal_66[1]))
		{
			iLocal_85 = 1;
		}
		else if (unk_0x36CEFBE9B745A58D(iLocal_66[1]))
		{
			iLocal_85 = 1;
		}
	}
	else
	{
		iLocal_85 = 1;
	}
	if (!unk_0x724D816EA203A79E(iLocal_115))
	{
		iLocal_86 = 1;
	}
	else if (unk_0x36CEFBE9B745A58D(iLocal_115) || !unk_0x5237AF95232D78C5(iLocal_115, 0))
	{
		iLocal_86 = 1;
	}
	if ((iLocal_84 && iLocal_85) || iLocal_86)
	{
		return 1;
	}
	return 0;
}

int func_110()//Position - 0x943D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iLocal_63 - 1))
	{
		if (unk_0x724D816EA203A79E(iLocal_66[iVar0]))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_66[iVar0]) || unk_0x1D403DFADBC2DE3C(iLocal_66[iVar0], 0))
			{
				if (unk_0xD9C1758D86688CEA(iLocal_66[iVar0], unk_0xBC25C936A095B5BA(), 1))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_63 - 1))
	{
		if (unk_0x724D816EA203A79E(iLocal_66[iVar0]))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_66[iVar0]))
			{
				if (unk_0xA4813477CC5DD00F(iLocal_66[iVar0]))
				{
					if (unk_0x33213E99DDEE4631(iLocal_66[iVar0]) == unk_0xBC25C936A095B5BA())
					{
						unk_0xB71D41C0310C93DE(iLocal_66[iVar0], true, 1);
						unk_0x5558ED6D4A2DEC93(iLocal_66[iVar0], unk_0xBC25C936A095B5BA(), 250f, -1, 0, 0);
						unk_0x22321800954A532E(iLocal_66[iVar0], true);
						SYSTEM::WAIT(0);
						unk_0x02537C8C1BEEB477(&(iLocal_66[iVar0]));
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	if (unk_0x724D816EA203A79E(iLocal_115))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_115) || unk_0x1D403DFADBC2DE3C(iLocal_115, 0))
		{
			if (unk_0xD9C1758D86688CEA(iLocal_115, unk_0xBC25C936A095B5BA(), 1))
			{
				return 1;
			}
		}
		if (!unk_0x36CEFBE9B745A58D(iLocal_115))
		{
			if (unk_0x687BD6F7DF82B377(unk_0xBC25C936A095B5BA(), joaat("weapon_stungun")))
			{
				return 1;
			}
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_115))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_115))
		{
			if (unk_0xA4813477CC5DD00F(iLocal_115))
			{
				if (unk_0x33213E99DDEE4631(iLocal_115) == unk_0xBC25C936A095B5BA())
				{
					unk_0xB71D41C0310C93DE(iLocal_115, true, 1);
					unk_0x5558ED6D4A2DEC93(iLocal_115, unk_0xBC25C936A095B5BA(), 250f, -1, 0, 0);
					unk_0x22321800954A532E(iLocal_115, true);
					SYSTEM::WAIT(0);
					unk_0x02537C8C1BEEB477(&iLocal_115);
					return 1;
				}
			}
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_106))
	{
		if (!unk_0x1D403DFADBC2DE3C(iLocal_106, 0) || unk_0x1D403DFADBC2DE3C(iLocal_106, 0))
		{
			if (unk_0xD9C1758D86688CEA(iLocal_106, unk_0xBC25C936A095B5BA(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_111(int iParam0, bool bParam1, bool bParam2)//Position - 0x9607
{
	return func_112(iParam0, !bParam1, bParam2);
}

int func_112(int iParam0, bool bParam1, bool bParam2)//Position - 0x961A
{
	int iVar0;
	
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x511FE22BCF5353CD(iParam0);
	if (unk_0xD27AC0E9B78CFDD7(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(iVar0, func_107(unk_0x7AF0088ABFA713B6(), 1f, 1f));
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
		unk_0x3F5F1772D71D5EC4(iVar0, func_107(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
		unk_0xF9C2945DB5BAB4BF(iVar0, bParam1);
	}
	else if (unk_0xB12D030810E8447D(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(iVar0, func_107(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
	}
	return iVar0;
}

int func_113()//Position - 0x96BE
{
	if (unk_0xE59B7F5A03335350(iLocal_106, 0))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_66[0]))
		{
			if (unk_0x62F3A07C43FFB568(iLocal_66[0], iLocal_106, 0))
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_66[1]))
				{
					if (unk_0x62F3A07C43FFB568(iLocal_66[1], iLocal_106, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_114()//Position - 0x970D
{
	if (unk_0x36CEFBE9B745A58D(iLocal_66[0]))
	{
		if (unk_0x724D816EA203A79E(iLocal_102))
		{
			if (unk_0xE7E55F7532DEE345(iLocal_102))
			{
				unk_0x17175087F2DB6AC8(iLocal_102, 1, true);
			}
			unk_0xA35241BCE4C1A24B(&iLocal_102);
			func_108();
			func_105();
			iLocal_45 = 9;
		}
	}
	else if (unk_0xD9C1758D86688CEA(iLocal_66[0], unk_0xBC25C936A095B5BA(), 1))
	{
		if (unk_0x724D816EA203A79E(iLocal_102))
		{
			if (unk_0xE7E55F7532DEE345(iLocal_102))
			{
				unk_0x17175087F2DB6AC8(iLocal_102, 1, true);
			}
			unk_0xA35241BCE4C1A24B(&iLocal_102);
			func_108();
			func_105();
			iLocal_45 = 9;
		}
	}
}

int func_115(int iParam0)//Position - 0x978D
{
	int iVar0;
	int iVar1;
	
	iVar0 = (unk_0x1B3AE5B27313855F(2, 195) - 128);
	iVar1 = (unk_0x1B3AE5B27313855F(2, 196) - 128);
	if (((iVar0 < iParam0 && iVar0 > -iParam0) && iVar1 < iParam0) && iVar1 > -iParam0)
	{
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_116(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x97DD
{
	func_126(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_117(sParam2, iParam3, 0);
}

int func_117(char* sParam0, int iParam1, bool bParam2)//Position - 0x982B
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
					func_125();
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
		if (func_124(8, -1))
		{
			return 0;
		}
		Global_3E04 = { Global_3DFE };
		func_123();
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
				func_122();
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
				if (func_121())
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
			if (func_120())
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
			func_119();
			Global_3DC2 = bParam2;
		}
		Global_3DBA = iParam1;
		StringCopy(&Global_3C3B, sParam0, 24);
		Global_394A = 0;
		func_118();
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
		func_125();
	}
	return 0;
}

void func_118()//Position - 0x9AF7
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

void func_119()//Position - 0x9B29
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

int func_120()//Position - 0x9BBE
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_121()//Position - 0x9BE5
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

void func_122()//Position - 0x9C7E
{
	if (func_39(14))
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
		Global_389D = func_43();
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

void func_123()//Position - 0x9D20
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

bool func_124(int iParam0, int iParam1)//Position - 0x9D78
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

void func_125()//Position - 0x9DB3
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

void func_126(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x9E0A
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

int func_127()//Position - 0x9E60
{
	if (Global_3DB8 != 0 || unk_0xE6711F601F11B66B())
	{
		return 1;
	}
	return 0;
}

void func_128(bool bParam0)//Position - 0x9E82
{
	if (bParam0)
	{
		func_132();
		if (Global_389D.f_1 == 10 || Global_389D.f_1 == 9)
		{
			unk_0xF0059F27F7BB6680(&Global_93C, 16);
		}
		Global_389D.f_1 = 1;
		if (func_131(0))
		{
			func_129(0);
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

void func_129(int iParam0)//Position - 0x9EE5
{
	if (Global_3943)
	{
		func_130(0, 0);
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
	if (!func_120())
	{
		Global_389D.f_1 = 3;
	}
}

void func_130(bool bParam0, bool bParam1)//Position - 0x9F55
{
	if (bParam0)
	{
		if (func_131(0))
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

int func_131(int iParam0)//Position - 0x9FC9
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

void func_132()//Position - 0xA023
{
	if (Global_389D.f_1 == 9 || Global_389D.f_1 == 10)
	{
		Global_3DED = 0;
		Global_3DE9 = 1;
	}
}

void func_133(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)//Position - 0xA04C
{
	if (bParam0)
	{
		unk_0x0D2E9062E966BE4F(unk_0xB5CEFD608600A09F());
		unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 1);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 1);
		func_140(1);
		unk_0x32FF237D69EB5489();
		unk_0x3169E2C5E6A096BC();
		if (Global_389D.f_1 > 3)
		{
			if (unk_0x58E7DDFF8D17A82A())
			{
				unk_0x1E08809A5041F85B(false);
			}
			if (!func_120())
			{
				Global_389D.f_1 = 3;
			}
			Global_3DB8 = 5;
		}
		func_139(1, iParam3, iParam2, 0);
		Global_DAA5 = 1;
		Global_10ABB = 1;
		Global_11540 = 1;
	}
	else
	{
		func_140(0);
		unk_0xCB50D125C355ED9C();
		Global_DAA5 = 0;
		if (bParam1)
		{
			unk_0x7FF4F08CAB3344B1();
		}
		unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 0);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 0);
		func_139(0, iParam3, iParam2, 0);
		if (unk_0x7AF0088ABFA713B6())
		{
			if ((((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_137(unk_0xB5CEFD608600A09F())) && !func_135(unk_0xB5CEFD608600A09F(), 0)) && !func_134()) && !bParam4)
			{
				unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), false);
			}
		}
		else if ((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_137(unk_0xB5CEFD608600A09F())) && !bParam4)
		{
			unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), false);
		}
		Global_11540 = 0;
	}
}

bool func_134()//Position - 0xA175
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_27.f_12, 14);
}

bool func_135(int iParam0, int iParam1)//Position - 0xA192
{
	bool bVar0;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		bVar0 = func_136(-1, 0) == 8;
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

int func_136(int iParam0, bool bParam1)//Position - 0xA1DD
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_6();
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

int func_137(int iParam0)//Position - 0xA21E
{
	if (func_135(iParam0, 0))
	{
		return 1;
	}
	if (func_138())
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

bool func_138()//Position - 0xA260
{
	return unk_0xFA30DFD0084E92FE(Global_240006, 3);
}

int func_139(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0xA271
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

void func_140(int iParam0)//Position - 0xA2A4
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

int func_141()//Position - 0xA2C7
{
	if (!unk_0x36CEFBE9B745A58D(iLocal_66[0]) && !unk_0x36CEFBE9B745A58D(iLocal_66[1]))
	{
		if (iLocal_47 == 1)
		{
			if (!iLocal_100)
			{
				if (!unk_0x0C265B3C448E6954(iLocal_66[0], -823.5066f, -187.3465f, 40.36355f, -803.6377f, -175.9496f, 36.4337f, 11.9375f, 0, true, 0))
				{
					iLocal_100 = 1;
				}
			}
			if (!iLocal_101)
			{
				if (!unk_0x0C265B3C448E6954(iLocal_66[1], -823.5066f, -187.3465f, 40.36355f, -803.6377f, -175.9496f, 36.4337f, 11.9375f, 0, true, 0))
				{
					iLocal_101 = 1;
				}
			}
		}
		else if (iLocal_47 == 2)
		{
			if (!iLocal_100)
			{
				if ((!unk_0x0C265B3C448E6954(iLocal_66[0], -1204.031f, -779.629f, 16.33565f, -1174.799f, -757.0704f, 21.01281f, 12.125f, 0, true, 0) || unk_0x0C265B3C448E6954(iLocal_66[0], -1206.545f, -777.8941f, 21.20355f, -1204.313f, -778.2245f, 16.08434f, 2.25f, 0, true, 0)) || unk_0x0C265B3C448E6954(iLocal_66[0], -1202.928f, -782.6883f, 21.20369f, -1202.583f, -780.5067f, 16.08243f, 2.25f, 0, true, 0))
				{
					unk_0x5558ED6D4A2DEC93(iLocal_66[0], unk_0xBC25C936A095B5BA(), 1000f, -1, 0, 0);
					iLocal_100 = 1;
				}
			}
			if (!iLocal_101)
			{
				if ((!unk_0x0C265B3C448E6954(iLocal_66[1], -1204.031f, -779.629f, 16.33565f, -1174.799f, -757.0704f, 21.01281f, 12.125f, 0, true, 0) || unk_0x0C265B3C448E6954(iLocal_66[1], -1206.545f, -777.8941f, 21.20355f, -1204.313f, -778.2245f, 16.08434f, 2.25f, 0, true, 0)) || unk_0x0C265B3C448E6954(iLocal_66[1], -1202.928f, -782.6883f, 21.20369f, -1202.583f, -780.5067f, 16.08243f, 2.25f, 0, true, 0))
				{
					unk_0x5558ED6D4A2DEC93(iLocal_66[1], unk_0xBC25C936A095B5BA(), 1000f, -1, 0, 0);
					iLocal_101 = 1;
				}
			}
		}
	}
	if (iLocal_100 && iLocal_101)
	{
		return 1;
	}
	return 0;
}

void func_142()//Position - 0xA4F9
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { unk_0x541C2AEF053615BC(iLocal_102, true) };
	vVar1 = { unk_0xD7490CDEF40F3DA2(iLocal_102, 2) };
	unk_0xA35241BCE4C1A24B(&iLocal_102);
	iLocal_102 = unk_0xB6896943DA475493(joaat("prop_cs_duffel_01"), vVar0, true, true, false);
	unk_0x784C605D172817C8(iLocal_102, vVar1, 2, 1);
}

void func_143()//Position - 0xA53B
{
	if (unk_0x724D816EA203A79E(iLocal_66[0]))
	{
		if (SYSTEM::VDIST(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), unk_0x541C2AEF053615BC(iLocal_66[0], false)) > 200f && unk_0x41A5D6415E2CC10E(iLocal_66[0]))
		{
			if (unk_0x2DA8CA50A72528FB(uLocal_116[0]))
			{
				unk_0x07B8ECB35A4ED3AC(&(uLocal_116[0]));
			}
			unk_0x02537C8C1BEEB477(&(iLocal_66[0]));
			bLocal_82 = true;
		}
	}
	else
	{
		bLocal_82 = true;
	}
	if (unk_0x724D816EA203A79E(iLocal_106))
	{
		if (SYSTEM::VDIST(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), unk_0x541C2AEF053615BC(iLocal_106, false)) > 200f && unk_0x41A5D6415E2CC10E(iLocal_106))
		{
			if (unk_0x2DA8CA50A72528FB(iLocal_120))
			{
				unk_0x07B8ECB35A4ED3AC(&iLocal_120);
			}
			unk_0x1E7A09C1710FB071(&iLocal_106);
			bLocal_83 = true;
		}
	}
	else
	{
		bLocal_83 = true;
	}
	if (bLocal_96)
	{
		if (bLocal_83)
		{
			if (func_161())
			{
				iLocal_45 = 13;
			}
			else
			{
				SYSTEM::WAIT(0);
				iLocal_44 = 2;
			}
		}
	}
	else if (bLocal_82)
	{
		SYSTEM::WAIT(0);
		if (func_161())
		{
			iLocal_45 = 13;
		}
		else
		{
			iLocal_44 = 2;
		}
	}
}

void func_144()//Position - 0xA631
{
	if (!unk_0x1D403DFADBC2DE3C(iLocal_106, 0))
	{
		if (unk_0x8D66276473ABD7CC(iLocal_106) < 800)
		{
			unk_0x65E471E4A2D56226(iLocal_106, 0, 0);
			unk_0xE6E403909F4BF47F(iLocal_106, 10f);
		}
	}
}

void func_145()//Position - 0xA663
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iLocal_63 - 1))
	{
		if (unk_0x724D816EA203A79E(iLocal_66[iVar0]))
		{
			if (unk_0x36CEFBE9B745A58D(iLocal_66[iVar0]))
			{
				if (unk_0x2DA8CA50A72528FB(uLocal_116[iVar0]))
				{
					unk_0x07B8ECB35A4ED3AC(&(uLocal_116[iVar0]));
				}
			}
		}
		iVar0++;
	}
}

void func_146()//Position - 0xA6B1
{
	int iVar0;
	int iVar1;
	
	if (iLocal_47 == 1)
	{
		if (unk_0x36CEFBE9B745A58D(iLocal_66[0]) && unk_0x36CEFBE9B745A58D(iLocal_66[1]))
		{
			iLocal_45 = 7;
		}
	}
	else if (iLocal_47 == 2)
	{
		if (unk_0x36CEFBE9B745A58D(iLocal_66[0]) && unk_0x36CEFBE9B745A58D(iLocal_66[1]))
		{
			iLocal_45 = 7;
		}
	}
	iVar0 = 0;
	while (iVar0 < iLocal_66)
	{
		if (unk_0x36CEFBE9B745A58D(iLocal_66[iVar0]))
		{
			if (unk_0x2DA8CA50A72528FB(uLocal_116[iVar0]))
			{
				unk_0x07B8ECB35A4ED3AC(&(uLocal_116[iVar0]));
			}
		}
		iVar0++;
	}
	if (unk_0x32E373675659FDB0(unk_0xBC25C936A095B5BA()))
	{
		if (!bLocal_79)
		{
			iVar1 = 0;
			while (iVar1 <= (iLocal_63 - 1))
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_66[iVar1]))
				{
					unk_0xB8CBD998685C0685(iLocal_66[iVar1], unk_0xBC25C936A095B5BA(), 0, 16);
				}
				iVar1++;
			}
			bLocal_79 = true;
			if (unk_0xE7E55F7532DEE345(iLocal_102))
			{
				iLocal_45 = 5;
			}
		}
	}
	if (!iLocal_89 && !bLocal_79)
	{
		unk_0x3857DADBD6EC8A54("RE51A_SHOP");
		func_50();
		SYSTEM::WAIT(0);
		if (iLocal_47 == 1)
		{
			if (func_116(&uLocal_151, "REROBAU", "REROB_GD2", 4, 0, 0, 0))
			{
				iLocal_89 = 1;
			}
		}
		else if (iLocal_47 == 2)
		{
			if (func_116(&uLocal_151, "REROBAU", "REROB_GD", 4, 0, 0, 0))
			{
				iLocal_89 = 1;
			}
		}
	}
	if ((iLocal_89 && !iLocal_90) && !bLocal_79)
	{
		if (!func_127())
		{
			if (func_43() == 0)
			{
				func_116(&uLocal_151, "REROBAU", "REROB_MDS", 4, 0, 0, 0);
			}
			else if (func_43() == 1)
			{
				func_116(&uLocal_151, "REROBAU", "REROB_FC", 4, 0, 0, 0);
			}
			else if (func_43() == 2)
			{
				func_116(&uLocal_151, "REROBAU", "REROB_TP", 4, 0, 0, 0);
			}
			iLocal_90 = 1;
		}
	}
	if (!bLocal_79)
	{
		if (!func_127())
		{
			if (iLocal_90 && !iLocal_91)
			{
				if (iLocal_47 == 1)
				{
					if (func_164(&uLocal_151, "REROBAU", "REROB_CH2", "REROB_CH2_3", 4, 0, 0))
					{
						iLocal_91 = 1;
					}
				}
				else if (iLocal_47 == 2)
				{
					if (func_164(&uLocal_151, "REROBAU", "REROB_CH", "REROB_CH_3", 4, 0, 0))
					{
						iLocal_91 = 1;
					}
				}
			}
		}
		if (iLocal_47 == 1)
		{
			if (!func_127())
			{
				if (!iLocal_92)
				{
					if (iLocal_47 == 1)
					{
						func_116(&uLocal_151, "REROBAU", "REROB_LV2", 4, 0, 0, 0);
					}
					else if (iLocal_47 == 2)
					{
						func_116(&uLocal_151, "REROBAU", "REROB_LV", 4, 0, 0, 0);
					}
					iLocal_92 = 1;
				}
			}
		}
		else if (iLocal_47 == 2)
		{
			if (SYSTEM::TIMERA() > 4000)
			{
				if (!iLocal_92)
				{
					if (unk_0x724D816EA203A79E(iLocal_102))
					{
						if (!unk_0x36CEFBE9B745A58D(iLocal_67[0]))
						{
							iLocal_92 = 1;
						}
					}
				}
			}
			if (unk_0x724D816EA203A79E(iLocal_102) && !unk_0x36CEFBE9B745A58D(iLocal_66[0]))
			{
				if (!iLocal_109)
				{
					iLocal_109 = 1;
				}
			}
		}
		if (!iLocal_77)
		{
			if (iLocal_47 == 1)
			{
				if (SYSTEM::TIMERA() > 14100)
				{
					unk_0xA35241BCE4C1A24B(&(iLocal_103[0]));
					unk_0xA35241BCE4C1A24B(&(iLocal_103[1]));
					if (unk_0xE59B7F5A03335350(iLocal_106, 0))
					{
						if (!unk_0x36CEFBE9B745A58D(iLocal_66[0]))
						{
							unk_0xA4E856A8CD53B8DF(iLocal_66[0]);
							unk_0xC5A6DFE2B8987B17(&iLocal_87);
							unk_0x44C98C11ED6DD327(0);
							unk_0xD179FA0466FA4FE3(0, iLocal_106, -1, 0, 2f, 1, 0);
							unk_0x535008C596714F9E(iLocal_87);
							unk_0xA8E6405305C0D7DF(iLocal_66[0], iLocal_87);
							unk_0x02DAF06EA4F08219(&iLocal_87);
						}
						if (!unk_0x36CEFBE9B745A58D(iLocal_66[1]))
						{
							unk_0x3E2B7D349B5735D3(iLocal_66[1], -530524, true, 0, 0);
							unk_0xC5A6DFE2B8987B17(&iLocal_87);
							unk_0x44C98C11ED6DD327(0);
							unk_0xD179FA0466FA4FE3(0, iLocal_106, -1, 1, 2f, 1, 0);
							unk_0x535008C596714F9E(iLocal_87);
							unk_0xA8E6405305C0D7DF(iLocal_66[1], iLocal_87);
							unk_0x02DAF06EA4F08219(&iLocal_87);
						}
						iLocal_45 = 2;
						iLocal_77 = 1;
					}
					else
					{
						if (!unk_0x36CEFBE9B745A58D(iLocal_66[0]))
						{
							unk_0xB71D41C0310C93DE(iLocal_66[0], true, 1);
							unk_0x49D46EE47C9CCB66(iLocal_66[0]);
							unk_0xC5A6DFE2B8987B17(&iLocal_87);
							unk_0x44C98C11ED6DD327(0);
							unk_0x5558ED6D4A2DEC93(0, unk_0xBC25C936A095B5BA(), 1000f, -1, 0, 0);
							unk_0x535008C596714F9E(iLocal_87);
							unk_0xA8E6405305C0D7DF(iLocal_66[0], iLocal_87);
							unk_0x02DAF06EA4F08219(&iLocal_87);
						}
						if (!unk_0x36CEFBE9B745A58D(iLocal_66[1]))
						{
							unk_0xB71D41C0310C93DE(iLocal_66[1], true, 1);
							unk_0x49D46EE47C9CCB66(iLocal_66[1]);
							unk_0xC5A6DFE2B8987B17(&iLocal_87);
							unk_0x44C98C11ED6DD327(0);
							unk_0x5558ED6D4A2DEC93(0, unk_0xBC25C936A095B5BA(), 1000f, -1, 0, 0);
							unk_0x535008C596714F9E(iLocal_87);
							unk_0xA8E6405305C0D7DF(iLocal_66[1], iLocal_87);
							unk_0x02DAF06EA4F08219(&iLocal_87);
						}
						iLocal_45 = 2;
						iLocal_77 = 1;
					}
				}
			}
			else if (iLocal_47 == 2)
			{
				if (unk_0x8FD30584EB38411B(iLocal_135) > 0.453f)
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_67[0]))
					{
						unk_0x2E35C4FA5F0ED22F(iLocal_67[0], true);
						unk_0xC5A6DFE2B8987B17(&iLocal_87);
						unk_0xE896C0AD02364F2A(0, "random@robbery", "f_distressed_loop", 2f, -2f, -1, 9, 0, 0, 0, 0);
						unk_0x535008C596714F9E(iLocal_87);
						unk_0xA8E6405305C0D7DF(iLocal_67[0], iLocal_87);
						unk_0x02DAF06EA4F08219(&iLocal_87);
						unk_0x22321800954A532E(iLocal_67[0], true);
					}
					if (!unk_0x36CEFBE9B745A58D(iLocal_66[0]))
					{
						unk_0xA4E856A8CD53B8DF(iLocal_66[0]);
						unk_0xABA7AE40608505F2(iLocal_66[0], 128, true);
						unk_0xABA7AE40608505F2(iLocal_66[0], 1, true);
						unk_0x91629AC1E1F78419(iLocal_66[0], 17, true);
						unk_0xDBA0F5674ACCE43C(iLocal_66[0], 1.6f);
						unk_0xB71D41C0310C93DE(iLocal_66[0], true, 1);
						unk_0xC5A6DFE2B8987B17(&iLocal_87);
						unk_0xE896C0AD02364F2A(0, "random@robbery", "run", 2f, -2f, -1, 49, 0, 0, 0, 0);
						unk_0xB0C1A00D86375366(0, "re_shoprobbery", 0, 0, 16);
						unk_0x44C98C11ED6DD327(0);
						unk_0x535008C596714F9E(iLocal_87);
						unk_0xA8E6405305C0D7DF(iLocal_66[0], iLocal_87);
						unk_0x02DAF06EA4F08219(&iLocal_87);
						unk_0x22321800954A532E(iLocal_66[0], true);
						SYSTEM::SETTIMERB(0);
					}
					if (!unk_0x36CEFBE9B745A58D(iLocal_66[1]))
					{
						unk_0xABA7AE40608505F2(iLocal_66[1], 128, true);
						unk_0xABA7AE40608505F2(iLocal_66[1], 1, true);
						unk_0x91629AC1E1F78419(iLocal_66[1], 17, true);
						unk_0xDBA0F5674ACCE43C(iLocal_66[1], 1.6f);
						unk_0xB71D41C0310C93DE(iLocal_66[1], true, 1);
						unk_0xC5A6DFE2B8987B17(&iLocal_87);
						unk_0x44C98C11ED6DD327(0);
						unk_0xB0C1A00D86375366(0, "re_shoprobbery2", 0, 0, 17);
						unk_0x535008C596714F9E(iLocal_87);
						unk_0xA8E6405305C0D7DF(iLocal_66[1], iLocal_87);
						unk_0x02DAF06EA4F08219(&iLocal_87);
						unk_0x22321800954A532E(iLocal_66[1], true);
					}
					iLocal_45 = 2;
					iLocal_77 = 1;
				}
			}
			unk_0xDF53A66AEE1401AA(0f);
		}
	}
}

void func_147()//Position - 0xAC75
{
	switch (iLocal_146)
	{
		case 0:
			func_133(1, 1, 1, 0, 0);
			unk_0xA0C0B32E74BE8DB7(func_148(unk_0xB5CEFD608600A09F()), 10f, 0);
			iLocal_145 = unk_0x578D5D08EC980893("DEFAULT_ANIMATED_CAMERA", false);
			unk_0x348665177DBFB93B(iLocal_145, true);
			unk_0xA4DB448107C6D171(iLocal_145, iLocal_135, "robbery_action_cam", "random@shop_robbery");
			if (iLocal_47 == 1)
			{
				unk_0x394EE83EEDDF9A95("Hair_room");
			}
			unk_0x062C9995BFD27B2A(true, false, 3000, 1, 0, 0);
			iLocal_147 = unk_0x105601648511CC64() + 3500;
			iLocal_146++;
			break;
		
		case 1:
			if (iLocal_147 < unk_0x105601648511CC64())
			{
				if (iLocal_47 == 1)
				{
					unk_0xF3F01A78937DC905(115f);
					unk_0x2B9AEC08E469E384(-9.1222f, 1065353216);
				}
				else if (iLocal_47 == 2)
				{
					unk_0xF3F01A78937DC905(44.5236f);
					unk_0x2B9AEC08E469E384(-18.1582f, 1065353216);
				}
				unk_0x13D5880CBA449AA9();
				unk_0x348665177DBFB93B(iLocal_145, false);
				unk_0x062C9995BFD27B2A(false, false, 3000, 1, 0, 0);
				func_52();
				func_133(0, 1, 1, 0, 0);
				iLocal_146++;
			}
			break;
		
		case 2:
			break;
	}
}

Vector3 func_148(int iParam0)//Position - 0xAD75
{
	return unk_0x541C2AEF053615BC(unk_0xA95CF30C72EB526E(iParam0), false);
}

void func_149()//Position - 0xAD88
{
	int iVar0;
	
	if (!iLocal_75 && func_152(1, 0, 1))
	{
		if (unk_0x2DA8CA50A72528FB(iLocal_122))
		{
			unk_0x07B8ECB35A4ED3AC(&iLocal_122);
		}
		func_133(1, 1, 1, 0, 0);
		unk_0x7456702622C62EA0(1);
		unk_0x59B038076F830627(false);
		unk_0x43F06392C4EF25E0(false);
		unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 256);
		unk_0x8E25082A46F87892(unk_0xBC25C936A095B5BA(), joaat("weapon_unarmed"), true);
		if (iLocal_47 == 1)
		{
			if (!iLocal_108)
			{
				iLocal_135 = unk_0xD0D858E538FD01C3(vLocal_126, vLocal_128, 2);
				unk_0x49D46EE47C9CCB66(unk_0xBC25C936A095B5BA());
				unk_0xB62398E536F695FC(unk_0xBC25C936A095B5BA(), iLocal_135, "random@shop_robbery", "robbery_action_p", 8f, -8f, 1, 0, 1148846080, 0);
				unk_0x2EB4D46478766D87(unk_0xBC25C936A095B5BA(), 1, 0);
				if (((!unk_0x36CEFBE9B745A58D(iLocal_66[0]) && !unk_0x36CEFBE9B745A58D(iLocal_66[1])) && !unk_0x36CEFBE9B745A58D(iLocal_67[0])) && unk_0x724D816EA203A79E(iLocal_102))
				{
					unk_0xB62398E536F695FC(iLocal_66[0], iLocal_135, "random@shop_robbery", "robbery_action_b", 8f, -8f, 1, 0, 1148846080, 0);
					unk_0xB62398E536F695FC(iLocal_66[1], iLocal_135, "random@shop_robbery", "robbery_action_a", 8f, -8f, 1, 0, 1148846080, 0);
					unk_0xB62398E536F695FC(iLocal_67[0], iLocal_135, "random@shop_robbery", "robbery_action_f", 8f, -4f, 0, 0, 1148846080, 0);
					unk_0xBEBE356CCD6268A1(iLocal_102, iLocal_135, "robbery_action_bag", "random@shop_robbery", 8f, -8f, 0, 1148846080);
				}
				unk_0x0BD2283F2F727F2C(iLocal_135, 0.06f);
				iLocal_108 = 1;
			}
		}
		else if (iLocal_47 == 2)
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_67[0]))
			{
				unk_0xA4E856A8CD53B8DF(iLocal_67[0]);
				unk_0xE896C0AD02364F2A(iLocal_67[0], "random@robbery", "robbery_main_female", 2f, -2f, -1, 0, 0, 0, 0, 0);
			}
			unk_0x1732A8A5D2D39430(-1195.062f, -773.2098f, 16.324f, 20f, 4);
			iLocal_135 = unk_0xD0D858E538FD01C3(vLocal_126, vLocal_128, 2);
			if (((!unk_0x36CEFBE9B745A58D(iLocal_66[0]) && !unk_0x36CEFBE9B745A58D(iLocal_66[1])) && !unk_0x36CEFBE9B745A58D(iLocal_67[0])) && unk_0x724D816EA203A79E(iLocal_102))
			{
				unk_0xB62398E536F695FC(iLocal_66[0], iLocal_135, "random@shop_robbery", "robbery_action_b", 2f, -2f, 1, 0, 1148846080, 0);
				unk_0xB62398E536F695FC(iLocal_67[0], iLocal_135, "random@shop_robbery", "robbery_action_f", 2f, -2f, 0, 0, 1148846080, 0);
				if (unk_0x724D816EA203A79E(iLocal_103[0]) && unk_0x724D816EA203A79E(iLocal_103[1]))
				{
					unk_0x5DBE04849460E608(iLocal_103[0], iLocal_67[0], unk_0xFA18E720A39243D0(iLocal_67[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
					unk_0x5DBE04849460E608(iLocal_103[1], iLocal_67[0], unk_0xFA18E720A39243D0(iLocal_67[0], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
				}
			}
			unk_0x0BD2283F2F727F2C(iLocal_135, 0.05f);
			vLocal_126 = { -1199.369f, -776.1991f, 16.3235f };
			vLocal_128 = { 0f, 0f, -60f };
			iLocal_135 = unk_0xD0D858E538FD01C3(vLocal_126, vLocal_128, 2);
			if (!unk_0x36CEFBE9B745A58D(iLocal_66[1]))
			{
				unk_0xB62398E536F695FC(iLocal_66[1], iLocal_135, "random@shop_robbery", "robbery_action_a", 2f, -2f, 1, 0, 1148846080, 0);
			}
			unk_0x0BD2283F2F727F2C(iLocal_135, 0.06f);
			unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), -1200.455f, -777.6201f, 16.3244f, 1, false, 0, 1);
			unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), 305.3806f);
			unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
			unk_0xC5A6DFE2B8987B17(&iLocal_87);
			unk_0xE896C0AD02364F2A(0, "random@shop_robbery", "robbery_action_p", 1000f, -2f, -1, 134217736, 0.06f, 0, 0, 0);
			unk_0xE896C0AD02364F2A(0, "random@shop_robbery", "kneel_loop_p", 2f, -4f, -1, 134217737, 0, 0, 0, 0);
			unk_0x535008C596714F9E(iLocal_87);
			unk_0xA8E6405305C0D7DF(unk_0xBC25C936A095B5BA(), iLocal_87);
			unk_0x02DAF06EA4F08219(&iLocal_87);
			unk_0x2EB4D46478766D87(unk_0xBC25C936A095B5BA(), 0, 0);
		}
		iLocal_75 = 1;
	}
	if (!iLocal_107)
	{
		func_150();
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_63 - 1))
	{
		if (!unk_0x2DA8CA50A72528FB(uLocal_116[iVar0]))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_66[iVar0]))
			{
				uLocal_116[iVar0] = func_162(iLocal_66[iVar0], 1, 145);
			}
		}
		iVar0++;
	}
	if ((iLocal_47 == 1 && unk_0x724D816EA203A79E(iLocal_106)) || iLocal_47 == 2)
	{
		SYSTEM::SETTIMERA(0);
		iLocal_45 = 1;
	}
}

void func_150()//Position - 0xB1BF
{
	int iVar0;
	
	iVar0 = joaat("baller");
	if (!iLocal_110)
	{
		unk_0xF243B7A14FCFD0F4(iVar0);
		if (unk_0xD6513D668481290A(iVar0))
		{
			iLocal_110 = 1;
		}
		else
		{
			unk_0xF243B7A14FCFD0F4(iVar0);
		}
	}
	else if (unk_0xD6513D668481290A(iVar0))
	{
		if (func_151())
		{
			if (unk_0x0C265B3C448E6954(iLocal_104, -828.3692f, -194.4669f, 36.41385f, -824.5801f, -201.1353f, 39.39436f, 4.3125f, 0, true, 0))
			{
				vLocal_105 = { -822.1784f, -205.811f, 36.3444f };
			}
			else
			{
				vLocal_105 = { -826.2828f, -197.8547f, 36.3995f };
			}
		}
		else
		{
			vLocal_105 = { -826.2828f, -197.8547f, 36.3995f };
		}
		iLocal_106 = unk_0x61C05BF08A1E0EFE(iVar0, vLocal_105, 31.9252f, true, true, false);
		unk_0xB71D41C0310C93DE(iLocal_106, true, 1);
		unk_0xF0A40F19AAB79E88(iLocal_106, 1084227584);
		unk_0x2D655AA68FA1736B(iLocal_106, true, true, 0);
		iLocal_115 = unk_0xFD8987C090669BD5(iLocal_106, 26, joaat("g_m_y_korean_01"), -1, 1, true);
		unk_0xC8FD3EBBB90E8D7F(iLocal_115, 134, true);
		unk_0x2E35C4FA5F0ED22F(iLocal_115, true);
		unk_0x4106FAF8AA1D69D5(iLocal_115, iLocal_119);
		unk_0x91629AC1E1F78419(iLocal_115, 8, false);
		unk_0xE20EB9C9BC14ECEB(iLocal_115, 0);
		unk_0xFC3C88E2313FA926(iLocal_115, 13);
		unk_0x7A535CE1F001F3FE(iLocal_115, joaat("weapon_pistol"), -1, true, true);
		unk_0xE43AD8CB1B4DDED9(iLocal_115, 1, 0);
		unk_0xC8FD3EBBB90E8D7F(iLocal_115, 42, true);
		iLocal_107 = 1;
	}
}

int func_151()//Position - 0xB305
{
	int iVar0;
	
	iVar0 = unk_0x3E12B546F3F2597A();
	if (unk_0xE59B7F5A03335350(iVar0, 0))
	{
		if (unk_0x4DBCE270B354E123(iVar0, -829.3693f, -191.9869f, 36.4616f, 15f, 15f, 5f, false, true, 0))
		{
			iLocal_104 = iVar0;
			if (!unk_0x5CAE759AE8219D20(iLocal_104))
			{
				unk_0x77815D3407C6700D(iLocal_104, true, 0);
			}
			return 1;
		}
	}
	return 0;
}

int func_152(bool bParam0, bool bParam1, bool bParam2)//Position - 0xB35E
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

void func_153()//Position - 0xB443
{
	func_227();
}

int func_154(int iParam0)//Position - 0xB44F
{
	if (func_155())
	{
		Global_19AFA = 1;
		Global_19AF7 = unk_0x105601648511CC64();
		if (func_61(Global_19AF9))
		{
			func_99(0);
		}
		unk_0x3FF92BBF0607A406(1, "RE_TITLE");
		if (iParam0 && func_61(Global_19AF9))
		{
			unk_0x621CEDEDDD531386();
		}
		return 1;
	}
	return 0;
}

int func_155()//Position - 0xB4A2
{
	switch (func_156(&Global_62F8, 0, 5, 0, unk_0x8A55B15F4133C912()))
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

int func_156(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0xB4D8
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
		if (func_160(0))
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
		if (!func_158(iParam2))
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
			func_157(uParam0, iParam4);
		}
	}
	return 2;
}

void func_157(var uParam0, int iParam1)//Position - 0xB60F
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

bool func_158(int iParam0)//Position - 0xB65E
{
	return func_159(iParam0, Global_8C41);
}

int func_159(int iParam0, int iParam1)//Position - 0xB66F
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

int func_160(int iParam0)//Position - 0xB850
{
	if (Global_8C41 == 15)
	{
		return 0;
	}
	if (func_158(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_161()//Position - 0xB872
{
	if (iLocal_47 == 1)
	{
		if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -803.4598f, -175.8135f, 36.28367f, -823.0242f, -187.0462f, 40.53547f, 11.9375f, 0, true, 0) || unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -823.3706f, -188.0602f, 36.62162f, -822.8361f, -187.7466f, 39.06914f, 1.5f, 0, true, 0))
		{
			return 1;
		}
	}
	else if (iLocal_47 == 2)
	{
		if (((unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -1204.031f, -779.629f, 16.33565f, -1174.799f, -757.0704f, 21.01281f, 12.125f, 0, true, 0) && !unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -1203.899f, -776.9178f, 20.16803f, -1201.289f, -780.4698f, 15.61526f, 3.9375f, 0, true, 0)) && !unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -1206.545f, -777.8941f, 21.20355f, -1204.313f, -778.2245f, 16.08434f, 2.25f, 0, true, 0)) && !unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -1202.928f, -782.6883f, 21.20369f, -1202.583f, -780.5067f, 16.08243f, 2.25f, 0, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_162(int iParam0, bool bParam1, int iParam2)//Position - 0xB9C4
{
	int iVar0;
	
	iVar0 = func_112(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x2DA8CA50A72528FB(iVar0)) && unk_0x0F6F4C227FB5DD52(&(Global_19B04.f_6D75[iParam2 /*29*/].f_3)))
	{
		unk_0x436D0272182E484D(iVar0, &(Global_19B04.f_6D75[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_163()//Position - 0xBA16
{
	int iVar0;
	
	if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), -823.1281f, -187.9591f, 36.6189f, 12f, 12f, 12f, false, true, 0) || unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), -1201.017f, -777.5527f, 16.3398f, 12f, 12f, 12f, false, true, 0))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_66[0]) && !unk_0x36CEFBE9B745A58D(iLocal_66[1]))
		{
			if (unk_0xD9C1758D86688CEA(iLocal_66[0], unk_0xBC25C936A095B5BA(), 1) || unk_0xD9C1758D86688CEA(iLocal_66[1], unk_0xBC25C936A095B5BA(), 1))
			{
				return 1;
			}
			if (unk_0x1028B6250119A74B(iLocal_66[0], unk_0xBC25C936A095B5BA()) || unk_0x1028B6250119A74B(iLocal_66[1], unk_0xBC25C936A095B5BA()))
			{
				if (((unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), iLocal_66[0]) || unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), iLocal_66[0])) || unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), iLocal_66[1])) || unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), iLocal_66[1]))
				{
					if (iLocal_69 == -1)
					{
						iLocal_69 = unk_0x105601648511CC64();
					}
				}
				else
				{
					iLocal_69 = -1;
				}
				if (iLocal_69 != -1 && unk_0x105601648511CC64() > iLocal_69 + 1500)
				{
					return 1;
				}
			}
		}
	}
	if (unk_0xCD6353203C21B4FD(-1, vLocal_123 - Vector(20f, 20f, 20f), vLocal_123 + Vector(20f, 20f, 20f)))
	{
		return 1;
	}
	if (unk_0x1D403DFADBC2DE3C(iLocal_66[0], 0) || unk_0x1D403DFADBC2DE3C(iLocal_66[1], 0))
	{
		return 1;
	}
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) && func_161())
	{
		return 1;
	}
	if (unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()) && func_161())
	{
		return 1;
	}
	if (!unk_0x36CEFBE9B745A58D(iLocal_66[0]) && !unk_0x36CEFBE9B745A58D(iLocal_66[1]))
	{
		if (((unk_0x11F754EAEA6336BA(unk_0xBC25C936A095B5BA(), unk_0x541C2AEF053615BC(iLocal_66[1], true) - Vector(12f, 12f, 12f), unk_0x541C2AEF053615BC(iLocal_66[1], true) + Vector(12f, 12f, 12f), 0, 1) && !unk_0x75F706B6889D7D86(unk_0xBC25C936A095B5BA())) || unk_0x04880508C862E589(unk_0x541C2AEF053615BC(iLocal_66[0], true), 3f, 1)) || unk_0x04880508C862E589(unk_0x541C2AEF053615BC(iLocal_66[1], true), 3f, 1))
		{
			return 1;
		}
	}
	iVar0 = 0;
	while (iVar0 < iLocal_67)
	{
		if (unk_0x724D816EA203A79E(iLocal_67[iVar0]))
		{
			if (unk_0xD9C1758D86688CEA(iLocal_67[iVar0], unk_0xBC25C936A095B5BA(), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_68)
	{
		if (unk_0x724D816EA203A79E(iLocal_68[iVar0]))
		{
			if (unk_0xD9C1758D86688CEA(iLocal_68[iVar0], unk_0xBC25C936A095B5BA(), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_164(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0xBCE4
{
	func_126(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_117(sParam2, iParam4, 0);
}

int func_165()//Position - 0xBD38
{
	if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), -823.1281f, -187.9591f, 36.6189f, 4f, 4f, 4f, false, true, 0) || unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), -1201.017f, -777.5527f, 16.3398f, 4f, 4f, 4f, false, true, 0))
	{
		unk_0xBBC4195AD74D153D(0, 22, 1);
		unk_0xDBA0F5674ACCE43C(unk_0xBC25C936A095B5BA(), 1f);
		unk_0x69194304DB679A9C(unk_0xBC25C936A095B5BA(), false, 1, 0);
		return 1;
	}
	return 0;
}

void func_166()//Position - 0xBDA4
{
	if (!unk_0x36CEFBE9B745A58D(iLocal_67[1]))
	{
		if (unk_0xB6FD7D587FE0A1B4(iLocal_67[1]))
		{
			func_167(iLocal_67[1], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
		}
		else
		{
			func_167(iLocal_67[1], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
		}
		unk_0xAB1A796DCD561BF8(iLocal_67[1], 26, 0f, 0);
	}
	if (!unk_0x36CEFBE9B745A58D(iLocal_68[1]))
	{
		func_167(iLocal_68[1], "SCREAM_PANIC", "WAVELOAD_PAIN_FEMALE", 3);
		unk_0xAB1A796DCD561BF8(iLocal_68[1], 3, 0f, 0);
	}
}

void func_167(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0xBE24
{
	unk_0x7E80A36CD8BDF4D1(iParam0, sParam1, sParam2, func_168(iParam3), 0);
}

int func_168(int iParam0)//Position - 0xBE3D
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

void func_169()//Position - 0xC032
{
	int iVar0;
	
	unk_0x6E52C7765A0F4382(0);
	unk_0xB2CB6EAA6B280A84("ROBBERS", &iLocal_119);
	iVar0 = 0;
	while (iVar0 <= (iLocal_63 - 1))
	{
		iLocal_66[iVar0] = unk_0x01B3635C3E8EDD81(26, iLocal_141, vLocal_51[iVar0 /*3*/], fLocal_52[iVar0], 1, true);
		unk_0x2E35C4FA5F0ED22F(iLocal_66[iVar0], true);
		unk_0x4106FAF8AA1D69D5(iLocal_66[iVar0], iLocal_119);
		unk_0x91629AC1E1F78419(iLocal_66[iVar0], 8, false);
		unk_0xE20EB9C9BC14ECEB(iLocal_66[iVar0], 0);
		unk_0xFC3C88E2313FA926(iLocal_66[iVar0], 13);
		unk_0x7A535CE1F001F3FE(iLocal_66[iVar0], joaat("weapon_pistol"), -1, true, true);
		unk_0xE43AD8CB1B4DDED9(iLocal_66[iVar0], 1, 0);
		unk_0xC8FD3EBBB90E8D7F(iLocal_66[iVar0], 42, true);
		unk_0xC8FD3EBBB90E8D7F(iLocal_66[iVar0], 269, true);
		unk_0xC8FD3EBBB90E8D7F(iLocal_66[iVar0], 188, true);
		unk_0x12D2D85EBAC186AA(iLocal_66[iVar0], 0);
		unk_0xABA7AE40608505F2(iLocal_66[iVar0], 128, true);
		unk_0xABA7AE40608505F2(iLocal_66[iVar0], 8, true);
		iVar0++;
	}
	unk_0xF85FAED5BA864282(iLocal_66[0], "pedRobber[0]");
	unk_0xF85FAED5BA864282(iLocal_66[1], "pedRobber[1]");
	unk_0xA902E18EDF6FA0C8(5, iLocal_119, 1862763509);
	unk_0xA902E18EDF6FA0C8(5, 1862763509, iLocal_119);
	unk_0xA902E18EDF6FA0C8(5, iLocal_119, -1533126372);
	unk_0xA902E18EDF6FA0C8(5, -1533126372, iLocal_119);
	if (func_43() == 0)
	{
		func_174(&uLocal_151, 0, unk_0xBC25C936A095B5BA(), "MICHAEL", 0, 1);
	}
	else if (func_43() == 1)
	{
		func_174(&uLocal_151, 0, unk_0xBC25C936A095B5BA(), "FRANKLIN", 0, 1);
	}
	else if (func_43() == 2)
	{
		func_174(&uLocal_151, 0, unk_0xBC25C936A095B5BA(), "TREVOR", 0, 1);
	}
	iLocal_102 = unk_0xB6896943DA475493(iLocal_117, vLocal_57, true, true, false);
	if (iLocal_47 == 1)
	{
		unk_0x1DAA351326EA3537(vLocal_71 - Vector(20f, 20f, 20f), vLocal_71 + Vector(20f, 20f, 20f), 0, 1, 1, 1);
		unk_0x8510BC031C24B862(joaat("baller"), true);
		iLocal_103[0] = unk_0xB6896943DA475493(joaat("prop_anim_cash_pile_01"), vLocal_57, true, true, false);
		iLocal_103[1] = unk_0xB6896943DA475493(joaat("prop_anim_cash_pile_01"), vLocal_57 - Vector(0.1f, 0f, 0f), true, true, false);
		unk_0x36C3B58DA78A2679(iLocal_66[0], "G_M_Y_KorLieut_01_Korean_MINI_01");
		unk_0x36C3B58DA78A2679(iLocal_66[1], "G_M_Y_Korean_01_Korean_MINI_02");
		vLocal_126 = { -821.565f, -186.467f, 36.6f };
		vLocal_128 = { 0f, 0f, -59.96f };
		iLocal_135 = unk_0xD0D858E538FD01C3(vLocal_126, vLocal_128, 2);
		unk_0xC2BF3DE5E47F801D(iLocal_135, true);
		unk_0xB62398E536F695FC(iLocal_66[1], iLocal_135, "random@shop_robbery", "robbery_intro_loop_a", 8f, -8f, 0, 0, 1148846080, 0);
		unk_0xBEBE356CCD6268A1(iLocal_102, iLocal_135, "robbery_intro_loop_bag", "random@shop_robbery", 1000f, 8f, 0, 1148846080);
		iVar0 = 0;
		while (iVar0 <= (iLocal_64 - 1))
		{
			iLocal_67[iVar0] = unk_0x01B3635C3E8EDD81(26, iLocal_138, vLocal_53[iVar0 /*3*/], fLocal_54[iVar0], 1, true);
			unk_0x91629AC1E1F78419(iLocal_67[iVar0], 17, true);
			unk_0x2E35C4FA5F0ED22F(iLocal_67[iVar0], true);
			unk_0xB105531EDD3DE51B(iLocal_67[iVar0], false);
			unk_0xC8FD3EBBB90E8D7F(iLocal_67[iVar0], 269, true);
			iVar0++;
		}
		unk_0xF85FAED5BA864282(iLocal_67[0], "pedWorker[0]");
		unk_0xF85FAED5BA864282(iLocal_67[1], "pedWorker[1]");
		unk_0xF85FAED5BA864282(iLocal_67[2], "pedWorker[2]");
		iLocal_68[0] = unk_0x01B3635C3E8EDD81(26, iLocal_139, vLocal_55[0 /*3*/], fLocal_56[0], 1, true);
		unk_0x91629AC1E1F78419(iLocal_68[0], 17, true);
		unk_0x2E35C4FA5F0ED22F(iLocal_68[0], true);
		unk_0xB105531EDD3DE51B(iLocal_68[0], false);
		unk_0xC8FD3EBBB90E8D7F(iLocal_68[0], 269, true);
		iVar0 = 1;
		while (iVar0 <= 2)
		{
			iLocal_68[iVar0] = unk_0x01B3635C3E8EDD81(26, iLocal_140, vLocal_55[iVar0 /*3*/], fLocal_56[iVar0], 1, true);
			unk_0x91629AC1E1F78419(iLocal_68[iVar0], 17, true);
			unk_0x2E35C4FA5F0ED22F(iLocal_68[iVar0], true);
			unk_0xB105531EDD3DE51B(iLocal_68[iVar0], false);
			unk_0xC8FD3EBBB90E8D7F(iLocal_68[iVar0], 269, true);
			iVar0++;
		}
		unk_0xF85FAED5BA864282(iLocal_68[0], "pedShopper[0]");
		unk_0xF85FAED5BA864282(iLocal_68[1], "pedShopper[1]");
		unk_0xF85FAED5BA864282(iLocal_68[2], "pedShopper[2]");
		unk_0xB0031DDAE4FF0BC3(iLocal_67[0], 0, 0, 0, 0);
		unk_0xB0031DDAE4FF0BC3(iLocal_67[0], 2, 1, 1, 0);
		unk_0xB0031DDAE4FF0BC3(iLocal_67[0], 3, 1, 0, 0);
		unk_0xB0031DDAE4FF0BC3(iLocal_67[0], 4, 0, 0, 0);
		unk_0xB0031DDAE4FF0BC3(iLocal_67[0], 5, 0, 0, 0);
		unk_0xB62398E536F695FC(iLocal_67[0], iLocal_135, "random@shop_robbery", "robbery_intro_loop_f", 8f, -8f, 0, 0, 1148846080, 0);
		unk_0x36C3B58DA78A2679(iLocal_67[0], "A_M_Y_BevHills_01_White_Mini_01");
		func_174(&uLocal_151, 5, iLocal_67[0], "REROBShopworker", 0, 1);
		unk_0xB0031DDAE4FF0BC3(iLocal_67[1], 0, 1, 0, 0);
		unk_0xB0031DDAE4FF0BC3(iLocal_67[1], 2, 0, 0, 0);
		unk_0xB0031DDAE4FF0BC3(iLocal_67[1], 3, 0, 0, 0);
		unk_0xB0031DDAE4FF0BC3(iLocal_67[1], 4, 1, 2, 0);
		unk_0xB0031DDAE4FF0BC3(iLocal_67[1], 5, 0, 0, 0);
		unk_0xEE7131C3C73E7282(iLocal_67[1], -1);
		unk_0x22321800954A532E(iLocal_67[1], true);
		unk_0xB0031DDAE4FF0BC3(iLocal_67[2], 0, 1, 0, 0);
		unk_0xB0031DDAE4FF0BC3(iLocal_67[2], 2, 1, 0, 0);
		unk_0xB0031DDAE4FF0BC3(iLocal_67[2], 3, 0, 2, 0);
		unk_0xB0031DDAE4FF0BC3(iLocal_67[2], 4, 1, 2, 0);
		unk_0xB0031DDAE4FF0BC3(iLocal_67[2], 5, 0, 0, 0);
		unk_0xEE7131C3C73E7282(iLocal_67[2], -1);
		unk_0x22321800954A532E(iLocal_67[2], true);
		iLocal_135 = unk_0xD0D858E538FD01C3(-812.37f, -185.65f, 37.5804f, 0f, 0f, 30f, 2);
		unk_0xC2BF3DE5E47F801D(iLocal_135, true);
		unk_0xB0031DDAE4FF0BC3(iLocal_68[0], 0, 0, 1, 0);
		unk_0xB0031DDAE4FF0BC3(iLocal_68[0], 2, 0, 0, 0);
		unk_0xB0031DDAE4FF0BC3(iLocal_68[0], 3, 0, 1, 0);
		unk_0xB0031DDAE4FF0BC3(iLocal_68[0], 4, 0, 1, 0);
		unk_0xB0031DDAE4FF0BC3(iLocal_68[0], 8, 0, 0, 0);
		unk_0xB62398E536F695FC(iLocal_68[0], iLocal_135, "random@robbery", "cower", 8f, -8f, 5, 0, 1148846080, 0);
		unk_0x22321800954A532E(iLocal_68[0], true);
		iLocal_135 = unk_0xD0D858E538FD01C3(-817.5606f, -190.8273f, 37.6114f, 0f, 0f, 25.8399f, 2);
		unk_0xC2BF3DE5E47F801D(iLocal_135, true);
		unk_0xB0031DDAE4FF0BC3(iLocal_68[1], 0, 0, 0, 0);
		unk_0xB0031DDAE4FF0BC3(iLocal_68[1], 2, 0, 1, 0);
		unk_0xB0031DDAE4FF0BC3(iLocal_68[1], 3, 1, 1, 0);
		unk_0xB0031DDAE4FF0BC3(iLocal_68[1], 4, 1, 1, 0);
		unk_0xB0031DDAE4FF0BC3(iLocal_68[1], 8, 0, 0, 0);
		unk_0xB62398E536F695FC(iLocal_68[1], iLocal_135, "random@robbery", "cower", 8f, -8f, 5, 0, 1148846080, 0);
		unk_0x22321800954A532E(iLocal_68[1], true);
		iLocal_135 = unk_0xD0D858E538FD01C3(-816.1862f, -182.897f, 37.68f, 0f, 0f, 30f, 2);
		unk_0xC2BF3DE5E47F801D(iLocal_135, true);
		unk_0xB0031DDAE4FF0BC3(iLocal_68[2], 0, 1, 0, 0);
		unk_0xB0031DDAE4FF0BC3(iLocal_68[2], 2, 0, 2, 0);
		unk_0xB0031DDAE4FF0BC3(iLocal_68[2], 3, 0, 1, 0);
		unk_0xB0031DDAE4FF0BC3(iLocal_68[2], 4, 1, 0, 0);
		unk_0xB0031DDAE4FF0BC3(iLocal_68[2], 8, 0, 0, 0);
		unk_0xB62398E536F695FC(iLocal_68[2], iLocal_135, "random@robbery", "cower", 8f, -8f, 5, 0, 1148846080, 0);
		unk_0x22321800954A532E(iLocal_68[2], true);
		unk_0x57D65255D3D3B6A7(iLocal_66[0], iLocal_67[0], -1, 0);
		unk_0x6935EBF9868982DC(-871f, -246f, 0f, -798f, -163f, 50f, false, 1);
		unk_0x39AE1324EE63FA44("Hairdresser1");
		func_173(0, 1);
		func_172(0);
		SYSTEM::WAIT(500);
		func_170(0, 0, 0);
	}
	else if (iLocal_47 == 2)
	{
		unk_0x1DAA351326EA3537(vLocal_72 - Vector(20f, 20f, 20f), vLocal_72 + Vector(20f, 20f, 20f), 0, 1, 1, 1);
		unk_0x784C605D172817C8(iLocal_102, vLocal_58, 2, 1);
		iLocal_67[0] = unk_0x01B3635C3E8EDD81(26, iLocal_138, vLocal_53[0 /*3*/], fLocal_54[0], 1, true);
		unk_0xF85FAED5BA864282(iLocal_67[0], "pedWorker[0]");
		unk_0x36C3B58DA78A2679(iLocal_67[0], "A_M_Y_BeachVesp_01_White_Mini_01");
		func_174(&uLocal_151, 6, iLocal_67[0], "REROBShopworker2", 0, 1);
		iLocal_67[1] = unk_0x01B3635C3E8EDD81(26, iLocal_137, vLocal_53[1 /*3*/], fLocal_54[1], 1, true);
		unk_0xF85FAED5BA864282(iLocal_67[1], "pedWorker[1]");
		iVar0 = 0;
		while (iVar0 <= (iLocal_64 - 1))
		{
			unk_0x91629AC1E1F78419(iLocal_67[iVar0], 17, true);
			unk_0x2E35C4FA5F0ED22F(iLocal_67[iVar0], true);
			unk_0xB105531EDD3DE51B(iLocal_67[iVar0], false);
			unk_0xC8FD3EBBB90E8D7F(iLocal_67[iVar0], 269, true);
			iVar0++;
		}
		iLocal_68[0] = unk_0x01B3635C3E8EDD81(26, iLocal_139, vLocal_55[0 /*3*/], fLocal_56[0], 1, true);
		unk_0xF85FAED5BA864282(iLocal_68[0], "pedShopper[0]");
		iLocal_68[1] = unk_0x01B3635C3E8EDD81(26, iLocal_140, vLocal_55[1 /*3*/], fLocal_56[1], 1, true);
		unk_0xF85FAED5BA864282(iLocal_68[1], "pedShopper[1]");
		iVar0 = 0;
		while (iVar0 <= (iLocal_65 - 1))
		{
			unk_0x91629AC1E1F78419(iLocal_68[iVar0], 17, true);
			unk_0x2E35C4FA5F0ED22F(iLocal_68[iVar0], true);
			unk_0xB105531EDD3DE51B(iLocal_68[iVar0], false);
			unk_0xC8FD3EBBB90E8D7F(iLocal_68[iVar0], 269, true);
			iVar0++;
		}
		unk_0xE896C0AD02364F2A(iLocal_67[0], "random@shop_robbery", "robbery_intro_loop_f", 4f, -4f, -1, 9, 0, 0, 0, 0);
		unk_0x22321800954A532E(iLocal_67[0], true);
		unk_0xE896C0AD02364F2A(iLocal_67[1], "random@robbery", "f_cower_02", 4f, -4f, -1, 9, 0, 0, 0, 0);
		unk_0x22321800954A532E(iLocal_67[1], true);
		unk_0xEE7131C3C73E7282(iLocal_68[0], -1);
		unk_0x22321800954A532E(iLocal_68[0], true);
		unk_0xE896C0AD02364F2A(iLocal_68[1], "random@robbery", "f_cower_01", 4f, -4f, -1, 9, 0, 0, 0, 0);
		unk_0x22321800954A532E(iLocal_68[1], true);
		vLocal_126 = { -1192.01f, -768.929f, 16.358f };
		vLocal_128 = { 0f, 0f, -59.5f };
		iLocal_135 = unk_0xD0D858E538FD01C3(vLocal_126, vLocal_128, 2);
		unk_0xC2BF3DE5E47F801D(iLocal_135, true);
		unk_0xB62398E536F695FC(iLocal_66[0], iLocal_135, "random@shop_robbery", "robbery_intro_loop_b", 2f, -2f, 0, 0, 1148846080, 0);
		unk_0xB62398E536F695FC(iLocal_67[0], iLocal_135, "random@shop_robbery", "robbery_intro_loop_f", 2f, -2f, 0, 0, 1148846080, 0);
		unk_0xE896C0AD02364F2A(iLocal_66[1], "random@shop_robbery", "robbery_intro_loop_a", 16f, -4f, -1, 9, 0, 0, 0, 0);
		func_173(14, 1);
		func_172(14);
		SYSTEM::WAIT(500);
		func_170(14, 0, 0);
	}
	func_174(&uLocal_151, 3, iLocal_66[0], "REROBRobber1", 0, 1);
	func_174(&uLocal_151, 4, iLocal_66[1], "REROBRobber2", 0, 1);
	unk_0x2CA123B0622F495C(joaat("a_f_y_bevhills_02"));
	unk_0x2CA123B0622F495C(joaat("a_m_y_bevhills_02"));
	unk_0x2CA123B0622F495C(joaat("a_m_y_hipster_01"));
	unk_0x2CA123B0622F495C(joaat("a_f_y_hipster_04"));
	unk_0x2CA123B0622F495C(joaat("g_m_y_korean_01"));
}

void func_170(int iParam0, bool bParam1, bool bParam2)//Position - 0xCA84
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7AF0088ABFA713B6())
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	if (bParam2)
	{
		if (bParam1)
		{
			iVar0 = 4;
		}
		else
		{
			iVar0 = 3;
		}
	}
	iVar1 = func_171(iParam0, 0);
	if (iVar1 != 226)
	{
		func_74(iVar1, iVar0);
	}
	iVar1 = func_171(iParam0, 1);
	if (iVar1 != 226)
	{
		func_74(iVar1, iVar0);
	}
}

int func_171(int iParam0, int iParam1)//Position - 0xCAE7
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				return 6;
			}
			if (iParam1 == 1)
			{
				return 7;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				return 0;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				return 1;
			}
			break;
		
		case 3:
			if (iParam1 == 0)
			{
				return 2;
			}
			break;
		
		case 4:
			if (iParam1 == 0)
			{
				return 3;
			}
			break;
		
		case 5:
			if (iParam1 == 0)
			{
				return 4;
			}
			break;
		
		case 6:
			if (iParam1 == 0)
			{
				return 5;
			}
			break;
		
		case 7:
			if (iParam1 == 0)
			{
				return 8;
			}
			if (iParam1 == 1)
			{
				return 9;
			}
			break;
		
		case 8:
			if (iParam1 == 0)
			{
				return 10;
			}
			if (iParam1 == 1)
			{
				return 11;
			}
			break;
		
		case 9:
			if (iParam1 == 0)
			{
				return 12;
			}
			if (iParam1 == 1)
			{
				return 13;
			}
			break;
		
		case 10:
			if (iParam1 == 0)
			{
				return 14;
			}
			if (iParam1 == 1)
			{
				return 15;
			}
			break;
		
		case 11:
			if (iParam1 == 0)
			{
				return 16;
			}
			if (iParam1 == 1)
			{
				return 17;
			}
			break;
		
		case 12:
			if (iParam1 == 0)
			{
				return 18;
			}
			if (iParam1 == 1)
			{
				return 19;
			}
			break;
		
		case 13:
			if (iParam1 == 0)
			{
				return 20;
			}
			if (iParam1 == 1)
			{
				return 21;
			}
			break;
		
		case 14:
			if (iParam1 == 0)
			{
				return 22;
			}
			break;
		
		case 15:
			if (iParam1 == 0)
			{
				return 23;
			}
			break;
		
		case 16:
			if (iParam1 == 0)
			{
				return 24;
			}
			break;
		
		case 17:
			if (iParam1 == 0)
			{
				return 25;
			}
			break;
		
		case 18:
			if (iParam1 == 0)
			{
				return 26;
			}
			if (iParam1 == 1)
			{
				return 27;
			}
			break;
		
		case 19:
			if (iParam1 == 0)
			{
				return 28;
			}
			if (iParam1 == 1)
			{
				return 29;
			}
			break;
		
		case 20:
			if (iParam1 == 0)
			{
				return 30;
			}
			if (iParam1 == 1)
			{
				return 31;
			}
			break;
		
		case 22:
			if (iParam1 == 0)
			{
				return 32;
			}
			break;
		
		case 23:
			if (iParam1 == 0)
			{
				return 33;
			}
			break;
		
		case 24:
			if (iParam1 == 0)
			{
				return 34;
			}
			break;
		
		case 25:
			if (iParam1 == 0)
			{
				return 35;
			}
			break;
		
		case 26:
			if (iParam1 == 0)
			{
				return 36;
			}
			break;
		
		case 27:
			if (iParam1 == 0)
			{
				return 37;
			}
			break;
		
		case 39:
			if (iParam1 == 0)
			{
				return 54;
			}
			break;
		
		case 40:
			if (iParam1 == 0)
			{
				return 55;
			}
			break;
		
		case 41:
			if (iParam1 == 0)
			{
				return 56;
			}
			break;
		
		case 42:
			if (iParam1 == 0)
			{
				return 58;
			}
			if (iParam1 == 1)
			{
				return 57;
			}
			break;
		
		case 43:
			if (iParam1 == 0)
			{
				return 60;
			}
			if (iParam1 == 1)
			{
				return 59;
			}
			break;
		
		case 44:
			if (iParam1 == 0)
			{
				return 225;
			}
			break;
		
		case 28:
			if (iParam1 == 0)
			{
				return 162;
			}
			if (iParam1 == 1)
			{
				return 163;
			}
			break;
		
		case 29:
			if (iParam1 == 0)
			{
				return 165;
			}
			if (iParam1 == 1)
			{
				return 166;
			}
			break;
		
		case 30:
			if (iParam1 == 0)
			{
				return 167;
			}
			if (iParam1 == 1)
			{
				return 168;
			}
			break;
		
		case 31:
			if (iParam1 == 0)
			{
				return 169;
			}
			if (iParam1 == 1)
			{
				return 170;
			}
			break;
		
		case 32:
			if (iParam1 == 0)
			{
				return 171;
			}
			if (iParam1 == 1)
			{
				return 172;
			}
			break;
		
		case 33:
			if (iParam1 == 0)
			{
				return 173;
			}
			if (iParam1 == 1)
			{
				return 174;
			}
			break;
		
		case 34:
			if (iParam1 == 0)
			{
				return 175;
			}
			if (iParam1 == 1)
			{
				return 176;
			}
			break;
		
		case 35:
			if (iParam1 == 0)
			{
				return 177;
			}
			if (iParam1 == 1)
			{
				return 178;
			}
			break;
		
		case 36:
			if (iParam1 == 0)
			{
				return 179;
			}
			if (iParam1 == 1)
			{
				return 180;
			}
			break;
		
		case 37:
			if (iParam1 == 0)
			{
				return 181;
			}
			if (iParam1 == 1)
			{
				return 182;
			}
			break;
		
		case 38:
			if (iParam1 == 0)
			{
				return 183;
			}
			if (iParam1 == 1)
			{
				return 184;
			}
			break;
	}
	return 226;
}

void func_172(int iParam0)//Position - 0xCF68
{
	func_10(iParam0, 9, 1);
}

void func_173(int iParam0, bool bParam1)//Position - 0xCF79
{
	if (bParam1)
	{
		if (!func_11(iParam0, 4, 1))
		{
			func_10(iParam0, 4, 1);
			func_41(137, 1);
		}
	}
	else if (func_11(iParam0, 4, 1))
	{
		func_3(iParam0, 4, 1);
	}
}

void func_174(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0xCFB7
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

void func_175()//Position - 0xD052
{
	if (!iLocal_74)
	{
		iLocal_88 = unk_0x9911032C958CE1B0(vLocal_51[0 /*3*/]);
		unk_0x184188AF06D2A771(iLocal_88);
		iLocal_74 = 1;
	}
}

void func_176()//Position - 0xD076
{
	unk_0xF243B7A14FCFD0F4(iLocal_138);
	unk_0xF243B7A14FCFD0F4(iLocal_139);
	unk_0xF243B7A14FCFD0F4(iLocal_140);
	unk_0xF243B7A14FCFD0F4(iLocal_141);
	unk_0xF243B7A14FCFD0F4(joaat("prop_anim_cash_pile_01"));
	unk_0xF243B7A14FCFD0F4(joaat("prop_cs_duffel_01"));
	unk_0x44840FD68E426678("re_shoprobbery");
	unk_0x44840FD68E426678("re_shoprobbery2");
	unk_0x522053D86D6E1C7A("random@robbery");
	unk_0x522053D86D6E1C7A("random@shop_robbery");
	unk_0x6FED2D1AA2EBF334("RE51A_SHOP");
	if ((((((((((unk_0xD6513D668481290A(iLocal_138) && unk_0xD6513D668481290A(iLocal_139)) && unk_0xD6513D668481290A(iLocal_140)) && unk_0xD6513D668481290A(iLocal_141)) && unk_0xD6513D668481290A(joaat("prop_anim_cash_pile_01"))) && unk_0xD6513D668481290A(joaat("prop_cs_duffel_01"))) && unk_0x1E8349F219AC5AF9("re_shoprobbery")) && unk_0x1E8349F219AC5AF9("re_shoprobbery2")) && unk_0xF9E082857622D91E("random@robbery")) && unk_0xF9E082857622D91E("random@shop_robbery")) && unk_0x6FED2D1AA2EBF334("RE51A_SHOP"))
	{
		iLocal_49 = 1;
	}
	else
	{
		unk_0xF243B7A14FCFD0F4(iLocal_138);
		unk_0xF243B7A14FCFD0F4(iLocal_139);
		unk_0xF243B7A14FCFD0F4(iLocal_140);
		unk_0xF243B7A14FCFD0F4(iLocal_141);
		unk_0xF243B7A14FCFD0F4(joaat("prop_anim_cash_pile_01"));
		unk_0xF243B7A14FCFD0F4(joaat("prop_cs_duffel_01"));
		unk_0x522053D86D6E1C7A("random@robbery");
		unk_0x522053D86D6E1C7A("random@shop_robbery");
		unk_0x6FED2D1AA2EBF334("RE51A_SHOP");
	}
}

void func_177()//Position - 0xD19B
{
	iLocal_80[0] = 0;
	iLocal_80[1] = 0;
	if (iLocal_47 == 1)
	{
		iLocal_138 = joaat("a_f_y_bevhills_02");
		iLocal_139 = joaat("a_m_y_bevhills_02");
		iLocal_140 = joaat("a_f_y_bevhills_02");
		iLocal_141 = joaat("g_m_y_korean_01");
		iLocal_63 = 2;
		iLocal_64 = 3;
		iLocal_65 = 3;
		vLocal_51[0 /*3*/] = { -821.4461f, -184.8474f, 37.5668f };
		fLocal_52[0] = 252.381f;
		vLocal_51[1 /*3*/] = { -819.4664f, -186.8146f, 36.5671f };
		fLocal_52[1] = -153.9562f;
		vLocal_53[0 /*3*/] = { -821.941f, -183.3325f, 36.5689f };
		fLocal_54[0] = 203.3684f;
		vLocal_53[1 /*3*/] = { -813.6672f, -185.5652f, 36.5689f };
		fLocal_54[1] = 90.1761f;
		vLocal_53[2 /*3*/] = { -816.1049f, -183.9966f, 36.5689f };
		fLocal_54[2] = 192.7338f;
		vLocal_55[0 /*3*/] = { -813.008f, -184.931f, 37.869f };
		fLocal_56[0] = 337.68f;
		vLocal_55[1 /*3*/] = { -817.5606f, -190.8273f, 37.3114f };
		fLocal_56[1] = 25.8399f;
		vLocal_55[2 /*3*/] = { -816.1862f, -182.897f, 37.6304f };
		fLocal_56[2] = 30f;
		vLocal_57 = { -822.2148f, -184.0822f, 37.7027f };
		vLocal_58 = { -1.8236f, 0.6172f, 75.8024f };
		vLocal_59 = { -808.5918f, -180.0378f, 36.5689f };
		iLocal_117 = joaat("prop_cs_duffel_01");
		iLocal_118 = 2000;
		vLocal_123 = { -822.8538f, -187.7645f, 36.5792f };
	}
	else if (iLocal_47 == 2)
	{
		iLocal_137 = joaat("a_m_y_hipster_01");
		iLocal_138 = joaat("a_f_y_hipster_04");
		iLocal_139 = joaat("a_m_y_hipster_01");
		iLocal_140 = joaat("a_f_y_hipster_04");
		iLocal_141 = joaat("g_m_y_strpunk_02");
		iLocal_63 = 2;
		iLocal_64 = 2;
		iLocal_65 = 2;
		vLocal_51[0 /*3*/] = { -1193.045f, -769.304f, 16.321f };
		fLocal_52[0] = -85.5f;
		vLocal_51[1 /*3*/] = { -1199.045f, -778.8358f, 16.3277f };
		fLocal_52[1] = 329.1899f;
		vLocal_53[0 /*3*/] = { -1193.802f, -766.8922f, 16.331f };
		fLocal_54[0] = 221.3152f;
		vLocal_53[1 /*3*/] = { -1193.85f, -771.4392f, 16.3227f };
		fLocal_54[1] = 247.1149f;
		vLocal_55[0 /*3*/] = { -1184.359f, -767.0463f, 16.3468f };
		fLocal_56[0] = 103.3015f;
		vLocal_55[1 /*3*/] = { -1185.932f, -770.624f, 16.344f };
		fLocal_56[1] = 43.215f;
		vLocal_57 = { -1192.968f, -767.0651f, 17.2968f };
		vLocal_58 = { 0f, 0f, -128.52f };
		vLocal_59 = { -1180.457f, -763.9163f, 16.3267f };
		iLocal_117 = joaat("prop_cs_duffel_01");
		iLocal_118 = 2000;
		vLocal_123 = { -1201.006f, -777.4955f, 16.3235f };
	}
	bLocal_50 = true;
}

int func_178()//Position - 0xD47A
{
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), vLocal_43) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(unk_0xB5D9AE572C19509E(unk_0xBC25C936A095B5BA())) > 1369f && !func_189())
		{
			return 0;
		}
	}
	if (func_185())
	{
		return 1;
	}
	if (func_179(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_179(float fParam0, bool bParam1)//Position - 0xD500
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
		if (func_45(func_43()))
		{
			iVar5 = func_66();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (unk_0xFA30DFD0084E92FE(Global_19B04.f_4871[iVar1 /*6*/], 2) && !unk_0xFA30DFD0084E92FE(Global_19B04.f_4871[iVar1 /*6*/], 3))
				{
					func_180(iVar1, &Var0);
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

void func_180(int iParam0, var uParam1)//Position - 0xD5B7
{
	switch (iParam0)
	{
		case 0:
			func_181(uParam1, "Abigail1", func_183(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_182(iParam0), 1, 0);
			break;
		
		case 1:
			func_181(uParam1, "Abigail2", func_183(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_182(iParam0), 1, 0);
			break;
		
		case 2:
			func_181(uParam1, "Barry1", func_183(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_182(iParam0), 1, 0);
			break;
		
		case 3:
			func_181(uParam1, "Barry2", func_183(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_182(iParam0), 1, 1);
			break;
		
		case 4:
			func_181(uParam1, "Barry3", func_183(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_182(iParam0), 0, 0);
			break;
		
		case 5:
			func_181(uParam1, "Barry3A", func_183(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_182(iParam0), 0, 1);
			break;
		
		case 6:
			func_181(uParam1, "Barry3C", func_183(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_182(iParam0), 0, 1);
			break;
		
		case 7:
			func_181(uParam1, "Barry4", func_183(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_182(iParam0), 0, 0);
			break;
		
		case 8:
			func_181(uParam1, "Dreyfuss1", func_183(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_182(iParam0), 0, 0);
			break;
		
		case 9:
			func_181(uParam1, "Epsilon1", func_183(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_182(iParam0), 0, 0);
			break;
		
		case 10:
			func_181(uParam1, "Epsilon2", func_183(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_182(iParam0), 1, 0);
			break;
		
		case 11:
			func_181(uParam1, "Epsilon3", func_183(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_182(iParam0), 0, 0);
			break;
		
		case 12:
			func_181(uParam1, "Epsilon4", func_183(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_182(iParam0), 0, 0);
			break;
		
		case 13:
			func_181(uParam1, "Epsilon5", func_183(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_182(iParam0), 1, 0);
			break;
		
		case 14:
			func_181(uParam1, "Epsilon6", func_183(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_182(iParam0), 0, 1);
			break;
		
		case 15:
			func_181(uParam1, "Epsilon7", func_183(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_182(iParam0), 0, 0);
			break;
		
		case 16:
			func_181(uParam1, "Epsilon8", func_183(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_182(iParam0), 1, 0);
			break;
		
		case 17:
			func_181(uParam1, "Extreme1", func_183(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_182(iParam0), 0, 1);
			break;
		
		case 18:
			func_181(uParam1, "Extreme2", func_183(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_182(iParam0), 0, 1);
			break;
		
		case 19:
			func_181(uParam1, "Extreme3", func_183(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_182(iParam0), 0, 1);
			break;
		
		case 20:
			func_181(uParam1, "Extreme4", func_183(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_182(iParam0), 0, 0);
			break;
		
		case 21:
			func_181(uParam1, "Fanatic1", func_183(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_182(iParam0), 1, 0);
			break;
		
		case 22:
			func_181(uParam1, "Fanatic2", func_183(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_182(iParam0), 1, 0);
			break;
		
		case 23:
			func_181(uParam1, "Fanatic3", func_183(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_182(iParam0), 0, 1);
			break;
		
		case 24:
			func_181(uParam1, "Hao1", func_183(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_182(iParam0), 0, 1);
			break;
		
		case 25:
			func_181(uParam1, "Hunting1", func_183(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_182(iParam0), 0, 1);
			break;
		
		case 26:
			func_181(uParam1, "Hunting2", func_183(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_182(iParam0), 0, 1);
			break;
		
		case 27:
			func_181(uParam1, "Josh1", func_183(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_182(iParam0), 1, 0);
			break;
		
		case 28:
			func_181(uParam1, "Josh2", func_183(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_182(iParam0), 1, 1);
			break;
		
		case 29:
			func_181(uParam1, "Josh3", func_183(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_182(iParam0), 1, 1);
			break;
		
		case 30:
			func_181(uParam1, "Josh4", func_183(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_182(iParam0), 1, 0);
			break;
		
		case 31:
			func_181(uParam1, "Maude1", func_183(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_182(iParam0), 0, 1);
			break;
		
		case 32:
			func_181(uParam1, "Minute1", func_183(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_182(iParam0), 0, 1);
			break;
		
		case 33:
			func_181(uParam1, "Minute2", func_183(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_182(iParam0), 0, 1);
			break;
		
		case 34:
			func_181(uParam1, "Minute3", func_183(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_182(iParam0), 0, 1);
			break;
		
		case 35:
			func_181(uParam1, "MrsPhilips1", func_183(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_182(iParam0), 0, 0);
			break;
		
		case 36:
			func_181(uParam1, "MrsPhilips2", func_183(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_182(iParam0), 0, 0);
			break;
		
		case 37:
			func_181(uParam1, "Nigel1", func_183(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_182(iParam0), 1, 0);
			break;
		
		case 38:
			func_181(uParam1, "Nigel1A", func_183(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_182(iParam0), 1, 1);
			break;
		
		case 39:
			func_181(uParam1, "Nigel1B", func_183(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_182(iParam0), 1, 1);
			break;
		
		case 40:
			func_181(uParam1, "Nigel1C", func_183(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_182(iParam0), 1, 1);
			break;
		
		case 41:
			func_181(uParam1, "Nigel1D", func_183(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_182(iParam0), 1, 1);
			break;
		
		case 42:
			func_181(uParam1, "Nigel2", func_183(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_182(iParam0), 1, 1);
			break;
		
		case 43:
			func_181(uParam1, "Nigel3", func_183(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_182(iParam0), 1, 1);
			break;
		
		case 44:
			func_181(uParam1, "Omega1", func_183(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_182(iParam0), 0, 0);
			break;
		
		case 45:
			func_181(uParam1, "Omega2", func_183(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_182(iParam0), 0, 0);
			break;
		
		case 46:
			func_181(uParam1, "Paparazzo1", func_183(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_182(iParam0), 0, 1);
			break;
		
		case 47:
			func_181(uParam1, "Paparazzo2", func_183(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_182(iParam0), 0, 1);
			break;
		
		case 48:
			func_181(uParam1, "Paparazzo3", func_183(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_182(iParam0), 0, 0);
			break;
		
		case 49:
			func_181(uParam1, "Paparazzo3A", func_183(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_182(iParam0), 0, 1);
			break;
		
		case 50:
			func_181(uParam1, "Paparazzo3B", func_183(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_182(iParam0), 0, 1);
			break;
		
		case 51:
			func_181(uParam1, "Paparazzo4", func_183(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_182(iParam0), 0, 0);
			break;
		
		case 52:
			func_181(uParam1, "Rampage1", func_183(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_182(iParam0), 0, 0);
			break;
		
		case 54:
			func_181(uParam1, "Rampage3", func_183(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_182(iParam0), 1, 0);
			break;
		
		case 55:
			func_181(uParam1, "Rampage4", func_183(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_182(iParam0), 1, 0);
			break;
		
		case 56:
			func_181(uParam1, "Rampage5", func_183(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_182(iParam0), 0, 0);
			break;
		
		case 53:
			func_181(uParam1, "Rampage2", func_183(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_182(iParam0), 1, 0);
			break;
		
		case 57:
			func_181(uParam1, "TheLastOne", func_183(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_182(iParam0), 0, 1);
			break;
		
		case 58:
			func_181(uParam1, "Tonya1", func_183(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_182(iParam0), 0, 1);
			break;
		
		case 59:
			func_181(uParam1, "Tonya2", func_183(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_182(iParam0), 0, 1);
			break;
		
		case 60:
			func_181(uParam1, "Tonya3", func_183(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_182(iParam0), 0, 1);
			break;
		
		case 61:
			func_181(uParam1, "Tonya4", func_183(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_182(iParam0), 0, 1);
			break;
		
		case 62:
			func_181(uParam1, "Tonya5", func_183(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_182(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_181(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0xE7FE
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

int func_182(int iParam0)//Position - 0xE88F
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

struct<2> func_183(int iParam0)//Position - 0xEBD5
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_184(iParam0) };
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

struct<2> func_184(int iParam0)//Position - 0xEC0D
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

int func_185()//Position - 0xF05A
{
	if (func_188() && !func_189())
	{
		return 1;
	}
	if (func_187() && func_186())
	{
		return 1;
	}
	return 0;
}

bool func_186()//Position - 0xF08C
{
	return Global_199EA > 0;
}

int func_187()//Position - 0xF09A
{
	if (Global_15FA6 != -1)
	{
		return 1;
	}
	return 0;
}

int func_188()//Position - 0xF0AF
{
	if (Global_15FA6 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_147B0[Global_15FA6 /*34*/].f_F, 20);
	}
	return 0;
}

int func_189()//Position - 0xF0D5
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

int func_190()//Position - 0xF0F2
{
	if (!func_158(5))
	{
		return 1;
	}
	if (func_185())
	{
		return 1;
	}
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (SYSTEM::VMAG2(unk_0xB5D9AE572C19509E(unk_0xBC25C936A095B5BA())) > 1369f && !func_189())
		{
			return 0;
		}
	}
	if (func_179(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_191()//Position - 0xF154
{
	if ((Global_19AF9 == func_70() && unk_0x8520DF5301DD9811()) && Global_19AFA)
	{
		return 1;
	}
	return 0;
}

void func_192(int iParam0)//Position - 0xF17F
{
	if (iParam0 == -1)
	{
		iParam0 = func_70();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_194(iParam0);
	unk_0x8A623F2A0D19557F(0);
	unk_0xCB0D7BF24DBB59C6(1);
	Global_19AF6 = 0;
	func_193();
}

void func_193()//Position - 0xF1B5
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

void func_194(int iParam0)//Position - 0xF1F2
{
	Global_19AF9 = iParam0;
}

int func_195(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0xF200
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
		iParam1 = func_70();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_224())
		{
			return 0;
		}
	}
	vLocal_43 = { vParam0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			vVar1 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
			if (SYSTEM::VMAG2(unk_0xB5D9AE572C19509E(unk_0xBC25C936A095B5BA())) > 1369f && !func_189())
			{
				return 0;
			}
		}
		if (!Global_19B04.f_2360)
		{
			return 0;
		}
		if (func_56(0))
		{
			return 0;
		}
		if (func_185())
		{
			return 0;
		}
		if (func_223())
		{
			return 0;
		}
		if (Global_19AF9 != -1)
		{
			return 0;
		}
		if (func_45(func_43()))
		{
			if (func_179(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()) && !bParam4)
		{
			if ((vVar1.z - vLocal_43.z) > 50f)
			{
				return 0;
			}
		}
		if (!func_222(iParam1))
		{
			return 0;
		}
		if (func_45(func_43()))
		{
			if (func_221(func_43()) == 4 || func_221(func_43()) == 5)
			{
				return 0;
			}
		}
		if (func_45(func_43()))
		{
			if (!func_220(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_219(Global_19B04.f_6186.f_2B[iParam1]))
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
		if (func_218())
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
		if (!func_209(4))
		{
			return 0;
		}
		if (!func_158(5))
		{
			return 0;
		}
		if (func_208(iParam1, iParam2) && !bParam3)
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
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_208(0, 0))
		{
			return 0;
		}
		if (Global_634F)
		{
			return 0;
		}
		if (func_222(30) && !func_208(30, 0))
		{
			if (iParam1 != 30)
			{
				if (SYSTEM::VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_45(func_43()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				vVar3 = { Global_19B04.f_932.f_21B.f_8E8[iVar2 /*3*/] };
				iVar4 = Global_19B04.f_932.f_21B.f_8E4[iVar2];
				if (func_207(iVar4))
				{
					if (func_197(iVar2))
					{
						if (!func_196(vVar3, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false), vVar3) < (210f * 210f))
							{
								if (func_43() != iVar2)
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

bool func_196(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0xF59A
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_197(int iParam0)//Position - 0xF5E1
{
	int iVar0;
	
	iVar0 = Global_19B04.f_932.f_21B.f_8E4[iParam0];
	return func_198(iVar0);
}

int func_198(int iParam0)//Position - 0xF602
{
	return func_199(iParam0, 1);
}

int func_199(int iParam0, int iParam1)//Position - 0xF611
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_207(iParam0))
	{
		return 0;
	}
	func_200(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_200(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0xF664
{
	func_201(func_84(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_201(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0xF682
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_206(iParam0, iParam1))
	{
		iVar0 = func_91(iParam1);
		iVar1 = func_89(iParam0);
		iVar2 = (func_89(iParam0) - func_89(iParam1));
		iVar3 = (func_91(iParam0) - func_91(iParam1));
		iVar4 = (func_205(iParam0) - func_205(iParam1));
		iVar5 = (func_83(iParam0) - func_83(iParam1));
		iVar6 = (func_204(iParam0) - func_204(iParam1));
		iVar7 = (func_203(iParam0) - func_203(iParam1));
	}
	else
	{
		iVar0 = func_91(iParam0);
		iVar1 = func_89(iParam1);
		iVar2 = (func_89(iParam1) - func_89(iParam0));
		iVar3 = (func_91(iParam1) - func_91(iParam0));
		iVar4 = (func_205(iParam1) - func_205(iParam0));
		iVar5 = (func_83(iParam1) - func_83(iParam0));
		iVar6 = (func_204(iParam1) - func_204(iParam0));
		iVar7 = (func_203(iParam1) - func_203(iParam0));
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
		iVar4 = (iVar4 + func_88(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_202(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_202(float fParam0, float fParam1, float fParam2)//Position - 0xF883
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

int func_203(int iParam0)//Position - 0xF8C5
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_204(int iParam0)//Position - 0xF8D8
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_205(int iParam0)//Position - 0xF8EB
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_206(int iParam0, int iParam1)//Position - 0xF8FD
{
	int iVar0;
	int iVar1;
	
	if (!func_207(iParam1) || !func_207(iParam0))
	{
		return 1;
	}
	iVar0 = func_89(iParam0);
	iVar1 = func_89(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_91(iParam0);
	iVar1 = func_91(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_205(iParam0);
	iVar1 = func_205(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_83(iParam0);
	iVar1 = func_83(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_204(iParam0);
	iVar1 = func_204(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_203(iParam0);
	iVar1 = func_203(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_207(int iParam0)//Position - 0xFA09
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
	iVar0 = func_203(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_204(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_83(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_89(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_91(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_205(iParam0);
	if (iVar5 < 1 || iVar5 > func_88(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_208(int iParam0, int iParam1)//Position - 0xFAE5
{
	if (unk_0xFA30DFD0084E92FE(Global_19B04.f_6186.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_209(int iParam0)//Position - 0xFB08
{
	int iVar0;
	
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				iVar0 = func_43();
				if (!func_45(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_217()) || Global_1974B) || Global_62BF) || func_216()) || func_124(8, -1)) || func_215()) || func_214()) || func_213()) || func_212()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1) || func_217()) || Global_62BF) || func_216()) || func_124(8, -1)) || func_213()) || func_215()) || func_214()) || func_212()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_217()) || Global_1974B) || Global_62BF) || func_216()) || func_124(8, -1)) || func_213()) || func_215()) || func_214()) || func_212()) || Global_19B04.f_1DEB.f_397[iVar0] == 5) || Global_8E64 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_217()) || Global_1974B) || Global_62BF) || func_216()) || func_124(8, -1)) || func_215()) || func_214()) || func_212()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_217() || unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0) || func_124(8, -1)) || func_212()) || func_211()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_124(8, -1) || func_215()) || func_214()) || func_211()) || func_210())
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
							if ((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || func_217()) || Global_62BF) || func_216()) || func_124(8, -1)) || func_214()) || func_213()) || func_212()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || !unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) || !unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F())) || !unk_0x726D9204B160D23E()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || func_217()) || func_214()) || Global_1974B) || Global_62BF) || func_216()) || Global_90C1) || func_124(8, -1)) || func_213()) || func_211()) || func_212()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || !unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) || !unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F())) || !unk_0x726D9204B160D23E()) || unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0)) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1)) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0x9273B3557334635D(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || func_217()) || Global_1974B) || Global_62BF) || func_216()) || func_124(8, -1)) || func_213()) || func_211()) || func_215()) || func_214()) || func_212())
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

var func_210()//Position - 0x10225
{
	return Global_16B42.f_1;
}

int func_211()//Position - 0x10233
{
	if (Global_15FA6 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_147B0[Global_15FA6 /*34*/].f_F, 13);
	}
	return 0;
}

int func_212()//Position - 0x10259
{
	if (unk_0xB731B8C5BCE89836(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_213()//Position - 0x10273
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

bool func_214()//Position - 0x1029D
{
	return Global_16B4F.f_142 > 0;
}

bool func_215()//Position - 0x102AE
{
	return Global_16B4F.f_141 > 0;
}

var func_216()//Position - 0x102BF
{
	return Global_140856;
}

int func_217()//Position - 0x102CB
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		return Global_161D2.f_2C == 1;
	}
	return 0;
}

int func_218()//Position - 0x102E7
{
	func_122();
	if (Global_C60[Global_389D /*2811*/][0 /*281*/].f_103 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_219(int iParam0)//Position - 0x1030F
{
	return func_206(func_84(), iParam0);
}

int func_220(int iParam0, int iParam1, int iParam2)//Position - 0x10321
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_43();
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

int func_221(int iParam0)//Position - 0x10405
{
	if (!func_45(iParam0))
	{
		return 7;
	}
	return Global_19B04.f_1DEB.f_397[iParam0];
}

bool func_222(int iParam0)//Position - 0x10429
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_224())
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

int func_223()//Position - 0x10487
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

int func_224()//Position - 0x104CB
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

bool func_225(int iParam0)//Position - 0x10586
{
	return func_11(iParam0, 0, 0);
}

bool func_226(int iParam0)//Position - 0x10596
{
	return func_11(iParam0, 7, 1);
}

void func_227()//Position - 0x105A6
{
	int iVar0;
	
	if (iLocal_142)
	{
		func_128(0);
		unk_0x748798F6C2AB96B7("RE51A_SHOP");
		unk_0xB830DBD32591E1BC();
		unk_0x832ADB79A274D4E9(-871f, -246f, 0f, -798f, -163f, 50f, true);
		unk_0x4CE01E22F13D3913("re_shoprobbery");
		unk_0x4CE01E22F13D3913("re_shoprobbery2");
		iVar0 = 0;
		while (iVar0 <= (iLocal_63 - 1))
		{
			if (unk_0x724D816EA203A79E(iLocal_66[iVar0]))
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_66[iVar0]) && !unk_0x5237AF95232D78C5(iLocal_66[iVar0], 0))
				{
					unk_0xAB43C54784946B9F(iLocal_66[iVar0], vLocal_59, 150f, -1, 0, 0);
					unk_0x22321800954A532E(iLocal_66[iVar0], true);
				}
				unk_0x02537C8C1BEEB477(&(iLocal_66[iVar0]));
			}
			if (unk_0x2DA8CA50A72528FB(uLocal_116[iVar0]))
			{
				unk_0x07B8ECB35A4ED3AC(&(uLocal_116[iVar0]));
			}
			iVar0++;
		}
		if (unk_0x2DA8CA50A72528FB(iLocal_121))
		{
			unk_0x07B8ECB35A4ED3AC(&iLocal_121);
		}
		iVar0 = 0;
		while (iVar0 <= (iLocal_65 - 1))
		{
			if (unk_0x724D816EA203A79E(iLocal_68[iVar0]))
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_68[iVar0]))
				{
					unk_0xB71D41C0310C93DE(iLocal_68[iVar0], true, 1);
					unk_0xC5A6DFE2B8987B17(&iLocal_87);
					if (iLocal_47 == 1)
					{
						unk_0xE896C0AD02364F2A(0, "random@robbery", "exit_flee", 4f, -4f, -1, 5632, 0f, 0, 1, 0);
					}
					else if (iLocal_47 == 2)
					{
						unk_0xA4E856A8CD53B8DF(iLocal_68[iVar0]);
						unk_0x346129B364057FF6(0, -1201.476f, -790.2733f, 15.5475f, 2f, -1, 1048576000, 0, 1193033728);
					}
					unk_0xAB43C54784946B9F(0, vLocal_59, 150f, -1, 0, 0);
					unk_0x535008C596714F9E(iLocal_87);
					unk_0xA8E6405305C0D7DF(iLocal_68[iVar0], iLocal_87);
					unk_0x02DAF06EA4F08219(&iLocal_87);
					unk_0x22321800954A532E(iLocal_68[iVar0], true);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (iLocal_64 - 1))
		{
			if (unk_0x724D816EA203A79E(iLocal_67[iVar0]))
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_67[iVar0]))
				{
					unk_0xC8FD3EBBB90E8D7F(iLocal_67[iVar0], 317, true);
					unk_0xB71D41C0310C93DE(iLocal_67[iVar0], true, 1);
					if (iVar0 == 0)
					{
						if (!iLocal_114)
						{
							unk_0xA4E856A8CD53B8DF(iLocal_67[iVar0]);
							unk_0xAB43C54784946B9F(iLocal_67[iVar0], vLocal_59, 150f, -1, 0, 0);
						}
						else
						{
							unk_0x2E35C4FA5F0ED22F(iLocal_67[iVar0], false);
						}
					}
					else
					{
						unk_0xC5A6DFE2B8987B17(&iLocal_87);
						if (iLocal_47 == 2)
						{
							unk_0xA4E856A8CD53B8DF(iLocal_67[iVar0]);
							unk_0x346129B364057FF6(0, -1201.476f, -790.2733f, 15.5475f, 2f, -1, 1048576000, 0, 1193033728);
						}
						unk_0xAB43C54784946B9F(0, vLocal_59, 150f, -1, 0, 0);
						unk_0x535008C596714F9E(iLocal_87);
						unk_0xA8E6405305C0D7DF(iLocal_67[iVar0], iLocal_87);
						unk_0x02DAF06EA4F08219(&iLocal_87);
					}
					unk_0x2E35C4FA5F0ED22F(iLocal_67[iVar0], false);
					unk_0xB105531EDD3DE51B(iLocal_67[iVar0], true);
				}
			}
			iVar0++;
		}
		if (unk_0x724D816EA203A79E(iLocal_115))
		{
			unk_0x02537C8C1BEEB477(&iLocal_115);
		}
		if (unk_0x724D816EA203A79E(iLocal_102))
		{
			if (unk_0xE7E55F7532DEE345(iLocal_102))
			{
				unk_0x17175087F2DB6AC8(iLocal_102, 1, true);
			}
			unk_0xF8ED8988FAF2823F(&iLocal_102);
		}
		if (unk_0x724D816EA203A79E(iLocal_106))
		{
			unk_0x1E7A09C1710FB071(&iLocal_106);
		}
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			if (!unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()))
			{
				unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
			}
		}
		unk_0x59B038076F830627(true);
		unk_0x43F06392C4EF25E0(true);
		unk_0xDF53A66AEE1401AA(1f);
		unk_0xAEC867D0DBB7AFEB(5);
		unk_0x6E52C7765A0F4382(1);
		if (iLocal_47 == 1)
		{
			func_173(0, 0);
			func_170(0, 1, 0);
		}
		else if (iLocal_47 == 2)
		{
			func_173(14, 0);
			func_170(14, 1, 0);
		}
	}
	func_228(-1);
	unk_0x95E4B6F3ED223F5A();
}

void func_228(int iParam0)//Position - 0x108F8
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_70();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_191())
	{
		func_232(iParam0);
		unk_0x3FF92BBF0607A406(0, 0);
		Global_19AFB = unk_0x105601648511CC64();
		func_231(30000);
		StringCopy(&cVar0, func_230(Global_19AF9, 1), 64);
		if (func_69(Global_19AF9) > 0)
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
	func_229(&Global_62F8);
	Global_19AFA = 0;
	func_194(-1);
}

void func_229(var uParam0)//Position - 0x109AD
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

char* func_230(int iParam0, bool bParam1)//Position - 0x109EA
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

void func_231(int iParam0)//Position - 0x10C33
{
	Global_8E68 = (unk_0x105601648511CC64() + iParam0);
}

void func_232(int iParam0)//Position - 0x10C45
{
	func_233(iParam0, 0, func_238(iParam0));
}

void func_233(int iParam0, int iParam1, int iParam2)//Position - 0x10C5A
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_84();
	func_236(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_235(iParam0, &uVar0);
	Var1 = { func_234(&uVar0) };
}

struct<16> func_234(var uParam0)//Position - 0x10C89
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_83(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_204(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_203(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_205(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_91(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_89(*uParam0), 64);
	return Var0;
}

void func_235(int iParam0, var uParam1)//Position - 0x10D5A
{
	Global_19B04.f_6186.f_2B[iParam0] = *uParam1;
}

void func_236(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x10D72
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_89(*uParam0);
	iVar1 = func_91(*uParam0);
	iVar2 = func_205(*uParam0);
	iVar3 = func_83(*uParam0);
	iVar4 = func_204(*uParam0);
	iVar5 = func_203(*uParam0);
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
	iVar6 = func_88(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_88(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_237(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_237(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x10EF4
{
	func_94(uParam0, iParam1);
	func_93(uParam0, iParam2);
	func_92(uParam0, iParam3);
	func_86(uParam0, iParam5);
	func_87(uParam0, iParam4);
	func_85(uParam0, iParam6);
}

int func_238(int iParam0)//Position - 0x10F2C
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

void func_239()//Position - 0x110CF
{
	Global_394A = 0;
	func_240();
}

void func_240()//Position - 0x110DF
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

Vector3 func_241()//Position - 0x11103
{
	float fVar0;
	
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		fVar0 = unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), vLocal_71, true);
		iLocal_70 = 1;
		if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), vLocal_72, true) < fVar0)
		{
			fVar0 = unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), vLocal_72, true);
			iLocal_70 = 2;
		}
		if (iLocal_70 == 1)
		{
			iLocal_73 = 1;
			iLocal_47 = 1;
			return vLocal_71;
		}
		else if (iLocal_70 == 2)
		{
			iLocal_73 = 2;
			iLocal_47 = 2;
			return vLocal_72;
		}
	}
	return 0f, 0f, 0f;
}

