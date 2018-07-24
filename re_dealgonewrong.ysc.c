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
	vector3 vLocal_47 = { 0f, 0f, 0f };
	vector3 vLocal_48[9] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_49[9] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	vector3 vLocal_50 = { 0f, 0f, 0f };
	vector3 vLocal_51 = { 0f, 0f, 0f };
	vector3 vLocal_52 = { 0f, 0f, 0f };
	vector3 vLocal_53 = { 0f, 0f, 0f };
	vector3 vLocal_54 = { 0f, 0f, 0f };
	vector3 vLocal_55 = { 0f, 0f, 0f };
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	float fLocal_60 = 0f;
	vector3 vLocal_61 = { 0f, 0f, 0f };
	var uLocal_62 = 0;
	vector3 vLocal_63 = { 0f, 0f, 0f };
	float fLocal_64 = 0f;
	float fLocal_65 = 0f;
	float fLocal_66 = 0f;
	float fLocal_67 = 0f;
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
	int iLocal_81[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_82[2] = { 0, 0 };
	int iLocal_83[4] = { 0, 0, 0, 0 };
	int iLocal_84[4] = { 0, 0, 0, 0 };
	int iLocal_85[5] = { 0, 0, 0, 0, 0 };
	int iLocal_86[4] = { 0, 0, 0, 0 };
	int iLocal_87[4] = { 0, 0, 0, 0 };
	int iLocal_88[4] = { 0, 0, 0, 0 };
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_93[4] = { 0, 0, 0, 0 };
	int iLocal_94[4] = { 0, 0, 0, 0 };
	var uLocal_95[4] = { 0, 0, 0, 0 };
	var uLocal_96[4] = { 0, 0, 0, 0 };
	int iLocal_97 = 0;
	int iLocal_98[5] = { 0, 0, 0, 0, 0 };
	int iLocal_99[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	vector3 vLocal_100 = { 0f, 0f, 0f };
	vector3 vLocal_101 = { 0f, 0f, 0f };
	vector3 vLocal_102 = { 0f, 0f, 0f };
	vector3 vLocal_103 = { 0f, 0f, 0f };
	vector3 vLocal_104[5] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_105 = 0;
	bool bLocal_106 = 0;
	bool bLocal_107 = 0;
	bool bLocal_108 = 0;
	bool bLocal_109 = 0;
	bool bLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	var uLocal_114 = 16;
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
	vector3 vLocal_279 = { 0f, 0f, 0f };
	vector3 vLocal_280[4] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_281 = { 0f, 0f, 0f };
	int iLocal_282 = 0;
	bool bLocal_283 = 0;
	struct<2> Local_284 = { 0, 5 } ;
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
	var uLocal_300 = 5;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
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
	vLocal_100 = { -1635.648f, 4737.801f, 52.4304f };
	vLocal_101 = { -1640.745f, 4696.386f, 39.279f };
	vLocal_47 = { ScriptParam_284.f_1[0 /*3*/] };
	if (unk_0xE8A79675302ED812(11))
	{
		func_170();
	}
	if (func_128(vLocal_47, -1, 0, 0, 0))
	{
		func_125(-1);
	}
	else
	{
		unk_0x95E4B6F3ED223F5A();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if ((unk_0x684B06333594F9EA() || unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), -1503.54f, 4934.923f, 114.2284f, 100f, 100f, 100f, false, true, 0)) || iLocal_45 == 2)
		{
			if (!func_124())
			{
				if (func_123())
				{
					func_170();
				}
			}
			unk_0x2E94C9549322098D("RE_DGW", 0);
			switch (iLocal_45)
			{
				case 0:
					if (iLocal_282)
					{
						iLocal_45 = 1;
					}
					else
					{
						if (func_111())
						{
							func_170();
						}
						func_108();
					}
					break;
				
				case 1:
					func_107();
					func_96();
					break;
				
				case 2:
					switch (iLocal_44)
					{
						case 0:
							func_107();
							iLocal_44 = 1;
							break;
						
						case 1:
							func_107();
							func_76();
							if (iLocal_46 >= 6)
							{
								if (!func_75())
								{
									iVar0 = 0;
									while (iVar0 < 4)
									{
										if (bLocal_110)
										{
											func_74(&(iLocal_83[iVar0]), &(iLocal_93[iVar0]), &(iLocal_88[iVar0]), &(uLocal_95[iVar0]));
											func_69(iLocal_88[0], unk_0xD20EBB97FE8799ED(unk_0xBC25C936A095B5BA()), &uLocal_56, &uLocal_59, &vLocal_61, &fLocal_60, &uLocal_62, 0f, 0f, 0f, 1000, 0f);
											func_69(iLocal_88[1], unk_0xD20EBB97FE8799ED(unk_0xBC25C936A095B5BA()), &uLocal_56, &uLocal_59, &vLocal_61, &fLocal_60, &uLocal_62, 0f, 2f, 0f, 1000, 0f);
											func_64(&(iLocal_83[iVar0]), &(iLocal_93[iVar0]), &(iLocal_88[iVar0]), &(uLocal_95[iVar0]));
										}
										else if (bLocal_107)
										{
											func_74(&(iLocal_83[iVar0]), &(iLocal_93[iVar0]), &(iLocal_86[iVar0]), &(uLocal_95[iVar0]));
											func_69(iLocal_86[0], unk_0xD20EBB97FE8799ED(unk_0xBC25C936A095B5BA()), &uLocal_56, &uLocal_59, &vLocal_61, &fLocal_60, &uLocal_62, 0f, 0f, 0f, 1000, 0f);
											func_69(iLocal_86[1], unk_0xD20EBB97FE8799ED(unk_0xBC25C936A095B5BA()), &uLocal_56, &uLocal_59, &vLocal_61, &fLocal_60, &uLocal_62, 0f, 5f, 0f, 1000, 0f);
											func_64(&(iLocal_83[iVar0]), &(iLocal_93[iVar0]), &(iLocal_86[iVar0]), &(uLocal_95[iVar0]));
										}
										else if (bLocal_108)
										{
											func_74(&(iLocal_84[iVar0]), &(iLocal_94[iVar0]), &(iLocal_87[iVar0]), &(uLocal_96[iVar0]));
											func_69(iLocal_87[0], unk_0xD20EBB97FE8799ED(unk_0xBC25C936A095B5BA()), &uLocal_56, &uLocal_59, &vLocal_61, &fLocal_60, &uLocal_62, 0f, 0f, 0f, 1000, 0f);
											func_69(iLocal_87[1], unk_0xD20EBB97FE8799ED(unk_0xBC25C936A095B5BA()), &uLocal_56, &uLocal_59, &vLocal_61, &fLocal_60, &uLocal_62, 0f, 5f, 0f, 1000, 0f);
											func_64(&(iLocal_84[iVar0]), &(iLocal_94[iVar0]), &(iLocal_87[iVar0]), &(uLocal_96[iVar0]));
										}
										iVar0++;
									}
								}
								else
								{
									func_41();
								}
							}
							if (((unk_0x7214F4879DF8A314(unk_0xBC25C936A095B5BA()) || unk_0x62083F80FA40AAD2(unk_0xBC25C936A095B5BA())) && !unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vLocal_100, 100f, 100f, 100f, false, true, 0)) && iLocal_46 < 2)
							{
								func_41();
							}
							break;
					}
					break;
				
				case 3:
					func_1();
					break;
			}
		}
		else
		{
			func_170();
		}
	}
}

void func_1()//Position - 0x3B1
{
	int iVar0;
	
	if (iLocal_282 && !iLocal_105)
	{
		unk_0xB830DBD32591E1BC();
		unk_0xDF53A66AEE1401AA(1f);
		if (unk_0x2DA8CA50A72528FB(iLocal_89))
		{
			unk_0x07B8ECB35A4ED3AC(&iLocal_89);
		}
		if (unk_0x2DA8CA50A72528FB(iLocal_90))
		{
			unk_0x07B8ECB35A4ED3AC(&iLocal_90);
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (unk_0x2DA8CA50A72528FB(iLocal_93[iVar0]))
			{
				unk_0x07B8ECB35A4ED3AC(&(iLocal_93[iVar0]));
			}
			if (unk_0x2DA8CA50A72528FB(uLocal_95[iVar0]))
			{
				unk_0x07B8ECB35A4ED3AC(&(uLocal_95[iVar0]));
			}
			if (iLocal_46 >= 6)
			{
				if (unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_83[iVar0]))
					{
						if (unk_0xE642C1AC73CE364E(iLocal_83[iVar0], unk_0xBC25C936A095B5BA(), 100f, 100f, 100f, 0, 1, 0))
						{
							bLocal_109 = true;
						}
					}
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (unk_0x2DA8CA50A72528FB(iLocal_94[iVar0]))
			{
				unk_0x07B8ECB35A4ED3AC(&(iLocal_94[iVar0]));
			}
			if (unk_0x2DA8CA50A72528FB(uLocal_96[iVar0]))
			{
				unk_0x07B8ECB35A4ED3AC(&(uLocal_96[iVar0]));
			}
			if (iLocal_46 >= 6)
			{
				if (unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_84[iVar0]))
					{
						if (unk_0xE642C1AC73CE364E(iLocal_84[iVar0], unk_0xBC25C936A095B5BA(), 100f, 100f, 100f, 0, 1, 0))
						{
							bLocal_109 = true;
						}
					}
				}
			}
			iVar0++;
		}
		if (iLocal_44 >= 1)
		{
			unk_0xE85B33FB221A23CD(5, true);
			unk_0xE85B33FB221A23CD(3, true);
		}
		if (bLocal_109)
		{
			func_3(func_36(), 1, 25000);
		}
		iLocal_105 = 1;
	}
	if (!unk_0x33CC9445B2DF9387(vLocal_100, 30f) && SYSTEM::VDIST(func_2(unk_0xB5CEFD608600A09F()), vLocal_100) > 300f)
	{
		func_170();
	}
}

Vector3 func_2(int iParam0)//Position - 0x554
{
	return unk_0x541C2AEF053615BC(unk_0xA95CF30C72EB526E(iParam0), false);
}

int func_3(int iParam0, int iParam1, int iParam2)//Position - 0x567
{
	if (Global_19B04.f_6D75[iParam0 /*29*/].f_11 == 3)
	{
		return 0;
	}
	if (Global_19B04.f_6D75[iParam0 /*29*/].f_11 == 4)
	{
		return 0;
	}
	return func_4(Global_19B04.f_6D75[iParam0 /*29*/].f_11, 0, iParam1, iParam2, 0);
}

int func_4(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x5B0
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_35();
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
					func_34(99, 1);
					func_33(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_33(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_33(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_17(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_13(5))
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
							func_33(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_33(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_33(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_13(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_33(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_33(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_33(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_33(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_33(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_33(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_33(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_33(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_33(joaat("sp2_money_spent_property"), iParam3);
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
									func_33(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_33(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_33(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_33(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_33(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_33(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_13(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_33(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_33(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_33(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_33(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_33(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_33(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_12(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_34(95, iParam3);
					break;
				
				case 1:
					func_34(97, iParam3);
					break;
				
				case 2:
					func_34(96, iParam3);
					break;
			}
			func_34(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_7(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_7(iVar1);
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
					func_33(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_33(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_33(joaat("sp2_total_cash_earned"), iParam3);
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
	func_6(iParam0);
	if (Global_8C41 == 15)
	{
		func_5(0);
	}
	return 1;
}

void func_5(bool bParam0)//Position - 0xBAF
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

void func_6(int iParam0)//Position - 0xE31
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

void func_7(int iParam0)//Position - 0xE8B
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_10(129, 0, -1, 1);
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
	else if (unk_0xFA30DFD0084E92FE(Global_19B04.f_5037.f_1D7, iParam0) || unk_0xFA30DFD0084E92FE(Global_200000[func_9() /*12171*/].f_1E08.f_A, iParam0))
	{
		bVar0 = true;
		unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_5037.f_1D7), iParam0);
		unk_0x7CB6FD92BE491AD9(&(Global_200000[func_9() /*12171*/].f_1E08.f_A), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x2E94302CFF011F2E("COUP_RED");
		unk_0xC9C304D0AABE1335(func_8(iParam0));
		unk_0x7BB0762D8C75A3C7(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_8(int iParam0)//Position - 0xF5F
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

int func_9()//Position - 0xFDD
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_10(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0xFEA
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
		iParam2 = func_11();
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

int func_11()//Position - 0x14FC
{
	return Global_1407E0;
}

void func_12(int iParam0)//Position - 0x1508
{
	func_34(93, iParam0);
	func_34(29, iParam0);
	func_34(30, iParam0);
}

bool func_13(int iParam0)//Position - 0x1528
{
	if (iParam0 == 8)
	{
		return func_14(129, -1, -1);
	}
	if (!unk_0x7AF0088ABFA713B6())
	{
		return unk_0xFA30DFD0084E92FE(Global_19B04.f_5037.f_1D7, iParam0);
	}
	return unk_0xFA30DFD0084E92FE(Global_200000[func_9() /*12171*/].f_1E08.f_A, iParam0);
}

int func_14(int iParam0, int iParam1, int iParam2)//Position - 0x1576
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_11();
	}
	iVar1 = func_16(iParam0, iParam1);
	uVar2 = func_15(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDAB376DC6F83D68C(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_15(int iParam0)//Position - 0x15B3
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

int func_16(int iParam0, int iParam1)//Position - 0x189F
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_11();
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

int func_17(bool bParam0)//Position - 0x1B64
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
		func_32(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_18(27, 1);
	return 1;
}

int func_18(int iParam0, int iParam1)//Position - 0x1C1B
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_19(iParam0, iParam1);
}

int func_19(int iParam0, int iParam1)//Position - 0x1C36
{
	if (func_31(14) && !func_30(iParam0))
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
	if (func_29(&Global_411EB6))
	{
		if (func_27(&Global_411EB6, iParam0))
		{
			return 0;
		}
		if (func_20(&Global_411EB6, iParam0))
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

int func_20(var uParam0, int iParam1)//Position - 0x1CD3
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x6D5CBCB6411EDE89(iParam1))
	{
		return 0;
	}
	if (func_31(14) && !func_30(iParam1))
	{
		return 0;
	}
	if (func_27(uParam0, iParam1))
	{
		return 0;
	}
	if (func_26(uParam0) < 0f)
	{
		func_25(uParam0, 0);
	}
	func_23(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_21(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_21(var uParam0, int iParam1)//Position - 0x1D84
{
	int iVar0;
	
	if (unk_0x6D5CBCB6411EDE89(iParam1))
	{
		return 0;
	}
	if (func_31(14) && !func_30(iParam1))
	{
		return 0;
	}
	if (func_27(uParam0, iParam1))
	{
		return 0;
	}
	if (func_26(uParam0) < 0f)
	{
		func_25(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_22(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_22(var uParam0, int iParam1)//Position - 0x1DFF
{
	return (*uParam0)[iParam1] == 78;
}

void func_23(var uParam0)//Position - 0x1E10
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_24(uParam0, iVar0);
		iVar0++;
	}
	func_25(uParam0, (Global_411EB5 - 0.5f));
}

void func_24(var uParam0, int iParam1)//Position - 0x1E44
{
	(*uParam0)[iParam1] = 78;
}

void func_25(var uParam0, float fParam1)//Position - 0x1E54
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

float func_26(var uParam0)//Position - 0x1E71
{
	return uParam0->f_50;
}

bool func_27(var uParam0, int iParam1)//Position - 0x1E7D
{
	return func_28(uParam0, iParam1) != -1;
}

int func_28(var uParam0, int iParam1)//Position - 0x1E8F
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

bool func_29(var uParam0)//Position - 0x1EBC
{
	return uParam0->f_4F == 1;
}

int func_30(int iParam0)//Position - 0x1ECA
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

bool func_31(int iParam0)//Position - 0x1F1A
{
	return Global_8C41 == iParam0;
}

int func_32(int iParam0, int iParam1)//Position - 0x1F28
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

void func_33(int iParam0, int iParam1)//Position - 0x1F79
{
	int iVar0;
	
	unk_0x6CB99B97664C3727(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x3A57956BCE003880(iParam0, iVar0, 1);
}

void func_34(int iParam0, int iParam1)//Position - 0x1F9C
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

void func_35()//Position - 0x1FF9
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

int func_36()//Position - 0x206E
{
	func_37();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_37()//Position - 0x2087
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_40(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_39(unk_0xBC25C936A095B5BA());
			if (func_38(iVar0) && (!func_31(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_38(Global_19B04.f_932.f_21B.f_10CD))
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

bool func_38(int iParam0)//Position - 0x2184
{
	return iParam0 < 3;
}

int func_39(int iParam0)//Position - 0x2190
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_40(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_40(int iParam0)//Position - 0x21CD
{
	if (func_38(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_41()//Position - 0x21F7
{
	while (func_63())
	{
		SYSTEM::WAIT(0);
	}
	while (!func_62())
	{
		SYSTEM::WAIT(0);
	}
	func_45(-1, 0);
	func_42();
	iLocal_45 = 3;
}

void func_42()//Position - 0x222B
{
	func_43();
}

int func_43()//Position - 0x2238
{
	if (func_44(0))
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

bool func_44(bool bParam0)//Position - 0x2283
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_1163A, 0);
}

void func_45(int iParam0, int iParam1)//Position - 0x22AE
{
	if (iParam0 == -1)
	{
		iParam0 = func_60();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_59(iParam0))
	{
		func_58(iParam0, iParam1);
		if (!func_57(51))
		{
			func_53("RE_REWARD", 1, 0, 4000, 10000, func_56(), 0, 138, 0);
			func_52(51);
		}
		if (func_51(iParam0))
		{
			Global_19B04.f_6186.f_2 = 3;
		}
		if (func_50(iParam0, iParam1) != 322)
		{
			func_47(func_50(iParam0, iParam1), vLocal_43.x, vLocal_43.y);
		}
		Global_19AF8 = iParam1;
		if (Global_19AF6 == 0)
		{
			if (((Global_19AF9 == 1 || Global_19AF9 == 5) || Global_19AF9 == 11) || Global_19AF9 == 25)
			{
				func_46(2);
			}
			else if ((Global_19AF9 == 26 || Global_19AF9 == 8) || Global_19AF9 == 17)
			{
				func_46(7);
			}
			else
			{
				func_46(1);
			}
		}
	}
}

void func_46(int iParam0)//Position - 0x23B2
{
	Global_19AF6 = iParam0;
}

void func_47(int iParam0, var uParam1, var uParam2)//Position - 0x23C0
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
		func_10((891 + iParam0), 1, -1, 1);
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
		func_48();
	}
}

void func_48()//Position - 0x24A8
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
		func_32(13, SYSTEM::FLOOR(Global_19B04.f_27B5.f_F0D));
	}
	if (!unk_0xF9BFA43C1BAFD016())
	{
		if (!Global_11542)
		{
			if (func_49() == 2 == 0 && !unk_0x7AF0088ABFA713B6())
			{
				if (unk_0x670C0C6C780A3F84())
				{
					Global_199FA = 0;
				}
				if (!Global_DA9F)
				{
					func_43();
				}
			}
		}
	}
}

int func_49()//Position - 0x2969
{
	return Global_62BD;
}

int func_50(int iParam0, int iParam1)//Position - 0x2974
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

int func_51(int iParam0)//Position - 0x2CE8
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

void func_52(int iParam0)//Position - 0x2D17
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

void func_53(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x2D59
{
	func_54(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_54(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x2D7A
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
		func_55();
	}
}

void func_55()//Position - 0x2F4D
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

int func_56()//Position - 0x306D
{
	func_37();
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

int func_57(int iParam0)//Position - 0x30B3
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

void func_58(int iParam0, int iParam1)//Position - 0x30F6
{
	unk_0xF0059F27F7BB6680(&(Global_19B04.f_6186.f_8[iParam0]), iParam1);
}

int func_59(int iParam0)//Position - 0x3111
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

int func_60()//Position - 0x31C2
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x1377080E9B0BD993(), 64);
	uVar1 = func_61(Var0);
	return uVar1;
}

int func_61(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x31DF
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

int func_62()//Position - 0x33B9
{
	return 1;
}

int func_63()//Position - 0x33C2
{
	if (Global_3DB8 != 0 || unk_0xE6711F601F11B66B())
	{
		return 1;
	}
	return 0;
}

void func_64(var uParam0, int iParam1, var uParam2, int iParam3)//Position - 0x33E4
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	
	if (unk_0x724D816EA203A79E(*uParam2))
	{
		if (unk_0xE59B7F5A03335350(*uParam2, 0))
		{
			if (!unk_0x36CEFBE9B745A58D(*uParam0))
			{
				if (unk_0x62F3A07C43FFB568(*uParam0, *uParam2, 0))
				{
					if (unk_0x2DA8CA50A72528FB(*iParam1))
					{
						unk_0x07B8ECB35A4ED3AC(iParam1);
					}
					iVar0 = 1;
				}
				else if (!unk_0x2DA8CA50A72528FB(*iParam1))
				{
					*iParam1 = func_67(*uParam0, 1, 145);
				}
			}
			if (!unk_0x2DA8CA50A72528FB(*iParam3))
			{
				if (iVar0 == 1)
				{
					*iParam3 = func_65(unk_0x541C2AEF053615BC(*uParam2, true), 0);
					unk_0x0D5352939CC40C16(*iParam3, 1);
					unk_0x12DB69036F6569F7(*iParam3, 9);
					unk_0x436D0272182E484D(*iParam3, "BLIP_VEH");
				}
			}
			else
			{
				vVar1 = { unk_0x5DC00ADB7E2FD7C2(*iParam3) };
				vVar2 = { unk_0x541C2AEF053615BC(*uParam2, true) };
				vVar1.x = (vVar1.x + (((vVar2.x - vVar1.x) / 1f) * SYSTEM::TIMESTEP()));
				vVar1.y = (vVar1.y + (((vVar2.y - vVar1.y) / 1f) * SYSTEM::TIMESTEP()));
				vVar1.z = (vVar1.z + (((vVar2.z - vVar1.z) / 1f) * SYSTEM::TIMESTEP()));
				unk_0x1423825E528B4DE1(*iParam3, vVar1);
				if (iVar0 == 0)
				{
					unk_0x07B8ECB35A4ED3AC(iParam3);
				}
			}
		}
		else
		{
			if (unk_0x2DA8CA50A72528FB(*iParam3))
			{
				unk_0x07B8ECB35A4ED3AC(iParam3);
			}
			if (!unk_0x36CEFBE9B745A58D(*uParam0))
			{
				if (!unk_0x2DA8CA50A72528FB(*iParam1))
				{
					*iParam1 = func_67(*uParam0, 1, 145);
				}
			}
		}
	}
}

int func_65(vector3 vParam0, bool bParam1)//Position - 0x352F
{
	int iVar0;
	
	iVar0 = unk_0x390CF6C8AD6903B7(vParam0);
	unk_0x3F5F1772D71D5EC4(iVar0, func_66(unk_0x7AF0088ABFA713B6(), 1f, 1f));
	unk_0x0BBAABB52887CF8C(iVar0, bParam1);
	return iVar0;
}

float func_66(bool bParam0, float fParam1, float fParam2)//Position - 0x355B
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_67(int iParam0, bool bParam1, int iParam2)//Position - 0x3572
{
	int iVar0;
	
	iVar0 = func_68(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x2DA8CA50A72528FB(iVar0)) && unk_0x0F6F4C227FB5DD52(&(Global_19B04.f_6D75[iParam2 /*29*/].f_3)))
	{
		unk_0x436D0272182E484D(iVar0, &(Global_19B04.f_6D75[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_68(int iParam0, bool bParam1, bool bParam2)//Position - 0x35C4
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

void func_69(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, float fParam5, var uParam6, vector3 vParam7, int iParam8, float fParam9)//Position - 0x3668
{
	vector3 vVar0;
	
	if (unk_0x724D816EA203A79E(iParam0) && unk_0xE59B7F5A03335350(iParam0, 0))
	{
		if (((((((unk_0x724D816EA203A79E(iParam1) && iParam0 != iParam1) && !unk_0xE7B3A320107C1379(unk_0x6F79ECA8C83E4357(iParam1))) && !unk_0xA19D269B4B5A1532(unk_0x6F79ECA8C83E4357(iParam1))) && !unk_0x8C1A6E7D5F410F4A(unk_0x6F79ECA8C83E4357(iParam1))) && !unk_0xFF2234981505F7F4(unk_0x6F79ECA8C83E4357(iParam1))) && unk_0x58F9E0EA914AEF2C(iParam1)) && func_73(iParam0))
		{
			if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(iParam1, true), *uParam4, true) > 20f)
			{
				*uParam2 = { *uParam4 };
				*uParam3 = *fParam5;
				*uParam2 = { unk_0x89D97EB4FAE4A574(*uParam2, *uParam3, vParam7) };
				func_72(iParam1, uParam4, fParam5);
			}
			if (!unk_0x41A5D6415E2CC10E(iParam0))
			{
				*uParam6 = unk_0x105601648511CC64();
			}
			else if ((unk_0x105601648511CC64() - *uParam6) > iParam8)
			{
				if (func_71(iParam0, iParam1, 1) > fParam9 && unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(iParam1, true), *uParam2, true) > 20f)
				{
					if (!func_70(*uParam2))
					{
						if (!unk_0x33CC9445B2DF9387(*uParam2, 3f))
						{
							unk_0xA0C0B32E74BE8DB7(*uParam2, 1.5f, 0);
							unk_0xEDAD35A0D81ED3FB(*uParam2, 3f, 0, 0, 0, 0, false, 0);
							unk_0x641B19E156645A92(iParam0, *uParam2, 1, false, 0, 1);
							unk_0x019CE76D5286C95C(iParam0, *uParam3);
							unk_0xF0A40F19AAB79E88(iParam0, 1084227584);
							unk_0xA4DFFFD5B234240D(iParam0, 10f);
							unk_0x2D655AA68FA1736B(iParam0, true, true, 0);
							*uParam6 = unk_0x105601648511CC64();
						}
						else
						{
							vVar0 = { unk_0x89D97EB4FAE4A574(vLocal_61, fLocal_60, vParam7) };
							if (!func_70(vVar0))
							{
								if (!unk_0x33CC9445B2DF9387(vVar0, 2f))
								{
									unk_0xA0C0B32E74BE8DB7(vVar0, 1.5f, 0);
									unk_0xEDAD35A0D81ED3FB(vVar0, 3f, 0, 0, 0, 0, false, 0);
									unk_0x641B19E156645A92(iParam0, vVar0, 1, false, 0, 1);
									unk_0x019CE76D5286C95C(iParam0, fLocal_60);
									unk_0xF0A40F19AAB79E88(iParam0, 1084227584);
									unk_0xA4DFFFD5B234240D(iParam0, 10f);
									unk_0x2D655AA68FA1736B(iParam0, true, true, 0);
									*uParam6 = unk_0x105601648511CC64();
									return;
								}
							}
						}
					}
				}
			}
		}
		else
		{
			*uParam6 = unk_0x105601648511CC64();
		}
	}
}

int func_70(vector3 vParam0)//Position - 0x3886
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

float func_71(int iParam0, int iParam1, bool bParam2)//Position - 0x38B0
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

void func_72(int iParam0, var uParam1, var uParam2)//Position - 0x390E
{
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
		{
			*uParam1 = { unk_0x541C2AEF053615BC(iParam0, true) };
			*uParam2 = unk_0x349C94FFF43E2979(iParam0);
		}
	}
}

int func_73(int iParam0)//Position - 0x393E
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
		{
			if (!unk_0x1AAF0C23233C57AF(iParam0, -1, 0))
			{
				iVar0 = unk_0x3187EF5798B5D209(iParam0, -1, 0);
				if (unk_0x724D816EA203A79E(iVar0))
				{
					if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_74(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3989
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(*iParam0))
	{
		if (unk_0x36CEFBE9B745A58D(*iParam0))
		{
			if (unk_0x2DA8CA50A72528FB(*iParam1))
			{
				unk_0x07B8ECB35A4ED3AC(iParam1);
			}
			unk_0x02537C8C1BEEB477(iParam0);
		}
		else
		{
			iVar0 = 1;
			if (!unk_0x5237AF95232D78C5(*iParam0, 0))
			{
			}
			else if (unk_0x724D816EA203A79E(*iParam2))
			{
				if (unk_0xE59B7F5A03335350(*iParam2, 0))
				{
					if (unk_0x62F3A07C43FFB568(*iParam0, *iParam2, 0))
					{
						iVar1 = 1;
					}
				}
			}
		}
	}
	if (unk_0x724D816EA203A79E(*iParam2))
	{
		if (unk_0xE59B7F5A03335350(*iParam2, 0))
		{
			if (iVar0 == 1 || iVar1 == 1)
			{
			}
			else
			{
				unk_0xE421FE22DE8008EB(*iParam2);
				unk_0xBF86DE1BFE3AA5CF(*iParam2);
				unk_0x38E412DB4A45B900(*iParam2, 0);
				unk_0x1E7A09C1710FB071(iParam2);
				if (unk_0x2DA8CA50A72528FB(*iParam3))
				{
					unk_0x07B8ECB35A4ED3AC(iParam3);
				}
			}
		}
		else
		{
			unk_0xE421FE22DE8008EB(*iParam2);
			unk_0xBF86DE1BFE3AA5CF(*iParam2);
			unk_0x38E412DB4A45B900(*iParam2, 0);
			unk_0x1E7A09C1710FB071(iParam2);
			if (unk_0x2DA8CA50A72528FB(*iParam3))
			{
				unk_0x07B8ECB35A4ED3AC(iParam3);
			}
		}
	}
}

int func_75()//Position - 0x3A7A
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	if (!bLocal_283)
	{
		iVar0 = 0;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (unk_0x724D816EA203A79E(iLocal_83[iVar1]))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_83[iVar1]))
			{
				if (unk_0xE642C1AC73CE364E(iLocal_83[iVar1], unk_0xBC25C936A095B5BA(), 200f, 200f, 200f, 0, 1, 0))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (unk_0x724D816EA203A79E(iLocal_84[iVar1]))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_84[iVar1]))
			{
				if (unk_0xE642C1AC73CE364E(iLocal_84[iVar1], unk_0xBC25C936A095B5BA(), 200f, 200f, 200f, 0, 1, 0))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_76()//Position - 0x3B37
{
	int iVar0;
	
	if (bLocal_283)
	{
		if (bLocal_110)
		{
		}
		else if (bLocal_107)
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_83[0]) && !unk_0x1D403DFADBC2DE3C(iLocal_86[0], 0))
			{
			}
			if (!unk_0x36CEFBE9B745A58D(iLocal_83[1]) && !unk_0x1D403DFADBC2DE3C(iLocal_86[1], 0))
			{
			}
		}
		else
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_84[0]) && !unk_0x1D403DFADBC2DE3C(iLocal_87[0], 0))
			{
			}
			if (!unk_0x36CEFBE9B745A58D(iLocal_84[1]) && !unk_0x1D403DFADBC2DE3C(iLocal_87[1], 0))
			{
			}
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			unk_0xD51581275D4AAFE8(iLocal_99[iVar0]);
			if (unk_0x36CEFBE9B745A58D(iLocal_83[iVar0]))
			{
				if (unk_0x2DA8CA50A72528FB(iLocal_93[iVar0]))
				{
					unk_0x07B8ECB35A4ED3AC(&(iLocal_93[iVar0]));
					iLocal_68++;
				}
			}
			else if (!unk_0x5237AF95232D78C5(iLocal_83[iVar0], 0))
			{
				if (!unk_0x2DA8CA50A72528FB(iLocal_93[iVar0]))
				{
					iLocal_93[iVar0] = func_67(iLocal_83[iVar0], 1, 145);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			unk_0xD51581275D4AAFE8(iLocal_99[iVar0]);
			if (unk_0x36CEFBE9B745A58D(iLocal_84[iVar0]))
			{
				if (unk_0x2DA8CA50A72528FB(iLocal_94[iVar0]))
				{
					unk_0x07B8ECB35A4ED3AC(&(iLocal_94[iVar0]));
					iLocal_69++;
				}
			}
			else if (!unk_0x5237AF95232D78C5(iLocal_84[iVar0], 0))
			{
				if (!unk_0x2DA8CA50A72528FB(iLocal_94[iVar0]))
				{
					iLocal_94[iVar0] = func_67(iLocal_84[iVar0], 1, 145);
				}
			}
			iVar0++;
		}
		if (iLocal_68 >= 4 && iLocal_69 >= 4)
		{
			func_41();
		}
	}
	func_92();
	func_91();
	switch (iLocal_46)
	{
		case 0:
			if (((unk_0x520DA25FA70FB966(unk_0xB5CEFD608600A09F()) || !unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vLocal_100 + Vector(0f, 20f, 0f), 170f, 270f, 50f, false, true, 0)) || unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), -1555.4f, 4730.817f, 49.1791f, 15f, 25f, 15f, false, true, 0)) || unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), -1709.211f, 4659.571f, 36.688f, 15f, 25f, 15f, false, true, 0))
			{
				if (!bLocal_110)
				{
					if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), -1555.4f, 4730.817f, 49.1791f, 15f, 25f, 15f, false, true, 0) || unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), -1709.211f, 4659.571f, 36.688f, 15f, 25f, 15f, false, true, 0))
					{
						bLocal_110 = true;
					}
				}
				if (unk_0x88A0E19F56297020(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), &vLocal_102, 1, 1077936128, 0))
				{
					if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vLocal_102, 20f, 20f, 20f, false, true, 0))
					{
						unk_0xE85B33FB221A23CD(5, true);
						unk_0xE85B33FB221A23CD(3, true);
						SYSTEM::SETTIMERA(0);
						func_89();
						iLocal_46 = 1;
					}
				}
			}
			break;
		
		case 1:
			if (SYSTEM::TIMERA() > 5000 || bLocal_110)
			{
				SYSTEM::SETTIMERA(0);
				iLocal_46 = 2;
			}
			break;
		
		case 2:
			if (bLocal_110)
			{
				if (SYSTEM::TIMERA() > 3500)
				{
					if (((!unk_0x1D403DFADBC2DE3C(iLocal_88[0], 0) && !unk_0x1D403DFADBC2DE3C(iLocal_88[1], 0)) && !unk_0x36CEFBE9B745A58D(iLocal_83[0])) && !unk_0x36CEFBE9B745A58D(iLocal_83[1]))
					{
						unk_0xBD53A029D0155A42(iLocal_83[0], iLocal_88[0], -1);
						unk_0xBD53A029D0155A42(iLocal_83[1], iLocal_88[1], -1);
						unk_0x91629AC1E1F78419(iLocal_83[0], 3, false);
						unk_0x91629AC1E1F78419(iLocal_83[1], 3, false);
						unk_0xC3D5C68D28907D90(iLocal_83[0], 0);
						unk_0xC3D5C68D28907D90(iLocal_83[1], 0);
						iLocal_46 = 5;
					}
				}
			}
			if (SYSTEM::TIMERA() > 10000)
			{
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
				{
					if (!unk_0xEA8F5A4C494DBF3B(unk_0xBC25C936A095B5BA(), joaat("rebel")))
					{
						iLocal_46 = 3;
					}
					else
					{
						iLocal_46 = 4;
					}
				}
				else
				{
					iLocal_46 = 3;
				}
			}
			break;
		
		case 3:
			vLocal_103 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
			iLocal_76 = unk_0x491B2241281A03B7(10, 15);
			if (!unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), -1603.153f, 4892.943f, 60.1768f, 225f, 225f, 50f, false, true, 0))
			{
				if (unk_0x29EBF830A072263F(vLocal_103, iLocal_76, &(vLocal_280[0 /*3*/]), 1, 3f, 0f))
				{
					vLocal_280[1 /*3*/] = { vLocal_280[0 /*3*/] + Vector(0f, 5f, 0f) };
					if (!unk_0x33CC9445B2DF9387(vLocal_280[0 /*3*/], 7f) && !unk_0x33CC9445B2DF9387(vLocal_280[1 /*3*/], 7f))
					{
						if (unk_0xE59B7F5A03335350(iLocal_86[0], 0))
						{
							unk_0x641B19E156645A92(iLocal_86[0], vLocal_280[0 /*3*/], 1, false, 0, 1);
							func_88(iLocal_86[0], iLocal_83[0]);
						}
						if (unk_0xE59B7F5A03335350(iLocal_86[1], 0))
						{
							unk_0x641B19E156645A92(iLocal_86[1], vLocal_280[1 /*3*/], 1, false, 0, 1);
							func_88(iLocal_86[1], iLocal_83[1]);
						}
						if (func_36() == 0)
						{
							func_77(&uLocal_114, "REDGWAU", "REDGW_MAWAY", 4, 0, 0, 0);
						}
						else if (func_36() == 1)
						{
							func_77(&uLocal_114, "REDGWAU", "REDGW_FAWAY", 4, 0, 0, 0);
						}
						else if (func_36() == 2)
						{
							func_77(&uLocal_114, "REDGWAU", "REDGW_TAWAY", 4, 0, 0, 0);
						}
						bLocal_107 = true;
						SYSTEM::SETTIMERA(0);
						iLocal_46 = 6;
					}
				}
			}
			break;
		
		case 4:
			vLocal_103 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
			iLocal_76 = unk_0x491B2241281A03B7(30, 35);
			if (!unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), -1603.153f, 4892.943f, 60.1768f, 225f, 225f, 50f, false, true, 0))
			{
				if (unk_0x29EBF830A072263F(vLocal_103, iLocal_76, &(vLocal_280[0 /*3*/]), 1, 3f, 0f))
				{
					vLocal_280[1 /*3*/] = { vLocal_280[0 /*3*/] + Vector(0f, 5f, 0f) };
					if (!unk_0x33CC9445B2DF9387(vLocal_280[0 /*3*/], 7f) && !unk_0x33CC9445B2DF9387(vLocal_280[1 /*3*/], 7f))
					{
						if (unk_0xE59B7F5A03335350(iLocal_87[0], 0))
						{
							unk_0x641B19E156645A92(iLocal_87[0], vLocal_280[0 /*3*/], 1, false, 0, 1);
							func_88(iLocal_87[0], iLocal_84[0]);
						}
						if (unk_0xE59B7F5A03335350(iLocal_87[1], 0))
						{
							unk_0x641B19E156645A92(iLocal_87[1], vLocal_280[1 /*3*/], 1, false, 0, 1);
							func_88(iLocal_87[1], iLocal_84[1]);
						}
						if (func_36() == 0)
						{
							func_77(&uLocal_114, "REDGWAU", "REDGW_MAWAY", 4, 0, 0, 0);
						}
						else if (func_36() == 1)
						{
							func_77(&uLocal_114, "REDGWAU", "REDGW_FAWAY", 4, 0, 0, 0);
						}
						else if (func_36() == 2)
						{
							func_77(&uLocal_114, "REDGWAU", "REDGW_TAWAY", 4, 0, 0, 0);
						}
						bLocal_108 = true;
						SYSTEM::SETTIMERA(0);
						iLocal_46 = 6;
					}
				}
			}
			break;
		
		case 5:
			vLocal_103 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
			iLocal_76 = unk_0x491B2241281A03B7(5, 10);
			if (unk_0x29EBF830A072263F(vLocal_103, iLocal_76, &(vLocal_280[0 /*3*/]), 1, 3f, 0f))
			{
				vLocal_280[1 /*3*/] = { vLocal_280[0 /*3*/] + Vector(0f, 5f, 0f) };
				if (!unk_0x33CC9445B2DF9387(vLocal_280[0 /*3*/], 7f) && !unk_0x33CC9445B2DF9387(vLocal_280[1 /*3*/], 7f))
				{
					if (unk_0xE59B7F5A03335350(iLocal_88[0], 0))
					{
						unk_0x641B19E156645A92(iLocal_88[0], vLocal_280[0 /*3*/], 1, false, 0, 1);
						func_88(iLocal_88[0], iLocal_83[0]);
					}
					if (unk_0xE59B7F5A03335350(iLocal_88[1], 0))
					{
						unk_0x641B19E156645A92(iLocal_88[1], vLocal_280[1 /*3*/], 1, false, 0, 1);
						func_88(iLocal_88[1], iLocal_83[1]);
					}
					if (func_36() == 0)
					{
						func_77(&uLocal_114, "REDGWAU", "REDGW_MAWAY", 4, 0, 0, 0);
					}
					else if (func_36() == 1)
					{
						func_77(&uLocal_114, "REDGWAU", "REDGW_FAWAY", 4, 0, 0, 0);
					}
					else if (func_36() == 2)
					{
						func_77(&uLocal_114, "REDGWAU", "REDGW_TAWAY", 4, 0, 0, 0);
					}
					bLocal_107 = true;
					SYSTEM::SETTIMERA(0);
					iLocal_46 = 6;
				}
			}
			break;
		
		case 6:
			if (func_63())
			{
				fLocal_64 = unk_0x55AEFCD285ECC0F2(1.5f, 2.5f);
				fLocal_65 = unk_0x55AEFCD285ECC0F2(2f, 4f);
				fLocal_66 = unk_0x55AEFCD285ECC0F2(0.1f, 2f);
				if (iLocal_78 < 5 && iLocal_79 < unk_0x105601648511CC64())
				{
					vLocal_50 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
					unk_0x4642EC95846C4520((vLocal_50.x + fLocal_64), (vLocal_50.y + fLocal_65), (vLocal_50.z + fLocal_66), (vLocal_50.x - fLocal_64), (vLocal_50.y - fLocal_65), vLocal_50.z, 10, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1f);
					iLocal_79 = (unk_0x105601648511CC64() + unk_0x491B2241281A03B7(200, 500));
					iLocal_78++;
				}
			}
			if (iLocal_78 > 4)
			{
				iLocal_46 = 7;
			}
			break;
	}
}

bool func_77(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x43DC
{
	func_87(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_78(sParam2, iParam3, 0);
}

int func_78(char* sParam0, int iParam1, bool bParam2)//Position - 0x442A
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
					func_86();
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
		if (func_85(8, -1))
		{
			return 0;
		}
		Global_3E04 = { Global_3DFE };
		func_84();
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
				func_83();
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
				if (func_82())
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
			if (func_81())
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
			func_80();
			Global_3DC2 = bParam2;
		}
		Global_3DBA = iParam1;
		StringCopy(&Global_3C3B, sParam0, 24);
		Global_394A = 0;
		func_79();
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
		func_86();
	}
	return 0;
}

void func_79()//Position - 0x46F6
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

void func_80()//Position - 0x4727
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

int func_81()//Position - 0x47BC
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_82()//Position - 0x47E3
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

void func_83()//Position - 0x487C
{
	if (func_31(14))
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
		Global_389D = func_36();
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

void func_84()//Position - 0x491E
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

bool func_85(int iParam0, int iParam1)//Position - 0x4975
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

void func_86()//Position - 0x49B0
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

void func_87(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x4A07
{
	Global_3B96 = { *uParam0 };
	Global_68F = iParam1;
	StringCopy(&Global_3DFE, sParam2, 24);
	Global_4195 = uParam5;
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

void func_88(int iParam0, int iParam1)//Position - 0x4A5D
{
	unk_0x346478B12F69D4E3(iParam0, false);
	unk_0xF0A40F19AAB79E88(iParam0, 1084227584);
	vLocal_279 = { unk_0x541C2AEF053615BC(iParam0, true) };
	vLocal_281 = { vLocal_103 - vLocal_279 };
	unk_0x019CE76D5286C95C(iParam0, unk_0xFDC254CE02DB0919(vLocal_281.x, vLocal_281.y));
	if (bLocal_110)
	{
		if (!unk_0x36CEFBE9B745A58D(iParam1))
		{
			if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
			{
				unk_0x8EF644F0EDA55FB7(iParam1, unk_0xBC25C936A095B5BA());
				SYSTEM::WAIT(1);
				if (!unk_0x36CEFBE9B745A58D(iParam1))
				{
					unk_0x1ADDCB77FC10E656(iParam1, 32, 1);
				}
			}
			else
			{
				unk_0x1A06AE15BF21D407(iParam1, iParam0, unk_0xBC25C936A095B5BA(), 6, 20f, 786469, -1f, -1f, 1);
			}
			if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
			{
				unk_0xA4DFFFD5B234240D(iParam0, unk_0x8910237449BB6F79(unk_0xBC25C936A095B5BA()));
			}
		}
	}
	else if (!unk_0x36CEFBE9B745A58D(iParam1))
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			unk_0x8EF644F0EDA55FB7(iParam1, unk_0xBC25C936A095B5BA());
		}
		else
		{
			unk_0x1A06AE15BF21D407(iParam1, iParam0, unk_0xBC25C936A095B5BA(), 2, 100f, 786469, -1f, -1f, 1);
		}
		unk_0xA4DFFFD5B234240D(iParam0, unk_0x8910237449BB6F79(unk_0xBC25C936A095B5BA()));
	}
}

void func_89()//Position - 0x4B65
{
	int iVar0;
	
	iLocal_86[0] = unk_0x61C05BF08A1E0EFE(joaat("rebel"), -1595.964f, 4732.479f, 0f, 305f, true, true, false);
	unk_0x77815D3407C6700D(iLocal_86[0], true, 0);
	unk_0x2D655AA68FA1736B(iLocal_86[0], true, true, 0);
	unk_0x93D3868AE0D83B7C(iLocal_86[0], 2);
	unk_0xF82197F205B9D8FD(iLocal_86[0], true);
	unk_0x346478B12F69D4E3(iLocal_86[0], true);
	unk_0xEA0AB6C644C58C1D(iLocal_86[0], "49GNL112");
	iLocal_86[1] = unk_0x61C05BF08A1E0EFE(joaat("rebel"), -1570.34f, 4733.755f, 0f, 305f, true, true, false);
	unk_0x77815D3407C6700D(iLocal_86[1], true, 0);
	unk_0x2D655AA68FA1736B(iLocal_86[1], true, true, 0);
	unk_0x93D3868AE0D83B7C(iLocal_86[1], 2);
	unk_0xF82197F205B9D8FD(iLocal_86[1], true);
	unk_0x346478B12F69D4E3(iLocal_86[1], true);
	unk_0xEA0AB6C644C58C1D(iLocal_86[1], "47TMS703");
	iLocal_88[0] = unk_0x61C05BF08A1E0EFE(joaat("sanchez"), Vector(0f, 4732.479f, -1595.964f) + Vector(10f, 10f, 10f), 305f, true, true, false);
	unk_0x77815D3407C6700D(iLocal_88[0], true, 0);
	unk_0x2D655AA68FA1736B(iLocal_88[0], true, true, 0);
	unk_0x93D3868AE0D83B7C(iLocal_88[0], 2);
	unk_0xF82197F205B9D8FD(iLocal_88[0], true);
	unk_0x346478B12F69D4E3(iLocal_88[0], true);
	unk_0xEA0AB6C644C58C1D(iLocal_88[0], "49GNL112");
	iLocal_88[1] = unk_0x61C05BF08A1E0EFE(joaat("sanchez"), Vector(0f, 4733.755f, -1570.34f) + Vector(10f, 10f, 10f), 305f, true, true, false);
	unk_0x77815D3407C6700D(iLocal_88[1], true, 0);
	unk_0x2D655AA68FA1736B(iLocal_88[1], true, true, 0);
	unk_0x93D3868AE0D83B7C(iLocal_88[1], 2);
	unk_0xF82197F205B9D8FD(iLocal_88[1], true);
	unk_0x346478B12F69D4E3(iLocal_88[1], true);
	unk_0xEA0AB6C644C58C1D(iLocal_88[1], "47TMS703");
	iLocal_83[0] = unk_0xFD8987C090669BD5(iLocal_86[0], 26, joaat("g_m_m_chigoon_02"), -1, 1, true);
	iLocal_83[1] = unk_0xFD8987C090669BD5(iLocal_86[1], 26, joaat("g_m_m_chigoon_02"), -1, 1, true);
	if (!bLocal_110)
	{
		iLocal_83[2] = unk_0xFD8987C090669BD5(iLocal_86[0], 26, joaat("g_m_m_chigoon_02"), 0, 1, true);
		iLocal_83[3] = unk_0xFD8987C090669BD5(iLocal_86[1], 26, joaat("g_m_m_chigoon_02"), 0, 1, true);
	}
	iLocal_87[0] = unk_0x61C05BF08A1E0EFE(joaat("bobcatxl"), -1356.281f, 5000f, 0f, 125.2811f, true, true, false);
	unk_0x77815D3407C6700D(iLocal_87[0], true, 0);
	unk_0x2D655AA68FA1736B(iLocal_87[0], true, true, 0);
	unk_0x93D3868AE0D83B7C(iLocal_87[0], 2);
	unk_0xF82197F205B9D8FD(iLocal_87[0], true);
	unk_0x346478B12F69D4E3(iLocal_87[0], true);
	unk_0xEA0AB6C644C58C1D(iLocal_87[0], "49GNL112");
	iLocal_87[1] = unk_0x61C05BF08A1E0EFE(joaat("bobcatxl"), -1373.589f, 5000f, 0f, 125.459f, true, true, false);
	unk_0x77815D3407C6700D(iLocal_87[1], true, 0);
	unk_0x2D655AA68FA1736B(iLocal_87[1], true, true, 0);
	unk_0x93D3868AE0D83B7C(iLocal_87[1], 2);
	unk_0xF82197F205B9D8FD(iLocal_87[1], true);
	unk_0x346478B12F69D4E3(iLocal_87[1], true);
	unk_0xEA0AB6C644C58C1D(iLocal_87[1], "47TMS703");
	iLocal_84[0] = unk_0xFD8987C090669BD5(iLocal_87[0], 26, joaat("g_m_y_salvagoon_03"), -1, 1, true);
	iLocal_84[1] = unk_0xFD8987C090669BD5(iLocal_87[1], 26, joaat("g_m_y_salvagoon_03"), -1, 1, true);
	iLocal_84[2] = unk_0xFD8987C090669BD5(iLocal_87[0], 26, joaat("g_m_y_salvagoon_03"), 0, 1, true);
	iLocal_84[3] = unk_0xFD8987C090669BD5(iLocal_87[1], 26, joaat("g_m_y_salvagoon_03"), 0, 1, true);
	unk_0xB2CB6EAA6B280A84("RE_deal1", &iLocal_111);
	unk_0xB2CB6EAA6B280A84("RE_deal2", &iLocal_112);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_83[iVar0]))
		{
			unk_0x4106FAF8AA1D69D5(iLocal_83[iVar0], iLocal_111);
			unk_0x77815D3407C6700D(iLocal_83[iVar0], true, 0);
			if (bLocal_110)
			{
				unk_0x7A535CE1F001F3FE(iLocal_83[0], joaat("weapon_sawnoffshotgun"), -1, true, true);
				if (!unk_0x36CEFBE9B745A58D(iLocal_83[1]))
				{
					unk_0x7A535CE1F001F3FE(iLocal_83[1], joaat("weapon_pistol"), -1, true, true);
				}
				unk_0xFC3C88E2313FA926(iLocal_83[iVar0], 15);
				unk_0x91629AC1E1F78419(iLocal_83[iVar0], 3, false);
			}
			else
			{
				unk_0x7A535CE1F001F3FE(iLocal_83[iVar0], joaat("weapon_pistol"), -1, true, true);
				unk_0xFC3C88E2313FA926(iLocal_83[iVar0], 13);
			}
			unk_0x91629AC1E1F78419(iLocal_83[iVar0], 13, true);
			unk_0x91629AC1E1F78419(iLocal_83[iVar0], 2, true);
			unk_0x91629AC1E1F78419(iLocal_83[iVar0], 1, true);
			func_90(&uLocal_114, 4, iLocal_83[iVar0], "REDGWChinese", 0, 1);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_83[iVar0]))
		{
			unk_0x4106FAF8AA1D69D5(iLocal_84[iVar0], iLocal_112);
			unk_0x77815D3407C6700D(iLocal_84[iVar0], true, 0);
			if (bLocal_110)
			{
				unk_0x7A535CE1F001F3FE(iLocal_83[0], joaat("weapon_sawnoffshotgun"), -1, true, true);
				if (!unk_0x36CEFBE9B745A58D(iLocal_83[1]))
				{
					unk_0x7A535CE1F001F3FE(iLocal_83[1], joaat("weapon_pistol"), -1, true, true);
				}
				unk_0xFC3C88E2313FA926(iLocal_83[iVar0], 15);
				unk_0x91629AC1E1F78419(iLocal_83[iVar0], 3, false);
				func_90(&uLocal_114, 4, iLocal_83[iVar0], "REDGWChinese", 0, 1);
			}
			else
			{
				unk_0x7A535CE1F001F3FE(iLocal_84[iVar0], joaat("weapon_pistol"), -1, true, true);
				unk_0xFC3C88E2313FA926(iLocal_84[iVar0], 13);
				func_90(&uLocal_114, 5, iLocal_84[iVar0], "REDGWSalvadoran", 0, 1);
			}
			unk_0x91629AC1E1F78419(iLocal_84[iVar0], 13, true);
			unk_0x91629AC1E1F78419(iLocal_84[iVar0], 2, true);
			unk_0x91629AC1E1F78419(iLocal_84[iVar0], 1, true);
		}
		iVar0++;
	}
	unk_0xA902E18EDF6FA0C8(3, iLocal_111, iLocal_112);
	unk_0xA902E18EDF6FA0C8(3, iLocal_112, iLocal_111);
	unk_0xA902E18EDF6FA0C8(3, iLocal_111, 1862763509);
	unk_0xA902E18EDF6FA0C8(3, iLocal_112, 1862763509);
	unk_0x2CA123B0622F495C(joaat("g_m_m_chigoon_02"));
	unk_0x2CA123B0622F495C(joaat("g_m_y_salvagoon_03"));
	unk_0x2CA123B0622F495C(joaat("rebel"));
	unk_0x2CA123B0622F495C(joaat("bobcatxl"));
	unk_0x2CA123B0622F495C(joaat("sanchez"));
	unk_0x2CA123B0622F495C(joaat("a_c_rottweiler"));
	bLocal_283 = true;
	iLocal_44 = 1;
}

void func_90(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x50FF
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

void func_91()//Position - 0x519A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iLocal_74)
	{
		case 0:
			if (bLocal_107)
			{
				iVar0 = 0;
				while (iVar0 < 4)
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_83[iVar0]))
					{
						if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_83[iVar0], 100f, 100f, 20f, 0, 1, 0))
						{
							iLocal_74 = 3;
						}
					}
					iVar0++;
				}
			}
			if (bLocal_108)
			{
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_84[iVar1]))
					{
						if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_84[iVar1], 100f, 100f, 20f, 0, 1, 0))
						{
							iLocal_74 = 3;
						}
					}
					iVar1++;
				}
			}
			break;
		
		case 3:
			unk_0xA902E18EDF6FA0C8(5, iLocal_111, iLocal_112);
			unk_0xA902E18EDF6FA0C8(5, iLocal_112, iLocal_111);
			unk_0xA902E18EDF6FA0C8(5, iLocal_111, 1862763509);
			unk_0xA902E18EDF6FA0C8(5, iLocal_112, 1862763509);
			if (bLocal_107)
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_83[iVar2]))
					{
						if ((!unk_0x8F97799512B006B7(iLocal_83[iVar2], 0) && unk_0xF4FCC3C1048FF2AB(iLocal_83[iVar2], 579380604) != 1) && unk_0xF4FCC3C1048FF2AB(iLocal_83[iVar2], 579380604) != 0)
						{
							unk_0xA4E856A8CD53B8DF(iLocal_83[iVar2]);
							unk_0xB8CBD998685C0685(iLocal_83[iVar2], unk_0xBC25C936A095B5BA(), 0, 16);
							unk_0x22321800954A532E(iLocal_83[iVar2], true);
						}
					}
					iVar2++;
				}
				if (func_77(&uLocal_114, "REDGWAU", "REDGW_FIRE_C", 4, 0, 0, 0))
				{
					iLocal_71 = unk_0x105601648511CC64();
					iLocal_74 = 4;
				}
			}
			if (bLocal_108)
			{
				iVar3 = 0;
				while (iVar3 < 4)
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_84[iVar3]))
					{
						if ((!unk_0x8F97799512B006B7(iLocal_84[iVar3], 0) && unk_0xF4FCC3C1048FF2AB(iLocal_84[iVar3], 579380604) != 1) && unk_0xF4FCC3C1048FF2AB(iLocal_84[iVar3], 579380604) != 0)
						{
							unk_0xA4E856A8CD53B8DF(iLocal_84[iVar3]);
							unk_0xB8CBD998685C0685(iLocal_84[iVar3], unk_0xBC25C936A095B5BA(), 0, 16);
							unk_0x22321800954A532E(iLocal_84[iVar3], true);
						}
					}
					iVar3++;
				}
				if (func_77(&uLocal_114, "REDGWAU", "REDGW_FIRE_S", 4, 0, 0, 0))
				{
					iLocal_71 = unk_0x105601648511CC64();
					iLocal_74 = 4;
				}
			}
			break;
	}
}

void func_92()//Position - 0x53CF
{
	switch (iLocal_72)
	{
		case 0:
			if (!unk_0x36CEFBE9B745A58D(iLocal_80))
			{
				if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vLocal_101, 7f, 7f, 10f, false, true, 0))
				{
					func_94();
					SYSTEM::WAIT(0);
					func_77(&uLocal_114, "REDGWAU", "REDGW_NTOUCH", 4, 0, 0, 0);
					unk_0x56F2E1B5599188FA(iLocal_80, unk_0xBC25C936A095B5BA(), -1, 2048, 2);
					if (!unk_0x2DA8CA50A72528FB(iLocal_90))
					{
						iLocal_90 = func_93(iLocal_97);
					}
					iLocal_71 = unk_0x105601648511CC64();
					iLocal_72++;
				}
			}
			else
			{
				iLocal_72++;
			}
			break;
	}
	switch (iLocal_73)
	{
		case 1:
			if (!unk_0x36CEFBE9B745A58D(iLocal_80))
			{
				if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_80, 10f, 10f, 6f, 0, 1, 0))
				{
					if (!func_63())
					{
						func_77(&uLocal_114, "REDGWAU", "REDGW_NKILLD", 4, 0, 0, 0);
						if (!unk_0x36CEFBE9B745A58D(iLocal_80))
						{
							unk_0x56F2E1B5599188FA(iLocal_80, unk_0xBC25C936A095B5BA(), -1, 2048, 2);
							SYSTEM::SETTIMERB(0);
							iLocal_73++;
						}
					}
				}
			}
			else
			{
				SYSTEM::SETTIMERB(0);
				iLocal_73++;
			}
			break;
		
		case 2:
			if (!func_63() || SYSTEM::TIMERB() > 4000)
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_80))
				{
					unk_0x65E471E4A2D56226(iLocal_80, 0, 0);
					unk_0x07B8ECB35A4ED3AC(&iLocal_91);
				}
				if (SYSTEM::TIMERB() > 7000)
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_81[6]))
					{
						unk_0x65E471E4A2D56226(iLocal_81[6], 0, 0);
						unk_0x07B8ECB35A4ED3AC(&(iLocal_92[6]));
					}
				}
				if (SYSTEM::TIMERB() > 9000)
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_81[7]))
					{
						unk_0x65E471E4A2D56226(iLocal_81[7], 0, 0);
						unk_0x07B8ECB35A4ED3AC(&(iLocal_92[7]));
					}
					iLocal_73++;
				}
			}
			break;
		
		case 3:
			if (!unk_0x36CEFBE9B745A58D(iLocal_81[6]))
			{
				unk_0x65E471E4A2D56226(iLocal_81[6], 0, 0);
			}
			if (!unk_0x36CEFBE9B745A58D(iLocal_81[7]))
			{
				unk_0x65E471E4A2D56226(iLocal_81[7], 0, 0);
			}
			if (!unk_0x36CEFBE9B745A58D(iLocal_80))
			{
				unk_0x65E471E4A2D56226(iLocal_80, 0, 0);
			}
			break;
	}
}

int func_93(int iParam0)//Position - 0x55BE
{
	int iVar0;
	
	if (!unk_0xA901403F1DB7A780(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x480F8C5F7EE6B525(iParam0);
	unk_0x3F5F1772D71D5EC4(iVar0, func_66(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
	return iVar0;
}

void func_94()//Position - 0x55F6
{
	Global_394A = 0;
	func_95();
}

void func_95()//Position - 0x5606
{
	unk_0x5C7DC611411E2CF9();
	Global_41AB = 0;
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x1E08809A5041F85B(false);
		Global_3DB8 = 6;
	}
}

void func_96()//Position - 0x5627
{
	int iVar0;
	
	if (unk_0xF1B911222059B1A1(iLocal_97))
	{
		if (unk_0x2DA8CA50A72528FB(iLocal_89))
		{
			unk_0x07B8ECB35A4ED3AC(&iLocal_89);
		}
		if (unk_0x2DA8CA50A72528FB(iLocal_90))
		{
			unk_0x07B8ECB35A4ED3AC(&iLocal_90);
		}
		iLocal_73 = 1;
		iLocal_45 = 2;
		iLocal_44 = 0;
	}
	else
	{
		unk_0xDF53A66AEE1401AA(0f);
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x724D816EA203A79E(iLocal_81[iVar0]))
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_81[iVar0]))
				{
					if (iVar0 == 0)
					{
					}
				}
				else if (unk_0x2DA8CA50A72528FB(iLocal_92[iVar0]))
				{
					unk_0x07B8ECB35A4ED3AC(&(iLocal_92[iVar0]));
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_82)
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_82[iVar0]))
			{
			}
			iVar0++;
		}
		if (!func_124())
		{
			if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vLocal_48[7 /*3*/], 110f, 95f, 40f, false, true, 0))
			{
				if (unk_0x2DA8CA50A72528FB(iLocal_89))
				{
					unk_0x07B8ECB35A4ED3AC(&iLocal_89);
				}
				if ((!unk_0x2DA8CA50A72528FB(iLocal_91) && !unk_0x2DA8CA50A72528FB(iLocal_92[6])) && !unk_0x2DA8CA50A72528FB(iLocal_92[7]))
				{
					iLocal_91 = func_67(iLocal_80, 1, 145);
					iLocal_92[6] = func_67(iLocal_81[6], 1, 145);
					iLocal_92[7] = func_67(iLocal_81[7], 1, 145);
				}
				unk_0x222805B89367761E(iLocal_91, false);
				unk_0x222805B89367761E(iLocal_92[6], false);
				unk_0x222805B89367761E(iLocal_92[7], false);
				func_97(1);
			}
		}
		if (!unk_0x36CEFBE9B745A58D(iLocal_81[6]))
		{
			if (((((unk_0xF4FCC3C1048FF2AB(iLocal_81[6], 1785177548) != 1 && unk_0xF4FCC3C1048FF2AB(iLocal_81[6], 1785177548) != 0) || unk_0x7544D2465B934445(iLocal_81[6])) || unk_0xE921F8171F0733B3(unk_0xBC25C936A095B5BA(), iLocal_81[6])) || unk_0x48EBE45A9A7EB10C(iLocal_81[6])) || unk_0xA0ABD1D1512F5AFC(iLocal_81[6]))
			{
				unk_0x65E471E4A2D56226(iLocal_81[6], 0, 0);
			}
		}
		if (!unk_0x36CEFBE9B745A58D(iLocal_81[7]))
		{
			if (((((unk_0xF4FCC3C1048FF2AB(iLocal_81[7], 1785177548) != 1 && unk_0xF4FCC3C1048FF2AB(iLocal_81[7], 1785177548) != 0) || unk_0x7544D2465B934445(iLocal_81[7])) || unk_0xE921F8171F0733B3(unk_0xBC25C936A095B5BA(), iLocal_81[7])) || unk_0x48EBE45A9A7EB10C(iLocal_81[7])) || unk_0xA0ABD1D1512F5AFC(iLocal_81[7]))
			{
				unk_0x65E471E4A2D56226(iLocal_81[7], 0, 0);
			}
		}
		if (!unk_0x36CEFBE9B745A58D(iLocal_80))
		{
			if (((((unk_0xF4FCC3C1048FF2AB(iLocal_80, 1785177548) != 1 && unk_0xF4FCC3C1048FF2AB(iLocal_80, 1785177548) != 0) || unk_0x7544D2465B934445(iLocal_80)) || unk_0xE921F8171F0733B3(unk_0xBC25C936A095B5BA(), iLocal_80)) || unk_0x48EBE45A9A7EB10C(iLocal_80)) || unk_0xA0ABD1D1512F5AFC(iLocal_80))
			{
				unk_0x65E471E4A2D56226(iLocal_80, 0, 0);
			}
		}
		if (!bLocal_106)
		{
		}
	}
	func_92();
	switch (iLocal_75)
	{
		case 0:
			if (!unk_0x36CEFBE9B745A58D(iLocal_81[6]))
			{
				if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), unk_0x541C2AEF053615BC(iLocal_81[6], true) + Vector(0f, 2.5f, 0f), 9f, 5f, 5f, false, true, 0) && unk_0x5CEC84BB4AC55121(unk_0xBC25C936A095B5BA(), iLocal_81[6]))
				{
					unk_0x56F2E1B5599188FA(iLocal_81[6], unk_0xBC25C936A095B5BA(), -1, 2048, 2);
					unk_0x56F2E1B5599188FA(unk_0xBC25C936A095B5BA(), iLocal_81[6], 4000, 2048, 2);
					func_77(&uLocal_114, "REDGWAU", "REDGW_NDIE", 4, 0, 0, 0);
					iLocal_71 = unk_0x105601648511CC64();
					iLocal_75 = 1;
				}
			}
			if (!unk_0x36CEFBE9B745A58D(iLocal_81[7]))
			{
				if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), unk_0x541C2AEF053615BC(iLocal_81[7], true) + Vector(0f, 3f, 0f), 9f, 7f, 5f, false, true, 0) && unk_0x5CEC84BB4AC55121(unk_0xBC25C936A095B5BA(), iLocal_81[7]))
				{
					unk_0x56F2E1B5599188FA(iLocal_81[7], unk_0xBC25C936A095B5BA(), -1, 2048, 2);
					unk_0x56F2E1B5599188FA(unk_0xBC25C936A095B5BA(), iLocal_81[7], 4000, 2048, 2);
					func_77(&uLocal_114, "REDGWAU", "REDGW_NDIE1", 4, 0, 0, 0);
					iLocal_71 = unk_0x105601648511CC64();
					iLocal_75 = 1;
				}
			}
			if (unk_0x36CEFBE9B745A58D(iLocal_81[6]) && unk_0x36CEFBE9B745A58D(iLocal_81[7]))
			{
				iLocal_75 = 2;
			}
			break;
		
		case 1:
			if (unk_0x2DA8CA50A72528FB(iLocal_91))
			{
				unk_0x222805B89367761E(iLocal_91, true);
			}
			if (unk_0x2DA8CA50A72528FB(iLocal_92[6]))
			{
				unk_0x222805B89367761E(iLocal_92[6], true);
			}
			if (unk_0x2DA8CA50A72528FB(iLocal_92[7]))
			{
				unk_0x222805B89367761E(iLocal_92[7], true);
			}
			iLocal_70 = unk_0x105601648511CC64();
			if ((iLocal_70 - iLocal_71) > 6000 && !func_63())
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_81[6]))
				{
				}
				if (!unk_0x36CEFBE9B745A58D(iLocal_81[7]))
				{
				}
				if (!unk_0x2DA8CA50A72528FB(iLocal_90))
				{
					iLocal_90 = func_93(iLocal_97);
				}
				unk_0xDF53A66AEE1401AA(0f);
				if (!func_124())
				{
					func_97(1);
				}
				iLocal_75 = 2;
			}
			break;
	}
}

int func_97(int iParam0)//Position - 0x5AD8
{
	if (func_101())
	{
		Global_19AFA = 1;
		Global_19AF7 = unk_0x105601648511CC64();
		if (func_51(Global_19AF9))
		{
			func_98(0);
		}
		unk_0x3FF92BBF0607A406(1, "RE_TITLE");
		if (iParam0 && func_51(Global_19AF9))
		{
			unk_0x621CEDEDDD531386();
		}
		return 1;
	}
	return 0;
}

void func_98(int iParam0)//Position - 0x5B2B
{
	switch (iParam0)
	{
		case 0:
			if (Global_19B04.f_6186.f_2 < 3)
			{
				if (!unk_0x5107E30005FCFEA8())
				{
					func_99(func_100(iParam0), -1);
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
					func_99(func_100(iParam0), -1);
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
					func_99(func_100(iParam0), -1);
					Global_19B04.f_6186.f_4++;
					unk_0xF0059F27F7BB6680(&Global_19B00, 2);
				}
			}
			break;
	}
}

void func_99(char* sParam0, int iParam1)//Position - 0x5C0C
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, true, iParam1);
}

char* func_100(int iParam0)//Position - 0x5C23
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

int func_101()//Position - 0x5C66
{
	switch (func_102(&Global_62F8, 0, 5, 0, unk_0x8A55B15F4133C912()))
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

int func_102(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x5C9C
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
		if (func_106(0))
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
		if (!func_104(iParam2))
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
			func_103(uParam0, iParam4);
		}
	}
	return 2;
}

void func_103(var uParam0, int iParam1)//Position - 0x5DD3
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

bool func_104(int iParam0)//Position - 0x5E22
{
	return func_105(iParam0, Global_8C41);
}

int func_105(int iParam0, int iParam1)//Position - 0x5E33
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

int func_106(int iParam0)//Position - 0x6014
{
	if (Global_8C41 == 15)
	{
		return 0;
	}
	if (func_104(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_107()//Position - 0x6036
{
	int iVar0;
	
	if (!unk_0x1D403DFADBC2DE3C(iLocal_85[0], 0))
	{
		if (unk_0x3187EF5798B5D209(iLocal_85[0], -1, 0) == iLocal_81[8])
		{
			unk_0x45E676EE6DA3D155(iLocal_85[0], 60000f);
			unk_0xC273BD1680CC6DEC(iLocal_85[0]);
		}
	}
	if (!unk_0x36CEFBE9B745A58D(iLocal_80))
	{
		if (unk_0x2CDE18D6C89522AD(iLocal_80))
		{
			unk_0x65E471E4A2D56226(iLocal_80, 0, 0);
		}
	}
	else if (unk_0x2DA8CA50A72528FB(iLocal_91))
	{
		unk_0x07B8ECB35A4ED3AC(&iLocal_91);
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0x33CC9445B2DF9387(vLocal_100, 30f) && SYSTEM::VDIST(func_2(unk_0xB5CEFD608600A09F()), vLocal_100) > 300f)
		{
			if (unk_0x724D816EA203A79E(iLocal_81[iVar0]))
			{
				unk_0x02537C8C1BEEB477(&(iLocal_81[iVar0]));
			}
		}
		if (unk_0x36CEFBE9B745A58D(iLocal_81[iVar0]))
		{
			if (unk_0x2DA8CA50A72528FB(iLocal_92[iVar0]))
			{
				unk_0x07B8ECB35A4ED3AC(&(iLocal_92[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_108()//Position - 0x611E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	unk_0xF243B7A14FCFD0F4(joaat("g_m_m_chigoon_02"));
	unk_0xF243B7A14FCFD0F4(joaat("g_m_y_salvagoon_03"));
	unk_0xF243B7A14FCFD0F4(joaat("rebel"));
	unk_0xF243B7A14FCFD0F4(joaat("bobcatxl"));
	unk_0xF243B7A14FCFD0F4(joaat("sanchez"));
	unk_0xF243B7A14FCFD0F4(joaat("a_c_rottweiler"));
	unk_0xF243B7A14FCFD0F4(joaat("prop_security_case_01"));
	unk_0x522053D86D6E1C7A("random@dealgonewrong");
	unk_0x522053D86D6E1C7A("random@dealgonewrongdead_peds");
	if ((((((((unk_0xD6513D668481290A(joaat("g_m_m_chigoon_02")) && unk_0xD6513D668481290A(joaat("g_m_y_salvagoon_03"))) && unk_0xD6513D668481290A(joaat("rebel"))) && unk_0xD6513D668481290A(joaat("bobcatxl"))) && unk_0xD6513D668481290A(joaat("sanchez"))) && unk_0xD6513D668481290A(joaat("a_c_rottweiler"))) && unk_0xD6513D668481290A(joaat("prop_security_case_01"))) && unk_0xF9E082857622D91E("random@dealgonewrong")) && unk_0xF9E082857622D91E("random@dealgonewrongdead_peds"))
	{
		unk_0x1DAA351326EA3537(vLocal_100 - Vector(150f, 150f, 150f), vLocal_100 + Vector(150f, 150f, 150f), 0, 1, 1, 1);
		unk_0x8510BC031C24B862(joaat("bobcatxl"), true);
		unk_0x8510BC031C24B862(joaat("rebel"), true);
		unk_0xE85B33FB221A23CD(5, false);
		unk_0xE85B33FB221A23CD(3, false);
		iLocal_85[0] = unk_0x61C05BF08A1E0EFE(joaat("bobcatxl"), -1626.94f, 4729.889f, 51.3463f, 347.1188f, true, true, false);
		unk_0x77815D3407C6700D(iLocal_85[0], true, 0);
		unk_0xF0A40F19AAB79E88(iLocal_85[0], 1084227584);
		unk_0x2D655AA68FA1736B(iLocal_85[0], true, true, 0);
		unk_0x93D3868AE0D83B7C(iLocal_85[0], 2);
		unk_0xE6E403909F4BF47F(iLocal_85[0], 500f);
		unk_0xD3F329A16C0E5B2B(iLocal_85[0], 500f);
		unk_0xE54F7105CEA81918(iLocal_85[0], 1, true);
		unk_0x320ACB49B4CABE67(iLocal_85[0], 0, 0, 1148846080);
		unk_0x72DD704E19506408(iLocal_85[0], 6);
		unk_0x004811915F93A42D(iLocal_85[0], "RADIO_06_COUNTRY");
		unk_0xEA0AB6C644C58C1D(iLocal_85[0], "76JON418");
		unk_0x4E87F356DA56EB3F(iLocal_85[0], true);
		iLocal_85[1] = unk_0x61C05BF08A1E0EFE(joaat("rebel"), -1619.432f, 4747.792f, 52.7502f, 146.6017f, true, true, false);
		unk_0x77815D3407C6700D(iLocal_85[1], true, 0);
		unk_0xF0A40F19AAB79E88(iLocal_85[1], 1084227584);
		unk_0x2D655AA68FA1736B(iLocal_85[1], true, true, 0);
		unk_0x93D3868AE0D83B7C(iLocal_85[1], 2);
		unk_0xE6E403909F4BF47F(iLocal_85[1], 600f);
		unk_0xD3F329A16C0E5B2B(iLocal_85[1], 400f);
		unk_0xE54F7105CEA81918(iLocal_85[1], 1, true);
		unk_0xE54F7105CEA81918(iLocal_85[1], 2, true);
		unk_0xE54F7105CEA81918(iLocal_85[1], 3, false);
		unk_0xE54F7105CEA81918(iLocal_85[1], 4, false);
		unk_0x72DD704E19506408(iLocal_85[1], 6);
		unk_0x004811915F93A42D(iLocal_85[1], "RADIO_06_COUNTRY");
		unk_0xEA0AB6C644C58C1D(iLocal_85[1], "79ERK121");
		unk_0x4E87F356DA56EB3F(iLocal_85[1], true);
		unk_0x092EAEDB8CF7A1AA(iLocal_85[1], 1);
		iLocal_85[2] = unk_0x61C05BF08A1E0EFE(joaat("bobcatxl"), -1636.216f, 4748.061f, 51.5484f, 199.3236f, true, true, false);
		unk_0xEA0AB6C644C58C1D(iLocal_85[2], "83JOH802");
		unk_0x77815D3407C6700D(iLocal_85[2], true, 0);
		unk_0xF0A40F19AAB79E88(iLocal_85[2], 1084227584);
		unk_0x2D655AA68FA1736B(iLocal_85[2], true, true, 0);
		unk_0x93D3868AE0D83B7C(iLocal_85[2], 2);
		unk_0xE6E403909F4BF47F(iLocal_85[2], 60f);
		unk_0xD3F329A16C0E5B2B(iLocal_85[2], 1000f);
		unk_0xE54F7105CEA81918(iLocal_85[2], 1, false);
		unk_0x320ACB49B4CABE67(iLocal_85[2], 1, 0, 1148846080);
		iLocal_85[3] = unk_0x61C05BF08A1E0EFE(joaat("rebel"), -1641.578f, 4736.783f, 52.5984f, 278.1865f, true, true, false);
		unk_0xEA0AB6C644C58C1D(iLocal_85[3], "85TOR114");
		unk_0x77815D3407C6700D(iLocal_85[3], true, 0);
		unk_0xF0A40F19AAB79E88(iLocal_85[3], 1084227584);
		unk_0x2D655AA68FA1736B(iLocal_85[3], true, true, 0);
		unk_0x93D3868AE0D83B7C(iLocal_85[3], 2);
		unk_0xE6E403909F4BF47F(iLocal_85[3], 500f);
		unk_0xD3F329A16C0E5B2B(iLocal_85[3], 500f);
		unk_0xE54F7105CEA81918(iLocal_85[3], 1, false);
		unk_0xE54F7105CEA81918(iLocal_85[3], 2, false);
		unk_0xE54F7105CEA81918(iLocal_85[3], 3, false);
		unk_0xE54F7105CEA81918(iLocal_85[3], 4, false);
		unk_0x320ACB49B4CABE67(iLocal_85[3], 0, 0, 1148846080);
		unk_0x320ACB49B4CABE67(iLocal_85[3], 5, 0, 1148846080);
		if (!unk_0xA901403F1DB7A780(iLocal_97))
		{
			iVar0 = 0;
			unk_0xF0059F27F7BB6680(&iVar0, 1);
			unk_0xF0059F27F7BB6680(&iVar0, 3);
			unk_0xF0059F27F7BB6680(&iVar0, 4);
			iLocal_97 = unk_0x37B86314BDCAA6F0(joaat("pickup_money_case"), vLocal_101, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
			unk_0x2CA123B0622F495C(joaat("prop_security_case_01"));
		}
		vLocal_104[0 /*3*/] = { -1640.411f, 4740.702f, 52.6218f };
		vLocal_104[1 /*3*/] = { -1624.664f, 4746.569f, 51.541f };
		vLocal_104[2 /*3*/] = { -1626.339f, 4734.232f, 51.6176f };
		vLocal_104[3 /*3*/] = { -1634.297f, 4741.213f, 51.9737f };
		vLocal_104[4 /*3*/] = { -1644.717f, 4736.446f, 52.3014f };
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (!unk_0xA901403F1DB7A780(iLocal_98[iVar1]))
			{
				iVar2 = 0;
				unk_0xF0059F27F7BB6680(&iVar2, 3);
				unk_0xF0059F27F7BB6680(&iVar2, 4);
				if (iVar1 < 2)
				{
					iLocal_98[iVar1] = unk_0x249B372087B496EC(joaat("pickup_weapon_sawnoffshotgun"), vLocal_104[iVar1 /*3*/], iVar2, -1, 1, 0);
				}
				else if (iVar1 == 4)
				{
					iLocal_98[iVar1] = unk_0x37B86314BDCAA6F0(joaat("pickup_weapon_assaultrifle"), vLocal_104[iVar1 /*3*/], 90f, 50f, 0f, 0, 50, 2, 1, 0);
				}
				else
				{
					iLocal_98[iVar1] = unk_0x249B372087B496EC(joaat("pickup_weapon_pistol"), vLocal_104[iVar1 /*3*/], iVar2, -1, 1, 0);
				}
			}
			iVar1++;
		}
		vLocal_48[0 /*3*/] = { -1636.535f, 4708.455f, 46.09f };
		fLocal_49[0] = 177.0024f;
		vLocal_48[1 /*3*/] = { -1621.19f, 4744.868f, 52.4254f };
		fLocal_49[1] = 146.9645f;
		vLocal_48[2 /*3*/] = { -1622.795f, 4735.975f, 51.474f };
		fLocal_49[2] = 48.6546f;
		vLocal_48[3 /*3*/] = { -1632.695f, 4742.906f, 51.8604f };
		fLocal_49[3] = 155.0678f;
		vLocal_48[4 /*3*/] = { -1629.544f, 4738.6f, 52.1784f };
		fLocal_49[4] = 278.3085f;
		vLocal_48[5 /*3*/] = { -1634.764f, 4745.188f, 51.3926f };
		fLocal_49[5] = 270.3501f;
		vLocal_48[7 /*3*/] = { -1628.321f, 4731.502f, 51.7644f };
		fLocal_49[7] = 352.9167f;
		vLocal_48[6 /*3*/] = { -1640.311f, 4738.4f, 52.2f };
		fLocal_49[6] = 34.1111f;
		vLocal_63 = { -1641.735f, 4692.13f, 39.394f };
		fLocal_67 = 326.7277f;
		iVar1 = 0;
		while (iVar1 < 6)
		{
			if (iVar1 <= 3)
			{
				iLocal_81[iVar1] = unk_0x01B3635C3E8EDD81(22, joaat("g_m_y_salvagoon_03"), vLocal_48[iVar1 /*3*/], fLocal_49[iVar1], 1, true);
				unk_0xC8FD3EBBB90E8D7F(iLocal_81[iVar1], 227, true);
			}
			else
			{
				iLocal_81[iVar1] = unk_0x01B3635C3E8EDD81(22, joaat("g_m_m_chigoon_02"), vLocal_48[iVar1 /*3*/], fLocal_49[iVar1], 1, true);
			}
			iVar1++;
		}
		iLocal_82[0] = unk_0x01B3635C3E8EDD81(26, joaat("a_c_rottweiler"), -1635.005f, 4737.181f, 53.4995f, 33.4155f, 1, true);
		iLocal_82[1] = unk_0x01B3635C3E8EDD81(26, joaat("a_c_rottweiler"), -1625.215f, 4741.119f, 52.5762f, 316.2733f, 1, true);
		iVar1 = 0;
		while (iVar1 < iLocal_82)
		{
			unk_0xF1FC2182A76AD7FC(iLocal_82[iVar1], 1);
			unk_0xD434A01DEA38A939(iLocal_82[iVar1], true, 0);
			unk_0xC8FD3EBBB90E8D7F(iLocal_82[iVar1], 227, true);
			vLocal_50 = { unk_0x541C2AEF053615BC(iLocal_82[iVar1], true) };
			vLocal_51 = { vLocal_50.x, (vLocal_50.y - 2f), (vLocal_50.z - 0.5f) };
			vLocal_52 = { vLocal_50.x, (vLocal_50.y + 50f), (vLocal_50.z - 0.5f) };
			unk_0x4642EC95846C4520(vLocal_51, vLocal_52, 100, 1, joaat("weapon_assaultrifle"), 0, 1, 1, -1f);
			iVar1++;
		}
		unk_0x16F091616F4E9EA0(iLocal_81[0], "random@dealgonewrongdead_peds", "ped_b", -1635.928f, 4707.941f, 46.383f, -29.25f, 12.25f, 171.75f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0x16F091616F4E9EA0(iLocal_81[1], "random@dealgonewrongdead_peds", "ped_a", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0x16F091616F4E9EA0(iLocal_81[2], "random@dealgonewrongdead_peds", "ped_b", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0x16F091616F4E9EA0(iLocal_81[3], "random@dealgonewrongdead_peds", "ped_c", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0x16F091616F4E9EA0(iLocal_81[4], "random@dealgonewrongdead_peds", "ped_d", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0x16F091616F4E9EA0(iLocal_81[5], "random@dealgonewrongdead_peds", "ped_e", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0x16F091616F4E9EA0(iLocal_82[0], "random@dealgonewrongdead_peds", "dog_a", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0x16F091616F4E9EA0(iLocal_82[1], "random@dealgonewrongdead_peds", "dog_b", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		unk_0x38B176BAE55633ED(50f);
		func_110();
		unk_0x38B176BAE55633ED(1f);
		if (unk_0xE59B7F5A03335350(iLocal_85[0], 0))
		{
			iLocal_81[8] = unk_0xFD8987C090669BD5(iLocal_85[0], 26, joaat("g_m_y_salvagoon_03"), -1, 1, true);
			unk_0x77815D3407C6700D(iLocal_81[8], true, 0);
			unk_0x8E2B5DA484CC2BB8(iLocal_81[8], 1);
			unk_0x65E471E4A2D56226(iLocal_81[8], 0, 0);
		}
		if (!unk_0x2DA8CA50A72528FB(iLocal_89))
		{
		}
		unk_0xB2CB6EAA6B280A84("re_DealGoneWrong", &iLocal_113);
		iLocal_81[6] = unk_0x01B3635C3E8EDD81(22, joaat("g_m_m_chigoon_02"), vLocal_48[6 /*3*/], fLocal_49[6], 1, true);
		func_90(&uLocal_114, 4, iLocal_81[6], "REDGWChinese", 0, 1);
		unk_0x2E35C4FA5F0ED22F(iLocal_81[6], true);
		unk_0xF82197F205B9D8FD(iLocal_81[6], true);
		unk_0x4106FAF8AA1D69D5(iLocal_81[6], iLocal_113);
		iVar3 = unk_0xD0D858E538FD01C3(vLocal_48[6 /*3*/] + Vector(1.05f, 0f, 0f), -7f, 0f, 34.1111f, 0);
		unk_0xB62398E536F695FC(iLocal_81[6], iVar3, "random@dealgonewrong", "base", 8f, -8f, 5, 0, 1148846080, 0);
		unk_0xC2BF3DE5E47F801D(iVar3, true);
		unk_0x22321800954A532E(iLocal_81[6], true);
		unk_0xC8FD3EBBB90E8D7F(iLocal_81[6], 227, true);
		iLocal_81[7] = unk_0x01B3635C3E8EDD81(22, joaat("g_m_y_salvagoon_03"), -1640.311f, 4738.4f, 50.2f, fLocal_49[7], 1, true);
		func_90(&uLocal_114, 5, iLocal_81[7], "REDGWSalvadoran", 0, 1);
		unk_0x2E35C4FA5F0ED22F(iLocal_81[7], true);
		unk_0xF82197F205B9D8FD(iLocal_81[7], true);
		unk_0x4106FAF8AA1D69D5(iLocal_81[7], iLocal_113);
		iVar4 = unk_0xD0D858E538FD01C3(vLocal_48[7 /*3*/] + Vector(0.92f, 0.65f, -0.65f), 0f, 0f, 34.1111f, 0);
		unk_0xB62398E536F695FC(iLocal_81[7], iVar4, "random@dealgonewrong", "idle_a", 8f, -8f, 5, 0, 1148846080, 0);
		unk_0xC2BF3DE5E47F801D(iVar4, true);
		unk_0x0BD2283F2F727F2C(iVar4, 0.5f);
		unk_0x22321800954A532E(iLocal_81[7], true);
		unk_0xC8FD3EBBB90E8D7F(iLocal_81[7], 227, true);
		iLocal_80 = unk_0x01B3635C3E8EDD81(22, joaat("g_m_m_chigoon_02"), vLocal_63, fLocal_67, 1, true);
		func_90(&uLocal_114, 4, iLocal_80, "REDGWChinese", 0, 1);
		unk_0x2E35C4FA5F0ED22F(iLocal_80, true);
		unk_0x4106FAF8AA1D69D5(iLocal_80, iLocal_113);
		iVar5 = unk_0xD0D858E538FD01C3(vLocal_63, 7.5f, -12.75f, 51.5f, 0);
		unk_0xB62398E536F695FC(iLocal_80, iVar5, "random@dealgonewrong", "idle_b", 8f, -8f, 5, 0, 1148846080, 0);
		unk_0xC2BF3DE5E47F801D(iVar5, true);
		unk_0x784C605D172817C8(iLocal_80, 4f, 18f, 326.7277f, 0, 1);
		unk_0x22321800954A532E(iLocal_80, true);
		unk_0xC8FD3EBBB90E8D7F(iLocal_80, 227, true);
		unk_0xA902E18EDF6FA0C8(5, iLocal_113, 1862763509);
		if (func_36() == 0)
		{
			func_90(&uLocal_114, 0, unk_0xBC25C936A095B5BA(), "MICHAEL", 0, 1);
		}
		if (func_36() == 1)
		{
			func_90(&uLocal_114, 1, unk_0xBC25C936A095B5BA(), "FRANKLIN", 0, 1);
		}
		if (func_36() == 2)
		{
			func_90(&uLocal_114, 2, unk_0xBC25C936A095B5BA(), "TREVOR", 0, 1);
		}
		iLocal_99[0] = unk_0x86901CB45E45CCB8(1110, -1632.953f, 4745.359f, 51.7876f, 0f, 0f, -1f, func_109(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		SYSTEM::WAIT(0);
		iLocal_99[1] = unk_0x86901CB45E45CCB8(1110, -1634.87f, 4744.458f, 51.8233f, 0f, 0f, -1f, func_109(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		SYSTEM::WAIT(0);
		iLocal_99[2] = unk_0x86901CB45E45CCB8(1110, -1636.971f, 4736.595f, 52.2814f, 0f, 0f, -1f, func_109(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		SYSTEM::WAIT(0);
		iLocal_99[3] = unk_0x86901CB45E45CCB8(1110, -1625.561f, 4741.241f, 51.7102f, 0f, 0f, -1f, func_109(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		SYSTEM::WAIT(0);
		iLocal_99[4] = unk_0x86901CB45E45CCB8(1110, -1621.533f, 4744.576f, 51.9093f, 0f, 0f, -1f, func_109(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		SYSTEM::WAIT(0);
		iLocal_99[5] = unk_0x86901CB45E45CCB8(1110, -1621.963f, 4737.039f, 51.4174f, 0f, 0f, -1f, func_109(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		SYSTEM::WAIT(0);
		iLocal_99[6] = unk_0x86901CB45E45CCB8(1110, -1628.517f, 4736.906f, 51.8207f, 0f, 0f, -1f, func_109(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		SYSTEM::WAIT(0);
		iLocal_99[7] = unk_0x86901CB45E45CCB8(1110, -1629.324f, 4732.146f, 51.6947f, 0f, 0f, -1f, func_109(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		SYSTEM::WAIT(0);
		iLocal_99[8] = unk_0x86901CB45E45CCB8(1110, -1640.287f, 4738.437f, 52.1756f, 0f, 0f, -1f, func_109(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		SYSTEM::WAIT(0);
		iLocal_99[9] = unk_0x86901CB45E45CCB8(1110, -1640.055f, 4701.995f, 41.2428f, 0f, 0f, -1f, func_109(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		SYSTEM::WAIT(0);
		iLocal_99[10] = unk_0x86901CB45E45CCB8(1110, -1641.924f, 4692.236f, 38.3762f, 0f, 0f, -1f, func_109(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		iVar1 = 0;
		while (iVar1 < 6)
		{
			if (!unk_0x1D403DFADBC2DE3C(iLocal_81[iVar1], 0))
			{
				unk_0xF1FC2182A76AD7FC(iLocal_81[iVar1], 1);
				unk_0x84518BC4397AB1AC(iLocal_81[iVar1], 0, 0.3f, 0.6f, 3);
				unk_0x84518BC4397AB1AC(iLocal_81[iVar1], 0, 0.65f, 0.6f, 3);
				SYSTEM::WAIT(unk_0x491B2241281A03B7(100, 500));
				if (iVar1 <= 5)
				{
					if (unk_0x2DA8CA50A72528FB(iLocal_92[iVar1]))
					{
						unk_0x07B8ECB35A4ED3AC(&(iLocal_92[iVar1]));
					}
				}
			}
			iVar1++;
		}
		if (unk_0x724D816EA203A79E(unk_0x3E12B546F3F2597A()))
		{
			if (!unk_0x5CAE759AE8219D20(unk_0x3E12B546F3F2597A()))
			{
				unk_0x77815D3407C6700D(unk_0x3E12B546F3F2597A(), true, 0);
			}
		}
		iLocal_282 = 1;
	}
}

Vector3 func_109(vector3 vParam0)//Position - 0x70F1
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

void func_110()//Position - 0x7130
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		SYSTEM::WAIT(0);
		if (unk_0x724D816EA203A79E(iLocal_85[iVar0]))
		{
			vLocal_53 = { unk_0xA4455714F3DCE207(iLocal_85[iVar0], 0f, 0f, 0.5f) };
		}
		iLocal_77 = 0;
		while (iLocal_77 < 5)
		{
			fLocal_64 = unk_0x55AEFCD285ECC0F2(1.5f, 2.5f);
			fLocal_65 = unk_0x55AEFCD285ECC0F2(2f, 4f);
			fLocal_66 = unk_0x55AEFCD285ECC0F2(0.1f, 2f);
			SYSTEM::WAIT(0);
			vLocal_54 = { (vLocal_53.x - fLocal_64), (vLocal_53.y - fLocal_65), (vLocal_53.z + fLocal_66) };
			vLocal_55 = { (vLocal_53.x + fLocal_64), (vLocal_53.y + fLocal_65), vLocal_53.z };
			unk_0x4642EC95846C4520(vLocal_54, vLocal_55, 1, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1f);
			vLocal_54 = { (vLocal_53.x + fLocal_64), (vLocal_53.y + fLocal_65), (vLocal_53.z + fLocal_66) };
			vLocal_55 = { (vLocal_53.x - fLocal_64), (vLocal_53.y - fLocal_65), vLocal_53.z };
			unk_0x4642EC95846C4520(vLocal_54, vLocal_55, 1, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1f);
			vLocal_54 = { (vLocal_53.x + fLocal_64), (vLocal_53.y - fLocal_65), (vLocal_53.z + fLocal_66) };
			vLocal_55 = { (vLocal_53.x - fLocal_64), (vLocal_53.y + fLocal_65), vLocal_53.z };
			unk_0x4642EC95846C4520(vLocal_54, vLocal_55, 1, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1f);
			vLocal_54 = { (vLocal_53.x - fLocal_64), (vLocal_53.y + fLocal_65), (vLocal_53.z + fLocal_66) };
			vLocal_55 = { (vLocal_53.x + fLocal_64), (vLocal_53.y - fLocal_65), vLocal_53.z };
			unk_0x4642EC95846C4520(vLocal_54, vLocal_55, 1, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1f);
			vLocal_54 = { vLocal_53.x, (vLocal_53.y + fLocal_65), (vLocal_53.z + fLocal_66) };
			vLocal_55 = { vLocal_53.x, (vLocal_53.y - fLocal_65), vLocal_53.z };
			unk_0x4642EC95846C4520(vLocal_54, vLocal_55, 1, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1f);
			iLocal_77++;
		}
		iVar0++;
	}
}

int func_111()//Position - 0x7304
{
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), vLocal_43) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(unk_0xB5D9AE572C19509E(unk_0xBC25C936A095B5BA())) > 1369f && !func_122())
		{
			return 0;
		}
	}
	if (func_118())
	{
		return 1;
	}
	if (func_112(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_112(float fParam0, bool bParam1)//Position - 0x738A
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
		if (func_38(func_36()))
		{
			iVar5 = func_56();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (unk_0xFA30DFD0084E92FE(Global_19B04.f_4871[iVar1 /*6*/], 2) && !unk_0xFA30DFD0084E92FE(Global_19B04.f_4871[iVar1 /*6*/], 3))
				{
					func_113(iVar1, &Var0);
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

void func_113(int iParam0, var uParam1)//Position - 0x7441
{
	switch (iParam0)
	{
		case 0:
			func_114(uParam1, "Abigail1", func_116(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 1:
			func_114(uParam1, "Abigail2", func_116(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 2:
			func_114(uParam1, "Barry1", func_116(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 3:
			func_114(uParam1, "Barry2", func_116(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_115(iParam0), 1, 1);
			break;
		
		case 4:
			func_114(uParam1, "Barry3", func_116(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 5:
			func_114(uParam1, "Barry3A", func_116(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 6:
			func_114(uParam1, "Barry3C", func_116(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 7:
			func_114(uParam1, "Barry4", func_116(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_115(iParam0), 0, 0);
			break;
		
		case 8:
			func_114(uParam1, "Dreyfuss1", func_116(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 9:
			func_114(uParam1, "Epsilon1", func_116(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 10:
			func_114(uParam1, "Epsilon2", func_116(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 11:
			func_114(uParam1, "Epsilon3", func_116(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 12:
			func_114(uParam1, "Epsilon4", func_116(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 13:
			func_114(uParam1, "Epsilon5", func_116(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 14:
			func_114(uParam1, "Epsilon6", func_116(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 15:
			func_114(uParam1, "Epsilon7", func_116(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 16:
			func_114(uParam1, "Epsilon8", func_116(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 17:
			func_114(uParam1, "Extreme1", func_116(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 18:
			func_114(uParam1, "Extreme2", func_116(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 19:
			func_114(uParam1, "Extreme3", func_116(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 20:
			func_114(uParam1, "Extreme4", func_116(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 21:
			func_114(uParam1, "Fanatic1", func_116(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_115(iParam0), 1, 0);
			break;
		
		case 22:
			func_114(uParam1, "Fanatic2", func_116(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_115(iParam0), 1, 0);
			break;
		
		case 23:
			func_114(uParam1, "Fanatic3", func_116(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_115(iParam0), 0, 1);
			break;
		
		case 24:
			func_114(uParam1, "Hao1", func_116(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_115(iParam0), 0, 1);
			break;
		
		case 25:
			func_114(uParam1, "Hunting1", func_116(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 26:
			func_114(uParam1, "Hunting2", func_116(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 27:
			func_114(uParam1, "Josh1", func_116(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 28:
			func_114(uParam1, "Josh2", func_116(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_115(iParam0), 1, 1);
			break;
		
		case 29:
			func_114(uParam1, "Josh3", func_116(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_115(iParam0), 1, 1);
			break;
		
		case 30:
			func_114(uParam1, "Josh4", func_116(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 31:
			func_114(uParam1, "Maude1", func_116(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 32:
			func_114(uParam1, "Minute1", func_116(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 33:
			func_114(uParam1, "Minute2", func_116(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 34:
			func_114(uParam1, "Minute3", func_116(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 35:
			func_114(uParam1, "MrsPhilips1", func_116(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 36:
			func_114(uParam1, "MrsPhilips2", func_116(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 37:
			func_114(uParam1, "Nigel1", func_116(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 38:
			func_114(uParam1, "Nigel1A", func_116(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_115(iParam0), 1, 1);
			break;
		
		case 39:
			func_114(uParam1, "Nigel1B", func_116(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_115(iParam0), 1, 1);
			break;
		
		case 40:
			func_114(uParam1, "Nigel1C", func_116(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_115(iParam0), 1, 1);
			break;
		
		case 41:
			func_114(uParam1, "Nigel1D", func_116(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_115(iParam0), 1, 1);
			break;
		
		case 42:
			func_114(uParam1, "Nigel2", func_116(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_115(iParam0), 1, 1);
			break;
		
		case 43:
			func_114(uParam1, "Nigel3", func_116(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_115(iParam0), 1, 1);
			break;
		
		case 44:
			func_114(uParam1, "Omega1", func_116(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 45:
			func_114(uParam1, "Omega2", func_116(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 46:
			func_114(uParam1, "Paparazzo1", func_116(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 47:
			func_114(uParam1, "Paparazzo2", func_116(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 48:
			func_114(uParam1, "Paparazzo3", func_116(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 49:
			func_114(uParam1, "Paparazzo3A", func_116(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 50:
			func_114(uParam1, "Paparazzo3B", func_116(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 51:
			func_114(uParam1, "Paparazzo4", func_116(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 52:
			func_114(uParam1, "Rampage1", func_116(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 54:
			func_114(uParam1, "Rampage3", func_116(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 55:
			func_114(uParam1, "Rampage4", func_116(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 56:
			func_114(uParam1, "Rampage5", func_116(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_115(iParam0), 0, 0);
			break;
		
		case 53:
			func_114(uParam1, "Rampage2", func_116(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_115(iParam0), 1, 0);
			break;
		
		case 57:
			func_114(uParam1, "TheLastOne", func_116(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 58:
			func_114(uParam1, "Tonya1", func_116(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 59:
			func_114(uParam1, "Tonya2", func_116(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 60:
			func_114(uParam1, "Tonya3", func_116(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 61:
			func_114(uParam1, "Tonya4", func_116(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		case 62:
			func_114(uParam1, "Tonya5", func_116(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_115(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_114(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0x85F8
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

int func_115(int iParam0)//Position - 0x8689
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

struct<2> func_116(int iParam0)//Position - 0x89CF
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_117(iParam0) };
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

struct<2> func_117(int iParam0)//Position - 0x8A06
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

int func_118()//Position - 0x8E52
{
	if (func_121() && !func_122())
	{
		return 1;
	}
	if (func_120() && func_119())
	{
		return 1;
	}
	return 0;
}

bool func_119()//Position - 0x8E84
{
	return Global_199EA > 0;
}

int func_120()//Position - 0x8E92
{
	if (Global_15FA6 != -1)
	{
		return 1;
	}
	return 0;
}

int func_121()//Position - 0x8EA7
{
	if (Global_15FA6 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_147B0[Global_15FA6 /*34*/].f_F, 20);
	}
	return 0;
}

int func_122()//Position - 0x8ECD
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

int func_123()//Position - 0x8EEA
{
	if (!func_104(5))
	{
		return 1;
	}
	if (func_118())
	{
		return 1;
	}
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (SYSTEM::VMAG2(unk_0xB5D9AE572C19509E(unk_0xBC25C936A095B5BA())) > 1369f && !func_122())
		{
			return 0;
		}
	}
	if (func_112(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_124()//Position - 0x8F4C
{
	if ((Global_19AF9 == func_60() && unk_0x8520DF5301DD9811()) && Global_19AFA)
	{
		return 1;
	}
	return 0;
}

void func_125(int iParam0)//Position - 0x8F77
{
	if (iParam0 == -1)
	{
		iParam0 = func_60();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_127(iParam0);
	unk_0x8A623F2A0D19557F(0);
	unk_0xCB0D7BF24DBB59C6(1);
	Global_19AF6 = 0;
	func_126();
}

void func_126()//Position - 0x8FAD
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

void func_127(int iParam0)//Position - 0x8FEA
{
	Global_19AF9 = iParam0;
}

int func_128(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x8FF8
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
		iParam1 = func_60();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_169())
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
			if (SYSTEM::VMAG2(unk_0xB5D9AE572C19509E(unk_0xBC25C936A095B5BA())) > 1369f && !func_122())
			{
				return 0;
			}
		}
		if (!Global_19B04.f_2360)
		{
			return 0;
		}
		if (func_44(0))
		{
			return 0;
		}
		if (func_118())
		{
			return 0;
		}
		if (func_168())
		{
			return 0;
		}
		if (Global_19AF9 != -1)
		{
			return 0;
		}
		if (func_38(func_36()))
		{
			if (func_112(100f, 1) != -1)
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
		if (!func_167(iParam1))
		{
			return 0;
		}
		if (func_38(func_36()))
		{
			if (func_166(func_36()) == 4 || func_166(func_36()) == 5)
			{
				return 0;
			}
		}
		if (func_38(func_36()))
		{
			if (!func_165(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_164(Global_19B04.f_6186.f_2B[iParam1]))
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
		if (func_163())
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
		if (!func_154(4))
		{
			return 0;
		}
		if (!func_104(5))
		{
			return 0;
		}
		if (func_153(iParam1, iParam2) && !bParam3)
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
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_153(0, 0))
		{
			return 0;
		}
		if (Global_634F)
		{
			return 0;
		}
		if (func_167(30) && !func_153(30, 0))
		{
			if (iParam1 != 30)
			{
				if (SYSTEM::VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_38(func_36()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				vVar3 = { Global_19B04.f_932.f_21B.f_8E8[iVar2 /*3*/] };
				iVar4 = Global_19B04.f_932.f_21B.f_8E4[iVar2];
				if (func_152(iVar4))
				{
					if (func_130(iVar2))
					{
						if (!func_129(vVar3, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false), vVar3) < (210f * 210f))
							{
								if (func_36() != iVar2)
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

bool func_129(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x9392
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_130(int iParam0)//Position - 0x93D9
{
	int iVar0;
	
	iVar0 = Global_19B04.f_932.f_21B.f_8E4[iParam0];
	return func_131(iVar0);
}

int func_131(int iParam0)//Position - 0x93FA
{
	return func_132(iParam0, 1);
}

int func_132(int iParam0, int iParam1)//Position - 0x9409
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_152(iParam0))
	{
		return 0;
	}
	func_133(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_133(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x945C
{
	func_134(func_145(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_134(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x947A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_144(iParam0, iParam1))
	{
		iVar0 = func_143(iParam1);
		iVar1 = func_141(iParam0);
		iVar2 = (func_141(iParam0) - func_141(iParam1));
		iVar3 = (func_143(iParam0) - func_143(iParam1));
		iVar4 = (func_140(iParam0) - func_140(iParam1));
		iVar5 = (func_139(iParam0) - func_139(iParam1));
		iVar6 = (func_138(iParam0) - func_138(iParam1));
		iVar7 = (func_137(iParam0) - func_137(iParam1));
	}
	else
	{
		iVar0 = func_143(iParam0);
		iVar1 = func_141(iParam1);
		iVar2 = (func_141(iParam1) - func_141(iParam0));
		iVar3 = (func_143(iParam1) - func_143(iParam0));
		iVar4 = (func_140(iParam1) - func_140(iParam0));
		iVar5 = (func_139(iParam1) - func_139(iParam0));
		iVar6 = (func_138(iParam1) - func_138(iParam0));
		iVar7 = (func_137(iParam1) - func_137(iParam0));
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
		iVar4 = (iVar4 + func_136(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_135(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_135(float fParam0, float fParam1, float fParam2)//Position - 0x967B
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

int func_136(int iParam0, int iParam1)//Position - 0x96BD
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

int func_137(int iParam0)//Position - 0x975F
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_138(int iParam0)//Position - 0x9772
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_139(int iParam0)//Position - 0x9785
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_140(int iParam0)//Position - 0x9798
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_141(int iParam0)//Position - 0x97AA
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_142(unk_0xFA30DFD0084E92FE(iParam0, 31), -1, 1)) + 2011;
}

int func_142(bool bParam0, int iParam1, int iParam2)//Position - 0x97CF
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_143(int iParam0)//Position - 0x97E6
{
	return iParam0 & 15;
}

int func_144(int iParam0, int iParam1)//Position - 0x97F3
{
	int iVar0;
	int iVar1;
	
	if (!func_152(iParam1) || !func_152(iParam0))
	{
		return 1;
	}
	iVar0 = func_141(iParam0);
	iVar1 = func_141(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_143(iParam0);
	iVar1 = func_143(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_140(iParam0);
	iVar1 = func_140(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_139(iParam0);
	iVar1 = func_139(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_138(iParam0);
	iVar1 = func_138(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_137(iParam0);
	iVar1 = func_137(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_145()//Position - 0x98FF
{
	var uVar0;
	
	func_151(&uVar0, unk_0xF40D00CD7B81C0A8());
	func_150(&uVar0, unk_0x7E09057438B9D216());
	func_149(&uVar0, unk_0x6E06C0DB9B43570D());
	func_148(&uVar0, unk_0xBE14F159908E4EE5());
	func_147(&uVar0, unk_0xDD6A91E47ED4D0CF());
	func_146(&uVar0, unk_0x4EEB3860BFC44B78());
	return uVar0;
}

void func_146(var uParam0, int iParam1)//Position - 0x9945
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

void func_147(var uParam0, int iParam1)//Position - 0x99CB
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_148(var uParam0, int iParam1)//Position - 0x99FE
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_143(*uParam0);
	iVar1 = func_141(*uParam0);
	if (iParam1 < 1 || iParam1 > func_136(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_149(var uParam0, int iParam1)//Position - 0x9A4F
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_150(var uParam0, int iParam1)//Position - 0x9A89
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_151(var uParam0, int iParam1)//Position - 0x9AC4
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_152(int iParam0)//Position - 0x9B00
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
	iVar0 = func_137(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_138(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_139(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_141(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_143(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_140(iParam0);
	if (iVar5 < 1 || iVar5 > func_136(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_153(int iParam0, int iParam1)//Position - 0x9BDC
{
	if (unk_0xFA30DFD0084E92FE(Global_19B04.f_6186.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_154(int iParam0)//Position - 0x9BFF
{
	int iVar0;
	
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				iVar0 = func_36();
				if (!func_38(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_162()) || Global_1974B) || Global_62BF) || func_161()) || func_85(8, -1)) || func_160()) || func_159()) || func_158()) || func_157()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1) || func_162()) || Global_62BF) || func_161()) || func_85(8, -1)) || func_158()) || func_160()) || func_159()) || func_157()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_162()) || Global_1974B) || Global_62BF) || func_161()) || func_85(8, -1)) || func_158()) || func_160()) || func_159()) || func_157()) || Global_19B04.f_1DEB.f_397[iVar0] == 5) || Global_8E64 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_162()) || Global_1974B) || Global_62BF) || func_161()) || func_85(8, -1)) || func_160()) || func_159()) || func_157()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_162() || unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0) || func_85(8, -1)) || func_157()) || func_156()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_85(8, -1) || func_160()) || func_159()) || func_156()) || func_155())
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
							if ((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || func_162()) || Global_62BF) || func_161()) || func_85(8, -1)) || func_159()) || func_158()) || func_157()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || !unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) || !unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F())) || !unk_0x726D9204B160D23E()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || func_162()) || func_159()) || Global_1974B) || Global_62BF) || func_161()) || Global_90C1) || func_85(8, -1)) || func_158()) || func_156()) || func_157()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || !unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) || !unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F())) || !unk_0x726D9204B160D23E()) || unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0)) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1)) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0x9273B3557334635D(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || func_162()) || Global_1974B) || Global_62BF) || func_161()) || func_85(8, -1)) || func_158()) || func_156()) || func_160()) || func_159()) || func_157())
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

var func_155()//Position - 0xA31C
{
	return Global_16B42.f_1;
}

int func_156()//Position - 0xA32A
{
	if (Global_15FA6 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_147B0[Global_15FA6 /*34*/].f_F, 13);
	}
	return 0;
}

int func_157()//Position - 0xA350
{
	if (unk_0xB731B8C5BCE89836(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_158()//Position - 0xA36A
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

bool func_159()//Position - 0xA394
{
	return Global_16B4F.f_142 > 0;
}

bool func_160()//Position - 0xA3A5
{
	return Global_16B4F.f_141 > 0;
}

var func_161()//Position - 0xA3B6
{
	return Global_140856;
}

int func_162()//Position - 0xA3C2
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		return Global_161D2.f_2C == 1;
	}
	return 0;
}

int func_163()//Position - 0xA3DE
{
	func_83();
	if (Global_C60[Global_389D /*2811*/][0 /*281*/].f_103 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_164(int iParam0)//Position - 0xA406
{
	return func_144(func_145(), iParam0);
}

int func_165(int iParam0, int iParam1, int iParam2)//Position - 0xA418
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_36();
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

int func_166(int iParam0)//Position - 0xA4FC
{
	if (!func_38(iParam0))
	{
		return 7;
	}
	return Global_19B04.f_1DEB.f_397[iParam0];
}

bool func_167(int iParam0)//Position - 0xA520
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_169())
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

int func_168()//Position - 0xA57E
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

int func_169()//Position - 0xA5C2
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

void func_170()//Position - 0xA67D
{
	int iVar0;
	
	if (iLocal_282 && !iLocal_105)
	{
		unk_0xB830DBD32591E1BC();
		unk_0xDF53A66AEE1401AA(1f);
		if (unk_0x2DA8CA50A72528FB(iLocal_89))
		{
			unk_0x07B8ECB35A4ED3AC(&iLocal_89);
		}
		if (unk_0x2DA8CA50A72528FB(iLocal_90))
		{
			unk_0x07B8ECB35A4ED3AC(&iLocal_90);
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (unk_0x2DA8CA50A72528FB(iLocal_93[iVar0]))
			{
				unk_0x07B8ECB35A4ED3AC(&(iLocal_93[iVar0]));
			}
			if (unk_0x2DA8CA50A72528FB(uLocal_95[iVar0]))
			{
				unk_0x07B8ECB35A4ED3AC(&(uLocal_95[iVar0]));
			}
			if (iLocal_46 >= 6)
			{
				if (unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_83[iVar0]))
					{
						if (unk_0xE642C1AC73CE364E(iLocal_83[iVar0], unk_0xBC25C936A095B5BA(), 100f, 100f, 100f, 0, 1, 0))
						{
							bLocal_109 = true;
						}
					}
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (unk_0x2DA8CA50A72528FB(iLocal_94[iVar0]))
			{
				unk_0x07B8ECB35A4ED3AC(&(iLocal_94[iVar0]));
			}
			if (unk_0x2DA8CA50A72528FB(uLocal_96[iVar0]))
			{
				unk_0x07B8ECB35A4ED3AC(&(uLocal_96[iVar0]));
			}
			if (iLocal_46 >= 6)
			{
				if (unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_84[iVar0]))
					{
						if (unk_0xE642C1AC73CE364E(iLocal_84[iVar0], unk_0xBC25C936A095B5BA(), 100f, 100f, 100f, 0, 1, 0))
						{
							bLocal_109 = true;
						}
					}
				}
			}
			iVar0++;
		}
		if (iLocal_44 >= 1)
		{
			unk_0xE85B33FB221A23CD(5, true);
			unk_0xE85B33FB221A23CD(3, true);
		}
		if (bLocal_109)
		{
			func_3(func_36(), 1, 25000);
		}
	}
	func_171(-1);
	unk_0x95E4B6F3ED223F5A();
}

void func_171(int iParam0)//Position - 0xA7F5
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_60();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_124())
	{
		func_175(iParam0);
		unk_0x3FF92BBF0607A406(0, 0);
		Global_19AFB = unk_0x105601648511CC64();
		func_174(30000);
		StringCopy(&cVar0, func_173(Global_19AF9, 1), 64);
		if (func_59(Global_19AF9) > 0)
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
	func_172(&Global_62F8);
	Global_19AFA = 0;
	func_127(-1);
}

void func_172(var uParam0)//Position - 0xA8AA
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

char* func_173(int iParam0, bool bParam1)//Position - 0xA8E7
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

void func_174(int iParam0)//Position - 0xAB30
{
	Global_8E68 = (unk_0x105601648511CC64() + iParam0);
}

void func_175(int iParam0)//Position - 0xAB42
{
	func_176(iParam0, 0, func_181(iParam0));
}

void func_176(int iParam0, int iParam1, int iParam2)//Position - 0xAB57
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_145();
	func_179(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_178(iParam0, &uVar0);
	Var1 = { func_177(&uVar0) };
}

struct<16> func_177(var uParam0)//Position - 0xAB86
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_139(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_138(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_137(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_140(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_143(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_141(*uParam0), 64);
	return Var0;
}

void func_178(int iParam0, var uParam1)//Position - 0xAC56
{
	Global_19B04.f_6186.f_2B[iParam0] = *uParam1;
}

void func_179(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xAC6E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_141(*uParam0);
	iVar1 = func_143(*uParam0);
	iVar2 = func_140(*uParam0);
	iVar3 = func_139(*uParam0);
	iVar4 = func_138(*uParam0);
	iVar5 = func_137(*uParam0);
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
	iVar6 = func_136(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_136(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_180(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_180(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xADF0
{
	func_151(uParam0, iParam1);
	func_150(uParam0, iParam2);
	func_149(uParam0, iParam3);
	func_147(uParam0, iParam5);
	func_148(uParam0, iParam4);
	func_146(uParam0, iParam6);
}

int func_181(int iParam0)//Position - 0xAE28
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

