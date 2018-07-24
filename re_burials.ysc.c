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
	int iLocal_18 = 0;
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
	vector3 vLocal_44 = { 0f, 0f, 0f };
	float fLocal_45 = 0f;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	bool bLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52[2] = { 0, 0 };
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57[2] = { 0, 0 };
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	var uLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	vector3 vLocal_72 = { 0f, 0f, 0f };
	vector3 vLocal_73[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_74 = { 0f, 0f, 0f };
	vector3 vLocal_75 = { 0f, 0f, 0f };
	vector3 vLocal_76 = { 0f, 0f, 0f };
	float fLocal_77 = 0f;
	float fLocal_78[2] = { 0f, 0f };
	float fLocal_79 = 0f;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	vector3 vLocal_85 = { 0f, 0f, 0f };
	int iLocal_86 = 0;
	int iLocal_87[2] = { 0, 0 };
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	bool bLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	bool bLocal_96 = 0;
	int iLocal_97 = 0;
	bool bLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	var uLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	bool bLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	vector3 vLocal_113 = { 0f, 0f, 0f };
	vector3 vLocal_114 = { 0f, 0f, 0f };
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	bool bLocal_117 = 0;
	var uLocal_118 = 0;
	int iLocal_119 = 0;
	struct<6> Local_120 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_121 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	bool bLocal_127 = 0;
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
	var uLocal_138 = 16;
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
	int iLocal_303 = 0;
	struct<2> Local_304 = { 0, 5 } ;
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
	var uLocal_320 = 5;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
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
	iLocal_18 = 3;
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
	fLocal_45 = -1f;
	vLocal_85 = { 154.92f, 6841.12f, 19.14f };
	iLocal_99 = 200;
	vLocal_113 = { -1161.199f, 934.5912f, 196.7591f };
	vLocal_114 = { -1034.6f, 4918.6f, 205.9f };
	StringCopy(&Local_120, "", 24);
	if (unk_0xE8A79675302ED812(11))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_51))
		{
			if (unk_0xD45C08B05D4687A7(iLocal_51))
			{
				unk_0x57EB4CC8F1928A47(iLocal_51);
			}
		}
		func_206();
	}
	if (func_164(ScriptParam_304.f_1[0 /*3*/], -1, 0, 0, 0))
	{
		func_161(-1);
	}
	else
	{
		unk_0x95E4B6F3ED223F5A();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (unk_0x684B06333594F9EA() || iLocal_105)
		{
			if (!func_160())
			{
				if (func_159())
				{
					func_206();
				}
			}
			unk_0x2E94C9549322098D("RE_BU", 0);
			switch (iLocal_46)
			{
				case 0:
					if (func_147())
					{
						func_206();
					}
					if (!iLocal_60)
					{
						func_146();
					}
					else
					{
						func_145();
					}
					if (bLocal_50)
					{
						iLocal_122 = 1;
						iLocal_46 = 1;
					}
					break;
				
				case 1:
					if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
					{
						func_144();
						switch (iLocal_47)
						{
							case 0:
								func_134();
								iLocal_47 = 1;
								break;
							
							case 1:
								if ((!func_127(iLocal_52[0], &iLocal_102, &uLocal_101, iLocal_100, iLocal_103, 7f, 0) && !func_127(iLocal_52[1], &iLocal_102, &uLocal_101, iLocal_100, iLocal_103, 7f, 0)) && !func_126())
								{
									switch (iLocal_48)
									{
										case 0:
											func_125();
											if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vLocal_72, 50f, 35f, 50f, false, true, 0))
											{
												func_124();
											}
											if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vLocal_72, 80f, 65f, 50f, false, true, 0))
											{
												func_123();
											}
											if (!unk_0x1D403DFADBC2DE3C(iLocal_54, 0))
											{
												if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 281.9148f, 6816.345f, 4.3197f, 48.3924f, 6885.921f, 43.0037f, 226.5f, 0, true, 0) || unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vLocal_74 - Vector(0f, 0f, 7f), 20f, 15f, 50f, false, true, 0))
												{
													func_122();
													if (unk_0x2DA8CA50A72528FB(iLocal_88))
													{
														unk_0x222805B89367761E(iLocal_88, false);
													}
													iLocal_58 = 0;
													while (iLocal_58 <= 1)
													{
														if (unk_0x2DA8CA50A72528FB(iLocal_87[iLocal_58]))
														{
															unk_0x222805B89367761E(iLocal_87[iLocal_58], false);
														}
														iLocal_58++;
													}
													if (!func_160())
													{
														func_113(1);
													}
												}
											}
											break;
									}
								}
								else
								{
									func_122();
									iLocal_47 = 2;
								}
								break;
							
							case 2:
								if ((func_127(iLocal_52[0], &iLocal_102, &uLocal_101, iLocal_100, iLocal_103, 7f, 0) || func_127(iLocal_52[1], &iLocal_102, &uLocal_101, iLocal_100, iLocal_103, 7f, 0)) || iLocal_103)
								{
									iLocal_103 = 1;
									if (!func_160())
									{
										func_113(1);
									}
									if (unk_0x2DA8CA50A72528FB(iLocal_88))
									{
										unk_0x222805B89367761E(iLocal_88, true);
									}
									iLocal_58 = 0;
									while (iLocal_58 <= 1)
									{
										if (unk_0x2DA8CA50A72528FB(iLocal_87[iLocal_58]))
										{
											unk_0x222805B89367761E(iLocal_87[iLocal_58], true);
										}
										iLocal_58++;
									}
									switch (iLocal_102)
									{
										case 0:
											func_112();
											break;
										
										case 1:
											func_112();
											break;
										
										case 2:
											func_112();
											break;
										
										case 3:
											func_112();
											break;
										
										case 4:
											func_112();
											break;
										
										case 5:
											func_112();
											break;
										}
								}
								if (func_126())
								{
									iLocal_69 = 1;
									if (unk_0x2DA8CA50A72528FB(iLocal_88))
									{
										unk_0x222805B89367761E(iLocal_88, true);
									}
									iLocal_58 = 0;
									while (iLocal_58 <= 1)
									{
										if (unk_0x2DA8CA50A72528FB(iLocal_87[iLocal_58]))
										{
											unk_0x222805B89367761E(iLocal_87[iLocal_58], true);
										}
										iLocal_58++;
									}
									if (!func_111())
									{
										switch (iLocal_49)
										{
											case 1:
												func_108();
												break;
											
											case 3:
												func_107();
												break;
											
											case 4:
												func_106();
												break;
											
											case 5:
												func_104();
												SYSTEM::WAIT(0);
												if (!unk_0x36CEFBE9B745A58D(iLocal_52[0]))
												{
													func_102(iLocal_52[0], "GENERIC_WAR_CRY", 24);
												}
												else if (!unk_0x36CEFBE9B745A58D(iLocal_52[1]))
												{
													func_102(iLocal_52[1], "GENERIC_WAR_CRY", 24);
												}
												func_112();
												break;
											
											case 6:
												func_104();
												SYSTEM::WAIT(0);
												if (!unk_0x36CEFBE9B745A58D(iLocal_52[0]))
												{
													func_102(iLocal_52[0], "GENERIC_SHOCKED_HIGH", 24);
												}
												else if (!unk_0x36CEFBE9B745A58D(iLocal_52[1]))
												{
													func_102(iLocal_52[1], "GENERIC_SHOCKED_HIGH", 24);
												}
												func_112();
												break;
										}
									}
									else
									{
										func_104();
										SYSTEM::WAIT(0);
										iVar0 = 0;
										while (iVar0 < iLocal_52)
										{
											if (!unk_0x36CEFBE9B745A58D(iLocal_52[iVar0]))
											{
												unk_0xAB1A796DCD561BF8(iLocal_52[iVar0], 5, 0f, 0);
												unk_0x5558ED6D4A2DEC93(iLocal_52[iVar0], unk_0xBC25C936A095B5BA(), 1000f, -1, 0, 0);
												unk_0x22321800954A532E(iLocal_52[iVar0], true);
												if (unk_0x724D816EA203A79E(iLocal_56))
												{
													if (unk_0xE7E55F7532DEE345(iLocal_56))
													{
														unk_0x17175087F2DB6AC8(iLocal_56, 1, true);
													}
												}
												if (unk_0x2DA8CA50A72528FB(iLocal_87[iVar0]))
												{
													unk_0x07B8ECB35A4ED3AC(&(iLocal_87[iVar0]));
												}
											}
											iVar0++;
										}
										iLocal_47 = 3;
									}
								}
								break;
							
							case 3:
								if (!bLocal_104)
								{
									func_101();
								}
								if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
								{
									func_86();
								}
								break;
							
							case 4:
								func_85();
								if (!unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vLocal_85, 100f, 100f, 100f, true, true, 0))
								{
									unk_0xDF53A66AEE1401AA(1f);
									if (unk_0x724D816EA203A79E(iLocal_52[0]) && unk_0x724D816EA203A79E(iLocal_52[1]))
									{
										unk_0x02537C8C1BEEB477(&(iLocal_52[0]));
										unk_0x02537C8C1BEEB477(&(iLocal_52[1]));
									}
								}
								if (!unk_0x724D816EA203A79E(iLocal_53))
								{
									if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vLocal_113, 200f, 200f, 200f, true, true, 0))
									{
										unk_0xF243B7A14FCFD0F4(joaat("s_m_m_highsec_01"));
										unk_0xF243B7A14FCFD0F4(joaat("granger"));
										if (unk_0xD6513D668481290A(joaat("s_m_m_highsec_01")) && unk_0xD6513D668481290A(joaat("granger")))
										{
											iLocal_55 = unk_0x61C05BF08A1E0EFE(joaat("granger"), -1155.043f, 942.9685f, 197.4921f, 161.1247f, true, true, false);
											unk_0xAF9FC4463EA3090B(iLocal_55, 200);
											unk_0xB34BE463F164799F(iLocal_55, 1.5f);
											iLocal_53 = unk_0xFD8987C090669BD5(iLocal_55, 26, joaat("s_m_m_highsec_01"), -1, 1, true);
											unk_0xB0031DDAE4FF0BC3(iLocal_53, 0, 0, 2, 0);
											unk_0xB0031DDAE4FF0BC3(iLocal_53, 3, 0, 0, 0);
											unk_0xB0031DDAE4FF0BC3(iLocal_53, 4, 0, 0, 0);
											unk_0x7A535CE1F001F3FE(iLocal_53, joaat("weapon_pistol"), -1, true, true);
											unk_0x4106FAF8AA1D69D5(iLocal_53, iLocal_137);
										}
									}
								}
								if (!unk_0x36CEFBE9B745A58D(iLocal_51))
								{
									if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
									{
										if (unk_0x524ABB0435146845(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)) < 1)
										{
											if (!iLocal_106)
											{
												func_81(0);
												func_104();
												SYSTEM::WAIT(0);
												func_70(&uLocal_138, "REBU2AU", "REBU2_WV", 4, 0, 0, 0);
												iLocal_106 = 1;
											}
										}
									}
									else
									{
										iLocal_106 = 0;
									}
									if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vLocal_113, Global_16, true, true, 0) && unk_0xE642C1AC73CE364E(iLocal_51, unk_0xBC25C936A095B5BA(), 10f, 10f, 10f, 0, 1, 0))
									{
										if (unk_0xD45C08B05D4687A7(iLocal_51))
										{
											if (unk_0x2DA8CA50A72528FB(iLocal_111))
											{
												unk_0x07B8ECB35A4ED3AC(&iLocal_111);
											}
											if (unk_0x2DA8CA50A72528FB(iLocal_112))
											{
												unk_0x07B8ECB35A4ED3AC(&iLocal_112);
											}
											if (func_69())
											{
												iLocal_47 = 5;
											}
											else
											{
												iLocal_47 = 6;
											}
										}
									}
									else
									{
										func_64();
										func_63();
										func_62();
										func_58();
										func_57();
										func_51();
										if (func_50(vLocal_113))
										{
											func_81(0);
											func_104();
											SYSTEM::WAIT(0);
											func_70(&uLocal_138, "REBU2AU", "REBU2_CULT", 4, 0, 0, 0);
										}
										if (func_49())
										{
											func_81(0);
											func_104();
											SYSTEM::WAIT(0);
											func_70(&uLocal_138, "REBU2AU", "REBU2_NEAR", 4, 0, 0, 0);
										}
									}
								}
								break;
							
							case 5:
								func_85();
								if (func_48(1, 0, 1))
								{
									func_47();
								}
								if (bLocal_98)
								{
									iLocal_47 = 8;
								}
								break;
							
							case 6:
								func_85();
								if (func_48(1, 0, 1))
								{
									func_46();
								}
								if (bLocal_98)
								{
									iLocal_47 = 8;
								}
								break;
							
							case 8:
								func_13();
								break;
							
							case 7:
								func_11();
								if (unk_0x724D816EA203A79E(iLocal_56))
								{
									if (unk_0xE7E55F7532DEE345(iLocal_56))
									{
										if (!unk_0x36CEFBE9B745A58D(iLocal_52[0]))
										{
											if (unk_0x96044E39418AAF17(iLocal_52[0], "random@burial", "a_burial_stop", 3))
											{
												if (unk_0x4A3B2CF8BADDD74E(iLocal_52[0], "random@burial", "a_burial_stop") > 0.355f)
												{
													unk_0x17175087F2DB6AC8(iLocal_56, 1, true);
												}
											}
											else
											{
												unk_0x17175087F2DB6AC8(iLocal_56, 1, true);
											}
										}
									}
								}
								if (unk_0x36CEFBE9B745A58D(iLocal_52[0]) || unk_0x36CEFBE9B745A58D(iLocal_52[1]))
								{
									bLocal_117 = true;
								}
								if (bLocal_117)
								{
									if (unk_0xE59B7F5A03335350(iLocal_54, 0))
									{
										if (!unk_0x36CEFBE9B745A58D(iLocal_52[0]))
										{
											unk_0x3D669AF9A68FF281(iLocal_52[0]);
											if (unk_0x2101FAC9A9D4C29D(iLocal_52[0], iLocal_54, -1, 0, false) || unk_0x2101FAC9A9D4C29D(iLocal_52[0], iLocal_54, 0, 0, false))
											{
												if (!iLocal_124)
												{
													unk_0xA4E856A8CD53B8DF(iLocal_52[0]);
													if (unk_0x724D816EA203A79E(iLocal_56))
													{
														if (unk_0xE7E55F7532DEE345(iLocal_56))
														{
															unk_0x17175087F2DB6AC8(iLocal_56, 1, true);
														}
													}
													unk_0xC5A6DFE2B8987B17(&iLocal_59);
													unk_0x44C98C11ED6DD327(0);
													unk_0x8744E2AAA4C44FDC(0, unk_0xA4455714F3DCE207(iLocal_54, -0.5f, 0.5f, 0f), unk_0xBC25C936A095B5BA(), 3f, true, 0.5f, 4f, true, 0, 0, -957453492, 20000);
													unk_0xD179FA0466FA4FE3(0, iLocal_54, -1, -1, 3f, 9, 0);
													unk_0x1A06AE15BF21D407(0, iLocal_54, unk_0xBC25C936A095B5BA(), 8, 30f, 262144, -1f, 10f, 1);
													unk_0x535008C596714F9E(iLocal_59);
													unk_0xA8E6405305C0D7DF(iLocal_52[0], iLocal_59);
													unk_0x02DAF06EA4F08219(&iLocal_59);
													unk_0x22321800954A532E(iLocal_52[0], true);
													unk_0xD7E19B03E0EB54E5(iLocal_54, 1);
													iLocal_124 = 1;
												}
												else if (unk_0xF4FCC3C1048FF2AB(iLocal_52[0], 242628503) == 1)
												{
													if (unk_0xD62938026B30481A(iLocal_52[0]) == 3)
													{
														if (!unk_0xE642C1AC73CE364E(iLocal_52[0], unk_0xBC25C936A095B5BA(), 10f, 10f, 10f, 0, 1, 0) && !unk_0x4DBCE270B354E123(iLocal_52[0], vLocal_74, 10f, 10f, 10f, false, true, 0))
														{
															unk_0x02537C8C1BEEB477(&(iLocal_52[0]));
														}
													}
												}
											}
											else
											{
												unk_0xB8CBD998685C0685(iLocal_52[0], unk_0xBC25C936A095B5BA(), 0, 16);
												unk_0x22321800954A532E(iLocal_52[0], true);
											}
										}
										if (!unk_0x36CEFBE9B745A58D(iLocal_52[1]))
										{
											unk_0x3D669AF9A68FF281(iLocal_52[1]);
											if (unk_0x2101FAC9A9D4C29D(iLocal_52[1], iLocal_54, -1, 0, false) || unk_0x2101FAC9A9D4C29D(iLocal_52[1], iLocal_54, 0, 0, false))
											{
												if (!iLocal_124)
												{
													unk_0xA4E856A8CD53B8DF(iLocal_52[1]);
													unk_0xC5A6DFE2B8987B17(&iLocal_59);
													unk_0x44C98C11ED6DD327(0);
													unk_0x8744E2AAA4C44FDC(0, unk_0xA4455714F3DCE207(iLocal_54, -0.5f, 0.5f, 0f), unk_0xBC25C936A095B5BA(), 3f, true, 0.5f, 4f, true, 0, 0, -957453492, 20000);
													unk_0xD179FA0466FA4FE3(0, iLocal_54, -1, -1, 3f, 9, 0);
													unk_0x1A06AE15BF21D407(0, iLocal_54, unk_0xBC25C936A095B5BA(), 8, 30f, 262144, -1f, 10f, 1);
													unk_0x535008C596714F9E(iLocal_59);
													unk_0xA8E6405305C0D7DF(iLocal_52[1], iLocal_59);
													unk_0x02DAF06EA4F08219(&iLocal_59);
													unk_0x22321800954A532E(iLocal_52[1], true);
													unk_0xD7E19B03E0EB54E5(iLocal_54, 1);
													iLocal_124 = 1;
												}
												else if (unk_0xF4FCC3C1048FF2AB(iLocal_52[1], 242628503) == 1)
												{
													if (unk_0xD62938026B30481A(iLocal_52[1]) == 3)
													{
														if (!unk_0xE642C1AC73CE364E(iLocal_52[1], unk_0xBC25C936A095B5BA(), 10f, 10f, 10f, 0, 1, 0) && !unk_0x4DBCE270B354E123(iLocal_52[1], vLocal_74, 10f, 10f, 10f, false, true, 0))
														{
															unk_0x02537C8C1BEEB477(&(iLocal_52[1]));
														}
													}
												}
											}
											else
											{
												unk_0xB8CBD998685C0685(iLocal_52[1], unk_0xBC25C936A095B5BA(), 0, 16);
												unk_0x22321800954A532E(iLocal_52[1], true);
											}
										}
									}
								}
								break;
							
							case 9:
								break;
						}
						if ((func_10() && !func_9()) && iLocal_47 != 9)
						{
							if (!unk_0x36CEFBE9B745A58D(iLocal_51))
							{
								if (unk_0x4DBCE270B354E123(iLocal_51, vLocal_114, 5f, 5f, 5f, false, true, 0))
								{
									func_8(0);
									SYSTEM::WAIT(0);
									func_104();
									iLocal_47 = 9;
								}
							}
						}
						if (func_6())
						{
							if (unk_0x724D816EA203A79E(iLocal_51))
							{
								unk_0xF845620A03C7425B(&iLocal_51);
							}
							func_13();
						}
						if (func_5())
						{
							func_4();
						}
						func_2();
						if (iLocal_47 != 3)
						{
							if (func_1())
							{
								unk_0x3857DADBD6EC8A54("RE6_BOTH_DEAD");
								if (!iLocal_68)
								{
									SYSTEM::SETTIMERA(0);
									iLocal_84 = unk_0x105601648511CC64() + 8500;
									iLocal_68 = 1;
								}
								if (!unk_0x36CEFBE9B745A58D(iLocal_51))
								{
									if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_51, 20f, 20f, 20f, 0, 1, 1))
									{
										if (func_70(&uLocal_138, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
										{
											iLocal_47 = 3;
										}
									}
								}
							}
						}
						if (((iLocal_47 == 1 || iLocal_47 == 2) || iLocal_47 == 3) || iLocal_47 == 7)
						{
							if (!unk_0x36CEFBE9B745A58D(iLocal_51))
							{
								if (!bLocal_104)
								{
									if (unk_0xF4FCC3C1048FF2AB(iLocal_51, 1785177548) != 1 && unk_0xF4FCC3C1048FF2AB(iLocal_51, 1785177548) != 0)
									{
										unk_0x49D46EE47C9CCB66(iLocal_51);
										iLocal_303 = unk_0xD0D858E538FD01C3(vLocal_72, -2f, -4f, 18f, 2);
										unk_0xB62398E536F695FC(iLocal_51, iLocal_303, "random@burial", "b_burial", 1000f, -4f, 1, 24592, 1148846080, 0);
										unk_0xBEBE356CCD6268A1(iLocal_57[0], iLocal_303, "b_burial_legstie", "random@burial", 4f, -4f, 0, 1148846080);
										unk_0xBEBE356CCD6268A1(iLocal_57[1], iLocal_303, "b_burial_wristtie", "random@burial", 4f, -4f, 0, 1148846080);
										unk_0xC2BF3DE5E47F801D(iLocal_303, true);
										unk_0x22321800954A532E(iLocal_51, true);
									}
									if (unk_0x7544D2465B934445(iLocal_51))
									{
										unk_0x485146BF6C7427C5(iLocal_51, 1);
										unk_0x7EC4B6D9DC0E5FEE(iLocal_51, 1);
										unk_0x65E471E4A2D56226(iLocal_51, 0, 0);
									}
								}
								if ((unk_0xA0ABD1D1512F5AFC(iLocal_51) || unk_0x127812AA6652253F(iLocal_51)) || (iLocal_99 - unk_0x8D66276473ABD7CC(iLocal_51)) >= 50)
								{
									unk_0x485146BF6C7427C5(iLocal_51, 1);
									unk_0x7EC4B6D9DC0E5FEE(iLocal_51, 1);
									unk_0x65E471E4A2D56226(iLocal_51, 0, 0);
								}
								if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) && !unk_0x1D403DFADBC2DE3C(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0))
								{
									if (unk_0x8910237449BB6F79(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)) < 5f)
									{
									}
									else if (unk_0xE921F8171F0733B3(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), iLocal_51))
									{
										unk_0x485146BF6C7427C5(iLocal_51, 1);
										unk_0x7EC4B6D9DC0E5FEE(iLocal_51, 1);
										unk_0x65E471E4A2D56226(iLocal_51, 0, 0);
									}
								}
								if (!unk_0x1D403DFADBC2DE3C(iLocal_54, 0))
								{
									if (unk_0xE921F8171F0733B3(iLocal_54, iLocal_51))
									{
										unk_0x485146BF6C7427C5(iLocal_51, 1);
										unk_0x7EC4B6D9DC0E5FEE(iLocal_51, 1);
										unk_0x65E471E4A2D56226(iLocal_51, 0, 0);
									}
								}
							}
						}
					}
					break;
			}
		}
		else
		{
			func_206();
		}
	}
}

int func_1()//Position - 0xE95
{
	if (!bLocal_104)
	{
		if (!unk_0x724D816EA203A79E(iLocal_52[0]) && !unk_0x724D816EA203A79E(iLocal_52[1]))
		{
			return 1;
		}
		if (unk_0x724D816EA203A79E(iLocal_52[0]) && unk_0x724D816EA203A79E(iLocal_52[1]))
		{
			if (unk_0x36CEFBE9B745A58D(iLocal_52[0]) && unk_0x36CEFBE9B745A58D(iLocal_52[1]))
			{
				return 1;
			}
			if (unk_0x626040CF48EDAAD2(iLocal_52[0]) && unk_0x626040CF48EDAAD2(iLocal_52[1]))
			{
				return 1;
			}
		}
		if (unk_0x724D816EA203A79E(iLocal_52[0]) && !unk_0x724D816EA203A79E(iLocal_52[1]))
		{
			if (unk_0x36CEFBE9B745A58D(iLocal_52[0]))
			{
				return 1;
			}
		}
		if (unk_0x724D816EA203A79E(iLocal_52[1]) && !unk_0x724D816EA203A79E(iLocal_52[0]))
		{
			if (unk_0x36CEFBE9B745A58D(iLocal_52[1]))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_2()//Position - 0xF70
{
	if (unk_0x36CEFBE9B745A58D(iLocal_52[0]))
	{
		if (unk_0x2DA8CA50A72528FB(iLocal_87[0]))
		{
			if (unk_0x724D816EA203A79E(iLocal_56))
			{
				if (unk_0xE7E55F7532DEE345(iLocal_56))
				{
					unk_0x17175087F2DB6AC8(iLocal_56, 1, true);
				}
			}
			func_3(&uLocal_138, 4);
			unk_0x07B8ECB35A4ED3AC(&(iLocal_87[0]));
		}
	}
	if (unk_0x36CEFBE9B745A58D(iLocal_52[1]))
	{
		if (unk_0x2DA8CA50A72528FB(iLocal_87[1]))
		{
			func_3(&uLocal_138, 3);
			unk_0x07B8ECB35A4ED3AC(&(iLocal_87[1]));
		}
	}
	if (unk_0x36CEFBE9B745A58D(iLocal_51))
	{
		if (!unk_0x1D403DFADBC2DE3C(iLocal_51, 0))
		{
		}
		if (unk_0x2DA8CA50A72528FB(iLocal_88))
		{
			func_3(&uLocal_138, 5);
			unk_0x07B8ECB35A4ED3AC(&iLocal_88);
		}
	}
}

void func_3(var uParam0, int iParam1)//Position - 0x100C
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_4()//Position - 0x1029
{
	unk_0x3857DADBD6EC8A54("RE6_END");
	func_206();
}

int func_5()//Position - 0x103D
{
	if (unk_0x36CEFBE9B745A58D(iLocal_51))
	{
		return 1;
	}
	return 0;
}

int func_6()//Position - 0x1053
{
	if (Global_63A9)
	{
		func_7(4);
		return 1;
	}
	return 0;
}

void func_7(int iParam0)//Position - 0x106B
{
	Global_19AF6 = iParam0;
}

void func_8(int iParam0)//Position - 0x1079
{
	Global_41AB = iParam0;
}

int func_9()//Position - 0x1086
{
	if (Global_19B04.f_6186.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

bool func_10()//Position - 0x10A2
{
	return Global_63A8;
}

void func_11()//Position - 0x10AD
{
	if (!unk_0x36CEFBE9B745A58D(iLocal_51))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_52[0]) || !unk_0x36CEFBE9B745A58D(iLocal_52[1]))
		{
			if (!func_12())
			{
				switch (iLocal_128)
				{
					case 0:
						if (iLocal_84 < unk_0x105601648511CC64())
						{
							if (func_70(&uLocal_138, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_84 = (unk_0x105601648511CC64() + unk_0x491B2241281A03B7(3500, 5000));
								iLocal_128++;
							}
						}
						break;
					
					case 1:
						if (iLocal_84 < unk_0x105601648511CC64())
						{
							if (func_70(&uLocal_138, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_84 = (unk_0x105601648511CC64() + unk_0x491B2241281A03B7(3500, 5000));
								iLocal_128++;
							}
						}
						break;
					
					case 2:
						if (iLocal_84 < unk_0x105601648511CC64())
						{
							if (func_70(&uLocal_138, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_84 = (unk_0x105601648511CC64() + unk_0x491B2241281A03B7(3500, 5000));
								iLocal_128++;
							}
						}
						break;
					
					case 3:
						if (iLocal_84 < unk_0x105601648511CC64())
						{
							if (func_70(&uLocal_138, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_84 = (unk_0x105601648511CC64() + unk_0x491B2241281A03B7(3500, 5000));
								iLocal_128 = 0;
							}
						}
						break;
					}
				}
			}
	}
}

int func_12()//Position - 0x11D8
{
	if (Global_3DB8 != 0 || unk_0xE6711F601F11B66B())
	{
		return 1;
	}
	return 0;
}

void func_13()//Position - 0x11FA
{
	while (!func_45())
	{
		SYSTEM::WAIT(0);
	}
	if (!func_6())
	{
		if (func_44() == 0)
		{
			func_41(-1199050901, 6, 1, 95, 3, 60000, 30000, 1988415324, -1, 149, -1, 128);
		}
		else if (func_44() == 1)
		{
			func_41(1082655975, 6, 2, 95, 3, 60000, 30000, 1988415324, -1, 149, -1, 128);
		}
		else if (func_44() == 2)
		{
			func_41(-2100435596, 6, 4, 95, 3, 60000, 30000, 1988415324, -1, 149, -1, 128);
		}
	}
	unk_0xA250DC6A7CADB56D(unk_0xB5CEFD608600A09F(), 1);
	func_17(-1, 0);
	func_14();
	func_206();
}

void func_14()//Position - 0x12B2
{
	func_15();
}

int func_15()//Position - 0x12BF
{
	if (func_16(0))
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

bool func_16(bool bParam0)//Position - 0x130A
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_1163A, 0);
}

void func_17(int iParam0, int iParam1)//Position - 0x1335
{
	if (iParam0 == -1)
	{
		iParam0 = func_39();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_38(iParam0))
	{
		func_37(iParam0, iParam1);
		if (!func_36(51))
		{
			func_27("RE_REWARD", 1, 0, 4000, 10000, func_30(), 0, 138, 0);
			func_26(51);
		}
		if (func_25(iParam0))
		{
			Global_19B04.f_6186.f_2 = 3;
		}
		if (func_24(iParam0, iParam1) != 322)
		{
			func_18(func_24(iParam0, iParam1), vLocal_44.x, vLocal_44.y);
		}
		Global_19AF8 = iParam1;
		if (Global_19AF6 == 0)
		{
			if (((Global_19AF9 == 1 || Global_19AF9 == 5) || Global_19AF9 == 11) || Global_19AF9 == 25)
			{
				func_7(2);
			}
			else if ((Global_19AF9 == 26 || Global_19AF9 == 8) || Global_19AF9 == 17)
			{
				func_7(7);
			}
			else
			{
				func_7(1);
			}
		}
	}
}

void func_18(int iParam0, var uParam1, var uParam2)//Position - 0x1438
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
		func_22((891 + iParam0), 1, -1, 1);
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
		func_19();
	}
}

void func_19()//Position - 0x1520
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
		func_21(13, SYSTEM::FLOOR(Global_19B04.f_27B5.f_F0D));
	}
	if (!unk_0xF9BFA43C1BAFD016())
	{
		if (!Global_11542)
		{
			if (func_20() == 2 == 0 && !unk_0x7AF0088ABFA713B6())
			{
				if (unk_0x670C0C6C780A3F84())
				{
					Global_199FA = 0;
				}
				if (!Global_DA9F)
				{
					func_15();
				}
			}
		}
	}
}

int func_20()//Position - 0x19E1
{
	return Global_62BD;
}

int func_21(int iParam0, int iParam1)//Position - 0x19EC
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

int func_22(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x1A3D
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
		iParam2 = func_23();
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

int func_23()//Position - 0x1F52
{
	return Global_1407E0;
}

int func_24(int iParam0, int iParam1)//Position - 0x1F5E
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

int func_25(int iParam0)//Position - 0x22D2
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

void func_26(int iParam0)//Position - 0x2301
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

void func_27(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x2343
{
	func_28(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_28(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x2363
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
		func_29();
	}
}

void func_29()//Position - 0x2535
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

int func_30()//Position - 0x2655
{
	func_31();
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

void func_31()//Position - 0x269B
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_35(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_34(unk_0xBC25C936A095B5BA());
			if (func_33(iVar0) && (!func_32(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_33(Global_19B04.f_932.f_21B.f_10CD))
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

bool func_32(int iParam0)//Position - 0x2798
{
	return Global_8C41 == iParam0;
}

bool func_33(int iParam0)//Position - 0x27A6
{
	return iParam0 < 3;
}

int func_34(int iParam0)//Position - 0x27B2
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_35(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_35(int iParam0)//Position - 0x27EF
{
	if (func_33(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_36(int iParam0)//Position - 0x2819
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

void func_37(int iParam0, int iParam1)//Position - 0x285C
{
	unk_0xF0059F27F7BB6680(&(Global_19B04.f_6186.f_8[iParam0]), iParam1);
}

int func_38(int iParam0)//Position - 0x2877
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

int func_39()//Position - 0x2928
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x1377080E9B0BD993(), 64);
	uVar1 = func_40(Var0);
	return uVar1;
}

int func_40(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x2945
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

int func_41(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x2B1F
{
	struct<15> Var0;
	int iVar1;
	
	if (func_16(0))
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
	if (iParam8 == 76)
	{
		return 0;
	}
	if (iParam9 == 235)
	{
		return 0;
	}
	if (iParam3 < 3)
	{
		if (unk_0xFA30DFD0084E92FE(iParam2, iParam3))
		{
			return 0;
		}
	}
	if (iParam4 < 3)
	{
		if (iParam4 != iParam3)
		{
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7)
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
		Var0.f_3 = func_43(iParam1);
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam2;
		Var0.f_4 = (unk_0x105601648511CC64() + iParam5);
		Var0.f_5 = iParam6;
		Var0.f_6 = iParam3;
		Var0.f_E = iParam4;
		Var0.f_A = iParam7;
		Var0.f_B = -1;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		unk_0x7CB6FD92BE491AD9(&(Var0.f_1), 1);
		unk_0x7CB6FD92BE491AD9(&(Var0.f_1), 0);
		if (iParam7 != -1)
		{
			unk_0xF0059F27F7BB6680(&(Var0.f_1), 11);
		}
		else if (iParam1 == 0)
		{
			unk_0xF0059F27F7BB6680(&(Var0.f_1), 10);
		}
		Global_19B04.f_1DEB[Global_19B04.f_1DEB.f_88 /*15*/] = { Var0 };
		Global_19B04.f_1DEB.f_88++;
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (unk_0xFA30DFD0084E92FE(iParam2, iVar1))
			{
				func_42(iVar1);
			}
			iVar1++;
		}
		return 1;
	}
	return 0;
}

void func_42(int iParam0)//Position - 0x2C9F
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_33(iParam0))
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

int func_43(int iParam0)//Position - 0x2D63
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

int func_44()//Position - 0x2DCD
{
	func_31();
	return Global_19B04.f_932.f_21B.f_10CD;
}

int func_45()//Position - 0x2DE6
{
	return 1;
}

void func_46()//Position - 0x2DEF
{
	switch (iLocal_110)
	{
		case 0:
			if (!unk_0x36CEFBE9B745A58D(iLocal_51) && unk_0xE59B7F5A03335350(iLocal_55, 0))
			{
				if (unk_0xD45C08B05D4687A7(iLocal_51))
				{
					unk_0x57EB4CC8F1928A47(iLocal_51);
				}
				unk_0x2E35C4FA5F0ED22F(iLocal_51, false);
				unk_0xB105531EDD3DE51B(iLocal_51, true);
				unk_0xC5A6DFE2B8987B17(&iLocal_59);
				unk_0x56F2E1B5599188FA(0, unk_0xBC25C936A095B5BA(), 5000, 2048, 2);
				unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 0);
				unk_0xD179FA0466FA4FE3(0, iLocal_55, -1, 0, 1f, 1, 0);
				unk_0x535008C596714F9E(iLocal_59);
				unk_0xA8E6405305C0D7DF(iLocal_51, iLocal_59);
				unk_0x02DAF06EA4F08219(&iLocal_59);
				unk_0x22321800954A532E(iLocal_51, true);
				func_104();
				SYSTEM::WAIT(0);
				func_70(&uLocal_138, "REBU2AU", "REBU2_BACK", 4, 0, 0, 0);
			}
			iLocal_110++;
			break;
		
		case 1:
			if (unk_0xE59B7F5A03335350(iLocal_55, 0))
			{
				if (unk_0x62F3A07C43FFB568(iLocal_51, iLocal_55, 0))
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_53))
					{
						unk_0x204BA7B1C7DD25F4(iLocal_53, iLocal_54, 10f, 786599);
						unk_0x22321800954A532E(iLocal_53, true);
					}
					unk_0xD7E19B03E0EB54E5(iLocal_55, 1);
					iLocal_110++;
				}
			}
			break;
		
		case 2:
			iLocal_110++;
			break;
		
		case 3:
			iLocal_110++;
			break;
		
		case 4:
			if (!func_12())
			{
				iLocal_110++;
			}
			break;
		
		case 5:
			SYSTEM::SETTIMERA(0);
			func_13();
			break;
	}
}

void func_47()//Position - 0x2F37
{
	switch (iLocal_110)
	{
		case 0:
			unk_0xA902E18EDF6FA0C8(255, iLocal_137, 1862763509);
			unk_0xA902E18EDF6FA0C8(255, 1862763509, iLocal_137);
			if (!unk_0x1D403DFADBC2DE3C(unk_0x3E12B546F3F2597A(), 0))
			{
				unk_0x241D744C1CCBC526(unk_0x3E12B546F3F2597A(), 5f, 2, 0);
				if (!unk_0x36CEFBE9B745A58D(iLocal_51) && unk_0xE59B7F5A03335350(iLocal_55, 0))
				{
					if (unk_0xD45C08B05D4687A7(iLocal_51))
					{
						unk_0x57EB4CC8F1928A47(iLocal_51);
					}
					unk_0x2E35C4FA5F0ED22F(iLocal_51, false);
					unk_0xB105531EDD3DE51B(iLocal_51, true);
					unk_0xC5A6DFE2B8987B17(&iLocal_59);
					unk_0x56F2E1B5599188FA(0, unk_0xBC25C936A095B5BA(), 5000, 2048, 2);
					unk_0xD179FA0466FA4FE3(0, iLocal_55, -1, 0, 1f, 1, 0);
					unk_0x535008C596714F9E(iLocal_59);
					unk_0xA8E6405305C0D7DF(iLocal_51, iLocal_59);
					unk_0x02DAF06EA4F08219(&iLocal_59);
					unk_0x22321800954A532E(iLocal_51, true);
					func_104();
					SYSTEM::WAIT(0);
					func_70(&uLocal_138, "REBU2AU", "REBU2_BACK", 4, 0, 0, 0);
				}
			}
			SYSTEM::WAIT(2700);
			unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
			iLocal_110++;
			break;
		
		case 1:
			if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) && !unk_0x5CFC8E6CC224744A(unk_0xBC25C936A095B5BA()))
			{
				if (!unk_0x1D403DFADBC2DE3C(unk_0x3E12B546F3F2597A(), 0))
				{
					if (!unk_0xA499BE1E93004FF2(unk_0x3E12B546F3F2597A(), 1))
					{
						if (unk_0x9BA320A867CC80B3(unk_0x3E12B546F3F2597A(), 1) > 0.1f)
						{
							if (func_44() == 0)
							{
								func_70(&uLocal_138, "REBU2AU", "REBU2_DOOR0", 4, 0, 0, 0);
							}
							if (func_44() == 1)
							{
								func_70(&uLocal_138, "REBU2AU", "REBU2_DOOR1", 4, 0, 0, 0);
							}
							if (func_44() == 2)
							{
								func_70(&uLocal_138, "REBU2AU", "REBU2_DOOR2", 4, 0, 0, 0);
							}
						}
					}
				}
			}
			iLocal_110++;
			break;
		
		case 2:
			if (unk_0xE59B7F5A03335350(iLocal_55, 0))
			{
				if (unk_0x62F3A07C43FFB568(iLocal_51, iLocal_55, 0))
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_53))
					{
						unk_0x204BA7B1C7DD25F4(iLocal_53, iLocal_55, 10f, 786599);
						unk_0x22321800954A532E(iLocal_53, true);
					}
					unk_0xD7E19B03E0EB54E5(iLocal_55, 1);
					iLocal_110++;
				}
			}
			break;
		
		case 3:
			if (!func_12())
			{
				bLocal_98 = true;
			}
			break;
	}
}

int func_48(bool bParam0, bool bParam1, bool bParam2)//Position - 0x3128
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

int func_49()//Position - 0x320D
{
	if (func_44() == 2)
	{
		if (func_10())
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

int func_50(vector3 vParam0)//Position - 0x3288
{
	if (func_44() == 2)
	{
		if (func_10() && !Global_63AB)
		{
			if (fLocal_45 == -1f)
			{
				fLocal_45 = SYSTEM::VDIST(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), vParam0);
			}
			if (SYSTEM::VDIST(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), vParam0) > (fLocal_45 + 200f) || unk_0xF0F2FC9DE291567F(-1014.154f, 4881.411f, 245.0001f, unk_0x541C2AEF053615BC(unk_0xA95CF30C72EB526E(unk_0xFC1CAE18F3ECBF2D()), false), true) < 400f)
			{
				Global_63AB = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_51()//Position - 0x3315
{
	if (!unk_0x36CEFBE9B745A58D(iLocal_51))
	{
		if ((((((func_55("REBU2_LV2_2") || func_55("REBU2_LV2_3")) || func_55("REBU2_LV2_4")) || func_55("REBU2_LV2_5")) || func_55("REBU2_LV2_6")) || func_55("REBU2_LV2_7")) || func_55("REBU2_LV2_8"))
		{
			unk_0x419DE08DC356F2FD(iLocal_51, 1, 1);
			unk_0x44C98C11ED6DD327(iLocal_51);
		}
		if (func_55("REBU2_LV2_9") || iLocal_66 > 1)
		{
			unk_0x419DE08DC356F2FD(iLocal_51, 0, 1);
		}
	}
	if (func_69() && !func_12())
	{
		if (!func_52())
		{
			func_81(1);
		}
		switch (iLocal_66)
		{
			case 0:
				func_70(&uLocal_138, "REBU2AU", "REBU2_LV2", 4, 0, 0, 0);
				iLocal_66++;
				break;
			
			case 1:
				iLocal_67 = unk_0x105601648511CC64() + 1500;
				iLocal_66++;
				break;
			
			case 2:
				if (iLocal_67 < unk_0x105601648511CC64())
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT0", 4, 0, 0, 0);
					iLocal_66++;
				}
				break;
			
			case 3:
				if (func_44() == 0)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT0M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT0F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT0T", 4, 0, 0, 0);
				}
				iLocal_66++;
				break;
			
			case 4:
				iLocal_67 = unk_0x105601648511CC64() + 500;
				iLocal_66++;
				break;
			
			case 5:
				if (iLocal_67 < unk_0x105601648511CC64())
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT1", 4, 0, 0, 0);
					iLocal_66++;
				}
				break;
			
			case 6:
				if (func_44() == 0)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT1M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT1F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT1T", 4, 0, 0, 0);
				}
				iLocal_66++;
				break;
			
			case 7:
				func_70(&uLocal_138, "REBU2AU", "REBU2_BANT2", 4, 0, 0, 0);
				iLocal_66++;
				break;
			
			case 8:
				if (func_44() == 0)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT2M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT2F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT2T", 4, 0, 0, 0);
				}
				iLocal_66++;
				break;
			
			case 9:
				func_70(&uLocal_138, "REBU2AU", "REBU2_BANT3", 4, 0, 0, 0);
				iLocal_66++;
				break;
			
			case 10:
				if (func_44() == 0)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT3M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT3F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT3T", 4, 0, 0, 0);
				}
				iLocal_66++;
				break;
			
			case 11:
				func_70(&uLocal_138, "REBU2AU", "REBU2_BANT4", 4, 0, 0, 0);
				iLocal_66++;
				break;
			
			case 12:
				if (func_44() == 0)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT4M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT4F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT4T", 4, 0, 0, 0);
				}
				iLocal_66++;
				break;
			
			case 13:
				func_70(&uLocal_138, "REBU2AU", "REBU2_BANT5", 4, 0, 0, 0);
				iLocal_66++;
				break;
			
			case 14:
				if (func_44() == 0)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT5M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT5F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT5T", 4, 0, 0, 0);
				}
				iLocal_66++;
				break;
			
			case 15:
				func_70(&uLocal_138, "REBU2AU", "REBU2_BANT6", 4, 0, 0, 0);
				iLocal_66++;
				break;
			
			case 16:
				if (func_44() == 0)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT6M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT6F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT6T", 4, 0, 0, 0);
				}
				iLocal_66++;
				break;
			
			case 17:
				iLocal_67 = unk_0x105601648511CC64() + 1000;
				iLocal_66++;
				break;
			
			case 18:
				if (iLocal_67 < unk_0x105601648511CC64())
				{
					func_70(&uLocal_138, "REBU2AU", "REBU2_BANT7", 4, 0, 0, 0);
					iLocal_66++;
				}
				break;
			
			case 19:
				iLocal_67 = unk_0x105601648511CC64() + 2500;
				iLocal_66++;
				break;
			
			case 20:
				if (iLocal_67 < unk_0x105601648511CC64())
				{
					if (func_44() == 0)
					{
						func_70(&uLocal_138, "REBU2AU", "REBU2_BANT7M", 4, 0, 0, 0);
					}
					else if (func_44() == 1)
					{
						func_70(&uLocal_138, "REBU2AU", "REBU2_BANT7F", 4, 0, 0, 0);
					}
					else if (func_44() == 2)
					{
						func_70(&uLocal_138, "REBU2AU", "REBU2_BANT7T", 4, 0, 0, 0);
					}
					iLocal_66++;
				}
				break;
			}
	}
}

int func_52()//Position - 0x389B
{
	if (((((((((func_53("REBU2_WV") || func_53("REBU2_UNS1")) || func_53("REBU2_UNS2")) || func_53("REBU2_CULT")) || func_53("REBU2_NEAR")) || func_53("REBU2_WRONG")) || func_53("REBU2_STOP")) || func_53("REBU2_GETOUT")) || func_53("REBU2_JACK")) || func_53("REBU2_SHOOT"))
	{
		return 1;
	}
	return 0;
}

int func_53(char* sParam0)//Position - 0x392E
{
	var uVar0;
	
	if (func_12())
	{
		MemCopy(&uVar0, {func_54()}, 4);
		if (unk_0x3362CDE8460ED38B(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_54()//Position - 0x3956
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_3DB8 == 4)
	{
		return Global_3C3B;
	}
	return Var0;
}

int func_55(char* sParam0)//Position - 0x397A
{
	var uVar0;
	
	if (func_12())
	{
		MemCopy(&uVar0, {func_56()}, 4);
		if (unk_0x3362CDE8460ED38B(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_56()//Position - 0x39A2
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

void func_57()//Position - 0x39E8
{
	if (!unk_0x36CEFBE9B745A58D(iLocal_51))
	{
		if (!iLocal_107)
		{
			if (!unk_0x1D403DFADBC2DE3C(unk_0x3E12B546F3F2597A(), 0))
			{
				if (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), unk_0x3E12B546F3F2597A(), 1) && unk_0x62F3A07C43FFB568(iLocal_51, unk_0x3E12B546F3F2597A(), 0))
				{
					if (!func_53("REBU2_LV2"))
					{
						func_81(0);
						func_104();
						SYSTEM::WAIT(0);
						func_70(&uLocal_138, "REBU2AU", "REBU2_GETOUT", 4, 0, 0, 0);
						iLocal_107 = 1;
					}
				}
			}
		}
		else if (!unk_0x1D403DFADBC2DE3C(unk_0x3E12B546F3F2597A(), 0))
		{
			if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), unk_0x3E12B546F3F2597A(), 0) && unk_0x62F3A07C43FFB568(iLocal_51, unk_0x3E12B546F3F2597A(), 0))
			{
				iLocal_107 = 0;
			}
		}
		if (!iLocal_108)
		{
			if (unk_0x4FCDC2EC534819EF(unk_0xBC25C936A095B5BA()))
			{
				func_81(0);
				func_104();
				SYSTEM::WAIT(0);
				func_70(&uLocal_138, "REBU2AU", "REBU2_JACK", 4, 0, 0, 0);
				iLocal_108 = 1;
			}
		}
		else if (!unk_0x4FCDC2EC534819EF(unk_0xBC25C936A095B5BA()))
		{
			iLocal_108 = 0;
		}
		if (!iLocal_109)
		{
			if (unk_0x32E373675659FDB0(unk_0xBC25C936A095B5BA()))
			{
				func_81(0);
				func_104();
				SYSTEM::WAIT(0);
				func_70(&uLocal_138, "REBU2AU", "REBU2_SHOOT", 4, 0, 0, 0);
				iLocal_109 = 1;
			}
		}
		else if (unk_0x32E373675659FDB0(unk_0xBC25C936A095B5BA()))
		{
			iLocal_109 = 0;
		}
	}
}

void func_58()//Position - 0x3B1B
{
	if (!unk_0x36CEFBE9B745A58D(iLocal_51))
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
		{
			if (!func_61())
			{
				if (unk_0xD45C08B05D4687A7(iLocal_51))
				{
					unk_0x57EB4CC8F1928A47(iLocal_51);
				}
				if (unk_0xF4FCC3C1048FF2AB(iLocal_51, 1227113341) != 1 && unk_0xF4FCC3C1048FF2AB(iLocal_51, 1227113341) != 0)
				{
					unk_0x9565F9267674873A(iLocal_51, unk_0xBC25C936A095B5BA(), -1, 6f, 2f, 1073741824, 0);
				}
				if (unk_0x5237AF95232D78C5(iLocal_51, 0))
				{
					unk_0xA3981DED4FC2E56E(iLocal_51, 0, 4194304);
				}
				if (!iLocal_106)
				{
					func_81(0);
					func_104();
					SYSTEM::WAIT(0);
					iLocal_106 = 1;
					if (!func_60())
					{
						func_70(&uLocal_138, "REBU2AU", "REBU2_UNS1", 4, 0, 0, 0);
					}
					else
					{
						func_70(&uLocal_138, "REBU2AU", "REBU2_UNS2", 4, 0, 0, 0);
					}
				}
			}
			else
			{
				iLocal_106 = 0;
				if (((unk_0xF4FCC3C1048FF2AB(iLocal_51, 1227113341) == 1 || unk_0xF4FCC3C1048FF2AB(iLocal_51, 1227113341) == 0) || unk_0xF4FCC3C1048FF2AB(iLocal_51, 242628503) == 1) || unk_0xF4FCC3C1048FF2AB(iLocal_51, 242628503) == 0)
				{
					unk_0xA4E856A8CD53B8DF(iLocal_51);
				}
			}
		}
		else if (((!unk_0xD45C08B05D4687A7(iLocal_51) && !unk_0x5237AF95232D78C5(iLocal_51, 0)) && unk_0xF4FCC3C1048FF2AB(iLocal_51, 242628503) != 1) && unk_0xF4FCC3C1048FF2AB(iLocal_51, 242628503) != 0)
		{
			unk_0x75E3FA28CC7D5707(iLocal_51, func_59());
			unk_0x0AB3C2863B144B82(iLocal_51, 1);
			unk_0x59B9712C1EAB0092(iLocal_51, 0);
		}
	}
}

int func_59()//Position - 0x3C8F
{
	return unk_0x705BBFE5A8ADE4A9(unk_0xFC1CAE18F3ECBF2D());
}

int func_60()//Position - 0x3C9F
{
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
	{
		if (unk_0xE59B7F5A03335350(unk_0xD20EBB97FE8799ED(unk_0xBC25C936A095B5BA()), 1))
		{
			if ((unk_0x2B4DE5C0D509B0F9(unk_0x6F79ECA8C83E4357(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 1))) || unk_0x7512ED01F3F46714(unk_0x6F79ECA8C83E4357(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 1)))) || unk_0x89B9572166100905(unk_0x6F79ECA8C83E4357(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 1))))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_61()//Position - 0x3D0A
{
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		if (unk_0xE59B7F5A03335350(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0))
		{
			if (((((!unk_0xE3CA72BD77D43B09(unk_0xBC25C936A095B5BA()) && !unk_0x57379381A330B2FF(unk_0xBC25C936A095B5BA())) && !unk_0x11030C52A0DDFF8C(unk_0xBC25C936A095B5BA())) && !unk_0xD3A0CD3AD9C3D22A(unk_0xBC25C936A095B5BA())) && !unk_0x12FF218EB7AE24A7(unk_0xBC25C936A095B5BA())) && !unk_0xEA8F5A4C494DBF3B(unk_0xBC25C936A095B5BA(), joaat("rhino")))
			{
				if (unk_0x524ABB0435146845(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)) >= 1)
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
			if ((((!unk_0x8C1A6E7D5F410F4A(unk_0x6F79ECA8C83E4357(unk_0x25480ACDBB6DB8F1(unk_0xBC25C936A095B5BA()))) && !unk_0xA19D269B4B5A1532(unk_0x6F79ECA8C83E4357(unk_0x25480ACDBB6DB8F1(unk_0xBC25C936A095B5BA())))) && !unk_0xE7B3A320107C1379(unk_0x6F79ECA8C83E4357(unk_0x25480ACDBB6DB8F1(unk_0xBC25C936A095B5BA())))) && !unk_0xFF2234981505F7F4(unk_0x6F79ECA8C83E4357(unk_0x25480ACDBB6DB8F1(unk_0xBC25C936A095B5BA())))) && unk_0x6F79ECA8C83E4357(unk_0x25480ACDBB6DB8F1(unk_0xBC25C936A095B5BA())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_62()//Position - 0x3E2C
{
	if (!unk_0x36CEFBE9B745A58D(iLocal_51))
	{
		if (unk_0x7214F4879DF8A314(iLocal_51))
		{
			if (!iLocal_130)
			{
				iLocal_131 = unk_0x105601648511CC64();
				iLocal_130 = 1;
			}
			else
			{
				iLocal_132 = unk_0x105601648511CC64();
			}
		}
		else
		{
			iLocal_130 = 0;
		}
	}
	if ((iLocal_132 - iLocal_131) > 180000)
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_51))
		{
			if (unk_0xD45C08B05D4687A7(iLocal_51))
			{
				unk_0x57EB4CC8F1928A47(iLocal_51);
				if (unk_0x4DBCE270B354E123(iLocal_51, vLocal_113, 100f, 100f, 100f, false, true, 0))
				{
					unk_0x346129B364057FF6(iLocal_51, 1740.797f, 4648.756f, 42.6529f, 1f, -1, 1048576000, 0, 1193033728);
					unk_0x22321800954A532E(iLocal_51, true);
				}
				func_104();
				SYSTEM::WAIT(0);
				func_70(&uLocal_138, "REBU2AU", "REBU2_WK", 4, 0, 0, 0);
				func_4();
			}
		}
	}
}

void func_63()//Position - 0x3EF1
{
	if (unk_0x63276C96B907C69E(unk_0xBC25C936A095B5BA()))
	{
		if (!iLocal_133)
		{
			iLocal_134 = unk_0x105601648511CC64();
			iLocal_133 = 1;
		}
		else
		{
			iLocal_135 = unk_0x105601648511CC64();
		}
	}
	else
	{
		iLocal_133 = 0;
	}
	if ((iLocal_135 - iLocal_134) > 120000)
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_51))
		{
			if (unk_0xD45C08B05D4687A7(iLocal_51))
			{
				unk_0x57EB4CC8F1928A47(iLocal_51);
				if (unk_0x4DBCE270B354E123(iLocal_51, vLocal_113, 100f, 100f, 100f, false, true, 0))
				{
					unk_0x346129B364057FF6(iLocal_51, vLocal_113, 1f, -1, 1048576000, 0, 1193033728);
					unk_0x22321800954A532E(iLocal_51, true);
				}
				else
				{
					unk_0xA3981DED4FC2E56E(iLocal_51, 0, 4194304);
				}
				func_104();
				SYSTEM::WAIT(0);
				func_70(&uLocal_138, "REBU2AU", "REBU2_QM", 4, 0, 0, 0);
				func_4();
			}
		}
	}
}

void func_64()//Position - 0x3FB1
{
	if (!unk_0x36CEFBE9B745A58D(iLocal_51))
	{
		if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_51, 8f, 8f, 8f, 0, 1, 0) || unk_0xEBE910FA7CB6EAF0(unk_0xBC25C936A095B5BA()))
		{
			if ((unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) && !unk_0x62F3A07C43FFB568(iLocal_51, unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0)) && !unk_0xEBE910FA7CB6EAF0(unk_0xBC25C936A095B5BA()))
			{
				if (!unk_0x2DA8CA50A72528FB(iLocal_88))
				{
					iLocal_88 = func_67(iLocal_51, 0, 145);
				}
				if (unk_0x2DA8CA50A72528FB(iLocal_111))
				{
					unk_0x07B8ECB35A4ED3AC(&iLocal_111);
				}
			}
			else
			{
				if (!unk_0x7214F4879DF8A314(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x2DA8CA50A72528FB(iLocal_88))
					{
						unk_0x07B8ECB35A4ED3AC(&iLocal_88);
					}
				}
				if (!unk_0x2DA8CA50A72528FB(iLocal_111))
				{
					iLocal_111 = func_65(vLocal_113, 1);
				}
			}
		}
		else if (!unk_0x2DA8CA50A72528FB(iLocal_88))
		{
			iLocal_88 = func_67(iLocal_51, 0, 145);
		}
		if (!unk_0xD45C08B05D4687A7(iLocal_51))
		{
			if (!unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_51, 8f, 8f, 8f, 0, 1, 0))
			{
				unk_0xA4E856A8CD53B8DF(iLocal_51);
				unk_0x75E3FA28CC7D5707(iLocal_51, func_59());
				unk_0x0AB3C2863B144B82(iLocal_51, 1);
				unk_0x59B9712C1EAB0092(iLocal_51, 0);
			}
			if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
			{
				unk_0xA4E856A8CD53B8DF(iLocal_51);
				unk_0x75E3FA28CC7D5707(iLocal_51, func_59());
				unk_0x0AB3C2863B144B82(iLocal_51, 1);
				unk_0x59B9712C1EAB0092(iLocal_51, 0);
			}
		}
		if (!unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_51, 150f, 150f, 150f, 0, 1, 0))
		{
			func_4();
		}
	}
}

int func_65(vector3 vParam0, bool bParam1)//Position - 0x4129
{
	int iVar0;
	
	iVar0 = unk_0x390CF6C8AD6903B7(vParam0);
	unk_0x3F5F1772D71D5EC4(iVar0, func_66(unk_0x7AF0088ABFA713B6(), 1f, 1f));
	unk_0x0BBAABB52887CF8C(iVar0, bParam1);
	return iVar0;
}

float func_66(bool bParam0, float fParam1, float fParam2)//Position - 0x4155
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_67(int iParam0, bool bParam1, int iParam2)//Position - 0x416C
{
	int iVar0;
	
	iVar0 = func_68(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x2DA8CA50A72528FB(iVar0)) && unk_0x0F6F4C227FB5DD52(&(Global_19B04.f_6D75[iParam2 /*29*/].f_3)))
	{
		unk_0x436D0272182E484D(iVar0, &(Global_19B04.f_6D75[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_68(int iParam0, bool bParam1, bool bParam2)//Position - 0x41BE
{
	int iVar0;
	
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x511FE22BCF5353CD(iParam0);
	if (unk_0xD27AC0E9B78CFDD7(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(iVar0, func_66(unk_0x7AF0088ABFA713B6(), 1f, 1f));
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
		unk_0x3F5F1772D71D5EC4(iVar0, func_66(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
		unk_0xF9C2945DB5BAB4BF(iVar0, bParam1);
	}
	else if (unk_0xB12D030810E8447D(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(iVar0, func_66(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
	}
	return iVar0;
}

int func_69()//Position - 0x4262
{
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		iLocal_129 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
		if (unk_0xE59B7F5A03335350(iLocal_129, 0))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_51))
			{
				if (unk_0x25EF720B1CAB1E23(iLocal_51, iLocal_129))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_70(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x42A5
{
	func_80(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_71(sParam2, iParam3, 0);
}

int func_71(char* sParam0, int iParam1, bool bParam2)//Position - 0x42F3
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
					func_79();
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
		if (func_78(8, -1))
		{
			return 0;
		}
		Global_3E04 = { Global_3DFE };
		func_77();
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
				func_76();
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
				if (func_75())
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
			if (func_74())
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
			func_73();
			Global_3DC2 = bParam2;
		}
		Global_3DBA = iParam1;
		StringCopy(&Global_3C3B, sParam0, 24);
		Global_394A = 0;
		func_72();
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
		func_79();
	}
	return 0;
}

void func_72()//Position - 0x45BF
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

void func_73()//Position - 0x45EF
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

int func_74()//Position - 0x4684
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_75()//Position - 0x46AB
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

void func_76()//Position - 0x4744
{
	if (func_32(14))
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
		Global_389D = func_44();
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

void func_77()//Position - 0x47E6
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

bool func_78(int iParam0, int iParam1)//Position - 0x483C
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

void func_79()//Position - 0x4877
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

void func_80(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x48CE
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

void func_81(bool bParam0)//Position - 0x4924
{
	if (bParam0)
	{
		if (iLocal_119)
		{
			if (!unk_0xF1734B55490E9045(&Local_121))
			{
				if (func_84(&uLocal_138, "REBU2AU", &Local_121, &Local_120, 8, 0, 0))
				{
					iLocal_119 = 0;
				}
			}
			else
			{
				iLocal_119 = 0;
			}
		}
	}
	else if ((!iLocal_119 && func_12()) && !func_52())
	{
		Local_121 = { func_54() };
		Local_120 = { func_56() };
		func_82();
		iLocal_119 = 1;
	}
}

void func_82()//Position - 0x4990
{
	Global_394A = 0;
	func_83();
}

void func_83()//Position - 0x49A0
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

bool func_84(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x49C4
{
	func_80(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_71(sParam2, iParam4, 0);
}

void func_85()//Position - 0x4A18
{
	if (unk_0x724D816EA203A79E(iLocal_51))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_51))
		{
			unk_0x2E9860A2B72187F5(iLocal_51, 394, true);
		}
		if (unk_0xD9C1758D86688CEA(iLocal_51, unk_0xBC25C936A095B5BA(), 1))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_51))
			{
				unk_0x5558ED6D4A2DEC93(iLocal_51, unk_0xBC25C936A095B5BA(), 150f, -1, 0, 0);
				unk_0x22321800954A532E(iLocal_51, true);
			}
			if (!unk_0x36CEFBE9B745A58D(iLocal_53))
			{
				unk_0xA902E18EDF6FA0C8(5, iLocal_137, 1862763509);
				unk_0xB8CBD998685C0685(iLocal_53, unk_0xBC25C936A095B5BA(), 0, 16);
				unk_0x22321800954A532E(iLocal_53, true);
			}
			func_104();
			SYSTEM::WAIT(0);
			func_70(&uLocal_138, "REBU2AU", "REBU2_CRAZY", 4, 0, 0, 0);
			func_4();
			iLocal_49 = 4;
		}
		if (unk_0x724D816EA203A79E(iLocal_53))
		{
			if (unk_0xD9C1758D86688CEA(iLocal_53, unk_0xBC25C936A095B5BA(), 1))
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_51))
				{
					unk_0x5558ED6D4A2DEC93(iLocal_51, unk_0xBC25C936A095B5BA(), 150f, -1, 0, 0);
					unk_0x22321800954A532E(iLocal_51, true);
				}
				if (!unk_0x36CEFBE9B745A58D(iLocal_53))
				{
					unk_0xA902E18EDF6FA0C8(5, iLocal_137, 1862763509);
					unk_0xB8CBD998685C0685(iLocal_53, unk_0xBC25C936A095B5BA(), 0, 16);
					unk_0x22321800954A532E(iLocal_53, true);
				}
				func_104();
				SYSTEM::WAIT(0);
				func_70(&uLocal_138, "REBU2AU", "REBU2_CRAZY", 4, 0, 0, 0);
				func_4();
				iLocal_49 = 4;
			}
		}
	}
	if (!unk_0x36CEFBE9B745A58D(iLocal_51))
	{
		if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 1)
		{
			unk_0x5558ED6D4A2DEC93(iLocal_51, unk_0xBC25C936A095B5BA(), 150f, -1, 0, 0);
			unk_0x22321800954A532E(iLocal_51, true);
			func_104();
			SYSTEM::WAIT(0);
			func_70(&uLocal_138, "REBU2AU", "REBU2_CRAZY", 4, 0, 0, 0);
			func_4();
			iLocal_49 = 4;
		}
	}
}

void func_86()//Position - 0x4B91
{
	int iVar0;
	
	if (!unk_0x36CEFBE9B745A58D(iLocal_51))
	{
		if ((unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_51, 1.2f, 1.2f, 5f, 0, 1, 0) && unk_0x7214F4879DF8A314(unk_0xBC25C936A095B5BA())) && !unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()))
		{
			if (func_48(1, 0, 1))
			{
				bLocal_104 = true;
				if (!iLocal_89)
				{
					func_93(1, 1, 1, 0, 0);
					unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 24);
					unk_0x7456702622C62EA0(1);
					unk_0x59B038076F830627(false);
					unk_0x43F06392C4EF25E0(false);
					unk_0x0FC2D36CE8F740E4(unk_0xBC25C936A095B5BA(), true);
					if (unk_0x724D816EA203A79E(unk_0x3E12B546F3F2597A()))
					{
						unk_0x77815D3407C6700D(unk_0x3E12B546F3F2597A(), true, 0);
						if (unk_0x7544D2465B934445(unk_0x3E12B546F3F2597A()))
						{
							func_92(unk_0x3E12B546F3F2597A());
							unk_0xE6E403909F4BF47F(unk_0x3E12B546F3F2597A(), 200f);
						}
						if (unk_0xE642C1AC73CE364E(unk_0x3E12B546F3F2597A(), iLocal_51, 5f, 5f, 5f, 0, 1, 0) || unk_0x4DBCE270B354E123(unk_0x3E12B546F3F2597A(), vLocal_74, 5f, 5f, 5f, false, true, 0))
						{
							unk_0x641B19E156645A92(unk_0x3E12B546F3F2597A(), unk_0x541C2AEF053615BC(iLocal_51, true) - Vector(0f, 3f, 5f), 0, false, 0, 1);
							if (!unk_0x1D403DFADBC2DE3C(unk_0x3E12B546F3F2597A(), 0))
							{
								unk_0xF0A40F19AAB79E88(unk_0x3E12B546F3F2597A(), 1084227584);
							}
						}
					}
					if (unk_0x724D816EA203A79E(iLocal_54))
					{
						if (unk_0x7544D2465B934445(iLocal_54))
						{
							func_92(iLocal_54);
							unk_0xE6E403909F4BF47F(iLocal_54, 200f);
						}
						if (unk_0xE642C1AC73CE364E(iLocal_54, iLocal_51, 8f, 8f, 8f, 0, 1, 0))
						{
							unk_0x641B19E156645A92(iLocal_54, vLocal_74, 0, false, 0, 1);
							if (!unk_0x1D403DFADBC2DE3C(iLocal_54, 0))
							{
								unk_0xF0A40F19AAB79E88(iLocal_54, 1084227584);
							}
						}
					}
					if (!unk_0x36CEFBE9B745A58D(iLocal_51))
					{
						iLocal_129 = unk_0x39827CF9BEAB804C(unk_0x541C2AEF053615BC(iLocal_51, true), 5f, 0, 2);
						if (!unk_0x1D403DFADBC2DE3C(iLocal_129, 0))
						{
							if (unk_0x7544D2465B934445(iLocal_129))
							{
								func_92(iLocal_129);
								unk_0xE6E403909F4BF47F(iLocal_129, 200f);
							}
							unk_0x641B19E156645A92(iLocal_129, unk_0x541C2AEF053615BC(iLocal_51, true) + Vector(0f, 5f, 5f), 1, false, 0, 1);
						}
					}
					unk_0x7A71B0C6DDC0D7DA(vLocal_72, 10f);
					unk_0xADC7E88690E324EB(vLocal_72, 10f, 0);
					unk_0xEDAD35A0D81ED3FB(vLocal_72, 4.5f, 0, 0, 0, 0, false, 0);
					unk_0x641B19E156645A92(iLocal_51, vLocal_72, 1, false, 0, 1);
					unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), vLocal_72, 1, false, 0, 1);
					if (!unk_0x36CEFBE9B745A58D(iLocal_51))
					{
					}
					iVar0 = 0;
					while (iVar0 < iLocal_52)
					{
						if (unk_0x724D816EA203A79E(iLocal_52[iVar0]))
						{
							if (unk_0x4DBCE270B354E123(iLocal_52[iVar0], unk_0x541C2AEF053615BC(iLocal_51, false), 1.5f, 1.5f, 1.5f, false, true, 0))
							{
								unk_0xF845620A03C7425B(&(iLocal_52[iVar0]));
							}
						}
						iVar0++;
					}
					if (!unk_0x36CEFBE9B745A58D(iLocal_51))
					{
						iLocal_303 = unk_0xD0D858E538FD01C3(163.449f, 6839.993f, 18.88f, 0f, 0f, 0f, 2);
						iLocal_71 = unk_0x578D5D08EC980893("DEFAULT_ANIMATED_CAMERA", false);
						unk_0xA4DB448107C6D171(iLocal_71, iLocal_303, "untie_cam", "random@burial");
						unk_0x49D46EE47C9CCB66(unk_0xBC25C936A095B5BA());
						unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), 162.6699f, 6839.238f, 18.8314f, 0, false, 0, 1);
						unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), 18.2311f);
						unk_0x65E471E4A2D56226(iLocal_51, 200, 0);
						unk_0x485146BF6C7427C5(iLocal_51, 0);
						unk_0x7EC4B6D9DC0E5FEE(iLocal_51, 0);
						unk_0x49D46EE47C9CCB66(iLocal_51);
						unk_0xB62398E536F695FC(iLocal_51, iLocal_303, "random@burial", "untie_ped", 1000f, -1000f, 4, 0, 1148846080, 0);
						unk_0x2EB4D46478766D87(iLocal_51, 0, 0);
						unk_0xB62398E536F695FC(unk_0xBC25C936A095B5BA(), iLocal_303, "random@burial", "untie_player", 1000f, -1000f, 0, 0, 1148846080, 0);
						unk_0x2EB4D46478766D87(unk_0xBC25C936A095B5BA(), 0, 0);
						unk_0xBEBE356CCD6268A1(iLocal_57[0], iLocal_303, "untie_legstie", "random@burial", 1000f, -1000f, 0, 1148846080);
						unk_0xBEBE356CCD6268A1(iLocal_57[1], iLocal_303, "untie_wristtie", "random@burial", 1000f, -1000f, 0, 1148846080);
						unk_0x348665177DBFB93B(iLocal_71, true);
						unk_0x062C9995BFD27B2A(true, false, 3000, 1, 0, 0);
						iLocal_94 = unk_0x105601648511CC64();
						iLocal_89 = 1;
					}
				}
			}
		}
	}
	if (iLocal_89 && !iLocal_91)
	{
		unk_0xDE7B9CB38D019BF0();
		if (unk_0x77FC50899603581D(iLocal_303))
		{
			if ((unk_0x8FD30584EB38411B(iLocal_303) > 0.115f && unk_0x8FD30584EB38411B(iLocal_303) < 0.12f) || (unk_0x8FD30584EB38411B(iLocal_303) > 0.355f && unk_0x8FD30584EB38411B(iLocal_303) < 0.36f))
			{
				unk_0xC4BA30B532FE260F(-1, "ROPE_CUT", "ROPE_CUT_SOUNDSET", true);
			}
			if (unk_0x8FD30584EB38411B(iLocal_303) > 0.6f)
			{
				if (!iLocal_90)
				{
					func_104();
					SYSTEM::WAIT(0);
					if (func_70(&uLocal_138, "REBU2AU", "REBU2_UNT", 4, 0, 0, 0))
					{
						iLocal_90 = 1;
					}
				}
			}
		}
		iLocal_93 = unk_0x105601648511CC64();
		if (((iLocal_93 - iLocal_94) > 9700 && !iLocal_97) && unk_0x7FCE28BE45D0735E() == 4)
		{
			unk_0x9216004FAC08D1DC("CamPushInNeutral", 0, 0);
			unk_0xC4BA30B532FE260F(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
			iLocal_97 = 1;
		}
		if ((iLocal_93 - iLocal_94) > 10000)
		{
			iLocal_91 = 1;
		}
		if (func_90(1000))
		{
			func_104();
			unk_0x7A41D32A383895D8(800);
			while (unk_0x422F9EDE839E6ABB())
			{
				SYSTEM::WAIT(0);
			}
			iLocal_91 = 1;
			bLocal_92 = true;
		}
	}
	if (iLocal_91 && !bLocal_96)
	{
		unk_0x59B038076F830627(true);
		unk_0x43F06392C4EF25E0(true);
		unk_0x0BD2283F2F727F2C(iLocal_303, 1f);
		unk_0x49D46EE47C9CCB66(unk_0xBC25C936A095B5BA());
		unk_0x2EB4D46478766D87(unk_0xBC25C936A095B5BA(), 0, 0);
		unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), 162.5284f, 6839.658f, 18.8198f, 1, false, 0, 1);
		unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), 256.7693f);
		if (!unk_0x36CEFBE9B745A58D(iLocal_51))
		{
			unk_0x49D46EE47C9CCB66(iLocal_51);
			unk_0x2EB4D46478766D87(iLocal_51, 0, 0);
			unk_0xF1FC2182A76AD7FC(iLocal_51, 1);
			unk_0x641B19E156645A92(iLocal_51, 164.4963f, 6839.333f, 18.9657f, 1, false, 0, 1);
			unk_0x019CE76D5286C95C(iLocal_51, 73.449f);
		}
		unk_0xF3F01A78937DC905(26.1578f);
		unk_0x2B9AEC08E469E384(-8.1198f, 1065353216);
		unk_0x348665177DBFB93B(iLocal_71, false);
		unk_0x062C9995BFD27B2A(false, false, 3000, 1, 0, 0);
		unk_0x4EC087603E1DEF9C(iLocal_71, 0);
		unk_0x0FC2D36CE8F740E4(unk_0xBC25C936A095B5BA(), false);
		if (bLocal_92)
		{
			unk_0x829FA4611BD56B44(800);
			while (unk_0x26641E1BFD792DBC())
			{
				SYSTEM::WAIT(0);
			}
		}
		bLocal_96 = true;
	}
	if (!unk_0x36CEFBE9B745A58D(iLocal_51))
	{
		if (bLocal_96)
		{
			if (!iLocal_95)
			{
				if (!func_12())
				{
					if (func_44() == 0)
					{
						func_70(&uLocal_138, "REBU2AU", "REBU2_HM0", 4, 0, 0, 0);
					}
					if (func_44() == 1)
					{
						func_70(&uLocal_138, "REBU2AU", "REBU2_HM1", 4, 0, 0, 0);
					}
					if (func_44() == 2)
					{
						func_70(&uLocal_138, "REBU2AU", "REBU2_HM2", 4, 0, 0, 0);
					}
					unk_0xA902E18EDF6FA0C8(1, iLocal_137, 1862763509);
					unk_0xA902E18EDF6FA0C8(1, 1862763509, iLocal_137);
					unk_0xC5A6DFE2B8987B17(&iLocal_59);
					unk_0x56F2E1B5599188FA(0, unk_0xBC25C936A095B5BA(), -1, 2048, 2);
					unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 4000);
					if (unk_0xE59B7F5A03335350(unk_0x3E12B546F3F2597A(), 0))
					{
						if (unk_0xE642C1AC73CE364E(iLocal_51, unk_0x3E12B546F3F2597A(), 20f, 20f, 20f, 0, 1, 0) && unk_0x524ABB0435146845(unk_0x3E12B546F3F2597A()) > 0)
						{
							unk_0xD179FA0466FA4FE3(0, unk_0x3E12B546F3F2597A(), -1, 0, 1f, 1, 0);
						}
						else if (!unk_0xD45C08B05D4687A7(iLocal_51))
						{
							unk_0x75E3FA28CC7D5707(iLocal_51, func_59());
							unk_0x0AB3C2863B144B82(iLocal_51, 1);
							unk_0x59B9712C1EAB0092(iLocal_51, 0);
						}
					}
					else if (!unk_0xD45C08B05D4687A7(iLocal_51))
					{
						unk_0x75E3FA28CC7D5707(iLocal_51, func_59());
						unk_0x0AB3C2863B144B82(iLocal_51, 1);
						unk_0x59B9712C1EAB0092(iLocal_51, 0);
					}
					unk_0x535008C596714F9E(iLocal_59);
					unk_0xA8E6405305C0D7DF(iLocal_51, iLocal_59);
					unk_0x02DAF06EA4F08219(&iLocal_59);
					if (unk_0x2DA8CA50A72528FB(iLocal_88))
					{
						unk_0x07B8ECB35A4ED3AC(&iLocal_88);
					}
					if (!unk_0x2DA8CA50A72528FB(iLocal_111))
					{
						iLocal_111 = func_65(vLocal_113, 1);
					}
					if (func_44() == 2 && !func_9())
					{
						if (!unk_0x2DA8CA50A72528FB(iLocal_112))
						{
							iLocal_112 = func_65(vLocal_114, 0);
							unk_0xBF0E22F3E083C33D(iLocal_112, 269);
							func_88();
						}
					}
					func_87();
					iLocal_105 = 1;
					iLocal_95 = 1;
					SYSTEM::SETTIMERA(0);
					unk_0xDD56BACCCF835044(-133.841f, -38.5734f, -100f, -126.2403f, -29.194f, 100f, 0);
					unk_0x379ACE23D404525C(-133.841f, -38.5734f, -100f, -126.2403f, -29.194f, 100f, false, 1);
					func_93(0, 1, 1, 0, 0);
					unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 4);
					unk_0x5502708AECB47F5D(unk_0xBC25C936A095B5BA());
					iLocal_47 = 4;
				}
			}
		}
	}
}

void func_87()//Position - 0x537A
{
	if (!func_9())
	{
		if (func_44() == 2)
		{
			Global_63A8 = 1;
		}
	}
}

void func_88()//Position - 0x5396
{
	if (func_44() == 2)
	{
		if (!Global_63AA)
		{
			func_89("CULT_BLIP_HELP", -1);
			Global_63AA = 1;
		}
	}
}

void func_89(char* sParam0, int iParam1)//Position - 0x53BA
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, true, iParam1);
}

int func_90(int iParam0)//Position - 0x53D1
{
	if (unk_0x726D9204B160D23E())
	{
		if ((unk_0x105601648511CC64() - Global_1C) > iParam0)
		{
			Global_1B = unk_0x105601648511CC64();
		}
		Global_1C = unk_0x105601648511CC64();
		if ((unk_0x105601648511CC64() - Global_1B) > iParam0)
		{
			if (func_91())
			{
				Global_1B = unk_0x105601648511CC64();
				return 1;
			}
		}
	}
	return 0;
}

int func_91()//Position - 0x541B
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

void func_92(int iParam0)//Position - 0x544D
{
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
		{
			if (unk_0x7544D2465B934445(iParam0))
			{
				unk_0x046D954861E89961(iParam0);
				unk_0x65E471E4A2D56226(iParam0, unk_0x8D66276473ABD7CC(iParam0) + 200, 0);
				unk_0xE6E403909F4BF47F(iParam0, (unk_0x77F5C030D3238E26(iParam0) + 200f));
				unk_0xD3F329A16C0E5B2B(iParam0, (unk_0xA6EB9CEADFB819EC(iParam0) + 200f));
				unk_0x7A71B0C6DDC0D7DA(unk_0x541C2AEF053615BC(iParam0, true), 5f);
				unk_0x6C5F5B5F6894CCE3(unk_0x541C2AEF053615BC(iParam0, true), 2.5f, 1, 0, 0, false);
			}
		}
	}
}

void func_93(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x54CB
{
	if (bParam0)
	{
		unk_0x0D2E9062E966BE4F(unk_0xB5CEFD608600A09F());
		unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 1);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 1);
		func_100(1);
		unk_0x32FF237D69EB5489();
		unk_0x3169E2C5E6A096BC();
		if (Global_389D.f_1 > 3)
		{
			if (unk_0x58E7DDFF8D17A82A())
			{
				unk_0x1E08809A5041F85B(false);
			}
			if (!func_74())
			{
				Global_389D.f_1 = 3;
			}
			Global_3DB8 = 5;
		}
		func_99(1, iParam3, iParam2, 0);
		Global_DAA5 = 1;
		Global_10ABB = 1;
		Global_11540 = 1;
	}
	else
	{
		func_100(0);
		unk_0xCB50D125C355ED9C();
		Global_DAA5 = 0;
		if (bParam1)
		{
			unk_0x7FF4F08CAB3344B1();
		}
		unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 0);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 0);
		func_99(0, iParam3, iParam2, 0);
		if (unk_0x7AF0088ABFA713B6())
		{
			if ((((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_97(unk_0xB5CEFD608600A09F())) && !func_95(unk_0xB5CEFD608600A09F(), 0)) && !func_94()) && !bParam4)
			{
				unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), false);
			}
		}
		else if ((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_97(unk_0xB5CEFD608600A09F())) && !bParam4)
		{
			unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), false);
		}
		Global_11540 = 0;
	}
}

bool func_94()//Position - 0x55F4
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_27.f_12, 14);
}

bool func_95(int iParam0, int iParam1)//Position - 0x5611
{
	bool bVar0;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		bVar0 = func_96(-1, 0) == 8;
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

int func_96(int iParam0, bool bParam1)//Position - 0x565C
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_23();
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

int func_97(int iParam0)//Position - 0x569D
{
	if (func_95(iParam0, 0))
	{
		return 1;
	}
	if (func_98())
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

bool func_98()//Position - 0x56DF
{
	return unk_0xFA30DFD0084E92FE(Global_240006, 3);
}

int func_99(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x56F0
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

void func_100(int iParam0)//Position - 0x5723
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

void func_101()//Position - 0x5746
{
	if (!unk_0x1D403DFADBC2DE3C(iLocal_51, 0))
	{
		switch (iLocal_128)
		{
			case 0:
				if (iLocal_84 < unk_0x105601648511CC64())
				{
					if (func_70(&uLocal_138, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_84 = (unk_0x105601648511CC64() + unk_0x491B2241281A03B7(4000, 5500));
						iLocal_128++;
					}
				}
				break;
			
			case 1:
				if (iLocal_84 < unk_0x105601648511CC64())
				{
					if (func_70(&uLocal_138, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_84 = (unk_0x105601648511CC64() + unk_0x491B2241281A03B7(4000, 5500));
						iLocal_128++;
					}
				}
				break;
			
			case 2:
				if (iLocal_84 < unk_0x105601648511CC64())
				{
					if (func_70(&uLocal_138, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_84 = (unk_0x105601648511CC64() + unk_0x491B2241281A03B7(4000, 5500));
						iLocal_128++;
					}
				}
				break;
			
			case 3:
				if (iLocal_84 < unk_0x105601648511CC64())
				{
					if (func_70(&uLocal_138, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_84 = (unk_0x105601648511CC64() + unk_0x491B2241281A03B7(4000, 5500));
						iLocal_128 = 0;
					}
				}
				break;
			}
	}
}

void func_102(int iParam0, char* sParam1, int iParam2)//Position - 0x584D
{
	unk_0x53D8178763EDCE60(iParam0, sParam1, func_103(iParam2), 1);
}

int func_103(int iParam0)//Position - 0x5864
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

void func_104()//Position - 0x5A59
{
	Global_394A = 0;
	func_105();
}

void func_105()//Position - 0x5A69
{
	unk_0x5C7DC611411E2CF9();
	Global_41AB = 0;
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x1E08809A5041F85B(false);
		Global_3DB8 = 6;
	}
}

void func_106()//Position - 0x5A8A
{
	if (!iLocal_61 && unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vLocal_85, 30f, 30f, 30f, false, true, 0))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_52[1]))
		{
			if (func_70(&uLocal_138, "REBU2AU", "REBU2_ATVF", 4, 0, 0, 0))
			{
				iLocal_61 = 1;
			}
		}
	}
	if (unk_0xE59B7F5A03335350(iLocal_54, 0))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_52[0]))
		{
			unk_0x1A06AE15BF21D407(iLocal_52[0], iLocal_54, unk_0xBC25C936A095B5BA(), 8, 30f, 262144, -1f, 10f, 1);
			unk_0x22321800954A532E(iLocal_52[0], true);
		}
		if (!unk_0x36CEFBE9B745A58D(iLocal_52[1]))
		{
			unk_0xD179FA0466FA4FE3(iLocal_52[1], iLocal_54, -1, 0, 3f, 1, 0);
			unk_0x22321800954A532E(iLocal_52[1], true);
		}
	}
	else
	{
		iLocal_58 = 0;
		while (iLocal_58 <= 1)
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_52[iLocal_58]))
			{
				unk_0x5558ED6D4A2DEC93(iLocal_52[iLocal_58], unk_0xBC25C936A095B5BA(), 250f, -1, 0, 0);
				unk_0x22321800954A532E(iLocal_52[iLocal_58], true);
			}
			iLocal_58++;
		}
	}
	SYSTEM::WAIT(0);
	func_4();
}

void func_107()//Position - 0x5B95
{
	if (!unk_0x36CEFBE9B745A58D(iLocal_52[0]) && !unk_0x36CEFBE9B745A58D(iLocal_52[1]))
	{
		if (!unk_0x48EBE45A9A7EB10C(iLocal_52[0]) && !unk_0x48EBE45A9A7EB10C(iLocal_52[1]))
		{
			if (func_70(&uLocal_138, "REBU2AU", "REBU2_VH", 4, 0, 0, 0))
			{
				if (!unk_0x32E373675659FDB0(iLocal_52[1]))
				{
					unk_0xA4E856A8CD53B8DF(iLocal_52[1]);
					unk_0x3D3F19B39A42CF7A(iLocal_52[1], unk_0xBC25C936A095B5BA(), -1, -957453492);
				}
			}
		}
	}
	iLocal_47 = 7;
}

void func_108()//Position - 0x5C15
{
	float fVar0;
	
	if (!unk_0x36CEFBE9B745A58D(iLocal_52[0]) && !unk_0x36CEFBE9B745A58D(iLocal_52[1]))
	{
		if (!iLocal_63)
		{
			if (!iLocal_62)
			{
				unk_0xC5A6DFE2B8987B17(&iLocal_59);
				unk_0x56F2E1B5599188FA(0, unk_0xBC25C936A095B5BA(), -1, 2048, 2);
				unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 0);
				unk_0x535008C596714F9E(iLocal_59);
				unk_0xA8E6405305C0D7DF(iLocal_52[1], iLocal_59);
				unk_0x02DAF06EA4F08219(&iLocal_59);
				iLocal_62 = 1;
			}
			if (unk_0xC5B8A5F778E321DD(iLocal_52[1], unk_0xBC25C936A095B5BA(), 90f))
			{
				func_104();
				SYSTEM::WAIT(0);
				func_70(&uLocal_138, "REBU2AU", "REBU2_GUY", 4, 0, 0, 0);
				if (!unk_0x36CEFBE9B745A58D(iLocal_52[0]) && !unk_0x36CEFBE9B745A58D(iLocal_52[1]))
				{
					fVar0 = func_110(iLocal_52[0], unk_0xBC25C936A095B5BA(), 1);
					if (fVar0 > 5f)
					{
						fVar0 = (fVar0 - 2f);
					}
					else
					{
						fVar0 = (fVar0 - 0.5f);
					}
					unk_0x17175087F2DB6AC8(iLocal_56, 0, true);
					unk_0x5DBE04849460E608(iLocal_56, iLocal_52[0], unk_0xFA18E720A39243D0(iLocal_52[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					unk_0xA4E856A8CD53B8DF(iLocal_52[0]);
					unk_0xC5A6DFE2B8987B17(&iLocal_59);
					unk_0x56F2E1B5599188FA(0, unk_0xBC25C936A095B5BA(), -1, 2048, 2);
					unk_0xE896C0AD02364F2A(0, "random@burial", "a_burial_stop", 8f, -4f, 2000, 0, 0, 0, 0, 0);
					unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 0);
					unk_0x535008C596714F9E(iLocal_59);
					unk_0xA8E6405305C0D7DF(iLocal_52[0], iLocal_59);
					unk_0x02DAF06EA4F08219(&iLocal_59);
					unk_0x8E25082A46F87892(iLocal_52[1], joaat("weapon_sawnoffshotgun"), true);
					unk_0xA4E856A8CD53B8DF(iLocal_52[1]);
					unk_0xC5A6DFE2B8987B17(&iLocal_59);
					unk_0x56F2E1B5599188FA(0, unk_0xBC25C936A095B5BA(), -1, 2048, 2);
					unk_0x9565F9267674873A(0, unk_0xBC25C936A095B5BA(), -1, fVar0, 1f, 1073741824, 0);
					unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 0);
					unk_0x535008C596714F9E(iLocal_59);
					unk_0xA8E6405305C0D7DF(iLocal_52[1], iLocal_59);
					unk_0x02DAF06EA4F08219(&iLocal_59);
					iLocal_63 = 1;
				}
			}
		}
		if (unk_0x724D816EA203A79E(iLocal_56))
		{
			if (unk_0xE7E55F7532DEE345(iLocal_56))
			{
				if (unk_0x96044E39418AAF17(iLocal_52[0], "random@burial", "a_burial_stop", 3))
				{
					if (unk_0x4A3B2CF8BADDD74E(iLocal_52[0], "random@burial", "a_burial_stop") > 0.355f)
					{
						unk_0x17175087F2DB6AC8(iLocal_56, 1, true);
					}
				}
			}
		}
		if (iLocal_63 && !iLocal_125)
		{
			if (func_70(&uLocal_138, "REBU2AU", "REBU2_WHO", 4, 0, 0, 0))
			{
				unk_0xC5A6DFE2B8987B17(&iLocal_59);
				unk_0xD0231395241DBA85(0, unk_0xBC25C936A095B5BA(), unk_0xBC25C936A095B5BA(), 1f, 0, 3.5f, 1082130432, 1, 0, -957453492);
				unk_0x57D65255D3D3B6A7(0, unk_0xBC25C936A095B5BA(), -1, 0);
				unk_0x535008C596714F9E(iLocal_59);
				unk_0xA8E6405305C0D7DF(iLocal_52[1], iLocal_59);
				unk_0x02DAF06EA4F08219(&iLocal_59);
				unk_0x3857DADBD6EC8A54("RE6_START");
				iLocal_125 = 1;
			}
		}
		if (iLocal_125 && !iLocal_126)
		{
			if (func_70(&uLocal_138, "REBU2AU", "REBU2_WAR", 4, 0, 0, 0))
			{
				if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_52[0], 30f, 30f, 30f, 0, 1, 0) && unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_52[1], 30f, 30f, 30f, 0, 1, 0))
				{
					unk_0x57D65255D3D3B6A7(iLocal_52[0], unk_0xBC25C936A095B5BA(), -1, 0);
				}
				iLocal_126 = 1;
				SYSTEM::SETTIMERB(0);
			}
		}
		if (iLocal_126 && !bLocal_127)
		{
			if (SYSTEM::TIMERB() > 15000 && !func_12())
			{
				if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_52[0], 30f, 30f, 30f, 0, 1, 0) && unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_52[1], 30f, 30f, 30f, 0, 1, 0))
				{
					unk_0x85DB484A637CEAB9(iLocal_52[0], unk_0xBC25C936A095B5BA(), 0);
					unk_0x85DB484A637CEAB9(iLocal_52[1], unk_0xBC25C936A095B5BA(), 0);
					func_70(&uLocal_138, "REBU2AU", "REBU2_SHO", 4, 0, 0, 0);
					bLocal_127 = true;
				}
			}
		}
		if (((!iLocal_64 && iLocal_125) && !unk_0x36CEFBE9B745A58D(iLocal_52[0])) && !unk_0x36CEFBE9B745A58D(iLocal_52[1]))
		{
			if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_52[0], 30f, 30f, 30f, 0, 1, 0) && unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_52[1], 30f, 30f, 30f, 0, 1, 0))
			{
				if (!func_12())
				{
					if (func_109())
					{
						func_70(&uLocal_138, "REBU2AU", "REBU2_FO", 4, 0, 0, 0);
					}
					else
					{
						func_70(&uLocal_138, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0);
					}
				}
			}
			else
			{
				unk_0xC5A6DFE2B8987B17(&iLocal_59);
				unk_0x9565F9267674873A(0, iLocal_52[1], -1, 2f, 1f, 1073741824, 0);
				unk_0x85DB484A637CEAB9(0, iLocal_52[1], 0);
				unk_0xA3A7138EAD2268A0(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
				unk_0x535008C596714F9E(iLocal_59);
				unk_0xA8E6405305C0D7DF(iLocal_52[0], iLocal_59);
				unk_0x02DAF06EA4F08219(&iLocal_59);
				unk_0xC5A6DFE2B8987B17(&iLocal_59);
				unk_0x9565F9267674873A(0, iLocal_52[0], -1, 2f, 1f, 1073741824, 0);
				unk_0x85DB484A637CEAB9(0, iLocal_52[0], 0);
				unk_0xA3A7138EAD2268A0(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
				unk_0x535008C596714F9E(iLocal_59);
				unk_0xA8E6405305C0D7DF(iLocal_52[1], iLocal_59);
				unk_0x02DAF06EA4F08219(&iLocal_59);
				SYSTEM::SETTIMERB(15000);
				iLocal_115 = 0;
				iLocal_126 = 1;
				iLocal_64 = 1;
			}
		}
		if (bLocal_127)
		{
			func_11();
			func_112();
		}
		if (((unk_0x1028B6250119A74B(iLocal_52[0], unk_0xBC25C936A095B5BA()) || unk_0x1028B6250119A74B(iLocal_52[1], unk_0xBC25C936A095B5BA())) || unk_0x0921C54CF8DFC6E7(unk_0xB5CEFD608600A09F(), iLocal_52[0])) || unk_0x0921C54CF8DFC6E7(unk_0xB5CEFD608600A09F(), iLocal_52[1]))
		{
			if (unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 4) && !unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 3))
			{
				if (unk_0x7214F4879DF8A314(unk_0xBC25C936A095B5BA()))
				{
					if (!iLocal_70)
					{
						func_104();
						SYSTEM::WAIT(0);
						if (func_70(&uLocal_138, "REBU2AU", "REBU2_GUN", 4, 0, 0, 0))
						{
							iLocal_70 = 1;
							func_112();
						}
					}
				}
			}
			if (unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 3) && !unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 4))
			{
				if (unk_0x7214F4879DF8A314(unk_0xBC25C936A095B5BA()))
				{
					if (!iLocal_70)
					{
						func_104();
						SYSTEM::WAIT(0);
						if (func_70(&uLocal_138, "REBU2AU", "REBU2_WEP", 4, 0, 0, 0))
						{
							iLocal_70 = 1;
							func_112();
						}
					}
				}
			}
			if (unk_0xE1C3A331B6951C3D(unk_0xB5CEFD608600A09F()) || unk_0x32E373675659FDB0(unk_0xBC25C936A095B5BA()))
			{
				func_112();
			}
		}
	}
}

int func_109()//Position - 0x6205
{
	if (unk_0xFA30DFD0084E92FE(unk_0x491B2241281A03B7(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

float func_110(int iParam0, int iParam1, bool bParam2)//Position - 0x6226
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

int func_111()//Position - 0x6284
{
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0xE59B7F5A03335350(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0))
			{
				if ((((unk_0xEA8F5A4C494DBF3B(unk_0xBC25C936A095B5BA(), joaat("rhino")) || unk_0x0879C0BDFDEB6C70(unk_0xBC25C936A095B5BA())) || unk_0xEA8F5A4C494DBF3B(unk_0xBC25C936A095B5BA(), joaat("annihilator"))) || unk_0xEA8F5A4C494DBF3B(unk_0xBC25C936A095B5BA(), joaat("buzzard"))) || unk_0x62083F80FA40AAD2(unk_0xBC25C936A095B5BA()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_112()//Position - 0x630C
{
	func_11();
	unk_0x3857DADBD6EC8A54("RE6_START");
	if (!iLocal_115)
	{
		if (unk_0x724D816EA203A79E(iLocal_52[0]))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_52[0]))
			{
				unk_0x2E9860A2B72187F5(iLocal_52[0], 156, true);
				if (unk_0x724D816EA203A79E(iLocal_56))
				{
					unk_0x3D669AF9A68FF281(iLocal_52[0]);
					if (unk_0xE7E55F7532DEE345(iLocal_56))
					{
						if (!iLocal_64)
						{
							unk_0x17175087F2DB6AC8(iLocal_56, 0, true);
							unk_0x5DBE04849460E608(iLocal_56, iLocal_52[0], unk_0xFA18E720A39243D0(iLocal_52[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							unk_0xA4E856A8CD53B8DF(iLocal_52[0]);
							unk_0xC5A6DFE2B8987B17(&iLocal_59);
							unk_0x44C98C11ED6DD327(0);
							unk_0xE896C0AD02364F2A(0, "random@burial", "a_burial_stop", 8f, -8f, 2000, 0, 0, 0, 0, 0);
							unk_0xB8CBD998685C0685(0, unk_0xBC25C936A095B5BA(), 0, 16);
							unk_0x535008C596714F9E(iLocal_59);
							unk_0xA8E6405305C0D7DF(iLocal_52[0], iLocal_59);
							unk_0x02DAF06EA4F08219(&iLocal_59);
							unk_0x22321800954A532E(iLocal_52[0], true);
							unk_0x2EB4D46478766D87(iLocal_52[0], 0, 0);
							iLocal_115 = 1;
						}
					}
					else
					{
						unk_0xC5A6DFE2B8987B17(&iLocal_59);
						unk_0x44C98C11ED6DD327(0);
						unk_0xB8CBD998685C0685(0, unk_0xBC25C936A095B5BA(), 0, 16);
						unk_0x535008C596714F9E(iLocal_59);
						unk_0xA8E6405305C0D7DF(iLocal_52[0], iLocal_59);
						unk_0x02DAF06EA4F08219(&iLocal_59);
						unk_0x22321800954A532E(iLocal_52[0], true);
						iLocal_115 = 1;
					}
				}
			}
			else
			{
				iLocal_115 = 1;
			}
		}
		else
		{
			iLocal_115 = 1;
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_56))
	{
		if (unk_0xE7E55F7532DEE345(iLocal_56))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_52[0]))
			{
				if (unk_0x96044E39418AAF17(iLocal_52[0], "random@burial", "a_burial_stop", 3))
				{
					if (unk_0x4A3B2CF8BADDD74E(iLocal_52[0], "random@burial", "a_burial_stop") > 0.355f)
					{
						unk_0x17175087F2DB6AC8(iLocal_56, 1, true);
					}
				}
			}
		}
	}
	if (!iLocal_116)
	{
		if (unk_0x724D816EA203A79E(iLocal_52[1]))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_52[1]))
			{
				unk_0x2E9860A2B72187F5(iLocal_52[1], 156, true);
				unk_0x3D669AF9A68FF281(iLocal_52[1]);
				unk_0xC5A6DFE2B8987B17(&iLocal_59);
				unk_0x44C98C11ED6DD327(0);
				unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 500);
				unk_0xB8CBD998685C0685(0, unk_0xBC25C936A095B5BA(), 0, 16);
				unk_0x535008C596714F9E(iLocal_59);
				unk_0xA8E6405305C0D7DF(iLocal_52[1], iLocal_59);
				unk_0x02DAF06EA4F08219(&iLocal_59);
				unk_0x22321800954A532E(iLocal_52[1], true);
				iLocal_116 = 1;
			}
			else
			{
				iLocal_116 = 1;
			}
		}
		else
		{
			iLocal_116 = 1;
		}
	}
	if (iLocal_116 && iLocal_115)
	{
		iLocal_84 = unk_0x105601648511CC64() + 8500;
		SYSTEM::SETTIMERA(0);
		iLocal_47 = 7;
	}
}

int func_113(int iParam0)//Position - 0x6544
{
	if (func_116())
	{
		Global_19AFA = 1;
		Global_19AF7 = unk_0x105601648511CC64();
		if (func_25(Global_19AF9))
		{
			func_114(0);
		}
		unk_0x3FF92BBF0607A406(1, "RE_TITLE");
		if (iParam0 && func_25(Global_19AF9))
		{
			unk_0x621CEDEDDD531386();
		}
		return 1;
	}
	return 0;
}

void func_114(int iParam0)//Position - 0x6597
{
	switch (iParam0)
	{
		case 0:
			if (Global_19B04.f_6186.f_2 < 3)
			{
				if (!unk_0x5107E30005FCFEA8())
				{
					func_89(func_115(iParam0), -1);
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
					func_89(func_115(iParam0), -1);
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
					func_89(func_115(iParam0), -1);
					Global_19B04.f_6186.f_4++;
					unk_0xF0059F27F7BB6680(&Global_19B00, 2);
				}
			}
			break;
	}
}

char* func_115(int iParam0)//Position - 0x6678
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

int func_116()//Position - 0x66BA
{
	switch (func_117(&Global_62F8, 0, 5, 0, unk_0x8A55B15F4133C912()))
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

int func_117(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x66F0
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
		if (func_121(0))
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
		if (!func_119(iParam2))
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
			func_118(uParam0, iParam4);
		}
	}
	return 2;
}

void func_118(var uParam0, int iParam1)//Position - 0x6827
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

bool func_119(int iParam0)//Position - 0x6876
{
	return func_120(iParam0, Global_8C41);
}

int func_120(int iParam0, int iParam1)//Position - 0x6887
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

int func_121(int iParam0)//Position - 0x6A68
{
	if (Global_8C41 == 15)
	{
		return 0;
	}
	if (func_119(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_122()//Position - 0x6A8A
{
	if (unk_0x2DA8CA50A72528FB(iLocal_123))
	{
		unk_0x07B8ECB35A4ED3AC(&iLocal_123);
	}
	if (!unk_0x2DA8CA50A72528FB(iLocal_88))
	{
		if (!unk_0x1D403DFADBC2DE3C(iLocal_51, 0))
		{
			iLocal_88 = func_67(iLocal_51, 0, 145);
		}
	}
	iLocal_58 = 0;
	while (iLocal_58 <= 1)
	{
		if (!unk_0x2DA8CA50A72528FB(iLocal_87[iLocal_58]))
		{
			if (!unk_0x1D403DFADBC2DE3C(iLocal_52[iLocal_58], 0))
			{
				iLocal_87[iLocal_58] = func_67(iLocal_52[iLocal_58], 1, 145);
			}
		}
		iLocal_58++;
	}
}

void func_123()//Position - 0x6B03
{
	if (!unk_0x36CEFBE9B745A58D(iLocal_51))
	{
		switch (iLocal_128)
		{
			case 0:
				if (iLocal_84 < unk_0x105601648511CC64())
				{
					if (func_70(&uLocal_138, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_84 = (unk_0x105601648511CC64() + unk_0x491B2241281A03B7(4500, 6500));
						iLocal_128++;
					}
				}
				break;
			
			case 1:
				if (iLocal_84 < unk_0x105601648511CC64())
				{
					if (func_70(&uLocal_138, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_84 = (unk_0x105601648511CC64() + unk_0x491B2241281A03B7(4500, 6500));
						iLocal_128++;
					}
				}
				break;
			
			case 2:
				if (iLocal_84 < unk_0x105601648511CC64())
				{
					if (func_70(&uLocal_138, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_84 = (unk_0x105601648511CC64() + unk_0x491B2241281A03B7(4500, 6500));
						iLocal_128++;
					}
				}
				break;
			
			case 3:
				if (iLocal_84 < unk_0x105601648511CC64())
				{
					if (func_70(&uLocal_138, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_84 = (unk_0x105601648511CC64() + unk_0x491B2241281A03B7(4500, 6500));
						iLocal_128 = 0;
					}
				}
				break;
			}
	}
}

void func_124()//Position - 0x6C0D
{
	switch (iLocal_86)
	{
		case 0:
			if (func_70(&uLocal_138, "REBU2AU", "REBU2_CH1", 4, 0, 0, 0))
			{
				iLocal_86++;
			}
			break;
		
		case 1:
			if (!func_12())
			{
				if (func_70(&uLocal_138, "REBU2AU", "REBU2_CH2", 4, 0, 0, 0))
				{
					iLocal_86++;
				}
			}
			break;
		
		case 2:
			if (!func_12())
			{
				if (func_70(&uLocal_138, "REBU2AU", "REBU2_CH3", 4, 0, 0, 0))
				{
					iLocal_86++;
				}
			}
			break;
		
		case 3:
			if (!func_12())
			{
				if (func_70(&uLocal_138, "REBU2AU", "REBU2_CH4", 4, 0, 0, 0))
				{
					iLocal_86++;
				}
			}
			break;
		
		case 4:
			iLocal_84 = unk_0x105601648511CC64() + 3000;
			iLocal_86++;
			break;
		
		case 5:
			break;
	}
}

void func_125()//Position - 0x6CE1
{
	if (unk_0x724D816EA203A79E(iLocal_56))
	{
		if (unk_0xE7E55F7532DEE345(iLocal_56))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_52[0]))
			{
				if (unk_0x96044E39418AAF17(iLocal_52[0], "random@burial", "a_burial_stop", 3))
				{
					if (unk_0x4A3B2CF8BADDD74E(iLocal_52[0], "random@burial", "a_burial_stop") > 0.124f && unk_0x4A3B2CF8BADDD74E(iLocal_52[0], "random@burial", "a_burial") < 0.127f)
					{
						unk_0xF3E9344C2BE59F6E("scr_burial_dirt", iLocal_56, 0f, 0f, -0.95f, 0f, 180f, 0f, 1065353216, 0, 0, 0);
					}
				}
				if (unk_0x96044E39418AAF17(iLocal_52[0], "random@burial", "a_burial", 3))
				{
					if (((((unk_0x4A3B2CF8BADDD74E(iLocal_52[0], "random@burial", "a_burial") > 0.04f && unk_0x4A3B2CF8BADDD74E(iLocal_52[0], "random@burial", "a_burial") < 0.043f) || (unk_0x4A3B2CF8BADDD74E(iLocal_52[0], "random@burial", "a_burial") > 0.24f && unk_0x4A3B2CF8BADDD74E(iLocal_52[0], "random@burial", "a_burial") < 0.243f)) || (unk_0x4A3B2CF8BADDD74E(iLocal_52[0], "random@burial", "a_burial") > 0.44f && unk_0x4A3B2CF8BADDD74E(iLocal_52[0], "random@burial", "a_burial") < 0.443f)) || (unk_0x4A3B2CF8BADDD74E(iLocal_52[0], "random@burial", "a_burial") > 0.64f && unk_0x4A3B2CF8BADDD74E(iLocal_52[0], "random@burial", "a_burial") < 0.643f)) || (unk_0x4A3B2CF8BADDD74E(iLocal_52[0], "random@burial", "a_burial") > 0.84f && unk_0x4A3B2CF8BADDD74E(iLocal_52[0], "random@burial", "a_burial") < 0.843f))
					{
						unk_0xF3E9344C2BE59F6E("scr_burial_dirt", iLocal_56, 0f, 0f, -0.95f, 0f, 180f, 0f, 1065353216, 0, 0, 0);
					}
				}
			}
		}
	}
}

int func_126()//Position - 0x6EB4
{
	if (!iLocal_103)
	{
		if (unk_0x04880508C862E589(vLocal_74, 100f, 1) || unk_0x04880508C862E589(vLocal_74, 100f, 1))
		{
			if (unk_0x36CEFBE9B745A58D(iLocal_52[0]) || unk_0x36CEFBE9B745A58D(iLocal_52[1]))
			{
				iLocal_49 = 1;
				return 1;
			}
			else if (!unk_0x04880508C862E589(vLocal_74, 100f, 1) || !unk_0x04880508C862E589(vLocal_74, 100f, 1))
			{
				iLocal_49 = 1;
				return 1;
			}
		}
		if (((((((((unk_0xC7BAAE53803FB28C(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_smokegrenade"), 1) || unk_0xC7BAAE53803FB28C(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_grenade"), 1)) || unk_0xC7BAAE53803FB28C(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_stickybomb"), 1)) || unk_0xC7BAAE53803FB28C(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_grenadelauncher"), 1)) || unk_0xC7BAAE53803FB28C(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_grenadelauncher_smoke"), 1)) || unk_0xC7BAAE53803FB28C(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_rpg"), 1)) || unk_0xC7BAAE53803FB28C(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_molotov"), 1)) || unk_0xCD6353203C21B4FD(2, vLocal_74 - Vector(100f, 100f, 100f), vLocal_74 + Vector(100f, 100f, 100f))) || unk_0xCD6353203C21B4FD(4, vLocal_74 - Vector(100f, 100f, 100f), vLocal_74 + Vector(100f, 100f, 100f))) || unk_0xCD6353203C21B4FD(0, vLocal_74 - Vector(100f, 100f, 100f), vLocal_74 + Vector(100f, 100f, 100f)))
		{
			iLocal_49 = 1;
			return 1;
		}
		if (unk_0x724D816EA203A79E(iLocal_54))
		{
			if (!unk_0x1D403DFADBC2DE3C(iLocal_54, 0))
			{
				if (unk_0xD9C1758D86688CEA(iLocal_54, unk_0xBC25C936A095B5BA(), 1) || unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_54, 0))
				{
					unk_0x5502708AECB47F5D(iLocal_54);
					func_112();
					iLocal_49 = 3;
					return 1;
				}
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
				{
					if (unk_0xEA8F5A4C494DBF3B(unk_0xBC25C936A095B5BA(), joaat("towtruck")) || unk_0xEA8F5A4C494DBF3B(unk_0xBC25C936A095B5BA(), joaat("towtruck2")))
					{
						if (unk_0x27C9F6C1391327CF(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), iLocal_54))
						{
							func_112();
							iLocal_49 = 3;
							return 1;
						}
					}
				}
			}
		}
		if (!iLocal_69)
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_52[0]) && !unk_0x36CEFBE9B745A58D(iLocal_52[1]))
			{
				if ((((unk_0x1028B6250119A74B(iLocal_52[0], unk_0xBC25C936A095B5BA()) || unk_0x1028B6250119A74B(iLocal_52[1], unk_0xBC25C936A095B5BA())) || unk_0x0921C54CF8DFC6E7(unk_0xB5CEFD608600A09F(), iLocal_52[0])) || unk_0x0921C54CF8DFC6E7(unk_0xB5CEFD608600A09F(), iLocal_52[1])) || unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vLocal_74 - Vector(0f, 0f, 7f), 20f, 15f, 35f, false, true, 0))
				{
					if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vLocal_74 - Vector(0f, 0f, 7f), 28f, 18f, 35f, false, true, 0))
					{
						iLocal_49 = 1;
						return 1;
					}
				}
			}
		}
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_52[0]) && !unk_0x36CEFBE9B745A58D(iLocal_52[1]))
			{
				if (!unk_0x1D403DFADBC2DE3C(unk_0x3E12B546F3F2597A(), 0))
				{
					if (unk_0xE921F8171F0733B3(unk_0x3E12B546F3F2597A(), iLocal_52[0]) || unk_0xE921F8171F0733B3(unk_0x3E12B546F3F2597A(), iLocal_52[1]))
					{
						iLocal_49 = 5;
						return 1;
					}
				}
			}
		}
		if (!unk_0x36CEFBE9B745A58D(iLocal_51))
		{
			if (unk_0xD9C1758D86688CEA(iLocal_51, unk_0xBC25C936A095B5BA(), 0) || unk_0x3D3F3014B0F74446(iLocal_51, joaat("weapon_stungun"), 0))
			{
				iLocal_49 = 4;
				return 1;
			}
		}
		else
		{
			iLocal_49 = 4;
			return 1;
		}
		if (unk_0x1D403DFADBC2DE3C(iLocal_52[0], 0) || unk_0x1D403DFADBC2DE3C(iLocal_52[1], 0))
		{
			iLocal_49 = 6;
			return 1;
		}
		if (iLocal_69)
		{
			return 1;
		}
	}
	return 0;
}

int func_127(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, float fParam5, int iParam6)//Position - 0x7353
{
	float fVar0;
	float fVar1;
	bool bVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	bVar2 = false;
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0) && !bParam4)
	{
		if (unk_0x7214F4879DF8A314(iParam0))
		{
			fVar1 = fParam5;
		}
		else
		{
			fVar1 = (fParam5 + 3f);
		}
	}
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		if (!unk_0x1D403DFADBC2DE3C(iParam0, 0) && !bParam4)
		{
			vVar3 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
			vVar4 = { unk_0x541C2AEF053615BC(iParam0, true) };
			fVar5 = SYSTEM::VDIST(vVar3, vVar4);
			if (!unk_0xFA30DFD0084E92FE(iParam3, 3))
			{
				if (func_133(iParam0, iParam6))
				{
					func_132("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_132("	aggroReason = EAggro_Attacked\n");
					*uParam1 = 3;
					func_131(iParam0);
					return 1;
				}
			}
			if (!unk_0xFA30DFD0084E92FE(iParam3, 1))
			{
				if (fVar1 < 20f)
				{
				}
				if (unk_0x04880508C862E589(vVar4, fParam5, 1))
				{
					func_132("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_132("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_131(iParam0);
					return 1;
				}
				if (unk_0x876474582C5DECDE(vVar4 - Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), vVar4 + Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), 0))
				{
					func_132("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_132("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_131(iParam0);
					return 1;
				}
			}
			if (!unk_0xFA30DFD0084E92FE(iParam3, 2))
			{
				fVar0 = unk_0x28441A6C76D65605(unk_0xBC25C936A095B5BA());
				if (fVar0 < 0f)
				{
					fVar0 = 25f;
				}
				else if (fVar0 > 25f)
				{
					fVar0 = 25f;
				}
				if (unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 6))
				{
					if (unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), iParam0) || unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), iParam0))
					{
						if (fVar5 < fVar0)
						{
							if (unk_0x4833C1F1F1364989(iParam0, unk_0xBC25C936A095B5BA(), 17))
							{
								func_132("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
								func_132("	aggro Ped knows player is pointing gun\n");
								func_128("		lockOnTimer = ", *uParam2);
								func_132("\n");
								func_128("		time since not LockedOn = ", (unk_0x105601648511CC64() - iLocal_19));
								func_132("\n");
								bVar2 = true;
								if (unk_0x105601648511CC64() > (iLocal_19 + *uParam2))
								{
									func_132("			aggroReason = EAggro_HostileOrEnemy\n");
									*uParam1 = 2;
									func_131(iParam0);
									return 1;
								}
							}
						}
						else
						{
							bVar2 = false;
						}
					}
					else
					{
						bVar2 = false;
					}
				}
			}
			if (!unk_0xFA30DFD0084E92FE(iParam3, 0))
			{
				if (unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
				{
					func_132("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_132("			aggroReason = EAggro_Danger\n");
					*uParam1 = 0;
					func_131(iParam0);
					return 1;
				}
			}
		}
	}
	if (!bVar2)
	{
		iLocal_19 = unk_0x105601648511CC64();
	}
	return 0;
}

void func_128(char* sParam0, int iParam1)//Position - 0x75B1
{
	func_130(sParam0);
	func_129(iParam1);
}

void func_129(int iParam0)//Position - 0x75C5
{
	if (iParam0 > 0)
	{
	}
}

void func_130(char* sParam0)//Position - 0x75D3
{
	if (unk_0x3362CDE8460ED38B(sParam0, sParam0))
	{
	}
}

void func_131(int iParam0)//Position - 0x75E6
{
	unk_0xAFD2CBD312D69CFA(iParam0);
}

void func_132(char* sParam0)//Position - 0x75F4
{
	func_130(sParam0);
}

int func_133(int iParam0, int iParam1)//Position - 0x7602
{
	if (unk_0x7214F4879DF8A314(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0xD9C1758D86688CEA(iParam0, unk_0xBC25C936A095B5BA(), 1))
		{
			return 1;
		}
	}
	else if (unk_0xD9C1758D86688CEA(iParam0, unk_0xBC25C936A095B5BA(), 1))
	{
		if ((unk_0xDF3442EA6BB67B98(iParam0) - unk_0x8D66276473ABD7CC(iParam0)) > iParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_134()//Position - 0x764F
{
	vector3 vVar0;
	vector3 vVar1;
	
	func_136(39, 1);
	func_136(40, 1);
	func_136(41, 1);
	func_136(42, 1);
	func_136(43, 1);
	func_136(44, 1);
	unk_0x1DAA351326EA3537(vLocal_113 - Vector(20f, 40f, 40f), vLocal_113 + Vector(20f, 40f, 40f), 0, 1, 1, 1);
	unk_0x1DAA351326EA3537(vLocal_72 - Vector(20f, 50f, 60f), vLocal_72 + Vector(20f, 50f, 50f), 0, 1, 1, 1);
	unk_0x8510BC031C24B862(iLocal_83, true);
	unk_0xE85B33FB221A23CD(5, false);
	unk_0xE85B33FB221A23CD(3, false);
	unk_0xDF53A66AEE1401AA(0f);
	iLocal_51 = unk_0x01B3635C3E8EDD81(26, iLocal_80, vLocal_72, fLocal_77, 1, true);
	unk_0x2E35C4FA5F0ED22F(iLocal_51, true);
	unk_0xB105531EDD3DE51B(iLocal_51, false);
	unk_0xABA7AE40608505F2(iLocal_51, 2, false);
	unk_0xABA7AE40608505F2(iLocal_51, 128, true);
	unk_0x91629AC1E1F78419(iLocal_51, 1, false);
	unk_0x91629AC1E1F78419(iLocal_51, 6, false);
	unk_0xC8FD3EBBB90E8D7F(iLocal_51, 206, true);
	unk_0xC8FD3EBBB90E8D7F(iLocal_51, 318, false);
	unk_0xC8FD3EBBB90E8D7F(iLocal_51, 118, false);
	unk_0xC8FD3EBBB90E8D7F(iLocal_51, 208, true);
	unk_0x2CA123B0622F495C(iLocal_80);
	unk_0x65E471E4A2D56226(iLocal_51, iLocal_99, 0);
	unk_0x12D2D85EBAC186AA(unk_0xBC25C936A095B5BA(), 0);
	unk_0xB2CB6EAA6B280A84("rghKidnappers", &iLocal_136);
	unk_0xB2CB6EAA6B280A84("rghVictim", &iLocal_137);
	unk_0x4106FAF8AA1D69D5(iLocal_51, iLocal_137);
	iLocal_58 = 0;
	while (iLocal_58 <= 1)
	{
		iLocal_52[iLocal_58] = unk_0x01B3635C3E8EDD81(26, iLocal_81, vLocal_73[iLocal_58 /*3*/], fLocal_78[iLocal_58], 1, true);
		unk_0x2E35C4FA5F0ED22F(iLocal_52[iLocal_58], true);
		unk_0xF7CDBCD11F31B71A(iLocal_52[iLocal_58], 1);
		unk_0x91629AC1E1F78419(iLocal_52[iLocal_58], 0, true);
		unk_0xABA7AE40608505F2(iLocal_52[iLocal_58], 2, false);
		unk_0xABA7AE40608505F2(iLocal_52[iLocal_58], 128, true);
		unk_0xC8FD3EBBB90E8D7F(iLocal_52[iLocal_58], 42, true);
		unk_0x54480313BB3E8DD0(iLocal_52[0], 2);
		unk_0x91629AC1E1F78419(iLocal_52[0], 50, true);
		unk_0x479A4C6E23FBB038(iLocal_52[iLocal_58], 50);
		unk_0xFC3C88E2313FA926(iLocal_52[iLocal_58], 13);
		unk_0xB71D41C0310C93DE(iLocal_52[iLocal_58], true, 1);
		unk_0x4106FAF8AA1D69D5(iLocal_52[iLocal_58], iLocal_136);
		unk_0x8EF3D958386640FE(iLocal_52[iLocal_58], unk_0x491B2241281A03B7(800, 2000));
		iLocal_58++;
	}
	unk_0x2CA123B0622F495C(iLocal_82);
	unk_0x2CA123B0622F495C(iLocal_81);
	unk_0x479A4C6E23FBB038(iLocal_52[1], 100);
	unk_0xF2BA021070DE727E(iLocal_52[1], -687903391);
	unk_0xA902E18EDF6FA0C8(5, iLocal_136, 1862763509);
	unk_0x7A535CE1F001F3FE(iLocal_52[0], joaat("weapon_pistol"), -1, false, true);
	unk_0x7A535CE1F001F3FE(iLocal_52[1], joaat("weapon_sawnoffshotgun"), -1, false, true);
	iLocal_54 = unk_0x61C05BF08A1E0EFE(iLocal_83, vLocal_74, fLocal_79, true, true, false);
	unk_0xF0A40F19AAB79E88(iLocal_54, 1084227584);
	unk_0x93D3868AE0D83B7C(iLocal_54, 3);
	unk_0x1C5BDB4E5D257D63(iLocal_54, 5, 0, 0);
	unk_0x2CA123B0622F495C(iLocal_83);
	iLocal_56 = unk_0xB6896943DA475493(joaat("prop_ld_shovel"), vLocal_85, true, true, false);
	unk_0x2CA123B0622F495C(joaat("prop_ld_shovel"));
	iLocal_57[0] = unk_0xB6896943DA475493(joaat("p_arm_bind_cut_s"), vLocal_85, true, true, false);
	iLocal_57[1] = unk_0xB6896943DA475493(joaat("p_arm_bind_cut_s"), vLocal_85 + Vector(1f, 1f, 1f), true, true, false);
	unk_0xF243B7A14FCFD0F4(joaat("p_arm_bind_cut_s"));
	unk_0x5DBE04849460E608(iLocal_56, iLocal_52[0], unk_0xFA18E720A39243D0(iLocal_52[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	unk_0xB0031DDAE4FF0BC3(iLocal_52[0], 0, 0, 0, 0);
	unk_0xB0031DDAE4FF0BC3(iLocal_52[0], 3, 0, 1, 0);
	unk_0xB0031DDAE4FF0BC3(iLocal_52[0], 4, 1, 0, 0);
	unk_0xB0031DDAE4FF0BC3(iLocal_52[1], 0, 0, 2, 0);
	unk_0xB0031DDAE4FF0BC3(iLocal_52[1], 3, 2, 1, 0);
	unk_0xB0031DDAE4FF0BC3(iLocal_52[1], 4, 1, 1, 0);
	vVar0 = { vLocal_72 };
	vVar1 = { -2f, -4f, 18f };
	iLocal_303 = unk_0xD0D858E538FD01C3(vVar0, vVar1, 2);
	unk_0xB62398E536F695FC(iLocal_51, iLocal_303, "random@burial", "b_burial", 4f, -4f, 1, 0, 1148846080, 0);
	unk_0xBEBE356CCD6268A1(iLocal_57[0], iLocal_303, "b_burial_legstie", "random@burial", 4f, -4f, 0, 1148846080);
	unk_0xBEBE356CCD6268A1(iLocal_57[1], iLocal_303, "b_burial_wristtie", "random@burial", 4f, -4f, 0, 1148846080);
	unk_0xC2BF3DE5E47F801D(iLocal_303, true);
	unk_0x22321800954A532E(iLocal_51, true);
	unk_0xE896C0AD02364F2A(iLocal_52[0], "random@burial", "a_burial", 8f, -4f, -1, 1, 0, 0, 0, 0);
	unk_0xE896C0AD02364F2A(iLocal_52[1], "random@burial", "c_burial", 8f, -4f, -1, 1, 0, 0, 0, 0);
	unk_0xFB46D0183648781E(iLocal_52[0], vLocal_75, vLocal_76, 2.75f, 0, 0);
	unk_0xFB46D0183648781E(iLocal_52[1], vLocal_75, vLocal_76, 2.75f, 0, 0);
	if (func_44() == 0)
	{
		func_135(&uLocal_138, 0, unk_0xBC25C936A095B5BA(), "MICHAEL", 0, 1);
	}
	else if (func_44() == 1)
	{
		func_135(&uLocal_138, 1, unk_0xBC25C936A095B5BA(), "FRANKLIN", 0, 1);
	}
	else if (func_44() == 2)
	{
		func_135(&uLocal_138, 2, unk_0xBC25C936A095B5BA(), "TREVOR", 0, 1);
	}
	unk_0x36C3B58DA78A2679(iLocal_52[0], "A_M_M_HillBilly_02_WHITE_MINI_03");
	unk_0x36C3B58DA78A2679(iLocal_52[1], "A_M_M_HillBilly_02_WHITE_MINI_02");
	unk_0x36C3B58DA78A2679(iLocal_51, "KIDNAPPEDFEMALE");
	func_135(&uLocal_138, 4, iLocal_52[0], "KIDNAPPER2", 0, 1);
	func_135(&uLocal_138, 3, iLocal_52[1], "KIDNAPPER1", 0, 1);
	func_135(&uLocal_138, 5, iLocal_51, "KIDNAPPEDFEMALE", 0, 1);
}

void func_135(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x7B5F
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

void func_136(int iParam0, bool bParam1)//Position - 0x7BFA
{
	if (bParam1)
	{
		if (!func_143(iParam0, 2, 1))
		{
			func_142(iParam0, 2, 1);
		}
	}
	else if (func_143(iParam0, 2, 1))
	{
		func_137(iParam0, 2, 1);
	}
}

void func_137(int iParam0, int iParam1, bool bParam2)//Position - 0x7C31
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0x7CB6FD92BE491AD9(&(Global_16B4F.f_531[iParam0]), iParam1);
	}
	else if (unk_0x7AF0088ABFA713B6())
	{
		if (func_20() == 0)
		{
			iVar0 = func_140(func_141(iParam0), -1, 0);
			unk_0x7CB6FD92BE491AD9(&iVar0, iParam1);
			func_138(func_141(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_29C[iParam0]), iParam1);
	}
}

void func_138(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x7C9A
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_139(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, iParam3);
	}
}

int func_139(var uParam0)//Position - 0x7CCA
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_23();
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

int func_140(int iParam0, int iParam1, int iParam2)//Position - 0x7CFE
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_139(iParam1)];
	if (unk_0x6CB99B97664C3727(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_141(int iParam0)//Position - 0x7D30
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

void func_142(int iParam0, int iParam1, bool bParam2)//Position - 0x8024
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0xF0059F27F7BB6680(&(Global_16B4F.f_531[iParam0]), iParam1);
	}
	else if (unk_0x7AF0088ABFA713B6())
	{
		if (func_20() == 0)
		{
			iVar0 = func_140(func_141(iParam0), -1, 0);
			unk_0xF0059F27F7BB6680(&iVar0, iParam1);
			func_138(func_141(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xF0059F27F7BB6680(&(Global_19B04.f_29C[iParam0]), iParam1);
	}
}

int func_143(int iParam0, int iParam1, bool bParam2)//Position - 0x808D
{
	if (bParam2)
	{
		return unk_0xFA30DFD0084E92FE(Global_16B4F.f_531[iParam0], iParam1);
	}
	else if (unk_0x7AF0088ABFA713B6())
	{
		if (func_20() == 0)
		{
			return unk_0xFA30DFD0084E92FE(func_140(func_141(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xFA30DFD0084E92FE(Global_19B04.f_29C[iParam0], iParam1);
	}
	return 0;
}

void func_144()//Position - 0x80ED
{
	int iVar0;
	int iVar1;
	
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
	{
		iVar0 = unk_0x25480ACDBB6DB8F1(unk_0xBC25C936A095B5BA());
		if (unk_0xE59B7F5A03335350(iVar0, 0))
		{
			iVar1 = unk_0x3187EF5798B5D209(iVar0, 0, 0);
			if (!unk_0x36CEFBE9B745A58D(iVar1))
			{
				if (iVar1 != unk_0xBC25C936A095B5BA())
				{
					if (unk_0x5CAE759AE8219D20(iVar1))
					{
						if (!unk_0x1A6AA4082E241660(iVar1, unk_0xBC25C936A095B5BA()))
						{
							unk_0x56F2E1B5599188FA(iVar1, unk_0xBC25C936A095B5BA(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_145()//Position - 0x815A
{
	unk_0xF243B7A14FCFD0F4(iLocal_80);
	unk_0xF243B7A14FCFD0F4(iLocal_82);
	unk_0xF243B7A14FCFD0F4(iLocal_81);
	unk_0xF243B7A14FCFD0F4(iLocal_83);
	unk_0xF243B7A14FCFD0F4(joaat("prop_ld_shovel"));
	unk_0xF243B7A14FCFD0F4(joaat("p_arm_bind_cut_s"));
	unk_0x522053D86D6E1C7A("random@burial");
	unk_0xA8396BF0E2C53C39();
	unk_0x284F2ACE6839D3C0("ROPE_CUT", false, -1);
	unk_0x6FED2D1AA2EBF334("RE6_BOTH_DEAD_OS");
	if (((((((((unk_0xD6513D668481290A(iLocal_80) && unk_0xD6513D668481290A(iLocal_82)) && unk_0xD6513D668481290A(iLocal_81)) && unk_0xD6513D668481290A(iLocal_83)) && unk_0xD6513D668481290A(joaat("prop_ld_shovel"))) && unk_0xD6513D668481290A(joaat("p_arm_bind_cut_s"))) && unk_0xF9E082857622D91E("random@burial")) && unk_0x95654D7A61CD43DE()) && unk_0x284F2ACE6839D3C0("ROPE_CUT", false, -1)) && unk_0x6FED2D1AA2EBF334("RE6_BOTH_DEAD_OS"))
	{
		bLocal_50 = true;
	}
	else
	{
		unk_0xF243B7A14FCFD0F4(iLocal_80);
		unk_0xF243B7A14FCFD0F4(iLocal_82);
		unk_0xF243B7A14FCFD0F4(iLocal_81);
		unk_0xF243B7A14FCFD0F4(iLocal_83);
		unk_0xF243B7A14FCFD0F4(joaat("prop_ld_shovel"));
		unk_0xF243B7A14FCFD0F4(joaat("p_arm_bind_cut_s"));
		unk_0x522053D86D6E1C7A("random@burial");
		unk_0xA8396BF0E2C53C39();
		unk_0x284F2ACE6839D3C0("ROPE_CUT", false, -1);
		unk_0x6FED2D1AA2EBF334("RE6_BOTH_DEAD_OS");
	}
}

void func_146()//Position - 0x8271
{
	iLocal_80 = joaat("u_f_y_mistress");
	iLocal_81 = joaat("a_m_m_salton_01");
	iLocal_82 = joaat("a_m_m_salton_01");
	iLocal_83 = joaat("bison");
	vLocal_72 = { 163.4486f, 6839.993f, 18.86f };
	fLocal_77 = 0f;
	vLocal_73[0 /*3*/] = { 162.8193f, 6837.257f, 18.9614f };
	fLocal_78[0] = 297.0056f;
	vLocal_73[1 /*3*/] = { 162.5046f, 6841.68f, 18.8426f };
	fLocal_78[1] = 193.3866f;
	vLocal_74 = { 169.3462f, 6837.805f, 19.1421f };
	fLocal_79 = 265.6862f;
	vLocal_75 = { 164.0896f, 6836.923f, 19.03899f };
	vLocal_76 = { 168.9638f, 6834.302f, 24.99057f };
	iLocal_60 = 1;
}

int func_147()//Position - 0x832E
{
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), vLocal_44) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(unk_0xB5D9AE572C19509E(unk_0xBC25C936A095B5BA())) > 1369f && !func_158())
		{
			return 0;
		}
	}
	if (func_154())
	{
		return 1;
	}
	if (func_148(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_148(float fParam0, bool bParam1)//Position - 0x83B4
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
		if (func_33(func_44()))
		{
			iVar5 = func_30();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (unk_0xFA30DFD0084E92FE(Global_19B04.f_4871[iVar1 /*6*/], 2) && !unk_0xFA30DFD0084E92FE(Global_19B04.f_4871[iVar1 /*6*/], 3))
				{
					func_149(iVar1, &Var0);
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

void func_149(int iParam0, var uParam1)//Position - 0x846B
{
	switch (iParam0)
	{
		case 0:
			func_150(uParam1, "Abigail1", func_152(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 1:
			func_150(uParam1, "Abigail2", func_152(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 2:
			func_150(uParam1, "Barry1", func_152(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 3:
			func_150(uParam1, "Barry2", func_152(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_151(iParam0), 1, 1);
			break;
		
		case 4:
			func_150(uParam1, "Barry3", func_152(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 5:
			func_150(uParam1, "Barry3A", func_152(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 6:
			func_150(uParam1, "Barry3C", func_152(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 7:
			func_150(uParam1, "Barry4", func_152(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_151(iParam0), 0, 0);
			break;
		
		case 8:
			func_150(uParam1, "Dreyfuss1", func_152(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 9:
			func_150(uParam1, "Epsilon1", func_152(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 10:
			func_150(uParam1, "Epsilon2", func_152(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 11:
			func_150(uParam1, "Epsilon3", func_152(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 12:
			func_150(uParam1, "Epsilon4", func_152(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 13:
			func_150(uParam1, "Epsilon5", func_152(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 14:
			func_150(uParam1, "Epsilon6", func_152(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 15:
			func_150(uParam1, "Epsilon7", func_152(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 16:
			func_150(uParam1, "Epsilon8", func_152(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 17:
			func_150(uParam1, "Extreme1", func_152(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 18:
			func_150(uParam1, "Extreme2", func_152(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 19:
			func_150(uParam1, "Extreme3", func_152(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 20:
			func_150(uParam1, "Extreme4", func_152(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 21:
			func_150(uParam1, "Fanatic1", func_152(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_151(iParam0), 1, 0);
			break;
		
		case 22:
			func_150(uParam1, "Fanatic2", func_152(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_151(iParam0), 1, 0);
			break;
		
		case 23:
			func_150(uParam1, "Fanatic3", func_152(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_151(iParam0), 0, 1);
			break;
		
		case 24:
			func_150(uParam1, "Hao1", func_152(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_151(iParam0), 0, 1);
			break;
		
		case 25:
			func_150(uParam1, "Hunting1", func_152(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 26:
			func_150(uParam1, "Hunting2", func_152(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 27:
			func_150(uParam1, "Josh1", func_152(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 28:
			func_150(uParam1, "Josh2", func_152(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_151(iParam0), 1, 1);
			break;
		
		case 29:
			func_150(uParam1, "Josh3", func_152(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_151(iParam0), 1, 1);
			break;
		
		case 30:
			func_150(uParam1, "Josh4", func_152(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 31:
			func_150(uParam1, "Maude1", func_152(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 32:
			func_150(uParam1, "Minute1", func_152(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 33:
			func_150(uParam1, "Minute2", func_152(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 34:
			func_150(uParam1, "Minute3", func_152(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 35:
			func_150(uParam1, "MrsPhilips1", func_152(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 36:
			func_150(uParam1, "MrsPhilips2", func_152(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 37:
			func_150(uParam1, "Nigel1", func_152(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 38:
			func_150(uParam1, "Nigel1A", func_152(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_151(iParam0), 1, 1);
			break;
		
		case 39:
			func_150(uParam1, "Nigel1B", func_152(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_151(iParam0), 1, 1);
			break;
		
		case 40:
			func_150(uParam1, "Nigel1C", func_152(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_151(iParam0), 1, 1);
			break;
		
		case 41:
			func_150(uParam1, "Nigel1D", func_152(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_151(iParam0), 1, 1);
			break;
		
		case 42:
			func_150(uParam1, "Nigel2", func_152(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_151(iParam0), 1, 1);
			break;
		
		case 43:
			func_150(uParam1, "Nigel3", func_152(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_151(iParam0), 1, 1);
			break;
		
		case 44:
			func_150(uParam1, "Omega1", func_152(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 45:
			func_150(uParam1, "Omega2", func_152(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 46:
			func_150(uParam1, "Paparazzo1", func_152(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 47:
			func_150(uParam1, "Paparazzo2", func_152(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 48:
			func_150(uParam1, "Paparazzo3", func_152(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 49:
			func_150(uParam1, "Paparazzo3A", func_152(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 50:
			func_150(uParam1, "Paparazzo3B", func_152(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 51:
			func_150(uParam1, "Paparazzo4", func_152(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 52:
			func_150(uParam1, "Rampage1", func_152(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 54:
			func_150(uParam1, "Rampage3", func_152(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 55:
			func_150(uParam1, "Rampage4", func_152(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 56:
			func_150(uParam1, "Rampage5", func_152(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_151(iParam0), 0, 0);
			break;
		
		case 53:
			func_150(uParam1, "Rampage2", func_152(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_151(iParam0), 1, 0);
			break;
		
		case 57:
			func_150(uParam1, "TheLastOne", func_152(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 58:
			func_150(uParam1, "Tonya1", func_152(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 59:
			func_150(uParam1, "Tonya2", func_152(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 60:
			func_150(uParam1, "Tonya3", func_152(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 61:
			func_150(uParam1, "Tonya4", func_152(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		case 62:
			func_150(uParam1, "Tonya5", func_152(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_151(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_150(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0x95E0
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

int func_151(int iParam0)//Position - 0x9671
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

struct<2> func_152(int iParam0)//Position - 0x99B7
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_153(iParam0) };
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

struct<2> func_153(int iParam0)//Position - 0x99ED
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

int func_154()//Position - 0x9E38
{
	if (func_157() && !func_158())
	{
		return 1;
	}
	if (func_156() && func_155())
	{
		return 1;
	}
	return 0;
}

bool func_155()//Position - 0x9E6A
{
	return Global_199EA > 0;
}

int func_156()//Position - 0x9E78
{
	if (Global_15FA6 != -1)
	{
		return 1;
	}
	return 0;
}

int func_157()//Position - 0x9E8D
{
	if (Global_15FA6 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_147B0[Global_15FA6 /*34*/].f_F, 20);
	}
	return 0;
}

int func_158()//Position - 0x9EB3
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

int func_159()//Position - 0x9ED0
{
	if (!func_119(5))
	{
		return 1;
	}
	if (func_154())
	{
		return 1;
	}
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (SYSTEM::VMAG2(unk_0xB5D9AE572C19509E(unk_0xBC25C936A095B5BA())) > 1369f && !func_158())
		{
			return 0;
		}
	}
	if (func_148(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_160()//Position - 0x9F32
{
	if ((Global_19AF9 == func_39() && unk_0x8520DF5301DD9811()) && Global_19AFA)
	{
		return 1;
	}
	return 0;
}

void func_161(int iParam0)//Position - 0x9F5D
{
	if (iParam0 == -1)
	{
		iParam0 = func_39();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_163(iParam0);
	unk_0x8A623F2A0D19557F(0);
	unk_0xCB0D7BF24DBB59C6(1);
	Global_19AF6 = 0;
	func_162();
}

void func_162()//Position - 0x9F93
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

void func_163(int iParam0)//Position - 0x9FD0
{
	Global_19AF9 = iParam0;
}

int func_164(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x9FDE
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
		iParam1 = func_39();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_205())
		{
			return 0;
		}
	}
	vLocal_44 = { vParam0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			vVar1 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
			if (SYSTEM::VMAG2(unk_0xB5D9AE572C19509E(unk_0xBC25C936A095B5BA())) > 1369f && !func_158())
			{
				return 0;
			}
		}
		if (!Global_19B04.f_2360)
		{
			return 0;
		}
		if (func_16(0))
		{
			return 0;
		}
		if (func_154())
		{
			return 0;
		}
		if (func_204())
		{
			return 0;
		}
		if (Global_19AF9 != -1)
		{
			return 0;
		}
		if (func_33(func_44()))
		{
			if (func_148(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()) && !bParam4)
		{
			if ((vVar1.z - vLocal_44.z) > 50f)
			{
				return 0;
			}
		}
		if (!func_203(iParam1))
		{
			return 0;
		}
		if (func_33(func_44()))
		{
			if (func_202(func_44()) == 4 || func_202(func_44()) == 5)
			{
				return 0;
			}
		}
		if (func_33(func_44()))
		{
			if (!func_201(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_200(Global_19B04.f_6186.f_2B[iParam1]))
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
		if (func_199())
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
		if (!func_190(4))
		{
			return 0;
		}
		if (!func_119(5))
		{
			return 0;
		}
		if (func_189(iParam1, iParam2) && !bParam3)
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
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_189(0, 0))
		{
			return 0;
		}
		if (Global_634F)
		{
			return 0;
		}
		if (func_203(30) && !func_189(30, 0))
		{
			if (iParam1 != 30)
			{
				if (SYSTEM::VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_33(func_44()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				vVar3 = { Global_19B04.f_932.f_21B.f_8E8[iVar2 /*3*/] };
				iVar4 = Global_19B04.f_932.f_21B.f_8E4[iVar2];
				if (func_188(iVar4))
				{
					if (func_166(iVar2))
					{
						if (!func_165(vVar3, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false), vVar3) < (210f * 210f))
							{
								if (func_44() != iVar2)
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

bool func_165(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0xA378
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_166(int iParam0)//Position - 0xA3BF
{
	int iVar0;
	
	iVar0 = Global_19B04.f_932.f_21B.f_8E4[iParam0];
	return func_167(iVar0);
}

int func_167(int iParam0)//Position - 0xA3E0
{
	return func_168(iParam0, 1);
}

int func_168(int iParam0, int iParam1)//Position - 0xA3EF
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_188(iParam0))
	{
		return 0;
	}
	func_169(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_169(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0xA442
{
	func_170(func_181(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_170(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0xA460
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_180(iParam0, iParam1))
	{
		iVar0 = func_179(iParam1);
		iVar1 = func_177(iParam0);
		iVar2 = (func_177(iParam0) - func_177(iParam1));
		iVar3 = (func_179(iParam0) - func_179(iParam1));
		iVar4 = (func_176(iParam0) - func_176(iParam1));
		iVar5 = (func_175(iParam0) - func_175(iParam1));
		iVar6 = (func_174(iParam0) - func_174(iParam1));
		iVar7 = (func_173(iParam0) - func_173(iParam1));
	}
	else
	{
		iVar0 = func_179(iParam0);
		iVar1 = func_177(iParam1);
		iVar2 = (func_177(iParam1) - func_177(iParam0));
		iVar3 = (func_179(iParam1) - func_179(iParam0));
		iVar4 = (func_176(iParam1) - func_176(iParam0));
		iVar5 = (func_175(iParam1) - func_175(iParam0));
		iVar6 = (func_174(iParam1) - func_174(iParam0));
		iVar7 = (func_173(iParam1) - func_173(iParam0));
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
		iVar4 = (iVar4 + func_172(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_171(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_171(float fParam0, float fParam1, float fParam2)//Position - 0xA661
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

int func_172(int iParam0, int iParam1)//Position - 0xA6A3
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

int func_173(int iParam0)//Position - 0xA745
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_174(int iParam0)//Position - 0xA758
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_175(int iParam0)//Position - 0xA76B
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_176(int iParam0)//Position - 0xA77E
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_177(int iParam0)//Position - 0xA790
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_178(unk_0xFA30DFD0084E92FE(iParam0, 31), -1, 1)) + 2011;
}

int func_178(bool bParam0, int iParam1, int iParam2)//Position - 0xA7B5
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_179(int iParam0)//Position - 0xA7CC
{
	return iParam0 & 15;
}

int func_180(int iParam0, int iParam1)//Position - 0xA7D9
{
	int iVar0;
	int iVar1;
	
	if (!func_188(iParam1) || !func_188(iParam0))
	{
		return 1;
	}
	iVar0 = func_177(iParam0);
	iVar1 = func_177(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_179(iParam0);
	iVar1 = func_179(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_176(iParam0);
	iVar1 = func_176(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_175(iParam0);
	iVar1 = func_175(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_174(iParam0);
	iVar1 = func_174(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_173(iParam0);
	iVar1 = func_173(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_181()//Position - 0xA8E5
{
	var uVar0;
	
	func_187(&uVar0, unk_0xF40D00CD7B81C0A8());
	func_186(&uVar0, unk_0x7E09057438B9D216());
	func_185(&uVar0, unk_0x6E06C0DB9B43570D());
	func_184(&uVar0, unk_0xBE14F159908E4EE5());
	func_183(&uVar0, unk_0xDD6A91E47ED4D0CF());
	func_182(&uVar0, unk_0x4EEB3860BFC44B78());
	return uVar0;
}

void func_182(var uParam0, int iParam1)//Position - 0xA92B
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

void func_183(var uParam0, int iParam1)//Position - 0xA9B1
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_184(var uParam0, int iParam1)//Position - 0xA9E4
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_179(*uParam0);
	iVar1 = func_177(*uParam0);
	if (iParam1 < 1 || iParam1 > func_172(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_185(var uParam0, int iParam1)//Position - 0xAA35
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_186(var uParam0, int iParam1)//Position - 0xAA6F
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_187(var uParam0, int iParam1)//Position - 0xAAAA
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_188(int iParam0)//Position - 0xAAE6
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
	iVar0 = func_173(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_174(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_175(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_177(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_179(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_176(iParam0);
	if (iVar5 < 1 || iVar5 > func_172(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_189(int iParam0, int iParam1)//Position - 0xABC2
{
	if (unk_0xFA30DFD0084E92FE(Global_19B04.f_6186.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_190(int iParam0)//Position - 0xABE5
{
	int iVar0;
	
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				iVar0 = func_44();
				if (!func_33(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_198()) || Global_1974B) || Global_62BF) || func_197()) || func_78(8, -1)) || func_196()) || func_195()) || func_194()) || func_193()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1) || func_198()) || Global_62BF) || func_197()) || func_78(8, -1)) || func_194()) || func_196()) || func_195()) || func_193()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_198()) || Global_1974B) || Global_62BF) || func_197()) || func_78(8, -1)) || func_194()) || func_196()) || func_195()) || func_193()) || Global_19B04.f_1DEB.f_397[iVar0] == 5) || Global_8E64 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_198()) || Global_1974B) || Global_62BF) || func_197()) || func_78(8, -1)) || func_196()) || func_195()) || func_193()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_198() || unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0) || func_78(8, -1)) || func_193()) || func_192()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_78(8, -1) || func_196()) || func_195()) || func_192()) || func_191())
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
							if ((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || func_198()) || Global_62BF) || func_197()) || func_78(8, -1)) || func_195()) || func_194()) || func_193()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || !unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) || !unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F())) || !unk_0x726D9204B160D23E()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || func_198()) || func_195()) || Global_1974B) || Global_62BF) || func_197()) || Global_90C1) || func_78(8, -1)) || func_194()) || func_192()) || func_193()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || !unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) || !unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F())) || !unk_0x726D9204B160D23E()) || unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0)) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1)) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0x9273B3557334635D(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || func_198()) || Global_1974B) || Global_62BF) || func_197()) || func_78(8, -1)) || func_194()) || func_192()) || func_196()) || func_195()) || func_193())
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

var func_191()//Position - 0xB302
{
	return Global_16B42.f_1;
}

int func_192()//Position - 0xB310
{
	if (Global_15FA6 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_147B0[Global_15FA6 /*34*/].f_F, 13);
	}
	return 0;
}

int func_193()//Position - 0xB336
{
	if (unk_0xB731B8C5BCE89836(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_194()//Position - 0xB350
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

bool func_195()//Position - 0xB37A
{
	return Global_16B4F.f_142 > 0;
}

bool func_196()//Position - 0xB38B
{
	return Global_16B4F.f_141 > 0;
}

var func_197()//Position - 0xB39C
{
	return Global_140856;
}

int func_198()//Position - 0xB3A8
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		return Global_161D2.f_2C == 1;
	}
	return 0;
}

int func_199()//Position - 0xB3C4
{
	func_76();
	if (Global_C60[Global_389D /*2811*/][0 /*281*/].f_103 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_200(int iParam0)//Position - 0xB3EC
{
	return func_180(func_181(), iParam0);
}

int func_201(int iParam0, int iParam1, int iParam2)//Position - 0xB3FE
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_44();
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

int func_202(int iParam0)//Position - 0xB4E2
{
	if (!func_33(iParam0))
	{
		return 7;
	}
	return Global_19B04.f_1DEB.f_397[iParam0];
}

bool func_203(int iParam0)//Position - 0xB506
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_205())
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

int func_204()//Position - 0xB564
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

int func_205()//Position - 0xB5A8
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

void func_206()//Position - 0xB663
{
	int iVar0;
	
	if (iLocal_122)
	{
		func_219(0);
		unk_0xB830DBD32591E1BC();
		unk_0x748798F6C2AB96B7("RE6_BOTH_DEAD_OS");
		if (iLocal_115 || iLocal_125)
		{
			if (Global_63AC)
			{
				unk_0x3857DADBD6EC8A54("AC_STOP");
			}
			else
			{
				unk_0x3857DADBD6EC8A54("RE6_END");
			}
		}
		func_218();
		unk_0xA902E18EDF6FA0C8(255, iLocal_137, 1862763509);
		unk_0xA902E18EDF6FA0C8(255, 1862763509, iLocal_137);
		if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_51))
			{
				unk_0xC8FD3EBBB90E8D7F(iLocal_51, 317, true);
				if (!unk_0x5237AF95232D78C5(iLocal_51, 0))
				{
					unk_0x9E410F8AFFC2894E(iLocal_51);
				}
				if (unk_0xD45C08B05D4687A7(iLocal_51))
				{
					unk_0x57EB4CC8F1928A47(iLocal_51);
				}
				unk_0x2E35C4FA5F0ED22F(iLocal_51, false);
				unk_0xB105531EDD3DE51B(iLocal_51, true);
			}
			else if (!unk_0x1D403DFADBC2DE3C(iLocal_51, 0))
			{
				unk_0x485146BF6C7427C5(iLocal_51, 1);
				unk_0x7EC4B6D9DC0E5FEE(iLocal_51, 1);
			}
		}
		iVar0 = 0;
		while (iVar0 < iLocal_52)
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_52[iVar0]) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				unk_0x3D669AF9A68FF281(iLocal_52[iVar0]);
				if (iLocal_63 || iLocal_70)
				{
					unk_0xB8CBD998685C0685(iLocal_52[iVar0], unk_0xBC25C936A095B5BA(), 0, 16);
				}
				else
				{
					unk_0x5558ED6D4A2DEC93(iLocal_52[iVar0], unk_0xBC25C936A095B5BA(), 1000f, -1, 0, 0);
					func_104();
				}
				unk_0x22321800954A532E(iLocal_52[iVar0], true);
			}
			iVar0++;
		}
		unk_0xA35241BCE4C1A24B(&(iLocal_57[0]));
		unk_0xA35241BCE4C1A24B(&(iLocal_57[1]));
		if (unk_0x724D816EA203A79E(iLocal_54))
		{
			unk_0x1E7A09C1710FB071(&iLocal_54);
		}
		if (unk_0x724D816EA203A79E(iLocal_56))
		{
			if (unk_0xE7E55F7532DEE345(iLocal_56))
			{
				unk_0x17175087F2DB6AC8(iLocal_56, 1, true);
			}
			unk_0xF8ED8988FAF2823F(&iLocal_56);
		}
		if (unk_0x2DA8CA50A72528FB(iLocal_123))
		{
			unk_0x07B8ECB35A4ED3AC(&iLocal_123);
		}
		iLocal_58 = 0;
		while (iLocal_58 <= 1)
		{
			if (unk_0x2DA8CA50A72528FB(iLocal_87[iLocal_58]))
			{
				unk_0x07B8ECB35A4ED3AC(&(iLocal_87[iLocal_58]));
			}
			iLocal_58++;
		}
		if (unk_0x2DA8CA50A72528FB(iLocal_88))
		{
			unk_0x07B8ECB35A4ED3AC(&iLocal_88);
		}
		if (unk_0xEF0E25DA0CB6E8FF(iLocal_71))
		{
			unk_0x4EC087603E1DEF9C(iLocal_71, 0);
		}
		unk_0xE85B33FB221A23CD(5, true);
		unk_0xE85B33FB221A23CD(3, true);
		unk_0xDF53A66AEE1401AA(1f);
		unk_0x379ACE23D404525C(-133.841f, -38.5734f, -100f, -126.2403f, -29.194f, 100f, true, 1);
	}
	func_207(-1);
	unk_0x95E4B6F3ED223F5A();
}

void func_207(int iParam0)//Position - 0xB886
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_39();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_160())
	{
		func_211(iParam0);
		unk_0x3FF92BBF0607A406(0, 0);
		Global_19AFB = unk_0x105601648511CC64();
		func_210(30000);
		StringCopy(&cVar0, func_209(Global_19AF9, 1), 64);
		if (func_38(Global_19AF9) > 0)
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
	func_208(&Global_62F8);
	Global_19AFA = 0;
	func_163(-1);
}

void func_208(var uParam0)//Position - 0xB93B
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

char* func_209(int iParam0, bool bParam1)//Position - 0xB978
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

void func_210(int iParam0)//Position - 0xBBC1
{
	Global_8E68 = (unk_0x105601648511CC64() + iParam0);
}

void func_211(int iParam0)//Position - 0xBBD3
{
	func_212(iParam0, 0, func_217(iParam0));
}

void func_212(int iParam0, int iParam1, int iParam2)//Position - 0xBBE8
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_181();
	func_215(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_214(iParam0, &uVar0);
	Var1 = { func_213(&uVar0) };
}

struct<16> func_213(var uParam0)//Position - 0xBC17
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_175(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_174(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_173(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_176(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_179(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_177(*uParam0), 64);
	return Var0;
}

void func_214(int iParam0, var uParam1)//Position - 0xBCE6
{
	Global_19B04.f_6186.f_2B[iParam0] = *uParam1;
}

void func_215(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xBCFE
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_177(*uParam0);
	iVar1 = func_179(*uParam0);
	iVar2 = func_176(*uParam0);
	iVar3 = func_175(*uParam0);
	iVar4 = func_174(*uParam0);
	iVar5 = func_173(*uParam0);
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
	iVar6 = func_172(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_172(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_216(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_216(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xBE80
{
	func_187(uParam0, iParam1);
	func_186(uParam0, iParam2);
	func_185(uParam0, iParam3);
	func_183(uParam0, iParam5);
	func_184(uParam0, iParam4);
	func_182(uParam0, iParam6);
}

int func_217(int iParam0)//Position - 0xBEB8
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

void func_218()//Position - 0xC05C
{
	Global_63A8 = 0;
	Global_63A9 = 0;
	Global_63AB = 0;
	Global_63AC = 0;
	Global_63AD = 0;
}

void func_219(bool bParam0)//Position - 0xC078
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 49)
	{
		func_136(iVar0, bParam0);
		iVar0++;
	}
}

