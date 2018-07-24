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
	int iLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	vector3 vLocal_36 = { 0f, 0f, 0f };
	char cLocal_37[16] = "";
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	char cLocal_40[16] = "";
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48 = 3;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 1092616192;
	var uLocal_55 = 1101004800;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 3;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 16;
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
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	int iLocal_237 = 0;
	struct<8> Local_238[10];
	int iLocal_239 = 0;
	int iLocal_240 = 0;
	int iLocal_241 = 0;
	bool bLocal_242 = 0;
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	float fLocal_246 = 0f;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
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
	iLocal_20 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	vLocal_36 = { -1078.86f, -2943.56f, 12.95f };
	StringCopy(&cLocal_37, "PMPLANE", 16);
	StringCopy(&cLocal_40, "", 16);
	iLocal_45 = -1;
	unk_0x25A523E067E06F54(1);
	if (unk_0xE8A79675302ED812(3))
	{
		func_143(2);
		func_142();
	}
	func_137();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (func_136())
		{
			iLocal_45 = -1;
		}
		else if (iLocal_45 == -1)
		{
			iLocal_45 = unk_0x105601648511CC64();
		}
		func_1();
	}
}

void func_1()//Position - 0xC8
{
	vector3 vVar0;
	char cVar1[16];
	float fVar2;
	int iVar3;
	
	vVar0 = { -1085.279f, -2970.573f, 12.9457f };
	iLocal_245 = 0;
	if (unk_0x724D816EA203A79E(iLocal_237))
	{
		if (!unk_0xE59B7F5A03335350(iLocal_237, 0))
		{
			func_135();
		}
		else if (iLocal_43 == 2)
		{
			if (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_237, 0))
			{
				if (!unk_0x2DA8CA50A72528FB(iLocal_46))
				{
					func_134("BK_PLANE", 7500, 1);
					iLocal_46 = func_133(iLocal_237, 0, 0);
				}
				if (func_132(unk_0xBC25C936A095B5BA(), iLocal_237, 1) > 300f)
				{
					func_135();
				}
			}
			else if (unk_0x2DA8CA50A72528FB(iLocal_46))
			{
				unk_0xEB233A3B7635D2AC();
				unk_0x07B8ECB35A4ED3AC(&iLocal_46);
			}
		}
	}
	if ((((unk_0x724D816EA203A79E(iLocal_237) && unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_237, 0)) && unk_0x2A348A3A98B80B13(iLocal_237)) && iLocal_241) && unk_0x284F2ACE6839D3C0("PLANES", false, -1))
	{
		if (!bLocal_242)
		{
			if (unk_0x694514BD37EC4E94(0, 114))
			{
				if (iLocal_240 == -1 || (unk_0x105601648511CC64() - iLocal_240) > 2000)
				{
					if (!unk_0x2F1B39E315395385(iLocal_248))
					{
						iLocal_248 = unk_0xD0F8470A5BFEECF7("scr_property_leaflet_drop", iLocal_237, 0f, -2f, -0.65f, 0f, 0f, 0f, 1f, 0, 0, 0);
						fLocal_246 = 0f;
					}
					if (func_131("LEAFLET"))
					{
						unk_0x7456702622C62EA0(1);
					}
					unk_0xF2C27FE5A8B98CB5(-1, "PROPERTIES_PLANE_PROMO_MASTER", iLocal_237, 0, 0, 0);
					iLocal_240 = unk_0x105601648511CC64();
					bLocal_242 = true;
				}
			}
		}
		else if ((unk_0x105601648511CC64() - iLocal_240) > 3000)
		{
			bLocal_242 = false;
		}
	}
	else if (unk_0x2F1B39E315395385(iLocal_248))
	{
		unk_0x2CA8D9DC16C6AF09(iLocal_248, 0);
		fLocal_246 = 0f;
	}
	if (unk_0x2F1B39E315395385(iLocal_248))
	{
		if (bLocal_242)
		{
			fVar2 = 1f;
		}
		else
		{
			fVar2 = -1f;
		}
		fLocal_246 = (fLocal_246 + ((fVar2 * SYSTEM::TIMESTEP()) * 100f));
		fLocal_246 = func_130(fLocal_246, 0f, 1f);
		unk_0xE426CF2117CBB2CF(iLocal_248, "spawn", fLocal_246, 0);
	}
	switch (iLocal_43)
	{
		case 0:
			unk_0xF243B7A14FCFD0F4(joaat("stunt"));
			if (unk_0xD6513D668481290A(joaat("stunt")))
			{
				iLocal_237 = Global_195FA.f_DE[0];
				if (!unk_0x724D816EA203A79E(iLocal_237))
				{
					iLocal_237 = unk_0x61C05BF08A1E0EFE(joaat("stunt"), vVar0, 121.2244f, true, true, false);
					unk_0xF0A40F19AAB79E88(iLocal_237, 1084227584);
				}
				else
				{
					unk_0x77815D3407C6700D(iLocal_237, true, 1);
				}
				unk_0x2CA123B0622F495C(joaat("stunt"));
				unk_0xEB233A3B7635D2AC();
				func_134("GET_PLANE", 7500, 1);
				iLocal_46 = func_133(iLocal_237, 0, 0);
				unk_0xA8396BF0E2C53C39();
				func_127(&iLocal_47, 1, 0);
				iLocal_43++;
			}
			break;
		
		case 1:
			if (unk_0x724D816EA203A79E(iLocal_237) && unk_0xE59B7F5A03335350(iLocal_237, 0))
			{
				if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_237, 0))
				{
					unk_0xEB233A3B7635D2AC();
					func_134("TAKEOFF", 7500, 1);
					if (unk_0x2DA8CA50A72528FB(iLocal_46))
					{
						unk_0x07B8ECB35A4ED3AC(&iLocal_46);
					}
					func_74(-1021.522f, -2986.142f, 12.9519f, 341.6539f, 0, 145);
					iLocal_43++;
				}
			}
			break;
		
		case 2:
			iVar3 = 0;
			while (iVar3 < Local_238)
			{
				if (func_70(&(Local_238[iVar3 /*8*/])))
				{
					iLocal_239++;
				}
				iVar3++;
			}
			if ((10 - iLocal_239) <= 0)
			{
				iLocal_43++;
			}
			break;
		
		case 3:
			if (func_24(&iLocal_47, vLocal_36, -1067.083f, -2922.601f, 12.82418f, -1091.854f, -2965.403f, 23.94564f, 31.5625f, 1, iLocal_237, "LAND", "", "BK_PLANE", 1, 0, 1, -1) && !unk_0x2A348A3A98B80B13(iLocal_237))
			{
				func_127(&iLocal_47, 1, 0);
				iLocal_43++;
			}
			break;
		
		case 4:
			if (func_22(iLocal_237, 1093140480, 1, 0f, 0, 1, 0))
			{
				iLocal_43++;
			}
			break;
		
		case 5:
			unk_0xA3981DED4FC2E56E(unk_0xBC25C936A095B5BA(), 0, 0);
			unk_0x8300C56586249382(iLocal_237, 0);
			func_21();
			break;
	}
	switch (iLocal_44)
	{
		case 0:
			if ((10 - iLocal_239) <= 0)
			{
				iLocal_44++;
			}
			else if ((func_20() && (unk_0x105601648511CC64() - iLocal_45) > 5000) && iLocal_245)
			{
				StringCopy(&cVar1, "RAND_", 16);
				StringConCat(&cVar1, &cLocal_40, 16);
				if (func_19(49) && unk_0x491B2241281A03B7(0, 3) == 0)
				{
					StringConCat(&cVar1, "M", 16);
				}
				else if (iLocal_247 > 0)
				{
					StringIntConCat(&cVar1, iLocal_247 + 1, 16);
				}
				if (func_2(&uLocal_72, &cLocal_37, &cVar1, 8, 0, 0, 0))
				{
					iLocal_247++;
					if (iLocal_247 >= 6)
					{
						iLocal_247 = 0;
					}
					StringCopy(&cVar1, "", 16);
				}
			}
			break;
		
		case 1:
			if (func_20() && (unk_0x105601648511CC64() - iLocal_45) > 1000)
			{
				if (func_2(&uLocal_72, &cLocal_37, "DONE", 8, 0, 0, 0))
				{
					StringCopy(&cVar1, "", 16);
					iLocal_44++;
				}
			}
			break;
	}
}

bool func_2(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x568
{
	func_18(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_3(sParam2, iParam3, 0);
}

int func_3(char* sParam0, int iParam1, bool bParam2)//Position - 0x5B6
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
					func_17();
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
		if (func_16(8, -1))
		{
			return 0;
		}
		Global_3E04 = { Global_3DFE };
		func_15();
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
				func_8();
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
				if (func_7())
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
			if (func_6())
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
			func_5();
			Global_3DC2 = bParam2;
		}
		Global_3DBA = iParam1;
		StringCopy(&Global_3C3B, sParam0, 24);
		Global_394A = 0;
		func_4();
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
		func_17();
	}
	return 0;
}

void func_4()//Position - 0x882
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

void func_5()//Position - 0x8B3
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

int func_6()//Position - 0x948
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_7()//Position - 0x96F
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

void func_8()//Position - 0xA08
{
	if (func_14(14))
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
		Global_389D = func_9();
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

var func_9()//Position - 0xAAA
{
	func_10();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_10()//Position - 0xAC3
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_13(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_12(unk_0xBC25C936A095B5BA());
			if (func_11(iVar0) && (!func_14(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_11(Global_19B04.f_932.f_21B.f_10CD))
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

bool func_11(int iParam0)//Position - 0xBC0
{
	return iParam0 < 3;
}

int func_12(int iParam0)//Position - 0xBCC
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_13(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_13(int iParam0)//Position - 0xC09
{
	if (func_11(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_14(int iParam0)//Position - 0xC33
{
	return Global_8C41 == iParam0;
}

void func_15()//Position - 0xC41
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

bool func_16(int iParam0, int iParam1)//Position - 0xC98
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

void func_17()//Position - 0xCD3
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

void func_18(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0xD2A
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

int func_19(int iParam0)//Position - 0xD80
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_19B04.f_2360.f_14A[iParam0 /*6*/];
}

int func_20()//Position - 0xDAC
{
	if (func_136())
	{
		return 0;
	}
	if (unk_0x11D38424F1DD3B8F())
	{
		if (unk_0x4B8E3E5901E59EB8())
		{
			return 0;
		}
	}
	return 1;
}

void func_21()//Position - 0xDD2
{
	func_143(1);
	func_142();
}

int func_22(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0xDE3
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
	func_23(iParam0);
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

void func_23(int iParam0)//Position - 0xF72
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

int func_24(int iParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, float fParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8, char* sParam9, bool bParam10, int iParam11, bool bParam12, int iParam13)//Position - 0xF9E
{
	return func_25(iParam0, vParam1, func_69(), vParam2, vParam3, bParam5, 5, 0, 0, 0, iParam6, sParam7, func_68(), func_68(), func_68(), func_68(), sParam8, 0, bParam10, sParam9, 1, iParam11, bParam12, iParam13, func_68(), func_68(), func_68(), 1, fParam4);
}

int func_25(int iParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, vector3 vParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, bool bParam17, bool bParam18, char* sParam19, bool bParam20, int iParam21, bool bParam22, int iParam23, var uParam24, var uParam25, var uParam26, bool bParam27, float fParam28)//Position - 0xFF3
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	vVar3 = { vParam1 + Vector(1f, 0f, 0f) };
	iParam0->f_11[0] = iParam7;
	iParam0->f_11[1] = iParam8;
	iParam0->f_11[2] = iParam9;
	iParam0->f_10 = iParam7;
	func_67(iParam0);
	func_66(iParam0);
	func_65();
	if (func_48(iParam0, iParam0->f_11[0], iParam0->f_11[1], iParam0->f_11[2], sParam12, sParam13, sParam14, sParam15, iParam0->f_8, bParam17, iParam10, 0, 0, uParam24, uParam25, uParam26, iParam6, bParam18))
	{
		func_47(sParam12);
		func_47(sParam13);
		func_47(sParam14);
		func_47(sParam15);
		if (unk_0x726D9204B160D23E())
		{
			bVar1 = false;
			if (unk_0xE59B7F5A03335350(iParam10, 0))
			{
				if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iParam10, 0))
				{
					unk_0xF0059F27F7BB6680(&(iParam0->f_D), 3);
					if (!unk_0xFA30DFD0084E92FE(iParam0->f_D, 9))
					{
						unk_0x7CB6FD92BE491AD9(&(iParam0->f_D), 4);
					}
					if (unk_0xFA30DFD0084E92FE(iParam0->f_D, 23))
					{
						unk_0x7CB6FD92BE491AD9(&(iParam0->f_D), 23);
					}
					unk_0xF0059F27F7BB6680(&(iParam0->f_D), 9);
					bVar1 = true;
				}
			}
			else if (iParam6 == 4 || iParam6 == 5)
			{
				if (func_45(iParam0, iParam21))
				{
					unk_0xF0059F27F7BB6680(&(iParam0->f_D), 3);
					if (!unk_0xFA30DFD0084E92FE(iParam0->f_D, 9))
					{
						unk_0x7CB6FD92BE491AD9(&(iParam0->f_D), 4);
					}
					unk_0xF0059F27F7BB6680(&(iParam0->f_D), 9);
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				func_47(sParam16);
				func_47(sParam19);
				func_47("MORE_SEATS");
				if (bParam18 && unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
				{
					if (unk_0x2DA8CA50A72528FB(iParam0->f_5))
					{
						unk_0x07B8ECB35A4ED3AC(&(iParam0->f_5));
						func_47(sParam11);
					}
					if (unk_0x2DA8CA50A72528FB(*iParam0))
					{
						unk_0x07B8ECB35A4ED3AC(iParam0);
					}
					if ((!func_42(iParam0, 1) && !func_41(iParam0)) && !unk_0xFA30DFD0084E92FE(iParam0->f_D, 0))
					{
						if (bParam22)
						{
							func_40(iParam0, "LOSE_WANTED", 0);
							if (!unk_0x36CEFBE9B745A58D(iParam0->f_11[0]))
							{
								func_38(iParam0->f_11[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0xF0059F27F7BB6680(&(iParam0->f_D), 0);
						unk_0x7CB6FD92BE491AD9(&(iParam0->f_D), 1);
					}
				}
				else
				{
					if (unk_0xFA30DFD0084E92FE(iParam0->f_D, 0))
					{
						func_47("LOSE_WANTED");
						unk_0x7CB6FD92BE491AD9(&(iParam0->f_D), 0);
						unk_0xF0059F27F7BB6680(&(iParam0->f_D), 1);
					}
					if (unk_0xFA30DFD0084E92FE(iParam0->f_D, 1))
					{
						if (!func_42(iParam0, 1))
						{
							if (!unk_0x36CEFBE9B745A58D(iParam0->f_11[0]))
							{
								func_38(iParam0->f_11[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0x7CB6FD92BE491AD9(&(iParam0->f_D), 1);
						}
					}
					if (!unk_0x2DA8CA50A72528FB(iParam0->f_5))
					{
						if (unk_0x2DA8CA50A72528FB(*iParam0))
						{
							unk_0x07B8ECB35A4ED3AC(iParam0);
						}
						iParam0->f_5 = func_37(vVar3, 0);
						if (!iParam23 == -1)
						{
							unk_0xBF0E22F3E083C33D(iParam0->f_5, iParam23);
						}
						if (bParam27)
						{
							func_36(iParam0->f_5, iParam0);
						}
					}
					else if (!func_35(vVar3, unk_0x5DC00ADB7E2FD7C2(iParam0->f_5), 0.1f, 0))
					{
						unk_0x1423825E528B4DE1(iParam0->f_5, vVar3);
						if (bParam27)
						{
							func_36(iParam0->f_5, iParam0);
						}
					}
					if (!func_42(iParam0, 2))
					{
						if (!unk_0xFA30DFD0084E92FE(iParam0->f_D, 2))
						{
							func_40(iParam0, sParam11, 0);
							unk_0xF0059F27F7BB6680(&(iParam0->f_D), 2);
						}
					}
					if (iParam6 == 4 || iParam6 == 5)
					{
						if (unk_0xFA30DFD0084E92FE(iParam0->f_D, 13))
						{
							bParam5 = false;
						}
					}
					bVar1 = false;
					bVar4 = false;
					iVar5 = 0;
					if ((iParam6 == 1 || iParam6 == 3) || iParam6 == 5)
					{
						bVar4 = true;
					}
					if (iParam6 == 2 || iParam6 == 3)
					{
						iVar5 = 1;
					}
					else if (iParam6 == 4 || iParam6 == 5)
					{
						iVar5 = 2;
					}
					if (bParam20)
					{
						unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vParam1, vParam2, bParam5, bVar4, iVar5);
						if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), vParam3, vParam4, fParam28, 0, bVar4, iVar5))
						{
							bVar1 = true;
						}
					}
					else if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vParam1, vParam2, bParam5, bVar4, iVar5))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!unk_0x36CEFBE9B745A58D(iParam0->f_11[iVar2]))
							{
								if (iParam6 == 4 || iParam6 == 5)
								{
									iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
									if (!unk_0x62F3A07C43FFB568(iParam0->f_11[iVar2], iVar0, 0))
									{
										bVar1 = false;
									}
								}
								else if (iParam10 != 0)
								{
									if (!unk_0x62F3A07C43FFB568(iParam0->f_11[iVar2], iParam10, 0))
									{
										bVar1 = false;
									}
								}
								else if (!unk_0x9488E18994C5C83D(iParam0->f_11[iVar2], func_34()) || !func_32(iParam0->f_11[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (func_29(iParam0))
							{
								func_47(sParam11);
								func_47(sParam16);
								func_47(sParam12);
								func_47(sParam13);
								func_47(sParam14);
								func_47(sParam15);
								func_47("LOSE_WANTED");
								func_47("MORE_SEATS");
								func_47(sParam19);
								func_127(iParam0, 1, 0);
								return 1;
							}
						}
					}
				}
			}
			else if (unk_0x724D816EA203A79E(iParam10))
			{
				if ((bParam18 && unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0)) && (!unk_0xFA30DFD0084E92FE(iParam0->f_D, 9) && !unk_0xFA30DFD0084E92FE(iParam0->f_D, 22)))
				{
					func_47(sParam16);
					func_47(sParam19);
					if (unk_0x2DA8CA50A72528FB(iParam0->f_5) || unk_0x2DA8CA50A72528FB(*iParam0))
					{
						unk_0x07B8ECB35A4ED3AC(&(iParam0->f_5));
						unk_0x07B8ECB35A4ED3AC(iParam0);
						func_47(sParam11);
					}
					if ((!func_42(iParam0, 1) && !func_41(iParam0)) && !unk_0xFA30DFD0084E92FE(iParam0->f_D, 0))
					{
						if (bParam22)
						{
							func_40(iParam0, "LOSE_WANTED", 0);
							if (!unk_0x36CEFBE9B745A58D(iParam0->f_11[0]))
							{
								func_38(iParam0->f_11[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0xF0059F27F7BB6680(&(iParam0->f_D), 0);
						unk_0x7CB6FD92BE491AD9(&(iParam0->f_D), 1);
					}
				}
				else
				{
					if (unk_0xFA30DFD0084E92FE(iParam0->f_D, 0))
					{
						func_47("LOSE_WANTED");
						unk_0x7CB6FD92BE491AD9(&(iParam0->f_D), 0);
						unk_0xF0059F27F7BB6680(&(iParam0->f_D), 1);
					}
					if (unk_0xFA30DFD0084E92FE(iParam0->f_D, 1))
					{
						if (!func_42(iParam0, 1))
						{
							if (!unk_0x36CEFBE9B745A58D(iParam0->f_11[0]))
							{
								func_38(iParam0->f_11[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0x7CB6FD92BE491AD9(&(iParam0->f_D), 1);
						}
					}
					if (unk_0xE59B7F5A03335350(iParam10, 0))
					{
						if (!unk_0x2DA8CA50A72528FB(*iParam0))
						{
							if (unk_0x2DA8CA50A72528FB(iParam0->f_5))
							{
								unk_0x07B8ECB35A4ED3AC(&(iParam0->f_5));
								func_47(sParam11);
							}
							*iParam0 = func_26(iParam10, 0, 0);
							unk_0x2E9308F22ABD4DF5(*iParam0, 2);
							if (!unk_0xFA30DFD0084E92FE(iParam0->f_D, 4))
							{
								func_36(*iParam0, iParam0);
							}
						}
						if (!func_42(iParam0, 2))
						{
							if (!unk_0xFA30DFD0084E92FE(iParam0->f_D, 3))
							{
								func_40(iParam0, sParam16, 0);
								unk_0xF0059F27F7BB6680(&(iParam0->f_D), 3);
								unk_0x7CB6FD92BE491AD9(&(iParam0->f_D), 4);
							}
							else if (unk_0xFA30DFD0084E92FE(iParam0->f_D, 9))
							{
								if (!unk_0xEAEFBBEC1AEA464B(sParam19))
								{
									if (!unk_0xFA30DFD0084E92FE(iParam0->f_D, 4))
									{
										func_40(iParam0, sParam19, 0);
										unk_0xF0059F27F7BB6680(&(iParam0->f_D), 4);
									}
								}
								else if (!unk_0xFA30DFD0084E92FE(iParam0->f_D, 4))
								{
									func_40(iParam0, sParam16, 0);
									unk_0xF0059F27F7BB6680(&(iParam0->f_D), 4);
								}
								if (!unk_0xFA30DFD0084E92FE(iParam0->f_D, 23))
								{
									if (!unk_0x36CEFBE9B745A58D(iParam0->f_11[0]))
									{
										func_38(iParam0->f_11[0], "GET_IN_CAR", 3);
									}
									unk_0xF0059F27F7BB6680(&(iParam0->f_D), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (unk_0x2DA8CA50A72528FB(iParam0->f_5))
				{
					unk_0x07B8ECB35A4ED3AC(&(iParam0->f_5));
					func_47(sParam11);
				}
				if (iParam6 == 4 || iParam6 == 5)
				{
					if (iParam21 > 0)
					{
						if (!func_42(iParam0, 2))
						{
							if (unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()))
							{
								if (!unk_0xFA30DFD0084E92FE(iParam0->f_D, 13))
								{
									iVar6 = 0;
									iVar7 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!unk_0x36CEFBE9B745A58D(iParam0->f_11[iVar2]))
										{
											iVar6++;
										}
										iVar2++;
									}
									iVar7 = unk_0x491B2241281A03B7(0, iVar6);
									if (!unk_0x36CEFBE9B745A58D(iParam0->f_11[iVar7]))
									{
										func_38(iParam0->f_11[iVar7], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_40(iParam0, "MORE_SEATS", 0);
									unk_0xF0059F27F7BB6680(&(iParam0->f_D), 13);
								}
							}
							else if (!unk_0xFA30DFD0084E92FE(iParam0->f_D, 3))
							{
								func_40(iParam0, sParam16, 0);
								unk_0xF0059F27F7BB6680(&(iParam0->f_D), 3);
								unk_0x7CB6FD92BE491AD9(&(iParam0->f_D), 4);
							}
							else if (!unk_0xFA30DFD0084E92FE(iParam0->f_D, 4))
							{
								if (unk_0xFA30DFD0084E92FE(iParam0->f_D, 9))
								{
									func_40(iParam0, sParam19, 0);
									unk_0xF0059F27F7BB6680(&(iParam0->f_D), 4);
								}
							}
						}
					}
					else if (!func_42(iParam0, 2))
					{
						if (!unk_0xFA30DFD0084E92FE(iParam0->f_D, 3))
						{
							func_40(iParam0, sParam16, 0);
							unk_0xF0059F27F7BB6680(&(iParam0->f_D), 3);
							unk_0x7CB6FD92BE491AD9(&(iParam0->f_D), 4);
						}
						else if (unk_0xFA30DFD0084E92FE(iParam0->f_D, 9))
						{
							if (!unk_0xEAEFBBEC1AEA464B(sParam19))
							{
								if (!unk_0xFA30DFD0084E92FE(iParam0->f_D, 4))
								{
									func_40(iParam0, sParam19, 0);
									unk_0xF0059F27F7BB6680(&(iParam0->f_D), 4);
								}
							}
							else if (!unk_0xFA30DFD0084E92FE(iParam0->f_D, 4))
							{
								func_40(iParam0, sParam16, 0);
								unk_0xF0059F27F7BB6680(&(iParam0->f_D), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (unk_0xFA30DFD0084E92FE(iParam0->f_D, 0))
		{
			unk_0x7CB6FD92BE491AD9(&(iParam0->f_D), 0);
		}
		func_47(sParam11);
		func_47(sParam16);
		func_47(sParam19);
		func_47(sParam16);
		func_47("LOSE_WANTED");
		if (unk_0x2DA8CA50A72528FB(iParam0->f_5))
		{
			unk_0x07B8ECB35A4ED3AC(&(iParam0->f_5));
		}
		if (unk_0x2DA8CA50A72528FB(*iParam0))
		{
			unk_0x07B8ECB35A4ED3AC(iParam0);
		}
	}
	unk_0x7CB6FD92BE491AD9(&(iParam0->f_D), 11);
	unk_0x7CB6FD92BE491AD9(&(iParam0->f_D), 12);
	return 0;
}

int func_26(int iParam0, bool bParam1, bool bParam2)//Position - 0x194C
{
	return func_27(iParam0, !bParam1, bParam2);
}

int func_27(int iParam0, bool bParam1, bool bParam2)//Position - 0x195F
{
	int iVar0;
	
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x511FE22BCF5353CD(iParam0);
	if (unk_0xD27AC0E9B78CFDD7(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(iVar0, func_28(unk_0x7AF0088ABFA713B6(), 1f, 1f));
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
		unk_0x3F5F1772D71D5EC4(iVar0, func_28(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
		unk_0xF9C2945DB5BAB4BF(iVar0, bParam1);
	}
	else if (unk_0xB12D030810E8447D(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(iVar0, func_28(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_28(bool bParam0, float fParam1, float fParam2)//Position - 0x1A03
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_29(int iParam0)//Position - 0x1A1A
{
	if (unk_0xFA30DFD0084E92FE(iParam0->f_D, 12))
	{
		if (func_31(unk_0xBC25C936A095B5BA()))
		{
			if (func_30(1, 0, 1) || unk_0xFA30DFD0084E92FE(iParam0->f_D, 7))
			{
				return 1;
			}
		}
	}
	else if (func_30(1, 0, 1) || unk_0xFA30DFD0084E92FE(iParam0->f_D, 7))
	{
		return 1;
	}
	return 0;
}

int func_30(bool bParam0, bool bParam1, bool bParam2)//Position - 0x1A78
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

int func_31(int iParam0)//Position - 0x1B5D
{
	float fVar0;
	
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		fVar0 = unk_0x8910237449BB6F79(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_32(int iParam0, int iParam1)//Position - 0x1B94
{
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()) && iParam1)
		{
			if (func_33(unk_0xBC25C936A095B5BA(), iParam0))
			{
				unk_0x567FA6DC2DF8E19A(func_34(), 50f);
				return 1;
			}
		}
		else if (unk_0x9488E18994C5C83D(iParam0, func_34()))
		{
			unk_0x567FA6DC2DF8E19A(func_34(), 50f);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_33(int iParam0, int iParam1)//Position - 0x1BFF
{
	int iVar0;
	
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (unk_0xCBBE5AFE2CD2E9B6(iParam0))
		{
			iVar0 = unk_0x9FE9D386222EEE47(iParam0, 0);
			if (unk_0xE59B7F5A03335350(iVar0, 0))
			{
				if (!unk_0x36CEFBE9B745A58D(iParam1))
				{
					if (unk_0x25EF720B1CAB1E23(iParam1, iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_34()//Position - 0x1C47
{
	return unk_0x705BBFE5A8ADE4A9(unk_0xFC1CAE18F3ECBF2D());
}

int func_35(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0x1C57
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (unk_0x357058E632979E65((vParam0.x - vParam1.x)) <= fParam2)
		{
			if (unk_0x357058E632979E65((vParam0.y - vParam1.y)) <= fParam2)
			{
				if (unk_0x357058E632979E65((vParam0.z - vParam1.z)) <= fParam2)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x357058E632979E65((vParam0.x - vParam1.x)) <= fParam2)
	{
		if (unk_0x357058E632979E65((vParam0.y - vParam1.y)) <= fParam2)
		{
			return 1;
		}
	}
	return 0;
}

void func_36(int iParam0, int iParam1)//Position - 0x1CD2
{
	if (unk_0x2DA8CA50A72528FB(iParam0))
	{
		if (unk_0x2DA8CA50A72528FB(iParam1->f_6))
		{
			unk_0x0BBAABB52887CF8C(iParam1->f_6, false);
		}
		unk_0xA2F21B9C95E0F635(0);
		unk_0x5499DFC49A11E05F();
		iParam1->f_6 = iParam0;
		unk_0x0BBAABB52887CF8C(iParam0, true);
	}
}

int func_37(vector3 vParam0, bool bParam1)//Position - 0x1D0D
{
	int iVar0;
	
	iVar0 = unk_0x390CF6C8AD6903B7(vParam0);
	unk_0x3F5F1772D71D5EC4(iVar0, func_28(unk_0x7AF0088ABFA713B6(), 1f, 1f));
	unk_0x0BBAABB52887CF8C(iVar0, bParam1);
	return iVar0;
}

void func_38(int iParam0, char* sParam1, int iParam2)//Position - 0x1D39
{
	unk_0x53D8178763EDCE60(iParam0, sParam1, func_39(iParam2), 1);
}

int func_39(int iParam0)//Position - 0x1D50
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

void func_40(int iParam0, char* sParam1, bool bParam2)//Position - 0x1F44
{
	if (!bParam2)
	{
		if (!unk_0xEAEFBBEC1AEA464B(sParam1))
		{
			if (!unk_0x3362CDE8460ED38B(sParam1, ""))
			{
				func_134(sParam1, 7500, 1);
			}
		}
	}
	iParam0->f_A = unk_0x105601648511CC64();
}

int func_41(int iParam0)//Position - 0x1F7B
{
	if (!unk_0x36CEFBE9B745A58D(iParam0->f_10))
	{
		if (unk_0x9986AD62CA3DE747(iParam0->f_10))
		{
			return 1;
		}
	}
	return 0;
}

int func_42(int iParam0, int iParam1)//Position - 0x1F9F
{
	if (iParam1 != 1 || unk_0x11D38424F1DD3B8F())
	{
		if (unk_0x4B8E3E5901E59EB8())
		{
			return 1;
		}
		if (func_44(iParam0))
		{
			return 1;
		}
	}
	if (iParam1 != 2 || unk_0x11D38424F1DD3B8F())
	{
		if (func_136() && !func_43())
		{
			return 1;
		}
	}
	return 0;
}

int func_43()//Position - 0x1FF7
{
	if (Global_41AB == 1)
	{
		return 1;
	}
	return 0;
}

int func_44(var uParam0)//Position - 0x200E
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x105601648511CC64();
	iVar0 = (iVar1 - uParam0->f_A);
	if (iVar0 < 35)
	{
		return 1;
	}
	return 0;
}

int func_45(var uParam0, int iParam1)//Position - 0x2031
{
	int iVar0;
	
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
		if (func_46(iVar0, uParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_46(int iParam0, var uParam1, int iParam2)//Position - 0x2062
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (unk_0x724D816EA203A79E(uParam1->f_11[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = unk_0x524ABB0435146845(iParam0);
		if (iParam2 > 0)
		{
			if (iVar1 >= iParam2)
			{
				if (iParam2 > 1)
				{
					if (!unk_0x06F5AA4251CA92EB(iParam0, 1))
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
		else if (iVar1 >= iVar0)
		{
			if (iVar0 > 1)
			{
				if (!unk_0x06F5AA4251CA92EB(iParam0, 1))
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
	return 0;
}

void func_47(char* sParam0)//Position - 0x20F6
{
	if (!unk_0xEAEFBBEC1AEA464B(sParam0))
	{
		unk_0xBB5629E7D44054AE(sParam0);
	}
}

int func_48(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17)//Position - 0x210E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7[3];
	bool bVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	var uVar12[3];
	var uVar13[3];
	bool bVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	vector3 vVar19;
	int iVar20;
	int iVar21;
	
	iVar4 = 0;
	uParam0->f_11[0] = uParam1;
	uParam0->f_11[1] = uParam2;
	uParam0->f_11[2] = uParam3;
	uParam0->f_10 = uParam1;
	uVar12[0] = uParam4;
	uVar12[1] = uParam5;
	uVar12[2] = uParam6;
	uVar13[0] = uParam13;
	uVar13[1] = uParam14;
	uVar13[2] = uParam15;
	iVar6 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar7[0] = 0;
	iVar7[1] = 0;
	iVar7[2] = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x36CEFBE9B745A58D(uParam0->f_11[iVar0]))
		{
			iVar3++;
		}
		if (unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
		{
			if (!unk_0xFA30DFD0084E92FE(uParam0->f_D, 29) && !unk_0xFA30DFD0084E92FE(uParam0->f_D, 28))
			{
				if (!unk_0x36CEFBE9B745A58D(uParam0->f_11[iVar0]))
				{
					unk_0x69194304DB679A9C(uParam0->f_11[iVar0], true, -1, 0);
				}
				if (iVar0 == 2)
				{
					unk_0xF0059F27F7BB6680(&(uParam0->f_D), 28);
				}
			}
		}
		else if (!unk_0xFA30DFD0084E92FE(uParam0->f_D, 29) && unk_0xFA30DFD0084E92FE(uParam0->f_D, 28))
		{
			if (!unk_0x36CEFBE9B745A58D(uParam0->f_11[iVar0]))
			{
				unk_0x69194304DB679A9C(uParam0->f_11[iVar0], false, -1, 0);
			}
			if (iVar0 == 2)
			{
				unk_0x7CB6FD92BE491AD9(&(uParam0->f_D), 28);
			}
		}
		iVar0++;
	}
	if (iVar3 == 0)
	{
		return 1;
	}
	if (unk_0xFA30DFD0084E92FE(uParam0->f_D, 26))
	{
		bVar14 = false;
		if (!unk_0x724D816EA203A79E(uParam0->f_15))
		{
			iVar16 = 64;
			iVar16 |= 65536;
			iVar16 |= 2048;
			iVar16 |= 1;
			iVar16 |= 2;
			iVar16 |= 4;
			iVar16 |= 32;
			iVar16 |= 16;
			iVar16 |= 8;
			iVar15 = unk_0x39827CF9BEAB804C(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 50f, 0, iVar16);
			if (unk_0xE59B7F5A03335350(iVar15, 0))
			{
				uParam0->f_15 = iVar15;
			}
		}
		if (unk_0xE59B7F5A03335350(uParam0->f_15, 0))
		{
			if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), unk_0x541C2AEF053615BC(uParam0->f_15, true)) < 400f)
			{
				if (!unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()))
				{
					if (!unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0) || !bParam17)
					{
						if (func_46(uParam0->f_15, uParam0, iVar3))
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (!unk_0x36CEFBE9B745A58D(uParam0->f_11[iVar0]))
								{
									unk_0xDBA0F5674ACCE43C(uParam0->f_11[iVar0], 1f);
									if (unk_0x9488E18994C5C83D(uParam0->f_11[iVar0], func_34()))
									{
										unk_0x57EB4CC8F1928A47(uParam0->f_11[iVar0]);
									}
									if (unk_0xF4FCC3C1048FF2AB(uParam0->f_11[iVar0], -1794415470) == 7 && !func_64(uParam0->f_11[iVar0], uParam0->f_15))
									{
										if (!unk_0x2CDE18D6C89522AD(uParam0->f_11[iVar0]) && !unk_0x69871CAEBDD20966(uParam0->f_11[iVar0]))
										{
											unk_0x2E35C4FA5F0ED22F(uParam0->f_11[iVar0], true);
											unk_0xD179FA0466FA4FE3(uParam0->f_11[iVar0], uParam0->f_15, 60000, iVar0, 1f, 1, 0);
											unk_0x59B9712C1EAB0092(uParam0->f_11[iVar0], iVar0);
										}
									}
								}
								iVar0++;
							}
							return 1;
						}
						else
						{
							bVar14 = true;
						}
					}
					else
					{
						bVar14 = true;
					}
				}
				else
				{
					bVar14 = true;
				}
			}
			else
			{
				bVar14 = true;
			}
		}
		else
		{
			bVar14 = true;
		}
		if (bVar14)
		{
			unk_0x7CB6FD92BE491AD9(&(uParam0->f_D), 26);
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!unk_0x36CEFBE9B745A58D(uParam0->f_11[iVar0]))
				{
					if (!unk_0x8F1FDD0A40DC834A(uParam0->f_11[iVar0]) && !uParam0->f_F)
					{
						unk_0xA4E856A8CD53B8DF(uParam0->f_11[iVar0]);
					}
					if (!unk_0x9488E18994C5C83D(uParam0->f_11[iVar0], func_34()))
					{
						if (func_62(uParam0, uParam0->f_11[iVar0], fParam8, 1))
						{
							unk_0x75E3FA28CC7D5707(uParam0->f_11[iVar0], func_34());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!unk_0xFA30DFD0084E92FE(uParam0->f_D, 26))
	{
		if ((!func_61(uParam0) && unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA())) && !unk_0x724D816EA203A79E(iParam10))
		{
			iVar10 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			if (unk_0xE59B7F5A03335350(iVar10, 0))
			{
				if (!unk_0xFA30DFD0084E92FE(uParam0->f_D, 13))
				{
					if (iParam16 == 4 || iParam16 == 5)
					{
					}
					if (!func_42(uParam0, 2))
					{
						iVar17 = 0;
						iVar18 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							if (!unk_0x36CEFBE9B745A58D(uParam0->f_11[iVar0]))
							{
								iVar17++;
							}
							iVar0++;
						}
						iVar18 = unk_0x491B2241281A03B7(0, iVar17);
						if (!unk_0x36CEFBE9B745A58D(uParam0->f_11[iVar18]))
						{
							func_38(uParam0->f_11[iVar18], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_40(uParam0, "MORE_SEATS", 0);
						unk_0xF0059F27F7BB6680(&(uParam0->f_D), 13);
					}
				}
				bVar9 = true;
			}
		}
		else
		{
			bVar9 = false;
			unk_0x7CB6FD92BE491AD9(&(uParam0->f_D), 13);
			func_47("MORE_SEATS");
		}
		if (!unk_0x724D816EA203A79E(iParam10))
		{
			if ((!unk_0x36CEFBE9B745A58D(uParam0->f_11[0]) || !unk_0x36CEFBE9B745A58D(uParam0->f_11[1])) || !unk_0x36CEFBE9B745A58D(uParam0->f_11[2]))
			{
				if (!unk_0xFA30DFD0084E92FE(uParam0->f_D, 31))
				{
					if (unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()) && !func_42(uParam0, 2))
					{
						iVar10 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
						if (func_60(iVar10, uParam0))
						{
							func_40(uParam0, "CMN_VEHSUIT", 0);
							unk_0xF0059F27F7BB6680(&(uParam0->f_D), 31);
						}
					}
				}
				else if (!unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()))
				{
					unk_0x7CB6FD92BE491AD9(&(uParam0->f_D), 31);
					func_47("CMN_VEHSUIT");
				}
			}
		}
		if (unk_0xE59B7F5A03335350(iParam10, 0))
		{
			if (unk_0x25EF720B1CAB1E23(unk_0xBC25C936A095B5BA(), iParam10))
			{
				if (unk_0x694514BD37EC4E94(0, 75))
				{
					unk_0xF0059F27F7BB6680(&(uParam0->f_D), 21);
				}
			}
			else if (unk_0xFA30DFD0084E92FE(uParam0->f_D, 21))
			{
				unk_0x7CB6FD92BE491AD9(&(uParam0->f_D), 21);
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x724D816EA203A79E(uParam0->f_11[iVar0]))
			{
				if (!unk_0x36CEFBE9B745A58D(uParam0->f_11[iVar0]))
				{
					if (!unk_0x9488E18994C5C83D(uParam0->f_11[iVar0], func_34()))
					{
						unk_0x63ECE17EEAC84602(uParam0->f_11[iVar0], 1);
					}
					else
					{
						unk_0x63ECE17EEAC84602(uParam0->f_11[iVar0], 0);
					}
					if (unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()))
					{
						iVar10 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
						if (unk_0xE59B7F5A03335350(iVar10, 0))
						{
							if (unk_0x9488E18994C5C83D(uParam0->f_11[iVar0], func_34()))
							{
								if (!func_61(uParam0) && unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()))
								{
									if (!func_59(uParam0->f_11[iVar0]))
									{
										unk_0x57EB4CC8F1928A47(uParam0->f_11[iVar0]);
									}
								}
							}
						}
						if (iVar10 != iParam10 && !unk_0x1D403DFADBC2DE3C(iVar10, 0))
						{
							if (unk_0x25EF720B1CAB1E23(uParam0->f_11[iVar0], iVar10))
							{
								if (unk_0x149E9368A11035DE(iVar10) && !unk_0x58F9E0EA914AEF2C(iVar10))
								{
									vVar19 = { unk_0x541C2AEF053615BC(iVar10, true) };
									if (vVar19.z < -1f)
									{
										unk_0x932E201A82D2EDB8(uParam0->f_11[iVar0], iVar10, 64);
									}
								}
							}
						}
					}
					bVar8 = true;
					if (!unk_0x9488E18994C5C83D(uParam0->f_11[iVar0], func_34()))
					{
						if (unk_0xCBBE5AFE2CD2E9B6(uParam0->f_11[iVar0]))
						{
							iVar10 = unk_0x9FE9D386222EEE47(uParam0->f_11[iVar0], 0);
							if (!unk_0x1D403DFADBC2DE3C(iVar10, 0))
							{
								if (unk_0xE59B7F5A03335350(iParam10, 0))
								{
									if (iVar10 != iParam10)
									{
										if (!unk_0x25EF720B1CAB1E23(unk_0xBC25C936A095B5BA(), iVar10))
										{
											if (unk_0x8910237449BB6F79(iVar10) > 5f)
											{
												unk_0x932E201A82D2EDB8(uParam0->f_11[iVar0], iVar10, 4160);
											}
											else
											{
												unk_0x932E201A82D2EDB8(uParam0->f_11[iVar0], iVar10, 64);
											}
											bVar8 = false;
										}
									}
								}
								else
								{
									if (unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()))
									{
										iVar20 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
									}
									if (unk_0xE59B7F5A03335350(iVar20, 0))
									{
										if (iVar10 != iVar20)
										{
											if (unk_0x8910237449BB6F79(iVar10) > 5f)
											{
												unk_0x932E201A82D2EDB8(uParam0->f_11[iVar0], iVar10, 4160);
											}
											else
											{
												unk_0x932E201A82D2EDB8(uParam0->f_11[iVar0], iVar10, 64);
											}
											bVar8 = false;
										}
									}
								}
							}
						}
					}
					if (unk_0x9488E18994C5C83D(uParam0->f_11[iVar0], func_34()))
					{
						iVar21 = unk_0xD20EBB97FE8799ED(unk_0xBC25C936A095B5BA());
						if (unk_0x724D816EA203A79E(iVar21))
						{
							if (func_46(iVar21, uParam0, 0))
							{
								if (func_58(iVar0, uParam0) || !unk_0xFA30DFD0084E92FE(uParam0->f_D, 27))
								{
									unk_0x59B9712C1EAB0092(uParam0->f_11[iVar0], iVar0);
									func_57(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										unk_0xF0059F27F7BB6680(&(uParam0->f_D), 27);
									}
								}
							}
							else if (!func_58(iVar0, uParam0))
							{
								if (unk_0x6F79ECA8C83E4357(iVar21) == joaat("sentinel2"))
								{
									unk_0x59B9712C1EAB0092(uParam0->f_11[iVar0], 4);
								}
								else
								{
									unk_0x59B9712C1EAB0092(uParam0->f_11[iVar0], 2);
								}
								func_56(iVar0, uParam0);
							}
						}
					}
					if ((!unk_0x9488E18994C5C83D(uParam0->f_11[iVar0], func_34()) && !func_55(uParam0->f_11[iVar0], iParam10)) && !func_54(uParam0->f_11[iVar0], iParam10))
					{
						if (func_62(uParam0, uParam0->f_11[iVar0], fParam8, bParam11))
						{
							if (!unk_0x9488E18994C5C83D(uParam0->f_11[iVar0], func_34()))
							{
								if (((!unk_0x2CDE18D6C89522AD(uParam0->f_11[iVar0]) && !unk_0x69871CAEBDD20966(uParam0->f_11[iVar0])) && !unk_0xBF3C2E756849EEF4(uParam0->f_11[iVar0])) && !unk_0x8F1FDD0A40DC834A(uParam0->f_11[iVar0]))
								{
									iVar11 = unk_0xF4FCC3C1048FF2AB(uParam0->f_11[iVar0], -1794415470);
									if (iVar11 == 7)
									{
										unk_0xA4E856A8CD53B8DF(uParam0->f_11[iVar0]);
									}
									unk_0x75E3FA28CC7D5707(uParam0->f_11[iVar0], func_34());
									bVar8 = false;
								}
							}
						}
						if (bVar8)
						{
							if (!unk_0x2DA8CA50A72528FB(uParam0->f_1[iVar0]))
							{
								uParam0->f_B = unk_0x105601648511CC64();
								uParam0->f_1[iVar0] = func_26(uParam0->f_11[iVar0], 0, 0);
								unk_0x2E9308F22ABD4DF5(uParam0->f_1[iVar0], 2);
								if (bParam9)
								{
									func_36(uParam0->f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (unk_0x2DA8CA50A72528FB(uParam0->f_1[iVar0]))
					{
						if (((func_32(uParam0->f_11[iVar0], 1) || func_55(uParam0->f_11[iVar0], iParam10)) || iParam12) || (unk_0xE59B7F5A03335350(iParam10, 0) && !unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iParam10, 0)))
						{
							if (unk_0x2DA8CA50A72528FB(uParam0->f_1[iVar0]))
							{
								unk_0x07B8ECB35A4ED3AC(&(uParam0->f_1[iVar0]));
								func_47(uVar12[iVar0]);
							}
						}
						else
						{
							if (bParam9)
							{
								func_36(uParam0->f_1[iVar0], uParam0);
							}
							iVar6 = 0;
						}
					}
					else if (unk_0xE59B7F5A03335350(iParam10, 0))
					{
						if (!unk_0x25EF720B1CAB1E23(uParam0->f_11[iVar0], iParam10))
						{
							if ((unk_0xE642C1AC73CE364E(uParam0->f_11[iVar0], iParam10, 20f, 20f, 5f, 0, 1, 0) && !unk_0xFA30DFD0084E92FE(uParam0->f_D, 11)) && !((bParam17 && unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0)) && !unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iParam10, 0)))
							{
								if (unk_0xCBBE5AFE2CD2E9B6(uParam0->f_11[iVar0]))
								{
									if (!unk_0x62F3A07C43FFB568(uParam0->f_11[iVar0], iParam10, 0))
									{
										if (!func_32(uParam0->f_11[iVar0], 1))
										{
											if (func_31(uParam0->f_11[iVar0]))
											{
												iVar11 = unk_0xF4FCC3C1048FF2AB(uParam0->f_11[iVar0], 451360105);
												if (iVar11 == 7)
												{
													unk_0xA3981DED4FC2E56E(uParam0->f_11[iVar0], 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (unk_0x9488E18994C5C83D(uParam0->f_11[iVar0], func_34()))
									{
										if ((((!unk_0xBF3C2E756849EEF4(uParam0->f_11[iVar0]) && !unk_0x2CDE18D6C89522AD(uParam0->f_11[iVar0])) && !unk_0x69871CAEBDD20966(uParam0->f_11[iVar0])) && !unk_0x8F1FDD0A40DC834A(uParam0->f_11[iVar0])) && !unk_0x7544D2465B934445(iParam10))
										{
											unk_0x57EB4CC8F1928A47(uParam0->f_11[iVar0]);
										}
									}
									iVar11 = unk_0xF4FCC3C1048FF2AB(uParam0->f_11[iVar0], -1794415470);
									if (iVar11 == 7 && !func_64(uParam0->f_11[iVar0], iParam10))
									{
										if (((((!unk_0xBF3C2E756849EEF4(uParam0->f_11[iVar0]) && !unk_0xBF3C2E756849EEF4(unk_0xBC25C936A095B5BA())) && !func_53(uParam0->f_11[iVar0], 2f)) && !unk_0x2CDE18D6C89522AD(uParam0->f_11[iVar0])) && !unk_0x69871CAEBDD20966(uParam0->f_11[iVar0])) && !unk_0x7544D2465B934445(iParam10))
										{
											unk_0x2E35C4FA5F0ED22F(uParam0->f_11[iVar0], true);
											if (unk_0xFA30DFD0084E92FE(uParam0->f_D, 10))
											{
												unk_0xDBA0F5674ACCE43C(uParam0->f_11[iVar0], 1f);
											}
											unk_0xD179FA0466FA4FE3(uParam0->f_11[iVar0], iParam10, 60000, iVar0, 2f, 1, 0);
											unk_0x2FEB3A9B7C91A02D(uParam0->f_11[iVar0], 0);
										}
									}
									else if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iParam10, 0))
									{
										uParam0->f_1[iVar0] = func_26(uParam0->f_11[iVar0], 0, 0);
										unk_0x2E9308F22ABD4DF5(uParam0->f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!unk_0x9488E18994C5C83D(uParam0->f_11[iVar0], func_34()))
							{
								if (func_62(uParam0, uParam0->f_11[iVar0], fParam8, bParam11))
								{
									if (!unk_0x2CDE18D6C89522AD(uParam0->f_11[iVar0]) && !unk_0x69871CAEBDD20966(uParam0->f_11[iVar0]))
									{
										iVar11 = unk_0xF4FCC3C1048FF2AB(uParam0->f_11[iVar0], -1794415470);
										if (iVar11 == 7)
										{
											unk_0xA4E856A8CD53B8DF(uParam0->f_11[iVar0]);
										}
										unk_0x2E35C4FA5F0ED22F(uParam0->f_11[iVar0], false);
										unk_0x75E3FA28CC7D5707(uParam0->f_11[iVar0], func_34());
									}
								}
							}
						}
						else if (unk_0x25EF720B1CAB1E23(unk_0xBC25C936A095B5BA(), iParam10))
						{
							if (!unk_0x9488E18994C5C83D(uParam0->f_11[iVar0], func_34()))
							{
								if (!unk_0xFA30DFD0084E92FE(uParam0->f_D, 21))
								{
									unk_0x75E3FA28CC7D5707(uParam0->f_11[iVar0], func_34());
								}
							}
							else if (unk_0xFA30DFD0084E92FE(uParam0->f_D, 21))
							{
								unk_0x57EB4CC8F1928A47(uParam0->f_11[iVar0]);
								unk_0xF0059F27F7BB6680(&(uParam0->f_D), 21);
							}
						}
						else if (unk_0x9488E18994C5C83D(uParam0->f_11[iVar0], func_34()) && !unk_0x7544D2465B934445(iParam10))
						{
							unk_0x57EB4CC8F1928A47(uParam0->f_11[iVar0]);
						}
					}
				}
				else if (unk_0x2DA8CA50A72528FB(uParam0->f_1[iVar0]))
				{
					unk_0x07B8ECB35A4ED3AC(&(uParam0->f_1[iVar0]));
					func_47(uVar12[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x2DA8CA50A72528FB(uParam0->f_1[iVar0]))
			{
				iVar7[iVar0] = 1;
				iVar1++;
			}
			iVar0++;
		}
		if (!func_42(uParam0, 2))
		{
			if (iVar1 > 0)
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (iVar7[iVar0])
					{
						if (!unk_0x36CEFBE9B745A58D(uParam0->f_11[iVar0]))
						{
							if (func_59(uParam0->f_11[iVar0]) || unk_0xE642C1AC73CE364E(uParam0->f_11[iVar0], unk_0xBC25C936A095B5BA(), uParam0->f_8, uParam0->f_8, uParam0->f_8, 0, 1, 0))
							{
								iVar1 = (iVar1 - 1);
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!unk_0x36CEFBE9B745A58D(uParam0->f_11[iVar0]))
					{
						if (!unk_0xE642C1AC73CE364E(uParam0->f_11[iVar0], unk_0xBC25C936A095B5BA(), (uParam0->f_8 * 0.85f), (uParam0->f_8 * 0.85f), uParam0->f_8, 0, 1, 0) && !func_59(uParam0->f_11[iVar0]))
						{
						}
					}
					iVar0++;
				}
			}
			iVar5 = unk_0x105601648511CC64();
			if ((iVar5 - uParam0->f_B) > 1500 || iVar3 == 1)
			{
				if (iVar1 > 0)
				{
					if (uParam0->f_C < iVar1)
					{
						if ((iVar1 == iVar3 || (iVar2 + iVar1) == iVar3) && iVar3 > 1)
						{
							if (!unk_0xFA30DFD0084E92FE(uParam0->f_D, 5))
							{
								func_40(uParam0, sParam7, 0);
								unk_0xF0059F27F7BB6680(&(uParam0->f_D), 5);
								uParam0->f_C = iVar1;
							}
							else
							{
								uParam0->f_C = iVar1;
							}
						}
						else
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (iVar7[iVar0])
								{
									if (!func_52(iVar0, uParam0))
									{
										if (!unk_0xEAEFBBEC1AEA464B(uVar13[iVar0]))
										{
											if (!unk_0x3362CDE8460ED38B(uVar13[iVar0], ""))
											{
												func_50(uParam0, uVar12[iVar0], uVar13[iVar0], 0);
												func_49(iVar0, uParam0);
												uParam0->f_C = iVar1;
											}
										}
										if (!func_52(iVar0, uParam0))
										{
											func_40(uParam0, uVar12[iVar0], 0);
											func_49(iVar0, uParam0);
											uParam0->f_C = iVar1;
										}
									}
									else
									{
										uParam0->f_C = iVar1;
									}
								}
								iVar0++;
							}
						}
					}
				}
				else
				{
					uParam0->f_C = 0;
				}
			}
		}
		unk_0x7CB6FD92BE491AD9(&(uParam0->f_D), 10);
		if (iVar6 && !bVar9)
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (unk_0x2DA8CA50A72528FB(uParam0->f_1[iVar0]))
				{
					unk_0x07B8ECB35A4ED3AC(&(uParam0->f_1[iVar0]));
					func_47(uVar12[iVar0]);
				}
				iVar0++;
			}
			func_47("MORE_SEATS");
			return 1;
		}
	}
	return 0;
}

void func_49(int iParam0, var uParam1)//Position - 0x317E
{
	switch (iParam0)
	{
		case 0:
			unk_0xF0059F27F7BB6680(&(uParam1->f_D), 14);
			break;
		
		case 1:
			unk_0xF0059F27F7BB6680(&(uParam1->f_D), 15);
			break;
		
		case 2:
			unk_0xF0059F27F7BB6680(&(uParam1->f_D), 16);
			break;
	}
}

void func_50(var uParam0, char* sParam1, char* sParam2, bool bParam3)//Position - 0x31C6
{
	if (!bParam3)
	{
		if (!unk_0xEAEFBBEC1AEA464B(sParam1))
		{
			if (!unk_0x3362CDE8460ED38B(sParam1, ""))
			{
				func_51(sParam1, sParam2, 7500, 1);
			}
		}
	}
	uParam0->f_A = unk_0x105601648511CC64();
}

void func_51(char* sParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x31FF
{
	iParam3 = iParam3;
	unk_0x3714DE83381EADC2(sParam0);
	unk_0xC9C304D0AABE1335(sParam1);
	unk_0x41D8F63F629E76BE(iParam2, 1);
}

int func_52(int iParam0, var uParam1)//Position - 0x321E
{
	switch (iParam0)
	{
		case 0:
			return unk_0xFA30DFD0084E92FE(uParam1->f_D, 14);
		
		case 1:
			return unk_0xFA30DFD0084E92FE(uParam1->f_D, 15);
		
		case 2:
			return unk_0xFA30DFD0084E92FE(uParam1->f_D, 16);
		
		default:
	}
	return 0;
}

int func_53(int iParam0, float fParam1)//Position - 0x3267
{
	int iVar0;
	
	if (unk_0x5237AF95232D78C5(iParam0, 0))
	{
		iVar0 = unk_0x9FE9D386222EEE47(iParam0, 0);
		if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
		{
			if (unk_0x8910237449BB6F79(iVar0) > fParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_54(int iParam0, int iParam1)//Position - 0x329E
{
	int iVar0;
	
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (!unk_0x9488E18994C5C83D(iParam0, func_34()))
		{
			iVar0 = unk_0x25480ACDBB6DB8F1(iParam0);
			if (unk_0xE59B7F5A03335350(iParam1, 0))
			{
				if (unk_0xE642C1AC73CE364E(iParam0, iParam1, (20f + 10f), (20f + 10f), 10f, 0, 1, 0))
				{
					if (iVar0 == iParam1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_55(int iParam0, int iParam1)//Position - 0x3305
{
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (unk_0x724D816EA203A79E(iParam1))
		{
			if (unk_0xE59B7F5A03335350(iParam1, 0))
			{
				if (unk_0x25EF720B1CAB1E23(iParam0, iParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_56(int iParam0, var uParam1)//Position - 0x333A
{
	switch (iParam0)
	{
		case 0:
			unk_0xF0059F27F7BB6680(&(uParam1->f_D), 17);
			break;
		
		case 1:
			unk_0xF0059F27F7BB6680(&(uParam1->f_D), 18);
			break;
		
		case 2:
			unk_0xF0059F27F7BB6680(&(uParam1->f_D), 19);
			break;
	}
}

void func_57(int iParam0, var uParam1)//Position - 0x3382
{
	switch (iParam0)
	{
		case 0:
			unk_0x7CB6FD92BE491AD9(&(uParam1->f_D), 17);
			break;
		
		case 1:
			unk_0x7CB6FD92BE491AD9(&(uParam1->f_D), 18);
			break;
		
		case 2:
			unk_0x7CB6FD92BE491AD9(&(uParam1->f_D), 19);
			break;
	}
}

int func_58(int iParam0, var uParam1)//Position - 0x33CA
{
	switch (iParam0)
	{
		case 0:
			return unk_0xFA30DFD0084E92FE(uParam1->f_D, 17);
		
		case 1:
			return unk_0xFA30DFD0084E92FE(uParam1->f_D, 18);
		
		case 2:
			return unk_0xFA30DFD0084E92FE(uParam1->f_D, 19);
		
		default:
	}
	return 0;
}

int func_59(int iParam0)//Position - 0x3413
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		iVar0 = unk_0xD20EBB97FE8799ED(unk_0xBC25C936A095B5BA());
		if (unk_0xE59B7F5A03335350(iVar0, 0))
		{
			if (!unk_0x36CEFBE9B745A58D(iParam0))
			{
				iVar1 = unk_0xD20EBB97FE8799ED(iParam0);
				if (unk_0xE59B7F5A03335350(iVar1, 0))
				{
					if (iVar0 == iVar1)
					{
						if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iParam0, 20f, 20f, 20f, 0, 1, 0) && unk_0xE642C1AC73CE364E(iParam0, iVar1, 20f, 20f, 20f, 0, 1, 0))
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

int func_60(int iParam0, var uParam1)//Position - 0x34A0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		if (unk_0x6F79ECA8C83E4357(iParam0) == joaat("bus") || unk_0x6F79ECA8C83E4357(iParam0) == joaat("coach"))
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (!unk_0x36CEFBE9B745A58D(uParam1->f_11[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			iVar3 = unk_0x3187EF5798B5D209(iParam0, 0, 0);
			if (!unk_0x36CEFBE9B745A58D(iVar3))
			{
				if ((iVar3 == uParam1->f_11[0] || iVar3 == uParam1->f_11[1]) || iVar3 == uParam1->f_11[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar4 = unk_0x3187EF5798B5D209(iParam0, 1, 0);
			if (!unk_0x36CEFBE9B745A58D(iVar4))
			{
				if ((iVar4 == uParam1->f_11[0] || iVar4 == uParam1->f_11[1]) || iVar4 == uParam1->f_11[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar5 = unk_0x3187EF5798B5D209(iParam0, 2, 0);
			if (!unk_0x36CEFBE9B745A58D(iVar5))
			{
				if ((iVar5 == uParam1->f_11[0] || iVar5 == uParam1->f_11[1]) || iVar5 == uParam1->f_11[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			if (iVar1 < iVar0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_61(var uParam0)//Position - 0x3600
{
	int iVar0;
	
	if (unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()))
	{
		iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
		if (func_46(iVar0, uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_62(var uParam0, int iParam1, float fParam2, bool bParam3)//Position - 0x362F
{
	int iVar0;
	
	if (!unk_0x36CEFBE9B745A58D(iParam1))
	{
		if (unk_0xCBBE5AFE2CD2E9B6(iParam1))
		{
			iVar0 = unk_0x9FE9D386222EEE47(iParam1, 0);
			if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
			{
				if (unk_0xE59B7F5A03335350(iVar0, 0))
				{
					if (unk_0x25EF720B1CAB1E23(unk_0xBC25C936A095B5BA(), iVar0))
					{
						if (func_61(uParam0))
						{
							return 1;
						}
					}
					else if (bParam3)
					{
						return 1;
					}
				}
				else if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
		else if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
		{
			if (!bParam3)
			{
				iVar0 = unk_0xD20EBB97FE8799ED(unk_0xBC25C936A095B5BA());
				if (unk_0x724D816EA203A79E(iVar0))
				{
					if (func_46(iVar0, uParam0, 0))
					{
						if (unk_0xE59B7F5A03335350(iVar0, 0))
						{
							if (func_63(iVar0))
							{
								return 1;
							}
						}
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
		}
	}
	return 0;
}

int func_63(int iParam0)//Position - 0x370D
{
	float fVar0;
	
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		fVar0 = unk_0x8910237449BB6F79(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_64(int iParam0, int iParam1)//Position - 0x3745
{
	int iVar0;
	
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (unk_0xE59B7F5A03335350(iParam1, 0))
		{
			iVar0 = unk_0xD20EBB97FE8799ED(iParam0);
			if (iVar0 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_65()//Position - 0x3775
{
	int iVar0;
	int iVar1;
	
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
	{
		iVar0 = unk_0x25480ACDBB6DB8F1(unk_0xBC25C936A095B5BA());
		if (unk_0xE59B7F5A03335350(iVar0, 0))
		{
			iVar1 = unk_0x3187EF5798B5D209(iVar0, 0, 0);
			if (!unk_0x36CEFBE9B745A58D(iVar1))
			{
				if (iVar1 != unk_0xBC25C936A095B5BA())
				{
					if (unk_0x5CAE759AE8219D20(iVar1))
					{
						if (!unk_0x1A6AA4082E241660(iVar1, unk_0xBC25C936A095B5BA()))
						{
							unk_0x56F2E1B5599188FA(iVar1, unk_0xBC25C936A095B5BA(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_66(var uParam0)//Position - 0x37E2
{
	int iVar0;
	
	if (!unk_0xFA30DFD0084E92FE(uParam0->f_D, 25))
	{
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 32, false);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x724D816EA203A79E(uParam0->f_11[iVar0]))
			{
				if (!unk_0x36CEFBE9B745A58D(uParam0->f_11[iVar0]))
				{
					unk_0xC8FD3EBBB90E8D7F(uParam0->f_11[iVar0], 32, false);
					unk_0xC8FD3EBBB90E8D7F(uParam0->f_11[iVar0], 305, true);
					unk_0xC8FD3EBBB90E8D7F(uParam0->f_11[iVar0], 268, true);
					unk_0x2FEB3A9B7C91A02D(uParam0->f_11[iVar0], 0);
				}
			}
			iVar0++;
		}
		unk_0xF0059F27F7BB6680(&(uParam0->f_D), 25);
	}
}

void func_67(var uParam0)//Position - 0x3885
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x724D816EA203A79E(uParam0->f_11[iVar0]))
		{
			if (!unk_0x36CEFBE9B745A58D(uParam0->f_11[iVar0]))
			{
				if (unk_0xCBBE5AFE2CD2E9B6(uParam0->f_11[iVar0]))
				{
					unk_0x8941EA87BBF38C6F(uParam0->f_11[iVar0], 0);
					unk_0xF0B851960DDCE3D8(uParam0->f_11[iVar0], 0);
				}
			}
		}
		iVar0++;
	}
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			if (unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()))
			{
				unk_0x8941EA87BBF38C6F(unk_0xBC25C936A095B5BA(), 0);
				unk_0xF0B851960DDCE3D8(unk_0xBC25C936A095B5BA(), 0);
			}
		}
	}
}

var func_68()//Position - 0x391B
{
	var uVar0;
	
	return uVar0;
}

Vector3 func_69()//Position - 0x3925
{
	return 0f, 0f, 2f;
}

int func_70(var uParam0)//Position - 0x3930
{
	float fVar0;
	
	if (!uParam0->f_6)
	{
		fVar0 = func_73(unk_0xBC25C936A095B5BA(), *uParam0, 0);
		if (!iLocal_243)
		{
			if (fVar0 < 400f)
			{
				unk_0xEB233A3B7635D2AC();
				func_134("FLY_DROP", 7500, 1);
				unk_0x284F2ACE6839D3C0("PLANES", false, -1);
				iLocal_243 = 1;
			}
		}
		if (!iLocal_244)
		{
			if (fVar0 < 300f)
			{
				unk_0x7456702622C62EA0(1);
				func_72("LEAFLET", -1);
				iLocal_244 = 1;
				iLocal_241 = 1;
			}
		}
		if (fVar0 < uParam0->f_3)
		{
			iLocal_245 = 1;
			if (bLocal_242)
			{
				if (uParam0->f_7 == -1)
				{
					uParam0->f_7 = unk_0x105601648511CC64();
				}
				else if ((unk_0x105601648511CC64() - uParam0->f_7) > 1000)
				{
					uParam0->f_6 = 1;
					if (unk_0x2DA8CA50A72528FB(uParam0->f_4))
					{
						unk_0x07B8ECB35A4ED3AC(&(uParam0->f_4));
					}
					if (unk_0x2DA8CA50A72528FB(uParam0->f_5))
					{
						unk_0x07B8ECB35A4ED3AC(&(uParam0->f_5));
					}
					unk_0xC4BA30B532FE260F(-1, "CHECKPOINT_NORMAL", "HUD_MINI_GAME_SOUNDSET", false);
					return 1;
				}
			}
		}
		if (!uParam0->f_6)
		{
			if (!unk_0x2DA8CA50A72528FB(uParam0->f_4))
			{
				uParam0->f_4 = func_37(*uParam0, 0);
				unk_0x3F5F1772D71D5EC4(uParam0->f_4, 0.75f);
				unk_0x222805B89367761E(uParam0->f_4, false);
			}
			if (!unk_0x2DA8CA50A72528FB(uParam0->f_5))
			{
				uParam0->f_5 = func_71(*uParam0, uParam0->f_3, 0);
			}
		}
	}
	return 0;
}

int func_71(vector3 vParam0, float fParam1, bool bParam2)//Position - 0x3A6E
{
	int iVar0;
	
	iVar0 = unk_0x489E7A92D55C10F8(vParam0, fParam1);
	unk_0x0D5352939CC40C16(iVar0, 5);
	unk_0x7781946F1FC054FA(iVar0, 64);
	unk_0x4909873A6873A6C3(iVar0, bParam2);
	if (!bParam2)
	{
		unk_0x2E9308F22ABD4DF5(iVar0, 4);
	}
	return iVar0;
}

void func_72(char* sParam0, int iParam1)//Position - 0x3AA8
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, true, iParam1);
}

float func_73(int iParam0, vector3 vParam1, bool bParam2)//Position - 0x3ABF
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

void func_74(vector3 vParam0, float fParam1, int iParam2, int iParam3)//Position - 0x3AF9
{
	vector3 vVar0;
	var uVar1;
	
	if (unk_0x724D816EA203A79E(Global_17646.f_4))
	{
		if (unk_0xE59B7F5A03335350(Global_17646.f_4, 0))
		{
			if (func_126(24) != Global_17646.f_4)
			{
				if (iParam2 == 1)
				{
					if (func_123(unk_0x541C2AEF053615BC(Global_17646.f_4, true), iParam3, &vVar0, &uVar1))
					{
						vParam0 = { vVar0 };
						fParam1 = uVar1;
					}
				}
				func_75(Global_17646.f_4, vParam0, fParam1, 24, 0);
			}
		}
	}
}

void func_75(int iParam0, vector3 vParam1, float fParam2, int iParam3, bool bParam4)//Position - 0x3B74
{
	struct<60> Var0;
	
	if (unk_0x724D816EA203A79E(iParam0) && unk_0xE59B7F5A03335350(iParam0, 0))
	{
		if (iParam3 != 24 && iParam3 != 25)
		{
			return;
		}
		if (iParam3 == 24)
		{
			if (unk_0x724D816EA203A79E(Global_110A8.f_1E4[25]) && unk_0xE59B7F5A03335350(Global_110A8.f_1E4[25], 0))
			{
				if (Global_110A8.f_1E4[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam4)
		{
			if ((unk_0x10A01B0B02B273EF(iParam0) || unk_0x6F79ECA8C83E4357(iParam0) == joaat("bus")) || unk_0x6F79ECA8C83E4357(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_122(iParam3);
		Var0.f_9 = 49;
		Var0.f_3B = 2;
		func_117(iParam0, &Var0);
		if (func_116(vParam1, 0f, 0f, 0f, 0))
		{
			vParam1 = { unk_0x541C2AEF053615BC(iParam0, true) };
			fParam2 = unk_0x349C94FFF43E2979(iParam0);
		}
		if (iParam3 == 24)
		{
			if (unk_0x56BEECB328B6D29D(unk_0x1377080E9B0BD993()) != joaat("vehicle_gen_controller"))
			{
				Global_11484 = unk_0x56BEECB328B6D29D(unk_0x1377080E9B0BD993());
			}
		}
		func_109(iParam3, &Var0, vParam1, fParam2, func_115(iParam0));
		func_76(iParam3, iParam0, 0);
	}
}

void func_76(int iParam0, int iParam1, int iParam2)//Position - 0x3C9D
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_106(&(Global_110A8.f_22B[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0xFA30DFD0084E92FE(Global_110A8.f_22B[0 /*21*/].f_9, 12) && !unk_0xFA30DFD0084E92FE(Global_110A8.f_22B[0 /*21*/].f_9, 10))
	{
		if (Global_110A8.f_22B[0 /*21*/].f_4 != unk_0x6F79ECA8C83E4357(iParam1))
		{
			return;
		}
	}
	if (Global_11433 != -1 && Global_11433 != iParam0)
	{
		return;
	}
	if (unk_0x724D816EA203A79E(iParam1))
	{
		if (unk_0xE59B7F5A03335350(iParam1, 0))
		{
			if (!unk_0x5CAE759AE8219D20(iParam1))
			{
				unk_0x77815D3407C6700D(iParam1, true, 1);
			}
			if (iParam0 == 24)
			{
				Global_19B04.f_7F22.f_12C1 = func_95();
			}
			if (iParam1 != Global_110A8.f_8B[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_126(iParam0);
					if ((unk_0x724D816EA203A79E(iVar0) && unk_0xE59B7F5A03335350(iVar0, 0)) && iParam1 != iVar0)
					{
						func_77(iVar0, 145);
					}
				}
				Global_11432 = iParam1;
				Global_11433 = iParam0;
				Global_11434 = iParam2;
			}
		}
	}
}

void func_77(int iParam0, int iParam1)//Position - 0x3DBA
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_78(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0x3187EF5798B5D209(iParam0, -1, 0);
		if (!unk_0x724D816EA203A79E(iVar0))
		{
			iVar0 = unk_0xE293D7F16E1815E8(iParam0, -1);
		}
		if (unk_0x724D816EA203A79E(iVar0) && !unk_0x36CEFBE9B745A58D(iVar0))
		{
			if (unk_0x6F79ECA8C83E4357(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x6F79ECA8C83E4357(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x6F79ECA8C83E4357(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_19B04.f_932.f_21B.f_10CD;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x6F79ECA8C83E4357(iParam0) == Global_19B04.f_7F22.f_13AE[iVar1 /*157*/][iVar2 /*78*/].f_42)
			{
				if (!unk_0xF1734B55490E9045(&(Global_19B04.f_7F22.f_13AE[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x3362CDE8460ED38B(unk_0x2232934AD664DD49(iParam0), &(Global_19B04.f_7F22.f_13AE[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_19B04.f_7F22.f_13AE[iVar1 /*157*/][iVar2 /*78*/].f_42 = 0;
						Global_19B04.f_7F22.f_15D8[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (unk_0x6F79ECA8C83E4357(iParam0) == Global_19B04.f_7F22.f_15E0[iVar1 /*78*/].f_42)
		{
			if (!unk_0xF1734B55490E9045(&(Global_19B04.f_7F22.f_15E0[iVar1 /*78*/].f_1)))
			{
				if (unk_0x3362CDE8460ED38B(unk_0x2232934AD664DD49(iParam0), &(Global_19B04.f_7F22.f_15E0[iVar1 /*78*/].f_1)))
				{
					Global_19B04.f_7F22.f_15E0[iVar1 /*78*/].f_42 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_19B04.f_7F22.f_15D6 = iParam1;
	Global_11431 = iParam0;
	Global_19B04.f_7F22.f_15D4 = 1;
	func_117(iParam0, &(Global_19B04.f_7F22.f_1586));
}

int func_78(int iParam0)//Position - 0x3FBC
{
	if ((((((((((!unk_0x724D816EA203A79E(iParam0) || !unk_0xE59B7F5A03335350(iParam0, 0)) || func_93(iParam0, 0, 0)) || func_93(iParam0, 1, 0)) || func_93(iParam0, 2, 0)) || func_115(iParam0) != 145) || func_92(iParam0)) || func_91(iParam0)) || func_90(iParam0)) || func_89(iParam0)) || !func_79(unk_0x6F79ECA8C83E4357(iParam0)))
	{
		if (func_91(iParam0))
		{
		}
		if (func_91(iParam0))
		{
		}
		if (func_93(iParam0, 0, 0))
		{
		}
		if (func_93(iParam0, 1, 0))
		{
		}
		if (func_93(iParam0, 2, 0))
		{
		}
		if (func_115(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_79(int iParam0)//Position - 0x409A
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_80(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0xE7B3A320107C1379(iParam0) || unk_0xA19D269B4B5A1532(iParam0)) || unk_0x8C1A6E7D5F410F4A(iParam0)) || unk_0xFF2234981505F7F4(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case 1938952078:
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_80(int iParam0, bool bParam1)//Position - 0x424B
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x6067F058A4B0729F(iParam0))
	{
		return 0;
	}
	if ((((((iParam0 == joaat("dominator2") && !unk_0x7AF0088ABFA713B6()) || (iParam0 == joaat("buffalo3") && !unk_0x7AF0088ABFA713B6())) || (iParam0 == joaat("gauntlet2") && !unk_0x7AF0088ABFA713B6())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x7AF0088ABFA713B6())) || iParam0 == joaat("blista3"))
	{
		if (!func_88())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0xDF84CF7530FA6525())
		{
			if (unk_0x62A638D88F7B7D88(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0xD90F58A58682ED2F(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_87() && !func_86()) && !func_85()) && !func_84()) && !func_88())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xF49912B78E2591B6() || unk_0x8ACB0C3FACC09467()) || unk_0xF7E138CFA19B55E7())
		{
		}
		else if (!func_85())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_83(iParam0))
		{
			return 0;
		}
	}
	if (!func_81(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_81(int iParam0)//Position - 0x43D9
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_82())
	{
		return 1;
	}
	unk_0xC4F4FCDFF2D3ABE9(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0xD541643C038E7321(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_82()//Position - 0x44A5
{
	if (unk_0x8ACB0C3FACC09467())
	{
		return unk_0xC9D803F7D7E10861();
	}
	return 0;
}

int func_83(int iParam0)//Position - 0x44BC
{
	int iVar0;
	int iVar1;
	
	if (Global_262135)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0xB99C193A32DE341D();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_40001.f_1766 && !Global_40001.f_300B) && iVar1 < Global_40001.f_300C)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_40001.f_351D && iVar1 < Global_40001.f_3529)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_40001.f_3519 && iVar1 < Global_40001.f_3525)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_40001.f_351A && iVar1 < Global_40001.f_3526)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_40001.f_351B && iVar1 < Global_40001.f_3527)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_40001.f_351C && iVar1 < Global_40001.f_3528)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_40001.f_351E && iVar1 < Global_40001.f_352A)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_40001.f_351F && iVar1 < Global_40001.f_3522)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_40001.f_3520 && iVar1 < Global_40001.f_3523)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_40001.f_3521 && iVar1 < Global_40001.f_3524)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_40001.f_3F64 && iVar1 < Global_40001.f_3F41)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_40001.f_3F5F && iVar1 < Global_40001.f_3F3C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_40001.f_3F63 && iVar1 < Global_40001.f_3F40)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_40001.f_3F62 && iVar1 < Global_40001.f_3F3F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_40001.f_3F5C && iVar1 < Global_40001.f_3F39)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_40001.f_3F5D && iVar1 < Global_40001.f_3F3A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_40001.f_3F60 && iVar1 < Global_40001.f_3F3D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_40001.f_3F61 && iVar1 < Global_40001.f_3F3E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_40001.f_3F5E && iVar1 < Global_40001.f_3F3B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_40001.f_3F66 && iVar1 < Global_40001.f_3F43)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_40001.f_3F67 && iVar1 < Global_40001.f_3F44)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_40001.f_3F5B && iVar1 < Global_40001.f_3F38)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_40001.f_3F5A && iVar1 < Global_40001.f_3F37)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_40001.f_3F59 && iVar1 < Global_40001.f_3F36)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_40001.f_3F65 && iVar1 < Global_40001.f_3F42)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_40001.f_3F68 && iVar1 < Global_40001.f_3F45)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_40001.f_3F69 && iVar1 < Global_40001.f_3F46)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_40001.f_3F6A && iVar1 < Global_40001.f_3F47)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_40001.f_3F6B && iVar1 < Global_40001.f_3F48)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_40001.f_3FFC && iVar1 < Global_40001.f_4012)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_40001.f_3FFD && iVar1 < Global_40001.f_4013)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_40001.f_3FFE && iVar1 < Global_40001.f_4014)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_40001.f_3FFF && iVar1 < Global_40001.f_4015)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_40001.f_4000 && iVar1 < Global_40001.f_4016)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_40001.f_4001 && iVar1 < Global_40001.f_4017)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_40001.f_4003 && iVar1 < Global_40001.f_4018)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_40001.f_4004 && iVar1 < Global_40001.f_4019)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_40001.f_4005 && iVar1 < Global_40001.f_401A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_40001.f_4006 && iVar1 < Global_40001.f_401B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_40001.f_4007 && iVar1 < Global_40001.f_401C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_40001.f_4008 && iVar1 < Global_40001.f_401D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_40001.f_4009 && iVar1 < Global_40001.f_401E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_40001.f_400F && iVar1 < Global_40001.f_4025)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_40001.f_400C && iVar1 < Global_40001.f_4021)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_40001.f_400D && iVar1 < Global_40001.f_4022)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_40001.f_400E && iVar1 < Global_40001.f_4023)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_40001.f_4002 && iVar1 < Global_40001.f_4024)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_40001.f_4010 && iVar1 < Global_40001.f_4026)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_40001.f_400A && iVar1 < Global_40001.f_401F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_40001.f_400B && iVar1 < Global_40001.f_4020)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_40001.f_4011 && iVar1 < Global_40001.f_4027)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_40001.f_466D && iVar1 < Global_40001.f_46CF)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_40001.f_466E && iVar1 < Global_40001.f_46D0)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_40001.f_466F && iVar1 < Global_40001.f_46D1)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_40001.f_4670 && iVar1 < Global_40001.f_46D2)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_40001.f_4671 && iVar1 < Global_40001.f_46D3)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_40001.f_4672 && iVar1 < Global_40001.f_46D4)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_40001.f_4673 && iVar1 < Global_40001.f_46D5)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_40001.f_4674 && iVar1 < Global_40001.f_46D6)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_40001.f_4675 && iVar1 < Global_40001.f_46D7)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_40001.f_4676 && iVar1 < Global_40001.f_46D8)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_40001.f_4677 && iVar1 < Global_40001.f_46D9)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_40001.f_4678 && iVar1 < Global_40001.f_46DA)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_40001.f_4679 && iVar1 < Global_40001.f_46DB)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_40001.f_467A && iVar1 < Global_40001.f_46DC)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_40001.f_467B && iVar1 < Global_40001.f_46DD)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_40001.f_467C && iVar1 < Global_40001.f_46DE)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_40001.f_467D && iVar1 < Global_40001.f_46DF)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_40001.f_467E && iVar1 < Global_40001.f_46E0)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_40001.f_467F && iVar1 < Global_40001.f_46E1)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_40001.f_4680 && iVar1 < Global_40001.f_46E2)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_40001.f_4681 && iVar1 < Global_40001.f_46E3)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_40001.f_4682 && iVar1 < Global_40001.f_46E4)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_40001.f_4683 && iVar1 < Global_40001.f_46E5)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_40001.f_4684 && iVar1 < Global_40001.f_46E6)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_40001.f_4685 && iVar1 < Global_40001.f_46E7)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1234311532)
	{
		if (!Global_40001.f_4AA6 && iVar1 < Global_40001.f_4AA2)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1405937764)
	{
		if (!Global_40001.f_4AA7 && iVar1 < Global_40001.f_4AA3)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 719660200)
	{
		if (!Global_40001.f_4AA8 && iVar1 < Global_40001.f_4AA4)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -982130927)
	{
		if (!Global_40001.f_4AA9 && iVar1 < Global_40001.f_4AA5)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 917809321)
	{
		if (!Global_40001.f_4E15 && iVar1 < Global_40001.f_4E1D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 223240013)
	{
		if (!Global_40001.f_4E16 && iVar1 < Global_40001.f_4E1E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1504306544)
	{
		if (!Global_40001.f_4E17 && iVar1 < Global_40001.f_4E1F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1939284556)
	{
		if (!Global_40001.f_4E18 && iVar1 < Global_40001.f_4E20)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 159274291)
	{
		if (!Global_40001.f_4E19 && iVar1 < Global_40001.f_4E21)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 433954513)
	{
		if (!Global_40001.f_4E1A && iVar1 < Global_40001.f_4E22)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1763555241)
	{
		if (!Global_40001.f_511E && iVar1 < Global_40001.f_5132)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -749299473)
	{
		if (!Global_40001.f_512A && iVar1 < Global_40001.f_513E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -975345305)
	{
		if (!Global_40001.f_5121 && iVar1 < Global_40001.f_5135)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1700874274)
	{
		if (!Global_40001.f_512B && iVar1 < Global_40001.f_513F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -392675425)
	{
		if (!Global_40001.f_511F && iVar1 < Global_40001.f_5133)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1043222410)
	{
		if (!Global_40001.f_512F && iVar1 < Global_40001.f_5143)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1386191424)
	{
		if (!Global_40001.f_512D && iVar1 < Global_40001.f_5141)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1565978651)
	{
		if (!Global_40001.f_512E && iVar1 < Global_40001.f_5142)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1036591958)
	{
		if (!Global_40001.f_5129 && iVar1 < Global_40001.f_513D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -32878452)
	{
		if (!Global_40001.f_5130 && iVar1 < Global_40001.f_5144)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -42959138)
	{
		if (!Global_40001.f_512C && iVar1 < Global_40001.f_5140)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1984275979)
	{
		if (!Global_40001.f_5128 && iVar1 < Global_40001.f_513C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1007528109)
	{
		if (!Global_40001.f_5120 && iVar1 < Global_40001.f_5134)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1523619738)
	{
		if (!Global_40001.f_5122 && iVar1 < Global_40001.f_5136)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1392481335)
	{
		if (!Global_40001.f_5123 && iVar1 < Global_40001.f_5137)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -998177792)
	{
		if (!Global_40001.f_5124 && iVar1 < Global_40001.f_5138)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1242608589)
	{
		if (!Global_40001.f_5125 && iVar1 < Global_40001.f_5139)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1841130506)
	{
		if (!Global_40001.f_5126 && iVar1 < Global_40001.f_513A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2049897956)
	{
		if (!Global_40001.f_5127 && iVar1 < Global_40001.f_513B)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1483171323)
	{
		if (!Global_40001.f_54DF && iVar1 < Global_40001.f_54FB)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 886810209)
	{
		if (!Global_40001.f_54E0 && iVar1 < Global_40001.f_54FC)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1693015116)
	{
		if (!Global_40001.f_54E1 && iVar1 < Global_40001.f_54FD)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -692292317)
	{
		if (!Global_40001.f_54E2 && iVar1 < Global_40001.f_54FE)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1435527158)
	{
		if (!Global_40001.f_54E3 && iVar1 < Global_40001.f_54FF)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1181327175)
	{
		if (!Global_40001.f_54E4 && iVar1 < Global_40001.f_5500)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1489874736)
	{
		if (!Global_40001.f_54E5 && iVar1 < Global_40001.f_5501)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -212993243)
	{
		if (!Global_40001.f_54E6 && iVar1 < Global_40001.f_5502)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 447548909)
	{
		if (!Global_40001.f_54E7 && iVar1 < Global_40001.f_5503)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1561920505)
	{
		if (!Global_40001.f_54E8 && iVar1 < Global_40001.f_5504)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1848994066)
	{
		if (!Global_40001.f_54E9 && iVar1 < Global_40001.f_5505)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1741861769)
	{
		if (!Global_40001.f_54EA && iVar1 < Global_40001.f_5506)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1104234922)
	{
		if (!Global_40001.f_54EB && iVar1 < Global_40001.f_5507)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1871995513)
	{
		if (!Global_40001.f_54EC && iVar1 < Global_40001.f_5508)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1352136073)
	{
		if (!Global_40001.f_54ED && iVar1 < Global_40001.f_5509)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -313185164)
	{
		if (!Global_40001.f_54EE && iVar1 < Global_40001.f_550A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2079788230)
	{
		if (!Global_40001.f_54EF && iVar1 < Global_40001.f_550B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 600450546)
	{
		if (!Global_40001.f_54F0 && iVar1 < Global_40001.f_550C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -410205223)
	{
		if (!Global_40001.f_54F1 && iVar1 < Global_40001.f_550D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 867799010)
	{
		if (!Global_40001.f_54F2 && iVar1 < Global_40001.f_550E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1529242755)
	{
		if (!Global_40001.f_54F3 && iVar1 < Global_40001.f_550F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 903794909)
	{
		if (!Global_40001.f_54F4 && iVar1 < Global_40001.f_5510)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1532697517)
	{
		if (!Global_40001.f_54F5 && iVar1 < Global_40001.f_5511)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 15219735)
	{
		if (!Global_40001.f_54F6 && iVar1 < Global_40001.f_5512)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 661493923)
	{
		if (!Global_40001.f_54F7 && iVar1 < Global_40001.f_5513)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 838982985)
	{
		if (!Global_40001.f_54F8 && iVar1 < Global_40001.f_5514)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -391595372)
	{
		if (!Global_40001.f_54F9 && iVar1 < Global_40001.f_5515)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -121446169)
	{
		if (!Global_40001.f_54FA && iVar1 < Global_40001.f_5516)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1909189272)
	{
		if (!Global_40001.f_597B && iVar1 < Global_40001.f_598B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1617472902)
	{
		if (!Global_40001.f_597C && iVar1 < Global_40001.f_598C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1267543371)
	{
		if (!Global_40001.f_5980 && iVar1 < Global_40001.f_5990)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 931280609)
	{
		if (!Global_40001.f_5983 && iVar1 < Global_40001.f_5993)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1046206681)
	{
		if (!Global_40001.f_5988 && iVar1 < Global_40001.f_5998)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1259134696)
	{
		if (!Global_40001.f_5982 && iVar1 < Global_40001.f_5992)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1115909093)
	{
		if (!Global_40001.f_597A && iVar1 < Global_40001.f_598A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1031562256)
	{
		if (!Global_40001.f_5981 && iVar1 < Global_40001.f_5991)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -376434238)
	{
		if (!Global_40001.f_5987 && iVar1 < Global_40001.f_5997)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -986944621)
	{
		if (!Global_40001.f_5986 && iVar1 < Global_40001.f_5996)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1134706562)
	{
		if (!Global_40001.f_597D && iVar1 < Global_40001.f_598D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2120700196)
	{
		if (!Global_40001.f_597F && iVar1 < Global_40001.f_598F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -214906006)
	{
		if (!Global_40001.f_5989 && iVar1 < Global_40001.f_5999)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -988501280)
	{
		if (!Global_40001.f_5985 && iVar1 < Global_40001.f_5995)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1254014755)
	{
		if (!Global_40001.f_597E && iVar1 < Global_40001.f_598E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -726768679)
	{
		if (!Global_40001.f_5984 && iVar1 < Global_40001.f_5994)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1988428699)
	{
		if (!Global_40001.f_59D5 && iVar1 < Global_40001.f_59C8)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 345756458)
	{
		if (!Global_40001.f_59D6 && iVar1 < Global_40001.f_59C9)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1945374990)
	{
		if (!Global_40001.f_59DB && iVar1 < Global_40001.f_59CE)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1653666139)
	{
		if (!Global_40001.f_59DA && iVar1 < Global_40001.f_59CD)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 500482303)
	{
		if (!Global_40001.f_59D8 && iVar1 < Global_40001.f_59CB)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2044532910)
	{
		if (!Global_40001.f_59DE && iVar1 < Global_40001.f_59D1)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -638562243)
	{
		if (!Global_40001.f_59E0 && iVar1 < Global_40001.f_59D3)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1692272545)
	{
		if (!Global_40001.f_59E1 && iVar1 < Global_40001.f_59D4)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2069146067)
	{
		if (!Global_40001.f_59DF && iVar1 < Global_40001.f_59D2)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -420911112)
	{
		if (!Global_40001.f_59D7 && iVar1 < Global_40001.f_59CA)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 321186144)
	{
		if (!Global_40001.f_59D9 && iVar1 < Global_40001.f_59CC)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -54332285)
	{
		if (!Global_40001.f_59DD && iVar1 < Global_40001.f_59D0)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -307958377)
	{
		if (!Global_40001.f_59DC && iVar1 < Global_40001.f_59CF)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_84()//Position - 0x5F63
{
	return 0;
}

int func_85()//Position - 0x5F6C
{
	return 1;
}

int func_86()//Position - 0x5F75
{
	return 1;
}

int func_87()//Position - 0x5F7E
{
	if (unk_0x7B2F21BFE86AEB61(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_88()//Position - 0x5F97
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

int func_89(int iParam0)//Position - 0x6052
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x6F79ECA8C83E4357(iParam0);
	sVar1 = unk_0x2232934AD664DD49(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x3362CDE8460ED38B(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_80(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_90(int iParam0)//Position - 0x6098
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x724D816EA203A79E(Global_1615D[iVar0]))
		{
			if (Global_1615D[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_91(int iParam0)//Position - 0x60D3
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(iParam0) && unk_0xE59B7F5A03335350(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x724D816EA203A79E(Global_1613F[iVar0]) && unk_0xE59B7F5A03335350(Global_1613F[iVar0], 0))
			{
				if (Global_1613F[iVar0] == iParam0 && unk_0x6F79ECA8C83E4357(Global_1613F[iVar0]) == unk_0x6F79ECA8C83E4357(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_92(int iParam0)//Position - 0x614F
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(Global_110A8.f_1E4[24]))
	{
		if (iParam0 == Global_110A8.f_1E4[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x724D816EA203A79E(Global_110A8.f_1E4[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_110A8.f_1E4[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_93(int iParam0, int iParam1, bool bParam2)//Position - 0x6237
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0x724D816EA203A79E(iParam0) || !unk_0xE59B7F5A03335350(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_94(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || unk_0xFA30DFD0084E92FE(Global_19B04.f_1C20[iVar2], 0))
		{
			if (unk_0x9945EE67AEC122F7(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_94(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x62A8
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

var func_95()//Position - 0x6380
{
	var uVar0;
	
	func_105(&uVar0, unk_0xF40D00CD7B81C0A8());
	func_104(&uVar0, unk_0x7E09057438B9D216());
	func_103(&uVar0, unk_0x6E06C0DB9B43570D());
	func_98(&uVar0, unk_0xBE14F159908E4EE5());
	func_97(&uVar0, unk_0xDD6A91E47ED4D0CF());
	func_96(&uVar0, unk_0x4EEB3860BFC44B78());
	return uVar0;
}

void func_96(var uParam0, int iParam1)//Position - 0x63C6
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

void func_97(var uParam0, int iParam1)//Position - 0x644C
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_98(var uParam0, int iParam1)//Position - 0x647F
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_102(*uParam0);
	iVar1 = func_100(*uParam0);
	if (iParam1 < 1 || iParam1 > func_99(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_99(int iParam0, int iParam1)//Position - 0x64D0
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

var func_100(int iParam0)//Position - 0x6572
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_101(unk_0xFA30DFD0084E92FE(iParam0, 31), -1, 1)) + 2011;
}

int func_101(bool bParam0, int iParam1, int iParam2)//Position - 0x6597
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_102(var uParam0)//Position - 0x65AE
{
	return uParam0 & 15;
}

void func_103(var uParam0, int iParam1)//Position - 0x65BB
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_104(var uParam0, int iParam1)//Position - 0x65F5
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_105(var uParam0, int iParam1)//Position - 0x6630
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_106(var uParam0, int iParam1)//Position - 0x666C
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_A = 0;
	uParam0->f_B = 0;
	uParam0->f_C = 145;
	uParam0->f_D = -1;
	uParam0->f_E = 0;
	uParam0->f_F = { 0f, 0f, 0f };
	uParam0->f_12 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_107(0, 1);
			uParam0->f_C = 0;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_107(0, 1);
			uParam0->f_C = 0;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_107(1, 1);
			uParam0->f_C = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_107(1, 2);
			uParam0->f_C = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 19);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_107(1, 1);
			uParam0->f_C = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_107(1, 2);
			uParam0->f_C = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 19);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_107(2, 1);
			uParam0->f_C = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_107(2, 1);
			uParam0->f_C = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_107(2, 1);
			uParam0->f_C = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_E = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_C = 0;
			uParam0->f_D = 359;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_E = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_C = 1;
			uParam0->f_D = 359;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_E = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_C = 2;
			uParam0->f_D = 359;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_E = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_C = 0;
			uParam0->f_D = 356;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 22);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_E = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_C = 1;
			uParam0->f_D = 356;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 22);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_E = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_C = 2;
			uParam0->f_D = 356;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 22);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_E = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_C = 0;
			uParam0->f_D = 360;
			uParam0->f_F = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_12 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_E = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_C = 1;
			uParam0->f_D = 360;
			uParam0->f_F = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_12 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_E = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_C = 2;
			uParam0->f_D = 360;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_E = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = 0;
			uParam0->f_D = 357;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 24);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_E = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = 1;
			uParam0->f_D = 357;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 24);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_E = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = 2;
			uParam0->f_D = 357;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 24);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_E = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = (0 + iVar1);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 27);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 24);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_E = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = (0 + iVar1);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 27);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 24);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_E = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = (0 + iVar1);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 27);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 24);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_E = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 11);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 13);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_E = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 11);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 13);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_A = 126;
			uParam0->f_B = 126;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 9);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_A = 157;
			uParam0->f_B = 157;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 9);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = 1938952078;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_D = 308;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 2);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 30);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_D = 404;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 2);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 22);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_88())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_D = 401;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 13);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 2);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 1);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_88())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_D = 401;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 13);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 2);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 1);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_D = 308;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 30);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 30);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0xFA30DFD0084E92FE(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_19B04.f_7F22.f_45[uParam0->f_E /*78*/].f_42;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_116(Global_19B04.f_7F22.f_748[uParam0->f_E /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_19B04.f_7F22.f_748[uParam0->f_E /*3*/] };
		}
		if (Global_19B04.f_7F22.f_78E[uParam0->f_E] != -1f)
		{
			uParam0->f_3 = Global_19B04.f_7F22.f_78E[uParam0->f_E];
		}
	}
	if (unk_0xFA30DFD0084E92FE(uParam0->f_9, 19))
	{
		if (!func_116(Global_19B04.f_932.f_21B.f_DF0[1 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_19B04.f_932.f_21B.f_DF0[1 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_19B04.f_932.f_21B.f_E05[1 /*4*/][uParam0->f_C];
		}
	}
	else if (unk_0xFA30DFD0084E92FE(uParam0->f_9, 20))
	{
		if (!func_116(Global_19B04.f_932.f_21B.f_DF0[0 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_19B04.f_932.f_21B.f_DF0[0 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_19B04.f_932.f_21B.f_E05[0 /*4*/][uParam0->f_C];
		}
	}
	return iVar0;
}

int func_107(int iParam0, int iParam1)//Position - 0x7D63
{
	struct<82> Var0;
	
	if (func_11(iParam0))
	{
		Var0.f_B = 12;
		Var0.f_1F = 49;
		Var0.f_51 = 2;
		func_108(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_108(int iParam0, var uParam1, int iParam2)//Position - 0x7DA5
{
	int iVar0;
	
	uParam1->f_58 = 1;
	uParam1->f_54 = 255;
	uParam1->f_55 = 255;
	uParam1->f_56 = 255;
	uParam1->f_61 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_19B04.f_2360.f_63.f_3A[128] && !Global_19B04.f_2360.f_63.f_3A[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_B[0] = 1;
					StringCopy(&(uParam1->f_1B), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_1B), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_1B), "BETTY 32", 16);
					if (Global_19B04.f_2360.f_63.f_3A[119])
					{
						uParam1->f_B[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_19B04.f_2360.f_63.f_3A[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_1B), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_A = 1;
					StringCopy(&(uParam1->f_1B), "FC1988", 16);
					uParam1->f_B[0] = 1;
					uParam1->f_B[1] = 1;
					uParam1->f_B[2] = 1;
					uParam1->f_B[3] = 1;
					uParam1->f_B[4] = 1;
					uParam1->f_B[5] = 1;
					uParam1->f_B[6] = 1;
					uParam1->f_B[7] = 1;
					uParam1->f_B[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

void func_109(int iParam0, var uParam1, vector3 vParam2, float fParam3, int iParam4)//Position - 0x8003
{
	if (func_106(&(Global_110A8.f_22B[0 /*21*/]), iParam0))
	{
		if (unk_0xFA30DFD0084E92FE(Global_110A8.f_22B[0 /*21*/].f_9, 10))
		{
			func_114(iParam0);
			func_113(uParam1, &(Global_19B04.f_7F22.f_45[Global_110A8.f_22B[0 /*21*/].f_E /*78*/]));
			if (unk_0xFA30DFD0084E92FE(Global_110A8.f_22B[0 /*21*/].f_9, 11))
			{
				Global_19B04.f_7F22.f_748[Global_110A8.f_22B[0 /*21*/].f_E /*3*/] = { vParam2 };
				Global_19B04.f_7F22.f_78E[Global_110A8.f_22B[0 /*21*/].f_E] = fParam3;
			}
			else
			{
				Global_19B04.f_7F22.f_748[Global_110A8.f_22B[0 /*21*/].f_E /*3*/] = { 0f, 0f, 0f };
				Global_19B04.f_7F22.f_78E[Global_110A8.f_22B[0 /*21*/].f_E] = -1f;
			}
			Global_19B04.f_7F22.f_7A6[Global_110A8.f_22B[0 /*21*/].f_E] = iParam4 + 1;
			func_110(iParam0, 1);
		}
	}
}

void func_110(int iParam0, bool bParam1)//Position - 0x8102
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_112(iParam0, 0))
		{
			func_111(iParam0, 1, 0);
			func_111(iParam0, 2, 0);
			func_111(iParam0, 3, 0);
			func_111(iParam0, 4, 0);
			func_111(iParam0, 0, 1);
			Global_110A8[iParam0] = 1;
		}
	}
	else
	{
		func_111(iParam0, 0, 0);
	}
}

void func_111(int iParam0, int iParam1, bool bParam2)//Position - 0x815F
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xF0059F27F7BB6680(&(Global_19B04.f_7F22[iParam0]), iParam1);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_7F22[iParam0]), iParam1);
	}
}

bool func_112(int iParam0, int iParam1)//Position - 0x819A
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_19B04.f_7F22[iParam0], iParam1);
}

void func_113(var uParam0, var uParam1)//Position - 0x81BD
{
	uParam1->f_42 = uParam0->f_42;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_3B = { uParam0->f_3B };
	uParam1->f_3E = uParam0->f_3E;
	uParam1->f_3F = uParam0->f_3F;
	uParam1->f_40 = uParam0->f_40;
	uParam1->f_41 = uParam0->f_41;
	uParam1->f_4D = uParam0->f_4D;
	uParam1->f_43 = uParam0->f_43;
	uParam1->f_45 = uParam0->f_45;
	uParam1->f_44 = uParam0->f_44;
	uParam1->f_47 = uParam0->f_47;
	uParam1->f_48 = uParam0->f_48;
	uParam1->f_49 = uParam0->f_49;
	uParam1->f_4A = uParam0->f_4A;
	uParam1->f_4B = uParam0->f_4B;
	uParam1->f_4C = uParam0->f_4C;
}

void func_114(int iParam0)//Position - 0x8289
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_106(&(Global_110A8.f_22B[0 /*21*/]), iParam0))
	{
		if (unk_0x724D816EA203A79E(Global_110A8.f_8B[iParam0]))
		{
			unk_0x77815D3407C6700D(Global_110A8.f_8B[iParam0], true, 1);
			unk_0x1E7A09C1710FB071(&(Global_110A8.f_8B[iParam0]));
			Global_110A8.f_8B[iParam0] = 0;
		}
		if (unk_0xFA30DFD0084E92FE(Global_110A8.f_22B[0 /*21*/].f_9, 13))
		{
			func_110(iParam0, 0);
		}
	}
}

int func_115(int iParam0)//Position - 0x8303
{
	int iVar0;
	
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 145;
	}
	if (!unk_0xE59B7F5A03335350(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x724D816EA203A79E(Global_1613F[iVar0]))
		{
			if (Global_1613F[iVar0] == iParam0)
			{
				return Global_16149[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

bool func_116(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x8366
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

void func_117(int iParam0, var uParam1)//Position - 0x83AD
{
	int iVar0;
	
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		func_121(uParam1);
		uParam1->f_42 = unk_0x6F79ECA8C83E4357(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x2232934AD664DD49(iParam0), 16);
		*uParam1 = unk_0x89FC8F09D6647DEC(iParam0);
		unk_0x87F182D2DA225F0D(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x375E42DA279E7FED(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x5F73107BDF663316(iParam0, &(uParam1->f_3E), &(uParam1->f_3F), &(uParam1->f_40));
		uParam1->f_41 = unk_0x2629793241883F74(iParam0);
		uParam1->f_43 = unk_0x0FF608FD384AF8FA(iParam0);
		uParam1->f_45 = unk_0xC2587DF549B15BB6(iParam0);
		uParam1->f_46 = unk_0xA3E58143095D5828(iParam0);
		unk_0x715BE0BE8D01B21C(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		unk_0x2774857472EBCE0F(iParam0, &(uParam1->f_4A), &(uParam1->f_4B), &(uParam1->f_4C));
		if (unk_0xFF7612EE8C5F1E19(iParam0, 2))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_4D), 28);
		}
		if (unk_0xFF7612EE8C5F1E19(iParam0, 3))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_4D), 29);
		}
		if (unk_0xFF7612EE8C5F1E19(iParam0, 0))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_4D), 30);
		}
		if (unk_0xFF7612EE8C5F1E19(iParam0, 1))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_4D), 31);
		}
		if (uParam1->f_41 == -1 && !func_120(uParam1->f_42))
		{
			uParam1->f_41 = 0;
		}
		if (unk_0x6DB86B1ADD81CED4(iParam0, 0))
		{
			uParam1->f_44 = unk_0xAA1A0B747CDFC807(iParam0);
		}
		if (unk_0xA19D269B4B5A1532(uParam1->f_42))
		{
			if (unk_0x9741AF87EDFF311C(iParam0))
			{
				switch (unk_0xBCD69B76B3E60BF5(iParam0))
				{
					case 3:
					case 0:
						unk_0x7CB6FD92BE491AD9(&(uParam1->f_4D), 23);
						unk_0xF0059F27F7BB6680(&(uParam1->f_4D), 22);
						break;
					
					case 4:
					case 1:
						unk_0x7CB6FD92BE491AD9(&(uParam1->f_4D), 23);
						unk_0x7CB6FD92BE491AD9(&(uParam1->f_4D), 22);
						break;
					
					case 5:
						unk_0xF0059F27F7BB6680(&(uParam1->f_4D), 23);
						break;
				}
			}
			else
			{
				unk_0xF0059F27F7BB6680(&(uParam1->f_4D), 23);
			}
		}
		if (!unk_0xB830044A99FABAAF(iParam0))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_4D), 9);
		}
		if (unk_0xA37E9F4E2795A88A(iParam0))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_4D), 10);
		}
		if (unk_0xFD22243DAFAFE349(iParam0))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_4D), 13);
			unk_0x103992E73728DA90(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		}
		if (unk_0x1EE004ED283345A0(iParam0))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_4D), 12);
		}
		func_119(&iParam0, &(uParam1->f_9), &(uParam1->f_3B));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xFC8A228C62614C5C(iParam0, iVar0 + 1))
			{
				unk_0xF0059F27F7BB6680(&(uParam1->f_4D), func_118(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x97413DC2A72A11B3(iParam0, 0))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_4D), 11);
		}
		else
		{
			unk_0x7CB6FD92BE491AD9(&(uParam1->f_4D), 11);
		}
		if (unk_0x3C03CFD5DD1E2D97(iParam0, "IgnoredByQuickSave") && unk_0x75236BEC3BDDE069(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_4D), 27);
		}
		else
		{
			unk_0x7CB6FD92BE491AD9(&(uParam1->f_4D), 27);
		}
	}
}

int func_118(int iParam0)//Position - 0x8658
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_119(int iParam0, var uParam1, var uParam2)//Position - 0x8708
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xE59B7F5A03335350(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xA6BE0954FC6BAA16(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0x0ABA73B9B2E2F838(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x3EB14CBD49DA0017(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xC8B123E980199685(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xC8B123E980199685(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_120(int iParam0)//Position - 0x87E2
{
	switch (iParam0)
	{
		case joaat("granger"):
		case -998177792:
			return 1;
		
		default:
	}
	return 0;
}

void func_121(var uParam0)//Position - 0x8802
{
	int iVar0;
	
	uParam0->f_42 = 0;
	uParam0->f_4D = 0;
	uParam0->f_41 = 0;
	uParam0->f_3E = 0;
	uParam0->f_3F = 0;
	uParam0->f_40 = 0;
	uParam0->f_4A = 0;
	uParam0->f_4B = 0;
	uParam0->f_4C = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_3B[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_43 = 0;
	uParam0->f_44 = 0;
	uParam0->f_45 = 0;
	uParam0->f_46 = 1;
	uParam0->f_47 = 0;
	uParam0->f_48 = 0;
	uParam0->f_49 = 0;
}

void func_122(int iParam0)//Position - 0x88B2
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_114(iParam0);
	func_110(iParam0, 0);
}

int func_123(vector3 vParam0, int iParam1, var uParam2, var uParam3)//Position - 0x88D9
{
	int iVar0;
	
	iVar0 = func_124(vParam0, iParam1, 1);
	switch (iVar0)
	{
		case 0:
			*uParam2 = { -827.351f, 157.785f, 68.2143f };
			*uParam3 = 85.1509f;
			return 1;
			break;
		
		case 1:
		case 2:
			*uParam2 = { 1992.523f, 3813.916f, 31.1008f };
			*uParam3 = 122.1498f;
			return 1;
			break;
		
		case 3:
			*uParam2 = { -1184.258f, -1496.556f, 3.3895f };
			*uParam3 = 303.2098f;
			return 1;
			break;
		
		case 4:
			*uParam2 = { 118.1067f, -1325.906f, 28.3706f };
			*uParam3 = 123.5016f;
			return 1;
			break;
		
		case 5:
			*uParam2 = { -18.118f, -1455.126f, 29.5004f };
			*uParam3 = 273.2822f;
			return 1;
			break;
		
		case 6:
			*uParam2 = { 1.5947f, 543.4017f, 173.4644f };
			*uParam3 = 310.7556f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

int func_124(vector3 vParam0, int iParam1, int iParam2)//Position - 0x89EF
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (Global_1584A[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_1584A[iVar0 /*10*/].f_9 == iParam1 || iParam1 == 145)
			{
				if (func_125(iVar0) || iParam2 == 0)
				{
					fVar1 = unk_0xF0F2FC9DE291567F(vParam0, Global_1584A[iVar0 /*10*/].f_3, true);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

bool func_125(int iParam0)//Position - 0x8A7E
{
	return unk_0xFA30DFD0084E92FE(Global_19B04.f_1C20[iParam0], 0);
}

int func_126(int iParam0)//Position - 0x8A96
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_110A8.f_8B[iParam0];
}

void func_127(int iParam0, bool bParam1, bool bParam2)//Position - 0x8AB2
{
	int iVar0;
	
	if (unk_0xFA30DFD0084E92FE(iParam0->f_D, 30))
	{
		bParam1 = true;
	}
	func_129(iParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x2DA8CA50A72528FB(iParam0->f_1[iVar0]))
		{
			unk_0x07B8ECB35A4ED3AC(&(iParam0->f_1[iVar0]));
		}
		func_128(iVar0, iParam0);
		func_57(iVar0, iParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (iVar0 != 8)
		{
			unk_0x7CB6FD92BE491AD9(&(iParam0->f_D), iVar0);
			unk_0x7CB6FD92BE491AD9(&(iParam0->f_E), iVar0);
		}
		iVar0++;
	}
	if (unk_0x2DA8CA50A72528FB(*iParam0))
	{
		unk_0x07B8ECB35A4ED3AC(iParam0);
	}
	iParam0->f_6 = 0;
	iParam0->f_C = 0;
	iParam0->f_F = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x36CEFBE9B745A58D(iParam0->f_11[iVar0]))
		{
			unk_0x8941EA87BBF38C6F(iParam0->f_11[iVar0], 1);
			unk_0xF0B851960DDCE3D8(iParam0->f_11[iVar0], 1);
			if (bParam2)
			{
				unk_0xC8FD3EBBB90E8D7F(iParam0->f_11[iVar0], 32, true);
				unk_0xC8FD3EBBB90E8D7F(iParam0->f_11[iVar0], 305, false);
			}
			unk_0xC8FD3EBBB90E8D7F(iParam0->f_11[iVar0], 268, false);
			if (bParam1)
			{
				if (unk_0x9488E18994C5C83D(iParam0->f_11[iVar0], func_34()) && iParam0->f_11[iVar0] != unk_0xBC25C936A095B5BA())
				{
					unk_0x57EB4CC8F1928A47(iParam0->f_11[iVar0]);
				}
			}
			if (!unk_0xFA30DFD0084E92FE(iParam0->f_D, 29))
			{
				unk_0x69194304DB679A9C(iParam0->f_11[iVar0], false, -1, 0);
			}
			iParam0->f_11[iVar0] = 0;
		}
		iVar0++;
	}
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		unk_0x8941EA87BBF38C6F(unk_0xBC25C936A095B5BA(), 1);
		unk_0xF0B851960DDCE3D8(unk_0xBC25C936A095B5BA(), 1);
	}
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (bParam2)
		{
			unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 32, true);
		}
	}
	iParam0->f_15 = 0;
}

void func_128(int iParam0, var uParam1)//Position - 0x8C63
{
	switch (iParam0)
	{
		case 0:
			unk_0x7CB6FD92BE491AD9(&(uParam1->f_D), 14);
			break;
		
		case 1:
			unk_0x7CB6FD92BE491AD9(&(uParam1->f_D), 15);
			break;
		
		case 2:
			unk_0x7CB6FD92BE491AD9(&(uParam1->f_D), 16);
			break;
	}
}

void func_129(var uParam0)//Position - 0x8CAB
{
	if (unk_0x2DA8CA50A72528FB(uParam0->f_5))
	{
		unk_0x07B8ECB35A4ED3AC(&(uParam0->f_5));
	}
}

float func_130(float fParam0, float fParam1, float fParam2)//Position - 0x8CC6
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

int func_131(char* sParam0)//Position - 0x8CED
{
	unk_0xF07D20149ECBC61E(sParam0);
	return unk_0xA66DBDA0A072514A(0);
}

float func_132(int iParam0, int iParam1, bool bParam2)//Position - 0x8D00
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

int func_133(int iParam0, bool bParam1, bool bParam2)//Position - 0x8D5E
{
	return func_27(iParam0, !bParam1, bParam2);
}

void func_134(char* sParam0, int iParam1, int iParam2)//Position - 0x8D71
{
	iParam2 = iParam2;
	unk_0x3714DE83381EADC2(sParam0);
	unk_0x41D8F63F629E76BE(iParam1, 1);
}

void func_135()//Position - 0x8D8A
{
	func_143(2);
	func_142();
}

int func_136()//Position - 0x8D9B
{
	if (Global_3DB8 != 0 || unk_0xE6711F601F11B66B())
	{
		return 1;
	}
	return 0;
}

void func_137()//Position - 0x8DBD
{
	int iVar0;
	float fVar1;
	
	unk_0x78108840729CEAEE(1);
	unk_0x900CF084251DED26("PPROM", 0);
	func_141(2, 1);
	func_140(&uLocal_72, 0, unk_0xBC25C936A095B5BA(), "MICHAEL", 0, 1);
	Local_238[0 /*8*/] = { -1039.556f, -1071.264f, 150f };
	Local_238[0 /*8*/].f_3 = 200f;
	Local_238[1 /*8*/] = { -1014.976f, 450.128f, 150f };
	Local_238[1 /*8*/].f_3 = 200f;
	Local_238[2 /*8*/] = { -598.1714f, -310.67f, 150f };
	Local_238[2 /*8*/].f_3 = 200f;
	Local_238[3 /*8*/] = { -392.5704f, 514.8138f, 150f };
	Local_238[3 /*8*/].f_3 = 200f;
	Local_238[4 /*8*/] = { 127.7632f, -135.7758f, 150f };
	Local_238[4 /*8*/].f_3 = 200f;
	Local_238[5 /*8*/] = { 1033.469f, -570.8278f, 150f };
	Local_238[5 /*8*/].f_3 = 200f;
	Local_238[6 /*8*/] = { 246.5894f, -890.811f, 150f };
	Local_238[6 /*8*/].f_3 = 200f;
	Local_238[7 /*8*/] = { 1231.393f, -1694.348f, 150f };
	Local_238[7 /*8*/].f_3 = 200f;
	Local_238[8 /*8*/] = { 424.9531f, -1904.325f, 150f };
	Local_238[8 /*8*/].f_3 = 200f;
	Local_238[9 /*8*/] = { -22.4342f, -1414.275f, 160f };
	Local_238[9 /*8*/].f_3 = 200f;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (!func_139(Local_238[iVar0 /*8*/]))
		{
			fVar1 = 0f;
			unk_0x2084D4C6C2DF616F(Local_238[iVar0 /*8*/], &fVar1, 0, 0);
			Local_238[iVar0 /*8*/].f_2 = fVar1;
		}
		iVar0++;
	}
	switch (func_138())
	{
		case 6:
			StringCopy(&cLocal_40, "DT", 16);
			break;
		
		case 5:
			StringCopy(&cLocal_40, "VW", 16);
			break;
		
		case 7:
			StringCopy(&cLocal_40, "MW", 16);
			break;
	}
	unk_0xDF53A66AEE1401AA(0f);
	while (!unk_0xFA9040D29FE330BD(0))
	{
		SYSTEM::WAIT(0);
	}
}

int func_138()//Position - 0x8FD5
{
	return Global_195FA.f_14;
}

int func_139(vector3 vParam0)//Position - 0x8FE3
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_140(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x900D
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

void func_141(int iParam0, int iParam1)//Position - 0x90A8
{
	unk_0xF0059F27F7BB6680(&Global_635B, iParam0);
	StringCopy(&(Global_635C[iParam0 /*6*/]), unk_0x1377080E9B0BD993(), 24);
	Global_6393[iParam0] = iParam1;
}

void func_142()//Position - 0x90CF
{
	if (unk_0x724D816EA203A79E(iLocal_237))
	{
		unk_0x1E7A09C1710FB071(&iLocal_237);
	}
	if (unk_0x2DA8CA50A72528FB(Local_238[0 /*8*/].f_4))
	{
		unk_0x07B8ECB35A4ED3AC(&(Local_238[0 /*8*/].f_4));
	}
	if (unk_0x2DA8CA50A72528FB(Local_238[0 /*8*/].f_5))
	{
		unk_0x07B8ECB35A4ED3AC(&(Local_238[0 /*8*/].f_5));
	}
	if (unk_0x2DA8CA50A72528FB(Local_238[1 /*8*/].f_4))
	{
		unk_0x07B8ECB35A4ED3AC(&(Local_238[1 /*8*/].f_4));
	}
	if (unk_0x2DA8CA50A72528FB(Local_238[1 /*8*/].f_5))
	{
		unk_0x07B8ECB35A4ED3AC(&(Local_238[1 /*8*/].f_5));
	}
	unk_0xDF53A66AEE1401AA(1f);
	unk_0x78108840729CEAEE(0);
	unk_0x95E4B6F3ED223F5A();
}

void func_143(int iParam0)//Position - 0x9158
{
	Global_195FA.f_16 = iParam0;
}

