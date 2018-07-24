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
	float fLocal_12 = 0f;
	float fLocal_13 = 0f;
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
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33[21] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	float fLocal_34 = 0f;
	vector3 vLocal_35 = { 0f, 0f, 0f };
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	struct<9> Local_38 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<9> Local_39 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	vector3 vLocal_40 = { 0f, 0f, 0f };
	vector3 vLocal_41 = { 0f, 0f, 0f };
	vector3 vLocal_42 = { 0f, 0f, 0f };
	float fLocal_43 = 0f;
	float fLocal_44 = 0f;
	float fLocal_45 = 0f;
	float fLocal_46 = 0f;
	float fLocal_47 = 0f;
	int iLocal_48 = 0;
	bool bLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	char* sLocal_57 = NULL;
	int iLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	float fLocal_61 = 0f;
	float fLocal_62 = 0f;
	float fLocal_63 = 0f;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	bool bLocal_88 = 0;
	float fLocal_89 = 0f;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	float fLocal_98 = 0f;
	float fLocal_99 = 0f;
	float fLocal_100 = 0f;
	float fLocal_101 = 0f;
	float fLocal_102 = 0f;
	float fLocal_103 = 0f;
	float fLocal_104 = 0f;
	float fLocal_105 = 0f;
	int iLocal_106[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_107 = 0;
	struct<68> Local_108 = { 0, 0, 1132396544, 1132396544, 1132396544, 0, -1082130432, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1092616192 } ;
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
	var uLocal_129 = 10;
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
	var uLocal_140 = 2;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 8;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 8;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	float fLocal_162 = 0f;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	vector3 vLocal_169 = { 0f, 0f, 0f };
	int iLocal_170[2] = { 0, 0 };
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	int iLocal_177 = 0;
	bool bLocal_178 = 0;
	bool bLocal_179 = 0;
	bool bLocal_180 = 0;
	int iLocal_181 = 0;
	int iLocal_182 = 0;
	bool bLocal_183 = 0;
	int iLocal_184 = 0;
	int iLocal_185 = 0;
	bool bLocal_186 = 0;
	bool bLocal_187 = 0;
	bool bLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	bool bLocal_193 = 0;
	var uLocal_194 = 0;
	int iLocal_195 = 0;
	int iLocal_196 = 0;
	int iLocal_197 = 0;
	int iLocal_198 = 0;
	int iLocal_199 = 0;
	int iLocal_200 = 0;
	int iLocal_201 = 0;
	int iLocal_202 = 0;
	int iLocal_203 = 0;
	int iLocal_204 = 0;
	var uLocal_205 = 0;
	int iLocal_206 = 0;
	int iLocal_207 = 0;
	int iLocal_208 = 0;
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
	vector3 vLocal_239 = { 0f, 0f, 0f };
	vector3 vLocal_240 = { 0f, 0f, 0f };
	vector3 vLocal_241 = { 0f, 0f, 0f };
	vector3 vLocal_242 = { 0f, 0f, 0f };
	vector3 vLocal_243 = { 0f, 0f, 0f };
	vector3 vLocal_244 = { 0f, 0f, 0f };
	float fLocal_245 = 0f;
	float fLocal_246 = 0f;
	float fLocal_247 = 0f;
	float fLocal_248 = 0f;
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	char* sLocal_251 = NULL;
	char* sLocal_252 = NULL;
	int iLocal_253 = 0;
	char* sLocal_254 = NULL;
	char* sLocal_255 = NULL;
	char* sLocal_256[3] = { NULL, NULL, NULL };
	char* sLocal_257[3] = { NULL, NULL, NULL };
	char* sLocal_258[3] = { NULL, NULL, NULL };
	char* sLocal_259[3] = { NULL, NULL, NULL };
	struct<5> Local_260 = { 0, 0, 0, 0, 0 } ;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	struct<460> Var0;
	int iVar1;
	struct<4> Var2;
	vector3 vVar3;
	struct<25> Var4;
	struct<682> Var5;
	struct<532> Var6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	float fVar15;
	float fVar16;
	vector3 vVar17;
	vector3 vVar18;
	vector3 vVar19;
	vector3 vVar20;
	vector3 vVar21;
	char* sVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	var uVar26[20];
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	float fVar34;
	int iVar35;
	
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
	iLocal_28 = joaat("prop_dart_1");
	iLocal_29 = joaat("prop_dart_2");
	iLocal_32 = joaat("prop_dart_bd_cab_01");
	fLocal_34 = 0.063f;
	vLocal_35 = { -0.0035f, 0f, -0.001f };
	iLocal_37 = joaat("prop_target_bull");
	vLocal_42 = { 987.8541f, -98.4173f, 73.8599f };
	fLocal_47 = 0.1f;
	iLocal_58 = 3;
	fLocal_61 = 80f;
	fLocal_62 = 140f;
	fLocal_63 = 180f;
	iLocal_69 = 1;
	iLocal_70 = 65;
	iLocal_71 = 49;
	iLocal_72 = 64;
	iLocal_95 = 65;
	iLocal_97 = 660;
	fLocal_102 = 0.27f;
	fLocal_103 = 0.1f;
	fLocal_104 = -120f;
	fLocal_105 = 127f;
	fLocal_162 = ((0.05f + 0.275f) - 0.01f);
	vLocal_169 = { 500f, 500f, 500f };
	bLocal_180 = true;
	vLocal_241 = { -573.1373f, 294.0269f, 78.1765f };
	vLocal_242 = { -574.1169f, 292.7964f, 78.1766f };
	vLocal_243 = { 1995.295f, 3050.084f, 46.91535f };
	vLocal_244 = { 1995.488f, 3047.383f, 46.91535f };
	fLocal_245 = 172.6813f;
	fLocal_246 = 274.5094f;
	fLocal_247 = 142.6717f;
	fLocal_248 = 44.8785f;
	Var0.f_1 = 2;
	Var0.f_5 = 2;
	Var0.f_5.f_1 = 3;
	Var0.f_5.f_1.f_4F = 3;
	Var0.f_A4 = 3;
	Var0.f_101 = 16;
	Var0.f_1A6 = 2;
	Var0.f_1A9 = 2;
	Var0.f_1AD = 2;
	Var0.f_1B0 = 2;
	Var0.f_1B5 = 2;
	Var0.f_1B8 = 2;
	Var0.f_1BB = 2;
	Var0.f_1BE = 2;
	Var0.f_1C1 = 2;
	Var4.f_1 = 2;
	Var4.f_1.f_1 = 7;
	Var4.f_1.f_1.f_8 = 7;
	Var5.f_3 = 8;
	Var5.f_C = 8;
	Var5.f_15 = 4;
	Var5.f_1A.f_3 = 8;
	Var5.f_1A.f_C = 8;
	Var5.f_1A.f_15 = 4;
	Var5.f_48 = 3;
	Var5.f_48.f_2C.f_3.f_1 = 4;
	Var5.f_48.f_71 = 2;
	Var5.f_48.f_71.f_1.f_1 = 4;
	Var5.f_48.f_71.f_1.f_42.f_1 = 4;
	Var5.f_48.f_F6.f_6 = 12;
	Var5.f_48.f_F6.f_BB = 3;
	Var5.f_1FD.f_2 = 8;
	Var5.f_1FD.f_2.f_1.f_3 = 4;
	Var5.f_1FD.f_2.f_1.f_F.f_3 = 4;
	Var5.f_1FD.f_2.f_1.f_F.f_F.f_3 = 4;
	Var5.f_1FD.f_2.f_1.f_F.f_F.f_F.f_3 = 4;
	Var5.f_1FD.f_2.f_1.f_F.f_F.f_F.f_F.f_3 = 4;
	Var5.f_1FD.f_2.f_1.f_F.f_F.f_F.f_F.f_F.f_3 = 4;
	Var5.f_1FD.f_2.f_1.f_F.f_F.f_F.f_F.f_F.f_F.f_3 = 4;
	Var5.f_1FD.f_2.f_1.f_F.f_F.f_F.f_F.f_F.f_F.f_F.f_3 = 4;
	Var5.f_2A9 = 2;
	Var6.f_20 = 3;
	Var6.f_24 = 1;
	Var6.f_35 = 2;
	Var6.f_39 = 13;
	Var6.f_47 = 13;
	Var6.f_118 = 13;
	Var6.f_1E9 = 13;
	Var6.f_1F7 = 13;
	Var6.f_205 = 13;
	Var6.f_213 = 13;
	iVar13 = 0;
	sLocal_254 = "facials@gen_female@variations@happy";
	switch (func_489(unk_0xBC25C936A095B5BA()))
	{
		case 0:
			sLocal_255 = "facials@p_m_zero@variations@happy";
			break;
		
		case 1:
			sLocal_255 = "facials@p_m_one@variations@happy";
			break;
		
		case 2:
			sLocal_255 = "facials@p_m_two@variations@happy";
			break;
	}
	sLocal_256[0] = "mood_happy_1";
	sLocal_256[1] = "mood_happy_2";
	sLocal_256[2] = "mood_happy_3";
	sLocal_257[0] = "darts_outro_01_guy1";
	sLocal_257[1] = "darts_outro_02_guy2";
	sLocal_257[2] = "darts_outro_03_guy2";
	sLocal_258[0] = "darts_outro_01_guy2";
	sLocal_258[1] = "darts_outro_02_guy1";
	sLocal_258[2] = "darts_outro_03_guy1";
	sLocal_259[0] = "darts_outro_01_cam";
	sLocal_259[1] = "darts_outro_02_cam";
	sLocal_259[2] = "darts_outro_03_cam";
	iLocal_170[0] = unk_0xBC25C936A095B5BA();
	bLocal_183 = true;
	vVar17 = { 1992.293f, 3050.583f, 47.98973f };
	vVar18 = { -572.0406f, 294.1958f, 79.9374f };
	func_488();
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		iLocal_207 = 1;
		switch (unk_0x491B2241281A03B7(0, 2))
		{
			case 0:
				iLocal_204 = joaat("a_f_m_salton_01");
				break;
			
			case 1:
				iLocal_204 = joaat("a_f_o_salton_01");
				break;
		}
		iLocal_202 = 10;
		unk_0x8E25082A46F87892(unk_0xBC25C936A095B5BA(), joaat("weapon_unarmed"), true);
	}
	if (!unk_0x724D816EA203A79E(ScriptParam_260.f_4))
	{
		if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			if (iLocal_207 == 2)
			{
				ScriptParam_260 = { vVar18 };
				ScriptParam_260.f_3 = -0.09f;
			}
			else
			{
				ScriptParam_260 = { vVar17 };
				ScriptParam_260.f_3 = 57.78315f;
			}
			if (unk_0x70CF24CEFB0F53B0(ScriptParam_260, 5f, joaat("prop_dart_bd_cab_01"), 0))
			{
				ScriptParam_260.f_4 = unk_0xCE5CC3450F9879E0(ScriptParam_260, 5f, joaat("prop_dart_bd_cab_01"), 1, 0, 1);
				unk_0x5271836AA4495448(ScriptParam_260, 5f, joaat("prop_dart_bd_cab_01"), &ScriptParam_260, &vVar19, 0);
				ScriptParam_260.f_3 = vVar19.z;
			}
		}
	}
	else
	{
		vVar19 = { unk_0x541C2AEF053615BC(ScriptParam_260.f_4, true) };
	}
	if (!unk_0x1D403DFADBC2DE3C(func_487(), 0))
	{
		func_485(iLocal_202, 1);
		if (unk_0x5237AF95232D78C5(func_487(), 0))
		{
			unk_0xA3981DED4FC2E56E(func_487(), 0, 0);
		}
		iLocal_170[1] = func_487();
	}
	else
	{
		unk_0x25A523E067E06F54(1);
	}
	if (unk_0xE8A79675302ED812(67))
	{
		func_476();
		func_458(&Var0, &Var5, &Var6);
	}
	unk_0x0FD8C89650533D97(0);
	unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 0);
	func_456(1);
	iLocal_198 = func_453(func_489(iLocal_170[0]), 1);
	fVar15 = (SYSTEM::TO_FLOAT(iLocal_198) / 100f);
	fVar16 = (fVar15 * 1200f);
	iLocal_97 = SYSTEM::ROUND(fVar16);
	if (iLocal_97 < 660)
	{
		iLocal_97 = 660;
	}
	func_452(23, 1);
	while (true)
	{
		SYSTEM::WAIT(0);
		unk_0x4E0EC60D119222B1(2);
		unk_0xDE7B9CB38D019BF0();
		unk_0x6DB77F071B43C870(15, 0f, -0.0375f);
		if (iLocal_190 && Var0 < 13)
		{
			unk_0x5BB21DFF8E985392(Var4, Var4.f_12, Var4.f_15, Var4.f_18, Var4.f_18, 2);
		}
		if ((unk_0x36CEFBE9B745A58D(ScriptParam_260.f_5) && !unk_0x724D816EA203A79E(func_487())) || (unk_0x724D816EA203A79E(func_487()) && unk_0x36CEFBE9B745A58D(func_487())))
		{
			func_458(&Var0, &Var5, &Var6);
		}
		if (!unk_0x36CEFBE9B745A58D(iLocal_170[0]))
		{
			unk_0x2E9860A2B72187F5(iLocal_170[0], 239, 1);
			unk_0x2E9860A2B72187F5(iLocal_170[0], 124, 1);
			func_451();
			unk_0x9601F9343A2063DE(0);
			unk_0x9601F9343A2063DE(2);
			iVar14 = 0;
			while (iVar14 < unk_0x252B0CBDBF5803ED(unk_0xBC25C936A095B5BA(), &uVar26, -1))
			{
				if (uVar26[iVar14] != iLocal_170[1])
				{
					if (!unk_0x36CEFBE9B745A58D(uVar26[iVar14]))
					{
						unk_0x2E9860A2B72187F5(uVar26[iVar14], 240, 1);
					}
				}
				iVar14++;
			}
			switch (Var0)
			{
				case 0:
					unk_0x7456702622C62EA0(1);
					func_450(&(Var0.f_F3), &ScriptParam_260);
					func_449(Var0.f_F3.f_1, Var0.f_F3.f_4);
					if (unk_0x724D816EA203A79E(Var0.f_F3))
					{
						vLocal_239 = { unk_0xA4455714F3DCE207(Var0.f_F3, 0.7792f, -1.138f, 0.1814f) };
						vLocal_240 = { -7.9947f, 0f, (Var0.f_F3.f_4 + 36.19176f) };
						iLocal_84 = unk_0x585DE1CBEEB2D27D(26379945, vLocal_239, vLocal_240, 65f, 0, 2);
						unk_0x9DF315A9EFFF87AC(iLocal_84, 30f);
					}
					func_448();
					SYSTEM::SETTIMERA(0);
					Var0 = 1;
					break;
				
				case 1:
					if (SYSTEM::TIMERA() > 500 && !unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()))
					{
						unk_0x6C5F5B5F6894CCE3(ScriptParam_260, 0.5f, 1, 0, 0, false);
						if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
						{
							unk_0x02DAF06EA4F08219(&uLocal_205);
							unk_0xC5A6DFE2B8987B17(&uLocal_205);
							unk_0xA3981DED4FC2E56E(0, 0, 0);
							unk_0x535008C596714F9E(uLocal_205);
							unk_0xA8E6405305C0D7DF(unk_0xBC25C936A095B5BA(), uLocal_205);
						}
						vLocal_42 = { vLocal_42 };
						Var0 = 2;
					}
					break;
				
				case 2:
					iVar28 = 0;
					while (iVar28 < 2)
					{
						iVar29 = 0;
						while (iVar29 < 3)
						{
							func_447(&(Var0.f_5[iVar28 /*79*/][iVar29 /*26*/]), iVar28);
							iVar29++;
						}
						iVar28++;
					}
					iVar30 = 0;
					while (iVar30 < 3)
					{
						func_447(&(Var0.f_A4[iVar30 /*26*/]), 0);
						iVar30++;
					}
					iVar1 = 2;
					func_446(0);
					func_444(&Var4, iLocal_207, Var0.f_F3.f_1, Var0.f_F3.f_4);
					if (unk_0x724D816EA203A79E(Var0.f_F3))
					{
						vVar19 = { unk_0x1483995DFFF0DEEA(Var0.f_F3, Var4.f_12) };
					}
					func_441(&Var4, &Var5);
					unk_0xCB8EEC006EBFC1E7(0);
					Var0 = 3;
					break;
				
				case 3:
					if (func_438(&Var4, &Var5))
					{
						func_435(&(Var0.f_F3), &Var2, &vVar3, 0);
						iLocal_249 = func_489(iLocal_170[0]);
						switch (iLocal_249)
						{
							case 0:
								sLocal_251 = func_434("MICHAEL");
								if (!unk_0xFA30DFD0084E92FE(Global_19ADD, 0))
								{
									sVar22 = "darts_ig_intro_player_0_face";
								}
								else
								{
									sVar22 = "darts_ig_intro_alt1_player_0_face";
								}
								break;
							
							case 1:
								sLocal_251 = func_434("FRANKLIN");
								bLocal_187 = true;
								if (!unk_0xFA30DFD0084E92FE(Global_19ADD, 0))
								{
									sVar22 = "darts_ig_intro_player_1_face";
								}
								else
								{
									sVar22 = "darts_ig_intro_alt1_player_1_face";
								}
								break;
							
							case 2:
								sLocal_251 = func_434("TREVOR");
								if (!unk_0xFA30DFD0084E92FE(Global_19ADD, 0))
								{
									sVar22 = "darts_ig_intro_player_2_face";
								}
								else
								{
									sVar22 = "darts_ig_intro_alt1_player_2_face";
								}
								break;
						}
						if (!unk_0x1D403DFADBC2DE3C(func_487(), 0))
						{
							iLocal_250 = func_489(func_487());
							if (iLocal_250 == 145)
							{
								iLocal_250 = func_432(func_487());
							}
							switch (iLocal_250)
							{
								case 0:
									sLocal_252 = func_434("MICHAEL");
									break;
								
								case 1:
									sLocal_252 = func_434("FRANKLIN");
									break;
								
								case 2:
									sLocal_252 = func_434("TREVOR");
									break;
								
								case 19:
									sLocal_252 = func_434("LAMAR");
									unk_0xB0031DDAE4FF0BC3(func_487(), 5, 2, 0, 0);
									break;
								
								case 14:
									sLocal_252 = func_434("JIMMY");
									break;
								
								default:
									sLocal_252 = "NEW_GUY";
									break;
							}
						}
						else
						{
							iVar12 = unk_0x491B2241281A03B7(0, 200);
							if (iLocal_207 == 2)
							{
								if (iVar12 < 51)
								{
									sLocal_252 = func_434("RAYMOND");
									iLocal_253 = 954610991;
								}
								else if (iVar12 < 101)
								{
									sLocal_252 = func_434("JOHAN");
									iLocal_253 = 94453331;
								}
								else if (iVar12 < 151)
								{
									sLocal_252 = func_434("STAN");
									iLocal_253 = 1891555423;
								}
								else
								{
									sLocal_252 = func_434("VINCE");
									iLocal_253 = -1067630349;
								}
							}
							else if (iVar12 < 51)
							{
								sLocal_252 = func_434("KRISTY");
								iLocal_253 = 885327384;
							}
							else if (iVar12 < 101)
							{
								sLocal_252 = func_434("MARLENE");
								iLocal_253 = -1791000994;
							}
							else if (iVar12 < 151)
							{
								sLocal_252 = func_434("LORIE");
								iLocal_253 = 1954368234;
							}
							else
							{
								sLocal_252 = func_434("SHELLEY");
								iLocal_253 = -863218904;
							}
						}
						iLocal_36 = unk_0xB6896943DA475493(iLocal_37, vVar3, true, true, 0);
						Var0.f_1BE[0] = 0;
						Var0.f_1BE[1] = 0;
						Var0 = 4;
					}
					break;
				
				case 4:
					if (!unk_0xEEDFD35ED4A69396())
					{
						iVar27 = unk_0xB6896943DA475493(joaat("prop_dart_1"), vVar3, true, true, 0);
						func_429(Var0.f_F3.f_4, Var2, &uVar26, &ScriptParam_260);
						func_428(&Var4, sLocal_251, sLocal_252);
						unk_0xA4E856A8CD53B8DF(iLocal_170[1]);
						iLocal_206 = unk_0x585DE1CBEEB2D27D(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
						if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
						{
							unk_0x3E2B7D349B5735D3(unk_0xBC25C936A095B5BA(), -1871534317, 0, 0, 0);
						}
						func_427(&(Var0.f_101), 0, unk_0xBC25C936A095B5BA(), sLocal_251, 0, 1);
						if (unk_0x1D403DFADBC2DE3C(func_487(), 0))
						{
							if (iLocal_207 == 2)
							{
								func_427(&(Var0.f_101), 3, iLocal_170[1], "DartsBillLost1", 0, 1);
							}
							else
							{
								func_427(&(Var0.f_101), 3, iLocal_170[1], "DartsMelHick1", 0, 1);
							}
							iVar13 = -1;
						}
						else
						{
							func_427(&(Var0.f_101), 3, func_487(), sLocal_252, 0, 1);
							func_425(&iVar25);
							iVar13 = 6;
						}
						if (!unk_0xFA30DFD0084E92FE(Global_19ADD, 0))
						{
							iVar13 = -1;
						}
						else
						{
							iVar13 = 3;
						}
						func_424(&Var4, 0);
						Var0 = 5;
					}
					break;
				
				case 5:
					if ((((!unk_0x36CEFBE9B745A58D(iLocal_170[1]) && unk_0x7214F4879DF8A314(iLocal_170[0])) && !unk_0x5237AF95232D78C5(iLocal_170[0], 1)) && unk_0x7214F4879DF8A314(iLocal_170[1])) && !unk_0x5237AF95232D78C5(iLocal_170[1], 1))
					{
						bLocal_178 = func_422(&uLocal_194);
						if ((func_421() && unk_0x105601648511CC64() >= iLocal_196 + 1000) && iVar13 != 9)
						{
							if (!unk_0x17FAADF9916EF741() && !unk_0x422F9EDE839E6ABB())
							{
								unk_0x7A41D32A383895D8(500);
							}
						}
						if (unk_0x17FAADF9916EF741() && iVar13 != 9)
						{
							func_418(0);
							func_416();
							iVar13 = 9;
						}
						switch (iVar13)
						{
							case -1:
								if (!unk_0x36CEFBE9B745A58D(iLocal_170[1]))
								{
									iLocal_200 = unk_0xD0D858E538FD01C3(unk_0xA4455714F3DCE207(ScriptParam_260.f_4, 0.337842f, -0.243051f, -0.329731f), 0f, 0f, (unk_0x349C94FFF43E2979(ScriptParam_260.f_4) - 3.783146f), 2);
									iLocal_206 = unk_0x578D5D08EC980893("DEFAULT_ANIMATED_CAMERA", 0);
									unk_0xA4DB448107C6D171(iLocal_206, iLocal_200, "darts_ig_intro_cam", "mini@dartsintro");
									unk_0x348665177DBFB93B(iLocal_206, true);
									unk_0x062C9995BFD27B2A(true, false, 3000, 1, 0, 0);
									unk_0x44C98C11ED6DD327(iLocal_170[0]);
									unk_0x44C98C11ED6DD327(iLocal_170[1]);
									unk_0x49D46EE47C9CCB66(iLocal_170[0]);
									unk_0x49D46EE47C9CCB66(iLocal_170[1]);
									unk_0xB62398E536F695FC(iLocal_170[1], iLocal_200, "mini@dartsintro", "darts_ig_intro_guy1", 1000f, -1000f, 0, 0, 1148846080, 0);
									unk_0xB62398E536F695FC(iLocal_170[0], iLocal_200, "mini@dartsintro", "darts_ig_intro_guy2", 1000f, -1000f, 0, 0, 1148846080, 0);
									unk_0xE896C0AD02364F2A(iLocal_170[1], "mini@dartsintro", "darts_ig_intro_guy1_face", 8f, -8f, -1, 32, 0, 0, 0, 0);
									unk_0xE896C0AD02364F2A(iLocal_170[0], "mini@dartsintro", sVar22, 8f, -8f, -1, 32, 0, 0, 0, 0);
									unk_0xBEBE356CCD6268A1(iVar27, iLocal_200, "darts_ig_intro_dart", "mini@dartsintro", 1000f, 8f, 0, 1148846080);
									func_415(&iVar25);
									iVar13++;
								}
								break;
							
							case 0:
								if (unk_0x77FC50899603581D(iLocal_200))
								{
									if (!bVar9)
									{
										if (func_414(&iVar25) > 1.5f)
										{
											func_413(iLocal_170[0], "DARTS_REQUEST_GAME", 6);
											bVar9 = true;
											func_412(&iVar25);
										}
									}
									else if (!unk_0x9986AD62CA3DE747(iLocal_170[0]))
									{
										if (!bVar10)
										{
											if (!func_411(&iVar25))
											{
												func_425(&iVar25);
											}
											else if (func_414(&iVar25) > 0.5f)
											{
												func_410(iLocal_170[1]);
												func_412(&iVar25);
												bVar10 = true;
											}
										}
									}
									switch (iLocal_31)
									{
										case 0:
											func_415(&iVar25);
											func_409("DARTS_HOW_TO_2", -1);
											iLocal_31++;
											break;
										
										case 1:
											if (unk_0x8FD30584EB38411B(iLocal_200) > 0.25f)
											{
												func_415(&iVar25);
												func_409("DARTS_HOW_TO_3", -1);
												iLocal_31++;
											}
											break;
										
										case 2:
											if (unk_0x8FD30584EB38411B(iLocal_200) > 0.55f)
											{
												func_409("DARTS_HOW_3A", -1);
												iLocal_31++;
											}
											break;
										
										case 3:
											if (unk_0x8FD30584EB38411B(iLocal_200) > 0.85f)
											{
												func_409("DARTS_HOW_3A", -1);
												iLocal_31++;
											}
											break;
									}
									if (unk_0x8FD30584EB38411B(iLocal_200) > 0.95f)
									{
										iLocal_190 = 1;
										iVar13++;
									}
									else if ((unk_0x105601648511CC64() % 1000) < 50)
									{
									}
								}
								break;
							
							case 1:
								if (unk_0x8FD30584EB38411B(iLocal_200) > 0.99f)
								{
									if (!unk_0x36CEFBE9B745A58D(iLocal_170[1]))
									{
										func_406(Var0.f_F3.f_1, Var0.f_F3.f_4, func_408(2), func_407(0), 0, 1);
										iLocal_31 = 0;
										unk_0x7456702622C62EA0(1);
										unk_0x4EC087603E1DEF9C(iLocal_206, 0);
										unk_0xA4E856A8CD53B8DF(iLocal_170[0]);
										unk_0xA4E856A8CD53B8DF(iLocal_170[1]);
										unk_0x6C3BE67B02D72CDC(iVar27, -1000f, 0);
										unk_0xA35241BCE4C1A24B(&iVar27);
										unk_0xC1300D0F3A74E20B(func_405(0));
										func_412(&iVar25);
										Var0 = 6;
										iVar13 = 0;
									}
								}
								break;
							
							case 3:
								if (!unk_0x36CEFBE9B745A58D(iLocal_170[1]))
								{
									iLocal_200 = unk_0xD0D858E538FD01C3(unk_0xA4455714F3DCE207(ScriptParam_260.f_4, 0.337842f, -0.243051f, -0.329731f), 0f, 0f, (unk_0x349C94FFF43E2979(ScriptParam_260.f_4) - 3.783146f), 2);
									iLocal_206 = unk_0x578D5D08EC980893("DEFAULT_ANIMATED_CAMERA", 0);
									unk_0xA4DB448107C6D171(iLocal_206, iLocal_200, "darts_ig_intro_alt1_cam", "mini@dartsintro_alt1");
									unk_0x348665177DBFB93B(iLocal_206, true);
									unk_0x062C9995BFD27B2A(true, false, 3000, 1, 0, 0);
									unk_0x44C98C11ED6DD327(iLocal_170[0]);
									unk_0x44C98C11ED6DD327(iLocal_170[1]);
									unk_0x49D46EE47C9CCB66(iLocal_170[0]);
									unk_0x49D46EE47C9CCB66(iLocal_170[1]);
									unk_0xB62398E536F695FC(iLocal_170[1], iLocal_200, "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy1", 1000f, -1000f, 0, 0, 1148846080, 0);
									unk_0xB62398E536F695FC(iLocal_170[0], iLocal_200, "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy2", 1000f, -1000f, 0, 0, 1148846080, 0);
									unk_0xE896C0AD02364F2A(iLocal_170[1], "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy1_face", 8f, -8f, -1, 32, 0, 0, 0, 0);
									unk_0xE896C0AD02364F2A(iLocal_170[0], "mini@dartsintro_alt1", sVar22, 8f, -8f, -1, 32, 0, 0, 0, 0);
									unk_0xBEBE356CCD6268A1(iVar27, iLocal_200, "darts_ig_intro_alt1_dart", "mini@dartsintro_alt1", 1000f, 8f, 0, 1148846080);
									func_415(&iVar25);
									iVar13++;
								}
								break;
							
							case 4:
								if (unk_0x77FC50899603581D(iLocal_200))
								{
									if (!bVar9)
									{
										if (func_414(&iVar25) > 0.5f)
										{
											func_413(iLocal_170[0], "DARTS_REQUEST_GAME", 6);
											bVar9 = true;
											func_412(&iVar25);
										}
									}
									else if (!unk_0x9986AD62CA3DE747(iLocal_170[0]))
									{
										if (!bVar10)
										{
											if (!func_411(&iVar25))
											{
												func_425(&iVar25);
											}
											else if (func_414(&iVar25) > 0.25f)
											{
												func_410(iLocal_170[1]);
												func_412(&iVar25);
												bVar10 = true;
											}
										}
									}
									if (unk_0x8FD30584EB38411B(iLocal_200) > 0.95f)
									{
										iLocal_190 = 1;
										iVar13++;
									}
									else if ((unk_0x105601648511CC64() % 1000) < 50)
									{
									}
								}
								break;
							
							case 5:
								if (unk_0x8FD30584EB38411B(iLocal_200) > 0.99f)
								{
									if (!unk_0x36CEFBE9B745A58D(iLocal_170[1]))
									{
										func_404();
										unk_0x4EC087603E1DEF9C(iLocal_206, 0);
										unk_0xA4E856A8CD53B8DF(iLocal_170[0]);
										unk_0xA4E856A8CD53B8DF(iLocal_170[1]);
										unk_0x6C3BE67B02D72CDC(iVar27, -1000f, 0);
										unk_0xA35241BCE4C1A24B(&iVar27);
										unk_0xC1300D0F3A74E20B(func_405(0));
										func_412(&iVar25);
										Var0 = 6;
										iVar13 = 0;
									}
								}
								break;
							
							case 9:
								if (unk_0x17FAADF9916EF741())
								{
									iLocal_190 = 1;
									iLocal_31 = 0;
									unk_0x7456702622C62EA0(1);
									if (!unk_0x36CEFBE9B745A58D(iLocal_170[1]))
									{
										unk_0x641B19E156645A92(iLocal_170[0], Var2, 1, 0, 0, 1);
										unk_0x019CE76D5286C95C(iLocal_170[0], Var0.f_F3.f_4);
										unk_0x641B19E156645A92(iLocal_170[1], Var2.f_3, 1, 0, 0, 1);
										unk_0x019CE76D5286C95C(iLocal_170[1], Var0.f_F3.f_4);
										unk_0xA4E856A8CD53B8DF(iLocal_170[0]);
										unk_0xA4E856A8CD53B8DF(iLocal_170[1]);
									}
									unk_0x4EC087603E1DEF9C(iLocal_206, 0);
									unk_0x6C3BE67B02D72CDC(iVar27, -1000f, 0);
									unk_0xA35241BCE4C1A24B(&iVar27);
									if (!unk_0xFA30DFD0084E92FE(Global_19ADD, 0))
									{
										func_406(Var0.f_F3.f_1, Var0.f_F3.f_4, func_408(2), func_407(0), 0, 1);
									}
									else
									{
										func_404();
									}
									unk_0xC1300D0F3A74E20B(func_405(0));
									func_412(&iVar25);
									unk_0x829FA4611BD56B44(500);
									Var0 = 6;
									iVar13 = 0;
								}
								break;
							}
					}
					break;
				
				case 6:
					switch (iVar13)
					{
						case 0:
							iLocal_196 = unk_0x105601648511CC64();
							if (!unk_0x36CEFBE9B745A58D(iLocal_170[1]))
							{
								unk_0x641B19E156645A92(iLocal_170[0], Var2, 1, 0, 0, 1);
								unk_0x019CE76D5286C95C(iLocal_170[0], Var0.f_F3.f_4);
								unk_0x641B19E156645A92(iLocal_170[1], Var2.f_3, 1, 0, 0, 1);
								unk_0x019CE76D5286C95C(iLocal_170[1], Var0.f_F3.f_4);
							}
							unk_0xD6423910AAD8A379(func_405(1));
							iVar13 = 0;
							Var0 = 7;
							break;
						
						case 1:
							if ((unk_0x105601648511CC64() - iLocal_196) > 1500)
							{
								func_402(&(Var5.f_39), "DARTS_TITLE", 0, 4000, 12, 2, 0, 0);
								iVar13++;
							}
							break;
						
						case 2:
							if (!func_401(&(Var5.f_39), 1, 0))
							{
								unk_0xD6423910AAD8A379(func_405(1));
								iVar13 = 0;
								Var0 = 7;
							}
							break;
					}
					break;
				
				case 7:
					if (!unk_0xFA30DFD0084E92FE(Global_19ADD, 0))
					{
						if (func_398(&iVar1, &(Var0.f_F3), &(Var0.f_F9), &(Var0.f_1), &(Var0.f_A4), &iVar24))
						{
							unk_0xF0059F27F7BB6680(&Global_19ADD, 0);
							Var0 = 8;
						}
					}
					else
					{
						unk_0x348665177DBFB93B(iLocal_75, true);
						Var0 = 8;
					}
					break;
				
				case 8:
					if (unk_0x17FAADF9916EF741())
					{
						unk_0x829FA4611BD56B44(500);
					}
					switch (iVar13)
					{
						case 0:
							if (!unk_0x724D816EA203A79E(func_487()))
							{
								if (!unk_0xFA30DFD0084E92FE(Global_19ADD, 10))
								{
									unk_0xF0059F27F7BB6680(&Global_19ADD, 10);
								}
								else
								{
									unk_0x7CB6FD92BE491AD9(&Global_19ADD, 10);
								}
								func_396(&Var5);
								iVar13++;
							}
							else
							{
								func_396(&Var5);
								iVar13++;
							}
							break;
						
						case 1:
							if (unk_0x8ACB0C3FACC09467())
							{
								if (fLocal_89 != unk_0x3771EE4CB542D71E(0))
								{
									fLocal_89 = unk_0x3771EE4CB542D71E(0);
									unk_0x9DF315A9EFFF87AC(iLocal_75, func_395(fLocal_89));
									unk_0x9DF315A9EFFF87AC(iLocal_76, func_395(fLocal_89));
								}
							}
							if (func_335(&Var5, &(Var0.f_1C4), &(Var0.f_1C5)))
							{
								unk_0xC1300D0F3A74E20B(func_405(1));
								if (Var0.f_1C4 > 0)
								{
									iVar13 = 0;
									if (Var0.f_1C4 > 1 || Var0.f_1C5 > 1)
									{
										func_334(&Var4, 0, 0, 0, 0);
										bVar8 = true;
									}
									func_331(1, -1);
									Var0 = 9;
								}
								else if (Var0.f_1C4 < 0)
								{
									Var0 = 15;
								}
							}
							break;
					}
					break;
				
				case 9:
					if (func_324(&Var0, &Var4, &Var5))
					{
						Var0.f_F9.f_4 = 1;
						if (Global_19B04.f_49FD.f_5 >= 5 && Global_19B04.f_49FD.f_7 >= 0.8f)
						{
							Var0.f_F9.f_4 = 2;
						}
						else if (Global_19B04.f_49FD.f_5 >= 3 && Global_19B04.f_49FD.f_7 >= 0.66f)
						{
							Var0.f_F9.f_4 = 1;
						}
						else
						{
							Var0.f_F9.f_4 = 0;
						}
						if (func_323(Global_19B04.f_49FD.f_5, &iLocal_199))
						{
							func_322(&(Var5.f_29A), 24, 1);
						}
						fLocal_45 = func_321(Global_19B04.f_49FD.f_5);
						fLocal_46 = func_320(Global_19B04.f_49FD.f_5);
						fLocal_43 = fLocal_45;
						fLocal_44 = fLocal_46;
						iLocal_106[4]++;
						if (!unk_0x36CEFBE9B745A58D(iLocal_170[1]))
						{
							unk_0x49D46EE47C9CCB66(iLocal_170[1]);
							unk_0x641B19E156645A92(iLocal_170[1], Var2.f_3, 1, 0, 0, 1);
							unk_0x019CE76D5286C95C(iLocal_170[1], Var0.f_F3.f_4);
						}
						if (func_411(&iVar23))
						{
							func_412(&iVar23);
						}
						unk_0xD6423910AAD8A379(func_405(2));
						func_319(iLocal_170[1]);
						Var0 = 10;
						Var0.f_1 = 2;
					}
					break;
				
				case 10:
					if (unk_0x8ACB0C3FACC09467())
					{
						if (fLocal_89 != unk_0x3771EE4CB542D71E(0))
						{
							fLocal_89 = unk_0x3771EE4CB542D71E(0);
							unk_0x9DF315A9EFFF87AC(iLocal_75, func_395(fLocal_89));
							unk_0x9DF315A9EFFF87AC(iLocal_76, func_395(fLocal_89));
						}
					}
					if (!bLocal_188)
					{
						unk_0x522053D86D6E1C7A("mini@dartsoutro");
						bLocal_188 = true;
					}
					if (!iLocal_189)
					{
						if (bLocal_188)
						{
							if (!unk_0xF9E082857622D91E("mini@dartsoutro"))
							{
							}
							else
							{
								iLocal_189 = 1;
							}
						}
					}
					func_237(&Var0, &vVar3, &Var4, &Var5, &iVar23);
					break;
				
				case 11:
					switch (iVar13)
					{
						case 0:
							if (func_414(&(Var0.f_FE)) > 0.5f)
							{
								unk_0x7456702622C62EA0(1);
								unk_0xEB233A3B7635D2AC();
								func_236(unk_0xBC25C936A095B5BA());
								func_334(&Var4, Var0.f_1C1[0], Var0.f_1C1[1], Var0.f_1BE[0], Var0.f_1BE[1]);
								iVar31 = 0;
								while (iVar31 < 2)
								{
									iVar32 = 0;
									while (iVar32 < 3)
									{
										func_235(&(Var0.f_5[iVar31 /*79*/][iVar32 /*26*/]));
										iVar32++;
									}
									func_234(&Var4, iVar31);
									iVar31++;
								}
								if (Var0.f_1CB)
								{
									if (Var0.f_1C6)
									{
										func_232(&(Var5.f_3E), "DARTS_WINNER", "DARTS_SETW", 4000, 5, 12);
									}
									else
									{
										func_232(&(Var5.f_3E), "DARTS_LOSER", "DARTS_SETL", 4000, 5, 6);
									}
									Var0.f_1CB = 0;
								}
								else if (Var0.f_1C6)
								{
									func_232(&(Var5.f_3E), "DARTS_WINNER", "DARTS_LEGW", 4000, 5, 12);
								}
								else
								{
									func_232(&(Var5.f_3E), "DARTS_LOSER", "DARTS_LEGL", 4000, 5, 6);
								}
								fVar34 = unk_0x3771EE4CB542D71E(1);
								if (fVar34 > 2f)
								{
									vVar20 = { 1992.294f, 3047.577f, 46.21517f };
									vVar21 = { 0f, 0f, 138.74f };
								}
								else
								{
									vVar20 = { 1992.336f, 3047.924f, 46.21517f };
									vVar21 = { 0f, 0f, 136.74f };
								}
								iVar33 = func_231();
								iLocal_200 = unk_0xD0D858E538FD01C3(vVar20, vVar21, 2);
								iLocal_206 = unk_0x578D5D08EC980893("DEFAULT_ANIMATED_CAMERA", 0);
								unk_0xA4DB448107C6D171(iLocal_206, iLocal_200, sLocal_259[iVar33], "mini@dartsoutro");
								unk_0x348665177DBFB93B(iLocal_206, true);
								unk_0x062C9995BFD27B2A(true, false, 3000, 1, 0, 0);
								if (!unk_0x36CEFBE9B745A58D(iLocal_170[0]) && !unk_0x36CEFBE9B745A58D(iLocal_170[1]))
								{
									if (Var0.f_1C6)
									{
										if ((Var0.f_1B5[0] + Var0.f_1B5[1]) == 1)
										{
											iVar35 = 1;
										}
										else
										{
											iVar35 = 0;
										}
										unk_0xC4BA30B532FE260F(-1, "TENNIS_POINT_WON", "HUD_AWARDS", 1);
										func_230(&iLocal_170, iVar35);
										unk_0xB62398E536F695FC(iLocal_170[0], iLocal_200, "mini@dartsoutro", sLocal_257[iVar33], 1000f, -1.5f, 0, 0, 1148846080, 0);
										unk_0xB62398E536F695FC(iLocal_170[1], iLocal_200, "mini@dartsoutro", sLocal_258[iVar33], 1000f, -1.5f, 0, 0, 1148846080, 0);
										unk_0xE896C0AD02364F2A(unk_0xBC25C936A095B5BA(), sLocal_255, sLocal_256[unk_0x491B2241281A03B7(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
									}
									else
									{
										unk_0xC4BA30B532FE260F(-1, "OTHER_TEXT", "HUD_AWARDS", 1);
										func_229(&iLocal_170);
										unk_0xB62398E536F695FC(iLocal_170[1], iLocal_200, "mini@dartsoutro", sLocal_257[iVar33], 1000f, -1.5f, 0, 0, 1148846080, 0);
										unk_0xB62398E536F695FC(iLocal_170[0], iLocal_200, "mini@dartsoutro", sLocal_258[iVar33], 1000f, -1.5f, 0, 0, 1148846080, 0);
										unk_0xE896C0AD02364F2A(iLocal_170[1], sLocal_254, sLocal_256[unk_0x491B2241281A03B7(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
									}
								}
								iVar13++;
							}
							break;
						
						case 1:
							if (!func_227(&(Var5.f_3E), 1))
							{
								iVar13++;
							}
							break;
						
						case 2:
							func_412(&(Var0.f_FE));
							iLocal_184 = 0;
							unk_0xC1300D0F3A74E20B(func_405(3));
							func_404();
							if (unk_0xEF0E25DA0CB6E8FF(iLocal_206))
							{
								unk_0x4EC087603E1DEF9C(iLocal_206, 0);
							}
							iVar13 = 0;
							Var0 = 9;
							break;
					}
					break;
				
				case 12:
					if (func_414(&(Var0.f_FE)) > 0.92f)
					{
						func_40(&Var0, &Var5, &Var4, &Var6, bVar8);
					}
					break;
				
				case 13:
					uVar11 = func_10(&Var6, 0, 1065353216, 0, 0, 0);
					if (!unk_0x1D403DFADBC2DE3C(func_487(), 0))
					{
						unk_0xA4E856A8CD53B8DF(iLocal_170[1]);
						Var0 = 15;
					}
					switch (iVar13)
					{
						case 0:
							unk_0xA4E856A8CD53B8DF(iLocal_170[0]);
							if (!bLocal_186)
							{
								unk_0x062C9995BFD27B2A(false, bLocal_186, 3000, 1, 0, 0);
							}
							else
							{
								unk_0x9CB4DD3D88846081(0, 0, 3, 0);
							}
							unk_0xF3F01A78937DC905(0f);
							unk_0x2B9AEC08E469E384(0f, 1065353216);
							unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
							unk_0xEB233A3B7635D2AC();
							unk_0x56F2E1B5599188FA(iLocal_170[0], iLocal_170[1], 5000, 2049, 3);
							func_425(&iVar25);
							iVar13++;
							break;
						
						case 1:
							if (func_7(&iVar25) > 0.1f)
							{
								if (!bVar7)
								{
								}
								func_425(&iVar25);
								iVar13++;
							}
							break;
						
						case 2:
							if (func_7(&iVar25) > 0.3f)
							{
								if (!unk_0x36CEFBE9B745A58D(iLocal_170[1]))
								{
									if (!bVar7)
									{
										func_4(iLocal_170[0], "GENERIC_THANKS", 1, 4);
									}
								}
								func_425(&iVar25);
								iVar13++;
							}
							break;
						
						case 3:
							if (uVar11 || bVar7)
							{
								Var0 = 15;
								iVar13++;
							}
							break;
					}
					break;
				
				case 14:
					func_2(&Var5);
					if (unk_0x093484B35A948BFC(2, 201))
					{
						func_1(iLocal_170[1]);
						iLocal_203 = 2;
						bVar7 = true;
						if (unk_0x144E80F5C46A6B75(func_405(2)))
						{
							unk_0xC1300D0F3A74E20B(func_405(2));
						}
						Var0 = 13;
					}
					if (unk_0x093484B35A948BFC(2, 202))
					{
						if (Var0.f_1 == 2)
						{
							iLocal_55 = 0;
						}
						func_322(&(Var5.f_29A), 8, 0);
						Var0 = 10;
					}
					break;
				
				case 15:
					func_458(&Var0, &Var5, &Var6);
					break;
				}
		}
	}
}

void func_1(int iParam0)//Position - 0x1DE4
{
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		func_4(iParam0, "GAME_QUIT_EARLY", 0, 6);
	}
}

void func_2(var uParam0)//Position - 0x1E02
{
	if (!unk_0xE186ACC7BE9B244E())
	{
		if (!func_3(&(uParam0->f_29A), 8))
		{
			func_322(&(uParam0->f_29A), 8, 1);
			func_322(&(uParam0->f_29A), 15, 0);
			func_322(&(uParam0->f_29A), 16, 0);
			func_322(&(uParam0->f_29A), 17, 0);
		}
		unk_0xA0E8D942C29EF5DA();
		UI::_SET_WARNING_MESSAGE_2("DARTS_QUIT", "DARTS_QUIT_DET", 36, 0, 0, -1, 0, 0, 1, 0);
	}
	else if (func_3(&(uParam0->f_29A), 8))
	{
		func_322(&(uParam0->f_29A), 8, 0);
	}
}

bool func_3(var uParam0, int iParam1)//Position - 0x1E87
{
	return unk_0xFA30DFD0084E92FE(*uParam0, iParam1);
}

void func_4(int iParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x1E98
{
	if (!unk_0x1D403DFADBC2DE3C(func_487(), 0) || iParam2)
	{
		func_413(iParam0, sParam1, iParam3);
	}
	else if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		func_5(iParam0, sParam1, sLocal_57, iParam3);
	}
}

void func_5(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x1ED8
{
	unk_0x7E80A36CD8BDF4D1(iParam0, sParam1, sParam2, func_6(iParam3), 0);
}

int func_6(int iParam0)//Position - 0x1EF1
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

float func_7(int iParam0)//Position - 0x20E6
{
	if (func_411(iParam0))
	{
		if (func_9(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_8(unk_0xFA30DFD0084E92FE(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_8(bool bParam0)//Position - 0x2125
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

bool func_9(int iParam0)//Position - 0x217D
{
	return unk_0xFA30DFD0084E92FE(*iParam0, 2);
}

int func_10(var uParam0, bool bParam1, float fParam2, bool bParam3, int iParam4, bool bParam5)//Position - 0x218D
{
	bool bVar0;
	
	if (unk_0xC87A57742F7D3C06() == uParam0->f_23E)
	{
		return uParam0->f_23F;
	}
	uParam0->f_23E = unk_0xC87A57742F7D3C06();
	if (!unk_0x7AF0088ABFA713B6())
	{
		if (unk_0x610A1308608A0F91(unk_0xA95CF30C72EB526E(unk_0xFC1CAE18F3ECBF2D()), 1))
		{
			uParam0->f_23F = 1;
			return 1;
		}
		if (unk_0x19B821A70FE4D11F(unk_0xA95CF30C72EB526E(unk_0xFC1CAE18F3ECBF2D())))
		{
			uParam0->f_23F = 1;
			return 1;
		}
	}
	if (!uParam0->f_234)
	{
		if (unk_0x17FAADF9916EF741() || unk_0x422F9EDE839E6ABB())
		{
			unk_0xC4248B71D9B26306(true);
			uParam0->f_234 = 1;
		}
	}
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			if (unk_0x36210078ECC9DC40(unk_0xB5CEFD608600A09F()))
			{
				unk_0xD50A43D7C495F078(unk_0xB5CEFD608600A09F());
			}
		}
	}
	unk_0x4E0EC60D119222B1(7);
	unk_0x4E0EC60D119222B1(8);
	unk_0x4E0EC60D119222B1(9);
	unk_0x4E0EC60D119222B1(6);
	unk_0x4E0EC60D119222B1(19);
	unk_0xBBC4195AD74D153D(2, 19, 1);
	unk_0xBBC4195AD74D153D(0, 37, 1);
	unk_0xBBC4195AD74D153D(0, 21, 1);
	unk_0xBBC4195AD74D153D(0, 28, 1);
	unk_0xBBC4195AD74D153D(0, 29, 1);
	unk_0xBBC4195AD74D153D(0, 171, 1);
	func_38(0);
	if (unk_0x50465D2C022B9E04(2))
	{
		if (unk_0xD8169614C33872A0() || (unk_0x17FAADF9916EF741() && !unk_0x26641E1BFD792DBC()))
		{
			unk_0x08009E53F6E7E15C();
		}
	}
	Global_8E67 = 1;
	if (!uParam0->f_233)
	{
		switch (func_489(unk_0xA95CF30C72EB526E(unk_0xFC1CAE18F3ECBF2D())))
		{
			case 1:
				unk_0x9216004FAC08D1DC("SuccessFranklin", 1000, 0);
				break;
			
			case 2:
				unk_0x9216004FAC08D1DC("SuccessTrevor", 1000, 0);
				break;
			
			default:
				unk_0x9216004FAC08D1DC("SuccessMichael", 1000, 0);
				break;
		}
		uParam0->f_233 = 1;
	}
	if (uParam0->f_22E == 0)
	{
		uParam0->f_22E = (uParam0->f_23C + SYSTEM::FLOOR((15000f * fParam2)));
	}
	if (iParam4 && uParam0->f_23C >= (uParam0->f_22E - 1500))
	{
		uParam0->f_22E = uParam0->f_23C + 3000;
	}
	if (uParam0->f_230 == 0f)
	{
		uParam0->f_230 = (uParam0->f_230 + func_37(30f));
		uParam0->f_230 = (uParam0->f_230 + (IntToFloat(uParam0->f_38) * func_37(25f)));
		if (uParam0->f_38 > 0)
		{
			uParam0->f_230 = (uParam0->f_230 + func_37((25f * 0.5f)));
		}
		if (uParam0->f_225)
		{
			uParam0->f_230 = (uParam0->f_230 + (func_37(30f) - func_37(2f)));
		}
	}
	bVar0 = true;
	while (bVar0)
	{
		func_36(1);
		uParam0->f_23C = (uParam0->f_23C + SYSTEM::ROUND((0f + (1000f * SYSTEM::TIMESTEP()))));
		func_15(uParam0, fParam2, bParam3);
		if (IntToFloat(uParam0->f_23C) > (IntToFloat(uParam0->f_22E + 666) - (15000f * fParam2)))
		{
			if (uParam0->f_1E < 1f)
			{
				uParam0->f_1E = (uParam0->f_1E + (0f + ((1f / 0.225f) * SYSTEM::TIMESTEP())));
			}
		}
		uParam0->f_1E = func_14(uParam0->f_1E, 0f, 1f);
		if (uParam0->f_23C > (uParam0->f_22E - 333))
		{
			if (!uParam0->f_231)
			{
				if (uParam0->f_235)
				{
					uParam0->f_235 = 0;
					uParam0->f_236 = 0;
					uParam0->f_23D = 0.75f;
					unk_0x29CD142125FE177B(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0xF9FBC2F3F73D94C9();
				}
				uParam0->f_223 = (uParam0->f_223 - (0f + ((1f / 1.215f) * SYSTEM::TIMESTEP())));
			}
		}
		uParam0->f_223 = func_14(uParam0->f_223, 0f, 1f);
		if ((uParam0->f_223 <= 0.7f && !uParam0->f_221) && uParam0->f_1 != 0)
		{
			unk_0x29CD142125FE177B(uParam0->f_1, "TRANSITION_OUT");
			unk_0xF9FBC2F3F73D94C9();
			uParam0->f_222 = uParam0->f_23C;
			uParam0->f_221 = 1;
		}
		if (uParam0->f_23C > (uParam0->f_22E - 333))
		{
			if (!uParam0->f_231)
			{
				if (uParam0->f_224 < 1f)
				{
					uParam0->f_224 = (uParam0->f_224 + (0f + ((1f / 0.3f) * SYSTEM::TIMESTEP())));
				}
			}
		}
		uParam0->f_224 = func_14(uParam0->f_224, 0f, 1f);
		if (uParam0->f_232)
		{
			if (unk_0x8A0D8839261BAEEF(2))
			{
				if (unk_0xA7F138B5B1AB2CF6(uParam0->f_4))
				{
					if (!uParam0->f_237)
					{
						func_11(uParam0, (!uParam0->f_235 && uParam0->f_38 > 0));
					}
				}
			}
		}
		if (unk_0x694514BD37EC4E94(2, 216) && uParam0->f_22E > uParam0->f_23C + 333)
		{
			if (((!uParam0->f_236 && uParam0->f_38 != 0) && unk_0xA7F138B5B1AB2CF6(uParam0->f_4)) && IntToFloat(uParam0->f_23C) > (IntToFloat(uParam0->f_22E + 1165) - (15000f * fParam2)))
			{
				if (!uParam0->f_235)
				{
					unk_0x29CD142125FE177B(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0xF9FBC2F3F73D94C9();
					uParam0->f_235 = 1;
					uParam0->f_23D = 0.75f;
					if (uParam0->f_23C > (uParam0->f_22E - 5000))
					{
						uParam0->f_22E = uParam0->f_23C + 5000;
					}
				}
				else if (bParam5)
				{
					unk_0x29CD142125FE177B(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0xF9FBC2F3F73D94C9();
					uParam0->f_235 = 0;
					uParam0->f_23D = 0.75f;
				}
				func_11(uParam0, (!uParam0->f_235 && uParam0->f_38 > 0));
			}
		}
		if ((uParam0->f_235 || uParam0->f_236) && uParam0->f_38 != 0)
		{
			if (IntToFloat(uParam0->f_23C) > (IntToFloat(uParam0->f_22E + 1165) - (15000f * fParam2)))
			{
				if (uParam0->f_236 && !uParam0->f_235)
				{
					uParam0->f_235 = 1;
					uParam0->f_23D = 0.75f;
					unk_0x29CD142125FE177B(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0xF9FBC2F3F73D94C9();
				}
				uParam0->f_22F = func_14((uParam0->f_22F + (((1f / 0.3f) * uParam0->f_23D) * SYSTEM::TIMESTEP())), 0f, 1f);
				uParam0->f_23D = func_14((uParam0->f_23D + 0.07f), 0.75f, 1.15f);
			}
		}
		else
		{
			uParam0->f_22F = func_14((uParam0->f_22F - ((((1f / 0.3f) * uParam0->f_23D) * 0.01f) * SYSTEM::TIMESTEP())), 0f, 1f);
			uParam0->f_23D = func_14((uParam0->f_23D + 0.07f), 0.75f, 1.15f);
		}
		if (uParam0->f_23C > uParam0->f_22E)
		{
			if (uParam0->f_231)
			{
				if (!uParam0->f_237)
				{
					if (unk_0x694514BD37EC4E94(2, 215))
					{
						uParam0->f_231 = 0;
					}
				}
			}
			else if ((uParam0->f_23C - uParam0->f_222) > 1000 && uParam0->f_221)
			{
				bVar0 = false;
			}
		}
		uParam0->f_23F = !bVar0;
		if (bParam1)
		{
			SYSTEM::WAIT(0);
		}
		else
		{
			if (!bVar0)
			{
				func_36(0);
			}
			return !bVar0;
		}
	}
	func_36(0);
	return 1;
}

void func_11(var uParam0, bool bParam1)//Position - 0x27E6
{
	unk_0x29CD142125FE177B(uParam0->f_4, "CLEAR_ALL");
	unk_0xF9FBC2F3F73D94C9();
	if (unk_0x8ACB0C3FACC09467())
	{
		unk_0x29CD142125FE177B(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0x5E5DBD0A6623969E(true);
		unk_0xF9FBC2F3F73D94C9();
	}
	unk_0x29CD142125FE177B(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x1E1FB49121565EB6(0);
	func_13(unk_0xE57EAD1FEA2A6FAF(2, 215, true));
	func_12("ES_HELP");
	if (unk_0x8ACB0C3FACC09467())
	{
		unk_0x5E5DBD0A6623969E(true);
		unk_0x1E1FB49121565EB6(215);
	}
	unk_0xF9FBC2F3F73D94C9();
	if (bParam1)
	{
		unk_0x29CD142125FE177B(uParam0->f_4, "SET_DATA_SLOT");
		unk_0x1E1FB49121565EB6(1);
		func_13(unk_0xE57EAD1FEA2A6FAF(2, 216, true));
		func_12("ES_XPAND");
		if (unk_0x8ACB0C3FACC09467())
		{
			unk_0x5E5DBD0A6623969E(true);
			unk_0x1E1FB49121565EB6(216);
		}
		unk_0xF9FBC2F3F73D94C9();
	}
	unk_0x29CD142125FE177B(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0xF9FBC2F3F73D94C9();
}

void func_12(char* sParam0)//Position - 0x28AA
{
	unk_0x57016C44F10111F0(sParam0);
	unk_0x64989E60CF560CA1();
}

void func_13(char* sParam0)//Position - 0x28BC
{
	unk_0xCB30200B8055CA57(sParam0);
}

float func_14(float fParam0, float fParam1, float fParam2)//Position - 0x28CA
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

void func_15(var uParam0, float fParam1, bool bParam2)//Position - 0x28F1
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
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	char cVar23[16];
	char cVar24[32];
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	float fVar29;
	float fVar30;
	float fVar31;
	float fVar32;
	float fVar33;
	
	iVar0 = SYSTEM::ROUND((uParam0->f_223 * 255f));
	fVar1 = (func_35() * 0.25f);
	if (unk_0xA7F138B5B1AB2CF6(uParam0->f_1))
	{
		if (uParam0->f_1E >= 0f)
		{
			if (!uParam0->f_2)
			{
				unk_0x29CD142125FE177B(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_12(&(uParam0->f_5));
				if (uParam0->f_22C == 4)
				{
					func_34(&(uParam0->f_D));
				}
				else
				{
					func_12(&(uParam0->f_D));
				}
				if (unk_0x7AF0088ABFA713B6())
				{
					unk_0x1E1FB49121565EB6(150);
				}
				else
				{
					unk_0x1E1FB49121565EB6(100);
				}
				unk_0x5E5DBD0A6623969E(true);
				if (uParam0->f_22C == 4)
				{
					unk_0x1E1FB49121565EB6((uParam0->f_38 - 1));
				}
				else
				{
					unk_0x1E1FB49121565EB6(uParam0->f_38);
				}
				unk_0x5E5DBD0A6623969E(bParam2);
				if (uParam0->f_22C == 4 || uParam0->f_22C == 3)
				{
					unk_0x1E1FB49121565EB6(2);
				}
				else
				{
					unk_0x1E1FB49121565EB6(69);
				}
				unk_0xF9FBC2F3F73D94C9();
				uParam0->f_2 = 1;
			}
			if ((uParam0->f_38 > 0 && !uParam0->f_3) && uParam0->f_23C > 600)
			{
				unk_0x29CD142125FE177B(uParam0->f_1, "TRANSITION_UP");
				unk_0xD44E04EBBDC4CE88(0.15f);
				unk_0x5E5DBD0A6623969E(true);
				unk_0xF9FBC2F3F73D94C9();
				uParam0->f_3 = 1;
			}
		}
		func_33();
		unk_0x4B6031094354FED6(uParam0->f_1, 255, 255, 255, 255, 0);
	}
	fVar2 = ((uParam0->f_230 * uParam0->f_22F) * (1f - uParam0->f_224));
	fVar3 = 0f;
	if (uParam0->f_237)
	{
		fVar3 = (((0.1388889f + func_37((2f * 2f))) * uParam0->f_238) * (1f - uParam0->f_224));
		fVar2 = (fVar2 + (3f * fVar3));
	}
	if (uParam0->f_224 != 0f)
	{
		fVar4 = 0f;
		if (fVar2 < fVar4)
		{
			fVar2 = fVar4;
		}
	}
	else
	{
		fVar5 = 0f;
		if (uParam0->f_1E >= 0.975f)
		{
			if (fVar2 < fVar5)
			{
				fVar2 = fVar5;
			}
		}
	}
	fVar1 = (0.3f * func_35());
	if (uParam0->f_C)
	{
		fVar1 = 0.5f;
	}
	fVar6 = (*uParam0 * 2f);
	if (uParam0->f_22C != 4)
	{
		fVar7 = func_32(&(uParam0->f_D));
		if (fVar6 < fVar7)
		{
			fVar6 = (fVar7 + (3f * 0.006f));
		}
		if (unk_0x3771EE4CB542D71E(0) < 1.4f)
		{
			fVar6 = (fVar6 * 1.3f);
		}
		fVar7 = func_32(&(uParam0->f_226));
		fVar8 = (((0.119f + 0.05f) / func_35()) / 2.5f);
		if ((uParam0->f_22C == 1 || uParam0->f_22C == 0) && uParam0->f_22D != 0)
		{
			if (fVar6 < (fVar7 + (2.6f * fVar8)))
			{
				fVar6 = (fVar7 + (2.6f * fVar8));
			}
		}
		else if (uParam0->f_22C == 5)
		{
			if (fVar6 < (fVar7 + (2.6f * fVar8)))
			{
				fVar6 = (fVar7 + (2.6f * fVar8));
			}
		}
		else if (fVar6 < (fVar7 + (1.9f * fVar8)))
		{
			fVar6 = (fVar7 + (2f * fVar8));
		}
	}
	fVar9 = ((0.499f - (fVar6 / 2f)) + 0.006f);
	fVar10 = ((0.499f + (fVar6 / 2f)) - 0.006f);
	unk_0xD55638CE45B2B948(2, 215);
	unk_0xD55638CE45B2B948(2, 216);
	unk_0xD55638CE45B2B948(2, 200);
	unk_0xBBC4195AD74D153D(2, 200, 1);
	if (uParam0->f_232 || uParam0->f_237)
	{
		if ((IntToFloat(uParam0->f_22E) - (14000f * fParam1)) < IntToFloat(uParam0->f_23C) || ((uParam0->f_237 && uParam0->f_22F > 0.95f) && (uParam0->f_22E - 10000) < uParam0->f_23C))
		{
			if (uParam0->f_237)
			{
				if (uParam0->f_23A < 0)
				{
					uParam0->f_23A = (uParam0->f_23A * -1);
					uParam0->f_23A = (uParam0->f_23C + uParam0->f_23A);
				}
				if (uParam0->f_23A > 0)
				{
					if ((uParam0->f_23A - uParam0->f_23C) > 0)
					{
						func_29((uParam0->f_23A - uParam0->f_23C), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						uParam0->f_23A = 0;
						uParam0->f_239 = 1;
						uParam0->f_237 = 0;
						uParam0->f_231 = 0;
						uParam0->f_232 = 0;
						uParam0->f_22E = uParam0->f_23C + 500;
						uParam0->f_23A = 0;
					}
				}
				if (uParam0->f_238 < 1f)
				{
					uParam0->f_238 = (uParam0->f_238 + (0f + ((1f / 0.166f) * SYSTEM::TIMESTEP())));
					if (uParam0->f_238 > 1f)
					{
						uParam0->f_238 = 1f;
					}
				}
			}
			if (unk_0x17FAADF9916EF741())
			{
				unk_0x37CCF3DE21C7FD23();
			}
			if ((uParam0->f_4 != 0 && uParam0->f_224 < 0.1f) && uParam0->f_23C <= uParam0->f_22E)
			{
				unk_0x4E0EC60D119222B1(7);
				unk_0x4E0EC60D119222B1(8);
				unk_0x4E0EC60D119222B1(9);
				unk_0x4E0EC60D119222B1(6);
				unk_0x4B6031094354FED6(uParam0->f_4, 255, 255, 255, iVar0, 0);
			}
			if (uParam0->f_237)
			{
				unk_0xBBC4195AD74D153D(0, 140, 1);
				unk_0xBBC4195AD74D153D(0, 141, 1);
				unk_0xBBC4195AD74D153D(0, 142, 1);
				unk_0xBBC4195AD74D153D(2, 188, 1);
				if (unk_0xF7DDAAF0EFDAFA22(2, 188))
				{
					unk_0xC4BA30B532FE260F(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_237 = 0;
					uParam0->f_231 = 0;
					uParam0->f_232 = 0;
					uParam0->f_22E = uParam0->f_23C + 500;
					uParam0->f_239 = 3;
					uParam0->f_23A = 0;
					unk_0xC4BA30B532FE260F(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				unk_0xBBC4195AD74D153D(2, 187, 1);
				if (unk_0xF7DDAAF0EFDAFA22(2, 187))
				{
					unk_0xC4BA30B532FE260F(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_237 = 0;
					uParam0->f_231 = 0;
					uParam0->f_232 = 0;
					uParam0->f_22E = uParam0->f_23C + 500;
					uParam0->f_239 = 4;
					uParam0->f_23A = 0;
					unk_0xC4BA30B532FE260F(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				unk_0xBBC4195AD74D153D(2, 202, 1);
				if (unk_0xF7DDAAF0EFDAFA22(2, 202))
				{
					unk_0xC4BA30B532FE260F(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_237 = 0;
					uParam0->f_231 = 0;
					uParam0->f_232 = 0;
					uParam0->f_22E = uParam0->f_23C + 500;
					uParam0->f_239 = 2;
					uParam0->f_23A = 0;
					unk_0xC4BA30B532FE260F(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
			else if (uParam0->f_232)
			{
				unk_0x4E0EC60D119222B1(7);
				unk_0x4E0EC60D119222B1(8);
				unk_0x4E0EC60D119222B1(9);
				unk_0x4E0EC60D119222B1(6);
				unk_0xBBC4195AD74D153D(0, 140, 1);
				unk_0xBBC4195AD74D153D(0, 141, 1);
				unk_0xBBC4195AD74D153D(0, 142, 1);
				if (unk_0x694514BD37EC4E94(2, 215) || unk_0xF7DDAAF0EFDAFA22(2, 200))
				{
					unk_0xC4BA30B532FE260F(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_232 = 0;
					uParam0->f_231 = 0;
					uParam0->f_22E = uParam0->f_23C + 500;
					unk_0xC4BA30B532FE260F(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
		}
	}
	unk_0xE45648BDBF3441F5(1, &iVar13, &iVar14, &iVar15, &iVar16);
	unk_0xCC4FE6A016BA0765(iVar13, iVar14, iVar15, iVar0);
	unk_0x666751E43D377EAA(fVar9, fVar10);
	unk_0x567A3300A78B3D65(0);
	unk_0xB8F3C51875F7BEA3(1f, 0.4f);
	fVar1 = (fVar1 - func_37(6f));
	fVar1 = (fVar1 + (func_37(30f) - func_37((2f * 2f))));
	fVar11 = (fVar2 - func_37((2f * 14f)));
	if (fVar11 >= 0f)
	{
		fVar12 = func_14((fVar11 / (0.6f * func_37(25f))), 0f, 1f);
		func_33();
		unk_0xF7EBEC3FF57AEC65(0.5f, (fVar1 - (func_37((2f - 0.5f)) - 0.001388889f)), fVar6, func_28(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
	}
	else
	{
		return;
	}
	fVar1 = (fVar1 + func_37((2f * 0.3f)));
	if (uParam0->f_38 > 0)
	{
		fVar1 = (fVar1 + func_37((25f * 0.2f)));
	}
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < uParam0->f_38)
	{
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_35())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_14((fVar11 / (0.8f * func_37(25f))), 0f, 1f);
			func_25(uParam0, iVar17, (fVar1 + func_37(2f)), fVar9, fVar10, SYSTEM::ROUND((IntToFloat(iVar0) * fVar12)));
		}
		else
		{
			return;
		}
		fVar1 = (fVar1 + func_37(25f));
		if (uParam0->f_22C == 4)
		{
			if (iVar17 == (uParam0->f_240 - 1))
			{
				fVar1 = (fVar1 + func_37((25f * 0.2f)));
				fVar11 = (fVar2 - (fVar1 - (0.3f * func_35())));
				if (fVar11 >= 0f)
				{
					fVar1 = (fVar1 + func_37(2f));
					fVar12 = func_14((fVar11 / (0.6f * func_37(25f))), 0f, 1f);
					func_33();
					unk_0xF7EBEC3FF57AEC65(0.5f, (fVar1 + func_37((2f * 0.5f))), fVar6, func_28(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
					fVar1 = (fVar1 + func_37((2f * 0.3f)));
					if (uParam0->f_38 > 0)
					{
						fVar1 = (fVar1 + func_37((25f * 0.2f)));
					}
				}
			}
		}
		iVar17++;
	}
	if (uParam0->f_22C == 4)
	{
		return;
	}
	if (uParam0->f_38 > 0)
	{
		fVar1 = (fVar1 + func_37((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_35())));
		if (fVar11 >= 0f)
		{
			fVar1 = (fVar1 + func_37(2f));
			fVar12 = func_14((fVar11 / (0.6f * func_37(25f))), 0f, 1f);
			func_33();
			unk_0xF7EBEC3FF57AEC65(0.5f, (fVar1 + func_37((2f * 0.5f))), fVar6, func_28(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
		}
	}
	if (uParam0->f_225)
	{
		fVar1 = (fVar1 + func_37((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_35())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_14((fVar11 / (0.8f * func_37(25f))), 0f, 1f);
			unk_0xCC4FE6A016BA0765(iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))));
			func_18(7, 0, 1, &fVar18, &fVar19, 0);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (unk_0x83D607D7994DEF3A() == 0)
			{
				fVar20 = (fVar9 + ((0.119f / func_35()) / 2.5f));
				fVar21 = (fVar10 - ((0.119f / func_35()) / 2.5f));
				if (uParam0->f_22C == 1)
				{
					fVar20 = (fVar9 + (((0.119f + 0.05f) / func_35()) / 2.5f));
					fVar21 = (fVar10 - (((0.119f + 0.05f) / func_35()) / 2.5f));
				}
			}
			if (uParam0->f_22D == 0)
			{
				fVar20 = (fVar20 + (((fVar18 * 0.28f) + 0.006f) / 2f));
				fVar21 = (fVar21 + (((fVar18 * 0.28f) + 0.006f) / 2f));
			}
			if (uParam0->f_22C != 3)
			{
				unk_0x666751E43D377EAA(fVar20, fVar21);
				unk_0x567A3300A78B3D65(1);
			}
			else
			{
				fVar20 = 0.5f;
				unk_0x567A3300A78B3D65(0);
			}
			unk_0xB8F3C51875F7BEA3(1f, 0.4f);
			func_17(&(uParam0->f_226), fVar20, (fVar1 + func_37((2f * 2f))), 0, 0, 0);
			unk_0x666751E43D377EAA(fVar20, fVar21);
			unk_0x567A3300A78B3D65(2);
			unk_0xB8F3C51875F7BEA3(1f, 0.4f);
			unk_0x8F62A12BC2768BE8(0);
			func_33();
			fVar22 = fVar21;
			StringCopy(&cVar23, "MPHud", 16);
			StringCopy(&cVar24, "MissionPassedMedal", 32);
			fVar22 = (fVar22 - ((fVar18 * 0.28f) + 0.006f));
			unk_0x666751E43D377EAA(fVar20, fVar22);
			unk_0xCC4FE6A016BA0765(iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))));
			switch (uParam0->f_22C)
			{
				case 0:
					unk_0x8B371195127AACF2("PERCENTAGE");
					unk_0xAA5C5BF0489E5553(uParam0->f_22A);
					unk_0x3A8B9C7B1C825123(fVar20, (fVar1 + func_37((2f * 2f))), 0);
					break;
				
				case 1:
					unk_0x8B371195127AACF2("FO_TWO_NUM");
					unk_0xAA5C5BF0489E5553(uParam0->f_22A);
					unk_0xAA5C5BF0489E5553(uParam0->f_22B);
					unk_0x3A8B9C7B1C825123(fVar20, (fVar1 + func_37((2f * 2f))), 0);
					break;
				
				case 2:
					unk_0x8B371195127AACF2("MTPHPER_XPNO");
					unk_0xAA5C5BF0489E5553(uParam0->f_22A);
					unk_0x3A8B9C7B1C825123(fVar20, (fVar1 + func_37((2f * 2f))), 0);
					break;
				
				case 5:
					unk_0x8B371195127AACF2("ESDOLLA");
					unk_0xBCDE00BFDE9A5BD1(uParam0->f_22A, 1);
					unk_0x3A8B9C7B1C825123(fVar20, (fVar1 + func_37((2f * 2f))), 0);
					break;
			}
			if (uParam0->f_22D != 0)
			{
				iVar25 = 255;
				iVar26 = 255;
				iVar27 = 255;
				iVar28 = iVar0;
				switch (uParam0->f_22D)
				{
					case 1:
						unk_0xE45648BDBF3441F5(107, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
					
					case 3:
						unk_0xE45648BDBF3441F5(109, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
					
					case 2:
						unk_0xE45648BDBF3441F5(108, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
				}
				fVar29 = (0.001388889f * 5f);
				fVar30 = ((0.00078125f * 16f) * 2f);
				fVar31 = ((0.001388889f * 16f) * 2f);
				fVar32 = ((fVar21 + func_16(4f)) - 0.006f);
				fVar33 = ((fVar1 + func_37(10f)) + fVar29);
				if (uParam0->f_22C == -1)
				{
					fVar32 = (fVar32 - (0.006f * 6f));
				}
				fVar30 = (fVar30 * 0.65f);
				fVar31 = (fVar31 * 0.65f);
				unk_0x51DA985AC0B70E2E(&cVar23, &cVar24, fVar32, fVar33, fVar30, fVar31, 0f, iVar25, iVar26, iVar27, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))), 0);
			}
			fVar1 = (fVar1 + (func_37(30f) - 2f));
		}
	}
}

float func_16(float fParam0)//Position - 0x3581
{
	return (fParam0 * 0.00078125f);
}

void func_17(char* sParam0, float fParam1, float fParam2, int iParam3, bool bParam4, int iParam5)//Position - 0x3591
{
	unk_0x8F62A12BC2768BE8(iParam3);
	unk_0xC8793973D4960AC4(iParam5);
	func_33();
	if (bParam4)
	{
		unk_0x8B371195127AACF2("STRING");
		unk_0x607C19B90D297FE2(sParam0);
	}
	else
	{
		unk_0x8B371195127AACF2(sParam0);
	}
	unk_0x3A8B9C7B1C825123(fParam1, fParam2, 0);
}

int func_18(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)//Position - 0x35CE
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	StringCopy(&cVar0, func_24(iParam0), 64);
	StringCopy(&cVar1, func_21(iParam0, bParam1), 64);
	if (unk_0x56BEECB328B6D29D(&cVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0x1BBB0A5225346008(&iVar2, &iVar3);
			fVar5 = unk_0x3771EE4CB542D71E(0);
			if (func_20())
			{
				iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar5));
			}
			fVar6 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_20())
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
		vVar7.x = (vVar7.x * (func_19(iParam0) / fVar4));
		vVar7.y = (vVar7.y * (func_19(iParam0) / fVar4));
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

float func_19(int iParam0)//Position - 0x377F
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

int func_20()//Position - 0x381E
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

var func_21(int iParam0, bool bParam1)//Position - 0x3850
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0xF1734B55490E9045(&(Global_43C1.f_1A3F[iParam0 /*16*/])))
	{
		if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_1A3F[iParam0 /*16*/])) == -1487683087)
		{
			Var2 = { func_23(unk_0xB5CEFD608600A09F()) };
			if (unk_0xB5AD4F878C27B0F4(&Var2, &uVar1))
			{
				return func_22(&uVar1);
			}
		}
		else
		{
			return func_22(&(Global_43C1.f_1A3F[iParam0 /*16*/]));
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

var func_22(var uParam0)//Position - 0x3CA2
{
	return uParam0;
}

struct<13> func_23(int iParam0)//Position - 0x3CAC
{
	struct<13> Var0;
	
	unk_0xB7DBA2C6D2C3C41A(iParam0, &Var0, 13);
	return Var0;
}

char* func_24(int iParam0)//Position - 0x3CC3
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0xF1734B55490E9045(&(Global_43C1.f_16FE[iParam0 /*16*/])))
	{
		if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_16FE[iParam0 /*16*/])) == -1487683087)
		{
			Var1 = { func_23(unk_0xB5CEFD608600A09F()) };
			unk_0xB5AD4F878C27B0F4(&Var1, &uVar0);
			return func_22(&uVar0);
		}
		else
		{
			return func_22(&(Global_43C1.f_16FE[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_25(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5)//Position - 0x3D38
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	unk_0xE45648BDBF3441F5(1, &iVar0, &iVar1, &iVar2, &uVar3);
	unk_0xCC4FE6A016BA0765(iVar0, iVar1, iVar2, iParam5);
	unk_0x666751E43D377EAA(fParam3, fParam4);
	unk_0x567A3300A78B3D65(1);
	unk_0xB8F3C51875F7BEA3(1f, func_27(14f));
	unk_0x8F62A12BC2768BE8(0);
	unk_0xC8793973D4960AC4(0);
	func_33();
	if (uParam0->f_213[iParam1])
	{
		unk_0x8B371195127AACF2("STRING");
		unk_0x607C19B90D297FE2(&(uParam0->f_47[iParam1 /*16*/]));
	}
	else
	{
		unk_0x8B371195127AACF2(&(uParam0->f_47[iParam1 /*16*/]));
		if (uParam0->f_39[iParam1] == 16 || uParam0->f_39[iParam1] == 17)
		{
			unk_0xAA5C5BF0489E5553(uParam0->f_1E9[iParam1]);
		}
	}
	unk_0x3A8B9C7B1C825123(fParam3, fParam2, 0);
	fVar4 = fParam4;
	switch (uParam0->f_205[iParam1])
	{
		case 0:
			break;
		
		case 1:
			func_18(7, 0, 1, &fVar5, &fVar6, 0);
			unk_0x51DA985AC0B70E2E("CommonMenu", func_21(7, 0), (fParam4 - 0.006f), ((fParam2 + func_37(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 2:
			func_18(5, 0, 1, &fVar5, &fVar6, 0);
			unk_0x51DA985AC0B70E2E("CommonMenu", func_21(5, 0), (fParam4 - 0.006f), ((fParam2 + func_37(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 3:
			func_18(6, 0, 1, &fVar5, &fVar6, 0);
			unk_0x51DA985AC0B70E2E("CommonMenu", func_21(6, 0), (fParam4 - 0.006f), ((fParam2 + func_37(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
	}
	if (uParam0->f_39[iParam1] == 0)
	{
		return;
	}
	if (uParam0->f_39[iParam1] == 15)
	{
		unk_0x567A3300A78B3D65(1);
	}
	else
	{
		unk_0x567A3300A78B3D65(2);
	}
	unk_0xB8F3C51875F7BEA3(1f, func_27(14f));
	if (uParam0->f_39[iParam1] == 5 || uParam0->f_39[iParam1] == 4)
	{
		unk_0x666751E43D377EAA(fParam3, (fVar4 - (0.00078125f * 3f)));
	}
	else
	{
		unk_0x666751E43D377EAA(fParam3, (fVar4 + (0.00078125f * 2f)));
	}
	unk_0xCC4FE6A016BA0765(iVar0, iVar1, iVar2, iParam5);
	func_26(uParam0->f_1E9[iParam1], uParam0->f_1F7[iParam1], fParam4, fParam2, &(uParam0->f_118[iParam1 /*16*/]), uParam0->f_39[iParam1]);
}

void func_26(int iParam0, int iParam1, float fParam2, float fParam3, char* sParam4, int iParam5)//Position - 0x3FC3
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 1;
	unk_0x8F62A12BC2768BE8(0);
	unk_0xC8793973D4960AC4(0);
	func_33();
	fVar1 = 0f;
	fVar2 = (8f * 0.00078125f);
	fVar3 = (16f * 0.001388889f);
	iVar4 = 93;
	iVar5 = 182;
	iVar6 = 229;
	if (iParam5 == 4)
	{
		iVar4 = 194;
		iVar5 = 80;
		iVar6 = 80;
	}
	switch (iParam5)
	{
		case 4:
		case 5:
			unk_0xB8F3C51875F7BEA3(1f, func_27(18f));
			unk_0xC8793973D4960AC4(4);
			if (iParam0 < 0)
			{
				unk_0xE746379C2AF24EF6("ESMINDOLLA");
				unk_0xBCDE00BFDE9A5BD1((-1 * iParam0), 1);
				fVar1 = unk_0x2207C0EA517B975D(0);
			}
			else
			{
				unk_0xE746379C2AF24EF6("ESDOLLA");
				unk_0xBCDE00BFDE9A5BD1(iParam0, 1);
				fVar1 = unk_0x2207C0EA517B975D(0);
			}
			fVar1 = (fVar1 - (fVar1 % 0.00078125f));
			unk_0x51DA985AC0B70E2E("CommonMenu", "BettingBox_Left", (fParam2 - fVar1), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0x51DA985AC0B70E2E("CommonMenu", "BettingBox_Centre", ((fParam2 - (fVar1 * 0.5f)) - (0.00078125f * 2f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), (fVar1 - (fVar2 * 0.5f)), fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0x51DA985AC0B70E2E("CommonMenu", "BettingBox_Right", (fParam2 - (0.00078125f * 4f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0xB8F3C51875F7BEA3(1f, func_27(14f));
			break;
	}
	unk_0x449F0674640D94C0(iVar0);
	switch (iParam5)
	{
		case 11:
			unk_0x8B371195127AACF2("PERCENTAGE");
			unk_0xAA5C5BF0489E5553(iParam0);
			break;
		
		case 1:
			unk_0xC8793973D4960AC4(5);
			unk_0x8B371195127AACF2("FO_NUM");
			unk_0xAA5C5BF0489E5553(iParam0);
			break;
		
		case 2:
			unk_0xC8793973D4960AC4(5);
			unk_0x8B371195127AACF2("FO_TWO_NUM");
			unk_0xAA5C5BF0489E5553(iParam0);
			unk_0xAA5C5BF0489E5553(iParam1);
			break;
		
		case 4:
		case 5:
			unk_0xB8F3C51875F7BEA3(1f, func_27(18f));
		
		case 3:
			if (iParam0 < 0)
			{
				unk_0x8B371195127AACF2("ESMINDOLLA");
				unk_0xBCDE00BFDE9A5BD1((-1 * iParam0), 1);
			}
			else
			{
				unk_0x8B371195127AACF2("ESDOLLA");
				unk_0xBCDE00BFDE9A5BD1(iParam0, 1);
			}
			break;
		
		case 6:
			unk_0x8B371195127AACF2(sParam4);
			break;
		
		case 7:
			unk_0x8B371195127AACF2("STRING");
			unk_0x607C19B90D297FE2(sParam4);
			break;
		
		case 8:
			unk_0xC8793973D4960AC4(5);
			unk_0x8B371195127AACF2("STRING");
			unk_0x4C36886AAFD04CF8(iParam0, 14);
			break;
		
		case 9:
			unk_0xC8793973D4960AC4(5);
			unk_0x8B371195127AACF2("STRING");
			unk_0x4C36886AAFD04CF8(iParam0, 6);
			break;
		
		case 10:
			unk_0xC8793973D4960AC4(5);
			unk_0x8B371195127AACF2("STRING");
			unk_0x4C36886AAFD04CF8(iParam0, 2055);
			break;
		
		case 18:
			unk_0xC8793973D4960AC4(5);
			unk_0x8B371195127AACF2("STRING");
			unk_0x4C36886AAFD04CF8(iParam0, 2055);
			break;
		
		case 12:
			unk_0x8B371195127AACF2("AHD_DIST");
			unk_0xAA5C5BF0489E5553(iParam0);
			break;
		
		case 13:
			unk_0x8B371195127AACF2(sParam4);
			unk_0xAA5C5BF0489E5553(iParam0);
			unk_0xAA5C5BF0489E5553(iParam1);
			break;
		
		case 15:
		case 14:
			unk_0x8B371195127AACF2(sParam4);
			unk_0xAA5C5BF0489E5553(iParam0);
			unk_0xAA5C5BF0489E5553(iParam1);
			break;
		
		case 16:
			unk_0x8B371195127AACF2(sParam4);
			unk_0xAA5C5BF0489E5553(iParam1);
			break;
	}
	if (iParam5 != 17)
	{
		if (iParam5 == 4 || iParam5 == 5)
		{
			unk_0x3A8B9C7B1C825123((fParam2 - (0.00078125f * 4f)), fParam3, 0);
			unk_0xB8F3C51875F7BEA3(1f, func_27(14f));
		}
		else
		{
			unk_0x3A8B9C7B1C825123(fParam2, fParam3, 0);
		}
	}
}

float func_27(float fParam0)//Position - 0x433E
{
	return (fParam0 * 0.025f);
}

float func_28(float fParam0)//Position - 0x434E
{
	return (fParam0 * 0.0009259259f);
}

void func_29(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x435E
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_31(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_14D262.f_1 = 1;
		func_30(7, iVar0);
		Global_14D262.f_1124[iVar0] = iParam0;
		StringCopy(&(Global_14D262.f_1124.f_B[iVar0 /*16*/]), sParam1, 64);
		Global_14D262.f_1124.f_AC[iVar0] = iParam2;
		Global_14D262.f_1124.f_D8[iVar0] = iParam3;
		Global_14D262.f_1124.f_B7[iVar0] = iParam4;
		Global_14D262.f_1124.f_C2[iVar0] = iParam5;
		Global_14D262.f_1124.f_F9[iVar0] = iParam6;
		Global_14D262.f_1124.f_104[iVar0] = iParam7;
		Global_14D262.f_1124.f_CD[iVar0] = iParam8;
		Global_14D262.f_1124.f_13A[iVar0] = iParam9;
		Global_14D262.f_1124.f_145[iVar0] = iParam10;
		Global_14D262.f_1124.f_165[iVar0] = iParam11;
		Global_14D262.f_1124.f_EE[iVar0] = iParam12;
		Global_14D262.f_1124.f_10F[iVar0] = iParam13;
		Global_14D262.f_1124.f_170[iVar0] = iParam14;
		Global_14D262.f_1124.f_17B[iVar0] = iParam15;
		Global_14D262.f_1124.f_186[iVar0] = iParam16;
	}
}

void func_30(int iParam0, int iParam1)//Position - 0x44AC
{
	unk_0xF0059F27F7BB6680(&(Global_14D262.f_17E7[iParam0]), iParam1);
}

bool func_31(int iParam0, int iParam1)//Position - 0x44C5
{
	return unk_0xFA30DFD0084E92FE(Global_14D262.f_17E7[iParam0], iParam1);
}

float func_32(char* sParam0)//Position - 0x44DE
{
	unk_0xE746379C2AF24EF6(sParam0);
	return (unk_0x2207C0EA517B975D(1) / 2f);
}

void func_33()//Position - 0x44F3
{
	unk_0x996AC9A66B2A5A3F(1);
	if (unk_0x422F9EDE839E6ABB() || unk_0x17FAADF9916EF741())
	{
		unk_0x996AC9A66B2A5A3F(7);
	}
	unk_0x6AEB48E3B648804A(0);
}

void func_34(char* sParam0)//Position - 0x451B
{
	unk_0xCB30200B8055CA57(sParam0);
}

float func_35()//Position - 0x4529
{
	float fVar0;
	
	fVar0 = 1f;
	if (unk_0x8ACB0C3FACC09467())
	{
	}
	return fVar0;
}

void func_36(int iParam0)//Position - 0x453D
{
	Global_11646 = iParam0;
	Global_11647 = iParam0;
}

float func_37(float fParam0)//Position - 0x4551
{
	return (fParam0 * 0.001388889f);
}

void func_38(int iParam0)//Position - 0x4561
{
	if (!Global_389D.f_1 == 1)
	{
		if (func_39(0))
		{
			func_418(iParam0);
		}
		unk_0xF0059F27F7BB6680(&Global_93C, 2);
	}
}

int func_39(int iParam0)//Position - 0x458A
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

void func_40(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x45E4
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	float fVar4;
	vector3 vVar5;
	vector3 vVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (unk_0x50465D2C022B9E04(2))
	{
		unk_0xBBC4195AD74D153D(2, 199, 1);
	}
	if (unk_0x97EF4023B86C354F())
	{
		if (!iLocal_191)
		{
			if (func_206(uParam1, 0, &iLocal_192))
			{
				func_322(&(uParam1->f_29A), 9, 0);
				iLocal_191 = 1;
			}
		}
	}
	if (iLocal_173)
	{
		if (unk_0x50465D2C022B9E04(2))
		{
			unk_0x08009E53F6E7E15C();
		}
		bVar1 = true;
		if (uParam1->f_2A8)
		{
			if (!uParam1->f_286 && !unk_0x97EF4023B86C354F())
			{
				uParam1->f_286 = func_197(&(uParam1->f_287), 0);
				bVar1 = false;
				if (uParam1->f_286)
				{
					uParam1->f_2A8 = 0;
					func_322(&(uParam1->f_29A), 9, 0);
					uParam1->f_286 = 0;
				}
			}
			else
			{
				func_120(&(uParam1->f_48), &(uParam1->f_285));
			}
			if (bVar1)
			{
				func_116(&(uParam1->f_1FD), 1128792064, 1, 0, 1, 1065353216);
				if (unk_0x694514BD37EC4E94(2, 202))
				{
					uParam1->f_2A8 = 0;
					func_322(&(uParam1->f_29A), 9, 0);
				}
				else if (unk_0x694514BD37EC4E94(2, 215))
				{
					iVar0 = 2;
				}
				else if (unk_0x694514BD37EC4E94(2, 216))
				{
					iVar0 = 1;
				}
			}
			if (func_115(&(uParam1->f_48)))
			{
				if (!bLocal_193)
				{
					bLocal_193 = true;
					func_114(&(uParam1->f_1FD), 0, 0, 1, 1);
					func_113(&(uParam1->f_1FD), "DARTS_CONT", 2, 215, 1, 1, 0);
					func_113(&(uParam1->f_1FD), "DARTS_REMATCH", 2, 216, 1, 1, 0);
					func_113(&(uParam1->f_1FD), "IB_BACK", 2, 202, 1, 1, 0);
					func_113(&(uParam1->f_1FD), "SCLB_PROFILE", 2, 217, 1, 1, 0);
					func_110(&(uParam1->f_1FD), 1);
				}
			}
		}
		else
		{
			iVar0 = func_103(uParam1, 0, 0, iLocal_191);
			func_10(uParam3, 0, 1065353216, 0, 0, 0);
		}
		if ((unk_0x77FC50899603581D(iLocal_200) && unk_0x8FD30584EB38411B(iLocal_200) >= 0.995f) || !unk_0x77FC50899603581D(iLocal_200))
		{
			bLocal_186 = true;
			if (unk_0xEF0E25DA0CB6E8FF(iLocal_206))
			{
				unk_0x4EC087603E1DEF9C(iLocal_206, 0);
				if (!unk_0x36CEFBE9B745A58D(iLocal_170[0]) && !unk_0x36CEFBE9B745A58D(iLocal_170[1]))
				{
					unk_0x49D46EE47C9CCB66(iLocal_170[0]);
					unk_0x49D46EE47C9CCB66(iLocal_170[1]);
					unk_0x2EB4D46478766D87(iLocal_170[0], 0, 0);
					unk_0x2EB4D46478766D87(iLocal_170[1], 0, 0);
				}
			}
			func_102();
		}
		if (func_414(&(uParam0->f_FE)) > 2f)
		{
			if (!iLocal_184)
			{
				if (uParam0->f_1C6)
				{
					if ((uParam0->f_1B5[0] + uParam0->f_1B5[1]) == 1)
					{
						iVar2 = 1;
					}
					else
					{
						iVar2 = 0;
					}
					func_230(&iLocal_170, iVar2);
				}
				else
				{
					func_229(&iLocal_170);
				}
				iLocal_184 = 1;
			}
		}
		if (iVar0 == 1)
		{
			unk_0x7456702622C62EA0(1);
			unk_0xC1300D0F3A74E20B(func_405(3));
			if (!unk_0x36CEFBE9B745A58D(iLocal_170[0]) && !unk_0x36CEFBE9B745A58D(iLocal_170[1]))
			{
				unk_0x44C98C11ED6DD327(iLocal_170[0]);
				unk_0x44C98C11ED6DD327(iLocal_170[1]);
			}
			func_101(uParam3);
			if (bParam4)
			{
				func_334(uParam2, 0, 0, 0, 0);
			}
			uParam0->f_1AD[0] = 0;
			uParam0->f_1AD[1] = 0;
			uParam0->f_1B0[0] = 0;
			uParam0->f_1B0[1] = 0;
			iLocal_30 = 1;
			func_412(&(uParam0->f_FE));
			*uParam0 = 9;
			iLocal_184 = 0;
			iLocal_182 = 0;
			bLocal_186 = false;
			func_98();
			iLocal_191 = 0;
			iLocal_166 = 0;
			uParam1->f_2A8 = 0;
			iLocal_192 = 0;
			bLocal_193 = false;
			func_90(&(uParam1->f_48));
			func_448();
		}
		else if (iVar0 == 2)
		{
			func_89(uParam3);
			unk_0xC1300D0F3A74E20B(func_405(3));
			if (uParam0->f_1BE[0] * 10 > 0)
			{
				func_52(func_85(), 21, uParam0->f_1BE[0] * 10, 0, 0);
			}
			unk_0xEB233A3B7635D2AC();
			*uParam0 = 13;
		}
		else if (((unk_0x694514BD37EC4E94(0, 234) || unk_0x694514BD37EC4E94(0, 235)) && uParam0->f_F8 == 1) && bVar1)
		{
			uParam0->f_1C9 = 0;
			if (iLocal_172)
			{
				vVar3 = { unk_0x541C2AEF053615BC(uParam0->f_5[iLocal_30 /*79*/][iLocal_195 /*26*/], true) };
				func_51(vVar3, 0, iLocal_172);
				iLocal_172 = 0;
			}
			else if (unk_0x694514BD37EC4E94(2, 190))
			{
				iLocal_195++;
				if (iLocal_195 >= uParam0->f_1B4)
				{
					iLocal_195 = 0;
				}
				vVar3 = { unk_0x541C2AEF053615BC(uParam0->f_5[iLocal_30 /*79*/][iLocal_195 /*26*/], true) };
				func_49(vVar3);
			}
			else if (unk_0x694514BD37EC4E94(2, 189))
			{
				iLocal_195 = (iLocal_195 - 1);
				if (iLocal_195 < 0)
				{
					iLocal_195 = (uParam0->f_1B4 - 1);
				}
				vVar3 = { unk_0x541C2AEF053615BC(uParam0->f_5[iLocal_30 /*79*/][iLocal_195 /*26*/], true) };
				func_49(vVar3);
			}
		}
		else if (((unk_0x694514BD37EC4E94(0, 211) || unk_0xF7DDAAF0EFDAFA22(0, 211)) && bVar1) && (iLocal_191 || !unk_0x97EF4023B86C354F()))
		{
			uParam1->f_2A8 = 1;
			func_114(&(uParam1->f_1FD), 0, 0, 1, 1);
			func_113(&(uParam1->f_1FD), "DARTS_CONT", 2, 215, 1, 1, 0);
			func_113(&(uParam1->f_1FD), "DARTS_REMATCH", 2, 216, 1, 1, 0);
			func_113(&(uParam1->f_1FD), "IB_BACK", 2, 202, 1, 1, 0);
			if (bLocal_193)
			{
				func_113(&(uParam1->f_1FD), "SCLB_PROFILE", 2, 217, 1, 1, 0);
			}
			func_110(&(uParam1->f_1FD), 1);
		}
	}
	else if (!uParam0->f_1C9)
	{
		unk_0x7456702622C62EA0(1);
		unk_0xEB233A3B7635D2AC();
		func_45(uParam3, uParam0->f_1C6, uParam0->f_1AD[iLocal_30], uParam0->f_1B0[iLocal_30], iLocal_106[2], uParam0->f_1B5[0], uParam0->f_1B5[1], uParam0->f_1B8[0], uParam0->f_1B8[1], uParam0->f_1BB[0], uParam0->f_1BB[1], bParam4);
		fVar4 = unk_0x3771EE4CB542D71E(1);
		if (fVar4 > 2f)
		{
			vVar5 = { 1992.294f, 3047.577f, 46.21517f };
			vVar6 = { 0f, 0f, 138.74f };
		}
		else
		{
			vVar5 = { 1992.336f, 3047.924f, 46.21517f };
			vVar6 = { 0f, 0f, 136.74f };
		}
		iVar7 = func_231();
		iLocal_200 = unk_0xD0D858E538FD01C3(vVar5, vVar6, 2);
		iLocal_206 = unk_0x578D5D08EC980893("DEFAULT_ANIMATED_CAMERA", 0);
		unk_0xA4DB448107C6D171(iLocal_206, iLocal_200, sLocal_259[iVar7], "mini@dartsoutro");
		unk_0x348665177DBFB93B(iLocal_206, true);
		unk_0x062C9995BFD27B2A(true, false, 3000, 1, 0, 0);
		if (!unk_0x36CEFBE9B745A58D(iLocal_170[0]) && !unk_0x36CEFBE9B745A58D(iLocal_170[1]))
		{
			if (uParam0->f_1C6)
			{
				unk_0xB62398E536F695FC(iLocal_170[0], iLocal_200, "mini@dartsoutro", sLocal_257[iVar7], 1000f, -1.5f, 0, 0, 1148846080, 0);
				unk_0xB62398E536F695FC(iLocal_170[1], iLocal_200, "mini@dartsoutro", sLocal_258[iVar7], 1000f, -1.5f, 0, 0, 1148846080, 0);
				unk_0xE896C0AD02364F2A(unk_0xBC25C936A095B5BA(), sLocal_255, sLocal_256[unk_0x491B2241281A03B7(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
			}
			else
			{
				unk_0xB62398E536F695FC(iLocal_170[1], iLocal_200, "mini@dartsoutro", sLocal_257[iVar7], 1000f, -1.5f, 0, 0, 1148846080, 0);
				unk_0xB62398E536F695FC(iLocal_170[0], iLocal_200, "mini@dartsoutro", sLocal_258[iVar7], 1000f, -1.5f, 0, 0, 1148846080, 0);
				unk_0xE896C0AD02364F2A(iLocal_170[1], sLocal_254, sLocal_256[unk_0x491B2241281A03B7(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
			}
		}
		bLocal_186 = false;
		uParam0->f_1C9 = 1;
		uParam1->f_29F = unk_0x105601648511CC64();
		iVar8 = 0;
		while (iVar8 < 2)
		{
			iVar9 = 0;
			while (iVar9 < 3)
			{
				func_235(&(uParam0->f_5[iVar8 /*79*/][iVar9 /*26*/]));
				iVar9++;
			}
			func_234(uParam2, iVar8);
			iVar8++;
		}
	}
	else if ((unk_0x105601648511CC64() - uParam1->f_29F) > 400 && func_41(uParam3, 0, 0))
	{
		if (!uParam0->f_1C6)
		{
			unk_0xC4BA30B532FE260F(-1, "LOOSE_MATCH", "HUD_MINI_GAME_SOUNDSET", 1);
		}
		iLocal_173 = 1;
	}
}

int func_41(var uParam0, bool bParam1, int iParam2)//Position - 0x4DA7
{
	uParam0->f_C = iParam2;
	func_44(uParam0);
	func_43(uParam0);
	if (unk_0x3362CDE8460ED38B(&(uParam0->f_226), "SPR_RESULT") || (unk_0x3362CDE8460ED38B(&(uParam0->f_226), "") && uParam0->f_38 > 0))
	{
		uParam0->f_236 = 1;
	}
	if (unk_0x7AF0088ABFA713B6())
	{
		unk_0x8AA3F48A15444B98("MPHud", false);
	}
	if (uParam0->f_1 == 0)
	{
		unk_0x8AA3F48A15444B98("CommonMenu", false);
		unk_0x8AA3F48A15444B98("MPLeaderboard", false);
		unk_0x8AA3F48A15444B98("MPHud", false);
		uParam0->f_1 = unk_0x9934FEFB3B8C6DB8("MP_BIG_MESSAGE_FREEMODE");
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
	}
	uParam0->f_4 = unk_0x4B4A22319BB70CD6("INSTRUCTIONAL_BUTTONS");
	if (bParam1)
	{
		while (((!unk_0xA7F138B5B1AB2CF6(uParam0->f_1) || !unk_0x499783D01578C2D2("CommonMenu")) || !unk_0x499783D01578C2D2("MPLeaderboard")) || !unk_0x499783D01578C2D2("MPHud"))
		{
			SYSTEM::WAIT(0);
		}
		if (uParam0->f_232 || uParam0->f_237)
		{
			while (!unk_0xA7F138B5B1AB2CF6(uParam0->f_4))
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	else
	{
		if (((!unk_0xA7F138B5B1AB2CF6(uParam0->f_1) || !unk_0x499783D01578C2D2("CommonMenu")) || !unk_0x499783D01578C2D2("MPLeaderboard")) || !unk_0x499783D01578C2D2("MPHud"))
		{
			return 0;
		}
		if (uParam0->f_232)
		{
			if (!unk_0xA7F138B5B1AB2CF6(uParam0->f_4))
			{
				return 0;
			}
		}
	}
	if (uParam0->f_232)
	{
		if (uParam0->f_237)
		{
			func_42(uParam0);
		}
		else if (uParam0->f_38 != 0)
		{
			func_11(uParam0, 1);
		}
		else
		{
			func_11(uParam0, 0);
		}
	}
	Global_11647 = 1;
	return 1;
}

void func_42(var uParam0)//Position - 0x4F47
{
	unk_0x29CD142125FE177B(uParam0->f_4, "CLEAR_ALL");
	unk_0xF9FBC2F3F73D94C9();
	if (unk_0x8ACB0C3FACC09467())
	{
		unk_0x29CD142125FE177B(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0x5E5DBD0A6623969E(true);
		unk_0xF9FBC2F3F73D94C9();
	}
	unk_0x29CD142125FE177B(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x1E1FB49121565EB6(2);
	func_13(unk_0xE57EAD1FEA2A6FAF(2, 188, true));
	func_12("ES_HELP_TU");
	unk_0xF9FBC2F3F73D94C9();
	unk_0x29CD142125FE177B(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x1E1FB49121565EB6(1);
	func_13(unk_0xE57EAD1FEA2A6FAF(2, 187, true));
	func_12("ES_HELP_TD");
	unk_0xF9FBC2F3F73D94C9();
	unk_0x29CD142125FE177B(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x1E1FB49121565EB6(0);
	func_13(unk_0xE57EAD1FEA2A6FAF(2, 202, true));
	func_12("ES_HELP_AB");
	unk_0xF9FBC2F3F73D94C9();
	unk_0x29CD142125FE177B(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0xF9FBC2F3F73D94C9();
}

void func_43(var uParam0)//Position - 0x500C
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 0f;
	unk_0x567A3300A78B3D65(0);
	unk_0xB8F3C51875F7BEA3(1f, func_27(16f));
	if (uParam0->f_1F == 0)
	{
		if (uParam0->f_1D)
		{
			unk_0xE746379C2AF24EF6("STRING");
			unk_0x607C19B90D297FE2(&(uParam0->f_D));
			fVar0 = unk_0x2207C0EA517B975D(1);
		}
		else
		{
			unk_0xE746379C2AF24EF6(&(uParam0->f_D));
			fVar0 = unk_0x2207C0EA517B975D(1);
		}
	}
	else
	{
		unk_0xE746379C2AF24EF6("STRING");
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar3 = 0;
		while (iVar3 < uParam0->f_1F)
		{
			switch (uParam0->f_20[iVar3])
			{
				case 0:
					unk_0xAA5C5BF0489E5553(uParam0->f_35[iVar1]);
					iVar1++;
					break;
				
				case 1:
					unk_0xC9C304D0AABE1335(&(uParam0->f_24[iVar2 /*16*/]));
					iVar2++;
					break;
				
				case 2:
					unk_0x607C19B90D297FE2(&(uParam0->f_24[iVar2 /*16*/]));
					iVar2++;
					break;
			}
			iVar3++;
		}
		fVar0 = unk_0x2207C0EA517B975D(1);
	}
	if (fVar0 > ((0.1125f * 2f) - (0.006f * 2f)))
	{
		*uParam0 = ((fVar0 / 2f) + (0.006f * 2f));
	}
}

void func_44(var uParam0)//Position - 0x5114
{
	uParam0->f_223 = 1f;
	uParam0->f_222 = 0;
	uParam0->f_238 = 0f;
	uParam0->f_22E = 0;
	uParam0->f_1E = 0f;
	uParam0->f_224 = 0f;
	uParam0->f_22F = 0f;
	uParam0->f_230 = 0f;
	uParam0->f_221 = 0;
	uParam0->f_233 = 0;
	uParam0->f_23C = 0;
	uParam0->f_234 = 0;
	uParam0->f_235 = 0;
	uParam0->f_236 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_23E = 0;
	uParam0->f_23F = 0;
	uParam0->f_23D = 1f;
}

void func_45(var uParam0, bool bParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x5193
{
	uParam0->f_231 = 1;
	if (bParam1)
	{
		func_48(uParam0, "DARTS_WINNER", "DARTS_YJ", 0);
	}
	else
	{
		func_48(uParam0, "DARTS_LOSE_R", "DARTS_YJ", 0);
	}
	func_47(uParam0, 1, "DARTS_NUM_T", "", uParam2, 0, 0, 0);
	func_47(uParam0, 1, "DARTS_NUM_B", "", uParam3, 0, 0, 0);
	func_47(uParam0, 1, "DARTS_NUM_180", "", uParam4, 0, 0, 0);
	if (bParam11)
	{
		func_47(uParam0, 2, "DARTS_WIN", "", iParam5, (iParam5 + iParam6), 0, 0);
		func_47(uParam0, 2, "DARTS_SWIN", "", iParam7, (iParam7 + iParam8), 0, 0);
	}
	func_47(uParam0, 2, "DARTS_GWIN", "", iParam9, (iParam9 + iParam10), 0, 0);
	func_46(uParam0, 0, "", 0, 0, 0, 0, 0);
	func_36(1);
}

void func_46(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x5265
{
	uParam0->f_225 = iParam1;
	StringCopy(&(uParam0->f_226), sParam2, 16);
	uParam0->f_22A = iParam3;
	uParam0->f_22B = iParam4;
	uParam0->f_22C = iParam5;
	uParam0->f_22D = iParam6;
	uParam0->f_240 = iParam7;
}

void func_47(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7)//Position - 0x52A0
{
	int iVar0;
	
	if (uParam0->f_38 == 13)
	{
		return;
	}
	iVar0 = uParam0->f_38;
	uParam0->f_39[iVar0] = iParam1;
	StringCopy(&(uParam0->f_47[iVar0 /*16*/]), sParam2, 64);
	StringCopy(&(uParam0->f_118[iVar0 /*16*/]), sParam3, 64);
	uParam0->f_1E9[iVar0] = uParam4;
	uParam0->f_1F7[iVar0] = iParam5;
	uParam0->f_205[iVar0] = iParam6;
	uParam0->f_213[iVar0] = iParam7;
	uParam0->f_38++;
}

void func_48(var uParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x5313
{
	StringCopy(&(uParam0->f_5), sParam1, 16);
	StringCopy(&(uParam0->f_D), sParam2, 64);
	uParam0->f_1D = iParam3;
	uParam0->f_B = 0;
}

void func_49(vector3 vParam0)//Position - 0x5336
{
	vector3 vVar0;
	
	vVar0 = { func_50(vParam0) };
	if (bLocal_88)
	{
		unk_0x6125108F6208C1F6(iLocal_86, vVar0);
		unk_0xAE099C1ADC89C331(iLocal_86, iLocal_85, 500, 1, 1);
		bLocal_88 = false;
	}
	else
	{
		unk_0x6125108F6208C1F6(iLocal_85, vVar0);
		unk_0xAE099C1ADC89C331(iLocal_85, iLocal_86, 500, 1, 1);
		bLocal_88 = true;
	}
}

Vector3 func_50(vector3 vParam0)//Position - 0x5386
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar1 = { 0.3495f, -0.0276f, -0.0114f };
	vVar0 = { vParam0 - vVar1 };
	return vVar0;
}

void func_51(vector3 vParam0, bool bParam1, bool bParam2)//Position - 0x53B2
{
	vector3 vVar0;
	
	vVar0 = { func_50(vParam0) };
	if (bParam1)
	{
		unk_0x6125108F6208C1F6(iLocal_85, vVar0);
		unk_0xAE099C1ADC89C331(iLocal_85, iLocal_84, 1500, 1, 1);
		unk_0x348665177DBFB93B(iLocal_84, false);
		unk_0x6125108F6208C1F6(iLocal_86, vVar0);
		bLocal_88 = true;
	}
	else if (bParam2)
	{
		unk_0x6125108F6208C1F6(iLocal_85, vVar0);
		unk_0xAE099C1ADC89C331(iLocal_85, iLocal_77, 2000, 1, 1);
		bLocal_88 = true;
	}
	else
	{
		if (bLocal_88)
		{
			unk_0xAE099C1ADC89C331(iLocal_84, iLocal_85, 1500, 1, 1);
		}
		else
		{
			unk_0xAE099C1ADC89C331(iLocal_84, iLocal_86, 1500, 1, 1);
		}
		unk_0x348665177DBFB93B(iLocal_85, false);
	}
}

void func_52(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x5444
{
	int iVar0;
	int iVar1;
	
	if (Global_19B04.f_6D75[iParam0 /*29*/].f_11 == 3)
	{
		return;
	}
	if (Global_19B04.f_6D75[iParam0 /*29*/].f_11 == 4)
	{
		return;
	}
	func_53(Global_19B04.f_6D75[iParam0 /*29*/].f_11, 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		unk_0x6CB99B97664C3727(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x3A57956BCE003880(iVar1, iVar0, 1);
	}
}

int func_53(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x552B
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_84();
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
					func_83(99, 1);
					func_82(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_82(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_82(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_66(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_62(5))
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
							func_82(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_82(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_82(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_62(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_82(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_82(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_82(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_82(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_82(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_82(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_82(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_82(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_82(joaat("sp2_money_spent_property"), iParam3);
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
									func_82(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_82(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_82(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_82(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_82(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_82(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_62(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_82(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_82(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_82(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_82(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_82(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_82(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_61(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_83(95, iParam3);
					break;
				
				case 1:
					func_83(97, iParam3);
					break;
				
				case 2:
					func_83(96, iParam3);
					break;
			}
			func_83(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_56(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_56(iVar1);
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
					func_82(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_82(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_82(joaat("sp2_total_cash_earned"), iParam3);
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
	func_55(iParam0);
	if (Global_8C41 == 15)
	{
		func_54(0);
	}
	return 1;
}

void func_54(bool bParam0)//Position - 0x5B2A
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

void func_55(int iParam0)//Position - 0x5DAC
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

void func_56(int iParam0)//Position - 0x5E06
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_59(129, 0, -1, 1);
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
	else if (unk_0xFA30DFD0084E92FE(Global_19B04.f_5037.f_1D7, iParam0) || unk_0xFA30DFD0084E92FE(Global_200000[func_58() /*12171*/].f_1E08.f_A, iParam0))
	{
		bVar0 = true;
		unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_5037.f_1D7), iParam0);
		unk_0x7CB6FD92BE491AD9(&(Global_200000[func_58() /*12171*/].f_1E08.f_A), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x2E94302CFF011F2E("COUP_RED");
		unk_0xC9C304D0AABE1335(func_57(iParam0));
		unk_0x7BB0762D8C75A3C7(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_57(int iParam0)//Position - 0x5EDD
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

int func_58()//Position - 0x5F65
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_59(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x5F72
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
		iParam2 = func_60();
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

int func_60()//Position - 0x648C
{
	return Global_1407E0;
}

void func_61(int iParam0)//Position - 0x6498
{
	func_83(93, iParam0);
	func_83(29, iParam0);
	func_83(30, iParam0);
}

bool func_62(int iParam0)//Position - 0x64B8
{
	if (iParam0 == 8)
	{
		return func_63(129, -1, -1);
	}
	if (!unk_0x7AF0088ABFA713B6())
	{
		return unk_0xFA30DFD0084E92FE(Global_19B04.f_5037.f_1D7, iParam0);
	}
	return unk_0xFA30DFD0084E92FE(Global_200000[func_58() /*12171*/].f_1E08.f_A, iParam0);
}

int func_63(int iParam0, int iParam1, int iParam2)//Position - 0x6506
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_60();
	}
	iVar1 = func_65(iParam0, iParam1);
	uVar2 = func_64(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDAB376DC6F83D68C(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_64(int iParam0)//Position - 0x6543
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

int func_65(int iParam0, int iParam1)//Position - 0x682F
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_60();
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

int func_66(bool bParam0)//Position - 0x6AFC
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
		func_81(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_67(27, 1);
	return 1;
}

int func_67(int iParam0, int iParam1)//Position - 0x6BB3
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_68(iParam0, iParam1);
}

int func_68(int iParam0, int iParam1)//Position - 0x6BCE
{
	if (func_80(14) && !func_79(iParam0))
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
	if (func_78(&Global_411EB6))
	{
		if (func_76(&Global_411EB6, iParam0))
		{
			return 0;
		}
		if (func_69(&Global_411EB6, iParam0))
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

int func_69(var uParam0, int iParam1)//Position - 0x6C6B
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x6D5CBCB6411EDE89(iParam1))
	{
		return 0;
	}
	if (func_80(14) && !func_79(iParam1))
	{
		return 0;
	}
	if (func_76(uParam0, iParam1))
	{
		return 0;
	}
	if (func_75(uParam0) < 0f)
	{
		func_74(uParam0, 0);
	}
	func_72(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_70(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_70(var uParam0, int iParam1)//Position - 0x6D1C
{
	int iVar0;
	
	if (unk_0x6D5CBCB6411EDE89(iParam1))
	{
		return 0;
	}
	if (func_80(14) && !func_79(iParam1))
	{
		return 0;
	}
	if (func_76(uParam0, iParam1))
	{
		return 0;
	}
	if (func_75(uParam0) < 0f)
	{
		func_74(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_71(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_71(var uParam0, int iParam1)//Position - 0x6D97
{
	return (*uParam0)[iParam1] == 78;
}

void func_72(var uParam0)//Position - 0x6DA8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_73(uParam0, iVar0);
		iVar0++;
	}
	func_74(uParam0, (Global_411EB5 - 0.5f));
}

void func_73(var uParam0, int iParam1)//Position - 0x6DDC
{
	(*uParam0)[iParam1] = 78;
}

void func_74(var uParam0, float fParam1)//Position - 0x6DEC
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

float func_75(var uParam0)//Position - 0x6E09
{
	return uParam0->f_50;
}

bool func_76(var uParam0, int iParam1)//Position - 0x6E15
{
	return func_77(uParam0, iParam1) != -1;
}

int func_77(var uParam0, int iParam1)//Position - 0x6E27
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

bool func_78(var uParam0)//Position - 0x6E54
{
	return uParam0->f_4F == 1;
}

int func_79(int iParam0)//Position - 0x6E62
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

bool func_80(int iParam0)//Position - 0x6EB2
{
	return Global_8C41 == iParam0;
}

int func_81(int iParam0, int iParam1)//Position - 0x6EC0
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

void func_82(int iParam0, int iParam1)//Position - 0x6F11
{
	int iVar0;
	
	unk_0x6CB99B97664C3727(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x3A57956BCE003880(iParam0, iVar0, 1);
}

void func_83(int iParam0, int iParam1)//Position - 0x6F34
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

void func_84()//Position - 0x6F91
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

int func_85()//Position - 0x7006
{
	func_86();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_86()//Position - 0x701F
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_88(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_489(unk_0xBC25C936A095B5BA());
			if (func_87(iVar0) && (!func_80(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_87(Global_19B04.f_932.f_21B.f_10CD))
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

bool func_87(int iParam0)//Position - 0x711C
{
	return iParam0 < 3;
}

int func_88(int iParam0)//Position - 0x7128
{
	if (func_87(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_89(var uParam0)//Position - 0x7152
{
	if (uParam0->f_231 || uParam0->f_23C <= uParam0->f_22E)
	{
		uParam0->f_231 = 0;
		uParam0->f_22E = (uParam0->f_23C - 1);
	}
}

void func_90(var uParam0)//Position - 0x7185
{
	if (uParam0->f_4 != 0)
	{
		func_97(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
	}
	if (((*uParam0)[0] != 0 || (*uParam0)[1] != 0) || (*uParam0)[2] != 0)
	{
		func_96(uParam0);
		func_95(uParam0);
		func_94(&Global_1C1269);
	}
	if (Global_1C017E.f_A94 != 0 || Global_1C017E.f_C70)
	{
		func_92();
	}
	if (unk_0x144E80F5C46A6B75("LEADERBOARD_SCENE"))
	{
		unk_0xC1300D0F3A74E20B("LEADERBOARD_SCENE");
	}
	if (unk_0x57D316754A262B34())
	{
		func_91(&(Global_1C171A.f_31));
	}
	Global_267214.f_F71 = 0;
}

void func_91(var uParam0)//Position - 0x7226
{
	uParam0->f_1 = 0;
}

void func_92()//Position - 0x7233
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	
	Var2.f_3C = 6;
	Var2.f_43 = 6;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 12)
		{
			Global_1C017E[iVar0 /*901*/][iVar1 /*75*/] = { Var2 };
			iVar1++;
		}
		Global_1C017E.f_A90[iVar0] = 0;
		iVar0++;
	}
	Global_1C017E.f_A94 = 0;
	Global_1C017E.f_A95 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1C017E.f_A96[iVar0] = 0;
		StringCopy(&(Global_1C017E.f_A9D[iVar0 /*6*/]), "", 24);
		Global_1C017E.f_AC2[iVar0] = 0;
		Global_1C017E.f_AC9[iVar0] = 0;
		iVar0++;
	}
	Global_1C017E.f_AD0 = 0;
	Global_1C017E.f_AD1 = 0;
	Global_1C017E.f_AD2 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_1C017E.f_AD3[iVar0] = 0;
		Global_1C017E.f_AD7[iVar0] = 0;
		iVar0++;
	}
	Global_1C017E.f_ADB = 0;
	func_93(&(Global_1C017E.f_ADC));
	func_91(&(Global_1C017E.f_B07));
	Global_1C017E.f_B09 = -1;
	Global_1C017E.f_B0A = 0;
	func_91(&(Global_1C017E.f_B0B));
	Global_1C017E.f_B0D = 0;
	func_91(&(Global_1C017E.f_B0E));
	Global_1C017E.f_B10 = 0;
	Global_1C017E.f_ADC.f_1C = 0;
	Global_1C017E.f_ADC.f_1B = 0;
	Global_1C017E.f_C70 = 0;
}

void func_93(var uParam0)//Position - 0x739F
{
	int iVar0;
	
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 32);
	StringCopy(&(uParam0->f_9), "", 64);
	uParam0->f_19 = 1;
	uParam0->f_1A = 0;
	uParam0->f_1B = 0;
	uParam0->f_1C = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_1D[iVar0] = 0;
		uParam0->f_24[iVar0] = 0;
		iVar0++;
	}
}

void func_94(var uParam0)//Position - 0x73F7
{
	struct<13> Var0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 12)
	{
		StringCopy(uParam0[iVar1 /*100*/], "", 64);
		StringCopy(&((uParam0[iVar1 /*100*/])->f_10), "", 64);
		(uParam0[iVar1 /*100*/])->f_20 = { Var0 };
		(uParam0[iVar1 /*100*/])->f_2D = { Var0 };
		(uParam0[iVar1 /*100*/])->f_3A = 0;
		(uParam0[iVar1 /*100*/])->f_3B = 0;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			(uParam0[iVar1 /*100*/])->f_3C[iVar2] = 0f;
			(uParam0[iVar1 /*100*/])->f_43[iVar2] = 0;
			iVar2++;
		}
		(uParam0[iVar1 /*100*/])->f_4B = 0;
		(uParam0[iVar1 /*100*/])->f_4A = 0;
		(uParam0[iVar1 /*100*/])->f_4C = 0;
		(uParam0[iVar1 /*100*/])->f_4D = 0;
		(uParam0[iVar1 /*100*/])->f_4E = 0;
		(uParam0[iVar1 /*100*/])->f_4F = 0;
		StringCopy(&((uParam0[iVar1 /*100*/])->f_50), "", 16);
		iVar1++;
	}
	func_91(&(Global_1C017E.f_B0E));
}

void func_95(var uParam0)//Position - 0x74D9
{
	int iVar0;
	struct<13> Var1;
	
	uParam0->f_F6 = 0;
	uParam0->f_F6.f_1 = -1;
	uParam0->f_F6.f_2 = 0;
	func_91(&(uParam0->f_F6.f_3));
	uParam0->f_F6.f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_F6.f_6[iVar0 /*15*/] = -1;
		uParam0->f_F6.f_6[iVar0 /*15*/].f_1 = 0;
		uParam0->f_F6.f_6[iVar0 /*15*/].f_2 = { Var1 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_F6.f_BB[iVar0] = 0;
		iVar0++;
	}
}

void func_96(var uParam0)//Position - 0x7561
{
	int iVar0;
	struct<35> Var1;
	
	(*uParam0)[0] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[2] = 0;
	uParam0->f_4 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = { Var1 };
	uParam0->f_2A = 0;
	uParam0->f_2B = 0;
	uParam0->f_2C = 0;
	uParam0->f_2C.f_1 = 0;
	uParam0->f_2C.f_2 = 0;
	uParam0->f_2C.f_3 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_2C.f_3.f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_2C.f_3.f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
	uParam0->f_71[0 /*66*/] = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_71[0 /*66*/].f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_71[0 /*66*/].f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
}

void func_97(var uParam0, var uParam1, var uParam2)//Position - 0x762F
{
	*uParam0 = 0;
	*uParam1 = 0;
	Global_1C0000 = 0;
	func_91(&(Global_1C0000.f_1));
	unk_0xA94A29B5BBA15E49(*uParam2, uParam2->f_1, -1);
}

void func_98()//Position - 0x765B
{
	struct<68> Var0;
	
	Global_1C0005 = 0;
	Global_1C0005.f_1 = 0;
	Global_1C0005.f_2 = 0;
	Global_1C0005.f_3 = 0;
	Global_1C0005.f_4 = 0;
	func_100(&(Global_1C0005.f_49));
	func_100(&(Global_1C0005.f_8E));
	func_100(&(Global_1C0005.f_D3));
	func_100(&(Global_1C0005.f_118));
	StringCopy(&(Global_1C0005.f_15D), "", 24);
	StringCopy(&(Global_1C0005.f_163), "", 24);
	func_99(&(Global_1C0005.f_169));
	Global_1C0005.f_176 = -1;
	Global_1C017C = 0;
	Global_1C017D = 0;
	Var0.f_2.f_1 = 4;
	Global_1C0005.f_5 = { Var0 };
}

void func_99(var uParam0)//Position - 0x76FF
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

void func_100(var uParam0)//Position - 0x7747
{
	int iVar0;
	
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		uParam0->f_3[iVar0] = 0f;
		uParam0->f_24[iVar0] = 0;
		iVar0++;
	}
}

void func_101(var uParam0)//Position - 0x7782
{
	func_44(uParam0);
	uParam0->f_23A = 0;
	uParam0->f_1F = 0;
	uParam0->f_38 = 0;
	uParam0->f_237 = 0;
	uParam0->f_239 = 0;
}

void func_102()//Position - 0x77AC
{
	unk_0x348665177DBFB93B(iLocal_81, true);
}

int func_103(var uParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x77BB
{
	if (!func_3(&(uParam0->f_29A), 7))
	{
		if (!func_3(&(uParam0->f_29A), 9))
		{
			func_36(1);
			func_114(&(uParam0->f_1FD), 0, 0, 1, 1);
			func_113(&(uParam0->f_1FD), "DARTS_CONT", 2, 215, 1, 1, 0);
			if (!bParam2)
			{
				func_113(&(uParam0->f_1FD), "DARTS_REMATCH", 2, 216, 1, 1, 0);
			}
			else
			{
				func_113(&(uParam0->f_1FD), "DARTS_REPLAY", 2, 216, 1, 1, 0);
			}
			if (iParam3 || !unk_0x97EF4023B86C354F())
			{
				func_113(&(uParam0->f_1FD), "HUD_LBD_LBD", 2, 211, 1, 1, 0);
			}
			func_110(&(uParam0->f_1FD), 1);
			func_322(&(uParam0->f_29A), 8, 0);
			func_322(&(uParam0->f_29A), 9, 1);
		}
		if (!func_3(&(uParam0->f_29A), 14))
		{
			if (bParam1)
			{
				if (!bParam2)
				{
					func_106(func_109(uParam0->f_29C < uParam0->f_29D, uParam0->f_29C, uParam0->f_29D), func_108(uParam0->f_29C < uParam0->f_29D, &(uParam0->f_288), &(uParam0->f_28E)), -1, 1, 2, 1, 0, 1, 0, 0, 0, 0);
					func_106(func_109(uParam0->f_29C >= uParam0->f_29D, uParam0->f_29C, uParam0->f_29D), func_108(uParam0->f_29C >= uParam0->f_29D, &(uParam0->f_288), &(uParam0->f_28E)), -1, 1, 2, 1, 0, 1, 0, 0, 0, 0);
				}
				else
				{
					func_106(uParam0->f_29C, &(uParam0->f_288), -1, 1, 2, 1, 0, 1, 0, 0, 0, 0);
				}
				func_401(&(uParam0->f_39), 0, 0);
			}
			func_116(&(uParam0->f_1FD), 1128792064, 1, 0, 1, 1065353216);
		}
		if (!unk_0xE186ACC7BE9B244E())
		{
			if ((unk_0x105601648511CC64() - uParam0->f_29F) > 900)
			{
				if (unk_0x8FCEEB789599BD9B(2, 216))
				{
					unk_0xC4BA30B532FE260F(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					func_322(&(uParam0->f_29A), 9, 0);
					return 1;
				}
				else if (unk_0x694514BD37EC4E94(2, 215))
				{
					unk_0xC4BA30B532FE260F(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					func_105();
					func_104();
					return 2;
				}
			}
		}
	}
	else
	{
		func_2(uParam0);
		if (unk_0x093484B35A948BFC(2, 201))
		{
			return 2;
		}
		else if (unk_0x093484B35A948BFC(2, 202))
		{
			func_322(&(uParam0->f_29A), 9, 0);
			func_322(&(uParam0->f_29A), 7, 0);
		}
	}
	return 0;
}

void func_104()//Position - 0x79F6
{
	if (Global_252E21.f_A8F[0 /*80*/].f_2 != 0)
	{
		Global_252E21.f_A8F[0 /*80*/].f_2 = 5;
	}
}

void func_105()//Position - 0x7A1B
{
	Global_634D = 1;
}

void func_106(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x7A27
{
	int iVar0;
	int iVar1;
	
	if (func_107(sParam6))
	{
		sParam6 = "NUMBER";
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_31(3, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_14D262.f_1 = 1;
		func_30(3, iVar0);
		Global_14D262.f_A3F[iVar0] = iParam0;
		StringCopy(&(Global_14D262.f_A3F.f_B[iVar0 /*16*/]), sParam1, 64);
		Global_14D262.f_A3F.f_B7[iVar0] = iParam3;
		Global_14D262.f_A3F.f_AC[iVar0] = iParam2;
		Global_14D262.f_A3F.f_CD[iVar0] = iParam4;
		Global_14D262.f_A3F.f_D8[iVar0] = iParam5;
		StringCopy(&(Global_14D262.f_A3F.f_103[iVar0 /*16*/]), sParam6, 64);
		Global_14D262.f_A3F.f_1A4[iVar0] = iParam7;
		Global_14D262.f_A3F.f_1C5[iVar0] = iParam8;
		Global_14D262.f_A3F.f_1AF[iVar0] = iParam9;
		Global_14D262.f_A3F.f_1BA[iVar0] = iParam10;
		Global_14D262.f_A3F.f_1D0[iVar0] = iParam11;
	}
}

int func_107(char* sParam0)//Position - 0x7B39
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

char* func_108(bool bParam0, char* sParam1, char* sParam2)//Position - 0x7B73
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_109(bool bParam0, int iParam1, int iParam2)//Position - 0x7B8A
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_110(var uParam0, bool bParam1)//Position - 0x7BA1
{
	if (bParam1)
	{
		func_112(&(uParam0->f_1), 1024);
	}
	else
	{
		func_111(&(uParam0->f_1), 1024);
	}
}

void func_111(var uParam0, int iParam1)//Position - 0x7BC7
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_112(var uParam0, int iParam1)//Position - 0x7BDC
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_113(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x7BED
{
	int iVar0;
	int iVar1;
	
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (iParam5 == 1)
	{
		iVar0 = 1;
	}
	iVar1 = uParam0->f_7B;
	if (iVar1 < 8)
	{
		uParam0->f_2[iVar1 /*15*/] = sParam1;
		uParam0->f_2[iVar1 /*15*/].f_1 = iVar0;
		uParam0->f_2[iVar1 /*15*/].f_2 = iParam6;
		uParam0->f_2[iVar1 /*15*/].f_C = 0;
		uParam0->f_2[iVar1 /*15*/].f_D = 0;
		uParam0->f_2[iVar1 /*15*/].f_E = 0;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		if (iParam4 == 1)
		{
			unk_0xF0059F27F7BB6680(&(uParam0->f_2[iVar1 /*15*/].f_D), 0);
		}
		uParam0->f_2[iVar1 /*15*/].f_E++;
		uParam0->f_7B++;
		return 1;
	}
	return 0;
}

void func_114(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x7CB6
{
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0x4B4A22319BB70CD6("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_7B = 0;
	if (bParam1)
	{
		func_112(&(uParam0->f_1), 32);
	}
	if (unk_0xA7F138B5B1AB2CF6(*uParam0))
	{
		func_112(&(uParam0->f_1), 1);
		if (bParam2)
		{
			unk_0xAD45B3B464AA7C2E(*uParam0, 1);
		}
	}
	if (unk_0x8ACB0C3FACC09467())
	{
		if (bParam3)
		{
			func_112(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_112(&(uParam0->f_1), 8192);
	}
}

int func_115(var uParam0)//Position - 0x7D30
{
	if ((unk_0xFA30DFD0084E92FE(uParam0->f_2A, 1) && Global_1C017E.f_A90[0] > 0) && uParam0->f_F6.f_1 >= 0)
	{
		return 1;
	}
	return 0;
}

void func_116(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)//Position - 0x7D67
{
	int iVar0;
	int iVar1;
	bool bVar2;
	char* sVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	
	if (((unk_0x422F9EDE839E6ABB() || unk_0x26641E1BFD792DBC()) || unk_0x17FAADF9916EF741()) || unk_0xF6023EB13558345B())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_119(uParam0))
	{
		return;
	}
	unk_0x37CCF3DE21C7FD23();
	unk_0x996AC9A66B2A5A3F(iParam2);
	if (!func_118(uParam0->f_1, 256) || (func_118(uParam0->f_1, 8192) && unk_0x8A0D8839261BAEEF(2)))
	{
		unk_0x29CD142125FE177B(*uParam0, "SET_CLEAR_SPACE");
		unk_0xD44E04EBBDC4CE88(fParam1);
		unk_0xF9FBC2F3F73D94C9();
		unk_0x29CD142125FE177B(*uParam0, "SET_MAX_WIDTH");
		unk_0xD44E04EBBDC4CE88(fParam5);
		unk_0xF9FBC2F3F73D94C9();
		unk_0x29CD142125FE177B(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0xF9FBC2F3F73D94C9();
		if (unk_0x8ACB0C3FACC09467())
		{
			unk_0x29CD142125FE177B(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			unk_0x5E5DBD0A6623969E(func_118(uParam0->f_1, 4096));
			unk_0xF9FBC2F3F73D94C9();
		}
		iVar5 = 0;
		iVar6 = 0;
		while (iVar6 < uParam0->f_7B)
		{
			switch (uParam0->f_2[iVar6 /*15*/].f_2)
			{
				case 0:
					bVar4 = true;
					break;
				
				case 1:
					bVar4 = unk_0x50465D2C022B9E04(2);
					break;
				
				case 2:
					bVar4 = !unk_0x50465D2C022B9E04(2);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (unk_0x29CD142125FE177B(*uParam0, "SET_DATA_SLOT"))
				{
					unk_0x1E1FB49121565EB6(iVar5);
					iVar5++;
					iVar7 = 0;
					while (iVar7 < uParam0->f_2[iVar6 /*15*/].f_E)
					{
						iVar0 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/];
						iVar1 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/].f_1;
						bVar2 = unk_0xFA30DFD0084E92FE(uParam0->f_2[iVar6 /*15*/].f_D, iVar7);
						if (!unk_0xFA30DFD0084E92FE(uParam0->f_2[iVar6 /*15*/].f_C, iVar7))
						{
							sVar3 = unk_0xE57EAD1FEA2A6FAF(iVar0, iVar1, bVar2);
						}
						else
						{
							sVar3 = unk_0xC7CF72D26EA6A227(iVar0, iVar1, bVar2);
						}
						if (!unk_0xF1734B55490E9045(sVar3))
						{
							func_13(sVar3);
						}
						iVar7++;
					}
					if (!unk_0xF1734B55490E9045(uParam0->f_2[iVar6 /*15*/]))
					{
						func_12(uParam0->f_2[iVar6 /*15*/]);
					}
					if (unk_0x8ACB0C3FACC09467())
					{
						if (func_118(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6 /*15*/].f_1)
							{
								unk_0x5E5DBD0A6623969E(true);
								unk_0x1E1FB49121565EB6(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
							}
							else
							{
								unk_0x5E5DBD0A6623969E(false);
								unk_0x1E1FB49121565EB6(-1);
							}
						}
					}
					unk_0xF9FBC2F3F73D94C9();
				}
			}
			iVar6++;
		}
		fVar8 = func_117(bParam4, func_117(func_118(uParam0->f_1, 32), 1f, 0f), -1f);
		unk_0x29CD142125FE177B(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0xD44E04EBBDC4CE88(fVar8);
		unk_0xF9FBC2F3F73D94C9();
		unk_0x29CD142125FE177B(*uParam0, "SET_BACKGROUND_COLOUR");
		unk_0xD44E04EBBDC4CE88(0f);
		unk_0xD44E04EBBDC4CE88(0f);
		unk_0xD44E04EBBDC4CE88(0f);
		unk_0xD44E04EBBDC4CE88(80f);
		unk_0xF9FBC2F3F73D94C9();
		func_112(&(uParam0->f_1), 256);
		func_111(&(uParam0->f_1), 128);
	}
	unk_0x4B6031094354FED6(*uParam0, 255, 255, 255, 0, 0);
}

float func_117(bool bParam0, float fParam1, float fParam2)//Position - 0x8029
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_118(var uParam0, int iParam1)//Position - 0x8040
{
	return (uParam0 && iParam1) != 0;
}

int func_119(var uParam0)//Position - 0x804F
{
	if (*uParam0 != 0)
	{
		if (unk_0xA7F138B5B1AB2CF6(*uParam0))
		{
			func_112(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

void func_120(var uParam0, var uParam1)//Position - 0x8076
{
	func_121(uParam1, uParam0);
}

void func_121(var uParam0, var uParam1)//Position - 0x8086
{
	int iVar0;
	int iVar1;
	var uVar2[3];
	int iVar3;
	bool bVar4;
	bool bVar5;
	struct<8> Var6;
	char[] cVar7[8];
	int iVar8[3];
	int iVar9;
	struct<13> Var10;
	var uVar11;
	vector3 vVar12;
	vector3 vVar13;
	bool bVar14;
	
	func_196(&(Global_1C171A.f_31), 1, 0);
	unk_0x39CC55A2108C1AB0();
	func_195();
	func_38(0);
	unk_0xDE7B9CB38D019BF0();
	func_193(1);
	unk_0x4E0EC60D119222B1(10);
	func_192(1);
	func_191(1);
	if (!func_188())
	{
		if (!unk_0x144E80F5C46A6B75("LEADERBOARD_SCENE"))
		{
			unk_0xD6423910AAD8A379("LEADERBOARD_SCENE");
		}
	}
	if (!unk_0xFA30DFD0084E92FE(uParam1->f_2A, 3))
	{
		*uParam0 = func_187();
		unk_0xF0059F27F7BB6680(&(uParam1->f_2A), 3);
	}
	Var10 = { func_23(unk_0xB5CEFD608600A09F()) };
	if (unk_0xA7F138B5B1AB2CF6(*uParam0))
	{
		if (((!unk_0x6EFCE916927099A8() || !unk_0x97EF4023B86C354F()) || (!unk_0x36C1DE668967177B() && unk_0x11F704A1BA7AC122())) || Global_1C017E.f_B10 != 0)
		{
			if (!unk_0x97EF4023B86C354F())
			{
				if (Global_1C017E.f_B0D != 2)
				{
					unk_0x7CB6FD92BE491AD9(&(uParam1->f_2A), 1);
					Global_1C017E.f_B0D = 2;
				}
			}
			else if (!unk_0x36C1DE668967177B() && unk_0x11F704A1BA7AC122())
			{
				if (Global_1C017E.f_B0D != 3)
				{
					unk_0x7CB6FD92BE491AD9(&(uParam1->f_2A), 1);
					Global_1C017E.f_B0D = 3;
				}
			}
			else if (!unk_0x6EFCE916927099A8())
			{
				if (Global_1C017E.f_B0D != 4)
				{
					unk_0x7CB6FD92BE491AD9(&(uParam1->f_2A), 1);
					Global_1C017E.f_B0D = 4;
				}
			}
			else if (Global_1C017E.f_B10 != 0)
			{
				if (Global_1C017E.f_B0D != 5)
				{
					unk_0x7CB6FD92BE491AD9(&(uParam1->f_2A), 1);
					Global_1C017E.f_B0D = 5;
				}
			}
			if (!unk_0xFA30DFD0084E92FE(uParam1->f_2A, 1))
			{
				unk_0x29CD142125FE177B(*uParam0, "CLEAR_ALL_SLOTS");
				unk_0xF9FBC2F3F73D94C9();
				func_186(*uParam0, Global_1C017E.f_ADC);
				if (unk_0x0F6F4C227FB5DD52(&(Global_1C017E.f_ADC.f_1)))
				{
					if (!func_185(uParam1->f_2C))
					{
						if (Global_1C017E.f_ADC.f_1A > 0)
						{
							Var6 = { Global_1C017E.f_ADC.f_9 };
							func_184(*uParam0, &(Global_1C017E.f_ADC.f_1), &cVar7, &Var6, Global_1C017E.f_ADC.f_19, Global_1C017E.f_ADC.f_1A);
						}
						else
						{
							func_184(*uParam0, &(Global_1C017E.f_ADC.f_1), &cVar7, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, -1);
						}
					}
					else if (!Global_1C017E.f_ADC.f_1B)
					{
						StringCopy(&Var6, "FMMC_COR_SCLB5", 64);
						if (Global_1C017E.f_ADC.f_1A > 0)
						{
							func_184(*uParam0, &(Global_1C017E.f_ADC.f_1), &Var6, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, Global_1C017E.f_ADC.f_1A);
						}
						else
						{
							func_184(*uParam0, &(Global_1C017E.f_ADC.f_1), &Var6, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, -1);
						}
					}
					else
					{
						StringCopy(&Var6, "FMMC_COR_SCLB6", 64);
						if (Global_1C017E.f_ADC.f_1A > 0)
						{
							func_184(*uParam0, &(Global_1C017E.f_ADC.f_1), &Var6, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, Global_1C017E.f_ADC.f_1A);
						}
						else
						{
							func_184(*uParam0, &(Global_1C017E.f_ADC.f_1), &Var6, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, -1);
						}
					}
					func_183(*uParam0, "SCLB_C_RANK", &(Global_1C017E.f_A9D), Global_1C017E.f_A94);
				}
				iVar9 = 0;
				unk_0xF0059F27F7BB6680(&iVar9, 4);
				func_182(*uParam0, &iVar3, iVar9, 1, 1);
				iVar9 = 0;
				unk_0xF0059F27F7BB6680(&iVar9, 5);
				func_182(*uParam0, &iVar3, iVar9, 1, 1);
				iVar9 = 0;
				unk_0xF0059F27F7BB6680(&iVar9, 6);
				func_182(*uParam0, &iVar3, iVar9, 1, 1);
				unk_0xF0059F27F7BB6680(&(uParam1->f_2A), 1);
				func_181(*uParam0);
				unk_0x7CB6FD92BE491AD9(&(uParam1->f_2A), 2);
				unk_0x7456702622C62EA0(1);
			}
			else
			{
				func_181(*uParam0);
			}
		}
		else
		{
			if (Global_1C017E.f_B0D != 1)
			{
				unk_0x7CB6FD92BE491AD9(&(uParam1->f_2A), 1);
				Global_1C017E.f_B0D = 1;
			}
			if (!func_146(uParam1))
			{
				uParam1->f_F6.f_1 = -1;
				unk_0x7CB6FD92BE491AD9(&(uParam1->f_2A), 1);
				if (!unk_0xFA30DFD0084E92FE(uParam1->f_2A, 0))
				{
					unk_0x29CD142125FE177B(*uParam0, "CLEAR_ALL_SLOTS");
					unk_0xF9FBC2F3F73D94C9();
					func_186(*uParam0, Global_1C017E.f_ADC);
					if (unk_0x0F6F4C227FB5DD52(&(Global_1C017E.f_ADC.f_1)))
					{
						if (!func_185(uParam1->f_2C))
						{
							if (Global_1C017E.f_ADC.f_1A > 0)
							{
								Var6 = { Global_1C017E.f_ADC.f_9 };
								func_184(*uParam0, &(Global_1C017E.f_ADC.f_1), &cVar7, &Var6, 1, Global_1C017E.f_ADC.f_1A);
							}
							else
							{
								func_184(*uParam0, &(Global_1C017E.f_ADC.f_1), &cVar7, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, -1);
							}
						}
						else if (!Global_1C017E.f_ADC.f_1B)
						{
							StringCopy(&Var6, "FMMC_COR_SCLB5", 64);
							if (Global_1C017E.f_ADC.f_1A > 0)
							{
								func_184(*uParam0, &(Global_1C017E.f_ADC.f_1), &Var6, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, Global_1C017E.f_ADC.f_1A);
							}
							else
							{
								func_184(*uParam0, &(Global_1C017E.f_ADC.f_1), &Var6, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, -1);
							}
						}
						else
						{
							StringCopy(&Var6, "FMMC_COR_SCLB6", 64);
							if (Global_1C017E.f_ADC.f_1A > 0)
							{
								func_184(*uParam0, &(Global_1C017E.f_ADC.f_1), &Var6, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, Global_1C017E.f_ADC.f_1A);
							}
							else
							{
								func_184(*uParam0, &(Global_1C017E.f_ADC.f_1), &Var6, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, -1);
							}
						}
						func_183(*uParam0, "SCLB_C_RANK", &(Global_1C017E.f_A9D), Global_1C017E.f_A94);
					}
					unk_0xF0059F27F7BB6680(&(uParam1->f_2A), 0);
					unk_0x7CB6FD92BE491AD9(&(uParam1->f_2A), 2);
				}
				iVar3 = 0;
				iVar0 = 0;
				if (Global_1C017E.f_B09 == -1)
				{
					StringCopy(&vVar12, "SC_LB_DL0", 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar9 = 0;
							unk_0xF0059F27F7BB6680(&iVar9, 4);
							func_182(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar9 = 0;
							unk_0xF0059F27F7BB6680(&iVar9, 5);
							func_182(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar9 = 0;
							unk_0xF0059F27F7BB6680(&iVar9, 6);
							func_182(*uParam0, &iVar3, iVar9, 0, 0);
						}
						iVar9 = 0;
						unk_0xF0059F27F7BB6680(&iVar9, 7);
						func_145(*uParam0, iVar3, iVar9, &vVar12);
						iVar3++;
						iVar0++;
					}
					Global_1C017E.f_B09 = 1;
					func_91(&(Global_1C017E.f_B07));
				}
				else if (func_143(&(Global_1C017E.f_B07), 300, 0))
				{
					StringCopy(&vVar13, "SC_LB_DL", 24);
					StringIntConCat(&vVar13, Global_1C017E.f_B09, 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar9 = 0;
							unk_0xF0059F27F7BB6680(&iVar9, 4);
							func_182(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar9 = 0;
							unk_0xF0059F27F7BB6680(&iVar9, 5);
							func_182(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar9 = 0;
							unk_0xF0059F27F7BB6680(&iVar9, 6);
							func_182(*uParam0, &iVar3, iVar9, 0, 0);
						}
						iVar9 = 0;
						unk_0xF0059F27F7BB6680(&iVar9, 7);
						func_145(*uParam0, iVar3, iVar9, &vVar13);
						iVar3++;
						iVar0++;
					}
					Global_1C017E.f_B09++;
					if (Global_1C017E.f_B09 > 3)
					{
						Global_1C017E.f_B09 = 0;
					}
					func_91(&(Global_1C017E.f_B07));
				}
				func_181(*uParam0);
			}
			else
			{
				unk_0x7CB6FD92BE491AD9(&(uParam1->f_2A), 0);
				if (!unk_0xFA30DFD0084E92FE(uParam1->f_2A, 1))
				{
					iVar0 = 0;
					while (iVar0 < 3)
					{
						uParam1->f_F6.f_BB[iVar0] = 0;
						iVar0++;
					}
					unk_0x29CD142125FE177B(*uParam0, "CLEAR_ALL_SLOTS");
					unk_0xF9FBC2F3F73D94C9();
					func_186(*uParam0, Global_1C017E.f_ADC);
					if (unk_0x0F6F4C227FB5DD52(&(Global_1C017E.f_ADC.f_1)))
					{
						if (!func_185(uParam1->f_2C))
						{
							if (Global_1C017E.f_ADC.f_1A > 0)
							{
								Var6 = { Global_1C017E.f_ADC.f_9 };
								func_184(*uParam0, &(Global_1C017E.f_ADC.f_1), &cVar7, &Var6, 1, Global_1C017E.f_ADC.f_1A);
							}
							else
							{
								func_184(*uParam0, &(Global_1C017E.f_ADC.f_1), &cVar7, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, -1);
							}
						}
						else if (!Global_1C017E.f_ADC.f_1B)
						{
							StringCopy(&Var6, "FMMC_COR_SCLB5", 64);
							if (Global_1C017E.f_ADC.f_1A > 0)
							{
								func_184(*uParam0, &(Global_1C017E.f_ADC.f_1), &Var6, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, Global_1C017E.f_ADC.f_1A);
							}
							else
							{
								func_184(*uParam0, &(Global_1C017E.f_ADC.f_1), &Var6, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, -1);
							}
						}
						else
						{
							StringCopy(&Var6, "FMMC_COR_SCLB6", 64);
							if (Global_1C017E.f_ADC.f_1A > 0)
							{
								func_184(*uParam0, &(Global_1C017E.f_ADC.f_1), &Var6, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, Global_1C017E.f_ADC.f_1A);
							}
							else
							{
								func_184(*uParam0, &(Global_1C017E.f_ADC.f_1), &Var6, &(Global_1C017E.f_ADC.f_9), Global_1C017E.f_ADC.f_19, -1);
							}
						}
						func_183(*uParam0, "SCLB_C_RANK", &(Global_1C017E.f_A9D), Global_1C017E.f_A94);
					}
					if (!unk_0xFA30DFD0084E92FE(uParam1->f_2A, 6))
					{
						func_94(&Global_1C1269);
						func_139(uParam1, &Global_1C1269);
						func_138(uParam1, &Global_1C1269);
					}
					iVar3 = 0;
					uParam1->f_F6.f_2 = 0;
					if ((Global_1C017E.f_A90[0] > 1 || (Global_1C017E.f_A90[0] > 0 && Global_1C017E.f_AD7[0] != -1)) || (((Global_1C017E.f_A90[0] > 0 && Global_1C017E.f_ADC.f_1B) && func_185(uParam1->f_2C)) && Global_1C017E.f_AD7[0] != -1))
					{
						uParam1->f_F6.f_1 = -1;
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 12)
						{
							bVar14 = false;
							if (Global_1C1269[iVar0 /*100*/].f_4B == 1)
							{
								if (!iVar8[0])
								{
									iVar9 = 0;
									unk_0xF0059F27F7BB6680(&iVar9, 4);
									func_182(*uParam0, &iVar3, iVar9, 0, 0);
									iVar8[0] = 1;
								}
							}
							else if (Global_1C1269[iVar0 /*100*/].f_4B == 2)
							{
								if (!iVar8[1])
								{
									iVar9 = 0;
									unk_0xF0059F27F7BB6680(&iVar9, 5);
									if ((Global_1C017E.f_A90[1] < 1 && Global_1C017E.f_AD7[1] == -1) && !(((Global_1C017E.f_A90[1] > 0 && Global_1C017E.f_ADC.f_1B) && func_185(uParam1->f_2C)) && Global_1C017E.f_AD7[1] != -1))
									{
										func_182(*uParam0, &iVar3, iVar9, 1, 0);
										bVar14 = true;
									}
									else
									{
										func_182(*uParam0, &iVar3, iVar9, 0, 0);
									}
									iVar8[1] = 1;
								}
							}
							else if (Global_1C1269[iVar0 /*100*/].f_4B == 3)
							{
								if (!iVar8[2])
								{
									iVar9 = 0;
									unk_0xF0059F27F7BB6680(&iVar9, 6);
									if (!unk_0xBAF5BEF76386574D())
									{
										bVar14 = true;
									}
									else if (!unk_0x8F0C986A6B5D1E16())
									{
										bVar14 = true;
									}
									if ((Global_1C017E.f_A90[2] < 2 && Global_1C017E.f_AD7[2] == -1) && !(((Global_1C017E.f_A90[2] > 0 && Global_1C017E.f_ADC.f_1B) && func_185(uParam1->f_2C)) && Global_1C017E.f_AD7[2] != -1))
									{
										bVar14 = true;
									}
									if (bVar14)
									{
										func_182(*uParam0, &iVar3, iVar9, 1, 0);
									}
									else
									{
										func_182(*uParam0, &iVar3, iVar9, 0, 0);
									}
									iVar8[2] = 1;
								}
							}
							if (func_137(Global_1C1269[iVar0 /*100*/].f_20))
							{
								if (func_185(uParam1->f_2C))
								{
									unk_0x01F0A11048DC3F30(unk_0xB5CEFD608600A09F(), &uVar11);
									if (!Global_1C1269[iVar0 /*100*/].f_4A && unk_0x3362CDE8460ED38B(&(uParam1->f_2C.f_3.f_1[1 /*16*/].f_8), &uVar11))
									{
										bVar14 = true;
									}
								}
								if (!bVar14)
								{
									iVar9 = 0;
									if (!Global_1C017E.f_ADC.f_1B)
									{
										if (func_136(&(Global_1C1269[iVar0 /*100*/].f_20), &Var10))
										{
											unk_0xF0059F27F7BB6680(&iVar9, 1);
											if (uParam1->f_F6.f_1 == -1)
											{
												bVar4 = true;
												uParam1->f_F6.f_1 = iVar0;
												unk_0xF0059F27F7BB6680(&iVar9, 3);
											}
										}
									}
									if (func_185(uParam1->f_2C))
									{
										Var6 = { Global_1C1269[iVar0 /*100*/] };
										if (!unk_0xF1734B55490E9045(&(Global_1C1269[iVar0 /*100*/].f_54)) && !unk_0x3362CDE8460ED38B(&(Global_1C1269[iVar0 /*100*/].f_54), ""))
										{
											StringConCat(&Var6, "/", 64);
											StringConCat(&Var6, &(Global_1C1269[iVar0 /*100*/].f_54), 64);
										}
										func_135(*uParam0, iVar3, iVar9, Global_1C1269[iVar0 /*100*/].f_3B, &Var6, &(Global_1C1269[iVar0 /*100*/].f_50));
										uParam1->f_F6.f_6[iVar0 /*15*/] = iVar3;
										uParam1->f_F6.f_6[iVar0 /*15*/].f_1 = iVar9;
										uParam1->f_F6.f_6[iVar0 /*15*/].f_2 = { Global_1C1269[iVar0 /*100*/].f_20 };
										uParam1->f_F6.f_2++;
									}
									else
									{
										func_135(*uParam0, iVar3, iVar9, Global_1C1269[iVar0 /*100*/].f_3B, &(Global_1C1269[iVar0 /*100*/]), &(Global_1C1269[iVar0 /*100*/].f_50));
										uParam1->f_F6.f_6[iVar0 /*15*/] = iVar3;
										uParam1->f_F6.f_6[iVar0 /*15*/].f_1 = iVar9;
										uParam1->f_F6.f_6[iVar0 /*15*/].f_2 = { Global_1C1269[iVar0 /*100*/].f_20 };
										uParam1->f_F6.f_2++;
									}
									iVar1 = 0;
									while (iVar1 < Global_1C017E.f_A94)
									{
										bVar5 = false;
										if (unk_0xFA30DFD0084E92FE(Global_1C017E.f_AD2, iVar1))
										{
											if (unk_0xFA30DFD0084E92FE(Global_1C017E.f_AD0, iVar1))
											{
												if (Global_1C017E.f_AC2[iVar1] == Global_1C1269[iVar0 /*100*/].f_43[iVar1])
												{
													bVar5 = true;
												}
											}
											if (bVar5)
											{
												func_130(Global_1C017E.f_ADC, iVar1, Global_1C1269[iVar0 /*100*/].f_43[iVar1], 0, Global_1C1269[iVar0 /*100*/].f_3A);
											}
											else
											{
												func_130(Global_1C017E.f_ADC, iVar1, Global_1C1269[iVar0 /*100*/].f_43[iVar1], Global_1C1269[iVar0 /*100*/].f_4A, Global_1C1269[iVar0 /*100*/].f_3A);
											}
										}
										else
										{
											if (unk_0xFA30DFD0084E92FE(Global_1C017E.f_AD0, iVar1))
											{
												if (Global_1C017E.f_AC9[iVar1] == Global_1C1269[iVar0 /*100*/].f_43[iVar1])
												{
													bVar5 = true;
												}
											}
											if (bVar5)
											{
												func_127(Global_1C017E.f_ADC, iVar1, Global_1C1269[iVar0 /*100*/].f_3C[iVar1], 0);
											}
											else
											{
												func_127(Global_1C017E.f_ADC, iVar1, Global_1C1269[iVar0 /*100*/].f_3C[iVar1], Global_1C1269[iVar0 /*100*/].f_4A);
											}
										}
										iVar1++;
									}
									func_126();
									uVar2[(Global_1C1269[iVar0 /*100*/].f_4B - 1)]++;
									if (uVar2[(Global_1C1269[iVar0 /*100*/].f_4B - 1)] == 2)
									{
										if (Global_1C1269[iVar0 /*100*/].f_3B > 2)
										{
											unk_0xF0059F27F7BB6680(&iVar9, 2);
											unk_0xF0059F27F7BB6680(&(uParam1->f_F6.f_6[0 /*15*/].f_1), 2);
											func_125(*uParam0, (iVar3 - 1), iVar9);
										}
									}
									iVar3++;
								}
							}
							iVar0++;
						}
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							uParam1->f_F6.f_BB[iVar0] = uVar2[iVar0];
							iVar0++;
						}
					}
					else
					{
						iVar9 = 0;
						unk_0xF0059F27F7BB6680(&iVar9, 4);
						func_182(*uParam0, &iVar3, iVar9, 1, 0);
						iVar9 = 0;
						unk_0xF0059F27F7BB6680(&iVar9, 5);
						func_182(*uParam0, &iVar3, iVar9, 1, 0);
						iVar9 = 0;
						unk_0xF0059F27F7BB6680(&iVar9, 6);
						func_182(*uParam0, &iVar3, iVar9, 1, 0);
					}
					unk_0xF0059F27F7BB6680(&(uParam1->f_2A), 1);
					unk_0x7CB6FD92BE491AD9(&(uParam1->f_2A), 2);
					func_181(*uParam0);
					unk_0x7456702622C62EA0(1);
					if (uParam1->f_F6.f_1 == -1 && !bVar4 == 1)
					{
						if (Global_1C017E.f_A90[0] > 1)
						{
							uParam1->f_F6.f_1 = 0;
							unk_0xF0059F27F7BB6680(&(uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/].f_1), 3);
							func_125(*uParam0, uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/], uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/].f_1);
						}
					}
				}
				else
				{
					func_181(*uParam0);
					func_122(uParam0, uParam1);
				}
			}
		}
	}
}

void func_122(var uParam0, var uParam1)//Position - 0x9064
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	
	iVar1 = uParam1->f_F6.f_1;
	if (unk_0x50465D2C022B9E04(2))
	{
		unk_0x08009E53F6E7E15C();
		unk_0xD55638CE45B2B948(2, 239);
		unk_0xD55638CE45B2B948(2, 240);
		unk_0xD55638CE45B2B948(2, 237);
		unk_0xD55638CE45B2B948(2, 238);
		unk_0xBBC4195AD74D153D(2, 200, 1);
		if (unk_0xD3C4A010282C31F2(2, 241))
		{
			unk_0x65F4B4F227B496ED(2, 188, 1f);
		}
		if (unk_0xD3C4A010282C31F2(2, 242))
		{
			unk_0x65F4B4F227B496ED(2, 187, 1f);
		}
		if (unk_0xC84BAADC16C436FB(*uParam0, &iVar2, &iVar3, &uVar4))
		{
			if (iVar2 == 5)
			{
				if (iVar3 > uParam1->f_F6.f_BB[0])
				{
					if (iVar3 <= (uParam1->f_F6.f_BB[0] + uParam1->f_F6.f_BB[1]) + 2)
					{
						iVar3 = (iVar3 - 2);
					}
					else
					{
						iVar3 = (iVar3 - 4);
					}
				}
				iVar3 = (iVar3 - 1);
				if (uParam1->f_F6.f_1 != iVar3)
				{
					uParam1->f_F6.f_1 = iVar3;
					unk_0xC4BA30B532FE260F(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					bVar0 = true;
				}
				else
				{
					unk_0x65F4B4F227B496ED(2, 217, 1f);
				}
			}
		}
	}
	if (!unk_0x50465D2C022B9E04(2))
	{
		func_124(&uVar5, &iVar6, &uVar7, &uVar8, 0);
	}
	if (uParam1->f_F6.f_2 > 0)
	{
		if (!unk_0xFA30DFD0084E92FE(uParam1->f_F6, 0))
		{
			if ((unk_0x8FCEEB789599BD9B(2, 188) || unk_0xD3C4A010282C31F2(2, 188)) || iVar6 < -100)
			{
				unk_0xC4BA30B532FE260F(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam1->f_F6.f_1 = (uParam1->f_F6.f_1 + -1);
				unk_0xF0059F27F7BB6680(&(uParam1->f_F6), 0);
				func_91(&(uParam1->f_F6.f_3));
				bVar0 = true;
			}
		}
		else if (func_123(uParam1, 188))
		{
			unk_0x7CB6FD92BE491AD9(&(uParam1->f_F6), 0);
		}
		if (!unk_0xFA30DFD0084E92FE(uParam1->f_F6, 1))
		{
			if ((unk_0x8FCEEB789599BD9B(2, 187) || unk_0xD3C4A010282C31F2(2, 187)) || iVar6 > 100)
			{
				unk_0xC4BA30B532FE260F(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam1->f_F6.f_1++;
				unk_0xF0059F27F7BB6680(&(uParam1->f_F6), 1);
				func_91(&(uParam1->f_F6.f_3));
				bVar0 = true;
			}
		}
		else if (func_123(uParam1, 187))
		{
			unk_0x7CB6FD92BE491AD9(&(uParam1->f_F6), 1);
		}
	}
	if (bVar0)
	{
		if (uParam1->f_F6.f_1 < 0)
		{
			uParam1->f_F6.f_1 = (uParam1->f_F6.f_2 - 1);
		}
		if (uParam1->f_F6.f_1 >= uParam1->f_F6.f_2)
		{
			uParam1->f_F6.f_1 = 0;
		}
	}
	if (!unk_0xFA30DFD0084E92FE(uParam1->f_F6, 3))
	{
		if ((unk_0x8FCEEB789599BD9B(2, 204) || unk_0xF7DDAAF0EFDAFA22(2, 204)) || unk_0x694514BD37EC4E94(2, 237))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_F6), 3);
			func_91(&(uParam1->f_F6.f_3));
			bVar0 = true;
		}
	}
	else if (func_123(uParam1, 204))
	{
		unk_0x7CB6FD92BE491AD9(&(uParam1->f_F6), 3);
	}
	if (uParam1->f_F6.f_1 >= 0)
	{
		if (uParam1->f_F6.f_1 != iVar1)
		{
			if (iVar1 >= 0)
			{
				unk_0x7CB6FD92BE491AD9(&(uParam1->f_F6.f_6[iVar1 /*15*/].f_1), 3);
				func_125(*uParam0, uParam1->f_F6.f_6[iVar1 /*15*/], uParam1->f_F6.f_6[iVar1 /*15*/].f_1);
			}
			unk_0xF0059F27F7BB6680(&(uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/].f_1), 3);
			func_125(*uParam0, uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/], uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/].f_1);
			unk_0x7CB6FD92BE491AD9(&(uParam1->f_2A), 2);
		}
		if (func_137(uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/].f_2))
		{
			if (!unk_0xFA30DFD0084E92FE(uParam1->f_F6, 2))
			{
				if (unk_0x8FCEEB789599BD9B(2, 217) || unk_0xF7DDAAF0EFDAFA22(2, 217))
				{
					if (!unk_0x14973A77EAB7E05A())
					{
						unk_0xC4BA30B532FE260F(-1, "SELECT", "HUD_FRONTEND_MP_SOUNDSET", 1);
						unk_0xF0059F27F7BB6680(&(uParam1->f_F6), 2);
						unk_0x825CC8F1B61DE3A7(&(uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/].f_2));
					}
				}
			}
			else if (!unk_0x8FCEEB789599BD9B(2, 217))
			{
				unk_0x7CB6FD92BE491AD9(&(uParam1->f_F6), 2);
			}
		}
	}
}

int func_123(var uParam0, int iParam1)//Position - 0x9406
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (iParam1 == 188 || iParam1 == 187)
	{
		func_124(&uVar0, &iVar1, &uVar2, &uVar3, 0);
		if (((!unk_0x8FCEEB789599BD9B(2, iParam1) && !unk_0xD3C4A010282C31F2(2, iParam1)) && (iVar1 < 75 && iVar1 > -75)) || func_143(&(uParam0->f_F6.f_3), 250, 0))
		{
			return 1;
		}
	}
	else if ((!unk_0x8FCEEB789599BD9B(2, iParam1) && !unk_0xD3C4A010282C31F2(2, iParam1)) || func_143(&(uParam0->f_F6.f_3), 250, 0))
	{
		return 1;
	}
	return 0;
}

void func_124(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x94A5
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

void func_125(int iParam0, int iParam1, int iParam2)//Position - 0x957A
{
	unk_0x29CD142125FE177B(iParam0, "SET_SLOT_STATE");
	unk_0x1E1FB49121565EB6(iParam1);
	unk_0x1E1FB49121565EB6(iParam2);
	unk_0xF9FBC2F3F73D94C9();
}

void func_126()//Position - 0x959D
{
	unk_0xF9FBC2F3F73D94C9();
}

void func_127(struct<30> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, float fParam15, bool bParam16)//Position - 0x95A9
{
	switch (Param0.f_1D[iParam14])
	{
		case 4:
			if (bParam16)
			{
				unk_0x57016C44F10111F0("NUMBER");
				unk_0x3AE7CB4034BE212F(fParam15, 2);
				unk_0x64989E60CF560CA1();
			}
			else
			{
				unk_0x57016C44F10111F0("SC_LB_EMPTY");
				unk_0x64989E60CF560CA1();
			}
			break;
		
		case 12:
			if (bParam16)
			{
				unk_0x57016C44F10111F0("NUMBER");
				unk_0xAA5C5BF0489E5553(SYSTEM::FLOOR(fParam15));
				unk_0x64989E60CF560CA1();
			}
			else
			{
				unk_0x57016C44F10111F0("SC_LB_EMPTY");
				unk_0x64989E60CF560CA1();
			}
			break;
		
		case 17:
		case 19:
		case 18:
		case 20:
			if (bParam16)
			{
				if (Param0.f_1D[iParam14] == 18 || Param0.f_1D[iParam14] == 20)
				{
					fParam15 = (fParam15 * -1f);
				}
				if (!unk_0x8150E47F9B8C07E2())
				{
					if (Param0.f_1D[iParam14] == 19 || Param0.f_1D[iParam14] == 20)
					{
						fParam15 = func_129(fParam15);
					}
					else
					{
						fParam15 = func_128(fParam15);
					}
				}
				unk_0x57016C44F10111F0("NUMBER");
				unk_0x3AE7CB4034BE212F(fParam15, 2);
				unk_0x64989E60CF560CA1();
			}
			else
			{
				unk_0x57016C44F10111F0("SC_LB_EMPTY");
				unk_0x64989E60CF560CA1();
			}
			break;
		
		case 0:
			break;
	}
}

float func_128(float fParam0)//Position - 0x96CB
{
	return (fParam0 / 0.3048f);
}

float func_129(float fParam0)//Position - 0x96DB
{
	return (fParam0 / 1609.344f);
}

void func_130(struct<30> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15, bool bParam16, bool bParam17)//Position - 0x96EB
{
	if (iParam15 == 2147483647 || iParam15 == -2147483647)
	{
		bParam16 = false;
	}
	switch (Param0.f_1D[iParam14])
	{
		case 5:
			if (bParam16)
			{
				unk_0x57016C44F10111F0("NUMBER");
				unk_0xAA5C5BF0489E5553(iParam15);
				unk_0x64989E60CF560CA1();
			}
			else
			{
				unk_0x57016C44F10111F0("SC_LB_EMPTY");
				unk_0x64989E60CF560CA1();
			}
			break;
		
		case 7:
			if (bParam16)
			{
				unk_0x57016C44F10111F0("NUMBER");
				unk_0xAA5C5BF0489E5553(-iParam15);
				unk_0x64989E60CF560CA1();
			}
			else
			{
				unk_0x57016C44F10111F0("SC_LB_EMPTY");
				unk_0x64989E60CF560CA1();
			}
			break;
		
		case 1:
		case 9:
		case 11:
			if (bParam16)
			{
				if (Param0.f_1D[iParam14] == 11 && iParam15 < 0)
				{
					iParam15 = (iParam15 * -1);
				}
				if (iParam15 >= 3600000 || iParam15 <= -3600000)
				{
					unk_0x57016C44F10111F0("STRING");
					unk_0x4C36886AAFD04CF8(iParam15, 14);
					unk_0x64989E60CF560CA1();
				}
				else if (Param0.f_1D[iParam14] == 9)
				{
					unk_0x57016C44F10111F0("STRING");
					unk_0x4C36886AAFD04CF8(iParam15, 6);
					unk_0x64989E60CF560CA1();
				}
				else
				{
					unk_0x57016C44F10111F0("STRING");
					unk_0x4C36886AAFD04CF8(iParam15, 2055);
					unk_0x64989E60CF560CA1();
				}
			}
			else
			{
				unk_0x57016C44F10111F0("SC_LB_EMPTY");
				unk_0x64989E60CF560CA1();
			}
			break;
		
		case 6:
			if (bParam16)
			{
				if (iParam15 == 2147483647)
				{
					unk_0x57016C44F10111F0("SC_LB_EMPTY");
					unk_0x64989E60CF560CA1();
				}
				else if (iParam15 >= 3600000 || iParam15 <= -3600000)
				{
					unk_0x57016C44F10111F0("STRING");
					unk_0x4C36886AAFD04CF8(iParam15, 14);
					unk_0x64989E60CF560CA1();
				}
				else
				{
					unk_0x57016C44F10111F0("STRING");
					unk_0x4C36886AAFD04CF8(iParam15, 2055);
					unk_0x64989E60CF560CA1();
				}
			}
			else
			{
				unk_0x57016C44F10111F0("SC_LB_EMPTY");
				unk_0x64989E60CF560CA1();
			}
			break;
		
		case 2:
		case 10:
			if (bParam16)
			{
				iParam15 = (iParam15 * -1);
				if (iParam15 >= 3600000 || iParam15 <= -3600000)
				{
					unk_0x57016C44F10111F0("STRING");
					unk_0x4C36886AAFD04CF8(iParam15, 14);
					unk_0x64989E60CF560CA1();
				}
				else if (Param0.f_1D[iParam14] == 10)
				{
					unk_0x57016C44F10111F0("STRING");
					unk_0x4C36886AAFD04CF8(iParam15, 6);
					unk_0x64989E60CF560CA1();
				}
				else
				{
					unk_0x57016C44F10111F0("STRING");
					unk_0x4C36886AAFD04CF8(iParam15, 2055);
					unk_0x64989E60CF560CA1();
				}
			}
			else
			{
				unk_0x57016C44F10111F0("SC_LB_EMPTY");
				unk_0x64989E60CF560CA1();
			}
			break;
		
		case 3:
			if (bParam17)
			{
				if (unk_0xA4267BD4AB92007E(iParam15))
				{
					unk_0x57016C44F10111F0("SCLB_VEH_CUST");
					unk_0xC9C304D0AABE1335(unk_0xD8D56586882095EE(iParam15));
					unk_0x64989E60CF560CA1();
				}
				else
				{
					unk_0x57016C44F10111F0("SC_LB_EMPTY");
					unk_0x64989E60CF560CA1();
				}
			}
			else if (unk_0xA4267BD4AB92007E(iParam15))
			{
				unk_0x57016C44F10111F0(unk_0xD8D56586882095EE(iParam15));
				unk_0x64989E60CF560CA1();
			}
			else
			{
				unk_0x57016C44F10111F0("SC_LB_EMPTY");
				unk_0x64989E60CF560CA1();
			}
			break;
		
		case 8:
			if (func_134(iParam15) != 0)
			{
				unk_0x57016C44F10111F0(func_131(func_134(iParam15), 0));
				unk_0x64989E60CF560CA1();
			}
			else
			{
				unk_0x57016C44F10111F0("SC_LB_EMPTY");
				unk_0x64989E60CF560CA1();
			}
			break;
		
		case 13:
		case 15:
		case 14:
		case 16:
			if (bParam16)
			{
				if (Param0.f_1D[iParam14] == 14 || Param0.f_1D[iParam14] == 16)
				{
					iParam15 = (iParam15 * -1);
				}
				if (!unk_0x8150E47F9B8C07E2())
				{
					if (Param0.f_1D[iParam14] == 15 || Param0.f_1D[iParam14] == 16)
					{
						iParam15 = SYSTEM::FLOOR(func_129(SYSTEM::TO_FLOAT(iParam15)));
					}
					else
					{
						iParam15 = SYSTEM::FLOOR(func_128(SYSTEM::TO_FLOAT(iParam15)));
					}
				}
				unk_0x57016C44F10111F0("NUMBER");
				unk_0xAA5C5BF0489E5553(iParam15);
				unk_0x64989E60CF560CA1();
			}
			else
			{
				unk_0x57016C44F10111F0("SC_LB_EMPTY");
				unk_0x64989E60CF560CA1();
			}
			break;
		
		case 0:
			break;
	}
}

char* func_131(int iParam0, bool bParam1)//Position - 0x9A85
{
	struct<32> Var0;
	
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return "WTU_INVALID";
			}
			else
			{
				return "WT_INVALID";
			}
			break;
		
		case joaat("weapon_unarmed"):
			if (bParam1)
			{
				return "WTU_UNARMED";
			}
			else
			{
				return "WT_UNARMED";
			}
			break;
		
		case joaat("weapon_pistol"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_combatpistol"):
			if (bParam1)
			{
				return "WTU_PIST_CBT";
			}
			else
			{
				return "WT_PIST_CBT";
			}
			break;
		
		case joaat("weapon_appistol"):
			if (bParam1)
			{
				return "WTU_PIST_AP";
			}
			else
			{
				return "WT_PIST_AP";
			}
			break;
		
		case joaat("weapon_smg"):
			if (bParam1)
			{
				return "WTU_SMG";
			}
			else
			{
				return "WT_SMG";
			}
			break;
		
		case joaat("weapon_microsmg"):
			if (bParam1)
			{
				return "WTU_SMG_MCR";
			}
			else
			{
				return "WT_SMG_MCR";
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_ASL";
			}
			else
			{
				return "WT_RIFLE_ASL";
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_CBN";
			}
			else
			{
				return "WT_RIFLE_CBN";
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_ADV";
			}
			else
			{
				return "WT_RIFLE_ADV";
			}
			break;
		
		case joaat("weapon_mg"):
			if (bParam1)
			{
				return "WTU_MG";
			}
			else
			{
				return "WT_MG";
			}
			break;
		
		case joaat("weapon_combatmg"):
			if (bParam1)
			{
				return "WTU_MG_CBT";
			}
			else
			{
				return "WT_MG_CBT";
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			if (bParam1)
			{
				return "WTU_SG_PMP";
			}
			else
			{
				return "WT_SG_PMP";
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			if (bParam1)
			{
				return "WTU_SG_SOF";
			}
			else
			{
				return "WT_SG_SOF";
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			if (bParam1)
			{
				return "WTU_SG_ASL";
			}
			else
			{
				return "WT_SG_ASL";
			}
			break;
		
		case joaat("weapon_heavysniper"):
			if (bParam1)
			{
				return "WTU_SNIP_HVY";
			}
			else
			{
				return "WT_SNIP_HVY";
			}
			break;
		
		case joaat("weapon_remotesniper"):
			if (bParam1)
			{
				return "WTU_SNIP_RMT";
			}
			else
			{
				return "WT_SNIP_RMT";
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			if (bParam1)
			{
				return "WTU_SNIP_RIF";
			}
			else
			{
				return "WT_SNIP_RIF";
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			if (bParam1)
			{
				return "WTU_GL";
			}
			else
			{
				return "WT_GL";
			}
			break;
		
		case joaat("weapon_rpg"):
			if (bParam1)
			{
				return "WTU_RPG";
			}
			else
			{
				return "WT_RPG";
			}
			break;
		
		case joaat("weapon_minigun"):
			if (bParam1)
			{
				return "WTU_MINIGUN";
			}
			else
			{
				return "WT_MINIGUN";
			}
			break;
		
		case joaat("weapon_grenade"):
			if (bParam1)
			{
				return "WTU_GNADE";
			}
			else
			{
				return "WT_GNADE";
			}
			break;
		
		case joaat("weapon_smokegrenade"):
			if (bParam1)
			{
				return "WTU_GNADE_SMK";
			}
			else
			{
				return "WT_GNADE_SMK";
			}
			break;
		
		case joaat("weapon_stickybomb"):
			if (bParam1)
			{
				return "WTU_GNADE_STK";
			}
			else
			{
				return "WT_GNADE_STK";
			}
			break;
		
		case joaat("weapon_molotov"):
			if (bParam1)
			{
				return "WTU_MOLOTOV";
			}
			else
			{
				return "WT_MOLOTOV";
			}
			break;
		
		case joaat("weapon_stungun"):
			if (bParam1)
			{
				return "WTU_STUN";
			}
			else
			{
				return "WT_STUN";
			}
			break;
		
		case joaat("weapon_petrolcan"):
			if (bParam1)
			{
				return "WTU_PETROL";
			}
			else
			{
				return "WT_PETROL";
			}
			break;
		
		case joaat("weapon_electric_fence"):
			if (bParam1)
			{
				return "WTU_ELCFEN";
			}
			else
			{
				return "WT_ELCFEN";
			}
			break;
		
		case joaat("vehicle_weapon_tank"):
			if (bParam1)
			{
				return "WTU_V_TANK";
			}
			else
			{
				return "WT_V_TANK";
			}
			break;
		
		case joaat("vehicle_weapon_space_rocket"):
			if (bParam1)
			{
				return "WTU_V_SPACERKT";
			}
			else
			{
				return "WT_V_SPACERKT";
			}
			break;
		
		case joaat("vehicle_weapon_player_laser"):
			if (bParam1)
			{
				return "WTU_V_PLRLSR";
			}
			else
			{
				return "WT_V_PLRLSR";
			}
			break;
		
		case joaat("object"):
			if (bParam1)
			{
				return "WTU_OBJECT";
			}
			else
			{
				return "WT_OBJECT";
			}
			break;
		
		case joaat("gadget_parachute"):
			if (bParam1)
			{
				return "WTU_PARA";
			}
			else
			{
				return "WT_PARA";
			}
			break;
		
		case 1742569970:
			if (bParam1)
			{
				return "WTU_A_RPG";
			}
			else
			{
				return "WT_A_RPG";
			}
			break;
		
		case -1474608608:
			if (bParam1)
			{
				return "WTU_A_TANK";
			}
			else
			{
				return "WT_A_TANK";
			}
			break;
		
		case 527765612:
			if (bParam1)
			{
				return "WTU_A_SPACERKT";
			}
			else
			{
				return "WT_A_SPACERKT";
			}
			break;
		
		case -165357558:
			if (bParam1)
			{
				return "WTU_A_PLRLSR";
			}
			else
			{
				return "WT_A_PLRLSR";
			}
			break;
		
		case -1372674932:
			if (bParam1)
			{
				return "WTU_A_ENMYLSR";
			}
			else
			{
				return "WT_A_ENMYLSR";
			}
			break;
		
		case joaat("weapon_knife"):
			if (bParam1)
			{
				return "WTU_KNIFE";
			}
			else
			{
				return "WT_KNIFE";
			}
			break;
		
		case joaat("weapon_nightstick"):
			if (bParam1)
			{
				return "WTU_NGTSTK";
			}
			else
			{
				return "WT_NGTSTK";
			}
			break;
		
		case joaat("weapon_hammer"):
			if (bParam1)
			{
				return "WTU_HAMMER";
			}
			else
			{
				return "WT_HAMMER";
			}
			break;
		
		case joaat("weapon_bat"):
			if (bParam1)
			{
				return "WTU_BAT";
			}
			else
			{
				return "WT_BAT";
			}
			break;
		
		case joaat("weapon_crowbar"):
			if (bParam1)
			{
				return "WTU_CROWBAR";
			}
			else
			{
				return "WT_CROWBAR";
			}
			break;
		
		case joaat("weapon_golfclub"):
			if (bParam1)
			{
				return "WTU_GOLFCLUB";
			}
			else
			{
				return "WT_GOLFCLUB";
			}
			break;
		
		case joaat("weapon_rammed_by_car"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_run_over_by_car"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			if (bParam1)
			{
				return "WTU_SMG_ASL";
			}
			else
			{
				return "WT_SMG_ASL";
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			if (bParam1)
			{
				return "WTU_SG_BLP";
			}
			else
			{
				return "WT_SG_BLP";
			}
			break;
		
		case joaat("weapon_pistol50"):
			if (bParam1)
			{
				return "WTU_PIST_50";
			}
			else
			{
				return "WT_PIST_50";
			}
			break;
		
		case joaat("weapon_bottle"):
			if (bParam1)
			{
				return "WTU_BOTTLE";
			}
			else
			{
				return "WT_BOTTLE";
			}
			break;
		
		case joaat("weapon_gusenberg"):
			if (bParam1)
			{
				return "WTU_GUSENBERG";
			}
			else
			{
				return "WT_GUSENBERG";
			}
			break;
		
		case joaat("weapon_snspistol"):
			if (bParam1)
			{
				return "WTU_SNSPISTOL";
			}
			else
			{
				return "WT_SNSPISTOL";
			}
			break;
		
		case joaat("weapon_vintagepistol"):
			if (bParam1)
			{
				return "WTU_VPISTOL";
			}
			else
			{
				return "WT_VPISTOL";
			}
			break;
		
		case joaat("weapon_dagger"):
			if (bParam1)
			{
				return "WTU_DAGGER";
			}
			else
			{
				return "WT_DAGGER";
			}
			break;
		
		case joaat("weapon_flaregun"):
			if (bParam1)
			{
				return "WTU_FLAREGUN";
			}
			else
			{
				return "WT_FLAREGUN";
			}
			break;
		
		case joaat("weapon_heavypistol"):
			if (bParam1)
			{
				return "WTU_HEAVYPSTL";
			}
			else
			{
				return "WT_HEAVYPSTL";
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			if (bParam1)
			{
				return "WTU_RIFLE_SCBN";
			}
			else
			{
				return "WT_RIFLE_SCBN";
			}
			break;
		
		case joaat("weapon_musket"):
			if (bParam1)
			{
				return "WTU_MUSKET";
			}
			else
			{
				return "WT_MUSKET";
			}
			break;
		
		case joaat("weapon_firework"):
			if (bParam1)
			{
				return "WTU_FWRKLNCHR";
			}
			else
			{
				return "WT_FWRKLNCHR";
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			if (bParam1)
			{
				return "WTU_MKRIFLE";
			}
			else
			{
				return "WT_MKRIFLE";
			}
			break;
		
		case joaat("weapon_heavyshotgun"):
			if (bParam1)
			{
				return "WTU_HVYSHOT";
			}
			else
			{
				return "WT_HVYSHOT";
			}
			break;
		
		case joaat("weapon_proxmine"):
			if (bParam1)
			{
				return "WTU_PRXMINE";
			}
			else
			{
				return "WT_PRXMINE";
			}
			break;
		
		case joaat("weapon_hominglauncher"):
			if (bParam1)
			{
				return "WTU_HOMLNCH";
			}
			else
			{
				return "WT_HOMLNCH";
			}
			break;
		
		case joaat("weapon_hatchet"):
			if (bParam1)
			{
				return "WTU_HATCHET";
			}
			else
			{
				return "WT_HATCHET";
			}
			break;
		
		case joaat("weapon_railgun"):
			if (bParam1)
			{
				return "WTU_RAILGUN";
			}
			else
			{
				return "WT_RAILGUN";
			}
			break;
		
		case joaat("weapon_combatpdw"):
			if (bParam1)
			{
				return "WTU_COMBATPDW";
			}
			else
			{
				return "WT_COMBATPDW";
			}
			break;
		
		case joaat("weapon_knuckle"):
			if (bParam1)
			{
				return "WTU_KNUCKLE";
			}
			else
			{
				return "WT_KNUCKLE";
			}
			break;
		
		case joaat("weapon_marksmanpistol"):
			if (bParam1)
			{
				return "WTU_MKPISTOL";
			}
			else
			{
				return "WT_MKPISTOL";
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			if (bParam1)
			{
				return "WTU_BULLRIFLE";
			}
			else
			{
				return "WT_BULLRIFLE";
			}
			break;
		
		case joaat("weapon_machete"):
			if (bParam1)
			{
				return "WTU_MACHETE";
			}
			else
			{
				return "WT_MACHETE";
			}
			break;
		
		case joaat("weapon_machinepistol"):
			if (bParam1)
			{
				return "WTU_MCHPIST";
			}
			else
			{
				return "WT_MCHPIST";
			}
			break;
		
		case joaat("weapon_flashlight"):
			if (bParam1)
			{
				return "WTU_FLASHLIGHT";
			}
			else
			{
				return "WT_FLASHLIGHT";
			}
			break;
		
		case joaat("weapon_dbshotgun"):
			if (bParam1)
			{
				return "WTU_DBSHGN";
			}
			else
			{
				return "WT_DBSHGN";
			}
			break;
		
		case joaat("weapon_compactrifle"):
			if (bParam1)
			{
				return "WTU_CMPRIFLE";
			}
			else
			{
				return "WT_CMPRIFLE";
			}
			break;
		
		case joaat("weapon_switchblade"):
			if (bParam1)
			{
				return "WTU_SWBLADE";
			}
			else
			{
				return "WT_SWBLADE";
			}
			break;
		
		case joaat("weapon_revolver"):
			if (bParam1)
			{
				return "WTU_REVOLVER";
			}
			else
			{
				return "WT_REVOLVER";
			}
			break;
		
		case 317205821:
			if (bParam1)
			{
				return "WTU_AUTOSHGN";
			}
			else
			{
				return "WT_AUTOSHGN";
			}
			break;
		
		case -853065399:
			if (bParam1)
			{
				return "WTU_BATTLEAXE";
			}
			else
			{
				return "WT_BATTLEAXE";
			}
			break;
		
		case 125959754:
			if (bParam1)
			{
				return "WTU_CMPGL";
			}
			else
			{
				return "WT_CMPGL";
			}
			break;
		
		case -1121678507:
			if (bParam1)
			{
				return "WTU_MINISMG";
			}
			else
			{
				return "WT_MINISMG";
			}
			break;
		
		case -1169823560:
			if (bParam1)
			{
				return "WTU_PIPEBOMB";
			}
			else
			{
				return "WT_PIPEBOMB";
			}
			break;
		
		case -1810795771:
			if (bParam1)
			{
				return "WTU_POOLCUE";
			}
			else
			{
				return "WT_POOLCUE";
			}
			break;
		
		case 419712736:
			if (bParam1)
			{
				return "WTU_WRENCH";
			}
			else
			{
				return "WT_WRENCH";
			}
			break;
		
		case joaat("weapon_cougar"):
			return "WT_RAGE";
			break;
		
		case -159960575:
			return "WT_VEH_WEP";
			break;
		
		case -1075685676:
			if (bParam1)
			{
				return "WTU_PIST2";
			}
			else
			{
				return "WT_PIST2";
			}
			break;
		
		case 2024373456:
			if (bParam1)
			{
				return "WTU_SMG2";
			}
			else
			{
				return "WT_SMG2";
			}
			break;
		
		case 177293209:
			if (bParam1)
			{
				return "WTU_SNIP_HVY2";
			}
			else
			{
				return "WT_SNIP_HVY2";
			}
			break;
		
		case -608341376:
			if (bParam1)
			{
				return "WTU_MG_CBT2";
			}
			else
			{
				return "WT_MG_CBT2";
			}
			break;
		
		case 961495388:
			if (bParam1)
			{
				return "WTU_RIFLE_ASL2";
			}
			else
			{
				return "WT_RIFLE_ASL2";
			}
			break;
		
		case -86904375:
			if (bParam1)
			{
				return "WTU_RIFLE_CBN2";
			}
			else
			{
				return "WT_RIFLE_CBN2";
			}
			break;
		
		case 1432025498:
			if (bParam1)
			{
				return "WTU_SG_PMP2";
			}
			else
			{
				return "WT_SG_PMP2";
			}
			break;
		
		case -1768145561:
			if (bParam1)
			{
				return "WTU_SPCARBINE2";
			}
			else
			{
				return "WT_SPCARBINE2";
			}
			break;
		
		case -2009644972:
			if (bParam1)
			{
				return "WTU_SNSPISTOL2";
			}
			else
			{
				return "WT_SNSPISTOL2";
			}
			break;
		
		case 1785463520:
			if (bParam1)
			{
				return "WTU_MKRIFLE2";
			}
			else
			{
				return "WT_MKRIFLE2";
			}
			break;
		
		case -879347409:
			if (bParam1)
			{
				return "WTU_REVOLVER2";
			}
			else
			{
				return "WT_REVOLVER2";
			}
			break;
		
		case -2066285827:
			if (bParam1)
			{
				return "WTU_BULLRIFLE2";
			}
			else
			{
				return "WT_BULLRIFLE2";
			}
			break;
		
		case -1746263880:
			if (bParam1)
			{
				return "WTU_REV_DA";
			}
			else
			{
				return "WT_REV_DA";
			}
			break;
		
		case 940833800:
			if (bParam1)
			{
				return "WTU_SHATCHET";
			}
			else
			{
				return "WT_SHATCHET";
			}
			break;
		
		default:
			if (func_133(iParam0, &Var0) != -1)
			{
				if (bParam1)
				{
					return func_132(&(Var0.f_1F));
				}
				else
				{
					return func_132(&(Var0.f_7));
				}
			}
			break;
	}
	return "WT_INVALID";
}

var func_132(var uParam0)//Position - 0xA6A4
{
	return uParam0;
}

int func_133(int iParam0, var uParam1)//Position - 0xA6AE
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x8E3F7DC568AC987B();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x6740839132C4BD08(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_134(int iParam0)//Position - 0xA6E9
{
	if (iParam0 == 600)
	{
		return joaat("weapon_railgun");
	}
	else if (iParam0 == 500)
	{
		return joaat("weapon_minigun");
	}
	else if (iParam0 == 400)
	{
		return joaat("weapon_mg");
	}
	else if (iParam0 == 401)
	{
		return joaat("weapon_combatmg");
	}
	else if (iParam0 == 402)
	{
		return -572349828;
	}
	else if (iParam0 == 300)
	{
		return joaat("weapon_assaultrifle");
	}
	else if (iParam0 == 301)
	{
		return joaat("weapon_carbinerifle");
	}
	else if (iParam0 == 302)
	{
		return joaat("weapon_advancedrifle");
	}
	else if (iParam0 == 303)
	{
		return -947031628;
	}
	else if (iParam0 == 200)
	{
		return joaat("weapon_pumpshotgun");
	}
	else if (iParam0 == 201)
	{
		return joaat("weapon_sawnoffshotgun");
	}
	else if (iParam0 == 202)
	{
		return joaat("weapon_assaultshotgun");
	}
	else if (iParam0 == 203)
	{
		return joaat("weapon_bullpupshotgun");
	}
	else if (iParam0 == 100)
	{
		return joaat("weapon_microsmg");
	}
	else if (iParam0 == 101)
	{
		return joaat("weapon_smg");
	}
	else if (iParam0 == 102)
	{
		return joaat("weapon_assaultsmg");
	}
	else if (iParam0 == 0)
	{
		return joaat("weapon_pistol");
	}
	else if (iParam0 == 1)
	{
		return joaat("weapon_combatpistol");
	}
	else if (iParam0 == 2)
	{
		return joaat("weapon_appistol");
	}
	else if (iParam0 == 3)
	{
		return joaat("weapon_pistol50");
	}
	return 0;
}

void func_135(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5)//Position - 0xA85C
{
	unk_0x29CD142125FE177B(iParam0, "SET_SLOT");
	unk_0x1E1FB49121565EB6(iParam1);
	unk_0x1E1FB49121565EB6(iParam2);
	if (iParam3 > 0)
	{
		unk_0x57016C44F10111F0("NUMBER");
		unk_0xAA5C5BF0489E5553(iParam3);
		unk_0x64989E60CF560CA1();
	}
	else
	{
		unk_0x57016C44F10111F0("SC_LB_EMPTY");
		unk_0x64989E60CF560CA1();
	}
	unk_0xCB30200B8055CA57(sParam4);
	unk_0xCB30200B8055CA57(sParam5);
}

int func_136(var uParam0, var uParam1)//Position - 0xA8AE
{
	if (!func_137(*uParam0))
	{
		return 0;
	}
	if (!func_137(*uParam1))
	{
		return 0;
	}
	if (unk_0x8C3429C475E8DB5D(uParam0, uParam1))
	{
		return 1;
	}
	return 0;
}

bool func_137(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0xA8E8
{
	return unk_0x700A9F370C80C9E1(&uParam0, 13);
}

void func_138(var uParam0, var uParam1)//Position - 0xA8F8
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	var uVar3;
	
	Var2.f_3C = 6;
	Var2.f_43 = 6;
	if (!unk_0xFA30DFD0084E92FE(uParam0->f_2A, 5) && !unk_0xFA30DFD0084E92FE(uParam0->f_2A, 6))
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if ((uParam1[iVar0 /*100*/])->f_4B != 0)
			{
				iVar1 = iVar0 + 1;
				while (iVar1 <= 11)
				{
					if ((uParam1[iVar1 /*100*/])->f_4B != 0)
					{
						if ((uParam1[iVar1 /*100*/])->f_4B < (uParam1[iVar0 /*100*/])->f_4B)
						{
							uVar3 = (uParam1[iVar1 /*100*/])->f_4B;
							(uParam1[iVar1 /*100*/])->f_4B = (uParam1[iVar0 /*100*/])->f_4B;
							(uParam1[iVar0 /*100*/])->f_4B = uVar3;
							Var2 = { *(uParam1[iVar1 /*100*/]) };
							*(uParam1[iVar1 /*100*/]) = { *(uParam1[iVar0 /*100*/]) };
							*(uParam1[iVar0 /*100*/]) = { Var2 };
						}
						else if ((uParam1[iVar1 /*100*/])->f_4B == (uParam1[iVar0 /*100*/])->f_4B)
						{
							if ((uParam1[iVar1 /*100*/])->f_3B != -1)
							{
								if ((uParam1[iVar1 /*100*/])->f_3B < (uParam1[iVar0 /*100*/])->f_3B || (uParam1[iVar0 /*100*/])->f_3B == -1)
								{
									uVar3 = (uParam1[iVar1 /*100*/])->f_4B;
									(uParam1[iVar1 /*100*/])->f_4B = (uParam1[iVar0 /*100*/])->f_4B;
									(uParam1[iVar0 /*100*/])->f_4B = uVar3;
									Var2 = { *(uParam1[iVar1 /*100*/]) };
									*(uParam1[iVar1 /*100*/]) = { *(uParam1[iVar0 /*100*/]) };
									*(uParam1[iVar0 /*100*/]) = { Var2 };
								}
							}
						}
					}
					iVar1++;
				}
			}
			iVar0++;
		}
	}
}

void func_139(var uParam0, var uParam1)//Position - 0xAA69
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	if (!unk_0xFA30DFD0084E92FE(uParam0->f_2A, 5) && !unk_0xFA30DFD0084E92FE(uParam0->f_2A, 6))
	{
		iVar4 = 0;
		while (iVar4 < 12)
		{
			if (func_142(uParam1, iVar3, &uVar0, 0))
			{
				(uParam1[iVar3 /*100*/])->f_4B = 1;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_142(uParam1, iVar3, &uVar1, 1))
			{
				(uParam1[iVar3 /*100*/])->f_4B = 2;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_142(uParam1, iVar3, &uVar2, 2))
			{
				(uParam1[iVar3 /*100*/])->f_4B = 3;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			iVar4++;
		}
	}
	else
	{
		func_140(uParam1);
	}
}

void func_140(var uParam0)//Position - 0xAB1E
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_1C017E.f_A90[iVar0] = 0;
		Global_1C017E.f_AD7[iVar0] = -1;
		iVar0++;
	}
	Var3 = { func_23(unk_0xB5CEFD608600A09F()) };
	if (unk_0xA8C9945AE39E6D48(Global_1C017E.f_B0A))
	{
		iVar4 = unk_0xD2159EC8D5CA5847(Global_1C017E.f_B0A);
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < iVar4)
		{
			if (iVar0 < 12)
			{
				func_141(&Global_1C11E7);
				iVar2 = 0;
				unk_0xBB72C617FBEA1F24(Global_1C017E.f_B0A, iVar0, &Global_1C11E7);
				*(uParam0[iVar0 /*100*/]) = { Global_1C11E7.f_1 };
				(uParam0[iVar0 /*100*/])->f_10 = { Global_1C11E7.f_11 };
				(uParam0[iVar0 /*100*/])->f_20 = { Global_1C11E7.f_21 };
				(uParam0[iVar0 /*100*/])->f_2D = { Global_1C11E7.f_2E };
				(uParam0[iVar0 /*100*/])->f_3A = Global_1C11E7.f_3B;
				(uParam0[iVar0 /*100*/])->f_3B = Global_1C11E7.f_3C;
				Global_1C017E.f_A94 = Global_1C11E7.f_3E;
				Global_1C017E.f_AD1 = Global_1C11E7.f_3F;
				iVar2 = 0;
				if (unk_0xFA30DFD0084E92FE(Global_1C11E7.f_3D, 1))
				{
					iVar2 = 1;
				}
				else if (unk_0xFA30DFD0084E92FE(Global_1C11E7.f_3D, 2))
				{
					iVar2 = 2;
				}
				else if (unk_0xFA30DFD0084E92FE(Global_1C11E7.f_3D, 3))
				{
					iVar2 = 3;
				}
				Global_1C017E.f_A90[(iVar2 - 1)]++;
				(uParam0[iVar0 /*100*/])->f_4B = iVar2;
				if ((uParam0[iVar0 /*100*/])->f_3B != -1)
				{
					if (unk_0xFA30DFD0084E92FE(Global_1C11E7.f_3D, 0))
					{
						(uParam0[iVar0 /*100*/])->f_4A = 1;
					}
					else
					{
						(uParam0[iVar0 /*100*/])->f_4A = 0;
					}
					if (func_136(&((uParam0[iVar0 /*100*/])->f_20), &Var3))
					{
						Global_1C017E.f_AD7[(iVar2 - 1)] = 0;
					}
				}
				iVar1 = 0;
				while (iVar1 < Global_1C11E7.f_3E)
				{
					if (unk_0xFA30DFD0084E92FE(Global_1C11E7.f_3F, iVar1))
					{
						(uParam0[iVar0 /*100*/])->f_43[iVar1] = Global_1C11E7.f_61[iVar1];
					}
					else
					{
						(uParam0[iVar0 /*100*/])->f_3C[iVar1] = Global_1C11E7.f_40[iVar1];
					}
					iVar1++;
				}
			}
			iVar0++;
		}
	}
}

void func_141(var uParam0)//Position - 0xAD3E
{
	struct<13> Var0;
	int iVar1;
	
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 64);
	StringCopy(&(uParam0->f_11), "", 64);
	uParam0->f_21 = { Var0 };
	uParam0->f_2E = { Var0 };
	uParam0->f_3B = 0;
	uParam0->f_3C = 0;
	uParam0->f_3D = 0;
	uParam0->f_3E = 0;
	uParam0->f_3F = 0;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		uParam0->f_40[iVar1] = 0f;
		uParam0->f_61[iVar1] = 0;
		iVar1++;
	}
}

int func_142(var uParam0, int iParam1, var uParam2, int iParam3)//Position - 0xADB4
{
	int iVar0;
	
	if (*uParam2 == 0)
	{
		if (Global_1C017E[iParam3 /*901*/][0 /*75*/].f_3B > 0)
		{
			*(uParam0[iParam1 /*100*/]) = { Global_1C017E[iParam3 /*901*/][0 /*75*/] };
			Global_1C11AE[iParam3 /*16*/] = { Global_1C017E[iParam3 /*901*/][0 /*75*/] };
			Global_1C11AE.f_31[iParam3] = Global_1C017E[iParam3 /*901*/][0 /*75*/].f_43[Global_1C017E.f_ADB];
			Global_1C11AE.f_35[iParam3] = Global_1C017E[iParam3 /*901*/][0 /*75*/].f_3C[Global_1C017E.f_ADB];
			*uParam2++;
			return 1;
		}
	}
	else if (*uParam2 == 1)
	{
		if (Global_1C017E.f_AD7[iParam3] > 0)
		{
			*(uParam0[iParam1 /*100*/]) = { Global_1C017E[iParam3 /*901*/][Global_1C017E.f_AD7[iParam3] /*75*/] };
			*uParam2++;
			return 1;
		}
		else
		{
			if (Global_1C017E.f_AD7[iParam3] < 0)
			{
				StringCopy(uParam0[iParam1 /*100*/], unk_0xD885B2234FC72D62(unk_0xB5CEFD608600A09F()), 64);
				(uParam0[iParam1 /*100*/])->f_20 = { func_23(unk_0xB5CEFD608600A09F()) };
				(uParam0[iParam1 /*100*/])->f_3B = -1;
				(uParam0[iParam1 /*100*/])->f_43[0] = -1;
				(uParam0[iParam1 /*100*/])->f_43[1] = -1;
				(uParam0[iParam1 /*100*/])->f_43[2] = -1;
				(uParam0[iParam1 /*100*/])->f_43[3] = -1;
				(uParam0[iParam1 /*100*/])->f_3C[0] = -1f;
				(uParam0[iParam1 /*100*/])->f_3C[1] = -1f;
				(uParam0[iParam1 /*100*/])->f_3C[2] = -1f;
				(uParam0[iParam1 /*100*/])->f_3C[3] = -1f;
				*uParam2++;
				return 1;
			}
			*uParam2++;
		}
	}
	else if ((*uParam2 % 2) == 0)
	{
		iVar0 = (*uParam2 / 2);
		if ((Global_1C017E.f_AD7[iParam3] - iVar0) >= 1)
		{
			if (Global_1C017E[iParam3 /*901*/][(Global_1C017E.f_AD7[iParam3] - iVar0) /*75*/].f_3B > 0)
			{
				*(uParam0[iParam1 /*100*/]) = { Global_1C017E[iParam3 /*901*/][(Global_1C017E.f_AD7[iParam3] - iVar0) /*75*/] };
				*uParam2++;
				return 1;
			}
		}
	}
	else
	{
		iVar0 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT((*uParam2 / 2)));
		if ((Global_1C017E.f_AD7[iParam3] + iVar0) < 12 && (Global_1C017E.f_AD7[iParam3] + iVar0) > 0)
		{
			if (Global_1C017E[iParam3 /*901*/][(Global_1C017E.f_AD7[iParam3] + iVar0) /*75*/].f_3B > 1)
			{
				*(uParam0[iParam1 /*100*/]) = { Global_1C017E[iParam3 /*901*/][(Global_1C017E.f_AD7[iParam3] + iVar0) /*75*/] };
				*uParam2++;
				return 1;
			}
		}
	}
	*uParam2++;
	return 0;
}

int func_143(var uParam0, int iParam1, bool bParam2)//Position - 0xB05D
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_144(uParam0, bParam2, 0);
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

void func_144(var uParam0, bool bParam1, bool bParam2)//Position - 0xB0BB
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

void func_145(int iParam0, int iParam1, int iParam2, char* sParam3)//Position - 0xB100
{
	unk_0xF0059F27F7BB6680(&iParam2, 7);
	unk_0x29CD142125FE177B(iParam0, "SET_SLOT");
	unk_0x1E1FB49121565EB6(iParam1);
	unk_0x1E1FB49121565EB6(iParam2);
	unk_0x57016C44F10111F0(sParam3);
	unk_0xCEC028A78CF8885E();
	unk_0xF9FBC2F3F73D94C9();
}

int func_146(var uParam0)//Position - 0xB134
{
	if (!Global_1C017C)
	{
		if (!func_180(&(Global_1C017E.f_B0B)))
		{
			func_144(&(Global_1C017E.f_B0B), 1, 0);
			return 0;
		}
		else if (!func_143(&(Global_1C017E.f_B0B), 1000, 1))
		{
			return 0;
		}
	}
	if (((!unk_0x6EFCE916927099A8() || !unk_0x97EF4023B86C354F()) || (!unk_0x36C1DE668967177B() && unk_0x11F704A1BA7AC122())) || Global_1C017E.f_B10 != 0)
	{
		unk_0x7CB6FD92BE491AD9(&(uParam0->f_2A), 4);
		return 1;
	}
	if (!unk_0xFA30DFD0084E92FE(uParam0->f_2A, 4))
	{
		func_179(uParam0);
		unk_0xF0059F27F7BB6680(&(uParam0->f_2A), 4);
		return 0;
	}
	else if (unk_0xFA30DFD0084E92FE(uParam0->f_2A, 5))
	{
		(*uParam0)[0] = 2;
		(*uParam0)[1] = 1;
		(*uParam0)[2] = 3;
		return 1;
	}
	if (!func_177(uParam0))
	{
		return 0;
	}
	if (!func_175(uParam0))
	{
		return 0;
	}
	if (!func_162(uParam0))
	{
		return 0;
	}
	if (!unk_0xFA30DFD0084E92FE(uParam0->f_2A, 6))
	{
		func_94(&Global_1C1269);
		func_139(uParam0, &Global_1C1269);
		func_138(uParam0, &Global_1C1269);
		unk_0xF0059F27F7BB6680(&(uParam0->f_2A), 6);
	}
	if (!unk_0xFA30DFD0084E92FE(uParam0->f_2A, 7))
	{
		if (!func_180(&(Global_1C017E.f_B0E)))
		{
			func_144(&(Global_1C017E.f_B0E), 1, 0);
		}
		else if (func_143(&(Global_1C017E.f_B0E), 30000, 1))
		{
			unk_0xF0059F27F7BB6680(&(uParam0->f_2A), 7);
		}
		if (func_159(&Global_1C1269))
		{
		}
		else
		{
			return 0;
		}
		if (func_156(&Global_1C1269))
		{
		}
		else
		{
			return 0;
		}
		if (func_151(&Global_1C1269))
		{
			func_147(&Global_1C1269);
			unk_0xF0059F27F7BB6680(&(uParam0->f_2A), 7);
			func_147(&Global_1C1269);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_147(var uParam0)//Position - 0xB2F9
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = func_150(Global_1C017E.f_B0A);
	if (Global_1C0DEF.f_51[iVar2] != 0)
	{
		func_149(-1, iVar2);
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_141(&Global_1C11E7);
		if ((uParam0[iVar0 /*100*/])->f_4B != 0)
		{
			Global_1C11E7 = Global_1C017E.f_B0A;
			Global_1C11E7.f_1 = { *(uParam0[iVar0 /*100*/]) };
			if (unk_0x3362CDE8460ED38B(&((uParam0[iVar0 /*100*/])->f_10), ""))
			{
				Global_1C11E7.f_11 = { *(uParam0[iVar0 /*100*/]) };
			}
			else
			{
				Global_1C11E7.f_11 = { (uParam0[iVar0 /*100*/])->f_10 };
			}
			Global_1C11E7.f_21 = { (uParam0[iVar0 /*100*/])->f_20 };
			if (func_137((uParam0[iVar0 /*100*/])->f_2D))
			{
				Global_1C11E7.f_2E = { (uParam0[iVar0 /*100*/])->f_2D };
			}
			else
			{
				Global_1C11E7.f_2E = { (uParam0[iVar0 /*100*/])->f_20 };
			}
			Global_1C11E7.f_3B = (uParam0[iVar0 /*100*/])->f_3A;
			Global_1C11E7.f_3C = (uParam0[iVar0 /*100*/])->f_3B;
			Global_1C11E7.f_3E = Global_1C017E.f_A94;
			Global_1C11E7.f_3F = Global_1C017E.f_AD2;
			if ((uParam0[iVar0 /*100*/])->f_4A)
			{
				unk_0xF0059F27F7BB6680(&(Global_1C11E7.f_3D), 0);
			}
			else
			{
				unk_0x7CB6FD92BE491AD9(&(Global_1C11E7.f_3D), 0);
			}
			unk_0xF0059F27F7BB6680(&(Global_1C11E7.f_3D), (uParam0[iVar0 /*100*/])->f_4B);
			iVar1 = 0;
			while (iVar1 < Global_1C11E7.f_3E)
			{
				if (unk_0xFA30DFD0084E92FE(Global_1C11E7.f_3F, iVar1))
				{
					Global_1C11E7.f_61[iVar1] = (uParam0[iVar0 /*100*/])->f_43[iVar1];
				}
				else
				{
					Global_1C11E7.f_40[iVar1] = (uParam0[iVar0 /*100*/])->f_3C[iVar1];
				}
				iVar1++;
			}
			Global_1C0DEF.f_51[iVar2] = Global_1C017E.f_B0A;
			unk_0xEE5625AB4DE2153C(&Global_1C11E7);
		}
		iVar0++;
	}
	Global_1C0DEF.f_57[iVar2 /*3*/] = { func_148(unk_0xB5CEFD608600A09F()) };
}

Vector3 func_148(int iParam0)//Position - 0xB4E3
{
	return unk_0x541C2AEF053615BC(unk_0xA95CF30C72EB526E(iParam0), false);
}

void func_149(int iParam0, int iParam1)//Position - 0xB4F6
{
	int iVar0;
	
	if (iParam1 != -1)
	{
		if (unk_0xA8C9945AE39E6D48(Global_1C0DEF.f_51[iParam1]))
		{
			unk_0x47B5979E1273FCA7(Global_1C0DEF.f_51[iParam1]);
		}
		Global_1C0DEF.f_51[iParam1] = 0;
	}
	else if (iParam0 != -1)
	{
		if (unk_0xA8C9945AE39E6D48(iParam0))
		{
			unk_0x47B5979E1273FCA7(iParam0);
		}
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (Global_1C0DEF.f_51[iVar0] == iParam0)
			{
				Global_1C0DEF.f_51[iVar0] = 0;
			}
			iVar0++;
		}
	}
}

int func_150(int iParam0)//Position - 0xB572
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1C0DEF.f_51[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1C0DEF.f_51[iVar0] == 0)
		{
			return iVar0;
		}
		else if (unk_0xA8C9945AE39E6D48(Global_1C0DEF.f_51[iVar0]))
		{
			iVar3 = unk_0x6C6916B5786D9360(Global_1C0DEF.f_51[iVar0]);
			if (iVar3 > iVar2)
			{
				iVar1 = iVar0;
				iVar2 = iVar3;
			}
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_151(var uParam0)//Position - 0xB605
{
	int iVar0;
	int iVar1;
	
	switch ((uParam0[0 /*100*/])->f_4C)
	{
		case 0:
			func_155(uParam0);
			if (unk_0xF7E138CFA19B55E7() && !unk_0x5553DFDA03631860(0))
			{
				(uParam0[0 /*100*/])->f_4C = 3;
				return 0;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				if (func_137((uParam0[iVar0 /*100*/])->f_20))
				{
					if (!func_154(&((uParam0[iVar0 /*100*/])->f_20), &Global_1C177A))
					{
						Global_1C177A[Global_1C177A.f_CE /*13*/] = { (uParam0[iVar0 /*100*/])->f_20 };
						Global_1C177A.f_CE++;
					}
				}
				iVar0++;
			}
			if (Global_1C177A.f_CE > 0)
			{
				(uParam0[0 /*100*/])->f_4C = 1;
			}
			else
			{
				(uParam0[0 /*100*/])->f_4C = 3;
			}
			break;
		
		case 1:
			if (func_152(&((uParam0[1 /*100*/])->f_4C), &(Global_1C177A.f_CE), &Global_1C177A, &(Global_1C177A.f_9D)))
			{
				(uParam0[0 /*100*/])->f_4C = 2;
			}
			break;
		
		case 2:
			if (Global_1C177A.f_CE > 12)
			{
				Global_1C177A.f_CE = 12;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				iVar1 = 0;
				while (iVar1 < Global_1C177A.f_CE)
				{
					if (func_137((uParam0[iVar0 /*100*/])->f_20) && func_137(Global_1C177A[iVar1 /*13*/]))
					{
						if (unk_0x8C3429C475E8DB5D(&((uParam0[iVar0 /*100*/])->f_20), &(Global_1C177A[iVar1 /*13*/])))
						{
							(uParam0[iVar0 /*100*/])->f_50 = { Global_1C177A.f_9D[iVar1 /*4*/] };
						}
					}
					iVar1++;
				}
				iVar0++;
			}
			(uParam0[0 /*100*/])->f_4C = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_152(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0xB7A8
{
	var uVar0;
	int iVar1;
	
	switch (*uParam0)
	{
		case 0:
			if (unk_0x1A927941D0EBB398())
			{
			}
			else
			{
				unk_0x78AD70BEE1186469();
				unk_0x84C44F1868801E06(uParam2, *uParam1);
				*uParam0 = 1;
			}
			break;
		
		case 1:
			if (!unk_0x1A927941D0EBB398())
			{
				if (unk_0xECE4AB055AC5B99A())
				{
					*uParam0 = 2;
				}
				else
				{
					*uParam0 = 3;
				}
			}
			break;
		
		case 2:
			iVar1 = 0;
			while (iVar1 < *uParam1)
			{
				if (unk_0x3B4C5D4C0D509B43(uParam2[iVar1 /*13*/], &uVar0))
				{
					func_153(&uVar0, uParam3[iVar1 /*4*/]);
				}
				iVar1++;
			}
			if (unk_0x1A927941D0EBB398())
			{
				unk_0xD1F2AC8A90616142();
			}
			else
			{
				unk_0x78AD70BEE1186469();
			}
			*uParam0 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_153(var uParam0, char* sParam1)//Position - 0xB861
{
	unk_0x6B97B73981ADFBF1(uParam0, 35, sParam1);
}

int func_154(var uParam0, var uParam1)//Position - 0xB873
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (func_137(*(uParam1[iVar0 /*13*/])))
		{
			if (unk_0x8C3429C475E8DB5D(uParam0, uParam1[iVar0 /*13*/]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_155(var uParam0)//Position - 0xB8B2
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_99(&(Global_1C177A[iVar0 /*13*/]));
		StringCopy(&(Global_1C177A.f_9D[iVar0 /*4*/]), "", 16);
		iVar0++;
	}
	if ((uParam0[0 /*100*/])->f_4C > 0)
	{
		(uParam0[0 /*100*/])->f_4C = 0;
		(uParam0[1 /*100*/])->f_4C = 0;
		if (!unk_0x1A927941D0EBB398())
		{
			unk_0x78AD70BEE1186469();
		}
	}
	if (unk_0x1A927941D0EBB398())
	{
		unk_0xD1F2AC8A90616142();
	}
	Global_1C177A.f_CE = 0;
}

int func_156(var uParam0)//Position - 0xB923
{
	int iVar0;
	
	if (unk_0x8ACB0C3FACC09467())
	{
		return 1;
	}
	else if (unk_0xF49912B78E2591B6())
	{
		if (!func_158(uParam0))
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_157(&((uParam0[iVar0 /*100*/])->f_4E), &((uParam0[iVar0 /*100*/])->f_20), uParam0[iVar0 /*100*/]))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_157(var uParam0, var uParam1, char* sParam2)//Position - 0xB987
{
	if (*uParam0 == 2)
	{
		return 1;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_137(*uParam1))
			{
				if (!unk_0x25C195432AADB46C(uParam1))
				{
					if (unk_0xF49912B78E2591B6())
					{
						if (unk_0x3C06831BC53A4780(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else if (unk_0xA76D65C63ED50F67())
					{
						if (unk_0x3C06831BC53A4780(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam2, unk_0x3F78275202D8E949(uParam1), 64);
						if (unk_0x3E9993F328985CCB())
						{
						}
						else if (unk_0xF7E138CFA19B55E7())
						{
						}
						else if (unk_0x8ACB0C3FACC09467())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam2, unk_0xD885B2234FC72D62(unk_0xAE3E1FA04127F079(uParam1)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!unk_0x25C195432AADB46C(uParam1))
			{
				if (!unk_0xCCEB07853B18E06B())
				{
					if (unk_0x0D7CCCA101B6132E())
					{
						StringCopy(sParam2, unk_0x3F78275202D8E949(uParam1), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam2, unk_0xD885B2234FC72D62(unk_0xAE3E1FA04127F079(uParam1)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_158(var uParam0)//Position - 0xBA8E
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0xF49912B78E2591B6())
	{
		return 1;
	}
	if ((uParam0[0 /*100*/])->f_4E == 2)
	{
		return 1;
	}
	switch ((uParam0[0 /*100*/])->f_4E)
	{
		case 0:
			Global_1C017E.f_C6F = 0;
			iVar1 = 0;
			while (iVar1 < 12)
			{
				StringCopy(&(Global_1C017E.f_B11[iVar1 /*16*/]), "", 64);
				func_99(&(Global_1C017E.f_BD2[iVar1 /*13*/]));
				if (func_137((uParam0[iVar1 /*100*/])->f_20))
				{
					Global_1C017E.f_BD2[Global_1C017E.f_C6F /*13*/] = { (uParam0[iVar1 /*100*/])->f_20 };
					Global_1C017E.f_C6F++;
				}
				iVar1++;
			}
			if (Global_1C017E.f_C6F > 0)
			{
				(uParam0[0 /*100*/])->f_4F = unk_0xF18EB09A1D516C58(&(Global_1C017E.f_BD2), Global_1C017E.f_C6F);
				(uParam0[0 /*100*/])->f_4E = 1;
			}
			else
			{
				(uParam0[0 /*100*/])->f_4E = 2;
			}
			break;
		
		case 1:
			iVar0 = unk_0xF7AF812DF8CE7D89((uParam0[0 /*100*/])->f_4F, &(Global_1C017E.f_B11), Global_1C017E.f_C6F);
			if (iVar0 == 0)
			{
				iVar1 = 0;
				while (iVar1 < 12)
				{
					if (func_137((uParam0[iVar1 /*100*/])->f_20))
					{
						*(uParam0[iVar1 /*100*/]) = { Global_1C017E.f_B11[iVar2 /*16*/] };
						iVar2++;
					}
					iVar1++;
				}
				(uParam0[0 /*100*/])->f_4E = 2;
			}
			else if (iVar0 == -1)
			{
				(uParam0[0 /*100*/])->f_4E = 2;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			(uParam0[0 /*100*/])->f_4F = -1;
			return 1;
			break;
	}
	return 0;
}

int func_159(var uParam0)//Position - 0xBC1A
{
	int iVar0;
	
	if (unk_0xF49912B78E2591B6())
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_161(&((uParam0[iVar0 /*100*/])->f_4D), &((uParam0[iVar0 /*100*/])->f_10), &((uParam0[iVar0 /*100*/])->f_54), &(Global_1C017E.f_B11), &((uParam0[iVar0 /*100*/])->f_4F)))
			{
				return 0;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_160(&((uParam0[iVar0 /*100*/])->f_4D), (uParam0[iVar0 /*100*/])->f_10, &((uParam0[iVar0 /*100*/])->f_54)))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_160(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, char* sParam17)//Position - 0xBCAD
{
	struct<13> Var0;
	
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (unk_0xF1734B55490E9045(&uParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	unk_0xE88E4A7234E1EF55(&uParam1, &Var0, 13);
	switch (*uParam0)
	{
		case 0:
			if (func_137(Var0))
			{
				if (!unk_0x25C195432AADB46C(&Var0))
				{
					if (unk_0xA76D65C63ED50F67() || unk_0xF49912B78E2591B6())
					{
						if (unk_0x3C06831BC53A4780(&Var0))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam17, unk_0x3F78275202D8E949(&Var0), 64);
						if (unk_0x3E9993F328985CCB())
						{
						}
						else if (unk_0xF7E138CFA19B55E7())
						{
						}
						else if (unk_0x8ACB0C3FACC09467())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam17, unk_0xD885B2234FC72D62(unk_0xAE3E1FA04127F079(&Var0)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!unk_0x25C195432AADB46C(&Var0))
			{
				if (!unk_0xCCEB07853B18E06B())
				{
					if (unk_0x0D7CCCA101B6132E())
					{
						StringCopy(sParam17, unk_0x3F78275202D8E949(&Var0), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam17, unk_0xD885B2234FC72D62(unk_0xAE3E1FA04127F079(&Var0)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_161(var uParam0, char* sParam1, char* sParam2, var uParam3, var uParam4)//Position - 0xBDC5
{
	int iVar0;
	struct<13> Var1[1];
	
	if (!unk_0xF49912B78E2591B6())
	{
		return 1;
	}
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (unk_0xF1734B55490E9045(sParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	unk_0xE88E4A7234E1EF55(sParam1, &(Var1[0 /*13*/]), 13);
	switch (*uParam0)
	{
		case 0:
			StringCopy(uParam3[0 /*16*/], "", 64);
			if (func_137(Var1[0 /*13*/]))
			{
				if (!unk_0x25C195432AADB46C(&(Var1[0 /*13*/])))
				{
					*uParam4 = unk_0xF18EB09A1D516C58(&Var1, 1);
					*uParam0 = 1;
				}
				else
				{
					StringCopy(sParam2, unk_0xD885B2234FC72D62(unk_0xAE3E1FA04127F079(&(Var1[0 /*13*/]))), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			iVar0 = unk_0xF7AF812DF8CE7D89(*uParam4, uParam3, 1);
			if (iVar0 == 0)
			{
				*sParam2 = { *(uParam3[0 /*16*/]) };
				*uParam0 = 2;
			}
			else if (iVar0 == -1)
			{
				*uParam0 = 2;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			*uParam4 = -1;
			return 1;
			break;
	}
	return 0;
}

int func_162(var uParam0)//Position - 0xBEC1
{
	struct<97> Var0;
	struct<6> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	struct<13> Var12;
	
	Var0.f_13.f_1 = 4;
	iVar5 = -1;
	iVar9 = 2;
	Var12 = { func_23(unk_0xB5CEFD608600A09F()) };
	switch ((*uParam0)[iVar9])
	{
		case 0:
			Global_1C017E.f_AD7[iVar9] = -1;
			Global_1C017E.f_A90[iVar9] = 0;
			Global_1C0005.f_176 = -1;
			if (unk_0xB9ACC1154C623363())
			{
				if (unk_0xD7F4457CECF10121(&Var12))
				{
					if (unk_0x24723877416AAAFC(&(uParam0->f_7), 35, &Var12))
					{
						uParam0->f_2C.f_2 = uParam0->f_7;
						uParam0->f_2C.f_1 = 3;
						(*uParam0)[iVar9] = 1;
						return 0;
					}
				}
				else
				{
					(*uParam0)[iVar9] = 3;
					return 1;
				}
			}
			else
			{
				(*uParam0)[iVar9] = 3;
				return 1;
			}
			break;
		
		case 1:
			uParam0->f_2C.f_1 = 3;
			Var1 = uParam0->f_2C;
			Var1.f_1 = uParam0->f_2C.f_1;
			if (func_173(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), 11, &Var12, func_174(), 0, 0, 0))
			{
				func_172(&Var1, &(uParam0->f_2C));
				if (uParam0->f_5 && unk_0xB303DCFC38D1F67C(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						iVar7 = 0;
						iVar2 = 0;
						if (func_174())
						{
							iVar7 = 0;
							while (iVar7 < Var1.f_3)
							{
								unk_0xD69860729CF9D123(iVar7, &Var0);
								if (Global_1C0005.f_176 < 0)
								{
									if (func_136(&Var0, &Var12) || func_136(&Var0, &(Global_1C0005.f_169)))
									{
										Global_1C0005.f_176 = Var0.f_60;
									}
								}
								if (iVar5 < 0)
								{
									if (unk_0xFA30DFD0084E92FE(Global_1C0005.f_8E.f_2, 0))
									{
										if (Global_1C0005.f_D3.f_24[0] >= unk_0x7931D997D70CE9AF(iVar7, 0))
										{
											iVar5 = iVar7;
										}
									}
									else if (Global_1C0005.f_D3.f_3[0] >= unk_0xBB9531A49F052904(iVar7, 0))
									{
										iVar5 = iVar7;
									}
								}
								func_171(&Var0);
								iVar7++;
							}
							if (iVar5 < 0)
							{
								iVar5 = Var1.f_3;
							}
						}
						iVar7 = 0;
						unk_0xD69860729CF9D123(0, &Var0);
						if (Var0.f_60 <= 1)
						{
							if (Global_1C017E.f_A90[iVar9] < 12)
							{
								if (func_174() && iVar5 == 0)
								{
									func_170(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), Var0.f_60);
									Global_1C017E.f_AD7[iVar9] = 0;
									Global_1C017E.f_A90[iVar9]++;
								}
								if (func_174() && (func_136(&Var0, &Var12) || func_136(&Var0, &(Global_1C0005.f_169))))
								{
								}
								else
								{
									if (func_136(&Var0, &Var12))
									{
										iVar5 = 0;
										Global_1C017E.f_AD7[iVar9] = 0;
									}
									MemCopy(&(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), {Var0.f_D}, 16);
									Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_20 = { Var0 };
									Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3B = Var0.f_60;
									if (func_169(uParam0->f_2C))
									{
										iVar4 = unk_0x7931D997D70CE9AF(0, Global_1C017E.f_A95);
										if (iVar4 == 1)
										{
											Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3A = 1;
										}
										else
										{
											Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3A = 0;
										}
									}
									if (func_185(uParam0->f_2C))
									{
										MemCopy(&(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_10), {Var0.f_13.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_4A = 1;
									iVar3 = 0;
									iVar3 = 0;
									while (iVar3 < Global_1C017E.f_A94)
									{
										if (unk_0xFA30DFD0084E92FE(Global_1C017E.f_AD1, Global_1C017E.f_A96[iVar3]))
										{
											Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_43[iVar3] = unk_0x7931D997D70CE9AF(0, Global_1C017E.f_A96[iVar3]);
										}
										else
										{
											Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3C[iVar3] = unk_0xBB9531A49F052904(0, Global_1C017E.f_A96[iVar3]);
										}
										iVar3++;
									}
									Global_1C017E.f_A90[iVar9]++;
								}
								bVar8 = true;
							}
						}
						if (!bVar8)
						{
							Global_1C017E.f_A90[iVar9]++;
						}
						if (!func_174())
						{
							iVar5 = Var1.f_5;
						}
						if (iVar5 > 6)
						{
							iVar6 = (iVar5 - 6);
						}
						else if (bVar8)
						{
							iVar6 = 1;
						}
						else
						{
							iVar6 = 0;
						}
						iVar7 = iVar6;
						func_171(&Var0);
						iVar7 = iVar6;
						while (iVar7 <= (Var1.f_3 - 1))
						{
							unk_0xD69860729CF9D123(iVar7, &Var0);
							if (Global_1C017E.f_A90[iVar9] < 12 && Var0.f_60 > 1)
							{
								if (func_174() && iVar5 == iVar7)
								{
									if (!func_136(&(Global_1C017E[iVar9 /*901*/][0 /*75*/].f_20), &Var12))
									{
										func_170(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), Var0.f_60);
										Global_1C017E.f_AD7[iVar9] = Global_1C017E.f_A90[iVar9];
										Global_1C017E.f_A90[iVar9]++;
									}
								}
								if (func_174() && (func_136(&Var0, &Var12) || func_136(&Var0, &(Global_1C0005.f_169))))
								{
								}
								else if (Global_1C017E.f_A90[iVar9] < 12)
								{
									if (func_137(Var0) && !func_136(&Var0, &(Global_1C017E[iVar9 /*901*/][0 /*75*/].f_20)))
									{
										if (func_136(&Var0, &Var12))
										{
											if (Global_1C017E.f_AD7[iVar9] < 0)
											{
												Global_1C017E.f_AD7[iVar9] = Global_1C017E.f_A90[iVar9];
											}
										}
										MemCopy(&(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), {Var0.f_D}, 16);
										Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_20 = { Var0 };
										Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3B = Var0.f_60;
										Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_4A = 1;
										if (func_169(uParam0->f_2C))
										{
											iVar4 = unk_0x7931D997D70CE9AF(iVar7, Global_1C017E.f_A95);
											if (iVar4 == 1)
											{
												Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3A = 1;
											}
											else
											{
												Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3A = 0;
											}
										}
										if (func_185(uParam0->f_2C))
										{
											MemCopy(&(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_10), {Var0.f_13.f_1[1 /*16*/].f_8}, 16);
										}
										iVar2 = 0;
										iVar2 = 0;
										while (iVar2 < Global_1C017E.f_A94)
										{
											if (unk_0xFA30DFD0084E92FE(Global_1C017E.f_AD1, Global_1C017E.f_A96[iVar2]))
											{
												Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_43[iVar2] = unk_0x7931D997D70CE9AF(iVar7, Global_1C017E.f_A96[iVar2]);
											}
											else
											{
												Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3C[iVar2] = unk_0xBB9531A49F052904(iVar7, Global_1C017E.f_A96[iVar2]);
											}
											iVar2++;
										}
										Global_1C017E.f_A90[iVar9]++;
									}
								}
							}
							func_171(&Var0);
							iVar7++;
						}
						unk_0xF44A1E8325E80FF1();
						func_97(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						if (bVar8)
						{
							if (Global_1C017E.f_AD7[iVar9] == -1 && func_174())
							{
								if (Global_1C017E.f_A90[iVar9] >= 1)
								{
									func_170(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), Global_1C017E[iVar9 /*901*/][(Global_1C017E.f_A90[iVar9] - 1) /*75*/].f_3B + 1);
								}
								else
								{
									func_170(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), 1);
								}
								Global_1C017E.f_AD7[iVar9] = Global_1C017E.f_A90[iVar9];
								Global_1C017E.f_A90[iVar9]++;
							}
							(*uParam0)[iVar9] = 3;
						}
						else
						{
							(*uParam0)[iVar9] = 2;
						}
					}
					else
					{
						if (!bVar8)
						{
							Global_1C017E.f_A90[iVar9]++;
						}
						unk_0xF44A1E8325E80FF1();
						func_97(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						Global_1C017E.f_AD7[iVar9] = -1;
						(*uParam0)[iVar9] = 2;
					}
				}
				else
				{
					func_97(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
					Global_1C017E.f_AD7[iVar9] = -1;
					(*uParam0)[iVar9] = 2;
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_B10), iVar9);
				}
			}
			break;
		
		case 2:
			if (Global_1C017E.f_AD7[iVar9] == -1)
			{
				iVar11 = 11;
			}
			else
			{
				iVar11 = 1;
			}
			uParam0->f_2C.f_1 = 3;
			Var1 = uParam0->f_2C;
			Var1.f_1 = uParam0->f_2C.f_1;
			if (func_164(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), 1, iVar11))
			{
				func_172(&Var1, &(uParam0->f_2C));
				if (uParam0->f_5 && unk_0xB303DCFC38D1F67C(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						iVar2 = 0;
						while (iVar2 < Var1.f_3)
						{
							unk_0xD69860729CF9D123(iVar2, &Var0);
							bVar10 = false;
							if (Global_1C017E[iVar9 /*901*/][0 /*75*/].f_3B > 1 || Global_1C017E[iVar9 /*901*/][0 /*75*/].f_3B <= 0)
							{
								bVar10 = true;
							}
							if (Global_1C017E.f_A90[iVar9] < 12 || bVar10)
							{
								if (func_174() && (func_136(&Var0, &Var12) || func_136(&Var0, &(Global_1C0005.f_169))))
								{
								}
								else if (iVar2 == 0 || bVar10)
								{
									MemCopy(&(Global_1C017E[iVar9 /*901*/][0 /*75*/]), {Var0.f_D}, 16);
									Global_1C017E[iVar9 /*901*/][0 /*75*/].f_20 = { Var0 };
									Global_1C017E[iVar9 /*901*/][0 /*75*/].f_3B = Var0.f_60;
									if (func_169(uParam0->f_2C))
									{
										iVar4 = unk_0x7931D997D70CE9AF(0, Global_1C017E.f_A95);
										if (iVar4 == 1)
										{
											Global_1C017E[iVar9 /*901*/][0 /*75*/].f_3A = 1;
										}
										else
										{
											Global_1C017E[iVar9 /*901*/][0 /*75*/].f_3A = 0;
										}
									}
									if (func_185(uParam0->f_2C))
									{
										MemCopy(&(Global_1C017E[iVar9 /*901*/][0 /*75*/].f_10), {Var0.f_13.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1C017E[iVar9 /*901*/][0 /*75*/].f_4A = 1;
									iVar3 = 0;
									iVar3 = 0;
									while (iVar3 < Global_1C017E.f_A94)
									{
										if (unk_0xFA30DFD0084E92FE(Global_1C017E.f_AD1, Global_1C017E.f_A96[iVar3]))
										{
											Global_1C017E[iVar9 /*901*/][0 /*75*/].f_43[iVar3] = unk_0x7931D997D70CE9AF(0, Global_1C017E.f_A96[iVar3]);
										}
										else
										{
											Global_1C017E[iVar9 /*901*/][0 /*75*/].f_3C[iVar3] = unk_0xBB9531A49F052904(0, Global_1C017E.f_A96[iVar3]);
										}
										iVar3++;
									}
									if (Global_1C017E.f_A90[iVar9] == 0)
									{
										if (bVar10)
										{
										}
										else
										{
											Global_1C017E.f_A90[iVar9]++;
										}
									}
								}
								else if (Global_1C017E.f_A90[iVar9] < 12)
								{
									MemCopy(&(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), {Var0.f_D}, 16);
									Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_20 = { Var0 };
									if (func_169(uParam0->f_2C))
									{
										iVar4 = unk_0x7931D997D70CE9AF(iVar2, Global_1C017E.f_A95);
										if (iVar4 == 1)
										{
											Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3A = 1;
										}
										else
										{
											Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3A = 0;
										}
									}
									if (func_185(uParam0->f_2C))
									{
										MemCopy(&(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_10), {Var0.f_13.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3B = Var0.f_60;
									Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_4A = 1;
									iVar3 = 0;
									iVar3 = 0;
									while (iVar3 < Global_1C017E.f_A94)
									{
										if (unk_0xFA30DFD0084E92FE(Global_1C017E.f_AD1, Global_1C017E.f_A96[iVar3]))
										{
											Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_43[iVar3] = unk_0x7931D997D70CE9AF(iVar2, Global_1C017E.f_A96[iVar3]);
										}
										else
										{
											Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3C[iVar3] = unk_0xBB9531A49F052904(iVar2, Global_1C017E.f_A96[iVar3]);
										}
										iVar3++;
									}
									if (iVar2 != 0)
									{
										Global_1C017E.f_A90[iVar9]++;
									}
								}
							}
							func_171(&Var0);
							iVar2++;
						}
					}
					unk_0xF44A1E8325E80FF1();
					func_97(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
					(*uParam0)[iVar9] = 3;
				}
				else
				{
					unk_0xF44A1E8325E80FF1();
					func_97(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_B10), iVar9);
					Global_1C017E.f_A90[iVar9] = 0;
					(*uParam0)[iVar9] = 3;
				}
				if (Global_1C017E.f_AD7[iVar9] == -1 && func_174())
				{
					if (Global_1C017E.f_A90[iVar9] >= 1)
					{
						func_170(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), Global_1C017E[iVar9 /*901*/][(Global_1C017E.f_A90[iVar9] - 1) /*75*/].f_3B + 1);
					}
					else
					{
						func_170(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), 1);
					}
					Global_1C017E.f_AD7[iVar9] = Global_1C017E.f_A90[iVar9];
					Global_1C017E.f_A90[iVar9]++;
				}
			}
			break;
		
		case 3:
			func_163(iVar9, Global_1C0005.f_176);
			(*uParam0)[iVar9] = 4;
			break;
		
		case 4:
			return 1;
			break;
	}
	return 0;
}

void func_163(int iParam0, int iParam1)//Position - 0xCCF5
{
	int iVar0;
	
	if ((func_174() && Global_1C017E.f_A90[iParam0] > Global_1C017E.f_AD7[iParam0]) && Global_1C017E.f_AD7[iParam0] >= 0)
	{
		if (iParam1 != Global_1C017E[iParam0 /*901*/][Global_1C017E.f_AD7[iParam0] /*75*/].f_3B)
		{
			iVar0 = 0;
			while (iVar0 < Global_1C017E.f_A90[iParam0])
			{
				if (iVar0 != Global_1C017E.f_AD7[iParam0])
				{
					if (Global_1C017E[iParam0 /*901*/][iVar0 /*75*/].f_3B >= Global_1C017E[iParam0 /*901*/][Global_1C017E.f_AD7[iParam0] /*75*/].f_3B)
					{
						if (Global_1C017E[iParam0 /*901*/][iVar0 /*75*/].f_3B < iParam1 || iParam1 == -1)
						{
							Global_1C017E[iParam0 /*901*/][iVar0 /*75*/].f_3B++;
						}
					}
				}
				iVar0++;
			}
		}
	}
	else
	{
		if (!func_174())
		{
		}
		if (Global_1C017E.f_A90[iParam0] <= Global_1C017E.f_AD7[iParam0])
		{
		}
		if (Global_1C017E.f_AD7[iParam0] < 0)
		{
		}
	}
}

int func_164(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)//Position - 0xCE1A
{
	switch (*uParam0)
	{
		case 0:
			if (!func_167() && !func_166())
			{
				func_165(*uParam2);
				if (unk_0xFD605AFF5F99FD18(uParam2, iParam3, iParam4))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0x7C822119961C308B(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x96C63CF63AC5608D(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_165(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67)//Position - 0xCED0
{
	Global_1C0000 = 1;
	func_196(&(Global_1C0000.f_1), 1, 0);
	Global_1C0000.f_3 = Param0;
	Global_1C0000.f_4 = Param0.f_1;
}

int func_166()//Position - 0xCEFB
{
	if (unk_0xE186ACC7BE9B244E() && !func_188())
	{
		return 1;
	}
	return 0;
}

int func_167()//Position - 0xCF19
{
	if (unk_0x8964C7ACF67E0DA4() || Global_1C0000)
	{
		func_168();
		return 1;
	}
	return 0;
}

void func_168()//Position - 0xCF3B
{
	if (func_143(&(Global_1C0000.f_1), 120000, 1))
	{
		unk_0xA94A29B5BBA15E49(Global_1C0000.f_3, Global_1C0000.f_4, -1);
		Global_1C0000 = 0;
		func_91(&(Global_1C0000.f_1));
	}
}

int func_169(int iParam0)//Position - 0xCF76
{
	if ((((((iParam0 == 815 || iParam0 == 824) || iParam0 == 825) || iParam0 == 826) || iParam0 == 827) || iParam0 == 828) || iParam0 == 849)
	{
		return 1;
	}
	return 0;
}

void func_170(var uParam0, char* sParam1, int iParam2)//Position - 0xCFD4
{
	int iVar0;
	int iVar1;
	
	if (func_185(uParam0->f_2C))
	{
		MemCopy(sParam1, {Global_1C0005.f_163}, 16);
		sParam1->f_20 = { Global_1C0005.f_169 };
		MemCopy(&(sParam1->f_10), {Global_1C0005.f_15D}, 16);
	}
	else
	{
		StringCopy(sParam1, unk_0xD885B2234FC72D62(unk_0xB5CEFD608600A09F()), 64);
		sParam1->f_20 = { func_23(unk_0xB5CEFD608600A09F()) };
	}
	sParam1->f_3B = iParam2;
	if (func_169(uParam0->f_2C))
	{
		iVar0 = Global_1C0005.f_D3.f_24[Global_1C017E.f_A95];
		if (iVar0 == 1)
		{
			sParam1->f_3A = 1;
		}
		else
		{
			sParam1->f_3A = 0;
		}
	}
	sParam1->f_4A = 1;
	iVar1 = 0;
	while (iVar1 < Global_1C017E.f_A94)
	{
		if (unk_0xFA30DFD0084E92FE(Global_1C0005.f_8E.f_2, Global_1C017E.f_A96[iVar1]))
		{
			sParam1->f_43[iVar1] = Global_1C0005.f_D3.f_24[Global_1C017E.f_A96[iVar1]];
		}
		else
		{
			sParam1->f_3C[iVar1] = Global_1C0005.f_D3.f_3[Global_1C017E.f_A96[iVar1]];
		}
		iVar1++;
	}
}

void func_171(var uParam0)//Position - 0xD0E1
{
	int iVar0;
	
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
	StringCopy(&(uParam0->f_D), "", 24);
	uParam0->f_13 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_13.f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_13.f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
	uParam0->f_55 = 0;
	StringCopy(&(uParam0->f_56), "", 32);
	StringCopy(&(uParam0->f_5E), "", 8);
	uParam0->f_60 = 0;
	uParam0->f_61 = 0;
}

void func_172(var uParam0, var uParam1)//Position - 0xD18F
{
	*uParam0 = *uParam1;
	uParam0->f_1 = uParam1->f_1;
	uParam0->f_2 = 0;
}

int func_173(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)//Position - 0xD1AA
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_1C0005.f_D3.f_24[0];
	uVar1 = Global_1C0005.f_D3.f_3[0];
	if (bParam6)
	{
		uVar0 = iParam7;
		uVar1 = iParam8;
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_167() && !func_166())
			{
				func_165(*uParam2);
				if (bParam5)
				{
					if (unk_0xFA30DFD0084E92FE(Global_1C0005.f_8E.f_2, 0))
					{
						if (unk_0xD882700CACC4DD22(uParam2, uVar0, iParam3))
						{
							*uParam0++;
						}
						else
						{
							*uParam1 = 0;
							*uParam0 = 3;
						}
					}
					else if (unk_0x023467E3E9AB7AD1(uParam2, uVar1, iParam3))
					{
						*uParam0++;
					}
					else
					{
						*uParam1 = 0;
						*uParam0 = 3;
					}
				}
				else if (unk_0x58DD94F4915586DB(uParam2, iParam3, uParam4))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0x7C822119961C308B(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x96C63CF63AC5608D(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_174()//Position - 0xD2E2
{
	if (Global_1C017C && Global_1C017D)
	{
		return 1;
	}
	return 0;
}

int func_175(var uParam0)//Position - 0xD2FF
{
	struct<20> Var0;
	struct<6> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	struct<13> Var10;
	
	Var0.f_13.f_1 = 4;
	iVar4 = -1;
	iVar9 = 1;
	Var10 = { func_23(unk_0xB5CEFD608600A09F()) };
	switch ((*uParam0)[1])
	{
		case 0:
			iVar3 = unk_0x0B61CFCE8597AF35();
			Global_1C017E.f_AD7[1] = -1;
			Global_1C0005.f_176 = -1;
			Global_1C017E.f_A90[iVar9] = 0;
			if (iVar3 > 0)
			{
				if (func_174())
				{
					iVar8 = 0;
				}
				else
				{
					iVar8 = 1;
				}
				if (func_176(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), &(uParam0->f_71), uParam0->f_71[0 /*66*/], iVar8, 0, 100))
				{
					func_172(&Var1, &(uParam0->f_2C));
					if (uParam0->f_5 && unk_0xB303DCFC38D1F67C(&Var1))
					{
						if (func_174())
						{
							iVar6 = 0;
							iVar6 = 0;
							while (iVar6 < Var1.f_3)
							{
								if (iVar4 < 0)
								{
									unk_0xD69860729CF9D123(iVar6, &Var0);
									if (func_185(uParam0->f_2C))
									{
										if (Global_1C0005.f_176 < 0)
										{
											if (func_136(&Var0, &(Global_1C0005.f_169)))
											{
												Global_1C0005.f_176 = Var0.f_60;
											}
										}
									}
									if (unk_0xFA30DFD0084E92FE(Global_1C0005.f_8E.f_2, 0))
									{
										if (Global_1C0005.f_D3.f_24[0] >= unk_0x7931D997D70CE9AF(iVar6, 0))
										{
											iVar4 = iVar6;
										}
									}
									else if (Global_1C0005.f_D3.f_3[0] >= unk_0xBB9531A49F052904(iVar6, 0))
									{
										iVar4 = iVar6;
									}
									func_171(&Var0);
								}
								iVar6++;
							}
							if (iVar4 < 0)
							{
								iVar4 = Var1.f_3;
							}
						}
						iVar6 = 0;
						if (func_174() && iVar4 == 0)
						{
							if (Global_1C017E.f_A90[iVar9] < 12)
							{
								func_170(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), 1);
								Global_1C017E.f_AD7[iVar9] = 0;
								Global_1C017E.f_A90[iVar9]++;
							}
						}
						if (Var1.f_3 > 0)
						{
							unk_0xD69860729CF9D123(0, &Var0);
							if (func_174() && (func_136(&Var0, &Var10) || func_136(&Var0, &(Global_1C0005.f_169))))
							{
							}
							else if (func_137(Var0) && Global_1C017E.f_A90[iVar9] < 12)
							{
								if (func_136(&Var0, &Var10))
								{
									iVar4 = 0;
									Global_1C017E.f_AD7[1] = 0;
								}
								MemCopy(&(Global_1C017E[1 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), {Var0.f_D}, 16);
								Global_1C017E[1 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_20 = { Var0 };
								Global_1C017E[1 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3B = 1;
								if (func_169(uParam0->f_2C))
								{
									iVar7 = unk_0x7931D997D70CE9AF(0, Global_1C017E.f_A95);
									if (iVar7 == 1)
									{
										Global_1C017E[1 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3A = 1;
									}
									else
									{
										Global_1C017E[1 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3A = 0;
									}
								}
								if (func_185(uParam0->f_2C))
								{
									MemCopy(&(Global_1C017E[1 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_10), {Var0.f_13.f_1[1 /*16*/].f_8}, 16);
								}
								Global_1C017E[1 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_4A = 1;
								iVar2 = 0;
								while (iVar2 < Global_1C017E.f_A94)
								{
									if (unk_0xFA30DFD0084E92FE(Global_1C017E.f_AD1, Global_1C017E.f_A96[iVar2]))
									{
										Global_1C017E[1 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_43[iVar2] = unk_0x7931D997D70CE9AF(0, Global_1C017E.f_A96[iVar2]);
									}
									else
									{
										Global_1C017E[1 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/].f_3C[iVar2] = unk_0xBB9531A49F052904(0, Global_1C017E.f_A96[iVar2]);
									}
									iVar2++;
								}
								Global_1C017E.f_A90[1]++;
							}
							else
							{
								func_171(&Var0);
								unk_0xF44A1E8325E80FF1();
								func_97(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
								Global_1C017E.f_A90[1] = 0;
								(*uParam0)[1] = 1;
								if (Global_1C017E.f_AD7[iVar9] == -1 && func_174())
								{
									if (Global_1C017E.f_A90[iVar9] >= 1)
									{
										func_170(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), Global_1C017E[iVar9 /*901*/][(Global_1C017E.f_A90[iVar9] - 1) /*75*/].f_3B + 1);
									}
									else
									{
										func_170(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), 1);
									}
									Global_1C017E.f_AD7[iVar9] = Global_1C017E.f_A90[iVar9];
									Global_1C017E.f_A90[iVar9]++;
								}
								return 0;
							}
							func_171(&Var0);
						}
						else
						{
							Global_1C017E.f_A90[1] = 0;
							func_171(&Var0);
							unk_0xF44A1E8325E80FF1();
							func_97(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
							if (Global_1C017E.f_AD7[iVar9] == -1 && func_174())
							{
								if (Global_1C017E.f_A90[iVar9] >= 1)
								{
									func_170(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), Global_1C017E[iVar9 /*901*/][(Global_1C017E.f_A90[iVar9] - 1) /*75*/].f_3B + 1);
								}
								else
								{
									func_170(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), 1);
								}
								Global_1C017E.f_AD7[iVar9] = Global_1C017E.f_A90[iVar9];
								Global_1C017E.f_A90[iVar9]++;
							}
							(*uParam0)[1] = 1;
							return 0;
						}
						if (!func_174())
						{
							iVar4 = Var1.f_5;
						}
						if (iVar4 > 6)
						{
							iVar5 = (iVar4 - 6);
						}
						else
						{
							iVar5 = 1;
						}
						iVar6 = iVar5;
						iVar6 = iVar5;
						while (iVar6 <= (Var1.f_3 - 1))
						{
							unk_0xD69860729CF9D123(iVar6, &Var0);
							if (Global_1C017E.f_A90[iVar9] < 12 && Var0.f_60 > 1)
							{
								if (func_174() && iVar4 == iVar6)
								{
									if (!func_136(&(Global_1C017E[iVar9 /*901*/][0 /*75*/].f_20), &Var10))
									{
										func_170(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), Var0.f_60);
										Global_1C017E[1 /*901*/][Global_1C017E.f_A90[1] /*75*/].f_3B = iVar6 + 1;
										Global_1C017E.f_AD7[iVar9] = Global_1C017E.f_A90[iVar9];
										Global_1C017E.f_A90[iVar9]++;
									}
								}
								if (func_174() && (func_136(&Var0, &Var10) || func_136(&Var0, &(Global_1C0005.f_169))))
								{
								}
								else if (Global_1C017E.f_A90[1] < 12)
								{
									if (func_137(Var0) && !func_136(&Var0, &(Global_1C017E[iVar9 /*901*/][0 /*75*/].f_20)))
									{
										if (func_136(&Var0, &Var10))
										{
											if (Global_1C017E.f_AD7[1] < 0)
											{
												Global_1C017E.f_AD7[1] = Global_1C017E.f_A90[1];
											}
										}
										MemCopy(&(Global_1C017E[1 /*901*/][Global_1C017E.f_A90[1] /*75*/]), {Var0.f_D}, 16);
										Global_1C017E[1 /*901*/][Global_1C017E.f_A90[1] /*75*/].f_20 = { Var0 };
										Global_1C017E[1 /*901*/][Global_1C017E.f_A90[1] /*75*/].f_3B = iVar6 + 1;
										Global_1C017E[1 /*901*/][Global_1C017E.f_A90[1] /*75*/].f_4A = 1;
										if (func_169(uParam0->f_2C))
										{
											iVar7 = unk_0x7931D997D70CE9AF(iVar6, Global_1C017E.f_A95);
											if (iVar7 == 1)
											{
												Global_1C017E[1 /*901*/][Global_1C017E.f_A90[1] /*75*/].f_3A = 1;
											}
											else
											{
												Global_1C017E[1 /*901*/][Global_1C017E.f_A90[1] /*75*/].f_3A = 0;
											}
										}
										if (func_185(uParam0->f_2C))
										{
											MemCopy(&(Global_1C017E[1 /*901*/][Global_1C017E.f_A90[1] /*75*/].f_10), {Var0.f_13.f_1[1 /*16*/].f_8}, 16);
										}
										iVar2 = 0;
										while (iVar2 < Global_1C017E.f_A94)
										{
											if (unk_0xFA30DFD0084E92FE(Global_1C017E.f_AD1, Global_1C017E.f_A96[iVar2]))
											{
												Global_1C017E[1 /*901*/][Global_1C017E.f_A90[1] /*75*/].f_43[iVar2] = unk_0x7931D997D70CE9AF(iVar6, Global_1C017E.f_A96[iVar2]);
											}
											else
											{
												Global_1C017E[1 /*901*/][Global_1C017E.f_A90[1] /*75*/].f_3C[iVar2] = unk_0xBB9531A49F052904(iVar6, Global_1C017E.f_A96[iVar2]);
											}
											iVar2++;
										}
										Global_1C017E.f_A90[1]++;
									}
								}
							}
							func_171(&Var0);
							iVar6++;
						}
						unk_0xF44A1E8325E80FF1();
						func_97(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						(*uParam0)[1] = 1;
						if (Global_1C017E.f_AD7[iVar9] == -1 && func_174())
						{
							if (Global_1C017E.f_A90[iVar9] >= 1)
							{
								func_170(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), Global_1C017E[iVar9 /*901*/][(Global_1C017E.f_A90[iVar9] - 1) /*75*/].f_3B + 1);
							}
							else
							{
								func_170(uParam0, &(Global_1C017E[iVar9 /*901*/][Global_1C017E.f_A90[iVar9] /*75*/]), 1);
							}
							Global_1C017E.f_AD7[iVar9] = Global_1C017E.f_A90[iVar9];
							Global_1C017E.f_A90[iVar9]++;
						}
						return 0;
					}
					else
					{
						func_97(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						Global_1C017E.f_A90[1] = 0;
						(*uParam0)[1] = 1;
						unk_0xF0059F27F7BB6680(&(Global_1C017E.f_B10), 1);
						return 0;
					}
				}
			}
			else
			{
				func_97(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
				Global_1C017E.f_A90[1] = 0;
				(*uParam0)[1] = 1;
				return 0;
			}
			break;
		
		case 1:
			func_163(iVar9, Global_1C0005.f_176);
			(*uParam0)[1] = 2;
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_176(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7)//Position - 0xDD02
{
	switch (*uParam0)
	{
		case 0:
			if (!func_167() && !func_166())
			{
				func_165(*uParam2);
				if (STATS::LEADERBOARDS2_READ_FRIENDS_BY_ROW(uParam2, uParam3, uParam4, iParam5, iParam6, iParam7))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0x7C822119961C308B(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x96C63CF63AC5608D(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_177(var uParam0)//Position - 0xDDBE
{
	struct<13> Var0;
	struct<97> Var1;
	struct<6> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	bool bVar11;
	int iVar12;
	
	Var1.f_13.f_1 = 4;
	iVar6 = -1;
	iVar10 = 0;
	Var0 = { func_23(unk_0xB5CEFD608600A09F()) };
	switch ((*uParam0)[iVar10])
	{
		case 0:
			Global_1C017E.f_AD7[iVar10] = -1;
			Global_1C017E.f_A90[iVar10] = 0;
			Global_1C0005.f_176 = -1;
			Global_1C017D = 0;
			if (func_178(uParam0->f_2C))
			{
				if (!Global_1C017D)
				{
					Global_1C017D = 1;
				}
			}
			else if (Global_1C017D)
			{
				Global_1C017D = 0;
			}
			if (!Global_1C017D)
			{
			}
			if (func_173(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), 11, &Var0, func_174(), 0, 0, 0))
			{
				func_172(&Var2, &(uParam0->f_2C));
				if (uParam0->f_5 && unk_0xB303DCFC38D1F67C(&Var2))
				{
					if (Var2.f_3 > 0)
					{
						iVar8 = 0;
						iVar3 = 0;
						if (func_174())
						{
							iVar8 = 0;
							while (iVar8 < Var2.f_3)
							{
								unk_0xD69860729CF9D123(iVar8, &Var1);
								if (Global_1C0005.f_176 < 0)
								{
									if (func_136(&Var1, &Var0) || func_136(&Var1, &(Global_1C0005.f_169)))
									{
										Global_1C0005.f_176 = Var1.f_60;
									}
								}
								if (iVar6 < 0)
								{
									if (unk_0xFA30DFD0084E92FE(Global_1C0005.f_8E.f_2, 0))
									{
										if (Global_1C0005.f_D3.f_24[0] >= unk_0x7931D997D70CE9AF(iVar8, 0))
										{
											iVar6 = iVar8;
										}
									}
									else if (Global_1C0005.f_D3.f_3[0] >= unk_0xBB9531A49F052904(iVar8, 0))
									{
										iVar6 = iVar8;
									}
								}
								func_171(&Var1);
								iVar8++;
							}
							if (iVar6 < 0)
							{
								iVar6 = Var2.f_3;
							}
						}
						iVar8 = 0;
						unk_0xD69860729CF9D123(0, &Var1);
						if (Var1.f_60 <= 1)
						{
							if (Global_1C017E.f_A90[iVar10] < 12)
							{
								if (func_174() && iVar6 == 0)
								{
									func_170(uParam0, &(Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/]), Var1.f_60);
									Global_1C017E.f_AD7[iVar10] = 0;
									Global_1C017E.f_A90[iVar10]++;
								}
								if (func_174() && (func_136(&Var1, &Var0) || func_136(&Var1, &(Global_1C0005.f_169))))
								{
								}
								else
								{
									if (func_136(&Var1, &Var0))
									{
										iVar6 = 0;
										Global_1C017E.f_AD7[iVar10] = 0;
									}
									MemCopy(&(Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/]), {Var1.f_D}, 16);
									Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_20 = { Var1 };
									Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_3B = Var1.f_60;
									if (func_169(uParam0->f_2C))
									{
										iVar5 = unk_0x7931D997D70CE9AF(0, Global_1C017E.f_A95);
										if (iVar5 == 1)
										{
											Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_3A = 1;
										}
										else
										{
											Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_3A = 0;
										}
									}
									if (func_185(uParam0->f_2C))
									{
										MemCopy(&(Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_10), {Var1.f_13.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_4A = 1;
									iVar3 = 0;
									while (iVar3 < Global_1C017E.f_A94)
									{
										if (unk_0xFA30DFD0084E92FE(Global_1C017E.f_AD1, Global_1C017E.f_A96[iVar3]))
										{
											Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_43[iVar3] = unk_0x7931D997D70CE9AF(0, Global_1C017E.f_A96[iVar3]);
										}
										else
										{
											Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_3C[iVar3] = unk_0xBB9531A49F052904(0, Global_1C017E.f_A96[iVar3]);
										}
										iVar3++;
									}
									Global_1C017E.f_A90[iVar10]++;
								}
								bVar9 = true;
							}
						}
						if (!bVar9)
						{
							Global_1C017E.f_A90[iVar10]++;
						}
						if (!func_174())
						{
							iVar6 = Var2.f_5;
						}
						if (iVar6 > 6)
						{
							iVar7 = (iVar6 - 6);
						}
						else if (bVar9)
						{
							iVar7 = 1;
						}
						else
						{
							iVar7 = 0;
						}
						iVar8 = iVar7;
						func_171(&Var1);
						iVar8 = iVar7;
						while (iVar8 <= (Var2.f_3 - 1))
						{
							unk_0xD69860729CF9D123(iVar8, &Var1);
							if (Global_1C017E.f_A90[iVar10] < 12 && Var1.f_60 > 1)
							{
								if (func_174() && iVar6 == iVar8)
								{
									if (!func_136(&(Global_1C017E[iVar10 /*901*/][0 /*75*/].f_20), &Var1))
									{
										func_170(uParam0, &(Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/]), Var1.f_60);
										Global_1C017E.f_AD7[iVar10] = Global_1C017E.f_A90[iVar10];
										Global_1C017E.f_A90[iVar10]++;
									}
								}
								if (func_174() && (func_136(&Var1, &Var0) || func_136(&Var1, &(Global_1C0005.f_169))))
								{
								}
								else if (Global_1C017E.f_A90[iVar10] < 12)
								{
									if (func_137(Var1) && !func_136(&(Global_1C017E[iVar10 /*901*/][0 /*75*/].f_20), &Var1))
									{
										if (func_136(&Var1, &Var0))
										{
											if (Global_1C017E.f_AD7[iVar10] < 0)
											{
												Global_1C017E.f_AD7[iVar10] = Global_1C017E.f_A90[iVar10];
											}
										}
										MemCopy(&(Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/]), {Var1.f_D}, 16);
										Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_20 = { Var1 };
										Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_3B = Var1.f_60;
										Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_4A = 1;
										if (func_169(uParam0->f_2C))
										{
											iVar5 = unk_0x7931D997D70CE9AF(iVar8, Global_1C017E.f_A95);
											if (iVar5 == 1)
											{
												Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_3A = 1;
											}
											else
											{
												Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_3A = 0;
											}
										}
										if (func_185(uParam0->f_2C))
										{
											MemCopy(&(Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_10), {Var1.f_13.f_1[1 /*16*/].f_8}, 16);
										}
										iVar3 = 0;
										iVar3 = 0;
										while (iVar3 < Global_1C017E.f_A94)
										{
											if (unk_0xFA30DFD0084E92FE(Global_1C017E.f_AD1, Global_1C017E.f_A96[iVar3]))
											{
												Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_43[iVar3] = unk_0x7931D997D70CE9AF(iVar8, Global_1C017E.f_A96[iVar3]);
											}
											else
											{
												Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_3C[iVar3] = unk_0xBB9531A49F052904(iVar8, Global_1C017E.f_A96[iVar3]);
											}
											iVar3++;
										}
										Global_1C017E.f_A90[iVar10]++;
									}
								}
							}
							func_171(&Var1);
							iVar8++;
						}
						unk_0xF44A1E8325E80FF1();
						func_97(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						if (bVar9)
						{
							if (Global_1C017E.f_AD7[iVar10] == -1 && func_174())
							{
								if (Global_1C017E.f_A90[iVar10] >= 1)
								{
									func_170(uParam0, &(Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/]), Global_1C017E[iVar10 /*901*/][(Global_1C017E.f_A90[iVar10] - 1) /*75*/].f_3B + 1);
								}
								else
								{
									func_170(uParam0, &(Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/]), 1);
								}
								Global_1C017E.f_AD7[iVar10] = Global_1C017E.f_A90[iVar10];
								Global_1C017E.f_A90[iVar10]++;
							}
							(*uParam0)[iVar10] = 2;
						}
						else
						{
							(*uParam0)[iVar10] = 1;
						}
					}
					else
					{
						if (!bVar9)
						{
							Global_1C017E.f_A90[iVar10]++;
						}
						unk_0xF44A1E8325E80FF1();
						func_97(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						Global_1C017E.f_AD7[iVar10] = -1;
						(*uParam0)[iVar10] = 1;
					}
				}
				else
				{
					func_97(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
					Global_1C017E.f_AD7[iVar10] = -1;
					(*uParam0)[iVar10] = 1;
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_B10), iVar10);
				}
			}
			break;
		
		case 1:
			if (Global_1C017E.f_AD7[iVar10] == -1)
			{
				iVar12 = 11;
			}
			else
			{
				iVar12 = 1;
			}
			if (func_164(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), 1, iVar12))
			{
				func_172(&Var2, &(uParam0->f_2C));
				if (uParam0->f_5 && unk_0xB303DCFC38D1F67C(&Var2))
				{
					if (Var2.f_3 > 0)
					{
						iVar3 = 0;
						while (iVar3 < Var2.f_3)
						{
							unk_0xD69860729CF9D123(iVar3, &Var1);
							if (func_174() && (func_136(&Var1, &Var0) || func_136(&Var1, &(Global_1C0005.f_169))))
							{
							}
							else
							{
								bVar11 = false;
								if (Global_1C017E[iVar10 /*901*/][0 /*75*/].f_3B > 1 || Global_1C017E[iVar10 /*901*/][0 /*75*/].f_3B <= 0)
								{
									bVar11 = true;
								}
								if (Global_1C017E.f_A90[iVar10] < 12 || bVar11)
								{
									if (iVar3 == 0 || bVar11)
									{
										MemCopy(&(Global_1C017E[iVar10 /*901*/][0 /*75*/]), {Var1.f_D}, 16);
										Global_1C017E[iVar10 /*901*/][0 /*75*/].f_20 = { Var1 };
										Global_1C017E[iVar10 /*901*/][0 /*75*/].f_3B = Var1.f_60;
										if (func_169(uParam0->f_2C))
										{
											iVar5 = unk_0x7931D997D70CE9AF(0, Global_1C017E.f_A95);
											if (iVar5 == 1)
											{
												Global_1C017E[iVar10 /*901*/][0 /*75*/].f_3A = 1;
											}
											else
											{
												Global_1C017E[iVar10 /*901*/][0 /*75*/].f_3A = 0;
											}
										}
										if (func_185(uParam0->f_2C))
										{
											MemCopy(&(Global_1C017E[iVar10 /*901*/][0 /*75*/].f_10), {Var1.f_13.f_1[1 /*16*/].f_8}, 16);
										}
										Global_1C017E[iVar10 /*901*/][0 /*75*/].f_4A = 1;
										iVar4 = 0;
										iVar4 = 0;
										while (iVar4 < Global_1C017E.f_A94)
										{
											if (unk_0xFA30DFD0084E92FE(Global_1C017E.f_AD1, Global_1C017E.f_A96[iVar4]))
											{
												Global_1C017E[iVar10 /*901*/][iVar3 /*75*/].f_43[iVar4] = unk_0x7931D997D70CE9AF(iVar3, Global_1C017E.f_A96[iVar4]);
											}
											else
											{
												Global_1C017E[iVar10 /*901*/][iVar3 /*75*/].f_3C[iVar4] = unk_0xBB9531A49F052904(iVar3, Global_1C017E.f_A96[iVar4]);
											}
											iVar4++;
										}
										if (Global_1C017E.f_A90[iVar10] == 0)
										{
											if (bVar11)
											{
											}
											else
											{
												Global_1C017E.f_A90[iVar10]++;
											}
										}
										else if (Global_1C017E.f_A90[iVar10] == 1 && Global_1C017E.f_AD7[iVar10] == -1)
										{
											Global_1C017E.f_A90[iVar10]++;
										}
									}
									else if (Global_1C017E.f_A90[iVar10] < 12)
									{
										MemCopy(&(Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/]), {Var1.f_D}, 16);
										Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_20 = { Var1 };
										if (func_169(uParam0->f_2C))
										{
											iVar5 = unk_0x7931D997D70CE9AF(iVar3, Global_1C017E.f_A95);
											if (iVar5 == 1)
											{
												Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_3A = 1;
											}
											else
											{
												Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_3A = 0;
											}
										}
										if (func_185(uParam0->f_2C))
										{
											MemCopy(&(Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_10), {Var1.f_13.f_1[1 /*16*/].f_8}, 16);
										}
										Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_3B = Var1.f_60;
										Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_4A = 1;
										iVar4 = 0;
										iVar4 = 0;
										while (iVar4 < Global_1C017E.f_A94)
										{
											if (unk_0xFA30DFD0084E92FE(Global_1C017E.f_AD1, Global_1C017E.f_A96[iVar4]))
											{
												Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_43[iVar4] = unk_0x7931D997D70CE9AF(iVar3, Global_1C017E.f_A96[iVar4]);
											}
											else
											{
												Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/].f_3C[iVar4] = unk_0xBB9531A49F052904(iVar3, Global_1C017E.f_A96[iVar4]);
											}
											iVar4++;
										}
										if (iVar3 != 0)
										{
											Global_1C017E.f_A90[iVar10]++;
										}
									}
								}
							}
							func_171(&Var1);
							iVar3++;
						}
					}
					unk_0xF44A1E8325E80FF1();
					func_97(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
					(*uParam0)[iVar10] = 2;
				}
				else
				{
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_B10), iVar10);
					func_97(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
					Global_1C017E.f_A90[iVar10] = 0;
					(*uParam0)[iVar10] = 2;
					Global_1C017E.f_A90[1] = 0;
					(*uParam0)[1] = 1;
					Global_1C017E.f_A90[2] = 0;
					(*uParam0)[2] = 3;
				}
			}
			if (Global_1C017E.f_AD7[iVar10] == -1 && func_174())
			{
				if (Global_1C017E.f_A90[iVar10] >= 1)
				{
					func_170(uParam0, &(Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/]), Global_1C017E[iVar10 /*901*/][(Global_1C017E.f_A90[iVar10] - 1) /*75*/].f_3B + 1);
				}
				else
				{
					func_170(uParam0, &(Global_1C017E[iVar10 /*901*/][Global_1C017E.f_A90[iVar10] /*75*/]), 1);
				}
				Global_1C017E.f_AD7[iVar10] = Global_1C017E.f_A90[iVar10];
				Global_1C017E.f_A90[iVar10]++;
			}
			break;
		
		case 2:
			func_163(iVar10, Global_1C0005.f_176);
			(*uParam0)[iVar10] = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_178(struct<4> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65)//Position - 0xEBF9
{
	int iVar0;
	
	if (Global_1C017C)
	{
		if (Global_1C0005.f_5 != 0)
		{
			if (Global_1C0005.f_5 == Param0)
			{
				if (Global_1C0005.f_5.f_2 == Param0.f_3)
				{
					iVar0 = 0;
					while (iVar0 < Param0.f_3)
					{
						if (!unk_0x3362CDE8460ED38B(&(Global_1C0005.f_5.f_2.f_1[iVar0 /*16*/]), &(Param0.f_3.f_1[iVar0 /*16*/])) || !unk_0x3362CDE8460ED38B(&(Global_1C0005.f_5.f_2.f_1[iVar0 /*16*/].f_8), &(Param0.f_3.f_1[iVar0 /*16*/].f_8)))
						{
							return 0;
						}
						iVar0++;
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_179(var uParam0)//Position - 0xEC91
{
	int iVar0;
	
	if (unk_0xA8C9945AE39E6D48(Global_1C017E.f_B0A))
	{
		iVar0 = unk_0x6C6916B5786D9360(Global_1C017E.f_B0A);
		if (iVar0 < 300000)
		{
			unk_0xF0059F27F7BB6680(&(uParam0->f_2A), 5);
		}
		else
		{
			unk_0x7CB6FD92BE491AD9(&(uParam0->f_2A), 5);
			func_149(Global_1C017E.f_B0A, -1);
		}
	}
}

bool func_180(var uParam0)//Position - 0xECE1
{
	return uParam0->f_1;
}

void func_181(int iParam0)//Position - 0xECED
{
	if (unk_0xA7F138B5B1AB2CF6(iParam0))
	{
		unk_0x4B6031094354FED6(iParam0, 255, 255, 255, 0, 0);
	}
}

void func_182(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0xED0D
{
	char* sVar0;
	struct<2> Var1;
	struct<16> Var2;
	bool bVar3;
	struct<13> Var4;
	int iVar5;
	struct<13> Var6;
	int iVar7;
	
	sVar0 = "";
	if (unk_0xFA30DFD0084E92FE(iParam2, 4))
	{
		sVar0 = "SCLB_GLOBAL";
	}
	else if (unk_0xFA30DFD0084E92FE(iParam2, 5))
	{
		*iParam1++;
		sVar0 = "SCLB_FRIENDS";
	}
	else if (unk_0xFA30DFD0084E92FE(iParam2, 6))
	{
		*iParam1++;
		if (unk_0x57D316754A262B34() && unk_0xB9ACC1154C623363())
		{
			if (unk_0xF7E138CFA19B55E7() && !unk_0x5553DFDA03631860(0))
			{
				sVar0 = "SCLB_CREW";
			}
			else
			{
				Var4 = { func_23(unk_0xB5CEFD608600A09F()) };
				if (unk_0xD7F4457CECF10121(&Var4))
				{
					unk_0x24723877416AAAFC(&Var1, 35, &Var4);
					if (!unk_0xF1734B55490E9045(&(Var1.f_1)))
					{
						sVar0 = "STRING";
						Var2 = { Var1.f_1 };
						bVar3 = true;
					}
					else
					{
						sVar0 = "SCLB_CREW";
					}
				}
				else
				{
					sVar0 = "SCLB_CREW";
				}
			}
		}
		else
		{
			sVar0 = "SCLB_CREW";
		}
	}
	unk_0x29CD142125FE177B(iParam0, "SET_SLOT");
	unk_0x1E1FB49121565EB6(*iParam1);
	unk_0x1E1FB49121565EB6(iParam2);
	if (bVar3)
	{
		unk_0x57016C44F10111F0(sVar0);
		unk_0xA5CB8AC295293426(&Var2);
		unk_0x64989E60CF560CA1();
	}
	else
	{
		unk_0x57016C44F10111F0(sVar0);
		unk_0x64989E60CF560CA1();
	}
	unk_0xF9FBC2F3F73D94C9();
	*iParam1++;
	if (bParam4)
	{
		iVar5 = 0;
		unk_0xF0059F27F7BB6680(&iVar5, 7);
		unk_0x29CD142125FE177B(iParam0, "SET_SLOT");
		unk_0x1E1FB49121565EB6(*iParam1);
		unk_0x1E1FB49121565EB6(iVar5);
		if (!unk_0x57D316754A262B34())
		{
			sVar0 = "SCLB_NOT_ONL";
		}
		else if (!unk_0x6EFCE916927099A8())
		{
			sVar0 = "SCLB_NO_ROS";
		}
		else if (Global_1C017E.f_B10 != 0)
		{
			sVar0 = "SCLB_READ_FAIL";
		}
		else
		{
			sVar0 = "HUD_PERM";
		}
		unk_0x57016C44F10111F0(sVar0);
		unk_0xCEC028A78CF8885E();
		unk_0xF9FBC2F3F73D94C9();
		*iParam1++;
	}
	else if (bParam3)
	{
		if (unk_0xFA30DFD0084E92FE(iParam2, 4))
		{
			sVar0 = "SCLB_NO_GLOBAL";
		}
		else if (unk_0xFA30DFD0084E92FE(iParam2, 5))
		{
			if (unk_0x0B61CFCE8597AF35() > 0)
			{
				sVar0 = "SCLB_NO_FRNDS";
			}
			else
			{
				sVar0 = "SCLB_NO_FRNDSb";
			}
		}
		else if (unk_0xFA30DFD0084E92FE(iParam2, 6))
		{
			if (unk_0xBAF5BEF76386574D())
			{
				if (unk_0x8F0C986A6B5D1E16())
				{
					if (unk_0x57D316754A262B34() && unk_0xB9ACC1154C623363())
					{
						if (unk_0xF7E138CFA19B55E7() && !unk_0x5553DFDA03631860(0))
						{
							sVar0 = "SCLB_NO_CREWc";
						}
						else
						{
							Var6 = { func_23(unk_0xB5CEFD608600A09F()) };
							if (unk_0xD7F4457CECF10121(&Var6))
							{
								unk_0x24723877416AAAFC(&Var1, 35, &Var6);
								if (!unk_0xF1734B55490E9045(&(Var1.f_1)))
								{
									sVar0 = "SCLB_NO_CREWb";
									Var2 = { Var1.f_1 };
									bVar3 = true;
								}
								else
								{
									sVar0 = "SCLB_NO_CREWc";
								}
							}
							else
							{
								sVar0 = "SCLB_NO_CREWa";
							}
						}
					}
					else
					{
						sVar0 = "SCLB_NO_CREWa";
					}
				}
				else
				{
					sVar0 = "SCLB_NO_CREWe";
				}
			}
			else
			{
				sVar0 = "SCLB_NO_CREWd";
			}
		}
		iVar7 = 0;
		unk_0xF0059F27F7BB6680(&iVar7, 7);
		unk_0x29CD142125FE177B(iParam0, "SET_SLOT");
		unk_0x1E1FB49121565EB6(*iParam1);
		unk_0x1E1FB49121565EB6(iVar7);
		if (bVar3)
		{
			unk_0x57016C44F10111F0(sVar0);
			unk_0xA5CB8AC295293426(&Var2);
			unk_0xCEC028A78CF8885E();
		}
		else
		{
			unk_0x57016C44F10111F0(sVar0);
			unk_0xCEC028A78CF8885E();
		}
		unk_0xF9FBC2F3F73D94C9();
		*iParam1++;
	}
}

void func_183(int iParam0, char* sParam1, var uParam2, int iParam3)//Position - 0xEFE3
{
	int iVar0;
	
	unk_0x29CD142125FE177B(iParam0, "SET_TITLE");
	unk_0x57016C44F10111F0(sParam1);
	unk_0x64989E60CF560CA1();
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		unk_0x57016C44F10111F0(uParam2[iVar0 /*6*/]);
		unk_0x64989E60CF560CA1();
		iVar0++;
	}
	unk_0xF9FBC2F3F73D94C9();
}

void func_184(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)//Position - 0xF025
{
	unk_0x29CD142125FE177B(iParam0, "SET_MULTIPLAYER_TITLE");
	unk_0x57016C44F10111F0(sParam1);
	if (!unk_0xF1734B55490E9045(sParam2))
	{
		unk_0xC9C304D0AABE1335(sParam2);
	}
	if (iParam5 == -1)
	{
		if (bParam4)
		{
			if (!unk_0xF1734B55490E9045(sParam3))
			{
				unk_0xA5CB8AC295293426(sParam3);
			}
		}
		else if (!unk_0xF1734B55490E9045(sParam3))
		{
			unk_0xC9C304D0AABE1335(sParam3);
		}
	}
	else
	{
		if (bParam4)
		{
			if (!unk_0xF1734B55490E9045(sParam3))
			{
				unk_0xA5CB8AC295293426(sParam3);
			}
		}
		else if (!unk_0xF1734B55490E9045(sParam3))
		{
			unk_0xC9C304D0AABE1335(sParam3);
		}
		unk_0xAA5C5BF0489E5553(iParam5);
	}
	unk_0x64989E60CF560CA1();
	unk_0xF9FBC2F3F73D94C9();
}

int func_185(int iParam0)//Position - 0xF0B5
{
	if (iParam0 == 825 || iParam0 == 828)
	{
		return 1;
	}
	return 0;
}

void func_186(int iParam0, int iParam1)//Position - 0xF0D7
{
	unk_0x29CD142125FE177B(iParam0, "SET_DISPLAY_TYPE");
	unk_0x1E1FB49121565EB6(iParam1);
	unk_0xF9FBC2F3F73D94C9();
}

int func_187()//Position - 0xF0F4
{
	return unk_0x9934FEFB3B8C6DB8("SC_LEADERBOARD");
}

bool func_188()//Position - 0xF104
{
	return func_189(unk_0xB5CEFD608600A09F());
}

int func_189(int iParam0)//Position - 0xF114
{
	switch (func_190(iParam0))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 6:
		case 5:
		case 7:
		case 39:
		case 34:
		case 37:
		case 40:
			return 0;
		
		default:
	}
	return 1;
}

int func_190(int iParam0)//Position - 0xF174
{
	return Global_18402B[iParam0 /*770*/].f_C4;
}

void func_191(int iParam0)//Position - 0xF187
{
	Global_14136C = iParam0;
}

void func_192(int iParam0)//Position - 0xF195
{
	Global_14D262.f_437 = iParam0;
}

void func_193(bool bParam0)//Position - 0xF1A6
{
	if (bParam0)
	{
		func_195();
	}
	func_194(4, -1);
	func_194(6, -1);
	func_194(7, -1);
	func_194(3, -1);
	func_194(1, -1);
	func_194(2, -1);
	func_194(11, -1);
	func_194(13, -1);
	func_194(14, -1);
	func_194(16, -1);
}

void func_194(int iParam0, int iParam1)//Position - 0xF1F7
{
	unk_0xF0059F27F7BB6680(&(Global_14CC81.f_417), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_14CC81.f_AA[iParam1] = 1;
			}
			break;
	}
}

void func_195()//Position - 0xF22D
{
	Global_267214.f_11A6 = 0;
}

void func_196(var uParam0, bool bParam1, bool bParam2)//Position - 0xF23D
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

int func_197(int iParam0, bool bParam1)//Position - 0xF27A
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 2;
	if (Global_1C171A.f_2 + 5 < unk_0xC87A57742F7D3C06() && Global_1C171A.f_2 > 0)
	{
		func_91(&Global_1C171A);
		func_91(&(Global_1C171A.f_31));
		*iParam0 = 0;
		Global_1C171A.f_2 = 0;
		func_205(0);
	}
	Global_1C171A.f_2 = unk_0xC87A57742F7D3C06();
	iVar1 = -1;
	if (unk_0xF7E138CFA19B55E7())
	{
		if (unk_0xCC35D66346F68105() == 0)
		{
			iVar1 = unk_0x2C2198F945E56AFE();
		}
	}
	if ((unk_0xF7E138CFA19B55E7() && (((iVar1 == 4 || iVar1 == 2) || iVar1 == 1) || iVar1 == 5)) || (!func_203() && unk_0x57D316754A262B34()))
	{
		if (unk_0x87080EF061A795E2())
		{
			func_200(&(Global_1C171A.f_3), func_202(&(Global_1C171A.f_3)));
			if (!unk_0xFA30DFD0084E92FE(*iParam0, 4))
			{
				unk_0xF0059F27F7BB6680(iParam0, 4);
				StringCopy(&(Global_1C171A.f_3.f_1), "", 64);
				func_198(&(Global_1C171A.f_3), 0);
			}
		}
		else
		{
			if (iVar1 == 4)
			{
				UI::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "HUD_PROFILECHNG", iVar0, 0, 0, -1, 0, 0, 1, 0);
			}
			else if (iVar1 == 2)
			{
				UI::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "HUD_GAMEUPD_G", iVar0, 0, 0, -1, 0, 0, 1, 0);
			}
			else if (iVar1 == 1)
			{
				UI::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "HUD_SYSTUPD_G", iVar0, 0, 0, -1, 0, 0, 1, 0);
			}
			else if (iVar1 == 5)
			{
				UI::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1, 0);
			}
			else if (!func_203())
			{
				UI::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "SCLB_NO_ROS", iVar0, 0, 0, -1, 0, 0, 1, 0);
			}
			if (!unk_0xFA30DFD0084E92FE(*iParam0, 0))
			{
				if (!unk_0x8FCEEB789599BD9B(2, 201))
				{
					unk_0xF0059F27F7BB6680(iParam0, 0);
				}
			}
			else if (unk_0x093484B35A948BFC(2, 201))
			{
				func_91(&(Global_1C171A.f_31));
				func_91(&Global_1C171A);
				*iParam0 = 0;
				Global_1C171A.f_2 = 0;
				func_205(0);
				return 1;
			}
		}
	}
	else
	{
		func_200(&(Global_1C171A.f_3), func_202(&(Global_1C171A.f_3)));
		if ((func_180(&(Global_1C171A.f_31)) && !func_143(&(Global_1C171A.f_31), 2000, 1)) && !unk_0x57D316754A262B34())
		{
			unk_0xF0059F27F7BB6680(iParam0, 3);
			StringCopy(&(Global_1C171A.f_3.f_1), "", 64);
			func_198(&(Global_1C171A.f_3), 0);
		}
		else if (!unk_0xFA30DFD0084E92FE(*iParam0, 3))
		{
			if (!unk_0xFA30DFD0084E92FE(*iParam0, 1))
			{
				unk_0xDF332625237EA533(0);
				unk_0xF0059F27F7BB6680(iParam0, 1);
				StringCopy(&(Global_1C171A.f_3.f_1), "", 64);
				func_198(&(Global_1C171A.f_3), 0);
			}
		}
		if (func_180(&Global_1C171A))
		{
			if (!func_143(&Global_1C171A, 4000, 1))
			{
				bVar2 = true;
			}
		}
		if (!bVar2)
		{
			if (bParam1)
			{
				if (!unk_0x57D316754A262B34())
				{
					if (unk_0x2F74010DB378DFFC())
					{
						UI::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "STORE_NOT_ONL", iVar0, 0, 0, -1, 0, 0, 1, 0);
					}
					else
					{
						UI::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1, 0);
					}
					if (!unk_0x14973A77EAB7E05A())
					{
						if (!unk_0xFA30DFD0084E92FE(*iParam0, 0))
						{
							if (!unk_0x8FCEEB789599BD9B(2, 201))
							{
								unk_0xF0059F27F7BB6680(iParam0, 0);
							}
						}
						else if (unk_0x093484B35A948BFC(2, 201))
						{
							func_91(&Global_1C171A);
							*iParam0 = 0;
							Global_1C171A.f_2 = 0;
							func_205(0);
							return 1;
						}
					}
				}
				else
				{
					func_91(&Global_1C171A);
					*iParam0 = 0;
					Global_1C171A.f_2 = 0;
					func_205(0);
					return 1;
				}
			}
			else if (unk_0xFA30DFD0084E92FE(*iParam0, 3))
			{
				if (unk_0x2F74010DB378DFFC())
				{
					UI::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "SCLB_SIGN_OUT", iVar0, 0, 0, -1, 0, 0, 1, 0);
				}
				else
				{
					UI::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1, 0);
				}
				if (!unk_0xFA30DFD0084E92FE(*iParam0, 0))
				{
					if (!unk_0x8FCEEB789599BD9B(2, 201))
					{
						unk_0xF0059F27F7BB6680(iParam0, 0);
					}
				}
				else if (unk_0x093484B35A948BFC(2, 201))
				{
					func_91(&(Global_1C171A.f_31));
					func_91(&Global_1C171A);
					*iParam0 = 0;
					Global_1C171A.f_2 = 0;
					func_205(0);
					return 1;
				}
			}
			else
			{
				if (unk_0x2F74010DB378DFFC())
				{
					UI::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "SCLB_NOT_ONL", iVar0, 0, 0, -1, 0, 0, 1, 0);
				}
				else
				{
					UI::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1, 0);
				}
				if (!unk_0x14973A77EAB7E05A())
				{
					if (!unk_0xFA30DFD0084E92FE(*iParam0, 0))
					{
						if (!unk_0x8FCEEB789599BD9B(2, 201))
						{
							unk_0xF0059F27F7BB6680(iParam0, 0);
						}
					}
					else if (unk_0x093484B35A948BFC(2, 201))
					{
						func_91(&(Global_1C171A.f_31));
						func_91(&Global_1C171A);
						*iParam0 = 0;
						Global_1C171A.f_2 = 0;
						func_205(0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_198(var uParam0, bool bParam1)//Position - 0xF6F1
{
	func_199(uParam0);
	if (bParam1)
	{
		func_205(0);
	}
	uParam0->f_23 = 1;
}

void func_199(var uParam0)//Position - 0xF70E
{
	struct<46> Var0;
	
	Var0.f_29 = 1;
	*uParam0 = { Var0 };
}

void func_200(var uParam0, int iParam1)//Position - 0xF729
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_201(uParam0);
	}
	if (*uParam0 == 0)
	{
		if (uParam0->f_24)
		{
			unk_0xECBC4A7C88FEF9C3(&(uParam0->f_1));
			unk_0xAA5C5BF0489E5553(uParam0->f_21);
			unk_0xAA5C5BF0489E5553(uParam0->f_22);
			unk_0x465F4F702894A06C(uParam0->f_29);
		}
		else if (uParam0->f_25)
		{
			unk_0xECBC4A7C88FEF9C3(&(uParam0->f_1));
			unk_0xAA5C5BF0489E5553(uParam0->f_21);
			unk_0x465F4F702894A06C(uParam0->f_29);
		}
		else if (uParam0->f_27)
		{
			unk_0xECBC4A7C88FEF9C3(&(uParam0->f_1));
			unk_0x607C19B90D297FE2(&(uParam0->f_11));
			unk_0xAA5C5BF0489E5553(uParam0->f_21);
			unk_0xAA5C5BF0489E5553(uParam0->f_22);
			unk_0x465F4F702894A06C(uParam0->f_29);
		}
		else if (uParam0->f_26)
		{
			unk_0xECBC4A7C88FEF9C3(&(uParam0->f_1));
			unk_0x607C19B90D297FE2(&(uParam0->f_11));
			unk_0x465F4F702894A06C(uParam0->f_29);
		}
		else if (uParam0->f_28)
		{
			unk_0xECBC4A7C88FEF9C3(&(uParam0->f_1));
			unk_0x4C36886AAFD04CF8(uParam0->f_21, 70);
			unk_0x465F4F702894A06C(uParam0->f_29);
		}
		else
		{
			unk_0xECBC4A7C88FEF9C3(&(uParam0->f_1));
			unk_0x465F4F702894A06C(uParam0->f_29);
		}
		*uParam0 = 1;
	}
	if (*uParam0 == 1)
	{
	}
}

void func_201(var uParam0)//Position - 0xF827
{
	uParam0->f_23 = 0;
}

int func_202(var uParam0)//Position - 0xF834
{
	return uParam0->f_23;
}

int func_203()//Position - 0xF840
{
	if (func_204())
	{
		return 0;
	}
	if (unk_0x670C0C6C780A3F84() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_204()//Position - 0xF860
{
	return Global_258255;
}

void func_205(bool bParam0)//Position - 0xF86C
{
	unk_0x21B00B24BEAA7264();
	if (bParam0)
	{
		unk_0xDC1A2868428162E5();
	}
}

int func_206(var uParam0, bool bParam1, bool bParam2)//Position - 0xF881
{
	if (!iLocal_166)
	{
		func_218(&(uParam0->f_48), bParam1);
		iLocal_166 = 1;
		func_322(&(uParam0->f_29A), 9, 0);
	}
	else
	{
		if (Global_1C0005.f_1 && !Global_1C0005.f_2)
		{
			func_215(190, bParam1);
			Global_1C0005.f_2 = 1;
			*bParam2 = 1;
		}
		if (func_207(&(uParam0->f_48)))
		{
			Global_1C017C = 1;
			return 1;
		}
	}
	return 0;
}

int func_207(var uParam0)//Position - 0xF8EA
{
	struct<98> Var0;
	struct<4> Var1;
	struct<37> Var2;
	struct<13> Var3;
	int iVar4;
	
	Var0.f_13.f_1 = 4;
	Var2.f_3 = 32;
	Var2.f_24 = 32;
	if (func_185(uParam0->f_2C))
	{
		Var3 = { Global_1C0005.f_169 };
	}
	else
	{
		Var3 = { func_23(unk_0xB5CEFD608600A09F()) };
	}
	switch (Global_1C0005)
	{
		case 0:
			if (func_214(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), &Var3))
			{
				func_172(&Var1, &(uParam0->f_2C));
				Global_1C0005.f_8E = uParam0->f_2C;
				Global_1C0005.f_8E.f_1 = unk_0x8731EA21A98ED1C3(uParam0->f_2C, 0);
				iVar4 = 0;
				while (iVar4 < Global_1C0005.f_8E.f_1)
				{
					if (!func_213(uParam0->f_2C, iVar4))
					{
						if (func_212(uParam0->f_2C, 4, iVar4))
						{
							unk_0xF0059F27F7BB6680(&(Global_1C0005.f_8E.f_2), iVar4);
						}
						else
						{
							unk_0x7CB6FD92BE491AD9(&(Global_1C0005.f_8E.f_2), iVar4);
						}
					}
					iVar4++;
				}
				if (uParam0->f_5 && unk_0xB303DCFC38D1F67C(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						unk_0xD69860729CF9D123(0, &Var0);
						if (Var0.f_61 != Global_1C0005.f_8E.f_1)
						{
						}
						if (!func_137(Var0))
						{
							Global_1C0005.f_4 = 1;
						}
						else
						{
							iVar4 = 0;
							while (iVar4 < Global_1C0005.f_8E.f_1)
							{
								if (!func_213(uParam0->f_2C, iVar4))
								{
									if (func_212(uParam0->f_2C, 4, iVar4))
									{
										Global_1C0005.f_49.f_24[iVar4] = unk_0x7931D997D70CE9AF(0, iVar4);
										if (Global_1C0005.f_49.f_24[iVar4] == -1)
										{
											if (iVar4 > Var0.f_61)
											{
												Global_1C0005.f_49.f_24[iVar4] = 0;
											}
										}
									}
									else
									{
										Global_1C0005.f_49.f_3[iVar4] = unk_0xBB9531A49F052904(0, iVar4);
										if (Global_1C0005.f_49.f_3[iVar4] == -1f)
										{
											if (iVar4 > Var0.f_61)
											{
												Global_1C0005.f_49.f_3[iVar4] = 0f;
											}
										}
									}
								}
								iVar4++;
							}
						}
					}
					else
					{
						Global_1C0005.f_4 = 1;
					}
					unk_0xF44A1E8325E80FF1();
				}
				else
				{
					Global_1C0005.f_4 = 1;
				}
				Global_1C0005 = 1;
				func_97(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
			}
			break;
		
		case 1:
			Global_1C0005.f_1 = 1;
			if (Global_1C0005.f_2)
			{
				func_211();
				if (Global_1C0005.f_4)
				{
					if (func_210(uParam0->f_2C))
					{
						Global_1C0005 = 3;
					}
					else
					{
						Global_1C0005 = 2;
					}
				}
				else
				{
					Global_1C0005 = 2;
				}
			}
			break;
		
		case 2:
			unk_0x4742E8F1B403C38D(&(Global_1C0005.f_49), &(Global_1C0005.f_8E), &(Global_1C0005.f_D3));
			Global_1C0005 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 3:
			Global_1C0005.f_D3 = { Global_1C0005.f_8E };
			Global_1C0005 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 4:
			if (unk_0x7AF0088ABFA713B6() && func_209())
			{
				if (func_208())
				{
					Global_1C0005 = 99;
				}
				else
				{
					Global_1C0005 = 999;
					return 1;
				}
			}
			else
			{
				Global_1C0005 = 999;
				return 1;
			}
			break;
		
		case 99:
			if (func_210(uParam0->f_2C))
			{
				Global_1C0005.f_118 = { Global_1C0005.f_8E };
			}
			else
			{
				Var2 = Global_1C0005.f_8E;
				Var2.f_1 = Global_1C0005.f_8E.f_1;
				Var2.f_2 = Global_1C0005.f_8E.f_2;
				unk_0x4742E8F1B403C38D(&Var2, &(Global_1C0005.f_8E), &(Global_1C0005.f_118));
			}
			Global_1C0005 = 100;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 100:
			if (func_173(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), 1, &Var3, 1, 1, Global_1C0005.f_118.f_24[0], Global_1C0005.f_118.f_3[0]))
			{
				func_172(&Var1, &(uParam0->f_2C));
				if (uParam0->f_5 && unk_0xB303DCFC38D1F67C(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						unk_0xD69860729CF9D123(0, &Var0);
						if (unk_0x3362CDE8460ED38B(&(Var0.f_D), ""))
						{
							Global_EF2BB.f_1 = -1;
						}
						else
						{
							Global_EF2BB.f_1 = Var0.f_60;
						}
					}
					else
					{
						Global_EF2BB.f_1 = -1;
					}
					unk_0xF44A1E8325E80FF1();
				}
				else
				{
					Global_EF2BB.f_1 = -1;
				}
				Global_1C0005 = 999;
				func_97(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
			}
			break;
		
		case 999:
			return 1;
			break;
	}
	return 0;
}

bool func_208()//Position - 0xFD0E
{
	return unk_0xFA30DFD0084E92FE(Global_ED138.f_8, 1);
}

var func_209()//Position - 0xFD21
{
	return Global_2579BD.f_3;
}

int func_210(int iParam0)//Position - 0xFD2F
{
	switch (iParam0)
	{
		case 817:
		case 850:
		case 824:
		case 827:
		case 815:
		case 826:
		case 777:
		case 825:
		case 828:
		case 849:
		case 928:
		case 795:
		case 202:
		case 811:
		case 193:
		case 975:
		case 976:
		case 970:
		case 973:
		case 968:
		case 969:
		case 966:
		case 974:
		case 971:
		case 967:
		case 965:
		case 972:
			return 1;
			break;
	}
	if (iParam0 >= 998 && iParam0 <= 1197)
	{
		return 1;
	}
	return 0;
}

void func_211()//Position - 0xFE00
{
	Global_1C0005.f_49 = Global_1C0005.f_8E;
	Global_1C0005.f_49.f_1 = Global_1C0005.f_8E.f_1;
	Global_1C0005.f_49.f_2 = Global_1C0005.f_8E.f_2;
	Global_1C0005.f_D3 = Global_1C0005.f_8E;
	Global_1C0005.f_D3.f_1 = Global_1C0005.f_8E.f_1;
	Global_1C0005.f_D3.f_2 = Global_1C0005.f_8E.f_2;
}

int func_212(int iParam0, int iParam1, int iParam2)//Position - 0xFE60
{
	int iVar0;
	
	if (iParam0 == 190)
	{
		if (iParam2 == 0)
		{
			return 0;
		}
	}
	if (iParam0 == 203)
	{
		if (iParam2 == 3 || iParam2 == 6)
		{
			return 0;
		}
	}
	if (iParam0 == 912)
	{
		if (iParam2 == 0 || iParam2 == 3)
		{
			return 0;
		}
	}
	if ((iParam0 == 762 || iParam0 == 822) || iParam0 == 823)
	{
		if (iParam2 == 0 || iParam2 == 3)
		{
			return 0;
		}
	}
	if (iParam0 == 791)
	{
		if (iParam2 == 4)
		{
			return 0;
		}
	}
	if (iParam0 == 780)
	{
		if (iParam2 == 3)
		{
			return 0;
		}
	}
	if (iParam0 == 777)
	{
		if (iParam2 == 3 || iParam2 == 7)
		{
			return 0;
		}
	}
	if (iParam0 == 1200)
	{
		if (iParam2 == 4)
		{
			return 0;
		}
	}
	iVar0 = unk_0xD9423E7C77E9DDD4(iParam0, iParam1, iParam2);
	switch (iVar0)
	{
		case 1:
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_213(int iParam0, int iParam1)//Position - 0xFF62
{
	if (unk_0x9B1E40957BEDC83C(iParam0, 4, iParam1) == 156)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 912:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 780:
			if (iParam1 == 4)
			{
				return 1;
			}
			break;
		
		case 1200:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_214(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0xFFBD
{
	switch (*uParam0)
	{
		case 0:
			if (!func_167() && !func_166())
			{
				func_165(*uParam2);
				if (unk_0x460E2F645251EE10(uParam2, uParam3))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0x7C822119961C308B(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x96C63CF63AC5608D(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_215(int iParam0, bool bParam1)//Position - 0x10072
{
	struct<6> Var0[1];
	struct<8> Var1[1];
	
	if (!unk_0x97EF4023B86C354F())
	{
		return;
	}
	StringCopy(&(Var1[0 /*8*/]), "GameType", 32);
	if (bParam1)
	{
		StringCopy(&(Var0[0 /*6*/]), "MP", 24);
	}
	else
	{
		StringCopy(&(Var0[0 /*6*/]), "SP", 24);
	}
	if (func_217(iParam0, &Var0, &Var1, 1, -1, 1, 0))
	{
		func_216(190, 131, 0, 0f, 1);
		func_216(190, 103, iLocal_106[1], 0f, 0);
		func_216(190, 99, iLocal_106[2], 0f, 0);
		func_216(190, 109, iLocal_106[3], 0f, 0);
		func_216(190, 106, iLocal_106[5], 0f, 0);
		func_216(190, 2, iLocal_106[10], 0f, 0);
		func_216(190, 107, iLocal_106[8], 0f, 0);
		func_216(190, 116, iLocal_106[6], 0f, 0);
		iLocal_106[1] = 0;
		iLocal_106[2] = 0;
		iLocal_106[3] = 0;
		iLocal_106[5] = 0;
		iLocal_106[10] = 0;
		iLocal_106[8] = 0;
		iLocal_106[6] = 0;
	}
}

void func_216(int iParam0, int iParam1, int iParam2, float fParam3, bool bParam4)//Position - 0x10162
{
	int iVar0;
	int iVar1;
	
	if (!bParam4)
	{
		unk_0x18054B9E2612CC6D(iParam1, iParam2, fParam3);
	}
	if (!Global_1C0005.f_3)
	{
		Global_1C0005.f_8E = iParam0;
		Global_1C0005.f_8E.f_1 = unk_0x8731EA21A98ED1C3(Global_1C0005.f_8E, 0);
		iVar1 = 0;
		while (iVar1 < 32)
		{
			if (iVar1 < Global_1C0005.f_8E.f_1)
			{
				if (iParam1 == 156)
				{
				}
				else if (func_212(iParam0, 4, iVar1))
				{
					unk_0xF0059F27F7BB6680(&(Global_1C0005.f_8E.f_2), iVar1);
				}
				else
				{
					unk_0x7CB6FD92BE491AD9(&(Global_1C0005.f_8E.f_2), iVar1);
				}
			}
			else
			{
				unk_0x7CB6FD92BE491AD9(&(Global_1C0005.f_8E.f_2), iVar1);
			}
			iVar1++;
		}
		Global_1C0005.f_3 = 1;
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (iParam1 == unk_0x9B1E40957BEDC83C(iParam0, 4, iVar1))
		{
			iVar0 = iVar1;
			iVar1 = 32;
		}
		iVar1++;
	}
	Global_1C0005.f_8E.f_24[iVar0] = iParam2;
	Global_1C0005.f_8E.f_3[iVar0] = fParam3;
	if (iParam2 != 0)
	{
		unk_0xF0059F27F7BB6680(&(Global_1C0005.f_8E.f_2), iVar0);
	}
	else if (fParam3 != 0f)
	{
		unk_0x7CB6FD92BE491AD9(&(Global_1C0005.f_8E.f_2), iVar0);
	}
}

int func_217(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x1027D
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
		Var0 = uParam0;
		if (iParam4 == -1)
		{
			if (unk_0xB9ACC1154C623363())
			{
				Var2 = { func_23(unk_0xB5CEFD608600A09F()) };
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

void func_218(var uParam0, bool bParam1)//Position - 0x103B1
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = -1;
	}
	func_219(uParam0, 14, "DartsLB", "", iVar0, -1, 0, 0);
}

void func_219(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)//Position - 0x103D9
{
	struct<8> Var0;
	struct<8> Var1;
	int iVar2;
	struct<6> Var3;
	
	if (!unk_0xF1734B55490E9045(sParam2))
	{
		StringCopy(&Var0, sParam2, 32);
	}
	if (bParam7)
	{
	}
	Global_1C017E.f_AD1 = 0;
	Global_1C017E.f_AD2 = 0;
	Global_1C017E.f_AD0 = 0;
	switch (iParam1)
	{
		case 2:
			if (iParam4 == 0)
			{
				if (iParam5 > 0 && !func_226())
				{
					uParam0->f_2C = 826;
				}
				else
				{
					uParam0->f_2C = 815;
				}
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_226())
				{
					uParam0->f_2C.f_3 = 2;
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_2C.f_3.f_1[1 /*16*/].f_8 = { Var1 };
					Global_1C017E.f_ADC.f_1A = iParam5;
					if (!unk_0xF1734B55490E9045(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RCE_L1", 32);
							StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RCE_LM", 32);
							StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RCE_NN_LM", 32);
					}
				}
				else
				{
					if (!unk_0xF1734B55490E9045(sParam3))
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RCE", 32);
						StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RCE_NN", 32);
					}
					Global_1C017E.f_ADC.f_1A = -1;
				}
				Global_1C017E.f_ADC = 1;
				if (iParam5 <= 0 || func_226())
				{
					StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "", 24);
					Global_1C017E.f_A96[0] = 1;
					Global_1C017E.f_A96[1] = 3;
					Global_1C017E.f_A96[2] = 0;
					Global_1C017E.f_A96[3] = 0;
					Global_1C017E.f_A95 = 4;
					Global_1C017E.f_A94 = 2;
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
					Global_1C017E.f_ADC.f_1C = 4;
					Global_1C017E.f_ADC.f_1D[0] = 1;
					Global_1C017E.f_ADC.f_1D[1] = 3;
					Global_1C017E.f_ADC.f_1D[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1C017E.f_A96[0] = 2;
					Global_1C017E.f_A96[1] = 1;
					Global_1C017E.f_A96[2] = 3;
					Global_1C017E.f_A96[3] = 0;
					Global_1C017E.f_A95 = 4;
					Global_1C017E.f_A94 = 3;
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
					Global_1C017E.f_ADC.f_1C = 5;
					Global_1C017E.f_ADC.f_1D[0] = 1;
					Global_1C017E.f_ADC.f_1D[1] = 1;
					Global_1C017E.f_ADC.f_1D[2] = 3;
					Global_1C017E.f_ADC.f_1D[3] = 5;
				}
				Global_1C017E.f_ADB = 0;
			}
			else if (iParam4 == 1)
			{
				if (iParam5 > 0 && !func_226())
				{
					uParam0->f_2C = 827;
				}
				else
				{
					uParam0->f_2C = 824;
				}
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_226())
				{
					uParam0->f_2C.f_3 = 2;
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_2C.f_3.f_1[1 /*16*/].f_8 = { Var1 };
					Global_1C017E.f_ADC.f_1A = iParam5;
					if (!unk_0xF1734B55490E9045(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_GRCE_L1", 32);
							StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_GRCE_LM", 32);
							StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_GRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_GRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1C017E.f_ADC.f_1A = -1;
					if (!unk_0xF1734B55490E9045(sParam3))
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_GRCE", 32);
						StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_GRCE_NN", 32);
					}
				}
				Global_1C017E.f_ADC = 1;
				if (iParam5 <= 0 || func_226())
				{
					StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "", 24);
					Global_1C017E.f_A96[0] = 1;
					Global_1C017E.f_A96[1] = 5;
					Global_1C017E.f_A96[2] = 0;
					Global_1C017E.f_A96[3] = 0;
					Global_1C017E.f_A95 = 6;
					Global_1C017E.f_A94 = 2;
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
					Global_1C017E.f_ADC.f_1C = 4;
					Global_1C017E.f_ADC.f_1D[0] = 1;
					Global_1C017E.f_ADC.f_1D[1] = 3;
					Global_1C017E.f_ADC.f_1D[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1C017E.f_A96[0] = 2;
					Global_1C017E.f_A96[1] = 1;
					Global_1C017E.f_A96[2] = 5;
					Global_1C017E.f_A96[3] = 0;
					Global_1C017E.f_A94 = 3;
					Global_1C017E.f_A95 = 6;
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
					Global_1C017E.f_ADC.f_1C = 5;
					Global_1C017E.f_ADC.f_1D[0] = 1;
					Global_1C017E.f_ADC.f_1D[1] = 1;
					Global_1C017E.f_ADC.f_1D[2] = 3;
					Global_1C017E.f_ADC.f_1D[3] = 5;
				}
				Global_1C017E.f_ADB = 0;
			}
			else if (iParam4 == 2)
			{
				if (iParam5 > 0 && !func_226())
				{
					uParam0->f_2C = 828;
				}
				else
				{
					uParam0->f_2C = 825;
				}
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 2;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (!bParam6)
				{
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "CoDriver", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "", 32);
				}
				else
				{
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "CoDriver", 32);
					unk_0x01F0A11048DC3F30(unk_0xB5CEFD608600A09F(), &Var3);
					MemCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), {Var3}, 8);
					Global_1C017E.f_ADC.f_1B = 1;
				}
				if (iParam5 > 0 && !func_226())
				{
					uParam0->f_2C.f_3 = 3;
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_2C.f_3.f_1[2 /*16*/].f_8 = { Var1 };
					Global_1C017E.f_ADC.f_1A = iParam5;
					if (!unk_0xF1734B55490E9045(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RRCE_L1", 32);
							StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RRCE_LM", 32);
							StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1C017E.f_ADC.f_1A = -1;
					if (!unk_0xF1734B55490E9045(sParam3))
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RRCE", 32);
						StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RRCE_NN", 32);
					}
				}
				if (iParam5 <= 0 || func_226())
				{
					StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "", 24);
					Global_1C017E.f_A96[0] = 1;
					Global_1C017E.f_A96[1] = 3;
					Global_1C017E.f_A96[2] = 0;
					Global_1C017E.f_A96[3] = 0;
					Global_1C017E.f_A95 = 4;
					Global_1C017E.f_A94 = 2;
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
					Global_1C017E.f_ADC.f_1C = 4;
					Global_1C017E.f_ADC.f_1D[0] = 1;
					Global_1C017E.f_ADC.f_1D[1] = 3;
					Global_1C017E.f_ADC.f_1D[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1C017E.f_A96[0] = 2;
					Global_1C017E.f_A96[1] = 1;
					Global_1C017E.f_A96[2] = 3;
					Global_1C017E.f_A96[3] = 0;
					Global_1C017E.f_A94 = 3;
					Global_1C017E.f_A95 = 4;
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
					Global_1C017E.f_ADC.f_1C = 5;
					Global_1C017E.f_ADC.f_1D[0] = 1;
					Global_1C017E.f_ADC.f_1D[1] = 1;
					Global_1C017E.f_ADC.f_1D[2] = 3;
					Global_1C017E.f_ADC.f_1D[3] = 5;
				}
				Global_1C017E.f_ADB = 0;
			}
			else if (iParam4 == 10 || iParam4 == 11)
			{
				if (iParam5 > 0 && !func_226())
				{
					uParam0->f_2C = 928;
				}
				else
				{
					uParam0->f_2C = 849;
				}
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_226())
				{
					uParam0->f_2C.f_3 = 2;
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_2C.f_3.f_1[1 /*16*/].f_8 = { Var1 };
					Global_1C017E.f_ADC.f_1A = iParam5;
					if (!unk_0xF1734B55490E9045(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_FRCE_L1", 32);
							StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_FRCE_LM", 32);
							StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_FRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_FRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1C017E.f_ADC.f_1A = -1;
					if (!unk_0xF1734B55490E9045(sParam3))
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_FRCE", 32);
						StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_FRCE_NN", 32);
					}
				}
				Global_1C017E.f_ADC = 1;
				if (iParam5 <= 0 || func_226())
				{
					StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "", 24);
					Global_1C017E.f_A96[0] = 1;
					Global_1C017E.f_A96[1] = 0;
					Global_1C017E.f_A96[2] = 0;
					Global_1C017E.f_A96[3] = 0;
					Global_1C017E.f_A95 = 0;
					Global_1C017E.f_A94 = 1;
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
					Global_1C017E.f_ADC.f_1C = 4;
					Global_1C017E.f_ADC.f_1D[0] = 1;
					Global_1C017E.f_ADC.f_1D[1] = 5;
				}
				else
				{
					StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_1C017E.f_A96[0] = 2;
					Global_1C017E.f_A96[1] = 1;
					Global_1C017E.f_A96[2] = 0;
					Global_1C017E.f_A96[3] = 0;
					Global_1C017E.f_A94 = 2;
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
					Global_1C017E.f_ADC.f_1C = 5;
					Global_1C017E.f_ADC.f_1D[0] = 1;
					Global_1C017E.f_ADC.f_1D[1] = 1;
					Global_1C017E.f_ADC.f_1D[2] = 5;
				}
				Global_1C017E.f_ADB = 0;
			}
			else if (iParam4 == 3)
			{
				if (iParam5 > 0 && !func_226())
				{
					uParam0->f_2C = (998 + (iParam5 - 1));
				}
				else
				{
					uParam0->f_2C = 975;
				}
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_226())
				{
					Global_1C017E.f_ADC.f_1A = iParam5;
					if (!unk_0xF1734B55490E9045(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RCE_L1", 32);
							StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RCE_LM", 32);
							StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RCE_NN_LM", 32);
					}
				}
				else
				{
					if (!unk_0xF1734B55490E9045(sParam3))
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RCE", 32);
						StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_RCE_NN", 32);
					}
					Global_1C017E.f_ADC.f_1A = -1;
				}
				Global_1C017E.f_ADC = 1;
				if (iParam5 <= 0 || func_226())
				{
					StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "", 24);
					Global_1C017E.f_A96[0] = 1;
					Global_1C017E.f_A96[1] = 3;
					Global_1C017E.f_A96[2] = 0;
					Global_1C017E.f_A96[3] = 0;
					Global_1C017E.f_A95 = 4;
					Global_1C017E.f_A94 = 2;
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
					Global_1C017E.f_ADC.f_1C = 4;
					Global_1C017E.f_ADC.f_1D[0] = 1;
					Global_1C017E.f_ADC.f_1D[1] = 3;
					Global_1C017E.f_ADC.f_1D[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1C017E.f_A96[0] = 2;
					Global_1C017E.f_A96[1] = 1;
					Global_1C017E.f_A96[2] = 3;
					Global_1C017E.f_A96[3] = 0;
					Global_1C017E.f_A95 = 4;
					Global_1C017E.f_A94 = 3;
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
					Global_1C017E.f_ADC.f_1C = 5;
					Global_1C017E.f_ADC.f_1D[0] = 1;
					Global_1C017E.f_ADC.f_1D[1] = 1;
					Global_1C017E.f_ADC.f_1D[2] = 3;
					Global_1C017E.f_ADC.f_1D[3] = 5;
				}
				Global_1C017E.f_ADB = 0;
			}
			break;
		
		case 1:
			if (iParam4 == 0)
			{
				uParam0->f_2C = 762;
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1C017E.f_ADC = 1;
				if (!unk_0xF1734B55490E9045(sParam3))
				{
					StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_DM", 32);
					StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_DM_NN", 32);
				}
				StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1C017E.f_A9D[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1C017E.f_A9D[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1C017E.f_A96[0] = 0;
				Global_1C017E.f_A96[1] = 4;
				Global_1C017E.f_A96[2] = 6;
				Global_1C017E.f_A96[3] = 3;
				Global_1C017E.f_A96[4] = 1;
				Global_1C017E.f_A96[5] = 2;
				Global_1C017E.f_A94 = 6;
				unk_0x7CB6FD92BE491AD9(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
				unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
				unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
				unk_0x7CB6FD92BE491AD9(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
				unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[4]);
				unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[5]);
				Global_1C017E.f_ADC.f_1C = 5;
				Global_1C017E.f_ADC.f_1D[0] = 4;
				Global_1C017E.f_ADC.f_1D[1] = 5;
				Global_1C017E.f_ADC.f_1D[2] = 5;
				Global_1C017E.f_ADC.f_1D[3] = 4;
				Global_1C017E.f_ADC.f_1D[4] = 5;
				Global_1C017E.f_ADC.f_1D[5] = 5;
			}
			else if (iParam4 == 1)
			{
				uParam0->f_2C = 822;
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1C017E.f_ADC = 1;
				if (!unk_0xF1734B55490E9045(sParam3))
				{
					StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_TDM", 32);
					StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_TDM_NN", 32);
				}
				StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1C017E.f_A9D[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1C017E.f_A9D[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1C017E.f_A96[0] = 0;
				Global_1C017E.f_A96[1] = 4;
				Global_1C017E.f_A96[2] = 6;
				Global_1C017E.f_A96[3] = 3;
				Global_1C017E.f_A96[4] = 1;
				Global_1C017E.f_A96[5] = 2;
				Global_1C017E.f_A94 = 6;
				unk_0x7CB6FD92BE491AD9(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
				unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
				unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
				unk_0x7CB6FD92BE491AD9(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
				unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[4]);
				unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[5]);
				Global_1C017E.f_ADC.f_1C = 5;
				Global_1C017E.f_ADC.f_1D[0] = 4;
				Global_1C017E.f_ADC.f_1D[1] = 5;
				Global_1C017E.f_ADC.f_1D[2] = 5;
				Global_1C017E.f_ADC.f_1D[3] = 4;
				Global_1C017E.f_ADC.f_1D[4] = 5;
				Global_1C017E.f_ADC.f_1D[5] = 5;
			}
			else if (iParam4 == 2)
			{
				uParam0->f_2C = 823;
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1C017E.f_ADC = 1;
				if (!unk_0xF1734B55490E9045(sParam3))
				{
					StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_VEHDM", 32);
					StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_VEHDM_NN", 32);
				}
				StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1C017E.f_A9D[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1C017E.f_A9D[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1C017E.f_A96[0] = 0;
				Global_1C017E.f_A96[1] = 4;
				Global_1C017E.f_A96[2] = 6;
				Global_1C017E.f_A96[3] = 3;
				Global_1C017E.f_A96[4] = 1;
				Global_1C017E.f_A96[5] = 2;
				Global_1C017E.f_A94 = 6;
				unk_0x7CB6FD92BE491AD9(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
				unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
				unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
				unk_0x7CB6FD92BE491AD9(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
				unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[4]);
				unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[5]);
				Global_1C017E.f_ADC.f_1C = 5;
				Global_1C017E.f_ADC.f_1D[0] = 4;
				Global_1C017E.f_ADC.f_1D[1] = 5;
				Global_1C017E.f_ADC.f_1D[2] = 5;
				Global_1C017E.f_ADC.f_1D[3] = 4;
				Global_1C017E.f_ADC.f_1D[4] = 5;
				Global_1C017E.f_ADC.f_1D[5] = 5;
			}
			break;
		
		case 11:
			uParam0->f_2C = 193;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			Global_1C017E.f_ADC = 1;
			StringCopy(&(Global_1C017E.f_ADC.f_1), "HUD_MG_GOLF", 32);
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_GOLF0", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_GOLF1", 24);
			StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_GAMES", 24);
			StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1C017E.f_A96[0] = 0;
			Global_1C017E.f_A96[1] = 1;
			Global_1C017E.f_A96[2] = 3;
			Global_1C017E.f_A96[3] = 0;
			Global_1C017E.f_A94 = 3;
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
			Global_1C017E.f_ADC.f_1C = 5;
			Global_1C017E.f_ADC.f_1D[0] = 7;
			Global_1C017E.f_ADC.f_1D[1] = 5;
			Global_1C017E.f_ADC.f_1D[2] = 5;
			Global_1C017E.f_ADC.f_1D[3] = 5;
			break;
		
		case 94:
			uParam0->f_2C = 193;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			Global_1C017E.f_ADC = 1;
			StringCopy(&(Global_1C017E.f_ADC.f_1), "HUD_MG_GOLF", 32);
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_GOLF0", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_GOLF1", 24);
			StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_GAMES", 24);
			StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1C017E.f_A96[0] = 0;
			Global_1C017E.f_A96[1] = 1;
			Global_1C017E.f_A96[2] = 3;
			Global_1C017E.f_A96[3] = 0;
			Global_1C017E.f_A94 = 3;
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
			Global_1C017E.f_ADC.f_1C = 5;
			Global_1C017E.f_ADC.f_1D[0] = 7;
			Global_1C017E.f_ADC.f_1D[1] = 5;
			Global_1C017E.f_ADC.f_1D[2] = 5;
			Global_1C017E.f_ADC.f_1D[3] = 5;
			break;
		
		case 92:
			uParam0->f_2C = 811;
			uParam0->f_2C.f_1 = 1;
			uParam0->f_2C.f_3 = 0;
			StringCopy(&(Global_1C017E.f_ADC.f_1), "HUD_MG_HUNTING", 32);
			StringCopy(&(Global_1C017E.f_ADC.f_9), "CMSW", 64);
			Global_1C017E.f_ADC.f_19 = 0;
			Global_1C017E.f_ADC = 0;
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_HSCORE", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_TIMEHUNT", 24);
			StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_EKILLS", 24);
			StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_PHOTOS", 24);
			StringCopy(&(Global_1C017E.f_A9D[4 /*6*/]), "SCLB_C_MONEY", 24);
			Global_1C017E.f_A96[0] = 0;
			Global_1C017E.f_A96[1] = 5;
			Global_1C017E.f_A96[2] = 2;
			Global_1C017E.f_A96[3] = 4;
			Global_1C017E.f_A96[4] = 6;
			Global_1C017E.f_A94 = 5;
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[4]);
			Global_1C017E.f_ADC.f_1C = 6;
			Global_1C017E.f_ADC.f_1D[0] = 5;
			Global_1C017E.f_ADC.f_1D[1] = 6;
			Global_1C017E.f_ADC.f_1D[2] = 5;
			Global_1C017E.f_ADC.f_1D[3] = 5;
			Global_1C017E.f_ADC.f_1D[4] = 5;
			break;
		
		case 15:
			uParam0->f_2C = 749;
			uParam0->f_2C.f_1 = 1;
			uParam0->f_2C.f_3 = 0;
			StringCopy(&(Global_1C017E.f_ADC.f_1), "HUD_MG_ARM", 32);
			Global_1C017E.f_ADC = 1;
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1C017E.f_A96[0] = 2;
			Global_1C017E.f_A96[1] = 5;
			Global_1C017E.f_A96[2] = 0;
			Global_1C017E.f_A96[3] = 0;
			Global_1C017E.f_A94 = 3;
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
			unk_0x7CB6FD92BE491AD9(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
			Global_1C017E.f_ADC.f_1C = 5;
			Global_1C017E.f_ADC.f_1D[0] = 5;
			Global_1C017E.f_ADC.f_1D[1] = 5;
			Global_1C017E.f_ADC.f_1D[2] = 4;
			Global_1C017E.f_ADC.f_1D[3] = 5;
			break;
		
		case 14:
			uParam0->f_2C = 190;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "GameType", 32);
			if (iParam4 == -1)
			{
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			}
			else
			{
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			}
			StringCopy(&(Global_1C017E.f_ADC.f_1), "HUD_MG_DARTS", 32);
			Global_1C017E.f_ADC = 1;
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1C017E.f_A96[0] = 0;
			Global_1C017E.f_A96[1] = 7;
			Global_1C017E.f_A96[2] = 5;
			Global_1C017E.f_A96[3] = 0;
			Global_1C017E.f_A94 = 3;
			unk_0x7CB6FD92BE491AD9(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
			Global_1C017E.f_ADC.f_1C = 5;
			Global_1C017E.f_ADC.f_1D[0] = 4;
			Global_1C017E.f_ADC.f_1D[1] = 5;
			Global_1C017E.f_ADC.f_1D[2] = 5;
			Global_1C017E.f_ADC.f_1D[3] = 5;
			break;
		
		case 12:
			uParam0->f_2C = 283;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			StringCopy(&(Global_1C017E.f_ADC.f_1), "HUD_MG_TENNIS", 32);
			StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
			if (unk_0xF1734B55490E9045(sParam3))
			{
				StringCopy(&(Global_1C017E.f_ADC.f_9), "HUD_MG_TENNIS", 64);
				StringIntConCat(&(Global_1C017E.f_ADC.f_9), iParam4 + 1, 64);
			}
			Global_1C017E.f_ADC.f_19 = 0;
			Global_1C017E.f_ADC = 1;
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_TEN1", 24);
			StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_TEN2", 24);
			StringCopy(&(Global_1C017E.f_A9D[4 /*6*/]), "SCLB_C_TEN0", 24);
			Global_1C017E.f_A96[0] = 0;
			Global_1C017E.f_A96[1] = 9;
			Global_1C017E.f_A96[2] = 7;
			Global_1C017E.f_A96[3] = 5;
			Global_1C017E.f_A96[4] = 2;
			Global_1C017E.f_A94 = 5;
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[4]);
			Global_1C017E.f_ADC.f_1C = 5;
			Global_1C017E.f_ADC.f_1D[0] = 5;
			Global_1C017E.f_ADC.f_1D[1] = 5;
			Global_1C017E.f_ADC.f_1D[2] = 5;
			Global_1C017E.f_ADC.f_1D[3] = 5;
			Global_1C017E.f_ADC.f_1D[4] = 5;
			break;
		
		case 87:
			uParam0->f_2C = 283;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(Global_1C017E.f_ADC.f_1), "HUD_MG_TENNIS", 32);
			StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
			Global_1C017E.f_ADC.f_19 = 0;
			Global_1C017E.f_ADC = 1;
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_TEN1", 24);
			StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_TEN2", 24);
			StringCopy(&(Global_1C017E.f_A9D[4 /*6*/]), "SCLB_C_TEN0", 24);
			Global_1C017E.f_A96[0] = 0;
			Global_1C017E.f_A96[1] = 9;
			Global_1C017E.f_A96[2] = 7;
			Global_1C017E.f_A96[3] = 5;
			Global_1C017E.f_A96[4] = 2;
			Global_1C017E.f_A94 = 5;
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[4]);
			Global_1C017E.f_ADC.f_1C = 5;
			Global_1C017E.f_ADC.f_1D[0] = 5;
			Global_1C017E.f_ADC.f_1D[1] = 5;
			Global_1C017E.f_ADC.f_1D[2] = 5;
			Global_1C017E.f_ADC.f_1D[3] = 5;
			Global_1C017E.f_ADC.f_1D[4] = 5;
			break;
		
		case 13:
			uParam0->f_2C = 912;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 2;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "RANDOM", 32);
					StringCopy(&(Global_1C017E.f_ADC.f_1), "HUD_MG_RANGEa", 32);
					break;
				
				case 1:
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "GRID", 32);
					StringCopy(&(Global_1C017E.f_ADC.f_1), "HUD_MG_RANGEb", 32);
					break;
				
				case 2:
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "COVERED", 32);
					StringCopy(&(Global_1C017E.f_ADC.f_1), "HUD_MG_RANGEc", 32);
					break;
				
				default:
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "RANDOM", 32);
					StringCopy(&(Global_1C017E.f_ADC.f_1), "HUD_MG_RANGEa", 32);
					break;
			}
			switch (iParam5)
			{
				case 0:
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "Pistols", 32);
					StringCopy(&(Global_1C017E.f_ADC.f_9), "HUD_MG_PISTOL", 64);
					break;
				
				case 1:
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "SMGs", 32);
					StringCopy(&(Global_1C017E.f_ADC.f_9), "HUD_MG_SMG", 64);
					break;
				
				case 2:
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "AssaultRifles", 32);
					StringCopy(&(Global_1C017E.f_ADC.f_9), "HUD_MG_ASSAULT", 64);
					break;
				
				case 3:
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "Shotguns", 32);
					StringCopy(&(Global_1C017E.f_ADC.f_9), "HUD_MG_SHOTGUN", 64);
					break;
				
				case 4:
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "LMGs", 32);
					StringCopy(&(Global_1C017E.f_ADC.f_9), "HUD_MG_LMG", 64);
					break;
				
				case 5:
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "Heavies", 32);
					StringCopy(&(Global_1C017E.f_ADC.f_9), "HUD_MG_HEAVY", 64);
					break;
				
				default:
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "Pistols", 32);
					StringCopy(&(Global_1C017E.f_ADC.f_9), "HUD_MG_PISTOL", 64);
					break;
			}
			Global_1C017E.f_ADC.f_19 = 0;
			Global_1C017E.f_ADC = 1;
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_HITS", 24);
			StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_SHOTS", 24);
			StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_ACC", 24);
			Global_1C017E.f_A96[0] = 0;
			Global_1C017E.f_A96[1] = 2;
			Global_1C017E.f_A96[2] = 1;
			Global_1C017E.f_A96[3] = 3;
			Global_1C017E.f_A94 = 4;
			unk_0x7CB6FD92BE491AD9(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
			unk_0x7CB6FD92BE491AD9(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
			Global_1C017E.f_ADC.f_1C = 4;
			Global_1C017E.f_ADC.f_1D[0] = 4;
			Global_1C017E.f_ADC.f_1D[1] = 5;
			Global_1C017E.f_ADC.f_1D[2] = 5;
			Global_1C017E.f_ADC.f_1D[3] = 4;
			break;
		
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
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
		case 206:
		case 207:
		case 208:
		case 209:
			uParam0->f_2C = 203;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Type", 32);
			uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1C017E.f_ADC = 1;
			StringCopy(&(Global_1C017E.f_ADC.f_1), "HUD_MG_RANGE", 32);
			MemCopy(&(Global_1C017E.f_ADC.f_9), {func_225(iParam1)}, 16);
			Global_1C017E.f_ADC.f_19 = 0;
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_WEAP", 24);
			Global_1C017E.f_A96[0] = 0;
			Global_1C017E.f_A96[1] = 7;
			Global_1C017E.f_A94 = 2;
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
			Global_1C017E.f_ADC.f_1C = 4;
			Global_1C017E.f_ADC.f_1D[0] = 5;
			Global_1C017E.f_ADC.f_1D[1] = 8;
			break;
		
		case 69:
		case 71:
		case 70:
			uParam0->f_2C = 202;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1C017E.f_ADC = 1;
			StringCopy(&(Global_1C017E.f_ADC.f_1), "HUD_MG_TRI", 32);
			StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
			Global_1C017E.f_ADC.f_19 = 0;
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_RANK", 24);
			StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "", 24);
			StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "", 24);
			Global_1C017E.f_A96[0] = 0;
			Global_1C017E.f_A96[1] = 0;
			Global_1C017E.f_A96[2] = 0;
			Global_1C017E.f_A96[3] = 0;
			Global_1C017E.f_A94 = 1;
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			Global_1C017E.f_ADC.f_1C = 3;
			Global_1C017E.f_ADC.f_1D[0] = 2;
			Global_1C017E.f_ADC.f_1D[1] = 5;
			Global_1C017E.f_ADC.f_1D[2] = 0;
			Global_1C017E.f_ADC.f_1D[3] = 0;
			break;
		
		case 80:
			uParam0->f_2C = 817;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 3;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "Location", 32);
			uParam0->f_2C.f_3.f_1[1 /*16*/].f_8 = { Var0 };
			StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "OffroadRace", 32);
			Global_1C017E.f_ADC.f_19 = 0;
			Global_1C017E.f_ADC = 1;
			StringCopy(&(Global_1C017E.f_ADC.f_1), "OFFR_TITLE", 32);
			StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_TIME", 24);
			Global_1C017E.f_A96[0] = 3;
			Global_1C017E.f_A94 = 1;
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			Global_1C017E.f_ADC.f_1C = 3;
			Global_1C017E.f_ADC.f_1D[0] = 1;
			break;
		
		case 3:
			uParam0->f_2C = 791;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
			uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1C017E.f_ADC = 1;
			if (!unk_0xF1734B55490E9045(sParam3))
			{
				StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_HRD", 32);
				StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_HRD_NN", 32);
			}
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_WAVE", 24);
			StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_TKILLS", 24);
			StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_TDEATH", 24);
			Global_1C017E.f_A96[0] = 0;
			Global_1C017E.f_A96[1] = 1;
			Global_1C017E.f_A96[2] = 2;
			Global_1C017E.f_A96[3] = 3;
			Global_1C017E.f_A94 = 4;
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
			Global_1C017E.f_ADC.f_1C = 5;
			Global_1C017E.f_ADC.f_1D[0] = 5;
			Global_1C017E.f_ADC.f_1D[1] = 5;
			Global_1C017E.f_ADC.f_1D[2] = 5;
			Global_1C017E.f_ADC.f_1D[3] = 5;
			break;
		
		case 0:
			if (iParam4 == 7 || iParam4 == 1)
			{
				uParam0->f_2C = 1200;
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1C017E.f_ADC = 1;
				if (!unk_0xF1734B55490E9045(sParam3))
				{
					if (iParam4 == 1)
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_HEIST", 32);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_HEISTP", 32);
					}
					StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
				}
				else if (iParam4 == 1)
				{
					StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_HEIST_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_HEISTPNN", 32);
				}
				StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_SCORE", 24);
				StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_TIME", 24);
				StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_ACC", 24);
				StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_HEADSHOT", 24);
				StringCopy(&(Global_1C017E.f_A9D[4 /*6*/]), "SCLB_C_KILLS", 24);
				Global_1C017E.f_A96[0] = 0;
				Global_1C017E.f_A96[1] = 1;
				Global_1C017E.f_A96[2] = 4;
				Global_1C017E.f_A96[3] = 5;
				Global_1C017E.f_A96[4] = 6;
				Global_1C017E.f_A94 = 3;
				unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
				unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
				unk_0x7CB6FD92BE491AD9(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
				unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
				unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[4]);
				Global_1C017E.f_ADC.f_1C = 6;
				Global_1C017E.f_ADC.f_1D[0] = 5;
				Global_1C017E.f_ADC.f_1D[1] = 11;
				Global_1C017E.f_ADC.f_1D[2] = 4;
				Global_1C017E.f_ADC.f_1D[3] = 5;
				Global_1C017E.f_ADC.f_1D[4] = 5;
			}
			else if (Global_440000.f_38 == 1)
			{
				uParam0->f_2C = 777;
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1C017E.f_ADC = 1;
				if (!unk_0xF1734B55490E9045(sParam3))
				{
					if (Global_440000.f_2 == 5)
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
				}
				else if (Global_440000.f_2 == 5)
				{
					StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_MIS_NN", 32);
				}
				StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_TIME", 24);
				StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_DEATH", 24);
				StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
				Global_1C017E.f_A96[0] = 0;
				Global_1C017E.f_A96[1] = 1;
				Global_1C017E.f_A96[2] = 2;
				Global_1C017E.f_A96[3] = 0;
				Global_1C017E.f_A94 = 3;
				unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
				unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
				unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
				Global_1C017E.f_ADC.f_1C = 5;
				Global_1C017E.f_ADC.f_1D[0] = 2;
				Global_1C017E.f_ADC.f_1D[1] = 5;
				Global_1C017E.f_ADC.f_1D[2] = 5;
				Global_1C017E.f_ADC.f_1D[3] = 5;
			}
			else
			{
				uParam0->f_2C = 780;
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1C017E.f_ADC = 1;
				if (!unk_0xF1734B55490E9045(sParam3))
				{
					if (Global_440000.f_2 == 5)
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
				}
				else if (Global_440000.f_2 == 5)
				{
					StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_MIS_NN", 32);
				}
				if (func_224(Global_440000.f_243FE) || func_221(Global_440000.f_243FE))
				{
					StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_1C017E.f_A96[0] = 0;
					Global_1C017E.f_A96[1] = 2;
					Global_1C017E.f_A96[2] = 0;
					Global_1C017E.f_A94 = 2;
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
					Global_1C017E.f_ADC.f_1C = 4;
					Global_1C017E.f_ADC.f_1D[0] = 5;
					Global_1C017E.f_ADC.f_1D[1] = 5;
					Global_1C017E.f_ADC.f_1D[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1C017E.f_A96[0] = 0;
					Global_1C017E.f_A96[1] = 1;
					Global_1C017E.f_A96[2] = 2;
					Global_1C017E.f_A96[3] = 0;
					Global_1C017E.f_A94 = 3;
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
					Global_1C017E.f_ADC.f_1C = 5;
					Global_1C017E.f_ADC.f_1D[0] = 5;
					Global_1C017E.f_ADC.f_1D[1] = 5;
					Global_1C017E.f_ADC.f_1D[2] = 5;
					Global_1C017E.f_ADC.f_1D[3] = 5;
				}
			}
			break;
		
		case 8:
			uParam0->f_2C = 795;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
			uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1C017E.f_ADC = 1;
			if (!unk_0xF1734B55490E9045(sParam3))
			{
				StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_BJ", 32);
				StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_BJ_NN", 32);
			}
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_JUMPS", 24);
			StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1C017E.f_A96[0] = 0;
			Global_1C017E.f_A96[1] = 1;
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD0), 1);
			Global_1C017E.f_AC2[1] = -1;
			Global_1C017E.f_A96[2] = 2;
			Global_1C017E.f_A96[3] = 0;
			Global_1C017E.f_A94 = 3;
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
			Global_1C017E.f_ADC.f_1C = 5;
			Global_1C017E.f_ADC.f_1D[0] = 5;
			Global_1C017E.f_ADC.f_1D[1] = 11;
			Global_1C017E.f_ADC.f_1D[2] = 5;
			Global_1C017E.f_ADC.f_1D[3] = 5;
			break;
		
		case 85:
			uParam0->f_2C = 274;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1C017E.f_ADC = 1;
			Global_1C017E.f_ADC.f_19 = 0;
			if (!unk_0xF1734B55490E9045(sParam3))
			{
				StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_BJ", 32);
				StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_BJ_NN", 32);
			}
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_CASH", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_TOTCASH", 24);
			Global_1C017E.f_A96[0] = 0;
			Global_1C017E.f_A96[1] = 3;
			Global_1C017E.f_A94 = 2;
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
			Global_1C017E.f_ADC.f_1C = 3;
			Global_1C017E.f_ADC.f_1D[0] = 5;
			Global_1C017E.f_ADC.f_1D[1] = 5;
			break;
		
		case 122:
			switch (iParam4)
			{
				case 0:
				case 9:
				case 4:
				case 8:
					switch (iParam4)
					{
						case 0:
							uParam0->f_2C = 965;
							break;
						
						case 9:
							uParam0->f_2C = 966;
							break;
						
						case 4:
							uParam0->f_2C = 967;
							break;
						
						case 8:
							uParam0->f_2C = 968;
							break;
					}
					uParam0->f_2C.f_1 = 1;
					uParam0->f_2C.f_3 = 0;
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1C017E.f_ADC = 1;
					if (!unk_0xF1734B55490E9045(sParam3))
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_TIME", 24);
					StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1C017E.f_A96[0] = 1;
					Global_1C017E.f_A96[1] = 4;
					Global_1C017E.f_A96[2] = 3;
					Global_1C017E.f_A96[3] = 2;
					Global_1C017E.f_A94 = 4;
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
					Global_1C017E.f_ADC.f_1D[0] = 1;
					Global_1C017E.f_ADC.f_1D[1] = 5;
					Global_1C017E.f_ADC.f_1D[2] = 5;
					Global_1C017E.f_ADC.f_1D[3] = 5;
					break;
				
				case 1:
				case 2:
				case 3:
					switch (iParam4)
					{
						case 1:
							uParam0->f_2C = 969;
							break;
						
						case 2:
							uParam0->f_2C = 970;
							break;
						
						case 3:
							uParam0->f_2C = 973;
							break;
					}
					uParam0->f_2C.f_1 = 1;
					uParam0->f_2C.f_3 = 0;
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1C017E.f_ADC = 1;
					if (!unk_0xF1734B55490E9045(sParam3))
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_DIST", 24);
					StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1C017E.f_A96[0] = 1;
					Global_1C017E.f_A96[1] = 4;
					Global_1C017E.f_A96[2] = 3;
					Global_1C017E.f_A96[3] = 2;
					Global_1C017E.f_A94 = 4;
					unk_0x7CB6FD92BE491AD9(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
					Global_1C017E.f_ADC.f_1D[0] = 4;
					Global_1C017E.f_ADC.f_1D[1] = 5;
					Global_1C017E.f_ADC.f_1D[2] = 5;
					Global_1C017E.f_ADC.f_1D[3] = 5;
					break;
				
				case 7:
					uParam0->f_2C = 971;
					uParam0->f_2C.f_1 = 1;
					uParam0->f_2C.f_3 = 0;
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1C017E.f_ADC = 1;
					if (!unk_0xF1734B55490E9045(sParam3))
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_AVG_HEI", 24);
					StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1C017E.f_A96[0] = 1;
					Global_1C017E.f_A96[1] = 4;
					Global_1C017E.f_A96[2] = 3;
					Global_1C017E.f_A96[3] = 2;
					Global_1C017E.f_A94 = 4;
					unk_0x7CB6FD92BE491AD9(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
					Global_1C017E.f_ADC.f_1D[0] = 4;
					Global_1C017E.f_ADC.f_1D[1] = 5;
					Global_1C017E.f_ADC.f_1D[2] = 5;
					Global_1C017E.f_ADC.f_1D[3] = 5;
					break;
				
				case 6:
				case 5:
					switch (iParam4)
					{
						case 6:
							uParam0->f_2C = 972;
							break;
						
						case 5:
							uParam0->f_2C = 974;
							break;
					}
					uParam0->f_2C.f_1 = 1;
					uParam0->f_2C.f_3 = 0;
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1C017E.f_ADC = 1;
					if (!unk_0xF1734B55490E9045(sParam3))
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1C017E.f_ADC.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1C017E.f_A96[0] = 0;
					Global_1C017E.f_A96[1] = 3;
					Global_1C017E.f_A96[2] = 2;
					Global_1C017E.f_A96[3] = 1;
					Global_1C017E.f_A94 = 4;
					unk_0x7CB6FD92BE491AD9(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
					unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
					Global_1C017E.f_ADC.f_1D[0] = 12;
					Global_1C017E.f_ADC.f_1D[1] = 5;
					Global_1C017E.f_ADC.f_1D[2] = 5;
					Global_1C017E.f_ADC.f_1D[3] = 5;
					break;
			}
			break;
		
		case 83:
			uParam0->f_2C = 192;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1C017E.f_ADC = 1;
			if (!unk_0xF1734B55490E9045(sParam3))
			{
				StringCopy(&(Global_1C017E.f_ADC.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1C017E.f_ADC.f_1), "PS_TITLE", 32);
			}
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_DIST", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1C017E.f_A96[0] = 2;
			Global_1C017E.f_A96[1] = 5;
			Global_1C017E.f_A96[2] = 4;
			Global_1C017E.f_A96[3] = 3;
			Global_1C017E.f_A94 = 4;
			unk_0x7CB6FD92BE491AD9(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
			Global_1C017E.f_ADC.f_1D[0] = 17;
			Global_1C017E.f_ADC.f_1D[1] = 5;
			Global_1C017E.f_ADC.f_1D[2] = 5;
			Global_1C017E.f_ADC.f_1D[3] = 5;
			break;
		
		case 82:
			uParam0->f_2C = 850;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1C017E.f_ADC = 1;
			Global_1C017E.f_ADC.f_19 = 0;
			if (!unk_0xF1734B55490E9045(sParam3))
			{
				StringCopy(&(Global_1C017E.f_ADC.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_MIS_NN", 32);
			}
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1C017E.f_A96[0] = 0;
			Global_1C017E.f_A96[1] = 4;
			Global_1C017E.f_A96[2] = 3;
			Global_1C017E.f_A96[3] = 2;
			Global_1C017E.f_A94 = 4;
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
			Global_1C017E.f_ADC.f_1D[0] = 10;
			Global_1C017E.f_ADC.f_1D[1] = 5;
			Global_1C017E.f_ADC.f_1D[2] = 5;
			Global_1C017E.f_ADC.f_1D[3] = 5;
			break;
		
		case 84:
			uParam0->f_2C = 820;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1C017E.f_ADC = 1;
			Global_1C017E.f_ADC.f_19 = 0;
			if (!unk_0xF1734B55490E9045(sParam3))
			{
				StringCopy(&(Global_1C017E.f_ADC.f_1), "PS_TITLE", 32);
				StringCopy(&(Global_1C017E.f_ADC.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1C017E.f_ADC.f_1), "SCLB_MIS_NN", 32);
			}
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_ACC", 24);
			StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1C017E.f_A9D[4 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1C017E.f_A9D[4 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1C017E.f_A96[0] = 0;
			Global_1C017E.f_A96[1] = 1;
			Global_1C017E.f_A96[2] = 2;
			Global_1C017E.f_A96[3] = 5;
			Global_1C017E.f_A96[4] = 4;
			Global_1C017E.f_A96[5] = 3;
			Global_1C017E.f_A94 = 6;
			unk_0x7CB6FD92BE491AD9(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
			unk_0x7CB6FD92BE491AD9(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[3]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[4]);
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[5]);
			Global_1C017E.f_ADC.f_1D[0] = 4;
			Global_1C017E.f_ADC.f_1D[1] = 9;
			Global_1C017E.f_ADC.f_1D[2] = 4;
			Global_1C017E.f_ADC.f_1D[3] = 5;
			Global_1C017E.f_ADC.f_1D[4] = 5;
			Global_1C017E.f_ADC.f_1D[5] = 5;
			break;
		
		case 86:
			uParam0->f_2C = 817;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 3;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "Location", 32);
			uParam0->f_2C.f_3.f_1[1 /*16*/].f_8 = { Var0 };
			StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "StuntPlaneRace", 32);
			Global_1C017E.f_ADC = 1;
			Global_1C017E.f_ADC.f_19 = 0;
			if (!unk_0xF1734B55490E9045(sParam3))
			{
				StringCopy(&(Global_1C017E.f_ADC.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1C017E.f_ADC.f_1), "SPR_TITLE", 32);
			}
			StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_TIME", 24);
			Global_1C017E.f_A96[0] = 2;
			Global_1C017E.f_A94 = 1;
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
			Global_1C017E.f_ADC.f_1C = 3;
			Global_1C017E.f_ADC.f_1D[0] = 1;
			break;
		
		case 91:
			uParam0->f_2C = 817;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 3;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "Location", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			Global_1C017E.f_ADC = 1;
			if (iParam5 <= 0)
			{
				StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_RT", 24);
				StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_VEH", 24);
				StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "", 24);
				StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "", 24);
				Global_1C017E.f_A96[0] = 3;
				Global_1C017E.f_A96[1] = 4;
				Global_1C017E.f_A96[2] = 1;
				Global_1C017E.f_A96[3] = 0;
				Global_1C017E.f_A95 = 6;
				Global_1C017E.f_A94 = 2;
				unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
				unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
				Global_1C017E.f_ADC.f_1C = 4;
				Global_1C017E.f_ADC.f_1D[0] = 1;
				Global_1C017E.f_ADC.f_1D[1] = 3;
			}
			else
			{
				StringCopy(&(Global_1C017E.f_A9D[0 /*6*/]), "SCLB_C_RT", 24);
				StringCopy(&(Global_1C017E.f_A9D[1 /*6*/]), "SCLB_C_BL", 24);
				StringCopy(&(Global_1C017E.f_A9D[2 /*6*/]), "SCLB_C_VEH", 24);
				StringCopy(&(Global_1C017E.f_A9D[3 /*6*/]), "", 24);
				Global_1C017E.f_A96[0] = 3;
				Global_1C017E.f_A96[1] = 2;
				Global_1C017E.f_A96[2] = 4;
				Global_1C017E.f_A96[3] = 1;
				Global_1C017E.f_A95 = 4;
				Global_1C017E.f_A94 = 3;
				unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[0]);
				unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[1]);
				unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD1), Global_1C017E.f_A96[2]);
				Global_1C017E.f_ADC.f_1C = 5;
				Global_1C017E.f_ADC.f_1D[0] = 1;
				Global_1C017E.f_ADC.f_1D[1] = 1;
				Global_1C017E.f_ADC.f_1D[2] = 3;
			}
			Global_1C017E.f_ADB = 0;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(Global_1C017E.f_ADC.f_1), "MGCR_1", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "MGCR_1", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 1:
					StringCopy(&(Global_1C017E.f_ADC.f_1), "MGCR_2", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "MGCR_2", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 2:
					StringCopy(&(Global_1C017E.f_ADC.f_1), "MGCR_4", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "MGCR_4", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 3:
					StringCopy(&(Global_1C017E.f_ADC.f_1), "MGCR_5", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "MGCR_5", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 4:
					StringCopy(&(Global_1C017E.f_ADC.f_1), "MGCR_6", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "MGCR_6", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 5:
					StringCopy(&(Global_1C017E.f_ADC.f_1), "MGSR_1", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "MGSR_1", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 6:
					StringCopy(&(Global_1C017E.f_ADC.f_1), "MGSR_2", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "MGSR_2", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 7:
					StringCopy(&(Global_1C017E.f_ADC.f_1), "MGSR_3", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "MGSR_3", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 8:
					StringCopy(&(Global_1C017E.f_ADC.f_1), "MGSR_4", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "MGSR_4", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				default:
					break;
			}
			break;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < Global_1C017E.f_A94)
	{
		if (unk_0xFA30DFD0084E92FE(Global_1C017E.f_AD1, Global_1C017E.f_A96[iVar2]))
		{
			unk_0xF0059F27F7BB6680(&(Global_1C017E.f_AD2), iVar2);
		}
		iVar2++;
	}
	Global_1C017E.f_B0A = func_220(Var0, uParam0->f_2C, iParam1, iParam4, iParam5, bParam6);
}

int func_220(struct<8> Param0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x148AF
{
	char cVar0[64];
	
	MemCopy(&cVar0, {Param0}, 16);
	StringIntConCat(&cVar0, iParam1, 64);
	StringConCat(&cVar0, "_", 64);
	if (func_185(iParam1))
	{
		if (bParam5)
		{
			StringConCat(&cVar0, "CoDri", 64);
		}
		else
		{
			StringConCat(&cVar0, "Dri", 64);
		}
		StringConCat(&cVar0, "_", 64);
	}
	StringIntConCat(&cVar0, iParam2, 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam3, 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam4, 64);
	return unk_0x56BEECB328B6D29D(&cVar0);
}

var func_221(int iParam0)//Position - 0x14921
{
	return (func_223(iParam0) || func_222(iParam0));
}

bool func_222(int iParam0)//Position - 0x1493B
{
	return iParam0 == 44;
}

bool func_223(int iParam0)//Position - 0x14948
{
	return iParam0 == 45;
}

bool func_224(int iParam0)//Position - 0x14955
{
	return iParam0 == 12;
}

struct<6> func_225(int iParam0)//Position - 0x14962
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 38:
			StringCopy(&Var0, "HUD_MG_RANGE0", 24);
			break;
		
		case 39:
			StringCopy(&Var0, "HUD_MG_RANGE1", 24);
			break;
		
		case 40:
			StringCopy(&Var0, "HUD_MG_RANGE2", 24);
			break;
		
		case 41:
			StringCopy(&Var0, "HUD_MG_RANGE3", 24);
			break;
		
		case 42:
			StringCopy(&Var0, "HUD_MG_RANGE4", 24);
			break;
		
		case 43:
			StringCopy(&Var0, "HUD_MG_RANGE5", 24);
			break;
		
		case 44:
			StringCopy(&Var0, "HUD_MG_RANGE6", 24);
			break;
		
		case 45:
			StringCopy(&Var0, "HUD_MG_RANGE7", 24);
			break;
		
		case 46:
			StringCopy(&Var0, "HUD_MG_RANGE8", 24);
			break;
		
		case 47:
			StringCopy(&Var0, "HUD_MG_RANGE9", 24);
			break;
		
		case 48:
			StringCopy(&Var0, "HUD_MG_RANGE10", 24);
			break;
		
		case 49:
			StringCopy(&Var0, "HUD_MG_RANGE11", 24);
			break;
		
		case 50:
			StringCopy(&Var0, "HUD_MG_RANGE12", 24);
			break;
		
		case 51:
			StringCopy(&Var0, "HUD_MG_RANGE13", 24);
			break;
		
		case 52:
			StringCopy(&Var0, "HUD_MG_RANGE14", 24);
			break;
		
		case 53:
			StringCopy(&Var0, "HUD_MG_RANGE15", 24);
			break;
		
		case 54:
			StringCopy(&Var0, "HUD_MG_RANGE16", 24);
			break;
		
		case 55:
			StringCopy(&Var0, "HUD_MG_RANGE17", 24);
			break;
		
		case 206:
			StringCopy(&Var0, "HUD_MG_RANGE18", 24);
			break;
		
		case 207:
			StringCopy(&Var0, "HUD_MG_RANGE19", 24);
			break;
		
		case 208:
			StringCopy(&Var0, "HUD_MG_RANGE20", 24);
			break;
		
		case 209:
			StringCopy(&Var0, "HUD_MG_RANGE21", 24);
			break;
	}
	return Var0;
}

int func_226()//Position - 0x14AEB
{
	if ((((((((Global_440000.f_C7AE == 1 || Global_440000.f_C7AE == 3) || Global_440000.f_C7AE == 5) || Global_440000.f_C7AE == 7) || Global_440000.f_C7AE == 19) || Global_440000.f_C7AE == 8) || Global_440000.f_C7AE == 9) || Global_440000.f_C7AE == 11) || Global_440000.f_C7AE == 13)
	{
		return 1;
	}
	return 0;
}

int func_227(var uParam0, int iParam1)//Position - 0x14B9C
{
	if (!func_411(&(uParam0->f_2)))
	{
		func_425(&(uParam0->f_2));
	}
	unk_0x4E0EC60D119222B1(14);
	unk_0x4B6031094354FED6(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0x694514BD37EC4E94(2, 201) || uParam0->f_8)
		{
			if (!func_411(&(uParam0->f_5)))
			{
				func_425(&(uParam0->f_5));
				func_228(uParam0, 1051260355);
			}
		}
		if (func_411(&(uParam0->f_5)))
		{
			if (func_7(&(uParam0->f_5)) > 0.33f)
			{
				func_412(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_7(&(uParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(uParam0->f_1)
	{
		if (!func_411(&(uParam0->f_5)))
		{
			func_425(&(uParam0->f_5));
			func_228(uParam0, 1051260355);
		}
		else if (func_7(&(uParam0->f_5)) > 0.33f)
		{
			func_412(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_228(var uParam0, float fParam1)//Position - 0x14C9F
{
	unk_0x29CD142125FE177B(*uParam0, "SHARD_ANIM_OUT");
	unk_0x1E1FB49121565EB6(uParam0->f_9);
	unk_0xD44E04EBBDC4CE88(fParam1);
	unk_0xF9FBC2F3F73D94C9();
}

void func_229(int iParam0)//Position - 0x14CC5
{
	int iVar0;
	
	iVar0 = unk_0x491B2241281A03B7(0, 100);
	if (iVar0 < 40)
	{
		if (!unk_0x36CEFBE9B745A58D((*iParam0)[1]))
		{
			func_4((*iParam0)[1], "DARTS_LOSE", 0, 4);
		}
	}
	else if (iVar0 < 70)
	{
		if (!unk_0x36CEFBE9B745A58D((*iParam0)[0]))
		{
			func_4((*iParam0)[0], "GAME_LOSE_SELF", 1, 4);
		}
	}
	else if (!unk_0x36CEFBE9B745A58D((*iParam0)[1]))
	{
		func_4((*iParam0)[1], "GAME_WIN_SELF", 0, 4);
	}
}

void func_230(int iParam0, int iParam1)//Position - 0x14D3E
{
	int iVar0;
	
	iVar0 = unk_0x491B2241281A03B7(0, 100);
	if (iVar0 < 30)
	{
		if (!unk_0x36CEFBE9B745A58D((*iParam0)[0]))
		{
			func_4((*iParam0)[0], "DARTS_LOSE", 1, 4);
		}
	}
	else if (iVar0 < 50)
	{
		if (!unk_0x36CEFBE9B745A58D((*iParam0)[1]))
		{
			func_4((*iParam0)[1], "DARTS_WIN", 0, 4);
		}
	}
	else if (iVar0 < 75 && iParam1)
	{
		if (!unk_0x36CEFBE9B745A58D((*iParam0)[1]))
		{
			func_4((*iParam0)[1], "DARTS_LOSING_BADLY", 0, 4);
		}
	}
	else if (iVar0 < 88)
	{
		if (!unk_0x36CEFBE9B745A58D((*iParam0)[0]))
		{
			func_4((*iParam0)[0], "GAME_WIN_SELF", 1, 4);
		}
	}
	else if (!unk_0x36CEFBE9B745A58D((*iParam0)[1]))
	{
		func_4((*iParam0)[1], "GAME_LOSE_SELF", 0, 4);
	}
}

int func_231()//Position - 0x14E0B
{
	int iVar0;
	
	if (!bLocal_187)
	{
		iVar0 = (unk_0x491B2241281A03B7(0, 65535) % 3);
	}
	else
	{
		iLocal_201++;
		iVar0 = (iLocal_201 % 2);
	}
	return iVar0;
}

void func_232(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x14E3B
{
	char* sVar0;
	
	sVar0 = func_233(iParam4);
	if (iParam4 != 5)
	{
		unk_0x29CD142125FE177B(*uParam0, "RESET_MOVIE");
		unk_0xF9FBC2F3F73D94C9();
	}
	unk_0x29CD142125FE177B(*uParam0, sVar0);
	unk_0x57016C44F10111F0("STRING");
	unk_0xC9C304D0AABE1335(sParam1);
	unk_0x64989E60CF560CA1();
	func_12(sParam2);
	unk_0xF9FBC2F3F73D94C9();
	func_425(&(uParam0->f_2));
	uParam0->f_1 = iParam3;
	uParam0->f_9 = iParam5;
}

char* func_233(int iParam0)//Position - 0x14E9B
{
	switch (iParam0)
	{
		case 0:
			return "SHOW_SHARD_CENTERED_MP_MESSAGE";
		
		case 1:
			return "SHOW_SHARD_CENTERED_TOP_MP_MESSAGE";
		
		case 2:
			return "SHOW_SHARD_WASTED_MP_MESSAGE";
		
		case 3:
			return "SHOW_SHARD_RANKUP_MP_MESSAGE";
		
		case 4:
			return "SHOW_SHARD_CREW_RANKUP_MP_MESSAGE";
		
		case 5:
			if (unk_0x7AF0088ABFA713B6())
			{
				return "SHOW_COND_SHARD_MESSAGE";
			}
			return "SHOW_SHARD_MIDSIZED_MESSAGE";
		
		default:
	}
	return "SHOW_SHARD_CENTERED_MP_MESSAGE";
}

void func_234(var uParam0, int iParam1)//Position - 0x14F0A
{
	unk_0x29CD142125FE177B(*uParam0, "CLEAR_SCORES");
	unk_0x1E1FB49121565EB6(iParam1);
	unk_0xF9FBC2F3F73D94C9();
}

int func_235(int iParam0)//Position - 0x14F28
{
	iParam0->f_2 = { 0f, -2.3685f, -0.2f };
	iParam0->f_5 = { 0f, 0f, 0f };
	iParam0->f_8 = { 0f, 0f, 0f };
	iParam0->f_14 = 0;
	iParam0->f_17 = 0;
	iParam0->f_18 = 0;
	iParam0->f_19 = 0;
	if (unk_0x724D816EA203A79E(*iParam0))
	{
		unk_0xA35241BCE4C1A24B(iParam0);
	}
	return 1;
}

void func_236(int iParam0)//Position - 0x14F78
{
	unk_0xAE099C1ADC89C331(iLocal_77, iLocal_75, 1500, 1, 1);
	unk_0x348665177DBFB93B(iLocal_78, true);
	unk_0xAE099C1ADC89C331(iLocal_77, iLocal_78, 8000, 1, 1);
	unk_0x5BB58B645F7051F4(iLocal_80, iParam0, -0.0301f, 1.498f, 0.7435f, 1);
	unk_0xA65BD9EDFDFA4D71(iLocal_80, iParam0, 0.0557f, -1.4905f, 0.4958f, 1);
	unk_0x9DF315A9EFFF87AC(iLocal_80, 35f);
}

void func_237(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)//Position - 0x14FDC
{
	bool bVar0;
	
	if (!unk_0x16BE1286447174A9(iLocal_75))
	{
		bVar0 = false;
		func_318(uParam0);
		if (!bLocal_179)
		{
			if (uParam0->f_1 == 5)
			{
				if (uParam3->f_2A0)
				{
					unk_0x7456702622C62EA0(1);
					uParam3->f_2A0 = 0;
				}
			}
			else if (!bLocal_107)
			{
				if (func_3(&(uParam3->f_29A), 18))
				{
					if (!func_3(&(uParam3->f_29A), 21))
					{
						if (!unk_0xFA30DFD0084E92FE(Global_19ADD, 3))
						{
							func_409("DARTS_INSTR_W", -1);
							unk_0xF0059F27F7BB6680(&Global_19ADD, 3);
						}
						func_322(&(uParam3->f_29A), 21, 1);
					}
					else if (!func_3(&(uParam3->f_29A), 20) && func_3(&(uParam3->f_29A), 19))
					{
						if (!unk_0xFA30DFD0084E92FE(Global_19ADD, 4))
						{
							func_409("DARTS_INSTR_B", -1);
							unk_0xF0059F27F7BB6680(&Global_19ADD, 4);
						}
						func_322(&(uParam3->f_29A), 20, 1);
					}
				}
				uParam3->f_2A0 = 1;
			}
			else if (uParam3->f_2A0)
			{
				unk_0x7456702622C62EA0(1);
				uParam3->f_2A0 = 0;
			}
		}
		if (uParam0->f_1 == 1)
		{
			if (!unk_0x16BE1286447174A9(iLocal_84) && uParam0->f_3 == 2)
			{
				func_317(uParam3);
			}
		}
		else
		{
			func_315(uParam3, iLocal_30);
		}
		func_314(&(uParam0->f_1));
	}
	else
	{
		bVar0 = true;
	}
	func_311(uParam3);
	switch (uParam0->f_1)
	{
		case 1:
			if (!func_303(&(uParam0->f_3)))
			{
				uParam0->f_1 = 2;
			}
			break;
		
		case 0:
			if (func_296(uParam0->f_1A6[iLocal_30], &(uParam0->f_F3), &(uParam0->f_4), &(uParam0->f_1CD)))
			{
				uParam0->f_1 = 2;
			}
			break;
		
		case 2:
			if (unk_0x8FCEEB789599BD9B(2, 228) && iLocal_30 == 0)
			{
				uParam0->f_1 = 1;
			}
			if (iLocal_30 == 0)
			{
				func_295(iLocal_31, 0);
				if (((((!func_294("DARTS_SHT_USE") && !func_294("DARTS_INSTR_W")) && !func_294("DARTS_INSTR_B")) && !func_294("DARTS_AIM_HLP")) && !func_294("DARTS_STD_HLP")) && !func_294("DARTS_FST_HLP"))
				{
					if (func_3(&(uParam3->f_29A), 24))
					{
						func_409("DARTS_LEVEL", -1);
						unk_0xF0059F27F7BB6680(&(Global_19B04.f_49FD.f_6), iLocal_199);
						func_322(&(uParam3->f_29A), 24, 0);
					}
				}
				if ((((uParam0->f_1A6[iLocal_30] % 2) == 0 && uParam0->f_1A6[iLocal_30] < 41) && iLocal_31 == 0) && !iLocal_177)
				{
					if (!func_3(&(uParam3->f_29A), 6))
					{
						func_322(&(uParam3->f_29A), 6, 1);
					}
					iLocal_177 = 1;
				}
				else if (uParam0->f_1A6[iLocal_30] == 50 && !iLocal_177)
				{
					if (!func_3(&(uParam3->f_29A), 6))
					{
						func_322(&(uParam3->f_29A), 6, 1);
					}
					iLocal_177 = 1;
				}
				else if (func_284(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_F3), uParam1, bVar0, 0, 0, uParam0->f_F8))
				{
					unk_0xEB233A3B7635D2AC();
					uParam3->f_29E = (uParam3->f_29E - 1);
					uParam0->f_1 = 3;
				}
				else if (!iLocal_174)
				{
					if (!func_411(iParam4))
					{
						func_282(iParam4);
					}
					else if (func_7(iParam4) > 20f)
					{
						func_281(iLocal_170[(1 - iLocal_30)]);
						func_412(iParam4);
						iLocal_174 = 1;
					}
				}
			}
			else if (iLocal_31 == 0)
			{
				iLocal_197 = 0;
				func_280(&(uParam0->f_1A6), &(uParam0->f_F9));
				func_277(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_F3), &(uParam0->f_1), &(uParam0->f_F9), 0);
			}
			else if (SYSTEM::TIMERA() > unk_0x491B2241281A03B7(1250, 2500))
			{
				func_280(&(uParam0->f_1A6), &(uParam0->f_F9));
				func_277(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_F3), &(uParam0->f_1), &(uParam0->f_F9), 0);
			}
			break;
		
		case 3:
			if (func_264(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_F3), uParam0->f_F8, 0))
			{
				uParam0->f_1B4++;
				uParam0->f_1C7 = func_263(uParam0);
				uParam0->f_1 = 4;
			}
			break;
		
		case 4:
			if (!func_3(&(uParam3->f_29A), 5))
			{
				func_261(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_F3), uParam0->f_1C7);
			}
			func_246(uParam0, uParam3);
			break;
		
		case 5:
			func_239(uParam0, uParam2, uParam3);
			if (func_411(iParam4))
			{
				func_412(iParam4);
			}
			break;
		
		case 6:
			func_238(uParam0, uParam3);
			break;
	}
}

void func_238(var uParam0, var uParam1)//Position - 0x1543C
{
	vector3 vVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	
	iLocal_197++;
	iLocal_30 = 1;
	iLocal_31 = 0;
	iLocal_181 = 1;
	while (iLocal_31 < 3 && uParam0->f_1 == 6)
	{
		if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_17)
		{
			if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_19)
			{
				iLocal_31++;
			}
			else
			{
				func_261(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_F3), 0);
				func_246(uParam0, uParam1);
			}
		}
		else if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_18)
		{
			if (bLocal_180)
			{
				if (unk_0x724D816EA203A79E(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]))
				{
					unk_0xA35241BCE4C1A24B(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]));
				}
			}
			else
			{
				uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_17 = 1;
				uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_18 = 0;
				vVar0 = { unk_0x89D97EB4FAE4A574(uParam0->f_F3.f_1, uParam0->f_F3.f_4, uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_B, (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_B.f_1 + fLocal_34), uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_B.f_2) };
				if (unk_0x724D816EA203A79E(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]))
				{
					unk_0x641B19E156645A92(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/], vVar0, 1, 0, 0, 1);
				}
			}
			func_261(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_F3), 0);
			func_246(uParam0, uParam1);
			if (bLocal_180)
			{
				if (iLocal_182)
				{
					uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/] = unk_0xB6896943DA475493(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_1, vLocal_40, true, true, 0);
					vVar0 = { unk_0x89D97EB4FAE4A574(uParam0->f_F3.f_1, uParam0->f_F3.f_4, uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_B, (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_B.f_1 + fLocal_34), uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_B.f_2) };
					unk_0x641B19E156645A92(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/], vVar0, 1, 0, 0, 1);
					fVar1 = unk_0x55AEFCD285ECC0F2(0f, 90f);
					uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11 = { 90f, fVar1, uParam0->f_F3.f_4 };
					unk_0x784C605D172817C8(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/], uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11, 0, 1);
					uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_17 = 1;
					uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_18 = 0;
				}
			}
		}
		else
		{
			func_280(&(uParam0->f_1A6), &(uParam0->f_F9));
			func_277(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_F3), &(uParam0->f_1), &(uParam0->f_F9), 0);
			uParam0->f_1B4++;
			func_261(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_F3), 0);
			if ((uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_15 == 2 || uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_14 == 50) && uParam0->f_1A6[iLocal_30] == 0)
			{
				if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_14 == 50)
				{
					uParam0->f_1B0[iLocal_30]++;
				}
				func_322(&(uParam1->f_29A), 2, 0);
				func_322(&(uParam1->f_29A), 3, 0);
				func_322(&(uParam1->f_29A), 4, 0);
				func_322(&(uParam1->f_29A), 5, 1);
				SYSTEM::SETTIMERB(0);
			}
			func_246(uParam0, uParam1);
			if (bLocal_180)
			{
				if (iLocal_182)
				{
					iVar2 = 0;
					while (iVar2 < iLocal_31 + 1)
					{
						if (!uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_17)
						{
							uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/] = unk_0xB6896943DA475493(uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_1, vLocal_40, true, true, 0);
							vVar0 = { unk_0x89D97EB4FAE4A574(uParam0->f_F3.f_1, uParam0->f_F3.f_4, uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_B, (uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_B.f_1 + fLocal_34), uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_B.f_2) };
							if (unk_0x724D816EA203A79E(uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/]))
							{
								unk_0x641B19E156645A92(uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/], vVar0, 1, 0, 0, 1);
							}
							fVar3 = unk_0x55AEFCD285ECC0F2(0f, 90f);
							uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_11 = { 90f, fVar3, uParam0->f_F3.f_4 };
							unk_0x784C605D172817C8(uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/], uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_11, 0, 1);
							uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_17 = 1;
							uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_18 = 0;
						}
						iVar2++;
					}
				}
			}
		}
	}
	uParam0->f_1 = 5;
	if (iLocal_197 > 2)
	{
		uParam0->f_1 = 5;
	}
}

void func_239(var uParam0, var uParam1, var uParam2)//Position - 0x158C5
{
	vector3 vVar0;
	int iVar1;
	
	switch (uParam0->f_2)
	{
		case 0:
			if (uParam0->f_F8 == 1)
			{
				func_245();
			}
			if (iLocal_30 == 0)
			{
				if (func_3(&(uParam2->f_29A), 3))
				{
					func_244("DARTS_PLR_DUB", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_14, 5000, 0);
				}
				else if (func_3(&(uParam2->f_29A), 4))
				{
					func_243("DARTS_ONE_PT", 5000, 0);
				}
				else if (func_3(&(uParam2->f_29A), 2))
				{
					func_244("DARTS_PLR_BUST", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_14, 5000, 0);
				}
				else
				{
					func_244("DARTS_SWITCH_C", uParam0->f_1A6[iLocal_30], 5000, 0);
				}
			}
			else if (func_3(&(uParam2->f_29A), 3))
			{
				func_244("DARTS_OPP_DUB", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_14, 5000, 0);
			}
			else if (func_3(&(uParam2->f_29A), 4))
			{
				func_243("DARTS_ONE_PT", 5000, 0);
			}
			else if (func_3(&(uParam2->f_29A), 2))
			{
				func_244("DARTS_OPP_BUST", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_14, 5000, 0);
			}
			else
			{
				func_244("DARTS_SWITCH_B", uParam0->f_1A6[iLocal_30], 5000, 0);
			}
			SYSTEM::SETTIMERB(0);
			uParam0->f_2 = 2;
			break;
		
		case 1:
			if (unk_0x694514BD37EC4E94(2, 190))
			{
				iLocal_195++;
				if (iLocal_195 >= uParam0->f_1B4)
				{
					iLocal_195 = 0;
				}
				vVar0 = { unk_0x541C2AEF053615BC(uParam0->f_5[iLocal_30 /*79*/][iLocal_195 /*26*/], true) };
				func_49(vVar0);
			}
			if (unk_0x694514BD37EC4E94(2, 189))
			{
				iLocal_195 = (iLocal_195 - 1);
				if (iLocal_195 < 0)
				{
					iLocal_195 = (uParam0->f_1B4 - 1);
				}
				vVar0 = { unk_0x541C2AEF053615BC(uParam0->f_5[iLocal_30 /*79*/][iLocal_195 /*26*/], true) };
				func_49(vVar0);
			}
			if (unk_0x694514BD37EC4E94(2, 202))
			{
				vVar0 = { unk_0x541C2AEF053615BC(uParam0->f_5[iLocal_30 /*79*/][iLocal_195 /*26*/], true) };
				func_51(vVar0, 0, 0);
				uParam0->f_2 = 2;
			}
			if (unk_0x694514BD37EC4E94(2, 201))
			{
				iLocal_171 = 1;
				uParam0->f_2 = 2;
			}
			break;
		
		case 2:
			if (unk_0x694514BD37EC4E94(2, 201) || (iLocal_181 && bLocal_180))
			{
				iLocal_171 = 1;
			}
			if ((unk_0x694514BD37EC4E94(2, 189) || unk_0x694514BD37EC4E94(2, 190)) && uParam0->f_F8 == 1)
			{
				vVar0 = { unk_0x541C2AEF053615BC(uParam0->f_5[iLocal_30 /*79*/][iLocal_195 /*26*/], true) };
				func_51(vVar0, 1, 0);
				uParam0->f_2 = 1;
			}
			if (!func_3(&(uParam2->f_29A), 6))
			{
				if (!iLocal_176)
				{
					if (func_242(iLocal_30 == 0, &(iLocal_170[1]), (uParam0->f_1A9[iLocal_30] - uParam0->f_1A6[iLocal_30]), uParam0->f_1A6[0], uParam0->f_1A6[1]))
					{
						iLocal_176 = 1;
					}
				}
				else if ((unk_0x105601648511CC64() % 500) < 50)
				{
				}
			}
			else if (!iLocal_176)
			{
				if (func_241(iLocal_30 == 0, &(iLocal_170[1]), (uParam0->f_1A9[iLocal_30] - uParam0->f_1A6[iLocal_30]), uParam0->f_1A6[0], uParam0->f_1A6[1]))
				{
					iLocal_176 = 1;
				}
			}
			else if ((unk_0x105601648511CC64() % 500) < 50)
			{
			}
			if (iLocal_171 || SYSTEM::TIMERB() > 2000)
			{
				iLocal_181 = 0;
				iVar1 = 0;
				while (iVar1 < 3)
				{
					func_235(&(uParam0->f_5[iLocal_30 /*79*/][iVar1 /*26*/]));
					iVar1++;
				}
				if (uParam0->f_1A9[iLocal_30] != uParam0->f_1A6[iLocal_30])
				{
					func_240(uParam1, iLocal_30, uParam0->f_1A6[iLocal_30]);
					unk_0x10B5C0C7337B8420(-1, "DARTS_SCOREBOARD_MASTER", uParam0->f_F3.f_1, 0, 0, 0, 0);
				}
				uParam0->f_1A9[iLocal_30] = uParam0->f_1A6[iLocal_30];
				iLocal_31 = 0;
				uParam0->f_1AC = 0;
				if (iLocal_30 == 0)
				{
					iLocal_30 = 1;
				}
				else
				{
					iLocal_30 = 0;
				}
				func_424(uParam1, iLocal_30);
				iLocal_54 = 0;
				func_404();
				if (!bLocal_180)
				{
					unk_0xA0E8D942C29EF5DA();
				}
				iLocal_48 = 0;
				uParam2->f_29E = 3;
				iLocal_177 = 0;
				iLocal_174 = 0;
				iLocal_176 = 0;
				iLocal_171 = 0;
				iLocal_195 = 0;
				uParam0->f_1B4 = 0;
				uParam0->f_1 = 2;
				uParam0->f_2 = 0;
			}
			break;
	}
}

void func_240(var uParam0, int iParam1, int iParam2)//Position - 0x15CDE
{
	unk_0x29CD142125FE177B(*uParam0, "ADD_DARTS_SCORE");
	unk_0x1E1FB49121565EB6(iParam1);
	unk_0x1E1FB49121565EB6(iParam2);
	unk_0xF9FBC2F3F73D94C9();
}

int func_241(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4)//Position - 0x15D02
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam0)
	{
		if ((iParam2 > 30 && bParam0) || iParam3 < 20)
		{
			unk_0xF0059F27F7BB6680(&iVar0, 0);
		}
		if ((iParam2 <= 30 && bParam0) || iParam3 >= 20)
		{
			unk_0xF0059F27F7BB6680(&iVar0, 2);
		}
	}
	else
	{
		if ((iParam2 > 20 && !bParam0) || iParam4 < 30)
		{
			unk_0xF0059F27F7BB6680(&iVar0, 1);
		}
		if ((iParam2 <= 20 && !bParam0) || iParam4 >= 30)
		{
			unk_0xF0059F27F7BB6680(&iVar0, 3);
		}
	}
	iVar1 = unk_0x491B2241281A03B7(0, 100);
	iVar2 = unk_0x491B2241281A03B7(0, 100);
	if (iVar2 < 85)
	{
		if (unk_0xFA30DFD0084E92FE(iVar0, 0))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0xBC25C936A095B5BA(), "GAME_GOOD_SELF", 1, 4);
			}
			else if (iVar1 < 75)
			{
				func_4(*uParam1, "DARTS_PLAYING_WELL", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_GOOD_OTHER", 0, 4);
			}
			return 1;
		}
		else if (unk_0xFA30DFD0084E92FE(iVar0, 2))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0xBC25C936A095B5BA(), "GAME_BAD_SELF", 1, 4);
			}
			else if (iVar1 < 68)
			{
				func_4(*uParam1, "DARTS_PLAYING_POORLY", 0, 4);
			}
			else if (iVar1 < 86)
			{
				func_4(*uParam1, "GAME_BAD_OTHER", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_HECKLE", 0, 4);
			}
			return 1;
		}
		else if (unk_0xFA30DFD0084E92FE(iVar0, 1))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0xBC25C936A095B5BA(), "GAME_GOOD_OTHER", 1, 4);
			}
			else if (iVar1 < 75)
			{
				func_4(*uParam1, "DARTS_HAPPY", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_GOOD_SELF", 0, 4);
			}
			return 1;
		}
		else if (unk_0xFA30DFD0084E92FE(iVar0, 3))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0xBC25C936A095B5BA(), "GAME_BAD_OTHER", 1, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_BAD_SELF", 0, 4);
			}
			return 1;
		}
	}
	return 0;
}

int func_242(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4)//Position - 0x15EFF
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam0)
	{
		if ((iParam2 > 100 && bParam0) || (iParam4 - iParam3) > 75)
		{
			unk_0xF0059F27F7BB6680(&iVar0, 0);
		}
		if ((iParam2 < 70 && bParam0) || (iParam3 - iParam4) < 50)
		{
			unk_0xF0059F27F7BB6680(&iVar0, 2);
		}
	}
	else
	{
		if ((iParam2 > 75 && !bParam0) || (iParam3 - iParam4) > 50)
		{
			unk_0xF0059F27F7BB6680(&iVar0, 1);
		}
		if ((iParam2 < 40 && !bParam0) || (iParam4 - iParam3) < 30)
		{
			unk_0xF0059F27F7BB6680(&iVar0, 3);
		}
	}
	iVar1 = unk_0x491B2241281A03B7(0, 100);
	iVar2 = unk_0x491B2241281A03B7(0, 100);
	if (iVar2 < 75)
	{
		if (unk_0xFA30DFD0084E92FE(iVar0, 0))
		{
			if (iVar1 < 35)
			{
				func_4(unk_0xBC25C936A095B5BA(), "DARTS_HAPPY", 1, 4);
			}
			else if (iVar1 < 70)
			{
				func_4(*uParam1, "DARTS_PLAYING_WELL", 0, 4);
			}
			else if (iVar1 < 85)
			{
				func_4(unk_0xBC25C936A095B5BA(), "GAME_GOOD_SELF", 1, 4);
			}
			else
			{
				func_4(*uParam1, "GAME_GOOD_OTHER", 0, 4);
			}
			return 1;
		}
		else if (unk_0xFA30DFD0084E92FE(iVar0, 2))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0xBC25C936A095B5BA(), "GAME_BAD_SELF", 1, 4);
			}
			else if (iVar1 < 68 && !unk_0x724D816EA203A79E(func_487()))
			{
				func_4(*uParam1, "DARTS_PLAYING_POORLY", 0, 4);
			}
			else if (iVar1 < 86)
			{
				func_4(*uParam1, "GAME_BAD_OTHER", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_HECKLE", 0, 4);
			}
			return 1;
		}
		else if (unk_0xFA30DFD0084E92FE(iVar0, 1))
		{
			if (iVar1 < 40)
			{
				func_4(unk_0xBC25C936A095B5BA(), "DARTS_PLAYING_WELL", 1, 4);
			}
			else if (iVar1 < 60)
			{
				func_4(unk_0xBC25C936A095B5BA(), "GAME_GOOD_OTHER", 1, 4);
			}
			else if (iVar1 < 80)
			{
				func_4(*uParam1, "DARTS_HAPPY", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_GOOD_SELF", 0, 4);
			}
			return 1;
		}
		else if (unk_0xFA30DFD0084E92FE(iVar0, 3))
		{
			if (iVar1 < 33)
			{
				func_4(unk_0xBC25C936A095B5BA(), "GAME_BAD_OTHER", 1, 4);
			}
			else if (iVar1 < 66)
			{
				func_4(*uParam1, "GAME_BAD_SELF", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(unk_0xBC25C936A095B5BA(), "GAME_HECKLE", 1, 4);
			}
			return 1;
		}
	}
	return 0;
}

void func_243(char* sParam0, int iParam1, int iParam2)//Position - 0x16158
{
	iParam2 = iParam2;
	unk_0x3714DE83381EADC2(sParam0);
	unk_0x41D8F63F629E76BE(iParam1, 1);
}

void func_244(char* sParam0, int iParam1, int iParam2, int iParam3)//Position - 0x16171
{
	iParam3 = iParam3;
	unk_0x3714DE83381EADC2(sParam0);
	unk_0xAA5C5BF0489E5553(iParam1);
	unk_0x41D8F63F629E76BE(iParam2, 1);
}

void func_245()//Position - 0x16190
{
	unk_0x348665177DBFB93B(iLocal_84, true);
	unk_0x348665177DBFB93B(iLocal_75, false);
}

void func_246(var uParam0, var uParam1)//Position - 0x161A6
{
	uParam0->f_1C7 = 0;
	if (!func_3(&(uParam1->f_29A), 5))
	{
		uParam0->f_1A6[iLocal_30] = (uParam0->f_1A6[iLocal_30] - uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_14);
		uParam0->f_1AC = (uParam0->f_1AC + uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_14);
	}
	if (func_3(&(uParam1->f_29A), 5))
	{
		func_258(uParam0);
		func_322(&(uParam1->f_29A), 5, 0);
	}
	else
	{
		uParam0->f_1AD[iLocal_30]++;
		if (iLocal_30 == 0)
		{
			func_256(4);
			iLocal_106[10]++;
		}
		if ((uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_15 == 2 || uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_14 == 50) && uParam0->f_1A6[iLocal_30] == 0)
		{
			if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_14 == 50)
			{
				uParam0->f_1B0[iLocal_30]++;
				if (iLocal_30 == 0)
				{
					func_256(0);
					iLocal_106[1]++;
				}
			}
			func_322(&(uParam1->f_29A), 2, 0);
			func_322(&(uParam1->f_29A), 3, 0);
			func_322(&(uParam1->f_29A), 4, 0);
			func_322(&(uParam1->f_29A), 5, 1);
			func_258(uParam0);
			func_322(&(uParam1->f_29A), 5, 0);
			SYSTEM::SETTIMERB(0);
		}
		else if ((uParam0->f_1A6[iLocal_30] == 1 || uParam0->f_1A6[iLocal_30] < 0) || (uParam0->f_1A6[iLocal_30] == 0 && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_15 != 2))
		{
			if (uParam0->f_1A6[iLocal_30] == 0 && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_15 != 2)
			{
				func_244("DARTS_PLR_DUB", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_14, 5000, 0);
				func_322(&(uParam1->f_29A), 3, 1);
			}
			else if (uParam0->f_1A6[iLocal_30] == 1)
			{
				func_322(&(uParam1->f_29A), 4, 1);
			}
			else if (iLocal_30 == 1)
			{
				func_244("DARTS_OPP_BUST", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_14, 5000, 0);
			}
			else
			{
				func_244("DARTS_PLR_BUST", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_14, 5000, 0);
			}
			if (!iLocal_176)
			{
				if (func_255(iLocal_170[(1 - iLocal_30)]))
				{
					iLocal_176 = 1;
				}
			}
			uParam0->f_1A6[iLocal_30] = uParam0->f_1A9[iLocal_30];
			if (uParam0->f_1 == 6)
			{
			}
			SYSTEM::SETTIMERA(0);
			uParam0->f_1 = 5;
			if (iLocal_30 == 0)
			{
				uParam0->f_1B3++;
			}
			func_322(&(uParam1->f_29A), 2, 1);
		}
		else
		{
			if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_14 == 50)
			{
				uParam0->f_1B0[iLocal_30]++;
				if (iLocal_30 == 0)
				{
					func_254(uParam1, 1);
					func_256(0);
					iLocal_106[1]++;
				}
				if (!iLocal_176 && !iLocal_181)
				{
					if (func_253(iLocal_170[iLocal_30]))
					{
						iLocal_176 = 1;
					}
				}
			}
			if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_14 == 0)
			{
				if (!iLocal_176 && !iLocal_181)
				{
					func_252(iLocal_170[(1 - iLocal_30)]);
					iLocal_176 = 1;
				}
			}
			if (uParam0->f_1AC == 180)
			{
				if (!iLocal_176 && !iLocal_181)
				{
					if (func_251(iLocal_170[1], iLocal_30 == 0))
					{
						iLocal_176 = 1;
					}
				}
				if (iLocal_30 == 0)
				{
					func_254(uParam1, 0);
					func_256(1);
					iLocal_106[2]++;
				}
			}
			if (uParam0->f_1AC == 140)
			{
				if (!iLocal_176 && !iLocal_181)
				{
					if (func_249(iLocal_170[iLocal_30], iLocal_30 == 0))
					{
						iLocal_176 = 1;
					}
				}
			}
			if (iLocal_30 == 0)
			{
				if (iLocal_31 < 2)
				{
					if (uParam0->f_1A6[iLocal_30] <= 170 && !func_3(&(uParam1->f_29A), 18))
					{
						func_322(&(uParam1->f_29A), 18, 1);
					}
					if (!func_3(&(uParam1->f_29A), 19) && func_3(&(uParam1->f_29A), 21))
					{
						func_322(&(uParam1->f_29A), 19, 1);
					}
					if (((uParam0->f_1A6[iLocal_30] < 41 && uParam0->f_1A6[iLocal_30] > 0) && (uParam0->f_1A6[iLocal_30] % 2) == 0) || uParam0->f_1A6[iLocal_30] == 50)
					{
						if (uParam0->f_1A6[iLocal_30] == 50)
						{
						}
						if (!iLocal_175)
						{
							func_248(iLocal_170[1]);
							iLocal_175 = 1;
						}
						if (!uParam0->f_1C8)
						{
							uParam0->f_1C8 = 1;
						}
						if (!func_3(&(uParam1->f_29A), 6))
						{
							func_322(&(uParam1->f_29A), 6, 1);
						}
					}
					else if (uParam0->f_1C8)
					{
						uParam0->f_1C8 = 0;
					}
				}
			}
			if (iLocal_30 == 0 && iLocal_31 < 2)
			{
				func_247("DARTS_REMAIN", (uParam0->f_1A9[iLocal_30] - uParam0->f_1A6[iLocal_30]), uParam0->f_1A6[iLocal_30], 7500, 0);
			}
			else if (iLocal_30 == 1 && iLocal_31 == 2)
			{
			}
			else if (uParam0->f_1 != 6)
			{
				func_314(&(uParam0->f_1));
			}
			uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_19 = 1;
			iLocal_31++;
			SYSTEM::SETTIMERA(0);
			if (uParam0->f_1 != 6)
			{
				if (uParam0->f_1C8 && uParam0->f_F8 == 1)
				{
					uParam0->f_1 = 0;
				}
				else
				{
					uParam0->f_1 = 2;
				}
			}
			if (iLocal_31 == 3)
			{
				iLocal_31 = 2;
				uParam0->f_1 = 5;
			}
			if (iLocal_30 == 0)
			{
				uParam0->f_1B3 = 0;
			}
			func_322(&(uParam1->f_29A), 3, 0);
			func_322(&(uParam1->f_29A), 2, 0);
			func_322(&(uParam1->f_29A), 4, 0);
		}
	}
}

void func_247(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x16743
{
	iParam4 = iParam4;
	unk_0x3714DE83381EADC2(sParam0);
	unk_0xAA5C5BF0489E5553(iParam1);
	unk_0xAA5C5BF0489E5553(iParam2);
	unk_0x41D8F63F629E76BE(iParam3, 1);
}

void func_248(int iParam0)//Position - 0x16768
{
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		func_4(iParam0, "DARTS_1_DART_AWAY", 0, 4);
	}
}

int func_249(int iParam0, bool bParam1)//Position - 0x16786
{
	int iVar0;
	
	iVar0 = unk_0x491B2241281A03B7(0, 100);
	if (iVar0 < 75)
	{
		if (unk_0x724D816EA203A79E(func_487()))
		{
			if (bParam1)
			{
				func_4(unk_0xBC25C936A095B5BA(), "DARTS_140", 1, 4);
			}
			else
			{
				func_4(func_487(), "DARTS_140", 0, 4);
			}
			return 1;
		}
		else if (bParam1)
		{
			if (func_250())
			{
				func_4(unk_0xBC25C936A095B5BA(), "DARTS_140", 1, 4);
			}
			else
			{
				func_4(iParam0, "DARTS_140", 0, 4);
			}
			return 1;
		}
	}
	return 0;
}

int func_250()//Position - 0x16805
{
	if (unk_0xFA30DFD0084E92FE(unk_0x491B2241281A03B7(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_251(int iParam0, bool bParam1)//Position - 0x16826
{
	int iVar0;
	
	iVar0 = unk_0x491B2241281A03B7(0, 100);
	if (iVar0 < 75)
	{
		if (unk_0x724D816EA203A79E(func_487()))
		{
			if (bParam1)
			{
				func_4(unk_0xBC25C936A095B5BA(), "DARTS_180", 1, 4);
			}
			else
			{
				func_4(func_487(), "DARTS_180", 0, 4);
			}
			return 1;
		}
		else if (bParam1)
		{
			if (func_250())
			{
				func_4(unk_0xBC25C936A095B5BA(), "DARTS_180", 1, 4);
			}
			else
			{
				func_4(iParam0, "DARTS_180", 0, 4);
			}
			return 1;
		}
	}
	return 0;
}

int func_252(int iParam0)//Position - 0x168A5
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x491B2241281A03B7(0, 100);
	if (iVar0 < 75)
	{
		if (iParam0 == unk_0xBC25C936A095B5BA())
		{
			iVar1 = 1;
		}
		if (!unk_0x36CEFBE9B745A58D(iParam0))
		{
			func_4(iParam0, "DARTS_MISS_BOARD", iVar1, 4);
		}
		return 1;
	}
	return 0;
}

int func_253(int iParam0)//Position - 0x168E8
{
	int iVar0;
	
	iVar0 = unk_0x491B2241281A03B7(0, 100);
	if (iVar0 < 100)
	{
		func_4(iParam0, "DARTS_BULLSEYE", 0, 4);
		return 1;
	}
	return 0;
}

void func_254(var uParam0, int iParam1)//Position - 0x16914
{
	uParam0->f_2A7 = 1;
	uParam0->f_2AA = iParam1;
}

int func_255(int iParam0)//Position - 0x16929
{
	int iVar0;
	
	if (iParam0 == unk_0xBC25C936A095B5BA())
	{
		iVar0 = 1;
	}
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		func_4(iParam0, "DARTS_BUST", iVar0, 4);
	}
	return 1;
}

void func_256(int iParam0)//Position - 0x16955
{
	switch (iParam0)
	{
		case 0:
			Global_19B04.f_49FD++;
			func_257("DARTS_STAT_NUM_BULLSEYES", Global_19B04.f_49FD);
			break;
		
		case 1:
			Global_19B04.f_49FD.f_1++;
			func_257("DARTS_STAT_NUM_180S", Global_19B04.f_49FD.f_1);
			break;
		
		case 2:
			Global_19B04.f_49FD.f_2++;
			func_257("DARTS_STAT_NUM_WINS", Global_19B04.f_49FD.f_2);
			break;
		
		case 3:
			Global_19B04.f_49FD.f_3++;
			func_257("DARTS_STAT_NUM_LOSS", Global_19B04.f_49FD.f_3);
			break;
		
		case 4:
			Global_19B04.f_49FD.f_4++;
			func_257("DARTS_STAT_DARTS_THROWN", Global_19B04.f_49FD.f_4);
			break;
		
		case 5:
			Global_19B04.f_49FD.f_5++;
			func_257("DARTS_STAT_NUM_GAMES", Global_19B04.f_49FD.f_5);
			break;
		
		case 7:
			Global_19B04.f_49FD.f_7 = (SYSTEM::TO_FLOAT(Global_19B04.f_49FD.f_2) / SYSTEM::TO_FLOAT(Global_19B04.f_49FD.f_5));
			break;
		
		case 8:
			Global_19B04.f_49FD.f_8 = (SYSTEM::TO_FLOAT(Global_19B04.f_49FD.f_4) / SYSTEM::TO_FLOAT(Global_19B04.f_49FD.f_5));
			break;
	}
}

void func_257(char* sParam0, var uParam1)//Position - 0x16ACC
{
}

void func_258(var uParam0)//Position - 0x16AD4
{
	if (!uParam0->f_1CC)
	{
		uParam0->f_1CC = 1;
	}
	func_256(5);
	unk_0xA0E8D942C29EF5DA();
	unk_0x7456702622C62EA0(1);
	if (unk_0x144E80F5C46A6B75(func_405(2)))
	{
		unk_0xC1300D0F3A74E20B(func_405(2));
	}
	if (uParam0->f_F8 == 1)
	{
		func_245();
	}
	if (iLocal_30 == 0)
	{
		uParam0->f_1C6 = 1;
		iLocal_185 = 1;
		uParam0->f_1BE[iLocal_30]++;
		uParam0->f_1B5[iLocal_30]++;
		func_256(2);
		iLocal_106[8]++;
	}
	else
	{
		uParam0->f_1C6 = 0;
		uParam0->f_1BE[iLocal_30]++;
		uParam0->f_1B5[iLocal_30]++;
		func_256(3);
		iLocal_106[9]++;
	}
	func_256(7);
	func_425(&(uParam0->f_FE));
	if (func_260(uParam0))
	{
		uParam0->f_1C1[0] = 0;
		uParam0->f_1C1[1] = 0;
		uParam0->f_1BE[0] = 0;
		uParam0->f_1BE[1] = 0;
		uParam0->f_1BB[iLocal_30]++;
		if (!uParam0->f_1CA)
		{
			if (uParam0->f_1C6)
			{
				func_259(1);
			}
			uParam0->f_1CA = 1;
		}
		if (uParam0->f_1C6)
		{
			iLocal_106[3]++;
			iLocal_203 = 0;
		}
		else
		{
			iLocal_106[5]++;
			iLocal_203 = 3;
		}
		*uParam0 = 12;
	}
	else
	{
		*uParam0 = 11;
	}
	uParam0->f_1 = 2;
	unk_0xD6423910AAD8A379(func_405(3));
	iLocal_182 = 1;
	uParam0->f_1AC = 0;
	iLocal_54 = 0;
	uParam0->f_1A9[0] = 301;
	uParam0->f_1A9[1] = 301;
}

void func_259(bool bParam0)//Position - 0x16C7D
{
	char* sVar0;
	
	unk_0xCB8EEC006EBFC1E7(0);
	switch (func_85())
	{
		case 0:
			if (bParam0)
			{
				sVar0 = "MICHAEL_SMALL_01";
			}
			else
			{
				sVar0 = "MICHAEL_BIG_01";
			}
			break;
		
		case 1:
			if (bParam0)
			{
				sVar0 = "FRANKLIN_SMALL_01";
			}
			else
			{
				sVar0 = "FRANKLIN_BIG_01";
			}
			break;
		
		case 2:
			if (bParam0)
			{
				sVar0 = "TREVOR_SMALL_01";
			}
			else
			{
				sVar0 = "TREVOR_BIG_01";
			}
			break;
	}
	unk_0xC432586F5C2E5AA5(sVar0);
}

int func_260(var uParam0)//Position - 0x16CF0
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_109(uParam0->f_1C6, 0, 1);
	switch (uParam0->f_1C4)
	{
		case 1:
			iVar1 = 1;
			break;
		
		case 3:
			iVar1 = 2;
			break;
		
		case 5:
			iVar1 = 3;
			break;
	}
	if (uParam0->f_1BE[iVar0] == iVar1)
	{
		uParam0->f_1C1[iVar0]++;
		uParam0->f_1B8[iVar0]++;
		uParam0->f_1BE[0] = 0;
		uParam0->f_1BE[1] = 0;
		uParam0->f_1CB = 1;
		if (iVar0 == 0)
		{
			iLocal_106[6]++;
		}
		if (uParam0->f_1C1[iVar0] == uParam0->f_1C5)
		{
			uParam0->f_1CB = 0;
			return 1;
		}
	}
	return 0;
}

void func_261(var uParam0, var uParam1, bool bParam2)//Position - 0x16DB2
{
	float fVar0;
	float fVar1;
	float fVar2;
	vector3 vVar3;
	int iVar4;
	int iVar5;
	
	vVar3 = { uParam0->f_8 };
	vVar3.x = (vVar3.x + 0.0041f);
	vVar3.z = (vVar3.z + 0.0002f);
	fVar1 = unk_0x77211CE25DED4FDB(0f, 1f, vVar3.x, vVar3.z);
	fVar0 = func_262(vVar3);
	uParam0->f_16 = fVar0;
	if (bParam2)
	{
		unk_0x10B5C0C7337B8420(-1, "DARTS_HIT_DART_MASTER", uParam1->f_1, 0, 0, 0, 0);
	}
	if (fVar0 < 0.009f)
	{
		unk_0x10B5C0C7337B8420(-1, "DARTS_HIT_BULLSEYE_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_14 = 50;
	}
	else if (fVar0 < 0.021f)
	{
		unk_0x10B5C0C7337B8420(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_14 = 25;
	}
	else if (fVar0 > 0.3f)
	{
		unk_0x10B5C0C7337B8420(-1, "DARTS_HIT_WALL_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_14 = 0;
	}
	else if (fVar0 >= 0.226f)
	{
		unk_0x10B5C0C7337B8420(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_14 = 0;
	}
	else
	{
		if (fVar0 > 0.1285f && fVar0 < 0.1405f)
		{
			uParam0->f_15 = 3;
			unk_0x10B5C0C7337B8420(-1, "DARTS_SCORE_TRIPLE_MASTER", uParam1->f_1, 0, 0, 0, 0);
		}
		else if (fVar0 > 0.2132f && fVar0 < 0.226f)
		{
			uParam0->f_15 = 2;
			unk_0x10B5C0C7337B8420(-1, "DARTS_SCORE_DOUBLE_MASTER", uParam1->f_1, 0, 0, 0, 0);
		}
		else
		{
			uParam0->f_15 = 1;
			unk_0x10B5C0C7337B8420(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
		}
		if (uParam0->f_8 < 0f)
		{
			fVar1 = (360f - fVar1);
		}
		fVar2 = 0f;
		iVar4 = 0;
		iVar4 = 0;
		while (iVar4 < 21)
		{
			if (fVar1 >= (fVar2 - 9f) && fVar1 < (fVar2 + 9f))
			{
				if ((fVar1 <= (fVar2 - 8.1f) && fVar1 >= (fVar2 - 9.9f)) || (fVar1 >= (fVar2 + 8.1f) && fVar1 <= (fVar2 + 9.9f)))
				{
					unk_0x10B5C0C7337B8420(-1, "DARTS_HIT_WIRE_MASTER", uParam1->f_1, 0, 0, 0, 0);
				}
				iVar5 = (iLocal_33[iVar4] * uParam0->f_15);
				uParam0->f_14 = iVar5;
			}
			fVar2 = (fVar2 + 18f);
			iVar4++;
		}
	}
}

float func_262(vector3 vParam0)//Position - 0x16FE6
{
	return SYSTEM::SQRT(((vParam0.x * vParam0.x) + (vParam0.z * vParam0.z)));
}

int func_263(var uParam0)//Position - 0x17001
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_31)
	{
		if (((uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_8 > (uParam0->f_5[iLocal_30 /*79*/][iVar0 /*26*/].f_8 - 0.008f) && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_8 < (uParam0->f_5[iLocal_30 /*79*/][iVar0 /*26*/].f_8 + 0.008f)) && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_8.f_2 > (uParam0->f_5[iLocal_30 /*79*/][iVar0 /*26*/].f_8.f_2 - 0.008f)) && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_8.f_2 < (uParam0->f_5[iLocal_30 /*79*/][iVar0 /*26*/].f_8.f_2 + 0.008f))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_264(var uParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x170C7
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if (iLocal_30 == 0 && iParam2 == 1)
	{
		func_265("Darts", "Dart_Reticules", &Local_39, 1, 0, 4, 0);
	}
	fVar2 = unk_0x11F9F9006143871A();
	vVar1 = { uParam0->f_5 * Vector(fVar2, fVar2, fVar2) * Vector(8.5f, 8.5f, 8.5f) };
	uParam0->f_2 = { uParam0->f_2 - vVar1 };
	if (uParam0->f_2.f_1 > (uParam0->f_8.f_1 - 0.04f))
	{
		uParam0->f_17 = 1;
		uParam0->f_18 = 0;
		vVar0 = { unk_0x89D97EB4FAE4A574(uParam1->f_1, uParam1->f_4, uParam0->f_B, (uParam0->f_B.f_1 + fLocal_34), uParam0->f_B.f_2) };
		unk_0x641B19E156645A92(*uParam0, vVar0, 1, 0, 0, 1);
		return 1;
	}
	vVar0 = { unk_0x89D97EB4FAE4A574(uParam1->f_1, uParam1->f_4, uParam0->f_2, (uParam0->f_2.f_1 + fLocal_34), uParam0->f_2.f_2) };
	unk_0x641B19E156645A92(*uParam0, vVar0, 1, 0, 0, 1);
	uParam0->f_11.f_1 = (uParam0->f_11.f_1 + (1000f * fVar2));
	unk_0x784C605D172817C8(*uParam0, uParam0->f_11, 0, 1);
	if (unk_0x724D816EA203A79E(*uParam0))
	{
		if (bParam3)
		{
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_265(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x171E7
{
	struct<9> Var0;
	
	Var0 = { *uParam2 };
	switch (iParam4)
	{
		case 0:
			func_276(&Var0);
			break;
		
		case 1:
			func_275(&Var0);
			break;
		
		case 5:
			func_274(&Var0);
			break;
		
		case 6:
			func_273(&Var0);
			break;
		
		case 7:
			func_272(&Var0);
			break;
		
		case 8:
			func_271(&Var0);
			break;
		
		case 9:
			func_270(&Var0);
			break;
	}
	if (func_268())
	{
		unk_0x996AC9A66B2A5A3F(iParam5);
		if (iParam3 == 1)
		{
			unk_0x51DA985AC0B70E2E(sParam0, sParam1, func_267(Var0), func_266(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		else
		{
			unk_0x51DA985AC0B70E2E(sParam0, sParam1, func_267(Var0), func_266(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		unk_0x996AC9A66B2A5A3F(4);
	}
}

float func_266(float fParam0)//Position - 0x172EC
{
	return (fParam0 + fLocal_13);
}

float func_267(float fParam0)//Position - 0x172F9
{
	return (fParam0 + fLocal_12);
}

int func_268()//Position - 0x17306
{
	if (func_269())
	{
		return 1;
	}
	if (unk_0x17FAADF9916EF741())
	{
		return 0;
	}
	if (unk_0x422F9EDE839E6ABB() || unk_0x26641E1BFD792DBC())
	{
		return 0;
	}
	if (unk_0xF6023EB13558345B())
	{
		return 0;
	}
	return 1;
}

bool func_269()//Position - 0x17345
{
	return Global_1406B6;
}

void func_270(var uParam0)//Position - 0x17351
{
	uParam0->f_4 = 128;
	uParam0->f_5 = 128;
	uParam0->f_6 = 128;
}

void func_271(var uParam0)//Position - 0x1736B
{
	uParam0->f_7 = 2;
}

void func_272(var uParam0)//Position - 0x17378
{
	uParam0->f_7 = 5;
}

void func_273(var uParam0)//Position - 0x17385
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 70;
}

void func_274(var uParam0)//Position - 0x173A2
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 100;
}

void func_275(var uParam0)//Position - 0x173BF
{
	uParam0->f_4 = (uParam0->f_4 - 50);
	uParam0->f_5 = (uParam0->f_5 - 50);
	uParam0->f_6 = (uParam0->f_6 - 50);
}

void func_276(var uParam0)//Position - 0x173E8
{
	uParam0->f_4 = uParam0->f_4;
	uParam0->f_5 = uParam0->f_5;
	uParam0->f_6 = uParam0->f_6;
	uParam0->f_7 = uParam0->f_7;
}

void func_277(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x17410
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	vector3 vVar7;
	vector3 vVar8;
	float fVar9;
	
	if (*uParam3 == 50)
	{
		fVar3 = 0f;
		fVar4 = unk_0x55AEFCD285ECC0F2(0f, 360f);
	}
	else if (*uParam3 == 25)
	{
		fVar3 = 0.14f;
		fVar4 = unk_0x55AEFCD285ECC0F2(0f, 360f);
	}
	else
	{
		if (uParam3->f_1 == 3)
		{
			fVar3 = 0.1345f;
		}
		else if (uParam3->f_1 == 2)
		{
			fVar3 = 0.218f;
		}
		else
		{
			fVar3 = 0.18f;
		}
		fVar9 = 0f;
		iVar5 = 0;
		iVar5 = 0;
		while (iVar5 < 21)
		{
			if (*uParam3 == iLocal_33[iVar5])
			{
				fVar4 = fVar9;
			}
			fVar9 = (fVar9 + 18f);
			iVar5++;
		}
	}
	if (!bParam4 && uParam3->f_3 < 30)
	{
		iVar5 = unk_0x491B2241281A03B7(0, 100);
		iVar6 = unk_0x491B2241281A03B7(func_279(uParam3), 150);
		if (uParam3->f_2 > 140)
		{
			fVar0 = unk_0x55AEFCD285ECC0F2(-35f, 35f);
		}
		else if (iVar5 < iVar6 && uParam3->f_4 == 2)
		{
			fVar0 = unk_0x55AEFCD285ECC0F2(-80f, 80f);
		}
		else if (iVar5 < iVar6 && uParam3->f_2 > -140)
		{
			fVar0 = unk_0x55AEFCD285ECC0F2(-60f, 60f);
		}
		else
		{
			fVar0 = unk_0x55AEFCD285ECC0F2(-100f, 100f);
			if (fVar0 > 0f)
			{
				fVar0 = unk_0x55AEFCD285ECC0F2(-200f, -60f);
			}
			else
			{
				fVar0 = unk_0x55AEFCD285ECC0F2(60f, 200f);
			}
		}
		fVar0 = (fVar0 / 10f);
		fVar4 = (fVar4 + fVar0);
		iVar5 = unk_0x491B2241281A03B7(0, 100);
		iVar6 = unk_0x491B2241281A03B7(func_279(uParam3), 150);
		if (uParam3->f_2 > 140)
		{
			fVar0 = unk_0x55AEFCD285ECC0F2(-0.25f, 0.25f);
		}
		else if (iVar5 < iVar6 && uParam3->f_4 == 2)
		{
			fVar0 = unk_0x55AEFCD285ECC0F2(-0.07f, 0.07f);
		}
		else if (iVar5 < iVar6 && uParam3->f_2 > -140)
		{
			fVar0 = unk_0x55AEFCD285ECC0F2(-0.15f, 0.15f);
		}
		else
		{
			fVar0 = unk_0x55AEFCD285ECC0F2(-100f, 100f);
			if (fVar0 > 0f)
			{
				fVar0 = unk_0x55AEFCD285ECC0F2(-1f, -0.3f);
			}
			else
			{
				fVar0 = unk_0x55AEFCD285ECC0F2(0.3f, 1f);
			}
		}
		fVar0 = (fVar0 / 10f);
		fVar3 = (fVar3 + fVar0);
	}
	uParam0->f_8 = (SYSTEM::SIN(fVar4) * fVar3);
	uParam0->f_8.f_1 = -0.23f;
	uParam0->f_8.f_2 = (SYSTEM::COS(fVar4) * fVar3);
	uParam0->f_8 = (uParam0->f_8 - 0.0035f);
	uParam0->f_8.f_2 = (uParam0->f_8.f_2 - 0.0002f);
	if (*uParam2 == 6)
	{
		func_278(uParam0);
	}
	else
	{
		uParam0->f_17 = 0;
		uParam0->f_18 = 1;
		func_278(uParam0);
		*uParam0 = unk_0xB6896943DA475493(uParam0->f_1, vLocal_40, false, false, 0);
		fVar1 = unk_0x55AEFCD285ECC0F2(0f, 90f);
		vVar7 = { unk_0x89D97EB4FAE4A574(uParam1->f_1, uParam1->f_4, vLocal_41) };
		vVar8 = { unk_0x89D97EB4FAE4A574(uParam1->f_1, uParam1->f_4, uParam0->f_8, (uParam0->f_8.f_1 + fLocal_34), uParam0->f_8.f_2) };
		fVar2 = unk_0xFDC254CE02DB0919((vVar7.x - vVar8.x), (vVar7.y - vVar8.y));
		fVar2 = (fVar2 - 180f);
		uParam0->f_11 = { 90f, fVar1, fVar2 };
		unk_0x784C605D172817C8(*uParam0, uParam0->f_11, 0, 1);
		uParam0->f_2 = { vLocal_41 };
		*uParam2 = 3;
		unk_0xF2C27FE5A8B98CB5(-1, "DARTS_THROW_DART_MASTER", *uParam0, 0, 0, 0);
	}
}

void func_278(var uParam0)//Position - 0x17769
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	fVar4 = 0.08f;
	uParam0->f_8.f_1 = -0.213f;
	vVar0 = { vLocal_41 - uParam0->f_8 };
	fVar1 = SYSTEM::VMAG(vVar0);
	uParam0->f_5 = { vVar0 / Vector(fVar1, fVar1, fVar1) };
	fVar2 = unk_0xFDC254CE02DB0919(uParam0->f_5, uParam0->f_5.f_1);
	uParam0->f_11.f_2 = (fVar2 - 180f);
	fVar3 = (unk_0x934CB3CB3BED1B3B(uParam0->f_11.f_2) * fVar4);
	uParam0->f_B = { uParam0->f_8 };
	uParam0->f_B = (uParam0->f_B + fVar3);
	vVar0 = { vLocal_41 - uParam0->f_B };
	fVar1 = SYSTEM::VMAG(vVar0);
	uParam0->f_5 = { vVar0 / Vector(fVar1, fVar1, fVar1) };
}

int func_279(var uParam0)//Position - 0x17815
{
	switch (uParam0->f_4)
	{
		case 0:
			return 25;
		
		case 1:
			return 75;
		
		case 2:
			return 90;
		
		default:
	}
	return 25;
}

void func_280(var uParam0, var uParam1)//Position - 0x17849
{
	int iVar0;
	
	*uParam1 = 0;
	uParam1->f_1 = 0;
	uParam1->f_2 = ((*uParam0)[1] - (*uParam0)[0]);
	uParam1->f_3++;
	if ((*uParam0)[iLocal_30] > 121)
	{
		*uParam1 = 20;
		uParam1->f_1 = 3;
	}
	else if ((*uParam0)[iLocal_30] > 60)
	{
		if (((*uParam0)[iLocal_30] % 2) == 1)
		{
			if (func_250())
			{
				*uParam1 = 19;
			}
			else
			{
				*uParam1 = 17;
			}
			uParam1->f_1 = 3;
		}
		else
		{
			*uParam1 = 20;
			uParam1->f_1 = 3;
		}
	}
	else if ((*uParam0)[iLocal_30] < 61)
	{
		if ((*uParam0)[iLocal_30] == 50)
		{
			*uParam1 = 50;
			uParam1->f_1 = 1;
		}
		else if ((*uParam0)[iLocal_30] > 52)
		{
			*uParam1 = ((*uParam0)[iLocal_30] - 40);
			uParam1->f_1 = 1;
		}
		else if ((*uParam0)[iLocal_30] > 40)
		{
			*uParam1 = ((*uParam0)[iLocal_30] - 32);
			uParam1->f_1 = 1;
		}
		else if (((*uParam0)[iLocal_30] % 2) == 0)
		{
			iVar0 = 1;
			iVar0 = 0;
			while (iVar0 < 20)
			{
				*uParam1 = ((*uParam0)[iLocal_30] / 2);
				uParam1->f_1 = 2;
				iVar0++;
			}
		}
		else
		{
			iVar0 = 32;
			while (*uParam1 == 0 && iVar0 > 1)
			{
				if ((*uParam0)[iLocal_30] > iVar0)
				{
					*uParam1 = ((*uParam0)[iLocal_30] - iVar0);
					uParam1->f_1 = 1;
				}
				iVar0 = (iVar0 / 2);
			}
		}
	}
}

int func_281(int iParam0)//Position - 0x1799B
{
	int iVar0;
	
	iVar0 = unk_0x491B2241281A03B7(0, 100);
	if (iVar0 < 33)
	{
		func_4(iParam0, "DARTS_BORED", 0, 4);
		return 1;
	}
	return 0;
}

void func_282(int iParam0)//Position - 0x179C7
{
	func_283(iParam0, 0f);
}

void func_283(int iParam0, float fParam1)//Position - 0x179D6
{
	iParam0->f_1 = (func_8(unk_0xFA30DFD0084E92FE(*iParam0, 4)) + fParam1);
	unk_0xF0059F27F7BB6680(iParam0, 1);
	unk_0x7CB6FD92BE491AD9(iParam0, 2);
	iParam0->f_2 = 0f;
}

int func_284(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x17A04
{
	float fVar0;
	int iVar1;
	
	switch (iParam6)
	{
		case 0:
			if (iLocal_52)
			{
				if (SYSTEM::TIMERB() > 50)
				{
					iLocal_53 = 0;
					iLocal_54 = 0;
					iLocal_56 = 0;
					if (func_293(uParam0, uParam1, 0))
					{
						unk_0xF2C27FE5A8B98CB5(-1, "DARTS_THROW_DART_MASTER", *uParam0, 0, 0, 0);
						iLocal_52 = 0;
						return 1;
					}
				}
			}
			else if (!bParam3)
			{
				if (!(unk_0x694514BD37EC4E94(2, 223) && iLocal_56) && !bParam4)
				{
					iLocal_53 = 1;
					iLocal_54 = 1;
					if (!iLocal_55)
					{
						func_292(uParam0, *uParam2);
						iLocal_55 = 1;
					}
					else
					{
						if (!bParam5)
						{
							func_291();
						}
						func_290(uParam0, iParam6);
						func_289(uParam0, uParam1, bParam3, 0);
					}
				}
				else
				{
					if (bParam4)
					{
						fVar0 = unk_0x55AEFCD285ECC0F2(0.02f, 0.1f);
						iVar1 = unk_0x491B2241281A03B7(0, 100);
						if (iVar1 < 50)
						{
							if ((uParam0->f_8 + fVar0) < 0.33f)
							{
								uParam0->f_8 = (uParam0->f_8 + fVar0);
							}
							else
							{
								uParam0->f_8 = (uParam0->f_8 - fVar0);
							}
						}
						else if ((uParam0->f_8 - fVar0) > -0.33f)
						{
							uParam0->f_8 = (uParam0->f_8 - fVar0);
						}
						else
						{
							uParam0->f_8 = (uParam0->f_8 + fVar0);
						}
						fVar0 = unk_0x55AEFCD285ECC0F2(0.02f, 0.1f);
						iVar1 = unk_0x491B2241281A03B7(0, 100);
						if (iVar1 < 50)
						{
							if ((uParam0->f_8.f_2 + fVar0) < 0.29f)
							{
								uParam0->f_8.f_2 = (uParam0->f_8.f_2 + fVar0);
							}
							else
							{
								uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fVar0);
							}
						}
						else if ((uParam0->f_8.f_2 - fVar0) > -0.29f)
						{
							uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fVar0);
						}
						else
						{
							uParam0->f_8.f_2 = (uParam0->f_8.f_2 + fVar0);
						}
						uParam0->f_2 = { vLocal_41 };
						iLocal_53 = 1;
						iLocal_54 = 1;
					}
					if (iLocal_53 && iLocal_54)
					{
						if (!iLocal_52)
						{
							unk_0xEB233A3B7635D2AC();
							iLocal_52 = 1;
							SYSTEM::SETTIMERB(0);
						}
					}
				}
			}
			break;
		
		case 1:
			if (iLocal_52)
			{
				func_265("Darts", "Dart_Reticules", &Local_38, 1, 0, 4, 0);
				if (SYSTEM::TIMERB() > 25)
				{
					if (func_293(uParam0, uParam1, 1))
					{
						unk_0xF2C27FE5A8B98CB5(-1, "DARTS_THROW_DART_MASTER", *uParam0, 0, 0, 0);
						iLocal_52 = 0;
						return 1;
					}
				}
			}
			else if (!func_285(uParam0))
			{
				if (!iLocal_55)
				{
					func_292(uParam0, *uParam2);
				}
				else
				{
					func_291();
					func_290(uParam0, iParam6);
					func_289(uParam0, uParam1, bParam3, 0);
				}
			}
			else if (!iLocal_52)
			{
				iLocal_52 = 1;
				SYSTEM::SETTIMERB(0);
			}
			break;
	}
	return 0;
}

int func_285(var uParam0)//Position - 0x17C79
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = unk_0x5F9521C8EE73F79F(2, 220);
	fVar2 = unk_0x5F9521C8EE73F79F(2, 221);
	iLocal_91 = SYSTEM::ROUND(fVar2);
	switch (iLocal_90)
	{
		case 0:
			if (iLocal_91 > 120)
			{
				iLocal_92 = unk_0x105601648511CC64();
				iLocal_90 = 1;
			}
			if (iLocal_91 < -100)
			{
				iLocal_96 = SYSTEM::ROUND(fVar1);
			}
			break;
		
		case 1:
			if (iLocal_91 > 120)
			{
				iLocal_92 = unk_0x105601648511CC64();
			}
			else if ((iLocal_91 < 120 && iLocal_91 > -120) && (unk_0x105601648511CC64() - iLocal_92) > 500)
			{
				iLocal_90 = 0;
			}
			else if (iLocal_91 < -100)
			{
				iLocal_93 = unk_0x105601648511CC64();
				if ((iLocal_93 - iLocal_92) < 500)
				{
					iLocal_96 = SYSTEM::ROUND(fVar1);
					iLocal_94 = (iLocal_93 - iLocal_92);
					iLocal_90 = 2;
				}
			}
			break;
		
		case 2:
			if (iLocal_94 > iLocal_95)
			{
				if (iLocal_94 > 100 && iLocal_94 < 150)
				{
					fLocal_99 = 0.066477f;
					uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fLocal_99);
				}
				else
				{
					fLocal_98 = (SYSTEM::TO_FLOAT(iLocal_95) / SYSTEM::TO_FLOAT(iLocal_94));
					fLocal_99 = ((1f - fLocal_98) * fLocal_102);
					uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fLocal_99);
				}
			}
			else
			{
				fLocal_99 = 0f;
			}
			if (iLocal_96 > 7)
			{
				fLocal_100 = (SYSTEM::TO_FLOAT(iLocal_96) / fLocal_105);
				fLocal_101 = (fLocal_103 * fLocal_100);
				uParam0->f_8 = (uParam0->f_8 + fLocal_101);
			}
			else if (iLocal_96 < -7)
			{
				fLocal_100 = (SYSTEM::TO_FLOAT(iLocal_96) / fLocal_104);
				fLocal_101 = (fLocal_103 * fLocal_100);
				uParam0->f_8 = (uParam0->f_8 - fLocal_101);
			}
			else
			{
				fLocal_101 = 0f;
			}
			if (fLocal_99 < 0.066477f && fLocal_101 == 0f)
			{
				func_288();
			}
			else if (fLocal_99 <= 0.066477f && fLocal_101 < 0.06f)
			{
				func_287();
			}
			else
			{
				func_286();
			}
			iVar0 = 1;
			iLocal_90 = 0;
			break;
	}
	return iVar0;
}

void func_286()//Position - 0x17E37
{
	Local_39.f_4 = 210;
	Local_39.f_5 = 23;
	Local_39.f_6 = 19;
}

void func_287()//Position - 0x17E51
{
	Local_39.f_4 = 183;
	Local_39.f_5 = 137;
	Local_39.f_6 = 0;
}

void func_288()//Position - 0x17E6A
{
	Local_39.f_4 = 16;
	Local_39.f_5 = 184;
	Local_39.f_6 = 10;
}

void func_289(var uParam0, var uParam1, bool bParam2, int iParam3)//Position - 0x17E84
{
	vector3 vVar0;
	
	vVar0 = { unk_0x89D97EB4FAE4A574(uParam1->f_1, uParam1->f_4, uParam0->f_E, (uParam0->f_E.f_1 + fLocal_34), uParam0->f_E.f_2) };
	if (iParam3 == 1)
	{
		vVar0 = { unk_0x89D97EB4FAE4A574(uParam1->f_1, uParam1->f_4, uParam0->f_E, (uParam0->f_E.f_1 + fLocal_34), uParam0->f_E.f_2) };
	}
	unk_0x87674A8F8F375647(vVar0, &Local_38, &(Local_38.f_1));
	if ((unk_0x105601648511CC64() % 1000) < 50)
	{
	}
	if (!bParam2)
	{
		if (bLocal_49)
		{
			func_265("Darts", "Dart_Reticules_Zoomed", &Local_38, 1, 0, 4, 0);
		}
		else
		{
			func_265("Darts", "Dart_Reticules", &Local_38, 1, 0, 4, 0);
		}
		if (!iLocal_56)
		{
			iLocal_56 = 1;
		}
	}
}

void func_290(var uParam0, int iParam1)//Position - 0x17F33
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	bool bVar7;
	float fVar8;
	float fVar9;
	
	fVar0 = 0.033367f;
	bVar7 = false;
	fVar3 = unk_0x4C25B6CE9D0B3C92(2, 218);
	fVar4 = unk_0x4C25B6CE9D0B3C92(2, 219);
	fVar5 = unk_0x5F9521C8EE73F79F(2, 220);
	fVar6 = unk_0x5F9521C8EE73F79F(2, 221);
	if (unk_0x50465D2C022B9E04(2))
	{
		if (unk_0x357058E632979E65(fVar5) > unk_0x357058E632979E65(fVar3) || unk_0x357058E632979E65(fVar6) > unk_0x357058E632979E65(fVar4))
		{
			fVar3 = fVar5;
			fVar4 = fVar6;
			bVar7 = false;
		}
		else
		{
			if (unk_0xCBE319E6CA6FF4D2())
			{
				fVar4 = (fVar4 * -1f);
			}
			if (unk_0xF31C9BB6C94E205D())
			{
				fVar4 = (fVar4 * -1f);
			}
			if (unk_0x8FCEEB789599BD9B(2, 227))
			{
				uParam0->f_8 = (uParam0->f_8 + (fVar3 * 0.06f));
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 - (fVar4 * 0.06f));
			}
			else
			{
				uParam0->f_8 = (uParam0->f_8 + (fVar3 * 0.03f));
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 - (fVar4 * 0.03f));
			}
			uParam0->f_8 = func_14(uParam0->f_8, -0.33f, 0.33f);
			uParam0->f_8.f_2 = func_14(uParam0->f_8.f_2, -0.29f, 0.29f);
			bVar7 = true;
		}
	}
	if (!bVar7)
	{
		if (unk_0x50465D2C022B9E04(2))
		{
			if (fVar5 != 0f || fVar6 != 0f)
			{
				fVar3 = fVar5;
				fVar4 = fVar6;
			}
		}
		if (fVar3 > 0f)
		{
			if ((uParam0->f_8 + (fLocal_47 * fVar0)) < 0.33f)
			{
				uParam0->f_8 = (uParam0->f_8 + (fLocal_47 * fVar0));
			}
		}
		else if (fVar3 < 0f)
		{
			if ((uParam0->f_8 - (fLocal_47 * fVar0)) > -0.33f)
			{
				uParam0->f_8 = (uParam0->f_8 - (fLocal_47 * fVar0));
			}
		}
		if (fVar4 > 0f)
		{
			if ((uParam0->f_8.f_2 - (fLocal_47 * fVar0)) > -0.29f)
			{
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 - (fLocal_47 * fVar0));
			}
		}
		else if (fVar4 < 0f)
		{
			if ((uParam0->f_8.f_2 + (fLocal_47 * fVar0)) < 0.29f)
			{
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 + (fLocal_47 * fVar0));
			}
		}
	}
	uParam0->f_E = { uParam0->f_8 };
	if (iParam1 == 0)
	{
		fVar2 = unk_0x55AEFCD285ECC0F2((0f - fLocal_44), (0f + fLocal_44));
		fVar1 = unk_0x55AEFCD285ECC0F2((0f - fLocal_43), (0f + fLocal_43));
		if ((uParam0->f_8 + (fVar1 * fVar0)) > -0.33f && (uParam0->f_8 + (fVar1 * fVar0)) < 0.33f)
		{
			uParam0->f_8 = (uParam0->f_8 + (fVar2 * fVar0));
			uParam0->f_E = uParam0->f_8;
			uParam0->f_E = (uParam0->f_E + (fVar1 * fVar0));
		}
		fVar2 = unk_0x55AEFCD285ECC0F2((0f - fLocal_44), (0f + fLocal_44));
		fVar1 = unk_0x55AEFCD285ECC0F2((0f - fLocal_43), (0f + fLocal_43));
		if ((uParam0->f_8.f_2 + (fVar1 * fVar0)) > -0.29f && (uParam0->f_8.f_2 + (fVar1 * fVar0)) < 0.29f)
		{
			uParam0->f_8.f_2 = (uParam0->f_8.f_2 + (fVar2 * fVar0));
			uParam0->f_E.f_2 = uParam0->f_8.f_2;
			uParam0->f_E.f_2 = (uParam0->f_E.f_2 + (fVar1 * fVar0));
		}
	}
	if (iParam1 == 1)
	{
		fLocal_47 = 0.5f;
		if (iLocal_90 == 1)
		{
			fVar8 = 0.06f;
			fVar9 = 0.08f;
		}
		else
		{
			fVar8 = 0.02f;
			fVar9 = 0.03f;
		}
		fVar2 = unk_0x55AEFCD285ECC0F2((0f - fVar9), (0f + fVar9));
		fVar1 = unk_0x55AEFCD285ECC0F2((0f - fVar8), (0f + fVar8));
		if ((uParam0->f_8 + (fVar1 * fVar0)) > -0.33f && (uParam0->f_8 + (fVar1 * fVar0)) < 0.33f)
		{
			uParam0->f_8 = (uParam0->f_8 + (fVar2 * fVar0));
			uParam0->f_E = uParam0->f_8;
			uParam0->f_E = (uParam0->f_E + (fVar1 * fVar0));
		}
		fVar2 = unk_0x55AEFCD285ECC0F2((0f - fVar9), (0f + fVar9));
		fVar1 = unk_0x55AEFCD285ECC0F2((0f - fVar8), (0f + fVar8));
		if ((uParam0->f_8.f_2 + (fVar1 * fVar0)) > -0.33f && (uParam0->f_8.f_2 + (fVar1 * fVar0)) < 0.33f)
		{
			uParam0->f_8.f_2 = (uParam0->f_8.f_2 + (fVar2 * fVar0));
			uParam0->f_E.f_2 = uParam0->f_8.f_2;
			uParam0->f_E.f_2 = (uParam0->f_E.f_2 + (fVar1 * fVar0));
		}
	}
}

void func_291()//Position - 0x18326
{
	if (unk_0x8FCEEB789599BD9B(2, 227))
	{
		fLocal_47 = 0.3f;
	}
	else
	{
		fLocal_47 = 0.1f;
	}
	if (unk_0x8FCEEB789599BD9B(2, 229))
	{
		if (bLocal_49)
		{
			if (SYSTEM::TIMERA() > iLocal_97)
			{
				fLocal_43 = fLocal_45;
				fLocal_44 = fLocal_46;
				fLocal_47 = 0.1f;
				bLocal_49 = false;
			}
		}
		else if (iLocal_48 < 1)
		{
			fLocal_43 = 0.03f;
			fLocal_44 = 0.05f;
			fLocal_47 = 0.1f;
			SYSTEM::SETTIMERA(0);
			bLocal_49 = true;
			iLocal_48++;
		}
		else if ((((((!func_294("DARTS_FST_HLP") && !func_294("DARTS_AIM_HLP")) && !func_294("DARTS_CLOCK")) && !func_294("DARTS_STD_HLP")) && !func_294("DARTS_INSTR_W")) && !func_294("DARTS_INSTR_B")) && !iLocal_50)
		{
			iLocal_50 = 1;
			if (!unk_0xFA30DFD0084E92FE(Global_19ADD, 1))
			{
				func_409("DARTS_SHT_USE", -1);
				unk_0xF0059F27F7BB6680(&Global_19ADD, 1);
			}
		}
	}
	else if (bLocal_49)
	{
		fLocal_43 = fLocal_45;
		fLocal_44 = fLocal_46;
		fLocal_47 = 0.1f;
		bLocal_49 = false;
	}
}

void func_292(var uParam0, struct<4> Param1, var uParam2, var uParam3)//Position - 0x18438
{
	vector3 vVar0;
	
	vVar0 = { 0f, 0f, 0f };
	vVar0.x = (vVar0.x + unk_0x55AEFCD285ECC0F2(-0.1f, 0.1f));
	vVar0.z = (vVar0.z + unk_0x55AEFCD285ECC0F2(-0.1f, 0.1f));
	uParam0->f_8 = { Param1.f_3 + vVar0 };
	uParam0->f_2 = { vLocal_41 };
}

int func_293(var uParam0, var uParam1, bool bParam2)//Position - 0x1848C
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	if (unk_0x724D816EA203A79E(*uParam0))
	{
		unk_0x641B19E156645A92(*uParam0, vLocal_40, 1, 0, 0, 1);
	}
	else
	{
		*uParam0 = unk_0xB6896943DA475493(uParam0->f_1, vLocal_40, false, false, 0);
	}
	bLocal_49 = false;
	fLocal_47 = 0.1f;
	fLocal_43 = fLocal_45;
	fLocal_44 = fLocal_46;
	uParam0->f_17 = 0;
	uParam0->f_18 = 1;
	func_278(uParam0);
	fVar4 = unk_0x55AEFCD285ECC0F2(0f, 90f);
	vVar1 = { unk_0x89D97EB4FAE4A574(uParam1->f_1, uParam1->f_4, vLocal_41) };
	vVar2 = { unk_0x89D97EB4FAE4A574(uParam1->f_1, uParam1->f_4, (uParam0->f_E + 0.0035f), (uParam0->f_E.f_1 + fLocal_34), uParam0->f_E.f_2) };
	fVar5 = unk_0xFDC254CE02DB0919((vVar1.x - vVar2.x), (vVar1.y - vVar2.y));
	fVar5 = (fVar5 - 180f);
	fVar3 = 90f;
	uParam0->f_11 = { fVar3, fVar4, fVar5 };
	unk_0x784C605D172817C8(*uParam0, uParam0->f_11, 0, 1);
	iLocal_53 = 0;
	iLocal_55 = 0;
	if (bParam2)
	{
		func_265("Darts", "Dart_Reticules", &Local_38, 1, 0, 4, 0);
	}
	vVar0 = { unk_0x89D97EB4FAE4A574(uParam1->f_1, uParam1->f_4, uParam0->f_8, (uParam0->f_8.f_1 + fLocal_34), uParam0->f_8.f_2) };
	unk_0x87674A8F8F375647(vVar0, &Local_39, &(Local_39.f_1));
	return 1;
}

int func_294(char* sParam0)//Position - 0x185C3
{
	unk_0xF07D20149ECBC61E(sParam0);
	return unk_0xA66DBDA0A072514A(0);
}

void func_295(int iParam0, int iParam1)//Position - 0x185D6
{
	if (iParam0 == 0)
	{
		if (!unk_0xFA30DFD0084E92FE(Global_19ADD, 9))
		{
			if ((!func_294("DARTS_SHT_USE") && !func_294("DARTS_INSTR_W")) && !func_294("DARTS_INSTR_B"))
			{
				func_409("DARTS_AIM_HLP", -1);
				unk_0xF0059F27F7BB6680(&Global_19ADD, 9);
			}
		}
		else if (iParam1 && !unk_0xFA30DFD0084E92FE(Global_19ADD, 7))
		{
			if ((!func_294("DARTS_AIM_HLP") && !func_294("DARTS_INSTR_W")) && !func_294("DARTS_INSTR_B"))
			{
				func_409("DARTS_CLOCK", -1);
				unk_0xF0059F27F7BB6680(&Global_19ADD, 7);
			}
		}
	}
	else if (iParam0 == 1)
	{
		if (!unk_0xFA30DFD0084E92FE(Global_19ADD, 8))
		{
			if ((!func_294("DARTS_SHT_USE") && !func_294("DARTS_INSTR_W")) && !func_294("DARTS_INSTR_B"))
			{
				func_409("DARTS_STD_HLP", -1);
				unk_0xF0059F27F7BB6680(&Global_19ADD, 8);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (((!iLocal_51 && !func_294("DARTS_SHT_USE")) && !func_294("DARTS_INSTR_W")) && !func_294("DARTS_INSTR_B"))
		{
			if (!unk_0xFA30DFD0084E92FE(Global_19ADD, 2))
			{
				func_409("DARTS_FST_HLP", -1);
				unk_0xF0059F27F7BB6680(&Global_19ADD, 2);
			}
			iLocal_51 = 1;
		}
	}
}

int func_296(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x1872B
{
	vector3 vVar0;
	
	switch (*uParam2)
	{
		case 0:
			vVar0 = { func_299(iParam0) };
			*uParam3 = { unk_0xA4455714F3DCE207(*uParam1, vVar0) };
			func_298(*uParam3);
			SYSTEM::SETTIMERB(0);
			*uParam2 = 1;
			break;
		
		case 1:
			if (SYSTEM::TIMERB() > 3000 || unk_0x694514BD37EC4E94(2, 201))
			{
				func_297();
				*uParam2 = 0;
				return 1;
			}
			break;
	}
	return 0;
}

void func_297()//Position - 0x1879C
{
	unk_0xAE099C1ADC89C331(iLocal_75, iLocal_87, 2000, 1, 1);
	unk_0x4EC087603E1DEF9C(iLocal_87, 0);
}

void func_298(vector3 vParam0)//Position - 0x187B8
{
	vector3 vVar0;
	
	vVar0 = { -5.5606f, -0.0106f, -131.6781f };
	iLocal_87 = unk_0x585DE1CBEEB2D27D(26379945, vParam0, vVar0, 65f, 0, 2);
	unk_0xAE099C1ADC89C331(iLocal_87, iLocal_75, 2000, 1, 1);
}

Vector3 func_299(int iParam0)//Position - 0x187FA
{
	float fVar0;
	vector3 vVar1;
	
	if (iParam0 == 50)
	{
		vVar1 = { 0f, -0.5f, 0f };
	}
	else
	{
		fVar0 = func_302(iParam0);
		vVar1.y = -0.5f;
		vVar1.x = func_301(fVar0);
		vVar1.z = func_300(fVar0);
	}
	return vVar1;
}

float func_300(float fParam0)//Position - 0x1883E
{
	float fVar0;
	float fVar1;
	
	fVar0 = 0.218f;
	fVar1 = (SYSTEM::COS(fParam0) * fVar0);
	return fVar1;
}

float func_301(float fParam0)//Position - 0x1885A
{
	float fVar0;
	float fVar1;
	
	fVar0 = 0.218f;
	fVar1 = (SYSTEM::SIN(fParam0) * fVar0);
	return fVar1;
}

var func_302(int iParam0)//Position - 0x18876
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	
	iVar1 = (iParam0 / 2);
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (iVar1 == iLocal_33[iVar0])
		{
			uVar3 = fVar2;
		}
		fVar2 = (fVar2 + 18f);
		iVar0++;
	}
	return uVar3;
}

int func_303(var uParam0)//Position - 0x188B2
{
	switch (*uParam0)
	{
		case 0:
			if (unk_0x8FCEEB789599BD9B(2, 228))
			{
				func_310(1);
				*uParam0 = 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 1:
			if (unk_0x8FCEEB789599BD9B(2, 228))
			{
				if (!unk_0x16BE1286447174A9(iLocal_84))
				{
					func_308();
					func_307(&iLocal_208, vLocal_239, vLocal_240, 30f, 10, 10, 3, 15f, 0, 0, -1f, 1);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 3;
			}
			break;
		
		case 2:
			if (!unk_0x8FCEEB789599BD9B(2, 228))
			{
				*uParam0 = 3;
			}
			else
			{
				func_304(&iLocal_208, 1, 1, 0, 0, 1045220557, 0, 1065353216, 0);
			}
			break;
		
		case 3:
			func_310(0);
			func_488();
			if (unk_0xEF0E25DA0CB6E8FF(iLocal_208))
			{
				if (unk_0xEDEA6C8F42EE05F6(iLocal_208))
				{
					unk_0x348665177DBFB93B(iLocal_208, false);
				}
				unk_0x4EC087603E1DEF9C(iLocal_208, 0);
			}
			*uParam0 = 0;
			return 0;
			break;
	}
	return 1;
}

void func_304(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, float fParam7, bool bParam8)//Position - 0x189A5
{
	int iVar0[4];
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	int iVar7;
	int iVar8;
	
	unk_0x9601F9343A2063DE(2);
	func_306(&(iVar0[0]), &(iVar0[1]), &(iVar0[2]), &(iVar0[3]), 0, 0);
	if (unk_0xF31C9BB6C94E205D())
	{
		iVar0[3] = (iVar0[3] * -1);
	}
	if (unk_0x50465D2C022B9E04(2))
	{
		fVar1 = unk_0x4C25B6CE9D0B3C92(2, 239);
		fVar2 = unk_0x4C25B6CE9D0B3C92(2, 240);
		fVar3 = (fVar1 - uParam0->f_1D);
		fVar4 = (fVar2 - uParam0->f_1E);
		uParam0->f_1D = fVar1;
		uParam0->f_1E = fVar2;
		if (bParam4)
		{
			iVar0[2] = -SYSTEM::ROUND(((fVar3 * fParam5) * 127f));
			iVar0[3] = -SYSTEM::ROUND(((fVar4 * fParam5) * 127f));
		}
		else
		{
			iVar0[2] = SYSTEM::ROUND(((unk_0x4C25B6CE9D0B3C92(2, 290) * fParam5) * 127f));
			iVar0[3] = SYSTEM::ROUND(((unk_0x4C25B6CE9D0B3C92(2, 291) * fParam5) * 127f));
		}
		iVar0[2] = func_305((iVar0[2] + uParam0->f_18), -127, 127);
		iVar0[3] = func_305((iVar0[3] + uParam0->f_19), -127, 127);
	}
	if (uParam0->f_18 == iVar0[2] && uParam0->f_19 == iVar0[3])
	{
		if (uParam0->f_1B < unk_0x105601648511CC64())
		{
			uParam0->f_18 = 0;
			uParam0->f_19 = 0;
			if (unk_0x50465D2C022B9E04(2))
			{
				iVar0[2] = 0;
				iVar0[3] = 0;
				uParam0->f_1C = 1;
			}
		}
	}
	else
	{
		uParam0->f_18 = iVar0[2];
		uParam0->f_19 = iVar0[3];
		uParam0->f_1B = unk_0x105601648511CC64() + 4000;
		uParam0->f_1C = 0;
	}
	if (bParam2)
	{
		uParam0->f_8.f_2 = (-(SYSTEM::TO_FLOAT(iVar0[2]) / 127f) * IntToFloat(uParam0->f_14));
		uParam0->f_8.f_1 = ((-uParam0->f_8.f_2 * IntToFloat(uParam0->f_16)) / IntToFloat(uParam0->f_14));
		uParam0->f_8 = (-(SYSTEM::TO_FLOAT(iVar0[3]) / 127f) * IntToFloat(uParam0->f_15));
	}
	else
	{
		uParam0->f_8 = { 0f, 0f, 0f };
		uParam0->f_18 = 0;
		uParam0->f_19 = 0;
	}
	fVar5 = (30f * SYSTEM::TIMESTEP());
	vVar6 = { uParam0->f_8 + uParam0->f_B };
	if ((unk_0x50465D2C022B9E04(2) && bParam2) && !uParam0->f_1C)
	{
		uParam0->f_E = vVar6.x;
		uParam0->f_E.f_1 = vVar6.y;
		uParam0->f_E.f_2 = vVar6.z;
	}
	else
	{
		uParam0->f_E = (uParam0->f_E + func_14(((((vVar6.x - uParam0->f_E) * 0.05f) * fVar5) * fParam7), -3f, 3f));
		uParam0->f_E.f_1 = (uParam0->f_E.f_1 + func_14(((((vVar6.y - uParam0->f_E.f_1) * 0.05f) * fVar5) * fParam7), -3f, 3f));
		uParam0->f_E.f_2 = (uParam0->f_E.f_2 + func_14(((((vVar6.z - uParam0->f_E.f_2) * 0.05f) * fVar5) * fParam7), -3f, 3f));
	}
	if (uParam0->f_1A)
	{
		uParam0->f_E = func_14(uParam0->f_E, SYSTEM::TO_FLOAT(-uParam0->f_15), SYSTEM::TO_FLOAT(uParam0->f_15));
		uParam0->f_E.f_1 = func_14(uParam0->f_E.f_1, SYSTEM::TO_FLOAT(-uParam0->f_16), SYSTEM::TO_FLOAT(uParam0->f_16));
		uParam0->f_E.f_2 = func_14(uParam0->f_E.f_2, SYSTEM::TO_FLOAT(-uParam0->f_14), SYSTEM::TO_FLOAT(uParam0->f_14));
	}
	if (unk_0x50465D2C022B9E04(0) && bParam1)
	{
		if (uParam0->f_1C)
		{
			uParam0->f_11 = uParam0->f_7;
		}
	}
	else
	{
		uParam0->f_11 = uParam0->f_7;
	}
	if (bParam1)
	{
		if (unk_0x50465D2C022B9E04(0))
		{
			iVar7 = 40;
			iVar8 = 41;
			if (bParam6)
			{
				iVar7 = 241;
				iVar8 = 242;
			}
			if (unk_0xF7DDAAF0EFDAFA22(0, iVar7))
			{
				uParam0->f_11 = (uParam0->f_11 - 5f);
				uParam0->f_1B = unk_0x105601648511CC64() + 4000;
				uParam0->f_1C = 0;
			}
			else if (unk_0xF7DDAAF0EFDAFA22(0, iVar8))
			{
				uParam0->f_11 = (uParam0->f_11 + 5f);
				uParam0->f_1B = unk_0x105601648511CC64() + 4000;
				uParam0->f_1C = 0;
			}
			if (bParam3)
			{
				uParam0->f_11 = func_14(uParam0->f_11, (uParam0->f_7 - uParam0->f_13), uParam0->f_7);
			}
			else
			{
				uParam0->f_11 = func_14(uParam0->f_11, (uParam0->f_7 - uParam0->f_13), (uParam0->f_7 + uParam0->f_13));
			}
		}
		else if (bParam8)
		{
			iVar0[1] = unk_0x1B3AE5B27313855F(2, 207);
			iVar0[3] = unk_0x1B3AE5B27313855F(2, 208);
			if (bParam3)
			{
				if (SYSTEM::TO_FLOAT(iVar0[3]) > 127f)
				{
					uParam0->f_11 = (uParam0->f_11 - IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[3]) / 128f) * (uParam0->f_13 / 2f)))));
				}
			}
			else
			{
				uParam0->f_11 = (uParam0->f_11 + IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[1]) / 128f) * uParam0->f_13))));
				uParam0->f_11 = (uParam0->f_11 - IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[3]) / 128f) * uParam0->f_13))));
			}
		}
		else if (bParam3)
		{
			if (SYSTEM::TO_FLOAT(iVar0[1]) < 0f)
			{
				uParam0->f_11 = (uParam0->f_11 + IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[1]) / 128f) * uParam0->f_13))));
			}
		}
		else
		{
			uParam0->f_11 = (uParam0->f_11 + IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[1]) / 128f) * uParam0->f_13))));
		}
	}
	uParam0->f_12 = (uParam0->f_12 + (((uParam0->f_11 - uParam0->f_12) * 0.06f) * fVar5));
	unk_0x9961B404F89D0597(*uParam0, uParam0->f_1, uParam0->f_4 + uParam0->f_E, uParam0->f_12, 0, 1, 1, 2);
	if (unk_0xEF0E25DA0CB6E8FF(*uParam0))
	{
		if (unk_0xEDEA6C8F42EE05F6(*uParam0))
		{
			if (unk_0xF448AA2D7E08A675(*uParam0))
			{
				unk_0xE9B1C9E275C24095();
			}
		}
	}
}

int func_305(int iParam0, int iParam1, int iParam2)//Position - 0x18EF9
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

void func_306(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x18F1E
{
	*uParam0 = SYSTEM::FLOOR((unk_0x4C25B6CE9D0B3C92(2, 218) * 127f));
	*uParam1 = SYSTEM::FLOOR((unk_0x4C25B6CE9D0B3C92(2, 219) * 127f));
	*uParam2 = SYSTEM::FLOOR((unk_0x4C25B6CE9D0B3C92(2, 220) * 127f));
	*uParam3 = SYSTEM::FLOOR((unk_0x4C25B6CE9D0B3C92(2, 221) * 127f));
	if (bParam4)
	{
		if (!unk_0x4B1521EDBF25A39C(2, 218))
		{
			*uParam0 = SYSTEM::FLOOR((unk_0xE56557A1B607909F(2, 218) * 127f));
		}
		if (!unk_0x4B1521EDBF25A39C(2, 219))
		{
			*uParam1 = SYSTEM::FLOOR((unk_0xE56557A1B607909F(2, 219) * 127f));
		}
		if (!unk_0x4B1521EDBF25A39C(2, 220))
		{
			*uParam2 = SYSTEM::FLOOR((unk_0xE56557A1B607909F(2, 220) * 127f));
		}
		if (!unk_0x4B1521EDBF25A39C(2, 221))
		{
			*uParam3 = SYSTEM::FLOOR((unk_0xE56557A1B607909F(2, 221) * 127f));
		}
	}
	if (unk_0x50465D2C022B9E04(2))
	{
		if (bParam5)
		{
			if (unk_0xF31C9BB6C94E205D())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (unk_0xCBE319E6CA6FF4D2())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_307(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3, int iParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9, float fParam10, bool bParam11)//Position - 0x19022
{
	uParam0->f_1 = { vParam1 };
	uParam0->f_4 = { vParam2 };
	uParam0->f_7 = fParam3;
	uParam0->f_14 = iParam4;
	uParam0->f_15 = iParam5;
	uParam0->f_16 = iParam6;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_B = { 0f, 0f, 0f };
	uParam0->f_E = { 0f, 0f, 0f };
	uParam0->f_11 = fParam3;
	uParam0->f_12 = fParam3;
	uParam0->f_17 = iParam8;
	uParam0->f_13 = fParam7;
	*uParam0 = unk_0x578D5D08EC980893("DEFAULT_SCRIPTED_CAMERA", 0);
	unk_0x348665177DBFB93B(*uParam0, true);
	unk_0x9961B404F89D0597(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_7, 0, 1, 1, 2);
	if (!bParam11)
	{
		unk_0x2FB83B8BD6C05FD2(*uParam0, "HAND_SHAKE", 0.19f);
	}
	unk_0x062C9995BFD27B2A(true, false, 3000, 1, 0, 0);
	if (fParam10 > 0f)
	{
		unk_0x97AD4F1D22AEA4FC(*uParam0, fParam10);
	}
	if (uParam0->f_17)
	{
		unk_0xA1517A9C3F0715E0(iParam9);
	}
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
	uParam0->f_1D = 0f;
	uParam0->f_1E = 0f;
	uParam0->f_1A = 0;
	uParam0->f_1C = 0;
	uParam0->f_1B = 0;
}

void func_308()//Position - 0x1911A
{
	if (iLocal_168)
	{
		return;
	}
	func_309();
	unk_0xB1AFC550627C7E8D("Darts Zoom");
	iLocal_168 = 1;
}

void func_309()//Position - 0x1913C
{
	if (iLocal_167 || iLocal_168)
	{
		unk_0x4110C66549D5F74F();
		iLocal_167 = 0;
		iLocal_168 = 0;
	}
}

void func_310(bool bParam0)//Position - 0x1915F
{
	if (bParam0)
	{
		unk_0xAE099C1ADC89C331(iLocal_84, iLocal_75, 1000, 1, 1);
	}
	else
	{
		unk_0xAE099C1ADC89C331(iLocal_75, iLocal_84, 1000, 1, 1);
	}
}

void func_311(var uParam0)//Position - 0x19189
{
	if (uParam0->f_2A7)
	{
		if (uParam0->f_2A9 == 2)
		{
			uParam0->f_2A9 = 0;
		}
		uParam0->f_2A7 = 0;
	}
	switch (uParam0->f_2A9)
	{
		case 0:
			func_232(&(uParam0->f_3E), func_313(uParam0->f_2AA), "", 2000, 5, 1);
			uParam0->f_2A9 = 1;
			break;
		
		case 1:
			if (!func_227(&(uParam0->f_3E), 0))
			{
				func_312(&(uParam0->f_3E));
				uParam0->f_2A9 = 2;
			}
			break;
		
		case 2:
			break;
	}
}

void func_312(var uParam0)//Position - 0x1920E
{
	uParam0->f_8 = 0;
	func_412(&(uParam0->f_2));
	func_412(&(uParam0->f_5));
}

char* func_313(int iParam0)//Position - 0x1922B
{
	switch (iParam0)
	{
		case 0:
			return "DARTS_180_SPLSH";
		
		case 1:
			return "DARTS_BE_SPLSH";
		
		default:
	}
	return "DARTS_BE_SPLSH";
}

void func_314(var uParam0)//Position - 0x19258
{
	if (!iLocal_54)
	{
		if (!unk_0x8FCEEB789599BD9B(2, 201))
		{
			iLocal_54 = 1;
		}
	}
	if ((iLocal_30 == 1 && iLocal_31 < 3) && *uParam0 != 5)
	{
		if ((unk_0x8FCEEB789599BD9B(2, 201) || unk_0x694514BD37EC4E94(2, 223)) && iLocal_54)
		{
			*uParam0 = 6;
		}
	}
}

void func_315(var uParam0, int iParam1)//Position - 0x192B0
{
	if (!unk_0xE186ACC7BE9B244E())
	{
		if (iParam1 == 0)
		{
			if (!func_3(&(uParam0->f_29A), 15) && !iLocal_48 > 0)
			{
				func_114(&(uParam0->f_1FD), 0, 0, 0, 1);
				func_113(&(uParam0->f_1FD), "DARTS_THROW", 2, 223, 0, 1, 0);
				func_113(&(uParam0->f_1FD), "DARTS_END_QT", 2, 235, 1, 1, 0);
				func_316(&(uParam0->f_1FD), "DARTS_AIM", 2, 20, 1, 0);
				func_113(&(uParam0->f_1FD), "DARTS_FOCUS", 2, 229, 1, 1, 0);
				func_113(&(uParam0->f_1FD), "DARTS_FAST", 2, 227, 1, 1, 0);
				func_113(&(uParam0->f_1FD), "IB_ZOOM", 2, 228, 1, 1, 0);
				func_110(&(uParam0->f_1FD), 1);
				func_322(&(uParam0->f_29A), 8, 0);
				func_322(&(uParam0->f_29A), 16, 0);
				func_322(&(uParam0->f_29A), 23, 0);
			}
			else if (iLocal_48 > 0 && !func_3(&(uParam0->f_29A), 17))
			{
				func_114(&(uParam0->f_1FD), 0, 0, 0, 1);
				func_113(&(uParam0->f_1FD), "DARTS_THROW", 2, 223, 0, 1, 0);
				func_113(&(uParam0->f_1FD), "DARTS_END_QT", 2, 235, 1, 1, 0);
				func_316(&(uParam0->f_1FD), "DARTS_AIM", 2, 20, 1, 0);
				func_113(&(uParam0->f_1FD), "DARTS_FAST", 2, 227, 1, 1, 0);
				func_113(&(uParam0->f_1FD), "IB_ZOOM", 2, 228, 1, 1, 0);
				func_110(&(uParam0->f_1FD), 1);
				func_322(&(uParam0->f_29A), 8, 0);
				func_322(&(uParam0->f_29A), 16, 0);
				func_322(&(uParam0->f_29A), 23, 0);
			}
		}
		else if (!func_3(&(uParam0->f_29A), 16))
		{
			func_114(&(uParam0->f_1FD), 1, 0, 0, 1);
			func_113(&(uParam0->f_1FD), "DARTS_SKIP", 2, 223, 1, 1, 0);
			func_113(&(uParam0->f_1FD), "DARTS_END_QT", 2, 235, 1, 1, 0);
			func_110(&(uParam0->f_1FD), 1);
			func_322(&(uParam0->f_29A), 16, 1);
			func_322(&(uParam0->f_29A), 8, 0);
			func_322(&(uParam0->f_29A), 15, 0);
			func_322(&(uParam0->f_29A), 17, 0);
			func_322(&(uParam0->f_29A), 23, 0);
		}
		unk_0xC2EAD30963BDAA47(76, 66);
		unk_0xF6A6FFB73848BF82(0f, 0f, 0f, 0f);
		unk_0x2A025E7CEBB76D14();
		func_192(func_109(func_3(&(uParam0->f_29A), 16), 1, 2));
		func_116(&(uParam0->f_1FD), 200f, 1, 0, 0, 1065353216);
	}
	else if ((func_3(&(uParam0->f_29A), 15) || func_3(&(uParam0->f_29A), 16)) || func_3(&(uParam0->f_29A), 23))
	{
		func_322(&(uParam0->f_29A), 15, 0);
		func_322(&(uParam0->f_29A), 16, 0);
		func_322(&(uParam0->f_29A), 23, 0);
	}
}

int func_316(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x1956C
{
	int iVar0;
	
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = uParam0->f_7B;
	if (iVar0 < 8)
	{
		uParam0->f_2[iVar0 /*15*/] = sParam1;
		uParam0->f_2[iVar0 /*15*/].f_1 = 0;
		uParam0->f_2[iVar0 /*15*/].f_2 = iParam5;
		uParam0->f_2[iVar0 /*15*/].f_C = 0;
		uParam0->f_2[iVar0 /*15*/].f_D = 0;
		uParam0->f_2[iVar0 /*15*/].f_E = 0;
		uParam0->f_2[iVar0 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[iVar0 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		unk_0xF0059F27F7BB6680(&(uParam0->f_2[iVar0 /*15*/].f_C), 0);
		if (iParam4 == 1)
		{
			unk_0xF0059F27F7BB6680(&(uParam0->f_2[iVar0 /*15*/].f_D), 0);
		}
		uParam0->f_2[iVar0 /*15*/].f_E++;
		uParam0->f_7B++;
		return 1;
	}
	return 0;
}

void func_317(var uParam0)//Position - 0x19637
{
	if (!unk_0xE186ACC7BE9B244E())
	{
		if (!func_3(&(uParam0->f_29A), 23))
		{
			func_114(&(uParam0->f_1FD), 0, 0, 0, 1);
			func_316(&(uParam0->f_1FD), "IB_MAPMOVE", 2, 21, 1, 0);
			func_113(&(uParam0->f_1FD), "IB_ZOOM", 2, 39, 1, 1, 0);
			func_110(&(uParam0->f_1FD), 1);
			func_322(&(uParam0->f_29A), 23, 1);
			func_322(&(uParam0->f_29A), 8, 0);
			func_322(&(uParam0->f_29A), 16, 0);
			func_322(&(uParam0->f_29A), 15, 0);
			func_322(&(uParam0->f_29A), 17, 0);
		}
		func_116(&(uParam0->f_1FD), 1128792064, 1, 0, 1, 1065353216);
	}
	else if ((func_3(&(uParam0->f_29A), 15) || func_3(&(uParam0->f_29A), 16)) || func_3(&(uParam0->f_29A), 23))
	{
		func_322(&(uParam0->f_29A), 15, 0);
		func_322(&(uParam0->f_29A), 16, 0);
		func_322(&(uParam0->f_29A), 23, 0);
		func_322(&(uParam0->f_29A), 17, 0);
	}
}

void func_318(var uParam0)//Position - 0x19749
{
	bool bVar0;
	
	bVar0 = false;
	if (!iLocal_54)
	{
		if (!unk_0x8FCEEB789599BD9B(2, 201) && !unk_0x8FCEEB789599BD9B(2, 202))
		{
			iLocal_54 = 1;
		}
		else
		{
			iLocal_54 = 0;
		}
	}
	if (*uParam0 != 13)
	{
		if (bVar0)
		{
			if (iLocal_54 && iLocal_53 == 0)
			{
				iLocal_54 = 0;
				bVar0 = false;
				bLocal_179 = false;
				unk_0x7456702622C62EA0(1);
			}
		}
		if (unk_0x093484B35A948BFC(2, 235) || unk_0xCB3E71B7B7FACCAF(2, 235))
		{
			if (!bLocal_179)
			{
				*uParam0 = 14;
				bLocal_179 = true;
				unk_0x7456702622C62EA0(1);
			}
		}
		else if (func_294("DARTS_QUIT"))
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
			bLocal_179 = false;
		}
	}
}

void func_319(int iParam0)//Position - 0x197EC
{
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		func_4(iParam0, "DARTS_BOAST", 0, 4);
	}
}

float func_320(int iParam0)//Position - 0x1980A
{
	if (iParam0 < 10)
	{
		return 0.107f;
	}
	if (iParam0 < 25)
	{
		return 0.096f;
	}
	if (iParam0 < 50)
	{
		return 0.085f;
	}
	if (iParam0 < 70)
	{
		return 0.075f;
	}
	return 0.064f;
}

float func_321(int iParam0)//Position - 0x1985F
{
	if (iParam0 < 10)
	{
		return 0.08f;
	}
	if (iParam0 < 25)
	{
		return 0.072f;
	}
	if (iParam0 < 50)
	{
		return 0.064f;
	}
	if (iParam0 < 70)
	{
		return 0.056f;
	}
	return 0.048f;
}

void func_322(int iParam0, int iParam1, bool bParam2)//Position - 0x198B4
{
	if (bParam2)
	{
		unk_0xF0059F27F7BB6680(iParam0, iParam1);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(iParam0, iParam1);
	}
}

int func_323(int iParam0, var uParam1)//Position - 0x198D4
{
	if (iParam0 >= 10)
	{
		if (!unk_0xFA30DFD0084E92FE(Global_19B04.f_49FD.f_6, 12))
		{
			*uParam1 = 12;
			return 1;
		}
	}
	return 0;
}

int func_324(int iParam0, var uParam1, var uParam2)//Position - 0x19900
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iParam0->f_1A6[iVar0] = 301;
		iParam0->f_1A9[iVar0] = 301;
		iVar0++;
	}
	iParam0->f_1C6 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			func_235(&(iParam0->f_5[iVar0 /*79*/][iVar1 /*26*/]));
			iVar1++;
		}
		func_234(uParam1, iVar0);
		func_240(uParam1, iVar0, 301);
		iVar0++;
	}
	iLocal_30 = 0;
	iLocal_31 = 0;
	iParam0->f_1AC = 0;
	iParam0->f_F9.f_3 = 0;
	iLocal_195 = 0;
	iParam0->f_1B4 = 0;
	iLocal_48 = 0;
	iLocal_172 = 1;
	iLocal_173 = 0;
	iLocal_175 = 0;
	iLocal_50 = 0;
	iParam0->f_1CA = 0;
	iParam0->f_1C8 = 0;
	iLocal_181 = 0;
	func_322(&(uParam2->f_29A), 6, 0);
	func_330();
	func_328(uParam2);
	if (iParam0->f_1C9)
	{
		func_325(iParam0->f_1C9);
		iParam0->f_1C9 = 0;
	}
	return 1;
}

void func_325(bool bParam0)//Position - 0x199EC
{
	unk_0x43F06392C4EF25E0(false);
	if (unk_0xEDEA6C8F42EE05F6(iLocal_77))
	{
		unk_0x348665177DBFB93B(iLocal_77, false);
	}
	if (unk_0xEDEA6C8F42EE05F6(iLocal_81))
	{
		unk_0x348665177DBFB93B(iLocal_81, false);
	}
	if (unk_0x17FAADF9916EF741())
	{
		func_327();
		unk_0x062C9995BFD27B2A(true, false, 3000, 1, 0, 0);
		unk_0x829FA4611BD56B44(500);
	}
	func_326(bParam0);
}

void func_326(bool bParam0)//Position - 0x19A3D
{
	if (bParam0)
	{
		unk_0x348665177DBFB93B(iLocal_75, true);
	}
}

void func_327()//Position - 0x19A51
{
	unk_0x348665177DBFB93B(iLocal_77, true);
}

void func_328(var uParam0)//Position - 0x19A60
{
	func_329();
	uParam0->f_29E = 3;
	func_322(&(uParam0->f_29A), 15, 0);
	func_322(&(uParam0->f_29A), 16, 0);
	func_322(&(uParam0->f_29A), 17, 0);
}

void func_329()//Position - 0x19A96
{
	int iVar0;
	
	Local_108.f_42 = -1;
	Local_108.f_43 = 10f;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Local_108.f_9[iVar0 /*7*/].f_3 = -1f;
		Local_108.f_9[iVar0 /*7*/].f_4 = -1f;
		Local_108.f_9[iVar0 /*7*/].f_5 = 0;
		Local_108.f_9[iVar0 /*7*/].f_6 = 0;
		iVar0++;
	}
	Local_108.f_5 = 0;
	Local_108.f_5.f_1 = -1f;
	Local_108.f_5.f_2 = 0;
	Local_108 = 0;
	Local_108.f_1 = 0;
}

void func_330()//Position - 0x19B06
{
	SYSTEM::SETTIMERA(0);
	iLocal_54 = 0;
	unk_0xA0E8D942C29EF5DA();
}

void func_331(bool bParam0, int iParam1)//Position - 0x19B1A
{
	int iVar0;
	
	if (!func_333(&iVar0, 0, iParam1))
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
		func_332(&(Global_43C1.f_159A[iVar0 /*10*/]));
		Global_43C1.f_15D7[iVar0] = 0;
	}
	else
	{
		Global_43C1.f_15D7[iVar0] = 0;
	}
}

void func_332(int iParam0)//Position - 0x19BD8
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

int func_333(var uParam0, bool bParam1, int iParam2)//Position - 0x19C01
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

void func_334(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x19C9E
{
	unk_0x29CD142125FE177B(*uParam0, "SET_PLAYER_SETS_AND_LEGS");
	unk_0x1E1FB49121565EB6(iParam1);
	unk_0x1E1FB49121565EB6(iParam2);
	unk_0x1E1FB49121565EB6(iParam3);
	unk_0x1E1FB49121565EB6(iParam4);
	unk_0xF9FBC2F3F73D94C9();
}

int func_335(var uParam0, var uParam1, var uParam2)//Position - 0x19CCE
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	unk_0xBBC4195AD74D153D(2, 200, 1);
	if (!func_3(&(uParam0->f_29A), 7))
	{
		func_392(0, 0, 0, 1);
		func_391(0, -1, 1);
		if (func_390())
		{
			if (Global_4118D6 == uParam0->f_294)
			{
				iVar1 = 1;
			}
			else
			{
				uParam0->f_294 = Global_4118D6;
				func_389(uParam0->f_294, 1, 1);
				unk_0xC4BA30B532FE260F(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				switch (uParam0->f_294)
				{
					case 0:
						sVar0 = "DARTS_LEGD";
						break;
					
					case 1:
						sVar0 = "DARTS_SETD";
						break;
					
					case 2:
						sVar0 = "";
						break;
				}
				if (unk_0x0F6F4C227FB5DD52(sVar0))
				{
					func_388(sVar0, 0, 0);
				}
			}
			Global_4118D7 = unk_0x105601648511CC64() + 300;
		}
		else if (func_387() && unk_0x105601648511CC64() > Global_4118D7)
		{
			if (Global_4118D6 == uParam0->f_294)
			{
				iVar2 = func_386(0);
				if (iVar2 == -1 || iVar2 == 1)
				{
					iVar1 = 1;
				}
			}
			Global_4118D7 = unk_0x105601648511CC64() + 300;
		}
		if (func_385(&(uParam0->f_27F)))
		{
			uParam0->f_294 = (uParam0->f_294 - 1);
			if (uParam0->f_294 < 0)
			{
				uParam0->f_294 = (uParam0->f_295 - 1);
			}
			func_389(uParam0->f_294, 1, 1);
			unk_0xC4BA30B532FE260F(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			switch (uParam0->f_294)
			{
				case 0:
					sVar0 = "DARTS_LEGD";
					break;
				
				case 1:
					sVar0 = "DARTS_SETD";
					break;
				
				case 2:
					sVar0 = "";
					break;
			}
			if (unk_0x0F6F4C227FB5DD52(sVar0))
			{
				func_388(sVar0, 0, 0);
			}
		}
		if (func_384(&(uParam0->f_282)))
		{
			uParam0->f_294++;
			if (uParam0->f_294 > (uParam0->f_295 - 1))
			{
				uParam0->f_294 = 0;
			}
			func_389(uParam0->f_294, 1, 1);
			unk_0xC4BA30B532FE260F(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			switch (uParam0->f_294)
			{
				case 0:
					sVar0 = "DARTS_LEGD";
					break;
				
				case 1:
					sVar0 = "DARTS_SETD";
					break;
				
				case 2:
					sVar0 = "";
					break;
			}
			if (unk_0x0F6F4C227FB5DD52(sVar0))
			{
				func_388(sVar0, 0, 0);
			}
		}
		if (func_383(&(uParam0->f_279)) || func_382(&(uParam0->f_279), uParam0->f_294, iVar1))
		{
			if (uParam0->f_294 == 0)
			{
				uParam0->f_296 = (uParam0->f_296 - 1);
				if (uParam0->f_296 < 0)
				{
					uParam0->f_296 = (uParam0->f_297 - 1);
				}
			}
			else if (uParam0->f_294 == 1)
			{
				uParam0->f_298 = (uParam0->f_298 - 1);
				if (uParam0->f_298 < 0)
				{
					uParam0->f_298 = (uParam0->f_299 - 1);
				}
			}
			unk_0xC4BA30B532FE260F(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			func_364(uParam0);
		}
		if (func_363(&(uParam0->f_27C)) || func_361(&(uParam0->f_27C), uParam0->f_294, iVar1))
		{
			if (uParam0->f_294 == 0)
			{
				uParam0->f_296++;
				if (uParam0->f_296 > (uParam0->f_297 - 1))
				{
					uParam0->f_296 = 0;
				}
			}
			else if (uParam0->f_294 == 1)
			{
				uParam0->f_298++;
				if (uParam0->f_298 > (uParam0->f_299 - 1))
				{
					uParam0->f_298 = 0;
				}
			}
			unk_0xC4BA30B532FE260F(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			func_364(uParam0);
		}
		if ((unk_0x694514BD37EC4E94(2, 201) || iVar1 == 1) && uParam0->f_294 == 2)
		{
			*uParam1 = func_360(uParam0->f_296 + 1, 1);
			*uParam2 = func_360(uParam0->f_298 + 1, 0);
			unk_0xC4BA30B532FE260F(-1, "OK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			return 1;
		}
		func_338(1, -1, 1, 0, 1, -1082130432, 0, 0);
		if (unk_0x093484B35A948BFC(2, 202) || func_337())
		{
			func_336(0, 0);
			func_322(&(uParam0->f_29A), 8, 0);
			func_322(&(uParam0->f_29A), 7, 1);
		}
	}
	else
	{
		func_2(uParam0);
		if (unk_0x093484B35A948BFC(2, 201))
		{
			func_36(0);
			*uParam1 = -1;
			return 1;
		}
		else if (unk_0x093484B35A948BFC(2, 202))
		{
			func_364(uParam0);
			func_322(&(uParam0->f_29A), 7, 0);
		}
	}
	return 0;
}

void func_336(bool bParam0, bool bParam1)//Position - 0x1A0DD
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

int func_337()//Position - 0x1A5BF
{
	if (unk_0x50465D2C022B9E04(2))
	{
		if (unk_0x694514BD37EC4E94(2, 238))
		{
			return 1;
		}
	}
	return 0;
}

void func_338(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)//Position - 0x1A5DE
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
	
	if (!func_333(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_357(0, bParam6))
	{
		return;
	}
	unk_0xC2EAD30963BDAA47(76, 84);
	unk_0xF6A6FFB73848BF82(-0.05f, -0.05f, 0f, 0f);
	fVar56 = 0f;
	fVar57 = 0f;
	if (Global_43C1)
	{
		if (func_18(29, 1, 1, &fVar36, &fVar37, bParam7))
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
		if (func_20())
		{
			iVar59 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar60) * fVar62));
		}
		fVar63 = (SYSTEM::TO_FLOAT(iVar59) / SYSTEM::TO_FLOAT(iVar60));
		fVar61 = (fVar63 / fVar62);
		if (func_20())
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
					StringCopy(&cVar64, func_24(29), 64);
					StringCopy(&cVar65, func_21(29, 1), 64);
					if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_1A3F[29 /*16*/])) == -1487683087)
					{
						func_356(Global_43BE, Global_43BF, fParam5, (fVar56 - 0f), 0, 0, 0, 255);
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
				func_356(Global_43BE, (Global_43BF + fVar56), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_43BF + fVar56) + 0.034722f) + 0f);
				if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_1)) != 0)
				{
					func_355();
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
						func_355();
						func_353((((Global_43BE + fParam5) - 0.00390625f) - func_354("CM_ITEM_COUNT", Global_43C1.f_15E4, Global_43C1.f_15E3)), ((Global_43BF + fVar56) + 0.00416664f), "CM_ITEM_COUNT", Global_43C1.f_15E4, Global_43C1.f_15E3);
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
				func_356(Global_43BE, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
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
					func_18(Global_43C1.f_121E, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_43BE + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_352(fVar40);
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
				func_356(Global_43BE, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
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
				func_352(fVar40);
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
					func_18(Global_43C1.f_121E, 1, 1, &fVar36, &fVar37, bParam7);
					func_351(Global_43C1.f_121E, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0x51DA985AC0B70E2E(func_24(Global_43C1.f_121E), func_21(Global_43C1.f_121E, 1), ((Global_43BE + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
					func_18(Global_41188A.f_43, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_43BE + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_352(fVar40);
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
				func_356(Global_43BE, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
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
				func_352(fVar40);
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
					func_18(Global_41188A.f_43, 1, 1, &fVar36, &fVar37, bParam7);
					func_351(Global_41188A.f_43, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0x51DA985AC0B70E2E(func_24(Global_41188A.f_43), func_21(Global_41188A.f_43, 1), ((Global_43BE + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
			func_346(iVar59, iParam1, 0, 0, 0, 0, bParam4, 1, 0);
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
					func_344(bVar32, 1, 0, 0, 0, 0, 0);
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
												func_344(bVar32, Global_43C1.f_64A[iVar24], Global_43C1.f_74B[iVar24], bVar54, iVar74, bVar51, bVar50);
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
													if (func_18(Global_43C1.f_1151[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
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
											if (func_18(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_43C1.f_1359[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_18(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_351(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0x51DA985AC0B70E2E(func_24(26), func_21(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
											if (func_18(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_18(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_351(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0x51DA985AC0B70E2E(func_24(27), func_21(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
											func_344(bVar32, Global_43C1.f_64A[iVar24], Global_43C1.f_74B[iVar24], bVar54, 0, bVar51, bVar50);
											if (Global_43C1.f_1EF7 && Global_43C1.f_1EF8 == iVar6)
											{
												func_343(bVar32);
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
													if (func_18(Global_43C1.f_1151[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar40 = (fVar40 + (fVar36 * 0.5f));
														if (func_18(Global_43C1.f_1151[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_351(Global_43C1.f_1151[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_43C1.f_1359[iVar8] == 2)
															{
																unk_0x51DA985AC0B70E2E(func_24(Global_43C1.f_1151[(iVar22 + iVar28)]), func_21(Global_43C1.f_1151[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0x51DA985AC0B70E2E(func_24(Global_43C1.f_1151[(iVar22 + iVar28)]), func_21(Global_43C1.f_1151[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
												if (func_342() && unk_0xB731B8C5BCE89836(joaat("fm_mission_creator")) > 0)
												{
													if (iVar8 == 0)
													{
														func_344(0, Global_43C1.f_64A[iVar24], Global_43C1.f_74B[iVar24], bVar54, 0, bVar51, bVar50);
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
													if (func_18(Global_43C1.f_1151[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar40 = (fVar40 + (fVar36 * 0.5f));
														if (func_18(Global_43C1.f_1151[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_351(Global_43C1.f_1151[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_43C1.f_1151[(iVar22 + iVar14)] == 30)
															{
																unk_0x51DA985AC0B70E2E(func_24(Global_43C1.f_1151[(iVar22 + iVar14)]), func_21(Global_43C1.f_1151[(iVar22 + iVar14)], bVar32), (Global_43BE + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else if (Global_43C1.f_1359[iVar8] == 2)
															{
																unk_0x51DA985AC0B70E2E(func_24(Global_43C1.f_1151[(iVar22 + iVar14)]), func_21(Global_43C1.f_1151[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0x51DA985AC0B70E2E(func_24(Global_43C1.f_1151[(iVar22 + iVar14)]), func_21(Global_43C1.f_1151[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
											func_344(bVar32, Global_43C1.f_64A[iVar24], Global_43C1.f_74B[iVar24], bVar54, 0, 0, 0);
											if (Global_43C1.f_1EF7 && Global_43C1.f_1EF8 == iVar6)
											{
												func_343(bVar32);
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
											if (func_18(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_43C1.f_1359[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_18(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_351(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0x51DA985AC0B70E2E(func_24(26), func_21(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
											if (func_18(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_18(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_351(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0x51DA985AC0B70E2E(func_24(27), func_21(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										func_344(bVar32, Global_43C1.f_64A[iVar24], Global_43C1.f_74B[iVar24], bVar54, 0, 0, 0);
										func_341((fVar34 + fVar40), fVar35, "NUMBER", Global_43C1.f_F4E[iVar20], 0);
									}
									bVar39 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_43C1.f_15DF)
										{
											func_344(bVar32, Global_43C1.f_64A[iVar24], Global_43C1.f_74B[iVar24], bVar54, 0, 0, 0);
											if (Global_43C1.f_1EF7 && Global_43C1.f_1EF8 == iVar6)
											{
												func_343(bVar32);
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
											if (func_18(26, 1, 0, &fVar36, &fVar37, 0))
											{
												if (Global_43C1.f_1359[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_18(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_351(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0x51DA985AC0B70E2E(func_24(26), func_21(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
											if (func_18(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_18(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_351(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0x51DA985AC0B70E2E(func_24(27), func_21(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										func_344(bVar32, Global_43C1.f_64A[iVar24], Global_43C1.f_74B[iVar24], bVar54, 0, 0, 0);
										func_340((fVar34 + fVar40), fVar35, "NUMBER", Global_43C1.f_104F[iVar21], Global_43C1.f_10D0[iVar21]);
									}
									bVar39 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar33)
									{
										if (func_18(Global_43C1.f_1151[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
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
												if (func_18(26, 1, 0, &fVar36, &fVar37, bParam7))
												{
													if (Global_43C1.f_1359[iVar8] == 2)
													{
														fVar40 = (fVar40 - (fVar36 * 2f));
													}
													fVar43 = (fVar36 * 0.5f);
													if (func_18(26, 1, 1, &fVar36, &fVar37, bParam7))
													{
														func_351(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
														unk_0x51DA985AC0B70E2E(func_24(26), func_21(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
												if (func_18(27, 1, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + fVar36);
													fVar43 = (fVar36 * 0.5f);
													if (func_18(27, 1, 1, &fVar36, &fVar37, bParam7))
													{
														func_351(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
														unk_0x51DA985AC0B70E2E(func_24(27), func_21(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
											}
											if (func_18(Global_43C1.f_1151[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_351(Global_43C1.f_1151[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
												unk_0x51DA985AC0B70E2E(func_24(Global_43C1.f_1151[iVar22]), func_21(Global_43C1.f_1151[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), (fVar36 * func_339(Global_43C1.f_1151[iVar22])), (fVar37 * func_339(Global_43C1.f_1151[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
									if (func_18(26, 1, 1, &fVar36, &fVar37, bParam7))
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
		func_38(0);
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
		func_192(1);
	}
	unk_0x2A025E7CEBB76D14();
}

float func_339(int iParam0)//Position - 0x1D244
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

void func_340(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)//Position - 0x1D2B3
{
	unk_0x8B371195127AACF2(sParam2);
	unk_0x3AE7CB4034BE212F(fParam3, iParam4);
	unk_0x3A8B9C7B1C825123(fParam0, fParam1, 0);
}

void func_341(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x1D2D2
{
	unk_0x8B371195127AACF2(sParam2);
	unk_0xAA5C5BF0489E5553(iParam3);
	unk_0x3A8B9C7B1C825123(fParam0, fParam1, iParam4);
}

bool func_342()//Position - 0x1D2F0
{
	return unk_0x7B2F21BFE86AEB61(-1762644250);
}

void func_343(bool bParam0)//Position - 0x1D301
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

void func_344(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x1D347
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_345(Global_43C1.f_16F6[iParam4], &iVar0, &iVar1, &iVar2);
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

void func_345(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x1D4F5
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

void func_346(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x1D77F
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_333(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_357(bParam4, bParam8))
	{
		return;
	}
	if (func_349())
	{
		return;
	}
	if (unk_0xF32BA80A2DED1FC6())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_347(unk_0xB5CEFD608600A09F(), 0))
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
					func_13(&(Global_43C1.f_1221[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x56BEECB328B6D29D(&(Global_43C1.f_12E2[iVar2 /*4*/])) == unk_0x56BEECB328B6D29D("PREV"))
					{
						func_13(&(Global_43C1.f_1221[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_43C1.f_1313[iVar1] == -1)
					{
						func_12(&(Global_43C1.f_12E2[iVar1 /*4*/]));
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
				func_13(&Global_41188A);
				if (Global_41188A.f_14 == -1)
				{
					func_12(&(Global_41188A.f_10));
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

bool func_347(int iParam0, int iParam1)//Position - 0x1DC5B
{
	bool bVar0;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		bVar0 = func_348(-1, 0) == 8;
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

int func_348(int iParam0, bool bParam1)//Position - 0x1DCA6
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_60();
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

int func_349()//Position - 0x1DCE7
{
	vector3 vVar0;
	
	if (Global_389D.f_1 > 3)
	{
		return 1;
	}
	if (func_350())
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

int func_350()//Position - 0x1DD55
{
	if (unk_0xB731B8C5BCE89836(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_351(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x1DD6F
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

void func_352(float fParam0)//Position - 0x1DE42
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

void func_353(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x1DEA1
{
	unk_0x8B371195127AACF2(sParam2);
	unk_0xAA5C5BF0489E5553(iParam3);
	unk_0xAA5C5BF0489E5553(iParam4);
	unk_0x3A8B9C7B1C825123(fParam0, fParam1, 0);
}

float func_354(char* sParam0, int iParam1, int iParam2)//Position - 0x1DEC4
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
	func_355();
	unk_0xE746379C2AF24EF6(sParam0);
	unk_0xAA5C5BF0489E5553(iParam1);
	unk_0xAA5C5BF0489E5553(iParam2);
	return unk_0x2207C0EA517B975D(1);
}

void func_355()//Position - 0x1DF06
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

void func_356(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x1DF90
{
	unk_0xF7EBEC3FF57AEC65((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

int func_357(bool bParam0, bool bParam1)//Position - 0x1DFBF
{
	if (Global_252E21.f_760.f_2B0 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x726D9204B160D23E() || (func_359(8, -1) && func_358() != 64)) || (unk_0x0352C1B6B66A87AC() != 0 && !bParam1)) || (unk_0x7930B3E9C919E90F() && !bParam0)) || unk_0x4F2BFB7C2A730EC7()) || Global_11646) || Global_43C1.f_1EFA) || unk_0x18158A50125911B6()) || Global_16B4F.f_569)
	{
		return 0;
	}
	return 1;
}

int func_358()//Position - 0x1E05C
{
	return Global_140815;
}

bool func_359(int iParam0, int iParam1)//Position - 0x1E068
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

int func_360(int iParam0, bool bParam1)//Position - 0x1E0A3
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 1:
				return 1;
			
			case 2:
				return 3;
			
			case 3:
				return 5;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				return 1;
			
			case 2:
				return 3;
			
			case 3:
				return 6;
			
			case 4:
				return 9;
			
			case 5:
				return 11;
			
			case 6:
				return 13;
			
			case 7:
				return 15;
			}
		
		default:
	}
	return 0;
}

int func_361(int iParam0, int iParam1, int iParam2)//Position - 0x1E12A
{
	if (!unk_0x50465D2C022B9E04(2))
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	if (func_386(0) == 1 && Global_4118D6 == iParam1)
	{
		if (!func_411(iParam0))
		{
			func_362(iParam0);
			return 1;
		}
		else if (func_7(iParam0) > 0.25f)
		{
			func_425(iParam0);
			return 1;
		}
	}
	else if (func_411(iParam0))
	{
		func_412(iParam0);
	}
	return 0;
}

void func_362(int iParam0)//Position - 0x1E1A2
{
	if (!func_411(iParam0))
	{
		func_425(iParam0);
	}
}

int func_363(int iParam0)//Position - 0x1E1BA
{
	float fVar0;
	
	fVar0 = 0f;
	if (!unk_0x50465D2C022B9E04(2))
	{
		fVar0 = unk_0x5F9521C8EE73F79F(2, 218);
	}
	if ((fVar0 > 0.8f || unk_0x8FCEEB789599BD9B(2, 190)) || unk_0xD3C4A010282C31F2(2, 190))
	{
		if (!func_411(iParam0))
		{
			func_362(iParam0);
			return 1;
		}
		else if (func_7(iParam0) > 0.25f)
		{
			func_425(iParam0);
			return 1;
		}
	}
	else if (func_411(iParam0))
	{
		func_412(iParam0);
	}
	return 0;
}

void func_364(var uParam0)//Position - 0x1E23F
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	func_336(0, 0);
	unk_0xE45648BDBF3441F5(141, &uVar0, &uVar1, &uVar2, &uVar3);
	func_381(uVar0, uVar1, uVar2, uVar3, 1);
	func_380(1, 2, 0, 0, 0);
	func_379(1, 2, 1, 1, 1);
	func_378(0, 1, 0, 0, 0);
	func_377("DARTS_TITLE");
	func_375(1, "ShopUI_Title_Darts", "ShopUI_Title_Darts");
	func_371(0, "DARTS_LEGS", 0, 1, 0, 0);
	func_368(0, func_360(uParam0->f_296 + 1, 1), 0);
	func_371(1, "DARTS_SETS", 0, 1, 0, 0);
	func_368(1, func_360(uParam0->f_298 + 1, 0), 0);
	func_367(2, 141, 141, 1);
	func_371(2, "DARTS_START", 0, 1, 0, 0);
	func_366(0);
	func_389(uParam0->f_294, 1, 1);
	if (uParam0->f_294 != 2)
	{
		func_388(func_108(uParam0->f_294 == 0, "DARTS_LEGD", "DARTS_SETD"), 0, 0);
	}
	func_365(201, "ITEM_SELECT", -1, 0);
	func_365(202, "IB_QUIT", -1, 0);
}

void func_365(int iParam0, char* sParam1, int iParam2, bool bParam3)//Position - 0x1E336
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
	if (!bParam3)
	{
		unk_0xF0059F27F7BB6680(&(Global_43C1.f_133A), Global_43C1.f_121F);
	}
	StringCopy(&(Global_43C1.f_1221[Global_43C1.f_121F /*16*/]), sVar0, 64);
	StringCopy(&(Global_43C1.f_12E2[Global_43C1.f_121F /*4*/]), sParam1, 16);
	Global_43C1.f_1313[Global_43C1.f_121F] = iParam2;
	Global_43C1.f_1320[Global_43C1.f_121F] = iParam0;
	Global_43C1.f_132D[Global_43C1.f_121F] = 32;
	Global_43C1.f_121F++;
}

void func_366(int iParam0)//Position - 0x1E3EB
{
	Global_43C1.f_15E5 = iParam0;
}

void func_367(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1E3FB
{
	Global_43C1.f_1EF7 = iParam3;
	Global_43C1.f_1EF4[0] = iParam1;
	Global_43C1.f_1EF4[1] = iParam2;
	Global_43C1.f_1EF8 = iParam0;
}

void func_368(int iParam0, int iParam1, bool bParam2)//Position - 0x1E429
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
	if (Global_43C1.f_13E4 >= 256)
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
	if (iVar0 != 2)
	{
		while (Global_43C1.f_13E1 < 4 && iVar0 != 2)
		{
			Global_43C1.f_13E1++;
			iVar0 = Global_43C1.f_133E[Global_43C1.f_13E1];
		}
		if (iVar0 != 2)
		{
			return;
		}
	}
	Global_43C1.f_F4E[Global_43C1.f_13E4] = iParam1;
	Global_43C1.f_13E4++;
	fVar1 = func_370("NUMBER", iParam1);
	if (Global_43C1.f_1351[Global_43C1.f_13E1])
	{
		func_18(26, 1, 0, &fVar2, &uVar3, 0);
		fVar1 = (fVar1 + (fVar2 * 2f));
	}
	if (fVar1 > Global_43C1.f_134A[Global_43C1.f_13E1])
	{
		Global_43C1.f_134A[Global_43C1.f_13E1] = fVar1;
	}
	if (bParam2)
	{
		fVar4 = func_369("NUMBER", iParam1);
		if (fVar4 > Global_43C1.f_15EC[iParam0])
		{
			Global_43C1.f_15EC[iParam0] = fVar4;
		}
	}
	unk_0xF0059F27F7BB6680(&(Global_43C1.f_135F[iParam0]), Global_43C1.f_13E1);
	Global_43C1.f_13E1++;
	Global_43C1.f_15EB = 2;
}

float func_369(char* sParam0, int iParam1)//Position - 0x1E5A8
{
	if (!unk_0x0F6F4C227FB5DD52(sParam0))
	{
	}
	if (iParam1 == 0)
	{
	}
	return unk_0x60F548525BE58E47(0.35f, 0);
}

float func_370(char* sParam0, int iParam1)//Position - 0x1E5CA
{
	if (!unk_0x0F6F4C227FB5DD52(sParam0))
	{
		return 0f;
	}
	func_344(1, 1, 0, 0, 0, 0, 0);
	unk_0xE746379C2AF24EF6(sParam0);
	unk_0xAA5C5BF0489E5553(iParam1);
	return unk_0x2207C0EA517B975D(1);
}

void func_371(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)//Position - 0x1E5FC
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
		func_374(Global_43C1.f_13E0, 1);
	}
	else
	{
		func_374(Global_43C1.f_13E0, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_373(&(Global_43C1.f_49[Global_43C1.f_13E2 /*6*/]));
		if (Global_43C1.f_1351[Global_43C1.f_13E1])
		{
			func_18(26, 1, 0, &fVar2, &uVar3, 0);
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
			fVar4 = func_372(&(Global_43C1.f_49[Global_43C1.f_13E2 /*6*/]));
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

float func_372(char* sParam0)//Position - 0x1E808
{
	if (!unk_0x0F6F4C227FB5DD52(sParam0))
	{
	}
	return unk_0x60F548525BE58E47(0.35f, 0);
}

float func_373(char* sParam0)//Position - 0x1E824
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
	func_344(0, 1, 0, 0, 0, 0, 0);
	unk_0xE746379C2AF24EF6(sParam0);
	return unk_0x2207C0EA517B975D(1);
}

void func_374(int iParam0, bool bParam1)//Position - 0x1E861
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

void func_375(int iParam0, char* sParam1, char* sParam2)//Position - 0x1E8AD
{
	Global_43C1 = iParam0;
	func_376(29, sParam1, sParam2);
}

void func_376(int iParam0, char* sParam1, char* sParam2)//Position - 0x1E8C4
{
	StringCopy(&(Global_43C1.f_16FE[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_43C1.f_1A3F[iParam0 /*16*/]), sParam2, 64);
}

void func_377(char* sParam0)//Position - 0x1E8E8
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

void func_378(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1E933
{
	Global_43C1.f_1351[0] = iParam0;
	Global_43C1.f_1351[1] = iParam1;
	Global_43C1.f_1351[2] = iParam2;
	Global_43C1.f_1351[3] = iParam3;
	Global_43C1.f_1351[4] = iParam4;
}

void func_379(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1E972
{
	Global_43C1.f_1359[0] = iParam0;
	Global_43C1.f_1359[1] = iParam1;
	Global_43C1.f_1359[2] = iParam2;
	Global_43C1.f_1359[3] = iParam3;
	Global_43C1.f_1359[4] = iParam4;
}

void func_380(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1E9B1
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

void func_381(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)//Position - 0x1EA5B
{
	Global_43C1.f_1EDD = iParam4;
	Global_43C1.f_1ED9 = uParam0;
	Global_43C1.f_1EDA = uParam1;
	Global_43C1.f_1EDB = uParam2;
	Global_43C1.f_1EDC = uParam3;
}

int func_382(int iParam0, int iParam1, int iParam2)//Position - 0x1EA8B
{
	if (!unk_0x50465D2C022B9E04(2))
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	if (func_386(0) == -1 && Global_4118D6 == iParam1)
	{
		if (!func_411(iParam0))
		{
			func_362(iParam0);
			return 1;
		}
		else if (func_7(iParam0) > 0.25f)
		{
			func_425(iParam0);
			return 1;
		}
	}
	else if (func_411(iParam0))
	{
		func_412(iParam0);
	}
	return 0;
}

int func_383(int iParam0)//Position - 0x1EB03
{
	float fVar0;
	
	fVar0 = 0f;
	if (!unk_0x50465D2C022B9E04(2))
	{
		fVar0 = unk_0x5F9521C8EE73F79F(2, 218);
	}
	if (fVar0 < -0.8f || unk_0x8FCEEB789599BD9B(2, 189))
	{
		if (!func_411(iParam0))
		{
			func_362(iParam0);
			return 1;
		}
		else if (func_7(iParam0) > 0.25f)
		{
			func_425(iParam0);
			return 1;
		}
	}
	else if (func_411(iParam0))
	{
		func_412(iParam0);
	}
	return 0;
}

int func_384(int iParam0)//Position - 0x1EB7B
{
	float fVar0;
	
	fVar0 = 0f;
	if (!unk_0x50465D2C022B9E04(2))
	{
		fVar0 = unk_0x5F9521C8EE73F79F(2, 219);
	}
	if (fVar0 > 0.8f || unk_0x8FCEEB789599BD9B(2, 187))
	{
		if (!func_411(iParam0))
		{
			func_362(iParam0);
			return 1;
		}
		else if (func_7(iParam0) > 0.25f)
		{
			func_425(iParam0);
			return 1;
		}
	}
	else if (func_411(iParam0))
	{
		func_412(iParam0);
	}
	return 0;
}

int func_385(int iParam0)//Position - 0x1EBF3
{
	float fVar0;
	
	fVar0 = 0f;
	if (!unk_0x50465D2C022B9E04(2))
	{
		fVar0 = unk_0x5F9521C8EE73F79F(2, 219);
	}
	if (fVar0 < -0.8f || unk_0x8FCEEB789599BD9B(2, 188))
	{
		if (!func_411(iParam0))
		{
			func_362(iParam0);
			return 1;
		}
		else if (func_7(iParam0) > 0.25f)
		{
			func_425(iParam0);
			return 1;
		}
	}
	else if (func_411(iParam0))
	{
		func_412(iParam0);
	}
	return 0;
}

int func_386(float fParam0)//Position - 0x1EC6B
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	fVar6 = 0.02f;
	fVar0 = 0.05f;
	fVar2 = (fVar0 + Global_43C0);
	fVar1 = (Global_43C1.f_15E0 - (IntToFloat(Global_43C1.f_15E2) * 0.034722f));
	fVar5 = (fVar0 + fParam0);
	unk_0xC2EAD30963BDAA47(76, 84);
	unk_0xF6A6FFB73848BF82(-0.05f, -0.05f, 0f, 0f);
	unk_0xC498840061F88232(fVar0, fVar1, &fVar0, &fVar1);
	unk_0xC498840061F88232(fVar2, fVar3, &fVar2, &fVar3);
	unk_0x2A025E7CEBB76D14();
	fVar4 = (fVar2 - fVar6);
	if (fParam0 > 0f)
	{
		if (Global_4118D0 >= fVar0 && Global_4118D0 < fVar5)
		{
			return -999;
		}
	}
	if (Global_4118D0 >= fVar0 && Global_4118D0 < fVar4)
	{
		return -1;
	}
	if (Global_4118D0 >= fVar4 && Global_4118D0 <= fVar2)
	{
		return 1;
	}
	return 0;
}

int func_387()//Position - 0x1ED38
{
	if (unk_0x50465D2C022B9E04(2))
	{
		return unk_0xD3C4A010282C31F2(2, 237);
	}
	return 0;
}

void func_388(char* sParam0, int iParam1, int iParam2)//Position - 0x1ED53
{
	int iVar0;
	
	StringCopy(&(Global_43C1.f_11D2), sParam0, 16);
	Global_43C1.f_1218 = 0;
	Global_43C1.f_1219 = 0;
	Global_43C1.f_121A = 0;
	Global_43C1.f_121B = 0;
	Global_43C1.f_121C = iParam1;
	Global_43C1.f_121D = unk_0x105601648511CC64();
	Global_43C1.f_121E = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_43C1.f_11D6[iVar0] = 0;
		iVar0++;
	}
}

void func_389(int iParam0, bool bParam1, int iParam2)//Position - 0x1EDB8
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

int func_390()//Position - 0x1EF0A
{
	if (unk_0x50465D2C022B9E04(2))
	{
		if (Global_4118D6 > -1)
		{
			if (unk_0x694514BD37EC4E94(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_391(int iParam0, int iParam1, bool bParam2)//Position - 0x1EF31
{
	if (!unk_0x50465D2C022B9E04(2))
	{
		return 0;
	}
	if (unk_0xE186ACC7BE9B244E() || unk_0x18158A50125911B6())
	{
		return 0;
	}
	if (bParam2)
	{
		unk_0x08009E53F6E7E15C();
	}
	if (Global_4118D6 == -6)
	{
		unk_0x5C26A2F0EACA52AB(4);
		if (iParam0 && unk_0x8FCEEB789599BD9B(2, 237))
		{
			return 1;
		}
		else
		{
			Global_4118D6 = -1;
			return 0;
		}
	}
	if (((Global_4118D6 > -1 || Global_4118D6 == -3) || Global_4118D6 == -2) || unk_0x1753B0F1C41FE93F())
	{
		unk_0x5C26A2F0EACA52AB(1);
		return 0;
	}
	if (Global_4118D6 == -1 && iParam0)
	{
		if (unk_0x8FCEEB789599BD9B(2, 237))
		{
			unk_0x5C26A2F0EACA52AB(4);
			Global_4118D6 = -6;
			return 1;
		}
		else
		{
			unk_0x5C26A2F0EACA52AB(3);
			return 0;
		}
	}
	unk_0x5C26A2F0EACA52AB(1);
	return 0;
}

void func_392(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x1F011
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar6 = (0.034722f / 2f);
	iVar13 = -1;
	if (!unk_0x50465D2C022B9E04(2))
	{
		Global_4118D6 = -1;
		return;
	}
	unk_0xA561536D61421F90(1);
	fVar0 = Global_43BE;
	fVar2 = (fVar0 + Global_43C0);
	fVar3 = Global_43C1.f_15E0;
	fVar1 = (Global_43C1.f_15E0 - (IntToFloat(Global_43C1.f_15E2) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_43C1.f_15E2 < 1)
	{
		fVar1 = (Global_43C1.f_15E0 - 0.034722f);
	}
	unk_0xC2EAD30963BDAA47(76, 84);
	unk_0xF6A6FFB73848BF82(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	unk_0xC498840061F88232(fVar0, fVar1, &fVar0, &fVar1);
	unk_0xC498840061F88232(fVar2, fVar3, &fVar2, &fVar3);
	unk_0x2A025E7CEBB76D14();
	func_394();
	if (Global_4118D6 == -6)
	{
		return;
	}
	Global_4118D6 = -1;
	fVar7 = Global_4118D0;
	fVar8 = Global_4118D1;
	if (Global_43C1.f_15E3 > Global_43C1.f_15E2)
	{
		if (((Global_4118D0 >= fVar0 && Global_4118D0 <= fVar2) && Global_4118D1 >= fVar3) && Global_4118D1 < (fVar3 + fVar6))
		{
			Global_4118D6 = -2;
			if (bParam3)
			{
				func_393(0);
			}
			return;
		}
		if (((Global_4118D0 >= fVar0 && Global_4118D0 <= fVar2) && Global_4118D1 >= (fVar3 + fVar6)) && Global_4118D1 < (fVar3 + 0.034722f))
		{
			Global_4118D6 = -3;
			if (bParam3)
			{
				func_393(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = SYSTEM::FLOOR((fVar9 / 0.034722f));
		if (Global_43C1.f_15E3 == -1)
		{
			Global_4118D6 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_43C1.f_15E2);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				unk_0xC2EAD30963BDAA47(76, 84);
				unk_0xF6A6FFB73848BF82(-0.05f, -0.05f, 0f, 0f);
				func_356(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_43C0, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				unk_0x2A025E7CEBB76D14();
			}
		}
		Global_4118D6 = Global_43C1.f_1D80[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4118D6 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_4118D6 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_4118D6 = -4;
		return;
	}
	Global_4118D6 = -1;
}

void func_393(bool bParam0)//Position - 0x1F2BD
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_43BE;
	fVar1 = Global_43C1.f_15E0;
	unk_0xC2EAD30963BDAA47(76, 84);
	unk_0xF6A6FFB73848BF82(-0.05f, -0.05f, 0f, 0f);
	if (Global_4118D6 == -2)
	{
		func_356(fVar0, fVar1, Global_43C0, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4118D6 == -3)
	{
		func_356(fVar0, (fVar1 + fVar2), Global_43C0, fVar2, 255, 255, 255, iVar3);
	}
	unk_0x2A025E7CEBB76D14();
}

void func_394()//Position - 0x1F346
{
	Global_4118D2 = Global_4118D0;
	Global_4118D3 = Global_4118D1;
	Global_4118D0 = unk_0xBCEB785249D7E5BE(2, 239);
	Global_4118D1 = unk_0xBCEB785249D7E5BE(2, 240);
	Global_4118D4 = (Global_4118D0 - Global_4118D2);
	Global_4118D5 = (Global_4118D1 - Global_4118D3);
}

float func_395(float fParam0)//Position - 0x1F38E
{
	if (fParam0 < 1.3f)
	{
		return 35f;
	}
	else if (fParam0 < 1.35f)
	{
		return 33f;
	}
	return 30f;
}

void func_396(var uParam0)//Position - 0x1F3C4
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	uParam0->f_294 = 0;
	uParam0->f_295 = 3;
	uParam0->f_296 = 0;
	uParam0->f_297 = 3;
	uParam0->f_298 = 0;
	uParam0->f_299 = 7;
	func_336(0, 0);
	unk_0xE45648BDBF3441F5(141, &uVar0, &uVar1, &uVar2, &uVar3);
	func_381(uVar0, uVar1, uVar2, uVar3, 1);
	func_380(1, 2, 0, 0, 0);
	func_379(1, 2, 1, 1, 1);
	func_378(0, 1, 0, 0, 0);
	func_377("DARTS_TITLE");
	func_375(1, "ShopUI_Title_Darts", "ShopUI_Title_Darts");
	func_371(0, "DARTS_LEGS", 0, 1, 0, 0);
	func_368(0, 1, 0);
	func_371(1, "DARTS_SETS", 0, 1, 0, 0);
	func_368(1, 1, 0);
	func_371(2, "DARTS_START", 0, 1, 0, 0);
	func_367(2, 141, 141, 1);
	func_366(0);
	func_389(0, 1, 1);
	func_388("DARTS_LEGD", 0, 0);
	func_397();
	func_365(201, "ITEM_SELECT", -1, 0);
	func_365(202, "IB_QUIT", -1, 0);
}

void func_397()//Position - 0x1F4B1
{
	if (unk_0x8ACB0C3FACC09467())
	{
		unk_0xFCEBCC3D5D7DB96E(0.325f, 0.3f);
	}
}

int func_398(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5)//Position - 0x1F4CF
{
	int iVar0;
	int iVar1;
	
	if ((func_421() && unk_0x105601648511CC64() >= iLocal_196 + 1000) && *iParam0 != 8)
	{
		if (!unk_0x17FAADF9916EF741() && !unk_0x422F9EDE839E6ABB())
		{
			unk_0x7A41D32A383895D8(500);
		}
	}
	if (unk_0x17FAADF9916EF741() && *iParam0 != 8)
	{
		*iParam0 = 8;
	}
	switch (*iParam0)
	{
		case 2:
			switch (iLocal_31)
			{
				case 0:
					if (*uParam3 == 2)
					{
						iLocal_196 = unk_0x105601648511CC64();
						func_406(uParam1->f_1, uParam1->f_4, func_408(2), func_407(0), 0, 1);
						*uParam2 = 20;
						uParam2->f_1 = 2;
						func_277(uParam4[0 /*26*/], uParam1, uParam3, uParam2, 1);
					}
					if (*uParam3 == 3)
					{
						if (func_264(uParam4[0 /*26*/], uParam1, 0, 0))
						{
							unk_0x10B5C0C7337B8420(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
							iLocal_31++;
							func_425(iParam5);
							*uParam3 = 2;
						}
					}
					break;
				
				case 1:
					if (func_414(iParam5) > 1f && !func_294("DARTS_DOUBLE_T"))
					{
						func_409("DARTS_DOUBLE_T", -1);
					}
					if (func_414(iParam5) > 5f)
					{
						func_425(iParam5);
						unk_0x7456702622C62EA0(1);
						func_400(uParam1->f_1, uParam1->f_4, func_408(3), func_407(0), 1000);
						iLocal_31 = 0;
						*iParam0 = 3;
					}
					break;
			}
			break;
		
		case 3:
			switch (iLocal_31)
			{
				case 0:
					if (!unk_0x16BE1286447174A9(iLocal_83))
					{
						if (*uParam3 == 2)
						{
							*uParam2 = 20;
							uParam2->f_1 = 3;
							func_277(uParam4[1 /*26*/], uParam1, uParam3, uParam2, 1);
						}
						if (*uParam3 == 3)
						{
							if (func_264(uParam4[1 /*26*/], uParam1, 0, 0))
							{
								unk_0x10B5C0C7337B8420(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
								iLocal_31++;
								func_425(iParam5);
								*uParam3 = 2;
							}
						}
					}
					break;
				
				case 1:
					if (func_414(iParam5) > 1f && !func_294("DARTS_TRIPLE_T"))
					{
						func_409("DARTS_TRIPLE_T", -1);
					}
					if (func_414(iParam5) > 5f)
					{
						func_425(iParam5);
						unk_0x7456702622C62EA0(1);
						func_406(uParam1->f_1, uParam1->f_4, func_408(4), func_407(0), 1000, 0);
						iLocal_31 = 0;
						*iParam0 = 4;
					}
					break;
			}
			break;
		
		case 4:
			switch (iLocal_31)
			{
				case 0:
					if (!unk_0x16BE1286447174A9(iLocal_82))
					{
						if (*uParam3 == 2)
						{
							*uParam2 = 50;
							uParam2->f_1 = 1;
							func_277(uParam4[2 /*26*/], uParam1, uParam3, uParam2, 1);
						}
						if (*uParam3 == 3)
						{
							if (func_264(uParam4[2 /*26*/], uParam1, 0, 0))
							{
								unk_0x10B5C0C7337B8420(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
								iLocal_31++;
								func_425(iParam5);
								*uParam3 = 2;
							}
						}
					}
					break;
				
				case 1:
					if (func_414(iParam5) > 1f && !func_294("DARTS_BULL_T"))
					{
						func_409("DARTS_BULL_T", -1);
					}
					if (func_414(iParam5) > 5f)
					{
						func_425(iParam5);
						unk_0x7456702622C62EA0(1);
						unk_0xC4BA30B532FE260F(-1, "CAM_PAN_DARTS", "HUD_MINI_GAME_SOUNDSET", 1);
						func_400(uParam1->f_1, uParam1->f_4, func_408(5), func_407(1), 1500);
						iLocal_31 = 0;
						*iParam0 = 5;
					}
					break;
			}
			break;
		
		case 5:
			if (!unk_0x16BE1286447174A9(iLocal_83) && !func_294("DARTS_DBL_WIN"))
			{
				func_409("DARTS_DBL_WIN", -1);
			}
			if (func_414(iParam5) > 6f)
			{
				func_425(iParam5);
				*iParam0 = 6;
			}
			break;
		
		case 6:
			unk_0xC4BA30B532FE260F(-1, "CAM_PAN_DARTS", "HUD_MINI_GAME_SOUNDSET", 1);
			unk_0xAE099C1ADC89C331(iLocal_75, iLocal_83, 1500, 1, 1);
			*iParam0 = 7;
			break;
		
		case 7:
			if (!unk_0x16BE1286447174A9(iLocal_75))
			{
				iLocal_31 = 0;
				unk_0x7456702622C62EA0(1);
				unk_0xEB233A3B7635D2AC();
				iVar0 = 0;
				while (iVar0 < 3)
				{
					func_399(uParam4[iVar0 /*26*/]);
					iVar0++;
				}
				return 1;
			}
			break;
		
		case 8:
			if (unk_0x17FAADF9916EF741())
			{
				iLocal_31 = 0;
				unk_0x7456702622C62EA0(1);
				unk_0xEB233A3B7635D2AC();
				iVar1 = 0;
				while (iVar1 < 3)
				{
					func_399(uParam4[iVar1 /*26*/]);
					iVar1++;
				}
				unk_0x348665177DBFB93B(iLocal_75, true);
				unk_0x829FA4611BD56B44(500);
				return 1;
			}
			break;
	}
	return 0;
}

void func_399(int iParam0)//Position - 0x1F8EB
{
	vector3 vVar0;
	
	vVar0 = { -1668.044f, -1056.45f, 13.1063f };
	if (unk_0x724D816EA203A79E(*iParam0))
	{
		unk_0x641B19E156645A92(*iParam0, vVar0, 1, 0, 0, 1);
		unk_0xF8ED8988FAF2823F(iParam0);
		unk_0xA35241BCE4C1A24B(iParam0);
	}
}

void func_400(vector3 vParam0, float fParam1, vector3 vParam2, vector3 vParam3, int iParam4)//Position - 0x1F92B
{
	unk_0x4E12C92FF3A1C1D1(iLocal_83);
	unk_0x9DF315A9EFFF87AC(iLocal_83, 35f);
	unk_0x6125108F6208C1F6(iLocal_83, unk_0x89D97EB4FAE4A574(vParam0, fParam1, vParam2));
	unk_0x3553F2A72957724E(iLocal_83, Vector(fParam1, 0f, 0f) - vParam3, 2);
	unk_0xAE099C1ADC89C331(iLocal_83, iLocal_82, iParam4, 1, 1);
}

int func_401(var uParam0, bool bParam1, bool bParam2)//Position - 0x1F974
{
	if (!func_411(&(uParam0->f_2)))
	{
		func_425(&(uParam0->f_2));
	}
	unk_0x4E0EC60D119222B1(14);
	if (!bParam2)
	{
		unk_0x4B6031094354FED6(*uParam0, 255, 255, 255, 255, 0);
	}
	else if (bParam2)
	{
		unk_0x4B6031094354FED6(*uParam0, 255, 255, 255, 255, 0);
	}
	if (bParam1)
	{
		if (unk_0x8FCEEB789599BD9B(2, 201))
		{
			return 0;
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_7(&(uParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(uParam0->f_1)
	{
		func_412(&(uParam0->f_2));
		return 0;
	}
	return 1;
}

void func_402(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, bool bParam6, float fParam7)//Position - 0x1FA06
{
	char* sVar0;
	
	sVar0 = func_403(iParam5);
	unk_0x29CD142125FE177B(*uParam0, "RESET_MOVIE");
	unk_0xF9FBC2F3F73D94C9();
	unk_0x29CD142125FE177B(*uParam0, sVar0);
	unk_0x57016C44F10111F0("STRING");
	unk_0x449F0674640D94C0(iParam4);
	unk_0xC9C304D0AABE1335(sParam1);
	unk_0x64989E60CF560CA1();
	if (!unk_0xF1734B55490E9045(sParam2))
	{
		func_12(sParam2);
	}
	if (bParam6)
	{
		unk_0x1E1FB49121565EB6(100);
		unk_0x5E5DBD0A6623969E(true);
	}
	unk_0xF9FBC2F3F73D94C9();
	if (bParam6)
	{
		unk_0x29CD142125FE177B(*uParam0, "TRANSITION_UP");
		unk_0xD44E04EBBDC4CE88(fParam7);
		unk_0xF9FBC2F3F73D94C9();
	}
	func_425(&(uParam0->f_2));
	uParam0->f_1 = iParam3;
}

char* func_403(int iParam0)//Position - 0x1FA95
{
	switch (iParam0)
	{
		case 0:
			return "SHOW_WASTED_MP_MESSAGE";
		
		case 1:
			return "SHOW_BUSTED_MP_MESSAGE";
		
		case 2:
			return "SHOW_CENTERED_MP_MESSAGE_LARGE";
		
		case 3:
			return "SHOW_CENTERED_TOP_MP_MESSAGE";
		
		case 4:
			return "SHOW_MIDSIZED_MESSAGE";
		
		case 5:
			return "SHOW_MISSION_END_MP_MESSAGE";
		
		case 6:
			return "SHOW_MISSION_PASSED_MESSAGE";
		
		case 7:
			return "SHOW_MISSION_FAILED_MP_MESSAGE";
		
		default:
	}
	return "SHOW_CENTERED_MP_MESSAGE_LARGE";
}

void func_404()//Position - 0x1FB10
{
	unk_0x348665177DBFB93B(iLocal_75, true);
	unk_0x062C9995BFD27B2A(true, false, 3000, 1, 0, 0);
	if (unk_0xEDEA6C8F42EE05F6(iLocal_82))
	{
		unk_0x348665177DBFB93B(iLocal_82, false);
	}
	if (unk_0xEDEA6C8F42EE05F6(iLocal_77))
	{
		unk_0x348665177DBFB93B(iLocal_77, false);
	}
	if (unk_0xEDEA6C8F42EE05F6(iLocal_78))
	{
		unk_0x348665177DBFB93B(iLocal_78, false);
	}
	if (unk_0xEDEA6C8F42EE05F6(iLocal_79))
	{
		unk_0x348665177DBFB93B(iLocal_79, false);
	}
	if (unk_0xEDEA6C8F42EE05F6(iLocal_80))
	{
		unk_0x348665177DBFB93B(iLocal_80, false);
	}
	if (unk_0xEDEA6C8F42EE05F6(iLocal_81))
	{
		unk_0x348665177DBFB93B(iLocal_81, false);
	}
}

char* func_405(int iParam0)//Position - 0x1FB8B
{
	if (iLocal_207 == 1)
	{
		switch (iParam0)
		{
			case 0:
				return "DARTS_MEET_OPPONENT_BAR";
			
			case 1:
				return "DARTS_MENU_BAR";
			
			case 2:
				return "DARTS_START_MATCH_BAR";
			
			case 3:
				return "DARTS_MATCH_COMPLETE_BAR";
			
			default:
		}
	}
	else if (iLocal_207 == 2)
	{
		switch (iParam0)
		{
			case 0:
				return "DARTS_MEET_OPPONENT_ROCK";
			
			case 1:
				return "DARTS_MENU_ROCK";
			
			case 2:
				return "DARTS_START_MATCH_ROCK";
			
			case 3:
				return "DARTS_MATCH_COMPLETE_ROCK";
			}
		
		default:
	}
	return "";
}

void func_406(vector3 vParam0, float fParam1, vector3 vParam2, vector3 vParam3, int iParam4, bool bParam5)//Position - 0x1FC1E
{
	unk_0x4E12C92FF3A1C1D1(iLocal_82);
	unk_0x9DF315A9EFFF87AC(iLocal_82, 35f);
	unk_0x6125108F6208C1F6(iLocal_82, unk_0x89D97EB4FAE4A574(vParam0, fParam1, vParam2));
	unk_0x3553F2A72957724E(iLocal_82, Vector(fParam1, 0f, 0f) - vParam3, 2);
	if (bParam5)
	{
		unk_0x348665177DBFB93B(iLocal_82, true);
	}
	else
	{
		unk_0xAE099C1ADC89C331(iLocal_82, iLocal_83, iParam4, 1, 1);
	}
}

Vector3 func_407(bool bParam0)//Position - 0x1FC76
{
	if (bParam0)
	{
		return -4.7411f, 0f, -15.32f;
	}
	return 4.9918f, 0f, 4.3916f;
}

Vector3 func_408(int iParam0)//Position - 0x1FC9F
{
	switch (iParam0)
	{
		case 0:
			return -0.0588f, -1.6075f, 0.1336f;
		
		case 2:
			return -0.0944f, -1.2308f, 0.3468f;
		
		case 3:
			return -0.0948f, -1.243f, 0.2067f;
		
		case 4:
			return -0.0955f, -1.2524f, 0.1006f;
		
		case 5:
			return -0.0951f, -1.2526f, 0.0895f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_409(char* sParam0, int iParam1)//Position - 0x1FD29
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, true, iParam1);
}

int func_410(int iParam0)//Position - 0x1FD40
{
	if (!unk_0x1D403DFADBC2DE3C(func_487(), 0))
	{
		func_4(func_487(), "GENERIC_YES", 0, 6);
	}
	else
	{
		func_4(iParam0, "GENERIC_AGREE", 0, 6);
	}
	return 1;
}

bool func_411(int iParam0)//Position - 0x1FD73
{
	return unk_0xFA30DFD0084E92FE(*iParam0, 1);
}

void func_412(int iParam0)//Position - 0x1FD83
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

void func_413(int iParam0, char* sParam1, int iParam2)//Position - 0x1FD99
{
	unk_0x53D8178763EDCE60(iParam0, sParam1, func_6(iParam2), 1);
}

float func_414(int iParam0)//Position - 0x1FDB0
{
	if (func_411(iParam0))
	{
		if (func_9(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_8(unk_0xFA30DFD0084E92FE(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return 0f;
}

void func_415(int iParam0)//Position - 0x1FDEC
{
	if (!func_411(iParam0))
	{
		func_362(iParam0);
	}
	else
	{
		func_425(iParam0);
	}
}

void func_416()//Position - 0x1FE0D
{
	Global_394A = 0;
	func_417();
}

void func_417()//Position - 0x1FE1D
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

void func_418(int iParam0)//Position - 0x1FE74
{
	if (Global_3943)
	{
		func_420(0, 0);
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
	if (!func_419())
	{
		Global_389D.f_1 = 3;
	}
}

int func_419()//Position - 0x1FEE4
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_420(bool bParam0, bool bParam1)//Position - 0x1FF0B
{
	if (bParam0)
	{
		if (func_39(0))
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

int func_421()//Position - 0x1FF7F
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

int func_422(var uParam0)//Position - 0x1FFB1
{
	int iVar0;
	
	iVar0 = unk_0x3E12B546F3F2597A();
	if (unk_0x724D816EA203A79E(iVar0))
	{
		if (!func_423(iVar0))
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && unk_0xE642C1AC73CE364E(iVar0, unk_0xBC25C936A095B5BA(), vLocal_169, 0, 1, 0))
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

int func_423(int iParam0)//Position - 0x20028
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

void func_424(var uParam0, int iParam1)//Position - 0x2006B
{
	iParam1++;
	unk_0x29CD142125FE177B(*uParam0, "SET_PLAYER_HIGHLIGHT");
	unk_0x1E1FB49121565EB6(iParam1);
	unk_0xF9FBC2F3F73D94C9();
}

void func_425(int iParam0)//Position - 0x2008F
{
	func_426(iParam0, 0f);
}

void func_426(int iParam0, float fParam1)//Position - 0x2009E
{
	iParam0->f_1 = (func_8(unk_0xFA30DFD0084E92FE(*iParam0, 4)) - fParam1);
	unk_0xF0059F27F7BB6680(iParam0, 1);
	unk_0x7CB6FD92BE491AD9(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_427(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x200CC
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

void func_428(var uParam0, char* sParam1, char* sParam2)//Position - 0x20167
{
	unk_0x29CD142125FE177B(*uParam0, "SET_DARTS_PLAYER_NAMES");
	func_34(sParam1);
	func_34(sParam2);
	unk_0xF9FBC2F3F73D94C9();
}

void func_429(float fParam0, struct<4> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x2018B
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(func_487()) && !unk_0x36CEFBE9B745A58D(func_487()))
	{
		unk_0x57EB4CC8F1928A47(func_487());
	}
	else
	{
		if (unk_0x724D816EA203A79E(uParam5->f_5) && !unk_0x36CEFBE9B745A58D(uParam5->f_5))
		{
			unk_0x77815D3407C6700D(uParam5->f_5, true, 1);
			iLocal_170[1] = uParam5->f_5;
			unk_0xA4E856A8CD53B8DF(iLocal_170[1]);
		}
		else if (func_431(uParam4))
		{
			unk_0xA4E856A8CD53B8DF(iLocal_170[1]);
		}
		else
		{
			iLocal_170[1] = unk_0x01B3635C3E8EDD81(26, iLocal_204, Param1.f_3, fParam0, 1, true);
		}
		if (unk_0x3C03CFD5DD1E2D97(iLocal_170[1], "Darts_name"))
		{
			iVar0 = unk_0x67CFC62D543B19EF(iLocal_170[1], "Darts_name");
			if (954610991 == iVar0)
			{
				sLocal_252 = func_434("RAYMOND");
				iLocal_253 = 954610991;
			}
			else if (94453331 == iVar0)
			{
				sLocal_252 = func_434("JOHAN");
				iLocal_253 = 94453331;
			}
			else if (1891555423 == iVar0)
			{
				sLocal_252 = func_434("STAN");
				iLocal_253 = 1891555423;
			}
			else if (-1067630349 == iVar0)
			{
				sLocal_252 = func_434("VINCE");
				iLocal_253 = -1067630349;
			}
			else if (885327384 == iVar0)
			{
				sLocal_252 = func_434("KRISTY");
				iLocal_253 = 885327384;
			}
			else if (-1791000994 == iVar0)
			{
				sLocal_252 = func_434("MARLENE");
				iLocal_253 = -1791000994;
			}
			else if (1954368234 == iVar0)
			{
				sLocal_252 = func_434("LORIE");
				iLocal_253 = 1954368234;
			}
			else if (-863218904 == iVar0)
			{
				sLocal_252 = func_434("SHELLEY");
				iLocal_253 = -863218904;
			}
		}
		unk_0x3F9FE9BB735B1604(iLocal_170[1], "Darts_name", iLocal_253);
	}
	iVar1 = unk_0x6F79ECA8C83E4357(iLocal_170[1]);
	func_430(iVar1);
	unk_0x85DB484A637CEAB9(iLocal_170[1], iLocal_170[0], 0);
	unk_0x85DB484A637CEAB9(iLocal_170[0], iLocal_170[1], 0);
}

void func_430(int iParam0)//Position - 0x20384
{
	int iVar0;
	
	iVar0 = unk_0x491B2241281A03B7(0, 2);
	switch (iParam0)
	{
		case joaat("a_f_m_salton_01"):
			switch (iVar0)
			{
				case 0:
					sLocal_57 = "A_F_M_SALTON_01_WHITE_FULL_03";
					break;
				
				case 1:
					sLocal_57 = "A_F_M_SALTON_01_WHITE_FULL_02";
					break;
			}
			break;
		
		case joaat("a_f_o_salton_01"):
			sLocal_57 = "A_F_M_SALTON_01_WHITE_FULL_01";
			break;
		
		case joaat("a_m_y_vinewood_01"):
			sLocal_57 = "G_M_Y_LOST_01_BLACK_FULL_01";
			break;
		
		case joaat("a_m_y_vinewood_03"):
			sLocal_57 = "G_M_Y_LOST_02_LATINO_FULL_01";
			break;
		
		case joaat("a_m_y_vinewood_04"):
			sLocal_57 = "G_M_Y_LOST_01_BLACK_FULL_02";
			break;
		
		case joaat("a_m_y_stlat_01"):
			sLocal_57 = "G_M_Y_LOST_02_LATINO_FULL_02";
			break;
		
		case joaat("a_m_y_stwhi_02"):
			sLocal_57 = "G_M_Y_LOST_01_WHITE_FULL_01";
			break;
	}
}

int func_431(var uParam0)//Position - 0x20423
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x252B0CBDBF5803ED(unk_0xBC25C936A095B5BA(), uParam0, -1))
	{
		if (!unk_0x36CEFBE9B745A58D((*uParam0)[iVar0]))
		{
			if ((((((unk_0x6F79ECA8C83E4357((*uParam0)[iVar0]) == joaat("a_f_m_salton_01") || unk_0x6F79ECA8C83E4357((*uParam0)[iVar0]) == joaat("a_f_o_salton_01")) || unk_0x6F79ECA8C83E4357((*uParam0)[iVar0]) == joaat("a_m_y_vinewood_01")) || unk_0x6F79ECA8C83E4357((*uParam0)[iVar0]) == joaat("a_m_y_stlat_01")) || unk_0x6F79ECA8C83E4357((*uParam0)[iVar0]) == joaat("a_m_y_vinewood_04")) || unk_0x6F79ECA8C83E4357((*uParam0)[iVar0]) == joaat("a_m_y_stwhi_02")) || unk_0x6F79ECA8C83E4357((*uParam0)[iVar0]) == joaat("a_m_y_vinewood_03"))
			{
				unk_0x77815D3407C6700D((*uParam0)[iVar0], true, 1);
				iLocal_170[1] = (*uParam0)[iVar0];
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_432(int iParam0)//Position - 0x2050C
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 3;
		while (iVar0 <= (155 - 1))
		{
			if (func_433(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_433(int iParam0)//Position - 0x2054C
{
	if (!func_87(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

char* func_434(char* sParam0)//Position - 0x20577
{
	if (unk_0x83D607D7994DEF3A() == 7)
	{
		if (unk_0x3362CDE8460ED38B(sParam0, "MICHAEL"))
		{
			return "??????????";
		}
		else if (unk_0x3362CDE8460ED38B(sParam0, "FRANKLIN"))
		{
			return "????????????????";
		}
		else if (unk_0x3362CDE8460ED38B(sParam0, "TREVOR"))
		{
			return "????????????";
		}
		else if (unk_0x3362CDE8460ED38B(sParam0, "LAMAR"))
		{
			return "??????????";
		}
		else if (unk_0x3362CDE8460ED38B(sParam0, "JIMMY"))
		{
			return "????????????";
		}
		else if (unk_0x3362CDE8460ED38B(sParam0, "KRISTY"))
		{
			return "????????????";
		}
		else if (unk_0x3362CDE8460ED38B(sParam0, "MARLENE"))
		{
			return "????????????";
		}
		else if (unk_0x3362CDE8460ED38B(sParam0, "LORIE"))
		{
			return "????????";
		}
		else if (unk_0x3362CDE8460ED38B(sParam0, "SHELLEY"))
		{
			return "??????????";
		}
		else if (unk_0x3362CDE8460ED38B(sParam0, "RAYMOND"))
		{
			return "??????????????";
		}
		else if (unk_0x3362CDE8460ED38B(sParam0, "JOHAN"))
		{
			return "??????????";
		}
		else if (unk_0x3362CDE8460ED38B(sParam0, "STAN"))
		{
			return "????????";
		}
		else if (unk_0x3362CDE8460ED38B(sParam0, "VINCE"))
		{
			return "????????";
		}
	}
	return sParam0;
}

void func_435(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x206B1
{
	if (unk_0x724D816EA203A79E(*uParam0))
	{
		uParam0->f_4 = unk_0x349C94FFF43E2979(*uParam0);
	}
	if (!bParam3)
	{
		func_437(uParam1, uParam0);
	}
	vLocal_41 = { 0f, (-2.3685f + fLocal_34), 0.1f };
	vLocal_41 = { vLocal_41 + vLocal_35 };
	vLocal_40 = { unk_0x89D97EB4FAE4A574(uParam0->f_1, uParam0->f_4, vLocal_41) };
	func_436(uParam2, uParam0);
}

void func_436(var uParam0, var uParam1)//Position - 0x20719
{
	uParam0->f_3 = { 0f, -0.15f, 0f };
	uParam0->f_3 = { uParam0->f_3 + vLocal_35 };
	*uParam0 = { unk_0x89D97EB4FAE4A574(uParam1->f_1, uParam1->f_4, 0f, 0f, 0f) };
}

void func_437(var uParam0, var uParam1)//Position - 0x20754
{
	*uParam0 = { unk_0x89D97EB4FAE4A574(uParam1->f_1, uParam1->f_4, -0.4f, (-2.4f + fLocal_34), -1.7272f) };
	uParam0->f_3 = { unk_0x89D97EB4FAE4A574(uParam1->f_1, uParam1->f_4, 0.5f, (-2.4f + fLocal_34), -1.7272f) };
}

int func_438(var uParam0, var uParam1)//Position - 0x207A6
{
	if (!unk_0x284F2ACE6839D3C0("SCRIPT\DARTS", false, -1))
	{
		return 0;
	}
	if (!unk_0x284F2ACE6839D3C0("SCRIPT\FAMILY1_2", false, -1))
	{
		return 0;
	}
	if ((((((((((((!unk_0xD6513D668481290A(iLocal_28) || !unk_0xD6513D668481290A(iLocal_29)) || !unk_0xD6513D668481290A(iLocal_37)) || !unk_0xD6513D668481290A(iLocal_204)) || !unk_0xA7F138B5B1AB2CF6(*uParam0)) || !unk_0xA7F138B5B1AB2CF6(uParam1->f_285)) || !unk_0xA7F138B5B1AB2CF6(uParam1->f_39)) || !unk_0xA7F138B5B1AB2CF6(uParam1->f_3E)) || !unk_0xFA9040D29FE330BD(3)) || !unk_0x499783D01578C2D2("Darts")) || !unk_0xF9E082857622D91E(sLocal_254)) || !unk_0xF9E082857622D91E(sLocal_255)) || !func_439(0, -1, 0))
	{
		return 0;
	}
	return 1;
}

bool func_439(char* sParam0, int iParam1, bool bParam2)//Position - 0x2088A
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_333(&iVar0, 1, iParam1))
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
	bVar2 = func_440(&(Global_43C1.f_159A[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_440(var uParam0)//Position - 0x20980
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

void func_441(var uParam0, var uParam1)//Position - 0x20A22
{
	unk_0xF243B7A14FCFD0F4(iLocal_28);
	unk_0xF243B7A14FCFD0F4(iLocal_29);
	unk_0xF243B7A14FCFD0F4(iLocal_37);
	unk_0xF243B7A14FCFD0F4(iLocal_204);
	unk_0x8AA3F48A15444B98("Darts", false);
	unk_0x8AA3F48A15444B98("ShopUI_Title_Darts", false);
	unk_0x522053D86D6E1C7A(sLocal_254);
	unk_0x522053D86D6E1C7A(sLocal_255);
	*uParam0 = unk_0x9934FEFB3B8C6DB8("darts_scoreboard");
	uParam1->f_285 = func_187();
	uParam1->f_39 = func_443();
	uParam1->f_3E = func_442();
	unk_0x900CF084251DED26("DARTS", 3);
}

int func_442()//Position - 0x20A90
{
	return unk_0x9934FEFB3B8C6DB8("MIDSIZED_MESSAGE");
}

int func_443()//Position - 0x20AA0
{
	return unk_0x9934FEFB3B8C6DB8("MP_BIG_MESSAGE_FREEMODE");
}

void func_444(int iParam0, int iParam1, vector3 vParam2, float fParam3)//Position - 0x20AB0
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 7)
		{
			iParam0->f_1[iVar0 /*8*/][iVar1] = 1;
			iVar1++;
		}
		iVar0++;
	}
	if (iParam1 == 0)
	{
		iParam0->f_12 = { 989.399f, -99.674f, 75.925f };
		iParam0->f_15 = { 180f, 0f, 252.555f };
		iParam0->f_18 = { 1.82f, 1.328f, 1f };
	}
	else
	{
		iParam0->f_12 = { 1992.223f, 3049.814f, 48.333f };
		iParam0->f_15 = { 180f, 0f, 87.77f };
		iParam0->f_18 = { 1.82f, 1.328f, 1f };
	}
	if (!func_445(vParam2) && fParam3 != 0f)
	{
		iParam0->f_12 = { unk_0x89D97EB4FAE4A574(vParam2, fParam3, -0.687645f, -0.350352f, 0.343273f) };
		iParam0->f_15 = { 180f, 0f, (fParam3 - -29.98685f) };
	}
	iParam0->f_1B = 0.885f;
	iParam0->f_1C = 0.244f;
	iParam0->f_1D = 0.17f;
	iParam0->f_1E = 0.415f;
}

int func_445(vector3 vParam0)//Position - 0x20BCC
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_446(int iParam0)//Position - 0x20BF6
{
	int iVar0;
	
	iVar0 = iParam0 + 1;
	Local_38 = 0.5f;
	Local_38.f_1 = 0.5f;
	if (unk_0x877E3741B282A35F())
	{
		Local_38.f_2 = 0.05f;
		Local_38.f_3 = 0.095f;
	}
	else
	{
		Local_38.f_2 = 0.065f;
		Local_38.f_3 = 0.09f;
	}
	Local_38.f_4 = 255;
	Local_38.f_5 = 250;
	Local_38.f_6 = 255;
	Local_38.f_7 = 123;
	if (iVar0 == 1)
	{
		Local_38.f_4 = 255;
		Local_38.f_5 = 255;
		Local_38.f_6 = 255;
	}
	else if (iVar0 == 2)
	{
		Local_38.f_4 = 255;
		Local_38.f_5 = 255;
		Local_38.f_6 = 255;
	}
	Local_38.f_8 = 0f;
	Local_39 = 0f;
	Local_39.f_1 = 0f;
	Local_39.f_2 = 0.061f;
	Local_39.f_3 = 0.105f;
	Local_39.f_4 = 200;
	Local_39.f_5 = 45;
	Local_39.f_6 = 40;
	Local_39.f_7 = 255;
	Local_39.f_8 = 0f;
}

void func_447(var uParam0, int iParam1)//Position - 0x20CC9
{
	if (iParam1 == 0)
	{
		uParam0->f_1 = iLocal_28;
	}
	else
	{
		uParam0->f_1 = iLocal_29;
	}
	uParam0->f_18 = 0;
	uParam0->f_17 = 0;
}

void func_448()//Position - 0x20CF0
{
	int iVar0;
	
	unk_0x1E8543FC04D492CE();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_1C0DEF.f_51[iVar0] = 0;
		iVar0++;
	}
}

void func_449(vector3 vParam0, float fParam1)//Position - 0x20D19
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	float fVar7;
	vector3 vVar8;
	float fVar9;
	float fVar10;
	vector3 vVar11;
	float fVar12;
	float fVar13;
	vector3 vVar14;
	vector3 vVar15;
	vector3 vVar16;
	
	fLocal_89 = unk_0x3771EE4CB542D71E(0);
	fVar7 = 30f;
	fVar7 = func_395(fLocal_89);
	vVar8 = { -0.192784f, -1.73287f, 0.0262985f };
	fVar9 = 1.7939f;
	fVar10 = -1.3346f;
	if (unk_0x877E3741B282A35F())
	{
		vVar11 = { -0.0974819f, -1.65968f, 0.335098f };
		fVar12 = -1.3023f;
		fVar13 = -12.4139f;
	}
	else
	{
		vVar11 = { -0.112635f, -1.86963f, 0.45417f };
		fVar12 = -3.7542f;
		fVar13 = -14.4576f;
	}
	vVar14 = { 0.261599f, -0.750354f, -0.392929f };
	vVar16 = { 0.281314f, -0.573735f, -0.39603f };
	vVar1 = { unk_0x89D97EB4FAE4A574(vParam0, fParam1, vVar8) };
	vVar3 = { fVar10, 0f, (fParam1 - fVar9) };
	vVar0 = { unk_0x89D97EB4FAE4A574(vParam0, fParam1, vVar11) };
	vVar2 = { fVar13, 0f, (fParam1 - fVar12) };
	vVar4 = { unk_0x89D97EB4FAE4A574(vParam0, fParam1, vVar14) };
	vVar5 = { 0.8351f, -0.0048f, (fParam1 - 186.5073f) };
	vVar15 = { unk_0x89D97EB4FAE4A574(vParam0, fParam1, vVar16) };
	vVar6 = { 0.8351f, -0.0048f, (fParam1 - 186.5073f) };
	iLocal_75 = unk_0x585DE1CBEEB2D27D(26379945, vVar0, vVar2, fVar7, 0, 2);
	iLocal_76 = unk_0x585DE1CBEEB2D27D(26379945, vVar1, vVar3, fVar7, 0, 2);
	iLocal_77 = unk_0x585DE1CBEEB2D27D(26379945, vVar4, vVar5, 65f, 0, 2);
	iLocal_78 = unk_0x585DE1CBEEB2D27D(26379945, vVar15, vVar6, 65f, 0, 2);
	iLocal_79 = unk_0x585DE1CBEEB2D27D(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	iLocal_80 = unk_0x585DE1CBEEB2D27D(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	iLocal_82 = unk_0x585DE1CBEEB2D27D(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	iLocal_83 = unk_0x585DE1CBEEB2D27D(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	iLocal_81 = unk_0x585DE1CBEEB2D27D(26379945, 1996.235f, 3048.456f, 48.0237f, -3.4831f, 0.0223f, 60.6925f, 38.1f, 0, 2);
	unk_0x9DF315A9EFFF87AC(iLocal_77, 43.35f);
	unk_0x9DF315A9EFFF87AC(iLocal_78, 42.35f);
	unk_0x2FB83B8BD6C05FD2(iLocal_77, "HAND_SHAKE", 0.1f);
	unk_0x2FB83B8BD6C05FD2(iLocal_78, "HAND_SHAKE", 0.1f);
}

void func_450(var uParam0, var uParam1)//Position - 0x20F7C
{
	uParam0->f_1 = { *uParam1 };
	uParam0->f_4 = uParam1->f_3;
	if (unk_0x724D816EA203A79E(uParam1->f_4))
	{
		*uParam0 = uParam1->f_4;
	}
	iLocal_33[0] = 20;
	iLocal_33[10] = 3;
	iLocal_33[1] = 1;
	iLocal_33[11] = 19;
	iLocal_33[2] = 18;
	iLocal_33[12] = 7;
	iLocal_33[3] = 4;
	iLocal_33[13] = 16;
	iLocal_33[4] = 13;
	iLocal_33[14] = 8;
	iLocal_33[5] = 6;
	iLocal_33[15] = 11;
	iLocal_33[6] = 10;
	iLocal_33[16] = 14;
	iLocal_33[7] = 15;
	iLocal_33[17] = 9;
	iLocal_33[8] = 2;
	iLocal_33[18] = 12;
	iLocal_33[9] = 17;
	iLocal_33[19] = 5;
	iLocal_33[20] = 20;
}

void func_451()//Position - 0x21038
{
	Global_4336.f_6 = 1;
}

void func_452(int iParam0, bool bParam1)//Position - 0x21046
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

var func_453(int iParam0, int iParam1)//Position - 0x21068
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_454(iParam0, iParam1);
	unk_0x6CB99B97664C3727(iVar1, &uVar0, -1);
	return uVar0;
}

var func_454(int iParam0, int iParam1)//Position - 0x21086
{
	var uVar0;
	var uVar1;
	
	func_455(iParam0, iParam1, &uVar0, &uVar1);
	return uVar0;
}

void func_455(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x2109C
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp0_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp0_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp0_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp0_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp0_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp0_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp0_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp0_stealth_ability");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp1_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp1_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp1_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp1_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp1_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp1_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp1_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp1_stealth_ability");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp2_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp2_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp2_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp2_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp2_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp2_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp2_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp2_stealth_ability");
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam3 = 64;
					break;
				
				case 1:
					*uParam3 = 65;
					break;
				
				case 3:
					*uParam3 = 67;
					break;
				
				case 2:
					*uParam3 = 66;
					break;
				
				case 4:
					*uParam3 = 68;
					break;
				
				case 5:
					*uParam3 = 69;
					break;
				
				case 6:
					*uParam3 = 70;
					break;
				
				case 7:
					*uParam3 = 71;
					break;
			}
			break;
	}
}

void func_456(bool bParam0)//Position - 0x212F3
{
	if (bParam0)
	{
		func_457();
		if (Global_389D.f_1 == 10 || Global_389D.f_1 == 9)
		{
			unk_0xF0059F27F7BB6680(&Global_93C, 16);
		}
		Global_389D.f_1 = 1;
		if (func_39(0))
		{
			func_418(0);
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

void func_457()//Position - 0x21356
{
	if (Global_389D.f_1 == 9 || Global_389D.f_1 == 10)
	{
		Global_3DED = 0;
		Global_3DE9 = 1;
	}
}

void func_458(int iParam0, var uParam1, var uParam2)//Position - 0x2137F
{
	int iVar0;
	int iVar1;
	
	unk_0x0FD8C89650533D97(1);
	func_256(8);
	func_309();
	if (bLocal_178)
	{
		func_475(&uLocal_194);
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			func_399(&(iParam0->f_5[iVar0 /*79*/][iVar1 /*26*/]));
			iVar1++;
		}
		iVar0++;
	}
	unk_0x2CA123B0622F495C(iLocal_28);
	unk_0x2CA123B0622F495C(iLocal_29);
	if (!unk_0x36CEFBE9B745A58D(iLocal_170[0]) && !unk_0x36CEFBE9B745A58D(iLocal_170[1]))
	{
		unk_0x44C98C11ED6DD327(iLocal_170[0]);
		unk_0x44C98C11ED6DD327(iLocal_170[1]);
	}
	func_474();
	unk_0x2CA123B0622F495C(iLocal_37);
	func_473();
	func_472(uParam1->f_285);
	func_471(&(uParam1->f_39));
	if (!unk_0x1D403DFADBC2DE3C(func_487(), 0))
	{
		unk_0x75E3FA28CC7D5707(func_487(), func_470());
		func_469(iLocal_202, iLocal_203);
	}
	else
	{
		func_467(&(iLocal_170[1]));
	}
	func_456(0);
	func_466(uParam2);
	func_36(0);
	unk_0xC0404835F30391BB(15);
	if (unk_0x97EF4023B86C354F())
	{
		if (iParam0->f_1CC && !iLocal_192)
		{
			func_465(190, 0);
		}
	}
	func_98();
	func_448();
	func_90(&(uParam1->f_48));
	SYSTEM::WAIT(200);
	if (iLocal_185)
	{
		func_462(130, 0, 0);
		func_459();
	}
	func_452(23, 0);
	unk_0x95E4B6F3ED223F5A();
}

void func_459()//Position - 0x214CC
{
	func_460();
}

int func_460()//Position - 0x214D9
{
	if (func_461(0))
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

bool func_461(bool bParam0)//Position - 0x21524
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_1163A, 0);
}

void func_462(int iParam0, int iParam1, int iParam2)//Position - 0x2154F
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
		func_59((891 + iParam0), 1, -1, 1);
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
		func_463();
	}
}

void func_463()//Position - 0x21637
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
		func_81(13, SYSTEM::FLOOR(Global_19B04.f_27B5.f_F0D));
	}
	if (!unk_0xF9BFA43C1BAFD016())
	{
		if (!Global_11542)
		{
			if (func_464() == 2 == 0 && !unk_0x7AF0088ABFA713B6())
			{
				if (unk_0x670C0C6C780A3F84())
				{
					Global_199FA = 0;
				}
				if (!Global_DA9F)
				{
					func_460();
				}
			}
		}
	}
}

int func_464()//Position - 0x21AF8
{
	return Global_62BD;
}

void func_465(int iParam0, bool bParam1)//Position - 0x21B03
{
	struct<6> Var0[1];
	struct<8> Var1[1];
	
	if (!unk_0x97EF4023B86C354F())
	{
		return;
	}
	StringCopy(&(Var1[0 /*8*/]), "GameType", 32);
	if (bParam1)
	{
		StringCopy(&(Var0[0 /*6*/]), "MP", 24);
	}
	else
	{
		StringCopy(&(Var0[0 /*6*/]), "SP", 24);
	}
	if (func_217(iParam0, &Var0, &Var1, 1, -1, 0, 0))
	{
		unk_0x18054B9E2612CC6D(103, iLocal_106[1], 0f);
		unk_0x18054B9E2612CC6D(99, iLocal_106[2], 0f);
		unk_0x18054B9E2612CC6D(109, iLocal_106[3], 0f);
		unk_0x18054B9E2612CC6D(106, iLocal_106[5], 0f);
		unk_0x18054B9E2612CC6D(2, iLocal_106[10], 0f);
		unk_0x18054B9E2612CC6D(107, iLocal_106[8], 0f);
		unk_0x18054B9E2612CC6D(116, iLocal_106[6], 0f);
	}
}

void func_466(var uParam0)//Position - 0x21BAE
{
	if (uParam0->f_1 != 0)
	{
		unk_0xB0B0FE33F4F22679(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_232 && uParam0->f_4 != 0)
	{
		if (unk_0x8ACB0C3FACC09467())
		{
			unk_0x29CD142125FE177B(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0x5E5DBD0A6623969E(false);
			unk_0xF9FBC2F3F73D94C9();
		}
		unk_0xB0B0FE33F4F22679(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_234)
	{
		unk_0xC4248B71D9B26306(false);
		uParam0->f_234 = 0;
	}
	if (!Global_1164E)
	{
		if (!unk_0x0928DEFC3216677B(unk_0xFC1CAE18F3ECBF2D()))
		{
			if (!Global_1164F)
			{
				if (unk_0x17FAADF9916EF741() && !func_461(0))
				{
					unk_0x829FA4611BD56B44(800);
				}
			}
		}
	}
	func_36(0);
}

void func_467(var uParam0)//Position - 0x21C55
{
	if (unk_0x724D816EA203A79E(*uParam0) && !unk_0x36CEFBE9B745A58D(*uParam0))
	{
		unk_0x02DAF06EA4F08219(&uLocal_205);
		unk_0xC5A6DFE2B8987B17(&uLocal_205);
		if (unk_0x724D816EA203A79E(iLocal_170[0]))
		{
			unk_0x56F2E1B5599188FA(0, iLocal_170[0], 8000, 2049, 3);
		}
		unk_0xDE2D2B13F24A979D(0, 1000);
		if (bLocal_183)
		{
			if (!unk_0xFA30DFD0084E92FE(Global_19ADD, 10))
			{
				unk_0x346129B364057FF6(0, func_468(iLocal_207 == 2, vLocal_242, vLocal_244), 1f, 20000, 0.25f, 0, func_117(iLocal_207 == 2, fLocal_246, fLocal_248));
			}
			else
			{
				unk_0x346129B364057FF6(0, func_468(iLocal_207 == 2, vLocal_241, vLocal_243), 1f, 20000, 0.25f, 0, func_117(iLocal_207 == 2, fLocal_245, fLocal_247));
			}
			unk_0xA3A7138EAD2268A0(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
		}
		else
		{
			unk_0x346129B364057FF6(0, func_468(iLocal_207 == 2, vLocal_241, vLocal_243), 1f, 20000, 0.25f, 0, func_117(iLocal_207 == 2, 172.6813f, 142.6717f));
			unk_0xA3A7138EAD2268A0(0, "WORLD_HUMAN_STAND_IMPATIENT", 0, 1);
		}
		unk_0x535008C596714F9E(uLocal_205);
		unk_0xA8E6405305C0D7DF(*uParam0, uLocal_205);
		unk_0x22321800954A532E(*uParam0, true);
	}
	unk_0x2CA123B0622F495C(iLocal_204);
}

Vector3 func_468(bool bParam0, vector3 vParam1, vector3 vParam2)//Position - 0x21D90
{
	if (bParam0)
	{
		return vParam1;
	}
	return vParam2;
}

void func_469(int iParam0, var uParam1)//Position - 0x21DAB
{
	if (Global_15B5E == iParam0)
	{
		Global_15B5F = Global_15B5E;
		Global_15B60 = uParam1;
		Global_15B5E = 23;
	}
}

var func_470()//Position - 0x21DD3
{
	return unk_0x705BBFE5A8ADE4A9(unk_0xFC1CAE18F3ECBF2D());
}

void func_471(int iParam0)//Position - 0x21DE3
{
	if (unk_0xA7F138B5B1AB2CF6(*iParam0))
	{
		unk_0xB0B0FE33F4F22679(iParam0);
		*iParam0 = 0;
	}
}

void func_472(var uParam0)//Position - 0x21DFF
{
	unk_0xB0B0FE33F4F22679(&uParam0);
}

void func_473()//Position - 0x21E0D
{
	unk_0x7456702622C62EA0(1);
	unk_0x1C51717D9E91D69B(0);
	unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
	unk_0x43F06392C4EF25E0(true);
}

void func_474()//Position - 0x21E2E
{
	if (unk_0x724D816EA203A79E(iLocal_36))
	{
		unk_0xA35241BCE4C1A24B(&iLocal_36);
	}
}

void func_475(var uParam0)//Position - 0x21E45
{
	int iVar0;
	
	iVar0 = *uParam0;
	if (unk_0x724D816EA203A79E(iVar0))
	{
		if (!func_423(iVar0))
		{
			unk_0xD434A01DEA38A939(iVar0, true, 0);
			unk_0xDC078F87049ECECE(iVar0, true, 0);
			unk_0x346478B12F69D4E3(iVar0, false);
		}
	}
}

void func_476()//Position - 0x21E7C
{
	int iVar0;
	
	if (unk_0xACE95AD318CE412B("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_19B04.f_2360 || func_461(0))
	{
		if (!func_484())
		{
			iVar0 = func_483();
			if (iVar0 != -1)
			{
				if (!func_478(iVar0))
				{
					return;
				}
				unk_0xF0059F27F7BB6680(&(Global_1478C[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_477();
		}
	}
}

void func_477()//Position - 0x21EED
{
	Global_16B3E = 1;
	if (unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1))
	{
		if (unk_0xF1734B55490E9045(&Global_1162A))
		{
			switch (func_85())
			{
				case 0:
					StringCopy(&Global_1162A, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_1162A, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_1162A, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_1162E, "", 16);
		}
		Global_16B3E = 0;
	}
	else if (!unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0xF1734B55490E9045(&Global_1162A))
		{
			switch (func_85())
			{
				case 0:
					StringCopy(&Global_1162A, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_1162A, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_1162A, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_1162E, "", 16);
		}
		Global_16B3E = 0;
		unk_0xF0059F27F7BB6680(&(Global_16B1B.f_14), 25);
	}
}

int func_478(int iParam0)//Position - 0x21FDC
{
	int iVar0;
	int iVar1;
	
	func_477();
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		unk_0x31E433A1F2A666D9(5000);
	}
	iVar0 = Global_1478C[iParam0 /*5*/];
	iVar1 = Global_1164F.f_6D[iVar0 /*4*/];
	func_482(iVar1, 1);
	unk_0xD0D466F17C0F30DB(unk_0xB5CEFD608600A09F());
	unk_0xD50A43D7C495F078(unk_0xB5CEFD608600A09F());
	func_479(&(Global_19B04.f_932.f_21B), iVar1);
	if (Global_154EB == Global_16B40)
	{
		Global_19B04.f_2360.f_14A[iVar1 /*6*/].f_1++;
	}
	if (!unk_0xFA30DFD0084E92FE(Global_147B0[iVar1 /*34*/].f_F, 1))
	{
		if (!unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			unk_0xC63520BF0B3FB162(0);
		}
	}
	Global_19B04.f_2360.f_14A[iVar1 /*6*/].f_2++;
	Global_154EB = Global_16B40;
	if (iParam0 == -1)
	{
		if (Global_19B04.f_2360)
		{
		}
		return 0;
	}
	if (unk_0xFA30DFD0084E92FE(Global_1478C[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (unk_0xFA30DFD0084E92FE(Global_1478C[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_479(var uParam0, int iParam1)//Position - 0x220F3
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar3;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_19B04.f_4848[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0xFA30DFD0084E92FE(Global_19B04.f_2360.f_63.f_DB[0], 9))
		{
		}
		else
		{
			vVar2 = { 0f, 0f, 0f };
			fVar3 = 0f;
			if (!func_481(Global_19B04.f_4848[iVar0], &vVar2, &fVar3))
			{
				Global_19B04.f_4848[iVar0] = 318;
				func_480(&(uParam0->f_8E4[iVar0]));
				uParam0->f_8E8[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_8F2[iVar0] = 0f;
				uParam0->f_8F6[iVar0] = 0;
				uParam0->f_8FA[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_904[iVar0] = 0;
				Global_1617A[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_1617A[iVar0 /*29*/].f_9 = 0f;
				Global_1617A[iVar0 /*29*/].f_C = 0f;
				Global_1617A[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_1617A[iVar0 /*29*/].f_A = 0f;
				Global_1617A[iVar0 /*29*/].f_D = 0f;
				Global_1617A[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_1617A[iVar0 /*29*/].f_B = 0f;
				Global_1617A[iVar0 /*29*/].f_E = 0f;
				Global_1617A[iVar0 /*29*/].f_11 = { 0f, 0f, 0f };
				Global_1617A[iVar0 /*29*/].f_1A = 0f;
				Global_1617A[iVar0 /*29*/].f_14 = { 0f, 0f, 0f };
				Global_1617A[iVar0 /*29*/].f_1B = 0f;
				Global_1617A[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_1617A[iVar0 /*29*/].f_1C = 0f;
			}
		}
		iVar0++;
	}
}

void func_480(var uParam0)//Position - 0x222BC
{
	*uParam0 = -15;
}

int func_481(int iParam0, var uParam1, float fParam2)//Position - 0x222CA
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_481(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_481(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_482(int iParam0, bool bParam1)//Position - 0x22C39
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_1542D[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_1542D[iParam0 /*2*/] = 0;
	}
}

int func_483()//Position - 0x22C77
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (unk_0xFA30DFD0084E92FE(Global_1478C[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_484()//Position - 0x22CAC
{
	if (((Global_16B1B == 13 || Global_16B1B == 10) || Global_16B1B == 11) || Global_16B1B == 12)
	{
		return 0;
	}
	return 1;
}

void func_485(int iParam0, bool bParam1)//Position - 0x22CEA
{
	if (unk_0x36CEFBE9B745A58D(func_487()))
	{
		return;
	}
	if (bParam1)
	{
		if (!unk_0x9488E18994C5C83D(func_487(), func_470()))
		{
			return;
		}
		if (!unk_0x36CEFBE9B745A58D(func_486()))
		{
			if (!unk_0x9488E18994C5C83D(func_486(), func_470()))
			{
				return;
			}
		}
	}
	if (Global_15B5E == 23)
	{
		Global_15B60 = 10;
		Global_15B5E = iParam0;
	}
}

var func_486()//Position - 0x22D4F
{
	return Global_15B65;
}

int func_487()//Position - 0x22D5B
{
	return Global_15B64;
}

void func_488()//Position - 0x22D67
{
	if (iLocal_167 == 1)
	{
		return;
	}
	func_309();
	unk_0xB1AFC550627C7E8D("Darts");
	iLocal_167 = 1;
}

int func_489(int iParam0)//Position - 0x22D8A
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_88(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

