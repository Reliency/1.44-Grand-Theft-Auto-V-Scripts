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
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	struct<6> Local_47[11];
	struct<4> Local_48[5];
	char* sLocal_49 = NULL;
	char* sLocal_50 = NULL;
	vector3 vLocal_51 = { 0f, 0f, 0f };
	vector3 vLocal_52 = { 0f, 0f, 0f };
	vector3 vLocal_53 = { 0f, 0f, 0f };
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	var uLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	var uLocal_64 = 2;
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
	int iLocal_78[1] = { 0 };
	var uLocal_79 = 16;
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
	var uLocal_243 = 0;
	int iLocal_244 = 0;
	struct<2> Local_245 = { 0, 5 } ;
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
	var uLocal_261 = 5;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
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
	sLocal_49 = "RE_SeaPlane1";
	sLocal_50 = "RE_SeaPlane2";
	vLocal_51 = { 0f, 0f, 0f };
	vLocal_53 = { 3097.46f, 2181.55f, 0.5f };
	iLocal_57 = -1;
	iLocal_58 = -1;
	iLocal_59 = joaat("dodo");
	iLocal_60 = joaat("tropic");
	iLocal_61 = joaat("g_m_y_mexgoon_02");
	iLocal_62 = joaat("suntrap");
	iLocal_63 = joaat("g_m_y_armgoon_02");
	vLocal_52 = { ScriptParam_245.f_1[0 /*3*/] };
	if (unk_0xE8A79675302ED812(11))
	{
		if (func_198(Local_48[0 /*4*/]))
		{
			unk_0xD421BC740C5340C3(Local_48[0 /*4*/], 2);
		}
		func_168(1, 0);
	}
	if (func_167() && func_124(vLocal_52, 32, 0, 0, 1))
	{
		func_121(32);
	}
	else
	{
		unk_0x95E4B6F3ED223F5A();
	}
	while (true)
	{
		if ((unk_0x684B06333594F9EA() || func_120(1)) || func_120(4))
		{
			if (func_120(7))
			{
				func_81();
			}
			switch (iLocal_45)
			{
				case 0:
					func_34();
					break;
				
				case 1:
					func_1();
					break;
			}
		}
		else
		{
			if (func_198(Local_48[0 /*4*/]))
			{
				unk_0xD421BC740C5340C3(Local_48[0 /*4*/], 2);
			}
			func_168(1, 0);
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x18B
{
	switch (iLocal_46)
	{
		case 0:
			iLocal_46 = 1;
			break;
		
		case 1:
			switch (iLocal_54)
			{
				case 0:
					iLocal_46 = 2;
					break;
			}
			break;
		
		case 2:
			func_2();
			break;
	}
}

void func_2()//Position - 0x1CF
{
	func_31(66, 1);
	func_31(67, 1);
	func_6(-1, 0);
	func_3();
	func_168(1, 0);
}

void func_3()//Position - 0x1F5
{
	func_4();
}

int func_4()//Position - 0x202
{
	if (func_5(0))
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

bool func_5(bool bParam0)//Position - 0x24D
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_1163A, 0);
}

void func_6(int iParam0, int iParam1)//Position - 0x278
{
	if (iParam0 == -1)
	{
		iParam0 = func_29();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_28(iParam0))
	{
		func_27(iParam0, iParam1);
		if (!func_26(51))
		{
			func_17("RE_REWARD", 1, 0, 4000, 10000, func_20(), 0, 138, 0);
			func_16(51);
		}
		if (func_15(iParam0))
		{
			Global_19B04.f_6186.f_2 = 3;
		}
		if (func_14(iParam0, iParam1) != 322)
		{
			func_8(func_14(iParam0, iParam1), vLocal_43.x, vLocal_43.y);
		}
		Global_19AF8 = iParam1;
		if (Global_19AF6 == 0)
		{
			if (((Global_19AF9 == 1 || Global_19AF9 == 5) || Global_19AF9 == 11) || Global_19AF9 == 25)
			{
				func_7(2);
			}
			else if ((Global_19AF9 == 26 || Global_19AF9 == 8) || Global_19AF9 == 17)
			{
				func_7(7);
			}
			else
			{
				func_7(1);
			}
		}
	}
}

void func_7(int iParam0)//Position - 0x37B
{
	Global_19AF6 = iParam0;
}

void func_8(int iParam0, var uParam1, var uParam2)//Position - 0x389
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
		func_12((891 + iParam0), 1, -1, 1);
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
		func_9();
	}
}

void func_9()//Position - 0x471
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
		func_11(13, SYSTEM::FLOOR(Global_19B04.f_27B5.f_F0D));
	}
	if (!unk_0xF9BFA43C1BAFD016())
	{
		if (!Global_11542)
		{
			if (func_10() == 2 == 0 && !unk_0x7AF0088ABFA713B6())
			{
				if (unk_0x670C0C6C780A3F84())
				{
					Global_199FA = 0;
				}
				if (!Global_DA9F)
				{
					func_4();
				}
			}
		}
	}
}

int func_10()//Position - 0x932
{
	return Global_62BD;
}

int func_11(int iParam0, int iParam1)//Position - 0x93D
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

int func_12(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x98E
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
		iParam2 = func_13();
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

int func_13()//Position - 0xE9D
{
	return Global_1407E0;
}

int func_14(int iParam0, int iParam1)//Position - 0xEA9
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

int func_15(int iParam0)//Position - 0x121D
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

void func_16(int iParam0)//Position - 0x124C
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

void func_17(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x128E
{
	func_18(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_18(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x12AF
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
		func_19();
	}
}

void func_19()//Position - 0x1482
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

int func_20()//Position - 0x15A2
{
	func_21();
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

void func_21()//Position - 0x15E8
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_25(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_24(unk_0xBC25C936A095B5BA());
			if (func_23(iVar0) && (!func_22(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_23(Global_19B04.f_932.f_21B.f_10CD))
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

bool func_22(int iParam0)//Position - 0x16E5
{
	return Global_8C41 == iParam0;
}

bool func_23(int iParam0)//Position - 0x16F3
{
	return iParam0 < 3;
}

int func_24(int iParam0)//Position - 0x16FF
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_25(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_25(int iParam0)//Position - 0x173C
{
	if (func_23(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_26(int iParam0)//Position - 0x1766
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

void func_27(int iParam0, int iParam1)//Position - 0x17A9
{
	unk_0xF0059F27F7BB6680(&(Global_19B04.f_6186.f_8[iParam0]), iParam1);
}

int func_28(int iParam0)//Position - 0x17C4
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

int func_29()//Position - 0x1875
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x1377080E9B0BD993(), 64);
	uVar1 = func_30(Var0);
	return uVar1;
}

int func_30(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x1892
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

void func_31(int iParam0, bool bParam1)//Position - 0x1A6C
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_33(iParam0, 0))
		{
			func_32(iParam0, 1, 0);
			func_32(iParam0, 2, 0);
			func_32(iParam0, 3, 0);
			func_32(iParam0, 4, 0);
			func_32(iParam0, 0, 1);
			Global_110A8[iParam0] = 1;
		}
	}
	else
	{
		func_32(iParam0, 0, 0);
	}
}

void func_32(int iParam0, int iParam1, bool bParam2)//Position - 0x1AC9
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

bool func_33(int iParam0, int iParam1)//Position - 0x1B04
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_19B04.f_7F22[iParam0], iParam1);
}

void func_34()//Position - 0x1B27
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	switch (iLocal_46)
	{
		case 0:
			func_68();
			func_67(7);
			unk_0xF243B7A14FCFD0F4(iLocal_60);
			iLocal_46 = 1;
			break;
		
		case 1:
			switch (iLocal_54)
			{
				case 0:
					if (unk_0xD6513D668481290A(iLocal_60))
					{
						unk_0xF243B7A14FCFD0F4(iLocal_59);
						iLocal_54++;
					}
					break;
				
				case 1:
					if (unk_0xD6513D668481290A(iLocal_59))
					{
						unk_0xF243B7A14FCFD0F4(iLocal_61);
						iLocal_54++;
					}
					break;
				
				case 2:
					if (unk_0xD6513D668481290A(iLocal_61))
					{
						unk_0xF243B7A14FCFD0F4(iLocal_62);
						iLocal_54++;
					}
					break;
				
				case 3:
					if (unk_0xD6513D668481290A(iLocal_62))
					{
						unk_0xF243B7A14FCFD0F4(iLocal_63);
						iLocal_54++;
					}
					break;
				
				case 4:
					if (unk_0xD6513D668481290A(iLocal_63))
					{
						unk_0x44840FD68E426678(sLocal_49);
						iLocal_54++;
					}
					break;
				
				case 5:
					if (unk_0x1E8349F219AC5AF9(sLocal_49))
					{
						unk_0x44840FD68E426678(sLocal_50);
						iLocal_54++;
					}
					break;
				
				case 6:
					if ((((((unk_0xD6513D668481290A(iLocal_60) && unk_0xD6513D668481290A(iLocal_59)) && unk_0xD6513D668481290A(iLocal_61)) && unk_0xD6513D668481290A(iLocal_63)) && unk_0xD6513D668481290A(iLocal_62)) && unk_0x1E8349F219AC5AF9(sLocal_49)) && unk_0x1E8349F219AC5AF9(sLocal_50))
					{
						func_63(0, vLocal_51, -1f, 1);
						unk_0x2CA123B0622F495C(iLocal_59);
						func_63(1, vLocal_51, -1082130432, 0);
						func_63(2, vLocal_51, -1082130432, 0);
						iVar0 = 0;
						while (iVar0 <= 4)
						{
							func_54(iVar0, 0, vLocal_51, -1082130432);
							iVar0++;
						}
						func_44(1);
						iLocal_54++;
					}
					break;
				
				case 7:
					if (func_43())
					{
						func_42(&(Local_48[0 /*4*/].f_1));
						func_67(1);
						unk_0xA902E18EDF6FA0C8(5, 1862763509, iLocal_77);
						unk_0xA902E18EDF6FA0C8(5, iLocal_77, 1862763509);
						func_63(3, vLocal_51, -1082130432, 0);
						func_63(4, vLocal_51, -1082130432, 0);
						unk_0x2CA123B0622F495C(iLocal_60);
						unk_0x2CA123B0622F495C(iLocal_62);
						func_54(7, 0, vLocal_51, -1082130432);
						func_54(8, 0, vLocal_51, -1082130432);
						func_54(9, 0, vLocal_51, -1082130432);
						func_54(10, 0, vLocal_51, -1082130432);
						unk_0x2CA123B0622F495C(iLocal_61);
						unk_0x2CA123B0622F495C(iLocal_63);
						iLocal_54++;
					}
					if (func_41())
					{
						if (!unk_0xBCBEDE9A08E4ED89(unk_0xBC25C936A095B5BA()))
						{
							unk_0xA902E18EDF6FA0C8(5, 1862763509, iLocal_77);
							unk_0xA902E18EDF6FA0C8(5, iLocal_77, 1862763509);
						}
						else if (!func_120(2))
						{
							unk_0xA902E18EDF6FA0C8(3, 1862763509, iLocal_77);
							unk_0xA902E18EDF6FA0C8(3, iLocal_77, 1862763509);
						}
					}
					break;
				
				case 8:
					bVar1 = true;
					iVar2 = 0;
					while (iVar2 <= 10)
					{
						if (!func_38(iVar2, 0))
						{
							bVar1 = false;
						}
						iVar2++;
					}
					if (bVar1)
					{
						iLocal_54++;
					}
					break;
				
				case 9:
					if (func_198(Local_48[0 /*4*/]))
					{
						if (func_37(unk_0xBC25C936A095B5BA(), vLocal_53, 1) >= 200f && func_37(Local_48[0 /*4*/], vLocal_53, 1) >= 200f)
						{
							iLocal_46 = 2;
						}
					}
					else
					{
						func_36();
					}
					break;
			}
			break;
		
		case 2:
			func_35(1);
			break;
	}
}

void func_35(int iParam0)//Position - 0x1E66
{
	iLocal_54 = 0;
	iLocal_46 = 0;
	iLocal_45 = iParam0;
}

void func_36()//Position - 0x1E78
{
	if (func_198(Local_48[0 /*4*/]))
	{
		unk_0xD421BC740C5340C3(Local_48[0 /*4*/], 2);
	}
	func_168(1, 0);
}

float func_37(int iParam0, vector3 vParam1, bool bParam2)//Position - 0x1E9C
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

int func_38(int iParam0, bool bParam1)//Position - 0x1ED6
{
	int iVar0;
	
	if (!func_198(Local_47[iParam0 /*6*/]))
	{
		return 1;
	}
	else
	{
		if (func_40(Local_47[iParam0 /*6*/], unk_0xBC25C936A095B5BA(), 1) >= 400f)
		{
			func_39(iParam0, 0);
			return 1;
		}
		if (bParam1)
		{
			iVar0 = iParam0;
			if (iVar0 >= 7 && !unk_0x2DA8CA50A72528FB(Local_47[iParam0 /*6*/].f_1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_39(int iParam0, bool bParam1)//Position - 0x1F3D
{
	if (unk_0x724D816EA203A79E(Local_47[iParam0 /*6*/]))
	{
		func_42(&(Local_47[iParam0 /*6*/].f_1));
		if ((((func_198(Local_47[iParam0 /*6*/]) && unk_0xE7E55F7532DEE345(Local_47[iParam0 /*6*/])) && !unk_0x5237AF95232D78C5(Local_47[iParam0 /*6*/], 1)) && !unk_0xCBBE5AFE2CD2E9B6(Local_47[iParam0 /*6*/])) && !unk_0x8F1FDD0A40DC834A(Local_47[iParam0 /*6*/]))
		{
			unk_0x17175087F2DB6AC8(Local_47[iParam0 /*6*/], 1, true);
		}
		if (bParam1)
		{
			unk_0xF845620A03C7425B(&(Local_47[iParam0 /*6*/]));
		}
		else
		{
			unk_0x02537C8C1BEEB477(&(Local_47[iParam0 /*6*/]));
		}
		Local_47[iParam0 /*6*/].f_3 = 0;
		Local_47[iParam0 /*6*/].f_2 = 0;
	}
}

float func_40(int iParam0, int iParam1, bool bParam2)//Position - 0x1FE5
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

bool func_41()//Position - 0x2043
{
	return unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 3150.508f, 2179.343f, -3.388727f, 3064.608f, 2223.616f, 12.38177f, 103f, 0, true, 0);
}

void func_42(int iParam0)//Position - 0x2079
{
	if (unk_0x2DA8CA50A72528FB(*iParam0))
	{
		unk_0x0BBAABB52887CF8C(*iParam0, false);
		unk_0x07B8ECB35A4ED3AC(iParam0);
	}
}

int func_43()//Position - 0x2099
{
	if (func_198(Local_48[0 /*4*/]) && unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Local_48[0 /*4*/], 0))
	{
		return 1;
	}
	return 0;
}

int func_44(int iParam0)//Position - 0x20C5
{
	if (func_48())
	{
		Global_19AFA = 1;
		Global_19AF7 = unk_0x105601648511CC64();
		if (func_15(Global_19AF9))
		{
			func_45(0);
		}
		unk_0x3FF92BBF0607A406(1, "RE_TITLE");
		if (iParam0 && func_15(Global_19AF9))
		{
			unk_0x621CEDEDDD531386();
		}
		return 1;
	}
	return 0;
}

void func_45(int iParam0)//Position - 0x2117
{
	switch (iParam0)
	{
		case 0:
			if (Global_19B04.f_6186.f_2 < 3)
			{
				if (!unk_0x5107E30005FCFEA8())
				{
					func_46(func_47(iParam0), -1);
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
					func_46(func_47(iParam0), -1);
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
					func_46(func_47(iParam0), -1);
					Global_19B04.f_6186.f_4++;
					unk_0xF0059F27F7BB6680(&Global_19B00, 2);
				}
			}
			break;
	}
}

void func_46(char* sParam0, int iParam1)//Position - 0x21F8
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, true, iParam1);
}

char* func_47(int iParam0)//Position - 0x220F
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

int func_48()//Position - 0x224F
{
	switch (func_49(&Global_62F8, 0, 5, 0, unk_0x8A55B15F4133C912()))
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

int func_49(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x2285
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
		if (func_53(0))
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
		if (!func_51(iParam2))
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
			func_50(uParam0, iParam4);
		}
	}
	return 2;
}

void func_50(var uParam0, int iParam1)//Position - 0x23BC
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

bool func_51(int iParam0)//Position - 0x240B
{
	return func_52(iParam0, Global_8C41);
}

int func_52(int iParam0, int iParam1)//Position - 0x241C
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

int func_53(int iParam0)//Position - 0x25FD
{
	if (Global_8C41 == 15)
	{
		return 0;
	}
	if (func_51(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_54(int iParam0, bool bParam1, vector3 vParam2, float fParam3)//Position - 0x261F
{
	vector3 vVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	vector3 vVar7;
	vector3 vVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	int iVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	bool bVar27;
	bool bVar28;
	bool bVar29;
	bool bVar30;
	bool bVar31;
	bool bVar32;
	bool bVar33;
	bool bVar34;
	bool bVar35;
	bool bVar36;
	bool bVar37;
	bool bVar38;
	bool bVar39;
	bool bVar40;
	int iVar41;
	bool bVar42;
	bool bVar43;
	bool bVar44;
	bool bVar45;
	bool bVar46;
	bool bVar47;
	bool bVar48;
	bool bVar49;
	bool bVar50;
	int iVar51;
	bool bVar52;
	int iVar53;
	int iVar54;
	bool bVar55;
	int iVar56;
	bool bVar57;
	int iVar58;
	bool bVar59;
	bool bVar60;
	bool bVar61;
	bool bVar62;
	bool bVar63;
	bool bVar64;
	bool bVar65;
	bool bVar66;
	bool bVar67;
	char* sVar68;
	
	if (!unk_0x724D816EA203A79E(Local_47[iParam0 /*6*/]))
	{
		iVar3 = joaat("weapon_unarmed");
		iVar4 = 0;
		iVar5 = -1;
		vVar7 = { vLocal_51 };
		vVar8 = { vLocal_51 };
		iVar9 = 0;
		iVar10 = 1;
		iVar11 = 0;
		iVar12 = 0;
		iVar13 = 1;
		fVar14 = 0.75f;
		fVar15 = 0.95f;
		fVar16 = 60f;
		fVar17 = 5f;
		fVar18 = 120f;
		fVar19 = -90f;
		fVar20 = 90f;
		fVar21 = 125f;
		iVar22 = iLocal_77;
		bVar23 = true;
		bVar24 = true;
		bVar25 = false;
		bVar26 = true;
		bVar27 = true;
		bVar28 = false;
		bVar29 = false;
		bVar30 = false;
		bVar31 = false;
		bVar32 = true;
		bVar33 = true;
		bVar34 = true;
		bVar35 = false;
		bVar36 = true;
		bVar37 = false;
		bVar38 = true;
		bVar39 = true;
		bVar40 = true;
		iVar41 = 1;
		bVar42 = true;
		bVar43 = true;
		bVar44 = false;
		bVar45 = false;
		bVar46 = false;
		bVar47 = false;
		bVar48 = false;
		bVar49 = false;
		bVar50 = true;
		iVar51 = 0;
		bVar52 = false;
		iVar53 = 0;
		iVar54 = 1;
		bVar55 = true;
		iVar56 = 0;
		bVar57 = false;
		iVar58 = 0;
		bVar59 = false;
		bVar60 = false;
		bVar61 = false;
		bVar62 = false;
		bVar63 = false;
		bVar64 = false;
		bVar65 = false;
		bVar66 = false;
		bVar67 = false;
		switch (iParam0)
		{
			case 0:
				iVar2 = iLocal_63;
				iVar4 = Local_48[1 /*4*/];
				iVar3 = joaat("weapon_pistol");
				bVar31 = true;
				bVar32 = false;
				bVar43 = false;
				bVar66 = true;
				break;
			
			case 1:
				iVar2 = iLocal_63;
				vVar0 = { unk_0xA4455714F3DCE207(Local_48[1 /*4*/], 0f, -1.7f, 0.9f) };
				fVar1 = (unk_0x349C94FFF43E2979(Local_48[1 /*4*/]) + 90f);
				sVar68 = "WORLD_HUMAN_HANG_OUT_STREET";
				iVar3 = joaat("weapon_microsmg");
				bVar31 = true;
				bVar32 = false;
				bVar43 = false;
				bVar66 = true;
				break;
			
			case 2:
				iVar2 = iLocal_61;
				iVar4 = Local_48[2 /*4*/];
				iVar3 = joaat("weapon_pistol");
				bVar31 = true;
				bVar32 = false;
				bVar43 = false;
				bVar66 = true;
				break;
			
			case 3:
				iVar2 = iLocal_61;
				vVar0 = { unk_0xA4455714F3DCE207(Local_48[2 /*4*/], 0f, -1.5f, 0.9f) };
				fVar1 = (unk_0x349C94FFF43E2979(Local_48[2 /*4*/]) + 90f);
				sVar68 = "WORLD_HUMAN_HANG_OUT_STREET";
				iVar3 = joaat("weapon_microsmg");
				bVar31 = true;
				bVar32 = false;
				bVar43 = false;
				bVar66 = true;
				break;
			
			case 4:
				iVar2 = iLocal_61;
				vVar0 = { unk_0xA4455714F3DCE207(Local_48[2 /*4*/], 0f, -2.3f, 0.9f) };
				fVar1 = (unk_0x349C94FFF43E2979(Local_48[2 /*4*/]) + 90f);
				sVar68 = "WORLD_HUMAN_HANG_OUT_STREET";
				iVar3 = joaat("weapon_pistol");
				bVar31 = true;
				bVar32 = false;
				bVar43 = false;
				bVar66 = true;
				break;
			
			case 7:
				iVar2 = iLocal_61;
				iVar4 = Local_48[3 /*4*/];
				iVar3 = joaat("weapon_pistol");
				bVar31 = true;
				bVar32 = false;
				bVar43 = false;
				bVar66 = true;
				break;
			
			case 8:
				iVar2 = iLocal_61;
				iVar4 = Local_48[3 /*4*/];
				iVar5 = 0;
				iVar3 = joaat("weapon_microsmg");
				bVar31 = true;
				bVar32 = false;
				bVar43 = false;
				bVar66 = true;
				break;
			
			case 9:
				iVar2 = iLocal_63;
				iVar4 = Local_48[4 /*4*/];
				iVar3 = joaat("weapon_pistol");
				bVar31 = true;
				bVar32 = false;
				bVar43 = false;
				bVar66 = true;
				break;
			
			case 10:
				iVar2 = iLocal_63;
				iVar4 = Local_48[4 /*4*/];
				iVar5 = 0;
				iVar3 = joaat("weapon_microsmg");
				bVar31 = true;
				bVar32 = false;
				bVar43 = false;
				bVar66 = true;
				break;
			
			default:
				break;
		}
		if (!unk_0xD6513D668481290A(iVar2))
		{
			return 0;
		}
		if (!func_62(vParam2, vLocal_51, 0))
		{
			if (!unk_0x724D816EA203A79E(iVar6))
			{
				vVar0 = { vParam2 };
			}
			else
			{
				vVar7 = { vParam2 };
			}
		}
		if (fParam3 != -1f)
		{
			fVar1 = fParam3;
		}
		if (func_198(iVar4))
		{
			Local_47[iParam0 /*6*/] = unk_0xFD8987C090669BD5(iVar4, 26, iVar2, iVar5, 1, true);
		}
		else
		{
			Local_47[iParam0 /*6*/] = unk_0x01B3635C3E8EDD81(26, iVar2, vVar0, fVar1, 1, true);
			unk_0xD434A01DEA38A939(Local_47[iParam0 /*6*/], bVar36, 0);
			unk_0x9D4580413149EEBF(Local_47[iParam0 /*6*/], !bVar60, 0);
		}
		if (bVar35)
		{
			unk_0xD5874E4A4BF782FC(Local_47[iParam0 /*6*/], vVar0, 0, 0, 1);
		}
		if (bParam1)
		{
			if (iVar22 == iLocal_77)
			{
				Local_47[iParam0 /*6*/].f_1 = func_59(Local_47[iParam0 /*6*/], 1, 145);
			}
			else
			{
				Local_47[iParam0 /*6*/].f_1 = func_59(Local_47[iParam0 /*6*/], 0, 145);
			}
		}
		unk_0xC16125F7120775B6(Local_47[iParam0 /*6*/], iVar54);
		unk_0xC8FD3EBBB90E8D7F(Local_47[iParam0 /*6*/], 213, bVar23);
		unk_0xC8FD3EBBB90E8D7F(Local_47[iParam0 /*6*/], 212, bVar24);
		unk_0x2E35C4FA5F0ED22F(Local_47[iParam0 /*6*/], bVar25);
		unk_0x22321800954A532E(Local_47[iParam0 /*6*/], bVar26);
		unk_0x566684DB6DAC0531(Local_47[iParam0 /*6*/], bVar27);
		unk_0xC8FD3EBBB90E8D7F(Local_47[iParam0 /*6*/], 188, bVar50);
		unk_0xC8FD3EBBB90E8D7F(Local_47[iParam0 /*6*/], 42, !bVar28);
		unk_0x91629AC1E1F78419(Local_47[iParam0 /*6*/], 9, bVar30);
		unk_0x91629AC1E1F78419(Local_47[iParam0 /*6*/], 3, bVar32);
		unk_0xC8FD3EBBB90E8D7F(Local_47[iParam0 /*6*/], 342, bVar52);
		unk_0xB71D41C0310C93DE(Local_47[iParam0 /*6*/], bVar31, 1);
		unk_0x6BBC364B0AA788E8(Local_47[iParam0 /*6*/], iVar12);
		unk_0x91629AC1E1F78419(Local_47[iParam0 /*6*/], 8, bVar34);
		unk_0xDC078F87049ECECE(Local_47[iParam0 /*6*/], bVar33, 0);
		unk_0x1E5C2A1EAB944289(Local_47[iParam0 /*6*/], bVar37);
		unk_0x7A535CE1F001F3FE(Local_47[iParam0 /*6*/], iVar3, -1, bVar29, bVar29);
		unk_0x91629AC1E1F78419(Local_47[iParam0 /*6*/], 2, bVar38);
		unk_0x91629AC1E1F78419(Local_47[iParam0 /*6*/], 1, bVar39);
		unk_0x91629AC1E1F78419(Local_47[iParam0 /*6*/], 52, bVar40);
		unk_0x91629AC1E1F78419(Local_47[iParam0 /*6*/], 13, bVar63);
		unk_0x751846449040F7EC(Local_47[iParam0 /*6*/], iVar41);
		unk_0xB105531EDD3DE51B(Local_47[iParam0 /*6*/], bVar42);
		unk_0xC8FD3EBBB90E8D7F(Local_47[iParam0 /*6*/], 118, bVar43);
		unk_0xC8FD3EBBB90E8D7F(Local_47[iParam0 /*6*/], 115, bVar44);
		unk_0x91629AC1E1F78419(Local_47[iParam0 /*6*/], 12, bVar45);
		unk_0x91629AC1E1F78419(Local_47[iParam0 /*6*/], 36, bVar46);
		unk_0x91629AC1E1F78419(Local_47[iParam0 /*6*/], 35, bVar47);
		unk_0x91629AC1E1F78419(Local_47[iParam0 /*6*/], 29, bVar48);
		unk_0xC8FD3EBBB90E8D7F(Local_47[iParam0 /*6*/], 185, bVar49);
		unk_0x7F159E8BAEBBE6EE(Local_47[iParam0 /*6*/], iVar51);
		unk_0x91629AC1E1F78419(Local_47[iParam0 /*6*/], 17, bVar57);
		unk_0x91629AC1E1F78419(Local_47[iParam0 /*6*/], 5, bVar66);
		unk_0x91629AC1E1F78419(Local_47[iParam0 /*6*/], 46, bVar67);
		unk_0x3207596BE256C917(Local_47[iParam0 /*6*/], iVar58);
		unk_0x0DEF5E53360637F2(Local_47[iParam0 /*6*/], iVar53);
		func_58(Local_47[iParam0 /*6*/], fVar16, fVar17, fVar18, fVar19, fVar20);
		unk_0x346478B12F69D4E3(Local_47[iParam0 /*6*/], bVar61);
		unk_0xC8FD3EBBB90E8D7F(Local_47[iParam0 /*6*/], 203, bVar62);
		unk_0xE002A140019092D9(Local_47[iParam0 /*6*/], !bVar62);
		if (!bVar55)
		{
			func_57(iParam0, 2);
		}
		if (!unk_0xF1734B55490E9045(sVar68))
		{
			unk_0xA3A7138EAD2268A0(Local_47[iParam0 /*6*/], sVar68, -1, 0);
		}
		if (iVar11 > 0)
		{
			if (iVar11 > unk_0x0992793998FBCE2B(Local_47[iParam0 /*6*/]) || iVar56)
			{
				unk_0xD62A17B791ABB06F(Local_47[iParam0 /*6*/], iVar11);
			}
			unk_0x65E471E4A2D56226(Local_47[iParam0 /*6*/], iVar11, 0);
		}
		if (iVar13 > 0)
		{
			unk_0xFC3C88E2313FA926(Local_47[iParam0 /*6*/], iVar13);
		}
		if (fVar21 >= 0f)
		{
			unk_0x5AAB329BBC1053A1(Local_47[iParam0 /*6*/], fVar21);
		}
		if (fVar14 > 0f || fVar15 > 0f)
		{
			unk_0xDF55FBF0BCED278F(Local_47[iParam0 /*6*/], fVar14, fVar15);
		}
		if (bVar64)
		{
			unk_0xE95574194EEDAEF7(Local_47[iParam0 /*6*/], vVar0, 5f, 0, 0);
		}
		if (bVar65)
		{
			unk_0x7E241C919AF77423(Local_47[iParam0 /*6*/]);
		}
		unk_0x4106FAF8AA1D69D5(Local_47[iParam0 /*6*/], iVar22);
		if (unk_0x724D816EA203A79E(iVar6))
		{
			unk_0x5DBE04849460E608(Local_47[iParam0 /*6*/], iVar6, -1, vVar7, vVar8, 1, 1, 1, 0, 2, 1);
			unk_0xF1FC2182A76AD7FC(Local_47[iParam0 /*6*/], 0);
			func_57(iParam0, 1);
		}
		func_56(iParam0);
		func_55(iParam0);
		if (iVar9 != 0)
		{
			unk_0xC808BD76500BA693(Local_47[iParam0 /*6*/], iVar3, iVar9);
			unk_0x8E25082A46F87892(Local_47[iParam0 /*6*/], iVar3, true);
		}
		unk_0xE20EB9C9BC14ECEB(Local_47[iParam0 /*6*/], iVar10);
		if (bVar59)
		{
			unk_0x4060A19D5551068A(Local_47[iParam0 /*6*/], 1, "DEFAULT_ACTION");
		}
		return 1;
	}
	return 0;
}

void func_55(int iParam0)//Position - 0x2D60
{
	if (func_198(Local_47[iParam0 /*6*/]))
	{
		switch (iParam0)
		{
			case 0:
				break;
			}
	}
}

void func_56(int iParam0)//Position - 0x2D85
{
	if (func_198(Local_47[iParam0 /*6*/]))
	{
		switch (iParam0)
		{
			case 0:
				unk_0xB0031DDAE4FF0BC3(Local_47[iParam0 /*6*/], 0, 0, 0, 0);
				unk_0xB0031DDAE4FF0BC3(Local_47[iParam0 /*6*/], 3, 0, 0, 0);
				unk_0xB0031DDAE4FF0BC3(Local_47[iParam0 /*6*/], 4, 0, 0, 0);
				break;
			
			case 1:
				unk_0xB0031DDAE4FF0BC3(Local_47[iParam0 /*6*/], 0, 1, 1, 0);
				unk_0xB0031DDAE4FF0BC3(Local_47[iParam0 /*6*/], 3, 1, 2, 0);
				unk_0xB0031DDAE4FF0BC3(Local_47[iParam0 /*6*/], 4, 0, 1, 0);
				break;
			
			case 2:
				unk_0xB0031DDAE4FF0BC3(Local_47[iParam0 /*6*/], 0, 0, 0, 0);
				unk_0xB0031DDAE4FF0BC3(Local_47[iParam0 /*6*/], 3, 0, 0, 0);
				unk_0xB0031DDAE4FF0BC3(Local_47[iParam0 /*6*/], 4, 0, 0, 0);
				break;
			
			case 3:
				unk_0xB0031DDAE4FF0BC3(Local_47[iParam0 /*6*/], 0, 1, 0, 0);
				unk_0xB0031DDAE4FF0BC3(Local_47[iParam0 /*6*/], 3, 1, 0, 0);
				unk_0xB0031DDAE4FF0BC3(Local_47[iParam0 /*6*/], 4, 0, 1, 0);
				break;
			
			case 4:
				unk_0xB0031DDAE4FF0BC3(Local_47[iParam0 /*6*/], 0, 1, 2, 0);
				unk_0xB0031DDAE4FF0BC3(Local_47[iParam0 /*6*/], 3, 0, 1, 0);
				unk_0xB0031DDAE4FF0BC3(Local_47[iParam0 /*6*/], 4, 1, 0, 0);
				break;
			
			case 7:
				unk_0xB0031DDAE4FF0BC3(Local_47[iParam0 /*6*/], 0, 0, 2, 0);
				unk_0xB0031DDAE4FF0BC3(Local_47[iParam0 /*6*/], 3, 1, 2, 0);
				unk_0xB0031DDAE4FF0BC3(Local_47[iParam0 /*6*/], 4, 1, 2, 0);
				break;
			
			case 8:
				unk_0xB0031DDAE4FF0BC3(Local_47[iParam0 /*6*/], 0, 1, 1, 0);
				unk_0xB0031DDAE4FF0BC3(Local_47[iParam0 /*6*/], 3, 0, 2, 0);
				unk_0xB0031DDAE4FF0BC3(Local_47[iParam0 /*6*/], 4, 0, 2, 0);
				break;
			
			case 9:
				unk_0xB0031DDAE4FF0BC3(Local_47[iParam0 /*6*/], 0, 1, 2, 0);
				unk_0xB0031DDAE4FF0BC3(Local_47[iParam0 /*6*/], 3, 0, 1, 0);
				unk_0xB0031DDAE4FF0BC3(Local_47[iParam0 /*6*/], 4, 0, 2, 0);
				break;
			
			case 10:
				unk_0xB0031DDAE4FF0BC3(Local_47[iParam0 /*6*/], 0, 0, 1, 0);
				unk_0xB0031DDAE4FF0BC3(Local_47[iParam0 /*6*/], 3, 1, 1, 0);
				unk_0xB0031DDAE4FF0BC3(Local_47[iParam0 /*6*/], 4, 1, 0, 0);
				break;
			}
	}
}

void func_57(int iParam0, int iParam1)//Position - 0x2F6C
{
	unk_0xF0059F27F7BB6680(&(Local_47[iParam0 /*6*/].f_2), iParam1);
}

void func_58(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0x2F82
{
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		unk_0x6CCBC1B22488DC0C(iParam0, fParam1);
		unk_0xAA40189C27870A99(iParam0, fParam2);
		unk_0x3BA6DE071C07D143(iParam0, (fParam3 / 2f));
		unk_0x1BAA0038DD57C475(iParam0, fParam4);
		unk_0x9C4E6006A4F26EB5(iParam0, fParam5);
	}
}

int func_59(int iParam0, bool bParam1, int iParam2)//Position - 0x2FBE
{
	int iVar0;
	
	iVar0 = func_60(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x2DA8CA50A72528FB(iVar0)) && unk_0x0F6F4C227FB5DD52(&(Global_19B04.f_6D75[iParam2 /*29*/].f_3)))
	{
		unk_0x436D0272182E484D(iVar0, &(Global_19B04.f_6D75[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_60(int iParam0, bool bParam1, bool bParam2)//Position - 0x3010
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

float func_61(bool bParam0, float fParam1, float fParam2)//Position - 0x30B4
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_62(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x30CB
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_63(int iParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0x3112
{
	vector3 vVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	float fVar21;
	float fVar22;
	float fVar23;
	int iVar24;
	vector3 vVar25;
	vector3 vVar26;
	char* sVar27;
	
	if (!unk_0x724D816EA203A79E(Local_48[iParam0 /*4*/]))
	{
		iVar3 = 0;
		bVar4 = true;
		bVar5 = true;
		bVar6 = false;
		bVar7 = false;
		bVar8 = true;
		bVar9 = false;
		bVar10 = false;
		bVar11 = true;
		bVar12 = false;
		bVar13 = false;
		iVar14 = 0;
		iVar15 = 0;
		iVar16 = 0;
		bVar17 = true;
		bVar18 = false;
		bVar19 = false;
		iVar20 = 1;
		fVar22 = -1f;
		fVar23 = -1f;
		switch (iParam0)
		{
			case 0:
				vVar0 = { vLocal_53 };
				fVar1 = 163.5528f;
				iVar2 = iLocal_59;
				bVar11 = false;
				iVar16 = 1;
				bVar17 = false;
				bVar19 = true;
				bVar6 = true;
				break;
			
			case 1:
				vVar0 = { 3087.114f, 2195.558f, 2f };
				fVar1 = 157.68f;
				iVar2 = iLocal_62;
				bVar18 = true;
				bVar9 = true;
				bVar19 = true;
				iVar20 = 0;
				iVar16 = 1;
				bVar17 = false;
				break;
			
			case 2:
				vVar0 = { 3092.788f, 2197.243f, 2f };
				fVar1 = -22.32f;
				iVar2 = iLocal_60;
				bVar18 = true;
				bVar9 = true;
				bVar19 = true;
				iVar20 = 0;
				iVar16 = 1;
				bVar17 = false;
				break;
			
			case 3:
				vVar0 = { 3170.401f, 1964.587f, 0.2889f };
				fVar1 = 341.1273f;
				iVar2 = iLocal_60;
				bVar18 = true;
				bVar9 = true;
				bVar19 = true;
				iVar20 = 0;
				iVar16 = 1;
				bVar17 = false;
				break;
			
			case 4:
				vVar0 = { 3227.12f, 2074.91f, 0.75f };
				fVar1 = 175.16f;
				iVar2 = iLocal_62;
				bVar18 = true;
				bVar9 = true;
				bVar19 = true;
				iVar20 = 0;
				iVar16 = 1;
				bVar17 = false;
				break;
			
			default:
				break;
		}
		if (!unk_0xD6513D668481290A(iVar2))
		{
			return 0;
		}
		if (!func_62(vParam1, vLocal_51, 0))
		{
			vVar0 = { vParam1 };
		}
		if (fParam2 != -1f)
		{
			fVar1 = fParam2;
		}
		Local_48[iParam0 /*4*/] = unk_0x61C05BF08A1E0EFE(iVar2, vVar0, fVar1, true, true, false);
		func_66(iParam0);
		func_65(iParam0);
		unk_0xDC078F87049ECECE(Local_48[iParam0 /*4*/], bVar5, 0);
		if (unk_0x724D816EA203A79E(iVar24))
		{
			unk_0x5DBE04849460E608(Local_48[iParam0 /*4*/], iVar24, -1, vVar25, vVar26, 0, 0, 0, 0, 2, 1);
		}
		else
		{
			unk_0xD434A01DEA38A939(Local_48[iParam0 /*4*/], bVar4, 0);
		}
		unk_0xDB35A2F9333ABEC5(Local_48[iParam0 /*4*/], bVar6);
		unk_0x346478B12F69D4E3(Local_48[iParam0 /*4*/], bVar7);
		unk_0xE82050D41B744FF3(Local_48[iParam0 /*4*/], bVar8);
		if (bVar9)
		{
			unk_0x2D655AA68FA1736B(Local_48[iParam0 /*4*/], bVar9, true, 0);
		}
		unk_0x1E5C2A1EAB944289(Local_48[iParam0 /*4*/], bVar12);
		unk_0xB71D41C0310C93DE(Local_48[iParam0 /*4*/], bVar13, 1);
		unk_0xE4F4552195F606F3(Local_48[iParam0 /*4*/], iVar14);
		unk_0x8E09D18948A46B3C(Local_48[iParam0 /*4*/], iVar15);
		unk_0xD38EB677CBE7440A(Local_48[iParam0 /*4*/], bVar17, 0);
		unk_0x6FA721E3E050370C(Local_48[iParam0 /*4*/], iVar16);
		unk_0xF82197F205B9D8FD(Local_48[iParam0 /*4*/], bVar18);
		unk_0x8300C56586249382(Local_48[iParam0 /*4*/], iVar20);
		if (!unk_0xF1734B55490E9045(sVar27))
		{
			unk_0xEA0AB6C644C58C1D(Local_48[iParam0 /*4*/], sVar27);
		}
		if (fVar21 > 0f)
		{
			unk_0xA4DFFFD5B234240D(Local_48[iParam0 /*4*/], fVar21);
		}
		if (bVar10)
		{
			unk_0x251A179731E0D207(Local_48[iParam0 /*4*/]);
		}
		if (fVar22 >= 0f)
		{
			unk_0xE1A880C1DE5635B8(Local_48[iParam0 /*4*/], fVar22);
		}
		if (fVar23 >= 0f)
		{
			unk_0x5FB7CC6EFE432434(Local_48[iParam0 /*4*/], fVar23);
		}
		if (bVar19)
		{
			unk_0x625842570605740F(Local_48[iParam0 /*4*/], true);
		}
		if (iVar3 != 0)
		{
			unk_0xD421BC740C5340C3(Local_48[iParam0 /*4*/], iVar3);
		}
		if (bParam3)
		{
			Local_48[iParam0 /*4*/].f_1 = func_64(Local_48[iParam0 /*4*/], bVar11, 0);
		}
		if (iParam0 == 0)
		{
			unk_0xA1EE8501940C1D3E(Local_48[iParam0 /*4*/], 3);
		}
	}
	return 1;
}

int func_64(int iParam0, bool bParam1, bool bParam2)//Position - 0x344F
{
	return func_60(iParam0, !bParam1, bParam2);
}

void func_65(int iParam0)//Position - 0x3462
{
	if (func_198(Local_48[iParam0 /*4*/]))
	{
		switch (iParam0)
		{
			case 2:
			case 3:
				unk_0xE54F7105CEA81918(Local_48[iParam0 /*4*/], 1, true);
				unk_0xE54F7105CEA81918(Local_48[iParam0 /*4*/], 2, true);
				unk_0xE54F7105CEA81918(Local_48[iParam0 /*4*/], 3, true);
				unk_0xE54F7105CEA81918(Local_48[iParam0 /*4*/], 4, true);
				unk_0xE54F7105CEA81918(Local_48[iParam0 /*4*/], 5, false);
				break;
			
			case 1:
			case 4:
				unk_0xE54F7105CEA81918(Local_48[iParam0 /*4*/], 1, true);
				unk_0xE54F7105CEA81918(Local_48[iParam0 /*4*/], 2, true);
				unk_0xE54F7105CEA81918(Local_48[iParam0 /*4*/], 3, true);
				unk_0xE54F7105CEA81918(Local_48[iParam0 /*4*/], 4, false);
				unk_0xE54F7105CEA81918(Local_48[iParam0 /*4*/], 5, true);
				break;
			}
	}
}

void func_66(int iParam0)//Position - 0x3514
{
	if (func_198(Local_48[iParam0 /*4*/]))
	{
		switch (iParam0)
		{
			case 1:
				unk_0x914C5DE0B15B8B59(Local_48[iParam0 /*4*/], 111, 28);
				unk_0x4C59702AC1076A88(Local_48[iParam0 /*4*/], 111, 156);
				break;
			
			case 2:
				unk_0x914C5DE0B15B8B59(Local_48[iParam0 /*4*/], 121, 20);
				unk_0x4C59702AC1076A88(Local_48[iParam0 /*4*/], 0, 156);
				break;
			
			case 3:
				unk_0x914C5DE0B15B8B59(Local_48[iParam0 /*4*/], 121, 46);
				unk_0x4C59702AC1076A88(Local_48[iParam0 /*4*/], 0, 156);
				break;
			
			case 4:
				unk_0x914C5DE0B15B8B59(Local_48[iParam0 /*4*/], 111, 54);
				unk_0x4C59702AC1076A88(Local_48[iParam0 /*4*/], 112, 156);
				break;
			}
	}
}

void func_67(int iParam0)//Position - 0x35BC
{
	unk_0xF0059F27F7BB6680(&iLocal_55, iParam0);
}

void func_68()//Position - 0x35CC
{
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
	}
	func_80(1);
	unk_0xCB8EEC006EBFC1E7(1);
	func_79(0);
	unk_0x379ACE23D404525C(3073.41f, 2161.604f, -20f, 3123.816f, 2216.9f, 9.0777f, false, 1);
	unk_0xDD56BACCCF835044(3073.41f, 2161.604f, -20f, 3123.816f, 2216.9f, 9.0777f, 0);
	if (!unk_0x33CC9445B2DF9387(3084.41f, 2080.39f, 0f, 2f))
	{
		unk_0x379ACE23D404525C(3077.523f, 2069.831f, -3.3524f, 3092.296f, 2092.042f, 2.769f, false, 1);
		unk_0xDD56BACCCF835044(3077.523f, 2069.831f, -3.3524f, 3092.296f, 2092.042f, 2.769f, 0);
	}
	if (!unk_0x33CC9445B2DF9387(3062.67f, 2081.65f, 0f, 2f))
	{
		unk_0x379ACE23D404525C(3054.367f, 2071.361f, -2.4173f, 3075.652f, 2091.954f, 2.7296f, false, 1);
		unk_0xDD56BACCCF835044(3054.367f, 2071.361f, -2.4173f, 3075.652f, 2091.954f, 2.7296f, 0);
	}
	if (!unk_0x33CC9445B2DF9387(3075.716f, 2125.59f, 0.8052f, 2f))
	{
		unk_0xA0C0B32E74BE8DB7(3075.716f, 2125.59f, 0.8052f, 5f, 0);
	}
	if (!unk_0x33CC9445B2DF9387(3070.882f, 2103.967f, -2.0883f, 2f))
	{
		unk_0xEDAD35A0D81ED3FB(3070.882f, 2103.967f, -2.0883f, 5f, 0, 0, 0, 0, false, 0);
	}
	unk_0xB2CB6EAA6B280A84("ENEMIES", &iLocal_77);
	unk_0xA902E18EDF6FA0C8(1, 1862763509, 1862763509);
	unk_0xA902E18EDF6FA0C8(3, 1862763509, iLocal_77);
	unk_0xA902E18EDF6FA0C8(1, iLocal_77, iLocal_77);
	unk_0xA902E18EDF6FA0C8(3, iLocal_77, 1862763509);
	unk_0x4106FAF8AA1D69D5(unk_0xBC25C936A095B5BA(), 1862763509);
	func_78(&uLocal_79, 1, unk_0xBC25C936A095B5BA(), "TREVOR", 0, 1);
	unk_0xDF53A66AEE1401AA(0f);
	func_69(1);
}

void func_69(bool bParam0)//Position - 0x37B7
{
	func_70(39, bParam0);
	func_70(40, bParam0);
	func_70(41, bParam0);
	func_70(42, bParam0);
	func_70(43, bParam0);
	func_70(44, bParam0);
}

void func_70(int iParam0, bool bParam1)//Position - 0x37EF
{
	if (bParam1)
	{
		if (!func_77(iParam0, 2, 1))
		{
			func_76(iParam0, 2, 1);
		}
	}
	else if (func_77(iParam0, 2, 1))
	{
		func_71(iParam0, 2, 1);
	}
}

void func_71(int iParam0, int iParam1, bool bParam2)//Position - 0x3826
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0x7CB6FD92BE491AD9(&(Global_16B4F.f_531[iParam0]), iParam1);
	}
	else if (unk_0x7AF0088ABFA713B6())
	{
		if (func_10() == 0)
		{
			iVar0 = func_74(func_75(iParam0), -1, 0);
			unk_0x7CB6FD92BE491AD9(&iVar0, iParam1);
			func_72(func_75(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_29C[iParam0]), iParam1);
	}
}

void func_72(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x388F
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_73(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, iParam3);
	}
}

int func_73(var uParam0)//Position - 0x38BF
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_13();
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

int func_74(int iParam0, int iParam1, int iParam2)//Position - 0x38F3
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_73(iParam1)];
	if (unk_0x6CB99B97664C3727(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_75(int iParam0)//Position - 0x3925
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

void func_76(int iParam0, int iParam1, bool bParam2)//Position - 0x3C19
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0xF0059F27F7BB6680(&(Global_16B4F.f_531[iParam0]), iParam1);
	}
	else if (unk_0x7AF0088ABFA713B6())
	{
		if (func_10() == 0)
		{
			iVar0 = func_74(func_75(iParam0), -1, 0);
			unk_0xF0059F27F7BB6680(&iVar0, iParam1);
			func_72(func_75(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xF0059F27F7BB6680(&(Global_19B04.f_29C[iParam0]), iParam1);
	}
}

int func_77(int iParam0, int iParam1, bool bParam2)//Position - 0x3C82
{
	if (bParam2)
	{
		return unk_0xFA30DFD0084E92FE(Global_16B4F.f_531[iParam0], iParam1);
	}
	else if (unk_0x7AF0088ABFA713B6())
	{
		if (func_10() == 0)
		{
			return unk_0xFA30DFD0084E92FE(func_74(func_75(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xFA30DFD0084E92FE(Global_19B04.f_29C[iParam0], iParam1);
	}
	return 0;
}

void func_78(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x3CE2
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

void func_79(int iParam0)//Position - 0x3D7D
{
	switch (iParam0)
	{
		case 0:
			iLocal_78[iParam0] = unk_0x1DAA351326EA3537(3054.991f, 1995.887f, -20f, 3140.817f, 2225.639f, 10.453f, 0, 1, 1, 1);
			break;
	}
}

void func_80(int iParam0)//Position - 0x3DC1
{
	iParam0 = iParam0;
}

void func_81()//Position - 0x3DCD
{
	if (!func_119())
	{
		if (func_106())
		{
			func_168(1, 0);
		}
	}
	unk_0x2E94C9549322098D("RE_SEAPLANE", 0);
	func_105();
	func_93();
	func_89();
	func_84();
	func_82(&uLocal_64, &uLocal_56);
}

void func_82(var uParam0, var uParam1)//Position - 0x3E0B
{
	int iVar0;
	int iVar1;
	
	if (((((*uParam0)[*uParam1 /*6*/] != 0 && unk_0x724D816EA203A79E((*uParam0)[*uParam1 /*6*/])) && (uParam0[*uParam1 /*6*/])->f_1 != 0) && unk_0x724D816EA203A79E((uParam0[*uParam1 /*6*/])->f_1)) && (uParam0[*uParam1 /*6*/])->f_4)
	{
		if (func_83((uParam0[*uParam1 /*6*/])->f_2, 2))
		{
			(uParam0[*uParam1 /*6*/])->f_5 = unk_0x5CEC84BB4AC55121((*uParam0)[*uParam1 /*6*/], (uParam0[*uParam1 /*6*/])->f_1);
		}
		else
		{
			(uParam0[*uParam1 /*6*/])->f_5 = unk_0x4833C1F1F1364989((*uParam0)[*uParam1 /*6*/], (uParam0[*uParam1 /*6*/])->f_1, (uParam0[*uParam1 /*6*/])->f_3);
		}
	}
	iVar0++;
	*uParam1++;
	if (*uParam1 >= *uParam0)
	{
		*uParam1 = 0;
	}
	while ((((*uParam0)[*uParam1 /*6*/] == 0 || !unk_0x724D816EA203A79E((*uParam0)[*uParam1 /*6*/])) || ((uParam0[*uParam1 /*6*/])->f_1 == 0 || !unk_0x724D816EA203A79E((uParam0[*uParam1 /*6*/])->f_1))) && iVar0 < *uParam0)
	{
		iVar0++;
		*uParam1++;
		if (*uParam1 >= *uParam0)
		{
			*uParam1 = 0;
		}
	}
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (!(uParam0[iVar1 /*6*/])->f_4)
		{
			(*uParam0)[iVar1 /*6*/] = 0;
			(uParam0[iVar1 /*6*/])->f_1 = 0;
			(uParam0[iVar1 /*6*/])->f_2 = 0;
			(uParam0[iVar1 /*6*/])->f_3 = 0;
			(uParam0[iVar1 /*6*/])->f_5 = 0;
		}
		(uParam0[iVar1 /*6*/])->f_4 = 0;
		iVar1++;
	}
}

bool func_83(var uParam0, int iParam1)//Position - 0x3F91
{
	return (uParam0 && iParam1) != 0;
}

void func_84()//Position - 0x3FA0
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (unk_0x724D816EA203A79E(Local_47[iVar0 /*6*/]) && unk_0x2DA8CA50A72528FB(Local_47[iVar0 /*6*/].f_1))
		{
			if (unk_0x5237AF95232D78C5(Local_47[iVar0 /*6*/], 0))
			{
				if (!func_88(iVar0, 0))
				{
					unk_0x3F5F1772D71D5EC4(Local_47[iVar0 /*6*/].f_1, 1f);
					func_57(iVar0, 0);
				}
				if (func_87(Local_47[iVar0 /*6*/], 0) != -1)
				{
					if (func_86(iVar0))
					{
						if (unk_0xB1D6718ACE798CBB(Local_47[iVar0 /*6*/].f_1) > 0)
						{
							unk_0x7781946F1FC054FA(Local_47[iVar0 /*6*/].f_1, 0);
							unk_0xF71DF45ABB5957A5(Local_47[iVar0 /*6*/].f_1, 1);
						}
					}
					else if (unk_0xB1D6718ACE798CBB(Local_47[iVar0 /*6*/].f_1) == 0)
					{
						unk_0x7781946F1FC054FA(Local_47[iVar0 /*6*/].f_1, 255);
						unk_0xF71DF45ABB5957A5(Local_47[iVar0 /*6*/].f_1, 0);
					}
				}
			}
			else if (func_88(iVar0, 0))
			{
				unk_0x3F5F1772D71D5EC4(Local_47[iVar0 /*6*/].f_1, 0.7f);
				func_85(iVar0, 0);
				if (unk_0xB1D6718ACE798CBB(Local_47[iVar0 /*6*/].f_1) == 0)
				{
					unk_0x7781946F1FC054FA(Local_47[iVar0 /*6*/].f_1, 255);
					unk_0xF71DF45ABB5957A5(Local_47[iVar0 /*6*/].f_1, 0);
				}
			}
			if (unk_0x36CEFBE9B745A58D(Local_47[iVar0 /*6*/]))
			{
				func_42(&(Local_47[iVar0 /*6*/].f_1));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0x724D816EA203A79E(Local_48[iVar0 /*4*/]) && unk_0x2DA8CA50A72528FB(Local_48[iVar0 /*4*/].f_1))
		{
			if (!unk_0xE59B7F5A03335350(Local_48[iVar0 /*4*/], 0))
			{
				func_42(&(Local_48[iVar0 /*4*/].f_1));
			}
		}
		iVar0++;
	}
}

void func_85(int iParam0, int iParam1)//Position - 0x412C
{
	unk_0x7CB6FD92BE491AD9(&(Local_47[iParam0 /*6*/].f_2), iParam1);
}

int func_86(int iParam0)//Position - 0x4142
{
	if (iParam0 == 1)
	{
		if (!func_198(Local_47[0 /*6*/]))
		{
			return 0;
		}
	}
	if (iParam0 == 3)
	{
		if (!func_198(Local_47[2 /*6*/]))
		{
			return 0;
		}
	}
	if (iParam0 == 4)
	{
		if (!func_198(Local_47[2 /*6*/]) && !func_198(Local_47[3 /*6*/]))
		{
			return 0;
		}
	}
	if (iParam0 == 8)
	{
		if (!func_198(Local_47[7 /*6*/]))
		{
			return 0;
		}
	}
	if (iParam0 == 10)
	{
		if (!func_198(Local_47[9 /*6*/]))
		{
			return 0;
		}
	}
	return 1;
}

int func_87(int iParam0, int iParam1)//Position - 0x41D0
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

bool func_88(int iParam0, int iParam1)//Position - 0x4255
{
	return unk_0xFA30DFD0084E92FE(Local_47[iParam0 /*6*/].f_2, iParam1);
}

void func_89()//Position - 0x426B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0x724D816EA203A79E(Local_48[iVar0 /*4*/]))
		{
			func_90(iVar0);
		}
		iVar0++;
	}
}

void func_90(int iParam0)//Position - 0x4298
{
	if (func_198(Local_48[iParam0 /*4*/]) || iParam0 == 0)
	{
		switch (iParam0)
		{
			case 1:
			case 2:
			case 3:
			case 4:
				switch (Local_48[iParam0 /*4*/].f_2)
				{
					case 0:
						if (((!func_198(unk_0x3187EF5798B5D209(Local_48[iParam0 /*4*/], -1, 0)) && !func_198(unk_0x3187EF5798B5D209(Local_48[iParam0 /*4*/], 0, 0))) && !func_198(unk_0x3187EF5798B5D209(Local_48[iParam0 /*4*/], 1, 0))) && !func_198(unk_0x3187EF5798B5D209(Local_48[iParam0 /*4*/], 2, 0)))
						{
							unk_0x8300C56586249382(Local_48[iParam0 /*4*/], 1);
							unk_0x625842570605740F(Local_48[iParam0 /*4*/], false);
							Local_48[iParam0 /*4*/].f_2++;
						}
						break;
					
					case 1:
						break;
				}
				break;
		}
	}
	else if (unk_0x8F6EAC9E7D6812D5(Local_48[iParam0 /*4*/]))
	{
		func_91(iParam0, 0);
	}
	else
	{
		func_91(iParam0, 1);
	}
}

void func_91(int iParam0, bool bParam1)//Position - 0x4397
{
	if (unk_0x724D816EA203A79E(Local_48[iParam0 /*4*/]))
	{
		func_42(&(Local_48[iParam0 /*4*/].f_1));
		if (unk_0xB34E411B0A4BF096(Local_48[iParam0 /*4*/]))
		{
			unk_0xD87F0F9CDF39238A(Local_48[iParam0 /*4*/]);
		}
		if (func_92(&(Local_48[iParam0 /*4*/])))
		{
			if (bParam1)
			{
				unk_0xCF6040807CC0E4A5(&(Local_48[iParam0 /*4*/]));
			}
			else
			{
				unk_0x1E7A09C1710FB071(&(Local_48[iParam0 /*4*/]));
			}
		}
		Local_48[iParam0 /*4*/] = 0;
		Local_48[iParam0 /*4*/].f_2 = 0;
		Local_48[iParam0 /*4*/].f_3 = 0f;
	}
}

int func_92(var uParam0)//Position - 0x4411
{
	if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), *uParam0, 0))
	{
		return 0;
	}
	return 1;
}

void func_93()//Position - 0x442D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (unk_0x724D816EA203A79E(Local_47[iVar0 /*6*/]))
		{
			func_94(iVar0);
		}
		iVar0++;
	}
}

void func_94(int iParam0)//Position - 0x445B
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	vector3 vVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	
	if (func_198(Local_47[iParam0 /*6*/]))
	{
		switch (iParam0)
		{
			case 0:
			case 2:
				if (Local_47[iParam0 /*6*/].f_3 >= 2 && Local_47[iParam0 /*6*/].f_3 < 5)
				{
					if ((unk_0x5237AF95232D78C5(Local_47[iParam0 /*6*/], 0) && func_198(unk_0x9FE9D386222EEE47(Local_47[iParam0 /*6*/], 0))) && unk_0x7544D2465B934445(unk_0x9FE9D386222EEE47(Local_47[iParam0 /*6*/], 0)))
					{
						func_104();
						unk_0x0D042F5C6172D20A(0, 1);
						unk_0xA3981DED4FC2E56E(0, unk_0x491B2241281A03B7(500, 1501), 4096);
						unk_0x0D042F5C6172D20A(0, 0);
						unk_0xB8CBD998685C0685(0, unk_0xBC25C936A095B5BA(), 0, 16);
						func_102(Local_47[iParam0 /*6*/]);
						unk_0x91629AC1E1F78419(Local_47[iParam0 /*6*/], 1, false);
						Local_47[iParam0 /*6*/].f_3 = 5;
					}
				}
				switch (Local_47[iParam0 /*6*/].f_3)
				{
					case 0:
						if (iParam0 == 0)
						{
							if (func_198(Local_47[3 /*6*/]))
							{
								unk_0x250AE0E1E9769BA5(Local_47[iParam0 /*6*/], 1, Local_47[3 /*6*/], 31086, vLocal_51, 0, -1, -1);
							}
						}
						else if (func_198(Local_47[1 /*6*/]))
						{
							unk_0x250AE0E1E9769BA5(Local_47[iParam0 /*6*/], 1, Local_47[1 /*6*/], 31086, vLocal_51, 0, -1, -1);
						}
						if (((func_120(1) || unk_0x8F97799512B006B7(Local_47[iParam0 /*6*/], unk_0xBC25C936A095B5BA())) || func_101()) || func_100())
						{
							func_99(iParam0);
							unk_0xB8CBD998685C0685(Local_47[iParam0 /*6*/], unk_0xBC25C936A095B5BA(), 0, 16);
							Local_47[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 1:
						if (iParam0 == 0)
						{
							if (!func_198(Local_47[1 /*6*/]) || (func_198(Local_48[1 /*4*/]) && unk_0x62F3A07C43FFB568(Local_47[1 /*6*/], Local_48[1 /*4*/], 1)))
							{
								bVar0 = true;
							}
						}
						else if ((!func_198(Local_47[3 /*6*/]) || (func_198(Local_48[2 /*4*/]) && unk_0x62F3A07C43FFB568(Local_47[3 /*6*/], Local_48[2 /*4*/], 1))) && (!func_198(Local_47[4 /*6*/]) || (func_198(Local_48[2 /*4*/]) && unk_0x62F3A07C43FFB568(Local_47[4 /*6*/], Local_48[2 /*4*/], 1))))
						{
							bVar0 = true;
						}
						if (bVar0)
						{
							Local_47[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 2:
						iVar5 = 526;
						if (iParam0 == 0)
						{
							sVar4 = sLocal_49;
						}
						else
						{
							sVar4 = sLocal_50;
						}
						unk_0xCAC52C0AB7ACD02D(sVar4, unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), &iVar1);
						unk_0xF0A57702456E0363(sVar4, &iVar3);
						unk_0xCAC52C0AB7ACD02D(sVar4, unk_0x541C2AEF053615BC(Local_47[iParam0 /*6*/], true), &iVar2);
						if (iVar1 > 0 && unk_0x7214F4879DF8A314(unk_0xBC25C936A095B5BA()))
						{
							iVar1 = (iVar1 - 1);
						}
						if (iParam0 == 2 && !unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 3108.675f, 2194.121f, 10.95087f, 3143.525f, 2232.265f, -4.598444f, 82.75f, 0, true, 0))
						{
							iVar1 = func_98(iVar1, 22, iVar3);
						}
						if (func_37(unk_0xBC25C936A095B5BA(), vLocal_53, 1) >= 225f)
						{
							iVar1 = (iVar3 - 1);
						}
						if (((((iParam0 == 0 && iLocal_57 != iVar1) && iVar1 > iVar2) || ((iParam0 == 2 && iLocal_58 != iVar1) && iVar1 > iVar2)) && func_198(unk_0xD20EBB97FE8799ED(Local_47[iParam0 /*6*/]))) && !unk_0x687BD6F7DF82B377(Local_47[iParam0 /*6*/], 0))
						{
							if (iParam0 == 0)
							{
								iLocal_57 = iVar1;
							}
							else
							{
								iLocal_58 = iVar1;
							}
							if (func_198(unk_0xD20EBB97FE8799ED(Local_47[iParam0 /*6*/])))
							{
								unk_0x625842570605740F(unk_0xD20EBB97FE8799ED(Local_47[iParam0 /*6*/]), false);
								func_85(iParam0, 5);
							}
							unk_0xEB469C5B92ADC7B0(Local_47[iParam0 /*6*/], unk_0xD20EBB97FE8799ED(Local_47[iParam0 /*6*/]), sVar4, 786469, 0, iVar5, iVar1, -1f, 0, 6f);
						}
						if ((!func_97(Local_47[iParam0 /*6*/], -235832601, 1) && unk_0xF4FCC3C1048FF2AB(Local_47[iParam0 /*6*/], -235832601) == 7) && !func_97(Local_47[iParam0 /*6*/], 538064912, 1))
						{
							unk_0x875A238659691C53(Local_47[iParam0 /*6*/], unk_0xBC25C936A095B5BA(), 1101004800);
							if (func_198(unk_0xD20EBB97FE8799ED(Local_47[iParam0 /*6*/])) && unk_0xF00B0357AFD83FDA(unk_0xD20EBB97FE8799ED(Local_47[iParam0 /*6*/])))
							{
								unk_0x625842570605740F(unk_0xD20EBB97FE8799ED(Local_47[iParam0 /*6*/]), true);
								func_57(iParam0, 5);
							}
						}
						if (!func_88(iParam0, 4))
						{
							if (unk_0x687BD6F7DF82B377(Local_47[iParam0 /*6*/], 0))
							{
								func_57(iParam0, 4);
								unk_0xA4E856A8CD53B8DF(Local_47[iParam0 /*6*/]);
								if (!func_88(iParam0, 5) && unk_0xF00B0357AFD83FDA(unk_0xD20EBB97FE8799ED(Local_47[iParam0 /*6*/])))
								{
									unk_0x625842570605740F(unk_0xD20EBB97FE8799ED(Local_47[iParam0 /*6*/]), true);
								}
							}
						}
						else if (!unk_0x687BD6F7DF82B377(Local_47[iParam0 /*6*/], 0))
						{
							func_85(iParam0, 4);
							if (!func_88(iParam0, 5))
							{
								unk_0x625842570605740F(unk_0xD20EBB97FE8799ED(Local_47[iParam0 /*6*/]), false);
							}
						}
						if ((unk_0xF4FCC3C1048FF2AB(Local_47[iParam0 /*6*/], -235832601) == 1 && !unk_0xB66CFDE6B830965A(unk_0xD20EBB97FE8799ED(Local_47[iParam0 /*6*/]))) && !unk_0x55D2D1156024C86F(Local_47[iParam0 /*6*/]))
						{
							unk_0x10790F4A9247B707(Local_47[iParam0 /*6*/], unk_0xBC25C936A095B5BA(), 0, vLocal_51, 500f, 100, 1, -687903391);
						}
						unk_0x393B6E06ED8B1152(sVar4, (iVar3 - 1), &vVar6);
						if (unk_0x4DBCE270B354E123(Local_47[iParam0 /*6*/], vVar6, 8f, 8f, 8f, false, true, 0))
						{
							unk_0x2E35C4FA5F0ED22F(Local_47[iParam0 /*6*/], true);
							unk_0xF0CB7B9A194B76C2(Local_47[iParam0 /*6*/], unk_0xD20EBB97FE8799ED(Local_47[iParam0 /*6*/]), 0, unk_0xBC25C936A095B5BA(), vLocal_51, 7, 20f, 786469, 5f, 7);
							func_67(5);
							unk_0x4CE01E22F13D3913(sVar4);
							Local_47[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 3:
						if (unk_0x5237AF95232D78C5(Local_47[iParam0 /*6*/], 0) && func_198(unk_0x9FE9D386222EEE47(Local_47[iParam0 /*6*/], 0)))
						{
							if (unk_0xBCDD4514E5CAE591(unk_0x9FE9D386222EEE47(Local_47[iParam0 /*6*/], 0), 3, 6000) || func_96(iParam0, 5000))
							{
								unk_0x7CBB322C62256844(Local_47[iParam0 /*6*/], -1);
								unk_0x2E35C4FA5F0ED22F(Local_47[iParam0 /*6*/], true);
								unk_0x91629AC1E1F78419(Local_47[iParam0 /*6*/], 1, false);
								Local_47[iParam0 /*6*/].f_3++;
							}
							else if (unk_0xF4FCC3C1048FF2AB(Local_47[iParam0 /*6*/], -1273030092) == 1 && !unk_0x55D2D1156024C86F(Local_47[iParam0 /*6*/]))
							{
								unk_0x10790F4A9247B707(Local_47[iParam0 /*6*/], unk_0xBC25C936A095B5BA(), 0, vLocal_51, 500f, 100, 1, -687903391);
							}
						}
						break;
					
					case 4:
						if (!func_97(Local_47[iParam0 /*6*/], -1708676711, 1))
						{
							if (!unk_0x6C02DCF0A777D97F(Local_47[iParam0 /*6*/]))
							{
								unk_0x2E35C4FA5F0ED22F(Local_47[iParam0 /*6*/], false);
								unk_0xB8CBD998685C0685(Local_47[iParam0 /*6*/], unk_0xBC25C936A095B5BA(), 0, 16);
							}
							else
							{
								unk_0x7CBB322C62256844(Local_47[iParam0 /*6*/], -1);
							}
						}
						break;
				}
				break;
			
			case 1:
			case 3:
			case 4:
				switch (Local_47[iParam0 /*6*/].f_3)
				{
					case 0:
						if ((iParam0 == 1 && func_97(Local_47[iParam0 /*6*/], 993674639, 1)) && func_198(Local_47[3 /*6*/]))
						{
							unk_0x250AE0E1E9769BA5(Local_47[iParam0 /*6*/], 1, Local_47[3 /*6*/], 31086, vLocal_51, 0, -1, -1);
						}
						if (((iParam0 == 3 || iParam0 == 4) && func_198(Local_47[1 /*6*/])) && func_97(Local_47[iParam0 /*6*/], 993674639, 1))
						{
							unk_0x250AE0E1E9769BA5(Local_47[iParam0 /*6*/], 1, Local_47[1 /*6*/], 31086, vLocal_51, 0, -1, -1);
						}
						if (((func_120(1) || unk_0x8F97799512B006B7(Local_47[iParam0 /*6*/], unk_0xBC25C936A095B5BA())) || func_101()) || func_100())
						{
							func_99(iParam0);
							Local_47[iParam0 /*6*/].f_4 = (unk_0x105601648511CC64() + unk_0x491B2241281A03B7(1250, 1501));
							Local_47[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 1:
						if (unk_0x105601648511CC64() >= Local_47[iParam0 /*6*/].f_4)
						{
							if ((iParam0 == 1 && func_198(Local_48[1 /*4*/])) && func_198(unk_0x3187EF5798B5D209(Local_48[1 /*4*/], -1, 0)))
							{
								unk_0xA4E856A8CD53B8DF(Local_47[iParam0 /*6*/]);
								unk_0xD179FA0466FA4FE3(Local_47[iParam0 /*6*/], Local_48[1 /*4*/], 20000, 0, 3f, 1, 0);
								unk_0x2E35C4FA5F0ED22F(Local_47[iParam0 /*6*/], true);
							}
							if ((iParam0 == 3 && func_198(Local_48[2 /*4*/])) && func_198(unk_0x3187EF5798B5D209(Local_48[2 /*4*/], -1, 0)))
							{
								unk_0xA4E856A8CD53B8DF(Local_47[iParam0 /*6*/]);
								unk_0xD179FA0466FA4FE3(Local_47[iParam0 /*6*/], Local_48[2 /*4*/], 20000, 0, 3f, 1, 0);
								unk_0x2E35C4FA5F0ED22F(Local_47[iParam0 /*6*/], true);
							}
							if ((iParam0 == 4 && func_198(Local_48[2 /*4*/])) && func_198(unk_0x3187EF5798B5D209(Local_48[2 /*4*/], -1, 0)))
							{
								unk_0xA4E856A8CD53B8DF(Local_47[iParam0 /*6*/]);
								unk_0xD179FA0466FA4FE3(Local_47[iParam0 /*6*/], Local_48[2 /*4*/], 20000, 1, 3f, 1, 0);
								unk_0x2E35C4FA5F0ED22F(Local_47[iParam0 /*6*/], true);
							}
							Local_47[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 2:
						switch (iParam0)
						{
							case 1:
								iVar7 = 1;
								break;
							
							case 3:
								iVar7 = 2;
								break;
							
							case 4:
								iVar7 = 2;
								break;
						}
						if (unk_0x5237AF95232D78C5(Local_47[iParam0 /*6*/], 1) || !func_198(unk_0x3187EF5798B5D209(Local_48[iVar7 /*4*/], -1, 0)))
						{
							unk_0x2E35C4FA5F0ED22F(Local_47[iParam0 /*6*/], false);
							unk_0xB8CBD998685C0685(Local_47[iParam0 /*6*/], unk_0xBC25C936A095B5BA(), 0, 16);
							Local_47[iParam0 /*6*/].f_3++;
						}
						else if (!func_97(Local_47[iParam0 /*6*/], -1794415470, 1))
						{
							if (iParam0 == 1 || (iParam0 == 3 && func_198(Local_48[iVar7 /*4*/])))
							{
								unk_0xD179FA0466FA4FE3(Local_47[iParam0 /*6*/], Local_48[iVar7 /*4*/], 20000, 0, 3f, 1, 0);
							}
							if (iParam0 == 4 && func_198(Local_48[iVar7 /*4*/]))
							{
								unk_0xD179FA0466FA4FE3(Local_47[iParam0 /*6*/], Local_48[iVar7 /*4*/], 20000, 1, 3f, 1, 0);
							}
						}
						break;
					
					case 3:
						if (unk_0x5237AF95232D78C5(Local_47[iParam0 /*6*/], 0) && func_198(unk_0x9FE9D386222EEE47(Local_47[iParam0 /*6*/], 0)))
						{
							if (unk_0x7544D2465B934445(unk_0x9FE9D386222EEE47(Local_47[iParam0 /*6*/], 0)))
							{
								func_104();
								unk_0x0D042F5C6172D20A(0, 1);
								unk_0xA3981DED4FC2E56E(0, unk_0x491B2241281A03B7(500, 1501), 4096);
								unk_0x0D042F5C6172D20A(0, 0);
								unk_0xB8CBD998685C0685(0, unk_0xBC25C936A095B5BA(), 0, 16);
								func_102(Local_47[iParam0 /*6*/]);
								unk_0x91629AC1E1F78419(Local_47[iParam0 /*6*/], 1, false);
								Local_47[iParam0 /*6*/].f_3++;
							}
							if (Local_47[iParam0 /*6*/].f_3 == 3)
							{
								if ((unk_0xBCDD4514E5CAE591(unk_0x9FE9D386222EEE47(Local_47[iParam0 /*6*/], 0), 3, 6000) || func_96(iParam0, 5000)) && func_120(5))
								{
									unk_0x7CBB322C62256844(Local_47[iParam0 /*6*/], 20000);
									unk_0x2E35C4FA5F0ED22F(Local_47[iParam0 /*6*/], true);
									unk_0x91629AC1E1F78419(Local_47[iParam0 /*6*/], 1, false);
									Local_47[iParam0 /*6*/].f_3 = 5;
								}
								else if (!func_198(unk_0x3187EF5798B5D209(unk_0x9FE9D386222EEE47(Local_47[iParam0 /*6*/], 0), -1, 0)))
								{
									unk_0x91629AC1E1F78419(Local_47[iParam0 /*6*/], 3, true);
									unk_0xB8CBD998685C0685(Local_47[iParam0 /*6*/], unk_0xBC25C936A095B5BA(), 0, 16);
									Local_47[iParam0 /*6*/].f_3++;
								}
							}
						}
						break;
					
					case 4:
						break;
					
					case 5:
						if (!func_97(Local_47[iParam0 /*6*/], -1708676711, 1))
						{
							if (!unk_0x6C02DCF0A777D97F(Local_47[iParam0 /*6*/]))
							{
								unk_0x2E35C4FA5F0ED22F(Local_47[iParam0 /*6*/], false);
								unk_0xB8CBD998685C0685(Local_47[iParam0 /*6*/], unk_0xBC25C936A095B5BA(), 0, 16);
							}
							else
							{
								unk_0x7CBB322C62256844(Local_47[iParam0 /*6*/], -1);
							}
						}
						break;
				}
				break;
			
			case 7:
				if (Local_47[iParam0 /*6*/].f_3 >= 1 && Local_47[iParam0 /*6*/].f_3 < 3)
				{
					if ((unk_0x5237AF95232D78C5(Local_47[iParam0 /*6*/], 0) && func_198(unk_0x9FE9D386222EEE47(Local_47[iParam0 /*6*/], 0))) && unk_0x7544D2465B934445(unk_0x9FE9D386222EEE47(Local_47[iParam0 /*6*/], 0)))
					{
						func_104();
						unk_0x0D042F5C6172D20A(0, 1);
						unk_0xA3981DED4FC2E56E(0, unk_0x491B2241281A03B7(500, 1501), 4096);
						unk_0x0D042F5C6172D20A(0, 0);
						unk_0xB8CBD998685C0685(0, unk_0xBC25C936A095B5BA(), 0, 16);
						func_102(Local_47[iParam0 /*6*/]);
						unk_0x91629AC1E1F78419(Local_47[iParam0 /*6*/], 1, false);
						Local_47[iParam0 /*6*/].f_3 = 3;
					}
				}
				switch (Local_47[iParam0 /*6*/].f_3)
				{
					case 0:
						if ((((func_43() && func_40(unk_0xBC25C936A095B5BA(), Local_47[iParam0 /*6*/], 1) <= 125f) || ((unk_0x7214F4879DF8A314(unk_0xBC25C936A095B5BA()) && !unk_0x149E9368A11035DE(unk_0xBC25C936A095B5BA())) && func_40(unk_0xBC25C936A095B5BA(), Local_47[iParam0 /*6*/], 1) <= 150f)) || (unk_0x7214F4879DF8A314(unk_0xBC25C936A095B5BA()) && !unk_0x41A5D6415E2CC10E(Local_47[iParam0 /*6*/]))) || func_120(6))
						{
							if (func_198(Local_48[3 /*4*/]))
							{
								unk_0x625842570605740F(unk_0xD20EBB97FE8799ED(Local_47[iParam0 /*6*/]), false);
								fVar8 = unk_0x8910237449BB6F79(unk_0xBC25C936A095B5BA());
								fVar8 = func_95(fVar8, 10f, 40f);
								unk_0xA4DFFFD5B234240D(Local_48[3 /*4*/], fVar8);
							}
							unk_0x8E25082A46F87892(Local_47[iParam0 /*6*/], joaat("weapon_pistol"), false);
							unk_0xF0CB7B9A194B76C2(Local_47[iParam0 /*6*/], unk_0xD20EBB97FE8799ED(Local_47[iParam0 /*6*/]), 0, unk_0xBC25C936A095B5BA(), vLocal_51, 7, 20f, 786469, 5f, 7);
							unk_0x2E35C4FA5F0ED22F(Local_47[iParam0 /*6*/], true);
							Local_47[iParam0 /*6*/].f_1 = func_59(Local_47[iParam0 /*6*/], 1, 145);
							func_67(6);
							Local_47[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 1:
						if (unk_0x5237AF95232D78C5(Local_47[iParam0 /*6*/], 0) && func_198(unk_0x9FE9D386222EEE47(Local_47[iParam0 /*6*/], 0)))
						{
							if (unk_0xBCDD4514E5CAE591(unk_0x9FE9D386222EEE47(Local_47[iParam0 /*6*/], 0), 3, 6000) || func_96(iParam0, 5000))
							{
								unk_0x7CBB322C62256844(Local_47[iParam0 /*6*/], -1);
								unk_0x2E35C4FA5F0ED22F(Local_47[iParam0 /*6*/], true);
								unk_0x91629AC1E1F78419(Local_47[iParam0 /*6*/], 1, false);
								Local_47[iParam0 /*6*/].f_3++;
							}
							else if (unk_0xF4FCC3C1048FF2AB(Local_47[iParam0 /*6*/], -1273030092) == 1 && !unk_0x55D2D1156024C86F(Local_47[iParam0 /*6*/]))
							{
								unk_0x10790F4A9247B707(Local_47[iParam0 /*6*/], unk_0xBC25C936A095B5BA(), 0, vLocal_51, 500f, 100, 1, -687903391);
							}
						}
						break;
					
					case 2:
						if (!func_97(Local_47[iParam0 /*6*/], -1708676711, 1))
						{
							if (!unk_0x6C02DCF0A777D97F(Local_47[iParam0 /*6*/]))
							{
								unk_0x2E35C4FA5F0ED22F(Local_47[iParam0 /*6*/], false);
								unk_0xB8CBD998685C0685(Local_47[iParam0 /*6*/], unk_0xBC25C936A095B5BA(), 0, 16);
							}
							else
							{
								unk_0x7CBB322C62256844(Local_47[iParam0 /*6*/], -1);
							}
						}
						break;
				}
				break;
			
			case 9:
				if (Local_47[iParam0 /*6*/].f_3 >= 1 && Local_47[iParam0 /*6*/].f_3 < 3)
				{
					if ((unk_0x5237AF95232D78C5(Local_47[iParam0 /*6*/], 0) && func_198(unk_0x9FE9D386222EEE47(Local_47[iParam0 /*6*/], 0))) && unk_0x7544D2465B934445(unk_0x9FE9D386222EEE47(Local_47[iParam0 /*6*/], 0)))
					{
						func_104();
						unk_0x0D042F5C6172D20A(0, 1);
						unk_0xA3981DED4FC2E56E(0, unk_0x491B2241281A03B7(500, 1501), 4096);
						unk_0x0D042F5C6172D20A(0, 0);
						unk_0xB8CBD998685C0685(0, unk_0xBC25C936A095B5BA(), 0, 16);
						func_102(Local_47[iParam0 /*6*/]);
						unk_0x91629AC1E1F78419(Local_47[iParam0 /*6*/], 1, false);
						Local_47[iParam0 /*6*/].f_3 = 3;
					}
				}
				switch (Local_47[iParam0 /*6*/].f_3)
				{
					case 0:
						if ((((func_43() && func_40(unk_0xBC25C936A095B5BA(), Local_47[iParam0 /*6*/], 1) <= 125f) || ((unk_0x7214F4879DF8A314(unk_0xBC25C936A095B5BA()) && !unk_0x149E9368A11035DE(unk_0xBC25C936A095B5BA())) && func_40(unk_0xBC25C936A095B5BA(), Local_47[iParam0 /*6*/], 1) <= 150f)) || (unk_0x7214F4879DF8A314(unk_0xBC25C936A095B5BA()) && !unk_0x41A5D6415E2CC10E(Local_47[iParam0 /*6*/]))) || func_120(6))
						{
							if (func_198(Local_48[4 /*4*/]))
							{
								unk_0x625842570605740F(unk_0xD20EBB97FE8799ED(Local_47[iParam0 /*6*/]), false);
								fVar9 = unk_0x8910237449BB6F79(unk_0xBC25C936A095B5BA());
								fVar9 = func_95(fVar9, 10f, 40f);
								unk_0xA4DFFFD5B234240D(Local_48[4 /*4*/], fVar9);
							}
							unk_0x8E25082A46F87892(Local_47[iParam0 /*6*/], joaat("weapon_pistol"), false);
							unk_0xF0CB7B9A194B76C2(Local_47[iParam0 /*6*/], unk_0xD20EBB97FE8799ED(Local_47[iParam0 /*6*/]), 0, unk_0xBC25C936A095B5BA(), vLocal_51, 7, 20f, 786469, 5f, 7);
							unk_0x2E35C4FA5F0ED22F(Local_47[iParam0 /*6*/], true);
							Local_47[iParam0 /*6*/].f_1 = func_59(Local_47[iParam0 /*6*/], 1, 145);
							func_67(6);
							Local_47[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 1:
						if (unk_0x5237AF95232D78C5(Local_47[iParam0 /*6*/], 0) && func_198(unk_0x9FE9D386222EEE47(Local_47[iParam0 /*6*/], 0)))
						{
							if (unk_0xBCDD4514E5CAE591(unk_0x9FE9D386222EEE47(Local_47[iParam0 /*6*/], 0), 3, 6000) || func_96(iParam0, 5000))
							{
								unk_0x7CBB322C62256844(Local_47[iParam0 /*6*/], -1);
								unk_0x2E35C4FA5F0ED22F(Local_47[iParam0 /*6*/], true);
								unk_0x91629AC1E1F78419(Local_47[iParam0 /*6*/], 1, false);
								Local_47[iParam0 /*6*/].f_3++;
							}
							else if (unk_0xF4FCC3C1048FF2AB(Local_47[iParam0 /*6*/], -1273030092) == 1 && !unk_0x55D2D1156024C86F(Local_47[iParam0 /*6*/]))
							{
								unk_0x10790F4A9247B707(Local_47[iParam0 /*6*/], unk_0xBC25C936A095B5BA(), 0, vLocal_51, 500f, 100, 1, -687903391);
							}
						}
						break;
					
					case 2:
						if (!func_97(Local_47[iParam0 /*6*/], -1708676711, 1))
						{
							if (!unk_0x6C02DCF0A777D97F(Local_47[iParam0 /*6*/]))
							{
								unk_0x2E35C4FA5F0ED22F(Local_47[iParam0 /*6*/], false);
								unk_0xB8CBD998685C0685(Local_47[iParam0 /*6*/], unk_0xBC25C936A095B5BA(), 0, 16);
							}
							else
							{
								unk_0x7CBB322C62256844(Local_47[iParam0 /*6*/], -1);
							}
						}
						break;
				}
				break;
			
			case 8:
			case 10:
				if (Local_47[iParam0 /*6*/].f_3 >= 1 && Local_47[iParam0 /*6*/].f_3 < 3)
				{
					if ((unk_0x5237AF95232D78C5(Local_47[iParam0 /*6*/], 0) && func_198(unk_0x9FE9D386222EEE47(Local_47[iParam0 /*6*/], 0))) && unk_0x7544D2465B934445(unk_0x9FE9D386222EEE47(Local_47[iParam0 /*6*/], 0)))
					{
						func_104();
						unk_0x0D042F5C6172D20A(0, 1);
						unk_0xA3981DED4FC2E56E(0, unk_0x491B2241281A03B7(500, 1501), 4096);
						unk_0x0D042F5C6172D20A(0, 0);
						unk_0xB8CBD998685C0685(0, unk_0xBC25C936A095B5BA(), 0, 16);
						func_102(Local_47[iParam0 /*6*/]);
						unk_0x91629AC1E1F78419(Local_47[iParam0 /*6*/], 1, false);
						Local_47[iParam0 /*6*/].f_3 = 3;
					}
				}
				switch (Local_47[iParam0 /*6*/].f_3)
				{
					case 0:
						if (((func_43() && func_40(unk_0xBC25C936A095B5BA(), Local_47[iParam0 /*6*/], 1) <= 125f) || ((unk_0x7214F4879DF8A314(unk_0xBC25C936A095B5BA()) && !unk_0x149E9368A11035DE(unk_0xBC25C936A095B5BA())) && func_40(unk_0xBC25C936A095B5BA(), Local_47[iParam0 /*6*/], 1) <= 150f)) || (unk_0x7214F4879DF8A314(unk_0xBC25C936A095B5BA()) && !unk_0x41A5D6415E2CC10E(Local_47[iParam0 /*6*/])))
						{
							Local_47[iParam0 /*6*/].f_1 = func_59(Local_47[iParam0 /*6*/], 1, 145);
							unk_0x7781946F1FC054FA(Local_47[iParam0 /*6*/].f_1, 0);
							unk_0xF71DF45ABB5957A5(Local_47[iParam0 /*6*/].f_1, 1);
							Local_47[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 1:
						if (unk_0x5237AF95232D78C5(Local_47[iParam0 /*6*/], 0))
						{
							if (func_198(unk_0x9FE9D386222EEE47(Local_47[iParam0 /*6*/], 0)))
							{
								if (unk_0xBCDD4514E5CAE591(unk_0x9FE9D386222EEE47(Local_47[iParam0 /*6*/], 0), 3, 6000) || func_96(iParam0, 5000))
								{
									unk_0x7CBB322C62256844(Local_47[iParam0 /*6*/], -1);
									unk_0x2E35C4FA5F0ED22F(Local_47[iParam0 /*6*/], true);
									unk_0x91629AC1E1F78419(Local_47[iParam0 /*6*/], 1, false);
									Local_47[iParam0 /*6*/].f_3++;
								}
								else if (!func_198(unk_0x3187EF5798B5D209(unk_0x9FE9D386222EEE47(Local_47[iParam0 /*6*/], 0), -1, 0)))
								{
									unk_0x91629AC1E1F78419(Local_47[iParam0 /*6*/], 3, true);
									unk_0xB8CBD998685C0685(Local_47[iParam0 /*6*/], unk_0xBC25C936A095B5BA(), 0, 16);
									Local_47[iParam0 /*6*/].f_3 = 3;
								}
							}
						}
						else
						{
							unk_0xB8CBD998685C0685(Local_47[iParam0 /*6*/], unk_0xBC25C936A095B5BA(), 0, 16);
							Local_47[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 2:
						if (!func_97(Local_47[iParam0 /*6*/], -1708676711, 1))
						{
							if (!unk_0x6C02DCF0A777D97F(Local_47[iParam0 /*6*/]))
							{
								unk_0x2E35C4FA5F0ED22F(Local_47[iParam0 /*6*/], false);
								unk_0xB8CBD998685C0685(Local_47[iParam0 /*6*/], unk_0xBC25C936A095B5BA(), 0, 16);
							}
							else
							{
								unk_0x7CBB322C62256844(Local_47[iParam0 /*6*/], -1);
							}
						}
						break;
				}
				break;
		}
	}
	else
	{
		if (func_88(iParam0, 1))
		{
			unk_0xF1FC2182A76AD7FC(Local_47[iParam0 /*6*/], 1);
			unk_0x17175087F2DB6AC8(Local_47[iParam0 /*6*/], 1, false);
			func_85(iParam0, 1);
		}
		if (!func_88(iParam0, 2))
		{
			if (unk_0x8F6EAC9E7D6812D5(Local_47[iParam0 /*6*/]))
			{
				func_39(iParam0, 0);
			}
			else
			{
				func_39(iParam0, 1);
			}
		}
	}
}

float func_95(float fParam0, float fParam1, float fParam2)//Position - 0x5951
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

int func_96(int iParam0, int iParam1)//Position - 0x5978
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
		case 3:
		case 4:
			iVar0 = 2;
			break;
		
		case 7:
		case 8:
			iVar0 = 3;
			break;
		
		case 9:
		case 10:
			iVar0 = 4;
			break;
	}
	if (func_198(Local_48[iVar0 /*4*/]))
	{
		if (!unk_0x149E9368A11035DE(Local_48[iVar0 /*4*/]))
		{
			Local_48[iVar0 /*4*/].f_3 = (Local_48[iVar0 /*4*/].f_3 + unk_0x11F9F9006143871A());
		}
		else
		{
			Local_48[iVar0 /*4*/].f_3 = 0f;
		}
	}
	if (Local_48[iVar0 /*4*/].f_3 >= IntToFloat(iParam1))
	{
		return 1;
	}
	return 0;
}

int func_97(int iParam0, int iParam1, bool bParam2)//Position - 0x5A28
{
	int iVar0;
	
	iVar0 = unk_0xF4FCC3C1048FF2AB(iParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	else if (!bParam2)
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_98(int iParam0, int iParam1, int iParam2)//Position - 0x5A6E
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_99(int iParam0)//Position - 0x5A93
{
	func_57(iParam0, 3);
	if (!func_120(4))
	{
		func_67(4);
	}
	if (!func_120(2))
	{
		func_67(2);
	}
	Local_47[iParam0 /*6*/].f_1 = func_59(Local_47[iParam0 /*6*/], 1, 145);
	unk_0x6CCBC1B22488DC0C(Local_47[iParam0 /*6*/], 200f);
	if (unk_0x5237AF95232D78C5(Local_47[iParam0 /*6*/], 0))
	{
		if (func_87(Local_47[iParam0 /*6*/], 0) != -1)
		{
			unk_0x7781946F1FC054FA(Local_47[iParam0 /*6*/].f_1, 0);
			unk_0xF71DF45ABB5957A5(Local_47[iParam0 /*6*/].f_1, 1);
		}
		else
		{
			unk_0xA4E856A8CD53B8DF(Local_47[iParam0 /*6*/]);
			unk_0x2E35C4FA5F0ED22F(Local_47[iParam0 /*6*/], true);
		}
	}
}

bool func_100()//Position - 0x5B31
{
	return unk_0x6E65ED1DEEDEE6F8(-1, 3150.508f, 2179.343f, -30f, 3064.608f, 2223.616f, 12.38177f, 103f);
}

int func_101()//Position - 0x5B61
{
	int iVar0;
	
	iVar0 = unk_0x3E12B546F3F2597A();
	if (func_198(iVar0) && unk_0x0C265B3C448E6954(iVar0, 3083.23f, 2195.516f, -3.22382f, 3096.519f, 2195.455f, 4.949678f, 15f, 0, true, 0))
	{
		return 1;
	}
	return 0;
}

void func_102(int iParam0)//Position - 0x5BAE
{
	if (func_120(0))
	{
		unk_0x535008C596714F9E(iLocal_244);
		func_103(0);
	}
	unk_0xA8E6405305C0D7DF(iParam0, iLocal_244);
	unk_0x02DAF06EA4F08219(&iLocal_244);
}

void func_103(int iParam0)//Position - 0x5BDA
{
	unk_0x7CB6FD92BE491AD9(&iLocal_55, iParam0);
}

void func_104()//Position - 0x5BEA
{
	if (!func_120(0))
	{
		unk_0x02DAF06EA4F08219(&iLocal_244);
		unk_0xC5A6DFE2B8987B17(&iLocal_244);
		func_67(0);
	}
}

void func_105()//Position - 0x5C0E
{
	bool bVar0;
	int iVar1;
	
	if (func_120(1) || func_120(4))
	{
		if (func_198(Local_48[0 /*4*/]) && func_40(unk_0xBC25C936A095B5BA(), Local_48[0 /*4*/], 1) >= 250f)
		{
			bVar0 = true;
			iVar1 = 0;
			while (iVar1 <= 10)
			{
				if (!func_38(iVar1, 1))
				{
					bVar0 = false;
				}
				iVar1++;
			}
			if (bVar0)
			{
				func_36();
			}
		}
	}
	if (unk_0x724D816EA203A79E(Local_48[0 /*4*/]) && !func_198(Local_48[0 /*4*/]))
	{
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 <= 10)
		{
			if (!func_38(iVar1, 1))
			{
				bVar0 = false;
			}
			iVar1++;
		}
		if (bVar0)
		{
			func_36();
		}
	}
}

int func_106()//Position - 0x5CC3
{
	if (!func_51(5))
	{
		return 1;
	}
	if (func_115())
	{
		return 1;
	}
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (SYSTEM::VMAG2(unk_0xB5D9AE572C19509E(unk_0xBC25C936A095B5BA())) > 1369f && !func_114())
		{
			return 0;
		}
	}
	if (func_107(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_107(float fParam0, bool bParam1)//Position - 0x5D25
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
		if (func_23(func_113()))
		{
			iVar5 = func_20();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (unk_0xFA30DFD0084E92FE(Global_19B04.f_4871[iVar1 /*6*/], 2) && !unk_0xFA30DFD0084E92FE(Global_19B04.f_4871[iVar1 /*6*/], 3))
				{
					func_108(iVar1, &Var0);
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

void func_108(int iParam0, var uParam1)//Position - 0x5DDC
{
	switch (iParam0)
	{
		case 0:
			func_109(uParam1, "Abigail1", func_111(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 1:
			func_109(uParam1, "Abigail2", func_111(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 2:
			func_109(uParam1, "Barry1", func_111(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 3:
			func_109(uParam1, "Barry2", func_111(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_110(iParam0), 1, 1);
			break;
		
		case 4:
			func_109(uParam1, "Barry3", func_111(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 5:
			func_109(uParam1, "Barry3A", func_111(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 6:
			func_109(uParam1, "Barry3C", func_111(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 7:
			func_109(uParam1, "Barry4", func_111(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_110(iParam0), 0, 0);
			break;
		
		case 8:
			func_109(uParam1, "Dreyfuss1", func_111(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 9:
			func_109(uParam1, "Epsilon1", func_111(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 10:
			func_109(uParam1, "Epsilon2", func_111(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 11:
			func_109(uParam1, "Epsilon3", func_111(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 12:
			func_109(uParam1, "Epsilon4", func_111(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 13:
			func_109(uParam1, "Epsilon5", func_111(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 14:
			func_109(uParam1, "Epsilon6", func_111(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 15:
			func_109(uParam1, "Epsilon7", func_111(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 16:
			func_109(uParam1, "Epsilon8", func_111(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 17:
			func_109(uParam1, "Extreme1", func_111(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 18:
			func_109(uParam1, "Extreme2", func_111(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 19:
			func_109(uParam1, "Extreme3", func_111(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 20:
			func_109(uParam1, "Extreme4", func_111(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 21:
			func_109(uParam1, "Fanatic1", func_111(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_110(iParam0), 1, 0);
			break;
		
		case 22:
			func_109(uParam1, "Fanatic2", func_111(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_110(iParam0), 1, 0);
			break;
		
		case 23:
			func_109(uParam1, "Fanatic3", func_111(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_110(iParam0), 0, 1);
			break;
		
		case 24:
			func_109(uParam1, "Hao1", func_111(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_110(iParam0), 0, 1);
			break;
		
		case 25:
			func_109(uParam1, "Hunting1", func_111(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 26:
			func_109(uParam1, "Hunting2", func_111(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 27:
			func_109(uParam1, "Josh1", func_111(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 28:
			func_109(uParam1, "Josh2", func_111(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_110(iParam0), 1, 1);
			break;
		
		case 29:
			func_109(uParam1, "Josh3", func_111(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_110(iParam0), 1, 1);
			break;
		
		case 30:
			func_109(uParam1, "Josh4", func_111(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 31:
			func_109(uParam1, "Maude1", func_111(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 32:
			func_109(uParam1, "Minute1", func_111(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 33:
			func_109(uParam1, "Minute2", func_111(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 34:
			func_109(uParam1, "Minute3", func_111(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 35:
			func_109(uParam1, "MrsPhilips1", func_111(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 36:
			func_109(uParam1, "MrsPhilips2", func_111(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 37:
			func_109(uParam1, "Nigel1", func_111(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 38:
			func_109(uParam1, "Nigel1A", func_111(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_110(iParam0), 1, 1);
			break;
		
		case 39:
			func_109(uParam1, "Nigel1B", func_111(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_110(iParam0), 1, 1);
			break;
		
		case 40:
			func_109(uParam1, "Nigel1C", func_111(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_110(iParam0), 1, 1);
			break;
		
		case 41:
			func_109(uParam1, "Nigel1D", func_111(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_110(iParam0), 1, 1);
			break;
		
		case 42:
			func_109(uParam1, "Nigel2", func_111(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_110(iParam0), 1, 1);
			break;
		
		case 43:
			func_109(uParam1, "Nigel3", func_111(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_110(iParam0), 1, 1);
			break;
		
		case 44:
			func_109(uParam1, "Omega1", func_111(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 45:
			func_109(uParam1, "Omega2", func_111(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 46:
			func_109(uParam1, "Paparazzo1", func_111(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 47:
			func_109(uParam1, "Paparazzo2", func_111(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 48:
			func_109(uParam1, "Paparazzo3", func_111(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 49:
			func_109(uParam1, "Paparazzo3A", func_111(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 50:
			func_109(uParam1, "Paparazzo3B", func_111(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 51:
			func_109(uParam1, "Paparazzo4", func_111(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 52:
			func_109(uParam1, "Rampage1", func_111(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 54:
			func_109(uParam1, "Rampage3", func_111(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 55:
			func_109(uParam1, "Rampage4", func_111(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 56:
			func_109(uParam1, "Rampage5", func_111(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 53:
			func_109(uParam1, "Rampage2", func_111(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 57:
			func_109(uParam1, "TheLastOne", func_111(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 58:
			func_109(uParam1, "Tonya1", func_111(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 59:
			func_109(uParam1, "Tonya2", func_111(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 60:
			func_109(uParam1, "Tonya3", func_111(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 61:
			func_109(uParam1, "Tonya4", func_111(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 62:
			func_109(uParam1, "Tonya5", func_111(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_109(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0x6F91
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

int func_110(int iParam0)//Position - 0x7022
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

struct<2> func_111(int iParam0)//Position - 0x7368
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_112(iParam0) };
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

struct<2> func_112(int iParam0)//Position - 0x739F
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

int func_113()//Position - 0x77EB
{
	func_21();
	return Global_19B04.f_932.f_21B.f_10CD;
}

int func_114()//Position - 0x7804
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

int func_115()//Position - 0x7821
{
	if (func_118() && !func_114())
	{
		return 1;
	}
	if (func_117() && func_116())
	{
		return 1;
	}
	return 0;
}

bool func_116()//Position - 0x7853
{
	return Global_199EA > 0;
}

int func_117()//Position - 0x7861
{
	if (Global_15FA6 != -1)
	{
		return 1;
	}
	return 0;
}

int func_118()//Position - 0x7876
{
	if (Global_15FA6 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_147B0[Global_15FA6 /*34*/].f_F, 20);
	}
	return 0;
}

int func_119()//Position - 0x789C
{
	if ((Global_19AF9 == func_29() && unk_0x8520DF5301DD9811()) && Global_19AFA)
	{
		return 1;
	}
	return 0;
}

bool func_120(int iParam0)//Position - 0x78C7
{
	return unk_0xFA30DFD0084E92FE(iLocal_55, iParam0);
}

void func_121(int iParam0)//Position - 0x78D7
{
	if (iParam0 == -1)
	{
		iParam0 = func_29();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_123(iParam0);
	unk_0x8A623F2A0D19557F(0);
	unk_0xCB0D7BF24DBB59C6(1);
	Global_19AF6 = 0;
	func_122();
}

void func_122()//Position - 0x790D
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

void func_123(int iParam0)//Position - 0x794A
{
	Global_19AF9 = iParam0;
}

int func_124(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x7958
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
		iParam1 = func_29();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_166())
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
			if (SYSTEM::VMAG2(unk_0xB5D9AE572C19509E(unk_0xBC25C936A095B5BA())) > 1369f && !func_114())
			{
				return 0;
			}
		}
		if (!Global_19B04.f_2360)
		{
			return 0;
		}
		if (func_5(0))
		{
			return 0;
		}
		if (func_115())
		{
			return 0;
		}
		if (func_165())
		{
			return 0;
		}
		if (Global_19AF9 != -1)
		{
			return 0;
		}
		if (func_23(func_113()))
		{
			if (func_107(100f, 1) != -1)
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
		if (!func_164(iParam1))
		{
			return 0;
		}
		if (func_23(func_113()))
		{
			if (func_163(func_113()) == 4 || func_163(func_113()) == 5)
			{
				return 0;
			}
		}
		if (func_23(func_113()))
		{
			if (!func_162(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_161(Global_19B04.f_6186.f_2B[iParam1]))
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
		if (func_159())
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
		if (!func_149(4))
		{
			return 0;
		}
		if (!func_51(5))
		{
			return 0;
		}
		if (func_148(iParam1, iParam2) && !bParam3)
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
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_148(0, 0))
		{
			return 0;
		}
		if (Global_634F)
		{
			return 0;
		}
		if (func_164(30) && !func_148(30, 0))
		{
			if (iParam1 != 30)
			{
				if (SYSTEM::VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_23(func_113()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				vVar3 = { Global_19B04.f_932.f_21B.f_8E8[iVar2 /*3*/] };
				iVar4 = Global_19B04.f_932.f_21B.f_8E4[iVar2];
				if (func_147(iVar4))
				{
					if (func_125(iVar2))
					{
						if (!func_62(vVar3, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false), vVar3) < (210f * 210f))
							{
								if (func_113() != iVar2)
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

bool func_125(int iParam0)//Position - 0x7CF2
{
	int iVar0;
	
	iVar0 = Global_19B04.f_932.f_21B.f_8E4[iParam0];
	return func_126(iVar0);
}

int func_126(int iParam0)//Position - 0x7D13
{
	return func_127(iParam0, 1);
}

int func_127(int iParam0, int iParam1)//Position - 0x7D22
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_147(iParam0))
	{
		return 0;
	}
	func_128(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_128(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x7D75
{
	func_129(func_140(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_129(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x7D93
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_139(iParam0, iParam1))
	{
		iVar0 = func_138(iParam1);
		iVar1 = func_136(iParam0);
		iVar2 = (func_136(iParam0) - func_136(iParam1));
		iVar3 = (func_138(iParam0) - func_138(iParam1));
		iVar4 = (func_135(iParam0) - func_135(iParam1));
		iVar5 = (func_134(iParam0) - func_134(iParam1));
		iVar6 = (func_133(iParam0) - func_133(iParam1));
		iVar7 = (func_132(iParam0) - func_132(iParam1));
	}
	else
	{
		iVar0 = func_138(iParam0);
		iVar1 = func_136(iParam1);
		iVar2 = (func_136(iParam1) - func_136(iParam0));
		iVar3 = (func_138(iParam1) - func_138(iParam0));
		iVar4 = (func_135(iParam1) - func_135(iParam0));
		iVar5 = (func_134(iParam1) - func_134(iParam0));
		iVar6 = (func_133(iParam1) - func_133(iParam0));
		iVar7 = (func_132(iParam1) - func_132(iParam0));
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
		iVar4 = (iVar4 + func_131(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_130(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_130(float fParam0, float fParam1, float fParam2)//Position - 0x7F94
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

int func_131(int iParam0, int iParam1)//Position - 0x7FD6
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

int func_132(int iParam0)//Position - 0x8092
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_133(int iParam0)//Position - 0x80A5
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_134(int iParam0)//Position - 0x80B8
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_135(int iParam0)//Position - 0x80CB
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_136(int iParam0)//Position - 0x80DD
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_137(unk_0xFA30DFD0084E92FE(iParam0, 31), -1, 1)) + 2011;
}

int func_137(bool bParam0, int iParam1, int iParam2)//Position - 0x8102
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_138(int iParam0)//Position - 0x8119
{
	return iParam0 & 15;
}

int func_139(int iParam0, int iParam1)//Position - 0x8126
{
	int iVar0;
	int iVar1;
	
	if (!func_147(iParam1) || !func_147(iParam0))
	{
		return 1;
	}
	iVar0 = func_136(iParam0);
	iVar1 = func_136(iParam1);
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
	iVar0 = func_135(iParam0);
	iVar1 = func_135(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_134(iParam0);
	iVar1 = func_134(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_133(iParam0);
	iVar1 = func_133(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_132(iParam0);
	iVar1 = func_132(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_140()//Position - 0x8232
{
	var uVar0;
	
	func_146(&uVar0, unk_0xF40D00CD7B81C0A8());
	func_145(&uVar0, unk_0x7E09057438B9D216());
	func_144(&uVar0, unk_0x6E06C0DB9B43570D());
	func_143(&uVar0, unk_0xBE14F159908E4EE5());
	func_142(&uVar0, unk_0xDD6A91E47ED4D0CF());
	func_141(&uVar0, unk_0x4EEB3860BFC44B78());
	return uVar0;
}

void func_141(var uParam0, int iParam1)//Position - 0x8278
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

void func_142(var uParam0, int iParam1)//Position - 0x82FE
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_143(var uParam0, int iParam1)//Position - 0x8331
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_138(*uParam0);
	iVar1 = func_136(*uParam0);
	if (iParam1 < 1 || iParam1 > func_131(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_144(var uParam0, int iParam1)//Position - 0x8382
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_145(var uParam0, int iParam1)//Position - 0x83BC
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_146(var uParam0, int iParam1)//Position - 0x83F7
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_147(int iParam0)//Position - 0x8433
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
	iVar0 = func_132(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_133(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_134(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_136(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_138(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_135(iParam0);
	if (iVar5 < 1 || iVar5 > func_131(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_148(int iParam0, int iParam1)//Position - 0x850F
{
	if (unk_0xFA30DFD0084E92FE(Global_19B04.f_6186.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_149(int iParam0)//Position - 0x8532
{
	int iVar0;
	
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				iVar0 = func_113();
				if (!func_23(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_158()) || Global_1974B) || Global_62BF) || func_157()) || func_156(8, -1)) || func_155()) || func_154()) || func_153()) || func_152()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1) || func_158()) || Global_62BF) || func_157()) || func_156(8, -1)) || func_153()) || func_155()) || func_154()) || func_152()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_158()) || Global_1974B) || Global_62BF) || func_157()) || func_156(8, -1)) || func_153()) || func_155()) || func_154()) || func_152()) || Global_19B04.f_1DEB.f_397[iVar0] == 5) || Global_8E64 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_158()) || Global_1974B) || Global_62BF) || func_157()) || func_156(8, -1)) || func_155()) || func_154()) || func_152()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_158() || unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0) || func_156(8, -1)) || func_152()) || func_151()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_156(8, -1) || func_155()) || func_154()) || func_151()) || func_150())
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
							if ((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || func_158()) || Global_62BF) || func_157()) || func_156(8, -1)) || func_154()) || func_153()) || func_152()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || !unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) || !unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F())) || !unk_0x726D9204B160D23E()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || func_158()) || func_154()) || Global_1974B) || Global_62BF) || func_157()) || Global_90C1) || func_156(8, -1)) || func_153()) || func_151()) || func_152()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || !unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) || !unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F())) || !unk_0x726D9204B160D23E()) || unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0)) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1)) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0x9273B3557334635D(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || func_158()) || Global_1974B) || Global_62BF) || func_157()) || func_156(8, -1)) || func_153()) || func_151()) || func_155()) || func_154()) || func_152())
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

var func_150()//Position - 0x8C4F
{
	return Global_16B42.f_1;
}

int func_151()//Position - 0x8C5D
{
	if (Global_15FA6 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_147B0[Global_15FA6 /*34*/].f_F, 13);
	}
	return 0;
}

int func_152()//Position - 0x8C83
{
	if (unk_0xB731B8C5BCE89836(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_153()//Position - 0x8C9D
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

bool func_154()//Position - 0x8CC7
{
	return Global_16B4F.f_142 > 0;
}

bool func_155()//Position - 0x8CD8
{
	return Global_16B4F.f_141 > 0;
}

bool func_156(int iParam0, int iParam1)//Position - 0x8CE9
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

var func_157()//Position - 0x8D24
{
	return Global_140856;
}

int func_158()//Position - 0x8D30
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		return Global_161D2.f_2C == 1;
	}
	return 0;
}

int func_159()//Position - 0x8D4C
{
	func_160();
	if (Global_C60[Global_389D /*2811*/][0 /*281*/].f_103 == 2)
	{
		return 1;
	}
	return 0;
}

void func_160()//Position - 0x8D74
{
	if (func_22(14))
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
		Global_389D = func_113();
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

bool func_161(int iParam0)//Position - 0x8E16
{
	return func_139(func_140(), iParam0);
}

int func_162(int iParam0, int iParam1, int iParam2)//Position - 0x8E28
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_113();
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

int func_163(int iParam0)//Position - 0x8F0C
{
	if (!func_23(iParam0))
	{
		return 7;
	}
	return Global_19B04.f_1DEB.f_397[iParam0];
}

bool func_164(int iParam0)//Position - 0x8F30
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_166())
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

int func_165()//Position - 0x8F8E
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

int func_166()//Position - 0x8FD2
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

int func_167()//Position - 0x908D
{
	vector3 vVar0;
	float fVar1;
	
	if (func_198(unk_0xBC25C936A095B5BA()))
	{
		vVar0 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
		unk_0x2084D4C6C2DF616F(vVar0, &fVar1, 0, 0);
		if ((vVar0.y < 2149.042f && (unk_0x62083F80FA40AAD2(unk_0xBC25C936A095B5BA()) || (unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA()) && (vVar0.z - fVar1) >= 7.5f))) && (vVar0.z - fVar1) >= 3f)
		{
			return 0;
		}
		if (vVar0.z >= 100f && unk_0x62083F80FA40AAD2(unk_0xBC25C936A095B5BA()))
		{
			return 0;
		}
	}
	return 1;
}

void func_168(bool bParam0, bool bParam1)//Position - 0x9125
{
	func_197();
	func_196();
	func_80(0);
	func_194(1, 1, 1, 0);
	func_192(0);
	func_190();
	unk_0x379ACE23D404525C(3054.991f, 1995.887f, -20f, 3140.817f, 2225.639f, 10.453f, true, 1);
	unk_0x38505EF4199EB062();
	unk_0x43F06392C4EF25E0(true);
	unk_0x78108840729CEAEE(0);
	func_189();
	func_188();
	func_187();
	func_186(bParam1);
	func_185(bParam1);
	unk_0x926FDA90094AA5FA(iLocal_77);
	unk_0xDF53A66AEE1401AA(1f);
	func_183();
	func_181();
	func_180(&uLocal_79, 1);
	func_180(&uLocal_79, 3);
	func_180(&uLocal_79, 4);
	func_180(&uLocal_79, 5);
	unk_0x1C51717D9E91D69B(0);
	unk_0x062C9995BFD27B2A(false, false, 3000, 1, 0, 0);
	func_69(0);
	if (bParam0)
	{
		func_169(-1);
		unk_0x95E4B6F3ED223F5A();
	}
}

void func_169(int iParam0)//Position - 0x91E8
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_29();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_119())
	{
		func_173(iParam0);
		unk_0x3FF92BBF0607A406(0, 0);
		Global_19AFB = unk_0x105601648511CC64();
		func_172(30000);
		StringCopy(&cVar0, func_171(Global_19AF9, 1), 64);
		if (func_28(Global_19AF9) > 0)
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
	func_170(&Global_62F8);
	Global_19AFA = 0;
	func_123(-1);
}

void func_170(var uParam0)//Position - 0x929D
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

char* func_171(int iParam0, bool bParam1)//Position - 0x92DA
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

void func_172(int iParam0)//Position - 0x9523
{
	Global_8E68 = (unk_0x105601648511CC64() + iParam0);
}

void func_173(int iParam0)//Position - 0x9535
{
	func_174(iParam0, 0, func_179(iParam0));
}

void func_174(int iParam0, int iParam1, int iParam2)//Position - 0x954A
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_140();
	func_177(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_176(iParam0, &uVar0);
	Var1 = { func_175(&uVar0) };
}

struct<16> func_175(var uParam0)//Position - 0x9579
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_134(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_133(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_132(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_135(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_138(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_136(*uParam0), 64);
	return Var0;
}

void func_176(int iParam0, var uParam1)//Position - 0x9649
{
	Global_19B04.f_6186.f_2B[iParam0] = *uParam1;
}

void func_177(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x9661
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_136(*uParam0);
	iVar1 = func_138(*uParam0);
	iVar2 = func_135(*uParam0);
	iVar3 = func_134(*uParam0);
	iVar4 = func_133(*uParam0);
	iVar5 = func_132(*uParam0);
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
	iVar6 = func_131(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_131(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_178(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_178(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x97E3
{
	func_146(uParam0, iParam1);
	func_145(uParam0, iParam2);
	func_144(uParam0, iParam3);
	func_142(uParam0, iParam5);
	func_143(uParam0, iParam4);
	func_141(uParam0, iParam6);
}

int func_179(int iParam0)//Position - 0x981B
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

void func_180(var uParam0, int iParam1)//Position - 0x99BE
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_181()//Position - 0x99DB
{
	Global_394A = 0;
	func_182();
}

void func_182()//Position - 0x99EB
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

void func_183()//Position - 0x9A42
{
	Global_394A = 0;
	func_184();
}

void func_184()//Position - 0x9A52
{
	unk_0x5C7DC611411E2CF9();
	Global_41AB = 0;
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x1E08809A5041F85B(false);
		Global_3DB8 = 6;
	}
}

void func_185(bool bParam0)//Position - 0x9A73
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_91(iVar0, bParam0);
		iVar0++;
	}
}

void func_186(bool bParam0)//Position - 0x9A95
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		func_39(iVar0, bParam0);
		iVar0++;
	}
}

void func_187()//Position - 0x9AB8
{
}

void func_188()//Position - 0x9AC0
{
	unk_0x4CE01E22F13D3913(sLocal_49);
	unk_0x4CE01E22F13D3913(sLocal_50);
}

void func_189()//Position - 0x9AD4
{
}

void func_190()//Position - 0x9ADC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_191(iVar0);
		iVar0++;
	}
}

void func_191(int iParam0)//Position - 0x9AFC
{
	if (iLocal_78[iParam0] != 0)
	{
		unk_0x483687B0FCA5415A(iLocal_78[iParam0], 0);
		iLocal_78[iParam0] = 0;
	}
}

void func_192(bool bParam0)//Position - 0x9B20
{
	if (bParam0)
	{
		unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 0, 0);
		unk_0xAEC867D0DBB7AFEB(0);
		unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
		unk_0xDF53A66AEE1401AA(0f);
		unk_0x635083B90B1A9C63(unk_0xB5CEFD608600A09F(), 0);
		unk_0x6E52C7765A0F4382(0);
		unk_0xE85B33FB221A23CD(3, false);
		unk_0xE85B33FB221A23CD(1, false);
		unk_0xE85B33FB221A23CD(8, false);
		unk_0xE85B33FB221A23CD(2, false);
		unk_0xE85B33FB221A23CD(6, false);
		unk_0xE85B33FB221A23CD(4, false);
		unk_0xE85B33FB221A23CD(12, false);
		unk_0xE85B33FB221A23CD(5, false);
		func_193(9, 1);
		func_193(8, 1);
	}
	else
	{
		unk_0xAEC867D0DBB7AFEB(5);
		unk_0xDF53A66AEE1401AA(1f);
		unk_0x635083B90B1A9C63(unk_0xB5CEFD608600A09F(), 1);
		unk_0x6E52C7765A0F4382(1);
		unk_0xE85B33FB221A23CD(3, true);
		unk_0xE85B33FB221A23CD(1, true);
		unk_0xE85B33FB221A23CD(8, true);
		unk_0xE85B33FB221A23CD(2, true);
		unk_0xE85B33FB221A23CD(6, true);
		unk_0xE85B33FB221A23CD(4, true);
		unk_0xE85B33FB221A23CD(12, true);
		unk_0xE85B33FB221A23CD(5, true);
		func_193(9, 0);
		func_193(8, 0);
	}
}

void func_193(int iParam0, bool bParam1)//Position - 0x9BF3
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

void func_194(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x9C15
{
	if (bParam0)
	{
		func_181();
	}
	if (bParam1)
	{
		if (!func_195() || (bParam0 && !bParam3))
		{
			unk_0xEB233A3B7635D2AC();
		}
		unk_0x22461BAEAB7226C1();
	}
	if (bParam2)
	{
		unk_0x7456702622C62EA0(1);
	}
}

int func_195()//Position - 0x9C55
{
	if (Global_3DB8 != 0 || unk_0xE6711F601F11B66B())
	{
		return 1;
	}
	return 0;
}

void func_196()//Position - 0x9C77
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		func_42(&(Local_47[iVar0 /*6*/].f_1));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_42(&(Local_48[iVar0 /*4*/].f_1));
		iVar0++;
	}
}

void func_197()//Position - 0x9CBC
{
	iLocal_45 = 0;
	iLocal_46 = 0;
	iLocal_54 = 0;
	iLocal_55 = 0;
}

int func_198(int iParam0)//Position - 0x9CD0
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

