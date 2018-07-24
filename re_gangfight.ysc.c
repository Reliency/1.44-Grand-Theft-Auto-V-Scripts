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
	int iLocal_47 = 0;
	vector3 vLocal_48 = { 0f, 0f, 0f };
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	bool bLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_58 = 0;
	int iLocal_59[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_60 = 0;
	int iLocal_61[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_62 = 0;
	var uLocal_63 = 16;
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
	int iLocal_228 = 0;
	struct<2> Local_229 = { 0, 5 } ;
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
	var uLocal_245 = 5;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	int iVar2;
	
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
	vLocal_48 = { ScriptParam_229.f_1[0 /*3*/] };
	if (unk_0xE8A79675302ED812(11))
	{
		func_140();
	}
	if (func_98(vLocal_48, -1, 0, 0, 0))
	{
		func_95(-1);
	}
	else
	{
		unk_0x95E4B6F3ED223F5A();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		func_94();
		if (unk_0x684B06333594F9EA())
		{
			if (iLocal_55 > unk_0x105601648511CC64())
			{
				unk_0xE9B1C9E275C24095();
			}
			if (!func_93())
			{
				if (!func_93())
				{
					if (func_92())
					{
						func_140();
					}
				}
				unk_0x2E94C9549322098D("RE_CGF", 0);
				switch (iLocal_44)
				{
					case 0:
						if (func_80())
						{
							func_140();
						}
						if (func_79())
						{
							iLocal_49 = 1;
							iLocal_44 = 1;
						}
						break;
					
					case 1:
						func_78();
						if (!func_77() || unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
						{
							if ((!unk_0x36CEFBE9B745A58D(iLocal_58) && !unk_0x36CEFBE9B745A58D(iLocal_59[0])) && !unk_0x36CEFBE9B745A58D(iLocal_59[1]))
							{
								if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), 969.2191f, 3608.665f, 41.8758f, 100f, 80f, 20f, false, true, 0))
								{
									iLocal_56 = func_74(iLocal_58, 0, 145);
									unk_0x12DB69036F6569F7(iLocal_56, 9);
									iLocal_57[0] = func_74(iLocal_59[0], 1, 145);
									iLocal_57[1] = func_74(iLocal_59[1], 1, 145);
									unk_0x222805B89367761E(iLocal_56, false);
									unk_0x222805B89367761E(iLocal_57[0], false);
									unk_0x222805B89367761E(iLocal_57[1], false);
									func_64(1);
								}
							}
						}
						else
						{
							iVar0 = 0;
							while (iVar0 < iLocal_59)
							{
								if (!unk_0x36CEFBE9B745A58D(iLocal_59[iVar0]))
								{
									unk_0x5558ED6D4A2DEC93(iLocal_59[iVar0], unk_0xBC25C936A095B5BA(), 150f, -1, 0, 0);
								}
								iVar0++;
							}
							if (!unk_0x36CEFBE9B745A58D(iLocal_58))
							{
								unk_0x5558ED6D4A2DEC93(iLocal_58, unk_0xBC25C936A095B5BA(), 150f, -1, 0, 0);
							}
							func_63();
						}
						break;
				}
			}
			else
			{
				unk_0xDF53A66AEE1401AA(0f);
				unk_0x6A095EC1C9AF12A4(unk_0xB5CEFD608600A09F());
				if (!unk_0x36CEFBE9B745A58D(iLocal_58))
				{
					if (unk_0xD9C1758D86688CEA(iLocal_58, unk_0xBC25C936A095B5BA(), 1))
					{
						unk_0x5558ED6D4A2DEC93(iLocal_58, unk_0xBC25C936A095B5BA(), 150f, -1, 0, 0);
						func_63();
					}
					if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_58, 150f, 150f, 50f, 0, 1, 0))
					{
						if (iLocal_46 >= 5 && iLocal_45 == 2)
						{
						}
						else
						{
							func_78();
							func_62();
						}
						switch (iLocal_45)
						{
							case 0:
								func_61();
								if (func_77())
								{
									bLocal_51 = true;
									iLocal_46 = 4;
								}
								break;
							
							case 1:
								if (iLocal_46 < 7 && !unk_0x36CEFBE9B745A58D(iLocal_58))
								{
									if (unk_0xC5B8A5F778E321DD(unk_0xBC25C936A095B5BA(), iLocal_58, 90f))
									{
										if (unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), iLocal_58) || unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), iLocal_58))
										{
											func_58();
										}
									}
								}
								func_53();
								break;
							
							case 2:
								func_9();
								break;
							
							case 3:
								func_1();
								break;
						}
					}
					else
					{
						func_63();
					}
				}
				else
				{
					if (unk_0x2DA8CA50A72528FB(iLocal_56))
					{
						unk_0x07B8ECB35A4ED3AC(&iLocal_56);
					}
					if (((!unk_0x36CEFBE9B745A58D(iLocal_59[0]) && !unk_0x36CEFBE9B745A58D(iLocal_59[1])) && !unk_0x1D403DFADBC2DE3C(iLocal_61[0], 0)) && !unk_0x1D403DFADBC2DE3C(iLocal_61[1], 0))
					{
						func_63();
					}
					iVar1 = 0;
					iVar2 = 0;
					while (iVar2 < iLocal_59)
					{
						if (!unk_0x36CEFBE9B745A58D(iLocal_59[iVar2]))
						{
							unk_0xB8CBD998685C0685(iLocal_59[iVar2], unk_0xBC25C936A095B5BA(), 0, 16);
							unk_0x22321800954A532E(iLocal_59[iVar2], true);
							if (!unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_59[iVar2], 150f, 150f, 50f, 0, 1, 0))
							{
								func_63();
							}
							iVar1 = 1;
						}
						else if (unk_0x2DA8CA50A72528FB(iLocal_57[iVar2]))
						{
							unk_0x07B8ECB35A4ED3AC(&(iLocal_57[iVar2]));
						}
						iVar2++;
					}
					if (iVar1 == 0)
					{
						func_63();
					}
				}
			}
		}
		else
		{
			func_140();
		}
	}
}

void func_1()//Position - 0x431
{
	int iVar0;
	
	if (iLocal_49 && !iLocal_54)
	{
		if (!func_6("RECGF_SHOOT"))
		{
			func_4();
		}
		if (unk_0x2DA8CA50A72528FB(iLocal_56))
		{
			unk_0x07B8ECB35A4ED3AC(&iLocal_56);
		}
		if (!unk_0x36CEFBE9B745A58D(iLocal_58))
		{
			unk_0xF82197F205B9D8FD(iLocal_58, false);
			unk_0x2E35C4FA5F0ED22F(iLocal_58, false);
		}
		iVar0 = 0;
		while (iVar0 < iLocal_59)
		{
			if (unk_0x2DA8CA50A72528FB(iLocal_57[iVar0]))
			{
				unk_0x07B8ECB35A4ED3AC(&(iLocal_57[iVar0]));
			}
			if (!unk_0x36CEFBE9B745A58D(iLocal_59[iVar0]) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				if (iVar0 < 2)
				{
					if (!unk_0x1D403DFADBC2DE3C(iLocal_61[iVar0], 0))
					{
						unk_0x1A06AE15BF21D407(iLocal_59[iVar0], iLocal_61[iVar0], unk_0xBC25C936A095B5BA(), 8, 20f, 786469, 150f, 10f, 1);
						unk_0x22321800954A532E(iLocal_59[iVar0], true);
					}
					else
					{
						unk_0x5558ED6D4A2DEC93(iLocal_59[iVar0], unk_0xBC25C936A095B5BA(), 200f, -1, 0, 0);
					}
				}
				else
				{
					unk_0x5558ED6D4A2DEC93(iLocal_59[iVar0], unk_0xBC25C936A095B5BA(), 200f, -1, 0, 0);
				}
				unk_0x2E35C4FA5F0ED22F(iLocal_59[iVar0], false);
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_61)
		{
			if (!unk_0x1D403DFADBC2DE3C(iLocal_61[iVar0], 0))
			{
				unk_0x1E7A09C1710FB071(&(iLocal_61[iVar0]));
				if (unk_0x144E80F5C46A6B75("RE_COUNTRYSIDE_GANG_FIGHT_SCENE"))
				{
				}
			}
			iVar0++;
		}
		unk_0xC1300D0F3A74E20B("RE_COUNTRYSIDE_GANG_FIGHT_SCENE");
		unk_0xDF53A66AEE1401AA(1f);
		unk_0x4806A94C8ED574C3(417.901f, 3578.002f, 31.176f, 1305.897f, 3604.306f, 40.1064f, 100.0625f, 1);
		unk_0xB830DBD32591E1BC();
		unk_0xE85B33FB221A23CD(3, true);
		unk_0xE85B33FB221A23CD(5, true);
		func_3(&uLocal_63, 1);
		func_3(&uLocal_63, 2);
		func_3(&uLocal_63, 3);
		func_3(&uLocal_63, 4);
		iLocal_54 = 1;
	}
	if (unk_0xF0F2FC9DE291567F(func_2(unk_0xB5CEFD608600A09F()), vLocal_48, true) > 50f)
	{
		func_140();
	}
}

Vector3 func_2(int iParam0)//Position - 0x600
{
	return unk_0x541C2AEF053615BC(unk_0xA95CF30C72EB526E(iParam0), false);
}

void func_3(var uParam0, int iParam1)//Position - 0x613
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_4()//Position - 0x630
{
	Global_394A = 0;
	func_5();
}

void func_5()//Position - 0x640
{
	unk_0x5C7DC611411E2CF9();
	Global_41AB = 0;
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x1E08809A5041F85B(false);
		Global_3DB8 = 6;
	}
}

int func_6(char* sParam0)//Position - 0x661
{
	var uVar0;
	
	if (func_8())
	{
		MemCopy(&uVar0, {func_7()}, 4);
		if (unk_0x3362CDE8460ED38B(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_7()//Position - 0x689
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_3DB8 == 4)
	{
		return Global_3C3B;
	}
	return Var0;
}

int func_8()//Position - 0x6AD
{
	if (Global_3DB8 != 0 || unk_0xE6711F601F11B66B())
	{
		return 1;
	}
	return 0;
}

void func_9()//Position - 0x6CF
{
	int iVar0;
	int iVar1;
	
	switch (iLocal_46)
	{
		case 0:
			if (SYSTEM::TIMERB() > 2000)
			{
				iVar0 = 0;
				while (iVar0 < iLocal_59)
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_59[iVar0]) && !unk_0x1D403DFADBC2DE3C(iLocal_61[iVar0], 0))
					{
						if (!unk_0x2DA8CA50A72528FB(iLocal_57[iVar0]))
						{
							iLocal_57[iVar0] = func_74(iLocal_59[iVar0], 1, 145);
							if (unk_0x5237AF95232D78C5(iLocal_59[iVar0], 0))
							{
								if (!bLocal_51)
								{
									unk_0x10790F4A9247B707(iLocal_59[iVar0], unk_0xBC25C936A095B5BA(), 0, 0f, 0f, 0f, 150f, 100, 1, -753768974);
								}
								else
								{
									unk_0xC5A6DFE2B8987B17(&iLocal_62);
									unk_0xB8CBD998685C0685(0, unk_0xBC25C936A095B5BA(), 0, 16);
									unk_0x535008C596714F9E(iLocal_62);
									unk_0xA8E6405305C0D7DF(iLocal_59[iVar0], iLocal_62);
									unk_0x02DAF06EA4F08219(&iLocal_62);
									unk_0x22321800954A532E(iLocal_59[iVar0], true);
								}
							}
						}
					}
					iVar0++;
				}
				if (!func_8())
				{
					if (func_41(&uLocal_63, "RECGFAU", "RECGF_BIKERS", 4, 0, 0, 0))
					{
						iLocal_46++;
					}
				}
			}
			break;
		
		case 1:
			iVar1 = 0;
			while (iVar1 < iLocal_59)
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_59[iVar1]))
				{
					if (unk_0x4DBCE270B354E123(iLocal_59[iVar1], 904.3153f, 3631.684f, 31.574f, 7f, 7f, 7f, false, true, 0))
					{
						if (!unk_0x1D403DFADBC2DE3C(iLocal_61[iVar1], 0))
						{
							unk_0x38E412DB4A45B900(iLocal_61[iVar1], 0);
						}
						if (unk_0x5237AF95232D78C5(iLocal_59[iVar1], 0))
						{
							unk_0xC5A6DFE2B8987B17(&iLocal_62);
							unk_0xA3981DED4FC2E56E(0, 0, 0);
							unk_0xB8CBD998685C0685(0, unk_0xBC25C936A095B5BA(), 0, 16);
							unk_0x535008C596714F9E(iLocal_62);
							unk_0xA8E6405305C0D7DF(iLocal_59[iVar1], iLocal_62);
							unk_0x02DAF06EA4F08219(&iLocal_62);
							unk_0x22321800954A532E(iLocal_59[iVar1], true);
						}
					}
					if (!unk_0x5237AF95232D78C5(iLocal_59[iVar1], 0))
					{
						unk_0xB8CBD998685C0685(iLocal_59[iVar1], unk_0xBC25C936A095B5BA(), 0, 16);
						unk_0x22321800954A532E(iLocal_59[iVar1], true);
					}
					if (!unk_0x1D403DFADBC2DE3C(iLocal_61[iVar1], 0))
					{
						if (unk_0x9DD22A56B46C85AD(iLocal_61[iVar1]))
						{
						}
					}
				}
				if (unk_0x36CEFBE9B745A58D(iLocal_59[iVar1]))
				{
					if (unk_0x2DA8CA50A72528FB(iLocal_57[iVar1]))
					{
						unk_0x07B8ECB35A4ED3AC(&(iLocal_57[iVar1]));
					}
				}
				iVar1++;
			}
			if (((unk_0x36CEFBE9B745A58D(iLocal_59[2]) && unk_0x36CEFBE9B745A58D(iLocal_59[3])) && unk_0x36CEFBE9B745A58D(iLocal_59[4])) && unk_0x36CEFBE9B745A58D(iLocal_59[5]))
			{
				unk_0xC1300D0F3A74E20B("RE_COUNTRYSIDE_GANG_FIGHT_SCENE");
				iLocal_46++;
			}
			break;
		
		case 2:
			func_40(1500);
			if (!unk_0x36CEFBE9B745A58D(iLocal_58))
			{
				unk_0xA4E856A8CD53B8DF(iLocal_58);
				unk_0xC5A6DFE2B8987B17(&iLocal_62);
				unk_0x56F2E1B5599188FA(0, unk_0xBC25C936A095B5BA(), -1, 2056, 2);
				unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), -1);
				unk_0x535008C596714F9E(iLocal_62);
				unk_0xA8E6405305C0D7DF(iLocal_58, iLocal_62);
				unk_0x02DAF06EA4F08219(&iLocal_62);
			}
			if (!unk_0x1D403DFADBC2DE3C(iLocal_60, 0))
			{
				unk_0x5502708AECB47F5D(iLocal_60);
				if (!unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_58, 5f, 5f, 5f, 0, 1, 0))
				{
					func_41(&uLocal_63, "RECGFAU", "RECGF_REWARD", 4, 0, 0, 0);
				}
			}
			iLocal_46++;
			break;
		
		case 3:
			if (!unk_0x36CEFBE9B745A58D(iLocal_58))
			{
				if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_58, 6f, 6f, 6f, 0, 1, 0))
				{
					if (unk_0xC5B8A5F778E321DD(iLocal_58, unk_0xBC25C936A095B5BA(), 60f))
					{
						if (!func_8())
						{
							if (func_41(&uLocal_63, "RECGFAU", "RECGF_END", 4, 0, 0, 0))
							{
								iLocal_46++;
							}
						}
					}
				}
			}
			if (!unk_0x36CEFBE9B745A58D(iLocal_58))
			{
				if (!unk_0xE642C1AC73CE364E(iLocal_58, unk_0xBC25C936A095B5BA(), 120f, 120f, 120f, 0, 1, 0))
				{
					func_10();
				}
			}
			if (!unk_0x1D403DFADBC2DE3C(iLocal_60, 0))
			{
				if (unk_0xD9C1758D86688CEA(iLocal_60, unk_0xBC25C936A095B5BA(), 0))
				{
					func_63();
				}
			}
			break;
		
		case 4:
			iLocal_46++;
			break;
		
		case 5:
			if (!unk_0x36CEFBE9B745A58D(iLocal_58) && !unk_0x1D403DFADBC2DE3C(iLocal_60, 0))
			{
				unk_0xC5A6DFE2B8987B17(&iLocal_62);
				unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 1500);
				unk_0xD179FA0466FA4FE3(0, iLocal_60, -1, -1, 2f, 8, 0);
				unk_0x61E7E913658B4389(0, 2000);
				unk_0xE896C0AD02364F2A(0, "veh@drivebystd_ds_grenades", "drop_grenade", 2f, -2f, -1, 0, 0, 0, 0, 0);
				unk_0x204BA7B1C7DD25F4(0, iLocal_60, 10f, 786603);
				unk_0x535008C596714F9E(iLocal_62);
				unk_0xA8E6405305C0D7DF(iLocal_58, iLocal_62);
				unk_0x02DAF06EA4F08219(&iLocal_62);
				unk_0x22321800954A532E(iLocal_58, true);
				unk_0xD7E19B03E0EB54E5(iLocal_60, 1);
				iLocal_46++;
			}
			break;
		
		case 6:
			if (!unk_0x36CEFBE9B745A58D(iLocal_58))
			{
				if (unk_0x96044E39418AAF17(iLocal_58, "veh@drivebystd_ds_grenades", "drop_grenade", 3))
				{
					if (unk_0x4A3B2CF8BADDD74E(iLocal_58, "veh@drivebystd_ds_grenades", "drop_grenade") > 0.436f && unk_0x5237AF95232D78C5(iLocal_58, 0))
					{
						unk_0xE92467219E1F8814(unk_0xA4455714F3DCE207(unk_0x9FE9D386222EEE47(iLocal_58, 0), -1f, 0f, 0f), 1000, 1, 0);
						iLocal_46++;
					}
				}
			}
			break;
		
		case 7:
			if (!func_8())
			{
				func_41(&uLocal_63, "RECGFAU", "RECGF_END2", 4, 0, 0, 0);
				func_10();
			}
			break;
	}
}

void func_10()//Position - 0xB8C
{
	while (func_8())
	{
		SYSTEM::WAIT(0);
	}
	while (!func_39())
	{
		SYSTEM::WAIT(0);
	}
	func_14(-1, 0);
	func_11();
	iLocal_45 = 3;
}

void func_11()//Position - 0xBC0
{
	func_12();
}

int func_12()//Position - 0xBCD
{
	if (func_13(0))
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

bool func_13(bool bParam0)//Position - 0xC18
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_1163A, 0);
}

void func_14(int iParam0, int iParam1)//Position - 0xC43
{
	if (iParam0 == -1)
	{
		iParam0 = func_37();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_36(iParam0))
	{
		func_35(iParam0, iParam1);
		if (!func_34(51))
		{
			func_25("RE_REWARD", 1, 0, 4000, 10000, func_28(), 0, 138, 0);
			func_24(51);
		}
		if (func_23(iParam0))
		{
			Global_19B04.f_6186.f_2 = 3;
		}
		if (func_22(iParam0, iParam1) != 322)
		{
			func_16(func_22(iParam0, iParam1), vLocal_43.x, vLocal_43.y);
		}
		Global_19AF8 = iParam1;
		if (Global_19AF6 == 0)
		{
			if (((Global_19AF9 == 1 || Global_19AF9 == 5) || Global_19AF9 == 11) || Global_19AF9 == 25)
			{
				func_15(2);
			}
			else if ((Global_19AF9 == 26 || Global_19AF9 == 8) || Global_19AF9 == 17)
			{
				func_15(7);
			}
			else
			{
				func_15(1);
			}
		}
	}
}

void func_15(int iParam0)//Position - 0xD46
{
	Global_19AF6 = iParam0;
}

void func_16(int iParam0, var uParam1, var uParam2)//Position - 0xD54
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
		func_20((891 + iParam0), 1, -1, 1);
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
		func_17();
	}
}

void func_17()//Position - 0xE3C
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
		func_19(13, SYSTEM::FLOOR(Global_19B04.f_27B5.f_F0D));
	}
	if (!unk_0xF9BFA43C1BAFD016())
	{
		if (!Global_11542)
		{
			if (func_18() == 2 == 0 && !unk_0x7AF0088ABFA713B6())
			{
				if (unk_0x670C0C6C780A3F84())
				{
					Global_199FA = 0;
				}
				if (!Global_DA9F)
				{
					func_12();
				}
			}
		}
	}
}

int func_18()//Position - 0x12FD
{
	return Global_62BD;
}

int func_19(int iParam0, int iParam1)//Position - 0x1308
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

int func_20(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x1359
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
		iParam2 = func_21();
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

int func_21()//Position - 0x186B
{
	return Global_1407E0;
}

int func_22(int iParam0, int iParam1)//Position - 0x1877
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

int func_23(int iParam0)//Position - 0x1BEB
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

void func_24(int iParam0)//Position - 0x1C1A
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

void func_25(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x1C5C
{
	func_26(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_26(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x1C7E
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
		func_27();
	}
}

void func_27()//Position - 0x1E52
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

int func_28()//Position - 0x1F72
{
	func_29();
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

void func_29()//Position - 0x1FB8
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_33(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_32(unk_0xBC25C936A095B5BA());
			if (func_31(iVar0) && (!func_30(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_31(Global_19B04.f_932.f_21B.f_10CD))
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

bool func_30(int iParam0)//Position - 0x20B5
{
	return Global_8C41 == iParam0;
}

bool func_31(int iParam0)//Position - 0x20C3
{
	return iParam0 < 3;
}

int func_32(int iParam0)//Position - 0x20CF
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_33(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_33(int iParam0)//Position - 0x210C
{
	if (func_31(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_34(int iParam0)//Position - 0x2136
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

void func_35(int iParam0, int iParam1)//Position - 0x2179
{
	unk_0xF0059F27F7BB6680(&(Global_19B04.f_6186.f_8[iParam0]), iParam1);
}

int func_36(int iParam0)//Position - 0x2194
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

int func_37()//Position - 0x2245
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x1377080E9B0BD993(), 64);
	uVar1 = func_38(Var0);
	return uVar1;
}

int func_38(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x2262
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

int func_39()//Position - 0x243C
{
	return 1;
}

void func_40(int iParam0)//Position - 0x2445
{
	int iVar0;
	
	iVar0 = (unk_0x105601648511CC64() + iParam0);
	while (unk_0x105601648511CC64() <= iVar0)
	{
		SYSTEM::WAIT(0);
		if (iLocal_55 > unk_0x105601648511CC64())
		{
			unk_0xE9B1C9E275C24095();
		}
	}
}

bool func_41(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x2474
{
	func_52(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_42(sParam2, iParam3, 0);
}

int func_42(char* sParam0, int iParam1, bool bParam2)//Position - 0x24C2
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
					func_51();
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
		if (func_50(8, -1))
		{
			return 0;
		}
		Global_3E04 = { Global_3DFE };
		func_49();
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
				func_47();
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
				if (func_46())
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
			if (func_45())
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
			func_44();
			Global_3DC2 = bParam2;
		}
		Global_3DBA = iParam1;
		StringCopy(&Global_3C3B, sParam0, 24);
		Global_394A = 0;
		func_43();
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
		func_51();
	}
	return 0;
}

void func_43()//Position - 0x278E
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

void func_44()//Position - 0x27C0
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

int func_45()//Position - 0x2855
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_46()//Position - 0x287C
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

void func_47()//Position - 0x2915
{
	if (func_30(14))
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
		Global_389D = func_48();
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

int func_48()//Position - 0x29B7
{
	func_29();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_49()//Position - 0x29D0
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

bool func_50(int iParam0, int iParam1)//Position - 0x2A28
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

void func_51()//Position - 0x2A63
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

void func_52(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x2ABA
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

void func_53()//Position - 0x2B10
{
	int iVar0;
	
	switch (iLocal_46)
	{
		case 0:
			if (!unk_0x36CEFBE9B745A58D(iLocal_58))
			{
				iLocal_46++;
			}
			break;
		
		case 1:
			if (!unk_0x36CEFBE9B745A58D(iLocal_58))
			{
				if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_58, 20f, 20f, 20f, 0, 1, 0))
				{
					unk_0x56F2E1B5599188FA(iLocal_58, unk_0xBC25C936A095B5BA(), -1, 2060, 2);
					func_41(&uLocal_63, "RECGFAU", "RECGF_THX", 4, 0, 0, 0);
					iLocal_46++;
				}
			}
			break;
		
		case 2:
			if (!unk_0x36CEFBE9B745A58D(iLocal_58) && !unk_0x1D403DFADBC2DE3C(iLocal_60, 0))
			{
				unk_0xC5A6DFE2B8987B17(&iLocal_62);
				unk_0x346129B364057FF6(0, 916.5764f, 3602.146f, 31.9262f, 1f, 40000, 1048576000, 0, 1193033728);
				unk_0x535008C596714F9E(iLocal_62);
				unk_0xA8E6405305C0D7DF(iLocal_58, iLocal_62);
				unk_0x02DAF06EA4F08219(&iLocal_62);
				iLocal_46++;
			}
			break;
		
		case 3:
			if (!func_8())
			{
				if (func_48() == 0)
				{
					func_41(&uLocal_63, "RECGFAU", "RECGF_JABM", 4, 0, 0, 0);
				}
				else if (func_48() == 1)
				{
					func_41(&uLocal_63, "RECGFAU", "RECGF_JABF", 4, 0, 0, 0);
				}
				else if (func_48() == 2)
				{
					func_41(&uLocal_63, "RECGFAU", "RECGF_JABBER", 4, 0, 0, 0);
				}
				iLocal_46++;
			}
			break;
		
		case 4:
			if (!unk_0x36CEFBE9B745A58D(iLocal_58))
			{
				if (unk_0x4DBCE270B354E123(iLocal_58, 916.5764f, 3602.146f, 31.9262f, 3.3f, 3.3f, 3.3f, false, true, 0))
				{
					if (!unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_58, 8f, 8f, 8f, 0, 1, 0))
					{
						if (!func_8())
						{
							if (func_41(&uLocal_63, "RECGFAU", "RECGF_STASH", 4, 0, 0, 0))
							{
								unk_0x85DB484A637CEAB9(iLocal_58, unk_0xBC25C936A095B5BA(), -1);
								if (!unk_0x1D403DFADBC2DE3C(iLocal_60, 0))
								{
									unk_0x5502708AECB47F5D(iLocal_60);
								}
								iLocal_46++;
							}
						}
					}
					else
					{
						if (!unk_0x1D403DFADBC2DE3C(iLocal_60, 0))
						{
							unk_0x5502708AECB47F5D(iLocal_60);
						}
						iLocal_46 = 6;
					}
				}
			}
			break;
		
		case 5:
			if (!func_8())
			{
				if (func_48() == 0)
				{
					func_41(&uLocal_63, "RECGFAU", "RECGF_STASHM", 4, 0, 0, 0);
				}
				else if (func_48() == 1)
				{
					func_41(&uLocal_63, "RECGFAU", "RECGF_STASHF", 4, 0, 0, 0);
				}
				iLocal_46++;
			}
			break;
		
		case 6:
			if (!unk_0x36CEFBE9B745A58D(iLocal_58))
			{
				if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_58, 8f, 8f, 8f, 0, 1, 0))
				{
					if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) || unk_0x5CFC8E6CC224744A(unk_0xBC25C936A095B5BA()))
					{
						if (func_56())
						{
							func_40(1000);
							if ((!unk_0x36CEFBE9B745A58D(iLocal_58) && !unk_0x36CEFBE9B745A58D(iLocal_59[2])) && !unk_0x1D403DFADBC2DE3C(iLocal_60, 0))
							{
								unk_0xC5A6DFE2B8987B17(&iLocal_62);
								unk_0x96C0F2A7FFCD0DEF(0, iLocal_60, -1, -1, 1f);
								unk_0x56F2E1B5599188FA(0, iLocal_59[2], 2000, 0, 2);
								unk_0x85DB484A637CEAB9(0, iLocal_59[2], 0);
								unk_0x535008C596714F9E(iLocal_62);
								unk_0xA8E6405305C0D7DF(iLocal_58, iLocal_62);
								unk_0x02DAF06EA4F08219(&iLocal_62);
								func_40(2000);
								func_4();
								func_40(0);
								func_41(&uLocal_63, "RECGFAU", "RECGF_HIDE", 4, 0, 0, 0);
								if ((!unk_0x36CEFBE9B745A58D(iLocal_58) && !unk_0x1D403DFADBC2DE3C(iLocal_60, 0)) && unk_0x5237AF95232D78C5(iLocal_58, 0))
								{
									iLocal_46++;
								}
								else
								{
									if (!unk_0x36CEFBE9B745A58D(iLocal_58) && !unk_0x36CEFBE9B745A58D(iLocal_59[2]))
									{
										unk_0xC5A6DFE2B8987B17(&iLocal_62);
										unk_0xEE7131C3C73E7282(0, -1);
										unk_0x535008C596714F9E(iLocal_62);
										unk_0xA8E6405305C0D7DF(iLocal_58, iLocal_62);
										unk_0x02DAF06EA4F08219(&iLocal_62);
									}
									bLocal_51 = false;
									SYSTEM::SETTIMERB(0);
									iLocal_46++;
								}
							}
						}
					}
				}
			}
			if (!unk_0x1D403DFADBC2DE3C(iLocal_60, 0))
			{
				if (unk_0xD9C1758D86688CEA(iLocal_60, unk_0xBC25C936A095B5BA(), 0))
				{
					func_63();
				}
			}
			break;
		
		case 7:
			if ((((!unk_0x36CEFBE9B745A58D(iLocal_58) && !unk_0x1D403DFADBC2DE3C(iLocal_60, 0)) && !unk_0x62F3A07C43FFB568(iLocal_58, iLocal_60, 0)) && !unk_0x74AAB09D79A6344E(iLocal_58, 0)) && !unk_0xA2CA746F2255F6B7(iLocal_58))
			{
			}
			iVar0 = 0;
			while (iVar0 < iLocal_59)
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_59[iVar0]) && !unk_0x1D403DFADBC2DE3C(iLocal_61[iVar0], 0))
				{
					if (((((unk_0x11F754EAEA6336BA(unk_0xBC25C936A095B5BA(), (916.3351f - 100f), (3602.048f - 100f), (31.9209f - 100f), (916.3351f + 100f), (3602.048f + 100f), (31.9209f + 100f), 0, 1) || unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_59[iVar0], 5f, 5f, 5f, 0, 1, 0)) || unk_0xD9C1758D86688CEA(iLocal_59[iVar0], unk_0xBC25C936A095B5BA(), 1)) || unk_0xD9C1758D86688CEA(iLocal_61[iVar0], unk_0xBC25C936A095B5BA(), 1)) || unk_0xE921F8171F0733B3(unk_0xBC25C936A095B5BA(), iLocal_59[iVar0])) || unk_0xE921F8171F0733B3(unk_0xBC25C936A095B5BA(), iLocal_61[iVar0]))
					{
						bLocal_51 = true;
						SYSTEM::SETTIMERB(2000);
						iLocal_46 = 0;
						iLocal_45 = 2;
					}
				}
				iVar0++;
			}
			if (((unk_0x36CEFBE9B745A58D(iLocal_59[2]) && unk_0x36CEFBE9B745A58D(iLocal_59[3])) && unk_0x36CEFBE9B745A58D(iLocal_59[4])) && unk_0x36CEFBE9B745A58D(iLocal_59[5]))
			{
				iLocal_46 = 2;
				iLocal_45 = 2;
			}
			if (unk_0x4DBCE270B354E123(iLocal_59[2], 970.3641f, 3629.886f, 31.3694f, 5f, 5f, 5f, false, true, 0) || SYSTEM::TIMERB() > 13000)
			{
				func_40(2000);
				iVar0 = 0;
				while (iVar0 < iLocal_59)
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_59[iVar0]))
					{
						if (!unk_0x1D403DFADBC2DE3C(iLocal_61[iVar0], 0))
						{
							if (unk_0x62F3A07C43FFB568(iLocal_59[iVar0], iLocal_61[iVar0], 0))
							{
								unk_0x1A06AE15BF21D407(iLocal_59[iVar0], iLocal_61[iVar0], unk_0xBC25C936A095B5BA(), (iVar0 - 2) + 10, 60f, 786475, 5f, 10f, 1);
							}
						}
					}
					iVar0++;
				}
				if (!unk_0x36CEFBE9B745A58D(iLocal_58))
				{
					if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_58, 15f, 15f, 15f, 0, 1, 0))
					{
						func_54();
						func_40(0);
						func_41(&uLocal_63, "RECGFAU", "RECGF_GANG", 4, 0, 0, 0);
					}
				}
				SYSTEM::SETTIMERB(0);
				iLocal_46 = 0;
				iLocal_45 = 2;
			}
			break;
	}
}

void func_54()//Position - 0x3145
{
	Global_394A = 0;
	func_55();
}

void func_55()//Position - 0x3155
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

int func_56()//Position - 0x3179
{
	int iVar0;
	
	if (((((((!unk_0x724D816EA203A79E(iLocal_61[2]) && !unk_0x724D816EA203A79E(iLocal_61[3])) && !unk_0x724D816EA203A79E(iLocal_61[4])) && !unk_0x724D816EA203A79E(iLocal_61[5])) && !unk_0x724D816EA203A79E(iLocal_59[2])) && !unk_0x724D816EA203A79E(iLocal_59[3])) && !unk_0x724D816EA203A79E(iLocal_59[4])) && !unk_0x724D816EA203A79E(iLocal_59[5]))
	{
		unk_0xF243B7A14FCFD0F4(joaat("hexer"));
		unk_0xF243B7A14FCFD0F4(joaat("g_m_y_lost_01"));
		unk_0xF243B7A14FCFD0F4(joaat("g_m_y_lost_02"));
		unk_0xD6423910AAD8A379("RE_COUNTRYSIDE_GANG_FIGHT_SCENE");
		if (unk_0xD6513D668481290A(joaat("hexer")))
		{
			iLocal_61[2] = unk_0x61C05BF08A1E0EFE(joaat("hexer"), 863.4697f, 3633.5f, 31.9874f, 290.5797f, true, true, false);
			iLocal_61[3] = unk_0x61C05BF08A1E0EFE(joaat("hexer"), 866.4073f, 3636.039f, 31.9514f, 270.3649f, true, true, false);
			iLocal_61[4] = unk_0x61C05BF08A1E0EFE(joaat("hexer"), 866.3153f, 3631.587f, 31.9545f, 276.6327f, true, true, false);
			iLocal_61[5] = unk_0x61C05BF08A1E0EFE(joaat("hexer"), 868.5937f, 3633.523f, 31.9622f, 267.0991f, true, true, false);
			unk_0x2CA123B0622F495C(joaat("hexer"));
			unk_0xED42A643E1ABE6F4(iLocal_61[2], 3);
			unk_0xED42A643E1ABE6F4(iLocal_61[4], 3);
			iLocal_55 = unk_0x105601648511CC64() + 1500;
		}
		if ((unk_0xD6513D668481290A(joaat("g_m_y_lost_01")) && unk_0xD6513D668481290A(joaat("g_m_y_lost_02"))) && unk_0x144E80F5C46A6B75("RE_COUNTRYSIDE_GANG_FIGHT_SCENE"))
		{
			iLocal_59[2] = unk_0xFD8987C090669BD5(iLocal_61[2], 22, joaat("g_m_y_lost_01"), -1, 1, true);
			iLocal_59[3] = unk_0xFD8987C090669BD5(iLocal_61[3], 22, joaat("g_m_y_lost_02"), -1, 1, true);
			iLocal_59[4] = unk_0xFD8987C090669BD5(iLocal_61[4], 22, joaat("g_m_y_lost_01"), -1, 1, true);
			iLocal_59[5] = unk_0xFD8987C090669BD5(iLocal_61[5], 22, joaat("g_m_y_lost_02"), -1, 1, true);
			func_57(&uLocal_63, 4, iLocal_59[4], "RECGFLost3", 0, 1);
			iLocal_55 = unk_0x105601648511CC64() + 1500;
			iVar0 = 0;
			while (iVar0 < iLocal_59)
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_59[iVar0]) && !unk_0x1D403DFADBC2DE3C(iLocal_61[iVar0], 0))
				{
					unk_0x55662F9F262C2F9B(iLocal_61[iVar0], "RE_COUNTRYSIDE_GANG_BIKES", 0);
					unk_0xC8FD3EBBB90E8D7F(iLocal_59[iVar0], 137, true);
					unk_0x7D314AB19CA29C96(iLocal_59[iVar0], 0);
					unk_0x54480313BB3E8DD0(iLocal_59[iVar0], 2);
					unk_0x91629AC1E1F78419(iLocal_59[iVar0], 50, true);
					unk_0xE20EB9C9BC14ECEB(iLocal_59[iVar0], 2);
					unk_0x9C74359FED150B42(iLocal_59[iVar0], 50f, 20);
					unk_0x80F51E5792576467(iLocal_59[iVar0], 1);
					unk_0xFC3C88E2313FA926(iLocal_59[iVar0], 13);
					unk_0x5AAB329BBC1053A1(iLocal_59[iVar0], 100f);
					unk_0x6CCBC1B22488DC0C(iLocal_59[iVar0], 100f);
					unk_0x4106FAF8AA1D69D5(iLocal_59[iVar0], iLocal_228);
					unk_0x2E35C4FA5F0ED22F(iLocal_59[iVar0], true);
					unk_0x8A8475988CA32D80(iLocal_59[iVar0], 3);
					unk_0xC3D5C68D28907D90(iLocal_59[iVar0], 0);
					unk_0xB105531EDD3DE51B(iLocal_59[iVar0], true);
					unk_0xE43AD8CB1B4DDED9(iLocal_59[iVar0], 1, 1000f);
					if (iVar0 > 1 && iVar0 < 5)
					{
						unk_0x7A535CE1F001F3FE(iLocal_59[iVar0], joaat("weapon_pistol"), -1, true, true);
					}
					else
					{
						unk_0x7A535CE1F001F3FE(iLocal_59[iVar0], joaat("weapon_sawnoffshotgun"), -1, true, true);
					}
					unk_0xC5A6DFE2B8987B17(&iLocal_62);
					unk_0x509F549022512095(0, iLocal_61[2], 966.7098f, 3633.926f, 31.3974f, 10f, 0, joaat("hexer"), 786725, 4f, 100f);
					unk_0x4BED3C9D6EF14C38(0, vLocal_48, 5000, 0, 2);
					unk_0x535008C596714F9E(iLocal_62);
					unk_0xA8E6405305C0D7DF(iLocal_59[2], iLocal_62);
					unk_0x02DAF06EA4F08219(&iLocal_62);
					unk_0xC5A6DFE2B8987B17(&iLocal_62);
					unk_0x509F549022512095(0, iLocal_61[3], 970.6208f, 3636.743f, 31.3666f, 10f, 0, joaat("hexer"), 786725, 4f, 100f);
					unk_0x4BED3C9D6EF14C38(0, vLocal_48, 5000, 0, 2);
					unk_0x535008C596714F9E(iLocal_62);
					unk_0xA8E6405305C0D7DF(iLocal_59[3], iLocal_62);
					unk_0x02DAF06EA4F08219(&iLocal_62);
					unk_0x22321800954A532E(iLocal_59[3], true);
					unk_0xC5A6DFE2B8987B17(&iLocal_62);
					unk_0x509F549022512095(0, iLocal_61[4], 971.023f, 3631.225f, 31.3807f, 10f, 0, joaat("hexer"), 786725, 4f, 100f);
					unk_0x4BED3C9D6EF14C38(0, vLocal_48, 5000, 0, 2);
					unk_0x535008C596714F9E(iLocal_62);
					unk_0xA8E6405305C0D7DF(iLocal_59[4], iLocal_62);
					unk_0x02DAF06EA4F08219(&iLocal_62);
					unk_0xC5A6DFE2B8987B17(&iLocal_62);
					unk_0x509F549022512095(0, iLocal_61[5], 974.8073f, 3633.771f, 31.3818f, 10f, 0, joaat("hexer"), 786725, 4f, 100f);
					unk_0x4BED3C9D6EF14C38(0, vLocal_48, 5000, 0, 2);
					unk_0x535008C596714F9E(iLocal_62);
					unk_0xA8E6405305C0D7DF(iLocal_59[5], iLocal_62);
					unk_0x02DAF06EA4F08219(&iLocal_62);
				}
				iVar0++;
			}
			unk_0x2CA123B0622F495C(joaat("hexer"));
			unk_0x2CA123B0622F495C(joaat("g_m_y_lost_01"));
			unk_0x2CA123B0622F495C(joaat("g_m_y_lost_02"));
			return 1;
		}
	}
	return 0;
}

void func_57(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x3650
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

void func_58()//Position - 0x36EB
{
	if (!unk_0x36CEFBE9B745A58D(iLocal_58))
	{
		unk_0x5558ED6D4A2DEC93(iLocal_58, unk_0xBC25C936A095B5BA(), 200f, -1, 0, 0);
		unk_0x22321800954A532E(iLocal_58, true);
		if (!unk_0x1D403DFADBC2DE3C(iLocal_59[0], 0) && !unk_0x1D403DFADBC2DE3C(iLocal_59[1], 0))
		{
			unk_0x65E471E4A2D56226(iLocal_58, 101, 0);
			unk_0xF82197F205B9D8FD(iLocal_58, false);
			unk_0x3D3F19B39A42CF7A(iLocal_59[0], iLocal_58, 1000, 0);
			unk_0x3D3F19B39A42CF7A(iLocal_59[1], iLocal_58, 1000, 0);
		}
		else
		{
			func_4();
			func_40(0);
			if (!unk_0x36CEFBE9B745A58D(iLocal_58))
			{
				func_59(iLocal_58, "GENERIC_FRIGHTENED_HIGH", 24);
			}
		}
		func_40(1000);
		func_63();
	}
}

void func_59(int iParam0, char* sParam1, int iParam2)//Position - 0x378F
{
	unk_0x53D8178763EDCE60(iParam0, sParam1, func_60(iParam2), 1);
}

int func_60(int iParam0)//Position - 0x37A6
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

void func_61()//Position - 0x399B
{
	int iVar0;
	
	switch (iLocal_46)
	{
		case 0:
			if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_58, 45f, 45f, 20f, 0, 1, 0))
			{
				if (!func_8())
				{
					if (func_48() == 0)
					{
						func_41(&uLocal_63, "RECGFAU", "RECGF_COMM", 4, 0, 0, 0);
					}
					else if (func_48() == 1)
					{
						func_41(&uLocal_63, "RECGFAU", "RECGF_COMF", 4, 0, 0, 0);
					}
					else if (func_48() == 2)
					{
						func_41(&uLocal_63, "RECGFAU", "RECGF_COMT", 4, 0, 0, 0);
					}
					iLocal_46++;
				}
			}
			break;
		
		case 1:
			if (!unk_0x36CEFBE9B745A58D(iLocal_58))
			{
				if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_58, 40f, 40f, 20f, 0, 1, 0))
				{
					if (func_41(&uLocal_63, "RECGFAU", "RECGF_HELP", 4, 0, 0, 0))
					{
						iLocal_46++;
					}
				}
			}
			break;
		
		case 2:
			if (!func_8())
			{
				func_41(&uLocal_63, "RECGFAU", "RECGF_SHUTUP", 4, 0, 0, 0);
				SYSTEM::SETTIMERA(0);
				iLocal_46++;
			}
			break;
		
		case 3:
			if ((!unk_0x36CEFBE9B745A58D(iLocal_58) && !unk_0x36CEFBE9B745A58D(iLocal_59[0])) && !unk_0x36CEFBE9B745A58D(iLocal_59[1]))
			{
				if ((SYSTEM::TIMERA() > 5000 && !iLocal_52) && !func_8())
				{
					func_41(&uLocal_63, "RECGFAU", "RECGF_PAYUP", 4, 0, 0, 0);
					iLocal_52 = 1;
				}
				if (SYSTEM::TIMERA() < 28000)
				{
					if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_58, 12f, 12f, 2.5f, 0, 1, 0))
					{
						if (((unk_0x1028B6250119A74B(iLocal_59[0], unk_0xBC25C936A095B5BA()) || unk_0x1028B6250119A74B(iLocal_59[1], unk_0xBC25C936A095B5BA())) || unk_0x5CEC84BB4AC55121(iLocal_59[0], unk_0xBC25C936A095B5BA())) || unk_0x5CEC84BB4AC55121(iLocal_59[1], unk_0xBC25C936A095B5BA()))
						{
							unk_0x56F2E1B5599188FA(iLocal_59[0], unk_0xBC25C936A095B5BA(), 4000, 2056, 4);
							unk_0x56F2E1B5599188FA(iLocal_59[1], unk_0xBC25C936A095B5BA(), 4000, 2056, 4);
							if (!iLocal_53)
							{
								func_4();
								func_40(0);
								if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
								{
									func_41(&uLocal_63, "RECGFAU", "RECGF_GETLOS", 4, 0, 0, 0);
								}
								else
								{
									func_41(&uLocal_63, "RECGFAU", "RECGF_BEGONE", 4, 0, 0, 0);
								}
								iLocal_53 = 1;
							}
						}
					}
					else if (!unk_0x96044E39418AAF17(iLocal_59[0], "random@countryside_gang_fight", "biker_02_stickup_loop", 3))
					{
						if (!unk_0xC5B8A5F778E321DD(iLocal_59[0], iLocal_58, 10f))
						{
							unk_0x57D65255D3D3B6A7(iLocal_59[0], iLocal_58, -1, 0);
						}
					}
				}
				else if (!unk_0x1D403DFADBC2DE3C(iLocal_61[0], 0) && !unk_0x1D403DFADBC2DE3C(iLocal_61[1], 0))
				{
					func_4();
					func_40(0);
					func_41(&uLocal_63, "RECGFAU", "RECGF_SHOOT", 4, 0, 0, 0);
					func_40(2000);
					func_58();
				}
			}
			break;
		
		case 4:
			iVar0 = 0;
			while (iVar0 < iLocal_59)
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_59[iVar0]))
				{
					unk_0x2E9860A2B72187F5(iLocal_59[iVar0], 156, true);
					unk_0xB8CBD998685C0685(iLocal_59[iVar0], unk_0xBC25C936A095B5BA(), 0, 16);
					unk_0x22321800954A532E(iLocal_59[iVar0], true);
				}
				iVar0++;
			}
			if (!unk_0x36CEFBE9B745A58D(iLocal_58))
			{
				unk_0xEE7131C3C73E7282(iLocal_58, -1);
			}
			iLocal_46++;
			break;
		
		case 5:
			iVar0 = 0;
			while (iVar0 < iLocal_59)
			{
				if (unk_0x36CEFBE9B745A58D(iLocal_59[iVar0]))
				{
					if (unk_0x2DA8CA50A72528FB(iLocal_57[iVar0]))
					{
						unk_0x07B8ECB35A4ED3AC(&(iLocal_57[iVar0]));
						func_3(&uLocal_63, 2);
						func_3(&uLocal_63, 3);
					}
				}
				iVar0++;
			}
			if (unk_0x36CEFBE9B745A58D(iLocal_59[0]) && unk_0x36CEFBE9B745A58D(iLocal_59[1]))
			{
				iLocal_46 = 0;
				iLocal_45 = 1;
			}
			break;
	}
}

void func_62()//Position - 0x3D48
{
	if (!unk_0x33CC9445B2DF9387(916.4631f, 3601.261f, 31.9327f, 3f))
	{
		if (!unk_0x1D403DFADBC2DE3C(unk_0x3E12B546F3F2597A(), 0))
		{
			if (unk_0x4DBCE270B354E123(unk_0x3E12B546F3F2597A(), 916.4631f, 3601.261f, 31.9327f, 2f, 2f, 2f, false, true, 0))
			{
				unk_0x641B19E156645A92(unk_0x3E12B546F3F2597A(), 915.6531f, 3595.061f, 32.0774f, 1, false, 0, 1);
			}
		}
	}
}

void func_63()//Position - 0x3DB0
{
	iLocal_45 = 3;
}

int func_64(int iParam0)//Position - 0x3DBB
{
	if (func_68())
	{
		Global_19AFA = 1;
		Global_19AF7 = unk_0x105601648511CC64();
		if (func_23(Global_19AF9))
		{
			func_65(0);
		}
		unk_0x3FF92BBF0607A406(1, "RE_TITLE");
		if (iParam0 && func_23(Global_19AF9))
		{
			unk_0x621CEDEDDD531386();
		}
		return 1;
	}
	return 0;
}

void func_65(int iParam0)//Position - 0x3E0E
{
	switch (iParam0)
	{
		case 0:
			if (Global_19B04.f_6186.f_2 < 3)
			{
				if (!unk_0x5107E30005FCFEA8())
				{
					func_66(func_67(iParam0), -1);
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
					func_66(func_67(iParam0), -1);
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
					func_66(func_67(iParam0), -1);
					Global_19B04.f_6186.f_4++;
					unk_0xF0059F27F7BB6680(&Global_19B00, 2);
				}
			}
			break;
	}
}

void func_66(char* sParam0, int iParam1)//Position - 0x3EEF
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, true, iParam1);
}

char* func_67(int iParam0)//Position - 0x3F06
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

int func_68()//Position - 0x3F4A
{
	switch (func_69(&Global_62F8, 0, 5, 0, unk_0x8A55B15F4133C912()))
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

int func_69(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x3F80
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
		if (func_73(0))
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
		if (!func_71(iParam2))
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
			func_70(uParam0, iParam4);
		}
	}
	return 2;
}

void func_70(var uParam0, int iParam1)//Position - 0x40BA
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

bool func_71(int iParam0)//Position - 0x4109
{
	return func_72(iParam0, Global_8C41);
}

int func_72(int iParam0, int iParam1)//Position - 0x411A
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

int func_73(int iParam0)//Position - 0x42FB
{
	if (Global_8C41 == 15)
	{
		return 0;
	}
	if (func_71(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_74(int iParam0, bool bParam1, int iParam2)//Position - 0x431D
{
	int iVar0;
	
	iVar0 = func_75(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x2DA8CA50A72528FB(iVar0)) && unk_0x0F6F4C227FB5DD52(&(Global_19B04.f_6D75[iParam2 /*29*/].f_3)))
	{
		unk_0x436D0272182E484D(iVar0, &(Global_19B04.f_6D75[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_75(int iParam0, bool bParam1, bool bParam2)//Position - 0x436F
{
	int iVar0;
	
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x511FE22BCF5353CD(iParam0);
	if (unk_0xD27AC0E9B78CFDD7(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(iVar0, func_76(unk_0x7AF0088ABFA713B6(), 1f, 1f));
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
		unk_0x3F5F1772D71D5EC4(iVar0, func_76(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
		unk_0xF9C2945DB5BAB4BF(iVar0, bParam1);
	}
	else if (unk_0xB12D030810E8447D(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(iVar0, func_76(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_76(bool bParam0, float fParam1, float fParam2)//Position - 0x4413
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_77()//Position - 0x442A
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!bLocal_51)
	{
		unk_0xA902E18EDF6FA0C8(255, iLocal_228, 1862763509);
		if (!unk_0x1D403DFADBC2DE3C(iLocal_59[0], 0) && !unk_0x1D403DFADBC2DE3C(iLocal_59[1], 0))
		{
			if (unk_0xD9C1758D86688CEA(iLocal_59[0], unk_0xBC25C936A095B5BA(), 1) || unk_0xD9C1758D86688CEA(iLocal_59[1], unk_0xBC25C936A095B5BA(), 1))
			{
				func_4();
				return 1;
			}
			if (!unk_0x1D403DFADBC2DE3C(unk_0x3E12B546F3F2597A(), 0))
			{
				if (unk_0xD9C1758D86688CEA(iLocal_59[0], unk_0x3E12B546F3F2597A(), 1) || unk_0xD9C1758D86688CEA(iLocal_59[1], unk_0x3E12B546F3F2597A(), 1))
				{
					func_4();
					return 1;
				}
			}
		}
		if (!unk_0x1D403DFADBC2DE3C(iLocal_61[0], 0) && !unk_0x1D403DFADBC2DE3C(iLocal_61[1], 0))
		{
			if (((unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_61[0], 0) || unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_61[1], 0)) || unk_0xD9C1758D86688CEA(iLocal_61[0], unk_0xBC25C936A095B5BA(), 1)) || unk_0xD9C1758D86688CEA(iLocal_61[1], unk_0xBC25C936A095B5BA(), 1))
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_59[0]) && !unk_0x36CEFBE9B745A58D(iLocal_59[1]))
				{
					if (func_93())
					{
						func_4();
						func_40(0);
						func_41(&uLocal_63, "RECGFAU", "RECGF_BIKES", 4, 0, 0, 0);
					}
					return 1;
				}
			}
		}
		if (unk_0x36CEFBE9B745A58D(iLocal_59[0]) || unk_0x36CEFBE9B745A58D(iLocal_59[1]))
		{
			func_4();
			return 1;
		}
		vVar0 = { 15f, 15f, 15f };
		vVar1 = { -15f, -15f, -15f };
		if (!unk_0x36CEFBE9B745A58D(iLocal_59[0]))
		{
			if (unk_0x04880508C862E589(unk_0x823166D9421223CA(iLocal_59[0], 31086, 0f, 0f, 0f), 5f, 1))
			{
				func_4();
				return 1;
			}
			vVar0 = { vVar0 + unk_0x823166D9421223CA(iLocal_59[0], 31086, 0f, 0f, 0f) };
			vVar1 = { vVar1 + unk_0x823166D9421223CA(iLocal_59[0], 31086, 0f, 0f, 0f) };
			if (((unk_0x1749F74D4E70A733(vVar1, vVar0, joaat("weapon_smokegrenade"), 1) || unk_0x1749F74D4E70A733(vVar1, vVar0, joaat("weapon_grenade"), 1)) || unk_0x1749F74D4E70A733(vVar1, vVar0, joaat("weapon_grenadelauncher"), 1)) || unk_0x1749F74D4E70A733(vVar1, vVar0, joaat("weapon_stickybomb"), 1))
			{
				func_4();
				return 1;
			}
			if (unk_0xD9ED1893F2541636(unk_0x823166D9421223CA(iLocal_59[0], 31086, 0f, 0f, 0f), 3f))
			{
				func_4();
				return 1;
			}
		}
		if (unk_0x11F754EAEA6336BA(unk_0xBC25C936A095B5BA(), (973.053f - 30f), (3616.738f - 30f), (32.6181f - 30f), (973.053f + 30f), (3616.738f + 30f), (32.6181f + 30f), 0, 1))
		{
			func_4();
			return 1;
		}
		if ((!unk_0x36CEFBE9B745A58D(iLocal_58) && !unk_0x36CEFBE9B745A58D(iLocal_59[0])) && !unk_0x36CEFBE9B745A58D(iLocal_59[1]))
		{
			if (iLocal_47 != -1)
			{
				if (((unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), iLocal_59[0]) || unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), iLocal_59[1])) || unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), iLocal_59[0])) || unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), iLocal_59[1]))
				{
					func_4();
					return 1;
				}
			}
			if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_58, 12f, 12f, 2.5f, 0, 1, 0))
			{
				if (((unk_0x1028B6250119A74B(iLocal_59[0], unk_0xBC25C936A095B5BA()) || unk_0x1028B6250119A74B(iLocal_59[1], unk_0xBC25C936A095B5BA())) || unk_0x5CEC84BB4AC55121(iLocal_59[0], unk_0xBC25C936A095B5BA())) || unk_0x5CEC84BB4AC55121(iLocal_59[1], unk_0xBC25C936A095B5BA()))
				{
					if (!iLocal_50)
					{
						unk_0x57D65255D3D3B6A7(iLocal_59[0], unk_0xBC25C936A095B5BA(), -1, 0);
						iLocal_50 = 1;
					}
					if (unk_0x2DA8CA50A72528FB(iLocal_56))
					{
						unk_0x222805B89367761E(iLocal_56, true);
					}
					if (unk_0x2DA8CA50A72528FB(iLocal_57[0]))
					{
						unk_0x222805B89367761E(iLocal_57[0], true);
					}
					if (unk_0x2DA8CA50A72528FB(iLocal_57[1]))
					{
						unk_0x222805B89367761E(iLocal_57[1], true);
					}
					if ((!func_8() || func_6("RECGF_SHUTUP")) || func_6("RECGF_PAYUP"))
					{
						if (iLocal_47 == -1)
						{
							iLocal_47 = unk_0x105601648511CC64();
							if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
							{
								func_4();
								func_40(0);
								func_41(&uLocal_63, "RECGFAU", "RECGF_REPEAT", 4, 0, 0, 0);
							}
							else
							{
								func_4();
								func_40(0);
								func_41(&uLocal_63, "RECGFAU", "RECGF_REPEAT", 4, 0, 0, 0);
							}
						}
					}
				}
			}
			else
			{
				iLocal_50 = 0;
				iLocal_47 = -1;
			}
			if (iLocal_47 != -1 && unk_0x105601648511CC64() > iLocal_47 + 10000)
			{
				func_4();
				func_40(0);
				func_41(&uLocal_63, "RECGFAU", "RECGF_WARNED", 4, 0, 0, 0);
				return 1;
			}
			if (!unk_0xD9C1758D86688CEA(iLocal_59[0], unk_0xBC25C936A095B5BA(), 1) && !unk_0xD9C1758D86688CEA(iLocal_59[1], unk_0xBC25C936A095B5BA(), 1))
			{
				if (unk_0xD9C1758D86688CEA(iLocal_58, unk_0xBC25C936A095B5BA(), 1))
				{
					if (func_93())
					{
						func_4();
						func_40(0);
						func_41(&uLocal_63, "RECGFAU", "RECGF_DEALER", 4, 0, 0, 0);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_78()//Position - 0x4941
{
	if (unk_0xE59B7F5A03335350(iLocal_60, 0))
	{
		if ((!unk_0x4DBCE270B354E123(iLocal_60, 915.7905f, 3603.449f, 31.9111f, 5f, 5f, 5f, false, true, 0) && !unk_0x62F3A07C43FFB568(iLocal_58, iLocal_60, 0)) || unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_60, 1))
		{
			func_58();
		}
	}
	else
	{
		func_58();
	}
}

int func_79()//Position - 0x499D
{
	int iVar0;
	
	if (((((!unk_0x724D816EA203A79E(iLocal_58) && !unk_0x724D816EA203A79E(iLocal_59[0])) && !unk_0x724D816EA203A79E(iLocal_59[1])) && !unk_0x724D816EA203A79E(iLocal_60)) && !unk_0x724D816EA203A79E(iLocal_61[0])) && !unk_0x724D816EA203A79E(iLocal_61[1]))
	{
		unk_0xF243B7A14FCFD0F4(joaat("a_m_m_skidrow_01"));
		unk_0xF243B7A14FCFD0F4(joaat("g_m_y_lost_01"));
		unk_0xF243B7A14FCFD0F4(joaat("g_m_y_lost_02"));
		unk_0xF243B7A14FCFD0F4(joaat("picador"));
		unk_0xF243B7A14FCFD0F4(joaat("hexer"));
		unk_0x522053D86D6E1C7A("random@countryside_gang_fight");
		unk_0x522053D86D6E1C7A("veh@drivebystd_ds_grenades");
		unk_0xF632E62AC7874CD3("move_m@gangster@var_i");
		if (((((((unk_0xD6513D668481290A(joaat("a_m_m_skidrow_01")) && unk_0xD6513D668481290A(joaat("g_m_y_lost_01"))) && unk_0xD6513D668481290A(joaat("g_m_y_lost_02"))) && unk_0xD6513D668481290A(joaat("picador"))) && unk_0xD6513D668481290A(joaat("hexer"))) && unk_0xF9E082857622D91E("random@countryside_gang_fight")) && unk_0xF9E082857622D91E("veh@drivebystd_ds_grenades")) && unk_0x3114757F155123AF("move_m@gangster@var_i"))
		{
			unk_0x8510BC031C24B862(joaat("picador"), true);
			unk_0x8510BC031C24B862(joaat("hexer"), true);
			unk_0xA7FBEF44EF04D534(417.901f, 3578.002f, 31.176f, 1305.897f, 3604.306f, 40.1064f, 100.0625f, 0, false, 1);
			unk_0x1DAA351326EA3537(vLocal_48 - Vector(20f, 50f, 80f), vLocal_48 + Vector(20f, 50f, 70f), 0, 1, 1, 1);
			unk_0xE85B33FB221A23CD(3, false);
			unk_0xE85B33FB221A23CD(5, false);
			unk_0xB2CB6EAA6B280A84("rghLost", &iLocal_228);
			unk_0xA902E18EDF6FA0C8(5, iLocal_228, 1862763509);
			iLocal_58 = unk_0x01B3635C3E8EDD81(26, joaat("a_m_m_skidrow_01"), 973.053f, 3616.738f, 31.6181f, 110.2753f, 1, true);
			unk_0xB0031DDAE4FF0BC3(iLocal_58, 0, 0, 1, 0);
			unk_0xB0031DDAE4FF0BC3(iLocal_58, 2, 1, 0, 0);
			unk_0xB0031DDAE4FF0BC3(iLocal_58, 3, 1, 2, 0);
			unk_0xB0031DDAE4FF0BC3(iLocal_58, 4, 0, 0, 0);
			unk_0x2CA123B0622F495C(joaat("a_m_m_skidrow_01"));
			unk_0x2E35C4FA5F0ED22F(iLocal_58, true);
			unk_0x91629AC1E1F78419(iLocal_58, 17, true);
			unk_0xB105531EDD3DE51B(iLocal_58, false);
			unk_0xF82197F205B9D8FD(iLocal_58, true);
			unk_0xC8FD3EBBB90E8D7F(iLocal_58, 185, true);
			unk_0x16DCE907D1FFE3CC(iLocal_58, 16);
			unk_0x36C3B58DA78A2679(iLocal_58, "A_M_M_TRAMP_01_BLACK_MINI_01");
			func_57(&uLocal_63, 1, iLocal_58, "RECGFDealer", 0, 1);
			unk_0x0DEF5E53360637F2(iLocal_58, 1);
			unk_0xE896C0AD02364F2A(iLocal_58, "random@countryside_gang_fight", "gangmember_stickup_loop", 1000f, -2f, -1, 1, 0, 0, 0, 0);
			unk_0x43B967881C60631D(iLocal_58, "move_m@gangster@var_i", 1048576000);
			iLocal_60 = unk_0x61C05BF08A1E0EFE(joaat("picador"), 915.7905f, 3603.449f, 31.9111f, 111.9593f, true, true, false);
			unk_0x914C5DE0B15B8B59(iLocal_60, 37, 0);
			unk_0x4C59702AC1076A88(iLocal_60, 4, 0);
			unk_0x09F6B51861E304AB(iLocal_60, 1);
			unk_0xEA0AB6C644C58C1D(iLocal_60, "WDU 696");
			iLocal_59[0] = unk_0x01B3635C3E8EDD81(22, joaat("g_m_y_lost_01"), 970.2217f, 3614.821f, 31.6909f, 297.4345f, 1, true);
			func_57(&uLocal_63, 3, iLocal_59[0], "RECGFLost2", 0, 1);
			iLocal_59[1] = unk_0x01B3635C3E8EDD81(22, joaat("g_m_y_lost_02"), 971.504f, 3618.054f, 31.5565f, 216.9967f, 1, true);
			func_57(&uLocal_63, 2, iLocal_59[1], "RECGFLost1", 0, 1);
			unk_0x2CA123B0622F495C(joaat("g_m_y_lost_01"));
			unk_0x2CA123B0622F495C(joaat("g_m_y_lost_02"));
			iLocal_61[0] = unk_0x61C05BF08A1E0EFE(joaat("hexer"), 968.2626f, 3611.717f, 31.7874f, 296.8978f, true, true, false);
			iLocal_61[1] = unk_0x61C05BF08A1E0EFE(joaat("hexer"), 970.8362f, 3625.563f, 31.3415f, 212.3456f, true, true, false);
			unk_0x2CA123B0622F495C(joaat("hexer"));
			unk_0xE896C0AD02364F2A(iLocal_59[0], "random@countryside_gang_fight", "biker_02_stickup_loop", 1000f, -2f, -1, 1, 0, 0, 0, 0);
			unk_0xE896C0AD02364F2A(iLocal_59[1], "random@countryside_gang_fight", "biker_01_stickup_loop", 1000f, -2f, -1, 1, 0, 0, 0, 0);
			iVar0 = 0;
			while (iVar0 < iLocal_59)
			{
				if (iVar0 < 2)
				{
					unk_0x7D314AB19CA29C96(iLocal_59[iVar0], 0);
					unk_0x4106FAF8AA1D69D5(iLocal_59[iVar0], iLocal_228);
					unk_0x54480313BB3E8DD0(iLocal_59[iVar0], 2);
					unk_0x91629AC1E1F78419(iLocal_59[iVar0], 50, true);
					unk_0x80F51E5792576467(iLocal_59[iVar0], 0);
					unk_0x7A535CE1F001F3FE(iLocal_59[0], joaat("weapon_pistol"), -1, true, true);
					unk_0x7A535CE1F001F3FE(iLocal_59[1], joaat("weapon_sawnoffshotgun"), -1, true, true);
					unk_0x22321800954A532E(iLocal_59[iVar0], true);
					unk_0x2E35C4FA5F0ED22F(iLocal_59[iVar0], true);
					unk_0xB71D41C0310C93DE(iLocal_59[iVar0], true, 1);
				}
				iVar0++;
			}
			iLocal_55 = unk_0x105601648511CC64() + 1500;
			if (func_48() == 0)
			{
				func_57(&uLocal_63, 0, unk_0xBC25C936A095B5BA(), "MICHAEL", 0, 1);
			}
			else if (func_48() == 1)
			{
				func_57(&uLocal_63, 0, unk_0xBC25C936A095B5BA(), "FRANKLIN", 0, 1);
			}
			else if (func_48() == 2)
			{
				func_57(&uLocal_63, 0, unk_0xBC25C936A095B5BA(), "TREVOR", 0, 1);
			}
			return 1;
		}
	}
	return 0;
}

int func_80()//Position - 0x4E58
{
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), vLocal_43) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(unk_0xB5D9AE572C19509E(unk_0xBC25C936A095B5BA())) > 1369f && !func_91())
		{
			return 0;
		}
	}
	if (func_87())
	{
		return 1;
	}
	if (func_81(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_81(float fParam0, bool bParam1)//Position - 0x4EDE
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
		if (func_31(func_48()))
		{
			iVar5 = func_28();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (unk_0xFA30DFD0084E92FE(Global_19B04.f_4871[iVar1 /*6*/], 2) && !unk_0xFA30DFD0084E92FE(Global_19B04.f_4871[iVar1 /*6*/], 3))
				{
					func_82(iVar1, &Var0);
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

void func_82(int iParam0, var uParam1)//Position - 0x4F95
{
	switch (iParam0)
	{
		case 0:
			func_83(uParam1, "Abigail1", func_85(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_84(iParam0), 1, 0);
			break;
		
		case 1:
			func_83(uParam1, "Abigail2", func_85(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_84(iParam0), 1, 0);
			break;
		
		case 2:
			func_83(uParam1, "Barry1", func_85(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_84(iParam0), 1, 0);
			break;
		
		case 3:
			func_83(uParam1, "Barry2", func_85(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_84(iParam0), 1, 1);
			break;
		
		case 4:
			func_83(uParam1, "Barry3", func_85(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_84(iParam0), 0, 0);
			break;
		
		case 5:
			func_83(uParam1, "Barry3A", func_85(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 6:
			func_83(uParam1, "Barry3C", func_85(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 7:
			func_83(uParam1, "Barry4", func_85(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_84(iParam0), 0, 0);
			break;
		
		case 8:
			func_83(uParam1, "Dreyfuss1", func_85(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_84(iParam0), 0, 0);
			break;
		
		case 9:
			func_83(uParam1, "Epsilon1", func_85(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_84(iParam0), 0, 0);
			break;
		
		case 10:
			func_83(uParam1, "Epsilon2", func_85(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_84(iParam0), 1, 0);
			break;
		
		case 11:
			func_83(uParam1, "Epsilon3", func_85(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_84(iParam0), 0, 0);
			break;
		
		case 12:
			func_83(uParam1, "Epsilon4", func_85(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_84(iParam0), 0, 0);
			break;
		
		case 13:
			func_83(uParam1, "Epsilon5", func_85(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_84(iParam0), 1, 0);
			break;
		
		case 14:
			func_83(uParam1, "Epsilon6", func_85(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 15:
			func_83(uParam1, "Epsilon7", func_85(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_84(iParam0), 0, 0);
			break;
		
		case 16:
			func_83(uParam1, "Epsilon8", func_85(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_84(iParam0), 1, 0);
			break;
		
		case 17:
			func_83(uParam1, "Extreme1", func_85(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 18:
			func_83(uParam1, "Extreme2", func_85(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 19:
			func_83(uParam1, "Extreme3", func_85(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 20:
			func_83(uParam1, "Extreme4", func_85(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_84(iParam0), 0, 0);
			break;
		
		case 21:
			func_83(uParam1, "Fanatic1", func_85(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_84(iParam0), 1, 0);
			break;
		
		case 22:
			func_83(uParam1, "Fanatic2", func_85(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_84(iParam0), 1, 0);
			break;
		
		case 23:
			func_83(uParam1, "Fanatic3", func_85(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_84(iParam0), 0, 1);
			break;
		
		case 24:
			func_83(uParam1, "Hao1", func_85(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_84(iParam0), 0, 1);
			break;
		
		case 25:
			func_83(uParam1, "Hunting1", func_85(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 26:
			func_83(uParam1, "Hunting2", func_85(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 27:
			func_83(uParam1, "Josh1", func_85(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_84(iParam0), 1, 0);
			break;
		
		case 28:
			func_83(uParam1, "Josh2", func_85(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_84(iParam0), 1, 1);
			break;
		
		case 29:
			func_83(uParam1, "Josh3", func_85(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_84(iParam0), 1, 1);
			break;
		
		case 30:
			func_83(uParam1, "Josh4", func_85(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_84(iParam0), 1, 0);
			break;
		
		case 31:
			func_83(uParam1, "Maude1", func_85(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 32:
			func_83(uParam1, "Minute1", func_85(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 33:
			func_83(uParam1, "Minute2", func_85(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 34:
			func_83(uParam1, "Minute3", func_85(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 35:
			func_83(uParam1, "MrsPhilips1", func_85(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_84(iParam0), 0, 0);
			break;
		
		case 36:
			func_83(uParam1, "MrsPhilips2", func_85(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_84(iParam0), 0, 0);
			break;
		
		case 37:
			func_83(uParam1, "Nigel1", func_85(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_84(iParam0), 1, 0);
			break;
		
		case 38:
			func_83(uParam1, "Nigel1A", func_85(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_84(iParam0), 1, 1);
			break;
		
		case 39:
			func_83(uParam1, "Nigel1B", func_85(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_84(iParam0), 1, 1);
			break;
		
		case 40:
			func_83(uParam1, "Nigel1C", func_85(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_84(iParam0), 1, 1);
			break;
		
		case 41:
			func_83(uParam1, "Nigel1D", func_85(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_84(iParam0), 1, 1);
			break;
		
		case 42:
			func_83(uParam1, "Nigel2", func_85(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_84(iParam0), 1, 1);
			break;
		
		case 43:
			func_83(uParam1, "Nigel3", func_85(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_84(iParam0), 1, 1);
			break;
		
		case 44:
			func_83(uParam1, "Omega1", func_85(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_84(iParam0), 0, 0);
			break;
		
		case 45:
			func_83(uParam1, "Omega2", func_85(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_84(iParam0), 0, 0);
			break;
		
		case 46:
			func_83(uParam1, "Paparazzo1", func_85(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 47:
			func_83(uParam1, "Paparazzo2", func_85(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 48:
			func_83(uParam1, "Paparazzo3", func_85(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_84(iParam0), 0, 0);
			break;
		
		case 49:
			func_83(uParam1, "Paparazzo3A", func_85(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 50:
			func_83(uParam1, "Paparazzo3B", func_85(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 51:
			func_83(uParam1, "Paparazzo4", func_85(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_84(iParam0), 0, 0);
			break;
		
		case 52:
			func_83(uParam1, "Rampage1", func_85(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_84(iParam0), 0, 0);
			break;
		
		case 54:
			func_83(uParam1, "Rampage3", func_85(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_84(iParam0), 1, 0);
			break;
		
		case 55:
			func_83(uParam1, "Rampage4", func_85(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_84(iParam0), 1, 0);
			break;
		
		case 56:
			func_83(uParam1, "Rampage5", func_85(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_84(iParam0), 0, 0);
			break;
		
		case 53:
			func_83(uParam1, "Rampage2", func_85(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_84(iParam0), 1, 0);
			break;
		
		case 57:
			func_83(uParam1, "TheLastOne", func_85(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 58:
			func_83(uParam1, "Tonya1", func_85(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 59:
			func_83(uParam1, "Tonya2", func_85(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 60:
			func_83(uParam1, "Tonya3", func_85(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 61:
			func_83(uParam1, "Tonya4", func_85(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 62:
			func_83(uParam1, "Tonya5", func_85(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_83(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0x61DC
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

int func_84(int iParam0)//Position - 0x626D
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

struct<2> func_85(int iParam0)//Position - 0x65B3
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_86(iParam0) };
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

struct<2> func_86(int iParam0)//Position - 0x65EB
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

int func_87()//Position - 0x6A38
{
	if (func_90() && !func_91())
	{
		return 1;
	}
	if (func_89() && func_88())
	{
		return 1;
	}
	return 0;
}

bool func_88()//Position - 0x6A6A
{
	return Global_199EA > 0;
}

int func_89()//Position - 0x6A78
{
	if (Global_15FA6 != -1)
	{
		return 1;
	}
	return 0;
}

int func_90()//Position - 0x6A8D
{
	if (Global_15FA6 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_147B0[Global_15FA6 /*34*/].f_F, 20);
	}
	return 0;
}

int func_91()//Position - 0x6AB3
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

int func_92()//Position - 0x6AD0
{
	if (!func_71(5))
	{
		return 1;
	}
	if (func_87())
	{
		return 1;
	}
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (SYSTEM::VMAG2(unk_0xB5D9AE572C19509E(unk_0xBC25C936A095B5BA())) > 1369f && !func_91())
		{
			return 0;
		}
	}
	if (func_81(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_93()//Position - 0x6B32
{
	if ((Global_19AF9 == func_37() && unk_0x8520DF5301DD9811()) && Global_19AFA)
	{
		return 1;
	}
	return 0;
}

void func_94()//Position - 0x6B5D
{
}

void func_95(int iParam0)//Position - 0x6B65
{
	if (iParam0 == -1)
	{
		iParam0 = func_37();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_97(iParam0);
	unk_0x8A623F2A0D19557F(0);
	unk_0xCB0D7BF24DBB59C6(1);
	Global_19AF6 = 0;
	func_96();
}

void func_96()//Position - 0x6B9B
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

void func_97(int iParam0)//Position - 0x6BD8
{
	Global_19AF9 = iParam0;
}

int func_98(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x6BE6
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
		iParam1 = func_37();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_139())
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
			if (SYSTEM::VMAG2(unk_0xB5D9AE572C19509E(unk_0xBC25C936A095B5BA())) > 1369f && !func_91())
			{
				return 0;
			}
		}
		if (!Global_19B04.f_2360)
		{
			return 0;
		}
		if (func_13(0))
		{
			return 0;
		}
		if (func_87())
		{
			return 0;
		}
		if (func_138())
		{
			return 0;
		}
		if (Global_19AF9 != -1)
		{
			return 0;
		}
		if (func_31(func_48()))
		{
			if (func_81(100f, 1) != -1)
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
		if (!func_137(iParam1))
		{
			return 0;
		}
		if (func_31(func_48()))
		{
			if (func_136(func_48()) == 4 || func_136(func_48()) == 5)
			{
				return 0;
			}
		}
		if (func_31(func_48()))
		{
			if (!func_135(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_134(Global_19B04.f_6186.f_2B[iParam1]))
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
		if (func_133())
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
		if (!func_124(4))
		{
			return 0;
		}
		if (!func_71(5))
		{
			return 0;
		}
		if (func_123(iParam1, iParam2) && !bParam3)
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
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_123(0, 0))
		{
			return 0;
		}
		if (Global_634F)
		{
			return 0;
		}
		if (func_137(30) && !func_123(30, 0))
		{
			if (iParam1 != 30)
			{
				if (SYSTEM::VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_31(func_48()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				vVar3 = { Global_19B04.f_932.f_21B.f_8E8[iVar2 /*3*/] };
				iVar4 = Global_19B04.f_932.f_21B.f_8E4[iVar2];
				if (func_122(iVar4))
				{
					if (func_100(iVar2))
					{
						if (!func_99(vVar3, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false), vVar3) < (210f * 210f))
							{
								if (func_48() != iVar2)
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

bool func_99(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x6F80
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_100(int iParam0)//Position - 0x6FC7
{
	int iVar0;
	
	iVar0 = Global_19B04.f_932.f_21B.f_8E4[iParam0];
	return func_101(iVar0);
}

int func_101(int iParam0)//Position - 0x6FE8
{
	return func_102(iParam0, 1);
}

int func_102(int iParam0, int iParam1)//Position - 0x6FF7
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_122(iParam0))
	{
		return 0;
	}
	func_103(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_103(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x704A
{
	func_104(func_115(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_104(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x7068
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_114(iParam0, iParam1))
	{
		iVar0 = func_113(iParam1);
		iVar1 = func_111(iParam0);
		iVar2 = (func_111(iParam0) - func_111(iParam1));
		iVar3 = (func_113(iParam0) - func_113(iParam1));
		iVar4 = (func_110(iParam0) - func_110(iParam1));
		iVar5 = (func_109(iParam0) - func_109(iParam1));
		iVar6 = (func_108(iParam0) - func_108(iParam1));
		iVar7 = (func_107(iParam0) - func_107(iParam1));
	}
	else
	{
		iVar0 = func_113(iParam0);
		iVar1 = func_111(iParam1);
		iVar2 = (func_111(iParam1) - func_111(iParam0));
		iVar3 = (func_113(iParam1) - func_113(iParam0));
		iVar4 = (func_110(iParam1) - func_110(iParam0));
		iVar5 = (func_109(iParam1) - func_109(iParam0));
		iVar6 = (func_108(iParam1) - func_108(iParam0));
		iVar7 = (func_107(iParam1) - func_107(iParam0));
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
		iVar4 = (iVar4 + func_106(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_105(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_105(float fParam0, float fParam1, float fParam2)//Position - 0x7269
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

int func_106(int iParam0, int iParam1)//Position - 0x72AB
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

int func_107(int iParam0)//Position - 0x734D
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_108(int iParam0)//Position - 0x7360
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_109(int iParam0)//Position - 0x7373
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_110(int iParam0)//Position - 0x7386
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_111(int iParam0)//Position - 0x7398
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_112(unk_0xFA30DFD0084E92FE(iParam0, 31), -1, 1)) + 2011;
}

int func_112(bool bParam0, int iParam1, int iParam2)//Position - 0x73BD
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_113(int iParam0)//Position - 0x73D4
{
	return iParam0 & 15;
}

int func_114(int iParam0, int iParam1)//Position - 0x73E1
{
	int iVar0;
	int iVar1;
	
	if (!func_122(iParam1) || !func_122(iParam0))
	{
		return 1;
	}
	iVar0 = func_111(iParam0);
	iVar1 = func_111(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_113(iParam0);
	iVar1 = func_113(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_110(iParam0);
	iVar1 = func_110(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_109(iParam0);
	iVar1 = func_109(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_108(iParam0);
	iVar1 = func_108(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_107(iParam0);
	iVar1 = func_107(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_115()//Position - 0x74ED
{
	var uVar0;
	
	func_121(&uVar0, unk_0xF40D00CD7B81C0A8());
	func_120(&uVar0, unk_0x7E09057438B9D216());
	func_119(&uVar0, unk_0x6E06C0DB9B43570D());
	func_118(&uVar0, unk_0xBE14F159908E4EE5());
	func_117(&uVar0, unk_0xDD6A91E47ED4D0CF());
	func_116(&uVar0, unk_0x4EEB3860BFC44B78());
	return uVar0;
}

void func_116(var uParam0, int iParam1)//Position - 0x7533
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

void func_117(var uParam0, int iParam1)//Position - 0x75B9
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_118(var uParam0, int iParam1)//Position - 0x75EC
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_113(*uParam0);
	iVar1 = func_111(*uParam0);
	if (iParam1 < 1 || iParam1 > func_106(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_119(var uParam0, int iParam1)//Position - 0x763D
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_120(var uParam0, int iParam1)//Position - 0x7677
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_121(var uParam0, int iParam1)//Position - 0x76B2
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_122(int iParam0)//Position - 0x76EE
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
	iVar0 = func_107(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_108(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_109(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_111(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_113(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_110(iParam0);
	if (iVar5 < 1 || iVar5 > func_106(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_123(int iParam0, int iParam1)//Position - 0x77CA
{
	if (unk_0xFA30DFD0084E92FE(Global_19B04.f_6186.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_124(int iParam0)//Position - 0x77ED
{
	int iVar0;
	
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				iVar0 = func_48();
				if (!func_31(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_132()) || Global_1974B) || Global_62BF) || func_131()) || func_50(8, -1)) || func_130()) || func_129()) || func_128()) || func_127()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1) || func_132()) || Global_62BF) || func_131()) || func_50(8, -1)) || func_128()) || func_130()) || func_129()) || func_127()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_132()) || Global_1974B) || Global_62BF) || func_131()) || func_50(8, -1)) || func_128()) || func_130()) || func_129()) || func_127()) || Global_19B04.f_1DEB.f_397[iVar0] == 5) || Global_8E64 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_132()) || Global_1974B) || Global_62BF) || func_131()) || func_50(8, -1)) || func_130()) || func_129()) || func_127()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_132() || unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0) || func_50(8, -1)) || func_127()) || func_126()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_50(8, -1) || func_130()) || func_129()) || func_126()) || func_125())
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
							if ((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || func_132()) || Global_62BF) || func_131()) || func_50(8, -1)) || func_129()) || func_128()) || func_127()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || !unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) || !unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F())) || !unk_0x726D9204B160D23E()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || func_132()) || func_129()) || Global_1974B) || Global_62BF) || func_131()) || Global_90C1) || func_50(8, -1)) || func_128()) || func_126()) || func_127()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || !unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) || !unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F())) || !unk_0x726D9204B160D23E()) || unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0)) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1)) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0x9273B3557334635D(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || func_132()) || Global_1974B) || Global_62BF) || func_131()) || func_50(8, -1)) || func_128()) || func_126()) || func_130()) || func_129()) || func_127())
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

var func_125()//Position - 0x7F0A
{
	return Global_16B42.f_1;
}

int func_126()//Position - 0x7F18
{
	if (Global_15FA6 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_147B0[Global_15FA6 /*34*/].f_F, 13);
	}
	return 0;
}

int func_127()//Position - 0x7F3E
{
	if (unk_0xB731B8C5BCE89836(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_128()//Position - 0x7F58
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

bool func_129()//Position - 0x7F82
{
	return Global_16B4F.f_142 > 0;
}

bool func_130()//Position - 0x7F93
{
	return Global_16B4F.f_141 > 0;
}

var func_131()//Position - 0x7FA4
{
	return Global_140856;
}

int func_132()//Position - 0x7FB0
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		return Global_161D2.f_2C == 1;
	}
	return 0;
}

int func_133()//Position - 0x7FCC
{
	func_47();
	if (Global_C60[Global_389D /*2811*/][0 /*281*/].f_103 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_134(int iParam0)//Position - 0x7FF4
{
	return func_114(func_115(), iParam0);
}

int func_135(int iParam0, int iParam1, int iParam2)//Position - 0x8007
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_48();
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

int func_136(int iParam0)//Position - 0x80EB
{
	if (!func_31(iParam0))
	{
		return 7;
	}
	return Global_19B04.f_1DEB.f_397[iParam0];
}

bool func_137(int iParam0)//Position - 0x810F
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_139())
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

int func_138()//Position - 0x816D
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

int func_139()//Position - 0x81B1
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

void func_140()//Position - 0x826C
{
	int iVar0;
	
	if (iLocal_49 && !iLocal_54)
	{
		if (!func_6("RECGF_SHOOT"))
		{
			func_4();
		}
		if (unk_0x2DA8CA50A72528FB(iLocal_56))
		{
			unk_0x07B8ECB35A4ED3AC(&iLocal_56);
		}
		if (!unk_0x36CEFBE9B745A58D(iLocal_58))
		{
			unk_0xC8FD3EBBB90E8D7F(iLocal_58, 317, true);
			unk_0xF82197F205B9D8FD(iLocal_58, false);
			unk_0x2E35C4FA5F0ED22F(iLocal_58, false);
		}
		iVar0 = 0;
		while (iVar0 < iLocal_59)
		{
			if (unk_0x2DA8CA50A72528FB(iLocal_57[iVar0]))
			{
				unk_0x07B8ECB35A4ED3AC(&(iLocal_57[iVar0]));
			}
			if (!unk_0x36CEFBE9B745A58D(iLocal_59[iVar0]) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				if (iVar0 < 2)
				{
					if (!unk_0x1D403DFADBC2DE3C(iLocal_61[iVar0], 0))
					{
						unk_0x1A06AE15BF21D407(iLocal_59[iVar0], iLocal_61[iVar0], unk_0xBC25C936A095B5BA(), 8, 20f, 786469, 150f, 10f, 1);
						unk_0x22321800954A532E(iLocal_59[iVar0], true);
					}
					else
					{
						unk_0x5558ED6D4A2DEC93(iLocal_59[iVar0], unk_0xBC25C936A095B5BA(), 200f, -1, 0, 0);
					}
				}
				else
				{
					unk_0x5558ED6D4A2DEC93(iLocal_59[iVar0], unk_0xBC25C936A095B5BA(), 200f, -1, 0, 0);
				}
				unk_0x2E35C4FA5F0ED22F(iLocal_59[iVar0], false);
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_61)
		{
			if (!unk_0x1D403DFADBC2DE3C(iLocal_61[iVar0], 0))
			{
				unk_0x1E7A09C1710FB071(&(iLocal_61[iVar0]));
				if (unk_0x144E80F5C46A6B75("RE_COUNTRYSIDE_GANG_FIGHT_SCENE"))
				{
				}
			}
			iVar0++;
		}
		unk_0xC1300D0F3A74E20B("RE_COUNTRYSIDE_GANG_FIGHT_SCENE");
		unk_0xDF53A66AEE1401AA(1f);
		unk_0x4806A94C8ED574C3(417.901f, 3578.002f, 31.176f, 1305.897f, 3604.306f, 40.1064f, 100.0625f, 1);
		unk_0xB830DBD32591E1BC();
		unk_0xE85B33FB221A23CD(3, true);
		unk_0xE85B33FB221A23CD(5, true);
		func_3(&uLocal_63, 1);
		func_3(&uLocal_63, 2);
		func_3(&uLocal_63, 3);
		func_3(&uLocal_63, 4);
	}
	func_141(-1);
	unk_0x95E4B6F3ED223F5A();
}

void func_141(int iParam0)//Position - 0x842D
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_37();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_93())
	{
		func_145(iParam0);
		unk_0x3FF92BBF0607A406(0, 0);
		Global_19AFB = unk_0x105601648511CC64();
		func_144(30000);
		StringCopy(&cVar0, func_143(Global_19AF9, 1), 64);
		if (func_36(Global_19AF9) > 0)
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
	func_142(&Global_62F8);
	Global_19AFA = 0;
	func_97(-1);
}

void func_142(var uParam0)//Position - 0x84E2
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

char* func_143(int iParam0, bool bParam1)//Position - 0x851F
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

void func_144(int iParam0)//Position - 0x8768
{
	Global_8E68 = (unk_0x105601648511CC64() + iParam0);
}

void func_145(int iParam0)//Position - 0x877A
{
	func_146(iParam0, 0, func_151(iParam0));
}

void func_146(int iParam0, int iParam1, int iParam2)//Position - 0x878F
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_115();
	func_149(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_148(iParam0, &uVar0);
	Var1 = { func_147(&uVar0) };
}

struct<16> func_147(var uParam0)//Position - 0x87BE
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_109(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_108(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_107(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_110(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_113(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_111(*uParam0), 64);
	return Var0;
}

void func_148(int iParam0, var uParam1)//Position - 0x888F
{
	Global_19B04.f_6186.f_2B[iParam0] = *uParam1;
}

void func_149(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x88A7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_111(*uParam0);
	iVar1 = func_113(*uParam0);
	iVar2 = func_110(*uParam0);
	iVar3 = func_109(*uParam0);
	iVar4 = func_108(*uParam0);
	iVar5 = func_107(*uParam0);
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
	iVar6 = func_106(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_106(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_150(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_150(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x8A29
{
	func_121(uParam0, iParam1);
	func_120(uParam0, iParam2);
	func_119(uParam0, iParam3);
	func_117(uParam0, iParam5);
	func_118(uParam0, iParam4);
	func_116(uParam0, iParam6);
}

int func_151(int iParam0)//Position - 0x8A61
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

