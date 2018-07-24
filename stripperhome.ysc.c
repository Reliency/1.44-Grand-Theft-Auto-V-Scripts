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
	int iLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	bool bLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	vector3 vLocal_63 = { 0f, 0f, 0f };
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	var uLocal_68 = 0;
	bool bLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	var uLocal_74[1] = { 0 };
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	var uLocal_78 = 16;
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
	int iLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	int iLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	int iLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	int iLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	int iLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	int iLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	int iLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 1097859072;
	var uLocal_267 = 1500;
	var uLocal_268 = 45;
	var uLocal_269 = 1103626240;
	var uLocal_270 = 5;
	int iLocal_271[1] = { 0 };
	char* sLocal_272 = NULL;
	char* sLocal_273 = NULL;
	var uLocal_274 = 1;
	var uLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	var uLocal_278[1] = { 0 };
	int iLocal_279[4] = { 0, 0, 0, 0 };
	struct<9> Local_280 = { 0, 0, 0, 0, 0, 0, 0, 21, 6 } ;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	int iLocal_284 = 0;
	vector3 vLocal_285 = { 0f, 0f, 0f };
	vector3 vLocal_286 = { 0f, 0f, 0f };
	vector3 vLocal_287 = { 0f, 0f, 0f };
	vector3 vLocal_288 = { 0f, 0f, 0f };
	vector3 vLocal_289 = { 0f, 0f, 0f };
	vector3 vLocal_290 = { 0f, 0f, 0f };
	vector3 vLocal_291 = { 0f, 0f, 0f };
	vector3 vLocal_292 = { 0f, 0f, 0f };
	float fLocal_293 = 0f;
	float fLocal_294 = 0f;
	float fLocal_295 = 0f;
	float fLocal_296 = 0f;
	int iLocal_297 = 0;
	var uLocal_298 = 0;
	int iLocal_299 = 0;
	var uLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	bool bLocal_303 = 0;
	bool bLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	struct<5> Local_308 = { 1, 0, 0, 0, 0 } ;
	var uLocal_309 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
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
	vLocal_63 = { 500f, 500f, 500f };
	fLocal_296 = -1f;
	iLocal_299 = -1;
	bLocal_303 = true;
	unk_0x91DEC7187FA01089("stripperhome");
	unk_0x25A523E067E06F54(1);
	unk_0x0587BE45519E406A(unk_0xB5CEFD608600A09F(), 1);
	if (unk_0xE8A79675302ED812(75))
	{
		func_289();
	}
	bLocal_304 = ScriptParam_308.f_5;
	if (bLocal_304)
	{
		unk_0xBF463BC3D6FFDE31(32, 0, -1);
		func_284(0, -1, 0);
		unk_0xD1CF2F876BAD2600(1);
		unk_0x6C87EFD58B261C6F(0);
	}
	uLocal_74[0] = ScriptParam_308[0];
	Global_19735.f_1 = uLocal_74[0];
	bVar0 = false;
	bVar1 = true;
	iVar2 = unk_0x6E06C0DB9B43570D();
	if (func_283() && ScriptParam_308.f_4)
	{
		bVar1 = false;
		if (iVar2 > 14 && iVar2 < 22)
		{
			bVar0 = true;
		}
	}
	while (((!func_254(&ScriptParam_308, bVar0) && iLocal_72 != 6) && iLocal_72 != 5) && (iLocal_72 != -1 || !func_253(uLocal_300, 1024)))
	{
		func_245(0);
		SYSTEM::WAIT(0);
	}
	unk_0x2CA123B0622F495C(func_244(0, 0));
	unk_0x2CA123B0622F495C(func_244(1, 0));
	if (!bVar1)
	{
		iLocal_72 = 2;
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (iLocal_302 > 0)
		{
			func_242();
			iLocal_302 = (iLocal_302 - SYSTEM::ROUND((unk_0x11F9F9006143871A() * 1000f)));
		}
		switch (iLocal_72)
		{
			case -1:
				func_241();
				break;
			
			case 0:
				func_202(1);
				break;
			
			case 1:
				func_105();
				break;
			
			case 2:
				func_202(0);
				break;
			
			case 3:
				func_87();
				break;
			
			case 4:
				func_36(bLocal_303);
				break;
			
			case 5:
				func_11();
				break;
			
			case 6:
				if (!func_10(&iLocal_258))
				{
					func_7(&iLocal_258);
				}
				else if (func_1(&iLocal_258, 7.5f))
				{
					func_289();
				}
				break;
		}
	}
}

int func_1(int iParam0, float fParam1)//Position - 0x24B
{
	if (func_3(iParam0, fParam1))
	{
		func_2(iParam0);
		return 1;
	}
	return 0;
}

void func_2(int iParam0)//Position - 0x269
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

int func_3(int iParam0, float fParam1)//Position - 0x27F
{
	if (func_10(iParam0))
	{
		if (func_4(iParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float func_4(int iParam0)//Position - 0x2A1
{
	if (func_10(iParam0))
	{
		if (func_6(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_5(unk_0xFA30DFD0084E92FE(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_5(bool bParam0)//Position - 0x2E0
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

bool func_6(var uParam0)//Position - 0x338
{
	return unk_0xFA30DFD0084E92FE(*uParam0, 2);
}

void func_7(int iParam0)//Position - 0x348
{
	if (!func_10(iParam0))
	{
		func_8(iParam0);
	}
}

void func_8(int iParam0)//Position - 0x360
{
	func_9(iParam0, 0f);
}

void func_9(int iParam0, float fParam1)//Position - 0x36F
{
	iParam0->f_1 = (func_5(unk_0xFA30DFD0084E92FE(*iParam0, 4)) - fParam1);
	unk_0xF0059F27F7BB6680(iParam0, 1);
	unk_0x7CB6FD92BE491AD9(iParam0, 2);
	iParam0->f_2 = 0f;
}

bool func_10(var uParam0)//Position - 0x39D
{
	return unk_0xFA30DFD0084E92FE(*uParam0, 1);
}

void func_11()//Position - 0x3AD
{
	if (!func_253(uLocal_300, 8192))
	{
		if (func_35())
		{
			func_26();
		}
		else
		{
			iLocal_72 = 6;
		}
	}
	if (func_253(uLocal_300, 16384))
	{
		if (func_12())
		{
			iLocal_72 = 6;
		}
	}
}

int func_12()//Position - 0x3EB
{
	if (unk_0x1D403DFADBC2DE3C(iLocal_271[0], 0))
	{
		return 1;
	}
	if (func_253(uLocal_300, 8192))
	{
		unk_0x2E9860A2B72187F5(iLocal_271[0], 60, true);
		if (unk_0x4DBCE270B354E123(iLocal_271[0], 96.8033f, -1287.597f, 28.2688f, 5f, 5f, 2f, false, true, 1) || func_25(unk_0xBC25C936A095B5BA(), 96.8033f, -1287.597f, 28.2688f, 1) > 100f)
		{
			if (unk_0x70CF24CEFB0F53B0(96.12f, -1284.91f, 29.43f, 5f, joaat("prop_magenta_door"), 0))
			{
				unk_0x702FD033579B62CE(joaat("prop_magenta_door"), 96.12f, -1284.91f, 29.43f, 1, 0f, 0);
			}
			if (unk_0xEF0E25DA0CB6E8FF(iLocal_279[0]))
			{
				if (unk_0xF448AA2D7E08A675(iLocal_279[0]))
				{
					func_13(1, 1, 0);
					unk_0x062C9995BFD27B2A(false, false, 3000, 1, 0, 0);
					unk_0x4EC087603E1DEF9C(iLocal_279[0], 1);
				}
			}
			unk_0xF845620A03C7425B(&(iLocal_271[0]));
			return 1;
		}
	}
	return 0;
}

void func_13(bool bParam0, bool bParam1, int iParam2)//Position - 0x4E7
{
	if (bParam0)
	{
		unk_0xDDCAA2E64649E083(unk_0xFC1CAE18F3ECBF2D(), true, 0);
	}
	unk_0xD5E53AA0828339DA(1);
	func_15(0, 1, iParam2, 0, 0);
	if (bParam1)
	{
		unk_0x43F06392C4EF25E0(true);
		unk_0x59B038076F830627(true);
	}
	func_14(23, 0);
}

void func_14(int iParam0, bool bParam1)//Position - 0x523
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

void func_15(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x545
{
	if (bParam0)
	{
		unk_0x0D2E9062E966BE4F(unk_0xB5CEFD608600A09F());
		unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 1);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 1);
		func_24(1);
		unk_0x32FF237D69EB5489();
		unk_0x3169E2C5E6A096BC();
		if (Global_389D.f_1 > 3)
		{
			if (unk_0x58E7DDFF8D17A82A())
			{
				unk_0x1E08809A5041F85B(false);
			}
			if (!func_23())
			{
				Global_389D.f_1 = 3;
			}
			Global_3DB8 = 5;
		}
		func_22(1, iParam3, iParam2, 0);
		Global_DAA5 = 1;
		Global_10ABB = 1;
		Global_11540 = 1;
	}
	else
	{
		func_24(0);
		unk_0xCB50D125C355ED9C();
		Global_DAA5 = 0;
		if (bParam1)
		{
			unk_0x7FF4F08CAB3344B1();
		}
		unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 0);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 0);
		func_22(0, iParam3, iParam2, 0);
		if (unk_0x7AF0088ABFA713B6())
		{
			if ((((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_20(unk_0xB5CEFD608600A09F())) && !func_17(unk_0xB5CEFD608600A09F(), 0)) && !func_16()) && !bParam4)
			{
				unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), false);
			}
		}
		else if ((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_20(unk_0xB5CEFD608600A09F())) && !bParam4)
		{
			unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), false);
		}
		Global_11540 = 0;
	}
}

bool func_16()//Position - 0x66E
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_27.f_12, 14);
}

bool func_17(int iParam0, int iParam1)//Position - 0x68B
{
	bool bVar0;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		bVar0 = func_18(-1, 0) == 8;
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

int func_18(int iParam0, bool bParam1)//Position - 0x6D6
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_19();
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

int func_19()//Position - 0x717
{
	return Global_1407E0;
}

int func_20(int iParam0)//Position - 0x723
{
	if (func_17(iParam0, 0))
	{
		return 1;
	}
	if (func_21())
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

bool func_21()//Position - 0x765
{
	return unk_0xFA30DFD0084E92FE(Global_240006, 3);
}

int func_22(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x776
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

int func_23()//Position - 0x7A9
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_24(int iParam0)//Position - 0x7D0
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

float func_25(int iParam0, vector3 vParam1, bool bParam2)//Position - 0x7F3
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

void func_26()//Position - 0x82D
{
	int iVar0;
	
	func_29();
	if (unk_0x70CF24CEFB0F53B0(96.12f, -1284.91f, 29.43f, 5f, joaat("prop_magenta_door"), 0))
	{
		unk_0x702FD033579B62CE(joaat("prop_magenta_door"), 96.12f, -1284.91f, 29.43f, 0, 0f, 0);
	}
	func_27(&uLocal_300, 16384);
	unk_0x346478B12F69D4E3(iLocal_271[0], false);
	unk_0xC8FD3EBBB90E8D7F(iLocal_271[0], 104, true);
	unk_0xC5A6DFE2B8987B17(&iVar0);
	unk_0x346129B364057FF6(0, 98.2041f, -1291.252f, 28.2688f, 1f, -1, 0.25f, 1, 1193033728);
	unk_0x346129B364057FF6(0, 107.6303f, -1304.742f, 27.7688f, 1f, -1, 0.25f, 0, 1193033728);
	unk_0xE896C0AD02364F2A(0, "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -4f, 15000, 1, 0, 0, 0, 0);
	unk_0x535008C596714F9E(iVar0);
	unk_0xA8E6405305C0D7DF(iLocal_271[0], iVar0);
	unk_0x02DAF06EA4F08219(&iVar0);
	func_27(&uLocal_300, 8192);
}

void func_27(var uParam0, int iParam1)//Position - 0x91A
{
	func_28(uParam0, iParam1);
}

void func_28(var uParam0, var uParam1)//Position - 0x92A
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_29()//Position - 0x93B
{
	if (!unk_0x41A5D6415E2CC10E(iLocal_271[0]) && func_34(1, 0, 1))
	{
		func_30(0, 0, 0);
		iLocal_279[0] = unk_0x6B8F797EEC7B95E2("DEFAULT_SCRIPTED_CAMERA", 90.1007f, -1281.573f, 28.6661f, 2.4422f, 0f, -113.4013f, 45f, 1, 2);
		unk_0x062C9995BFD27B2A(true, false, 3000, 1, 0, 0);
	}
}

void func_30(int iParam0, int iParam1, int iParam2)//Position - 0x9A1
{
	unk_0xDDCAA2E64649E083(unk_0xFC1CAE18F3ECBF2D(), false, iParam0);
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		unk_0x7A71B0C6DDC0D7DA(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 15f);
	}
	unk_0xD5E53AA0828339DA(iParam1);
	func_31(0);
	func_15(1, 1, iParam2, 0, 0);
	unk_0x43F06392C4EF25E0(false);
	unk_0x59B038076F830627(false);
	func_14(23, 1);
}

void func_31(int iParam0)//Position - 0x9F8
{
	if (Global_3943)
	{
		func_32(0, 0);
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
	if (!func_23())
	{
		Global_389D.f_1 = 3;
	}
}

void func_32(bool bParam0, bool bParam1)//Position - 0xA68
{
	if (bParam0)
	{
		if (func_33(0))
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

int func_33(int iParam0)//Position - 0xADC
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

int func_34(bool bParam0, bool bParam1, bool bParam2)//Position - 0xB36
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

int func_35()//Position - 0xC1B
{
	if ((uLocal_74[0] == 8 || uLocal_74[0] == 9) || func_25(iLocal_271[0], 96.12f, -1284.91f, 29.43f, 1) > 10f)
	{
		return 0;
	}
	return 1;
}

void func_36(bool bParam0)//Position - 0xC67
{
	vector3 vVar0;
	var uVar1;
	int iVar2;
	
	func_63();
	if (bParam0)
	{
		vVar0 = { vLocal_287 };
	}
	else
	{
		func_62(&vVar0, &uVar1, 0);
	}
	func_59(vVar0);
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		if (unk_0x5237AF95232D78C5(iLocal_271[0], 0))
		{
			iVar2 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			if (unk_0x724D816EA203A79E(iVar2) && !unk_0x1D403DFADBC2DE3C(iVar2, 0))
			{
				if (iLocal_305)
				{
					if (func_57(iVar2, 4f, 1, 1056964608, 0, 1, 0))
					{
						func_56();
						unk_0xA3981DED4FC2E56E(iLocal_271[0], 0, 16777216);
						func_37();
					}
				}
				else if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vVar0, 4f, 4f, 2f, true, true, 2))
				{
					iLocal_305 = 1;
				}
			}
		}
	}
}

void func_37()//Position - 0xD1D
{
	func_55();
	func_48(295, 0, 0);
	func_38(0);
	func_289();
}

void func_38(bool bParam0)//Position - 0xD3B
{
	struct<8> Var0[3];
	struct<6> Var1[3];
	
	if (!func_45())
	{
		return;
	}
	if (!iLocal_67)
	{
		return;
	}
	StringCopy(&(Var0[0 /*8*/]), "GameType", 32);
	StringCopy(&(Var0[1 /*8*/]), "Location", 32);
	StringCopy(&(Var0[2 /*8*/]), "Type", 32);
	if (bParam0)
	{
		StringCopy(&(Var1[0 /*6*/]), "MP", 24);
	}
	else
	{
		StringCopy(&(Var1[0 /*6*/]), "SP", 24);
	}
	StringCopy(&(Var1[1 /*6*/]), "City", 24);
	StringCopy(&(Var1[2 /*6*/]), "????", 24);
	if (func_43(200, &Var1, &Var0, 3, -1, 0, 0))
	{
		unk_0x18054B9E2612CC6D(131, func_42(), 0f);
		unk_0x18054B9E2612CC6D(108, func_41(), 0f);
		unk_0x18054B9E2612CC6D(102, func_40(), 0f);
		unk_0x18054B9E2612CC6D(8, func_39(), 0f);
	}
	iLocal_64 = 0;
	iLocal_65 = 0;
	iLocal_66 = 0;
	iLocal_67 = 0;
}

int func_39()//Position - 0xDF8
{
	return iLocal_65;
}

int func_40()//Position - 0xE02
{
	return iLocal_66;
}

int func_41()//Position - 0xE0C
{
	return iLocal_64;
}

int func_42()//Position - 0xE16
{
	return 0;
}

int func_43(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0xE1F
{
	struct<68> Var0;
	int iVar1;
	struct<13> Var2;
	var uVar3;
	
	if (!unk_0x57D316754A262B34())
	{
	}
	if ((!unk_0x8BEB5B1064243AE5() && (unk_0x36C1DE668967177B() || !unk_0x11F704A1BA7AC122())) && unk_0x198118F0FE63908B())
	{
		Var0.f_2.f_1 = 4;
		Var0 = iParam0;
		if (iParam4 == -1)
		{
			if (unk_0xB9ACC1154C623363())
			{
				Var2 = { func_44(unk_0xB5CEFD608600A09F()) };
				if (unk_0xD7F4457CECF10121(&Var2))
				{
					if (unk_0x24723877416AAAFC(&uVar3, 35, &Var2))
					{
						Var0.f_1 = uVar3;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar1 = 0;
		while (iVar1 < iParam3)
		{
			Var0.f_2.f_1[iVar1 /*16*/] = { *(uParam2[iVar1 /*8*/]) };
			MemCopy(&(Var0.f_2.f_1[iVar1 /*16*/].f_8), {*(uParam1[iVar1 /*6*/])}, 8);
			iVar1++;
		}
		if (bParam5)
		{
			Global_1C0005.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (unk_0x7AF0088ABFA713B6() && Global_2579BD.f_3)
			{
				unk_0xD10ECE53AB296FDB(&Var0, &(Global_193A13.f_A));
			}
			else
			{
				unk_0x2F7E331C1ABCF9E9(&Var0);
			}
		}
		return 1;
	}
	if (unk_0x8BEB5B1064243AE5())
	{
	}
	if (!unk_0x36C1DE668967177B())
	{
	}
	if (unk_0x11F704A1BA7AC122())
	{
	}
	if (!unk_0x198118F0FE63908B())
	{
	}
	return 0;
}

struct<13> func_44(int iParam0)//Position - 0xF53
{
	struct<13> Var0;
	
	unk_0xB7DBA2C6D2C3C41A(iParam0, &Var0, 13);
	return Var0;
}

int func_45()//Position - 0xF6A
{
	if ((unk_0x57D316754A262B34() && unk_0x7E3A4CFA5545546C()) && func_46())
	{
		return 1;
	}
	return 0;
}

int func_46()//Position - 0xF90
{
	if (func_47())
	{
		return 0;
	}
	if (unk_0x670C0C6C780A3F84() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_47()//Position - 0xFB0
{
	return Global_258255;
}

void func_48(int iParam0, int iParam1, int iParam2)//Position - 0xFBC
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
		func_54((891 + iParam0), 1, -1, 1);
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
		func_49();
	}
}

void func_49()//Position - 0x10A4
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
		func_53(13, SYSTEM::FLOOR(Global_19B04.f_27B5.f_F0D));
	}
	if (!unk_0xF9BFA43C1BAFD016())
	{
		if (!Global_11542)
		{
			if (func_52() == 2 == 0 && !unk_0x7AF0088ABFA713B6())
			{
				if (unk_0x670C0C6C780A3F84())
				{
					Global_199FA = 0;
				}
				if (!Global_DA9F)
				{
					func_50();
				}
			}
		}
	}
}

int func_50()//Position - 0x1565
{
	if (func_51(0))
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

bool func_51(bool bParam0)//Position - 0x15B0
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_1163A, 0);
}

int func_52()//Position - 0x15DB
{
	return Global_62BD;
}

int func_53(int iParam0, int iParam1)//Position - 0x15E6
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

int func_54(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x1637
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
		iParam2 = func_19();
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

void func_55()//Position - 0x1B47
{
	iLocal_66++;
	iLocal_67 = 1;
}

void func_56()//Position - 0x1B58
{
	if (unk_0x724D816EA203A79E(iLocal_271[0]) && !unk_0x1D403DFADBC2DE3C(iLocal_271[0], 0))
	{
		unk_0x0DEF5E53360637F2(iLocal_271[0], 1);
		if (unk_0xD45C08B05D4687A7(iLocal_271[0]))
		{
			unk_0x57EB4CC8F1928A47(iLocal_271[0]);
		}
	}
}

int func_57(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x1BA0
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
	func_58(iParam0);
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

void func_58(int iParam0)//Position - 0x1D2F
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

void func_59(vector3 vParam0)//Position - 0x1D5B
{
	int iVar0;
	
	if (unk_0x2DA8CA50A72528FB(iLocal_277))
	{
		unk_0x07B8ECB35A4ED3AC(&iLocal_277);
	}
	if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		return;
	}
	iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
	if (unk_0x724D816EA203A79E(iVar0) && !unk_0x1D403DFADBC2DE3C(iVar0, 0))
	{
		if (unk_0x5237AF95232D78C5(iLocal_271[0], 0))
		{
			if (unk_0x62F3A07C43FFB568(iLocal_271[0], unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0))
			{
				if (!unk_0x2DA8CA50A72528FB(iLocal_276))
				{
					iLocal_276 = func_60(vParam0, 1);
				}
			}
		}
	}
}

int func_60(vector3 vParam0, bool bParam1)//Position - 0x1DE1
{
	int iVar0;
	
	iVar0 = unk_0x390CF6C8AD6903B7(vParam0);
	unk_0x3F5F1772D71D5EC4(iVar0, func_61(unk_0x7AF0088ABFA713B6(), 1f, 1f));
	unk_0x0BBAABB52887CF8C(iVar0, bParam1);
	return iVar0;
}

float func_61(bool bParam0, float fParam1, float fParam2)//Position - 0x1E0D
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_62(var uParam0, var uParam1, bool bParam2)//Position - 0x1E24
{
	vLocal_290 = { vLocal_290 };
	switch (uLocal_74[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (!bParam2)
			{
				*uParam0 = { 92.8829f, -1281.123f, 28.1845f };
				*uParam1 = 15f;
			}
			else
			{
				*uParam0 = { vLocal_289 };
				*uParam1 = fLocal_293;
			}
			vLocal_290 = { *uParam0 };
			break;
		
		case 8:
			if (!bParam2)
			{
				*uParam0 = { -1615.991f, 187.4827f, 59.1337f };
				*uParam1 = 217.5474f;
			}
			else
			{
				*uParam0 = { vLocal_289 };
				*uParam1 = fLocal_293;
			}
			vLocal_290 = { *uParam0 };
			break;
		
		case 9:
			if (!bParam2)
			{
				*uParam0 = { 1538.432f, 3776.85f, 33.5178f };
				*uParam1 = 225.8821f;
			}
			else
			{
				*uParam0 = { vLocal_289 };
				*uParam1 = fLocal_293;
			}
			vLocal_290 = { *uParam0 };
			break;
	}
}

void func_63()//Position - 0x1F39
{
	if (unk_0x36CEFBE9B745A58D(iLocal_271[0]))
	{
		if (!unk_0x724D816EA203A79E(iLocal_271[0]))
		{
		}
		else if (unk_0x1D403DFADBC2DE3C(iLocal_271[0], 0))
		{
		}
		func_64(0);
	}
}

void func_64(int iParam0)//Position - 0x1F72
{
	if ((uLocal_74[0] > -1 && uLocal_74[0] < 10) && iParam0 != 2)
	{
		func_85(uLocal_74[0], (func_86(uLocal_74[0]) / 2));
	}
	func_83();
	switch (iParam0)
	{
		case 0:
			func_81("SCLUB_HOME_D", uLocal_74[0]);
			func_85(uLocal_74[0], 0);
			func_70(uLocal_74[0], 1);
			iLocal_72 = 6;
			break;
		
		case 1:
			unk_0xEB233A3B7635D2AC();
			func_65("SCLUB_HOME_A", uLocal_74[0], 0);
			iLocal_72 = 5;
			break;
		
		case 2:
			iLocal_72 = 5;
			break;
		
		case 4:
			func_81("SCLUB_HOME_D3", uLocal_74[0]);
			iLocal_72 = 6;
			break;
		
		case 3:
			if (func_25(iLocal_271[0], 92.5861f, -1282.86f, 28.2548f, 1) < 10f)
			{
				iLocal_72 = 5;
			}
			else
			{
				iLocal_72 = 6;
			}
			break;
	}
}

void func_65(char* sParam0, int iParam1, bool bParam2)//Position - 0x205E
{
	char* sVar0;
	
	MemCopy(&sVar0, {func_69(iParam1)}, 6);
	if (!func_68(sParam0, &sVar0))
	{
		if (!bParam2)
		{
			func_67(sParam0, &sVar0, -1);
		}
		else
		{
			func_66(sParam0, &sVar0);
		}
	}
}

void func_66(char* sParam0, char* sParam1)//Position - 0x2097
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0xC9C304D0AABE1335(sParam1);
	unk_0x72F8FA06CC9EC899(0, 1, true, -1);
}

void func_67(char* sParam0, char* sParam1, int iParam2)//Position - 0x20B3
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0xC9C304D0AABE1335(sParam1);
	unk_0x72F8FA06CC9EC899(0, 0, true, iParam2);
}

int func_68(char* sParam0, char* sParam1)//Position - 0x20D0
{
	unk_0xF07D20149ECBC61E(sParam0);
	unk_0xC9C304D0AABE1335(sParam1);
	return unk_0xA66DBDA0A072514A(0);
}

struct<4> func_69(int iParam0)//Position - 0x20E9
{
	struct<4> Var0;
	
	StringCopy(&Var0, "SCLUB_NM_", 16);
	StringIntConCat(&Var0, iParam0, 16);
	return Var0;
}

void func_70(int iParam0, bool bParam1)//Position - 0x2103
{
	if (bParam1)
	{
		func_27(&(Global_19B04.f_F3[func_73() /*53*/].f_2[iParam0 /*5*/].f_3), 2);
	}
	else
	{
		func_71(&(Global_19B04.f_F3[func_73() /*53*/].f_2[iParam0 /*5*/].f_3), 2);
	}
}

void func_71(var uParam0, int iParam1)//Position - 0x2145
{
	func_72(uParam0, iParam1);
}

void func_72(var uParam0, var uParam1)//Position - 0x2155
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_73()//Position - 0x216A
{
	int iVar0;
	
	iVar0 = func_75();
	switch (iVar0)
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
		
		default:
			switch (func_74(-1))
			{
				case 0:
					return 3;
					break;
				
				case 1:
					return 4;
					break;
				
				case 2:
					return 5;
					break;
				
				case 3:
					return 6;
					break;
				
				case 4:
					return 7;
					break;
				
				default:
					break;
			}
			break;
	}
	return 3;
}

int func_74(int iParam0)//Position - 0x21F8
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_19();
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

int func_75()//Position - 0x222C
{
	func_76();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_76()//Position - 0x2245
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_80(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_79(unk_0xBC25C936A095B5BA());
			if (func_78(iVar0) && (!func_77(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_78(Global_19B04.f_932.f_21B.f_10CD))
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

bool func_77(int iParam0)//Position - 0x2342
{
	return Global_8C41 == iParam0;
}

bool func_78(int iParam0)//Position - 0x2350
{
	return iParam0 < 3;
}

int func_79(int iParam0)//Position - 0x235C
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_80(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_80(int iParam0)//Position - 0x2399
{
	if (func_78(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_81(char* sParam0, int iParam1)//Position - 0x23C3
{
	char* sVar0;
	
	MemCopy(&sVar0, {func_69(iParam1)}, 6);
	func_82(sParam0, &sVar0, 7500, 1);
}

void func_82(char* sParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x23E2
{
	iParam3 = iParam3;
	unk_0x3714DE83381EADC2(sParam0);
	unk_0xC9C304D0AABE1335(sParam1);
	unk_0x41D8F63F629E76BE(iParam2, 1);
}

void func_83()//Position - 0x2401
{
	if (unk_0x2DA8CA50A72528FB(iLocal_277))
	{
		unk_0x07B8ECB35A4ED3AC(&iLocal_277);
	}
	if (unk_0x2DA8CA50A72528FB(iLocal_276))
	{
		unk_0x07B8ECB35A4ED3AC(&iLocal_276);
	}
	func_84();
}

void func_84()//Position - 0x242F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (unk_0x2DA8CA50A72528FB(uLocal_278[iVar0]))
		{
			unk_0x07B8ECB35A4ED3AC(&(uLocal_278[iVar0]));
		}
		iVar0++;
	}
}

void func_85(int iParam0, int iParam1)//Position - 0x2462
{
	Global_19B04.f_F3[func_73() /*53*/].f_2[iParam0 /*5*/] = iParam1;
}

int func_86(int iParam0)//Position - 0x247E
{
	return Global_19B04.f_F3[func_73() /*53*/].f_2[iParam0 /*5*/];
}

void func_87()//Position - 0x2498
{
	func_63();
	func_83();
	switch (iLocal_77)
	{
		case 0:
			if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
			{
				if (unk_0x5237AF95232D78C5(iLocal_271[0], 0))
				{
					if (!func_104("SCLUB_SECLUDED"))
					{
						func_103("SCLUB_SECLUDED");
					}
					if (func_102() && unk_0x8910237449BB6F79(unk_0xBC25C936A095B5BA()) == 0f)
					{
						unk_0x7456702622C62EA0(1);
						unk_0x522053D86D6E1C7A(func_97(iLocal_271[0], 0, 0));
						iLocal_77 = 1;
					}
				}
			}
			break;
		
		case 1:
			if (func_90())
			{
				iLocal_77 = 2;
			}
			break;
		
		case 2:
			if (unk_0xF4FCC3C1048FF2AB(unk_0xBC25C936A095B5BA(), 242628503) != 1)
			{
				func_242();
				if (unk_0x6E06C0DB9B43570D() > 20 || unk_0x6E06C0DB9B43570D() < 4)
				{
					bLocal_303 = false;
				}
				unk_0xC738E4BB7AAEF78D(iLocal_45);
				func_88(bLocal_303);
				iLocal_72 = 4;
			}
			break;
	}
}

void func_88(bool bParam0)//Position - 0x256F
{
	switch (uLocal_74[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (bParam0)
			{
				func_81("SCLUB_HOME_GO", uLocal_74[0]);
			}
			else
			{
				func_89("SCLUB_CLUB_GO", 7500, 1);
			}
			break;
		
		case 8:
		case 9:
			func_89("SCLUB_HOME_GO3", 7500, 1);
			break;
	}
}

void func_89(char* sParam0, int iParam1, int iParam2)//Position - 0x25F0
{
	iParam2 = iParam2;
	unk_0x3714DE83381EADC2(sParam0);
	unk_0x41D8F63F629E76BE(iParam1, 1);
}

int func_90()//Position - 0x2609
{
	if (unk_0xF9E082857622D91E(func_97(iLocal_271[0], 0, 0)))
	{
		func_91(iLocal_271[0], 0, 1, -1, 1);
		func_91(unk_0xBC25C936A095B5BA(), 0, 0, -1, 1);
		return 1;
	}
	return 0;
}

void func_91(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)//Position - 0x2643
{
	int iVar0;
	bool bVar1;
	char* sVar2;
	int iVar3;
	
	if (unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		return;
	}
	iVar0 = unk_0x9FE9D386222EEE47(iParam0, 1);
	if (!unk_0xE59B7F5A03335350(iVar0, 0))
	{
		return;
	}
	iLocal_45 = unk_0x7FCE28BE45D0735E();
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1) && func_96(0, 1))
	{
		if (iLocal_45 != 4)
		{
			unk_0xC738E4BB7AAEF78D(4);
		}
	}
	bVar1 = func_95(iVar0);
	sVar2 = func_97(iParam0, 0, 0);
	if (!unk_0xF9E082857622D91E(sVar2))
	{
		unk_0x522053D86D6E1C7A(sVar2);
	}
	else
	{
		unk_0xC5A6DFE2B8987B17(&iVar3);
		unk_0xE896C0AD02364F2A(0, sVar2, func_92(0, bParam2, bParam1, bVar1), 8f, -8f, -1, 0, 0, 0, 0, 0);
		unk_0xE896C0AD02364F2A(0, sVar2, func_92(1, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0xE896C0AD02364F2A(0, sVar2, func_92(2, bParam2, bParam1, bVar1), 8f, -4f, iParam3, 1, 0, 0, 0, 0);
		unk_0xE896C0AD02364F2A(0, sVar2, func_92(3, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0xE896C0AD02364F2A(0, sVar2, func_92(4, bParam2, bParam1, bVar1), 4f, -2f, -1, 0, 0, 0, 0, 0);
		unk_0x535008C596714F9E(iVar3);
		unk_0xA8E6405305C0D7DF(iParam0, iVar3);
		if (bParam4)
		{
			unk_0x02DAF06EA4F08219(&iVar3);
		}
	}
}

char* func_92(int iParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x2788
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_94(18);
					}
					else
					{
						sVar0 = func_94(23);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_94(8);
				}
				else
				{
					sVar0 = func_94(13);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_93(18);
				}
				else
				{
					sVar0 = func_93(23);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_93(8);
			}
			else
			{
				sVar0 = func_93(13);
			}
			break;
		
		case 1:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_94(19);
					}
					else
					{
						sVar0 = func_94(24);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_94(9);
				}
				else
				{
					sVar0 = func_94(14);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_93(19);
				}
				else
				{
					sVar0 = func_93(24);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_93(9);
			}
			else
			{
				sVar0 = func_93(14);
			}
			break;
		
		case 2:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_94(20);
					}
					else
					{
						sVar0 = func_94(25);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_94(10);
				}
				else
				{
					sVar0 = func_94(15);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_93(20);
				}
				else
				{
					sVar0 = func_93(25);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_93(10);
			}
			else
			{
				sVar0 = func_93(15);
			}
			break;
		
		case 3:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_94(21);
					}
					else
					{
						sVar0 = func_94(26);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_94(11);
				}
				else
				{
					sVar0 = func_94(16);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_93(21);
				}
				else
				{
					sVar0 = func_93(26);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_93(11);
			}
			else
			{
				sVar0 = func_93(16);
			}
			break;
		
		case 4:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_94(22);
					}
					else
					{
						sVar0 = func_94(27);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_94(12);
				}
				else
				{
					sVar0 = func_94(17);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_93(22);
				}
				else
				{
					sVar0 = func_93(27);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_93(12);
			}
			else
			{
				sVar0 = func_93(17);
			}
			break;
		
		case 5:
			if (bParam3)
			{
				if (bParam1)
				{
					sVar0 = func_94(3);
				}
				else
				{
					sVar0 = func_94(2);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_93(3);
			}
			else
			{
				sVar0 = func_93(2);
			}
			break;
		
		case 6:
			break;
	}
	return sVar0;
}

char* func_93(int iParam0)//Position - 0x2A6A
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "into_proposition_male";
			break;
		
		case 1:
			sVar0 = "into_proposition_prostitute";
			break;
		
		case 2:
			sVar0 = "proposition_loop_male";
			break;
		
		case 3:
			sVar0 = "proposition_loop_prostitute";
			break;
		
		case 4:
			sVar0 = "proposition_to_exit_male";
			break;
		
		case 5:
			sVar0 = "prop_to_sit_alt_prostitute";
			break;
		
		case 6:
			sVar0 = "prop_to_sit_male";
			break;
		
		case 7:
			sVar0 = "prop_to_sit_prostitute";
			break;
		
		case 8:
			sVar0 = "proposition_to_sex_p1_prostitute";
			break;
		
		case 9:
			sVar0 = "proposition_to_sex_p2_prostitute";
			break;
		
		case 10:
			sVar0 = "sex_loop_prostitute";
			break;
		
		case 11:
			sVar0 = "sex_to_proposition_p1_prostitute";
			break;
		
		case 12:
			sVar0 = "sex_to_proposition_p2_prostitute";
			break;
		
		case 13:
			sVar0 = "proposition_to_sex_p1_male";
			break;
		
		case 14:
			sVar0 = "proposition_to_sex_p2_male";
			break;
		
		case 15:
			sVar0 = "sex_loop_male";
			break;
		
		case 16:
			sVar0 = "sex_to_proposition_p1_male";
			break;
		
		case 17:
			sVar0 = "sex_to_proposition_p2_male";
			break;
		
		case 18:
			sVar0 = "proposition_to_BJ_p1_prostitute";
			break;
		
		case 19:
			sVar0 = "proposition_to_BJ_p2_prostitute";
			break;
		
		case 20:
			sVar0 = "BJ_loop_prostitute";
			break;
		
		case 21:
			sVar0 = "BJ_to_proposition_p1_prostitute";
			break;
		
		case 22:
			sVar0 = "BJ_to_proposition_p2_prostitute";
			break;
		
		case 23:
			sVar0 = "proposition_to_BJ_p1_male";
			break;
		
		case 24:
			sVar0 = "proposition_to_BJ_p2_male";
			break;
		
		case 25:
			sVar0 = "BJ_loop_male";
			break;
		
		case 26:
			sVar0 = "BJ_to_proposition_p1_male";
			break;
		
		case 27:
			sVar0 = "BJ_to_proposition_p2_male";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

char* func_94(int iParam0)//Position - 0x2C28
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "low_car_sit_to_prop_player";
			break;
		
		case 1:
			sVar0 = "low_car_sit_to_prop_female";
			break;
		
		case 2:
			sVar0 = "low_car_prop_loop_player";
			break;
		
		case 3:
			sVar0 = "low_car_prop_loop_female";
			break;
		
		case 4:
			sVar0 = "low_car_prop_to_leave_player";
			break;
		
		case 5:
			sVar0 = "low_car_prop_to_sit_alt_female";
			break;
		
		case 6:
			sVar0 = "low_car_prop_to_sit_player";
			break;
		
		case 7:
			sVar0 = "low_car_prop_to_sit_female";
			break;
		
		case 8:
			sVar0 = "low_car_prop_to_sex_p1_female";
			break;
		
		case 9:
			sVar0 = "low_car_prop_to_sex_p2_female";
			break;
		
		case 10:
			sVar0 = "low_car_sex_loop_female";
			break;
		
		case 11:
			sVar0 = "low_car_sex_to_prop_p1_female";
			break;
		
		case 12:
			sVar0 = "low_car_sex_to_prop_p2_female";
			break;
		
		case 13:
			sVar0 = "low_car_prop_to_sex_p1_player";
			break;
		
		case 14:
			sVar0 = "low_car_prop_to_sex_p2_player";
			break;
		
		case 15:
			sVar0 = "low_car_sex_loop_player";
			break;
		
		case 16:
			sVar0 = "low_car_sex_to_prop_p1_player";
			break;
		
		case 17:
			sVar0 = "low_car_sex_to_prop_p2_player";
			break;
		
		case 18:
			sVar0 = "low_car_prop_to_bj_p1_female";
			break;
		
		case 19:
			sVar0 = "low_car_prop_to_bj_p2_female";
			break;
		
		case 20:
			sVar0 = "low_car_bj_loop_female";
			break;
		
		case 21:
			sVar0 = "low_car_bj_to_prop_p1_female";
			break;
		
		case 22:
			sVar0 = "low_car_bj_to_prop_p2_female";
			break;
		
		case 23:
			sVar0 = "low_car_prop_to_bj_p1_player";
			break;
		
		case 24:
			sVar0 = "low_car_prop_to_bj_p2_player";
			break;
		
		case 25:
			sVar0 = "low_car_bj_loop_player";
			break;
		
		case 26:
			sVar0 = "low_car_bj_to_prop_p1_player";
			break;
		
		case 27:
			sVar0 = "low_car_bj_to_prop_p2_player";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

int func_95(int iParam0)//Position - 0x2DE6
{
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		switch (unk_0x83F8A448F340AE31(iParam0))
		{
			case -2066252141:
			case -38413156:
			case -782720499:
			case 542797648:
			case 68566729:
			case -1887744178:
			case -463340997:
			case 2033852426:
			case -1820894825:
			case 1697345049:
			case -635697407:
			case -1453479140:
			case 1837596901:
			case 2013836096:
			case 2071837743:
			case 2130662788:
			case -1546132012:
			case 1192783831:
			case -317944664:
			case 570040040:
			case 1212243433:
			case -193022774:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_96(bool bParam0, bool bParam1)//Position - 0x2E8F
{
	bool bVar0;
	
	bVar0 = false;
	if (bParam0)
	{
		bVar0 = unk_0x3D875C2512206692(0) == 4;
	}
	if (bParam1)
	{
		if (!bVar0)
		{
			bVar0 = unk_0x3D875C2512206692(1) == 4;
		}
	}
	return bVar0;
}

var func_97(int iParam0, bool bParam1, int iParam2)//Position - 0x2EBE
{
	int iVar0;
	
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		iVar0 = unk_0x9FE9D386222EEE47(iParam0, 1);
		if (unk_0xE59B7F5A03335350(iVar0, 0))
		{
			if (func_95(iVar0))
			{
				if ((!func_96(0, 1) || iParam2) && !bParam1)
				{
					return func_101();
				}
				else
				{
					return func_100();
				}
			}
		}
	}
	if ((!func_96(0, 1) || iParam2) && !bParam1)
	{
		return func_99();
	}
	return func_98();
}

char* func_98()//Position - 0x2F40
{
	return "mini@prostitutes@sexnorm_veh_first_person";
}

char* func_99()//Position - 0x2F4C
{
	return "mini@prostitutes@sexnorm_veh";
}

char* func_100()//Position - 0x2F58
{
	return "mini@prostitutes@sexlow_veh_first_person";
}

char* func_101()//Position - 0x2F64
{
	return "mini@prostitutes@sexlow_veh";
}

int func_102()//Position - 0x2F70
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar4;
	vector3 vVar5;
	var uVar6;
	vector3 vVar7;
	float fVar8;
	int iVar9;
	
	fVar4 = 25f;
	func_62(&vVar5, &uVar6, 0);
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			iVar2 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
		}
		vVar3 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
		if (unk_0x7889AC6F93E89660(vVar3, &vVar7, 1077936128, 0))
		{
			fVar8 = SYSTEM::VDIST(vVar3, vVar7);
			if (fVar8 <= 10f)
			{
				return 0;
			}
		}
		if (SYSTEM::VDIST(vVar3, vLocal_287) < 20f || SYSTEM::VDIST(vVar3, vVar5) < 20f)
		{
			return 0;
		}
		if (unk_0x89E5F484A37AE468(vVar3 - Vector(20f, 20f, 20f), vVar3 + Vector(20f, 20f, 20f)))
		{
			return 0;
		}
		unk_0x50AE3E919DC9BC67(vVar3, fVar4, 1, 1, &iVar0, 0, 0, -1);
		if (!iVar0 == 0)
		{
			if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
			{
				if (unk_0x4833C1F1F1364989(iVar0, unk_0xBC25C936A095B5BA(), 17))
				{
					return 0;
				}
			}
		}
		else
		{
			iVar1 = unk_0x67FCE1EB536A0735(vVar3, fVar4, 0, -1);
			if (!iVar1 == 0)
			{
				if (!iVar1 == iVar2)
				{
					if (unk_0xE59B7F5A03335350(iVar1, 0))
					{
						iVar0 = unk_0x3187EF5798B5D209(iVar1, -1, 0);
						if (!iVar0 == 0)
						{
							return 0;
						}
					}
				}
			}
		}
		iVar9 = unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA());
		if (!iVar9 == 0)
		{
			return 0;
		}
	}
	return 1;
}

void func_103(char* sParam0)//Position - 0x30E2
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 1, true, -1);
}

int func_104(char* sParam0)//Position - 0x30F8
{
	unk_0xF07D20149ECBC61E(sParam0);
	return unk_0xA66DBDA0A072514A(0);
}

void func_105()//Position - 0x310B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iLocal_73 < 12 && iLocal_73 >= 2)
	{
		if (func_200(3000))
		{
			unk_0x7A41D32A383895D8(1000);
			iLocal_73 = 12;
		}
	}
	if (!bLocal_69 && iLocal_73 >= 5)
	{
		iVar0 = unk_0x39C128D398B3CB04();
		if (unk_0xE59B7F5A03335350(iVar0, 0) && !unk_0x1D403DFADBC2DE3C(iVar0, 0))
		{
			if (unk_0x6F79ECA8C83E4357(iVar0) == joaat("blimp2"))
			{
				bLocal_69 = false;
			}
			else if (unk_0x10A01B0B02B273EF(unk_0x39C128D398B3CB04()) && uLocal_74[0] == 5)
			{
				bLocal_69 = func_197(&uLocal_68, -865f, 516.3f, 90f, 1, 15f);
			}
			else if (func_196(unk_0x39C128D398B3CB04()))
			{
				bLocal_69 = func_197(&uLocal_68, vLocal_292, 1, fLocal_294);
			}
			else
			{
				bLocal_69 = func_197(&uLocal_68, vLocal_287, 1, fLocal_294);
			}
		}
	}
	if (iLocal_73 > 0 && iLocal_73 < 13)
	{
		unk_0xDE7B9CB38D019BF0();
	}
	switch (iLocal_73)
	{
		case 0:
			unk_0x7456702622C62EA0(1);
			unk_0xEB233A3B7635D2AC();
			func_83();
			unk_0x284F2ACE6839D3C0("TIME_LAPSE", false, -1);
			func_30(56, 1, 0);
			if (!func_253(uLocal_300, 131072))
			{
				func_27(&uLocal_300, 131072);
			}
			if (!func_253(uLocal_300, 256))
			{
				func_195();
				func_27(&uLocal_300, 256);
			}
			if (!func_253(uLocal_300, 32768))
			{
				unk_0x522053D86D6E1C7A(func_194());
				func_27(&uLocal_300, 32768);
			}
			if (!func_253(uLocal_300, 256))
			{
				unk_0x522053D86D6E1C7A(func_193());
				func_27(&uLocal_300, 256);
			}
			if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
			{
				iLocal_307 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
				func_192(unk_0xBC25C936A095B5BA(), iLocal_307);
				iLocal_73 = 1;
			}
			else
			{
				func_56();
				func_190(unk_0xBC25C936A095B5BA(), vLocal_285);
				func_190(iLocal_271[0], vLocal_286);
				iLocal_73 = 2;
			}
			func_188();
			break;
		
		case 1:
			if (!unk_0x1D403DFADBC2DE3C(iLocal_307, 0))
			{
				if (SYSTEM::VDIST(unk_0x541C2AEF053615BC(iLocal_307, true), vLocal_287) < 2f)
				{
					func_56();
					func_190(unk_0xBC25C936A095B5BA(), vLocal_285);
					func_190(iLocal_271[0], vLocal_286);
					unk_0x13D5880CBA449AA9();
					iLocal_73 = 2;
				}
				else if (unk_0x105601648511CC64() >= 10000)
				{
					iLocal_73 = 13;
				}
			}
			break;
		
		case 2:
			if (!unk_0xF448AA2D7E08A675(iLocal_279[0]))
			{
				unk_0x348665177DBFB93B(iLocal_279[0], true);
				unk_0x062C9995BFD27B2A(true, false, 3000, 1, 0, 0);
				if (!unk_0x1D403DFADBC2DE3C(iLocal_307, 0))
				{
					if (unk_0x6F79ECA8C83E4357(iLocal_307) == joaat("blimp2"))
					{
						unk_0xDC078F87049ECECE(iLocal_307, false, 0);
					}
				}
				func_8(&iLocal_252);
				iLocal_73 = 3;
			}
			break;
		
		case 3:
			if (func_187(&iLocal_252) > 1f)
			{
				unk_0xAE099C1ADC89C331(iLocal_279[1], iLocal_279[0], 6000, 1, 1);
				func_186(&Local_280, 1, 0, 2000, 1, 1, 0, 1);
				iVar1 = unk_0x6E06C0DB9B43570D();
				iLocal_297 = iVar1 + 8;
				if (iLocal_297 > 23)
				{
					iLocal_297 = (iLocal_297 - 24);
				}
				Local_280.f_7 = iVar1;
				Local_280.f_8 = iLocal_297;
				func_2(&iLocal_252);
				iLocal_73 = 4;
			}
			break;
		
		case 4:
			if (!unk_0x16BE1286447174A9(iLocal_279[1]) && unk_0xF448AA2D7E08A675(iLocal_279[1]))
			{
				if (!func_253(uLocal_298, 512))
				{
					if (unk_0x724D816EA203A79E(iLocal_307) && !unk_0x1D403DFADBC2DE3C(iLocal_307, 0))
					{
						unk_0x127F627F30266DD9(iLocal_307, 1);
					}
					func_183(unk_0xBC25C936A095B5BA(), func_185());
					unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), func_182());
					func_164();
					func_27(&uLocal_298, 512);
				}
				else if (!func_253(uLocal_298, 2048))
				{
					if (unk_0x1D403DFADBC2DE3C(iLocal_271[0], 0))
					{
					}
					if (!func_163() && !unk_0x9986AD62CA3DE747(iLocal_271[0]))
					{
						func_164();
						if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
						{
							unk_0xAFD2CBD312D69CFA(unk_0xBC25C936A095B5BA());
							unk_0x53D8178763EDCE60(unk_0xBC25C936A095B5BA(), "SEX_CLIMAX", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
						}
						func_27(&uLocal_298, 2048);
						func_8(&iLocal_252);
						sLocal_273 = func_162();
						iLocal_73 = 5;
					}
				}
			}
			break;
		
		case 5:
			if (func_187(&iLocal_252) > 1f)
			{
				if (func_137(iLocal_297, 0, sLocal_273, "", &Local_280, (func_187(&iLocal_252) * 0.2f), 0))
				{
					if (!func_163())
					{
						if (unk_0x724D816EA203A79E(iLocal_307))
						{
							if (unk_0x6F79ECA8C83E4357(iLocal_307) != joaat("blimp2"))
							{
								unk_0x6C5F5B5F6894CCE3(vLocal_286, 20f, 1, 0, 0, false);
							}
						}
						else
						{
							unk_0x6C5F5B5F6894CCE3(vLocal_286, 20f, 1, 0, 0, false);
						}
						if (unk_0x724D816EA203A79E(iLocal_271[0]))
						{
							unk_0xDC078F87049ECECE(iLocal_271[0], false, 0);
						}
						unk_0x12B5924811F58165(unk_0xBC25C936A095B5BA(), 0);
						func_8(&iLocal_252);
						iLocal_73 = 6;
					}
				}
			}
			break;
		
		case 6:
			unk_0x8E25082A46F87892(unk_0xBC25C936A095B5BA(), joaat("weapon_unarmed"), true);
			if (func_187(&iLocal_252) > 1.5f)
			{
				if (bLocal_69)
				{
					func_135(&uLocal_68);
				}
				func_8(&iLocal_252);
				iLocal_73 = 7;
			}
			break;
		
		case 7:
			if (!unk_0xF448AA2D7E08A675(iLocal_279[2]))
			{
				unk_0x7FF4F08CAB3344B1();
				unk_0xC325E1B6F956BE1A(1);
				unk_0x66F05C65F48B55AF(1);
				unk_0xAE099C1ADC89C331(iLocal_279[2], iLocal_279[1], 6000, 1, 1);
				func_8(&iLocal_252);
				iLocal_73 = 8;
			}
			break;
		
		case 8:
			if (!func_253(uLocal_300, 262144))
			{
				if (func_187(&iLocal_252) >= 1.25f)
				{
					func_134();
				}
			}
			if (func_187(&iLocal_252) > 6f)
			{
				unk_0x348665177DBFB93B(iLocal_279[3], true);
				if (!unk_0x1D403DFADBC2DE3C(iLocal_307, 0))
				{
					if (unk_0x6F79ECA8C83E4357(iLocal_307) == joaat("blimp2"))
					{
						unk_0xDC078F87049ECECE(iLocal_307, true, 0);
					}
					unk_0x77815D3407C6700D(iLocal_307, true, 1);
					unk_0xE6E403909F4BF47F(iLocal_307, 1000f);
					unk_0xD3F329A16C0E5B2B(iLocal_307, 1000f);
					unk_0x3F91283C7E2D2183(iLocal_307);
				}
				func_8(&iLocal_252);
				iLocal_73 = 10;
			}
			break;
		
		case 10:
			if (func_187(&iLocal_252) > 2f)
			{
				unk_0x9CB4DD3D88846081(0, 0, 3, 0);
				iLocal_73 = 13;
			}
			break;
		
		case 12:
			if (unk_0x17FAADF9916EF741() && !unk_0x422F9EDE839E6ABB())
			{
				if (!func_253(uLocal_300, 262144))
				{
					unk_0x778570E838B3BEA6(unk_0xB5CEFD608600A09F(), vLocal_289, fLocal_293, false, true, 1);
					func_134();
				}
				if (!unk_0x1D403DFADBC2DE3C(iLocal_307, 0))
				{
					if (unk_0x6F79ECA8C83E4357(iLocal_307) == joaat("blimp2"))
					{
						unk_0xDC078F87049ECECE(iLocal_307, true, 0);
					}
				}
				unk_0x8E25082A46F87892(unk_0xBC25C936A095B5BA(), joaat("weapon_unarmed"), true);
				if (!unk_0x1D403DFADBC2DE3C(iLocal_307, 0))
				{
					unk_0x77815D3407C6700D(iLocal_307, true, 1);
					unk_0xE6E403909F4BF47F(iLocal_307, 1000f);
					unk_0xD3F329A16C0E5B2B(iLocal_307, 1000f);
					unk_0x3F91283C7E2D2183(iLocal_307);
				}
				func_8(&iLocal_252);
				iLocal_73 = 13;
			}
			break;
		
		case 13:
			if (!unk_0x422F9EDE839E6ABB() && func_187(&iLocal_252) >= 1f)
			{
				func_13(1, 1, 0);
				unk_0x65E471E4A2D56226(unk_0xBC25C936A095B5BA(), unk_0xDF3442EA6BB67B98(unk_0xBC25C936A095B5BA()), 0);
				unk_0x4AFEF28BBD81AC79(unk_0xB5CEFD608600A09F(), 30, 1);
				if (unk_0xCE0C2E1494516734(unk_0xBC25C936A095B5BA(), func_80(0)))
				{
					func_133();
				}
				unk_0x4806A94C8ED574C3(vLocal_287 - Vector(3f, 3f, 3f), vLocal_287 + Vector(3f, 3f, 3f), 15f, 1);
				if (!unk_0x1D403DFADBC2DE3C(iLocal_307, 0))
				{
					unk_0x77815D3407C6700D(iLocal_307, true, 1);
					if (unk_0x6F79ECA8C83E4357(iLocal_307) != joaat("blimp2"))
					{
						unk_0x641B19E156645A92(iLocal_307, vLocal_287, 1, false, 0, 1);
						unk_0x019CE76D5286C95C(iLocal_307, fLocal_294);
						if (unk_0x10A01B0B02B273EF(iLocal_307) && uLocal_74[0] == 5)
						{
							unk_0x641B19E156645A92(iLocal_307, -865f, 516.3f, 90f, 1, false, 0, 1);
							unk_0x019CE76D5286C95C(iLocal_307, 15f);
						}
						else if (func_196(iLocal_307))
						{
							unk_0x641B19E156645A92(iLocal_307, vLocal_292, 1, false, 0, 1);
							unk_0x019CE76D5286C95C(iLocal_307, fLocal_295);
						}
						unk_0xF0A40F19AAB79E88(iLocal_307, 1084227584);
					}
				}
				if (!unk_0x17FAADF9916EF741())
				{
					func_186(&Local_280, 0, 0, 2000, 1, 0, 0, 1);
				}
				else
				{
					unk_0x24205193729DB585(8, 0, 0);
					func_131(SYSTEM::TO_FLOAT(8));
					unk_0x829FA4611BD56B44(2000);
					unk_0xF3F01A78937DC905(0f);
					unk_0x2B9AEC08E469E384(0f, 1065353216);
					func_186(&Local_280, 0, 0, 2000, 1, 1, 0, 1);
				}
				if (unk_0x724D816EA203A79E(iLocal_271[0]))
				{
					unk_0xF845620A03C7425B(&(iLocal_271[0]));
				}
				if (!func_130(uLocal_74[0], -1))
				{
					if (uLocal_74[0] == 5)
					{
						func_65("SCLUB_PHON_HELP_ALT", uLocal_74[0], 0);
					}
					else
					{
						func_65("SCLUB_PHON_HELP", uLocal_74[0], 0);
					}
					func_116(uLocal_74[0], 1, -1);
					SYSTEM::WAIT(4000);
				}
				func_114(uLocal_74[0]);
				iVar2 = func_113(uLocal_74[0]);
				if (iVar2 <= 2)
				{
					iVar3 = func_112(uLocal_74[0]);
					iVar4 = func_111(iVar2);
					func_106(-384575792, iVar3, iVar4, 3, func_110(), func_109(uLocal_74[0]), 60000, 10000, -1, 0, -1, 0, 1);
				}
				func_37();
			}
			break;
	}
}

int func_106(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)//Position - 0x39CA
{
	struct<14> Var0;
	
	if (func_51(0))
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam7 < 0)
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
	if (iParam5 < 3)
	{
		if (unk_0xFA30DFD0084E92FE(iParam4, iParam5))
		{
			return 0;
		}
	}
	if (iParam4 < 1 || iParam4 > 7)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 83 || iParam2 == 83)
	{
		return 0;
	}
	if (Global_19B04.f_1DEB.f_2FC < 8)
	{
		Var0 = iParam0;
		Var0.f_3 = func_108(iParam3);
		Var0.f_4 = (unk_0x105601648511CC64() + iParam6);
		Var0.f_5 = iParam7;
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam4;
		Var0.f_6 = iParam5;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		Var0.f_A = iParam1;
		Var0.f_B = iParam2;
		Var0.f_D = iParam12;
		unk_0x7CB6FD92BE491AD9(&(Var0.f_1), 0);
		Global_19B04.f_1DEB.f_28B[Global_19B04.f_1DEB.f_2FC /*14*/] = { Var0 };
		Global_19B04.f_1DEB.f_2FC++;
		func_107(0);
		func_107(1);
		func_107(2);
		return 1;
	}
	return 0;
}

void func_107(int iParam0)//Position - 0x3B08
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_78(iParam0))
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

int func_108(int iParam0)//Position - 0x3BCC
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

int func_109(int iParam0)//Position - 0x3C36
{
	switch (iParam0)
	{
		case 0:
			return 104;
			break;
		
		case 1:
			return 105;
			break;
		
		case 2:
			return 106;
			break;
		
		case 3:
			return 107;
			break;
		
		case 4:
			return 108;
			break;
		
		case 5:
			return 109;
			break;
		
		case 6:
			return 110;
			break;
		
		case 7:
			return 111;
			break;
		
		case 8:
			return 112;
			break;
		
		case 9:
			return 93;
			break;
	}
	return 145;
}

int func_110()//Position - 0x3CD3
{
	func_76();
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

int func_111(int iParam0)//Position - 0x3D19
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 8;
			break;
		
		case 2:
			return 9;
			break;
	}
	return -1;
}

int func_112(int iParam0)//Position - 0x3D53
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 4:
			return 2;
			break;
		
		case 5:
			return 3;
			break;
		
		case 8:
			return 4;
			break;
		
		case 9:
			return 5;
			break;
	}
	return -1;
}

int func_113(int iParam0)//Position - 0x3DB1
{
	return Global_19B04.f_F3[func_73() /*53*/].f_2[iParam0 /*5*/].f_2;
}

void func_114(int iParam0)//Position - 0x3DCD
{
	if (func_113(iParam0) < 0)
	{
		func_115(iParam0, 0);
	}
	Global_19B04.f_F3[func_73() /*53*/].f_2[iParam0 /*5*/].f_2++;
}

void func_115(int iParam0, int iParam1)//Position - 0x3E10
{
	Global_19B04.f_F3[func_73() /*53*/].f_2[iParam0 /*5*/].f_2 = iParam1;
}

void func_116(int iParam0, bool bParam1, int iParam2)//Position - 0x3E2E
{
	bool bVar0;
	int iVar1;
	
	if (iParam2 < 0)
	{
		iParam2 = func_73();
	}
	if (func_129(iParam2) == 4)
	{
	}
	bVar0 = Global_19B04.f_F3[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4;
	if (bVar0)
	{
		if (unk_0x7AF0088ABFA713B6())
		{
			if (!func_128(func_109(iParam0), 3))
			{
				bVar0 = false;
			}
		}
		else if (!func_128(func_109(iParam0), 4))
		{
			bVar0 = false;
		}
	}
	Global_19B04.f_F3[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4 = bParam1;
	if (bParam1)
	{
		if (!bVar0)
		{
			func_127(iParam0, 0);
			func_124(func_109(iParam0), func_129(iParam2), 1);
			iVar1 = unk_0x491B2241281A03B7(1800000, 2100000);
			switch (iParam2)
			{
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
					unk_0xF0059F27F7BB6680(&(Global_200000[func_123() /*12171*/].f_1E08.f_4F8), iParam0);
					func_120(15, 0);
					break;
			}
			func_119(iVar1);
			func_118(iParam0, iVar1);
			Global_19716.f_F[iParam0] = unk_0x105601648511CC64();
		}
	}
	else if (bVar0)
	{
		func_117(func_109(iParam0), func_129(iParam2));
	}
}

void func_117(int iParam0, int iParam1)//Position - 0x3F52
{
	if (Global_75[iParam0 /*10*/].f_8 != 144)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			Global_19B04.f_6D75[iParam0 /*29*/].f_C[iParam1] = 0;
			Global_19B04.f_6D75[iParam0 /*29*/].f_18[iParam1] = 0;
		}
	}
}

void func_118(int iParam0, int iParam1)//Position - 0x3F95
{
	if (iParam1 > -1)
	{
		Global_19716.f_4[iParam0] = (unk_0x105601648511CC64() + iParam1);
	}
	else
	{
		Global_19716.f_4[iParam0] = (unk_0x105601648511CC64() + unk_0x491B2241281A03B7(1200000, 2100000));
	}
}

void func_119(int iParam0)//Position - 0x3FD2
{
	if (iParam0 != -1)
	{
		Global_19716.f_3 = (unk_0x105601648511CC64() + iParam0);
	}
	else
	{
		Global_19716.f_3 = (unk_0x105601648511CC64() + unk_0x491B2241281A03B7(21600000, 25200000));
	}
}

void func_120(int iParam0, int iParam1)//Position - 0x400A
{
	int iVar0;
	
	if (func_122(iParam0, iParam1))
	{
		iVar0 = func_121();
		Global_258004[iVar0] = iParam0;
	}
}

int func_121()//Position - 0x402D
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_258004[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_122(int iParam0, var uParam1)//Position - 0x4062
{
	if (Global_14084A)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_140856) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_123()//Position - 0x40E8
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_124(int iParam0, int iParam1, bool bParam2)//Position - 0x40F5
{
	Global_BE9 = iParam0;
	if (Global_75[iParam0 /*10*/].f_8 != 144)
	{
		func_126();
		if (iParam1 == 4)
		{
			Global_19B04.f_6D75[iParam0 /*29*/].f_C[0] = 1;
			Global_19B04.f_6D75[iParam0 /*29*/].f_C[1] = 1;
			Global_19B04.f_6D75[iParam0 /*29*/].f_C[2] = 1;
			Global_19B04.f_6D75[iParam0 /*29*/].f_18[0] = 1;
			Global_19B04.f_6D75[iParam0 /*29*/].f_18[1] = 1;
			Global_19B04.f_6D75[iParam0 /*29*/].f_18[2] = 1;
		}
		else
		{
			if (Global_19B04.f_6D75[iParam0 /*29*/].f_C[iParam1] == 1 && Global_19B04.f_6D75[iParam0 /*29*/].f_18[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_19B04.f_6D75[iParam0 /*29*/].f_C[iParam1] = 1;
			Global_19B04.f_6D75[iParam0 /*29*/].f_18[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_11542)
			{
				if (iParam1 != 4)
				{
					if (Global_389D != iParam1)
					{
						Global_BCE[iParam1 /*4*/] = { Global_19B04.f_6D75[iParam0 /*29*/].f_3 };
						Global_BDF[iParam1] = 1;
						Global_BE4[iParam1] = iParam0;
					}
					else if (iParam0 == Global_389D)
					{
					}
					else
					{
						Global_B9D[1 /*6*/] = { Global_19B04.f_6D75[iParam0 /*29*/].f_3 };
						Global_B9D[1 /*6*/].f_5 = iParam1;
						func_125();
					}
				}
				else
				{
					Global_B9D[1 /*6*/] = { Global_19B04.f_6D75[iParam0 /*29*/].f_3 };
					Global_B9D[1 /*6*/].f_5 = iParam1;
					func_125();
				}
			}
			else
			{
				Global_B9D[1 /*6*/] = { Global_19B04.f_6D75[iParam0 /*29*/].f_3 };
				Global_B9D[1 /*6*/].f_5 = iParam1;
				func_125();
			}
		}
	}
}

void func_125()//Position - 0x429F
{
	char cVar0[64];
	char cVar1[64];
	char* sVar2;
	
	StringCopy(&cVar0, unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[Global_BE9 /*29*/].f_7)), 64);
	if (Global_BFC == 0)
	{
		unk_0x2E94302CFF011F2E("");
		StringCopy(&cVar1, unk_0xFCB4C1AC11347344(&(Global_B9D[1 /*6*/])), 64);
		sVar2 = unk_0xFCB4C1AC11347344("CELL_253");
		unk_0x7BB0762D8C75A3C7(&cVar0, &cVar0, 0, 3, sVar2, &cVar1);
	}
	else
	{
		unk_0x2E94302CFF011F2E("CELL_255");
		unk_0xC9C304D0AABE1335(&(Global_B9D[1 /*6*/]));
		unk_0x7BB0762D8C75A3C7(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0x7CB6FD92BE491AD9(&Global_93B, 0);
}

void func_126()//Position - 0x4320
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
		Global_389D = func_75();
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

void func_127(int iParam0, int iParam1)//Position - 0x43C2
{
	Global_19B04.f_F3[func_73() /*53*/].f_2[iParam0 /*5*/].f_1 = iParam1;
}

int func_128(int iParam0, int iParam1)//Position - 0x43E0
{
	if (Global_19B04.f_6D75[iParam0 /*29*/].f_C[iParam1] == 1)
	{
		return 1;
	}
	return 0;
}

int func_129(int iParam0)//Position - 0x4405
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 1:
			return 1;
			break;
		
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return 3;
			break;
	}
	return 4;
}

bool func_130(int iParam0, int iParam1)//Position - 0x4461
{
	if (iParam1 < 0)
	{
		iParam1 = func_73();
	}
	return Global_19B04.f_F3[iParam1 /*53*/].f_2[iParam0 /*5*/].f_4;
}

void func_131(float fParam0)//Position - 0x4487
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_10(&(Global_19B04.f_469A.f_AF[iVar0 /*19*/].f_5)))
		{
			func_132(&(Global_19B04.f_469A.f_AF[iVar0 /*19*/].f_5), (fParam0 * 60f));
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_10(&(Global_19B04.f_469A.f_16A[iVar1 /*3*/])))
		{
			func_132(&(Global_19B04.f_469A.f_16A[iVar1 /*3*/]), (fParam0 * 60f));
		}
		iVar1++;
	}
	unk_0x8FC2F3CD3A70C300();
}

void func_132(int iParam0, float fParam1)//Position - 0x4518
{
	if (func_10(iParam0))
	{
		func_9(iParam0, (func_4(iParam0) + fParam1));
	}
}

void func_133()//Position - 0x453B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 < 1)
		{
			Global_15DDA[iVar0] = Global_15DDA[iVar0 + 1];
		}
		else
		{
			Global_15DDA[iVar0] = unk_0x105601648511CC64();
		}
		iVar0++;
	}
}

void func_134()//Position - 0x457C
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xF9E082857622D91E(sLocal_272))
	{
	}
	else
	{
		iVar0 = unk_0x491B2241281A03B7(0, 50000);
		unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
		unk_0xC5A6DFE2B8987B17(&iVar1);
		unk_0x346129B364057FF6(0, vLocal_289, 1f, -1, 0.25f, 0, fLocal_293);
		if (iVar0 < 15000)
		{
			unk_0xE896C0AD02364F2A(0, sLocal_272, "fidget_rub_hands", 1.5f, -1f, -1, 8320, 0, 0, 0, 0);
		}
		else if (iVar0 >= 15000 && iVar0 < 35000)
		{
			unk_0xE896C0AD02364F2A(0, sLocal_272, "fidget_rub_chin", 1.5f, -1f, -1, 8320, 0, 0, 0, 0);
		}
		else
		{
			unk_0xE896C0AD02364F2A(0, sLocal_272, "fidget_arm_swing", 1.5f, -1f, -1, 8320, 0, 0, 0, 0);
		}
		unk_0x535008C596714F9E(iVar1);
		unk_0xA8E6405305C0D7DF(unk_0xBC25C936A095B5BA(), iVar1);
		unk_0x02DAF06EA4F08219(&iVar1);
		func_27(&uLocal_300, 262144);
	}
}

void func_135(var uParam0)//Position - 0x4652
{
	int iVar0;
	
	iVar0 = *uParam0;
	if (unk_0x724D816EA203A79E(iVar0))
	{
		if (!func_136(iVar0))
		{
			unk_0xD434A01DEA38A939(iVar0, true, 0);
			unk_0xDC078F87049ECECE(iVar0, true, 0);
			unk_0x346478B12F69D4E3(iVar0, false);
		}
	}
}

int func_136(int iParam0)//Position - 0x4689
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

int func_137(int iParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, float fParam5, int iParam6)//Position - 0x46CC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	
	switch (uParam4->f_3)
	{
		case 0:
			*uParam4 = func_161();
			iVar4 = func_161();
			func_160(&iVar4, iParam0);
			func_159(&iVar4, iParam1);
			func_158(&iVar4, 0);
			if (func_156(*uParam4, iVar4))
			{
				func_151(&iVar4, 0, 0, 0, 1, 0, 0);
			}
			func_148(*uParam4, iVar4, &iVar0, &iVar1, &iVar2, &uVar5, &uVar6, &uVar7);
			uParam4->f_B = ((iVar0 + iVar1 * 60) + (iVar2 + iParam6) * 3600);
			func_131((SYSTEM::TO_FLOAT(uParam4->f_B) / 3600f));
			unk_0x6181F5E08459A9AA(0.6f);
			unk_0x66F05C65F48B55AF(0);
			unk_0xC325E1B6F956BE1A(0);
			func_147();
			uParam4->f_A = unk_0x2F079D1FC5F6CB99();
			unk_0xC4BA30B532FE260F(uParam4->f_A, "TIME_LAPSE_MASTER", 0, true);
			unk_0xD6423910AAD8A379("TOD_SHIFT_SCENE");
			func_146();
			uParam4->f_3++;
			break;
		
		case 1:
		case 2:
			if (fParam5 >= 0.5f)
			{
				if (uParam4->f_3 == 1)
				{
					if (unk_0x56BEECB328B6D29D(sParam2) != 0)
					{
						unk_0x34DAC25A04E24704(sParam2, 1f);
					}
					if (unk_0x56BEECB328B6D29D(sParam3) != 0)
					{
						unk_0x5D4CFAB81AB232CA();
						unk_0xCF6DC60B0555118D(sParam3, 0);
					}
					uParam4->f_3 = 2;
				}
			}
			if (fParam5 >= 0.99f || fParam5 == -1f)
			{
				iVar4 = *uParam4;
				func_151(&iVar4, uParam4->f_B, 0, 0, 0, 0, 0);
				unk_0xC2BB4D344E887586(func_145(iVar4), func_144(iVar4), func_143(iVar4));
				unk_0x38FF8CB6377D36F6(uParam4->f_A);
				unk_0xDA70546257A3ED8B("TIME_LAPSE");
				return 1;
			}
			fVar10 = fParam5;
			fVar8 = 0.1f;
			fVar9 = 0.9f;
			fVar11 = func_142(((fVar10 - fVar8) / (fVar9 - fVar8)), 0f, 1f);
			iVar3 = SYSTEM::ROUND((IntToFloat(uParam4->f_B) * fVar11));
			iVar4 = *uParam4;
			func_151(&iVar4, iVar3, 0, 0, 0, 0, 0);
			unk_0xC2BB4D344E887586(func_145(iVar4), func_144(iVar4), func_143(iVar4));
			if (func_141(iVar4) != unk_0xBE14F159908E4EE5())
			{
				unk_0x9AB7C330ACFB4394(func_141(iVar4), func_140(iVar4), func_138(iVar4));
			}
			func_242();
			unk_0x4C6F2776AE2C21F9(6);
			break;
	}
	return 0;
}

int func_138(int iParam0)//Position - 0x48CA
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_139(unk_0xFA30DFD0084E92FE(iParam0, 31), -1, 1)) + 2011;
}

int func_139(bool bParam0, int iParam1, int iParam2)//Position - 0x48EF
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_140(int iParam0)//Position - 0x4906
{
	return iParam0 & 15;
}

int func_141(int iParam0)//Position - 0x4913
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

float func_142(float fParam0, float fParam1, float fParam2)//Position - 0x4925
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_143(int iParam0)//Position - 0x494C
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_144(int iParam0)//Position - 0x495F
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_145(int iParam0)//Position - 0x4972
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

void func_146()//Position - 0x4985
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		unk_0x8C563C8EA840EA02(Global_19B04.f_3720[iVar0 /*104*/].f_10);
		iVar0++;
	}
}

int func_147()//Position - 0x49B1
{
	int iVar0;
	
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		return 0;
	}
	if (!unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()))
	{
		return 0;
	}
	iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
	if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
	{
		return 0;
	}
	unk_0x004811915F93A42D(iVar0, "OFF");
	return 1;
}

void func_148(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x49FF
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_156(iParam0, iParam1))
	{
		iVar0 = func_140(iParam1);
		iVar1 = func_138(iParam0);
		iVar2 = (func_138(iParam0) - func_138(iParam1));
		iVar3 = (func_140(iParam0) - func_140(iParam1));
		iVar4 = (func_141(iParam0) - func_141(iParam1));
		iVar5 = (func_145(iParam0) - func_145(iParam1));
		iVar6 = (func_144(iParam0) - func_144(iParam1));
		iVar7 = (func_143(iParam0) - func_143(iParam1));
	}
	else
	{
		iVar0 = func_140(iParam0);
		iVar1 = func_138(iParam1);
		iVar2 = (func_138(iParam1) - func_138(iParam0));
		iVar3 = (func_140(iParam1) - func_140(iParam0));
		iVar4 = (func_141(iParam1) - func_141(iParam0));
		iVar5 = (func_145(iParam1) - func_145(iParam0));
		iVar6 = (func_144(iParam1) - func_144(iParam0));
		iVar7 = (func_143(iParam1) - func_143(iParam0));
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
		iVar4 = (iVar4 + func_150(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_149(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_149(float fParam0, float fParam1, float fParam2)//Position - 0x4C00
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

int func_150(int iParam0, int iParam1)//Position - 0x4C42
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

void func_151(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x4CE4
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_138(*iParam0);
	iVar1 = func_140(*iParam0);
	iVar2 = func_141(*iParam0);
	iVar3 = func_145(*iParam0);
	iVar4 = func_144(*iParam0);
	iVar5 = func_143(*iParam0);
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
	iVar6 = func_150(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_150(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_152(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_152(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x4E66
{
	func_158(uParam0, iParam1);
	func_159(uParam0, iParam2);
	func_160(uParam0, iParam3);
	func_155(uParam0, iParam5);
	func_154(uParam0, iParam4);
	func_153(uParam0, iParam6);
}

void func_153(var uParam0, int iParam1)//Position - 0x4E9E
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

void func_154(var uParam0, int iParam1)//Position - 0x4F24
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_140(*uParam0);
	iVar1 = func_138(*uParam0);
	if (iParam1 < 1 || iParam1 > func_150(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_155(var uParam0, int iParam1)//Position - 0x4F75
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

int func_156(int iParam0, int iParam1)//Position - 0x4FA8
{
	int iVar0;
	int iVar1;
	
	if (!func_157(iParam1) || !func_157(iParam0))
	{
		return 1;
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
	iVar0 = func_145(iParam0);
	iVar1 = func_145(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_144(iParam0);
	iVar1 = func_144(iParam1);
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
	return 0;
}

int func_157(int iParam0)//Position - 0x50B4
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
	iVar0 = func_143(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_144(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_145(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_138(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_140(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_141(iParam0);
	if (iVar5 < 1 || iVar5 > func_150(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_158(int iParam0, int iParam1)//Position - 0x5190
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 66060288);
	*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

void func_159(int iParam0, int iParam1)//Position - 0x51CC
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 1032192);
	*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_160(int iParam0, int iParam1)//Position - 0x5207
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 15872);
	*iParam0 = (*iParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

int func_161()//Position - 0x5241
{
	var uVar0;
	
	func_158(&uVar0, unk_0xF40D00CD7B81C0A8());
	func_159(&uVar0, unk_0x7E09057438B9D216());
	func_160(&uVar0, unk_0x6E06C0DB9B43570D());
	func_154(&uVar0, unk_0xBE14F159908E4EE5());
	func_155(&uVar0, unk_0xDD6A91E47ED4D0CF());
	func_153(&uVar0, unk_0x4EEB3860BFC44B78());
	return uVar0;
}

char* func_162()//Position - 0x5287
{
	char* sVar0;
	
	switch (uLocal_74[0])
	{
		case 0:
			sVar0 = "CLEARING";
			break;
		
		case 1:
			sVar0 = "OVERCAST";
			break;
		
		case 4:
			sVar0 = "CLOUDS";
			break;
		
		case 5:
			sVar0 = "CLEAR";
			break;
		
		case 8:
			sVar0 = "EXTRASUNNY";
			break;
		
		case 9:
			sVar0 = "RAIN";
			break;
		
		default:
			sVar0 = "EXTRASUNNY";
			break;
	}
	return sVar0;
}

int func_163()//Position - 0x52FE
{
	if (Global_3DB8 != 0 || unk_0xE6711F601F11B66B())
	{
		return 1;
	}
	return 0;
}

void func_164()//Position - 0x5320
{
	if (!unk_0x1D403DFADBC2DE3C(iLocal_271[0], 0))
	{
		if (uLocal_74[0] == 8 || uLocal_74[0] == 9)
		{
			func_180(&uLocal_78, 1, 0, func_181(uLocal_74[0]), 0, 1);
			func_167("SC_SEX", 0, 0, 0);
		}
		else
		{
			func_165(iLocal_271[0], "SEX_ORAL", 10);
		}
	}
}

void func_165(int iParam0, char* sParam1, int iParam2)//Position - 0x5382
{
	unk_0x53D8178763EDCE60(iParam0, sParam1, func_166(iParam2), 1);
}

int func_166(int iParam0)//Position - 0x5399
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

int func_167(char* sParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x558E
{
	struct<6> Var0;
	char[] cVar1[8];
	
	if (func_179())
	{
		StringCopy(&Var0, sParam0, 24);
		if (bParam1)
		{
			func_178(&Var0, bParam2);
		}
		else
		{
			Var0 = { func_177(Var0) };
		}
		if (bParam3)
		{
			cVar1 = "SCAUD";
		}
		else
		{
			cVar1 = "SHAUD";
		}
		if (func_168(&uLocal_78, cVar1, &Var0, 7, 0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_168(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x55E9
{
	func_176(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_169(sParam2, iParam3, 0);
}

int func_169(char* sParam0, int iParam1, bool bParam2)//Position - 0x5637
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
					func_175();
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
		if (func_174(8, -1))
		{
			return 0;
		}
		Global_3E04 = { Global_3DFE };
		func_173();
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
				func_126();
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
				if (func_172())
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
			if (func_23())
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
			func_171();
			Global_3DC2 = bParam2;
		}
		Global_3DBA = iParam1;
		StringCopy(&Global_3C3B, sParam0, 24);
		Global_394A = 0;
		func_170();
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
		func_175();
	}
	return 0;
}

void func_170()//Position - 0x5903
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

void func_171()//Position - 0x5935
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

int func_172()//Position - 0x59CA
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

void func_173()//Position - 0x5A63
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

bool func_174(int iParam0, int iParam1)//Position - 0x5ABB
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

void func_175()//Position - 0x5AF6
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

void func_176(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x5B4D
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

struct<6> func_177(char[24] cParam0)//Position - 0x5BA3
{
	int iVar0;
	
	StringConCat(&cParam0, "_", 24);
	iVar0 = uLocal_74[0];
	StringIntConCat(&cParam0, iVar0, 24);
	return cParam0;
}

void func_178(char* sParam0, bool bParam1)//Position - 0x5BC4
{
	StringConCat(sParam0, "_", 24);
	if (func_75() == 2)
	{
		StringConCat(sParam0, "T", 24);
	}
	else if (func_75() == 0)
	{
		StringConCat(sParam0, "M", 24);
	}
	else if (func_75() == 1)
	{
		StringConCat(sParam0, "F", 24);
	}
	if (bParam1)
	{
		*sParam0 = { func_177(*sParam0) };
	}
}

int func_179()//Position - 0x5C1B
{
	if ((unk_0x4B8E3E5901E59EB8() || unk_0xE6711F601F11B66B()) || Global_3DB8 != 0)
	{
		return 0;
	}
	return 1;
}

void func_180(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x5C44
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

char* func_181(int iParam0)//Position - 0x5CDF
{
	switch (iParam0)
	{
		case 0:
			return "Juliet";
			break;
		
		case 1:
			return "Nikki";
			break;
		
		case 2:
			return "Chastity";
			break;
		
		case 3:
			return "Cheetah";
			break;
		
		case 4:
			return "Sapphire";
			break;
		
		case 5:
			return "Infernus";
			break;
		
		case 6:
			return "Fufu";
			break;
		
		case 7:
			return "Peach";
			break;
		
		case 8:
			return "TaxiLiz";
			break;
		
		case 9:
			return "REHH2Hiker";
			break;
	}
	return "Invalid name";
}

float func_182()//Position - 0x5D92
{
	switch (uLocal_74[0])
	{
		case 1:
			return 325.6f;
			break;
		
		case 0:
			return 52.89f;
			break;
		
		case 4:
			return 14.5f;
			break;
		
		case 5:
			return 43.85f;
			break;
		
		case 8:
			return 193.5f;
			break;
		
		case 9:
			return 233.2f;
			break;
	}
	return 0f;
}

Vector3 func_183(int iParam0, vector3 vParam1)//Position - 0x5E0B
{
	var uVar0;
	
	vParam1.z = (vParam1.z + 0.15f);
	if (unk_0x2084D4C6C2DF616F(vParam1, &uVar0, 0, 0))
	{
		vParam1.z = uVar0;
	}
	if (func_184(iParam0))
	{
		unk_0x641B19E156645A92(iParam0, vParam1, 1, false, 0, 1);
	}
	return vParam1;
}

bool func_184(int iParam0)//Position - 0x5E51
{
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 0;
	}
	return !unk_0x1D403DFADBC2DE3C(iParam0, 0);
}

Vector3 func_185()//Position - 0x5E6F
{
	switch (uLocal_74[0])
	{
		case 1:
			return 130.7462f, -1896.513f, 22.3246f;
			break;
		
		case 0:
			return -162.4315f, -1635.107f, 32.6529f;
			break;
		
		case 4:
			return -197.6542f, 92.3329f, 68.5846f;
			break;
		
		case 5:
			return -848.9675f, 510.048f, 89.8218f;
			break;
		
		case 8:
			return -28.5266f, -1565.793f, 28.918f;
			break;
		
		case 9:
			return 3315.045f, 5174.08f, 17.6765f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_186(var uParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x5F26
{
	int iVar0;
	
	if (iParam4 == 1)
	{
		unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()), 64);
	}
	if (!unk_0x866EAD7E27D8D0F8())
	{
		unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), !bParam1, 0);
	}
	if (bParam7)
	{
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			unk_0x9965F1612928953B(unk_0xBC25C936A095B5BA(), 1);
		}
	}
	if (!bParam1 && iParam6)
	{
		unk_0x9CB4DD3D88846081(0, 0, 3, 0);
	}
	else
	{
		unk_0x062C9995BFD27B2A(bParam1, bParam2, iParam3, 1, 0, 0);
	}
	if (bParam1)
	{
		unk_0x7456702622C62EA0(1);
	}
	else
	{
		if (unk_0xEF0E25DA0CB6E8FF(uParam0->f_4))
		{
			if (unk_0xEDEA6C8F42EE05F6(uParam0->f_4))
			{
				unk_0x348665177DBFB93B(uParam0->f_4, false);
			}
			unk_0x4EC087603E1DEF9C(uParam0->f_4, 1);
		}
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			unk_0xDC078F87049ECECE(unk_0xBC25C936A095B5BA(), true, 0);
		}
		iVar0 = unk_0x3E12B546F3F2597A();
		if (unk_0x724D816EA203A79E(iVar0))
		{
			unk_0xDC078F87049ECECE(iVar0, true, 0);
		}
		unk_0xDA70546257A3ED8B("TIME_LAPSE");
		if (unk_0x144E80F5C46A6B75("TOD_SHIFT_SCENE"))
		{
			unk_0x38FF8CB6377D36F6(uParam0->f_A);
			unk_0xDA70546257A3ED8B("TIME_LAPSE");
			unk_0xC1300D0F3A74E20B("TOD_SHIFT_SCENE");
		}
	}
	func_15(bParam1, 1, 0, 0, 0);
	func_146();
	if (!bParam1 && iParam5)
	{
		if (uParam0->f_5)
		{
			unk_0xC2BB4D344E887586(uParam0->f_7, 0, 0);
		}
		else
		{
			unk_0xC2BB4D344E887586(uParam0->f_8, 0, 0);
		}
	}
	if (!bParam1)
	{
		if (unk_0x17FAADF9916EF741())
		{
			unk_0x829FA4611BD56B44(250);
		}
	}
	if (!bParam1)
	{
		if (Global_19B04.f_7F22.f_12C1 != -15)
		{
			Global_19B04.f_7F22.f_12C1 = func_161();
		}
	}
}

float func_187(int iParam0)//Position - 0x6098
{
	if (func_10(iParam0))
	{
		if (func_6(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_5(unk_0xFA30DFD0084E92FE(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return 0f;
}

void func_188()//Position - 0x60D4
{
	int iVar0;
	vector3 vVar1[4];
	vector3 vVar2[4];
	var uVar3[4];
	
	func_189(&vVar1, &vVar2, &uVar3);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0xEF0E25DA0CB6E8FF(iLocal_279[iVar0]))
		{
			iLocal_279[iVar0] = unk_0x585DE1CBEEB2D27D(26379945, vVar1[iVar0 /*3*/], vVar2[iVar0 /*3*/], uVar3[iVar0], 0, 2);
			unk_0x2FB83B8BD6C05FD2(iLocal_279[iVar0], "HAND_SHAKE", 0.3f);
		}
		iVar0++;
	}
	Local_280.f_4 = unk_0x578D5D08EC980893("DEFAULT_SPLINE_CAMERA", false);
	unk_0xAAD57F72AF23F964(Local_280.f_4, vVar1[0 /*3*/], vVar2[0 /*3*/], 6000, 3, 2);
	unk_0xAAD57F72AF23F964(Local_280.f_4, vVar1[1 /*3*/], vVar2[1 /*3*/], 6000, 3, 2);
	unk_0x9DF315A9EFFF87AC(Local_280.f_4, uVar3[0]);
}

void func_189(var uParam0, var uParam1, var uParam2)//Position - 0x61A6
{
	switch (uLocal_74[0])
	{
		case 1:
			*(uParam0[0 /*3*/]) = { 140.9085f, -1885.527f, 25.6959f };
			*(uParam1[0 /*3*/]) = { -9.0308f, 0f, 126.3829f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { 141.712f, -1884.935f, 30.7241f };
			*(uParam1[1 /*3*/]) = { 4.7025f, 0f, 129.5531f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { 139.1899f, -1885.865f, 24.96737f };
			*(uParam1[2 /*3*/]) = { -3.535496f, 0.081819f, 135.1308f };
			(*uParam2)[2] = 50f;
			*(uParam0[3 /*3*/]) = { 133.9669f, -1893.292f, 23.9573f };
			*(uParam1[3 /*3*/]) = { -1.8669f, -0.0329f, -5.5828f };
			(*uParam2)[3] = 50f;
			break;
		
		case 0:
			*(uParam0[0 /*3*/]) = { -186.5408f, -1629.328f, 35.8275f };
			*(uParam1[0 /*3*/]) = { -1.5588f, 0f, -118.8025f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -186.1923f, -1629.505f, 48.7132f };
			*(uParam1[1 /*3*/]) = { -1.2745f, 0f, -116.9616f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -184.9595f, -1632.193f, 36.32303f };
			*(uParam1[2 /*3*/]) = { -3.262451f, 0.073971f, -100.6756f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { -164.7078f, -1632.25f, 34.0944f };
			*(uParam1[3 /*3*/]) = { -3.7303f, 0.0222f, 108.1824f };
			(*uParam2)[3] = 40f;
			break;
		
		case 4:
			*(uParam0[0 /*3*/]) = { -208.6886f, 112.8581f, 73.0855f };
			*(uParam1[0 /*3*/]) = { -0.1055f, 0f, -156.0082f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -208.9068f, 113.3747f, 85.2889f };
			*(uParam1[1 /*3*/]) = { 3.8438f, 0f, -157.0767f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -206.2357f, 106.941f, 72.07555f };
			*(uParam1[2 /*3*/]) = { -11.58381f, 0.084975f, -158.9702f };
			(*uParam2)[2] = 45f;
			*(uParam0[3 /*3*/]) = { -197.6886f, 94.7063f, 69.814f };
			*(uParam1[3 /*3*/]) = { 0.5155f, -0.0266f, 48.8652f };
			(*uParam2)[3] = 45f;
			break;
		
		case 5:
			*(uParam0[0 /*3*/]) = { -871.6285f, 520.8466f, 93.1945f };
			*(uParam1[0 /*3*/]) = { -0.1377f, -1.3933f, -105.9309f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -871.5255f, 521.1066f, 104.6356f };
			*(uParam1[1 /*3*/]) = { 3.1118f, -1.3933f, -105.9309f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -866.6436f, 514.6121f, 92.90275f };
			*(uParam1[2 /*3*/]) = { -5.957637f, -1.324997f, -101.9062f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { -849.5522f, 514.2322f, 91.0095f };
			*(uParam1[3 /*3*/]) = { -1.626f, -1.3198f, 92.3739f };
			(*uParam2)[3] = 40f;
			break;
		
		case 8:
			*(uParam0[0 /*3*/]) = { -27.698f, -1584.646f, 31.1034f };
			*(uParam1[0 /*3*/]) = { 0.0044f, 0f, -1.9117f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -27.698f, -1584.646f, 40.4849f };
			*(uParam1[1 /*3*/]) = { 7.981f, 0f, -1.9117f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -28.63904f, -1579.74f, 30.82423f };
			*(uParam1[2 /*3*/]) = { -7.527712f, 0.030218f, -14.33051f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { -28.6719f, -1568.09f, 29.7492f };
			*(uParam1[3 /*3*/]) = { -1.5414f, 0f, -168.6005f };
			(*uParam2)[3] = 40f;
			break;
		
		case 9:
			*(uParam0[0 /*3*/]) = { 3323.631f, 5148.861f, 20.9592f };
			*(uParam1[0 /*3*/]) = { 1.1547f, 1.0064f, 21.8733f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { 3323.844f, 5148.672f, 28.2303f };
			*(uParam1[1 /*3*/]) = { 11.4168f, 1.0064f, 22.8025f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { 3328.904f, 5157.818f, 20.5799f };
			*(uParam1[2 /*3*/]) = { -3.634001f, 1.039937f, 30.44809f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { 3315.368f, 5171.771f, 18.9066f };
			*(uParam1[3 /*3*/]) = { -2.8773f, 1.0064f, -103.0585f };
			(*uParam2)[3] = 40f;
			break;
	}
}

void func_190(int iParam0, vector3 vParam1)//Position - 0x66DA
{
	float fVar0;
	float fVar1;
	
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		unk_0x12B5924811F58165(iParam0, 1);
		if (unk_0xF4FCC3C1048FF2AB(iParam0, 242628503) != 1)
		{
			unk_0x02DAF06EA4F08219(&iLocal_306);
			unk_0xC5A6DFE2B8987B17(&iLocal_306);
			if (unk_0x5237AF95232D78C5(iParam0, 0))
			{
				unk_0xA3981DED4FC2E56E(0, 0, 16777216);
			}
			if (iParam0 == unk_0xBC25C936A095B5BA())
			{
				fVar0 = SYSTEM::VDIST(unk_0x541C2AEF053615BC(iParam0, true), vLocal_285);
				fVar1 = SYSTEM::VDIST(unk_0x541C2AEF053615BC(iParam0, true), vLocal_286);
				if (fVar1 < fVar0)
				{
					unk_0x85DB484A637CEAB9(0, iLocal_271[0], 0);
				}
				else if (!unk_0xF1734B55490E9045(func_191()))
				{
					unk_0xB0C1A00D86375366(0, func_191(), 0, 552, -1);
				}
				else
				{
					unk_0x346129B364057FF6(0, vLocal_285, 1f, -1, 0.25f, 64, 1193033728);
				}
			}
			if (iParam0 != unk_0xBC25C936A095B5BA())
			{
				if (!unk_0xF1734B55490E9045(func_191()))
				{
					unk_0xB0C1A00D86375366(0, func_191(), 0, 546, -1);
				}
				else
				{
					unk_0x346129B364057FF6(0, vParam1, 1f, -1, 0.25f, 1, 1193033728);
				}
				if (func_25(iParam0, vParam1, 1) > 5f)
				{
					unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 0);
					unk_0xE896C0AD02364F2A(0, "gestures@f@standing@casual", "gesture_come_here_soft", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0xDE2D2B13F24A979D(0, unk_0x491B2241281A03B7(3000, 6000));
					unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 0);
					unk_0xE896C0AD02364F2A(0, "gestures@f@standing@casual", "gesture_come_here_soft", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0xDE2D2B13F24A979D(0, unk_0x491B2241281A03B7(3000, 6000));
					unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 0);
					unk_0xE896C0AD02364F2A(0, "gestures@f@standing@casual", "gesture_come_here_soft", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0xE896C0AD02364F2A(0, "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -4f, -1, 0, 0, 0, 0, 0);
				}
			}
			unk_0x535008C596714F9E(iLocal_306);
			unk_0xA8E6405305C0D7DF(iParam0, iLocal_306);
		}
	}
}

char* func_191()//Position - 0x68A8
{
	char* sVar0;
	
	if (uLocal_74[0] == 1)
	{
		sVar0 = "BC_NIKKI_H_F";
	}
	return sVar0;
}

void func_192(int iParam0, int iParam1)//Position - 0x68C1
{
	if (!unk_0x36CEFBE9B745A58D(iParam0) && !unk_0x1D403DFADBC2DE3C(iParam1, 0))
	{
		unk_0xD8386C462DB4E5CF(iParam0, iParam1, vLocal_287, fLocal_294, 3, 1092616192, 0);
	}
}

char* func_193()//Position - 0x68F7
{
	return "mini@strip_club@idles@bouncer@base";
}

char* func_194()//Position - 0x6903
{
	if (func_75() == 0)
	{
		return "facials@p_m_zero@variations@happy";
	}
	else if (func_75() == 1)
	{
		return "facials@p_m_one@variations@happy";
	}
	else if (func_75() == 2)
	{
		return "facials@p_m_two@variations@happy";
	}
	return "facials@p_m_zero@variations@happy";
}

void func_195()//Position - 0x6942
{
	sLocal_272 = "move_p_m_one_idles@generic";
	unk_0x522053D86D6E1C7A(sLocal_272);
}

int func_196(int iParam0)//Position - 0x6958
{
	if (unk_0x5E87CB0495C97732(iParam0, joaat("blimp")))
	{
		return 1;
	}
	else if (unk_0x5E87CB0495C97732(iParam0, joaat("cargobob")))
	{
		return 1;
	}
	else if (unk_0x5E87CB0495C97732(iParam0, joaat("cargobob2")))
	{
		return 1;
	}
	else if (unk_0x5E87CB0495C97732(iParam0, joaat("cargobob3")))
	{
		return 1;
	}
	else if (unk_0x5E87CB0495C97732(iParam0, joaat("buzzard")))
	{
		return 1;
	}
	else if (unk_0x5E87CB0495C97732(iParam0, joaat("buzzard2")))
	{
		return 1;
	}
	else if (unk_0x5E87CB0495C97732(iParam0, joaat("maverick")))
	{
		return 1;
	}
	else if (unk_0x5E87CB0495C97732(iParam0, joaat("polmav")))
	{
		return 1;
	}
	else if (unk_0x5E87CB0495C97732(iParam0, joaat("annihilator")))
	{
		return 1;
	}
	else if (unk_0x5E87CB0495C97732(iParam0, joaat("frogger")))
	{
		return 1;
	}
	else if (unk_0x5E87CB0495C97732(iParam0, joaat("frogger2")))
	{
		return 1;
	}
	return 0;
}

int func_197(var uParam0, vector3 vParam1, bool bParam2, float fParam3)//Position - 0x6A45
{
	if (func_199(uParam0))
	{
		unk_0x7A368CF6F3C10DC1(*uParam0);
		if (!func_198(vParam1))
		{
			unk_0x641B19E156645A92(*uParam0, vParam1, 1, false, 0, 1);
			if (bParam2)
			{
				unk_0x019CE76D5286C95C(*uParam0, fParam3);
			}
			unk_0xF0A40F19AAB79E88(*uParam0, 1084227584);
		}
		return 1;
	}
	return 0;
}

int func_198(vector3 vParam0)//Position - 0x6A98
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_199(var uParam0)//Position - 0x6AC2
{
	int iVar0;
	
	iVar0 = unk_0x3E12B546F3F2597A();
	if (unk_0x724D816EA203A79E(iVar0))
	{
		if (!func_136(iVar0))
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && unk_0xE642C1AC73CE364E(iVar0, unk_0xBC25C936A095B5BA(), vLocal_63, 0, 1, 0))
			{
				unk_0x7A368CF6F3C10DC1(iVar0);
				unk_0xD434A01DEA38A939(iVar0, false, 0);
				unk_0xDC078F87049ECECE(iVar0, false, 0);
				unk_0x346478B12F69D4E3(iVar0, true);
				unk_0x77815D3407C6700D(iVar0, true, 1);
				*uParam0 = iVar0;
				return 1;
			}
		}
	}
	return 0;
}

int func_200(int iParam0)//Position - 0x6B34
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
			if (func_201())
			{
				Global_1B = unk_0x105601648511CC64();
				return 1;
			}
		}
	}
	return 0;
}

int func_201()//Position - 0x6B7E
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

void func_202(bool bParam0)//Position - 0x6BB0
{
	struct<4> Var0;
	float fVar1;
	
	func_63();
	if (unk_0x1D403DFADBC2DE3C(iLocal_271[0], 0))
	{
		return;
	}
	unk_0x379ACE23D404525C(vLocal_287 + Vector(0f, 1f, 1f) * Vector(10f, 10f, 10f), vLocal_287 + Vector(0f, -1f, -1f) * Vector(10f, 10f, 10f), false, 1);
	fVar1 = SYSTEM::VDIST(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), unk_0x541C2AEF053615BC(iLocal_271[0], true));
	if (iLocal_75 != 9)
	{
		if (((fVar1 >= (200f / 2f) && func_179()) && !func_253(uLocal_300, 2)) || func_240(iLocal_271[0], 0))
		{
			if (unk_0x2DA8CA50A72528FB(iLocal_277))
			{
				unk_0x07B8ECB35A4ED3AC(&iLocal_277);
			}
			if (unk_0x2DA8CA50A72528FB(iLocal_276))
			{
				unk_0x07B8ECB35A4ED3AC(&iLocal_276);
			}
			func_237(0);
			func_81("SCLUB_HOME_R", uLocal_74[0]);
			iLocal_75 = 9;
		}
	}
	if (unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
	{
		if (iLocal_75 != 8)
		{
			if (unk_0x2DA8CA50A72528FB(iLocal_277))
			{
				unk_0x07B8ECB35A4ED3AC(&iLocal_277);
			}
			if (unk_0x2DA8CA50A72528FB(iLocal_276))
			{
				unk_0x07B8ECB35A4ED3AC(&iLocal_276);
			}
			iLocal_75 = 8;
		}
	}
	if (func_226(iLocal_271[0], &uLocal_264, &iLocal_261))
	{
		func_64(4);
	}
	if (iLocal_75 <= 1)
	{
		func_245(1);
	}
	switch (iLocal_75)
	{
		case 0:
			iLocal_76 = 0;
			if (func_179())
			{
				if (!func_253(uLocal_300, 1))
				{
					unk_0x346478B12F69D4E3(iLocal_271[0], true);
					func_81("SCLUB_HOME_MEET", uLocal_74[0]);
					func_237(0);
					func_27(&uLocal_300, 1);
				}
				iLocal_75 = 1;
			}
			break;
		
		case 1:
			iLocal_76 = 1;
			Var0 = { func_69(uLocal_74[0]) };
			if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
			{
				iLocal_307 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
				iLocal_301 = unk_0x8D66276473ABD7CC(iLocal_307);
			}
			if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), unk_0x541C2AEF053615BC(iLocal_271[0], true), 3f, 3f, 3f, false, true, 0) || (unk_0xE59B7F5A03335350(iLocal_307, 0) && func_225(iLocal_307, iLocal_271[0], 1) <= 10f))
			{
				unk_0x346478B12F69D4E3(iLocal_271[0], false);
				if (unk_0x724D816EA203A79E(iLocal_307) && (unk_0x524ABB0435146845(iLocal_307) < 1 || (!bParam0 && !unk_0x7C28D15641461C68(unk_0x6F79ECA8C83E4357(iLocal_307)))))
				{
					if (!func_68("SCLUB_SMALL_CAR", &Var0))
					{
						func_65("SCLUB_SMALL_CAR", uLocal_74[0], 0);
						func_165(iLocal_271[0], "NEED_A_VEHICLE", 10);
					}
				}
				else
				{
					unk_0x7456702622C62EA0(1);
					unk_0xA4E856A8CD53B8DF(iLocal_271[0]);
					func_223();
					if (!func_253(uLocal_300, 2))
					{
						func_27(&uLocal_300, 2);
					}
					func_222();
					func_83();
					func_215(39, 1);
					func_215(40, 1);
					func_215(41, 1);
					func_215(42, 1);
					func_215(43, 1);
					func_215(44, 1);
					iLocal_75 = 2;
				}
			}
			else if (func_68("SCLUB_SMALL_CAR", &Var0))
			{
				unk_0x7456702622C62EA0(1);
			}
			break;
		
		case 2:
			iLocal_76 = 2;
			if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
			{
				if (unk_0x5237AF95232D78C5(iLocal_271[0], 0))
				{
					iLocal_75 = 3;
				}
			}
			else
			{
				func_165(iLocal_271[0], "NEED_A_VEHICLE", 10);
				iLocal_75 = 3;
			}
			break;
		
		case 3:
			iLocal_76 = 3;
			func_212();
			if (!func_163())
			{
				if (func_179())
				{
					unk_0x6935EBF9868982DC(vLocal_287 - Vector(3f, 3f, 3f), vLocal_287 + Vector(3f, 3f, 3f), false, 1);
					unk_0x379ACE23D404525C(vLocal_287 - Vector(3f, 3f, 3f), vLocal_287 + Vector(3f, 3f, 3f), false, 1);
					unk_0xEDAD35A0D81ED3FB(vLocal_287, 10f, 0, 0, 0, 0, false, 0);
					unk_0xA0C0B32E74BE8DB7(vLocal_287, 10f, 0);
					iLocal_284 = unk_0x1DAA351326EA3537(vLocal_287 - Vector(35f, 35f, 35f), vLocal_287 + Vector(35f, 35f, 35f), 0, 1, 1, 1);
					func_8(&iLocal_243);
					if (bParam0)
					{
						func_88(1);
						func_211();
					}
					else
					{
						iLocal_72 = 3;
					}
				}
			}
			break;
		
		case 4:
			iLocal_76 = 4;
			func_208(fVar1, vLocal_288);
			func_203();
			if ((func_4(&iLocal_255) > 45f || SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), vLocal_291) > (100f * 100f)) && func_25(unk_0xBC25C936A095B5BA(), vLocal_288, 1) > 100f)
			{
				if (uLocal_74[0] == 8)
				{
					func_167("SC_WALK", 0, 0, 0);
				}
				else
				{
					func_165(iLocal_271[0], "GENERIC_FUCK_YOU", 10);
				}
				func_64(3);
			}
			else if (func_240(iLocal_271[0], 1))
			{
				if (unk_0x2DA8CA50A72528FB(iLocal_277))
				{
					unk_0x07B8ECB35A4ED3AC(&iLocal_277);
				}
				if (unk_0x2DA8CA50A72528FB(iLocal_276))
				{
					unk_0x07B8ECB35A4ED3AC(&iLocal_276);
				}
				func_237(0);
				func_81("SCLUB_HOME_R", uLocal_74[0]);
				iLocal_75 = 9;
			}
			else if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vLocal_287, 3f, 3f, 2f, true, true, 2) || unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vLocal_286, 5f, 5f, 2f, true, true, 1))
			{
				if (func_34(1, 0, 1))
				{
					iLocal_72 = 1;
				}
			}
			else if (!unk_0x7214F4879DF8A314(unk_0xBC25C936A095B5BA()))
			{
				func_211();
			}
			break;
		
		case 5:
			iLocal_76 = 5;
			func_208(fVar1, vLocal_287);
			func_203();
			func_223();
			if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vLocal_287, 1f, 1f, 2f, true, true, 2))
			{
				iLocal_75 = 6;
			}
			else
			{
				if (unk_0x7214F4879DF8A314(unk_0xBC25C936A095B5BA()))
				{
					func_211();
				}
				else
				{
					func_59(vLocal_287);
				}
				if (func_104("SCLUB_HOME_WALK"))
				{
					unk_0x7456702622C62EA0(1);
				}
			}
			break;
		
		case 6:
			if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
			{
				if (unk_0x724D816EA203A79E(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)))
				{
					if (func_57(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 3f, 2, 0.5f, 0, 1, 0))
					{
						func_56();
						func_190(iLocal_271[0], vLocal_286);
						if (uLocal_74[0] == 9 || uLocal_74[0] == 8)
						{
							func_167("SC_GO_DOOR", 0, 0, 0);
						}
						else
						{
							func_167("SC_FOLLOWD", 0, 0, 1);
						}
						iLocal_75 = 7;
					}
				}
			}
			else if (unk_0x7214F4879DF8A314(unk_0xBC25C936A095B5BA()))
			{
				unk_0x49D46EE47C9CCB66(iLocal_271[0]);
				func_211();
				unk_0x7456702622C62EA0(1);
			}
			break;
		
		case 7:
			iLocal_76 = 7;
			if ((!func_163() && !unk_0x4B8E3E5901E59EB8()) && !func_253(uLocal_300, 2048))
			{
				Var0 = { func_69(uLocal_74[0]) };
				func_82("SCLUB_FOLLOW_H", &Var0, 7500, 1);
				func_83();
				func_237(0);
				func_27(&uLocal_300, 2048);
			}
			if ((unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vLocal_288, 5f, 5f, 2f, false, true, 1) || unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vLocal_286, 5f, 5f, 2f, false, true, 1)) && unk_0x7214F4879DF8A314(unk_0xBC25C936A095B5BA()))
			{
				if (func_34(1, 0, 1))
				{
					iLocal_72 = 1;
				}
			}
			break;
		
		case 8:
			if ((!func_253(uLocal_298, 4096) && !func_163()) && !unk_0x9986AD62CA3DE747(iLocal_271[0]))
			{
				if (iLocal_76 > 1 || SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), unk_0x541C2AEF053615BC(iLocal_271[0], true)) < (3f * 3f))
				{
					func_165(iLocal_271[0], "GENERIC_FRIGHTENED_MED", 10);
					func_27(&uLocal_298, 4096);
				}
			}
			if (!unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
			{
				iLocal_75 = iLocal_76;
			}
			break;
		
		case 9:
			if (fVar1 > 200f)
			{
				func_64(1);
			}
			else if (fVar1 <= (200f / 2f) && !func_240(iLocal_271[0], 1))
			{
				unk_0xEB233A3B7635D2AC();
				iLocal_75 = iLocal_76;
				if (unk_0x7214F4879DF8A314(unk_0xBC25C936A095B5BA()))
				{
					func_211();
				}
			}
			break;
	}
}

void func_203()//Position - 0x7342
{
	char* sVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	if (!func_253(uLocal_300, 16))
	{
		if (func_204())
		{
			func_27(&uLocal_300, 16);
		}
		else
		{
			return;
		}
	}
	sVar0 = func_97(iLocal_271[0], 0, 0);
	if (!func_253(uLocal_300, 8))
	{
		if (!func_253(uLocal_300, 4))
		{
			if (!func_253(uLocal_298, 256))
			{
				if (uLocal_74[0] == 8 || uLocal_74[0] == 9)
				{
					func_167("SC_BJ", 0, 0, 0);
				}
				func_27(&uLocal_298, 256);
			}
			else
			{
				unk_0x522053D86D6E1C7A(sVar0);
				func_27(&uLocal_300, 4);
			}
		}
		else if (unk_0xF9E082857622D91E(sVar0))
		{
			func_91(iLocal_271[0], 1, 1, -1, 1);
			unk_0x22321800954A532E(iLocal_271[0], true);
			func_7(&iLocal_252);
			func_27(&uLocal_300, 8);
		}
	}
	else if (func_253(uLocal_300, 4))
	{
		iVar1 = 0;
		bVar2 = unk_0x96044E39418AAF17(iLocal_271[0], sVar0, func_92(4, 1, 1, func_95(iLocal_307)), 3);
		bVar3 = unk_0x32E373675659FDB0(unk_0xBC25C936A095B5BA());
		bVar4 = unk_0xF4FCC3C1048FF2AB(iLocal_271[0], 242628503) == 7;
		bVar5 = unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0);
		bVar6 = false;
		if (bVar5)
		{
			if (unk_0x724D816EA203A79E(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)) && !unk_0x1D403DFADBC2DE3C(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0))
			{
				bVar6 = (unk_0x8B2EFFDCF3FE7E80(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)) && unk_0x8910237449BB6F79(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)) > 5f);
			}
		}
		if ((((!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) || func_4(&iLocal_252) > 35f) || SYSTEM::VDIST(vLocal_287, unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true)) < 75f) || bVar3) || bVar6)
		{
			if (!bVar4 && !bVar2)
			{
				unk_0xE896C0AD02364F2A(iLocal_271[0], sVar0, func_92(4, 1, 1, func_95(iLocal_307)), 8f, -8f, -1, 0, 0, 0, 0, 0);
			}
			if (bVar3)
			{
				iLocal_302 = 2000;
			}
			iVar1 = 1;
		}
		else if (bVar4)
		{
			iVar1 = 1;
		}
		if (bVar2)
		{
			func_242();
		}
		if ((iVar1 && bVar4) && !bVar2)
		{
			if (!bVar3 && bVar5)
			{
				if (bVar6)
				{
					unk_0x65E471E4A2D56226(unk_0xBC25C936A095B5BA(), (unk_0x8D66276473ABD7CC(unk_0xBC25C936A095B5BA()) - SYSTEM::CEIL((IntToFloat(unk_0xDF3442EA6BB67B98(unk_0xBC25C936A095B5BA())) * 0.1f))), 0);
					func_165(unk_0xBC25C936A095B5BA(), "GENERIC_CURSE_HIGH", 10);
				}
				else
				{
					func_165(unk_0xBC25C936A095B5BA(), "SEX_CLIMAX", 10);
				}
				func_27(&uLocal_298, 128);
			}
			unk_0x4EA570997E107F35(sVar0);
			func_71(&uLocal_300, 4);
		}
		if (!func_253(uLocal_298, 64))
		{
			if (func_4(&iLocal_252) > 10f)
			{
				func_165(unk_0xBC25C936A095B5BA(), "SEX_GENERIC", 10);
				func_165(iLocal_271[0], "SEX_ORAL", 10);
				func_27(&uLocal_298, 64);
			}
		}
		unk_0x82BD2E9769751DCD();
		func_242();
	}
}

int func_204()//Position - 0x762E
{
	vector3 vVar0;
	var uVar1;
	
	if (!func_179())
	{
		return 0;
	}
	func_62(&vVar0, &uVar1, 0);
	if (((SYSTEM::VDIST(vLocal_287, unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true)) > (75f * 2f) && SYSTEM::VDIST(vVar0, unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true)) > (75f / 2f)) && func_113(uLocal_74[0]) > 1) && func_205())
	{
		return 1;
	}
	return 0;
}

int func_205()//Position - 0x76A4
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		return 0;
	}
	iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
	if (unk_0xE59B7F5A03335350(iVar0, 0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iVar0);
		if (func_207(iVar1, 0) && func_206(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_206(int iParam0)//Position - 0x76F4
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		if (unk_0xA6BE0954FC6BAA16(iParam0) > 0)
		{
			iVar0 = 0;
			while (iVar0 < 49)
			{
				iVar1 = iVar0;
				if (((((iVar1 != 17 && iVar1 != 18) && iVar1 != 19) && iVar1 != 20) && iVar1 != 21) && iVar1 != 22)
				{
					if (unk_0x3EB14CBD49DA0017(iParam0, iVar1) != -1)
					{
						StringCopy(&cVar3, unk_0x0E4EDFA1D564AF9D(iParam0, iVar1, unk_0x3EB14CBD49DA0017(iParam0, iVar1)), 16);
						iVar2 = unk_0x56BEECB328B6D29D(&cVar3);
						if (iVar2 != 0)
						{
							if (iVar2 == unk_0x56BEECB328B6D29D("SABRE_CAG"))
							{
								return 0;
							}
						}
					}
				}
				iVar0++;
			}
		}
		switch (unk_0x83F8A448F340AE31(iParam0))
		{
			case -2066252141:
			case -782720499:
			case 542797648:
			case 68566729:
			case -1887744178:
			case 1486715695:
			case -1917671975:
			case -1405350320:
			case -157990217:
			case -280076747:
			case 1710903184:
			case 1663892749:
			case 434478421:
			case 1816176348:
			case 919485892:
			case 945079693:
			case 85100643:
			case 1939145032:
			case 1869774540:
			case -28233912:
			case -1150063973:
			case -463340997:
			case -703649403:
			case 197952738:
			case -208246612:
			case 2033852426:
			case -1820894825:
			case 1697345049:
			case -635697407:
			case -1910741341:
			case -1158091941:
			case -1834221859:
			case -1453479140:
			case -1954624455:
			case 1837596901:
			case 2013836096:
			case 1374303184:
			case 1419869906:
			case -526725184:
			case 1610027666:
			case -970031572:
			case 2071837743:
			case 1482989244:
			case 2130662788:
			case -1546132012:
			case 1410462333:
			case 1192783831:
			case -1304848574:
			case -317944664:
			case 570040040:
			case 1212243433:
			case -193022774:
				return 1;
				break;
		}
		if (unk_0x83F8A448F340AE31(iParam0) == 931866387 && unk_0x6F79ECA8C83E4357(iParam0) == joaat("slamvan"))
		{
			return 1;
		}
	}
	return 0;
}

int func_207(int iParam0, bool bParam1)//Position - 0x790F
{
	if ((((unk_0xE7B3A320107C1379(iParam0) || unk_0xA19D269B4B5A1532(iParam0)) || unk_0x8C1A6E7D5F410F4A(iParam0)) || unk_0xFF2234981505F7F4(iParam0)) || unk_0x7512ED01F3F46714(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (((((((iParam0 == joaat("police") || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("caddy")) || iParam0 == joaat("caddy2"))
		{
			return 0;
		}
	}
	if (((((((((((iParam0 == joaat("issi2") || iParam0 == joaat("hotknife")) || iParam0 == joaat("jb700")) || iParam0 == joaat("jester")) || iParam0 == joaat("jester2")) || iParam0 == 886810209) || iParam0 == -212993243) || iParam0 == -121446169) || iParam0 == 1909189272) || iParam0 == 1617472902) || iParam0 == 1031562256) || iParam0 == 500482303)
	{
		return 0;
	}
	return 1;
}

void func_208(float fParam0, vector3 vParam1)//Position - 0x7A75
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	if (!func_253(uLocal_298, 262144))
	{
		if (func_210(iLocal_271[0]))
		{
			if (uLocal_74[0] == 8)
			{
				func_167("SC_STEALC", 0, 0, 0);
			}
			else
			{
				func_165(iLocal_271[0], "GENERIC_SHOCKED_MED", 10);
			}
			func_8(&iLocal_246);
			func_27(&uLocal_298, 262144);
		}
	}
	else if (func_4(&iLocal_246) > 10f)
	{
		func_71(&uLocal_298, 262144);
		func_8(&iLocal_246);
	}
	if ((fParam0 > 5f || !func_179()) || func_253(uLocal_300, 4))
	{
		return;
	}
	if (!func_253(uLocal_298, 1) && !func_253(uLocal_298, 128))
	{
		if (SYSTEM::VDIST(vParam1, unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true)) < 75f)
		{
			if (uLocal_74[0] == 8 || uLocal_74[0] == 9)
			{
				if (func_167("SC_NEAR", 0, 0, 0))
				{
					func_27(&uLocal_298, 1);
				}
			}
			else
			{
				func_27(&uLocal_298, 1);
			}
			unk_0xEDAD35A0D81ED3FB(vLocal_287, 5f, 0, 0, 0, 0, false, 0);
		}
	}
	if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		return;
	}
	iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
	if (!unk_0xE59B7F5A03335350(iVar0, 0))
	{
		if (!func_253(uLocal_298, 16))
		{
			func_165(iLocal_271[0], "NEED_A_VEHICLE", 10);
			func_27(&uLocal_298, 16);
			func_8(&iLocal_243);
		}
		if (!func_253(uLocal_298, 4))
		{
			func_71(&uLocal_298, 4);
		}
		if (!func_253(uLocal_298, 8))
		{
			func_71(&uLocal_298, 8);
		}
	}
	else
	{
		fVar1 = unk_0x8910237449BB6F79(iVar0);
		fVar2 = unk_0x2D175DF90F6F05C3(iVar0);
		if (fVar1 < (fVar2 * 0.9f) || fVar1 > (fVar2 * 0.1f))
		{
			func_8(&iLocal_249);
		}
		if (!func_253(uLocal_298, 4))
		{
			if (func_4(&iLocal_243) > 15f && func_4(&iLocal_249) > 5f)
			{
				func_165(iLocal_271[0], "DRIVEN_FAST", 10);
				func_27(&uLocal_298, 4);
				func_8(&iLocal_243);
			}
		}
		else if (func_4(&iLocal_243) < 5f)
		{
			func_71(&uLocal_298, 4);
			func_8(&iLocal_243);
		}
		if (!func_253(uLocal_298, 8))
		{
			if (func_4(&iLocal_243) > 15f && func_4(&iLocal_249) > 5f)
			{
				func_165(iLocal_271[0], "DRIVEN_SLOW", 10);
				func_27(&uLocal_298, 4);
				func_8(&iLocal_243);
			}
		}
		else if (func_4(&iLocal_243) < 5f)
		{
			func_71(&uLocal_298, 8);
			func_8(&iLocal_243);
		}
		if (!func_253(uLocal_298, 131072))
		{
			if (func_209(iLocal_271[0], &iLocal_301))
			{
				if (func_4(&iLocal_246) > 5f)
				{
					func_165(iLocal_271[0], "CRASH_GENERIC_DRIVEN", 10);
					func_27(&uLocal_298, 131072);
					func_8(&iLocal_243);
				}
			}
		}
		else if (func_4(&iLocal_246) > 5f)
		{
			func_71(&uLocal_298, 131072);
			func_8(&iLocal_246);
		}
		if (!func_253(uLocal_298, 65536))
		{
			if (func_4(&iLocal_243) > 30f || (func_4(&iLocal_243) > 10f && !func_253(uLocal_298, 32)))
			{
				func_165(iLocal_271[0], "BOOTY_FLIRT", 10);
				func_27(&uLocal_298, 32);
				func_27(&uLocal_298, 524288);
				func_8(&iLocal_243);
			}
			else if (func_253(uLocal_298, 524288))
			{
				if (!unk_0x9986AD62CA3DE747(iLocal_271[0]) && func_4(&iLocal_243) > 4f)
				{
					func_165(unk_0xBC25C936A095B5BA(), "BOOTY_FLIRT_RESP", 10);
					func_71(&uLocal_298, 524288);
				}
			}
		}
	}
}

int func_209(int iParam0, int iParam1)//Position - 0x7E2A
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
	if (unk_0xE59B7F5A03335350(iVar0, 0))
	{
		if (unk_0x25EF720B1CAB1E23(iParam0, iVar0))
		{
			if (unk_0x8B2EFFDCF3FE7E80(iVar0))
			{
				iVar1 = unk_0x8D66276473ABD7CC(iVar0);
				iVar2 = (*iParam1 - iVar1);
				*iParam1 = iVar1;
				unk_0x5502708AECB47F5D(iVar0);
				if (iVar2 > 10)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_210(int iParam0)//Position - 0x7E82
{
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		if (unk_0x6103B6A8E33A21D1(108, unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 10f) && unk_0x5CEC84BB4AC55121(iParam0, unk_0xBC25C936A095B5BA()))
		{
			return 1;
		}
	}
	return 0;
}

void func_211()//Position - 0x7EC0
{
	func_84();
	func_8(&iLocal_243);
	if (unk_0x7214F4879DF8A314(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0x2DA8CA50A72528FB(iLocal_276))
		{
			unk_0x07B8ECB35A4ED3AC(&iLocal_276);
		}
		if (!unk_0x2DA8CA50A72528FB(iLocal_277))
		{
			iLocal_277 = func_60(vLocal_288, 0);
		}
		func_8(&iLocal_255);
		vLocal_291 = { unk_0x541C2AEF053615BC(iLocal_271[0], true) };
		iLocal_75 = 4;
	}
	else
	{
		func_8(&iLocal_246);
		func_59(vLocal_287);
		iLocal_75 = 5;
	}
}

void func_212()//Position - 0x7F35
{
	if (!func_253(uLocal_298, 1024))
	{
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0) && unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			if (func_213(uLocal_74[0]))
			{
				if (!func_163())
				{
					func_165(iLocal_271[0], "NICE_CAR", 10);
					func_27(&uLocal_298, 1024);
				}
			}
		}
	}
}

int func_213(int iParam0)//Position - 0x7F94
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
	if (unk_0xE59B7F5A03335350(iVar0, 0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iVar0);
		if (func_214(iParam0, iVar1))
		{
			return 1;
		}
	}
	return 0;
}

int func_214(int iParam0, int iParam1)//Position - 0x7FC9
{
	switch (iParam1)
	{
		case joaat("manana"):
		case joaat("tornado"):
		case joaat("tornado3"):
		case joaat("tornado4"):
		case joaat("ztype"):
		case joaat("regina"):
			if (iParam0 == 0)
			{
				return 1;
			}
			break;
		
		case joaat("blista"):
		case joaat("surge"):
		case joaat("dilettante"):
		case joaat("penumbra"):
		case joaat("asterope"):
			if (iParam0 == 1)
			{
				return 1;
			}
			break;
		
		case joaat("dominator"):
		case joaat("gauntlet"):
		case joaat("phoenix"):
		case joaat("sabregt"):
		case joaat("bullet"):
		case joaat("banshee"):
		case joaat("peyote"):
		case joaat("buffalo"):
		case joaat("buffalo2"):
			if (iParam0 == 2)
			{
				return 1;
			}
			break;
		
		case joaat("cheetah"):
		case joaat("cogcabrio"):
		case joaat("jb700"):
		case joaat("stingergt"):
		case joaat("monroe"):
		case joaat("comet2"):
		case joaat("oracle"):
		case joaat("oracle2"):
		case joaat("intruder"):
		case joaat("jackal"):
		case joaat("exemplar"):
		case joaat("felon"):
		case joaat("superd"):
		case joaat("infernus"):
		case joaat("entityxf"):
		case joaat("adder"):
		case joaat("vacca"):
			if (iParam0 == 3 || iParam0 == 5)
			{
				return 1;
			}
			break;
		
		case joaat("baller"):
		case joaat("bison"):
		case joaat("dubsta"):
		case joaat("granger"):
		case joaat("patriot"):
		case joaat("baller2"):
		case joaat("bjxl"):
		case joaat("cavalcade"):
		case joaat("cavalcade2"):
		case joaat("gresley"):
		case joaat("landstalker"):
		case joaat("mesa"):
		case joaat("rancherxl"):
		case joaat("sandking"):
		case joaat("rebel"):
		case joaat("stretch"):
		case joaat("romero"):
		case joaat("coach"):
		case joaat("bus"):
			if (iParam0 == 4 || iParam0 == 7)
			{
				return 1;
			}
			break;
		
		case joaat("surano"):
		case joaat("rapidgt2"):
		case joaat("ninef2"):
		case joaat("zion2"):
		case joaat("tornado2"):
		case joaat("sentinel2"):
		case joaat("issi2"):
		case joaat("felon2"):
			if (iParam0 == 6 || iParam0 == 1)
			{
				return 1;
			}
			break;
		
		case joaat("vader"):
		case joaat("akuma"):
		case joaat("bagger"):
		case joaat("bati"):
		case joaat("bati2"):
		case joaat("double"):
		case joaat("hexer"):
		case joaat("nemesis"):
		case joaat("ruffian"):
			if (iParam0 == 8)
			{
				return 1;
			}
			break;
		
		case joaat("fbi"):
		case joaat("taxi"):
		case joaat("pranger"):
		case joaat("ambulance"):
		case joaat("police3"):
			if (iParam0 == 9)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_215(int iParam0, bool bParam1)//Position - 0x8268
{
	if (bParam1)
	{
		if (!func_221(iParam0, 2, 1))
		{
			func_220(iParam0, 2, 1);
		}
	}
	else if (func_221(iParam0, 2, 1))
	{
		func_216(iParam0, 2, 1);
	}
}

void func_216(int iParam0, int iParam1, bool bParam2)//Position - 0x829F
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0x7CB6FD92BE491AD9(&(Global_16B4F.f_531[iParam0]), iParam1);
	}
	else if (unk_0x7AF0088ABFA713B6())
	{
		if (func_52() == 0)
		{
			iVar0 = func_218(func_219(iParam0), -1, 0);
			unk_0x7CB6FD92BE491AD9(&iVar0, iParam1);
			func_217(func_219(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_29C[iParam0]), iParam1);
	}
}

void func_217(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x8308
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_74(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, iParam3);
	}
}

int func_218(int iParam0, int iParam1, int iParam2)//Position - 0x8338
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_74(iParam1)];
	if (unk_0x6CB99B97664C3727(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_219(int iParam0)//Position - 0x836A
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

void func_220(int iParam0, int iParam1, bool bParam2)//Position - 0x865E
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0xF0059F27F7BB6680(&(Global_16B4F.f_531[iParam0]), iParam1);
	}
	else if (unk_0x7AF0088ABFA713B6())
	{
		if (func_52() == 0)
		{
			iVar0 = func_218(func_219(iParam0), -1, 0);
			unk_0xF0059F27F7BB6680(&iVar0, iParam1);
			func_217(func_219(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xF0059F27F7BB6680(&(Global_19B04.f_29C[iParam0]), iParam1);
	}
}

int func_221(int iParam0, int iParam1, bool bParam2)//Position - 0x86C7
{
	if (bParam2)
	{
		return unk_0xFA30DFD0084E92FE(Global_16B4F.f_531[iParam0], iParam1);
	}
	else if (unk_0x7AF0088ABFA713B6())
	{
		if (func_52() == 0)
		{
			return unk_0xFA30DFD0084E92FE(func_218(func_219(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xFA30DFD0084E92FE(Global_19B04.f_29C[iParam0], iParam1);
	}
	return 0;
}

void func_222()//Position - 0x8727
{
	if (uLocal_74[0] == 8)
	{
		func_167("SC_GREET", 0, 0, 0);
	}
	else
	{
		func_165(iLocal_271[0], "GENERIC_HI_FLIRTY", 10);
	}
}

void func_223()//Position - 0x8758
{
	if (!unk_0xD45C08B05D4687A7(iLocal_271[0]) && SYSTEM::VDIST(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), unk_0x541C2AEF053615BC(iLocal_271[0], true)) < 10f)
	{
		unk_0x75E3FA28CC7D5707(iLocal_271[0], func_224());
		unk_0x59B9712C1EAB0092(iLocal_271[0], 0);
	}
}

int func_224()//Position - 0x87AA
{
	return unk_0x705BBFE5A8ADE4A9(unk_0xFC1CAE18F3ECBF2D());
}

float func_225(int iParam0, int iParam1, bool bParam2)//Position - 0x87BA
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

int func_226(int iParam0, var uParam1, int iParam2)//Position - 0x8818
{
	var uVar0;
	int iVar1;
	
	if (!func_10(iParam2))
	{
		func_7(iParam2);
	}
	if (func_4(iParam2) > 3f)
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			iVar1 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
		}
		if (func_229(iParam0, iVar1, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_227(&uVar0);
			if (unk_0x724D816EA203A79E(iParam0))
			{
				if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
				{
					if (!unk_0x4EE7377FBE72B4BC(iLocal_70))
					{
						unk_0xB2CB6EAA6B280A84("BootyCall", &iLocal_70);
					}
					unk_0xA902E18EDF6FA0C8(2, iLocal_70, 1862763509);
					unk_0xA902E18EDF6FA0C8(2, 1862763509, iLocal_70);
					unk_0x4106FAF8AA1D69D5(iParam0, iLocal_70);
					unk_0x5558ED6D4A2DEC93(iParam0, unk_0xBC25C936A095B5BA(), 500f, -1, 0, 0);
				}
			}
			func_8(iParam2);
			return 1;
		}
	}
	return 0;
}

void func_227(var uParam0)//Position - 0x88D2
{
	switch (*uParam0)
	{
		case 1:
		case 4:
		case 16:
			func_228(1);
			break;
		
		case 2:
			break;
	}
}

void func_228(bool bParam0)//Position - 0x8905
{
	Global_19716 = 0;
	Global_19716.f_1 = -1;
	Global_19716.f_2 = -1;
	if (bParam0)
	{
		func_119(-1);
	}
}

int func_229(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x892A
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0xBC25C936A095B5BA();
	if (!unk_0x1D403DFADBC2DE3C(iVar0, 0) && !unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		if (!func_253(*uParam2, 1))
		{
			if (func_236(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_253(*uParam2, 2))
		{
			if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_253(*uParam2, 4))
		{
			if (func_234(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_253(*uParam2, 8))
		{
			if (func_233(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_253(*uParam2, 128);
		if (bParam4)
		{
			if (func_230(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_253(*uParam2, 16))
		{
			if (func_230(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
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

int func_230(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x8A54
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_59)
		{
			iLocal_60 = unk_0x8D66276473ABD7CC(iParam0);
			bLocal_59 = true;
		}
		iLocal_61 = unk_0x8D66276473ABD7CC(iParam0);
		iLocal_62 = (iLocal_60 - iLocal_61);
		iVar0 = unk_0x3E12B546F3F2597A();
		if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
		{
			if (unk_0xD9C1758D86688CEA(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_62) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_59)
		{
			if (unk_0xD9C1758D86688CEA(iParam0, unk_0xBC25C936A095B5BA(), 1))
			{
				if (IntToFloat(iLocal_62) > 100f)
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
	if (func_232(unk_0xBC25C936A095B5BA(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x2CDE18D6C89522AD(iParam0) && func_231(iParam0, 1) < 1.5f)
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

float func_231(int iParam0, bool bParam1)//Position - 0x8C1C
{
	return func_225(unk_0xA95CF30C72EB526E(unk_0xFC1CAE18F3ECBF2D()), iParam0, bParam1);
}

int func_232(int iParam0, int iParam1)//Position - 0x8C34
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

int func_233(int iParam0, int iParam1, var uParam2)//Position - 0x8C89
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

int func_234(int iParam0, int iParam1, var uParam2, bool bParam3)//Position - 0x8CD7
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
			if (unk_0x042228744678C7D4(iParam0) || func_235(iVar1))
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

int func_235(int iParam0)//Position - 0x8E50
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
						if (func_225(unk_0xBC25C936A095B5BA(), iParam0, 1) < 40f)
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

int func_236(int iParam0, var uParam1)//Position - 0x8F1E
{
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		if (unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 6))
		{
			if (unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), iParam0) || unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), iParam0))
			{
				if (unk_0xC5B8A5F778E321DD(iParam0, unk_0xBC25C936A095B5BA(), 90f))
				{
					if (func_231(iParam0, 1) < uParam1->f_2)
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

void func_237(int iParam0)//Position - 0x8FA3
{
	struct<4> Var0;
	
	if (unk_0x2DA8CA50A72528FB(uLocal_278[iParam0]))
	{
		unk_0x07B8ECB35A4ED3AC(&(uLocal_278[iParam0]));
	}
	uLocal_278[iParam0] = func_238(iLocal_271[iParam0], 0, 145);
	Var0 = { func_69(uLocal_74[iParam0]) };
	unk_0x436D0272182E484D(uLocal_278[iParam0], &Var0);
}

int func_238(int iParam0, bool bParam1, int iParam2)//Position - 0x8FF4
{
	int iVar0;
	
	iVar0 = func_239(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x2DA8CA50A72528FB(iVar0)) && unk_0x0F6F4C227FB5DD52(&(Global_19B04.f_6D75[iParam2 /*29*/].f_3)))
	{
		unk_0x436D0272182E484D(iVar0, &(Global_19B04.f_6D75[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_239(int iParam0, bool bParam1, bool bParam2)//Position - 0x9046
{
	int iVar0;
	
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x511FE22BCF5353CD(iParam0);
	if (unk_0xD27AC0E9B78CFDD7(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(iVar0, func_61(unk_0x7AF0088ABFA713B6(), 1f, 1f));
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
		unk_0x3F5F1772D71D5EC4(iVar0, func_61(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
		unk_0xF9C2945DB5BAB4BF(iVar0, bParam1);
	}
	else if (unk_0xB12D030810E8447D(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(iVar0, func_61(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
	}
	return iVar0;
}

int func_240(int iParam0, int iParam1)//Position - 0x90EA
{
	vector3 vVar0;
	vector3 vVar1;
	int iVar2;
	float fVar3;
	
	vVar0 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
	vVar1 = { unk_0x541C2AEF053615BC(iParam0, true) };
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		iVar2 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
		if (unk_0x25C56066DCE88BDB(iParam0) == func_224())
		{
			if (unk_0xE59B7F5A03335350(iVar2, 0))
			{
				if (!unk_0x62F3A07C43FFB568(iParam0, iVar2, 0) && SYSTEM::VDIST(vVar0, vVar1) > 10f)
				{
					return 1;
				}
			}
		}
	}
	if (iParam1 && func_253(uLocal_300, 2))
	{
		fVar3 = unk_0x357058E632979E65((vVar0.z - vVar1.z));
		if (fVar3 > 8f)
		{
			return 1;
		}
	}
	return 0;
}

void func_241()//Position - 0x9191
{
	if (!unk_0x1D403DFADBC2DE3C(iLocal_271[0], 0))
	{
		if (!unk_0x719413B40BB63D86())
		{
			func_183(iLocal_271[0], unk_0x89D97EB4FAE4A574(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), unk_0x349C94FFF43E2979(unk_0xBC25C936A095B5BA()), 0f, 2f, 0f));
			iLocal_72 = 1;
			iLocal_73 = 0;
		}
	}
}

void func_242()//Position - 0x91E1
{
	unk_0x2423B13D9CFAD1DD();
	func_243();
}

void func_243()//Position - 0x91F1
{
	Global_4336.f_86 = 1;
}

int func_244(int iParam0, bool bParam1)//Position - 0x91FF
{
	if (iParam0 == 0)
	{
		if (bParam1)
		{
			return joaat("csb_stripper_01");
		}
		else
		{
			return joaat("s_f_y_stripper_01");
		}
	}
	else if (iParam0 == 1)
	{
		if (bParam1)
		{
			return joaat("csb_stripper_02");
		}
		else
		{
			return joaat("s_f_y_stripper_02");
		}
	}
	return 0;
}

void func_245(bool bParam0)//Position - 0x9247
{
	struct<8> Var0;
	
	if (!func_157(iLocal_71))
	{
		iLocal_71 = func_161();
		func_151(&iLocal_71, 0, 0, unk_0x491B2241281A03B7(5, 7), 0, 0, 0);
	}
	else if (bParam0)
	{
		if (!func_253(uLocal_300, 512))
		{
			if (func_252(iLocal_71) && unk_0x41A5D6415E2CC10E(iLocal_271[0]))
			{
				if (uLocal_74[0] == 8 || uLocal_74[0] == 9)
				{
					StringCopy(&Var0, "SC_CANCEL_", 64);
					StringIntConCat(&Var0, uLocal_74[0], 64);
					func_180(&uLocal_78, 1, 0, func_181(uLocal_74[0]), 0, 1);
					func_251(&uLocal_78, func_109(uLocal_74[0]), "SHAUD", &Var0, 7, 0, 0, 1);
				}
				else
				{
					func_249();
				}
				func_248(iLocal_271[0]);
				func_27(&uLocal_300, 512);
			}
		}
		else if (func_247())
		{
			func_71(&uLocal_300, 512);
		}
		else if ((!func_163() && func_246()) && !func_247())
		{
			func_228(1);
			func_64(2);
		}
	}
}

int func_246()//Position - 0x934C
{
	if (Global_3DB8 == 0)
	{
		return 1;
	}
	return 0;
}

int func_247()//Position - 0x9363
{
	if (Global_3DE9 == 1 || Global_41B0 == 1)
	{
		return 1;
	}
	return 0;
}

void func_248(int iParam0)//Position - 0x9386
{
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		unk_0x12B5924811F58165(iParam0, 1);
		if (unk_0xF4FCC3C1048FF2AB(iParam0, 242628503) != 1)
		{
			unk_0x02DAF06EA4F08219(&iLocal_306);
			unk_0xC5A6DFE2B8987B17(&iLocal_306);
			unk_0x27EEADDC6B3B755E(0, 8000);
			unk_0x346129B364057FF6(0, vLocal_286, 1.5f, -1, 0.25f, 0, 1193033728);
			unk_0x535008C596714F9E(iLocal_306);
			unk_0xA8E6405305C0D7DF(iParam0, iLocal_306);
		}
	}
}

void func_249()//Position - 0x93EF
{
	int iVar0;
	
	if (func_250())
	{
		return;
	}
	iVar0 = func_112(uLocal_74[0]);
	func_106(-384575792, iVar0, 6, 3, func_110(), func_109(uLocal_74[0]), 0, 10000, -1, 0, -1, 0, 1);
}

int func_250()//Position - 0x9430
{
	if (func_52() == 0)
	{
		return 1;
	}
	return 0;
}

int func_251(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x9445
{
	func_176(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_3DE8 = 1;
	Global_3DBF = 1;
	Global_3DC6 = 0;
	Global_3DC1 = 0;
	Global_4197 = 0;
	Global_4199 = 0;
	Global_419D = 0;
	Global_3DBD = 0;
	Global_3DEC = 0;
	Global_3DEE = 0;
	Global_280001 = 0;
	return func_169(sParam3, iParam4, bParam7);
}

bool func_252(int iParam0)//Position - 0x9493
{
	return func_156(func_161(), iParam0);
}

bool func_253(var uParam0, int iParam1)//Position - 0x94A5
{
	return (uParam0 && iParam1) != 0;
}

int func_254(var uParam0, bool bParam1)//Position - 0x94B4
{
	vector3 vVar0;
	float fVar1;
	int iVar2;
	char cVar3[64];
	struct<16> Var4;
	struct<8> Var5;
	
	func_282();
	func_62(&vVar0, &fVar1, bParam1);
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		if (fLocal_296 == -1f)
		{
			fLocal_296 = SYSTEM::VDIST(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), vVar0);
		}
		if (iLocal_299 == -1)
		{
			iLocal_299 = uParam0->f_3;
		}
		if (!func_253(uLocal_300, 32))
		{
			func_278(&uLocal_274, func_280((*uParam0)[0], 0));
			func_277(&uLocal_274);
			func_27(&uLocal_300, 32);
			unk_0x522053D86D6E1C7A("mini@strip_club@idles@stripper");
			unk_0x522053D86D6E1C7A("gestures@f@standing@casual");
			func_276();
			return 0;
		}
		else if ((!func_275(&uLocal_274) || !unk_0xF9E082857622D91E("mini@strip_club@idles@stripper")) || !func_274())
		{
			return 0;
		}
		if (bLocal_304)
		{
			if (!unk_0x88E77A85289CC883(1))
			{
				return 0;
			}
		}
		if (!func_253(uLocal_300, 1024))
		{
			uLocal_74[0] = (*uParam0)[0];
			iLocal_271[0] = unk_0x01B3635C3E8EDD81(26, func_280((*uParam0)[0], 0), vVar0, fVar1, 1, true);
			func_268(iLocal_271[0], uLocal_74[0], 0);
			unk_0x2E35C4FA5F0ED22F(iLocal_271[iVar2], true);
			unk_0x22321800954A532E(iLocal_271[0], true);
			unk_0x566684DB6DAC0531(iLocal_271[0], true);
			func_264(iLocal_271[0]);
			unk_0xE896C0AD02364F2A(iLocal_271[0], "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -1.5f, -1, 1, 0, 0, 0, 0);
			unk_0x56F2E1B5599188FA(iLocal_271[iVar2], unk_0xBC25C936A095B5BA(), -1, 2048, 4);
			unk_0x59B9712C1EAB0092(iLocal_271[0], 0);
			unk_0x36C3B58DA78A2679(iLocal_271[0], func_181((*uParam0)[0]));
			func_180(&uLocal_78, 1, iLocal_271[0], func_181((*uParam0)[0]), 0, 1);
			func_27(&uLocal_300, 1024);
		}
		if (SYSTEM::VDIST(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), vVar0) > 100f)
		{
			if (func_179())
			{
				if (!func_253(uLocal_300, 1))
				{
					func_263(bParam1);
					func_237(0);
					func_27(&uLocal_300, 1);
				}
			}
			if (!func_253(uLocal_300, 64) && !func_253(uLocal_300, 512))
			{
				if (func_262(func_109((*uParam0)[0])))
				{
					StringCopy(&cVar3, "BC_PLYRC_", 64);
					if (func_75() == 2)
					{
						func_180(&uLocal_78, 0, unk_0xBC25C936A095B5BA(), "TREVOR", 0, 1);
						StringConCat(&cVar3, "T", 64);
					}
					else if (func_75() == 0)
					{
						func_180(&uLocal_78, 0, unk_0xBC25C936A095B5BA(), "MICHAEL", 0, 1);
						StringConCat(&cVar3, "M", 64);
					}
					else if (func_75() == 1)
					{
						func_180(&uLocal_78, 0, unk_0xBC25C936A095B5BA(), "FRANKLIN", 0, 1);
						StringConCat(&cVar3, "F", 64);
					}
					func_180(&uLocal_78, 3, 0, func_181((*uParam0)[0]), 0, 1);
					Var4 = { func_261() };
					func_256(&uLocal_78, func_109((*uParam0)[0]), "BCAUD", &cVar3, &cVar3, &Var4, &Var4, 12, 1, 0, 0, 0);
					func_27(&uLocal_300, 64);
				}
				if (func_157(iLocal_71))
				{
					if (func_252(iLocal_71))
					{
						if ((*uParam0)[0] == 8 || (*uParam0)[0] == 9)
						{
							StringCopy(&Var5, "SC_CANCEL_", 64);
							StringIntConCat(&Var5, (*uParam0)[0], 64);
							func_180(&uLocal_78, 1, 0, func_181((*uParam0)[0]), 0, 1);
							func_251(&uLocal_78, func_109((*uParam0)[0]), "SHAUD", &Var5, 12, 0, 0, 1);
						}
						else
						{
							func_249();
						}
						func_27(&uLocal_300, 512);
					}
				}
			}
			else if (func_247())
			{
				func_71(&uLocal_300, 64);
				func_71(&uLocal_300, 512);
			}
			else if ((!func_163() && func_246()) && !func_247())
			{
				func_255((*uParam0)[0]);
				func_228(1);
				func_64(2);
			}
			if (!func_253(uLocal_300, 128))
			{
				if (!func_33(0))
				{
					func_65("SCLUB_HOME_C_H", uLocal_74[0], 0);
					func_27(&uLocal_300, 128);
				}
			}
			if (SYSTEM::VDIST(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), vVar0) > (fLocal_296 + (200f * 3f)))
			{
				func_64(1);
			}
			else if (SYSTEM::VDIST(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), vVar0) < fLocal_296)
			{
				fLocal_296 = SYSTEM::VDIST(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), vVar0);
			}
			return 0;
		}
	}
	else
	{
		return 0;
	}
	if (func_75() == 2)
	{
		func_180(&uLocal_78, 0, unk_0xBC25C936A095B5BA(), "TREVOR", 0, 1);
	}
	else if (func_75() == 0)
	{
		func_180(&uLocal_78, 0, unk_0xBC25C936A095B5BA(), "MICHAEL", 0, 1);
	}
	else if (func_75() == 1)
	{
		func_180(&uLocal_78, 0, unk_0xBC25C936A095B5BA(), "FRANKLIN", 0, 1);
	}
	return 1;
}

void func_255(int iParam0)//Position - 0x9937
{
	if (Global_19B04.f_F3[func_73() /*53*/].f_2[iParam0 /*5*/].f_1 < 0)
	{
		Global_19B04.f_F3[func_73() /*53*/].f_2[iParam0 /*5*/].f_1 = 0;
	}
	Global_19B04.f_F3[func_73() /*53*/].f_2[iParam0 /*5*/].f_1++;
}

int func_256(var uParam0, int iParam1, char* sParam2, char[4] cParam3, char[4] cParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x9996
{
	var uVar0;
	var uVar1;
	
	func_176(uParam0, iParam1, sParam2, iParam9, iParam10, 0);
	func_260();
	if (iParam8 == 1)
	{
		Global_3DC4 = 1;
	}
	else
	{
		Global_3DC4 = 0;
	}
	uVar0 = 10;
	uVar1 = 10;
	func_258(2, &uVar0, &uVar1, cParam3, cParam4, uParam5, uParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_257(&uVar0, &uVar1, iParam7, bParam11);
}

int func_257(var uParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x99F5
{
	int iVar0;
	
	Global_3DB9 = 0;
	if (Global_3DB8 == 0 || Global_3DBA == 2)
	{
		if (Global_3DB8 != 0)
		{
			if (iParam2 > Global_3DBA)
			{
				if (bParam3 == 0)
				{
					unk_0x1E08809A5041F85B(false);
					Global_389D.f_1 = 3;
					Global_3DB8 = 0;
					Global_3DB9 = 1;
					Global_3DED = 0;
					Global_3DB4 = 0;
					Global_3DB5 = 0;
				}
				else
				{
					func_175();
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
		if (func_174(8, -1))
		{
			return 0;
		}
		Global_3E04 = { Global_3DFE };
		func_173();
		Global_3AF1 = { Global_3B96 };
		Global_3DBE = Global_3DBF;
		Global_3DC5 = Global_3DC6;
		Global_280002 = Global_280001;
		Global_3DC7 = { Global_3DD7 };
		Global_3DC0 = Global_3DC1;
		Global_4196 = Global_4197;
		Global_419E = { Global_41A4 };
		Global_419C = Global_419D;
		Global_4198 = Global_4199;
		Global_419A = Global_419B;
		Global_3C3B.f_170 = Global_4193;
		Global_3C3B.f_171 = Global_4194;
		Global_3C3B.f_172 = Global_4195;
		Global_3DB4 = Global_3DB5;
		Global_3DB6 = Global_3DB7;
		if (Global_3EBA == 0)
		{
			Global_3E52[0 /*6*/] = { Global_3E6C[0 /*6*/] };
			Global_3E52[1 /*6*/] = { Global_3E6C[1 /*6*/] };
			Global_3E86[0 /*6*/] = { Global_3EA0[0 /*6*/] };
			Global_3E86[1 /*6*/] = { Global_3EA0[1 /*6*/] };
			Global_3E5F[0 /*6*/] = { Global_3E79[0 /*6*/] };
			Global_3E5F[1 /*6*/] = { Global_3E79[1 /*6*/] };
			Global_3E93[0 /*6*/] = { Global_3EAD[0 /*6*/] };
			Global_3E93[1 /*6*/] = { Global_3EAD[1 /*6*/] };
		}
		if (Global_3DBE)
		{
			unk_0x7CB6FD92BE491AD9(&Global_93B, 20);
			unk_0x7CB6FD92BE491AD9(&Global_93C, 17);
			unk_0x7CB6FD92BE491AD9(&Global_93D, 0);
			if (bParam3)
			{
				func_126();
				if (Global_C60[Global_389D /*2811*/][0 /*281*/].f_103 == 2)
				{
					if (iParam2 == 13)
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
				if (func_172())
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
					if (Global_3EBA == 0)
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
			}
			if (func_23())
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
			}
			func_171();
			Global_3DC2 = bParam3;
		}
		Global_3DBA = iParam2;
		if (Global_3DB4 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_3DB4)
			{
				StringCopy(&(Global_3C3B.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_3C3B.f_BB[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_394A = 0;
		func_170();
		return 1;
	}
	if (Global_3DB8 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_3DBA || iParam2 == Global_3DBA)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_175();
	}
	return 0;
}

void func_258(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x9D5F
{
	func_259(iParam0);
	(*uParam1)[0] = uParam3;
	(*uParam2)[0] = uParam4;
	(*uParam1)[1] = uParam5;
	(*uParam2)[1] = uParam6;
	(*uParam1)[2] = iParam7;
	(*uParam2)[2] = iParam8;
	(*uParam1)[3] = iParam9;
	(*uParam2)[3] = iParam10;
	(*uParam1)[4] = iParam11;
	(*uParam2)[4] = iParam12;
	(*uParam1)[5] = iParam13;
	(*uParam2)[5] = iParam14;
	(*uParam1)[6] = iParam15;
	(*uParam2)[6] = iParam16;
}

void func_259(var uParam0)//Position - 0x9DCF
{
	Global_3DB5 = uParam0;
	Global_3DBF = 1;
	Global_3DC6 = 0;
	Global_3DC1 = 0;
	Global_4197 = 0;
	Global_419D = 0;
	Global_280001 = 0;
}

void func_260()//Position - 0x9DF5
{
	Global_3DE8 = 0;
	Global_3DBF = 1;
	Global_3DC6 = 0;
	Global_3DC1 = 0;
	Global_4197 = 0;
	Global_4199 = 0;
	Global_3DC6 = 0;
	Global_419D = 0;
	Global_3DBD = 0;
	Global_3DEC = 0;
	Global_3DEE = 0;
	Global_280001 = 0;
}

struct<16> func_261()//Position - 0x9E2E
{
	struct<16> Var0;
	
	StringCopy(&Var0, "BC_DECR_", 64);
	StringIntConCat(&Var0, uLocal_74[0], 64);
	return Var0;
}

int func_262(int iParam0)//Position - 0x9E4C
{
	if ((Global_4212 || Global_4211) || Global_4213)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return 0;
		}
	}
	if (Global_75[iParam0 /*10*/].f_8 != 144)
	{
		if (Global_389D.f_1 == 10)
		{
			if (Global_68E == iParam0)
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

void func_263(bool bParam0)//Position - 0x9EB0
{
	switch (uLocal_74[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (bParam0)
			{
				func_81("SCLUB_HOME_MEE4", uLocal_74[0]);
			}
			else
			{
				func_81("SCLUB_HOME_MEET", uLocal_74[0]);
			}
			break;
		
		case 8:
			func_81("SCLUB_HOME_LIZ", uLocal_74[0]);
			break;
		
		case 9:
			func_81("SCLUB_HOME_HITCH", uLocal_74[0]);
			break;
	}
}

void func_264(int iParam0)//Position - 0x9F43
{
	if (unk_0x6F79ECA8C83E4357(iParam0) == joaat("s_f_y_stripper_02"))
	{
		func_267(iParam0, 2, unk_0x491B2241281A03B7(0, 3));
		func_266(iParam0, 2, unk_0x491B2241281A03B7(0, 3));
		func_265(iParam0, 0, 0);
	}
}

void func_265(int iParam0, int iParam1, int iParam2)//Position - 0x9F7B
{
	if (unk_0xD83AB2933E4524EA(iParam0, 6, iParam1, iParam2))
	{
		unk_0xB0031DDAE4FF0BC3(iParam0, 6, iParam1, iParam2, 0);
	}
}

void func_266(int iParam0, int iParam1, int iParam2)//Position - 0x9FA0
{
	if (unk_0xD83AB2933E4524EA(iParam0, 3, iParam1, iParam2))
	{
		unk_0xB0031DDAE4FF0BC3(iParam0, 3, iParam1, iParam2, 0);
	}
}

void func_267(int iParam0, int iParam1, int iParam2)//Position - 0x9FC5
{
	if (unk_0xD83AB2933E4524EA(iParam0, 8, iParam1, iParam2))
	{
		unk_0xB0031DDAE4FF0BC3(iParam0, 8, iParam1, iParam2, 0);
	}
}

void func_268(int iParam0, int iParam1, bool bParam2)//Position - 0x9FEC
{
	bool bVar0;
	
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		unk_0xDC3C88A35B53F90B(iParam0);
		bVar0 = false;
		if (unk_0x6F79ECA8C83E4357(iParam0) == joaat("mp_f_stripperlite"))
		{
			bVar0 = true;
		}
		switch (iParam1)
		{
			case 0:
				if (bVar0)
				{
					func_273(iParam0, 1, 0);
					func_272(iParam0, 1, 0);
					func_266(iParam0, 1, 0);
					func_271(iParam0, 1, 0);
					func_270(iParam0, 1, -1, -1);
				}
				else
				{
					func_273(iParam0, 1, 1);
					func_272(iParam0, 2, 0);
					func_266(iParam0, 0, 0);
					func_271(iParam0, 0, 0);
					func_267(iParam0, 1, 0);
					func_269(iParam0, 0, 0);
					func_270(iParam0, bParam2, -1, -1);
				}
				break;
			
			case 1:
				if (bVar0)
				{
					func_273(iParam0, 0, 0);
					func_272(iParam0, 0, 0);
					func_266(iParam0, 0, 0);
					func_271(iParam0, 0, 0);
					func_267(iParam0, 0, 0);
					func_270(iParam0, bParam2, -1, -1);
				}
				else
				{
					func_273(iParam0, 0, 0);
					func_272(iParam0, 0, 0);
					func_266(iParam0, 0, 0);
					func_271(iParam0, 0, 0);
					func_265(iParam0, 4, 0);
					func_267(iParam0, 0, 0);
					func_270(iParam0, bParam2, 0, 4);
				}
				break;
			
			case 2:
				if (bVar0)
				{
					func_273(iParam0, 1, 0);
					func_272(iParam0, 1, 1);
					func_266(iParam0, 1, 0);
					func_271(iParam0, 1, 0);
					func_270(iParam0, 1, -1, -1);
				}
				else
				{
					func_273(iParam0, 0, 1);
					func_272(iParam0, 1, 1);
					func_266(iParam0, 1, 0);
					func_271(iParam0, 1, 1);
					func_267(iParam0, 1, 0);
					func_269(iParam0, 1, 0);
					func_270(iParam0, bParam2, -1, -1);
				}
				break;
			
			case 3:
				if (bVar0)
				{
					func_273(iParam0, 0, 0);
					func_272(iParam0, 0, 1);
					func_266(iParam0, 0, 1);
					func_271(iParam0, 0, 1);
					func_267(iParam0, 0, 0);
					func_270(iParam0, bParam2, -1, -1);
				}
				else
				{
					func_273(iParam0, 0, 0);
					func_272(iParam0, 2, 0);
					func_266(iParam0, 0, 2);
					func_271(iParam0, 1, 1);
					func_265(iParam0, 0, 0);
					func_267(iParam0, 0, 0);
					func_270(iParam0, bParam2, 2, 0);
				}
				break;
			
			case 4:
				if (bVar0)
				{
					func_273(iParam0, 1, 0);
					func_272(iParam0, 1, 0);
					func_266(iParam0, 1, 0);
					func_271(iParam0, 1, 0);
					func_270(iParam0, 1, -1, -1);
				}
				else
				{
					func_273(iParam0, 1, 0);
					func_272(iParam0, 2, 1);
					func_266(iParam0, 1, 2);
					func_271(iParam0, 0, 2);
					func_267(iParam0, 1, 0);
					func_269(iParam0, 1, 2);
					func_270(iParam0, bParam2, -1, -1);
				}
				break;
			
			case 5:
				if (bVar0)
				{
					func_273(iParam0, 0, 0);
					func_272(iParam0, 0, 0);
					func_266(iParam0, 0, 0);
					func_271(iParam0, 0, 0);
					func_267(iParam0, 0, 0);
					func_270(iParam0, bParam2, -1, -1);
				}
				else
				{
					func_273(iParam0, 1, 1);
					func_272(iParam0, 1, 0);
					func_266(iParam0, 0, 1);
					func_271(iParam0, 0, 2);
					func_265(iParam0, 2, 0);
					func_267(iParam0, 0, 0);
					func_270(iParam0, bParam2, 1, 2);
				}
				break;
			
			case 6:
				if (bVar0)
				{
					func_273(iParam0, 1, 0);
					func_272(iParam0, 1, 0);
					func_266(iParam0, 1, 0);
					func_271(iParam0, 1, 0);
					func_270(iParam0, 1, -1, -1);
				}
				else
				{
					func_273(iParam0, 0, 0);
					func_272(iParam0, 1, 0);
					func_266(iParam0, 0, 1);
					func_271(iParam0, 0, 1);
					func_267(iParam0, 1, 0);
					func_269(iParam0, 0, 1);
					func_270(iParam0, bParam2, 0, 1);
				}
				break;
			
			case 7:
				if (bVar0)
				{
					func_273(iParam0, 0, 0);
					func_272(iParam0, 0, 1);
					func_266(iParam0, 0, 0);
					func_271(iParam0, 0, 0);
					func_267(iParam0, 0, 0);
					func_270(iParam0, bParam2, -1, -1);
				}
				else
				{
					func_273(iParam0, 1, 0);
					func_272(iParam0, 0, 2);
					func_266(iParam0, 1, 1);
					func_271(iParam0, 0, 1);
					func_265(iParam0, 0, 0);
					func_267(iParam0, 1, 0);
					func_270(iParam0, bParam2, 0, 0);
				}
				break;
			
			case 8:
				unk_0xB0031DDAE4FF0BC3(iParam0, 3, 2, 0, 0);
				unk_0xB0031DDAE4FF0BC3(iParam0, 4, 0, 1, 0);
				break;
			
			case 9:
				unk_0xB0031DDAE4FF0BC3(iParam0, 0, 0, 1, 0);
				unk_0xB0031DDAE4FF0BC3(iParam0, 2, 0, 1, 0);
				unk_0xB0031DDAE4FF0BC3(iParam0, 3, 0, 0, 0);
				unk_0xB0031DDAE4FF0BC3(iParam0, 4, 0, 1, 0);
				unk_0xB0031DDAE4FF0BC3(iParam0, 8, 1, 0, 0);
				unk_0xB0031DDAE4FF0BC3(iParam0, 10, 0, 0, 0);
				break;
			}
	}
}

void func_269(int iParam0, int iParam1, int iParam2)//Position - 0xA447
{
	if (unk_0xD83AB2933E4524EA(iParam0, 11, iParam1, iParam2))
	{
		unk_0xB0031DDAE4FF0BC3(iParam0, 11, iParam1, iParam2, 0);
	}
}

void func_270(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0xA46E
{
	int iVar0;
	
	if (unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		return;
	}
	iVar0 = unk_0x6F79ECA8C83E4357(iParam0);
	if (iVar0 == func_244(0, 0) || iVar0 == func_244(0, 1))
	{
		if (bParam1)
		{
			func_266(iParam0, 2, 0);
			func_267(iParam0, 1, 0);
		}
	}
	else if (iVar0 == func_244(1, 0) || iVar0 == func_244(1, 1))
	{
		if (bParam1)
		{
			func_266(iParam0, 0, iParam2);
			func_265(iParam0, iParam3, 0);
			func_267(iParam0, 1, 0);
		}
	}
	else if (iVar0 == joaat("mp_f_stripperlite"))
	{
		if (bParam1)
		{
			func_267(iParam0, 1, 0);
		}
	}
}

void func_271(int iParam0, int iParam1, int iParam2)//Position - 0xA512
{
	if (unk_0xD83AB2933E4524EA(iParam0, 4, iParam1, iParam2))
	{
		unk_0xB0031DDAE4FF0BC3(iParam0, 4, iParam1, iParam2, 0);
	}
}

void func_272(int iParam0, int iParam1, int iParam2)//Position - 0xA537
{
	if (unk_0xD83AB2933E4524EA(iParam0, 2, iParam1, iParam2))
	{
		unk_0xB0031DDAE4FF0BC3(iParam0, 2, iParam1, iParam2, 0);
	}
}

void func_273(int iParam0, int iParam1, int iParam2)//Position - 0xA55C
{
	if (unk_0xD83AB2933E4524EA(iParam0, 0, iParam1, iParam2))
	{
		unk_0xB0031DDAE4FF0BC3(iParam0, 0, iParam1, iParam2, 0);
	}
}

int func_274()//Position - 0xA581
{
	if (unk_0xF1734B55490E9045(func_191()))
	{
		return 1;
	}
	else if (unk_0x1E8349F219AC5AF9(func_191()))
	{
		return 1;
	}
	return 0;
}

int func_275(var uParam0)//Position - 0xA5AE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if (!unk_0xD6513D668481290A((*uParam0)[iVar0]))
			{
				if (!unk_0xD6513D668481290A((*uParam0)[iVar0]))
				{
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_276()//Position - 0xA5F5
{
	if (!unk_0xF1734B55490E9045(func_191()))
	{
		unk_0x44840FD68E426678(func_191());
	}
}

void func_277(var uParam0)//Position - 0xA611
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0xF243B7A14FCFD0F4((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_278(var uParam0, int iParam1)//Position - 0xA641
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if ((*uParam0)[iVar0] == iParam1)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_279(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_279(var uParam0)//Position - 0xA69E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_280(int iParam0, bool bParam1)//Position - 0xA6CA
{
	int iVar0;
	
	if (bParam1)
	{
		return joaat("mp_f_stripperlite");
	}
	iVar0 = func_109(iParam0);
	if (iVar0 != 145)
	{
		return func_281(iVar0);
	}
	return func_244(0, 0);
}

int func_281(int iParam0)//Position - 0xA6FD
{
	if (!func_78(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_282()//Position - 0xA728
{
	switch (uLocal_74[0])
	{
		case 1:
			vLocal_285 = { 128.1002f, -1895.001f, 22.4811f };
			vLocal_286 = { 128.1059f, -1896.819f, 22.6792f };
			vLocal_287 = { 133.9411f, -1881.89f, 22.5257f };
			vLocal_288 = { 130.1663f, -1893.057f, 22.3748f };
			vLocal_289 = { 133.4958f, -1891.641f, 22.4252f };
			fLocal_293 = 330.5705f;
			fLocal_294 = 244f;
			vLocal_292 = { 146.293f, -1888.049f, 22.2193f };
			fLocal_295 = fLocal_294;
			break;
		
		case 0:
			vLocal_285 = { -161.9628f, -1636.501f, 33.0339f };
			vLocal_286 = { -159.9415f, -1637.307f, 33.0339f };
			vLocal_287 = { -178.6316f, -1629.522f, 32.1789f };
			vLocal_288 = { -166.1453f, -1633.102f, 32.6574f };
			vLocal_289 = { -166.6636f, -1633.229f, 32.6567f };
			fLocal_293 = 108.072f;
			fLocal_294 = 180.9811f;
			vLocal_292 = { vLocal_287 };
			fLocal_295 = fLocal_294;
			break;
		
		case 4:
			vLocal_285 = { -198.3824f, 87.8785f, 68.7436f };
			vLocal_286 = { -197.2292f, 86.3497f, 68.7561f };
			vLocal_287 = { -200.9078f, 113.537f, 68.5518f };
			vLocal_288 = { -200.1384f, 96.9809f, 68.5203f };
			vLocal_289 = { -199.5068f, 95.7042f, 68.5193f };
			fLocal_293 = 48.99f;
			fLocal_294 = 64.3f;
			vLocal_292 = { vLocal_287 };
			fLocal_295 = fLocal_294;
			break;
		
		case 5:
			vLocal_285 = { -849.0348f, 510.6906f, 89.8218f };
			vLocal_286 = { -849.0408f, 508.5767f, 89.8218f };
			vLocal_287 = { -846.1005f, 520.2202f, 89.6217f };
			vLocal_288 = { -851.8972f, 512.73f, 89.6217f };
			vLocal_289 = { -851.8746f, 513.6746f, 89.6217f };
			fLocal_293 = 92.365f;
			fLocal_294 = 293f;
			vLocal_292 = { -860.4819f, 514.2496f, 88.1473f };
			fLocal_295 = fLocal_294;
			break;
		
		case 8:
			vLocal_285 = { -28.2427f, -1555.892f, 29.6918f };
			vLocal_286 = { -24.8589f, -1556.846f, 29.6819f };
			vLocal_287 = { -41.8174f, -1575.609f, 28.2831f };
			vLocal_288 = { -25.3404f, -1556.341f, 29.6919f };
			vLocal_289 = { -27.7382f, -1570.572f, 29.3f };
			fLocal_293 = 181.352f;
			fLocal_294 = 47.9206f;
			vLocal_292 = { vLocal_287 };
			fLocal_295 = fLocal_294;
			break;
		
		case 9:
			vLocal_285 = { 3313.487f, 5175.831f, 18.619f };
			vLocal_286 = { 3310.816f, 5176.331f, 18.619f };
			vLocal_287 = { 3334.321f, 5161.122f, 17.2996f };
			vLocal_288 = { 3317.788f, 5171.707f, 17.4471f };
			vLocal_289 = { 3318.076f, 5171.805f, 17.4385f };
			fLocal_293 = 236.4579f;
			vLocal_292 = { 3322.927f, 5148.607f, 17.3141f };
			fLocal_295 = 310.8648f;
			break;
	}
}

int func_283()//Position - 0xAAA0
{
	switch (uLocal_74[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (bLocal_304)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

int func_284(int iParam0, int iParam1, bool bParam2)//Position - 0xAAFE
{
	int iVar0;
	
	iVar0 = unk_0x4796DAD7A8894E2F();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_288();
			}
			else
			{
				return 0;
			}
		}
		if (!func_287())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x7AF0088ABFA713B6())
				{
					if (!bParam2)
					{
						func_288();
					}
					else
					{
						return 0;
					}
				}
				if (func_286())
				{
					if (!bParam2)
					{
						func_288();
					}
					else
					{
						return 0;
					}
				}
				if (func_285(155))
				{
					if (!bParam2)
					{
						func_288();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xF5F5C6DD66B0FB2A())
			{
				if (!bParam2)
				{
					func_288();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = unk_0x4796DAD7A8894E2F();
	}
	if (iParam1 > -1)
	{
		Global_1406F4 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			if (!bParam2)
			{
				func_288();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xF5F5C6DD66B0FB2A())
	{
		if (!bParam2)
		{
			func_288();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_285(int iParam0)//Position - 0xAC13
{
	if (unk_0xA1AC399BCBEE5B2D(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_286()//Position - 0xAC2A
{
	return Global_255A46.f_245;
}

bool func_287()//Position - 0xAC39
{
	return Global_14083F;
}

void func_288()//Position - 0xAC45
{
	unk_0x95E4B6F3ED223F5A();
}

void func_289()//Position - 0xAC51
{
	unk_0xEF23FCC849B5EB47(0);
	unk_0xF7D229BABED096C4();
	func_83();
	unk_0xEB233A3B7635D2AC();
	unk_0x483687B0FCA5415A(iLocal_284, 0);
	unk_0x379ACE23D404525C(vLocal_287 - Vector(3f, 3f, 3f), vLocal_287 + Vector(3f, 3f, 3f), true, 1);
	unk_0x4806A94C8ED574C3(vLocal_287 - Vector(3f, 3f, 3f), vLocal_287 + Vector(3f, 3f, 3f), 15f, 1);
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
	}
	unk_0x062C9995BFD27B2A(false, false, 3000, 1, 0, 0);
	if (unk_0x724D816EA203A79E(iLocal_271[0]))
	{
		if (!unk_0x1D403DFADBC2DE3C(iLocal_271[0], 0))
		{
			if (!func_253(uLocal_300, 8192))
			{
				unk_0x8CE2798B9A7027EC(iLocal_271[0], 1193033728, 0);
			}
			unk_0x22321800954A532E(iLocal_271[0], true);
			if (!unk_0x4EE7377FBE72B4BC(iLocal_70))
			{
				unk_0xB2CB6EAA6B280A84("BootyCall", &iLocal_70);
			}
			unk_0xA902E18EDF6FA0C8(2, iLocal_70, 1862763509);
			unk_0xA902E18EDF6FA0C8(2, 1862763509, iLocal_70);
			unk_0x4106FAF8AA1D69D5(iLocal_271[0], iLocal_70);
		}
		unk_0x02537C8C1BEEB477(&(iLocal_271[0]));
	}
	if (iLocal_299 != -1)
	{
		func_291(&iLocal_299);
	}
	if (bLocal_69)
	{
		func_135(&uLocal_68);
	}
	unk_0x0587BE45519E406A(unk_0xB5CEFD608600A09F(), 0);
	func_118(uLocal_74[0], -1);
	Global_19716 = 0;
	func_290(0);
	unk_0x95E4B6F3ED223F5A();
}

void func_290(bool bParam0)//Position - 0xAD89
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 49)
	{
		func_215(iVar0, bParam0);
		iVar0++;
	}
}

void func_291(int iParam0)//Position - 0xADAC
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

