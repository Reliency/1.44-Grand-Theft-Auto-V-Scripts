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
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48 = 0;
	struct<4> Local_49[10];
	bool bLocal_50 = 0;
	vector3 vLocal_51 = { 0f, 0f, 0f };
	int iLocal_52 = 0;
	vector3 vLocal_53 = { 0f, 0f, 0f };
	float fLocal_54 = 0f;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	var uLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	var uLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	vector3 vLocal_74 = { 0f, 0f, 0f };
	vector3 vLocal_75 = { 0f, 0f, 0f };
	float fLocal_76 = 0f;
	float fLocal_77 = 0f;
	vector3 vLocal_78 = { 0f, 0f, 0f };
	vector3 vLocal_79 = { 0f, 0f, 0f };
	bool bLocal_80 = 0;
	int iLocal_81 = 0;
	float fLocal_82 = 0f;
	float fLocal_83 = 0f;
	float fLocal_84 = 0f;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	bool bLocal_90 = 0;
	int iLocal_91 = 0;
	char[] cLocal_92[8] = 0;
	char[] cLocal_93[8] = 0;
	char* sLocal_94 = NULL;
	bool bLocal_95 = 0;
	bool bLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	bool bLocal_99 = 0;
	bool bLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	struct<10> Local_107[16];
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	char* sLocal_112 = NULL;
	char* sLocal_113 = NULL;
	char* sLocal_114 = NULL;
	char* sLocal_115 = NULL;
	char* sLocal_116 = NULL;
	char* sLocal_117 = NULL;
	char* sLocal_118 = NULL;
	char* sLocal_119 = NULL;
	char[] cLocal_120[8] = 0;
	char* sLocal_121 = NULL;
	char* sLocal_122 = NULL;
	char[] cLocal_123[8] = 0;
	char* sLocal_124 = NULL;
	char* sLocal_125 = NULL;
	int iLocal_126 = 0;
	bool bLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	bool bLocal_130 = 0;
	int iLocal_131 = 0;
	float fLocal_132 = 0f;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	vector3 vLocal_136 = { 0f, 0f, 0f };
	vector3 vLocal_137 = { 0f, 0f, 0f };
	vector3 vLocal_138 = { 0f, 0f, 0f };
	float fLocal_139 = 0f;
	vector3 vLocal_140 = { 0f, 0f, 0f };
	float fLocal_141 = 0f;
	char[] cLocal_142[8] = 0;
	char* sLocal_143 = NULL;
	char* sLocal_144 = NULL;
	char* sLocal_145 = NULL;
	char* sLocal_146 = NULL;
	char* sLocal_147 = NULL;
	char[] cLocal_148[8] = 0;
	char* sLocal_149 = NULL;
	char* sLocal_150 = NULL;
	char* sLocal_151 = NULL;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = -1;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 1000;
	var uLocal_162 = 1000;
	var uLocal_163 = 0;
	struct<147> Local_164 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_165 = 1;
	struct<18> Local_166 = { 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5 } ;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	vector3 vVar0;
	
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
	iLocal_46 = unk_0xD736C0AC62BF73AD();
	iLocal_47 = unk_0x880E0FAC08C6FA65();
	iLocal_65 = 3;
	bLocal_80 = true;
	cLocal_92 = "RANDOM@ATMROBBERYGEN";
	cLocal_93 = "RANDOM@ATMROBBERYGEN";
	iLocal_101 = joaat("prop_ld_wallet_01_s");
	iLocal_102 = joaat("prop_ld_wallet_01_s");
	iLocal_133 = 500;
	iLocal_134 = -1;
	iLocal_135 = -1;
	fLocal_139 = 0f;
	fLocal_141 = 0f;
	vLocal_53 = { ScriptParam_166.f_1[0 /*3*/] };
	fLocal_54 = ScriptParam_166.f_11[0];
	if (unk_0xE8A79675302ED812(11))
	{
		if (bLocal_95)
		{
			bLocal_96 = true;
			func_285(0);
		}
		else
		{
			func_267();
		}
	}
	if (SYSTEM::VDIST(vLocal_53, -203.758f, -861.738f, 29.2684f) < 5f)
	{
		iLocal_65 = 1;
	}
	else if (SYSTEM::VDIST(vLocal_53, -2957.61f, 488.29f, 14.47f) < 5f)
	{
		iLocal_65 = 1;
	}
	else if (SYSTEM::VDIST(vLocal_53, 288.973f, -1256.79f, 28.4407f) < 5f)
	{
		iLocal_65 = 2;
	}
	else if (SYSTEM::VDIST(vLocal_53, -3043.93f, 594.84f, 6.6115f) < 5f)
	{
		iLocal_65 = 3;
	}
	else if (SYSTEM::VDIST(vLocal_53, 174.715f, 6637.77f, 30.5733f) < 5f)
	{
		iLocal_65 = 4;
	}
	else
	{
		iLocal_65 = 5;
	}
	if (func_225(vLocal_53, 1, iLocal_65, 1, 0))
	{
		func_222(-1);
	}
	else
	{
		unk_0x95E4B6F3ED223F5A();
	}
	SYSTEM::SETTIMERA(0);
	func_221();
	while (true)
	{
		SYSTEM::WAIT(0);
		func_220();
		func_219(iLocal_58, &uLocal_64);
		func_216(&Local_164);
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			unk_0x6A095EC1C9AF12A4(unk_0xB5CEFD608600A09F());
		}
		if (!func_213())
		{
			if (func_212())
			{
				func_267();
			}
			if (unk_0x684B06333594F9EA())
			{
				switch (iLocal_52)
				{
					case 0:
						if (func_186())
						{
							iLocal_52 = 1;
						}
						break;
					
					case 1:
						func_185();
						if (iLocal_69 == 0)
						{
							iLocal_69 = unk_0x9C23040DD1853B23(99, vLocal_53, 30000f);
						}
						if (unk_0x724D816EA203A79E(iLocal_55))
						{
						}
						if (unk_0x724D816EA203A79E(iLocal_56))
						{
						}
						if (!unk_0x36CEFBE9B745A58D(iLocal_55))
						{
							if (unk_0x36CEFBE9B745A58D(iLocal_56))
							{
								unk_0xAB43C54784946B9F(iLocal_55, vLocal_53, 200f, -1, 0, 0);
								unk_0x22321800954A532E(iLocal_55, true);
								SYSTEM::WAIT(0);
								func_267();
							}
							if (!unk_0x36CEFBE9B745A58D(iLocal_56))
							{
								if (unk_0x33CC9445B2DF9387(vLocal_53, 2.5f))
								{
									if (iLocal_65 == 2)
									{
										if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_56, 120f, 120f, 8f, 0, 1, 0) || func_184())
										{
											func_175();
										}
									}
									else if (iLocal_65 == 1)
									{
										if (SYSTEM::VDIST(vLocal_53, -203.758f, -861.738f, 29.2684f) < 5f)
										{
											if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_56, 100f, 100f, 8f, 0, 1, 0) || func_184())
											{
												func_175();
											}
										}
										else if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_56, 170f, 170f, 8f, 0, 1, 0) || func_184())
										{
											func_175();
										}
									}
									else if (SYSTEM::VDIST(vLocal_53, -3044.06f, 594.93f, 6.74f) < 5f)
									{
										if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_56, 65f, 65f, 5f, 0, 1, 0) || func_184())
										{
											func_175();
										}
									}
									else if (unk_0xF0F2FC9DE291567F(vLocal_53, -712.9f, -819.32f, 22.73f, true) < 5f)
									{
										if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_56, 50f, 50f, 5f, 0, 1, 0) || func_184())
										{
											func_175();
										}
									}
									else if (unk_0xF0F2FC9DE291567F(vLocal_53, 24.13f, -946.84f, 28.36f, true) < 5f)
									{
										if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_56, 60f, 60f, 5f, 0, 1, 0) || func_184())
										{
											func_175();
										}
									}
									else if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_56, 30f, 30f, 8f, 0, 1, 0) || func_184())
									{
										func_175();
									}
								}
							}
						}
						else
						{
							if (Local_107[2 /*10*/].f_7)
							{
								func_174(&Local_107, 2);
							}
							if (!unk_0x36CEFBE9B745A58D(iLocal_56))
							{
								unk_0xAB43C54784946B9F(iLocal_56, vLocal_53, 200f, -1, 0, 0);
								unk_0x22321800954A532E(iLocal_56, true);
								SYSTEM::WAIT(0);
							}
							func_267();
						}
						break;
				}
			}
			else
			{
				func_172("IF NOT IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE()\n");
				func_267();
			}
		}
		else
		{
			if (unk_0x724D816EA203A79E(iLocal_55))
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_55))
				{
					if (func_171(iLocal_55, -251125078))
					{
						if (func_170(iLocal_55, vLocal_53, 1) >= 190f)
						{
							unk_0xA4E856A8CD53B8DF(iLocal_55);
							unk_0x5558ED6D4A2DEC93(iLocal_55, unk_0xBC25C936A095B5BA(), 300f, -1, 0, 0);
						}
					}
					else if (func_171(iLocal_55, -982327190))
					{
						unk_0xA4E856A8CD53B8DF(iLocal_55);
						unk_0x5558ED6D4A2DEC93(iLocal_55, unk_0xBC25C936A095B5BA(), 300f, -1, 0, 0);
					}
				}
			}
			if (unk_0x724D816EA203A79E(iLocal_56))
			{
			}
			if (unk_0x105601648511CC64() > iLocal_66 + 3000)
			{
				func_140();
			}
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				if (!func_120() && !func_117())
				{
					unk_0x741575A8348963A2(unk_0xB5CEFD608600A09F());
					if (!iLocal_85 && !bLocal_90)
					{
						if (unk_0x724D816EA203A79E(iLocal_56))
						{
							if (SYSTEM::VDIST(unk_0x541C2AEF053615BC(iLocal_56, false), -2956.26f, 487.97f, 15.46f) < 5f)
							{
								if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_56, 100f, 100f, 15f, 0, 1, 0))
								{
									if (func_115(&Local_107, cLocal_123, sLocal_115, 3, 0, 0, 0))
									{
										iLocal_85 = 1;
									}
								}
							}
							else if (unk_0xF0F2FC9DE291567F(vLocal_53, -203.72f, -861.8f, 29.27f, true) < 5f)
							{
								if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_56, 40f, 40f, 15f, 0, 1, 0))
								{
									if (func_115(&Local_107, cLocal_123, sLocal_115, 3, 0, 0, 0))
									{
										iLocal_85 = 1;
									}
								}
							}
							else if (unk_0xF0F2FC9DE291567F(vLocal_53, 288.46f, -1256.71f, 28.44f, true) < 5f)
							{
								if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_56, 50f, 50f, 15f, 0, 1, 0))
								{
									if (func_115(&Local_107, cLocal_123, sLocal_115, 3, 0, 0, 0))
									{
										iLocal_85 = 1;
									}
								}
							}
							else if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_56, 50f, 50f, 15f, 0, 1, 0))
							{
								if (func_115(&Local_107, cLocal_123, sLocal_115, 3, 0, 0, 0))
								{
									iLocal_85 = 1;
								}
							}
						}
					}
					if (unk_0x2DA8CA50A72528FB(iLocal_59))
					{
						if (!unk_0x36CEFBE9B745A58D(iLocal_55))
						{
							if (iLocal_126)
							{
								if (unk_0xE642C1AC73CE364E(iLocal_55, unk_0xBC25C936A095B5BA(), fLocal_132, fLocal_132, fLocal_132, 0, 1, 0))
								{
									if (!unk_0x5237AF95232D78C5(iLocal_55, 0))
									{
										if (SYSTEM::TIMERA() > 1000)
										{
											if (unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), iLocal_55))
											{
												fLocal_132 = SYSTEM::VDIST(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), unk_0x541C2AEF053615BC(iLocal_55, true));
												fLocal_132 = (fLocal_132 * 1.5f);
												SYSTEM::SETTIMERA(0);
											}
											unk_0x91629AC1E1F78419(iLocal_55, 17, false);
										}
									}
								}
								else if (!iLocal_128)
								{
									if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_55, 25f, 25f, 25f, 0, 1, 0))
									{
										if (!unk_0x5237AF95232D78C5(iLocal_55, 0))
										{
											unk_0x91629AC1E1F78419(iLocal_55, 17, true);
											unk_0x91629AC1E1F78419(iLocal_55, 13, false);
											func_114();
											iLocal_128 = 1;
										}
									}
								}
							}
							else if (!iLocal_87)
							{
								if ((unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), iLocal_55) || unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), iLocal_55)) || unk_0xD9C1758D86688CEA(iLocal_55, unk_0xBC25C936A095B5BA(), 0))
								{
									func_115(&Local_107, cLocal_123, sLocal_113, 4, 0, 0, 0);
									SYSTEM::SETTIMERA(0);
									fLocal_132 = SYSTEM::VDIST(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), unk_0x541C2AEF053615BC(iLocal_55, true));
									fLocal_132 = (fLocal_132 * 1.5f);
									iLocal_126 = 1;
									iLocal_87 = 1;
								}
								if (unk_0xE59B7F5A03335350(iLocal_73, 0))
								{
									if (unk_0xD9C1758D86688CEA(iLocal_73, unk_0xBC25C936A095B5BA(), 1))
									{
										unk_0x91629AC1E1F78419(iLocal_55, 17, false);
										if (unk_0xCBBE5AFE2CD2E9B6(iLocal_55))
										{
											unk_0x1A06AE15BF21D407(iLocal_55, iLocal_73, unk_0xBC25C936A095B5BA(), 8, 35f, 4, 10f, 10f, 1);
										}
										else
										{
											unk_0x5558ED6D4A2DEC93(iLocal_55, unk_0xBC25C936A095B5BA(), 300f, -1, 0, 0);
										}
										func_115(&Local_107, cLocal_123, sLocal_113, 4, 0, 0, 0);
										SYSTEM::SETTIMERA(0);
										fLocal_132 = SYSTEM::VDIST(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), unk_0x541C2AEF053615BC(iLocal_55, true));
										fLocal_132 = (fLocal_132 * 1.5f);
										iLocal_126 = 1;
										iLocal_87 = 1;
									}
								}
							}
							if ((iLocal_128 || iLocal_126) || bLocal_130)
							{
								if (unk_0x2DA8CA50A72528FB(iLocal_59))
								{
									if (unk_0x05C02D6192B773AF(iLocal_59) == 1)
									{
									}
									else
									{
										unk_0xF9C2945DB5BAB4BF(iLocal_59, false);
										unk_0x0D5352939CC40C16(iLocal_59, 1);
									}
								}
								if (!iLocal_128)
								{
									func_114();
									iLocal_128 = 1;
								}
							}
							else
							{
								if (unk_0x8F97799512B006B7(iLocal_55, unk_0xBC25C936A095B5BA()))
								{
									bLocal_130 = true;
								}
								func_112(iLocal_59, &uLocal_70);
							}
							if (unk_0x724D816EA203A79E(iLocal_56))
							{
								if (!iLocal_87)
								{
									if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_56, 15f, 15f, 10f, 0, 1, 0))
									{
										if (func_115(&Local_107, cLocal_123, sLocal_116, 4, 0, 0, 0))
										{
											unk_0xC5A6DFE2B8987B17(&iLocal_61);
											unk_0xE896C0AD02364F2A(0, cLocal_148, sLocal_149, 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0xE896C0AD02364F2A(0, cLocal_148, sLocal_150, 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0xE896C0AD02364F2A(0, cLocal_148, sLocal_151, 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0xE896C0AD02364F2A(0, cLocal_148, sLocal_149, 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0xE896C0AD02364F2A(0, cLocal_148, sLocal_150, 8f, -4f, -1, 0, 0, 0, 0, 0);
											unk_0xE896C0AD02364F2A(0, cLocal_148, sLocal_151, 8f, -4f, -1, 1, 0, 0, 0, 0);
											unk_0x535008C596714F9E(iLocal_61);
											unk_0xA8E6405305C0D7DF(iLocal_56, iLocal_61);
											unk_0x02DAF06EA4F08219(&iLocal_61);
											SYSTEM::SETTIMERA(0);
											iLocal_87 = 1;
										}
									}
								}
								else if (!iLocal_88)
								{
									if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_56, 15f, 15f, 10f, 0, 1, 0))
									{
										if (((!unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), iLocal_55) && !unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), iLocal_55)) && !unk_0x32E373675659FDB0(unk_0xBC25C936A095B5BA())) && func_111(iLocal_56, iLocal_55, 1) > 30f)
										{
											if (func_115(&Local_107, cLocal_123, sLocal_117, 4, 0, 0, 0))
											{
												SYSTEM::SETTIMERA(0);
												iLocal_88 = 1;
											}
										}
									}
								}
								else if (!unk_0x8C2668F45F2BB3F2(iLocal_56))
								{
									func_109(iLocal_56, "GENERIC_CURSE_MED", 24);
								}
							}
							if (func_107())
							{
								func_106();
								if (unk_0x724D816EA203A79E(iLocal_56))
								{
									vVar0 = { unk_0x541C2AEF053615BC(iLocal_56, true) };
								}
								if (!unk_0x4DBCE270B354E123(iLocal_55, vVar0, 25f, 25f, 25f, false, true, 0) && unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_55, 12f, 12f, 12f, 0, 1, 0))
								{
									if (SYSTEM::TIMERA() > 20000)
									{
										if (func_105(iLocal_55) && !unk_0x2CDE18D6C89522AD(iLocal_55))
										{
											if (func_115(&Local_107, cLocal_123, sLocal_118, 4, 0, 0, 0))
											{
												bLocal_130 = true;
												SYSTEM::SETTIMERA(0);
											}
										}
									}
								}
							}
							else if (func_105(iLocal_56))
							{
								if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_56, Global_13, 0, 1, 0))
								{
									if (func_115(&Local_107, cLocal_123, sLocal_121, 4, 0, 0, 0))
									{
										unk_0xC5A6DFE2B8987B17(&iLocal_61);
										unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 3000);
										unk_0x8CE2798B9A7027EC(0, 1193033728, 0);
										unk_0x535008C596714F9E(iLocal_61);
										unk_0xA8E6405305C0D7DF(iLocal_56, iLocal_61);
										unk_0x02DAF06EA4F08219(&iLocal_61);
										bLocal_127 = true;
										func_267();
									}
								}
								else if (bLocal_130)
								{
									if (func_115(&Local_107, cLocal_123, sLocal_122, 4, 0, 0, 0))
									{
										unk_0x8CE2798B9A7027EC(iLocal_56, 1193033728, 0);
										unk_0x3E2B7D349B5735D3(iLocal_56, -668482597, false, 0, 0);
										bLocal_127 = true;
										func_267();
									}
								}
								else
								{
									unk_0x8CE2798B9A7027EC(iLocal_56, 1193033728, 0);
									unk_0x3E2B7D349B5735D3(iLocal_56, -668482597, false, 0, 0);
									bLocal_127 = true;
									func_267();
								}
							}
							else
							{
								bLocal_127 = true;
								func_267();
							}
						}
						else if (func_107())
						{
							if ((unk_0x36CEFBE9B745A58D(iLocal_55) || unk_0x610A1308608A0F91(iLocal_55, 1)) || func_171(iLocal_55, -1899872703))
							{
								func_115(&Local_107, cLocal_123, sLocal_125, 4, 0, 0, 0);
								func_102();
								func_174(&Local_107, 2);
								unk_0x07B8ECB35A4ED3AC(&iLocal_59);
							}
						}
					}
					else if (!unk_0x2DA8CA50A72528FB(iLocal_58))
					{
						if (bLocal_95)
						{
							if (unk_0x2DA8CA50A72528FB(iLocal_60))
							{
								unk_0x07B8ECB35A4ED3AC(&iLocal_60);
							}
							iLocal_60 = 0;
							unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
							iLocal_58 = func_98(iLocal_56, 0, 0);
							func_97(&uLocal_64);
							if (unk_0x724D816EA203A79E(iLocal_56))
							{
								fLocal_82 = SYSTEM::VDIST(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), unk_0x541C2AEF053615BC(iLocal_56, false));
								unk_0x5502708AECB47F5D(iLocal_56);
							}
							if (fLocal_82 > 750f)
							{
								func_285(0);
							}
						}
						else
						{
							func_94();
						}
					}
					else
					{
						if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0)
						{
							if (bLocal_95)
							{
								func_285(0);
							}
							else
							{
								func_267();
							}
						}
						if (bLocal_100)
						{
						}
						else
						{
							func_2();
						}
						if (!bLocal_100)
						{
							if (!unk_0x36CEFBE9B745A58D(iLocal_56))
							{
								if (SYSTEM::VDIST(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), unk_0x541C2AEF053615BC(iLocal_56, false)) > (fLocal_82 + 100f))
								{
									if (bLocal_95)
									{
										func_285(0);
									}
									else
									{
										unk_0x5558ED6D4A2DEC93(iLocal_56, unk_0xBC25C936A095B5BA(), 100f, -1, 0, 0);
										func_267();
									}
								}
								else if (SYSTEM::VDIST(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), unk_0x541C2AEF053615BC(iLocal_56, false)) < fLocal_82)
								{
									fLocal_82 = SYSTEM::VDIST(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), unk_0x541C2AEF053615BC(iLocal_56, false));
								}
								if (unk_0xD9C1758D86688CEA(iLocal_56, unk_0xBC25C936A095B5BA(), 1))
								{
									if (bLocal_95)
									{
										func_285(0);
									}
								}
							}
						}
					}
				}
				else
				{
					func_1();
				}
			}
			else
			{
				func_1();
			}
		}
	}
}

void func_1()//Position - 0xDBF
{
	if (!unk_0x36CEFBE9B745A58D(iLocal_56))
	{
		unk_0x5558ED6D4A2DEC93(iLocal_56, unk_0xBC25C936A095B5BA(), 100f, -1, 0, 0);
		func_109(iLocal_56, "GENERIC_FRIGHTENED_HIGH", 24);
		unk_0x22321800954A532E(iLocal_56, true);
		unk_0x2E35C4FA5F0ED22F(iLocal_56, false);
		unk_0xB105531EDD3DE51B(iLocal_56, true);
		unk_0x02537C8C1BEEB477(&iLocal_56);
	}
	func_94();
	if (bLocal_90)
	{
		if (unk_0x2DA8CA50A72528FB(iLocal_60))
		{
			if (unk_0xA901403F1DB7A780(iLocal_89))
			{
				if (SYSTEM::VDIST(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), unk_0x85EA1A40FC3A6769(iLocal_89)) > 100f)
				{
					func_267();
				}
			}
		}
		else if (bLocal_95)
		{
			func_285(0);
		}
		else if (unk_0x36CEFBE9B745A58D(iLocal_55))
		{
			func_267();
		}
	}
	if (unk_0x2DA8CA50A72528FB(iLocal_59))
	{
		if (unk_0x36CEFBE9B745A58D(iLocal_55))
		{
			unk_0x07B8ECB35A4ED3AC(&iLocal_59);
		}
		else if (!func_107())
		{
			func_267();
		}
	}
}

void func_2()//Position - 0xE88
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	vector3 vVar7;
	bool bVar8;
	float fVar9;
	float fVar10;
	char cVar11[16];
	char cVar12[16];
	var uVar13;
	int iVar14;
	
	if (!unk_0x36CEFBE9B745A58D(iLocal_56))
	{
		if (!bLocal_99)
		{
			if (iLocal_129)
			{
				if (!iLocal_131)
				{
					if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_56, 15f, 15f, 20f, 0, 1, 0))
					{
						func_109(iLocal_56, "GENERIC_HI", 5);
						iLocal_131 = 1;
					}
				}
				if (unk_0xF0F2FC9DE291567F(vLocal_53, 296.13f, -894.01f, 28.23f, true) < 5f)
				{
					if (fLocal_83 == 6f)
					{
						fLocal_83 = 5f;
					}
				}
				else if (unk_0xF0F2FC9DE291567F(vLocal_53, -2072.88f, -317.19f, 12.32f, true) < 5f)
				{
					if (fLocal_83 == 6f)
					{
						fLocal_83 = 4f;
					}
				}
				if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_56, fLocal_83, fLocal_83, fLocal_83, 0, 1, 0) && !func_93())
				{
					if (func_90(2))
					{
						unk_0x7456702622C62EA0(1);
					}
					if (!func_117())
					{
						if (unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()))
						{
							if (func_89(1, 0, 1))
							{
								if (!unk_0xFA30DFD0084E92FE(Global_93B, 11) || func_88())
								{
									if (!unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()))
									{
										unk_0x7456702622C62EA0(1);
										if (func_87())
										{
											func_86();
										}
										if (iLocal_101 == joaat("prop_ld_wallet_pickup"))
										{
											iLocal_57 = unk_0xB6896943DA475493(iLocal_102, unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), true, true, false);
										}
										else
										{
											iLocal_57 = unk_0xB6896943DA475493(iLocal_101, unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), true, true, false);
										}
										if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
										{
											unk_0x5DBE04849460E608(iLocal_57, unk_0xBC25C936A095B5BA(), unk_0xFA18E720A39243D0(unk_0xBC25C936A095B5BA(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
										}
										unk_0xDC078F87049ECECE(iLocal_57, false, 0);
										func_78(1, 1, 1, 0, 0);
										if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
										{
											if (unk_0x724D816EA203A79E(iLocal_57))
											{
												while ((!func_76(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), fLocal_84, 1, 1056964608, 0, 1, 0) || func_87()) || !unk_0xA184E93CD7E0E9AA(iLocal_57))
												{
													if (!func_76(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), fLocal_84, 1, 1056964608, 0, 1, 0))
													{
													}
													if (func_87())
													{
													}
													if (!unk_0xA184E93CD7E0E9AA(iLocal_57))
													{
													}
													SYSTEM::WAIT(0);
												}
												if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
												{
													unk_0xA3981DED4FC2E56E(unk_0xBC25C936A095B5BA(), 0, 0);
												}
											}
										}
										else if (unk_0x724D816EA203A79E(iLocal_57))
										{
											while (func_87() || !unk_0xA184E93CD7E0E9AA(iLocal_57))
											{
												SYSTEM::WAIT(0);
											}
										}
										unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 0);
										if (!unk_0x36CEFBE9B745A58D(iLocal_56))
										{
											unk_0xF1FC2182A76AD7FC(iLocal_56, 0);
										}
										unk_0x878261FFF1AA7E94(0);
										unk_0x9A172FCB057ABAEF(iLocal_69);
										unk_0x4060A19D5551068A(unk_0xBC25C936A095B5BA(), 0, 0);
										func_74();
										func_70(0);
										SYSTEM::WAIT(0);
										if (func_105(iLocal_56))
										{
											if (unk_0xB6FD7D587FE0A1B4(iLocal_56))
											{
												sLocal_94 = "move_m@hurry@b";
											}
											else
											{
												sLocal_94 = "move_f@hurry@a";
											}
										}
										unk_0x37FA5A8A7F1136BA(sLocal_94);
										bLocal_99 = true;
										SYSTEM::SETTIMERA(0);
									}
								}
							}
						}
					}
				}
				else
				{
					func_68(unk_0x541C2AEF053615BC(iLocal_56, true), &fLocal_83, &fLocal_84);
					if (!func_93())
					{
						if (!func_171(iLocal_56, 1227113341) && !unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
						{
							unk_0xA4E856A8CD53B8DF(iLocal_56);
							unk_0x9565F9267674873A(iLocal_56, unk_0xBC25C936A095B5BA(), 20000, 0.5f, 1f, 1073741824, 0);
						}
					}
					else if (func_171(iLocal_56, 1227113341))
					{
						unk_0xA4E856A8CD53B8DF(iLocal_56);
						unk_0x02DAF06EA4F08219(&iLocal_61);
						unk_0xC5A6DFE2B8987B17(&iLocal_61);
						unk_0x56F2E1B5599188FA(0, unk_0xBC25C936A095B5BA(), -1, 2048, 2);
						unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 0);
						unk_0xE896C0AD02364F2A(0, cLocal_148, sLocal_149, 8f, -8f, -1, 0, 0, 0, 0, 0);
						unk_0xE896C0AD02364F2A(0, cLocal_148, sLocal_151, 8f, -8f, -1, 0, 0, 0, 0, 0);
						unk_0xE896C0AD02364F2A(0, cLocal_148, sLocal_150, 8f, -8f, -1, 1, 0, 0, 0, 0);
						unk_0x535008C596714F9E(iLocal_61);
						unk_0xA8E6405305C0D7DF(iLocal_56, iLocal_61);
						unk_0x02DAF06EA4F08219(&iLocal_61);
						unk_0x2EB4D46478766D87(iLocal_56, 0, 0);
					}
				}
			}
			else if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_56, 25f, 25f, 20f, 0, 1, 1) || unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_56, 30f, 30f, 20f, 0, 1, 2))
			{
				if (!func_93())
				{
					if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
					{
						unk_0xA4E856A8CD53B8DF(iLocal_56);
						unk_0x02DAF06EA4F08219(&iLocal_61);
						unk_0xC5A6DFE2B8987B17(&iLocal_61);
						unk_0x56F2E1B5599188FA(0, unk_0xBC25C936A095B5BA(), -1, 2048, 2);
						unk_0x9565F9267674873A(0, unk_0xBC25C936A095B5BA(), 20000, 0.5f, 1f, 1073741824, 0);
						unk_0x535008C596714F9E(iLocal_61);
						unk_0xA8E6405305C0D7DF(iLocal_56, iLocal_61);
						unk_0x02DAF06EA4F08219(&iLocal_61);
					}
					iLocal_129 = 1;
				}
			}
		}
		if (bLocal_99)
		{
			switch (iLocal_98)
			{
				case 0:
					if (((!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1) && !unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) && !unk_0x54596E4FB9EB4421(unk_0xBC25C936A095B5BA())) && !unk_0x69871CAEBDD20966(unk_0xBC25C936A095B5BA()))
					{
						if (bLocal_80)
						{
							if (unk_0xF0F2FC9DE291567F(vLocal_53, -712.9f, -819.32f, 22.73f, true) < 5f && unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -709.9229f, -824.0863f, 22.0751f, -715.2137f, -824.2247f, 25.01217f, 3.25f, 0, true, 0))
							{
								vLocal_78 = { -710.1279f, -821.3084f, 22.6169f };
								vLocal_79 = { 0f, 0f, 266.962f };
							}
							else if (!unk_0x36CEFBE9B745A58D(iLocal_56))
							{
								vVar7 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false) };
								func_65(iLocal_56, &vLocal_78, &vLocal_79, cLocal_142, sLocal_144);
								if ((vLocal_78.z - vVar7.z) > 20f)
								{
									vLocal_78 = { vVar7 };
								}
								vLocal_78.z = (vLocal_78.z + 2f);
								unk_0x2084D4C6C2DF616F(vLocal_78, &(vLocal_78.f_2), 0, 0);
								if (vLocal_78.z == 0f)
								{
									vLocal_78 = { vLocal_138 };
									vLocal_79.z = fLocal_139;
								}
								if (unk_0xF0F2FC9DE291567F(vLocal_53, -203.72f, -861.8f, 29.27f, true) < 5f)
								{
									if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -202.4218f, -864.449f, 27.88059f, -211.4486f, -861.5274f, 31.75401f, 9.5f, 0, true, 0))
									{
										if (vLocal_79.z > 315f && vLocal_79.z < 360f)
										{
											vLocal_79.z = 251.4238f;
										}
										else if (vLocal_79.z > 120f && vLocal_79.z < 212f)
										{
											vLocal_79.z = 67.2304f;
										}
										vLocal_78 = { -205.81f, -865.2f, 28.5f };
									}
								}
								else if (unk_0xF0F2FC9DE291567F(vLocal_53, -821.33f, -1082.43f, 10.14f, true) < 5f && unk_0x7352105EC4D7541F(vLocal_78, -826.1744f, -1083.943f, 9.137519f, -811.6559f, -1075.567f, 13.88779f, 6f, 0, true))
								{
									vLocal_78 = { -814.0593f, -1082.483f, 10.0671f };
									vLocal_79.z = 275.5752f;
								}
								else if (unk_0xF0F2FC9DE291567F(vLocal_53, -387.12f, 6045.79f, 30.5f, true) < 5f && unk_0x7352105EC4D7541F(vLocal_78, -377.5788f, 6033.821f, 29.29119f, -373.0138f, 6029.14f, 33.75382f, 4.75f, 0, true))
								{
									vLocal_78 = { -375.0627f, 6030.533f, 30.5313f };
									vLocal_79.z = 222.9049f;
								}
								else if (unk_0xF0F2FC9DE291567F(vLocal_53, -387.12f, 6045.79f, 30.5f, true) < 5f && unk_0x7352105EC4D7541F(vLocal_78, -381.4607f, 6031.481f, 29.24971f, -376.6766f, 6026.68f, 33.76656f, 3f, 0, true))
								{
									vLocal_78 = { -379.7835f, 6029.472f, 30.5014f };
									vLocal_79.z = 213.2611f;
								}
								else if (unk_0xF0F2FC9DE291567F(vLocal_53, 89.39f, 2f, 67.34f, true) < 5f)
								{
									if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 73.30347f, 4.781172f, 66.79439f, 107.6572f, -8.330787f, 69.16833f, 9.75f, 0, true, 0))
									{
										if (vLocal_79.z > 128f && vLocal_79.z < 195f)
										{
											if (vLocal_79.z > 162f)
											{
												vLocal_79.z = 220f;
											}
											else
											{
												vLocal_79.z = 107f;
											}
										}
									}
								}
								else if (unk_0xF0F2FC9DE291567F(vLocal_53, 174.53f, 6637.64f, 30.57f, true) < 5f)
								{
									if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 176.3895f, 6635.983f, 29.87799f, 181.7585f, 6641.302f, 33.556f, 7.75f, 0, true, 0))
									{
										if (vLocal_79.z > 244.444f && vLocal_79.z < 326.2103f)
										{
											vLocal_79.z = 343.1367f;
										}
									}
								}
								else if (unk_0xF0F2FC9DE291567F(vLocal_53, -3044.11f, 594.34f, 6.73f, true) < 5f)
								{
									if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -3042.549f, 597.1118f, 6.612578f, -3046.965f, 595.6973f, 9.065809f, 5f, 0, true, 0))
									{
										vLocal_78 = { -3045.4f, 598.65f, 6.51f };
									}
								}
								vVar4 = { unk_0x883FF674F22D1F7C(cLocal_142, sLocal_144, vLocal_78, vLocal_79, 0f, 2) };
								vVar5 = { vVar4 - vLocal_78 };
								vVar5.z = 0f;
								fVar10 = SYSTEM::VMAG(vVar5);
								unk_0x2084D4C6C2DF616F(vVar4, &(vVar4.f_2), 0, 0);
								fVar9 = (vLocal_78.z - vVar4.z);
								vLocal_79.x = unk_0xE8CFCB6B2165523B(fVar9, fVar10);
								if (vLocal_79.x > 20f || vLocal_79.x < -330f)
								{
									vLocal_78 = { vLocal_138 };
									vLocal_79.x = 0f;
									vLocal_79.z = fLocal_139;
									vVar4 = { unk_0x883FF674F22D1F7C(cLocal_142, sLocal_144, vLocal_78, vLocal_79, 0f, 2) };
									vVar5 = { vVar4 - vLocal_78 };
									vVar5.z = 0f;
									fVar10 = SYSTEM::VMAG(vVar5);
									unk_0x2084D4C6C2DF616F(vVar4, &(vVar4.f_2), 0, 0);
									fVar9 = (vLocal_78.z - vVar4.z);
								}
							}
							if (func_64(vLocal_53, -526.58f, -1222.79f, 17.46f, 10f, 0))
							{
								if (unk_0x7352105EC4D7541F(vLocal_78, -538.4412f, -1214.903f, 16.79794f, -520.3268f, -1223.249f, 20.556f, 6.5f, 0, true))
								{
									if (vLocal_79.z < 35f || vLocal_79.z > 275f)
									{
										if (vLocal_79.z < 335f)
										{
											vLocal_79.z = 260f;
										}
										else
										{
											vLocal_79.z = 55f;
										}
									}
									else if (vLocal_79.z > 107.2072f && vLocal_79.z < 210f)
									{
										if (vLocal_79.z > 154.6742f)
										{
											vLocal_79.z = 233f;
										}
										else
										{
											vLocal_79.z = 73f;
										}
									}
								}
							}
						}
						else if (iLocal_65 == 4)
						{
							if (SYSTEM::VDIST(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false), 183.6065f, 6636.653f, 30.6299f) < SYSTEM::VDIST(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false), 172.2291f, 6631.007f, 30.7398f))
							{
								vLocal_78 = { 183.6065f, 6636.653f, 30.6299f };
								vLocal_79 = { 0f, 0f, 265f };
							}
							else
							{
								vLocal_78 = { 172.2291f, 6631.007f, 30.7398f };
								vLocal_79 = { 0f, 0f, 132f };
							}
						}
						else
						{
							vVar1 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
							if (!unk_0x36CEFBE9B745A58D(iLocal_56))
							{
								vVar2 = { unk_0x541C2AEF053615BC(iLocal_56, true) };
							}
							vVar3 = { vVar1 - vVar2 };
							vLocal_78 = { vVar1 };
							vLocal_78 = { vLocal_78.x, vLocal_78.y, (vLocal_78.z - 1f) };
							vLocal_79 = { 0f, 0f, unk_0xFDC254CE02DB0919(vVar3.x, vVar3.y) };
						}
						if (unk_0xF0F2FC9DE291567F(vLocal_78, -535.795f, -1222.23f, 17.4567f, true) < 5f)
						{
							vLocal_78 = { -521.475f, -1210.47f, 17.1848f };
							vLocal_79 = { 0f, 0f, 308.502f };
						}
						if (unk_0xE59B7F5A03335350(iLocal_73, 0))
						{
							unk_0x1E7A09C1710FB071(&iLocal_73);
						}
						if (unk_0xE59B7F5A03335350(unk_0x3E12B546F3F2597A(), 0))
						{
							if (!unk_0xE59B7F5A03335350(iVar0, 0))
							{
								iVar0 = unk_0x3E12B546F3F2597A();
								unk_0x2B3953EE61953843(unk_0x6F79ECA8C83E4357(iVar0), &vLocal_136, &vLocal_137);
								if (unk_0x4DBCE270B354E123(iVar0, vLocal_78, (vLocal_137.y + 1f), (vLocal_137.y + 1f), 3f, false, true, 0) || unk_0x4DBCE270B354E123(iVar0, unk_0x883FF674F22D1F7C(cLocal_142, sLocal_144, vLocal_78, vLocal_79, 0, 2), (vLocal_137.y + 1f), (vLocal_137.y + 1f), 3f, false, true, 0))
								{
									if (func_64(vLocal_53, -526.58f, -1222.79f, 17.46f, 10f, 0) && (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -529.7477f, -1218.399f, 16.78482f, -538.9778f, -1213.756f, 20.53685f, 7.5f, 0, true, 0) || unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -529.7477f, -1218.399f, 16.78482f, -520.9798f, -1222.305f, 20.55204f, 7.5f, 0, true, 0)))
									{
										if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -529.7477f, -1218.399f, 16.78482f, -538.9778f, -1213.756f, 20.53685f, 7.5f, 0, true, 0))
										{
											vVar6 = { 2.9f, 12f, 8f };
											vLocal_75 = { -543.34f, -1216.8f, 17.96f };
											fLocal_77 = 337.5f;
											bVar8 = true;
										}
										else
										{
											vVar6 = { 2.9f, 12f, 8f };
											vLocal_75 = { -522.4418f, -1214.57f, 17.1848f };
											fLocal_77 = 246.7714f;
											bVar8 = true;
										}
										if ((vLocal_137.x - vLocal_136.x) > vVar6.x)
										{
											bVar8 = false;
										}
										else if ((vLocal_137.y - vLocal_136.y) > vVar6.y)
										{
											bVar8 = false;
										}
										else if ((vLocal_137.z - vLocal_136.z) > vVar6.z)
										{
											bVar8 = false;
										}
										if (bVar8)
										{
											if (func_63(iVar0))
											{
												unk_0x641B19E156645A92(iVar0, vLocal_75, 1, false, 0, 1);
												unk_0x019CE76D5286C95C(iVar0, fLocal_77);
												unk_0x4AAC154DDE9D031F(iVar0, 0, 1, 1, 1);
												unk_0xF0A40F19AAB79E88(iVar0, 1084227584);
											}
										}
										else if (unk_0x724D816EA203A79E(iVar0))
										{
											if (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iVar0, 0))
											{
												unk_0xCF6040807CC0E4A5(&iVar0);
											}
										}
									}
									else if (unk_0xF0F2FC9DE291567F(vLocal_53, -203.72f, -861.8f, 29.27f, true) < 5f && unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -197.7616f, -865.9772f, 27.31116f, -191.161f, -849.0546f, 32.89275f, 10.25f, 0, true, 0))
									{
										vVar6 = { 2.9f, 12f, 8f };
										vLocal_75 = { -187f, -855.51f, 29.02f };
										fLocal_77 = 158.28f;
										bVar8 = true;
										if ((vLocal_137.x - vLocal_136.x) > vVar6.x)
										{
											bVar8 = false;
										}
										else if ((vLocal_137.y - vLocal_136.y) > vVar6.y)
										{
											bVar8 = false;
										}
										else if ((vLocal_137.z - vLocal_136.z) > vVar6.z)
										{
											bVar8 = false;
										}
										if (bVar8)
										{
											if (func_63(iVar0))
											{
												unk_0x641B19E156645A92(iVar0, vLocal_75, 1, false, 0, 1);
												unk_0x019CE76D5286C95C(iVar0, fLocal_77);
												unk_0xF0A40F19AAB79E88(iVar0, 1084227584);
											}
										}
										else if (unk_0x724D816EA203A79E(iVar0))
										{
											if (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iVar0, 0))
											{
												unk_0xCF6040807CC0E4A5(&iVar0);
											}
										}
									}
									else if (unk_0xF0F2FC9DE291567F(vLocal_53, -387.12f, 6045.79f, 30.5f, true) < 5f && unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -390.4536f, 6044.05f, 29.99868f, -380.4771f, 6032.985f, 33.24879f, 6f, 0, true, 0))
									{
										vVar6 = { 2.9f, 12f, 8f };
										vLocal_75 = { -395.84f, 6051.16f, 31.19f };
										fLocal_77 = 139.92f;
										bVar8 = true;
										if ((vLocal_137.x - vLocal_136.x) > vVar6.x)
										{
											bVar8 = false;
										}
										else if ((vLocal_137.y - vLocal_136.y) > vVar6.y)
										{
											bVar8 = false;
										}
										else if ((vLocal_137.z - vLocal_136.z) > vVar6.z)
										{
											bVar8 = false;
										}
										if (bVar8)
										{
											if (func_63(iVar0))
											{
												unk_0x641B19E156645A92(iVar0, vLocal_75, 1, false, 0, 1);
												unk_0x019CE76D5286C95C(iVar0, fLocal_77);
												unk_0xF0A40F19AAB79E88(iVar0, 1084227584);
											}
										}
										else if (unk_0x724D816EA203A79E(iVar0))
										{
											if (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iVar0, 0))
											{
												unk_0xCF6040807CC0E4A5(&iVar0);
											}
										}
									}
									else if (unk_0xF0F2FC9DE291567F(vLocal_53, -2956.78f, 488.19f, 14.47f, true) < 5f && unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -2955.234f, 492.4626f, 13.80307f, -2967.116f, 493.0511f, 17.05663f, 9.75f, 0, true, 0))
									{
										vVar6 = { 2.9f, 12f, 8f };
										vLocal_75 = { -2972.31f, 490.07f, 15.03f };
										fLocal_77 = 357.64f;
										bVar8 = true;
										if ((vLocal_137.x - vLocal_136.x) > vVar6.x)
										{
											bVar8 = false;
										}
										else if ((vLocal_137.y - vLocal_136.y) > vVar6.y)
										{
											bVar8 = false;
										}
										else if ((vLocal_137.z - vLocal_136.z) > vVar6.z)
										{
											bVar8 = false;
										}
										if (bVar8)
										{
											if (func_63(iVar0))
											{
												unk_0x641B19E156645A92(iVar0, vLocal_75, 1, false, 0, 1);
												unk_0x019CE76D5286C95C(iVar0, fLocal_77);
												unk_0xF0A40F19AAB79E88(iVar0, 1084227584);
											}
										}
										else if (unk_0x724D816EA203A79E(iVar0))
										{
											if (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iVar0, 0))
											{
												unk_0xCF6040807CC0E4A5(&iVar0);
											}
										}
									}
									else if ((unk_0xF0F2FC9DE291567F(vLocal_53, 174.53f, 6637.64f, 30.57f, true) < 5f && unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 178.246f, 6638.824f, 30.5274f, 173.4713f, 6634.083f, 33.6823f, 6f, 0, true, 0)) && unk_0x0C265B3C448E6954(iVar0, 180.1225f, 6640.33f, 30.78129f, 171.623f, 6631.794f, 33.69934f, 8f, 0, true, 0))
									{
										vVar6 = { 2.9f, 12f, 8f };
										vLocal_75 = { 184.05f, 6628.75f, 31.27f };
										fLocal_77 = 89.37f;
										bVar8 = true;
										if ((vLocal_137.x - vLocal_136.x) > vVar6.x)
										{
											bVar8 = false;
										}
										else if ((vLocal_137.y - vLocal_136.y) > vVar6.y)
										{
											bVar8 = false;
										}
										else if ((vLocal_137.z - vLocal_136.z) > vVar6.z)
										{
											bVar8 = false;
										}
										if (bVar8)
										{
											if (func_63(iVar0))
											{
												unk_0x641B19E156645A92(iVar0, vLocal_75, 1, false, 0, 1);
												unk_0x019CE76D5286C95C(iVar0, fLocal_77);
												unk_0xF0A40F19AAB79E88(iVar0, 1084227584);
											}
										}
										else if (unk_0x724D816EA203A79E(iVar0))
										{
											if (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iVar0, 0))
											{
												unk_0xCF6040807CC0E4A5(&iVar0);
											}
										}
									}
									else
									{
										vVar6 = { 2.9f, 12f, 8f };
										fLocal_77 = unk_0x349C94FFF43E2979(iVar0);
										vLocal_75 = { func_61(vLocal_78, unk_0x883FF674F22D1F7C(cLocal_142, sLocal_144, vLocal_78, vLocal_79, 0, 2)) };
										if (func_60(0f, 0f, 0f, vLocal_75, 0))
										{
											vLocal_75 = { unk_0x541C2AEF053615BC(iVar0, true) };
										}
										if (unk_0x8C1A6E7D5F410F4A(unk_0x6F79ECA8C83E4357(iVar0)))
										{
											vLocal_137.x = (vLocal_137.x + 3f);
											vLocal_137.y = (vLocal_137.y + 3f);
										}
										bVar8 = true;
										if ((vLocal_137.x - vLocal_136.x) > vVar6.x)
										{
											bVar8 = false;
										}
										else if ((vLocal_137.y - vLocal_136.y) > vVar6.y)
										{
											bVar8 = false;
										}
										else if ((vLocal_137.z - vLocal_136.z) > vVar6.z)
										{
											bVar8 = false;
										}
										if (bVar8)
										{
											if (func_63(iVar0))
											{
												unk_0x641B19E156645A92(iVar0, vLocal_75, 1, false, 0, 1);
												unk_0x019CE76D5286C95C(iVar0, fLocal_77);
												unk_0xF0A40F19AAB79E88(iVar0, 1084227584);
											}
										}
										else if (unk_0x724D816EA203A79E(iVar0))
										{
											if (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iVar0, 0))
											{
												unk_0xCF6040807CC0E4A5(&iVar0);
											}
										}
									}
								}
							}
						}
						if (func_63(iVar0))
						{
							unk_0x2B3953EE61953843(unk_0x6F79ECA8C83E4357(iVar0), &vLocal_136, &vLocal_137);
							if (unk_0x4DBCE270B354E123(iVar0, vLocal_78, (vLocal_137.y + 1f), (vLocal_137.y + 1f), 1f, false, true, 0) || unk_0x4DBCE270B354E123(iVar0, unk_0x883FF674F22D1F7C(cLocal_142, sLocal_144, vLocal_78, vLocal_79, 0, 2), (vLocal_137.y + 1f), (vLocal_137.y + 1f), 1f, false, true, 0))
							{
								unk_0x641B19E156645A92(iVar0, vLocal_140, 1, false, 0, 1);
								unk_0x019CE76D5286C95C(iVar0, fLocal_141);
								unk_0xF0A40F19AAB79E88(iVar0, 1084227584);
							}
						}
						if (unk_0x724D816EA203A79E(iLocal_57))
						{
							unk_0xDC078F87049ECECE(iLocal_57, true, 0);
						}
						unk_0xDD56BACCCF835044(vLocal_78 - Vector(10f, 10f, 10f), vLocal_78 + Vector(10f, 10f, 10f), 0);
						unk_0xADC7E88690E324EB(vLocal_78, 20f, 0);
						unk_0xA0C0B32E74BE8DB7(vLocal_78, 10f, 0);
						unk_0x6C5F5B5F6894CCE3(vLocal_78, (vLocal_137.y + 1f), 1, 0, 0, false);
						unk_0x7A71B0C6DDC0D7DA(vLocal_78, 25f);
						unk_0x0FC2D36CE8F740E4(unk_0xBC25C936A095B5BA(), true);
						unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 0, 0);
						iLocal_68 = unk_0xD0D858E538FD01C3(vLocal_78, vLocal_79, 2);
						unk_0x69D4A898629B0BDA(iLocal_68, false);
						iLocal_97 = unk_0x578D5D08EC980893("DEFAULT_ANIMATED_CAMERA", false);
						unk_0x9DF315A9EFFF87AC(iLocal_97, 15f);
						unk_0xA4DB448107C6D171(iLocal_97, iLocal_68, sLocal_145, cLocal_142);
						unk_0x49D46EE47C9CCB66(unk_0xBC25C936A095B5BA());
						unk_0x44C98C11ED6DD327(unk_0xBC25C936A095B5BA());
						unk_0xB62398E536F695FC(unk_0xBC25C936A095B5BA(), iLocal_68, cLocal_142, sLocal_143, 1000f, -1000f, 1024, 0, 1148846080, 0);
						unk_0x2EB4D46478766D87(unk_0xBC25C936A095B5BA(), 0, 0);
						if (!unk_0x36CEFBE9B745A58D(iLocal_56))
						{
							unk_0x49D46EE47C9CCB66(iLocal_56);
							unk_0xB62398E536F695FC(iLocal_56, iLocal_68, cLocal_142, sLocal_144, 1000f, -4f, 0, 0, 1148846080, 0);
						}
						unk_0x348665177DBFB93B(iLocal_97, true);
						unk_0x062C9995BFD27B2A(true, false, 3000, 1, 0, 0);
						StringCopy(&cVar11, sLocal_124, 16);
						StringConCat(&cVar11, "_1", 16);
						StringCopy(&cVar12, cLocal_120, 16);
						StringConCat(&cVar12, "_1", 16);
						func_48(&Local_107, cLocal_123, sLocal_124, &cVar11, cLocal_120, &cVar12, 7, 0, 0);
						SYSTEM::SETTIMERA(0);
						unk_0x878261FFF1AA7E94(0);
						func_47(joaat("rc_wallets_returned"), 1);
						unk_0x6CB99B97664C3727(joaat("rc_wallets_returned"), &uVar13, -1);
						iLocal_98++;
					}
					else
					{
						if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
						{
						}
						if (unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()))
						{
						}
						if (unk_0x54596E4FB9EB4421(unk_0xBC25C936A095B5BA()))
						{
						}
						if (unk_0x69871CAEBDD20966(unk_0xBC25C936A095B5BA()))
						{
						}
					}
					unk_0xDE7B9CB38D019BF0();
					break;
				
				case 1:
					if ((unk_0x77FC50899603581D(iLocal_68) && unk_0x8FD30584EB38411B(iLocal_68) == 1f) || func_44())
					{
						unk_0xA98B19EC1C93FC3C(unk_0xB5CEFD608600A09F());
						unk_0xA250DC6A7CADB56D(unk_0xB5CEFD608600A09F(), 0);
						if (!unk_0x36CEFBE9B745A58D(iLocal_56))
						{
							unk_0x8EF3D958386640FE(iLocal_56, (iLocal_133 - (iLocal_133 / 10)));
							unk_0x2E35C4FA5F0ED22F(iLocal_56, false);
							unk_0x43B967881C60631D(iLocal_56, sLocal_94, 1048576000);
						}
						if (unk_0x17FAADF9916EF741())
						{
							unk_0x49D46EE47C9CCB66(iLocal_56);
							vVar4 = { unk_0x883FF674F22D1F7C(cLocal_142, sLocal_144, vLocal_78, vLocal_79, 1f, 2) };
							unk_0x2084D4C6C2DF616F(vVar4, &(vVar4.f_2), 0, 0);
							unk_0x641B19E156645A92(iLocal_56, vVar4, 1, false, 0, 1);
							vVar4 = { unk_0xBFDD14D0A09BE0FA(cLocal_142, sLocal_144, vLocal_78, vLocal_79, 1f, 2) };
							unk_0x019CE76D5286C95C(iLocal_56, vVar4.z);
						}
						vVar4 = { unk_0xBFDD14D0A09BE0FA(cLocal_142, sLocal_144, vLocal_78, vLocal_79, 1f, 2) };
						if (func_64(vLocal_53, -526.58f, -1222.79f, 17.46f, 10f, 0))
						{
							if (func_43(unk_0xBC25C936A095B5BA(), 215.68f, 60f))
							{
								unk_0xC5A6DFE2B8987B17(&iLocal_61);
								unk_0x346129B364057FF6(0, unk_0xA4455714F3DCE207(iLocal_56, 0f, 3.5f, 0f), 1f, 20000, 1048576000, 5, 1193033728);
								unk_0x346129B364057FF6(0, -503.46f, -1199.39f, 19.02f, 1f, 20000, 1048576000, 5, 1193033728);
								unk_0x8CE2798B9A7027EC(0, unk_0x349C94FFF43E2979(iLocal_56), 1);
								unk_0x535008C596714F9E(iLocal_61);
								unk_0xA8E6405305C0D7DF(iLocal_56, iLocal_61);
								unk_0x02DAF06EA4F08219(&iLocal_61);
							}
							else if (func_43(unk_0xBC25C936A095B5BA(), 122.0371f, 60f))
							{
								unk_0xC5A6DFE2B8987B17(&iLocal_61);
								unk_0x346129B364057FF6(0, unk_0xA4455714F3DCE207(iLocal_56, 0f, 3.5f, 0f), 1f, 20000, 1048576000, 5, 1193033728);
								unk_0x346129B364057FF6(0, -543.35f, -1208.09f, 16.73f, 1f, 20000, 1048576000, 5, 1193033728);
								unk_0x8CE2798B9A7027EC(0, unk_0x349C94FFF43E2979(iLocal_56), 1);
								unk_0x535008C596714F9E(iLocal_61);
								unk_0xA8E6405305C0D7DF(iLocal_56, iLocal_61);
								unk_0x02DAF06EA4F08219(&iLocal_61);
							}
							else
							{
								unk_0xC5A6DFE2B8987B17(&iLocal_61);
								unk_0x346129B364057FF6(0, unk_0xA4455714F3DCE207(iLocal_56, 0f, 3.5f, 0f), 1f, 20000, 1048576000, 5, 1193033728);
								unk_0x8CE2798B9A7027EC(0, unk_0x349C94FFF43E2979(iLocal_56), 1);
								unk_0x535008C596714F9E(iLocal_61);
								unk_0xA8E6405305C0D7DF(iLocal_56, iLocal_61);
								unk_0x02DAF06EA4F08219(&iLocal_61);
							}
						}
						else if (unk_0xF0F2FC9DE291567F(vLocal_53, 288.46f, -1256.71f, 28.44f, true) < 5f)
						{
							if (func_43(unk_0xBC25C936A095B5BA(), 200.8887f, 60f))
							{
								unk_0xC5A6DFE2B8987B17(&iLocal_61);
								unk_0x346129B364057FF6(0, unk_0xA4455714F3DCE207(iLocal_56, 0f, 3.5f, 0f), 1f, 20000, 1048576000, 5, 1193033728);
								unk_0x346129B364057FF6(0, 289.08f, -1286.56f, 28.68f, 1f, 20000, 1048576000, 5, 1193033728);
								unk_0x8CE2798B9A7027EC(0, unk_0x349C94FFF43E2979(iLocal_56), 1);
								unk_0x535008C596714F9E(iLocal_61);
								unk_0xA8E6405305C0D7DF(iLocal_56, iLocal_61);
								unk_0x02DAF06EA4F08219(&iLocal_61);
							}
							else if (func_43(unk_0xBC25C936A095B5BA(), 347.8599f, 60f))
							{
								unk_0xC5A6DFE2B8987B17(&iLocal_61);
								unk_0x346129B364057FF6(0, unk_0xA4455714F3DCE207(iLocal_56, 0f, 3.5f, 0f), 1f, 20000, 1048576000, 5, 1193033728);
								unk_0x346129B364057FF6(0, 241.22f, -1236.76f, 28.26f, 1f, 20000, 1048576000, 5, 1193033728);
								unk_0x8CE2798B9A7027EC(0, unk_0x349C94FFF43E2979(iLocal_56), 1);
								unk_0x535008C596714F9E(iLocal_61);
								unk_0xA8E6405305C0D7DF(iLocal_56, iLocal_61);
								unk_0x02DAF06EA4F08219(&iLocal_61);
							}
							else
							{
								unk_0xC5A6DFE2B8987B17(&iLocal_61);
								unk_0x346129B364057FF6(0, unk_0xA4455714F3DCE207(iLocal_56, 0f, 3.5f, 0f), 1f, 20000, 1048576000, 5, 1193033728);
								unk_0x8CE2798B9A7027EC(0, unk_0x349C94FFF43E2979(iLocal_56), 1);
								unk_0x535008C596714F9E(iLocal_61);
								unk_0xA8E6405305C0D7DF(iLocal_56, iLocal_61);
								unk_0x02DAF06EA4F08219(&iLocal_61);
							}
						}
						else
						{
							unk_0xC5A6DFE2B8987B17(&iLocal_61);
							unk_0x346129B364057FF6(0, unk_0xA4455714F3DCE207(iLocal_56, 0f, 2.5f, 0f), 1f, 20000, 1048576000, 5, 1193033728);
							unk_0x8CE2798B9A7027EC(0, unk_0x349C94FFF43E2979(iLocal_56), 1);
							unk_0x535008C596714F9E(iLocal_61);
							unk_0xA8E6405305C0D7DF(iLocal_56, iLocal_61);
							unk_0x02DAF06EA4F08219(&iLocal_61);
						}
						unk_0x3E2B7D349B5735D3(iLocal_56, -668482597, true, 0, 0);
						unk_0xF1FC2182A76AD7FC(iLocal_56, 1);
						unk_0x22321800954A532E(iLocal_56, true);
						func_42(&iLocal_73);
						SYSTEM::SETTIMERB(0);
						unk_0xF04F2EB4128A4367(0);
						if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
						{
							unk_0x49D46EE47C9CCB66(unk_0xBC25C936A095B5BA());
							if (!func_41())
							{
								unk_0x2EB4D46478766D87(unk_0xBC25C936A095B5BA(), 0, 0);
							}
						}
						if (unk_0x724D816EA203A79E(iLocal_57))
						{
							unk_0xA35241BCE4C1A24B(&iLocal_57);
						}
						if (!unk_0x36CEFBE9B745A58D(iLocal_56))
						{
							unk_0x8EF3D958386640FE(iLocal_56, (iLocal_133 - (iLocal_133 / 10)));
						}
						unk_0x0FC2D36CE8F740E4(unk_0xBC25C936A095B5BA(), false);
						unk_0xF3F01A78937DC905(0f);
						unk_0x348665177DBFB93B(iLocal_97, false);
						func_40();
						unk_0x4EC087603E1DEF9C(iLocal_97, 0);
						unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
						if (unk_0x17FAADF9916EF741())
						{
							unk_0x829FA4611BD56B44(500);
							while (unk_0x26641E1BFD792DBC())
							{
								SYSTEM::WAIT(0);
							}
						}
						iVar14 = (iLocal_133 / 100);
						iVar14 *= 90;
						SYSTEM::WAIT(0);
						unk_0x9CB4DD3D88846081(0, 0, 3, 0);
						func_78(0, 1, 1, 0, 0);
						func_3(func_35(), 1, iVar14);
						func_285(1);
					}
					else
					{
						unk_0xDE7B9CB38D019BF0();
						if (unk_0x619CCA1A6FD0BC87(unk_0xBC25C936A095B5BA(), -3856156))
						{
							if (!unk_0x36CEFBE9B745A58D(iLocal_56) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
							{
								if (unk_0xB6A16B5E7EB81F9B(iLocal_57, unk_0xBC25C936A095B5BA()))
								{
									unk_0x17175087F2DB6AC8(iLocal_57, 0, true);
									if (unk_0xB6FD7D587FE0A1B4(iLocal_56))
									{
										unk_0x5DBE04849460E608(iLocal_57, iLocal_56, unk_0xFA18E720A39243D0(iLocal_56, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
									}
									else
									{
										unk_0x5DBE04849460E608(iLocal_57, iLocal_56, unk_0xFA18E720A39243D0(iLocal_56, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
									}
								}
							}
						}
					}
					break;
				}
			}
	}
}

int func_3(int iParam0, int iParam1, int iParam2)//Position - 0x29EF
{
	if (Global_19B04.f_6D75[iParam0 /*29*/].f_11 == 3)
	{
		return 0;
	}
	if (Global_19B04.f_6D75[iParam0 /*29*/].f_11 == 4)
	{
		return 0;
	}
	return func_4(Global_19B04.f_6D75[iParam0 /*29*/].f_11, 0, iParam1, iParam2, 0);
}

int func_4(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x2A38
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_34();
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
					func_33(99, 1);
					func_47(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_47(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_47(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_17(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_13(5))
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
							func_47(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_47(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_47(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_13(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_47(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_47(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_47(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_47(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_47(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_47(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_47(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_47(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_47(joaat("sp2_money_spent_property"), iParam3);
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
									func_47(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_47(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_47(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_47(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_47(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_47(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_13(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_47(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_47(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_47(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_47(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_47(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_47(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_12(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_33(95, iParam3);
					break;
				
				case 1:
					func_33(97, iParam3);
					break;
				
				case 2:
					func_33(96, iParam3);
					break;
			}
			func_33(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_7(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_7(iVar1);
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
					func_47(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_47(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_47(joaat("sp2_total_cash_earned"), iParam3);
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
	func_6(iParam0);
	if (Global_8C41 == 15)
	{
		func_5(0);
	}
	return 1;
}

void func_5(bool bParam0)//Position - 0x3037
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

void func_6(int iParam0)//Position - 0x32B9
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

void func_7(int iParam0)//Position - 0x3313
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_10(129, 0, -1, 1);
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
	else if (unk_0xFA30DFD0084E92FE(Global_19B04.f_5037.f_1D7, iParam0) || unk_0xFA30DFD0084E92FE(Global_200000[func_9() /*12171*/].f_1E08.f_A, iParam0))
	{
		bVar0 = true;
		unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_5037.f_1D7), iParam0);
		unk_0x7CB6FD92BE491AD9(&(Global_200000[func_9() /*12171*/].f_1E08.f_A), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x2E94302CFF011F2E("COUP_RED");
		unk_0xC9C304D0AABE1335(func_8(iParam0));
		unk_0x7BB0762D8C75A3C7(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_8(int iParam0)//Position - 0x33E7
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

int func_9()//Position - 0x346A
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_10(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x3477
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
		iParam2 = func_11();
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

int func_11()//Position - 0x3991
{
	return Global_1407E0;
}

void func_12(int iParam0)//Position - 0x399D
{
	func_33(93, iParam0);
	func_33(29, iParam0);
	func_33(30, iParam0);
}

bool func_13(int iParam0)//Position - 0x39BD
{
	if (iParam0 == 8)
	{
		return func_14(129, -1, -1);
	}
	if (!unk_0x7AF0088ABFA713B6())
	{
		return unk_0xFA30DFD0084E92FE(Global_19B04.f_5037.f_1D7, iParam0);
	}
	return unk_0xFA30DFD0084E92FE(Global_200000[func_9() /*12171*/].f_1E08.f_A, iParam0);
}

int func_14(int iParam0, int iParam1, int iParam2)//Position - 0x3A0B
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_11();
	}
	iVar1 = func_16(iParam0, iParam1);
	uVar2 = func_15(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDAB376DC6F83D68C(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_15(int iParam0)//Position - 0x3A48
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

int func_16(int iParam0, int iParam1)//Position - 0x3D34
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_11();
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

int func_17(bool bParam0)//Position - 0x4003
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
		func_32(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_18(27, 1);
	return 1;
}

int func_18(int iParam0, int iParam1)//Position - 0x40BA
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_19(iParam0, iParam1);
}

int func_19(int iParam0, int iParam1)//Position - 0x40D5
{
	if (func_31(14) && !func_30(iParam0))
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
	if (func_29(&Global_411EB6))
	{
		if (func_27(&Global_411EB6, iParam0))
		{
			return 0;
		}
		if (func_20(&Global_411EB6, iParam0))
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

int func_20(var uParam0, int iParam1)//Position - 0x4172
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x6D5CBCB6411EDE89(iParam1))
	{
		return 0;
	}
	if (func_31(14) && !func_30(iParam1))
	{
		return 0;
	}
	if (func_27(uParam0, iParam1))
	{
		return 0;
	}
	if (func_26(uParam0) < 0f)
	{
		func_25(uParam0, 0);
	}
	func_23(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_21(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_21(var uParam0, int iParam1)//Position - 0x4223
{
	int iVar0;
	
	if (unk_0x6D5CBCB6411EDE89(iParam1))
	{
		return 0;
	}
	if (func_31(14) && !func_30(iParam1))
	{
		return 0;
	}
	if (func_27(uParam0, iParam1))
	{
		return 0;
	}
	if (func_26(uParam0) < 0f)
	{
		func_25(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_22(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_22(var uParam0, int iParam1)//Position - 0x429E
{
	return (*uParam0)[iParam1] == 78;
}

void func_23(var uParam0)//Position - 0x42AF
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_24(uParam0, iVar0);
		iVar0++;
	}
	func_25(uParam0, (Global_411EB5 - 0.5f));
}

void func_24(var uParam0, int iParam1)//Position - 0x42E3
{
	(*uParam0)[iParam1] = 78;
}

void func_25(var uParam0, float fParam1)//Position - 0x42F3
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

float func_26(var uParam0)//Position - 0x4310
{
	return uParam0->f_50;
}

bool func_27(var uParam0, int iParam1)//Position - 0x431C
{
	return func_28(uParam0, iParam1) != -1;
}

int func_28(var uParam0, int iParam1)//Position - 0x432E
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

bool func_29(var uParam0)//Position - 0x435B
{
	return uParam0->f_4F == 1;
}

int func_30(int iParam0)//Position - 0x4369
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

bool func_31(int iParam0)//Position - 0x43B9
{
	return Global_8C41 == iParam0;
}

int func_32(int iParam0, int iParam1)//Position - 0x43C7
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

void func_33(int iParam0, int iParam1)//Position - 0x4418
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

void func_34()//Position - 0x4475
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

int func_35()//Position - 0x44EA
{
	func_36();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_36()//Position - 0x4503
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_39(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_38(unk_0xBC25C936A095B5BA());
			if (func_37(iVar0) && (!func_31(14) || Global_196EB))
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

bool func_37(int iParam0)//Position - 0x4600
{
	return iParam0 < 3;
}

int func_38(int iParam0)//Position - 0x460C
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

int func_39(int iParam0)//Position - 0x4649
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

void func_40()//Position - 0x4673
{
	int iVar0;
	
	iVar0 = unk_0x585DE1CBEEB2D27D(26379945, unk_0xA4455714F3DCE207(unk_0xBC25C936A095B5BA(), 0.5f, -1f, 0.5f), 0f, 0f, unk_0x349C94FFF43E2979(unk_0xBC25C936A095B5BA()), 65f, 1, 2);
	unk_0x348665177DBFB93B(iVar0, true);
}

int func_41()//Position - 0x46B1
{
	if (unk_0x3D875C2512206692(unk_0xEBC6179F395EFBEB()) == 4)
	{
		return 1;
	}
	return 0;
}

void func_42(int iParam0)//Position - 0x46CA
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

int func_43(int iParam0, float fParam1, float fParam2)//Position - 0x4702
{
	float fVar0;
	float fVar1;
	
	fVar0 = (fParam1 + (fParam2 / 2f));
	if (fVar0 > 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	fVar1 = (fParam1 - (fParam2 / 2f));
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (fVar0 > fVar1)
		{
			if (unk_0x349C94FFF43E2979(iParam0) < fVar0 && unk_0x349C94FFF43E2979(iParam0) > fVar1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (unk_0x349C94FFF43E2979(iParam0) < fVar0 || unk_0x349C94FFF43E2979(iParam0) > fVar1)
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

int func_44()//Position - 0x47A3
{
	if (func_45(1000))
	{
		unk_0x7A41D32A383895D8(500);
		while (unk_0x422F9EDE839E6ABB())
		{
			unk_0xDE7B9CB38D019BF0();
			SYSTEM::WAIT(0);
		}
		return 1;
	}
	return 0;
}

int func_45(int iParam0)//Position - 0x47D4
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
			if (func_46())
			{
				Global_1B = unk_0x105601648511CC64();
				return 1;
			}
		}
	}
	return 0;
}

int func_46()//Position - 0x481E
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

void func_47(int iParam0, int iParam1)//Position - 0x4850
{
	int iVar0;
	
	unk_0x6CB99B97664C3727(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x3A57956BCE003880(iParam0, iVar0, 1);
}

int func_48(var uParam0, char* sParam1, char* sParam2, char[4] cParam3, char* sParam4, char[4] cParam5, int iParam6, int iParam7, int iParam8)//Position - 0x4873
{
	var uVar0;
	var uVar1;
	
	func_59(uParam0, 145, sParam1, iParam7, iParam8, 0);
	if (iParam6 > 7)
	{
		if (iParam6 < 12)
		{
			iParam6 = 7;
		}
	}
	uVar0 = 10;
	uVar1 = 10;
	func_58(2, &uVar0, &uVar1, sParam2, cParam3, sParam4, cParam5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_49(&uVar0, &uVar1, iParam6, 0);
}

int func_49(var uParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x48CC
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
					func_57();
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
		if (func_56(8, -1))
		{
			return 0;
		}
		Global_3E04 = { Global_3DFE };
		func_55();
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
				func_54();
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
				if (func_53())
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
			if (func_52())
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
			func_51();
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
		func_50();
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
		func_57();
	}
	return 0;
}

void func_50()//Position - 0x4C36
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

void func_51()//Position - 0x4C67
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

int func_52()//Position - 0x4CFC
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_53()//Position - 0x4D23
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

void func_54()//Position - 0x4DBC
{
	if (func_31(14))
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
		Global_389D = func_35();
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

void func_55()//Position - 0x4E5E
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

bool func_56(int iParam0, int iParam1)//Position - 0x4EB5
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

void func_57()//Position - 0x4EF0
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

void func_58(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x4F47
{
	Global_3DB5 = iParam0;
	Global_3DBF = 0;
	Global_3DC6 = 0;
	Global_3DC1 = 0;
	Global_4197 = 0;
	Global_419D = 0;
	Global_280001 = 0;
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

void func_59(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x4FCF
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

bool func_60(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x5025
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

Vector3 func_61(vector3 vParam0, vector3 vParam1)//Position - 0x506C
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	vector3 vVar10;
	vector3 vVar11;
	var uVar12;
	int iVar13;
	
	iVar5 = 0;
	iVar6 = 1;
	iVar0 = unk_0x3E12B546F3F2597A();
	if (!unk_0x5CAE759AE8219D20(iVar0))
	{
		unk_0x77815D3407C6700D(iVar0, true, 0);
	}
	unk_0x2B3953EE61953843(unk_0x6F79ECA8C83E4357(iVar0), &vVar3, &vVar4);
	unk_0x29EBF830A072263F(vParam0, 3, &vVar2, 1, 3f, 0f);
	if (SYSTEM::VDIST(vParam0, -3039.655f, 602.4346f, 6.5719f) <= 25f)
	{
		vVar1 = { -3045.49f, 604.46f, 7.02f };
		iVar5 = 8;
	}
	else if (SYSTEM::VDIST(vParam0, 288.06f, -1257.1f, 28.44f) <= 25f)
	{
		vVar1 = { 278.97f, -1255.06f, 28.88f };
		iVar5 = 8;
	}
	while (iVar5 < 8)
	{
		switch (iVar5)
		{
			case 0:
				if (SYSTEM::VDIST(vVar2, unk_0xA4455714F3DCE207(iVar0, 0f, (vVar4.y + IntToFloat(iVar6)), 0f)) < SYSTEM::VDIST(vVar2, unk_0xA4455714F3DCE207(iVar0, 0f, -(vVar4.y + IntToFloat(iVar6)), 0f)))
				{
					vVar1 = { unk_0xA4455714F3DCE207(iVar0, 0f, (vVar4.y + IntToFloat(iVar6)), 0f) };
				}
				else
				{
					vVar1 = { unk_0xA4455714F3DCE207(iVar0, 0f, -(vVar4.y + IntToFloat(iVar6)), 0f) };
				}
				if (unk_0x724D816EA203A79E(iVar0))
				{
					if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
					{
						vVar10 = { func_62(vVar1, 0f, vVar4) };
						vVar11 = { func_62(vVar1, 0f, vVar3) };
						iVar13 = unk_0xA20E4A82503CECB3(vVar10, vVar11, 511, iVar0, 7);
						iVar5++;
					}
					else
					{
						iVar5 = 8;
					}
				}
				else
				{
					iVar5 = 8;
				}
				break;
			
			case 1:
				if (unk_0xB0695CD48A28A3A9(iVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 2)
				{
					if (iVar7 != 0)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 2;
						}
						else
						{
							iVar6++;
							iVar5 = 0;
						}
					}
					else if (unk_0xF0F2FC9DE291567F(vVar1, vParam0, true) <= 5f || unk_0xF0F2FC9DE291567F(vVar1, vParam1, true) <= 5f)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 2;
						}
						else
						{
							iVar6++;
							iVar5 = 0;
						}
					}
					else
					{
						iVar5 = 8;
					}
				}
				break;
			
			case 2:
				if (SYSTEM::VDIST(vVar2, unk_0xA4455714F3DCE207(iVar0, 0f, (vVar4.y - IntToFloat(iVar6)), 0f)) < SYSTEM::VDIST(vVar2, unk_0xA4455714F3DCE207(iVar0, 0f, -(vVar4.y - IntToFloat(iVar6)), 0f)))
				{
					vVar1 = { unk_0xA4455714F3DCE207(iVar0, 0f, (vVar4.y - IntToFloat(iVar6)), 0f) };
				}
				else
				{
					vVar1 = { unk_0xA4455714F3DCE207(iVar0, 0f, -(vVar4.y - IntToFloat(iVar6)), 0f) };
				}
				if (unk_0x724D816EA203A79E(iVar0))
				{
					if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
					{
						vVar10 = { func_62(vVar1, 0f, vVar4) };
						vVar11 = { func_62(vVar1, 0f, vVar3) };
						iVar13 = unk_0xA20E4A82503CECB3(vVar10, vVar11, 511, iVar0, 7);
						iVar5++;
					}
					else
					{
						iVar5 = 8;
					}
				}
				else
				{
					iVar5 = 8;
				}
				break;
			
			case 3:
				if (unk_0xB0695CD48A28A3A9(iVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 2)
				{
					if (iVar7 != 0)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 4;
						}
						else
						{
							iVar6++;
							iVar5 = 2;
						}
					}
					else if (unk_0xF0F2FC9DE291567F(vVar1, vParam0, true) <= 5f || unk_0xF0F2FC9DE291567F(vVar1, vParam1, true) <= 5f)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 4;
						}
						else
						{
							iVar6++;
							iVar5 = 2;
						}
					}
					else
					{
						iVar5 = 8;
					}
				}
				break;
			
			case 4:
				if (SYSTEM::VDIST(vVar2, unk_0xA4455714F3DCE207(iVar0, (vVar4.x + IntToFloat(iVar6)), 0f, 0f)) < SYSTEM::VDIST(vVar2, unk_0xA4455714F3DCE207(iVar0, -(vVar4.x + IntToFloat(iVar6)), 0f, 0f)))
				{
					vVar1 = { unk_0xA4455714F3DCE207(iVar0, (vVar4.x + IntToFloat(iVar6)), 0f, 0f) };
				}
				else
				{
					vVar1 = { unk_0xA4455714F3DCE207(iVar0, -(vVar4.x + IntToFloat(iVar6)), 0f, 0f) };
				}
				if (unk_0x724D816EA203A79E(iVar0))
				{
					if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
					{
						vVar10 = { func_62(vVar1, 0f, vVar4) };
						vVar11 = { func_62(vVar1, 0f, vVar3) };
						iVar13 = unk_0xA20E4A82503CECB3(vVar10, vVar11, 511, iVar0, 7);
						iVar5++;
					}
					else
					{
						iVar5 = 8;
					}
				}
				else
				{
					iVar5 = 8;
				}
				break;
			
			case 5:
				if (unk_0xB0695CD48A28A3A9(iVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 2)
				{
					if (iVar7 != 0)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 6;
						}
						else
						{
							iVar6++;
							iVar5 = 4;
						}
					}
					else if (unk_0xF0F2FC9DE291567F(vVar1, vParam0, true) <= 5f || unk_0xF0F2FC9DE291567F(vVar1, vParam1, true) <= 5f)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 6;
						}
						else
						{
							iVar6++;
							iVar5 = 4;
						}
					}
					else
					{
						iVar5 = 8;
					}
				}
				break;
			
			case 6:
				if (SYSTEM::VDIST(vVar2, unk_0xA4455714F3DCE207(iVar0, (vVar4.x - IntToFloat(iVar6)), 0f, 0f)) < SYSTEM::VDIST(vVar2, unk_0xA4455714F3DCE207(iVar0, -(vVar4.x - IntToFloat(iVar6)), 0f, 0f)))
				{
					vVar1 = { unk_0xA4455714F3DCE207(iVar0, (vVar4.x - IntToFloat(iVar6)), 0f, 0f) };
				}
				else
				{
					vVar1 = { unk_0xA4455714F3DCE207(iVar0, -(vVar4.x - IntToFloat(iVar6)), 0f, 0f) };
				}
				if (unk_0x724D816EA203A79E(iVar0))
				{
					if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
					{
						vVar10 = { func_62(vVar1, 0f, vVar4) };
						vVar11 = { func_62(vVar1, 0f, vVar3) };
						iVar13 = unk_0xA20E4A82503CECB3(vVar10, vVar11, 511, iVar0, 7);
						iVar5++;
					}
					else
					{
						iVar5 = 8;
					}
				}
				else
				{
					iVar5 = 8;
				}
				break;
			
			case 7:
				if (unk_0xB0695CD48A28A3A9(iVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 2)
				{
					if (iVar7 != 0)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 8;
						}
						else
						{
							iVar6++;
							iVar5 = 6;
						}
					}
					else if (unk_0xF0F2FC9DE291567F(vVar1, vParam0, true) <= 5f || unk_0xF0F2FC9DE291567F(vVar1, vParam1, true) <= 5f)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 8;
						}
						else
						{
							iVar6++;
							iVar5 = 6;
						}
					}
					else
					{
						iVar5 = 8;
					}
				}
				break;
			
			case 8:
				break;
		}
		SYSTEM::WAIT(0);
	}
	return vVar1;
}

Vector3 func_62(vector3 vParam0, float fParam1, struct<2> Param2, var uParam3)//Position - 0x566D
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	
	fVar1 = fParam1;
	fVar2 = SYSTEM::COS(fVar1);
	fVar3 = SYSTEM::SIN(fVar1);
	vVar0.x = ((Param2 * fVar2) + (Param2.f_1 * fVar3));
	vVar0.y = ((Param2.f_1 * fVar2) - (Param2 * fVar3));
	vVar4 = { vParam0 + vVar0 };
	return vVar4;
}

int func_63(int iParam0)//Position - 0x56BA
{
	if (func_105(iParam0))
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

int func_64(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0x56E4
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

void func_65(int iParam0, var uParam1, var uParam2, char* sParam3, char* sParam4)//Position - 0x575F
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	vector3 vVar8;
	vector3 vVar9;
	vector3 vVar10;
	var uVar11;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 1;
	*uParam1 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false) };
	uParam2->f_2 = func_67(iParam0, unk_0xBC25C936A095B5BA(), 1);
	fVar3 = func_67(iParam0, unk_0xBC25C936A095B5BA(), 1);
	fVar4 = func_67(iParam0, unk_0xBC25C936A095B5BA(), 1);
	vVar10 = { unk_0x541C2AEF053615BC(iParam0, false) - unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false) };
	if (unk_0xF9E082857622D91E(sParam3))
	{
		vVar9 = { unk_0x883FF674F22D1F7C(sParam3, sParam4, *uParam1, *uParam2, 0, 2) };
	}
	else
	{
		vVar9 = { *uParam1 + Vector(0f, 5f, 5f) };
	}
	while (iVar0 < 2)
	{
		switch (iVar0)
		{
			case 0:
				if (iVar1 > 20)
				{
					uParam2->f_2 = func_66(unk_0x541C2AEF053615BC(iParam0, false), *uParam1, 1);
					*uParam1 = { unk_0x89D97EB4FAE4A574(unk_0x541C2AEF053615BC(iParam0, false), uParam2->f_2, vVar10) };
					iVar0 = 2;
				}
				else
				{
					iVar5 = unk_0xEDB5D06AC6E2D672(*uParam1, vVar9 + Vector(-1f, 0f, 0f), 0.5f, 17, 0, 4);
					iVar0++;
				}
				break;
			
			case 1:
				if (unk_0xB0695CD48A28A3A9(iVar5, &iVar6, &vVar8, &uVar7, &uVar11) == 2)
				{
					if (iVar6 != 0)
					{
						if (vVar8.z > (uParam1->f_2 + 8.5f))
						{
							iVar0++;
						}
						else
						{
							if (iVar1 <= 3)
							{
								fVar4 = (fVar4 + 7.5f);
							}
							else
							{
								fVar4 = (fVar3 - (7.5f * IntToFloat(iVar2)));
								iVar2++;
							}
							*uParam1 = { unk_0x89D97EB4FAE4A574(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false), fVar4, vVar10) };
							iVar1++;
							iVar0 = 0;
						}
					}
					else
					{
						if (iVar1 > 0)
						{
							uParam2->f_2 = func_66(vVar9 + Vector(-0.75f, 0f, 0f), *uParam1, 1);
						}
						iVar0++;
					}
				}
				break;
			
			case 2:
				break;
		}
		SYSTEM::WAIT(0);
	}
}

float func_66(struct<2> Param0, float fParam1, struct<2> Param2, var uParam3, int iParam4)//Position - 0x5917
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param2 - Param0);
	fVar2 = (Param2.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = unk_0xE8CFCB6B2165523B(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam4 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

float func_67(int iParam0, int iParam1, int iParam2)//Position - 0x597C
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { unk_0x541C2AEF053615BC(iParam0, false) };
	vVar1 = { unk_0x541C2AEF053615BC(iParam1, false) };
	return func_66(vVar0, vVar1, iParam2);
}

void func_68(vector3 vParam0, float fParam1, float fParam2)//Position - 0x59A8
{
	bool bVar0;
	vector3 vVar1;
	float fVar2;
	
	bVar0 = false;
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		vVar1 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) - vParam0 };
		fVar2 = unk_0xFDC254CE02DB0919(vVar1.x, vVar1.y);
		if (func_69(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), fVar2, 15f))
		{
			bVar0 = true;
		}
		vVar1 = { vParam0 - unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
		fVar2 = unk_0xFDC254CE02DB0919(vVar1.x, vVar1.y);
		if (func_69(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), fVar2, 15f))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (unk_0x8910237449BB6F79(unk_0xBC25C936A095B5BA()) > 30f)
		{
			*fParam1 = (6f * 4f);
		}
		else if (unk_0x8910237449BB6F79(unk_0xBC25C936A095B5BA()) > 20f)
		{
			*fParam1 = (6f * 3f);
		}
		else if (unk_0x8910237449BB6F79(unk_0xBC25C936A095B5BA()) > 10f)
		{
			*fParam1 = (6f * 2f);
		}
		else
		{
			*fParam1 = 6f;
		}
		*fParam2 = ((*fParam1 / 1.33f) - 1f);
	}
	else
	{
		*fParam1 = 6f;
		*fParam2 = ((*fParam1 / 1.33f) - 1f);
	}
}

int func_69(int iParam0, float fParam1, float fParam2)//Position - 0x5AA9
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		fVar0 = unk_0x349C94FFF43E2979(iParam0);
		fVar2 = (fParam1 - fParam2);
		if (fVar2 < 0f)
		{
			fVar2 = (fVar2 + 360f);
		}
		fVar1 = (fParam1 + fParam2);
		if (fVar1 >= 360f)
		{
			fVar1 = (fVar1 - 360f);
		}
		if (fVar1 > fVar2)
		{
			if (fVar0 < fVar1 && fVar0 > fVar2)
			{
				return 1;
			}
		}
		else if (fVar0 < fVar1 || fVar0 > fVar2)
		{
			return 1;
		}
	}
	return 0;
}

void func_70(int iParam0)//Position - 0x5B30
{
	if (!Global_389D.f_1 == 1)
	{
		if (func_73(0))
		{
			func_71(iParam0);
		}
		unk_0xF0059F27F7BB6680(&Global_93C, 2);
	}
}

void func_71(int iParam0)//Position - 0x5B59
{
	if (Global_3943)
	{
		func_72(0, 0);
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
	if (!func_52())
	{
		Global_389D.f_1 = 3;
	}
}

void func_72(bool bParam0, bool bParam1)//Position - 0x5BC9
{
	if (bParam0)
	{
		if (func_73(0))
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

int func_73(int iParam0)//Position - 0x5C3D
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

void func_74()//Position - 0x5C97
{
	Global_394A = 0;
	func_75();
}

void func_75()//Position - 0x5CA7
{
	unk_0x5C7DC611411E2CF9();
	Global_41AB = 0;
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x1E08809A5041F85B(false);
		Global_3DB8 = 6;
	}
}

int func_76(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x5CC8
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
	func_77(iParam0);
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

void func_77(int iParam0)//Position - 0x5E57
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

void func_78(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x5E83
{
	if (bParam0)
	{
		unk_0x0D2E9062E966BE4F(unk_0xB5CEFD608600A09F());
		unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 1);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 1);
		func_85(1);
		unk_0x32FF237D69EB5489();
		unk_0x3169E2C5E6A096BC();
		if (Global_389D.f_1 > 3)
		{
			if (unk_0x58E7DDFF8D17A82A())
			{
				unk_0x1E08809A5041F85B(false);
			}
			if (!func_52())
			{
				Global_389D.f_1 = 3;
			}
			Global_3DB8 = 5;
		}
		func_84(1, iParam3, iParam2, 0);
		Global_DAA5 = 1;
		Global_10ABB = 1;
		Global_11540 = 1;
	}
	else
	{
		func_85(0);
		unk_0xCB50D125C355ED9C();
		Global_DAA5 = 0;
		if (bParam1)
		{
			unk_0x7FF4F08CAB3344B1();
		}
		unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 0);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 0);
		func_84(0, iParam3, iParam2, 0);
		if (unk_0x7AF0088ABFA713B6())
		{
			if ((((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_82(unk_0xB5CEFD608600A09F())) && !func_80(unk_0xB5CEFD608600A09F(), 0)) && !func_79()) && !bParam4)
			{
				unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), false);
			}
		}
		else if ((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_82(unk_0xB5CEFD608600A09F())) && !bParam4)
		{
			unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), false);
		}
		Global_11540 = 0;
	}
}

bool func_79()//Position - 0x5FAC
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_27.f_12, 14);
}

bool func_80(int iParam0, int iParam1)//Position - 0x5FC9
{
	bool bVar0;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		bVar0 = func_81(-1, 0) == 8;
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

int func_81(int iParam0, bool bParam1)//Position - 0x6014
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_11();
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

int func_82(int iParam0)//Position - 0x6055
{
	if (func_80(iParam0, 0))
	{
		return 1;
	}
	if (func_83())
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

bool func_83()//Position - 0x6097
{
	return unk_0xFA30DFD0084E92FE(Global_240006, 3);
}

int func_84(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x60A8
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

void func_85(int iParam0)//Position - 0x60DB
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

void func_86()//Position - 0x60FE
{
	Global_394A = 0;
	func_57();
}

int func_87()//Position - 0x610E
{
	if (Global_3DB8 != 0 || unk_0xE6711F601F11B66B())
	{
		return 1;
	}
	return 0;
}

int func_88()//Position - 0x6130
{
	if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		if (func_87())
		{
			return 1;
		}
	}
	return 0;
}

int func_89(bool bParam0, bool bParam1, bool bParam2)//Position - 0x6151
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

bool func_90(int iParam0)//Position - 0x6236
{
	return func_91(func_92(iParam0));
}

int func_91(char* sParam0)//Position - 0x6248
{
	unk_0xF07D20149ECBC61E(sParam0);
	return unk_0xA66DBDA0A072514A(0);
}

char* func_92(int iParam0)//Position - 0x625B
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

int func_93()//Position - 0x629E
{
	switch (iLocal_72)
	{
		case 1:
			if (!unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -190.8152f, -801.3224f, 25.45401f, -214.8212f, -866.6472f, 35.0318f, 40f, 0, true, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (!unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 270.5801f, -1290.954f, 24.16572f, 270.499f, -1238.311f, 34.52738f, 58.25f, 0, true, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if (!unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -3038.987f, 606.4774f, 2.589385f, -3057.039f, 599.7103f, 12.70948f, 19.25f, 0, true, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (!unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 170.8581f, 6619.894f, 30.31941f, 183.9522f, 6632.882f, 34.06088f, 22.25f, 0, true, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (!unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -9.663248f, -938.2167f, 24.29024f, 48.12534f, -959.4428f, 34.60982f, 7.5f, 0, true, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if (!unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 283.0487f, -923.3091f, 24.13956f, 301.367f, -871.6924f, 34.4707f, 6.75f, 0, true, 0))
			{
				return 1;
			}
			break;
		
		case 11:
			if (!unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 1053.799f, -772.7601f, 53.31232f, 1112.018f, -772.2864f, 60.16156f, 14.75f, 0, true, 0))
			{
				return 1;
			}
			break;
		
		case 16:
			if (!unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -2097.21f, -292.7766f, 8.141721f, -2101.908f, -345.41f, 18.23235f, 54.25f, 0, true, 0))
			{
				return 1;
			}
			break;
		
		case 17:
			if (!unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -799.6841f, -1117.781f, 5.659806f, -820.5555f, -1080.585f, 16.38764f, 29.5f, 0, true, 0))
			{
				return 1;
			}
			break;
		
		case 18:
			if (!unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -731.1746f, -820.053f, 18.06713f, -670.6583f, -821.2724f, 29.66125f, 8f, 0, true, 0))
			{
				return 1;
			}
			break;
		
		case 19:
			if (!unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -379.9555f, 6033.261f, 29.74875f, -394.2914f, 6047.678f, 33.9986f, 7f, 0, true, 0) && !unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -393.6422f, 6056.547f, 29.75011f, -402.4834f, 6047.817f, 33.99312f, 17.5f, 0, true, 0))
			{
				return 1;
			}
			break;
		
		case 22:
			if (!unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -294.338f, -833.5905f, 26.65178f, -330.661f, -827.2508f, 38.64983f, 16.5f, 0, true, 0) && !unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -294.1309f, -836.8602f, 26.72095f, -284.6938f, -814.233f, 37.38612f, 11f, 0, true, 0))
			{
				return 1;
			}
			break;
		
		case 23:
			if ((!unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -253.9362f, -689.096f, 28.56934f, -278.4698f, -682.0773f, 38.52502f, 9.5f, 0, true, 0) && !unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -253.3138f, -687.6628f, 28.5611f, -247.2367f, -703.1184f, 38.8144f, 9.5f, 0, true, 0)) && !unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -255.6709f, -726.2742f, 28.5187f, -247.2367f, -703.1184f, 38.8144f, 9.5f, 0, true, 0))
			{
				return 1;
			}
			break;
		
		case 25:
			if (!unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 114.2641f, -9.324284f, 62.78819f, 75.47891f, 4.897117f, 73.96004f, 7f, 0, true, 0))
			{
				return 1;
			}
			break;
		
		case 30:
			if (!unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -544.5211f, -1200.006f, 12.87966f, -509.3911f, -1216.772f, 23.72543f, 41f, 0, true, 0))
			{
				return 1;
			}
			break;
		
		case 31:
			if (!unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -2945.132f, 491.4792f, 13.2899f, -2971.825f, 492.9101f, 18.0671f, 10f, 0, true, 0))
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	if (unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA()) != 0)
	{
		return 1;
	}
	return 0;
}

void func_94()//Position - 0x6779
{
	var uVar0;
	
	if (!bLocal_95)
	{
		if (iLocal_126)
		{
			func_102();
		}
		else
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_55))
			{
				if (unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), iLocal_55) || unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), iLocal_55))
				{
					if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_55, 25f, 25f, 25f, 0, 1, 0))
					{
						iLocal_126 = 1;
					}
				}
			}
			else
			{
				iLocal_126 = 1;
			}
			func_112(iLocal_59, &uLocal_70);
		}
		if (!bLocal_127)
		{
			if (bLocal_90)
			{
				if (unk_0xF1B911222059B1A1(iLocal_89))
				{
					func_47(joaat("rc_wallets_recovered"), 1);
					unk_0x6CB99B97664C3727(joaat("rc_wallets_recovered"), &uVar0, -1);
					unk_0xF715C239F71B95D6(0, 200, 250);
					func_95(2);
					bLocal_95 = true;
				}
				else if (unk_0x2DA8CA50A72528FB(iLocal_60))
				{
					if (SYSTEM::VDIST(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), unk_0x85EA1A40FC3A6769(iLocal_89)) > 150f)
					{
						if (unk_0x36CEFBE9B745A58D(iLocal_56))
						{
							func_267();
						}
						else if (SYSTEM::VDIST(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), unk_0x541C2AEF053615BC(iLocal_56, true)) > 100f)
						{
							func_267();
						}
					}
				}
			}
		}
	}
}

void func_95(int iParam0)//Position - 0x6882
{
	switch (iParam0)
	{
		case 0:
			if (Global_19B04.f_6186.f_2 < 3)
			{
				if (!unk_0x5107E30005FCFEA8())
				{
					func_96(func_92(iParam0), -1);
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
					func_96(func_92(iParam0), -1);
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
					func_96(func_92(iParam0), -1);
					Global_19B04.f_6186.f_4++;
					unk_0xF0059F27F7BB6680(&Global_19B00, 2);
				}
			}
			break;
	}
}

void func_96(char* sParam0, int iParam1)//Position - 0x6963
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, true, iParam1);
}

void func_97(var uParam0)//Position - 0x697A
{
	*uParam0 = -99;
}

int func_98(int iParam0, bool bParam1, int iParam2)//Position - 0x6988
{
	iParam2 = iParam2;
	return func_99(iParam0, bParam1, 145);
}

int func_99(int iParam0, bool bParam1, int iParam2)//Position - 0x699E
{
	int iVar0;
	
	iVar0 = func_100(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x2DA8CA50A72528FB(iVar0)) && unk_0x0F6F4C227FB5DD52(&(Global_19B04.f_6D75[iParam2 /*29*/].f_3)))
	{
		unk_0x436D0272182E484D(iVar0, &(Global_19B04.f_6D75[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_100(int iParam0, bool bParam1, bool bParam2)//Position - 0x69F0
{
	int iVar0;
	
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x511FE22BCF5353CD(iParam0);
	if (unk_0xD27AC0E9B78CFDD7(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(iVar0, func_101(unk_0x7AF0088ABFA713B6(), 1f, 1f));
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
		unk_0x3F5F1772D71D5EC4(iVar0, func_101(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
		unk_0xF9C2945DB5BAB4BF(iVar0, bParam1);
	}
	else if (unk_0xB12D030810E8447D(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(iVar0, func_101(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_101(bool bParam0, float fParam1, float fParam2)//Position - 0x6A94
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_102()//Position - 0x6AAB
{
	int iVar0;
	int iVar1;
	
	iVar0 = joaat("pickup_money_purse");
	if (!bLocal_90)
	{
		unk_0xF0059F27F7BB6680(&iVar1, 3);
		unk_0xF0059F27F7BB6680(&iVar1, 4);
		unk_0xF0059F27F7BB6680(&iVar1, 1);
		iLocal_89 = unk_0x249B372087B496EC(iVar0, unk_0x733A3EDEC245A3D2(iLocal_55, 1067030938, 1069547520), iVar1, iLocal_133, 1, iLocal_101);
		bLocal_90 = true;
		iLocal_60 = func_103(iLocal_89);
		func_115(&Local_107, cLocal_123, sLocal_119, 4, 0, 0, 0);
		if (unk_0x2DA8CA50A72528FB(iLocal_59))
		{
			unk_0x07B8ECB35A4ED3AC(&iLocal_59);
		}
		if (func_105(iLocal_56))
		{
			unk_0xA4E856A8CD53B8DF(iLocal_56);
		}
	}
	else
	{
		if (!iLocal_91)
		{
			if (!func_171(iLocal_56, 242628503) && !unk_0x36CEFBE9B745A58D(iLocal_56))
			{
				unk_0xC5A6DFE2B8987B17(&iLocal_61);
				if (!unk_0x4DBCE270B354E123(iLocal_56, vLocal_138, 0.5f, 0.5f, 0.5f, false, true, 0))
				{
					unk_0xDF14F570C0180463(0, vLocal_138, 1f, 20000, 1193033728, 0.5f);
				}
				unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 0);
				unk_0xE896C0AD02364F2A(0, cLocal_148, sLocal_149, 8f, -2f, -1, 0, 0, 0, 0, 0);
				unk_0xE896C0AD02364F2A(0, cLocal_148, sLocal_151, 8f, -2f, -1, 0, 0, 0, 0, 0);
				unk_0xE896C0AD02364F2A(0, cLocal_148, sLocal_150, 8f, -2f, -1, 1, 0, 0, 0, 0);
				unk_0x535008C596714F9E(iLocal_61);
				unk_0xA8E6405305C0D7DF(iLocal_56, iLocal_61);
				unk_0x02DAF06EA4F08219(&iLocal_61);
			}
		}
		if (iLocal_91)
		{
			if (!bLocal_95)
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_56))
				{
					if (unk_0x96044E39418AAF17(iLocal_56, cLocal_93, "pickup_low", 3))
					{
						if (unk_0x4A3B2CF8BADDD74E(iLocal_56, cLocal_93, "pickup_low") > 0.35f)
						{
							if (unk_0xA901403F1DB7A780(iLocal_89))
							{
								func_115(&Local_107, cLocal_123, cLocal_120, 4, 0, 0, 0);
								unk_0x9680DF46F29C0428(iLocal_89);
								unk_0x8EF3D958386640FE(iLocal_56, iLocal_133);
								unk_0x2E35C4FA5F0ED22F(iLocal_56, false);
								unk_0x02537C8C1BEEB477(&iLocal_56);
								func_285(1);
							}
						}
					}
					else if (unk_0xF4FCC3C1048FF2AB(iLocal_56, 242628503) == 7)
					{
						unk_0xA4E856A8CD53B8DF(iLocal_56);
						unk_0xC5A6DFE2B8987B17(&iLocal_61);
						unk_0xE896C0AD02364F2A(0, cLocal_93, "pickup_low", 8f, -8f, -1, 0, 0, 0, 0, 0);
						unk_0x56F2E1B5599188FA(0, unk_0xBC25C936A095B5BA(), 3000, 2048, 2);
						unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 3000);
						unk_0x8CE2798B9A7027EC(0, 1193033728, 0);
						unk_0x535008C596714F9E(iLocal_61);
						unk_0xA8E6405305C0D7DF(iLocal_56, iLocal_61);
						unk_0x02DAF06EA4F08219(&iLocal_61);
						unk_0x22321800954A532E(iLocal_56, true);
					}
				}
			}
		}
		else if (!unk_0x36CEFBE9B745A58D(iLocal_56))
		{
			if (unk_0xA901403F1DB7A780(iLocal_89))
			{
				if (unk_0x4DBCE270B354E123(iLocal_56, unk_0x85EA1A40FC3A6769(iLocal_89), 10f, 10f, 7f, false, true, 0))
				{
					unk_0xA4E856A8CD53B8DF(iLocal_56);
					unk_0xC5A6DFE2B8987B17(&iLocal_61);
					unk_0x346129B364057FF6(0, unk_0x85EA1A40FC3A6769(iLocal_89), 1f, 20000, 1f, 512, 1193033728);
					unk_0xCF4C6C235CD09F4F(0, unk_0x85EA1A40FC3A6769(iLocal_89), 0);
					unk_0xE896C0AD02364F2A(0, cLocal_93, "pickup_low", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x56F2E1B5599188FA(0, unk_0xBC25C936A095B5BA(), 3000, 2048, 2);
					unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 3000);
					unk_0x8CE2798B9A7027EC(0, 1193033728, 0);
					unk_0x535008C596714F9E(iLocal_61);
					unk_0xA8E6405305C0D7DF(iLocal_56, iLocal_61);
					unk_0x02DAF06EA4F08219(&iLocal_61);
					unk_0x22321800954A532E(iLocal_56, true);
					iLocal_91 = 1;
				}
			}
		}
	}
}

int func_103(int iParam0)//Position - 0x6DB4
{
	return func_104(iParam0);
}

int func_104(int iParam0)//Position - 0x6DC2
{
	int iVar0;
	
	if (!unk_0xA901403F1DB7A780(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x480F8C5F7EE6B525(iParam0);
	unk_0x3F5F1772D71D5EC4(iVar0, func_101(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
	return iVar0;
}

int func_105(int iParam0)//Position - 0x6DFA
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

void func_106()//Position - 0x6E1B
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	switch (iLocal_65)
	{
		case 1:
		case 2:
			if (unk_0xD9C1758D86688CEA(iLocal_55, unk_0xBC25C936A095B5BA(), 1))
			{
				unk_0x5502708AECB47F5D(iLocal_55);
				bVar0 = true;
			}
			if (unk_0xE59B7F5A03335350(iLocal_73, 0) && unk_0x62F3A07C43FFB568(iLocal_55, iLocal_73, 0))
			{
				if (unk_0xB9FEB746FD810A52(iLocal_73))
				{
					if (unk_0xE7259E40522CC260(iLocal_73))
					{
						bVar0 = true;
					}
				}
			}
			else if (!unk_0xE59B7F5A03335350(iLocal_73, 0) || !func_171(iLocal_55, -1273030092))
			{
				bVar0 = true;
			}
			if (!unk_0x889DA6CE8E4DB344(iLocal_55))
			{
				if (unk_0xF4FCC3C1048FF2AB(iLocal_55, -1273030092) == 7)
				{
					bVar0 = true;
				}
			}
			if (bVar0)
			{
				if (!iLocal_86)
				{
					if (unk_0x62F3A07C43FFB568(iLocal_55, iLocal_73, 0))
					{
						if (unk_0xF4FCC3C1048FF2AB(iLocal_55, 242628503) != 1 && unk_0xF4FCC3C1048FF2AB(iLocal_55, 242628503) != 0)
						{
							unk_0xC5A6DFE2B8987B17(&iLocal_62);
							unk_0xA3981DED4FC2E56E(0, 0, 0);
							unk_0x5558ED6D4A2DEC93(0, unk_0xBC25C936A095B5BA(), 300f, -1, 0, 0);
							unk_0x535008C596714F9E(iLocal_62);
							unk_0xA8E6405305C0D7DF(iLocal_55, iLocal_62);
							unk_0x02DAF06EA4F08219(&iLocal_62);
						}
					}
					else if (unk_0xF4FCC3C1048FF2AB(iLocal_55, 242628503) != 1 && unk_0xF4FCC3C1048FF2AB(iLocal_55, 242628503) != 0)
					{
						unk_0xC5A6DFE2B8987B17(&iLocal_62);
						unk_0x5558ED6D4A2DEC93(0, unk_0xBC25C936A095B5BA(), 300f, -1, 0, 0);
						unk_0x535008C596714F9E(iLocal_62);
						unk_0xA8E6405305C0D7DF(iLocal_55, iLocal_62);
						unk_0x02DAF06EA4F08219(&iLocal_62);
					}
					iVar1 = unk_0x7E7999013BDD429A(iLocal_55);
					if (iVar1 == 2)
					{
						unk_0xA4E856A8CD53B8DF(iLocal_55);
						if (func_105(unk_0xBC25C936A095B5BA()))
						{
							unk_0xB8CBD998685C0685(iLocal_55, unk_0xBC25C936A095B5BA(), 0, 16);
						}
						iLocal_86 = 1;
					}
				}
			}
			break;
	}
}

int func_107()//Position - 0x6FA9
{
	if (!unk_0x36CEFBE9B745A58D(iLocal_55))
	{
		if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_55, 180f, 180f, 50f, 0, 1, 0) || !unk_0x41A5D6415E2CC10E(iLocal_55))
		{
			func_108(iLocal_59, iLocal_55, 180f, 1061158912, 0);
			return 1;
		}
		else
		{
			if (Local_107[2 /*10*/].f_7)
			{
				func_174(&Local_107, 2);
			}
			unk_0xF845620A03C7425B(&iLocal_55);
			if (unk_0xE59B7F5A03335350(iLocal_73, 0))
			{
				if (unk_0x41A5D6415E2CC10E(iLocal_73))
				{
					unk_0xCF6040807CC0E4A5(&iLocal_73);
				}
			}
		}
	}
	else if (SYSTEM::VDIST(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false), unk_0x541C2AEF053615BC(iLocal_55, false)) < 300f)
	{
		return 1;
	}
	return 0;
}

void func_108(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4)//Position - 0x7056
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (unk_0x2DA8CA50A72528FB(iParam0))
	{
		if ((unk_0x724D816EA203A79E(iParam1) && unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA())) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			if (unk_0xD27AC0E9B78CFDD7(iParam1))
			{
				if (unk_0xE59B7F5A03335350(unk_0x233ED4CD1F1A42C1(iParam1), 0))
				{
					fVar1 = unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), unk_0x541C2AEF053615BC(iParam1, true), true);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = SYSTEM::ROUND((255f * ((fVar1 - fVar2) / (fParam2 - fVar2))));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0x7A6BBF86FCBBCF7E(iParam0, 1);
						unk_0x7781946F1FC054FA(iParam0, (255 - iVar0));
					}
					else
					{
						unk_0x7A6BBF86FCBBCF7E(iParam0, 0);
						unk_0x7781946F1FC054FA(iParam0, 255);
					}
				}
			}
			else if (unk_0x386592AF38881675(iParam1))
			{
				if (!unk_0x36CEFBE9B745A58D(unk_0x399F7937FFE4DEBF(iParam1)))
				{
					fVar1 = unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), unk_0x541C2AEF053615BC(iParam1, true), true);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = SYSTEM::ROUND(((255f * (fVar1 - fVar2)) / (fParam2 - fVar2)));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0x7A6BBF86FCBBCF7E(iParam0, 1);
						unk_0x7781946F1FC054FA(iParam0, (255 - iVar0));
					}
					else
					{
						unk_0x7A6BBF86FCBBCF7E(iParam0, 0);
						unk_0x7781946F1FC054FA(iParam0, 255);
					}
				}
			}
		}
	}
}

void func_109(int iParam0, char* sParam1, int iParam2)//Position - 0x71AF
{
	unk_0x53D8178763EDCE60(iParam0, sParam1, func_110(iParam2), 1);
}

int func_110(int iParam0)//Position - 0x71C6
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

float func_111(int iParam0, int iParam1, bool bParam2)//Position - 0x73BB
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

void func_112(int iParam0, var uParam1)//Position - 0x7419
{
	if (unk_0x2DA8CA50A72528FB(iParam0))
	{
		if (unk_0x105601648511CC64() > *uParam1 + 500)
		{
			if (unk_0x05C02D6192B773AF(iParam0) == 1)
			{
				unk_0xF9C2945DB5BAB4BF(iParam0, true);
			}
			else
			{
				unk_0xF9C2945DB5BAB4BF(iParam0, false);
				unk_0x0D5352939CC40C16(iParam0, 1);
			}
			*uParam1 = unk_0x105601648511CC64();
		}
		if (!unk_0xF16DAFF595E80F7C() && func_113(0))
		{
			func_95(1);
		}
	}
}

bool func_113(int iParam0)//Position - 0x7477
{
	return unk_0xFA30DFD0084E92FE(Global_19B00, iParam0);
}

void func_114()//Position - 0x7489
{
	switch (iLocal_65)
	{
		case 1:
		case 2:
			if (unk_0xE59B7F5A03335350(iLocal_73, 0))
			{
				if (iLocal_126)
				{
					if (unk_0x25EF720B1CAB1E23(iLocal_55, iLocal_73) || unk_0xF4FCC3C1048FF2AB(iLocal_55, -1273030092) == 1)
					{
						unk_0x827661D9AAD4A354(iLocal_55, iLocal_73, vLocal_53, 8, 35f, 786469, 10f, 10f, 1);
					}
					else
					{
						unk_0x5558ED6D4A2DEC93(iLocal_55, unk_0xBC25C936A095B5BA(), 300f, -1, 0, 0);
					}
				}
				else
				{
					if (!unk_0xB9FEB746FD810A52(iLocal_73))
					{
						unk_0xA839F9F0F00F2017(iLocal_73, 0.1f, 1000, 0, 0, 0, -1);
					}
					unk_0x827661D9AAD4A354(iLocal_55, iLocal_73, unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false), 8, 35f, 786469, 10f, 10f, 1);
				}
			}
			else
			{
				unk_0x5558ED6D4A2DEC93(iLocal_55, unk_0xBC25C936A095B5BA(), 300f, -1, 0, 0);
			}
			break;
		
		case 4:
			if (!iLocal_126)
			{
				unk_0xC5A6DFE2B8987B17(&iLocal_61);
				unk_0x346129B364057FF6(0, 182.61f, 6637.91f, 30.54f, 3f, 20000, 0.25f, 1, 1193033728);
				unk_0x346129B364057FF6(0, 240.53f, 6694.1f, 28.62f, 3f, 20000, 0.25f, 1, 1193033728);
				unk_0x5558ED6D4A2DEC93(0, unk_0xBC25C936A095B5BA(), 300f, -1, 0, 0);
				unk_0x535008C596714F9E(iLocal_61);
				unk_0xA8E6405305C0D7DF(iLocal_55, iLocal_61);
				unk_0x02DAF06EA4F08219(&iLocal_61);
			}
			else
			{
				unk_0x5558ED6D4A2DEC93(iLocal_55, unk_0xBC25C936A095B5BA(), 300f, -1, 0, 0);
			}
			break;
		
		default:
			if (unk_0xF0F2FC9DE291567F(vLocal_53, -3044.11f, 594.34f, 6.73f, true) < 5f)
			{
				unk_0xAB43C54784946B9F(iLocal_55, unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false), 300f, -1, 0, 0);
				unk_0x02DAF06EA4F08219(&iLocal_61);
			}
			else if (iLocal_126)
			{
				unk_0x5558ED6D4A2DEC93(iLocal_55, unk_0xBC25C936A095B5BA(), 300f, -1, 0, 0);
			}
			else
			{
				unk_0xAB43C54784946B9F(iLocal_55, unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false), 300f, -1, 0, 0);
			}
			break;
	}
	if (!unk_0x36CEFBE9B745A58D(iLocal_55))
	{
		unk_0x22321800954A532E(iLocal_55, true);
	}
}

bool func_115(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x7680
{
	func_59(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_116(sParam2, iParam3, 0);
}

int func_116(char* sParam0, int iParam1, bool bParam2)//Position - 0x76CE
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
					func_57();
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
		if (func_56(8, -1))
		{
			return 0;
		}
		Global_3E04 = { Global_3DFE };
		func_55();
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
				func_54();
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
				if (func_53())
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
			if (func_52())
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
			func_51();
			Global_3DC2 = bParam2;
		}
		Global_3DBA = iParam1;
		StringCopy(&Global_3C3B, sParam0, 24);
		Global_394A = 0;
		func_50();
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
		func_57();
	}
	return 0;
}

bool func_117()//Position - 0x799A
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar2;
	
	vVar1 = { 6f, 6f, 6f };
	vVar2 = { -6f, -6f, -6f };
	if (!unk_0x36CEFBE9B745A58D(iLocal_56))
	{
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			if (unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), iLocal_56))
			{
				iLocal_67++;
				if (iLocal_67 > 60)
				{
					bVar0 = true;
				}
			}
			else
			{
				iLocal_67 = 0;
			}
		}
		if (unk_0x04880508C862E589(unk_0x823166D9421223CA(iLocal_56, 31086, 0f, 0f, 0f), 2f, 1))
		{
			bVar0 = true;
		}
		vVar1 = { vVar1 + unk_0x823166D9421223CA(iLocal_56, 31086, 0f, 0f, 0f) };
		vVar2 = { vVar2 + unk_0x823166D9421223CA(iLocal_56, 31086, 0f, 0f, 0f) };
		if ((unk_0x1749F74D4E70A733(vVar2, vVar1, joaat("weapon_smokegrenade"), 1) || unk_0x1749F74D4E70A733(vVar2, vVar1, joaat("weapon_grenade"), 1)) || unk_0x1749F74D4E70A733(vVar2, vVar1, joaat("weapon_stickybomb"), 1))
		{
			bVar0 = true;
		}
		if (unk_0xD9ED1893F2541636(unk_0x823166D9421223CA(iLocal_56, 31086, 0f, 0f, 0f), 12f))
		{
			bVar0 = true;
		}
		if (unk_0xC9FA5D38428AB6BE(-1, unk_0x823166D9421223CA(iLocal_56, 31086, 0f, 0f, 0f), 50f))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (!func_119())
		{
		}
		else
		{
			bVar0 = false;
			if (unk_0xF4FCC3C1048FF2AB(iLocal_56, 474215631) != 1)
			{
				if (func_118(iLocal_56))
				{
					unk_0xEE7131C3C73E7282(iLocal_56, 2000);
				}
			}
		}
	}
	return bVar0;
}

int func_118(int iParam0)//Position - 0x7AEB
{
	if (func_105(iParam0))
	{
		if (!unk_0x36CEFBE9B745A58D(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_119()//Position - 0x7B0B
{
	if (func_105(iLocal_55))
	{
		if (func_111(iLocal_56, iLocal_55, 1) < 22f)
		{
			return 1;
		}
	}
	return 0;
}

bool func_120()//Position - 0x7B33
{
	bool bVar0;
	
	bVar0 = false;
	if (unk_0x724D816EA203A79E(iLocal_56))
	{
		if (unk_0x36CEFBE9B745A58D(iLocal_56))
		{
			bVar0 = true;
		}
		else
		{
			if (unk_0xD9C1758D86688CEA(iLocal_56, unk_0xBC25C936A095B5BA(), 1) && unk_0x2CDE18D6C89522AD(iLocal_56))
			{
				bVar0 = true;
				unk_0x5502708AECB47F5D(iLocal_56);
			}
			if (unk_0x04880508C862E589(unk_0x541C2AEF053615BC(iLocal_56, true), 1f, 1))
			{
				bVar0 = true;
			}
			if (func_121(iLocal_56, 0, 1116471296, 1126825984, 0, 1, 0, 0))
			{
				bVar0 = true;
			}
		}
	}
	if (bVar0)
	{
		if (func_119())
		{
			bVar0 = false;
			if (unk_0xF4FCC3C1048FF2AB(iLocal_56, 474215631) != 1)
			{
				if (func_118(iLocal_56))
				{
					unk_0xEE7131C3C73E7282(iLocal_56, 2000);
				}
			}
		}
		else if (!unk_0x36CEFBE9B745A58D(iLocal_55))
		{
			if (unk_0xF4FCC3C1048FF2AB(iLocal_55, 1805844857) == 7)
			{
				unk_0x91629AC1E1F78419(iLocal_55, 17, true);
				unk_0x91629AC1E1F78419(iLocal_55, 13, false);
				unk_0x5558ED6D4A2DEC93(iLocal_55, unk_0xBC25C936A095B5BA(), 300f, -1, 0, 0);
			}
		}
	}
	return bVar0;
}

int func_121(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x7C18
{
	vector3 vVar0;
	
	if (func_105(unk_0xBC25C936A095B5BA()) && func_105(iParam0))
	{
		if (unk_0xD9C1758D86688CEA(iParam0, unk_0xBC25C936A095B5BA(), 1))
		{
			return 1;
		}
		if (func_135(iParam0, bParam1, bParam5, bParam6, bParam7))
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
					return func_134(unk_0xBC25C936A095B5BA(), iParam0, fParam2);
				}
			}
		}
		if (bParam4)
		{
			return 0;
		}
		else if (func_122(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_122(int iParam0, float fParam1)//Position - 0x7CD3
{
	float fVar0;
	
	if (func_105(unk_0xBC25C936A095B5BA()) && func_105(iParam0))
	{
		if (func_133(iParam0) || unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), iParam0))
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
				if (func_123(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_123(int iParam0, float fParam1)//Position - 0x7D49
{
	return func_124(iParam0, unk_0xBC25C936A095B5BA(), fParam1, 1, 250, 7);
}

bool func_124(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x7D61
{
	var uVar0;
	vector3 vVar1;
	int iVar2;
	
	iVar2 = func_132(iParam0, iParam1);
	if (!func_105(iParam0) || !func_105(iParam1))
	{
		if (iVar2 != -1)
		{
			func_131(&(Local_49[iVar2 /*4*/]));
		}
		return 0;
	}
	if (!func_128(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar2 == -1)
	{
		iVar2 = func_127();
		if (iVar2 == -1)
		{
			return 0;
		}
		Local_49[iVar2 /*4*/].f_1 = iParam0;
		Local_49[iVar2 /*4*/].f_2 = iParam1;
	}
	vVar1 = { unk_0x823166D9421223CA(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_125(&(Local_49[iVar2 /*4*/]), vVar1, iParam1, &(Local_49[iVar2 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0x105601648511CC64() - Local_49[iVar2 /*4*/].f_3) < iParam4);
}

int func_125(var uParam0, vector3 vParam1, int iParam2, var uParam3, int iParam4, int iParam5)//Position - 0x7E22
{
	var uVar0;
	vector3 vVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = 0;
	if (!func_105(iParam2))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		vVar1 = { func_126(iParam2, iParam5) };
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
		func_105(iVar3);
		if (unk_0x399F7937FFE4DEBF(iVar3) == iParam2)
		{
			if (bLocal_50)
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
		func_105(iVar3);
		if (unk_0x5237AF95232D78C5(iParam2, 0))
		{
			if (unk_0x233ED4CD1F1A42C1(iVar3) == unk_0x9FE9D386222EEE47(iParam2, 0))
			{
				if (bLocal_50)
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

Vector3 func_126(int iParam0, int iParam1)//Position - 0x7F4E
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

int func_127()//Position - 0x8014
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_49)
	{
		if ((Local_49[iVar0 /*4*/] == 0 && Local_49[iVar0 /*4*/].f_1 == 0) && Local_49[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_128(int iParam0, int iParam1, float fParam2, int iParam3)//Position - 0x805E
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { func_130(unk_0x541C2AEF053615BC(iParam1, true) - unk_0x541C2AEF053615BC(iParam0, true)) };
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
		vVar1 = { func_130(unk_0x823166D9421223CA(iParam0, 31086, 0f, 5f, 0f) - unk_0x823166D9421223CA(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_129(vVar1, vVar0);
	if (fVar2 <= SYSTEM::COS((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_129(vector3 vParam0, vector3 vParam1)//Position - 0x80EF
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_130(vector3 vParam0)//Position - 0x8110
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

void func_131(var uParam0)//Position - 0x814F
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_132(int iParam0, int iParam1)//Position - 0x816A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_49)
	{
		if (Local_49[iVar0 /*4*/].f_1 == iParam0 && Local_49[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_133(int iParam0)//Position - 0x81A9
{
	if (unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), iParam0) && unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 6))
	{
		return 1;
	}
	return 0;
}

bool func_134(int iParam0, int iParam1, float fParam2)//Position - 0x81D1
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { unk_0xF90427F311003E57(iParam0) };
	vVar1 = { unk_0x541C2AEF053615BC(iParam1, true) - unk_0x541C2AEF053615BC(iParam0, true) };
	return (((vVar0.x * vVar1.x) + (vVar0.y * vVar1.y)) / SYSTEM::VDIST(vVar1, 0f, 0f, 0f)) > SYSTEM::COS(fParam2);
}

int func_135(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x8218
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
	if (func_105(unk_0xBC25C936A095B5BA()) && func_105(iParam0))
	{
		unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_139(iParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_136(iParam0, fVar1, bParam3, bParam4))
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
				if (func_139(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_136(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_136(int iParam0, float fParam1, bool bParam2, bool bParam3)//Position - 0x8313
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
				if (func_137(iParam0, fParam1))
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
			if (func_137(iParam0, fParam1))
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

int func_137(int iParam0, float fParam1)//Position - 0x841F
{
	var uVar0;
	vector3 vVar1;
	
	if ((((unk_0x532D2AB42B013CC0(iParam0, joaat("weapon_grenade"), fParam1, &vVar1, &uVar0, 0) || unk_0x532D2AB42B013CC0(iParam0, joaat("weapon_smokegrenade"), fParam1, &vVar1, &uVar0, 0)) || unk_0x532D2AB42B013CC0(iParam0, joaat("weapon_bzgas"), fParam1, &vVar1, &uVar0, 0)) || unk_0x532D2AB42B013CC0(iParam0, joaat("weapon_stickybomb"), fParam1, &vVar1, &uVar0, 0)) || unk_0x532D2AB42B013CC0(iParam0, joaat("weapon_molotov"), fParam1, &vVar1, &uVar0, 0))
	{
		if (func_138(iParam0, vVar1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_138(int iParam0, vector3 vParam1, float fParam2, int iParam3)//Position - 0x84B4
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { func_130(vParam1 - unk_0x541C2AEF053615BC(iParam0, true)) };
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
		vVar1 = { func_130(unk_0x823166D9421223CA(iParam0, 31086, 0f, 5f, 0f) - unk_0x823166D9421223CA(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_129(vVar1, vVar0);
	if (fVar2 <= SYSTEM::COS((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

int func_139(int iParam0, bool bParam1, float fParam2, float fParam3)//Position - 0x8542
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

void func_140()//Position - 0x858A
{
	if (bLocal_90 || unk_0x1D403DFADBC2DE3C(iLocal_55, 0))
	{
		func_169(&uLocal_152, 0, 0);
	}
	else
	{
		func_141(&uLocal_152, iLocal_55, "ATM_CHASEHINT", 0, 1, 1, 1);
	}
}

void func_141(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x85C1
{
	func_142(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_142(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)//Position - 0x85DB
{
	func_143(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_143(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x85F8
{
	if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
	{
		func_169(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_144(uParam0, iParam1, vParam2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_144(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x8630
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0xBFFAD293E2DA992B())
	{
		if (unk_0x105601648511CC64() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam3;
	if (unk_0xEAEFBBEC1AEA464B(iVar0))
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_91(iVar0))
	{
		func_168();
	}
	if (func_167(iParam1) && unk_0x8F6EAC9E7D6812D5(iParam1))
	{
		iVar1 = 0;
		if (unk_0x386592AF38881675(iParam1))
		{
			unk_0x96EBAB29D0970E51(unk_0x399F7937FFE4DEBF(iParam1));
			unk_0x4264E957F21998DD(unk_0x399F7937FFE4DEBF(iParam1), 1);
			if (unk_0x6585240928240B98(unk_0x399F7937FFE4DEBF(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xD27AC0E9B78CFDD7(iParam1))
		{
			unk_0xB845C705AB8047B2(unk_0x233ED4CD1F1A42C1(iParam1));
			if (unk_0xBF080988CF2E6210(unk_0x233ED4CD1F1A42C1(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xB12D030810E8447D(iParam1))
		{
			unk_0xF0020781B6E3E577(unk_0x0EC4BFD5C83D125E(iParam1));
			if (unk_0x14D76A832488D2FF(unk_0x0EC4BFD5C83D125E(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0xBFFAD293E2DA992B())
		{
			if (func_162(uParam0, bParam5, bParam7, 0))
			{
				func_159(uParam0, iParam1, vParam2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_148(iVar0))
				{
					if ((unk_0xEAEFBBEC1AEA464B(uParam0->f_3) && !unk_0xEAEFBBEC1AEA464B(iVar0)) && unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
					{
						if ((iVar1 && !unk_0xF16DAFF595E80F7C()) && uParam6)
						{
							if (!func_91(iVar0))
							{
								func_96(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x3362CDE8460ED38B("CMN_HINT", iVar0))
								{
									func_147(1);
								}
							}
						}
					}
				}
			}
			else if (func_148(iVar0))
			{
				if (unk_0xEAEFBBEC1AEA464B(uParam0->f_3) && !unk_0xEAEFBBEC1AEA464B(iVar0))
				{
					if (((unk_0xD1DC4B08247A4317(iParam1) && iVar1) && !unk_0xF16DAFF595E80F7C()) && uParam6)
					{
						if (!func_91(iVar0))
						{
							func_96(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x3362CDE8460ED38B("CMN_HINT", iVar0))
							{
								func_147(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0xEAEFBBEC1AEA464B(sParam3))
			{
				if (func_91(sParam3))
				{
					unk_0x7456702622C62EA0(1);
				}
			}
			if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
			{
				if (unk_0x11030C52A0DDFF8C(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x3D875C2512206692(3) == 3 || unk_0x3D875C2512206692(3) == 4)
					{
						func_169(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xE3CA72BD77D43B09(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x3D875C2512206692(6) == 3 || unk_0x3D875C2512206692(6) == 4)
					{
						func_169(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x57379381A330B2FF(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x3D875C2512206692(4) == 3 || unk_0x3D875C2512206692(4) == 4)
					{
						func_169(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xD3A0CD3AD9C3D22A(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x3D875C2512206692(5) == 3 || unk_0x3D875C2512206692(5) == 4)
					{
						func_169(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x5CFC8E6CC224744A(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x3D875C2512206692(2) == 3 || unk_0x3D875C2512206692(2) == 4)
					{
						func_169(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x621126C4FACA4770() == 3 || unk_0x621126C4FACA4770() == 4)
				{
					func_169(uParam0, iVar0, 1);
				}
			}
			if (!func_162(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_146(uParam0))
				{
					func_145(uParam0);
				}
			}
		}
	}
	else
	{
		func_169(uParam0, iVar0, 0);
	}
}

void func_145(var uParam0)//Position - 0x899D
{
	if (func_167(unk_0xBC25C936A095B5BA()))
	{
		unk_0x44C98C11ED6DD327(unk_0xBC25C936A095B5BA());
	}
	if (unk_0xBFFAD293E2DA992B())
	{
		unk_0x4AED68BFACFB14CB(true);
		unk_0xF04F2EB4128A4367(0);
		unk_0xC1300D0F3A74E20B("HINT_CAM_SCENE");
		unk_0x1A058EB0D1ACEC78("FocusIn");
		if (uParam0->f_B)
		{
			unk_0x9216004FAC08D1DC("FocusOut", 0, 0);
			unk_0xC4BA30B532FE260F(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_B = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_146(var uParam0)//Position - 0x8A06
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_A / 2);
		if (uParam0->f_2 + iVar0) > unk_0x105601648511CC64()
		{
			return 1;
		}
	}
	return 0;
}

int func_147(bool bParam0)//Position - 0x8A31
{
	switch (Global_8C41)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_19B04.f_2724.f_64++;
			}
			return Global_19B04.f_2724.f_64;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_19B04.f_2724.f_65++;
			}
			return Global_19B04.f_2724.f_65;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_19B04.f_2724.f_66++;
			}
			return Global_19B04.f_2724.f_66;
			break;
		
		default:
			break;
	}
	return 3;
}

int func_148(char* sParam0)//Position - 0x8ADB
{
	if (!func_149(1, 1, 0))
	{
		if ((!unk_0xF1734B55490E9045(sParam0) && func_91(sParam0)) || func_91("CMN_HINT"))
		{
			unk_0x7456702622C62EA0(1);
		}
		return 0;
	}
	switch (Global_8C41)
	{
		case 0:
		case 3:
			if (func_147(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_147(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_147(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_149(bool bParam0, bool bParam1, bool bParam2)//Position - 0x8B74
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x7930B3E9C919E90F())
	{
		return 0;
	}
	if (func_73(0))
	{
		return 0;
	}
	if (func_158())
	{
		return 0;
	}
	if (unk_0xF32BA80A2DED1FC6())
	{
		return 0;
	}
	if (Global_10AB8)
	{
		return 0;
	}
	if (unk_0xB731B8C5BCE89836(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_CF9C)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
		{
			if (unk_0x11030C52A0DDFF8C(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x3D875C2512206692(3) == 3 || unk_0x3D875C2512206692(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xE3CA72BD77D43B09(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x3D875C2512206692(6) == 3 || unk_0x3D875C2512206692(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x57379381A330B2FF(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x3D875C2512206692(4) == 3 || unk_0x3D875C2512206692(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xD3A0CD3AD9C3D22A(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x3D875C2512206692(5) == 3 || unk_0x3D875C2512206692(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x5CFC8E6CC224744A(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x3D875C2512206692(2) == 3 || unk_0x3D875C2512206692(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x621126C4FACA4770() == 3 || unk_0x621126C4FACA4770() == 4)
			{
				return 0;
			}
			if (unk_0x4FD86C3E23A67AB9())
			{
				return 0;
			}
		}
	}
	if ((func_157() || func_156(Global_440000.f_243FE)) || func_155())
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			iVar1 = func_154(unk_0xBC25C936A095B5BA(), 0);
			if (((unk_0xE8E192A5EFE0253F(iVar0, iVar1) || (unk_0x6F79ECA8C83E4357(iVar0) == 562680400 && iVar1 != -1)) || (unk_0x6F79ECA8C83E4357(iVar0) == 1181327175 && iVar1 != -1)) || (((unk_0x6F79ECA8C83E4357(iVar0) == -1693015116 && iVar1 == 0) && func_153(iVar0, 10)) && unk_0x3EB14CBD49DA0017(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (func_150(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	return 1;
}

int func_150(int iParam0)//Position - 0x8DC2
{
	if (iParam0 != func_152())
	{
		if (func_151(iParam0, 1, 1))
		{
			return Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1;
		}
		else if ((Global_140856 && iParam0 == unk_0xB5CEFD608600A09F()) && func_151(iParam0, 1, 0))
		{
			return Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1;
		}
	}
	return 0;
}

int func_151(int iParam0, bool bParam1, bool bParam2)//Position - 0x8E28
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

int func_152()//Position - 0x8E72
{
	return -1;
}

int func_153(int iParam0, int iParam1)//Position - 0x8E7B
{
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		if (unk_0xA6BE0954FC6BAA16(iParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 1;
					break;
				
				default:
					if (unk_0x34374BDFA570F489(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_154(int iParam0, int iParam1)//Position - 0x8EDD
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

var func_155()//Position - 0x8F62
{
	return Global_255A46.f_10;
}

bool func_156(int iParam0)//Position - 0x8F70
{
	return iParam0 == 51;
}

var func_157()//Position - 0x8F7D
{
	return Global_255A46.f_F;
}

bool func_158()//Position - 0x8F8B
{
	return unk_0x105601648511CC64() <= Global_43C1.f_1671 + 100;
}

void func_159(var uParam0, int iParam1, vector3 vParam2, int iParam3)//Position - 0x8FA0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1417C1 == 1)
	{
		return;
	}
	if (unk_0x1D403DFADBC2DE3C(iParam1, 0))
	{
		func_169(uParam0, 0, 0);
	}
	if (func_60(vParam2, 0f, 0f, 0f, 0))
	{
		if (unk_0x386592AF38881675(iParam1))
		{
			iVar0 = unk_0x399F7937FFE4DEBF(iParam1);
			if (!unk_0x5237AF95232D78C5(iVar0, 0))
			{
				if (unk_0x15DBD981998D4FE1(iVar0))
				{
					if (!func_160())
					{
						vParam2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0xB6FD7D587FE0A1B4(iVar0))
				{
					vParam2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x4AED68BFACFB14CB(false);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_A;
	if (iParam3 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	unk_0x1DE00CFB4CAEB978(iParam1, vParam2, 1, -1, iVar1, iVar2, iParam3);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x56F2E1B5599188FA(unk_0xBC25C936A095B5BA(), iParam1, -1, iVar3, iVar4);
	unk_0x9216004FAC08D1DC("FocusIn", 0, 0);
	unk_0xD6423910AAD8A379("HINT_CAM_SCENE");
	unk_0xC4BA30B532FE260F(-1, "FocusIn", "HintCamSounds", true);
	uParam0->f_B = 1;
	uParam0->f_8 = unk_0x105601648511CC64();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_160()//Position - 0x90B0
{
	return func_161(unk_0xB5CEFD608600A09F());
}

int func_161(int iParam0)//Position - 0x90C0
{
	if (unk_0x6F79ECA8C83E4357(unk_0xA95CF30C72EB526E(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_162(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x90DF
{
	if (uParam0->f_1)
	{
		if (unk_0x105601648511CC64() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
				{
					if (func_166(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x105601648511CC64();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_165(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x105601648511CC64();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_165(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x105601648511CC64();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_166(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x105601648511CC64();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_146(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x105601648511CC64() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
					{
						if (!func_166(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x105601648511CC64();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_165(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x105601648511CC64();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_165(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x105601648511CC64();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_166(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x105601648511CC64();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
				{
					if (!func_166(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_165(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_165(bParam1, bParam2, bParam3) || unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1) || unk_0x74BCB6EDB1FFBFBA(unk_0xBC25C936A095B5BA(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_166(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x105601648511CC64() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
					{
						if (func_164(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_163(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1) || func_163(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1) || unk_0x74BCB6EDB1FFBFBA(unk_0xBC25C936A095B5BA(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_164(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_146(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_149(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_168();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_163(bool bParam0, bool bParam1, bool bParam2)//Position - 0x944B
{
	if (!func_149(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		if (!unk_0xE1C3A331B6951C3D(unk_0xB5CEFD608600A09F()))
		{
			unk_0xBBC4195AD74D153D(0, 140, 1);
			unk_0xBBC4195AD74D153D(0, 80, 1);
			if (unk_0xCB3E71B7B7FACCAF(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_164(bool bParam0, bool bParam1, bool bParam2)//Position - 0x949D
{
	if (!func_149(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0xBBC4195AD74D153D(0, 80, 1);
		if (unk_0xE92D56CE0416C875())
		{
			if (unk_0xCB3E71B7B7FACCAF(0, 80))
			{
				unk_0x4AED68BFACFB14CB(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_165(bool bParam0, bool bParam1, bool bParam2)//Position - 0x94E6
{
	if (!func_149(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		if (!unk_0xE1C3A331B6951C3D(unk_0xB5CEFD608600A09F()))
		{
			unk_0xBBC4195AD74D153D(0, 140, 1);
			unk_0xBBC4195AD74D153D(0, 80, 1);
			if (unk_0xD3C4A010282C31F2(0, 80) && unk_0x105601648511CC64() > Global_74)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_166(bool bParam0, bool bParam1, bool bParam2)//Position - 0x9545
{
	if (!func_149(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0xBBC4195AD74D153D(0, 80, 1);
		if (unk_0xE92D56CE0416C875())
		{
			if (unk_0xD3C4A010282C31F2(0, 80) && unk_0x105601648511CC64() > Global_74)
			{
				unk_0x4AED68BFACFB14CB(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_167(int iParam0)//Position - 0x959B
{
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (unk_0xD27AC0E9B78CFDD7(iParam0))
		{
			if (unk_0xE59B7F5A03335350(unk_0x233ED4CD1F1A42C1(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x386592AF38881675(iParam0))
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0x399F7937FFE4DEBF(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0xB12D030810E8447D(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_168()//Position - 0x95F6
{
	unk_0xF0059F27F7BB6680(&Global_93C, 4);
}

void func_169(var uParam0, int iParam1, int iParam2)//Position - 0x9606
{
	char* sVar0;
	
	if (unk_0x7AF0088ABFA713B6())
	{
		if (unk_0xFA30DFD0084E92FE(Global_267214.f_11E0, 26))
		{
			return;
		}
	}
	if (unk_0xBFFAD293E2DA992B())
	{
		unk_0xF04F2EB4128A4367(iParam2);
		unk_0x1A058EB0D1ACEC78("FocusIn");
		unk_0xC1300D0F3A74E20B("HINT_CAM_SCENE");
		if (uParam0->f_B)
		{
			unk_0x9216004FAC08D1DC("FocusOut", 0, 0);
			unk_0xC4BA30B532FE260F(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_B = 0;
		}
	}
	unk_0x4AED68BFACFB14CB(true);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0xEAEFBBEC1AEA464B(sVar0))
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0xEAEFBBEC1AEA464B(uParam0->f_3))
	{
		if (func_91(uParam0->f_3))
		{
			unk_0x7456702622C62EA0(1);
		}
	}
	if (!unk_0xEAEFBBEC1AEA464B(sVar0))
	{
		if (func_91(sVar0))
		{
			unk_0x7456702622C62EA0(1);
		}
	}
}

float func_170(int iParam0, vector3 vParam1, bool bParam2)//Position - 0x96E3
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

int func_171(int iParam0, int iParam1)//Position - 0x971D
{
	if (func_118(iParam0))
	{
		if (unk_0xF4FCC3C1048FF2AB(iParam0, iParam1) == 1 || unk_0xF4FCC3C1048FF2AB(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_172(char* sParam0)//Position - 0x9750
{
	func_173(sParam0);
}

void func_173(char* sParam0)//Position - 0x975E
{
	if (unk_0x3362CDE8460ED38B(sParam0, sParam0))
	{
	}
}

void func_174(var uParam0, int iParam1)//Position - 0x9771
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_175()//Position - 0x978E
{
	unk_0xC5A6DFE2B8987B17(&iLocal_61);
	unk_0x85DB484A637CEAB9(0, iLocal_55, 750);
	unk_0xE896C0AD02364F2A(0, cLocal_148, sLocal_149, 8f, -8f, -1, 0, 0, 0, 0, 0);
	unk_0xE896C0AD02364F2A(0, cLocal_148, sLocal_150, 8f, -2f, -1, 0, 0, 0, 0, 0);
	unk_0xE896C0AD02364F2A(0, cLocal_148, sLocal_151, 8f, -2f, -1, 0, 0, 0, 0, 0);
	unk_0xE896C0AD02364F2A(0, cLocal_148, sLocal_149, 8f, -2f, -1, 0, 0, 0, 0, 0);
	unk_0xE896C0AD02364F2A(0, cLocal_148, sLocal_150, 8f, -2f, -1, 0, 0, 0, 0, 0);
	unk_0xE896C0AD02364F2A(0, cLocal_148, sLocal_151, 8f, -2f, -1, 1, 0, 0, 0, 0);
	unk_0x535008C596714F9E(iLocal_61);
	unk_0xA8E6405305C0D7DF(iLocal_56, iLocal_61);
	unk_0x02DAF06EA4F08219(&iLocal_61);
	if (unk_0x2DA8CA50A72528FB(iLocal_58))
	{
		unk_0x07B8ECB35A4ED3AC(&iLocal_58);
	}
	if (!unk_0x2DA8CA50A72528FB(iLocal_59))
	{
		iLocal_59 = func_98(iLocal_55, 1, 0);
	}
	unk_0x222805B89367761E(iLocal_59, true);
	unk_0x6E52C7765A0F4382(0);
	unk_0xDF53A66AEE1401AA(0.1f);
	func_114();
	if ((SYSTEM::VDIST(unk_0x541C2AEF053615BC(iLocal_56, false), -2956.26f, 487.97f, 15.46f) > 5f && unk_0xF0F2FC9DE291567F(vLocal_53, -203.72f, -861.8f, 29.27f, true) > 5f) && unk_0xF0F2FC9DE291567F(vLocal_53, 288.46f, -1256.71f, 28.44f, true) > 5f)
	{
		if (func_111(unk_0xBC25C936A095B5BA(), iLocal_56, 1) < 50f)
		{
			func_115(&Local_107, cLocal_123, sLocal_115, 3, 0, 0, 0);
			iLocal_85 = 1;
		}
	}
	iLocal_66 = unk_0x105601648511CC64();
	SYSTEM::SETTIMERA(0);
	if (func_105(unk_0xBC25C936A095B5BA()))
	{
		unk_0x0DEF5E53360637F2(unk_0xBC25C936A095B5BA(), 1);
	}
	func_176(1);
}

int func_176(int iParam0)//Position - 0x9945
{
	if (func_178())
	{
		Global_19AFA = 1;
		Global_19AF7 = unk_0x105601648511CC64();
		if (func_177(Global_19AF9))
		{
			func_95(0);
		}
		unk_0x3FF92BBF0607A406(1, "RE_TITLE");
		if (iParam0 && func_177(Global_19AF9))
		{
			unk_0x621CEDEDDD531386();
		}
		return 1;
	}
	return 0;
}

int func_177(int iParam0)//Position - 0x9998
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

int func_178()//Position - 0x99C7
{
	switch (func_179(&Global_62F8, 0, 5, 0, unk_0x8A55B15F4133C912()))
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

int func_179(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x99FD
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
		if (func_183(0))
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
		if (!func_181(iParam2))
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
			func_180(uParam0, iParam4);
		}
	}
	return 2;
}

void func_180(var uParam0, int iParam1)//Position - 0x9B34
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

bool func_181(int iParam0)//Position - 0x9B83
{
	return func_182(iParam0, Global_8C41);
}

int func_182(int iParam0, int iParam1)//Position - 0x9B94
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

int func_183(int iParam0)//Position - 0x9D75
{
	if (Global_8C41 == 15)
	{
		return 0;
	}
	if (func_181(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_184()//Position - 0x9D97
{
	if (iLocal_134 == -1)
	{
		if (unk_0xADF4D6B0407B3CC1())
		{
			if (unk_0xD1DC4B08247A4317(iLocal_55))
			{
				iLocal_134 = unk_0x105601648511CC64();
			}
		}
	}
	else if (unk_0x105601648511CC64() > iLocal_134 + 1000)
	{
		return 1;
	}
	if (unk_0xC9FA5D38428AB6BE(-1, vLocal_53, 50f))
	{
		return 1;
	}
	if ((unk_0x105601648511CC64() - iLocal_135) > 30000)
	{
		if (!unk_0x41A5D6415E2CC10E(iLocal_55))
		{
			return 1;
		}
		else
		{
			func_267();
		}
	}
	if (unk_0x2DA8CA50A72528FB(iLocal_59))
	{
		if ((unk_0xF0F2FC9DE291567F(vLocal_53, -3044.11f, 594.34f, 6.73f, true) > 5f && unk_0xF0F2FC9DE291567F(vLocal_53, -712.9f, -819.32f, 22.73f, true) > 5f) && unk_0xF0F2FC9DE291567F(vLocal_53, 24.13f, -946.84f, 28.36f, true) > 5f)
		{
			if (unk_0x33CC9445B2DF9387(unk_0x541C2AEF053615BC(iLocal_55, false), 2.5f))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_185()//Position - 0x9E85
{
	if (SYSTEM::VDIST(vLocal_53, -3044.06f, 594.93f, 6.74f) < 5f)
	{
		if (!unk_0x2DA8CA50A72528FB(iLocal_59))
		{
			if (func_105(iLocal_56) && func_105(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_56, 60f, 90f, 12f, 0, 1, 0))
				{
					iLocal_59 = func_98(iLocal_55, 1, 0);
					unk_0x222805B89367761E(iLocal_59, false);
				}
			}
		}
		else
		{
			func_112(iLocal_59, &uLocal_70);
		}
	}
	else if (!unk_0x2DA8CA50A72528FB(iLocal_59))
	{
		if (func_105(iLocal_56) && func_105(unk_0xBC25C936A095B5BA()))
		{
			if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_56, 90f, 90f, 8f, 0, 1, 0))
			{
				iLocal_59 = func_98(iLocal_55, 1, 0);
				unk_0x222805B89367761E(iLocal_59, false);
			}
		}
	}
	else
	{
		func_112(iLocal_59, &uLocal_70);
	}
	if (iLocal_135 == -1)
	{
		iLocal_135 = unk_0x105601648511CC64();
	}
}

int func_186()//Position - 0x9F70
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	
	vVar0 = { vLocal_53 };
	vVar1 = { 0f, 0f, fLocal_54 };
	vVar2 = { 10f, 10f, 5f };
	if (iLocal_65 == 1)
	{
		func_210();
		if (SYSTEM::VDIST(vLocal_53, -203.758f, -861.738f, 29.2684f) < 5f)
		{
			vLocal_74 = { -197.9643f, -868.5554f, 28.2738f };
			fLocal_76 = 196f;
			vLocal_75 = { -187.5415f, -858.1728f, 28.1863f };
			fLocal_77 = 160.391f;
			vLocal_136 = { -259.0351f, -865.7119f, 28f };
			vLocal_137 = { -130.3981f, -908.8096f, 40f };
			unk_0x39AE1324EE63FA44("ATM_1");
			unk_0xF243B7A14FCFD0F4(iLocal_106);
			while (!unk_0xD6513D668481290A(iLocal_106))
			{
				if (func_197())
				{
					func_267();
				}
				SYSTEM::WAIT(0);
			}
			unk_0x8510BC031C24B862(iLocal_106, true);
		}
		else
		{
			vLocal_74 = { -2968.5f, 494.48f, 14.82f };
			fLocal_76 = 55.24f;
			vLocal_75 = { -2973.03f, 496.38f, 14.96f };
			fLocal_77 = 3.18f;
			vLocal_136 = { -259.0351f, -865.7119f, 28f };
			vLocal_137 = { -130.3981f, -908.8096f, 40f };
			unk_0xF243B7A14FCFD0F4(iLocal_106);
			while (!unk_0xD6513D668481290A(iLocal_106))
			{
				if (func_197())
				{
					func_267();
				}
				SYSTEM::WAIT(0);
			}
			unk_0x8510BC031C24B862(iLocal_106, true);
		}
	}
	else if (iLocal_65 == 2)
	{
		func_210();
		vLocal_74 = { 283.31f, -1249.51f, 28.95f };
		fLocal_76 = 78.25f;
		vLocal_75 = { 288.9906f, -1248.443f, 28.2847f };
		fLocal_77 = 75.9756f;
		vLocal_136 = { 266.3643f, -1313.829f, 28.59103f };
		vLocal_137 = { 265.1489f, -1215.932f, 36.20192f };
		unk_0xF243B7A14FCFD0F4(iLocal_106);
		while (!unk_0xD6513D668481290A(iLocal_106))
		{
			if (func_197())
			{
				func_267();
			}
			SYSTEM::WAIT(0);
		}
		unk_0x8510BC031C24B862(iLocal_106, true);
	}
	else if (iLocal_65 == 3)
	{
		func_210();
		vLocal_75 = { -1587.15f, -539.9152f, 34.3644f };
		fLocal_77 = 327f;
		vLocal_136 = { -1596.203f, -474.8844f, 32f };
		vLocal_137 = { -1595.572f, -565.8368f, 48f };
	}
	else if (iLocal_65 == 4)
	{
		func_210();
		vLocal_74 = { 181.2355f, 6632.627f, 30.5732f };
		fLocal_76 = 182f;
		vLocal_75 = { 200.0727f, 6630.587f, 30.517f };
		fLocal_77 = 165f;
		vLocal_136 = { 178.1817f, 6660.375f, 31f };
		vLocal_137 = { 179.1249f, 6530.043f, 38f };
		unk_0x5905D912945BDAFE(0);
		unk_0x379ACE23D404525C(179.5463f, 6625.689f, 30.2739f, 184.245f, 6635.661f, 31.5188f, false, 1);
		unk_0xF243B7A14FCFD0F4(iLocal_106);
		while (!unk_0xD6513D668481290A(iLocal_106))
		{
			if (func_197())
			{
				func_267();
			}
			SYSTEM::WAIT(0);
		}
		unk_0x8510BC031C24B862(iLocal_106, true);
	}
	else if (iLocal_65 == 5)
	{
		func_210();
	}
	if (func_188())
	{
		unk_0x6C5F5B5F6894CCE3(vLocal_53, vVar2.x, 0, 0, 0, false);
		iLocal_63 = unk_0x1DAA351326EA3537(vLocal_53 - vVar2, vLocal_53 + vVar2, 0, 1, 1, 1);
		iLocal_56 = unk_0x01B3635C3E8EDD81(5, iLocal_105, vLocal_53, fLocal_54, 1, true);
		unk_0x91629AC1E1F78419(iLocal_56, 13, false);
		unk_0x91629AC1E1F78419(iLocal_56, 11, true);
		unk_0x91629AC1E1F78419(iLocal_56, 17, false);
		unk_0xB0031DDAE4FF0BC3(iLocal_56, 6, 1, 0, 0);
		unk_0xB71D41C0310C93DE(iLocal_56, true, 1);
		unk_0xF82197F205B9D8FD(iLocal_56, true);
		unk_0xB105531EDD3DE51B(iLocal_56, false);
		unk_0x36C3B58DA78A2679(iLocal_56, sLocal_147);
		unk_0x8EF3D958386640FE(iLocal_56, 0);
		if (iLocal_71 == 1)
		{
			unk_0xB0031DDAE4FF0BC3(iLocal_56, 0, 0, 0, 0);
			unk_0xB0031DDAE4FF0BC3(iLocal_56, 2, 0, 1, 0);
			unk_0xB0031DDAE4FF0BC3(iLocal_56, 3, 0, 1, 0);
			unk_0xB0031DDAE4FF0BC3(iLocal_56, 4, 0, 2, 0);
		}
		iLocal_55 = unk_0x01B3635C3E8EDD81(22, iLocal_104, vLocal_53, 0f, 1, true);
		unk_0x91629AC1E1F78419(iLocal_55, 17, true);
		unk_0x91629AC1E1F78419(iLocal_55, 13, false);
		unk_0x91629AC1E1F78419(iLocal_55, 6, true);
		unk_0xABA7AE40608505F2(iLocal_55, 128, true);
		unk_0xB71D41C0310C93DE(iLocal_55, true, 1);
		unk_0x2E35C4FA5F0ED22F(iLocal_55, true);
		unk_0xC8FD3EBBB90E8D7F(iLocal_55, 42, true);
		unk_0xC8FD3EBBB90E8D7F(iLocal_55, 281, true);
		unk_0xC8FD3EBBB90E8D7F(iLocal_55, 172, false);
		unk_0xC8FD3EBBB90E8D7F(iLocal_55, 137, true);
		unk_0x42E9CC2E0941D090(iLocal_55);
		unk_0x36C3B58DA78A2679(iLocal_55, sLocal_146);
		unk_0xEB061E1EBFED4D59(iLocal_55, 1);
		unk_0xD5874E4A4BF782FC(iLocal_55, unk_0x883FF674F22D1F7C(cLocal_92, "b_atm_mugging", vVar0, vVar1, 0, 2), 0, 0, 1);
		vVar3 = { unk_0xBFDD14D0A09BE0FA(cLocal_92, "b_atm_mugging", vVar0, vVar1, 0, 2) };
		unk_0x019CE76D5286C95C(iLocal_55, vVar3.z);
		if (func_105(iLocal_56))
		{
			if (unk_0xB6FD7D587FE0A1B4(iLocal_56))
			{
				unk_0xD5874E4A4BF782FC(iLocal_56, unk_0x883FF674F22D1F7C("random@atmrobberygen@male", "idle_a", vVar0, vVar1, 0, 2), 0, 0, 1);
				vVar3 = { unk_0xBFDD14D0A09BE0FA("random@atmrobberygen@male", "idle_a", vVar0, vVar1, 0, 2) };
			}
			else
			{
				unk_0xD5874E4A4BF782FC(iLocal_56, unk_0x883FF674F22D1F7C("random@atmrobberygen@female", "idle_a", vVar0, vVar1, 0, 2), 0, 0, 1);
				vVar3 = { unk_0xBFDD14D0A09BE0FA("random@atmrobberygen@female", "idle_a", vVar0, vVar1, 0, 2) };
			}
			unk_0x019CE76D5286C95C(iLocal_56, vVar3.z);
		}
		unk_0xE896C0AD02364F2A(iLocal_55, cLocal_92, "b_atm_mugging", 1000f, -4f, -1, 1, 0, 0, 0, 0);
		if (unk_0xB6FD7D587FE0A1B4(iLocal_56))
		{
			unk_0xE896C0AD02364F2A(iLocal_56, "random@atmrobberygen@male", "idle_a", 1000f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0x4EA570997E107F35("random@atmrobberygen@female");
		}
		else
		{
			unk_0xE896C0AD02364F2A(iLocal_56, "random@atmrobberygen@female", "idle_a", 1000f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0x4EA570997E107F35("random@atmrobberygen@male");
		}
		unk_0xF7CDBCD11F31B71A(iLocal_55, 1);
		unk_0x2E35C4FA5F0ED22F(iLocal_56, true);
		unk_0x7A535CE1F001F3FE(iLocal_55, joaat("weapon_pistol"), -1, true, true);
		unk_0xCCA4B7EFD37D48AC(iLocal_55, joaat("weapon_pistol"), 34, 0);
		unk_0x8E25082A46F87892(iLocal_55, joaat("weapon_pistol"), false);
		unk_0xE43AD8CB1B4DDED9(iLocal_55, 1, 0);
		switch (func_35())
		{
			case 0:
				sLocal_112 = "MICHAEL";
				break;
			
			case 1:
				sLocal_112 = "FRANKLIN";
				break;
			
			case 2:
				sLocal_112 = "TREVOR";
				break;
		}
		func_187(&Local_107, 0, unk_0xBC25C936A095B5BA(), sLocal_112, 0, 1);
		func_187(&Local_107, 1, iLocal_56, sLocal_114, 0, 1);
		func_187(&Local_107, 2, iLocal_55, "ATMRobber", 0, 1);
		if (iLocal_65 == 1 || iLocal_65 == 2)
		{
			iLocal_73 = unk_0x61C05BF08A1E0EFE(iLocal_106, vLocal_74, fLocal_76, true, true, false);
			unk_0x2D655AA68FA1736B(iLocal_73, true, true, 0);
			unk_0x0E622862E5E566BB(iLocal_73);
			unk_0xD7E19B03E0EB54E5(iLocal_73, 1);
			if (iLocal_65 == 2)
			{
				unk_0x1C5BDB4E5D257D63(iLocal_73, 0, 0, 0);
			}
			else if (iLocal_65 == 1)
			{
				unk_0xC3D5C68D28907D90(iLocal_55, 0);
				unk_0x8A8475988CA32D80(iLocal_55, 3);
			}
			else if (iLocal_65 == 4)
			{
				unk_0xD421BC740C5340C3(iLocal_73, 3);
			}
		}
		unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 32, false);
		return 1;
	}
	else if (func_197())
	{
		func_267();
	}
	return 0;
}

void func_187(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0xA62C
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

int func_188()//Position - 0xA6C7
{
	unk_0x522053D86D6E1C7A("random@atmrobberygen@male");
	unk_0x522053D86D6E1C7A("random@atmrobberygen@female");
	if (!iLocal_81)
	{
		func_196(&Local_164, 3);
		Local_164.f_92 = unk_0xC87A57742F7D3C06();
		func_195(&Local_164, iLocal_104);
		func_195(&Local_164, iLocal_105);
		func_195(&Local_164, iLocal_101);
		func_195(&Local_164, iLocal_102);
		func_193(&Local_164, cLocal_92);
		func_193(&Local_164, cLocal_148);
		func_193(&Local_164, cLocal_142);
		func_193(&Local_164, cLocal_93);
		iLocal_81 = 1;
	}
	if ((unk_0xF9E082857622D91E("random@atmrobberygen@male") && unk_0xF9E082857622D91E("random@atmrobberygen@female")) && func_189(&Local_164))
	{
		return 1;
	}
	return 0;
}

int func_189(var uParam0)//Position - 0xA76C
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
			if (!func_190(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_91 = 0;
	return 1;
}

bool func_190(var uParam0)//Position - 0xA7CE
{
	return func_191(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_191(int iParam0, char* sParam1, int iParam2)//Position - 0xA7E5
{
	if (unk_0xFA30DFD0084E92FE(iParam0, 30))
	{
		if (unk_0xFA30DFD0084E92FE(iParam0, 29))
		{
			switch (func_192(iParam0))
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

int func_192(int iParam0)//Position - 0xA8D9
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

void func_193(var uParam0, char* sParam1)//Position - 0xA905
{
	func_194(uParam0, 1, -1, sParam1, 0);
}

void func_194(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)//Position - 0xA918
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

void func_195(var uParam0, int iParam1)//Position - 0xAA00
{
	func_194(uParam0, 0, iParam1, "NULL", 0);
}

void func_196(var uParam0, int iParam1)//Position - 0xAA14
{
	if (iParam1 > 0)
	{
		uParam0->f_93 = iParam1;
	}
}

int func_197()//Position - 0xAA2B
{
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), vLocal_51) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(unk_0xB5D9AE572C19509E(unk_0xBC25C936A095B5BA())) > 1369f && !func_209())
		{
			return 0;
		}
	}
	if (func_205())
	{
		return 1;
	}
	if (func_198(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_198(float fParam0, bool bParam1)//Position - 0xAAB1
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
		if (func_37(func_35()))
		{
			iVar5 = func_204();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (unk_0xFA30DFD0084E92FE(Global_19B04.f_4871[iVar1 /*6*/], 2) && !unk_0xFA30DFD0084E92FE(Global_19B04.f_4871[iVar1 /*6*/], 3))
				{
					func_199(iVar1, &Var0);
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

void func_199(int iParam0, var uParam1)//Position - 0xAB68
{
	switch (iParam0)
	{
		case 0:
			func_200(uParam1, "Abigail1", func_202(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_201(iParam0), 1, 0);
			break;
		
		case 1:
			func_200(uParam1, "Abigail2", func_202(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_201(iParam0), 1, 0);
			break;
		
		case 2:
			func_200(uParam1, "Barry1", func_202(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_201(iParam0), 1, 0);
			break;
		
		case 3:
			func_200(uParam1, "Barry2", func_202(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_201(iParam0), 1, 1);
			break;
		
		case 4:
			func_200(uParam1, "Barry3", func_202(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_201(iParam0), 0, 0);
			break;
		
		case 5:
			func_200(uParam1, "Barry3A", func_202(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_201(iParam0), 0, 1);
			break;
		
		case 6:
			func_200(uParam1, "Barry3C", func_202(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_201(iParam0), 0, 1);
			break;
		
		case 7:
			func_200(uParam1, "Barry4", func_202(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_201(iParam0), 0, 0);
			break;
		
		case 8:
			func_200(uParam1, "Dreyfuss1", func_202(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_201(iParam0), 0, 0);
			break;
		
		case 9:
			func_200(uParam1, "Epsilon1", func_202(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_201(iParam0), 0, 0);
			break;
		
		case 10:
			func_200(uParam1, "Epsilon2", func_202(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_201(iParam0), 1, 0);
			break;
		
		case 11:
			func_200(uParam1, "Epsilon3", func_202(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_201(iParam0), 0, 0);
			break;
		
		case 12:
			func_200(uParam1, "Epsilon4", func_202(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_201(iParam0), 0, 0);
			break;
		
		case 13:
			func_200(uParam1, "Epsilon5", func_202(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_201(iParam0), 1, 0);
			break;
		
		case 14:
			func_200(uParam1, "Epsilon6", func_202(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_201(iParam0), 0, 1);
			break;
		
		case 15:
			func_200(uParam1, "Epsilon7", func_202(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_201(iParam0), 0, 0);
			break;
		
		case 16:
			func_200(uParam1, "Epsilon8", func_202(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_201(iParam0), 1, 0);
			break;
		
		case 17:
			func_200(uParam1, "Extreme1", func_202(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_201(iParam0), 0, 1);
			break;
		
		case 18:
			func_200(uParam1, "Extreme2", func_202(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_201(iParam0), 0, 1);
			break;
		
		case 19:
			func_200(uParam1, "Extreme3", func_202(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_201(iParam0), 0, 1);
			break;
		
		case 20:
			func_200(uParam1, "Extreme4", func_202(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_201(iParam0), 0, 0);
			break;
		
		case 21:
			func_200(uParam1, "Fanatic1", func_202(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_201(iParam0), 1, 0);
			break;
		
		case 22:
			func_200(uParam1, "Fanatic2", func_202(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_201(iParam0), 1, 0);
			break;
		
		case 23:
			func_200(uParam1, "Fanatic3", func_202(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_201(iParam0), 0, 1);
			break;
		
		case 24:
			func_200(uParam1, "Hao1", func_202(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_201(iParam0), 0, 1);
			break;
		
		case 25:
			func_200(uParam1, "Hunting1", func_202(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_201(iParam0), 0, 1);
			break;
		
		case 26:
			func_200(uParam1, "Hunting2", func_202(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_201(iParam0), 0, 1);
			break;
		
		case 27:
			func_200(uParam1, "Josh1", func_202(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_201(iParam0), 1, 0);
			break;
		
		case 28:
			func_200(uParam1, "Josh2", func_202(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_201(iParam0), 1, 1);
			break;
		
		case 29:
			func_200(uParam1, "Josh3", func_202(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_201(iParam0), 1, 1);
			break;
		
		case 30:
			func_200(uParam1, "Josh4", func_202(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_201(iParam0), 1, 0);
			break;
		
		case 31:
			func_200(uParam1, "Maude1", func_202(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_201(iParam0), 0, 1);
			break;
		
		case 32:
			func_200(uParam1, "Minute1", func_202(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_201(iParam0), 0, 1);
			break;
		
		case 33:
			func_200(uParam1, "Minute2", func_202(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_201(iParam0), 0, 1);
			break;
		
		case 34:
			func_200(uParam1, "Minute3", func_202(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_201(iParam0), 0, 1);
			break;
		
		case 35:
			func_200(uParam1, "MrsPhilips1", func_202(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_201(iParam0), 0, 0);
			break;
		
		case 36:
			func_200(uParam1, "MrsPhilips2", func_202(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_201(iParam0), 0, 0);
			break;
		
		case 37:
			func_200(uParam1, "Nigel1", func_202(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_201(iParam0), 1, 0);
			break;
		
		case 38:
			func_200(uParam1, "Nigel1A", func_202(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_201(iParam0), 1, 1);
			break;
		
		case 39:
			func_200(uParam1, "Nigel1B", func_202(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_201(iParam0), 1, 1);
			break;
		
		case 40:
			func_200(uParam1, "Nigel1C", func_202(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_201(iParam0), 1, 1);
			break;
		
		case 41:
			func_200(uParam1, "Nigel1D", func_202(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_201(iParam0), 1, 1);
			break;
		
		case 42:
			func_200(uParam1, "Nigel2", func_202(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_201(iParam0), 1, 1);
			break;
		
		case 43:
			func_200(uParam1, "Nigel3", func_202(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_201(iParam0), 1, 1);
			break;
		
		case 44:
			func_200(uParam1, "Omega1", func_202(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_201(iParam0), 0, 0);
			break;
		
		case 45:
			func_200(uParam1, "Omega2", func_202(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_201(iParam0), 0, 0);
			break;
		
		case 46:
			func_200(uParam1, "Paparazzo1", func_202(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_201(iParam0), 0, 1);
			break;
		
		case 47:
			func_200(uParam1, "Paparazzo2", func_202(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_201(iParam0), 0, 1);
			break;
		
		case 48:
			func_200(uParam1, "Paparazzo3", func_202(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_201(iParam0), 0, 0);
			break;
		
		case 49:
			func_200(uParam1, "Paparazzo3A", func_202(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_201(iParam0), 0, 1);
			break;
		
		case 50:
			func_200(uParam1, "Paparazzo3B", func_202(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_201(iParam0), 0, 1);
			break;
		
		case 51:
			func_200(uParam1, "Paparazzo4", func_202(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_201(iParam0), 0, 0);
			break;
		
		case 52:
			func_200(uParam1, "Rampage1", func_202(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_201(iParam0), 0, 0);
			break;
		
		case 54:
			func_200(uParam1, "Rampage3", func_202(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_201(iParam0), 1, 0);
			break;
		
		case 55:
			func_200(uParam1, "Rampage4", func_202(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_201(iParam0), 1, 0);
			break;
		
		case 56:
			func_200(uParam1, "Rampage5", func_202(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_201(iParam0), 0, 0);
			break;
		
		case 53:
			func_200(uParam1, "Rampage2", func_202(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_201(iParam0), 1, 0);
			break;
		
		case 57:
			func_200(uParam1, "TheLastOne", func_202(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_201(iParam0), 0, 1);
			break;
		
		case 58:
			func_200(uParam1, "Tonya1", func_202(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_201(iParam0), 0, 1);
			break;
		
		case 59:
			func_200(uParam1, "Tonya2", func_202(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_201(iParam0), 0, 1);
			break;
		
		case 60:
			func_200(uParam1, "Tonya3", func_202(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_201(iParam0), 0, 1);
			break;
		
		case 61:
			func_200(uParam1, "Tonya4", func_202(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_201(iParam0), 0, 1);
			break;
		
		case 62:
			func_200(uParam1, "Tonya5", func_202(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_201(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_200(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0xBD1D
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

int func_201(int iParam0)//Position - 0xBDAE
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

struct<2> func_202(int iParam0)//Position - 0xC0F5
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_203(iParam0) };
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

struct<2> func_203(int iParam0)//Position - 0xC12C
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

int func_204()//Position - 0xC578
{
	func_36();
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

int func_205()//Position - 0xC5BE
{
	if (func_208() && !func_209())
	{
		return 1;
	}
	if (func_207() && func_206())
	{
		return 1;
	}
	return 0;
}

bool func_206()//Position - 0xC5F0
{
	return Global_199EA > 0;
}

int func_207()//Position - 0xC5FE
{
	if (Global_15FA6 != -1)
	{
		return 1;
	}
	return 0;
}

int func_208()//Position - 0xC613
{
	if (Global_15FA6 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_147B0[Global_15FA6 /*34*/].f_F, 20);
	}
	return 0;
}

int func_209()//Position - 0xC639
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

void func_210()//Position - 0xC656
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (iLocal_71 == 0 && iLocal_65 == 5)
	{
		iLocal_71 = unk_0x491B2241281A03B7(1, 5);
	}
	else if (iLocal_65 != 5)
	{
		iLocal_71 = iLocal_65;
	}
	switch (iLocal_71)
	{
		case 1:
			iLocal_104 = joaat("g_m_y_armgoon_02");
			sLocal_146 = "G_M_Y_ArmGoon_02_White_Armenian_MINI_01";
			iLocal_105 = joaat("a_f_m_tourist_01");
			sLocal_147 = "A_F_M_BEVHILLS_02_WHITE_FULL_02";
			iLocal_106 = joaat("sanchez");
			sLocal_115 = "REAR1_ATTR";
			sLocal_116 = "REAR1_HELP";
			sLocal_117 = "REAR1_PROMPT";
			sLocal_118 = "REAR1_CHASE";
			sLocal_119 = "REAR1_FLEE";
			cLocal_120 = "REAR1_THX";
			sLocal_121 = "REAR1_DAMN";
			switch (func_35())
			{
				case 0:
					sLocal_124 = "REAR1_REM";
					sLocal_122 = "REAR1_FKM";
					sLocal_113 = "REAR1_WM";
					sLocal_125 = "REAR1_GYM";
					break;
				
				case 1:
					sLocal_124 = "REAR1_REF";
					sLocal_122 = "REAR1_FKF";
					sLocal_113 = "REAR1_WF";
					sLocal_125 = "REAR1_GYF";
					break;
				
				case 2:
					sLocal_124 = "REAR1_RET";
					sLocal_122 = "REAR1_FKT";
					sLocal_113 = "REAR1_WT";
					sLocal_125 = "REAR1_GYT";
					break;
			}
			sLocal_114 = "ATMRobVictim1";
			cLocal_123 = "REAR1AU";
			if (iLocal_103 == 0)
			{
				iVar0 = unk_0x491B2241281A03B7(0, 3);
				if (iVar0 == 0)
				{
					iLocal_101 = joaat("prop_ld_purse_01");
				}
				else if (iVar0 == 1)
				{
					iLocal_101 = joaat("prop_ld_wallet_01");
				}
				else if (iVar0 == 2)
				{
					bVar1 = func_211();
					if (bVar1)
					{
						iLocal_101 = joaat("prop_ld_wallet_pickup");
					}
					else
					{
						iLocal_101 = joaat("prop_ld_purse_01");
					}
				}
				iLocal_103 = 1;
			}
			cLocal_142 = "RANDOM@ATMROBBERY1";
			sLocal_143 = "Return_Wallet_Positive_A_Player";
			sLocal_144 = "Return_Wallet_Positive_A_Female";
			sLocal_145 = "Return_Wallet_Positive_A_Cam";
			cLocal_148 = "random@car_thief@waiting_ig_4";
			sLocal_149 = "waiting";
			sLocal_150 = "waiting";
			sLocal_151 = "waiting";
			break;
		
		case 2:
			iLocal_104 = joaat("g_m_y_famfor_01");
			sLocal_146 = "G_M_Y_FamFor_01_BLACK_MINI_01";
			iLocal_105 = joaat("a_m_y_hipster_02");
			sLocal_147 = "A_M_Y_Hipster_02_White_Full_01";
			iLocal_106 = joaat("ruiner");
			sLocal_115 = "REAR2_ATTR";
			sLocal_116 = "REAR2_HELP";
			sLocal_117 = "REAR2_PROMPT";
			sLocal_118 = "REAR2_CHASE";
			sLocal_119 = "REAR2_FLEE";
			cLocal_120 = "REAR2_THX";
			sLocal_121 = "REAR2_DAMN";
			switch (func_35())
			{
				case 0:
					sLocal_124 = "REAR2_REM";
					sLocal_122 = "REAR2_FKM";
					sLocal_113 = "REAR2_WM";
					sLocal_125 = "REAR2_GYM";
					break;
				
				case 1:
					sLocal_124 = "REAR2_REF";
					sLocal_122 = "REAR2_FKF";
					sLocal_113 = "REAR2_WF";
					sLocal_125 = "REAR2_GYF";
					break;
				
				case 2:
					sLocal_124 = "REAR2_RET";
					sLocal_122 = "REAR2_FKT";
					sLocal_113 = "REAR2_WT";
					sLocal_125 = "REAR2_GYT";
					break;
			}
			sLocal_114 = "ATMRobVictim2";
			cLocal_123 = "REAR2AU";
			iLocal_101 = joaat("prop_ld_wallet_pickup");
			cLocal_142 = "RANDOM@ATMROBBERY2";
			sLocal_143 = "Return_Wallet_Positive_A_Player";
			sLocal_144 = "Return_Wallet_Positive_A_Male";
			sLocal_145 = "Return_Wallet_Positive_A_Cam";
			cLocal_148 = "RANDOM@BICYCLE_THIEF@IDLE_A";
			sLocal_149 = "IDLE_A";
			sLocal_150 = "IDLE_B";
			sLocal_151 = "IDLE_C";
			break;
		
		case 3:
			iLocal_105 = joaat("a_f_m_tourist_01");
			sLocal_147 = "A_F_Y_Tourist_01_White_Mini_01";
			iLocal_104 = joaat("g_m_y_salvagoon_02");
			sLocal_146 = "G_M_Y_SalvaGoon_02_SALVADORIAN_MINI_03";
			sLocal_115 = "REAR5_ATTR";
			sLocal_116 = "REAR5_HELP";
			sLocal_117 = "REAR5_PROMPT";
			sLocal_118 = "REAR5_CHASE";
			sLocal_119 = "REAR5_FLEE";
			cLocal_120 = "REAR5_THX";
			sLocal_121 = "REAR5_DAMN";
			switch (func_35())
			{
				case 0:
					sLocal_124 = "REAR5_REM";
					sLocal_122 = "REAR5_FKM";
					sLocal_113 = "REAR5_WM";
					sLocal_125 = "REAR5_GYM";
					break;
				
				case 1:
					sLocal_124 = "REAR5_REF";
					sLocal_122 = "REAR5_FKF";
					sLocal_113 = "REAR5_WF";
					sLocal_125 = "REAR5_GYF";
					break;
				
				case 2:
					sLocal_124 = "REAR5_RET";
					sLocal_122 = "REAR5_FKT";
					sLocal_113 = "REAR5_WT";
					sLocal_125 = "REAR5_GYT";
					break;
			}
			sLocal_114 = "ATMRobVictim5";
			cLocal_123 = "REAR5AU";
			if (iLocal_103 == 0)
			{
				iVar0 = unk_0x491B2241281A03B7(0, 3);
				if (iVar0 == 0)
				{
					iLocal_101 = joaat("prop_ld_purse_01");
				}
				else if (iVar0 == 1)
				{
					iLocal_101 = joaat("prop_ld_wallet_01");
				}
				else if (iVar0 == 2)
				{
					bVar2 = func_211();
					if (bVar2)
					{
						iLocal_101 = joaat("prop_ld_wallet_pickup");
					}
					else
					{
						iLocal_101 = joaat("prop_ld_wallet_01");
					}
				}
				iLocal_103 = 1;
			}
			cLocal_142 = "RANDOM@ATMROBBERY3";
			sLocal_143 = "Return_Wallet_Positive_B_Player";
			sLocal_144 = "Return_Wallet_Positive_B_Female";
			sLocal_145 = "Return_Wallet_Positive_B_Cam";
			cLocal_148 = "random@car_thief@waiting_ig_4";
			sLocal_149 = "waiting";
			sLocal_150 = "waiting";
			sLocal_151 = "waiting";
			break;
		
		case 4:
			iLocal_105 = joaat("a_f_m_tourist_01");
			sLocal_147 = "A_F_M_BevHills_02_WHITE_FULL_01";
			iLocal_106 = joaat("ruiner");
			iLocal_104 = joaat("g_m_y_azteca_01");
			sLocal_146 = "G_M_Y_Latino01_Latino_MINI_01";
			sLocal_115 = "REAR3_ATTR";
			sLocal_116 = "REAR3_HELP";
			sLocal_117 = "REAR3_PROMPT";
			sLocal_118 = "REAR3_CHASE";
			sLocal_119 = "REAR3_FLEE";
			cLocal_120 = "REAR3_THX";
			sLocal_121 = "REAR3_DAMN";
			switch (func_35())
			{
				case 0:
					sLocal_124 = "REAR3_REM";
					sLocal_122 = "REAR3_FKM";
					sLocal_113 = "REAR3_WM";
					sLocal_125 = "REAR3_GYM";
					break;
				
				case 1:
					sLocal_124 = "REAR3_REF";
					sLocal_122 = "REAR3_FKF";
					sLocal_113 = "REAR3_WF";
					sLocal_125 = "REAR3_GYF";
					break;
				
				case 2:
					sLocal_124 = "REAR3_RET";
					sLocal_122 = "REAR3_FKT";
					sLocal_113 = "REAR3_WT";
					sLocal_125 = "REAR3_GYT";
					break;
			}
			sLocal_114 = "ATMRobVictim3";
			cLocal_123 = "REAR3AU";
			if (iLocal_103 == 0)
			{
				iVar0 = unk_0x491B2241281A03B7(0, 3);
				if (iVar0 == 0)
				{
					iLocal_101 = joaat("prop_ld_purse_01");
				}
				else if (iVar0 == 1)
				{
					iLocal_101 = joaat("prop_ld_wallet_01");
				}
				else if (iVar0 == 2)
				{
					bVar3 = func_211();
					if (bVar3)
					{
						iLocal_101 = joaat("prop_ld_wallet_pickup");
					}
					else
					{
						iLocal_101 = joaat("prop_ld_purse_01");
					}
				}
				iLocal_103 = 1;
			}
			cLocal_142 = "RANDOM@ATMROBBERY4";
			sLocal_143 = "Return_Wallet_Positive_C_Player";
			sLocal_144 = "Return_Wallet_Positive_C_Female";
			sLocal_145 = "Return_Wallet_Positive_C_Cam";
			cLocal_148 = "random@car_thief@waiting_ig_4";
			sLocal_149 = "waiting";
			sLocal_150 = "waiting";
			sLocal_151 = "waiting";
			break;
	}
	if (unk_0xF0F2FC9DE291567F(vLocal_53, -203.72f, -861.8f, 29.27f, true) < 5f)
	{
		vLocal_138 = { -197.64f, -863.25f, 28.33f };
		fLocal_139 = 334.5007f;
		vLocal_140 = { -187.24f, -856.77f, 28.97f };
		fLocal_141 = 162.69f;
		iLocal_72 = 1;
	}
	else if (unk_0xF0F2FC9DE291567F(vLocal_53, 288.46f, -1256.71f, 28.44f, true) < 5f)
	{
		vLocal_138 = { 286.5f, -1256.73f, 28.29f };
		fLocal_139 = 167.3216f;
		vLocal_140 = { 250.55f, -1239.27f, 28.84f };
		fLocal_141 = 265.51f;
		iLocal_72 = 2;
	}
	else if (unk_0xF0F2FC9DE291567F(vLocal_53, -3044.11f, 594.34f, 6.73f, true) < 5f)
	{
		vLocal_138 = { -3044.66f, 595.7f, 6.59f };
		fLocal_139 = 296.7338f;
		vLocal_140 = { -3037.55f, 608.53f, 7.34f };
		fLocal_141 = 202.3f;
		iLocal_72 = 3;
	}
	else if (unk_0xF0F2FC9DE291567F(vLocal_53, 174.53f, 6637.64f, 30.57f, true) < 5f)
	{
		vLocal_138 = { 175.57f, 6636.58f, 30.57f };
		fLocal_139 = 260.4868f;
		vLocal_140 = { 188.97f, 6616.2f, 31.48f };
		fLocal_141 = 93.97f;
		iLocal_72 = 4;
	}
	else if (unk_0xF0F2FC9DE291567F(vLocal_53, 24.13f, -946.84f, 28.36f, true) < 5f)
	{
		vLocal_138 = { 23.65f, -948.26f, 28.36f };
		fLocal_139 = 258.8732f;
		vLocal_140 = { 22.19f, -955.82f, 28.94f };
		fLocal_141 = 70.66f;
		iLocal_72 = 6;
	}
	else if (unk_0xF0F2FC9DE291567F(vLocal_53, 296.13f, -894.01f, 28.23f, true) < 5f)
	{
		vLocal_138 = { 294.64f, -893.6f, 28.18f };
		fLocal_139 = 156.7222f;
		vLocal_140 = { 286.4f, -897.28f, 28.57f };
		fLocal_141 = 341.97f;
		iLocal_72 = 8;
	}
	else if (unk_0xF0F2FC9DE291567F(vLocal_53, 1077.69f, -775.73f, 57.21f, true) < 5f)
	{
		vLocal_138 = { 1077.64f, -773.86f, 57.09f };
		fLocal_139 = 275.6593f;
		vLocal_140 = { 1081.93f, -764.08f, 57.35f };
		fLocal_141 = 268.57f;
		iLocal_72 = 11;
	}
	else if (unk_0xF0F2FC9DE291567F(vLocal_53, -2072.88f, -317.19f, 12.32f, true) < 5f)
	{
		vLocal_138 = { -2074.93f, -316.75f, 12.16f };
		fLocal_139 = 157.3363f;
		vLocal_140 = { -2101.2f, -293.74f, 12.74f };
		fLocal_141 = 263.12f;
		iLocal_72 = 16;
	}
	else if (unk_0xF0F2FC9DE291567F(vLocal_53, -821.33f, -1082.43f, 10.14f, true) < 5f)
	{
		vLocal_138 = { -819.39f, -1084.12f, 10.03f };
		fLocal_139 = 236.6294f;
		vLocal_140 = { -803.18f, -1075.91f, 11.13f };
		fLocal_141 = 209.53f;
		iLocal_72 = 17;
	}
	else if (unk_0xF0F2FC9DE291567F(vLocal_53, -712.9f, -819.32f, 22.73f, true) < 5f)
	{
		vLocal_138 = { -712.88f, -820.47f, 22.61f };
		fLocal_139 = 268.2568f;
		vLocal_140 = { -721.63f, -826.84f, 22.82f };
		fLocal_141 = 93.14f;
		iLocal_72 = 18;
	}
	else if (unk_0xF0F2FC9DE291567F(vLocal_53, -387.12f, 6045.79f, 30.5f, true) < 5f)
	{
		vLocal_138 = { -389.5633f, 6042.153f, 30.4989f };
		fLocal_139 = 223.2838f;
		vLocal_140 = { -406.23f, 6045.69f, 31.06f };
		fLocal_141 = 229.52f;
		iLocal_72 = 19;
	}
	else if (unk_0xF0F2FC9DE291567F(vLocal_53, -301.84f, -830.39f, 31.38f, true) < 5f)
	{
		vLocal_138 = { -304.1459f, -837.4778f, 30.6799f };
		fLocal_139 = 286.139f;
		vLocal_140 = { -304.56f, -840.76f, 31.26f };
		fLocal_141 = 77.59f;
		iLocal_72 = 22;
	}
	else if (unk_0xF0F2FC9DE291567F(vLocal_53, -254.3f, -691.96f, 32.61f, true) < 5f)
	{
		vLocal_138 = { -253.51f, -689.26f, 32.57f };
		fLocal_139 = 209.9227f;
		vLocal_140 = { -250.91f, -684.01f, 33f };
		fLocal_141 = 230.65f;
		iLocal_72 = 23;
	}
	else if (unk_0xF0F2FC9DE291567F(vLocal_53, 89.39f, 2f, 67.34f, true) < 5f)
	{
		vLocal_138 = { 88.7f, 0.01f, 67.38f };
		fLocal_139 = 71.0114f;
		vLocal_140 = { 91.35f, -7.07f, 67.82f };
		fLocal_141 = 70.28f;
		iLocal_72 = 25;
	}
	else if (unk_0xF0F2FC9DE291567F(vLocal_53, -526.42f, -1222.51f, 17.46f, true) < 5f)
	{
		vLocal_138 = { -530.11f, -1217.33f, 17.26f };
		fLocal_139 = 53.768f;
		vLocal_140 = { -522.45f, -1196.35f, 18.45f };
		fLocal_141 = 297.22f;
		iLocal_72 = 30;
	}
	else if (unk_0xF0F2FC9DE291567F(vLocal_53, -2956.78f, 488.19f, 14.47f, true) < 5f)
	{
		vLocal_138 = { -2956.78f, 488.19f, 14.47f };
		fLocal_139 = 80.0912f;
		vLocal_140 = { -2974.34f, 491.96f, 15f };
		fLocal_141 = 1.95f;
		iLocal_72 = 31;
	}
	else
	{
		vLocal_138 = { vLocal_53 };
	}
}

int func_211()//Position - 0xD1AF
{
	if (unk_0xFA30DFD0084E92FE(unk_0x491B2241281A03B7(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_212()//Position - 0xD1D0
{
	if (!func_181(5))
	{
		return 1;
	}
	if (func_205())
	{
		return 1;
	}
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (SYSTEM::VMAG2(unk_0xB5D9AE572C19509E(unk_0xBC25C936A095B5BA())) > 1369f && !func_209())
		{
			return 0;
		}
	}
	if (func_198(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_213()//Position - 0xD232
{
	if ((Global_19AF9 == func_214() && unk_0x8520DF5301DD9811()) && Global_19AFA)
	{
		return 1;
	}
	return 0;
}

int func_214()//Position - 0xD25D
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x1377080E9B0BD993(), 64);
	uVar1 = func_215(Var0);
	return uVar1;
}

int func_215(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0xD27A
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

void func_216(var uParam0)//Position - 0xD454
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
						func_217(uParam0[iVar0 /*18*/]);
						uParam0->f_92 = unk_0xC87A57742F7D3C06();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_217(int iParam0)//Position - 0xD4DE
{
	func_218(iParam0, &(iParam0->f_2), iParam0->f_1);
}

void func_218(int iParam0, char* sParam1, int iParam2)//Position - 0xD4F4
{
	if (unk_0xFA30DFD0084E92FE(*iParam0, 30))
	{
		switch (func_192(*iParam0))
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

void func_219(int iParam0, var uParam1)//Position - 0xD5CE
{
	int iVar0;
	int iVar1;
	
	if (*uParam1 == -99)
	{
		*uParam1 = unk_0x105601648511CC64();
	}
	if (unk_0x2DA8CA50A72528FB(iParam0))
	{
		iVar0 = (unk_0x105601648511CC64() - *uParam1);
		if (iVar0 < 5000)
		{
			iVar1 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(iVar0) / 1000f));
			if ((iVar1 * 1000 - iVar0) < 500)
			{
				if (unk_0xB1D6718ACE798CBB(iParam0) != 255)
				{
					unk_0x7781946F1FC054FA(iParam0, 255);
				}
			}
			else if (unk_0xB1D6718ACE798CBB(iParam0) != 0)
			{
				unk_0x7781946F1FC054FA(iParam0, 0);
			}
		}
		else if (*uParam1 != -100)
		{
			*uParam1 = -100;
			if (unk_0xB1D6718ACE798CBB(iParam0) != 255)
			{
				unk_0x7781946F1FC054FA(iParam0, 255);
			}
		}
	}
}

void func_220()//Position - 0xD66D
{
}

void func_221()//Position - 0xD675
{
}

void func_222(int iParam0)//Position - 0xD67D
{
	if (iParam0 == -1)
	{
		iParam0 = func_214();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_224(iParam0);
	unk_0x8A623F2A0D19557F(0);
	unk_0xCB0D7BF24DBB59C6(1);
	Global_19AF6 = 0;
	func_223();
}

void func_223()//Position - 0xD6B3
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

void func_224(int iParam0)//Position - 0xD6F0
{
	Global_19AF9 = iParam0;
}

int func_225(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0xD6FE
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
		iParam1 = func_214();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_266())
		{
			return 0;
		}
	}
	vLocal_51 = { vParam0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			vVar1 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
			if (SYSTEM::VMAG2(unk_0xB5D9AE572C19509E(unk_0xBC25C936A095B5BA())) > 1369f && !func_209())
			{
				return 0;
			}
		}
		if (!Global_19B04.f_2360)
		{
			return 0;
		}
		if (func_265(0))
		{
			return 0;
		}
		if (func_205())
		{
			return 0;
		}
		if (func_264())
		{
			return 0;
		}
		if (Global_19AF9 != -1)
		{
			return 0;
		}
		if (func_37(func_35()))
		{
			if (func_198(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()) && !bParam4)
		{
			if ((vVar1.z - vLocal_51.z) > 50f)
			{
				return 0;
			}
		}
		if (!func_263(iParam1))
		{
			return 0;
		}
		if (func_37(func_35()))
		{
			if (func_262(func_35()) == 4 || func_262(func_35()) == 5)
			{
				return 0;
			}
		}
		if (func_37(func_35()))
		{
			if (!func_261(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_260(Global_19B04.f_6186.f_2B[iParam1]))
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
		if (func_259())
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
		if (!func_250(4))
		{
			return 0;
		}
		if (!func_181(5))
		{
			return 0;
		}
		if (func_249(iParam1, iParam2) && !bParam3)
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
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_249(0, 0))
		{
			return 0;
		}
		if (Global_634F)
		{
			return 0;
		}
		if (func_263(30) && !func_249(30, 0))
		{
			if (iParam1 != 30)
			{
				if (SYSTEM::VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_37(func_35()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				vVar3 = { Global_19B04.f_932.f_21B.f_8E8[iVar2 /*3*/] };
				iVar4 = Global_19B04.f_932.f_21B.f_8E4[iVar2];
				if (func_248(iVar4))
				{
					if (func_226(iVar2))
					{
						if (!func_60(vVar3, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false), vVar3) < (210f * 210f))
							{
								if (func_35() != iVar2)
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

bool func_226(int iParam0)//Position - 0xDA98
{
	int iVar0;
	
	iVar0 = Global_19B04.f_932.f_21B.f_8E4[iParam0];
	return func_227(iVar0);
}

int func_227(int iParam0)//Position - 0xDAB9
{
	return func_228(iParam0, 1);
}

int func_228(int iParam0, int iParam1)//Position - 0xDAC8
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_248(iParam0))
	{
		return 0;
	}
	func_229(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_229(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0xDB1B
{
	func_230(func_241(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_230(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0xDB39
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_240(iParam0, iParam1))
	{
		iVar0 = func_239(iParam1);
		iVar1 = func_237(iParam0);
		iVar2 = (func_237(iParam0) - func_237(iParam1));
		iVar3 = (func_239(iParam0) - func_239(iParam1));
		iVar4 = (func_236(iParam0) - func_236(iParam1));
		iVar5 = (func_235(iParam0) - func_235(iParam1));
		iVar6 = (func_234(iParam0) - func_234(iParam1));
		iVar7 = (func_233(iParam0) - func_233(iParam1));
	}
	else
	{
		iVar0 = func_239(iParam0);
		iVar1 = func_237(iParam1);
		iVar2 = (func_237(iParam1) - func_237(iParam0));
		iVar3 = (func_239(iParam1) - func_239(iParam0));
		iVar4 = (func_236(iParam1) - func_236(iParam0));
		iVar5 = (func_235(iParam1) - func_235(iParam0));
		iVar6 = (func_234(iParam1) - func_234(iParam0));
		iVar7 = (func_233(iParam1) - func_233(iParam0));
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
		iVar4 = (iVar4 + func_232(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_231(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_231(float fParam0, float fParam1, float fParam2)//Position - 0xDD3A
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

int func_232(int iParam0, int iParam1)//Position - 0xDD7C
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

int func_233(int iParam0)//Position - 0xDE1E
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_234(int iParam0)//Position - 0xDE31
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_235(int iParam0)//Position - 0xDE44
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_236(int iParam0)//Position - 0xDE57
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_237(int iParam0)//Position - 0xDE69
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_238(unk_0xFA30DFD0084E92FE(iParam0, 31), -1, 1)) + 2011;
}

int func_238(bool bParam0, int iParam1, int iParam2)//Position - 0xDE8E
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_239(int iParam0)//Position - 0xDEA5
{
	return iParam0 & 15;
}

int func_240(int iParam0, int iParam1)//Position - 0xDEB2
{
	int iVar0;
	int iVar1;
	
	if (!func_248(iParam1) || !func_248(iParam0))
	{
		return 1;
	}
	iVar0 = func_237(iParam0);
	iVar1 = func_237(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_239(iParam0);
	iVar1 = func_239(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_236(iParam0);
	iVar1 = func_236(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_235(iParam0);
	iVar1 = func_235(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_234(iParam0);
	iVar1 = func_234(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_233(iParam0);
	iVar1 = func_233(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_241()//Position - 0xDFBE
{
	var uVar0;
	
	func_247(&uVar0, unk_0xF40D00CD7B81C0A8());
	func_246(&uVar0, unk_0x7E09057438B9D216());
	func_245(&uVar0, unk_0x6E06C0DB9B43570D());
	func_244(&uVar0, unk_0xBE14F159908E4EE5());
	func_243(&uVar0, unk_0xDD6A91E47ED4D0CF());
	func_242(&uVar0, unk_0x4EEB3860BFC44B78());
	return uVar0;
}

void func_242(var uParam0, int iParam1)//Position - 0xE004
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

void func_243(var uParam0, int iParam1)//Position - 0xE08A
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_244(var uParam0, int iParam1)//Position - 0xE0BD
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_239(*uParam0);
	iVar1 = func_237(*uParam0);
	if (iParam1 < 1 || iParam1 > func_232(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_245(var uParam0, int iParam1)//Position - 0xE10E
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_246(var uParam0, int iParam1)//Position - 0xE148
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_247(var uParam0, int iParam1)//Position - 0xE183
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_248(int iParam0)//Position - 0xE1BF
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
	iVar0 = func_233(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_234(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_235(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_237(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_239(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_236(iParam0);
	if (iVar5 < 1 || iVar5 > func_232(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_249(int iParam0, int iParam1)//Position - 0xE29B
{
	if (unk_0xFA30DFD0084E92FE(Global_19B04.f_6186.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_250(int iParam0)//Position - 0xE2BE
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
						if (((((((((((((((((!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_258()) || Global_1974B) || Global_62BF) || func_257()) || func_56(8, -1)) || func_256()) || func_255()) || func_254()) || func_253()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1) || func_258()) || Global_62BF) || func_257()) || func_56(8, -1)) || func_254()) || func_256()) || func_255()) || func_253()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_258()) || Global_1974B) || Global_62BF) || func_257()) || func_56(8, -1)) || func_254()) || func_256()) || func_255()) || func_253()) || Global_19B04.f_1DEB.f_397[iVar0] == 5) || Global_8E64 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_258()) || Global_1974B) || Global_62BF) || func_257()) || func_56(8, -1)) || func_256()) || func_255()) || func_253()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_258() || unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0) || func_56(8, -1)) || func_253()) || func_252()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_56(8, -1) || func_256()) || func_255()) || func_252()) || func_251())
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
							if ((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || func_258()) || Global_62BF) || func_257()) || func_56(8, -1)) || func_255()) || func_254()) || func_253()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || !unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) || !unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F())) || !unk_0x726D9204B160D23E()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || func_258()) || func_255()) || Global_1974B) || Global_62BF) || func_257()) || Global_90C1) || func_56(8, -1)) || func_254()) || func_252()) || func_253()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || !unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) || !unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F())) || !unk_0x726D9204B160D23E()) || unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0)) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1)) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0x9273B3557334635D(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || func_258()) || Global_1974B) || Global_62BF) || func_257()) || func_56(8, -1)) || func_254()) || func_252()) || func_256()) || func_255()) || func_253())
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

var func_251()//Position - 0xE9DB
{
	return Global_16B42.f_1;
}

int func_252()//Position - 0xE9E9
{
	if (Global_15FA6 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_147B0[Global_15FA6 /*34*/].f_F, 13);
	}
	return 0;
}

int func_253()//Position - 0xEA0F
{
	if (unk_0xB731B8C5BCE89836(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_254()//Position - 0xEA29
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

bool func_255()//Position - 0xEA53
{
	return Global_16B4F.f_142 > 0;
}

bool func_256()//Position - 0xEA64
{
	return Global_16B4F.f_141 > 0;
}

var func_257()//Position - 0xEA75
{
	return Global_140856;
}

int func_258()//Position - 0xEA81
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		return Global_161D2.f_2C == 1;
	}
	return 0;
}

int func_259()//Position - 0xEA9D
{
	func_54();
	if (Global_C60[Global_389D /*2811*/][0 /*281*/].f_103 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_260(int iParam0)//Position - 0xEAC5
{
	return func_240(func_241(), iParam0);
}

int func_261(int iParam0, int iParam1, int iParam2)//Position - 0xEAD7
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_35();
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

int func_262(int iParam0)//Position - 0xEBBB
{
	if (!func_37(iParam0))
	{
		return 7;
	}
	return Global_19B04.f_1DEB.f_397[iParam0];
}

bool func_263(int iParam0)//Position - 0xEBDF
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_266())
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

int func_264()//Position - 0xEC3D
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

bool func_265(bool bParam0)//Position - 0xEC81
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_1163A, 0);
}

int func_266()//Position - 0xECAC
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

void func_267()//Position - 0xED67
{
	if (bLocal_127)
	{
		if (unk_0xE59B7F5A03335350(iLocal_73, 0))
		{
			if (unk_0xB9FEB746FD810A52(iLocal_73))
			{
				unk_0xE421FE22DE8008EB(iLocal_73);
			}
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_55))
	{
		unk_0x02537C8C1BEEB477(&iLocal_55);
	}
	unk_0x878261FFF1AA7E94(0);
	if (iLocal_69 != 0)
	{
		unk_0x9A172FCB057ABAEF(iLocal_69);
	}
	unk_0x878261FFF1AA7E94(0);
	if (!unk_0x36CEFBE9B745A58D(iLocal_56))
	{
		unk_0x2E35C4FA5F0ED22F(iLocal_56, false);
		unk_0xB105531EDD3DE51B(iLocal_56, true);
		unk_0x02537C8C1BEEB477(&iLocal_56);
	}
	if (iLocal_65 == 4)
	{
		unk_0x379ACE23D404525C(179.5463f, 6625.689f, 30.2739f, 184.245f, 6635.661f, 31.5188f, true, 1);
	}
	func_169(&uLocal_152, 0, 0);
	if (func_213())
	{
		unk_0xDF53A66AEE1401AA(1f);
	}
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		unk_0x0DEF5E53360637F2(unk_0xBC25C936A095B5BA(), 0);
	}
	func_280(&Local_164, 0);
	func_268(-1);
	unk_0x5905D912945BDAFE(1);
	unk_0x483687B0FCA5415A(iLocal_63, 0);
	unk_0x95E4B6F3ED223F5A();
}

void func_268(int iParam0)//Position - 0xEE43
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_214();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_213())
	{
		func_273(iParam0);
		unk_0x3FF92BBF0607A406(0, 0);
		Global_19AFB = unk_0x105601648511CC64();
		func_272(30000);
		StringCopy(&cVar0, func_271(Global_19AF9, 1), 64);
		if (func_270(Global_19AF9) > 0)
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
	func_269(&Global_62F8);
	Global_19AFA = 0;
	func_224(-1);
}

void func_269(var uParam0)//Position - 0xEEF8
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

int func_270(int iParam0)//Position - 0xEF35
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

char* func_271(int iParam0, bool bParam1)//Position - 0xEFE6
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

void func_272(int iParam0)//Position - 0xF22F
{
	Global_8E68 = (unk_0x105601648511CC64() + iParam0);
}

void func_273(int iParam0)//Position - 0xF241
{
	func_274(iParam0, 0, func_279(iParam0));
}

void func_274(int iParam0, int iParam1, int iParam2)//Position - 0xF256
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_241();
	func_277(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_276(iParam0, &uVar0);
	Var1 = { func_275(&uVar0) };
}

struct<16> func_275(var uParam0)//Position - 0xF285
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_235(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_234(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_233(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_236(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_239(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_237(*uParam0), 64);
	return Var0;
}

void func_276(int iParam0, var uParam1)//Position - 0xF355
{
	Global_19B04.f_6186.f_2B[iParam0] = *uParam1;
}

void func_277(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xF36D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_237(*uParam0);
	iVar1 = func_239(*uParam0);
	iVar2 = func_236(*uParam0);
	iVar3 = func_235(*uParam0);
	iVar4 = func_234(*uParam0);
	iVar5 = func_233(*uParam0);
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
	iVar6 = func_232(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_232(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_278(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_278(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xF4EF
{
	func_247(uParam0, iParam1);
	func_246(uParam0, iParam2);
	func_245(uParam0, iParam3);
	func_243(uParam0, iParam5);
	func_244(uParam0, iParam4);
	func_242(uParam0, iParam6);
}

int func_279(int iParam0)//Position - 0xF527
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

void func_280(var uParam0, bool bParam1)//Position - 0xF6CA
{
	int iVar0;
	
	if (!bParam1)
	{
		func_282(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_281(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_91 = 0;
	uParam0->f_92 = -1;
}

void func_281(var uParam0)//Position - 0xF705
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_282(var uParam0)//Position - 0xF71E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*18*/], 30))
		{
			func_283(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_91 = 1;
}

void func_283(var uParam0)//Position - 0xF757
{
	func_284(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_284(int iParam0, char* sParam1, int iParam2)//Position - 0xF76E
{
	if (unk_0xFA30DFD0084E92FE(iParam0, 30))
	{
		switch (func_192(iParam0))
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

void func_285(bool bParam0)//Position - 0xF82E
{
	Global_19AFC = { vLocal_53 };
	if (bParam0)
	{
		func_300(3);
	}
	func_289(1, 0);
	if (!bLocal_96)
	{
		func_288();
	}
	func_286();
	func_267();
}

void func_286()//Position - 0xF863
{
	func_287();
}

int func_287()//Position - 0xF870
{
	if (func_265(0))
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

int func_288()//Position - 0xF8BB
{
	return 1;
}

void func_289(int iParam0, int iParam1)//Position - 0xF8C4
{
	if (iParam0 == -1)
	{
		iParam0 = func_214();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_270(iParam0))
	{
		func_299(iParam0, iParam1);
		if (!func_298(51))
		{
			func_295("RE_REWARD", 1, 0, 4000, 10000, func_204(), 0, 138, 0);
			func_294(51);
		}
		if (func_177(iParam0))
		{
			Global_19B04.f_6186.f_2 = 3;
		}
		if (func_293(iParam0, iParam1) != 322)
		{
			func_290(func_293(iParam0, iParam1), vLocal_51.x, vLocal_51.y);
		}
		Global_19AF8 = iParam1;
		if (Global_19AF6 == 0)
		{
			if (((Global_19AF9 == 1 || Global_19AF9 == 5) || Global_19AF9 == 11) || Global_19AF9 == 25)
			{
				func_300(2);
			}
			else if ((Global_19AF9 == 26 || Global_19AF9 == 8) || Global_19AF9 == 17)
			{
				func_300(7);
			}
			else
			{
				func_300(1);
			}
		}
	}
}

void func_290(int iParam0, var uParam1, var uParam2)//Position - 0xF9C8
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
		func_10((891 + iParam0), 1, -1, 1);
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
		func_291();
	}
}

void func_291()//Position - 0xFAB0
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
		func_32(13, SYSTEM::FLOOR(Global_19B04.f_27B5.f_F0D));
	}
	if (!unk_0xF9BFA43C1BAFD016())
	{
		if (!Global_11542)
		{
			if (func_292() == 2 == 0 && !unk_0x7AF0088ABFA713B6())
			{
				if (unk_0x670C0C6C780A3F84())
				{
					Global_199FA = 0;
				}
				if (!Global_DA9F)
				{
					func_287();
				}
			}
		}
	}
}

int func_292()//Position - 0xFF71
{
	return Global_62BD;
}

int func_293(int iParam0, int iParam1)//Position - 0xFF7C
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

void func_294(int iParam0)//Position - 0x1036D
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

void func_295(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x103AF
{
	func_296(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_296(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x103D0
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
		func_297();
	}
}

void func_297()//Position - 0x105A3
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

int func_298(int iParam0)//Position - 0x106C3
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

void func_299(int iParam0, int iParam1)//Position - 0x10706
{
	unk_0xF0059F27F7BB6680(&(Global_19B04.f_6186.f_8[iParam0]), iParam1);
}

void func_300(int iParam0)//Position - 0x10721
{
	Global_19AF6 = iParam0;
}

