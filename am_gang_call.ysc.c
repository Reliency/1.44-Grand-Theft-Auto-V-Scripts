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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
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
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 10;
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
	var uLocal_72 = 2;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 8;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 8;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	float fLocal_94 = 0f;
	struct<55> Local_95 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 } ;
	var uLocal_96 = 0;
	struct<5> Local_97[32];
	int iLocal_98 = 0;
	int iLocal_99[3] = { 0, 0, 0 };
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	vector3 vLocal_105 = { 0f, 0f, 0f };
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 16;
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
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	struct<21> Local_289 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	sLocal_20 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_94 = ((0.05f + 0.275f) - 0.01f);
	iLocal_101 = -1;
	iLocal_104 = -1;
	if (unk_0x7AF0088ABFA713B6())
	{
		func_532(ScriptParam_289);
	}
	while (true)
	{
		func_531();
		if (func_521())
		{
			func_518();
		}
		iLocal_106 = unk_0xED678C85A82F0AB9();
		func_509();
		func_506();
		func_501();
		func_500();
		switch (func_499(unk_0x822BEC8031773562()))
		{
			case 0:
				if (func_498() == 1)
				{
					Local_97[unk_0x822BEC8031773562() /*5*/] = 1;
				}
				else if (func_498() == 4)
				{
					Local_97[unk_0x822BEC8031773562() /*5*/] = 3;
				}
				break;
			
			case 1:
				if (func_498() == 1)
				{
					func_492();
				}
				else if (func_498() == 0)
				{
					func_486();
					Local_97[unk_0x822BEC8031773562() /*5*/] = 0;
				}
				else if (func_498() == 4)
				{
					Local_97[unk_0x822BEC8031773562() /*5*/] = 3;
				}
				break;
			
			case 3:
				func_461();
				func_459(&(Local_95.f_36));
				if (func_458(&(Local_95.f_36)))
				{
					iVar0 = 0;
					while (iVar0 < func_457(iLocal_101))
					{
						func_461();
						iVar0++;
					}
					Local_97[unk_0x822BEC8031773562() /*5*/] = 4;
				}
				break;
			
			case 2:
				Local_97[unk_0x822BEC8031773562() /*5*/] = 4;
			
			case 4:
				func_254();
				break;
		}
		if (unk_0x0DE6397A2CB3EF75())
		{
			func_252();
			func_251();
			func_250();
			switch (func_498())
			{
				case 0:
					func_249();
					if (func_245())
					{
						if (!unk_0x1D403DFADBC2DE3C(unk_0xA95CF30C72EB526E(iLocal_103), 0))
						{
							func_243(unk_0xA95CF30C72EB526E(iLocal_103));
						}
						else
						{
							Local_95.f_24 = { vLocal_105 };
						}
						unk_0x7CB6FD92BE491AD9(&(Local_95.f_2), 6);
						Local_95 = 1;
					}
					break;
				
				case 1:
					if (func_60())
					{
						func_59();
						func_58();
					}
					func_40();
					break;
				
				case 4:
					break;
			}
			func_1();
		}
	}
}

void func_1()//Position - 0x235
{
	int iVar0;
	
	if (func_498() < 4)
	{
		if (func_22())
		{
			iLocal_107 = 0;
			iVar0 = 0;
			while (iVar0 <= (func_457(iLocal_101) - 1))
			{
				func_2();
				iVar0++;
			}
			Local_95 = 4;
		}
	}
}

void func_2()//Position - 0x271
{
	var uVar0;
	struct<14> Var1;
	
	if (unk_0xFA30DFD0084E92FE(Local_95.f_A[iLocal_107 /*7*/].f_2, 1) || unk_0xFA30DFD0084E92FE(Local_95.f_A[iLocal_107 /*7*/].f_2, 6))
	{
		if (unk_0x7FFE36DB9042AF23(Local_95.f_A[iLocal_107 /*7*/]))
		{
			if (unk_0x724D816EA203A79E(unk_0xE48AD7BF7762E114(Local_95.f_A[iLocal_107 /*7*/])))
			{
				if (unk_0x1D403DFADBC2DE3C(unk_0xE48AD7BF7762E114(Local_95.f_A[iLocal_107 /*7*/]), 0))
				{
					if (!unk_0xFA30DFD0084E92FE(Local_95.f_A[iLocal_107 /*7*/].f_2, 6))
					{
						if (iLocal_101 == 0)
						{
							Local_95.f_30++;
							if (!unk_0xFA30DFD0084E92FE(Local_95.f_2, 12))
							{
								if (unk_0xDF6ED6F322C4F404(Local_95.f_A[iLocal_107 /*7*/], &uVar0) == iLocal_103)
								{
									unk_0xF0059F27F7BB6680(&(Local_95.f_2), 12);
								}
							}
							if ((Local_95.f_2A == iLocal_107 && !unk_0xFA30DFD0084E92FE(Local_95.f_2, 5)) || Local_95.f_30 == func_457(iLocal_101))
							{
								Var1.f_2 = 948287293;
								Var1.f_A = iLocal_103;
								Var1.f_B = iLocal_102;
								if (func_457(iLocal_101) > 1)
								{
									Var1.f_C = unk_0x3171C34AB3FE6F2E(1);
								}
								else
								{
									Var1.f_C = unk_0x3171C34AB3FE6F2E(0);
								}
								Var1.f_3 = Local_95.f_2B;
								func_20(Var1, func_21(1));
								if (Local_95.f_2A == iLocal_107)
								{
									unk_0xF0059F27F7BB6680(&(Local_95.f_2), 5);
								}
							}
							else if (!unk_0xFA30DFD0084E92FE(Local_95.f_2, 5))
							{
								Var1.f_2 = -2070269705;
								Var1.f_B = iLocal_102;
								func_20(Var1, func_21(1));
							}
						}
						unk_0xF0059F27F7BB6680(&(Local_95.f_A[iLocal_107 /*7*/].f_2), 6);
					}
				}
				else
				{
					if (!unk_0xFA30DFD0084E92FE(Local_95.f_A[iLocal_107 /*7*/].f_2, 5))
					{
						unk_0xF0059F27F7BB6680(&iLocal_98, 2);
					}
					unk_0xF0059F27F7BB6680(&iLocal_98, 1);
				}
			}
		}
	}
	else
	{
		unk_0xF0059F27F7BB6680(&iLocal_98, 1);
		unk_0xF0059F27F7BB6680(&iLocal_98, 2);
	}
	func_3(iLocal_107);
	iLocal_107++;
	if (iLocal_107 >= func_457(iLocal_101))
	{
		iLocal_107 = 0;
		if (unk_0xFA30DFD0084E92FE(Local_95.f_1, 0))
		{
			if (!unk_0xFA30DFD0084E92FE(iLocal_98, 1))
			{
				if (!unk_0xFA30DFD0084E92FE(Local_95.f_1, 1))
				{
					unk_0xF0059F27F7BB6680(&(Local_95.f_1), 1);
				}
			}
			if (!unk_0xFA30DFD0084E92FE(iLocal_98, 2))
			{
				if (!unk_0xFA30DFD0084E92FE(Local_95.f_1, 9))
				{
					unk_0xF0059F27F7BB6680(&(Local_95.f_1), 9);
				}
			}
		}
		unk_0x7CB6FD92BE491AD9(&iLocal_98, 1);
		unk_0x7CB6FD92BE491AD9(&iLocal_98, 2);
	}
}

void func_3(int iParam0)//Position - 0x4B3
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (unk_0x0DE6397A2CB3EF75())
	{
		if (unk_0x7FFE36DB9042AF23(Local_95.f_A[iParam0 /*7*/]))
		{
			iVar0 = unk_0xE48AD7BF7762E114(Local_95.f_A[iParam0 /*7*/]);
			if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
			{
				if (!unk_0xFA30DFD0084E92FE(Local_95.f_A[iParam0 /*7*/].f_2, 9))
				{
					bVar2 = false;
					switch (Local_95.f_A[iParam0 /*7*/].f_1)
					{
						case 0:
							if (func_19(iVar0, 3))
							{
								bVar2 = true;
							}
							break;
					}
					if (bVar2)
					{
						unk_0xF0059F27F7BB6680(&(Local_95.f_A[iParam0 /*7*/].f_2), 9);
					}
				}
				switch (Local_95.f_A[iParam0 /*7*/].f_5)
				{
					case 0:
						break;
					
					case 1:
						if (Local_95.f_A[iParam0 /*7*/].f_4 == 0)
						{
							if (!unk_0xFA30DFD0084E92FE(Local_95.f_A[iParam0 /*7*/].f_2, 7))
							{
								if ((((unk_0x7E7999013BDD429A(iVar0) == 2 || (Global_24FB5C[iLocal_103 /*406*/].f_E8 != -1 && func_18(Global_24FB5C[iLocal_103 /*406*/].f_E8) == 4)) || Global_18402B[iLocal_103 /*770*/].f_288) || func_16(iLocal_103, 0)) || func_9(iLocal_103))
								{
									Local_95.f_A[iParam0 /*7*/].f_3 = iLocal_106;
									unk_0xF0059F27F7BB6680(&(Local_95.f_A[iParam0 /*7*/].f_2), 7);
								}
							}
							else if ((((unk_0x7E7999013BDD429A(iVar0) != 2 && Global_24FB5C[iLocal_103 /*406*/].f_E8 == -1) && !Global_18402B[iLocal_103 /*770*/].f_288) && !func_16(iLocal_103, 0)) && !func_9(iLocal_103))
							{
								unk_0x7CB6FD92BE491AD9(&(Local_95.f_A[iParam0 /*7*/].f_2), 7);
							}
							else if (unk_0xCCA9497DA4595710(iLocal_106, Local_95.f_A[iParam0 /*7*/].f_3) > 10000 || unk_0x7E7999013BDD429A(iVar0) != 2)
							{
								if (!unk_0xFA30DFD0084E92FE(Local_95.f_2, 10))
								{
									unk_0xF0059F27F7BB6680(&(Local_95.f_2), 10);
									Local_95.f_27 = { func_8(iLocal_103) };
									iVar1 = 0;
									iVar1 = 0;
									while (iVar1 < func_457(iLocal_101))
									{
										func_7(iVar1, 3);
										iVar1++;
									}
								}
							}
							if (unk_0xFA30DFD0084E92FE(Local_95.f_A[iParam0 /*7*/].f_2, 2))
							{
								if (!unk_0xFA30DFD0084E92FE(Local_95.f_A[iParam0 /*7*/].f_2, 3))
								{
									if (unk_0x9692102E7020D903(iVar0) == 3f && !unk_0xA0747FCBCF1D1424(iVar0, 118, 1))
									{
										unk_0xF0059F27F7BB6680(&(Local_95.f_A[iParam0 /*7*/].f_2), 3);
									}
								}
							}
						}
						if (unk_0xFA30DFD0084E92FE(Local_95.f_2, 1))
						{
							unk_0xF0059F27F7BB6680(&(Local_95.f_A[iParam0 /*7*/].f_2), 2);
							func_7(iParam0, 3);
						}
						else if (func_6(iLocal_103, 1, 1))
						{
							if (!unk_0xFA30DFD0084E92FE(Local_95.f_A[iParam0 /*7*/].f_2, 2))
							{
								if (func_5(unk_0x541C2AEF053615BC(iVar0, 1), unk_0x541C2AEF053615BC(unk_0xA95CF30C72EB526E(iLocal_103), 1), 25f) || !func_5(unk_0x541C2AEF053615BC(iVar0, 1), unk_0x541C2AEF053615BC(unk_0xA95CF30C72EB526E(iLocal_103), 1), 625f))
								{
									unk_0xF0059F27F7BB6680(&(Local_95.f_A[iParam0 /*7*/].f_2), 2);
								}
							}
							if (func_4(unk_0x541C2AEF053615BC(iVar0, 1), unk_0x541C2AEF053615BC(unk_0xA95CF30C72EB526E(iLocal_103), 1)) || (unk_0x4FCDC2EC534819EF(iVar0) && unk_0x40B8412A87DA8328(iVar0) == unk_0xA95CF30C72EB526E(iLocal_103)))
							{
								func_7(iParam0, 2);
							}
						}
						break;
					
					case 2:
						if (unk_0xFA30DFD0084E92FE(Local_95.f_2, 1))
						{
							unk_0xF0059F27F7BB6680(&(Local_95.f_A[iParam0 /*7*/].f_2), 2);
							func_7(iParam0, 3);
						}
						else if (func_6(iLocal_103, 1, 1))
						{
							if (!func_4(unk_0x541C2AEF053615BC(iVar0, 1), unk_0x541C2AEF053615BC(unk_0xA95CF30C72EB526E(iLocal_103), 1)) && !(unk_0x4FCDC2EC534819EF(iVar0) && unk_0x40B8412A87DA8328(iVar0) == unk_0xA95CF30C72EB526E(iLocal_103)))
							{
								func_7(iParam0, 1);
							}
						}
						break;
					
					case 3:
						if (Local_95.f_A[iParam0 /*7*/].f_4 == 0)
						{
							if (!unk_0xFA30DFD0084E92FE(Local_95.f_A[iParam0 /*7*/].f_2, 4))
							{
								if (unk_0xA0747FCBCF1D1424(iVar0, 118, 1))
								{
									unk_0xF0059F27F7BB6680(&(Local_95.f_A[iParam0 /*7*/].f_2), 4);
								}
							}
						}
						break;
					
					case 4:
						break;
					}
				}
			}
	}
}

int func_4(vector3 vParam0, vector3 vParam1)//Position - 0x8B7
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (unk_0x357058E632979E65((vParam1.z - vParam0.z)) < 2f)
	{
		vVar0.x = vParam0.x;
		vVar0.y = vParam0.y;
		vVar1.x = vParam1.x;
		vVar1.y = vParam1.y;
		if (func_5(vVar0, vVar1, 2f))
		{
			return 1;
		}
	}
	return 0;
}

int func_5(vector3 vParam0, vector3 vParam1, float fParam2)//Position - 0x8FE
{
	if (SYSTEM::VDIST2(vParam0, vParam1) < fParam2)
	{
		return 1;
	}
	return 0;
}

int func_6(int iParam0, bool bParam1, bool bParam2)//Position - 0x91D
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x96B1061E8F3CBC9A(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x6A9CDB766DF7216F(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_252E21.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_7(int iParam0, int iParam1)//Position - 0x967
{
	Local_95.f_A[iParam0 /*7*/].f_5 = iParam1;
}

Vector3 func_8(int iParam0)//Position - 0x97B
{
	return unk_0x541C2AEF053615BC(unk_0xA95CF30C72EB526E(iParam0), 0);
}

int func_9(int iParam0)//Position - 0x98E
{
	int iVar0;
	int iVar1;
	
	if (unk_0x96B1061E8F3CBC9A(iParam0))
	{
		if (func_14(iParam0, 1))
		{
			iVar0 = unk_0xA95CF30C72EB526E(iParam0);
			iVar1 = func_11(iParam0);
			if (unk_0x724D816EA203A79E(iVar1))
			{
				if (unk_0xE59B7F5A03335350(iVar1, 0))
				{
					if (unk_0x62F3A07C43FFB568(iVar0, iVar1, 0))
					{
						return func_10(iVar1);
					}
				}
			}
		}
	}
	return 0;
}

int func_10(int iParam0)//Position - 0x9E2
{
	int iVar0;
	
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		if (unk_0x46032D09AA009EC4("MPBitset", 3) && unk_0x3C03CFD5DD1E2D97(iParam0, "MPBitset"))
		{
			iVar0 = unk_0x67CFC62D543B19EF(iParam0, "MPBitset");
			if (unk_0xFA30DFD0084E92FE(iVar0, 17))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_11(int iParam0)//Position - 0xA25
{
	if (func_14(iParam0, 1))
	{
		return Global_267214.f_1312.f_D6[func_12(iParam0)];
	}
	return 0;
}

int func_12(int iParam0)//Position - 0xA4C
{
	if (iParam0 != func_13())
	{
		return Global_18C80F[iParam0 /*558*/].f_B;
	}
	return func_13();
}

int func_13()//Position - 0xA6F
{
	return -1;
}

bool func_14(int iParam0, bool bParam1)//Position - 0xA78
{
	if (!bParam1)
	{
		if (func_15(iParam0))
		{
			return 0;
		}
	}
	return Global_18C80F[iParam0 /*558*/].f_B != func_13();
}

int func_15(int iParam0)//Position - 0xAA3
{
	if (iParam0 != func_13())
	{
		if (Global_18C80F[iParam0 /*558*/].f_B != func_13())
		{
			return Global_18C80F[iParam0 /*558*/].f_B == iParam0;
		}
	}
	return 0;
}

int func_16(int iParam0, int iParam1)//Position - 0xAD8
{
	int iVar0;
	
	if (func_6(iParam0, 1, 1))
	{
		iVar0 = unk_0xA95CF30C72EB526E(iParam0);
		if (unk_0x5237AF95232D78C5(iVar0, iParam1))
		{
			if (func_17(unk_0x9FE9D386222EEE47(iVar0, iParam1), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_17(int iParam0, bool bParam1)//Position - 0xB13
{
	if (Global_11542)
	{
		if (unk_0x724D816EA203A79E(iParam0) && (!bParam1 || unk_0xE59B7F5A03335350(iParam0, 0)))
		{
			if (unk_0x3C03CFD5DD1E2D97(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_18(int iParam0)//Position - 0xB51
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
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
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
	}
	return 6;
}

int func_19(int iParam0, int iParam1)//Position - 0xDEB
{
	if (unk_0x46032D09AA009EC4("AttributeDamage", 3))
	{
		if (unk_0x3C03CFD5DD1E2D97(iParam0, "AttributeDamage"))
		{
			if (unk_0xFA30DFD0084E92FE(unk_0x67CFC62D543B19EF(iParam0, "AttributeDamage"), iParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_20(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)//Position - 0xE21
{
	Param0 = -471892217;
	Param0.f_1 = unk_0xB5CEFD608600A09F();
	if (!iParam13 == 0)
	{
		unk_0x38E776D9FA75679B(1, &Param0, 14, iParam13);
	}
}

int func_21(int iParam0)//Position - 0xE4E
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x81C86888AEA2F49B())
	{
		if (unk_0x05086B70D2CFEA6F(unk_0xCFA8A401AAD7BB5A(iVar1)))
		{
			iVar2 = unk_0x4ED43B67B3F05E0F(unk_0xCFA8A401AAD7BB5A(iVar1));
			if (func_6(iVar2, 0, 0))
			{
				if (iVar2 != unk_0xB5CEFD608600A09F() || iParam0)
				{
					unk_0xF0059F27F7BB6680(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_22()//Position - 0xEAB
{
	if (unk_0xFA30DFD0084E92FE(Local_95.f_1, 0))
	{
		if (iLocal_101 == 1)
		{
			if (unk_0xFA30DFD0084E92FE(Local_95.f_1, 4))
			{
				unk_0xF0059F27F7BB6680(&(Local_95.f_3), 11);
				return 1;
			}
		}
		else if (unk_0xFA30DFD0084E92FE(Local_95.f_1, 1))
		{
			unk_0xF0059F27F7BB6680(&(Local_95.f_3), 0);
			return 1;
		}
	}
	else if (unk_0xFA30DFD0084E92FE(Local_95.f_1, 2))
	{
		unk_0xF0059F27F7BB6680(&(Local_95.f_3), 1);
		unk_0xF0059F27F7BB6680(&Global_191870, iLocal_101);
		return 1;
	}
	if (unk_0xFA30DFD0084E92FE(Local_95.f_3, 12))
	{
		return 1;
	}
	if (iLocal_101 == 0)
	{
		if (unk_0xFA30DFD0084E92FE(Local_95.f_2, 2))
		{
			unk_0xF0059F27F7BB6680(&(Local_95.f_3), 2);
			return 1;
		}
		if (unk_0xFA30DFD0084E92FE(Local_95.f_2, 8))
		{
			unk_0xF0059F27F7BB6680(&(Local_95.f_3), 8);
			return 1;
		}
		if (unk_0xFA30DFD0084E92FE(Local_95.f_2, 5))
		{
			unk_0xF0059F27F7BB6680(&(Local_95.f_3), 3);
			return 1;
		}
		if (unk_0xFA30DFD0084E92FE(Local_95.f_2, 9))
		{
			unk_0xF0059F27F7BB6680(&(Local_95.f_3), 9);
			return 1;
		}
		if (unk_0xFA30DFD0084E92FE(Local_95.f_1, 15))
		{
			unk_0xF0059F27F7BB6680(&(Local_95.f_3), 10);
			return 1;
		}
	}
	if (!func_6(iLocal_103, 0, 1))
	{
		if (iLocal_101 != 0 || !unk_0xFA30DFD0084E92FE(Local_95.f_2, 1))
		{
			unk_0xF0059F27F7BB6680(&(Local_95.f_3), 4);
			return 1;
		}
	}
	else
	{
		if (func_38(iLocal_103, 129))
		{
			unk_0xF0059F27F7BB6680(&(Local_95.f_2), 13);
			unk_0xF0059F27F7BB6680(&(Local_95.f_3), 8);
			return 1;
		}
		if (func_38(iLocal_103, 131) || unk_0xFA30DFD0084E92FE(Global_18C80F[iLocal_103 /*558*/].f_1, 11))
		{
			unk_0xF0059F27F7BB6680(&(Local_95.f_2), 13);
			unk_0xF0059F27F7BB6680(&(Local_95.f_2), 8);
			return 1;
		}
		if (func_38(iLocal_103, 136) || (func_37(unk_0xB5CEFD608600A09F(), 24) && func_36(iLocal_103)))
		{
			unk_0xF0059F27F7BB6680(&(Local_95.f_2), 8);
			return 1;
		}
		if (func_38(iLocal_103, 146))
		{
			unk_0xF0059F27F7BB6680(&(Local_95.f_2), 8);
			return 1;
		}
		if (func_35(unk_0xB5CEFD608600A09F()) && ((func_33(unk_0xB5CEFD608600A09F()) == 148 || func_33(unk_0xB5CEFD608600A09F()) == 142) || func_33(unk_0xB5CEFD608600A09F()) == 164))
		{
			unk_0xF0059F27F7BB6680(&(Local_95.f_2), 8);
			return 1;
		}
		if (func_33(unk_0xB5CEFD608600A09F()) == 153)
		{
			unk_0xF0059F27F7BB6680(&(Local_95.f_2), 8);
			return 1;
		}
		if (func_31(unk_0xB5CEFD608600A09F()) && func_33(unk_0xB5CEFD608600A09F()) == 170)
		{
			unk_0xF0059F27F7BB6680(&(Local_95.f_2), 8);
			return 1;
		}
		if (func_33(unk_0xB5CEFD608600A09F()) == 167)
		{
			unk_0xF0059F27F7BB6680(&(Local_95.f_2), 8);
			return 1;
		}
		if (func_33(unk_0xB5CEFD608600A09F()) == 168)
		{
			unk_0xF0059F27F7BB6680(&(Local_95.f_2), 8);
			return 1;
		}
		if (func_31(unk_0xB5CEFD608600A09F()) && func_33(unk_0xB5CEFD608600A09F()) == 238)
		{
			unk_0xF0059F27F7BB6680(&(Local_95.f_2), 8);
			return 1;
		}
		if (func_31(unk_0xB5CEFD608600A09F()) && func_33(unk_0xB5CEFD608600A09F()) == 249)
		{
			unk_0xF0059F27F7BB6680(&(Local_95.f_2), 8);
			return 1;
		}
		if (unk_0x1D403DFADBC2DE3C(unk_0xA95CF30C72EB526E(iLocal_103), 0))
		{
			if (iLocal_101 == 1)
			{
				if (unk_0xFA30DFD0084E92FE(Local_95.f_1, 0))
				{
					unk_0xF0059F27F7BB6680(&(Local_95.f_3), 6);
					return 1;
				}
			}
		}
		else
		{
			if (iLocal_101 == 1)
			{
				if (func_38(iLocal_103, 146))
				{
					unk_0xF0059F27F7BB6680(&(Local_95.f_3), 7);
					return 1;
				}
				if (!unk_0xFA30DFD0084E92FE(Local_95.f_1, 16))
				{
					if (unk_0xCCA9497DA4595710(iLocal_106, Local_95.f_9) > func_30())
					{
						unk_0xF0059F27F7BB6680(&(Local_95.f_3), 7);
						return 1;
					}
				}
				if (func_27())
				{
					unk_0xF0059F27F7BB6680(&(Local_95.f_3), 7);
					return 1;
				}
				if (func_23(iLocal_103, func_12(iLocal_102), 1))
				{
					unk_0xF0059F27F7BB6680(&(Local_95.f_3), 7);
					return 1;
				}
			}
			if (iLocal_104 != unk_0x56BEECB328B6D29D(unk_0xD885B2234FC72D62(iLocal_103)))
			{
				unk_0xF0059F27F7BB6680(&(Local_95.f_3), 5);
				return 1;
			}
		}
	}
	return 0;
}

bool func_23(int iParam0, int iParam1, bool bParam2)//Position - 0x128B
{
	return func_24(iParam0, iParam1, bParam2, 1);
}

int func_24(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x129E
{
	if (iParam1 != func_13() && iParam0 != func_13())
	{
		if (!bParam2)
		{
			if (func_26(iParam0, iParam1, iParam3))
			{
				return 0;
			}
		}
		if (Global_18C80F[iParam0 /*558*/].f_B != func_13())
		{
			if (iParam1 == Global_18C80F[iParam0 /*558*/].f_B)
			{
				return func_25(iParam1, iParam3);
			}
		}
	}
	return 0;
}

int func_25(int iParam0, int iParam1)//Position - 0x1301
{
	if (func_15(iParam0))
	{
		return Global_18C80F[iParam0 /*558*/].f_B.f_199 == iParam1;
	}
	return 0;
}

int func_26(int iParam0, int iParam1, int iParam2)//Position - 0x1327
{
	if (iParam1 != func_13())
	{
		if (iParam0 != func_13())
		{
			if (Global_18C80F[iParam0 /*558*/].f_B != func_13())
			{
				if (Global_18C80F[iParam0 /*558*/].f_B == iParam0)
				{
					if (Global_18C80F[iParam0 /*558*/].f_B.f_199 == iParam2)
					{
						return iParam1 == iParam0;
					}
				}
			}
		}
	}
	return 0;
}

int func_27()//Position - 0x137F
{
	if (((func_29(iLocal_103, 1, 0) || func_37(iLocal_103, 0)) || func_37(iLocal_103, 7)) || func_28(iLocal_103))
	{
		return 1;
	}
	return 0;
}

bool func_28(int iParam0)//Position - 0x13C1
{
	return Global_18402B[iParam0 /*770*/].f_C4 != 0;
}

int func_29(int iParam0, bool bParam1, bool bParam2)//Position - 0x13D6
{
	if (iParam0 == func_13())
	{
		return 0;
	}
	if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_13, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_13, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_30()//Position - 0x1440
{
	if (Local_95.f_34)
	{
		return 300000;
	}
	return 120000;
}

int func_31(int iParam0)//Position - 0x145A
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_32(iParam0, 9);
	}
	return 0;
}

bool func_32(int iParam0, int iParam1)//Position - 0x1478
{
	return unk_0xFA30DFD0084E92FE(Global_18C80F[iParam0 /*558*/].f_B.f_4, iParam1);
}

int func_33(int iParam0)//Position - 0x1493
{
	if (func_34(iParam0, 0))
	{
		return Global_18C80F[iParam0 /*558*/].f_B.f_21;
	}
	return -1;
}

int func_34(int iParam0, int iParam1)//Position - 0x14B6
{
	if (Global_18C80F[iParam0 /*558*/].f_B.f_21 != -1 || (iParam1 && Global_18C80F[iParam0 /*558*/].f_B.f_20 != -1))
	{
		return 1;
	}
	return 0;
}

int func_35(int iParam0)//Position - 0x14F1
{
	if (func_15(iParam0))
	{
		if (func_31(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_36(int iParam0)//Position - 0x1510
{
	return unk_0xFA30DFD0084E92FE(Global_18C80F[iParam0 /*558*/].f_1, 4);
}

bool func_37(int iParam0, int iParam1)//Position - 0x1528
{
	return unk_0xFA30DFD0084E92FE(Global_24FB5C[iParam0 /*406*/].f_CC, iParam1);
}

int func_38(int iParam0, int iParam1)//Position - 0x1541
{
	if (Global_18C80F[iParam0 /*558*/] == iParam1)
	{
		return func_39(iParam0);
	}
	return 0;
}

int func_39(int iParam0)//Position - 0x1561
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_18C80F[iVar0 /*558*/].f_1, 0);
	}
	return 0;
}

void func_40()//Position - 0x1587
{
	func_51();
	if (iLocal_101 != 1)
	{
		func_2();
	}
	func_41();
}

void func_41()//Position - 0x15A2
{
	int iVar0;
	
	if (func_6(unk_0x3171C34AB3FE6F2E(iLocal_108), 0, 1))
	{
		if (iLocal_101 == 1)
		{
			if (unk_0x3171C34AB3FE6F2E(iLocal_108) == iLocal_103)
			{
				if (!unk_0xFA30DFD0084E92FE(Local_95.f_1, 16))
				{
					if (unk_0xFA30DFD0084E92FE(Local_97[iLocal_108 /*5*/].f_1, 3))
					{
						unk_0xF0059F27F7BB6680(&(Local_95.f_1), 16);
					}
				}
			}
		}
		else
		{
			if (!unk_0xFA30DFD0084E92FE(Local_95.f_1, 11))
			{
				if (func_47(unk_0x3171C34AB3FE6F2E(iLocal_108)))
				{
					if (!unk_0xFA30DFD0084E92FE(Local_95.f_4, iLocal_108))
					{
						unk_0xF0059F27F7BB6680(&(Local_95.f_1), 11);
						unk_0xF0059F27F7BB6680(&(Local_95.f_4), iLocal_108);
					}
				}
				else if (unk_0xFA30DFD0084E92FE(Local_95.f_4, iLocal_108))
				{
					unk_0xF0059F27F7BB6680(&(Local_95.f_1), 11);
					unk_0x7CB6FD92BE491AD9(&(Local_95.f_4), iLocal_108);
				}
			}
			else if (unk_0xFA30DFD0084E92FE(Local_97[iLocal_108 /*5*/].f_1, 2))
			{
				unk_0x7CB6FD92BE491AD9(&(Local_95.f_1), 11);
			}
			if (iLocal_101 == 0)
			{
				if (unk_0xFA30DFD0084E92FE(Local_97[iLocal_108 /*5*/].f_1, 0))
				{
					if (Local_97[iLocal_108 /*5*/].f_2 != -1)
					{
						if (!unk_0xFA30DFD0084E92FE(Local_95.f_2, 1))
						{
							unk_0xF0059F27F7BB6680(&(Local_95.f_2), 1);
							Local_95.f_2A = Local_97[iLocal_108 /*5*/].f_2;
							Local_95.f_2B = Local_97[iLocal_108 /*5*/].f_3;
							if (!func_46())
							{
								func_45();
							}
						}
					}
					else if (!unk_0xFA30DFD0084E92FE(Local_95.f_2, 9))
					{
						if (!func_46())
						{
							func_44();
						}
						iVar0 = 0;
						while (iVar0 < func_457(iLocal_101))
						{
							func_7(iVar0, 3);
							iVar0++;
						}
						unk_0xF0059F27F7BB6680(&(Local_95.f_2), 9);
						unk_0xF0059F27F7BB6680(&(Local_95.f_2), 1);
					}
				}
				if (func_46())
				{
					if (!unk_0xFA30DFD0084E92FE(iLocal_98, 17))
					{
						if (unk_0xFA30DFD0084E92FE(Local_97[iLocal_108 /*5*/].f_1, 5))
						{
							func_45();
							unk_0xF0059F27F7BB6680(&iLocal_98, 17);
						}
						else if (unk_0xFA30DFD0084E92FE(Local_97[iLocal_108 /*5*/].f_1, 6))
						{
							func_44();
							unk_0xF0059F27F7BB6680(&iLocal_98, 17);
						}
					}
				}
				if (!unk_0xFA30DFD0084E92FE(Local_97[iLocal_108 /*5*/].f_1, 1))
				{
					if (!unk_0xFA30DFD0084E92FE(iLocal_98, 3))
					{
						unk_0xF0059F27F7BB6680(&iLocal_98, 3);
					}
				}
				else if (unk_0x3171C34AB3FE6F2E(iLocal_108) == iLocal_103)
				{
					if (iLocal_101 == 0)
					{
						if (!unk_0xFA30DFD0084E92FE(Local_95.f_2, 1))
						{
							if (!unk_0xFA30DFD0084E92FE(Local_95.f_2, 6))
							{
								unk_0xF0059F27F7BB6680(&(Local_95.f_2), 6);
							}
						}
					}
				}
			}
		}
	}
	iLocal_108++;
	if (iLocal_108 >= 32)
	{
		iLocal_108 = 0;
		if (iLocal_101 == 0)
		{
			if (!unk_0xFA30DFD0084E92FE(iLocal_98, 3))
			{
				func_43();
			}
			else
			{
				func_42();
			}
			unk_0x7CB6FD92BE491AD9(&iLocal_98, 3);
		}
	}
}

void func_42()//Position - 0x181B
{
	if (unk_0xFA30DFD0084E92FE(Local_95.f_2, 3))
	{
		unk_0x7CB6FD92BE491AD9(&(Local_95.f_2), 3);
	}
}

void func_43()//Position - 0x1838
{
	if (!unk_0xFA30DFD0084E92FE(Local_95.f_2, 3))
	{
		Local_95.f_6 = iLocal_106;
		unk_0xF0059F27F7BB6680(&(Local_95.f_2), 3);
	}
}

void func_44()//Position - 0x185D
{
	struct<14> Var0;
	
	Var0.f_2 = 149788915;
	Var0.f_A = iLocal_103;
	Var0.f_B = iLocal_102;
	func_20(Var0, func_21(1));
}

void func_45()//Position - 0x188A
{
	struct<14> Var0;
	
	Var0.f_2 = -347303652;
	Var0.f_A = iLocal_103;
	Var0.f_B = iLocal_102;
	if (func_457(iLocal_101) > 1)
	{
		Var0.f_C = unk_0x3171C34AB3FE6F2E(1);
	}
	else
	{
		Var0.f_C = unk_0x3171C34AB3FE6F2E(0);
	}
	Var0.f_3 = Local_95.f_2B;
	func_20(Var0, func_21(1));
}

int func_46()//Position - 0x18DF
{
	if (unk_0x8ACB0C3FACC09467())
	{
		return unk_0xC9D803F7D7E10861();
	}
	return 0;
}

bool func_47(int iParam0)//Position - 0x18F6
{
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		return func_50();
	}
	return unk_0xFA30DFD0084E92FE(Global_14CC81.f_F1.f_88[func_49(10) /*33*/][iParam0], func_48(10));
}

int func_48(int iParam0)//Position - 0x192C
{
	return (iParam0 % 32);
}

int func_49(int iParam0)//Position - 0x1939
{
	return (iParam0 / 32);
}

var func_50()//Position - 0x1946
{
	return Global_1406A0;
}

void func_51()//Position - 0x1952
{
	int iVar0;
	
	if (iLocal_101 == 0)
	{
		if (unk_0xFA30DFD0084E92FE(Local_95.f_2, 3))
		{
			if (unk_0xCCA9497DA4595710(iLocal_106, Local_95.f_6) > 10000)
			{
				if (unk_0xFA30DFD0084E92FE(Local_95.f_2, 1))
				{
					unk_0xF0059F27F7BB6680(&(Local_95.f_2), 2);
				}
			}
		}
		if (unk_0xFA30DFD0084E92FE(Local_95.f_1, 8))
		{
			if (!unk_0xFA30DFD0084E92FE(Local_95.f_2, 1))
			{
				if (func_55())
				{
					unk_0xF0059F27F7BB6680(&(Local_95.f_2), 6);
					func_54();
				}
			}
		}
		if (!unk_0xFA30DFD0084E92FE(Local_95.f_1, 0))
		{
			if (func_6(iLocal_103, 1, 1))
			{
				iVar0 = unk_0xA95CF30C72EB526E(iLocal_103);
				if (func_53(iVar0))
				{
					func_243(iVar0);
				}
			}
		}
		if (!unk_0xFA30DFD0084E92FE(Local_95.f_2, 1))
		{
			if (!func_6(iLocal_103, 1, 1) || func_28(iLocal_103))
			{
				unk_0xF0059F27F7BB6680(&(Local_95.f_1), 15);
			}
		}
	}
	if (unk_0xFA30DFD0084E92FE(Local_95.f_1, 0))
	{
		if (unk_0xFA30DFD0084E92FE(Local_95.f_1, 5))
		{
			if (!unk_0xFA30DFD0084E92FE(Local_95.f_1, 4))
			{
				if (unk_0xCCA9497DA4595710(iLocal_106, Local_95.f_5) > 600000)
				{
					unk_0xF0059F27F7BB6680(&(Local_95.f_1), 4);
				}
			}
		}
		if (!unk_0xFA30DFD0084E92FE(Local_95.f_3, 12))
		{
			if (func_52())
			{
				unk_0xF0059F27F7BB6680(&(Local_95.f_3), 12);
			}
		}
	}
}

int func_52()//Position - 0x1A82
{
	switch (Local_95.f_A[0 /*7*/].f_1)
	{
		case 0:
			if (Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_27E == 0)
			{
				return 1;
			}
			break;
		
		case 1:
			if (Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_27E == 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_53(int iParam0)//Position - 0x1AD7
{
	if (unk_0x36CEFBE9B745A58D(iParam0))
	{
	}
	if (unk_0xFA30DFD0084E92FE(Local_95.f_1, 17))
	{
		if (!unk_0x149E9368A11035DE(iParam0))
		{
			return 1;
		}
	}
	if (!func_5(Local_95.f_24, unk_0x541C2AEF053615BC(iParam0, 1), 625f))
	{
		return 1;
	}
	return 0;
}

void func_54()//Position - 0x1B22
{
	func_486();
	Local_95 = 0;
}

int func_55()//Position - 0x1B31
{
	if ((((((((unk_0xFA30DFD0084E92FE(Local_95.f_2, 6) || unk_0x0928DEFC3216677B(iLocal_103)) || func_29(iLocal_103, 1, 0)) || func_57(iLocal_103)) || func_37(iLocal_103, 0)) || func_37(iLocal_103, 7)) || func_28(iLocal_103)) || Global_24FB5C[iLocal_103 /*406*/].f_EA) || func_56(unk_0xA95CF30C72EB526E(iLocal_103), joaat("titan")))
	{
		return 1;
	}
	if (iLocal_103 != -1)
	{
		if (unk_0xFA30DFD0084E92FE(Local_97[iLocal_103 /*5*/].f_1, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_56(int iParam0, int iParam1)//Position - 0x1BE0
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (!unk_0x36CEFBE9B745A58D(iParam0))
		{
			if (unk_0xCBBE5AFE2CD2E9B6(iParam0))
			{
				iVar0 = unk_0x9FE9D386222EEE47(iParam0, 0);
				if (unk_0x724D816EA203A79E(iVar0))
				{
					if (unk_0x6F79ECA8C83E4357(iVar0) == iParam1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_57(int iParam0)//Position - 0x1C26
{
	if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_13, 14))
	{
		return 1;
	}
	if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_13, 11))
	{
		return 1;
	}
	return 0;
}

void func_58()//Position - 0x1C65
{
	if (!unk_0xFA30DFD0084E92FE(Local_95.f_1, 5))
	{
		Local_95.f_5 = iLocal_106;
		unk_0xF0059F27F7BB6680(&(Local_95.f_1), 5);
	}
}

void func_59()//Position - 0x1C8A
{
	if (unk_0xFA30DFD0084E92FE(Local_95.f_1, 5))
	{
		unk_0x7CB6FD92BE491AD9(&(Local_95.f_1), 5);
	}
}

int func_60()//Position - 0x1CA7
{
	bool bVar0;
	
	if (unk_0xFA30DFD0084E92FE(Local_95.f_1, 0))
	{
		return 0;
	}
	else
	{
		bVar0 = false;
		if (func_245())
		{
			if (iLocal_101 == 1)
			{
				bVar0 = true;
			}
			else if (func_240())
			{
				if (func_237())
				{
					if (func_236())
					{
						bVar0 = true;
					}
					else if (func_234(func_235(iLocal_101)))
					{
						if (func_66())
						{
							bVar0 = true;
						}
					}
				}
			}
		}
		if (bVar0)
		{
			func_58();
			if (func_61())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_61()//Position - 0x1D21
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x0DE6397A2CB3EF75())
	{
		if (unk_0xFA30DFD0084E92FE(Local_95.f_1, 0))
		{
			return 1;
		}
		else
		{
			switch (iLocal_101)
			{
				case 0:
					iVar0 = 0;
					while (iVar0 < func_457(iLocal_101))
					{
						if ((!unk_0x7FFE36DB9042AF23(Local_95.f_A[iVar0 /*7*/]) && !unk_0xFA30DFD0084E92FE(Local_95.f_A[iVar0 /*7*/].f_2, 1)) && !unk_0xFA30DFD0084E92FE(Local_95.f_A[iVar0 /*7*/].f_2, 6))
						{
							func_62(iVar0, func_65(iLocal_101), Local_95.f_20, Local_95.f_23);
						}
						iVar0++;
					}
					break;
			}
			if (iLocal_101 != 1)
			{
				iVar0 = 0;
				while (iVar0 < func_457(iLocal_101))
				{
					if (!unk_0x7FFE36DB9042AF23(Local_95.f_A[iVar0 /*7*/]))
					{
						if (!unk_0xFA30DFD0084E92FE(Local_95.f_A[iVar0 /*7*/].f_2, 6))
						{
							return 0;
						}
					}
					iVar0++;
				}
			}
			unk_0xF0059F27F7BB6680(&iLocal_98, 1);
			unk_0xF0059F27F7BB6680(&iLocal_98, 2);
			unk_0xF0059F27F7BB6680(&iLocal_98, 3);
			unk_0xF0059F27F7BB6680(&iLocal_98, 4);
			unk_0xF0059F27F7BB6680(&(Local_95.f_1), 0);
			unk_0xF0059F27F7BB6680(&Global_191871, iLocal_101);
			return 1;
		}
	}
	return 0;
}

void func_62(int iParam0, var uParam1, vector3 vParam2, float fParam3)//Position - 0x1E3F
{
	if (unk_0x0DE6397A2CB3EF75())
	{
		if (!unk_0x7FFE36DB9042AF23(Local_95.f_A[iParam0 /*7*/]))
		{
			if (unk_0xC77EC38683AB49CC(0) < unk_0xBC93E1C9C8F877D9(false, 0))
			{
				if (unk_0x88E77A85289CC883(1))
				{
					if (func_234(func_235(iLocal_101)))
					{
						if (func_64(&(Local_95.f_A[iParam0 /*7*/]), 7, func_235(iLocal_101), vParam2, fParam3, 1, 1, 1))
						{
							Local_95.f_A[iParam0 /*7*/].f_1 = iLocal_101;
							Local_95.f_A[iParam0 /*7*/].f_4 = uParam1;
							func_63(iParam0);
						}
					}
				}
			}
		}
	}
}

void func_63(int iParam0)//Position - 0x1EC1
{
	char cVar0[16];
	
	if (!unk_0xFA30DFD0084E92FE(Local_95.f_A[iParam0 /*7*/].f_2, 1))
	{
		if (!unk_0x1D403DFADBC2DE3C(unk_0xE48AD7BF7762E114(Local_95.f_A[iParam0 /*7*/]), 0))
		{
			if (Local_95.f_A[iParam0 /*7*/].f_4 == 0)
			{
				unk_0x4106FAF8AA1D69D5(unk_0xE48AD7BF7762E114(Local_95.f_A[iParam0 /*7*/]), Global_180793);
				unk_0xEDBBBB8EA1B1625E(unk_0xE48AD7BF7762E114(Local_95.f_A[iParam0 /*7*/]), 1);
				unk_0x5056032BA0CF3AAD(unk_0xE48AD7BF7762E114(Local_95.f_A[iParam0 /*7*/]), 0);
			}
			unk_0x06D93FD5E4D394CF(unk_0xE48AD7BF7762E114(Local_95.f_A[iParam0 /*7*/]), 0, 0, 0, 0, 0, 0, 1, 0);
			unk_0xE20EB9C9BC14ECEB(unk_0xE48AD7BF7762E114(Local_95.f_A[iParam0 /*7*/]), 2);
			unk_0x91629AC1E1F78419(unk_0xE48AD7BF7762E114(Local_95.f_A[iParam0 /*7*/]), 13, 1);
			unk_0x91629AC1E1F78419(unk_0xE48AD7BF7762E114(Local_95.f_A[iParam0 /*7*/]), 41, 1);
			unk_0x91629AC1E1F78419(unk_0xE48AD7BF7762E114(Local_95.f_A[iParam0 /*7*/]), 20, 1);
			unk_0xC8FD3EBBB90E8D7F(unk_0xE48AD7BF7762E114(Local_95.f_A[iParam0 /*7*/]), 132, true);
			unk_0xC8FD3EBBB90E8D7F(unk_0xE48AD7BF7762E114(Local_95.f_A[iParam0 /*7*/]), 118, false);
			unk_0xC8FD3EBBB90E8D7F(unk_0xE48AD7BF7762E114(Local_95.f_A[iParam0 /*7*/]), 311, true);
			unk_0x9C74359FED150B42(unk_0xE48AD7BF7762E114(Local_95.f_A[iParam0 /*7*/]), 300f, 10);
			unk_0x22321800954A532E(unk_0xE48AD7BF7762E114(Local_95.f_A[iParam0 /*7*/]), 1);
			StringCopy(&cVar0, "gang ", 16);
			StringIntConCat(&cVar0, iParam0, 16);
			unk_0xF85FAED5BA864282(unk_0xE48AD7BF7762E114(Local_95.f_A[iParam0 /*7*/]), &cVar0);
			switch (Local_95.f_A[iParam0 /*7*/].f_4)
			{
				case 0:
					func_7(iParam0, 1);
					unk_0x91629AC1E1F78419(unk_0xE48AD7BF7762E114(Local_95.f_A[iParam0 /*7*/]), 0, 0);
					unk_0x91629AC1E1F78419(unk_0xE48AD7BF7762E114(Local_95.f_A[iParam0 /*7*/]), 2, 0);
					unk_0x54480313BB3E8DD0(unk_0xE48AD7BF7762E114(Local_95.f_A[iParam0 /*7*/]), 2);
					unk_0x80F51E5792576467(unk_0xE48AD7BF7762E114(Local_95.f_A[iParam0 /*7*/]), 0);
					unk_0x69194304DB679A9C(unk_0xE48AD7BF7762E114(Local_95.f_A[iParam0 /*7*/]), 0, -1, 0);
					unk_0xC8FD3EBBB90E8D7F(unk_0xE48AD7BF7762E114(Local_95.f_A[iParam0 /*7*/]), 32, true);
					unk_0xABA7AE40608505F2(unk_0xE48AD7BF7762E114(Local_95.f_A[iParam0 /*7*/]), 4, false);
					unk_0xABA7AE40608505F2(unk_0xE48AD7BF7762E114(Local_95.f_A[iParam0 /*7*/]), 1024, true);
					unk_0xABA7AE40608505F2(unk_0xE48AD7BF7762E114(Local_95.f_A[iParam0 /*7*/]), 128, true);
					unk_0xABA7AE40608505F2(unk_0xE48AD7BF7762E114(Local_95.f_A[iParam0 /*7*/]), 32, false);
					unk_0xABA7AE40608505F2(unk_0xE48AD7BF7762E114(Local_95.f_A[iParam0 /*7*/]), 8, false);
					unk_0xABA7AE40608505F2(unk_0xE48AD7BF7762E114(Local_95.f_A[iParam0 /*7*/]), 64, false);
					unk_0xABA7AE40608505F2(unk_0xE48AD7BF7762E114(Local_95.f_A[iParam0 /*7*/]), 256, true);
					unk_0xABA7AE40608505F2(unk_0xE48AD7BF7762E114(Local_95.f_A[iParam0 /*7*/]), 1, false);
					unk_0xABA7AE40608505F2(unk_0xE48AD7BF7762E114(Local_95.f_A[iParam0 /*7*/]), 2, true);
					unk_0xABA7AE40608505F2(unk_0xE48AD7BF7762E114(Local_95.f_A[iParam0 /*7*/]), 16, true);
					if (!unk_0xFA30DFD0084E92FE(Local_95.f_A[iParam0 /*7*/].f_2, 0))
					{
						unk_0xF0059F27F7BB6680(&(Local_95.f_A[iParam0 /*7*/].f_2), 2);
					}
					unk_0xABA7AE40608505F2(unk_0xE48AD7BF7762E114(Local_95.f_A[iParam0 /*7*/]), 512, true);
					unk_0x91629AC1E1F78419(unk_0xE48AD7BF7762E114(Local_95.f_A[iParam0 /*7*/]), 17, 0);
					unk_0x7A535CE1F001F3FE(unk_0xE48AD7BF7762E114(Local_95.f_A[iParam0 /*7*/]), joaat("weapon_knife"), 1, true, true);
					unk_0x8EF3D958386640FE(unk_0xE48AD7BF7762E114(Local_95.f_A[iParam0 /*7*/]), 0);
					unk_0x56F2E1B5599188FA(unk_0xE48AD7BF7762E114(Local_95.f_A[iParam0 /*7*/]), unk_0xA95CF30C72EB526E(iLocal_103), -1, 0, 2);
					unk_0x71A9626F830C7567(Local_95.f_A[iParam0 /*7*/], 1);
					break;
			}
			unk_0x65E471E4A2D56226(unk_0xE48AD7BF7762E114(Local_95.f_A[iParam0 /*7*/]), SYSTEM::ROUND((Global_40001.f_99 * IntToFloat(unk_0x8D66276473ABD7CC(unk_0xE48AD7BF7762E114(Local_95.f_A[iParam0 /*7*/]))))), 0);
			if (!unk_0xFA30DFD0084E92FE(Local_95.f_1, 8))
			{
				unk_0xF0059F27F7BB6680(&(Local_95.f_1), 8);
			}
			unk_0xF0059F27F7BB6680(&(Local_95.f_A[iParam0 /*7*/].f_2), 1);
		}
	}
}

int func_64(var uParam0, int iParam1, int iParam2, vector3 vParam3, float fParam4, bool bParam5, int iParam6, int iParam7)//Position - 0x224D
{
	int iVar0;
	
	if (!unk_0x88E77A85289CC883(1))
	{
		return 0;
	}
	iVar0 = unk_0x01B3635C3E8EDD81(iParam1, iParam2, vParam3, fParam4, iParam6, bParam5);
	*uParam0 = unk_0x5902CDB733CD6ADE(iVar0);
	if (unk_0x7FFE36DB9042AF23(*uParam0))
	{
		unk_0x656194E145691D3E(iVar0, iParam7);
		if (unk_0x270072584099CC42(iVar0))
		{
			if (bParam5)
			{
				unk_0xF2A50F5F6E7737D8(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_65(int iParam0)//Position - 0x22AC
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
	}
	return 0;
}

int func_66()//Position - 0x22C9
{
	struct<35> Var0;
	
	if (unk_0xFA30DFD0084E92FE(Local_95.f_1, 3))
	{
		return 1;
	}
	else
	{
		switch (iLocal_101)
		{
			case 0:
				if (unk_0x96B1061E8F3CBC9A(iLocal_103) && func_6(iLocal_103, 1, 1))
				{
					Var0.f_5 = 1115815936;
					Var0.f_D = 2;
					Var0.f_14 = 2;
					Var0.f_20 = -1082130432;
					Var0.f_22 = 1;
					Var0 = { unk_0x541C2AEF053615BC(unk_0xA95CF30C72EB526E(iLocal_103), 1) };
					Var0.f_5 = 20f;
					if (func_67(Local_95.f_24, 40f, &(Local_95.f_20), &(Local_95.f_23), Var0))
					{
						unk_0xF0059F27F7BB6680(&(Local_95.f_1), 3);
						return 1;
					}
				}
				else
				{
					unk_0xF75B799C230EFB11();
					unk_0xA8AB1E14B86B6053();
					if (Global_24B2CE.f_996)
					{
						unk_0x156000B85911BE27();
						Global_24B2CE.f_996 = 0;
					}
				}
				break;
			}
	}
	return 0;
}

int func_67(vector3 vParam0, float fParam1, var uParam2, var uParam3, struct<13> Param4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26)//Position - 0x239D
{
	struct<17> Var0;
	struct<18> Var1;
	vector3 vVar2;
	
	if (Param4.f_5 > (fParam1 - 20f))
	{
		Param4.f_5 = (fParam1 - 20f);
	}
	Var0 = 5;
	Var0.f_10 = 5;
	Var0.f_16 = 5;
	Var0.f_1C = 5;
	Var1.f_10 = 1;
	Var1.f_16 = 1;
	Var1.f_17 = 1;
	Var1.f_18 = 1;
	Var1 = { vParam0 };
	Var1.f_3 = Param4.f_B;
	Var1.f_4 = fParam1;
	Var1.f_5 = 0;
	Var1.f_6 = 1;
	Var1.f_7 = 0;
	Var1.f_F = 0;
	Var1.f_10 = 1;
	Var1.f_11 = 0;
	if (func_68(&Var1, &Param4, &Var0))
	{
		if ((Param4.f_C > 0f && Param4.f_7) && Param4.f_8)
		{
			vVar2 = { vParam0 - Var0[0 /*3*/] };
			if (vVar2.z > Param4.f_C)
			{
				Var0[0 /*3*/] = { vParam0 };
				Var0.f_10[0] = Param4.f_B;
			}
		}
		*uParam2 = { Var0[0 /*3*/] };
		*uParam3 = Var0.f_10[0];
		return 1;
	}
	return 0;
}

int func_68(var uParam0, var uParam1, var uParam2)//Position - 0x249D
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	vector3 vVar7;
	vector3 vVar8;
	int iVar9;
	vector3 vVar10;
	vector3 vVar11;
	var uVar12;
	bool bVar13;
	struct<56> Var14;
	bool bVar15;
	
	bVar13 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_24B2CE.f_990 == *uParam0 || !Global_24B2CE.f_990.f_1 == uParam0->f_1) || !Global_24B2CE.f_990.f_2 == uParam0->f_2) || !Global_24B2CE.f_993 == uParam0->f_4)
			{
				bVar13 = true;
			}
			break;
		
		case 1:
			if (((((!Global_24B2CE.f_99E == uParam0->f_8 || !Global_24B2CE.f_99E.f_1 == uParam0->f_8.f_1) || !Global_24B2CE.f_99E.f_2 == uParam0->f_8.f_2) || !Global_24B2CE.f_9A1 == uParam0->f_B) || !Global_24B2CE.f_9A1.f_1 == uParam0->f_B.f_1) || !Global_24B2CE.f_9A1.f_2 == uParam0->f_B.f_2)
			{
				bVar13 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_24B2CE.f_99E == uParam0->f_8 || !Global_24B2CE.f_99E.f_1 == uParam0->f_8.f_1) || !Global_24B2CE.f_99E.f_2 == uParam0->f_8.f_2) || !Global_24B2CE.f_9A1 == uParam0->f_B) || !Global_24B2CE.f_9A1.f_1 == uParam0->f_B.f_1) || !Global_24B2CE.f_9A1.f_2 == uParam0->f_B.f_2) || !Global_24B2CE.f_9A4 == uParam0->f_E)
			{
				bVar13 = true;
			}
			break;
	}
	if (bVar13)
	{
		if (Global_24B2CE.f_98E == 1)
		{
			if (unk_0x3C406FC829C1E14A(Global_24B2CE.f_997))
			{
				if (Global_24B2CE.f_997 == unk_0x8A55B15F4133C912())
				{
					if (unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), Global_24B2CE.f_994) < func_233(0))
					{
						return 0;
					}
				}
				else if (unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), Global_24B2CE.f_994) < func_233(0))
				{
					return 0;
				}
			}
			unk_0xF75B799C230EFB11();
			unk_0xA8AB1E14B86B6053();
			func_232();
		}
		Global_24B2CE.f_98E = 0;
	}
	else if (unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), Global_24B2CE.f_994) > func_233(0))
	{
		Global_24B2CE.f_995 = unk_0xED678C85A82F0AB9();
		func_226();
	}
	switch (uParam0->f_7)
	{
		case 0:
			fVar2 = (*uParam0 - uParam0->f_4);
			fVar3 = (uParam0->f_1 - uParam0->f_4);
			fVar4 = (*uParam0 + uParam0->f_4);
			fVar5 = (uParam0->f_1 + uParam0->f_4);
			break;
		
		case 1:
			if (uParam0->f_8 < uParam0->f_B)
			{
				fVar2 = uParam0->f_8;
				fVar4 = uParam0->f_B;
			}
			else
			{
				fVar2 = uParam0->f_B;
				fVar4 = uParam0->f_8;
			}
			if (uParam0->f_8.f_1 < uParam0->f_B.f_1)
			{
				fVar3 = uParam0->f_8.f_1;
				fVar5 = uParam0->f_B.f_1;
			}
			else
			{
				fVar3 = uParam0->f_B.f_1;
				fVar5 = uParam0->f_8.f_1;
			}
			break;
		
		case 2:
			if (uParam0->f_8 < uParam0->f_B)
			{
				fVar2 = (uParam0->f_8 - (0.5f * uParam0->f_E));
				fVar4 = (uParam0->f_B + (0.5f * uParam0->f_E));
			}
			else
			{
				fVar2 = (uParam0->f_B - (0.5f * uParam0->f_E));
				fVar4 = (uParam0->f_8 + (0.5f * uParam0->f_E));
			}
			if (uParam0->f_8.f_1 < uParam0->f_B.f_1)
			{
				fVar3 = (uParam0->f_8.f_1 - (0.5f * uParam0->f_E));
				fVar5 = (uParam0->f_B.f_1 + (0.5f * uParam0->f_E));
			}
			else
			{
				fVar3 = (uParam0->f_B.f_1 - (0.5f * uParam0->f_E));
				fVar5 = (uParam0->f_8.f_1 + (0.5f * uParam0->f_E));
			}
			break;
	}
	unk_0x4B656426561BA934(fVar2, fVar3, fVar4, fVar5);
	if (uParam0->f_7 == 0)
	{
		vVar6 = { *uParam0 };
	}
	else
	{
		vVar6 = { uParam0->f_8 + uParam0->f_B * Vector(0.5f, 0.5f, 0.5f) };
	}
	vVar7 = { vVar6 + Vector(-0.1f, -0.1f, -0.1f) };
	vVar8 = { vVar6 + Vector(0.1f, 0.1f, 0.1f) };
	if (!Global_24B2CE.f_98E)
	{
		unk_0xF75B799C230EFB11();
		unk_0xA8AB1E14B86B6053();
		func_232();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (SYSTEM::VMAG(*uParam0) > 0f)
			{
				if (func_225(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_11, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_10[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!unk_0x5CBE37ADBC334A75())
		{
			Global_24B2CE.f_9A5 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_24B2CE.f_990 = { *uParam0 };
					Global_24B2CE.f_993 = uParam0->f_4;
					break;
				
				case 1:
					Global_24B2CE.f_99E = { uParam0->f_8 };
					Global_24B2CE.f_9A1 = { uParam0->f_B };
					Global_24B2CE.f_9A4 = 0f;
					Global_24B2CE.f_990 = { uParam0->f_8 + uParam0->f_B / Vector(2f, 2f, 2f) };
					break;
				
				case 2:
					Global_24B2CE.f_99E = { uParam0->f_8 };
					Global_24B2CE.f_9A1 = { uParam0->f_B };
					Global_24B2CE.f_9A4 = uParam0->f_E;
					Global_24B2CE.f_990 = { uParam0->f_8 + uParam0->f_B / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_224(vVar6.x, vVar6.y);
			}
			Global_24B2CE.f_98F = 1;
			Global_24B2CE.f_98E = 1;
			Global_24B2CE.f_995 = unk_0xED678C85A82F0AB9();
			Global_24B2CE.f_994 = unk_0xED678C85A82F0AB9();
			Global_24B2CE.f_997 = unk_0x8A55B15F4133C912();
		}
		else
		{
			return 0;
		}
	}
	if (Global_24B2CE.f_98E)
	{
		if (Global_24B2CE.f_98F == 1)
		{
			if (unk_0x37718415CE714A5B(fVar2, fVar3, fVar4, fVar5) || unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), Global_24B2CE.f_995) > 5000)
			{
				Global_24B2CE.f_995 = unk_0xED678C85A82F0AB9();
				if (uParam1->f_8 || uParam1->f_9)
				{
					if (uParam0->f_15)
					{
						*(uParam2[0 /*3*/]) = { uParam0->f_12 };
					}
					else
					{
						*(uParam2[0 /*3*/]) = { vVar6 };
					}
					Var14.f_6 = 1082130432;
					Var14.f_7 = 1176255488;
					Var14.f_8 = 1;
					Var14.f_A = 1;
					Var14.f_D = 1;
					Var14.f_F = 1;
					Var14.f_10 = 1;
					Var14.f_1F = 1;
					Var14.f_22 = joaat("tailgater");
					Var14.f_26 = 2;
					Var14.f_2D = 2;
					Var14.f_31 = 1123024896;
					Var14.f_35 = 999;
					Var14.f_36 = 1176256410;
					Var14.f_37 = 1;
					Var14.f_38 = 1;
					Var14.f_39 = 1;
					Var14 = { *uParam1 };
					Var14.f_3 = uParam1->f_5;
					Var14.f_B = uParam1->f_9;
					Var14.f_12 = 1;
					if (uParam1->f_20 > 0f)
					{
						Var14.f_6 = uParam1->f_20;
					}
					switch (uParam0->f_7)
					{
						case 0:
							Var14.f_13 = { *uParam0 };
							Var14.f_19 = uParam0->f_4;
							break;
						
						case 1:
							Var14.f_13 = { uParam0->f_8 };
							Var14.f_16 = { uParam0->f_B };
							Var14.f_19 = 0f;
							break;
						
						case 2:
							Var14.f_13 = { uParam0->f_8 };
							Var14.f_16 = { uParam0->f_B };
							Var14.f_19 = uParam0->f_E;
							break;
					}
					Var14.f_1A = uParam0->f_7;
					Var14.f_C = uParam0->f_F;
					if (uParam0->f_15)
					{
						Var14.f_1E = 1;
						Var14.f_20 = 1;
					}
					iVar9 = 0;
					while (iVar9 < 2)
					{
						Var14.f_26[iVar9 /*3*/] = { uParam1->f_D[iVar9 /*3*/] };
						Var14.f_2D[iVar9] = uParam1->f_14[iVar9];
						iVar9++;
					}
					Var14.f_33 = uParam1->f_1E;
					Var14.f_37 = uParam0->f_10;
					if (uParam0->f_1A)
					{
						Var14.f_A = 0;
					}
					if (func_223(Global_440000.f_243FE))
					{
						Var14.f_9 = 1;
					}
					func_198(uParam2[0 /*3*/], &(uParam2->f_10[0]), &Var14);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_197(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_10[0] = uParam0->f_3;
						}
					}
					Global_24B2CE.f_98F = 9;
				}
				else
				{
					Global_24B2CE.f_98F = 2;
				}
			}
		}
		if (Global_24B2CE.f_98F == 2)
		{
			if ((unk_0xC024116C608125C3(vVar7, vVar8) || unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), Global_24B2CE.f_995) > 15000) || unk_0x5C2EA7E0858E9938(vVar7, vVar8) == 0)
			{
				Global_24B2CE.f_995 = unk_0xED678C85A82F0AB9();
				if (uParam0->f_5 && !func_194(unk_0xB5CEFD608600A09F(), 0))
				{
					Global_24B2CE.f_98F = 3;
				}
				else
				{
					Global_24B2CE.f_98F = 4;
				}
			}
			else if (unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), Global_24B2CE.f_999) > 7000)
			{
				func_193(vVar6.x, vVar6.y);
			}
		}
		if (Global_24B2CE.f_98F == 3)
		{
			if (func_192() || unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), Global_24B2CE.f_995) > 10000)
			{
				Global_24B2CE.f_995 = unk_0xED678C85A82F0AB9();
				Global_24B2CE.f_98F = 4;
			}
		}
		if (Global_24B2CE.f_98F == 4)
		{
			if (unk_0x5CBE37ADBC334A75())
			{
				unk_0xF75B799C230EFB11();
				unk_0xA8AB1E14B86B6053();
			}
			else
			{
				iVar0 = 0;
				func_226();
				if (uParam0->f_5)
				{
					if (SYSTEM::VMAG(*uParam1) == 0f)
					{
						iVar0 += 2;
					}
					if (uParam1->f_3)
					{
						iVar0 += 8;
					}
					iVar0 += 16;
					iVar0 += 32;
					if (!unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()) == -1)
					{
						iVar0 += 64;
						iVar0 += 128;
						iVar0 += 256;
					}
					iVar0 += 2048;
					iVar0 += 512;
					iVar0 += 1024;
					switch (uParam0->f_7)
					{
						case 0:
							if (unk_0x8CBA7D344BD35F06(unk_0xB5CEFD608600A09F(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_24B2CE.f_995 = unk_0xED678C85A82F0AB9();
								Global_24B2CE.f_98F = 5;
							}
							break;
						
						case 1:
							func_191(uParam0->f_8, uParam0->f_B, &vVar10, &vVar11, &uVar12);
							if (unk_0xB88DE9CA099A4DB9(unk_0xB5CEFD608600A09F(), vVar10, vVar11, uVar12, *uParam1, iVar0))
							{
								Global_24B2CE.f_995 = unk_0xED678C85A82F0AB9();
								Global_24B2CE.f_98F = 5;
							}
							break;
						
						case 2:
							if (unk_0xB88DE9CA099A4DB9(unk_0xB5CEFD608600A09F(), uParam0->f_8, uParam0->f_B, uParam0->f_E, *uParam1, iVar0))
							{
								Global_24B2CE.f_995 = unk_0xED678C85A82F0AB9();
								Global_24B2CE.f_98F = 5;
							}
							break;
					}
				}
				else
				{
					if (uParam1->f_3)
					{
						iVar0++;
					}
					iVar0 += 2;
					if (uParam1->f_A)
					{
						iVar0 += 32;
					}
					Global_24B2CE.f_995 = unk_0xED678C85A82F0AB9();
					Global_24B2CE.f_98F = 5;
					switch (uParam0->f_7)
					{
						case 0:
							unk_0xD1309BDDAAD56CA3(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_191(uParam0->f_8, uParam0->f_B, &vVar10, &vVar11, &uVar12);
							unk_0xDB409A4D9FA829C0(vVar10, vVar11, uVar12, iVar0, 2f, 5000);
							break;
						
						case 2:
							unk_0xDB409A4D9FA829C0(uParam0->f_8, uParam0->f_B, uParam0->f_E, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_24B2CE.f_98F == 5)
		{
			if (func_120(uParam2, uParam0, uParam1, 0))
			{
				if (Global_24B2CE.f_9A9.f_5)
				{
					Global_24B2CE.f_995 = unk_0xED678C85A82F0AB9();
					Global_24B2CE.f_98F = 6;
				}
				else
				{
					Global_24B2CE.f_995 = unk_0xED678C85A82F0AB9();
					if (!uParam0->f_5)
					{
						if (!SYSTEM::VMAG(*uParam1) == 0f)
						{
							vVar1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_10[0] = unk_0xFDC254CE02DB0919(vVar1.x, vVar1.y);
						}
					}
					Global_24B2CE.f_98F = 9;
				}
			}
			else if (unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), Global_24B2CE.f_995) > 20000)
			{
				unk_0xF75B799C230EFB11();
				unk_0xA8AB1E14B86B6053();
				Global_24B2CE.f_995 = unk_0xED678C85A82F0AB9();
				Global_24B2CE.f_98F = 8;
			}
		}
		if (Global_24B2CE.f_98F == 6)
		{
			iVar0 = 0;
			Global_24B2CE.f_9A9.f_1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_119(uParam0->f_4))
				{
					if (unk_0xBF697FA7422C0621(unk_0x9911032C958CE1B0(vVar6)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_118(uParam0->f_8, uParam0->f_B, uParam0->f_E))
			{
				if (unk_0xBF697FA7422C0621(unk_0x9911032C958CE1B0(vVar6)))
				{
					iVar0++;
				}
			}
			iVar0 += 2;
			if (uParam1->f_A)
			{
				iVar0 += 32;
			}
			if (uParam0->f_F)
			{
				iVar0 += 16;
			}
			Global_24B2CE.f_995 = unk_0xED678C85A82F0AB9();
			Global_24B2CE.f_98F = 7;
			switch (uParam0->f_7)
			{
				case 0:
					unk_0xD1309BDDAAD56CA3(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_191(uParam0->f_8, uParam0->f_B, &vVar10, &vVar11, &uVar12);
					unk_0xDB409A4D9FA829C0(vVar10, vVar11, uVar12, iVar0, 2f, 5000);
					break;
				
				case 2:
					unk_0xDB409A4D9FA829C0(uParam0->f_8, uParam0->f_B, uParam0->f_E, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_24B2CE.f_98F == 7)
		{
			if (func_120(uParam2, uParam0, uParam1, 1))
			{
				if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 3)
					{
						if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!SYSTEM::VMAG(Global_24B2CE.f_A2F[iVar9 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_197(Global_24B2CE.f_A2F[iVar9 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_24B2CE.f_A2F[iVar9 /*3*/] };
										}
										break;
									
									case 1:
										if (func_116(Global_24B2CE.f_A2F[iVar9 /*3*/], uParam0->f_8, uParam0->f_B, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_24B2CE.f_A2F[iVar9 /*3*/] };
										}
										break;
									
									case 2:
										if (unk_0x7352105EC4D7541F(Global_24B2CE.f_A2F[iVar9 /*3*/], uParam0->f_8, uParam0->f_B, uParam0->f_E, 0, 1))
										{
											*(uParam2[0 /*3*/]) = { Global_24B2CE.f_A2F[iVar9 /*3*/] };
										}
										break;
									}
								}
						}
						iVar9++;
					}
					if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
					{
						switch (uParam0->f_7)
						{
							case 0:
								vVar1 = { *uParam0 };
								break;
							
							case 1:
							case 2:
								vVar1 = { uParam0->f_8 + uParam0->f_B / Vector(2f, 2f, 2f) };
								break;
						}
						func_71(&vVar1, 0, 1, 1, 0, uParam0, uParam1);
						*(uParam2[0 /*3*/]) = { vVar1 };
					}
				}
				Global_24B2CE.f_995 = unk_0xED678C85A82F0AB9();
				if (!SYSTEM::VMAG(*uParam1) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 5)
					{
						vVar1 = { *uParam1 - *(uParam2[iVar9 /*3*/]) };
						uParam2->f_10[iVar9] = unk_0xFDC254CE02DB0919(vVar1.x, vVar1.y);
						iVar9++;
					}
				}
				Global_24B2CE.f_98F = 9;
			}
			else if (unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), Global_24B2CE.f_995) > 20000)
			{
				Global_24B2CE.f_995 = unk_0xED678C85A82F0AB9();
				Global_24B2CE.f_98F = 8;
			}
		}
		if (Global_24B2CE.f_98F == 8)
		{
			if (uParam0->f_5)
			{
				if (func_70(Global_24B2CE.f_1E2))
				{
				}
			}
			else if (Global_24B2CE.f_9A9.f_2)
			{
				func_69(uParam2, &(Global_24B2CE.f_9A9.f_6));
			}
			else
			{
				if (uParam0->f_F)
				{
					bVar15 = false;
				}
				else
				{
					bVar15 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_24B2CE.f_990 };
				func_71(uParam2[0 /*3*/], 0, bVar15, 0, 0, uParam0, uParam1);
			}
			Global_24B2CE.f_995 = unk_0xED678C85A82F0AB9();
			Global_24B2CE.f_98F = 9;
		}
		if (Global_24B2CE.f_98F == 9)
		{
			Global_24B2CE.f_98E = 0;
			unk_0xF75B799C230EFB11();
			unk_0xA8AB1E14B86B6053();
			func_232();
			return 1;
		}
		Global_24B2CE.f_994 = unk_0xED678C85A82F0AB9();
	}
	return 0;
}

void func_69(var uParam0, var uParam1)//Position - 0x3456
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		*(uParam0[iVar0 /*3*/]) = { (uParam1[iVar0 /*10*/])->f_4 };
		uParam0->f_10[iVar0] = (uParam1[iVar0 /*10*/])->f_7;
		uParam0->f_16[iVar0] = (*uParam1)[iVar0 /*10*/];
		iVar0++;
	}
}

int func_70(int iParam0)//Position - 0x34A0
{
	if (iParam0 == 3 || iParam0 == 26)
	{
		return 1;
	}
	return 0;
}

void func_71(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6)//Position - 0x34BF
{
	vector3 vVar0;
	var uVar1;
	struct<56> Var2;
	var uVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	vector3 vVar7;
	vector3 vVar8;
	vector3 vVar9;
	float fVar10;
	
	Var2.f_6 = 1082130432;
	Var2.f_7 = 1176255488;
	Var2.f_8 = 1;
	Var2.f_A = 1;
	Var2.f_D = 1;
	Var2.f_F = 1;
	Var2.f_10 = 1;
	Var2.f_1F = 1;
	Var2.f_22 = joaat("tailgater");
	Var2.f_26 = 2;
	Var2.f_2D = 2;
	Var2.f_31 = 1123024896;
	Var2.f_35 = 999;
	Var2.f_36 = 1176256410;
	Var2.f_37 = 1;
	Var2.f_38 = 1;
	Var2.f_39 = 1;
	if (bParam1)
	{
		iVar6 = 0;
	}
	else
	{
		iVar6 = 16;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_16)
			{
				iVar6 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0:
						vVar7 = { *uParam5 };
						if (func_119(uParam5->f_4) || !unk_0xBF697FA7422C0621(unk_0x9911032C958CE1B0(vVar7)))
						{
							iVar6 += 4;
						}
						break;
					
					case 1:
						vVar7 = { uParam5->f_8 + uParam5->f_B * Vector(0.5f, 0.5f, 0.5f) };
						if (func_118(uParam5->f_8, uParam5->f_B, 0f) || !unk_0xBF697FA7422C0621(unk_0x9911032C958CE1B0(vVar7)))
						{
							iVar6 += 4;
						}
						break;
					
					case 2:
						vVar7 = { uParam5->f_8 + uParam5->f_B * Vector(0.5f, 0.5f, 0.5f) };
						if (func_118(uParam5->f_8, uParam5->f_B, uParam5->f_E) || !unk_0xBF697FA7422C0621(unk_0x9911032C958CE1B0(vVar7)))
						{
							iVar6 += 4;
						}
						break;
					}
			}
		}
		else
		{
			iVar6 += 4;
		}
	}
	if (func_75(*uParam0, &vVar0, iVar6, iParam3, 1))
	{
	}
	else
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		vVar0 = { *uParam0 };
		Var2 = { *uParam6 };
		Var2.f_8 = 1;
		Var2.f_3 = uParam6->f_5;
		if (bParam2)
		{
			Var2.f_A = 0;
		}
		else
		{
			Var2.f_A = 1;
		}
		Var2.f_D = uParam5->f_F;
		Var2.f_F = iParam3;
		if (uParam6->f_20 > 0f)
		{
			Var2.f_6 = uParam6->f_20;
		}
		if (bParam4)
		{
			Var2.f_12 = 1;
			Var2.f_1A = uParam5->f_7;
			switch (uParam5->f_7)
			{
				case 0:
					Var2.f_13 = { *uParam5 };
					Var2.f_19 = uParam5->f_4;
					break;
				
				case 1:
					Var2.f_13 = { uParam5->f_8 };
					Var2.f_16 = { uParam5->f_B };
					Var2.f_19 = 0f;
					break;
				
				case 2:
					Var2.f_13 = { uParam5->f_8 };
					Var2.f_16 = { uParam5->f_B };
					Var2.f_19 = uParam5->f_E;
					break;
				}
		}
		iVar4 = 0;
		while (iVar4 < 2)
		{
			Var2.f_26[iVar4 /*3*/] = { uParam6->f_D[iVar4 /*3*/] };
			Var2.f_2D[iVar4] = uParam6->f_14[iVar4];
			iVar4++;
		}
		Var2.f_33 = uParam6->f_1E;
		Var2.f_37 = uParam5->f_10;
		if (func_73(unk_0xB5CEFD608600A09F(), 0))
		{
			Var2.f_9 = 1;
		}
		func_198(&vVar0, &uVar1, &Var2);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0:
				vVar8 = { *uParam5 };
				fVar10 = uParam5->f_4;
				break;
			
			case 1:
				vVar8 = { uParam5->f_8 };
				vVar9 = { uParam5->f_B };
				break;
			
			case 2:
				vVar8 = { uParam5->f_8 };
				vVar9 = { uParam5->f_B };
				fVar10 = uParam5->f_E;
				break;
		}
		if (!func_72(vVar0, uParam5->f_7, vVar8, vVar9, fVar10))
		{
			if (func_75(*uParam0, &vVar0, iVar6, iParam3, 0))
			{
				if (!func_72(vVar0, uParam5->f_7, vVar8, vVar9, fVar10))
				{
					if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
					{
						vVar0 = { vVar8 + vVar9 * Vector(0.5f, 0.5f, 0.5f) };
					}
					else
					{
						vVar0 = { vVar8 };
					}
					if (unk_0x2084D4C6C2DF616F(vVar0, &uVar3, 0, 0))
					{
						vVar0.z = uVar3;
					}
				}
			}
			else
			{
				if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
				{
					vVar0 = { vVar8 + vVar9 * Vector(0.5f, 0.5f, 0.5f) };
				}
				else
				{
					vVar0 = { vVar8 };
				}
				if (unk_0x2084D4C6C2DF616F(vVar0, &uVar3, 0, 0))
				{
					vVar0.z = uVar3;
				}
			}
		}
	}
	*uParam0 = { vVar0 };
	Global_24B2CE.f_291 = 1;
}

int func_72(vector3 vParam0, int iParam1, vector3 vParam2, vector3 vParam3, float fParam4)//Position - 0x3908
{
	switch (iParam1)
	{
		case 0:
			if (SYSTEM::VDIST(vParam0, vParam2) <= fParam4)
			{
				return 1;
			}
			break;
		
		case 1:
			return func_116(vParam0, vParam2, vParam3, 0, 0);
			break;
		
		case 2:
			return unk_0x7352105EC4D7541F(vParam0, vParam2, vParam3, fParam4, 0, 1);
			break;
	}
	return 0;
}

int func_73(int iParam0, bool bParam1)//Position - 0x3975
{
	int iVar0;
	
	if (bParam1)
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			if (unk_0x6F79ECA8C83E4357(iVar0) == -1988428699)
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_13())
	{
		if (func_6(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1 && Global_24FB5C[iParam0 /*406*/].f_131.f_4 != func_13())
			{
				return func_74(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 12;
			}
		}
	}
	return 0;
}

int func_74(int iParam0)//Position - 0x3A03
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
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
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
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
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
	}
	return -1;
}

int func_75(vector3 vParam0, var uParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x3D4F
{
	if (func_115(vParam0, uParam1))
	{
		if (func_76(vParam0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	if (unk_0xF5D5237E20BDAEE6(vParam0, 0, uParam1, iParam2))
	{
		if (func_76(vParam0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_76(vector3 vParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x3DAB
{
	float fVar0;
	var uVar1;
	var uVar2;
	
	fVar0 = SYSTEM::VDIST(vParam0, *uParam1);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar2 = 2;
		if ((iParam2 == 1 && !func_96(Global_24B2CE.f_1F9, uParam1, &uVar1, &uVar2, bParam3, 1)) || iParam2 == 0)
		{
			if (!func_83(*uParam1, 1056964608))
			{
				if (!func_77(uParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_77(var uParam0, bool bParam1)//Position - 0x3E30
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	
	vVar1 = { *uParam0 };
	iVar2 = func_82(vVar1);
	iVar0 = 0;
	while (iVar0 < Global_24CACB[iVar2])
	{
		if (func_81(vVar1, &(Global_24C653[iVar2 /*127*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_78(&vVar1, Global_24C653[iVar2 /*127*/][iVar0 /*7*/], Global_24C653[iVar2 /*127*/][iVar0 /*7*/].f_3, Global_24C653[iVar2 /*127*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_24CACB[8])
	{
		if (func_81(vVar1, &(Global_24C653[8 /*127*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_78(&vVar1, Global_24C653[8 /*127*/][iVar0 /*7*/], Global_24C653[8 /*127*/][iVar0 /*7*/].f_3, Global_24C653[8 /*127*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_78(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3, float fParam4, bool bParam5)//Position - 0x3F3D
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar5;
	float fVar6;
	vector3 vVar7;
	vector3 vVar8;
	vector3 vVar9;
	vector3 vVar10;
	vector3 vVar11;
	
	vVar0 = { vParam2 - vParam1 };
	vVar0.z = 0f;
	vVar1 = { *uParam0 - vParam1 };
	vVar1.z = 0f;
	vVar2 = { func_80(0f, 0f, 1f, vVar0) };
	vVar2 = { vVar2 / FtoV(SYSTEM::VMAG(vVar2)) };
	fVar3 = (SYSTEM::VMAG(vVar1) * SYSTEM::SIN(unk_0x77211CE25DED4FDB(vVar0.x, vVar0.y, vVar1.x, vVar1.y)));
	if (fVar3 < (fParam3 * 0.5f))
	{
		if (!bParam5)
		{
			if (func_79(vVar2, vVar1) >= 0f)
			{
				vVar2 = { vVar2 * FtoV((((fParam3 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				vVar2 = { vVar2 * FtoV(((((fParam3 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_79(vVar2, vVar1) >= 0f)
		{
			vVar2 = { vVar2 * FtoV(((((fParam3 * 0.5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			vVar2 = { vVar2 * FtoV((((fParam3 * 0.5f) + fVar3) + fParam4)) };
		}
		vVar4 = { *uParam0 + vVar2 };
		fVar6 = SYSTEM::VDIST(vParam1.x, vParam1.y, 0f, vParam2.x, vParam2.y, 0f);
		vVar7 = { vParam1 + vParam2 / Vector(2f, 2f, 2f) };
		vVar7.z = 0f;
		vVar2 = { func_80(0f, 0f, 1f, vVar0) };
		vVar2 = { vVar2 / FtoV(SYSTEM::VMAG(vVar2)) };
		vVar2 = { vVar2 * FtoV((fParam3 * 0.5f)) };
		vVar8 = { vVar7 - vVar2 };
		vVar9 = { vVar7 + vVar2 };
		vVar10 = { vVar9 - vVar8 };
		vVar10.z = 0f;
		vVar11 = { *uParam0 - vVar8 };
		vVar11.z = 0f;
		vVar2 = { func_80(0f, 0f, 1f, vVar10) };
		vVar2 = { vVar2 / FtoV(SYSTEM::VMAG(vVar2)) };
		fVar3 = (SYSTEM::VMAG(vVar11) * SYSTEM::SIN(unk_0x77211CE25DED4FDB(vVar10.x, vVar10.y, vVar11.x, vVar11.y)));
		if (!bParam5)
		{
			if (func_79(vVar2, vVar11) >= 0f)
			{
				vVar2 = { vVar2 * FtoV((((fVar6 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				vVar2 = { vVar2 * FtoV(((((fVar6 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_79(vVar2, vVar11) >= 0f)
		{
			vVar2 = { vVar2 * FtoV(((((fVar6 * 0.5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			vVar2 = { vVar2 * FtoV((((fVar6 * 0.5f) + fVar3) + fParam4)) };
		}
		vVar5 = { *uParam0 + vVar2 };
		if (SYSTEM::VDIST(vVar4, *uParam0, uParam0->f_1, 0f) < SYSTEM::VDIST(vVar5, *uParam0, uParam0->f_1, 0f))
		{
			*uParam0 = { vVar4 };
		}
		else
		{
			*uParam0 = { vVar5 };
		}
	}
}

float func_79(vector3 vParam0, vector3 vParam1)//Position - 0x420D
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_80(vector3 vParam0, vector3 vParam1)//Position - 0x422E
{
	return ((vParam0.y * vParam1.z) - (vParam0.z * vParam1.y)), ((vParam0.z * vParam1.x) - (vParam0.x * vParam1.z)), ((vParam0.x * vParam1.y) - (vParam0.y * vParam1.x));
}

bool func_81(vector3 vParam0, var uParam1)//Position - 0x4267
{
	return unk_0x7352105EC4D7541F(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 1);
}

int func_82(struct<2> Param0, var uParam1)//Position - 0x4287
{
	if (Param0.f_1 > Global_24CAD5[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_24CAD5[1])
	{
		if (Param0 < Global_24CAD9[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_24CAD5[2])
	{
		if (Param0 < Global_24CAD9[1])
		{
			return 3;
		}
		else if (Param0 < Global_24CAD9[2])
		{
			return 4;
		}
		else if (Param0 < Global_24CAD9[3])
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	return 7;
}

int func_83(vector3 vParam0, float fParam1)//Position - 0x4322
{
	int iVar0;
	
	if (func_93(unk_0xB5CEFD608600A09F(), 1))
	{
		if (Global_440000.f_DD6F > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_440000.f_DD6F)
			{
				if (Global_440000.f_DD70[iVar0 /*76*/].f_7 != 0)
				{
					if (func_84(vParam0, Global_440000.f_DD70[iVar0 /*76*/], Global_440000.f_DD70[iVar0 /*76*/].f_6, Global_440000.f_DD70[iVar0 /*76*/].f_7, fParam1))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_440000.f_D0E6 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_440000.f_D0E6)
			{
				if (Global_440000.f_D0E9[iVar0 /*130*/].f_10 != 0)
				{
					if (func_84(vParam0, Global_440000.f_D0E9[iVar0 /*130*/], Global_440000.f_D0E9[iVar0 /*130*/].f_3, Global_440000.f_D0E9[iVar0 /*130*/].f_10, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_440000.f_1274E > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_440000.f_1274E)
			{
				if (Global_440000.f_12752[iVar0 /*217*/].f_C != 0)
				{
					if (func_84(vParam0, Global_440000.f_12752[iVar0 /*217*/], Global_440000.f_12752[iVar0 /*217*/].f_3, Global_440000.f_12752[iVar0 /*217*/].f_C, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_84(vector3 vParam0, vector3 vParam1, float fParam2, int iParam3, float fParam4)//Position - 0x44AB
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if (SYSTEM::VDIST(vParam0, vParam1) < func_92(iParam3, 1008981770))
	{
		func_85(vParam1, fParam2, iParam3, &vVar0, &vVar1, &fVar2, fParam4);
		if (unk_0x7352105EC4D7541F(vParam0, vVar0, vVar1, fVar2, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_85(vector3 vParam0, float fParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6)//Position - 0x44FE
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	
	vVar0 = { 0f, 1f, 0f };
	func_91(&vVar0, 0f, 0f, fParam1);
	vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	func_86(iParam2, &vVar1, &vVar2, 1086324736, 1080033280, 1077936128);
	vVar3 = { vParam0 + vVar0 * FtoV((vVar2.y + fParam6)) };
	vVar3.z = (vVar3.z - ((0.5f * unk_0x357058E632979E65((vVar2.z - vVar1.z))) + fParam6));
	vVar4 = { vParam0 - vVar0 * FtoV(((vVar1.y * -1f) + fParam6)) };
	vVar4.z = (vVar4.z + ((0.5f * unk_0x357058E632979E65((vVar2.z - vVar1.z))) + fParam6));
	*uParam3 = { vVar3 };
	*uParam4 = { vVar4 };
	*uParam5 = unk_0x357058E632979E65((vVar2.x - vVar1.x));
}

void func_86(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)//Position - 0x45CA
{
	int iVar0;
	
	if (unk_0x4A09C6BA3AFA4242(iParam0))
	{
		unk_0x2B3953EE61953843(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_89(iParam0);
		if (iVar0 != 0)
		{
			func_87(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
	}
	if (SYSTEM::VMAG(*uParam1) <= 0.01f || SYSTEM::VMAG(*uParam2) <= 0.01f)
	{
		*uParam1 = (0f - (fParam4 * 0.5f));
		*uParam2 = (0f + (fParam4 * 0.5f));
		uParam1->f_1 = (0f - (fParam3 * 0.5f));
		uParam2->f_1 = (0f + (fParam3 * 0.5f));
		uParam1->f_2 = (0f - (fParam5 * 0.5f));
		uParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_87(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)//Position - 0x4689
{
	int iVar0;
	
	func_88(iParam0, &Global_1413CC);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x4A09C6BA3AFA4242(Global_1413CC[iVar0]))
		{
			unk_0x2B3953EE61953843(Global_1413CC[iVar0], &(Global_1413D0[iVar0 /*3*/]), &(Global_1413D7[iVar0 /*3*/]));
		}
		if (SYSTEM::VMAG(Global_1413D0[iVar0 /*3*/]) <= 0.01f || SYSTEM::VMAG(Global_1413D7[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1413D0[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1413D7[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1413D0[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1413D7[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1413D0[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1413D7[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1413DE[iVar0] = (Global_1413D7[iVar0 /*3*/] - Global_1413D0[iVar0 /*3*/]);
		Global_1413E1[iVar0] = (Global_1413D7[iVar0 /*3*/].f_1 - Global_1413D0[iVar0 /*3*/].f_1);
		Global_1413E4[iVar0] = (Global_1413D7[iVar0 /*3*/].f_2 - Global_1413D0[iVar0 /*3*/].f_2);
		if (Global_1413DE[iVar0] > Global_1413E7)
		{
			Global_1413E7 = Global_1413DE[iVar0];
		}
		if (Global_1413E4[iVar0] > Global_1413E8)
		{
			Global_1413E8 = Global_1413E4[iVar0];
		}
		iVar0++;
	}
	Global_1413E9 = (Global_1413E7 * -0.5f);
	Global_1413EC = (Global_1413E7 * 0.5f);
	Global_1413E9.f_1 = ((((0.5f * Global_1413E1[0]) + Global_1413E1[1]) + Global_1413CC.f_3) * -1f);
	Global_1413EC.f_1 = (0.5f * Global_1413E1[0]);
	Global_1413E9.f_2 = (Global_1413E4[0] * -0.5f);
	Global_1413EC.f_2 = (Global_1413E4[0] * 0.5f);
	*uParam1 = { Global_1413E9 };
	*uParam2 = { Global_1413EC };
}

void func_88(int iParam0, var uParam1)//Position - 0x4895
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = 387748548;
			(*uParam1)[1] = 1502869817;
			uParam1->f_3 = -2.6f;
			break;
		
		case 2:
			(*uParam1)[0] = 177270108;
			(*uParam1)[1] = 1502869817;
			uParam1->f_3 = -2.6f;
			break;
		
		case 3:
			(*uParam1)[0] = 433954513;
			(*uParam1)[1] = -1881846085;
			uParam1->f_3 = 0.5f;
			break;
	}
}

int func_89(int iParam0)//Position - 0x4916
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_90(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_90(int iParam0)//Position - 0x4945
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_91(var uParam0, vector3 vParam1)//Position - 0x4957
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	
	fVar0 = SYSTEM::COS(vParam1.x);
	fVar1 = SYSTEM::SIN(vParam1.x);
	vVar2.x = *uParam0;
	vVar2.y = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	vVar2.z = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { vVar2 };
	fVar0 = SYSTEM::COS(vParam1.y);
	fVar1 = SYSTEM::SIN(vParam1.y);
	vVar2.x = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	vVar2.y = uParam0->f_1;
	vVar2.z = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { vVar2 };
	fVar0 = SYSTEM::COS(vParam1.z);
	fVar1 = SYSTEM::SIN(vParam1.z);
	vVar2.x = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	vVar2.y = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	vVar2.z = uParam0->f_2;
	*uParam0 = { vVar2 };
}

float func_92(int iParam0, float fParam1)//Position - 0x4A2E
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_86(iParam0, &vVar0, &vVar1, 1086324736, 1080033280, 1077936128);
	vVar2 = { vVar1 - vVar0 };
	fVar3 = (SYSTEM::SQRT(((((vVar2.x * 0.5f) * (vVar2.x * 0.5f)) + ((vVar2.y * 0.5f) * (vVar2.y * 0.5f))) + ((vVar2.z * 0.5f) * (vVar2.z * 0.5f)))) + fParam1);
	return fVar3;
}

int func_93(int iParam0, bool bParam1)//Position - 0x4AAE
{
	if (bParam1)
	{
		if (func_94(iParam0))
		{
			return 1;
		}
	}
	if (Global_18402B[iParam0 /*770*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_94(int iParam0)//Position - 0x4ADA
{
	return func_95(iParam0);
}

bool func_95(int iParam0)//Position - 0x4AE8
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_D.f_1, 0);
}

int func_96(vector3 vParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x4B02
{
	int iVar0;
	bool bVar1;
	
	if (func_109(vParam0))
	{
		if (func_108(uParam1, bParam4, 0, 1, 1))
		{
			if (bParam4)
			{
			}
			return 1;
		}
	}
	if (func_99(uParam1, bParam4, 1))
	{
		if (bParam4)
		{
		}
		return 1;
	}
	if (bParam5)
	{
		if (func_98(*uParam1, 1056964608))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (SYSTEM::VDIST(*uParam1, *(uParam2[iVar0 /*3*/])) < (*uParam3)[iVar0])
		{
			if (bParam4)
			{
				func_97(uParam1, *(uParam2[iVar0 /*3*/]), (*uParam3)[iVar0], 1036831949, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

void func_97(var uParam0, vector3 vParam1, float fParam2, float fParam3, bool bParam4, float fParam5)//Position - 0x4BBE
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { *uParam0 - vParam1 };
	vVar0.z = 0f;
	if (SYSTEM::VMAG(vVar0) > 0f)
	{
		vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	}
	else
	{
		vVar0 = { 0f, 1f, 0f };
		if (fParam5 == 0f)
		{
			func_91(&vVar0, 0f, 0f, unk_0x55AEFCD285ECC0F2(0f, 360f));
		}
		else
		{
			func_91(&vVar0, 0f, 0f, fParam5);
		}
	}
	vVar0 = { vVar0 * FtoV((fParam2 + fParam3)) };
	if (!bParam4)
	{
		vVar1 = { vParam1 + vVar0 };
	}
	else
	{
		vVar1 = { vParam1 - vVar0 };
	}
	*uParam0 = vVar1.x;
	uParam0->f_1 = vVar1.y;
}

int func_98(vector3 vParam0, float fParam1)//Position - 0x4C66
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (SYSTEM::VDIST(vParam0, Global_24B2CE.f_A9C[iVar0 /*3*/]) < fParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_99(var uParam0, bool bParam1, bool bParam2)//Position - 0x4CA1
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	
	if (func_104(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			vVar2 = { *uParam0 };
			func_101(&vVar2, &(Global_24B2CE.f_169[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_104(vVar2, &uVar1) || func_100(vVar2))
			{
				vVar2 = { *uParam0 };
				func_101(&vVar2, &(Global_24B2CE.f_169[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { vVar2 };
		}
		return 1;
	}
	return 0;
}

int func_100(vector3 vParam0)//Position - 0x4D25
{
	float fVar0;
	
	if (Global_24B2CE.f_24A > 0f)
	{
		fVar0 = SYSTEM::VDIST(vParam0, Global_24B2CE.f_247);
		if (fVar0 < Global_24B2CE.f_24A)
		{
			return 1;
		}
	}
	return 0;
}

void func_101(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)//Position - 0x4D5E
{
	if (bParam4)
	{
		switch (uParam1->f_A)
		{
			case 0:
				*uParam0 = { func_103(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_24B2CE.f_A9A) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_103(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_103(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_A)
		{
			case 0:
				func_97(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_24B2CE.f_A9A) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_102(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_78(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

void func_102(var uParam0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, float fParam5, bool bParam6)//Position - 0x4E68
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	vVar0 = { *uParam0 };
	fVar1 = (*uParam0 - Param1);
	fVar2 = (*uParam0 - Param3);
	if (fVar1 < fVar2)
	{
		fVar3 = fVar1;
	}
	else
	{
		fVar3 = fVar2;
	}
	fVar4 = (uParam0->f_1 - Param1.f_1);
	fVar5 = (uParam0->f_1 - Param3.f_1);
	if (fVar4 < fVar5)
	{
		fVar6 = fVar4;
	}
	else
	{
		fVar6 = fVar5;
	}
	vVar0 = { *uParam0 };
	if (!bParam6)
	{
		if (fVar3 < fVar6)
		{
			if (fVar1 < fVar2)
			{
				vVar0.x = (Param1 - fParam5);
			}
			else
			{
				vVar0.x = (Param3 + fParam5);
			}
		}
		else if (fVar4 < fVar5)
		{
			vVar0.y = (Param1.f_1 - fParam5);
		}
		else
		{
			vVar0.y = (Param3.f_1 + fParam5);
		}
	}
	else if (fVar3 < fVar6)
	{
		if (fVar1 < fVar2)
		{
			vVar0.x = (Param3 + fParam5);
		}
		else
		{
			vVar0.x = (Param1 - fParam5);
		}
	}
	else if (fVar4 < fVar5)
	{
		vVar0.y = (Param3.f_1 + fParam5);
	}
	else
	{
		vVar0.y = (Param1.f_1 - fParam5);
	}
	*uParam0 = { vVar0 };
}

Vector3 func_103(vector3 vParam0, vector3 vParam1, vector3 vParam2, float fParam3, int iParam4, float fParam5, bool bParam6)//Position - 0x4F67
{
	int iVar0;
	vector3 vVar1;
	
	switch (iParam4)
	{
		case 0:
			func_97(&vParam0, vParam1, fParam3, fParam5, bParam6, 0);
			break;
		
		case 1:
			func_102(&vParam0, vParam1, vParam2, fParam5, bParam6);
			break;
		
		case 2:
			func_78(&vParam0, vParam1, vParam2, fParam3, fParam5, bParam6);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		unk_0x29EBF830A072263F(vParam0, iVar0 * 5, &vVar1, 1, 0f, 0f);
		switch (iParam4)
		{
			case 0:
				if (!func_197(vVar1, vParam1, fParam3, 0, 0))
				{
					return vVar1;
				}
				break;
			
			case 1:
				if (!func_116(vVar1, vParam1, vParam2, 0, 0))
				{
					return vVar1;
				}
				break;
			
			case 2:
				if (!unk_0x7352105EC4D7541F(vVar1, vParam1, vParam2, fParam3, 0, 1))
				{
					return vVar1;
				}
				break;
		}
		iVar0++;
	}
	return vParam0;
}

int func_104(vector3 vParam0, var uParam1)//Position - 0x506A
{
	int iVar0;
	int iVar1;
	
	if (func_107())
	{
		return 0;
	}
	iVar1 = func_106();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_24B2CE.f_169[iVar0 /*12*/].f_9 == 1)
		{
			if (func_105(vParam0, &(Global_24B2CE.f_169[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam1 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_105(vector3 vParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)//Position - 0x50CE
{
	switch (uParam1->f_A)
	{
		case 0:
			return func_197(vParam0, *uParam1, ((uParam1->f_6 + fParam2) + (IntToFloat(Global_24B2CE.f_A9A) * uParam1->f_8)), bParam3, bParam4);
			break;
		
		case 1:
			return func_116(vParam0, *uParam1 + Vector((fParam2 * -1f), (fParam2 * -1f), (fParam2 * -1f)), uParam1->f_3 + Vector(fParam2, fParam2, fParam2), bParam3, bParam4);
			break;
		
		case 2:
			if (bParam3 && bParam4)
			{
				return unk_0x7352105EC4D7541F(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0);
			}
			else if (bParam3)
			{
				if (unk_0x7352105EC4D7541F(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0) && !(vParam0.z < uParam1->f_2 && vParam0.z < uParam1->f_3.f_2))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam4)
			{
				if (unk_0x7352105EC4D7541F(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0) && !(vParam0.z > uParam1->f_2 && vParam0.z > uParam1->f_3.f_2))
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
				return unk_0x7352105EC4D7541F(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 1);
			}
			break;
	}
	return 0;
}

int func_106()//Position - 0x522F
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_24B2CE.f_169[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_107()//Position - 0x5262
{
	return Global_197055.f_1C;
}

int func_108(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x5270
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_24C5CA[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_24C5CA[iVar0 /*17*/].f_10))
			{
				if (func_105(*uParam0, &(Global_24C5CA[iVar0 /*17*/]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_24C5CA[iVar0 /*17*/].f_C)
						{
							*uParam0 = { Global_24C5CA[iVar0 /*17*/].f_D };
						}
						else
						{
							vVar1 = { *uParam0 };
							func_101(&vVar1, &(Global_24C5CA[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_108(&vVar1, 0, 0, 0, 1))
							{
								vVar1 = { *uParam0 };
								func_101(&vVar1, &(Global_24C5CA[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = { vVar1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_109(vector3 vParam0)//Position - 0x534B
{
	int iVar0;
	vector3 vVar1;
	
	if (!Global_24B2CE.f_1FC && !Global_24B2CE.f_1FD)
	{
		if (!Global_24B2CE.f_2C.f_13A)
		{
			if (!func_113(unk_0xB5CEFD608600A09F(), 1))
			{
				return 1;
			}
			if (!func_112(vParam0, 1008981770))
			{
				if (!func_108(&vParam0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_108(&vParam0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_111(vParam0, 1008981770);
				if (iVar0 > -1)
				{
					vVar1 = { func_110(&(Global_24B2CE.f_2C[iVar0 /*12*/])) };
					if (!func_108(&vVar1, 0, 0, 0, 1))
					{
						if (!func_108(&vParam0, 0, 0, 0, 1))
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

Vector3 func_110(var uParam0)//Position - 0x540B
{
	switch (uParam0->f_A)
	{
		case 0:
			return *uParam0;
			break;
		
		case 1:
		case 2:
			return *uParam0 + uParam0->f_3 * Vector(0.5f, 0.5f, 0.5f);
			break;
	}
	return *uParam0;
}

int func_111(vector3 vParam0, float fParam1)//Position - 0x5454
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_24B2CE.f_2C[iVar0 /*12*/].f_9)
		{
			if (func_105(vParam0, &(Global_24B2CE.f_2C[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_112(vector3 vParam0, float fParam1)//Position - 0x549C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_24B2CE.f_2C[iVar0 /*12*/].f_9)
		{
			if (func_105(vParam0, &(Global_24B2CE.f_2C[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_113(int iParam0, bool bParam1)//Position - 0x54E3
{
	if (Global_1406BF != 0)
	{
		return func_114(iParam0) != 0;
	}
	return func_93(iParam0, bParam1);
}

int func_114(int iParam0)//Position - 0x5509
{
	if (func_6(iParam0, 0, 1))
	{
		return Global_24FB5C[iParam0 /*406*/].f_1;
	}
	return 0;
}

int func_115(vector3 vParam0, var uParam1)//Position - 0x552B
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = -1;
	fVar2 = 999999.9f;
	if (Global_24B2CE.f_8C4 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_24B2CE.f_8C4)
		{
			fVar3 = SYSTEM::VDIST(Global_24B2CE.f_8C5[iVar0 /*4*/], vParam0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == -1)
		{
			*uParam1 = { Global_24B2CE.f_8C5[iVar1 /*4*/] };
			return 1;
		}
	}
	return 0;
}

int func_116(vector3 vParam0, vector3 vParam1, vector3 vParam2, bool bParam3, bool bParam4)//Position - 0x55A5
{
	func_117(&vParam1, &vParam2);
	if (((!vParam0.x >= vParam1.x || !vParam0.y >= vParam1.y) || !vParam0.x <= vParam2.x) || !vParam0.y <= vParam2.y)
	{
		return 0;
	}
	if (bParam3 && bParam4)
	{
		return 1;
	}
	else if (bParam3)
	{
		if (vParam0.z >= vParam1.z)
		{
			return 1;
		}
	}
	else if (bParam4)
	{
		if (vParam0.z <= vParam2.z)
		{
			return 1;
		}
	}
	else if (vParam0.z >= vParam1.z && vParam0.z <= vParam2.z)
	{
		return 1;
	}
	return 0;
}

void func_117(var uParam0, var uParam1)//Position - 0x5650
{
	var uVar0;
	
	if (*uParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *uParam0;
		*uParam0 = uVar0;
	}
	if (uParam0->f_1 > uParam1->f_1)
	{
		uVar0 = uParam1->f_1;
		uParam1->f_1 = uParam0->f_1;
		uParam0->f_1 = uVar0;
	}
	if (uParam0->f_2 > uParam1->f_2)
	{
		uVar0 = uParam1->f_2;
		uParam1->f_2 = uParam0->f_2;
		uParam0->f_2 = uVar0;
	}
}

int func_118(vector3 vParam0, vector3 vParam1, float fParam2)//Position - 0x56B2
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (vParam0.x > vParam1.x)
	{
		vVar1.x = vParam0.x;
		vVar0.x = vParam1.x;
	}
	else
	{
		vVar1.x = vParam1.x;
		vVar0.x = vParam0.x;
	}
	if (vParam0.y > vParam1.y)
	{
		vVar1.y = vParam0.y;
		vVar0.y = vParam1.y;
	}
	else
	{
		vVar1.y = vParam1.y;
		vVar0.y = vParam0.y;
	}
	if (vParam0.z > vParam1.z)
	{
		vVar1.z = vParam0.z;
		vVar0.z = vParam1.z;
	}
	else
	{
		vVar1.z = vParam1.z;
		vVar0.z = vParam0.z;
	}
	if (SYSTEM::VMAG(vVar1 - vVar0) > 100f)
	{
		return 1;
	}
	if (fParam2 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_119(float fParam0)//Position - 0x575D
{
	if (fParam0 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_120(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x5775
{
	vector3 vVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	
	if (Global_24B2CE.f_9A9.f_1 == 0 && Global_24B2CE.f_9A9 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (unk_0xC59E4613981C716D(&(Global_24B2CE.f_9A9.f_1)))
			{
				case 0:
					func_189(uParam1, uParam2);
					if (!Global_24B2CE.f_9A9.f_2)
					{
						if (uParam2->f_7 && Global_24B2CE.f_224.f_7 == 0)
						{
							*(uParam0[0 /*3*/]) = { *uParam1 };
							uParam0->f_10[0] = uParam1->f_3;
							return 1;
						}
						else
						{
							if (uParam1->f_15)
							{
								*(uParam0[0 /*3*/]) = { uParam1->f_12 };
							}
							else
							{
								*(uParam0[0 /*3*/]) = { Global_24B2CE.f_990 };
							}
							if (uParam1->f_5 && func_70(Global_24B2CE.f_1E2))
							{
								if (!Global_24B2CE.f_9A9.f_5)
								{
									Global_24B2CE.f_9A9.f_5 = 1;
								}
								else
								{
									func_71(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
								}
							}
							else
							{
								func_71(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
							}
							uParam0->f_10[0] = unk_0x55AEFCD285ECC0F2(0f, 360f);
							return 1;
						}
					}
					break;
				
				case 1:
					func_189(uParam1, uParam2);
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
		}
		else if (unk_0x5CBE37ADBC334A75())
		{
			if (!unk_0xED1BF24BE110D8F6())
			{
				if (unk_0x889916463BBF90C3())
				{
					func_189(uParam1, uParam2);
					Global_24B2CE.f_9A9.f_1 = unk_0x0C30CC1D72623F11();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				unk_0xA8AB1E14B86B6053();
				func_189(uParam1, uParam2);
				if (!Global_24B2CE.f_9A9.f_2)
				{
					Global_24B2CE.f_9A9.f_5 = 1;
					return 1;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	if (uParam1->f_5)
	{
		func_186(Global_24B2CE.f_224, &(Global_24B2CE.f_9A9.f_39), &(Global_24B2CE.f_9A9.f_5A));
	}
	if (uParam2->f_7 && !Global_24B2CE.f_9A9.f_4)
	{
		Global_24B2CE.f_9A9.f_4 = 1;
		func_128(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
	}
	iVar4 = 0;
	if (uParam1->f_5)
	{
		iVar5 = 64;
	}
	else
	{
		iVar5 = 32;
	}
	if (Global_24B2CE.f_9A9.f_1 > 0 || Global_24B2CE.f_9A9 > 0)
	{
		if (uParam1->f_5 || unk_0x5CBE37ADBC334A75())
		{
			iVar2 = 0;
			while (iVar2 < Global_24B2CE.f_9A9.f_1)
			{
				if (iVar4 < iVar5)
				{
					if (iVar2 <= Global_24B2CE.f_9A9.f_3)
					{
						iVar2 = Global_24B2CE.f_9A9.f_3 + 1;
					}
					if (iVar2 > (Global_24B2CE.f_9A9.f_1 - 1))
					{
						iVar2 = (Global_24B2CE.f_9A9.f_1 - 1);
					}
					if (iVar2 < 0)
					{
						iVar2 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						unk_0xBDF6A78EFF9F163B(iVar2, &vVar0, &fVar1);
						fVar1 = (fVar1 * 57.29578f);
					}
					else
					{
						unk_0x02504955C05BBA48(iVar2, &vVar0, &(vVar0.f_1), &(vVar0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar3 = unk_0x51075D30FF64563A(iVar2);
					}
					else
					{
						unk_0x73B66316C77A5550(iVar2, &iVar3);
					}
					func_128(vVar0, fVar1, uParam1, uParam2, 0, iVar3);
					iVar4++;
					Global_24B2CE.f_9A9.f_3 = iVar2;
				}
				else
				{
					return 0;
				}
				iVar2++;
			}
		}
		else
		{
			iVar2 = Global_24B2CE.f_9A9.f_1;
		}
		if (Global_24B2CE.f_9A9.f_1 == iVar2)
		{
			if (uParam1->f_5 && Global_24B2CE.f_B34)
			{
				func_122(&(Global_24B2CE.f_9A9.f_6[0 /*10*/]), &(Global_24B2CE.f_9A9.f_6[1 /*10*/]), &(Global_24B2CE.f_9A9.f_6[2 /*10*/]));
			}
			if (uParam1->f_5 && func_70(Global_24B2CE.f_1E2))
			{
				if (Global_24B2CE.f_9A9.f_2)
				{
					func_69(uParam0, &(Global_24B2CE.f_9A9.f_6));
					func_121(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_24B2CE.f_990 };
					func_71(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_10[0] = unk_0x55AEFCD285ECC0F2(0f, 360f);
					func_121(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_24B2CE.f_9A9.f_2)
			{
				func_69(uParam0, &(Global_24B2CE.f_9A9.f_6));
				func_121(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar2 = unk_0x491B2241281A03B7(0, Global_24B2CE.f_9A9.f_1);
				unk_0xBDF6A78EFF9F163B(iVar2, uParam0[0 /*3*/], &(uParam0->f_10[0]));
				if (!func_77(uParam0[0 /*3*/], 0))
				{
					uParam0->f_10[0] = (uParam0->f_10[0] * 57.29578f);
					func_121(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_24B2CE.f_990 };
					func_71(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_10[0] = unk_0x55AEFCD285ECC0F2(0f, 360f);
					func_121(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_24B2CE.f_990 };
				func_71(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_10[0] = unk_0x55AEFCD285ECC0F2(0f, 360f);
				func_121(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_24B2CE.f_990 };
		if (uParam1->f_5 && func_70(Global_24B2CE.f_1E2))
		{
			if (!Global_24B2CE.f_9A9.f_5)
			{
				Global_24B2CE.f_9A9.f_5 = 1;
			}
			else
			{
				func_71(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
			}
		}
		else
		{
			if (uParam1->f_F)
			{
				bVar6 = false;
			}
			else
			{
				bVar6 = true;
			}
			func_71(uParam0[0 /*3*/], 0, bVar6, 0, 0, uParam1, uParam2);
		}
		uParam0->f_10[0] = unk_0x55AEFCD285ECC0F2(0f, 360f);
		func_121(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

void func_121(vector3 vParam0)//Position - 0x5D3C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_24B2CE.f_A2F[(3 - iVar0) /*3*/] = { Global_24B2CE.f_A2F[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_24B2CE.f_A2F[0 /*3*/] = { vParam0 };
}

void func_122(var uParam0, var uParam1, var uParam2)//Position - 0x5D8C
{
	if (func_70(Global_24B2CE.f_1E2) && func_127() < 4096)
	{
		func_126(uParam0, 0f);
		func_126(uParam1, uParam0->f_2);
		func_126(uParam2, uParam1->f_2);
	}
	else
	{
		func_125(uParam0);
		func_124(uParam2, uParam0->f_4);
		func_123(uParam1, uParam0->f_4, uParam2->f_4);
	}
}

void func_123(var uParam0, vector3 vParam1, vector3 vParam2)//Position - 0x5DF1
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<10> Var5;
	
	fVar1 = -1f;
	Var5.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_24BE1E[iVar0 /*10*/] > 0)
		{
			fVar2 = SYSTEM::VDIST(Global_24BE1E[iVar0 /*10*/].f_4, vParam1);
			fVar3 = SYSTEM::VDIST(Global_24BE1E[iVar0 /*10*/].f_4, vParam2);
			fVar4 = (fVar2 + fVar3);
			fVar4 = (fVar4 * Global_24BE1E[iVar0 /*10*/].f_1);
			if (fVar4 > fVar1)
			{
				fVar1 = fVar4;
				Var5 = { Global_24BE1E[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var5 };
}

void func_124(var uParam0, vector3 vParam1)//Position - 0x5E90
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<10> Var3;
	
	fVar1 = -1f;
	Var3.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_24BE1E[iVar0 /*10*/] > 0)
		{
			fVar2 = SYSTEM::VDIST(Global_24BE1E[iVar0 /*10*/].f_4, vParam1);
			fVar2 = (fVar2 * Global_24BE1E[iVar0 /*10*/].f_1);
			if (fVar2 > fVar1)
			{
				fVar1 = fVar2;
				Var3 = { Global_24BE1E[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var3 };
}

void func_125(var uParam0)//Position - 0x5F12
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = -1f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_24BE1E[iVar0 /*10*/] > 0)
		{
			if (Global_24BE1E[iVar0 /*10*/].f_1 > fVar1)
			{
				fVar1 = Global_24BE1E[iVar0 /*10*/].f_1;
				Var2 = { Global_24BE1E[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

void func_126(var uParam0, float fParam1)//Position - 0x5F7F
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = 999999.9f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_24BE1E[iVar0 /*10*/] > 0)
		{
			if (Global_24BE1E[iVar0 /*10*/].f_2 < fVar1 && Global_24BE1E[iVar0 /*10*/].f_2 > fParam1)
			{
				fVar1 = Global_24BE1E[iVar0 /*10*/].f_2;
				Var2 = { Global_24BE1E[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

int func_127()//Position - 0x6002
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_24BE1E[iVar0 /*10*/] > iVar1)
		{
			iVar1 = Global_24BE1E[iVar0 /*10*/];
		}
		iVar0++;
	}
	return iVar1;
}

void func_128(vector3 vParam0, float fParam1, var uParam2, var uParam3, bool bParam4, int iParam5)//Position - 0x6039
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	var uVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	vector3 vVar12;
	bool bVar13;
	int iVar14;
	vector3 vVar15;
	vector3 vVar16;
	float fVar17;
	int iVar18;
	struct<10> Var19;
	bool bVar20;
	bool bVar21;
	
	iVar10 = 0;
	iVar8 = 0;
	bVar9 = false;
	if (uParam2->f_5)
	{
		if (Global_24B2CE.f_1E2 == 1)
		{
			if (unk_0x357058E632979E65((Global_24B2CE.f_1F9.f_2 - vParam0.z)) < 25f)
			{
				iVar8++;
			}
		}
		else
		{
			iVar8++;
		}
	}
	else
	{
		iVar8++;
	}
	if (uParam2->f_5)
	{
		if (func_183(unk_0xB5CEFD608600A09F()))
		{
			if (iParam5 == -1)
			{
				bVar9 = true;
			}
			else if (!iParam5 & 1 == 0)
			{
				bVar9 = true;
			}
		}
		else if (iParam5 == -1)
		{
			iVar8 += 2;
		}
		else if (!iParam5 & 1 == 0)
		{
			iVar8 += 2;
		}
	}
	else
	{
		iVar8 += 2;
	}
	if (uParam2->f_5 && uParam2->f_6)
	{
		if (!func_182(vParam0, 1084227584, 1123024896, 0))
		{
			iVar8 += 4;
		}
	}
	else
	{
		iVar8 += 4;
	}
	if (uParam2->f_5)
	{
		if (!unk_0x6A857E4D4E6BD499(unk_0xBC25C936A095B5BA(), vParam0, 65f))
		{
			iVar8 += 8;
			iVar8 += 16;
		}
		else if (!unk_0x6A857E4D4E6BD499(unk_0xBC25C936A095B5BA(), vParam0, 20f))
		{
			iVar8 += 8;
		}
	}
	else
	{
		iVar8 += 8;
		iVar8 += 16;
	}
	if (uParam2->f_5)
	{
		if (!func_181(vParam0, uParam3->f_5, 1, 1, 1, 1, 1, 1))
		{
			iVar8 += 32;
		}
	}
	else
	{
		iVar8 += 32;
	}
	bVar13 = true;
	iVar11 = 0;
	while (iVar11 < 2)
	{
		if (SYSTEM::VMAG(uParam3->f_D[iVar11 /*3*/]) > 0f)
		{
			if (!SYSTEM::VDIST(vParam0, uParam3->f_D[iVar11 /*3*/]) > uParam3->f_14[iVar11])
			{
				bVar13 = false;
			}
		}
		iVar11++;
	}
	if (bVar13)
	{
		if ((SYSTEM::VMAG(uParam3->f_17) > 0f && SYSTEM::VMAG(uParam3->f_1A) > 0f) && uParam3->f_1D > 0f)
		{
			if (unk_0x7352105EC4D7541F(vParam0, uParam3->f_17, uParam3->f_1A, uParam3->f_1D, 0, 1))
			{
				bVar13 = false;
			}
		}
	}
	if (bVar13)
	{
		iVar8 += 256;
	}
	if (uParam2->f_5)
	{
		if (func_175(vParam0, fParam1, uParam2->f_F, func_180(1), uParam2->f_10, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
		{
			iVar8 += 64;
			iVar8 += 128;
		}
		else
		{
			iVar10 = Global_24B2CE.f_3;
		}
	}
	else if (!func_172(vParam0, 25f, unk_0xB5CEFD608600A09F(), 1, 1))
	{
		if (uParam2->f_F)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_168(vParam0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar8 += 128;
			iVar8 += 64;
		}
		else if (!func_168(vParam0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar8 += 64;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_24B2CE.f_2B1)
		{
			vVar12 = { Global_24B2CE.f_1F9 };
			if (Global_24B2CE.f_1E2 == 26)
			{
				vVar12 = { Global_24B2CE.f_224.f_12 };
			}
			if (!func_98(vParam0, 0.5f))
			{
				if (func_109(vVar12))
				{
					if (!func_108(&vParam0, 0, 0, 0, 1) && !func_167(&vParam0, 0))
					{
						iVar8 += 512;
					}
				}
				else if (!func_167(&vParam0, 0))
				{
					iVar8 += 512;
				}
			}
		}
		else
		{
			iVar8 += 512;
		}
	}
	else if (!func_166(vParam0, 2.5f, 3))
	{
		iVar8 += 512;
	}
	if (uParam2->f_5)
	{
		if (!(func_165(unk_0xB5CEFD608600A09F()) && func_164(unk_0xB5CEFD608600A09F())))
		{
			if (!func_163(&vParam0, &(Global_24B2CE.f_9A9.f_5A), 0, 1065353216))
			{
				iVar8 += 1024;
			}
		}
		else
		{
			iVar8 += 1024;
		}
	}
	else
	{
		iVar8 += 1024;
	}
	if (uParam2->f_5)
	{
		if (!func_164(unk_0xB5CEFD608600A09F()))
		{
			if (!func_162(vParam0, &(Global_24B2CE.f_9A9.f_39), &(Global_24B2CE.f_9A9.f_5A), 1073741824))
			{
				iVar8 += 2048;
			}
		}
		else
		{
			iVar8 += 2048;
		}
	}
	else
	{
		iVar8 += 2048;
	}
	if (func_161(vParam0))
	{
		if (uParam2->f_5)
		{
			if (func_70(Global_24B2CE.f_1E2))
			{
				if (func_112(vParam0, 0.01f))
				{
					iVar8 += 4096;
				}
			}
			else
			{
				iVar8 += 4096;
			}
		}
		else
		{
			iVar8 += 4096;
		}
	}
	if (uParam2->f_5)
	{
		if (func_160(vParam0))
		{
			iVar8 += 8192;
		}
	}
	else
	{
		iVar8 += 8192;
	}
	if (!Global_24B2CE.f_2C.f_37)
	{
		iVar8 += 16384;
	}
	else if (uParam2->f_5)
	{
		if (!iParam5 & 1 == 0)
		{
			if (unk_0xBF697FA7422C0621(unk_0x9911032C958CE1B0(vParam0)))
			{
				iVar8 += 16384;
			}
		}
	}
	else if (!iParam5 & 2 == 0)
	{
		if (unk_0xBF697FA7422C0621(unk_0x9911032C958CE1B0(vParam0)))
		{
			iVar8 += 16384;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_24B2CE.f_2B1)
		{
			if (!func_99(&vParam0, 0, 0))
			{
				iVar8 = (iVar8 + 32768);
			}
		}
		else
		{
			iVar8 = (iVar8 + 32768);
		}
	}
	else
	{
		iVar8 = (iVar8 + 32768);
	}
	if (!func_77(&vParam0, 0))
	{
		iVar8 = (iVar8 + 65536);
	}
	else
	{
		iVar14 = func_111(vParam0, 1008981770);
		if (iVar14 > -1)
		{
			func_159(vParam0, &vVar15, &vVar16, &fVar17);
			if (!func_154(&(Global_24B2CE.f_2C[iVar14 /*12*/]), vVar15, vVar16, fVar17))
			{
				iVar8 = -1;
			}
		}
		else
		{
			iVar8 = -1;
		}
	}
	if (func_83(vParam0, 1056964608))
	{
		iVar8 = -1;
	}
	if (uParam3->f_21)
	{
		if (unk_0xAE7193AAF1ECF1DB(vParam0.x, vParam0.y, (vParam0.z + 1f), 0.3f))
		{
			iVar8 = -1;
		}
	}
	if (uParam3->f_22)
	{
		if (unk_0x38B362A95EA24163(vParam0.x, vParam0.y, (vParam0.z + 1f), 1f))
		{
			iVar8 = -1;
		}
	}
	if (uParam2->f_5)
	{
	}
	else if (func_153(vParam0, 1, 0, uParam2->f_F, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar8 = 0;
	}
	Var19.f_2 = 1176256410;
	bVar20 = false;
	bVar21 = false;
	if (Global_24B2CE.f_B34 && uParam2->f_5)
	{
		if (iVar8 > 0)
		{
			if (bParam4)
			{
				uParam3->f_4 = 0;
				bVar4 = false;
			}
			else
			{
				bVar4 = true;
			}
			if (uParam2->f_15)
			{
				fVar0 = func_145(vParam0, uParam2->f_12, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			else
			{
				fVar0 = func_145(vParam0, Global_24B2CE.f_990, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			if (bVar9)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (func_70(Global_24B2CE.f_1E2) && iVar8 < 4096)
			{
				Var19.f_2 = func_143(vParam0);
			}
			uVar7 = func_134(vParam0, 1, 0, 0, 0);
			Var19.f_4 = { vParam0 };
			Var19.f_7 = fParam1;
			Var19 = iVar8;
			Var19.f_1 = fVar0;
			Var19.f_9 = uVar7;
			func_133(Var19);
			Global_24B2CE.f_9A9.f_2 = 1;
		}
	}
	else
	{
		iVar18 = 0;
		while (iVar18 < 5)
		{
			if (iVar8 >= Global_24B2CE.f_9A9.f_6[iVar18 /*10*/])
			{
				if (uParam2->f_5)
				{
					if (!bVar20)
					{
						if (bParam4)
						{
							uParam3->f_4 = 0;
							bVar4 = false;
						}
						else
						{
							bVar4 = true;
						}
						if (uParam2->f_15)
						{
							fVar0 = func_145(vParam0, uParam2->f_12, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						else
						{
							fVar0 = func_145(vParam0, Global_24B2CE.f_990, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						if (bVar9)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar20 = true;
					}
					if ((func_70(Global_24B2CE.f_1E2) && iVar8 == Global_24B2CE.f_9A9.f_6[iVar18 /*10*/]) && iVar8 < 4096)
					{
						if (!bVar21)
						{
							fVar2 = func_143(vParam0);
							bVar21 = true;
						}
						if (fVar2 < Global_24B2CE.f_9A9.f_6[iVar18 /*10*/].f_2)
						{
							Var19.f_4 = { vParam0 };
							Var19.f_7 = fParam1;
							Var19 = iVar8;
							Var19.f_1 = fVar0;
							Var19.f_2 = fVar2;
							func_132(Var19, iVar18);
							Global_24B2CE.f_9A9.f_2 = 1;
							return;
						}
					}
					else if (iVar8 > Global_24B2CE.f_9A9.f_6[iVar18 /*10*/] || (iVar8 == Global_24B2CE.f_9A9.f_6[iVar18 /*10*/] && fVar0 > Global_24B2CE.f_9A9.f_6[iVar18 /*10*/].f_1))
					{
						Var19.f_4 = { vParam0 };
						Var19.f_7 = fParam1;
						Var19 = iVar8;
						Var19.f_1 = fVar0;
						func_132(Var19, iVar18);
						Global_24B2CE.f_9A9.f_2 = 1;
						return;
					}
				}
				else
				{
					if (!bVar20)
					{
						if (uParam2->f_F)
						{
							fVar1 = 3.5f;
						}
						else
						{
							fVar1 = 1f;
						}
						fVar5 = func_130(vParam0, fVar1, 1, 1, 0, -1, 1);
						fVar6 = func_134(vParam0, 1, 1, 1, 1);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = func_129(fVar5, 0f, 80f, 160f, 1f, 1.2f);
						}
						else
						{
							fVar3 = func_129(fVar6, 0f, 80f, 160f, 0f, 0.2f);
						}
						bVar20 = true;
					}
					if (iVar8 > Global_24B2CE.f_9A9.f_6[iVar18 /*10*/] || (iVar8 == Global_24B2CE.f_9A9.f_6[iVar18 /*10*/] && fVar3 > Global_24B2CE.f_9A9.f_6[iVar18 /*10*/].f_3))
					{
						Var19.f_4 = { vParam0 };
						Var19.f_7 = fParam1;
						Var19 = iVar8;
						Var19.f_3 = fVar3;
						func_132(Var19, iVar18);
						Global_24B2CE.f_9A9.f_2 = 1;
						return;
					}
				}
			}
			iVar18++;
		}
	}
}

float func_129(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0x69F4
{
	float fVar0;
	
	if (fParam1 >= fParam3)
	{
		fParam1 = (fParam3 * 0.5f);
	}
	if (fParam0 < fParam1)
	{
		fParam0 = fParam1;
	}
	if (fParam0 > fParam3)
	{
		fParam0 = fParam3;
	}
	if (fParam2 < fParam3 && fParam2 > fParam1)
	{
		if (fParam0 < fParam2)
		{
			fVar0 = (fParam4 + ((1f - fParam4) - ((1f - fParam4) * ((fParam2 - fParam0) / (fParam2 - fParam1)))));
		}
		else
		{
			fVar0 = (fParam5 + ((1f - fParam5) - ((1f - fParam5) * ((fParam0 - fParam2) / (fParam3 - fParam2)))));
		}
	}
	else
	{
		fVar0 = (fParam4 + (((fParam0 - fParam1) / (fParam3 - fParam1)) * (fParam5 - fParam4)));
	}
	return fVar0;
}

float func_130(vector3 vParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x6A92
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	
	bVar2 = false;
	fVar3 = 1E+13f;
	if (iParam2 && !bParam4)
	{
		if (func_6(unk_0xB5CEFD608600A09F(), 1, 1))
		{
			if (!unk_0x17FAADF9916EF741())
			{
				if (unk_0x33CC9445B2DF9387(vParam0, fParam1))
				{
					fVar4 = SYSTEM::VDIST2(vParam0, unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0));
					if (fVar4 < fVar3)
					{
						fVar3 = fVar4;
						bVar2 = true;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_6(iVar1, 1, 1))
		{
			if (!func_194(iVar1, 0) && unk_0x75206900382D1E30(unk_0xB5CEFD608600A09F(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0xB5CEFD608600A09F()))
				{
					if (func_131(iVar1) || !bParam6)
					{
						if (!bParam4)
						{
							if ((iParam3 || (iParam3 == 0 && unk_0x343CB262BF0CDF5A(iVar1) != unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()))) || unk_0x343CB262BF0CDF5A(iVar1) == -1)
							{
								if (unk_0xCFC6F6FA0A38CF65(iVar1, vParam0, fParam1))
								{
									fVar4 = SYSTEM::VDIST2(vParam0, unk_0x541C2AEF053615BC(unk_0xA95CF30C72EB526E(iVar1), 0));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (unk_0x343CB262BF0CDF5A(iVar1) != iParam5 || unk_0x343CB262BF0CDF5A(iVar1) == -1)
						{
							if (unk_0xCFC6F6FA0A38CF65(iVar1, vParam0, fParam1))
							{
								fVar4 = SYSTEM::VDIST2(vParam0, unk_0x541C2AEF053615BC(unk_0xA95CF30C72EB526E(iVar1), 0));
								if (fVar4 < fVar3)
								{
									fVar3 = fVar4;
									bVar2 = true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		return SYSTEM::SQRT(fVar3);
	}
	return -1f;
}

int func_131(int iParam0)//Position - 0x6C29
{
	if (unk_0xE904009319A7A43E(unk_0xA95CF30C72EB526E(iParam0)) || Global_24FB5C[iParam0 /*406*/].f_F1)
	{
		return 1;
	}
	return 0;
}

void func_132(struct<10> Param0, int iParam1)//Position - 0x6C54
{
	struct<10> Var0;
	
	Var0.f_2 = 1176256410;
	Var0 = { Global_24B2CE.f_9A9.f_6[iParam1 /*10*/] };
	Global_24B2CE.f_9A9.f_6[iParam1 /*10*/] = { Param0 };
	if (iParam1 < 4)
	{
		func_132(Var0, iParam1 + 1);
	}
}

void func_133(struct<10> Param0)//Position - 0x6CA6
{
	int iVar0;
	struct<10> Var1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	Var1.f_2 = 1176256410;
	iVar2 = func_127();
	if (Param0 > iVar2)
	{
		iVar2 = Param0;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_24BE1E[iVar0 /*10*/] < iVar2)
		{
			Global_24BE1E[iVar0 /*10*/] = { Var1 };
		}
		iVar0++;
	}
	if (Param0 < iVar2)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_24BE1E[iVar0 /*10*/] == 0)
		{
			Global_24BE1E[iVar0 /*10*/] = { Param0 };
			return;
		}
		iVar0++;
	}
	fVar3 = 9999.9f;
	iVar4 = -1;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_24BE1E[iVar0 /*10*/] > 0)
		{
			if (Global_24BE1E[iVar0 /*10*/].f_1 < fVar3)
			{
				fVar3 = Global_24BE1E[iVar0 /*10*/].f_1;
				iVar4 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar4 > -1)
	{
		Global_24BE1E[iVar4 /*10*/] = { Param0 };
	}
}

float func_134(vector3 vParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)//Position - 0x6D9A
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar6;
	int iVar7;
	
	fVar3 = 999999.9f;
	bVar4 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar7 = iVar0;
		if (func_6(iVar7, 1, 1))
		{
			if (!iVar7 == unk_0xB5CEFD608600A09F() || iParam3 == 1)
			{
				bVar4 = false;
				if (bParam1)
				{
					if (func_135(iVar7))
					{
						bVar4 = true;
					}
				}
				if (bParam2)
				{
					if (unk_0x343CB262BF0CDF5A(iVar7) == unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()))
					{
						if (!unk_0x343CB262BF0CDF5A(iVar7) == -1 || !func_113(unk_0xB5CEFD608600A09F(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (unk_0x75206900382D1E30(unk_0xB5CEFD608600A09F(), iVar7) || !bParam4)
					{
						if (func_131(iVar7))
						{
							vVar5 = { func_8(iVar7) };
							if (!iVar7 == unk_0xB5CEFD608600A09F())
							{
								vVar6 = { unk_0xCCA038CFFE1C48BC(unk_0xA95CF30C72EB526E(iVar7)) };
							}
							else
							{
								vVar6 = { vVar5 };
							}
							if (!bParam4)
							{
								if (vVar5.z < -100f)
								{
									vVar5.z = vParam0.z;
								}
								if (vVar6.z < -100f)
								{
									vVar6.z = vParam0.z;
								}
							}
							fVar1 = unk_0xF0F2FC9DE291567F(vParam0, vVar5, true);
							fVar2 = unk_0xF0F2FC9DE291567F(vParam0, vVar6, true);
							if (fVar1 < fVar3)
							{
								fVar3 = fVar1;
							}
							if (fVar2 < fVar3)
							{
								fVar3 = fVar2;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return fVar3;
}

int func_135(int iParam0)//Position - 0x6EE6
{
	if (func_6(iParam0, 0, 1))
	{
		if (!func_141(iParam0))
		{
			if (unk_0x75206900382D1E30(unk_0xB5CEFD608600A09F(), iParam0))
			{
				if (!unk_0x343CB262BF0CDF5A(iParam0) == unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()))
				{
					if (func_93(unk_0xB5CEFD608600A09F(), 1))
					{
						if (!func_140(unk_0x343CB262BF0CDF5A(iParam0), unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (unk_0x343CB262BF0CDF5A(iParam0) == -1 && unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()) == -1)
				{
					if (!func_93(unk_0xB5CEFD608600A09F(), 1))
					{
						if (!func_136(iParam0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_136(int iParam0)//Position - 0x6F91
{
	if (func_139(unk_0xB5CEFD608600A09F(), iParam0))
	{
		return 1;
	}
	Global_26210D = { func_138(iParam0) };
	if (unk_0xE140B7178EA00705(&Global_26210D))
	{
		return 1;
	}
	if (func_137(unk_0xB5CEFD608600A09F(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_137(int iParam0, int iParam1)//Position - 0x6FD8
{
	int iVar0;
	
	iVar0 = func_12(iParam0);
	if (!iVar0 == func_13())
	{
		if (iVar0 == func_12(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_138(int iParam0)//Position - 0x7003
{
	struct<13> Var0;
	
	unk_0xB7DBA2C6D2C3C41A(iParam0, &Var0, 13);
	return Var0;
}

int func_139(int iParam0, int iParam1)//Position - 0x701A
{
	if (unk_0xB9ACC1154C623363())
	{
		Global_26210D = { func_138(iParam0) };
		Global_26211A = { func_138(iParam1) };
		if (unk_0xD7F4457CECF10121(&Global_26210D))
		{
			if (unk_0xD7F4457CECF10121(&Global_26211A))
			{
				unk_0x24723877416AAAFC(&Global_2620C7, 35, &Global_26210D);
				unk_0x24723877416AAAFC(&Global_2620EA, 35, &Global_26211A);
				if (Global_2620C7 == Global_2620EA)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_140(int iParam0, int iParam1, int iParam2)//Position - 0x7087
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 0);
				
				case 1:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 1);
				
				case 2:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 2);
				
				case 3:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 4);
				
				case 1:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 5);
				
				case 2:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 6);
				
				case 3:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 8);
				
				case 1:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 9);
				
				case 2:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 10);
				
				case 3:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 12);
				
				case 1:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 13);
				
				case 2:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 14);
				
				case 3:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_141(int iParam0)//Position - 0x7252
{
	if (func_194(iParam0, 0))
	{
		return 1;
	}
	if (func_142())
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

bool func_142()//Position - 0x7294
{
	return unk_0xFA30DFD0084E92FE(Global_240006, 3);
}

float func_143(vector3 vParam0)//Position - 0x72A5
{
	var uVar0;
	
	return func_144(vParam0, &(Global_24B2CE.f_2C), &uVar0);
}

float func_144(vector3 vParam0, var uParam1, var uParam2)//Position - 0x72BD
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = -1;
	fVar2 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if ((uParam1[iVar0 /*12*/])->f_9)
		{
			fVar1 = 0f;
			switch ((uParam1[iVar0 /*12*/])->f_A)
			{
				case 0:
					fVar1 = SYSTEM::VDIST(*(uParam1[iVar0 /*12*/]), vParam0);
					fVar1 = (fVar1 - ((uParam1[iVar0 /*12*/])->f_6 + (IntToFloat(Global_24B2CE.f_A9A) * (uParam1[iVar0 /*12*/])->f_8)));
					break;
				
				case 1:
				case 2:
					if (vParam0.x < (*uParam1)[iVar0 /*12*/])
					{
						fVar1 = (fVar1 + ((*uParam1)[iVar0 /*12*/] - vParam0.x));
					}
					else if (vParam0.x > (uParam1[iVar0 /*12*/])->f_3)
					{
						fVar1 = (fVar1 + (vParam0.x - (uParam1[iVar0 /*12*/])->f_3));
					}
					if (vParam0.y < (uParam1[iVar0 /*12*/])->f_1)
					{
						fVar1 = (fVar1 + ((uParam1[iVar0 /*12*/])->f_1 - vParam0.y));
					}
					else if (vParam0.y > (uParam1[iVar0 /*12*/])->f_3.f_1)
					{
						fVar1 = (fVar1 + (vParam0.y - (uParam1[iVar0 /*12*/])->f_3.f_1));
					}
					if (vParam0.z < (uParam1[iVar0 /*12*/])->f_2)
					{
						fVar1 = (fVar1 + ((uParam1[iVar0 /*12*/])->f_2 - vParam0.z));
					}
					else if (vParam0.z > (uParam1[iVar0 /*12*/])->f_3.f_2)
					{
						fVar1 = (fVar1 + (vParam0.z - (uParam1[iVar0 /*12*/])->f_3.f_2));
					}
					break;
			}
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	if (fVar2 < 0f)
	{
		fVar2 = 0f;
	}
	*uParam2 = iVar3;
	return fVar2;
}

float func_145(vector3 vParam0, vector3 vParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, var uParam6)//Position - 0x7439
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	fVar1 = 1f;
	if (iParam5 > 0)
	{
		fVar1 = (SYSTEM::TO_FLOAT(iParam5) / SYSTEM::TO_FLOAT(8));
	}
	if (bParam2)
	{
		fVar0 = func_129(SYSTEM::VDIST(vParam0, vParam1), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	*uParam6 = 1E+07f;
	fVar4 = func_134(vParam0, 1, 0, 0, 1);
	fVar0 = func_129(fVar4, 0f, func_152(), func_150(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	fVar4 = func_148(vParam0);
	fVar0 = func_129(fVar4, 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	fVar5 = 100f;
	if (unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()) == -1 && !func_113(unk_0xB5CEFD608600A09F(), 1))
	{
		fVar5 = 1f;
	}
	fVar4 = func_147(vParam0, unk_0xB5CEFD608600A09F(), 0);
	fVar0 = func_129(fVar4, 0f, 0f, fVar5, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	if (bParam3)
	{
		if (func_146(vParam0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = func_129(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + func_129(fVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam4)
	{
		fVar0 = func_129(SYSTEM::VDIST(Global_24B2CE.f_1F9, vParam0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

int func_146(vector3 vParam0, var uParam1, var uParam2)//Position - 0x761F
{
	vector3 vVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	iVar1 = unk_0x2E0AE46DCB1D97E5(vParam0, 1, &uVar3, &uVar2, 1, 3f, 0f);
	if (unk_0x7A0512982A9448C2(iVar1))
	{
		unk_0x2487DB62997A4150(iVar1, &vVar0);
		*uParam1 = SYSTEM::VDIST(vParam0.x, vParam0.y, 0f, vVar0.x, vVar0.y, 0f);
		*uParam2 = unk_0x357058E632979E65((vParam0.z - vVar0.z));
		return 1;
	}
	return 0;
}

float func_147(vector3 vParam0, int iParam1, int iParam2)//Position - 0x7678
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 999999.9f;
	if (func_6(iParam1, 0, 1))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			if (!iParam1 == iVar2 || iParam2 == 1)
			{
				iVar3 = iVar2;
				if (func_6(iVar3, 0, 1))
				{
					if (unk_0x343CB262BF0CDF5A(iVar3) != unk_0x343CB262BF0CDF5A(iParam1) || (unk_0x343CB262BF0CDF5A(iVar3) == -1 && unk_0x343CB262BF0CDF5A(iParam1) == -1))
					{
						if (Global_24E35D.f_105[iVar2])
						{
							fVar1 = SYSTEM::VDIST(Global_24E35D.f_83[iVar2 /*3*/], vParam0);
							if (fVar1 < fVar0)
							{
								fVar0 = fVar1;
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	return fVar0;
}

float func_148(vector3 vParam0)//Position - 0x7724
{
	float fVar0;
	float fVar1;
	int iVar2;
	vector3 vVar3;
	var uVar4[32];
	int iVar5;
	
	iVar5 = unk_0x252B0CBDBF5803ED(unk_0xBC25C936A095B5BA(), &uVar4, -1);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar5)
	{
		if (unk_0x724D816EA203A79E(uVar4[iVar2]))
		{
			if (!unk_0x1D403DFADBC2DE3C(uVar4[iVar2], 0))
			{
				if (func_149(uVar4[iVar2]))
				{
					vVar3 = { unk_0x541C2AEF053615BC(uVar4[iVar2], 1) };
					fVar1 = unk_0xF0F2FC9DE291567F(vParam0, vVar3, true);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
					}
				}
			}
		}
		iVar2++;
	}
	return fVar0;
}

int func_149(int iParam0)//Position - 0x77B1
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x84788C4CA5E15BDC(iParam0);
	switch (unk_0xF9E3B31053F43360(iVar0, 1862763509))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (unk_0x4EE7377FBE72B4BC(Global_180770[unk_0xB5CEFD608600A09F()]))
	{
		switch (unk_0xF9E3B31053F43360(iVar0, Global_180770[unk_0xB5CEFD608600A09F()]))
		{
			case 3:
			case 5:
				return 1;
				break;
			}
	}
	if (Global_18402B[unk_0xB5CEFD608600A09F() /*770*/] == 0)
	{
		iVar1 = unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F());
		if (iVar1 > -1 && iVar1 < 4)
		{
			if (unk_0x4EE7377FBE72B4BC(Global_18064F[iVar1]))
			{
				switch (unk_0xF9E3B31053F43360(iVar0, Global_18064F[iVar1]))
				{
					case 3:
					case 5:
						return 1;
						break;
					}
				}
			}
	}
	return 0;
}

float func_150()//Position - 0x787C
{
	if (func_151())
	{
		if ((unk_0xA19D269B4B5A1532(Global_24B2CE.f_2C.f_43) || unk_0x8C1A6E7D5F410F4A(Global_24B2CE.f_2C.f_43)) || Global_24B2CE.f_2C.f_43 == joaat("rhino"))
		{
			return 640f;
		}
		else
		{
			return 320f;
		}
	}
	return 160f;
}

int func_151()//Position - 0x78D8
{
	if (Global_24B2CE.f_2C.f_41 && !Global_24B2CE.f_2C.f_12D)
	{
		if (!func_141(unk_0xB5CEFD608600A09F()))
		{
			return 1;
		}
	}
	return 0;
}

float func_152()//Position - 0x790E
{
	if (func_151())
	{
		if ((unk_0xA19D269B4B5A1532(Global_24B2CE.f_2C.f_43) || unk_0x8C1A6E7D5F410F4A(Global_24B2CE.f_2C.f_43)) || Global_24B2CE.f_2C.f_43 == joaat("rhino"))
		{
			return 320f;
		}
		else
		{
			return 160f;
		}
	}
	return 80f;
}

int func_153(vector3 vParam0, int iParam1, int iParam2, bool bParam3, int iParam4, float fParam5, float fParam6, float fParam7)//Position - 0x796A
{
	float fVar0;
	
	fVar0 = iParam4;
	if (bParam3)
	{
		fVar0 = fParam5;
	}
	if ((((fParam5 > 0f && unk_0x38B362A95EA24163(vParam0, fParam5)) || (fVar0 > 0f && unk_0xAE7193AAF1ECF1DB(vParam0, fVar0))) || ((iParam2 == 1 && fParam6 > 0f) && unk_0x85BF1D9693A8E47F(vParam0, fParam6, 0))) || ((iParam1 == 1 && fParam7 > 0f) && unk_0x85BF1D9693A8E47F(vParam0, fParam7, 1)))
	{
		return 1;
	}
	return 0;
}

int func_154(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3)//Position - 0x79F9
{
	switch (uParam0->f_A)
	{
		case 0:
			if (func_158(*uParam0, uParam0->f_6, vParam1, vParam2, fParam3))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_157(*uParam0, uParam0->f_3, vParam1, vParam2, fParam3))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_155(*uParam0, uParam0->f_3, uParam0->f_6, vParam1, vParam2, fParam3))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_155(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, vector3 vParam4, float fParam5)//Position - 0x7A85
{
	vector3 vVar0[8];
	int iVar1;
	
	func_156(vParam0, vParam1, fParam2, &vVar0);
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (!unk_0x7352105EC4D7541F(vVar0[iVar1 /*3*/], vParam3, vParam4, fParam5, 0, 1))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

void func_156(vector3 vParam0, vector3 vParam1, float fParam2, var uParam3)//Position - 0x7AD7
{
	vector3 vVar0;
	vector3 vVar1;
	var uVar2;
	var uVar3;
	
	if (vParam0.z == vParam1.z)
	{
		vParam1.z = (vParam1.z + 0.01f);
	}
	vVar0 = { vParam0 - vParam1 };
	vVar1 = { func_80(vVar0, vVar0.x, vVar0.y, 0f) };
	vVar1 = { vVar1 / FtoV(SYSTEM::VMAG(vVar1)) };
	vVar1 = { vVar1 * FtoV((fParam2 * 0.5f)) };
	if (vParam0.z > vParam1.z)
	{
		uVar2 = vParam1.z;
		uVar3 = vParam0.z;
	}
	else
	{
		uVar2 = vParam0.z;
		uVar3 = vParam1.z;
	}
	*(uParam3[0 /*3*/]) = { Vector(uVar2, vParam0.y, vParam0.x) + vVar1 };
	*(uParam3[1 /*3*/]) = { Vector(uVar2, vParam0.y, vParam0.x) - vVar1 };
	*(uParam3[2 /*3*/]) = { Vector(uVar3, vParam0.y, vParam0.x) - vVar1 };
	*(uParam3[3 /*3*/]) = { Vector(uVar3, vParam0.y, vParam0.x) + vVar1 };
	*(uParam3[4 /*3*/]) = { Vector(uVar2, vParam1.y, vParam1.x) + vVar1 };
	*(uParam3[5 /*3*/]) = { Vector(uVar2, vParam1.y, vParam1.x) - vVar1 };
	*(uParam3[6 /*3*/]) = { Vector(uVar3, vParam1.y, vParam1.x) - vVar1 };
	*(uParam3[7 /*3*/]) = { Vector(uVar3, vParam1.y, vParam1.x) + vVar1 };
}

int func_157(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, float fParam4)//Position - 0x7C04
{
	vector3 vVar0[8];
	int iVar1;
	
	vVar0[0 /*3*/] = { vParam0.x, vParam0.y, vParam0.z };
	vVar0[1 /*3*/] = { vParam0.x, vParam0.y, vParam1.z };
	vVar0[2 /*3*/] = { vParam0.x, vParam1.y, vParam1.z };
	vVar0[3 /*3*/] = { vParam0.x, vParam1.y, vParam0.z };
	vVar0[4 /*3*/] = { vParam1.x, vParam0.y, vParam0.z };
	vVar0[5 /*3*/] = { vParam1.x, vParam0.y, vParam1.z };
	vVar0[6 /*3*/] = { vParam1.x, vParam1.y, vParam1.z };
	vVar0[7 /*3*/] = { vParam1.x, vParam1.y, vParam0.z };
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (!unk_0x7352105EC4D7541F(vVar0[iVar1 /*3*/], vParam2, vParam3, fParam4, 0, 1))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

int func_158(vector3 vParam0, float fParam1, vector3 vParam2, vector3 vParam3, float fParam4)//Position - 0x7CCE
{
	vector3 vVar0[4];
	int iVar1;
	
	vVar0[0 /*3*/] = { vParam0 + Vector(0f, fParam1, 0f) };
	vVar0[1 /*3*/] = { vParam0 + Vector(0f, (-1f * fParam1), 0f) };
	vVar0[2 /*3*/] = { vParam0 + Vector(0f, 0f, fParam1) };
	vVar0[3 /*3*/] = { vParam0 + Vector(0f, 0f, (-1f * fParam1)) };
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (!unk_0x7352105EC4D7541F(vVar0[iVar1 /*3*/], vParam2, vParam3, fParam4, 0, 1))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

void func_159(vector3 vParam0, var uParam1, var uParam2, var uParam3)//Position - 0x7D52
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	
	vVar1 = { vParam0 };
	iVar2 = func_82(vVar1);
	iVar0 = 0;
	while (iVar0 < Global_24CACB[iVar2])
	{
		if (func_81(vVar1, &(Global_24C653[iVar2 /*127*/][iVar0 /*7*/])))
		{
			*uParam1 = { Global_24C653[iVar2 /*127*/][iVar0 /*7*/] };
			*uParam2 = { Global_24C653[iVar2 /*127*/][iVar0 /*7*/].f_3 };
			*uParam3 = Global_24C653[iVar2 /*127*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_24CACB[8])
	{
		if (func_81(vVar1, &(Global_24C653[8 /*127*/][iVar0 /*7*/])))
		{
			*uParam1 = { Global_24C653[8 /*127*/][iVar0 /*7*/] };
			*uParam2 = { Global_24C653[8 /*127*/][iVar0 /*7*/].f_3 };
			*uParam3 = Global_24C653[8 /*127*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
}

int func_160(vector3 vParam0)//Position - 0x7E40
{
	int iVar0;
	int iVar1;
	
	if (Global_24B2CE.f_2C.f_37)
	{
		if (unk_0xBF697FA7422C0621(Global_24B2CE.f_2C.f_38))
		{
			if (!unk_0xB47B61546691E6E3(vParam0))
			{
				iVar0 = unk_0x9911032C958CE1B0(vParam0);
				if (unk_0xBF697FA7422C0621(iVar0))
				{
					iVar1 = unk_0x8481E9D8CEA242E2(iVar0);
					if (!iVar1 == Global_24B2CE.f_2C.f_39)
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
		}
	}
	return 1;
}

int func_161(vector3 vParam0)//Position - 0x7EAB
{
	switch (Global_24B2CE.f_9A5)
	{
		case 0:
			return func_197(vParam0, Global_24B2CE.f_990, Global_24B2CE.f_993, 0, 0);
			break;
		
		case 1:
			return func_116(vParam0, Global_24B2CE.f_99E, Global_24B2CE.f_9A1, 0, 0);
			break;
		
		case 2:
			return unk_0x7352105EC4D7541F(vParam0, Global_24B2CE.f_99E, Global_24B2CE.f_9A1, Global_24B2CE.f_9A4, 0, 1);
			break;
	}
	return 0;
}

int func_162(vector3 vParam0, var uParam1, var uParam2, float fParam3)//Position - 0x7F3D
{
	float fVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	
	fVar0 = 0f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < *uParam1)
	{
		fVar0 = ((uParam1[iVar1 /*4*/])->f_3 + fParam3);
		if (SYSTEM::VDIST(*(uParam1[iVar1 /*4*/]), vParam0) < fVar0)
		{
			return 1;
		}
		iVar1++;
	}
	vVar2 = { 0f, 0f, 0f };
	vVar3 = { 0f, 0f, 0f };
	fVar4 = 0f;
	iVar1 = 0;
	while (iVar1 < *uParam2)
	{
		vVar2 = { *(uParam2[iVar1 /*10*/]) };
		vVar3 = { (uParam2[iVar1 /*10*/])->f_3 };
		fVar4 = (uParam2[iVar1 /*10*/])->f_6;
		if (unk_0x7352105EC4D7541F(vParam0, vVar2, vVar3, fVar4, 0, 1))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_163(var uParam0, var uParam1, bool bParam2, float fParam3)//Position - 0x7FEB
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (SYSTEM::VDIST((uParam1[iVar0 /*10*/])->f_7, *uParam0) < (80f * fParam3))
		{
			if (bParam2)
			{
				vVar1 = { *uParam0 };
				func_97(&vVar1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949, 0, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_164(int iParam0)//Position - 0x805F
{
	switch (Global_1406BF)
	{
		case 0:
			if (!func_28(iParam0))
			{
				if (Global_18402B[iParam0 /*770*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_165(int iParam0)//Position - 0x8095
{
	if (func_93(iParam0, 1))
	{
		if (Global_18402B[iParam0 /*770*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_166(vector3 vParam0, float fParam1, int iParam2)//Position - 0x80B9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (SYSTEM::VDIST2(Global_24B2CE.f_A2F[iVar0 /*3*/], vParam0) < (fParam1 * fParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_167(var uParam0, bool bParam1)//Position - 0x80F7
{
	var uVar0;
	vector3 vVar1;
	float fVar2;
	
	if (func_100(*uParam0))
	{
		if (bParam1)
		{
			vVar1 = { *uParam0 };
			fVar2 = unk_0x55AEFCD285ECC0F2(0.01f, 360f);
			func_97(&vVar1, Global_24B2CE.f_247, Global_24B2CE.f_24A, 1036831949, 0, fVar2);
			if (func_104(vVar1, &uVar0) || func_100(vVar1))
			{
				vVar1 = { *uParam0 };
				func_97(&vVar1, Global_24B2CE.f_247, Global_24B2CE.f_24A, 1036831949, 1, fVar2);
			}
			*uParam0 = { vVar1 };
		}
	}
	return 0;
}

int func_168(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)//Position - 0x818F
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_6(unk_0xB5CEFD608600A09F(), 1, 1))
		{
			if (!unk_0x17FAADF9916EF741())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0xF0F2FC9DE291567F(func_169(unk_0xB5CEFD608600A09F()), vParam0, true) <= (fVar2 + fParam1))
				{
					if (unk_0x33CC9445B2DF9387(vParam0, fParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_6(iVar1, 1, 1))
		{
			if (!func_194(iVar1, 0) && unk_0x75206900382D1E30(unk_0xB5CEFD608600A09F(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0xB5CEFD608600A09F()))
				{
					if ((func_131(iVar1) || !bParam8) && !Global_24FB5C[iVar1 /*406*/].f_FF)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!unk_0x343CB262BF0CDF5A(iVar1) == -1)
							{
								if (unk_0x343CB262BF0CDF5A(iVar1) == unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && unk_0x343CB262BF0CDF5A(iVar1) != unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()))) || unk_0x343CB262BF0CDF5A(iVar1) == -1)
							{
								if (unk_0xF0F2FC9DE291567F(func_169(iVar1), vParam0, true) <= (fVar2 + fParam1))
								{
									if (unk_0xCFC6F6FA0A38CF65(iVar1, vParam0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x343CB262BF0CDF5A(iVar1) != iParam6 || unk_0x343CB262BF0CDF5A(iVar1) == -1)
						{
							if (unk_0xF0F2FC9DE291567F(func_169(iVar1), vParam0, true) <= (fVar2 + fParam1))
							{
								if (unk_0xCFC6F6FA0A38CF65(iVar1, vParam0, fParam1))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_169(int iParam0)//Position - 0x8346
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_171() && Global_18402B[iVar0 /*770*/].f_2EA) && !func_170(Global_18402B[iVar0 /*770*/].f_2EB))
	{
		return Global_18402B[iVar0 /*770*/].f_2EB;
	}
	return func_8(iParam0);
}

int func_170(vector3 vParam0)//Position - 0x8399
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

var func_171()//Position - 0x83C3
{
	return Global_255A46.f_10;
}

int func_172(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)//Position - 0x83D1
{
	if (func_174(vParam0, fParam1, iParam2, iParam3, 0) || func_173(vParam0, iParam2, iParam4))
	{
		return 1;
	}
	return 0;
}

int func_173(vector3 vParam0, int iParam1, int iParam2)//Position - 0x8402
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam1 == iVar0 || iParam2 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (!Global_24E35D.f_1AB[iVar0 /*11*/][iVar1 /*5*/].f_4 == 0)
				{
					if (func_84(vParam0, Global_24E35D.f_1AB[iVar0 /*11*/][iVar1 /*5*/], Global_24E35D.f_1AB[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_24E35D.f_1AB[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949))
					{
						if (func_6(iVar2, 0, 1) && func_6(iParam1, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_174(vector3 vParam0, float fParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x84C4
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam2 == iVar0 || iParam3 == 1)
		{
			iVar1 = iVar0;
			bVar2 = false;
			if (bParam4)
			{
				if (func_6(iVar1, 0, 1) && func_6(iParam2, 0, 1))
				{
					if (unk_0x343CB262BF0CDF5A(iVar1) == unk_0x343CB262BF0CDF5A(iParam2))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_6(iVar1, 0, 1) && func_6(iParam2, 0, 1))
				{
					if (Global_24E35D.f_105[iVar0])
					{
						if (SYSTEM::VDIST(Global_24E35D.f_83[iVar0 /*3*/], vParam0) < fParam1)
						{
							return 1;
						}
					}
					else if (SYSTEM::VDIST(func_8(iVar1), vParam0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_24E35D.f_105[iVar0])
				{
					if (SYSTEM::VDIST(Global_24E35D.f_83[iVar0 /*3*/], vParam0) < fParam1)
					{
						return 1;
					}
				}
				else if (func_6(iVar1, 0, 1))
				{
					if (SYSTEM::VDIST(func_8(iVar1), vParam0) < 1f)
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_175(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, bool bParam12, bool bParam13)//Position - 0x85E1
{
	Global_24B2CE.f_3 = 0;
	if (!func_172(vParam0, 0.5f, unk_0xB5CEFD608600A09F(), 0, 0))
	{
		Global_24B2CE.f_3++;
		if (bParam3)
		{
			if (func_225(vParam0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
			{
				Global_24B2CE.f_3 = (Global_24B2CE.f_3 + Global_24B2CE.f_2);
				if (!func_179(vParam0, fParam10))
				{
					Global_24B2CE.f_3++;
					if (!func_83(vParam0, 1056964608))
					{
						Global_24B2CE.f_3++;
						return 1;
					}
				}
			}
			else
			{
				Global_24B2CE.f_3 = (Global_24B2CE.f_3 + Global_24B2CE.f_2);
			}
		}
		else if (!bParam2)
		{
			if (func_225(vParam0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
			{
				Global_24B2CE.f_3 = (Global_24B2CE.f_3 + Global_24B2CE.f_2);
				if (!func_179(vParam0, fParam10))
				{
					Global_24B2CE.f_3++;
					if (!func_176(vParam0, fParam1, fParam7, fParam8, 1084227584))
					{
						Global_24B2CE.f_3++;
						if (!func_83(vParam0, 1056964608))
						{
							Global_24B2CE.f_3++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_24B2CE.f_3 = (Global_24B2CE.f_3 + Global_24B2CE.f_2);
			}
		}
		else if (func_225(vParam0, 6f, 5f, 5f, 5f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
		{
			Global_24B2CE.f_3 = (Global_24B2CE.f_3 + Global_24B2CE.f_2);
			if (!func_179(vParam0, fParam10))
			{
				Global_24B2CE.f_3++;
				if (!func_176(vParam0, fParam1, fParam7, fParam8, fParam9))
				{
					Global_24B2CE.f_3++;
					if (!func_83(vParam0, 1056964608))
					{
						Global_24B2CE.f_3++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_24B2CE.f_3 = (Global_24B2CE.f_3 + Global_24B2CE.f_2);
		}
	}
	return 0;
}

int func_176(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4)//Position - 0x8821
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!unk_0xB5CEFD608600A09F() == iVar1)
		{
			if ((func_6(iVar1, 1, 1) && func_131(iVar1)) && unk_0x75206900382D1E30(unk_0xB5CEFD608600A09F(), iVar1))
			{
				if (!func_178(unk_0xB5CEFD608600A09F(), iVar1, -2, 0))
				{
					if (func_177(func_8(iVar1), vParam0, fParam1, fParam2, fParam3, fParam4))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_177(vector3 vParam0, vector3 vParam1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0x88A0
{
	vector3 vVar0;
	vector3 vVar1;
	
	fParam2 = (fParam2 * -1f);
	fParam2 = (fParam2 + 360f);
	vVar0.x = SYSTEM::SIN(fParam2);
	vVar0.y = SYSTEM::COS(fParam2);
	vVar0.z = 0f;
	vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	vVar0 = { vVar0 * Vector(fParam3, fParam3, fParam3) };
	vVar1 = { vParam1 + vVar0 };
	vVar1.z = vParam1.z;
	vVar1.z = (vVar1.z + fParam5);
	vParam1.z = (vParam1.z + fParam5);
	return unk_0x7352105EC4D7541F(vParam0, vParam1, vVar1, fParam4, 0, 1);
}

bool func_178(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x892C
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x343CB262BF0CDF5A(iParam0) == -1 && unk_0x343CB262BF0CDF5A(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x343CB262BF0CDF5A(iParam0) == unk_0x343CB262BF0CDF5A(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x343CB262BF0CDF5A(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x343CB262BF0CDF5A(iParam0) == iParam2;
	}
	return unk_0x343CB262BF0CDF5A(iParam0) == iParam2;
}

int func_179(vector3 vParam0, float fParam1)//Position - 0x89A4
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_6(iVar1, 1, 1) && func_131(iVar1)) && unk_0x75206900382D1E30(unk_0xB5CEFD608600A09F(), iVar1))
		{
			if ((unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()) == -1 && unk_0x343CB262BF0CDF5A(iVar1) == -1) && !func_113(unk_0xB5CEFD608600A09F(), 1))
			{
				return 0;
			}
			else if ((unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()) == -1 && !unk_0xB5CEFD608600A09F() == iVar1) || !func_178(unk_0xB5CEFD608600A09F(), iVar1, -2, 0))
			{
				if (SYSTEM::VDIST(vParam0, func_8(iVar1)) < fParam1)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_180(int iParam0)//Position - 0x8A60
{
	if ((Global_24B2CE.f_1E2 == 9 || Global_24B2CE.f_1E2 == 9) || (Global_24B2CE.f_1E2 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_181(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7)//Position - 0x8AA3
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && unk_0xB5CEFD608600A09F() != iVar1) || iParam6 == 0)
		{
			if (func_6(iVar1, bParam2, bParam3))
			{
				if (unk_0x75206900382D1E30(unk_0xB5CEFD608600A09F(), iVar1))
				{
					if (!bParam5 || (!unk_0x36CEFBE9B745A58D(unk_0xA95CF30C72EB526E(iVar1)) && func_131(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()) != unk_0x343CB262BF0CDF5A(iVar1))) || unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()) == -1)
						{
							if (((unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()) == -1 && iParam7) && bParam4) && func_136(iVar1))
							{
							}
							else if (unk_0x724D816EA203A79E(unk_0xA95CF30C72EB526E(iVar1)))
							{
								if (unk_0xF0F2FC9DE291567F(func_8(iVar1), vParam0, true) < fParam1)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_182(vector3 vParam0, float fParam1, int iParam2, float fParam3)//Position - 0x8B9F
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_6(iVar1, 1, 1))
			{
				if ((!func_194(iVar1, 0) && unk_0x75206900382D1E30(unk_0xB5CEFD608600A09F(), iVar1)) && iVar1 != unk_0xB5CEFD608600A09F())
				{
					fVar2 = iParam2;
					if (fParam3 > 0f)
					{
						if (!unk_0x343CB262BF0CDF5A(iVar1) == -1)
						{
							if (unk_0x343CB262BF0CDF5A(iVar1) == unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()))
							{
								fVar2 = fParam3;
							}
						}
					}
					if (unk_0x343CB262BF0CDF5A(iVar1) == iVar3)
					{
						if (unk_0xF0F2FC9DE291567F(func_8(iVar1), vParam0, true) <= (fVar2 + fParam1))
						{
							if (unk_0xCFC6F6FA0A38CF65(iVar1, vParam0, fParam1))
							{
								return 1;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_183(int iParam0)//Position - 0x8C64
{
	if (((func_113(iParam0, 1) || func_185(iParam0)) || func_34(iParam0, 0)) || func_184(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_184(int iParam0)//Position - 0x8CA0
{
	if (!func_6(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_18402B[iParam0 /*770*/].f_23;
}

int func_185(int iParam0)//Position - 0x8CC3
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_18C80F[iVar0 /*558*/] != -1;
	}
	return 0;
}

void func_186(vector3 vParam0, var uParam1, var uParam2)//Position - 0x8CE4
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	struct<8> Var3;
	vector3 vVar4;
	vector3 vVar5;
	
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		*(uParam1[iVar0 /*4*/]) = { Var2 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		*(uParam2[iVar0 /*10*/]) = { Var3 };
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1403FD)
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!unk_0xFA30DFD0084E92FE(Global_2401A9[iVar1 /*26*/].f_C, 11))
			{
				if (SYSTEM::VMAG(*(uParam1[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_2401A9[iVar1 /*26*/].f_3, vParam0) < SYSTEM::VDIST(*(uParam1[iVar0 /*4*/]), vParam0))
				{
					Var2 = { Global_2401A9[iVar1 /*26*/].f_3 };
					Var2.f_3 = Global_2401A9[iVar1 /*26*/].f_6.f_2;
					func_188(&Var2, uParam1, iVar0);
					iVar0 = *uParam1;
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1403DA)
	{
		iVar0 = 0;
		while (iVar0 < *uParam2)
		{
			vVar4 = { Global_140131[iVar1 /*8*/].f_1 + Global_140131[iVar1 /*8*/].f_4 * Vector(0.5f, 0.5f, 0.5f) };
			vVar5 = { *(uParam2[iVar0 /*10*/]) + (uParam2[iVar0 /*10*/])->f_3 * Vector(0.5f, 0.5f, 0.5f) };
			if (SYSTEM::VMAG(*(uParam2[iVar0 /*10*/])) == 0f || SYSTEM::VDIST(vVar4, vParam0) < SYSTEM::VDIST(vVar5, vParam0))
			{
				Var3 = { Global_140131[iVar1 /*8*/].f_1 };
				Var3.f_3 = { Global_140131[iVar1 /*8*/].f_4 };
				Var3.f_6 = Global_140131[iVar1 /*8*/].f_7;
				Var3.f_7 = { Global_240065[iVar1 /*3*/] };
				func_187(&Var3, uParam2, iVar0);
				iVar0 = *uParam2;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_187(var uParam0, var uParam1, int iParam2)//Position - 0x8ECC
{
	Global_24CEB1 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_187(&Global_24CEB1, uParam1, iParam2 + 1);
	}
}

void func_188(var uParam0, var uParam1, int iParam2)//Position - 0x8F0A
{
	Global_24CEAD = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_188(&Global_24CEAD, uParam1, iParam2 + 1);
	}
}

void func_189(var uParam0, var uParam1)//Position - 0x8F44
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	
	if (Global_24B2CE.f_8C4 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_24B2CE.f_8C4)
		{
			if (func_190(Global_24B2CE.f_8C5[iVar0 /*4*/], uParam0))
			{
				fVar2 = Global_24B2CE.f_8C5[iVar0 /*4*/].f_3;
				if (SYSTEM::VMAG(*uParam1) > 0.01f)
				{
					vVar1 = { *uParam1 - Global_24B2CE.f_8C5[iVar0 /*4*/] };
					fVar2 = unk_0xFDC254CE02DB0919(vVar1.x, vVar1.y);
				}
				func_128(Global_24B2CE.f_8C5[iVar0 /*4*/], fVar2, uParam0, uParam1, 0, -1);
				Global_24B2CE.f_9A9++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_24B2CE.f_B34)
	{
		func_122(&(Global_24B2CE.f_9A9.f_6[0 /*10*/]), &(Global_24B2CE.f_9A9.f_6[1 /*10*/]), &(Global_24B2CE.f_9A9.f_6[2 /*10*/]));
	}
}

int func_190(vector3 vParam0, var uParam1)//Position - 0x9031
{
	switch (uParam1->f_7)
	{
		case 0:
			return func_72(vParam0, uParam1->f_7, *uParam1, 0f, 0f, 0f, uParam1->f_4);
		
		case 1:
		case 2:
			return func_72(vParam0, uParam1->f_7, uParam1->f_8, uParam1->f_B, uParam1->f_E);
		
		default:
	}
	return 0;
}

void func_191(vector3 vParam0, vector3 vParam1, var uParam2, var uParam3, var uParam4)//Position - 0x908E
{
	float fVar0;
	
	func_117(&vParam0, &vParam1);
	fVar0 = (vParam1.x - vParam0.x);
	*uParam2 = (vParam0.x + (fVar0 * 0.5f));
	uParam2->f_1 = vParam0.y;
	uParam2->f_2 = vParam0.z;
	*uParam3 = *uParam2;
	uParam3->f_1 = vParam1.y;
	uParam3->f_2 = vParam1.z;
	*uParam4 = (fVar0 * 0.5f);
}

var func_192()//Position - 0x90E4
{
	return Global_14010B.f_4;
}

void func_193(var uParam0, var uParam1)//Position - 0x90F2
{
	func_232();
	func_224(uParam0, uParam1);
}

bool func_194(int iParam0, int iParam1)//Position - 0x9106
{
	bool bVar0;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		bVar0 = func_195(-1, 0) == 8;
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

int func_195(int iParam0, bool bParam1)//Position - 0x9151
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_196();
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

int func_196()//Position - 0x9192
{
	return Global_1407E0;
}

bool func_197(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3, bool bParam4)//Position - 0x919E
{
	if (bParam3 && bParam4)
	{
		vParam0.z = 0f;
		vParam1.z = 0f;
		return SYSTEM::VDIST(vParam0, vParam1) < (fParam2 + 0.01f);
	}
	else if (bParam3)
	{
		if (vParam0.z > vParam1.z)
		{
			vParam0.z = vParam1.z;
		}
		return SYSTEM::VDIST(vParam0, vParam1) < (fParam2 + 0.01f);
	}
	else if (bParam4)
	{
		if (vParam0.z < vParam1.z)
		{
			vParam0.z = vParam1.z;
		}
		return SYSTEM::VDIST(vParam0, vParam1) < (fParam2 + 0.01f);
	}
	return SYSTEM::VDIST(vParam0, vParam1) < (fParam2 + 0.01f);
}

void func_198(var uParam0, var uParam1, var uParam2)//Position - 0x9251
{
	if (Global_24B2CE.f_6C8 > 0 && func_220(uParam0, uParam1, uParam2))
	{
	}
	else
	{
		func_199(uParam0, uParam1, uParam2);
	}
}

void func_199(var uParam0, var uParam1, var uParam2)//Position - 0x9281
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	float fVar20;
	int iVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	vector3 vVar25;
	var uVar26;
	vector3 vVar27;
	float fVar28;
	bool bVar29;
	
	iVar0 = 0;
	if (!SYSTEM::VMAG(uParam2->f_23) > 0f)
	{
		uParam2->f_23 = { *uParam0 };
	}
	if (uParam2->f_F)
	{
		if (func_96(uParam2->f_23, uParam0, &(uParam2->f_26), &(uParam2->f_2D), 1, 1))
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
	}
	if (uParam2->f_33)
	{
		uParam2->f_6 = 9999.9f;
	}
	if (uParam2->f_30)
	{
		if (func_219(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
	}
	iVar3 = 0;
	iVar8 = 1;
	if (uParam2->f_B)
	{
		iVar3 += 2;
		iVar3++;
		iVar8 = 0;
	}
	else if (uParam2->f_A == 0 || (uParam2->f_21 > 0 && uParam2->f_10))
	{
		iVar3++;
		iVar8 = 0;
	}
	iVar3 += 4;
	fVar11 = 3f;
	fVar12 = 5f;
	switch (uParam2->f_21)
	{
		case 0:
			fVar11 = 3f;
			fVar12 = 5f;
			break;
		
		case 1:
			fVar11 = 2.75f;
			fVar12 = 7.5f;
			break;
		
		default:
			fVar11 = 2.5f;
			fVar12 = 10f;
			break;
	}
	iVar13 = 0;
	Global_24CEBB.f_A2 = 0;
	Global_24CEBB.f_A3 = 0;
	Global_24CEBB.f_A4 = -99;
	Global_24CEBB.f_A5 = { 0f, 0f, 0f };
	iVar14 = 0;
	while (iVar14 < 40)
	{
		Global_24CEBB[iVar14 /*3*/] = { 0f, 0f, 0f };
		Global_24CEBB.f_79[iVar14] = 0f;
		iVar14++;
	}
	iVar15 = 1;
	if (func_89(uParam2->f_22) != 0)
	{
		iVar15 = 3;
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
		uParam2->f_12 = 0;
	}
	while (true)
	{
		iVar6 = unk_0x2E0AE46DCB1D97E5(*uParam0, (iVar0 * iVar15), &fVar2, &iVar7, iVar3, fVar11, fVar12);
		if (unk_0x7A0512982A9448C2(iVar6))
		{
			unk_0x2487DB62997A4150(iVar6, &vVar1);
			bVar10 = false;
			if (Global_24CEBB.f_A4 == iVar6)
			{
				bVar10 = true;
			}
			Global_24CEBB.f_A5 = { vVar1 };
			if (((uParam2->f_A || uParam2->f_21 > 0) || !unk_0x6F0339DC0CD61C94(iVar6)) || unk_0x77F84A8EA1958F2B(iVar6))
			{
				unk_0x7834AEB00A32C3DF(vVar1, &uVar4, &uVar5);
				if (SYSTEM::VDIST(vVar1, uParam2->f_23) > uParam2->f_4)
				{
					if (!func_167(&vVar1, 0))
					{
						if ((uParam2->f_D || uVar5 & 64 == 0) || uParam2->f_21 == 1)
						{
							if (uParam2->f_E || uVar5 & 16 == 0)
							{
								if ((uVar5 & 128 == 0 && uVar5 & 256 == 0) && uVar5 & 512 == 0)
								{
									if (!func_218(vVar1))
									{
										vVar1 = { func_214(vVar1, &fVar2, iVar7, uParam2->f_9, *uParam2, iVar8, uParam2->f_B, uParam2->f_22, &bVar9, bVar10, 1, uParam2->f_33) };
										if (SYSTEM::VMAG(vVar1) > 0f)
										{
											if (!func_83(vVar1, 5f))
											{
												if (vVar1.z >= (uParam2->f_23.f_2 - uParam2->f_7) || uParam2->f_21 >= 2)
												{
													if (vVar1.z <= (uParam2->f_23.f_2 + uParam2->f_6) || uParam2->f_21 >= 2)
													{
														if (func_213(vVar1, uParam2))
														{
															if ((uParam2->f_30 && !func_219(&vVar1, 0)) || uParam2->f_30 == 0)
															{
																bVar16 = true;
																if (!bVar10)
																{
																	if (bVar9)
																	{
																		iVar0 = (iVar0 + -1);
																		bVar16 = false;
																	}
																}
																if (SYSTEM::VMAG(vVar1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && SYSTEM::VDIST(vVar1.x, vVar1.y, 0f, uParam2->f_23, uParam2->f_23.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_21 >= 2)
																	{
																		if ((uParam2->f_C && !func_209(vVar1, fVar2, uParam2->f_22, unk_0xB5CEFD608600A09F(), 0, uParam2->f_38)) || !uParam2->f_C)
																		{
																			if (!uParam2->f_F || !func_96(uParam2->f_23, &vVar1, &(uParam2->f_26), &(uParam2->f_2D), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar17 = uParam2->f_1F;
																					bVar18 = true;
																					iVar19 = 1;
																					fVar20 = uParam2->f_31;
																					if (!uParam2->f_37)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						fVar20 = 1f;
																					}
																					else if (uParam2->f_11)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						if (uParam2->f_21 == 1)
																						{
																							fVar20 = (fVar20 * 0.375f);
																						}
																					}
																					else
																					{
																						bVar18 = true;
																						iVar19 = 1;
																						if (uParam2->f_1C)
																						{
																							if (uParam2->f_21 == 1)
																							{
																								fVar20 = (fVar20 * 0.375f);
																							}
																						}
																					}
																					iVar21 = 0;
																					if (!func_208(vVar1, fVar2, uParam2->f_22))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_225(vVar1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_3A, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar21 = 1;
																							}
																						}
																						else if (func_225(vVar1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_3A, -1, 1, 0f, 0, 0, 0, 0) && !func_206(vVar1, fVar2, uParam2->f_22, 1, 1, 0, 0, 0, 0))
																						{
																							iVar21 = 1;
																						}
																					}
																					if (iVar21 || uParam2->f_21 >= 2)
																					{
																						if (((uParam2->f_1D || uParam2->f_1E) || uParam2->f_34) || uParam2->f_21 >= 2)
																						{
																							fVar23 = 0f;
																							if (uParam2->f_34)
																							{
																								iVar22 = func_205(vVar1, uParam2->f_36, &fVar23);
																							}
																							if (!uParam2->f_34 || (uParam2->f_34 && iVar22 <= uParam2->f_35))
																							{
																								if (uParam2->f_34)
																								{
																									if (iVar22 < uParam2->f_35)
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_24CEBB.f_A2)
																										{
																											Global_24CEBB[iVar14 /*3*/] = { 0f, 0f, 0f };
																											Global_24CEBB.f_79[iVar14] = 0f;
																											iVar14++;
																										}
																										Global_24CEBB.f_A2 = 0;
																										uParam2->f_35 = iVar22;
																									}
																								}
																								if (uParam2->f_1E)
																								{
																									if (Global_24CEBB.f_A2 == 0)
																									{
																										Global_24CEBB[0 /*3*/] = { vVar1 };
																										Global_24CEBB.f_79[0] = fVar2;
																									}
																									else
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_24CEBB.f_A2 + 1)
																										{
																											if (iVar14 < 40)
																											{
																												if (SYSTEM::VDIST2(vVar1, uParam2->f_23) < SYSTEM::VDIST2(Global_24CEBB[iVar14 /*3*/], uParam2->f_23))
																												{
																													func_204(vVar1, fVar2, iVar14);
																													iVar14 = Global_24CEBB.f_A2 + 1;
																												}
																											}
																											iVar14++;
																										}
																									}
																									Global_24CEBB.f_A2++;
																									if (Global_24CEBB.f_A2 >= 5)
																									{
																										if ((uParam2->f_34 && uParam2->f_35 == 0) || uParam2->f_34 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_24CEBB.f_A2 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_24CEBB[Global_24CEBB.f_A2 /*3*/] = { vVar1 };
																									Global_24CEBB.f_79[Global_24CEBB.f_A2] = fVar2;
																									Global_24CEBB.f_A2++;
																									if (func_213(vVar1, uParam2))
																									{
																										Global_24CEBB.f_A3++;
																									}
																									if (Global_24CEBB.f_A2 >= 10)
																									{
																										if ((uParam2->f_34 && uParam2->f_35 == 0) || uParam2->f_34 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_24CEBB.f_A2 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { vVar1 };
																							*uParam1 = fVar2;
																							return;
																						}
																					}
																					else if (bVar16)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { vVar1 };
																					*uParam1 = fVar2;
																					return;
																				}
																			}
																		}
																		else
																		{
																			iVar13++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!uParam2->f_20)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar13++;
					}
				}
				else
				{
					iVar13++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar13) || iVar0 >= 100)
			{
				if (Global_24CEBB.f_A2 > 0 && ((uParam2->f_1D || uParam2->f_1E) || uParam2->f_21 >= 2))
				{
					if (uParam2->f_1E)
					{
						*uParam0 = { Global_24CEBB[0 /*3*/] };
						*uParam1 = Global_24CEBB.f_79[0];
						return;
					}
					else
					{
						if (Global_24CEBB.f_A3 > 0 && !Global_24CEBB.f_A3 == Global_24CEBB.f_A2)
						{
							func_202(0, uParam2);
						}
						iVar24 = unk_0x491B2241281A03B7(0, Global_24CEBB.f_A2);
						if (uParam2->f_12 && uParam2->f_1E)
						{
							iVar24 = 0;
						}
						vVar25 = { Global_24CEBB[0 /*3*/] };
						uVar26 = Global_24CEBB.f_79[0];
						Global_24CEBB[0 /*3*/] = { Global_24CEBB[iVar24 /*3*/] };
						Global_24CEBB.f_79[0] = Global_24CEBB.f_79[iVar24];
						Global_24CEBB[iVar24 /*3*/] = { vVar25 };
						Global_24CEBB.f_79[iVar24] = uVar26;
						*uParam0 = { Global_24CEBB[0 /*3*/] };
						*uParam1 = Global_24CEBB.f_79[0];
						return;
					}
				}
				else
				{
					uParam2->f_21++;
					if (uParam2->f_21 < 3)
					{
						func_199(uParam0, uParam1, uParam2);
						return;
					}
					else
					{
						func_201(iVar13, *uParam0, &iVar0, &vVar1, &fVar2, uParam2, iVar8, iVar7, iVar3, fVar11, fVar12, bVar9);
						vVar27 = { vVar1 };
						fVar28 = fVar2;
						if (!uParam2->f_32)
						{
							bVar29 = true;
						}
						else
						{
							bVar29 = false;
						}
						if (func_96(uParam2->f_23, &vVar27, &(uParam2->f_26), &(uParam2->f_2D), bVar29, 1) || func_219(&vVar27, bVar29))
						{
							if (!uParam2->f_32)
							{
								uParam2->f_21 = 0;
								uParam2->f_32 = 1;
								*uParam0 = { vVar27 };
								*uParam1 = fVar28;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								func_199(uParam0, uParam1, uParam2);
								return;
							}
							else
							{
								*uParam0 = { vVar27 };
								*uParam1 = fVar28;
								return;
							}
						}
						else
						{
							*uParam0 = { vVar27 };
							*uParam1 = fVar28;
							return;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_21++;
			if (uParam2->f_21 < 3)
			{
				func_199(uParam0, uParam1, uParam2);
				return;
			}
			else
			{
				func_200(&Global_14053D, uParam0, uParam1, *uParam0);
				if (uParam2->f_B)
				{
					uParam2->f_1B = 1;
				}
				return;
			}
		}
		Global_24CEBB.f_A4 = iVar6;
	}
}

void func_200(var uParam0, var uParam1, var uParam2, vector3 vParam3)//Position - 0x9CBE
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = SYSTEM::VDIST(*(uParam0[iVar2 /*4*/]), vParam3);
		if (fVar1 < fVar0)
		{
			if (!func_172(*(uParam0[iVar2 /*4*/]), 5f, unk_0xB5CEFD608600A09F(), 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == -1)
	{
		*uParam1 = { *(uParam0[iVar3 /*4*/]) };
		*uParam2 = (uParam0[iVar3 /*4*/])->f_3;
	}
}

void func_201(int iParam0, vector3 vParam1, int iParam2, var uParam3, float fParam4, var uParam5, int iParam6, int iParam7, int iParam8, float fParam9, float fParam10, bool bParam11)//Position - 0x9D42
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		*iParam2 = unk_0x491B2241281A03B7((1 + iParam0), (40 + iParam0));
		unk_0xF1893A29A79EED3B(vParam1, *iParam2, uParam3, fParam4, &iParam7, iParam8, fParam9, fParam10);
		*uParam3 = { func_214(*uParam3, fParam4, iParam7, uParam5->f_9, *uParam5, iParam6, uParam5->f_B, uParam5->f_22, &bParam11, 0, 0, uParam5->f_33) };
		if (!func_218(*uParam3))
		{
			iVar0 = 999;
			return;
		}
		iVar0++;
	}
}

void func_202(int iParam0, var uParam1)//Position - 0x9DC6
{
	if (!func_213(Global_24CEBB[iParam0 /*3*/], uParam1))
	{
		Global_24CEBB.f_A2 = (Global_24CEBB.f_A2 - 1);
		func_203(iParam0);
		if (Global_24CEBB.f_A2 > Global_24CEBB.f_A3)
		{
			func_202(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_202(iParam0 + 1, uParam1);
	}
}

void func_203(int iParam0)//Position - 0x9E21
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_24CEBB[iParam0 /*3*/] = { Global_24CEBB[iParam0 + 1 /*3*/] };
			Global_24CEBB.f_79[iParam0] = Global_24CEBB.f_79[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_204(vector3 vParam0, float fParam1, int iParam2)//Position - 0x9E6C
{
	vector3 vVar0;
	var uVar1;
	
	vVar0 = { Global_24CEBB[iParam2 /*3*/] };
	uVar1 = Global_24CEBB.f_79[iParam2];
	Global_24CEBB[iParam2 /*3*/] = { vParam0 };
	Global_24CEBB.f_79[iParam2] = fParam1;
	if (iParam2 <= Global_24CEBB.f_A2 && iParam2 < 39)
	{
		if (SYSTEM::VMAG(vVar0) > 0f)
		{
			func_204(vVar0, uVar1, iParam2 + 1);
		}
	}
}

int func_205(vector3 vParam0, float fParam1, float fParam2)//Position - 0x9ED9
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	
	fVar4 = 99999.9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar3 = iVar0;
		if (func_135(iVar3))
		{
			vVar1 = { func_8(iVar3) };
			fVar5 = SYSTEM::VDIST(vParam0, vVar1);
			if (fVar5 < fParam1)
			{
				if (fVar5 < fVar4)
				{
					fVar4 = fVar5;
				}
				iVar2++;
			}
		}
		iVar0++;
	}
	*fParam2 = fVar4;
	return iVar2;
}

int func_206(vector3 vParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)//Position - 0x9F41
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	float fVar6;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam7 == 1 && unk_0xB5CEFD608600A09F() != iVar1) || iParam7 == 0)
		{
			if (func_6(iVar1, bParam3, bParam4))
			{
				if (unk_0x75206900382D1E30(unk_0xB5CEFD608600A09F(), iVar1))
				{
					if (!bParam6 || (!unk_0x36CEFBE9B745A58D(unk_0xA95CF30C72EB526E(iVar1)) && func_131(iVar1)))
					{
						if ((!bParam5 || (bParam5 == 1 && unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()) != unk_0x343CB262BF0CDF5A(iVar1))) || unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()) == -1)
						{
							if (((unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()) == -1 && iParam8) && bParam5) && func_136(iVar1))
							{
							}
							else if (unk_0x724D816EA203A79E(unk_0xA95CF30C72EB526E(iVar1)))
							{
								fVar2 = 0.1f;
								if (unk_0x5237AF95232D78C5(unk_0xA95CF30C72EB526E(iVar1), 0))
								{
									iVar3 = unk_0x9FE9D386222EEE47(unk_0xA95CF30C72EB526E(iVar1), 0);
									if (unk_0x724D816EA203A79E(iVar3) && !unk_0x1D403DFADBC2DE3C(iVar3, 0))
									{
										iVar4 = unk_0x6F79ECA8C83E4357(iVar3);
										vVar5 = { unk_0x541C2AEF053615BC(iVar3, 0) };
										fVar6 = unk_0x349C94FFF43E2979(iVar3);
										if (func_207(vParam0, fParam1, iParam2, vVar5, fVar6, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_84(func_8(iVar1), vParam0, fParam1, iParam2, fVar2))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_207(vector3 vParam0, float fParam1, int iParam2, vector3 vParam3, float fParam4, int iParam5, bool bParam6)//Position - 0xA0B4
{
	int iVar0;
	vector3 vVar1[4];
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	
	if (func_84(vParam0, vParam3, fParam4, iParam5, 1036831949))
	{
		return 1;
	}
	func_86(iParam2, &vVar2, &vVar3, 1086324736, 1080033280, 1077936128);
	vVar4 = { 0f, vVar3.y, 0f };
	func_91(&vVar4, 0f, 0f, fParam1);
	vVar5 = { 0f, vVar2.y, 0f };
	func_91(&vVar5, 0f, 0f, fParam1);
	vVar6 = { (unk_0x357058E632979E65((vVar3.x - vVar2.x)) * 0.5f), 0f, 0f };
	func_91(&vVar6, 0f, 0f, fParam1);
	vVar1[0 /*3*/] = { vParam0 + vVar4 + vVar6 };
	vVar1[0 /*3*/].f_2 = (vVar1[0 /*3*/].f_2 + (0.5f * unk_0x357058E632979E65((vVar3.z - vVar2.z))));
	vVar1[1 /*3*/] = { vParam0 + vVar4 - vVar6 };
	vVar1[1 /*3*/].f_2 = (vVar1[1 /*3*/].f_2 + (0.5f * unk_0x357058E632979E65((vVar3.z - vVar2.z))));
	vVar1[2 /*3*/] = { vParam0 + vVar5 + vVar6 };
	vVar1[2 /*3*/].f_2 = (vVar1[2 /*3*/].f_2 + (0.5f * unk_0x357058E632979E65((vVar3.z - vVar2.z))));
	vVar1[3 /*3*/] = { vParam0 + vVar5 - vVar6 };
	vVar1[3 /*3*/].f_2 = (vVar1[3 /*3*/].f_2 + (0.5f * unk_0x357058E632979E65((vVar3.z - vVar2.z))));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_84(vVar1[iVar0 /*3*/], vParam3, fParam4, iParam5, 1036831949))
		{
			return 1;
		}
		iVar0++;
	}
	if (!bParam6)
	{
		if (func_207(vParam3, fParam4, iParam5, vParam0, fParam1, iParam2, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_208(vector3 vParam0, float fParam1, int iParam2)//Position - 0xA26E
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar4;
	
	iVar0 = 1;
	iVar0 += 2;
	iVar0 += 4;
	iVar0 += 8;
	iVar0 += 16;
	iVar0 += 32;
	iVar0 += 64;
	iVar0 = (iVar0 + 131076);
	iVar1 = unk_0x39827CF9BEAB804C(vParam0, 30f, 0, iVar0);
	if (unk_0x724D816EA203A79E(iVar1) && !unk_0x1D403DFADBC2DE3C(iVar1, 0))
	{
		iVar2 = unk_0x6F79ECA8C83E4357(iVar1);
		vVar3 = { unk_0x541C2AEF053615BC(iVar1, 0) };
		fVar4 = unk_0x349C94FFF43E2979(iVar1);
		if (func_207(vParam0, fParam1, iParam2, vVar3, fVar4, iVar2, 0))
		{
			return 1;
		}
	}
	iVar0 += 4096;
	iVar0 += 8192;
	iVar0 += 16384;
	iVar1 = unk_0x39827CF9BEAB804C(vParam0, 30f, 0, iVar0);
	if (unk_0x724D816EA203A79E(iVar1) && !unk_0x1D403DFADBC2DE3C(iVar1, 0))
	{
		iVar2 = unk_0x6F79ECA8C83E4357(iVar1);
		vVar3 = { unk_0x541C2AEF053615BC(iVar1, 0) };
		fVar4 = unk_0x349C94FFF43E2979(iVar1);
		if (func_207(vParam0, fParam1, iParam2, vVar3, fVar4, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_209(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0xA37A
{
	if (func_212(vParam0, fParam1, iParam2, iParam3, iParam4) || func_210(vParam0, fParam1, iParam2, iParam3, iParam5))
	{
		return 1;
	}
	return 0;
}

int func_210(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)//Position - 0xA3B0
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (func_211(vParam0, iParam2, Global_24E35D.f_1AB[iVar0 /*11*/][iVar1 /*5*/], Global_24E35D.f_1AB[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_207(vParam0, fParam1, iParam2, Global_24E35D.f_1AB[iVar0 /*11*/][iVar1 /*5*/], Global_24E35D.f_1AB[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_24E35D.f_1AB[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_6(iVar2, 0, 1) && func_6(iParam3, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_211(vector3 vParam0, int iParam1, vector3 vParam2, int iParam3)//Position - 0xA48A
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_92(iParam1, 1008981770);
	fVar1 = func_92(iParam3, 1008981770);
	fVar2 = SYSTEM::VDIST(vParam0, vParam2);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_212(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)//Position - 0xA4CA
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar1 = iVar0;
			if (func_6(iVar1, 0, 1) && func_6(iParam3, 0, 1))
			{
				if (Global_24E35D.f_105[iVar0])
				{
					if (func_84(Global_24E35D.f_83[iVar0 /*3*/], vParam0, fParam1, iParam2, 1036831949))
					{
						return 1;
					}
				}
				else if (func_84(func_8(iVar1), vParam0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_24E35D.f_105[iVar0])
			{
				if (func_84(Global_24E35D.f_83[iVar0 /*3*/], vParam0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (func_6(iVar1, 0, 0))
			{
				if (unk_0x724D816EA203A79E(unk_0xA95CF30C72EB526E(iVar1)))
				{
					if (func_84(func_8(iVar1), vParam0, fParam1, iParam2, 1036831949))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_213(vector3 vParam0, var uParam1)//Position - 0xA5D9
{
	if (uParam1->f_12)
	{
		switch (uParam1->f_1A)
		{
			case 0:
				if (func_197(vParam0, uParam1->f_13, uParam1->f_19, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_116(vParam0, uParam1->f_13, uParam1->f_16, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (unk_0x7352105EC4D7541F(vParam0, uParam1->f_13, uParam1->f_16, uParam1->f_19, 0, 1))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

Vector3 func_214(vector3 vParam0, float fParam1, int iParam2, bool bParam3, vector3 vParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10, bool bParam11)//Position - 0xA66A
{
	vector3 vVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	float fVar10;
	vector3 vVar11;
	vector3 vVar12;
	vector3 vVar13;
	
	if (bParam11)
	{
		if (SYSTEM::VMAG(vParam4) > 0f)
		{
			if (!func_217(vParam0, *fParam1, vParam4))
			{
				*fParam1 = (*fParam1 + 180f);
			}
		}
		return vParam0;
	}
	unk_0x7834AEB00A32C3DF(vParam0, &uVar1, &uVar2);
	if (uVar2 & 1024 == 0 && !bParam6)
	{
		unk_0x0B9FA0F40EF282A2(vParam0, 1f, 1, &uVar3, &uVar3, &iVar4, &iVar5, &fVar6, iParam5);
		if (iVar4 == iVar5)
		{
			*uParam8 = 1;
		}
		if (bParam10)
		{
			if (!uVar2 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar2 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar2 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if ((iVar4 + iVar5) != iParam2)
			{
				return 0f, 0f, 0f;
			}
			if (unk_0x8C1A6E7D5F410F4A(iParam7) && func_216(vParam0))
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam9 && *uParam8)
		{
			*fParam1 = (*fParam1 + 180f);
			if (*fParam1 > 360f)
			{
				*fParam1 = (*fParam1 + -360f);
			}
		}
		if (*fParam1 <= 90f || *fParam1 > 270f)
		{
			bVar8 = true;
		}
		else
		{
			bVar8 = false;
		}
		bVar9 = false;
		if (bVar8)
		{
			if (iVar4 == 0)
			{
				if (bParam10)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam2 == iVar4)
			{
				bVar9 = true;
			}
		}
		else if (iVar5 == 0)
		{
			if (bParam10)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam2 == iVar5)
		{
			bVar9 = true;
		}
		if (fVar6 < 0f)
		{
			fVar7 = 0f;
		}
		else
		{
			if (bVar8)
			{
				if (bVar9)
				{
					fVar7 = (4.2f * (SYSTEM::TO_FLOAT(iVar4) * 0.5f));
				}
				else
				{
					fVar7 = (4.2f * SYSTEM::TO_FLOAT(iVar4));
				}
				if (bVar9)
				{
					if (iVar4 > 2)
					{
						fVar7 = (fVar7 + (IntToFloat((iVar4 - 2)) * 1f));
					}
				}
				else if (iVar4 > 1)
				{
					fVar7 = (fVar7 + (IntToFloat((iVar4 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar9)
				{
					fVar7 = (4.2f * (SYSTEM::TO_FLOAT(iVar5) * 0.5f));
				}
				else
				{
					fVar7 = (4.2f * SYSTEM::TO_FLOAT(iVar5));
				}
				if (bVar9)
				{
					if (iVar5 > 2)
					{
						fVar7 = (fVar7 + (IntToFloat((iVar5 - 2)) * 1f));
					}
				}
				else if (iVar5 > 1)
				{
					fVar7 = (fVar7 + (IntToFloat((iVar5 - 1)) * 1f));
				}
			}
			if (!uVar2 & 64 == 0)
			{
				fVar7 = (fVar7 + (0.95f * fVar6));
			}
			if (!uVar2 & 4 == 0 || !uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + -0.5f);
			}
			if ((!uVar2 & 32 == 0 && uVar2 & 4 == 0) && uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + -1f);
			}
			if (!bParam3 || !uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + (4.2f * -0.5f));
			}
			if (!iParam7 == 0)
			{
				if (uVar2 & 8 != 0)
				{
					fVar10 = func_215(iParam7, 3.5f);
				}
				else
				{
					fVar10 = func_215(iParam7, 1.5f);
				}
				if (fVar10 > 1.8f)
				{
					fVar7 = (fVar7 + ((fVar10 - 1.8f) * -0.5f));
				}
			}
		}
	}
	if (SYSTEM::VMAG(vParam4) > 0f)
	{
		if (!func_217(vParam0, *fParam1, vParam4))
		{
			if (bParam3 || ((uVar2 & 1024 != 0 || vParam0.z == 0f) && bParam6))
			{
				*fParam1 = (*fParam1 + 180f);
			}
			else if (bParam10)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (fVar7 < 0f)
	{
		fVar7 = 0f;
	}
	vVar0 = { unk_0x89D97EB4FAE4A574(vParam0, *fParam1, fVar7, 0f, 0f) };
	if (bParam3)
	{
		if (unk_0x4264B2362A7E120F(vParam0, *fParam1, &vVar11))
		{
			vVar12 = { vVar11 - vParam0 };
			if (!iParam7 == 0)
			{
				vVar13 = { vVar12 / FtoV(SYSTEM::VMAG(vVar12)) };
				if (uVar2 & 8 != 0)
				{
					fVar10 = func_215(iParam7, 3.5f);
				}
				else
				{
					fVar10 = func_215(iParam7, 1.5f);
				}
				vVar13 = { vVar13 * FtoV((fVar10 * 0.5f)) };
				vVar12 = { vVar12 - vVar13 };
				vVar11 = { vParam0 + vVar12 };
			}
			vVar13 = { vVar0 - vVar11 };
			vVar0 = { vVar11 };
		}
	}
	return vVar0;
}

float func_215(int iParam0, float fParam1)//Position - 0xAAB1
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	func_86(iParam0, &fVar0, &fVar1, 1086324736, 1080033280, 1077936128);
	fVar2 = (fVar1 - fVar0);
	if (fVar2 < fParam1)
	{
		return fParam1;
	}
	return fVar2;
}

int func_216(vector3 vParam0)//Position - 0xAAE8
{
	float fVar0;
	
	if (unk_0x2084D4C6C2DF616F(vParam0.x, vParam0.y, (vParam0.z + 500f), &fVar0, 0, 0))
	{
		fVar0 = (fVar0 - vParam0.z);
		if (fVar0 > 6f)
		{
			return 1;
		}
	}
	return 0;
}

int func_217(vector3 vParam0, float fParam1, vector3 vParam2)//Position - 0xAB20
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { 0f, 1f, 0f };
	func_91(&vVar0, 0f, 0f, fParam1);
	vVar1 = { vParam2 - vParam0 };
	if (func_79(vVar1, vVar0) >= 0f)
	{
		return 1;
	}
	return 0;
}

int func_218(vector3 vParam0)//Position - 0xAB5C
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_82(vParam0);
	iVar0 = 0;
	while (iVar0 < Global_24CD9D[iVar1])
	{
		if (func_81(vParam0, &(Global_24CADE[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_24CD9D[8])
	{
		if (func_81(vParam0, &(Global_24CADE[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_219(var uParam0, bool bParam1)//Position - 0xABD7
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_24B2CE.f_1A.f_11)
	{
		switch (Global_24B2CE.f_1A.f_10)
		{
			case 0:
				if (func_197(*uParam0, Global_24B2CE.f_1A.f_9, Global_24B2CE.f_1A.f_F, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_116(*uParam0, Global_24B2CE.f_1A.f_9, Global_24B2CE.f_1A.f_C, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (unk_0x7352105EC4D7541F(*uParam0, Global_24B2CE.f_1A.f_9, Global_24B2CE.f_1A.f_C, Global_24B2CE.f_1A.f_F, 0, 1))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_103(*uParam0, Global_24B2CE.f_1A.f_9, Global_24B2CE.f_1A.f_C, Global_24B2CE.f_1A.f_F, Global_24B2CE.f_1A.f_10, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

int func_220(var uParam0, var uParam1, var uParam2)//Position - 0xACC9
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	float fVar8;
	bool bVar9;
	int iVar10;
	float fVar11;
	int iVar12;
	vector3 vVar13;
	var uVar14;
	
	if (Global_24B2CE.f_6C8 > 0)
	{
		iVar0 = 0;
		iVar1 = 0;
		if (!SYSTEM::VMAG(uParam2->f_23) > 0f)
		{
			uParam2->f_23 = { *uParam0 };
		}
		if (uParam2->f_F)
		{
			if (func_96(uParam2->f_23, uParam0, &(uParam2->f_26), &(uParam2->f_2D), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_30)
		{
			if (func_219(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
		Global_24CEBB.f_A2 = 0;
		Global_24CEBB.f_A3 = 0;
		iVar4 = 0;
		while (iVar4 < 40)
		{
			Global_24CEBB[iVar4 /*3*/] = { 0f, 0f, 0f };
			Global_24CEBB.f_79[iVar4] = 0f;
			iVar4++;
		}
		func_221(*uParam0);
		iVar0 = 0;
		while (iVar0 < Global_24B2CE.f_6C8)
		{
			iVar1 = Global_24B2CE.f_85E[iVar0];
			if (iVar1 > -1 && iVar1 < 101)
			{
				vVar2 = { Global_24B2CE.f_6C9[iVar1 /*4*/] };
				fVar3 = Global_24B2CE.f_6C9[iVar1 /*4*/].f_3;
				if (SYSTEM::VMAG(vVar2) > 0f)
				{
					if ((uParam2->f_39 && SYSTEM::VDIST(vVar2, uParam2->f_23) > uParam2->f_4) || uParam2->f_39 == 0)
					{
						if ((uParam2->f_5 > 0f && SYSTEM::VDIST(vVar2.x, vVar2.y, 0f, uParam2->f_23, uParam2->f_23.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_C && !func_209(vVar2, fVar3, uParam2->f_22, unk_0xB5CEFD608600A09F(), 0, uParam2->f_38)) || !uParam2->f_C)
							{
								if (!uParam2->f_F || !func_96(uParam2->f_23, &vVar2, &(uParam2->f_26), &(uParam2->f_2D), 0, 1))
								{
									if (uParam2->f_8)
									{
										iVar5 = uParam2->f_1F;
										bVar6 = true;
										iVar7 = 1;
										fVar8 = uParam2->f_31;
										if (!uParam2->f_37)
										{
											iVar5 = 0;
											bVar6 = false;
											iVar7 = 0;
											fVar8 = 1f;
										}
										else if (uParam2->f_11)
										{
											iVar5 = 0;
											bVar6 = false;
											iVar7 = 0;
											if (uParam2->f_21 == 1)
											{
												fVar8 = (fVar8 * 0.375f);
											}
										}
										else
										{
											bVar6 = true;
											iVar7 = 1;
											if (uParam2->f_1C)
											{
												if (uParam2->f_21 == 1)
												{
													fVar8 = (fVar8 * 0.375f);
												}
											}
										}
										bVar9 = false;
										if (!func_208(vVar2, fVar3, uParam2->f_22))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_225(vVar2, 6f, 1f, 1f, 5f, iVar5, bVar6, iVar7, fVar8, uParam2->f_3A, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar9 = true;
												}
											}
											else if (func_225(vVar2, 6f, 1f, 1f, 5f, iVar5, bVar6, iVar7, fVar8, uParam2->f_3A, -1, 1, 0f, 0, 0, 0, 0) && !func_206(vVar2, fVar3, uParam2->f_22, 1, 1, 0, 0, uParam2->f_3A, 0))
											{
												bVar9 = true;
											}
										}
										if (bVar9)
										{
											if ((uParam2->f_1D || uParam2->f_1E) || uParam2->f_34)
											{
												fVar11 = 0f;
												if (uParam2->f_34)
												{
													iVar10 = func_205(vVar2, uParam2->f_36, &fVar11);
												}
												if (!uParam2->f_34 || (uParam2->f_34 && iVar10 <= uParam2->f_35))
												{
													if (uParam2->f_34)
													{
														if (iVar10 < uParam2->f_35)
														{
															iVar4 = 0;
															while (iVar4 < Global_24CEBB.f_A2)
															{
																Global_24CEBB[iVar4 /*3*/] = { 0f, 0f, 0f };
																Global_24CEBB.f_79[iVar4] = 0f;
																iVar4++;
															}
															Global_24CEBB.f_A2 = 0;
															uParam2->f_35 = iVar10;
														}
													}
													if (uParam2->f_1E)
													{
														if (Global_24CEBB.f_A2 == 0)
														{
															Global_24CEBB[0 /*3*/] = { vVar2 };
															Global_24CEBB.f_79[0] = fVar3;
														}
														else
														{
															iVar4 = 0;
															while (iVar4 < Global_24CEBB.f_A2 + 1)
															{
																if (iVar4 < 40)
																{
																	if (SYSTEM::VDIST2(vVar2, uParam2->f_23) < SYSTEM::VDIST2(Global_24CEBB[iVar4 /*3*/], uParam2->f_23))
																	{
																		func_204(vVar2, fVar3, iVar4);
																		iVar4 = Global_24CEBB.f_A2 + 1;
																	}
																}
																iVar4++;
															}
														}
														Global_24CEBB.f_A2++;
														if (Global_24CEBB.f_A2 >= 5)
														{
															if ((uParam2->f_34 && uParam2->f_35 == 0) || uParam2->f_34 == 0)
															{
																iVar0 = Global_24B2CE.f_6C8;
															}
															else if (Global_24CEBB.f_A2 == 40)
															{
																iVar0 = Global_24B2CE.f_6C8;
															}
														}
													}
													else
													{
														Global_24CEBB[Global_24CEBB.f_A2 /*3*/] = { vVar2 };
														Global_24CEBB.f_79[Global_24CEBB.f_A2] = fVar3;
														Global_24CEBB.f_A2++;
														if (Global_24CEBB.f_A2 >= 10)
														{
															if ((uParam2->f_34 && uParam2->f_35 == 0) || uParam2->f_34 == 0)
															{
																iVar0 = Global_24B2CE.f_6C8;
															}
															else if (Global_24CEBB.f_A2 == 40)
															{
																iVar0 = Global_24B2CE.f_6C8;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { vVar2 };
												*uParam1 = fVar3;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { vVar2 };
										*uParam1 = fVar3;
										return 1;
									}
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
		if (Global_24CEBB.f_A2 > 0)
		{
			if (uParam2->f_1E)
			{
				*uParam0 = { Global_24CEBB[0 /*3*/] };
				*uParam1 = Global_24CEBB.f_79[0];
				return 1;
			}
			else
			{
				if (Global_24CEBB.f_A3 > 0 && !Global_24CEBB.f_A3 == Global_24CEBB.f_A2)
				{
					func_202(0, uParam2);
				}
				iVar12 = unk_0x491B2241281A03B7(0, Global_24CEBB.f_A2);
				vVar13 = { Global_24CEBB[0 /*3*/] };
				uVar14 = Global_24CEBB.f_79[0];
				Global_24CEBB[0 /*3*/] = { Global_24CEBB[iVar12 /*3*/] };
				Global_24CEBB.f_79[0] = Global_24CEBB.f_79[iVar12];
				Global_24CEBB[iVar12 /*3*/] = { vVar13 };
				Global_24CEBB.f_79[iVar12] = uVar14;
				*uParam0 = { Global_24CEBB[0 /*3*/] };
				*uParam1 = Global_24CEBB.f_79[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_21++;
			if (uParam2->f_21 < 2)
			{
				return func_220(uParam0, uParam1, uParam2);
			}
			else
			{
				uParam2->f_21 = 0;
				func_199(uParam0, uParam1, uParam2);
				return 1;
			}
		}
	}
	return 0;
}

void func_221(vector3 vParam0)//Position - 0xB319
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_24B2CE.f_6C8)
	{
		uVar1 = func_222(vParam0, fVar0, &fVar0);
		Global_24B2CE.f_85E[iVar2] = uVar1;
		iVar2++;
	}
}

int func_222(vector3 vParam0, float fParam1, float fParam2)//Position - 0xB354
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = -1;
	fVar1 = 1E+08f;
	iVar3 = 0;
	while (iVar3 < Global_24B2CE.f_6C8)
	{
		fVar2 = SYSTEM::VDIST2(vParam0, Global_24B2CE.f_6C9[iVar3 /*4*/]);
		if (fVar2 < fVar1 && fVar2 > fParam1)
		{
			iVar0 = iVar3;
			fVar1 = fVar2;
		}
		iVar3++;
	}
	*fParam2 = fVar1;
	return iVar0;
}

bool func_223(int iParam0)//Position - 0xB3B6
{
	return iParam0 == 50;
}

void func_224(var uParam0, var uParam1)//Position - 0xB3C3
{
	unk_0x03903ED3123A1EBC(uParam0, uParam1, 0.1f);
	Global_24B2CE.f_998 = unk_0x8A55B15F4133C912();
	Global_24B2CE.f_996 = 1;
	Global_24B2CE.f_999 = unk_0xED678C85A82F0AB9();
}

int func_225(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)//Position - 0xB3F6
{
	Global_24B2CE.f_2 = 0;
	if (fParam1 > 0f)
	{
		if (unk_0x38B362A95EA24163(vParam0, fParam1))
		{
			return 0;
		}
	}
	if (fParam2 > 0f)
	{
		if (unk_0xAE7193AAF1ECF1DB(vParam0.x, vParam0.y, (vParam0.z + 1f), fParam2) || unk_0xAE7193AAF1ECF1DB(vParam0, fParam2))
		{
			return 0;
		}
	}
	if (fParam3 > 0f)
	{
		if (unk_0x85BF1D9693A8E47F(vParam0, fParam3, iParam16))
		{
			return 0;
		}
	}
	Global_24B2CE.f_2++;
	if (bParam11)
	{
		if (unk_0x90629C6D0C640733(vParam0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_24B2CE.f_2++;
	if (fParam12 > 0f)
	{
		if (func_181(vParam0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_24B2CE.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_168(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_24B2CE.f_2++;
	return 1;
}

void func_226()//Position - 0xB507
{
	func_231();
	func_230();
	func_229();
	func_228();
	func_227();
}

void func_227()//Position - 0xB523
{
	struct<10> Var0;
	int iVar1;
	
	Var0.f_2 = 1176256410;
	iVar1 = 0;
	while (iVar1 < 128)
	{
		Global_24BE1E[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_228()//Position - 0xB55B
{
	struct<10> Var0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		Global_24B2CE.f_9A9.f_5A[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_229()//Position - 0xB58A
{
	struct<4> Var0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 8)
	{
		Global_24B2CE.f_9A9.f_39[iVar1 /*4*/] = { Var0 };
		iVar1++;
	}
}

void func_230()//Position - 0xB5B8
{
	struct<10> Var0;
	int iVar1;
	
	Var0.f_2 = 1176256410;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		Global_24B2CE.f_9A9.f_6[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_231()//Position - 0xB5F4
{
	struct<6> Var0;
	
	Var0.f_3 = -1;
	Global_24B2CE.f_9A9 = { Var0 };
}

void func_232()//Position - 0xB612
{
	if (Global_24B2CE.f_996)
	{
		if (unk_0x8A55B15F4133C912() == Global_24B2CE.f_998)
		{
			unk_0x156000B85911BE27();
		}
		else
		{
			unk_0x156000B85911BE27();
		}
		Global_24B2CE.f_996 = 0;
	}
}

int func_233(bool bParam0)//Position - 0xB645
{
	if (unk_0x17FAADF9916EF741())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

bool func_234(int iParam0)//Position - 0xB668
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xF243B7A14FCFD0F4(iParam0);
	return unk_0xD6513D668481290A(iParam0);
}

int func_235(int iParam0)//Position - 0xB686
{
	switch (iParam0)
	{
		case 0:
			return Local_95.f_31;
			break;
	}
	return 0;
}

int func_236()//Position - 0xB6A6
{
	if (iLocal_101 == 0)
	{
		if (unk_0xFA30DFD0084E92FE(Local_95.f_2, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_237()//Position - 0xB6C6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	var uVar9;
	
	if (!unk_0xFA30DFD0084E92FE(Local_95.f_2, 0))
	{
		unk_0xF0059F27F7BB6680(&(Local_95.f_2), 0);
		if (iLocal_101 != 0)
		{
			return 1;
		}
		else if (func_6(iLocal_103, 1, 1))
		{
			if (unk_0xBC93E1C9C8F877D9(false, 0) - unk_0xC77EC38683AB49CC(0)) >= func_457(iLocal_101)
			{
				if (unk_0x88E77A85289CC883(func_457(iLocal_101)))
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = unk_0xA95CF30C72EB526E(iLocal_103);
					iVar3 = unk_0x252B0CBDBF5803ED(iVar2, &uLocal_284, -1);
					bVar4 = true;
					iVar0 = 0;
					while (iVar0 < iVar3)
					{
						if (bVar4)
						{
							iVar5 = -1;
							bVar4 = false;
							iVar1 = 0;
							while (iVar1 < func_457(iLocal_101))
							{
								if (iVar5 == -1)
								{
									if (((!unk_0x7FFE36DB9042AF23(Local_95.f_A[iVar1 /*7*/]) && !unk_0xFA30DFD0084E92FE(Local_95.f_A[iVar1 /*7*/].f_2, 1)) && !unk_0xFA30DFD0084E92FE(Local_95.f_A[iVar1 /*7*/].f_2, 6)) && !unk_0xFA30DFD0084E92FE(Local_95.f_A[iVar1 /*7*/].f_2, 8))
									{
										iVar5 = iVar1;
										bVar4 = true;
									}
								}
								iVar1++;
							}
							if (iVar5 != -1)
							{
								if (unk_0x724D816EA203A79E(uLocal_284[iVar0]))
								{
									if (!unk_0x1D403DFADBC2DE3C(uLocal_284[iVar0], 0))
									{
										if (!unk_0x15DBD981998D4FE1(uLocal_284[iVar0]))
										{
											if (func_239(unk_0x6F79ECA8C83E4357(uLocal_284[iVar0])))
											{
												if (!unk_0x5CAE759AE8219D20(uLocal_284[iVar0]))
												{
													if (!unk_0x5237AF95232D78C5(uLocal_284[iVar0], 0))
													{
														if (func_5(unk_0x541C2AEF053615BC(uLocal_284[iVar0], 1), unk_0x541C2AEF053615BC(iVar2, 1), 625f))
														{
															unk_0x77815D3407C6700D(uLocal_284[iVar0], 1, 0);
															Local_95.f_A[iVar5 /*7*/].f_6 = iVar0;
															unk_0xF0059F27F7BB6680(&(Local_95.f_A[iVar5 /*7*/].f_2), 8);
															if (!unk_0xFA30DFD0084E92FE(Local_95.f_1, 12))
															{
																Local_95.f_8 = iLocal_106;
																unk_0xF0059F27F7BB6680(&(Local_95.f_1), 12);
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
						iVar0++;
					}
				}
			}
		}
	}
	else if (unk_0xFA30DFD0084E92FE(Local_95.f_1, 12))
	{
		iVar6 = 0;
		iVar7 = 0;
		bVar8 = false;
		iVar6 = 0;
		while (iVar6 < func_457(iLocal_101))
		{
			if (unk_0xFA30DFD0084E92FE(Local_95.f_A[iVar6 /*7*/].f_2, 1) || unk_0xFA30DFD0084E92FE(Local_95.f_A[iVar6 /*7*/].f_2, 6))
			{
				iVar7++;
			}
			else if (unk_0xFA30DFD0084E92FE(Local_95.f_A[iVar6 /*7*/].f_2, 8))
			{
				if (!unk_0x1D403DFADBC2DE3C(uLocal_284[Local_95.f_A[iVar6 /*7*/].f_6], 0))
				{
					if (unk_0x5CAE759AE8219D20(uLocal_284[Local_95.f_A[iVar6 /*7*/].f_6]))
					{
						if (!unk_0x4DF785C4DF542CD0(uLocal_284[Local_95.f_A[iVar6 /*7*/].f_6]))
						{
							unk_0xC7587327285D9984(uLocal_284[Local_95.f_A[iVar6 /*7*/].f_6]);
							bVar8 = true;
						}
						else
						{
							unk_0xEC9E10B23689A01D(uLocal_284[Local_95.f_A[iVar6 /*7*/].f_6], 1);
							Local_95.f_A[iVar6 /*7*/] = unk_0x5902CDB733CD6ADE(uLocal_284[Local_95.f_A[iVar6 /*7*/].f_6]);
							unk_0xF2A50F5F6E7737D8(Local_95.f_A[iVar6 /*7*/], 1);
							unk_0xF0059F27F7BB6680(&(Local_95.f_A[iVar6 /*7*/].f_2), 0);
							Local_95.f_A[iVar6 /*7*/].f_1 = iLocal_101;
							Local_95.f_A[iVar6 /*7*/].f_4 = func_65(iLocal_101);
							func_63(iVar6);
							unk_0x7CB6FD92BE491AD9(&(Local_95.f_A[iVar6 /*7*/].f_2), 8);
							iVar7++;
						}
					}
					else
					{
						bVar8 = true;
					}
				}
			}
			iVar6++;
		}
		if (!bVar8 || unk_0xCCA9497DA4595710(iLocal_106, Local_95.f_8) > 5000)
		{
			if (iVar7 >= func_457(iLocal_101))
			{
				unk_0xF0059F27F7BB6680(&(Local_95.f_2), 4);
			}
			iVar6 = 0;
			while (iVar6 < 16)
			{
				uLocal_284[iVar6] = uVar9;
				iVar6++;
			}
			iVar6 = 0;
			while (iVar6 < func_457(iLocal_101))
			{
				if (unk_0xFA30DFD0084E92FE(Local_95.f_A[iVar6 /*7*/].f_2, 8))
				{
					func_238(&(Local_95.f_A[iVar6 /*7*/]));
					unk_0x7CB6FD92BE491AD9(&(Local_95.f_A[iVar6 /*7*/].f_2), 8);
				}
				iVar6++;
			}
			unk_0x7CB6FD92BE491AD9(&(Local_95.f_1), 12);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_238(int iParam0)//Position - 0xBAA5
{
	int iVar0;
	
	if (unk_0x8EA6CABD14F1B89A(*iParam0))
	{
		iVar0 = unk_0xD14280F674B4DBF4(*iParam0);
		unk_0x91BCA7FA73FFCDF2(&iVar0);
	}
}

int func_239(int iParam0)//Position - 0xBAC9
{
	if (((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == joaat("mp_m_freemode_01") || iParam0 == joaat("mp_m_fibsec_01")) || iParam0 == joaat("mp_s_m_armoured_01")) || iParam0 == joaat("s_f_y_airhostess_01")) || iParam0 == joaat("s_f_y_baywatch_01")) || iParam0 == joaat("s_f_y_cop_01")) || iParam0 == joaat("s_f_y_ranger_01")) || iParam0 == joaat("s_f_y_scrubs_01")) || iParam0 == joaat("s_f_y_sheriff_01")) || iParam0 == joaat("s_m_m_armoured_01")) || iParam0 == joaat("s_m_m_armoured_02")) || iParam0 == joaat("s_m_m_bouncer_01")) || iParam0 == joaat("s_m_m_ciasec_01")) || iParam0 == joaat("s_m_m_chemsec_01")) || iParam0 == joaat("s_m_m_doctor_01")) || iParam0 == joaat("s_m_m_fiboffice_01")) || iParam0 == joaat("s_m_m_fiboffice_02")) || iParam0 == joaat("s_m_m_highsec_01")) || iParam0 == joaat("s_m_m_highsec_02")) || iParam0 == joaat("s_m_m_janitor")) || iParam0 == joaat("s_m_m_lsmetro_01")) || iParam0 == joaat("s_m_m_marine_01")) || iParam0 == joaat("s_m_m_marine_02")) || iParam0 == joaat("s_m_m_paramedic_01")) || iParam0 == joaat("s_m_m_pilot_01")) || iParam0 == joaat("s_m_m_pilot_02")) || iParam0 == joaat("s_m_m_postal_01")) || iParam0 == joaat("s_m_m_postal_02")) || iParam0 == joaat("s_m_m_prisguard_01")) || iParam0 == joaat("s_m_m_scientist_01")) || iParam0 == joaat("s_m_m_security_01")) || iParam0 == joaat("s_m_m_ups_01")) || iParam0 == joaat("s_m_m_ups_02")) || iParam0 == joaat("s_m_y_airworker")) || iParam0 == joaat("s_m_y_armymech_01")) || iParam0 == joaat("s_m_y_baywatch_01")) || iParam0 == joaat("s_m_y_blackops_01")) || iParam0 == joaat("s_m_y_blackops_02")) || iParam0 == joaat("s_m_y_cop_01")) || iParam0 == joaat("s_m_y_doorman_01")) || iParam0 == joaat("s_m_y_fireman_01")) || iParam0 == joaat("s_m_y_garbage")) || iParam0 == joaat("s_m_y_hwaycop_01")) || iParam0 == joaat("s_m_y_marine_01")) || iParam0 == joaat("s_m_y_marine_02")) || iParam0 == joaat("s_m_y_marine_03")) || iParam0 == joaat("s_m_y_pilot_01")) || iParam0 == joaat("s_m_y_ranger_01")) || iParam0 == joaat("s_m_y_sheriff_01")) || iParam0 == joaat("s_m_y_swat_01")) || iParam0 == joaat("s_m_y_uscg_01")) || iParam0 == joaat("s_m_y_valet_01")) || iParam0 == joaat("s_m_y_waiter_01")) || iParam0 == joaat("u_m_m_jewelsec_01"))
	{
		return 0;
	}
	return 1;
}

int func_240()//Position - 0xBDC7
{
	if (unk_0xFA30DFD0084E92FE(Local_95.f_1, 6))
	{
		return 1;
	}
	else if (iLocal_101 == 0)
	{
		Local_95.f_31 = func_241(Local_95.f_24, 1);
		unk_0xF0059F27F7BB6680(&(Local_95.f_1), 6);
		return 1;
	}
	else
	{
		unk_0xF0059F27F7BB6680(&(Local_95.f_1), 6);
		return 1;
	}
	return 0;
}

int func_241(vector3 vParam0, int iParam1)//Position - 0xBE16
{
	int iVar0;
	
	if (func_242(vParam0, 1301f, -1696f, 300f, 350f, 0))
	{
		return joaat("g_m_y_mexgoon_01");
	}
	else if (func_242(vParam0, 1100f, -196f, 300f, 350f, 0) || func_242(vParam0, 77f, 3657f, 100f, 150f, 0))
	{
		return joaat("g_m_y_lost_01");
	}
	else if (func_242(vParam0, 208f, -1835f, 200f, 250f, 0))
	{
		return joaat("g_m_y_ballaorig_01");
	}
	else if (func_242(vParam0, -26f, -1450f, 200f, 250f, 0))
	{
		return joaat("g_m_y_famca_01");
	}
	else if (func_242(vParam0, -654f, -922f, 300f, 350f, 0))
	{
		return joaat("g_m_y_korean_02");
	}
	else if (func_242(vParam0, 1840f, 3657f, 450f, 500f, 0))
	{
		return joaat("a_m_m_hillbilly_02");
	}
	else if (func_242(vParam0, 550f, -1885f, 200f, 250f, 0))
	{
		return joaat("g_m_y_salvagoon_01");
	}
	else if (iParam1 == 1)
	{
		iVar0 = unk_0x491B2241281A03B7(0, 100);
		if (iVar0 < 33)
		{
			return joaat("mp_g_m_pros_01");
		}
		else if (iVar0 >= 66)
		{
			return joaat("g_m_m_armgoon_01");
		}
		else
		{
			return joaat("g_m_m_chigoon_01");
		}
		if (vParam0.y > 800f)
		{
			iVar0 = unk_0x491B2241281A03B7(0, 100);
			if (iVar0 < 33)
			{
				return joaat("a_m_m_hillbilly_02");
			}
		}
	}
	return joaat("mp_g_m_pros_01");
}

bool func_242(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0xBFD3
{
	return unk_0xF0F2FC9DE291567F(vParam0, vParam1, bParam3) <= fParam2;
}

void func_243(int iParam0)//Position - 0xBFEC
{
	if (unk_0x36CEFBE9B745A58D(iParam0))
	{
	}
	Local_95.f_24 = { unk_0x541C2AEF053615BC(iParam0, 1) };
	if (func_244(iParam0, 0))
	{
		unk_0xF0059F27F7BB6680(&(Local_95.f_1), 17);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Local_95.f_1), 17);
	}
}

int func_244(int iParam0, int iParam1)//Position - 0xC02E
{
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (!unk_0x1D403DFADBC2DE3C(iParam0, 0) || iParam1)
		{
			if (unk_0x149E9368A11035DE(iParam0))
			{
				if (unk_0x2C13E57F6AC776F8(iParam0) >= 0.7f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_245()//Position - 0xC06F
{
	bool bVar0;
	
	if (unk_0x0DE6397A2CB3EF75())
	{
		if (unk_0xFA30DFD0084E92FE(Local_95.f_1, 7))
		{
			return 1;
		}
		else
		{
			bVar0 = false;
			switch (iLocal_101)
			{
				case 0:
					if (unk_0xFA30DFD0084E92FE(Local_95.f_2, 11))
					{
						if (func_6(iLocal_103, 1, 1))
						{
							if (SYSTEM::VDIST2(func_8(iLocal_103), Local_95.f_27) > 625f)
							{
								unk_0x7CB6FD92BE491AD9(&(Local_95.f_2), 11);
								unk_0x7CB6FD92BE491AD9(&iLocal_98, 8);
							}
						}
					}
					else
					{
						if (func_6(iLocal_103, 1, 1))
						{
							bVar0 = true;
							if (func_248())
							{
								bVar0 = false;
							}
						}
						if (bVar0)
						{
							func_58();
						}
						else
						{
							func_59();
						}
						if (unk_0xFA30DFD0084E92FE(Local_95.f_1, 5))
						{
							if (func_247())
							{
								func_59();
								unk_0xF0059F27F7BB6680(&(Local_95.f_1), 7);
							}
						}
					}
					break;
				
				case 1:
					if (func_6(iLocal_103, 1, 1))
					{
						bVar0 = true;
						if (func_246())
						{
							bVar0 = false;
						}
					}
					if (bVar0)
					{
						func_58();
					}
					else
					{
						func_59();
					}
					if (unk_0xFA30DFD0084E92FE(Local_95.f_1, 5))
					{
						if (unk_0xCCA9497DA4595710(iLocal_106, Local_95.f_5) > 30000)
						{
							func_59();
							unk_0xF0059F27F7BB6680(&(Local_95.f_1), 7);
						}
					}
					break;
				}
			}
	}
	return 0;
}

int func_246()//Position - 0xC194
{
	int iVar0;
	
	iVar0 = unk_0xA95CF30C72EB526E(iLocal_103);
	if (((((unk_0x2A348A3A98B80B13(iVar0) || unk_0x149E9368A11035DE(iVar0)) || func_29(iLocal_103, 1, 0)) || func_37(iLocal_103, 0)) || func_37(iLocal_103, 7)) || func_28(iLocal_103))
	{
		return 1;
	}
	if (func_113(iLocal_103, 1))
	{
		if (iLocal_103 > -1)
		{
			if (Global_18402B[iLocal_103 /*770*/] != 1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_247()//Position - 0xC21B
{
	if (!unk_0xFA30DFD0084E92FE(Local_95.f_1, 18))
	{
		if (unk_0xCCA9497DA4595710(iLocal_106, Local_95.f_5) > 5000)
		{
			unk_0xF0059F27F7BB6680(&(Local_95.f_1), 18);
			return 1;
		}
	}
	else if (unk_0xCCA9497DA4595710(iLocal_106, Local_95.f_5) > 60000)
	{
		return 1;
	}
	return 0;
}

int func_248()//Position - 0xC26A
{
	int iVar0;
	
	iVar0 = unk_0xA95CF30C72EB526E(iLocal_103);
	if (((((((((unk_0x8910237449BB6F79(iVar0) > 10f || unk_0x2A348A3A98B80B13(iVar0)) || unk_0x149E9368A11035DE(iVar0)) || func_29(iLocal_103, 1, 0)) || func_57(iLocal_103)) || func_37(iLocal_103, 0)) || func_37(iLocal_103, 7)) || func_28(iLocal_103)) || Global_24FB5C[iLocal_103 /*406*/].f_EA) || func_56(unk_0xA95CF30C72EB526E(iLocal_103), joaat("titan")))
	{
		return 1;
	}
	if (func_113(iLocal_103, 1))
	{
		if (iLocal_103 > -1)
		{
			if (Global_18402B[iLocal_103 /*770*/] != 1)
			{
				return 1;
			}
		}
	}
	if (iLocal_103 != -1)
	{
		if (unk_0xFA30DFD0084E92FE(Local_97[iLocal_103 /*5*/].f_1, 4))
		{
			return 1;
		}
	}
	return 0;
}

void func_249()//Position - 0xC354
{
	if (!unk_0xFA30DFD0084E92FE(Local_95.f_1, 14))
	{
		Local_95.f_9 = iLocal_106;
		unk_0xF0059F27F7BB6680(&(Local_95.f_1), 14);
	}
}

void func_250()//Position - 0xC37B
{
	if (Local_95.f_2C != Local_97[iLocal_102 /*5*/].f_4)
	{
		Local_95.f_2C = Local_97[iLocal_102 /*5*/].f_4;
	}
}

void func_251()//Position - 0xC3A0
{
	if (!unk_0xFA30DFD0084E92FE(Local_95.f_1, 10))
	{
		Local_95.f_2D = func_457(iLocal_101);
		Local_95.f_2E = 0;
		Local_95.f_2F = 0;
		unk_0xF0059F27F7BB6680(&(Local_95.f_1), 10);
	}
}

void func_252()//Position - 0xC3D5
{
	func_253();
	if (!unk_0xFA30DFD0084E92FE(Local_95.f_1, 8))
	{
		if (unk_0xFA30DFD0084E92FE(Local_95.f_2, 7))
		{
			if (unk_0xCCA9497DA4595710(iLocal_106, Local_95.f_7) > 300000)
			{
				unk_0xF0059F27F7BB6680(&(Local_95.f_2), 8);
			}
		}
	}
}

void func_253()//Position - 0xC417
{
	if (!unk_0xFA30DFD0084E92FE(Local_95.f_2, 7))
	{
		Local_95.f_7 = iLocal_106;
		unk_0xF0059F27F7BB6680(&(Local_95.f_2), 7);
	}
}

void func_254()//Position - 0xC43C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	unk_0xF0059F27F7BB6680(&iLocal_98, 7);
	if (unk_0xFA30DFD0084E92FE(Local_95.f_3, 1))
	{
	}
	if (unk_0xFA30DFD0084E92FE(Local_95.f_3, 2))
	{
	}
	if (unk_0xFA30DFD0084E92FE(Local_95.f_3, 3))
	{
	}
	if (unk_0xFA30DFD0084E92FE(Local_95.f_3, 9))
	{
	}
	if (unk_0xFA30DFD0084E92FE(Local_95.f_3, 4))
	{
	}
	if (unk_0xFA30DFD0084E92FE(Local_95.f_3, 5))
	{
	}
	if (unk_0xFA30DFD0084E92FE(Local_95.f_3, 11))
	{
		if (unk_0xB5CEFD608600A09F() == iLocal_102)
		{
			unk_0x7CB6FD92BE491AD9(&iLocal_98, 7);
			if (Local_95.f_32 || Local_95.f_34)
			{
				unk_0xF0059F27F7BB6680(&iLocal_98, 7);
			}
			else if (func_359("MPCT_MERts", "FM_MERRYWEATHER", 85))
			{
				unk_0xF0059F27F7BB6680(&iLocal_98, 7);
			}
		}
	}
	if (unk_0xFA30DFD0084E92FE(Local_95.f_3, 6))
	{
		if (unk_0xB5CEFD608600A09F() == iLocal_102)
		{
			unk_0x7CB6FD92BE491AD9(&iLocal_98, 7);
			if (Local_95.f_32 || Local_95.f_34)
			{
				unk_0xF0059F27F7BB6680(&iLocal_98, 7);
			}
			else if (func_359("MPCT_MERtd", "FM_MERRYWEATHER", 85))
			{
				unk_0xF0059F27F7BB6680(&iLocal_98, 7);
			}
		}
	}
	if (unk_0xFA30DFD0084E92FE(Local_95.f_3, 7))
	{
		if (unk_0xB5CEFD608600A09F() == iLocal_102)
		{
			unk_0x7CB6FD92BE491AD9(&iLocal_98, 7);
			if (func_330())
			{
				if (!Local_95.f_32)
				{
					if (Local_95.f_34)
					{
						iLocal_285 = func_329(Local_95.f_35);
					}
					else
					{
						iLocal_285 = func_325(12);
					}
					if (iLocal_285 > 0)
					{
						func_323(iLocal_285, 1, 0, 0f);
						func_311(iLocal_285, 4, 1, 1);
					}
					unk_0xF0059F27F7BB6680(&iLocal_98, 7);
				}
				else
				{
					unk_0xF0059F27F7BB6680(&iLocal_98, 7);
				}
			}
		}
	}
	if (unk_0xFA30DFD0084E92FE(Local_95.f_3, 0))
	{
		if (unk_0xB5CEFD608600A09F() == iLocal_102)
		{
			if (!unk_0xFA30DFD0084E92FE(Local_95.f_2, 1))
			{
				unk_0x7CB6FD92BE491AD9(&iLocal_98, 7);
				if (func_359("MPCT_mugfail", "LAMAR", 19))
				{
					unk_0xF0059F27F7BB6680(&iLocal_98, 7);
				}
			}
		}
		else if (unk_0xB5CEFD608600A09F() == iLocal_103)
		{
			if (unk_0xFA30DFD0084E92FE(Local_95.f_2, 1))
			{
				if (unk_0xFA30DFD0084E92FE(Local_95.f_2, 12))
				{
					iVar0 = SYSTEM::ROUND((IntToFloat(Global_40001.f_1791) * Global_40001.f_10C5));
					func_270(0, "XPT_MEDIUMT", -1859646258, 757237446, iVar0, 1, -1, 0);
					func_256(47, 1);
				}
			}
		}
	}
	if (unk_0xFA30DFD0084E92FE(Local_95.f_3, 8))
	{
		if (unk_0xB5CEFD608600A09F() == iLocal_102)
		{
			unk_0x7CB6FD92BE491AD9(&iLocal_98, 7);
			if (func_330())
			{
				if (iLocal_101 == 0)
				{
					iLocal_285 = (func_325(2) * func_457(iLocal_101));
					iVar1 = 3;
				}
				else
				{
					if (Local_95.f_34)
					{
						iLocal_285 = func_329(Local_95.f_35);
					}
					else
					{
						iLocal_285 = func_325(12);
					}
					iVar1 = 4;
				}
				if (!Local_95.f_32)
				{
					if (iLocal_285 > 0)
					{
						func_323(iLocal_285, 1, 0, 0f);
						func_311(iLocal_285, iVar1, 1, 0);
					}
					unk_0xF0059F27F7BB6680(&iLocal_98, 7);
				}
				else
				{
					unk_0xF0059F27F7BB6680(&iLocal_98, 7);
				}
			}
		}
	}
	if (unk_0xFA30DFD0084E92FE(Local_95.f_3, 10))
	{
		if (unk_0xB5CEFD608600A09F() == iLocal_102)
		{
			unk_0x7CB6FD92BE491AD9(&iLocal_98, 7);
			if (func_330())
			{
				if (iLocal_101 == 0)
				{
					iLocal_285 = (func_325(2) * func_457(iLocal_101));
					iVar2 = 3;
				}
				else
				{
					if (Local_95.f_34)
					{
						iLocal_285 = func_329(Local_95.f_35);
					}
					else
					{
						iLocal_285 = func_325(12);
					}
					iVar2 = 4;
				}
				if (!Local_95.f_32)
				{
					if (iLocal_285 > 0)
					{
						func_323(iLocal_285, 1, 0, 0f);
						func_311(iLocal_285, iVar2, 1, 0);
					}
					unk_0xF0059F27F7BB6680(&iLocal_98, 7);
				}
				else
				{
					unk_0xF0059F27F7BB6680(&iLocal_98, 7);
				}
			}
		}
	}
	if (unk_0xFA30DFD0084E92FE(iLocal_98, 7))
	{
		func_255();
	}
}

void func_255()//Position - 0xC794
{
	unk_0x7CB6FD92BE491AD9(&(Global_18402B[unk_0x822BEC8031773562() /*770*/].f_8F), iLocal_101);
	Global_18402B[unk_0x822BEC8031773562() /*770*/].f_90 = -1;
	if (iLocal_101 == 1)
	{
		if (unk_0x51FE3C0716E82F24(uLocal_283))
		{
			unk_0xA77AF936A56AEF7A(uLocal_283);
		}
	}
	func_486();
	func_518();
}

int func_256(int iParam0, int iParam1)//Position - 0xC7DE
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_257(iParam0, iParam1);
}

int func_257(int iParam0, int iParam1)//Position - 0xC7F9
{
	if (func_269(14) && !func_268(iParam0))
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
	if (func_267(&Global_411EB6))
	{
		if (func_265(&Global_411EB6, iParam0))
		{
			return 0;
		}
		if (func_258(&Global_411EB6, iParam0))
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

int func_258(var uParam0, int iParam1)//Position - 0xC896
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x6D5CBCB6411EDE89(iParam1))
	{
		return 0;
	}
	if (func_269(14) && !func_268(iParam1))
	{
		return 0;
	}
	if (func_265(uParam0, iParam1))
	{
		return 0;
	}
	if (func_264(uParam0) < 0f)
	{
		func_263(uParam0, 0);
	}
	func_261(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_259(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_259(var uParam0, int iParam1)//Position - 0xC947
{
	int iVar0;
	
	if (unk_0x6D5CBCB6411EDE89(iParam1))
	{
		return 0;
	}
	if (func_269(14) && !func_268(iParam1))
	{
		return 0;
	}
	if (func_265(uParam0, iParam1))
	{
		return 0;
	}
	if (func_264(uParam0) < 0f)
	{
		func_263(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_260(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_260(var uParam0, int iParam1)//Position - 0xC9C2
{
	return (*uParam0)[iParam1] == 78;
}

void func_261(var uParam0)//Position - 0xC9D3
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_262(uParam0, iVar0);
		iVar0++;
	}
	func_263(uParam0, (Global_411EB5 - 0.5f));
}

void func_262(var uParam0, int iParam1)//Position - 0xCA07
{
	(*uParam0)[iParam1] = 78;
}

void func_263(var uParam0, float fParam1)//Position - 0xCA17
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

float func_264(var uParam0)//Position - 0xCA34
{
	return uParam0->f_50;
}

bool func_265(var uParam0, int iParam1)//Position - 0xCA40
{
	return func_266(uParam0, iParam1) != -1;
}

int func_266(var uParam0, int iParam1)//Position - 0xCA52
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

bool func_267(var uParam0)//Position - 0xCA7F
{
	return uParam0->f_4F == 1;
}

int func_268(int iParam0)//Position - 0xCA8D
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

bool func_269(int iParam0)//Position - 0xCADD
{
	return Global_8C41 == iParam0;
}

var func_270(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0xCAEB
{
	return func_271(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_271(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0xCB07
{
	var uVar0;
	
	uVar0 = func_272(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_272(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0xCB2A
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_310(unk_0xB5CEFD608600A09F()) || func_309(unk_0xB5CEFD608600A09F()))
	{
		if (Global_40001.f_2340 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_40001.f_2340;
		}
	}
	else if (func_307() || func_305(unk_0xB5CEFD608600A09F()))
	{
		if (Global_40001.f_567F > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_40001.f_567F;
		}
	}
	else if (Global_40001.f_178A > 10000)
	{
		iVar2 = 10000;
	}
	else
	{
		iVar2 = Global_40001.f_178A;
	}
	if (func_304(sParam2))
	{
	}
	if (func_303())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_301(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_40001.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_300(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_298(0, &iVar1);
					break;
				
				case 3:
					func_298(1, &iVar1);
					break;
				
				case 1:
					func_296(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1992E3)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_293(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_282((func_292(unk_0xB5CEFD608600A09F()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x5FF267E54EB49897(iVar1, iParam8, iParam9);
				if (Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_27.f_2 != -1)
				{
					func_293(1165, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_277(iVar1);
				}
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_273((func_275(unk_0xB5CEFD608600A09F()) + iVar1));
			}
			else
			{
				func_273((func_275(unk_0xB5CEFD608600A09F()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_273(int iParam0)//Position - 0xCD28
{
	if (func_303())
	{
		Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_D3.f_5 = iParam0;
		func_274(joaat("mpply_globalxp"), iParam0);
	}
}

void func_274(int iParam0, int iParam1)//Position - 0xCD53
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, 1);
	}
}

int func_275(int iParam0)//Position - 0xCD6F
{
	if (iParam0 > -1)
	{
		if (func_6(iParam0, 0, 1))
		{
			if (iParam0 == unk_0xB5CEFD608600A09F())
			{
				return func_276(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_18402B[iParam0 /*770*/].f_D3.f_5;
			}
		}
		else
		{
			return func_276(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_276(int iParam0)//Position - 0xCDC0
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (unk_0x6CB99B97664C3727(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_277(int iParam0)//Position - 0xCDDE
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_138(unk_0xB5CEFD608600A09F()) };
	if (unk_0xB9ACC1154C623363())
	{
		if (unk_0xD7F4457CECF10121(&Var0))
		{
			iVar1 = func_280(func_281(&Var0));
			if (iVar1 == 0)
			{
				func_279(&Global_14F5C9, iParam0);
				func_278(joaat("mpply_crew_local_xp_0"), Global_14F5C9);
			}
			else if (iVar1 == 1)
			{
				func_279(&Global_14F5CA, iParam0);
				func_278(joaat("mpply_crew_local_xp_1"), Global_14F5CA);
			}
			else if (iVar1 == 2)
			{
				func_279(&Global_14F5CB, iParam0);
				func_278(joaat("mpply_crew_local_xp_2"), Global_14F5CB);
			}
			else if (iVar1 == 3)
			{
				func_279(&Global_14F5CC, iParam0);
				func_278(joaat("mpply_crew_local_xp_3"), Global_14F5CC);
			}
			else if (iVar1 == 4)
			{
				func_279(&Global_14F5CD, iParam0);
				func_278(joaat("mpply_crew_local_xp_4"), Global_14F5CD);
			}
		}
	}
}

void func_278(int iParam0, int iParam1)//Position - 0xCEB2
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_14F5C4 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_14F5C6 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_14F5C6 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_14F5C7 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_14F5C8 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_14F5C9 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_14F5CA = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_14F5CB = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_14F5CC = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_14F5CD = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_14F5CE = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_14F5CF = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_14F5D0 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_14F5D1 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_14F5D2 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_14F5D3 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_14F5D4 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_279(var uParam0, int iParam1)//Position - 0xCFD7
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_280(int iParam0)//Position - 0xCFE8
{
	if (iParam0 == Global_14F5C4)
	{
		return 0;
	}
	else if (iParam0 == Global_14F5C5)
	{
		return 1;
	}
	else if (iParam0 == Global_14F5C6)
	{
		return 2;
	}
	else if (iParam0 == Global_14F5C7)
	{
		return 3;
	}
	else if (iParam0 == Global_14F5C8)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_281(var uParam0)//Position - 0xD045
{
	if (unk_0xB9ACC1154C623363())
	{
		if (unk_0xD7F4457CECF10121(uParam0))
		{
			return Global_25801B;
		}
	}
	return Global_25801B;
}

void func_282(int iParam0, int iParam1, int iParam2)//Position - 0xD068
{
	if (func_303())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_40001.f_2320 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_14F642[func_291(-1)])
				{
					unk_0x5FF267E54EB49897(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_14F642[func_291(-1)])
				{
					return;
				}
			}
		}
		if (Global_40001.f_231F == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x5FF267E54EB49897(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_40001.f_231F == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x5FF267E54EB49897(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_290(unk_0xB5CEFD608600A09F()))
		{
			Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_D3.f_1 = iParam0;
			Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_D3.f_6 = func_288(iParam0, 1);
		}
		func_287(639, iParam0, -1, 1);
		func_286(640, func_288(iParam0, 1), -1, 1, 0);
		Global_14F642[func_291(-1)] = iParam0;
		func_283(7, 0);
	}
}

void func_283(int iParam0, int iParam1)//Position - 0xD189
{
	int iVar0;
	
	if (func_285(iParam0, iParam1))
	{
		iVar0 = func_284();
		Global_258004[iVar0] = iParam0;
	}
}

int func_284()//Position - 0xD1AC
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

int func_285(int iParam0, var uParam1)//Position - 0xD1E1
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

void func_286(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0xD267
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_291(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, iParam3);
	}
}

void func_287(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xD297
{
	int iVar0;
	
	iVar0 = Global_269BC5[iParam0 /*3*/][func_291(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_14F606[func_291(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_14F60C[func_291(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_14F612[func_291(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_14F618[func_291(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_14F5EE[func_291(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_14F5F4[func_291(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_14F5FA[func_291(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_14F600[func_291(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_14F5D6[func_291(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_14F5DC[func_291(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_14F5E2[func_291(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_14F5E8[func_291(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_14F61E[func_291(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_14F624[func_291(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_14F62A[func_291(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_14F630[func_291(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_14F636[func_291(iParam2)] = iParam1;
			break;
		
		case 7229:
			Global_14F63C[func_291(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_14F642[func_291(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_14F648[func_291(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_270CF3[0 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_270CF3[1 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 2925:
			Global_270CF3[2 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_270CF3[3 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 7818:
			Global_270D5E[func_291(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_14F64E[func_291(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_14F654[func_291(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_14F65A[func_291(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_14F660[func_291(iParam2)] = iParam1;
			break;
		
		case 3049:
			Global_270D27[0 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 3050:
			Global_270D27[1 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 3051:
			Global_270D27[2 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 3052:
			Global_270D27[3 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_270D27[4 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 3632:
			Global_270D61[0 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 3633:
			Global_270D61[1 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 3634:
			Global_270D61[2 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 3635:
			Global_270D61[3 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_270D61[4 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_270D71[0 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_270D71[1 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_270D71[2 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_270D71[3 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_270D71[4 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_270D27[5 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_270CF3[4 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 3659:
			Global_270D81[func_291(iParam2)] = iParam1;
			break;
		
		case 3660:
			Global_270D8A[func_291(iParam2)] = iParam1;
			break;
		
		case 3661:
			Global_270D84[func_291(iParam2)] = iParam1;
			break;
		
		case 3662:
			Global_270D8D[func_291(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_270D87[func_291(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_270D90[func_291(iParam2)] = iParam1;
			break;
		
		case 3685:
			Global_270D93[func_291(iParam2)] = iParam1;
			break;
		
		case 3225:
			Global_270D27[6 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 3226:
			Global_270CF3[5 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_270D27[7 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 3228:
			Global_270CF3[6 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 4015:
			Global_270D27[8 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 4016:
			Global_270CF3[7 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 4018:
			Global_270D27[9 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_270CF3[8 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_270D27[10 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_270CF3[9 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_270D27[11 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_270CF3[10 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 6105:
			Global_270D27[12 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 6106:
			Global_270CF3[11 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 6163:
			Global_270D27[13 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 6164:
			Global_270CF3[12 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 6541:
			Global_270D27[14 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 6542:
			Global_270CF3[13 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 6554:
			Global_270D27[15 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 6555:
			Global_270CF3[14 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 6557:
			Global_270D27[16 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_270CF3[15 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_270D27[17 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_270CF3[16 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_288(int iParam0, bool bParam1)//Position - 0xDA51
{
	if (bParam1)
	{
	}
	return func_289(iParam0, 0);
}

int func_289(int iParam0, int iParam1)//Position - 0xDA65
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_45E53[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_45E53[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_290(int iParam0)//Position - 0xDB24
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xFA30DFD0084E92FE(Global_252E21.f_1, iParam0);
	}
	return 1;
}

int func_291(int iParam0)//Position - 0xDB49
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_196();
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

int func_292(int iParam0)//Position - 0xDB7D
{
	if (Global_1406D2.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xB5CEFD608600A09F())
			{
				return Global_14F642[func_291(-1)];
			}
			else if (func_290(iParam0))
			{
				return Global_18402B[iParam0 /*770*/].f_D3.f_1;
			}
		}
	}
	else
	{
		return Global_14F642[func_291(-1)];
	}
	return 0;
}

void func_293(int iParam0, int iParam1, int iParam2)//Position - 0xDBDA
{
	int iVar0;
	
	iVar0 = func_295(iParam0, func_291(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_294(iParam0))
	{
		func_286(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_287(iParam0, iVar0, iParam2, 1);
	}
}

int func_294(int iParam0)//Position - 0xDC1C
{
	if (Global_14F5C3)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
			case 777:
			case 778:
			case 779:
			case 780:
			case 767:
			case 768:
			case 769:
			case 770:
			case 757:
			case 758:
			case 759:
			case 760:
			case 1303:
			case 7229:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 1236:
			case 1876:
			case 2267:
			case 2925:
			case 3054:
			case 7818:
			case 3049:
			case 3050:
			case 3051:
			case 3052:
			case 3053:
			case 3228:
			case 3230:
			case 3632:
			case 3633:
			case 3634:
			case 3635:
			case 3636:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3223:
			case 3217:
			case 3659:
			case 3660:
			case 3661:
			case 3662:
			case 3663:
			case 3664:
			case 3685:
			case 3226:
			case 3225:
			case 4016:
			case 4015:
			case 4019:
			case 4018:
			case 4022:
			case 4021:
			case 4025:
			case 4024:
			case 6106:
			case 6105:
			case 6164:
			case 6163:
			case 6529:
			case 6528:
			case 6542:
			case 6541:
			case 6555:
			case 6554:
			case 6558:
			case 6557:
			case 6561:
			case 6560:
				return 1;
				break;
			}
	}
	return 0;
}

int func_295(int iParam0, int iParam1, int iParam2)//Position - 0xDE14
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_291(iParam1)];
	if (unk_0x6CB99B97664C3727(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_296(int iParam0)//Position - 0xDE46
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F());
	iVar0 = 0;
	while (iVar0 < unk_0x81C86888AEA2F49B())
	{
		iVar4 = unk_0xCFA8A401AAD7BB5A(iVar0);
		if (unk_0x05086B70D2CFEA6F(iVar4))
		{
			iVar5 = unk_0x4ED43B67B3F05E0F(iVar4);
			if (unk_0x343CB262BF0CDF5A(iVar5) != -1)
			{
				if (unk_0x343CB262BF0CDF5A(iVar5) == iVar1 || func_140(unk_0x343CB262BF0CDF5A(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0xB5CEFD608600A09F())
					{
						if (func_139(unk_0xB5CEFD608600A09F(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_297(*iParam0, 100) * (10f * Global_40001.f_1079)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_297(*iParam0, 100) * (20f * Global_40001.f_1072)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_297(int iParam0, int iParam1)//Position - 0xDF31
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_298(bool bParam0, int iParam1)//Position - 0xDF52
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < unk_0x81C86888AEA2F49B())
		{
			iVar3 = iVar0;
			if (unk_0x05086B70D2CFEA6F(iVar3))
			{
				iVar4 = unk_0x4ED43B67B3F05E0F(iVar3);
				if (func_6(iVar4, 0, 1))
				{
					if (iVar4 != unk_0xB5CEFD608600A09F())
					{
						iVar1++;
						if (func_139(unk_0xB5CEFD608600A09F(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_6(iVar4, 1, 1))
			{
				if (iVar4 != unk_0xB5CEFD608600A09F())
				{
					if (func_299(unk_0xB5CEFD608600A09F(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_139(unk_0xB5CEFD608600A09F(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_297(*iParam1, 100) * (10f * Global_40001.f_1079)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_297(*iParam1, 100) * (20f * Global_40001.f_1072)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_299(int iParam0, int iParam1)//Position - 0xE06A
{
	return SYSTEM::VDIST(func_8(iParam0), func_8(iParam1));
	return 0f;
}

int func_300(int iParam0)//Position - 0xE086
{
	int iVar0;
	
	if (unk_0x8820DB58BCD4A148() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_297(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_301(int iParam0)//Position - 0xE0BD
{
	if (iParam0 < 0)
	{
		if (unk_0xC40EDFF7541407A8(iParam0) > func_292(unk_0xB5CEFD608600A09F()))
		{
			iParam0 = -func_292(unk_0xB5CEFD608600A09F());
		}
	}
	if (func_302(8000, 0, 0) > 0)
	{
		if (func_302(8000, 0, 0) < (iParam0 + func_292(unk_0xB5CEFD608600A09F())))
		{
			iParam0 = (func_302(8000, 0, 0) - func_292(unk_0xB5CEFD608600A09F()));
		}
	}
	return iParam0;
}

int func_302(int iParam0, bool bParam1, int iParam2)//Position - 0xE121
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_45E53[iParam0];
}

int func_303()//Position - 0xE149
{
	return 1;
}

int func_304(char* sParam0)//Position - 0xE152
{
	if (unk_0xEAEFBBEC1AEA464B(sParam0))
	{
		return 1;
	}
	else if (unk_0x3362CDE8460ED38B(sParam0, "") || unk_0x3362CDE8460ED38B(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_305(int iParam0)//Position - 0xE18A
{
	return func_306(func_33(iParam0));
}

int func_306(int iParam0)//Position - 0xE19C
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_307()//Position - 0xE1B6
{
	if (unk_0x517823CA390A19F6())
	{
		return func_171();
	}
	return func_308(Global_440000.f_1EF38);
}

int func_308(int iParam0)//Position - 0xE1DA
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_40001.f_1385[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_309(int iParam0)//Position - 0xE214
{
	return Global_24FB5C[iParam0 /*406*/].f_6F == 2;
}

bool func_310(int iParam0)//Position - 0xE229
{
	return Global_24FB5C[iParam0 /*406*/].f_6F == 7;
}

void func_311(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xE23E
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	StringCopy(&Var0, func_322(iParam1), 16);
	StringCopy(&Var1, func_321(iParam2), 16);
	switch (iParam1)
	{
		case 0:
			iVar2 = 1287308202;
			break;
		
		case 1:
			iVar2 = 691372038;
			break;
		
		case 2:
			iVar2 = 1480707108;
			break;
		
		case 3:
			iVar2 = 1512499951;
			break;
		
		case 4:
			iVar2 = 562283735;
			break;
		
		case 5:
			iVar2 = -154732333;
			break;
		
		case 6:
			iVar2 = -1362660491;
			break;
		
		case 7:
			iVar2 = 645708827;
			break;
		
		case 8:
			iVar2 = 767907967;
			break;
		
		case 9:
			iVar2 = -1970151306;
			break;
		
		case 10:
			iVar2 = 718859568;
			break;
		
		case 11:
			iVar2 = -1955564771;
			break;
		
		case 12:
			iVar2 = 892388724;
			break;
		
		case 13:
			iVar2 = -1426920838;
			break;
		
		case 14:
			iVar2 = -664597565;
			break;
		
		case 15:
			iVar2 = 1864522104;
			break;
		
		case 16:
			iVar2 = 215608230;
			break;
	}
	if (func_46())
	{
		func_312(iVar2, iParam0, &iVar3, bParam3, bParam3, 0);
		Global_41092C[iVar3 /*80*/].f_8.f_2B = { Var0 };
		Global_41092C[iVar3 /*80*/].f_8.f_2F = { Var1 };
	}
	else
	{
		unk_0xFCB169DE2DC9317A(iParam0, &Var0, &Var1, bParam3);
	}
}

void func_312(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0xE3BA
{
	int iVar0;
	
	if (!func_46())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
			if (iParam1 > 0)
			{
				func_313(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
			func_313(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_313(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xE880
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_46())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x060D652F887827B8(func_196()) || unk_0xEBA8BD5AE6FF01CA())
		{
			Global_410B52 = 1;
			return 0;
		}
		if (Global_2584E7)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_410B53 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_41092C[iVar2 /*80*/].f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || unk_0x4EB807D82D2F9433(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0xCEA9F48EB9CF0CC7(iVar4))
		{
			*uParam0 = func_320(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_41092C[*uParam0 /*80*/].f_45 = 1;
					Global_41092C[*uParam0 /*80*/].f_49 = 1;
				}
			}
			Global_410B45 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_410B51 = 1;
			Global_410B54 = iParam4;
			Global_410B56 = iParam3;
			Global_410B57 = 1;
			Global_410B55 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_410B54 = iParam4;
			Global_410B56 = iParam3;
			Global_410B57 = 1;
			Global_410B55 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_319(1, iParam4);
			Global_410B51 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_314(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_314(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xEA24
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xF0059F27F7BB6680(&(Global_24FB5C[unk_0xB5CEFD608600A09F() /*406*/].f_76.f_47), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_315(iParam0);
	}
}

void func_315(int iParam0)//Position - 0xEA5C
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_46())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_318(iParam0))
		{
			if (!bVar0)
			{
				unk_0xC7150D5EF5AFC7C1();
			}
		}
		else if (!bVar0)
		{
			unk_0xA48F55B05F42FD2C(Global_41092C[iParam0 /*80*/]);
		}
		func_316(&(Global_41092C[iParam0 /*80*/]));
	}
}

void func_316(var uParam0)//Position - 0xEAAE
{
	*uParam0 = 0;
	*uParam0 = 2147483647;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1593119440;
	uParam0->f_4 = -2085313189;
	uParam0->f_5 = 0;
	uParam0->f_6 = 1227573907;
	uParam0->f_7 = -1161833819;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	func_317(&(uParam0->f_8.f_3));
	func_317(&(uParam0->f_8.f_10));
	StringCopy(&(uParam0->f_8.f_1D), "", 32);
	StringCopy(&(uParam0->f_8.f_25), "", 24);
	StringCopy(&(uParam0->f_8.f_2B), "", 16);
	StringCopy(&(uParam0->f_8.f_2F), "", 16);
	uParam0->f_8.f_33 = 0;
	uParam0->f_8.f_34 = 0;
	uParam0->f_8.f_35 = 0;
	uParam0->f_8.f_36 = 0;
	uParam0->f_8.f_37 = 0;
	uParam0->f_8.f_38 = 0;
	uParam0->f_45 = 0;
	uParam0->f_46 = 0;
	uParam0->f_47 = 0;
	uParam0->f_48 = 0;
	uParam0->f_4A = 0;
	uParam0->f_49 = 0;
	uParam0->f_4B = 0;
	uParam0->f_4C = 0;
	uParam0->f_4D = 0;
	uParam0->f_4F = 0;
}

void func_317(var uParam0)//Position - 0xEBA4
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_A = 0;
	uParam0->f_B = 0;
	uParam0->f_C = 0;
}

int func_318(int iParam0)//Position - 0xEBEC
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_41092C[iParam0 /*80*/].f_5 == 1;
	}
	return 0;
}

void func_319(int iParam0, int iParam1)//Position - 0xEC14
{
	Global_25897B = iParam1;
	Global_25897A = iParam0;
}

int func_320(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9)//Position - 0xEC28
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_41092C[iVar0 /*80*/].f_2 == 0)
		{
			if (!func_46())
			{
				iParam0 = iVar0 + 900;
			}
			Global_41092C[iVar0 /*80*/].f_2 = 1;
			Global_41092C[iVar0 /*80*/].f_1 = iParam5;
			Global_41092C[iVar0 /*80*/].f_3 = uParam1;
			Global_41092C[iVar0 /*80*/].f_4 = iParam2;
			Global_41092C[iVar0 /*80*/].f_7 = iParam3;
			Global_41092C[iVar0 /*80*/].f_5 = 0;
			Global_41092C[iVar0 /*80*/] = iParam0;
			Global_41092C[iVar0 /*80*/].f_6 = iParam4;
			Global_41092C[iVar0 /*80*/].f_48 = uParam8;
			Global_41092C[iVar0 /*80*/].f_47 = iParam7;
			Global_41092C[iVar0 /*80*/].f_4A = iParam9;
			Global_41092C[iVar0 /*80*/].f_49 = 0;
			Global_41092C[iVar0 /*80*/].f_4B = unk_0xC87A57742F7D3C06();
			Global_41092C[iVar0 /*80*/].f_4F = 0;
			Global_410B45 = 0;
			if (bParam6)
			{
				Global_41092C[iVar0 /*80*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_321(int iParam0)//Position - 0xED21
{
	switch (iParam0)
	{
		case 0:
			return "NOTREACHTARGET";
			break;
		
		case 1:
			return "TARGET_ESCAPE";
			break;
		
		case 2:
			return "DELIVERY_FAIL";
			break;
		
		case 3:
			return "NOT_USED";
			break;
		
		case 4:
			return "TEAM_QUIT";
			break;
		
		case 5:
			return "SERVER_ERROR";
			break;
		
		case 6:
			return "RECEIVE_LJ_L";
			break;
		
		case 8:
			return "CHALLENGE_PLAYER_LEFT";
			break;
	}
	return "DEFAULT";
}

char* func_322(int iParam0)//Position - 0xEDAB
{
	switch (iParam0)
	{
		case 0:
			return "BACKUP_VAGOS";
		
		case 1:
			return "BACKUP_LOST";
		
		case 2:
			return "BACKUP_FAMILIES";
		
		case 3:
			return "HIRE_MUGGER";
		
		case 4:
			return "HIRE_MERCENARY";
		
		case 5:
			return "BUY_CARDROPOFF";
		
		case 6:
			return "HELI_PICKUP";
		
		case 7:
			return "BOAT_PICKUP";
		
		case 8:
			return "CLEAR_WANTED";
		
		case 9:
			return "HEAD_2_HEAD";
		
		case 10:
			return "CHALLENGE";
		
		case 11:
			return "SHARE_LAST_JOB";
		
		case 13:
			return "REFUNDAPPEA";
		
		case 14:
			return "AMMO_DROP_REF";
		
		case 15:
			return "ORBITAL_MANUAL";
		
		case 16:
			return "ORBITAL_AUTO";
		
		default:
	}
	return "DEFAULT";
}

void func_323(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0xEE8B
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = SYSTEM::FLOOR((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_D3.f_4 = iVar1;
	Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_D3.f_3 = (Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_D3.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_324(iVar1, 0);
	}
}

void func_324(int iParam0, bool bParam1)//Position - 0xEF0E
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

int func_325(int iParam0)//Position - 0xEF1F
{
	int iVar0;
	
	iVar0 = 0;
	if (func_328(iParam0) >= 0)
	{
		iVar0 = func_328(iParam0);
	}
	else
	{
		iVar0 = func_326(iParam0);
	}
	return iVar0;
}

int func_326(int iParam0)//Position - 0xEF49
{
	switch (iParam0)
	{
		case 1:
			return 1000;
			break;
		
		case 10:
			return 5000;
			break;
		
		case 11:
			return 8000;
			break;
		
		case 8:
			return 1000;
			break;
		
		case 0:
			return 500;
			break;
		
		case 9:
			return 250;
			break;
		
		case 13:
			return 1000;
			break;
		
		case 12:
			return 7500;
			break;
		
		case 2:
			return 1000;
			break;
		
		case 14:
			return 500;
			break;
		
		case 20:
			if (func_327())
			{
				return 0;
			}
			if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 1)
			{
				return 200;
			}
			else if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 2)
			{
				return 400;
			}
			else if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 3)
			{
				return 600;
			}
			else if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 4)
			{
				return 800;
			}
			else if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 5)
			{
				return 1000;
			}
			break;
		
		case 6:
			return 500;
			break;
		
		case 22:
			return 200;
			break;
		
		case 23:
			return 400;
			break;
		
		case 24:
			return 700;
			break;
		
		case 25:
			return 100;
			break;
		
		case 26:
			return 1000;
			break;
		
		case 57:
			return 700;
			break;
		
		case 35:
			return 5000;
			break;
		
		case 15:
			return 0;
			break;
		
		case 17:
			return 0;
			break;
		
		case 18:
			return 0;
			break;
		
		case 19:
			return 0;
			break;
		
		case 21:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 39:
			return 200;
			break;
		
		case 40:
			return 1000;
		
		case 41:
			return 750;
		
		case 42:
			return 0;
	}
	return 0;
}

bool func_327()//Position - 0xF15B
{
	return unk_0xFA30DFD0084E92FE(func_295(6420, -1, 0), 19);
}

int func_328(int iParam0)//Position - 0xF172
{
	switch (iParam0)
	{
		case 1:
			return Global_40001.f_1794;
			break;
		
		case 10:
			return Global_40001.f_1015;
			break;
		
		case 11:
			return Global_40001.f_1016;
			break;
		
		case 8:
			return Global_40001.f_1013;
			break;
		
		case 0:
			return Global_40001.f_1005;
			break;
		
		case 9:
			return Global_40001.f_1014;
			break;
		
		case 13:
			return Global_40001.f_1018;
			break;
		
		case 12:
			return Global_40001.f_1017;
			break;
		
		case 2:
			return Global_40001.f_100F;
			break;
		
		case 14:
			return Global_40001.f_1019;
			break;
		
		case 20:
			if (func_327())
			{
				return 0;
			}
			if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 1)
			{
				return Global_40001.f_179B;
			}
			else if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 2)
			{
				return Global_40001.f_179C;
			}
			else if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 3)
			{
				return Global_40001.f_179D;
			}
			else if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 4)
			{
				return Global_40001.f_179E;
			}
			else if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 5)
			{
				return Global_40001.f_179F;
			}
			break;
		
		case 6:
			return Global_40001.f_1012;
			break;
		
		case 22:
			return Global_40001.f_101F;
			break;
		
		case 23:
			return Global_40001.f_1020;
			break;
		
		case 24:
			return Global_40001.f_1021;
			break;
		
		case 25:
			return Global_40001.f_1022;
			break;
		
		case 26:
			return Global_40001.f_1023;
			break;
		
		case 35:
			return Global_40001.f_19D4;
			break;
		
		case 15:
			return Global_40001.f_1795;
			break;
		
		case 17:
			return Global_40001.f_1795;
			break;
		
		case 18:
			return Global_40001.f_1795;
			break;
		
		case 19:
			return Global_40001.f_1795;
			break;
		
		case 21:
			return Global_40001.f_1795;
			break;
		
		case 36:
			return Global_40001.f_1BA5;
			break;
		
		case 39:
			return -1;
			break;
		
		case 40:
			return Global_40001.f_2FE5;
			break;
		
		case 41:
			return Global_40001.f_2FE6;
			break;
		
		case 42:
			return Global_40001.f_2FE7;
			break;
		
		case 43:
			return Global_40001.f_39D4;
			break;
		
		case 44:
			return Global_40001.f_39D6;
			break;
		
		case 57:
			return Global_40001.f_1021;
			break;
	}
	return 0;
}

int func_329(int iParam0)//Position - 0xF444
{
	switch (iParam0)
	{
		case 1:
			return Global_40001.f_5922;
		
		case 2:
			return Global_40001.f_5923;
		
		case 3:
			return Global_40001.f_5924;
		
		default:
	}
	return 9999999;
}

int func_330()//Position - 0xF487
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	
	if (Local_95.f_32 || Local_95.f_34)
	{
		if (!Local_95.f_33)
		{
			if (!unk_0xFA30DFD0084E92FE(Local_95.f_3, 7))
			{
				func_331("HS_UNABLE", iLocal_103, 0, 0, 0, 1, 1, 0);
			}
		}
		return 1;
	}
	switch (iLocal_101)
	{
		case 0:
			sVar0 = "MPCT_muglost";
			sVar1 = "LAMAR";
			iVar2 = 19;
			break;
		
		case 1:
			sVar0 = "MPCT_MERloc";
			sVar1 = "FM_MERRYWEATHER";
			iVar2 = 85;
			break;
	}
	if (func_359(sVar0, sVar1, iVar2))
	{
		return 1;
	}
	return 0;
}

int func_331(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7)//Position - 0xF515
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = unk_0x343CB262BF0CDF5A(iParam1);
	if (unk_0x75206900382D1E30(unk_0xB5CEFD608600A09F(), iParam1) || iParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var2, unk_0xD885B2234FC72D62(iParam1), 64);
		}
		else
		{
			StringCopy(&Var2, unk_0xD885B2234FC72D62(iParam1), 64);
		}
		if (unk_0xF1734B55490E9045(&Var2))
		{
		}
		unk_0x2E94302CFF011F2E(sParam0);
		if ((iVar1 != -1 && unk_0x517823CA390A19F6()) && iVar1 < 4)
		{
			if (Global_440000.f_1DBFD[iVar1] != -1)
			{
				unk_0x449F0674640D94C0(func_357(iVar1, iParam1, 0));
			}
			else
			{
				unk_0x449F0674640D94C0(func_339(iParam1, -2, 1, 0));
			}
		}
		else
		{
			unk_0x449F0674640D94C0(func_339(iParam1, -2, 1, 0));
		}
		unk_0x607C19B90D297FE2(func_337(&Var2));
		if (!bParam4)
		{
			iVar0 = unk_0x5E48BB10C6423FD5(0, 1);
		}
		else
		{
			Global_26210D = { func_138(iParam1) };
			if (unk_0x24723877416AAAFC(&Global_2620C7, 35, &Global_26210D))
			{
				iVar3 = 0;
				if (unk_0x3362CDE8460ED38B(&(Global_2620C7.f_16), "Leader") && Global_2620C7.f_1E == 0)
				{
					iVar3 = 1;
				}
				if (Global_2620C7.f_15 > 0)
				{
					iVar4 = 0;
				}
				else
				{
					iVar4 = 1;
				}
				if (bParam6)
				{
					if (bParam7)
					{
						Var2 = { func_336(&Var2) };
					}
					iVar0 = unk_0x0F92E4F5455F4880(iVar4, unk_0x5E69F635CCDEE0CF(&Global_2620C7, 35), &(Global_2620C7.f_11), Global_2620C7.f_1E, iVar3, 0, Global_2620C7, &Var2, Global_140CDB, Global_140CDC, Global_140CDD);
				}
				else
				{
					iVar0 = unk_0x8D3D8A069BE71027(iVar4, unk_0x5E69F635CCDEE0CF(&Global_2620C7, 35), &(Global_2620C7.f_11), Global_2620C7.f_1E, iVar3, 0, Global_2620C7, Global_140CDB, Global_140CDC, Global_140CDD);
				}
			}
			else
			{
				iVar0 = unk_0x5E48BB10C6423FD5(0, 1);
			}
		}
		func_332(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_332(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0xF6D3
{
	int iVar0;
	
	if ((!func_335() || !unk_0x517823CA390A19F6()) || !func_194(unk_0xB5CEFD608600A09F(), 0))
	{
		return;
	}
	iVar0 = func_333(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_195C05.f_5[iVar0 /*53*/] = iParam0;
		Global_195C05.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_195C05.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_195C05.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_195C05.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_195C05.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_195C05.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_195C05.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_195C05.f_5[iVar0 /*53*/].f_C), sParam3, 64);
		StringCopy(&(Global_195C05.f_5[iVar0 /*53*/].f_1C[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_195C05.f_5[iVar0 /*53*/].f_1C[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_195C05.f_5[iVar0 /*53*/].f_1C[2 /*6*/]), sParam11, 24);
	}
}

int func_333(int iParam0)//Position - 0xF7DB
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_195C05 - 1))
	{
		if (iParam0 > Global_195C05.f_5[iVar0 /*53*/].f_1)
		{
			func_334(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_195C05++;
	if (Global_195C05 > 5)
	{
		Global_195C05 = 5;
		return Global_195C05;
	}
	return (Global_195C05 - 1);
}

void func_334(int iParam0)//Position - 0xF83D
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_195C05.f_5[iVar0 /*53*/] = { Global_195C05.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_335()//Position - 0xF876
{
	return unk_0x7B2F21BFE86AEB61(-1762644250);
}

struct<16> func_336(char* sParam0)//Position - 0xF887
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

var func_337(char* sParam0)//Position - 0xF8B2
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_338(&cVar0);
}

var func_338(char[4] cParam0)//Position - 0xF8D6
{
	return cParam0;
}

int func_339(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0xF8E0
{
	int iVar0;
	int iVar1;
	
	if (func_141(iParam0))
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = unk_0x343CB262BF0CDF5A(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_440000.f_1DBFD[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if ((func_141(unk_0xB5CEFD608600A09F()) || (func_356() && func_355())) && !unk_0xFA30DFD0084E92FE(Global_267214.f_11E0, 31))
	{
		iVar1 = func_354();
		if (unk_0x724D816EA203A79E(iVar1))
		{
			if (unk_0x15DBD981998D4FE1(iVar1))
			{
				if (unk_0x5363B43856FA7779(iVar1) != -1)
				{
					if (func_6(unk_0x5363B43856FA7779(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x517823CA390A19F6()) && iParam1 < 4)
						{
							if (Global_440000.f_1DBFD[iParam1] != -1)
							{
								return func_357(iParam1, iParam0, 0);
							}
							else
							{
								return func_346(iParam0, unk_0x5363B43856FA7779(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_346(iParam0, unk_0x5363B43856FA7779(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x517823CA390A19F6()) && iParam1 < 4)
			{
				if (Global_440000.f_1DBFD[iParam1] != -1)
				{
					return func_357(iParam1, iParam0, 0);
				}
				else
				{
					return func_340(0, -1, 0);
				}
			}
			else
			{
				return func_340(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x517823CA390A19F6()) && iParam1 < 4)
	{
		if (Global_440000.f_1DBFD[iParam1] != -1)
		{
			return func_357(iParam1, iParam0, 0);
		}
		else
		{
			return func_346(iParam0, unk_0xB5CEFD608600A09F(), iParam1, bParam2, bParam3);
		}
	}
	return func_346(iParam0, unk_0xB5CEFD608600A09F(), iParam1, bParam2, bParam3);
}

int func_340(bool bParam0, int iParam1, bool bParam2)//Position - 0xFAB0
{
	return func_341(unk_0xB5CEFD608600A09F(), bParam0, iParam1, bParam2);
}

int func_341(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0xFAC6
{
	int iVar0;
	
	if (!unk_0x96B1061E8F3CBC9A(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x343CB262BF0CDF5A(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_140(iVar0, iParam2, 0) && !unk_0xFA30DFD0084E92FE(Global_440000.f_F, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_345(1);
				}
				else
				{
					return func_345(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xFA30DFD0084E92FE(Global_440000.f_4, 20))
			{
				return func_342(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_342(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_345(1);
	}
	return func_345(0);
}

int func_342(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0xFB8A
{
	int iVar0;
	
	iVar0 = func_344(iParam0, iParam1, iParam3);
	if (func_343(Global_440000.f_1EF38, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_343(int iParam0, bool bParam1)//Position - 0xFCA2
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_440000.f_243FE == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_40001.f_20D8[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_344(int iParam0, int iParam1, int iParam2)//Position - 0xFCF3
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_140(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_345(bool bParam0)//Position - 0xFD3A
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_346(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0xFD51
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x343CB262BF0CDF5A(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_18402B[unk_0xB5CEFD608600A09F() /*770*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_18402B[iVar2 /*770*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_351(1))
			{
				iVar3 = func_350(iParam0);
				if (!iVar3 == -1)
				{
					return func_348(iVar3);
				}
			}
			if ((func_178(iParam1, iParam0, iVar0, 0) && !unk_0xFA30DFD0084E92FE(Global_440000.f_F, 18)) || ((func_140(unk_0x343CB262BF0CDF5A(iParam1), unk_0x343CB262BF0CDF5A(iParam0), 0) && unk_0xFA30DFD0084E92FE(Global_440000.f_F, 23)) && !unk_0xFA30DFD0084E92FE(Global_440000.f_F, 18)))
			{
				return func_345(1);
			}
			else if (unk_0xFA30DFD0084E92FE(Global_440000.f_F, 26))
			{
				return func_347(1);
			}
			else
			{
				return func_341(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1805D3 || Global_1805CA) || Global_18402B[iParam0 /*770*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1805D3 == 1 && Global_1805DD == 0))
			{
				return func_345(1);
			}
			else
			{
				return func_341(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1805CE && Global_1803FC.f_E == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_350(iParam0);
	if (!iVar4 == -1)
	{
		return func_348(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_347(bool bParam0)//Position - 0xFEF5
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

int func_348(int iParam0)//Position - 0xFF0C
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_349(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_349(int iParam0)//Position - 0xFFCF
{
	return Global_24E35D.f_817.f_2C[iParam0 /*2*/].f_1;
}

int func_350(int iParam0)//Position - 0xFFE6
{
	if (!iParam0 == func_13())
	{
		if (func_14(iParam0, 1))
		{
			return Global_24E35D.f_817.f_B[func_12(iParam0)];
		}
	}
	return -1;
}

int func_351(int iParam0)//Position - 0x10018
{
	if ((func_353() || func_352()) || (func_171() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_352()//Position - 0x10047
{
	return Global_255A46.f_F;
}

var func_353()//Position - 0x10055
{
	return Global_255A46.f_E;
}

var func_354()//Position - 0x10063
{
	return Global_240006.f_2;
}

bool func_355()//Position - 0x10071
{
	return unk_0xFA30DFD0084E92FE(Global_240006, 4);
}

bool func_356()//Position - 0x10082
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_27.f_12, 14);
}

int func_357(int iParam0, int iParam1, bool bParam2)//Position - 0x1009F
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_EF621.f_C[iParam0];
	if (func_351(1))
	{
		iVar2 = func_350(iParam1);
		if (!iVar2 == -1)
		{
			return func_348(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0xFA30DFD0084E92FE(Global_440000.f_62[iParam0 /*10231*/].f_14F1[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_13())
	{
		if (Global_440000.f_1DBFD[iParam0] != -1 && Global_440000.f_1DBFD[iParam0] <= 4)
		{
			if (Global_440000.f_1DBFD[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_440000.f_1DBFD[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_440000.f_1DBFD[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_440000.f_1DBFD[iParam0] == 4)
			{
				if (unk_0xFA30DFD0084E92FE(Global_440000.f_F, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_440000.f_1DBFD[iParam0];
			}
		}
		else
		{
			iVar0 = func_341(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0xFA30DFD0084E92FE(Global_440000.f_15, 13))
		{
			iVar0 = func_358(iParam0);
		}
		if (unk_0xFA30DFD0084E92FE(Global_440000.f_18, 29))
		{
			iVar0 = 0;
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_358(int iParam0)//Position - 0x10204
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_440000.f_24429;
			break;
		
		case 1:
			iVar0 = Global_440000.f_2442A;
			break;
		
		case 2:
			iVar0 = Global_440000.f_2442B;
			break;
		
		case 3:
			iVar0 = Global_440000.f_2442C;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

int func_359(char* sParam0, char* sParam1, int iParam2)//Position - 0x102D9
{
	if (!unk_0x3362CDE8460ED38B(sParam0, "NULL"))
	{
		if (!unk_0xFA30DFD0084E92FE(iLocal_100, 0))
		{
			func_456(&uLocal_118, 3, 0, sParam1, 0, 1);
			if (func_361(&uLocal_118, iParam2, "CT_AUD", sParam0, 0, 0))
			{
				unk_0xF0059F27F7BB6680(&iLocal_100, 0);
			}
		}
		else if (!unk_0xFA30DFD0084E92FE(iLocal_100, 1))
		{
			if (func_360(0))
			{
				unk_0xF0059F27F7BB6680(&iLocal_100, 1);
			}
		}
		else if (!func_360(0))
		{
			iLocal_100 = 0;
			return 1;
		}
	}
	return 0;
}

int func_360(int iParam0)//Position - 0x10356
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

int func_361(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x103B0
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_454())
	{
		return 0;
	}
	if (func_453())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_362(uParam0, iParam1, sParam2, sParam3, 1, iParam5, iParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

int func_362(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)//Position - 0x103F5
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xF1734B55490E9045(sParam2))
	{
		return 0;
	}
	if (unk_0xF5429F058A48A07C(sParam2) > 7)
	{
		return 0;
	}
	if (unk_0xF1734B55490E9045(sParam3))
	{
		return 0;
	}
	if (unk_0xF5429F058A48A07C(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = unk_0x56BEECB328B6D29D(unk_0x1377080E9B0BD993());
	iVar1 = func_452(sParam2, sParam3);
	iVar2 = 0;
	if (!unk_0xF1734B55490E9045(sParam7))
	{
		iVar2 = unk_0x56BEECB328B6D29D(sParam7);
	}
	if (func_451(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_446(iParam6))
	{
		return 0;
	}
	if (func_443(iVar0, iVar1, iVar2))
	{
		if (func_442())
		{
			return 0;
		}
		func_441();
		return func_369(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, iParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_368(iParam4))
	{
		return 0;
	}
	func_363(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, iParam6);
	return 0;
}

void func_363(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x104DA
{
	Global_14B309.f_28.f_1 = iParam0;
	Global_14B309.f_28.f_2 = iParam1;
	Global_14B309.f_28.f_3 = iParam2;
	StringCopy(&(Global_14B309.f_28.f_4), sParam3, 16);
	Global_14B309.f_28.f_8 = iParam4;
	Global_14B309.f_28.f_9 = iParam5;
	Global_14B309.f_28.f_E = iParam6;
	func_364(iParam4);
	func_441();
	Global_14B309.f_28.f_D = unk_0x863D0D1A37055D36(unk_0xED678C85A82F0AB9(), 7000);
}

void func_364(int iParam0)//Position - 0x10547
{
	if (func_367(iParam0))
	{
		func_366();
		return;
	}
	func_365();
}

void func_365()//Position - 0x10563
{
	Global_14B309.f_28.f_A = 0;
}

void func_366()//Position - 0x10574
{
	Global_14B309.f_28.f_A = 1;
}

int func_367(int iParam0)//Position - 0x10585
{
	switch (iParam0)
	{
		case 4:
		case 5:
			return 1;
		
		case 0:
		case 1:
		case 7:
		case 8:
		case 2:
		case 3:
			return 0;
		
		default:
	}
	return 0;
}

bool func_368(int iParam0)//Position - 0x105CD
{
	return iParam0 > Global_14B309.f_28.f_8;
}

int func_369(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)//Position - 0x105E0
{
	struct<2> Var0;
	
	func_440();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_437(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_434(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_437(uParam0, sParam3, sParam4);
		}
		return func_417(uParam0, iParam1, sParam3, sParam4, iParam7);
	}
	if (iParam5 == 5)
	{
		return func_416(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_406(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_405(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_370(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_370(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x106DA
{
	bool bVar0;
	
	func_404();
	bVar0 = true;
	if (func_372(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_371(120000);
		return 1;
	}
	return 0;
}

void func_371(int iParam0)//Position - 0x10711
{
	Global_14B309.f_28.f_B = unk_0x863D0D1A37055D36(unk_0xED678C85A82F0AB9(), iParam0);
	Global_14B309.f_28.f_C = 1;
}

int func_372(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)//Position - 0x10734
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_13();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0xD885B2234FC72D62(iVar0);
		iVar1 = func_398(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x41FE031452B5ECF8(unk_0xED678C85A82F0AB9(), Global_14B309.f_28.f_D))
			{
				return 0;
			}
		}
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_397(sParam5, bParam6, &iVar3);
	uVar5 = func_395(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0xF1734B55490E9045(sParam8))
	{
		iVar6++;
		if (!unk_0xF1734B55490E9045(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x3362CDE8460ED38B(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (unk_0xFA30DFD0084E92FE(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0xFA30DFD0084E92FE(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0xF1734B55490E9045(sVar2))
	{
		bVar12 = func_394(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_376(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0xFA30DFD0084E92FE(iParam4, 0))
	{
		func_375();
	}
	func_404();
	func_374();
	func_373();
	return 1;
}

void func_373()//Position - 0x10886
{
	Global_14B309.f_39 = 0;
	Global_14B309.f_39.f_1 = 0;
}

void func_374()//Position - 0x1089E
{
	Global_14B309.f_28 = 3;
}

void func_375()//Position - 0x108AD
{
	unk_0xF0059F27F7BB6680(&Global_93B, 8);
}

int func_376(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x108BE
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_377(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_BFE = iParam6;
			unk_0xF0059F27F7BB6680(&Global_411DCA, 0);
		}
		return 1;
	}
	return 0;
}

int func_377(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0x1092A
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x3362CDE8460ED38B(sParam14, sParam15))
	{
	}
	func_388();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_389D == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_389D == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_389D == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			if (unk_0xBCBEDE9A08E4ED89(unk_0xBC25C936A095B5BA()))
			{
				return 0;
			}
		}
		if (Global_411DBB == 1)
		{
			return 0;
		}
		if (unk_0xB731B8C5BCE89836(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (unk_0xB731B8C5BCE89836(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_387() == 0)
	{
		func_385();
		return 0;
	}
	func_384(Global_411DBA);
	StringCopy(&(Global_4118D9[Global_411DBA /*104*/]), sParam1, 64);
	Global_4118D9[Global_411DBA /*104*/].f_11 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_4118D9[Global_411DBA /*104*/].f_18 = iParam2;
	}
	Global_4118D9[Global_411DBA /*104*/].f_19 = iParam7;
	Global_4118D9[Global_411DBA /*104*/].f_1A = uParam8;
	Global_4118D9[Global_411DBA /*104*/].f_1D = uParam9;
	Global_4118D9[Global_411DBA /*104*/].f_1E = uParam12;
	Global_4118D9[Global_411DBA /*104*/].f_1F = uParam11;
	Global_4118D9[Global_411DBA /*104*/].f_1C = 0;
	Global_4118D9[Global_411DBA /*104*/].f_20 = iParam3;
	StringCopy(&(Global_4118D9[Global_411DBA /*104*/].f_21), sParam4, 64);
	Global_4118D9[Global_411DBA /*104*/].f_31 = iParam6;
	StringCopy(&(Global_4118D9[Global_411DBA /*104*/].f_32), sParam5, 64);
	Global_4118D9[Global_411DBA /*104*/].f_42 = iParam13;
	StringCopy(&(Global_4118D9[Global_411DBA /*104*/].f_43), sParam14, 64);
	StringCopy(&(Global_4118D9[Global_411DBA /*104*/].f_53), sParam15, 64);
	func_388();
	switch (iParam16)
	{
		case 3:
			Global_4118D9[Global_411DBA /*104*/].f_63[Global_389D] = 1;
			break;
		
		case 0:
			Global_4118D9[Global_411DBA /*104*/].f_63[0] = 1;
			break;
		
		case 2:
			Global_4118D9[Global_411DBA /*104*/].f_63[2] = 1;
			break;
		
		case 1:
			Global_4118D9[Global_411DBA /*104*/].f_63[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_389D)
		{
			case 0:
				func_383(0);
				break;
			
			case 1:
				func_383(1);
				break;
			
			case 2:
				func_383(2);
				break;
			
			case 3:
				func_383(3);
				break;
			
			default:
				break;
			}
	}
	if (iParam7 == 1)
	{
		switch (iParam16)
		{
			case 3:
				Global_411DBB = 1;
				break;
			
			case 0:
				Global_411DBB = 1;
				break;
			
			case 2:
				Global_411DBB = 1;
				break;
			
			case 1:
				Global_411DBB = 1;
				break;
			}
	}
	Global_41E5[Global_411DBA] = 0;
	if (bParam10)
	{
		func_388();
		if (Global_3864)
		{
			StringCopy(&Global_3892, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_389D)
			{
				case 0:
					StringCopy(&Global_3892, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_3892, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_3892, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_3892, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_C60[Global_389D /*2811*/][0 /*281*/].f_103 == 1)
		{
			if (!func_382())
			{
				unk_0xC4BA30B532FE260F(-1, "Text_Arrive_Tone", &Global_3892, 1);
			}
		}
	}
	if (!Global_3944)
	{
		if (Global_389D.f_1 == 6)
		{
			func_381(Global_388A, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_378(1);
			func_381(Global_388A, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_3889), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_378(int iParam0)//Position - 0x10CED
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
	
	Global_41E4 = 0;
	Global_B98 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_B74[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_269(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_942[iVar1 /*15*/].f_B)
				{
					if (iVar0 == Global_942[iVar1 /*15*/].f_4)
					{
						if (Global_B74[iVar0] == 0)
						{
							Global_B50[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0xFA30DFD0084E92FE(Global_93C, 3))
								{
									iVar2 = 42;
									Global_3947 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_3947 = 0;
								}
								unk_0x29CD142125FE177B(Global_388A, "SET_DATA_SLOT");
								unk_0x1E1FB49121565EB6(1);
								unk_0x1E1FB49121565EB6(iVar0);
								unk_0x1E1FB49121565EB6(Global_942[iVar1 /*15*/].f_A);
								unk_0x1E1FB49121565EB6(0);
								func_380(&(Global_942[iVar1 /*15*/]));
								unk_0x1E1FB49121565EB6(iVar2);
								unk_0xF9FBC2F3F73D94C9();
							}
							if (Global_25805E)
							{
								if (iVar1 == 14)
								{
									func_379(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_41DF), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_B74[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_942[iVar1 /*15*/].f_B)
				{
					if (iVar0 == Global_942[iVar1 /*15*/].f_4)
					{
						if (Global_B74[iVar0] == 0)
						{
							Global_B50[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_19B04.f_3720[iVar3 /*104*/].f_18 != 0)
									{
										if (Global_19B04.f_3720[iVar3 /*104*/].f_1C == 0)
										{
											if (Global_19B04.f_3720[iVar3 /*104*/].f_63[Global_389D] == 1)
											{
												Global_41E4++;
											}
										}
									}
									iVar3++;
								}
								func_379(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_41E4), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_11542)
								{
									iVar4 = 0;
									iVar4 = Global_4118D8;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4118D9[iVar5 /*104*/].f_18 != 0)
										{
											if (Global_4118D9[iVar5 /*104*/].f_1C == 0)
											{
												if (Global_4118D9[iVar5 /*104*/].f_63[Global_389D] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_379(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_389D)
									{
										case 0:
											iVar6 = Global_90C6;
											break;
										
										case 1:
											iVar6 = Global_90C7;
											break;
										
										case 2:
											iVar6 = Global_90C8;
											break;
										
										default:
											break;
									}
									func_379(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_379(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_41DF), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x29CD142125FE177B(Global_388A, "SET_DATA_SLOT");
								unk_0x1E1FB49121565EB6(1);
								unk_0x1E1FB49121565EB6(iVar0);
								unk_0x1E1FB49121565EB6(Global_942[iVar1 /*15*/].f_A);
								unk_0x1E1FB49121565EB6(0);
								func_380(&(Global_942[iVar1 /*15*/]));
								unk_0x1E1FB49121565EB6(Global_941);
								unk_0xF9FBC2F3F73D94C9();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xFA30DFD0084E92FE(Global_93C, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x29CD142125FE177B(Global_388A, "SET_DATA_SLOT");
								unk_0x1E1FB49121565EB6(1);
								unk_0x1E1FB49121565EB6(iVar0);
								unk_0x1E1FB49121565EB6(Global_942[iVar1 /*15*/].f_A);
								unk_0x1E1FB49121565EB6(0);
								func_380(&(Global_942[iVar1 /*15*/]));
								unk_0x1E1FB49121565EB6(iVar7);
								unk_0xF9FBC2F3F73D94C9();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xFA30DFD0084E92FE(Global_93C, 3))
								{
									iVar8 = 42;
									Global_3947 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_3947 = 0;
								}
								unk_0x29CD142125FE177B(Global_388A, "SET_DATA_SLOT");
								unk_0x1E1FB49121565EB6(1);
								unk_0x1E1FB49121565EB6(iVar0);
								unk_0x1E1FB49121565EB6(Global_942[iVar1 /*15*/].f_A);
								unk_0x1E1FB49121565EB6(0);
								func_380(&(Global_942[iVar1 /*15*/]));
								unk_0x1E1FB49121565EB6(iVar8);
								unk_0xF9FBC2F3F73D94C9();
							}
							else if (iVar1 == 8)
							{
								unk_0x29CD142125FE177B(Global_388A, "SET_DATA_SLOT");
								unk_0x1E1FB49121565EB6(1);
								unk_0x1E1FB49121565EB6(iVar0);
								unk_0x1E1FB49121565EB6(Global_942[iVar1 /*15*/].f_A);
								unk_0x1E1FB49121565EB6(0);
								func_380(&(Global_942[iVar1 /*15*/]));
								unk_0x1E1FB49121565EB6(42);
								unk_0xF9FBC2F3F73D94C9();
							}
							else if ((iVar1 == 23 && unk_0x3362CDE8460ED38B(&(Global_942[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xFA30DFD0084E92FE(Global_93C, 6))
							{
								unk_0x29CD142125FE177B(Global_388A, "SET_DATA_SLOT");
								unk_0x1E1FB49121565EB6(1);
								unk_0x1E1FB49121565EB6(iVar0);
								unk_0x1E1FB49121565EB6(Global_942[iVar1 /*15*/].f_A);
								unk_0x1E1FB49121565EB6(0);
								func_380(&(Global_942[iVar1 /*15*/]));
								unk_0x1E1FB49121565EB6(42);
								unk_0xF9FBC2F3F73D94C9();
							}
							else if (Global_942[iVar1 /*15*/].f_A == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_18C323.f_1;
								func_379(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_379(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(0), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_B74[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_379(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x11293
{
	unk_0x29CD142125FE177B(iParam0, sParam1);
	unk_0x1E1FB49121565EB6(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x1E1FB49121565EB6(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x1E1FB49121565EB6(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x1E1FB49121565EB6(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x1E1FB49121565EB6(SYSTEM::ROUND(fParam6));
	}
	if (!unk_0xF1734B55490E9045(sParam7))
	{
		func_380(sParam7);
	}
	if (!unk_0xF1734B55490E9045(sParam8))
	{
		func_380(sParam8);
	}
	if (!unk_0xF1734B55490E9045(sParam9))
	{
		func_380(sParam9);
	}
	if (!unk_0xF1734B55490E9045(sParam10))
	{
		func_380(sParam10);
	}
	if (!unk_0xF1734B55490E9045(sParam11))
	{
		func_380(sParam11);
	}
	unk_0xF9FBC2F3F73D94C9();
}

void func_380(char* sParam0)//Position - 0x11346
{
	unk_0x57016C44F10111F0(sParam0);
	unk_0x64989E60CF560CA1();
}

void func_381(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x11358
{
	unk_0x29CD142125FE177B(iParam0, sParam1);
	unk_0x1E1FB49121565EB6(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x1E1FB49121565EB6(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x1E1FB49121565EB6(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x1E1FB49121565EB6(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x1E1FB49121565EB6(SYSTEM::ROUND(fParam6));
	}
	unk_0xF9FBC2F3F73D94C9();
}

bool func_382()//Position - 0x113BB
{
	return Global_140856;
}

void func_383(int iParam0)//Position - 0x113C7
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_19B04.f_36C6[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_384(int iParam0)//Position - 0x113E6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = unk_0xF40D00CD7B81C0A8();
	iVar1 = unk_0x7E09057438B9D216();
	iVar2 = unk_0x6E06C0DB9B43570D();
	iVar3 = unk_0xBE14F159908E4EE5();
	uVar4 = unk_0xDD6A91E47ED4D0CF() + 1;
	iVar5 = unk_0x4EEB3860BFC44B78();
	Global_4118D9[iParam0 /*104*/].f_12 = iVar0;
	Global_4118D9[iParam0 /*104*/].f_12.f_1 = iVar1;
	Global_4118D9[iParam0 /*104*/].f_12.f_2 = iVar2;
	Global_4118D9[iParam0 /*104*/].f_12.f_3 = iVar3;
	Global_4118D9[iParam0 /*104*/].f_12.f_4 = uVar4;
	Global_4118D9[iParam0 /*104*/].f_12.f_5 = iVar5;
}

void func_385()//Position - 0x11466
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_411DBA = 11;
	Global_4118D9[Global_411DBA /*104*/].f_12 = -1;
	Global_4118D9[Global_411DBA /*104*/].f_12.f_1 = 0;
	Global_4118D9[Global_411DBA /*104*/].f_12.f_2 = 0;
	Global_4118D9[Global_411DBA /*104*/].f_12.f_3 = 0;
	Global_4118D9[Global_411DBA /*104*/].f_12.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_386(Global_4118D9[iVar2 /*104*/].f_12, Global_4118D9[Global_411DBA /*104*/].f_12))
		{
			Global_411DBA = iVar2;
		}
		iVar2++;
	}
	Global_4118D9[Global_411DBA /*104*/].f_18 = 1;
}

int func_386(struct<6> Param0, struct<6> Param1)//Position - 0x11510
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1 = Param1;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_387()//Position - 0x115FB
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_4118D9[iVar2 /*104*/].f_18 == 0)
		{
			Global_411DBA = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_411DBA = 11;
	Global_4118D9[Global_411DBA /*104*/].f_12 = -1;
	Global_4118D9[Global_411DBA /*104*/].f_12.f_1 = 0;
	Global_4118D9[Global_411DBA /*104*/].f_12.f_2 = 0;
	Global_4118D9[Global_411DBA /*104*/].f_12.f_3 = 0;
	Global_4118D9[Global_411DBA /*104*/].f_12.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_4118D9[iVar2 /*104*/].f_18 == 0 || Global_4118D9[iVar2 /*104*/].f_18 == 1)
		{
			if (!func_386(Global_4118D9[iVar2 /*104*/].f_12, Global_4118D9[Global_411DBA /*104*/].f_12))
			{
				Global_411DBA = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_411DBA == 11)
	{
		return 0;
	}
	Global_4118D9[Global_411DBA /*104*/].f_63[0] = 0;
	Global_4118D9[Global_411DBA /*104*/].f_63[1] = 0;
	Global_4118D9[Global_411DBA /*104*/].f_63[2] = 0;
	return 1;
}

void func_388()//Position - 0x11726
{
	if (func_269(14))
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
		Global_389D = func_389();
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

var func_389()//Position - 0x117C8
{
	func_390();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_390()//Position - 0x117E1
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_393(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_392(unk_0xBC25C936A095B5BA());
			if (func_391(iVar0) && (!func_269(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_391(Global_19B04.f_932.f_21B.f_10CD))
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

bool func_391(int iParam0)//Position - 0x118DE
{
	return iParam0 < 3;
}

int func_392(int iParam0)//Position - 0x118EA
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_393(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_393(int iParam0)//Position - 0x11927
{
	if (func_391(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_394(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)//Position - 0x11951
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	iVar0 = 3;
	if (func_377(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_BFE = iParam10;
			unk_0xF0059F27F7BB6680(&Global_411DCA, 0);
		}
		return 1;
	}
	return 0;
}

int func_395(int iParam0, int iParam1)//Position - 0x119D3
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_396(2, iParam1);
	return iParam0;
}

void func_396(int iParam0, var uParam1)//Position - 0x119F2
{
	bool bVar0;
	bool bVar1;
	
	if (iParam0 == 0)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	switch (iParam0)
	{
		case 1:
			bVar0 = true;
			break;
		
		case 2:
			bVar1 = true;
			break;
		
		default:
			return;
	}
	if (bVar0)
	{
		switch (*uParam1)
		{
			case 1:
			case 3:
				break;
			
			case 0:
				*uParam1 = 1;
				break;
			
			case 2:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
	if (bVar1)
	{
		switch (*uParam1)
		{
			case 2:
			case 3:
				break;
			
			case 0:
				*uParam1 = 2;
				break;
			
			case 1:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
}

char* func_397(char* sParam0, bool bParam1, int iParam2)//Position - 0x11AA3
{
	if (unk_0xF1734B55490E9045(sParam0))
	{
		return sLocal_20;
	}
	if (unk_0x3362CDE8460ED38B(sParam0, sLocal_20))
	{
		return sLocal_20;
	}
	func_396(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0xFCB4C1AC11347344(sParam0);
}

int func_398(int iParam0)//Position - 0x11AE0
{
	int iVar0;
	
	iVar0 = func_401(iParam0);
	if (iVar0 == -1)
	{
		func_399(iParam0, 1);
		return 0;
	}
	Global_14FA05[iVar0 /*5*/].f_4 = 1;
	return Global_14FA05[iVar0 /*5*/].f_2;
}

void func_399(int iParam0, bool bParam1)//Position - 0x11B16
{
	if (!func_6(iParam0, 0, 1))
	{
		return;
	}
	if (func_401(iParam0) != -1)
	{
		return;
	}
	if (Global_14FAA8)
	{
		if (iParam0 == Global_14FAA8.f_1)
		{
			return;
		}
	}
	if (func_400(iParam0))
	{
		return;
	}
	if (Global_14FACE >= 32)
	{
		return;
	}
	Global_14FAAD[Global_14FACE] = iParam0;
	Global_14FACE++;
	if (bParam1)
	{
	}
}

int func_400(int iParam0)//Position - 0x11B82
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_14FACE)
	{
		if (Global_14FAAD[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_401(int iParam0)//Position - 0x11BB4
{
	int iVar0;
	
	if (!func_6(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_14FAA6 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_14FAA6)
	{
		if (Global_14FA05[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x516A8073F5BF5F0A(Global_14FA05[iVar0 /*5*/].f_2) && unk_0xEB606E770B747B2C(Global_14FA05[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_402(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_402(int iParam0)//Position - 0x11C33
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_14FAA6)
	{
		return;
	}
	if (unk_0x516A8073F5BF5F0A(Global_14FA05[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_14FA05[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar1, unk_0xF392EEDDF2FB749A(Global_14FA05[iParam0 /*5*/].f_2), 64);
			unk_0x8F5E9D20607FC4FF(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		unk_0x469C2D90A617CB9A(Global_14FA05[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_14FAA6)
	{
		Global_14FA05[iVar2 /*5*/] = { Global_14FA05[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_403(&(Global_14FA05[iVar2 /*5*/]));
	Global_14FAA6 = (Global_14FAA6 - 1);
}

void func_403(var uParam0)//Position - 0x11CE9
{
	*uParam0 = 0;
	uParam0->f_1 = func_13();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x7AF0088ABFA713B6())
	{
		uParam0->f_3 = unk_0xED678C85A82F0AB9();
	}
}

void func_404()//Position - 0x11D16
{
	Global_14B309.f_28.f_9 = 4;
}

int func_405(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x11D27
{
	bool bVar0;
	
	func_404();
	bVar0 = false;
	return func_372(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_406(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x11D4E
{
	bool bVar0;
	
	bVar0 = false;
	return func_407(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_407(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)//Position - 0x11D71
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_13();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0xD885B2234FC72D62(iVar0);
		iVar1 = func_398(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x41FE031452B5ECF8(unk_0xED678C85A82F0AB9(), Global_14B309.f_28.f_D))
			{
				return 0;
			}
		}
		Global_41DD = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_397(sParam5, bParam6, &iVar3);
	uVar5 = func_395(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0xF1734B55490E9045(sParam8))
	{
		iVar6++;
		if (!unk_0xF1734B55490E9045(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x3362CDE8460ED38B(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (unk_0xFA30DFD0084E92FE(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0xFA30DFD0084E92FE(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0xF1734B55490E9045(sVar2))
	{
		bVar12 = func_415(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_409(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0xFA30DFD0084E92FE(iParam4, 0))
	{
		func_375();
	}
	func_408();
	func_374();
	func_373();
	return 1;
}

void func_408()//Position - 0x11EC8
{
	Global_14B309.f_28.f_9 = 3;
}

int func_409(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x11ED9
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0x7CB6FD92BE491AD9(&Global_93B, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_410(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_BFE = iParam6;
			Global_B9D[3 /*6*/] = { Global_19B04.f_6D75[iParam0 /*29*/].f_3 };
			Global_BEA = iParam0;
			unk_0xF0059F27F7BB6680(&Global_93B, 1);
			unk_0xF0059F27F7BB6680(&Global_93B, 7);
		}
		return 1;
	}
	return 0;
}

int func_410(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0x11F71
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x3362CDE8460ED38B(sParam14, sParam15))
	{
	}
	func_388();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_389D == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_389D == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_389D == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			if (unk_0xBCBEDE9A08E4ED89(unk_0xBC25C936A095B5BA()))
			{
				return 0;
			}
		}
		if (Global_19B04.f_36C6[Global_389D /*20*/].f_11 == 1)
		{
			return 0;
		}
		if (unk_0xB731B8C5BCE89836(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0xB731B8C5BCE89836(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_414() == 0)
	{
		func_412();
		return 0;
	}
	func_411(Global_41E3);
	StringCopy(&(Global_19B04.f_3720[Global_41E3 /*104*/]), sParam1, 64);
	Global_19B04.f_3720[Global_41E3 /*104*/].f_11 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_19B04.f_3720[Global_41E3 /*104*/].f_18 = iParam2;
	}
	Global_19B04.f_3720[Global_41E3 /*104*/].f_19 = iParam7;
	Global_19B04.f_3720[Global_41E3 /*104*/].f_1A = uParam8;
	Global_19B04.f_3720[Global_41E3 /*104*/].f_1D = uParam9;
	Global_19B04.f_3720[Global_41E3 /*104*/].f_1E = uParam12;
	Global_19B04.f_3720[Global_41E3 /*104*/].f_1F = uParam11;
	Global_19B04.f_3720[Global_41E3 /*104*/].f_1C = 0;
	Global_19B04.f_3720[Global_41E3 /*104*/].f_20 = iParam3;
	StringCopy(&(Global_19B04.f_3720[Global_41E3 /*104*/].f_21), sParam4, 64);
	Global_19B04.f_3720[Global_41E3 /*104*/].f_31 = iParam6;
	StringCopy(&(Global_19B04.f_3720[Global_41E3 /*104*/].f_32), sParam5, 64);
	Global_19B04.f_3720[Global_41E3 /*104*/].f_42 = iParam13;
	StringCopy(&(Global_19B04.f_3720[Global_41E3 /*104*/].f_43), sParam14, 64);
	StringCopy(&(Global_19B04.f_3720[Global_41E3 /*104*/].f_53), sParam15, 64);
	if (unk_0xFA30DFD0084E92FE(Global_93B, 10))
	{
		Global_19B04.f_3720[Global_41E3 /*104*/].f_63[0] = 1;
		Global_19B04.f_3720[Global_41E3 /*104*/].f_63[1] = 1;
		Global_19B04.f_3720[Global_41E3 /*104*/].f_63[2] = 1;
		Global_BFD = 4;
		func_383(0);
		func_383(2);
		func_383(1);
	}
	else
	{
		func_388();
		switch (iParam16)
		{
			case 3:
				Global_19B04.f_3720[Global_41E3 /*104*/].f_63[Global_389D] = 1;
				break;
			
			case 0:
				Global_19B04.f_3720[Global_41E3 /*104*/].f_63[0] = 1;
				break;
			
			case 2:
				Global_19B04.f_3720[Global_41E3 /*104*/].f_63[2] = 1;
				break;
			
			case 1:
				Global_19B04.f_3720[Global_41E3 /*104*/].f_63[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_389D)
			{
				case 0:
					func_383(0);
					Global_BFD = 0;
					break;
				
				case 1:
					func_383(1);
					Global_BFD = 1;
					break;
				
				case 2:
					func_383(2);
					Global_BFD = 2;
					break;
				
				case 3:
					func_383(3);
					Global_BFD = 3;
					break;
				
				default:
					Global_BFD = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0xFA30DFD0084E92FE(Global_93B, 10))
		{
			Global_19B04.f_36C6[0 /*20*/].f_11 = 1;
			Global_19B04.f_36C6[1 /*20*/].f_11 = 1;
			Global_19B04.f_36C6[2 /*20*/].f_11 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_19B04.f_36C6[Global_389D /*20*/].f_11 = 1;
					break;
				
				case 0:
					Global_19B04.f_36C6[0 /*20*/].f_11 = 1;
					break;
				
				case 2:
					Global_19B04.f_36C6[2 /*20*/].f_11 = 1;
					break;
				
				case 1:
					Global_19B04.f_36C6[1 /*20*/].f_11 = 1;
					break;
				}
			}
	}
	Global_41E5[Global_41E3] = 0;
	if (bParam10)
	{
		func_388();
		if (Global_3864)
		{
			StringCopy(&Global_3892, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_389D)
			{
				case 0:
					StringCopy(&Global_3892, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_3892, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_3892, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_3892, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_C60[Global_389D /*2811*/][0 /*281*/].f_103 == 1)
		{
			if (!func_382())
			{
				unk_0xC4BA30B532FE260F(-1, "Text_Arrive_Tone", &Global_3892, 1);
			}
		}
	}
	if (!Global_3944)
	{
		if (Global_389D.f_1 == 6)
		{
			func_381(Global_388A, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_378(1);
			func_381(Global_388A, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_3889), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_411(int iParam0)//Position - 0x12428
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = unk_0xF40D00CD7B81C0A8();
	iVar1 = unk_0x7E09057438B9D216();
	iVar2 = unk_0x6E06C0DB9B43570D();
	iVar3 = unk_0xBE14F159908E4EE5();
	uVar4 = unk_0xDD6A91E47ED4D0CF() + 1;
	iVar5 = unk_0x4EEB3860BFC44B78();
	Global_19B04.f_3720[iParam0 /*104*/].f_12 = iVar0;
	Global_19B04.f_3720[iParam0 /*104*/].f_12.f_1 = iVar1;
	Global_19B04.f_3720[iParam0 /*104*/].f_12.f_2 = iVar2;
	Global_19B04.f_3720[iParam0 /*104*/].f_12.f_3 = iVar3;
	Global_19B04.f_3720[iParam0 /*104*/].f_12.f_4 = uVar4;
	Global_19B04.f_3720[iParam0 /*104*/].f_12.f_5 = iVar5;
}

void func_412()//Position - 0x124BA
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_11542)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_41E3 = 34;
	Global_19B04.f_3720[Global_41E3 /*104*/].f_12 = -1;
	Global_19B04.f_3720[Global_41E3 /*104*/].f_12.f_1 = 0;
	Global_19B04.f_3720[Global_41E3 /*104*/].f_12.f_2 = 0;
	Global_19B04.f_3720[Global_41E3 /*104*/].f_12.f_3 = 0;
	Global_19B04.f_3720[Global_41E3 /*104*/].f_12.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_413(Global_19B04.f_3720[iVar2 /*104*/].f_12, Global_19B04.f_3720[Global_41E3 /*104*/].f_12))
		{
			Global_41E3 = iVar2;
		}
		iVar2++;
	}
	Global_19B04.f_3720[Global_41E3 /*104*/].f_18 = 1;
}

int func_413(struct<6> Param0, struct<6> Param1)//Position - 0x12585
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1 = Param1;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_414()//Position - 0x12670
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_11542)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_19B04.f_3720[iVar2 /*104*/].f_18 == 0)
		{
			Global_41E3 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_41E3 = 34;
	Global_19B04.f_3720[Global_41E3 /*104*/].f_12 = -1;
	Global_19B04.f_3720[Global_41E3 /*104*/].f_12.f_1 = 0;
	Global_19B04.f_3720[Global_41E3 /*104*/].f_12.f_2 = 0;
	Global_19B04.f_3720[Global_41E3 /*104*/].f_12.f_3 = 0;
	Global_19B04.f_3720[Global_41E3 /*104*/].f_12.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_19B04.f_3720[iVar2 /*104*/].f_18 == 0 || Global_19B04.f_3720[iVar2 /*104*/].f_18 == 1)
		{
			if (!func_413(Global_19B04.f_3720[iVar2 /*104*/].f_12, Global_19B04.f_3720[Global_41E3 /*104*/].f_12))
			{
				Global_41E3 = iVar2;
			}
		}
		if (Global_19B04.f_3720[iVar2 /*104*/].f_18 == 2)
		{
		}
		iVar2++;
	}
	if (Global_41E3 == 34)
	{
		return 0;
	}
	Global_19B04.f_3720[Global_41E3 /*104*/].f_63[0] = 0;
	Global_19B04.f_3720[Global_41E3 /*104*/].f_63[1] = 0;
	Global_19B04.f_3720[Global_41E3 /*104*/].f_63[2] = 0;
	return 1;
}

int func_415(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)//Position - 0x127D8
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	unk_0x7CB6FD92BE491AD9(&Global_93B, 10);
	iVar0 = 3;
	if (func_410(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_BFE = iParam10;
			Global_B9D[3 /*6*/] = { Global_19B04.f_6D75[iParam0 /*29*/].f_3 };
			Global_BEA = iParam0;
			StringCopy(&Global_BEB, sParam5, 64);
			unk_0xF0059F27F7BB6680(&Global_93B, 1);
			unk_0xF0059F27F7BB6680(&Global_93B, 7);
		}
		return 1;
	}
	return 0;
}

int func_416(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x1288D
{
	bool bVar0;
	
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
	}
	if (unk_0x7199482D96955B9E(unk_0xBC25C936A095B5BA()))
	{
		return 0;
	}
	func_408();
	bVar0 = true;
	if (func_407(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_371(120000);
		return 1;
	}
	return 0;
}

int func_417(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)//Position - 0x128DF
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0x7199482D96955B9E(unk_0xBC25C936A095B5BA()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (unk_0xFA30DFD0084E92FE(iParam4, 7))
	{
		iVar1 = 9;
	}
	if (unk_0xFA30DFD0084E92FE(iParam4, 4))
	{
		bVar0 = func_433(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_423(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (unk_0xFA30DFD0084E92FE(iParam4, 3))
		{
			func_422(1);
		}
		if (unk_0xFA30DFD0084E92FE(iParam4, 5))
		{
			func_421(1);
		}
		func_420();
		func_374();
		func_419();
		func_418();
		return 1;
	}
	return 0;
}

void func_418()//Position - 0x12982
{
	Global_269481 = 0;
}

void func_419()//Position - 0x1298F
{
	Global_14B309.f_39 = 1;
	Global_14B309.f_39.f_1 = 0;
}

void func_420()//Position - 0x129A7
{
	Global_14B309.f_28.f_9 = 1;
}

void func_421(int iParam0)//Position - 0x129B8
{
	if (iParam0 == 1)
	{
		unk_0xF0059F27F7BB6680(&Global_93D, 0);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&Global_93D, 0);
	}
}

void func_422(int iParam0)//Position - 0x129D9
{
	if (iParam0 == 1)
	{
		unk_0xF0059F27F7BB6680(&Global_93B, 20);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&Global_93B, 20);
	}
}

int func_423(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x129FC
{
	func_432(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_3DE8 = 0;
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
	return func_424(sParam3, iParam4, bParam7);
}

int func_424(char* sParam0, int iParam1, bool bParam2)//Position - 0x12A4A
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
					func_431();
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
		if (func_430(8, -1))
		{
			return 0;
		}
		Global_3E04 = { Global_3DFE };
		func_429();
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
				func_388();
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
				if (func_428())
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
			if (func_427())
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
			func_426();
			Global_3DC2 = bParam2;
		}
		Global_3DBA = iParam1;
		StringCopy(&Global_3C3B, sParam0, 24);
		Global_394A = 0;
		func_425();
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
		func_431();
	}
	return 0;
}

void func_425()//Position - 0x12D16
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

void func_426()//Position - 0x12D47
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

int func_427()//Position - 0x12DDC
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_428()//Position - 0x12E03
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

void func_429()//Position - 0x12E9C
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

bool func_430(int iParam0, int iParam1)//Position - 0x12EF3
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

void func_431()//Position - 0x12F2E
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

void func_432(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x12F85
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

int func_433(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x12FDB
{
	func_432(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
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
	return func_424(sParam3, iParam4, bParam7);
}

int func_434(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)//Position - 0x13029
{
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
	}
	if (unk_0x7199482D96955B9E(unk_0xBC25C936A095B5BA()))
	{
		return 0;
	}
	if (func_436(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_435();
		func_420();
		func_374();
		func_419();
		func_418();
		return 1;
	}
	return 0;
}

void func_435()//Position - 0x1307B
{
	Global_41B2 = 0;
}

bool func_436(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)//Position - 0x13087
{
	func_432(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_3DE8 = 0;
	Global_3DBF = 1;
	Global_3DC6 = 0;
	Global_3DC1 = 1;
	Global_4197 = 0;
	Global_4199 = 0;
	Global_419D = 0;
	Global_3DBD = 0;
	Global_3DEC = 1;
	Global_3DEE = 0;
	StringCopy(&Global_3E4C, sParam5, 24);
	Global_280001 = 0;
	return func_424(sParam3, iParam4, bParam8);
}

int func_437(var uParam0, char* sParam1, char* sParam2)//Position - 0x130DC
{
	if (func_439(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_438();
		func_374();
		func_419();
		return 1;
	}
	return 0;
}

void func_438()//Position - 0x13107
{
	Global_14B309.f_28.f_9 = 2;
}

bool func_439(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x13118
{
	func_432(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_424(sParam2, iParam3, 0);
}

void func_440()//Position - 0x13166
{
	Global_14B309.f_37 = Global_14B309.f_28.f_1;
	Global_14B309.f_37.f_1 = Global_14B309.f_28.f_A;
}

void func_441()//Position - 0x1318C
{
	Global_14B309.f_28 = 1;
}

bool func_442()//Position - 0x1319B
{
	return Global_14B309.f_28 == 1;
}

int func_443(int iParam0, int iParam1, int iParam2)//Position - 0x131AB
{
	if (!func_444(iParam0))
	{
		return 0;
	}
	if (Global_14B309.f_28.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_14B309.f_28.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_444(int iParam0)//Position - 0x131EA
{
	if (!func_445())
	{
		return 0;
	}
	if (!Global_14B309.f_28.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_445()//Position - 0x13212
{
	if (Global_14B309.f_28 == 0)
	{
		return 0;
	}
	return 1;
}

int func_446(int iParam0)//Position - 0x13229
{
	if (func_450())
	{
		return 0;
	}
	if (func_449())
	{
		return 0;
	}
	if (func_360(0))
	{
		return 0;
	}
	if (Global_1406D2.f_12 != 0)
	{
		return 0;
	}
	if (Global_193981 || func_448())
	{
		return 0;
	}
	if (!unk_0xFA30DFD0084E92FE(iParam0, 6))
	{
		if (func_447())
		{
			return 0;
		}
	}
	return 1;
}

bool func_447()//Position - 0x1328D
{
	return unk_0x41FE031452B5ECF8(unk_0xED678C85A82F0AB9(), Global_14F500);
}

int func_448()//Position - 0x132A1
{
	if (Global_40E7E8.f_31D > -1)
	{
		return 1;
	}
	return 0;
}

bool func_449()//Position - 0x132B9
{
	return Global_14B309.f_28 == 3;
}

bool func_450()//Position - 0x132C9
{
	return func_427();
}

int func_451(int iParam0, int iParam1, int iParam2)//Position - 0x132D5
{
	if (!func_449())
	{
		return 0;
	}
	return func_443(iParam0, iParam1, iParam2);
}

int func_452(char* sParam0, char* sParam1)//Position - 0x132F3
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return unk_0x56BEECB328B6D29D(&cVar0);
}

bool func_453()//Position - 0x1330D
{
	return Global_268A34.f_1;
}

int func_454()//Position - 0x1331B
{
	if (Global_14B3C5.f_2)
	{
		return 1;
	}
	return func_455();
}

bool func_455()//Position - 0x13334
{
	return func_450();
}

void func_456(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x13340
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

int func_457(int iParam0)//Position - 0x133DB
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_458(var uParam0)//Position - 0x133F8
{
	if (uParam0->f_1)
	{
		if (unk_0xC40EDFF7541407A8(unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_459(var uParam0)//Position - 0x13421
{
	if (!uParam0->f_1)
	{
		if (unk_0x0DE6397A2CB3EF75())
		{
			func_460(uParam0, 0, 0);
		}
	}
}

void func_460(var uParam0, bool bParam1, bool bParam2)//Position - 0x13440
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x7AF0088ABFA713B6() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xED678C85A82F0AB9();
			}
			else
			{
				*uParam0 = unk_0x1C44CABA911F93F7();
			}
		}
		else
		{
			*uParam0 = unk_0x105601648511CC64();
		}
		uParam0->f_1 = 1;
	}
}

void func_461()//Position - 0x13485
{
	if (unk_0x8EA6CABD14F1B89A(Local_95.f_A[iLocal_109 /*7*/]) && !unk_0x1D403DFADBC2DE3C(unk_0xE48AD7BF7762E114(Local_95.f_A[iLocal_109 /*7*/]), 0))
	{
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			if (func_5(unk_0x541C2AEF053615BC(unk_0xE48AD7BF7762E114(Local_95.f_A[iLocal_109 /*7*/]), 1), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), 50625f))
			{
				if (!unk_0xFA30DFD0084E92FE(iLocal_98, 4))
				{
					unk_0xF0059F27F7BB6680(&iLocal_98, 4);
				}
			}
			else if (!unk_0xFA30DFD0084E92FE(iLocal_98, 5))
			{
				if (Local_95.f_2A != -1)
				{
					if (iLocal_109 == Local_95.f_2A)
					{
						if (!unk_0xFA30DFD0084E92FE(iLocal_98, 5))
						{
							unk_0xF0059F27F7BB6680(&iLocal_98, 5);
						}
					}
				}
			}
		}
	}
	func_462(iLocal_109);
	iLocal_109++;
	if (iLocal_109 >= func_457(iLocal_101))
	{
		if ((!unk_0xFA30DFD0084E92FE(iLocal_98, 4) && unk_0xFA30DFD0084E92FE(Local_95.f_1, 8)) || unk_0xFA30DFD0084E92FE(iLocal_98, 5))
		{
			if (!unk_0xFA30DFD0084E92FE(Local_97[unk_0x822BEC8031773562() /*5*/].f_1, 1))
			{
				unk_0xF0059F27F7BB6680(&(Local_97[unk_0x822BEC8031773562() /*5*/].f_1), 1);
			}
		}
		else if (unk_0xFA30DFD0084E92FE(Local_97[unk_0x822BEC8031773562() /*5*/].f_1, 1))
		{
			unk_0x7CB6FD92BE491AD9(&(Local_97[unk_0x822BEC8031773562() /*5*/].f_1), 1);
		}
		unk_0x7CB6FD92BE491AD9(&iLocal_98, 4);
		unk_0x7CB6FD92BE491AD9(&iLocal_98, 5);
		iLocal_109 = 0;
	}
}

void func_462(int iParam0)//Position - 0x135D1
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	bool bVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar2 = 0;
	vVar3 = { 0f, 0f, 0f };
	bVar4 = false;
	if (unk_0x7FFE36DB9042AF23(Local_95.f_A[iParam0 /*7*/]))
	{
		iVar0 = unk_0xE48AD7BF7762E114(Local_95.f_A[iParam0 /*7*/]);
		if (iLocal_101 == 0)
		{
			if (unk_0xB5CEFD608600A09F() == iLocal_103)
			{
				if (Local_95.f_A[iParam0 /*7*/].f_4 == 0)
				{
					if (Local_95.f_A[iParam0 /*7*/].f_5 == 2)
					{
						bVar4 = true;
					}
				}
			}
		}
		if (unk_0xB5CEFD608600A09F() == iLocal_102)
		{
			if (unk_0xFA30DFD0084E92FE(Local_95.f_A[iParam0 /*7*/].f_2, 1))
			{
				if (!unk_0xFA30DFD0084E92FE(iLocal_99[iParam0], 0))
				{
					unk_0xF0059F27F7BB6680(&Global_1801DA, 0);
					unk_0xF0059F27F7BB6680(&(iLocal_99[iParam0]), 0);
				}
				if (!unk_0xFA30DFD0084E92FE(Local_95.f_A[iParam0 /*7*/].f_2, 9))
				{
					if (!unk_0xFA30DFD0084E92FE(iLocal_99[iParam0], 1))
					{
						bVar4 = true;
					}
				}
				else if (unk_0xFA30DFD0084E92FE(iLocal_99[iParam0], 1))
				{
					unk_0x7CB6FD92BE491AD9(&(iLocal_99[iParam0]), 1);
				}
			}
		}
		if (bVar4)
		{
			if (unk_0x7FFE36DB9042AF23(Local_95.f_A[iParam0 /*7*/]))
			{
				if (!unk_0x89B5CBCE9D131B32(Local_95.f_A[iParam0 /*7*/]))
				{
					unk_0xCDF25F6ADC88CCB4(Local_95.f_A[iParam0 /*7*/]);
				}
			}
		}
		if (unk_0x89B5CBCE9D131B32(Local_95.f_A[iParam0 /*7*/]))
		{
			if (unk_0xB5CEFD608600A09F() == iLocal_102)
			{
				if (!unk_0xFA30DFD0084E92FE(Local_95.f_A[iParam0 /*7*/].f_2, 9) && !unk_0xFA30DFD0084E92FE(iLocal_99[iParam0], 1))
				{
					if (unk_0x77AECD1299A4E86C(iVar0, unk_0xB5CEFD608600A09F()))
					{
						switch (Local_95.f_A[iParam0 /*7*/].f_1)
						{
							case 0:
								func_485(iVar0, 3);
								break;
						}
						unk_0xF0059F27F7BB6680(&(iLocal_99[iParam0]), 1);
					}
				}
			}
			if (!unk_0x1D403DFADBC2DE3C(iVar0, 0) && !unk_0x36CEFBE9B745A58D(iVar0))
			{
				switch (Local_95.f_A[iParam0 /*7*/].f_5)
				{
					case 0:
						break;
					
					case 1:
						unk_0x2E9860A2B72187F5(iVar0, 187, 1);
						if (Local_95.f_A[iParam0 /*7*/].f_4 == 0)
						{
							if (unk_0xFA30DFD0084E92FE(Local_95.f_A[iParam0 /*7*/].f_2, 2))
							{
								if (!unk_0xFA30DFD0084E92FE(Local_95.f_A[iParam0 /*7*/].f_2, 3))
								{
									unk_0x4538D2D018750307(iVar0, 3f);
									unk_0x2E35C4FA5F0ED22F(iVar0, 1);
									unk_0xC8FD3EBBB90E8D7F(iVar0, 118, false);
								}
							}
						}
						if (unk_0xB5CEFD608600A09F() == iLocal_103 && func_5(unk_0x541C2AEF053615BC(iVar0, 1), unk_0x541C2AEF053615BC(unk_0xA95CF30C72EB526E(iLocal_103), 1), 25f))
						{
							unk_0xF0059F27F7BB6680(&(Global_267214.f_11DE), 0);
						}
						else
						{
							unk_0x7CB6FD92BE491AD9(&(Global_267214.f_11DE), 0);
						}
						if (!unk_0x889DA6CE8E4DB344(iVar0))
						{
							if (!unk_0x168C26517E42005E(iVar0, 29))
							{
								if (func_6(iLocal_103, 1, 1))
								{
									if (!unk_0xFA30DFD0084E92FE(Local_95.f_2, 13))
									{
										if (func_484(iLocal_103) && !unk_0x6BA46D5172404F26(unk_0xA95CF30C72EB526E(iLocal_103)))
										{
											if (!func_483(iVar0, -1794415470))
											{
												if (func_482(iVar0))
												{
													iVar1 = unk_0x9FE9D386222EEE47(unk_0xA95CF30C72EB526E(iLocal_103), 0);
													if (unk_0x724D816EA203A79E(iVar1))
													{
														if (unk_0xE59B7F5A03335350(iVar1, 0))
														{
														}
														if (!unk_0x06F5AA4251CA92EB(iVar1, func_481(unk_0xA95CF30C72EB526E(iLocal_103), 0)))
														{
															unk_0xD179FA0466FA4FE3(iVar0, iVar1, -1, func_480(unk_0xA95CF30C72EB526E(iLocal_103), iVar1), func_479(iParam0), 1179977, 0);
														}
													}
												}
											}
										}
										else if (!(unk_0x4FCDC2EC534819EF(iVar0) && unk_0x40B8412A87DA8328(iVar0) == unk_0xA95CF30C72EB526E(iLocal_103)) && !unk_0x5237AF95232D78C5(iVar0, 1))
										{
											if (func_483(iVar0, -1794415470))
											{
												unk_0xA4E856A8CD53B8DF(iVar0);
											}
											if (!func_483(iVar0, 1227113341))
											{
												if (func_482(iVar0))
												{
													unk_0x9565F9267674873A(iVar0, unk_0xA95CF30C72EB526E(iLocal_103), -1, 0f, func_479(iParam0), 1073741824, 0);
												}
											}
											else
											{
												unk_0x2E9860A2B72187F5(iVar0, 151, 1);
											}
										}
									}
								}
							}
						}
						break;
					
					case 2:
						if (unk_0xB5CEFD608600A09F() == iLocal_103 && func_5(unk_0x541C2AEF053615BC(iVar0, 1), unk_0x541C2AEF053615BC(unk_0xA95CF30C72EB526E(iLocal_103), 1), 25f))
						{
							unk_0xF0059F27F7BB6680(&(Global_267214.f_11DE), 0);
						}
						else
						{
							unk_0x7CB6FD92BE491AD9(&(Global_267214.f_11DE), 0);
						}
						if (unk_0xB5CEFD608600A09F() == iLocal_103)
						{
							if (!unk_0xFA30DFD0084E92FE(Local_97[unk_0x822BEC8031773562() /*5*/].f_1, 0))
							{
								if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
								{
									if ((func_4(unk_0x541C2AEF053615BC(iVar0, 1), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1)) && (unk_0x7214F4879DF8A314(unk_0xBC25C936A095B5BA()) || unk_0x6BA46D5172404F26(unk_0xBC25C936A095B5BA()))) || (unk_0x4FCDC2EC534819EF(iVar0) && unk_0x40B8412A87DA8328(iVar0) == unk_0xBC25C936A095B5BA()))
									{
										iVar2 = func_477(unk_0xB5CEFD608600A09F());
										fVar5 = (SYSTEM::TO_FLOAT(Global_40001.f_1799) / 100f);
										iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar2) * fVar5));
										iVar6 = func_476(unk_0xB5CEFD608600A09F());
										if (iVar6 > 100)
										{
											iVar6 = 100;
										}
										if (iVar2 > (iVar6 * Global_40001.f_179A))
										{
											iVar2 = (iVar6 * Global_40001.f_179A);
										}
										if (iVar2 > 0)
										{
											unk_0xF0059F27F7BB6680(&iLocal_98, 16);
										}
										unk_0x2F30793B705DB80C(unk_0xBC25C936A095B5BA(), 5000, 10000, 4);
										if (!(unk_0x4FCDC2EC534819EF(iVar0) && unk_0x40B8412A87DA8328(iVar0) == unk_0xA95CF30C72EB526E(iLocal_103)))
										{
											vVar3 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) - unk_0x541C2AEF053615BC(iVar0, 1) };
											vVar3 = { func_475(vVar3) };
											vVar3.x = (vVar3.x * 3f);
											vVar3.y = (vVar3.y * 3f);
											vVar3.z = (vVar3.z * 3f);
											unk_0x5EBD7EB63AD5FB1D(unk_0xBC25C936A095B5BA(), 1, vVar3, 0f, 0f, 0.5f, 0, 0, 1, 1, 0, 1);
										}
										unk_0xABA7AE40608505F2(iVar0, 512, false);
										unk_0x91629AC1E1F78419(iVar0, 17, 1);
										if (((unk_0x5237AF95232D78C5(iVar0, 1) || unk_0x4FCDC2EC534819EF(iVar0)) && func_473(iVar0)) && func_481(iVar0, 0) == -1)
										{
											unk_0xABA7AE40608505F2(iVar0, 2, true);
											unk_0x91629AC1E1F78419(iVar0, 3, 0);
											unk_0x91629AC1E1F78419(iVar0, 6, 1);
										}
										else
										{
											unk_0xA4E856A8CD53B8DF(iVar0);
											unk_0x5558ED6D4A2DEC93(iVar0, unk_0xBC25C936A095B5BA(), 10000f, -1, 1, 0);
										}
										Local_97[unk_0x822BEC8031773562() /*5*/].f_3 = iVar2;
										if (iVar2 > 0)
										{
											Local_97[unk_0x822BEC8031773562() /*5*/].f_2 = iParam0;
										}
										else
										{
											Local_97[unk_0x822BEC8031773562() /*5*/].f_2 = -1;
										}
										unk_0x4106FAF8AA1D69D5(iVar0, Global_180798);
										unk_0xF0059F27F7BB6680(&(Local_97[unk_0x822BEC8031773562() /*5*/].f_1), 0);
										unk_0xF0059F27F7BB6680(&(Global_267214.f_11DE), 2);
									}
								}
							}
						}
						break;
					
					case 3:
						if (unk_0xE5B7E3F1770AD404(iVar0, 187))
						{
							unk_0x2E9860A2B72187F5(iVar0, 187, 0);
						}
						if (Local_95.f_A[iParam0 /*7*/].f_4 == 0)
						{
							if (!unk_0xFA30DFD0084E92FE(Local_95.f_A[iParam0 /*7*/].f_2, 4))
							{
								unk_0x2E35C4FA5F0ED22F(iVar0, 0);
								unk_0xC8FD3EBBB90E8D7F(iVar0, 118, true);
							}
						}
						if (!(unk_0x4FCDC2EC534819EF(iVar0) && unk_0x40B8412A87DA8328(iVar0) == unk_0xA95CF30C72EB526E(iLocal_103)))
						{
							if (!unk_0x889DA6CE8E4DB344(iVar0))
							{
								if (func_482(iVar0))
								{
									if ((unk_0x5237AF95232D78C5(iVar0, 1) || unk_0x4FCDC2EC534819EF(iVar0)) && !unk_0xFA30DFD0084E92FE(Local_95.f_2, 10))
									{
										if (!func_483(iVar0, -258271821) && !func_483(iVar0, -1273030092))
										{
											if (unk_0xCBBE5AFE2CD2E9B6(iVar0))
											{
												iVar7 = unk_0x9FE9D386222EEE47(iVar0, 1);
												iVar8 = unk_0x6F79ECA8C83E4357(iVar7);
												if (unk_0xFA30DFD0084E92FE(Local_95.f_2, 13))
												{
													unk_0x91629AC1E1F78419(iVar0, 17, 1);
													unk_0x91629AC1E1F78419(iVar0, 6, 0);
													unk_0x91629AC1E1F78419(iVar0, 1, 0);
												}
												else if (unk_0x8C1A6E7D5F410F4A(iVar8))
												{
													unk_0x143DD8A84CAA784C(iVar0, iVar7, 0, unk_0xBC25C936A095B5BA(), 0f, 0f, 0f, 8, 20f, 0f, -1f, 80, 80, -1082130432, 0);
												}
												else if (unk_0xA19D269B4B5A1532(iVar8))
												{
													unk_0xA7EC3DF47EFA2131(iVar0, iVar7, 0, unk_0xBC25C936A095B5BA(), 0f, 0f, 0f, 8, 25f, 0f, -1f, 80, 80, 1);
												}
												else if (unk_0x6F79ECA8C83E4357(iVar7) == joaat("taxi"))
												{
													unk_0xABA7AE40608505F2(iVar0, 2, false);
													unk_0x91629AC1E1F78419(iVar0, 3, 1);
													unk_0x91629AC1E1F78419(iVar0, 6, 0);
													unk_0x5558ED6D4A2DEC93(iVar0, unk_0xA95CF30C72EB526E(iLocal_103), 10000f, -1, 1, 0);
												}
												else
												{
													unk_0x204BA7B1C7DD25F4(iVar0, unk_0x9FE9D386222EEE47(iVar0, 1), 60f, 786468);
												}
											}
										}
									}
									else if (!func_483(iVar0, 1805844857))
									{
										if (func_6(iLocal_103, 1, 1))
										{
											unk_0x5558ED6D4A2DEC93(iVar0, unk_0xA95CF30C72EB526E(iLocal_103), 10000f, -1, 1, 0);
										}
									}
								}
							}
						}
						break;
					
					case 4:
						func_471(Local_95.f_A[iParam0 /*7*/], 0);
						break;
				}
				if (unk_0xFA30DFD0084E92FE(Local_95.f_2, 13))
				{
					unk_0xA4E856A8CD53B8DF(unk_0xE48AD7BF7762E114(Local_95.f_A[iParam0 /*7*/]));
					unk_0x91629AC1E1F78419(unk_0xE48AD7BF7762E114(Local_95.f_A[iParam0 /*7*/]), 17, 1);
					unk_0x91629AC1E1F78419(unk_0xE48AD7BF7762E114(Local_95.f_A[iParam0 /*7*/]), 6, 0);
					unk_0x91629AC1E1F78419(unk_0xE48AD7BF7762E114(Local_95.f_A[iParam0 /*7*/]), 1, 0);
				}
				func_463(iVar0);
			}
		}
	}
}

void func_463(int iParam0)//Position - 0x13E3D
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFA30DFD0084E92FE(iLocal_98, 16))
	{
		iVar0 = Local_97[unk_0x822BEC8031773562() /*5*/].f_3;
		iVar1 = func_464(iVar0);
		if (iVar1 == 1)
		{
			unk_0x7CB6FD92BE491AD9(&iLocal_98, 15);
			unk_0x7CB6FD92BE491AD9(&iLocal_98, 16);
			if (!func_46())
			{
				unk_0x181BFE92E42E5F2D(iVar0, 0, 0);
			}
			if (iVar0 > Global_40001.f_1D1D)
			{
				iVar0 = Global_40001.f_1D1D;
			}
			unk_0x8EF3D958386640FE(iParam0, iVar0);
			unk_0xF0059F27F7BB6680(&(Local_97[unk_0x822BEC8031773562() /*5*/].f_1), 5);
		}
		else if (iVar1 == 0)
		{
			unk_0x7CB6FD92BE491AD9(&iLocal_98, 15);
			unk_0x7CB6FD92BE491AD9(&iLocal_98, 16);
			unk_0xF0059F27F7BB6680(&(Local_97[unk_0x822BEC8031773562() /*5*/].f_1), 6);
		}
		else
		{
			return;
		}
	}
}

int func_464(int iParam0)//Position - 0x13EE9
{
	if (func_46())
	{
		if (func_467(iParam0))
		{
			if (func_466(iLocal_286) == 2)
			{
				unk_0xCD4DA7A56BD941BF(func_465(iLocal_286));
				unk_0x181BFE92E42E5F2D(iParam0, 0, 0);
				func_315(iLocal_286);
				return 1;
			}
			else
			{
				func_315(iLocal_286);
				return 0;
			}
		}
	}
	else
	{
		return 1;
	}
	return -1;
}

int func_465(int iParam0)//Position - 0x13F41
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_41092C[iParam0 /*80*/];
	}
	return -1;
}

int func_466(int iParam0)//Position - 0x13F65
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_41092C[iParam0 /*80*/].f_2;
	}
	return 0;
}

int func_467(int iParam0)//Position - 0x13F8B
{
	if (!unk_0xFA30DFD0084E92FE(iLocal_98, 15))
	{
		func_313(&iLocal_286, -1135378931, 537254313, 1474183246, 1839532116, iParam0, 4, 3);
		func_470(&uLocal_287, 0, 0);
		unk_0xF0059F27F7BB6680(&iLocal_98, 15);
	}
	else if (func_469(iLocal_286) || func_468(&uLocal_287, 10000, 0))
	{
		return 1;
	}
	return 0;
}

int func_468(var uParam0, int iParam1, bool bParam2)//Position - 0x13FF5
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_460(uParam0, bParam2, 0);
	if (unk_0x7AF0088ABFA713B6() && !bParam2)
	{
		if (unk_0xC40EDFF7541407A8(unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xC40EDFF7541407A8(unk_0xCCA9497DA4595710(unk_0x105601648511CC64(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

int func_469(int iParam0)//Position - 0x14056
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_41092C[iParam0 /*80*/].f_2 != 1;
	}
	return 0;
}

void func_470(var uParam0, bool bParam1, bool bParam2)//Position - 0x1407E
{
	if (unk_0x7AF0088ABFA713B6() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0xED678C85A82F0AB9();
		}
		else
		{
			*uParam0 = unk_0x1C44CABA911F93F7();
		}
	}
	else
	{
		*uParam0 = unk_0x105601648511CC64();
	}
	uParam0->f_1 = 1;
}

void func_471(int iParam0, bool bParam1)//Position - 0x140BB
{
	if (unk_0x7FFE36DB9042AF23(iParam0))
	{
		if (unk_0x89B5CBCE9D131B32(iParam0))
		{
			if (!func_472(iParam0))
			{
				if (unk_0xFA30DFD0084E92FE(Local_95.f_2, 13))
				{
					unk_0xA4E856A8CD53B8DF(unk_0xE48AD7BF7762E114(iParam0));
					unk_0x91629AC1E1F78419(unk_0xE48AD7BF7762E114(iParam0), 17, 1);
					unk_0x91629AC1E1F78419(unk_0xE48AD7BF7762E114(iParam0), 6, 0);
					unk_0x91629AC1E1F78419(unk_0xE48AD7BF7762E114(iParam0), 1, 0);
				}
				else
				{
					if (bParam1)
					{
						unk_0xA4E856A8CD53B8DF(unk_0xE48AD7BF7762E114(iParam0));
					}
					unk_0x91629AC1E1F78419(unk_0xE48AD7BF7762E114(iParam0), 6, 1);
					unk_0x91629AC1E1F78419(unk_0xE48AD7BF7762E114(iParam0), 1, 1);
				}
			}
		}
		func_238(&iParam0);
	}
}

int func_472(int iParam0)//Position - 0x1414B
{
	if (unk_0x7FFE36DB9042AF23(iParam0))
	{
		return unk_0x36CEFBE9B745A58D(unk_0xE48AD7BF7762E114(iParam0));
	}
	return 1;
}

int func_473(int iParam0)//Position - 0x1416A
{
	int iVar0;
	
	if (unk_0x5237AF95232D78C5(iParam0, 1))
	{
		iVar0 = unk_0x9FE9D386222EEE47(iParam0, 1);
	}
	if (unk_0x4FCDC2EC534819EF(iParam0))
	{
		iVar0 = unk_0x25480ACDBB6DB8F1(iParam0);
	}
	if (!unk_0x724D816EA203A79E(iVar0))
	{
		if (func_484(iLocal_103))
		{
			iVar0 = unk_0x9FE9D386222EEE47(unk_0xA95CF30C72EB526E(iLocal_103), 1);
		}
	}
	if (unk_0x724D816EA203A79E(iVar0))
	{
		if (func_474(iVar0))
		{
			return 0;
		}
		if (unk_0x11030C52A0DDFF8C(iParam0) || unk_0xE7B3A320107C1379(unk_0x6F79ECA8C83E4357(iVar0)))
		{
			if (!unk_0x149E9368A11035DE(iVar0))
			{
				return 0;
			}
		}
		if (unk_0x6F79ECA8C83E4357(iVar0) == -1881846085)
		{
			return 0;
		}
	}
	return 1;
}

int func_474(int iParam0)//Position - 0x14208
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

Vector3 func_475(vector3 vParam0)//Position - 0x1424B
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

var func_476(int iParam0)//Position - 0x1428A
{
	return Global_18402B[iParam0 /*770*/].f_D3.f_6;
}

int func_477(int iParam0)//Position - 0x1429F
{
	var uVar0;
	
	uVar0 = func_478(iParam0);
	return uVar0;
}

int func_478(int iParam0)//Position - 0x142B1
{
	if (iParam0 > -1)
	{
		if (iParam0 == unk_0xB5CEFD608600A09F())
		{
			return unk_0x8378732DD7891451(-1);
		}
		else if (func_290(iParam0))
		{
			return Global_18402B[iParam0 /*770*/].f_D3.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

float func_479(int iParam0)//Position - 0x142F4
{
	if (!unk_0xFA30DFD0084E92FE(Local_95.f_A[iParam0 /*7*/].f_2, 2))
	{
		return 1f;
	}
	return 3f;
}

int func_480(int iParam0, int iParam1)//Position - 0x14314
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

int func_481(int iParam0, int iParam1)//Position - 0x14386
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

int func_482(int iParam0)//Position - 0x1440B
{
	if ((!unk_0x36CEFBE9B745A58D(iParam0) && !unk_0x687BD6F7DF82B377(iParam0, 0)) && !unk_0x2CDE18D6C89522AD(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_483(int iParam0, int iParam1)//Position - 0x1443B
{
	if (unk_0xF4FCC3C1048FF2AB(iParam0, iParam1) == 1 || unk_0xF4FCC3C1048FF2AB(iParam0, iParam1) == 0)
	{
		return 1;
	}
	return 0;
}

int func_484(int iParam0)//Position - 0x14465
{
	if (unk_0xB4C556E86F69D4CB(iParam0))
	{
		return 0;
	}
	if (unk_0xCBBE5AFE2CD2E9B6(unk_0xA95CF30C72EB526E(iParam0)))
	{
		return 1;
	}
	return 0;
}

void func_485(int iParam0, int iParam1)//Position - 0x1448C
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x3C03CFD5DD1E2D97(iParam0, "AttributeDamage"))
	{
		iVar0 = unk_0x67CFC62D543B19EF(iParam0, "AttributeDamage");
	}
	unk_0xF0059F27F7BB6680(&iVar0, iParam1);
	unk_0x3F9FE9BB735B1604(iParam0, "AttributeDamage", iVar0);
}

void func_486()//Position - 0x144C2
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	bVar0 = unk_0xFA30DFD0084E92FE(Local_95.f_2, 6);
	bVar1 = unk_0xFA30DFD0084E92FE(Local_95.f_2, 10);
	func_491();
	if (iLocal_101 != 1)
	{
		if (unk_0xFA30DFD0084E92FE(Local_95.f_3, 12))
		{
			func_488();
		}
	}
	if (unk_0x2DA8CA50A72528FB(iLocal_110))
	{
		func_487(&iLocal_110);
	}
	iVar3 = 0;
	while (iVar3 < func_457(iLocal_101))
	{
		iLocal_99[iVar3] = 0;
		iVar3++;
	}
	if (unk_0x0DE6397A2CB3EF75())
	{
		Local_95.f_2A = -1;
		Local_95.f_5 = iLocal_106;
		Local_95.f_6 = iLocal_106;
		Local_95.f_7 = iLocal_106;
		Local_95.f_1 = 0;
		Local_95.f_4 = 0;
		Local_95.f_2 = 0;
		iVar3 = 0;
		while (iVar3 < func_457(iLocal_101))
		{
			bVar2 = unk_0xFA30DFD0084E92FE(Local_95.f_A[iVar3 /*7*/].f_2, 6);
			Local_95.f_A[iVar3 /*7*/].f_2 = 0;
			Local_95.f_A[iVar3 /*7*/].f_6 = -1;
			if (bVar2)
			{
				unk_0xF0059F27F7BB6680(&(Local_95.f_A[iVar3 /*7*/].f_2), 6);
			}
			iVar3++;
		}
	}
	Local_97[unk_0x822BEC8031773562() /*5*/].f_1 = 0;
	Local_97[unk_0x822BEC8031773562() /*5*/].f_2 = -1;
	iLocal_98 = 0;
	if (bVar0)
	{
		unk_0xF0059F27F7BB6680(&(Local_95.f_2), 6);
	}
	if (bVar1)
	{
		unk_0xF0059F27F7BB6680(&(Local_95.f_2), 11);
		unk_0xF0059F27F7BB6680(&iLocal_98, 8);
	}
	unk_0xF0059F27F7BB6680(&iLocal_98, 4);
	unk_0xF0059F27F7BB6680(&iLocal_98, 11);
}

void func_487(int iParam0)//Position - 0x14602
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0x2DA8CA50A72528FB(*iParam0))
	{
		unk_0x07B8ECB35A4ED3AC(iParam0);
		bVar0 = true;
	}
	if (unk_0x2DA8CA50A72528FB(iParam0->f_1))
	{
		unk_0x07B8ECB35A4ED3AC(&(iParam0->f_1));
		bVar0 = true;
	}
	if (unk_0x724D816EA203A79E(iParam0->f_7))
	{
		if (!unk_0x1D403DFADBC2DE3C(iParam0->f_7, 0))
		{
			if (unk_0x313CE760FC65D99D(iParam0->f_7))
			{
				unk_0xEA5D20C7C39B0EC6(iParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*iParam0 = { Var1 };
	}
}

void func_488()//Position - 0x14674
{
	switch (iLocal_101)
	{
		case 0:
			func_490(&(Global_1807A0[3]));
			break;
		
		case 1:
			func_489();
			break;
	}
}

void func_489()//Position - 0x146A5
{
	int iVar0;
	
	if (unk_0x7AF0088ABFA713B6())
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			unk_0xA902E18EDF6FA0C8(3, Global_180770[iVar0], -1467815081);
			unk_0xA902E18EDF6FA0C8(3, -1467815081, Global_180770[iVar0]);
			iVar0++;
		}
	}
}

void func_490(var uParam0)//Position - 0x146EB
{
	int iVar0;
	
	if (unk_0x7AF0088ABFA713B6())
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			unk_0xA902E18EDF6FA0C8(3, Global_180770[iVar0], *uParam0);
			unk_0xA902E18EDF6FA0C8(3, *uParam0, Global_180770[iVar0]);
			iVar0++;
		}
	}
}

void func_491()//Position - 0x1472D
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < func_457(iLocal_101))
	{
		bVar1 = false;
		if (iLocal_101 == 0)
		{
			if (!unk_0xFA30DFD0084E92FE(Local_95.f_2, 1))
			{
				bVar1 = true;
			}
		}
		func_471(Local_95.f_A[iVar0 /*7*/], bVar1);
		iVar0++;
	}
}

void func_492()//Position - 0x14778
{
	func_493();
	if (iLocal_101 != 1)
	{
		func_461();
	}
}

void func_493()//Position - 0x1478F
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < func_457(iLocal_101))
	{
		if (unk_0x7FFE36DB9042AF23(Local_95.f_A[iVar0 /*7*/]))
		{
			if (unk_0x89B5CBCE9D131B32(Local_95.f_A[iVar0 /*7*/]))
			{
				iVar1 = unk_0xE48AD7BF7762E114(Local_95.f_A[iVar0 /*7*/]);
				if (!unk_0x1D403DFADBC2DE3C(iVar1, 0))
				{
					unk_0x2E9860A2B72187F5(iVar1, 151, 1);
				}
			}
		}
		iVar0++;
	}
	if (Global_267214.f_69C)
	{
	}
	if (iLocal_101 == 1)
	{
		if (unk_0xB5CEFD608600A09F() == iLocal_103)
		{
			if (unk_0xFA30DFD0084E92FE(Local_95.f_1, 0))
			{
				if (!unk_0x51FE3C0716E82F24(uLocal_283))
				{
					if (func_6(iLocal_103, 1, 1))
					{
						if (Local_95.f_32)
						{
							unk_0xFDE08BF17742D2F5(15, unk_0xA95CF30C72EB526E(iLocal_103), 4, 0f, &uLocal_283, -1467815081, 0);
						}
						else if (Local_95.f_34)
						{
							unk_0xFDE08BF17742D2F5(16, unk_0xA95CF30C72EB526E(iLocal_103), 4, 0f, &uLocal_283, -1467815081, Local_95.f_35);
						}
						else
						{
							unk_0xFDE08BF17742D2F5(14, unk_0xA95CF30C72EB526E(iLocal_103), 4, 0f, &uLocal_283, 0, 0);
						}
					}
				}
				if (Global_267214.f_69C)
				{
					if (!unk_0xFA30DFD0084E92FE(Local_97[unk_0x822BEC8031773562() /*5*/].f_1, 3))
					{
						unk_0xF0059F27F7BB6680(&(Local_97[unk_0x822BEC8031773562() /*5*/].f_1), 3);
					}
				}
			}
		}
	}
	else if (iLocal_101 == 0)
	{
		if (Local_95.f_2A != -1)
		{
			if (unk_0x8EA6CABD14F1B89A(Local_95.f_A[Local_95.f_2A /*7*/]))
			{
				if (!unk_0x1D403DFADBC2DE3C(unk_0xE48AD7BF7762E114(Local_95.f_A[Local_95.f_2A /*7*/]), 0) && !func_497(unk_0xE48AD7BF7762E114(Local_95.f_A[Local_95.f_2A /*7*/])))
				{
					if (Local_95.f_A[Local_95.f_2A /*7*/].f_5 == 3)
					{
						func_494(Local_95.f_A[Local_95.f_2A /*7*/], &iLocal_110, -1082130432, 0, 1, 0, 0, -1, -1, 1);
						if (unk_0x2DA8CA50A72528FB(iLocal_110))
						{
							if (!unk_0xFA30DFD0084E92FE(iLocal_98, 6))
							{
								unk_0x436D0272182E484D(iLocal_110, "FM_MGR_BLP");
								unk_0xF0059F27F7BB6680(&iLocal_98, 6);
							}
						}
					}
				}
				else if (unk_0x2DA8CA50A72528FB(iLocal_110))
				{
					func_487(&iLocal_110);
				}
			}
			if (unk_0xB5CEFD608600A09F() == iLocal_102)
			{
				if (!unk_0xFA30DFD0084E92FE(iLocal_98, 14))
				{
					if (func_359("MPCT_mugsuc", "LAMAR", 19))
					{
						unk_0xF0059F27F7BB6680(&iLocal_98, 14);
					}
				}
			}
		}
	}
}

void func_494(int iParam0, int iParam1, float fParam2, bool bParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, bool bParam9)//Position - 0x149AC
{
	if (unk_0x7FFE36DB9042AF23(iParam0))
	{
		if (func_496())
		{
			Global_252E21 = unk_0xB5CEFD608600A09F();
		}
		if (bParam3)
		{
			func_495(unk_0xE48AD7BF7762E114(iParam0), iParam1, 1, Global_252E21, iParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_495(unk_0xE48AD7BF7762E114(iParam0), iParam1, -1, Global_252E21, iParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (unk_0x2DA8CA50A72528FB(*iParam1))
	{
		func_487(iParam1);
	}
}

int func_495(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x14A27
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0xFC1CAE18F3ECBF2D();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (!unk_0x313CE760FC65D99D(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0xEA5D20C7C39B0EC6(iParam0, 1);
			}
			else
			{
				unk_0x12CB6C9EAE68146D(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0x170F151F41735501(iParam0, iParam2);
			unk_0xBC50F5569FE1782F(iParam0, fParam6);
			if (unk_0x2DA8CA50A72528FB(*uParam1))
			{
				unk_0x12DB69036F6569F7(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			unk_0x92AAB9588E601C23(iParam0, iParam9);
		}
		unk_0xD09C169D88640D1B(iParam0, iParam4);
		unk_0x1A3FEAE5BF447BC7(iParam0, iParam5);
		*uParam1 = unk_0x7B2A47C84FD0CB9D(iParam0);
		if (!iParam9 == -1)
		{
			if (unk_0x2DA8CA50A72528FB(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0x0D5352939CC40C16(*uParam1, iParam8);
				}
				if (!unk_0xF1734B55490E9045(sParam7))
				{
					unk_0xB53F9D0C08974999("STRING");
					if (bParam10)
					{
						unk_0x607C19B90D297FE2(sParam7);
					}
					else
					{
						unk_0xC9C304D0AABE1335(sParam7);
					}
					unk_0x2E02627BEA5751E0(*uParam1);
				}
				unk_0x12DB69036F6569F7(*uParam1, 7);
			}
		}
		if (!unk_0xFA30DFD0084E92FE(uParam1->f_6, 2))
		{
			if (unk_0x2DA8CA50A72528FB(*uParam1))
			{
				unk_0xF0059F27F7BB6680(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x5237AF95232D78C5(iParam0, 0))
		{
			uParam1->f_1 = unk_0x5556F7BFA35E0D94(iParam0);
			if (!unk_0xFA30DFD0084E92FE(uParam1->f_6, 3))
			{
				if (unk_0x2DA8CA50A72528FB(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						unk_0x0D5352939CC40C16(uParam1->f_1, iParam8);
					}
					if (!unk_0xF1734B55490E9045(sParam7))
					{
						unk_0xB53F9D0C08974999("STRING");
						if (bParam10)
						{
							unk_0x607C19B90D297FE2(sParam7);
						}
						else
						{
							unk_0xC9C304D0AABE1335(sParam7);
						}
						unk_0x2E02627BEA5751E0(uParam1->f_1);
					}
					unk_0x12DB69036F6569F7(uParam1->f_1, 7);
					unk_0xF0059F27F7BB6680(&(uParam1->f_6), 3);
				}
			}
			else if (!unk_0x2DA8CA50A72528FB(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				unk_0x7CB6FD92BE491AD9(&(uParam1->f_6), 3);
			}
		}
		else if (unk_0x2DA8CA50A72528FB(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x7CB6FD92BE491AD9(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_496()//Position - 0x14BFE
{
	return Global_14083F;
}

int func_497(int iParam0)//Position - 0x14C0A
{
	int iVar0;
	int iVar1;
	
	if (unk_0x5237AF95232D78C5(iParam0, 0))
	{
		iVar0 = unk_0x9FE9D386222EEE47(iParam0, 0);
		if (unk_0xE59B7F5A03335350(iVar0, 0))
		{
			if (unk_0x46032D09AA009EC4("MPBitset", 3))
			{
				if (unk_0x3C03CFD5DD1E2D97(iVar0, "MPBitset"))
				{
					iVar1 = unk_0x67CFC62D543B19EF(iVar0, "MPBitset");
				}
				if (unk_0xFA30DFD0084E92FE(iVar1, 12))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_498()//Position - 0x14C5E
{
	return Local_95;
}

int func_499(int iParam0)//Position - 0x14C68
{
	return Local_97[iParam0 /*5*/];
}

void func_500()//Position - 0x14C76
{
	if (unk_0xB5CEFD608600A09F() == iLocal_103)
	{
		if (Global_6353)
		{
			if (!unk_0xFA30DFD0084E92FE(Local_97[iLocal_108 /*5*/].f_1, 4))
			{
				unk_0xF0059F27F7BB6680(&(Local_97[iLocal_108 /*5*/].f_1), 4);
			}
		}
		else
		{
			unk_0x7CB6FD92BE491AD9(&(Local_97[iLocal_108 /*5*/].f_1), 4);
		}
	}
}

void func_501()//Position - 0x14CBF
{
	bool bVar0;
	
	bVar0 = false;
	if (unk_0xB5CEFD608600A09F() == iLocal_102)
	{
		if (unk_0xFA30DFD0084E92FE(Global_1801DA, 0))
		{
			unk_0x7CB6FD92BE491AD9(&Global_1801DA, 0);
			bVar0 = true;
		}
		if (!unk_0xFA30DFD0084E92FE(Local_97[iLocal_102 /*5*/].f_1, 2))
		{
			if (unk_0xFA30DFD0084E92FE(Local_95.f_1, 11))
			{
				unk_0xF0059F27F7BB6680(&(Local_97[iLocal_102 /*5*/].f_1), 2);
				bVar0 = true;
			}
		}
		else if (!unk_0xFA30DFD0084E92FE(Local_95.f_1, 11))
		{
			unk_0x7CB6FD92BE491AD9(&(Local_97[iLocal_102 /*5*/].f_1), 2);
		}
		if (bVar0)
		{
			Local_97[unk_0x822BEC8031773562() /*5*/].f_4 = func_505();
			func_502(Local_97[unk_0x822BEC8031773562() /*5*/].f_4);
		}
	}
	else if (Local_97[unk_0x822BEC8031773562() /*5*/].f_4 != Local_95.f_2C)
	{
		Local_97[unk_0x822BEC8031773562() /*5*/].f_4 = Local_95.f_2C;
		func_502(Local_97[unk_0x822BEC8031773562() /*5*/].f_4);
		bVar0 = true;
	}
}

void func_502(int iParam0)//Position - 0x14D8F
{
	switch (iLocal_101)
	{
		case 0:
			func_504(&(Global_1807A0[3]), iParam0);
			break;
		
		case 1:
			func_503(iParam0);
			break;
	}
}

void func_503(int iParam0)//Position - 0x14DC4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0xFA30DFD0084E92FE(iParam0, iVar0))
		{
			unk_0xA902E18EDF6FA0C8(1, Global_180770[iVar0], -1467815081);
			unk_0xA902E18EDF6FA0C8(1, -1467815081, Global_180770[iVar0]);
		}
		else
		{
			unk_0xA902E18EDF6FA0C8(3, Global_180770[iVar0], -1467815081);
			unk_0xA902E18EDF6FA0C8(3, -1467815081, Global_180770[iVar0]);
		}
		iVar0++;
	}
}

void func_504(var uParam0, int iParam1)//Position - 0x14E35
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0xFA30DFD0084E92FE(iParam1, iVar0))
		{
			unk_0xA902E18EDF6FA0C8(1, Global_180770[iVar0], *uParam0);
			unk_0xA902E18EDF6FA0C8(1, *uParam0, Global_180770[iVar0]);
		}
		else
		{
			unk_0xA902E18EDF6FA0C8(3, Global_180770[iVar0], *uParam0);
			unk_0xA902E18EDF6FA0C8(3, *uParam0, Global_180770[iVar0]);
		}
		iVar0++;
	}
}

int func_505()//Position - 0x14E9E
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (iLocal_101 == 1 || iLocal_101 == 0)
		{
			if (iLocal_102 == unk_0x3171C34AB3FE6F2E(iVar1))
			{
				unk_0xF0059F27F7BB6680(&iVar0, iVar1);
			}
		}
		else if (unk_0xB5CEFD608600A09F() == unk_0x3171C34AB3FE6F2E(iVar1))
		{
			unk_0xF0059F27F7BB6680(&iVar0, iVar1);
		}
		else if (func_6(unk_0x3171C34AB3FE6F2E(iVar1), 0, 1))
		{
			if (func_47(unk_0x3171C34AB3FE6F2E(iVar1)))
			{
				unk_0xF0059F27F7BB6680(&iVar0, iVar1);
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_506()//Position - 0x14F27
{
	switch (iLocal_101)
	{
		case 0:
			if (!unk_0xFA30DFD0084E92FE(iLocal_98, 11))
			{
				if (unk_0xB5CEFD608600A09F() == iLocal_102)
				{
					if (func_6(iLocal_103, 1, 1))
					{
						func_331("GC_TCK_60", iLocal_103, 0, 0, 0, 1, 1, 0);
						unk_0xF0059F27F7BB6680(&iLocal_98, 11);
					}
				}
			}
			if (!unk_0xFA30DFD0084E92FE(iLocal_98, 12))
			{
				if (unk_0xFA30DFD0084E92FE(Local_95.f_1, 8))
				{
					if (unk_0xB5CEFD608600A09F() == iLocal_102)
					{
						if (func_6(iLocal_103, 1, 1))
						{
							func_331("GC_TCK_62", iLocal_103, 0, 0, 0, 1, 1, 0);
							unk_0xF0059F27F7BB6680(&iLocal_98, 12);
						}
					}
				}
			}
			if (unk_0xFA30DFD0084E92FE(Local_95.f_2, 10))
			{
				if (!unk_0xFA30DFD0084E92FE(iLocal_98, 8))
				{
					if (unk_0xB5CEFD608600A09F() == iLocal_102)
					{
						if (func_6(iLocal_103, 1, 1))
						{
							func_331("GC_TCK_65", iLocal_103, 0, 0, 0, 1, 1, 0);
							unk_0xF0059F27F7BB6680(&iLocal_98, 8);
						}
					}
				}
			}
			else if (!unk_0xFA30DFD0084E92FE(iLocal_98, 13))
			{
				if (!unk_0xFA30DFD0084E92FE(Local_95.f_2, 11))
				{
					if (unk_0xFA30DFD0084E92FE(Local_95.f_1, 8))
					{
						if (unk_0xFA30DFD0084E92FE(Local_95.f_2, 6))
						{
							if (unk_0xB5CEFD608600A09F() == iLocal_102)
							{
								if (func_6(iLocal_103, 1, 1))
								{
									func_331("GC_TCK_63", iLocal_103, 0, 0, 0, 1, 1, 0);
									unk_0xF0059F27F7BB6680(&iLocal_98, 13);
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0xFA30DFD0084E92FE(iLocal_98, 11))
			{
				if (unk_0xB5CEFD608600A09F() == iLocal_102)
				{
					if (func_6(iLocal_103, 1, 1))
					{
						if (Local_95.f_32)
						{
							func_331("HS_SUCC", iLocal_103, 0, 0, 0, 1, 1, 0);
						}
						else if (Local_95.f_34)
						{
							func_331("GO_ASS_SUCC", iLocal_103, 0, 0, 0, 1, 1, 0);
						}
						else
						{
							func_331("GC_TCK_70", iLocal_103, 0, 0, 0, 1, 1, 0);
						}
						unk_0xF0059F27F7BB6680(&iLocal_98, 11);
					}
				}
				else if (unk_0xB5CEFD608600A09F() == iLocal_103)
				{
					if (func_6(iLocal_102, 1, 1))
					{
						if (Local_95.f_32)
						{
							if (Local_95.f_33)
							{
								func_508("HS_A_SUCC", 1);
							}
							else
							{
								func_331("HS_SENT", iLocal_102, 0, 0, 0, 1, 1, 0);
							}
						}
						else if (Local_95.f_34)
						{
							func_331("GO_ASS_SENT", iLocal_102, 0, 0, 0, 1, 1, 0);
						}
						else
						{
							func_331("GC_TCK_71", iLocal_102, 0, 0, 0, 1, 1, 0);
						}
						unk_0xF0059F27F7BB6680(&iLocal_98, 11);
					}
				}
			}
			if (!unk_0xFA30DFD0084E92FE(iLocal_98, 10))
			{
				if (unk_0xFA30DFD0084E92FE(Local_95.f_1, 0))
				{
					if (unk_0xFA30DFD0084E92FE(Local_95.f_3, 6))
					{
						if (unk_0xB5CEFD608600A09F() == iLocal_102)
						{
							if (func_6(iLocal_103, 0, 1))
							{
								func_507(-1);
								if (Local_95.f_32)
								{
									if (!Local_95.f_33)
									{
										func_331("HS_KILLED", iLocal_103, 0, 0, 0, 1, 1, 0);
									}
								}
								else if (Local_95.f_34)
								{
									func_331("GO_ASS_KILL", iLocal_103, 0, 0, 0, 1, 1, 0);
								}
								else
								{
									func_331("GC_TCK_73", iLocal_103, 0, 0, 0, 1, 1, 0);
								}
								unk_0xF0059F27F7BB6680(&iLocal_98, 10);
							}
						}
					}
				}
			}
			if (!unk_0xFA30DFD0084E92FE(iLocal_98, 9))
			{
				if (unk_0xFA30DFD0084E92FE(Local_95.f_1, 0))
				{
					if (unk_0xFA30DFD0084E92FE(Local_95.f_3, 7))
					{
						if (unk_0xB5CEFD608600A09F() == iLocal_102)
						{
							if (func_6(iLocal_103, 0, 1))
							{
								if (Local_95.f_32)
								{
									func_331("HS_ESCAPED", iLocal_103, 0, 0, 0, 1, 1, 0);
								}
								else if (Local_95.f_34)
								{
									func_331("GO_ASS_ESC", iLocal_103, 0, 0, 0, 1, 1, 0);
								}
								else
								{
									func_331("GC_TCK_75", iLocal_103, 0, 0, 0, 1, 1, 0);
								}
								unk_0xF0059F27F7BB6680(&iLocal_98, 9);
							}
						}
					}
				}
			}
			break;
	}
}

void func_507(int iParam0)//Position - 0x152A4
{
	if (Global_1805CA)
	{
		if (Global_1805CE && Global_18402B[unk_0xB5CEFD608600A09F() /*770*/] != 148)
		{
			if (Global_1803FC.f_E == unk_0x3171C34AB3FE6F2E(iParam0))
			{
				Global_18C200++;
			}
		}
		else
		{
			Global_18C200++;
		}
	}
}

int func_508(char* sParam0, int iParam1)//Position - 0x152F3
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x2E94302CFF011F2E(sParam0);
	iVar0 = unk_0x5E48BB10C6423FD5(0, 1);
	func_332(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_509()//Position - 0x1531F
{
	if (unk_0xBC93E1C9C8F877D9(false, 0) != Local_95.f_2D)
	{
		if (func_517(Local_95.f_2D, 0, 1))
		{
			if (unk_0xC77EC38683AB49CC(0) <= Local_95.f_2D)
			{
				unk_0xD1CF2F876BAD2600(Local_95.f_2D);
			}
		}
	}
	if (unk_0x146F82F73FA40AB0(false, 0) != Local_95.f_2E)
	{
		if (func_516(Local_95.f_2D, 0, 1))
		{
			if (unk_0x16EE8745DB04D52E(0) <= Local_95.f_2E)
			{
				unk_0xA6E7E0EC9E48D44C(Local_95.f_2E);
			}
		}
	}
	if (unk_0x2B3A16ECF7925A20(false, 0) != Local_95.f_2F)
	{
		if (func_510(Local_95.f_2D, 0, 1))
		{
			if (unk_0x359A6FC86B0DD50E(0) <= Local_95.f_2F)
			{
				unk_0x38A34821FCF0B79E(Local_95.f_2F);
			}
		}
	}
}

bool func_510(int iParam0, bool bParam1, bool bParam2)//Position - 0x153B1
{
	return func_511(2, iParam0, 1, bParam1, bParam2);
}

int func_511(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x153C5
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xFA30DFD0084E92FE(Global_14FADF, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_515(iParam0) - func_514(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_514(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_515(iParam0) - func_513(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_514(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_515(iParam0) - func_514(iParam0, 1));
		}
		if (!bParam4 && Global_18402B[unk_0xB5CEFD608600A09F() /*770*/] != 3)
		{
			iVar1 = (iVar1 - func_512(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_512(int iParam0)//Position - 0x1548E
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_513(int iParam0)//Position - 0x154C8
{
	switch (iParam0)
	{
		case 0:
			return Global_14FADF.f_1;
			break;
		
		case 1:
			return Global_14FADF.f_2;
			break;
		
		case 2:
			return Global_14FADF.f_3;
			break;
	}
	return 0;
}

int func_514(int iParam0, bool bParam1)//Position - 0x1550E
{
	int iVar0;
	
	iVar0 = unk_0xB5CEFD608600A09F();
	switch (iParam0)
	{
		case 0:
			if (!unk_0x32405B7614E36453())
			{
				return Global_24FB5C[iVar0 /*406*/].f_CD;
			}
			else
			{
				return unk_0xBC93E1C9C8F877D9(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!unk_0x32405B7614E36453())
			{
				return Global_24FB5C[iVar0 /*406*/].f_CE;
			}
			else
			{
				return unk_0x146F82F73FA40AB0(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!unk_0x32405B7614E36453())
			{
				return Global_24FB5C[iVar0 /*406*/].f_CF;
			}
			else
			{
				return unk_0x2B3A16ECF7925A20(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_515(int iParam0)//Position - 0x155AB
{
	switch (iParam0)
	{
		case 0:
			return Global_14FAE7;
			break;
		
		case 1:
			return Global_14FAE8;
			break;
		
		case 2:
			return Global_14FAE9;
			break;
	}
	return 0;
}

bool func_516(int iParam0, bool bParam1, bool bParam2)//Position - 0x155EB
{
	return func_511(1, iParam0, 1, bParam1, bParam2);
}

bool func_517(int iParam0, bool bParam1, bool bParam2)//Position - 0x155FF
{
	return func_511(0, iParam0, 1, bParam1, bParam2);
}

void func_518()//Position - 0x15613
{
	if (Local_95.f_32)
	{
		if (unk_0xB5CEFD608600A09F() == iLocal_102)
		{
			func_520(9);
		}
		else if (unk_0xB5CEFD608600A09F() == iLocal_103)
		{
			func_520(13);
		}
	}
	else if (Local_95.f_34)
	{
	}
	func_519();
}

void func_519()//Position - 0x15653
{
	unk_0x95E4B6F3ED223F5A();
}

void func_520(int iParam0)//Position - 0x1565F
{
	unk_0x7CB6FD92BE491AD9(&(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_5), iParam0);
}

int func_521()//Position - 0x1567C
{
	var uVar0;
	
	func_528(&uVar0);
	if (Global_14083F == 0)
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			return 1;
		}
	}
	if (func_527())
	{
		return 1;
	}
	if (Global_25891C)
	{
		return 1;
	}
	if (func_526())
	{
		return 1;
	}
	if (func_525(157))
	{
		if (!func_524())
		{
			return 1;
		}
	}
	if (func_525(155))
	{
		return 1;
	}
	if (!unk_0x57D316754A262B34())
	{
		return 1;
	}
	if (func_522() != 0)
	{
		if (unk_0xB731B8C5BCE89836(func_522()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_522()//Position - 0x15706
{
	switch (func_523())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_523()//Position - 0x1573A
{
	return Global_62BD;
}

bool func_524()//Position - 0x15745
{
	return Global_255A46.f_24A;
}

int func_525(int iParam0)//Position - 0x15754
{
	if (unk_0xA1AC399BCBEE5B2D(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_526()//Position - 0x1576B
{
	return Global_258063;
}

bool func_527()//Position - 0x15777
{
	return Global_255A46.f_245;
}

void func_528(var uParam0)//Position - 0x15786
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	
	iVar0 = 0;
	while (iVar0 < unk_0x432AA9CCB3EE0174(1))
	{
		iVar1 = unk_0x2BFAC254CC069912(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x414AA1932D1C88E2(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 1113296425:
					func_529(iVar0);
					break;
				
				case -319074860:
					unk_0x414AA1932D1C88E2(1, iVar0, &vVar3, 4);
					if (vVar3.z == -1987561915)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_529(int iParam0)//Position - 0x157F9
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x414AA1932D1C88E2(1, iParam0, &vVar0, 3))
	{
		if (func_6(vVar0.y, 1, 1))
		{
			iVar1 = unk_0xA95CF30C72EB526E(vVar0.y);
			if (unk_0x724D816EA203A79E(iVar1))
			{
				if (unk_0x5237AF95232D78C5(iVar1, 0))
				{
					iVar2 = unk_0x9FE9D386222EEE47(iVar1, 0);
					if (unk_0x403C891106DCABAF(iVar2, vVar0.z) && unk_0x32405B7614E36453())
					{
						if (func_530(iVar2, &bVar3))
						{
							unk_0xD5DC0505375F4D00(iVar2, vVar0.z);
						}
						if (bVar3)
						{
							unk_0x1E7A09C1710FB071(&iVar2);
						}
					}
				}
			}
		}
	}
}

int func_530(int iParam0, var uParam1)//Position - 0x1587A
{
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (!unk_0x5CAE759AE8219D20(iParam0))
		{
			if (unk_0x63B5FF8D34CBC98E(iParam0))
			{
				if (!unk_0xFF2234981505F7F4(unk_0x6F79ECA8C83E4357(iParam0)))
				{
					unk_0x77815D3407C6700D(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0xB248FAA35ED47DB9(iParam0, 0))
		{
			if (unk_0x4DF785C4DF542CD0(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_531()//Position - 0x158D9
{
	SYSTEM::WAIT(0);
}

void func_532(struct<21> Param0)//Position - 0x158E6
{
	func_538(32, Param0);
	func_537(0, -1, 0);
	unk_0x76AE988734CA7760(&Local_95, 56);
	unk_0xE45D6A3FD6454198(&Local_97, 161);
	unk_0x6C87EFD58B261C6F(0);
	if (!func_536())
	{
		func_255();
	}
	iLocal_101 = Param0.f_10;
	iLocal_102 = unk_0x3171C34AB3FE6F2E(Param0.f_11);
	if (unk_0x96B1061E8F3CBC9A(iLocal_102))
	{
	}
	iLocal_103 = unk_0x3171C34AB3FE6F2E(Param0.f_12);
	if (unk_0x96B1061E8F3CBC9A(iLocal_103))
	{
		iLocal_104 = unk_0x56BEECB328B6D29D(unk_0xD885B2234FC72D62(iLocal_103));
	}
	if (func_535(iLocal_102, 9) && iLocal_101 == 1)
	{
		Local_95.f_32 = 1;
		if (func_535(iLocal_103, 13))
		{
			Local_95.f_33 = 1;
		}
	}
	if (iLocal_101 == 1)
	{
		if (func_534(iLocal_102))
		{
			Local_95.f_34 = 1;
			Local_95.f_35 = func_533(iLocal_102);
		}
	}
	vLocal_105 = { Param0.f_A };
	if (iLocal_101 == 1)
	{
		if (unk_0xB5CEFD608600A09F() == iLocal_102)
		{
			unk_0xF0059F27F7BB6680(&Global_1801DA, 0);
		}
	}
	Global_191870 = 0;
	Global_191871 = 0;
	if (iLocal_101 == 1)
	{
		Global_267214.f_69C = 0;
	}
	Local_97[unk_0x822BEC8031773562() /*5*/] = 0;
}

var func_533(int iParam0)//Position - 0x159F4
{
	return Global_18402B[iParam0 /*770*/].f_B7.f_4;
}

bool func_534(int iParam0)//Position - 0x15A09
{
	return Global_18402B[iParam0 /*770*/].f_B7 != func_13();
}

bool func_535(int iParam0, int iParam1)//Position - 0x15A21
{
	return unk_0xFA30DFD0084E92FE(Global_18C80F[iParam0 /*558*/].f_B.f_5, iParam1);
}

int func_536()//Position - 0x15A3C
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x7AF0088ABFA713B6())
		{
			return 0;
		}
		if (unk_0xB3E1B1F67FB95F04())
		{
			return 1;
		}
		if (func_527())
		{
			return 0;
		}
		if (func_525(155))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}

int func_537(int iParam0, int iParam1, bool bParam2)//Position - 0x15A95
{
	int iVar0;
	
	iVar0 = unk_0x4796DAD7A8894E2F();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_519();
			}
			else
			{
				return 0;
			}
		}
		if (!func_496())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x7AF0088ABFA713B6())
				{
					if (!bParam2)
					{
						func_519();
					}
					else
					{
						return 0;
					}
				}
				if (func_527())
				{
					if (!bParam2)
					{
						func_519();
					}
					else
					{
						return 0;
					}
				}
				if (func_525(155))
				{
					if (!bParam2)
					{
						func_519();
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
					func_519();
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
				func_519();
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
			func_519();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_538(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x15BAA
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		func_519();
	}
	unk_0xBF463BC3D6FFDE31(iParam0, 0, Param1.f_10);
}

