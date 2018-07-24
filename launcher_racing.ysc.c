#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	float fLocal_17 = 0f;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	int iLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	char* sLocal_23 = NULL;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	struct<4> Local_40[10];
	bool bLocal_41 = 0;
	int iLocal_42 = 0;
	struct<6> Local_43 = { 10, 0, -1, 1000, -1, 0 } ;
	vector3 vLocal_44 = { 0f, 0f, 0f };
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	bool bLocal_52 = 0;
	bool bLocal_53 = 0;
	int iLocal_54 = 0;
	bool bLocal_55 = 0;
	int iLocal_56[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	vector3 vLocal_59 = { 0f, 0f, 0f };
	float fLocal_60 = 0f;
	int iLocal_61 = 0;
	vector3 vLocal_62 = { 0f, 0f, 0f };
	float fLocal_63 = 0f;
	vector3 vLocal_64[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_65[3] = { 0f, 0f, 0f };
	vector3 vLocal_66[7] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_67[7] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	int iLocal_68[3] = { 0, 0, 0 };
	int iLocal_69[3] = { 0, 0, 0 };
	int iLocal_70[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	char[] cLocal_73[8] = 0;
	char* sLocal_74[7] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	vector3 vLocal_83 = { 0f, 0f, 0f };
	vector3 vLocal_84 = { 0f, 0f, 0f };
	vector3 vLocal_85 = { 0f, 0f, 0f };
	vector3 vLocal_86 = { 0f, 0f, 0f };
	float fLocal_87 = 0f;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	var uLocal_90 = 8;
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
	var uLocal_237 = 1;
	struct<2> Local_238 = { 0, 5 } ;
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
	var uLocal_254 = 5;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	iLocal_5 = 1;
	iLocal_6 = 134;
	iLocal_7 = 134;
	iLocal_8 = 1;
	iLocal_9 = 1;
	iLocal_10 = 1;
	iLocal_11 = 134;
	iLocal_12 = 1;
	iLocal_13 = 12;
	iLocal_14 = 12;
	fLocal_17 = 0.001f;
	iLocal_20 = -1;
	sLocal_23 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	iLocal_46 = 1;
	bLocal_55 = true;
	iLocal_72 = joaat("feltzer2");
	iLocal_75 = 1;
	vLocal_83 = { 0f, 0f, 0f };
	vLocal_84 = { 1f, 1f, 1f };
	vLocal_85 = { 0f, 0f, 0f };
	vLocal_86 = { 0f, 0f, 0f };
	fLocal_87 = 0f;
	unk_0x80BDE252D8D954BC(1);
	vLocal_44 = { ScriptParam_238.f_1[0 /*3*/] };
	if (unk_0xE8A79675302ED812(83))
	{
		func_209(0);
	}
	func_206();
	switch (Local_43.f_1)
	{
		case 1:
		case 2:
			if (!func_205(0, 8))
			{
				func_209(0);
			}
			if (!func_204(Local_43))
			{
				func_209(0);
			}
			break;
		
		case 3:
			if (!func_205(0, 7))
			{
				func_209(0);
			}
			break;
		
		case 0:
			func_209(0);
			break;
	}
	func_198();
	if (!func_174())
	{
		func_209(0);
	}
	func_168();
	while (true)
	{
		func_165(&uLocal_90);
		if (func_174())
		{
			if (unk_0x684B06333594F9EA())
			{
				switch (iLocal_42)
				{
					case 0:
						iLocal_42 = 1;
						break;
					
					case 1:
						func_156();
						func_125();
						break;
					
					case 2:
						func_61();
						break;
					
					case 3:
						func_1();
						break;
				}
			}
			else
			{
				func_209(0);
			}
		}
		else
		{
			func_209(0);
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x19F
{
	if (!bLocal_53)
	{
		func_9();
	}
	else
	{
		func_2();
	}
}

void func_2()//Position - 0x1B8
{
	func_8(-1);
	func_7(0);
	func_6(vLocal_44);
	func_5();
	Global_14065C = 1;
	Global_14065C.f_1 = Local_43;
	StringCopy(&(Global_14065C.f_2), func_4(), 24);
	StringCopy(&(Global_14065C.f_8), func_3(Local_43), 32);
	Global_14065C.f_10 = { vLocal_44 };
	Global_140859 = 1;
	func_209(1);
}

char* func_3(int iParam0)//Position - 0x213
{
	char* sVar0;
	
	if (unk_0x3E9993F328985CCB())
	{
		switch (iParam0)
		{
			case 8:
				sVar0 = "qLp8OsaeTkCjzhK0SZoRVA";
				break;
			
			case 6:
				sVar0 = "JhV_7Ir4ekSQLafj22vFkg";
				break;
			
			case 7:
				sVar0 = "Fuc2Yl2sukOrORoMo1YJ1A";
				break;
			
			case 5:
				sVar0 = "aNlcpqEkhUytgK-8IMbTYQ";
				break;
			
			case 0:
				sVar0 = "9aLp9VEnME25Mp_6XZaw0A";
				break;
			
			case 2:
				sVar0 = "lT9gI2mfrkGDhiW1lSlhbw";
				break;
			
			case 3:
				sVar0 = "YxiNucGMGEu4lCKqizI2lA";
				break;
			
			case 1:
				sVar0 = "szYNFSberECI5goiWsh1bw";
				break;
			
			case 4:
				sVar0 = "nZ4p_4_F0EOFyZa2yKEHGA";
				break;
		}
	}
	else if (unk_0xA76D65C63ED50F67())
	{
		switch (iParam0)
		{
			case 0:
				sVar0 = "dm_test_20";
				break;
			
			case 1:
				sVar0 = "dm_test_18";
				break;
			
			case 2:
				sVar0 = "dm_test_2";
				break;
			
			case 3:
				sVar0 = "dm_test_4";
				break;
			
			case 4:
				sVar0 = "dm_test_5";
				break;
			
			case 5:
				sVar0 = "dm_test_16";
				break;
			
			case 6:
				sVar0 = "dm_test_13";
				break;
			
			case 7:
				sVar0 = "dm_test_15";
				break;
			
			case 8:
				sVar0 = "dm_test_24";
				break;
		}
	}
	else if (unk_0xF7E138CFA19B55E7())
	{
		switch (iParam0)
		{
			case 8:
				sVar0 = "qLp8OsaeTkCjzhK0SZoRVA";
				break;
			
			case 6:
				sVar0 = "JhV_7Ir4ekSQLafj22vFkg";
				break;
			
			case 7:
				sVar0 = "Fuc2Yl2sukOrORoMo1YJ1A";
				break;
			
			case 5:
				sVar0 = "aNlcpqEkhUytgK-8IMbTYQ";
				break;
			
			case 0:
				sVar0 = "9aLp9VEnME25Mp_6XZaw0A";
				break;
			
			case 2:
				sVar0 = "lT9gI2mfrkGDhiW1lSlhbw";
				break;
			
			case 3:
				sVar0 = "YxiNucGMGEu4lCKqizI2lA";
				break;
			
			case 1:
				sVar0 = "szYNFSberECI5goiWsh1bw";
				break;
			
			case 4:
				sVar0 = "nZ4p_4_F0EOFyZa2yKEHGA";
				break;
		}
	}
	else if (unk_0xF49912B78E2591B6())
	{
		switch (iParam0)
		{
			case 0:
				sVar0 = "dm_test_20";
				break;
			
			case 1:
				sVar0 = "dm_test_18";
				break;
			
			case 2:
				sVar0 = "dm_test_2";
				break;
			
			case 3:
				sVar0 = "dm_test_4";
				break;
			
			case 4:
				sVar0 = "dm_test_5";
				break;
			
			case 5:
				sVar0 = "dm_test_16";
				break;
			
			case 6:
				sVar0 = "dm_test_13";
				break;
			
			case 7:
				sVar0 = "dm_test_15";
				break;
			
			case 8:
				sVar0 = "dm_test_24";
				break;
		}
	}
	else if (unk_0x8ACB0C3FACC09467())
	{
		switch (iParam0)
		{
			case 0:
				sVar0 = "dm_test_20";
				break;
			
			case 1:
				sVar0 = "dm_test_18";
				break;
			
			case 2:
				sVar0 = "dm_test_2";
				break;
			
			case 3:
				sVar0 = "dm_test_4";
				break;
			
			case 4:
				sVar0 = "dm_test_5";
				break;
			
			case 5:
				sVar0 = "dm_test_16";
				break;
			
			case 6:
				sVar0 = "dm_test_13";
				break;
			
			case 7:
				sVar0 = "dm_test_15";
				break;
			
			case 8:
				sVar0 = "dm_test_24";
				break;
			}
	}
	return sVar0;
}

char* func_4()//Position - 0x4EF
{
	char* sVar0;
	
	if (unk_0x3E9993F328985CCB())
	{
		sVar0 = "SPRACE";
	}
	else if (unk_0xA76D65C63ED50F67())
	{
		sVar0 = "2535285330962926";
	}
	else if (unk_0xF7E138CFA19B55E7())
	{
		sVar0 = "SPRACE";
	}
	else if (unk_0xF49912B78E2591B6())
	{
		sVar0 = "2535285330962926";
	}
	else if (unk_0x8ACB0C3FACC09467())
	{
		sVar0 = "SPRACE";
	}
	else
	{
		sVar0 = "SPRACE";
	}
	return sVar0;
}

void func_5()//Position - 0x54F
{
	unk_0xF0059F27F7BB6680(&Global_1406A7, 0);
}

void func_6(vector3 vParam0)//Position - 0x560
{
	Global_1406A7.f_6 = { vParam0 };
}

void func_7(int iParam0)//Position - 0x574
{
	Global_1406A7.f_2 = iParam0;
}

void func_8(int iParam0)//Position - 0x584
{
	Global_1406A7.f_1 = iParam0;
}

void func_9()//Position - 0x594
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	Local_43.f_2 = -1;
	if (func_60(unk_0xBC25C936A095B5BA()))
	{
		if (!unk_0x4B4D220E2BCD09B8(unk_0xBC25C936A095B5BA()))
		{
			unk_0xC3D5C68D28907D90(unk_0xBC25C936A095B5BA(), 0);
		}
	}
	while (!func_54())
	{
		SYSTEM::WAIT(0);
	}
	if (Local_43.f_1 != 3)
	{
		func_16(func_49(), 1, Local_43.f_3);
		iVar0 = unk_0x105601648511CC64() + 1500;
		iVar1 = unk_0x3E12B546F3F2597A();
		if (func_14(iVar1))
		{
			while (!func_12(iVar1, 3f, 2, 1056964608, 0, 1, 0) || unk_0x105601648511CC64() < iVar0)
			{
				SYSTEM::WAIT(0);
			}
		}
		iVar2 = unk_0xFC1CAE18F3ECBF2D();
		if (unk_0x6A9CDB766DF7216F(iVar2))
		{
			unk_0xDDCAA2E64649E083(iVar2, false, 0);
		}
	}
	func_10();
}

void func_10()//Position - 0x643
{
	if (!func_11(0))
	{
		unk_0x63831D2D5110C305("mission_Race");
		while (!unk_0xACE95AD318CE412B("mission_Race"))
		{
			unk_0x63831D2D5110C305("mission_Race");
			SYSTEM::WAIT(0);
		}
		SYSTEM::START_NEW_SCRIPT_WITH_ARGS("mission_Race", &Local_43, 6, 23500);
	}
	unk_0x91DEC7187FA01089("mission_Race");
	func_209(1);
}

bool func_11(bool bParam0)//Position - 0x697
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_1163A, 0);
}

int func_12(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x6C2
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
	func_13(iParam0);
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

void func_13(int iParam0)//Position - 0x851
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

int func_14(int iParam0)//Position - 0x87D
{
	if (func_15(iParam0))
	{
		if (unk_0xE59B7F5A03335350(iParam0, 0))
		{
			if (!unk_0x7544D2465B934445(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_15(int iParam0)//Position - 0x8A7
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

int func_16(int iParam0, int iParam1, int iParam2)//Position - 0x8C8
{
	if (Global_19B04.f_6D75[iParam0 /*29*/].f_11 == 3)
	{
		return 0;
	}
	if (Global_19B04.f_6D75[iParam0 /*29*/].f_11 == 4)
	{
		return 0;
	}
	return func_17(Global_19B04.f_6D75[iParam0 /*29*/].f_11, 0, iParam1, iParam2, 0);
}

int func_17(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x911
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_48();
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
					func_47(99, 1);
					func_46(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_46(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_46(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_30(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_26(5))
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
							func_46(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_46(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_46(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_26(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_46(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_46(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_46(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_46(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_46(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_46(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_46(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_46(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_46(joaat("sp2_money_spent_property"), iParam3);
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
									func_46(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_46(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_46(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_46(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_46(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_46(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_26(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_46(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_46(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_46(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_46(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_46(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_46(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_25(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_47(95, iParam3);
					break;
				
				case 1:
					func_47(97, iParam3);
					break;
				
				case 2:
					func_47(96, iParam3);
					break;
			}
			func_47(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_20(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_20(iVar1);
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
					func_46(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_46(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_46(joaat("sp2_total_cash_earned"), iParam3);
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
	func_19(iParam0);
	if (Global_8C41 == 15)
	{
		func_18(0);
	}
	return 1;
}

void func_18(bool bParam0)//Position - 0xF10
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

void func_19(int iParam0)//Position - 0x1192
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

void func_20(int iParam0)//Position - 0x11EC
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_23(129, 0, -1, 1);
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
	else if (unk_0xFA30DFD0084E92FE(Global_19B04.f_5037.f_1D7, iParam0) || unk_0xFA30DFD0084E92FE(Global_200000[func_22() /*12171*/].f_1E08.f_A, iParam0))
	{
		bVar0 = true;
		unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_5037.f_1D7), iParam0);
		unk_0x7CB6FD92BE491AD9(&(Global_200000[func_22() /*12171*/].f_1E08.f_A), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x2E94302CFF011F2E("COUP_RED");
		unk_0xC9C304D0AABE1335(func_21(iParam0));
		unk_0x7BB0762D8C75A3C7(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_21(int iParam0)//Position - 0x12C3
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

int func_22()//Position - 0x134B
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_23(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x1358
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
		iParam2 = func_24();
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

int func_24()//Position - 0x1872
{
	return Global_1407E0;
}

void func_25(int iParam0)//Position - 0x187E
{
	func_47(93, iParam0);
	func_47(29, iParam0);
	func_47(30, iParam0);
}

bool func_26(int iParam0)//Position - 0x189E
{
	if (iParam0 == 8)
	{
		return func_27(129, -1, -1);
	}
	if (!unk_0x7AF0088ABFA713B6())
	{
		return unk_0xFA30DFD0084E92FE(Global_19B04.f_5037.f_1D7, iParam0);
	}
	return unk_0xFA30DFD0084E92FE(Global_200000[func_22() /*12171*/].f_1E08.f_A, iParam0);
}

int func_27(int iParam0, int iParam1, int iParam2)//Position - 0x18EC
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_24();
	}
	iVar1 = func_29(iParam0, iParam1);
	uVar2 = func_28(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDAB376DC6F83D68C(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_28(int iParam0)//Position - 0x1929
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

int func_29(int iParam0, int iParam1)//Position - 0x1C15
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_24();
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

int func_30(bool bParam0)//Position - 0x1EE2
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
		func_45(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_31(27, 1);
	return 1;
}

int func_31(int iParam0, int iParam1)//Position - 0x1F99
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_32(iParam0, iParam1);
}

int func_32(int iParam0, int iParam1)//Position - 0x1FB4
{
	if (func_44(14) && !func_43(iParam0))
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
	if (func_42(&Global_411EB6))
	{
		if (func_40(&Global_411EB6, iParam0))
		{
			return 0;
		}
		if (func_33(&Global_411EB6, iParam0))
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

int func_33(var uParam0, int iParam1)//Position - 0x2051
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x6D5CBCB6411EDE89(iParam1))
	{
		return 0;
	}
	if (func_44(14) && !func_43(iParam1))
	{
		return 0;
	}
	if (func_40(uParam0, iParam1))
	{
		return 0;
	}
	if (func_39(uParam0) < 0f)
	{
		func_38(uParam0, 0);
	}
	func_36(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_34(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_34(var uParam0, int iParam1)//Position - 0x2102
{
	int iVar0;
	
	if (unk_0x6D5CBCB6411EDE89(iParam1))
	{
		return 0;
	}
	if (func_44(14) && !func_43(iParam1))
	{
		return 0;
	}
	if (func_40(uParam0, iParam1))
	{
		return 0;
	}
	if (func_39(uParam0) < 0f)
	{
		func_38(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_35(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_35(var uParam0, int iParam1)//Position - 0x217D
{
	return (*uParam0)[iParam1] == 78;
}

void func_36(var uParam0)//Position - 0x218E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_37(uParam0, iVar0);
		iVar0++;
	}
	func_38(uParam0, (Global_411EB5 - 0.5f));
}

void func_37(var uParam0, int iParam1)//Position - 0x21C2
{
	(*uParam0)[iParam1] = 78;
}

void func_38(var uParam0, float fParam1)//Position - 0x21D2
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

float func_39(var uParam0)//Position - 0x21EF
{
	return uParam0->f_50;
}

bool func_40(var uParam0, int iParam1)//Position - 0x21FB
{
	return func_41(uParam0, iParam1) != -1;
}

int func_41(var uParam0, int iParam1)//Position - 0x220D
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

bool func_42(var uParam0)//Position - 0x223A
{
	return uParam0->f_4F == 1;
}

int func_43(int iParam0)//Position - 0x2248
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

bool func_44(int iParam0)//Position - 0x2298
{
	return Global_8C41 == iParam0;
}

int func_45(int iParam0, int iParam1)//Position - 0x22A6
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

void func_46(int iParam0, int iParam1)//Position - 0x22F7
{
	int iVar0;
	
	unk_0x6CB99B97664C3727(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x3A57956BCE003880(iParam0, iVar0, 1);
}

void func_47(int iParam0, int iParam1)//Position - 0x231A
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

void func_48()//Position - 0x2377
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

int func_49()//Position - 0x23EC
{
	func_50();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_50()//Position - 0x2405
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_53(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_52(unk_0xBC25C936A095B5BA());
			if (func_51(iVar0) && (!func_44(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_51(Global_19B04.f_932.f_21B.f_10CD))
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

bool func_51(int iParam0)//Position - 0x2502
{
	return iParam0 < 3;
}

int func_52(int iParam0)//Position - 0x250E
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_53(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_53(int iParam0)//Position - 0x254B
{
	if (func_51(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_54()//Position - 0x2575
{
	int iVar0;
	
	iVar0 = func_55(&(Local_43.f_2), 0, 9, 0, 0);
	if (!iVar0 == 1)
	{
		return 0;
	}
	return 1;
}

int func_55(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x2599
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
		if (func_59(0))
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
		if (!func_57(iParam2))
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
			func_56(uParam0, iParam4);
		}
	}
	return 2;
}

void func_56(var uParam0, int iParam1)//Position - 0x26D0
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

bool func_57(int iParam0)//Position - 0x271F
{
	return func_58(iParam0, Global_8C41);
}

int func_58(int iParam0, int iParam1)//Position - 0x2730
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

int func_59(int iParam0)//Position - 0x2911
{
	if (Global_8C41 == 15)
	{
		return 0;
	}
	if (func_57(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_60(int iParam0)//Position - 0x2933
{
	if (func_15(iParam0))
	{
		if (!unk_0x36CEFBE9B745A58D(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_61()//Position - 0x2953
{
	int iVar0;
	
	switch (iLocal_49)
	{
		case 0:
			if (func_123(0, -1, 0))
			{
				unk_0x7456702622C62EA0(1);
				func_111();
				unk_0x1549CEF3D921CF97(0);
				iLocal_54 = 1;
				bLocal_52 = false;
				bLocal_53 = false;
				iLocal_49 = 1;
			}
			break;
		
		case 1:
			if (func_74())
			{
				iLocal_49 = 2;
			}
			break;
		
		case 2:
			iVar0 = unk_0xFC1CAE18F3ECBF2D();
			unk_0x0B55204F721A7EA1(iVar0, 0);
			unk_0xDDCAA2E64649E083(iVar0, true, 0);
			func_65(0, 1, 1, 0, 0);
			func_62(1, -1);
			iLocal_49 = 0;
			if (bLocal_52)
			{
				iLocal_42 = 3;
			}
			else
			{
				unk_0x1549CEF3D921CF97(1);
				iLocal_42 = 1;
			}
			break;
	}
}

void func_62(bool bParam0, int iParam1)//Position - 0x29E5
{
	int iVar0;
	
	if (!func_64(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_43C1.f_1EFB)
	{
		unk_0xC0404835F30391BB(15);
		Global_43C1.f_1EFB = 0;
	}
	unk_0xE7918A3D05166D98(0f);
	if (Global_43C1.f_157A[iVar0])
	{
		unk_0x841D233D3CE81152(9, false);
		Global_43C1.f_157A[iVar0] = 0;
	}
	if (Global_43C1.f_156C[iVar0])
	{
		unk_0x786556581D95BCB2("CommonMenu");
		Global_43C1.f_156C[iVar0] = 0;
	}
	if (Global_43C1.f_1573[iVar0])
	{
		unk_0x786556581D95BCB2("MPShopSale");
		Global_43C1.f_1573[iVar0] = 0;
	}
	if (bParam0)
	{
		func_63(&(Global_43C1.f_159A[iVar0 /*10*/]));
		Global_43C1.f_15D7[iVar0] = 0;
	}
	else
	{
		Global_43C1.f_15D7[iVar0] = 0;
	}
}

void func_63(int iParam0)//Position - 0x2AA3
{
	if (iParam0->f_9 != 0)
	{
		if (unk_0xA7F138B5B1AB2CF6(*iParam0))
		{
			unk_0xB0B0FE33F4F22679(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

int func_64(var uParam0, bool bParam1, int iParam2)//Position - 0x2ACC
{
	char cVar0[64];
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -1)
	{
		if (unk_0x7AF0088ABFA713B6() && unk_0x32405B7614E36453())
		{
			iParam2 = unk_0x115A5CB728B7997D();
		}
	}
	StringCopy(&cVar0, unk_0x1377080E9B0BD993(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar1 = unk_0x56BEECB328B6D29D(&cVar0);
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (Global_43C1.f_15D7[iVar2] == iVar1)
		{
			*uParam0 = iVar2;
			return 1;
		}
		else if (Global_43C1.f_15D7[iVar2] == 0)
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (bParam1)
	{
		if (iVar3 != -1)
		{
			Global_43C1.f_15D7[iVar3] = iVar1;
			*uParam0 = iVar3;
			return 1;
		}
	}
	return 0;
}

void func_65(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x2B69
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
			if (!func_72())
			{
				Global_389D.f_1 = 3;
			}
			Global_3DB8 = 5;
		}
		func_71(1, iParam3, iParam2, 0);
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
		func_71(0, iParam3, iParam2, 0);
		if (unk_0x7AF0088ABFA713B6())
		{
			if ((((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_69(unk_0xB5CEFD608600A09F())) && !func_67(unk_0xB5CEFD608600A09F(), 0)) && !func_66()) && !bParam4)
			{
				unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), false);
			}
		}
		else if ((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_69(unk_0xB5CEFD608600A09F())) && !bParam4)
		{
			unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), false);
		}
		Global_11540 = 0;
	}
}

bool func_66()//Position - 0x2C92
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_27.f_12, 14);
}

bool func_67(int iParam0, int iParam1)//Position - 0x2CAF
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

int func_68(int iParam0, bool bParam1)//Position - 0x2CFA
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_24();
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

int func_69(int iParam0)//Position - 0x2D3B
{
	if (func_67(iParam0, 0))
	{
		return 1;
	}
	if (func_70())
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

bool func_70()//Position - 0x2D7D
{
	return unk_0xFA30DFD0084E92FE(Global_240006, 3);
}

int func_71(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x2D8E
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

int func_72()//Position - 0x2DC1
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_73(int iParam0)//Position - 0x2DE8
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

int func_74()//Position - 0x2E0B
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	
	func_110(&iVar0, &iVar1, &uVar2, &uVar3, 0);
	unk_0xD55638CE45B2B948(2, 201);
	unk_0xD55638CE45B2B948(2, 202);
	unk_0xD55638CE45B2B948(2, 188);
	unk_0xD55638CE45B2B948(2, 187);
	if (iLocal_51 != 0)
	{
		if (SYSTEM::TIMERA() > 800 || (((iVar1 > -64 && iVar1 < 64) && iVar0 > -64) && iVar0 < 64))
		{
			iLocal_51 = 0;
		}
		else
		{
			iVar0 = 0;
			iVar1 = 0;
		}
	}
	bVar4 = (iVar1 < -64 || unk_0x694514BD37EC4E94(2, 188));
	bVar5 = (iVar1 > 64 || unk_0x694514BD37EC4E94(2, 187));
	bVar6 = unk_0x694514BD37EC4E94(2, 201);
	bVar7 = unk_0x694514BD37EC4E94(2, 202);
	bVar8 = (iVar1 < -64 || iVar1 > 64);
	if (bVar6)
	{
		if (iLocal_50 == 1)
		{
			bLocal_53 = true;
		}
		else
		{
			bLocal_53 = false;
		}
		bLocal_52 = true;
		return 1;
	}
	else if (bVar7)
	{
		iLocal_76 = 0;
		bLocal_52 = false;
		return 1;
	}
	else
	{
		if (bVar5)
		{
			if (iLocal_50 == 0)
			{
				iLocal_50 = 1;
			}
			else if (iLocal_50 == 0)
			{
			}
		}
		else if (bVar4)
		{
			if (iLocal_50 == 1)
			{
				iLocal_50 = 0;
			}
			else if (iLocal_50 == 1)
			{
			}
		}
		if (bVar5 || bVar4)
		{
			if (bVar8)
			{
				SYSTEM::SETTIMERA(0);
				iLocal_51 = 1;
			}
			func_109(iLocal_50, 1, 1);
		}
	}
	func_75(1, -1, 1, 0, 1, -1082130432, 0, 0);
	return 0;
}

void func_75(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)//Position - 0x2F66
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
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	vector3 vVar38;
	bool bVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	float fVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	int iVar53;
	bool bVar54;
	float fVar55;
	float fVar56;
	float fVar57;
	float fVar58;
	int iVar59;
	int iVar60;
	float fVar61;
	float fVar62;
	float fVar63;
	char cVar64[64];
	char cVar65[64];
	float fVar66;
	int iVar67;
	float fVar68;
	float fVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	char cVar75[16];
	float fVar76;
	float fVar77;
	float fVar78;
	float fVar79;
	float fVar80;
	
	if (!func_64(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_106(0, bParam6))
	{
		return;
	}
	unk_0xC2EAD30963BDAA47(76, 84);
	unk_0xF6A6FFB73848BF82(-0.05f, -0.05f, 0f, 0f);
	fVar56 = 0f;
	fVar57 = 0f;
	if (Global_43C1)
	{
		if (func_104(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar56 = fVar37;
			fVar57 = fVar36;
			fVar56 = (fVar56 + 0f);
		}
		else
		{
			Global_43C1 = 0;
		}
	}
	if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_1)) == unk_0x56BEECB328B6D29D("HIDE"))
	{
		fVar58 = Global_43BF;
	}
	else
	{
		fVar58 = (((Global_43BF + fVar56) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_43C0;
	}
	fVar61 = 1f;
	if (bParam7)
	{
		unk_0x1BBB0A5225346008(&iVar59, &iVar60);
		fVar62 = unk_0x3771EE4CB542D71E(0);
		if (func_103())
		{
			iVar59 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar60) * fVar62));
		}
		fVar63 = (SYSTEM::TO_FLOAT(iVar59) / SYSTEM::TO_FLOAT(iVar60));
		fVar61 = (fVar63 / fVar62);
		if (func_103())
		{
			fVar61 = 1f;
		}
		iVar59 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar59) / fVar61));
		iVar60 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar60) / fVar61));
	}
	else
	{
		unk_0x7A569F3885B2E08A(&iVar59, &iVar60);
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_43C1.f_15DE)
		{
			if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_1)) == unk_0x56BEECB328B6D29D("HIDE"))
			{
				fVar49 = Global_43BF;
			}
			else
			{
				if (Global_43C1)
				{
					StringCopy(&cVar64, func_102(29), 64);
					StringCopy(&cVar65, func_99(29, 1), 64);
					if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_1A3F[29 /*16*/])) == -1487683087)
					{
						func_98(Global_43BE, Global_43BF, fParam5, (fVar56 - 0f), 0, 0, 0, 255);
						unk_0x51DA985AC0B70E2E(&cVar64, &cVar65, (Global_43BE + (fParam5 * 0.5f)), (Global_43BF + ((fVar56 - 0f) * 0.5f)), fVar57, (fVar56 - 0f), 0f, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0x51DA985AC0B70E2E(&cVar64, &cVar65, (Global_43BE + (fParam5 * 0.5f)), (Global_43BF + ((fVar56 - 0f) * 0.5f)), fParam5, (fVar56 - 0f), 0f, 255, 255, 255, 255, 0);
					}
				}
				if (Global_43C1.f_1EDD)
				{
					iVar1 = Global_43C1.f_1ED9;
					iVar2 = Global_43C1.f_1EDA;
					iVar3 = Global_43C1.f_1EDB;
					iVar4 = Global_43C1.f_1EDC;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_98(Global_43BE, (Global_43BF + fVar56), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_43BF + fVar56) + 0.034722f) + 0f);
				if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_1)) != 0)
				{
					func_97();
					unk_0x8B371195127AACF2(&(Global_43C1.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_43C1.f_44)
					{
						if (Global_43C1.f_5[iVar14] == 2)
						{
							unk_0xAA5C5BF0489E5553(Global_43C1.f_A[iVar15]);
							iVar15++;
						}
						else if (Global_43C1.f_5[iVar14] == 3)
						{
							unk_0x3AE7CB4034BE212F(Global_43C1.f_E[iVar16], Global_43C1.f_12[iVar16]);
							iVar16++;
						}
						else if (Global_43C1.f_5[iVar14] == 1)
						{
							unk_0xC9C304D0AABE1335(&(Global_43C1.f_16[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_43C1.f_5[iVar14] == 8)
						{
							unk_0xC9C304D0AABE1335(&(Global_43C1.f_16[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_43C1.f_5[iVar14] == 5)
						{
							unk_0x607C19B90D297FE2(&(Global_43C1.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_43C1.f_5[iVar14] == 6)
						{
							unk_0xC9C304D0AABE1335(&(Global_43C1.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_43C1.f_5[iVar14] == 7)
						{
							unk_0x607C19B90D297FE2(&(Global_43C1.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_43C1.f_5[iVar14] == 9)
						{
							unk_0x607C19B90D297FE2(&(Global_43C1.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0x3A8B9C7B1C825123((Global_43BE + 0.00390625f), ((Global_43BF + fVar56) + 0.00416664f), 0);
				}
				if (Global_43C1.f_15E1 > Global_43C1.f_13E7)
				{
					if (Global_43C1.f_15E4 != 0)
					{
						func_97();
						func_95((((Global_43BE + fParam5) - 0.00390625f) - func_96("CM_ITEM_COUNT", Global_43C1.f_15E4, Global_43C1.f_15E3)), ((Global_43BF + fVar56) + 0.00416664f), "CM_ITEM_COUNT", Global_43C1.f_15E4, Global_43C1.f_15E3);
					}
				}
			}
			iVar6 = Global_43C1.f_15E5;
			iVar9 = 0;
			fVar66 = fVar49;
			if (Global_43C1.f_1EE7)
			{
				iVar1 = Global_43C1.f_1EE3;
				iVar2 = Global_43C1.f_1EE4;
				iVar3 = Global_43C1.f_1EE5;
				iVar4 = Global_43C1.f_1EE6;
			}
			else
			{
				unk_0xE45648BDBF3441F5(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_43C1.f_13E7 && iVar6 <= Global_43C1.f_13E0)
			{
				if (iVar6 >= 0)
				{
					if (Global_43C1.f_14EB[iVar6])
					{
						if (Global_43C1.f_146A[iVar6] && iVar6 != Global_43C1.f_15E5)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar55 = 0.034722f;
						if (Global_43C1.f_15EC[iVar6] != 0f)
						{
							fVar55 = Global_43C1.f_15EC[iVar6];
						}
						fVar49 = (fVar49 + fVar55);
						iVar9++;
					}
				}
				iVar6++;
			}
			if (bParam3)
			{
				if (iVar9 <= 1)
				{
					fVar55 = 0.034722f;
					fVar49 = (fVar49 + fVar55);
					iVar9++;
					if (Global_43C1.f_13E0 <= 1)
					{
						Global_43C1.f_13E0++;
					}
					iVar53 = 1;
				}
			}
			unk_0x51DA985AC0B70E2E("CommonMenu", "Gradient_Bgd", (Global_43BE + (fParam5 * 0.5f)), ((fVar66 + ((fVar49 - fVar66) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar66), 0f, 255, 255, 255, 255, 0);
			if (Global_43C1.f_15E1 > Global_43C1.f_13E7)
			{
				if (Global_43C1.f_1EEC)
				{
					iVar1 = Global_43C1.f_1EE8;
					iVar2 = Global_43C1.f_1EE9;
					iVar3 = Global_43C1.f_1EEA;
					iVar4 = Global_43C1.f_1EEB;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_98(Global_43BE, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				vVar38 = { unk_0x9893E000F1F078E7("CommonMenu", "shop_arrows_upANDdown") };
				vVar38.x = (vVar38.x * (0.5f / fVar61));
				vVar38.y = (vVar38.y * (0.5f / fVar61));
				if (Global_43C1.f_1EF9)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0xE45648BDBF3441F5(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x51DA985AC0B70E2E("CommonMenu", "shop_arrows_upANDdown", (Global_43BE + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((vVar38.x / 1280f) * fVar61), ((vVar38.y / 720f) * fVar61), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_11D2)) != 0 && Global_43C1.f_121C != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_43BE + 0.0046875f);
				if (Global_43C1.f_121E != 0)
				{
					func_104(Global_43C1.f_121E, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_43BE + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_94(fVar40);
				unk_0xD8C1258D4AB3DD08(&(Global_43C1.f_11D2));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_43C1.f_1218)
				{
					if (Global_43C1.f_11D6[iVar14] == 2)
					{
						unk_0xAA5C5BF0489E5553(Global_43C1.f_11DB[iVar15]);
						iVar15++;
					}
					else if (Global_43C1.f_11D6[iVar14] == 3)
					{
						unk_0x3AE7CB4034BE212F(Global_43C1.f_11DF[iVar16], Global_43C1.f_11E3[iVar16]);
						iVar16++;
					}
					else if (Global_43C1.f_11D6[iVar14] == 1)
					{
						unk_0xC9C304D0AABE1335(&(Global_43C1.f_11E7[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_43C1.f_11D6[iVar14] == 5)
					{
						unk_0x607C19B90D297FE2(&(Global_43C1.f_11E7[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_43C1.f_11D6[iVar14] == 6)
					{
						unk_0xC9C304D0AABE1335(&(Global_43C1.f_11E7[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_43C1.f_11D6[iVar14] == 7)
					{
						unk_0x607C19B90D297FE2(&(Global_43C1.f_11E7[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_43C1.f_11D6[iVar14] == 9)
					{
						unk_0x607C19B90D297FE2(&(Global_43C1.f_11E7[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xD7347ECB614BEFFC(fVar40, (fVar49 + 0.00277776f));
				unk_0xE45648BDBF3441F5(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_98(Global_43BE, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_43C1.f_1EF1)
				{
					iVar1 = Global_43C1.f_1EED;
					iVar2 = Global_43C1.f_1EEE;
					iVar3 = Global_43C1.f_1EEF;
					iVar4 = Global_43C1.f_1EF0;
				}
				else
				{
					unk_0xE45648BDBF3441F5(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x51DA985AC0B70E2E("CommonMenu", "Gradient_Bgd", (Global_43BE + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x60F548525BE58E47(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x60F548525BE58E47(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_94(fVar40);
				unk_0x8B371195127AACF2(&(Global_43C1.f_11D2));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_43C1.f_1218)
				{
					if (Global_43C1.f_11D6[iVar14] == 2)
					{
						unk_0xAA5C5BF0489E5553(Global_43C1.f_11DB[iVar15]);
						iVar15++;
					}
					else if (Global_43C1.f_11D6[iVar14] == 3)
					{
						unk_0x3AE7CB4034BE212F(Global_43C1.f_11DF[iVar16], Global_43C1.f_11E3[iVar16]);
						iVar16++;
					}
					else if (Global_43C1.f_11D6[iVar14] == 1)
					{
						unk_0xC9C304D0AABE1335(&(Global_43C1.f_11E7[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_43C1.f_11D6[iVar14] == 5)
					{
						unk_0x607C19B90D297FE2(&(Global_43C1.f_11E7[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_43C1.f_11D6[iVar14] == 6)
					{
						unk_0xC9C304D0AABE1335(&(Global_43C1.f_11E7[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_43C1.f_11D6[iVar14] == 7)
					{
						unk_0x607C19B90D297FE2(&(Global_43C1.f_11E7[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_43C1.f_11D6[iVar14] == 9)
					{
						unk_0x607C19B90D297FE2(&(Global_43C1.f_11E7[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_43C1.f_11D6[iVar14] == 8)
					{
						unk_0xC9C304D0AABE1335(&(Global_43C1.f_11E7[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x3A8B9C7B1C825123(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_43C1.f_121E != 0)
				{
					func_104(Global_43C1.f_121E, 1, 1, &fVar36, &fVar37, bParam7);
					func_93(Global_43C1.f_121E, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0x51DA985AC0B70E2E(func_102(Global_43C1.f_121E), func_99(Global_43C1.f_121E, 1), ((Global_43BE + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
				}
				fVar49 = (fVar49 + (((unk_0x60F548525BE58E47(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_43C1.f_121C > 0)
				{
					if ((unk_0x105601648511CC64() - Global_43C1.f_121D) > Global_43C1.f_121C)
					{
						StringCopy(&(Global_43C1.f_11D2), "", 16);
						Global_43C1.f_121C = -1;
					}
				}
			}
			if (unk_0x56BEECB328B6D29D(&(Global_41188A.f_15)) != 0 && Global_41188A.f_41 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_43BE + 0.0046875f);
				if (Global_41188A.f_43 != 0)
				{
					func_104(Global_41188A.f_43, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_43BE + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_94(fVar40);
				unk_0xD8C1258D4AB3DD08(&(Global_41188A.f_15));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_41188A.f_3D)
				{
					if (Global_41188A.f_19[iVar14] == 2)
					{
						unk_0xAA5C5BF0489E5553(Global_41188A.f_1E[iVar15]);
						iVar15++;
					}
					else if (Global_41188A.f_19[iVar14] == 3)
					{
						unk_0x3AE7CB4034BE212F(Global_41188A.f_22[iVar16], Global_41188A.f_26[iVar16]);
						iVar16++;
					}
					else if (Global_41188A.f_19[iVar14] == 1)
					{
						unk_0xC9C304D0AABE1335(&(Global_41188A.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_41188A.f_19[iVar14] == 5)
					{
						unk_0x607C19B90D297FE2(&(Global_41188A.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_41188A.f_19[iVar14] == 6)
					{
						unk_0xC9C304D0AABE1335(&(Global_41188A.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_41188A.f_19[iVar14] == 7)
					{
						unk_0x607C19B90D297FE2(&(Global_41188A.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_41188A.f_19[iVar14] == 9)
					{
						unk_0x607C19B90D297FE2(&(Global_41188A.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_41188A.f_19[iVar14] == 8)
					{
						unk_0xC9C304D0AABE1335(&(Global_41188A.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xD7347ECB614BEFFC(fVar40, (fVar49 + 0.00277776f));
				unk_0xE45648BDBF3441F5(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_98(Global_43BE, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_43C1.f_1EF1)
				{
					iVar1 = Global_43C1.f_1EED;
					iVar2 = Global_43C1.f_1EEE;
					iVar3 = Global_43C1.f_1EEF;
					iVar4 = Global_43C1.f_1EF0;
				}
				else
				{
					unk_0xE45648BDBF3441F5(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x51DA985AC0B70E2E("CommonMenu", "Gradient_Bgd", (Global_43BE + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x60F548525BE58E47(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x60F548525BE58E47(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_94(fVar40);
				unk_0x8B371195127AACF2(&(Global_41188A.f_15));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_41188A.f_3D)
				{
					if (Global_41188A.f_19[iVar14] == 2)
					{
						unk_0xAA5C5BF0489E5553(Global_41188A.f_1E[iVar15]);
						iVar15++;
					}
					else if (Global_41188A.f_19[iVar14] == 3)
					{
						unk_0x3AE7CB4034BE212F(Global_41188A.f_22[iVar16], Global_41188A.f_26[iVar16]);
						iVar16++;
					}
					else if (Global_41188A.f_19[iVar14] == 1)
					{
						unk_0xC9C304D0AABE1335(&(Global_41188A.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_41188A.f_19[iVar14] == 8)
					{
						unk_0xC9C304D0AABE1335(&(Global_41188A.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_41188A.f_19[iVar14] == 5)
					{
						unk_0x607C19B90D297FE2(&(Global_41188A.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_41188A.f_19[iVar14] == 6)
					{
						unk_0xC9C304D0AABE1335(&(Global_41188A.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_41188A.f_19[iVar14] == 7)
					{
						unk_0x607C19B90D297FE2(&(Global_41188A.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_41188A.f_19[iVar14] == 9)
					{
						unk_0x607C19B90D297FE2(&(Global_41188A.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x3A8B9C7B1C825123(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_41188A.f_43 != 0)
				{
					func_104(Global_41188A.f_43, 1, 1, &fVar36, &fVar37, bParam7);
					func_93(Global_41188A.f_43, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0x51DA985AC0B70E2E(func_102(Global_41188A.f_43), func_99(Global_41188A.f_43, 1), ((Global_43BE + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
				}
				fVar49 = (fVar49 + (((unk_0x60F548525BE58E47(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_41188A.f_41 > 0)
				{
					if ((unk_0x105601648511CC64() - Global_41188A.f_42) > Global_41188A.f_41)
					{
						StringCopy(&(Global_41188A.f_15), "", 16);
						Global_41188A.f_41 = -1;
					}
				}
			}
			func_88(iVar59, iParam1, 0, 0, 0, 0, bParam4, 1, 0);
			unk_0xC2EAD30963BDAA47(76, 84);
			unk_0xF6A6FFB73848BF82(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_43C1.f_15DE)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar67 = Global_43C1.f_13E0;
			if (Global_43C1.f_15DF)
			{
				iVar67 = (Global_43C1.f_15E2 - 1);
			}
			fVar68 = 0f;
			fVar69 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar67)
			{
				fVar55 = 0.034722f;
				if (Global_43C1.f_15EC[iVar6] != 0f)
				{
					fVar55 = Global_43C1.f_15EC[iVar6];
				}
				if (Global_43C1.f_15DF)
				{
					iVar6 = Global_43C1.f_1D80[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_43C1.f_15E5 && iVar9 < Global_43C1.f_13E7)
				{
					bVar33 = true;
					if (Global_43C1.f_15E6 == iVar6)
					{
						fVar69 = fVar68;
					}
					if (Global_43C1.f_146A[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar58 + fVar68) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_43C1.f_1672[iVar6] = fVar35;
				fVar34 = (Global_43BE + 0.0046875f);
				bVar39 = false;
				bVar32 = Global_43C1.f_15E6 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar70 = 255;
					iVar71 = 255;
					iVar72 = 255;
					iVar73 = 255;
					if (Global_43C1.f_1EF3)
					{
						unk_0xE45648BDBF3441F5(Global_43C1.f_1EF2, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					else
					{
						unk_0xE45648BDBF3441F5(1, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					unk_0x51DA985AC0B70E2E("CommonMenu", "Gradient_Nav", (Global_43BE + (fParam5 * 0.5f)), (((fVar58 + fVar69) + (0.00277776f * IntToFloat(iVar12))) + (fVar55 * 0.5f)), fParam5, fVar55, 0f, iVar70, iVar71, iVar72, iVar73, 0);
					Global_43C1.f_1670 = fVar35;
				}
				if (iVar53 && iVar7 == iVar67)
				{
					func_86(bVar32, 1, 0, 0, 0, 0, 0);
					unk_0x8B371195127AACF2("DFLT_MNU_OPT");
					unk_0x3A8B9C7B1C825123(fVar34, fVar35, 0);
					bVar39 = true;
				}
				else
				{
					iVar8 = 0;
					while (iVar8 < Global_43C1.f_13E8)
					{
						if (unk_0xFA30DFD0084E92FE(Global_43C1.f_135F[iVar6], iVar8) || Global_43C1.f_133E[iVar8] == 5)
						{
							if (Global_43C1.f_15DF)
							{
								iVar19 = Global_43C1.f_1D90[((iVar9 * Global_43C1.f_13E8) + iVar8)];
								iVar20 = Global_43C1.f_1DB9[((iVar9 * Global_43C1.f_13E8) + iVar8)];
								iVar21 = Global_43C1.f_1DE2[((iVar9 * Global_43C1.f_13E8) + iVar8)];
								iVar22 = Global_43C1.f_1E0B[((iVar9 * Global_43C1.f_13E8) + iVar8)];
								iVar23 = Global_43C1.f_1E34[((iVar9 * Global_43C1.f_13E8) + iVar8)];
							}
							else
							{
								Global_43C1.f_1D90[((iVar9 * Global_43C1.f_13E8) + iVar8)] = iVar19;
								Global_43C1.f_1DB9[((iVar9 * Global_43C1.f_13E8) + iVar8)] = iVar20;
								Global_43C1.f_1DE2[((iVar9 * Global_43C1.f_13E8) + iVar8)] = iVar21;
								Global_43C1.f_1E0B[((iVar9 * Global_43C1.f_13E8) + iVar8)] = iVar22;
								Global_43C1.f_1E34[((iVar9 * Global_43C1.f_13E8) + iVar8)] = iVar23;
							}
							iVar74 = 0;
							bVar54 = false;
							if (Global_43C1.f_16F6[0] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_43C1.f_16F3[0])
								{
									bVar54 = true;
									iVar74 = 0;
								}
							}
							if (Global_43C1.f_16F6[1] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_43C1.f_16F3[1])
								{
									bVar54 = true;
									iVar74 = 1;
								}
							}
							if (Global_43C1.f_1344[iVar8] != -1f)
							{
								fVar34 = ((Global_43BE + 0.0046875f) + Global_43C1.f_1344[iVar8]);
							}
							if ((iVar8 < 4 && Global_43C1.f_1344[iVar8 + 1] != -1f) && fVar34 < Global_43C1.f_1344[iVar8 + 1])
							{
								fVar44 = (Global_43C1.f_1344[iVar8 + 1] - fVar34);
							}
							else
							{
								fVar44 = (((Global_43BE + Global_43C0) - 0.0046875f) - fVar34);
							}
							if ((Global_43C1.f_1351[iVar8] && Global_43C1.f_166D) && bVar32)
							{
								bVar52 = true;
							}
							else
							{
								bVar52 = false;
							}
							switch (Global_43C1.f_133E[iVar8])
							{
								case 0:
									break;
								
								case 1:
									iVar24 = iVar19;
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_43C1.f_15DF)
										{
											fVar41 = 0f;
											fVar42 = 0f;
											iVar25 = 0;
											iVar26 = 0;
											iVar27 = 0;
											iVar28 = 0;
											iVar29 = 0;
											if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
											{
												bVar50 = false;
												bVar51 = false;
												iVar14 = 0;
												while (iVar14 < 4)
												{
													if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 5 || Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 8)
													{
														bVar51 = true;
													}
													else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 9)
													{
														bVar50 = true;
													}
													iVar14++;
												}
												func_86(bVar32, Global_43C1.f_64A[iVar24], Global_43C1.f_74B[iVar24], bVar54, iVar74, bVar51, bVar50);
												unk_0xE746379C2AF24EF6(&(Global_43C1.f_49[iVar24 /*6*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
													{
														unk_0xC9C304D0AABE1335(&(Global_43C1.f_49[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
													{
														unk_0xC9C304D0AABE1335(&(Global_43C1.f_49[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 5)
												{
													if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
													{
														unk_0x607C19B90D297FE2(&(Global_25827C[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 6)
												{
													if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
													{
														unk_0xC9C304D0AABE1335(&(Global_25827C[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 7)
												{
													if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
													{
														unk_0x607C19B90D297FE2(&(Global_25827C[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 9)
												{
													if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
													{
														unk_0x607C19B90D297FE2(&(Global_25827C[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 2)
												{
													if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
													{
														unk_0xAA5C5BF0489E5553(Global_43C1.f_F4E[(iVar20 + iVar26)]);
													}
													iVar26++;
												}
												else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 3)
												{
													if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
													{
														unk_0x3AE7CB4034BE212F(Global_43C1.f_104F[(iVar21 + iVar27)], Global_43C1.f_10D0[(iVar21 + iVar27)]);
													}
													iVar27++;
												}
												else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 4)
												{
													iVar28++;
												}
												iVar14++;
											}
											if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
											{
												fVar41 = unk_0x2207C0EA517B975D(1);
											}
											if (iVar28 > 0)
											{
												iVar14 = 0;
												while (iVar14 < iVar28)
												{
													if (func_104(Global_43C1.f_1151[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar42 = (fVar42 + fVar36);
														if (iVar14 > 0)
														{
															fVar42 = (fVar42 - (0.00078125f * 4f));
														}
														if (Global_43C1.f_1151[(iVar22 + iVar14)] == 2 || Global_43C1.f_1151[(iVar22 + iVar14)] == 48)
														{
															fVar42 = (fVar42 - (0.00078125f * 5f));
														}
													}
													iVar14++;
												}
											}
											fVar40 = 0f;
											if (Global_43C1.f_1359[iVar8] == 2)
											{
												fVar40 = (fVar40 + ((fVar44 - (fVar41 + fVar42)) + (0.00078125f * 1f)));
											}
											else if (Global_43C1.f_1359[iVar8] == 0)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - ((fVar41 + fVar42) * 0.5f)));
											}
											Global_43C1.f_1E5D[((iVar9 * Global_43C1.f_13E8) + iVar8)] = fVar40;
											Global_43C1.f_1E86[((iVar9 * Global_43C1.f_13E8) + iVar8)] = fVar41;
											Global_43C1.f_1EAF[((iVar9 * Global_43C1.f_13E8) + iVar8)] = fVar42;
										}
										else
										{
											fVar40 = Global_43C1.f_1E5D[((iVar9 * Global_43C1.f_13E8) + iVar8)];
											fVar41 = Global_43C1.f_1E86[((iVar9 * Global_43C1.f_13E8) + iVar8)];
											fVar42 = Global_43C1.f_1EAF[((iVar9 * Global_43C1.f_13E8) + iVar8)];
										}
										if (bVar52)
										{
											if (func_104(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_43C1.f_1359[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_104(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_93(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0x51DA985AC0B70E2E(func_102(26), func_99(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
											if (func_104(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_104(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_93(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0x51DA985AC0B70E2E(func_102(27), func_99(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar31 = 0;
										if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
										{
											bVar50 = false;
											bVar51 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 5 || Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 8)
												{
													bVar51 = true;
												}
												else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 9)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											func_86(bVar32, Global_43C1.f_64A[iVar24], Global_43C1.f_74B[iVar24], bVar54, 0, bVar51, bVar50);
											if (Global_43C1.f_1EF7 && Global_43C1.f_1EF8 == iVar6)
											{
												func_85(bVar32);
											}
											unk_0x8B371195127AACF2(&(Global_43C1.f_49[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
												{
													unk_0xC9C304D0AABE1335(&(Global_43C1.f_49[(iVar24 + iVar25) /*6*/]));
												}
												iVar31 = 1;
											}
											else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
												{
													unk_0xC9C304D0AABE1335(&(Global_43C1.f_49[(iVar24 + iVar25) /*6*/]));
												}
												iVar31 = 8;
											}
											else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
												{
													unk_0x607C19B90D297FE2(&(Global_25827C[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 5;
											}
											else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
												{
													unk_0xC9C304D0AABE1335(&(Global_25827C[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 6;
											}
											else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
												{
													unk_0x607C19B90D297FE2(&(Global_25827C[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 7;
											}
											else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 9)
											{
												if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
												{
													unk_0x607C19B90D297FE2(&(Global_25827C[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 9;
											}
											else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
												{
													unk_0xAA5C5BF0489E5553(Global_43C1.f_F4E[(iVar20 + iVar26)]);
												}
												iVar26++;
												iVar31 = 2;
											}
											else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
												{
													unk_0x3AE7CB4034BE212F(Global_43C1.f_104F[(iVar21 + iVar27)], Global_43C1.f_10D0[(iVar21 + iVar27)]);
												}
												iVar27++;
												iVar31 = 3;
											}
											else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 4)
											{
												if (Global_43C1.f_1151[(iVar22 + iVar28)] == 2 || Global_43C1.f_1151[(iVar22 + iVar28)] == 48)
												{
													if (func_104(Global_43C1.f_1151[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar40 = (fVar40 + (fVar36 * 0.5f));
														if (func_104(Global_43C1.f_1151[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_93(Global_43C1.f_1151[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_43C1.f_1359[iVar8] == 2)
															{
																unk_0x51DA985AC0B70E2E(func_102(Global_43C1.f_1151[(iVar22 + iVar28)]), func_99(Global_43C1.f_1151[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0x51DA985AC0B70E2E(func_102(Global_43C1.f_1151[(iVar22 + iVar28)]), func_99(Global_43C1.f_1151[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															fVar40 = (fVar40 + (0.00078125f * 3f));
														}
													}
												}
												iVar28++;
												iVar31 = 4;
											}
											iVar14++;
										}
										if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
										{
											if (iVar31 == 4 && Global_43C1.f_1359[iVar8] == 2)
											{
												unk_0x3A8B9C7B1C825123(((fVar34 + fVar40) + (0.00078125f * 7f)), fVar35, 0);
											}
											else
											{
												unk_0x3A8B9C7B1C825123((fVar34 + fVar40), fVar35, 0);
												if (func_84() && unk_0xB731B8C5BCE89836(joaat("fm_mission_creator")) > 0)
												{
													if (iVar8 == 0)
													{
														func_86(0, Global_43C1.f_64A[iVar24], Global_43C1.f_74B[iVar24], bVar54, 0, bVar51, bVar50);
														StringCopy(&cVar75, "TEST_LABEL", 16);
														fVar76 = 0f;
														fVar77 = 55f;
														fVar78 = 0.0185f;
														fVar79 = 0.004f;
														fVar80 = 0.02f;
														unk_0xB8F3C51875F7BEA3(0f, (0.35f * 0.7f));
														unk_0xCC4FE6A016BA0765(255, 255, 255, 150);
														unk_0xF7EBEC3FF57AEC65((fVar34 - (fVar80 * 0.6f)), (fVar35 + (fVar78 * 0.75f)), 0.0175f, 0.035f, SYSTEM::FLOOR(fVar76), SYSTEM::FLOOR(fVar76), SYSTEM::FLOOR(fVar76), SYSTEM::FLOOR(fVar77), 0);
														unk_0x8B371195127AACF2(&cVar75);
														unk_0xAA5C5BF0489E5553((Global_43C1.f_15E5 + iVar30));
														unk_0x3A8B9C7B1C825123((fVar34 - fVar80), (fVar35 + fVar79), 0);
														iVar30++;
													}
												}
											}
										}
										if (iVar28 > 0)
										{
											fVar40 = (fVar40 + (6f * 0.00078125f));
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (Global_43C1.f_1151[(iVar22 + iVar14)] != 2 && Global_43C1.f_1151[(iVar22 + iVar14)] != 48)
												{
													if (func_104(Global_43C1.f_1151[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar40 = (fVar40 + (fVar36 * 0.5f));
														if (func_104(Global_43C1.f_1151[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_93(Global_43C1.f_1151[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_43C1.f_1151[(iVar22 + iVar14)] == 30)
															{
																unk_0x51DA985AC0B70E2E(func_102(Global_43C1.f_1151[(iVar22 + iVar14)]), func_99(Global_43C1.f_1151[(iVar22 + iVar14)], bVar32), (Global_43BE + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else if (Global_43C1.f_1359[iVar8] == 2)
															{
																unk_0x51DA985AC0B70E2E(func_102(Global_43C1.f_1151[(iVar22 + iVar14)]), func_99(Global_43C1.f_1151[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0x51DA985AC0B70E2E(func_102(Global_43C1.f_1151[(iVar22 + iVar14)]), func_99(Global_43C1.f_1151[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
														}
														fVar40 = (fVar40 + (12f * 0.00078125f));
													}
												}
												iVar14++;
											}
										}
									}
									bVar39 = true;
									iVar19++;
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 1)
										{
											iVar19++;
										}
										else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 8)
										{
											iVar19++;
										}
										else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 2)
										{
											iVar20++;
										}
										else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 3)
										{
											iVar21++;
										}
										else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 4)
										{
											iVar22++;
										}
										else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 5)
										{
											iVar23++;
										}
										else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 6)
										{
											iVar23++;
										}
										else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 7)
										{
											iVar23++;
										}
										else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 9)
										{
											iVar23++;
										}
										iVar14++;
									}
									break;
								
								case 2:
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_43C1.f_15DF)
										{
											func_86(bVar32, Global_43C1.f_64A[iVar24], Global_43C1.f_74B[iVar24], bVar54, 0, 0, 0);
											if (Global_43C1.f_1EF7 && Global_43C1.f_1EF8 == iVar6)
											{
												func_85(bVar32);
											}
											unk_0xE746379C2AF24EF6("NUMBER");
											unk_0xAA5C5BF0489E5553(Global_43C1.f_F4E[iVar20]);
											fVar41 = unk_0x2207C0EA517B975D(1);
											fVar40 = 0f;
											if (Global_43C1.f_1359[iVar8] == 2)
											{
												fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
											}
											else if (Global_43C1.f_1359[iVar8] == 0)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
											}
											Global_43C1.f_1E5D[((iVar9 * Global_43C1.f_13E8) + iVar8)] = fVar40;
											Global_43C1.f_1E86[((iVar9 * Global_43C1.f_13E8) + iVar8)] = fVar41;
										}
										else
										{
											fVar40 = Global_43C1.f_1E5D[((iVar9 * Global_43C1.f_13E8) + iVar8)];
											fVar41 = Global_43C1.f_1E86[((iVar9 * Global_43C1.f_13E8) + iVar8)];
										}
										if (bVar52)
										{
											if (func_104(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_43C1.f_1359[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_104(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_93(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0x51DA985AC0B70E2E(func_102(26), func_99(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
											if (func_104(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_104(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_93(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0x51DA985AC0B70E2E(func_102(27), func_99(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										func_86(bVar32, Global_43C1.f_64A[iVar24], Global_43C1.f_74B[iVar24], bVar54, 0, 0, 0);
										func_83((fVar34 + fVar40), fVar35, "NUMBER", Global_43C1.f_F4E[iVar20], 0);
									}
									bVar39 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_43C1.f_15DF)
										{
											func_86(bVar32, Global_43C1.f_64A[iVar24], Global_43C1.f_74B[iVar24], bVar54, 0, 0, 0);
											if (Global_43C1.f_1EF7 && Global_43C1.f_1EF8 == iVar6)
											{
												func_85(bVar32);
											}
											unk_0xE746379C2AF24EF6("NUMBER");
											unk_0x3AE7CB4034BE212F(Global_43C1.f_104F[iVar21], Global_43C1.f_10D0[iVar21]);
											fVar41 = unk_0x2207C0EA517B975D(1);
											fVar40 = 0f;
											if (Global_43C1.f_1359[iVar8] == 2)
											{
												fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
											}
											else if (Global_43C1.f_1359[iVar8] == 0)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
											}
											Global_43C1.f_1E5D[((iVar9 * Global_43C1.f_13E8) + iVar8)] = fVar40;
											Global_43C1.f_1E86[((iVar9 * Global_43C1.f_13E8) + iVar8)] = fVar41;
										}
										else
										{
											fVar40 = Global_43C1.f_1E5D[((iVar9 * Global_43C1.f_13E8) + iVar8)];
											fVar41 = Global_43C1.f_1E86[((iVar9 * Global_43C1.f_13E8) + iVar8)];
										}
										if (bVar52)
										{
											if (func_104(26, 1, 0, &fVar36, &fVar37, 0))
											{
												if (Global_43C1.f_1359[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_104(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_93(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0x51DA985AC0B70E2E(func_102(26), func_99(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
											if (func_104(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_104(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_93(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0x51DA985AC0B70E2E(func_102(27), func_99(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										func_86(bVar32, Global_43C1.f_64A[iVar24], Global_43C1.f_74B[iVar24], bVar54, 0, 0, 0);
										func_82((fVar34 + fVar40), fVar35, "NUMBER", Global_43C1.f_104F[iVar21], Global_43C1.f_10D0[iVar21]);
									}
									bVar39 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar33)
									{
										if (func_104(Global_43C1.f_1151[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
										{
											if (!Global_43C1.f_15DF)
											{
												fVar42 = fVar36;
												fVar40 = 0f;
												if (Global_43C1.f_1359[iVar8] == 2)
												{
													fVar40 = (fVar40 + ((fVar44 - fVar42) + (0.00078125f * 1f)));
												}
												else if (Global_43C1.f_1359[iVar8] == 0)
												{
													fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar42 * 0.5f)));
												}
												Global_43C1.f_1E5D[((iVar9 * Global_43C1.f_13E8) + iVar8)] = fVar40;
												Global_43C1.f_1EAF[((iVar9 * Global_43C1.f_13E8) + iVar8)] = fVar42;
											}
											else
											{
												fVar40 = Global_43C1.f_1E5D[((iVar9 * Global_43C1.f_13E8) + iVar8)];
												fVar42 = Global_43C1.f_1EAF[((iVar9 * Global_43C1.f_13E8) + iVar8)];
											}
											if (bVar52)
											{
												if (func_104(26, 1, 0, &fVar36, &fVar37, bParam7))
												{
													if (Global_43C1.f_1359[iVar8] == 2)
													{
														fVar40 = (fVar40 - (fVar36 * 2f));
													}
													fVar43 = (fVar36 * 0.5f);
													if (func_104(26, 1, 1, &fVar36, &fVar37, bParam7))
													{
														func_93(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
														unk_0x51DA985AC0B70E2E(func_102(26), func_99(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
												if (func_104(27, 1, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + fVar36);
													fVar43 = (fVar36 * 0.5f);
													if (func_104(27, 1, 1, &fVar36, &fVar37, bParam7))
													{
														func_93(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
														unk_0x51DA985AC0B70E2E(func_102(27), func_99(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
											}
											if (func_104(Global_43C1.f_1151[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_93(Global_43C1.f_1151[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
												unk_0x51DA985AC0B70E2E(func_102(Global_43C1.f_1151[iVar22]), func_99(Global_43C1.f_1151[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), (fVar36 * func_81(Global_43C1.f_1151[iVar22])), (fVar37 * func_81(Global_43C1.f_1151[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, 0);
											}
										}
									}
									bVar39 = true;
									iVar22++;
									break;
								
								case 5:
									bVar39 = true;
									break;
							}
							if (Global_43C1.f_133E[iVar8] == 5)
							{
								if (Global_43C1.f_134A[iVar8] > 0.05f)
								{
									fVar34 = (fVar34 + Global_43C1.f_134A[iVar8]);
								}
								else
								{
									fVar34 = (fVar34 + 0.05f);
								}
							}
							else
							{
								fVar34 = (fVar34 + Global_43C1.f_134A[iVar8]);
								if (Global_43C1.f_1351[iVar8])
								{
									if (func_104(26, 1, 1, &fVar36, &fVar37, bParam7))
									{
										fVar34 = (fVar34 - fVar36);
									}
								}
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_43C1.f_134A[iVar8]);
						}
						iVar8++;
					}
				}
				if (bVar39)
				{
					if (bVar33)
					{
						Global_43C1.f_1D80[iVar9] = iVar6;
						Global_43C1.f_15E7 = iVar6;
						iVar9++;
						if (Global_43C1.f_146A[iVar6])
						{
							iVar13++;
						}
						if (Global_43C1.f_15EC[iVar6] != 0f)
						{
							fVar68 = (fVar68 + Global_43C1.f_15EC[iVar6]);
						}
						else
						{
							fVar68 = (fVar68 + 0.034722f);
						}
					}
					if (!Global_43C1.f_15DE)
					{
						Global_43C1.f_14EB[iVar6] = 1;
						if (Global_43C1.f_13E9[iVar6])
						{
							if (bVar32)
							{
								Global_43C1.f_15E4 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_43C1.f_15E4 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_43C1.f_15DE)
			{
				Global_43C1.f_15E0 = ((fVar58 + fVar68) + (0.00277776f * IntToFloat(iVar12)));
				Global_43C1.f_15E3 = iVar11;
				Global_43C1.f_15E1 = iVar10;
				Global_43C1.f_15DE = 1;
			}
		}
		iVar5++;
	}
	if (!Global_43C1.f_15DF)
	{
		Global_43C1.f_15E2 = iVar9;
		Global_43C1.f_15DF = 1;
	}
	Global_43C1.f_166F = fVar49;
	Global_43C1.f_1671 = unk_0x105601648511CC64();
	unk_0xE7918A3D05166D98(Global_43C1.f_166F);
	if (!Global_43C1.f_1ED8)
	{
		func_77(0);
	}
	Global_43C1.f_1ED8 = 0;
	if (bParam2)
	{
		unk_0x4E0EC60D119222B1(10);
	}
	unk_0x4E0EC60D119222B1(6);
	unk_0x4E0EC60D119222B1(7);
	unk_0x4E0EC60D119222B1(9);
	unk_0x4E0EC60D119222B1(8);
	if (bParam0)
	{
		func_76(1);
	}
	unk_0x2A025E7CEBB76D14();
}

void func_76(int iParam0)//Position - 0x5BCC
{
	Global_14D262.f_437 = iParam0;
}

void func_77(int iParam0)//Position - 0x5BDD
{
	if (!Global_389D.f_1 == 1)
	{
		if (func_80(0))
		{
			func_78(iParam0);
		}
		unk_0xF0059F27F7BB6680(&Global_93C, 2);
	}
}

void func_78(int iParam0)//Position - 0x5C06
{
	if (Global_3943)
	{
		func_79(0, 0);
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
	if (!func_72())
	{
		Global_389D.f_1 = 3;
	}
}

void func_79(bool bParam0, bool bParam1)//Position - 0x5C76
{
	if (bParam0)
	{
		if (func_80(0))
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

int func_80(int iParam0)//Position - 0x5CEA
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

float func_81(int iParam0)//Position - 0x5D44
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 50:
		case 43:
		case 44:
		case 45:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_82(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)//Position - 0x5DB3
{
	unk_0x8B371195127AACF2(sParam2);
	unk_0x3AE7CB4034BE212F(fParam3, iParam4);
	unk_0x3A8B9C7B1C825123(fParam0, fParam1, 0);
}

void func_83(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x5DD2
{
	unk_0x8B371195127AACF2(sParam2);
	unk_0xAA5C5BF0489E5553(iParam3);
	unk_0x3A8B9C7B1C825123(fParam0, fParam1, iParam4);
}

bool func_84()//Position - 0x5DF0
{
	return unk_0x7B2F21BFE86AEB61(-1762644250);
}

void func_85(bool bParam0)//Position - 0x5E01
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0xE45648BDBF3441F5(Global_43C1.f_1EF4[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0xE45648BDBF3441F5(Global_43C1.f_1EF4[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0xCC4FE6A016BA0765(iVar0, iVar1, iVar2, 255);
}

void func_86(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x5E47
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_87(Global_43C1.f_16F6[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0xE45648BDBF3441F5(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			unk_0xCC4FE6A016BA0765(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0xE45648BDBF3441F5(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0xCC4FE6A016BA0765(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0xE45648BDBF3441F5(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0xCC4FE6A016BA0765(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0xCC4FE6A016BA0765(155, 155, 155, 255);
		}
		else
		{
			unk_0xCC4FE6A016BA0765(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0xCC4FE6A016BA0765(0, 0, 0, SYSTEM::FLOOR((255f * 0.8f)));
		}
		else
		{
			unk_0xE45648BDBF3441F5(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0xCC4FE6A016BA0765(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0xCC4FE6A016BA0765(155, 155, 155, 255);
	}
	else
	{
		unk_0xCC4FE6A016BA0765(155, 155, 155, 255);
	}
	unk_0xB8F3C51875F7BEA3(0f, 0.35f);
	unk_0x567A3300A78B3D65(1);
	if (bParam5)
	{
		unk_0xB8F3C51875F7BEA3(0f, 0.425f);
		unk_0xC8793973D4960AC4(4);
	}
	else if (bParam6)
	{
		unk_0xB8F3C51875F7BEA3(0f, 0.425f);
		unk_0xC8793973D4960AC4(6);
	}
	else
	{
		unk_0xC8793973D4960AC4(0);
	}
	unk_0x666751E43D377EAA(0f, 1f);
	unk_0x8F62A12BC2768BE8(0);
	unk_0x08F1F5EC48E158AB(0, 0, 0, 0, 0);
	unk_0x1EC7F2EE7CC55F66(0, 0, 0, 0, 0);
}

void func_87(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x5FF5
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_88(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x627F
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_64(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_106(bParam4, bParam8))
	{
		return;
	}
	if (func_91())
	{
		return;
	}
	if (unk_0xF32BA80A2DED1FC6())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_67(unk_0xB5CEFD608600A09F(), 0))
		{
			return;
		}
	}
	if (unk_0x8ACB0C3FACC09467())
	{
		if (unk_0x0F8865E539C1FCE8() == 0 || unk_0xF32BA80A2DED1FC6())
		{
			return;
		}
	}
	if (Global_43C1.f_121F != 0)
	{
		if (unk_0x8A0D8839261BAEEF(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_43C1.f_121F)
			{
				if (Global_43C1.f_1320[iVar1] != 358)
				{
					StringCopy(&(Global_43C1.f_1221[iVar1 /*16*/]), unk_0xE57EAD1FEA2A6FAF(2, Global_43C1.f_1320[iVar1], true), 64);
				}
				else if (Global_43C1.f_132D[iVar1] != 32)
				{
					StringCopy(&(Global_43C1.f_1221[iVar1 /*16*/]), unk_0xC7CF72D26EA6A227(2, Global_43C1.f_132D[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_43C1.f_1220 = 0;
		}
		if (!Global_43C1.f_1220)
		{
			unk_0x29CD142125FE177B(Global_43C1.f_159A[iVar0 /*10*/], "CLEAR_ALL");
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(Global_43C1.f_159A[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0xD44E04EBBDC4CE88((1f - (Global_43C1.f_1357 / 100f)));
			unk_0xF9FBC2F3F73D94C9();
			if (unk_0x8ACB0C3FACC09467())
			{
				unk_0x29CD142125FE177B(Global_43C1.f_159A[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0x5E5DBD0A6623969E(true);
				unk_0xF9FBC2F3F73D94C9();
			}
			iVar1 = 0;
			while (iVar1 < Global_43C1.f_121F)
			{
				if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_12E2[iVar1 /*4*/])) != unk_0x56BEECB328B6D29D("PREV"))
				{
					unk_0x29CD142125FE177B(Global_43C1.f_159A[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0x1E1FB49121565EB6(iVar1);
					func_90(&(Global_43C1.f_1221[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x56BEECB328B6D29D(&(Global_43C1.f_12E2[iVar2 /*4*/])) == unk_0x56BEECB328B6D29D("PREV"))
					{
						func_90(&(Global_43C1.f_1221[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_43C1.f_1313[iVar1] == -1)
					{
						func_89(&(Global_43C1.f_12E2[iVar1 /*4*/]));
					}
					else
					{
						unk_0x57016C44F10111F0(&(Global_43C1.f_12E2[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0x4C36886AAFD04CF8(iParam2, 70);
						}
						else
						{
							unk_0xAA5C5BF0489E5553(iParam2);
						}
						unk_0x64989E60CF560CA1();
					}
					if (unk_0x8ACB0C3FACC09467())
					{
						if (Global_43C1.f_1320[iVar1] != 358 && unk_0xFA30DFD0084E92FE(Global_43C1.f_133A, iVar1))
						{
							unk_0x5E5DBD0A6623969E(true);
							unk_0x1E1FB49121565EB6(Global_43C1.f_1320[iVar1]);
						}
						else
						{
							unk_0x5E5DBD0A6623969E(false);
							unk_0x1E1FB49121565EB6(358);
						}
					}
					unk_0xF9FBC2F3F73D94C9();
				}
				iVar1++;
			}
			if (unk_0x56BEECB328B6D29D(&(Global_41188A.f_10)) != unk_0x56BEECB328B6D29D(""))
			{
				unk_0x29CD142125FE177B(Global_43C1.f_159A[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0x1E1FB49121565EB6(Global_43C1.f_121F);
				func_90(&Global_41188A);
				if (Global_41188A.f_14 == -1)
				{
					func_89(&(Global_41188A.f_10));
				}
				else
				{
					unk_0x57016C44F10111F0(&(Global_41188A.f_10));
					if (bParam5)
					{
						unk_0x4C36886AAFD04CF8(iParam2, 70);
					}
					else
					{
						unk_0xAA5C5BF0489E5553(iParam2);
					}
					unk_0x64989E60CF560CA1();
				}
				unk_0xF9FBC2F3F73D94C9();
			}
			unk_0x29CD142125FE177B(Global_43C1.f_159A[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0x1E1FB49121565EB6(0);
			unk_0x1E1FB49121565EB6(0);
			unk_0x1E1FB49121565EB6(0);
			unk_0x1E1FB49121565EB6(80);
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(Global_43C1.f_159A[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_43C1.f_1358)
			{
				unk_0x1E1FB49121565EB6(1);
			}
			else
			{
				unk_0x1E1FB49121565EB6(0);
			}
			unk_0xF9FBC2F3F73D94C9();
			Global_43C1.f_1220 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_43C1.f_121F)
		{
			if (Global_43C1.f_1313[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0x29CD142125FE177B(Global_43C1.f_159A[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0x1E1FB49121565EB6(iVar1);
					unk_0x57016C44F10111F0(&(Global_43C1.f_12E2[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0x4C36886AAFD04CF8(iParam2, 70);
					}
					else
					{
						unk_0xAA5C5BF0489E5553(iParam2);
					}
					unk_0x64989E60CF560CA1();
					unk_0xF9FBC2F3F73D94C9();
				}
			}
			iVar1++;
		}
		if (Global_41188A.f_14 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0x29CD142125FE177B(Global_43C1.f_159A[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0x1E1FB49121565EB6(iVar1);
				unk_0x57016C44F10111F0(&(Global_41188A.f_10));
				if (bParam5)
				{
					unk_0x4C36886AAFD04CF8(iParam2, 70);
				}
				else
				{
					unk_0xAA5C5BF0489E5553(iParam2);
				}
				unk_0x64989E60CF560CA1();
				unk_0xF9FBC2F3F73D94C9();
			}
		}
		unk_0xC2EAD30963BDAA47(76, 66);
		unk_0xF6A6FFB73848BF82(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_43C1.f_1EFB)
			{
				unk_0x6DB77F071B43C870(15, 0f, -0.0375f);
				Global_43C1.f_1EFB = 1;
			}
		}
		else if (Global_43C1.f_1EFB)
		{
			unk_0xC0404835F30391BB(15);
			Global_43C1.f_1EFB = 0;
		}
		unk_0x2A025E7CEBB76D14();
		if (Global_43C1.f_133D)
		{
			unk_0xC2EAD30963BDAA47(82, 66);
			unk_0xF6A6FFB73848BF82(0f, 0f, 0f, 0f);
			unk_0x65E432C782E7E702(Global_43C1.f_159A[iVar0 /*10*/], Global_43C1.f_133B, Global_43C1.f_133C, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0x2A025E7CEBB76D14();
		}
		else
		{
			unk_0x4B6031094354FED6(Global_43C1.f_159A[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_89(char* sParam0)//Position - 0x675B
{
	unk_0x57016C44F10111F0(sParam0);
	unk_0x64989E60CF560CA1();
}

void func_90(char* sParam0)//Position - 0x676D
{
	unk_0xCB30200B8055CA57(sParam0);
}

int func_91()//Position - 0x677B
{
	vector3 vVar0;
	
	if (Global_389D.f_1 > 3)
	{
		return 1;
	}
	if (func_92())
	{
		vVar0 = { 0f, -500f, 0f };
		unk_0x652515566BB40BA9(&vVar0);
		if (Global_3866 == 0)
		{
			if (vVar0.y > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (vVar0.y > -101f)
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

int func_92()//Position - 0x67E9
{
	if (unk_0xB731B8C5BCE89836(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_93(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x6803
{
	unk_0xE45648BDBF3441F5(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 50:
		case 39:
		case 40:
		case 38:
		case 43:
		case 44:
		case 45:
		case 49:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 51:
			*iParam5 = 100;
			break;
	}
}

void func_94(float fParam0)//Position - 0x68D6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xE45648BDBF3441F5(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0xC8793973D4960AC4(0);
	unk_0xB8F3C51875F7BEA3(0f, 0.35f);
	unk_0xB1B2D2C9D47D1278(2);
	unk_0xCC4FE6A016BA0765(iVar0, iVar1, iVar2, iVar3);
	unk_0x666751E43D377EAA(fParam0, ((Global_43BE + Global_43C0) - 0.0046875f));
	unk_0x8F62A12BC2768BE8(0);
	unk_0x08F1F5EC48E158AB(0, 0, 0, 0, 0);
	unk_0x1EC7F2EE7CC55F66(0, 0, 0, 0, 0);
}

void func_95(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x6935
{
	unk_0x8B371195127AACF2(sParam2);
	unk_0xAA5C5BF0489E5553(iParam3);
	unk_0xAA5C5BF0489E5553(iParam4);
	unk_0x3A8B9C7B1C825123(fParam0, fParam1, 0);
}

float func_96(char* sParam0, int iParam1, int iParam2)//Position - 0x6958
{
	if (!unk_0xEAEFBBEC1AEA464B(sParam0))
	{
		if (unk_0x56BEECB328B6D29D(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_97();
	unk_0xE746379C2AF24EF6(sParam0);
	unk_0xAA5C5BF0489E5553(iParam1);
	unk_0xAA5C5BF0489E5553(iParam2);
	return unk_0x2207C0EA517B975D(1);
}

void func_97()//Position - 0x699A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xE45648BDBF3441F5(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_43C1.f_1EE2)
	{
		iVar0 = Global_43C1.f_1EDE;
		iVar1 = Global_43C1.f_1EDF;
		iVar2 = Global_43C1.f_1EE0;
		iVar3 = Global_43C1.f_1EE1;
	}
	unk_0xC8793973D4960AC4(0);
	unk_0xB8F3C51875F7BEA3(0f, 0.35f);
	unk_0xCC4FE6A016BA0765(iVar0, iVar1, iVar2, iVar3);
	unk_0x666751E43D377EAA((Global_43BE + 0.0046875f), ((Global_43BE + Global_43C0) - 0.0046875f));
	unk_0x8F62A12BC2768BE8(0);
	unk_0x08F1F5EC48E158AB(0, 0, 0, 0, 0);
	unk_0x1EC7F2EE7CC55F66(0, 0, 0, 0, 0);
}

void func_98(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x6A24
{
	unk_0xF7EBEC3FF57AEC65((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

var func_99(int iParam0, bool bParam1)//Position - 0x6A53
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0xF1734B55490E9045(&(Global_43C1.f_1A3F[iParam0 /*16*/])))
	{
		if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_1A3F[iParam0 /*16*/])) == -1487683087)
		{
			Var2 = { func_101(unk_0xB5CEFD608600A09F()) };
			if (unk_0xB5AD4F878C27B0F4(&Var2, &uVar1))
			{
				return func_100(&uVar1);
			}
		}
		else
		{
			return func_100(&(Global_43C1.f_1A3F[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 48:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 49:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 51:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_100(var uParam0)//Position - 0x6EA5
{
	return uParam0;
}

struct<13> func_101(int iParam0)//Position - 0x6EAF
{
	struct<13> Var0;
	
	unk_0xB7DBA2C6D2C3C41A(iParam0, &Var0, 13);
	return Var0;
}

char* func_102(int iParam0)//Position - 0x6EC6
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0xF1734B55490E9045(&(Global_43C1.f_16FE[iParam0 /*16*/])))
	{
		if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_16FE[iParam0 /*16*/])) == -1487683087)
		{
			Var1 = { func_101(unk_0xB5CEFD608600A09F()) };
			unk_0xB5AD4F878C27B0F4(&Var1, &uVar0);
			return func_100(&uVar0);
		}
		else
		{
			return func_100(&(Global_43C1.f_16FE[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

int func_103()//Position - 0x6F3B
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0x1BBB0A5225346008(&iVar0, &iVar1);
	fVar2 = (SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

int func_104(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)//Position - 0x6F6D
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	StringCopy(&cVar0, func_102(iParam0), 64);
	StringCopy(&cVar1, func_99(iParam0, bParam1), 64);
	if (unk_0x56BEECB328B6D29D(&cVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0x1BBB0A5225346008(&iVar2, &iVar3);
			fVar5 = unk_0x3771EE4CB542D71E(0);
			if (func_103())
			{
				iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar5));
			}
			fVar6 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_103())
			{
				fVar4 = 1f;
			}
			if (unk_0xB731B8C5BCE89836(joaat("director_mode")) > 0)
			{
				unk_0x7A569F3885B2E08A(&iVar2, &iVar3);
			}
			iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar2) / fVar4));
			iVar3 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) / fVar4));
		}
		else
		{
			unk_0x7A569F3885B2E08A(&iVar2, &iVar3);
		}
		vVar7 = { unk_0x9893E000F1F078E7(&cVar0, &cVar1) };
		vVar7.x = (vVar7.x * (func_105(iParam0) / fVar4));
		vVar7.y = (vVar7.y * (func_105(iParam0) / fVar4));
		if (!bParam2)
		{
			vVar7.x = (vVar7.x - 2f);
			vVar7.y = (vVar7.y - 2f);
		}
		if (iParam0 == 30)
		{
			vVar7.x = 288f;
			vVar7.y = 106f;
		}
		if (iParam0 == 29 && unk_0x56BEECB328B6D29D(&(Global_43C1.f_1A3F[29 /*16*/])) == -1487683087)
		{
			vVar7.x = 106f;
			vVar7.y = 106f;
		}
		*fParam3 = ((vVar7.x / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((vVar7.y / IntToFloat(iVar3)) / (vVar7.x / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x877E3741B282A35F() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_43C0)
			{
				*fParam4 = (*fParam4 * (Global_43C0 / *fParam3));
				*fParam3 = Global_43C0;
			}
		}
		return 1;
	}
	return 0;
}

float func_105(int iParam0)//Position - 0x711E
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 49:
			return 0.5f;
			break;
	}
	return 1f;
}

int func_106(bool bParam0, bool bParam1)//Position - 0x71BD
{
	if (Global_252E21.f_760.f_2B0 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x726D9204B160D23E() || (func_108(8, -1) && func_107() != 64)) || (unk_0x0352C1B6B66A87AC() != 0 && !bParam1)) || (unk_0x7930B3E9C919E90F() && !bParam0)) || unk_0x4F2BFB7C2A730EC7()) || Global_11646) || Global_43C1.f_1EFA) || unk_0x18158A50125911B6()) || Global_16B4F.f_569)
	{
		return 0;
	}
	return 1;
}

int func_107()//Position - 0x725A
{
	return Global_140815;
}

bool func_108(int iParam0, int iParam1)//Position - 0x7266
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

void func_109(int iParam0, bool bParam1, int iParam2)//Position - 0x72A1
{
	int iVar0;
	int iVar1;
	
	Global_43C1.f_15E6 = iParam0;
	Global_43C1.f_166D = iParam2;
	if (Global_43C1.f_15E6 < Global_43C1.f_15E5)
	{
		Global_43C1.f_15E5 = Global_43C1.f_15E6;
	}
	else if ((Global_43C1.f_15DF && Global_43C1.f_15E6 > Global_43C1.f_15E7) || (!Global_43C1.f_15DF && Global_43C1.f_15E6 >= (Global_43C1.f_15E5 + Global_43C1.f_13E7)))
	{
		iVar0 = Global_43C1.f_15E5;
		while (iVar0 <= Global_43C1.f_15E6)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_43C1.f_135F[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_43C1.f_13E7 && Global_43C1.f_15E5 < 128)
		{
			Global_43C1.f_15E5++;
			iVar1 = 0;
			iVar0 = Global_43C1.f_15E5;
			while (iVar0 <= Global_43C1.f_15E6)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_43C1.f_135F[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_43C1.f_15DE = 0;
	Global_43C1.f_15DF = 0;
	if (bParam1)
	{
		StringCopy(&(Global_43C1.f_11D2), "", 16);
		StringCopy(&(Global_41188A.f_15), "", 16);
	}
}

void func_110(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x73F3
{
	*uParam0 = SYSTEM::FLOOR((unk_0x5F9521C8EE73F79F(2, 218) * 127f));
	*uParam1 = SYSTEM::FLOOR((unk_0x5F9521C8EE73F79F(2, 219) * 127f));
	*uParam2 = SYSTEM::FLOOR((unk_0x5F9521C8EE73F79F(2, 220) * 127f));
	*uParam3 = SYSTEM::FLOOR((unk_0x5F9521C8EE73F79F(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = SYSTEM::FLOOR((unk_0xBCEB785249D7E5BE(2, 218) * 127f));
			*uParam1 = SYSTEM::FLOOR((unk_0xBCEB785249D7E5BE(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = SYSTEM::FLOOR((unk_0xBCEB785249D7E5BE(2, 220) * 127f));
			*uParam3 = SYSTEM::FLOOR((unk_0xBCEB785249D7E5BE(2, 221) * 127f));
		}
	}
}

void func_111()//Position - 0x74C8
{
	func_122(0, 0);
	func_121(1, 0, 0, 0, 0);
	func_120(1, 1, 1, 1, 1);
	if (Local_43.f_1 == 3)
	{
		func_119("SEA_MENU");
	}
	else
	{
		func_119("STREET_MENU");
	}
	func_115(0, "RACES_OPT_SP", 0, 1, 0, 0);
	func_115(1, "RACES_OPT_MP", 0, 1, 0, 0);
	func_114(201, "ITEM_SELECT", -1);
	func_114(202, "ITEM_EXIT", -1);
	func_113(11, "ITEM_SCROLL", -1);
	func_112(0);
	func_109(0, 1, 1);
	iLocal_50 = 0;
}

void func_112(int iParam0)//Position - 0x754D
{
	Global_43C1.f_15E5 = iParam0;
}

void func_113(int iParam0, char* sParam1, int iParam2)//Position - 0x755D
{
	char* sVar0;
	
	sVar0 = unk_0xC7CF72D26EA6A227(2, iParam0, true);
	if (Global_43C1.f_121F >= 12)
	{
		StringCopy(&Global_41188A, sVar0, 64);
		StringCopy(&(Global_41188A.f_10), sParam1, 16);
		Global_41188A.f_14 = iParam2;
		return;
		return;
	}
	unk_0x7CB6FD92BE491AD9(&(Global_43C1.f_133A), Global_43C1.f_121F);
	StringCopy(&(Global_43C1.f_1221[Global_43C1.f_121F /*16*/]), sVar0, 64);
	StringCopy(&(Global_43C1.f_12E2[Global_43C1.f_121F /*4*/]), sParam1, 16);
	Global_43C1.f_1313[Global_43C1.f_121F] = iParam2;
	Global_43C1.f_1320[Global_43C1.f_121F] = 358;
	Global_43C1.f_132D[Global_43C1.f_121F] = iParam0;
	Global_43C1.f_121F++;
}

void func_114(int iParam0, char* sParam1, int iParam2)//Position - 0x760D
{
	char* sVar0;
	
	sVar0 = unk_0xE57EAD1FEA2A6FAF(2, iParam0, true);
	if (Global_43C1.f_121F >= 12)
	{
		StringCopy(&Global_41188A, sVar0, 64);
		StringCopy(&(Global_41188A.f_10), sParam1, 16);
		Global_41188A.f_14 = iParam2;
		return;
		return;
	}
	unk_0x7CB6FD92BE491AD9(&(Global_43C1.f_133A), Global_43C1.f_121F);
	StringCopy(&(Global_43C1.f_1221[Global_43C1.f_121F /*16*/]), sVar0, 64);
	StringCopy(&(Global_43C1.f_12E2[Global_43C1.f_121F /*4*/]), sParam1, 16);
	Global_43C1.f_1313[Global_43C1.f_121F] = iParam2;
	Global_43C1.f_1320[Global_43C1.f_121F] = iParam0;
	Global_43C1.f_132D[Global_43C1.f_121F] = 32;
	Global_43C1.f_121F++;
}

void func_115(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)//Position - 0x76BC
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_43C1.f_13E0 > iParam0)
	{
		return;
	}
	if (Global_43C1.f_13E0 >= 128)
	{
		return;
	}
	if (Global_43C1.f_13E2 >= 256)
	{
		return;
	}
	if (Global_43C1.f_15EA < Global_43C1.f_15E8)
	{
		return;
	}
	if (Global_43C1.f_13E0 != iParam0)
	{
		Global_43C1.f_13E0 = iParam0;
		Global_43C1.f_13E1 = 0;
	}
	iVar0 = Global_43C1.f_133E[Global_43C1.f_13E1];
	if (iVar0 != 1)
	{
		while (Global_43C1.f_13E1 < 4 && iVar0 != 1)
		{
			Global_43C1.f_13E1++;
			iVar0 = Global_43C1.f_133E[Global_43C1.f_13E1];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_43C1.f_49[Global_43C1.f_13E2 /*6*/]), sParam1, 24);
	if (!unk_0xF1734B55490E9045(sParam1) && !unk_0x0F6F4C227FB5DD52(sParam1))
	{
	}
	Global_43C1.f_64A[Global_43C1.f_13E2] = bParam3;
	Global_43C1.f_74B[Global_43C1.f_13E2] = iParam4;
	Global_43C1.f_13E2++;
	if (!bParam3)
	{
		func_118(Global_43C1.f_13E0, 1);
	}
	else
	{
		func_118(Global_43C1.f_13E0, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_117(&(Global_43C1.f_49[Global_43C1.f_13E2 /*6*/]));
		if (Global_43C1.f_1351[Global_43C1.f_13E1])
		{
			func_104(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_43C1.f_134A[Global_43C1.f_13E1])
		{
			Global_43C1.f_134A[Global_43C1.f_13E1] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_116(&(Global_43C1.f_49[Global_43C1.f_13E2 /*6*/]));
			if (fVar4 > Global_43C1.f_15EC[iParam0])
			{
				Global_43C1.f_15EC[iParam0] = fVar4;
			}
		}
	}
	unk_0xF0059F27F7BB6680(&(Global_43C1.f_135F[iParam0]), Global_43C1.f_13E1);
	Global_43C1.f_13E1++;
	Global_43C1.f_15EB = 1;
	Global_43C1.f_15E9 = (Global_43C1.f_13E2 - 1);
	Global_43C1.f_15EA = 0;
	Global_43C1.f_15E8 = iParam2;
}

float func_116(char* sParam0)//Position - 0x78C8
{
	if (!unk_0x0F6F4C227FB5DD52(sParam0))
	{
	}
	return unk_0x60F548525BE58E47(0.35f, 0);
}

float func_117(char* sParam0)//Position - 0x78E4
{
	if (!unk_0xEAEFBBEC1AEA464B(sParam0))
	{
		if (unk_0x56BEECB328B6D29D(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_86(0, 1, 0, 0, 0, 0, 0);
	unk_0xE746379C2AF24EF6(sParam0);
	return unk_0x2207C0EA517B975D(1);
}

void func_118(int iParam0, bool bParam1)//Position - 0x7921
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
	if (bParam1)
	{
		unk_0xF0059F27F7BB6680(&(Global_43C1.f_16F9[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_43C1.f_16F9[iVar0]), (iParam0 - iVar0 * 32));
	}
}

void func_119(char* sParam0)//Position - 0x796D
{
	int iVar0;
	
	StringCopy(&(Global_43C1.f_1), sParam0, 16);
	Global_43C1.f_44 = 0;
	Global_43C1.f_45 = 0;
	Global_43C1.f_46 = 0;
	Global_43C1.f_47 = 0;
	Global_43C1.f_48 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_43C1.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_120(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x79B8
{
	Global_43C1.f_1359[0] = iParam0;
	Global_43C1.f_1359[1] = iParam1;
	Global_43C1.f_1359[2] = iParam2;
	Global_43C1.f_1359[3] = iParam3;
	Global_43C1.f_1359[4] = iParam4;
}

void func_121(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x79F7
{
	Global_43C1.f_133E[0] = iParam0;
	Global_43C1.f_133E[1] = iParam1;
	Global_43C1.f_133E[2] = iParam2;
	Global_43C1.f_133E[3] = iParam3;
	Global_43C1.f_133E[4] = iParam4;
	Global_43C1.f_13E8 = 0;
	if (iParam0 != 0)
	{
		Global_43C1.f_13E8++;
	}
	if (iParam1 != 0)
	{
		Global_43C1.f_13E8++;
	}
	if (iParam2 != 0)
	{
		Global_43C1.f_13E8++;
	}
	if (iParam3 != 0)
	{
		Global_43C1.f_13E8++;
	}
	if (iParam4 != 0)
	{
		Global_43C1.f_13E8++;
	}
}

void func_122(bool bParam0, bool bParam1)//Position - 0x7AA1
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_43C1.f_49[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_43C1.f_84C[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_25827C[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_43C1.f_F4E[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_43C1.f_104F[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_43C1.f_1151[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_43C1.f_135F[iVar0] = 0;
		Global_43C1.f_13E9[iVar0] = 0;
		Global_43C1.f_146A[iVar0] = 0;
		Global_43C1.f_1672[iVar0] = 0f;
		Global_43C1.f_14EB[iVar0] = 0;
		Global_43C1.f_15EC[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_43C1.f_133E[iVar0] = 0;
		Global_43C1.f_134A[iVar0] = 0f;
		Global_43C1.f_1344[iVar0] = -1f;
		Global_43C1.f_1351[iVar0] = 0;
		Global_43C1.f_1359[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_43C1.f_12E2[iVar0 /*4*/]), "", 16);
		Global_43C1.f_1313[iVar0] = -1;
		Global_43C1.f_1320[iVar0] = 358;
		Global_43C1.f_132D[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 52)
	{
		StringCopy(&(Global_43C1.f_16FE[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_43C1.f_1A3F[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_43C1.f_64A[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_41188A.f_10), "", 16);
	Global_41188A.f_14 = -1;
	Global_43C1 = 0;
	Global_43C1.f_13E0 = 0;
	Global_43C1.f_13E1 = 0;
	Global_43C1.f_13E2 = 0;
	Global_43C1.f_13E4 = 0;
	Global_43C1.f_13E5 = 0;
	Global_43C1.f_13E6 = 0;
	Global_43C1.f_13E3 = 0;
	Global_43C1.f_166D = 0;
	Global_43C1.f_15E6 = 0;
	Global_43C1.f_15E5 = 0;
	Global_43C1.f_15E7 = 0;
	StringCopy(&(Global_43C1.f_11D2), "", 16);
	Global_43C1.f_1218 = 0;
	Global_43C1.f_1219 = 0;
	Global_43C1.f_121A = 0;
	Global_43C1.f_121B = 0;
	Global_43C1.f_121C = 0;
	Global_43C1.f_121D = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_43C1.f_11D6[iVar0] = 0;
		iVar0++;
	}
	Global_43C1.f_121E = 0;
	StringCopy(&(Global_41188A.f_15), "", 16);
	Global_41188A.f_3D = 0;
	Global_41188A.f_3E = 0;
	Global_41188A.f_3F = 0;
	Global_41188A.f_40 = 0;
	Global_41188A.f_41 = 0;
	Global_41188A.f_42 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_41188A.f_19[iVar0] = 0;
		iVar0++;
	}
	Global_41188A.f_43 = 0;
	StringCopy(&(Global_43C1.f_1), "", 16);
	Global_43C1.f_1350 = 0f;
	Global_43C1.f_44 = 0;
	Global_43C1.f_45 = 0;
	Global_43C1.f_46 = 0;
	Global_43C1.f_47 = 0;
	Global_43C1.f_48 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_43C1.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_43C1.f_15EB = 0;
	Global_43C1.f_15EA = 0;
	Global_43C1.f_15E8 = 0;
	Global_43C1.f_15E9 = 0;
	Global_43C1.f_121F = 0;
	Global_43C1.f_1220 = 0;
	Global_43C1.f_13E7 = 10;
	Global_43C1.f_13E8 = 0;
	Global_43C1.f_166F = 0f;
	Global_43C1.f_1670 = 0f;
	Global_43C1.f_15DE = 0;
	Global_43C1.f_15DF = 0;
	Global_43C1.f_15E0 = 0f;
	Global_43C1.f_15E1 = 0;
	Global_43C1.f_15E3 = 0;
	Global_43C1.f_15E2 = 0;
	Global_43C1.f_15E4 = 0;
	Global_43C1.f_1EF7 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_43C1.f_16F3[iVar0] = -1;
		Global_43C1.f_16F6[iVar0] = -1;
		iVar0++;
	}
	Global_43C1.f_1357 = 0f;
	Global_43C1.f_133A = 0;
	Global_43C1.f_1358 = 0;
	iVar0 = 0;
	while (iVar0 < Global_43C1.f_16F9)
	{
		Global_43C1.f_16F9[iVar0] = 0;
		iVar0++;
	}
	Global_43C1.f_1EE2 = 0;
	Global_43C1.f_1EDD = 0;
	Global_43C1.f_1EE7 = 0;
	Global_43C1.f_1EEC = 0;
	Global_43C1.f_1EF1 = 0;
	Global_43C1.f_1EF3 = 0;
	Global_43C1.f_1EF9 = 0;
	Global_43BE = 0.05f;
	Global_43BF = 0.05f;
	Global_43C0 = 0.225f;
	fVar2 = unk_0x3771EE4CB542D71E(0);
	if (bParam0)
	{
		Global_43C0 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_43C0 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_43C0 = 0.225f;
	}
}

bool func_123(char* sParam0, int iParam1, bool bParam2)//Position - 0x7F83
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_64(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_43C1.f_1581[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0xF1734B55490E9045(&(Global_43C1.f_1581[iVar0 /*4*/])))
	{
		unk_0x900CF084251DED26(&(Global_43C1.f_1581[iVar0 /*4*/]), 9);
		Global_43C1.f_157A[iVar0] = 1;
		if (!unk_0x4C7022A83B41D888(&(Global_43C1.f_1581[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0x8AA3F48A15444B98("CommonMenu", false);
	Global_43C1.f_156C[iVar0] = 1;
	if (!unk_0x499783D01578C2D2("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0x8AA3F48A15444B98("MPShopSale", false);
		Global_43C1.f_1573[iVar0] = 1;
		if (!unk_0x499783D01578C2D2("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_43C1.f_159A[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_124(&(Global_43C1.f_159A[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_124(var uParam0)//Position - 0x807C
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0xA7F138B5B1AB2CF6(*uParam0))
			{
				*uParam0 = unk_0x9934FEFB3B8C6DB8(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0xA7F138B5B1AB2CF6(*uParam0))
					{
						uParam0->f_8 = unk_0x105601648511CC64();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x105601648511CC64();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0xA7F138B5B1AB2CF6(*uParam0))
			{
				uParam0->f_8 = unk_0x105601648511CC64();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0xA7F138B5B1AB2CF6(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_125()//Position - 0x811E
{
	int iVar0;
	
	if (func_155())
	{
		if (func_138())
		{
			iVar0 = 6;
			if (Local_43.f_1 == 1)
			{
				iVar0 = 4;
			}
			func_136(iVar0);
			if (func_60(iLocal_56[iVar0]))
			{
				if (bLocal_55)
				{
					if (unk_0x96044E39418AAF17(iLocal_56[iVar0], cLocal_73, sLocal_74[iVar0], 3))
					{
						unk_0x08FA5F7132D73F6F(iLocal_56[iVar0], cLocal_73, sLocal_74[iVar0], -1056964608);
					}
					func_127(iVar0);
				}
			}
			unk_0xD55638CE45B2B948(0, 51);
			if (unk_0x093484B35A948BFC(0, 51))
			{
				iLocal_76 = 1;
				unk_0x7456702622C62EA0(1);
				iLocal_42 = 3;
			}
		}
		else if (!iLocal_46)
		{
			unk_0xF04F2EB4128A4367(0);
			iLocal_46 = 1;
		}
	}
	else
	{
		func_126();
		if (!iLocal_46)
		{
			unk_0xF04F2EB4128A4367(0);
			iLocal_46 = 1;
		}
	}
}

void func_126()//Position - 0x81CF
{
	if (iLocal_45 && unk_0x105601648511CC64() > iLocal_48)
	{
		unk_0x7456702622C62EA0(1);
		iLocal_45 = 0;
	}
}

void func_127(int iParam0)//Position - 0x81F0
{
	int iVar0;
	
	if (!unk_0x1D403DFADBC2DE3C(iLocal_56[iParam0], 0) && !unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		switch (iLocal_77)
		{
			case 0:
				if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(iLocal_56[iParam0], true), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true)) < 64f)
				{
					iLocal_78 = 0;
					iLocal_79 = 0;
					iLocal_77 = 1;
				}
				break;
			
			case 1:
				unk_0xC5A6DFE2B8987B17(&iVar0);
				unk_0x56F2E1B5599188FA(0, unk_0xBC25C936A095B5BA(), -1, 0, 2);
				unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 0);
				unk_0x535008C596714F9E(iVar0);
				unk_0xA8E6405305C0D7DF(iLocal_56[iParam0], iVar0);
				unk_0x02DAF06EA4F08219(&iVar0);
				iLocal_77 = 2;
				break;
			
			case 2:
				if (unk_0xF4FCC3C1048FF2AB(iLocal_56[iParam0], 242628503) != 1 || unk_0xC5B8A5F778E321DD(iLocal_56[iParam0], unk_0xBC25C936A095B5BA(), 20f))
				{
					unk_0x85DB484A637CEAB9(iLocal_56[iParam0], unk_0xBC25C936A095B5BA(), -1);
					if (!iLocal_79)
					{
						func_134(iLocal_56[iParam0], "PRERACE_CHAT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					else
					{
						func_134(iLocal_56[iParam0], "PRERACE_TAUNT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					iLocal_77 = 3;
				}
				break;
			
			case 3:
				if (!unk_0x9986AD62CA3DE747(iLocal_56[iParam0]))
				{
					func_132(&iLocal_80);
					unk_0xE896C0AD02364F2A(iLocal_56[iParam0], "random@street_race", "_streetracer_wait_loop", 4f, -4f, -1, 9, 0, 0, 0, 0);
					iLocal_77 = 4;
				}
				break;
			
			case 4:
				if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(iLocal_56[iParam0], true), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true)) > 225f)
				{
					iLocal_77 = 0;
				}
				if (func_128(&iLocal_80) >= 5f && !iLocal_78)
				{
					iLocal_78 = 1;
					iLocal_77 = 1;
				}
				else if (func_128(&iLocal_80) >= 10f && !iLocal_79)
				{
					iLocal_79 = 1;
					iLocal_77 = 1;
				}
				break;
			
			case 5:
				break;
			}
	}
}

float func_128(int iParam0)//Position - 0x83B7
{
	if (func_131(iParam0))
	{
		if (func_130(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_129(unk_0xFA30DFD0084E92FE(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_129(bool bParam0)//Position - 0x83F6
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

bool func_130(var uParam0)//Position - 0x844E
{
	return unk_0xFA30DFD0084E92FE(*uParam0, 2);
}

bool func_131(var uParam0)//Position - 0x845E
{
	return unk_0xFA30DFD0084E92FE(*uParam0, 1);
}

void func_132(int iParam0)//Position - 0x846E
{
	func_133(iParam0, 0f);
}

void func_133(int iParam0, float fParam1)//Position - 0x847D
{
	iParam0->f_1 = (func_129(unk_0xFA30DFD0084E92FE(*iParam0, 4)) - fParam1);
	unk_0xF0059F27F7BB6680(iParam0, 1);
	unk_0x7CB6FD92BE491AD9(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_134(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x84AB
{
	unk_0x7E80A36CD8BDF4D1(iParam0, sParam1, sParam2, func_135(iParam3), 0);
}

int func_135(int iParam0)//Position - 0x84C4
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

void func_136(int iParam0)//Position - 0x86B9
{
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()) && !func_137())
	{
		if (func_60(iLocal_56[iParam0]))
		{
			if (iLocal_46 && unk_0x8910237449BB6F79(unk_0xBC25C936A095B5BA()) < 20f)
			{
				unk_0x1DE00CFB4CAEB978(iLocal_56[iParam0], 0f, 0f, 0f, 1, 2000, 2000, 2000, 0);
				iLocal_46 = 0;
			}
		}
	}
}

int func_137()//Position - 0x8716
{
	if (unk_0x3D875C2512206692(unk_0xEBC6179F395EFBEB()) == 4)
	{
		return 1;
	}
	return 0;
}

int func_138()//Position - 0x872F
{
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (func_154())
		{
			return 0;
		}
		if (func_153(func_49()) < Local_43.f_3)
		{
			if (Local_43.f_1 == 3)
			{
				func_150("SEA_NA_CASH", Local_43.f_3);
			}
			else
			{
				func_150("STREET_NA_CASH", Local_43.f_3);
			}
			iLocal_45 = 1;
			iLocal_48 = unk_0x105601648511CC64() + 1000;
			return 0;
		}
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			func_149(&iLocal_0);
			iLocal_0 = unk_0xD20EBB97FE8799ED(unk_0xBC25C936A095B5BA());
			if (!func_144())
			{
				iLocal_45 = 1;
				iLocal_48 = unk_0x105601648511CC64() + 1000;
				return 0;
			}
			else if ((unk_0x8D66276473ABD7CC(iLocal_0) <= 200 || unk_0x7544D2465B934445(iLocal_0)) || func_143())
			{
				func_142("RACE_VehDmg");
				iLocal_45 = 1;
				iLocal_48 = unk_0x105601648511CC64() + 1000;
				return 0;
			}
			else if (unk_0x3187EF5798B5D209(iLocal_0, -1, 0) != unk_0xBC25C936A095B5BA())
			{
				func_139();
				return 0;
			}
			else
			{
				if (func_80(0) || unk_0xB731B8C5BCE89836(joaat("appinternet")) > 0)
				{
					func_126();
					return 0;
				}
				switch (Local_43.f_1)
				{
					case 1:
						func_150("STREET_PLAY_B", Local_43.f_3);
						break;
					
					case 2:
						func_150("STREET_PLAY_C", Local_43.f_3);
						break;
					
					case 3:
						func_142("SEA_PLAY");
						break;
				}
				iLocal_45 = 1;
				iLocal_48 = unk_0x105601648511CC64();
				return 1;
			}
		}
		else
		{
			func_149(&iLocal_0);
			func_139();
			return 0;
		}
	}
	return 0;
}

void func_139()//Position - 0x88A1
{
	char* sVar0;
	
	if (Local_43.f_1 == 3)
	{
		if (func_14(iLocal_57))
		{
			sVar0 = "SEA_NA_VEH";
		}
		else
		{
			sVar0 = "SEA_NA_VEH2";
		}
		if (!func_141(sVar0))
		{
			func_140(sVar0);
			iLocal_45 = 1;
			iLocal_48 = unk_0x105601648511CC64() + 1000;
		}
	}
	else if (Local_43.f_1 == 1)
	{
		if (!func_141("STREET_NA_BIKE"))
		{
			func_140("STREET_NA_BIKE");
			iLocal_45 = 1;
			iLocal_48 = unk_0x105601648511CC64() + 1000;
		}
	}
	else if (!func_141("STREET_NA_CAR"))
	{
		func_140("STREET_NA_CAR");
		iLocal_45 = 1;
		iLocal_48 = unk_0x105601648511CC64() + 1000;
	}
}

void func_140(char* sParam0)//Position - 0x8933
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 1, true, -1);
}

int func_141(char* sParam0)//Position - 0x8949
{
	unk_0xF07D20149ECBC61E(sParam0);
	return unk_0xA66DBDA0A072514A(0);
}

void func_142(char* sParam0)//Position - 0x895C
{
	if (!func_141(sParam0))
	{
		func_140(sParam0);
	}
}

int func_143()//Position - 0x8974
{
	int iVar0;
	
	iVar0 = unk_0x6F79ECA8C83E4357(iLocal_0);
	if (unk_0x7512ED01F3F46714(iVar0))
	{
		if (unk_0xE1A8FD31526DD6C8(iLocal_0, 6, 0) || unk_0xE1A8FD31526DD6C8(iLocal_0, 7, 0))
		{
			return 1;
		}
	}
	else if (unk_0x7C28D15641461C68(iVar0))
	{
		if (((unk_0xE1A8FD31526DD6C8(iLocal_0, 0, 0) || unk_0xE1A8FD31526DD6C8(iLocal_0, 1, 0)) || unk_0xE1A8FD31526DD6C8(iLocal_0, 4, 0)) || unk_0xE1A8FD31526DD6C8(iLocal_0, 5, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_144()//Position - 0x89F0
{
	int iVar0;
	char* sVar1;
	
	switch (Local_43.f_1)
	{
		case 1:
			iVar0 = func_148();
			if (iVar0 == 1)
			{
				func_142("STREET_NA_COP");
				return 0;
			}
			else if (iVar0 == 2)
			{
				func_142("STREET_NA_BIKE");
				return 0;
			}
			break;
		
		case 2:
			iVar0 = func_146();
			if (iVar0 == 1)
			{
				func_142("STREET_NA_COP");
				return 0;
			}
			else if (iVar0 == 2)
			{
				func_142("STREET_NA_CAR");
				return 0;
			}
			break;
		
		case 3:
			if (!func_145())
			{
				if (func_14(iLocal_57))
				{
					sVar1 = "SEA_NA_VEH";
				}
				else
				{
					sVar1 = "SEA_NA_VEH2";
				}
				func_142(sVar1);
				return 0;
			}
			break;
	}
	return 1;
}

int func_145()//Position - 0x8AA1
{
	int iVar0;
	
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0x724D816EA203A79E(iLocal_0))
		{
			iVar0 = unk_0x6F79ECA8C83E4357(iLocal_0);
			if (iVar0 == joaat("seashark") || iVar0 == joaat("seashark2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_146()//Position - 0x8AE3
{
	int iVar0;
	int iVar1;
	int iVar2[83];
	
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0x724D816EA203A79E(iLocal_0))
		{
			iVar0 = unk_0x6F79ECA8C83E4357(iLocal_0);
			if (func_147(iVar0))
			{
				return 1;
			}
			if ((((((((((iVar0 == joaat("police4") || iVar0 == joaat("policeold1")) || iVar0 == joaat("policeold2")) || iVar0 == joaat("fbi")) || iVar0 == joaat("fbi2")) || iVar0 == joaat("lguard")) || iVar0 == joaat("sheriff")) || iVar0 == joaat("sheriff2")) || iVar0 == joaat("pranger")) || iVar0 == joaat("ambulance")) || iVar0 == 1938952078)
			{
				return 1;
			}
			if (((unk_0x7512ED01F3F46714(iVar0) || unk_0xE7B3A320107C1379(iVar0)) || unk_0x8C1A6E7D5F410F4A(iVar0)) || unk_0xA19D269B4B5A1532(iVar0))
			{
				return 2;
			}
			iVar2[0] = joaat("ambulance");
			iVar2[1] = joaat("benson");
			iVar2[2] = joaat("biff");
			iVar2[3] = joaat("bus");
			iVar2[4] = 1938952078;
			iVar2[5] = joaat("forklift");
			iVar2[6] = joaat("mule");
			iVar2[7] = joaat("mule2");
			iVar2[8] = joaat("packer");
			iVar2[9] = joaat("phantom");
			iVar2[10] = joaat("mower");
			iVar2[11] = joaat("stockade");
			iVar2[12] = joaat("squalo");
			iVar2[13] = joaat("maverick");
			iVar2[14] = joaat("polmav");
			iVar2[15] = joaat("airtug");
			iVar2[16] = joaat("boxville3");
			iVar2[17] = joaat("annihilator");
			iVar2[18] = joaat("dinghy");
			iVar2[19] = 0;
			iVar2[20] = joaat("ripley");
			iVar2[21] = joaat("trash");
			iVar2[22] = joaat("burrito");
			iVar2[23] = joaat("pony");
			iVar2[24] = joaat("speedo");
			iVar2[25] = joaat("marquis");
			iVar2[26] = joaat("sanchez");
			iVar2[27] = joaat("airtug");
			iVar2[28] = joaat("taco");
			iVar2[29] = joaat("barracks");
			iVar2[30] = joaat("romero");
			iVar2[31] = joaat("blazer");
			iVar2[32] = joaat("blazer2");
			iVar2[33] = joaat("bodhi2");
			iVar2[34] = joaat("boxville2");
			iVar2[35] = joaat("bulldozer");
			iVar2[36] = joaat("caddy");
			iVar2[37] = joaat("caddy2");
			iVar2[38] = joaat("camper");
			iVar2[39] = joaat("tiptruck");
			iVar2[40] = joaat("tourbus");
			iVar2[41] = joaat("towtruck");
			iVar2[42] = joaat("towtruck2");
			iVar2[43] = joaat("tractor");
			iVar2[44] = joaat("tractor2");
			iVar2[45] = joaat("utillitruck");
			iVar2[46] = joaat("utillitruck2");
			iVar2[47] = joaat("utillitruck3");
			iVar2[48] = joaat("ratloader");
			iVar2[49] = joaat("dloader");
			iVar2[50] = joaat("docktug");
			iVar2[51] = joaat("dump");
			iVar2[52] = joaat("gburrito");
			iVar2[53] = joaat("handler");
			iVar2[54] = joaat("hauler");
			iVar2[55] = joaat("journey");
			iVar2[56] = joaat("rentalbus");
			iVar2[57] = joaat("mixer");
			iVar2[58] = joaat("rhino");
			iVar2[59] = joaat("cutter");
			iVar2[60] = joaat("pounder");
			iVar2[61] = joaat("tiptruck2");
			iVar2[62] = joaat("mixer2");
			iVar2[63] = joaat("rubble");
			iVar2[64] = joaat("scrap");
			iVar2[65] = joaat("armytanker");
			iVar2[66] = joaat("barracks2");
			iVar2[67] = joaat("airbus");
			iVar2[68] = joaat("coach");
			iVar2[69] = joaat("pbus");
			iVar2[70] = joaat("riot");
			iVar2[71] = 0;
			iVar2[72] = joaat("stockade3");
			iVar2[73] = joaat("flatbed");
			iVar2[74] = joaat("boxville");
			iVar2[75] = joaat("burrito2");
			iVar2[76] = joaat("burrito3");
			iVar2[77] = joaat("burrito4");
			iVar2[78] = joaat("rumpo");
			iVar2[79] = joaat("speedo2");
			iVar2[80] = 0;
			iVar2[81] = joaat("blimp");
			iVar2[82] = joaat("blimp2");
			iVar1 = 0;
			while (iVar1 < iVar2)
			{
				if (iVar0 == iVar2[iVar1])
				{
					return 2;
				}
				iVar1++;
			}
		}
	}
	return 0;
}

int func_147(int iParam0)//Position - 0x8F86
{
	switch (iParam0)
	{
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("polmav"):
		case joaat("policeb"):
		case joaat("policet"):
		case joaat("policeold2"):
		case joaat("policeold1"):
		case joaat("sheriff"):
		case joaat("sheriff2"):
			return 1;
			break;
	}
	return 0;
}

int func_148()//Position - 0x8FDF
{
	int iVar0;
	
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0x724D816EA203A79E(iLocal_0))
		{
			iVar0 = unk_0x6F79ECA8C83E4357(iLocal_0);
			if (iVar0 == joaat("policeb"))
			{
				return 1;
			}
			if (unk_0x7512ED01F3F46714(iVar0) && !unk_0x2B4DE5C0D509B0F9(iVar0))
			{
				return 0;
			}
		}
	}
	return 2;
}

void func_149(int iParam0)//Position - 0x902B
{
	if (unk_0x724D816EA203A79E(*iParam0))
	{
		unk_0x1D403DFADBC2DE3C(*iParam0, 0);
		if (unk_0x5CAE759AE8219D20(*iParam0) && unk_0xB248FAA35ED47DB9(*iParam0, 1))
		{
			unk_0x1E7A09C1710FB071(iParam0);
		}
	}
}

void func_150(char* sParam0, int iParam1)//Position - 0x9063
{
	if (!func_152(sParam0, iParam1))
	{
		func_151(sParam0, iParam1);
	}
}

void func_151(char* sParam0, int iParam1)//Position - 0x907F
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0xAA5C5BF0489E5553(iParam1);
	unk_0x72F8FA06CC9EC899(0, 1, true, -1);
}

int func_152(char* sParam0, int iParam1)//Position - 0x909B
{
	unk_0xF07D20149ECBC61E(sParam0);
	unk_0xAA5C5BF0489E5553(iParam1);
	return unk_0xA66DBDA0A072514A(0);
}

int func_153(int iParam0)//Position - 0x90B4
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

int func_154()//Position - 0x910C
{
	int iVar0;
	
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			iVar0 = unk_0xD20EBB97FE8799ED(unk_0xBC25C936A095B5BA());
			if (func_15(iVar0))
			{
				if (unk_0x2A348A3A98B80B13(iVar0))
				{
					if (Local_43.f_1 == 3 && unk_0x149E9368A11035DE(iVar0))
					{
						return 0;
					}
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
	}
	return 0;
}

int func_155()//Position - 0x916B
{
	int iVar0;
	
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		iVar0 = 20;
		if (Local_43.f_1 == 3)
		{
			iVar0 = 40;
		}
		if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), vLocal_44, true) < IntToFloat(iVar0) && unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_156()//Position - 0x91BB
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_161(&uLocal_90))
	{
		if (Local_43.f_1 == 2)
		{
			if (func_158())
			{
				if (!unk_0x724D816EA203A79E(iLocal_57))
				{
					if (unk_0xD6513D668481290A(iLocal_71) && unk_0xD6513D668481290A(iLocal_71))
					{
						iLocal_57 = unk_0x61C05BF08A1E0EFE(iLocal_71, vLocal_59, fLocal_60, true, true, false);
						if (unk_0x77D9A006A4527F4C(1) && unk_0x451E6C7D03F23009())
						{
							iLocal_58 = unk_0xD11996326E5BD97E(iLocal_57, 1);
							unk_0x194CCBD594974E0D(iLocal_58, iLocal_57, 1, 99999999);
							unk_0x2E35C4FA5F0ED22F(iLocal_58, true);
							unk_0x22321800954A532E(iLocal_58, true);
						}
						unk_0xF0A40F19AAB79E88(iLocal_57, 1084227584);
						unk_0x2D655AA68FA1736B(iLocal_57, true, true, 0);
						unk_0x4E87F356DA56EB3F(iLocal_57, true);
						unk_0x092EAEDB8CF7A1AA(iLocal_57, 1);
						unk_0x363092112FA508E2(unk_0x4D8215BCA285185C(10), 1);
						unk_0x004811915F93A42D(iLocal_57, unk_0x4D8215BCA285185C(10));
						unk_0x551DF575AE9A2969(iLocal_57, 0);
						unk_0x2CA123B0622F495C(iLocal_71);
						SYSTEM::WAIT(0);
					}
				}
				if (!unk_0x724D816EA203A79E(iLocal_61))
				{
					if (unk_0xD6513D668481290A(iLocal_72))
					{
						iLocal_61 = unk_0x61C05BF08A1E0EFE(iLocal_72, vLocal_62, fLocal_63, true, true, false);
						unk_0x2D655AA68FA1736B(iLocal_61, false, true, 0);
						unk_0x4E87F356DA56EB3F(iLocal_61, true);
						unk_0x092EAEDB8CF7A1AA(iLocal_61, 1);
						unk_0xF0A40F19AAB79E88(iLocal_61, 1084227584);
						unk_0x363092112FA508E2(unk_0x4D8215BCA285185C(10), 1);
						unk_0x004811915F93A42D(iLocal_61, unk_0x4D8215BCA285185C(10));
						unk_0x551DF575AE9A2969(iLocal_61, 0);
						unk_0x2CA123B0622F495C(iLocal_72);
						SYSTEM::WAIT(0);
					}
				}
				if (unk_0xF9E082857622D91E(cLocal_73))
				{
					if (iLocal_75)
					{
						iVar0 = 0;
						while (iVar0 <= (iLocal_70 - 1))
						{
							if (unk_0x724D816EA203A79E(iLocal_56[iVar0]))
							{
								if (!unk_0x1D403DFADBC2DE3C(iLocal_56[iVar0], 0) && !func_157(iLocal_56[iVar0], -2017877118))
								{
									unk_0xE896C0AD02364F2A(iLocal_56[iVar0], cLocal_73, sLocal_74[iVar0], 1000f, -1000f, -1, 1, 0, 0, 0, 0);
									unk_0x22321800954A532E(iLocal_56[iVar0], true);
								}
							}
							else if (unk_0xD6513D668481290A(iLocal_70[iVar0]))
							{
								iLocal_56[iVar0] = unk_0x01B3635C3E8EDD81(25, iLocal_70[iVar0], vLocal_66[iVar0 /*3*/], fLocal_67[iVar0], 1, true);
								unk_0xD5874E4A4BF782FC(iLocal_56[iVar0], vLocal_66[iVar0 /*3*/], 0, 0, 1);
								unk_0x2E35C4FA5F0ED22F(iLocal_56[iVar0], true);
								unk_0xE896C0AD02364F2A(iLocal_56[iVar0], cLocal_73, sLocal_74[iVar0], 1000f, -1000f, -1, 1, 0, 0, 0, 0);
								unk_0x22321800954A532E(iLocal_56[iVar0], true);
							}
							iVar0++;
						}
						if ((((((((func_60(iLocal_56[0]) && func_60(iLocal_56[1])) && func_60(iLocal_56[2])) && func_60(iLocal_56[3])) && func_60(iLocal_56[4])) && func_60(iLocal_56[5])) && func_60(iLocal_56[6])) && func_14(iLocal_57)) && func_14(iLocal_61))
						{
							bLocal_55 = true;
							iVar0 = 0;
							while (iVar0 <= (iLocal_70 - 1))
							{
								unk_0x2CA123B0622F495C(iLocal_70[iVar0]);
								iVar0++;
							}
							iLocal_75 = 0;
						}
					}
				}
			}
		}
		else if (Local_43.f_1 == 1)
		{
			if (func_158())
			{
				if (!unk_0x724D816EA203A79E(iLocal_57))
				{
					if (unk_0xD6513D668481290A(iLocal_71))
					{
						iLocal_57 = unk_0x61C05BF08A1E0EFE(iLocal_71, vLocal_59, fLocal_60, true, true, false);
						if (unk_0x77D9A006A4527F4C(0) && unk_0x5C9E0DAF2A1EEF29())
						{
							iLocal_58 = unk_0xD11996326E5BD97E(iLocal_57, 1);
							unk_0x194CCBD594974E0D(iLocal_58, iLocal_57, 1, 99999999);
							unk_0x2E35C4FA5F0ED22F(iLocal_58, true);
							unk_0x22321800954A532E(iLocal_58, true);
						}
						unk_0x2D655AA68FA1736B(iLocal_57, true, true, 0);
						unk_0x4E87F356DA56EB3F(iLocal_57, true);
						unk_0x092EAEDB8CF7A1AA(iLocal_57, 1);
						unk_0x363092112FA508E2(unk_0x4D8215BCA285185C(10), 1);
						unk_0x004811915F93A42D(iLocal_57, unk_0x4D8215BCA285185C(10));
						unk_0x551DF575AE9A2969(iLocal_57, 0);
						unk_0x2CA123B0622F495C(iLocal_71);
					}
				}
				if (unk_0xF9E082857622D91E(cLocal_73))
				{
					if (iLocal_75)
					{
						iVar1 = 0;
						while (iVar1 <= (iLocal_70 - 3))
						{
							if (unk_0x724D816EA203A79E(iLocal_56[iVar1]))
							{
								if (!unk_0x1D403DFADBC2DE3C(iLocal_56[iVar1], 0) && !func_157(iLocal_56[iVar1], -2017877118))
								{
									unk_0xD5874E4A4BF782FC(iLocal_56[iVar1], vLocal_66[iVar1 /*3*/], 0, 0, 1);
									if (iVar1 != 2 && iVar1 != 3)
									{
										unk_0xE896C0AD02364F2A(iLocal_56[iVar1], cLocal_73, sLocal_74[iVar1], 1000f, -1000f, -1, 1, 0, 0, 0, 0);
									}
									else
									{
										unk_0xE896C0AD02364F2A(iLocal_56[iVar1], cLocal_73, sLocal_74[iVar1], 1000f, -1000f, -1, 1, 0.5f, 0, 0, 0);
									}
									unk_0x22321800954A532E(iLocal_56[iVar1], true);
								}
							}
							else if (unk_0xD6513D668481290A(iLocal_70[iVar1]))
							{
								iLocal_56[iVar1] = unk_0x01B3635C3E8EDD81(25, iLocal_70[iVar1], vLocal_66[iVar1 /*3*/], fLocal_67[iVar1], 1, true);
								unk_0x2E35C4FA5F0ED22F(iLocal_56[iVar1], true);
							}
							iVar1++;
						}
						if ((((func_60(iLocal_56[0]) && func_60(iLocal_56[1])) && func_60(iLocal_56[2])) && func_60(iLocal_56[3])) && func_60(iLocal_56[4]))
						{
							unk_0x56F2E1B5599188FA(iLocal_56[4], unk_0xBC25C936A095B5BA(), -1, 2048, 4);
							iVar1 = 0;
							while (iVar1 <= (iLocal_70 - 1))
							{
								unk_0x2CA123B0622F495C(iLocal_70[iVar1]);
								iVar1++;
							}
							iLocal_75 = 0;
						}
					}
				}
			}
		}
		else if (Local_43.f_1 == 3)
		{
			if (func_158())
			{
				if (!unk_0x724D816EA203A79E(iLocal_57))
				{
					if (unk_0xD6513D668481290A(iLocal_71))
					{
						iLocal_57 = unk_0x61C05BF08A1E0EFE(iLocal_71, vLocal_59, fLocal_60, true, true, false);
						unk_0xF0A40F19AAB79E88(iLocal_57, 1084227584);
						unk_0x2C98E64C6834EA28(iLocal_57, 0f);
						unk_0xCA1C10B9FD4C999D(iLocal_57, 0);
						unk_0xBCD39DE97BFBDA77(iLocal_57, 0);
						if (unk_0xF00B0357AFD83FDA(iLocal_57))
						{
							unk_0x625842570605740F(iLocal_57, true);
						}
						unk_0x2D655AA68FA1736B(iLocal_57, false, true, 0);
					}
				}
				iVar2 = 0;
				iVar2 = 0;
				while (iVar2 < 3)
				{
					if (unk_0x724D816EA203A79E(iLocal_68[iVar2]))
					{
						if (unk_0x724D816EA203A79E(iLocal_69[iVar2]))
						{
							if (!unk_0x36CEFBE9B745A58D(iLocal_69[iVar2]) && func_14(iLocal_68[iVar2]))
							{
								if (unk_0x1AAF0C23233C57AF(iLocal_68[iVar2], -1, 0))
								{
									unk_0xBD53A029D0155A42(iLocal_69[iVar2], iLocal_68[iVar2], -1);
								}
							}
						}
						else if (func_14(iLocal_68[iVar2]) && unk_0xD6513D668481290A(joaat("a_m_y_jetski_01")))
						{
							iLocal_69[iVar2] = unk_0xFD8987C090669BD5(iLocal_68[iVar2], 25, joaat("a_m_y_jetski_01"), -1, 1, true);
							unk_0x63ECE17EEAC84602(iLocal_69[iVar2], 0);
							unk_0x2E35C4FA5F0ED22F(iLocal_69[iVar2], true);
						}
					}
					else if (unk_0xD6513D668481290A(iLocal_71))
					{
						iLocal_68[iVar2] = unk_0x61C05BF08A1E0EFE(iLocal_71, vLocal_64[iVar2 /*3*/], fLocal_65[iVar2], true, true, false);
						unk_0xF0A40F19AAB79E88(iLocal_68[iVar2], 1084227584);
						unk_0x2C98E64C6834EA28(iLocal_68[iVar2], 0f);
						unk_0xCA1C10B9FD4C999D(iLocal_68[iVar2], 1);
						unk_0xBCD39DE97BFBDA77(iLocal_68[iVar2], 1);
						if (unk_0xF00B0357AFD83FDA(iLocal_68[iVar2]))
						{
							unk_0x625842570605740F(iLocal_68[iVar2], true);
						}
						unk_0x2D655AA68FA1736B(iLocal_68[iVar2], false, true, 0);
					}
					iVar2++;
				}
				if (((unk_0x724D816EA203A79E(iLocal_57) && unk_0x724D816EA203A79E(iLocal_68[0])) && unk_0x724D816EA203A79E(iLocal_68[1])) && unk_0x724D816EA203A79E(iLocal_68[2]))
				{
					unk_0x2CA123B0622F495C(iLocal_71);
				}
				if ((unk_0x724D816EA203A79E(iLocal_69[0]) && unk_0x724D816EA203A79E(iLocal_69[1])) && unk_0x724D816EA203A79E(iLocal_69[2]))
				{
					unk_0x2CA123B0622F495C(joaat("a_m_y_jetski_01"));
				}
				unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 170, true);
			}
		}
	}
}

int func_157(int iParam0, int iParam1)//Position - 0x98E0
{
	if (func_60(iParam0))
	{
		if (unk_0xF4FCC3C1048FF2AB(iParam0, iParam1) == 1 || unk_0xF4FCC3C1048FF2AB(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_158()//Position - 0x9913
{
	if (!func_160())
	{
		return 0;
	}
	if (func_60(unk_0xBC25C936A095B5BA()))
	{
		if (!func_159(unk_0xBC25C936A095B5BA(), vLocal_59, 100f) || unk_0x17FAADF9916EF741())
		{
			return 1;
		}
	}
	return 0;
}

bool func_159(int iParam0, vector3 vParam1, float fParam2)//Position - 0x9956
{
	return SYSTEM::VDIST2(unk_0x541C2AEF053615BC(iParam0, true), vParam1) <= (fParam2 * fParam2);
}

int func_160()//Position - 0x9973
{
	if (Local_43.f_1 == 3)
	{
		return 1;
	}
	else if (Local_43.f_1 == 1 || Local_43.f_1 == 2)
	{
		if (unk_0x6E06C0DB9B43570D() >= 20 || unk_0x6E06C0DB9B43570D() < 5)
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

int func_161(var uParam0)//Position - 0x99C1
{
	int iVar0;
	
	if (!uParam0->f_91)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_162(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_91 = 0;
	return 1;
}

bool func_162(var uParam0)//Position - 0x9A23
{
	return func_163(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_163(int iParam0, char* sParam1, int iParam2)//Position - 0x9A3A
{
	if (unk_0xFA30DFD0084E92FE(iParam0, 30))
	{
		if (unk_0xFA30DFD0084E92FE(iParam0, 29))
		{
			switch (func_164(iParam0))
			{
				case 0:
					return unk_0xD6513D668481290A(iParam2);
					break;
				
				case 1:
					return unk_0xF9E082857622D91E(sParam1);
					break;
				
				case 2:
					return unk_0x320539481B2F0121(sParam1);
					break;
				
				case 3:
					return unk_0x499783D01578C2D2(sParam1);
					break;
				
				case 4:
					return unk_0x00D24B3F2A5CD22C(iParam2, sParam1);
					break;
				
				case 5:
					return unk_0x1E8349F219AC5AF9(sParam1);
					break;
				
				case 6:
					return unk_0x284F2ACE6839D3C0(sParam1, unk_0xFA30DFD0084E92FE(iParam0, 27), -1);
					break;
				
				case 7:
					return unk_0xFEAEF0BFEF7FED8A(iParam2);
					break;
				
				case 8:
					return unk_0xFA9040D29FE330BD(iParam2);
					break;
				
				case 9:
					return unk_0x95654D7A61CD43DE();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_164(int iParam0)//Position - 0x9B2E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xFA30DFD0084E92FE(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_165(var uParam0)//Position - 0x9B5A
{
	int iVar0;
	
	if (uParam0->f_91)
	{
		if ((unk_0xC87A57742F7D3C06() >= (uParam0->f_92 + uParam0->f_93) || unk_0xFA30DFD0084E92FE(Global_16B1B.f_14, 2)) || unk_0xFA30DFD0084E92FE(Global_16B1B.f_14, 13))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*18*/], 29))
					{
						func_166(uParam0[iVar0 /*18*/]);
						uParam0->f_92 = unk_0xC87A57742F7D3C06();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_166(int iParam0)//Position - 0x9BE4
{
	func_167(iParam0, &(iParam0->f_2), iParam0->f_1);
}

void func_167(int iParam0, char* sParam1, int iParam2)//Position - 0x9BFA
{
	if (unk_0xFA30DFD0084E92FE(*iParam0, 30))
	{
		switch (func_164(*iParam0))
		{
			case 0:
				unk_0xF243B7A14FCFD0F4(iParam2);
				break;
			
			case 1:
				unk_0x522053D86D6E1C7A(sParam1);
				break;
			
			case 2:
				unk_0x37FA5A8A7F1136BA(sParam1);
				break;
			
			case 3:
				unk_0x8AA3F48A15444B98(sParam1, unk_0xFA30DFD0084E92FE(*iParam0, 28));
				break;
			
			case 4:
				unk_0x1B2A7C8188ADBE04(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x44840FD68E426678(sParam1);
				break;
			
			case 6:
				unk_0x284F2ACE6839D3C0(sParam1, unk_0xFA30DFD0084E92FE(*iParam0, 27), -1);
				break;
			
			case 7:
				unk_0x381A61AE1A1DAD09(iParam2);
				break;
			
			case 8:
				unk_0x900CF084251DED26(sParam1, iParam2);
				break;
			
			case 9:
				unk_0xA8396BF0E2C53C39();
				break;
			
			default:
				break;
		}
		unk_0xF0059F27F7BB6680(iParam0, 29);
	}
}

void func_168()//Position - 0x9CD4
{
	int iVar0;
	
	if (Local_43.f_1 == 1 || Local_43.f_1 == 2)
	{
		switch (Local_43)
		{
			case 0:
				vLocal_59 = { -158.67f, -1555.16f, 34.63f };
				fLocal_60 = 187.71f;
				vLocal_62 = { -155.15f, -1550.83f, 34.53f };
				fLocal_63 = 213.13f;
				vLocal_83 = { -68.87878f, -1818.903f, 24.55311f };
				vLocal_84 = { -56.0098f, -1807.029f, 27.85417f };
				vLocal_66[0 /*3*/] = { -157.19f, -1555.36f, 35.07f };
				vLocal_66[1 /*3*/] = { -157.04f, -1557.57f, 35.11f };
				vLocal_66[2 /*3*/] = { -159.83f, -1557.39f, 34.96f };
				vLocal_66[3 /*3*/] = { -156.64f, -1551.96f, 34.92f };
				vLocal_66[4 /*3*/] = { -156.25f, -1552.58f, 34.93f };
				vLocal_66[5 /*3*/] = { -153.23f, -1553.05f, 34.93f };
				vLocal_66[6 /*3*/] = { -155.3f, -1556.41f, 35.13f };
				fLocal_67[0] = 101.91f;
				fLocal_67[1] = 38.48f;
				fLocal_67[2] = -36.7f;
				fLocal_67[3] = -52.93f;
				fLocal_67[4] = -75.07f;
				fLocal_67[5] = 33.13f;
				fLocal_67[6] = -170.02f;
				break;
			
			case 1:
				vLocal_59 = { 368.72f, 294.06f, 102.96f };
				fLocal_60 = 25.17f;
				vLocal_62 = { 373.71f, 290.72f, 102.89f };
				fLocal_63 = 33.24f;
				vLocal_83 = { -523.5497f, 262.2986f, 80.01991f };
				vLocal_84 = { -509.1013f, 272.478f, 86.17713f };
				vLocal_66[0 /*3*/] = { 367.24f, 293.81f, 103.41f };
				vLocal_66[1 /*3*/] = { 368.73f, 296.89f, 103.41f };
				vLocal_66[2 /*3*/] = { 366.94f, 296.34f, 103.43f };
				vLocal_66[3 /*3*/] = { 375.21f, 291.85f, 103.25f };
				vLocal_66[4 /*3*/] = { 374.81f, 292.47f, 103.26f };
				vLocal_66[5 /*3*/] = { 371.51f, 291.85f, 103.31f };
				vLocal_66[6 /*3*/] = { 373.86f, 296.3f, 103.31f };
				fLocal_67[0] = -64.83f;
				fLocal_67[1] = -163.04f;
				fLocal_67[2] = -118.77f;
				fLocal_67[3] = 127.18f;
				fLocal_67[4] = 105.04f;
				fLocal_67[5] = -146.75f;
				fLocal_67[6] = 10.11f;
				break;
			
			case 2:
				vLocal_59 = { -807.98f, -2555.14f, 13.34f };
				fLocal_60 = 3.35f;
				vLocal_62 = { -810.1f, -2560.85f, 13.38f };
				fLocal_63 = 43.57f;
				vLocal_83 = { -1000.759f, -2436.092f, 17.16946f };
				vLocal_84 = { -986.7399f, -2424.87f, 22.16946f };
				vLocal_66[0 /*3*/] = { -809.45f, -2554.82f, 13.76f };
				vLocal_66[1 /*3*/] = { -808.47f, -2552.43f, 13.76f };
				vLocal_66[2 /*3*/] = { -806.32f, -2552.87f, 13.76f };
				vLocal_66[3 /*3*/] = { -808.59f, -2559.5f, 13.76f };
				vLocal_66[4 /*3*/] = { -809.1f, -2558.97f, 13.76f };
				vLocal_66[5 /*3*/] = { -812.82f, -2559.48f, 13.76f };
				vLocal_66[6 /*3*/] = { -810.72f, -2555.37f, 13.76f };
				fLocal_67[0] = -86.65f;
				fLocal_67[1] = -130.05f;
				fLocal_67[2] = 150.04f;
				fLocal_67[3] = 137.51f;
				fLocal_67[4] = 115.37f;
				fLocal_67[5] = -136.43f;
				fLocal_67[6] = 20.43f;
				break;
			
			case 3:
				vLocal_59 = { 778.59f, -1160.2f, 28.35f };
				fLocal_60 = 302.47f;
				vLocal_62 = { 778.47f, -1164.01f, 28.25f };
				fLocal_63 = 287.97f;
				vLocal_83 = { -1000.759f, -2436.092f, 17.16946f };
				vLocal_84 = { -986.7399f, -2424.87f, 22.16946f };
				vLocal_66[0 /*3*/] = { 778.16f, -1158.78f, 28.88f };
				vLocal_66[1 /*3*/] = { 780.82f, -1158.1f, 28.73f };
				vLocal_66[2 /*3*/] = { 781.52f, -1158.81f, 28.7f };
				vLocal_66[3 /*3*/] = { 779.16f, -1165.74f, 28.72f };
				vLocal_66[4 /*3*/] = { 779.86f, -1165.52f, 28.72f };
				vLocal_66[5 /*3*/] = { 780.75f, -1161.99f, 28.65f };
				vLocal_66[6 /*3*/] = { 783.8f, -1165.61f, 28.74f };
				fLocal_67[0] = -147.53f;
				fLocal_67[1] = 171.51f;
				fLocal_67[2] = 104.94f;
				fLocal_67[3] = 21.91f;
				fLocal_67[4] = -0.22f;
				fLocal_67[5] = 107.91f;
				fLocal_67[6] = -95.23f;
				break;
			
			case 4:
				vLocal_59 = { -1066.59f, -1151.04f, 1.71f };
				fLocal_60 = 258.32f;
				vLocal_66[0 /*3*/] = { -1065.07f, -1151.02f, 2.16f };
				vLocal_66[1 /*3*/] = { -1065.35f, -1149.36f, 2.16f };
				vLocal_66[2 /*3*/] = { -1067.13f, -1151.68f, 2.16f };
				vLocal_66[3 /*3*/] = { -1066.3f, -1149.38f, 2.16f };
				vLocal_66[4 /*3*/] = { -1066.01f, -1152.26f, 2.16f };
				fLocal_67[0] = 75.06f;
				fLocal_67[1] = 134.25f;
				fLocal_67[2] = -52.71f;
				fLocal_67[3] = -93.39f;
				fLocal_67[4] = -141.52f;
				vLocal_83 = { -1265.744f, -1057.199f, 5.410841f };
				vLocal_84 = { -1258.679f, -1049.919f, 9.443882f };
				break;
		}
		func_173(Local_43, &vLocal_85, &vLocal_86, &fLocal_87);
		iLocal_70[0] = joaat("a_f_y_hipster_02");
		iLocal_70[1] = joaat("a_m_y_hipster_02");
		iLocal_70[2] = joaat("a_m_y_hipster_02");
		iLocal_70[3] = joaat("a_f_y_hipster_02");
		iLocal_70[4] = joaat("a_m_y_hipster_02");
		iLocal_70[5] = joaat("a_m_y_hipster_02");
		iLocal_70[6] = joaat("a_m_y_hipster_02");
		if (Local_43.f_1 == 1)
		{
			cLocal_73 = "random@street_race";
			sLocal_74[0] = "_car_b_chatting_female";
			sLocal_74[1] = "_car_b_chatting_male";
			sLocal_74[2] = "_car_b_chatting_male";
			sLocal_74[3] = "_car_b_chatting_female";
			sLocal_74[4] = "_car_b_lookout";
		}
		else
		{
			cLocal_73 = "random@street_race";
			sLocal_74[0] = "_car_a_flirt_girl";
			sLocal_74[1] = "_car_a_gawker_male_a";
			sLocal_74[2] = "_car_a_gawker_male_b";
			sLocal_74[3] = "_car_b_chatting_female";
			sLocal_74[4] = "_car_b_chatting_male";
			sLocal_74[5] = "_car_b_driver";
			sLocal_74[6] = "_car_b_lookout";
			func_172(&uLocal_90, iLocal_72);
		}
		iLocal_71 = func_171(Local_43.f_1);
		iVar0 = 0;
		while (iVar0 <= (iLocal_70 - 1))
		{
			func_172(&uLocal_90, iLocal_70[iVar0]);
			iVar0++;
		}
		func_172(&uLocal_90, iLocal_71);
		func_169(&uLocal_90, cLocal_73);
		unk_0x4BDC021CD4295F17(vLocal_83, vLocal_84, false, 0);
		unk_0xA7FBEF44EF04D534(vLocal_85, vLocal_86, fLocal_87, 0, false, 1);
		iLocal_47 = 1;
	}
	else if (Local_43.f_1 == 3)
	{
		switch (Local_43)
		{
			case 5:
				vLocal_59 = { 3066.63f, 650.9f, 0.17f };
				fLocal_60 = 351.81f;
				vLocal_64[0 /*3*/] = { 3073.57f, 648.09f, 0.01f };
				fLocal_65[0] = 5.72f;
				vLocal_64[1 /*3*/] = { 3071.53f, 648.79f, -0.09f };
				fLocal_65[1] = 351.33f;
				vLocal_64[2 /*3*/] = { 3068.73f, 645.53f, -0.07f };
				fLocal_65[2] = 348.18f;
				break;
			
			case 6:
				vLocal_59 = { 3462.11f, 5192.15f, -0.04f };
				fLocal_60 = 222.9f;
				vLocal_64[0 /*3*/] = { 3456.64f, 5195.91f, 0.12f };
				fLocal_65[0] = 211.54f;
				vLocal_64[1 /*3*/] = { 3453.19f, 5192.84f, -0.17f };
				fLocal_65[1] = 201.55f;
				vLocal_64[2 /*3*/] = { 3451.06f, 5189.43f, -0.3f };
				fLocal_65[2] = 221.55f;
				break;
			
			case 7:
				vLocal_59 = { 194.64f, 3621.27f, 29.91f };
				fLocal_60 = 163.95f;
				vLocal_64[0 /*3*/] = { 198.62f, 3620.46f, 29.91f };
				fLocal_65[0] = 175.4f;
				vLocal_64[1 /*3*/] = { 202.78f, 3619.69f, 29.87f };
				fLocal_65[1] = 163.69f;
				vLocal_64[2 /*3*/] = { 210.14f, 3618.88f, 29.87f };
				fLocal_65[2] = 175.31f;
				break;
			
			case 8:
				vLocal_59 = { 627.58f, -2138.06f, -0.07f };
				fLocal_60 = 180.09f;
				vLocal_64[0 /*3*/] = { 643.09f, -2146.11f, -0.09f };
				fLocal_65[0] = 143.89f;
				vLocal_64[1 /*3*/] = { 638.21f, -2145.3f, -0.1f };
				fLocal_65[1] = 172.41f;
				vLocal_64[2 /*3*/] = { 633.56f, -2143.83f, -0.04f };
				fLocal_65[2] = 191.97f;
				break;
		}
		iLocal_71 = joaat("seashark");
		func_172(&uLocal_90, iLocal_71);
		func_172(&uLocal_90, joaat("a_m_y_jetski_01"));
	}
}

void func_169(var uParam0, char* sParam1)//Position - 0xA65F
{
	func_170(uParam0, 1, -1, sParam1, 0);
}

void func_170(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)//Position - 0xA672
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*18*/], 30))
		{
			if (unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*18*/], iParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*18*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 != 4)
				{
					if (!unk_0x3362CDE8460ED38B(sParam3, "NULL"))
					{
						if (unk_0x3362CDE8460ED38B(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
						{
							return;
						}
					}
				}
				if (iParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_91)
	{
		uParam0->f_91 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0xF0059F27F7BB6680(uParam0[iVar0 /*18*/], iParam1);
			unk_0xF0059F27F7BB6680(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

int func_171(int iParam0)//Position - 0xA75A
{
	int iVar0;
	
	switch (iParam0)
	{
		case 1:
			iVar0 = joaat("bati");
			break;
		
		case 2:
			iVar0 = joaat("ninef");
			break;
		
		case 3:
			iVar0 = joaat("seashark");
			break;
	}
	return iVar0;
}

void func_172(var uParam0, int iParam1)//Position - 0xA79B
{
	func_170(uParam0, 0, iParam1, "NULL", 0);
}

void func_173(int iParam0, var uParam1, var uParam2, float fParam3)//Position - 0xA7AF
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 311.1262f, -1896.261f, 20.68329f };
			*uParam2 = { -295.0653f, -1405.53f, 35.3146f };
			*fParam3 = 300f;
			break;
		
		case 1:
			*uParam1 = { 273.185f, 335.2969f, 105.5704f };
			*uParam2 = { 412.2877f, 299.2304f, 101.0724f };
			*fParam3 = 20f;
			break;
		
		case 2:
			*uParam1 = { -823.7157f, -2588f, 13.7691f };
			*uParam2 = { -801.3356f, -2464.007f, 12.42913f };
			*fParam3 = 30f;
			break;
		
		case 3:
			*uParam1 = { 791.8257f, -1423.863f, 24.17954f };
			*uParam2 = { 783.167f, -1015.648f, 50.24134f };
			*fParam3 = 200f;
			break;
		
		case 4:
			*uParam1 = { -1084.03f, -1165.724f, 0.150211f };
			*uParam2 = { -1029.213f, -1134.581f, 2.174534f };
			*fParam3 = 10f;
			break;
	}
}

int func_174()//Position - 0xA8D1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (func_59(9))
	{
		return 0;
	}
	if (func_44(6) || func_44(7))
	{
		return 0;
	}
	if (Global_DA99)
	{
		return 0;
	}
	if (func_197())
	{
		return 0;
	}
	if (Local_43.f_1 != 3 && func_49() != 1)
	{
		return 0;
	}
	if (unk_0x87DD8C3CB85096D5())
	{
		return 0;
	}
	if (func_60(unk_0xBC25C936A095B5BA()) && unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		iVar0 = unk_0x3E12B546F3F2597A();
		if (((func_14(iVar0) && unk_0x25EF720B1CAB1E23(unk_0xBC25C936A095B5BA(), iVar0)) && !func_196(unk_0xBC25C936A095B5BA(), iVar0, -1)) && unk_0x6F79ECA8C83E4357(iVar0) != joaat("taxi"))
		{
			return 0;
		}
	}
	switch (Local_43)
	{
		case 0:
			if (Global_19AEA[0])
			{
				return 0;
			}
			break;
		
		case 1:
			if (Global_19AEA[1])
			{
				return 0;
			}
			break;
		
		case 2:
			if (Global_19AEA[2])
			{
				return 0;
			}
			break;
		
		case 3:
			if (Global_19AEA[3])
			{
				return 0;
			}
			break;
		
		case 4:
			if (Global_19AEA[4])
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_19AE0[0])
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_19AE0[1])
			{
				return 0;
			}
			break;
		
		case 7:
			if (Global_19AE0[2])
			{
				return 0;
			}
			break;
		
		case 8:
			if (Global_19AE0[3])
			{
				return 0;
			}
			break;
	}
	if (!func_160())
	{
		iVar1 = 0;
		while (iVar1 <= (iLocal_70 - 1))
		{
			if (func_60(iLocal_56[iVar1]))
			{
				unk_0xC5A6DFE2B8987B17(&iVar2);
				unk_0x61E7E913658B4389(0, iVar1 * 100);
				unk_0x8CE2798B9A7027EC(0, 1193033728, 0);
				unk_0x535008C596714F9E(iVar2);
				unk_0xA8E6405305C0D7DF(iLocal_56[iVar1], iVar2);
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= (iLocal_69 - 1))
		{
			if (func_60(iLocal_69[iVar1]))
			{
				unk_0xC5A6DFE2B8987B17(&iVar2);
				unk_0x61E7E913658B4389(0, iVar1 * 110);
				if (func_14(iLocal_68[iVar1]) && unk_0x62F3A07C43FFB568(iLocal_69[iVar1], iLocal_68[iVar1], 0))
				{
					unk_0x204BA7B1C7DD25F4(0, iLocal_68[iVar1], 30f, 786597);
				}
				else
				{
					unk_0x8CE2798B9A7027EC(0, 1193033728, 0);
				}
				unk_0x535008C596714F9E(iVar2);
				unk_0xA8E6405305C0D7DF(iLocal_69[iVar1], iVar2);
			}
			iVar1++;
		}
		if (func_60(iLocal_58))
		{
			if (func_14(iLocal_57) && unk_0x62F3A07C43FFB568(iLocal_58, iLocal_57, 0))
			{
				unk_0x204BA7B1C7DD25F4(iLocal_58, iLocal_57, 30f, 786597);
			}
			else
			{
				unk_0x8CE2798B9A7027EC(iLocal_58, 1193033728, 0);
			}
		}
		return 0;
	}
	if (func_176())
	{
		iVar4 = 0;
		while (iVar4 <= (iLocal_70 - 1))
		{
			if (func_60(iLocal_56[iVar4]))
			{
				unk_0xC5A6DFE2B8987B17(&iVar3);
				unk_0x61E7E913658B4389(0, iVar4 * 50);
				unk_0x5558ED6D4A2DEC93(0, unk_0xBC25C936A095B5BA(), 500f, -1, 0, 0);
				unk_0x535008C596714F9E(iVar3);
				if ((iVar4 % 2) == 0)
				{
					func_175(iLocal_56[iVar4], 1);
				}
				unk_0xA8E6405305C0D7DF(iLocal_56[iVar4], iVar3);
			}
			iVar4++;
		}
		iVar4 = 0;
		while (iVar4 <= (iLocal_69 - 1))
		{
			if (func_14(iLocal_68[iVar4]) && Local_43.f_1 == 3)
			{
				unk_0x625842570605740F(iLocal_68[iVar4], false);
			}
			if (func_60(iLocal_69[iVar4]))
			{
				unk_0xC5A6DFE2B8987B17(&iVar3);
				unk_0x61E7E913658B4389(0, iVar4 * 60);
				if (func_14(iLocal_68[iVar4]) && unk_0x62F3A07C43FFB568(iLocal_69[iVar4], iLocal_68[iVar4], 0))
				{
					unk_0x204BA7B1C7DD25F4(0, iLocal_68[iVar4], 50f, 786468);
				}
				else
				{
					unk_0x5558ED6D4A2DEC93(0, unk_0xBC25C936A095B5BA(), 500f, -1, 0, 0);
				}
				unk_0x535008C596714F9E(iVar3);
				unk_0xA8E6405305C0D7DF(iLocal_69[iVar4], iVar3);
				if ((iVar4 % 2) == 0)
				{
					func_175(iLocal_69[iVar4], 1);
				}
			}
			iVar4++;
		}
		if (func_14(iLocal_57) && Local_43.f_1 == 3)
		{
			unk_0x625842570605740F(iLocal_57, false);
		}
		if (func_60(iLocal_58))
		{
			if (func_14(iLocal_57) && unk_0x62F3A07C43FFB568(iLocal_58, iLocal_57, 0))
			{
				unk_0x204BA7B1C7DD25F4(iLocal_58, iLocal_57, 50f, 786468);
			}
			else
			{
				unk_0x5558ED6D4A2DEC93(iLocal_58, unk_0xBC25C936A095B5BA(), 500f, -1, 0, 0);
			}
		}
		switch (Local_43)
		{
			case 0:
				Global_19AEA[0] = 1;
				Global_19AF0[0] = unk_0x105601648511CC64();
				break;
			
			case 1:
				Global_19AEA[1] = 1;
				Global_19AF0[1] = unk_0x105601648511CC64();
				break;
			
			case 2:
				Global_19AEA[2] = 1;
				Global_19AF0[2] = unk_0x105601648511CC64();
				break;
			
			case 3:
				Global_19AEA[3] = 1;
				Global_19AF0[3] = unk_0x105601648511CC64();
				break;
			
			case 4:
				Global_19AEA[4] = 1;
				Global_19AF0[4] = unk_0x105601648511CC64();
				break;
			
			case 5:
				Global_19AE0[0] = 1;
				Global_19AE5[0] = unk_0x105601648511CC64();
				break;
			
			case 6:
				Global_19AE0[1] = 1;
				Global_19AE5[1] = unk_0x105601648511CC64();
				break;
			
			case 7:
				Global_19AE0[2] = 1;
				Global_19AE5[2] = unk_0x105601648511CC64();
				break;
			
			case 8:
				Global_19AE0[3] = 1;
				Global_19AE5[3] = unk_0x105601648511CC64();
				break;
		}
		return 0;
	}
	return 1;
}

void func_175(int iParam0, bool bParam1)//Position - 0xAE25
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	if (func_60(iParam0))
	{
		iVar1 = 2;
		if (bParam1)
		{
			iVar1 = 3;
		}
		iVar2 = unk_0x491B2241281A03B7(0, iVar1);
		if (iVar2 == 0)
		{
			sVar0 = "SCREAM_PANIC";
		}
		else if (iVar2 == 1)
		{
			sVar0 = "SCREAM_TERROR";
		}
		else
		{
			sVar0 = "SUPER_HIGH_FALL";
		}
		if (unk_0xB6FD7D587FE0A1B4(iParam0))
		{
			func_134(iParam0, sVar0, "WAVELOAD_PAIN_MALE", 24);
		}
		else
		{
			func_134(iParam0, sVar0, "WAVELOAD_PAIN_FEMALE", 24);
		}
	}
}

int func_176()//Position - 0xAE96
{
	int iVar0;
	
	if (unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
	{
		return 1;
	}
	if (Local_43.f_1 == 3)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_69 - 1))
		{
			if (unk_0x724D816EA203A79E(iLocal_69[iVar0]))
			{
				if (unk_0x36CEFBE9B745A58D(iLocal_69[iVar0]))
				{
					return 1;
				}
				else if (func_177(iLocal_69[iVar0], 1, 1116471296, 1126825984, 0, 0, 0, 0) || unk_0xA4813477CC5DD00F(iLocal_69[iVar0]))
				{
					return 1;
				}
			}
			if (unk_0x724D816EA203A79E(iLocal_68[iVar0]))
			{
				if (unk_0x1D403DFADBC2DE3C(iLocal_68[iVar0], 0))
				{
					return 1;
				}
				else if (unk_0xD9C1758D86688CEA(iLocal_68[iVar0], unk_0xBC25C936A095B5BA(), 1) && unk_0x8D66276473ABD7CC(iLocal_68[iVar0]) < 900)
				{
					return 1;
				}
			}
			iVar0++;
		}
		if (unk_0x724D816EA203A79E(iLocal_57))
		{
			if (unk_0x1D403DFADBC2DE3C(iLocal_57, 0))
			{
				return 1;
			}
			else if (unk_0xD9C1758D86688CEA(iLocal_57, unk_0xBC25C936A095B5BA(), 1) && unk_0x8D66276473ABD7CC(iLocal_57) < 900)
			{
				return 1;
			}
		}
		return 0;
	}
	if (func_159(unk_0xBC25C936A095B5BA(), vLocal_44, 50f) && unk_0x32E373675659FDB0(unk_0xBC25C936A095B5BA()))
	{
		return 1;
	}
	if (unk_0x724D816EA203A79E(iLocal_58))
	{
		if (unk_0x36CEFBE9B745A58D(iLocal_58))
		{
			return 1;
		}
		else if (func_177(iLocal_58, 1, 1116471296, 1126825984, 0, 0, 0, 0))
		{
			return 1;
		}
		else if (unk_0xA4813477CC5DD00F(iLocal_58))
		{
			unk_0x2E35C4FA5F0ED22F(iLocal_58, false);
			return 1;
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_57))
	{
		if (unk_0x1D403DFADBC2DE3C(iLocal_57, 0))
		{
			return 1;
		}
		else if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_57, 1) || unk_0xD9C1758D86688CEA(iLocal_57, unk_0xBC25C936A095B5BA(), 1))
		{
			return 1;
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_61))
	{
		if (unk_0x1D403DFADBC2DE3C(iLocal_61, 0))
		{
			return 1;
		}
		else if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_61, 1) || unk_0xD9C1758D86688CEA(iLocal_61, unk_0xBC25C936A095B5BA(), 1))
		{
			return 1;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_70 - 1))
	{
		if (unk_0x724D816EA203A79E(iLocal_56[iVar0]))
		{
			if (unk_0x36CEFBE9B745A58D(iLocal_56[iVar0]))
			{
				return 1;
			}
			else if (func_177(iLocal_56[iVar0], 1, 1116471296, 1126825984, 0, 0, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_177(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0xB0E8
{
	vector3 vVar0;
	
	if (func_15(unk_0xBC25C936A095B5BA()) && func_15(iParam0))
	{
		if (unk_0xD9C1758D86688CEA(iParam0, unk_0xBC25C936A095B5BA(), 1))
		{
			return 1;
		}
		if (func_191(iParam0, bParam1, bParam5, bParam6, bParam7))
		{
			return 1;
		}
		if (!unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 6))
		{
			if (unk_0xABB2AFD7539464EA(unk_0xBC25C936A095B5BA()))
			{
				vVar0 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) - unk_0x541C2AEF053615BC(iParam0, true) };
				if ((((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y)) + (vVar0.z * vVar0.z)) <= 5f)
				{
					return func_190(unk_0xBC25C936A095B5BA(), iParam0, fParam2);
				}
			}
		}
		if (bParam4)
		{
			return 0;
		}
		else if (func_178(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_178(int iParam0, float fParam1)//Position - 0xB1A3
{
	float fVar0;
	
	if (func_15(unk_0xBC25C936A095B5BA()) && func_15(iParam0))
	{
		if (func_189(iParam0) || unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), iParam0))
		{
			if (unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_179(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_179(int iParam0, float fParam1)//Position - 0xB219
{
	return func_180(iParam0, unk_0xBC25C936A095B5BA(), fParam1, 1, 250, 7);
}

bool func_180(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0xB231
{
	var uVar0;
	vector3 vVar1;
	int iVar2;
	
	iVar2 = func_188(iParam0, iParam1);
	if (!func_15(iParam0) || !func_15(iParam1))
	{
		if (iVar2 != -1)
		{
			func_187(&(Local_40[iVar2 /*4*/]));
		}
		return 0;
	}
	if (!func_184(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar2 == -1)
	{
		iVar2 = func_183();
		if (iVar2 == -1)
		{
			return 0;
		}
		Local_40[iVar2 /*4*/].f_1 = iParam0;
		Local_40[iVar2 /*4*/].f_2 = iParam1;
	}
	vVar1 = { unk_0x823166D9421223CA(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_181(&(Local_40[iVar2 /*4*/]), vVar1, iParam1, &(Local_40[iVar2 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0x105601648511CC64() - Local_40[iVar2 /*4*/].f_3) < iParam4);
}

int func_181(var uParam0, vector3 vParam1, int iParam2, var uParam3, int iParam4, int iParam5)//Position - 0xB2F2
{
	var uVar0;
	vector3 vVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = 0;
	if (!func_15(iParam2))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		vVar1 = { func_182(iParam2, iParam5) };
		*uParam0 = unk_0xA20E4A82503CECB3(vParam1, vVar1 + vVar1 - vParam1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam4, 7);
		return 0;
	}
	iVar4 = unk_0xB0695CD48A28A3A9(*uParam0, &uVar0, &vVar1, &uVar2, &iVar3);
	if (iVar4 == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (iVar4 == 1)
	{
		return 0;
	}
	*uParam0 = 0;
	if (unk_0x386592AF38881675(iVar3))
	{
		func_15(iVar3);
		if (unk_0x399F7937FFE4DEBF(iVar3) == iParam2)
		{
			if (bLocal_41)
			{
				unk_0xD1FD19DF6D5B1300(vParam1, unk_0x541C2AEF053615BC(iParam2, true), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam3 = unk_0x105601648511CC64();
			return 1;
		}
		return 0;
	}
	if (unk_0xD27AC0E9B78CFDD7(iVar3))
	{
		func_15(iVar3);
		if (unk_0x5237AF95232D78C5(iParam2, 0))
		{
			if (unk_0x233ED4CD1F1A42C1(iVar3) == unk_0x9FE9D386222EEE47(iParam2, 0))
			{
				if (bLocal_41)
				{
					unk_0xD1FD19DF6D5B1300(vParam1, unk_0x541C2AEF053615BC(iParam2, true), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam3 = unk_0x105601648511CC64();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_182(int iParam0, int iParam1)//Position - 0xB41E
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = unk_0x491B2241281A03B7(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0x541C2AEF053615BC(iParam0, true);
	}
	else if (iParam1 == 1)
	{
		return unk_0x823166D9421223CA(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0x823166D9421223CA(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0x823166D9421223CA(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0x823166D9421223CA(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0x823166D9421223CA(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0x823166D9421223CA(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0x541C2AEF053615BC(iParam0, true);
}

int func_183()//Position - 0xB4E3
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_40)
	{
		if ((Local_40[iVar0 /*4*/] == 0 && Local_40[iVar0 /*4*/].f_1 == 0) && Local_40[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_184(int iParam0, int iParam1, float fParam2, int iParam3)//Position - 0xB52D
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { func_186(unk_0x541C2AEF053615BC(iParam1, true) - unk_0x541C2AEF053615BC(iParam0, true)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		vVar1 = { unk_0xF90427F311003E57(iParam0) };
	}
	else
	{
		vVar1 = { func_186(unk_0x823166D9421223CA(iParam0, 31086, 0f, 5f, 0f) - unk_0x823166D9421223CA(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_185(vVar1, vVar0);
	if (fVar2 <= SYSTEM::COS((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_185(vector3 vParam0, vector3 vParam1)//Position - 0xB5BE
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_186(vector3 vParam0)//Position - 0xB5DF
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

void func_187(var uParam0)//Position - 0xB61E
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_188(int iParam0, int iParam1)//Position - 0xB639
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_40)
	{
		if (Local_40[iVar0 /*4*/].f_1 == iParam0 && Local_40[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_189(int iParam0)//Position - 0xB678
{
	if (unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), iParam0) && unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 6))
	{
		return 1;
	}
	return 0;
}

bool func_190(int iParam0, int iParam1, float fParam2)//Position - 0xB6A0
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { unk_0xF90427F311003E57(iParam0) };
	vVar1 = { unk_0x541C2AEF053615BC(iParam1, true) - unk_0x541C2AEF053615BC(iParam0, true) };
	return (((vVar0.x * vVar1.x) + (vVar0.y * vVar1.y)) / SYSTEM::VDIST(vVar1, 0f, 0f, 0f)) > SYSTEM::COS(fParam2);
}

int func_191(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0xB6E7
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 8f;
	fVar1 = 15f;
	if (bParam1 == 0)
	{
		fVar0 = 1.86f;
		fVar1 = 1.86f;
	}
	if (bParam2)
	{
		fVar0 = 2f;
	}
	if (func_15(unk_0xBC25C936A095B5BA()) && func_15(iParam0))
	{
		unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_195(iParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_192(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (unk_0x75F706B6889D7D86(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x32E373675659FDB0(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x04880508C862E589(unk_0x541C2AEF053615BC(iParam0, true), fVar0, 1))
					{
						return 1;
					}
				}
			}
			else
			{
				if (bParam1)
				{
					fVar0 = 1.86f;
					fVar1 = 1.86f;
				}
				if (func_195(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_192(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_192(int iParam0, float fParam1, bool bParam2, bool bParam3)//Position - 0xB7E2
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { unk_0x541C2AEF053615BC(iParam0, true) };
	vVar1 = { vVar0 };
	vVar0.x = (vVar0.x - fParam1);
	vVar0.y = (vVar0.y - fParam1);
	vVar0.z = (vVar0.z - fParam1);
	vVar1.x = (vVar1.x + fParam1);
	vVar1.y = (vVar1.y + fParam1);
	vVar1.z = (vVar1.z + fParam1);
	if (bParam2)
	{
		if (((unk_0x882DD30F83E61E2F(unk_0x541C2AEF053615BC(iParam0, true), joaat("weapon_grenade"), fParam1, 1) || unk_0x882DD30F83E61E2F(unk_0x541C2AEF053615BC(iParam0, true), joaat("weapon_molotov"), fParam1, 1)) || unk_0x882DD30F83E61E2F(unk_0x541C2AEF053615BC(iParam0, true), joaat("weapon_smokegrenade"), fParam1, 1)) || unk_0x882DD30F83E61E2F(unk_0x541C2AEF053615BC(iParam0, true), joaat("weapon_stickybomb"), 5f, 1))
		{
			if (bParam3)
			{
				if (func_193(iParam0, fParam1))
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
	}
	else
	{
		if (bParam3)
		{
			if (func_193(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x876474582C5DECDE(vVar0, vVar1, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_193(int iParam0, float fParam1)//Position - 0xB8EE
{
	var uVar0;
	vector3 vVar1;
	
	if ((((unk_0x532D2AB42B013CC0(iParam0, joaat("weapon_grenade"), fParam1, &vVar1, &uVar0, 0) || unk_0x532D2AB42B013CC0(iParam0, joaat("weapon_smokegrenade"), fParam1, &vVar1, &uVar0, 0)) || unk_0x532D2AB42B013CC0(iParam0, joaat("weapon_bzgas"), fParam1, &vVar1, &uVar0, 0)) || unk_0x532D2AB42B013CC0(iParam0, joaat("weapon_stickybomb"), fParam1, &vVar1, &uVar0, 0)) || unk_0x532D2AB42B013CC0(iParam0, joaat("weapon_molotov"), fParam1, &vVar1, &uVar0, 0))
	{
		if (func_194(iParam0, vVar1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_194(int iParam0, vector3 vParam1, float fParam2, int iParam3)//Position - 0xB983
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { func_186(vParam1 - unk_0x541C2AEF053615BC(iParam0, true)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		vVar1 = { unk_0xF90427F311003E57(iParam0) };
	}
	else
	{
		vVar1 = { func_186(unk_0x823166D9421223CA(iParam0, 31086, 0f, 5f, 0f) - unk_0x823166D9421223CA(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_185(vVar1, vVar0);
	if (fVar2 <= SYSTEM::COS((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

int func_195(int iParam0, bool bParam1, float fParam2, float fParam3)//Position - 0xBA11
{
	if (bParam1)
	{
		if (unk_0x32E373675659FDB0(unk_0xBC25C936A095B5BA()))
		{
			if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (unk_0x04880508C862E589(unk_0x541C2AEF053615BC(iParam0, true), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

int func_196(int iParam0, int iParam1, int iParam2)//Position - 0xBA59
{
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0) && !unk_0x1D403DFADBC2DE3C(iParam1, 0))
	{
		if (unk_0x25EF720B1CAB1E23(iParam0, iParam1))
		{
			if (unk_0x3187EF5798B5D209(iParam1, iParam2, 0) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_197()//Position - 0xBA97
{
	switch (Local_43)
	{
		case 5:
			return unk_0xFA30DFD0084E92FE(Global_19B04.f_6173.f_2, 0);
			break;
		
		case 6:
			return unk_0xFA30DFD0084E92FE(Global_19B04.f_6173.f_2, 1);
			break;
		
		case 7:
			return unk_0xFA30DFD0084E92FE(Global_19B04.f_6173.f_2, 2);
			break;
		
		case 8:
			return unk_0xFA30DFD0084E92FE(Global_19B04.f_6173.f_2, 3);
			break;
		
		case 0:
			return unk_0xFA30DFD0084E92FE(Global_19B04.f_6176.f_3, 0);
			break;
		
		case 1:
			return unk_0xFA30DFD0084E92FE(Global_19B04.f_6176.f_3, 1);
			break;
		
		case 2:
			return unk_0xFA30DFD0084E92FE(Global_19B04.f_6176.f_3, 2);
			break;
		
		case 3:
			return unk_0xFA30DFD0084E92FE(Global_19B04.f_6176.f_3, 3);
			break;
		
		case 4:
			return unk_0xFA30DFD0084E92FE(Global_19B04.f_6176.f_3, 4);
			break;
	}
	return 0;
}

void func_198()//Position - 0xBB91
{
	iLocal_42 = 0;
	iLocal_45 = 0;
	bLocal_52 = false;
	bLocal_53 = false;
	iLocal_49 = 0;
	iLocal_50 = 0;
	iLocal_51 = 0;
	func_200(1);
	unk_0xD0FC9D284379BED4("WORLD_VEHICLE_PARK_PERPENDICULAR_NOSE_IN", 0);
	unk_0xD0FC9D284379BED4("WORLD_VEHICLE_PARK_PARALLEL", 0);
	if (Local_43 == 1)
	{
		iLocal_89 = func_199(374.0083f, 279.5919f, 102.3306f, 40f);
		unk_0xEDAD35A0D81ED3FB(374.0083f, 279.5919f, 102.3306f, 25f, 0, 0, 0, 0, false, 0);
	}
	if (Local_43.f_1 == 1 || Local_43.f_1 == 2)
	{
		iLocal_88 = func_199(vLocal_44, 60f);
	}
}

int func_199(vector3 vParam0, float fParam1)//Position - 0xBC27
{
	vector3 vVar0;
	
	vVar0 = { (fParam1 / 2f), (fParam1 / 2f), (fParam1 / 2f) };
	return unk_0x1DAA351326EA3537(vParam0 - vVar0, vParam0 + vVar0, 0, 1, 1, 1);
}

void func_200(bool bParam0)//Position - 0xBC59
{
	if (bParam0)
	{
		switch (Local_43)
		{
			case 0:
			case 1:
			case 2:
			case 3:
				func_172(&uLocal_90, joaat("banshee"));
				func_172(&uLocal_90, joaat("feltzer2"));
				func_172(&uLocal_90, joaat("sentinel"));
				break;
			
			case 4:
				func_172(&uLocal_90, joaat("bati"));
				func_172(&uLocal_90, joaat("ruffian"));
				break;
			
			case 5:
			case 6:
			case 7:
			case 8:
				func_172(&uLocal_90, joaat("seashark"));
				break;
		}
	}
	else
	{
		func_201(&uLocal_90);
	}
}

void func_201(var uParam0)//Position - 0xBCF7
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*18*/], 30))
		{
			func_202(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_91 = 1;
}

void func_202(var uParam0)//Position - 0xBD30
{
	func_203(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_203(int iParam0, char* sParam1, int iParam2)//Position - 0xBD47
{
	if (unk_0xFA30DFD0084E92FE(iParam0, 30))
	{
		switch (func_164(iParam0))
		{
			case 0:
				unk_0x2CA123B0622F495C(iParam2);
				break;
			
			case 1:
				unk_0x4EA570997E107F35(sParam1);
				break;
			
			case 2:
				unk_0xFC4EC4916831BFC8(sParam1);
				break;
			
			case 3:
				unk_0x786556581D95BCB2(sParam1);
				break;
			
			case 4:
				unk_0x4F5DAC981AF98536(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x4CE01E22F13D3913(sParam1);
				break;
			
			case 6:
				unk_0xC32C243942383443();
				break;
			
			case 7:
				unk_0xE0BCC382FA9C9FF7(iParam2);
				break;
			
			case 8:
				unk_0x841D233D3CE81152(iParam2, unk_0xFA30DFD0084E92FE(iParam0, 26));
				break;
			
			case 9:
				unk_0x8E5F062750135AD1();
				break;
			
			default:
				break;
		}
	}
}

int func_204(int iParam0)//Position - 0xBE07
{
	switch (iParam0)
	{
		case 0:
			return unk_0xFA30DFD0084E92FE(Global_19B04.f_6176.f_1, 0);
			break;
		
		case 1:
			return unk_0xFA30DFD0084E92FE(Global_19B04.f_6176.f_1, 1);
			break;
		
		case 2:
			return unk_0xFA30DFD0084E92FE(Global_19B04.f_6176.f_1, 2);
			break;
		
		case 3:
			return unk_0xFA30DFD0084E92FE(Global_19B04.f_6176.f_1, 3);
			break;
		
		case 4:
			return unk_0xFA30DFD0084E92FE(Global_19B04.f_6176.f_1, 4);
			break;
	}
	return 0;
}

bool func_205(int iParam0, int iParam1)//Position - 0xBE99
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

void func_206()//Position - 0xBEE6
{
	if (func_207(func_208(86, 0), vLocal_44, 1f, 0))
	{
		Local_43 = 0;
		Local_43.f_1 = 2;
		Local_43.f_3 = 100;
		Local_43.f_4 = 20;
	}
	else if (func_207(func_208(87, 0), vLocal_44, 1f, 0))
	{
		Local_43 = 1;
		Local_43.f_1 = 2;
		Local_43.f_3 = 500;
		Local_43.f_4 = 18;
	}
	else if (func_207(func_208(88, 0), vLocal_44, 1f, 0))
	{
		Local_43 = 2;
		Local_43.f_1 = 2;
		Local_43.f_3 = 1000;
		Local_43.f_4 = 2;
	}
	else if (func_207(func_208(89, 0), vLocal_44, 1f, 0))
	{
		Local_43 = 3;
		Local_43.f_1 = 2;
		Local_43.f_3 = 1250;
		Local_43.f_4 = 4;
	}
	else if (func_207(func_208(90, 0), vLocal_44, 1f, 0))
	{
		Local_43 = 4;
		Local_43.f_1 = 1;
		Local_43.f_3 = 1500;
		Local_43.f_4 = 5;
	}
	else if (func_207(func_208(82, 0), vLocal_44, 1f, 0))
	{
		Local_43 = 5;
		Local_43.f_1 = 3;
		Local_43.f_3 = 0;
		Local_43.f_4 = 16;
	}
	else if (func_207(func_208(83, 0), vLocal_44, 1f, 0))
	{
		Local_43 = 6;
		Local_43.f_1 = 3;
		Local_43.f_3 = 0;
		Local_43.f_4 = 13;
	}
	else if (func_207(func_208(84, 0), vLocal_44, 1f, 0))
	{
		Local_43 = 7;
		Local_43.f_1 = 3;
		Local_43.f_3 = 0;
		Local_43.f_4 = 15;
		Local_43.f_5 = 1;
	}
	else if (func_207(func_208(85, 0), vLocal_44, 1f, 0))
	{
		Local_43 = 8;
		Local_43.f_1 = 3;
		Local_43.f_4 = 24;
		Local_43.f_3 = 0;
		Local_43.f_5 = 1;
	}
	else
	{
		func_209(0);
	}
}

int func_207(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0xC080
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

Vector3 func_208(int iParam0, int iParam1)//Position - 0xC0FB
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0f, 0f, 0f;
	}
	return Global_6416[iVar0 /*23*/][iParam1 /*3*/];
}

void func_209(bool bParam0)//Position - 0xC139
{
	int iVar0;
	int iVar1;
	
	if (!iLocal_46)
	{
		unk_0xF04F2EB4128A4367(0);
		iLocal_46 = 1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (func_15(iLocal_56[iVar0]))
		{
			unk_0xA4E856A8CD53B8DF(iLocal_56[iVar0]);
			unk_0x8CE2798B9A7027EC(iLocal_56[iVar0], 1193033728, 0);
			unk_0x2E35C4FA5F0ED22F(iLocal_56[iVar0], false);
			unk_0x02537C8C1BEEB477(&(iLocal_56[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_15(iLocal_69[iVar0]))
		{
			if (func_15(iLocal_68[iVar0]))
			{
				unk_0xA4E856A8CD53B8DF(iLocal_69[iVar0]);
				if (unk_0xE7B3A320107C1379(unk_0x6F79ECA8C83E4357(iLocal_68[iVar0])))
				{
					unk_0x625842570605740F(iLocal_68[iVar0], false);
				}
				unk_0x204BA7B1C7DD25F4(iLocal_69[iVar0], iLocal_68[iVar0], 20f, 786599);
				unk_0x22321800954A532E(iLocal_69[iVar0], true);
				unk_0x2E35C4FA5F0ED22F(iLocal_69[iVar0], false);
				unk_0x02537C8C1BEEB477(&(iLocal_69[iVar0]));
				unk_0x1E7A09C1710FB071(&(iLocal_68[iVar0]));
			}
		}
		iVar0++;
	}
	if (func_15(iLocal_58))
	{
		if (func_15(iLocal_57))
		{
			unk_0xA4E856A8CD53B8DF(iLocal_58);
			unk_0x91629AC1E1F78419(iLocal_58, 1, true);
			unk_0x204BA7B1C7DD25F4(iLocal_58, iLocal_57, 15f, 786599);
			unk_0x22321800954A532E(iLocal_58, true);
			unk_0x2E35C4FA5F0ED22F(iLocal_58, false);
			unk_0x02537C8C1BEEB477(&iLocal_58);
			unk_0x1E7A09C1710FB071(&iLocal_57);
		}
	}
	if (func_15(iLocal_61))
	{
		unk_0x1E7A09C1710FB071(&iLocal_61);
	}
	switch (Local_43)
	{
		case 5:
			func_212(82, 0, 0);
			unk_0xF0059F27F7BB6680(&(Global_19B04.f_6173.f_2), 0);
			break;
		
		case 6:
			func_212(83, 0, 0);
			unk_0xF0059F27F7BB6680(&(Global_19B04.f_6173.f_2), 1);
			break;
		
		case 7:
			func_212(84, 0, 0);
			unk_0xF0059F27F7BB6680(&(Global_19B04.f_6173.f_2), 2);
			break;
		
		case 8:
			func_212(85, 0, 0);
			unk_0xF0059F27F7BB6680(&(Global_19B04.f_6173.f_2), 3);
			break;
		
		case 0:
			func_212(86, 0, 0);
			unk_0xF0059F27F7BB6680(&(Global_19B04.f_6176.f_3), 0);
			break;
		
		case 1:
			func_212(87, 0, 0);
			unk_0xF0059F27F7BB6680(&(Global_19B04.f_6176.f_3), 1);
			break;
		
		case 2:
			func_212(88, 0, 0);
			unk_0xF0059F27F7BB6680(&(Global_19B04.f_6176.f_3), 2);
			break;
		
		case 3:
			func_212(89, 0, 0);
			unk_0xF0059F27F7BB6680(&(Global_19B04.f_6176.f_3), 3);
			break;
		
		case 4:
			func_212(90, 0, 0);
			unk_0xF0059F27F7BB6680(&(Global_19B04.f_6176.f_3), 4);
			break;
	}
	if (iLocal_45)
	{
		unk_0x7456702622C62EA0(1);
	}
	unk_0x363092112FA508E2(unk_0x4D8215BCA285185C(10), 0);
	if (iLocal_54)
	{
		unk_0x1549CEF3D921CF97(1);
	}
	if (iLocal_76 && !bParam0)
	{
		iVar1 = unk_0xFC1CAE18F3ECBF2D();
		if (unk_0x6A9CDB766DF7216F(iVar1))
		{
			if (!unk_0x8CC5A4A5615C6420(iVar1))
			{
				unk_0xDDCAA2E64649E083(iVar1, true, 0);
			}
		}
	}
	if (!bParam0)
	{
		func_200(0);
	}
	if (iLocal_47)
	{
		unk_0x0B26CF9D19F91B70(vLocal_83, vLocal_84, 1);
		unk_0x4806A94C8ED574C3(vLocal_85, vLocal_86, fLocal_87, 1);
		iLocal_47 = 0;
	}
	unk_0xD0FC9D284379BED4("WORLD_VEHICLE_PARK_PERPENDICULAR_NOSE_IN", 1);
	unk_0xD0FC9D284379BED4("WORLD_VEHICLE_PARK_PARALLEL", 1);
	if (Local_43 == 1)
	{
		unk_0x483687B0FCA5415A(iLocal_89, 0);
	}
	if (Local_43.f_1 == 1 || Local_43.f_1 == 2)
	{
		unk_0x483687B0FCA5415A(iLocal_88, 0);
	}
	else
	{
		unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 170, false);
	}
	func_210(&uLocal_90, 0);
	unk_0x95E4B6F3ED223F5A();
}

void func_210(var uParam0, bool bParam1)//Position - 0xC480
{
	int iVar0;
	
	if (!bParam1)
	{
		func_201(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_211(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_91 = 0;
	uParam0->f_92 = -1;
}

void func_211(var uParam0)//Position - 0xC4BB
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_212(int iParam0, bool bParam1, bool bParam2)//Position - 0xC4D4
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

