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
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = -1;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 1000;
	var uLocal_30 = 1000;
	var uLocal_31 = 0;
	char* sLocal_32 = NULL;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	float fLocal_37 = 0f;
	float fLocal_38 = 0f;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	float fLocal_43 = 0f;
	float fLocal_44 = 0f;
	float fLocal_45 = 0f;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 6;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
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
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	vector3 vLocal_83 = { 0f, 0f, 0f };
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
	int iLocal_96 = 0;
	vector3 vLocal_97 = { 0f, 0f, 0f };
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	float fLocal_107 = 0f;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	bool bLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	int iLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
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
#endregion

void __EntryFunction__()//Position - 0x0
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	vector3 vVar6;
	vector3 vVar7;
	
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
	sLocal_32 = "NULL";
	fLocal_33 = 0f;
	fLocal_37 = -0.0375f;
	fLocal_38 = 0.17f;
	iLocal_40 = 3;
	fLocal_43 = 80f;
	fLocal_44 = 140f;
	fLocal_45 = 180f;
	iLocal_51 = 1;
	iLocal_52 = 65;
	iLocal_53 = 49;
	iLocal_54 = 64;
	iLocal_77 = unk_0xD736C0AC62BF73AD();
	iLocal_78 = unk_0x880E0FAC08C6FA65();
	vLocal_83 = { 500f, 500f, 500f };
	iLocal_104 = -1;
	fLocal_107 = 0f;
	iLocal_113 = 1;
	bVar0 = false;
	iVar1 = 0;
	func_84(&(Global_19B04.f_4A7C), 4);
	func_84(&(Global_19B04.f_4A7C), 256);
	if (unk_0xE8A79675302ED812(82))
	{
		func_83();
	}
	func_82(16);
	while (true)
	{
		bVar0 = !func_81(0, 12);
		iVar2 = 0;
		if (bVar0 && iVar1 != 1)
		{
			iVar1 = 1;
		}
		if (iVar1 == 2)
		{
			if (func_80(9))
			{
				func_79(&iLocal_114);
				iVar1 = 1;
			}
		}
		switch (iVar1)
		{
			case 0:
				if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
				{
					iVar3 = func_78(unk_0xBC25C936A095B5BA());
					if ((iVar3 == 0 || iVar3 == 2) || iVar3 == 1)
					{
						func_77();
						if (!func_76(Global_19B04.f_4A7C, 64))
						{
							func_74(&(Global_19B04.f_4A7C), 64);
						}
						func_73(&uLocal_120);
						iVar1 = 1;
						func_71(&iLocal_114);
					}
				}
				iVar2 = 100;
				break;
			
			case 1:
				if (func_70(1))
				{
					iLocal_105 = unk_0x105601648511CC64();
				}
				if (!func_69() && !Global_15FAC)
				{
					if (iVar1 != 2)
					{
						if ((!unk_0x21EBACBD9FF28F79() && !bVar0) && !func_68(5))
						{
							func_65();
							if (func_64())
							{
								if (!iLocal_109)
								{
									if (func_62() == 2)
									{
										if (!func_76(Global_19B04.f_4A7C, 1))
										{
											switch (func_61("TC_H_TOODAMAGED"))
											{
												case 2:
													func_59("TC_H_TOODAMAGED", 1, 0, 1000, 10000, 7, 0, 0, 0);
													break;
												
												case 1:
													func_74(&(Global_19B04.f_4A7C), 1);
													break;
												}
										}
									}
									else
									{
										func_84(&(Global_19B04.f_4A7C), 1);
									}
									iLocal_109 = 1;
								}
								if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) != 0)
								{
									iLocal_102 = 0;
								}
								else if (bLocal_110)
								{
									if (!func_76(Global_19B04.f_4A7C, 16384))
									{
										switch (func_61("TC_ANOTHERJOB"))
										{
											case 2:
												func_59("TC_ANOTHERJOB", 1, 0, 1000, 10000, 7, 0, 0, 0);
												break;
											
											case 1:
												func_74(&(Global_19B04.f_4A7C), 16384);
												break;
											}
									}
								}
								else if (!func_76(Global_19B04.f_4A7C, 16))
								{
									if (!iLocal_112)
									{
										switch (func_61("TC_HOWTOSTART"))
										{
											case 2:
												func_59("TC_HOWTOSTART", 1, 0, 1000, 10000, 7, 0, 0, 0);
												break;
											
											case 1:
												iLocal_106 = unk_0x105601648511CC64();
												iLocal_112 = 1;
												if (func_58("TC_HOWTOSTART"))
												{
													Global_19B04.f_4A7C.f_16[15]++;
												}
												if (Global_19B04.f_4A7C.f_16[15] >= 5)
												{
													func_74(&(Global_19B04.f_4A7C), 16);
												}
												break;
											}
										}
								}
								if (unk_0x2DA8CA50A72528FB(iLocal_101))
								{
									unk_0x07B8ECB35A4ED3AC(&iLocal_101);
								}
								switch (iLocal_102)
								{
									case 0:
										if (func_62() == 0)
										{
											if (!func_57(&iLocal_114))
											{
												func_56(&iLocal_114);
											}
											if (func_57(&iLocal_117))
											{
												func_79(&iLocal_117);
											}
											if (func_53(&iLocal_114) > 20f)
											{
												if (!unk_0xF16DAFF595E80F7C() && func_52())
												{
													iLocal_103 = 9;
													StringCopy(&vLocal_97, "Taxi_Procedural", 24);
													func_51(&uLocal_120, 8, 0, "TaxiDispatch", 0, 1);
													func_50(&uLocal_120, "OJTXAUD", "OJTX_PRO_OFF", 2, 0, 0, 0);
													func_71(&iLocal_114);
													iLocal_102 = 1;
												}
												else if (!func_52())
												{
													if ((unk_0x105601648511CC64() % 1000) < 50)
													{
													}
												}
											}
										}
										break;
									
									case 1:
										if (!func_57(&iLocal_114))
										{
											func_56(&iLocal_114);
										}
										if (func_53(&iLocal_114) >= 6f)
										{
											switch (func_61("TC_JOBOFFERED"))
											{
												case 2:
													func_59("TC_JOBOFFERED", 1, 0, 1000, 10000, 7, 0, 0, 0);
													break;
												
												case 1:
													iLocal_108 = 1;
													func_71(&iLocal_114);
													iLocal_102 = 2;
													break;
											}
											if ((unk_0x105601648511CC64() % 1000) < 50)
											{
											}
										}
										break;
									
									case 2:
										if (!func_57(&iLocal_114))
										{
											func_56(&iLocal_114);
										}
										if (func_53(&iLocal_114) > 15f)
										{
											if (!func_76(Global_19B04.f_4A7C, 32))
											{
												func_49("TC_MISSEDJOB", -1);
												func_74(&(Global_19B04.f_4A7C), 32);
											}
											fLocal_107 = (unk_0x55AEFCD285ECC0F2(10f, 40f) + func_53(&iLocal_114));
											iLocal_102 = 3;
										}
										else if (iLocal_108)
										{
											if (func_53(&iLocal_114) > 6f)
											{
												iLocal_108 = 0;
												unk_0x7456702622C62EA0(1);
											}
										}
										break;
									
									case 3:
										if (!func_57(&iLocal_114))
										{
											func_56(&iLocal_114);
										}
										if (func_53(&iLocal_114) > fLocal_107)
										{
											func_79(&iLocal_114);
											iLocal_102 = 0;
										}
										break;
								}
								if (((unk_0x8FCEEB789599BD9B(0, 86) && !unk_0x8730A01B72F31307(unk_0xBC25C936A095B5BA())) && !Global_6354) && (unk_0x105601648511CC64() - iLocal_105) > 3000)
								{
									iVar4 = func_62();
									if (iVar4 == 0)
									{
										if (iLocal_102 == 0 || iLocal_102 == 3)
										{
											func_73(&uLocal_120);
											iLocal_103 = 9;
											func_33(iLocal_103, &vLocal_97, &uLocal_120, 0);
											iLocal_111 = 1;
											iVar1 = 4;
										}
										else
										{
											unk_0xEB233A3B7635D2AC();
											unk_0x7456702622C62EA0(1);
											if (!func_76(Global_19B04.f_4A7C, 128))
											{
												func_74(&(Global_19B04.f_4A7C), 128);
											}
											iVar1 = 4;
										}
										unk_0x63831D2D5110C305(&vLocal_97);
										func_79(&iLocal_114);
										iVar2 = 0;
									}
									else if (iVar4 == 2)
									{
										if (!unk_0xF16DAFF595E80F7C())
										{
											func_49("TXC_HEALTH_GONE", -1);
										}
									}
									else if (iVar4 == 3)
									{
										if (!unk_0xF16DAFF595E80F7C())
										{
											if (!func_58("TXC_WANTED_WARN"))
											{
												if (!func_76(Global_19B04.f_4A7C, 32768))
												{
													func_49("TXC_WANTED_WARN", -1);
													func_74(&(Global_19B04.f_4A7C), 32768);
												}
											}
										}
									}
								}
							}
							else
							{
								if (!func_57(&iLocal_117))
								{
									func_56(&iLocal_117);
								}
								else
								{
									if (func_53(&iLocal_117) < 10f)
									{
										if ((unk_0x105601648511CC64() % 1000) < 50)
										{
										}
									}
									if (func_53(&iLocal_117) > 10f && iLocal_102 != 0)
									{
										iLocal_102 = 0;
									}
								}
								if (func_32("TC_HOWTOSTART"))
								{
									func_28("TC_HOWTOSTART", 1);
								}
								if (func_32("TC_JOBOFFERED"))
								{
									func_28("TC_JOBOFFERED", 1);
								}
								if (func_32("TC_H_TOODAMAGED"))
								{
									func_28("TC_H_TOODAMAGED", 1);
								}
								if (func_32("TC_ANOTHERJOB"))
								{
									func_28("TC_ANOTHERJOB", 1);
								}
								if (((unk_0x105601648511CC64() - iLocal_106) > 60000 && !func_58("TC_HOWTOSTART")) && iLocal_112)
								{
									iLocal_112 = 0;
								}
								if (bLocal_110)
								{
									bLocal_110 = false;
								}
								iLocal_109 = 0;
								func_79(&iLocal_114);
							}
						}
					}
				}
				else if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) != 0)
				{
					iLocal_102 = 0;
				}
				break;
			
			case 4:
				if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
				{
					unk_0xF016335942DE0BD5(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 1);
				}
				if (unk_0xACE95AD318CE412B(&vLocal_97))
				{
					iVar5 = func_24(&iLocal_104, 2, 9, 0, 0);
					if (iVar5 == 1)
					{
						Global_19753 = 1;
						if (iLocal_111)
						{
							iVar1 = 5;
						}
						else
						{
							iVar1 = 7;
						}
						iVar2 = 0;
					}
					else if (iVar5 == 0)
					{
						iLocal_102 = 0;
						iVar1 = 11;
					}
					else
					{
						func_23("PROCESS_TAXI_DBG_SKIP = Scene is loading.", &iLocal_113, 1000);
					}
				}
				break;
			
			case 5:
				StringCopy(&vVar6, "OJTX_PLRDE1", 24);
				func_22(&vVar6, 1);
				func_50(&uLocal_120, "OJTXAUD", &vVar6, 8, 0, 0, 0);
				iVar1 = 6;
				break;
			
			case 6:
				if (!func_21())
				{
					func_50(&uLocal_120, "OJTXAUD", "OJTX_DIS_JOB", 8, 0, 0, 0);
					iVar1 = 7;
				}
				break;
			
			case 7:
				if (!func_21())
				{
					StringCopy(&vVar7, "OJTX_ACCEPT", 24);
					func_22(&vVar7, 1);
					func_73(&uLocal_120);
					func_50(&uLocal_120, "OJTXAUD", &vVar7, 8, 0, 0, 0);
					iVar1 = 8;
				}
				break;
			
			case 8:
				if (func_64())
				{
					if (!func_21())
					{
						bLocal_110 = false;
						if (func_32("TC_HOWTOSTART"))
						{
							func_28("TC_HOWTOSTART", 1);
						}
						iLocal_96 = SYSTEM::START_NEW_SCRIPT(&vLocal_97, 23500);
						unk_0x91DEC7187FA01089(&vLocal_97);
						if (!func_76(Global_19B04.f_4A7C, 4))
						{
							func_74(&(Global_19B04.f_4A7C), 4);
							unk_0x8510BC031C24B862(func_20(), 1);
						}
						func_74(&(Global_19B04.f_4A7C), 256);
						StringCopy(&vLocal_97, "", 24);
						iLocal_111 = 0;
						iVar1 = 10;
						iLocal_102 = 0;
					}
				}
				else
				{
					if (func_21())
					{
						func_18();
					}
					bLocal_110 = false;
					iLocal_111 = 0;
					unk_0x91DEC7187FA01089(&vLocal_97);
					func_74(&(Global_19B04.f_4A7C), 256);
					StringCopy(&vLocal_97, "", 24);
					iLocal_102 = 0;
					iVar1 = 10;
				}
				break;
			
			case 10:
				if (!unk_0x3C406FC829C1E14A(iLocal_96))
				{
					func_84(&(Global_19B04.f_4A7C), 2048);
					if (func_76(Global_19B04.f_4A7C, 4))
					{
						func_84(&(Global_19B04.f_4A7C), 4);
						unk_0x8510BC031C24B862(func_20(), 0);
					}
					Global_19753 = 0;
					iLocal_103 = -1;
					iVar1 = 11;
					iVar2 = 0;
				}
				else if (func_76(Global_19B04.f_4A7C, 1024))
				{
					func_84(&(Global_19B04.f_4A7C), 1024);
					func_11(func_17(iLocal_103), 0, 0);
					bLocal_110 = true;
					func_9(iLocal_103, bLocal_110);
					func_8(1, 0);
					func_5();
				}
				break;
			
			case 11:
				if (func_76(Global_19B04.f_4A7C, 256))
				{
					func_84(&(Global_19B04.f_4A7C), 256);
					func_4(&iLocal_104);
				}
				iLocal_104 = -1;
				if (!func_3())
				{
					func_8(0, 0);
					func_2();
					StringCopy(&vLocal_97, "", 24);
					if (iLocal_96 != 0)
					{
						if (unk_0x3C406FC829C1E14A(iLocal_96))
						{
							unk_0xF0E09454E4A8BA71(iLocal_96);
							iLocal_96 = 0;
						}
					}
					func_79(&iLocal_114);
					func_1(0);
					iLocal_102 = 0;
					iVar1 = 1;
					iVar2 = 0;
				}
				break;
			
			case 12:
				func_83();
				break;
			
			default:
				func_83();
				break;
		}
		SYSTEM::WAIT(iVar2);
	}
}

void func_1(int iParam0)//Position - 0x9D6
{
	Global_11646 = iParam0;
	Global_11647 = iParam0;
}

void func_2()//Position - 0x9EA
{
	vector3 vVar0[24];
	
	if (unk_0xA76D65C63ED50F67() || unk_0xF49912B78E2591B6())
	{
		unk_0xCEFBE636B33A557B(StackVal, 0, 0, 0);
	}
	else if (unk_0x3E9993F328985CCB() || unk_0xF7E138CFA19B55E7())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		unk_0x785F3AE9C51AE93D(0, &cVar0);
	}
}

bool func_3()//Position - 0xA2C
{
	return Global_16B42.f_1;
}

void func_4(int iParam0)//Position - 0xA3A
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_8C1B)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_8C1A = 0;
	Global_8C1C = 0;
	Global_8C41 = 15;
	Global_DA9C = 0;
	Global_DA9D = 0;
}

void func_5()//Position - 0xA77
{
	func_6();
}

int func_6()//Position - 0xA84
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

bool func_7(bool bParam0)//Position - 0xACF
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_1163A, 0);
}

void func_8(int iParam0, int iParam1)//Position - 0xAFA
{
	Global_16B42.f_7 = iParam0;
	Global_16B42.f_8 = iParam1;
}

void func_9(int iParam0, bool bParam1)//Position - 0xB12
{
	func_10();
	if (bParam1)
	{
		Global_19B04.f_4A7C.f_1[iParam0 /*2*/] = 1;
		Global_19B04.f_4A7C.f_1[iParam0 /*2*/].f_1 = 0;
	}
	else
	{
		Global_19B04.f_4A7C.f_1[iParam0 /*2*/] = 0;
		Global_19B04.f_4A7C.f_1[iParam0 /*2*/].f_1 = 1;
	}
}

void func_10()//Position - 0xB62
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_19B04.f_4A7C.f_1[iVar0 /*2*/].f_1 = 0;
		iVar0++;
	}
}

void func_11(int iParam0, int iParam1, int iParam2)//Position - 0xB8D
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
		func_15((891 + iParam0), 1, -1, 1);
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
		func_12();
	}
}

void func_12()//Position - 0xC75
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
		func_14(13, SYSTEM::FLOOR(Global_19B04.f_27B5.f_F0D));
	}
	if (!unk_0xF9BFA43C1BAFD016())
	{
		if (!Global_11542)
		{
			if (func_13() == 2 == 0 && !unk_0x7AF0088ABFA713B6())
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

int func_13()//Position - 0x1136
{
	return Global_62BD;
}

int func_14(int iParam0, int iParam1)//Position - 0x1141
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

int func_15(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x1192
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
		iParam2 = func_16();
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

int func_16()//Position - 0x16AA
{
	return Global_1407E0;
}

int func_17(int iParam0)//Position - 0x16B6
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

void func_18()//Position - 0x174C
{
	Global_394A = 0;
	func_19();
}

void func_19()//Position - 0x175C
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

int func_20()//Position - 0x17B3
{
	return joaat("taxi");
}

int func_21()//Position - 0x17C0
{
	if (Global_3DB8 != 0 || unk_0xE6711F601F11B66B())
	{
		return 1;
	}
	return 0;
}

void func_22(char* sParam0, bool bParam1)//Position - 0x17E2
{
	int iVar0;
	
	iVar0 = func_78(unk_0xBC25C936A095B5BA());
	if (iVar0 == 0)
	{
		if (bParam1)
		{
			StringConCat(sParam0, "M", 24);
		}
		else
		{
			StringConCat(sParam0, "_2", 24);
		}
	}
	else if (iVar0 == 2)
	{
		if (bParam1)
		{
			StringConCat(sParam0, "T", 24);
		}
		else
		{
			StringConCat(sParam0, "_3", 24);
		}
	}
	else if (iVar0 == 1)
	{
		if (bParam1)
		{
			StringConCat(sParam0, "F", 24);
		}
		else
		{
			StringConCat(sParam0, "_4", 24);
		}
	}
}

void func_23(char* sParam0, int iParam1, int iParam2)//Position - 0x1854
{
	if (unk_0x105601648511CC64() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = unk_0x105601648511CC64();
}

int func_24(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x1873
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
		if (func_80(0))
		{
			return 0;
		}
		Global_8C1D++;
		*iParam0 = Global_8C1D;
		unk_0x3D7FF8418367D451(unk_0xFC1CAE18F3ECBF2D(), 0);
		Global_4336.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x27CBA62D1F6DF074(8);
		}
		Global_8C41 = iParam2;
		Global_8C1B = *iParam0;
		Global_8C1C = iParam4;
		Global_8C1A = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_8C1A > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_8C1A)
			{
				if (Global_8C20[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_8C1B == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_26(iParam2))
		{
			return 0;
		}
		if (Global_8C1A == 8)
		{
			return 0;
		}
		Global_8C1D++;
		*iParam0 = Global_8C1D;
		Global_8C20[Global_8C1A /*4*/] = Global_8C1D;
		Global_8C20[Global_8C1A /*4*/].f_1 = iParam1;
		Global_8C20[Global_8C1A /*4*/].f_2 = iParam2;
		Global_8C20[Global_8C1A /*4*/].f_3 = 0;
		Global_8C1A++;
		if (iParam4 != 0)
		{
			func_25(iParam0, iParam4);
		}
	}
	return 2;
}

void func_25(var uParam0, int iParam1)//Position - 0x19AA
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

bool func_26(int iParam0)//Position - 0x19F9
{
	return func_27(iParam0, Global_8C41);
}

int func_27(int iParam0, int iParam1)//Position - 0x1A0A
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

void func_28(char* sParam0, int iParam1)//Position - 0x1BEB
{
	int iVar0;
	int iVar1;
	
	if (Global_195B4 && iParam1)
	{
		if (func_58(sParam0) && !unk_0x5ECDC4E2F3BFF708())
		{
			unk_0x7456702622C62EA0(0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_19B04.f_4F9D.f_91)
	{
		if (unk_0x3362CDE8460ED38B(sParam0, &(Global_19B04.f_4F9D[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_19B04.f_4F9D.f_91 - 2))
			{
				func_31(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_30((Global_19B04.f_4F9D.f_91 - 1));
			Global_19B04.f_4F9D.f_91 = (Global_19B04.f_4F9D.f_91 - 1);
			func_29();
			return;
		}
		iVar0++;
	}
}

void func_29()//Position - 0x1C98
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

void func_30(int iParam0)//Position - 0x1DB8
{
	StringCopy(&(Global_19B04.f_4F9D[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_19B04.f_4F9D[iParam0 /*16*/].f_4), "", 16);
	Global_19B04.f_4F9D[iParam0 /*16*/].f_8 = 0;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_9 = 0;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_B = 0;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_A = -1;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_C = 0;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_D = 0;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_E = 0;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_F = 0;
}

void func_31(int iParam0, int iParam1)//Position - 0x1E52
{
	Global_19B04.f_4F9D[iParam0 /*16*/] = { Global_19B04.f_4F9D[iParam1 /*16*/] };
	Global_19B04.f_4F9D[iParam0 /*16*/].f_4 = { Global_19B04.f_4F9D[iParam1 /*16*/].f_4 };
	Global_19B04.f_4F9D[iParam0 /*16*/].f_8 = Global_19B04.f_4F9D[iParam1 /*16*/].f_8;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_A = Global_19B04.f_4F9D[iParam1 /*16*/].f_A;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_9 = Global_19B04.f_4F9D[iParam1 /*16*/].f_9;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_B = Global_19B04.f_4F9D[iParam1 /*16*/].f_B;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_C = Global_19B04.f_4F9D[iParam1 /*16*/].f_C;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_D = Global_19B04.f_4F9D[iParam1 /*16*/].f_D;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_E = Global_19B04.f_4F9D[iParam1 /*16*/].f_E;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_F = Global_19B04.f_4F9D[iParam1 /*16*/].f_F;
}

int func_32(char* sParam0)//Position - 0x1F62
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_19B04.f_4F9D.f_91)
	{
		if (unk_0x3362CDE8460ED38B(sParam0, &(Global_19B04.f_4F9D[iVar0 /*16*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_33(int iParam0, char* sParam1, var uParam2, bool bParam3)//Position - 0x1F9D
{
	struct<6> Var0;
	vector3 vVar1[24];
	
	if (iParam0 == 0)
	{
		StringCopy(sParam1, "Taxi_NeedExcitement", 24);
	}
	else if (iParam0 == 1)
	{
		StringCopy(sParam1, "Taxi_TakeItEasy", 24);
	}
	else if (iParam0 == 2)
	{
		StringCopy(sParam1, "Taxi_Deadline", 24);
	}
	else if (iParam0 == 3)
	{
		StringCopy(sParam1, "Taxi_GotYourBack", 24);
	}
	else if (iParam0 == 4)
	{
		StringCopy(sParam1, "Taxi_TakeToBest", 24);
	}
	else if (iParam0 == 5)
	{
		StringCopy(sParam1, "Taxi_CutYouIn", 24);
	}
	else if (iParam0 == 6)
	{
		StringCopy(sParam1, "Taxi_GotYouNow", 24);
	}
	else if (iParam0 == 7)
	{
		StringCopy(sParam1, "Taxi_ClownCar", 24);
	}
	else if (iParam0 == 8)
	{
		StringCopy(sParam1, "Taxi_FollowCar", 24);
	}
	else if (iParam0 == 9)
	{
		StringCopy(sParam1, "Taxi_Procedural", 24);
	}
	if (bParam3)
	{
		StringCopy(&Var0, func_48(iParam0), 24);
		cVar1 = { Var0 };
		StringConCat(&cVar1, "_1", 24);
		func_73(uParam2);
		func_34(uParam2, "OJTXAUD", &Var0, &cVar1, 8, 0, 0);
	}
}

int func_34(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x2087
{
	func_47(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_35(sParam2, iParam4, 0);
}

int func_35(char* sParam0, int iParam1, bool bParam2)//Position - 0x20DB
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
					func_19();
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
		if (func_46(8, -1))
		{
			return 0;
		}
		Global_3E04 = { Global_3DFE };
		func_45();
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
				func_40();
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
				if (func_39())
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
			if (func_38())
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
			func_37();
			Global_3DC2 = bParam2;
		}
		Global_3DBA = iParam1;
		StringCopy(&Global_3C3B, sParam0, 24);
		Global_394A = 0;
		func_36();
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
		func_19();
	}
	return 0;
}

void func_36()//Position - 0x23A7
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

void func_37()//Position - 0x23D8
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

int func_38()//Position - 0x246D
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_39()//Position - 0x2494
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

void func_40()//Position - 0x252D
{
	if (func_68(14))
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
		Global_389D = func_41();
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

var func_41()//Position - 0x25CF
{
	func_42();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_42()//Position - 0x25E8
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_44(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_78(unk_0xBC25C936A095B5BA());
			if (func_43(iVar0) && (!func_68(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_43(Global_19B04.f_932.f_21B.f_10CD))
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

bool func_43(int iParam0)//Position - 0x26E5
{
	return iParam0 < 3;
}

int func_44(int iParam0)//Position - 0x26F1
{
	if (func_43(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_45()//Position - 0x271B
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

bool func_46(int iParam0, int iParam1)//Position - 0x2772
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

void func_47(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x27AD
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

char* func_48(int iParam0)//Position - 0x2803
{
	if (iParam0 == 0)
	{
		return "OJTX_EXC_OFF";
	}
	else if (iParam0 == 1)
	{
		return "OJTX_TIE_OFF";
	}
	else if (iParam0 == 2)
	{
		return "OJTX_DL_OFF";
	}
	else if (iParam0 == 3)
	{
		return "OJTX_GB_OFF";
	}
	else if (iParam0 == 4)
	{
		return "OJTX_TB_OFF";
	}
	else if (iParam0 == 5)
	{
		return "OJTX_CI_OFF";
	}
	else if (iParam0 == 6)
	{
		return "OJTX_GN_OFF";
	}
	else if (iParam0 == 7)
	{
		return "OJTX_CC_OFF";
	}
	else if (iParam0 == 8)
	{
		return "OJTX_FC_OFF";
	}
	else if (iParam0 == 9)
	{
		return "OJTX_PRO_OFF";
	}
	return "";
}

void func_49(char* sParam0, int iParam1)//Position - 0x28AC
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, true, iParam1);
}

int func_50(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x28C3
{
	func_47(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_35(sParam2, iParam3, 0);
}

void func_51(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x2911
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

int func_52()//Position - 0x29AC
{
	int iVar0;
	
	iVar0 = unk_0x105601648511CC64();
	if (Global_3DB8 == 0)
	{
		if ((iVar0 - Global_41B6) > 3000)
		{
			if (unk_0xE6711F601F11B66B() == 0)
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
	return 0;
}

float func_53(int iParam0)//Position - 0x29EB
{
	if (func_57(iParam0))
	{
		if (func_55(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_54(unk_0xFA30DFD0084E92FE(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_54(bool bParam0)//Position - 0x2A2A
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

bool func_55(int iParam0)//Position - 0x2A82
{
	return unk_0xFA30DFD0084E92FE(*iParam0, 2);
}

void func_56(int iParam0)//Position - 0x2A92
{
	if (!func_57(iParam0))
	{
		func_71(iParam0);
	}
}

bool func_57(int iParam0)//Position - 0x2AAA
{
	return unk_0xFA30DFD0084E92FE(*iParam0, 1);
}

int func_58(char* sParam0)//Position - 0x2ABA
{
	unk_0xF07D20149ECBC61E(sParam0);
	return unk_0xA66DBDA0A072514A(0);
}

void func_59(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x2ACD
{
	func_60(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_60(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x2AEE
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

int func_61(char* sParam0)//Position - 0x2CC1
{
	if (unk_0x3362CDE8460ED38B(sParam0, &Global_195B7))
	{
		return 1;
	}
	if (func_32(sParam0))
	{
		return 0;
	}
	return 2;
}

int func_62()//Position - 0x2CE8
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_64())
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
		iVar1 = SYSTEM::ROUND(unk_0x77F5C030D3238E26(iVar0));
		iVar2 = unk_0x8D66276473ABD7CC(iVar0);
		if (iVar1 < 100 || iVar2 < 100)
		{
			return 2;
		}
		if (!func_63(iVar0))
		{
			return 2;
		}
		if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0)
		{
			return 3;
		}
	}
	return 0;
}

int func_63(int iParam0)//Position - 0x2D54
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

int func_64()//Position - 0x2E10
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

void func_65()//Position - 0x2E67
{
	if (!func_76(Global_19B04.f_4A7C, 8192))
	{
		if (func_64())
		{
			func_74(&(Global_19B04.f_4A7C), 8192);
			func_67();
		}
	}
	else if (!func_64())
	{
		func_84(&(Global_19B04.f_4A7C), 8192);
		func_66();
	}
}

void func_66()//Position - 0x2EB7
{
	int iVar0;
	
	iVar0 = unk_0x3E12B546F3F2597A();
	if (unk_0xE59B7F5A03335350(iVar0, 0))
	{
		unk_0xF2C27FE5A8B98CB5(-1, "Radio_Off", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_67()//Position - 0x2EE0
{
	int iVar0;
	
	iVar0 = unk_0x3E12B546F3F2597A();
	if (unk_0xE59B7F5A03335350(iVar0, 0))
	{
		unk_0xF2C27FE5A8B98CB5(-1, "Radio_On", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

bool func_68(int iParam0)//Position - 0x2F09
{
	return Global_8C41 == iParam0;
}

int func_69()//Position - 0x2F17
{
	if (Global_8C41 == 15)
	{
		return 0;
	}
	return 1;
}

int func_70(bool bParam0)//Position - 0x2F2C
{
	if (Global_4336.f_82)
	{
		return 0;
	}
	if (unk_0x093484B35A948BFC(0, 19) || (!bParam0 && unk_0xCB3E71B7B7FACCAF(0, 19)))
	{
		return 1;
	}
	if (unk_0x8ACB0C3FACC09467())
	{
		if (unk_0x093484B35A948BFC(0, 166))
		{
			if ((!unk_0x8FCEEB789599BD9B(0, 167) && !unk_0x8FCEEB789599BD9B(0, 168)) && !unk_0x8FCEEB789599BD9B(0, 169))
			{
				return 1;
			}
		}
		else if (unk_0x093484B35A948BFC(0, 167))
		{
			if ((!unk_0x8FCEEB789599BD9B(0, 166) && !unk_0x8FCEEB789599BD9B(0, 168)) && !unk_0x8FCEEB789599BD9B(0, 169))
			{
				return 1;
			}
		}
		else if (unk_0x093484B35A948BFC(0, 168))
		{
			if ((!unk_0x8FCEEB789599BD9B(0, 166) && !unk_0x8FCEEB789599BD9B(0, 167)) && !unk_0x8FCEEB789599BD9B(0, 169))
			{
				return 1;
			}
		}
		else if (unk_0x093484B35A948BFC(0, 169))
		{
			if ((!unk_0x8FCEEB789599BD9B(0, 166) && !unk_0x8FCEEB789599BD9B(0, 167)) && !unk_0x8FCEEB789599BD9B(0, 168))
			{
				return 1;
			}
		}
		if (!bParam0)
		{
			if (unk_0xCB3E71B7B7FACCAF(0, 166))
			{
				if ((!unk_0xD3C4A010282C31F2(0, 167) && !unk_0xD3C4A010282C31F2(0, 168)) && !unk_0xD3C4A010282C31F2(0, 169))
				{
					return 1;
				}
			}
			else if (unk_0xCB3E71B7B7FACCAF(0, 167))
			{
				if ((!unk_0xD3C4A010282C31F2(0, 166) && !unk_0xD3C4A010282C31F2(0, 168)) && !unk_0xD3C4A010282C31F2(0, 169))
				{
					return 1;
				}
			}
			else if (unk_0xCB3E71B7B7FACCAF(0, 168))
			{
				if ((!unk_0xD3C4A010282C31F2(0, 166) && !unk_0xD3C4A010282C31F2(0, 167)) && !unk_0xD3C4A010282C31F2(0, 169))
				{
					return 1;
				}
			}
			else if (unk_0xCB3E71B7B7FACCAF(0, 169))
			{
				if ((!unk_0xD3C4A010282C31F2(0, 166) && !unk_0xD3C4A010282C31F2(0, 167)) && !unk_0xD3C4A010282C31F2(0, 168))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_71(int iParam0)//Position - 0x311E
{
	func_72(iParam0, 0f);
}

void func_72(int iParam0, float fParam1)//Position - 0x312D
{
	iParam0->f_1 = (func_54(unk_0xFA30DFD0084E92FE(*iParam0, 4)) - fParam1);
	unk_0xF0059F27F7BB6680(iParam0, 1);
	unk_0x7CB6FD92BE491AD9(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_73(var uParam0)//Position - 0x315B
{
	int iVar0;
	char cVar1[64];
	
	iVar0 = func_78(unk_0xBC25C936A095B5BA());
	if (iVar0 == 0)
	{
		func_51(uParam0, 0, unk_0xBC25C936A095B5BA(), "MICHAEL", 0, 1);
	}
	else if (iVar0 == 2)
	{
		func_51(uParam0, 0, unk_0xBC25C936A095B5BA(), "TREVOR", 0, 1);
	}
	else if (iVar0 == 1)
	{
		func_51(uParam0, 0, unk_0xBC25C936A095B5BA(), "FRANKLIN", 0, 1);
	}
	else
	{
		func_51(uParam0, 0, unk_0xBC25C936A095B5BA(), "MICHAEL", 0, 1);
		StringCopy(&cVar1, "Invalid enum passed to Taxi dialogue is: ", 64);
		StringIntConCat(&cVar1, iVar0, 64);
	}
	func_51(uParam0, 8, 0, "TaxiDispatch", 0, 1);
}

void func_74(var uParam0, int iParam1)//Position - 0x31E8
{
	func_75(uParam0, iParam1);
}

void func_75(var uParam0, var uParam1)//Position - 0x31F8
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_76(var uParam0, int iParam1)//Position - 0x3209
{
	return (uParam0 && iParam1) != 0;
}

void func_77()//Position - 0x3218
{
	int iVar0;
	
	if (func_76(Global_19B04.f_4A7C, 2048))
	{
		iVar0 = 0;
		while (iVar0 <= (10 - 1))
		{
			Global_19B04.f_4A7C.f_1[0 /*2*/] = 0;
			Global_19B04.f_4A7C.f_1[0 /*2*/].f_1 = 0;
			iVar0++;
		}
	}
}

int func_78(int iParam0)//Position - 0x3262
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_44(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

void func_79(int iParam0)//Position - 0x329F
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

int func_80(int iParam0)//Position - 0x32B5
{
	if (Global_8C41 == 15)
	{
		return 0;
	}
	if (func_26(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_81(int iParam0, int iParam1)//Position - 0x32D7
{
	bool bVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	bVar0 = unk_0xFA30DFD0084E92FE(Global_19B04.f_2360.f_63.f_DB[iParam0], iParam1);
	return bVar0;
}

int func_82(int iParam0)//Position - 0x3324
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0xFA30DFD0084E92FE(Global_19B04.f_2360.f_63.f_DB[iVar0], iVar1))
	{
		return 0;
	}
	unk_0xF0059F27F7BB6680(&(Global_19B04.f_2360.f_63.f_DB[iVar0]), iVar1);
	return 1;
}

void func_83()//Position - 0x337E
{
	if (func_76(Global_19B04.f_4A7C, 4))
	{
		func_84(&(Global_19B04.f_4A7C), 4);
		unk_0x8510BC031C24B862(func_20(), 0);
	}
	if (func_76(Global_19B04.f_4A7C, 256))
	{
		func_84(&(Global_19B04.f_4A7C), 256);
		func_4(&iLocal_104);
	}
	if (iLocal_96 != 0)
	{
		if (unk_0x3C406FC829C1E14A(iLocal_96))
		{
			unk_0xF0E09454E4A8BA71(iLocal_96);
			iLocal_96 = 0;
		}
	}
	if (unk_0x5D29F91E567588E2(&vLocal_97) != 0)
	{
		unk_0x91DEC7187FA01089(&vLocal_97);
	}
	if (unk_0x2DA8CA50A72528FB(iLocal_101))
	{
		unk_0x07B8ECB35A4ED3AC(&iLocal_101);
	}
	unk_0x95E4B6F3ED223F5A();
}

void func_84(var uParam0, int iParam1)//Position - 0x340A
{
	func_85(uParam0, iParam1);
}

void func_85(var uParam0, var uParam1)//Position - 0x341A
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

