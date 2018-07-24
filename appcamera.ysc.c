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
	char* sLocal_19[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_20[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_21 = 0;
	char* sLocal_22[7] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	bool bLocal_29 = 0;
	bool bLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	vector3 vLocal_34 = { 0f, 0f, 0f };
	vector3 vLocal_35 = { 0f, 0f, 0f };
	float fLocal_36 = 0f;
	float fLocal_37 = 0f;
	float fLocal_38 = 0f;
	float fLocal_39 = 0f;
	float fLocal_40 = 0f;
	vector3 vLocal_41 = { 0f, 0f, 0f };
	vector3 vLocal_42 = { 0f, 0f, 0f };
	vector3 vLocal_43 = { 0f, 0f, 0f };
	vector3 vLocal_44 = { 0f, 0f, 0f };
	vector3 vLocal_45 = { 0f, 0f, 0f };
	vector3 vLocal_46 = { 0f, 0f, 0f };
	float fLocal_47 = 0f;
	float fLocal_48 = 0f;
	float fLocal_49 = 0f;
	float fLocal_50 = 0f;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	float fLocal_65 = 0f;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
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
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	char cLocal_96[16] = "";
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	float fLocal_107 = 0f;
	float fLocal_108 = 0f;
	float fLocal_109 = 0f;
	float fLocal_110 = 0f;
	float fLocal_111 = 0f;
	float fLocal_112 = 0f;
	float fLocal_113 = 0f;
	float fLocal_114 = 0f;
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
	iLocal_26 = 1;
	bLocal_29 = true;
	bLocal_30 = true;
	fLocal_36 = 0f;
	fLocal_37 = 172f;
	fLocal_40 = 0.7f;
	iLocal_88 = 1200;
	iLocal_89 = 1200;
	iLocal_90 = 166;
	fLocal_107 = 0.5f;
	fLocal_108 = 0.85f;
	fLocal_109 = 0.5f;
	fLocal_110 = -0.25f;
	fLocal_111 = 0.25f;
	fLocal_112 = 0.3f;
	fLocal_113 = 0.3f;
	fLocal_114 = 0.075f;
	unk_0xC1A27D367CCA8C15();
	if (unk_0x83D607D7994DEF3A() == 0)
	{
		fLocal_40 = 1f;
	}
	else
	{
		fLocal_40 = 0.7f;
	}
	if (!func_141())
	{
		Global_4118CE = 99;
		Global_4118CF = 99;
		iLocal_24 = 99;
	}
	else
	{
		Global_4118CE = 0;
		Global_4118CF = 0;
	}
	sLocal_19[0] = "No_Filter";
	sLocal_19[1] = "phone_cam1";
	sLocal_19[2] = "phone_cam2";
	sLocal_19[3] = "phone_cam3";
	sLocal_19[4] = "phone_cam4";
	sLocal_19[5] = "phone_cam5";
	sLocal_19[6] = "phone_cam6";
	sLocal_19[7] = "phone_cam7";
	sLocal_19[8] = "phone_cam8";
	sLocal_19[9] = "phone_cam9";
	sLocal_19[10] = "phone_cam10";
	sLocal_19[11] = "phone_cam11";
	sLocal_19[12] = "phone_cam12";
	sLocal_20[0] = "No_Border";
	sLocal_20[1] = "frame1";
	sLocal_20[2] = "frame2";
	sLocal_20[3] = "frame3";
	sLocal_20[4] = "frame4";
	sLocal_20[5] = "frame5";
	sLocal_20[6] = "frame6";
	sLocal_20[7] = "frame7";
	sLocal_20[8] = "frame8";
	sLocal_20[9] = "frame9";
	sLocal_20[10] = "frame10";
	sLocal_20[11] = "frame11";
	sLocal_20[12] = "frame12";
	sLocal_22[0] = "No_Expression";
	sLocal_22[1] = "mood_Aiming_1";
	sLocal_22[2] = "mood_Happy_1";
	sLocal_22[3] = "mood_smug_1";
	sLocal_22[4] = "mood_Injured_1";
	sLocal_22[5] = "mood_sulk_1";
	sLocal_22[6] = "mood_Angry_1";
	func_140();
	if (func_139(1, 1, !iLocal_31, 1))
	{
		iLocal_31 = 1;
	}
	func_138();
	iLocal_63 = unk_0x2F079D1FC5F6CB99();
	if (Global_3866 == 0)
	{
		fLocal_47 = 0.207f;
		fLocal_48 = 0.158f;
		fLocal_49 = 0.207f;
		fLocal_50 = 0.335f;
	}
	else
	{
		fLocal_47 = 0.24f;
		fLocal_48 = 0.258f;
		fLocal_49 = 0.24f;
		fLocal_50 = 0.435f;
	}
	Global_41C1 = 0;
	Global_41C2 = 0;
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		if (unk_0x58CB9BE52FDF3608(unk_0xBC25C936A095B5BA()))
		{
			Global_41C1 = 1;
		}
		if (unk_0x673C9B15B29B7BBA())
		{
			Global_41C1 = 1;
		}
		if (unk_0xE59B7F5A03335350(unk_0x25480ACDBB6DB8F1(unk_0xBC25C936A095B5BA()), 0))
		{
			Global_41C1 = 1;
		}
		if (unk_0xA0747FCBCF1D1424(unk_0xBC25C936A095B5BA(), 78, 1))
		{
			Global_41C1 = 1;
		}
		if (unk_0x12FF218EB7AE24A7(unk_0xBC25C936A095B5BA()))
		{
			Global_41C1 = 1;
		}
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			if (iLocal_82 == 1)
			{
				Global_41C1 = 1;
			}
			iLocal_99 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			if ((((unk_0x6F79ECA8C83E4357(iLocal_99) == joaat("rhino") || unk_0x6F79ECA8C83E4357(iLocal_99) == joaat("cutter")) || unk_0x6F79ECA8C83E4357(iLocal_99) == joaat("submersible")) || unk_0x6F79ECA8C83E4357(iLocal_99) == -1435527158) || (unk_0x6F79ECA8C83E4357(iLocal_99) == -212993243 && unk_0xE8E192A5EFE0253F(iLocal_99, func_137(unk_0xBC25C936A095B5BA(), 1))))
			{
				Global_41C1 = 1;
			}
			else if (unk_0x3187EF5798B5D209(iLocal_99, -1, 0) == unk_0xBC25C936A095B5BA())
			{
				if (unk_0xEFA31351B754089B(iLocal_99) > 0f)
				{
					if (!Global_11542)
					{
						if (!func_136())
						{
							unk_0x194CCBD594974E0D(unk_0xBC25C936A095B5BA(), iLocal_99, 6, 4000);
						}
					}
				}
			}
		}
	}
	if (Global_11542)
	{
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			unk_0xA47A6B60353B4E1D(unk_0xB5CEFD608600A09F(), 0);
		}
	}
	unk_0x7CB6FD92BE491AD9(&Global_93B, 21);
	func_135(0);
	unk_0xF0059F27F7BB6680(&Global_93B, 17);
	if (Global_3863 == 0)
	{
		func_134();
	}
	else
	{
		iLocal_91 = unk_0x9934FEFB3B8C6DB8("camera_gallery");
		iLocal_92 = unk_0x9934FEFB3B8C6DB8("instructional_buttons");
		while (!unk_0xA7F138B5B1AB2CF6(iLocal_91) || !unk_0xA7F138B5B1AB2CF6(iLocal_92))
		{
			SYSTEM::WAIT(0);
			unk_0x2423B13D9CFAD1DD();
			unk_0xBBC4195AD74D153D(0, 25, 1);
		}
		if (Global_11542)
		{
			iLocal_95 = 2;
		}
		else
		{
			switch (func_133())
			{
				case 0:
					iLocal_95 = 2;
					break;
				
				case 2:
					iLocal_95 = 2;
					break;
				
				case 3:
					iLocal_95 = 2;
					break;
				}
		}
		func_132(iLocal_91, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(iLocal_95), -1082130432, -1082130432, -1082130432, -1082130432);
		func_131(iLocal_91, "CLOSE_SHUTTER");
		unk_0x29CD142125FE177B(Global_388A, "DISPLAY_VIEW");
		unk_0x1E1FB49121565EB6(16);
		unk_0xF9FBC2F3F73D94C9();
	}
	vLocal_41 = { Global_3875 };
	vLocal_42 = { Global_386E[Global_3866 /*3*/] };
	Global_41C2 = 1;
	iLocal_69 = 1;
	iLocal_70 = 1;
	iLocal_71 = 1;
	iLocal_72 = 1;
	iLocal_73 = 1;
	iLocal_74 = 1;
	iLocal_75 = 0;
	iLocal_76 = 0;
	if (Global_389D.f_1 > 3)
	{
		Global_389D.f_1 = 8;
	}
	if (iLocal_82 == 0)
	{
		unk_0x7CB6FD92BE491AD9(&Global_93D, 3);
	}
	func_129();
	unk_0x996AC9A66B2A5A3F(4);
	if (unk_0x215C26A962C2E3E1())
	{
	}
	if (Global_440000.f_22E8C)
	{
	}
	if (Global_440000.f_22E8E == 1)
	{
		iLocal_106 = 1;
	}
	if (iLocal_106 == 1)
	{
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		unk_0xD55638CE45B2B948(0, Global_387E);
		unk_0xD55638CE45B2B948(0, 186);
		unk_0x2423B13D9CFAD1DD();
		unk_0xBBC4195AD74D153D(0, 25, 1);
		unk_0xBBC4195AD74D153D(0, 0, 1);
		if (!Global_19B04.f_36C6.f_51)
		{
			if (!unk_0xFA30DFD0084E92FE(Global_411DCA, 13))
			{
				if (!unk_0xF16DAFF595E80F7C())
				{
					if (!unk_0xFA30DFD0084E92FE(Global_93C, 28))
					{
						if (iLocal_79 && iLocal_82 == 0)
						{
							unk_0xF0059F27F7BB6680(&Global_411DCA, 13);
							Global_19B04.f_36C6.f_51 = 1;
							func_128("CELL_FOC_HLP", -1);
						}
					}
				}
			}
		}
		if (!unk_0xE186ACC7BE9B244E())
		{
			if (Global_440000.f_22E8B == 0 && Global_440000.f_22E8C == 0)
			{
				unk_0x6DB77F071B43C870(15, 0f, -0.0375f);
			}
			unk_0x4E0EC60D119222B1(7);
			func_127();
			if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
			{
				unk_0x2E9860A2B72187F5(unk_0xBC25C936A095B5BA(), 200, 1);
			}
			unk_0xBBC4195AD74D153D(0, 44, 1);
			unk_0xBBC4195AD74D153D(0, 47, 1);
			unk_0xBBC4195AD74D153D(0, 91, 1);
			unk_0xBBC4195AD74D153D(0, 92, 1);
			unk_0xBBC4195AD74D153D(0, 68, 1);
			if (iLocal_100 == 0)
			{
				unk_0xD55638CE45B2B948(0, Global_3882);
			}
			unk_0xD55638CE45B2B948(0, Global_387F);
			if (unk_0x17FAADF9916EF741() || unk_0x422F9EDE839E6ABB())
			{
				iLocal_81 = 1;
				Global_389D.f_1 = 3;
				unk_0x121BBDEFA4F0C22B(0);
			}
			if (unk_0x87DD8C3CB85096D5())
			{
				Global_389D.f_1 = 3;
				unk_0x121BBDEFA4F0C22B(0);
			}
			if (unk_0xFA30DFD0084E92FE(Global_93C, 3))
			{
				Global_389D.f_1 = 3;
				unk_0x121BBDEFA4F0C22B(0);
			}
			if (unk_0x7AF0088ABFA713B6())
			{
				if (func_116())
				{
					Global_389D.f_1 = 3;
					unk_0x121BBDEFA4F0C22B(0);
				}
			}
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x74AAB09D79A6344E(unk_0xBC25C936A095B5BA(), 0))
				{
					Global_389D.f_1 = 3;
					unk_0x121BBDEFA4F0C22B(0);
				}
				if ((unk_0xA0747FCBCF1D1424(unk_0xBC25C936A095B5BA(), 78, 1) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0xC2D39D2C720A03B0(unk_0xB5CEFD608600A09F()))
				{
					if (func_115())
					{
					}
					else
					{
						Global_389D.f_1 = 3;
						unk_0x121BBDEFA4F0C22B(0);
					}
				}
				if (unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()) || unk_0x01666D754C368931(unk_0xBC25C936A095B5BA()))
				{
					if (Global_11542 == 1)
					{
						Global_389D.f_1 = 3;
					}
				}
				if (unk_0x149E9368A11035DE(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x2C13E57F6AC776F8(unk_0xBC25C936A095B5BA()) > 0.3f)
					{
						Global_389D.f_1 = 3;
					}
				}
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
				{
					func_114();
					iLocal_99 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
					if (unk_0xEFA31351B754089B(iLocal_99) < 0f)
					{
						func_112(0);
					}
					if (iLocal_66 == 1)
					{
						if (iLocal_67 == 1)
						{
							if (!unk_0xF38DDD0729207956())
							{
								func_112(0);
							}
						}
						else if (!unk_0xF38DDD0729207956())
						{
							iLocal_67 = 1;
							SYSTEM::WAIT(0);
							unk_0x2423B13D9CFAD1DD();
						}
					}
				}
				else if (Global_11542 == 0)
				{
					if (unk_0xFA30DFD0084E92FE(Global_93B, 18))
					{
						func_111();
						if ((Global_389D == 0 || Global_389D == 1) || Global_389D == 2)
						{
							if (!unk_0x580F3FB55E3185B1(unk_0xBC25C936A095B5BA()))
							{
								if (unk_0xADC5538B9DCA2177(unk_0xBC25C936A095B5BA()) == 2)
								{
								}
								else
								{
									Global_389D.f_1 = 3;
									unk_0x121BBDEFA4F0C22B(0);
								}
							}
						}
					}
				}
			}
			if (iLocal_93)
			{
				func_110();
			}
			if (Global_389D.f_1 < 4)
			{
			}
			if (iLocal_103 == 0)
			{
				if (iLocal_54 == 0)
				{
					if (iLocal_55 == 0)
					{
						if (iLocal_62 == 0)
						{
							if (Global_389D.f_1 > 3)
							{
								if (iLocal_100)
								{
									func_108();
									if (Global_41C6 == 0 && Global_41C3 == 6)
									{
										unk_0x7A4219270DF1663F(0, 1);
										unk_0x21B00B24BEAA7264();
										iLocal_100 = 0;
										func_107();
										if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
										{
											vLocal_34 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
										}
										func_106();
										iLocal_60++;
										if (func_141())
										{
											func_132(iLocal_91, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), -1082130432, -1082130432, -1082130432);
										}
										else
										{
											func_132(iLocal_91, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), -1082130432, -1082130432, -1082130432);
										}
										iLocal_83 = 0;
										iLocal_84 = 0;
										iLocal_85 = 0;
										iLocal_78 = 0;
										func_101();
									}
									if (Global_41C3 == 0)
									{
										iLocal_100 = 0;
										unk_0x21B00B24BEAA7264();
										if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
										{
											vLocal_34 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
										}
										func_100();
										iLocal_83 = 0;
										iLocal_84 = 0;
										iLocal_85 = 0;
										iLocal_78 = 0;
										func_101();
										if (func_141())
										{
											if (Global_4118CF == 0)
											{
												if (!unk_0xFA30DFD0084E92FE(Global_411DCA, 2))
												{
													func_132(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
										else if (!unk_0xFA30DFD0084E92FE(Global_411DCA, 2))
										{
											func_132(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
										}
										func_99();
										func_98(1);
									}
								}
								else if (Global_389D.f_1 != 9)
								{
									if (Global_41C2 == 1)
									{
										if (Global_41C1 == 0)
										{
											func_97();
										}
									}
									else if ((Global_B9B - Global_B9A) > Global_B9C)
									{
										if (func_96(2, Global_387D, 0))
										{
											if (func_95() && iLocal_78)
											{
											}
											else if (iLocal_78 == 0)
											{
												unk_0x121BBDEFA4F0C22B(0);
												unk_0x38FF8CB6377D36F6(iLocal_63);
												iLocal_94 = 0;
												if (Global_41C1 == 0)
												{
													func_106();
													Global_41C1 = 1;
													unk_0x7A4219270DF1663F(0, 1);
													iLocal_79 = 0;
													iLocal_69 = 1;
													iLocal_70 = 1;
													iLocal_71 = 1;
													iLocal_72 = 1;
													iLocal_73 = 1;
													iLocal_74 = 1;
													func_94(0, 0);
													func_98(0);
													iLocal_66 = 0;
													func_93();
													iLocal_93 = 0;
													func_91(0, 1);
													func_132(Global_388A, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
									}
									if (iLocal_52 == 0)
									{
										if (unk_0xF16DAFF595E80F7C())
										{
											func_90();
											iLocal_52 = 1;
										}
									}
									else if (!unk_0xF16DAFF595E80F7C())
									{
										func_90();
										iLocal_52 = 0;
									}
									if (iLocal_53 == 0)
									{
										if (unk_0xFA30DFD0084E92FE(Global_93B, 28))
										{
											func_90();
											iLocal_53 = 1;
										}
									}
									else if (!unk_0xFA30DFD0084E92FE(Global_93B, 28))
									{
										func_90();
										iLocal_53 = 0;
									}
									if (Global_41C1 == 1)
									{
										func_83();
									}
									else if (Global_389D.f_1 > 4)
									{
										if (iLocal_75 == 1 && iLocal_76 == 0)
										{
											func_79();
										}
										if (iLocal_75 == 0 && iLocal_76 == 1)
										{
											func_100();
											if (iLocal_87 == 1 || iLocal_87 == 0)
											{
												if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
												{
													if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
													{
														func_131(iLocal_91, "CLOSE_SHUTTER");
														iLocal_86 = unk_0x105601648511CC64();
														while (unk_0x105601648511CC64() < (iLocal_86 + iLocal_88) && Global_389D.f_1 > 3)
														{
															func_127();
															func_110();
															func_78();
															unk_0x2423B13D9CFAD1DD();
															SYSTEM::WAIT(0);
														}
													}
												}
												if (func_141())
												{
													if (Global_4118CF == 0)
													{
														if (!unk_0xFA30DFD0084E92FE(Global_411DCA, 2))
														{
															func_132(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
														}
													}
												}
												else if (!unk_0xFA30DFD0084E92FE(Global_411DCA, 2))
												{
													func_132(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
												func_110();
												func_127();
												iLocal_83 = 0;
												iLocal_84 = 0;
												iLocal_85 = 0;
												iLocal_78 = 0;
												func_101();
												iLocal_87 = 0;
												func_131(iLocal_91, "OPEN_SHUTTER");
											}
											func_99();
											func_98(1);
											func_77();
										}
									}
									if (iLocal_94 == 1)
									{
										func_74();
									}
									if (iLocal_80)
									{
										if (SYSTEM::TIMERB() > 500)
										{
											iLocal_79 = 1;
											iLocal_80 = 0;
											unk_0xF0059F27F7BB6680(&Global_93B, 18);
											if (Global_41C1 == 0)
											{
												func_91(1, 1);
											}
										}
									}
									if (iLocal_78 == 0)
									{
										if (iLocal_79 && Global_41C1 == 0)
										{
											if ((iLocal_81 == 0 && iLocal_76 == 0) && Global_41C4 == 0)
											{
												func_10();
											}
										}
										else
										{
											func_78();
										}
									}
									else if (iLocal_75 == 0)
									{
										func_5();
									}
								}
							}
						}
					}
				}
				else
				{
					if (Global_389D.f_1 > 3)
					{
						if (Global_41C2 == 1)
						{
							if (Global_41C1 == 0)
							{
								func_97();
							}
						}
					}
					func_4();
				}
			}
			else
			{
				if (iLocal_105 == 1)
				{
					UI::_SET_WARNING_MESSAGE_2("CELL_CAM_ALERT", "CELL_CAM_FW_1", iLocal_102, "CELL_CAM_FW_2", 0, -1, "", "", 1, 0);
				}
				if (iLocal_105 == 2)
				{
					UI::_SET_WARNING_MESSAGE_2("CELL_CAM_ALERT", "ERROR_NO_SC_CAMERAPHONE", iLocal_102, "", 0, -1, "", "", 1, 0);
				}
				if (iLocal_105 == 6)
				{
					UI::_SET_WARNING_MESSAGE_2("CELL_CAM_ALERT", "SC_ERROR_BANNED", iLocal_102, "", 0, -1, "", "", 1, 0);
				}
				if (iLocal_105 == 3)
				{
					UI::_SET_WARNING_MESSAGE_2("CELL_CAM_ALERT", "ERROR_UPDATE_SC_CAMERAPHONE", iLocal_102, "", 0, -1, "", "", 1, 0);
				}
				if (iLocal_105 == 7)
				{
					if (unk_0xA76D65C63ED50F67() || unk_0xF49912B78E2591B6())
					{
						UI::_SET_WARNING_MESSAGE_2("CELL_CAM_ALERT", "CELL_CAM_TEMP_3X", iLocal_102, "", 0, -1, "", "", 1, 0);
					}
					if (unk_0x3E9993F328985CCB() || unk_0xF7E138CFA19B55E7())
					{
						UI::_SET_WARNING_MESSAGE_2("CELL_CAM_ALERT", "CELL_CAM_TEMP_3P", iLocal_102, "", 0, -1, "", "", 1, 0);
					}
					if (unk_0x8ACB0C3FACC09467())
					{
						UI::_SET_WARNING_MESSAGE_2("CELL_CAM_ALERT", "CELL_CAM_TEMP_30", iLocal_102, "", 0, -1, "", "", 1, 0);
					}
				}
				if (iLocal_105 == 4)
				{
					UI::_SET_WARNING_MESSAGE_2("CELL_CAM_ALERT", "CELL_CAM_CCW_1", iLocal_102, "CELL_CAM_CCW_2", 0, -1, "", "", 1, 0);
				}
				if (iLocal_105 == 5)
				{
					iVar0 = unk_0x85CB9EFD5FE33ADA();
					switch (iVar0)
					{
						case -1:
							UI::_SET_WARNING_MESSAGE_2("CELL_CAM_ALERT", "HUD_AGE_I", iLocal_102, "", 0, -1, "", "", 1, 0);
							break;
						
						case 0:
							UI::_SET_WARNING_MESSAGE_2("CELL_CAM_ALERT", "HUD_AGE_P", iLocal_102, "", 0, -1, "", "", 1, 0);
							break;
						
						case 1:
							UI::_SET_WARNING_MESSAGE_2("CELL_CAM_ALERT", "HUD_AGE_C", iLocal_102, "", 0, -1, "", "", 1, 0);
							break;
						
						case 2:
							UI::_SET_WARNING_MESSAGE_2("CELL_CAM_ALERT", "HUD_AGE_T", iLocal_102, "", 0, -1, "", "", 1, 0);
							break;
						
						default:
							UI::_SET_WARNING_MESSAGE_2("CELL_CAM_ALERT", "HUD_AGE_P", iLocal_102, "", 0, -1, "", "", 1, 0);
							break;
						}
				}
				if (iLocal_105 == 0)
				{
				}
				if (iLocal_105 == 2 || iLocal_105 == 3)
				{
					if (unk_0x694514BD37EC4E94(2, 202))
					{
						iLocal_103 = 0;
						iLocal_105 = 0;
						func_91(0, 1);
					}
					if (unk_0x694514BD37EC4E94(2, 201))
					{
						iLocal_104 = 1;
					}
					if (iLocal_104 == 1)
					{
						if (unk_0x093484B35A948BFC(2, 201))
						{
							iLocal_103 = 0;
							iLocal_105 = 0;
							func_91(0, 1);
							iLocal_104 = 0;
							unk_0x1D7117732BAA49CA("Gallery");
							unk_0x6898F3C29B2AC47F();
						}
					}
				}
				else if (iLocal_105 == 7)
				{
					if (unk_0xF7E138CFA19B55E7())
					{
						if (unk_0x694514BD37EC4E94(2, 201))
						{
							iLocal_103 = 0;
							iLocal_105 = 0;
							func_91(0, 1);
							iLocal_62 = 0;
						}
					}
					else if (unk_0x694514BD37EC4E94(2, 202))
					{
						iLocal_103 = 0;
						iLocal_105 = 0;
						func_91(0, 1);
						iLocal_62 = 0;
					}
					if (!unk_0xF7E138CFA19B55E7())
					{
						if (unk_0x694514BD37EC4E94(2, Global_3881))
						{
							iLocal_103 = 0;
							iLocal_105 = 0;
							func_91(0, 1);
							if (unk_0xFA30DFD0084E92FE(Global_93C, 28))
							{
								iLocal_62 = 0;
							}
							else
							{
								iLocal_62 = 2;
							}
							iLocal_58 = unk_0x105601648511CC64();
							unk_0xDF332625237EA533(1);
						}
					}
				}
				else if (unk_0x694514BD37EC4E94(2, 201))
				{
					iLocal_103 = 0;
					iLocal_105 = 0;
					func_91(0, 1);
				}
			}
		}
		iLocal_59 = unk_0x105601648511CC64();
		if (func_3() || iLocal_81)
		{
			func_1(0);
			func_94(0, 0);
			func_98(0);
			iLocal_66 = 0;
			func_93();
			Global_41C1 = 0;
			Global_41C2 = 0;
			Global_41C4 = 0;
			unk_0xB0B0FE33F4F22679(&iLocal_91);
			unk_0xB0B0FE33F4F22679(&iLocal_92);
			unk_0x121BBDEFA4F0C22B(0);
			if (Global_3945 == 1)
			{
				unk_0xF0059F27F7BB6680(&Global_93B, 17);
			}
			else
			{
				unk_0x7CB6FD92BE491AD9(&Global_93B, 17);
			}
			unk_0x7A4219270DF1663F(0, 1);
			unk_0xA47A6B60353B4E1D(unk_0xB5CEFD608600A09F(), 1);
			unk_0x7CB6FD92BE491AD9(&Global_93D, 3);
			unk_0x7CB6FD92BE491AD9(&Global_411DCA, 3);
			unk_0xC0404835F30391BB(15);
			Global_41C5 = 1;
			unk_0x38FF8CB6377D36F6(iLocal_63);
			unk_0x26D344275839A25E(iLocal_63);
			unk_0x21B00B24BEAA7264();
			func_93();
			unk_0xFD068BE6296B968B(0);
			unk_0x696835D78F5EA372(0);
			unk_0x2273C07E7BC105FB(1f);
			if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
			{
				unk_0xA3860F0641D38992(unk_0xBC25C936A095B5BA(), "Mood_Normal_1", 0);
				unk_0x851D6A4006011A10(unk_0xBC25C936A095B5BA());
			}
			if (Global_4118CF > 0 && Global_4118CF < 13)
			{
				unk_0x786556581D95BCB2(sLocal_20[Global_4118CF]);
			}
			unk_0x7CB6FD92BE491AD9(&Global_93B, 18);
			func_91(0, 1);
			if (func_139(0, 1, iLocal_31, 1))
			{
				iLocal_31 = 0;
			}
			unk_0x95E4B6F3ED223F5A();
		}
	}
}

void func_1(int iParam0)//Position - 0x109F
{
	if (func_2())
	{
		if (iParam0 == 1)
		{
			unk_0x1D21497755DD8FB3(1);
		}
		else if (Global_389D.f_1 > 3)
		{
			unk_0x1D21497755DD8FB3(0);
		}
	}
}

int func_2()//Position - 0x10CA
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_11542)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0xEBC6179F395EFBEB();
	iVar1 = unk_0x3D875C2512206692(iVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_411EA0 || iVar2)
	{
		return 1;
	}
	return 1;
}

int func_3()//Position - 0x1111
{
	if (((Global_389D.f_1 == 1 || Global_389D.f_1 == 3) || Global_389D.f_1 == 0) || Global_3865 == 1)
	{
		Global_3890 = 1;
		return 1;
	}
	return 0;
}

void func_4()//Position - 0x1154
{
	iLocal_57 = unk_0xF3D63CE90CC538E5(0);
	switch (iLocal_57)
	{
		case 0:
			iLocal_54 = 0;
			iLocal_60 = unk_0x1055DCEBEEDF9C9E();
			iLocal_61 = unk_0xBDB696689381DF2F();
			if (iLocal_55 == 1)
			{
				if (iLocal_78 == 0)
				{
					if (unk_0xA7F138B5B1AB2CF6(iLocal_91))
					{
						if (func_141())
						{
							if (Global_4118CF == 0)
							{
								if (!unk_0xFA30DFD0084E92FE(Global_411DCA, 2))
								{
									func_132(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
								}
							}
							func_132(iLocal_91, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), -1082130432, -1082130432, -1082130432);
						}
						else
						{
							if (!unk_0xFA30DFD0084E92FE(Global_411DCA, 2))
							{
								func_132(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							func_132(iLocal_91, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (unk_0xA7F138B5B1AB2CF6(iLocal_91))
				{
					func_132(iLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_132(iLocal_91, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), -1082130432, -1082130432, -1082130432);
				}
				iLocal_55 = 0;
			}
			unk_0x21B00B24BEAA7264();
			break;
		
		case 1:
			if (!unk_0x258452E8294BD412())
			{
				unk_0xECBC4A7C88FEF9C3("CELL_SPINNER2");
				unk_0x465F4F702894A06C(1);
			}
			break;
		
		case 2:
			if (unk_0xFA30DFD0084E92FE(Global_93C, 28))
			{
				iLocal_54 = 0;
				iLocal_60 = 0;
				iLocal_61 = 0;
			}
			else
			{
				Global_389D.f_1 = 3;
				Global_41C5 = 1;
			}
			unk_0x21B00B24BEAA7264();
			break;
	}
}

void func_5()//Position - 0x12EF
{
	if (func_96(2, Global_387E, 0))
	{
		func_1(0);
		if (unk_0xFA30DFD0084E92FE(Global_93C, 28))
		{
			unk_0x121BBDEFA4F0C22B(0);
			SYSTEM::SETTIMERB(0);
			func_107();
			iLocal_78 = 0;
			if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
			{
				vLocal_34 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
			}
			func_106();
			iLocal_87 = 1;
		}
		else if (func_9())
		{
			if (unk_0xFA30DFD0084E92FE(Global_93C, 14))
			{
				func_128("CELL_299", -1);
			}
			else
			{
				func_106();
				func_8();
			}
		}
		else
		{
			iLocal_103 = 1;
			func_91(1, 1);
		}
	}
	if (unk_0xFA30DFD0084E92FE(Global_93B, 22))
	{
		func_1(0);
		while (SYSTEM::TIMERA() < 2000)
		{
			SYSTEM::WAIT(0);
			func_127();
			unk_0x2423B13D9CFAD1DD();
			func_78();
			func_114();
			func_110();
		}
		unk_0x121BBDEFA4F0C22B(0);
		func_107();
		SYSTEM::SETTIMERB(0);
		iLocal_78 = 0;
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			vLocal_34 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
		}
		func_101();
		func_106();
	}
	if (func_96(2, Global_3882, 0))
	{
		func_1(0);
		if (func_95() || unk_0xFA30DFD0084E92FE(Global_93C, 28))
		{
		}
		else
		{
			unk_0x121BBDEFA4F0C22B(0);
			SYSTEM::SETTIMERB(0);
			iLocal_87 = 1;
			func_107();
			iLocal_78 = 0;
			if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
			{
				vLocal_34 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
			}
			func_106();
		}
	}
	if (unk_0xFA30DFD0084E92FE(Global_93B, 28))
	{
		if (func_96(2, Global_3881, 0))
		{
			func_1(0);
			unk_0x121BBDEFA4F0C22B(0);
			unk_0x977063AC00E2E5B1(0, 0);
			SYSTEM::WAIT(0);
			unk_0x2423B13D9CFAD1DD();
			func_127();
			SYSTEM::WAIT(0);
			unk_0x2423B13D9CFAD1DD();
			func_127();
			unk_0x87A26CF52879CC06();
			unk_0x517D352C6F5FA2BC();
			Global_41C5 = 1;
			iLocal_94 = 0;
			iLocal_77 = 0;
			func_91(0, 1);
			Global_41C1 = 1;
			unk_0x7A4219270DF1663F(0, 1);
			iLocal_79 = 0;
			iLocal_69 = 1;
			iLocal_70 = 1;
			iLocal_71 = 1;
			iLocal_72 = 1;
			iLocal_73 = 1;
			iLocal_74 = 1;
			func_6();
			iLocal_78 = 0;
			if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
			{
				vLocal_34 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
			}
			func_94(0, 0);
			func_98(0);
			iLocal_66 = 0;
			func_93();
			if (!Global_267214.f_17E6)
			{
				unk_0xF0059F27F7BB6680(&Global_93B, 9);
			}
			iLocal_93 = 0;
			func_132(Global_388A, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

void func_6()//Position - 0x1529
{
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0xC4BA30B532FE260F(-1, "Menu_Accept", &Global_3892, 1);
		func_7();
	}
}

void func_7()//Position - 0x154F
{
	if (func_2())
	{
		unk_0x32A023E2F8F8566C(5);
	}
}

void func_8()//Position - 0x1563
{
	iLocal_100 = 1;
	Global_41C6 = 1;
	unk_0x7A4219270DF1663F(0, 1);
}

int func_9()//Position - 0x1578
{
	if (iLocal_58 == iLocal_59)
	{
		if (iLocal_56)
		{
			iLocal_56 = 1;
		}
	}
	if (Global_389D.f_1 < 4)
	{
		return 0;
	}
	if (iLocal_60 == iLocal_61 || iLocal_60 > iLocal_61)
	{
		iLocal_105 = 1;
		iLocal_102 = 2;
		return 0;
	}
	return 1;
}

void func_10()//Position - 0x15C0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0x50465D2C022B9E04(2))
	{
		iVar0 = 179;
		iVar1 = 21;
	}
	else
	{
		iVar0 = 228;
		iVar1 = 229;
	}
	if (iLocal_82)
	{
		func_69();
		func_65();
		func_64();
		fLocal_36 = unk_0xB9C3E6DB633FD55A();
		fLocal_37 = unk_0x2F8612BDC07F4064();
		if (iLocal_84 == 0)
		{
			if (unk_0x8FCEEB789599BD9B(2, iVar0) && !unk_0x8FCEEB789599BD9B(2, iVar1))
			{
				iLocal_84 = 1;
				func_132(iLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_132(iLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (unk_0xFA30DFD0084E92FE(Global_93B, 28))
				{
					func_62(iLocal_92, "SET_DATA_SLOT", 0f, unk_0xE57EAD1FEA2A6FAF(0, 177, true), "CELL_281");
					func_62(iLocal_92, "SET_DATA_SLOT", 1f, unk_0xE57EAD1FEA2A6FAF(2, 179, true), func_61());
					func_62(iLocal_92, "SET_DATA_SLOT", 2f, unk_0xE57EAD1FEA2A6FAF(2, 178, true), "CELL_CAM_SELFIE_2");
				}
				else
				{
					func_62(iLocal_92, "SET_DATA_SLOT", 0f, unk_0xE57EAD1FEA2A6FAF(0, 176, true), "CELL_280");
					func_62(iLocal_92, "SET_DATA_SLOT", 1f, unk_0xE57EAD1FEA2A6FAF(0, 177, true), "CELL_281");
					func_62(iLocal_92, "SET_DATA_SLOT", 2f, unk_0xE57EAD1FEA2A6FAF(2, 178, true), "CELL_CAM_SELFIE_2");
				}
				func_60();
				unk_0x29CD142125FE177B(iLocal_92, "SET_MAX_WIDTH");
				unk_0xD44E04EBBDC4CE88(fLocal_40);
				unk_0xF9FBC2F3F73D94C9();
				func_132(iLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!unk_0x8FCEEB789599BD9B(2, iVar0) || unk_0x8FCEEB789599BD9B(2, iVar1))
		{
			iLocal_84 = 0;
			func_101();
		}
		if (iLocal_85 == 0)
		{
			if (unk_0x8FCEEB789599BD9B(2, iVar1) && !unk_0x8FCEEB789599BD9B(2, iVar0))
			{
				iLocal_85 = 1;
				func_132(iLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_132(iLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (unk_0xFA30DFD0084E92FE(Global_93B, 28))
				{
					func_62(iLocal_92, "SET_DATA_SLOT", 0f, unk_0xE57EAD1FEA2A6FAF(0, 177, true), "CELL_281");
					func_62(iLocal_92, "SET_DATA_SLOT", 1f, unk_0xE57EAD1FEA2A6FAF(2, 179, true), func_61());
				}
				else
				{
					func_62(iLocal_92, "SET_DATA_SLOT", 0f, unk_0xE57EAD1FEA2A6FAF(0, 176, true), "CELL_280");
					func_62(iLocal_92, "SET_DATA_SLOT", 1f, unk_0xE57EAD1FEA2A6FAF(0, 177, true), "CELL_281");
				}
				func_59();
				unk_0x29CD142125FE177B(iLocal_92, "SET_MAX_WIDTH");
				unk_0xD44E04EBBDC4CE88(fLocal_40);
				unk_0xF9FBC2F3F73D94C9();
				func_132(iLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!unk_0x8FCEEB789599BD9B(2, iVar1) || unk_0x8FCEEB789599BD9B(2, iVar0))
		{
			iLocal_85 = 0;
			func_101();
		}
	}
	else
	{
		unk_0x5EFA245B45A49778(0, 2, 1);
		unk_0x5EFA245B45A49778(0, 1, 1);
	}
	if (unk_0x8A0D8839261BAEEF(2))
	{
		func_101();
	}
	func_114();
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0x2E9860A2B72187F5(unk_0xBC25C936A095B5BA(), 200, 1);
	}
	if (unk_0x694514BD37EC4E94(2, 183) && iLocal_106 == 0)
	{
		unk_0xC4BA30B532FE260F(-1, "Menu_Navigate", &Global_3892, 1);
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			if (!unk_0xADC5538B9DCA2177(unk_0xBC25C936A095B5BA()) == 2)
			{
				if (unk_0xFA30DFD0084E92FE(Global_411DCA, 2))
				{
					unk_0x7CB6FD92BE491AD9(&Global_411DCA, 2);
					if (!unk_0xFA30DFD0084E92FE(Global_411DCA, 2))
					{
						func_132(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					unk_0xF0059F27F7BB6680(&Global_411DCA, 2);
					func_132(iLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
		}
	}
	if (iLocal_82)
	{
		if (iLocal_83 == 1)
		{
			iLocal_83 = 0;
			unk_0x29CD142125FE177B(iLocal_91, "SET_FOCUS_LOCK");
			unk_0x5E5DBD0A6623969E(false);
			func_58("CELL_FOCUS");
			unk_0x5E5DBD0A6623969E(true);
			unk_0xF9FBC2F3F73D94C9();
		}
		if (!func_57(14))
		{
			if (unk_0xFA30DFD0084E92FE(Global_411DCA, 10))
			{
				if ((Global_11542 == 0 && unk_0xB731B8C5BCE89836(joaat("pi_menu")) > 0) && func_56())
				{
					unk_0x29CD142125FE177B(iLocal_91, "SET_FOCUS_LOCK");
					unk_0x5E5DBD0A6623969E(true);
					unk_0x57016C44F10111F0("CELL_ACTTL");
					unk_0x607C19B90D297FE2(unk_0xFCB4C1AC11347344(&Global_41215E));
					unk_0x64989E60CF560CA1();
					unk_0x5E5DBD0A6623969E(false);
					unk_0xF9FBC2F3F73D94C9();
					unk_0x7CB6FD92BE491AD9(&Global_411DCA, 10);
				}
			}
		}
		else if (unk_0xFA30DFD0084E92FE(Global_411DCA, 10))
		{
			unk_0x7CB6FD92BE491AD9(&Global_411DCA, 10);
		}
		iLocal_33 = unk_0x105601648511CC64();
		if ((iLocal_33 - iLocal_32) > 1500)
		{
			if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
			{
				vLocal_35 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
				if (unk_0xF0F2FC9DE291567F(vLocal_35, vLocal_34, true) > 5f)
				{
					Global_389D.f_1 = 3;
					unk_0x121BBDEFA4F0C22B(0);
				}
				iLocal_32 = unk_0x105601648511CC64();
			}
		}
	}
	else if (iLocal_83)
	{
		if (!unk_0x8FCEEB789599BD9B(0, 182))
		{
			unk_0xC4BA30B532FE260F(-1, "Menu_Navigate", &Global_3892, 1);
			iLocal_83 = 0;
			unk_0x29CD142125FE177B(iLocal_91, "SET_FOCUS_LOCK");
			unk_0x5E5DBD0A6623969E(false);
			func_58("CELL_FOCUS");
			unk_0x5E5DBD0A6623969E(true);
			unk_0xF9FBC2F3F73D94C9();
		}
	}
	else if (unk_0x8FCEEB789599BD9B(0, 182))
	{
		unk_0xC4BA30B532FE260F(-1, "Menu_Navigate", &Global_3892, 1);
		iLocal_83 = 1;
		if (!func_57(14))
		{
			unk_0x29CD142125FE177B(iLocal_91, "SET_FOCUS_LOCK");
			unk_0x5E5DBD0A6623969E(true);
			func_58("CELL_FOCUS");
			unk_0x5E5DBD0A6623969E(true);
			unk_0xF9FBC2F3F73D94C9();
		}
	}
	if (func_141())
	{
		if (unk_0x694514BD37EC4E94(2, 186) && iLocal_106 == 0)
		{
			if (iLocal_82)
			{
				iLocal_24++;
				if (iLocal_24 > 0 && iLocal_24 < 7)
				{
					if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
					{
						unk_0xC4BA30B532FE260F(-1, "Menu_Navigate", &Global_3892, 1);
						unk_0xA3860F0641D38992(unk_0xBC25C936A095B5BA(), "Mood_Normal_1", 0);
						unk_0x851D6A4006011A10(unk_0xBC25C936A095B5BA());
						if (Global_389D == 0)
						{
							iVar4 = 0;
							iVar2 = unk_0x35C830BCF2BF70BE(unk_0xBC25C936A095B5BA(), 0);
							if (iVar2 == 20 || iVar2 == 14)
							{
								iVar4 = 1;
							}
							iVar3 = unk_0x35C830BCF2BF70BE(unk_0xBC25C936A095B5BA(), 1);
							if (iVar3 != -1)
							{
								iVar4 = 1;
							}
							if (iVar4 == 1)
							{
								if ((((iLocal_24 == 2 || iLocal_24 == 3) || iLocal_24 == 4) || iLocal_24 == 8) || iLocal_24 == 9)
								{
									if (iVar2 == -1 && iVar3 > -1)
									{
										if (iLocal_24 == 3)
										{
											unk_0xA3860F0641D38992(unk_0xBC25C936A095B5BA(), sLocal_22[iLocal_24], 0);
										}
									}
								}
								else
								{
									unk_0xA3860F0641D38992(unk_0xBC25C936A095B5BA(), sLocal_22[iLocal_24], 0);
								}
							}
							else
							{
								unk_0xA3860F0641D38992(unk_0xBC25C936A095B5BA(), sLocal_22[iLocal_24], 0);
							}
						}
						else
						{
							unk_0xA3860F0641D38992(unk_0xBC25C936A095B5BA(), sLocal_22[iLocal_24], 0);
						}
					}
				}
				if (iLocal_24 == 7 || iLocal_24 > 7)
				{
					iLocal_24 = 0;
				}
				if (iLocal_24 == 0)
				{
					if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
					{
						unk_0xA3860F0641D38992(unk_0xBC25C936A095B5BA(), "Mood_Normal_1", 0);
						unk_0x851D6A4006011A10(unk_0xBC25C936A095B5BA());
						unk_0xC4BA30B532FE260F(-1, "Menu_Navigate", &Global_3892, 1);
					}
				}
			}
		}
		if (unk_0x694514BD37EC4E94(2, 185) && iLocal_106 == 0)
		{
			if (iLocal_82)
			{
				if (bLocal_29 == 1)
				{
					unk_0xC4BA30B532FE260F(-1, "Menu_Navigate", &Global_3892, 1);
					if (iLocal_28 == 0)
					{
						iLocal_28 = 1;
						iLocal_27 = 1;
						if (unk_0x3362CDE8460ED38B(sLocal_19[Global_4118CE], "phone_cam12DUMMY"))
						{
						}
						else
						{
							unk_0xFD068BE6296B968B(1);
							unk_0x696835D78F5EA372(1);
						}
					}
					else
					{
						iLocal_28 = 0;
						iLocal_27 = 0;
						unk_0xFD068BE6296B968B(0);
						unk_0x696835D78F5EA372(0);
					}
				}
			}
			else if (bLocal_30 == 1)
			{
				if (iLocal_27 == 0)
				{
					iLocal_27 = 1;
					iLocal_28 = 1;
					unk_0xFD068BE6296B968B(1);
					unk_0x696835D78F5EA372(1);
				}
				else
				{
					iLocal_27 = 0;
					iLocal_28 = 0;
					unk_0xFD068BE6296B968B(0);
					unk_0x696835D78F5EA372(0);
				}
			}
		}
	}
	if (iLocal_26 == 1)
	{
		if (unk_0x694514BD37EC4E94(0, 172) && iLocal_106 == 0)
		{
			if (func_141())
			{
				Global_4118CF++;
				unk_0xC4BA30B532FE260F(-1, "Menu_Navigate", &Global_3892, 1);
			}
			if (Global_4118CF == 13)
			{
				func_98(0);
				unk_0x2273C07E7BC105FB(1f);
				unk_0x786556581D95BCB2(sLocal_20[(Global_4118CF - 1)]);
				Global_4118CF = 0;
				func_55();
				if (iLocal_21 == 1)
				{
					unk_0x7CB6FD92BE491AD9(&Global_411DCA, 2);
					iLocal_21 = 0;
					func_132(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
			if (Global_4118CF > 0 && Global_4118CF < 13)
			{
				iLocal_26 = 0;
				iLocal_25 = 0;
				unk_0x8AA3F48A15444B98(sLocal_20[Global_4118CF], 0);
			}
		}
	}
	if (Global_4118CF > 0)
	{
		if (iLocal_26 == 0)
		{
			if (unk_0x499783D01578C2D2(sLocal_20[Global_4118CF]))
			{
				iLocal_25 = 1;
				iLocal_26 = 1;
				if (!unk_0xF49118F64A2732AF())
				{
					func_98(1);
				}
				if (iLocal_21 == 0)
				{
					if (!unk_0xFA30DFD0084E92FE(Global_411DCA, 2))
					{
						iLocal_21 = 1;
					}
				}
				unk_0xF0059F27F7BB6680(&Global_411DCA, 2);
				func_132(iLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				unk_0x2273C07E7BC105FB(0.25f);
				unk_0x7EA0257A0F40A320(sLocal_20[Global_4118CF], 0);
			}
		}
		if (iLocal_25 == 1)
		{
			if (Global_4118CF == 1 || Global_4118CF == 3)
			{
			}
			if (Global_4118CF == 2 || Global_4118CF == 4)
			{
			}
		}
	}
	if (unk_0x694514BD37EC4E94(0, 173) && iLocal_106 == 0)
	{
		if (func_141())
		{
			func_93();
			Global_4118CE++;
			unk_0xC4BA30B532FE260F(-1, "Menu_Navigate", &Global_3892, 1);
		}
		if (Global_4118CE == 13)
		{
			Global_4118CE = 0;
		}
		if (Global_4118CE == 0)
		{
			if (func_141())
			{
				func_93();
			}
		}
		else
		{
			func_99();
		}
		func_54();
	}
	if (unk_0xF7DDAAF0EFDAFA22(0, 184) && iLocal_106 == 0)
	{
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) && !unk_0xADC5538B9DCA2177(unk_0xBC25C936A095B5BA()) == 2)
			{
				vLocal_34 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
				unk_0xC4BA30B532FE260F(-1, "Menu_Navigate", &Global_3892, 1);
				func_132(iLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_131(iLocal_91, "CLOSE_SHUTTER");
				iLocal_86 = unk_0x105601648511CC64();
				while (unk_0x105601648511CC64() < (iLocal_86 + iLocal_90) && Global_389D.f_1 > 3)
				{
					func_127();
					func_110();
					func_78();
					unk_0x2423B13D9CFAD1DD();
					SYSTEM::WAIT(0);
				}
				if (iLocal_82 == 0)
				{
					unk_0x38FF8CB6377D36F6(iLocal_63);
					iLocal_82 = 1;
					func_53(1);
					func_52();
					unk_0xF0059F27F7BB6680(&Global_93D, 3);
					iLocal_32 = unk_0x105601648511CC64();
				}
				else
				{
					iLocal_84 = 0;
					iLocal_85 = 0;
					func_53(0);
					iLocal_82 = 0;
					unk_0x7CB6FD92BE491AD9(&Global_93D, 3);
				}
				iLocal_86 = unk_0x105601648511CC64();
				while (unk_0x105601648511CC64() < (iLocal_86 + iLocal_88) && Global_389D.f_1 > 3)
				{
					func_127();
					func_110();
					func_78();
					unk_0x2423B13D9CFAD1DD();
					SYSTEM::WAIT(0);
				}
				func_131(iLocal_91, "OPEN_SHUTTER");
				if (func_141())
				{
					if (Global_4118CF == 0)
					{
						if (!unk_0xFA30DFD0084E92FE(Global_411DCA, 2))
						{
							func_132(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (!unk_0xFA30DFD0084E92FE(Global_411DCA, 2))
				{
					func_132(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_110();
				func_127();
				if (unk_0xFA30DFD0084E92FE(Global_93B, 28))
				{
					StringCopy(&cLocal_96, "CELL_296", 16);
					func_50();
				}
				else
				{
					StringCopy(&cLocal_96, "CELL_295", 16);
					func_27();
				}
			}
		}
	}
	if (iLocal_82 == 0)
	{
		if (iLocal_64 == 0)
		{
			if (unk_0x694514BD37EC4E94(0, 40) || unk_0x694514BD37EC4E94(0, 41))
			{
				fLocal_65 = unk_0x7B27D9AEFAB01B8B();
				if (fLocal_65 > 1f && fLocal_65 < 4.5f)
				{
					if (unk_0x1BD5EE88F32433CD(iLocal_63))
					{
						unk_0xC4BA30B532FE260F(iLocal_63, "Camera_Zoom", &Global_3892, 1);
					}
				}
				else
				{
					unk_0x38FF8CB6377D36F6(iLocal_63);
				}
				iLocal_64 = 1;
			}
		}
		else if (unk_0x8FCEEB789599BD9B(0, 40) || unk_0x8FCEEB789599BD9B(0, 41))
		{
			fLocal_65 = unk_0x7B27D9AEFAB01B8B();
			if (fLocal_65 > 1f && fLocal_65 < 4.5f)
			{
				if (unk_0x1BD5EE88F32433CD(iLocal_63))
				{
					unk_0xC4BA30B532FE260F(iLocal_63, "Camera_Zoom", &Global_3892, 1);
				}
			}
			else
			{
				unk_0x38FF8CB6377D36F6(iLocal_63);
			}
		}
		else
		{
			unk_0x38FF8CB6377D36F6(iLocal_63);
		}
	}
	if (func_96(2, Global_387E, 0))
	{
		fLocal_38 = unk_0xB9C3E6DB633FD55A();
		fLocal_39 = unk_0x2F8612BDC07F4064();
		unk_0x977063AC00E2E5B1(0, 0);
		unk_0xF0059F27F7BB6680(&Global_93B, 21);
		unk_0x38FF8CB6377D36F6(iLocal_63);
		iLocal_78 = 1;
		func_132(iLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_132(iLocal_91, "SHOW_REMAINING_PHOTOS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		unk_0xC4BA30B532FE260F(-1, "Camera_Shoot", &Global_3892, 1);
		func_131(iLocal_91, "CLOSE_SHUTTER");
		vLocal_43 = { -90.3f, 0f, 90f };
		unk_0xF960832D272B97D4(vLocal_43, 0);
		if (!func_141())
		{
			func_93();
		}
		Global_41C4 = 1;
		unk_0x7A4219270DF1663F(0, 1);
		while (Global_41C3 < 6 && Global_389D.f_1 > 3)
		{
			func_127();
			func_110();
			func_78();
			func_114();
			unk_0x2423B13D9CFAD1DD();
			SYSTEM::WAIT(0);
		}
		unk_0xA09E3BEE73FAD3C5(0, 0);
		if (Global_3863)
		{
			func_1(1);
		}
		iLocal_86 = unk_0x105601648511CC64();
		while (unk_0x105601648511CC64() < (iLocal_86 + iLocal_89) && Global_389D.f_1 > 3)
		{
			func_127();
			func_110();
			func_78();
			unk_0x2423B13D9CFAD1DD();
			SYSTEM::WAIT(0);
		}
		SYSTEM::SETTIMERA(0);
		func_131(iLocal_91, "OPEN_SHUTTER");
		unk_0x7CB6FD92BE491AD9(&Global_93B, 21);
		func_101();
		if (Global_389D.f_1 > 3)
		{
			if (Global_11542)
			{
				func_20(1086, 1, -1);
				func_19();
				func_16(23, 0);
			}
			else
			{
				switch (func_11())
				{
					case 0:
						unk_0x0D5F0AC615350E61(joaat("sp0_no_photos_taken"), 1f);
						break;
					
					case 1:
						unk_0x0D5F0AC615350E61(joaat("sp1_no_photos_taken"), 1f);
						break;
					
					case 2:
						unk_0x0D5F0AC615350E61(joaat("sp2_no_photos_taken"), 1f);
						break;
				}
				func_19();
			}
			func_98(0);
		}
		func_110();
	}
	if (unk_0xFA30DFD0084E92FE(Global_93B, 28))
	{
		if (func_96(2, Global_3881, 0))
		{
			unk_0x977063AC00E2E5B1(0, 0);
			SYSTEM::WAIT(0);
			unk_0x2423B13D9CFAD1DD();
			func_127();
			SYSTEM::WAIT(0);
			unk_0x2423B13D9CFAD1DD();
			func_127();
			unk_0x87A26CF52879CC06();
			unk_0x517D352C6F5FA2BC();
			Global_41C5 = 1;
			iLocal_94 = 0;
			iLocal_77 = 1;
			Global_41C1 = 1;
			unk_0x7A4219270DF1663F(0, 1);
			iLocal_79 = 0;
			iLocal_69 = 1;
			iLocal_70 = 1;
			iLocal_71 = 1;
			iLocal_72 = 1;
			iLocal_73 = 1;
			iLocal_74 = 1;
			func_6();
			iLocal_78 = 0;
			if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
			{
				vLocal_34 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
			}
			func_94(0, 0);
			func_98(0);
			iLocal_66 = 0;
			func_93();
			if (!Global_267214.f_17E6)
			{
				unk_0xF0059F27F7BB6680(&Global_93B, 9);
			}
			unk_0x121BBDEFA4F0C22B(0);
			iLocal_93 = 0;
			func_132(Global_388A, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

int func_11()//Position - 0x2403
{
	func_12();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_12()//Position - 0x241C
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_15(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_14(unk_0xBC25C936A095B5BA());
			if (func_13(iVar0) && (!func_57(14) || Global_196EB))
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

bool func_13(int iParam0)//Position - 0x2519
{
	return iParam0 < 3;
}

int func_14(int iParam0)//Position - 0x2525
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

int func_15(int iParam0)//Position - 0x2562
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

void func_16(int iParam0, int iParam1)//Position - 0x258C
{
	int iVar0;
	
	if (func_18(iParam0, iParam1))
	{
		iVar0 = func_17();
		Global_258004[iVar0] = iParam0;
	}
}

int func_17()//Position - 0x25AF
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

int func_18(int iParam0, var uParam1)//Position - 0x25E4
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

void func_19()//Position - 0x266A
{
	iLocal_72 = 1;
	iLocal_73 = 1;
	iLocal_74 = 1;
	iLocal_75 = 1;
	iLocal_76 = 0;
	Global_385E = { Global_386E[Global_3866 /*3*/] };
	func_91(0, 1);
	func_94(0, 0);
	func_98(0);
	iLocal_66 = 0;
	func_93();
	if (!unk_0xFA30DFD0084E92FE(Global_93C, 28))
	{
		if (unk_0x215C26A962C2E3E1() == 0)
		{
			if (unk_0xA76D65C63ED50F67())
			{
				if (iLocal_68 == 0)
				{
					iLocal_68 = 1;
				}
			}
		}
	}
}

void func_20(int iParam0, int iParam1, int iParam2)//Position - 0x26CD
{
	int iVar0;
	
	iVar0 = func_24(iParam0, func_25(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_23(iParam0))
	{
		func_22(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_21(iParam0, iVar0, iParam2, 1);
	}
}

void func_21(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x270F
{
	int iVar0;
	
	iVar0 = Global_269BC5[iParam0 /*3*/][func_25(uParam2)];
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_14F606[func_25(uParam2)] = iParam1;
			break;
		
		case 788:
			Global_14F60C[func_25(uParam2)] = iParam1;
			break;
		
		case 789:
			Global_14F612[func_25(uParam2)] = iParam1;
			break;
		
		case 790:
			Global_14F618[func_25(uParam2)] = iParam1;
			break;
		
		case 777:
			Global_14F5EE[func_25(uParam2)] = iParam1;
			break;
		
		case 778:
			Global_14F5F4[func_25(uParam2)] = iParam1;
			break;
		
		case 779:
			Global_14F5FA[func_25(uParam2)] = iParam1;
			break;
		
		case 780:
			Global_14F600[func_25(uParam2)] = iParam1;
			break;
		
		case 767:
			Global_14F5D6[func_25(uParam2)] = iParam1;
			break;
		
		case 768:
			Global_14F5DC[func_25(uParam2)] = iParam1;
			break;
		
		case 769:
			Global_14F5E2[func_25(uParam2)] = iParam1;
			break;
		
		case 770:
			Global_14F5E8[func_25(uParam2)] = iParam1;
			break;
		
		case 757:
			Global_14F61E[func_25(uParam2)] = iParam1;
			break;
		
		case 758:
			Global_14F624[func_25(uParam2)] = iParam1;
			break;
		
		case 759:
			Global_14F62A[func_25(uParam2)] = iParam1;
			break;
		
		case 760:
			Global_14F630[func_25(uParam2)] = iParam1;
			break;
		
		case 1303:
			Global_14F636[func_25(uParam2)] = iParam1;
			break;
		
		case 7229:
			Global_14F63C[func_25(uParam2)] = iParam1;
			break;
		
		case 639:
			Global_14F642[func_25(uParam2)] = iParam1;
			break;
		
		case 1278:
			Global_14F648[func_25(uParam2)] = iParam1;
			break;
		
		case 1876:
			Global_270CF3[0 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 2267:
			Global_270CF3[1 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 2925:
			Global_270CF3[2 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3054:
			Global_270CF3[3 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 7818:
			Global_270D5E[func_25(uParam2)] = iParam1;
			break;
		
		case 764:
			Global_14F64E[func_25(uParam2)] = iParam1;
			break;
		
		case 765:
			Global_14F654[func_25(uParam2)] = iParam1;
			break;
		
		case 766:
			Global_14F65A[func_25(uParam2)] = iParam1;
			break;
		
		case 1236:
			Global_14F660[func_25(uParam2)] = iParam1;
			break;
		
		case 3049:
			Global_270D27[0 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3050:
			Global_270D27[1 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3051:
			Global_270D27[2 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3052:
			Global_270D27[3 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3053:
			Global_270D27[4 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3632:
			Global_270D61[0 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3633:
			Global_270D61[1 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3634:
			Global_270D61[2 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3635:
			Global_270D61[3 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3636:
			Global_270D61[4 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3637:
			Global_270D71[0 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3638:
			Global_270D71[1 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3639:
			Global_270D71[2 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3640:
			Global_270D71[3 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3641:
			Global_270D71[4 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3217:
			Global_270D27[5 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3223:
			Global_270CF3[4 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3659:
			Global_270D81[func_25(uParam2)] = iParam1;
			break;
		
		case 3660:
			Global_270D8A[func_25(uParam2)] = iParam1;
			break;
		
		case 3661:
			Global_270D84[func_25(uParam2)] = iParam1;
			break;
		
		case 3662:
			Global_270D8D[func_25(uParam2)] = iParam1;
			break;
		
		case 3663:
			Global_270D87[func_25(uParam2)] = iParam1;
			break;
		
		case 3664:
			Global_270D90[func_25(uParam2)] = iParam1;
			break;
		
		case 3685:
			Global_270D93[func_25(uParam2)] = iParam1;
			break;
		
		case 3225:
			Global_270D27[6 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3226:
			Global_270CF3[5 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3230:
			Global_270D27[7 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3228:
			Global_270CF3[6 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4015:
			Global_270D27[8 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4016:
			Global_270CF3[7 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4018:
			Global_270D27[9 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4019:
			Global_270CF3[8 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4021:
			Global_270D27[10 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4022:
			Global_270CF3[9 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4024:
			Global_270D27[11 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4025:
			Global_270CF3[10 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6105:
			Global_270D27[12 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6106:
			Global_270CF3[11 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6163:
			Global_270D27[13 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6164:
			Global_270CF3[12 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6541:
			Global_270D27[14 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6542:
			Global_270CF3[13 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6554:
			Global_270D27[15 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6555:
			Global_270CF3[14 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6557:
			Global_270D27[16 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6558:
			Global_270CF3[15 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6560:
			Global_270D27[17 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6561:
			Global_270CF3[16 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_22(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)//Position - 0x2EC9
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_25(uParam2)];
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, iParam3);
	}
}

int func_23(int iParam0)//Position - 0x2EF9
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

int func_24(int iParam0, var uParam1, int iParam2)//Position - 0x30F1
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_25(uParam1)];
	if (unk_0x6CB99B97664C3727(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_25(var uParam0)//Position - 0x3123
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_26();
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

var func_26()//Position - 0x3157
{
	return Global_1407E0;
}

void func_27()//Position - 0x3163
{
	if (iLocal_106 == 1)
	{
		func_49();
		return;
	}
	if (iLocal_84 == 0 && iLocal_85 == 0)
	{
		func_132(iLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_132(iLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_62(iLocal_92, "SET_DATA_SLOT", 1f, unk_0xE57EAD1FEA2A6FAF(0, 177, true), "CELL_281");
		func_62(iLocal_92, "SET_DATA_SLOT", 0f, unk_0xE57EAD1FEA2A6FAF(0, 176, true), "CELL_280");
		if (iLocal_82)
		{
			if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
			{
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) || unk_0xADC5538B9DCA2177(unk_0xBC25C936A095B5BA()) == 2)
				{
					if (unk_0x50465D2C022B9E04(2) || unk_0xF7E138CFA19B55E7())
					{
						func_62(iLocal_92, "SET_DATA_SLOT", 2f, unk_0xE57EAD1FEA2A6FAF(0, 184, true), "CELL_SP_2NP_XB");
					}
					else
					{
						func_62(iLocal_92, "SET_DATA_SLOT", 2f, unk_0xE57EAD1FEA2A6FAF(0, 184, true), "CELL_SP_2NP_XB");
					}
				}
				else if ((Global_11542 == 0 && unk_0xB731B8C5BCE89836(joaat("pi_menu")) > 0) && func_56())
				{
					func_47();
				}
				else
				{
					if (unk_0x50465D2C022B9E04(2) || unk_0xF7E138CFA19B55E7())
					{
						func_62(iLocal_92, "SET_DATA_SLOT", 2f, unk_0xE57EAD1FEA2A6FAF(0, 184, true), "CELL_SP_2NP_XB");
					}
					else
					{
						func_62(iLocal_92, "SET_DATA_SLOT", 2f, unk_0xE57EAD1FEA2A6FAF(0, 184, true), "CELL_SP_2NP_XB");
					}
					func_62(iLocal_92, "SET_DATA_SLOT", 3f, unk_0xE57EAD1FEA2A6FAF(2, 183, true), "CELL_GRID");
					func_62(iLocal_92, "SET_DATA_SLOT", 4f, unk_0xC7CF72D26EA6A227(0, 1, true), "CELL_285");
					if (func_141())
					{
						func_46(5f);
						func_45(6f);
						if (func_29(1))
						{
							func_28(7f);
							if (bLocal_29)
							{
								func_62(iLocal_92, "SET_DATA_SLOT", 8f, unk_0xE57EAD1FEA2A6FAF(2, 185, true), "CELL_DEPTH");
							}
						}
						else if (bLocal_29)
						{
							func_62(iLocal_92, "SET_DATA_SLOT", 7f, unk_0xE57EAD1FEA2A6FAF(2, 185, true), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) || unk_0xADC5538B9DCA2177(unk_0xBC25C936A095B5BA()) == 2)
			{
				if (!unk_0xADC5538B9DCA2177(unk_0xBC25C936A095B5BA()) == 2)
				{
					func_62(iLocal_92, "SET_DATA_SLOT", 2f, unk_0xC7CF72D26EA6A227(0, 1, true), "CELL_285");
					func_62(iLocal_92, "SET_DATA_SLOT", 4f, unk_0xE57EAD1FEA2A6FAF(2, 183, true), "CELL_GRID");
					func_62(iLocal_92, "SET_DATA_SLOT", 5f, unk_0xE57EAD1FEA2A6FAF(0, 39, true), "CELL_284");
					if (func_141())
					{
						func_46(6f);
						func_45(7f);
						if (bLocal_30)
						{
							func_62(iLocal_92, "SET_DATA_SLOT", 3f, unk_0xE57EAD1FEA2A6FAF(0, 182, true), "CELL_FOCUS");
						}
						func_62(iLocal_92, "SET_DATA_SLOT", 8f, unk_0xE57EAD1FEA2A6FAF(2, 185, true), "CELL_DEPTH");
					}
				}
				else
				{
					func_62(iLocal_92, "SET_DATA_SLOT", 2f, unk_0xC7CF72D26EA6A227(0, 1, true), "CELL_285");
					if (func_141())
					{
						func_46(3f);
						func_45(4f);
						func_62(iLocal_92, "SET_DATA_SLOT", 8f, unk_0xE57EAD1FEA2A6FAF(2, 185, true), "CELL_DEPTH");
					}
				}
			}
			else
			{
				if (unk_0x50465D2C022B9E04(2) || unk_0xF7E138CFA19B55E7())
				{
					func_62(iLocal_92, "SET_DATA_SLOT", 2f, unk_0xE57EAD1FEA2A6FAF(0, 184, true), "CELL_SP_1NP_XB");
				}
				else
				{
					func_62(iLocal_92, "SET_DATA_SLOT", 2f, unk_0xE57EAD1FEA2A6FAF(0, 184, true), "CELL_SP_1NP_XB");
				}
				if (!unk_0xADC5538B9DCA2177(unk_0xBC25C936A095B5BA()) == 2)
				{
					func_62(iLocal_92, "SET_DATA_SLOT", 4f, unk_0xE57EAD1FEA2A6FAF(2, 183, true), "CELL_GRID");
					func_62(iLocal_92, "SET_DATA_SLOT", 5f, unk_0xC7CF72D26EA6A227(0, 1, true), "CELL_285");
					func_62(iLocal_92, "SET_DATA_SLOT", 6f, unk_0xE57EAD1FEA2A6FAF(0, 39, true), "CELL_284");
					if (func_141())
					{
						func_46(7f);
						func_45(8f);
						if (bLocal_30)
						{
							func_62(iLocal_92, "SET_DATA_SLOT", 3f, unk_0xE57EAD1FEA2A6FAF(0, 182, true), "CELL_FOCUS");
						}
						func_62(iLocal_92, "SET_DATA_SLOT", 9f, unk_0xE57EAD1FEA2A6FAF(2, 185, true), "CELL_DEPTH");
					}
				}
				else
				{
					func_62(iLocal_92, "SET_DATA_SLOT", 2f, unk_0xC7CF72D26EA6A227(0, 1, true), "CELL_285");
					if (func_141())
					{
						func_46(3f);
						func_45(4f);
						func_62(iLocal_92, "SET_DATA_SLOT", 5f, unk_0xE57EAD1FEA2A6FAF(2, 185, true), "CELL_DEPTH");
					}
				}
			}
		}
		unk_0x29CD142125FE177B(iLocal_92, "SET_MAX_WIDTH");
		unk_0xD44E04EBBDC4CE88(fLocal_40);
		unk_0xF9FBC2F3F73D94C9();
		func_132(iLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_28(float fParam0)//Position - 0x35C6
{
	func_62(iLocal_92, "SET_DATA_SLOT", fParam0, unk_0xE57EAD1FEA2A6FAF(0, 174, true), "CELL_ACTION");
}

int func_29(int iParam0)//Position - 0x35E6
{
	if (unk_0x7AF0088ABFA713B6())
	{
		if (func_44(Global_40004A, Global_40004B))
		{
			if (iParam0 == 0 || !func_30(Global_40004A, Global_40004B, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_30(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x3626
{
	return func_31(unk_0xBC25C936A095B5BA(), iParam0, iParam1, bParam2, bParam3, bParam4);
}

int func_31(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x3640
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	uVar0 = 4;
	uVar1 = 4;
	uVar2 = 5;
	if (iParam1 == 0)
	{
		iVar6 = 3;
	}
	else if (bParam3)
	{
		iVar6 = 1;
	}
	else if (bParam4)
	{
		iVar6 = 2;
	}
	else
	{
		iVar6 = 0;
	}
	func_39(iParam1, iParam2, &uVar0, &uVar1, &uVar2, iVar6, bParam5);
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		if (unk_0x6F79ECA8C83E4357(iParam0) == joaat("mp_f_freemode_01"))
		{
			iVar3 = func_38(iParam0);
			if (!iVar3 == -1)
			{
				if (func_37(&uVar0, iVar3))
				{
					return 1;
				}
			}
		}
		else
		{
			iVar4 = func_36(iParam0);
			if (!iVar4 == -1)
			{
				if (func_34(&uVar1, iVar4))
				{
					return 1;
				}
			}
		}
		if (unk_0x7AF0088ABFA713B6())
		{
			iVar5 = func_33(iParam0);
			if (!iVar5 == 0)
			{
				if (func_32(&uVar2, iVar5))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_32(var uParam0, int iParam1)//Position - 0x370F
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return 0;
	}
	if (unk_0xFA30DFD0084E92FE((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

int func_33(int iParam0)//Position - 0x3750
{
	int iVar0;
	
	iVar0 = unk_0xA86A4D206EC8EB16(iParam0, 1);
	return iVar0;
}

bool func_34(var uParam0, int iParam1)//Position - 0x3763
{
	return func_35(uParam0, iParam1);
}

int func_35(var uParam0, int iParam1)//Position - 0x3773
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return 0;
	}
	if (unk_0xFA30DFD0084E92FE((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

int func_36(int iParam0)//Position - 0x37B4
{
	int iVar0;
	
	iVar0 = unk_0x35C830BCF2BF70BE(iParam0, 0);
	return iVar0;
}

bool func_37(var uParam0, int iParam1)//Position - 0x37C7
{
	return func_35(uParam0, iParam1);
}

int func_38(int iParam0)//Position - 0x37D7
{
	int iVar0;
	
	iVar0 = unk_0x35C830BCF2BF70BE(iParam0, 0);
	return iVar0;
}

void func_39(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)//Position - 0x37EA
{
	func_43(uParam4, 91, 1);
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							break;
						
						case 1:
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							break;
						
						case 2:
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							break;
					}
					break;
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 6:
				case 26:
					if (bParam6)
					{
						func_42(uParam3, 16, 1);
						func_42(uParam3, 48, 1);
						func_42(uParam3, 49, 1);
						func_42(uParam3, 18, 1);
						func_42(uParam3, 50, 1);
						func_42(uParam3, 51, 1);
						func_42(uParam3, 52, 1);
						func_42(uParam3, 53, 1);
						func_42(uParam3, 38, 1);
						func_42(uParam3, 47, 1);
						func_42(uParam3, 111, 1);
						func_42(uParam3, 62, 1);
						func_40(uParam2, 16, 1);
						func_40(uParam2, 47, 1);
						func_40(uParam2, 48, 1);
						func_40(uParam2, 18, 1);
						func_40(uParam2, 37, 1);
						func_40(uParam2, 46, 1);
						func_40(uParam2, 110, 1);
					}
					func_43(uParam4, 3, 1);
					func_43(uParam4, 4, 1);
					func_43(uParam4, 5, 1);
					func_43(uParam4, 6, 1);
					func_43(uParam4, 7, 1);
					func_43(uParam4, 8, 1);
					func_43(uParam4, 9, 1);
					func_43(uParam4, 12, 1);
					func_43(uParam4, 14, 1);
					func_43(uParam4, 15, 1);
					func_43(uParam4, 16, 1);
					func_43(uParam4, 17, 1);
					func_43(uParam4, 18, 1);
					func_43(uParam4, 19, 1);
					func_43(uParam4, 20, 1);
					func_43(uParam4, 59, 1);
					func_43(uParam4, 60, 1);
					func_43(uParam4, 61, 1);
					func_43(uParam4, 62, 1);
					func_43(uParam4, 62, 1);
					func_43(uParam4, 63, 1);
					func_43(uParam4, 64, 1);
					func_43(uParam4, 65, 1);
					func_43(uParam4, 66, 1);
					func_43(uParam4, 67, 1);
					func_43(uParam4, 68, 1);
					func_43(uParam4, 69, 1);
					func_43(uParam4, 70, 1);
					func_43(uParam4, 71, 1);
					func_43(uParam4, 72, 1);
					func_43(uParam4, 21, 1);
					func_43(uParam4, 22, 1);
					func_43(uParam4, 23, 1);
					func_43(uParam4, 24, 1);
					func_43(uParam4, 25, 1);
					func_43(uParam4, 26, 1);
					func_43(uParam4, 36, 1);
					func_43(uParam4, 46, 1);
					func_43(uParam4, 38, 1);
					func_43(uParam4, 28, 1);
					func_43(uParam4, 10, 1);
					func_43(uParam4, 33, 1);
					func_43(uParam4, 92, 1);
					func_43(uParam4, 93, 1);
					func_43(uParam4, 94, 1);
					func_43(uParam4, 96, 1);
					func_43(uParam4, 97, 1);
					func_43(uParam4, 98, 1);
					func_43(uParam4, 100, 1);
					func_43(uParam4, 103, 1);
					func_43(uParam4, 104, 1);
					func_43(uParam4, 105, 1);
					func_43(uParam4, 106, 1);
					func_43(uParam4, 107, 1);
					func_43(uParam4, 108, 1);
					func_43(uParam4, 110, 1);
					func_43(uParam4, 112, 1);
					func_43(uParam4, 115, 1);
					func_43(uParam4, 116, 1);
					break;
				
				case 1:
					if (bParam6)
					{
						func_42(uParam3, 16, 1);
						func_42(uParam3, 48, 1);
						func_42(uParam3, 49, 1);
						func_42(uParam3, 18, 1);
						func_42(uParam3, 50, 1);
						func_42(uParam3, 51, 1);
						func_42(uParam3, 52, 1);
						func_42(uParam3, 53, 1);
						func_42(uParam3, 38, 1);
						func_42(uParam3, 47, 1);
						func_42(uParam3, 111, 1);
						func_42(uParam3, 62, 1);
						func_40(uParam2, 18, 1);
						func_40(uParam2, 49, 1);
						func_40(uParam2, 50, 1);
						func_40(uParam2, 51, 1);
						func_40(uParam2, 52, 1);
						func_40(uParam2, 62, 1);
						func_40(uParam2, 37, 1);
						func_40(uParam2, 46, 1);
						func_40(uParam2, 110, 1);
					}
					func_43(uParam4, 9, 1);
					func_43(uParam4, 12, 1);
					func_43(uParam4, 13, 1);
					func_43(uParam4, 17, 1);
					func_43(uParam4, 18, 1);
					func_43(uParam4, 19, 1);
					func_43(uParam4, 20, 1);
					func_43(uParam4, 59, 1);
					func_43(uParam4, 60, 1);
					func_43(uParam4, 61, 1);
					func_43(uParam4, 62, 1);
					func_43(uParam4, 62, 1);
					func_43(uParam4, 63, 1);
					func_43(uParam4, 64, 1);
					func_43(uParam4, 65, 1);
					func_43(uParam4, 66, 1);
					func_43(uParam4, 67, 1);
					func_43(uParam4, 68, 1);
					func_43(uParam4, 69, 1);
					func_43(uParam4, 70, 1);
					func_43(uParam4, 71, 1);
					func_43(uParam4, 72, 1);
					func_43(uParam4, 21, 1);
					func_43(uParam4, 22, 1);
					func_43(uParam4, 23, 1);
					func_43(uParam4, 24, 1);
					func_43(uParam4, 25, 1);
					func_43(uParam4, 26, 1);
					func_43(uParam4, 36, 1);
					func_43(uParam4, 46, 1);
					func_43(uParam4, 38, 1);
					func_43(uParam4, 29, 1);
					func_43(uParam4, 28, 1);
					func_43(uParam4, 8, 1);
					func_43(uParam4, 10, 1);
					func_43(uParam4, 31, 1);
					func_43(uParam4, 33, 1);
					func_43(uParam4, 34, 1);
					func_43(uParam4, 92, 1);
					func_43(uParam4, 93, 1);
					func_43(uParam4, 94, 1);
					func_43(uParam4, 96, 1);
					func_43(uParam4, 97, 1);
					func_43(uParam4, 98, 1);
					func_43(uParam4, 100, 1);
					func_43(uParam4, 103, 1);
					func_43(uParam4, 104, 1);
					func_43(uParam4, 105, 1);
					func_43(uParam4, 106, 1);
					func_43(uParam4, 107, 1);
					func_43(uParam4, 108, 1);
					break;
				
				case 10:
					func_43(uParam4, 28, 1);
					break;
				
				case 12:
					if (bParam6)
					{
						func_42(uParam3, 3, 1);
						func_42(uParam3, 4, 1);
						func_42(uParam3, 6, 1);
						func_42(uParam3, 10, 1);
						func_42(uParam3, 54, 1);
						func_42(uParam3, 55, 1);
						func_42(uParam3, 56, 1);
						func_42(uParam3, 13, 1);
						func_42(uParam3, 16, 1);
						func_42(uParam3, 48, 1);
						func_42(uParam3, 49, 1);
						func_42(uParam3, 18, 1);
						func_42(uParam3, 50, 1);
						func_42(uParam3, 51, 1);
						func_42(uParam3, 52, 1);
						func_42(uParam3, 53, 1);
						func_42(uParam3, 38, 1);
						func_42(uParam3, 47, 1);
						func_42(uParam3, 111, 1);
						func_42(uParam3, 62, 1);
						func_42(uParam3, 20, 1);
						func_42(uParam3, 26, 1);
						func_42(uParam3, 27, 1);
						func_42(uParam3, 32, 1);
						func_42(uParam3, 33, 1);
						func_42(uParam3, 37, 1);
						func_42(uParam3, 39, 1);
						func_42(uParam3, 106, 1);
						func_42(uParam3, 114, 1);
						func_42(uParam3, 116, 1);
						func_42(uParam3, 117, 1);
						func_42(uParam3, 118, 1);
						func_42(uParam3, 119, 1);
						func_40(uParam2, 3, 1);
						func_40(uParam2, 4, 1);
						func_40(uParam2, 6, 1);
						func_40(uParam2, 8, 1);
						func_40(uParam2, 9, 1);
						func_40(uParam2, 10, 1);
						func_40(uParam2, 53, 1);
						func_40(uParam2, 56, 1);
						func_40(uParam2, 55, 1);
						func_40(uParam2, 13, 1);
						func_40(uParam2, 18, 1);
						func_40(uParam2, 49, 1);
						func_40(uParam2, 50, 1);
						func_40(uParam2, 51, 1);
						func_40(uParam2, 52, 1);
						func_40(uParam2, 62, 1);
						func_40(uParam2, 37, 1);
						func_40(uParam2, 46, 1);
						func_40(uParam2, 110, 1);
						func_40(uParam2, 21, 1);
						func_40(uParam2, 26, 1);
						func_40(uParam2, 27, 1);
						func_40(uParam2, 28, 1);
						func_40(uParam2, 32, 1);
						func_40(uParam2, 36, 1);
						func_40(uParam2, 38, 1);
						func_40(uParam2, 55, 1);
						func_40(uParam2, 14, 1);
						func_40(uParam2, 105, 1);
						func_40(uParam2, 113, 1);
						func_40(uParam2, 114, 1);
						func_40(uParam2, 115, 1);
						func_40(uParam2, 116, 1);
						func_40(uParam2, 117, 1);
					}
					func_43(uParam4, 2, 1);
					func_43(uParam4, 3, 1);
					func_43(uParam4, 4, 1);
					func_43(uParam4, 14, 1);
					func_43(uParam4, 15, 1);
					func_43(uParam4, 16, 1);
					func_43(uParam4, 9, 1);
					func_43(uParam4, 10, 1);
					func_43(uParam4, 12, 1);
					func_43(uParam4, 13, 1);
					func_43(uParam4, 17, 1);
					func_43(uParam4, 18, 1);
					func_43(uParam4, 19, 1);
					func_43(uParam4, 20, 1);
					func_43(uParam4, 59, 1);
					func_43(uParam4, 60, 1);
					func_43(uParam4, 61, 1);
					func_43(uParam4, 62, 1);
					func_43(uParam4, 62, 1);
					func_43(uParam4, 63, 1);
					func_43(uParam4, 64, 1);
					func_43(uParam4, 65, 1);
					func_43(uParam4, 66, 1);
					func_43(uParam4, 67, 1);
					func_43(uParam4, 68, 1);
					func_43(uParam4, 69, 1);
					func_43(uParam4, 70, 1);
					func_43(uParam4, 71, 1);
					func_43(uParam4, 72, 1);
					func_43(uParam4, 21, 1);
					func_43(uParam4, 22, 1);
					func_43(uParam4, 23, 1);
					func_43(uParam4, 24, 1);
					func_43(uParam4, 25, 1);
					func_43(uParam4, 26, 1);
					func_43(uParam4, 36, 1);
					func_43(uParam4, 46, 1);
					func_43(uParam4, 38, 1);
					func_43(uParam4, 29, 1);
					func_43(uParam4, 28, 1);
					func_43(uParam4, 8, 1);
					func_43(uParam4, 31, 1);
					func_43(uParam4, 32, 1);
					func_43(uParam4, 33, 1);
					func_43(uParam4, 34, 1);
					func_43(uParam4, 92, 1);
					func_43(uParam4, 93, 1);
					func_43(uParam4, 94, 1);
					func_43(uParam4, 96, 1);
					func_43(uParam4, 97, 1);
					func_43(uParam4, 98, 1);
					func_43(uParam4, 100, 1);
					func_43(uParam4, 103, 1);
					func_43(uParam4, 104, 1);
					func_43(uParam4, 105, 1);
					func_43(uParam4, 106, 1);
					func_43(uParam4, 107, 1);
					func_43(uParam4, 108, 1);
					func_43(uParam4, 110, 1);
					func_43(uParam4, 112, 1);
					break;
				
				case 15:
					if (bParam6)
					{
						func_42(uParam3, 16, 1);
						func_42(uParam3, 48, 1);
						func_42(uParam3, 49, 1);
						func_42(uParam3, 18, 1);
						func_42(uParam3, 50, 1);
						func_42(uParam3, 51, 1);
						func_42(uParam3, 52, 1);
						func_42(uParam3, 53, 1);
						func_42(uParam3, 38, 1);
						func_42(uParam3, 47, 1);
						func_42(uParam3, 111, 1);
						func_42(uParam3, 62, 1);
						func_40(uParam2, 18, 1);
						func_40(uParam2, 49, 1);
						func_40(uParam2, 50, 1);
						func_40(uParam2, 51, 1);
						func_40(uParam2, 52, 1);
						func_40(uParam2, 62, 1);
						func_40(uParam2, 37, 1);
						func_40(uParam2, 46, 1);
						func_40(uParam2, 110, 1);
						func_40(uParam2, 19, 1);
					}
					func_43(uParam4, 3, 1);
					func_43(uParam4, 6, 1);
					func_43(uParam4, 8, 1);
					func_43(uParam4, 9, 1);
					func_43(uParam4, 10, 1);
					func_43(uParam4, 13, 1);
					func_43(uParam4, 17, 1);
					func_43(uParam4, 18, 1);
					func_43(uParam4, 19, 1);
					func_43(uParam4, 20, 1);
					func_43(uParam4, 59, 1);
					func_43(uParam4, 60, 1);
					func_43(uParam4, 61, 1);
					func_43(uParam4, 62, 1);
					func_43(uParam4, 62, 1);
					func_43(uParam4, 63, 1);
					func_43(uParam4, 64, 1);
					func_43(uParam4, 65, 1);
					func_43(uParam4, 66, 1);
					func_43(uParam4, 67, 1);
					func_43(uParam4, 68, 1);
					func_43(uParam4, 69, 1);
					func_43(uParam4, 70, 1);
					func_43(uParam4, 71, 1);
					func_43(uParam4, 72, 1);
					func_43(uParam4, 21, 1);
					func_43(uParam4, 22, 1);
					func_43(uParam4, 23, 1);
					func_43(uParam4, 24, 1);
					func_43(uParam4, 25, 1);
					func_43(uParam4, 26, 1);
					func_43(uParam4, 36, 1);
					func_43(uParam4, 46, 1);
					func_43(uParam4, 38, 1);
					func_43(uParam4, 29, 1);
					func_43(uParam4, 28, 1);
					func_43(uParam4, 31, 1);
					func_43(uParam4, 32, 1);
					func_43(uParam4, 33, 1);
					func_43(uParam4, 34, 1);
					func_43(uParam4, 92, 1);
					func_43(uParam4, 93, 1);
					func_43(uParam4, 94, 1);
					func_43(uParam4, 96, 1);
					func_43(uParam4, 97, 1);
					func_43(uParam4, 98, 1);
					func_43(uParam4, 100, 1);
					func_43(uParam4, 103, 1);
					func_43(uParam4, 104, 1);
					func_43(uParam4, 105, 1);
					func_43(uParam4, 106, 1);
					func_43(uParam4, 107, 1);
					func_43(uParam4, 108, 1);
					func_43(uParam4, 110, 1);
					func_43(uParam4, 112, 1);
					func_43(uParam4, 115, 1);
					func_43(uParam4, 116, 1);
					break;
				
				case 18:
					if (bParam6)
					{
						func_42(uParam3, 4, 1);
					}
					break;
				
				case 17:
					func_43(uParam4, 9, 1);
					break;
				
				case 19:
					if (bParam6)
					{
						func_42(uParam3, 16, 1);
						func_42(uParam3, 48, 1);
						func_42(uParam3, 49, 1);
						func_42(uParam3, 18, 1);
						func_42(uParam3, 50, 1);
						func_42(uParam3, 51, 1);
						func_42(uParam3, 52, 1);
						func_42(uParam3, 53, 1);
						func_42(uParam3, 38, 1);
						func_42(uParam3, 47, 1);
						func_42(uParam3, 111, 1);
						func_42(uParam3, 62, 1);
						func_40(uParam2, 16, 1);
						func_40(uParam2, 47, 1);
						func_40(uParam2, 48, 1);
						func_40(uParam2, 18, 1);
						func_40(uParam2, 49, 1);
						func_40(uParam2, 50, 1);
						func_40(uParam2, 51, 1);
						func_40(uParam2, 52, 1);
						func_40(uParam2, 62, 1);
						func_40(uParam2, 37, 1);
						func_40(uParam2, 46, 1);
						func_40(uParam2, 110, 1);
					}
					func_43(uParam4, 9, 1);
					func_43(uParam4, 10, 1);
					func_43(uParam4, 18, 1);
					func_43(uParam4, 19, 1);
					func_43(uParam4, 20, 1);
					func_43(uParam4, 59, 1);
					func_43(uParam4, 60, 1);
					func_43(uParam4, 61, 1);
					func_43(uParam4, 62, 1);
					func_43(uParam4, 62, 1);
					func_43(uParam4, 63, 1);
					func_43(uParam4, 64, 1);
					func_43(uParam4, 65, 1);
					func_43(uParam4, 66, 1);
					func_43(uParam4, 67, 1);
					func_43(uParam4, 68, 1);
					func_43(uParam4, 69, 1);
					func_43(uParam4, 70, 1);
					func_43(uParam4, 71, 1);
					func_43(uParam4, 72, 1);
					func_43(uParam4, 21, 1);
					func_43(uParam4, 22, 1);
					func_43(uParam4, 23, 1);
					func_43(uParam4, 24, 1);
					func_43(uParam4, 25, 1);
					func_43(uParam4, 26, 1);
					func_43(uParam4, 36, 1);
					func_43(uParam4, 46, 1);
					func_43(uParam4, 38, 1);
					func_43(uParam4, 29, 1);
					func_43(uParam4, 8, 1);
					func_43(uParam4, 92, 1);
					func_43(uParam4, 93, 1);
					func_43(uParam4, 94, 1);
					func_43(uParam4, 96, 1);
					func_43(uParam4, 97, 1);
					func_43(uParam4, 98, 1);
					func_43(uParam4, 100, 1);
					func_43(uParam4, 103, 1);
					func_43(uParam4, 104, 1);
					func_43(uParam4, 105, 1);
					func_43(uParam4, 106, 1);
					func_43(uParam4, 107, 1);
					func_43(uParam4, 108, 1);
					break;
				
				case 21:
					if (bParam6)
					{
						func_42(uParam3, 3, 1);
						func_42(uParam3, 7, 1);
						func_42(uParam3, 0, 1);
						func_42(uParam3, 12, 1);
						func_42(uParam3, 13, 1);
						func_42(uParam3, 15, 1);
						func_42(uParam3, 16, 1);
						func_42(uParam3, 48, 1);
						func_42(uParam3, 49, 1);
						func_42(uParam3, 17, 1);
						func_42(uParam3, 18, 1);
						func_42(uParam3, 50, 1);
						func_42(uParam3, 51, 1);
						func_42(uParam3, 52, 1);
						func_42(uParam3, 53, 1);
						func_42(uParam3, 38, 1);
						func_42(uParam3, 47, 1);
						func_42(uParam3, 111, 1);
						func_42(uParam3, 62, 1);
						func_42(uParam3, 20, 1);
						func_42(uParam3, 21, 1);
						func_42(uParam3, 25, 1);
						func_42(uParam3, 26, 1);
						func_42(uParam3, 27, 1);
						func_42(uParam3, 30, 1);
						func_42(uParam3, 31, 1);
						func_42(uParam3, 32, 1);
						func_42(uParam3, 33, 1);
						func_42(uParam3, 39, 1);
						func_42(uParam3, 37, 1);
						func_42(uParam3, 55, 1);
						func_40(uParam2, 0, 1);
						func_40(uParam2, 2, 1);
						func_40(uParam2, 3, 1);
						func_40(uParam2, 4, 1);
						func_40(uParam2, 6, 1);
						func_40(uParam2, 7, 1);
						func_40(uParam2, 8, 1);
						func_40(uParam2, 11, 1);
						func_40(uParam2, 13, 1);
						func_40(uParam2, 15, 1);
						func_40(uParam2, 16, 1);
						func_40(uParam2, 47, 1);
						func_40(uParam2, 48, 1);
						func_40(uParam2, 17, 1);
						func_40(uParam2, 18, 1);
						func_40(uParam2, 49, 1);
						func_40(uParam2, 50, 1);
						func_40(uParam2, 51, 1);
						func_40(uParam2, 52, 1);
						func_40(uParam2, 62, 1);
						func_40(uParam2, 37, 1);
						func_40(uParam2, 46, 1);
						func_40(uParam2, 110, 1);
						func_40(uParam2, 19, 1);
						func_40(uParam2, 20, 1);
						func_40(uParam2, 21, 1);
						func_40(uParam2, 22, 1);
						func_40(uParam2, 54, 1);
						func_40(uParam2, 24, 1);
						func_40(uParam2, 26, 1);
						func_40(uParam2, 27, 1);
						func_40(uParam2, 28, 1);
						func_40(uParam2, 30, 1);
						func_40(uParam2, 31, 1);
						func_40(uParam2, 32, 1);
						func_40(uParam2, 38, 1);
						func_40(uParam2, 36, 1);
					}
					func_43(uParam4, 3, 1);
					func_43(uParam4, 3, 1);
					func_43(uParam4, 4, 1);
					func_43(uParam4, 14, 1);
					func_43(uParam4, 15, 1);
					func_43(uParam4, 16, 1);
					func_43(uParam4, 8, 1);
					func_43(uParam4, 9, 1);
					func_43(uParam4, 10, 1);
					func_43(uParam4, 12, 1);
					func_43(uParam4, 13, 1);
					func_43(uParam4, 17, 1);
					func_43(uParam4, 18, 1);
					func_43(uParam4, 19, 1);
					func_43(uParam4, 20, 1);
					func_43(uParam4, 59, 1);
					func_43(uParam4, 60, 1);
					func_43(uParam4, 61, 1);
					func_43(uParam4, 62, 1);
					func_43(uParam4, 62, 1);
					func_43(uParam4, 63, 1);
					func_43(uParam4, 64, 1);
					func_43(uParam4, 65, 1);
					func_43(uParam4, 66, 1);
					func_43(uParam4, 67, 1);
					func_43(uParam4, 68, 1);
					func_43(uParam4, 69, 1);
					func_43(uParam4, 70, 1);
					func_43(uParam4, 71, 1);
					func_43(uParam4, 72, 1);
					func_43(uParam4, 21, 1);
					func_43(uParam4, 22, 1);
					func_43(uParam4, 23, 1);
					func_43(uParam4, 24, 1);
					func_43(uParam4, 25, 1);
					func_43(uParam4, 26, 1);
					func_43(uParam4, 36, 1);
					func_43(uParam4, 46, 1);
					func_43(uParam4, 38, 1);
					func_43(uParam4, 29, 1);
					func_43(uParam4, 28, 1);
					func_43(uParam4, 31, 1);
					func_43(uParam4, 33, 1);
					func_43(uParam4, 34, 1);
					func_43(uParam4, 92, 1);
					func_43(uParam4, 93, 1);
					func_43(uParam4, 94, 1);
					func_43(uParam4, 96, 1);
					func_43(uParam4, 97, 1);
					func_43(uParam4, 98, 1);
					func_43(uParam4, 100, 1);
					func_43(uParam4, 103, 1);
					func_43(uParam4, 104, 1);
					func_43(uParam4, 105, 1);
					func_43(uParam4, 106, 1);
					func_43(uParam4, 107, 1);
					func_43(uParam4, 108, 1);
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 3:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 13, 1);
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 2, 1);
							func_40(uParam2, 20, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 31, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 75, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
						
						case 1:
							func_42(uParam3, 4, 1);
							func_42(uParam3, 13, 1);
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 2, 1);
							func_40(uParam2, 20, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 31, 1);
							func_43(uParam4, 43, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 75, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
						
						case 2:
							func_42(uParam3, 13, 1);
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 39, 1);
							func_40(uParam2, 2, 1);
							func_40(uParam2, 20, 1);
							func_40(uParam2, 38, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 13, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 31, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 75, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
					}
					break;
				
				case 5:
				case 24:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_42(uParam3, 62, 1);
							func_40(uParam2, 16, 1);
							func_40(uParam2, 47, 1);
							func_40(uParam2, 48, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_43(uParam4, 1, 1);
							func_43(uParam4, 2, 1);
							func_43(uParam4, 3, 1);
							func_43(uParam4, 4, 1);
							func_43(uParam4, 5, 1);
							func_43(uParam4, 7, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 12, 1);
							func_43(uParam4, 13, 1);
							func_43(uParam4, 14, 1);
							func_43(uParam4, 15, 1);
							func_43(uParam4, 16, 1);
							func_43(uParam4, 17, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 43, 1);
							func_43(uParam4, 29, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_43(uParam4, 110, 1);
							func_43(uParam4, 112, 1);
							func_43(uParam4, 115, 1);
							func_43(uParam4, 116, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
						
						case 1:
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 16, 1);
							func_40(uParam2, 47, 1);
							func_40(uParam2, 48, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_43(uParam4, 110, 1);
							func_43(uParam4, 112, 1);
							func_43(uParam4, 115, 1);
							func_43(uParam4, 116, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
						
						case 2:
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_43(uParam4, 4, 1);
							func_43(uParam4, 5, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 12, 1);
							func_43(uParam4, 14, 1);
							func_43(uParam4, 15, 1);
							func_43(uParam4, 16, 1);
							func_43(uParam4, 17, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_43(uParam4, 110, 1);
							func_43(uParam4, 112, 1);
							func_43(uParam4, 115, 1);
							func_43(uParam4, 116, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
					}
					break;
				
				case 39:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 66, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 77, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_43(uParam4, 124, 1);
							func_43(uParam4, 125, 1);
							func_43(uParam4, 126, 1);
							func_43(uParam4, 127, 1);
							func_43(uParam4, 128, 1);
							func_43(uParam4, 129, 1);
							func_43(uParam4, 130, 1);
							func_43(uParam4, 131, 1);
							func_43(uParam4, 132, 1);
							func_43(uParam4, 133, 1);
							break;
						
						case 1:
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 12, 1);
							func_43(uParam4, 17, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 29, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 31, 1);
							func_43(uParam4, 32, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 34, 1);
							func_43(uParam4, 43, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_43(uParam4, 124, 1);
							func_43(uParam4, 125, 1);
							func_43(uParam4, 126, 1);
							func_43(uParam4, 127, 1);
							func_43(uParam4, 128, 1);
							func_43(uParam4, 129, 1);
							func_43(uParam4, 130, 1);
							func_43(uParam4, 131, 1);
							func_43(uParam4, 132, 1);
							func_43(uParam4, 133, 1);
							break;
					}
					break;
				
				case 40:
					func_42(uParam3, 67, 1);
					func_42(uParam3, 68, 1);
					func_42(uParam3, 69, 1);
					func_42(uParam3, 70, 1);
					func_42(uParam3, 71, 1);
					func_42(uParam3, 72, 1);
					func_42(uParam3, 73, 1);
					func_42(uParam3, 74, 1);
					func_42(uParam3, 78, 1);
					func_42(uParam3, 79, 1);
					func_42(uParam3, 80, 1);
					func_42(uParam3, 81, 1);
					func_42(uParam3, 82, 1);
					func_42(uParam3, 91, 1);
					func_42(uParam3, 92, 1);
					func_40(uParam2, 66, 1);
					func_40(uParam2, 67, 1);
					func_40(uParam2, 68, 1);
					func_40(uParam2, 69, 1);
					func_40(uParam2, 70, 1);
					func_40(uParam2, 71, 1);
					func_40(uParam2, 72, 1);
					func_40(uParam2, 73, 1);
					func_40(uParam2, 77, 1);
					func_40(uParam2, 78, 1);
					func_40(uParam2, 79, 1);
					func_40(uParam2, 80, 1);
					func_40(uParam2, 81, 1);
					func_40(uParam2, 90, 1);
					func_40(uParam2, 91, 1);
					func_42(uParam3, 38, 1);
					func_42(uParam3, 47, 1);
					func_42(uParam3, 111, 1);
					func_40(uParam2, 37, 1);
					func_40(uParam2, 46, 1);
					func_40(uParam2, 110, 1);
					func_43(uParam4, 92, 1);
					func_43(uParam4, 93, 1);
					func_43(uParam4, 94, 1);
					func_43(uParam4, 96, 1);
					func_43(uParam4, 97, 1);
					func_43(uParam4, 98, 1);
					func_43(uParam4, 100, 1);
					func_43(uParam4, 103, 1);
					func_43(uParam4, 104, 1);
					func_43(uParam4, 105, 1);
					func_43(uParam4, 106, 1);
					func_43(uParam4, 107, 1);
					func_43(uParam4, 108, 1);
					func_43(uParam4, 124, 1);
					func_43(uParam4, 125, 1);
					func_43(uParam4, 126, 1);
					func_43(uParam4, 127, 1);
					func_43(uParam4, 128, 1);
					func_43(uParam4, 129, 1);
					func_43(uParam4, 130, 1);
					func_43(uParam4, 131, 1);
					func_43(uParam4, 132, 1);
					func_43(uParam4, 133, 1);
					break;
				
				case 41:
					func_42(uParam3, 67, 1);
					func_42(uParam3, 68, 1);
					func_42(uParam3, 69, 1);
					func_42(uParam3, 70, 1);
					func_42(uParam3, 71, 1);
					func_42(uParam3, 72, 1);
					func_42(uParam3, 73, 1);
					func_42(uParam3, 74, 1);
					func_42(uParam3, 78, 1);
					func_42(uParam3, 79, 1);
					func_42(uParam3, 80, 1);
					func_42(uParam3, 81, 1);
					func_42(uParam3, 82, 1);
					func_42(uParam3, 91, 1);
					func_42(uParam3, 92, 1);
					func_40(uParam2, 66, 1);
					func_40(uParam2, 67, 1);
					func_40(uParam2, 68, 1);
					func_40(uParam2, 69, 1);
					func_40(uParam2, 70, 1);
					func_40(uParam2, 71, 1);
					func_40(uParam2, 72, 1);
					func_40(uParam2, 73, 1);
					func_40(uParam2, 77, 1);
					func_40(uParam2, 78, 1);
					func_40(uParam2, 79, 1);
					func_40(uParam2, 80, 1);
					func_40(uParam2, 81, 1);
					func_40(uParam2, 90, 1);
					func_40(uParam2, 91, 1);
					func_42(uParam3, 38, 1);
					func_42(uParam3, 47, 1);
					func_42(uParam3, 111, 1);
					func_40(uParam2, 37, 1);
					func_40(uParam2, 46, 1);
					func_40(uParam2, 110, 1);
					func_43(uParam4, 92, 1);
					func_43(uParam4, 93, 1);
					func_43(uParam4, 94, 1);
					func_43(uParam4, 96, 1);
					func_43(uParam4, 97, 1);
					func_43(uParam4, 98, 1);
					func_43(uParam4, 100, 1);
					func_43(uParam4, 103, 1);
					func_43(uParam4, 104, 1);
					func_43(uParam4, 105, 1);
					func_43(uParam4, 106, 1);
					func_43(uParam4, 107, 1);
					func_43(uParam4, 108, 1);
					func_43(uParam4, 124, 1);
					func_43(uParam4, 125, 1);
					func_43(uParam4, 126, 1);
					func_43(uParam4, 127, 1);
					func_43(uParam4, 128, 1);
					func_43(uParam4, 129, 1);
					func_43(uParam4, 130, 1);
					func_43(uParam4, 131, 1);
					func_43(uParam4, 132, 1);
					func_43(uParam4, 133, 1);
					break;
				
				case 42:
				case 43:
				case 44:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 12, 1);
							func_43(uParam4, 17, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 29, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 31, 1);
							func_43(uParam4, 32, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 34, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_43(uParam4, 124, 1);
							func_43(uParam4, 125, 1);
							func_43(uParam4, 126, 1);
							func_43(uParam4, 127, 1);
							func_43(uParam4, 128, 1);
							func_43(uParam4, 129, 1);
							func_43(uParam4, 130, 1);
							func_43(uParam4, 131, 1);
							func_43(uParam4, 132, 1);
							func_43(uParam4, 133, 1);
							break;
						
						case 1:
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_43(uParam4, 124, 1);
							func_43(uParam4, 125, 1);
							func_43(uParam4, 126, 1);
							func_43(uParam4, 127, 1);
							func_43(uParam4, 128, 1);
							func_43(uParam4, 129, 1);
							func_43(uParam4, 130, 1);
							func_43(uParam4, 131, 1);
							func_43(uParam4, 132, 1);
							func_43(uParam4, 133, 1);
							break;
						
						case 2:
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_43(uParam4, 124, 1);
							func_43(uParam4, 125, 1);
							func_43(uParam4, 126, 1);
							func_43(uParam4, 127, 1);
							func_43(uParam4, 128, 1);
							func_43(uParam4, 129, 1);
							func_43(uParam4, 130, 1);
							func_43(uParam4, 131, 1);
							func_43(uParam4, 132, 1);
							func_43(uParam4, 133, 1);
							break;
					}
					break;
				
				case 10:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 3, 1);
							func_42(uParam3, 4, 1);
							func_42(uParam3, 6, 1);
							func_42(uParam3, 10, 1);
							func_42(uParam3, 54, 1);
							func_42(uParam3, 55, 1);
							func_42(uParam3, 56, 1);
							func_42(uParam3, 13, 1);
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_42(uParam3, 20, 1);
							func_42(uParam3, 26, 1);
							func_42(uParam3, 27, 1);
							func_42(uParam3, 32, 1);
							func_42(uParam3, 33, 1);
							func_42(uParam3, 37, 1);
							func_42(uParam3, 39, 1);
							func_42(uParam3, 55, 1);
							func_42(uParam3, 106, 1);
							func_42(uParam3, 114, 1);
							func_42(uParam3, 116, 1);
							func_42(uParam3, 117, 1);
							func_42(uParam3, 118, 1);
							func_42(uParam3, 119, 1);
							func_40(uParam2, 3, 1);
							func_40(uParam2, 4, 1);
							func_40(uParam2, 6, 1);
							func_40(uParam2, 8, 1);
							func_40(uParam2, 9, 1);
							func_40(uParam2, 10, 1);
							func_40(uParam2, 53, 1);
							func_40(uParam2, 56, 1);
							func_40(uParam2, 55, 1);
							func_40(uParam2, 13, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_40(uParam2, 21, 1);
							func_40(uParam2, 26, 1);
							func_40(uParam2, 27, 1);
							func_40(uParam2, 28, 1);
							func_40(uParam2, 32, 1);
							func_40(uParam2, 36, 1);
							func_40(uParam2, 38, 1);
							func_40(uParam2, 55, 1);
							func_40(uParam2, 14, 1);
							func_40(uParam2, 105, 1);
							func_40(uParam2, 113, 1);
							func_40(uParam2, 114, 1);
							func_40(uParam2, 115, 1);
							func_40(uParam2, 116, 1);
							func_40(uParam2, 117, 1);
							func_43(uParam4, 3, 1);
							func_43(uParam4, 4, 1);
							func_43(uParam4, 14, 1);
							func_43(uParam4, 15, 1);
							func_43(uParam4, 16, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 12, 1);
							func_43(uParam4, 13, 1);
							func_43(uParam4, 17, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 29, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 31, 1);
							func_43(uParam4, 32, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 34, 1);
							func_43(uParam4, 43, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_43(uParam4, 110, 1);
							func_43(uParam4, 112, 1);
							func_42(uParam3, 65, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 75, 1);
							func_42(uParam3, 76, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 64, 1);
							func_40(uParam2, 65, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 75, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_43(uParam4, 124, 1);
							func_43(uParam4, 125, 1);
							func_43(uParam4, 126, 1);
							func_43(uParam4, 127, 1);
							func_43(uParam4, 128, 1);
							func_43(uParam4, 129, 1);
							func_43(uParam4, 130, 1);
							func_43(uParam4, 131, 1);
							func_43(uParam4, 132, 1);
							func_43(uParam4, 133, 1);
							break;
						
						case 1:
							func_42(uParam3, 3, 1);
							func_42(uParam3, 4, 1);
							func_42(uParam3, 6, 1);
							func_42(uParam3, 13, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_42(uParam3, 19, 1);
							func_42(uParam3, 20, 1);
							func_42(uParam3, 26, 1);
							func_42(uParam3, 27, 1);
							func_42(uParam3, 32, 1);
							func_42(uParam3, 33, 1);
							func_42(uParam3, 37, 1);
							func_42(uParam3, 39, 1);
							func_42(uParam3, 55, 1);
							func_42(uParam3, 106, 1);
							func_42(uParam3, 114, 1);
							func_42(uParam3, 116, 1);
							func_42(uParam3, 117, 1);
							func_42(uParam3, 118, 1);
							func_42(uParam3, 119, 1);
							func_40(uParam2, 3, 1);
							func_40(uParam2, 4, 1);
							func_40(uParam2, 6, 1);
							func_40(uParam2, 8, 1);
							func_40(uParam2, 9, 1);
							func_40(uParam2, 10, 1);
							func_40(uParam2, 53, 1);
							func_40(uParam2, 56, 1);
							func_40(uParam2, 55, 1);
							func_40(uParam2, 11, 1);
							func_40(uParam2, 13, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_40(uParam2, 21, 1);
							func_40(uParam2, 22, 1);
							func_40(uParam2, 54, 1);
							func_40(uParam2, 26, 1);
							func_40(uParam2, 27, 1);
							func_40(uParam2, 28, 1);
							func_40(uParam2, 30, 1);
							func_40(uParam2, 31, 1);
							func_40(uParam2, 32, 1);
							func_40(uParam2, 36, 1);
							func_40(uParam2, 38, 1);
							func_40(uParam2, 55, 1);
							func_40(uParam2, 14, 1);
							func_40(uParam2, 105, 1);
							func_40(uParam2, 113, 1);
							func_40(uParam2, 114, 1);
							func_40(uParam2, 115, 1);
							func_40(uParam2, 116, 1);
							func_40(uParam2, 117, 1);
							func_43(uParam4, 2, 1);
							func_43(uParam4, 3, 1);
							func_43(uParam4, 4, 1);
							func_43(uParam4, 14, 1);
							func_43(uParam4, 15, 1);
							func_43(uParam4, 16, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 12, 1);
							func_43(uParam4, 13, 1);
							func_43(uParam4, 17, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 29, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 31, 1);
							func_43(uParam4, 32, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 34, 1);
							func_43(uParam4, 43, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_43(uParam4, 110, 1);
							func_43(uParam4, 112, 1);
							func_42(uParam3, 65, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 75, 1);
							func_42(uParam3, 76, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 64, 1);
							func_40(uParam2, 65, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 75, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_43(uParam4, 124, 1);
							func_43(uParam4, 125, 1);
							func_43(uParam4, 126, 1);
							func_43(uParam4, 127, 1);
							func_43(uParam4, 128, 1);
							func_43(uParam4, 129, 1);
							func_43(uParam4, 130, 1);
							func_43(uParam4, 131, 1);
							func_43(uParam4, 132, 1);
							func_43(uParam4, 133, 1);
							break;
						
						case 2:
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_42(uParam3, 39, 1);
							func_42(uParam3, 106, 1);
							func_42(uParam3, 114, 1);
							func_42(uParam3, 116, 1);
							func_42(uParam3, 117, 1);
							func_42(uParam3, 118, 1);
							func_42(uParam3, 119, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_40(uParam2, 38, 1);
							func_40(uParam2, 14, 1);
							func_40(uParam2, 105, 1);
							func_40(uParam2, 113, 1);
							func_40(uParam2, 114, 1);
							func_40(uParam2, 115, 1);
							func_40(uParam2, 116, 1);
							func_40(uParam2, 117, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 12, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 29, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 31, 1);
							func_43(uParam4, 32, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 34, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_43(uParam4, 110, 1);
							func_43(uParam4, 112, 1);
							func_42(uParam3, 65, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 75, 1);
							func_42(uParam3, 76, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 64, 1);
							func_40(uParam2, 65, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 75, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_43(uParam4, 124, 1);
							func_43(uParam4, 125, 1);
							func_43(uParam4, 126, 1);
							func_43(uParam4, 127, 1);
							func_43(uParam4, 128, 1);
							func_43(uParam4, 129, 1);
							func_43(uParam4, 130, 1);
							func_43(uParam4, 131, 1);
							func_43(uParam4, 132, 1);
							func_43(uParam4, 133, 1);
							break;
					}
					break;
				
				case 13:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_40(uParam2, 19, 1);
							func_43(uParam4, 2, 1);
							func_43(uParam4, 3, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 13, 1);
							func_43(uParam4, 17, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 29, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 31, 1);
							func_43(uParam4, 32, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 34, 1);
							func_43(uParam4, 43, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_43(uParam4, 110, 1);
							func_43(uParam4, 112, 1);
							func_43(uParam4, 115, 1);
							func_43(uParam4, 116, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_43(uParam4, 124, 1);
							func_43(uParam4, 125, 1);
							func_43(uParam4, 126, 1);
							func_43(uParam4, 127, 1);
							func_43(uParam4, 128, 1);
							func_43(uParam4, 129, 1);
							func_43(uParam4, 130, 1);
							func_43(uParam4, 131, 1);
							func_43(uParam4, 132, 1);
							func_43(uParam4, 133, 1);
							break;
						
						case 1:
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_43(uParam4, 2, 1);
							func_43(uParam4, 7, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 13, 1);
							func_43(uParam4, 17, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 29, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 31, 1);
							func_43(uParam4, 32, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 34, 1);
							func_43(uParam4, 43, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_43(uParam4, 110, 1);
							func_43(uParam4, 112, 1);
							func_43(uParam4, 115, 1);
							func_43(uParam4, 116, 1);
							func_43(uParam4, 124, 1);
							func_43(uParam4, 125, 1);
							func_43(uParam4, 126, 1);
							func_43(uParam4, 127, 1);
							func_43(uParam4, 128, 1);
							func_43(uParam4, 129, 1);
							func_43(uParam4, 130, 1);
							func_43(uParam4, 131, 1);
							func_43(uParam4, 132, 1);
							func_43(uParam4, 133, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
						
						case 2:
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_43(uParam4, 1, 1);
							func_43(uParam4, 2, 1);
							func_43(uParam4, 3, 1);
							func_43(uParam4, 5, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 13, 1);
							func_43(uParam4, 17, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 29, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 31, 1);
							func_43(uParam4, 32, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 34, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_43(uParam4, 110, 1);
							func_43(uParam4, 112, 1);
							func_43(uParam4, 115, 1);
							func_43(uParam4, 116, 1);
							func_43(uParam4, 124, 1);
							func_43(uParam4, 125, 1);
							func_43(uParam4, 126, 1);
							func_43(uParam4, 127, 1);
							func_43(uParam4, 128, 1);
							func_43(uParam4, 129, 1);
							func_43(uParam4, 130, 1);
							func_43(uParam4, 131, 1);
							func_43(uParam4, 132, 1);
							func_43(uParam4, 133, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
					}
					break;
				
				case 16:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 4, 1);
							break;
						
						case 1:
							func_43(uParam4, 43, 1);
							break;
						
						case 2:
							break;
					}
					break;
				
				case 23:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_43(uParam4, 110, 1);
							func_43(uParam4, 112, 1);
							func_43(uParam4, 124, 1);
							func_43(uParam4, 125, 1);
							func_43(uParam4, 126, 1);
							func_43(uParam4, 127, 1);
							func_43(uParam4, 128, 1);
							func_43(uParam4, 129, 1);
							func_43(uParam4, 130, 1);
							func_43(uParam4, 131, 1);
							func_43(uParam4, 132, 1);
							func_43(uParam4, 133, 1);
							break;
						
						case 1:
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_43(uParam4, 110, 1);
							func_43(uParam4, 112, 1);
							func_43(uParam4, 124, 1);
							func_43(uParam4, 125, 1);
							func_43(uParam4, 126, 1);
							func_43(uParam4, 127, 1);
							func_43(uParam4, 128, 1);
							func_43(uParam4, 129, 1);
							func_43(uParam4, 130, 1);
							func_43(uParam4, 131, 1);
							func_43(uParam4, 132, 1);
							func_43(uParam4, 133, 1);
							break;
						
						case 2:
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_43(uParam4, 110, 1);
							func_43(uParam4, 112, 1);
							func_43(uParam4, 124, 1);
							func_43(uParam4, 125, 1);
							func_43(uParam4, 126, 1);
							func_43(uParam4, 127, 1);
							func_43(uParam4, 128, 1);
							func_43(uParam4, 129, 1);
							func_43(uParam4, 130, 1);
							func_43(uParam4, 131, 1);
							func_43(uParam4, 132, 1);
							func_43(uParam4, 133, 1);
							break;
					}
					break;
				
				case 17:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 16, 1);
							func_40(uParam2, 47, 1);
							func_40(uParam2, 48, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_43(uParam4, 1, 1);
							func_43(uParam4, 2, 1);
							func_43(uParam4, 3, 1);
							func_43(uParam4, 5, 1);
							func_43(uParam4, 6, 1);
							func_43(uParam4, 7, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 13, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 29, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
						
						case 1:
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 16, 1);
							func_40(uParam2, 47, 1);
							func_40(uParam2, 48, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_43(uParam4, 1, 1);
							func_43(uParam4, 2, 1);
							func_43(uParam4, 3, 1);
							func_43(uParam4, 5, 1);
							func_43(uParam4, 6, 1);
							func_43(uParam4, 7, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 13, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 29, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 43, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
						
						case 2:
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 16, 1);
							func_40(uParam2, 47, 1);
							func_40(uParam2, 48, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_43(uParam4, 1, 1);
							func_43(uParam4, 2, 1);
							func_43(uParam4, 3, 1);
							func_43(uParam4, 5, 1);
							func_43(uParam4, 6, 1);
							func_43(uParam4, 7, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 13, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 29, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
					}
					break;
				
				case 19:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 3, 1);
							func_42(uParam3, 7, 1);
							func_42(uParam3, 0, 1);
							func_42(uParam3, 12, 1);
							func_42(uParam3, 13, 1);
							func_42(uParam3, 15, 1);
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 17, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_42(uParam3, 20, 1);
							func_42(uParam3, 21, 1);
							func_42(uParam3, 25, 1);
							func_42(uParam3, 26, 1);
							func_42(uParam3, 27, 1);
							func_42(uParam3, 30, 1);
							func_42(uParam3, 31, 1);
							func_42(uParam3, 32, 1);
							func_42(uParam3, 33, 1);
							func_42(uParam3, 39, 1);
							func_42(uParam3, 37, 1);
							func_40(uParam2, 0, 1);
							func_40(uParam2, 2, 1);
							func_40(uParam2, 3, 1);
							func_40(uParam2, 4, 1);
							func_40(uParam2, 6, 1);
							func_40(uParam2, 7, 1);
							func_40(uParam2, 8, 1);
							func_40(uParam2, 11, 1);
							func_40(uParam2, 13, 1);
							func_40(uParam2, 15, 1);
							func_40(uParam2, 16, 1);
							func_40(uParam2, 47, 1);
							func_40(uParam2, 48, 1);
							func_40(uParam2, 17, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_40(uParam2, 19, 1);
							func_40(uParam2, 20, 1);
							func_40(uParam2, 21, 1);
							func_40(uParam2, 22, 1);
							func_40(uParam2, 54, 1);
							func_40(uParam2, 24, 1);
							func_40(uParam2, 26, 1);
							func_40(uParam2, 27, 1);
							func_40(uParam2, 28, 1);
							func_40(uParam2, 30, 1);
							func_40(uParam2, 31, 1);
							func_40(uParam2, 32, 1);
							func_40(uParam2, 38, 1);
							func_40(uParam2, 36, 1);
							func_43(uParam4, 1, 1);
							func_43(uParam4, 2, 1);
							func_43(uParam4, 3, 1);
							func_43(uParam4, 4, 1);
							func_43(uParam4, 14, 1);
							func_43(uParam4, 15, 1);
							func_43(uParam4, 16, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 13, 1);
							func_43(uParam4, 17, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 29, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 31, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 34, 1);
							func_43(uParam4, 43, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_42(uParam3, 65, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 75, 1);
							func_42(uParam3, 76, 1);
							func_42(uParam3, 77, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 64, 1);
							func_40(uParam2, 65, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 75, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
						
						case 1:
							func_42(uParam3, 3, 1);
							func_42(uParam3, 7, 1);
							func_42(uParam3, 0, 1);
							func_42(uParam3, 12, 1);
							func_42(uParam3, 13, 1);
							func_42(uParam3, 15, 1);
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 17, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_42(uParam3, 20, 1);
							func_42(uParam3, 21, 1);
							func_42(uParam3, 25, 1);
							func_42(uParam3, 26, 1);
							func_42(uParam3, 27, 1);
							func_42(uParam3, 30, 1);
							func_42(uParam3, 31, 1);
							func_42(uParam3, 32, 1);
							func_42(uParam3, 33, 1);
							func_42(uParam3, 39, 1);
							func_40(uParam2, 0, 1);
							func_40(uParam2, 2, 1);
							func_40(uParam2, 3, 1);
							func_40(uParam2, 4, 1);
							func_40(uParam2, 6, 1);
							func_40(uParam2, 7, 1);
							func_40(uParam2, 11, 1);
							func_40(uParam2, 13, 1);
							func_40(uParam2, 15, 1);
							func_40(uParam2, 16, 1);
							func_40(uParam2, 47, 1);
							func_40(uParam2, 48, 1);
							func_40(uParam2, 17, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_40(uParam2, 19, 1);
							func_40(uParam2, 20, 1);
							func_40(uParam2, 21, 1);
							func_40(uParam2, 22, 1);
							func_40(uParam2, 54, 1);
							func_40(uParam2, 24, 1);
							func_40(uParam2, 38, 1);
							func_43(uParam4, 1, 1);
							func_43(uParam4, 2, 1);
							func_43(uParam4, 3, 1);
							func_43(uParam4, 4, 1);
							func_43(uParam4, 14, 1);
							func_43(uParam4, 15, 1);
							func_43(uParam4, 16, 1);
							func_43(uParam4, 6, 1);
							func_43(uParam4, 7, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 13, 1);
							func_43(uParam4, 17, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 29, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 31, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 34, 1);
							func_43(uParam4, 43, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_42(uParam3, 65, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 75, 1);
							func_42(uParam3, 76, 1);
							func_42(uParam3, 77, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 64, 1);
							func_40(uParam2, 65, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 75, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
						
						case 2:
							func_42(uParam3, 1, 1);
							func_42(uParam3, 3, 1);
							func_42(uParam3, 4, 1);
							func_42(uParam3, 5, 1);
							func_42(uParam3, 7, 1);
							func_42(uParam3, 10, 1);
							func_42(uParam3, 54, 1);
							func_42(uParam3, 55, 1);
							func_42(uParam3, 56, 1);
							func_42(uParam3, 0, 1);
							func_42(uParam3, 12, 1);
							func_42(uParam3, 13, 1);
							func_42(uParam3, 15, 1);
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 17, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_42(uParam3, 20, 1);
							func_42(uParam3, 21, 1);
							func_42(uParam3, 25, 1);
							func_42(uParam3, 26, 1);
							func_42(uParam3, 27, 1);
							func_42(uParam3, 30, 1);
							func_42(uParam3, 31, 1);
							func_42(uParam3, 32, 1);
							func_42(uParam3, 33, 1);
							func_42(uParam3, 37, 1);
							func_42(uParam3, 39, 1);
							func_40(uParam2, 0, 1);
							func_40(uParam2, 1, 1);
							func_40(uParam2, 2, 1);
							func_40(uParam2, 3, 1);
							func_40(uParam2, 4, 1);
							func_40(uParam2, 5, 1);
							func_40(uParam2, 6, 1);
							func_40(uParam2, 7, 1);
							func_40(uParam2, 8, 1);
							func_40(uParam2, 9, 1);
							func_40(uParam2, 10, 1);
							func_40(uParam2, 53, 1);
							func_40(uParam2, 56, 1);
							func_40(uParam2, 55, 1);
							func_40(uParam2, 11, 1);
							func_40(uParam2, 12, 1);
							func_40(uParam2, 13, 1);
							func_40(uParam2, 14, 1);
							func_40(uParam2, 15, 1);
							func_40(uParam2, 16, 1);
							func_40(uParam2, 47, 1);
							func_40(uParam2, 48, 1);
							func_40(uParam2, 17, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_40(uParam2, 19, 1);
							func_40(uParam2, 20, 1);
							func_40(uParam2, 21, 1);
							func_40(uParam2, 22, 1);
							func_40(uParam2, 54, 1);
							func_40(uParam2, 23, 1);
							func_40(uParam2, 24, 1);
							func_40(uParam2, 26, 1);
							func_40(uParam2, 27, 1);
							func_40(uParam2, 28, 1);
							func_40(uParam2, 29, 1);
							func_40(uParam2, 30, 1);
							func_40(uParam2, 31, 1);
							func_40(uParam2, 32, 1);
							func_40(uParam2, 33, 1);
							func_40(uParam2, 36, 1);
							func_40(uParam2, 38, 1);
							func_40(uParam2, 55, 1);
							func_43(uParam4, 1, 1);
							func_43(uParam4, 2, 1);
							func_43(uParam4, 3, 1);
							func_43(uParam4, 3, 1);
							func_43(uParam4, 4, 1);
							func_43(uParam4, 14, 1);
							func_43(uParam4, 15, 1);
							func_43(uParam4, 16, 1);
							func_43(uParam4, 6, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 12, 1);
							func_43(uParam4, 13, 1);
							func_43(uParam4, 17, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 29, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 31, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 34, 1);
							func_43(uParam4, 32, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_42(uParam3, 65, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 75, 1);
							func_42(uParam3, 76, 1);
							func_42(uParam3, 77, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 64, 1);
							func_40(uParam2, 65, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 75, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
					}
					break;
				
				case 18:
					switch (iParam5)
					{
						case 0:
							break;
						
						case 1:
							func_40(uParam2, 2, 1);
							func_40(uParam2, 20, 1);
							break;
						
						case 2:
							break;
					}
					break;
				
				case 0:
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 8:
				case 10:
				case 12:
				case 14:
				case 18:
				case 22:
				case 25:
				case 29:
				case 33:
				case 19:
				case 21:
					func_39(2, 39, uParam2, uParam3, uParam4, 0, 0);
					break;
				
				case 31:
					func_39(2, 40, uParam2, uParam3, uParam4, 0, 0);
					break;
				
				case 16:
				case 26:
				case 30:
					break;
			}
			break;
	}
}

void func_40(var uParam0, int iParam1, bool bParam2)//Position - 0xB14B
{
	func_41(uParam0, iParam1, bParam2);
}

void func_41(var uParam0, int iParam1, bool bParam2)//Position - 0xB15D
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xF0059F27F7BB6680(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

void func_42(var uParam0, int iParam1, bool bParam2)//Position - 0xB1AE
{
	func_41(uParam0, iParam1, bParam2);
}

void func_43(var uParam0, int iParam1, bool bParam2)//Position - 0xB1C0
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xF0059F27F7BB6680(uParam0[iVar0], (iParam1 - (32 * iVar0)));
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

int func_44(int iParam0, int iParam1)//Position - 0xB212
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 1:
				case 2:
				case 3:
				case 4:
				case 7:
				case 5:
				case 10:
				case 11:
				case 12:
				case 13:
				case 15:
				case 14:
				case 16:
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
				case 23:
				case 26:
				case 25:
				case 24:
				case 30:
				case 34:
					return 1;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_45(float fParam0)//Position - 0xB309
{
	func_62(iLocal_92, "SET_DATA_SLOT", fParam0, unk_0xE57EAD1FEA2A6FAF(0, 172, true), "CELL_BORDER");
}

void func_46(float fParam0)//Position - 0xB329
{
	if (Global_196038 == 1)
	{
		fParam0 = -1f;
	}
	func_62(iLocal_92, "SET_DATA_SLOT", fParam0, unk_0xE57EAD1FEA2A6FAF(0, 173, true), "CELL_FILTER");
}

void func_47()//Position - 0xB354
{
	if (unk_0x50465D2C022B9E04(2) || unk_0xF7E138CFA19B55E7())
	{
		func_62(iLocal_92, "SET_DATA_SLOT", 2f, unk_0xE57EAD1FEA2A6FAF(0, 184, true), "CELL_SP_2NP_XB");
	}
	else
	{
		func_62(iLocal_92, "SET_DATA_SLOT", 2f, unk_0xE57EAD1FEA2A6FAF(0, 184, true), "CELL_SP_2NP_XB");
	}
	func_62(iLocal_92, "SET_DATA_SLOT", 3f, unk_0xE57EAD1FEA2A6FAF(0, 183, true), "CELL_GRID");
	func_62(iLocal_92, "SET_DATA_SLOT", 4f, unk_0xC7CF72D26EA6A227(0, 1, true), "CELL_285");
	func_46(5f);
	func_45(6f);
	func_48(7f);
	func_28(8f);
	if (bLocal_29)
	{
		func_62(iLocal_92, "SET_DATA_SLOT", 9f, unk_0xE57EAD1FEA2A6FAF(2, 185, true), "CELL_DEPTH");
	}
	if (!func_57(14))
	{
		if ((Global_11542 == 0 && unk_0xB731B8C5BCE89836(joaat("pi_menu")) > 0) && func_56())
		{
			unk_0x29CD142125FE177B(iLocal_91, "SET_FOCUS_LOCK");
			unk_0x5E5DBD0A6623969E(true);
			unk_0x57016C44F10111F0("CELL_ACTTL");
			unk_0x607C19B90D297FE2(unk_0xFCB4C1AC11347344(&Global_41215E));
			unk_0x64989E60CF560CA1();
			unk_0x5E5DBD0A6623969E(false);
			unk_0xF9FBC2F3F73D94C9();
		}
	}
}

void func_48(float fParam0)//Position - 0xB461
{
	func_62(iLocal_92, "SET_DATA_SLOT", fParam0, unk_0xE57EAD1FEA2A6FAF(0, 175, true), "CELL_ACCYC");
}

void func_49()//Position - 0xB481
{
	func_132(iLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_132(iLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_62(iLocal_92, "SET_DATA_SLOT", 3f, unk_0xE57EAD1FEA2A6FAF(0, 39, true), "CELL_284");
	func_62(iLocal_92, "SET_DATA_SLOT", 2f, unk_0xC7CF72D26EA6A227(0, 1, true), "CELL_285");
	func_62(iLocal_92, "SET_DATA_SLOT", 1f, unk_0xE57EAD1FEA2A6FAF(0, 177, true), "CELL_281");
	func_62(iLocal_92, "SET_DATA_SLOT", 0f, unk_0xE57EAD1FEA2A6FAF(0, 176, true), "CELL_280");
	unk_0x29CD142125FE177B(iLocal_92, "SET_MAX_WIDTH");
	unk_0xD44E04EBBDC4CE88(fLocal_40);
	unk_0xF9FBC2F3F73D94C9();
	func_132(iLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_50()//Position - 0xB55A
{
	if (iLocal_106 == 1)
	{
		func_51();
		return;
	}
	if (iLocal_84 == 0 && iLocal_85 == 0)
	{
		func_132(iLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_132(iLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_62(iLocal_92, "SET_DATA_SLOT", 0f, unk_0xE57EAD1FEA2A6FAF(0, 177, true), "CELL_281");
		func_62(iLocal_92, "SET_DATA_SLOT", 1f, unk_0xE57EAD1FEA2A6FAF(2, 179, true), func_61());
		if (iLocal_82)
		{
			if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
			{
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) || unk_0xADC5538B9DCA2177(unk_0xBC25C936A095B5BA()) == 2)
				{
					if (unk_0x50465D2C022B9E04(2) || unk_0xF7E138CFA19B55E7())
					{
						func_62(iLocal_92, "SET_DATA_SLOT", 2f, unk_0xE57EAD1FEA2A6FAF(0, 184, true), "CELL_SP_2NP_XB");
					}
					else
					{
						func_62(iLocal_92, "SET_DATA_SLOT", 2f, unk_0xE57EAD1FEA2A6FAF(0, 184, true), "CELL_SP_2NP_XB");
					}
					if (func_141())
					{
						func_46(3f);
						func_45(4f);
					}
				}
				else if ((Global_11542 == 0 && unk_0xB731B8C5BCE89836(joaat("pi_menu")) > 0) && func_56())
				{
					func_47();
				}
				else
				{
					if (unk_0x50465D2C022B9E04(2) || unk_0xF7E138CFA19B55E7())
					{
						func_62(iLocal_92, "SET_DATA_SLOT", 2f, unk_0xE57EAD1FEA2A6FAF(0, 184, true), "CELL_SP_2NP_XB");
					}
					else
					{
						func_62(iLocal_92, "SET_DATA_SLOT", 2f, unk_0xE57EAD1FEA2A6FAF(0, 184, true), "CELL_SP_2NP_XB");
					}
					func_62(iLocal_92, "SET_DATA_SLOT", 3f, unk_0xE57EAD1FEA2A6FAF(2, 183, true), "CELL_GRID");
					func_62(iLocal_92, "SET_DATA_SLOT", 4f, unk_0xC7CF72D26EA6A227(0, 1, true), "CELL_285");
					if (func_141())
					{
						func_46(5f);
						func_45(6f);
						if (func_29(1))
						{
							func_28(7f);
							if (bLocal_29)
							{
								func_62(iLocal_92, "SET_DATA_SLOT", 8f, unk_0xE57EAD1FEA2A6FAF(2, 185, true), "CELL_DEPTH");
							}
						}
						else if (bLocal_29)
						{
							func_62(iLocal_92, "SET_DATA_SLOT", 7f, unk_0xE57EAD1FEA2A6FAF(2, 185, true), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) || unk_0xADC5538B9DCA2177(unk_0xBC25C936A095B5BA()) == 2)
			{
				if (!unk_0xADC5538B9DCA2177(unk_0xBC25C936A095B5BA()) == 2)
				{
					func_62(iLocal_92, "SET_DATA_SLOT", 3f, unk_0xE57EAD1FEA2A6FAF(2, 183, true), "CELL_GRID");
					func_62(iLocal_92, "SET_DATA_SLOT", 4f, unk_0xC7CF72D26EA6A227(0, 1, true), "CELL_285");
					func_62(iLocal_92, "SET_DATA_SLOT", 5f, unk_0xE57EAD1FEA2A6FAF(0, 39, true), "CELL_284");
					if (func_141())
					{
						func_46(6f);
						func_45(7f);
						func_62(iLocal_92, "SET_DATA_SLOT", 8f, unk_0xE57EAD1FEA2A6FAF(2, 185, true), "CELL_DEPTH");
					}
				}
				else
				{
					func_62(iLocal_92, "SET_DATA_SLOT", 2f, unk_0xC7CF72D26EA6A227(0, 1, true), "CELL_285");
					if (func_141())
					{
						func_46(3f);
						func_45(4f);
						func_62(iLocal_92, "SET_DATA_SLOT", 5f, unk_0xE57EAD1FEA2A6FAF(2, 185, true), "CELL_DEPTH");
					}
				}
			}
			else if (!unk_0xADC5538B9DCA2177(unk_0xBC25C936A095B5BA()) == 2)
			{
				if (unk_0x50465D2C022B9E04(2) || unk_0xF7E138CFA19B55E7())
				{
					func_62(iLocal_92, "SET_DATA_SLOT", 2f, unk_0xE57EAD1FEA2A6FAF(0, 184, true), "CELL_SP_1NP_XB");
				}
				else
				{
					func_62(iLocal_92, "SET_DATA_SLOT", 2f, unk_0xE57EAD1FEA2A6FAF(0, 184, true), "CELL_SP_1NP_XB");
				}
				func_62(iLocal_92, "SET_DATA_SLOT", 4f, unk_0xE57EAD1FEA2A6FAF(2, 183, true), "CELL_GRID");
				func_62(iLocal_92, "SET_DATA_SLOT", 5f, unk_0xC7CF72D26EA6A227(0, 1, true), "CELL_285");
				func_62(iLocal_92, "SET_DATA_SLOT", 6f, unk_0xE57EAD1FEA2A6FAF(0, 39, true), "CELL_284");
				if (func_141())
				{
					func_46(7f);
					func_45(8f);
					if (bLocal_30)
					{
						func_62(iLocal_92, "SET_DATA_SLOT", 3f, unk_0xE57EAD1FEA2A6FAF(0, 182, true), "CELL_FOCUS");
					}
					func_62(iLocal_92, "SET_DATA_SLOT", 9f, unk_0xE57EAD1FEA2A6FAF(2, 185, true), "CELL_DEPTH");
				}
				else
				{
					if (unk_0x50465D2C022B9E04(2) || unk_0xF7E138CFA19B55E7())
					{
						func_62(iLocal_92, "SET_DATA_SLOT", 2f, unk_0xE57EAD1FEA2A6FAF(0, 184, true), "CELL_SP_1NP_XB");
					}
					else
					{
						func_62(iLocal_92, "SET_DATA_SLOT", 2f, unk_0xE57EAD1FEA2A6FAF(0, 184, true), "CELL_SP_1NP_XB");
					}
					func_62(iLocal_92, "SET_DATA_SLOT", 3f, unk_0xC7CF72D26EA6A227(0, 1, true), "CELL_285");
					if (func_141())
					{
						func_46(4f);
						func_45(5f);
						func_62(iLocal_92, "SET_DATA_SLOT", 6f, unk_0xE57EAD1FEA2A6FAF(2, 185, true), "CELL_DEPTH");
					}
				}
			}
		}
		unk_0x29CD142125FE177B(iLocal_92, "SET_MAX_WIDTH");
		unk_0xD44E04EBBDC4CE88(fLocal_40);
		unk_0xF9FBC2F3F73D94C9();
		func_132(iLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_51()//Position - 0xB9F1
{
	func_132(iLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_132(iLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_62(iLocal_92, "SET_DATA_SLOT", 3f, unk_0xE57EAD1FEA2A6FAF(0, 39, true), "CELL_284");
	func_62(iLocal_92, "SET_DATA_SLOT", 2f, unk_0xC7CF72D26EA6A227(0, 1, true), "CELL_285");
	func_62(iLocal_92, "SET_DATA_SLOT", 1f, unk_0xE57EAD1FEA2A6FAF(2, 179, true), func_61());
	func_62(iLocal_92, "SET_DATA_SLOT", 0f, unk_0xE57EAD1FEA2A6FAF(0, 177, true), "CELL_281");
	unk_0x29CD142125FE177B(iLocal_92, "SET_MAX_WIDTH");
	unk_0xD44E04EBBDC4CE88(fLocal_40);
	unk_0xF9FBC2F3F73D94C9();
	func_132(iLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_52()//Position - 0xBACA
{
	if (iLocal_82)
	{
		unk_0x2B9AEC08E469E384(fLocal_36, 1065353216);
		unk_0xF3F01A78937DC905(fLocal_37);
	}
}

void func_53(int iParam0)//Position - 0xBAE8
{
	if (iLocal_106 == 1)
	{
		return;
	}
	if (Global_440000.f_22E8B == 1)
	{
	}
	else if (Global_440000.f_22E8C == 1)
	{
	}
	else
	{
		unk_0xAF81D8144ED2AE74(iParam0);
	}
}

void func_54()//Position - 0xBB21
{
	if (iLocal_28 == 1)
	{
		if (unk_0x3362CDE8460ED38B(sLocal_19[Global_4118CE], "phone_cam12DUMMY"))
		{
			unk_0xFD068BE6296B968B(0);
			unk_0x696835D78F5EA372(0);
		}
		else
		{
			unk_0xFD068BE6296B968B(1);
			unk_0x696835D78F5EA372(1);
		}
	}
}

void func_55()//Position - 0xBB59
{
	func_132(iLocal_91, "SHOW_REMAINING_PHOTOS", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (!func_141())
	{
		if (Global_196038 == 0)
		{
			unk_0x92ED2B57F74A9650("phone_cam");
		}
	}
}

int func_56()//Position - 0xBB98
{
	if (func_57(14))
	{
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			if ((unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_19B04.f_6D75[0 /*29*/] || unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_19B04.f_6D75[1 /*29*/]) || unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_19B04.f_6D75[2 /*29*/])
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
	return 1;
}

bool func_57(int iParam0)//Position - 0xBC14
{
	return Global_8C41 == iParam0;
}

void func_58(char* sParam0)//Position - 0xBC22
{
	unk_0x57016C44F10111F0(sParam0);
	unk_0x64989E60CF560CA1();
}

void func_59()//Position - 0xBC34
{
	if (unk_0x50465D2C022B9E04(2) || unk_0xF7E138CFA19B55E7())
	{
		func_62(iLocal_92, "SET_DATA_SLOT", 2f, unk_0xE57EAD1FEA2A6FAF(0, 184, true), "CELL_SP_2NP_XB");
	}
	else
	{
		func_62(iLocal_92, "SET_DATA_SLOT", 2f, unk_0xE57EAD1FEA2A6FAF(0, 184, true), "CELL_SP_2NP_XB");
	}
	if (unk_0x50465D2C022B9E04(2))
	{
		func_62(iLocal_92, "SET_DATA_SLOT", 3f, unk_0xE57EAD1FEA2A6FAF(0, 30, true), "CELL_RT_RSTICK");
		func_62(iLocal_92, "SET_DATA_SLOT", 4f, unk_0xC7CF72D26EA6A227(2, 1, true), "CELL_RT_LSTICK");
	}
	else
	{
		func_62(iLocal_92, "SET_DATA_SLOT", 3f, unk_0xE57EAD1FEA2A6FAF(0, 1, true), "CELL_RT_RSTICK");
		func_62(iLocal_92, "SET_DATA_SLOT", 4f, unk_0xC7CF72D26EA6A227(2, 0, true), "CELL_RT_LSTICK");
	}
}

void func_60()//Position - 0xBCE3
{
	if (unk_0x50465D2C022B9E04(2) || unk_0xF7E138CFA19B55E7())
	{
		func_62(iLocal_92, "SET_DATA_SLOT", 3f, unk_0xE57EAD1FEA2A6FAF(0, 184, true), "CELL_SP_2NP_XB");
	}
	else
	{
		func_62(iLocal_92, "SET_DATA_SLOT", 3f, unk_0xE57EAD1FEA2A6FAF(0, 184, true), "CELL_SP_2NP_XB");
	}
	func_62(iLocal_92, "SET_DATA_SLOT", 4f, unk_0xC7CF72D26EA6A227(0, 1, true), "CELL_LT_RSTICK");
	if (func_57(14))
	{
		func_62(iLocal_92, "SET_DATA_SLOT", 5f, unk_0xE57EAD1FEA2A6FAF(2, 30, true), "CELL_LT_LSTICK");
	}
	else
	{
		func_62(iLocal_92, "SET_DATA_SLOT", 5f, unk_0xE57EAD1FEA2A6FAF(0, 39, true), "CELL_LT_LSTICKZ");
		func_62(iLocal_92, "SET_DATA_SLOT", 6f, unk_0xE57EAD1FEA2A6FAF(2, 30, true), "CELL_LT_LSTICK");
	}
}

char* func_61()//Position - 0xBD95
{
	if (Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_21 == 233 && Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_B0 == 9)
	{
		return "FHHUD_SENDLES";
	}
	return "CELL_287";
}

void func_62(int iParam0, char* sParam1, float fParam2, char* sParam3, char* sParam4)//Position - 0xBDD4
{
	unk_0x29CD142125FE177B(iParam0, sParam1);
	unk_0x1E1FB49121565EB6(SYSTEM::ROUND(fParam2));
	if (!unk_0xF1734B55490E9045(sParam3))
	{
		func_63(sParam3);
	}
	if (!unk_0xF1734B55490E9045(sParam4))
	{
		func_58(sParam4);
	}
	unk_0xF9FBC2F3F73D94C9();
}

void func_63(char* sParam0)//Position - 0xBE13
{
	unk_0xCB30200B8055CA57(sParam0);
}

void func_64()//Position - 0xBE21
{
	if (Global_11542)
	{
		switch (Global_4215)
		{
			case 0:
				if (unk_0x50465D2C022B9E04(2))
				{
					func_128("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_128("CELL_CAM_SELFIE_0", -1);
				}
				Global_4215++;
				break;
			
			case 1:
				if (!unk_0xF16DAFF595E80F7C())
				{
					if (unk_0x50465D2C022B9E04(2))
					{
						func_128("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_128("CELL_CAM_SELFIE_1", -1);
					}
					Global_4215++;
				}
				break;
			
			case 2:
				break;
		}
	}
	else
	{
		switch (Global_4214)
		{
			case 0:
				if (unk_0x50465D2C022B9E04(2))
				{
					func_128("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_128("CELL_CAM_SELFIE_0", -1);
				}
				Global_4214++;
				break;
			
			case 1:
				if (!unk_0xF16DAFF595E80F7C())
				{
					if (unk_0x50465D2C022B9E04(2))
					{
						func_128("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_128("CELL_CAM_SELFIE_1", -1);
					}
					Global_4214++;
				}
				break;
			
			case 2:
				break;
			}
	}
}

void func_65()//Position - 0xBF1D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	
	if (unk_0x50465D2C022B9E04(2))
	{
		iVar9 = 179;
		iVar10 = 21;
	}
	else
	{
		iVar9 = 228;
		iVar10 = 229;
	}
	if (unk_0x8FCEEB789599BD9B(2, iVar10) && !unk_0x8FCEEB789599BD9B(2, iVar9))
	{
		unk_0xBBC4195AD74D153D(0, 2, 1);
		unk_0xBBC4195AD74D153D(0, 1, 1);
		iVar0 = SYSTEM::FLOOR(unk_0xE56557A1B607909F(0, 30)) * 127;
		iVar1 = SYSTEM::FLOOR(unk_0xE56557A1B607909F(0, 31)) * 127;
		iVar2 = SYSTEM::FLOOR(unk_0xE56557A1B607909F(0, 1)) * 127;
		iVar3 = SYSTEM::FLOOR(unk_0xE56557A1B607909F(0, 2)) * 127;
		if (unk_0x50465D2C022B9E04(2))
		{
			if (unk_0xC40EDFF7541407A8(iVar0) > 28 || unk_0xC40EDFF7541407A8(iVar1) > 28)
			{
				fVar6 = ((IntToFloat(iVar0) / 128f) * fLocal_114);
			}
		}
		else if (unk_0xC40EDFF7541407A8(iVar2) > 28 || unk_0xC40EDFF7541407A8(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_114);
		}
		if (unk_0x50465D2C022B9E04(2))
		{
			fVar7 = unk_0xE56557A1B607909F(0, 290);
			fVar8 = unk_0xE56557A1B607909F(0, 291);
			if (unk_0xCBE319E6CA6FF4D2())
			{
				fVar8 = (fVar8 * -1f);
			}
			fVar4 = (fVar4 + fVar7);
			fVar5 = (fVar5 - fVar8);
		}
		else if (unk_0xC40EDFF7541407A8(iVar0) > 28 || unk_0xC40EDFF7541407A8(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_114);
			fVar5 = ((IntToFloat(-iVar1) / 128f) * fLocal_114);
		}
		func_68(fVar5);
		func_67(fVar6);
		func_66(fVar4);
	}
	else if (!unk_0x8FCEEB789599BD9B(2, iVar9))
	{
		unk_0x5EFA245B45A49778(0, 2, 1);
		unk_0x5EFA245B45A49778(0, 1, 1);
	}
}

void func_66(float fParam0)//Position - 0xC09E
{
	fLocal_111 = (fLocal_111 + fParam0);
	if (fLocal_111 > 1f)
	{
		fLocal_111 = 1f;
	}
	else if (fLocal_111 < -1f)
	{
		fLocal_111 = -1f;
	}
	unk_0xE192619A62EDCCE6(fLocal_111);
}

void func_67(float fParam0)//Position - 0xC0CA
{
	fLocal_112 = (fLocal_112 + fParam0);
	if (fLocal_112 > 1f)
	{
		fLocal_112 = 1f;
	}
	else if (fLocal_112 < -1f)
	{
		fLocal_112 = -1f;
	}
	unk_0xF3EF9340AD350737(fLocal_112);
}

void func_68(float fParam0)//Position - 0xC0F6
{
	fLocal_113 = (fLocal_113 + fParam0);
	if (fLocal_113 > 1f)
	{
		fLocal_113 = 1f;
	}
	else if (fLocal_113 < -1f)
	{
		fLocal_113 = -1f;
	}
	unk_0x4AF1A2347337312B(fLocal_113);
}

void func_69()//Position - 0xC122
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	
	if (unk_0x50465D2C022B9E04(2))
	{
		iVar10 = 179;
		iVar11 = 178;
		if (unk_0x8FCEEB789599BD9B(2, iVar10))
		{
			if (unk_0x694514BD37EC4E94(2, 178))
			{
				unk_0x91EC6AEB1932A6B8(0.5f);
				unk_0x569ABE7ED59B6777(0.85f);
				unk_0xA0A915A248C4216D(0.5f);
				unk_0x9BD568826C3C2591(-0.25f);
				fLocal_107 = 0.5f;
				fLocal_108 = 0.85f;
				fLocal_109 = 0.5f;
				fLocal_110 = -0.25f;
			}
		}
	}
	else
	{
		iVar10 = 228;
		iVar11 = 229;
	}
	if (unk_0x8FCEEB789599BD9B(2, iVar10) && !unk_0x8FCEEB789599BD9B(2, iVar11))
	{
		if (unk_0x694514BD37EC4E94(2, 178))
		{
			unk_0x91EC6AEB1932A6B8(0.5f);
			unk_0x569ABE7ED59B6777(0.85f);
			unk_0xA0A915A248C4216D(0.5f);
			unk_0x9BD568826C3C2591(-0.25f);
			fLocal_107 = 0.5f;
			fLocal_108 = 0.85f;
			fLocal_109 = 0.5f;
			fLocal_110 = -0.25f;
		}
		unk_0xBBC4195AD74D153D(0, 2, 1);
		unk_0xBBC4195AD74D153D(0, 1, 1);
		iVar0 = SYSTEM::FLOOR(unk_0xE56557A1B607909F(0, 30)) * 127;
		iVar1 = SYSTEM::FLOOR(unk_0xE56557A1B607909F(0, 31)) * 127;
		iVar2 = SYSTEM::FLOOR(unk_0xE56557A1B607909F(0, 1)) * 127;
		iVar3 = SYSTEM::FLOOR(unk_0xE56557A1B607909F(0, 2)) * 127;
		if (unk_0x50465D2C022B9E04(2))
		{
			iVar1 = SYSTEM::FLOOR(unk_0xE56557A1B607909F(0, 39)) * 127;
			fVar8 = unk_0xE56557A1B607909F(0, 290);
			fVar9 = unk_0xE56557A1B607909F(0, 291);
			if (unk_0xCBE319E6CA6FF4D2())
			{
				fVar9 = (fVar9 * -1f);
			}
			fVar6 = (fVar6 + fVar8);
			fVar7 = (fVar7 - fVar9);
		}
		else if (unk_0xC40EDFF7541407A8(iVar2) > 15 || unk_0xC40EDFF7541407A8(iVar3) > 15)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_114);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_114);
		}
		if (unk_0xC40EDFF7541407A8(iVar0) > 28 || unk_0xC40EDFF7541407A8(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_114);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_114);
		}
		func_73(fVar6);
		func_72(fVar7);
		func_71(fVar4);
		if (!func_57(14))
		{
			func_70(fVar5);
		}
	}
	else if (!unk_0xD3C4A010282C31F2(2, iVar11))
	{
		unk_0x5EFA245B45A49778(0, 2, 1);
		unk_0x5EFA245B45A49778(0, 1, 1);
	}
	if (!unk_0xD3C4A010282C31F2(2, iVar10) && !unk_0xD3C4A010282C31F2(2, iVar11))
	{
		iVar0 = SYSTEM::FLOOR(unk_0xE56557A1B607909F(0, 30)) * 127;
		iVar1 = SYSTEM::FLOOR(unk_0xE56557A1B607909F(0, 31)) * 127;
		iVar2 = SYSTEM::FLOOR(unk_0xE56557A1B607909F(0, 290)) * 127;
		iVar3 = SYSTEM::FLOOR(unk_0xE56557A1B607909F(0, 291)) * 127;
		iVar2 = SYSTEM::FLOOR(unk_0xE56557A1B607909F(0, 294)) * 127;
		iVar2 = SYSTEM::FLOOR(unk_0xE56557A1B607909F(0, 295)) * 127;
		iVar3 = SYSTEM::FLOOR(unk_0xE56557A1B607909F(0, 292)) * 127;
		iVar3 = SYSTEM::FLOOR(unk_0xE56557A1B607909F(0, 293)) * 127;
		if (unk_0xC40EDFF7541407A8(iVar2) > 28 || unk_0xC40EDFF7541407A8(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_114);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_114);
		}
		if (unk_0xC40EDFF7541407A8(iVar0) > 28 || unk_0xC40EDFF7541407A8(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_114);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_114);
		}
		if (!func_57(14))
		{
			func_70(fVar5);
		}
	}
}

void func_70(float fParam0)//Position - 0xC44D
{
	fLocal_109 = (fLocal_109 + fParam0);
	if (fLocal_109 > 1f)
	{
		fLocal_109 = 1f;
	}
	else if (fLocal_109 < 0f)
	{
		fLocal_109 = 0f;
	}
	unk_0xA0A915A248C4216D(fLocal_109);
}

void func_71(float fParam0)//Position - 0xC479
{
	fLocal_110 = (fLocal_110 + fParam0);
	if (fLocal_110 > 1f)
	{
		fLocal_110 = 1f;
	}
	else if (fLocal_110 < -1f)
	{
		fLocal_110 = -1f;
	}
	unk_0x9BD568826C3C2591(fLocal_110);
}

void func_72(float fParam0)//Position - 0xC4A5
{
	fLocal_108 = (fLocal_108 + fParam0);
	if (fLocal_108 > 1.5f)
	{
		fLocal_108 = 1.5f;
	}
	else if (fLocal_108 < 0.5f)
	{
		fLocal_108 = 0.5f;
	}
	unk_0x569ABE7ED59B6777(fLocal_108);
}

void func_73(float fParam0)//Position - 0xC4E1
{
	fLocal_107 = (fLocal_107 + fParam0);
	if (fLocal_107 > 2f)
	{
		fLocal_107 = 2f;
	}
	else if (fLocal_107 < -1.7f)
	{
		fLocal_107 = -1.7f;
	}
	unk_0x91EC6AEB1932A6B8(fLocal_107);
}

void func_74()//Position - 0xC515
{
	if (Global_11646 || Global_11647)
	{
		return;
	}
	if (iLocal_75 == 0)
	{
		if (!iLocal_100)
		{
			if (Global_440000.f_22E8B == 0 && Global_440000.f_22E8C == 0)
			{
				unk_0x4B6031094354FED6(iLocal_92, 255, 255, 255, 0, 0);
			}
		}
	}
	if (iLocal_78 == 0)
	{
		if (Global_3863)
		{
			if (Global_3943)
			{
				if (iLocal_100 == 0)
				{
					if (Global_389D.f_1 > 3)
					{
					}
				}
			}
		}
		else
		{
			func_76(255, 255, 255, 255);
			func_75(0.059f, 0.644f, "CELL_284", 0);
			func_76(255, 255, 255, 255);
			func_75(0.165f, 0.644f, "CELL_285", 0);
			func_76(255, 255, 255, 255);
			func_75(0.275f, 0.75f, "CELL_280", 0);
			func_76(255, 255, 255, 255);
			func_75(0.275f, 0.83f, "CELL_281", 0);
		}
	}
	else if (Global_3863)
	{
	}
	else
	{
		func_76(255, 255, 255, 255);
		func_75(0.275f, 0.75f, func_61(), 0);
		func_76(255, 255, 255, 255);
		func_75(0.275f, 0.79f, "CELL_286", 0);
		func_76(255, 255, 255, 255);
		func_75(0.275f, 0.83f, "CELL_281", 0);
	}
}

void func_75(float fParam0, float fParam1, char* sParam2, int iParam3)//Position - 0xC664
{
	unk_0x8B371195127AACF2(sParam2);
	unk_0x3A8B9C7B1C825123(fParam0, fParam1, iParam3);
}

void func_76(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xC67C
{
	unk_0xB8F3C51875F7BEA3(0.4f, 0.4f);
	unk_0x08F1F5EC48E158AB(0, 0, 0, 0, 0);
	unk_0x1EC7F2EE7CC55F66(1, 0, 0, 0, 205);
	unk_0x39AFAD5E153F0203(1);
	unk_0xC8793973D4960AC4(0);
	unk_0xCC4FE6A016BA0765(iParam0, iParam1, iParam2, iParam3);
}

void func_77()//Position - 0xC6BB
{
	unk_0x2B9AEC08E469E384(fLocal_38, 1065353216);
	unk_0xF3F01A78937DC905(fLocal_39);
}

void func_78()//Position - 0xC6D4
{
	unk_0xBBC4195AD74D153D(0, 25, 1);
	unk_0xBBC4195AD74D153D(0, 44, 1);
	unk_0xBBC4195AD74D153D(0, 3, 1);
	unk_0xBBC4195AD74D153D(0, 4, 1);
	unk_0xBBC4195AD74D153D(0, 5, 1);
	unk_0xBBC4195AD74D153D(0, 6, 1);
	unk_0xBBC4195AD74D153D(0, 1, 1);
	unk_0xBBC4195AD74D153D(0, 2, 1);
	unk_0xBBC4195AD74D153D(0, 39, 1);
	unk_0xBBC4195AD74D153D(0, 47, 1);
	unk_0xBBC4195AD74D153D(0, 56, 1);
}

void func_79()//Position - 0xC72E
{
	vLocal_44 = { Global_386E[Global_3866 /*3*/] };
	if (Global_3863)
	{
		if (func_82())
		{
			unk_0x652515566BB40BA9(&vLocal_46);
			vLocal_44 = { vLocal_46 };
			iLocal_72 = 0;
			iLocal_73 = 0;
			iLocal_74 = 0;
		}
		func_1(1);
		if (iLocal_72)
		{
			vLocal_42.x = (vLocal_42.x + 12f);
		}
		if (vLocal_42.x > vLocal_44.x || vLocal_42.x == vLocal_44.x)
		{
			vLocal_42.x = vLocal_44.x;
			iLocal_72 = 0;
		}
		if (iLocal_73)
		{
			vLocal_42.y = (vLocal_42.y - 6f);
		}
		if (unk_0xFA30DFD0084E92FE(Global_93D, 4))
		{
			if (vLocal_42.y < (vLocal_44.y + 15f) || vLocal_42.y == (vLocal_44.y + 15f))
			{
				vLocal_42.y = (vLocal_44.y + 15f);
				iLocal_73 = 0;
			}
		}
		else if (vLocal_42.y < (vLocal_44.y + 10f) || vLocal_42.y == (vLocal_44.y + 10f))
		{
			vLocal_42.y = (vLocal_44.y + 10f);
			iLocal_73 = 0;
		}
		if (iLocal_74)
		{
			vLocal_42.z = (vLocal_42.z - 10f);
		}
		if (vLocal_42.z < vLocal_44.z || vLocal_42.z == vLocal_44.z)
		{
			vLocal_42.z = vLocal_44.z;
			iLocal_74 = 0;
		}
		if (func_82() == 0)
		{
			if (unk_0xFA30DFD0084E92FE(Global_93D, 4))
			{
				vLocal_44.y = (vLocal_44.y + 15f);
			}
			else
			{
				vLocal_44.y = (vLocal_44.y + 10f);
			}
			vLocal_44.x = (vLocal_44.x - 14f);
		}
		else
		{
			vLocal_44 = { Global_3867[Global_3866 /*3*/] };
		}
		vLocal_42 = { vLocal_44 };
		iLocal_74 = 0;
		iLocal_73 = 0;
		iLocal_72 = 0;
		unk_0x3D7D94BDD4D22C14(vLocal_42);
		if ((iLocal_72 == 0 && iLocal_73 == 0) && iLocal_74 == 0)
		{
			iLocal_75 = 0;
			vLocal_43 = { -90.3f, 0f, 90f };
			unk_0xF960832D272B97D4(vLocal_43, 0);
			if (!unk_0xFA30DFD0084E92FE(Global_93B, 22))
			{
				if (unk_0xFA30DFD0084E92FE(Global_93B, 28))
				{
					StringCopy(&cLocal_96, "CELL_294", 16);
					func_81();
				}
				else
				{
					StringCopy(&cLocal_96, "CELL_293", 16);
					func_80();
				}
				iLocal_51 = 2;
			}
		}
	}
}

void func_80()//Position - 0xC92D
{
	func_132(iLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_132(iLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (unk_0xFA30DFD0084E92FE(Global_93C, 28))
	{
		func_62(iLocal_92, "SET_DATA_SLOT", 0f, unk_0xE57EAD1FEA2A6FAF(0, 176, true), "CELL_286");
	}
	else
	{
		func_62(iLocal_92, "SET_DATA_SLOT", 1f, unk_0xE57EAD1FEA2A6FAF(2, 178, true), "CELL_277");
		func_62(iLocal_92, "SET_DATA_SLOT", 0f, unk_0xE57EAD1FEA2A6FAF(0, 176, true), "CELL_GALSAVE");
	}
	unk_0x29CD142125FE177B(iLocal_92, "SET_MAX_WIDTH");
	unk_0xD44E04EBBDC4CE88(fLocal_40);
	unk_0xF9FBC2F3F73D94C9();
	func_132(iLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_81()//Position - 0xC9FF
{
	func_132(iLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_132(iLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (unk_0xFA30DFD0084E92FE(Global_93C, 28))
	{
		func_62(iLocal_92, "SET_DATA_SLOT", 1f, unk_0xE57EAD1FEA2A6FAF(2, 179, true), func_61());
		func_62(iLocal_92, "SET_DATA_SLOT", 0f, unk_0xE57EAD1FEA2A6FAF(0, 176, true), "CELL_286");
	}
	else
	{
		func_62(iLocal_92, "SET_DATA_SLOT", 2f, unk_0xE57EAD1FEA2A6FAF(2, 179, true), func_61());
		func_62(iLocal_92, "SET_DATA_SLOT", 1f, unk_0xE57EAD1FEA2A6FAF(2, 178, true), "CELL_277");
		func_62(iLocal_92, "SET_DATA_SLOT", 0f, unk_0xE57EAD1FEA2A6FAF(0, 176, true), "CELL_GALSAVE");
	}
	unk_0x29CD142125FE177B(iLocal_92, "SET_MAX_WIDTH");
	unk_0xD44E04EBBDC4CE88(fLocal_40);
	unk_0xF9FBC2F3F73D94C9();
	func_132(iLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

int func_82()//Position - 0xCAFF
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		if (Global_389D.f_1 == 10 || Global_389D.f_1 == 9)
		{
			if (Global_3864 == 0)
			{
				if (Global_68E != 128)
				{
					if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
					{
						if (Global_3DB8 != 2)
						{
						}
					}
				}
			}
		}
		if (func_57(14))
		{
			return 0;
		}
		if (unk_0x74AAB09D79A6344E(unk_0xBC25C936A095B5BA(), 0))
		{
			return 0;
		}
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			if (!unk_0x98A60DA6C3008698())
			{
				if (unk_0x149E9368A11035DE(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0x9273B3557334635D(unk_0xBC25C936A095B5BA()) || unk_0xBCBEDE9A08E4ED89(unk_0xBC25C936A095B5BA())) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0x6BA46D5172404F26(unk_0xBC25C936A095B5BA()))
		{
			return 0;
		}
		if (Global_1974C)
		{
			return 0;
		}
	}
	if (Global_11542)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0xEBC6179F395EFBEB();
	iVar1 = unk_0x3D875C2512206692(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0x98A60DA6C3008698()))
	{
		iVar2 = 1;
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
			{
				iVar3 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
				if ((((((((unk_0x7512ED01F3F46714(unk_0x6F79ECA8C83E4357(iVar3)) || unk_0x2B4DE5C0D509B0F9(unk_0x6F79ECA8C83E4357(iVar3))) || unk_0x89B9572166100905(unk_0x6F79ECA8C83E4357(iVar3))) || unk_0x6F79ECA8C83E4357(iVar3) == joaat("seashark")) || unk_0x6F79ECA8C83E4357(iVar3) == joaat("seashark2")) || unk_0x6F79ECA8C83E4357(iVar3) == joaat("rhino")) || unk_0x6F79ECA8C83E4357(iVar3) == joaat("submersible")) || unk_0x6F79ECA8C83E4357(iVar3) == joaat("submersible2")) || unk_0x6F79ECA8C83E4357(iVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_411EA0 || iVar2 == 1)
	{
		if (unk_0xB731B8C5BCE89836(joaat("apptrackify")) > 0 || Global_19B04.f_36C6.f_59)
		{
			if (unk_0xB731B8C5BCE89836(joaat("michael2")) > 0)
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
			return 1;
		}
	}
	return 0;
}

void func_83()//Position - 0xCD26
{
	unk_0xBBC4195AD74D153D(0, 47, 1);
	unk_0xD55638CE45B2B948(0, Global_387F);
	vLocal_43 = { Global_3875 };
	vLocal_44 = { Global_386E[Global_3866 /*3*/] };
	if (func_82())
	{
		unk_0x59FA1842E06428BC(&vLocal_45, 0);
		vLocal_43 = { vLocal_45 };
		unk_0x652515566BB40BA9(&vLocal_46);
		vLocal_44 = { vLocal_46 };
		iLocal_69 = 0;
		iLocal_70 = 0;
		iLocal_71 = 0;
		iLocal_72 = 0;
		iLocal_73 = 0;
		iLocal_74 = 0;
	}
	if (Global_3863)
	{
		func_132(iLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_53(0);
		iLocal_82 = 0;
		if (unk_0xFA30DFD0084E92FE(Global_93B, 30))
		{
			iLocal_69 = 0;
			iLocal_70 = 0;
			iLocal_71 = 0;
			func_84();
		}
		if (iLocal_72)
		{
			if (unk_0xFA30DFD0084E92FE(Global_93B, 9))
			{
				vLocal_42.x = (vLocal_42.x + 2f);
			}
			else
			{
				vLocal_42.x = (vLocal_42.x + 12f);
			}
		}
		if (vLocal_42.x > vLocal_44.x || vLocal_42.x == vLocal_44.x)
		{
			vLocal_42.x = vLocal_44.x;
			iLocal_72 = 0;
		}
		if (iLocal_73)
		{
			vLocal_42.y = (vLocal_42.y - 6f);
		}
		if (vLocal_42.y < vLocal_44.y || vLocal_42.y == vLocal_44.y)
		{
			vLocal_42.y = vLocal_44.y;
			iLocal_73 = 0;
		}
		if (iLocal_74)
		{
			vLocal_42.z = (vLocal_42.z - 10f);
		}
		if (vLocal_42.z < vLocal_44.z || vLocal_42.z == vLocal_44.z)
		{
			vLocal_42.z = vLocal_44.z;
			iLocal_74 = 0;
		}
		if (iLocal_74 == 0)
		{
			if (iLocal_69)
			{
				vLocal_41.x = (vLocal_41.x + 1f);
			}
			if (vLocal_41.x > vLocal_43.x || vLocal_41.x == vLocal_43.x)
			{
				vLocal_41.x = vLocal_43.x;
				iLocal_69 = 0;
			}
			if (iLocal_70)
			{
				vLocal_41.y = (vLocal_41.y - 2f);
			}
			if (vLocal_41.y < vLocal_43.y || vLocal_41.y == vLocal_43.y)
			{
				vLocal_41.y = vLocal_43.y;
				iLocal_70 = 0;
			}
			if (iLocal_71)
			{
				vLocal_41.z = (vLocal_41.z - 14f);
			}
			if (vLocal_41.z < vLocal_43.z || vLocal_41.z == vLocal_43.z)
			{
				vLocal_41.z = vLocal_43.z;
				iLocal_71 = 0;
			}
		}
		if (iLocal_77)
		{
			vLocal_41 = { vLocal_43 };
			vLocal_42 = { vLocal_44 };
			iLocal_69 = 0;
			iLocal_70 = 0;
			iLocal_71 = 0;
			if (func_82() == 0)
			{
				unk_0xF960832D272B97D4(vLocal_41, 0);
				unk_0x3D7D94BDD4D22C14(vLocal_42);
			}
			func_91(0, 1);
		}
		else if (func_82() == 0)
		{
			unk_0xF960832D272B97D4(vLocal_41, 0);
			unk_0x3D7D94BDD4D22C14(vLocal_42);
		}
		if ((iLocal_69 == 0 && iLocal_70 == 0) && iLocal_71 == 0)
		{
			func_84();
		}
	}
	else
	{
		if (iLocal_69)
		{
			vLocal_41.x = (vLocal_41.x + 1f);
		}
		if (vLocal_41.x > vLocal_43.x || vLocal_41.x == vLocal_43.x)
		{
			iLocal_69 = 0;
		}
		if (iLocal_70)
		{
			vLocal_41.y = (vLocal_41.y - 2f);
		}
		if (vLocal_41.y < vLocal_43.y || vLocal_41.y == vLocal_43.y)
		{
			iLocal_70 = 0;
		}
		if (iLocal_71)
		{
			vLocal_41.z = (vLocal_41.z - 7f);
		}
		if (vLocal_41.z < vLocal_43.z || vLocal_41.z == vLocal_43.z)
		{
			iLocal_71 = 0;
		}
		if ((iLocal_69 == 0 && iLocal_70 == 0) && iLocal_71 == 0)
		{
			func_84();
		}
	}
	unk_0xF960832D272B97D4(vLocal_41, 0);
}

void func_84()//Position - 0xD030
{
	func_1(0);
	if (func_82() == 0)
	{
		if (unk_0xFA30DFD0084E92FE(Global_93B, 30))
		{
			unk_0x3D7D94BDD4D22C14(Global_3867[Global_3866 /*3*/]);
		}
		else
		{
			unk_0x3D7D94BDD4D22C14(Global_386E[Global_3866 /*3*/]);
		}
		vLocal_41 = { vLocal_43 };
		unk_0xF960832D272B97D4(vLocal_41, 0);
	}
	Global_41C1 = 0;
	func_94(0, 0);
	func_98(0);
	iLocal_66 = 0;
	func_93();
	Global_3890 = 1;
	Global_41C4 = 0;
	if (Global_389D.f_1 > 4)
	{
		Global_389D.f_1 = 6;
		Global_3887 = 1;
		func_85();
	}
	if (unk_0xA7F138B5B1AB2CF6(iLocal_91))
	{
		func_131(iLocal_91, "SHUTDOWN_MOVIE");
	}
	SYSTEM::WAIT(0);
	unk_0x2423B13D9CFAD1DD();
	unk_0xB0B0FE33F4F22679(&iLocal_92);
	unk_0xB0B0FE33F4F22679(&iLocal_91);
	if (Global_3945 == 1)
	{
		unk_0xF0059F27F7BB6680(&Global_93B, 17);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&Global_93B, 17);
	}
	unk_0x7CB6FD92BE491AD9(&Global_93B, 18);
	unk_0x7CB6FD92BE491AD9(&Global_93B, 21);
	unk_0x7A4219270DF1663F(0, 1);
	unk_0x7CB6FD92BE491AD9(&Global_93D, 3);
	unk_0x7CB6FD92BE491AD9(&Global_411DCA, 3);
	unk_0x121BBDEFA4F0C22B(0);
	unk_0xA47A6B60353B4E1D(unk_0xB5CEFD608600A09F(), 1);
	unk_0xC0404835F30391BB(15);
	Global_41C5 = 1;
	unk_0x38FF8CB6377D36F6(iLocal_63);
	unk_0x26D344275839A25E(iLocal_63);
	unk_0x21B00B24BEAA7264();
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0xA3860F0641D38992(unk_0xBC25C936A095B5BA(), "Mood_Normal_1", 0);
		unk_0x851D6A4006011A10(unk_0xBC25C936A095B5BA());
	}
	func_93();
	unk_0xFD068BE6296B968B(0);
	unk_0x696835D78F5EA372(0);
	unk_0x2273C07E7BC105FB(1f);
	if (Global_4118CF > 0 && Global_4118CF < 13)
	{
		unk_0x786556581D95BCB2(sLocal_20[Global_4118CF]);
	}
	func_91(0, 1);
	if (func_139(0, 1, iLocal_31, 1))
	{
		iLocal_31 = 0;
	}
	unk_0x95E4B6F3ED223F5A();
}

void func_85()//Position - 0xD1BA
{
	vector3 vVar0[24];
	
	if (Global_388C == 1)
	{
		return;
	}
	if (Global_389D.f_1 < 4)
	{
		return;
	}
	while (!unk_0xA7F138B5B1AB2CF6(Global_388A))
	{
		SYSTEM::WAIT(0);
	}
	switch (Global_389D.f_1)
	{
		case 6:
			func_132(Global_388A, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_89(Global_B98);
			if (Global_B98 == 1)
			{
				func_132(Global_388A, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_38A1), -1082130432, -1082130432, -1082130432);
				Global_3889 = Global_38A1;
			}
			else
			{
				func_132(Global_388A, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_38A2), -1082130432, -1082130432, -1082130432);
				Global_3889 = Global_38A2;
			}
			if (Global_3891)
			{
				func_88(Global_388A, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_88(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_88(Global_388A, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_88(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_3945 == 0)
			{
				func_88(Global_388A, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x7CB6FD92BE491AD9(&Global_93B, 17);
			}
			else if (Global_11542)
			{
				func_88(Global_388A, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x7CB6FD92BE491AD9(&Global_93B, 17);
			}
			else
			{
				if (Global_3944 == 1)
				{
					if (Global_3891)
					{
						func_88(Global_388A, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_88(Global_388A, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_3891)
				{
					func_88(Global_388A, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_88(Global_388A, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0xF0059F27F7BB6680(&Global_93B, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_132(Global_388A, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_88(Global_388A, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_88(Global_388A, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x7CB6FD92BE491AD9(&Global_93B, 17);
			if (unk_0xFA30DFD0084E92FE(Global_93B, 20))
			{
				func_88(Global_388A, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_3891)
			{
				func_88(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_3864)
				{
					func_88(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_88(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_389C == 1)
			{
				func_87();
				func_132(Global_388A, "SET_THEME", SYSTEM::TO_FLOAT(Global_19B04.f_36C6[Global_389D /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_3DC5)
				{
					unk_0x29CD142125FE177B(Global_388A, "SET_DATA_SLOT");
					unk_0x1E1FB49121565EB6(4);
					unk_0x1E1FB49121565EB6(0);
					unk_0x1E1FB49121565EB6(2);
					unk_0x57016C44F10111F0("CELL_CONDFON");
					unk_0x607C19B90D297FE2(&Global_3DC7);
					unk_0x64989E60CF560CA1();
					func_58("CELL_300");
					func_58("CELL_217");
					func_58("CELL_217");
					unk_0xF9FBC2F3F73D94C9();
				}
				else if (Global_19B04.f_6D75[Global_68E /*29*/].f_18[Global_389D] == 0)
				{
					func_88(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_75[Global_68E /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_88(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_19B04.f_6D75[Global_68E /*29*/].f_3), &(Global_19B04.f_6D75[Global_68E /*29*/].f_7), "CELL_217", &(Global_19B04.f_6D75[Global_68E /*29*/].f_3), 0);
				}
				func_132(Global_388A, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_3DB8 == 4 || Global_3DB8 == 3)
			{
				func_132(Global_388A, "SET_THEME", SYSTEM::TO_FLOAT(Global_19B04.f_36C6[Global_389D /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_87();
				if (Global_3DC5)
				{
					unk_0x29CD142125FE177B(Global_388A, "SET_DATA_SLOT");
					unk_0x1E1FB49121565EB6(4);
					unk_0x1E1FB49121565EB6(0);
					unk_0x1E1FB49121565EB6(2);
					unk_0x57016C44F10111F0("CELL_CONDFON");
					unk_0x607C19B90D297FE2(&Global_3DC7);
					unk_0x64989E60CF560CA1();
					func_58("CELL_300");
					func_58("CELL_219");
					func_58("CELL_219");
					unk_0xF9FBC2F3F73D94C9();
				}
				else
				{
					if (Global_3EBA)
					{
						StringCopy(&cVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211", 24);
					}
					if (Global_19B04.f_6D75[Global_68E /*29*/].f_18[Global_389D] == 0)
					{
						func_132(Global_388A, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_88(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_75[Global_68E /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_132(Global_388A, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_88(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_19B04.f_6D75[Global_68E /*29*/].f_3), &(Global_19B04.f_6D75[Global_68E /*29*/].f_7), &cVar0, &(Global_19B04.f_6D75[Global_68E /*29*/].f_3), 0);
					}
				}
				func_132(Global_388A, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_86();
			break;
		
		default:
			break;
	}
}

void func_86()//Position - 0xD795
{
	if (unk_0xA7F138B5B1AB2CF6(Global_388A))
	{
		if (Global_389C == 1)
		{
			if (Global_3891)
			{
				func_88(Global_388A, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_88(Global_388A, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_3DE7)
			{
				func_88(Global_388A, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0xFA30DFD0084E92FE(Global_93B, 20))
			{
				func_88(Global_388A, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_3891)
			{
				func_88(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_88(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_88(Global_388A, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x7CB6FD92BE491AD9(&Global_93B, 17);
		}
		else
		{
			func_88(Global_388A, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_88(Global_388A, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x7CB6FD92BE491AD9(&Global_93B, 17);
			if (unk_0xFA30DFD0084E92FE(Global_93B, 20))
			{
				func_88(Global_388A, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_3891)
			{
				func_88(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_3864)
				{
					func_88(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_88(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_87()//Position - 0xD925
{
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		if (Global_389D == 0)
		{
			switch (Global_19B04.f_36C6[Global_389D /*20*/].f_6)
			{
				case 1:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 0);
					break;
				
				case 2:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 1);
					break;
				
				case 3:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 2);
					break;
				
				case 4:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 3);
					break;
				
				case 5:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 4);
					break;
				
				case 6:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 5);
					break;
				
				case 7:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_389D == 1)
		{
			switch (Global_19B04.f_36C6[Global_389D /*20*/].f_6)
			{
				case 1:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 6);
					break;
				
				case 2:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 0);
					break;
				
				case 3:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 1);
					break;
				
				case 4:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 2);
					break;
				
				case 5:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 3);
					break;
				
				case 6:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 4);
					break;
				
				case 7:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_389D == 2)
		{
			switch (Global_19B04.f_36C6[Global_389D /*20*/].f_6)
			{
				case 1:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 5);
					break;
				
				case 2:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 6);
					break;
				
				case 3:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 1);
					break;
				
				case 4:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 0);
					break;
				
				case 5:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 2);
					break;
				
				case 6:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 3);
					break;
				
				case 7:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_389D == 3)
		{
			switch (Global_411E9E)
			{
				case 1:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 0);
					break;
				
				case 2:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 1);
					break;
				
				case 3:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 2);
					break;
				
				case 4:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 3);
					break;
				
				case 5:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 4);
					break;
				
				case 6:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 5);
					break;
				
				case 7:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_88(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0xDB9C
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
		func_58(sParam7);
	}
	if (!unk_0xF1734B55490E9045(sParam8))
	{
		func_58(sParam8);
	}
	if (!unk_0xF1734B55490E9045(sParam9))
	{
		func_58(sParam9);
	}
	if (!unk_0xF1734B55490E9045(sParam10))
	{
		func_58(sParam10);
	}
	if (!unk_0xF1734B55490E9045(sParam11))
	{
		func_58(sParam11);
	}
	unk_0xF9FBC2F3F73D94C9();
}

void func_89(int iParam0)//Position - 0xDC4F
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
		if (func_57(14))
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
								func_58(&(Global_942[iVar1 /*15*/]));
								unk_0x1E1FB49121565EB6(iVar2);
								unk_0xF9FBC2F3F73D94C9();
							}
							if (Global_25805E)
							{
								if (iVar1 == 14)
								{
									func_88(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_41DF), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_88(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_41E4), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_88(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_88(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_88(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_41DF), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x29CD142125FE177B(Global_388A, "SET_DATA_SLOT");
								unk_0x1E1FB49121565EB6(1);
								unk_0x1E1FB49121565EB6(iVar0);
								unk_0x1E1FB49121565EB6(Global_942[iVar1 /*15*/].f_A);
								unk_0x1E1FB49121565EB6(0);
								func_58(&(Global_942[iVar1 /*15*/]));
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
								func_58(&(Global_942[iVar1 /*15*/]));
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
								func_58(&(Global_942[iVar1 /*15*/]));
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
								func_58(&(Global_942[iVar1 /*15*/]));
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
								func_58(&(Global_942[iVar1 /*15*/]));
								unk_0x1E1FB49121565EB6(42);
								unk_0xF9FBC2F3F73D94C9();
							}
							else if (Global_942[iVar1 /*15*/].f_A == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_18C323.f_1;
								func_88(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_88(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(0), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_90()//Position - 0xE1F5
{
	switch (iLocal_51)
	{
		case 1:
			unk_0x7A4219270DF1663F(0, 1);
			if (unk_0xFA30DFD0084E92FE(Global_93B, 28))
			{
				StringCopy(&cLocal_96, "CELL_296", 16);
				func_50();
			}
			else
			{
				StringCopy(&cLocal_96, "CELL_295", 16);
				func_27();
			}
			break;
		
		case 2:
			if (!unk_0xFA30DFD0084E92FE(Global_93B, 22))
			{
				unk_0x7A4219270DF1663F(0, 1);
				if (unk_0xFA30DFD0084E92FE(Global_93B, 28))
				{
					StringCopy(&cLocal_96, "CELL_294", 16);
					func_81();
				}
				else
				{
					StringCopy(&cLocal_96, "CELL_293", 16);
					func_80();
				}
				iLocal_51 = 2;
			}
			break;
		
		default:
			break;
	}
}

void func_91(bool bParam0, bool bParam1)//Position - 0xE283
{
	if (bParam0)
	{
		if (func_92(0))
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

int func_92(int iParam0)//Position - 0xE2F7
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

void func_93()//Position - 0xE351
{
	if ((Global_440000.f_22E8B == 0 && Global_440000.f_22E8C == 0) && Global_196038 == 0)
	{
		unk_0x38505EF4199EB062();
	}
}

void func_94(int iParam0, int iParam1)//Position - 0xE388
{
	if (Global_440000.f_22E8B == 1)
	{
	}
	else if (Global_440000.f_22E8C == 1)
	{
	}
	else
	{
		unk_0xA09E3BEE73FAD3C5(iParam0, iParam1);
	}
}

int func_95()//Position - 0xE3BA
{
	if (unk_0xFA30DFD0084E92FE(Global_93B, 15))
	{
		return 1;
	}
	return 0;
}

int func_96(int iParam0, int iParam1, int iParam2)//Position - 0xE3D6
{
	if (unk_0x694514BD37EC4E94(iParam0, iParam1) || (iParam2 == 1 && unk_0xF7DDAAF0EFDAFA22(iParam0, iParam1)))
	{
		if (unk_0x8ACB0C3FACC09467())
		{
			if (unk_0x0F8865E539C1FCE8() == 0 || (unk_0xF32BA80A2DED1FC6() && unk_0x50465D2C022B9E04(2)))
			{
				return 0;
			}
		}
		if (unk_0xE186ACC7BE9B244E() || unk_0x18158A50125911B6())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_97()//Position - 0xE448
{
	if (Global_3863)
	{
		vLocal_43 = { -90.3f, 0f, 90f };
		vLocal_44 = { 1.5f, 0f, -17f };
		if (func_82())
		{
			unk_0x59FA1842E06428BC(&vLocal_45, 0);
			vLocal_43 = { vLocal_45 };
			unk_0x652515566BB40BA9(&vLocal_46);
			vLocal_44 = { vLocal_46 };
			iLocal_69 = 0;
			iLocal_70 = 0;
			iLocal_71 = 0;
			iLocal_72 = 0;
			iLocal_73 = 0;
			iLocal_74 = 0;
		}
		if (iLocal_71 == 0)
		{
			if (iLocal_72)
			{
				vLocal_42.x = (vLocal_42.x - 14f);
			}
			if (vLocal_42.x < vLocal_44.x || vLocal_42.x == vLocal_44.x)
			{
				iLocal_72 = 0;
			}
			if (iLocal_73)
			{
				vLocal_42.y = (vLocal_42.y + 7f);
			}
			if (vLocal_42.y > vLocal_44.y || vLocal_42.y == vLocal_44.y)
			{
				iLocal_73 = 0;
			}
			if (iLocal_74)
			{
				vLocal_42.z = (vLocal_42.z + 12f);
			}
			if (vLocal_42.z > vLocal_44.z || vLocal_42.z == vLocal_44.z)
			{
				iLocal_74 = 0;
			}
		}
		if (iLocal_69)
		{
			vLocal_41.x = (vLocal_41.x - 1f);
		}
		if (vLocal_41.x < vLocal_43.x || vLocal_41.x == vLocal_43.x)
		{
			vLocal_41.x = vLocal_43.x;
			iLocal_69 = 0;
		}
		if (iLocal_70)
		{
			vLocal_41.y = (vLocal_41.y - 0.5f);
		}
		if (vLocal_41.y < vLocal_43.y || vLocal_41.y == vLocal_43.y)
		{
			vLocal_41.y = vLocal_43.y;
			iLocal_70 = 0;
		}
		if (iLocal_71)
		{
			vLocal_41.z = (vLocal_41.z + 11f);
		}
		if (vLocal_41.z > vLocal_43.z || vLocal_41.z == vLocal_43.z)
		{
			vLocal_41.z = vLocal_43.z;
			iLocal_71 = 0;
		}
		if (func_82() == 0)
		{
			unk_0xF960832D272B97D4(vLocal_41, 0);
			unk_0x3D7D94BDD4D22C14(vLocal_42);
		}
	}
	else
	{
		vLocal_43 = { -93.9f, 4.9f, 90.7f };
		if (iLocal_69)
		{
			vLocal_41.x = (vLocal_41.x - 1f);
		}
		if (vLocal_41.x < vLocal_43.x || vLocal_41.x == vLocal_43.x)
		{
			iLocal_69 = 0;
		}
		if (iLocal_70)
		{
			vLocal_41.y = (vLocal_41.y + 2f);
		}
		if (vLocal_41.y > vLocal_43.y || vLocal_41.y == vLocal_43.y)
		{
			iLocal_70 = 0;
		}
		if (iLocal_71)
		{
			vLocal_41.z = (vLocal_41.z + 7f);
		}
		if (vLocal_41.z > vLocal_43.z || vLocal_41.z == vLocal_43.z)
		{
			iLocal_71 = 0;
		}
		unk_0xF960832D272B97D4(vLocal_41, 0);
	}
	if (Global_3863)
	{
		if (((((iLocal_69 == 0 && iLocal_70 == 0) && iLocal_71 == 0) && iLocal_72 == 0) && iLocal_73 == 0) && iLocal_74 == 0)
		{
			if (func_82())
			{
			}
			else
			{
				vLocal_41 = { vLocal_43 };
				unk_0xF960832D272B97D4(vLocal_41, 0);
				vLocal_42 = { vLocal_44 };
				unk_0x3D7D94BDD4D22C14(vLocal_42);
			}
			if (iLocal_54 == 0)
			{
				Global_41C2 = 0;
				func_94(1, 1);
				iLocal_66 = 1;
				func_98(1);
				func_55();
				func_99();
				func_53(0);
				SYSTEM::SETTIMERA(0);
				iLocal_93 = 1;
				iLocal_94 = 1;
				func_110();
				func_132(iLocal_91, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(iLocal_95), -1082130432, -1082130432, -1082130432, -1082130432);
				if (!unk_0xFA30DFD0084E92FE(Global_411DCA, 2))
				{
					func_132(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_132(iLocal_91, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), -1082130432, -1082130432, -1082130432);
				func_134();
			}
		}
	}
	else if ((iLocal_69 == 0 && iLocal_70 == 0) && iLocal_71 == 0)
	{
		vLocal_41 = { vLocal_43 };
		unk_0xF960832D272B97D4(vLocal_41, 0);
		Global_41C2 = 0;
	}
}

void func_98(bool bParam0)//Position - 0xE7C0
{
	if (func_141())
	{
		if (bParam0)
		{
			if (!unk_0xF49118F64A2732AF())
			{
				unk_0x4BC9FE3DC57D1353(1);
				if (Global_4118CF > 0 && Global_4118CF < 99)
				{
					unk_0x7EA0257A0F40A320(sLocal_20[Global_4118CF], 0);
					unk_0x2273C07E7BC105FB(0.25f);
				}
			}
		}
		else if (unk_0xF49118F64A2732AF())
		{
			unk_0x4BC9FE3DC57D1353(0);
		}
	}
}

void func_99()//Position - 0xE81E
{
	if (Global_4118CE > 0 && Global_4118CE < 99)
	{
		if (Global_196038 == 0)
		{
			unk_0x92ED2B57F74A9650(sLocal_19[Global_4118CE]);
		}
	}
}

void func_100()//Position - 0xE84F
{
	if (Global_3863)
	{
		iLocal_76 = 0;
		func_55();
		func_91(1, 1);
		func_94(1, 1);
		iLocal_66 = 1;
		Global_41C5 = 1;
	}
}

void func_101()//Position - 0xE877
{
	if (Global_440000.f_22E8B == 1 && func_102(1))
	{
		return;
	}
	if (iLocal_78 == 0)
	{
		if (unk_0xFA30DFD0084E92FE(Global_93B, 28))
		{
			StringCopy(&cLocal_96, "CELL_296", 16);
			func_50();
		}
		else
		{
			StringCopy(&cLocal_96, "CELL_295", 16);
			func_27();
		}
		if (unk_0x3362CDE8460ED38B(&cLocal_96, "DUMMYCOMPARISON"))
		{
			fLocal_49 = fLocal_50;
			fLocal_47 = fLocal_48;
			fLocal_50 = fLocal_49;
			fLocal_48 = fLocal_47;
		}
		iLocal_51 = 1;
	}
}

int func_102(int iParam0)//Position - 0xE8E8
{
	if ((func_105() || func_104()) || (func_103() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_103()//Position - 0xE917
{
	return Global_255A46.f_10;
}

var func_104()//Position - 0xE925
{
	return Global_255A46.f_F;
}

var func_105()//Position - 0xE933
{
	return Global_255A46.f_E;
}

void func_106()//Position - 0xE941
{
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0xC4BA30B532FE260F(-1, "Menu_Back", &Global_3892, 1);
	}
}

void func_107()//Position - 0xE963
{
	unk_0x977063AC00E2E5B1(0, 0);
	iLocal_72 = 1;
	iLocal_73 = 1;
	iLocal_74 = 1;
	iLocal_75 = 0;
	iLocal_76 = 1;
}

void func_108()//Position - 0xE980
{
	func_109();
}

void func_109()//Position - 0xE98C
{
	if (iLocal_101)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_101 = 0;
		}
	}
	if (iLocal_101 == 0)
	{
	}
}

void func_110()//Position - 0xE9AB
{
	if (Global_389D.f_1 > 3)
	{
		if (!unk_0xE186ACC7BE9B244E())
		{
			unk_0x65E432C782E7E702(iLocal_91, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
		}
	}
}

void func_111()//Position - 0xE9DD
{
	if (func_57(14))
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
		Global_389D = func_11();
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

void func_112(int iParam0)//Position - 0xEA7F
{
	if (Global_3943)
	{
		func_91(0, 0);
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
	if (!func_113())
	{
		Global_389D.f_1 = 3;
	}
}

int func_113()//Position - 0xEAEF
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_114()//Position - 0xEB16
{
	unk_0xBBC4195AD74D153D(0, 0, 1);
	unk_0xBBC4195AD74D153D(0, 56, 1);
	if (iLocal_100 == 0)
	{
		unk_0xD55638CE45B2B948(0, Global_3882);
		unk_0xD55638CE45B2B948(0, Global_387F);
		unk_0xBBC4195AD74D153D(0, 278, 1);
		unk_0xBBC4195AD74D153D(0, 279, 1);
		unk_0xBBC4195AD74D153D(0, 280, 1);
		unk_0xBBC4195AD74D153D(0, 281, 1);
		unk_0xBBC4195AD74D153D(0, 282, 1);
		unk_0xBBC4195AD74D153D(0, 282, 1);
		unk_0xBBC4195AD74D153D(0, 284, 1);
		unk_0xBBC4195AD74D153D(0, 285, 1);
		unk_0xBBC4195AD74D153D(0, 69, 1);
		unk_0xBBC4195AD74D153D(0, 70, 1);
		unk_0xBBC4195AD74D153D(0, 114, 1);
		unk_0xBBC4195AD74D153D(0, 71, 1);
		unk_0xBBC4195AD74D153D(0, 72, 1);
		unk_0xBBC4195AD74D153D(0, 74, 1);
		unk_0xBBC4195AD74D153D(0, 75, 1);
		unk_0xBBC4195AD74D153D(0, 76, 1);
		unk_0xBBC4195AD74D153D(0, 73, 1);
		unk_0xBBC4195AD74D153D(0, 77, 1);
		unk_0xBBC4195AD74D153D(0, 78, 1);
		unk_0xBBC4195AD74D153D(0, 286, 1);
		unk_0xBBC4195AD74D153D(0, 287, 1);
		unk_0xBBC4195AD74D153D(0, 79, 1);
		unk_0xBBC4195AD74D153D(0, 80, 1);
		unk_0xBBC4195AD74D153D(0, 81, 1);
		unk_0xBBC4195AD74D153D(0, 82, 1);
		unk_0xBBC4195AD74D153D(0, 86, 1);
		unk_0xBBC4195AD74D153D(0, 59, 1);
		unk_0xBBC4195AD74D153D(0, 60, 1);
		unk_0xBBC4195AD74D153D(0, 61, 1);
		unk_0xBBC4195AD74D153D(0, 62, 1);
		unk_0xBBC4195AD74D153D(0, 63, 1);
		unk_0xBBC4195AD74D153D(0, 64, 1);
		unk_0xBBC4195AD74D153D(0, 87, 1);
		unk_0xBBC4195AD74D153D(0, 88, 1);
		unk_0xBBC4195AD74D153D(0, 89, 1);
		unk_0xBBC4195AD74D153D(0, 90, 1);
		unk_0xBBC4195AD74D153D(0, 107, 1);
		unk_0xBBC4195AD74D153D(0, 108, 1);
		unk_0xBBC4195AD74D153D(0, 109, 1);
		unk_0xBBC4195AD74D153D(0, 110, 1);
		unk_0xBBC4195AD74D153D(0, 111, 1);
		unk_0xBBC4195AD74D153D(0, 112, 1);
		unk_0xBBC4195AD74D153D(0, 113, 1);
		unk_0xBBC4195AD74D153D(0, 114, 1);
		unk_0xBBC4195AD74D153D(0, 91, 1);
		unk_0xBBC4195AD74D153D(0, 92, 1);
		unk_0xBBC4195AD74D153D(0, 68, 1);
		unk_0xBBC4195AD74D153D(0, 102, 1);
		unk_0xBBC4195AD74D153D(0, 136, 1);
		unk_0xBBC4195AD74D153D(0, 137, 1);
		unk_0xBBC4195AD74D153D(0, 138, 1);
		unk_0xBBC4195AD74D153D(0, 139, 1);
		unk_0xBBC4195AD74D153D(0, 102, 1);
	}
}

int func_115()//Position - 0xECF5
{
	int iVar0;
	
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			if (unk_0x1AAF0C23233C57AF(iVar0, -1, 0))
			{
				return 1;
			}
			else if (!unk_0x3187EF5798B5D209(iVar0, -1, 0) == unk_0xBC25C936A095B5BA())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_116()//Position - 0xED48
{
	var uVar0;
	
	func_123(&uVar0);
	if (Global_14083F == 0)
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			return 1;
		}
	}
	if (func_122())
	{
		return 1;
	}
	if (Global_25891C)
	{
		return 1;
	}
	if (func_121())
	{
		return 1;
	}
	if (func_120(157))
	{
		if (!func_119())
		{
			return 1;
		}
	}
	if (func_120(155))
	{
		return 1;
	}
	if (!unk_0x57D316754A262B34())
	{
		return 1;
	}
	if (func_117() != 0)
	{
		if (unk_0xB731B8C5BCE89836(func_117()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_117()//Position - 0xEDD2
{
	switch (func_118())
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

int func_118()//Position - 0xEE06
{
	return Global_62BD;
}

bool func_119()//Position - 0xEE11
{
	return Global_255A46.f_24A;
}

int func_120(int iParam0)//Position - 0xEE20
{
	if (unk_0xA1AC399BCBEE5B2D(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_121()//Position - 0xEE37
{
	return Global_258063;
}

bool func_122()//Position - 0xEE43
{
	return Global_255A46.f_245;
}

void func_123(var uParam0)//Position - 0xEE52
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
					func_124(iVar0);
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

void func_124(int iParam0)//Position - 0xEEC5
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x414AA1932D1C88E2(1, iParam0, &vVar0, 3))
	{
		if (func_126(vVar0.y, 1, 1))
		{
			iVar1 = unk_0xA95CF30C72EB526E(vVar0.y);
			if (unk_0x724D816EA203A79E(iVar1))
			{
				if (unk_0x5237AF95232D78C5(iVar1, 0))
				{
					iVar2 = unk_0x9FE9D386222EEE47(iVar1, 0);
					if (unk_0x403C891106DCABAF(iVar2, vVar0.z) && unk_0x32405B7614E36453())
					{
						if (func_125(iVar2, &bVar3))
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

int func_125(int iParam0, var uParam1)//Position - 0xEF46
{
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (!unk_0x5CAE759AE8219D20(iParam0))
		{
			if (unk_0x63B5FF8D34CBC98E(iParam0))
			{
				if (!unk_0xFF2234981505F7F4(unk_0x6F79ECA8C83E4357(iParam0)))
				{
					unk_0x77815D3407C6700D(iParam0, false, 1);
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

int func_126(int iParam0, bool bParam1, bool bParam2)//Position - 0xEFA5
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

void func_127()//Position - 0xEFEF
{
	if (iLocal_106 == 1)
	{
		unk_0x4E0EC60D119222B1(7);
		unk_0x4E0EC60D119222B1(1);
		unk_0x4E0EC60D119222B1(3);
		unk_0x4E0EC60D119222B1(4);
		unk_0x4E0EC60D119222B1(6);
		unk_0x4E0EC60D119222B1(8);
		unk_0x4E0EC60D119222B1(9);
		unk_0x4E0EC60D119222B1(2);
	}
	else
	{
		unk_0xDE7B9CB38D019BF0();
	}
}

void func_128(char* sParam0, int iParam1)//Position - 0xF02E
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, true, iParam1);
}

void func_129()//Position - 0xF045
{
	if (func_130())
	{
		unk_0xBD782151B2FC70FA();
		if (unk_0x77CC320936B2D99A(0))
		{
			iLocal_54 = 1;
			iLocal_62 = 0;
		}
		else
		{
			Global_41C5 = 1;
			Global_389D.f_1 = 3;
			unk_0x21B00B24BEAA7264();
		}
	}
	else
	{
		iLocal_60 = 0;
		iLocal_61 = 0;
		if (iLocal_55 == 1)
		{
			if (iLocal_78 == 0)
			{
				if (unk_0xA7F138B5B1AB2CF6(iLocal_91))
				{
					if (func_141())
					{
						if (Global_4118CF == 0)
						{
							if (!unk_0xFA30DFD0084E92FE(Global_411DCA, 2))
							{
								func_132(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
						}
						func_132(iLocal_91, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), -1082130432, -1082130432, -1082130432);
					}
					else
					{
						if (!unk_0xFA30DFD0084E92FE(Global_411DCA, 2))
						{
							func_132(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
						func_132(iLocal_91, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), -1082130432, -1082130432, -1082130432);
					}
				}
			}
			else if (unk_0xA7F138B5B1AB2CF6(iLocal_91))
			{
				func_132(iLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_132(iLocal_91, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), -1082130432, -1082130432, -1082130432);
			}
			iLocal_55 = 0;
		}
		iLocal_62 = 0;
		unk_0x21B00B24BEAA7264();
	}
}

int func_130()//Position - 0xF1A3
{
	if (Global_440000.f_22E8B == 1)
	{
		if (Global_11542)
		{
			return 0;
		}
	}
	if (Global_440000.f_22E8C == 1)
	{
		if (Global_11542)
		{
			return 0;
		}
	}
	if (unk_0xA76D65C63ED50F67() || unk_0x3E9993F328985CCB())
	{
		if (unk_0xFA30DFD0084E92FE(Global_93C, 28))
		{
			return 0;
		}
	}
	return 1;
}

void func_131(int iParam0, char* sParam1)//Position - 0xF1FF
{
	unk_0x29CD142125FE177B(iParam0, sParam1);
	unk_0xF9FBC2F3F73D94C9();
}

void func_132(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0xF214
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

int func_133()//Position - 0xF277
{
	if (Global_11542)
	{
		Global_389D = 3;
	}
	else
	{
		Global_389D = func_11();
	}
	if (Global_389D > 3)
	{
		Global_389D = 3;
	}
	return Global_19B04.f_36C6[Global_389D /*20*/].f_7;
}

void func_134()//Position - 0xF2AD
{
	if (Global_389D.f_1 > 3)
	{
		Global_389D.f_1 = 8;
	}
	Global_41C4 = 0;
	iLocal_78 = 0;
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		vLocal_34 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
	}
	if (Global_3863)
	{
		while (SYSTEM::TIMERA() < iLocal_88)
		{
			SYSTEM::WAIT(0);
			func_110();
			func_78();
			unk_0x2423B13D9CFAD1DD();
		}
		func_131(iLocal_91, "OPEN_SHUTTER");
		func_127();
		func_101();
		iLocal_80 = 1;
		SYSTEM::SETTIMERB(0);
	}
	else
	{
		func_94(1, 1);
		func_98(1);
		func_55();
		func_99();
		func_53(0);
		iLocal_66 = 1;
	}
}

void func_135(int iParam0)//Position - 0xF341
{
	if (iParam0 == 1)
	{
		unk_0xF0059F27F7BB6680(&Global_93B, 15);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&Global_93B, 15);
	}
}

bool func_136()//Position - 0xF364
{
	return Global_14083F;
}

int func_137(int iParam0, int iParam1)//Position - 0xF370
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

void func_138()//Position - 0xF3F5
{
}

int func_139(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0xF3FD
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x8ACB0C3FACC09467())
	{
		if (unk_0xB34A6828EBD4A1D8() != iParam0 && bParam2)
		{
			unk_0x22506029183A78EC(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_140()//Position - 0xF430
{
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		if (unk_0xB3B744D2D9D757D1(unk_0xBC25C936A095B5BA()))
		{
			unk_0x4060A19D5551068A(unk_0xBC25C936A095B5BA(), 0, 0);
			unk_0x91EC6AEB1932A6B8(fLocal_107);
			unk_0x569ABE7ED59B6777(fLocal_108);
			unk_0xA0A915A248C4216D(fLocal_109);
		}
		else
		{
			unk_0x91EC6AEB1932A6B8(fLocal_107);
			unk_0x569ABE7ED59B6777(fLocal_108);
			unk_0xA0A915A248C4216D(fLocal_109);
		}
	}
	unk_0x9BD568826C3C2591(fLocal_110);
	unk_0xE192619A62EDCCE6(fLocal_111);
	unk_0xF3EF9340AD350737(fLocal_112);
	unk_0x4AF1A2347337312B(fLocal_113);
	func_52();
}

int func_141()//Position - 0xF49D
{
	if (iLocal_23 == 0)
	{
		iLocal_23 = 1;
	}
	return 1;
}

