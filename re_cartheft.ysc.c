#region Local Var
	var uLocal_0 = 0;
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
	int iLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	float fLocal_16 = 0f;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	int iLocal_19 = 0;
	char* sLocal_20 = NULL;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	vector3 vLocal_45 = { 0f, 0f, 0f };
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	vector3 vLocal_50 = { 0f, 0f, 0f };
	float fLocal_51 = 0f;
	float fLocal_52 = 0f;
	float fLocal_53 = 0f;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	bool bLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	var uLocal_62 = 0;
	int iLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	char* sLocal_79 = NULL;
	char* sLocal_80 = NULL;
	char* sLocal_81 = NULL;
	char* sLocal_82 = NULL;
	vector3 vLocal_83 = { 0f, 0f, 0f };
	vector3 vLocal_84 = { 0f, 0f, 0f };
	vector3 vLocal_85 = { 0f, 0f, 0f };
	vector3 vLocal_86 = { 0f, 0f, 0f };
	vector3 vLocal_87 = { 0f, 0f, 0f };
	vector3 vLocal_88 = { 0f, 0f, 0f };
	float fLocal_89 = 0f;
	float fLocal_90 = 0f;
	float fLocal_91 = 0f;
	float fLocal_92 = 0f;
	float fLocal_93 = 0f;
	float fLocal_94 = 0f;
	float fLocal_95 = 0f;
	float fLocal_96 = 0f;
	vector3 vLocal_97 = { 0f, 0f, 0f };
	vector3 vLocal_98 = { 0f, 0f, 0f };
	float fLocal_99 = 0f;
	char* sLocal_100 = NULL;
	char* sLocal_101 = NULL;
	struct<10> Local_102[16];
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	char* sLocal_107 = NULL;
	char* sLocal_108 = NULL;
	char* sLocal_109 = NULL;
	char* sLocal_110 = NULL;
	char* sLocal_111 = NULL;
	char* sLocal_112 = NULL;
	char* sLocal_113 = NULL;
	char[] cLocal_114[8] = 0;
	int iLocal_115 = 0;
	bool bLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	char* sLocal_126 = NULL;
	char* sLocal_127 = NULL;
	char* sLocal_128 = NULL;
	char* sLocal_129 = NULL;
	vector3 vLocal_130 = { 0f, 0f, 0f };
	vector3 vLocal_131 = { 0f, 0f, 0f };
	int iLocal_132 = 0;
	vector3 vLocal_133 = { 0f, 0f, 0f };
	vector3 vLocal_134 = { 0f, 0f, 0f };
	vector3 vLocal_135 = { 0f, 0f, 0f };
	vector3 vLocal_136 = { 0f, 0f, 0f };
	int iLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = -1;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 1000;
	var uLocal_148 = 1000;
	var uLocal_149 = 0;
	bool bLocal_150 = 0;
	struct<18> Local_151 = { 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5 } ;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	vector3 vVar0;
	int iVar1;
	
	iLocal_3 = 3;
	iLocal_4 = 1;
	iLocal_5 = 134;
	iLocal_6 = 134;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 1;
	iLocal_10 = 134;
	iLocal_11 = 1;
	iLocal_12 = 12;
	iLocal_13 = 12;
	fLocal_16 = 0.001f;
	iLocal_19 = -1;
	sLocal_20 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_41 = 1;
	iLocal_42 = 65;
	iLocal_43 = 49;
	iLocal_44 = 64;
	fLocal_52 = 10f;
	fLocal_53 = 7f;
	iLocal_54 = 1;
	sLocal_80 = "random@car_thief@waving_ig_1";
	fLocal_99 = 1f;
	iLocal_119 = 786603;
	iLocal_120 = 786469;
	sLocal_127 = "car_returned_peyote";
	sLocal_128 = "girl_car_returned";
	sLocal_129 = "player_car_returned";
	vLocal_50 = { ScriptParam_151.f_1[0 /*3*/] };
	fLocal_51 = ScriptParam_151.f_11[0];
	if (unk_0xE8A79675302ED812(11))
	{
		func_230();
	}
	func_229();
	if (iLocal_121 == 2)
	{
		if (func_228(34))
		{
			unk_0x95E4B6F3ED223F5A();
		}
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			if (!unk_0x62083F80FA40AAD2(unk_0xBC25C936A095B5BA()))
			{
				vVar0 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
				if (vVar0.z > 23f || unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -743.3924f, -2129.82f, 12.07619f, -708.892f, -2160.705f, 19.7035f, 124.5f, 0, true, 0))
				{
					unk_0x95E4B6F3ED223F5A();
				}
			}
		}
	}
	if (func_187(vLocal_50, 17, iLocal_121, 0, 0))
	{
		func_184(-1);
	}
	else
	{
		unk_0x95E4B6F3ED223F5A();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		func_183();
		func_182(iLocal_59, &uLocal_62);
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			unk_0x5D99F519B8411DB6(unk_0xB5CEFD608600A09F());
		}
		func_181();
		if (!func_180())
		{
			if (func_179())
			{
				func_230();
			}
			if (unk_0x684B06333594F9EA())
			{
				switch (iLocal_46)
				{
					case 0:
						if (func_162())
						{
							unk_0x6E52C7765A0F4382(0);
							iLocal_46 = 1;
						}
						break;
					
					case 1:
						if (!unk_0x36CEFBE9B745A58D(iLocal_72))
						{
							if (((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !unk_0x36CEFBE9B745A58D(iLocal_71)) && func_161(iLocal_73)) && !func_160(0))
							{
								if (func_159())
								{
									if (func_161(iLocal_76))
									{
										unk_0xE82050D41B744FF3(iLocal_76, false);
									}
									func_150(1);
									unk_0xDF53A66AEE1401AA(0.1f);
									func_145(39, 1);
									func_145(40, 1);
									func_145(41, 1);
									func_145(42, 1);
									func_145(43, 1);
									func_145(44, 1);
									SYSTEM::SETTIMERA(0);
								}
							}
							else
							{
								if (!unk_0x36CEFBE9B745A58D(iLocal_71))
								{
									unk_0x5558ED6D4A2DEC93(iLocal_71, unk_0xBC25C936A095B5BA(), 150f, -1, 0, 0);
									unk_0x22321800954A532E(iLocal_71, true);
									SYSTEM::WAIT(0);
								}
								func_230();
							}
						}
						else
						{
							if (!unk_0x36CEFBE9B745A58D(iLocal_71) && func_161(iLocal_73))
							{
								unk_0x204BA7B1C7DD25F4(iLocal_71, iLocal_73, 20f, iLocal_119);
								unk_0x22321800954A532E(iLocal_71, true);
								SYSTEM::WAIT(0);
							}
							func_113(0);
						}
						break;
				}
			}
			else
			{
				func_230();
			}
		}
		else
		{
			if (unk_0x36CEFBE9B745A58D(iLocal_72))
			{
				if (Local_102[2 /*10*/].f_7)
				{
					func_112(&Local_102, 2);
				}
			}
			unk_0x6A095EC1C9AF12A4(unk_0xB5CEFD608600A09F());
			func_104();
			if (func_161(iLocal_73) && !func_103())
			{
				if (func_101())
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_71))
					{
						switch (iLocal_47)
						{
							case 0:
								if (!unk_0x36CEFBE9B745A58D(iLocal_72))
								{
									if (unk_0x62F3A07C43FFB568(iLocal_72, iLocal_73, 0))
									{
										if (iLocal_121 == 2)
										{
											unk_0xB71D41C0310C93DE(iLocal_72, true, 1);
											unk_0xB71D41C0310C93DE(iLocal_73, true, 1);
											unk_0xC5A6DFE2B8987B17(&iLocal_74);
											unk_0x1A06AE15BF21D407(0, iLocal_73, unk_0xBC25C936A095B5BA(), 8, 30f, iLocal_120, 200f, 10f, 0);
											unk_0x535008C596714F9E(iLocal_74);
											unk_0xA8E6405305C0D7DF(iLocal_72, iLocal_74);
											unk_0x02DAF06EA4F08219(&iLocal_74);
										}
										else
										{
											unk_0xB71D41C0310C93DE(iLocal_72, true, 1);
											unk_0xC5A6DFE2B8987B17(&iLocal_74);
											unk_0x194CCBD594974E0D(0, iLocal_73, 30, 1000);
											unk_0x1A06AE15BF21D407(0, iLocal_73, unk_0xBC25C936A095B5BA(), 8, 40f, iLocal_120, 200f, 10f, 1);
											unk_0x535008C596714F9E(iLocal_74);
											unk_0xA8E6405305C0D7DF(iLocal_72, iLocal_74);
											unk_0x02DAF06EA4F08219(&iLocal_74);
										}
										vLocal_133 = { unk_0x3EA3A28A85F8C32F(iLocal_73, unk_0xB5B60A04E1654409(iLocal_73, "wheel_lr")) };
										vLocal_134 = { unk_0x1483995DFFF0DEEA(iLocal_73, vLocal_133) };
										unk_0xF3E9344C2BE59F6E("scr_wheel_burnout", iLocal_73, vLocal_134 + Vector(-0.5f, -1f, 0f), 0f, 180f, 0f, 0.25f, 0, 0, 0);
										vLocal_135 = { unk_0x3EA3A28A85F8C32F(iLocal_73, unk_0xB5B60A04E1654409(iLocal_73, "wheel_rr")) };
										vLocal_136 = { unk_0x1483995DFFF0DEEA(iLocal_73, vLocal_135) };
										unk_0xF3E9344C2BE59F6E("scr_wheel_burnout", iLocal_73, vLocal_136 + Vector(-0.5f, -1f, 0f), 0f, 180f, 0f, 0.25f, 0, 0, 0);
										SYSTEM::SETTIMERA(0);
										if (!unk_0x2DA8CA50A72528FB(iLocal_60))
										{
											iLocal_60 = func_99(iLocal_73, 1, 0);
										}
										unk_0xAF0732277B825027(2);
										iLocal_47 = 1;
									}
									else if (unk_0xD9C1758D86688CEA(iLocal_73, unk_0xBC25C936A095B5BA(), 1))
									{
										if (!unk_0x36CEFBE9B745A58D(iLocal_72))
										{
											unk_0x5558ED6D4A2DEC93(iLocal_72, unk_0xBC25C936A095B5BA(), 150f, -1, 0, 0);
											unk_0x22321800954A532E(iLocal_72, true);
											SYSTEM::WAIT(0);
										}
										func_230();
									}
								}
								else
								{
									unk_0x204BA7B1C7DD25F4(iLocal_71, iLocal_73, 20f, iLocal_119);
									unk_0x22321800954A532E(iLocal_71, true);
									SYSTEM::WAIT(0);
									func_113(0);
								}
								break;
							
							case 1:
								if (func_161(iLocal_73))
								{
									if (iLocal_121 == 1)
									{
										if (SYSTEM::TIMERA() < 5000)
										{
											if (SYSTEM::TIMERA() > 2000)
											{
												fLocal_99 = (fLocal_99 + 0.4f);
											}
											else
											{
												fLocal_99 = (fLocal_99 + 0.2f);
											}
											if (fLocal_99 > 30f)
											{
												fLocal_99 = 30f;
											}
											unk_0xA4DFFFD5B234240D(iLocal_73, fLocal_99);
											iVar1 = unk_0x39827CF9BEAB804C(unk_0x541C2AEF053615BC(iLocal_73, true), 5f, 0, 4);
											if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
											{
												if (func_161(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)))
												{
													if (unk_0xE921F8171F0733B3(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), iLocal_73))
													{
														SYSTEM::SETTIMERA(5000);
													}
												}
												if (func_161(iVar1))
												{
													if (iVar1 != iLocal_73)
													{
														if (unk_0xE921F8171F0733B3(iVar1, iLocal_73))
														{
															SYSTEM::SETTIMERA(5000);
														}
													}
												}
											}
										}
									}
									if (unk_0xA6EB9CEADFB819EC(iLocal_73) < 700f)
									{
										func_230();
									}
								}
								func_68();
								if ((((((func_67() || func_66()) || unk_0x8730A01B72F31307(iLocal_73)) || unk_0xBCDD4514E5CAE591(iLocal_73, 1, 5000)) || unk_0x7544D2465B934445(iLocal_73)) || unk_0x36CEFBE9B745A58D(iLocal_72)) || !unk_0x62F3A07C43FFB568(iLocal_72, iLocal_73, 0))
								{
									if (unk_0x144E80F5C46A6B75("RE_CAR_STEAL_SCENE"))
									{
										if (func_161(iLocal_73))
										{
											unk_0x38E412DB4A45B900(iLocal_73, 0);
										}
										unk_0xC1300D0F3A74E20B("RE_CAR_STEAL_SCENE");
									}
									if (unk_0x2DA8CA50A72528FB(iLocal_60))
									{
										unk_0x07B8ECB35A4ED3AC(&iLocal_60);
									}
									func_65();
									if (unk_0x2DA8CA50A72528FB(iLocal_59))
									{
										unk_0x07B8ECB35A4ED3AC(&iLocal_59);
									}
									unk_0x5502708AECB47F5D(iLocal_71);
									unk_0x241D744C1CCBC526(iLocal_73, 50f, 5, 0);
									iLocal_61 = func_99(iLocal_73, 0, 0);
									fLocal_93 = SYSTEM::VDIST(unk_0x541C2AEF053615BC(iLocal_73, true), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true));
									fLocal_91 = SYSTEM::VDIST(unk_0x541C2AEF053615BC(iLocal_73, true), unk_0x541C2AEF053615BC(iLocal_71, true));
									fLocal_92 = SYSTEM::VDIST(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), unk_0x541C2AEF053615BC(iLocal_71, true));
									func_63(&uLocal_138, 0, 0);
									iLocal_47 = 2;
								}
								break;
							
							case 2:
								if (func_161(iLocal_73))
								{
									if (unk_0xA6EB9CEADFB819EC(iLocal_73) < 700f)
									{
										func_230();
									}
								}
								if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0)
								{
									func_230();
								}
								if (!unk_0x1D403DFADBC2DE3C(iLocal_72, 0))
								{
									if (!unk_0x62F3A07C43FFB568(iLocal_72, iLocal_73, 0))
									{
										func_62(iLocal_72, &iLocal_63, -1, 0, 0, 0, -1082130432, 0, -1, -1, 1);
									}
								}
								else
								{
									func_61(&iLocal_63);
								}
								if (!unk_0x36CEFBE9B745A58D(iLocal_72))
								{
									if (!unk_0x8F97799512B006B7(iLocal_72, unk_0xBC25C936A095B5BA()))
									{
										unk_0xB8CBD998685C0685(iLocal_72, unk_0xBC25C936A095B5BA(), 0, 16);
										unk_0x2CA123B0622F495C(unk_0x6F79ECA8C83E4357(iLocal_72));
									}
								}
								if ((SYSTEM::VDIST(unk_0x541C2AEF053615BC(iLocal_73, true), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true)) > (fLocal_93 + 220f) || SYSTEM::VDIST(unk_0x541C2AEF053615BC(iLocal_73, true), unk_0x541C2AEF053615BC(iLocal_71, true)) > (fLocal_91 + 220f)) || SYSTEM::VDIST(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), unk_0x541C2AEF053615BC(iLocal_71, true)) > (fLocal_92 + 220f))
								{
									if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_73, 0))
									{
										func_113(0);
									}
									else
									{
										func_230();
									}
								}
								if (unk_0x2DA8CA50A72528FB(iLocal_61))
								{
									if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_73, 0))
									{
										unk_0x07B8ECB35A4ED3AC(&iLocal_61);
										iLocal_59 = func_57(iLocal_71, 0, 0);
										func_56(&uLocal_62);
										func_63(&uLocal_138, 0, 0);
										if (!iLocal_56)
										{
											if (iLocal_121 == 1)
											{
												vLocal_85 = { -2258.759f, 4274.059f, 45.9166f };
											}
											else if (bLocal_57)
											{
												vLocal_85 = { -483.4162f, -2160.874f, 8.359f };
											}
											else
											{
												vLocal_85 = { -485.9905f, -2153.542f, 8.1999f };
											}
											if (!unk_0x33CC9445B2DF9387(vLocal_85, 2f) && !unk_0xD1DC4B08247A4317(iLocal_71))
											{
												unk_0x641B19E156645A92(iLocal_71, vLocal_85, 1, false, 0, 1);
												unk_0x019CE76D5286C95C(iLocal_71, fLocal_90);
												iLocal_56 = 1;
											}
										}
										iLocal_48 = 3;
										iLocal_124 = unk_0x105601648511CC64();
									}
									else if (unk_0xE642C1AC73CE364E(iLocal_73, iLocal_71, 20f, 20f, 7f, 0, 1, 0))
									{
										func_55();
										if (func_54())
										{
											if (unk_0x2101FAC9A9D4C29D(iLocal_71, iLocal_73, -1, 0, false))
											{
												if (!bLocal_116)
												{
													if (func_44(&Local_102, cLocal_114, sLocal_110, 4, 0, 0, 0))
													{
													}
												}
												unk_0x204BA7B1C7DD25F4(iLocal_71, iLocal_73, 35f, iLocal_119);
												unk_0x22321800954A532E(iLocal_71, true);
												func_113(1);
											}
										}
									}
								}
								else if (unk_0x2DA8CA50A72528FB(iLocal_59))
								{
									if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_73, 0))
									{
										if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_71, fLocal_52, fLocal_52, fLocal_52, 0, 1, 0))
										{
											if (func_43(1, 0, 1))
											{
												unk_0x07B8ECB35A4ED3AC(&iLocal_59);
												if (iLocal_121 == 1)
												{
													if (func_42(unk_0x349C94FFF43E2979(iLocal_73), 336f, 90f))
													{
														sLocal_126 = "RANDOM@CAR_THEFT_1@MCS_2";
													}
													else
													{
														sLocal_126 = "RANDOM@CAR_THEFT_1@MCS_2";
													}
												}
												else
												{
													sLocal_126 = "RANDOM@CAR_THEFT_1@MCS_3";
												}
												unk_0x522053D86D6E1C7A(sLocal_126);
												iLocal_48 = 4;
												iLocal_47 = 3;
											}
										}
										else
										{
											func_40(unk_0x541C2AEF053615BC(iLocal_71, true), &fLocal_52, &fLocal_53);
										}
									}
									else
									{
										unk_0x07B8ECB35A4ED3AC(&iLocal_59);
										iLocal_61 = func_99(iLocal_73, 0, 0);
										iLocal_48 = 0;
									}
								}
								break;
							
							case 3:
								if (iLocal_121 == 1)
								{
									if (func_4())
									{
										if (func_3(iLocal_71))
										{
											unk_0x2E9860A2B72187F5(iLocal_71, 310, true);
										}
										func_113(1);
									}
								}
								else if (func_4())
								{
									if (func_3(iLocal_71))
									{
										unk_0x2E9860A2B72187F5(iLocal_71, 310, true);
									}
									func_113(1);
								}
								break;
						}
					}
					else
					{
						if (!unk_0x36CEFBE9B745A58D(iLocal_72))
						{
							if (unk_0x62F3A07C43FFB568(iLocal_72, iLocal_73, 0))
							{
								unk_0x1A06AE15BF21D407(iLocal_72, iLocal_73, unk_0xBC25C936A095B5BA(), 8, 50f, iLocal_120, 10f, 10f, 0);
								unk_0x22321800954A532E(iLocal_72, true);
								unk_0x2CA123B0622F495C(unk_0x6F79ECA8C83E4357(iLocal_72));
							}
							else
							{
								unk_0x5558ED6D4A2DEC93(iLocal_72, unk_0xBC25C936A095B5BA(), 150f, -1, 0, 0);
								unk_0x22321800954A532E(iLocal_72, true);
								unk_0x2CA123B0622F495C(unk_0x6F79ECA8C83E4357(iLocal_72));
							}
						}
						SYSTEM::WAIT(0);
						func_230();
					}
				}
				else
				{
					if (iLocal_47 == 1)
					{
						if (func_161(iLocal_73))
						{
							unk_0xCF6040807CC0E4A5(&iLocal_73);
						}
						if (!unk_0x36CEFBE9B745A58D(iLocal_72))
						{
							unk_0xF845620A03C7425B(&iLocal_72);
						}
					}
					if (!unk_0x36CEFBE9B745A58D(iLocal_71))
					{
						if (unk_0x96044E39418AAF17(iLocal_71, sLocal_79, "agitated_idle_a", 3))
						{
							unk_0x448CBB54998E5DCE(iLocal_71, "waiting", sLocal_79, -2f);
						}
						func_1(iLocal_71, "GENERIC_CURSE_HIGH", 24);
						unk_0xC5A6DFE2B8987B17(&iLocal_74);
						unk_0xDF14F570C0180463(0, vLocal_88, 1f, 20000, 1193033728, 0.5f);
						unk_0xA3A7138EAD2268A0(0, "WORLD_HUMAN_STAND_MOBILE", 0, 0);
						unk_0x535008C596714F9E(iLocal_74);
						unk_0xA8E6405305C0D7DF(iLocal_71, iLocal_74);
						unk_0x02DAF06EA4F08219(&iLocal_74);
					}
					func_230();
				}
			}
			else
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_72))
				{
					unk_0x5558ED6D4A2DEC93(iLocal_72, unk_0xBC25C936A095B5BA(), 150f, -1, 0, 0);
					unk_0x22321800954A532E(iLocal_72, true);
				}
				if (unk_0x724D816EA203A79E(iLocal_73))
				{
					unk_0xE6E403909F4BF47F(iLocal_73, 50f);
				}
				func_230();
			}
		}
	}
}

void func_1(int iParam0, char* sParam1, int iParam2)//Position - 0xB85
{
	unk_0x53D8178763EDCE60(iParam0, sParam1, func_2(iParam2), 1);
}

int func_2(int iParam0)//Position - 0xB9C
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

int func_3(int iParam0)//Position - 0xD91
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

int func_4()//Position - 0xDB2
{
	vector3 vVar0;
	char* sVar1;
	vector3 vVar2;
	float fVar3;
	
	sVar1 = "chassis";
	func_55();
	if (((!unk_0x36CEFBE9B745A58D(iLocal_71) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA())) && func_161(iLocal_73)) && unk_0xF9E082857622D91E(sLocal_126))
	{
		switch (iLocal_49)
		{
			case 0:
				if (unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()))
				{
					if (func_43(1, 0, 1))
					{
						if (!unk_0xFA30DFD0084E92FE(Global_93B, 11))
						{
							if (!unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()))
							{
								func_32(1, 1, 1, 0, 0);
								if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
								{
									unk_0x7456702622C62EA0(1);
									while (!func_30(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), fLocal_53, 1, 1056964608, 0, 1, 0))
									{
										unk_0xDE7B9CB38D019BF0();
										SYSTEM::WAIT(0);
									}
									func_30(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), fLocal_53, 0, 1056964608, 0, 1, 0);
								}
								unk_0xDE7B9CB38D019BF0();
								if (!unk_0x36CEFBE9B745A58D(iLocal_71))
								{
									unk_0xF1FC2182A76AD7FC(iLocal_71, 0);
								}
								func_28();
								func_23(0);
								unk_0xDE7B9CB38D019BF0();
								iLocal_49 = 1;
							}
						}
					}
				}
				break;
			
			case 1:
				unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 0);
				unk_0x1E6686599BFBEC90(iLocal_73, 0, 0, 0f);
				unk_0x4AAC154DDE9D031F(iLocal_73, 0, 1, 1, 1);
				unk_0xDE7B9CB38D019BF0();
				if (iLocal_121 == 1)
				{
					if (func_161(iLocal_73))
					{
						if (func_42(unk_0x349C94FFF43E2979(iLocal_73), 336f, 90f))
						{
							vLocal_84 = { -2254.3f, 4273.361f, 44.9697f };
							fLocal_89 = 336.6557f;
							vLocal_83 = { -2252.683f, 4274.16f, 45.0612f };
							vLocal_85 = { -2257.825f, 4269.189f, 44.6334f };
							fLocal_90 = 272.8688f;
							vLocal_97 = { -2254.588f, 4277.307f, 45.6133f };
							vLocal_98 = { 6.6248f, 0.0369f, 179.5595f };
						}
						else
						{
							vLocal_84 = { -2254.223f, 4272.33f, 44.9193f };
							fLocal_89 = 148.0287f;
							vLocal_85 = { -2255.733f, 4271.32f, 44.8166f };
							fLocal_90 = 179.4774f;
							vLocal_83 = { -2257.088f, 4268.938f, 44.6456f };
							vLocal_97 = { -2255.775f, 4274.144f, 46.0666f };
							vLocal_98 = { 2.8781f, 0.3464f, -146.6097f };
						}
					}
					vVar2 = { -2269.34f, 4279.89f, 45.47f };
					fVar3 = 53.23f;
					fLocal_96 = 50f;
					unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), vLocal_83, 1, false, 0, 1);
					unk_0x8E25082A46F87892(unk_0xBC25C936A095B5BA(), joaat("weapon_unarmed"), true);
					unk_0x641B19E156645A92(iLocal_71, vLocal_85, 1, false, 0, 1);
					unk_0x019CE76D5286C95C(iLocal_73, fLocal_89);
					unk_0x641B19E156645A92(iLocal_73, vLocal_84, 1, false, 0, 1);
				}
				else
				{
					if (!func_42(unk_0x349C94FFF43E2979(iLocal_73), 64.6764f, 90f))
					{
						vLocal_97 = { -478.7095f, -2163.598f, 10.3091f };
						vLocal_98 = { -7.4391f, 0.0006f, 35.6865f };
						vLocal_84 = { -484.9581f, -2155.266f, 8.248f };
						fLocal_89 = 243.308f;
						fLocal_96 = 22f;
					}
					else
					{
						vLocal_97 = { -488.0143f, -2149.419f, 9.9817f };
						vLocal_98 = { -11.7475f, 0.0006f, -145.0045f };
						vLocal_84 = { -484.3195f, -2154.188f, 8.2182f };
						fLocal_89 = 64.6764f;
						fLocal_96 = 36.9289f;
					}
					vVar2 = { -486.92f, -2169.01f, 8.89f };
					fVar3 = 63.1f;
					unk_0x641B19E156645A92(iLocal_73, vLocal_84, 1, false, 0, 1);
					unk_0x8E25082A46F87892(unk_0xBC25C936A095B5BA(), joaat("weapon_unarmed"), true);
					unk_0x019CE76D5286C95C(iLocal_73, fLocal_89);
				}
				unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 0, 0);
				if (func_161(iLocal_73))
				{
					unk_0xF0A40F19AAB79E88(iLocal_73, 1084227584);
					if (unk_0x724D816EA203A79E(iLocal_72))
					{
						if (unk_0x62F3A07C43FFB568(iLocal_72, iLocal_73, 0))
						{
							unk_0xF845620A03C7425B(&iLocal_72);
						}
					}
				}
				vLocal_130 = { 0f, 0f, 0f };
				vLocal_131 = { 0f, 0f, 0f };
				iLocal_122 = unk_0xD0D858E538FD01C3(vLocal_130, vLocal_131, 2);
				unk_0x510CBEAEC917268A(iLocal_122, iLocal_73, unk_0xB5B60A04E1654409(iLocal_73, sVar1));
				unk_0x9DA167FE68B804E2(iLocal_122, vLocal_130, vLocal_131, 2);
				unk_0xB62398E536F695FC(iLocal_71, iLocal_122, sLocal_126, sLocal_128, 1000f, -2f, 0, 0, 1148846080, 0);
				unk_0xB62398E536F695FC(unk_0xBC25C936A095B5BA(), iLocal_122, sLocal_126, sLocal_129, 1000f, -2f, 1024, 0, 1148846080, 0);
				iLocal_75 = unk_0x6B8F797EEC7B95E2("DEFAULT_ANIMATED_CAMERA", vLocal_97, vLocal_98, fLocal_96, 0, 2);
				unk_0xA4DB448107C6D171(iLocal_75, iLocal_122, "car_returned_cam", sLocal_126);
				unk_0x1F000DD52A4C4208(iLocal_73, sLocal_127, sLocal_126, 1000f, false, 0, 0, 0, 262144);
				vLocal_130 = { unk_0x541C2AEF053615BC(iLocal_73, true) };
				vLocal_131 = { unk_0xD7490CDEF40F3DA2(iLocal_73, 2) };
				if (func_161(iLocal_76))
				{
					if (func_22(iLocal_76, vLocal_84, 1) <= 11f)
					{
						unk_0x641B19E156645A92(iLocal_76, vVar2, 1, false, 0, 1);
						unk_0x019CE76D5286C95C(iLocal_76, fVar3);
						unk_0xF0A40F19AAB79E88(iLocal_76, 1084227584);
						unk_0x77815D3407C6700D(iLocal_76, true, 0);
					}
				}
				unk_0x6C5F5B5F6894CCE3(vLocal_84, 10f, 1, 0, 0, false);
				SYSTEM::SETTIMERA(0);
				if (iLocal_121 == 2)
				{
					unk_0x3B6B082832176FA5(joaat("rocoto"), 15);
				}
				else
				{
					unk_0x3B6B082832176FA5(joaat("peyote"), 15);
				}
				unk_0x7A71B0C6DDC0D7DA(vLocal_84, 15f);
				unk_0x348665177DBFB93B(iLocal_75, true);
				unk_0x062C9995BFD27B2A(true, false, 3000, 1, 0, 0);
				iLocal_49 = 3;
				unk_0xE1F4DF3B8A6E8B8F(1f);
				break;
			
			case 3:
				unk_0xDE7B9CB38D019BF0();
				if (func_19())
				{
					iLocal_49 = 4;
				}
				if (iLocal_121 == 1)
				{
					if (SYSTEM::TIMERA() > 1500 && !bLocal_150)
					{
						if (func_44(&Local_102, cLocal_114, sLocal_101, 4, 0, 0, 0))
						{
							iLocal_49 = 4;
						}
					}
				}
				else if (unk_0x77FC50899603581D(iLocal_122) && !bLocal_150)
				{
					if (unk_0x8FD30584EB38411B(iLocal_122) >= 0.2f)
					{
						if (func_44(&Local_102, cLocal_114, sLocal_101, 4, 0, 0, 0))
						{
							iLocal_58 = 0;
							iLocal_49 = 4;
						}
					}
				}
				unk_0xE1F4DF3B8A6E8B8F(1f);
				break;
			
			case 4:
				unk_0xDE7B9CB38D019BF0();
				if (iLocal_121 == 2)
				{
					if (!func_18())
					{
						if (iLocal_58 == 0)
						{
							if (func_44(&Local_102, cLocal_114, "RECT2_REWARD", 4, 0, 0, 0))
							{
								iLocal_58 = 1;
							}
						}
					}
				}
				unk_0xE1F4DF3B8A6E8B8F(1f);
				if (iLocal_121 == 1)
				{
					if (unk_0x77FC50899603581D(iLocal_122))
					{
						if (iLocal_132 == 0)
						{
							if (unk_0x8FD30584EB38411B(iLocal_122) >= 0.83f)
							{
								unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
								unk_0xE896C0AD02364F2A(unk_0xBC25C936A095B5BA(), sLocal_126, sLocal_129, 1000f, -2f, -1, 1048576, unk_0x8FD30584EB38411B(iLocal_122), 0, 0, 0);
								unk_0x2EB4D46478766D87(unk_0xBC25C936A095B5BA(), 1, 0);
								iLocal_132 = 1;
							}
						}
						if (!unk_0x36CEFBE9B745A58D(iLocal_71))
						{
							if (unk_0x8FD30584EB38411B(iLocal_122) >= 0.83f)
							{
								if (unk_0x96044E39418AAF17(iLocal_71, sLocal_126, sLocal_128, 2))
								{
									unk_0x6C3BE67B02D72CDC(iLocal_71, -1000f, 0);
									if (!unk_0x5237AF95232D78C5(iLocal_71, 0))
									{
										if (func_161(iLocal_73))
										{
											unk_0xBD53A029D0155A42(iLocal_71, iLocal_73, -1);
											unk_0x2E9860A2B72187F5(iLocal_71, 310, true);
										}
									}
									unk_0x2EB4D46478766D87(iLocal_71, 1, 0);
								}
								else
								{
									unk_0x2E9860A2B72187F5(iLocal_71, 310, true);
								}
							}
						}
					}
				}
				else if (unk_0x77FC50899603581D(iLocal_122))
				{
					if (iLocal_132 == 0)
					{
						if (unk_0x8FD30584EB38411B(iLocal_122) >= 0.86f)
						{
							unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
							unk_0xE896C0AD02364F2A(unk_0xBC25C936A095B5BA(), sLocal_126, sLocal_129, 1000f, -2f, -1, 1048576, unk_0x8FD30584EB38411B(iLocal_122), 0, 0, 0);
							unk_0x2EB4D46478766D87(unk_0xBC25C936A095B5BA(), 1, 0);
							iLocal_132 = 1;
						}
					}
					if (!unk_0x36CEFBE9B745A58D(iLocal_71))
					{
						if (unk_0x8FD30584EB38411B(iLocal_122) > 0.847f)
						{
							if (unk_0x96044E39418AAF17(iLocal_71, sLocal_126, sLocal_128, 2))
							{
								unk_0x6C3BE67B02D72CDC(iLocal_71, -1000f, 0);
								if (!unk_0x5237AF95232D78C5(iLocal_71, 0))
								{
									if (func_161(iLocal_73))
									{
										unk_0xBD53A029D0155A42(iLocal_71, iLocal_73, -1);
										unk_0x2E9860A2B72187F5(iLocal_71, 310, true);
									}
								}
								unk_0x2EB4D46478766D87(iLocal_71, 1, 0);
							}
							else
							{
								unk_0x2E9860A2B72187F5(iLocal_71, 310, true);
							}
						}
					}
				}
				if (((unk_0x77FC50899603581D(iLocal_122) && unk_0x8FD30584EB38411B(iLocal_122) >= 0.99f) || !unk_0x77FC50899603581D(iLocal_122)) || func_19())
				{
					if (!unk_0x1D403DFADBC2DE3C(iLocal_73, 0) && unk_0x96044E39418AAF17(iLocal_73, sLocal_126, sLocal_127, 3))
					{
						unk_0x68567B14F012CF3E(iLocal_73, sLocal_126, sLocal_127, 1f);
					}
					if (unk_0x77FC50899603581D(iLocal_122))
					{
						unk_0x0BD2283F2F727F2C(iLocal_122, 1f);
					}
					if (bLocal_150)
					{
						vVar0 = { unk_0x883FF674F22D1F7C(sLocal_126, sLocal_129, vLocal_130, vLocal_131, 1f, 2) };
						unk_0x2084D4C6C2DF616F(vVar0, &(vVar0.f_2), 0, 0);
						unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), vVar0, 1, false, 0, 1);
						vVar0 = { unk_0xBFDD14D0A09BE0FA(sLocal_126, sLocal_129, vLocal_130, vLocal_131, 1f, 2) };
						unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), vVar0.z);
						unk_0x2B9AEC08E469E384(0f, 1065353216);
						unk_0xF3F01A78937DC905(0f);
					}
					unk_0x3E2B7D349B5735D3(unk_0xBC25C936A095B5BA(), -1871534317, true, 0, 1);
					if (!unk_0x5237AF95232D78C5(iLocal_71, 0))
					{
						if (func_161(iLocal_73))
						{
							unk_0xBD53A029D0155A42(iLocal_71, iLocal_73, -1);
							unk_0x2E9860A2B72187F5(iLocal_71, 310, true);
						}
					}
					if (!unk_0x36CEFBE9B745A58D(iLocal_71))
					{
						if (unk_0x5237AF95232D78C5(iLocal_71, 0))
						{
							if (func_161(iLocal_73))
							{
								unk_0x1E6686599BFBEC90(iLocal_73, 0, 0, 0f);
								unk_0x4AAC154DDE9D031F(iLocal_73, 0, 1, 1, 1);
								iLocal_125 = unk_0x105601648511CC64();
								iLocal_49 = 5;
							}
						}
					}
				}
				break;
			
			case 5:
				unk_0xDE7B9CB38D019BF0();
				if ((unk_0x105601648511CC64() - iLocal_125) > 100)
				{
					if (func_3(iLocal_71) && func_161(iLocal_73))
					{
						unk_0xC5A6DFE2B8987B17(&iLocal_74);
						unk_0x194CCBD594974E0D(0, iLocal_73, 9, 1000);
						unk_0x204BA7B1C7DD25F4(0, iLocal_73, 25f, iLocal_119);
						unk_0x535008C596714F9E(iLocal_74);
						unk_0xA8E6405305C0D7DF(iLocal_71, iLocal_74);
						unk_0x02DAF06EA4F08219(&iLocal_74);
						unk_0x2E9860A2B72187F5(iLocal_71, 310, true);
					}
					func_32(0, 1, 1, 0, 0);
					if (bLocal_150)
					{
						if (unk_0xEF0E25DA0CB6E8FF(iLocal_75))
						{
							unk_0x348665177DBFB93B(iLocal_75, false);
							unk_0x4EC087603E1DEF9C(iLocal_75, 0);
						}
						unk_0x062C9995BFD27B2A(false, false, 3000, 1, 0, 0);
						SYSTEM::WAIT(750);
						unk_0x2B9AEC08E469E384(0f, 1065353216);
						unk_0xF3F01A78937DC905(0f);
						func_17(500, 1);
					}
					else
					{
						unk_0x9CB4DD3D88846081(0, 0, 3, 0);
						unk_0x348665177DBFB93B(iLocal_75, false);
					}
					unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
					func_16(&iLocal_73);
					func_5(func_10(), 4, 5);
					return 1;
				}
				else if (func_3(iLocal_71))
				{
					unk_0x2E9860A2B72187F5(iLocal_71, 310, true);
				}
				break;
			}
	}
	return 0;
}

void func_5(int iParam0, int iParam1, int iParam2)//Position - 0x17C3
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_19B04.f_932.f_21B.f_8B3[iParam1 /*4*/][iParam0] = (Global_19B04.f_932.f_21B.f_8B3[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 8804;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				
				case 3:
					iVar1 = 74;
					break;
				
				case 2:
					iVar1 = 73;
					break;
				
				case 4:
					iVar1 = 75;
					break;
				
				case 5:
					iVar1 = 76;
					break;
				
				case 6:
					iVar1 = 77;
					break;
				
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 8804)
			{
				iVar0 = func_9(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_6(iVar1, iVar0, -1, 1, 0);
			}
			break;
	}
}

void func_6(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x18B3
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_7(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, iParam3);
	}
}

int func_7(var uParam0)//Position - 0x18E3
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_8();
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

int func_8()//Position - 0x1917
{
	return Global_1407E0;
}

int func_9(int iParam0, int iParam1, int iParam2)//Position - 0x1923
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_7(iParam1)];
	if (unk_0x6CB99B97664C3727(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_10()//Position - 0x1955
{
	func_11();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_11()//Position - 0x196E
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_15(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_14(unk_0xBC25C936A095B5BA());
			if (func_13(iVar0) && (!func_12(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_13(Global_19B04.f_932.f_21B.f_10CD))
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

bool func_12(int iParam0)//Position - 0x1A6B
{
	return Global_8C41 == iParam0;
}

bool func_13(int iParam0)//Position - 0x1A79
{
	return iParam0 < 3;
}

int func_14(int iParam0)//Position - 0x1A85
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_15(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_15(int iParam0)//Position - 0x1AC2
{
	if (func_13(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_16(int iParam0)//Position - 0x1AEC
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

void func_17(int iParam0, bool bParam1)//Position - 0x1B24
{
	if (unk_0x17FAADF9916EF741() || unk_0x422F9EDE839E6ABB())
	{
		if (!unk_0x26641E1BFD792DBC())
		{
			unk_0x829FA4611BD56B44(iParam0);
		}
	}
	if (bParam1)
	{
		while (!unk_0x726D9204B160D23E())
		{
			SYSTEM::WAIT(0);
		}
	}
}

int func_18()//Position - 0x1B60
{
	if (Global_3DB8 != 0 || unk_0xE6711F601F11B66B())
	{
		return 1;
	}
	return 0;
}

int func_19()//Position - 0x1B82
{
	int iVar0;
	
	iVar0 = joaat("peyote");
	if (iLocal_121 == 2)
	{
		iVar0 = joaat("rocoto");
	}
	if (func_20(1000))
	{
		if (unk_0x317B2443006524C2(iVar0))
		{
			unk_0x348665177DBFB93B(iLocal_75, false);
			unk_0x7A41D32A383895D8(500);
			while (unk_0x422F9EDE839E6ABB())
			{
				unk_0xDE7B9CB38D019BF0();
				SYSTEM::WAIT(0);
			}
			bLocal_150 = true;
			return 1;
		}
	}
	if (unk_0x17FAADF9916EF741())
	{
		if (unk_0x317B2443006524C2(iVar0))
		{
			bLocal_150 = true;
			return 1;
		}
	}
	return 0;
}

int func_20(int iParam0)//Position - 0x1BF4
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
			if (func_21())
			{
				Global_1B = unk_0x105601648511CC64();
				return 1;
			}
		}
	}
	return 0;
}

int func_21()//Position - 0x1C3E
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

float func_22(int iParam0, vector3 vParam1, bool bParam2)//Position - 0x1C70
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

void func_23(int iParam0)//Position - 0x1CAA
{
	if (!Global_389D.f_1 == 1)
	{
		if (func_27(0))
		{
			func_24(iParam0);
		}
		unk_0xF0059F27F7BB6680(&Global_93C, 2);
	}
}

void func_24(int iParam0)//Position - 0x1CD3
{
	if (Global_3943)
	{
		func_26(0, 0);
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
	if (!func_25())
	{
		Global_389D.f_1 = 3;
	}
}

int func_25()//Position - 0x1D43
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_26(bool bParam0, bool bParam1)//Position - 0x1D6A
{
	if (bParam0)
	{
		if (func_27(0))
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

int func_27(int iParam0)//Position - 0x1DDE
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

void func_28()//Position - 0x1E38
{
	Global_394A = 0;
	func_29();
}

void func_29()//Position - 0x1E48
{
	unk_0x5C7DC611411E2CF9();
	Global_41AB = 0;
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x1E08809A5041F85B(false);
		Global_3DB8 = 6;
	}
}

int func_30(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x1E69
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
	func_31(iParam0);
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

void func_31(int iParam0)//Position - 0x1FF8
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

void func_32(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x2024
{
	if (bParam0)
	{
		unk_0x0D2E9062E966BE4F(unk_0xB5CEFD608600A09F());
		unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 1);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 1);
		func_39(1);
		unk_0x32FF237D69EB5489();
		unk_0x3169E2C5E6A096BC();
		if (Global_389D.f_1 > 3)
		{
			if (unk_0x58E7DDFF8D17A82A())
			{
				unk_0x1E08809A5041F85B(false);
			}
			if (!func_25())
			{
				Global_389D.f_1 = 3;
			}
			Global_3DB8 = 5;
		}
		func_38(1, iParam3, iParam2, 0);
		Global_DAA5 = 1;
		Global_10ABB = 1;
		Global_11540 = 1;
	}
	else
	{
		func_39(0);
		unk_0xCB50D125C355ED9C();
		Global_DAA5 = 0;
		if (bParam1)
		{
			unk_0x7FF4F08CAB3344B1();
		}
		unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 0);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 0);
		func_38(0, iParam3, iParam2, 0);
		if (unk_0x7AF0088ABFA713B6())
		{
			if ((((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_36(unk_0xB5CEFD608600A09F())) && !func_34(unk_0xB5CEFD608600A09F(), 0)) && !func_33()) && !bParam4)
			{
				unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), false);
			}
		}
		else if ((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_36(unk_0xB5CEFD608600A09F())) && !bParam4)
		{
			unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), false);
		}
		Global_11540 = 0;
	}
}

bool func_33()//Position - 0x214D
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_27.f_12, 14);
}

bool func_34(int iParam0, int iParam1)//Position - 0x216A
{
	bool bVar0;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		bVar0 = func_35(-1, 0) == 8;
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

int func_35(int iParam0, bool bParam1)//Position - 0x21B5
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_8();
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

int func_36(int iParam0)//Position - 0x21F6
{
	if (func_34(iParam0, 0))
	{
		return 1;
	}
	if (func_37())
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

bool func_37()//Position - 0x2238
{
	return unk_0xFA30DFD0084E92FE(Global_240006, 3);
}

int func_38(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x2249
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

void func_39(int iParam0)//Position - 0x227C
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

void func_40(vector3 vParam0, float fParam1, float fParam2)//Position - 0x229F
{
	bool bVar0;
	vector3 vVar1;
	float fVar2;
	
	bVar0 = false;
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		vVar1 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) - vParam0 };
		fVar2 = unk_0xFDC254CE02DB0919(vVar1.x, vVar1.y);
		if (func_41(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), fVar2, 15f))
		{
			bVar0 = true;
		}
		vVar1 = { vParam0 - unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
		fVar2 = unk_0xFDC254CE02DB0919(vVar1.x, vVar1.y);
		if (func_41(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), fVar2, 15f))
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

int func_41(int iParam0, float fParam1, float fParam2)//Position - 0x23A0
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

int func_42(float fParam0, float fParam1, float fParam2)//Position - 0x2427
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

int func_43(bool bParam0, bool bParam1, bool bParam2)//Position - 0x249C
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

bool func_44(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x2581
{
	func_53(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_45(sParam2, iParam3, 0);
}

int func_45(char* sParam0, int iParam1, bool bParam2)//Position - 0x25CF
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
					func_52();
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
		if (func_51(8, -1))
		{
			return 0;
		}
		Global_3E04 = { Global_3DFE };
		func_50();
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
				func_49();
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
				if (func_48())
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
			if (func_25())
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
			func_47();
			Global_3DC2 = bParam2;
		}
		Global_3DBA = iParam1;
		StringCopy(&Global_3C3B, sParam0, 24);
		Global_394A = 0;
		func_46();
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
		func_52();
	}
	return 0;
}

void func_46()//Position - 0x289B
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

void func_47()//Position - 0x28CD
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

int func_48()//Position - 0x2962
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

void func_49()//Position - 0x29FB
{
	if (func_12(14))
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
		Global_389D = func_10();
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

void func_50()//Position - 0x2A9D
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

bool func_51(int iParam0, int iParam1)//Position - 0x2AF5
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

void func_52()//Position - 0x2B30
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

void func_53(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x2B87
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

int func_54()//Position - 0x2BDD
{
	if (unk_0x36CEFBE9B745A58D(iLocal_72))
	{
		return 1;
	}
	else if (func_161(iLocal_73))
	{
		if (!unk_0xE642C1AC73CE364E(iLocal_72, iLocal_73, 10f, 10f, 10f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_55()//Position - 0x2C21
{
	float fVar0;
	int iVar1;
	bool bVar2;
	
	if (func_161(iLocal_73))
	{
		fVar0 = unk_0x77F5C030D3238E26(iLocal_73);
		if (fVar0 > 0f && fVar0 < 650f)
		{
			bVar2 = true;
		}
		else if (fVar0 > 650f && fVar0 < 950f)
		{
		}
		else
		{
			iVar1 = 1;
		}
		if (iVar1 && unk_0xB5A0FB1DF0C44C2D(iLocal_73))
		{
			sLocal_101 = sLocal_113;
		}
		else if (bVar2)
		{
			sLocal_101 = sLocal_112;
		}
		else
		{
			sLocal_101 = sLocal_111;
		}
	}
}

void func_56(var uParam0)//Position - 0x2C9C
{
	*uParam0 = -99;
}

int func_57(int iParam0, bool bParam1, int iParam2)//Position - 0x2CAA
{
	iParam2 = iParam2;
	return func_58(iParam0, bParam1, 145);
}

int func_58(int iParam0, bool bParam1, int iParam2)//Position - 0x2CC0
{
	int iVar0;
	
	iVar0 = func_59(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x2DA8CA50A72528FB(iVar0)) && unk_0x0F6F4C227FB5DD52(&(Global_19B04.f_6D75[iParam2 /*29*/].f_3)))
	{
		unk_0x436D0272182E484D(iVar0, &(Global_19B04.f_6D75[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_59(int iParam0, bool bParam1, bool bParam2)//Position - 0x2D12
{
	int iVar0;
	
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x511FE22BCF5353CD(iParam0);
	if (unk_0xD27AC0E9B78CFDD7(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(iVar0, func_60(unk_0x7AF0088ABFA713B6(), 1f, 1f));
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
		unk_0x3F5F1772D71D5EC4(iVar0, func_60(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
		unk_0xF9C2945DB5BAB4BF(iVar0, bParam1);
	}
	else if (unk_0xB12D030810E8447D(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(iVar0, func_60(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_60(bool bParam0, float fParam1, float fParam2)//Position - 0x2DB6
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_61(int iParam0)//Position - 0x2DCD
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

int func_62(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x2E3F
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
			iParam1->f_7 = iParam0;
			unk_0x170F151F41735501(iParam0, iParam2);
			unk_0xBC50F5569FE1782F(iParam0, fParam6);
			if (unk_0x2DA8CA50A72528FB(*iParam1))
			{
				unk_0x12DB69036F6569F7(*iParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			unk_0x92AAB9588E601C23(iParam0, iParam9);
		}
		unk_0xD09C169D88640D1B(iParam0, bParam4);
		unk_0x1A3FEAE5BF447BC7(iParam0, iParam5);
		*iParam1 = unk_0x7B2A47C84FD0CB9D(iParam0);
		if (!iParam9 == -1)
		{
			if (unk_0x2DA8CA50A72528FB(*iParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0x0D5352939CC40C16(*iParam1, iParam8);
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
					unk_0x2E02627BEA5751E0(*iParam1);
				}
				unk_0x12DB69036F6569F7(*iParam1, 7);
			}
		}
		if (!unk_0xFA30DFD0084E92FE(iParam1->f_6, 2))
		{
			if (unk_0x2DA8CA50A72528FB(*iParam1))
			{
				unk_0xF0059F27F7BB6680(&(iParam1->f_6), 2);
			}
		}
		if (unk_0x5237AF95232D78C5(iParam0, 0))
		{
			iParam1->f_1 = unk_0x5556F7BFA35E0D94(iParam0);
			if (!unk_0xFA30DFD0084E92FE(iParam1->f_6, 3))
			{
				if (unk_0x2DA8CA50A72528FB(iParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						unk_0x0D5352939CC40C16(iParam1->f_1, iParam8);
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
						unk_0x2E02627BEA5751E0(iParam1->f_1);
					}
					unk_0x12DB69036F6569F7(iParam1->f_1, 7);
					unk_0xF0059F27F7BB6680(&(iParam1->f_6), 3);
				}
			}
			else if (!unk_0x2DA8CA50A72528FB(iParam1->f_1))
			{
				iParam1->f_1 = 0;
				unk_0x7CB6FD92BE491AD9(&(iParam1->f_6), 3);
			}
		}
		else if (unk_0x2DA8CA50A72528FB(iParam1->f_1))
		{
			iParam1->f_1 = 0;
			unk_0x7CB6FD92BE491AD9(&(iParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_63(var uParam0, int iParam1, int iParam2)//Position - 0x3016
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
		if (func_64(uParam0->f_3))
		{
			unk_0x7456702622C62EA0(1);
		}
	}
	if (!unk_0xEAEFBBEC1AEA464B(sVar0))
	{
		if (func_64(sVar0))
		{
			unk_0x7456702622C62EA0(1);
		}
	}
}

int func_64(char* sParam0)//Position - 0x30F3
{
	unk_0xF07D20149ECBC61E(sParam0);
	return unk_0xA66DBDA0A072514A(0);
}

void func_65()//Position - 0x3106
{
	if (!unk_0x36CEFBE9B745A58D(iLocal_72))
	{
		unk_0x91629AC1E1F78419(iLocal_72, 2, false);
		unk_0x91629AC1E1F78419(iLocal_72, 6, false);
		unk_0x91629AC1E1F78419(iLocal_72, 3, true);
		unk_0x91629AC1E1F78419(iLocal_72, 1, false);
		unk_0xB8CBD998685C0685(iLocal_72, unk_0xBC25C936A095B5BA(), 0, 16);
		unk_0x2E35C4FA5F0ED22F(iLocal_72, false);
		unk_0x2CA123B0622F495C(unk_0x6F79ECA8C83E4357(iLocal_72));
	}
	else
	{
		unk_0x2CA123B0622F495C(unk_0x6F79ECA8C83E4357(iLocal_72));
	}
	if (func_161(iLocal_73))
	{
		unk_0xD421BC740C5340C3(iLocal_73, 1);
	}
}

int func_66()//Position - 0x3173
{
	if (func_161(iLocal_73))
	{
		if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_73, 40f, 40f, 10f, 0, 1, 0))
		{
			if (iLocal_77)
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_72))
				{
					if (!iLocal_118)
					{
						if (!unk_0x127812AA6652253F(iLocal_73))
						{
							unk_0x10790F4A9247B707(iLocal_72, unk_0xBC25C936A095B5BA(), 0, 0f, 0f, 0f, 40f, 100, 1, -753768974);
							iLocal_118 = 1;
						}
					}
					if (unk_0x105601648511CC64() > iLocal_123 + 7000)
					{
						if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_73, 20f, 20f, 10f, 0, 1, 0))
						{
							if (func_44(&Local_102, cLocal_114, sLocal_109, 4, 0, 0, 0))
							{
								iLocal_123 = unk_0x105601648511CC64();
							}
						}
					}
					unk_0x5502708AECB47F5D(iLocal_73);
					unk_0xE452BE0597443B80(iLocal_73);
					iLocal_77 = 0;
				}
			}
			if (unk_0xD9C1758D86688CEA(iLocal_73, unk_0xBC25C936A095B5BA(), 1))
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_72))
				{
					func_44(&Local_102, cLocal_114, sLocal_109, 4, 0, 0, 0);
				}
				iLocal_78++;
				iLocal_77 = 1;
			}
			if (iLocal_78 > 10)
			{
				return 1;
			}
		}
		else
		{
			iLocal_118 = 0;
			iLocal_77 = 0;
		}
	}
	return 0;
}

int func_67()//Position - 0x327F
{
	if (func_161(iLocal_73))
	{
		if (((unk_0xE1A8FD31526DD6C8(iLocal_73, 0, 0) || unk_0xE1A8FD31526DD6C8(iLocal_73, 1, 0)) || unk_0xE1A8FD31526DD6C8(iLocal_73, 4, 0)) || unk_0xE1A8FD31526DD6C8(iLocal_73, 5, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_68()//Position - 0x32CA
{
	if (func_161(iLocal_73) && unk_0x2DA8CA50A72528FB(iLocal_60))
	{
		func_69(&uLocal_138, iLocal_73, 0, 0, 1, 1, 1);
	}
}

void func_69(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x32F4
{
	func_70(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_70(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x3311
{
	func_71(uParam0, iParam1, vParam2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_71(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x332F
{
	if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
	{
		func_63(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_72(uParam0, iParam1, vParam2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_72(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x3367
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
	if (func_64(iVar0))
	{
		func_98();
	}
	if (func_97(iParam1) && unk_0x8F6EAC9E7D6812D5(iParam1))
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
			if (func_92(uParam0, bParam5, bParam7, 0))
			{
				func_88(uParam0, iParam1, vParam2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_77(iVar0))
				{
					if ((unk_0xEAEFBBEC1AEA464B(uParam0->f_3) && !unk_0xEAEFBBEC1AEA464B(iVar0)) && unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
					{
						if ((iVar1 && !unk_0xF16DAFF595E80F7C()) && uParam6)
						{
							if (!func_64(iVar0))
							{
								func_76(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x3362CDE8460ED38B("CMN_HINT", iVar0))
								{
									func_75(1);
								}
							}
						}
					}
				}
			}
			else if (func_77(iVar0))
			{
				if (unk_0xEAEFBBEC1AEA464B(uParam0->f_3) && !unk_0xEAEFBBEC1AEA464B(iVar0))
				{
					if (((unk_0xD1DC4B08247A4317(iParam1) && iVar1) && !unk_0xF16DAFF595E80F7C()) && uParam6)
					{
						if (!func_64(iVar0))
						{
							func_76(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x3362CDE8460ED38B("CMN_HINT", iVar0))
							{
								func_75(1);
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
				if (func_64(sParam3))
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
						func_63(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xE3CA72BD77D43B09(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x3D875C2512206692(6) == 3 || unk_0x3D875C2512206692(6) == 4)
					{
						func_63(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x57379381A330B2FF(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x3D875C2512206692(4) == 3 || unk_0x3D875C2512206692(4) == 4)
					{
						func_63(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xD3A0CD3AD9C3D22A(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x3D875C2512206692(5) == 3 || unk_0x3D875C2512206692(5) == 4)
					{
						func_63(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x5CFC8E6CC224744A(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x3D875C2512206692(2) == 3 || unk_0x3D875C2512206692(2) == 4)
					{
						func_63(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x621126C4FACA4770() == 3 || unk_0x621126C4FACA4770() == 4)
				{
					func_63(uParam0, iVar0, 1);
				}
			}
			if (!func_92(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_74(uParam0))
				{
					func_73(uParam0);
				}
			}
		}
	}
	else
	{
		func_63(uParam0, iVar0, 0);
	}
}

void func_73(var uParam0)//Position - 0x36D4
{
	if (func_97(unk_0xBC25C936A095B5BA()))
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

int func_74(var uParam0)//Position - 0x373D
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

int func_75(bool bParam0)//Position - 0x3768
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

void func_76(char* sParam0, int iParam1)//Position - 0x3812
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, true, iParam1);
}

int func_77(char* sParam0)//Position - 0x3829
{
	if (!func_78(1, 1, 0))
	{
		if ((!unk_0xF1734B55490E9045(sParam0) && func_64(sParam0)) || func_64("CMN_HINT"))
		{
			unk_0x7456702622C62EA0(1);
		}
		return 0;
	}
	switch (Global_8C41)
	{
		case 0:
		case 3:
			if (func_75(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_75(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_75(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_78(bool bParam0, bool bParam1, bool bParam2)//Position - 0x38C2
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
	if (func_27(0))
	{
		return 0;
	}
	if (func_87())
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
	if ((func_86() || func_85(Global_440000.f_243FE)) || func_84())
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			iVar1 = func_83(unk_0xBC25C936A095B5BA(), 0);
			if (((unk_0xE8E192A5EFE0253F(iVar0, iVar1) || (unk_0x6F79ECA8C83E4357(iVar0) == 562680400 && iVar1 != -1)) || (unk_0x6F79ECA8C83E4357(iVar0) == 1181327175 && iVar1 != -1)) || (((unk_0x6F79ECA8C83E4357(iVar0) == -1693015116 && iVar1 == 0) && func_82(iVar0, 10)) && unk_0x3EB14CBD49DA0017(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (func_79(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	return 1;
}

int func_79(int iParam0)//Position - 0x3B10
{
	if (iParam0 != func_81())
	{
		if (func_80(iParam0, 1, 1))
		{
			return Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1;
		}
		else if ((Global_140856 && iParam0 == unk_0xB5CEFD608600A09F()) && func_80(iParam0, 1, 0))
		{
			return Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1;
		}
	}
	return 0;
}

int func_80(int iParam0, bool bParam1, bool bParam2)//Position - 0x3B76
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

int func_81()//Position - 0x3BC0
{
	return -1;
}

int func_82(int iParam0, int iParam1)//Position - 0x3BC9
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

int func_83(int iParam0, int iParam1)//Position - 0x3C2B
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

var func_84()//Position - 0x3CB0
{
	return Global_255A46.f_10;
}

bool func_85(int iParam0)//Position - 0x3CBE
{
	return iParam0 == 51;
}

var func_86()//Position - 0x3CCB
{
	return Global_255A46.f_F;
}

bool func_87()//Position - 0x3CD9
{
	return unk_0x105601648511CC64() <= Global_43C1.f_1671 + 100;
}

void func_88(var uParam0, int iParam1, vector3 vParam2, int iParam3)//Position - 0x3CEE
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
		func_63(uParam0, 0, 0);
	}
	if (func_91(vParam2, 0f, 0f, 0f, 0))
	{
		if (unk_0x386592AF38881675(iParam1))
		{
			iVar0 = unk_0x399F7937FFE4DEBF(iParam1);
			if (!unk_0x5237AF95232D78C5(iVar0, 0))
			{
				if (unk_0x15DBD981998D4FE1(iVar0))
				{
					if (!func_89())
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

bool func_89()//Position - 0x3DFE
{
	return func_90(unk_0xB5CEFD608600A09F());
}

int func_90(int iParam0)//Position - 0x3E0E
{
	if (unk_0x6F79ECA8C83E4357(unk_0xA95CF30C72EB526E(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_91(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x3E2D
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_92(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x3E74
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
					if (func_96(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x105601648511CC64();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_95(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x105601648511CC64();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_95(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x105601648511CC64();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_96(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x105601648511CC64();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_74(uParam0))
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
						if (!func_96(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x105601648511CC64();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_95(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x105601648511CC64();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_95(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x105601648511CC64();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_96(bParam1, bParam2, bParam3))
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
					if (!func_96(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_95(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_95(bParam1, bParam2, bParam3) || unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
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
				else if (!func_96(bParam1, bParam2, bParam3))
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
						if (func_94(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_93(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1) || func_93(bParam1, bParam2, bParam3))
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
					else if (func_94(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_74(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_78(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_98();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_93(bool bParam0, bool bParam1, bool bParam2)//Position - 0x41E2
{
	if (!func_78(bParam0, bParam1, bParam2))
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

int func_94(bool bParam0, bool bParam1, bool bParam2)//Position - 0x4234
{
	if (!func_78(bParam0, bParam1, bParam2))
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

int func_95(bool bParam0, bool bParam1, bool bParam2)//Position - 0x427D
{
	if (!func_78(bParam0, bParam1, bParam2))
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

int func_96(bool bParam0, bool bParam1, bool bParam2)//Position - 0x42DC
{
	if (!func_78(bParam0, bParam1, bParam2))
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

int func_97(int iParam0)//Position - 0x4332
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

void func_98()//Position - 0x438D
{
	unk_0xF0059F27F7BB6680(&Global_93C, 4);
}

int func_99(int iParam0, bool bParam1, int iParam2)//Position - 0x439D
{
	iParam2 = iParam2;
	return func_100(iParam0, bParam1, 0);
}

int func_100(int iParam0, bool bParam1, bool bParam2)//Position - 0x43B2
{
	return func_59(iParam0, !bParam1, bParam2);
}

int func_101()//Position - 0x43C5
{
	float fVar0;
	
	fVar0 = 300f;
	if (iLocal_121 == 1)
	{
		fVar0 = 220f;
	}
	if (func_161(iLocal_73))
	{
		func_102(iLocal_60, iLocal_73, fVar0, 1061158912, 0);
		if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_73, fVar0, fVar0, 100f, 0, 1, 0))
		{
			return 1;
		}
		else if (!unk_0x41A5D6415E2CC10E(iLocal_73))
		{
			return 1;
		}
	}
	return 0;
}

void func_102(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4)//Position - 0x442A
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

int func_103()//Position - 0x4583
{
	if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_73, 0) && unk_0xE7259E40522CC260(iLocal_73))
	{
		return 1;
	}
	return 0;
}

void func_104()//Position - 0x45A9
{
	if (!unk_0x36CEFBE9B745A58D(iLocal_71) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		switch (iLocal_48)
		{
			case 0:
				iLocal_54 = iLocal_54;
				if (!unk_0x5237AF95232D78C5(iLocal_71, 0))
				{
					if (iLocal_121 == 1)
					{
						if (func_111())
						{
							iLocal_48 = 1;
						}
					}
					else if (!unk_0x2CDE18D6C89522AD(iLocal_71) && !unk_0x69871CAEBDD20966(iLocal_71))
					{
						unk_0x56F2E1B5599188FA(iLocal_71, unk_0xBC25C936A095B5BA(), -1, 0, 2);
						if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -539.4566f, -2094.491f, 6.967173f, -468.4296f, -2152.549f, 18.99127f, 26.75f, 0, true, 0))
						{
							unk_0xC0FDCDB0DF739C50(iLocal_71, 345f, 0);
							iLocal_48 = 1;
						}
						else
						{
							unk_0xC5A6DFE2B8987B17(&iLocal_74);
							unk_0xE896C0AD02364F2A(0, sLocal_80, "arms_waving", 2f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0xE896C0AD02364F2A(0, sLocal_80, "arms_waving", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0xE896C0AD02364F2A(0, sLocal_80, "arms_waving", 8f, -2f, -1, 0, 0, 0, 0, 0);
							unk_0x535008C596714F9E(iLocal_74);
							unk_0xA8E6405305C0D7DF(iLocal_71, iLocal_74);
							unk_0x02DAF06EA4F08219(&iLocal_74);
							iLocal_124 = unk_0x105601648511CC64();
							iLocal_48 = 2;
						}
					}
				}
				break;
			
			case 1:
				if (iLocal_121 == 1)
				{
					unk_0x56F2E1B5599188FA(iLocal_71, unk_0xBC25C936A095B5BA(), -1, 0, 2);
					if (unk_0xF4FCC3C1048FF2AB(iLocal_71, 242628503) != 1)
					{
						unk_0xC5A6DFE2B8987B17(&iLocal_74);
						unk_0xE896C0AD02364F2A(0, sLocal_80, sLocal_82, 4f, -2f, -1, 0, 0, 0, 0, 0);
						unk_0x535008C596714F9E(iLocal_74);
						unk_0xA8E6405305C0D7DF(iLocal_71, iLocal_74);
						unk_0x02DAF06EA4F08219(&iLocal_74);
						iLocal_48 = 2;
					}
				}
				else if (unk_0xC5B8A5F778E321DD(iLocal_71, unk_0xBC25C936A095B5BA(), 60f))
				{
					if (unk_0xF4FCC3C1048FF2AB(iLocal_71, 242628503) != 1)
					{
						unk_0xC5A6DFE2B8987B17(&iLocal_74);
						unk_0xE896C0AD02364F2A(0, sLocal_80, "arms_waving", 2f, -8f, -1, 0, 0, 0, 0, 0);
						if (bLocal_57 == 0)
						{
							unk_0xE896C0AD02364F2A(0, sLocal_80, "pointing", 8f, -4f, -1, 0, 0, 0, 0, 0);
						}
						unk_0x535008C596714F9E(iLocal_74);
						unk_0xA8E6405305C0D7DF(iLocal_71, iLocal_74);
						unk_0x02DAF06EA4F08219(&iLocal_74);
						iLocal_48 = 2;
					}
				}
				if (func_111())
				{
					if (func_110())
					{
					}
				}
				break;
			
			case 2:
				if (func_111())
				{
					if (func_110())
					{
					}
				}
				if (iLocal_121 == 2)
				{
					if (!unk_0xC5B8A5F778E321DD(iLocal_71, unk_0xBC25C936A095B5BA(), 60f) && !func_108(iLocal_71, -875674219))
					{
						unk_0x85DB484A637CEAB9(iLocal_71, unk_0xBC25C936A095B5BA(), 0);
					}
					if (func_107(iLocal_71, unk_0xBC25C936A095B5BA(), 1) < 25f)
					{
						if (!func_18())
						{
							if ((unk_0x105601648511CC64() - iLocal_124) > 6000)
							{
								func_106();
							}
						}
					}
				}
				if (unk_0xF4FCC3C1048FF2AB(iLocal_71, 242628503) != 1 && !func_108(iLocal_71, -875674219))
				{
					if (iLocal_121 == 1)
					{
						vLocal_85 = { -2260.1f, 4274.24f, 44.9f };
						if (!unk_0x4DBCE270B354E123(iLocal_71, vLocal_85, 1.5f, 1.5f, 1.5f, false, true, 0))
						{
							if (unk_0xF4FCC3C1048FF2AB(iLocal_71, 242628503) == 7)
							{
								unk_0xC5A6DFE2B8987B17(&iLocal_74);
								unk_0xDF14F570C0180463(0, vLocal_85, 1f, 20000, fLocal_90, 0.5f);
								unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 0);
								unk_0x535008C596714F9E(iLocal_74);
								unk_0xA8E6405305C0D7DF(iLocal_71, iLocal_74);
								unk_0x02DAF06EA4F08219(&iLocal_74);
							}
						}
						else if (!unk_0x96044E39418AAF17(iLocal_71, sLocal_79, "waiting", 3))
						{
							unk_0xE896C0AD02364F2A(iLocal_71, sLocal_79, "waiting", 4f, -4f, -1, 0, 0, 0, 0, 0);
							if (func_107(iLocal_71, unk_0xBC25C936A095B5BA(), 1) < 25f)
							{
								func_106();
							}
						}
					}
					else if (!unk_0x96044E39418AAF17(iLocal_71, sLocal_79, "waiting", 3))
					{
						unk_0xE896C0AD02364F2A(iLocal_71, sLocal_79, "waiting", 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
				}
				break;
			
			case 3:
				if (!unk_0x640A454FD54BBEF2(iLocal_71, unk_0xBC25C936A095B5BA()))
				{
					unk_0x56F2E1B5599188FA(iLocal_71, unk_0xBC25C936A095B5BA(), -1, 0, 2);
				}
				if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_71, 40f, 40f, 10f, 0, 1, 0) && !unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_71, 9f, 9f, 9f, 0, 1, 0))
				{
					if (func_105())
					{
						if (iLocal_55)
						{
							if (iLocal_121 == 1)
							{
								unk_0xC5A6DFE2B8987B17(&iLocal_74);
								unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 0);
								unk_0xE896C0AD02364F2A(0, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 2f, -2f, -1, 0, 0, 0, 0, 0);
								unk_0x535008C596714F9E(iLocal_74);
								unk_0xA8E6405305C0D7DF(iLocal_71, iLocal_74);
								unk_0x02DAF06EA4F08219(&iLocal_74);
								iLocal_55 = 0;
								iLocal_124 = unk_0x105601648511CC64();
							}
							else
							{
								unk_0xC5A6DFE2B8987B17(&iLocal_74);
								unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 0);
								unk_0xE896C0AD02364F2A(0, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 2f, -2f, -1, 0, 0, 0, 0, 0);
								unk_0x535008C596714F9E(iLocal_74);
								unk_0xA8E6405305C0D7DF(iLocal_71, iLocal_74);
								unk_0x02DAF06EA4F08219(&iLocal_74);
								iLocal_55 = 0;
								iLocal_124 = unk_0x105601648511CC64();
							}
						}
						else if (!unk_0x96044E39418AAF17(iLocal_71, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 3))
						{
							if (unk_0xF4FCC3C1048FF2AB(iLocal_71, 242628503) == 7)
							{
								if (!unk_0xC5B8A5F778E321DD(iLocal_71, unk_0xBC25C936A095B5BA(), 45f))
								{
									unk_0xC5A6DFE2B8987B17(&iLocal_74);
									unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 0);
									unk_0x535008C596714F9E(iLocal_74);
									unk_0xA8E6405305C0D7DF(iLocal_71, iLocal_74);
									unk_0x02DAF06EA4F08219(&iLocal_74);
								}
								else if ((unk_0x105601648511CC64() - iLocal_124) > 6000)
								{
									iLocal_55 = 1;
								}
							}
						}
						else if (!unk_0xC5B8A5F778E321DD(iLocal_71, unk_0xBC25C936A095B5BA(), 70f))
						{
							unk_0xA4E856A8CD53B8DF(iLocal_71);
							unk_0xC5A6DFE2B8987B17(&iLocal_74);
							unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 0);
							unk_0x535008C596714F9E(iLocal_74);
							unk_0xA8E6405305C0D7DF(iLocal_71, iLocal_74);
							unk_0x02DAF06EA4F08219(&iLocal_74);
							iLocal_124 += 4000;
						}
					}
					if (!unk_0x36CEFBE9B745A58D(iLocal_72))
					{
						unk_0x5558ED6D4A2DEC93(iLocal_72, unk_0xBC25C936A095B5BA(), 150f, -1, 0, 0);
						unk_0x22321800954A532E(iLocal_72, true);
						unk_0x02537C8C1BEEB477(&iLocal_72);
					}
				}
				else
				{
					if (iLocal_121 == 1)
					{
						vLocal_85 = { -2260.1f, 4274.24f, 44.9f };
					}
					else if (bLocal_57)
					{
						vLocal_85 = { -483.4162f, -2160.874f, 8.359f };
					}
					else
					{
						vLocal_85 = { -485.9905f, -2153.542f, 8.1999f };
					}
					if (!unk_0x4DBCE270B354E123(iLocal_71, vLocal_85, 4f, 4f, 4f, false, true, 0))
					{
						if (unk_0xF4FCC3C1048FF2AB(iLocal_71, 2106541073) == 7)
						{
							unk_0xDF14F570C0180463(iLocal_71, vLocal_85, 1f, 20000, fLocal_90, 0.5f);
						}
					}
					else if (!unk_0xC5B8A5F778E321DD(iLocal_71, unk_0xBC25C936A095B5BA(), 50f))
					{
						unk_0x85DB484A637CEAB9(iLocal_71, unk_0xBC25C936A095B5BA(), -1);
					}
					iLocal_55 = 1;
				}
				break;
			
			case 4:
				break;
			}
	}
	if (func_160(1))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_71))
		{
			unk_0x5558ED6D4A2DEC93(iLocal_71, unk_0xBC25C936A095B5BA(), 150f, -1, 0, 0);
			unk_0x22321800954A532E(iLocal_71, true);
			SYSTEM::WAIT(0);
		}
		func_230();
	}
}

bool func_105()//Position - 0x4C15
{
	if (!bLocal_116)
	{
		if (func_44(&Local_102, cLocal_114, sLocal_110, 4, 0, 0, 0))
		{
			bLocal_116 = true;
		}
	}
	return bLocal_116;
}

int func_106()//Position - 0x4C3E
{
	if (!iLocal_117)
	{
		if (func_44(&Local_102, cLocal_114, sLocal_108, 4, 0, 0, 0))
		{
			iLocal_117 = 1;
		}
	}
	return iLocal_117;
}

float func_107(int iParam0, int iParam1, bool bParam2)//Position - 0x4C67
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

int func_108(int iParam0, int iParam1)//Position - 0x4CC5
{
	if (func_109(iParam0))
	{
		if (unk_0xF4FCC3C1048FF2AB(iParam0, iParam1) == 1 || unk_0xF4FCC3C1048FF2AB(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_109(int iParam0)//Position - 0x4CF8
{
	if (func_3(iParam0))
	{
		if (!unk_0x36CEFBE9B745A58D(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_110()//Position - 0x4D18
{
	if (!iLocal_115)
	{
		if (SYSTEM::TIMERA() > 2000)
		{
			if (func_44(&Local_102, cLocal_114, sLocal_107, 4, 0, 0, 0))
			{
				iLocal_115 = 1;
			}
		}
	}
	return iLocal_115;
}

int func_111()//Position - 0x4D4B
{
	if (!unk_0x36CEFBE9B745A58D(iLocal_72) && !unk_0x36CEFBE9B745A58D(iLocal_71))
	{
		if (func_161(iLocal_73))
		{
			if (unk_0x25EF720B1CAB1E23(iLocal_72, iLocal_73))
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

void func_112(var uParam0, int iParam1)//Position - 0x4D89
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_113(bool bParam0)//Position - 0x4DA6
{
	int iVar0;
	
	if (iLocal_121 == 2)
	{
		iVar0 = func_10();
		switch (iVar0)
		{
			case 0:
				while (!func_136(319357731, 6, 1, 144, 7200000, 10000, -1, 199, -1, 0))
				{
					if (func_3(iLocal_71))
					{
						unk_0x2E9860A2B72187F5(iLocal_71, 310, true);
					}
					SYSTEM::WAIT(0);
				}
				break;
			
			case 1:
				while (!func_136(-423103492, 6, 2, 144, 7200000, 10000, -1, 199, -1, 0))
				{
					if (func_3(iLocal_71))
					{
						unk_0x2E9860A2B72187F5(iLocal_71, 310, true);
					}
					SYSTEM::WAIT(0);
				}
				break;
			
			case 2:
				while (!func_136(801546988, 6, 4, 144, 7200000, 10000, -1, 199, -1, 0))
				{
					if (func_3(iLocal_71))
					{
						unk_0x2E9860A2B72187F5(iLocal_71, 310, true);
					}
					SYSTEM::WAIT(0);
				}
				break;
			}
	}
	if (bParam0)
	{
		func_135(8);
	}
	func_117(17, iLocal_121);
	func_114();
	func_230();
}

void func_114()//Position - 0x4EA1
{
	func_115();
}

int func_115()//Position - 0x4EAE
{
	if (func_116(0))
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

bool func_116(bool bParam0)//Position - 0x4EF9
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_1163A, 0);
}

void func_117(int iParam0, int iParam1)//Position - 0x4F24
{
	if (iParam0 == -1)
	{
		iParam0 = func_133();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_132(iParam0))
	{
		func_131(iParam0, iParam1);
		if (!func_130(51))
		{
			func_126("RE_REWARD", 1, 0, 4000, 10000, func_129(), 0, 138, 0);
			func_125(51);
		}
		if (func_124(iParam0))
		{
			Global_19B04.f_6186.f_2 = 3;
		}
		if (func_123(iParam0, iParam1) != 322)
		{
			func_118(func_123(iParam0, iParam1), vLocal_45.x, vLocal_45.y);
		}
		Global_19AF8 = iParam1;
		if (Global_19AF6 == 0)
		{
			if (((Global_19AF9 == 1 || Global_19AF9 == 5) || Global_19AF9 == 11) || Global_19AF9 == 25)
			{
				func_135(2);
			}
			else if ((Global_19AF9 == 26 || Global_19AF9 == 8) || Global_19AF9 == 17)
			{
				func_135(7);
			}
			else
			{
				func_135(1);
			}
		}
	}
}

void func_118(int iParam0, var uParam1, var uParam2)//Position - 0x5028
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
		func_122((891 + iParam0), 1, -1, 1);
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
		func_119();
	}
}

void func_119()//Position - 0x5110
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
		func_121(13, SYSTEM::FLOOR(Global_19B04.f_27B5.f_F0D));
	}
	if (!unk_0xF9BFA43C1BAFD016())
	{
		if (!Global_11542)
		{
			if (func_120() == 2 == 0 && !unk_0x7AF0088ABFA713B6())
			{
				if (unk_0x670C0C6C780A3F84())
				{
					Global_199FA = 0;
				}
				if (!Global_DA9F)
				{
					func_115();
				}
			}
		}
	}
}

int func_120()//Position - 0x55D1
{
	return Global_62BD;
}

int func_121(int iParam0, int iParam1)//Position - 0x55DC
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

int func_122(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x562D
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
		iParam2 = func_8();
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

int func_123(int iParam0, int iParam1)//Position - 0x5B47
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

int func_124(int iParam0)//Position - 0x5EBB
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

void func_125(int iParam0)//Position - 0x5EEA
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

void func_126(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x5F2C
{
	func_127(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_127(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x5F4E
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
		func_128();
	}
}

void func_128()//Position - 0x6122
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

int func_129()//Position - 0x6242
{
	func_11();
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

int func_130(int iParam0)//Position - 0x6288
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

void func_131(int iParam0, int iParam1)//Position - 0x62CB
{
	unk_0xF0059F27F7BB6680(&(Global_19B04.f_6186.f_8[iParam0]), iParam1);
}

int func_132(int iParam0)//Position - 0x62E6
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

int func_133()//Position - 0x6397
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x1377080E9B0BD993(), 64);
	uVar1 = func_134(Var0);
	return uVar1;
}

int func_134(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x63B4
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

void func_135(int iParam0)//Position - 0x658E
{
	Global_19AF6 = iParam0;
}

int func_136(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x659C
{
	struct<10> Var0;
	struct<10> Var1;
	int iVar2;
	int iVar3;
	
	if (func_116(0))
	{
		return 0;
	}
	if (iParam4 < 0)
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 == 76)
	{
		return 0;
	}
	if (iParam7 == 235)
	{
		return 0;
	}
	if (iParam3 < 3)
	{
		if (unk_0xFA30DFD0084E92FE(iParam2, iParam3))
		{
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7)
	{
		return 0;
	}
	if (Global_19B04.f_1DEB.f_362 < 10)
	{
		Var0 = iParam0;
		Var0.f_3 = func_144(iParam1);
		Var0.f_4 = (unk_0x105601648511CC64() + iParam4);
		Var0.f_5 = iParam5;
		Var0.f_1 = iParam9;
		Var0.f_2 = iParam2;
		Var0.f_6 = iParam3;
		Var0.f_7 = iParam6;
		Var0.f_8 = iParam7;
		Var0.f_9 = iParam8;
		unk_0x7CB6FD92BE491AD9(&(Var0.f_1), 0);
		Global_19B04.f_1DEB.f_2FD[Global_19B04.f_1DEB.f_362 /*10*/] = { Var0 };
		Global_19B04.f_1DEB.f_362++;
		return 1;
	}
	else
	{
		Var1 = { func_143(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9) };
		iVar2 = 0;
		func_142(&iVar2);
		iVar3 = func_141(Var1, Global_19B04.f_1DEB.f_2FD[iVar2 /*10*/]);
		if (iVar3 == 2)
		{
			func_139(Global_19B04.f_1DEB.f_2FD[iVar2 /*10*/]);
			Global_19B04.f_1DEB.f_2FD[iVar2 /*10*/] = { Var1 };
			func_138(&Var1);
			return 1;
		}
		else if (iVar3 == 1)
		{
			if (func_137(Var1))
			{
				func_139(Global_19B04.f_1DEB.f_2FD[iVar2 /*10*/]);
				Global_19B04.f_1DEB.f_2FD[iVar2 /*10*/] = { Var1 };
				func_138(&Var1);
				return 1;
			}
			else
			{
				if (!func_137(Global_19B04.f_1DEB.f_2FD[iVar2 /*10*/]))
				{
					Global_19B04.f_1DEB.f_2FD[iVar2 /*10*/] = { Var1 };
					func_138(&Var1);
					return 1;
				}
				func_138(&Var1);
				return 1;
			}
		}
		else
		{
			func_139(Var1);
			func_138(&Var1);
			return 1;
		}
	}
	return 0;
}

int func_137(struct<9> Param0, var uParam1)//Position - 0x67BE
{
	if (Param0.f_8 == 0)
	{
		return 0;
	}
	return 1;
}

void func_138(var uParam0)//Position - 0x67D6
{
	struct<10> Var0;
	
	*uParam0 = { Var0 };
}

void func_139(struct<10> Param0)//Position - 0x67E8
{
	if (func_137(Param0))
	{
		func_140(Param0.f_8, 0);
	}
}

void func_140(int iParam0, int iParam1)//Position - 0x6805
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_19B04.f_2188[iParam0] = 1;
	Global_19B04.f_2188.f_EC[iParam0] = (unk_0x105601648511CC64() + iParam1);
}

int func_141(struct<4> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, struct<4> Param7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)//Position - 0x6842
{
	int iVar0;
	int iVar1;
	
	iVar0 = Param0.f_3;
	iVar1 = Param7.f_3;
	if (iVar0 > iVar1)
	{
		return 2;
	}
	if (iVar0 < iVar1)
	{
		return 0;
	}
	return 1;
}

void func_142(int iParam0)//Position - 0x6873
{
	int iVar0;
	
	*iParam0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_19B04.f_1DEB.f_362)
	{
		if (func_141(Global_19B04.f_1DEB.f_2FD[iVar0 /*10*/], Global_19B04.f_1DEB.f_2FD[*iParam0 /*10*/]) == 0)
		{
			*iParam0 = iVar0;
		}
		iVar0++;
	}
}

struct<10> func_143(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, var uParam9)//Position - 0x68CA
{
	struct<10> Var0;
	
	Var0 = uParam0;
	Var0.f_3 = func_144(iParam1);
	Var0.f_4 = (unk_0x105601648511CC64() + iParam4);
	Var0.f_5 = iParam5;
	Var0.f_1 = uParam9;
	Var0.f_2 = iParam2;
	Var0.f_6 = iParam3;
	Var0.f_7 = iParam6;
	Var0.f_8 = iParam7;
	Var0.f_9 = uParam8;
	unk_0x7CB6FD92BE491AD9(&(Var0.f_1), 0);
	return Var0;
}

int func_144(int iParam0)//Position - 0x6923
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

void func_145(int iParam0, bool bParam1)//Position - 0x698D
{
	if (bParam1)
	{
		if (!func_149(iParam0, 2, 1))
		{
			func_148(iParam0, 2, 1);
		}
	}
	else if (func_149(iParam0, 2, 1))
	{
		func_146(iParam0, 2, 1);
	}
}

void func_146(int iParam0, int iParam1, bool bParam2)//Position - 0x69C4
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0x7CB6FD92BE491AD9(&(Global_16B4F.f_531[iParam0]), iParam1);
	}
	else if (unk_0x7AF0088ABFA713B6())
	{
		if (func_120() == 0)
		{
			iVar0 = func_9(func_147(iParam0), -1, 0);
			unk_0x7CB6FD92BE491AD9(&iVar0, iParam1);
			func_6(func_147(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_29C[iParam0]), iParam1);
	}
}

int func_147(int iParam0)//Position - 0x6A2D
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

void func_148(int iParam0, int iParam1, bool bParam2)//Position - 0x6D21
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0xF0059F27F7BB6680(&(Global_16B4F.f_531[iParam0]), iParam1);
	}
	else if (unk_0x7AF0088ABFA713B6())
	{
		if (func_120() == 0)
		{
			iVar0 = func_9(func_147(iParam0), -1, 0);
			unk_0xF0059F27F7BB6680(&iVar0, iParam1);
			func_6(func_147(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xF0059F27F7BB6680(&(Global_19B04.f_29C[iParam0]), iParam1);
	}
}

int func_149(int iParam0, int iParam1, bool bParam2)//Position - 0x6D8A
{
	if (bParam2)
	{
		return unk_0xFA30DFD0084E92FE(Global_16B4F.f_531[iParam0], iParam1);
	}
	else if (unk_0x7AF0088ABFA713B6())
	{
		if (func_120() == 0)
		{
			return unk_0xFA30DFD0084E92FE(func_9(func_147(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xFA30DFD0084E92FE(Global_19B04.f_29C[iParam0], iParam1);
	}
	return 0;
}

int func_150(int iParam0)//Position - 0x6DEA
{
	if (func_153())
	{
		Global_19AFA = 1;
		Global_19AF7 = unk_0x105601648511CC64();
		if (func_124(Global_19AF9))
		{
			func_151(0);
		}
		unk_0x3FF92BBF0607A406(1, "RE_TITLE");
		if (iParam0 && func_124(Global_19AF9))
		{
			unk_0x621CEDEDDD531386();
		}
		return 1;
	}
	return 0;
}

void func_151(int iParam0)//Position - 0x6E3D
{
	switch (iParam0)
	{
		case 0:
			if (Global_19B04.f_6186.f_2 < 3)
			{
				if (!unk_0x5107E30005FCFEA8())
				{
					func_76(func_152(iParam0), -1);
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
					func_76(func_152(iParam0), -1);
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
					func_76(func_152(iParam0), -1);
					Global_19B04.f_6186.f_4++;
					unk_0xF0059F27F7BB6680(&Global_19B00, 2);
				}
			}
			break;
	}
}

char* func_152(int iParam0)//Position - 0x6F1E
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

int func_153()//Position - 0x6F62
{
	switch (func_154(&Global_62F8, 0, 5, 0, unk_0x8A55B15F4133C912()))
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

int func_154(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x6F98
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
		if (func_158(0))
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
		if (!func_156(iParam2))
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
			func_155(uParam0, iParam4);
		}
	}
	return 2;
}

void func_155(var uParam0, int iParam1)//Position - 0x70CF
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

bool func_156(int iParam0)//Position - 0x711E
{
	return func_157(iParam0, Global_8C41);
}

int func_157(int iParam0, int iParam1)//Position - 0x712F
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

int func_158(int iParam0)//Position - 0x7310
{
	if (Global_8C41 == 15)
	{
		return 0;
	}
	if (func_156(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_159()//Position - 0x7332
{
	float fVar0;
	
	switch (iLocal_121)
	{
		case 1:
			if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -2300.317f, 4179.612f, 36.98159f, -2191.317f, 4368.794f, 74.89676f, 70.75f, 0, true, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (bLocal_57)
			{
				fVar0 = 80f;
			}
			else
			{
				fVar0 = 80f;
			}
			if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), -487.5048f, -2157.99f, 8.2627f, fVar0, fVar0, 40f, false, true, 0))
			{
				return 1;
			}
			break;
	}
	if (unk_0xADF4D6B0407B3CC1())
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_71))
		{
			if (unk_0xD1DC4B08247A4317(iLocal_71))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_160(int iParam0)//Position - 0x73E8
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar2;
	
	vVar1 = { 6f, 6f, 6f };
	vVar2 = { -6f, -6f, -6f };
	if (unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_71))
		{
			if (iParam0 == 0 || func_107(iLocal_71, iLocal_72, 1) > 15f)
			{
				if (unk_0x04880508C862E589(unk_0x823166D9421223CA(iLocal_71, 31086, 0f, 0f, 0f), 4f, 0))
				{
					bVar0 = true;
				}
				vVar1 = { vVar1 + unk_0x823166D9421223CA(iLocal_71, 31086, 0f, 0f, 0f) };
				vVar2 = { vVar2 + unk_0x823166D9421223CA(iLocal_71, 31086, 0f, 0f, 0f) };
				if ((unk_0x1749F74D4E70A733(vVar2, vVar1, joaat("weapon_smokegrenade"), 1) || unk_0x1749F74D4E70A733(vVar2, vVar1, joaat("weapon_grenade"), 1)) || unk_0x1749F74D4E70A733(vVar2, vVar1, joaat("weapon_stickybomb"), 1))
				{
					bVar0 = true;
				}
			}
			if (unk_0xD9ED1893F2541636(unk_0x823166D9421223CA(iLocal_71, 31086, 0f, 0f, 0f), 6f))
			{
				bVar0 = true;
			}
			if (unk_0xC9FA5D38428AB6BE(-1, unk_0x823166D9421223CA(iLocal_71, 31086, 0f, 0f, 0f), 6f))
			{
				bVar0 = true;
			}
			if (unk_0xD9C1758D86688CEA(iLocal_71, unk_0xBC25C936A095B5BA(), 1))
			{
				bVar0 = true;
			}
		}
	}
	if (bVar0)
	{
	}
	return bVar0;
}

int func_161(int iParam0)//Position - 0x750F
{
	if (func_3(iParam0))
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

int func_162()//Position - 0x7539
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char* sVar6;
	char* sVar7;
	char* sVar8;
	
	vVar1 = { vLocal_87 };
	fVar2 = fLocal_95;
	switch (iLocal_121)
	{
		case 1:
			vLocal_86 = { -2257.482f, 4266.638f, 44.5095f };
			fLocal_94 = 293.9091f;
			vLocal_87 = { -2253.763f, 4273.17f, 44.977f };
			fLocal_95 = 185.5212f;
			iVar3 = joaat("a_f_y_vinewood_04");
			iVar5 = joaat("peyote");
			iVar4 = joaat("g_m_y_salvagoon_01");
			sVar6 = "CThiefVictim";
			sVar7 = "A_F_Y_VINEWOOD_04_WHITE_MINI_02";
			sLocal_107 = "RECT1_ATTR";
			sLocal_108 = "RECT1_HELP";
			sLocal_109 = "RECT1_FYOU";
			sLocal_110 = "RECT1_JOY";
			sLocal_111 = "RECT1_OK";
			sLocal_112 = "RECT1_BAD";
			sLocal_113 = "RECT1_GOOD";
			cLocal_114 = "RECT1AU";
			sLocal_79 = "RANDOM@CAR_THIEF@waiting_ig_4";
			sLocal_81 = "random@car_thief@waving_ig_1";
			vLocal_88 = { -2270.632f, 4287.437f, 44.9008f };
			fLocal_53 = 3f;
			if (SYSTEM::VDIST(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), vLocal_86) < SYSTEM::VDIST(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), vLocal_87))
			{
				vVar1 = { vLocal_86 };
				fVar2 = fLocal_94;
				bLocal_57 = true;
				sLocal_80 = "random@car_thief@waving_ig_2";
				sLocal_82 = "waving_l";
			}
			else
			{
				sLocal_82 = "waving";
				sLocal_80 = "random@car_thief@waving_ig_1";
				vVar1 = { vLocal_87 };
				fVar2 = fLocal_95;
			}
			break;
		
		case 2:
			vLocal_87 = { -538.6718f, -2183.442f, 5.2336f };
			vLocal_86 = { -365.7f, -2179.26f, 9.3184f };
			iVar3 = joaat("a_f_y_indian_01");
			iVar5 = joaat("rocoto");
			iVar4 = joaat("a_m_m_soucent_04");
			sVar6 = "CThiefGolfer";
			sVar8 = "A_M_M_SOUCENT_04_BLACK_MINI_01";
			sLocal_107 = "RECT2_ATTR";
			sLocal_108 = "RECT2_HELP";
			sLocal_109 = "RECT2_FYOU";
			sLocal_110 = "RECT2_JOY";
			sLocal_111 = "RECT2_OK";
			sLocal_112 = "RECT2_BAD";
			sLocal_113 = "RECT2_GOOD";
			cLocal_114 = "RECT2AU";
			sLocal_79 = "RANDOM@CAR_THIEF@waiting_ig_4";
			sLocal_80 = "RANDOM@CAR_THIEF@VICTIMPOINTS_IG_3";
			sLocal_81 = "RANDOM@CAR_THIEF@VICTIMPOINTS_IG_3";
			vLocal_88 = { -505.1966f, -2159.228f, 7.6466f };
			fLocal_52 = 15f;
			fLocal_53 = 3f;
			if (SYSTEM::VDIST(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), vLocal_86) < SYSTEM::VDIST(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), vLocal_87))
			{
				bLocal_57 = true;
			}
			break;
	}
	unk_0xF243B7A14FCFD0F4(iVar3);
	unk_0xF243B7A14FCFD0F4(iVar4);
	unk_0xF243B7A14FCFD0F4(iVar5);
	unk_0x522053D86D6E1C7A(sLocal_79);
	unk_0x522053D86D6E1C7A(sLocal_80);
	unk_0x522053D86D6E1C7A(sLocal_81);
	unk_0x522053D86D6E1C7A("RANDOM@CAR_THIEF@WAITING_IG_4");
	unk_0xA8396BF0E2C53C39();
	if (((((((unk_0xD6513D668481290A(iVar3) && unk_0xD6513D668481290A(iVar4)) && unk_0xD6513D668481290A(iVar5)) && unk_0xF9E082857622D91E(sLocal_79)) && unk_0xF9E082857622D91E(sLocal_80)) && unk_0xF9E082857622D91E(sLocal_81)) && unk_0xF9E082857622D91E("RANDOM@CAR_THIEF@WAITING_IG_4")) && unk_0x95654D7A61CD43DE())
	{
		if (iLocal_121 == 1)
		{
			func_176("re_cartheft - Distance to vTop = ", SYSTEM::VDIST(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), vLocal_86));
			func_176("re_cartheft - Distance to vBottom = ", SYSTEM::VDIST(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), vLocal_87));
			iLocal_73 = unk_0x61C05BF08A1E0EFE(iVar5, vVar1, fVar2, true, true, false);
			unk_0x155EA453CD198E4B(iLocal_73, 0, false);
			unk_0xE82050D41B744FF3(iLocal_73, false);
			unk_0xA73D1278857991A2(iLocal_73, true);
			unk_0xE365C09E06B55C51(iLocal_73, false);
			unk_0x7387EA04915F201E(iLocal_73, false);
			unk_0xE54F7105CEA81918(iLocal_73, 2, false);
			iLocal_72 = unk_0xFD8987C090669BD5(iLocal_73, 22, iVar4, -1, 1, true);
			unk_0xC8FD3EBBB90E8D7F(iLocal_72, 42, true);
			unk_0x91629AC1E1F78419(iLocal_72, 3, true);
			unk_0x7A535CE1F001F3FE(iLocal_72, joaat("weapon_pistol"), -1, true, true);
			unk_0xFC3C88E2313FA926(iLocal_72, 10);
			unk_0xBA1E09204DACEC7A(iLocal_72, 1f);
			unk_0xCC74639EAF7A9582(iLocal_72, 1f);
			unk_0x914C5DE0B15B8B59(iLocal_73, 135, 135);
			unk_0xB2CB6EAA6B280A84("re_cartheft relGroupThief", &iLocal_137);
			unk_0xA902E18EDF6FA0C8(5, iLocal_137, 1862763509);
			unk_0xA902E18EDF6FA0C8(2, iLocal_137, 45677184);
			unk_0xA902E18EDF6FA0C8(2, 45677184, iLocal_137);
			unk_0x4106FAF8AA1D69D5(iLocal_72, iLocal_137);
			unk_0xF82197F205B9D8FD(iLocal_73, true);
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				vVar0 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) - vLocal_50 };
				fLocal_51 = unk_0xFDC254CE02DB0919(vVar0.x, vVar0.y);
			}
			iLocal_71 = unk_0x01B3635C3E8EDD81(5, iVar3, vLocal_50, fLocal_51, 1, true);
			unk_0x36C3B58DA78A2679(iLocal_71, sVar7);
			unk_0x56F2E1B5599188FA(iLocal_71, unk_0xBC25C936A095B5BA(), -1, 2048, 2);
			unk_0xB0031DDAE4FF0BC3(iLocal_71, 0, 0, 1, 0);
			unk_0xB0031DDAE4FF0BC3(iLocal_71, 2, 2, 0, 0);
			unk_0xB0031DDAE4FF0BC3(iLocal_71, 3, 1, 1, 0);
			unk_0xB0031DDAE4FF0BC3(iLocal_71, 4, 1, 1, 0);
			unk_0x0DEF5E53360637F2(iLocal_71, 1);
			if (bLocal_57)
			{
				vLocal_84 = { -2254.413f, 4270.227f, 44.8028f };
				fLocal_89 = 124.6557f;
				vLocal_83 = { -2252.683f, 4274.16f, 45.0612f };
				vLocal_85 = { -2257.825f, 4269.189f, 44.6334f };
				fLocal_90 = 272.8688f;
				vLocal_97 = { -2258.04f, 4272.244f, 45.75466f };
				vLocal_98 = { 1.729481f, 0f, -114.9352f };
			}
			else
			{
				vLocal_84 = { -2253.634f, 4269.119f, 44.7686f };
				fLocal_89 = 336.143f;
				vLocal_85 = { -2255.733f, 4271.32f, 44.8166f };
				fLocal_90 = 179.4774f;
				vLocal_83 = { -2257.088f, 4268.938f, 44.6456f };
				vLocal_97 = { -2254.886f, 4273.539f, 46.2282f };
				vLocal_98 = { -7.492095f, 0f, -168.1909f };
			}
		}
		else
		{
			if (bLocal_57)
			{
				iLocal_73 = unk_0x61C05BF08A1E0EFE(iVar5, -488.7506f, -2159.325f, 8.2581f, 15.0886f, true, true, false);
			}
			else
			{
				iLocal_73 = unk_0x61C05BF08A1E0EFE(iVar5, -486.3563f, -2159.942f, 8.2887f, 288.8187f, true, true, false);
			}
			unk_0x155EA453CD198E4B(iLocal_73, 0, false);
			unk_0xE82050D41B744FF3(iLocal_73, false);
			unk_0x6012A6A4F2950585(iLocal_73, 3);
			unk_0xA73D1278857991A2(iLocal_73, true);
			unk_0x1345B3BF11EDB0CF(iLocal_73, 0);
			unk_0x5C9F67BE33A5A3EE(iLocal_73, 11, 2, false);
			unk_0x5C9F67BE33A5A3EE(iLocal_73, 16, 3, false);
			unk_0x5C9F67BE33A5A3EE(iLocal_73, 12, 1, false);
			unk_0x5C9F67BE33A5A3EE(iLocal_73, 13, 1, false);
			unk_0xD2F70373DBF15801(iLocal_73, 3);
			unk_0x5C9F67BE33A5A3EE(iLocal_73, 23, 6, false);
			unk_0x84A3F4F29630A320(iLocal_73, 3);
			unk_0xB25E25030D61B529(iLocal_73, 18, true);
			unk_0xB25E25030D61B529(iLocal_73, 22, true);
			unk_0x914C5DE0B15B8B59(iLocal_73, 143, 0);
			unk_0x4C59702AC1076A88(iLocal_73, 31, 2);
			unk_0xE365C09E06B55C51(iLocal_73, false);
			unk_0x7387EA04915F201E(iLocal_73, false);
			if (bLocal_57)
			{
				iLocal_71 = unk_0x01B3635C3E8EDD81(5, iVar3, -490.4008f, -2160.755f, 8.2498f, 314.0037f, 1, true);
			}
			else if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -583.0884f, -2234.249f, 4.523423f, -685.1817f, -2350.904f, 17.07073f, 178f, 0, true, 0))
			{
				iLocal_71 = unk_0x01B3635C3E8EDD81(5, iVar3, -486.81f, -2156.99f, 8.27f, -172.34f, 1, true);
			}
			else
			{
				iLocal_71 = unk_0x01B3635C3E8EDD81(5, iVar3, -486.2511f, -2161.808f, 8.3041f, 353.4264f, 1, true);
			}
			unk_0xB0031DDAE4FF0BC3(iLocal_71, 0, 0, 0, 0);
			unk_0xB0031DDAE4FF0BC3(iLocal_71, 2, 1, 0, 0);
			unk_0xB0031DDAE4FF0BC3(iLocal_71, 3, 1, 2, 0);
			unk_0xB0031DDAE4FF0BC3(iLocal_71, 4, 1, 2, 0);
			iLocal_72 = unk_0xFD8987C090669BD5(iLocal_73, 22, iVar4, -1, 1, true);
			unk_0x7A535CE1F001F3FE(iLocal_72, joaat("weapon_pistol"), -1, true, true);
			unk_0xFC3C88E2313FA926(iLocal_72, 10);
			unk_0xBA1E09204DACEC7A(iLocal_72, 1f);
			unk_0xCC74639EAF7A9582(iLocal_72, 1f);
			unk_0xC8FD3EBBB90E8D7F(iLocal_72, 42, true);
			unk_0x36C3B58DA78A2679(iLocal_72, sVar8);
			vLocal_84 = { -501.9105f, -2148.019f, 8.0392f };
			fLocal_89 = 294.4744f;
			vLocal_83 = { -501.0442f, -2150.799f, 8.139f };
			vLocal_85 = { -493.8062f, -2156.036f, 8.1978f };
			vLocal_97 = { -504.365f, -2144.534f, 9.8585f };
			vLocal_98 = { -6.6935f, 0f, -127.8147f };
		}
		unk_0xB105531EDD3DE51B(iLocal_71, false);
		unk_0xC8FD3EBBB90E8D7F(iLocal_71, 185, true);
		unk_0x423D0D22C11B3EE4(iLocal_73, 0);
		unk_0x2D655AA68FA1736B(iLocal_73, true, true, 0);
		unk_0x2E35C4FA5F0ED22F(iLocal_71, true);
		unk_0x2E35C4FA5F0ED22F(iLocal_72, true);
		unk_0x56F2E1B5599188FA(iLocal_71, iLocal_72, -1, 0, 2);
		unk_0x0E622862E5E566BB(iLocal_73);
		unk_0xF82197F205B9D8FD(iLocal_73, true);
		unk_0xD38EB677CBE7440A(iLocal_73, false, 0);
		unk_0x8510BC031C24B862(iVar5, true);
		unk_0xD6423910AAD8A379("RE_CAR_STEAL_SCENE");
		unk_0x55662F9F262C2F9B(iLocal_73, "RE_CAR_STEAL_STOLEN_VEHICLE", 0);
		unk_0xD7E19B03E0EB54E5(iLocal_73, 1);
		unk_0x91629AC1E1F78419(iLocal_71, 17, false);
		unk_0xABA7AE40608505F2(iLocal_71, 512, true);
		switch (func_10())
		{
			case 0:
				sLocal_100 = "MICHAEL";
				break;
			
			case 1:
				sLocal_100 = "FRANKLIN";
				break;
			
			case 2:
				sLocal_100 = "TREVOR";
				break;
		}
		func_175(&Local_102, 0, unk_0xBC25C936A095B5BA(), sLocal_100, 0, 1);
		func_175(&Local_102, 1, iLocal_71, sVar6, 0, 1);
		func_175(&Local_102, 2, iLocal_72, "CThief", 0, 1);
		return 1;
	}
	else if (func_163())
	{
		func_230();
	}
	return 0;
}

int func_163()//Position - 0x7D69
{
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), vLocal_45) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(unk_0xB5D9AE572C19509E(unk_0xBC25C936A095B5BA())) > 1369f && !func_174())
		{
			return 0;
		}
	}
	if (func_170())
	{
		return 1;
	}
	if (func_164(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_164(float fParam0, bool bParam1)//Position - 0x7DEF
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
		if (func_13(func_10()))
		{
			iVar5 = func_129();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (unk_0xFA30DFD0084E92FE(Global_19B04.f_4871[iVar1 /*6*/], 2) && !unk_0xFA30DFD0084E92FE(Global_19B04.f_4871[iVar1 /*6*/], 3))
				{
					func_165(iVar1, &Var0);
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

void func_165(int iParam0, var uParam1)//Position - 0x7EA6
{
	switch (iParam0)
	{
		case 0:
			func_166(uParam1, "Abigail1", func_168(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_167(iParam0), 1, 0);
			break;
		
		case 1:
			func_166(uParam1, "Abigail2", func_168(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_167(iParam0), 1, 0);
			break;
		
		case 2:
			func_166(uParam1, "Barry1", func_168(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_167(iParam0), 1, 0);
			break;
		
		case 3:
			func_166(uParam1, "Barry2", func_168(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_167(iParam0), 1, 1);
			break;
		
		case 4:
			func_166(uParam1, "Barry3", func_168(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_167(iParam0), 0, 0);
			break;
		
		case 5:
			func_166(uParam1, "Barry3A", func_168(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		case 6:
			func_166(uParam1, "Barry3C", func_168(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		case 7:
			func_166(uParam1, "Barry4", func_168(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_167(iParam0), 0, 0);
			break;
		
		case 8:
			func_166(uParam1, "Dreyfuss1", func_168(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_167(iParam0), 0, 0);
			break;
		
		case 9:
			func_166(uParam1, "Epsilon1", func_168(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_167(iParam0), 0, 0);
			break;
		
		case 10:
			func_166(uParam1, "Epsilon2", func_168(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_167(iParam0), 1, 0);
			break;
		
		case 11:
			func_166(uParam1, "Epsilon3", func_168(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_167(iParam0), 0, 0);
			break;
		
		case 12:
			func_166(uParam1, "Epsilon4", func_168(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_167(iParam0), 0, 0);
			break;
		
		case 13:
			func_166(uParam1, "Epsilon5", func_168(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_167(iParam0), 1, 0);
			break;
		
		case 14:
			func_166(uParam1, "Epsilon6", func_168(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		case 15:
			func_166(uParam1, "Epsilon7", func_168(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_167(iParam0), 0, 0);
			break;
		
		case 16:
			func_166(uParam1, "Epsilon8", func_168(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_167(iParam0), 1, 0);
			break;
		
		case 17:
			func_166(uParam1, "Extreme1", func_168(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		case 18:
			func_166(uParam1, "Extreme2", func_168(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		case 19:
			func_166(uParam1, "Extreme3", func_168(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		case 20:
			func_166(uParam1, "Extreme4", func_168(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_167(iParam0), 0, 0);
			break;
		
		case 21:
			func_166(uParam1, "Fanatic1", func_168(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_167(iParam0), 1, 0);
			break;
		
		case 22:
			func_166(uParam1, "Fanatic2", func_168(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_167(iParam0), 1, 0);
			break;
		
		case 23:
			func_166(uParam1, "Fanatic3", func_168(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_167(iParam0), 0, 1);
			break;
		
		case 24:
			func_166(uParam1, "Hao1", func_168(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_167(iParam0), 0, 1);
			break;
		
		case 25:
			func_166(uParam1, "Hunting1", func_168(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		case 26:
			func_166(uParam1, "Hunting2", func_168(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		case 27:
			func_166(uParam1, "Josh1", func_168(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_167(iParam0), 1, 0);
			break;
		
		case 28:
			func_166(uParam1, "Josh2", func_168(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_167(iParam0), 1, 1);
			break;
		
		case 29:
			func_166(uParam1, "Josh3", func_168(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_167(iParam0), 1, 1);
			break;
		
		case 30:
			func_166(uParam1, "Josh4", func_168(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_167(iParam0), 1, 0);
			break;
		
		case 31:
			func_166(uParam1, "Maude1", func_168(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		case 32:
			func_166(uParam1, "Minute1", func_168(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		case 33:
			func_166(uParam1, "Minute2", func_168(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		case 34:
			func_166(uParam1, "Minute3", func_168(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		case 35:
			func_166(uParam1, "MrsPhilips1", func_168(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_167(iParam0), 0, 0);
			break;
		
		case 36:
			func_166(uParam1, "MrsPhilips2", func_168(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_167(iParam0), 0, 0);
			break;
		
		case 37:
			func_166(uParam1, "Nigel1", func_168(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_167(iParam0), 1, 0);
			break;
		
		case 38:
			func_166(uParam1, "Nigel1A", func_168(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_167(iParam0), 1, 1);
			break;
		
		case 39:
			func_166(uParam1, "Nigel1B", func_168(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_167(iParam0), 1, 1);
			break;
		
		case 40:
			func_166(uParam1, "Nigel1C", func_168(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_167(iParam0), 1, 1);
			break;
		
		case 41:
			func_166(uParam1, "Nigel1D", func_168(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_167(iParam0), 1, 1);
			break;
		
		case 42:
			func_166(uParam1, "Nigel2", func_168(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_167(iParam0), 1, 1);
			break;
		
		case 43:
			func_166(uParam1, "Nigel3", func_168(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_167(iParam0), 1, 1);
			break;
		
		case 44:
			func_166(uParam1, "Omega1", func_168(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_167(iParam0), 0, 0);
			break;
		
		case 45:
			func_166(uParam1, "Omega2", func_168(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_167(iParam0), 0, 0);
			break;
		
		case 46:
			func_166(uParam1, "Paparazzo1", func_168(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		case 47:
			func_166(uParam1, "Paparazzo2", func_168(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		case 48:
			func_166(uParam1, "Paparazzo3", func_168(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_167(iParam0), 0, 0);
			break;
		
		case 49:
			func_166(uParam1, "Paparazzo3A", func_168(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		case 50:
			func_166(uParam1, "Paparazzo3B", func_168(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		case 51:
			func_166(uParam1, "Paparazzo4", func_168(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_167(iParam0), 0, 0);
			break;
		
		case 52:
			func_166(uParam1, "Rampage1", func_168(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_167(iParam0), 0, 0);
			break;
		
		case 54:
			func_166(uParam1, "Rampage3", func_168(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_167(iParam0), 1, 0);
			break;
		
		case 55:
			func_166(uParam1, "Rampage4", func_168(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_167(iParam0), 1, 0);
			break;
		
		case 56:
			func_166(uParam1, "Rampage5", func_168(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_167(iParam0), 0, 0);
			break;
		
		case 53:
			func_166(uParam1, "Rampage2", func_168(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_167(iParam0), 1, 0);
			break;
		
		case 57:
			func_166(uParam1, "TheLastOne", func_168(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		case 58:
			func_166(uParam1, "Tonya1", func_168(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		case 59:
			func_166(uParam1, "Tonya2", func_168(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		case 60:
			func_166(uParam1, "Tonya3", func_168(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		case 61:
			func_166(uParam1, "Tonya4", func_168(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		case 62:
			func_166(uParam1, "Tonya5", func_168(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_167(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_166(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0x9240
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

int func_167(int iParam0)//Position - 0x92D1
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

struct<2> func_168(int iParam0)//Position - 0x9617
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_169(iParam0) };
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

struct<2> func_169(int iParam0)//Position - 0x964F
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

int func_170()//Position - 0x9A9C
{
	if (func_173() && !func_174())
	{
		return 1;
	}
	if (func_172() && func_171())
	{
		return 1;
	}
	return 0;
}

bool func_171()//Position - 0x9ACE
{
	return Global_199EA > 0;
}

int func_172()//Position - 0x9ADC
{
	if (Global_15FA6 != -1)
	{
		return 1;
	}
	return 0;
}

int func_173()//Position - 0x9AF1
{
	if (Global_15FA6 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_147B0[Global_15FA6 /*34*/].f_F, 20);
	}
	return 0;
}

int func_174()//Position - 0x9B17
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

void func_175(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x9B34
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

void func_176(char* sParam0, float fParam1)//Position - 0x9BCF
{
	func_178(sParam0);
	func_177(fParam1);
}

void func_177(float fParam0)//Position - 0x9BE3
{
	if (fParam0 != 0f)
	{
	}
}

void func_178(char* sParam0)//Position - 0x9BF2
{
	if (unk_0x3362CDE8460ED38B(sParam0, sParam0))
	{
	}
}

int func_179()//Position - 0x9C05
{
	if (!func_156(5))
	{
		return 1;
	}
	if (func_170())
	{
		return 1;
	}
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (SYSTEM::VMAG2(unk_0xB5D9AE572C19509E(unk_0xBC25C936A095B5BA())) > 1369f && !func_174())
		{
			return 0;
		}
	}
	if (func_164(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_180()//Position - 0x9C67
{
	if ((Global_19AF9 == func_133() && unk_0x8520DF5301DD9811()) && Global_19AFA)
	{
		return 1;
	}
	return 0;
}

void func_181()//Position - 0x9C92
{
	if (func_109(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0) != iLocal_73 && unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0) != iLocal_76)
			{
				iLocal_76 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			}
		}
	}
}

void func_182(int iParam0, var uParam1)//Position - 0x9CDC
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

void func_183()//Position - 0x9D7B
{
}

void func_184(int iParam0)//Position - 0x9D83
{
	if (iParam0 == -1)
	{
		iParam0 = func_133();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_186(iParam0);
	unk_0x8A623F2A0D19557F(0);
	unk_0xCB0D7BF24DBB59C6(1);
	Global_19AF6 = 0;
	func_185();
}

void func_185()//Position - 0x9DB9
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

void func_186(int iParam0)//Position - 0x9DF6
{
	Global_19AF9 = iParam0;
}

int func_187(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x9E04
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
		iParam1 = func_133();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_227())
		{
			return 0;
		}
	}
	vLocal_45 = { vParam0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			vVar1 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
			if (SYSTEM::VMAG2(unk_0xB5D9AE572C19509E(unk_0xBC25C936A095B5BA())) > 1369f && !func_174())
			{
				return 0;
			}
		}
		if (!Global_19B04.f_2360)
		{
			return 0;
		}
		if (func_116(0))
		{
			return 0;
		}
		if (func_170())
		{
			return 0;
		}
		if (func_226())
		{
			return 0;
		}
		if (Global_19AF9 != -1)
		{
			return 0;
		}
		if (func_13(func_10()))
		{
			if (func_164(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()) && !bParam4)
		{
			if ((vVar1.z - vLocal_45.z) > 50f)
			{
				return 0;
			}
		}
		if (!func_225(iParam1))
		{
			return 0;
		}
		if (func_13(func_10()))
		{
			if (func_224(func_10()) == 4 || func_224(func_10()) == 5)
			{
				return 0;
			}
		}
		if (func_13(func_10()))
		{
			if (!func_223(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_222(Global_19B04.f_6186.f_2B[iParam1]))
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
		if (func_221())
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
		if (!func_212(4))
		{
			return 0;
		}
		if (!func_156(5))
		{
			return 0;
		}
		if (func_211(iParam1, iParam2) && !bParam3)
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
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_211(0, 0))
		{
			return 0;
		}
		if (Global_634F)
		{
			return 0;
		}
		if (func_225(30) && !func_211(30, 0))
		{
			if (iParam1 != 30)
			{
				if (SYSTEM::VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_13(func_10()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				vVar3 = { Global_19B04.f_932.f_21B.f_8E8[iVar2 /*3*/] };
				iVar4 = Global_19B04.f_932.f_21B.f_8E4[iVar2];
				if (func_210(iVar4))
				{
					if (func_188(iVar2))
					{
						if (!func_91(vVar3, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false), vVar3) < (210f * 210f))
							{
								if (func_10() != iVar2)
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

bool func_188(int iParam0)//Position - 0xA19E
{
	int iVar0;
	
	iVar0 = Global_19B04.f_932.f_21B.f_8E4[iParam0];
	return func_189(iVar0);
}

int func_189(int iParam0)//Position - 0xA1BF
{
	return func_190(iParam0, 1);
}

int func_190(int iParam0, int iParam1)//Position - 0xA1CE
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_210(iParam0))
	{
		return 0;
	}
	func_191(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_191(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0xA221
{
	func_192(func_203(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_192(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0xA23F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_202(iParam0, iParam1))
	{
		iVar0 = func_201(iParam1);
		iVar1 = func_199(iParam0);
		iVar2 = (func_199(iParam0) - func_199(iParam1));
		iVar3 = (func_201(iParam0) - func_201(iParam1));
		iVar4 = (func_198(iParam0) - func_198(iParam1));
		iVar5 = (func_197(iParam0) - func_197(iParam1));
		iVar6 = (func_196(iParam0) - func_196(iParam1));
		iVar7 = (func_195(iParam0) - func_195(iParam1));
	}
	else
	{
		iVar0 = func_201(iParam0);
		iVar1 = func_199(iParam1);
		iVar2 = (func_199(iParam1) - func_199(iParam0));
		iVar3 = (func_201(iParam1) - func_201(iParam0));
		iVar4 = (func_198(iParam1) - func_198(iParam0));
		iVar5 = (func_197(iParam1) - func_197(iParam0));
		iVar6 = (func_196(iParam1) - func_196(iParam0));
		iVar7 = (func_195(iParam1) - func_195(iParam0));
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
		iVar4 = (iVar4 + func_194(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_193(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_193(float fParam0, float fParam1, float fParam2)//Position - 0xA440
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

int func_194(int iParam0, int iParam1)//Position - 0xA482
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

int func_195(int iParam0)//Position - 0xA524
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_196(int iParam0)//Position - 0xA537
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_197(int iParam0)//Position - 0xA54A
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_198(int iParam0)//Position - 0xA55D
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_199(int iParam0)//Position - 0xA56F
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_200(unk_0xFA30DFD0084E92FE(iParam0, 31), -1, 1)) + 2011;
}

int func_200(bool bParam0, int iParam1, int iParam2)//Position - 0xA594
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_201(int iParam0)//Position - 0xA5AB
{
	return iParam0 & 15;
}

int func_202(int iParam0, int iParam1)//Position - 0xA5B8
{
	int iVar0;
	int iVar1;
	
	if (!func_210(iParam1) || !func_210(iParam0))
	{
		return 1;
	}
	iVar0 = func_199(iParam0);
	iVar1 = func_199(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_201(iParam0);
	iVar1 = func_201(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_198(iParam0);
	iVar1 = func_198(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_197(iParam0);
	iVar1 = func_197(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_196(iParam0);
	iVar1 = func_196(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_195(iParam0);
	iVar1 = func_195(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_203()//Position - 0xA6C4
{
	var uVar0;
	
	func_209(&uVar0, unk_0xF40D00CD7B81C0A8());
	func_208(&uVar0, unk_0x7E09057438B9D216());
	func_207(&uVar0, unk_0x6E06C0DB9B43570D());
	func_206(&uVar0, unk_0xBE14F159908E4EE5());
	func_205(&uVar0, unk_0xDD6A91E47ED4D0CF());
	func_204(&uVar0, unk_0x4EEB3860BFC44B78());
	return uVar0;
}

void func_204(var uParam0, int iParam1)//Position - 0xA70A
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

void func_205(var uParam0, int iParam1)//Position - 0xA790
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_206(var uParam0, int iParam1)//Position - 0xA7C3
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_201(*uParam0);
	iVar1 = func_199(*uParam0);
	if (iParam1 < 1 || iParam1 > func_194(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_207(var uParam0, int iParam1)//Position - 0xA814
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_208(var uParam0, int iParam1)//Position - 0xA84E
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_209(var uParam0, int iParam1)//Position - 0xA889
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_210(int iParam0)//Position - 0xA8C5
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
	iVar0 = func_195(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_196(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_197(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_199(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_201(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_198(iParam0);
	if (iVar5 < 1 || iVar5 > func_194(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_211(int iParam0, int iParam1)//Position - 0xA9A1
{
	if (unk_0xFA30DFD0084E92FE(Global_19B04.f_6186.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_212(int iParam0)//Position - 0xA9C4
{
	int iVar0;
	
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				iVar0 = func_10();
				if (!func_13(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_220()) || Global_1974B) || Global_62BF) || func_219()) || func_51(8, -1)) || func_218()) || func_217()) || func_216()) || func_215()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1) || func_220()) || Global_62BF) || func_219()) || func_51(8, -1)) || func_216()) || func_218()) || func_217()) || func_215()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_220()) || Global_1974B) || Global_62BF) || func_219()) || func_51(8, -1)) || func_216()) || func_218()) || func_217()) || func_215()) || Global_19B04.f_1DEB.f_397[iVar0] == 5) || Global_8E64 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_220()) || Global_1974B) || Global_62BF) || func_219()) || func_51(8, -1)) || func_218()) || func_217()) || func_215()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_220() || unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0) || func_51(8, -1)) || func_215()) || func_214()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_51(8, -1) || func_218()) || func_217()) || func_214()) || func_213())
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
							if ((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || func_220()) || Global_62BF) || func_219()) || func_51(8, -1)) || func_217()) || func_216()) || func_215()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || !unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) || !unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F())) || !unk_0x726D9204B160D23E()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || func_220()) || func_217()) || Global_1974B) || Global_62BF) || func_219()) || Global_90C1) || func_51(8, -1)) || func_216()) || func_214()) || func_215()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || !unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) || !unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F())) || !unk_0x726D9204B160D23E()) || unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0)) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1)) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0x9273B3557334635D(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || func_220()) || Global_1974B) || Global_62BF) || func_219()) || func_51(8, -1)) || func_216()) || func_214()) || func_218()) || func_217()) || func_215())
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

var func_213()//Position - 0xB0E1
{
	return Global_16B42.f_1;
}

int func_214()//Position - 0xB0EF
{
	if (Global_15FA6 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_147B0[Global_15FA6 /*34*/].f_F, 13);
	}
	return 0;
}

int func_215()//Position - 0xB115
{
	if (unk_0xB731B8C5BCE89836(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_216()//Position - 0xB12F
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

bool func_217()//Position - 0xB159
{
	return Global_16B4F.f_142 > 0;
}

bool func_218()//Position - 0xB16A
{
	return Global_16B4F.f_141 > 0;
}

var func_219()//Position - 0xB17B
{
	return Global_140856;
}

int func_220()//Position - 0xB187
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		return Global_161D2.f_2C == 1;
	}
	return 0;
}

int func_221()//Position - 0xB1A3
{
	func_49();
	if (Global_C60[Global_389D /*2811*/][0 /*281*/].f_103 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_222(int iParam0)//Position - 0xB1CB
{
	return func_202(func_203(), iParam0);
}

int func_223(int iParam0, int iParam1, int iParam2)//Position - 0xB1DD
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_10();
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

int func_224(int iParam0)//Position - 0xB2C1
{
	if (!func_13(iParam0))
	{
		return 7;
	}
	return Global_19B04.f_1DEB.f_397[iParam0];
}

bool func_225(int iParam0)//Position - 0xB2E5
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_227())
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

int func_226()//Position - 0xB343
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

int func_227()//Position - 0xB387
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

int func_228(int iParam0)//Position - 0xB442
{
	int iVar0;
	
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	if (Global_1542D[iParam0 /*2*/])
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < Global_1478C)
	{
		if (Global_1478C[iVar0 /*5*/] != -1)
		{
			if (Global_1164F.f_6D[Global_1478C[iVar0 /*5*/] /*4*/] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_229()//Position - 0xB4AA
{
	if (SYSTEM::VDIST(vLocal_50, -2255.21f, 4271.04f, 44.875f) < 5f)
	{
		iLocal_121 = 1;
	}
	else if (SYSTEM::VDIST(vLocal_50, -500.924f, -2165.36f, 7.6988f) < 5f)
	{
		iLocal_121 = 2;
	}
}

void func_230()//Position - 0xB4F5
{
	if (unk_0x724D816EA203A79E(iLocal_72) && !unk_0x1D403DFADBC2DE3C(iLocal_72, 0))
	{
		unk_0x2E35C4FA5F0ED22F(iLocal_72, false);
		unk_0x2CA123B0622F495C(unk_0x6F79ECA8C83E4357(iLocal_72));
		func_242(&iLocal_72, 1, 0, 1);
	}
	if (unk_0x724D816EA203A79E(iLocal_71) && !unk_0x1D403DFADBC2DE3C(iLocal_71, 0))
	{
		unk_0x2E9860A2B72187F5(iLocal_71, 310, true);
		unk_0x2E35C4FA5F0ED22F(iLocal_71, false);
	}
	if (unk_0x2DA8CA50A72528FB(iLocal_60))
	{
		unk_0x07B8ECB35A4ED3AC(&iLocal_60);
	}
	func_61(&iLocal_63);
	if (unk_0x2DA8CA50A72528FB(iLocal_61))
	{
		unk_0x07B8ECB35A4ED3AC(&iLocal_61);
	}
	if (unk_0x144E80F5C46A6B75("RE_CAR_STEAL_SCENE"))
	{
		if (func_161(iLocal_73))
		{
			unk_0x38E412DB4A45B900(iLocal_73, 0);
		}
		unk_0xC1300D0F3A74E20B("RE_CAR_STEAL_SCENE");
	}
	if (iLocal_121 == 2)
	{
		unk_0xDC5D58521808C640(joaat("rocoto"));
	}
	else
	{
		unk_0xDC5D58521808C640(joaat("peyote"));
	}
	func_16(&iLocal_73);
	if (func_161(iLocal_76))
	{
		unk_0xE82050D41B744FF3(iLocal_76, true);
	}
	unk_0xAF0732277B825027(0);
	unk_0xDF53A66AEE1401AA(1f);
	func_145(39, 0);
	func_145(40, 0);
	func_145(41, 0);
	func_145(42, 0);
	func_145(43, 0);
	func_145(44, 0);
	func_231(-1);
	func_63(&uLocal_138, 0, 0);
	unk_0x95E4B6F3ED223F5A();
}

void func_231(int iParam0)//Position - 0xB611
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_133();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_180())
	{
		func_235(iParam0);
		unk_0x3FF92BBF0607A406(0, 0);
		Global_19AFB = unk_0x105601648511CC64();
		func_234(30000);
		StringCopy(&cVar0, func_233(Global_19AF9, 1), 64);
		if (func_132(Global_19AF9) > 0)
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
	func_232(&Global_62F8);
	Global_19AFA = 0;
	func_186(-1);
}

void func_232(var uParam0)//Position - 0xB6C6
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

char* func_233(int iParam0, bool bParam1)//Position - 0xB703
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

void func_234(int iParam0)//Position - 0xB94C
{
	Global_8E68 = (unk_0x105601648511CC64() + iParam0);
}

void func_235(int iParam0)//Position - 0xB95E
{
	func_236(iParam0, 0, func_241(iParam0));
}

void func_236(int iParam0, int iParam1, int iParam2)//Position - 0xB973
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_203();
	func_239(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_238(iParam0, &uVar0);
	Var1 = { func_237(&uVar0) };
}

struct<16> func_237(var uParam0)//Position - 0xB9A2
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_197(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_196(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_195(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_198(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_201(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_199(*uParam0), 64);
	return Var0;
}

void func_238(int iParam0, var uParam1)//Position - 0xBA73
{
	Global_19B04.f_6186.f_2B[iParam0] = *uParam1;
}

void func_239(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xBA8B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_199(*uParam0);
	iVar1 = func_201(*uParam0);
	iVar2 = func_198(*uParam0);
	iVar3 = func_197(*uParam0);
	iVar4 = func_196(*uParam0);
	iVar5 = func_195(*uParam0);
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
	iVar6 = func_194(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_194(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_240(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_240(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xBC0D
{
	func_209(uParam0, iParam1);
	func_208(uParam0, iParam2);
	func_207(uParam0, iParam3);
	func_205(uParam0, iParam5);
	func_206(uParam0, iParam4);
	func_204(uParam0, iParam6);
}

int func_241(int iParam0)//Position - 0xBC45
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

void func_242(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0xBDE8
{
	if (unk_0x724D816EA203A79E(*iParam0))
	{
		if (!unk_0x36CEFBE9B745A58D(*iParam0))
		{
			unk_0xB71D41C0310C93DE(*iParam0, false, 1);
			if (iParam3 == 0)
			{
				unk_0xD999D66C5AFA4BE3(*iParam0);
			}
			unk_0x22321800954A532E(*iParam0, bParam1);
			if (iParam2 == 1)
			{
				unk_0x2E35C4FA5F0ED22F(*iParam0, false);
			}
		}
		unk_0x02537C8C1BEEB477(iParam0);
	}
}

