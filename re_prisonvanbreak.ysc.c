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
	bool bLocal_47 = 0;
	bool bLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	var uLocal_52 = 16;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
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
	var uLocal_77 = 0;
	var uLocal_78 = 0;
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
	vector3 vLocal_217 = { 0f, 0f, 0f };
	int iLocal_218 = 0;
	int iLocal_219 = 0;
	int iLocal_220 = 0;
	int iLocal_221 = 0;
	int iLocal_222[3] = { 0, 0, 0 };
	int iLocal_223 = 0;
	int iLocal_224 = 0;
	int iLocal_225[3] = { 0, 0, 0 };
	int iLocal_226 = 0;
	int iLocal_227 = 0;
	int iLocal_228 = 0;
	int iLocal_229 = 0;
	int iLocal_230 = 0;
	int iLocal_231 = 0;
	int iLocal_232 = 0;
	var uLocal_233[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_234 = 0;
	bool bLocal_235 = 0;
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	int iLocal_240 = 0;
	int iLocal_241 = 0;
	int iLocal_242 = 0;
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	vector3 vLocal_245 = { 0f, 0f, 0f };
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
	bool bLocal_256 = 0;
	int iLocal_257 = 0;
	bool bLocal_258 = 0;
	bool bLocal_259 = 0;
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	int iLocal_264[2] = { 0, 0 };
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267[3] = { 0, 0, 0 };
	var uLocal_268[2] = { 0, 0 };
	struct<2> Local_269 = { 0, 5 } ;
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
	var uLocal_285 = 5;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
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
	iLocal_18 = 3;
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
	vLocal_217 = { ScriptParam_269.f_1[0 /*3*/] };
	if (unk_0xE8A79675302ED812(11))
	{
		func_142();
	}
	if (func_89(vLocal_217, -1, 0, 0, 0))
	{
		func_86(-1);
	}
	else
	{
		unk_0x95E4B6F3ED223F5A();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (unk_0x684B06333594F9EA() || iLocal_246)
		{
			unk_0x2E94C9549322098D("RE_CR", 0);
			switch (iLocal_44)
			{
				case 0:
					if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vLocal_217, 100f, 100f, 100f, false, true, 0))
					{
						func_142();
					}
					if (iLocal_45)
					{
						iLocal_44 = 1;
					}
					else
					{
						func_85();
						iLocal_46 = 1;
					}
					break;
				
				case 1:
					unk_0x6A095EC1C9AF12A4(unk_0xB5CEFD608600A09F());
					func_84();
					func_82();
					if (!func_81())
					{
						func_78();
					}
					if (!bLocal_47)
					{
						func_67();
					}
					if (!bLocal_48 && !bLocal_256)
					{
						func_63();
					}
					if (iLocal_240 && !bLocal_47)
					{
						func_62(iLocal_222[0]);
						func_62(iLocal_222[1]);
						func_62(iLocal_222[2]);
					}
					if ((!iLocal_240 && !bLocal_256) && func_81())
					{
						func_61(iLocal_225[0], &(uLocal_233[0]), 1, 0.7f);
						func_61(iLocal_225[0], &(uLocal_233[1]), 5, 0.7f);
						func_61(iLocal_225[0], &(uLocal_233[2]), 0, 0.7f);
						func_61(iLocal_225[0], &(uLocal_233[3]), 4, 0.7f);
						func_61(iLocal_225[1], &(uLocal_233[4]), 1, 0.7f);
						func_61(iLocal_225[1], &(uLocal_233[5]), 5, 0.7f);
						func_61(iLocal_225[1], &(uLocal_233[6]), 0, 0.7f);
						func_61(iLocal_225[1], &(uLocal_233[7]), 4, 0.7f);
						func_61(iLocal_225[2], &(uLocal_233[8]), 1, 0.7f);
						func_61(iLocal_225[2], &(uLocal_233[9]), 5, 0.7f);
						func_61(iLocal_225[2], &(uLocal_233[10]), 0, 0.7f);
						func_61(iLocal_225[2], &(uLocal_233[11]), 4, 0.7f);
						func_61(iLocal_226, &(uLocal_233[12]), 1, 0.7f);
						func_61(iLocal_226, &(uLocal_233[13]), 5, 0.7f);
						func_61(iLocal_226, &(uLocal_233[14]), 0, 0.7f);
						func_61(iLocal_226, &(uLocal_233[15]), 4, 0.7f);
					}
					if (!iLocal_238)
					{
						func_59();
					}
					else
					{
						if (!bLocal_256)
						{
							func_58();
						}
						else if (!iLocal_253 && bLocal_47)
						{
							func_56();
						}
						if (!iLocal_257)
						{
							func_55();
						}
						func_54();
					}
					func_2();
					func_1();
					break;
			}
		}
		else
		{
			func_142();
		}
	}
}

void func_1()//Position - 0x31D
{
}

void func_2()//Position - 0x325
{
	int iVar0;
	
	if (!iLocal_251)
	{
		if (unk_0x1D403DFADBC2DE3C(iLocal_222[0], 0) || unk_0x36CEFBE9B745A58D(iLocal_222[0]))
		{
			func_53(&uLocal_52, 4);
			iLocal_251 = 1;
		}
	}
	if (!bLocal_234)
	{
		if ((unk_0x1D403DFADBC2DE3C(iLocal_218, 0) || unk_0x36CEFBE9B745A58D(iLocal_218)) || unk_0x626040CF48EDAAD2(iLocal_218))
		{
			unk_0xF243B7A14FCFD0F4(joaat("prop_security_case_01"));
			if (unk_0xD6513D668481290A(joaat("prop_security_case_01")))
			{
				vLocal_245 = { unk_0x733A3EDEC245A3D2(iLocal_218, 1067030938, 1069547520) };
				vLocal_245.z = (vLocal_245.z + 0.3f);
				iLocal_264[0] = unk_0x37B86314BDCAA6F0(joaat("pickup_money_case"), vLocal_245 + Vector(-0.49f, 0f, 0f), -90f, 0f, 0f, 0, 5000, 2, 1, joaat("prop_security_case_01"));
				if (!unk_0x2DA8CA50A72528FB(uLocal_268[0]))
				{
					uLocal_268[0] = func_51(iLocal_264[0]);
				}
				bLocal_234 = true;
				func_53(&uLocal_52, 5);
			}
		}
	}
	if (!bLocal_235)
	{
		if ((unk_0x1D403DFADBC2DE3C(iLocal_219, 0) || unk_0x36CEFBE9B745A58D(iLocal_219)) || unk_0x626040CF48EDAAD2(iLocal_219))
		{
			unk_0xF243B7A14FCFD0F4(joaat("prop_security_case_01"));
			if (unk_0xD6513D668481290A(joaat("prop_security_case_01")))
			{
				vLocal_245 = { unk_0x733A3EDEC245A3D2(iLocal_219, 1067030938, 1069547520) };
				vLocal_245.z = (vLocal_245.z + 0.3f);
				iLocal_264[1] = unk_0x37B86314BDCAA6F0(joaat("pickup_money_case"), vLocal_245 + Vector(-0.49f, 0f, 0f), -90f, 0f, 0f, 0, 5000, 2, 1, joaat("prop_security_case_01"));
				if (!unk_0x2DA8CA50A72528FB(uLocal_268[1]))
				{
					uLocal_268[1] = func_51(iLocal_264[1]);
				}
				bLocal_235 = true;
				func_53(&uLocal_52, 6);
			}
		}
	}
	if (!bLocal_256)
	{
		if (!iLocal_248)
		{
			if (unk_0x724D816EA203A79E(iLocal_218))
			{
				if (unk_0x1D403DFADBC2DE3C(iLocal_218, 0) || unk_0x36CEFBE9B745A58D(iLocal_218))
				{
					if (unk_0xD9C1758D86688CEA(iLocal_218, unk_0xBC25C936A095B5BA(), 1))
					{
						unk_0x07B8ECB35A4ED3AC(&iLocal_265);
						iLocal_248 = 1;
						bLocal_48 = true;
						unk_0xA902E18EDF6FA0C8(5, iLocal_241, 1862763509);
						if (!unk_0x36CEFBE9B745A58D(iLocal_219))
						{
							unk_0xB8CBD998685C0685(iLocal_219, unk_0xBC25C936A095B5BA(), 0, 16);
							unk_0x22321800954A532E(iLocal_219, true);
							unk_0x3020F31DDBF79437(iLocal_219, unk_0xBC25C936A095B5BA());
							unk_0x5BF507BADF17CFE4(iLocal_219, 1);
							func_53(&uLocal_52, 5);
							func_50(&uLocal_52, 5, iLocal_219, "RECSBRobber1", 0, 1);
							func_38(&uLocal_52, "recsbau", "recsb_deadcr", 3, 0, 0, 0);
						}
					}
				}
			}
		}
		if (!iLocal_247)
		{
			if (unk_0x724D816EA203A79E(iLocal_219))
			{
				if (unk_0x1D403DFADBC2DE3C(iLocal_219, 0) || unk_0x36CEFBE9B745A58D(iLocal_219))
				{
					if (unk_0xD9C1758D86688CEA(iLocal_219, unk_0xBC25C936A095B5BA(), 1))
					{
						unk_0x07B8ECB35A4ED3AC(&iLocal_266);
						iLocal_247 = 1;
						bLocal_48 = true;
						unk_0xA902E18EDF6FA0C8(5, iLocal_241, 1862763509);
						if (!unk_0x36CEFBE9B745A58D(iLocal_218))
						{
							unk_0xB8CBD998685C0685(iLocal_218, unk_0xBC25C936A095B5BA(), 0, 16);
							unk_0x22321800954A532E(iLocal_218, true);
							unk_0x3020F31DDBF79437(iLocal_218, unk_0xBC25C936A095B5BA());
							unk_0x5BF507BADF17CFE4(iLocal_218, 1);
							func_38(&uLocal_52, "recsbau", "recsb_deadcr", 3, 0, 0, 0);
						}
					}
				}
			}
		}
		if (func_37() || !unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), 310.6203f, 2642.854f, 43.5173f, 150f, 150f, 180f, false, true, 0))
		{
			if (unk_0x36CEFBE9B745A58D(iLocal_218) && unk_0x36CEFBE9B745A58D(iLocal_219))
			{
				if (func_37() && !unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vLocal_217, 50f, 50f, 50f, false, true, 0))
				{
					func_7();
				}
				if (bLocal_48 && !bLocal_47)
				{
					if (!unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), 310.6203f, 2642.854f, 43.5173f, 150f, 150f, 180f, false, true, 0))
					{
						func_6(5);
						func_7();
					}
				}
			}
			else if (!unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), 310.6203f, 2642.854f, 43.5173f, 200f, 200f, 180f, false, true, 0))
			{
				func_5();
			}
		}
	}
	if (bLocal_256)
	{
		if (func_37())
		{
			if (unk_0x1D403DFADBC2DE3C(iLocal_218, 0) && unk_0x1D403DFADBC2DE3C(iLocal_219, 0))
			{
				func_7();
			}
			if (bLocal_256)
			{
				if (unk_0x724D816EA203A79E(iLocal_218))
				{
					if (!unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_218, 150f, 150f, 150f, 0, 0, 0))
					{
						if (!bLocal_48)
						{
							func_6(6);
						}
						func_7();
					}
				}
				if (!unk_0x724D816EA203A79E(iLocal_219))
				{
					if (!unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_219, 150f, 150f, 150f, 0, 0, 0))
					{
						if (!bLocal_48)
						{
							func_6(6);
						}
						func_7();
					}
				}
			}
		}
	}
	else if (!iLocal_240 && !bLocal_47)
	{
		unk_0x4806A94C8ED574C3(418.2996f, 2650.597f, 42.84723f, 297.8981f, 2617.968f, 53.6412f, 49.6875f, 1);
		unk_0xF243B7A14FCFD0F4(joaat("ambulance"));
		unk_0x522053D86D6E1C7A("random@countrysiderobbery");
		if (((unk_0x1D403DFADBC2DE3C(iLocal_218, 0) && unk_0x1D403DFADBC2DE3C(iLocal_219, 0)) && unk_0xD6513D668481290A(joaat("ambulance"))) && unk_0xF9E082857622D91E("random@countrysiderobbery"))
		{
			unk_0x07B8ECB35A4ED3AC(&iLocal_265);
			unk_0x07B8ECB35A4ED3AC(&iLocal_266);
			func_53(&uLocal_52, 5);
			func_53(&uLocal_52, 6);
			iVar0 = 0;
			while (iVar0 < iLocal_222)
			{
				if (unk_0x2DA8CA50A72528FB(iLocal_267[iVar0]))
				{
					unk_0x07B8ECB35A4ED3AC(&(iLocal_267[iVar0]));
				}
				iVar0++;
			}
			unk_0xA902E18EDF6FA0C8(1, iLocal_242, 1862763509);
			unk_0xE85B33FB221A23CD(5, true);
			unk_0xE85B33FB221A23CD(3, true);
			if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), 267.94f, 2700.48f, 43.6f, 15f, 15f, 15f, false, true, 0))
			{
				iLocal_227 = unk_0x61C05BF08A1E0EFE(joaat("ambulance"), 267.94f, 2700.48f, 43.1f, 180f, true, true, false);
			}
			else
			{
				iLocal_227 = unk_0x61C05BF08A1E0EFE(joaat("ambulance"), 185.94f, 2603.48f, 46.9f, 0f, true, true, false);
			}
			unk_0x0FB6723EA68C0881(iLocal_227, 1);
			iLocal_220 = unk_0xFD8987C090669BD5(iLocal_227, 20, joaat("s_m_m_paramedic_01"), -1, 1, true);
			iLocal_221 = unk_0xFD8987C090669BD5(iLocal_227, 20, joaat("s_m_m_paramedic_01"), 0, 1, true);
			unk_0x91629AC1E1F78419(iLocal_220, 17, true);
			unk_0x91629AC1E1F78419(iLocal_221, 17, true);
			unk_0xC8FD3EBBB90E8D7F(iLocal_220, 185, true);
			unk_0xC8FD3EBBB90E8D7F(iLocal_221, 185, true);
			if (unk_0x724D816EA203A79E(iLocal_218))
			{
				unk_0xC5A6DFE2B8987B17(&iLocal_243);
				unk_0x509F549022512095(0, iLocal_227, 307.1379f, 2640.042f, 43.4639f, 18f, 0, joaat("ambulance"), 786475, 5f, 5f);
				unk_0x9565F9267674873A(0, iLocal_218, -1, 2f, 1f, 10f, 0);
				unk_0x56F2E1B5599188FA(0, iLocal_218, -1, 2052, 2);
				unk_0x85DB484A637CEAB9(0, iLocal_218, 0);
				unk_0xE896C0AD02364F2A(0, "random@countrysiderobbery", "enter", 2f, -2f, -1, 0, 0, 0, 0, 0);
				unk_0xE896C0AD02364F2A(0, "random@countrysiderobbery", "base", 2f, -2f, -1, 1, 0, 0, 0, 0);
				unk_0x535008C596714F9E(iLocal_243);
				unk_0xA8E6405305C0D7DF(iLocal_220, iLocal_243);
				unk_0x02DAF06EA4F08219(&iLocal_243);
				unk_0x22321800954A532E(iLocal_220, true);
			}
			if (unk_0x724D816EA203A79E(iLocal_219))
			{
				unk_0xC5A6DFE2B8987B17(&iLocal_243);
				unk_0x61E7E913658B4389(0, 15000);
				unk_0x9565F9267674873A(0, iLocal_219, -1, 2f, 1f, 10f, 0);
				unk_0x56F2E1B5599188FA(0, iLocal_219, -1, 2052, 2);
				unk_0x85DB484A637CEAB9(0, iLocal_219, 0);
				unk_0xE896C0AD02364F2A(0, "random@countrysiderobbery", "enter", 2f, -2f, -1, 0, 0, 0, 0, 0);
				unk_0xE896C0AD02364F2A(0, "random@countrysiderobbery", "base", 2f, -2f, -1, 1, 0, 0, 0, 0);
				unk_0x535008C596714F9E(iLocal_243);
				unk_0xA8E6405305C0D7DF(iLocal_221, iLocal_243);
				unk_0x02DAF06EA4F08219(&iLocal_243);
				unk_0x22321800954A532E(iLocal_221, true);
			}
			if (!unk_0x36CEFBE9B745A58D(iLocal_222[0]) && unk_0x724D816EA203A79E(iLocal_226))
			{
				unk_0xC8FD3EBBB90E8D7F(iLocal_222[0], 185, true);
				unk_0xC5A6DFE2B8987B17(&iLocal_243);
				unk_0x346129B364057FF6(0, unk_0x541C2AEF053615BC(iLocal_226, false) + Vector(0f, 5f, 0f), 1f, -1, 1048576000, 0, 1193033728);
				unk_0x74C219E0C7FC4E4B(0, 0);
				unk_0xE896C0AD02364F2A(0, "random@countrysiderobbery", "idle_a", 2f, -2f, -1, 0, 0, 0, 0, 0);
				unk_0xE896C0AD02364F2A(0, "random@countrysiderobbery", "idle_d", 2f, -2f, -1, 1, 0, 0, 0, 0);
				unk_0x535008C596714F9E(iLocal_243);
				unk_0xA8E6405305C0D7DF(iLocal_222[0], iLocal_243);
				unk_0x02DAF06EA4F08219(&iLocal_243);
				unk_0x22321800954A532E(iLocal_222[0], true);
			}
			if (!unk_0x1D403DFADBC2DE3C(iLocal_222[1], 0) && unk_0x724D816EA203A79E(iLocal_223))
			{
				unk_0xC8FD3EBBB90E8D7F(iLocal_222[1], 185, true);
				unk_0x8E25082A46F87892(iLocal_222[1], joaat("weapon_unarmed"), true);
				unk_0xC5A6DFE2B8987B17(&iLocal_243);
				unk_0x346129B364057FF6(0, unk_0x541C2AEF053615BC(iLocal_223, false) + Vector(0f, 1f, 0f), 2f, -1, 1048576000, 0, 1193033728);
				unk_0x4BED3C9D6EF14C38(0, unk_0x541C2AEF053615BC(iLocal_223, false), -1, 2052, 2);
				unk_0xCF4C6C235CD09F4F(0, unk_0x541C2AEF053615BC(iLocal_223, false), 0);
				unk_0xE896C0AD02364F2A(0, "random@countrysiderobbery", "enter", 2f, -2f, -1, 0, 0, 0, 0, 0);
				unk_0xE896C0AD02364F2A(0, "random@countrysiderobbery", "base", 2f, -2f, -1, 1, 0, 0, 0, 0);
				unk_0x535008C596714F9E(iLocal_243);
				unk_0xA8E6405305C0D7DF(iLocal_222[1], iLocal_243);
				unk_0x02DAF06EA4F08219(&iLocal_243);
				unk_0x22321800954A532E(iLocal_222[1], true);
			}
			if (!unk_0x36CEFBE9B745A58D(iLocal_222[2]) && unk_0x724D816EA203A79E(iLocal_219))
			{
				unk_0xC8FD3EBBB90E8D7F(iLocal_222[2], 185, true);
				if (unk_0x724D816EA203A79E(iLocal_219))
				{
					unk_0xC5A6DFE2B8987B17(&iLocal_243);
					unk_0x346129B364057FF6(0, unk_0x541C2AEF053615BC(iLocal_219, false) + Vector(0f, 1f, 0f), 1f, -1, 1048576000, 0, 1193033728);
					unk_0x74C219E0C7FC4E4B(0, 0);
					unk_0xE896C0AD02364F2A(0, "random@countrysiderobbery", "idle_d", 2f, -2f, -1, 0, 0, 0, 0, 0);
					unk_0xE896C0AD02364F2A(0, "random@countrysiderobbery", "idle_a", 2f, -2f, -1, 1, 0, 0, 0, 0);
					unk_0x535008C596714F9E(iLocal_243);
					unk_0xA8E6405305C0D7DF(iLocal_222[2], iLocal_243);
					unk_0x02DAF06EA4F08219(&iLocal_243);
				}
				unk_0x22321800954A532E(iLocal_222[2], true);
			}
			func_3();
			SYSTEM::WAIT(0);
			if (!unk_0x36CEFBE9B745A58D(iLocal_222[0]))
			{
				func_50(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
				func_38(&uLocal_52, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			else if (!unk_0x36CEFBE9B745A58D(iLocal_222[1]))
			{
				unk_0x36C3B58DA78A2679(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_53(&uLocal_52, 4);
				func_50(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
				func_38(&uLocal_52, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			else if (!unk_0x36CEFBE9B745A58D(iLocal_222[2]))
			{
				unk_0x36C3B58DA78A2679(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_53(&uLocal_52, 4);
				func_50(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
				func_38(&uLocal_52, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			func_3();
			SYSTEM::WAIT(0);
			if (!unk_0x36CEFBE9B745A58D(iLocal_222[0]))
			{
				func_50(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
				func_38(&uLocal_52, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			else if (!unk_0x36CEFBE9B745A58D(iLocal_222[1]))
			{
				unk_0x36C3B58DA78A2679(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_53(&uLocal_52, 4);
				func_50(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
				func_38(&uLocal_52, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			else if (!unk_0x36CEFBE9B745A58D(iLocal_222[2]))
			{
				unk_0x36C3B58DA78A2679(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_53(&uLocal_52, 4);
				func_50(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
				func_38(&uLocal_52, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			SYSTEM::SETTIMERB(0);
			iLocal_240 = 1;
		}
	}
	if (iLocal_238 && !func_81())
	{
		func_5();
	}
	if (((((unk_0x1D403DFADBC2DE3C(iLocal_218, 0) && unk_0x1D403DFADBC2DE3C(iLocal_219, 0)) && unk_0x1D403DFADBC2DE3C(iLocal_222[0], 0)) && unk_0x1D403DFADBC2DE3C(iLocal_222[1], 0)) && unk_0x1D403DFADBC2DE3C(iLocal_222[2], 0)) && (func_37() || !unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), 310.6203f, 2642.854f, 43.5173f, 200f, 200f, 180f, false, true, 0)))
	{
		unk_0xED946BB96C5E9C4A(unk_0xB5CEFD608600A09F(), 2, 0);
		unk_0x7B6A06DE40F28782(unk_0xB5CEFD608600A09F(), 0f);
		func_7();
	}
}

void func_3()//Position - 0xEA5
{
	Global_394A = 0;
	func_4();
}

void func_4()//Position - 0xEB5
{
	unk_0x5C7DC611411E2CF9();
	Global_41AB = 0;
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x1E08809A5041F85B(false);
		Global_3DB8 = 6;
	}
}

void func_5()//Position - 0xED6
{
	func_142();
}

void func_6(int iParam0)//Position - 0xEE2
{
	Global_19AF6 = iParam0;
}

void func_7()//Position - 0xEF0
{
	if (!bLocal_47)
	{
	}
	while (func_36())
	{
		SYSTEM::WAIT(0);
	}
	while (!func_35())
	{
		SYSTEM::WAIT(0);
	}
	func_11(-1, 0);
	func_8();
	func_142();
}

void func_8()//Position - 0xF2B
{
	func_9();
}

int func_9()//Position - 0xF38
{
	if (func_10(0))
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

bool func_10(bool bParam0)//Position - 0xF83
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_1163A, 0);
}

void func_11(int iParam0, int iParam1)//Position - 0xFAE
{
	if (iParam0 == -1)
	{
		iParam0 = func_33();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_32(iParam0))
	{
		func_31(iParam0, iParam1);
		if (!func_30(51))
		{
			func_21("RE_REWARD", 1, 0, 4000, 10000, func_24(), 0, 138, 0);
			func_20(51);
		}
		if (func_19(iParam0))
		{
			Global_19B04.f_6186.f_2 = 3;
		}
		if (func_18(iParam0, iParam1) != 322)
		{
			func_12(func_18(iParam0, iParam1), vLocal_43.x, vLocal_43.y);
		}
		Global_19AF8 = iParam1;
		if (Global_19AF6 == 0)
		{
			if (((Global_19AF9 == 1 || Global_19AF9 == 5) || Global_19AF9 == 11) || Global_19AF9 == 25)
			{
				func_6(2);
			}
			else if ((Global_19AF9 == 26 || Global_19AF9 == 8) || Global_19AF9 == 17)
			{
				func_6(7);
			}
			else
			{
				func_6(1);
			}
		}
	}
}

void func_12(int iParam0, var uParam1, var uParam2)//Position - 0x10B1
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
		func_16((891 + iParam0), 1, -1, 1);
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
		func_13();
	}
}

void func_13()//Position - 0x1199
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
		func_15(13, SYSTEM::FLOOR(Global_19B04.f_27B5.f_F0D));
	}
	if (!unk_0xF9BFA43C1BAFD016())
	{
		if (!Global_11542)
		{
			if (func_14() == 2 == 0 && !unk_0x7AF0088ABFA713B6())
			{
				if (unk_0x670C0C6C780A3F84())
				{
					Global_199FA = 0;
				}
				if (!Global_DA9F)
				{
					func_9();
				}
			}
		}
	}
}

int func_14()//Position - 0x165A
{
	return Global_62BD;
}

int func_15(int iParam0, int iParam1)//Position - 0x1665
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

int func_16(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x16B6
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
		iParam2 = func_17();
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

int func_17()//Position - 0x1BC8
{
	return Global_1407E0;
}

int func_18(int iParam0, int iParam1)//Position - 0x1BD4
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

int func_19(int iParam0)//Position - 0x1F48
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

void func_20(int iParam0)//Position - 0x1F77
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

void func_21(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x1FB9
{
	func_22(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_22(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x1FDB
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
		func_23();
	}
}

void func_23()//Position - 0x21AF
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

int func_24()//Position - 0x22CF
{
	func_25();
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

void func_25()//Position - 0x2315
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_29(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_28(unk_0xBC25C936A095B5BA());
			if (func_27(iVar0) && (!func_26(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_27(Global_19B04.f_932.f_21B.f_10CD))
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

bool func_26(int iParam0)//Position - 0x2412
{
	return Global_8C41 == iParam0;
}

bool func_27(int iParam0)//Position - 0x2420
{
	return iParam0 < 3;
}

int func_28(int iParam0)//Position - 0x242C
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_29(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_29(int iParam0)//Position - 0x2469
{
	if (func_27(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_30(int iParam0)//Position - 0x2493
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

void func_31(int iParam0, int iParam1)//Position - 0x24D6
{
	unk_0xF0059F27F7BB6680(&(Global_19B04.f_6186.f_8[iParam0]), iParam1);
}

int func_32(int iParam0)//Position - 0x24F1
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

int func_33()//Position - 0x25A2
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x1377080E9B0BD993(), 64);
	uVar1 = func_34(Var0);
	return uVar1;
}

int func_34(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x25BF
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

int func_35()//Position - 0x2799
{
	return 1;
}

int func_36()//Position - 0x27A2
{
	if (Global_3DB8 != 0 || unk_0xE6711F601F11B66B())
	{
		return 1;
	}
	return 0;
}

int func_37()//Position - 0x27C4
{
	if (bLocal_234 || bLocal_235)
	{
		if (bLocal_234 && bLocal_235)
		{
			if (!unk_0x2DA8CA50A72528FB(uLocal_268[0]) && !unk_0x2DA8CA50A72528FB(uLocal_268[1]))
			{
				return 1;
			}
		}
		if (bLocal_234 && !bLocal_235)
		{
			if (!unk_0x2DA8CA50A72528FB(uLocal_268[0]))
			{
				return 1;
			}
		}
		if (bLocal_235 && !bLocal_234)
		{
			if (!unk_0x2DA8CA50A72528FB(uLocal_268[1]))
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

int func_38(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x2855
{
	func_49(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_39(sParam2, iParam3, 0);
}

int func_39(char* sParam0, int iParam1, bool bParam2)//Position - 0x28A3
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
					func_48();
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
		if (func_47(8, -1))
		{
			return 0;
		}
		Global_3E04 = { Global_3DFE };
		func_46();
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
				func_44();
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
				if (func_43())
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
			if (func_42())
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
			func_41();
			Global_3DC2 = bParam2;
		}
		Global_3DBA = iParam1;
		StringCopy(&Global_3C3B, sParam0, 24);
		Global_394A = 0;
		func_40();
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
		func_48();
	}
	return 0;
}

void func_40()//Position - 0x2B6F
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

void func_41()//Position - 0x2BA1
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

int func_42()//Position - 0x2C36
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_43()//Position - 0x2C5D
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

void func_44()//Position - 0x2CF6
{
	if (func_26(14))
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
		Global_389D = func_45();
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

int func_45()//Position - 0x2D98
{
	func_25();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_46()//Position - 0x2DB1
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

bool func_47(int iParam0, int iParam1)//Position - 0x2E09
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

void func_48()//Position - 0x2E44
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

void func_49(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2E9B
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

void func_50(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x2EF1
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

int func_51(int iParam0)//Position - 0x2F8C
{
	int iVar0;
	
	if (!unk_0xA901403F1DB7A780(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x480F8C5F7EE6B525(iParam0);
	unk_0x3F5F1772D71D5EC4(iVar0, func_52(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
	return iVar0;
}

float func_52(bool bParam0, float fParam1, float fParam2)//Position - 0x2FC4
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_53(var uParam0, int iParam1)//Position - 0x2FDB
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_54()//Position - 0x2FF8
{
	if (!iLocal_254)
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_218))
		{
			if (unk_0x5237AF95232D78C5(iLocal_218, 0))
			{
				iLocal_263 = unk_0x9FE9D386222EEE47(iLocal_218, 0);
				if (((((unk_0xD9C1758D86688CEA(iLocal_263, unk_0xBC25C936A095B5BA(), 1) && unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0)) && unk_0xE642C1AC73CE364E(iLocal_263, unk_0xBC25C936A095B5BA(), 10f, 10f, 10f, 0, 1, 0)) || unk_0xA4813477CC5DD00F(iLocal_218)) || unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_263, 0)) || unk_0x27ED965409C55F9D(unk_0xBC25C936A095B5BA(), iLocal_263, joaat("weapon_stickybomb"), -1))
				{
					unk_0x2E35C4FA5F0ED22F(iLocal_218, false);
					unk_0xA902E18EDF6FA0C8(5, iLocal_241, 1862763509);
					if (unk_0x5237AF95232D78C5(iLocal_218, 0))
					{
						unk_0x7A535CE1F001F3FE(iLocal_218, joaat("weapon_microsmg"), 200, true, true);
						unk_0x8E25082A46F87892(iLocal_218, joaat("weapon_microsmg"), true);
						unk_0x10790F4A9247B707(iLocal_218, unk_0xBC25C936A095B5BA(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
					}
					if (!unk_0x36CEFBE9B745A58D(iLocal_219))
					{
						if (unk_0x5237AF95232D78C5(iLocal_219, 0))
						{
							unk_0x2E35C4FA5F0ED22F(iLocal_219, false);
							unk_0x7A535CE1F001F3FE(iLocal_219, joaat("weapon_microsmg"), 200, true, true);
							unk_0x8E25082A46F87892(iLocal_219, joaat("weapon_microsmg"), true);
							unk_0x10790F4A9247B707(iLocal_219, unk_0xBC25C936A095B5BA(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
						}
					}
					bLocal_48 = true;
					iLocal_254 = 1;
				}
			}
			if (unk_0xD9C1758D86688CEA(iLocal_218, unk_0xBC25C936A095B5BA(), 1))
			{
				unk_0xA902E18EDF6FA0C8(5, iLocal_241, 1862763509);
				if ((unk_0x5237AF95232D78C5(iLocal_218, 0) && unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0)) && !unk_0x1D403DFADBC2DE3C(iLocal_263, 0))
				{
					if (unk_0xE642C1AC73CE364E(iLocal_263, unk_0xBC25C936A095B5BA(), 10f, 10f, 10f, 0, 1, 0))
					{
						unk_0x2E35C4FA5F0ED22F(iLocal_218, false);
						unk_0x7A535CE1F001F3FE(iLocal_218, joaat("weapon_microsmg"), 200, true, true);
						unk_0x8E25082A46F87892(iLocal_218, joaat("weapon_microsmg"), true);
						unk_0x10790F4A9247B707(iLocal_218, unk_0xBC25C936A095B5BA(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
						bLocal_48 = true;
						iLocal_254 = 1;
					}
				}
				if (!unk_0x36CEFBE9B745A58D(iLocal_219))
				{
					if ((unk_0x5237AF95232D78C5(iLocal_219, 0) && unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0)) && !unk_0x1D403DFADBC2DE3C(iLocal_263, 0))
					{
						if (unk_0xE642C1AC73CE364E(iLocal_263, unk_0xBC25C936A095B5BA(), 10f, 10f, 10f, 0, 1, 0))
						{
							unk_0x2E35C4FA5F0ED22F(iLocal_219, false);
							unk_0x7A535CE1F001F3FE(iLocal_219, joaat("weapon_microsmg"), 200, true, true);
							unk_0x8E25082A46F87892(iLocal_219, joaat("weapon_microsmg"), true);
							unk_0x10790F4A9247B707(iLocal_219, unk_0xBC25C936A095B5BA(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
							bLocal_48 = true;
							iLocal_254 = 1;
						}
					}
				}
			}
		}
		if (!unk_0x36CEFBE9B745A58D(iLocal_219))
		{
			if (unk_0x5237AF95232D78C5(iLocal_219, 0))
			{
				iLocal_263 = unk_0x9FE9D386222EEE47(iLocal_219, 0);
				if (((unk_0xD9C1758D86688CEA(iLocal_263, unk_0xBC25C936A095B5BA(), 1) || unk_0xA4813477CC5DD00F(iLocal_219)) || unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_263, 0)) || unk_0x27ED965409C55F9D(unk_0xBC25C936A095B5BA(), iLocal_263, joaat("weapon_stickybomb"), -1))
				{
					unk_0xA902E18EDF6FA0C8(5, iLocal_241, 1862763509);
					if (!unk_0x36CEFBE9B745A58D(iLocal_218))
					{
						if ((unk_0x5237AF95232D78C5(iLocal_218, 0) && unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0)) && !unk_0x1D403DFADBC2DE3C(iLocal_263, 0))
						{
							if (unk_0xE642C1AC73CE364E(iLocal_263, unk_0xBC25C936A095B5BA(), 10f, 10f, 10f, 0, 1, 0))
							{
								unk_0x2E35C4FA5F0ED22F(iLocal_218, false);
								unk_0x7A535CE1F001F3FE(iLocal_218, joaat("weapon_microsmg"), 200, true, true);
								unk_0x8E25082A46F87892(iLocal_218, joaat("weapon_microsmg"), true);
								unk_0x10790F4A9247B707(iLocal_218, unk_0xBC25C936A095B5BA(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
								bLocal_48 = true;
								iLocal_254 = 1;
							}
						}
					}
					if ((unk_0x5237AF95232D78C5(iLocal_219, 0) && unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0)) && !unk_0x1D403DFADBC2DE3C(iLocal_263, 0))
					{
						if (unk_0xE642C1AC73CE364E(iLocal_263, unk_0xBC25C936A095B5BA(), 10f, 10f, 10f, 0, 1, 0))
						{
							unk_0x2E35C4FA5F0ED22F(iLocal_219, false);
							unk_0x7A535CE1F001F3FE(iLocal_219, joaat("weapon_microsmg"), 200, true, true);
							unk_0x8E25082A46F87892(iLocal_219, joaat("weapon_microsmg"), true);
							unk_0x10790F4A9247B707(iLocal_219, unk_0xBC25C936A095B5BA(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
							bLocal_48 = true;
							iLocal_254 = 1;
						}
					}
				}
			}
			if (unk_0xD9C1758D86688CEA(iLocal_219, unk_0xBC25C936A095B5BA(), 1))
			{
				unk_0xA902E18EDF6FA0C8(5, iLocal_241, 1862763509);
				if (!unk_0x36CEFBE9B745A58D(iLocal_218))
				{
					if ((unk_0x5237AF95232D78C5(iLocal_218, 0) && unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0)) && !unk_0x1D403DFADBC2DE3C(iLocal_263, 0))
					{
						if (unk_0xE642C1AC73CE364E(iLocal_263, unk_0xBC25C936A095B5BA(), 10f, 10f, 10f, 0, 1, 0))
						{
							unk_0x7A535CE1F001F3FE(iLocal_218, joaat("weapon_microsmg"), 200, true, true);
							unk_0x8E25082A46F87892(iLocal_218, joaat("weapon_microsmg"), true);
							unk_0x10790F4A9247B707(iLocal_218, unk_0xBC25C936A095B5BA(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
							bLocal_48 = true;
							iLocal_254 = 1;
						}
					}
				}
				if ((unk_0x5237AF95232D78C5(iLocal_219, 0) && unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0)) && !unk_0x1D403DFADBC2DE3C(iLocal_263, 0))
				{
					if (unk_0xE642C1AC73CE364E(iLocal_263, unk_0xBC25C936A095B5BA(), 10f, 10f, 10f, 0, 1, 0))
					{
						unk_0x7A535CE1F001F3FE(iLocal_219, joaat("weapon_microsmg"), 200, true, true);
						unk_0x8E25082A46F87892(iLocal_219, joaat("weapon_microsmg"), true);
						unk_0x10790F4A9247B707(iLocal_219, unk_0xBC25C936A095B5BA(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
						bLocal_48 = true;
						iLocal_254 = 1;
					}
				}
			}
		}
	}
}

void func_55()//Position - 0x3536
{
	if (!unk_0x36CEFBE9B745A58D(iLocal_218) && !unk_0x1D403DFADBC2DE3C(iLocal_226, 0))
	{
		if (!unk_0x2101FAC9A9D4C29D(iLocal_218, iLocal_226, -1, 0, false) && !unk_0x2101FAC9A9D4C29D(iLocal_218, iLocal_226, 0, 0, false))
		{
			unk_0xAB43C54784946B9F(iLocal_218, vLocal_217, 1000f, -1, 0, 0);
			unk_0x22321800954A532E(iLocal_218, true);
			iLocal_257 = 1;
		}
	}
	if (!unk_0x36CEFBE9B745A58D(iLocal_219) && !unk_0x1D403DFADBC2DE3C(iLocal_226, 0))
	{
		if (!unk_0x2101FAC9A9D4C29D(iLocal_219, iLocal_226, -1, 0, false) && !unk_0x2101FAC9A9D4C29D(iLocal_219, iLocal_226, 0, 0, false))
		{
			unk_0xAB43C54784946B9F(iLocal_219, vLocal_217, 1000f, -1, 0, 0);
			unk_0x22321800954A532E(iLocal_219, true);
			iLocal_257 = 1;
		}
	}
}

void func_56()//Position - 0x35E6
{
	if (!unk_0x1D403DFADBC2DE3C(iLocal_218, 0))
	{
		vLocal_245 = { unk_0x541C2AEF053615BC(iLocal_218, true) };
	}
	else if (!unk_0x1D403DFADBC2DE3C(iLocal_219, 0))
	{
		vLocal_245 = { unk_0x541C2AEF053615BC(iLocal_219, true) };
	}
	vLocal_245.z = (vLocal_245.z - 0.11f);
	if (!unk_0x1D403DFADBC2DE3C(iLocal_218, 0))
	{
		SYSTEM::SETTIMERA(0);
		if (!bLocal_48)
		{
			func_3();
			SYSTEM::WAIT(0);
			if (!unk_0x1D403DFADBC2DE3C(iLocal_218, 0))
			{
				func_57(&uLocal_52, "recsbau", "recsb_thanxa", "recsb_thanxa_3", 4, 0, 0);
			}
			else if (!unk_0x1D403DFADBC2DE3C(iLocal_219, 0))
			{
				func_53(&uLocal_52, 5);
				func_50(&uLocal_52, 5, iLocal_219, "RECSBRobber1", 0, 1);
				func_57(&uLocal_52, "recsbau", "recsb_thanxa", "recsb_thanxa_3", 4, 0, 0);
			}
			unk_0xE92467219E1F8814(unk_0xEFF59CF8CAAFA23E(vLocal_245, 1067030938, 1069547520), 1000, 5, 0);
			iLocal_253 = 1;
		}
	}
	if (!unk_0x1D403DFADBC2DE3C(iLocal_219, 0) && !unk_0x1D403DFADBC2DE3C(iLocal_226, 0))
	{
		if (unk_0x62F3A07C43FFB568(iLocal_219, iLocal_226, 0))
		{
			SYSTEM::SETTIMERA(0);
			if (!unk_0x1D403DFADBC2DE3C(iLocal_218, 0))
			{
			}
			else if (!unk_0x1D403DFADBC2DE3C(iLocal_219, 0))
			{
			}
			iLocal_253 = 1;
		}
	}
}

int func_57(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x370C
{
	func_49(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_39(sParam2, iParam4, 0);
}

void func_58()//Position - 0x3760
{
	if (!bLocal_256)
	{
		unk_0x4806A94C8ED574C3(418.2996f, 2650.597f, 42.84723f, 297.8981f, 2617.968f, 53.6412f, 49.6875f, 1);
		if (iLocal_260)
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_218))
			{
				if (unk_0x4FCDC2EC534819EF(iLocal_218))
				{
					func_3();
					SYSTEM::WAIT(0);
					func_38(&uLocal_52, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_260 = 1;
				}
			}
			if (!unk_0x36CEFBE9B745A58D(iLocal_219))
			{
				if (unk_0x4FCDC2EC534819EF(iLocal_219))
				{
					func_3();
					SYSTEM::WAIT(0);
					func_53(&uLocal_52, 5);
					func_50(&uLocal_52, 5, iLocal_219, "RECSBRobber1", 0, 1);
					func_38(&uLocal_52, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_260 = 1;
				}
			}
		}
		if (iLocal_239 == 1)
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_218) && !unk_0x1D403DFADBC2DE3C(iLocal_226, 0))
			{
				if (unk_0x62F3A07C43FFB568(iLocal_218, iLocal_226, 0))
				{
					unk_0xABA7AE40608505F2(iLocal_218, 2, true);
					unk_0xC5A6DFE2B8987B17(&iLocal_243);
					unk_0x1A06AE15BF21D407(0, iLocal_226, unk_0xBC25C936A095B5BA(), 8, 100f, 786469, 1000f, 10f, 1);
					unk_0x535008C596714F9E(iLocal_243);
					unk_0xA8E6405305C0D7DF(iLocal_218, iLocal_243);
					unk_0x02DAF06EA4F08219(&iLocal_243);
					unk_0x22321800954A532E(iLocal_218, true);
					bLocal_256 = true;
				}
			}
		}
		if (iLocal_239 == 2)
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_219) && !unk_0x1D403DFADBC2DE3C(iLocal_226, 0))
			{
				if (unk_0x62F3A07C43FFB568(iLocal_219, iLocal_226, 0))
				{
					unk_0xABA7AE40608505F2(iLocal_219, 2, true);
					unk_0xC5A6DFE2B8987B17(&iLocal_243);
					unk_0x1A06AE15BF21D407(0, iLocal_226, unk_0xBC25C936A095B5BA(), 8, 100f, 786469, 1000f, 10f, 1);
					unk_0x535008C596714F9E(iLocal_243);
					unk_0xA8E6405305C0D7DF(iLocal_219, iLocal_243);
					unk_0x02DAF06EA4F08219(&iLocal_243);
					unk_0x22321800954A532E(iLocal_219, true);
					bLocal_256 = true;
				}
			}
		}
		if (iLocal_239 == 3)
		{
			if ((!unk_0x36CEFBE9B745A58D(iLocal_219) && !unk_0x36CEFBE9B745A58D(iLocal_218)) && !unk_0x1D403DFADBC2DE3C(iLocal_226, 0))
			{
				if (unk_0x62F3A07C43FFB568(iLocal_218, iLocal_226, 0) && unk_0x62F3A07C43FFB568(iLocal_219, iLocal_226, 0))
				{
					unk_0xABA7AE40608505F2(iLocal_218, 2, true);
					unk_0xABA7AE40608505F2(iLocal_219, 2, true);
					unk_0xC5A6DFE2B8987B17(&iLocal_243);
					unk_0x1A06AE15BF21D407(0, iLocal_226, unk_0xBC25C936A095B5BA(), 8, 100f, 786469, 1000f, 10f, 1);
					unk_0x535008C596714F9E(iLocal_243);
					unk_0xA8E6405305C0D7DF(iLocal_218, iLocal_243);
					unk_0x02DAF06EA4F08219(&iLocal_243);
					unk_0x2E35C4FA5F0ED22F(iLocal_219, false);
					unk_0x22321800954A532E(iLocal_218, true);
					bLocal_256 = true;
				}
			}
			if (unk_0x36CEFBE9B745A58D(iLocal_218) && !unk_0x36CEFBE9B745A58D(iLocal_219))
			{
				func_53(&uLocal_52, 5);
				unk_0xD179FA0466FA4FE3(iLocal_219, iLocal_226, -1, -1, 2f, 8, 0);
				iLocal_239 = 2;
			}
			if (unk_0x36CEFBE9B745A58D(iLocal_219) && !unk_0x36CEFBE9B745A58D(iLocal_218))
			{
				func_53(&uLocal_52, 6);
				unk_0xD179FA0466FA4FE3(iLocal_218, iLocal_226, -1, -1, 2f, 8, 0);
				iLocal_239 = 1;
			}
		}
		if (iLocal_239 == 4)
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_218))
			{
				unk_0xA4E856A8CD53B8DF(iLocal_218);
				unk_0xAB43C54784946B9F(iLocal_218, vLocal_217, 1000f, -1, 0, 0);
				unk_0x22321800954A532E(iLocal_218, true);
			}
			if (!unk_0x36CEFBE9B745A58D(iLocal_219))
			{
				unk_0xA4E856A8CD53B8DF(iLocal_219);
				unk_0xAB43C54784946B9F(iLocal_219, vLocal_217, 1000f, -1, 0, 0);
				unk_0x22321800954A532E(iLocal_219, true);
			}
			bLocal_256 = true;
		}
	}
}

void func_59()//Position - 0x3A6C
{
	if ((unk_0x1D403DFADBC2DE3C(iLocal_222[0], 0) && unk_0x1D403DFADBC2DE3C(iLocal_222[1], 0)) && unk_0x1D403DFADBC2DE3C(iLocal_222[2], 0))
	{
		func_53(&uLocal_52, 4);
		iLocal_246 = 1;
		iLocal_238 = 1;
		unk_0xA902E18EDF6FA0C8(1, iLocal_241, 1862763509);
		if (!bLocal_48 && bLocal_47)
		{
			unk_0x07B8ECB35A4ED3AC(&iLocal_265);
			unk_0x07B8ECB35A4ED3AC(&iLocal_266);
		}
		if (!bLocal_48)
		{
			if (!unk_0x1D403DFADBC2DE3C(iLocal_218, 0))
			{
				func_60(&uLocal_52, "recsbau", "recsb_thanxa", "recsb_thanxa_1", 4, 0, 0);
			}
			else if (!unk_0x1D403DFADBC2DE3C(iLocal_219, 0))
			{
				func_53(&uLocal_52, 5);
				func_50(&uLocal_52, 5, iLocal_219, "RECSBRobber1", 0, 1);
				func_60(&uLocal_52, "recsbau", "recsb_thanxa", "recsb_thanxa_1", 4, 0, 0);
			}
		}
		if (unk_0xE59B7F5A03335350(iLocal_226, 0))
		{
			unk_0x5502708AECB47F5D(iLocal_226);
			if (!unk_0x36CEFBE9B745A58D(iLocal_218) && !unk_0x626040CF48EDAAD2(iLocal_218))
			{
				unk_0x45EDA11DC1F1ED2D(iLocal_218, 1, 1, 1, 0);
				iLocal_239 = 1;
				unk_0xA4E856A8CD53B8DF(iLocal_218);
				unk_0x0D042F5C6172D20A(iLocal_218, 1);
				unk_0x2E35C4FA5F0ED22F(iLocal_218, true);
				unk_0x5502708AECB47F5D(iLocal_218);
				unk_0x5502708AECB47F5D(iLocal_226);
				unk_0xC5A6DFE2B8987B17(&iLocal_243);
				unk_0xD179FA0466FA4FE3(0, iLocal_226, -1, -1, 2f, 9, 0);
				unk_0x535008C596714F9E(iLocal_243);
				unk_0xA8E6405305C0D7DF(iLocal_218, iLocal_243);
				unk_0x02DAF06EA4F08219(&iLocal_243);
				if (!unk_0x36CEFBE9B745A58D(iLocal_219) && !unk_0x626040CF48EDAAD2(iLocal_219))
				{
					unk_0xA4E856A8CD53B8DF(iLocal_219);
					unk_0x2E35C4FA5F0ED22F(iLocal_219, true);
					unk_0x5502708AECB47F5D(iLocal_219);
					unk_0x5502708AECB47F5D(iLocal_226);
					unk_0x0D042F5C6172D20A(iLocal_219, 1);
					unk_0xD179FA0466FA4FE3(iLocal_219, iLocal_226, -1, 0, 2f, 1, 0);
					iLocal_239 = 3;
				}
			}
			else if (!unk_0x36CEFBE9B745A58D(iLocal_219))
			{
				unk_0x0D042F5C6172D20A(iLocal_219, 1);
				unk_0x45EDA11DC1F1ED2D(iLocal_219, 1, 1, 1, 0);
				unk_0xA4E856A8CD53B8DF(iLocal_219);
				unk_0x2E35C4FA5F0ED22F(iLocal_219, true);
				unk_0x5502708AECB47F5D(iLocal_219);
				unk_0x5502708AECB47F5D(iLocal_226);
				unk_0xC5A6DFE2B8987B17(&iLocal_243);
				unk_0xD179FA0466FA4FE3(0, iLocal_226, -1, -1, 2f, 1, 0);
				unk_0x535008C596714F9E(iLocal_243);
				unk_0xA8E6405305C0D7DF(iLocal_219, iLocal_243);
				unk_0x02DAF06EA4F08219(&iLocal_243);
				iLocal_239 = 2;
			}
		}
		else
		{
			iLocal_239 = 4;
		}
	}
}

int func_60(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x3C66
{
	func_49(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_39(sParam2, iParam4, 0);
}

void func_61(int iParam0, var uParam1, int iParam2, float fParam3)//Position - 0x3CBA
{
	vector3 vVar0;
	vector3 vVar1;
	int iVar2;
	
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		if (*uParam1 < 5)
		{
			switch (iParam2)
			{
				case 0:
					vVar0 = { -1f, 1f, 0.5f };
					vVar1 = { -0.5f, 0.75f, 0.05f };
					iVar2 = 0;
					break;
				
				case 1:
					vVar0 = { 1f, 1f, 0.5f };
					vVar1 = { 0.5f, 0.75f, 0.05f };
					iVar2 = 1;
					break;
				
				case 4:
					vVar0 = { -1f, -1f, 0.5f };
					vVar1 = { -0.5f, -0.75f, 0.05f };
					iVar2 = 2;
					break;
				
				case 5:
					vVar0 = { 1f, -1f, 0.5f };
					vVar1 = { 0.5f, -0.75f, 0.05f };
					iVar2 = 3;
					break;
			}
			if (unk_0xB7CB92A84A7518CD(unk_0xA4455714F3DCE207(iParam0, vVar0), fParam3, 1, 1) || unk_0xB7CB92A84A7518CD(unk_0xA4455714F3DCE207(iParam0, vVar0), fParam3, 0, 1))
			{
				switch (*uParam1)
				{
					case 0:
						unk_0x320ACB49B4CABE67(iParam0, iParam2, 0, 1148846080);
						*uParam1++;
						break;
					
					case 1:
						unk_0x72DD704E19506408(iParam0, iVar2);
						*uParam1++;
						break;
					
					case 2:
						*uParam1++;
						break;
					
					case 3:
						*uParam1++;
						break;
					
					case 4:
						unk_0xD75C62D3076EC399(iParam0, vVar1, 150f, 50f, 1);
						*uParam1++;
						break;
					}
				}
			}
	}
}

void func_62(int iParam0)//Position - 0x3E38
{
	if ((!unk_0x36CEFBE9B745A58D(iParam0) && !func_36()) && SYSTEM::TIMERA() > 12000)
	{
		func_50(&uLocal_52, 4, iParam0, "RECSBCop1", 0, 1);
		if (unk_0xE642C1AC73CE364E(iParam0, unk_0xBC25C936A095B5BA(), 20f, 20f, 20f, 0, 1, 0))
		{
			func_38(&uLocal_52, "recsbau", "recsb_sscene", 4, 0, 0, 0);
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_63()//Position - 0x3EA5
{
	if (!unk_0x1D403DFADBC2DE3C(iLocal_218, 0))
	{
		if (unk_0xD9C1758D86688CEA(iLocal_218, unk_0xBC25C936A095B5BA(), 1))
		{
			bLocal_48 = true;
			SYSTEM::SETTIMERA(0);
			unk_0xA902E18EDF6FA0C8(5, iLocal_241, 1862763509);
			if (!unk_0x36CEFBE9B745A58D(iLocal_218))
			{
				unk_0xB8CBD998685C0685(iLocal_218, unk_0xBC25C936A095B5BA(), 0, 16);
				unk_0x22321800954A532E(iLocal_218, true);
				unk_0x3020F31DDBF79437(iLocal_218, unk_0xBC25C936A095B5BA());
				unk_0x5BF507BADF17CFE4(iLocal_218, 1);
			}
			if (!unk_0x36CEFBE9B745A58D(iLocal_219))
			{
				unk_0xB8CBD998685C0685(iLocal_219, unk_0xBC25C936A095B5BA(), 0, 16);
				unk_0x22321800954A532E(iLocal_219, true);
				unk_0x3020F31DDBF79437(iLocal_219, unk_0xBC25C936A095B5BA());
				unk_0x5BF507BADF17CFE4(iLocal_219, 1);
			}
			if (!bLocal_47)
			{
				func_3();
				SYSTEM::WAIT(0);
				if (!unk_0x36CEFBE9B745A58D(iLocal_222[0]))
				{
					func_50(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
					func_38(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
				else if (!unk_0x36CEFBE9B745A58D(iLocal_222[1]))
				{
					unk_0x36C3B58DA78A2679(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_53(&uLocal_52, 4);
					func_50(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
					func_38(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
				else if (!unk_0x36CEFBE9B745A58D(iLocal_222[2]))
				{
					unk_0x36C3B58DA78A2679(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_53(&uLocal_52, 4);
					func_50(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
					func_38(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
			}
		}
		if (!unk_0x36CEFBE9B745A58D(iLocal_218))
		{
			if (!func_66() && unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 4))
			{
				if (unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), iLocal_218) || unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), iLocal_218))
				{
					if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_218, 20f, 20f, 20f, 0, 1, 0) && unk_0x5CEC84BB4AC55121(iLocal_218, unk_0xBC25C936A095B5BA()))
					{
						iLocal_230++;
						if (!iLocal_231 && !func_64("recsb_theaim"))
						{
							func_3();
							SYSTEM::WAIT(0);
							if (!unk_0x36CEFBE9B745A58D(iLocal_218))
							{
								func_38(&uLocal_52, "recsbau", "recsb_theaim", 4, 0, 0, 0);
							}
							else if (!unk_0x36CEFBE9B745A58D(iLocal_219))
							{
								func_53(&uLocal_52, 5);
								func_50(&uLocal_52, 5, iLocal_219, "RECSBRobber1", 0, 1);
								func_38(&uLocal_52, "recsbau", "recsb_theaim", 4, 0, 0, 0);
							}
							iLocal_231 = 1;
						}
						if (iLocal_230 > 45)
						{
							bLocal_48 = true;
							SYSTEM::SETTIMERA(0);
							if (!bLocal_47)
							{
								func_3();
								SYSTEM::WAIT(0);
								if (!unk_0x36CEFBE9B745A58D(iLocal_222[0]))
								{
									func_50(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
									func_38(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
								else if (!unk_0x36CEFBE9B745A58D(iLocal_222[1]))
								{
									unk_0x36C3B58DA78A2679(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
									func_53(&uLocal_52, 4);
									func_50(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
									func_38(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
								else if (!unk_0x36CEFBE9B745A58D(iLocal_222[2]))
								{
									unk_0x36C3B58DA78A2679(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
									func_53(&uLocal_52, 4);
									func_50(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
									func_38(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
							}
						}
					}
				}
				else if (iLocal_231 || iLocal_232)
				{
					iLocal_230 = 45;
				}
				else
				{
					iLocal_230 = 0;
				}
			}
		}
	}
	if (!unk_0x1D403DFADBC2DE3C(iLocal_219, 0))
	{
		if (unk_0xD9C1758D86688CEA(iLocal_219, unk_0xBC25C936A095B5BA(), 1))
		{
			bLocal_48 = true;
			SYSTEM::SETTIMERA(0);
			unk_0xA902E18EDF6FA0C8(5, iLocal_241, 1862763509);
			if (!unk_0x36CEFBE9B745A58D(iLocal_219))
			{
				unk_0xB8CBD998685C0685(iLocal_219, unk_0xBC25C936A095B5BA(), 0, 16);
				unk_0x22321800954A532E(iLocal_219, true);
				unk_0x3020F31DDBF79437(iLocal_219, unk_0xBC25C936A095B5BA());
				unk_0x5BF507BADF17CFE4(iLocal_219, 1);
			}
			if (!unk_0x36CEFBE9B745A58D(iLocal_218))
			{
				unk_0xB8CBD998685C0685(iLocal_218, unk_0xBC25C936A095B5BA(), 0, 16);
				unk_0x22321800954A532E(iLocal_218, true);
				unk_0x3020F31DDBF79437(iLocal_218, unk_0xBC25C936A095B5BA());
				unk_0x5BF507BADF17CFE4(iLocal_218, 1);
			}
			if (!bLocal_47)
			{
				func_3();
				SYSTEM::WAIT(0);
				if (!unk_0x36CEFBE9B745A58D(iLocal_222[0]))
				{
					func_50(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
					func_38(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
				else if (!unk_0x36CEFBE9B745A58D(iLocal_222[1]))
				{
					unk_0x36C3B58DA78A2679(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_53(&uLocal_52, 4);
					func_50(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
					func_38(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
				else if (!unk_0x36CEFBE9B745A58D(iLocal_222[2]))
				{
					unk_0x36C3B58DA78A2679(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_53(&uLocal_52, 4);
					func_50(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
					func_38(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
			}
		}
		if (!unk_0x36CEFBE9B745A58D(iLocal_219))
		{
			if (!func_66() && unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 4))
			{
				if (unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), iLocal_219) || unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), iLocal_219))
				{
					if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_219, 20f, 20f, 20f, 0, 1, 0) && unk_0x5CEC84BB4AC55121(iLocal_219, unk_0xBC25C936A095B5BA()))
					{
						if ((!iLocal_232 && !unk_0x36CEFBE9B745A58D(iLocal_218)) && !func_64("recsb_theaim"))
						{
							func_3();
							SYSTEM::WAIT(0);
							if (!unk_0x36CEFBE9B745A58D(iLocal_218))
							{
								func_38(&uLocal_52, "recsbau", "recsb_theaim", 4, 0, 0, 0);
							}
							else if (!unk_0x36CEFBE9B745A58D(iLocal_219))
							{
								func_53(&uLocal_52, 5);
								func_50(&uLocal_52, 5, iLocal_219, "RECSBRobber1", 0, 1);
								func_38(&uLocal_52, "recsbau", "recsb_theaim", 4, 0, 0, 0);
							}
							iLocal_232 = 1;
						}
						iLocal_229++;
						if (iLocal_229 > 45)
						{
							bLocal_48 = true;
							SYSTEM::SETTIMERA(0);
							if (!bLocal_47)
							{
								func_3();
								SYSTEM::WAIT(0);
								if (!unk_0x36CEFBE9B745A58D(iLocal_222[0]))
								{
									func_50(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
									func_38(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
								else if (!unk_0x36CEFBE9B745A58D(iLocal_222[1]))
								{
									unk_0x36C3B58DA78A2679(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
									func_53(&uLocal_52, 4);
									func_50(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
									func_38(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
								else if (!unk_0x36CEFBE9B745A58D(iLocal_222[2]))
								{
									unk_0x36C3B58DA78A2679(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
									func_53(&uLocal_52, 4);
									func_50(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
									func_38(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
							}
						}
					}
				}
				else if (iLocal_231 || iLocal_232)
				{
					iLocal_230 = 45;
				}
				else
				{
					iLocal_230 = 0;
				}
			}
		}
	}
	if (!iLocal_261 && bLocal_234)
	{
		if (unk_0xF1B911222059B1A1(iLocal_264[0]))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_218))
			{
				if (unk_0x5CEC84BB4AC55121(iLocal_218, unk_0xBC25C936A095B5BA()) && unk_0xE642C1AC73CE364E(iLocal_218, unk_0xBC25C936A095B5BA(), 20f, 20f, 20f, 0, 1, 0))
				{
					bLocal_48 = true;
					func_3();
					SYSTEM::WAIT(0);
					func_38(&uLocal_52, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_261 = 1;
				}
			}
			else if (!unk_0x36CEFBE9B745A58D(iLocal_219))
			{
				if (unk_0x5CEC84BB4AC55121(iLocal_219, unk_0xBC25C936A095B5BA()) && unk_0xE642C1AC73CE364E(iLocal_219, unk_0xBC25C936A095B5BA(), 20f, 20f, 20f, 0, 1, 0))
				{
					bLocal_48 = true;
					func_53(&uLocal_52, 5);
					func_50(&uLocal_52, 5, iLocal_219, "RECSBRobber1", 0, 1);
					func_3();
					SYSTEM::WAIT(0);
					func_38(&uLocal_52, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_261 = 1;
				}
			}
		}
	}
	if (!iLocal_262 && bLocal_235)
	{
		if (unk_0xF1B911222059B1A1(iLocal_264[1]))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_218))
			{
				if (unk_0x5CEC84BB4AC55121(iLocal_218, unk_0xBC25C936A095B5BA()) && unk_0xE642C1AC73CE364E(iLocal_218, unk_0xBC25C936A095B5BA(), 20f, 20f, 20f, 0, 1, 0))
				{
					bLocal_48 = true;
					func_3();
					SYSTEM::WAIT(0);
					func_38(&uLocal_52, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_262 = 1;
				}
			}
			else if (!unk_0x36CEFBE9B745A58D(iLocal_219))
			{
				if (unk_0x5CEC84BB4AC55121(iLocal_219, unk_0xBC25C936A095B5BA()) && unk_0xE642C1AC73CE364E(iLocal_219, unk_0xBC25C936A095B5BA(), 20f, 20f, 20f, 0, 1, 0))
				{
					bLocal_48 = true;
					func_53(&uLocal_52, 5);
					func_50(&uLocal_52, 5, iLocal_219, "RECSBRobber1", 0, 1);
					func_3();
					SYSTEM::WAIT(0);
					func_38(&uLocal_52, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_262 = 1;
				}
			}
		}
	}
	if (!unk_0x1D403DFADBC2DE3C(iLocal_226, 0))
	{
		if ((unk_0xD9C1758D86688CEA(iLocal_226, unk_0xBC25C936A095B5BA(), 1) || unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_226, 0)) || unk_0x27ED965409C55F9D(unk_0xBC25C936A095B5BA(), iLocal_226, joaat("weapon_stickybomb"), -1))
		{
			bLocal_48 = true;
			SYSTEM::SETTIMERA(0);
			unk_0xA902E18EDF6FA0C8(5, iLocal_241, 1862763509);
			if (!unk_0x36CEFBE9B745A58D(iLocal_218))
			{
				unk_0xB8CBD998685C0685(iLocal_218, unk_0xBC25C936A095B5BA(), 0, 16);
				unk_0x22321800954A532E(iLocal_218, true);
				unk_0x3020F31DDBF79437(iLocal_218, unk_0xBC25C936A095B5BA());
				unk_0x5BF507BADF17CFE4(iLocal_218, 1);
			}
			if (!unk_0x36CEFBE9B745A58D(iLocal_219))
			{
				unk_0xB8CBD998685C0685(iLocal_219, unk_0xBC25C936A095B5BA(), 0, 16);
				unk_0x22321800954A532E(iLocal_219, true);
				unk_0x3020F31DDBF79437(iLocal_219, unk_0xBC25C936A095B5BA());
				unk_0x5BF507BADF17CFE4(iLocal_219, 1);
			}
			func_3();
			SYSTEM::WAIT(0);
			if (!unk_0x1D403DFADBC2DE3C(iLocal_226, 0))
			{
				if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_226, 0))
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_218))
					{
						func_60(&uLocal_52, "recsbau", "recsb_deadcr", "recsb_deadcr_1", 4, 0, 0);
						unk_0xD179FA0466FA4FE3(iLocal_218, iLocal_226, -1, -1, 2f, 524296, 0);
					}
					else if (!unk_0x36CEFBE9B745A58D(iLocal_219))
					{
						func_53(&uLocal_52, 5);
						func_50(&uLocal_52, 5, iLocal_219, "RECSBRobber1", 0, 1);
						func_60(&uLocal_52, "recsbau", "recsb_deadcr", "recsb_deadcr_1", 4, 0, 0);
						unk_0xD179FA0466FA4FE3(iLocal_219, iLocal_226, -1, -1, 2f, 524296, 0);
					}
				}
				else if (!bLocal_47)
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_222[0]))
					{
						func_50(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
						func_38(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
					}
					else if (!unk_0x36CEFBE9B745A58D(iLocal_222[1]))
					{
						unk_0x36C3B58DA78A2679(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
						func_53(&uLocal_52, 4);
						func_50(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
						func_38(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
					}
					else if (!unk_0x36CEFBE9B745A58D(iLocal_222[2]))
					{
						unk_0x36C3B58DA78A2679(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
						func_53(&uLocal_52, 4);
						func_50(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
						func_38(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
					}
				}
			}
		}
	}
}

int func_64(char* sParam0)//Position - 0x48EF
{
	var uVar0;
	
	if (func_36())
	{
		MemCopy(&uVar0, {func_65()}, 4);
		if (unk_0x3362CDE8460ED38B(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_65()//Position - 0x4917
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_3DB8 == 4)
	{
		return Global_3C3B;
	}
	return Var0;
}

int func_66()//Position - 0x493B
{
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		if (unk_0xE59B7F5A03335350(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0))
		{
			if (unk_0xEA8F5A4C494DBF3B(unk_0xBC25C936A095B5BA(), joaat("lazer")) || unk_0xEA8F5A4C494DBF3B(unk_0xBC25C936A095B5BA(), joaat("buzzard")))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_67()//Position - 0x4988
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!bLocal_258)
	{
		unk_0x1CD240A97A49C198(unk_0xB5CEFD608600A09F(), &iLocal_244);
		if (unk_0x386592AF38881675(iLocal_244))
		{
			iLocal_224 = unk_0x399F7937FFE4DEBF(iLocal_244);
		}
		if ((iLocal_224 == iLocal_222[0] || iLocal_224 == iLocal_222[1]) || iLocal_224 == iLocal_222[2])
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_224))
			{
				if (!func_66() && unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 4))
				{
					if (unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), iLocal_224) || unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), iLocal_224))
					{
						if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_224, 20f, 20f, 20f, 0, 1, 0))
						{
							if (unk_0x5CEC84BB4AC55121(iLocal_224, unk_0xBC25C936A095B5BA()) || unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_224, 8f, 8f, 8f, 0, 1, 0))
							{
								if (!bLocal_259)
								{
									if (!func_64("recsb_coppon"))
									{
										if (!unk_0x36CEFBE9B745A58D(iLocal_222[0]))
										{
											func_50(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
											func_3();
											SYSTEM::WAIT(0);
											func_38(&uLocal_52, "recsbau", "recsb_coppon", 4, 0, 0, 0);
											bLocal_259 = true;
										}
										else if (!unk_0x36CEFBE9B745A58D(iLocal_222[1]))
										{
											unk_0x36C3B58DA78A2679(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
											func_53(&uLocal_52, 4);
											func_50(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
											func_3();
											SYSTEM::WAIT(0);
											func_38(&uLocal_52, "recsbau", "recsb_coppon", 4, 0, 0, 0);
											bLocal_259 = true;
										}
										else if (!unk_0x36CEFBE9B745A58D(iLocal_222[2]))
										{
											unk_0x36C3B58DA78A2679(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
											func_53(&uLocal_52, 4);
											func_50(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
											func_3();
											SYSTEM::WAIT(0);
											func_38(&uLocal_52, "recsbau", "recsb_coppon", 4, 0, 0, 0);
											bLocal_259 = true;
										}
									}
								}
								iLocal_228++;
								if (iLocal_228 > 40)
								{
									bLocal_258 = true;
									bLocal_47 = true;
									if (!unk_0x1D403DFADBC2DE3C(iLocal_244, 0))
									{
										unk_0xA902E18EDF6FA0C8(5, iLocal_242, 1862763509);
										iVar0 = 0;
										while (iVar0 < iLocal_222)
										{
											if (!unk_0x36CEFBE9B745A58D(iLocal_222[iVar0]))
											{
												unk_0xB8CBD998685C0685(iLocal_222[iVar0], unk_0xBC25C936A095B5BA(), 0, 16);
												unk_0x22321800954A532E(iLocal_222[iVar0], true);
												unk_0x3020F31DDBF79437(iLocal_222[iVar0], unk_0xBC25C936A095B5BA());
												unk_0x5BF507BADF17CFE4(iLocal_222[iVar0], 1);
											}
											iVar0++;
										}
									}
								}
							}
						}
					}
					else if (bLocal_259)
					{
						iLocal_228 = 40;
					}
					else
					{
						iLocal_228 = 0;
					}
				}
			}
		}
	}
	iVar1 = 0;
	while (iVar1 < iLocal_222)
	{
		if (unk_0x724D816EA203A79E(iLocal_222[iVar1]))
		{
			if (unk_0xD9C1758D86688CEA(iLocal_222[iVar1], unk_0xBC25C936A095B5BA(), 1))
			{
				bLocal_47 = true;
			}
			if (unk_0xE59B7F5A03335350(unk_0x3E12B546F3F2597A(), 0))
			{
				if (unk_0xD9C1758D86688CEA(iLocal_222[iVar1], unk_0x3E12B546F3F2597A(), 1))
				{
					bLocal_47 = true;
				}
			}
		}
		iVar1++;
	}
	if (bLocal_258)
	{
	}
	if (iLocal_240)
	{
		if (SYSTEM::TIMERB() > 6000)
		{
			if (SYSTEM::TIMERB() > 6000 && SYSTEM::TIMERB() < 7000)
			{
				unk_0x7A71B0C6DDC0D7DA(330.1744f, 2629.238f, 43.5056f, 30f);
			}
			if (!iLocal_236)
			{
				if (bLocal_48)
				{
					if (!func_36())
					{
						if (!unk_0x36CEFBE9B745A58D(iLocal_222[0]))
						{
							func_50(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
							func_38(&uLocal_52, "recsbau", "recsb_crooks", 4, 0, 0, 0);
						}
						else if (!unk_0x36CEFBE9B745A58D(iLocal_222[1]))
						{
							unk_0x36C3B58DA78A2679(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_53(&uLocal_52, 4);
							func_50(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
							func_38(&uLocal_52, "recsbau", "recsb_crooks", 4, 0, 0, 0);
						}
						else if (!unk_0x36CEFBE9B745A58D(iLocal_222[2]))
						{
							unk_0x36C3B58DA78A2679(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_53(&uLocal_52, 4);
							func_50(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
							func_38(&uLocal_52, "recsbau", "recsb_crooks", 4, 0, 0, 0);
						}
						iLocal_236 = 1;
					}
				}
				else if (!iLocal_238)
				{
					if (!func_36())
					{
						if (!unk_0x36CEFBE9B745A58D(iLocal_222[0]))
						{
							func_50(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
							func_38(&uLocal_52, "recsbau", "recsb_crooka", 4, 0, 0, 0);
						}
						else if (!unk_0x36CEFBE9B745A58D(iLocal_222[1]))
						{
							unk_0x36C3B58DA78A2679(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_53(&uLocal_52, 4);
							func_50(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
							func_38(&uLocal_52, "recsbau", "recsb_crooka", 4, 0, 0, 0);
						}
						else if (!unk_0x36CEFBE9B745A58D(iLocal_222[2]))
						{
							unk_0x36C3B58DA78A2679(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_53(&uLocal_52, 4);
							func_50(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
							func_38(&uLocal_52, "recsbau", "recsb_crooka", 4, 0, 0, 0);
						}
						iLocal_236 = 1;
					}
				}
			}
			if (unk_0x11F754EAEA6336BA(unk_0xBC25C936A095B5BA(), Vector(43.5005f, 2626.29f, 326.6079f) - Vector(50f, 50f, 50f), Vector(43.5005f, 2626.29f, 326.6079f) + Vector(50f, 50f, 50f), 0, 1))
			{
				bLocal_47 = true;
			}
			if (!unk_0x1D403DFADBC2DE3C(iLocal_226, 0))
			{
				if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_226, 0))
				{
					bLocal_47 = true;
					func_3();
					SYSTEM::WAIT(0);
					if (!unk_0x36CEFBE9B745A58D(iLocal_222[0]))
					{
						func_50(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
						func_38(&uLocal_52, "recsbau", "recsb_stealc", 4, 0, 0, 0);
					}
					else if (!unk_0x36CEFBE9B745A58D(iLocal_222[1]))
					{
						unk_0x36C3B58DA78A2679(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
						func_53(&uLocal_52, 4);
						func_50(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
						func_38(&uLocal_52, "recsbau", "recsb_stealc", 4, 0, 0, 0);
					}
					else if (!unk_0x36CEFBE9B745A58D(iLocal_222[2]))
					{
						unk_0x36C3B58DA78A2679(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
						func_53(&uLocal_52, 4);
						func_50(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
						func_38(&uLocal_52, "recsbau", "recsb_stealc", 4, 0, 0, 0);
					}
				}
			}
		}
		iVar1 = 0;
		while (iVar1 < iLocal_222)
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_222[iVar1]))
			{
				if (unk_0xF1B911222059B1A1(iLocal_264[0]) || unk_0xF1B911222059B1A1(iLocal_264[1]))
				{
					if (unk_0x5CEC84BB4AC55121(iLocal_222[iVar1], unk_0xBC25C936A095B5BA()) && unk_0xE642C1AC73CE364E(iLocal_222[iVar1], unk_0xBC25C936A095B5BA(), 20f, 20f, 20f, 0, 1, 0))
					{
						bLocal_47 = true;
						func_3();
						SYSTEM::WAIT(0);
						if (!unk_0x36CEFBE9B745A58D(iLocal_222[0]))
						{
							func_50(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
							func_38(&uLocal_52, "recsbau", "recsb_stealb", 4, 0, 0, 0);
						}
						else if (!unk_0x36CEFBE9B745A58D(iLocal_222[1]))
						{
							unk_0x36C3B58DA78A2679(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_53(&uLocal_52, 4);
							func_50(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
							func_38(&uLocal_52, "recsbau", "recsb_stealb", 4, 0, 0, 0);
						}
						else if (!unk_0x36CEFBE9B745A58D(iLocal_222[2]))
						{
							unk_0x36C3B58DA78A2679(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_53(&uLocal_52, 4);
							func_50(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
							func_38(&uLocal_52, "recsbau", "recsb_stealb", 4, 0, 0, 0);
						}
					}
				}
				if (unk_0xE921F8171F0733B3(unk_0xBC25C936A095B5BA(), iLocal_222[iVar1]))
				{
					unk_0xA902E18EDF6FA0C8(3, iLocal_242, 1862763509);
					bLocal_47 = true;
				}
			}
			iVar1++;
		}
		if (!unk_0x36CEFBE9B745A58D(iLocal_222[1]) && !unk_0x1D403DFADBC2DE3C(iLocal_225[2], 0))
		{
			if (!unk_0xE642C1AC73CE364E(iLocal_222[1], unk_0xBC25C936A095B5BA(), 100f, 100f, 100f, 0, 1, 0))
			{
				unk_0x02537C8C1BEEB477(&(iLocal_222[1]));
				unk_0x1E7A09C1710FB071(&(iLocal_225[2]));
			}
		}
	}
	iVar1 = 0;
	while (iVar1 < iLocal_225)
	{
		if (!unk_0x1D403DFADBC2DE3C(iLocal_225[iVar1], 0))
		{
			if ((unk_0xD9C1758D86688CEA(iLocal_225[iVar1], unk_0xBC25C936A095B5BA(), 1) || unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_225[iVar1], 0)) || unk_0x27ED965409C55F9D(unk_0xBC25C936A095B5BA(), iLocal_225[iVar1], joaat("weapon_stickybomb"), -1))
			{
				bLocal_47 = true;
			}
			if (unk_0xE59B7F5A03335350(unk_0x3E12B546F3F2597A(), 0))
			{
				if (unk_0xD9C1758D86688CEA(iLocal_225[iVar1], unk_0x3E12B546F3F2597A(), 1))
				{
					bLocal_47 = true;
				}
			}
		}
		iVar1++;
	}
	if (!unk_0x1D403DFADBC2DE3C(iLocal_227, 0))
	{
		if (unk_0xD9C1758D86688CEA(iLocal_227, unk_0xBC25C936A095B5BA(), 1) || unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_227, 0))
		{
			bLocal_47 = true;
		}
	}
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		if (unk_0xEA8F5A4C494DBF3B(unk_0xBC25C936A095B5BA(), joaat("towtruck")) || unk_0xEA8F5A4C494DBF3B(unk_0xBC25C936A095B5BA(), joaat("towtruck2")))
		{
			iVar2 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			if (iLocal_240)
			{
				if (!unk_0x1D403DFADBC2DE3C(iLocal_226, 0))
				{
					if (unk_0x27C9F6C1391327CF(iVar2, iLocal_226))
					{
						bLocal_47 = true;
						func_3();
						SYSTEM::WAIT(0);
						if (!unk_0x36CEFBE9B745A58D(iLocal_222[0]))
						{
							func_50(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
							func_38(&uLocal_52, "recsbau", "recsb_stealc", 4, 0, 0, 0);
						}
						else if (!unk_0x36CEFBE9B745A58D(iLocal_222[1]))
						{
							unk_0x36C3B58DA78A2679(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_53(&uLocal_52, 4);
							func_50(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
							func_38(&uLocal_52, "recsbau", "recsb_stealc", 4, 0, 0, 0);
						}
						else if (!unk_0x36CEFBE9B745A58D(iLocal_222[2]))
						{
							unk_0x36C3B58DA78A2679(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_53(&uLocal_52, 4);
							func_50(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
							func_38(&uLocal_52, "recsbau", "recsb_stealc", 4, 0, 0, 0);
						}
					}
				}
			}
			iVar1 = 0;
			while (iVar1 < iLocal_225)
			{
				if (!unk_0x1D403DFADBC2DE3C(iLocal_225[iVar1], 0))
				{
					if (unk_0x27C9F6C1391327CF(iVar2, iLocal_225[iVar1]))
					{
						bLocal_47 = true;
					}
				}
				iVar1++;
			}
			if (!unk_0x1D403DFADBC2DE3C(iLocal_227, 0))
			{
				if (unk_0x27C9F6C1391327CF(iVar2, iLocal_227))
				{
					bLocal_47 = true;
				}
			}
		}
	}
	if (bLocal_47 || bLocal_258)
	{
		SYSTEM::SETTIMERA(0);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 0);
		unk_0xED946BB96C5E9C4A(unk_0xB5CEFD608600A09F(), 1, 0);
		unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
		unk_0x7B6A06DE40F28782(unk_0xB5CEFD608600A09F(), 0f);
		unk_0xDF53A66AEE1401AA(0.1f);
		unk_0x61C036732703515E(350f);
		bLocal_47 = true;
		if (!unk_0x1D403DFADBC2DE3C(iLocal_226, 0) && unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_226, 0))
		{
		}
		else
		{
			func_3();
			SYSTEM::WAIT(0);
			if (!iLocal_240)
			{
				if (unk_0x36CEFBE9B745A58D(iLocal_218) && !unk_0x36CEFBE9B745A58D(iLocal_219))
				{
					func_53(&uLocal_52, 5);
					func_50(&uLocal_52, 5, iLocal_219, "RECSBRobber1", 0, 1);
				}
				if (!unk_0x36CEFBE9B745A58D(iLocal_222[0]))
				{
					func_50(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
					func_38(&uLocal_52, "recsbau", "recsb_copsho", 4, 0, 0, 0);
				}
				else if (!unk_0x36CEFBE9B745A58D(iLocal_222[1]))
				{
					unk_0x36C3B58DA78A2679(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_53(&uLocal_52, 4);
					func_50(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
					func_38(&uLocal_52, "recsbau", "recsb_copsho", 4, 0, 0, 0);
				}
				else if (!unk_0x36CEFBE9B745A58D(iLocal_222[2]))
				{
					unk_0x36C3B58DA78A2679(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_53(&uLocal_52, 4);
					func_50(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
					func_38(&uLocal_52, "recsbau", "recsb_copsho", 4, 0, 0, 0);
				}
			}
			else if (!unk_0x36CEFBE9B745A58D(iLocal_222[0]))
			{
				func_50(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
				func_38(&uLocal_52, "recsbau", "recsb_sscen3", 4, 0, 0, 0);
			}
			else if (!unk_0x36CEFBE9B745A58D(iLocal_222[1]))
			{
				unk_0x36C3B58DA78A2679(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_53(&uLocal_52, 4);
				func_50(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
				func_38(&uLocal_52, "recsbau", "recsb_sscen3", 4, 0, 0, 0);
			}
			else if (!unk_0x36CEFBE9B745A58D(iLocal_222[2]))
			{
				unk_0x36C3B58DA78A2679(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_53(&uLocal_52, 4);
				func_50(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
				func_38(&uLocal_52, "recsbau", "recsb_sscen3", 4, 0, 0, 0);
			}
		}
		unk_0xA902E18EDF6FA0C8(5, iLocal_242, 1862763509);
		if (!func_81())
		{
			SYSTEM::SETTIMERA(0);
			if (!func_81())
			{
				func_68(1);
			}
		}
		if (iLocal_240)
		{
			iVar1 = 0;
			while (iVar1 < iLocal_222)
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_222[iVar1]))
				{
					unk_0xB8CBD998685C0685(iLocal_222[iVar1], unk_0xBC25C936A095B5BA(), 0, 16);
					unk_0x22321800954A532E(iLocal_222[iVar1], true);
					unk_0x3020F31DDBF79437(iLocal_222[iVar1], unk_0xBC25C936A095B5BA());
					unk_0x45EDA11DC1F1ED2D(iLocal_222[iVar1], 1, 1, 1, 0);
					unk_0x5BF507BADF17CFE4(iLocal_222[iVar1], 1);
					unk_0x54480313BB3E8DD0(iLocal_222[iVar1], 2);
					unk_0x91629AC1E1F78419(iLocal_222[iVar1], 50, true);
				}
				iVar1++;
			}
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_220))
	{
		if (unk_0xD9C1758D86688CEA(iLocal_220, unk_0xBC25C936A095B5BA(), 1))
		{
			unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 0);
			unk_0xA902E18EDF6FA0C8(5, iLocal_242, 1862763509);
			bLocal_47 = true;
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_221))
	{
		if (unk_0xD9C1758D86688CEA(iLocal_221, unk_0xBC25C936A095B5BA(), 1))
		{
			unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 0);
			unk_0xA902E18EDF6FA0C8(5, iLocal_242, 1862763509);
			bLocal_47 = true;
		}
	}
	if (unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
	{
		bLocal_47 = true;
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 0);
		unk_0xA902E18EDF6FA0C8(5, iLocal_242, 1862763509);
	}
}

int func_68(int iParam0)//Position - 0x5682
{
	if (func_72())
	{
		Global_19AFA = 1;
		Global_19AF7 = unk_0x105601648511CC64();
		if (func_19(Global_19AF9))
		{
			func_69(0);
		}
		unk_0x3FF92BBF0607A406(1, "RE_TITLE");
		if (iParam0 && func_19(Global_19AF9))
		{
			unk_0x621CEDEDDD531386();
		}
		return 1;
	}
	return 0;
}

void func_69(int iParam0)//Position - 0x56D5
{
	switch (iParam0)
	{
		case 0:
			if (Global_19B04.f_6186.f_2 < 3)
			{
				if (!unk_0x5107E30005FCFEA8())
				{
					func_70(func_71(iParam0), -1);
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
					func_70(func_71(iParam0), -1);
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
					func_70(func_71(iParam0), -1);
					Global_19B04.f_6186.f_4++;
					unk_0xF0059F27F7BB6680(&Global_19B00, 2);
				}
			}
			break;
	}
}

void func_70(char* sParam0, int iParam1)//Position - 0x57B6
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, true, iParam1);
}

char* func_71(int iParam0)//Position - 0x57CD
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

int func_72()//Position - 0x5811
{
	switch (func_73(&Global_62F8, 0, 5, 0, unk_0x8A55B15F4133C912()))
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

int func_73(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x5847
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
		if (func_77(0))
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
		if (!func_75(iParam2))
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
			func_74(uParam0, iParam4);
		}
	}
	return 2;
}

void func_74(var uParam0, int iParam1)//Position - 0x597E
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

bool func_75(int iParam0)//Position - 0x59CD
{
	return func_76(iParam0, Global_8C41);
}

int func_76(int iParam0, int iParam1)//Position - 0x59DE
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

int func_77(int iParam0)//Position - 0x5BBF
{
	if (Global_8C41 == 15)
	{
		return 0;
	}
	if (func_75(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_78()//Position - 0x5BE1
{
	int iVar0;
	
	if ((!unk_0x36CEFBE9B745A58D(iLocal_222[0]) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA())) && !unk_0x36CEFBE9B745A58D(iLocal_218))
	{
	}
	if ((unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 220.6075f, 2615.145f, 35.8465f, 440.8339f, 2684.23f, 72.6324f, 183.125f, 0, true, 0) && unk_0x33CC9445B2DF9387(vLocal_217, 1f)) || unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), 325.6556f, 2647.021f, 43.6289f, 30f, 30f, 30f, false, true, 0))
	{
		iVar0 = 0;
		while (iVar0 < iLocal_222)
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_222[iVar0]))
			{
				unk_0x428C141C2C01CB2A(iLocal_222[iVar0], true, iLocal_241);
				if (!unk_0x2DA8CA50A72528FB(iLocal_267[iVar0]))
				{
					iLocal_267[iVar0] = func_79(iLocal_222[iVar0], 0, 145);
					unk_0x222805B89367761E(iLocal_267[iVar0], false);
				}
			}
			iVar0++;
		}
		if (!unk_0x1D403DFADBC2DE3C(iLocal_218, 0) || (!unk_0x36CEFBE9B745A58D(iLocal_218) && !iLocal_249))
		{
			unk_0x428C141C2C01CB2A(iLocal_218, true, iLocal_242);
			iLocal_265 = func_79(iLocal_218, 0, 145);
			unk_0x222805B89367761E(iLocal_265, false);
			iLocal_248 = 0;
			iLocal_249 = 1;
		}
		if (!unk_0x1D403DFADBC2DE3C(iLocal_219, 0) || (!unk_0x36CEFBE9B745A58D(iLocal_219) && !iLocal_250))
		{
			unk_0x428C141C2C01CB2A(iLocal_219, true, iLocal_242);
			iLocal_266 = func_79(iLocal_219, 0, 145);
			unk_0x222805B89367761E(iLocal_266, false);
			iLocal_247 = 0;
			iLocal_250 = 1;
		}
		SYSTEM::SETTIMERA(0);
		if (!func_81())
		{
			func_68(1);
		}
	}
}

int func_79(int iParam0, bool bParam1, int iParam2)//Position - 0x5D7D
{
	int iVar0;
	
	iVar0 = func_80(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x2DA8CA50A72528FB(iVar0)) && unk_0x0F6F4C227FB5DD52(&(Global_19B04.f_6D75[iParam2 /*29*/].f_3)))
	{
		unk_0x436D0272182E484D(iVar0, &(Global_19B04.f_6D75[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_80(int iParam0, bool bParam1, bool bParam2)//Position - 0x5DCF
{
	int iVar0;
	
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x511FE22BCF5353CD(iParam0);
	if (unk_0xD27AC0E9B78CFDD7(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(iVar0, func_52(unk_0x7AF0088ABFA713B6(), 1f, 1f));
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
		unk_0x3F5F1772D71D5EC4(iVar0, func_52(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
		unk_0xF9C2945DB5BAB4BF(iVar0, bParam1);
	}
	else if (unk_0xB12D030810E8447D(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(iVar0, func_52(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
	}
	return iVar0;
}

int func_81()//Position - 0x5E73
{
	if ((Global_19AF9 == func_33() && unk_0x8520DF5301DD9811()) && Global_19AFA)
	{
		return 1;
	}
	return 0;
}

void func_82()//Position - 0x5E9E
{
	int iVar0;
	
	if (!iLocal_252)
	{
		if (!bLocal_47 && !iLocal_240)
		{
			if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), 325.6556f, 2647.021f, 43.6289f, 30f, 30f, 30f, false, true, 0))
			{
				iVar0 = 0;
				while (iVar0 < iLocal_222)
				{
					if (unk_0x2DA8CA50A72528FB(iLocal_267[iVar0]))
					{
						unk_0x222805B89367761E(iLocal_267[iVar0], true);
					}
					iVar0++;
				}
				if (unk_0x2DA8CA50A72528FB(iLocal_265))
				{
					unk_0x222805B89367761E(iLocal_265, true);
				}
				if (unk_0x2DA8CA50A72528FB(iLocal_266))
				{
					unk_0x222805B89367761E(iLocal_266, true);
				}
				if (!unk_0x36CEFBE9B745A58D(iLocal_222[0]))
				{
					func_50(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
					func_38(&uLocal_52, "recsbau", "recsb_copswa", 4, 0, 0, 0);
				}
				else if (!unk_0x36CEFBE9B745A58D(iLocal_222[1]))
				{
					unk_0x36C3B58DA78A2679(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_53(&uLocal_52, 4);
					func_50(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
					func_38(&uLocal_52, "recsbau", "recsb_copswa", 4, 0, 0, 0);
				}
				else if (!unk_0x36CEFBE9B745A58D(iLocal_222[2]))
				{
					unk_0x36C3B58DA78A2679(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_53(&uLocal_52, 4);
					func_50(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
					func_38(&uLocal_52, "recsbau", "recsb_copswa", 4, 0, 0, 0);
				}
				iLocal_252 = 1;
			}
		}
	}
	if ((func_81() && !iLocal_238) && !iLocal_240)
	{
		if (iLocal_255 == 0 && !func_36())
		{
			SYSTEM::SETTIMERA(0);
			if (func_45() == 0)
			{
				func_38(&uLocal_52, "recsbau", "recsb_comm", 4, 0, 0, 0);
			}
			else if (func_45() == 1)
			{
				func_38(&uLocal_52, "recsbau", "recsb_comf", 4, 0, 0, 0);
			}
			else if (func_45() == 2)
			{
				func_38(&uLocal_52, "recsbau", "recsb_comt", 4, 0, 0, 0);
			}
			iLocal_255++;
			SYSTEM::SETTIMERA(0);
		}
		if (iLocal_255 == 1 && !func_36())
		{
			SYSTEM::SETTIMERA(0);
			if (!unk_0x36CEFBE9B745A58D(iLocal_222[0]))
			{
				func_50(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
				func_38(&uLocal_52, "recsbau", "recsb_banteb", 4, 0, 0, 0);
			}
			else if (!unk_0x36CEFBE9B745A58D(iLocal_222[1]))
			{
				unk_0x36C3B58DA78A2679(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_53(&uLocal_52, 4);
				func_50(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
				func_38(&uLocal_52, "recsbau", "recsb_banteb", 4, 0, 0, 0);
			}
			else if (!unk_0x36CEFBE9B745A58D(iLocal_222[2]))
			{
				unk_0x36C3B58DA78A2679(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_53(&uLocal_52, 4);
				func_50(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
				func_38(&uLocal_52, "recsbau", "recsb_banteb", 4, 0, 0, 0);
			}
			iLocal_255++;
			SYSTEM::SETTIMERA(0);
		}
		if ((iLocal_255 == 2 && SYSTEM::TIMERA() > 2000) && !func_36())
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_218))
			{
				func_38(&uLocal_52, "recsbau", "recsb_bantea", 4, 0, 0, 0);
			}
			else if (!unk_0x36CEFBE9B745A58D(iLocal_219))
			{
				func_53(&uLocal_52, 5);
				func_50(&uLocal_52, 5, iLocal_219, "RECSBRobber1", 0, 1);
				func_38(&uLocal_52, "recsbau", "recsb_bantea", 4, 0, 0, 0);
			}
			SYSTEM::SETTIMERA(0);
			iLocal_255++;
		}
		if ((iLocal_255 == 3 && SYSTEM::TIMERA() > 2000) && !func_36())
		{
			if (!bLocal_48)
			{
				if (!iLocal_237)
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_218))
					{
						func_38(&uLocal_52, "recsbau", "recsb_croclo", 4, 0, 0, 0);
					}
					else if (!unk_0x36CEFBE9B745A58D(iLocal_219))
					{
						func_53(&uLocal_52, 5);
						func_50(&uLocal_52, 5, iLocal_219, "RECSBRobber1", 0, 1);
						func_38(&uLocal_52, "recsbau", "recsb_croclo", 4, 0, 0, 0);
					}
					iLocal_237 = 1;
				}
			}
			if (!bLocal_47)
			{
				func_83(&(iLocal_222[0]), "recsb_copclo");
				func_83(&(iLocal_222[1]), "recsb_copclo");
				func_83(&(iLocal_222[2]), "recsb_copclo");
			}
		}
		if (iLocal_255 == 4 && SYSTEM::TIMERA() > 5000)
		{
			SYSTEM::SETTIMERA(0);
			iLocal_255++;
		}
	}
}

void func_83(var uParam0, char* sParam1)//Position - 0x62B5
{
	if (!unk_0x36CEFBE9B745A58D(*uParam0))
	{
		if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), *uParam0, 4f, 4f, 4f, 0, 1, 0))
		{
			if (!bLocal_47)
			{
				func_50(&uLocal_52, 4, *uParam0, "RECSBCop1", 0, 1);
				func_38(&uLocal_52, "recsbau", sParam1, 4, 0, 0, 0);
				unk_0x56F2E1B5599188FA(*uParam0, unk_0xBC25C936A095B5BA(), 10000, 48, 4);
			}
			SYSTEM::SETTIMERA(0);
			iLocal_255++;
		}
	}
}

void func_84()//Position - 0x631F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_222)
	{
		if (unk_0x36CEFBE9B745A58D(iLocal_222[iVar0]))
		{
			if (unk_0x2DA8CA50A72528FB(iLocal_267[iVar0]))
			{
				unk_0x07B8ECB35A4ED3AC(&(iLocal_267[iVar0]));
			}
		}
		iVar0++;
	}
	if (unk_0x36CEFBE9B745A58D(iLocal_218))
	{
		if (unk_0x2DA8CA50A72528FB(iLocal_265))
		{
			unk_0x07B8ECB35A4ED3AC(&iLocal_265);
		}
	}
	if (unk_0x36CEFBE9B745A58D(iLocal_219))
	{
		if (unk_0x2DA8CA50A72528FB(iLocal_266))
		{
			unk_0x07B8ECB35A4ED3AC(&iLocal_266);
		}
	}
	iVar0 = 0;
	while (iVar0 < iLocal_225)
	{
		if (!unk_0x1D403DFADBC2DE3C(iLocal_225[iVar0], 0))
		{
			if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_225[iVar0], 0))
			{
				unk_0x7BA90AD6CF7BDBF7(iLocal_225[iVar0], 0);
			}
		}
		iVar0++;
	}
	if (bLocal_48)
	{
		if (!iLocal_50)
		{
			unk_0xA902E18EDF6FA0C8(5, iLocal_241, 1862763509);
			if (!unk_0x36CEFBE9B745A58D(iLocal_218))
			{
				if (unk_0x2DA8CA50A72528FB(iLocal_265))
				{
					unk_0x07B8ECB35A4ED3AC(&iLocal_265);
				}
				if (!unk_0x2DA8CA50A72528FB(iLocal_265))
				{
					iLocal_265 = func_79(iLocal_218, 1, 145);
					unk_0xB105531EDD3DE51B(iLocal_218, true);
				}
				unk_0xB8CBD998685C0685(iLocal_218, unk_0xBC25C936A095B5BA(), 0, 16);
				unk_0x22321800954A532E(iLocal_218, true);
				unk_0x3020F31DDBF79437(iLocal_218, unk_0xBC25C936A095B5BA());
				unk_0x5BF507BADF17CFE4(iLocal_218, 1);
			}
			if (!unk_0x36CEFBE9B745A58D(iLocal_219))
			{
				if (unk_0x2DA8CA50A72528FB(iLocal_266))
				{
					unk_0x07B8ECB35A4ED3AC(&iLocal_266);
				}
				if (!unk_0x2DA8CA50A72528FB(iLocal_266))
				{
					iLocal_266 = func_79(iLocal_219, 1, 145);
					unk_0xB105531EDD3DE51B(iLocal_219, true);
				}
				unk_0xB8CBD998685C0685(iLocal_219, unk_0xBC25C936A095B5BA(), 0, 16);
				unk_0x22321800954A532E(iLocal_219, true);
				unk_0x3020F31DDBF79437(iLocal_219, unk_0xBC25C936A095B5BA());
				unk_0x5BF507BADF17CFE4(iLocal_219, 1);
			}
			iLocal_50 = 1;
		}
		if (bLocal_47)
		{
			if (!iLocal_51)
			{
				unk_0xA902E18EDF6FA0C8(5, iLocal_242, 1862763509);
				iVar0 = 0;
				while (iVar0 < iLocal_222)
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_222[iVar0]))
					{
						unk_0xB105531EDD3DE51B(iLocal_222[iVar0], true);
						if (unk_0x2DA8CA50A72528FB(iLocal_267[iVar0]))
						{
							unk_0x07B8ECB35A4ED3AC(&(iLocal_267[iVar0]));
						}
						unk_0xB8CBD998685C0685(iLocal_222[iVar0], unk_0xBC25C936A095B5BA(), 0, 16);
						unk_0x22321800954A532E(iLocal_222[iVar0], true);
						unk_0x3020F31DDBF79437(iLocal_222[iVar0], unk_0xBC25C936A095B5BA());
						unk_0x5BF507BADF17CFE4(iLocal_222[iVar0], 1);
					}
					iVar0++;
				}
				iLocal_51 = 1;
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < iLocal_222)
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_222[iVar0]))
				{
					unk_0xB105531EDD3DE51B(iLocal_222[iVar0], false);
				}
				iVar0++;
			}
		}
	}
	else if (bLocal_47)
	{
		if (!iLocal_49)
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_218))
			{
				unk_0xB105531EDD3DE51B(iLocal_218, false);
			}
			if (!unk_0x36CEFBE9B745A58D(iLocal_219))
			{
				unk_0xB105531EDD3DE51B(iLocal_219, false);
			}
			iLocal_49 = 1;
		}
		if (!iLocal_51)
		{
			unk_0xA902E18EDF6FA0C8(5, iLocal_242, 1862763509);
			iVar0 = 0;
			while (iVar0 < iLocal_222)
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_222[iVar0]))
				{
					unk_0xB105531EDD3DE51B(iLocal_222[iVar0], true);
					unk_0x3DCC3E15B9F89878(iLocal_222[iVar0]);
					if (unk_0x2DA8CA50A72528FB(iLocal_267[iVar0]))
					{
						unk_0x07B8ECB35A4ED3AC(&(iLocal_267[iVar0]));
					}
					if (!unk_0x2DA8CA50A72528FB(iLocal_267[iVar0]))
					{
						iLocal_267[iVar0] = func_79(iLocal_222[iVar0], 1, 145);
					}
					unk_0xB8CBD998685C0685(iLocal_222[iVar0], unk_0xBC25C936A095B5BA(), 0, 16);
					unk_0x22321800954A532E(iLocal_222[iVar0], true);
					unk_0x3020F31DDBF79437(iLocal_222[iVar0], unk_0xBC25C936A095B5BA());
					unk_0x5BF507BADF17CFE4(iLocal_222[iVar0], 1);
				}
				iVar0++;
			}
			iLocal_51 = 1;
		}
	}
}

void func_85()//Position - 0x665E
{
	unk_0xF243B7A14FCFD0F4(joaat("s_m_y_ranger_01"));
	unk_0xF243B7A14FCFD0F4(joaat("a_m_y_genstreet_01"));
	unk_0xF243B7A14FCFD0F4(joaat("s_m_m_paramedic_01"));
	unk_0xF243B7A14FCFD0F4(joaat("sheriff"));
	unk_0xF243B7A14FCFD0F4(joaat("phoenix"));
	if ((((unk_0xD6513D668481290A(joaat("s_m_y_ranger_01")) && unk_0xD6513D668481290A(joaat("a_m_y_genstreet_01"))) && unk_0xD6513D668481290A(joaat("s_m_m_paramedic_01"))) && unk_0xD6513D668481290A(joaat("sheriff"))) && unk_0xD6513D668481290A(joaat("phoenix")))
	{
		unk_0x8510BC031C24B862(joaat("phoenix"), true);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 1);
		unk_0xDF53A66AEE1401AA(0f);
		unk_0x1DAA351326EA3537(Vector(44.49f, 2630.83f, 335.22f) - Vector(20f, 50f, 50f), Vector(44.49f, 2630.83f, 335.22f) + Vector(20f, 50f, 50f), 0, 1, 1, 1);
		unk_0xA7FBEF44EF04D534(418.2996f, 2650.597f, 42.84723f, 297.8981f, 2617.968f, 53.6412f, 49.6875f, 0, false, 1);
		unk_0x379ACE23D404525C(Vector(43.4932f, 2612.694f, 328.0555f) - Vector(10f, 10f, 10f), Vector(43.4932f, 2612.694f, 328.0555f) + Vector(10f, 10f, 10f), false, 1);
		unk_0xEDAD35A0D81ED3FB(328.0555f, 2612.694f, 43.4932f, 5f, 0, 0, 0, 0, false, 0);
		iLocal_226 = unk_0x61C05BF08A1E0EFE(joaat("phoenix"), 326.78f, 2626.56f, 43.5081f, 45.21f, true, true, false);
		iLocal_225[0] = unk_0x61C05BF08A1E0EFE(joaat("sheriff"), 314.1008f, 2641.67f, 43.5055f, 258.9436f, true, true, false);
		iLocal_225[1] = unk_0x61C05BF08A1E0EFE(joaat("sheriff"), 330.7097f, 2646.913f, 43.685f, 120.9436f, true, true, false);
		iLocal_225[2] = unk_0x61C05BF08A1E0EFE(joaat("sheriff"), 321.4496f, 2649.388f, 43.5706f, 105.9436f, true, true, false);
		unk_0x1A40AA7E9E62F2DD(iLocal_225[2], 1);
		unk_0x1A40AA7E9E62F2DD(iLocal_225[1], 1);
		unk_0x1A40AA7E9E62F2DD(iLocal_225[0], 1);
		unk_0x0FB6723EA68C0881(iLocal_225[2], 1);
		unk_0x0FB6723EA68C0881(iLocal_225[1], 1);
		unk_0x0FB6723EA68C0881(iLocal_225[0], 1);
		unk_0x7BA90AD6CF7BDBF7(iLocal_225[0], 1);
		unk_0x7BA90AD6CF7BDBF7(iLocal_225[2], 1);
		unk_0x7BA90AD6CF7BDBF7(iLocal_225[1], 1);
		unk_0x09F6B51861E304AB(iLocal_226, 1);
		unk_0x09F6B51861E304AB(iLocal_225[0], 1);
		unk_0x09F6B51861E304AB(iLocal_225[1], 1);
		unk_0x09F6B51861E304AB(iLocal_225[2], 1);
		iLocal_218 = unk_0x01B3635C3E8EDD81(19, joaat("a_m_y_genstreet_01"), 321.31f, 2615.66f, 43.4963f, 346f, 1, true);
		iLocal_219 = unk_0x01B3635C3E8EDD81(19, joaat("a_m_y_genstreet_01"), 326.25f, 2624.51f, 43.4846f, 341f, 1, true);
		iLocal_223 = unk_0x01B3635C3E8EDD81(6, joaat("s_m_y_ranger_01"), 325.3731f, 2631.16f, 43.5248f, 87f, 1, true);
		iLocal_222[0] = unk_0x01B3635C3E8EDD81(6, joaat("s_m_y_ranger_01"), 310.6203f, 2642.854f, 43.5173f, 226f, 1, true);
		iLocal_222[1] = unk_0x01B3635C3E8EDD81(6, joaat("s_m_y_ranger_01"), 319.5652f, 2650.067f, 43.5411f, 189f, 1, true);
		iLocal_222[2] = unk_0x01B3635C3E8EDD81(6, joaat("s_m_y_ranger_01"), 324.0396f, 2650.964f, 43.5983f, 214f, 1, true);
		unk_0xF85FAED5BA864282(iLocal_222[0], "ped_cops[0]");
		unk_0xF85FAED5BA864282(iLocal_222[1], "ped_cops[1]");
		unk_0xF85FAED5BA864282(iLocal_222[2], "ped_cops[2]");
		unk_0x69194304DB679A9C(iLocal_222[0], true, -1, 0);
		unk_0x69194304DB679A9C(iLocal_222[1], true, -1, 0);
		unk_0x69194304DB679A9C(iLocal_222[2], true, -1, 0);
		unk_0xE95574194EEDAEF7(iLocal_219, 326.25f, 2624.51f, 43.4846f, 3.5f, 0, 0);
		unk_0xE95574194EEDAEF7(iLocal_218, 321.31f, 2615.66f, 43.4963f, 3.5f, 0, 0);
		unk_0xE95574194EEDAEF7(iLocal_222[0], 310.6203f, 2642.854f, 43.5173f, 3.5f, 0, 0);
		unk_0xE95574194EEDAEF7(iLocal_222[1], 319.5652f, 2650.067f, 43.5411f, 3.5f, 0, 0);
		unk_0xE95574194EEDAEF7(iLocal_222[2], 324.0396f, 2650.964f, 43.5983f, 3.5f, 0, 0);
		unk_0xA3699A5DEB1FBBA9(iLocal_222[0]);
		unk_0xA3699A5DEB1FBBA9(iLocal_222[1]);
		unk_0xA3699A5DEB1FBBA9(iLocal_222[2]);
		unk_0x91629AC1E1F78419(iLocal_222[0], 0, true);
		unk_0x91629AC1E1F78419(iLocal_222[1], 0, true);
		unk_0x91629AC1E1F78419(iLocal_222[2], 0, true);
		unk_0x91629AC1E1F78419(iLocal_222[0], 1, true);
		unk_0x91629AC1E1F78419(iLocal_222[1], 1, true);
		unk_0x91629AC1E1F78419(iLocal_222[2], 1, true);
		unk_0xFC3C88E2313FA926(iLocal_222[0], 13);
		unk_0xFC3C88E2313FA926(iLocal_222[1], 13);
		unk_0xFC3C88E2313FA926(iLocal_222[2], 13);
		unk_0x91629AC1E1F78419(iLocal_219, 0, true);
		unk_0x91629AC1E1F78419(iLocal_218, 0, true);
		unk_0x91629AC1E1F78419(iLocal_219, 1, true);
		unk_0x91629AC1E1F78419(iLocal_218, 1, true);
		unk_0x1C5BDB4E5D257D63(iLocal_225[0], 0, 0, 0);
		unk_0x1C5BDB4E5D257D63(iLocal_225[0], 1, 0, 0);
		unk_0x1C5BDB4E5D257D63(iLocal_225[1], 1, 0, 0);
		unk_0x1C5BDB4E5D257D63(iLocal_225[1], 0, 0, 0);
		unk_0x1C5BDB4E5D257D63(iLocal_225[2], 1, 0, 0);
		unk_0x1C5BDB4E5D257D63(iLocal_225[2], 0, 0, 0);
		unk_0x1C5BDB4E5D257D63(iLocal_226, 1, 0, 0);
		unk_0x1C5BDB4E5D257D63(iLocal_226, 0, 0, 0);
		unk_0xB71D41C0310C93DE(iLocal_226, true, 1);
		unk_0xB2CB6EAA6B280A84("robbers", &iLocal_241);
		unk_0xB2CB6EAA6B280A84("cops", &iLocal_242);
		unk_0x65E471E4A2D56226(iLocal_223, 0, 0);
		unk_0x4106FAF8AA1D69D5(iLocal_219, iLocal_241);
		unk_0x428C141C2C01CB2A(iLocal_219, false, iLocal_242);
		unk_0x65E471E4A2D56226(iLocal_219, 300, 0);
		unk_0x7A535CE1F001F3FE(iLocal_219, joaat("weapon_pistol"), 200, true, true);
		unk_0x6CCBC1B22488DC0C(iLocal_219, 100f);
		unk_0x5AAB329BBC1053A1(iLocal_219, 100f);
		unk_0x2513C0D7A88E6C01(iLocal_219, 35f, 35f, 1);
		unk_0xFC3C88E2313FA926(iLocal_219, 13);
		unk_0x4106FAF8AA1D69D5(iLocal_218, iLocal_241);
		unk_0x428C141C2C01CB2A(iLocal_218, false, iLocal_242);
		unk_0x65E471E4A2D56226(iLocal_218, 300, 0);
		unk_0x7A535CE1F001F3FE(iLocal_218, joaat("weapon_pistol"), 200, true, true);
		unk_0x6CCBC1B22488DC0C(iLocal_218, 100f);
		unk_0x5AAB329BBC1053A1(iLocal_218, 100f);
		unk_0x2513C0D7A88E6C01(iLocal_218, 35f, 35f, 1);
		unk_0xFC3C88E2313FA926(iLocal_218, 13);
		unk_0x428C141C2C01CB2A(iLocal_222[0], false, iLocal_241);
		unk_0x428C141C2C01CB2A(iLocal_222[1], false, iLocal_241);
		unk_0x428C141C2C01CB2A(iLocal_222[2], false, iLocal_241);
		unk_0x7A535CE1F001F3FE(iLocal_222[0], joaat("weapon_pumpshotgun"), 200, true, true);
		unk_0x7A535CE1F001F3FE(iLocal_222[1], joaat("weapon_pistol"), 200, true, true);
		unk_0x7A535CE1F001F3FE(iLocal_222[2], joaat("weapon_pumpshotgun"), 200, true, true);
		unk_0x6CCBC1B22488DC0C(iLocal_222[0], 100f);
		unk_0x5AAB329BBC1053A1(iLocal_222[0], 100f);
		unk_0x6CCBC1B22488DC0C(iLocal_222[1], 100f);
		unk_0x5AAB329BBC1053A1(iLocal_222[1], 100f);
		unk_0x6CCBC1B22488DC0C(iLocal_222[2], 100f);
		unk_0x5AAB329BBC1053A1(iLocal_222[2], 100f);
		unk_0x4106FAF8AA1D69D5(iLocal_222[0], iLocal_242);
		unk_0x4106FAF8AA1D69D5(iLocal_222[1], iLocal_242);
		unk_0x4106FAF8AA1D69D5(iLocal_222[2], iLocal_242);
		unk_0xE85B33FB221A23CD(5, false);
		unk_0xE85B33FB221A23CD(3, false);
		unk_0xA902E18EDF6FA0C8(1, iLocal_242, -1533126372);
		unk_0xA902E18EDF6FA0C8(1, -1533126372, iLocal_242);
		unk_0xA902E18EDF6FA0C8(1, iLocal_242, 1862763509);
		unk_0xA902E18EDF6FA0C8(1, iLocal_241, 1862763509);
		unk_0xA902E18EDF6FA0C8(5, iLocal_242, iLocal_241);
		unk_0xA902E18EDF6FA0C8(5, -1533126372, iLocal_241);
		unk_0xA902E18EDF6FA0C8(5, iLocal_241, iLocal_242);
		unk_0x40DD085221F706D0(iLocal_222[0], iLocal_218, 3000, 0);
		unk_0x40DD085221F706D0(iLocal_222[1], iLocal_218, 3000, 0);
		unk_0x40DD085221F706D0(iLocal_222[2], iLocal_218, 3000, 0);
		if (func_45() == 0)
		{
			func_50(&uLocal_52, 0, unk_0xBC25C936A095B5BA(), "MICHAEL", 0, 1);
		}
		else if (func_45() == 1)
		{
			func_50(&uLocal_52, 0, unk_0xBC25C936A095B5BA(), "FRANKLIN", 0, 1);
		}
		else if (func_45() == 2)
		{
			func_50(&uLocal_52, 0, unk_0xBC25C936A095B5BA(), "TREVOR", 0, 1);
		}
		func_50(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
		func_50(&uLocal_52, 5, iLocal_218, "RECSBRobber1", 0, 1);
		unk_0x36C3B58DA78A2679(iLocal_222[0], "S_M_Y_RANGER_01_WHITE_FULL_01");
		unk_0x36C3B58DA78A2679(iLocal_218, "G_M_Y_ArmGoon_02_White_Armenian_MINI_01");
		unk_0x36C3B58DA78A2679(iLocal_218, "G_M_Y_ArmGoon_02_White_Armenian_MINI_01");
		iLocal_45 = 1;
	}
}

void func_86(int iParam0)//Position - 0x6E53
{
	if (iParam0 == -1)
	{
		iParam0 = func_33();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_88(iParam0);
	unk_0x8A623F2A0D19557F(0);
	unk_0xCB0D7BF24DBB59C6(1);
	Global_19AF6 = 0;
	func_87();
}

void func_87()//Position - 0x6E89
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

void func_88(int iParam0)//Position - 0x6EC6
{
	Global_19AF9 = iParam0;
}

int func_89(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x6ED4
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
		iParam1 = func_33();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_141())
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
			if (SYSTEM::VMAG2(unk_0xB5D9AE572C19509E(unk_0xBC25C936A095B5BA())) > 1369f && !func_140())
			{
				return 0;
			}
		}
		if (!Global_19B04.f_2360)
		{
			return 0;
		}
		if (func_10(0))
		{
			return 0;
		}
		if (func_136())
		{
			return 0;
		}
		if (func_135())
		{
			return 0;
		}
		if (Global_19AF9 != -1)
		{
			return 0;
		}
		if (func_27(func_45()))
		{
			if (func_129(100f, 1) != -1)
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
		if (!func_128(iParam1))
		{
			return 0;
		}
		if (func_27(func_45()))
		{
			if (func_127(func_45()) == 4 || func_127(func_45()) == 5)
			{
				return 0;
			}
		}
		if (func_27(func_45()))
		{
			if (!func_126(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_125(Global_19B04.f_6186.f_2B[iParam1]))
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
		if (func_124())
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
		if (!func_115(4))
		{
			return 0;
		}
		if (!func_75(5))
		{
			return 0;
		}
		if (func_114(iParam1, iParam2) && !bParam3)
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
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_114(0, 0))
		{
			return 0;
		}
		if (Global_634F)
		{
			return 0;
		}
		if (func_128(30) && !func_114(30, 0))
		{
			if (iParam1 != 30)
			{
				if (SYSTEM::VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_27(func_45()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				vVar3 = { Global_19B04.f_932.f_21B.f_8E8[iVar2 /*3*/] };
				iVar4 = Global_19B04.f_932.f_21B.f_8E4[iVar2];
				if (func_113(iVar4))
				{
					if (func_91(iVar2))
					{
						if (!func_90(vVar3, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false), vVar3) < (210f * 210f))
							{
								if (func_45() != iVar2)
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

bool func_90(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x726E
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_91(int iParam0)//Position - 0x72B5
{
	int iVar0;
	
	iVar0 = Global_19B04.f_932.f_21B.f_8E4[iParam0];
	return func_92(iVar0);
}

int func_92(int iParam0)//Position - 0x72D6
{
	return func_93(iParam0, 1);
}

int func_93(int iParam0, int iParam1)//Position - 0x72E5
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_113(iParam0))
	{
		return 0;
	}
	func_94(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_94(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x7338
{
	func_95(func_106(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_95(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x7356
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_105(iParam0, iParam1))
	{
		iVar0 = func_104(iParam1);
		iVar1 = func_102(iParam0);
		iVar2 = (func_102(iParam0) - func_102(iParam1));
		iVar3 = (func_104(iParam0) - func_104(iParam1));
		iVar4 = (func_101(iParam0) - func_101(iParam1));
		iVar5 = (func_100(iParam0) - func_100(iParam1));
		iVar6 = (func_99(iParam0) - func_99(iParam1));
		iVar7 = (func_98(iParam0) - func_98(iParam1));
	}
	else
	{
		iVar0 = func_104(iParam0);
		iVar1 = func_102(iParam1);
		iVar2 = (func_102(iParam1) - func_102(iParam0));
		iVar3 = (func_104(iParam1) - func_104(iParam0));
		iVar4 = (func_101(iParam1) - func_101(iParam0));
		iVar5 = (func_100(iParam1) - func_100(iParam0));
		iVar6 = (func_99(iParam1) - func_99(iParam0));
		iVar7 = (func_98(iParam1) - func_98(iParam0));
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
		iVar4 = (iVar4 + func_97(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_96(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_96(float fParam0, float fParam1, float fParam2)//Position - 0x7557
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

int func_97(int iParam0, int iParam1)//Position - 0x7599
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

int func_98(int iParam0)//Position - 0x763B
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_99(int iParam0)//Position - 0x764E
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_100(int iParam0)//Position - 0x7661
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_101(int iParam0)//Position - 0x7674
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_102(int iParam0)//Position - 0x7686
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_103(unk_0xFA30DFD0084E92FE(iParam0, 31), -1, 1)) + 2011;
}

int func_103(bool bParam0, int iParam1, int iParam2)//Position - 0x76AB
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_104(int iParam0)//Position - 0x76C2
{
	return iParam0 & 15;
}

int func_105(int iParam0, int iParam1)//Position - 0x76CF
{
	int iVar0;
	int iVar1;
	
	if (!func_113(iParam1) || !func_113(iParam0))
	{
		return 1;
	}
	iVar0 = func_102(iParam0);
	iVar1 = func_102(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_104(iParam0);
	iVar1 = func_104(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_101(iParam0);
	iVar1 = func_101(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_100(iParam0);
	iVar1 = func_100(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_99(iParam0);
	iVar1 = func_99(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_98(iParam0);
	iVar1 = func_98(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_106()//Position - 0x77DB
{
	var uVar0;
	
	func_112(&uVar0, unk_0xF40D00CD7B81C0A8());
	func_111(&uVar0, unk_0x7E09057438B9D216());
	func_110(&uVar0, unk_0x6E06C0DB9B43570D());
	func_109(&uVar0, unk_0xBE14F159908E4EE5());
	func_108(&uVar0, unk_0xDD6A91E47ED4D0CF());
	func_107(&uVar0, unk_0x4EEB3860BFC44B78());
	return uVar0;
}

void func_107(var uParam0, int iParam1)//Position - 0x7821
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

void func_108(var uParam0, int iParam1)//Position - 0x78A7
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_109(var uParam0, int iParam1)//Position - 0x78DA
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_104(*uParam0);
	iVar1 = func_102(*uParam0);
	if (iParam1 < 1 || iParam1 > func_97(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_110(var uParam0, int iParam1)//Position - 0x792B
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_111(var uParam0, int iParam1)//Position - 0x7965
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_112(var uParam0, int iParam1)//Position - 0x79A0
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_113(int iParam0)//Position - 0x79DC
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
	iVar0 = func_98(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_99(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_100(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_102(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_104(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_101(iParam0);
	if (iVar5 < 1 || iVar5 > func_97(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_114(int iParam0, int iParam1)//Position - 0x7AB8
{
	if (unk_0xFA30DFD0084E92FE(Global_19B04.f_6186.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_115(int iParam0)//Position - 0x7ADB
{
	int iVar0;
	
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				iVar0 = func_45();
				if (!func_27(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_123()) || Global_1974B) || Global_62BF) || func_122()) || func_47(8, -1)) || func_121()) || func_120()) || func_119()) || func_118()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1) || func_123()) || Global_62BF) || func_122()) || func_47(8, -1)) || func_119()) || func_121()) || func_120()) || func_118()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_123()) || Global_1974B) || Global_62BF) || func_122()) || func_47(8, -1)) || func_119()) || func_121()) || func_120()) || func_118()) || Global_19B04.f_1DEB.f_397[iVar0] == 5) || Global_8E64 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_123()) || Global_1974B) || Global_62BF) || func_122()) || func_47(8, -1)) || func_121()) || func_120()) || func_118()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_123() || unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0) || func_47(8, -1)) || func_118()) || func_117()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_47(8, -1) || func_121()) || func_120()) || func_117()) || func_116())
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
							if ((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || func_123()) || Global_62BF) || func_122()) || func_47(8, -1)) || func_120()) || func_119()) || func_118()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || !unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) || !unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F())) || !unk_0x726D9204B160D23E()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || func_123()) || func_120()) || Global_1974B) || Global_62BF) || func_122()) || Global_90C1) || func_47(8, -1)) || func_119()) || func_117()) || func_118()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || !unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) || !unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F())) || !unk_0x726D9204B160D23E()) || unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0)) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1)) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0x9273B3557334635D(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || func_123()) || Global_1974B) || Global_62BF) || func_122()) || func_47(8, -1)) || func_119()) || func_117()) || func_121()) || func_120()) || func_118())
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

var func_116()//Position - 0x81F9
{
	return Global_16B42.f_1;
}

int func_117()//Position - 0x8207
{
	if (Global_15FA6 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_147B0[Global_15FA6 /*34*/].f_F, 13);
	}
	return 0;
}

int func_118()//Position - 0x822D
{
	if (unk_0xB731B8C5BCE89836(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_119()//Position - 0x8247
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

bool func_120()//Position - 0x8271
{
	return Global_16B4F.f_142 > 0;
}

bool func_121()//Position - 0x8282
{
	return Global_16B4F.f_141 > 0;
}

var func_122()//Position - 0x8293
{
	return Global_140856;
}

int func_123()//Position - 0x829F
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		return Global_161D2.f_2C == 1;
	}
	return 0;
}

int func_124()//Position - 0x82BB
{
	func_44();
	if (Global_C60[Global_389D /*2811*/][0 /*281*/].f_103 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_125(int iParam0)//Position - 0x82E3
{
	return func_105(func_106(), iParam0);
}

int func_126(int iParam0, int iParam1, int iParam2)//Position - 0x82F5
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_45();
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

int func_127(int iParam0)//Position - 0x83D9
{
	if (!func_27(iParam0))
	{
		return 7;
	}
	return Global_19B04.f_1DEB.f_397[iParam0];
}

bool func_128(int iParam0)//Position - 0x83FD
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_141())
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

int func_129(float fParam0, bool bParam1)//Position - 0x845B
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
		if (func_27(func_45()))
		{
			iVar5 = func_24();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (unk_0xFA30DFD0084E92FE(Global_19B04.f_4871[iVar1 /*6*/], 2) && !unk_0xFA30DFD0084E92FE(Global_19B04.f_4871[iVar1 /*6*/], 3))
				{
					func_130(iVar1, &Var0);
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

void func_130(int iParam0, var uParam1)//Position - 0x8512
{
	switch (iParam0)
	{
		case 0:
			func_131(uParam1, "Abigail1", func_133(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_132(iParam0), 1, 0);
			break;
		
		case 1:
			func_131(uParam1, "Abigail2", func_133(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_132(iParam0), 1, 0);
			break;
		
		case 2:
			func_131(uParam1, "Barry1", func_133(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_132(iParam0), 1, 0);
			break;
		
		case 3:
			func_131(uParam1, "Barry2", func_133(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_132(iParam0), 1, 1);
			break;
		
		case 4:
			func_131(uParam1, "Barry3", func_133(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 5:
			func_131(uParam1, "Barry3A", func_133(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 6:
			func_131(uParam1, "Barry3C", func_133(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 7:
			func_131(uParam1, "Barry4", func_133(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_132(iParam0), 0, 0);
			break;
		
		case 8:
			func_131(uParam1, "Dreyfuss1", func_133(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 9:
			func_131(uParam1, "Epsilon1", func_133(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 10:
			func_131(uParam1, "Epsilon2", func_133(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_132(iParam0), 1, 0);
			break;
		
		case 11:
			func_131(uParam1, "Epsilon3", func_133(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 12:
			func_131(uParam1, "Epsilon4", func_133(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 13:
			func_131(uParam1, "Epsilon5", func_133(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_132(iParam0), 1, 0);
			break;
		
		case 14:
			func_131(uParam1, "Epsilon6", func_133(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 15:
			func_131(uParam1, "Epsilon7", func_133(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 16:
			func_131(uParam1, "Epsilon8", func_133(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_132(iParam0), 1, 0);
			break;
		
		case 17:
			func_131(uParam1, "Extreme1", func_133(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 18:
			func_131(uParam1, "Extreme2", func_133(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 19:
			func_131(uParam1, "Extreme3", func_133(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 20:
			func_131(uParam1, "Extreme4", func_133(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 21:
			func_131(uParam1, "Fanatic1", func_133(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_132(iParam0), 1, 0);
			break;
		
		case 22:
			func_131(uParam1, "Fanatic2", func_133(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_132(iParam0), 1, 0);
			break;
		
		case 23:
			func_131(uParam1, "Fanatic3", func_133(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_132(iParam0), 0, 1);
			break;
		
		case 24:
			func_131(uParam1, "Hao1", func_133(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_132(iParam0), 0, 1);
			break;
		
		case 25:
			func_131(uParam1, "Hunting1", func_133(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 26:
			func_131(uParam1, "Hunting2", func_133(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 27:
			func_131(uParam1, "Josh1", func_133(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_132(iParam0), 1, 0);
			break;
		
		case 28:
			func_131(uParam1, "Josh2", func_133(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_132(iParam0), 1, 1);
			break;
		
		case 29:
			func_131(uParam1, "Josh3", func_133(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_132(iParam0), 1, 1);
			break;
		
		case 30:
			func_131(uParam1, "Josh4", func_133(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_132(iParam0), 1, 0);
			break;
		
		case 31:
			func_131(uParam1, "Maude1", func_133(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 32:
			func_131(uParam1, "Minute1", func_133(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 33:
			func_131(uParam1, "Minute2", func_133(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 34:
			func_131(uParam1, "Minute3", func_133(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 35:
			func_131(uParam1, "MrsPhilips1", func_133(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 36:
			func_131(uParam1, "MrsPhilips2", func_133(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 37:
			func_131(uParam1, "Nigel1", func_133(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_132(iParam0), 1, 0);
			break;
		
		case 38:
			func_131(uParam1, "Nigel1A", func_133(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_132(iParam0), 1, 1);
			break;
		
		case 39:
			func_131(uParam1, "Nigel1B", func_133(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_132(iParam0), 1, 1);
			break;
		
		case 40:
			func_131(uParam1, "Nigel1C", func_133(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_132(iParam0), 1, 1);
			break;
		
		case 41:
			func_131(uParam1, "Nigel1D", func_133(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_132(iParam0), 1, 1);
			break;
		
		case 42:
			func_131(uParam1, "Nigel2", func_133(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_132(iParam0), 1, 1);
			break;
		
		case 43:
			func_131(uParam1, "Nigel3", func_133(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_132(iParam0), 1, 1);
			break;
		
		case 44:
			func_131(uParam1, "Omega1", func_133(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 45:
			func_131(uParam1, "Omega2", func_133(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 46:
			func_131(uParam1, "Paparazzo1", func_133(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 47:
			func_131(uParam1, "Paparazzo2", func_133(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 48:
			func_131(uParam1, "Paparazzo3", func_133(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 49:
			func_131(uParam1, "Paparazzo3A", func_133(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 50:
			func_131(uParam1, "Paparazzo3B", func_133(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 51:
			func_131(uParam1, "Paparazzo4", func_133(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 52:
			func_131(uParam1, "Rampage1", func_133(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 54:
			func_131(uParam1, "Rampage3", func_133(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_132(iParam0), 1, 0);
			break;
		
		case 55:
			func_131(uParam1, "Rampage4", func_133(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_132(iParam0), 1, 0);
			break;
		
		case 56:
			func_131(uParam1, "Rampage5", func_133(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 53:
			func_131(uParam1, "Rampage2", func_133(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_132(iParam0), 1, 0);
			break;
		
		case 57:
			func_131(uParam1, "TheLastOne", func_133(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 58:
			func_131(uParam1, "Tonya1", func_133(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 59:
			func_131(uParam1, "Tonya2", func_133(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 60:
			func_131(uParam1, "Tonya3", func_133(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 61:
			func_131(uParam1, "Tonya4", func_133(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 62:
			func_131(uParam1, "Tonya5", func_133(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_131(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0x9759
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

int func_132(int iParam0)//Position - 0x97EA
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

struct<2> func_133(int iParam0)//Position - 0x9B30
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_134(iParam0) };
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

struct<2> func_134(int iParam0)//Position - 0x9B68
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

int func_135()//Position - 0x9FB5
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

int func_136()//Position - 0x9FF9
{
	if (func_139() && !func_140())
	{
		return 1;
	}
	if (func_138() && func_137())
	{
		return 1;
	}
	return 0;
}

bool func_137()//Position - 0xA02B
{
	return Global_199EA > 0;
}

int func_138()//Position - 0xA039
{
	if (Global_15FA6 != -1)
	{
		return 1;
	}
	return 0;
}

int func_139()//Position - 0xA04E
{
	if (Global_15FA6 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_147B0[Global_15FA6 /*34*/].f_F, 20);
	}
	return 0;
}

int func_140()//Position - 0xA074
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

int func_141()//Position - 0xA091
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

void func_142()//Position - 0xA14C
{
	int iVar0;
	
	if (iLocal_46)
	{
		unk_0x07B8ECB35A4ED3AC(&iLocal_265);
		unk_0x07B8ECB35A4ED3AC(&iLocal_266);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 0);
		unk_0xDF53A66AEE1401AA(1f);
		unk_0xE013F5758FF95FD5();
		unk_0x3804D2422B37C701(unk_0xB5CEFD608600A09F());
		unk_0x4806A94C8ED574C3(418.2996f, 2650.597f, 42.84723f, 297.8981f, 2617.968f, 53.6412f, 49.6875f, 1);
		unk_0xB830DBD32591E1BC();
		unk_0x379ACE23D404525C(Vector(43.4932f, 2612.694f, 328.0555f) - Vector(10f, 10f, 10f), Vector(43.4932f, 2612.694f, 328.0555f) + Vector(10f, 10f, 10f), true, 1);
		iVar0 = 0;
		while (iVar0 < iLocal_222)
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_222[iVar0]))
			{
				unk_0x2E35C4FA5F0ED22F(iLocal_222[iVar0], false);
				if (unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
				{
					unk_0xA3699A5DEB1FBBA9(iLocal_222[iVar0]);
					unk_0x22321800954A532E(iLocal_222[iVar0], true);
				}
			}
			if (!unk_0x36CEFBE9B745A58D(iLocal_218))
			{
				unk_0xC8FD3EBBB90E8D7F(iLocal_218, 317, true);
				unk_0x2E35C4FA5F0ED22F(iLocal_218, false);
				if (!unk_0xE59B7F5A03335350(iLocal_226, 0))
				{
					if (unk_0x62F3A07C43FFB568(iLocal_218, iLocal_226, 0))
					{
						unk_0xD7E19B03E0EB54E5(iLocal_226, 1);
					}
				}
			}
			if (!unk_0x36CEFBE9B745A58D(iLocal_219))
			{
				unk_0xC8FD3EBBB90E8D7F(iLocal_219, 317, true);
				unk_0x2E35C4FA5F0ED22F(iLocal_219, false);
				if (!unk_0xE59B7F5A03335350(iLocal_226, 0))
				{
					if (unk_0x62F3A07C43FFB568(iLocal_219, iLocal_226, 0))
					{
						unk_0xD7E19B03E0EB54E5(iLocal_226, 1);
					}
				}
			}
			iVar0++;
		}
	}
	func_143(-1);
	unk_0x95E4B6F3ED223F5A();
}

void func_143(int iParam0)//Position - 0xA2B8
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_33();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_81())
	{
		func_147(iParam0);
		unk_0x3FF92BBF0607A406(0, 0);
		Global_19AFB = unk_0x105601648511CC64();
		func_146(30000);
		StringCopy(&cVar0, func_145(Global_19AF9, 1), 64);
		if (func_32(Global_19AF9) > 0)
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
	func_144(&Global_62F8);
	Global_19AFA = 0;
	func_88(-1);
}

void func_144(var uParam0)//Position - 0xA36D
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

char* func_145(int iParam0, bool bParam1)//Position - 0xA3AA
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

void func_146(int iParam0)//Position - 0xA5F3
{
	Global_8E68 = (unk_0x105601648511CC64() + iParam0);
}

void func_147(int iParam0)//Position - 0xA605
{
	func_148(iParam0, 0, func_153(iParam0));
}

void func_148(int iParam0, int iParam1, int iParam2)//Position - 0xA61A
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_106();
	func_151(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_150(iParam0, &uVar0);
	Var1 = { func_149(&uVar0) };
}

struct<16> func_149(var uParam0)//Position - 0xA649
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_100(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_99(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_98(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_101(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_104(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_102(*uParam0), 64);
	return Var0;
}

void func_150(int iParam0, var uParam1)//Position - 0xA71A
{
	Global_19B04.f_6186.f_2B[iParam0] = *uParam1;
}

void func_151(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xA732
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_102(*uParam0);
	iVar1 = func_104(*uParam0);
	iVar2 = func_101(*uParam0);
	iVar3 = func_100(*uParam0);
	iVar4 = func_99(*uParam0);
	iVar5 = func_98(*uParam0);
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
	iVar6 = func_97(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_97(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_152(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_152(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xA8B4
{
	func_112(uParam0, iParam1);
	func_111(uParam0, iParam2);
	func_110(uParam0, iParam3);
	func_108(uParam0, iParam5);
	func_109(uParam0, iParam4);
	func_107(uParam0, iParam6);
}

int func_153(int iParam0)//Position - 0xA8EC
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

