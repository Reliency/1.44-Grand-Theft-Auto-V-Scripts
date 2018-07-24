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
	int iLocal_43 = 0;
	vector3 vLocal_44 = { 0f, 0f, 0f };
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	struct<15> Local_50[14];
	struct<15> Local_51 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_52 = 0;
	vector3 vLocal_53 = { 0f, 0f, 0f };
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	var uLocal_59[5] = { 0, 0, 0, 0, 0 };
	int iLocal_60[5] = { 0, 0, 0, 0, 0 };
	int iLocal_61 = 0;
	int iLocal_62[5] = { 0, 0, 0, 0, 0 };
	int iLocal_63 = 0;
	var uLocal_64 = 0;
	float fLocal_65 = 0f;
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
	vector3 vLocal_77 = { 0f, 0f, 0f };
	vector3 vLocal_78 = { 0f, 0f, 0f };
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	var uLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	var uLocal_90 = 0;
	bool bLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	float fLocal_94 = 0f;
	float fLocal_95 = 0f;
	var uLocal_96 = 16;
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
	int iLocal_261 = 0;
	char* sLocal_262 = NULL;
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	char* sLocal_267[22] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	struct<2> Local_277 = { 0, 5 } ;
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
	var uLocal_293 = 5;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
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
	vLocal_77 = { 0f, 0f, 0f };
	vLocal_78 = { 0f, 0f, 0f };
	sLocal_262 = "RANDOM@BUS_TOUR_GUIDE@IDLE_A";
	iLocal_264 = 524459;
	iLocal_265 = 40;
	iLocal_273 = 7500;
	vLocal_53 = { ScriptParam_277.f_1[0 /*3*/] };
	if (unk_0xE8A79675302ED812(11))
	{
		if (unk_0xE59B7F5A03335350(iLocal_63, 0))
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_63, 0))
				{
					unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), unk_0xA4455714F3DCE207(iLocal_63, 2.5f, 1.5f, 0f), 1, false, 0, 1);
					unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), unk_0x349C94FFF43E2979(iLocal_63));
					unk_0x8941EA87BBF38C6F(unk_0xBC25C936A095B5BA(), 1);
					unk_0xC1300D0F3A74E20B("RE_BUS_TOUR_SCENE");
					unk_0x38E412DB4A45B900(iLocal_63, 0);
				}
			}
		}
		func_219();
	}
	if (!func_218())
	{
		unk_0x95E4B6F3ED223F5A();
	}
	if (func_185(vLocal_53, 2, 0, 1, 0))
	{
		func_182(-1);
	}
	else
	{
		unk_0x95E4B6F3ED223F5A();
	}
	func_180();
	func_179();
	while (true)
	{
		func_178();
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			unk_0x6A095EC1C9AF12A4(unk_0xB5CEFD608600A09F());
		}
		switch (iLocal_69)
		{
			case 0:
				if (unk_0x684B06333594F9EA())
				{
					if (func_218())
					{
						switch (iLocal_46)
						{
							case 0:
								func_174();
								break;
							
							case 1:
								if (unk_0xE59B7F5A03335350(iLocal_63, 0))
								{
									if (unk_0x36CEFBE9B745A58D(iLocal_57) || unk_0x36CEFBE9B745A58D(iLocal_58))
									{
										func_219();
									}
									else
									{
										iLocal_69 = 1;
									}
								}
								break;
						}
					}
					else
					{
						func_219();
					}
				}
				else
				{
					func_219();
				}
				break;
			
			case 1:
				if (unk_0xE59B7F5A03335350(iLocal_63, 0))
				{
					func_1();
				}
				else
				{
					func_219();
				}
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x208
{
	func_173();
	func_172();
	func_171();
	func_170();
	switch (iLocal_47)
	{
		case 0:
			func_116();
			break;
		
		case 1:
			func_84();
			break;
		
		case 2:
			func_83();
			func_2();
			break;
	}
}

void func_2()//Position - 0x252
{
	char cVar0[64];
	
	StringCopy(&cVar0, "curiCurrentRambler ", 64);
	StringIntConCat(&cVar0, iLocal_261, 64);
	StringConCat(&cVar0, " ", 64);
	StringIntConCat(&cVar0, iLocal_52, 64);
	unk_0xD4E50AEC04C3A55A(&cVar0, 0.02f, 0.5f, 0f, 0, 0, 255, 255);
	unk_0xBBC4195AD74D153D(0, 68, 1);
	unk_0xBBC4195AD74D153D(0, 99, 1);
	unk_0xBBC4195AD74D153D(0, 1, 1);
	unk_0xBBC4195AD74D153D(0, 2, 1);
	if (!unk_0x36CEFBE9B745A58D(iLocal_58) && !unk_0x36CEFBE9B745A58D(iLocal_57))
	{
		if (iLocal_268)
		{
			if (!func_82())
			{
				if (iLocal_261 < 14)
				{
					func_81(&uLocal_96, "BUSTOAU", "BUSTO_RAMB", sLocal_267[iLocal_261], 4, 0, 0);
				}
				func_219();
			}
		}
		else if (!func_80())
		{
			unk_0x82BD2E9769751DCD();
			unk_0x4E0EC60D119222B1(2);
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				if (!unk_0x25EF720B1CAB1E23(unk_0xBC25C936A095B5BA(), iLocal_63) && iLocal_52 + 1 < 13)
				{
					func_219();
				}
			}
			if (!iLocal_74)
			{
				if (SYSTEM::TIMERA() > 12000)
				{
					func_78();
				}
			}
			else
			{
				unk_0xD4E50AEC04C3A55A("At_Point_Of_Interest TRUE", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
			}
			func_39();
			func_27();
			func_21(0);
			if (func_20(iLocal_63))
			{
				iLocal_73 = 1;
			}
			unk_0x14137149076C8055(iLocal_63);
		}
		else
		{
			func_3(&uLocal_96, "BUSTOAU", "BUSTO_THANK", "BUSTO_THANK_7", 4, 0, 0);
			unk_0xD421BC740C5340C3(iLocal_63, 3);
			unk_0x8300C56586249382(iLocal_63, 0);
			iLocal_268 = 1;
		}
	}
	else
	{
		func_219();
	}
}

int func_3(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x3B8
{
	func_19(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_4(sParam2, iParam4, 0);
}

int func_4(char* sParam0, int iParam1, bool bParam2)//Position - 0x40C
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
					func_18();
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
		if (func_17(8, -1))
		{
			return 0;
		}
		Global_3E04 = { Global_3DFE };
		func_16();
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
				func_9();
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
				if (func_8())
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
			if (func_7())
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
			func_6();
			Global_3DC2 = bParam2;
		}
		Global_3DBA = iParam1;
		StringCopy(&Global_3C3B, sParam0, 24);
		Global_394A = 0;
		func_5();
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
		func_18();
	}
	return 0;
}

void func_5()//Position - 0x6D8
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

void func_6()//Position - 0x709
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

int func_7()//Position - 0x79E
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_8()//Position - 0x7C5
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

void func_9()//Position - 0x85E
{
	if (func_15(14))
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
		Global_389D = func_10();
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

int func_10()//Position - 0x900
{
	func_11();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_11()//Position - 0x919
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_14(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_13(unk_0xBC25C936A095B5BA());
			if (func_12(iVar0) && (!func_15(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_12(Global_19B04.f_932.f_21B.f_10CD))
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

bool func_12(int iParam0)//Position - 0xA16
{
	return iParam0 < 3;
}

int func_13(int iParam0)//Position - 0xA22
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_14(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_14(int iParam0)//Position - 0xA5F
{
	if (func_12(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_15(int iParam0)//Position - 0xA89
{
	return Global_8C41 == iParam0;
}

void func_16()//Position - 0xA97
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

bool func_17(int iParam0, int iParam1)//Position - 0xAEE
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

void func_18()//Position - 0xB29
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

void func_19(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0xB80
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

int func_20(int iParam0)//Position - 0xBD6
{
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		if ((unk_0xBCDD4514E5CAE591(iParam0, 0, 7000) || unk_0xBCDD4514E5CAE591(iParam0, 1, 7000)) || unk_0xBCDD4514E5CAE591(iParam0, 2, 7000))
		{
			return 1;
		}
	}
	return 0;
}

void func_21(bool bParam0)//Position - 0xC1A
{
	if (!bParam0)
	{
		if (unk_0x694514BD37EC4E94(2, 225))
		{
			if (iLocal_76)
			{
				iLocal_76 = 0;
				unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 256);
				unk_0xD2640EE7BD20D483(1);
			}
			else
			{
				iLocal_76 = 1;
				unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 0);
				unk_0xD2640EE7BD20D483(0);
			}
		}
	}
	if (iLocal_76 && !Local_50[13 /*15*/].f_9)
	{
		if (unk_0xBFFAD293E2DA992B())
		{
			unk_0xF04F2EB4128A4367(0);
		}
		func_24();
	}
	else if (iLocal_74)
	{
		if (unk_0xEF0E25DA0CB6E8FF(iLocal_81))
		{
			unk_0x4EC087603E1DEF9C(iLocal_81, 0);
			unk_0x062C9995BFD27B2A(false, false, 0, 1, 0, 0);
			unk_0xDC078F87049ECECE(unk_0xBC25C936A095B5BA(), true, 0);
			func_22(Local_50[iLocal_52 /*15*/].f_4, Local_50[iLocal_52 /*15*/].f_7);
		}
	}
	else if (unk_0xEF0E25DA0CB6E8FF(iLocal_81))
	{
		unk_0x4EC087603E1DEF9C(iLocal_81, 0);
		unk_0x062C9995BFD27B2A(false, false, 0, 1, 0, 0);
		unk_0xDC078F87049ECECE(unk_0xBC25C936A095B5BA(), true, 0);
	}
}

void func_22(vector3 vParam0, int iParam1)//Position - 0xCF7
{
	if (unk_0xE59B7F5A03335350(iLocal_63, 0))
	{
		if (!unk_0xEF0E25DA0CB6E8FF(iLocal_81) && !unk_0xBFFAD293E2DA992B())
		{
			if (!unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), Local_51.f_4, 12f, 12f, 12f, false, true, 0))
			{
				unk_0x7EA10E956229CFA8(vParam0, iParam1, 3000, 3000, 0);
				func_23(vParam0);
				iLocal_71 = unk_0x105601648511CC64();
			}
		}
		if (!unk_0x36CEFBE9B745A58D(iLocal_57))
		{
			unk_0xE36D78F8D1781255(iLocal_57, 3f);
		}
		iLocal_74 = 1;
	}
}

void func_23(vector3 vParam0)//Position - 0xD7B
{
	int iVar0;
	int iVar1;
	
	iLocal_61 = unk_0x105601648511CC64();
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		iVar1 = unk_0x491B2241281A03B7(6000, 16000);
		unk_0x4BED3C9D6EF14C38(unk_0xBC25C936A095B5BA(), vParam0, iVar1, 0, 2);
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!unk_0x36CEFBE9B745A58D(uLocal_59[iVar0]))
		{
			iVar1 = unk_0x491B2241281A03B7(6000, 16000);
			iLocal_60[iVar0] = unk_0x491B2241281A03B7(0, 2000);
			iLocal_62[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_24()//Position - 0xDF6
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	fVar1 = 70f;
	fVar2 = -20f;
	fVar3 = 42f;
	fVar4 = -89f;
	fVar5 = 69f;
	fVar6 = 4f;
	vVar7 = { 0.2f, 0.9f, -0.15f };
	if (unk_0xEF0E25DA0CB6E8FF(iLocal_81))
	{
		if (unk_0x50465D2C022B9E04(2))
		{
			fVar6 = 8f;
		}
		else
		{
			fVar6 = 4f;
		}
		func_26();
		iVar8 = SYSTEM::FLOOR((unk_0x4C25B6CE9D0B3C92(2, 218) * 127f));
		iVar9 = SYSTEM::FLOOR((unk_0x4C25B6CE9D0B3C92(2, 219) * 127f));
		iVar10 = SYSTEM::FLOOR((unk_0x4C25B6CE9D0B3C92(2, 220) * 127f));
		iVar11 = SYSTEM::FLOOR((unk_0x4C25B6CE9D0B3C92(2, 221) * 127f));
		if (!unk_0xF31C9BB6C94E205D())
		{
			iVar9 = (iVar9 * -1);
			iVar11 = (iVar11 * -1);
		}
		if ((iVar11 > 28 || iVar11 < -28) || unk_0x50465D2C022B9E04(2))
		{
			fVar0 = SYSTEM::TO_FLOAT(iVar11);
			fVar0 = (fVar0 * fVar0);
			fVar0 = (fVar0 / (SYSTEM::TO_FLOAT(100) * SYSTEM::TO_FLOAT(100)));
			fVar0 = (fVar0 * fVar6);
			if (iVar11 < 0)
			{
				fVar0 = (fVar0 * -1f);
			}
			fLocal_95 = (fLocal_95 + fVar0);
			if (fLocal_95 < fVar2)
			{
				fLocal_95 = fVar2;
			}
			if (fLocal_95 > fVar3)
			{
				fLocal_95 = fVar3;
			}
		}
		if ((iVar10 > 28 || iVar10 < -28) || unk_0x50465D2C022B9E04(2))
		{
			fVar0 = SYSTEM::TO_FLOAT(iVar10);
			fVar0 = (fVar0 * fVar0);
			fVar0 = (fVar0 / (SYSTEM::TO_FLOAT(100) * SYSTEM::TO_FLOAT(100)));
			fVar0 = (fVar0 * fVar6);
			if (iVar10 > 0)
			{
				fVar0 = (fVar0 * -1f);
			}
			fLocal_94 = (fLocal_94 + fVar0);
			if (fLocal_94 < fVar4)
			{
				fLocal_94 = fVar4;
			}
			if (fLocal_94 > fVar5)
			{
				fLocal_94 = fVar5;
			}
		}
		if ((iVar9 > 28 || iVar9 < -28) || unk_0x50465D2C022B9E04(2))
		{
			fVar0 = SYSTEM::TO_FLOAT(iVar9);
			fVar0 = (fVar0 * fVar0);
			fVar0 = (fVar0 / (SYSTEM::TO_FLOAT(100) * SYSTEM::TO_FLOAT(100)));
			fVar0 = (fVar0 * fVar6);
			if (iVar9 < 0)
			{
				fVar0 = (fVar0 * -1f);
			}
			fLocal_95 = (fLocal_95 + fVar0);
			if (fLocal_95 < fVar2)
			{
				fLocal_95 = fVar2;
			}
			if (fLocal_95 > fVar3)
			{
				fLocal_95 = fVar3;
			}
		}
		if ((iVar8 > 28 || iVar8 < -28) || unk_0x50465D2C022B9E04(2))
		{
			fVar0 = SYSTEM::TO_FLOAT(iVar8);
			fVar0 = (fVar0 * fVar0);
			fVar0 = (fVar0 / (SYSTEM::TO_FLOAT(100) * SYSTEM::TO_FLOAT(100)));
			fVar0 = (fVar0 * fVar6);
			if (iVar8 > 0)
			{
				fVar0 = (fVar0 * -1f);
			}
			fLocal_94 = (fLocal_94 + fVar0);
			if (fLocal_94 < fVar4)
			{
				fLocal_94 = fVar4;
			}
			if (fLocal_94 > fVar5)
			{
				fLocal_94 = fVar5;
			}
		}
		func_25(unk_0xBC25C936A095B5BA(), &iLocal_81, fLocal_95, 0f, fLocal_94);
		unk_0x9DF315A9EFFF87AC(iLocal_81, fVar1);
		unk_0x5BB58B645F7051F4(iLocal_81, unk_0xBC25C936A095B5BA(), vVar7.x, (vVar7.y - 1f), (vVar7.z + 1f), 1);
	}
	else
	{
		iLocal_81 = unk_0x578D5D08EC980893("DEFAULT_SCRIPTED_CAMERA", true);
		unk_0x5BB58B645F7051F4(iLocal_81, unk_0xBC25C936A095B5BA(), vVar7.x, (vVar7.y - 1f), (vVar7.z + 1f), 1);
		unk_0x97AD4F1D22AEA4FC(iLocal_81, 0.01f);
		fLocal_94 = -70f;
		fLocal_95 = 3f;
		func_25(unk_0xBC25C936A095B5BA(), &iLocal_81, fLocal_95, 0f, fLocal_94);
		unk_0x9DF315A9EFFF87AC(iLocal_81, fVar1);
		unk_0xDC078F87049ECECE(unk_0xBC25C936A095B5BA(), false, 0);
		unk_0x062C9995BFD27B2A(true, false, 2000, 1, 0, 0);
	}
}

void func_25(int iParam0, int iParam1, vector3 vParam2)//Position - 0x1140
{
	float fVar0;
	vector3 vVar1;
	
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (unk_0xEF0E25DA0CB6E8FF(*iParam1))
		{
			fVar0 = unk_0x349C94FFF43E2979(iParam0);
			vVar1.x = 0f;
			vVar1.y = 0f;
			vVar1.z = fVar0;
			vVar1 = { vVar1 + vParam2 };
			unk_0x3553F2A72957724E(*iParam1, vVar1.x, vVar1.y, vVar1.z, 2);
		}
	}
}

void func_26()//Position - 0x1191
{
	vector3 vVar0;
	int iVar1;
	
	if (!unk_0x36CEFBE9B745A58D(uLocal_59[2]))
	{
		if (unk_0xF4FCC3C1048FF2AB(uLocal_59[2], -880529684) == 7)
		{
			if (unk_0x105601648511CC64() > iLocal_89 + 8000)
			{
				unk_0x8941EA87BBF38C6F(uLocal_59[2], 0);
				vVar0 = { unk_0xA4455714F3DCE207(uLocal_59[2], unk_0x55AEFCD285ECC0F2(0f, 2f), unk_0x55AEFCD285ECC0F2(0f, 2f), 0.5f) };
				iVar1 = unk_0x491B2241281A03B7(1000, 6000);
				unk_0x4BED3C9D6EF14C38(uLocal_59[2], vVar0, iVar1, 2049, 2);
				iLocal_89 = unk_0x105601648511CC64();
			}
		}
	}
}

void func_27()//Position - 0x1218
{
	int iVar0;
	
	iVar0 = iLocal_52 + 1;
	if (!iLocal_92 && unk_0x726D9204B160D23E())
	{
		unk_0x1A52075550F42C09("Tour_help", 0);
	}
	if (iVar0 < 14)
	{
		if (unk_0x694514BD37EC4E94(2, 223) || iLocal_73 == 1)
		{
			if (unk_0x726D9204B160D23E())
			{
				if (unk_0xE59B7F5A03335350(iLocal_63, 0))
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_57))
					{
						if (!Local_50[iVar0 /*15*/].f_E && !Local_50[iVar0 /*15*/].f_9)
						{
							SYSTEM::SETTIMERA(0);
							Local_50[iLocal_52 /*15*/].f_9 = 1;
							func_30(Local_50[iVar0 /*15*/].f_A, Local_50[iVar0 /*15*/].f_D);
							func_29();
							if (iVar0 == 13)
							{
								iLocal_92 = 1;
								func_28();
							}
							Local_50[iVar0 /*15*/].f_E = 1;
							iLocal_52 = iVar0;
						}
						iLocal_73 = 0;
					}
				}
			}
		}
	}
}

void func_28()//Position - 0x12DC
{
	if (unk_0xE59B7F5A03335350(iLocal_63, 0))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_57))
		{
			unk_0xA4E856A8CD53B8DF(iLocal_57);
			unk_0xC5A6DFE2B8987B17(&iLocal_79);
			unk_0x509F549022512095(0, iLocal_63, 120.8878f, 239.3244f, 106.5131f, 3f, 0, joaat("tourbus"), iLocal_264, 5f, 15f);
			unk_0x509F549022512095(0, iLocal_63, Local_51.f_1, 3f, 0, joaat("tourbus"), iLocal_264, 3f, 15f);
			unk_0x535008C596714F9E(iLocal_79);
			unk_0xA8E6405305C0D7DF(iLocal_57, iLocal_79);
			unk_0x02DAF06EA4F08219(&iLocal_79);
		}
	}
}

void func_29()//Position - 0x1366
{
	Global_394A = 0;
	func_18();
}

void func_30(vector3 vParam0, float fParam1)//Position - 0x1376
{
	int iVar0;
	
	iVar0 = iLocal_52 + 1;
	unk_0xD6423910AAD8A379("RE_BUS_TOUR_FADE_OUT_WORLD");
	unk_0x7A41D32A383895D8(1000);
	while (!unk_0x17FAADF9916EF741())
	{
		unk_0x82BD2E9769751DCD();
		unk_0x4E0EC60D119222B1(2);
		if (!unk_0xE59B7F5A03335350(iLocal_63, 0))
		{
			func_219();
		}
		if (unk_0x36CEFBE9B745A58D(iLocal_57))
		{
			func_219();
		}
		SYSTEM::WAIT(0);
	}
	if (unk_0xBFFAD293E2DA992B())
	{
		unk_0xF04F2EB4128A4367(1);
	}
	unk_0xF3F01A78937DC905(0f);
	if (!unk_0x36CEFBE9B745A58D(iLocal_57))
	{
		unk_0xA4E856A8CD53B8DF(iLocal_57);
	}
	if (unk_0xE59B7F5A03335350(iLocal_63, 0))
	{
		unk_0xEDAD35A0D81ED3FB(vParam0.x, vParam0.y, vParam0.z, 5f, 0, 0, 0, 0, false, 0);
		unk_0x641B19E156645A92(iLocal_63, vParam0.x, vParam0.y, vParam0.z, 1, false, 0, 1);
		unk_0x019CE76D5286C95C(iLocal_63, fParam1);
		unk_0xA4DFFFD5B234240D(iLocal_63, 0f);
		unk_0x509F549022512095(iLocal_57, iLocal_63, unk_0x541C2AEF053615BC(iLocal_63, true), 0f, 0, joaat("tourbus"), iLocal_264, 5f, 15f);
		func_33(vParam0, 1112014848, 12, 5000, 0, 0);
	}
	if (unk_0xE59B7F5A03335350(iLocal_63, 0))
	{
		unk_0xF0A40F19AAB79E88(iLocal_63, 1084227584);
		unk_0x2D655AA68FA1736B(iLocal_63, true, true, 0);
		if (iVar0 < 13)
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_57))
			{
				unk_0x509F549022512095(iLocal_57, iLocal_63, Local_50[iVar0 /*15*/].f_1, Local_50[iVar0 /*15*/].f_8, 0, joaat("tourbus"), iLocal_264, 5f, 15f);
			}
		}
		else if (!unk_0x36CEFBE9B745A58D(iLocal_57))
		{
			unk_0x509F549022512095(iLocal_57, iLocal_63, Local_51.f_1, Local_50[iVar0 /*15*/].f_8, 0, joaat("tourbus"), iLocal_264, 5f, 15f);
		}
		unk_0xA4DFFFD5B234240D(iLocal_63, 8f);
	}
	func_31();
	unk_0xAEEF3183457D51DF(3);
	iLocal_48 = 3;
	func_21(1);
	unk_0xC1300D0F3A74E20B("RE_BUS_TOUR_FADE_OUT_WORLD");
	unk_0x829FA4611BD56B44(1000);
	while (unk_0x26641E1BFD792DBC())
	{
		unk_0x82BD2E9769751DCD();
		unk_0x4E0EC60D119222B1(2);
		func_21(1);
		SYSTEM::WAIT(0);
	}
	unk_0x82BD2E9769751DCD();
	unk_0x4E0EC60D119222B1(2);
	func_21(1);
}

void func_31()//Position - 0x1555
{
	Global_394A = 0;
	func_32();
}

void func_32()//Position - 0x1565
{
	unk_0x5C7DC611411E2CF9();
	Global_41AB = 0;
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x1E08809A5041F85B(false);
		Global_3DB8 = 6;
	}
}

void func_33(vector3 vParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x1586
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0xFC8E0C97C4F70062(vParam0, iParam1, iParam2, 127);
	if (unk_0x4EF7F52E5396B43C(iVar0))
	{
		iVar1 = (unk_0x105601648511CC64() + iParam3);
		while (!unk_0x75727AF9B92F13B9(iVar0) && unk_0x105601648511CC64() < iVar1)
		{
			if (bParam5)
			{
				func_35(0);
			}
			if (bParam4)
			{
				func_34();
			}
			SYSTEM::WAIT(0);
		}
		if (unk_0x105601648511CC64() < iVar1)
		{
		}
		unk_0xFD35AC7E0C27D42B(iVar0);
	}
}

void func_34()//Position - 0x15F6
{
	Global_4336.f_6 = 1;
}

void func_35(int iParam0)//Position - 0x1604
{
	if (!Global_389D.f_1 == 1)
	{
		if (func_38(0))
		{
			func_36(iParam0);
		}
		unk_0xF0059F27F7BB6680(&Global_93C, 2);
	}
}

void func_36(int iParam0)//Position - 0x162D
{
	if (Global_3943)
	{
		func_37(0, 0);
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
	if (!func_7())
	{
		Global_389D.f_1 = 3;
	}
}

void func_37(bool bParam0, bool bParam1)//Position - 0x169D
{
	if (bParam0)
	{
		if (func_38(0))
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

int func_38(int iParam0)//Position - 0x1711
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

void func_39()//Position - 0x176B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = iLocal_52 + 1;
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		switch (iLocal_48)
		{
			case 0:
				if (!iLocal_92)
				{
					if (Local_50[12 /*15*/].f_9 || Local_50[13 /*15*/].f_E)
					{
						iLocal_92 = 1;
					}
				}
				iVar0 = 0;
				while (iVar0 < 14)
				{
					if (!Local_50[iVar0 /*15*/].f_9)
					{
						if (iVar0 == 13)
						{
							if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), Local_50[iVar0 /*15*/].f_1, 30f, 30f, 15f, false, true, 0))
							{
								if (Local_50[12 /*15*/].f_9)
								{
									Local_50[13 /*15*/].f_9 = 1;
									iLocal_71 = unk_0x105601648511CC64();
									iLocal_48 = 2;
								}
							}
						}
						else if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), Local_50[iVar0 /*15*/].f_1, 40f, 40f, 12f, false, true, 0))
						{
							if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_63, 0))
							{
								func_22(Local_50[iVar0 /*15*/].f_4, Local_50[iVar0 /*15*/].f_7);
								iLocal_52 = iVar0;
								if (iLocal_75)
								{
									iLocal_75 = 0;
								}
								func_29();
								iLocal_48 = 1;
							}
							else
							{
								iLocal_48 = 3;
							}
						}
					}
					iVar0++;
				}
				break;
			
			case 1:
				func_22(Local_50[iLocal_52 /*15*/].f_4, Local_50[iLocal_52 /*15*/].f_7);
				iLocal_70 = unk_0x105601648511CC64();
				if (unk_0xE59B7F5A03335350(iLocal_63, 0))
				{
					if (iVar1 <= 13)
					{
						func_77(unk_0x541C2AEF053615BC(iLocal_63, true), Local_50[iVar1 /*15*/].f_1, &vLocal_77, &vLocal_78, 500);
					}
					if (unk_0x37718415CE714A5B(vLocal_77.x, vLocal_77.y, vLocal_78.x, vLocal_78.y))
					{
						if ((iLocal_70 - iLocal_71) > 0)
						{
							if (func_76(&uLocal_96, "BUSTOAU", Local_50[iLocal_52 /*15*/], 4, 0, 0, 0))
							{
								if (iVar1 <= 13)
								{
									if (iVar1 == 11)
									{
										unk_0xC5A6DFE2B8987B17(&iVar2);
										unk_0x509F549022512095(0, iLocal_63, -100.461f, -206.1412f, 44.4215f, Local_50[iVar1 /*15*/].f_8, 0, joaat("tourbus"), iLocal_264, 4f, 15f);
										unk_0x509F549022512095(0, iLocal_63, Local_50[iVar1 /*15*/].f_1, Local_50[iVar1 /*15*/].f_8, 0, joaat("tourbus"), iLocal_264, 4f, 15f);
										unk_0x535008C596714F9E(iVar2);
										unk_0xA8E6405305C0D7DF(iLocal_57, iVar2);
										unk_0x02DAF06EA4F08219(&iVar2);
									}
									else
									{
										unk_0x509F549022512095(iLocal_57, iLocal_63, Local_50[iVar1 /*15*/].f_1, Local_50[iVar1 /*15*/].f_8, 0, joaat("tourbus"), iLocal_264, 4f, 15f);
									}
								}
								iLocal_71 = unk_0x105601648511CC64();
								Local_50[iLocal_52 /*15*/].f_E = 1;
								Local_50[iLocal_52 /*15*/].f_9 = 1;
								iLocal_48 = 3;
							}
						}
					}
				}
				break;
			
			case 2:
				if (func_41())
				{
					iLocal_48 = 3;
				}
				break;
			
			case 3:
				iLocal_70 = unk_0x105601648511CC64();
				func_40(Local_50[iLocal_52 /*15*/].f_4);
				if ((iLocal_70 - iLocal_71) > 5000)
				{
					if (!func_82())
					{
						iLocal_74 = 0;
						iLocal_71 = unk_0x105601648511CC64();
						if (unk_0xBFFAD293E2DA992B())
						{
							unk_0xF04F2EB4128A4367(1);
						}
						if (Local_50[13 /*15*/].f_9 == 1)
						{
							iLocal_48 = 4;
						}
						else
						{
							if (!unk_0x36CEFBE9B745A58D(iLocal_57))
							{
								unk_0xE36D78F8D1781255(iLocal_57, 15f);
							}
							iLocal_48 = 0;
						}
					}
				}
				break;
			
			case 4:
				func_219();
				break;
			}
	}
}

void func_40(vector3 vParam0)//Position - 0x1A8C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((unk_0x105601648511CC64() - iLocal_61) > iLocal_60[iVar0] && iLocal_62[iVar0] == 0)
		{
			if (!unk_0x1D403DFADBC2DE3C(uLocal_59[iVar0], 0))
			{
				unk_0x4BED3C9D6EF14C38(uLocal_59[iVar0], vParam0, 20000, 2050, 4);
			}
			iLocal_62[iVar0] = 1;
		}
		iVar0++;
	}
}

int func_41()//Position - 0x1AF5
{
	float fVar0[5];
	vector3 vVar1[5];
	
	if (func_74(1000))
	{
		iLocal_86 = 3;
	}
	iLocal_269 = 1;
	switch (iLocal_86)
	{
		case 0:
			if (unk_0xEF0E25DA0CB6E8FF(iLocal_81))
			{
				unk_0x4EC087603E1DEF9C(iLocal_81, 0);
				unk_0xDC078F87049ECECE(unk_0xBC25C936A095B5BA(), true, 0);
			}
			func_66(1, 1, 1, 0, 0);
			unk_0x40E44AA6E6C56BCA(1);
			unk_0x43F06392C4EF25E0(false);
			unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 0);
			unk_0xD2640EE7BD20D483(1);
			iLocal_82 = unk_0x6B8F797EEC7B95E2("DEFAULT_SCRIPTED_CAMERA", 93.8459f, 251.8829f, 110.4535f, 23.0883f, 0.101f, -61.7699f, 40f, 1, 2);
			iLocal_83 = unk_0x6B8F797EEC7B95E2("DEFAULT_SCRIPTED_CAMERA", 97.0995f, 249.7653f, 109.0195f, -3f, 0f, -91.5944f, 50f, 1, 2);
			unk_0x348665177DBFB93B(iLocal_82, true);
			unk_0x062C9995BFD27B2A(true, false, 3000, 1, 0, 0);
			unk_0xAE099C1ADC89C331(iLocal_83, iLocal_82, 17000, 1, 1);
			func_76(&uLocal_96, "BUSTOAU", "BUSTO_THANK", 4, 0, 0, 0);
			unk_0x641B19E156645A92(iLocal_63, Local_51.f_1, 1, false, 0, 1);
			unk_0x019CE76D5286C95C(iLocal_63, Local_51.f_D);
			unk_0xF0A40F19AAB79E88(iLocal_63, 1084227584);
			unk_0xD421BC740C5340C3(iLocal_63, 3);
			if (!unk_0x36CEFBE9B745A58D(iLocal_57))
			{
				unk_0xA4E856A8CD53B8DF(iLocal_57);
				unk_0xE36D78F8D1781255(iLocal_57, 0f);
				unk_0xC5A6DFE2B8987B17(&iLocal_79);
				unk_0x194CCBD594974E0D(0, iLocal_63, 24, 10000);
				unk_0x535008C596714F9E(iLocal_79);
				unk_0xA8E6405305C0D7DF(iLocal_57, iLocal_79);
				unk_0x02DAF06EA4F08219(&iLocal_79);
			}
			unk_0x49D46EE47C9CCB66(unk_0xBC25C936A095B5BA());
			unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), 101.4382f, 250.0447f, 107.2579f, 1, false, 0, 1);
			unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), 268.4057f);
			unk_0x2EB4D46478766D87(unk_0xBC25C936A095B5BA(), 0, 0);
			unk_0xDC078F87049ECECE(unk_0xBC25C936A095B5BA(), true, 0);
			iLocal_74 = 1;
			iLocal_71 = unk_0x105601648511CC64();
			iLocal_86 = 1;
			break;
		
		case 1:
			iLocal_70 = unk_0x105601648511CC64();
			if ((iLocal_70 - iLocal_71) > 3000)
			{
				unk_0x49D46EE47C9CCB66(unk_0xBC25C936A095B5BA());
				unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), 101.4382f, 250.0447f, 107.2579f, 1, false, 0, 1);
				unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), 268.4057f);
				unk_0x2EB4D46478766D87(unk_0xBC25C936A095B5BA(), 0, 0);
				unk_0xDC078F87049ECECE(unk_0xBC25C936A095B5BA(), true, 0);
				vVar1[0 /*3*/] = { 105.1253f, 247.7461f, 107.1111f };
				vVar1[1 /*3*/] = { 109.2535f, 247.9478f, 107.0121f };
				vVar1[2 /*3*/] = { 110.3568f, 249.2771f, 107.0133f };
				vVar1[3 /*3*/] = { 104.8579f, 251.0388f, 107.1858f };
				vVar1[4 /*3*/] = { 105.4064f, 248.0866f, 107.1104f };
				fVar0[0] = 269.6692f;
				fVar0[1] = 283.6581f;
				fVar0[2] = 278.7632f;
				fVar0[3] = 228.5865f;
				fVar0[4] = 263.4406f;
				iLocal_88 = 0;
				while (iLocal_88 < 5)
				{
					if (unk_0x724D816EA203A79E(uLocal_59[iLocal_88]))
					{
						if (!unk_0x36CEFBE9B745A58D(uLocal_59[iLocal_88]))
						{
							unk_0x49D46EE47C9CCB66(uLocal_59[iLocal_88]);
							unk_0x019CE76D5286C95C(uLocal_59[iLocal_88], fVar0[iLocal_88]);
							unk_0x641B19E156645A92(uLocal_59[iLocal_88], vVar1[iLocal_88 /*3*/], 1, false, 0, 1);
							unk_0x8CE2798B9A7027EC(uLocal_59[iLocal_88], 1193033728, 0);
						}
					}
					iLocal_88++;
				}
				iLocal_71 = unk_0x105601648511CC64();
				iLocal_86 = 2;
			}
			break;
		
		case 2:
			iLocal_70 = unk_0x105601648511CC64();
			if ((iLocal_70 - iLocal_71) > 13000)
			{
				iLocal_86 = 3;
			}
			break;
		
		case 3:
			unk_0x348665177DBFB93B(iLocal_82, false);
			unk_0x062C9995BFD27B2A(false, true, 3000, 0, 0, 0);
			unk_0xF3F01A78937DC905(0f);
			unk_0x4EC087603E1DEF9C(iLocal_82, 0);
			unk_0x4EC087603E1DEF9C(iLocal_83, 0);
			unk_0x40E44AA6E6C56BCA(0);
			unk_0x43F06392C4EF25E0(true);
			func_66(0, 1, 1, 0, 0);
			unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
			iLocal_71 = 10000;
			func_42();
			return 1;
			break;
	}
	return 0;
}

void func_42()//Position - 0x1ECD
{
	func_46(-1, 0);
	func_43();
	func_219();
}

void func_43()//Position - 0x1EE3
{
	func_44();
}

int func_44()//Position - 0x1EF0
{
	if (func_45(0))
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

bool func_45(bool bParam0)//Position - 0x1F3B
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_1163A, 0);
}

void func_46(int iParam0, int iParam1)//Position - 0x1F66
{
	if (iParam0 == -1)
	{
		iParam0 = func_64();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_63(iParam0))
	{
		func_62(iParam0, iParam1);
		if (!func_61(51))
		{
			func_57("RE_REWARD", 1, 0, 4000, 10000, func_60(), 0, 138, 0);
			func_56(51);
		}
		if (func_55(iParam0))
		{
			Global_19B04.f_6186.f_2 = 3;
		}
		if (func_54(iParam0, iParam1) != 322)
		{
			func_48(func_54(iParam0, iParam1), vLocal_44.x, vLocal_44.y);
		}
		Global_19AF8 = iParam1;
		if (Global_19AF6 == 0)
		{
			if (((Global_19AF9 == 1 || Global_19AF9 == 5) || Global_19AF9 == 11) || Global_19AF9 == 25)
			{
				func_47(2);
			}
			else if ((Global_19AF9 == 26 || Global_19AF9 == 8) || Global_19AF9 == 17)
			{
				func_47(7);
			}
			else
			{
				func_47(1);
			}
		}
	}
}

void func_47(int iParam0)//Position - 0x2069
{
	Global_19AF6 = iParam0;
}

void func_48(int iParam0, var uParam1, var uParam2)//Position - 0x2077
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
		func_52((891 + iParam0), 1, -1, 1);
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
		func_49();
	}
}

void func_49()//Position - 0x215F
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
		func_51(13, SYSTEM::FLOOR(Global_19B04.f_27B5.f_F0D));
	}
	if (!unk_0xF9BFA43C1BAFD016())
	{
		if (!Global_11542)
		{
			if (func_50() == 2 == 0 && !unk_0x7AF0088ABFA713B6())
			{
				if (unk_0x670C0C6C780A3F84())
				{
					Global_199FA = 0;
				}
				if (!Global_DA9F)
				{
					func_44();
				}
			}
		}
	}
}

int func_50()//Position - 0x2620
{
	return Global_62BD;
}

int func_51(int iParam0, int iParam1)//Position - 0x262B
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

int func_52(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x267C
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
		iParam2 = func_53();
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

int func_53()//Position - 0x2B91
{
	return Global_1407E0;
}

int func_54(int iParam0, int iParam1)//Position - 0x2B9D
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

int func_55(int iParam0)//Position - 0x2F11
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

void func_56(int iParam0)//Position - 0x2F40
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

void func_57(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x2F82
{
	func_58(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_58(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x2FA3
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
		func_59();
	}
}

void func_59()//Position - 0x3176
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

int func_60()//Position - 0x3296
{
	func_11();
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

int func_61(int iParam0)//Position - 0x32DC
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

void func_62(int iParam0, int iParam1)//Position - 0x331F
{
	unk_0xF0059F27F7BB6680(&(Global_19B04.f_6186.f_8[iParam0]), iParam1);
}

int func_63(int iParam0)//Position - 0x333A
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

int func_64()//Position - 0x33EB
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x1377080E9B0BD993(), 64);
	uVar1 = func_65(Var0);
	return uVar1;
}

int func_65(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x3408
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

void func_66(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x35E2
{
	if (bParam0)
	{
		unk_0x0D2E9062E966BE4F(unk_0xB5CEFD608600A09F());
		unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 1);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 1);
		func_73(1);
		unk_0x32FF237D69EB5489();
		unk_0x3169E2C5E6A096BC();
		if (Global_389D.f_1 > 3)
		{
			if (unk_0x58E7DDFF8D17A82A())
			{
				unk_0x1E08809A5041F85B(false);
			}
			if (!func_7())
			{
				Global_389D.f_1 = 3;
			}
			Global_3DB8 = 5;
		}
		func_72(1, iParam3, iParam2, 0);
		Global_DAA5 = 1;
		Global_10ABB = 1;
		Global_11540 = 1;
	}
	else
	{
		func_73(0);
		unk_0xCB50D125C355ED9C();
		Global_DAA5 = 0;
		if (bParam1)
		{
			unk_0x7FF4F08CAB3344B1();
		}
		unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 0);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 0);
		func_72(0, iParam3, iParam2, 0);
		if (unk_0x7AF0088ABFA713B6())
		{
			if ((((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_70(unk_0xB5CEFD608600A09F())) && !func_68(unk_0xB5CEFD608600A09F(), 0)) && !func_67()) && !bParam4)
			{
				unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), false);
			}
		}
		else if ((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_70(unk_0xB5CEFD608600A09F())) && !bParam4)
		{
			unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), false);
		}
		Global_11540 = 0;
	}
}

bool func_67()//Position - 0x370B
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_27.f_12, 14);
}

bool func_68(int iParam0, int iParam1)//Position - 0x3728
{
	bool bVar0;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		bVar0 = func_69(-1, 0) == 8;
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

int func_69(int iParam0, bool bParam1)//Position - 0x3773
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_53();
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

int func_70(int iParam0)//Position - 0x37B4
{
	if (func_68(iParam0, 0))
	{
		return 1;
	}
	if (func_71())
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

bool func_71()//Position - 0x37F6
{
	return unk_0xFA30DFD0084E92FE(Global_240006, 3);
}

int func_72(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x3807
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

void func_73(int iParam0)//Position - 0x383A
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

int func_74(int iParam0)//Position - 0x385D
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
			if (func_75())
			{
				Global_1B = unk_0x105601648511CC64();
				return 1;
			}
		}
	}
	return 0;
}

int func_75()//Position - 0x38A7
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

bool func_76(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x38D9
{
	func_19(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_4(sParam2, iParam3, 0);
}

void func_77(struct<2> Param0, float fParam1, struct<2> Param2, var uParam3, float fParam4, float fParam5, int iParam6)//Position - 0x3927
{
	if (!iLocal_75)
	{
		if (Param2 <= Param0)
		{
			*fParam4 = Param2;
			*fParam5 = Param0;
		}
		else
		{
			*fParam4 = Param0;
			*fParam5 = Param2;
		}
		if (Param2.f_1 <= Param0.f_1)
		{
			fParam4->f_1 = Param2.f_1;
			fParam5->f_1 = Param0.f_1;
		}
		else
		{
			fParam4->f_1 = Param0.f_1;
			fParam5->f_1 = Param2.f_1;
		}
		*fParam4 = { *fParam4 - Vector(IntToFloat(iParam6), IntToFloat(iParam6), IntToFloat(iParam6)) };
		*fParam5 = { *fParam5 + Vector(IntToFloat(iParam6), IntToFloat(iParam6), IntToFloat(iParam6)) };
		iLocal_75 = 1;
	}
}

void func_78()//Position - 0x39AC
{
	int iVar0[24];
	char* sVar1;
	
	sLocal_267[0] = "BUSTO_RAMB_1";
	sLocal_267[1] = "BUSTO_RAMB_2";
	sLocal_267[2] = "BUSTO_RAMB_3";
	sLocal_267[3] = "BUSTO_RAMB_4";
	sLocal_267[4] = "BUSTO_RAMB_5";
	sLocal_267[5] = "BUSTO_RAMB_6";
	sLocal_267[6] = "BUSTO_RAMB_7";
	sLocal_267[7] = "BUSTO_RAMB_8";
	sLocal_267[8] = "BUSTO_RAMB_9";
	sLocal_267[9] = "BUSTO_RAMB_10";
	sLocal_267[10] = "BUSTO_RAMB_11";
	sLocal_267[11] = "BUSTO_RAMB_12";
	sLocal_267[12] = "BUSTO_RAMB_13";
	sLocal_267[13] = "BUSTO_RAMB_14";
	iVar0[0] = 12000;
	iVar0[1] = 12000;
	iVar0[2] = 36000;
	iVar0[3] = 0;
	iVar0[4] = 36000;
	iVar0[5] = 0;
	iVar0[6] = 36000;
	iVar0[7] = 36000;
	iVar0[8] = 0;
	iVar0[9] = 36000;
	iVar0[10] = 36000;
	iVar0[11] = 0;
	iVar0[12] = 36000;
	iVar0[13] = 0;
	iVar0[14] = 36000;
	iVar0[15] = 0;
	iVar0[16] = 48000;
	iVar0[17] = 0;
	iVar0[18] = 48000;
	iVar0[19] = 0;
	iVar0[20] = 48000;
	iVar0[21] = 0;
	iVar0[0] = iVar0[0];
	switch (iLocal_72)
	{
		case 0:
			iLocal_71 = unk_0x105601648511CC64();
			iLocal_72 = 1;
			break;
		
		case 1:
			iLocal_70 = unk_0x105601648511CC64();
			if ((iLocal_70 - iLocal_71) > 2000)
			{
				if (!func_82())
				{
					iLocal_71 = unk_0x105601648511CC64();
					iLocal_72 = 2;
				}
			}
			break;
		
		case 2:
			if (func_82())
			{
				unk_0xD4E50AEC04C3A55A("IS_ANY_CONVERSATION_ONGOING_OR_QUEUED", 0.02f, 0.2f, 0f, 0, 0, 255, 255);
			}
			if (iLocal_270)
			{
				iLocal_70 = unk_0x105601648511CC64();
				if ((iLocal_70 - iLocal_71) > iLocal_273)
				{
					if (func_79(uLocal_59[iLocal_271]))
					{
						if (iLocal_52 == 0)
						{
							sVar1 = "TOUR_ABOUT_TO_START";
						}
						else if ((iLocal_52 % 2) == 0)
						{
							sVar1 = "TOUR_CHAT";
						}
						else
						{
							sVar1 = "TOUR_LANDMARK";
						}
						unk_0xD4E50AEC04C3A55A("AMBIENT LINE", 0.02f, 0.3f, 0f, 0, 0, 255, 255);
						unk_0x53D8178763EDCE60(uLocal_59[iLocal_271], sVar1, "SPEECH_PARAMS_FORCE", 1);
						iLocal_272++;
						if (iLocal_272 == 3)
						{
							iLocal_270 = 0;
						}
						iLocal_273 = unk_0x491B2241281A03B7(9000, 14000);
						iLocal_71 = unk_0x105601648511CC64();
					}
					iLocal_271++;
					if (iLocal_271 == 5)
					{
						iLocal_271 = 0;
					}
				}
			}
			else if (iLocal_261 < 14)
			{
				iLocal_70 = unk_0x105601648511CC64();
				if ((iLocal_70 - iLocal_71) > 10000)
				{
					if (!func_82())
					{
						if (func_81(&uLocal_96, "BUSTOAU", "BUSTO_RAMB", sLocal_267[iLocal_261], 4, 0, 0))
						{
							iLocal_261++;
							iLocal_71 = unk_0x105601648511CC64();
							iLocal_270 = 1;
							iLocal_272 = 0;
						}
						else
						{
							unk_0xD4E50AEC04C3A55A("NOT PLAY_SINGLE_LINE_FROM_CONVERSATION", 0.02f, 0.3f, 0f, 0, 0, 255, 255);
						}
					}
				}
			}
			else
			{
				iLocal_270 = 1;
			}
			break;
	}
}

int func_79(int iParam0)//Position - 0x3CB5
{
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		if (unk_0xDA758FFA8708E17C(iParam0, "TOUR_ABOUT_TO_START", 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_80()//Position - 0x3CDB
{
	if (unk_0x694514BD37EC4E94(2, 222) && !iLocal_269)
	{
		if (unk_0x724D816EA203A79E(iLocal_63))
		{
			if (unk_0xE59B7F5A03335350(iLocal_63, 0))
			{
				if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_63, 0))
					{
						if (!unk_0x36CEFBE9B745A58D(iLocal_57))
						{
							unk_0x194CCBD594974E0D(iLocal_57, iLocal_63, 24, 5000);
							fLocal_65 = unk_0x8910237449BB6F79(iLocal_63);
							while (fLocal_65 > 5f)
							{
								SYSTEM::WAIT(0);
								if (unk_0xE59B7F5A03335350(iLocal_63, 0))
								{
									fLocal_65 = unk_0x8910237449BB6F79(iLocal_63);
								}
							}
							func_29();
							unk_0xAEEF3183457D51DF(iLocal_263);
							unk_0x8941EA87BBF38C6F(unk_0xBC25C936A095B5BA(), 1);
							unk_0xC1300D0F3A74E20B("RE_BUS_TOUR_SCENE");
							unk_0x38E412DB4A45B900(iLocal_63, 0);
							if (unk_0xEF0E25DA0CB6E8FF(iLocal_81))
							{
								unk_0x4EC087603E1DEF9C(iLocal_81, 0);
								unk_0x062C9995BFD27B2A(false, false, 0, 1, 0, 0);
								unk_0xDC078F87049ECECE(unk_0xBC25C936A095B5BA(), true, 0);
							}
							unk_0x932E201A82D2EDB8(unk_0xBC25C936A095B5BA(), iLocal_63, 0);
						}
					}
				}
			}
		}
		return 1;
	}
	return 0;
}

bool func_81(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x3DC9
{
	func_19(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_4(sParam2, iParam4, 0);
}

int func_82()//Position - 0x3E1D
{
	if (Global_3DB8 != 0 || unk_0xE6711F601F11B66B())
	{
		return 1;
	}
	return 0;
}

void func_83()//Position - 0x3E3F
{
	switch (iLocal_52)
	{
		case 0:
			unk_0x598D851D7D0D2BA3(0.5f);
			break;
		
		case 1:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
			unk_0x598D851D7D0D2BA3(0.6f);
			break;
	}
}

void func_84()//Position - 0x3EB5
{
	if (!unk_0x36CEFBE9B745A58D(iLocal_58) && !unk_0x36CEFBE9B745A58D(iLocal_57))
	{
		switch (iLocal_49)
		{
			case 0:
				unk_0x4AED68BFACFB14CB(false);
				unk_0xD6423910AAD8A379("RE_BUS_TOUR_SCENE");
				unk_0x55662F9F262C2F9B(iLocal_63, "RE_BUS_TOUR_BUS_VEHICLE", 0);
				unk_0x8941EA87BBF38C6F(unk_0xBC25C936A095B5BA(), 0);
				func_66(1, 1, 1, 0, 0);
				unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 256);
				unk_0x49D46EE47C9CCB66(unk_0xBC25C936A095B5BA());
				unk_0xADC7E88690E324EB(Local_51.f_1, 30f, 0);
				unk_0x0130A557FECA322C(iLocal_57, 0);
				unk_0xBD53A029D0155A42(unk_0xBC25C936A095B5BA(), iLocal_63, 2);
				unk_0x40E44AA6E6C56BCA(1);
				unk_0x43F06392C4EF25E0(false);
				iLocal_82 = unk_0x6B8F797EEC7B95E2("DEFAULT_SCRIPTED_CAMERA", 94.5693f, 246.0525f, 108.9809f, -11.5369f, 0f, -74.512f, 40f, 1, 2);
				iLocal_83 = unk_0x6B8F797EEC7B95E2("DEFAULT_SCRIPTED_CAMERA", 95.7144f, 243.8854f, 111.291f, -26.2154f, 0f, -59.2407f, 50f, 1, 2);
				unk_0x348665177DBFB93B(iLocal_82, true);
				unk_0x062C9995BFD27B2A(true, false, 3000, 1, 0, 0);
				unk_0xAE099C1ADC89C331(iLocal_83, iLocal_82, 6500, 1, 1);
				if (unk_0xE59B7F5A03335350(unk_0x3E12B546F3F2597A(), 0))
				{
					if (unk_0xE642C1AC73CE364E(unk_0x3E12B546F3F2597A(), iLocal_63, 8f, 8f, 5f, 0, 1, 0))
					{
						unk_0x019CE76D5286C95C(unk_0x3E12B546F3F2597A(), 65f);
						unk_0x641B19E156645A92(unk_0x3E12B546F3F2597A(), 115.1136f, 241.6893f, 106.6493f, 1, false, 0, 1);
					}
				}
				unk_0xB1AFC550627C7E8D("BusTours");
				if (unk_0xE59B7F5A03335350(iLocal_63, 0))
				{
					func_77(unk_0x541C2AEF053615BC(iLocal_63, true), Local_50[0 /*15*/].f_1, &vLocal_77, &vLocal_78, 500);
					iLocal_275 = unk_0x105601648511CC64();
					iLocal_49 = 1;
				}
				if (unk_0x7FCE28BE45D0735E() == 4)
				{
					iLocal_76 = 1;
				}
				iLocal_276 = 0;
				break;
			
			case 1:
				if (!iLocal_93)
				{
					func_115();
				}
				if ((unk_0x105601648511CC64() - iLocal_275) > 5000 && !iLocal_274)
				{
					func_76(&uLocal_96, "BUSTOAU", "BUSTO_GO", 4, 0, 0, 0);
					if (func_114("Enter_bus"))
					{
						unk_0x7456702622C62EA0(1);
					}
					iLocal_274 = 1;
				}
				if ((unk_0x105601648511CC64() - iLocal_275) > 6200)
				{
					if (iLocal_76 == 1)
					{
						if (iLocal_276 == 0)
						{
							unk_0x9216004FAC08D1DC("CamPushInNeutral", 0, 0);
							unk_0xC4BA30B532FE260F(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
							iLocal_276 = 1;
						}
					}
				}
				if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
				{
					if ((unk_0x25EF720B1CAB1E23(unk_0xBC25C936A095B5BA(), iLocal_63) && unk_0x25EF720B1CAB1E23(iLocal_58, iLocal_63)) && unk_0x25EF720B1CAB1E23(iLocal_57, iLocal_63))
					{
						iLocal_49 = 2;
					}
					else if (func_74(1000))
					{
						if (unk_0x1AAF0C23233C57AF(iLocal_63, 0, 0))
						{
							unk_0xBD53A029D0155A42(iLocal_58, iLocal_63, 0);
						}
						iLocal_49 = 2;
					}
				}
				break;
			
			case 2:
				unk_0x509F549022512095(iLocal_57, iLocal_63, Local_50[0 /*15*/].f_1, Local_50[0 /*15*/].f_8, 0, joaat("tourbus"), iLocal_264, 5f, 15f);
				unk_0x348665177DBFB93B(iLocal_82, false);
				unk_0x062C9995BFD27B2A(false, false, 3000, 1, 0, 0);
				unk_0x4EC087603E1DEF9C(iLocal_82, 0);
				unk_0x4EC087603E1DEF9C(iLocal_83, 0);
				unk_0x40E44AA6E6C56BCA(0);
				unk_0x43F06392C4EF25E0(true);
				unk_0x82BD2E9769751DCD();
				unk_0x4E0EC60D119222B1(2);
				func_66(0, 1, 1, 0, 0);
				iLocal_84 = func_10();
				func_85(iLocal_84, 1, iLocal_265);
				iLocal_263 = unk_0x50FF01A6B81FD858();
				if (!iLocal_76)
				{
					unk_0xAEEF3183457D51DF(3);
				}
				else
				{
					func_21(1);
				}
				unk_0x07B8ECB35A4ED3AC(&iLocal_67);
				iLocal_47 = 2;
				break;
		}
	}
	else
	{
		func_219();
	}
}

int func_85(int iParam0, int iParam1, int iParam2)//Position - 0x4208
{
	if (Global_19B04.f_6D75[iParam0 /*29*/].f_11 == 3)
	{
		return 0;
	}
	if (Global_19B04.f_6D75[iParam0 /*29*/].f_11 == 4)
	{
		return 0;
	}
	return func_86(Global_19B04.f_6D75[iParam0 /*29*/].f_11, 0, iParam1, iParam2, 0);
}

int func_86(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x4251
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_113();
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
					func_112(99, 1);
					func_111(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_111(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_111(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_97(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_93(5))
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
							func_111(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_111(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_111(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_93(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_111(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_111(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_111(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_111(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_111(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_111(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_111(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_111(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_111(joaat("sp2_money_spent_property"), iParam3);
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
									func_111(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_111(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_111(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_111(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_111(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_111(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_93(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_111(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_111(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_111(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_111(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_111(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_111(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_92(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_112(95, iParam3);
					break;
				
				case 1:
					func_112(97, iParam3);
					break;
				
				case 2:
					func_112(96, iParam3);
					break;
			}
			func_112(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_89(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_89(iVar1);
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
					func_111(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_111(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_111(joaat("sp2_total_cash_earned"), iParam3);
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
	func_88(iParam0);
	if (Global_8C41 == 15)
	{
		func_87(0);
	}
	return 1;
}

void func_87(bool bParam0)//Position - 0x4850
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

void func_88(int iParam0)//Position - 0x4AD2
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

void func_89(int iParam0)//Position - 0x4B2C
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_52(129, 0, -1, 1);
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
	else if (unk_0xFA30DFD0084E92FE(Global_19B04.f_5037.f_1D7, iParam0) || unk_0xFA30DFD0084E92FE(Global_200000[func_91() /*12171*/].f_1E08.f_A, iParam0))
	{
		bVar0 = true;
		unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_5037.f_1D7), iParam0);
		unk_0x7CB6FD92BE491AD9(&(Global_200000[func_91() /*12171*/].f_1E08.f_A), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x2E94302CFF011F2E("COUP_RED");
		unk_0xC9C304D0AABE1335(func_90(iParam0));
		unk_0x7BB0762D8C75A3C7(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_90(int iParam0)//Position - 0x4C02
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

int func_91()//Position - 0x4C89
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_92(int iParam0)//Position - 0x4C96
{
	func_112(93, iParam0);
	func_112(29, iParam0);
	func_112(30, iParam0);
}

bool func_93(int iParam0)//Position - 0x4CB6
{
	if (iParam0 == 8)
	{
		return func_94(129, -1, -1);
	}
	if (!unk_0x7AF0088ABFA713B6())
	{
		return unk_0xFA30DFD0084E92FE(Global_19B04.f_5037.f_1D7, iParam0);
	}
	return unk_0xFA30DFD0084E92FE(Global_200000[func_91() /*12171*/].f_1E08.f_A, iParam0);
}

int func_94(int iParam0, int iParam1, int iParam2)//Position - 0x4D04
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_53();
	}
	iVar1 = func_96(iParam0, iParam1);
	uVar2 = func_95(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDAB376DC6F83D68C(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_95(int iParam0)//Position - 0x4D41
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

int func_96(int iParam0, int iParam1)//Position - 0x502D
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_53();
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

int func_97(bool bParam0)//Position - 0x52F5
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
		func_51(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_98(27, 1);
	return 1;
}

int func_98(int iParam0, int iParam1)//Position - 0x53AC
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_99(iParam0, iParam1);
}

int func_99(int iParam0, int iParam1)//Position - 0x53C7
{
	if (func_15(14) && !func_110(iParam0))
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
	if (func_109(&Global_411EB6))
	{
		if (func_107(&Global_411EB6, iParam0))
		{
			return 0;
		}
		if (func_100(&Global_411EB6, iParam0))
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

int func_100(var uParam0, int iParam1)//Position - 0x5464
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x6D5CBCB6411EDE89(iParam1))
	{
		return 0;
	}
	if (func_15(14) && !func_110(iParam1))
	{
		return 0;
	}
	if (func_107(uParam0, iParam1))
	{
		return 0;
	}
	if (func_106(uParam0) < 0f)
	{
		func_105(uParam0, 0);
	}
	func_103(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_101(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_101(var uParam0, int iParam1)//Position - 0x5515
{
	int iVar0;
	
	if (unk_0x6D5CBCB6411EDE89(iParam1))
	{
		return 0;
	}
	if (func_15(14) && !func_110(iParam1))
	{
		return 0;
	}
	if (func_107(uParam0, iParam1))
	{
		return 0;
	}
	if (func_106(uParam0) < 0f)
	{
		func_105(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_102(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_102(var uParam0, int iParam1)//Position - 0x5590
{
	return (*uParam0)[iParam1] == 78;
}

void func_103(var uParam0)//Position - 0x55A1
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_104(uParam0, iVar0);
		iVar0++;
	}
	func_105(uParam0, (Global_411EB5 - 0.5f));
}

void func_104(var uParam0, int iParam1)//Position - 0x55D5
{
	(*uParam0)[iParam1] = 78;
}

void func_105(var uParam0, float fParam1)//Position - 0x55E5
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

float func_106(var uParam0)//Position - 0x5602
{
	return uParam0->f_50;
}

bool func_107(var uParam0, int iParam1)//Position - 0x560E
{
	return func_108(uParam0, iParam1) != -1;
}

int func_108(var uParam0, int iParam1)//Position - 0x5620
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

bool func_109(var uParam0)//Position - 0x564D
{
	return uParam0->f_4F == 1;
}

int func_110(int iParam0)//Position - 0x565B
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

void func_111(int iParam0, int iParam1)//Position - 0x56AB
{
	int iVar0;
	
	unk_0x6CB99B97664C3727(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x3A57956BCE003880(iParam0, iVar0, 1);
}

void func_112(int iParam0, int iParam1)//Position - 0x56CE
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

void func_113()//Position - 0x572B
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

int func_114(char* sParam0)//Position - 0x57A0
{
	unk_0xF07D20149ECBC61E(sParam0);
	return unk_0xA66DBDA0A072514A(0);
}

void func_115()//Position - 0x57B3
{
	if (!unk_0x36CEFBE9B745A58D(iLocal_58))
	{
		unk_0xA4E856A8CD53B8DF(iLocal_58);
		unk_0xD179FA0466FA4FE3(iLocal_58, iLocal_63, 10000, 0, 2f, 262144, 0);
		unk_0x22321800954A532E(iLocal_58, true);
		iLocal_93 = 1;
	}
}

void func_116()//Position - 0x57ED
{
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (func_156())
		{
			unk_0xD421BC740C5340C3(iLocal_63, 3);
			unk_0x8300C56586249382(iLocal_63, 0);
			func_219();
		}
		else if (func_147(4))
		{
			if ((unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_63, 5f, 5f, 5f, 0, 1, 0) && !unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0)) && !func_114("TX_H02"))
			{
				if (func_145())
				{
					if (!iLocal_266)
					{
						unk_0xD421BC740C5340C3(iLocal_63, 1);
						iLocal_266 = 1;
					}
					unk_0x1A52075550F42C09("Enter_bus", 0);
					if (unk_0x8FCEEB789599BD9B(2, 23))
					{
						unk_0xD179FA0466FA4FE3(unk_0xBC25C936A095B5BA(), iLocal_63, -1, 2, 1f, 8, 0);
					}
					if (!unk_0x2DA8CA50A72528FB(iLocal_67))
					{
						if (unk_0x2DA8CA50A72528FB(iLocal_68))
						{
							unk_0x07B8ECB35A4ED3AC(&iLocal_68);
						}
						iLocal_67 = unk_0x511FE22BCF5353CD(iLocal_63);
						unk_0xF9C2945DB5BAB4BF(iLocal_67, true);
						unk_0x3F5F1772D71D5EC4(iLocal_67, Global_62EB);
						if (!unk_0x36CEFBE9B745A58D(iLocal_58))
						{
							unk_0x56F2E1B5599188FA(iLocal_58, unk_0xBC25C936A095B5BA(), -1, 0, 2);
						}
						if (!func_144())
						{
							if (func_132())
							{
								func_219();
							}
							else
							{
								func_122(1);
							}
						}
					}
					if (func_121())
					{
						iLocal_269 = 0;
						func_120(1);
					}
				}
				else
				{
					unk_0x1A52075550F42C09("No_bus_money", 0);
					if (iLocal_266)
					{
						unk_0xD421BC740C5340C3(iLocal_63, 2);
						iLocal_266 = 0;
					}
				}
			}
		}
		if (iLocal_88 < 5)
		{
			if (func_117(&(uLocal_59[iLocal_88])))
			{
				iLocal_88++;
			}
		}
	}
}

int func_117(var uParam0)//Position - 0x594F
{
	char* sVar0;
	
	*uParam0 = 0;
	if (unk_0x50AE3E919DC9BC67(vLocal_53, 100f, 1, 0, uParam0, 0, 0, 28))
	{
		if (!unk_0x36CEFBE9B745A58D(*uParam0))
		{
			if (func_119(*uParam0))
			{
				if (!unk_0x5CAE759AE8219D20(*uParam0))
				{
					unk_0x77815D3407C6700D(*uParam0, true, 0);
					unk_0xA4E856A8CD53B8DF(*uParam0);
					unk_0x2E35C4FA5F0ED22F(*uParam0, true);
					unk_0xF85FAED5BA864282(*uParam0, "randompassenger");
					unk_0xC8FD3EBBB90E8D7F(*uParam0, 134, true);
					switch (iLocal_88)
					{
						case 0:
							if (unk_0xE59B7F5A03335350(iLocal_63, 0))
							{
								unk_0xBD53A029D0155A42(*uParam0, iLocal_63, 3);
								unk_0x22321800954A532E(*uParam0, true);
							}
							break;
						
						case 1:
							if (unk_0xE59B7F5A03335350(iLocal_63, 0))
							{
								unk_0xBD53A029D0155A42(*uParam0, iLocal_63, 7);
								unk_0x22321800954A532E(*uParam0, true);
							}
							break;
						
						case 2:
							if (unk_0xE59B7F5A03335350(iLocal_63, 0))
							{
								unk_0xBD53A029D0155A42(*uParam0, iLocal_63, 6);
								unk_0x22321800954A532E(*uParam0, true);
							}
							break;
						
						case 3:
							if (unk_0xE59B7F5A03335350(iLocal_63, 0))
							{
								unk_0xBD53A029D0155A42(*uParam0, iLocal_63, 8);
								unk_0x22321800954A532E(*uParam0, true);
							}
							break;
						
						case 4:
							if (unk_0xE59B7F5A03335350(iLocal_63, 0))
							{
								unk_0xBD53A029D0155A42(*uParam0, iLocal_63, 1);
								unk_0x22321800954A532E(*uParam0, true);
							}
							break;
					}
					sVar0 = func_118(unk_0xB6FD7D587FE0A1B4(*uParam0));
					unk_0x36C3B58DA78A2679(*uParam0, sVar0);
					return 1;
				}
			}
		}
	}
	return 0;
}

char* func_118(bool bParam0)//Position - 0x5AA8
{
	int iVar0;
	
	if (bParam0 == 0)
	{
		iVar0 = unk_0x491B2241281A03B7(0, 16);
		if (iVar0 == 0)
		{
			return "A_F_M_DOWNTOWN_01_BLACK_FULL_01";
		}
		else if (iVar0 == 1)
		{
			return "A_F_M_EASTSA_01_LATINO_FULL_01";
		}
		else if (iVar0 == 2)
		{
			return "A_F_M_FATWHITE_01_WHITE_FULL_01";
		}
		else if (iVar0 == 3)
		{
			return "A_F_M_KTOWN_02_KOREAN_FULL_01";
		}
		else if (iVar0 == 4)
		{
			return "A_F_M_SOUCENT_02_BLACK_FULL_01";
		}
		else if (iVar0 == 5)
		{
			return "A_F_M_TOURIST_01_WHITE_MINI_01";
		}
		else if (iVar0 == 6)
		{
			return "A_F_O_KTOWN_01_KOREAN_FULL_01";
		}
		else if (iVar0 == 7)
		{
			return "A_F_O_SOUCENT_01_BLACK_FULL_01";
		}
		else if (iVar0 == 8)
		{
			return "A_F_Y_EASTSA_02_WHITE_FULL_01";
		}
		else if (iVar0 == 9)
		{
			return "A_F_Y_HIKER_01_WHITE_FULL_01";
		}
		else if (iVar0 == 10)
		{
			return "A_F_Y_HIKER_01_WHITE_MINI_01";
		}
		else if (iVar0 == 11)
		{
			return "A_F_Y_HIPSTER_03_WHITE_FULL_01";
		}
		else if (iVar0 == 12)
		{
			return "A_F_Y_TOURIST_01_BLACK_FULL_01";
		}
		else if (iVar0 == 13)
		{
			return "A_F_Y_TOURIST_01_LATINO_FULL_01";
		}
		else if (iVar0 == 14)
		{
			return "A_F_Y_TOURIST_01_WHITE_FULL_01";
		}
		else
		{
			return "A_F_Y_TOURIST_02_WHITE_MINI_01";
		}
	}
	iVar0 = unk_0x491B2241281A03B7(0, 33);
	if (iVar0 == 0)
	{
		return "A_M_M_AFRIAMER_01_BLACK_FULL_01";
	}
	if (iVar0 == 1)
	{
		return "A_M_M_EASTSA_01_LATINO_FULL_01";
	}
	if (iVar0 == 2)
	{
		return "A_M_M_EASTSA_02_LATINO_FULL_01";
	}
	if (iVar0 == 3)
	{
		return "A_M_M_FATLATIN_01_LATINO_FULL_01";
	}
	if (iVar0 == 4)
	{
		return "A_M_M_GENFAT_01_LATINO_FULL_01";
	}
	if (iVar0 == 5)
	{
		return "A_M_M_POLYNESIAN_01_POLYNESIAN_FULL_01";
	}
	if (iVar0 == 6)
	{
		return "A_M_M_SALTON_01_WHITE_FULL_01";
	}
	if (iVar0 == 7)
	{
		return "A_M_M_SALTON_02_WHITE_FULL_01";
	}
	if (iVar0 == 8)
	{
		return "A_M_M_STLAT_02_LATINO_FULL_01";
	}
	if (iVar0 == 9)
	{
		return "A_M_M_TOURIST_01_WHITE_MINI_01";
	}
	if (iVar0 == 10)
	{
		return "A_M_O_GENSTREET_01_WHITE_FULL_01";
	}
	if (iVar0 == 11)
	{
		return "A_M_Y_BEACH_01_CHINESE_FULL_01";
	}
	if (iVar0 == 12)
	{
		return "A_M_Y_BEACH_01_CHINESE_MINI_01";
	}
	if (iVar0 == 13)
	{
		return "A_M_Y_BEACH_01_WHITE_FULL_01";
	}
	if (iVar0 == 14)
	{
		return "A_M_Y_BEACH_02_LATINO_FULL_01";
	}
	if (iVar0 == 15)
	{
		return "A_M_Y_BEACH_03_WHITE_FULL_01";
	}
	if (iVar0 == 16)
	{
		return "A_M_Y_BEACHVESP_01_CHINESE_FULL_01";
	}
	if (iVar0 == 17)
	{
		return "A_M_Y_BEACHVESP_01_CHINESE_MINI_01";
	}
	if (iVar0 == 18)
	{
		return "A_M_Y_BEACHVESP_01_WHITE_FULL_01";
	}
	if (iVar0 == 19)
	{
		return "A_M_Y_BEACHVESP_02_WHITE_FULL_01";
	}
	if (iVar0 == 20)
	{
		return "A_M_Y_BEACHVESP_02_WHITE_MINI_01";
	}
	if (iVar0 == 21)
	{
		return "A_M_Y_BEVHILLS_01_WHITE_FULL_01";
	}
	if (iVar0 == 22)
	{
		return "A_M_Y_BUSINESS_01_BLACK_FULL_01";
	}
	if (iVar0 == 23)
	{
		return "A_M_Y_BUSINESS_01_CHINESE_FULL_01";
	}
	if (iVar0 == 24)
	{
		return "A_M_Y_BUSINESS_02_BLACK_FULL_01";
	}
	if (iVar0 == 25)
	{
		return "A_M_Y_BUSINESS_02_WHITE_FULL_01";
	}
	if (iVar0 == 26)
	{
		return "A_M_Y_EASTSA_01_LATINO_FULL_01";
	}
	if (iVar0 == 27)
	{
		return "A_M_Y_GENSTREET_01_CHINESE_FULL_01";
	}
	if (iVar0 == 28)
	{
		return "A_M_Y_GENSTREET_01_WHITE_FULL_01";
	}
	if (iVar0 == 29)
	{
		return "A_M_Y_GENSTREET_02_BLACK_FULL_01";
	}
	if (iVar0 == 30)
	{
		return "A_M_Y_GENSTREET_02_LATINO_FULL_01";
	}
	if (iVar0 == 31)
	{
		return "A_M_Y_POLYNESIAN_01_POLYNESIAN_FULL_01";
	}
	return "A_M_Y_STLAT_01_LATINO_FULL_01";
}

int func_119(int iParam0)//Position - 0x5DE5
{
	int iVar0;
	
	iVar0 = 1;
	if (((((unk_0x6F79ECA8C83E4357(iParam0) == joaat("a_m_m_tramp_01") || unk_0x6F79ECA8C83E4357(iParam0) == joaat("a_f_m_tramp_01")) || unk_0x6F79ECA8C83E4357(iParam0) == joaat("a_m_o_tramp_01")) || unk_0x6F79ECA8C83E4357(iParam0) == joaat("s_m_y_cop_01")) || unk_0x6F79ECA8C83E4357(iParam0) == joaat("s_m_y_fireman_01")) || unk_0x6F79ECA8C83E4357(iParam0) == joaat("a_f_y_hiker_01"))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_120(int iParam0)//Position - 0x5E5E
{
	iLocal_49 = 0;
	iLocal_47 = iParam0;
}

int func_121()//Position - 0x5E6D
{
	if (unk_0xE59B7F5A03335350(iLocal_63, 0))
	{
		if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			if (unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x25480ACDBB6DB8F1(unk_0xBC25C936A095B5BA()) == iLocal_63)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_122(int iParam0)//Position - 0x5EAA
{
	if (func_126())
	{
		Global_19AFA = 1;
		Global_19AF7 = unk_0x105601648511CC64();
		if (func_55(Global_19AF9))
		{
			func_123(0);
		}
		unk_0x3FF92BBF0607A406(1, "RE_TITLE");
		if (iParam0 && func_55(Global_19AF9))
		{
			unk_0x621CEDEDDD531386();
		}
		return 1;
	}
	return 0;
}

void func_123(int iParam0)//Position - 0x5EFD
{
	switch (iParam0)
	{
		case 0:
			if (Global_19B04.f_6186.f_2 < 3)
			{
				if (!unk_0x5107E30005FCFEA8())
				{
					func_124(func_125(iParam0), -1);
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
					func_124(func_125(iParam0), -1);
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
					func_124(func_125(iParam0), -1);
					Global_19B04.f_6186.f_4++;
					unk_0xF0059F27F7BB6680(&Global_19B00, 2);
				}
			}
			break;
	}
}

void func_124(char* sParam0, int iParam1)//Position - 0x5FDE
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, true, iParam1);
}

char* func_125(int iParam0)//Position - 0x5FF5
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

int func_126()//Position - 0x6038
{
	switch (func_127(&Global_62F8, 0, 5, 0, unk_0x8A55B15F4133C912()))
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

int func_127(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x606E
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
		if (func_131(0))
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
		if (!func_129(iParam2))
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
			func_128(uParam0, iParam4);
		}
	}
	return 2;
}

void func_128(var uParam0, int iParam1)//Position - 0x61A5
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

bool func_129(int iParam0)//Position - 0x61F4
{
	return func_130(iParam0, Global_8C41);
}

int func_130(int iParam0, int iParam1)//Position - 0x6205
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

int func_131(int iParam0)//Position - 0x63E6
{
	if (Global_8C41 == 15)
	{
		return 0;
	}
	if (func_129(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_132()//Position - 0x6408
{
	if (!func_129(5))
	{
		return 1;
	}
	if (func_140())
	{
		return 1;
	}
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (SYSTEM::VMAG2(unk_0xB5D9AE572C19509E(unk_0xBC25C936A095B5BA())) > 1369f && !func_139())
		{
			return 0;
		}
	}
	if (func_133(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_133(float fParam0, bool bParam1)//Position - 0x646A
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
		if (func_12(func_10()))
		{
			iVar5 = func_60();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (unk_0xFA30DFD0084E92FE(Global_19B04.f_4871[iVar1 /*6*/], 2) && !unk_0xFA30DFD0084E92FE(Global_19B04.f_4871[iVar1 /*6*/], 3))
				{
					func_134(iVar1, &Var0);
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

void func_134(int iParam0, var uParam1)//Position - 0x6521
{
	switch (iParam0)
	{
		case 0:
			func_135(uParam1, "Abigail1", func_137(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_136(iParam0), 1, 0);
			break;
		
		case 1:
			func_135(uParam1, "Abigail2", func_137(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_136(iParam0), 1, 0);
			break;
		
		case 2:
			func_135(uParam1, "Barry1", func_137(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_136(iParam0), 1, 0);
			break;
		
		case 3:
			func_135(uParam1, "Barry2", func_137(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_136(iParam0), 1, 1);
			break;
		
		case 4:
			func_135(uParam1, "Barry3", func_137(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_136(iParam0), 0, 0);
			break;
		
		case 5:
			func_135(uParam1, "Barry3A", func_137(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_136(iParam0), 0, 1);
			break;
		
		case 6:
			func_135(uParam1, "Barry3C", func_137(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_136(iParam0), 0, 1);
			break;
		
		case 7:
			func_135(uParam1, "Barry4", func_137(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_136(iParam0), 0, 0);
			break;
		
		case 8:
			func_135(uParam1, "Dreyfuss1", func_137(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_136(iParam0), 0, 0);
			break;
		
		case 9:
			func_135(uParam1, "Epsilon1", func_137(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_136(iParam0), 0, 0);
			break;
		
		case 10:
			func_135(uParam1, "Epsilon2", func_137(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_136(iParam0), 1, 0);
			break;
		
		case 11:
			func_135(uParam1, "Epsilon3", func_137(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_136(iParam0), 0, 0);
			break;
		
		case 12:
			func_135(uParam1, "Epsilon4", func_137(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_136(iParam0), 0, 0);
			break;
		
		case 13:
			func_135(uParam1, "Epsilon5", func_137(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_136(iParam0), 1, 0);
			break;
		
		case 14:
			func_135(uParam1, "Epsilon6", func_137(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_136(iParam0), 0, 1);
			break;
		
		case 15:
			func_135(uParam1, "Epsilon7", func_137(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_136(iParam0), 0, 0);
			break;
		
		case 16:
			func_135(uParam1, "Epsilon8", func_137(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_136(iParam0), 1, 0);
			break;
		
		case 17:
			func_135(uParam1, "Extreme1", func_137(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_136(iParam0), 0, 1);
			break;
		
		case 18:
			func_135(uParam1, "Extreme2", func_137(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_136(iParam0), 0, 1);
			break;
		
		case 19:
			func_135(uParam1, "Extreme3", func_137(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_136(iParam0), 0, 1);
			break;
		
		case 20:
			func_135(uParam1, "Extreme4", func_137(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_136(iParam0), 0, 0);
			break;
		
		case 21:
			func_135(uParam1, "Fanatic1", func_137(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_136(iParam0), 1, 0);
			break;
		
		case 22:
			func_135(uParam1, "Fanatic2", func_137(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_136(iParam0), 1, 0);
			break;
		
		case 23:
			func_135(uParam1, "Fanatic3", func_137(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_136(iParam0), 0, 1);
			break;
		
		case 24:
			func_135(uParam1, "Hao1", func_137(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_136(iParam0), 0, 1);
			break;
		
		case 25:
			func_135(uParam1, "Hunting1", func_137(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_136(iParam0), 0, 1);
			break;
		
		case 26:
			func_135(uParam1, "Hunting2", func_137(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_136(iParam0), 0, 1);
			break;
		
		case 27:
			func_135(uParam1, "Josh1", func_137(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_136(iParam0), 1, 0);
			break;
		
		case 28:
			func_135(uParam1, "Josh2", func_137(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_136(iParam0), 1, 1);
			break;
		
		case 29:
			func_135(uParam1, "Josh3", func_137(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_136(iParam0), 1, 1);
			break;
		
		case 30:
			func_135(uParam1, "Josh4", func_137(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_136(iParam0), 1, 0);
			break;
		
		case 31:
			func_135(uParam1, "Maude1", func_137(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_136(iParam0), 0, 1);
			break;
		
		case 32:
			func_135(uParam1, "Minute1", func_137(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_136(iParam0), 0, 1);
			break;
		
		case 33:
			func_135(uParam1, "Minute2", func_137(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_136(iParam0), 0, 1);
			break;
		
		case 34:
			func_135(uParam1, "Minute3", func_137(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_136(iParam0), 0, 1);
			break;
		
		case 35:
			func_135(uParam1, "MrsPhilips1", func_137(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_136(iParam0), 0, 0);
			break;
		
		case 36:
			func_135(uParam1, "MrsPhilips2", func_137(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_136(iParam0), 0, 0);
			break;
		
		case 37:
			func_135(uParam1, "Nigel1", func_137(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_136(iParam0), 1, 0);
			break;
		
		case 38:
			func_135(uParam1, "Nigel1A", func_137(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_136(iParam0), 1, 1);
			break;
		
		case 39:
			func_135(uParam1, "Nigel1B", func_137(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_136(iParam0), 1, 1);
			break;
		
		case 40:
			func_135(uParam1, "Nigel1C", func_137(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_136(iParam0), 1, 1);
			break;
		
		case 41:
			func_135(uParam1, "Nigel1D", func_137(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_136(iParam0), 1, 1);
			break;
		
		case 42:
			func_135(uParam1, "Nigel2", func_137(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_136(iParam0), 1, 1);
			break;
		
		case 43:
			func_135(uParam1, "Nigel3", func_137(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_136(iParam0), 1, 1);
			break;
		
		case 44:
			func_135(uParam1, "Omega1", func_137(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_136(iParam0), 0, 0);
			break;
		
		case 45:
			func_135(uParam1, "Omega2", func_137(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_136(iParam0), 0, 0);
			break;
		
		case 46:
			func_135(uParam1, "Paparazzo1", func_137(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_136(iParam0), 0, 1);
			break;
		
		case 47:
			func_135(uParam1, "Paparazzo2", func_137(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_136(iParam0), 0, 1);
			break;
		
		case 48:
			func_135(uParam1, "Paparazzo3", func_137(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_136(iParam0), 0, 0);
			break;
		
		case 49:
			func_135(uParam1, "Paparazzo3A", func_137(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_136(iParam0), 0, 1);
			break;
		
		case 50:
			func_135(uParam1, "Paparazzo3B", func_137(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_136(iParam0), 0, 1);
			break;
		
		case 51:
			func_135(uParam1, "Paparazzo4", func_137(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_136(iParam0), 0, 0);
			break;
		
		case 52:
			func_135(uParam1, "Rampage1", func_137(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_136(iParam0), 0, 0);
			break;
		
		case 54:
			func_135(uParam1, "Rampage3", func_137(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_136(iParam0), 1, 0);
			break;
		
		case 55:
			func_135(uParam1, "Rampage4", func_137(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_136(iParam0), 1, 0);
			break;
		
		case 56:
			func_135(uParam1, "Rampage5", func_137(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_136(iParam0), 0, 0);
			break;
		
		case 53:
			func_135(uParam1, "Rampage2", func_137(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_136(iParam0), 1, 0);
			break;
		
		case 57:
			func_135(uParam1, "TheLastOne", func_137(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_136(iParam0), 0, 1);
			break;
		
		case 58:
			func_135(uParam1, "Tonya1", func_137(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_136(iParam0), 0, 1);
			break;
		
		case 59:
			func_135(uParam1, "Tonya2", func_137(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_136(iParam0), 0, 1);
			break;
		
		case 60:
			func_135(uParam1, "Tonya3", func_137(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_136(iParam0), 0, 1);
			break;
		
		case 61:
			func_135(uParam1, "Tonya4", func_137(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_136(iParam0), 0, 1);
			break;
		
		case 62:
			func_135(uParam1, "Tonya5", func_137(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_136(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_135(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0x76D6
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

int func_136(int iParam0)//Position - 0x7767
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

struct<2> func_137(int iParam0)//Position - 0x7AAD
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_138(iParam0) };
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

struct<2> func_138(int iParam0)//Position - 0x7AE4
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

int func_139()//Position - 0x7F30
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

int func_140()//Position - 0x7F4D
{
	if (func_143() && !func_139())
	{
		return 1;
	}
	if (func_142() && func_141())
	{
		return 1;
	}
	return 0;
}

bool func_141()//Position - 0x7F7F
{
	return Global_199EA > 0;
}

int func_142()//Position - 0x7F8D
{
	if (Global_15FA6 != -1)
	{
		return 1;
	}
	return 0;
}

int func_143()//Position - 0x7FA2
{
	if (Global_15FA6 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_147B0[Global_15FA6 /*34*/].f_F, 20);
	}
	return 0;
}

int func_144()//Position - 0x7FC8
{
	if ((Global_19AF9 == func_64() && unk_0x8520DF5301DD9811()) && Global_19AFA)
	{
		return 1;
	}
	return 0;
}

int func_145()//Position - 0x7FF3
{
	if (func_146(func_10()) >= iLocal_265)
	{
		return 1;
	}
	return 0;
}

int func_146(int iParam0)//Position - 0x800E
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0x6CB99B97664C3727(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0x6CB99B97664C3727(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0x6CB99B97664C3727(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

int func_147(int iParam0)//Position - 0x8066
{
	int iVar0;
	
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				iVar0 = func_10();
				if (!func_12(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_155()) || Global_1974B) || Global_62BF) || func_154()) || func_17(8, -1)) || func_153()) || func_152()) || func_151()) || func_150()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1) || func_155()) || Global_62BF) || func_154()) || func_17(8, -1)) || func_151()) || func_153()) || func_152()) || func_150()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_155()) || Global_1974B) || Global_62BF) || func_154()) || func_17(8, -1)) || func_151()) || func_153()) || func_152()) || func_150()) || Global_19B04.f_1DEB.f_397[iVar0] == 5) || Global_8E64 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_155()) || Global_1974B) || Global_62BF) || func_154()) || func_17(8, -1)) || func_153()) || func_152()) || func_150()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_155() || unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0) || func_17(8, -1)) || func_150()) || func_149()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_17(8, -1) || func_153()) || func_152()) || func_149()) || func_148())
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
							if ((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || func_155()) || Global_62BF) || func_154()) || func_17(8, -1)) || func_152()) || func_151()) || func_150()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || !unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) || !unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F())) || !unk_0x726D9204B160D23E()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || func_155()) || func_152()) || Global_1974B) || Global_62BF) || func_154()) || Global_90C1) || func_17(8, -1)) || func_151()) || func_149()) || func_150()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || !unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) || !unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F())) || !unk_0x726D9204B160D23E()) || unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0)) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1)) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0x9273B3557334635D(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || func_155()) || Global_1974B) || Global_62BF) || func_154()) || func_17(8, -1)) || func_151()) || func_149()) || func_153()) || func_152()) || func_150())
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

var func_148()//Position - 0x8783
{
	return Global_16B42.f_1;
}

int func_149()//Position - 0x8791
{
	if (Global_15FA6 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_147B0[Global_15FA6 /*34*/].f_F, 13);
	}
	return 0;
}

int func_150()//Position - 0x87B7
{
	if (unk_0xB731B8C5BCE89836(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_151()//Position - 0x87D1
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

bool func_152()//Position - 0x87FB
{
	return Global_16B4F.f_142 > 0;
}

bool func_153()//Position - 0x880C
{
	return Global_16B4F.f_141 > 0;
}

var func_154()//Position - 0x881D
{
	return Global_140856;
}

int func_155()//Position - 0x8829
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		return Global_161D2.f_2C == 1;
	}
	return 0;
}

int func_156()//Position - 0x8845
{
	if (func_169(iLocal_58))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_58))
		{
			if (func_161(iLocal_58))
			{
				func_159(iLocal_58, "HIT_WOMAN", 24);
				return 1;
			}
			else
			{
				func_158();
			}
		}
		else
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	if (!unk_0x36CEFBE9B745A58D(iLocal_57))
	{
		if (((func_161(iLocal_57) || !unk_0x5237AF95232D78C5(iLocal_57, 0)) || unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), iLocal_57)) || unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), iLocal_57))
		{
			func_157(iLocal_58);
			return 1;
		}
	}
	else
	{
		func_157(iLocal_58);
		return 1;
	}
	if (unk_0xD9C1758D86688CEA(iLocal_63, unk_0xBC25C936A095B5BA(), 1))
	{
		if (func_169(iLocal_58))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_58))
			{
				func_157(iLocal_58);
				func_159(iLocal_58, "GENERIC_SHOCKED_HIGH", 24);
			}
		}
		func_219();
	}
	if (unk_0x6E06C0DB9B43570D() >= 19 || unk_0x6E06C0DB9B43570D() <= 6)
	{
		if (!func_82())
		{
			if (func_76(&uLocal_96, "BUSTOAU", "BUSTO_TIME", 4, 0, 0, 0))
			{
				return 1;
			}
		}
	}
	if (!unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_63, 220f, 220f, 30f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

void func_157(int iParam0)//Position - 0x898A
{
	if (func_169(iLocal_58))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_58))
		{
			unk_0x2E35C4FA5F0ED22F(iParam0, false);
			unk_0xA4E856A8CD53B8DF(iParam0);
			unk_0x5558ED6D4A2DEC93(iParam0, unk_0xBC25C936A095B5BA(), 100f, -1, 0, 0);
			unk_0x22321800954A532E(iParam0, true);
			func_31();
		}
	}
}

void func_158()//Position - 0x89D1
{
	if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_58, 40f, 40f, 5f, 0, 1, 0))
	{
		iLocal_70 = unk_0x105601648511CC64();
		if ((iLocal_70 - iLocal_71) > 10000)
		{
			if (!func_82())
			{
				func_76(&uLocal_96, "BUSTOAU", "BUSTO_STREET", 4, 0, 0, 0);
			}
			iLocal_71 = unk_0x105601648511CC64();
		}
	}
}

void func_159(int iParam0, char* sParam1, int iParam2)//Position - 0x8A2B
{
	unk_0x53D8178763EDCE60(iParam0, sParam1, func_160(iParam2), 1);
}

int func_160(int iParam0)//Position - 0x8A42
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

int func_161(int iParam0)//Position - 0x8C37
{
	if (func_162(iParam0, &uLocal_90, &uLocal_87, iLocal_85, bLocal_91, 1077936128, 0) || unk_0x2CDE18D6C89522AD(iParam0))
	{
		func_157(iParam0);
		return 1;
	}
	return 0;
}

int func_162(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, float fParam5, int iParam6)//Position - 0x8C71
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
				if (func_168(iParam0, iParam6))
				{
					func_167("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_167("	aggroReason = EAggro_Attacked\n");
					*uParam1 = 3;
					func_166(iParam0);
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
					func_167("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_167("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_166(iParam0);
					return 1;
				}
				if (unk_0x876474582C5DECDE(vVar4 - Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), vVar4 + Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), 0))
				{
					func_167("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_167("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_166(iParam0);
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
								func_167("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
								func_167("	aggro Ped knows player is pointing gun\n");
								func_163("		lockOnTimer = ", *uParam2);
								func_167("\n");
								func_163("		time since not LockedOn = ", (unk_0x105601648511CC64() - iLocal_43));
								func_167("\n");
								bVar2 = true;
								if (unk_0x105601648511CC64() > (iLocal_43 + *uParam2))
								{
									func_167("			aggroReason = EAggro_HostileOrEnemy\n");
									*uParam1 = 2;
									func_166(iParam0);
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
					func_167("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_167("			aggroReason = EAggro_Danger\n");
					*uParam1 = 0;
					func_166(iParam0);
					return 1;
				}
			}
		}
	}
	if (!bVar2)
	{
		iLocal_43 = unk_0x105601648511CC64();
	}
	return 0;
}

void func_163(char* sParam0, int iParam1)//Position - 0x8ECF
{
	func_165(sParam0);
	func_164(iParam1);
}

void func_164(int iParam0)//Position - 0x8EE3
{
	if (iParam0 > 0)
	{
	}
}

void func_165(char* sParam0)//Position - 0x8EF1
{
	if (unk_0x3362CDE8460ED38B(sParam0, sParam0))
	{
	}
}

void func_166(int iParam0)//Position - 0x8F04
{
	unk_0xAFD2CBD312D69CFA(iParam0);
}

void func_167(char* sParam0)//Position - 0x8F12
{
	func_165(sParam0);
}

int func_168(int iParam0, int iParam1)//Position - 0x8F20
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

int func_169(int iParam0)//Position - 0x8F6D
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

void func_170()//Position - 0x8F8E
{
	unk_0xA9DC1DD22D05DB5B(0, 1);
	unk_0xA9DC1DD22D05DB5B(1, 1);
	unk_0xA9DC1DD22D05DB5B(2, 1);
	unk_0xA9DC1DD22D05DB5B(3, 1);
	unk_0xA9DC1DD22D05DB5B(4, 1);
	unk_0xA9DC1DD22D05DB5B(5, 1);
	unk_0xA9DC1DD22D05DB5B(6, 1);
	unk_0xA9DC1DD22D05DB5B(7, 1);
	unk_0xA9DC1DD22D05DB5B(8, 1);
}

void func_171()//Position - 0x8FCD
{
	unk_0x741575A8348963A2(unk_0xB5CEFD608600A09F());
	unk_0xC932A847D0064406(unk_0xB5CEFD608600A09F(), 5);
	unk_0xC932A847D0064406(unk_0xB5CEFD608600A09F(), 3);
	unk_0xC932A847D0064406(unk_0xB5CEFD608600A09F(), 15);
	unk_0xC932A847D0064406(unk_0xB5CEFD608600A09F(), 2);
	unk_0xC932A847D0064406(unk_0xB5CEFD608600A09F(), 4);
}

void func_172()//Position - 0x900B
{
	if (iLocal_75)
	{
		unk_0x4B656426561BA934(vLocal_77.x, vLocal_77.y, vLocal_78.x, vLocal_78.y);
	}
}

void func_173()//Position - 0x902E
{
	if (unk_0xC32F6E031EA6C09E("RAIN") || unk_0xC32F6E031EA6C09E("THUNDER"))
	{
		unk_0x34DAC25A04E24704("OVERCAST", 10000f);
	}
}

void func_174()//Position - 0x905C
{
	int iVar0;
	int iVar1;
	
	if (func_177())
	{
		func_219();
	}
	else
	{
		iVar0 = joaat("a_f_m_bevhills_02");
		iVar1 = joaat("s_m_m_gentransport");
		unk_0xF243B7A14FCFD0F4(iVar0);
		unk_0xF243B7A14FCFD0F4(iVar1);
		unk_0x522053D86D6E1C7A(sLocal_262);
		unk_0xF243B7A14FCFD0F4(joaat("tourbus"));
		unk_0x900CF084251DED26("BUSTOUR", 2);
		if ((((unk_0xD6513D668481290A(iVar0) && unk_0xD6513D668481290A(iVar1)) && unk_0xF9E082857622D91E(sLocal_262)) && unk_0xD6513D668481290A(joaat("tourbus"))) && unk_0xFA9040D29FE330BD(2))
		{
			unk_0xCB8EEC006EBFC1E7(0);
			unk_0x3F473AC37A85C668(vLocal_53, &uLocal_54, &uLocal_64, 1, 1077936128, 0);
			iLocal_63 = unk_0x61C05BF08A1E0EFE(joaat("tourbus"), Local_51.f_1, Local_51.f_D, true, true, false);
			unk_0xF0A40F19AAB79E88(iLocal_63, 1084227584);
			unk_0xD421BC740C5340C3(iLocal_63, 3);
			unk_0xD1FBDB199C700B42(iLocal_63, 0);
			unk_0x004811915F93A42D(iLocal_63, "OFF");
			unk_0xD38EB677CBE7440A(iLocal_63, false, 0);
			unk_0xE54F7105CEA81918(iLocal_63, 2, true);
			unk_0x8510BC031C24B862(joaat("tourbus"), true);
			unk_0xB34BE463F164799F(iLocal_63, 100f);
			iLocal_57 = unk_0xFD8987C090669BD5(iLocal_63, 26, iVar1, -1, 1, true);
			unk_0x2E35C4FA5F0ED22F(iLocal_57, true);
			unk_0xC8FD3EBBB90E8D7F(iLocal_57, 251, true);
			unk_0x043E40A218742697(iLocal_57, 1);
			if (unk_0x724D816EA203A79E(iLocal_57))
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_57))
				{
					unk_0xB0031DDAE4FF0BC3(iLocal_57, 3, 1, 2, 0);
					unk_0xB0031DDAE4FF0BC3(iLocal_57, 4, 0, 2, 0);
				}
			}
			iLocal_58 = unk_0x01B3635C3E8EDD81(26, iVar0, 102.9893f, 248.5367f, 107.1759f, 329f, 1, true);
			unk_0x36C3B58DA78A2679(iLocal_58, "A_F_M_BEVHILLS_02_WHITE_FULL_02");
			unk_0x2E35C4FA5F0ED22F(iLocal_58, true);
			unk_0xB105531EDD3DE51B(iLocal_58, false);
			unk_0xB0031DDAE4FF0BC3(iLocal_58, 0, 1, 0, 0);
			unk_0xB0031DDAE4FF0BC3(iLocal_58, 2, 1, 0, 0);
			unk_0xB0031DDAE4FF0BC3(iLocal_58, 3, 0, 0, 0);
			unk_0xB0031DDAE4FF0BC3(iLocal_58, 4, 1, 0, 0);
			unk_0xC5A6DFE2B8987B17(&iLocal_80);
			unk_0xE896C0AD02364F2A(0, sLocal_262, "IDLE_A", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0xE896C0AD02364F2A(0, sLocal_262, "IDLE_B", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0xE896C0AD02364F2A(0, sLocal_262, "IDLE_C", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0xAFD74A5E065F57E0(iLocal_80, 1);
			unk_0x535008C596714F9E(iLocal_80);
			unk_0xA8E6405305C0D7DF(iLocal_58, iLocal_80);
			unk_0x02DAF06EA4F08219(&iLocal_80);
			func_176(&uLocal_96, 3, iLocal_58, "TOURGUIDE", 0, 1);
			if (!unk_0x2DA8CA50A72528FB(iLocal_68))
			{
				iLocal_68 = unk_0x511FE22BCF5353CD(iLocal_63);
				unk_0xBF0E22F3E083C33D(iLocal_68, 85);
			}
			func_175();
			iLocal_46 = 1;
		}
	}
}

void func_175()//Position - 0x92D4
{
	unk_0x91629AC1E1F78419(iLocal_57, 17, true);
	unk_0x91629AC1E1F78419(iLocal_58, 17, true);
	unk_0xB2CB6EAA6B280A84("re_bus_tours1", &iLocal_66);
	unk_0x4106FAF8AA1D69D5(iLocal_57, iLocal_66);
	unk_0x4106FAF8AA1D69D5(iLocal_58, iLocal_66);
	unk_0xA902E18EDF6FA0C8(1, iLocal_66, 1862763509);
}

void func_176(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x931D
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

int func_177()//Position - 0x93B8
{
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), vLocal_44) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(unk_0xB5D9AE572C19509E(unk_0xBC25C936A095B5BA())) > 1369f && !func_139())
		{
			return 0;
		}
	}
	if (func_140())
	{
		return 1;
	}
	if (func_133(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

void func_178()//Position - 0x943E
{
}

void func_179()//Position - 0x9446
{
}

void func_180()//Position - 0x944E
{
	struct<15> Var0;
	struct<15> Var1;
	struct<15> Var2;
	struct<15> Var3;
	struct<15> Var4;
	struct<15> Var5;
	struct<15> Var6;
	struct<15> Var7;
	struct<15> Var8;
	struct<15> Var9;
	struct<15> Var10;
	struct<15> Var11;
	struct<15> Var12;
	
	Var0.f_1 = { -24.85f, 263.6119f, 106.5301f };
	Var0.f_4 = { -62.9588f, 335.2273f, 136.055f };
	Var0.f_7 = 10000;
	Var0.f_8 = (8f - 1f);
	Var0.f_A = { -0.9281f, 266.8539f, 108.0699f };
	Var0.f_D = 82f;
	Var0 = "BUSTO_P1";
	Var1.f_1 = { -214.9f, 267.4f, 91.5f };
	Var1.f_4 = { -253.7246f, 247.9038f, 95.2063f };
	Var1.f_7 = 9000;
	Var1.f_8 = (8f - 1f);
	Var1.f_A = { -188.67f, 265.43f, 92.15f };
	Var1.f_D = 81.79f;
	Var1 = "BUSTO_P5";
	Var2.f_1 = { -522.1094f, 260.8653f, 82.063f };
	Var2.f_4 = { -549.5739f, 272.7824f, 82.9753f };
	Var2.f_7 = 9000;
	Var2.f_8 = 8f;
	Var2.f_A = { -435.0476f, 249.8727f, 82.0866f };
	Var2.f_D = 85f;
	Var2 = "BUSTO_P6";
	Var3.f_1 = { -575.5643f, 512.5427f, 105.0293f };
	Var3.f_4 = { -586.4406f, 529.1188f, 108.8539f };
	Var3.f_7 = 9000;
	Var3.f_8 = (8f + 2f);
	Var3.f_A = { -552.3732f, 481.7021f, 102.1826f };
	Var3.f_D = 25f;
	Var3 = "BUSTO_P7";
	Var4.f_1 = { -732.2224f, 474.0897f, 105.0424f };
	Var4.f_4 = { -728.4921f, 448.0321f, 107.9036f };
	Var4.f_7 = 9000;
	Var4.f_8 = (8f + 3f);
	Var4.f_A = { -688.5469f, 490.5489f, 108.784f };
	Var4.f_D = 105f;
	Var4 = "BUSTO_P8";
	Var5.f_1 = { -1037.97f, 468.9468f, 76.7167f };
	Var5.f_4 = { -1065.762f, 469.4401f, 80.3204f };
	Var5.f_7 = 9000;
	Var5.f_8 = (8f + 2f);
	Var5.f_A = { -973.6752f, 499.3758f, 78.8246f };
	Var5.f_D = 47f;
	Var5 = "BUSTO_P9";
	Var6.f_1 = { -1231.581f, 239.014f, 64.8339f };
	Var6.f_4 = { -1309.778f, 261.4181f, 65.87f };
	Var6.f_7 = 9000;
	Var6.f_8 = (8f + 4f);
	Var6.f_A = { -1168.448f, 257.0845f, 66.3477f };
	Var6.f_D = 105f;
	Var6 = "BUSTO_P10";
	Var7.f_1 = { -1406.729f, -160.0764f, 46.5244f };
	Var7.f_4 = { -1421.479f, -193.5715f, 50f };
	Var7.f_7 = 9000;
	Var7.f_8 = (8f + 4f);
	Var7.f_A = { -1398.391f, -114.7998f, 50.028f };
	Var7.f_D = 178f;
	Var7 = "BUSTO_P11";
	Var8.f_1 = { -1316.205f, -487.0228f, 32.3407f };
	Var8.f_4 = { -1271.75f, -500.2502f, 44.4638f };
	Var8.f_7 = 9000;
	Var8.f_8 = (15f + 4f);
	Var8.f_A = { -1356.912f, -437.5389f, 34.0665f };
	Var8.f_D = 215f;
	Var8 = "BUSTO_P3";
	Var9.f_1 = { -723.1427f, -239.0515f, 36.0196f };
	Var9.f_4 = { -696.7581f, -239.2147f, 40.8147f };
	Var9.f_7 = 9000;
	Var9.f_8 = (15f + 6f);
	Var9.f_A = { -777.5432f, -262.5703f, 36.0082f };
	Var9.f_D = 290f;
	Var9 = "BUSTO_P2";
	Var10.f_1 = { -690.7699f, -25.762f, 36.9897f };
	Var10.f_4 = { -695f, 22f, 53f };
	Var10.f_7 = 9000;
	Var10.f_8 = (15f + 5f);
	Var10.f_A = { -696.695f, -40.7958f, 36.8186f };
	Var10.f_D = 27.9347f;
	Var10 = "BUSTO_P14";
	Var11.f_1 = { 179.6443f, -340.3767f, 43.0448f };
	Var11.f_4 = { 235.139f, -393.0182f, 50.0242f };
	Var11.f_7 = 6000;
	Var11.f_8 = (15f + 5f);
	Var11.f_A = { 113.5266f, -317.9667f, 44.6514f };
	Var11.f_D = 250f;
	Var11 = "BUSTO_P13";
	Var12.f_1 = { 288.2845f, 166.6872f, 103.309f };
	Var12.f_4 = { 299.9585f, 198.3281f, 113.3522f };
	Var12.f_7 = 6000;
	Var12.f_8 = (15f + 3f);
	Var12.f_A = { 344.1458f, 148.4554f, 102.159f };
	Var12.f_D = 70f;
	Var12 = "BUSTO_P4";
	Local_51.f_1 = { 99.4291f, 246.9366f, 107.2005f };
	Local_51.f_4 = { 102.6186f, 254.6904f, 114.0255f };
	Local_51.f_7 = -1;
	Local_51.f_8 = 8f;
	Local_51.f_A = { 177.5471f, 209.657f, 105.0543f };
	Local_51.f_D = 70f;
	Local_51 = "BUSTO_Px";
	func_181(Var0);
	func_181(Var1);
	func_181(Var2);
	func_181(Var3);
	func_181(Var4);
	func_181(Var5);
	func_181(Var6);
	func_181(Var7);
	func_181(Var8);
	func_181(Var9);
	func_181(Var10);
	func_181(Var11);
	func_181(Var12);
	func_181(Local_51);
	iLocal_52 = 0;
}

void func_181(char[60] cParam0)//Position - 0x9A1A
{
	Local_50[iLocal_52 /*15*/] = { cParam0 };
	iLocal_52++;
}

void func_182(int iParam0)//Position - 0x9A39
{
	if (iParam0 == -1)
	{
		iParam0 = func_64();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_184(iParam0);
	unk_0x8A623F2A0D19557F(0);
	unk_0xCB0D7BF24DBB59C6(1);
	Global_19AF6 = 0;
	func_183();
}

void func_183()//Position - 0x9A6F
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

void func_184(int iParam0)//Position - 0x9AAC
{
	Global_19AF9 = iParam0;
}

int func_185(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x9ABA
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
		iParam1 = func_64();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_217())
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
			if (SYSTEM::VMAG2(unk_0xB5D9AE572C19509E(unk_0xBC25C936A095B5BA())) > 1369f && !func_139())
			{
				return 0;
			}
		}
		if (!Global_19B04.f_2360)
		{
			return 0;
		}
		if (func_45(0))
		{
			return 0;
		}
		if (func_140())
		{
			return 0;
		}
		if (func_216())
		{
			return 0;
		}
		if (Global_19AF9 != -1)
		{
			return 0;
		}
		if (func_12(func_10()))
		{
			if (func_133(100f, 1) != -1)
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
		if (!func_215(iParam1))
		{
			return 0;
		}
		if (func_12(func_10()))
		{
			if (func_214(func_10()) == 4 || func_214(func_10()) == 5)
			{
				return 0;
			}
		}
		if (func_12(func_10()))
		{
			if (!func_213(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_212(Global_19B04.f_6186.f_2B[iParam1]))
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
		if (func_211())
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
		if (!func_147(4))
		{
			return 0;
		}
		if (!func_129(5))
		{
			return 0;
		}
		if (func_210(iParam1, iParam2) && !bParam3)
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
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_210(0, 0))
		{
			return 0;
		}
		if (Global_634F)
		{
			return 0;
		}
		if (func_215(30) && !func_210(30, 0))
		{
			if (iParam1 != 30)
			{
				if (SYSTEM::VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_12(func_10()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				vVar3 = { Global_19B04.f_932.f_21B.f_8E8[iVar2 /*3*/] };
				iVar4 = Global_19B04.f_932.f_21B.f_8E4[iVar2];
				if (func_209(iVar4))
				{
					if (func_187(iVar2))
					{
						if (!func_186(vVar3, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false), vVar3) < (210f * 210f))
							{
								if (func_10() != iVar2)
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

bool func_186(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x9E54
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_187(int iParam0)//Position - 0x9E9B
{
	int iVar0;
	
	iVar0 = Global_19B04.f_932.f_21B.f_8E4[iParam0];
	return func_188(iVar0);
}

int func_188(int iParam0)//Position - 0x9EBC
{
	return func_189(iParam0, 1);
}

int func_189(int iParam0, int iParam1)//Position - 0x9ECB
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_209(iParam0))
	{
		return 0;
	}
	func_190(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_190(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x9F1E
{
	func_191(func_202(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_191(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x9F3C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_201(iParam0, iParam1))
	{
		iVar0 = func_200(iParam1);
		iVar1 = func_198(iParam0);
		iVar2 = (func_198(iParam0) - func_198(iParam1));
		iVar3 = (func_200(iParam0) - func_200(iParam1));
		iVar4 = (func_197(iParam0) - func_197(iParam1));
		iVar5 = (func_196(iParam0) - func_196(iParam1));
		iVar6 = (func_195(iParam0) - func_195(iParam1));
		iVar7 = (func_194(iParam0) - func_194(iParam1));
	}
	else
	{
		iVar0 = func_200(iParam0);
		iVar1 = func_198(iParam1);
		iVar2 = (func_198(iParam1) - func_198(iParam0));
		iVar3 = (func_200(iParam1) - func_200(iParam0));
		iVar4 = (func_197(iParam1) - func_197(iParam0));
		iVar5 = (func_196(iParam1) - func_196(iParam0));
		iVar6 = (func_195(iParam1) - func_195(iParam0));
		iVar7 = (func_194(iParam1) - func_194(iParam0));
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
		iVar4 = (iVar4 + func_193(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_192(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_192(float fParam0, float fParam1, float fParam2)//Position - 0xA13D
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

int func_193(int iParam0, int iParam1)//Position - 0xA17F
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

int func_194(int iParam0)//Position - 0xA221
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_195(int iParam0)//Position - 0xA234
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_196(int iParam0)//Position - 0xA247
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_197(int iParam0)//Position - 0xA25A
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_198(int iParam0)//Position - 0xA26C
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_199(unk_0xFA30DFD0084E92FE(iParam0, 31), -1, 1)) + 2011;
}

int func_199(bool bParam0, int iParam1, int iParam2)//Position - 0xA291
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_200(int iParam0)//Position - 0xA2A8
{
	return iParam0 & 15;
}

int func_201(int iParam0, int iParam1)//Position - 0xA2B5
{
	int iVar0;
	int iVar1;
	
	if (!func_209(iParam1) || !func_209(iParam0))
	{
		return 1;
	}
	iVar0 = func_198(iParam0);
	iVar1 = func_198(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_200(iParam0);
	iVar1 = func_200(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_197(iParam0);
	iVar1 = func_197(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_196(iParam0);
	iVar1 = func_196(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_195(iParam0);
	iVar1 = func_195(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_194(iParam0);
	iVar1 = func_194(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_202()//Position - 0xA3C1
{
	var uVar0;
	
	func_208(&uVar0, unk_0xF40D00CD7B81C0A8());
	func_207(&uVar0, unk_0x7E09057438B9D216());
	func_206(&uVar0, unk_0x6E06C0DB9B43570D());
	func_205(&uVar0, unk_0xBE14F159908E4EE5());
	func_204(&uVar0, unk_0xDD6A91E47ED4D0CF());
	func_203(&uVar0, unk_0x4EEB3860BFC44B78());
	return uVar0;
}

void func_203(var uParam0, int iParam1)//Position - 0xA407
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

void func_204(var uParam0, int iParam1)//Position - 0xA48D
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_205(var uParam0, int iParam1)//Position - 0xA4C0
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_200(*uParam0);
	iVar1 = func_198(*uParam0);
	if (iParam1 < 1 || iParam1 > func_193(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_206(var uParam0, int iParam1)//Position - 0xA511
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_207(var uParam0, int iParam1)//Position - 0xA54B
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_208(var uParam0, int iParam1)//Position - 0xA586
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_209(int iParam0)//Position - 0xA5C2
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
	iVar0 = func_194(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_195(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_196(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_198(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_200(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_197(iParam0);
	if (iVar5 < 1 || iVar5 > func_193(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_210(int iParam0, int iParam1)//Position - 0xA69E
{
	if (unk_0xFA30DFD0084E92FE(Global_19B04.f_6186.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_211()//Position - 0xA6C1
{
	func_9();
	if (Global_C60[Global_389D /*2811*/][0 /*281*/].f_103 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_212(int iParam0)//Position - 0xA6E9
{
	return func_201(func_202(), iParam0);
}

int func_213(int iParam0, int iParam1, int iParam2)//Position - 0xA6FB
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_10();
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

int func_214(int iParam0)//Position - 0xA7DF
{
	if (!func_12(iParam0))
	{
		return 7;
	}
	return Global_19B04.f_1DEB.f_397[iParam0];
}

bool func_215(int iParam0)//Position - 0xA803
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_217())
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

int func_216()//Position - 0xA861
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

int func_217()//Position - 0xA8A5
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

int func_218()//Position - 0xA960
{
	if (unk_0x6E06C0DB9B43570D() > 19 || unk_0x6E06C0DB9B43570D() < 6)
	{
		return 0;
	}
	return 1;
}

void func_219()//Position - 0xA983
{
	int iVar0;
	
	unk_0x4110C66549D5F74F();
	unk_0x11E7662BFA0E7D15();
	if (unk_0xBFFAD293E2DA992B())
	{
		unk_0xF04F2EB4128A4367(0);
		unk_0xF3F01A78937DC905(0f);
	}
	if (unk_0xEF0E25DA0CB6E8FF(iLocal_82))
	{
		unk_0x348665177DBFB93B(iLocal_82, false);
		unk_0x062C9995BFD27B2A(false, false, 3000, 1, 0, 0);
		unk_0x4EC087603E1DEF9C(iLocal_82, 0);
		unk_0x40E44AA6E6C56BCA(0);
	}
	if (unk_0xEF0E25DA0CB6E8FF(iLocal_83))
	{
		unk_0x4EC087603E1DEF9C(iLocal_83, 0);
	}
	if (iLocal_47 >= 2)
	{
		unk_0xAEEF3183457D51DF(iLocal_263);
	}
	unk_0x43F06392C4EF25E0(true);
	if (iLocal_47 >= 1)
	{
		if (!unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()))
		{
			unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_57))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_57))
		{
			unk_0xC8FD3EBBB90E8D7F(iLocal_57, 251, false);
			unk_0x0130A557FECA322C(iLocal_57, 1);
			unk_0x22321800954A532E(iLocal_57, true);
			unk_0x2E35C4FA5F0ED22F(iLocal_57, false);
		}
		unk_0x02537C8C1BEEB477(&iLocal_57);
	}
	if (unk_0x724D816EA203A79E(iLocal_58))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_58))
		{
			unk_0xB105531EDD3DE51B(iLocal_58, true);
			unk_0x22321800954A532E(iLocal_58, true);
			unk_0x2E35C4FA5F0ED22F(iLocal_58, false);
		}
		unk_0x02537C8C1BEEB477(&iLocal_58);
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0x724D816EA203A79E(uLocal_59[iVar0]))
		{
			if (func_169(uLocal_59[iVar0]))
			{
				unk_0x2E35C4FA5F0ED22F(uLocal_59[iVar0], false);
			}
			unk_0x02537C8C1BEEB477(&(uLocal_59[iVar0]));
		}
		iVar0++;
	}
	if (unk_0x724D816EA203A79E(iLocal_63))
	{
		unk_0xD421BC740C5340C3(iLocal_63, 1);
		unk_0x8300C56586249382(iLocal_63, 1);
		unk_0x1E7A09C1710FB071(&iLocal_63);
	}
	unk_0x4AED68BFACFB14CB(true);
	if (func_144())
	{
		func_231();
	}
	else
	{
		func_230(&Global_62F8);
	}
	unk_0xD2640EE7BD20D483(1);
	func_220(-1);
	SYSTEM::WAIT(0);
	unk_0x95E4B6F3ED223F5A();
}

void func_220(int iParam0)//Position - 0xAB14
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_64();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_144())
	{
		func_223(iParam0);
		unk_0x3FF92BBF0607A406(0, 0);
		Global_19AFB = unk_0x105601648511CC64();
		func_222(30000);
		StringCopy(&cVar0, func_221(Global_19AF9, 1), 64);
		if (func_63(Global_19AF9) > 0)
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
	func_230(&Global_62F8);
	Global_19AFA = 0;
	func_184(-1);
}

char* func_221(int iParam0, bool bParam1)//Position - 0xABC9
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

void func_222(int iParam0)//Position - 0xAE12
{
	Global_8E68 = (unk_0x105601648511CC64() + iParam0);
}

void func_223(int iParam0)//Position - 0xAE24
{
	func_224(iParam0, 0, func_229(iParam0));
}

void func_224(int iParam0, int iParam1, int iParam2)//Position - 0xAE39
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_202();
	func_227(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_226(iParam0, &uVar0);
	Var1 = { func_225(&uVar0) };
}

struct<16> func_225(var uParam0)//Position - 0xAE68
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_196(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_195(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_194(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_197(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_200(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_198(*uParam0), 64);
	return Var0;
}

void func_226(int iParam0, var uParam1)//Position - 0xAF38
{
	Global_19B04.f_6186.f_2B[iParam0] = *uParam1;
}

void func_227(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xAF50
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_198(*uParam0);
	iVar1 = func_200(*uParam0);
	iVar2 = func_197(*uParam0);
	iVar3 = func_196(*uParam0);
	iVar4 = func_195(*uParam0);
	iVar5 = func_194(*uParam0);
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
	iVar6 = func_193(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_193(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_228(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_228(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xB0D2
{
	func_208(uParam0, iParam1);
	func_207(uParam0, iParam2);
	func_206(uParam0, iParam3);
	func_204(uParam0, iParam5);
	func_205(uParam0, iParam4);
	func_203(uParam0, iParam6);
}

int func_229(int iParam0)//Position - 0xB10A
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

void func_230(var uParam0)//Position - 0xB2AD
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

void func_231()//Position - 0xB2EA
{
	func_222(30000);
	func_230(&Global_62F8);
	Global_62EC = unk_0x105601648511CC64();
}

