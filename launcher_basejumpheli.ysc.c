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
	int iLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	struct<16> Local_51 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<16> Local_52 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
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
	bool bLocal_78 = 0;
	var uLocal_79 = 1;
	var uLocal_80 = 0;
	int iLocal_81 = 0;
	var uLocal_82 = 16;
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
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	struct<170> Local_247 = { 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_248 = 0;
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	struct<2> Local_260 = { 0, 5 } ;
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
	var uLocal_276 = 5;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	
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
	bLocal_78 = true;
	vLocal_56 = { ScriptParam_260.f_1[0 /*3*/] };
	vLocal_56 = { vLocal_56 };
	iLocal_54 = iLocal_54;
	Local_52 = { Local_52 };
	bVar0 = false;
	if (unk_0xE8A79675302ED812(114))
	{
		func_160(1);
	}
	iLocal_53 = unk_0xA95CF30C72EB526E(unk_0xB5CEFD608600A09F());
	iLocal_59 = 0;
	func_158(&Global_195BF, 0);
	func_152();
	unk_0x80BDE252D8D954BC(1);
	if (func_151(uLocal_58, 1))
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
	if (!func_151(uLocal_58, 8))
	{
		if (!func_149(iLocal_64))
		{
			if (func_148(0, iLocal_63))
			{
				func_160(0);
			}
			else
			{
				func_160(1);
			}
		}
	}
	if (iLocal_63 != -1)
	{
		if (!func_148(0, iLocal_63))
		{
			bLocal_78 = false;
		}
	}
	if (func_151(uLocal_58, 8388608))
	{
		func_160(1);
	}
	if (func_151(uLocal_58, 524288) && (func_147() && !func_146()))
	{
		func_160(1);
	}
	if (unk_0xB731B8C5BCE89836(unk_0x2C087518F90303D5()) > 1 && !func_151(uLocal_58, 4194304))
	{
		if (iLocal_69 != 263)
		{
			func_145(iLocal_69, 1, 0);
			iLocal_69 = 263;
		}
		func_144(10);
	}
	if (!unk_0x724D816EA203A79E(iLocal_54))
	{
		if (func_143() && !Global_1974B)
		{
			func_142(1);
		}
		else if (Global_1974B)
		{
		}
	}
	while (true)
	{
		if (Global_3)
		{
			func_160(1);
		}
		iLocal_53 = unk_0xA95CF30C72EB526E(unk_0xB5CEFD608600A09F());
		if (func_151(uLocal_58, 1048576))
		{
			if (unk_0x1D403DFADBC2DE3C(iLocal_53, 0))
			{
				func_160(1);
			}
		}
		if (unk_0x724D816EA203A79E(iLocal_53) && !unk_0x1D403DFADBC2DE3C(iLocal_53, 0))
		{
			vLocal_55 = { unk_0x541C2AEF053615BC(iLocal_53, true) };
			fLocal_57 = SYSTEM::VDIST2(vLocal_55, ScriptParam_260.f_1[0 /*3*/]);
			fLocal_57 = fLocal_57;
			vLocal_75 = { vLocal_55 };
			vLocal_76 = { ScriptParam_260.f_1[0 /*3*/] };
			vLocal_75.z = 0f;
			vLocal_76.z = 0f;
			fLocal_74 = SYSTEM::VDIST2(vLocal_75, vLocal_76);
			switch (iLocal_59)
			{
				case 0:
					if (func_149(iLocal_64) || (func_151(uLocal_58, 16) && !func_151(uLocal_58, 524288)))
					{
						iLocal_62 = -1;
						func_137();
						func_144(1);
					}
					else
					{
						if (fLocal_74 > (fLocal_66 * fLocal_66))
						{
							if (iLocal_69 != 263)
							{
								func_145(iLocal_69, 1, 0);
								iLocal_69 = 263;
							}
							func_144(10);
						}
						if ((vLocal_55.z - ScriptParam_260.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_135())
					{
						iLocal_67 = iLocal_67;
						func_144(3);
					}
					else
					{
						func_137();
					}
					break;
				
				case 3:
					if (unk_0xF5F5C6DD66B0FB2A())
					{
						func_160(1);
						return;
					}
					if (!func_149(iLocal_64))
					{
						if (!func_151(uLocal_58, 8))
						{
							bVar1 = true;
							if (unk_0x3362CDE8460ED38B(&(Global_16B1B.f_3), &Local_52))
							{
								Local_52 = { Local_51 };
								bVar1 = false;
							}
							if (bVar1)
							{
								func_160(0);
								break;
							}
						}
					}
					if (!func_151(uLocal_58, 4))
					{
						func_133();
						func_132(&uLocal_58, 4);
					}
					if (fLocal_74 > (fLocal_66 * fLocal_66) && !Global_16B3D)
					{
						if (iLocal_69 != 263)
						{
							if (func_131(6) && !func_130(iLocal_69))
							{
							}
							else
							{
								func_145(iLocal_69, 1, 0);
								iLocal_69 = 263;
							}
						}
						func_144(10);
					}
					else
					{
						Local_52 = { Local_51 };
						bVar2 = !func_151(uLocal_58, 64);
						func_158(&uLocal_58, 128);
						if (!func_129(3) && !Global_16B3D)
						{
							if (func_151(uLocal_58, 2097152))
							{
								if ((!func_151(uLocal_58, 1) || !unk_0x724D816EA203A79E(func_128())) && !Global_16B3D)
								{
									func_144(10);
									break;
								}
							}
						}
						if (func_151(uLocal_58, 524288) && (func_147() && !func_146()))
						{
							func_160(1);
						}
						if (func_127())
						{
							func_160(1);
						}
						if ((!func_119(6) || Global_1974B) || func_118())
						{
							bVar2 = false;
						}
						if (!bLocal_78)
						{
							func_116(&uLocal_58, 128);
							bVar2 = false;
						}
						if (func_151(uLocal_58, 1))
						{
							if (!func_115())
							{
								func_116(&uLocal_58, 128);
								bVar2 = false;
							}
						}
						if (func_114(1))
						{
							bVar2 = false;
						}
						if (Global_11542)
						{
							bVar2 = false;
						}
						if (func_113())
						{
							bVar2 = false;
						}
						if (unk_0x7930B3E9C919E90F())
						{
							bVar2 = false;
						}
						if (func_112() || func_111(8, -1))
						{
							bVar2 = false;
						}
						if (!unk_0xDB625D1720DAC49A(unk_0xB5CEFD608600A09F()))
						{
							bVar2 = false;
						}
						if (func_110(0) || func_109())
						{
							bVar2 = false;
						}
						if (bVar2)
						{
							if (unk_0x1D403DFADBC2DE3C(iLocal_54, 0))
							{
								func_116(&uLocal_58, 128);
								bVar2 = false;
							}
							else if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
							{
								func_116(&uLocal_58, 128);
								bVar2 = false;
							}
							else
							{
								iVar3 = unk_0xD20EBB97FE8799ED(unk_0xBC25C936A095B5BA());
								if (bVar2)
								{
									if (iLocal_54 == iVar3)
									{
									}
									else
									{
										func_116(&uLocal_58, 128);
										bVar2 = false;
									}
								}
							}
							if (bVar2)
							{
								unk_0xD55638CE45B2B948(0, 51);
								if (func_108(iLocal_54))
								{
									if (iLocal_60 == -1)
									{
										func_107(&iLocal_60, 4, sLocal_65, 0, 0, 0, 0);
										func_116(&uLocal_58, 2048);
									}
									else if (!func_151(uLocal_58, 2048) || !unk_0xF16DAFF595E80F7C())
									{
										func_106(&iLocal_60);
										func_158(&uLocal_58, 2048);
									}
									if (func_104(iLocal_60, 1))
									{
										sLocal_65 = sLocal_65;
										func_106(&iLocal_60);
										func_158(&uLocal_58, 2048);
										unk_0x63831D2D5110C305(&Local_52);
										unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 56);
										func_144(5);
									}
								}
								else
								{
									sLocal_65 = sLocal_65;
									func_106(&iLocal_60);
									func_158(&uLocal_58, 2048);
									unk_0x63831D2D5110C305(&Local_52);
									func_144(5);
								}
							}
						}
						if (!bVar2)
						{
							if (iLocal_60 != -1)
							{
								func_106(&iLocal_60);
								func_158(&uLocal_58, 2048);
								unk_0x7456702622C62EA0(0);
							}
						}
					}
					func_50();
					break;
				
				case 5:
					unk_0xD55638CE45B2B948(0, 51);
					if (unk_0xACE95AD318CE412B(&Local_52))
					{
						if (iLocal_60 != -1)
						{
							func_106(&iLocal_60);
						}
						iVar4 = 2;
						bVar0 = false;
						if (func_151(uLocal_58, 1))
						{
							if (func_131(6) || func_131(7))
							{
								iVar4 = 1;
								bVar0 = true;
							}
						}
						if (iVar4 != 1)
						{
							iVar4 = func_47(&iLocal_62, 6, iLocal_64, 0, 0);
						}
						if (iVar4 == 1)
						{
							if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
							{
								unk_0xA98B19EC1C93FC3C(unk_0xB5CEFD608600A09F());
							}
							func_46();
							if (Global_90C1)
							{
								func_37(unk_0xBC25C936A095B5BA());
							}
							iLocal_50 = func_27();
							func_158(&uLocal_58, 4);
							func_26();
							func_116(&uLocal_58, 2);
							func_144(6);
							func_22(&iLocal_71);
							if (iLocal_63 != -1)
							{
								func_21(iLocal_63);
								func_18(func_20(iLocal_63), 0, 0);
							}
						}
						else if (iVar4 == 2)
						{
							func_15();
						}
						else if (iVar4 == 0)
						{
							func_144(10);
						}
					}
					else
					{
						func_15();
					}
					break;
				
				case 6:
					if (func_151(Global_195BF, 262144))
					{
						func_158(&Global_195BF, 262144);
						func_14();
					}
					if (func_151(uLocal_58, 2097152))
					{
						if (!func_129(3) && !unk_0x3C406FC829C1E14A(iLocal_50))
						{
							func_144(10);
						}
					}
					if (!unk_0x3C406FC829C1E14A(iLocal_50))
					{
						unk_0x739C5CCC39AE3137(SYSTEM::ROUND((func_10(&iLocal_71) * 1000f)), iLocal_63, 0);
						func_9(&iLocal_71);
						func_158(&uLocal_58, 256);
						func_8();
						if (bVar0)
						{
							func_158(&uLocal_58, 2);
						}
						else if (func_151(uLocal_58, 2))
						{
							if (func_151(Global_195BF, 0))
							{
								func_7(&iLocal_62);
								iLocal_62 = -1;
								func_158(&uLocal_58, 2);
							}
							else
							{
								func_7(&iLocal_62);
								iLocal_62 = -1;
								func_158(&uLocal_58, 2);
							}
						}
						func_144(0);
						if (iLocal_63 != -1)
						{
							if (func_151(Global_195BF, 0))
							{
								unk_0x1B7435D54924A668(func_20(iLocal_63), 0, Global_16B40, 0);
								func_6(func_20(iLocal_63), 0, Global_16B40, 1, 0);
							}
							else
							{
								unk_0x1B7435D54924A668(func_20(iLocal_63), 0, Global_16B40, 0);
								func_6(func_20(iLocal_63), 0, Global_16B40, 0, 0);
							}
						}
						func_5();
						func_158(&Global_195BF, 0);
						if (func_151(uLocal_58, 16777216))
						{
							func_160(1);
						}
						if (iLocal_63 != -1)
						{
							if (Global_19B04.f_2360)
							{
								if (!func_148(0, iLocal_63))
								{
									func_160(1);
								}
							}
						}
					}
					func_4();
					break;
				
				case 8:
					func_144(0);
					break;
				
				case 10:
					func_160(1);
					break;
				
				case 9:
					if (fLocal_74 > (fLocal_66 * fLocal_66))
					{
						if (iLocal_69 != 263)
						{
							func_145(iLocal_69, 1, 0);
							iLocal_69 = 263;
						}
						func_144(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_69 != 263)
					{
						func_145(iLocal_69, 0, 0);
					}
					if (iLocal_60 != -1)
					{
						func_106(&iLocal_60);
					}
					if (!unk_0xF1734B55490E9045(sLocal_65))
					{
						if (func_1(sLocal_65))
						{
							unk_0x7456702622C62EA0(1);
						}
					}
					func_144(4);
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
									if (func_149(iLocal_64) && func_148(0, iLocal_63))
									{
										func_152();
										if (iLocal_69 != 263)
										{
											func_145(iLocal_69, 1, 0);
										}
										func_144(0);
									}
								}
							}
							else if (iLocal_70 == 0)
							{
								if (fLocal_74 > (fLocal_66 * fLocal_66))
								{
									if (iLocal_69 != 263)
									{
										func_145(iLocal_69, 1, 0);
										iLocal_69 = 263;
									}
									func_144(10);
								}
							}
							else if (iLocal_70 == 1)
							{
								if (fLocal_74 > ((80f + 5f) * (80f + 5f)))
								{
									func_152();
									if (iLocal_69 != 263)
									{
										func_145(iLocal_69, 1, 0);
									}
									func_144(0);
								}
							}
						}
						else
						{
							func_145(iLocal_69, 1, 0);
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

int func_1(char* sParam0)//Position - 0xA35
{
	unk_0xF07D20149ECBC61E(sParam0);
	return unk_0xA66DBDA0A072514A(0);
}

void func_2()//Position - 0xA48
{
	func_3(&uLocal_79);
	unk_0x1E7A09C1710FB071(&Local_247);
	unk_0x02537C8C1BEEB477(&(Local_247.f_3));
}

void func_3(var uParam0)//Position - 0xA66
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

void func_4()//Position - 0xA96
{
}

void func_5()//Position - 0xA9E
{
	if (iLocal_81 == 0)
	{
		unk_0xF437E11BAB5814AF();
	}
	unk_0x9B90420B04C07704("DisableFlightMusic", 0);
}

void func_6(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xAB8
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

void func_7(int iParam0)//Position - 0xAFC
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

void func_8()//Position - 0xB39
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

void func_9(int iParam0)//Position - 0xB7B
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

float func_10(int iParam0)//Position - 0xB91
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

float func_11(bool bParam0)//Position - 0xBD0
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

bool func_12(var uParam0)//Position - 0xC28
{
	return unk_0xFA30DFD0084E92FE(*uParam0, 2);
}

bool func_13(var uParam0)//Position - 0xC38
{
	return unk_0xFA30DFD0084E92FE(*uParam0, 1);
}

int func_14()//Position - 0xC48
{
	return 1;
}

void func_15()//Position - 0xC51
{
	func_16(&iLocal_252, Local_247);
}

void func_16(int iParam0, int iParam1)//Position - 0xC63
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	if (unk_0xEF0E25DA0CB6E8FF(*iParam0) && unk_0xEDEA6C8F42EE05F6(*iParam0))
	{
		vVar2 = { unk_0x4BE5AF1A5ACF14E5(*iParam0) };
		vVar0 = { unk_0x0311C47C0F630BCF(*iParam0, 2) };
		if (unk_0xE59B7F5A03335350(iParam1, 0))
		{
			vVar1 = { unk_0x541C2AEF053615BC(iParam1, true) };
		}
		fVar3 = unk_0xE8CFCB6B2165523B((vVar1.z - vVar2.z), unk_0xF0F2FC9DE291567F(vVar1, vVar2, false));
		if (fVar3 > vVar0.x)
		{
			vVar0.x = func_17(vVar0.x, fVar3, 0.07f);
		}
		unk_0x3553F2A72957724E(*iParam0, vVar0, 2);
	}
}

float func_17(float fParam0, float fParam1, float fParam2)//Position - 0xCEC
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

void func_18(char* sParam0, int iParam1, int iParam2)//Position - 0xD01
{
	if (!unk_0xF1734B55490E9045(&Global_1603A))
	{
		unk_0x857F9926E7882AF4(&Global_1603A, 0, 0, 0, 1, 0);
		StringCopy(&Global_1603A, "", 64);
	}
	StringCopy(&Global_1603A, sParam0, 64);
	unk_0xFC3106D886D77FE2(sParam0, iParam1, iParam2, func_19(0));
}

bool func_19(bool bParam0)//Position - 0xD42
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_1163A, 0);
}

char* func_20(int iParam0)//Position - 0xD6D
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

void func_21(int iParam0)//Position - 0xEAB
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

void func_22(int iParam0)//Position - 0xF02
{
	if (!func_13(iParam0))
	{
		func_25(iParam0);
	}
	else
	{
		func_23(iParam0);
	}
}

void func_23(int iParam0)//Position - 0xF23
{
	func_24(iParam0, 0f);
}

void func_24(int iParam0, float fParam1)//Position - 0xF32
{
	iParam0->f_1 = (func_11(unk_0xFA30DFD0084E92FE(*iParam0, 4)) - fParam1);
	unk_0xF0059F27F7BB6680(iParam0, 1);
	unk_0x7CB6FD92BE491AD9(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_25(int iParam0)//Position - 0xF60
{
	if (!func_13(iParam0))
	{
		func_23(iParam0);
	}
}

void func_26()//Position - 0xF78
{
	if (unk_0x724D816EA203A79E(Local_247) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
	}
	if (unk_0xEDEA6C8F42EE05F6(iLocal_252))
	{
		unk_0x348665177DBFB93B(iLocal_252, false);
		unk_0x062C9995BFD27B2A(false, false, 3000, 1, 0, 0);
		unk_0x4EC087603E1DEF9C(iLocal_252, 0);
	}
	func_2();
}

int func_27()//Position - 0xFC2
{
	int iVar0;
	
	Global_19B04.f_49FA = iLocal_81;
	switch (iLocal_81)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 9:
		case 10:
		case 11:
			func_36();
			break;
		
		case 7:
			func_36();
			func_28(65, 0, 1, 1, 0);
			func_28(66, 0, 1, 1, 0);
			break;
		
		default:
			break;
	}
	iVar0 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS(&Local_51, &Local_247, 170, iLocal_61);
	unk_0x91DEC7187FA01089(&Local_51);
	return iVar0;
}

void func_28(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x1046
{
	if (iParam0 != 198)
	{
		if (Global_11542)
		{
			Global_252E21.f_4B.f_E3[iParam0] = iParam1;
		}
		else
		{
			Global_19B04.f_1C40.f_E3[iParam0] = iParam1;
		}
		Global_8068[iParam0] = iParam2;
		Global_812F[iParam0] = 1;
		func_31(iParam0, bParam3, iParam4, 0);
		func_29(iParam0, iParam1);
	}
}

void func_29(int iParam0, int iParam1)//Position - 0x10A1
{
	switch (iParam0)
	{
		case 12:
			if (iParam1 == 0)
			{
				unk_0xB00E8EBD8B946B23("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 0, 0);
			}
			else
			{
				unk_0xB00E8EBD8B946B23("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 1, 0);
			}
			break;
		
		case 71:
			if (iParam1 != 1)
			{
				unk_0x18240E022F427713("HEIST_SWEATSHOP_ZONES", 0, 0);
			}
			else
			{
				unk_0x18240E022F427713("HEIST_SWEATSHOP_ZONES", 1, 0);
			}
			break;
		
		case 65:
			if (iParam1 == 1)
			{
				func_30(0, 0);
			}
			else
			{
				func_30(0, 1);
			}
			break;
		
		case 6:
			if (iParam1 == 1)
			{
				unk_0xB00E8EBD8B946B23("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 1, 0);
			}
			else
			{
				unk_0xB00E8EBD8B946B23("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 0, 0);
			}
			break;
		
		case 174:
			if (iParam1 == 2)
			{
				unk_0xDD60E0A13475AC62("V_CARSHOWROOM_PS_WINDOW_UNBROKEN");
			}
			break;
		
		case 37:
			if (iParam1 == 1)
			{
				unk_0x155A8308CD79CCE9("TREVOR1_TRAILER_PARK_MAIN_STAGE_RADIO", 0);
				unk_0x155A8308CD79CCE9("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_01", 0);
				unk_0x155A8308CD79CCE9("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_02", 0);
				unk_0x155A8308CD79CCE9("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_03", 0);
			}
			break;
	}
}

void func_30(int iParam0, bool bParam1)//Position - 0x1184
{
	if (bParam1)
	{
		unk_0xF0059F27F7BB6680(&Global_195B2, iParam0);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&Global_195B2, iParam0);
	}
	Global_195B1 = 1;
}

bool func_31(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x11AD
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	var uVar4;
	bool bVar5;
	int iVar6;
	
	Global_1914DE = 1;
	bVar0 = false;
	Var3.f_4 = 3;
	Var3.f_8 = 3;
	Var3.f_40 = 3;
	Var3.f_4B = 3;
	Var3.f_5B = 3;
	func_35(&Var3, iParam0);
	if (func_32())
	{
		iVar1 = Global_19B04.f_1C40.f_E3[iParam0];
	}
	else
	{
		iVar1 = Global_252E21.f_4B.f_E3[iParam0];
	}
	iVar2 = Global_81F6[iParam0];
	if (unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !bParam3)
	{
		Global_1914DE = 1;
	}
	else
	{
		bVar5 = true;
		if (unk_0x56BEECB328B6D29D(unk_0x1377080E9B0BD993()) != unk_0x56BEECB328B6D29D("standard_global_reg"))
		{
			if (iParam2 == 0)
			{
				if (Global_8068[iParam0] && unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false), Var3, true) < 200f)
				{
					bVar5 = false;
					Global_1914DE = 1;
				}
				if (!unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()) || unk_0x19B821A70FE4D11F(unk_0xBC25C936A095B5BA()))
				{
					if (!unk_0x17FAADF9916EF741())
					{
						bVar5 = false;
						Global_1914DE = 1;
					}
				}
			}
		}
		if (unk_0x719413B40BB63D86() && (!unk_0x7930B3E9C919E90F() || unk_0x5935088CFB983803() != 5))
		{
			bVar5 = false;
			Global_1914DE = 1;
		}
		if (bVar5)
		{
			switch (Var3.f_3)
			{
				case 0:
					if (iVar1 == 2)
					{
					}
					else
					{
						if (Var3.f_4[iVar1] != 0)
						{
							unk_0x466BFD40867F5065(Var3, 10f, Var3.f_4[iVar1], false);
						}
						if (Var3.f_4[iVar2] != 0)
						{
							unk_0xE090137E6ECF31FE(Var3, 10f, Var3.f_4[iVar2], 1);
						}
						Global_86A2[iParam0] = 1;
					}
					bVar0 = true;
					break;
				
				case 1:
					if (iVar1 == 0)
					{
						if (unk_0x56BEECB328B6D29D(&(Var3.f_8[1 /*8*/])) != unk_0x56BEECB328B6D29D("") && unk_0x56BEECB328B6D29D(&(Var3.f_8[1 /*8*/])) != unk_0x56BEECB328B6D29D(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xE7CC712DAAEA69F3(&(Var3.f_8[1 /*8*/])))
							{
								unk_0x66EC947D9DEDE5B3(&(Var3.f_8[1 /*8*/]));
								Global_1914DE = 1;
							}
						}
						if ((unk_0x56BEECB328B6D29D(&(Var3.f_8[2 /*8*/])) != unk_0x56BEECB328B6D29D("") && unk_0x56BEECB328B6D29D(&(Var3.f_8[2 /*8*/])) != unk_0x56BEECB328B6D29D("REMOVE_ALL_STATES")) && unk_0x56BEECB328B6D29D(&(Var3.f_8[2 /*8*/])) != unk_0x56BEECB328B6D29D(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xE7CC712DAAEA69F3(&(Var3.f_8[2 /*8*/])))
							{
								unk_0x66EC947D9DEDE5B3(&(Var3.f_8[2 /*8*/]));
								Global_1914DE = 1;
							}
						}
						if (unk_0x56BEECB328B6D29D(&(Var3.f_8[0 /*8*/])) != unk_0x56BEECB328B6D29D(""))
						{
							if (!unk_0xE7CC712DAAEA69F3(&(Var3.f_8[0 /*8*/])))
							{
								unk_0x5183B5D4E829B7E4(&(Var3.f_8[0 /*8*/]));
								Global_1914DE = 1;
							}
						}
						if (unk_0x56BEECB328B6D29D(&(Var3.f_22)) != unk_0x56BEECB328B6D29D(""))
						{
							if (!unk_0xE7CC712DAAEA69F3(&(Var3.f_22)))
							{
								unk_0x5183B5D4E829B7E4(&(Var3.f_22));
								Global_1914DE = 1;
							}
						}
					}
					else if (iVar1 == 1)
					{
						if (unk_0x56BEECB328B6D29D(&(Var3.f_22)) != unk_0x56BEECB328B6D29D(""))
						{
							if (unk_0xE7CC712DAAEA69F3(&(Var3.f_22)))
							{
								unk_0x66EC947D9DEDE5B3(&(Var3.f_22));
							}
						}
						if (unk_0x56BEECB328B6D29D(&(Var3.f_8[0 /*8*/])) != unk_0x56BEECB328B6D29D("") && unk_0x56BEECB328B6D29D(&(Var3.f_8[0 /*8*/])) != unk_0x56BEECB328B6D29D(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xE7CC712DAAEA69F3(&(Var3.f_8[0 /*8*/])))
							{
								unk_0x66EC947D9DEDE5B3(&(Var3.f_8[0 /*8*/]));
							}
						}
						if ((unk_0x56BEECB328B6D29D(&(Var3.f_8[2 /*8*/])) != unk_0x56BEECB328B6D29D("") && unk_0x56BEECB328B6D29D(&(Var3.f_8[2 /*8*/])) != unk_0x56BEECB328B6D29D("REMOVE_ALL_STATES")) && unk_0x56BEECB328B6D29D(&(Var3.f_8[2 /*8*/])) != unk_0x56BEECB328B6D29D(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xE7CC712DAAEA69F3(&(Var3.f_8[2 /*8*/])))
							{
								unk_0x66EC947D9DEDE5B3(&(Var3.f_8[2 /*8*/]));
							}
						}
						if (unk_0x56BEECB328B6D29D(&(Var3.f_8[1 /*8*/])) != unk_0x56BEECB328B6D29D(""))
						{
							if (!unk_0xE7CC712DAAEA69F3(&(Var3.f_8[1 /*8*/])))
							{
								unk_0x5183B5D4E829B7E4(&(Var3.f_8[1 /*8*/]));
							}
						}
					}
					else if (iVar1 == 2)
					{
						if (unk_0x56BEECB328B6D29D(&(Var3.f_22)) != unk_0x56BEECB328B6D29D(""))
						{
							if (unk_0xE7CC712DAAEA69F3(&(Var3.f_22)))
							{
								unk_0x66EC947D9DEDE5B3(&(Var3.f_22));
							}
						}
						if (unk_0x56BEECB328B6D29D(&(Var3.f_8[0 /*8*/])) != unk_0x56BEECB328B6D29D("") && unk_0x56BEECB328B6D29D(&(Var3.f_8[0 /*8*/])) != unk_0x56BEECB328B6D29D(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xE7CC712DAAEA69F3(&(Var3.f_8[0 /*8*/])))
							{
								unk_0x66EC947D9DEDE5B3(&(Var3.f_8[0 /*8*/]));
							}
						}
						if (unk_0x56BEECB328B6D29D(&(Var3.f_8[1 /*8*/])) != unk_0x56BEECB328B6D29D("") && unk_0x56BEECB328B6D29D(&(Var3.f_8[1 /*8*/])) != unk_0x56BEECB328B6D29D(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xE7CC712DAAEA69F3(&(Var3.f_8[1 /*8*/])))
							{
								unk_0x66EC947D9DEDE5B3(&(Var3.f_8[1 /*8*/]));
							}
						}
						if (unk_0x56BEECB328B6D29D(&(Var3.f_8[2 /*8*/])) != unk_0x56BEECB328B6D29D("") && unk_0x56BEECB328B6D29D(&(Var3.f_8[2 /*8*/])) != unk_0x56BEECB328B6D29D("REMOVE_ALL_STATES"))
						{
							if (!unk_0xE7CC712DAAEA69F3(&(Var3.f_8[2 /*8*/])))
							{
								unk_0x5183B5D4E829B7E4(&(Var3.f_8[2 /*8*/]));
							}
						}
					}
					Global_85DB[iParam0] = 1;
					Global_86A2[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 2:
					iVar6 = unk_0x5E29F9399E0829A3(Var3, &(Var3.f_2A));
					if (iVar6 != 0)
					{
						if (unk_0x56BEECB328B6D29D(&(Var3.f_32)) != unk_0x56BEECB328B6D29D(""))
						{
							if (unk_0x441443E0B2239D89(iVar6, &(Var3.f_32)))
							{
								unk_0x0A6E8FAA7207E629(iVar6, &(Var3.f_32));
							}
						}
						if (iVar1 == 0)
						{
							if (unk_0x56BEECB328B6D29D(&(Var3.f_8[1 /*8*/])) != unk_0x56BEECB328B6D29D(""))
							{
								if (unk_0x441443E0B2239D89(iVar6, &(Var3.f_8[1 /*8*/])))
								{
									unk_0x0A6E8FAA7207E629(iVar6, &(Var3.f_8[1 /*8*/]));
								}
							}
							if ((unk_0x56BEECB328B6D29D(&(Var3.f_8[2 /*8*/])) != unk_0x56BEECB328B6D29D("") && unk_0x56BEECB328B6D29D(&(Var3.f_8[2 /*8*/])) != unk_0x56BEECB328B6D29D("REMOVE_ALL_STATES")) && unk_0x56BEECB328B6D29D(&(Var3.f_8[2 /*8*/])) != unk_0x56BEECB328B6D29D(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (unk_0x441443E0B2239D89(iVar6, &(Var3.f_8[2 /*8*/])))
								{
									unk_0x0A6E8FAA7207E629(iVar6, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (unk_0x56BEECB328B6D29D(&(Var3.f_8[0 /*8*/])) != unk_0x56BEECB328B6D29D(""))
							{
								if (!unk_0x441443E0B2239D89(iVar6, &(Var3.f_8[0 /*8*/])))
								{
									unk_0x2888D2934A5F0F7D(iVar6, &(Var3.f_8[0 /*8*/]));
								}
							}
						}
						else if (iVar1 == 1)
						{
							if (unk_0x56BEECB328B6D29D(&(Var3.f_8[0 /*8*/])) != unk_0x56BEECB328B6D29D(""))
							{
								if (unk_0x441443E0B2239D89(iVar6, &(Var3.f_8[0 /*8*/])))
								{
									unk_0x0A6E8FAA7207E629(iVar6, &(Var3.f_8[0 /*8*/]));
								}
							}
							if ((unk_0x56BEECB328B6D29D(&(Var3.f_8[2 /*8*/])) != unk_0x56BEECB328B6D29D("") && unk_0x56BEECB328B6D29D(&(Var3.f_8[2 /*8*/])) != unk_0x56BEECB328B6D29D("REMOVE_ALL_STATES")) && unk_0x56BEECB328B6D29D(&(Var3.f_8[2 /*8*/])) != unk_0x56BEECB328B6D29D(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (unk_0x441443E0B2239D89(iVar6, &(Var3.f_8[2 /*8*/])))
								{
									unk_0x0A6E8FAA7207E629(iVar6, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (unk_0x56BEECB328B6D29D(&(Var3.f_8[1 /*8*/])) != unk_0x56BEECB328B6D29D(""))
							{
								if (!unk_0x441443E0B2239D89(iVar6, &(Var3.f_8[1 /*8*/])))
								{
									unk_0x2888D2934A5F0F7D(iVar6, &(Var3.f_8[1 /*8*/]));
								}
							}
						}
						else if (iVar1 == 2)
						{
							if (unk_0x56BEECB328B6D29D(&(Var3.f_8[0 /*8*/])) != unk_0x56BEECB328B6D29D(""))
							{
								if (unk_0x441443E0B2239D89(iVar6, &(Var3.f_8[0 /*8*/])))
								{
									unk_0x0A6E8FAA7207E629(iVar6, &(Var3.f_8[0 /*8*/]));
								}
							}
							if (unk_0x56BEECB328B6D29D(&(Var3.f_8[1 /*8*/])) != unk_0x56BEECB328B6D29D(""))
							{
								if (unk_0x441443E0B2239D89(iVar6, &(Var3.f_8[1 /*8*/])))
								{
									unk_0x0A6E8FAA7207E629(iVar6, &(Var3.f_8[1 /*8*/]));
								}
							}
							if (unk_0x56BEECB328B6D29D(&(Var3.f_8[2 /*8*/])) != unk_0x56BEECB328B6D29D("") && unk_0x56BEECB328B6D29D(&(Var3.f_8[2 /*8*/])) != unk_0x56BEECB328B6D29D("REMOVE_ALL_STATES"))
							{
								if (!unk_0x441443E0B2239D89(iVar6, &(Var3.f_8[2 /*8*/])))
								{
									unk_0x2888D2934A5F0F7D(iVar6, &(Var3.f_8[2 /*8*/]));
								}
							}
						}
						if (bParam1)
						{
							unk_0x2C200845CC871354(iVar6);
						}
					}
					Global_86A2[iParam0] = 1;
					Global_85DB[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 3:
					if (unk_0xF0F2FC9DE291567F(Var3, unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false), true) < 250f)
					{
						uVar4 = unk_0xF80718E42755119B(Var3, 25f, &(Var3.f_8[0 /*8*/]));
						if (unk_0x9CD72B946AEA39F0(uVar4))
						{
							if (iVar1 == 0)
							{
								unk_0x16AF01D36A7DCE23(uVar4, 3);
								Global_86A2[iParam0] = 1;
								bVar0 = true;
							}
							else if (iVar1 == 1)
							{
								if ((unk_0xD2797B305A88C7D9(uVar4) != 6 && unk_0xD2797B305A88C7D9(uVar4) != 7) && unk_0xD2797B305A88C7D9(uVar4) != 8)
								{
									unk_0x16AF01D36A7DCE23(uVar4, 10);
									Global_86A2[iParam0] = 1;
									bVar0 = true;
								}
							}
							else if (iVar1 == 2)
							{
								bVar0 = true;
							}
						}
					}
					break;
				
				case 4:
					if (iVar1 == 0)
					{
						unk_0x1172DD0499BE6F3C(Var3, 50f, Var3.f_4[1], Var3.f_4[0], 0);
						unk_0x7CB6FD92BE491AD9(&(Global_7F6A[(iParam0 / 32)]), (iParam0 % 32));
					}
					else if (iVar1 == 1)
					{
						unk_0x219383B42B803B61(Var3, 50f, Var3.f_4[0], Var3.f_4[1], 1);
						unk_0xF0059F27F7BB6680(&(Global_7F6A[(iParam0 / 32)]), (iParam0 % 32));
					}
					bVar0 = true;
					break;
			}
			if (bVar0)
			{
				Global_812F[iParam0] = 0;
				Global_81F6[iParam0] = iVar1;
				if (!func_32())
				{
					if (!Global_844B[iParam0])
					{
						Global_844B[iParam0] = 1;
						Global_8512++;
					}
				}
			}
		}
	}
	return bVar0;
}

int func_32()//Position - 0x1AFF
{
	if ((func_34() == -1 || func_34() == 999) && !func_33() == 0)
	{
		return 1;
	}
	return 0;
}

int func_33()//Position - 0x1B2F
{
	return Global_62BE;
}

int func_34()//Position - 0x1B3A
{
	return Global_62BD;
}

int func_35(var uParam0, int iParam1)//Position - 0x1B45
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_4[iVar0] = 0;
		StringCopy(&(uParam0->f_8[iVar0 /*8*/]), "", 32);
		uParam0->f_40[iVar0] = 0;
		uParam0->f_4B[iVar0] = 0;
		uParam0->f_5B[iVar0] = 0;
		iVar0++;
	}
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0;
	uParam0->f_21 = 0;
	StringCopy(&(uParam0->f_22), "", 32);
	StringCopy(&(uParam0->f_2A), "", 32);
	StringCopy(&(uParam0->f_32), "", 32);
	uParam0->f_3A = { 0f, 0f, 0f };
	uParam0->f_3D = { 0f, 0f, 0f };
	uParam0->f_44 = { 0f, 0f, 0f };
	uParam0->f_47 = { 0f, 0f, 0f };
	uParam0->f_4A = 0f;
	uParam0->f_4F = { 0f, 0f, 0f };
	uParam0->f_52 = { 0f, 0f, 0f };
	uParam0->f_55 = { 0f, 0f, 0f };
	uParam0->f_58 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 3:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "TRV1_Trail_start", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "TRV1_Trail_end", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "TRV1_Trail_Finish", 32);
			uParam0->f_21 = 1;
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
		
		case 4:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS3_05_water_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_05_water_grp2", 32);
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
		
		case 0:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "gasstation_ipl_group1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "gasstation_ipl_group2", 32);
			*uParam0 = { -93.4f, 6410.9f, 36.8f };
			break;
		
		case 1:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_Smash2_startimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_Smash2_endimap", 32);
			*uParam0 = { 890.3647f, -2367.289f, 28.10582f };
			break;
		
		case 2:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_StiltHouse_imapstart", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_StiltHouse_imapend", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "des_stilthouse_rebuild", 32);
			uParam0->f_21 = 0;
			*uParam0 = { -1020.5f, 663.41f, 154.75f };
			uParam0->f_3A = { -1018.913f, 603.2904f, 105.6611f };
			uParam0->f_3D = { -1038.913f, 639.2904f, 135.6611f };
			uParam0->f_40[0] = 1;
			uParam0->f_40[1] = 0;
			break;
		
		case 5:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "bnkheist_apt_norm", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest", 32);
			break;
		
		case 196:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest_vfx", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_21 = 1;
			break;
		
		case 6:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "crashed_cargoplane", 32);
			break;
		
		case 7:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_jb700_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 8:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_entityXF_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 9:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_cheetah_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 10:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_ztype_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 11:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_48_Killed_Michael", 32);
			break;
		
		case 12:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "cargoship", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "sunkcargoship", 32);
			uParam0->f_44 = { -162.8918f, -2365.769f, 0f };
			uParam0->f_47 = { 190.75f, 31.25f, 21f };
			uParam0->f_4A = 0f;
			uParam0->f_4B[0] = 0;
			uParam0->f_4B[1] = 1;
			break;
		
		case 13:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ship_occ_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ship_occ_grp2", 32);
			break;
		
		case 14:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "smboat", 32);
			break;
		
		case 15:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "gasparticle_grp2", 32);
			*uParam0 = { -95.2f, 6411.3f, 31.5f };
			break;
		
		case 16:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_02_cf_offmission", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission1", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 17:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission2", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 18:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission3", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 19:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission4", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 20:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "jetstealtunnel", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 801.7f, -1810.8f, 23.3f };
			break;
		
		case 21:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Jetsteal_ipl_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Jetsteal_ipl_grp2", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_21 = 1;
			*uParam0 = { 787.3967f, -1808.858f, 29.8532f };
			uParam0->f_3A = { 814f, -1750f, 20f };
			uParam0->f_3D = { 790f, -1899f, 35f };
			uParam0->f_40[0] = 1;
			uParam0->f_40[1] = 0;
			uParam0->f_40[2] = 0;
			break;
		
		case 22:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "BH1_47_JoshHse_UnBurnt", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_47_JoshHse_Burnt", 32);
			break;
		
		case 23:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bh1_47_joshhse_firevfx", 32);
			break;
		
		case 24:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_30_Keep_Closed", 32);
			break;
		
		case 25:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "triathlon2_VBprops", 32);
			break;
		
		case 26:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_REQUEST", 32);
			*uParam0 = { 163.4f, -745.7f, 251f };
			break;
		
		case 27:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FBI_colPLUG", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 28:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FBI_repair", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 29:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = joaat("dt1_05_build1_h");
			uParam0->f_4[1] = joaat("dt1_05_build1_damage");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 30:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = -112041596;
			uParam0->f_4[1] = joaat("dt1_05_build1_damage_lod");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 31:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = -186270611;
			uParam0->f_4[1] = joaat("dt1_05_damage_slod");
			*uParam0 = { 178.534f, -668.835f, 37.2113f };
			break;
		
		case 32:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FIB_heist_lights", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 33:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FIB_heist_dmg", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 34:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_rubble", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 35:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FIBlobbyfake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FIBlobby", 32);
			*uParam0 = { 105.4557f, -745.4835f, 44.7548f };
			break;
		
		case 36:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_HC_REMOVE", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_HC_REQ", 32);
			*uParam0 = { 169f, -670.3f, 41.9f };
			break;
		
		case 37:
			uParam0->f_3 = 1;
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			uParam0->f_4F = { 16.9757f, 3614.307f, 30.0677f };
			uParam0->f_52 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_55 = { 16.9757f, 3614.307f, 30.0677f };
			uParam0->f_58 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_5B[0] = 0;
			uParam0->f_5B[1] = 1;
			break;
		
		case 38:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkA_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkA_grp2", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
		
		case 39:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerA_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
		
		case 40:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkB_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkB_grp2", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
		
		case 41:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerB_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
		
		case 42:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkC_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkC_grp2", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
		
		case 43:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerC_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
		
		case 44:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkD_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkD_grp2", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
		
		case 45:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerD_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
		
		case 46:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkE_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkE_grp2", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
		
		case 47:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerE_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
		
		case 48:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_22), "des_methtrailer", 32);
			StringCopy(&(uParam0->f_8[0 /*8*/]), "methtrailer_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "methtrailer_grp2", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "methtrailer_grp3", 32);
			uParam0->f_21 = 1;
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			uParam0->f_44 = { 31.134f, 3738.783f, 39.062f };
			uParam0->f_47 = { 13.6f, 20f, 8.9f };
			uParam0->f_4A = 48f;
			uParam0->f_4B[0] = 0;
			uParam0->f_4B[1] = 1;
			uParam0->f_4B[2] = 1;
			break;
		
		case 49:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_meth_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			break;
		
		case 50:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_startimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_endimap", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_21 = 1;
			*uParam0 = { 2450.595f, 4959.929f, 44.2575f };
			uParam0->f_4F = { 2383.756f, 4929.988f, 39.52461f };
			uParam0->f_52 = { 2505.756f, 5023.988f, 67.52461f };
			break;
		
		case 55:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_start_occl", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_end_occl", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { 2450.595f, 4959.929f, 44.2575f };
			break;
		
		case 51:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt", 32);
			uParam0->f_21 = 1;
			*uParam0 = { 2444.8f, 4976.4f, 50.5f };
			break;
		
		case 52:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farm_props", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt_props", 32);
			uParam0->f_21 = 1;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 53:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_21 = 1;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 54:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farmint_cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "farmint", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 56:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "tankerexp_grp0", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp3", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 57:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp1", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 58:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp2", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 59:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_tankerexp", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 60:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "dockcrane1", 32);
			*uParam0 = { 889.3f, -2910.9f, 40f };
			break;
		
		case 61:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CanyonRvrShallow", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CanyonRvrDeep", 32);
			*uParam0 = { -1600.619f, 4443.457f, 0.725f };
			break;
		
		case 62:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Garage_door_locked", 32);
			*uParam0 = { 966.1f, -114.8f, 75.2f };
			break;
		
		case 63:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ch1_02_closed", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ch1_02_open", 32);
			*uParam0 = { -3086.428f, 339.2523f, 6.3717f };
			break;
		
		case 64:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ferris_finale_Anim", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -1675.178f, -1143.605f, 12.0175f };
			break;
		
		case 65:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "railing_start", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "railing_end", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
		
		case 66:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "canyonriver01", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "canyonriver01_traincrash", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
		
		case 67:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_WOFFM", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_FIB2_Mission", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "DT1_05_WOFFM", 32);
			*uParam0 = { 131.29f, -631.22f, 261.85f };
			break;
		
		case 68:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "coronertrash", 32);
			*uParam0 = { 233.9f, -1355f, 30.3f };
			break;
		
		case 69:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Coroner_Int_off", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Coroner_Int_on", 32);
			*uParam0 = { 234.4f, -1355.6f, 40.5f };
			break;
		
		case 70:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "id2_14_pre_no_int", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 71:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during1", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_during2", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 72:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_on_fire", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_post_no_int", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 73:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during_door", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 74:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "burnt_switch_off", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 75:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_Default", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "RC12B_Destroyed", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "RC12B_Fixed", 32);
			uParam0->f_21 = 0;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 76:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_HospitalInterior", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_21 = 0;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 105:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SM_15_BldGRAF1", 32);
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 106:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CH3_RD2_BishopsChickenGraffiti", 32);
			*uParam0 = { 1861.28f, 2402.11f, 58.53f };
			break;
		
		case 107:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FruitBB", 32);
			*uParam0 = { -1327.46f, -274.82f, 54.25f };
			break;
		
		case 108:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_04_MazeBillboardGraffiti", 32);
			*uParam0 = { 2697.32f, 3162.18f, 58.1f };
			break;
		
		case 109:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_Roads_RonOilGraffiti", 32);
			*uParam0 = { 2119.12f, 3058.21f, 53.25f };
			break;
		
		case 110:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ap1_03_bbrd_dcl", 32);
			*uParam0 = { -804.25f, -2276.88f, 23.59f };
			break;
		
		case 111:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_02_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_02_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
		
		case 112:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_Emissive_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_Emissive_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
		
		case 77:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_21 = 1;
			*uParam0 = { 480.9554f, -1321.21f, 28.2037f };
			uParam0->f_55 = { 508.3f, -1299.3f, 39.4f };
			uParam0->f_58 = { 459.9f, -1363.2f, 21.4f };
			uParam0->f_5B[0] = 0;
			uParam0->f_5B[1] = 1;
			uParam0->f_5B[2] = 0;
			break;
		
		case 78:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "TrevorsTrailer", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "TrevorsTrailerTrash", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "TrevorsTrailerTidy", 32);
			*uParam0 = { 1973f, 3815f, 34f };
			uParam0->f_21 = 0;
			break;
		
		case 79:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "scafstartimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "scafendimap", 32);
			*uParam0 = { -1088.6f, -1650.6f, 6.4f };
			break;
		
		case 80:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "chop_props", 32);
			*uParam0 = { -13.83f, -1455.45f, 31.81f };
			break;
		
		case 113:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "AP1_04_TriAf01", 32);
			*uParam0 = { -1277.629f, -2030.913f, 1.2823f };
			break;
		
		case 114:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS2_06_TriAf02", 32);
			*uParam0 = { 2384.969f, 4277.583f, 30.379f };
			break;
		
		case 115:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS4_04_TriAf03", 32);
			*uParam0 = { 1577.881f, 3836.107f, 30.7717f };
			break;
		
		case 87:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_21_prop_lift_on", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -180.5771f, -1016.928f, 28.2893f };
			break;
		
		case 88:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "jewel2fake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "post_hiest_unload", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "bh1_16_refurb", 32);
			*uParam0 = { -630.4205f, -236.7843f, 37.057f };
			uParam0->f_4F = { (-623.6868f - 11f), (-231.935f - 11f), (40.30703f - 3.25f) };
			uParam0->f_52 = { (-623.6868f + 11f), (-231.935f + 11f), (40.30703f + 3.25f) };
			break;
		
		case 89:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "bh1_16_doors_shut", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "refit_unload", 32);
			*uParam0 = { -583.1606f, -282.3967f, 35.394f };
			break;
		
		case 90:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "v_tunnel_hole_swap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "v_tunnel_hole", 32);
			*uParam0 = { -14.651f, -604.3639f, 25.1823f };
			break;
		
		case 91:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "cs5_4_trains", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2773.61f, 2835.327f, 35.1903f };
			break;
		
		case 94:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "airfield", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 1743.682f, 3286.251f, 40.0875f };
			break;
		
		case 95:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_21 = 1;
			*uParam0 = { 1222.9f, 1877.9f, 79.9f };
			uParam0->f_3A = { 1206.8f, 1803f, 43.9f };
			uParam0->f_3D = { 1329f, 2060.4f, 143.9f };
			uParam0->f_40[0] = 0;
			uParam0->f_40[1] = 1;
			uParam0->f_40[2] = 0;
			break;
		
		case 104:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_01_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_01_NewBill", 32);
			*uParam0 = { -351f, -1324f, 44.02f };
			break;
		
		case 103:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_17_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_17_NewBill", 32);
			*uParam0 = { 391.81f, -962.71f, 41.97f };
			break;
		
		case 102:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_14_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_14_NewBill", 32);
			*uParam0 = { 424.2f, -1944.31f, 33.09f };
			break;
		
		case 92:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_01_track", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2626.374f, 2949.869f, 39.1409f };
			break;
		
		case 93:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_02_track", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2626.374f, 2949.869f, 39.1409f };
			break;
		
		case 118:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_M_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_moved", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
		
		case 116:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_D_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_D_Moved", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
		
		case 117:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_S_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_S_items_swap", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 119:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_L_Items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_L_Moved", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 120:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_items_swap", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 122:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_FameShame", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
		
		case 121:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_JewelHeist", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 123:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Michael_premier", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 124:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_plane_ticket", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 170:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "burgershot_yoga", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 171:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_Scuba", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael_Garage", 32);
			*uParam0 = { -810.5301f, 187.7868f, 71.4786f };
			break;
		
		case 125:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_bed_tidy", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_bed_Messy", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
		
		case 164:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Jewel_Gasmasks", 32);
			StringCopy(&(uParam0->f_2A), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 165:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency _Overalls", 32);
			StringCopy(&(uParam0->f_2A), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 166:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency_Blueprint", 32);
			StringCopy(&(uParam0->f_2A), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 167:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_KitBag", 32);
			StringCopy(&(uParam0->f_2A), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 168:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Body_Armour", 32);
			StringCopy(&(uParam0->f_2A), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 169:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Fireman", 32);
			StringCopy(&(uParam0->f_2A), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 126:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet1", 32);
			StringCopy(&(uParam0->f_2A), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 127:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet3", 32);
			StringCopy(&(uParam0->f_2A), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 128:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet2", 32);
			StringCopy(&(uParam0->f_2A), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 129:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase1", 32);
			StringCopy(&(uParam0->f_2A), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 130:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase3", 32);
			StringCopy(&(uParam0->f_2A), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 131:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase2", 32);
			StringCopy(&(uParam0->f_2A), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 132:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay1", 32);
			StringCopy(&(uParam0->f_2A), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 133:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay3", 32);
			StringCopy(&(uParam0->f_2A), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 134:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay2", 32);
			StringCopy(&(uParam0->f_2A), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 179:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "shutter_open", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "shutter_closed", 32);
			StringCopy(&(uParam0->f_2A), "v_carshowroom", 32);
			*uParam0 = { -30.8793f, -1088.336f, 25.4221f };
			uParam0->f_44 = { -29.3f, -1086.35f, 25.57f };
			uParam0->f_47 = { 5.5f, 3f, 2f };
			uParam0->f_4A = -10f;
			uParam0->f_4B[0] = 0;
			uParam0->f_4B[1] = 1;
			break;
		
		case 174:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "csr_beforeMission", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "csr_afterMissionA", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "csr_afterMissionB", 32);
			StringCopy(&(uParam0->f_32), "csr_inMission", 32);
			uParam0->f_21 = 0;
			StringCopy(&(uParam0->f_2A), "v_carshowroom", 32);
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 175:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_carshowroom", 32);
			*uParam0 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_44 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_47 = { 2.5f, 3f, 3f };
			uParam0->f_4A = 0f;
			uParam0->f_4B[0] = 0;
			uParam0->f_4B[1] = 1;
			uParam0->f_4B[2] = 0;
			break;
		
		case 176:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_carshowroom", 32);
			*uParam0 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_44 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_47 = { 3f, 1f, 3f };
			uParam0->f_4A = 0f;
			uParam0->f_4B[0] = 0;
			uParam0->f_4B[1] = 1;
			uParam0->f_4B[2] = 0;
			break;
		
		case 177:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_carshowroom", 32);
			*uParam0 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_44 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_47 = { 1f, 3f, 2f };
			uParam0->f_4A = -45f;
			uParam0->f_4B[0] = 0;
			uParam0->f_4B[1] = 1;
			uParam0->f_4B[2] = 0;
			break;
		
		case 178:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "carshowroom_broken", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "carshowroom_boarded", 32);
			uParam0->f_21 = 0;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 173:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "shr_int", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "fakeint", 32);
			uParam0->f_21 = 0;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 180:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Shutter", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "", 32);
			*uParam0 = { 23.9346f, -669.7552f, 30.8853f };
			break;
		
		case 181:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Hospitaldoorsanim", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "Hospitaldoorsfixed", 32);
			StringCopy(&(uParam0->f_2A), "v_hospital", 32);
			uParam0->f_21 = 0;
			*uParam0 = { 300.9423f, -586.1784f, 42.2919f };
			break;
		
		case 135:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_clean_apt", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_A", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 136:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_B", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 137:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_C", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 138:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_sextoys_a", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 139:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_wade_shit", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 140:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_wade_sofa_A", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 141:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "layer_debra_pic", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 142:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_torture", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 143:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_sofa_A", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_sofa_B", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 144:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_whiskey", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 145:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_mrJam_A", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_B", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 146:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_C", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 147:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "vb_30_emissive", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_murder", 32);
			uParam0->f_21 = 0;
			*uParam0 = { -1150.039f, -1521.761f, 9.6331f };
			break;
		
		case 148:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_crimetape", 32);
			uParam0->f_21 = 0;
			*uParam0 = { -1150.039f, -1521.761f, 9.6331f };
			break;
		
		case 149:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "sheriff_cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_21 = 0;
			*uParam0 = { 1856.029f, 3682.998f, 33.2675f };
			break;
		
		case 150:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_16_Sheriff_Cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_21 = 0;
			*uParam0 = { -440.5073f, 6018.766f, 30.49f };
			break;
		
		case 151:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo", 32);
			uParam0->f_21 = 0;
			*uParam0 = { 487.31f, 5588.386f, 793.0532f };
			break;
		
		case 152:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo_eye", 32);
			uParam0->f_21 = 0;
			*uParam0 = { 487.31f, 5588.386f, 793.0532f };
			break;
		
		case 153:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_57_FranklinStuff", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Franklin_LEFT", 32);
			StringCopy(&(uParam0->f_2A), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 154:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_GangBandana", 32);
			StringCopy(&(uParam0->f_2A), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 155:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Safari", 32);
			StringCopy(&(uParam0->f_2A), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 172:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_19_Trevor_Mess", 32);
			StringCopy(&(uParam0->f_2A), "v_strip3", 32);
			*uParam0 = { 96.4811f, -1291.294f, 28.2688f };
			break;
		
		case 182:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_21 = 0;
			*uParam0 = { 139.5795f, -3092.962f, 8.64631f };
			uParam0->f_4F = { Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_52 = { Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_55 = { Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_58 = { Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_5B[0] = 0;
			uParam0->f_5B[1] = 1;
			uParam0->f_5B[2] = 1;
			break;
		
		case 183:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_21 = 0;
			*uParam0 = { 203.7784f, -3131.767f, 7.041344f };
			uParam0->f_4F = { Vector(7.041344f, -3131.767f, 203.7784f) - Vector(2.5625f, 2.75f, 4.875f) };
			uParam0->f_52 = { Vector(7.041344f, -3131.767f, 203.7784f) + Vector(2.5625f, 2.75f, 4.875f) };
			break;
		
		case 184:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_21 = 0;
			*uParam0 = { 144.7706f, -2982.659f, 7.952507f };
			uParam0->f_4F = { Vector(7.952507f, -2982.659f, 144.7706f) - Vector(3.125f, 3.4375f, 5.3125f) };
			uParam0->f_52 = { Vector(7.952507f, -2982.659f, 144.7706f) + Vector(3.125f, 3.4375f, 5.3125f) };
			break;
		
		case 185:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_21 = 1;
			*uParam0 = { -1154.965f, -1520.983f, 9.132731f };
			uParam0->f_4F = { -1154.965f, -1520.983f, 9.132731f };
			uParam0->f_52 = { -1158.965f, -1524.983f, 11.63273f };
			break;
		
		case 187:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_21 = 1;
			*uParam0 = { -1052.204f, 371.9537f, 67.914f };
			uParam0->f_4F = { -1052.204f, 371.9537f, 67.914f };
			uParam0->f_52 = { -1048.064f, 368.0221f, 70.9128f };
			break;
		
		case 186:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_21 = 1;
			*uParam0 = { 1954.984f, 3792.991f, 30.3086f };
			uParam0->f_4F = { 1954.984f, 3792.991f, 30.3086f };
			uParam0->f_52 = { 1983.45f, 3830.78f, 36.2726f };
			break;
		
		case 188:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_21 = 1;
			*uParam0 = { -1122.202f, 48.5724f, 51.4652f };
			uParam0->f_4F = { -1122.202f, 48.5724f, 51.4652f };
			uParam0->f_52 = { -1076.233f, 92.1041f, 60.0617f };
			break;
		
		case 81:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "KorizTempWalls", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_21 = 0;
			*uParam0 = { -2199.138f, 223.4648f, 181.1118f };
			break;
		
		case 82:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "mic3_chopper_debris", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_21 = 0;
			*uParam0 = { -2242.785f, 263.4779f, 173.6154f };
			break;
		
		case 83:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "chemgrill_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 3832.9f, 3665.5f, -23.4f };
			break;
		
		case 84:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Plane_crash_trench", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_21 = 0;
			*uParam0 = { 2814.7f, 4758.5f, 47.9f };
			break;
		
		case 85:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "golfflags", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -1096.505f, 4.5754f, 49.8103f };
			break;
		
		case 86:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "yogagame", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -781.6566f, 186.8937f, 71.8352f };
			break;
		
		case 189:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Carwash_with_spinners", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Carwash_without_spinners", 32);
			uParam0->f_21 = 0;
			*uParam0 = { 55.7f, -1391.3f, 30.5f };
			break;
		
		case 190:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "KT_CarWash", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "KT_CarWash_NoBrush", 32);
			uParam0->f_21 = 0;
			*uParam0 = { 700.091f, -933.641f, 20.308f };
			break;
		
		case 191:
			uParam0->f_3 = 1;
			*uParam0 = { -1096.381f, -836.17f, 36.6755f };
			uParam0->f_55 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_58 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_5B[0] = 1;
			uParam0->f_5B[1] = 0;
			break;
		
		case 192:
			uParam0->f_3 = 1;
			*uParam0 = { 449.6558f, -980.1375f, 42.6918f };
			uParam0->f_55 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_58 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_5B[0] = 1;
			uParam0->f_5B[1] = 0;
			break;
		
		case 193:
			uParam0->f_3 = 1;
			*uParam0 = { 363.0175f, -1598.079f, 35.9502f };
			uParam0->f_55 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_58 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_5B[0] = 1;
			uParam0->f_5B[1] = 0;
			break;
		
		case 194:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_07_MPGates", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { -1601.424f, 2808.213f, 16.2598f };
			break;
		
		case 97:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Gr_Closed", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 23.7318f, -647.2123f, 37.9549f };
			break;
		
		case 98:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FINBANK", 32);
			*uParam0 = { 12.9689f, -648.4698f, 9.7693f };
			break;
		
		case 99:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "PAPER1_RCM_ALT", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "PAPER1_RCM", 32);
			*uParam0 = { -1459.127f, 486.1281f, 115.2016f };
			break;
		
		case 100:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SP1_10_fake_interior", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SP1_10_real_interior", 32);
			*uParam0 = { -248.4916f, -2010.509f, 34.5743f };
			break;
		
		case 101:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "facelobbyfake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "facelobby", 32);
			*uParam0 = { -1081.347f, -263.1502f, 38.7152f };
			break;
		
		case 195:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "atriumglstatic", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "atriumglmission", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "atriumglcut", 32);
			*uParam0 = { 136.1795f, -750.701f, 262.0516f };
			break;
		
		case 197:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "racetrack01", 32);
			*uParam0 = { 2096f, 3168.7f, 42.9f };
			break;
	}
	switch (iParam1)
	{
		case 156:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "showhome_only", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 157:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_unpacking", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 158:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_settled", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 163:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tshirt", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 159:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bong_and_wine", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 161:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_flyer", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 162:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tux", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 160:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "locked", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "unlocked", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 96:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "chophillskennel", 32);
			*uParam0 = { 19.0568f, 536.4818f, 169.6277f };
			break;
	}
	return 1;
}

void func_36()//Position - 0x52E0
{
	unk_0x7A41D32A383895D8(3000);
	func_16(&iLocal_252, Local_247);
	while (unk_0x422F9EDE839E6ABB())
	{
		SYSTEM::WAIT(0);
		func_16(&iLocal_252, Local_247);
	}
	if (unk_0xE59B7F5A03335350(Local_247, 0))
	{
		unk_0xD421BC740C5340C3(Local_247, 1);
	}
}

void func_37(int iParam0)//Position - 0x5325
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
	iVar0 = func_45(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_8FEC[iVar0 /*5*/];
		func_40(1, iVar1, 1);
		return;
	}
	iVar2 = func_39(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_38(iVar2);
}

void func_38(int iParam0)//Position - 0x537E
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

int func_39(int iParam0)//Position - 0x5401
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

void func_40(int iParam0, int iParam1, int iParam2)//Position - 0x5432
{
	func_41(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_41(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x5447
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
	if (func_43(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_42();
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

int func_42()//Position - 0x54C9
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

int func_43(int iParam0, int iParam1, int iParam2)//Position - 0x54FA
{
	if (func_44(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_44(int iParam0, int iParam1, int iParam2)//Position - 0x5515
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

int func_45(int iParam0)//Position - 0x5561
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

void func_46()//Position - 0x55AA
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

int func_47(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x5627
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
		if (func_49(0))
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
		if (!func_149(iParam2))
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
			func_48(iParam0, iParam4);
		}
	}
	return 2;
}

void func_48(var uParam0, int iParam1)//Position - 0x575E
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

int func_49(int iParam0)//Position - 0x57AD
{
	if (Global_8C41 == 15)
	{
		return 0;
	}
	if (func_149(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_50()//Position - 0x57CF
{
	func_51();
}

void func_51()//Position - 0x57DB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	
	if (unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		return;
	}
	fVar7 = func_102(func_103(iLocal_81) == joaat("maverick"), 0.45f, 0.3f);
	iVar2 = unk_0x3E12B546F3F2597A();
	if (unk_0x724D816EA203A79E(iVar2) && iVar2 != iLocal_54)
	{
		Local_247.f_1 = iVar2;
	}
	if (!iLocal_249)
	{
		func_133();
		SYSTEM::WAIT(0);
		return;
	}
	if (func_99(Local_247.f_3, Local_247, 1, 1, 1, 1, 0) || unk_0x7930B3E9C919E90F())
	{
		func_142(0);
		iLocal_249 = 0;
		if (unk_0x724D816EA203A79E(Local_247.f_3) && !unk_0x36CEFBE9B745A58D(Local_247.f_3))
		{
			if (unk_0xE59B7F5A03335350(Local_247, 0) && unk_0x62F3A07C43FFB568(Local_247.f_3, Local_247, 0))
			{
				unk_0x827661D9AAD4A354(Local_247.f_3, Local_247, unk_0x541C2AEF053615BC(Local_247, true) + Vector(100f, 100f, 100f) * unk_0xF90427F311003E57(Local_247) + Vector(500f, 0f, 0f), 4, unk_0x2D175DF90F6F05C3(Local_247), 262144, 50f, 50f, 1);
			}
			else
			{
				unk_0x5558ED6D4A2DEC93(Local_247.f_3, unk_0xBC25C936A095B5BA(), 1000f, -1, 0, 0);
			}
			unk_0x22321800954A532E(Local_247.f_3, true);
			unk_0xC8FD3EBBB90E8D7F(Local_247.f_3, 251, false);
			unk_0xC8FD3EBBB90E8D7F(Local_247.f_3, 255, false);
			Local_247.f_3 = 0;
		}
		if (unk_0x724D816EA203A79E(Local_247))
		{
			unk_0x1E7A09C1710FB071(&Local_247);
			Local_247 = 0;
		}
		if (func_1("PLAY_BASEJUMP_S"))
		{
			unk_0x7456702622C62EA0(1);
		}
		return;
	}
	fVar6 = SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), func_98(iLocal_81));
	if (fVar6 < 11664f)
	{
		if (!iLocal_251)
		{
			unk_0xF243B7A14FCFD0F4(func_97(iLocal_81));
			iLocal_251 = 1;
		}
	}
	else if (fVar6 > 13924f)
	{
		if (iLocal_251)
		{
			unk_0x2CA123B0622F495C(func_97(iLocal_81));
			iLocal_251 = 0;
		}
	}
	if (fVar6 < 10000f)
	{
		if (!unk_0x724D816EA203A79E(Local_247.f_3))
		{
			if ((unk_0xD6513D668481290A(func_97(iLocal_81)) && unk_0x724D816EA203A79E(Local_247)) && unk_0xE59B7F5A03335350(Local_247, 0))
			{
				Local_247.f_3 = unk_0xFD8987C090669BD5(Local_247, 4, func_97(iLocal_81), -1, 1, true);
				if (!unk_0x36CEFBE9B745A58D(Local_247.f_3))
				{
					unk_0xC3D5C68D28907D90(Local_247.f_3, 0);
					func_96(Local_247.f_3, iLocal_81);
					func_95();
					unk_0x36C3B58DA78A2679(Local_247.f_3, func_94(iLocal_81));
					func_92(&uLocal_82, 0, Local_247.f_3, func_93(iLocal_81), 1, 1);
					unk_0xDE2D2B13F24A979D(Local_247.f_3, -1);
					unk_0xC8FD3EBBB90E8D7F(Local_247.f_3, 251, true);
					unk_0xC8FD3EBBB90E8D7F(Local_247.f_3, 255, true);
				}
				unk_0x2D655AA68FA1736B(Local_247, true, true, 0);
				unk_0x7E482D75FA5D80A9(Local_247, fVar7);
			}
		}
		else
		{
			unk_0x77815D3407C6700D(Local_247.f_3, true, 0);
			if (!unk_0xEF0E25DA0CB6E8FF(iLocal_252) || !unk_0xF448AA2D7E08A675(iLocal_252))
			{
				unk_0x7E482D75FA5D80A9(Local_247, fVar7);
			}
			if (!unk_0xFA30DFD0084E92FE(Local_247.f_A9, 0))
			{
				if (unk_0x726D9204B160D23E())
				{
					if (!unk_0x36CEFBE9B745A58D(Local_247.f_3) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
					{
						if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), unk_0x541C2AEF053615BC(Local_247.f_3, true)) < 400f)
						{
							func_76(&uLocal_82, "OJBJAUD", func_90(iLocal_81), 8, 0, 0, 0);
							unk_0x56F2E1B5599188FA(Local_247.f_3, unk_0xBC25C936A095B5BA(), 6000, 0, 2);
							unk_0xF0059F27F7BB6680(&(Local_247.f_A9), 0);
						}
					}
				}
			}
		}
	}
	else if (fVar6 > 12100f)
	{
		if (unk_0x724D816EA203A79E(Local_247.f_3))
		{
			iVar3 = Local_247.f_3;
			unk_0x22321800954A532E(iVar3, true);
			if (!unk_0xD1DC4B08247A4317(iVar3))
			{
				unk_0x77815D3407C6700D(iVar3, true, 0);
				unk_0xF845620A03C7425B(&iVar3);
			}
			else
			{
				unk_0x02537C8C1BEEB477(&iVar3);
			}
		}
	}
	func_16(&iLocal_252, Local_247);
	if ((unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Local_247, 1) && !unk_0x4FCDC2EC534819EF(unk_0xBC25C936A095B5BA())) && func_74(Local_247.f_3, Local_247))
	{
		vVar5 = { unk_0x1483995DFFF0DEEA(Local_247, unk_0x823166D9421223CA(unk_0xBC25C936A095B5BA(), 0, 0f, 0f, 0f)) };
		if (vVar5.x < 0f || vVar5.y < 1f)
		{
			unk_0x9B90420B04C07704("DisableFlightMusic", 1);
			unk_0x004811915F93A42D(Local_247, "OFF");
			func_158(&uLocal_58, 64);
			bVar8 = true;
			if (iLocal_250)
			{
				if (func_1("PLAY_BASEJUMP_B") || func_1("PLAY_BASEJUMP_S"))
				{
					unk_0x7456702622C62EA0(1);
				}
				iLocal_250 = 0;
			}
			if (!unk_0xEF0E25DA0CB6E8FF(iLocal_252))
			{
				func_63(0, 0, 1);
				func_58(1);
				iLocal_252 = unk_0x585DE1CBEEB2D27D(26379945, func_57(iLocal_81), func_56(iLocal_81), func_55(iLocal_81), 0, 2);
				unk_0x348665177DBFB93B(iLocal_252, true);
				unk_0x062C9995BFD27B2A(true, false, 3000, 1, 0, 0);
				unk_0x2FB83B8BD6C05FD2(iLocal_252, "HAND_SHAKE", 0.07f);
			}
			if (unk_0xE59B7F5A03335350(Local_247, 0))
			{
				iVar0 = unk_0xF4FCC3C1048FF2AB(Local_247.f_3, -1273030092);
				if (iVar0 != 0 && iVar0 != 1)
				{
					unk_0xC8FD3EBBB90E8D7F(Local_247.f_3, 134, true);
					func_23(&iVar1);
					while (func_10(&iVar1) < 1f)
					{
						SYSTEM::WAIT(0);
						if (unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) || unk_0x4FCDC2EC534819EF(unk_0xBC25C936A095B5BA()))
						{
							func_54(iLocal_69);
							if (unk_0x724D816EA203A79E(Local_247.f_3) && !unk_0x36CEFBE9B745A58D(Local_247.f_3))
							{
								if (unk_0xE59B7F5A03335350(Local_247, 0) && unk_0x62F3A07C43FFB568(Local_247.f_3, Local_247, 0))
								{
									unk_0x827661D9AAD4A354(Local_247.f_3, Local_247, unk_0x541C2AEF053615BC(Local_247, true) + Vector(100f, 100f, 100f) * unk_0xF90427F311003E57(Local_247) + Vector(500f, 0f, 0f), 4, unk_0x2D175DF90F6F05C3(Local_247), 262144, 50f, 50f, 1);
								}
								else
								{
									unk_0x5558ED6D4A2DEC93(Local_247.f_3, unk_0xBC25C936A095B5BA(), 1000f, -1, 0, 0);
								}
								unk_0x22321800954A532E(Local_247.f_3, true);
								unk_0xC8FD3EBBB90E8D7F(Local_247.f_3, 251, false);
								unk_0xC8FD3EBBB90E8D7F(Local_247.f_3, 255, false);
							}
							if (unk_0x724D816EA203A79E(Local_247))
							{
								unk_0x1E7A09C1710FB071(&Local_247);
							}
							if (func_1("PLAY_BASEJUMP_S"))
							{
								unk_0x7456702622C62EA0(1);
							}
							unk_0x062C9995BFD27B2A(false, false, 3000, 1, 0, 0);
							unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
							return;
						}
						else
						{
							func_16(&iLocal_252, Local_247);
						}
					}
					func_22(&iLocal_253);
					while (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Local_247, 0) && func_53(&iLocal_253) < 2f)
					{
						SYSTEM::WAIT(0);
					}
					func_9(&iLocal_253);
					if (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Local_247, 0))
					{
						bVar8 = false;
						unk_0x062C9995BFD27B2A(false, false, 3000, 1, 0, 0);
						if (unk_0xEF0E25DA0CB6E8FF(iLocal_252))
						{
							unk_0x4EC087603E1DEF9C(iLocal_252, 0);
						}
						unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
						return;
					}
					if (!unk_0x1D403DFADBC2DE3C(Local_247.f_3, 0) && !unk_0x1D403DFADBC2DE3C(Local_247, 0))
					{
						unk_0xC5A6DFE2B8987B17(&iVar4);
						unk_0xDE2D2B13F24A979D(0, 500);
						unk_0x827661D9AAD4A354(0, Local_247, unk_0x541C2AEF053615BC(Local_247, true) + Vector(100f, 100f, 100f) * unk_0xF90427F311003E57(Local_247) + Vector(500f, 0f, 0f), 4, unk_0x2D175DF90F6F05C3(Local_247), 262144, 50f, 50f, 1);
						unk_0x535008C596714F9E(iVar4);
						unk_0xA8E6405305C0D7DF(Local_247.f_3, iVar4);
						unk_0x02DAF06EA4F08219(&iVar4);
						if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
						{
							unk_0xC3D5C68D28907D90(unk_0xBC25C936A095B5BA(), 0);
							unk_0x9965F1612928953B(unk_0xBC25C936A095B5BA(), 1);
						}
					}
					func_23(&iVar1);
					while (func_10(&iVar1) < 2f)
					{
						SYSTEM::WAIT(0);
						func_16(&iLocal_252, Local_247);
					}
				}
			}
		}
	}
	if (!bVar8)
	{
		if ((unk_0xE59B7F5A03335350(Local_247, 0) && SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), unk_0x541C2AEF053615BC(Local_247, true)) < 225f) && !unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
		{
			if ((!iLocal_250 || (iLocal_81 == 3 && !func_1("PLAY_BASEJUMP_B"))) || (iLocal_81 != 3 && !func_1("PLAY_BASEJUMP_S")))
			{
				if (iLocal_81 == 3)
				{
					if (!Global_10AB8)
					{
						func_52("PLAY_BASEJUMP_B");
					}
				}
				else if (!Global_10AB8)
				{
					func_52("PLAY_BASEJUMP_S");
				}
				iLocal_250 = 1;
			}
		}
		else if (iLocal_250)
		{
			if (func_1("PLAY_BASEJUMP_B") || func_1("PLAY_BASEJUMP_S"))
			{
				unk_0x7456702622C62EA0(1);
			}
			iLocal_250 = 0;
		}
		if ((!unk_0x36CEFBE9B745A58D(Local_247.f_3) && unk_0xF4FCC3C1048FF2AB(Local_247.f_3, -982327190) != 0) && unk_0xF4FCC3C1048FF2AB(Local_247.f_3, -982327190) != 1)
		{
			unk_0xDE2D2B13F24A979D(Local_247.f_3, -1);
		}
	}
}

void func_52(char* sParam0)//Position - 0x601E
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 1, true, -1);
}

float func_53(int iParam0)//Position - 0x6034
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
	return 0f;
}

void func_54(int iParam0)//Position - 0x6070
{
	if (iLocal_59 < 5)
	{
		if (iParam0 != 263)
		{
			if (iParam0 < 0 || iParam0 >= 263)
			{
			}
			func_145(iParam0, 0, 0);
		}
		iLocal_69 = 263;
		func_106(&iLocal_60);
		iLocal_59 = 9;
	}
}

float func_55(int iParam0)//Position - 0x60B3
{
	switch (iParam0)
	{
		case 0:
			return 46.7708f;
		
		case 1:
			return 30.5578f;
		
		case 2:
			return 31.1151f;
		
		case 3:
			return 43.4229f;
		
		case 7:
			return 48.6851f;
		
		case 9:
			return 46.947f;
		
		case 10:
			return 40.6109f;
		
		case 11:
			return 32.1049f;
			break;
	}
	return 45f;
}

Vector3 func_56(int iParam0)//Position - 0x613A
{
	switch (iParam0)
	{
		case 0:
			return 6.5672f, 0f, -15.3269f;
		
		case 1:
			return 1.6743f, 0f, 13.7295f;
		
		case 2:
			return 2.2348f, 0f, 141.3733f;
		
		case 3:
			return 0.7682f, 0f, -154.1293f;
		
		case 7:
			return -1.8117f, 0f, 100.4016f;
		
		case 9:
			return 0.7611f, 0f, -71.8023f;
		
		case 10:
			return 2.3742f, 0f, 86.6743f;
		
		case 11:
			return 0.73f, 0f, 109.0678f;
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_57(int iParam0)//Position - 0x61EF
{
	switch (iParam0)
	{
		case 0:
			return -840.2545f, -1317.986f, 6.1066f;
		
		case 1:
			return 1210.955f, 153.4641f, 81.7073f;
		
		case 2:
			return 2489.731f, 1537.972f, 36.1861f;
		
		case 3:
			return -286.5149f, 6665.522f, 6.9225f;
		
		case 7:
			return -714.035f, 4491.083f, 79.9083f;
		
		case 9:
			return -1396.963f, 4363.597f, 43.1246f;
		
		case 10:
			return 2547.738f, 4967.683f, 46.0189f;
		
		case 11:
			return 1091.145f, -169.1484f, 70.757f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_58(bool bParam0)//Position - 0x62C4
{
	if (bParam0)
	{
		func_62();
		if (Global_389D.f_1 == 10 || Global_389D.f_1 == 9)
		{
			unk_0xF0059F27F7BB6680(&Global_93C, 16);
		}
		Global_389D.f_1 = 1;
		if (func_110(0))
		{
			func_59(0);
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

void func_59(int iParam0)//Position - 0x6327
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
	if (!func_60())
	{
		Global_389D.f_1 = 3;
	}
}

int func_60()//Position - 0x6397
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_61(bool bParam0, bool bParam1)//Position - 0x63BE
{
	if (bParam0)
	{
		if (func_110(0))
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

void func_62()//Position - 0x6432
{
	if (Global_389D.f_1 == 9 || Global_389D.f_1 == 10)
	{
		Global_3DED = 0;
		Global_3DE9 = 1;
	}
}

void func_63(int iParam0, int iParam1, int iParam2)//Position - 0x645B
{
	unk_0xDDCAA2E64649E083(unk_0xFC1CAE18F3ECBF2D(), false, iParam0);
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		unk_0x7A71B0C6DDC0D7DA(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 15f);
	}
	unk_0xD5E53AA0828339DA(iParam1);
	func_59(0);
	func_65(1, 1, iParam2, 0, 0);
	unk_0x43F06392C4EF25E0(false);
	unk_0x59B038076F830627(false);
	func_64(23, 1);
}

void func_64(int iParam0, bool bParam1)//Position - 0x64B2
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

void func_65(bool bParam0, bool bParam1, var uParam2, int iParam3, bool bParam4)//Position - 0x64D4
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
			if (!func_60())
			{
				Global_389D.f_1 = 3;
			}
			Global_3DB8 = 5;
		}
		func_72(1, iParam3, uParam2, 0);
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
		func_72(0, iParam3, uParam2, 0);
		if (unk_0x7AF0088ABFA713B6())
		{
			if ((((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_70(unk_0xB5CEFD608600A09F())) && !func_67(unk_0xB5CEFD608600A09F(), 0)) && !func_66()) && !bParam4)
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

bool func_66()//Position - 0x65FD
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_27.f_12, 14);
}

bool func_67(int iParam0, int iParam1)//Position - 0x661A
{
	bool bVar0;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		bVar0 = func_68(-1, 0) == 8;
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

int func_68(int iParam0, bool bParam1)//Position - 0x6665
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_69();
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

int func_69()//Position - 0x66A6
{
	return Global_1407E0;
}

int func_70(int iParam0)//Position - 0x66B2
{
	if (func_67(iParam0, 0))
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

bool func_71()//Position - 0x66F4
{
	return unk_0xFA30DFD0084E92FE(Global_240006, 3);
}

int func_72(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x6705
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

void func_73(int iParam0)//Position - 0x6738
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

int func_74(int iParam0, int iParam1)//Position - 0x675B
{
	if (((!unk_0x724D816EA203A79E(iParam0) || !unk_0x724D816EA203A79E(iParam1)) || unk_0x1D403DFADBC2DE3C(iParam0, 0)) || unk_0x1D403DFADBC2DE3C(iParam1, 0))
	{
		return 0;
	}
	if (unk_0x62F3A07C43FFB568(iParam0, iParam1, 0) && func_75(iParam0, iParam1) == -1)
	{
		return 1;
	}
	return 0;
}

int func_75(int iParam0, int iParam1)//Position - 0x67B8
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

int func_76(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x682A
{
	func_89(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_77(sParam2, iParam3, 0);
}

int func_77(char* sParam0, int iParam1, bool bParam2)//Position - 0x6878
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
					func_88();
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
		if (func_111(8, -1))
		{
			return 0;
		}
		Global_3E04 = { Global_3DFE };
		func_87();
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
				func_81();
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
				if (func_80())
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
			if (func_60())
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
			func_79();
			Global_3DC2 = bParam2;
		}
		Global_3DBA = iParam1;
		StringCopy(&Global_3C3B, sParam0, 24);
		Global_394A = 0;
		func_78();
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
		func_88();
	}
	return 0;
}

void func_78()//Position - 0x6B44
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

void func_79()//Position - 0x6B75
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

int func_80()//Position - 0x6C0A
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

void func_81()//Position - 0x6CA3
{
	if (func_131(14))
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
		Global_389D = func_82();
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

var func_82()//Position - 0x6D45
{
	func_83();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_83()//Position - 0x6D5E
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_86(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_85(unk_0xBC25C936A095B5BA());
			if (func_84(iVar0) && (!func_131(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_84(Global_19B04.f_932.f_21B.f_10CD))
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

bool func_84(int iParam0)//Position - 0x6E5B
{
	return iParam0 < 3;
}

int func_85(int iParam0)//Position - 0x6E67
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_86(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_86(int iParam0)//Position - 0x6EA4
{
	if (func_84(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_87()//Position - 0x6ECE
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

void func_88()//Position - 0x6F25
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

void func_89(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x6F7C
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

char* func_90(int iParam0)//Position - 0x6FD2
{
	bool bVar0;
	
	bVar0 = func_85(unk_0xBC25C936A095B5BA()) == true;
	switch (iParam0)
	{
		case 0:
			return func_91(bVar0, "BJ_01F", "BJ_01L");
		
		case 1:
			return func_91(bVar0, "BJ_02F", "BJ_02L");
		
		case 2:
			return func_91(bVar0, "BJ_03F", "BJ_03L");
		
		case 3:
			return func_91(bVar0, "BJ_04FG", "BJ_04L");
		
		case 7:
			return "BJ_08L";
		
		case 9:
			return func_91(bVar0, "BJ_10LF", "BJ_10L");
		
		case 10:
			return func_91(bVar0, "BJ_11LF", "BJ_11L");
		
		case 11:
			return "BJ_12L";
		
		default:
	}
	return "";
}

char* func_91(bool bParam0, char* sParam1, char* sParam2)//Position - 0x7094
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

void func_92(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x70AB
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

char* func_93(int iParam0)//Position - 0x7146
{
	return "EXT1HELIPILOT";
}

char* func_94(int iParam0)//Position - 0x7152
{
	switch (iParam0)
	{
		case 0:
			return "EXT1HELIPILOT";
		
		case 1:
			return "EXT1HELIPILOT";
		
		case 2:
			return "EXT1HELIPILOT";
		
		case 3:
			return "EXT1HELIPILOT";
		
		case 7:
			return "BJPilot_Train";
		
		case 9:
			return "EXT1HELIPILOT";
		
		case 10:
			return "EXT1HELIPILOT";
		
		case 11:
			return "BJPilot_Canal";
		
		default:
	}
	return "EXT1HELIPILOT";
}

void func_95()//Position - 0x71CD
{
	iLocal_46++;
}

void func_96(int iParam0, int iParam1)//Position - 0x71DB
{
	if (unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		return;
	}
	switch (iParam1)
	{
		case 7:
			unk_0xB0031DDAE4FF0BC3(iParam0, 0, 0, 1, 0);
			unk_0xB0031DDAE4FF0BC3(iParam0, 2, 1, 0, 0);
			unk_0xB0031DDAE4FF0BC3(iParam0, 3, 0, 0, 0);
			unk_0xB0031DDAE4FF0BC3(iParam0, 4, 0, 0, 0);
			unk_0xB0031DDAE4FF0BC3(iParam0, 8, 1, 0, 0);
			unk_0x70FF586D857F1A81(iParam0, 1, 0, 0, false);
			break;
		
		case 11:
			unk_0xB0031DDAE4FF0BC3(iParam0, 0, 1, 0, 0);
			unk_0xB0031DDAE4FF0BC3(iParam0, 2, 2, 0, 0);
			unk_0xB0031DDAE4FF0BC3(iParam0, 3, 1, 0, 0);
			unk_0xB0031DDAE4FF0BC3(iParam0, 4, 0, 2, 0);
			unk_0x70FF586D857F1A81(iParam0, 0, 1, 2, false);
			unk_0x70FF586D857F1A81(iParam0, 1, 1, 0, false);
			break;
	}
}

int func_97(int iParam0)//Position - 0x7282
{
	switch (iParam0)
	{
		case 0:
			return joaat("s_m_y_pilot_01");
		
		case 1:
			return joaat("s_m_y_pilot_01");
		
		case 2:
			return joaat("s_m_y_pilot_01");
		
		case 3:
			return joaat("s_m_y_pilot_01");
		
		case 7:
			return joaat("a_m_y_hippy_01");
		
		case 9:
			return joaat("s_m_y_pilot_01");
		
		case 10:
			return joaat("s_m_y_pilot_01");
		
		case 11:
			return joaat("a_m_m_genfat_02");
		
		default:
	}
	return 0;
}

Vector3 func_98(int iParam0)//Position - 0x7302
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

int func_99(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x744C
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = unk_0xBC25C936A095B5BA();
	if (((!unk_0x724D816EA203A79E(iParam1) || unk_0x1D403DFADBC2DE3C(iParam1, 0)) || !unk_0xE59B7F5A03335350(iParam1, 0)) || unk_0x7544D2465B934445(iParam1))
	{
		return 1;
	}
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (!unk_0x36CEFBE9B745A58D(iParam0) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			vVar1 = { unk_0x541C2AEF053615BC(iParam0, true) };
			if (bParam3)
			{
				if (unk_0x8F97799512B006B7(iParam0, iVar0))
				{
					return 1;
				}
			}
			if (bParam5)
			{
				if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0)
				{
					return 1;
				}
			}
			if (bParam6)
			{
				if (unk_0xE921F8171F0733B3(iVar0, iParam0))
				{
					return 1;
				}
			}
			if (bParam4)
			{
				if (unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), iParam0) || unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), iParam0))
				{
					if (unk_0xC5B8A5F778E321DD(iParam0, iVar0, 90f))
					{
						if (func_100(iParam0, 1) < 10f)
						{
							return 1;
						}
					}
				}
			}
			if (unk_0x5237AF95232D78C5(iParam0, 0))
			{
				if (unk_0xD9C1758D86688CEA(unk_0x9FE9D386222EEE47(iParam0, 0), iVar0, 1))
				{
					return 1;
				}
			}
			if (unk_0x72C9157015C2151B(iVar0, 4))
			{
				if (unk_0x32E373675659FDB0(iVar0))
				{
					if (unk_0x4DBCE270B354E123(iParam0, unk_0x541C2AEF053615BC(iVar0, true), 45f, 45f, 45f, false, true, 0))
					{
						return 1;
					}
				}
			}
			if (unk_0x04880508C862E589(vVar1, 4f, 1))
			{
				return 1;
			}
			if (unk_0x876474582C5DECDE((vVar1.x - 5f), (vVar1.y - 5f), (vVar1.z - 5f), (vVar1.x + 5f), (vVar1.y + 5f), (vVar1.z + 5f), 0))
			{
				return 1;
			}
			if (unk_0xA4813477CC5DD00F(iParam0) || !func_74(iParam0, iParam1))
			{
				return 1;
			}
			if ((unk_0xC9FA5D38428AB6BE(-1, vVar1, 25f) && !unk_0xC9FA5D38428AB6BE(11, vVar1, 25f)) && !unk_0xC9FA5D38428AB6BE(13, vVar1, 25f))
			{
				return 1;
			}
		}
		else if (bParam2)
		{
			return 1;
		}
	}
	return 0;
}

float func_100(int iParam0, bool bParam1)//Position - 0x763B
{
	return func_101(unk_0xA95CF30C72EB526E(unk_0xFC1CAE18F3ECBF2D()), iParam0, bParam1);
}

float func_101(int iParam0, int iParam1, bool bParam2)//Position - 0x7653
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

float func_102(bool bParam0, float fParam1, float fParam2)//Position - 0x76B1
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_103(int iParam0)//Position - 0x76C8
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 7:
		case 9:
		case 10:
		case 11:
			return joaat("maverick");
			break;
		
		case 4:
			return joaat("bati");
			break;
	}
	return 0;
}

int func_104(int iParam0, bool bParam1)//Position - 0x771E
{
	int iVar0;
	
	iVar0 = func_105(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x6A9CDB766DF7216F(unk_0xFC1CAE18F3ECBF2D()))
	{
		return 0;
	}
	if (func_110(0))
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

int func_105(int iParam0)//Position - 0x77D6
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

void func_106(int iParam0)//Position - 0x7811
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_105(*iParam0);
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

void func_107(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0x7868
{
	int iVar0;
	
	if (unk_0xB731B8C5BCE89836(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x7930B3E9C919E90F())
	{
		if (!*iParam0 == -1)
		{
			func_106(iParam0);
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

int func_108(int iParam0)//Position - 0x7993
{
	return 0;
	return 1;
}

var func_109()//Position - 0x79A0
{
	return Global_10AB8;
}

int func_110(int iParam0)//Position - 0x79AC
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

bool func_111(int iParam0, int iParam1)//Position - 0x7A06
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

bool func_112()//Position - 0x7A41
{
	return unk_0x105601648511CC64() <= Global_43C1.f_1671 + 100;
}

int func_113()//Position - 0x7A56
{
	if (unk_0xB731B8C5BCE89836(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_114(bool bParam0)//Position - 0x7A70
{
	if (bParam0)
	{
		return (Global_4336.f_4 && Global_4336.f_68 == 4);
	}
	return Global_4336.f_4;
}

int func_115()//Position - 0x7A99
{
	return 1;
}

void func_116(var uParam0, int iParam1)//Position - 0x7AA2
{
	func_117(uParam0, iParam1);
}

void func_117(var uParam0, var uParam1)//Position - 0x7AB2
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_118()//Position - 0x7AC3
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

int func_119(int iParam0)//Position - 0x7BCD
{
	int iVar0;
	
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				iVar0 = func_82();
				if (!func_84(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_126()) || Global_1974B) || Global_62BF) || func_125()) || func_111(8, -1)) || func_124()) || func_123()) || func_122()) || func_113()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1) || func_126()) || Global_62BF) || func_125()) || func_111(8, -1)) || func_122()) || func_124()) || func_123()) || func_113()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_126()) || Global_1974B) || Global_62BF) || func_125()) || func_111(8, -1)) || func_122()) || func_124()) || func_123()) || func_113()) || Global_19B04.f_1DEB.f_397[iVar0] == 5) || Global_8E64 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_126()) || Global_1974B) || Global_62BF) || func_125()) || func_111(8, -1)) || func_124()) || func_123()) || func_113()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_126() || unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0) || func_111(8, -1)) || func_113()) || func_121()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_111(8, -1) || func_124()) || func_123()) || func_121()) || func_120())
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
							if ((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || func_126()) || Global_62BF) || func_125()) || func_111(8, -1)) || func_123()) || func_122()) || func_113()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || !unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) || !unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F())) || !unk_0x726D9204B160D23E()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || func_126()) || func_123()) || Global_1974B) || Global_62BF) || func_125()) || Global_90C1) || func_111(8, -1)) || func_122()) || func_121()) || func_113()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || !unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) || !unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F())) || !unk_0x726D9204B160D23E()) || unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0)) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1)) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0x9273B3557334635D(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || func_126()) || Global_1974B) || Global_62BF) || func_125()) || func_111(8, -1)) || func_122()) || func_121()) || func_124()) || func_123()) || func_113())
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

var func_120()//Position - 0x82ED
{
	return Global_16B42.f_1;
}

int func_121()//Position - 0x82FB
{
	if (Global_15FA6 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_147B0[Global_15FA6 /*34*/].f_F, 13);
	}
	return 0;
}

int func_122()//Position - 0x8321
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

bool func_123()//Position - 0x834B
{
	return Global_16B4F.f_142 > 0;
}

bool func_124()//Position - 0x835C
{
	return Global_16B4F.f_141 > 0;
}

var func_125()//Position - 0x836D
{
	return Global_140856;
}

int func_126()//Position - 0x8379
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		return Global_161D2.f_2C == 1;
	}
	return 0;
}

int func_127()//Position - 0x8395
{
	if (unk_0xB731B8C5BCE89836(joaat("stripperhome")) > 0)
	{
		return 1;
	}
	return 0;
}

var func_128()//Position - 0x83AF
{
	return Global_15B64;
}

int func_129(int iParam0)//Position - 0x83BB
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_131(6) || func_131(7))
			{
				return 1;
			}
			else
			{
				return func_129(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_149(5))
			{
				if (func_119(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_130(int iParam0)//Position - 0x842D
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return unk_0x2DA8CA50A72528FB(Global_6416[iVar0 /*23*/].f_13);
}

bool func_131(int iParam0)//Position - 0x8469
{
	return Global_8C41 == iParam0;
}

void func_132(var uParam0, int iParam1)//Position - 0x8477
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_133()//Position - 0x8488
{
	if (bLocal_248)
	{
		switch (iLocal_81)
		{
			case 0:
				func_134(-829.3729f, -1289.817f, 4.0005f, 196.9543f);
				break;
			
			case 1:
				func_134(1208.197f, 174.5777f, 81.0003f, 138.8786f);
				break;
			
			case 2:
				func_134(2463.904f, 1509.964f, 35.0372f, 88.9199f);
				break;
			
			case 3:
				func_134(-274.6559f, 6633.891f, 7.5426f, 130.4063f);
				break;
			
			case 7:
				func_134(-742.5047f, 4493.466f, 75.2206f, 180.991f);
				break;
			
			case 9:
				func_134(-1367.687f, 4381.998f, 41.4017f, 277.8339f);
				break;
			
			case 10:
				func_134(2517.962f, 4971.619f, 44.7057f, 15.3895f);
				break;
			
			case 11:
				func_134(1054.534f, -179.6562f, 70.3162f, 30.046f);
				break;
			
			default:
				break;
			}
	}
}

void func_134(vector3 vParam0, float fParam1)//Position - 0x85A8
{
	var uVar0;
	bool bVar1;
	
	fLocal_57 = SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), vParam0);
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && (fLocal_57 > 25f || unk_0x17FAADF9916EF741()))
	{
		if (fLocal_57 < 25600f)
		{
			if (!unk_0x33CC9445B2DF9387(vParam0, 6f) || unk_0x17FAADF9916EF741())
			{
				bVar1 = true;
			}
		}
		else
		{
			bVar1 = true;
		}
	}
	if (bVar1)
	{
		if (unk_0x724D816EA203A79E(Local_247))
		{
			unk_0xCF6040807CC0E4A5(&Local_247);
		}
		unk_0x6C5F5B5F6894CCE3(vParam0, 4f, 1, 0, 0, false);
		if (iLocal_81 == 0)
		{
			unk_0x379ACE23D404525C(-835.7629f, -1298.777f, 0f, -815.1855f, -1283.906f, 10f, false, 1);
		}
		if (iLocal_81 == 3)
		{
			Local_247 = unk_0x61C05BF08A1E0EFE(joaat("frogger"), vParam0, fParam1, true, true, false);
			unk_0x6012A6A4F2950585(Local_247, 5);
		}
		else
		{
			Local_247 = unk_0x61C05BF08A1E0EFE(joaat("maverick"), vParam0, fParam1, true, true, false);
			unk_0x6012A6A4F2950585(Local_247, 6);
		}
		iLocal_54 = Local_247;
		unk_0x656194E145691D3E(iLocal_54, true);
		if (unk_0x2084D4C6C2DF616F(vParam0, &uVar0, 0, 0))
		{
			unk_0xF0A40F19AAB79E88(Local_247, 1084227584);
		}
		unk_0xA73D1278857991A2(Local_247, true);
		iLocal_249 = 1;
	}
	else
	{
		iLocal_249 = 0;
	}
}

bool func_135()//Position - 0x86D8
{
	return func_136(&uLocal_79);
}

int func_136(var uParam0)//Position - 0x86E6
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

void func_137()//Position - 0x872D
{
	switch (iLocal_81)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 6:
		case 7:
		case 9:
		case 10:
		case 11:
			func_139();
			break;
		
		default:
			break;
	}
	func_138(&uLocal_79);
}

void func_138(var uParam0)//Position - 0x8782
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

void func_139()//Position - 0x87B2
{
	if (iLocal_81 == 3)
	{
		func_140(&uLocal_79, joaat("frogger"));
	}
	else
	{
		func_140(&uLocal_79, joaat("maverick"));
	}
}

int func_140(var uParam0, int iParam1)//Position - 0x87DB
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
	iVar1 = func_141(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_141(var uParam0)//Position - 0x8838
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

void func_142(int iParam0)//Position - 0x8864
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

int func_143()//Position - 0x8885
{
	vector3 vVar0;
	float fVar1;
	
	if (unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		return 0;
	}
	vVar0 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
	fVar1 = SYSTEM::VDIST2(vVar0, vLocal_56);
	if (fVar1 < (10f * 10f))
	{
		return 1;
	}
	else if (fVar1 < (80f * 80f))
	{
		if (unk_0x33CC9445B2DF9387(vLocal_56, 5f))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_144(int iParam0)//Position - 0x88F8
{
	iLocal_59 = iParam0;
}

void func_145(int iParam0, bool bParam1, bool bParam2)//Position - 0x8904
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

int func_146()//Position - 0x8A0D
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

int func_147()//Position - 0x8A2A
{
	if (Global_15FA6 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_147B0[Global_15FA6 /*34*/].f_F, 20);
	}
	return 0;
}

bool func_148(int iParam0, int iParam1)//Position - 0x8A50
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

bool func_149(int iParam0)//Position - 0x8A9D
{
	return func_150(iParam0, Global_8C41);
}

int func_150(int iParam0, int iParam1)//Position - 0x8AAE
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

bool func_151(var uParam0, int iParam1)//Position - 0x8C8F
{
	return (uParam0 && iParam1) != 0;
}

void func_152()//Position - 0x8C9E
{
	iLocal_63 = 0;
	if (unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		func_116(&uLocal_58, 8388608);
		return;
	}
	StringCopy(&Local_51, "bj", 64);
	iLocal_81 = func_156(vLocal_56, 1);
	func_116(&uLocal_58, 64);
	switch (iLocal_81)
	{
		case 0:
			iLocal_69 = 125;
			break;
		
		case 1:
			iLocal_69 = 126;
			break;
		
		case 2:
			iLocal_69 = 127;
			break;
		
		case 3:
			iLocal_69 = 128;
			break;
		
		case 7:
			iLocal_69 = 132;
			break;
		
		case 9:
			iLocal_69 = 134;
			break;
		
		case 10:
			iLocal_69 = 135;
			break;
		
		case 11:
			iLocal_69 = 136;
			break;
		
		default:
			break;
	}
	if (iLocal_81 == 4)
	{
		if (func_155(19))
		{
			func_116(&uLocal_58, 8388608);
			return;
		}
	}
	if (iLocal_81 == 7)
	{
		if (func_154(16) && !func_154(65))
		{
			func_116(&uLocal_58, 8388608);
			return;
		}
	}
	if (iLocal_81 == 0)
	{
		func_116(&uLocal_58, 524288);
	}
	if (unk_0x7930B3E9C919E90F())
	{
		func_116(&uLocal_58, 8388608);
		return;
	}
	func_116(&uLocal_58, 4194304);
	func_116(&uLocal_58, 16);
	fLocal_66 = (SYSTEM::TO_FLOAT(func_153(iLocal_69)) + 5f);
	if (iLocal_69 != 263)
	{
		if (!func_148(0, iLocal_63))
		{
			bLocal_248 = false;
			func_54(iLocal_69);
		}
		else
		{
			bLocal_248 = true;
		}
	}
	else
	{
		bLocal_248 = false;
	}
	if (unk_0xB731B8C5BCE89836(joaat("bj")) > 0)
	{
	}
	else
	{
		func_158(&uLocal_58, 8);
	}
	if (func_131(12))
	{
		func_116(&uLocal_58, 8);
	}
	iLocal_61 = 23500;
}

int func_153(int iParam0)//Position - 0x8E30
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

int func_154(int iParam0)//Position - 0x8F48
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_19B04.f_2360.f_14A[iParam0 /*6*/];
}

bool func_155(int iParam0)//Position - 0x8F74
{
	return Global_19773[iParam0 /*10*/].f_1;
}

int func_156(vector3 vParam0, int iParam1)//Position - 0x8F86
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = 0;
	while (iVar3 < 13)
	{
		if (iParam1 == func_157(iVar3))
		{
			fVar1 = SYSTEM::VDIST2(vParam0, func_98(iVar3));
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

int func_157(int iParam0)//Position - 0x8FD5
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

void func_158(var uParam0, int iParam1)//Position - 0x901C
{
	func_159(uParam0, iParam1);
}

void func_159(var uParam0, var uParam1)//Position - 0x902C
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_160(bool bParam0)//Position - 0x9041
{
	if (bParam0)
	{
		if (iLocal_69 != 263)
		{
			func_145(iLocal_69, 0, 0);
		}
	}
	func_106(&iLocal_60);
	if (func_151(uLocal_58, 2))
	{
		func_5();
		func_158(&uLocal_58, 2);
		func_7(&iLocal_62);
	}
	iLocal_62 = -1;
	func_161();
	unk_0x95E4B6F3ED223F5A();
}

void func_161()//Position - 0x908A
{
	func_158(&uLocal_58, 4);
	func_162();
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

void func_162()//Position - 0x90C7
{
}

