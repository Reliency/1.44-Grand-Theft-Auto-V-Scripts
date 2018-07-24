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
	vector3 vLocal_45 = { 0f, 0f, 0f };
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	struct<16> Local_51 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<16> Local_52 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_53 = 0;
	var uLocal_54 = 0;
	vector3 vLocal_55 = { 0f, 0f, 0f };
	vector3 vLocal_56 = { 0f, 0f, 0f };
	float fLocal_57 = 0f;
	var uLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	char* sLocal_65 = NULL;
	float fLocal_66 = 0f;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	float fLocal_74 = 0f;
	vector3 vLocal_75 = { 0f, 0f, 0f };
	vector3 vLocal_76 = { 0f, 0f, 0f };
	float fLocal_77 = 0f;
	var uLocal_78 = 1;
	var uLocal_79 = 0;
	var uLocal_80 = 1;
	var uLocal_81 = 0;
	int iLocal_82 = 0;
	vector3 vLocal_83 = { 0f, 0f, 0f };
	var uLocal_84 = 0;
	var uLocal_85 = 16;
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
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	int iLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	bool bLocal_254 = 0;
	int iLocal_255 = 0;
	int iLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	struct<2> Local_261 = { 0, 5 } ;
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
	var uLocal_277 = 5;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
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
	vLocal_45 = { 500f, 500f, 500f };
	iLocal_60 = -1;
	iLocal_61 = 2050;
	iLocal_62 = -1;
	iLocal_63 = -1;
	sLocal_65 = "CC_SUBSTR";
	fLocal_66 = 125f;
	iLocal_67 = 1;
	iLocal_69 = 263;
	fLocal_77 = 4f;
	vLocal_56 = { ScriptParam_261.f_1[0 /*3*/] };
	vLocal_56 = { vLocal_56 };
	uLocal_54 = uLocal_54;
	Local_52 = { Local_52 };
	bVar0 = false;
	if (unk_0xE8A79675302ED812(114))
	{
		func_138(1);
	}
	iLocal_53 = unk_0xA95CF30C72EB526E(unk_0xB5CEFD608600A09F());
	iLocal_59 = 0;
	func_136(&Global_195BF, 0);
	func_130();
	unk_0x80BDE252D8D954BC(1);
	if (func_129(uLocal_58, 1))
	{
		iLocal_64 = 10;
	}
	else
	{
		iLocal_64 = 9;
	}
	while (!Global_7BBB)
	{
		SYSTEM::WAIT(0);
	}
	if (!func_129(uLocal_58, 8))
	{
		if (!func_127(iLocal_64))
		{
			if (func_126(0, iLocal_63))
			{
				func_138(0);
			}
			else
			{
				func_138(1);
			}
		}
	}
	if (iLocal_63 != -1)
	{
		if (!func_126(0, iLocal_63))
		{
			func_138(1);
		}
	}
	if (func_129(uLocal_58, 8388608))
	{
		func_138(1);
	}
	if (func_129(uLocal_58, 524288) && (func_125() && !func_124()))
	{
		func_138(1);
	}
	if (unk_0xB731B8C5BCE89836(unk_0x2C087518F90303D5()) > 1 && !func_129(uLocal_58, 4194304))
	{
		if (iLocal_69 != 263)
		{
			func_123(iLocal_69, 1, 0);
			iLocal_69 = 263;
		}
		func_122(10);
	}
	while (true)
	{
		if (Global_3)
		{
			func_138(1);
		}
		iLocal_53 = unk_0xA95CF30C72EB526E(unk_0xB5CEFD608600A09F());
		if (func_129(uLocal_58, 1048576))
		{
			if (unk_0x1D403DFADBC2DE3C(iLocal_53, 0))
			{
				func_138(1);
			}
		}
		if (unk_0x724D816EA203A79E(iLocal_53) && !unk_0x1D403DFADBC2DE3C(iLocal_53, 0))
		{
			vLocal_55 = { unk_0x541C2AEF053615BC(iLocal_53, true) };
			fLocal_57 = SYSTEM::VDIST2(vLocal_55, ScriptParam_261.f_1[0 /*3*/]);
			fLocal_57 = fLocal_57;
			vLocal_75 = { vLocal_55 };
			vLocal_76 = { ScriptParam_261.f_1[0 /*3*/] };
			vLocal_75.z = 0f;
			vLocal_76.z = 0f;
			fLocal_74 = SYSTEM::VDIST2(vLocal_75, vLocal_76);
			switch (iLocal_59)
			{
				case 0:
					if (func_127(iLocal_64) || (func_129(uLocal_58, 16) && !func_129(uLocal_58, 524288)))
					{
						iLocal_62 = -1;
						func_118();
						func_122(1);
					}
					else
					{
						if (fLocal_74 > (fLocal_66 * fLocal_66))
						{
							if (iLocal_69 != 263)
							{
								func_123(iLocal_69, 1, 0);
								iLocal_69 = 263;
							}
							func_122(10);
						}
						if ((vLocal_55.z - ScriptParam_261.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_116())
					{
						iLocal_67 = iLocal_67;
						func_122(3);
					}
					else
					{
						func_118();
					}
					break;
				
				case 3:
					if (unk_0xF5F5C6DD66B0FB2A())
					{
						func_138(1);
						return;
					}
					if (!func_127(iLocal_64))
					{
						if (!func_129(uLocal_58, 8))
						{
							bVar1 = true;
							if (unk_0x3362CDE8460ED38B(&(Global_16B1B.f_3), &Local_52))
							{
								Local_52 = { Local_51 };
								bVar1 = false;
							}
							if (bVar1)
							{
								func_138(0);
								break;
							}
						}
					}
					if (!func_129(uLocal_58, 4))
					{
						func_113();
						func_112(&uLocal_58, 4);
					}
					if (fLocal_74 > (fLocal_66 * fLocal_66) && !Global_16B3D)
					{
						if (iLocal_69 != 263)
						{
							if (func_111(6) && !func_110(iLocal_69))
							{
							}
							else
							{
								func_123(iLocal_69, 1, 0);
								iLocal_69 = 263;
							}
						}
						func_122(10);
					}
					else
					{
						Local_52 = { Local_51 };
						bVar2 = !func_129(uLocal_58, 64);
						func_136(&uLocal_58, 128);
						if (!func_109(3) && !Global_16B3D)
						{
							if (func_129(uLocal_58, 2097152))
							{
								if ((!func_129(uLocal_58, 1) || !unk_0x724D816EA203A79E(func_108())) && !Global_16B3D)
								{
									func_122(10);
									break;
								}
							}
						}
						if (func_129(uLocal_58, 524288) && (func_125() && !func_124()))
						{
							func_138(1);
						}
						if (func_107())
						{
							func_138(1);
						}
						if ((!func_99(6) || Global_1974B) || func_98())
						{
							bVar2 = false;
						}
						if (func_129(uLocal_58, 1))
						{
							if (!func_97())
							{
								func_95(&uLocal_58, 128);
								bVar2 = false;
							}
						}
						if (func_94(1))
						{
							bVar2 = false;
						}
						if (Global_11542)
						{
							bVar2 = false;
						}
						if (func_93())
						{
							bVar2 = false;
						}
						if (unk_0x7930B3E9C919E90F())
						{
							bVar2 = false;
						}
						if (func_92() || func_91(8, -1))
						{
							bVar2 = false;
						}
						if (!unk_0xDB625D1720DAC49A(unk_0xB5CEFD608600A09F()))
						{
							bVar2 = false;
						}
						if (!unk_0xE7A89C39746A63AC(unk_0xB5CEFD608600A09F()))
						{
							bVar2 = false;
						}
						if (func_90(0) || func_89())
						{
							bVar2 = false;
						}
						if (bVar2)
						{
							if (!unk_0x4DBCE270B354E123(iLocal_53, ScriptParam_261.f_1[0 /*3*/], fLocal_77, fLocal_77, 2f, false, true, iLocal_67))
							{
								bVar2 = false;
							}
							if (!unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()))
							{
								bVar2 = false;
							}
							if (bVar2)
							{
								unk_0xD55638CE45B2B948(0, 51);
								if (func_88(uLocal_54))
								{
									if (iLocal_60 == -1)
									{
										func_87(&iLocal_60, 4, sLocal_65, 0, 0, 0, 0);
										func_95(&uLocal_58, 2048);
									}
									else if (!func_129(uLocal_58, 2048) || !unk_0xF16DAFF595E80F7C())
									{
										func_86(&iLocal_60);
										func_136(&uLocal_58, 2048);
									}
									if (func_84(iLocal_60, 1))
									{
										sLocal_65 = sLocal_65;
										func_86(&iLocal_60);
										func_136(&uLocal_58, 2048);
										unk_0x63831D2D5110C305(&Local_52);
										unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 56);
										func_122(5);
									}
								}
								else
								{
									sLocal_65 = sLocal_65;
									func_86(&iLocal_60);
									func_136(&uLocal_58, 2048);
									unk_0x63831D2D5110C305(&Local_52);
									unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 56);
									func_122(5);
								}
							}
						}
						if (!bVar2)
						{
							if (iLocal_60 != -1)
							{
								func_86(&iLocal_60);
								func_136(&uLocal_58, 2048);
								unk_0x7456702622C62EA0(0);
							}
						}
					}
					func_81();
					break;
				
				case 5:
					unk_0xD55638CE45B2B948(0, 51);
					if (unk_0xACE95AD318CE412B(&Local_52))
					{
						if (iLocal_60 != -1)
						{
							func_86(&iLocal_60);
						}
						iVar3 = 2;
						bVar0 = false;
						if (func_129(uLocal_58, 1))
						{
							if (func_111(6) || func_111(7))
							{
								iVar3 = 1;
								bVar0 = true;
							}
						}
						if (iVar3 != 1)
						{
							iVar3 = func_78(&iLocal_62, 6, iLocal_64, 0, 0);
						}
						if (iVar3 == 1)
						{
							if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
							{
								unk_0xA98B19EC1C93FC3C(unk_0xB5CEFD608600A09F());
							}
							func_77();
							if (Global_90C1)
							{
								func_68(unk_0xBC25C936A095B5BA());
							}
							unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 56);
							iLocal_50 = func_24();
							func_95(&uLocal_58, 2);
							func_122(6);
							func_20(&iLocal_71);
							if (iLocal_63 != -1)
							{
								func_19(iLocal_63);
								func_16(func_18(iLocal_63), 0, 0);
							}
						}
						else if (iVar3 == 2)
						{
							func_15();
						}
						else if (iVar3 == 0)
						{
							func_122(10);
						}
					}
					else
					{
						func_15();
					}
					break;
				
				case 6:
					if (func_129(Global_195BF, 262144))
					{
						func_136(&Global_195BF, 262144);
						func_14();
					}
					if (func_129(uLocal_58, 2097152))
					{
						if (!func_109(3) && !unk_0x3C406FC829C1E14A(iLocal_50))
						{
							func_122(10);
						}
					}
					if (!unk_0x3C406FC829C1E14A(iLocal_50))
					{
						unk_0x739C5CCC39AE3137(SYSTEM::ROUND((func_10(&iLocal_71) * 1000f)), iLocal_63, 0);
						func_9(&iLocal_71);
						func_136(&uLocal_58, 256);
						func_8();
						if (bVar0)
						{
							func_136(&uLocal_58, 2);
						}
						else if (func_129(uLocal_58, 2))
						{
							if (func_129(Global_195BF, 0))
							{
								func_7(&iLocal_62);
								iLocal_62 = -1;
								func_136(&uLocal_58, 2);
							}
							else
							{
								func_7(&iLocal_62);
								iLocal_62 = -1;
								func_136(&uLocal_58, 2);
							}
						}
						func_122(0);
						if (iLocal_63 != -1)
						{
							if (func_129(Global_195BF, 0))
							{
								unk_0x1B7435D54924A668(func_18(iLocal_63), 0, Global_16B40, 0);
								func_6(func_18(iLocal_63), 0, Global_16B40, 1, 0);
							}
							else
							{
								unk_0x1B7435D54924A668(func_18(iLocal_63), 0, Global_16B40, 0);
								func_6(func_18(iLocal_63), 0, Global_16B40, 0, 0);
							}
						}
						func_5();
						func_136(&Global_195BF, 0);
						if (func_129(uLocal_58, 16777216))
						{
							func_138(1);
						}
						if (iLocal_63 != -1)
						{
							if (Global_19B04.f_2360)
							{
								if (!func_126(0, iLocal_63))
								{
									func_138(1);
								}
							}
						}
					}
					func_4();
					break;
				
				case 8:
					func_122(0);
					break;
				
				case 10:
					func_138(1);
					break;
				
				case 9:
					if (fLocal_74 > (fLocal_66 * fLocal_66))
					{
						if (iLocal_69 != 263)
						{
							func_123(iLocal_69, 1, 0);
							iLocal_69 = 263;
						}
						func_122(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_69 != 263)
					{
						func_123(iLocal_69, 0, 0);
					}
					if (iLocal_60 != -1)
					{
						func_86(&iLocal_60);
					}
					if (!unk_0xF1734B55490E9045(sLocal_65))
					{
						if (func_1(sLocal_65))
						{
							unk_0x7456702622C62EA0(1);
						}
					}
					func_122(4);
					break;
				
				case 4:
					if ((iLocal_68 % 150) == 0)
					{
						if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
						{
							if (iLocal_70 == 2)
							{
								if (iLocal_70 == 2)
								{
									if (func_127(iLocal_64) && func_126(0, iLocal_63))
									{
										func_130();
										if (iLocal_69 != 263)
										{
											func_123(iLocal_69, 1, 0);
										}
										func_122(0);
									}
								}
							}
							else if (iLocal_70 == 0)
							{
								if (fLocal_74 > (fLocal_66 * fLocal_66))
								{
									if (iLocal_69 != 263)
									{
										func_123(iLocal_69, 1, 0);
										iLocal_69 = 263;
									}
									func_122(10);
								}
							}
							else if (iLocal_70 == 1)
							{
								if (fLocal_74 > ((80f + 5f) * (80f + 5f)))
								{
									func_130();
									if (iLocal_69 != 263)
									{
										func_123(iLocal_69, 1, 0);
									}
									func_122(0);
								}
							}
						}
						else
						{
							func_123(iLocal_69, 1, 0);
						}
					}
					else
					{
						iLocal_68++;
					}
					break;
				}
		}
		SYSTEM::WAIT(0);
	}
}

int func_1(char* sParam0)//Position - 0x9EB
{
	unk_0xF07D20149ECBC61E(sParam0);
	return unk_0xA66DBDA0A072514A(0);
}

void func_2()//Position - 0x9FE
{
	func_3(&uLocal_78);
	func_3(&uLocal_80);
	unk_0x4EA570997E107F35("pickup_object");
	unk_0x4EA570997E107F35("oddjobs@basejump@ig_15");
}

void func_3(var uParam0)//Position - 0xA20
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0x2CA123B0622F495C((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_4()//Position - 0xA50
{
}

void func_5()//Position - 0xA58
{
}

void func_6(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xA60
{
	if (unk_0xF1734B55490E9045(&Global_1603A))
	{
		return;
	}
	if (unk_0xB0A59416DB2992B5(sParam0, &Global_1603A, 0, -1) != 0)
	{
		return;
	}
	unk_0x857F9926E7882AF4(sParam0, iParam1, iParam2, iParam3, iParam4, Global_154ED);
	StringCopy(&Global_1603A, "", 64);
}

void func_7(int iParam0)//Position - 0xAA4
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

void func_8()//Position - 0xAE1
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

void func_9(int iParam0)//Position - 0xB23
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

float func_10(int iParam0)//Position - 0xB39
{
	if (func_13(iParam0))
	{
		if (func_12(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_11(unk_0xFA30DFD0084E92FE(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_11(bool bParam0)//Position - 0xB78
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

bool func_12(var uParam0)//Position - 0xBD0
{
	return unk_0xFA30DFD0084E92FE(*uParam0, 2);
}

bool func_13(var uParam0)//Position - 0xBE0
{
	return unk_0xFA30DFD0084E92FE(*uParam0, 1);
}

int func_14()//Position - 0xBF0
{
	return 1;
}

void func_15()//Position - 0xBF9
{
}

void func_16(char* sParam0, int iParam1, int iParam2)//Position - 0xC01
{
	if (!unk_0xF1734B55490E9045(&Global_1603A))
	{
		unk_0x857F9926E7882AF4(&Global_1603A, 0, 0, 0, 1, 0);
		StringCopy(&Global_1603A, "", 64);
	}
	StringCopy(&Global_1603A, sParam0, 64);
	unk_0xFC3106D886D77FE2(sParam0, iParam1, iParam2, func_17(0));
}

bool func_17(bool bParam0)//Position - 0xC42
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_1163A, 0);
}

char* func_18(int iParam0)//Position - 0xC6D
{
	switch (iParam0)
	{
		case 0:
			return "OJBJ";
			break;
		
		case 1:
			return "MGDT";
			break;
		
		case 2:
			return "MGGF";
			break;
		
		case 3:
			return "OJHU";
			break;
		
		case 4:
			return "MGOR";
			break;
		
		case 5:
			return "MGPS";
			break;
		
		case 6:
			return "MGRP";
			break;
		
		case 7:
			return "MGSEA";
			break;
		
		case 8:
			return "MGSTR";
			break;
		
		case 9:
			return "MGSC";
			break;
		
		case 10:
			return "MGSP";
			break;
		
		case 11:
			return "MGSRm";
			break;
		
		case 12:
			return "OJTX";
			break;
		
		case 13:
			return "MGTN";
			break;
		
		case 14:
			return "OJTW";
			break;
		
		case 15:
			return "OJDA";
			break;
		
		case 16:
			return "OJDG";
			break;
		
		case 17:
			return "MGTR";
			break;
		
		case 18:
			return "MGYG";
			break;
		
		case 19:
			return "MGCR";
			break;
	}
	return "INVALID!";
}

void func_19(int iParam0)//Position - 0xDAB
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

void func_20(int iParam0)//Position - 0xE02
{
	if (!func_13(iParam0))
	{
		func_23(iParam0);
	}
	else
	{
		func_21(iParam0);
	}
}

void func_21(int iParam0)//Position - 0xE23
{
	func_22(iParam0, 0f);
}

void func_22(int iParam0, float fParam1)//Position - 0xE32
{
	iParam0->f_1 = (func_11(unk_0xFA30DFD0084E92FE(*iParam0, 4)) - fParam1);
	unk_0xF0059F27F7BB6680(iParam0, 1);
	unk_0x7CB6FD92BE491AD9(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_23(int iParam0)//Position - 0xE60
{
	if (!func_13(iParam0))
	{
		func_21(iParam0);
	}
}

int func_24()//Position - 0xE78
{
	int iVar0;
	
	Global_19B04.f_49FA = iLocal_82;
	switch (iLocal_82)
	{
		case 4:
		case 8:
			func_25(1);
			break;
		
		case 5:
		case 12:
		case 6:
			func_25(0);
			break;
		
		default:
			break;
	}
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0x2E9860A2B72187F5(unk_0xBC25C936A095B5BA(), 177, true);
	}
	iVar0 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS(&Local_51, &vLocal_83, 170, iLocal_61);
	unk_0x91DEC7187FA01089(&Local_51);
	return iVar0;
}

void func_25(bool bParam0)//Position - 0xEEF
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	float fVar7;
	bool bVar8;
	
	vVar6 = { func_67(iLocal_82) };
	vVar6 = { func_66(SYSTEM::COS(vVar6.z), SYSTEM::SIN(vVar6.z), unk_0x934CB3CB3BED1B3B(vVar6.x)) };
	unk_0x5C4048C4641BDB16(func_65(iLocal_82), vVar6, 5000f, 0);
	unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 256);
	unk_0x59B038076F830627(false);
	unk_0x43F06392C4EF25E0(false);
	func_63(1);
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0x8E25082A46F87892(unk_0xBC25C936A095B5BA(), joaat("weapon_unarmed"), true);
		unk_0x2E9860A2B72187F5(unk_0xBC25C936A095B5BA(), 177, true);
		if (unk_0x8910237449BB6F79(unk_0xBC25C936A095B5BA()) > 0.3f)
		{
			unk_0xDE2D2B13F24A979D(unk_0xBC25C936A095B5BA(), -1);
			while (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0) && unk_0x8910237449BB6F79(unk_0xBC25C936A095B5BA()) > 0.3f)
			{
				SYSTEM::WAIT(0);
				if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
				{
					unk_0x2E9860A2B72187F5(unk_0xBC25C936A095B5BA(), 177, true);
				}
			}
		}
		if (unk_0x724D816EA203A79E(iLocal_255))
		{
			vVar4 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) - unk_0x541C2AEF053615BC(iLocal_255, false) };
			vVar4.z = 0f;
			fVar7 = SYSTEM::VMAG(vVar4);
			unk_0xC5A6DFE2B8987B17(&iVar1);
			if (fVar7 > 0.8f)
			{
				vVar4 = { vVar4 * FtoV((0.78f / fVar7)) };
				vVar5 = { unk_0x541C2AEF053615BC(iLocal_255, false) + vVar4 };
				if (iLocal_82 == 12)
				{
					unk_0x346129B364057FF6(0, vVar5, 1f, 20000, 1048576000, 0, func_62(vVar5, unk_0x541C2AEF053615BC(iLocal_255, false)));
				}
				else
				{
					unk_0xDF14F570C0180463(0, vVar5, 1f, -1, func_62(vVar5, unk_0x541C2AEF053615BC(iLocal_255, false)), 0.5f);
				}
			}
			else if (fVar7 > 0.15f)
			{
				unk_0xC0FDCDB0DF739C50(0, func_62(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), unk_0x541C2AEF053615BC(iLocal_255, false)), 0);
			}
			unk_0xE896C0AD02364F2A(0, "pickup_object", "pickup_low", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0x535008C596714F9E(iVar1);
			if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
			{
				unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
				unk_0x2E9860A2B72187F5(unk_0xBC25C936A095B5BA(), 177, true);
				unk_0xA8E6405305C0D7DF(unk_0xBC25C936A095B5BA(), iVar1);
			}
			unk_0x02DAF06EA4F08219(&iVar1);
			func_63(1);
		}
	}
	func_23(&iLocal_251);
	while ((func_10(&iLocal_251) < 6f && !unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0)) && !unk_0x96044E39418AAF17(unk_0xBC25C936A095B5BA(), "pickup_object", "pickup_low", 3))
	{
		unk_0x2E9860A2B72187F5(unk_0xBC25C936A095B5BA(), 177, true);
		SYSTEM::WAIT(0);
	}
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0) && unk_0x96044E39418AAF17(unk_0xBC25C936A095B5BA(), "pickup_object", "pickup_low", 3))
	{
		unk_0x1D3127CFE7D9B190(unk_0xBC25C936A095B5BA(), "pickup_object", "pickup_low", 0.8f);
		bVar8 = true;
	}
	while ((func_10(&iLocal_251) < 6f && !unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0)) && unk_0x4A3B2CF8BADDD74E(unk_0xBC25C936A095B5BA(), "pickup_object", "pickup_low") < 0.22f)
	{
		unk_0x2E9860A2B72187F5(unk_0xBC25C936A095B5BA(), 177, true);
		if (!bVar8 && unk_0x96044E39418AAF17(unk_0xBC25C936A095B5BA(), "pickup_object", "pickup_low", 3))
		{
			unk_0x1D3127CFE7D9B190(unk_0xBC25C936A095B5BA(), "pickup_object", "pickup_low", 0.8f);
			bVar8 = true;
		}
		SYSTEM::WAIT(0);
	}
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		if (!bVar8 && unk_0x96044E39418AAF17(unk_0xBC25C936A095B5BA(), "pickup_object", "pickup_low", 3))
		{
			unk_0x1D3127CFE7D9B190(unk_0xBC25C936A095B5BA(), "pickup_object", "pickup_low", 0.7f);
			bVar8 = true;
		}
		unk_0x2E9860A2B72187F5(unk_0xBC25C936A095B5BA(), 177, true);
	}
	func_9(&iLocal_251);
	func_40();
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (func_35() == 0)
		{
			unk_0xB0031DDAE4FF0BC3(unk_0xBC25C936A095B5BA(), 9, 5, 0, 0);
		}
		else if (func_35() == 1)
		{
			unk_0xB0031DDAE4FF0BC3(unk_0xBC25C936A095B5BA(), 8, 1, 0, 0);
		}
		else if (func_35() == 2)
		{
			unk_0xB0031DDAE4FF0BC3(unk_0xBC25C936A095B5BA(), 8, 3, 0, 0);
		}
	}
	if (bParam0)
	{
		if (!func_33(func_34(iLocal_82)) && !unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
			unk_0x346129B364057FF6(unk_0xBC25C936A095B5BA(), func_34(iLocal_82), 1f, -1, 1048576000, 0, 1193033728);
		}
		if (unk_0x724D816EA203A79E(iLocal_255))
		{
			unk_0xA35241BCE4C1A24B(&iLocal_255);
		}
		iVar2 = unk_0x585DE1CBEEB2D27D(26379945, func_32(iLocal_82), func_31(iLocal_82), func_30(iLocal_82), 1, 2);
		iVar3 = unk_0x585DE1CBEEB2D27D(26379945, func_29(iLocal_82), func_28(iLocal_82), func_27(iLocal_82), 0, 2);
		unk_0x062C9995BFD27B2A(true, false, 3000, 1, 0, 0);
		unk_0xB894B4FCE4CAF36E("HAND_SHAKE", 0.2f);
		func_23(&iVar0);
		while (func_10(&iVar0) < 1.5f)
		{
			SYSTEM::WAIT(0);
		}
		unk_0xAE099C1ADC89C331(iVar3, iVar2, func_26(iLocal_82), 1, 1);
		func_21(&iVar0);
		while (func_10(&iVar0) < ((SYSTEM::TO_FLOAT(func_26(iLocal_82)) / 1000f) + 0.3f))
		{
			if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
			{
				unk_0x2E9860A2B72187F5(unk_0xBC25C936A095B5BA(), 177, true);
			}
			SYSTEM::WAIT(0);
		}
	}
	else
	{
		vLocal_83.z = iLocal_255;
	}
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0x2E9860A2B72187F5(unk_0xBC25C936A095B5BA(), 177, true);
	}
}

int func_26(int iParam0)//Position - 0x13DB
{
	switch (iParam0)
	{
		case 4:
		case 8:
			return 3500;
			break;
	}
	return 0;
}

float func_27(int iParam0)//Position - 0x1400
{
	switch (iParam0)
	{
		case 4:
			return 50f;
		
		case 8:
			return 50f;
		
		default:
	}
	return 60f;
}

Vector3 func_28(int iParam0)//Position - 0x1430
{
	switch (iParam0)
	{
		case 4:
			return 58.4197f, 0f, -47.9402f;
		
		case 8:
			return 47.6798f, 0f, -55.2921f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_29(int iParam0)//Position - 0x146A
{
	switch (iParam0)
	{
		case 4:
			return -119.8524f, -866.9928f, 42.3211f;
		
		case 8:
			return -846.0496f, 277.5203f, 92.9133f;
		
		default:
	}
	return 0f, 0f, 0f;
}

float func_30(int iParam0)//Position - 0x14AC
{
	switch (iParam0)
	{
		case 4:
			return 50f;
		
		case 8:
			return 50f;
		
		default:
	}
	return 60f;
}

Vector3 func_31(int iParam0)//Position - 0x14DC
{
	switch (iParam0)
	{
		case 4:
			return -4.0151f, 0f, -47.5544f;
		
		case 8:
			return 2.5127f, 0f, -55.2921f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_32(int iParam0)//Position - 0x1516
{
	switch (iParam0)
	{
		case 4:
			return -119.8524f, -866.9928f, 42.3211f;
		
		case 8:
			return -846.0496f, 277.5203f, 92.9133f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_33(vector3 vParam0)//Position - 0x1558
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_34(int iParam0)//Position - 0x1582
{
	switch (iParam0)
	{
		case 4:
			return -83.4741f, -835.4191f, 39.5575f;
		
		case 8:
			return -772.8513f, 312.9656f, 84.6996f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_35()//Position - 0x15C4
{
	func_36();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_36()//Position - 0x15DD
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_39(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_38(unk_0xBC25C936A095B5BA());
			if (func_37(iVar0) && (!func_111(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_37(Global_19B04.f_932.f_21B.f_10CD))
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

bool func_37(int iParam0)//Position - 0x16DA
{
	return iParam0 < 3;
}

int func_38(int iParam0)//Position - 0x16E6
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_39(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_39(int iParam0)//Position - 0x1723
{
	if (func_37(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_40()//Position - 0x174D
{
	vector3 vVar0;
	var uVar1;
	vector3 vVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		return;
	}
	unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 0);
	if (unk_0x724D816EA203A79E(iLocal_255))
	{
		unk_0xA35241BCE4C1A24B(&iLocal_255);
	}
	func_48(0, 0, 1);
	iLocal_255 = unk_0x1E0CB5BD6231AB3D(joaat("p_parachute_s"), func_47(iLocal_82), true, true, false);
	unk_0x784C605D172817C8(iLocal_255, func_46(iLocal_82), 2, 1);
	func_41(&vVar0, &uVar1);
	vVar2 = { 0f, 0f, uVar1 };
	iVar3 = unk_0xD0D858E538FD01C3(vVar0, vVar2, 2);
	unk_0xBEBE356CCD6268A1(iLocal_255, iVar3, "puton_parachute_bag", "oddjobs@basejump@ig_15", 1000f, -1000f, 1, 1148846080);
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
		unk_0xB62398E536F695FC(unk_0xBC25C936A095B5BA(), iVar3, "oddjobs@basejump@ig_15", "puton_parachute", 1000f, -1000f, 0, 0, 1148846080, 0);
	}
	unk_0xC4BA30B532FE260F(-1, "Grab_Parachute", "BASEJUMPS_SOUNDS", true);
	iVar4 = unk_0x578D5D08EC980893("DEFAULT_ANIMATED_CAMERA", false);
	unk_0xA4DB448107C6D171(iVar4, iVar3, "puton_parachute_cam", "oddjobs@basejump@ig_15");
	unk_0x348665177DBFB93B(iVar4, true);
	unk_0x062C9995BFD27B2A(true, false, 3000, 1, 0, 0);
	while (unk_0x8FD30584EB38411B(iVar3) < 0.6f)
	{
		SYSTEM::WAIT(0);
	}
	unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
}

void func_41(var uParam0, var uParam1)//Position - 0x187B
{
	*uParam0 = { func_45(iLocal_82) };
	switch (iLocal_82)
	{
		case 5:
			*uParam1 = -1.8f;
			break;
		
		case 4:
			*uParam1 = func_44(func_62(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), *uParam0), -180f, 180f);
			if (*uParam1 > 0f)
			{
				*uParam1 = func_43(*uParam1, 111.6f);
			}
			else
			{
				*uParam1 = func_42(*uParam1, -104.04f);
			}
			break;
		
		case 8:
			*uParam1 = func_44(func_62(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), *uParam0), -180f, 180f);
			if (*uParam1 > 0f)
			{
				*uParam1 = func_43(*uParam1, 79.28f);
			}
			else
			{
				*uParam1 = func_42(*uParam1, -8f);
			}
			break;
		
		case 6:
			*uParam1 = func_44(func_62(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), *uParam0), -180f, 180f);
			break;
		
		case 12:
			*uParam1 = func_44(func_62(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), *uParam0), -180f, 180f);
			break;
	}
}

float func_42(float fParam0, float fParam1)//Position - 0x19A3
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

float func_43(float fParam0, float fParam1)//Position - 0x19BA
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

float func_44(float fParam0, float fParam1, float fParam2)//Position - 0x19D1
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

Vector3 func_45(int iParam0)//Position - 0x1A13
{
	switch (iParam0)
	{
		case 0:
			return -829.3729f, -1289.817f, 4.0005f;
		
		case 1:
			return 1208.2f, 174.3914f, 80.1245f;
		
		case 2:
			return 2463.793f, 1509.956f, 35.0349f;
		
		case 3:
			return -274.6549f, 6633.898f, 7.1166f;
		
		case 4:
			return -92.35f, -854.3f, 39.571f;
		
		case 5:
			return -120.92f, -976.05f, 295.49f;
		
		case 6:
			return -1237.2f, 4540.75f, 184.75f;
		
		case 7:
			return -742.5269f, 4493.315f, 75.1444f;
		
		case 8:
			return -801.3582f, 298.8532f, 84.949f;
		
		case 9:
			return -1367.595f, 4381.943f, 41.132f;
		
		case 10:
			return 2517.931f, 4971.752f, 44.7082f;
		
		case 11:
			return 1054.534f, -179.6562f, 70.3066f;
		
		case 12:
			return -767.415f, 4331.792f, 147.682f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_46(int iParam0)//Position - 0x1B5D
{
	switch (iParam0)
	{
		case 4:
			return 12f, 0f, 12.77f;
		
		case 5:
			return 10f, 0f, -134.58f;
		
		case 6:
			return 76f, 0f, -89.95f;
		
		case 8:
			return 12f, 0f, 89.56f;
		
		case 12:
			return 0f, 75f, -22f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_47(int iParam0)//Position - 0x1BD3
{
	switch (iParam0)
	{
		case 4:
			return -92.25f, -854.28f, 39.85f;
		
		case 5:
			return -120.92f, -976.05f, 295.49f;
		
		case 6:
			return -1237.2f, 4540.75f, 184.75f;
		
		case 8:
			return -801.57f, 298.85f, 85.25f;
		
		case 12:
			return -767.415f, 4331.792f, 147.682f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_48(int iParam0, int iParam1, int iParam2)//Position - 0x1C5D
{
	unk_0xDDCAA2E64649E083(unk_0xFC1CAE18F3ECBF2D(), false, iParam0);
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		unk_0x7A71B0C6DDC0D7DA(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 15f);
	}
	unk_0xD5E53AA0828339DA(iParam1);
	func_60(0);
	func_50(1, 1, iParam2, 0, 0);
	unk_0x43F06392C4EF25E0(false);
	unk_0x59B038076F830627(false);
	func_49(23, 1);
}

void func_49(int iParam0, bool bParam1)//Position - 0x1CB4
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

void func_50(bool bParam0, bool bParam1, var uParam2, int iParam3, bool bParam4)//Position - 0x1CD6
{
	if (bParam0)
	{
		unk_0x0D2E9062E966BE4F(unk_0xB5CEFD608600A09F());
		unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 1);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 1);
		func_59(1);
		unk_0x32FF237D69EB5489();
		unk_0x3169E2C5E6A096BC();
		if (Global_389D.f_1 > 3)
		{
			if (unk_0x58E7DDFF8D17A82A())
			{
				unk_0x1E08809A5041F85B(false);
			}
			if (!func_58())
			{
				Global_389D.f_1 = 3;
			}
			Global_3DB8 = 5;
		}
		func_57(1, iParam3, uParam2, 0);
		Global_DAA5 = 1;
		Global_10ABB = 1;
		Global_11540 = 1;
	}
	else
	{
		func_59(0);
		unk_0xCB50D125C355ED9C();
		Global_DAA5 = 0;
		if (bParam1)
		{
			unk_0x7FF4F08CAB3344B1();
		}
		unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 0);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 0);
		func_57(0, iParam3, uParam2, 0);
		if (unk_0x7AF0088ABFA713B6())
		{
			if ((((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_55(unk_0xB5CEFD608600A09F())) && !func_52(unk_0xB5CEFD608600A09F(), 0)) && !func_51()) && !bParam4)
			{
				unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), false);
			}
		}
		else if ((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_55(unk_0xB5CEFD608600A09F())) && !bParam4)
		{
			unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), false);
		}
		Global_11540 = 0;
	}
}

bool func_51()//Position - 0x1DFF
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_27.f_12, 14);
}

bool func_52(int iParam0, int iParam1)//Position - 0x1E1C
{
	bool bVar0;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		bVar0 = func_53(-1, 0) == 8;
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

int func_53(int iParam0, bool bParam1)//Position - 0x1E67
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_54();
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

int func_54()//Position - 0x1EA8
{
	return Global_1407E0;
}

int func_55(int iParam0)//Position - 0x1EB4
{
	if (func_52(iParam0, 0))
	{
		return 1;
	}
	if (func_56())
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

bool func_56()//Position - 0x1EF6
{
	return unk_0xFA30DFD0084E92FE(Global_240006, 3);
}

int func_57(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x1F07
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

int func_58()//Position - 0x1F3A
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_59(int iParam0)//Position - 0x1F61
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

void func_60(int iParam0)//Position - 0x1F84
{
	if (Global_3943)
	{
		func_61(0, 0);
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
	if (!func_58())
	{
		Global_389D.f_1 = 3;
	}
}

void func_61(bool bParam0, bool bParam1)//Position - 0x1FF4
{
	if (bParam0)
	{
		if (func_90(0))
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

float func_62(struct<2> Param0, float fParam1, struct<2> Param2, float fParam3)//Position - 0x2068
{
	return unk_0xFDC254CE02DB0919((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

void func_63(bool bParam0)//Position - 0x2082
{
	if (bParam0)
	{
		func_64();
		if (Global_389D.f_1 == 10 || Global_389D.f_1 == 9)
		{
			unk_0xF0059F27F7BB6680(&Global_93C, 16);
		}
		Global_389D.f_1 = 1;
		if (func_90(0))
		{
			func_60(0);
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

void func_64()//Position - 0x20E5
{
	if (Global_389D.f_1 == 9 || Global_389D.f_1 == 10)
	{
		Global_3DED = 0;
		Global_3DE9 = 1;
	}
}

Vector3 func_65(int iParam0)//Position - 0x210E
{
	switch (iParam0)
	{
		case 0:
			return -1143.586f, -1859.747f, 208.3878f;
		
		case 1:
			return 877.5864f, -436.3322f, 536.9036f;
		
		case 2:
			return 2041.231f, 1978.98f, 585.9358f;
		
		case 3:
			return 405.2326f, 5705.887f, 697.2318f;
		
		case 4:
			return -103.8901f, -870.8046f, 298.7574f;
		
		case 5:
			return -118.2569f, -975.1133f, 297.3781f;
		
		case 6:
			return -1237.465f, 4526.661f, 181.7929f;
		
		case 7:
			return -357.7932f, 4107.914f, 314.8059f;
		
		case 8:
			return -809.6324f, 331.3331f, 233.2818f;
		
		case 9:
			return -1286.926f, 3660.203f, 1076.051f;
		
		case 10:
			return 1022.178f, 3975.738f, 1362.533f;
		
		case 11:
			return 1608.553f, -434.5186f, 1321.916f;
		
		case 12:
			return -756.3533f, 4341.521f, 143.8134f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_66(vector3 vParam0)//Position - 0x2258
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

Vector3 func_67(int iParam0)//Position - 0x2297
{
	switch (iParam0)
	{
		case 0:
			return -21.7965f, -0.0328f, 70.0438f;
		
		case 1:
			return -26.5541f, 0.0092f, -86.4416f;
		
		case 2:
			return -11.2825f, 0.0213f, 148.5283f;
		
		case 3:
			return -39.935f, 0f, 12.8174f;
		
		case 4:
			return 0.9749f, 0f, -5.2236f;
		
		case 5:
			return -12.889f, 0f, 1.6227f;
		
		case 6:
			return -48.5605f, 0f, 160.4909f;
		
		case 7:
			return -37.0509f, 0.0324f, 24.0288f;
		
		case 8:
			return -17.4118f, 0f, 117.7175f;
		
		case 9:
			return -15.4633f, 0.0328f, -5.1142f;
		
		case 10:
			return -20.9567f, 0f, 170.5743f;
		
		case 11:
			return 1.9344f, 0f, -55.2084f;
		
		case 12:
			return -46.0342f, 0f, 37.5935f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_68(int iParam0)//Position - 0x23C1
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return;
	}
	iVar0 = func_76(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_8FEC[iVar0 /*5*/];
		func_71(1, iVar1, 1);
		return;
	}
	iVar2 = func_70(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_69(iVar2);
}

void func_69(int iParam0)//Position - 0x241A
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_8FD2[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_8FD2[iParam0 /*5*/].f_1 == unk_0xBC25C936A095B5BA())
		{
			Global_90BF = 0;
		}
	}
	Global_8FD2[iParam0 /*5*/] = 13;
	Global_8FD2[iParam0 /*5*/].f_1 = 0;
	Global_8FD2[iParam0 /*5*/].f_2 = 0;
	Global_8FD2[iParam0 /*5*/].f_3 = 0;
	Global_8FD2[iParam0 /*5*/].f_4 = 0;
	Global_8FD1 = (Global_8FD1 - 1);
	if (Global_8FD1 < 0)
	{
		Global_8FD1 = 0;
	}
}

int func_70(int iParam0)//Position - 0x249D
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

void func_71(int iParam0, int iParam1, int iParam2)//Position - 0x24CE
{
	func_72(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_72(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x24E3
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_74(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_73();
	if (iVar0 == -1)
	{
		return;
	}
	Global_903D[iVar0 /*6*/] = iParam0;
	Global_903D[iVar0 /*6*/].f_1 = iParam1;
	Global_903D[iVar0 /*6*/].f_2 = iParam2;
	Global_903D[iVar0 /*6*/].f_3 = iParam3;
	Global_903D[iVar0 /*6*/].f_4 = iParam4;
	Global_903D[iVar0 /*6*/].f_5 = iParam5;
}

int func_73()//Position - 0x2565
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_903D[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_74(int iParam0, int iParam1, int iParam2)//Position - 0x2596
{
	if (func_75(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_75(int iParam0, int iParam1, int iParam2)//Position - 0x25B1
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_903D[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_903D[iVar0 /*6*/])
			{
				if (iParam1 == Global_903D[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_76(int iParam0)//Position - 0x25FD
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
		if (!Global_8FEC[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_8FEC[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_77()//Position - 0x2646
{
	if (Global_C60[0 /*2811*/][0 /*281*/].f_103 == 2)
	{
		Global_C60[0 /*2811*/][0 /*281*/].f_103 = 0;
	}
	if (Global_C60[1 /*2811*/][0 /*281*/].f_103 == 2)
	{
		Global_C60[1 /*2811*/][0 /*281*/].f_103 = 0;
	}
	if (Global_C60[2 /*2811*/][0 /*281*/].f_103 == 2)
	{
		Global_C60[2 /*2811*/][0 /*281*/].f_103 = 0;
	}
	unk_0x7CB6FD92BE491AD9(&Global_93B, 25);
	unk_0xF0059F27F7BB6680(&Global_93C, 11);
}

int func_78(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x26C3
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
		if (!func_127(iParam2))
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
			func_79(iParam0, iParam4);
		}
	}
	return 2;
}

void func_79(var uParam0, int iParam1)//Position - 0x27FA
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

int func_80(int iParam0)//Position - 0x2849
{
	if (Global_8C41 == 15)
	{
		return 0;
	}
	if (func_127(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_81()//Position - 0x286B
{
	switch (iLocal_82)
	{
		case 4:
		case 5:
		case 6:
		case 8:
		case 12:
			func_82();
			break;
		
		default:
			break;
	}
}

void func_82()//Position - 0x28A2
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = unk_0x3E12B546F3F2597A();
	if (unk_0x724D816EA203A79E(iVar0))
	{
		vLocal_83.y = iVar0;
	}
	if (unk_0x724D816EA203A79E(iLocal_255))
	{
		vVar1 = { unk_0x541C2AEF053615BC(iLocal_255, true) };
		if (SYSTEM::VDIST2(vVar1, vLocal_56) > 25f)
		{
			func_83(0);
		}
	}
}

void func_83(int iParam0)//Position - 0x28EF
{
	if (iParam0 == 2)
	{
	}
	else if (iParam0 == 0)
	{
	}
	iLocal_70 = iParam0;
	iLocal_68 = 0;
	iLocal_59 = 7;
}

int func_84(int iParam0, bool bParam1)//Position - 0x2910
{
	int iVar0;
	
	iVar0 = func_85(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x6A9CDB766DF7216F(unk_0xFC1CAE18F3ECBF2D()))
	{
		return 0;
	}
	if (func_90(0))
	{
		return 0;
	}
	if (unk_0x866EAD7E27D8D0F8())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_8F05[iVar0 /*32*/] == 1 && Global_8F05[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_8F05[iVar0 /*32*/].f_1D)
				{
					return 0;
				}
			}
			Global_8F05[iVar0 /*32*/].f_5 = 1;
			Global_8F05[iVar0 /*32*/].f_1D = 1;
			return 1;
		}
		else
		{
			if (Global_8F05[iVar0 /*32*/] == 0)
			{
			}
			if (Global_8F05[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_85(int iParam0)//Position - 0x29C8
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_8F05[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_86(int iParam0)//Position - 0x2A03
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_85(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_8F05[iVar0 /*32*/])
		{
			Global_8F05[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

void func_87(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0x2A5A
{
	int iVar0;
	
	if (unk_0xB731B8C5BCE89836(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x7930B3E9C919E90F())
	{
		if (!*iParam0 == -1)
		{
			func_86(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_8F05[iVar0 /*32*/])
		{
			Global_8F05[iVar0 /*32*/] = 1;
			Global_8F05[iVar0 /*32*/].f_1 = Global_8FCE;
			Global_8FCE++;
			Global_8F05[iVar0 /*32*/].f_4 = 0;
			Global_8F05[iVar0 /*32*/].f_1D = 0;
			Global_8F05[iVar0 /*32*/].f_5 = 0;
			Global_8F05[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_8F05[iVar0 /*32*/].f_8), sParam2, 16);
			Global_8F05[iVar0 /*32*/].f_6 = iParam3;
			Global_8F05[iVar0 /*32*/].f_1F = unk_0x8A55B15F4133C912();
			Global_8F05[iVar0 /*32*/].f_7 = 0;
			Global_8F05[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0xF1734B55490E9045(sParam4))
			{
				Global_8F05[iVar0 /*32*/].f_C = 1;
				StringCopy(&(Global_8F05[iVar0 /*32*/].f_D), sParam4, 64);
				Global_8F05[iVar0 /*32*/].f_1E = iParam6;
			}
			else
			{
				Global_8F05[iVar0 /*32*/].f_C = 0;
				Global_8F05[iVar0 /*32*/].f_1E = 0;
			}
			*iParam0 = Global_8F05[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_88(var uParam0)//Position - 0x2B85
{
	return 1;
}

var func_89()//Position - 0x2B8E
{
	return Global_10AB8;
}

int func_90(int iParam0)//Position - 0x2B9A
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

bool func_91(int iParam0, int iParam1)//Position - 0x2BF4
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

bool func_92()//Position - 0x2C2F
{
	return unk_0x105601648511CC64() <= Global_43C1.f_1671 + 100;
}

int func_93()//Position - 0x2C44
{
	if (unk_0xB731B8C5BCE89836(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_94(bool bParam0)//Position - 0x2C5E
{
	if (bParam0)
	{
		return (Global_4336.f_4 && Global_4336.f_68 == 4);
	}
	return Global_4336.f_4;
}

void func_95(var uParam0, int iParam1)//Position - 0x2C87
{
	func_96(uParam0, iParam1);
}

void func_96(var uParam0, var uParam1)//Position - 0x2C97
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_97()//Position - 0x2CA8
{
	return 1;
}

bool func_98()//Position - 0x2CB1
{
	int iVar0;
	bool bVar1;
	
	if (unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		return 0;
	}
	unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &iVar0, 1);
	if (((iVar0 == 0 || iVar0 == joaat("weapon_unarmed")) || iVar0 == joaat("weapon_electric_fence")) || iVar0 == joaat("gadget_parachute"))
	{
		bVar1 = false;
	}
	else
	{
		bVar1 = true;
	}
	if (bVar1)
	{
	}
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		return ((((bVar1 && unk_0x8FCEEB789599BD9B(0, 69)) || (bVar1 && unk_0x8FCEEB789599BD9B(0, 70))) || (bVar1 && unk_0x8FCEEB789599BD9B(0, 68))) || unk_0xE1C3A331B6951C3D(unk_0xB5CEFD608600A09F()));
	}
	return (((((bVar1 && unk_0x8FCEEB789599BD9B(0, 24)) || (bVar1 && unk_0x8FCEEB789599BD9B(0, 25))) || (bVar1 && unk_0x8FCEEB789599BD9B(0, 47))) || unk_0xFF2EA801C4691698(unk_0xBC25C936A095B5BA())) || unk_0xE1C3A331B6951C3D(unk_0xB5CEFD608600A09F()));
}

int func_99(int iParam0)//Position - 0x2DBB
{
	int iVar0;
	
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				iVar0 = func_35();
				if (!func_37(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_106()) || Global_1974B) || Global_62BF) || func_105()) || func_91(8, -1)) || func_104()) || func_103()) || func_102()) || func_93()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1) || func_106()) || Global_62BF) || func_105()) || func_91(8, -1)) || func_102()) || func_104()) || func_103()) || func_93()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_106()) || Global_1974B) || Global_62BF) || func_105()) || func_91(8, -1)) || func_102()) || func_104()) || func_103()) || func_93()) || Global_19B04.f_1DEB.f_397[iVar0] == 5) || Global_8E64 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_106()) || Global_1974B) || Global_62BF) || func_105()) || func_91(8, -1)) || func_104()) || func_103()) || func_93()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_106() || unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0) || func_91(8, -1)) || func_93()) || func_101()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_91(8, -1) || func_104()) || func_103()) || func_101()) || func_100())
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
							if ((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || func_106()) || Global_62BF) || func_105()) || func_91(8, -1)) || func_103()) || func_102()) || func_93()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || !unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) || !unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F())) || !unk_0x726D9204B160D23E()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || func_106()) || func_103()) || Global_1974B) || Global_62BF) || func_105()) || Global_90C1) || func_91(8, -1)) || func_102()) || func_101()) || func_93()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || !unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) || !unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F())) || !unk_0x726D9204B160D23E()) || unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0)) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1)) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0x9273B3557334635D(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || func_106()) || Global_1974B) || Global_62BF) || func_105()) || func_91(8, -1)) || func_102()) || func_101()) || func_104()) || func_103()) || func_93())
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

var func_100()//Position - 0x34D8
{
	return Global_16B42.f_1;
}

int func_101()//Position - 0x34E6
{
	if (Global_15FA6 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_147B0[Global_15FA6 /*34*/].f_F, 13);
	}
	return 0;
}

int func_102()//Position - 0x350C
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

bool func_103()//Position - 0x3536
{
	return Global_16B4F.f_142 > 0;
}

bool func_104()//Position - 0x3547
{
	return Global_16B4F.f_141 > 0;
}

var func_105()//Position - 0x3558
{
	return Global_140856;
}

int func_106()//Position - 0x3564
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		return Global_161D2.f_2C == 1;
	}
	return 0;
}

int func_107()//Position - 0x3580
{
	if (unk_0xB731B8C5BCE89836(joaat("stripperhome")) > 0)
	{
		return 1;
	}
	return 0;
}

var func_108()//Position - 0x359A
{
	return Global_15B64;
}

int func_109(int iParam0)//Position - 0x35A6
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_111(6) || func_111(7))
			{
				return 1;
			}
			else
			{
				return func_109(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_127(5))
			{
				if (func_99(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_110(int iParam0)//Position - 0x3618
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return unk_0x2DA8CA50A72528FB(Global_6416[iVar0 /*23*/].f_13);
}

bool func_111(int iParam0)//Position - 0x3654
{
	return Global_8C41 == iParam0;
}

void func_112(var uParam0, int iParam1)//Position - 0x3662
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_113()//Position - 0x3673
{
	vector3 vVar0;
	
	if (bLocal_254)
	{
		switch (iLocal_82)
		{
			case 4:
			case 5:
			case 8:
				iLocal_255 = unk_0x1E0CB5BD6231AB3D(joaat("p_parachute_s"), func_47(iLocal_82), true, true, false);
				unk_0x784C605D172817C8(iLocal_255, func_46(iLocal_82), 2, 1);
				unk_0x346478B12F69D4E3(iLocal_255, true);
				break;
			
			case 6:
			case 12:
				iLocal_255 = unk_0x1E0CB5BD6231AB3D(joaat("p_parachute_s"), func_47(iLocal_82), true, true, false);
				unk_0x784C605D172817C8(iLocal_255, func_46(iLocal_82), 2, 1);
				unk_0x772C73A01E80296A(iLocal_255);
				vVar0 = { func_115(iLocal_82) };
				if (!func_33(vVar0))
				{
					iLocal_256 = unk_0x61C05BF08A1E0EFE(joaat("bati"), vVar0, func_114(iLocal_82), true, true, false);
					iLocal_256 = iLocal_256;
				}
				break;
			
			default:
				break;
			}
	}
}

float func_114(int iParam0)//Position - 0x373C
{
	switch (iParam0)
	{
		case 6:
			return 165.0425f;
		
		default:
	}
	return 0f;
}

Vector3 func_115(int iParam0)//Position - 0x375A
{
	switch (iParam0)
	{
		case 6:
			return -1243.606f, 4543.016f, 185.9527f;
		
		default:
	}
	return 0f, 0f, 0f;
}

bool func_116()//Position - 0x3784
{
	switch (iLocal_82)
	{
		case 5:
		case 4:
		case 8:
		case 6:
			return (((unk_0xF9E082857622D91E("pickup_object") && unk_0xF9E082857622D91E("oddjobs@basejump@ig_15")) && func_117(&uLocal_78)) && func_117(&uLocal_80));
			break;
		
		case 12:
			return ((unk_0xF9E082857622D91E("pickup_object") && unk_0xF9E082857622D91E("oddjobs@basejump@ig_15")) && func_117(&uLocal_78));
			break;
		
		default:
			break;
	}
	return (func_117(&uLocal_78) && func_117(&uLocal_80));
}

int func_117(var uParam0)//Position - 0x3818
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

void func_118()//Position - 0x385F
{
	switch (iLocal_82)
	{
		case 5:
		case 8:
			func_120(&uLocal_78, joaat("p_parachute_s"));
			unk_0x522053D86D6E1C7A("pickup_object");
			unk_0x522053D86D6E1C7A("oddjobs@basejump@ig_15");
			break;
		
		case 4:
		case 6:
			func_120(&uLocal_78, joaat("p_parachute_s"));
			func_120(&uLocal_80, joaat("bati"));
			unk_0x522053D86D6E1C7A("pickup_object");
			unk_0x522053D86D6E1C7A("oddjobs@basejump@ig_15");
			break;
		
		case 12:
			func_120(&uLocal_78, joaat("p_parachute_s"));
			unk_0x522053D86D6E1C7A("pickup_object");
			unk_0x522053D86D6E1C7A("oddjobs@basejump@ig_15");
			break;
		
		default:
			break;
	}
	func_119(&uLocal_78);
	func_119(&uLocal_80);
}

void func_119(var uParam0)//Position - 0x38FE
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

int func_120(var uParam0, int iParam1)//Position - 0x392E
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
	iVar1 = func_121(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_121(var uParam0)//Position - 0x398B
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

void func_122(int iParam0)//Position - 0x39B7
{
	iLocal_59 = iParam0;
}

void func_123(int iParam0, bool bParam1, bool bParam2)//Position - 0x39C3
{
	int iVar0;
	bool bVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		bVar1 = unk_0xFA30DFD0084E92FE(Global_6416[iVar0 /*23*/].f_B, 15);
		if (bVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != unk_0xFA30DFD0084E92FE(Global_6416[iVar0 /*23*/].f_B, 0))
	{
		unk_0xF0059F27F7BB6680(&(Global_6416[iVar0 /*23*/].f_B), 18);
		if (Global_6413 == 1)
		{
			Global_6414 = 1;
		}
		Global_6413 = 1;
	}
	if (bParam1)
	{
		unk_0xF0059F27F7BB6680(&(Global_6416[iVar0 /*23*/].f_B), 0);
		unk_0xF0059F27F7BB6680(&(Global_6416[iVar0 /*23*/].f_B), 15);
		unk_0xF0059F27F7BB6680(&(Global_6416[iVar0 /*23*/].f_B), 3);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_6416[iVar0 /*23*/].f_B), 0);
		unk_0x7CB6FD92BE491AD9(&(Global_6416[iVar0 /*23*/].f_B), 15);
	}
	if (!unk_0xFA30DFD0084E92FE(Global_6416[iVar0 /*23*/].f_B, 0))
	{
		if (unk_0x2DA8CA50A72528FB(Global_6416[iVar0 /*23*/].f_13))
		{
			unk_0xB5AD2E78802711D6(1);
			unk_0x07B8ECB35A4ED3AC(&(Global_6416[iVar0 /*23*/].f_13));
			unk_0xB5AD2E78802711D6(0);
		}
	}
}

int func_124()//Position - 0x3ACC
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

int func_125()//Position - 0x3AE9
{
	if (Global_15FA6 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_147B0[Global_15FA6 /*34*/].f_F, 20);
	}
	return 0;
}

bool func_126(int iParam0, int iParam1)//Position - 0x3B0F
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

bool func_127(int iParam0)//Position - 0x3B5C
{
	return func_128(iParam0, Global_8C41);
}

int func_128(int iParam0, int iParam1)//Position - 0x3B6D
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

bool func_129(var uParam0, int iParam1)//Position - 0x3D4E
{
	return (uParam0 && iParam1) != 0;
}

void func_130()//Position - 0x3D5D
{
	if (unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		func_95(&uLocal_58, 8388608);
		return;
	}
	StringCopy(&Local_51, "bj", 64);
	iLocal_82 = func_134(vLocal_56, 0);
	switch (iLocal_82)
	{
		case 4:
			iLocal_69 = 129;
			break;
		
		case 5:
			iLocal_69 = 130;
			break;
		
		case 6:
			iLocal_69 = 131;
			break;
		
		case 8:
			iLocal_69 = 133;
			break;
		
		case 12:
			iLocal_69 = 137;
			break;
		
		default:
			break;
	}
	if (iLocal_69 == 129)
	{
		if (func_133(19))
		{
			func_132(iLocal_69);
		}
	}
	func_95(&uLocal_58, 4194304);
	iLocal_63 = 0;
	fLocal_66 = (SYSTEM::TO_FLOAT(func_131(iLocal_69)) + 5f);
	fLocal_77 = 1.1f;
	sLocal_65 = "PLAY_BASEJUMP_G";
	if (iLocal_69 != 263)
	{
		if (!func_126(0, iLocal_63))
		{
			bLocal_254 = false;
			func_132(iLocal_69);
		}
		else
		{
			bLocal_254 = true;
		}
	}
	else
	{
		bLocal_254 = false;
	}
	if (unk_0xB731B8C5BCE89836(joaat("bj")) > 0)
	{
		func_95(&uLocal_58, 8);
	}
	else
	{
		func_136(&uLocal_58, 8);
	}
	if (func_111(12))
	{
		func_95(&uLocal_58, 8);
	}
	iLocal_61 = 23500;
}

int func_131(int iParam0)//Position - 0x3E7B
{
	switch (iParam0)
	{
		case 91:
		case 92:
		case 110:
		case 111:
			return 20;
			break;
		
		case 66:
		case 67:
		case 76:
		case 107:
		case 108:
		case 109:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 129:
		case 130:
		case 131:
		case 133:
		case 137:
			return 100;
			break;
		
		case 125:
		case 126:
		case 127:
		case 128:
		case 132:
		case 134:
		case 135:
		case 136:
		case 68:
		case 69:
		case 95:
		case 70:
		case 71:
		case 73:
		case 74:
		case 75:
		case 72:
			return 209;
			break;
	}
	return -1;
}

void func_132(int iParam0)//Position - 0x3F93
{
	if (iLocal_59 < 5)
	{
		if (iParam0 != 263)
		{
			if (iParam0 < 0 || iParam0 >= 263)
			{
			}
			func_123(iParam0, 0, 0);
		}
		iLocal_69 = 263;
		func_86(&iLocal_60);
		iLocal_59 = 9;
	}
}

bool func_133(int iParam0)//Position - 0x3FD6
{
	return Global_19773[iParam0 /*10*/].f_1;
}

int func_134(vector3 vParam0, int iParam1)//Position - 0x3FE8
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = 0;
	while (iVar3 < 13)
	{
		if (iParam1 == func_135(iVar3))
		{
			fVar1 = SYSTEM::VDIST2(vParam0, func_45(iVar3));
			if (fVar0 > fVar1)
			{
				fVar0 = fVar1;
				iVar2 = iVar3;
			}
		}
		iVar3++;
	}
	return iVar2;
}

int func_135(int iParam0)//Position - 0x4039
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 7:
		case 9:
		case 10:
		case 11:
			return 1;
			break;
	}
	return 0;
}

void func_136(var uParam0, int iParam1)//Position - 0x4080
{
	func_137(uParam0, iParam1);
}

void func_137(var uParam0, var uParam1)//Position - 0x4090
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_138(bool bParam0)//Position - 0x40A5
{
	if (bParam0)
	{
		if (iLocal_69 != 263)
		{
			func_123(iLocal_69, 0, 0);
		}
	}
	func_86(&iLocal_60);
	if (func_129(uLocal_58, 2))
	{
		func_5();
		func_136(&uLocal_58, 2);
		func_7(&iLocal_62);
	}
	iLocal_62 = -1;
	func_139();
	unk_0x95E4B6F3ED223F5A();
}

void func_139()//Position - 0x40EE
{
	func_136(&uLocal_58, 4);
	func_140();
	if (unk_0x3C406FC829C1E14A(iLocal_50))
	{
		unk_0x17631956147B5347(iLocal_50, 3);
	}
	if (!unk_0xEAEFBBEC1AEA464B(&Local_52))
	{
		if (unk_0x5D29F91E567588E2(&Local_52) != 0)
		{
			unk_0x91DEC7187FA01089(&Local_52);
		}
	}
}

void func_140()//Position - 0x412B
{
}

