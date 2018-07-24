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
	int iLocal_50[2] = { 0, 0 };
	vector3 vLocal_51[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_52[2] = { 0f, 0f };
	int iLocal_53 = 0;
	vector3 vLocal_54 = { 0f, 0f, 0f };
	float fLocal_55 = 0f;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	vector3 vLocal_59 = { 0f, 0f, 0f };
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	struct<6> Local_62 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_63 = { 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	vector3 vLocal_67 = { 0f, 0f, 0f };
	vector3 vLocal_68 = { 0f, 0f, 0f };
	vector3 vLocal_69 = { 0f, 0f, 0f };
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	bool bLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	bool bLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	var uLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89[2] = { 0, 0 };
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	var uLocal_97 = 0;
	int iLocal_98 = 0;
	bool bLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	bool bLocal_104 = 0;
	var uLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	var uLocal_120 = 16;
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
	struct<2> Local_285 = { 0, 5 } ;
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
	var uLocal_301 = 5;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	
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
	StringCopy(&Local_62, "", 24);
	if (unk_0xE8A79675302ED812(11))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_58))
		{
			if (unk_0xD45C08B05D4687A7(iLocal_58))
			{
				unk_0x57EB4CC8F1928A47(iLocal_58);
			}
		}
		func_207();
	}
	if (func_165(ScriptParam_285.f_1[0 /*3*/], -1, 0, 0, 0))
	{
		func_162(-1);
	}
	else
	{
		unk_0x95E4B6F3ED223F5A();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if ((unk_0x684B06333594F9EA() || iLocal_76) || iLocal_103)
		{
			if (!func_161())
			{
				if (func_160())
				{
					func_207();
				}
			}
			unk_0x2E94C9549322098D("RE_RA", 0);
			switch (iLocal_46)
			{
				case 0:
					if (func_148())
					{
						func_207();
					}
					if (!iLocal_71)
					{
						func_147();
					}
					else
					{
						func_146();
					}
					if (bLocal_72)
					{
						iLocal_70 = 1;
						iLocal_46 = 1;
					}
					break;
				
				case 1:
					if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
					{
						switch (iLocal_47)
						{
							case 0:
								func_136();
								iLocal_47 = 1;
								break;
							
							case 1:
								if (!func_135())
								{
									if ((unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vLocal_59, 75f, 75f, 75f, false, true, 0) && !unk_0x41A5D6415E2CC10E(iLocal_58)) || unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_58, 15f, 15f, 15f, 0, 1, 0))
									{
										if (!func_161())
										{
											unk_0x56F2E1B5599188FA(unk_0xBC25C936A095B5BA(), iLocal_58, -1, 0, 2);
											unk_0xDF53A66AEE1401AA(0.1f);
											func_134();
											func_125(1);
										}
										bLocal_79 = true;
									}
									if (!unk_0x36CEFBE9B745A58D(iLocal_50[0]) && !unk_0x36CEFBE9B745A58D(iLocal_50[1]))
									{
										if (unk_0xD9C1758D86688CEA(iLocal_50[0], unk_0xBC25C936A095B5BA(), 1) || unk_0xD9C1758D86688CEA(iLocal_50[1], unk_0xBC25C936A095B5BA(), 1))
										{
											func_134();
											bLocal_79 = true;
										}
									}
									if (bLocal_79)
									{
										func_119();
									}
									if (!unk_0x36CEFBE9B745A58D(iLocal_58) && unk_0xE59B7F5A03335350(iLocal_53, 0))
									{
										if (unk_0x62F3A07C43FFB568(iLocal_58, iLocal_53, 0))
										{
											iLocal_103 = 1;
										}
									}
									if (bLocal_104)
									{
										if (unk_0xE59B7F5A03335350(iLocal_53, 0))
										{
											if (!unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_53, 150f, 150f, 150f, 0, 1, 0))
											{
												iLocal_47 = 9;
											}
										}
									}
								}
								if (func_118())
								{
									func_134();
									iLocal_47 = 3;
								}
								else if (func_135())
								{
									func_134();
									func_116();
									iLocal_47 = 2;
								}
								break;
							
							case 2:
								switch (iLocal_98)
								{
									case 0:
										iLocal_47 = 3;
										break;
									
									case 1:
										iLocal_47 = 3;
										break;
									
									case 3:
										iLocal_47 = 3;
										break;
									
									case 4:
										iLocal_47 = 3;
										break;
									
									case 5:
										if (unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 4))
										{
											iLocal_106 = 1;
											iLocal_49 = 9;
										}
										else
										{
											iLocal_49 = 13;
										}
										iLocal_47 = 1;
										break;
								}
								if (func_135())
								{
									switch (iLocal_48)
									{
										case 2:
											func_115();
											break;
										
										case 4:
											func_114();
											break;
										
										case 5:
											func_113();
											break;
										}
								}
								break;
							
							case 3:
								func_110();
								unk_0x44C98C11ED6DD327(unk_0xBC25C936A095B5BA());
								if (!unk_0x36CEFBE9B745A58D(iLocal_58))
								{
									unk_0xAB1A796DCD561BF8(iLocal_58, 3, 0f, 0);
									if (!unk_0x5237AF95232D78C5(iLocal_58, 0))
									{
										if (!iLocal_85)
										{
											if (unk_0x96044E39418AAF17(iLocal_58, "random@homelandsecurity", "idle_girl", 3) && !unk_0x2CDE18D6C89522AD(iLocal_58))
											{
												unk_0x16DCE907D1FFE3CC(iLocal_58, 16);
												unk_0xC5A6DFE2B8987B17(&iLocal_102);
												unk_0xE896C0AD02364F2A(0, "random@homelandsecurity", "idle_to_knees_girl", 1000f, -8f, -1, 8192, 0, 0, 0, 0);
												unk_0xE896C0AD02364F2A(0, "random@homelandsecurity", "knees_loop_girl", 8f, -8f, -1, 8321, 0, 0, 0, 0);
												unk_0x535008C596714F9E(iLocal_102);
												unk_0xA8E6405305C0D7DF(iLocal_58, iLocal_102);
												unk_0x02DAF06EA4F08219(&iLocal_102);
												iLocal_85 = 1;
											}
											else
											{
												unk_0xEE7131C3C73E7282(iLocal_58, -1);
												iLocal_85 = 1;
											}
										}
										else if ((((!unk_0x96044E39418AAF17(iLocal_58, "random@homelandsecurity", "idle_girl", 3) && !unk_0x96044E39418AAF17(iLocal_58, "random@homelandsecurity", "idle_to_knees_girl", 1)) && !unk_0x96044E39418AAF17(iLocal_58, "random@homelandsecurity", "knees_loop_girl", 1)) && unk_0xF4FCC3C1048FF2AB(iLocal_58, 474215631) != 0) && unk_0xF4FCC3C1048FF2AB(iLocal_58, 474215631) != 1)
										{
											iLocal_85 = 0;
										}
									}
									else if (unk_0xE59B7F5A03335350(iLocal_53, 0))
									{
										if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_53, 0))
										{
											if (unk_0x2DA8CA50A72528FB(iLocal_88))
											{
												unk_0x07B8ECB35A4ED3AC(&iLocal_88);
											}
										}
									}
								}
								else
								{
									func_109();
								}
								if (!func_108())
								{
									if (iLocal_95 < unk_0x105601648511CC64())
									{
										if (func_107())
										{
											if (!unk_0x36CEFBE9B745A58D(iLocal_50[0]))
											{
												func_106(&uLocal_120, "REHOMAU", "REHOM_YELL", 4, 0, 0, 0);
											}
										}
										else if (!unk_0x36CEFBE9B745A58D(iLocal_50[1]))
										{
											func_106(&uLocal_120, "REHOMAU", "REHOM_YELL2", 4, 0, 0, 0);
										}
										iLocal_95 = (unk_0x105601648511CC64() + unk_0x491B2241281A03B7(4500, 5000));
									}
								}
								if (unk_0x36CEFBE9B745A58D(iLocal_50[0]))
								{
									if (unk_0x2DA8CA50A72528FB(iLocal_89[0]))
									{
										unk_0x07B8ECB35A4ED3AC(&(iLocal_89[0]));
									}
									func_105(&uLocal_120, 5);
								}
								else if (unk_0x1028B6250119A74B(iLocal_50[0], unk_0xBC25C936A095B5BA()) || unk_0xE642C1AC73CE364E(iLocal_50[0], unk_0xBC25C936A095B5BA(), 20f, 20f, 20f, 0, 1, 0))
								{
								}
								else if (unk_0x2DA8CA50A72528FB(iLocal_89[0]))
								{
									unk_0x07B8ECB35A4ED3AC(&(iLocal_89[0]));
								}
								if (unk_0x36CEFBE9B745A58D(iLocal_50[1]))
								{
									if (unk_0x2DA8CA50A72528FB(iLocal_89[1]))
									{
										unk_0x07B8ECB35A4ED3AC(&(iLocal_89[1]));
									}
									func_105(&uLocal_120, 4);
								}
								else if (unk_0x1028B6250119A74B(iLocal_50[1], unk_0xBC25C936A095B5BA()) || unk_0xE642C1AC73CE364E(iLocal_50[1], unk_0xBC25C936A095B5BA(), 20f, 20f, 20f, 0, 1, 0))
								{
								}
								else if (unk_0x2DA8CA50A72528FB(iLocal_89[1]))
								{
									unk_0x07B8ECB35A4ED3AC(&(iLocal_89[1]));
								}
								if (unk_0x724D816EA203A79E(iLocal_50[0]) && unk_0x724D816EA203A79E(iLocal_50[1]))
								{
									if (((unk_0x3D3F3014B0F74446(iLocal_50[0], joaat("weapon_stungun"), 0) && unk_0x3D3F3014B0F74446(iLocal_50[1], joaat("weapon_stungun"), 0)) || (unk_0x610A1308608A0F91(iLocal_50[0], 1) && unk_0x610A1308608A0F91(iLocal_50[1], 1))) || func_104())
									{
										if (unk_0x2DA8CA50A72528FB(iLocal_89[0]))
										{
											unk_0x07B8ECB35A4ED3AC(&(iLocal_89[0]));
										}
										if (unk_0x2DA8CA50A72528FB(iLocal_89[1]))
										{
											unk_0x07B8ECB35A4ED3AC(&(iLocal_89[1]));
										}
										if (!unk_0x36CEFBE9B745A58D(iLocal_58))
										{
											if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_58, 15f, 15f, 15f, 0, 1, 0))
											{
												if (!func_108())
												{
													func_106(&uLocal_120, "REHOMAU", "REHOM_THNK", 4, 0, 0, 0);
													bLocal_64 = false;
													iLocal_76 = 1;
													unk_0x8F2A738995BDD725(iLocal_58, 16);
													unk_0x5502708AECB47F5D(iLocal_58);
													iLocal_47 = 4;
												}
											}
										}
									}
								}
								break;
							
							case 4:
								if (!bLocal_64)
								{
									if (!unk_0x36CEFBE9B745A58D(iLocal_58))
									{
										if ((unk_0x96044E39418AAF17(iLocal_58, "random@homelandsecurity", "idle_to_knees_girl", 1) || unk_0x96044E39418AAF17(iLocal_58, "random@homelandsecurity", "knees_loop_girl", 1)) && !unk_0x2CDE18D6C89522AD(iLocal_58))
										{
											unk_0xE896C0AD02364F2A(iLocal_58, "random@homelandsecurity", "knees_to_stand_girl", 4f, -4f, -1, 0, 0.3f, 0, 0, 0);
										}
										else
										{
											unk_0xA4E856A8CD53B8DF(iLocal_58);
										}
										unk_0x59B9712C1EAB0092(iLocal_58, 0);
										unk_0x75E3FA28CC7D5707(iLocal_58, func_103());
										unk_0x0AB3C2863B144B82(iLocal_58, 1);
										func_102();
										bLocal_64 = true;
									}
								}
								if (!unk_0x36CEFBE9B745A58D(iLocal_58))
								{
									if (unk_0x96044E39418AAF17(iLocal_58, "random@homelandsecurity", "knees_to_stand_girl", 3))
									{
										if (unk_0x4A3B2CF8BADDD74E(iLocal_58, "random@homelandsecurity", "knees_to_stand_girl") > 0.8f)
										{
											unk_0xA4E856A8CD53B8DF(iLocal_58);
										}
									}
								}
								if (!iLocal_66)
								{
									if (!func_108())
									{
										if (func_106(&uLocal_120, "REHOMAU", "REHOM_ASK", 4, 0, 0, 0))
										{
											iLocal_66 = 1;
										}
									}
								}
								else if (!iLocal_65)
								{
									if (!func_108())
									{
										if (func_101() == 0)
										{
											func_106(&uLocal_120, "REHOMAU", "REHOM_RES1_M", 4, 0, 0, 0);
										}
										else if (func_101() == 1)
										{
											func_106(&uLocal_120, "REHOMAU", "REHOM_GOGO", 4, 0, 0, 0);
										}
										iLocal_65 = 1;
									}
								}
								if (bLocal_64)
								{
									if (!unk_0x36CEFBE9B745A58D(iLocal_58))
									{
										if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_58, 8f, 8f, 8f, 0, 1, 0) || unk_0xEBE910FA7CB6EAF0(unk_0xBC25C936A095B5BA()))
										{
											if (unk_0x2DA8CA50A72528FB(iLocal_88))
											{
												unk_0x07B8ECB35A4ED3AC(&iLocal_88);
											}
										}
										else if (!unk_0x2DA8CA50A72528FB(iLocal_88))
										{
											iLocal_88 = func_99(iLocal_58, 0, 145);
										}
									}
								}
								if (!unk_0x36CEFBE9B745A58D(iLocal_50[0]))
								{
									if (unk_0x1028B6250119A74B(iLocal_50[0], unk_0xBC25C936A095B5BA()))
									{
										if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) < 2)
										{
										}
									}
								}
								if (!unk_0x36CEFBE9B745A58D(iLocal_50[1]))
								{
									if (unk_0x1028B6250119A74B(iLocal_50[1], unk_0xBC25C936A095B5BA()))
									{
										if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) < 2)
										{
										}
									}
								}
								if (iLocal_65 && func_98())
								{
									if (!func_108())
									{
										func_96();
										SYSTEM::WAIT(0);
										func_106(&uLocal_120, "REHOMAU", "REHOM_COME", 4, 0, 0, 0);
										unk_0x02537C8C1BEEB477(&(iLocal_50[0]));
										unk_0x02537C8C1BEEB477(&(iLocal_50[1]));
										if (!unk_0x36CEFBE9B745A58D(iLocal_58))
										{
											if (unk_0xD45C08B05D4687A7(iLocal_58))
											{
												iVar0 = 0;
												while (iVar0 < iLocal_50)
												{
													if (unk_0x724D816EA203A79E(iLocal_50[iVar0]))
													{
														unk_0x02537C8C1BEEB477(&(iLocal_50[iVar0]));
													}
													iVar0++;
												}
												unk_0xDF53A66AEE1401AA(1f);
												iLocal_47 = 5;
											}
										}
									}
								}
								break;
							
							case 5:
								func_90();
								func_85();
								func_84();
								func_81();
								func_80();
								if (func_79(vLocal_67))
								{
									func_65(0);
									func_96();
									SYSTEM::WAIT(0);
									func_106(&uLocal_120, "REHOMAU", "REHOM_WRONG", 4, 0, 0, 0);
								}
								if (func_63())
								{
									func_65(0);
									func_96();
									SYSTEM::WAIT(0);
									func_106(&uLocal_120, "REHOMAU", "REHOM_CULT", 4, 0, 0, 0);
								}
								if (!unk_0x36CEFBE9B745A58D(iLocal_58))
								{
									if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vLocal_67, Global_16, true, true, 0) && unk_0xE642C1AC73CE364E(iLocal_58, unk_0xBC25C936A095B5BA(), 8f, 8f, 8f, 0, 1, 0))
									{
										if (unk_0xD45C08B05D4687A7(iLocal_58))
										{
											if (unk_0x2DA8CA50A72528FB(iLocal_88))
											{
												unk_0x07B8ECB35A4ED3AC(&iLocal_88);
											}
											if (unk_0x2DA8CA50A72528FB(iLocal_90))
											{
												unk_0x07B8ECB35A4ED3AC(&iLocal_90);
											}
											if (unk_0x2DA8CA50A72528FB(iLocal_91))
											{
												unk_0x07B8ECB35A4ED3AC(&iLocal_91);
											}
											if (unk_0xD45C08B05D4687A7(iLocal_58))
											{
												unk_0x57EB4CC8F1928A47(iLocal_58);
											}
											if (func_98())
											{
												if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
												{
													unk_0x241D744C1CCBC526(unk_0x3E12B546F3F2597A(), 5f, 2, 0);
												}
												iLocal_47 = 6;
											}
											else
											{
												func_96();
												SYSTEM::WAIT(0);
												func_106(&uLocal_120, "REHOMAU", "REHOM_HOME", 4, 0, 0, 0);
												if (!unk_0x36CEFBE9B745A58D(iLocal_58))
												{
													unk_0xC5A6DFE2B8987B17(&iLocal_102);
													unk_0x56F2E1B5599188FA(0, unk_0xBC25C936A095B5BA(), 5000, 2052, 2);
													unk_0x346129B364057FF6(0, vLocal_68, 1f, -1, 0.25f, 0, 38.9844f);
													unk_0xA3A7138EAD2268A0(0, "WORLD_HUMAN_SMOKING", 0, 1);
													unk_0x535008C596714F9E(iLocal_102);
													unk_0xA8E6405305C0D7DF(iLocal_58, iLocal_102);
													unk_0x02DAF06EA4F08219(&iLocal_102);
													unk_0x22321800954A532E(iLocal_58, true);
												}
												func_34(func_101(), 1, 80, 0, 1);
												iLocal_47 = 7;
											}
										}
									}
								}
								break;
							
							case 6:
								func_33();
								break;
							
							case 7:
								func_4();
								break;
							
							case 9:
								func_109();
								break;
						}
						if (iLocal_116 && !iLocal_117)
						{
							if (iLocal_47 != 6)
							{
								if (unk_0x77FC50899603581D(iLocal_115))
								{
									if (unk_0x8FD30584EB38411B(iLocal_115) > 0.85f)
									{
										if (unk_0xE59B7F5A03335350(iLocal_53, 0))
										{
											if (!unk_0x36CEFBE9B745A58D(iLocal_58))
											{
												if (!unk_0x62F3A07C43FFB568(iLocal_58, iLocal_53, 0))
												{
													if (!unk_0x2CDE18D6C89522AD(iLocal_58))
													{
														unk_0xA4E856A8CD53B8DF(iLocal_58);
														unk_0xBD53A029D0155A42(iLocal_58, iLocal_53, 2);
														unk_0x22321800954A532E(iLocal_58, true);
														iLocal_117 = 1;
													}
													else
													{
														iLocal_117 = 1;
													}
												}
											}
										}
									}
								}
							}
						}
						if (func_2())
						{
							if (unk_0x724D816EA203A79E(iLocal_58))
							{
								unk_0xF845620A03C7425B(&iLocal_58);
							}
							func_4();
						}
						if ((iLocal_47 != 0 && iLocal_47 != 6) && iLocal_47 != 7)
						{
							if (func_1())
							{
								iLocal_47 = 9;
							}
						}
						if (iLocal_47 == 4 || iLocal_47 == 5)
						{
							if (!unk_0x36CEFBE9B745A58D(iLocal_58))
							{
								if (!unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_58, 150f, 150f, 150f, 0, 1, 0) || unk_0xD9C1758D86688CEA(iLocal_58, unk_0xBC25C936A095B5BA(), 1))
								{
									unk_0x5558ED6D4A2DEC93(iLocal_58, unk_0xBC25C936A095B5BA(), 150f, -1, 0, 0);
									func_96();
									func_109();
								}
							}
						}
						if (iLocal_47 < 5)
						{
							unk_0x6A095EC1C9AF12A4(unk_0xB5CEFD608600A09F());
						}
						if (unk_0x36CEFBE9B745A58D(iLocal_50[0]))
						{
							if (unk_0x2DA8CA50A72528FB(iLocal_89[0]))
							{
								unk_0x07B8ECB35A4ED3AC(&(iLocal_89[0]));
							}
						}
						if (unk_0x36CEFBE9B745A58D(iLocal_50[1]))
						{
							if (unk_0x2DA8CA50A72528FB(iLocal_89[1]))
							{
								unk_0x07B8ECB35A4ED3AC(&(iLocal_89[1]));
							}
						}
						if (unk_0x36CEFBE9B745A58D(iLocal_58))
						{
							if (unk_0x2DA8CA50A72528FB(iLocal_88))
							{
								unk_0x07B8ECB35A4ED3AC(&iLocal_88);
							}
						}
					}
					break;
			}
		}
		else
		{
			func_207();
		}
	}
}

int func_1()//Position - 0xC9F
{
	int iVar0[3];
	
	iVar0[0] = 0;
	iVar0[1] = 0;
	iVar0[2] = 0;
	if (unk_0x724D816EA203A79E(iLocal_50[0]))
	{
		if (unk_0x36CEFBE9B745A58D(iLocal_50[0]))
		{
			iVar0[0] = 1;
		}
	}
	else
	{
		iVar0[0] = 1;
	}
	if (unk_0x724D816EA203A79E(iLocal_50[1]))
	{
		if (unk_0x36CEFBE9B745A58D(iLocal_50[1]))
		{
			iVar0[1] = 1;
		}
	}
	else
	{
		iVar0[1] = 1;
	}
	if (unk_0x724D816EA203A79E(iLocal_58))
	{
		if (unk_0x36CEFBE9B745A58D(iLocal_58))
		{
			iVar0[2] = 1;
		}
	}
	else
	{
		iVar0[2] = 1;
	}
	if ((iVar0[0] && iVar0[1]) && iVar0[2])
	{
		return 1;
	}
	return 0;
}

int func_2()//Position - 0xD4E
{
	if (Global_63A9)
	{
		func_3(4);
		return 1;
	}
	return 0;
}

void func_3(int iParam0)//Position - 0xD66
{
	Global_19AF6 = iParam0;
}

void func_4()//Position - 0xD74
{
	while (func_108())
	{
		SYSTEM::WAIT(0);
	}
	while (!func_32())
	{
		SYSTEM::WAIT(0);
	}
	func_8(-1, 0);
	func_5();
	func_207();
}

void func_5()//Position - 0xDA9
{
	func_6();
}

int func_6()//Position - 0xDB6
{
	if (func_7(0))
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

bool func_7(bool bParam0)//Position - 0xE01
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_1163A, 0);
}

void func_8(int iParam0, int iParam1)//Position - 0xE2C
{
	if (iParam0 == -1)
	{
		iParam0 = func_30();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_29(iParam0))
	{
		func_28(iParam0, iParam1);
		if (!func_27(51))
		{
			func_18("RE_REWARD", 1, 0, 4000, 10000, func_21(), 0, 138, 0);
			func_17(51);
		}
		if (func_16(iParam0))
		{
			Global_19B04.f_6186.f_2 = 3;
		}
		if (func_15(iParam0, iParam1) != 322)
		{
			func_9(func_15(iParam0, iParam1), vLocal_44.x, vLocal_44.y);
		}
		Global_19AF8 = iParam1;
		if (Global_19AF6 == 0)
		{
			if (((Global_19AF9 == 1 || Global_19AF9 == 5) || Global_19AF9 == 11) || Global_19AF9 == 25)
			{
				func_3(2);
			}
			else if ((Global_19AF9 == 26 || Global_19AF9 == 8) || Global_19AF9 == 17)
			{
				func_3(7);
			}
			else
			{
				func_3(1);
			}
		}
	}
}

void func_9(int iParam0, var uParam1, var uParam2)//Position - 0xF2F
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
		func_13((891 + iParam0), 1, -1, 1);
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
		func_10();
	}
}

void func_10()//Position - 0x1017
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
		func_12(13, SYSTEM::FLOOR(Global_19B04.f_27B5.f_F0D));
	}
	if (!unk_0xF9BFA43C1BAFD016())
	{
		if (!Global_11542)
		{
			if (func_11() == 2 == 0 && !unk_0x7AF0088ABFA713B6())
			{
				if (unk_0x670C0C6C780A3F84())
				{
					Global_199FA = 0;
				}
				if (!Global_DA9F)
				{
					func_6();
				}
			}
		}
	}
}

int func_11()//Position - 0x14D8
{
	return Global_62BD;
}

int func_12(int iParam0, int iParam1)//Position - 0x14E3
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

int func_13(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x1534
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
		iParam2 = func_14();
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

int func_14()//Position - 0x1A4C
{
	return Global_1407E0;
}

int func_15(int iParam0, int iParam1)//Position - 0x1A58
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

int func_16(int iParam0)//Position - 0x1DCC
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

void func_17(int iParam0)//Position - 0x1DFB
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

void func_18(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x1E3D
{
	func_19(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_19(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x1E5D
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
		func_20();
	}
}

void func_20()//Position - 0x202F
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

int func_21()//Position - 0x214F
{
	func_22();
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

void func_22()//Position - 0x2195
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_26(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_25(unk_0xBC25C936A095B5BA());
			if (func_24(iVar0) && (!func_23(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_24(Global_19B04.f_932.f_21B.f_10CD))
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

bool func_23(int iParam0)//Position - 0x2292
{
	return Global_8C41 == iParam0;
}

bool func_24(int iParam0)//Position - 0x22A0
{
	return iParam0 < 3;
}

int func_25(int iParam0)//Position - 0x22AC
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_26(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_26(int iParam0)//Position - 0x22E9
{
	if (func_24(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_27(int iParam0)//Position - 0x2313
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

void func_28(int iParam0, int iParam1)//Position - 0x2356
{
	unk_0xF0059F27F7BB6680(&(Global_19B04.f_6186.f_8[iParam0]), iParam1);
}

int func_29(int iParam0)//Position - 0x2371
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

int func_30()//Position - 0x2422
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x1377080E9B0BD993(), 64);
	uVar1 = func_31(Var0);
	return uVar1;
}

int func_31(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x243F
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

int func_32()//Position - 0x2619
{
	return 1;
}

void func_33()//Position - 0x2622
{
	switch (iLocal_118)
	{
		case 0:
			func_96();
			SYSTEM::WAIT(0);
			func_106(&uLocal_120, "REHOMAU", "REHOM_HOME", 4, 0, 0, 0);
			iLocal_118++;
			break;
		
		case 1:
			iLocal_118++;
			break;
		
		case 2:
			iLocal_118++;
			break;
		
		case 3:
			if (!unk_0x36CEFBE9B745A58D(iLocal_58))
			{
				unk_0xC5A6DFE2B8987B17(&iLocal_102);
				unk_0x56F2E1B5599188FA(0, unk_0xBC25C936A095B5BA(), 5000, 2052, 2);
				unk_0x346129B364057FF6(0, vLocal_68, 1f, -1, 0.25f, 0, 38.9844f);
				unk_0xA3A7138EAD2268A0(0, "WORLD_HUMAN_SMOKING", 0, 1);
				unk_0x535008C596714F9E(iLocal_102);
				unk_0xA8E6405305C0D7DF(iLocal_58, iLocal_102);
				unk_0x02DAF06EA4F08219(&iLocal_102);
				unk_0x22321800954A532E(iLocal_58, true);
			}
			iLocal_118++;
			break;
		
		case 4:
			func_34(func_101(), 1, 80, 0, 1);
			unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
			func_4();
			break;
	}
}

void func_34(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x2706
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
	func_35(Global_19B04.f_6D75[iParam0 /*29*/].f_11, 1, iParam1, iParam2, 0);
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

int func_35(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x27ED
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_62();
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
					func_61(99, 1);
					func_60(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_60(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_60(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_46(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_42(5))
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
							func_60(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_60(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_60(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_42(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_60(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_60(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_60(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_60(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_60(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_60(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_60(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_60(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_60(joaat("sp2_money_spent_property"), iParam3);
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
									func_60(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_60(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_60(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_60(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_60(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_60(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_42(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_60(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_60(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_60(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_60(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_60(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_60(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_41(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_61(95, iParam3);
					break;
				
				case 1:
					func_61(97, iParam3);
					break;
				
				case 2:
					func_61(96, iParam3);
					break;
			}
			func_61(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_38(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_38(iVar1);
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
					func_60(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_60(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_60(joaat("sp2_total_cash_earned"), iParam3);
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
	func_37(iParam0);
	if (Global_8C41 == 15)
	{
		func_36(0);
	}
	return 1;
}

void func_36(bool bParam0)//Position - 0x2DEC
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

void func_37(int iParam0)//Position - 0x306E
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

void func_38(int iParam0)//Position - 0x30C8
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_13(129, 0, -1, 1);
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
	else if (unk_0xFA30DFD0084E92FE(Global_19B04.f_5037.f_1D7, iParam0) || unk_0xFA30DFD0084E92FE(Global_200000[func_40() /*12171*/].f_1E08.f_A, iParam0))
	{
		bVar0 = true;
		unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_5037.f_1D7), iParam0);
		unk_0x7CB6FD92BE491AD9(&(Global_200000[func_40() /*12171*/].f_1E08.f_A), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x2E94302CFF011F2E("COUP_RED");
		unk_0xC9C304D0AABE1335(func_39(iParam0));
		unk_0x7BB0762D8C75A3C7(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_39(int iParam0)//Position - 0x319D
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

int func_40()//Position - 0x3223
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_41(int iParam0)//Position - 0x3230
{
	func_61(93, iParam0);
	func_61(29, iParam0);
	func_61(30, iParam0);
}

bool func_42(int iParam0)//Position - 0x3250
{
	if (iParam0 == 8)
	{
		return func_43(129, -1, -1);
	}
	if (!unk_0x7AF0088ABFA713B6())
	{
		return unk_0xFA30DFD0084E92FE(Global_19B04.f_5037.f_1D7, iParam0);
	}
	return unk_0xFA30DFD0084E92FE(Global_200000[func_40() /*12171*/].f_1E08.f_A, iParam0);
}

int func_43(int iParam0, int iParam1, int iParam2)//Position - 0x329E
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_14();
	}
	iVar1 = func_45(iParam0, iParam1);
	uVar2 = func_44(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDAB376DC6F83D68C(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_44(int iParam0)//Position - 0x32DB
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

int func_45(int iParam0, int iParam1)//Position - 0x35C7
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_14();
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

int func_46(bool bParam0)//Position - 0x3892
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
		func_12(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_47(27, 1);
	return 1;
}

int func_47(int iParam0, int iParam1)//Position - 0x3949
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_48(iParam0, iParam1);
}

int func_48(int iParam0, int iParam1)//Position - 0x3964
{
	if (func_23(14) && !func_59(iParam0))
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
	if (func_58(&Global_411EB6))
	{
		if (func_56(&Global_411EB6, iParam0))
		{
			return 0;
		}
		if (func_49(&Global_411EB6, iParam0))
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

int func_49(var uParam0, int iParam1)//Position - 0x3A01
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x6D5CBCB6411EDE89(iParam1))
	{
		return 0;
	}
	if (func_23(14) && !func_59(iParam1))
	{
		return 0;
	}
	if (func_56(uParam0, iParam1))
	{
		return 0;
	}
	if (func_55(uParam0) < 0f)
	{
		func_54(uParam0, 0);
	}
	func_52(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_50(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_50(var uParam0, int iParam1)//Position - 0x3AB2
{
	int iVar0;
	
	if (unk_0x6D5CBCB6411EDE89(iParam1))
	{
		return 0;
	}
	if (func_23(14) && !func_59(iParam1))
	{
		return 0;
	}
	if (func_56(uParam0, iParam1))
	{
		return 0;
	}
	if (func_55(uParam0) < 0f)
	{
		func_54(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_51(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_51(var uParam0, int iParam1)//Position - 0x3B2D
{
	return (*uParam0)[iParam1] == 78;
}

void func_52(var uParam0)//Position - 0x3B3E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_53(uParam0, iVar0);
		iVar0++;
	}
	func_54(uParam0, (Global_411EB5 - 0.5f));
}

void func_53(var uParam0, int iParam1)//Position - 0x3B72
{
	(*uParam0)[iParam1] = 78;
}

void func_54(var uParam0, float fParam1)//Position - 0x3B82
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

float func_55(var uParam0)//Position - 0x3B9F
{
	return uParam0->f_50;
}

bool func_56(var uParam0, int iParam1)//Position - 0x3BAB
{
	return func_57(uParam0, iParam1) != -1;
}

int func_57(var uParam0, int iParam1)//Position - 0x3BBD
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

bool func_58(var uParam0)//Position - 0x3BEA
{
	return uParam0->f_4F == 1;
}

int func_59(int iParam0)//Position - 0x3BF8
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

void func_60(int iParam0, int iParam1)//Position - 0x3C48
{
	int iVar0;
	
	unk_0x6CB99B97664C3727(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x3A57956BCE003880(iParam0, iVar0, 1);
}

void func_61(int iParam0, int iParam1)//Position - 0x3C6B
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

void func_62()//Position - 0x3CC8
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

int func_63()//Position - 0x3D3D
{
	if (func_101() == 2)
	{
		if (func_64())
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

bool func_64()//Position - 0x3DB8
{
	return Global_63A8;
}

void func_65(bool bParam0)//Position - 0x3DC3
{
	if (bParam0)
	{
		if (iLocal_61)
		{
			if (func_68(&uLocal_120, "REHOMAU", &Local_63, &Local_62, 8, 0, 0))
			{
				iLocal_61 = 0;
			}
		}
	}
	else if (!iLocal_61 && unk_0xE6711F601F11B66B())
	{
		Local_63 = { func_67() };
		Local_62 = { func_66() };
		func_116();
		iLocal_61 = 1;
	}
}

struct<6> func_66()//Position - 0x3E15
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

struct<6> func_67()//Position - 0x3E5B
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_3DB8 == 4)
	{
		return Global_3C3B;
	}
	return Var0;
}

bool func_68(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x3E7F
{
	func_78(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_69(sParam2, iParam4, 0);
}

int func_69(char* sParam0, int iParam1, bool bParam2)//Position - 0x3ED3
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
					func_77();
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
		if (func_76(8, -1))
		{
			return 0;
		}
		Global_3E04 = { Global_3DFE };
		func_75();
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
				func_74();
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
				if (func_73())
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
			if (func_72())
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
			func_71();
			Global_3DC2 = bParam2;
		}
		Global_3DBA = iParam1;
		StringCopy(&Global_3C3B, sParam0, 24);
		Global_394A = 0;
		func_70();
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
		func_77();
	}
	return 0;
}

void func_70()//Position - 0x41A0
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

void func_71()//Position - 0x41D0
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

int func_72()//Position - 0x4265
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_73()//Position - 0x428C
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

void func_74()//Position - 0x4325
{
	if (func_23(14))
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
		Global_389D = func_101();
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

void func_75()//Position - 0x43C7
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

bool func_76(int iParam0, int iParam1)//Position - 0x441D
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

void func_77()//Position - 0x4458
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

void func_78(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x44AF
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

int func_79(vector3 vParam0)//Position - 0x4505
{
	if (func_101() == 2)
	{
		if (func_64() && !Global_63AB)
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

void func_80()//Position - 0x4592
{
	if (!unk_0x36CEFBE9B745A58D(iLocal_58))
	{
		if (!iLocal_73)
		{
			if (!unk_0x1D403DFADBC2DE3C(unk_0x3E12B546F3F2597A(), 0))
			{
				if (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), unk_0x3E12B546F3F2597A(), 1) && unk_0x62F3A07C43FFB568(iLocal_58, unk_0x3E12B546F3F2597A(), 0))
				{
					func_65(0);
					func_96();
					SYSTEM::WAIT(0);
					func_106(&uLocal_120, "REHOMAU", "REHOM_GETOUT", 4, 0, 0, 0);
					iLocal_73 = 1;
				}
			}
		}
		else if (!unk_0x1D403DFADBC2DE3C(unk_0x3E12B546F3F2597A(), 0))
		{
			if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), unk_0x3E12B546F3F2597A(), 0) && unk_0x62F3A07C43FFB568(iLocal_58, unk_0x3E12B546F3F2597A(), 0))
			{
				iLocal_73 = 0;
			}
		}
		if (!iLocal_74)
		{
			if (unk_0x4FCDC2EC534819EF(unk_0xBC25C936A095B5BA()))
			{
				func_65(0);
				func_96();
				SYSTEM::WAIT(0);
				func_106(&uLocal_120, "REHOMAU", "REHOM_JACK", 4, 0, 0, 0);
				iLocal_74 = 1;
			}
		}
		else if (!unk_0x4FCDC2EC534819EF(unk_0xBC25C936A095B5BA()))
		{
			iLocal_74 = 0;
		}
		if (!iLocal_75)
		{
			if (unk_0x32E373675659FDB0(unk_0xBC25C936A095B5BA()))
			{
				func_65(0);
				func_96();
				SYSTEM::WAIT(0);
				func_106(&uLocal_120, "REHOMAU", "REHOM_SHOOT", 4, 0, 0, 0);
				iLocal_75 = 1;
			}
		}
		else if (unk_0x32E373675659FDB0(unk_0xBC25C936A095B5BA()))
		{
			iLocal_75 = 0;
		}
	}
}

void func_81()//Position - 0x46B9
{
	if (!func_82())
	{
		func_65(1);
	}
	if (!func_108())
	{
		switch (iLocal_96)
		{
			case 0:
				if (func_101() == 0)
				{
					func_106(&uLocal_120, "REHOMAU", "REHOM_WTF_M", 4, 0, 0, 0);
				}
				else if (func_101() == 1)
				{
					func_106(&uLocal_120, "REHOMAU", "REHOM_WTF_F", 4, 0, 0, 0);
				}
				iLocal_96++;
				break;
			
			case 1:
				func_106(&uLocal_120, "REHOMAU", "REHOM_CORR", 4, 0, 0, 0);
				iLocal_96++;
				break;
			
			case 2:
				func_106(&uLocal_120, "REHOMAU", "REHOM_TALK", 4, 0, 0, 0);
				iLocal_96++;
				break;
			
			case 3:
				if (func_101() == 0)
				{
					func_106(&uLocal_120, "REHOMAU", "REHOM_CAR_M", 4, 0, 0, 0);
				}
				else if (func_101() == 1)
				{
					func_106(&uLocal_120, "REHOMAU", "REHOM_CAR_F", 4, 0, 0, 0);
				}
				iLocal_96++;
				break;
			
			case 4:
				func_106(&uLocal_120, "REHOMAU", "REHOM_TALK2", 4, 0, 0, 0);
				iLocal_96++;
				break;
			
			case 5:
				if (func_101() == 0)
				{
					func_106(&uLocal_120, "REHOMAU", "REHOM_REJ_M", 4, 0, 0, 0);
				}
				else if (func_101() == 1)
				{
					func_106(&uLocal_120, "REHOMAU", "REHOM_REJ_F", 4, 0, 0, 0);
				}
				iLocal_96++;
				break;
			
			case 6:
				func_106(&uLocal_120, "REHOMAU", "REHOM_TALK2b", 4, 0, 0, 0);
				iLocal_96++;
				break;
			
			case 7:
				func_106(&uLocal_120, "REHOMAU", "REHOM_TALK3", 4, 0, 0, 0);
				iLocal_96++;
				break;
			
			case 8:
				if (func_101() == 0)
				{
					func_106(&uLocal_120, "REHOMAU", "REHOM_INT_M", 4, 0, 0, 0);
				}
				else if (func_101() == 1)
				{
					func_106(&uLocal_120, "REHOMAU", "REHOM_INT_F", 4, 0, 0, 0);
				}
				iLocal_96++;
				break;
			
			case 9:
				func_106(&uLocal_120, "REHOMAU", "REHOM_NOBAN", 4, 0, 0, 0);
				iLocal_96++;
				break;
			}
	}
}

int func_82()//Position - 0x48BB
{
	if (((((((((func_83("REHOM_QM") || func_83("REHOM_GETOUT")) || func_83("REHOM_SHOOT")) || func_83("REHOM_JACK")) || func_83("REHOM_WRONG")) || func_83("REHOM_CULT")) || func_83("REHOM_STOP")) || func_83("REHOM_NOVEH")) || func_83("REHOM_UNS1")) || func_83("REHOM_UNS2"))
	{
		return 1;
	}
	return 0;
}

int func_83(char* sParam0)//Position - 0x494F
{
	var uVar0;
	
	if (func_108())
	{
		MemCopy(&uVar0, {func_67()}, 4);
		if (unk_0x3362CDE8460ED38B(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_84()//Position - 0x4977
{
	if (!unk_0x36CEFBE9B745A58D(iLocal_58))
	{
		if (unk_0x7214F4879DF8A314(iLocal_58))
		{
			if (!iLocal_108)
			{
				iLocal_109 = unk_0x105601648511CC64();
				iLocal_108 = 1;
			}
			else
			{
				iLocal_110 = unk_0x105601648511CC64();
			}
		}
		else
		{
			iLocal_108 = 0;
		}
		if ((iLocal_110 - iLocal_109) > 180000)
		{
			if (unk_0xD45C08B05D4687A7(iLocal_58))
			{
				unk_0x57EB4CC8F1928A47(iLocal_58);
				func_106(&uLocal_120, "REHOMAU", "REHOM_WK", 4, 0, 0, 0);
				func_109();
			}
		}
	}
}

void func_85()//Position - 0x49E1
{
	if (unk_0x63276C96B907C69E(unk_0xBC25C936A095B5BA()))
	{
		if (!iLocal_111)
		{
			iLocal_113 = unk_0x105601648511CC64();
			iLocal_111 = 1;
		}
		else
		{
			iLocal_114 = unk_0x105601648511CC64();
		}
	}
	else
	{
		iLocal_114 = 0;
		iLocal_111 = 0;
		iLocal_112 = 0;
	}
	if ((iLocal_114 - iLocal_113) > 50000 && !iLocal_112)
	{
		func_65(0);
		func_96();
		SYSTEM::WAIT(0);
		func_106(&uLocal_120, "REHOMAU", "REHOM_QM", 4, 0, 0, 0);
		iLocal_112 = 1;
	}
	if ((iLocal_114 - iLocal_113) > 60000 && iLocal_112)
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_58))
		{
			unk_0x5558ED6D4A2DEC93(iLocal_58, unk_0xBC25C936A095B5BA(), 150f, -1, 0, 0);
			func_86(iLocal_58, 120000, 0);
			unk_0x22321800954A532E(iLocal_58, true);
			if (unk_0xD45C08B05D4687A7(iLocal_58))
			{
				unk_0x57EB4CC8F1928A47(iLocal_58);
			}
		}
		func_109();
	}
}

int func_86(int iParam0, int iParam1, bool bParam2)//Position - 0x4AA6
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 0;
	}
	iVar0 = func_89(iParam0);
	if (!iVar0 == -1)
	{
		return 1;
	}
	iVar1 = func_88(iParam0);
	if (!iVar1 == -1)
	{
		return 1;
	}
	if (!bParam2)
	{
		if (iParam1 == 0 || iParam1 < 0)
		{
			return 0;
		}
	}
	iVar2 = func_87();
	if (iVar2 == -1)
	{
		return 0;
	}
	Global_8FD2[iVar2 /*5*/] = 0;
	Global_8FD2[iVar2 /*5*/].f_1 = iParam0;
	Global_8FD2[iVar2 /*5*/].f_2 = iParam1;
	Global_8FD2[iVar2 /*5*/].f_3 = iParam1;
	Global_8FD2[iVar2 /*5*/].f_4 = 0;
	if (iParam0 == unk_0xBC25C936A095B5BA())
	{
		Global_90BF = 1;
	}
	Global_8FD1++;
	return 1;
}

int func_87()//Position - 0x4B62
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_8FD2[iVar0 /*5*/] == 13)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_88(int iParam0)//Position - 0x4B91
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_8FD2[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_89(int iParam0)//Position - 0x4BC2
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_8FEC[iVar0 /*5*/].f_1)
		{
			return Global_8FEC[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

void func_90()//Position - 0x4C03
{
	if (!unk_0x36CEFBE9B745A58D(iLocal_58))
	{
		if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_58, 8f, 8f, 8f, 0, 1, 0) || unk_0xEBE910FA7CB6EAF0(unk_0xBC25C936A095B5BA()))
		{
			if (unk_0x2DA8CA50A72528FB(iLocal_88))
			{
				unk_0x07B8ECB35A4ED3AC(&iLocal_88);
			}
			if (!unk_0xD45C08B05D4687A7(iLocal_58))
			{
				unk_0x75E3FA28CC7D5707(iLocal_58, unk_0x705BBFE5A8ADE4A9(unk_0xB5CEFD608600A09F()));
				unk_0x59B9712C1EAB0092(iLocal_58, 0);
			}
			if (!unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
			{
				if (!unk_0x2DA8CA50A72528FB(iLocal_90))
				{
					iLocal_90 = func_94(vLocal_67, 1);
				}
				if (unk_0xEBE910FA7CB6EAF0(unk_0xBC25C936A095B5BA()))
				{
					if (!unk_0x2DA8CA50A72528FB(iLocal_90))
					{
						iLocal_90 = func_94(vLocal_67, 1);
					}
				}
				if (func_101() == 2 && !func_93())
				{
					if (!unk_0x2DA8CA50A72528FB(iLocal_91))
					{
						iLocal_91 = func_94(vLocal_69, 0);
						unk_0xBF0E22F3E083C33D(iLocal_91, 269);
						func_91();
					}
				}
			}
		}
		else
		{
			if (!unk_0x2DA8CA50A72528FB(iLocal_88))
			{
				iLocal_88 = func_99(iLocal_58, 0, 145);
			}
			if (unk_0x2DA8CA50A72528FB(iLocal_90))
			{
				unk_0x07B8ECB35A4ED3AC(&iLocal_90);
			}
		}
	}
}

void func_91()//Position - 0x4D0E
{
	if (func_101() == 2)
	{
		if (!Global_63AA)
		{
			func_92("CULT_BLIP_HELP", -1);
			Global_63AA = 1;
		}
	}
}

void func_92(char* sParam0, int iParam1)//Position - 0x4D32
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, true, iParam1);
}

int func_93()//Position - 0x4D49
{
	if (Global_19B04.f_6186.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

int func_94(vector3 vParam0, bool bParam1)//Position - 0x4D65
{
	int iVar0;
	
	iVar0 = unk_0x390CF6C8AD6903B7(vParam0);
	unk_0x3F5F1772D71D5EC4(iVar0, func_95(unk_0x7AF0088ABFA713B6(), 1f, 1f));
	unk_0x0BBAABB52887CF8C(iVar0, bParam1);
	return iVar0;
}

float func_95(bool bParam0, float fParam1, float fParam2)//Position - 0x4D91
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_96()//Position - 0x4DA8
{
	Global_394A = 0;
	func_97();
}

void func_97()//Position - 0x4DB8
{
	unk_0x5C7DC611411E2CF9();
	Global_41AB = 0;
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x1E08809A5041F85B(false);
		Global_3DB8 = 6;
	}
}

int func_98()//Position - 0x4DD9
{
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		iLocal_86 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
		if (unk_0xE59B7F5A03335350(iLocal_86, 0))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_58))
			{
				if (unk_0x25EF720B1CAB1E23(iLocal_58, iLocal_86))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_99(int iParam0, bool bParam1, int iParam2)//Position - 0x4E1C
{
	int iVar0;
	
	iVar0 = func_100(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x2DA8CA50A72528FB(iVar0)) && unk_0x0F6F4C227FB5DD52(&(Global_19B04.f_6D75[iParam2 /*29*/].f_3)))
	{
		unk_0x436D0272182E484D(iVar0, &(Global_19B04.f_6D75[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_100(int iParam0, bool bParam1, bool bParam2)//Position - 0x4E6E
{
	int iVar0;
	
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x511FE22BCF5353CD(iParam0);
	if (unk_0xD27AC0E9B78CFDD7(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(iVar0, func_95(unk_0x7AF0088ABFA713B6(), 1f, 1f));
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
		unk_0x3F5F1772D71D5EC4(iVar0, func_95(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
		unk_0xF9C2945DB5BAB4BF(iVar0, bParam1);
	}
	else if (unk_0xB12D030810E8447D(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(iVar0, func_95(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
	}
	return iVar0;
}

int func_101()//Position - 0x4F12
{
	func_22();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_102()//Position - 0x4F2B
{
	if (!func_93())
	{
		if (func_101() == 2)
		{
			Global_63A8 = 1;
		}
	}
}

int func_103()//Position - 0x4F47
{
	return unk_0x705BBFE5A8ADE4A9(unk_0xFC1CAE18F3ECBF2D());
}

int func_104()//Position - 0x4F57
{
	if (unk_0x724D816EA203A79E(iLocal_53))
	{
		if (((unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_53, 0) && unk_0x62F3A07C43FFB568(iLocal_58, iLocal_53, 0)) && !unk_0x62F3A07C43FFB568(iLocal_50[0], iLocal_53, 0)) && !unk_0x62F3A07C43FFB568(iLocal_50[1], iLocal_53, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_105(var uParam0, int iParam1)//Position - 0x4FAD
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

bool func_106(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x4FCA
{
	func_78(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_69(sParam2, iParam3, 0);
}

int func_107()//Position - 0x5018
{
	if (unk_0xFA30DFD0084E92FE(unk_0x491B2241281A03B7(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_108()//Position - 0x5039
{
	if (Global_3DB8 != 0 || unk_0xE6711F601F11B66B())
	{
		return 1;
	}
	return 0;
}

void func_109()//Position - 0x505B
{
	func_207();
}

void func_110()//Position - 0x5067
{
	if (!iLocal_77)
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_50[0]))
		{
			unk_0x54480313BB3E8DD0(iLocal_50[0], 0);
			unk_0xA4E856A8CD53B8DF(iLocal_50[0]);
			unk_0xC5A6DFE2B8987B17(&iLocal_102);
			unk_0x44C98C11ED6DD327(0);
			unk_0xB8CBD998685C0685(0, unk_0xBC25C936A095B5BA(), 0, 16);
			unk_0x535008C596714F9E(iLocal_102);
			unk_0xA8E6405305C0D7DF(iLocal_50[0], iLocal_102);
			unk_0x02DAF06EA4F08219(&iLocal_102);
			unk_0x22321800954A532E(iLocal_50[0], true);
			if (unk_0x2DA8CA50A72528FB(iLocal_89[0]))
			{
				unk_0xF9C2945DB5BAB4BF(iLocal_89[0], false);
			}
			SYSTEM::SETTIMERB(0);
			iLocal_77 = 1;
		}
		else
		{
			SYSTEM::SETTIMERB(500);
			iLocal_77 = 1;
		}
	}
	if (!iLocal_78)
	{
		if (unk_0x2DA8CA50A72528FB(iLocal_89[1]))
		{
			unk_0xF9C2945DB5BAB4BF(iLocal_89[1], false);
		}
		func_96();
		SYSTEM::WAIT(0);
		if (!unk_0x36CEFBE9B745A58D(iLocal_50[1]))
		{
			func_111(iLocal_50[1], "GENERIC_INSULT_HIGH", 24);
			unk_0x54480313BB3E8DD0(iLocal_50[1], 2);
			if ((unk_0x96044E39418AAF17(iLocal_50[1], "random@homelandsecurity", "idle_cop_ground", 3) || unk_0x77FC50899603581D(iLocal_115)) && !unk_0x2CDE18D6C89522AD(iLocal_50[1]))
			{
				unk_0x16DCE907D1FFE3CC(iLocal_50[1], 16);
				unk_0xC5A6DFE2B8987B17(&iLocal_102);
				unk_0xE896C0AD02364F2A(0, "random@homelandsecurity", "idle_to_stand_cop_ground", 4f, -2f, 1400, 8192, 0, 0, 0, 0);
				unk_0xB8CBD998685C0685(0, unk_0xBC25C936A095B5BA(), 0, 16);
				unk_0x535008C596714F9E(iLocal_102);
				unk_0xA8E6405305C0D7DF(iLocal_50[1], iLocal_102);
				unk_0x02DAF06EA4F08219(&iLocal_102);
				unk_0x22321800954A532E(iLocal_50[1], true);
				iLocal_78 = 1;
			}
			else
			{
				unk_0xB8CBD998685C0685(iLocal_50[1], unk_0xBC25C936A095B5BA(), 0, 16);
				unk_0x22321800954A532E(iLocal_50[1], true);
				iLocal_78 = 1;
			}
		}
	}
	else if (!unk_0x36CEFBE9B745A58D(iLocal_50[1]))
	{
		if (((!unk_0x96044E39418AAF17(iLocal_50[1], "random@homelandsecurity", "idle_cop_ground", 3) && !unk_0x96044E39418AAF17(iLocal_50[1], "random@homelandsecurity", "idle_to_stand_cop_ground", 1)) && unk_0xF4FCC3C1048FF2AB(iLocal_50[1], 780511057) != 0) && unk_0xF4FCC3C1048FF2AB(iLocal_50[1], 780511057) != 1)
		{
			iLocal_78 = 1;
		}
	}
}

void func_111(int iParam0, char* sParam1, int iParam2)//Position - 0x5258
{
	unk_0x53D8178763EDCE60(iParam0, sParam1, func_112(iParam2), 1);
}

int func_112(int iParam0)//Position - 0x526F
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

void func_113()//Position - 0x5464
{
	iLocal_47 = 3;
}

void func_114()//Position - 0x546F
{
	func_96();
	SYSTEM::WAIT(0);
	func_106(&uLocal_120, "REHOMAU", "REHOM_AGG", 4, 0, 0, 0);
	iLocal_47 = 3;
}

void func_115()//Position - 0x5495
{
	iLocal_47 = 3;
}

void func_116()//Position - 0x54A0
{
	Global_394A = 0;
	func_117();
}

void func_117()//Position - 0x54B0
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

int func_118()//Position - 0x54D4
{
	iLocal_92 = 0;
	while (iLocal_92 <= 1)
	{
		if (unk_0x1D403DFADBC2DE3C(iLocal_50[iLocal_92], 0))
		{
			if (unk_0xD9C1758D86688CEA(iLocal_50[iLocal_92], unk_0xBC25C936A095B5BA(), 1))
			{
				return 1;
			}
		}
		iLocal_92++;
	}
	return 0;
}

void func_119()//Position - 0x5513
{
	iLocal_94 = unk_0x105601648511CC64();
	if (!bLocal_104)
	{
		switch (iLocal_49)
		{
			case 0:
				if (func_124())
				{
					iLocal_49 = 9;
				}
				if (func_123() && !iLocal_82)
				{
					iLocal_49 = 13;
				}
				if (func_106(&uLocal_120, "REHOMAU", "REHOM_PLEA", 4, 0, 0, 0))
				{
					iLocal_93 = unk_0x105601648511CC64();
					iLocal_49 = 1;
				}
				break;
			
			case 1:
				if (func_124())
				{
					iLocal_49 = 9;
				}
				if (func_123() && !iLocal_82)
				{
					iLocal_49 = 13;
				}
				if (func_106(&uLocal_120, "REHOMAU", "REHOM_COM", 4, 0, 0, 0))
				{
					iLocal_93 = unk_0x105601648511CC64();
					iLocal_49 = 2;
				}
				break;
			
			case 2:
				if (func_124())
				{
					iLocal_49 = 9;
				}
				if (func_123() && !iLocal_82)
				{
					iLocal_49 = 13;
				}
				if ((iLocal_94 - iLocal_93) > 6000)
				{
					if (func_106(&uLocal_120, "REHOMAU", "REHOM_PLEA", 4, 0, 0, 0))
					{
						iLocal_93 = unk_0x105601648511CC64();
						iLocal_49 = 3;
					}
				}
				break;
			
			case 3:
				if (func_124())
				{
					iLocal_49 = 9;
				}
				if (func_123() && !iLocal_82)
				{
					iLocal_49 = 13;
				}
				if (func_106(&uLocal_120, "REHOMAU", "REHOM_COM2", 4, 0, 0, 0))
				{
					iLocal_93 = unk_0x105601648511CC64();
					iLocal_49 = 4;
				}
				break;
			
			case 4:
				if (func_124())
				{
					iLocal_49 = 9;
				}
				if (func_123() && !iLocal_82)
				{
					iLocal_49 = 13;
				}
				if ((iLocal_94 - iLocal_93) > 5500)
				{
					if (func_106(&uLocal_120, "REHOMAU", "REHOM_PLEA", 4, 0, 0, 0))
					{
						iLocal_93 = unk_0x105601648511CC64();
						iLocal_49 = 5;
					}
				}
				break;
			
			case 5:
				if (func_124())
				{
					iLocal_49 = 9;
				}
				if (func_123() && !iLocal_82)
				{
					iLocal_49 = 13;
				}
				if (!iLocal_83 && SYSTEM::TIMERA() > 5000)
				{
					unk_0xC5A6DFE2B8987B17(&iLocal_102);
					unk_0x56F2E1B5599188FA(0, iLocal_58, -1, 2054, 2);
					unk_0x85DB484A637CEAB9(0, iLocal_58, -1);
					unk_0x535008C596714F9E(iLocal_102);
					unk_0xA8E6405305C0D7DF(iLocal_50[0], iLocal_102);
					unk_0x22321800954A532E(iLocal_50[0], true);
					iLocal_83 = 1;
				}
				if ((iLocal_94 - iLocal_93) > 3000 || iLocal_82)
				{
					if (((unk_0xE59B7F5A03335350(iLocal_53, 0) && !unk_0x36CEFBE9B745A58D(iLocal_50[0])) && !unk_0x36CEFBE9B745A58D(iLocal_50[1])) && !unk_0x36CEFBE9B745A58D(iLocal_58))
					{
						if (unk_0x77FC50899603581D(iLocal_115))
						{
							if (unk_0x8FD30584EB38411B(iLocal_115) > 0.98f)
							{
								if (!func_108())
								{
									if (unk_0xC5B8A5F778E321DD(iLocal_50[0], iLocal_58, 10f))
									{
										if (func_106(&uLocal_120, "REHOMAU", "REHOM_ARR", 4, 0, 0, 0))
										{
											unk_0x44C98C11ED6DD327(iLocal_50[0]);
											iLocal_115 = unk_0xD0D858E538FD01C3(0f, 0f, 0f, 0f, 0f, 0f, 2);
											unk_0x510CBEAEC917268A(iLocal_115, iLocal_53, 0);
											unk_0xB62398E536F695FC(iLocal_58, iLocal_115, "random@homelandsecurity", "exit_girl", 2f, -4f, 1, 0, 1148846080, 0);
											unk_0xB62398E536F695FC(iLocal_50[0], iLocal_115, "random@homelandsecurity", "exit_cop_gun", 2f, -4f, 1, 0, 1148846080, 0);
											unk_0xB62398E536F695FC(iLocal_50[1], iLocal_115, "random@homelandsecurity", "exit_cop_ground", 2f, -4f, 1, 0, 1148846080, 0);
											unk_0x1F000DD52A4C4208(iLocal_53, "exit_car", "random@homelandsecurity", 4f, false, 0, 0, 0, 0);
											iLocal_116 = 1;
											iLocal_93 = unk_0x105601648511CC64();
											iLocal_49 = 6;
										}
									}
								}
							}
						}
					}
				}
				if (func_122())
				{
					iLocal_49 = 15;
				}
				break;
			
			case 15:
				if (((unk_0xE59B7F5A03335350(iLocal_53, 0) && !unk_0x36CEFBE9B745A58D(iLocal_50[0])) && !unk_0x36CEFBE9B745A58D(iLocal_50[1])) && !unk_0x36CEFBE9B745A58D(iLocal_58))
				{
					if (unk_0x77FC50899603581D(iLocal_115))
					{
						if (!func_108())
						{
							if (unk_0xC5B8A5F778E321DD(iLocal_50[0], iLocal_58, 10f))
							{
								if (func_106(&uLocal_120, "REHOMAU", "REHOM_ARR", 4, 0, 0, 0))
								{
									unk_0x44C98C11ED6DD327(iLocal_50[0]);
									iLocal_115 = unk_0xD0D858E538FD01C3(0f, 0f, 0f, 0f, 0f, 0f, 2);
									unk_0x510CBEAEC917268A(iLocal_115, iLocal_53, 0);
									unk_0xB62398E536F695FC(iLocal_58, iLocal_115, "random@homelandsecurity", "exit_girl", 2f, -4f, 1, 0, 1148846080, 0);
									unk_0xB62398E536F695FC(iLocal_50[0], iLocal_115, "random@homelandsecurity", "exit_cop_gun", 2f, -4f, 1, 0, 1148846080, 0);
									unk_0xB62398E536F695FC(iLocal_50[1], iLocal_115, "random@homelandsecurity", "exit_cop_ground", 2f, -4f, 1, 0, 1148846080, 0);
									unk_0x1F000DD52A4C4208(iLocal_53, "exit_car", "random@homelandsecurity", 2f, false, 0, 0, 0, 0);
									iLocal_116 = 1;
									iLocal_93 = unk_0x105601648511CC64();
									iLocal_49 = 6;
								}
							}
						}
					}
				}
				break;
			
			case 6:
				func_120();
				if (unk_0x77FC50899603581D(iLocal_115))
				{
					if (unk_0x8FD30584EB38411B(iLocal_115) > 0.45f)
					{
						if ((unk_0xE59B7F5A03335350(iLocal_53, 0) && !unk_0x36CEFBE9B745A58D(iLocal_58)) && !unk_0x36CEFBE9B745A58D(iLocal_50[0]))
						{
						}
					}
				}
				if (unk_0x77FC50899603581D(iLocal_115))
				{
					if (unk_0x8FD30584EB38411B(iLocal_115) > 0.9f)
					{
						if (unk_0xE59B7F5A03335350(iLocal_53, 0))
						{
							if (!unk_0x36CEFBE9B745A58D(iLocal_50[0]))
							{
								unk_0xD179FA0466FA4FE3(iLocal_50[0], iLocal_53, -1, -1, 1f, 9, 0);
								iLocal_49 = 7;
							}
						}
					}
				}
				break;
			
			case 7:
				func_120();
				if (unk_0x77FC50899603581D(iLocal_115))
				{
					if (unk_0x8FD30584EB38411B(iLocal_115) > 0.95f)
					{
						if (unk_0xE59B7F5A03335350(iLocal_53, 0))
						{
							if (!unk_0x36CEFBE9B745A58D(iLocal_50[1]))
							{
								unk_0xD179FA0466FA4FE3(iLocal_50[1], iLocal_53, -1, 0, 1f, 9, 0);
								unk_0x22321800954A532E(iLocal_50[1], true);
								iLocal_49 = 8;
							}
						}
					}
				}
				break;
			
			case 8:
				func_120();
				if ((unk_0xE59B7F5A03335350(iLocal_53, 0) && !unk_0x36CEFBE9B745A58D(iLocal_50[0])) && !unk_0x36CEFBE9B745A58D(iLocal_50[1]))
				{
					if ((unk_0x25EF720B1CAB1E23(iLocal_58, iLocal_53) && unk_0x25EF720B1CAB1E23(iLocal_50[0], iLocal_53)) && unk_0x25EF720B1CAB1E23(iLocal_50[1], iLocal_53))
					{
						unk_0x204BA7B1C7DD25F4(iLocal_50[0], iLocal_53, 15f, 786468);
						unk_0x0FB6723EA68C0881(iLocal_53, 1);
						bLocal_104 = true;
					}
				}
				break;
			
			case 9:
				unk_0xC5A6DFE2B8987B17(&iLocal_102);
				unk_0x44C98C11ED6DD327(0);
				unk_0x56F2E1B5599188FA(0, unk_0xBC25C936A095B5BA(), 20000, 0, 2);
				unk_0x57D65255D3D3B6A7(0, unk_0xBC25C936A095B5BA(), -1, 0);
				unk_0x535008C596714F9E(iLocal_102);
				if (!unk_0x36CEFBE9B745A58D(iLocal_50[0]))
				{
					unk_0xA8E6405305C0D7DF(iLocal_50[0], iLocal_102);
				}
				unk_0x02DAF06EA4F08219(&iLocal_102);
				if (!iLocal_80)
				{
					if (unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 4) && !unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 3))
					{
						func_96();
						SYSTEM::WAIT(0);
						func_106(&uLocal_120, "REHOMAU", "REHOM_GUN", 4, 0, 0, 0);
					}
					if (unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 3) && !unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 4))
					{
						func_96();
						SYSTEM::WAIT(0);
						if (!unk_0x36CEFBE9B745A58D(iLocal_50[0]))
						{
							func_111(iLocal_50[0], "GUN_COOL", 24);
						}
					}
					iLocal_80 = 1;
					iLocal_100 = unk_0x105601648511CC64();
				}
				iLocal_49 = 10;
				break;
			
			case 10:
				if (unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 6) && unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_50[0], 15f, 15f, 15f, 0, 1, 0))
				{
					iLocal_101 = unk_0x105601648511CC64();
				}
				else
				{
					iLocal_49 = 13;
				}
				if (((iLocal_101 - iLocal_100) > 6000 && unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 6)) && !iLocal_81)
				{
					if (func_106(&uLocal_120, "REHOMAU", "REHOM_STAY3", 4, 0, 0, 0))
					{
						iLocal_100 = unk_0x105601648511CC64();
						iLocal_81 = 1;
					}
					iLocal_49 = 11;
				}
				break;
			
			case 11:
				if (unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 6) && unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_50[0], 15f, 15f, 15f, 0, 1, 0))
				{
					iLocal_101 = unk_0x105601648511CC64();
				}
				else
				{
					iLocal_49 = 13;
				}
				if (((iLocal_101 - iLocal_100) > 9000 && unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 6)) || iLocal_106)
				{
					if (func_106(&uLocal_120, "REHOMAU", "REHOM_SHOO", 4, 0, 0, 0))
					{
						iLocal_49 = 12;
					}
				}
				break;
			
			case 12:
				if (unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 6))
				{
					iLocal_101 = unk_0x105601648511CC64();
				}
				else
				{
					iLocal_49 = 13;
				}
				if ((iLocal_101 - iLocal_100) > 13000)
				{
					iLocal_47 = 3;
				}
				break;
			
			case 13:
				if (!unk_0x36CEFBE9B745A58D(iLocal_50[0]))
				{
					unk_0xC5A6DFE2B8987B17(&iLocal_102);
					unk_0x44C98C11ED6DD327(0);
					unk_0x56F2E1B5599188FA(0, unk_0xBC25C936A095B5BA(), -1, 2052, 4);
					unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), -1);
					unk_0x535008C596714F9E(iLocal_102);
					unk_0xA8E6405305C0D7DF(iLocal_50[0], iLocal_102);
					unk_0x02DAF06EA4F08219(&iLocal_102);
				}
				if (iLocal_107)
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_50[1]))
					{
						if (!unk_0x36CEFBE9B745A58D(iLocal_58))
						{
							if (unk_0xF4FCC3C1048FF2AB(iLocal_50[1], 1785177548) != 1)
							{
								unk_0xC5A6DFE2B8987B17(&iLocal_102);
								unk_0x44C98C11ED6DD327(0);
								unk_0x85DB484A637CEAB9(0, iLocal_58, 0);
								unk_0x56F2E1B5599188FA(0, iLocal_58, 20000, 0, 2);
								unk_0x5B8F74954F713B9E(0, iLocal_58, -1f, 0f, 0f, 1f, -1, 1036831949, 1);
								unk_0x535008C596714F9E(iLocal_102);
								unk_0xA8E6405305C0D7DF(iLocal_50[1], iLocal_102);
								unk_0x02DAF06EA4F08219(&iLocal_102);
							}
						}
						else if (unk_0xF4FCC3C1048FF2AB(iLocal_50[1], 1785177548) != 1)
						{
							unk_0xC5A6DFE2B8987B17(&iLocal_102);
							unk_0x44C98C11ED6DD327(0);
							unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 0);
							unk_0x56F2E1B5599188FA(0, unk_0xBC25C936A095B5BA(), 20000, 0, 2);
							unk_0x535008C596714F9E(iLocal_102);
							unk_0xA8E6405305C0D7DF(iLocal_50[1], iLocal_102);
							unk_0x02DAF06EA4F08219(&iLocal_102);
						}
					}
					if (!unk_0x36CEFBE9B745A58D(iLocal_58))
					{
						if (unk_0xF4FCC3C1048FF2AB(iLocal_58, 1785177548) != 1)
						{
							unk_0x40DD085221F706D0(iLocal_58, unk_0xBC25C936A095B5BA(), -1, 0);
							unk_0x22321800954A532E(iLocal_58, true);
						}
					}
				}
				iLocal_49 = 14;
				break;
			
			case 14:
				if (func_124())
				{
					iLocal_49 = 9;
				}
				if (func_122())
				{
					if (unk_0x77FC50899603581D(iLocal_115))
					{
						if (!iLocal_107)
						{
							if (!unk_0x36CEFBE9B745A58D(iLocal_50[1]))
							{
							}
							if (!unk_0x36CEFBE9B745A58D(iLocal_58))
							{
								unk_0x40DD085221F706D0(iLocal_58, unk_0xBC25C936A095B5BA(), -1, 0);
								unk_0x22321800954A532E(iLocal_58, true);
							}
							iLocal_107 = 1;
						}
					}
				}
				if (!unk_0x36CEFBE9B745A58D(iLocal_50[0]))
				{
					if (!func_108() && !iLocal_82)
					{
						if (func_107())
						{
							func_106(&uLocal_120, "REHOMAU", "REHOM_AWAY1", 4, 0, 0, 0);
						}
						else
						{
							func_106(&uLocal_120, "REHOMAU", "REHOM_AWAY2", 4, 0, 0, 0);
						}
						iLocal_82 = 1;
					}
					iLocal_83 = 0;
					SYSTEM::SETTIMERA(0);
					iLocal_93 = (unk_0x105601648511CC64() - 4500);
					iLocal_49 = 5;
				}
			}
	}
}

void func_120()//Position - 0x5EC6
{
	if (!func_108())
	{
		if (unk_0xE59B7F5A03335350(iLocal_53, 0))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_58))
			{
				if (unk_0x62F3A07C43FFB568(iLocal_58, iLocal_53, 0))
				{
					if (func_121(iLocal_58, 0) == 2)
					{
						if (iLocal_95 < unk_0x105601648511CC64())
						{
							func_106(&uLocal_120, "REHOMAU", "REHOM_FOLL", 4, 0, 0, 0);
							iLocal_95 = (unk_0x105601648511CC64() + unk_0x491B2241281A03B7(3500, 4000));
						}
					}
				}
			}
		}
	}
}

int func_121(int iParam0, int iParam1)//Position - 0x5F2D
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

int func_122()//Position - 0x5FB2
{
	if ((!unk_0x36CEFBE9B745A58D(iLocal_50[0]) && !unk_0x36CEFBE9B745A58D(iLocal_50[1])) && !unk_0x36CEFBE9B745A58D(iLocal_58))
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			if ((unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_50[0], 1.5f, 1.5f, 5f, 0, 1, 2) || unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_50[1], 2.5f, 2.5f, 5f, 0, 1, 2)) || unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_58, 1.5f, 1.5f, 5f, 0, 1, 2))
			{
				return 1;
			}
		}
		else if ((unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_50[0], 0.5f, 0.5f, 5f, 0, 1, 1) || unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_50[1], 0.5f, 0.5f, 5f, 0, 1, 1)) || unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_58, 0.5f, 0.5f, 5f, 0, 1, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_123()//Position - 0x60B4
{
	if (!unk_0x36CEFBE9B745A58D(iLocal_50[1]))
	{
		if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_50[1], 6f, 6f, 6f, 0, 1, 0))
		{
			if (unk_0xC5B8A5F778E321DD(iLocal_50[1], unk_0xBC25C936A095B5BA(), 120f))
			{
				if (!unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 6))
				{
					return 1;
				}
			}
		}
	}
	if (!unk_0x36CEFBE9B745A58D(iLocal_50[0]))
	{
		if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_50[0], 6f, 6f, 6f, 0, 1, 0))
		{
			if (!unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 6))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_124()//Position - 0x613A
{
	if (!unk_0x36CEFBE9B745A58D(iLocal_50[1]))
	{
		if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_50[1], 6f, 6f, 6f, 0, 1, 1))
		{
			if (unk_0xC5B8A5F778E321DD(iLocal_50[1], unk_0xBC25C936A095B5BA(), 120f))
			{
				if (unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 6))
				{
					return 1;
				}
			}
		}
	}
	if (!unk_0x36CEFBE9B745A58D(iLocal_50[0]))
	{
		if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_50[0], 6f, 6f, 6f, 0, 1, 1))
		{
			if (unk_0xC5B8A5F778E321DD(iLocal_50[0], unk_0xBC25C936A095B5BA(), 120f))
			{
				if (unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 6))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_125(int iParam0)//Position - 0x61D3
{
	if (func_128())
	{
		Global_19AFA = 1;
		Global_19AF7 = unk_0x105601648511CC64();
		if (func_16(Global_19AF9))
		{
			func_126(0);
		}
		unk_0x3FF92BBF0607A406(1, "RE_TITLE");
		if (iParam0 && func_16(Global_19AF9))
		{
			unk_0x621CEDEDDD531386();
		}
		return 1;
	}
	return 0;
}

void func_126(int iParam0)//Position - 0x6226
{
	switch (iParam0)
	{
		case 0:
			if (Global_19B04.f_6186.f_2 < 3)
			{
				if (!unk_0x5107E30005FCFEA8())
				{
					func_92(func_127(iParam0), -1);
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
					func_92(func_127(iParam0), -1);
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
					func_92(func_127(iParam0), -1);
					Global_19B04.f_6186.f_4++;
					unk_0xF0059F27F7BB6680(&Global_19B00, 2);
				}
			}
			break;
	}
}

char* func_127(int iParam0)//Position - 0x6307
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

int func_128()//Position - 0x6349
{
	switch (func_129(&Global_62F8, 0, 5, 0, unk_0x8A55B15F4133C912()))
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

int func_129(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x637F
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
		if (func_133(0))
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
		if (!func_131(iParam2))
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
			func_130(uParam0, iParam4);
		}
	}
	return 2;
}

void func_130(var uParam0, int iParam1)//Position - 0x64B6
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

bool func_131(int iParam0)//Position - 0x6505
{
	return func_132(iParam0, Global_8C41);
}

int func_132(int iParam0, int iParam1)//Position - 0x6516
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

int func_133(int iParam0)//Position - 0x66F7
{
	if (Global_8C41 == 15)
	{
		return 0;
	}
	if (func_131(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_134()//Position - 0x6719
{
	if (unk_0x2DA8CA50A72528FB(iLocal_87))
	{
		unk_0x07B8ECB35A4ED3AC(&iLocal_87);
	}
	if (!unk_0x2DA8CA50A72528FB(iLocal_88))
	{
		if (!unk_0x1D403DFADBC2DE3C(iLocal_58, 0))
		{
			iLocal_88 = func_99(iLocal_58, 0, 145);
			unk_0x222805B89367761E(iLocal_88, false);
		}
	}
	else
	{
		unk_0x222805B89367761E(iLocal_88, true);
	}
	iLocal_92 = 0;
	while (iLocal_92 <= 1)
	{
		if (!unk_0x2DA8CA50A72528FB(iLocal_89[iLocal_92]))
		{
			if (!unk_0x1D403DFADBC2DE3C(iLocal_50[iLocal_92], 0))
			{
				iLocal_89[iLocal_92] = func_99(iLocal_50[iLocal_92], 0, 145);
				unk_0x222805B89367761E(iLocal_89[iLocal_92], false);
			}
		}
		else
		{
			unk_0x222805B89367761E(iLocal_89[iLocal_92], true);
		}
		iLocal_92++;
	}
}

int func_135()//Position - 0x67BC
{
	int iVar0;
	int iVar1;
	
	if (!bLocal_99)
	{
		if (unk_0x876474582C5DECDE(vLocal_54 - Vector(30f, 30f, 30f), vLocal_54 + Vector(30f, 30f, 30f), 1) || unk_0x98A70668EE483D0B(vLocal_54 - Vector(30f, 30f, 30f), vLocal_54 + Vector(30f, 30f, 30f), 1))
		{
			iLocal_48 = 2;
			return 1;
		}
		if (!unk_0x36CEFBE9B745A58D(iLocal_50[0]) && !unk_0x36CEFBE9B745A58D(iLocal_50[1]))
		{
			if (unk_0xE642C1AC73CE364E(iLocal_50[0], unk_0xBC25C936A095B5BA(), 20f, 20f, 20f, 0, 1, 0))
			{
				if (unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 7) || (unk_0xABB2AFD7539464EA(unk_0xBC25C936A095B5BA()) && unk_0xE642C1AC73CE364E(iLocal_50[0], unk_0xBC25C936A095B5BA(), 6f, 6f, 6f, 0, 1, 0)))
				{
					if (((unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), iLocal_50[0]) || unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), iLocal_50[0])) || unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), iLocal_50[1])) || unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), iLocal_50[1]))
					{
						if (unk_0x1028B6250119A74B(iLocal_50[0], unk_0xBC25C936A095B5BA()) || unk_0x1028B6250119A74B(iLocal_50[1], unk_0xBC25C936A095B5BA()))
						{
							iLocal_48 = 2;
							return 1;
						}
					}
				}
			}
		}
		iVar0 = unk_0x3E12B546F3F2597A();
		if (unk_0x724D816EA203A79E(iLocal_53))
		{
			if (!unk_0x1D403DFADBC2DE3C(iLocal_53, 0))
			{
				if (unk_0xD9C1758D86688CEA(iLocal_53, unk_0xBC25C936A095B5BA(), 1))
				{
					iLocal_48 = 2;
					return 1;
				}
				if (unk_0x702B2D223F333084(unk_0xBC25C936A095B5BA(), iLocal_53) && unk_0x8910237449BB6F79(unk_0xBC25C936A095B5BA()) > 0.1f)
				{
					iLocal_48 = 2;
					return 1;
				}
				if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_53, 0))
				{
					iLocal_48 = 2;
					return 1;
				}
				if (unk_0xE59B7F5A03335350(iVar0, 0))
				{
					if (unk_0xD9C1758D86688CEA(iLocal_53, iVar0, 1))
					{
						iLocal_48 = 2;
						return 1;
					}
				}
			}
			else if (unk_0xD9C1758D86688CEA(iLocal_53, unk_0xBC25C936A095B5BA(), 1))
			{
				iLocal_48 = 2;
				return 1;
			}
		}
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0xEA8F5A4C494DBF3B(unk_0xBC25C936A095B5BA(), joaat("towtruck")) || unk_0xEA8F5A4C494DBF3B(unk_0xBC25C936A095B5BA(), joaat("towtruck2")))
			{
				iVar1 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
				if (!unk_0x1D403DFADBC2DE3C(iLocal_53, 0))
				{
					if (unk_0x27C9F6C1391327CF(iVar1, iLocal_53))
					{
						iLocal_48 = 2;
						return 1;
					}
				}
			}
		}
		if (!unk_0x36CEFBE9B745A58D(iLocal_50[0]) || unk_0x1D403DFADBC2DE3C(iLocal_50[0], 0))
		{
			if (unk_0xD9C1758D86688CEA(iLocal_50[0], unk_0xBC25C936A095B5BA(), 1))
			{
				iLocal_48 = 5;
				return 1;
			}
			if (unk_0xE921F8171F0733B3(unk_0xBC25C936A095B5BA(), iLocal_50[0]) && unk_0x8910237449BB6F79(unk_0xBC25C936A095B5BA()) > 0.1f)
			{
				iLocal_48 = 5;
				return 1;
			}
			if (unk_0xE59B7F5A03335350(iVar0, 0))
			{
				if (unk_0xD9C1758D86688CEA(iLocal_50[0], iVar0, 1))
				{
					iLocal_48 = 5;
					return 1;
				}
			}
		}
		if (!unk_0x36CEFBE9B745A58D(iLocal_50[1]) || unk_0x1D403DFADBC2DE3C(iLocal_50[1], 0))
		{
			if (unk_0xD9C1758D86688CEA(iLocal_50[1], unk_0xBC25C936A095B5BA(), 1))
			{
				iLocal_48 = 5;
				return 1;
			}
			if (unk_0xE921F8171F0733B3(unk_0xBC25C936A095B5BA(), iLocal_50[1]) && unk_0x8910237449BB6F79(unk_0xBC25C936A095B5BA()) > 0.1f)
			{
				iLocal_48 = 5;
				return 1;
			}
			if (unk_0xE59B7F5A03335350(iVar0, 0))
			{
				if (unk_0xD9C1758D86688CEA(iLocal_50[1], iVar0, 1))
				{
					iLocal_48 = 5;
					return 1;
				}
			}
		}
		if (!unk_0x1D403DFADBC2DE3C(iLocal_58, 0))
		{
			if (unk_0xD9C1758D86688CEA(iLocal_58, unk_0xBC25C936A095B5BA(), 1))
			{
				iLocal_48 = 4;
				return 1;
			}
			if (unk_0xE921F8171F0733B3(unk_0xBC25C936A095B5BA(), iLocal_58))
			{
				iLocal_48 = 4;
				return 1;
			}
			if (unk_0xE59B7F5A03335350(iVar0, 0))
			{
				if (unk_0xD9C1758D86688CEA(iLocal_58, iVar0, 1))
				{
					iLocal_48 = 4;
					return 1;
				}
			}
		}
		else if (unk_0xD9C1758D86688CEA(iLocal_58, unk_0xBC25C936A095B5BA(), 1))
		{
			iLocal_48 = 4;
			return 1;
		}
	}
	return 0;
}

void func_136()//Position - 0x6B76
{
	func_138(39, 1);
	func_138(40, 1);
	func_138(41, 1);
	func_138(42, 1);
	func_138(43, 1);
	func_138(44, 1);
	unk_0x1DAA351326EA3537(374.869f, -1358.043f, 25.667f, 452.41f, -1423.882f, 38.337f, 0, 1, 1, 1);
	unk_0x1DAA351326EA3537(vLocal_68 - Vector(20f, 20f, 20f), vLocal_68 + Vector(20f, 20f, 20f), 0, 1, 1, 1);
	unk_0xA0C0B32E74BE8DB7(vLocal_59, 50f, 0);
	unk_0x4BDC021CD4295F17(419f, -1387f, 28f, 427f, -1370f, 29f, false, 0);
	unk_0xF0059F27F7BB6680(&uLocal_97, 5);
	iLocal_58 = unk_0x01B3635C3E8EDD81(26, iLocal_60, vLocal_59, 0f, 1, true);
	unk_0x2E35C4FA5F0ED22F(iLocal_58, true);
	unk_0x2CA123B0622F495C(iLocal_60);
	unk_0xB105531EDD3DE51B(iLocal_58, false);
	unk_0xC8FD3EBBB90E8D7F(iLocal_58, 185, true);
	unk_0xC8FD3EBBB90E8D7F(iLocal_58, 206, true);
	unk_0xABA7AE40608505F2(iLocal_58, 2, false);
	unk_0x0DEF5E53360637F2(iLocal_58, 1);
	unk_0x36C3B58DA78A2679(iLocal_58, "REHOMGirl");
	unk_0xB0031DDAE4FF0BC3(iLocal_58, 0, 2, 1, 0);
	unk_0xB0031DDAE4FF0BC3(iLocal_58, 2, 0, 0, 0);
	unk_0xB0031DDAE4FF0BC3(iLocal_58, 3, 1, 4, 0);
	unk_0xB0031DDAE4FF0BC3(iLocal_58, 4, 0, 5, 0);
	unk_0xB0031DDAE4FF0BC3(iLocal_58, 6, 1, 0, 0);
	unk_0xB2CB6EAA6B280A84("OFFICERS", &iLocal_119);
	iLocal_92 = 0;
	while (iLocal_92 <= 1)
	{
		iLocal_50[iLocal_92] = unk_0x01B3635C3E8EDD81(6, iLocal_56, vLocal_51[iLocal_92 /*3*/], fLocal_52[iLocal_92], 1, true);
		unk_0x2E35C4FA5F0ED22F(iLocal_50[iLocal_92], true);
		unk_0x2CA123B0622F495C(iLocal_56);
		unk_0x4106FAF8AA1D69D5(iLocal_50[iLocal_92], iLocal_119);
		unk_0xC8FD3EBBB90E8D7F(iLocal_50[iLocal_92], 42, true);
		iLocal_92++;
	}
	unk_0x7A535CE1F001F3FE(iLocal_50[0], joaat("weapon_pistol"), -1, true, true);
	unk_0x7A535CE1F001F3FE(iLocal_50[1], joaat("weapon_pistol"), -1, false, true);
	unk_0xA902E18EDF6FA0C8(5, iLocal_119, 1862763509);
	unk_0xA902E18EDF6FA0C8(1, iLocal_119, -1533126372);
	unk_0xA902E18EDF6FA0C8(1, -1533126372, iLocal_119);
	iLocal_53 = unk_0x61C05BF08A1E0EFE(iLocal_57, vLocal_54, fLocal_55, true, true, false);
	unk_0x8510BC031C24B862(iLocal_57, true);
	unk_0xF0A40F19AAB79E88(iLocal_53, 1084227584);
	unk_0x0FB6723EA68C0881(iLocal_53, 1);
	func_137(&uLocal_120, 5, iLocal_50[0], "ACULTMember1", 0, 1);
	func_137(&uLocal_120, 4, iLocal_50[1], "ACULTMember2", 0, 1);
	func_137(&uLocal_120, 3, iLocal_58, "REHOMGirl", 0, 1);
	if (func_101() == 0)
	{
		func_137(&uLocal_120, 0, unk_0xBC25C936A095B5BA(), "MICHAEL", 0, 1);
	}
	else if (func_101() == 1)
	{
		func_137(&uLocal_120, 1, unk_0xBC25C936A095B5BA(), "FRANKLIN", 0, 1);
	}
	iLocal_115 = unk_0xD0D858E538FD01C3(0f, 0f, 0f, 0f, 0f, 0f, 2);
	unk_0x510CBEAEC917268A(iLocal_115, iLocal_53, 0);
	unk_0xB62398E536F695FC(iLocal_58, iLocal_115, "random@homelandsecurity", "idle_girl", 4f, -2f, 1, 0, 1148846080, 0);
	unk_0xB62398E536F695FC(iLocal_50[0], iLocal_115, "random@homelandsecurity", "idle_cop_gun", 4f, -2f, 1, 0, 1148846080, 0);
	unk_0xB62398E536F695FC(iLocal_50[1], iLocal_115, "random@homelandsecurity", "idle_cop_ground", 4f, -2f, 1, 0, 1148846080, 0);
	unk_0xC2BF3DE5E47F801D(iLocal_115, true);
}

void func_137(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x6E71
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

void func_138(int iParam0, bool bParam1)//Position - 0x6F0C
{
	if (bParam1)
	{
		if (!func_145(iParam0, 2, 1))
		{
			func_144(iParam0, 2, 1);
		}
	}
	else if (func_145(iParam0, 2, 1))
	{
		func_139(iParam0, 2, 1);
	}
}

void func_139(int iParam0, int iParam1, bool bParam2)//Position - 0x6F43
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0x7CB6FD92BE491AD9(&(Global_16B4F.f_531[iParam0]), iParam1);
	}
	else if (unk_0x7AF0088ABFA713B6())
	{
		if (func_11() == 0)
		{
			iVar0 = func_142(func_143(iParam0), -1, 0);
			unk_0x7CB6FD92BE491AD9(&iVar0, iParam1);
			func_140(func_143(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_29C[iParam0]), iParam1);
	}
}

void func_140(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x6FAC
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_141(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, iParam3);
	}
}

int func_141(var uParam0)//Position - 0x6FDC
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_14();
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

int func_142(int iParam0, int iParam1, int iParam2)//Position - 0x7010
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_141(iParam1)];
	if (unk_0x6CB99B97664C3727(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_143(int iParam0)//Position - 0x7042
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

void func_144(int iParam0, int iParam1, bool bParam2)//Position - 0x7336
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0xF0059F27F7BB6680(&(Global_16B4F.f_531[iParam0]), iParam1);
	}
	else if (unk_0x7AF0088ABFA713B6())
	{
		if (func_11() == 0)
		{
			iVar0 = func_142(func_143(iParam0), -1, 0);
			unk_0xF0059F27F7BB6680(&iVar0, iParam1);
			func_140(func_143(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xF0059F27F7BB6680(&(Global_19B04.f_29C[iParam0]), iParam1);
	}
}

int func_145(int iParam0, int iParam1, bool bParam2)//Position - 0x739F
{
	if (bParam2)
	{
		return unk_0xFA30DFD0084E92FE(Global_16B4F.f_531[iParam0], iParam1);
	}
	else if (unk_0x7AF0088ABFA713B6())
	{
		if (func_11() == 0)
		{
			return unk_0xFA30DFD0084E92FE(func_142(func_143(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xFA30DFD0084E92FE(Global_19B04.f_29C[iParam0], iParam1);
	}
	return 0;
}

void func_146()//Position - 0x73FF
{
	unk_0xF243B7A14FCFD0F4(iLocal_60);
	unk_0xF243B7A14FCFD0F4(iLocal_56);
	unk_0xF243B7A14FCFD0F4(iLocal_57);
	unk_0x522053D86D6E1C7A("random@homelandsecurity");
	if (((unk_0xD6513D668481290A(iLocal_60) && unk_0xD6513D668481290A(iLocal_56)) && unk_0xD6513D668481290A(iLocal_57)) && unk_0xF9E082857622D91E("random@homelandsecurity"))
	{
		bLocal_72 = true;
	}
	else
	{
		unk_0xF243B7A14FCFD0F4(iLocal_60);
		unk_0xF243B7A14FCFD0F4(iLocal_56);
		unk_0xF243B7A14FCFD0F4(iLocal_57);
		unk_0x522053D86D6E1C7A("random@homelandsecurity");
	}
}

void func_147()//Position - 0x746A
{
	iLocal_60 = joaat("a_f_y_tourist_01");
	iLocal_56 = joaat("a_m_o_acult_01");
	iLocal_57 = joaat("fugitive");
	vLocal_59 = { -174.0522f, 1905.611f, 197.0466f };
	vLocal_51[0 /*3*/] = { -174.3279f, 1903.972f, 197.0502f };
	fLocal_52[0] = 147.8596f;
	vLocal_51[1 /*3*/] = { -174.3233f, 1906.384f, 197.0145f };
	fLocal_52[1] = 164.5974f;
	vLocal_54 = { -172.4207f, 1905.183f, 197.1163f };
	fLocal_55 = 187.3899f;
	vLocal_67 = { 469.8768f, 2617.532f, 42.2566f };
	vLocal_68 = { 472.2393f, 2611.611f, 42.2676f };
	vLocal_69 = { -1034.6f, 4918.6f, 205.9f };
	iLocal_71 = 1;
}

int func_148()//Position - 0x7530
{
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), vLocal_44) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(unk_0xB5D9AE572C19509E(unk_0xBC25C936A095B5BA())) > 1369f && !func_159())
		{
			return 0;
		}
	}
	if (func_155())
	{
		return 1;
	}
	if (func_149(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_149(float fParam0, bool bParam1)//Position - 0x75B6
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
		if (func_24(func_101()))
		{
			iVar5 = func_21();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (unk_0xFA30DFD0084E92FE(Global_19B04.f_4871[iVar1 /*6*/], 2) && !unk_0xFA30DFD0084E92FE(Global_19B04.f_4871[iVar1 /*6*/], 3))
				{
					func_150(iVar1, &Var0);
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

void func_150(int iParam0, var uParam1)//Position - 0x766D
{
	switch (iParam0)
	{
		case 0:
			func_151(uParam1, "Abigail1", func_153(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_152(iParam0), 1, 0);
			break;
		
		case 1:
			func_151(uParam1, "Abigail2", func_153(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_152(iParam0), 1, 0);
			break;
		
		case 2:
			func_151(uParam1, "Barry1", func_153(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_152(iParam0), 1, 0);
			break;
		
		case 3:
			func_151(uParam1, "Barry2", func_153(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_152(iParam0), 1, 1);
			break;
		
		case 4:
			func_151(uParam1, "Barry3", func_153(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_152(iParam0), 0, 0);
			break;
		
		case 5:
			func_151(uParam1, "Barry3A", func_153(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_152(iParam0), 0, 1);
			break;
		
		case 6:
			func_151(uParam1, "Barry3C", func_153(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_152(iParam0), 0, 1);
			break;
		
		case 7:
			func_151(uParam1, "Barry4", func_153(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_152(iParam0), 0, 0);
			break;
		
		case 8:
			func_151(uParam1, "Dreyfuss1", func_153(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_152(iParam0), 0, 0);
			break;
		
		case 9:
			func_151(uParam1, "Epsilon1", func_153(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_152(iParam0), 0, 0);
			break;
		
		case 10:
			func_151(uParam1, "Epsilon2", func_153(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_152(iParam0), 1, 0);
			break;
		
		case 11:
			func_151(uParam1, "Epsilon3", func_153(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_152(iParam0), 0, 0);
			break;
		
		case 12:
			func_151(uParam1, "Epsilon4", func_153(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_152(iParam0), 0, 0);
			break;
		
		case 13:
			func_151(uParam1, "Epsilon5", func_153(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_152(iParam0), 1, 0);
			break;
		
		case 14:
			func_151(uParam1, "Epsilon6", func_153(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_152(iParam0), 0, 1);
			break;
		
		case 15:
			func_151(uParam1, "Epsilon7", func_153(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_152(iParam0), 0, 0);
			break;
		
		case 16:
			func_151(uParam1, "Epsilon8", func_153(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_152(iParam0), 1, 0);
			break;
		
		case 17:
			func_151(uParam1, "Extreme1", func_153(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_152(iParam0), 0, 1);
			break;
		
		case 18:
			func_151(uParam1, "Extreme2", func_153(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_152(iParam0), 0, 1);
			break;
		
		case 19:
			func_151(uParam1, "Extreme3", func_153(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_152(iParam0), 0, 1);
			break;
		
		case 20:
			func_151(uParam1, "Extreme4", func_153(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_152(iParam0), 0, 0);
			break;
		
		case 21:
			func_151(uParam1, "Fanatic1", func_153(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_152(iParam0), 1, 0);
			break;
		
		case 22:
			func_151(uParam1, "Fanatic2", func_153(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_152(iParam0), 1, 0);
			break;
		
		case 23:
			func_151(uParam1, "Fanatic3", func_153(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_152(iParam0), 0, 1);
			break;
		
		case 24:
			func_151(uParam1, "Hao1", func_153(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_152(iParam0), 0, 1);
			break;
		
		case 25:
			func_151(uParam1, "Hunting1", func_153(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_152(iParam0), 0, 1);
			break;
		
		case 26:
			func_151(uParam1, "Hunting2", func_153(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_152(iParam0), 0, 1);
			break;
		
		case 27:
			func_151(uParam1, "Josh1", func_153(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_152(iParam0), 1, 0);
			break;
		
		case 28:
			func_151(uParam1, "Josh2", func_153(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_152(iParam0), 1, 1);
			break;
		
		case 29:
			func_151(uParam1, "Josh3", func_153(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_152(iParam0), 1, 1);
			break;
		
		case 30:
			func_151(uParam1, "Josh4", func_153(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_152(iParam0), 1, 0);
			break;
		
		case 31:
			func_151(uParam1, "Maude1", func_153(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_152(iParam0), 0, 1);
			break;
		
		case 32:
			func_151(uParam1, "Minute1", func_153(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_152(iParam0), 0, 1);
			break;
		
		case 33:
			func_151(uParam1, "Minute2", func_153(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_152(iParam0), 0, 1);
			break;
		
		case 34:
			func_151(uParam1, "Minute3", func_153(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_152(iParam0), 0, 1);
			break;
		
		case 35:
			func_151(uParam1, "MrsPhilips1", func_153(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_152(iParam0), 0, 0);
			break;
		
		case 36:
			func_151(uParam1, "MrsPhilips2", func_153(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_152(iParam0), 0, 0);
			break;
		
		case 37:
			func_151(uParam1, "Nigel1", func_153(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_152(iParam0), 1, 0);
			break;
		
		case 38:
			func_151(uParam1, "Nigel1A", func_153(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_152(iParam0), 1, 1);
			break;
		
		case 39:
			func_151(uParam1, "Nigel1B", func_153(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_152(iParam0), 1, 1);
			break;
		
		case 40:
			func_151(uParam1, "Nigel1C", func_153(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_152(iParam0), 1, 1);
			break;
		
		case 41:
			func_151(uParam1, "Nigel1D", func_153(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_152(iParam0), 1, 1);
			break;
		
		case 42:
			func_151(uParam1, "Nigel2", func_153(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_152(iParam0), 1, 1);
			break;
		
		case 43:
			func_151(uParam1, "Nigel3", func_153(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_152(iParam0), 1, 1);
			break;
		
		case 44:
			func_151(uParam1, "Omega1", func_153(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_152(iParam0), 0, 0);
			break;
		
		case 45:
			func_151(uParam1, "Omega2", func_153(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_152(iParam0), 0, 0);
			break;
		
		case 46:
			func_151(uParam1, "Paparazzo1", func_153(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_152(iParam0), 0, 1);
			break;
		
		case 47:
			func_151(uParam1, "Paparazzo2", func_153(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_152(iParam0), 0, 1);
			break;
		
		case 48:
			func_151(uParam1, "Paparazzo3", func_153(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_152(iParam0), 0, 0);
			break;
		
		case 49:
			func_151(uParam1, "Paparazzo3A", func_153(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_152(iParam0), 0, 1);
			break;
		
		case 50:
			func_151(uParam1, "Paparazzo3B", func_153(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_152(iParam0), 0, 1);
			break;
		
		case 51:
			func_151(uParam1, "Paparazzo4", func_153(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_152(iParam0), 0, 0);
			break;
		
		case 52:
			func_151(uParam1, "Rampage1", func_153(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_152(iParam0), 0, 0);
			break;
		
		case 54:
			func_151(uParam1, "Rampage3", func_153(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_152(iParam0), 1, 0);
			break;
		
		case 55:
			func_151(uParam1, "Rampage4", func_153(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_152(iParam0), 1, 0);
			break;
		
		case 56:
			func_151(uParam1, "Rampage5", func_153(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_152(iParam0), 0, 0);
			break;
		
		case 53:
			func_151(uParam1, "Rampage2", func_153(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_152(iParam0), 1, 0);
			break;
		
		case 57:
			func_151(uParam1, "TheLastOne", func_153(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_152(iParam0), 0, 1);
			break;
		
		case 58:
			func_151(uParam1, "Tonya1", func_153(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_152(iParam0), 0, 1);
			break;
		
		case 59:
			func_151(uParam1, "Tonya2", func_153(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_152(iParam0), 0, 1);
			break;
		
		case 60:
			func_151(uParam1, "Tonya3", func_153(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_152(iParam0), 0, 1);
			break;
		
		case 61:
			func_151(uParam1, "Tonya4", func_153(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_152(iParam0), 0, 1);
			break;
		
		case 62:
			func_151(uParam1, "Tonya5", func_153(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_152(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_151(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0x87E3
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

int func_152(int iParam0)//Position - 0x8874
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

struct<2> func_153(int iParam0)//Position - 0x8BBA
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_154(iParam0) };
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

struct<2> func_154(int iParam0)//Position - 0x8BF0
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

int func_155()//Position - 0x903B
{
	if (func_158() && !func_159())
	{
		return 1;
	}
	if (func_157() && func_156())
	{
		return 1;
	}
	return 0;
}

bool func_156()//Position - 0x906D
{
	return Global_199EA > 0;
}

int func_157()//Position - 0x907B
{
	if (Global_15FA6 != -1)
	{
		return 1;
	}
	return 0;
}

int func_158()//Position - 0x9090
{
	if (Global_15FA6 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_147B0[Global_15FA6 /*34*/].f_F, 20);
	}
	return 0;
}

int func_159()//Position - 0x90B6
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

int func_160()//Position - 0x90D3
{
	if (!func_131(5))
	{
		return 1;
	}
	if (func_155())
	{
		return 1;
	}
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (SYSTEM::VMAG2(unk_0xB5D9AE572C19509E(unk_0xBC25C936A095B5BA())) > 1369f && !func_159())
		{
			return 0;
		}
	}
	if (func_149(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_161()//Position - 0x9135
{
	if ((Global_19AF9 == func_30() && unk_0x8520DF5301DD9811()) && Global_19AFA)
	{
		return 1;
	}
	return 0;
}

void func_162(int iParam0)//Position - 0x9160
{
	if (iParam0 == -1)
	{
		iParam0 = func_30();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_164(iParam0);
	unk_0x8A623F2A0D19557F(0);
	unk_0xCB0D7BF24DBB59C6(1);
	Global_19AF6 = 0;
	func_163();
}

void func_163()//Position - 0x9196
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

void func_164(int iParam0)//Position - 0x91D3
{
	Global_19AF9 = iParam0;
}

int func_165(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x91E1
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
		iParam1 = func_30();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_206())
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
			if (SYSTEM::VMAG2(unk_0xB5D9AE572C19509E(unk_0xBC25C936A095B5BA())) > 1369f && !func_159())
			{
				return 0;
			}
		}
		if (!Global_19B04.f_2360)
		{
			return 0;
		}
		if (func_7(0))
		{
			return 0;
		}
		if (func_155())
		{
			return 0;
		}
		if (func_205())
		{
			return 0;
		}
		if (Global_19AF9 != -1)
		{
			return 0;
		}
		if (func_24(func_101()))
		{
			if (func_149(100f, 1) != -1)
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
		if (!func_204(iParam1))
		{
			return 0;
		}
		if (func_24(func_101()))
		{
			if (func_203(func_101()) == 4 || func_203(func_101()) == 5)
			{
				return 0;
			}
		}
		if (func_24(func_101()))
		{
			if (!func_202(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_201(Global_19B04.f_6186.f_2B[iParam1]))
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
		if (func_200())
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
		if (!func_191(4))
		{
			return 0;
		}
		if (!func_131(5))
		{
			return 0;
		}
		if (func_190(iParam1, iParam2) && !bParam3)
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
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_190(0, 0))
		{
			return 0;
		}
		if (Global_634F)
		{
			return 0;
		}
		if (func_204(30) && !func_190(30, 0))
		{
			if (iParam1 != 30)
			{
				if (SYSTEM::VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_24(func_101()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				vVar3 = { Global_19B04.f_932.f_21B.f_8E8[iVar2 /*3*/] };
				iVar4 = Global_19B04.f_932.f_21B.f_8E4[iVar2];
				if (func_189(iVar4))
				{
					if (func_167(iVar2))
					{
						if (!func_166(vVar3, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false), vVar3) < (210f * 210f))
							{
								if (func_101() != iVar2)
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

bool func_166(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x957B
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_167(int iParam0)//Position - 0x95C2
{
	int iVar0;
	
	iVar0 = Global_19B04.f_932.f_21B.f_8E4[iParam0];
	return func_168(iVar0);
}

int func_168(int iParam0)//Position - 0x95E3
{
	return func_169(iParam0, 1);
}

int func_169(int iParam0, int iParam1)//Position - 0x95F2
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_189(iParam0))
	{
		return 0;
	}
	func_170(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_170(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x9645
{
	func_171(func_182(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_171(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x9663
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_181(iParam0, iParam1))
	{
		iVar0 = func_180(iParam1);
		iVar1 = func_178(iParam0);
		iVar2 = (func_178(iParam0) - func_178(iParam1));
		iVar3 = (func_180(iParam0) - func_180(iParam1));
		iVar4 = (func_177(iParam0) - func_177(iParam1));
		iVar5 = (func_176(iParam0) - func_176(iParam1));
		iVar6 = (func_175(iParam0) - func_175(iParam1));
		iVar7 = (func_174(iParam0) - func_174(iParam1));
	}
	else
	{
		iVar0 = func_180(iParam0);
		iVar1 = func_178(iParam1);
		iVar2 = (func_178(iParam1) - func_178(iParam0));
		iVar3 = (func_180(iParam1) - func_180(iParam0));
		iVar4 = (func_177(iParam1) - func_177(iParam0));
		iVar5 = (func_176(iParam1) - func_176(iParam0));
		iVar6 = (func_175(iParam1) - func_175(iParam0));
		iVar7 = (func_174(iParam1) - func_174(iParam0));
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
		iVar4 = (iVar4 + func_173(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_172(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_172(float fParam0, float fParam1, float fParam2)//Position - 0x9864
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

int func_173(int iParam0, int iParam1)//Position - 0x98A6
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

int func_174(int iParam0)//Position - 0x9948
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_175(int iParam0)//Position - 0x995B
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_176(int iParam0)//Position - 0x996E
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_177(int iParam0)//Position - 0x9981
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_178(int iParam0)//Position - 0x9993
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_179(unk_0xFA30DFD0084E92FE(iParam0, 31), -1, 1)) + 2011;
}

int func_179(bool bParam0, int iParam1, int iParam2)//Position - 0x99B8
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_180(int iParam0)//Position - 0x99CF
{
	return iParam0 & 15;
}

int func_181(int iParam0, int iParam1)//Position - 0x99DC
{
	int iVar0;
	int iVar1;
	
	if (!func_189(iParam1) || !func_189(iParam0))
	{
		return 1;
	}
	iVar0 = func_178(iParam0);
	iVar1 = func_178(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_180(iParam0);
	iVar1 = func_180(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
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
	return 0;
}

int func_182()//Position - 0x9AE8
{
	var uVar0;
	
	func_188(&uVar0, unk_0xF40D00CD7B81C0A8());
	func_187(&uVar0, unk_0x7E09057438B9D216());
	func_186(&uVar0, unk_0x6E06C0DB9B43570D());
	func_185(&uVar0, unk_0xBE14F159908E4EE5());
	func_184(&uVar0, unk_0xDD6A91E47ED4D0CF());
	func_183(&uVar0, unk_0x4EEB3860BFC44B78());
	return uVar0;
}

void func_183(var uParam0, int iParam1)//Position - 0x9B2E
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

void func_184(var uParam0, int iParam1)//Position - 0x9BB4
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_185(var uParam0, int iParam1)//Position - 0x9BE7
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_180(*uParam0);
	iVar1 = func_178(*uParam0);
	if (iParam1 < 1 || iParam1 > func_173(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_186(var uParam0, int iParam1)//Position - 0x9C38
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_187(var uParam0, int iParam1)//Position - 0x9C72
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_188(var uParam0, int iParam1)//Position - 0x9CAD
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_189(int iParam0)//Position - 0x9CE9
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
	iVar0 = func_174(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_175(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_176(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_178(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_180(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_177(iParam0);
	if (iVar5 < 1 || iVar5 > func_173(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_190(int iParam0, int iParam1)//Position - 0x9DC5
{
	if (unk_0xFA30DFD0084E92FE(Global_19B04.f_6186.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_191(int iParam0)//Position - 0x9DE8
{
	int iVar0;
	
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				iVar0 = func_101();
				if (!func_24(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_199()) || Global_1974B) || Global_62BF) || func_198()) || func_76(8, -1)) || func_197()) || func_196()) || func_195()) || func_194()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1) || func_199()) || Global_62BF) || func_198()) || func_76(8, -1)) || func_195()) || func_197()) || func_196()) || func_194()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_199()) || Global_1974B) || Global_62BF) || func_198()) || func_76(8, -1)) || func_195()) || func_197()) || func_196()) || func_194()) || Global_19B04.f_1DEB.f_397[iVar0] == 5) || Global_8E64 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_199()) || Global_1974B) || Global_62BF) || func_198()) || func_76(8, -1)) || func_197()) || func_196()) || func_194()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_199() || unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0) || func_76(8, -1)) || func_194()) || func_193()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_76(8, -1) || func_197()) || func_196()) || func_193()) || func_192())
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
							if ((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || func_199()) || Global_62BF) || func_198()) || func_76(8, -1)) || func_196()) || func_195()) || func_194()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || !unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) || !unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F())) || !unk_0x726D9204B160D23E()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || func_199()) || func_196()) || Global_1974B) || Global_62BF) || func_198()) || Global_90C1) || func_76(8, -1)) || func_195()) || func_193()) || func_194()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || !unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) || !unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F())) || !unk_0x726D9204B160D23E()) || unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0)) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1)) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0x9273B3557334635D(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || func_199()) || Global_1974B) || Global_62BF) || func_198()) || func_76(8, -1)) || func_195()) || func_193()) || func_197()) || func_196()) || func_194())
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

var func_192()//Position - 0xA505
{
	return Global_16B42.f_1;
}

int func_193()//Position - 0xA513
{
	if (Global_15FA6 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_147B0[Global_15FA6 /*34*/].f_F, 13);
	}
	return 0;
}

int func_194()//Position - 0xA539
{
	if (unk_0xB731B8C5BCE89836(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_195()//Position - 0xA553
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

bool func_196()//Position - 0xA57D
{
	return Global_16B4F.f_142 > 0;
}

bool func_197()//Position - 0xA58E
{
	return Global_16B4F.f_141 > 0;
}

var func_198()//Position - 0xA59F
{
	return Global_140856;
}

int func_199()//Position - 0xA5AB
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		return Global_161D2.f_2C == 1;
	}
	return 0;
}

int func_200()//Position - 0xA5C7
{
	func_74();
	if (Global_C60[Global_389D /*2811*/][0 /*281*/].f_103 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_201(int iParam0)//Position - 0xA5EF
{
	return func_181(func_182(), iParam0);
}

int func_202(int iParam0, int iParam1, int iParam2)//Position - 0xA601
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_101();
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

int func_203(int iParam0)//Position - 0xA6E5
{
	if (!func_24(iParam0))
	{
		return 7;
	}
	return Global_19B04.f_1DEB.f_397[iParam0];
}

bool func_204(int iParam0)//Position - 0xA709
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_206())
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

int func_205()//Position - 0xA767
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

int func_206()//Position - 0xA7AB
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

void func_207()//Position - 0xA866
{
	int iVar0;
	
	if (iLocal_70)
	{
		func_221(0);
		if (Global_63AC)
		{
			unk_0x3857DADBD6EC8A54("AC_STOP");
		}
		func_220();
		unk_0xB830DBD32591E1BC();
		unk_0x0B26CF9D19F91B70(420.5f, -1387f, 28f, 427f, -1379f, 29f, 0);
		unk_0x3804D2422B37C701(unk_0xB5CEFD608600A09F());
		unk_0xDF53A66AEE1401AA(1f);
		func_96();
		if (iLocal_71)
		{
			unk_0x2CA123B0622F495C(iLocal_60);
			unk_0x2CA123B0622F495C(iLocal_56);
			unk_0x2CA123B0622F495C(iLocal_57);
			unk_0x8510BC031C24B862(iLocal_57, false);
		}
		iVar0 = 0;
		while (iVar0 < iLocal_50)
		{
			if (unk_0x724D816EA203A79E(iLocal_50[iVar0]))
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_50[iVar0]))
				{
					if (unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
					{
						unk_0xF90A8AD825CA2E0C(iLocal_50[iVar0], func_219(unk_0xB5CEFD608600A09F()), -1, 0, 0);
						unk_0x22321800954A532E(iLocal_50[iVar0], true);
						if (!unk_0x36CEFBE9B745A58D(iLocal_58))
						{
							unk_0xEE7131C3C73E7282(iLocal_58, -1);
							unk_0x22321800954A532E(iLocal_58, true);
						}
					}
					unk_0x2E35C4FA5F0ED22F(iLocal_50[iVar0], false);
				}
				unk_0x02537C8C1BEEB477(&(iLocal_50[iVar0]));
			}
			iVar0++;
		}
		if (unk_0x724D816EA203A79E(iLocal_58))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_58))
			{
				unk_0xC8FD3EBBB90E8D7F(iLocal_58, 317, true);
				if (unk_0xD45C08B05D4687A7(iLocal_58))
				{
					unk_0x57EB4CC8F1928A47(iLocal_58);
				}
				if (!unk_0x5237AF95232D78C5(iLocal_58, 0))
				{
					unk_0x9E410F8AFFC2894E(iLocal_58);
				}
				unk_0x2E35C4FA5F0ED22F(iLocal_58, false);
			}
			unk_0x02537C8C1BEEB477(&iLocal_58);
		}
		if (unk_0x724D816EA203A79E(iLocal_53))
		{
			unk_0x1E7A09C1710FB071(&iLocal_53);
		}
		unk_0xE85B33FB221A23CD(5, true);
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			if (!unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()))
			{
				unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
			}
		}
	}
	func_208(-1);
	unk_0x95E4B6F3ED223F5A();
}

void func_208(int iParam0)//Position - 0xA9F0
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_30();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_161())
	{
		func_212(iParam0);
		unk_0x3FF92BBF0607A406(0, 0);
		Global_19AFB = unk_0x105601648511CC64();
		func_211(30000);
		StringCopy(&cVar0, func_210(Global_19AF9, 1), 64);
		if (func_29(Global_19AF9) > 0)
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
	func_209(&Global_62F8);
	Global_19AFA = 0;
	func_164(-1);
}

void func_209(var uParam0)//Position - 0xAAA5
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

char* func_210(int iParam0, bool bParam1)//Position - 0xAAE2
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

void func_211(int iParam0)//Position - 0xAD2B
{
	Global_8E68 = (unk_0x105601648511CC64() + iParam0);
}

void func_212(int iParam0)//Position - 0xAD3D
{
	func_213(iParam0, 0, func_218(iParam0));
}

void func_213(int iParam0, int iParam1, int iParam2)//Position - 0xAD52
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_182();
	func_216(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_215(iParam0, &uVar0);
	Var1 = { func_214(&uVar0) };
}

struct<16> func_214(var uParam0)//Position - 0xAD81
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_176(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
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
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_177(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_180(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_178(*uParam0), 64);
	return Var0;
}

void func_215(int iParam0, var uParam1)//Position - 0xAE50
{
	Global_19B04.f_6186.f_2B[iParam0] = *uParam1;
}

void func_216(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xAE68
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_178(*uParam0);
	iVar1 = func_180(*uParam0);
	iVar2 = func_177(*uParam0);
	iVar3 = func_176(*uParam0);
	iVar4 = func_175(*uParam0);
	iVar5 = func_174(*uParam0);
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
	iVar6 = func_173(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_173(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_217(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_217(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xAFEA
{
	func_188(uParam0, iParam1);
	func_187(uParam0, iParam2);
	func_186(uParam0, iParam3);
	func_184(uParam0, iParam5);
	func_185(uParam0, iParam4);
	func_183(uParam0, iParam6);
}

int func_218(int iParam0)//Position - 0xB022
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

Vector3 func_219(int iParam0)//Position - 0xB1C5
{
	return unk_0x541C2AEF053615BC(unk_0xA95CF30C72EB526E(iParam0), false);
}

void func_220()//Position - 0xB1D8
{
	Global_63A8 = 0;
	Global_63A9 = 0;
	Global_63AB = 0;
	Global_63AC = 0;
	Global_63AD = 0;
}

void func_221(bool bParam0)//Position - 0xB1F4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 49)
	{
		func_138(iVar0, bParam0);
		iVar0++;
	}
}

