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
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	bool bLocal_38 = 0;
	float fLocal_39 = 0f;
	float fLocal_40 = 0f;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43[4] = { 0, 0, 0, 0 };
	int iLocal_44[4] = { 0, 0, 0, 0 };
	int iLocal_45[4] = { 0, 0, 0, 0 };
	int iLocal_46[4] = { 0, 0, 0, 0 };
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
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
	int iLocal_65 = 0;
	bool bLocal_66 = 0;
	float fLocal_67 = 0f;
	float fLocal_68 = 0f;
	float fLocal_69 = 0f;
	float fLocal_70 = 0f;
	float fLocal_71 = 0f;
	float fLocal_72 = 0f;
	float fLocal_73 = 0f;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	struct<57> Var0;
	int iVar1;
	
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
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_36 = 3;
	fLocal_39 = 0f;
	fLocal_40 = 0f;
	fLocal_70 = 0.95f;
	fLocal_71 = 0.07f;
	fLocal_72 = 0.755f;
	iLocal_81 = 9999;
	unk_0xC1A27D367CCA8C15();
	Global_19ACA = unk_0x105601648511CC64();
	func_115();
	func_114();
	func_112();
	Global_389D.f_1 = 3;
	Global_3891 = 0;
	Global_3945 = 0;
	Global_41C3 = 0;
	Var0.f_17 = 2;
	Var0.f_38 = 16;
	while (true)
	{
		SYSTEM::WAIT(0);
		if (Global_389D.f_1 > 3)
		{
			unk_0xBBC4195AD74D153D(0, 337, 1);
			unk_0xBBC4195AD74D153D(0, 353, 1);
			unk_0xBBC4195AD74D153D(0, 354, 1);
			unk_0xBBC4195AD74D153D(0, 357, 1);
			unk_0xBBC4195AD74D153D(0, 353, 1);
		}
		if (iLocal_79 == 0)
		{
			if (unk_0x7AF0088ABFA713B6())
			{
				iLocal_79 = 1;
				iLocal_81 = func_109(7782, -1, 0);
			}
		}
		else if (unk_0x7AF0088ABFA713B6())
		{
			if (iLocal_79 == 1)
			{
				switch (unk_0x83D607D7994DEF3A())
				{
					case -1:
						unk_0x2322A0E1DC14C810("gta5mkt_en");
						break;
					
					case 0:
						unk_0x2322A0E1DC14C810("gta5mkt_en");
						break;
					
					case 1:
						unk_0x2322A0E1DC14C810("gta5mkt_fr");
						break;
					
					case 2:
						unk_0x2322A0E1DC14C810("gta5mkt_ge");
						break;
					
					case 3:
						unk_0x2322A0E1DC14C810("gta5mkt_it");
						break;
					
					case 4:
						unk_0x2322A0E1DC14C810("gta5mkt_sp");
						break;
					
					case 5:
						unk_0x2322A0E1DC14C810("gta5mkt_pt");
						break;
					
					case 6:
						unk_0x2322A0E1DC14C810("gta5mkt_pl");
						break;
					
					case 7:
						unk_0x2322A0E1DC14C810("gta5mkt_ru");
						break;
					
					case 8:
						unk_0x2322A0E1DC14C810("gta5mkt_ko");
						break;
					
					case 9:
						unk_0x2322A0E1DC14C810("gta5mkt_ch");
						break;
					
					case 10:
						unk_0x2322A0E1DC14C810("gta5mkt_ja");
						break;
					
					case 11:
						unk_0x2322A0E1DC14C810("gta5mkt_me");
						break;
					
					case 12:
						unk_0x2322A0E1DC14C810("gta5mkt_cn");
						break;
				}
				unk_0x9BDB77F1D472297C(0, 1);
				iLocal_79 = 2;
			}
			if (iLocal_79 == 2)
			{
				iLocal_80 = unk_0x08BD8A79E1629DD6();
				switch (iLocal_80)
				{
					case 3:
						break;
					
					case 0:
						if (unk_0x3B7BC5BC304ADDD9() > 0)
						{
							unk_0x93C7A83E89FF8446(0, &Var0);
							if (Var0.f_1 != iLocal_81)
							{
								Global_4118D8 = 1;
							}
							else
							{
								Global_4118D8 = 0;
							}
						}
						iLocal_79 = 3;
						break;
					
					case 1:
						break;
					
					case 4:
						Global_4118D8 = 0;
						iLocal_79 = 3;
						break;
					}
			}
		}
		else
		{
			Global_4118D8 = 0;
			iLocal_79 = 0;
		}
		if (unk_0x8ACB0C3FACC09467())
		{
			if (unk_0x87DD8C3CB85096D5())
			{
				if (Global_389D.f_1 == 6)
				{
					Global_389D.f_1 = 3;
				}
			}
		}
		if (func_108(146))
		{
			if (Global_11542 == 0)
			{
				iVar1 = func_76(0, 0, 119);
				if (iVar1 != 0)
				{
					func_74(iVar1);
				}
				else
				{
					func_73();
				}
				func_71(0);
			}
		}
		if (Global_267214.f_11B1 == 1)
		{
			if (Global_389D.f_1 > 3)
			{
				Global_389D.f_1 = 3;
			}
		}
		if (Global_11542 == 1)
		{
			if (Global_389D.f_1 == 3)
			{
				if (unk_0xFA30DFD0084E92FE(Global_411DCA, 15))
				{
					unk_0xF0059F27F7BB6680(&Global_411DCA, 14);
					SYSTEM::WAIT(0);
					while (!func_69(3, 0, 1, 0))
					{
						SYSTEM::WAIT(0);
					}
					unk_0x7CB6FD92BE491AD9(&Global_411DCA, 14);
					unk_0x7CB6FD92BE491AD9(&Global_411DCA, 15);
				}
				if (unk_0xFA30DFD0084E92FE(Global_411DCA, 16))
				{
					unk_0xF0059F27F7BB6680(&Global_411DCA, 14);
					SYSTEM::WAIT(0);
					while (!func_69(17, 0, 1, 0))
					{
						SYSTEM::WAIT(0);
					}
					unk_0x7CB6FD92BE491AD9(&Global_411DCA, 14);
					unk_0x7CB6FD92BE491AD9(&Global_411DCA, 16);
					unk_0x7CB6FD92BE491AD9(&Global_411DCA, 27);
				}
				if (unk_0xFA30DFD0084E92FE(Global_411DCA, 27))
				{
					unk_0xF0059F27F7BB6680(&Global_411DCA, 14);
					SYSTEM::WAIT(0);
					while (!func_69(23, 0, 1, 0))
					{
						SYSTEM::WAIT(0);
					}
					unk_0x7CB6FD92BE491AD9(&Global_411DCA, 14);
					unk_0x7CB6FD92BE491AD9(&Global_411DCA, 16);
					unk_0x7CB6FD92BE491AD9(&Global_411DCA, 27);
				}
			}
		}
		if (Global_11542 == 0)
		{
			if (unk_0xFA30DFD0084E92FE(Global_411DCA, 11))
			{
				if ((Global_389D.f_1 != 10 && Global_389D.f_1 != 9) || func_68() == 0)
				{
					unk_0x7CB6FD92BE491AD9(&Global_411DCA, 11);
					unk_0xF0059F27F7BB6680(&Global_93C, 11);
				}
			}
			else if (Global_389D.f_1 == 10 || Global_389D.f_1 == 9)
			{
				if (func_68())
				{
					unk_0xF0059F27F7BB6680(&Global_411DCA, 11);
					unk_0xF0059F27F7BB6680(&Global_93C, 11);
				}
			}
			if (unk_0xFA30DFD0084E92FE(Global_411DCA, 12))
			{
				unk_0x7CB6FD92BE491AD9(&Global_411DCA, 12);
				unk_0xF0059F27F7BB6680(&Global_93C, 11);
			}
		}
		else if (unk_0xFA30DFD0084E92FE(Global_411DCA, 12))
		{
			if ((Global_41DF == 0 || Global_41E0 == 0) && !Global_41E1)
			{
				unk_0x7CB6FD92BE491AD9(&Global_411DCA, 12);
				unk_0xF0059F27F7BB6680(&Global_93C, 11);
			}
		}
		else if (Global_41E1 || (Global_41DF > 0 && Global_41E0 == 1))
		{
			unk_0xF0059F27F7BB6680(&Global_411DCA, 12);
			unk_0xF0059F27F7BB6680(&Global_93C, 11);
		}
		if (unk_0x8ACB0C3FACC09467())
		{
			if (unk_0x534F909B40F9E5CB())
			{
				if (!unk_0xFA30DFD0084E92FE(Global_411DCA, 19))
				{
					unk_0xF0059F27F7BB6680(&Global_411DCA, 19);
					unk_0xF0059F27F7BB6680(&Global_93C, 11);
				}
			}
			else if (unk_0xFA30DFD0084E92FE(Global_411DCA, 19))
			{
				unk_0x7CB6FD92BE491AD9(&Global_411DCA, 19);
				unk_0xF0059F27F7BB6680(&Global_93C, 11);
			}
		}
		if (iLocal_77 == 0)
		{
			if (unk_0xFA30DFD0084E92FE(Global_93B, 25))
			{
				unk_0x6CB99B97664C3727(joaat("sp_cellphone_sleep_time"), &iLocal_76, -1);
				iLocal_74 = unk_0x105601648511CC64();
				iLocal_77 = 1;
			}
		}
		else if (!unk_0xFA30DFD0084E92FE(Global_93B, 25))
		{
			unk_0x6CB99B97664C3727(joaat("sp_cellphone_sleep_time"), &iLocal_76, -1);
			iLocal_75 = unk_0x105601648511CC64();
			iLocal_77 = 0;
			unk_0x3A57956BCE003880(joaat("sp_cellphone_sleep_time"), (iLocal_76 + (iLocal_75 - iLocal_74)), 1);
		}
		func_67();
		func_66();
		func_65();
		func_63();
		func_52();
		func_51();
		func_50();
		if (unk_0xFA30DFD0084E92FE(Global_93C, 21))
		{
			if (!unk_0x6759A85377261E49())
			{
				unk_0x7CB6FD92BE491AD9(&Global_93C, 21);
			}
		}
		if (unk_0xFA30DFD0084E92FE(Global_93B, 7))
		{
			func_46();
			unk_0x7CB6FD92BE491AD9(&Global_93B, 7);
		}
		if (unk_0xFA30DFD0084E92FE(Global_93B, 0))
		{
			func_45();
		}
		if (unk_0xFA30DFD0084E92FE(Global_411DCA, 0))
		{
			func_44();
		}
		if (unk_0xFA30DFD0084E92FE(Global_93C, 11))
		{
			Global_BFB = 0;
			if (unk_0xFA30DFD0084E92FE(Global_93B, 25))
			{
				Global_BFB++;
			}
			if (unk_0xFA30DFD0084E92FE(Global_411DCA, 11))
			{
				if (Global_11542 == 0)
				{
					Global_BFB++;
				}
			}
			if (unk_0xFA30DFD0084E92FE(Global_411DCA, 28))
			{
				if (Global_11542 == 1)
				{
					Global_BFB++;
				}
			}
			if (unk_0xFA30DFD0084E92FE(Global_411DCA, 12))
			{
				if (Global_11542 && (Global_41E0 || Global_41E1))
				{
					Global_BFB++;
				}
			}
			if (unk_0xFA30DFD0084E92FE(Global_411DCA, 19))
			{
				Global_BFB++;
			}
			if (Global_BFB == 0)
			{
				unk_0x7CB6FD92BE491AD9(&Global_93C, 11);
				iLocal_41 = 0;
			}
			else
			{
				iLocal_41 = 1;
			}
		}
		if (!func_43())
		{
			if (!unk_0x18158A50125911B6())
			{
				if (Global_389D.f_1 == 3)
				{
					if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
					{
						if (unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()) || unk_0xAD9C95C266744D8B())
						{
							if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
							{
								if (Global_11542)
								{
									func_31();
								}
								else
								{
									func_31();
								}
							}
						}
					}
				}
			}
			if (Global_389D.f_1 == 4)
			{
				if (unk_0xFA30DFD0084E92FE(Global_93C, 21))
				{
					func_31();
				}
			}
			func_21();
		}
		else if (func_14())
		{
		}
		switch (Global_41C3)
		{
			case 0:
				func_13();
				if (Global_41C5 == 1)
				{
					func_12();
				}
				break;
			
			case 1:
				func_11();
				break;
			
			case 2:
				func_10();
				break;
			
			case 3:
				func_9();
				break;
			
			case 4:
				func_8();
				break;
			
			case 5:
				func_7();
				break;
			
			case 14:
				func_12();
				break;
			
			case 6:
				if (Global_41C5 == 1)
				{
					func_12();
				}
				if (Global_41C6 == 1)
				{
					Global_41C3 = 9;
					Global_41C6 = 0;
				}
				break;
			
			case 8:
				func_6();
				break;
			
			case 9:
				func_5();
				break;
			
			case 10:
				func_4();
				break;
			
			case 11:
				func_3();
				break;
			
			case 12:
				func_2();
				break;
			
			case 13:
				func_1();
				break;
		}
	}
}

void func_1()//Position - 0x845
{
	iLocal_54 = unk_0x6C3958073E5F5810(Global_41C7);
	switch (iLocal_54)
	{
		case 0:
			Global_41C3 = 4;
			break;
		
		case 1:
			break;
		
		case 2:
			unk_0xF0059F27F7BB6680(&Global_93C, 15);
			func_12();
			break;
	}
}

void func_2()//Position - 0x889
{
	if (unk_0xC66D474EB8151201(Global_41C7))
	{
		Global_41C3 = 13;
	}
	else
	{
		func_12();
	}
}

void func_3()//Position - 0x8A7
{
	if (unk_0x7AF0088ABFA713B6())
	{
		iLocal_52 = unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), iLocal_50);
	}
	else
	{
		iLocal_51 = unk_0x105601648511CC64();
		iLocal_52 = (iLocal_51 - iLocal_49);
	}
	if (iLocal_52 > 3000)
	{
		unk_0x21B00B24BEAA7264();
	}
	if (iLocal_52 > 3200)
	{
		Global_41C3 = 6;
	}
}

void func_4()//Position - 0x8EA
{
	iLocal_54 = unk_0x81A92CCCBEDFE02D();
	switch (iLocal_54)
	{
		case 0:
			if (unk_0x7AF0088ABFA713B6())
			{
				iLocal_50 = unk_0xED678C85A82F0AB9();
			}
			else
			{
				iLocal_49 = unk_0x105601648511CC64();
			}
			Global_41C3 = 11;
			SYSTEM::SETTIMERB(0);
			break;
		
		case 1:
			break;
		
		case 2:
			func_12();
			break;
	}
}

void func_5()//Position - 0x93E
{
	Global_41C8 = -1;
	if (unk_0xFCF55AAA1D55B2A3(Global_41C8))
	{
		Global_41C3 = 10;
		unk_0xECBC4A7C88FEF9C3("CELL_278");
		unk_0x465F4F702894A06C(1);
	}
	else
	{
		func_12();
	}
}

void func_6()//Position - 0x96C
{
	iLocal_54 = unk_0xF3D63CE90CC538E5(1);
	switch (iLocal_54)
	{
		case 0:
			Global_41C3 = 9;
			break;
		
		case 1:
			break;
		
		case 2:
			func_12();
			break;
	}
}

void func_7()//Position - 0x9A6
{
	iLocal_54 = unk_0x0EDEB6C8AF1C8B10(iLocal_55);
	switch (iLocal_54)
	{
		case 0:
			unk_0x977063AC00E2E5B1(1, 1);
			Global_41C3 = 6;
			break;
		
		case 1:
			break;
		
		case 2:
			if (iLocal_55 == 3)
			{
				unk_0xF0059F27F7BB6680(&Global_93C, 14);
				unk_0x977063AC00E2E5B1(0, 0);
				unk_0x87A26CF52879CC06();
				unk_0x517D352C6F5FA2BC();
				Global_41C3 = 6;
			}
			if (Global_41C3 == 5)
			{
				if (iLocal_55 == 0)
				{
					Global_41C3 = 4;
					iLocal_55 = 1;
					unk_0x517D352C6F5FA2BC();
					SYSTEM::WAIT(0);
				}
			}
			if (Global_41C3 == 5)
			{
				if (iLocal_55 == 1)
				{
					Global_41C3 = 4;
					iLocal_55 = 2;
					unk_0x517D352C6F5FA2BC();
					SYSTEM::WAIT(0);
				}
			}
			if (Global_41C3 == 5)
			{
				if (iLocal_55 == 2)
				{
					Global_41C3 = 4;
					iLocal_55 = 3;
					unk_0x517D352C6F5FA2BC();
					SYSTEM::WAIT(0);
				}
			}
			break;
	}
}

void func_8()//Position - 0xA5A
{
	if (unk_0x551031479FF98E66(iLocal_55))
	{
		Global_41C3 = 5;
	}
	else
	{
		unk_0xF0059F27F7BB6680(&Global_93C, 15);
		func_12();
	}
}

void func_9()//Position - 0xA7F
{
	iLocal_54 = unk_0x8D7A94F71412DDA6();
	switch (iLocal_54)
	{
		case 0:
			Global_41C3 = 4;
			iLocal_55 = 2;
			break;
		
		case 1:
			break;
		
		case 2:
			Global_389D.f_1 = 3;
			func_12();
			break;
	}
}

void func_10()//Position - 0xAC0
{
	if (unk_0x7EEB89E4243982C4())
	{
		Global_41C3 = 3;
	}
}

void func_11()//Position - 0xAD3
{
	if (SYSTEM::TIMERB() > 0)
	{
		Global_41C3 = 2;
	}
}

void func_12()//Position - 0xAE7
{
	unk_0x977063AC00E2E5B1(0, 0);
	unk_0x87A26CF52879CC06();
	unk_0x517D352C6F5FA2BC();
	unk_0x21B00B24BEAA7264();
	Global_41C4 = 0;
	Global_41C5 = 0;
	Global_41C6 = 0;
	Global_41C3 = 0;
}

void func_13()//Position - 0xB11
{
	if (Global_41C4)
	{
		Global_41C3 = 1;
		unk_0x7CB6FD92BE491AD9(&Global_93C, 14);
		SYSTEM::SETTIMERB(0);
	}
}

int func_14()//Position - 0xB31
{
	char* sVar0;
	
	if ((func_20(2, Global_387C, 0) && !unk_0xB6AACEDA0127F076(19)) && !unk_0x87DD8C3CB85096D5())
	{
		if (unk_0x8ACB0C3FACC09467())
		{
			if (unk_0x3C03CFD5DD1E2D97(unk_0xBC25C936A095B5BA(), "Synched"))
			{
				sVar0 = unk_0xFCB4C1AC11347344("CELL_ANTIH_A");
				unk_0x2E94302CFF011F2E("CELL_ANTIH");
				unk_0x7BB0762D8C75A3C7("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, sVar0, 0);
			}
		}
		if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			if (func_19(unk_0xBC25C936A095B5BA()) || unk_0x996A13F6A9D7C402(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x8FCEEB789599BD9B(0, 25) || unk_0x8FCEEB789599BD9B(0, 68))
				{
					return 0;
				}
			}
		}
		Global_41DB = 0;
		Global_41DC = 0;
		if (unk_0x7BF55DDED116D99E() == Global_41D9 && unk_0x7BF55DDED116D99E() != -1)
		{
			Global_41DB = Global_41DA;
			iLocal_58 = unk_0x105601648511CC64();
			iLocal_60 = 0;
			iLocal_61 = 0;
			while (((func_18(2, Global_387C) && iLocal_60 < 250) && Global_394B == 0) && !unk_0xB6AACEDA0127F076(19))
			{
				if (Global_BFB > 0)
				{
					func_15();
				}
				SYSTEM::WAIT(0);
				iLocal_59 = unk_0x105601648511CC64();
				iLocal_60 = (iLocal_59 - iLocal_58);
				if (Global_BFB > 0)
				{
					func_15();
				}
			}
			if ((func_18(2, Global_387C) && Global_394B == 0) && !unk_0xB6AACEDA0127F076(19))
			{
				iLocal_61 = 1;
			}
			if (Global_394B == 0)
			{
				if (iLocal_61 == 1)
				{
					Global_41DC = 1;
					Global_41DB = Global_41DA;
					if (Global_41DB == 1)
					{
					}
					if (Global_41DB == 2)
					{
					}
					if (Global_41DB == 3)
					{
					}
					if (Global_41DB == 0)
					{
					}
					if (Global_41DB == 4)
					{
					}
				}
				else
				{
					Global_41DB = 0;
				}
			}
			else
			{
				Global_41DB = 0;
			}
		}
		else
		{
			Global_41DB = 0;
		}
		if (!unk_0xB6AACEDA0127F076(19))
		{
			return 1;
		}
		else
		{
			Global_41DB = 0;
			Global_41DC = 0;
			return 0;
		}
	}
	return 0;
}

void func_15()//Position - 0xCEA
{
	int iVar0;
	
	iVar0 = 255;
	if (Global_41E1)
	{
		fLocal_71 = -0.055f;
		fLocal_72 = 0.745f;
		fLocal_67 = unk_0xFAD6B644971DD747();
		fLocal_73 = ((100f * fLocal_70) - (100f * fLocal_67));
		fLocal_68 = (fLocal_71 + (fLocal_73 * 0.005f));
		fLocal_69 = (fLocal_72 - (fLocal_73 * 0.005f));
		if (!func_17())
		{
			unk_0x6AEB48E3B648804A(1);
			unk_0x996AC9A66B2A5A3F(7);
			if (unk_0x8ACB0C3FACC09467())
			{
				unk_0xC5EFBDB7C6C0C6E0();
			}
			unk_0x65E432C782E7E702(iLocal_37, fLocal_68, fLocal_69, 0.27f, 0.45f, 255, 255, 255, iVar0, 0);
			unk_0x6AEB48E3B648804A(0);
			unk_0x996AC9A66B2A5A3F(4);
		}
	}
	else
	{
		if (unk_0x8ACB0C3FACC09467())
		{
			if (Global_24DCC0.f_5CD)
			{
				bLocal_38 = false;
			}
			else if (unk_0xFA30DFD0084E92FE(Global_93B, 13))
			{
				if (unk_0xFA30DFD0084E92FE(Global_411DCA, 19))
				{
					bLocal_38 = false;
				}
				else
				{
					bLocal_38 = true;
				}
			}
			else
			{
				bLocal_38 = false;
			}
		}
		else if (Global_24DCC0.f_5CD || unk_0xFA30DFD0084E92FE(Global_93B, 13))
		{
			bLocal_38 = true;
		}
		else
		{
			bLocal_38 = false;
		}
		if (func_43())
		{
			bLocal_38 = true;
		}
		if (unk_0xFA30DFD0084E92FE(Global_411DCA, 28))
		{
			iVar0 = 125;
			if (bLocal_38 == 1)
			{
				bLocal_38 = false;
			}
		}
		if (unk_0x8056602005161037())
		{
			if (!unk_0x7382A6B79BD5F585())
			{
				if (!bLocal_38)
				{
					if (!func_16())
					{
						if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
						{
							if (!unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1))
							{
								unk_0x996AC9A66B2A5A3F(4);
								if (unk_0x8ACB0C3FACC09467() && Global_24DCC0.f_5CD)
								{
									fLocal_71 = 0.165f;
									fLocal_72 = 0.755f;
								}
								else
								{
									fLocal_71 = 0.07f;
									fLocal_72 = 0.755f;
								}
								fLocal_67 = unk_0xFAD6B644971DD747();
								fLocal_73 = ((100f * fLocal_70) - (100f * fLocal_67));
								fLocal_68 = (fLocal_71 + (fLocal_73 * 0.005f));
								fLocal_69 = (fLocal_72 - (fLocal_73 * 0.005f));
								if (!func_17())
								{
									if (unk_0x8ACB0C3FACC09467())
									{
										unk_0xC5EFBDB7C6C0C6E0();
									}
									if (Global_24DCC0.f_5CD)
									{
										fLocal_39 = 0.09f;
										fLocal_40 = -0.25f;
										if (unk_0x8ACB0C3FACC09467())
										{
											if (unk_0xFA30DFD0084E92FE(Global_411DCA, 28))
											{
											}
											else
											{
												unk_0x65E432C782E7E702(iLocal_37, fLocal_68, fLocal_69, 0.27f, 0.45f, 255, 255, 255, iVar0, 0);
											}
										}
										else
										{
											unk_0x65E432C782E7E702(iLocal_37, (fLocal_68 + fLocal_39), (fLocal_69 + fLocal_40), 0.27f, 0.45f, 255, 255, 255, iVar0, 0);
										}
									}
									else
									{
										unk_0x65E432C782E7E702(iLocal_37, fLocal_68, fLocal_69, 0.27f, 0.45f, 255, 255, 255, iVar0, 0);
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

int func_16()//Position - 0xF48
{
	if (unk_0xB731B8C5BCE89836(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_17()//Position - 0xF65
{
	if (unk_0xFA30DFD0084E92FE(Global_93D, 3))
	{
		return 1;
	}
	return 0;
}

int func_18(int iParam0, int iParam1)//Position - 0xF80
{
	if (unk_0x8FCEEB789599BD9B(iParam0, iParam1))
	{
		if (unk_0x8ACB0C3FACC09467())
		{
			if (unk_0x0F8865E539C1FCE8() == 0)
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

int func_19(int iParam0)//Position - 0xFC6
{
	int iVar0;
	
	if (unk_0xADF4D6B0407B3CC1())
	{
		if (!unk_0x36CEFBE9B745A58D(iParam0))
		{
			unk_0x9CDD10270A1ACF6F(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == 177293209)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_20(int iParam0, int iParam1, int iParam2)//Position - 0x1023
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

void func_21()//Position - 0x1095
{
	switch (Global_389D.f_1)
	{
		case 4:
			if (unk_0xFA30DFD0084E92FE(Global_93C, 21))
			{
			}
			else
			{
				if (unk_0x3C406FC829C1E14A(Global_389A))
				{
				}
				else
				{
					if (!unk_0x3C406FC829C1E14A(Global_389A))
					{
						if (unk_0xB731B8C5BCE89836(joaat("cellphone_flashhand")) == 0)
						{
							unk_0x63831D2D5110C305("cellphone_flashhand");
							while (!unk_0xACE95AD318CE412B("cellphone_flashhand"))
							{
								SYSTEM::WAIT(0);
								if (Global_BFB > 0)
								{
									func_15();
								}
							}
							if (unk_0xB731B8C5BCE89836(joaat("cellphone_flashhand")) == 0)
							{
								Global_389A = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", 1424);
							}
							unk_0x91DEC7187FA01089("cellphone_flashhand");
						}
					}
					func_30(0);
				}
				if (Global_3DC2 || Global_3DC3)
				{
					if (!unk_0x3C406FC829C1E14A(Global_389A))
					{
						if (unk_0xB731B8C5BCE89836(joaat("cellphone_flashhand")) == 0)
						{
							unk_0x63831D2D5110C305("cellphone_flashhand");
							while (!unk_0xACE95AD318CE412B("cellphone_flashhand"))
							{
								SYSTEM::WAIT(0);
								if (Global_BFB > 0)
								{
									func_15();
								}
							}
							if (unk_0xB731B8C5BCE89836(joaat("cellphone_flashhand")) == 0)
							{
								Global_389A = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", 1424);
							}
							unk_0x91DEC7187FA01089("cellphone_flashhand");
						}
					}
					while (!unk_0xA7F138B5B1AB2CF6(Global_388A) && Global_388C == 0)
					{
						SYSTEM::WAIT(0);
						if (Global_BFB > 0)
						{
							func_15();
						}
					}
					if (Global_388C == 0)
					{
						Global_389D.f_1 = 9;
						func_22();
					}
				}
				else
				{
					bLocal_66 = false;
					if (Global_11542 && (Global_41DE || Global_18C323.f_5))
					{
						bLocal_66 = true;
					}
					if (((Global_19B04.f_36C6[Global_389D /*20*/].f_12 == 1 || Global_19B04.f_36C6[Global_389D /*20*/].f_11 == 1) || bLocal_66 == 1) || Global_41DB != 0)
					{
						while (!unk_0xA7F138B5B1AB2CF6(Global_388A) && Global_388C == 0)
						{
							SYSTEM::WAIT(0);
							if (Global_BFB > 0)
							{
								func_15();
							}
						}
						if (Global_388C == 0)
						{
							if (Global_389D.f_1 > 3)
							{
								Global_389D.f_1 = 6;
								if (Global_41DB == 0)
								{
									if (bLocal_66)
									{
									}
									else if (Global_11542 == 0)
									{
										if (Global_19B04.f_36C6[Global_389D /*20*/].f_11 == 1)
										{
											func_69(1, 0, 1, 0);
										}
									}
								}
								else
								{
									if (Global_41DB == 3)
									{
									}
									if (Global_41DB == 1)
									{
									}
									if (Global_41DB == 2)
									{
									}
									if (Global_41DB == 4)
									{
									}
								}
							}
						}
					}
					else
					{
						while (!unk_0xA7F138B5B1AB2CF6(Global_388A) && Global_388C == 0)
						{
							SYSTEM::WAIT(0);
							if (Global_BFB > 0)
							{
								func_15();
							}
						}
						if (Global_388C == 0)
						{
							if (Global_389D.f_1 > 3)
							{
								if (Global_3DC2 || Global_3DC3)
								{
									Global_389D.f_1 = 9;
								}
								else
								{
									Global_389D.f_1 = 6;
								}
							}
						}
					}
				}
			}
			break;
	}
}

void func_22()//Position - 0x1321
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
			func_29(Global_388A, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_27(Global_B98);
			if (Global_B98 == 1)
			{
				func_29(Global_388A, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_38A1), -1082130432, -1082130432, -1082130432);
				Global_3889 = Global_38A1;
			}
			else
			{
				func_29(Global_388A, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_38A2), -1082130432, -1082130432, -1082130432);
				Global_3889 = Global_38A2;
			}
			if (Global_3891)
			{
				func_26(Global_388A, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_26(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_26(Global_388A, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_26(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_3945 == 0)
			{
				func_26(Global_388A, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x7CB6FD92BE491AD9(&Global_93B, 17);
			}
			else if (Global_11542)
			{
				func_26(Global_388A, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x7CB6FD92BE491AD9(&Global_93B, 17);
			}
			else
			{
				if (Global_3944 == 1)
				{
					if (Global_3891)
					{
						func_26(Global_388A, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_26(Global_388A, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_3891)
				{
					func_26(Global_388A, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_26(Global_388A, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0xF0059F27F7BB6680(&Global_93B, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_29(Global_388A, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_26(Global_388A, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_26(Global_388A, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x7CB6FD92BE491AD9(&Global_93B, 17);
			if (unk_0xFA30DFD0084E92FE(Global_93B, 20))
			{
				func_26(Global_388A, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_3891)
			{
				func_26(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_3864)
				{
					func_26(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_26(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_389C == 1)
			{
				func_25();
				func_29(Global_388A, "SET_THEME", SYSTEM::TO_FLOAT(Global_19B04.f_36C6[Global_389D /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_3DC5)
				{
					unk_0x29CD142125FE177B(Global_388A, "SET_DATA_SLOT");
					unk_0x1E1FB49121565EB6(4);
					unk_0x1E1FB49121565EB6(0);
					unk_0x1E1FB49121565EB6(2);
					unk_0x57016C44F10111F0("CELL_CONDFON");
					unk_0x607C19B90D297FE2(&Global_3DC7);
					unk_0x64989E60CF560CA1();
					func_24("CELL_300");
					func_24("CELL_217");
					func_24("CELL_217");
					unk_0xF9FBC2F3F73D94C9();
				}
				else if (Global_19B04.f_6D75[Global_68E /*29*/].f_18[Global_389D] == 0)
				{
					func_26(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_75[Global_68E /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_26(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_19B04.f_6D75[Global_68E /*29*/].f_3), &(Global_19B04.f_6D75[Global_68E /*29*/].f_7), "CELL_217", &(Global_19B04.f_6D75[Global_68E /*29*/].f_3), 0);
				}
				func_29(Global_388A, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_3DB8 == 4 || Global_3DB8 == 3)
			{
				func_29(Global_388A, "SET_THEME", SYSTEM::TO_FLOAT(Global_19B04.f_36C6[Global_389D /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_25();
				if (Global_3DC5)
				{
					unk_0x29CD142125FE177B(Global_388A, "SET_DATA_SLOT");
					unk_0x1E1FB49121565EB6(4);
					unk_0x1E1FB49121565EB6(0);
					unk_0x1E1FB49121565EB6(2);
					unk_0x57016C44F10111F0("CELL_CONDFON");
					unk_0x607C19B90D297FE2(&Global_3DC7);
					unk_0x64989E60CF560CA1();
					func_24("CELL_300");
					func_24("CELL_219");
					func_24("CELL_219");
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
						func_29(Global_388A, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_26(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_75[Global_68E /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_29(Global_388A, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_26(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_19B04.f_6D75[Global_68E /*29*/].f_3), &(Global_19B04.f_6D75[Global_68E /*29*/].f_7), &cVar0, &(Global_19B04.f_6D75[Global_68E /*29*/].f_3), 0);
					}
				}
				func_29(Global_388A, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_23();
			break;
		
		default:
			break;
	}
}

void func_23()//Position - 0x18F4
{
	if (unk_0xA7F138B5B1AB2CF6(Global_388A))
	{
		if (Global_389C == 1)
		{
			if (Global_3891)
			{
				func_26(Global_388A, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_26(Global_388A, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_3DE7)
			{
				func_26(Global_388A, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0xFA30DFD0084E92FE(Global_93B, 20))
			{
				func_26(Global_388A, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_3891)
			{
				func_26(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_26(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_26(Global_388A, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x7CB6FD92BE491AD9(&Global_93B, 17);
		}
		else
		{
			func_26(Global_388A, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_26(Global_388A, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x7CB6FD92BE491AD9(&Global_93B, 17);
			if (unk_0xFA30DFD0084E92FE(Global_93B, 20))
			{
				func_26(Global_388A, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_3891)
			{
				func_26(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_3864)
				{
					func_26(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_26(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_24(char* sParam0)//Position - 0x1A84
{
	unk_0x57016C44F10111F0(sParam0);
	unk_0x64989E60CF560CA1();
}

void func_25()//Position - 0x1A96
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

void func_26(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x1D0D
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
		func_24(sParam7);
	}
	if (!unk_0xF1734B55490E9045(sParam8))
	{
		func_24(sParam8);
	}
	if (!unk_0xF1734B55490E9045(sParam9))
	{
		func_24(sParam9);
	}
	if (!unk_0xF1734B55490E9045(sParam10))
	{
		func_24(sParam10);
	}
	if (!unk_0xF1734B55490E9045(sParam11))
	{
		func_24(sParam11);
	}
	unk_0xF9FBC2F3F73D94C9();
}

void func_27(int iParam0)//Position - 0x1DC0
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
		if (func_28(14))
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
								func_24(&(Global_942[iVar1 /*15*/]));
								unk_0x1E1FB49121565EB6(iVar2);
								unk_0xF9FBC2F3F73D94C9();
							}
							if (Global_25805E)
							{
								if (iVar1 == 14)
								{
									func_26(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_41DF), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_26(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_41E4), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_26(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_26(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_26(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_41DF), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x29CD142125FE177B(Global_388A, "SET_DATA_SLOT");
								unk_0x1E1FB49121565EB6(1);
								unk_0x1E1FB49121565EB6(iVar0);
								unk_0x1E1FB49121565EB6(Global_942[iVar1 /*15*/].f_A);
								unk_0x1E1FB49121565EB6(0);
								func_24(&(Global_942[iVar1 /*15*/]));
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
								func_24(&(Global_942[iVar1 /*15*/]));
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
								func_24(&(Global_942[iVar1 /*15*/]));
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
								func_24(&(Global_942[iVar1 /*15*/]));
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
								func_24(&(Global_942[iVar1 /*15*/]));
								unk_0x1E1FB49121565EB6(42);
								unk_0xF9FBC2F3F73D94C9();
							}
							else if (Global_942[iVar1 /*15*/].f_A == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_18C323.f_1;
								func_26(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_26(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(0), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
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

bool func_28(int iParam0)//Position - 0x2366
{
	return Global_8C41 == iParam0;
}

void func_29(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x2374
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

void func_30(bool bParam0)//Position - 0x23D7
{
	if (bParam0)
	{
		if (Global_389D.f_1 == 9)
		{
			Global_3943 = 1;
		}
	}
	else
	{
		Global_3943 = 0;
	}
}

void func_31()//Position - 0x23F9
{
	if (func_14() || unk_0xFA30DFD0084E92FE(Global_93B, 8))
	{
		unk_0x7CB6FD92BE491AD9(&Global_93B, 8);
		func_37();
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			if (!unk_0xBCBEDE9A08E4ED89(unk_0xBC25C936A095B5BA()))
			{
				if (func_36())
				{
				}
				else if (unk_0xB731B8C5BCE89836(joaat("cellphone_flashhand")) == 0)
				{
					if (unk_0xFA30DFD0084E92FE(Global_93C, 21))
					{
						unk_0x7CB6FD92BE491AD9(&Global_93C, 21);
					}
					if (Global_394B == 1)
					{
						Global_394B = 0;
					}
					switch (Global_389D.f_1)
					{
						case 3:
							Global_389D.f_1 = 4;
							if (iLocal_78 == 0)
							{
								func_32();
								iLocal_78 = 1;
							}
							break;
						
						default:
							break;
					}
					Global_3941 = 1;
				}
			}
		}
	}
}

void func_32()//Position - 0x24A1
{
	if (Global_4118D8 == 1)
	{
		if (!func_35())
		{
			return;
		}
		if (func_33(unk_0xB5CEFD608600A09F()))
		{
			if (unk_0x2DC92D46FC48E795(803) == 1)
			{
				unk_0x2E94302CFF011F2E("CELL_EMAIL_EVENT");
				unk_0x5E48BB10C6423FD5(1, 1);
			}
			else if (unk_0x2DC92D46FC48E795(803) != 1)
			{
			}
		}
	}
}

int func_33(int iParam0)//Position - 0x24EF
{
	int iVar0;
	struct<13> Var1;
	
	if (unk_0x823F3E7DB232ED49() == 0)
	{
		return 0;
	}
	iVar0 = -1;
	if (iParam0 != unk_0xB5CEFD608600A09F())
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	if (unk_0x3E9993F328985CCB() || unk_0xF7E138CFA19B55E7())
	{
		if (unk_0xC46C045B74A03589(0, iVar0))
		{
			if (unk_0x36C1DE668967177B())
			{
				return 1;
			}
		}
	}
	if (unk_0xA76D65C63ED50F67() || unk_0xF49912B78E2591B6())
	{
		if (iParam0 == unk_0xB5CEFD608600A09F())
		{
			if (unk_0x516B243FD7C71CE0(0, -3, 1) || unk_0xC46C045B74A03589(1, -1))
			{
				return 1;
			}
		}
		else
		{
			Var1 = { func_34(iParam0) };
			if (unk_0xC46C045B74A03589(0, -1) || (unk_0xC46C045B74A03589(1, -1) && unk_0xE140B7178EA00705(&Var1)))
			{
				return 1;
			}
		}
	}
	if (unk_0x8ACB0C3FACC09467())
	{
		if (unk_0xC46C045B74A03589(0, iVar0))
		{
			if (unk_0x36C1DE668967177B())
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_34(int iParam0)//Position - 0x25C8
{
	struct<13> Var0;
	
	unk_0xB7DBA2C6D2C3C41A(iParam0, &Var0, 13);
	return Var0;
}

int func_35()//Position - 0x25DF
{
	if (unk_0x3E9993F328985CCB() && unk_0x85CB9EFD5FE33ADA() == 3)
	{
		return 1;
	}
	if (unk_0xA76D65C63ED50F67() && unk_0x85CB9EFD5FE33ADA() == 3)
	{
		return 1;
	}
	if (unk_0xF7E138CFA19B55E7() && unk_0x11F704A1BA7AC122() == 0)
	{
		return 1;
	}
	if (unk_0xF49912B78E2591B6() && unk_0x11F704A1BA7AC122() == 0)
	{
		return 1;
	}
	if (unk_0x8ACB0C3FACC09467() && unk_0x36C1DE668967177B())
	{
		return 1;
	}
	return 0;
}

int func_36()//Position - 0x2654
{
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if ((((unk_0xA0747FCBCF1D1424(unk_0xBC25C936A095B5BA(), 78, 1) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x687BD6F7DF82B377(unk_0xBC25C936A095B5BA(), 0)) || unk_0x01666D754C368931(unk_0xBC25C936A095B5BA())) || unk_0xADC5538B9DCA2177(unk_0xBC25C936A095B5BA()) == 1)
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

void func_37()//Position - 0x26BF
{
	if (func_28(14))
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
		Global_389D = func_38();
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

var func_38()//Position - 0x2761
{
	func_39();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_39()//Position - 0x277A
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_42(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_41(unk_0xBC25C936A095B5BA());
			if (func_40(iVar0) && (!func_28(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_40(Global_19B04.f_932.f_21B.f_10CD))
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

bool func_40(int iParam0)//Position - 0x2877
{
	return iParam0 < 3;
}

int func_41(int iParam0)//Position - 0x2883
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_42(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_42(int iParam0)//Position - 0x28C0
{
	if (func_40(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_43()//Position - 0x28EA
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_44()//Position - 0x2911
{
	char cVar0[64];
	int iVar1;
	char cVar2[64];
	char cVar3[64];
	char cVar4[64];
	char cVar5[64];
	
	unk_0x7CB6FD92BE491AD9(&Global_411DCA, 0);
	if (Global_41DD != 0)
	{
		if (unk_0x516A8073F5BF5F0A(Global_41DD))
		{
			if (unk_0xEB606E770B747B2C(Global_41DD))
			{
				StringCopy(&cVar0, unk_0xF392EEDDF2FB749A(Global_41DD), 64);
				Global_41E5[Global_41E3] = Global_41DD;
			}
			else
			{
				StringCopy(&cVar0, "CHAR_DEFAULT", 64);
				Global_41E5[Global_411DBA] = 0;
			}
		}
		else
		{
			StringCopy(&cVar0, "CHAR_DEFAULT", 64);
			Global_41E5[Global_411DBA] = 0;
		}
	}
	else
	{
		StringCopy(&cVar0, unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[Global_4118D9[Global_411DBA /*104*/].f_11 /*29*/].f_7)), 64);
		Global_41E5[Global_411DBA] = 0;
	}
	if (unk_0xF1734B55490E9045(&cVar0))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
	}
	else if (unk_0x3362CDE8460ED38B(&cVar0, "NULL"))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
	}
	if (((((((Global_4118D9[Global_411DBA /*104*/].f_20 == 4 || Global_4118D9[Global_411DBA /*104*/].f_20 == 5) || Global_4118D9[Global_411DBA /*104*/].f_20 == 6) || Global_4118D9[Global_411DBA /*104*/].f_20 == 7) || Global_4118D9[Global_411DBA /*104*/].f_20 == 8) || Global_4118D9[Global_411DBA /*104*/].f_20 == 9) || Global_4118D9[Global_411DBA /*104*/].f_20 == 10) || Global_4118D9[Global_411DBA /*104*/].f_20 == 11)
	{
		iVar1 = 0;
		switch (Global_4118D9[Global_411DBA /*104*/].f_31)
		{
			case 1:
				unk_0x2E94302CFF011F2E("CELL_CL01");
				break;
			
			case 2:
				unk_0x2E94302CFF011F2E("CELL_CL02");
				break;
			
			case 3:
				unk_0x2E94302CFF011F2E("CELL_CL03");
				break;
			
			case 4:
				unk_0x2E94302CFF011F2E("CELL_CL04");
				break;
			
			case 5:
				unk_0x2E94302CFF011F2E("CELL_CL05");
				break;
			
			case 6:
				unk_0x2E94302CFF011F2E("CELL_CL06");
				break;
			
			case 7:
				unk_0x2E94302CFF011F2E("CELL_CL07");
				break;
			
			case 8:
				unk_0x2E94302CFF011F2E("CELL_CL08");
				break;
			
			case 9:
				unk_0x2E94302CFF011F2E("CELL_CL09");
				break;
		}
		unk_0xC9C304D0AABE1335(&(Global_4118D9[Global_411DBA /*104*/]));
		while (iVar1 < Global_4118D9[Global_411DBA /*104*/].f_31)
		{
			switch (Global_4118D9[Global_411DBA /*104*/].f_20)
			{
				case 4:
					unk_0xC9C304D0AABE1335(&(Global_267214.f_673[iVar1 /*4*/]));
					break;
				
				case 5:
					unk_0xC9C304D0AABE1335(&(Global_19398A[iVar1 /*4*/]));
					break;
				
				case 6:
					unk_0xC9C304D0AABE1335(&(Global_1939B3[iVar1 /*4*/]));
					break;
				
				case 7:
					unk_0xC9C304D0AABE1335(&(Global_1939C8[iVar1 /*4*/]));
					break;
				
				case 8:
					unk_0xC9C304D0AABE1335(&(Global_1939D9[iVar1 /*4*/]));
					break;
				
				case 9:
					unk_0xC9C304D0AABE1335(&(Global_1939E6[iVar1 /*4*/]));
					break;
				
				case 10:
					unk_0xC9C304D0AABE1335(&(Global_1939F3[iVar1 /*4*/]));
					break;
				
				case 11:
					unk_0xC9C304D0AABE1335(&(Global_193A00[iVar1 /*4*/]));
					break;
			}
			iVar1++;
		}
		StringCopy(&cVar2, unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[Global_4118D9[Global_411DBA /*104*/].f_11 /*29*/].f_3)), 64);
		iLocal_48 = unk_0x7BB0762D8C75A3C7(&cVar0, &cVar0, 0, 2, &cVar2, 0);
		unk_0xF0059F27F7BB6680(&Global_411DCA, 1);
		Global_41DA = 1;
		Global_41D9 = iLocal_48;
		Global_41DD = 0;
	}
	else
	{
		unk_0x2E94302CFF011F2E(&(Global_4118D9[Global_411DBA /*104*/]));
		switch (Global_4118D9[Global_411DBA /*104*/].f_20)
		{
			case 0:
				break;
			
			case 1:
				unk_0x607C19B90D297FE2(&(Global_4118D9[Global_411DBA /*104*/].f_21));
				if (Global_4118D9[Global_411DBA /*104*/].f_42 == 1 && !unk_0x3362CDE8460ED38B(&(Global_4118D9[Global_411DBA /*104*/].f_43), "NULL"))
				{
					unk_0x607C19B90D297FE2(&(Global_4118D9[Global_411DBA /*104*/].f_43));
				}
				if ((Global_4118D9[Global_411DBA /*104*/].f_42 == 2 && !unk_0x3362CDE8460ED38B(&(Global_4118D9[Global_411DBA /*104*/].f_43), "NULL")) && !unk_0x3362CDE8460ED38B(&(Global_4118D9[Global_411DBA /*104*/].f_53), "NULL"))
				{
					if (unk_0x0F6F4C227FB5DD52(&(Global_4118D9[Global_411DBA /*104*/].f_43)))
					{
						unk_0xC9C304D0AABE1335(&(Global_4118D9[Global_411DBA /*104*/].f_43));
					}
					else
					{
						unk_0x607C19B90D297FE2(&(Global_4118D9[Global_411DBA /*104*/].f_43));
					}
					if (unk_0x0F6F4C227FB5DD52(&(Global_4118D9[Global_411DBA /*104*/].f_53)))
					{
						unk_0xC9C304D0AABE1335(&(Global_4118D9[Global_411DBA /*104*/].f_53));
					}
					else
					{
						unk_0x607C19B90D297FE2(&(Global_4118D9[Global_411DBA /*104*/].f_53));
					}
				}
				break;
			
			case 2:
				unk_0xAA5C5BF0489E5553(Global_4118D9[Global_411DBA /*104*/].f_31);
				break;
			
			case 3:
				unk_0x607C19B90D297FE2(&(Global_4118D9[Global_411DBA /*104*/].f_21));
				unk_0xAA5C5BF0489E5553(Global_4118D9[Global_411DBA /*104*/].f_31);
				if (Global_4118D9[Global_411DBA /*104*/].f_42 == 1 && !unk_0x3362CDE8460ED38B(&(Global_4118D9[Global_411DBA /*104*/].f_43), "NULL"))
				{
					unk_0x607C19B90D297FE2(&(Global_4118D9[Global_411DBA /*104*/].f_43));
				}
				if ((Global_4118D9[Global_411DBA /*104*/].f_42 == 2 && !unk_0x3362CDE8460ED38B(&(Global_4118D9[Global_411DBA /*104*/].f_43), "NULL")) && !unk_0x3362CDE8460ED38B(&(Global_4118D9[Global_411DBA /*104*/].f_53), "NULL"))
				{
					if (unk_0x0F6F4C227FB5DD52(&(Global_4118D9[Global_411DBA /*104*/].f_43)))
					{
						unk_0xC9C304D0AABE1335(&(Global_4118D9[Global_411DBA /*104*/].f_43));
					}
					else
					{
						unk_0x607C19B90D297FE2(&(Global_4118D9[Global_411DBA /*104*/].f_43));
					}
					if (unk_0x0F6F4C227FB5DD52(&(Global_4118D9[Global_411DBA /*104*/].f_53)))
					{
						unk_0xC9C304D0AABE1335(&(Global_4118D9[Global_411DBA /*104*/].f_53));
					}
					else
					{
						unk_0x607C19B90D297FE2(&(Global_4118D9[Global_411DBA /*104*/].f_53));
					}
				}
				break;
		}
		if (Global_4118D9[Global_411DBA /*104*/].f_11 == 145)
		{
			StringCopy(&cVar3, "<C>", 64);
			StringConCat(&cVar3, &Global_BEB, 64);
			StringConCat(&cVar3, "</C>", 64);
			iLocal_48 = unk_0x7BB0762D8C75A3C7(&cVar0, &cVar0, 0, 2, &cVar3, 0);
			unk_0xF0059F27F7BB6680(&Global_411DCA, 1);
			Global_41DA = 1;
			Global_41D9 = iLocal_48;
		}
		else
		{
			StringCopy(&cVar4, unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[Global_4118D9[Global_411DBA /*104*/].f_11 /*29*/].f_3)), 64);
			if (Global_4118D9[Global_411DBA /*104*/].f_11 == 98)
			{
				StringCopy(&cVar5, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
				StringConCat(&cVar5, &cVar4, 64);
				iLocal_48 = unk_0x7BB0762D8C75A3C7(&cVar0, &cVar0, 0, 2, &cVar5, 0);
			}
			else
			{
				iLocal_48 = unk_0x7BB0762D8C75A3C7(&cVar0, &cVar0, 0, 2, &cVar4, 0);
			}
			unk_0xF0059F27F7BB6680(&Global_411DCA, 1);
			Global_41DA = 1;
			Global_41D9 = iLocal_48;
			Global_41DD = 0;
		}
	}
	Global_4118D9[Global_411DBA /*104*/].f_10 = iLocal_48;
}

void func_45()//Position - 0x2F67
{
	char cVar0[64];
	char cVar1[64];
	char* sVar2;
	
	StringCopy(&cVar0, unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[Global_BE9 /*29*/].f_7)), 64);
	if (Global_BFC == 0)
	{
		unk_0x2E94302CFF011F2E("");
		StringCopy(&cVar1, unk_0xFCB4C1AC11347344(&(Global_B9D[1 /*6*/])), 64);
		sVar2 = unk_0xFCB4C1AC11347344("CELL_253");
		unk_0x7BB0762D8C75A3C7(&cVar0, &cVar0, 0, 3, sVar2, &cVar1);
	}
	else
	{
		unk_0x2E94302CFF011F2E("CELL_255");
		unk_0xC9C304D0AABE1335(&(Global_B9D[1 /*6*/]));
		unk_0x7BB0762D8C75A3C7(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0x7CB6FD92BE491AD9(&Global_93B, 0);
}

void func_46()//Position - 0x2FE8
{
	if (unk_0xFA30DFD0084E92FE(Global_93B, 1))
	{
		func_49();
		func_47();
		Global_19B04.f_36C6[Global_389D /*20*/].f_12 = 1;
		if (unk_0x7AF0088ABFA713B6())
		{
			iLocal_45[Global_389D] = unk_0xED678C85A82F0AB9();
			iLocal_43[Global_389D] = 1;
		}
		else if (!unk_0xFA30DFD0084E92FE(Global_93B, 10))
		{
			iLocal_44[Global_389D] = unk_0x105601648511CC64();
			iLocal_43[Global_389D] = 1;
		}
		else
		{
			iLocal_44[0] = unk_0x105601648511CC64();
			iLocal_44[2] = unk_0x105601648511CC64();
			iLocal_44[1] = unk_0x105601648511CC64();
			iLocal_43[0] = 1;
			iLocal_43[2] = 1;
			iLocal_43[1] = 1;
		}
		unk_0x7CB6FD92BE491AD9(&Global_93B, 1);
	}
}

void func_47()//Position - 0x3087
{
	func_37();
	if (Global_11542)
	{
		Global_19B04.f_36C6[3 /*20*/].f_A = func_109(1197, -1, 0);
	}
	if (Global_19B04.f_36C6[Global_389D /*20*/].f_A == 1)
	{
		if (!func_48(0))
		{
			unk_0xF715C239F71B95D6(0, 2000, 100);
		}
	}
}

int func_48(int iParam0)//Position - 0x30D4
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

void func_49()//Position - 0x312E
{
	char cVar0[64];
	int iVar1;
	char cVar2[64];
	char cVar3[64];
	char cVar4[64];
	char cVar5[64];
	
	if (Global_41DD != 0)
	{
		if (unk_0x516A8073F5BF5F0A(Global_41DD))
		{
			if (unk_0xEB606E770B747B2C(Global_41DD))
			{
				StringCopy(&cVar0, unk_0xF392EEDDF2FB749A(Global_41DD), 64);
				Global_41E5[Global_41E3] = Global_41DD;
			}
			else
			{
				StringCopy(&cVar0, "CHAR_DEFAULT", 64);
				Global_41E5[Global_41E3] = 0;
			}
		}
		else
		{
			StringCopy(&cVar0, "CHAR_DEFAULT", 64);
			Global_41E5[Global_41E3] = 0;
		}
	}
	else
	{
		StringCopy(&cVar0, unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[Global_19B04.f_3720[Global_41E3 /*104*/].f_11 /*29*/].f_7)), 64);
		Global_41E5[Global_41E3] = 0;
	}
	if (unk_0xF1734B55490E9045(&cVar0))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
	}
	else if (unk_0x3362CDE8460ED38B(&cVar0, "NULL"))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
	}
	if (((((((Global_19B04.f_3720[Global_41E3 /*104*/].f_20 == 4 || Global_19B04.f_3720[Global_41E3 /*104*/].f_20 == 5) || Global_19B04.f_3720[Global_41E3 /*104*/].f_20 == 6) || Global_19B04.f_3720[Global_41E3 /*104*/].f_20 == 7) || Global_19B04.f_3720[Global_41E3 /*104*/].f_20 == 8) || Global_19B04.f_3720[Global_41E3 /*104*/].f_20 == 9) || Global_19B04.f_3720[Global_41E3 /*104*/].f_20 == 10) || Global_19B04.f_3720[Global_41E3 /*104*/].f_20 == 11)
	{
		iVar1 = 0;
		switch (Global_19B04.f_3720[Global_41E3 /*104*/].f_31)
		{
			case 1:
				unk_0x2E94302CFF011F2E("CELL_CL01");
				break;
			
			case 2:
				unk_0x2E94302CFF011F2E("CELL_CL02");
				break;
			
			case 3:
				unk_0x2E94302CFF011F2E("CELL_CL03");
				break;
			
			case 4:
				unk_0x2E94302CFF011F2E("CELL_CL04");
				break;
			
			case 5:
				unk_0x2E94302CFF011F2E("CELL_CL05");
				break;
			
			case 6:
				unk_0x2E94302CFF011F2E("CELL_CL06");
				break;
			
			case 7:
				unk_0x2E94302CFF011F2E("CELL_CL07");
				break;
			
			case 8:
				unk_0x2E94302CFF011F2E("CELL_CL08");
				break;
			
			case 9:
				unk_0x2E94302CFF011F2E("CELL_CL09");
				break;
		}
		unk_0xC9C304D0AABE1335(&(Global_19B04.f_3720[Global_41E3 /*104*/]));
		while (iVar1 < Global_19B04.f_3720[Global_41E3 /*104*/].f_31)
		{
			switch (Global_19B04.f_3720[Global_41E3 /*104*/].f_20)
			{
				case 4:
					unk_0xC9C304D0AABE1335(&(Global_267214.f_673[iVar1 /*4*/]));
					break;
				
				case 5:
					unk_0xC9C304D0AABE1335(&(Global_19398A[iVar1 /*4*/]));
					break;
				
				case 6:
					unk_0xC9C304D0AABE1335(&(Global_1939B3[iVar1 /*4*/]));
					break;
				
				case 7:
					unk_0xC9C304D0AABE1335(&(Global_1939C8[iVar1 /*4*/]));
					break;
				
				case 8:
					unk_0xC9C304D0AABE1335(&(Global_1939D9[iVar1 /*4*/]));
					break;
				
				case 9:
					unk_0xC9C304D0AABE1335(&(Global_1939E6[iVar1 /*4*/]));
					break;
				
				case 10:
					unk_0xC9C304D0AABE1335(&(Global_1939F3[iVar1 /*4*/]));
					break;
				
				case 11:
					unk_0xC9C304D0AABE1335(&(Global_193A00[iVar1 /*4*/]));
					break;
			}
			iVar1++;
		}
		StringCopy(&cVar2, unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[Global_19B04.f_3720[Global_41E3 /*104*/].f_11 /*29*/].f_3)), 64);
		iLocal_48 = unk_0x7BB0762D8C75A3C7(&cVar0, &cVar0, 0, 1, &cVar2, 0);
		Global_41DA = 3;
		Global_41D9 = iLocal_48;
		Global_41DD = 0;
	}
	else
	{
		unk_0x2E94302CFF011F2E(&(Global_19B04.f_3720[Global_41E3 /*104*/]));
		switch (Global_19B04.f_3720[Global_41E3 /*104*/].f_20)
		{
			case 0:
				break;
			
			case 1:
				unk_0x607C19B90D297FE2(&(Global_19B04.f_3720[Global_41E3 /*104*/].f_21));
				if (Global_19B04.f_3720[Global_41E3 /*104*/].f_42 == 1 && !unk_0x3362CDE8460ED38B(&(Global_19B04.f_3720[Global_41E3 /*104*/].f_43), "NULL"))
				{
					unk_0x607C19B90D297FE2(&(Global_19B04.f_3720[Global_41E3 /*104*/].f_43));
				}
				if ((Global_19B04.f_3720[Global_41E3 /*104*/].f_42 == 2 && !unk_0x3362CDE8460ED38B(&(Global_19B04.f_3720[Global_41E3 /*104*/].f_43), "NULL")) && !unk_0x3362CDE8460ED38B(&(Global_19B04.f_3720[Global_41E3 /*104*/].f_53), "NULL"))
				{
					if (unk_0x0F6F4C227FB5DD52(&(Global_19B04.f_3720[Global_41E3 /*104*/].f_43)))
					{
						unk_0xC9C304D0AABE1335(&(Global_19B04.f_3720[Global_41E3 /*104*/].f_43));
					}
					else
					{
						unk_0x607C19B90D297FE2(&(Global_19B04.f_3720[Global_41E3 /*104*/].f_43));
					}
					if (unk_0x0F6F4C227FB5DD52(&(Global_19B04.f_3720[Global_41E3 /*104*/].f_53)))
					{
						unk_0xC9C304D0AABE1335(&(Global_19B04.f_3720[Global_41E3 /*104*/].f_53));
					}
					else
					{
						unk_0x607C19B90D297FE2(&(Global_19B04.f_3720[Global_41E3 /*104*/].f_53));
					}
				}
				break;
			
			case 2:
				unk_0xAA5C5BF0489E5553(Global_19B04.f_3720[Global_41E3 /*104*/].f_31);
				break;
			
			case 3:
				unk_0x607C19B90D297FE2(&(Global_19B04.f_3720[Global_41E3 /*104*/].f_21));
				unk_0xAA5C5BF0489E5553(Global_19B04.f_3720[Global_41E3 /*104*/].f_31);
				if (Global_19B04.f_3720[Global_41E3 /*104*/].f_42 == 1 && !unk_0x3362CDE8460ED38B(&(Global_19B04.f_3720[Global_41E3 /*104*/].f_43), "NULL"))
				{
					unk_0x607C19B90D297FE2(&(Global_19B04.f_3720[Global_41E3 /*104*/].f_43));
				}
				if ((Global_19B04.f_3720[Global_41E3 /*104*/].f_42 == 2 && !unk_0x3362CDE8460ED38B(&(Global_19B04.f_3720[Global_41E3 /*104*/].f_43), "NULL")) && !unk_0x3362CDE8460ED38B(&(Global_19B04.f_3720[Global_41E3 /*104*/].f_53), "NULL"))
				{
					if (unk_0x0F6F4C227FB5DD52(&(Global_19B04.f_3720[Global_41E3 /*104*/].f_43)))
					{
						unk_0xC9C304D0AABE1335(&(Global_19B04.f_3720[Global_41E3 /*104*/].f_43));
					}
					else
					{
						unk_0x607C19B90D297FE2(&(Global_19B04.f_3720[Global_41E3 /*104*/].f_43));
					}
					if (unk_0x0F6F4C227FB5DD52(&(Global_19B04.f_3720[Global_41E3 /*104*/].f_53)))
					{
						unk_0xC9C304D0AABE1335(&(Global_19B04.f_3720[Global_41E3 /*104*/].f_53));
					}
					else
					{
						unk_0x607C19B90D297FE2(&(Global_19B04.f_3720[Global_41E3 /*104*/].f_53));
					}
				}
				break;
		}
		if (Global_19B04.f_3720[Global_41E3 /*104*/].f_11 == 145)
		{
			StringCopy(&cVar3, "<C>", 64);
			StringConCat(&cVar3, &Global_BEB, 64);
			StringConCat(&cVar3, "</C>", 64);
			iLocal_48 = unk_0x7BB0762D8C75A3C7(&cVar0, &cVar0, 0, 1, &cVar3, 0);
			Global_41DA = 3;
			Global_41D9 = iLocal_48;
		}
		else
		{
			StringCopy(&cVar4, unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[Global_19B04.f_3720[Global_41E3 /*104*/].f_11 /*29*/].f_3)), 64);
			if (Global_19B04.f_3720[Global_41E3 /*104*/].f_11 == 98)
			{
				StringCopy(&cVar5, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
				StringConCat(&cVar5, &cVar4, 64);
				iLocal_48 = unk_0x7BB0762D8C75A3C7(&cVar0, &cVar0, 0, 1, &cVar5, 0);
			}
			else
			{
				iLocal_48 = unk_0x7BB0762D8C75A3C7(&cVar0, &cVar0, 0, 1, &cVar4, 0);
			}
			Global_41DA = 3;
			Global_41D9 = iLocal_48;
			Global_41DD = 0;
		}
	}
	Global_19B04.f_3720[Global_41E3 /*104*/].f_10 = iLocal_48;
}

void func_50()//Position - 0x37BD
{
	if (unk_0xFA30DFD0084E92FE(Global_93B, 19))
	{
		unk_0x7CB6FD92BE491AD9(&Global_93B, 19);
		func_37();
		Global_19B04.f_36C6[3 /*20*/].f_12 = 0;
		Global_19B04.f_36C6[3 /*20*/].f_11 = 0;
	}
}

void func_51()//Position - 0x37F8
{
	if (iLocal_43[Global_389D] == 1)
	{
		if (unk_0x7AF0088ABFA713B6())
		{
			iLocal_47 = unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), iLocal_45[Global_389D]);
		}
		else
		{
			iLocal_46[Global_389D] = unk_0x105601648511CC64();
			iLocal_47 = (iLocal_46[Global_389D] - iLocal_44[Global_389D]);
		}
		if (iLocal_47 > 300000)
		{
			Global_19B04.f_36C6[Global_389D /*20*/].f_12 = 0;
			Global_19B04.f_36C6[Global_389D /*20*/].f_11 = 0;
			iLocal_43[Global_389D] = 0;
		}
	}
}

void func_52()//Position - 0x3871
{
	int iVar0;
	
	func_37();
	if (Global_11542 == 0)
	{
		if (!func_43())
		{
			if (iLocal_53 == 0)
			{
				if ((Global_19B04.f_3720[21 /*104*/].f_18 != 0 || Global_19B04.f_3720[22 /*104*/].f_18 != 0) || Global_19B04.f_3720[23 /*104*/].f_18 != 0)
				{
					switch (Global_389D)
					{
						case 0:
							if (Global_19B04.f_3720[21 /*104*/].f_18 != 0)
							{
								iLocal_42 = 21;
								iLocal_53 = 1;
								SYSTEM::SETTIMERA(0);
							}
							break;
						
						case 1:
							if (Global_19B04.f_3720[22 /*104*/].f_18 != 0)
							{
								iLocal_42 = 22;
								iLocal_53 = 1;
								SYSTEM::SETTIMERA(0);
							}
							break;
						
						case 2:
							if (Global_19B04.f_3720[23 /*104*/].f_18 != 0)
							{
								iLocal_42 = 23;
								iLocal_53 = 1;
								SYSTEM::SETTIMERA(0);
							}
							break;
						
						default:
							break;
						}
				}
			}
			else if (SYSTEM::TIMERA() > 15000)
			{
				iLocal_53 = 0;
				iVar0 = 0;
				func_37();
				if (iLocal_42 == 21 && Global_389D != 0)
				{
					iVar0 = 1;
				}
				if (iLocal_42 == 22 && Global_389D != 1)
				{
					iVar0 = 1;
				}
				if (iLocal_42 == 23 && Global_389D != 2)
				{
					iVar0 = 1;
				}
				if (Global_19B04.f_3720[iLocal_42 /*104*/].f_18 != 0 && iVar0 == 0)
				{
					if (!func_28(14))
					{
						if (func_55(Global_19B04.f_3720[iLocal_42 /*104*/].f_11, &(Global_19B04.f_3720[iLocal_42 /*104*/]), Global_19B04.f_3720[iLocal_42 /*104*/].f_18, Global_19B04.f_3720[iLocal_42 /*104*/].f_19, Global_19B04.f_3720[iLocal_42 /*104*/].f_1A, Global_19B04.f_3720[iLocal_42 /*104*/].f_1D, 0, 1, Global_19B04.f_3720[iLocal_42 /*104*/].f_1F, Global_19B04.f_3720[iLocal_42 /*104*/].f_1E))
						{
							Global_19B04.f_3720[iLocal_42 /*104*/].f_18 = 0;
						}
					}
				}
			}
			if (iLocal_64 == 0)
			{
				if (Global_BDF[Global_389D])
				{
					iLocal_64 = 1;
					iLocal_65 = Global_389D;
					if (unk_0x7AF0088ABFA713B6())
					{
						iLocal_62 = unk_0xED678C85A82F0AB9();
					}
					else
					{
						iLocal_56 = unk_0x105601648511CC64();
					}
				}
			}
			else
			{
				if (unk_0x7AF0088ABFA713B6())
				{
					iLocal_63 = unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), iLocal_62);
				}
				else
				{
					iLocal_57 = unk_0x105601648511CC64();
					iLocal_63 = (iLocal_57 - iLocal_56);
				}
				if (iLocal_63 > 7000)
				{
					if (func_53(0))
					{
						Global_B9D[1 /*6*/] = { Global_BCE[Global_389D /*4*/] };
						Global_BE9 = Global_BE4[Global_389D];
						Global_BDF[Global_389D] = 0;
						iLocal_64 = 0;
					}
				}
				if (iLocal_65 != Global_389D)
				{
					iLocal_64 = 0;
				}
			}
		}
	}
}

bool func_53(int iParam0)//Position - 0x3ADD
{
	return func_54(iParam0, Global_8C41);
}

int func_54(int iParam0, int iParam1)//Position - 0x3AEE
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

int func_55(int iParam0, char* sParam1, int iParam2, int iParam3, var uParam4, var uParam5, int iParam6, bool bParam7, var uParam8, var uParam9)//Position - 0x3CCF
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
	if (func_56(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, uParam4, uParam5, bParam7, uParam8, uParam9, iVar4, sVar5, sVar6, iVar7) == 1)
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

int func_56(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0x3D67
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x3362CDE8460ED38B(sParam14, sParam15))
	{
	}
	func_37();
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
	if (func_62() == 0)
	{
		func_60();
		return 0;
	}
	func_59(Global_41E3);
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
		func_58(0);
		func_58(2);
		func_58(1);
	}
	else
	{
		func_37();
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
					func_58(0);
					Global_BFD = 0;
					break;
				
				case 1:
					func_58(1);
					Global_BFD = 1;
					break;
				
				case 2:
					func_58(2);
					Global_BFD = 2;
					break;
				
				case 3:
					func_58(3);
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
		func_37();
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
			if (!func_57())
			{
				unk_0xC4BA30B532FE260F(-1, "Text_Arrive_Tone", &Global_3892, 1);
			}
		}
	}
	if (!Global_3944)
	{
		if (Global_389D.f_1 == 6)
		{
			func_29(Global_388A, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_27(1);
			func_29(Global_388A, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_3889), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

bool func_57()//Position - 0x421D
{
	return Global_140856;
}

void func_58(int iParam0)//Position - 0x4229
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_19B04.f_36C6[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_59(int iParam0)//Position - 0x4248
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

void func_60()//Position - 0x42DA
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
		if (!func_61(Global_19B04.f_3720[iVar2 /*104*/].f_12, Global_19B04.f_3720[Global_41E3 /*104*/].f_12))
		{
			Global_41E3 = iVar2;
		}
		iVar2++;
	}
	Global_19B04.f_3720[Global_41E3 /*104*/].f_18 = 1;
}

int func_61(struct<6> Param0, struct<6> Param1)//Position - 0x43A5
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

int func_62()//Position - 0x4490
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
			if (!func_61(Global_19B04.f_3720[iVar2 /*104*/].f_12, Global_19B04.f_3720[Global_41E3 /*104*/].f_12))
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

void func_63()//Position - 0x45F8
{
	if (unk_0xFA30DFD0084E92FE(Global_93B, 6))
	{
		if (Global_BFB > 0)
		{
			if (unk_0xFA30DFD0084E92FE(Global_93C, 11))
			{
				if (iLocal_41)
				{
					func_64(iLocal_37, "CLEAR_ALL");
					if (unk_0xFA30DFD0084E92FE(Global_93B, 25))
					{
						unk_0x29CD142125FE177B(iLocal_37, "CREATE_ALERT");
						unk_0x1E1FB49121565EB6(26);
						unk_0xD44E04EBBDC4CE88(222f);
						unk_0xD44E04EBBDC4CE88(222f);
						unk_0xF9FBC2F3F73D94C9();
					}
					if (unk_0xFA30DFD0084E92FE(Global_411DCA, 11))
					{
						unk_0x29CD142125FE177B(iLocal_37, "CREATE_ALERT");
						unk_0x1E1FB49121565EB6(53);
						unk_0xD44E04EBBDC4CE88(222f);
						unk_0xD44E04EBBDC4CE88(222f);
						unk_0xF9FBC2F3F73D94C9();
					}
					if (Global_11542 == 1)
					{
						if (unk_0xFA30DFD0084E92FE(Global_411DCA, 12))
						{
							unk_0x29CD142125FE177B(iLocal_37, "CREATE_ALERT");
							unk_0x1E1FB49121565EB6(52);
							unk_0xD44E04EBBDC4CE88(222f);
							unk_0xD44E04EBBDC4CE88(222f);
							unk_0xF9FBC2F3F73D94C9();
						}
						if (unk_0xFA30DFD0084E92FE(Global_411DCA, 28))
						{
							unk_0x29CD142125FE177B(iLocal_37, "CREATE_ALERT");
							unk_0x1E1FB49121565EB6(60);
							unk_0xD44E04EBBDC4CE88(222f);
							unk_0xD44E04EBBDC4CE88(148f);
							unk_0xF9FBC2F3F73D94C9();
						}
					}
					if (unk_0xFA30DFD0084E92FE(Global_411DCA, 19))
					{
						unk_0x29CD142125FE177B(iLocal_37, "CREATE_ALERT");
						unk_0x1E1FB49121565EB6(55);
						unk_0xD44E04EBBDC4CE88(222f);
						if ((unk_0xFA30DFD0084E92FE(Global_411DCA, 12) || unk_0xFA30DFD0084E92FE(Global_411DCA, 11)) || unk_0xFA30DFD0084E92FE(Global_93B, 25))
						{
							unk_0xD44E04EBBDC4CE88(192f);
						}
						else
						{
							unk_0xD44E04EBBDC4CE88(222f);
						}
						unk_0xF9FBC2F3F73D94C9();
					}
					unk_0x7CB6FD92BE491AD9(&Global_93C, 11);
					iLocal_41 = 0;
				}
			}
		}
		if (Global_BFB < 1)
		{
			unk_0xB0B0FE33F4F22679(&iLocal_37);
			unk_0x7CB6FD92BE491AD9(&Global_93B, 6);
		}
		else
		{
			func_15();
		}
	}
	else if (Global_BFB > 0)
	{
		iLocal_37 = unk_0x9934FEFB3B8C6DB8("cellphone_alert_popup");
		while (!unk_0xA7F138B5B1AB2CF6(iLocal_37))
		{
			SYSTEM::WAIT(0);
		}
		unk_0x996AC9A66B2A5A3F(4);
		unk_0xF0059F27F7BB6680(&Global_93B, 6);
	}
}

void func_64(int iParam0, char* sParam1)//Position - 0x47CB
{
	unk_0x29CD142125FE177B(iParam0, sParam1);
	unk_0xF9FBC2F3F73D94C9();
}

void func_65()//Position - 0x47E0
{
	if (unk_0xFA30DFD0084E92FE(Global_93C, 7))
	{
		unk_0xF0059F27F7BB6680(&Global_93C, 6);
		unk_0x7CB6FD92BE491AD9(&Global_93C, 7);
		return;
	}
	if (!unk_0xFA30DFD0084E92FE(Global_93C, 7))
	{
		unk_0x7CB6FD92BE491AD9(&Global_93C, 6);
		return;
	}
}

void func_66()//Position - 0x481D
{
	if (unk_0xFA30DFD0084E92FE(Global_93C, 4))
	{
		unk_0xF0059F27F7BB6680(&Global_93C, 3);
		unk_0x7CB6FD92BE491AD9(&Global_93C, 4);
		return;
	}
	if (!unk_0xFA30DFD0084E92FE(Global_93C, 4))
	{
		unk_0x7CB6FD92BE491AD9(&Global_93C, 3);
		return;
	}
}

void func_67()//Position - 0x485A
{
	if (unk_0xFA30DFD0084E92FE(Global_93C, 2))
	{
		if (!Global_389D.f_1 == 1)
		{
			Global_389D.f_1 = 0;
		}
		unk_0x7CB6FD92BE491AD9(&Global_93C, 2);
		return;
	}
	if (!unk_0xFA30DFD0084E92FE(Global_93C, 2))
	{
		if (!Global_389D.f_1 == 1)
		{
			if (Global_389D.f_1 < 4)
			{
				Global_389D.f_1 = 3;
			}
		}
		return;
	}
}

int func_68()//Position - 0x48B2
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
		if (func_28(14))
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

int func_69(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x4AD9
{
	func_37();
	if (Global_11542 == 0)
	{
		if (func_28(14))
		{
			if (Global_41DB == 2 || Global_41DB == 4)
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (Global_389D.f_1 == 9)
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		if (func_48(0) == 1)
		{
			return 0;
		}
	}
	if (Global_387B == 1)
	{
		return 0;
	}
	if (Global_389D.f_1 == 7)
	{
		return 0;
	}
	if (iParam1 == 1)
	{
	}
	if (!unk_0x3C406FC829C1E14A(Global_389A))
	{
		if (unk_0xB731B8C5BCE89836(joaat("cellphone_flashhand")) == 0)
		{
			if (Global_389D.f_1 < 4)
			{
				func_70("cellphone_flashhand");
				if (unk_0xB731B8C5BCE89836(joaat("cellphone_flashhand")) == 0)
				{
					Global_389A = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", 1424);
				}
				unk_0x91DEC7187FA01089("cellphone_flashhand");
			}
		}
	}
	while (!Global_388B)
	{
		SYSTEM::WAIT(0);
	}
	func_114();
	func_112();
	if (unk_0xB731B8C5BCE89836(Global_942[iParam0 /*15*/].f_9) == 0)
	{
		Global_B99 = 0;
		Global_389D.f_1 = 7;
		func_70(&(Global_942[iParam0 /*15*/].f_5));
		if (bParam3)
		{
			if (unk_0xB731B8C5BCE89836(Global_942[iParam0 /*15*/].f_9) == 0)
			{
				Global_389B = SYSTEM::START_NEW_SCRIPT(&(Global_942[iParam0 /*15*/].f_5), 4000);
			}
		}
		else if (unk_0xB731B8C5BCE89836(Global_942[iParam0 /*15*/].f_9) == 0)
		{
			Global_389B = SYSTEM::START_NEW_SCRIPT(&(Global_942[iParam0 /*15*/].f_5), 2552);
		}
		unk_0x91DEC7187FA01089(&(Global_942[iParam0 /*15*/].f_5));
		return 1;
	}
	return 1;
}

void func_70(char* sParam0)//Position - 0x4C3C
{
	unk_0x63831D2D5110C305(sParam0);
	while (!unk_0xACE95AD318CE412B(sParam0))
	{
		SYSTEM::WAIT(0);
	}
}

void func_71(int iParam0)//Position - 0x4C5C
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
	if (!func_43())
	{
		Global_389D.f_1 = 3;
	}
}

void func_72(bool bParam0, bool bParam1)//Position - 0x4CCC
{
	if (bParam0)
	{
		if (func_48(0))
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

void func_73()//Position - 0x4D40
{
	float fVar0;
	
	unk_0x121BBDEFA4F0C22B(1);
	unk_0xD55638CE45B2B948(2, 201);
	unk_0xD55638CE45B2B948(2, 202);
	fVar0 = 0f;
	while ((!unk_0x694514BD37EC4E94(2, 201) && !unk_0x694514BD37EC4E94(2, 202)) || fVar0 < 1f)
	{
		UI::_SET_WARNING_MESSAGE_2("VEUI_HDR_ALERT", "VE_DIR_MODE_SURE", 18, 0, 0, -1, 0, 0, 1, 0);
		SYSTEM::WAIT(0);
		fVar0 = (fVar0 + unk_0x11F9F9006143871A());
	}
	unk_0x121BBDEFA4F0C22B(0);
	if (unk_0x694514BD37EC4E94(2, 201))
	{
		unk_0x7A41D32A383895D8(0);
		Global_196E5 = 1;
	}
}

void func_74(int iParam0)//Position - 0x4DBF
{
	float fVar0;
	int iVar1;
	
	unk_0x121BBDEFA4F0C22B(1);
	unk_0xD55638CE45B2B948(2, 201);
	fVar0 = 0f;
	while (!unk_0x694514BD37EC4E94(2, 201) || fVar0 < 1f)
	{
		iVar1 = func_75(iParam0, 119);
		UI::SET_WARNING_MESSAGE("FBR_GENERIC", 16384, 0, 0, -1, "FBR_DIR_MODE", iVar1, 1, 0);
		SYSTEM::WAIT(0);
		fVar0 = (fVar0 + unk_0x11F9F9006143871A());
	}
	unk_0x121BBDEFA4F0C22B(0);
}

char* func_75(int iParam0, int iParam1)//Position - 0x4E21
{
	iParam1 = iParam1;
	switch (iParam0)
	{
		case 1:
			return "FBR_BLK_CLEAN";
			break;
		
		case 2:
			return "FBR_BLK_RNNNG";
			break;
		
		case 13:
			return "FBR_BLK_DEAD";
			break;
		
		case 3:
			return "FBR_BLK_MISS";
			break;
		
		case 5:
			return "FBR_BLK_SHOP";
			break;
		
		case 4:
			return "FBR_BLK_CUTS";
			break;
		
		case 6:
			return "FBR_BLK_WANT";
			break;
		
		case 7:
			return "FBR_BLK_ONLI";
			break;
		
		case 8:
			return "FBR_BLK_ACT";
			break;
		
		case 9:
			return "FBR_BLK_LOC";
			break;
		
		case 10:
			return "FBR_BLK_VEH";
			break;
		
		case 11:
			return "FBR_BLK_PARA";
			break;
		
		case 12:
			return "FBR_BLK_FALL";
			break;
		
		default:
			return "ERROR";
			break;
	}
	return "ERROR";
}

int func_76(int iParam0, bool bParam1, int iParam2)//Position - 0x4F12
{
	int iVar0;
	
	iParam2 = iParam2;
	if (unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		return 13;
	}
	if (bParam1)
	{
		if (unk_0xB731B8C5BCE89836(unk_0x2C087518F90303D5()) > 1)
		{
			return 2;
		}
	}
	if (func_107() && !func_28(14))
	{
		return 3;
	}
	if (func_106())
	{
		return 3;
	}
	if (func_105())
	{
		return 8;
	}
	if (bParam1)
	{
		if (func_104())
		{
			return 8;
		}
	}
	if (Global_15FA4)
	{
		return 3;
	}
	if (Global_63BB)
	{
		return 8;
	}
	if (Global_6351)
	{
		return 8;
	}
	if (Global_28006E)
	{
		if (unk_0xB731B8C5BCE89836(-1516147206) > 0)
		{
			return 3;
		}
	}
	else if (Global_28006D)
	{
		if (unk_0xB731B8C5BCE89836(2006115718) > 0)
		{
			return 3;
		}
	}
	else if (unk_0xB731B8C5BCE89836(joaat("mission_stat_watcher")) > 0)
	{
		return 3;
	}
	if (unk_0xB731B8C5BCE89836(joaat("finale_choice")) > 0)
	{
		return 3;
	}
	if (unk_0xB731B8C5BCE89836(joaat("creator")) > 0)
	{
		return 3;
	}
	if (unk_0xB731B8C5BCE89836(joaat("respawn_controller")) > 0)
	{
		return 13;
	}
	if (func_103(bParam1))
	{
		return 3;
	}
	if (unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA()) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()))
	{
		return 12;
	}
	if (func_102(Global_19735, 256))
	{
		return 3;
	}
	if (((func_101() || func_100()) || func_95()) || func_94())
	{
		return 5;
	}
	if (func_94())
	{
		return 5;
	}
	if (func_93())
	{
		return 5;
	}
	if (func_92())
	{
		return 5;
	}
	if (func_100())
	{
		return 5;
	}
	if (func_91() && !Global_196EA)
	{
		return 8;
	}
	if (func_95())
	{
		return 5;
	}
	if (unk_0x7930B3E9C919E90F() || func_90())
	{
		return 4;
	}
	if (func_57())
	{
		return 4;
	}
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_80(60);
			if (iVar0 != 0)
			{
				return iVar0;
			}
			if (unk_0x01666D754C368931(unk_0xBC25C936A095B5BA()) || unk_0xADC5538B9DCA2177(unk_0xBC25C936A095B5BA()) != -1)
			{
				return 11;
			}
			if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1) || Global_1974B)
			{
				return 10;
			}
		}
	}
	if (Global_63B9)
	{
		return 8;
	}
	if (Global_11540)
	{
		return 4;
	}
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0 || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1))
		{
			return 6;
		}
		if (unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F()))
		{
			return 8;
		}
		if (unk_0x69871CAEBDD20966(unk_0xBC25C936A095B5BA()))
		{
			return 8;
		}
	}
	if (unk_0x7AF0088ABFA713B6())
	{
		return 7;
	}
	if (func_79())
	{
		return 8;
	}
	if (Global_62BF)
	{
		return 3;
	}
	if (unk_0xBFFAD293E2DA992B())
	{
		return 4;
	}
	if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 439.4357f, -997.4747f, 28.9584f, 428.3288f, -997.0398f, 24.8372f, 8f, 0, true, 0))
	{
		return 9;
	}
	if (unk_0x149E9368A11035DE(unk_0xBC25C936A095B5BA()))
	{
		return 9;
	}
	if (bParam1)
	{
		if (!func_77(0))
		{
			return 8;
		}
	}
	if (unk_0x6C02DCF0A777D97F(unk_0xBC25C936A095B5BA()))
	{
		return 9;
	}
	return 0;
}

int func_77(bool bParam0)//Position - 0x524E
{
	if (unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		return 0;
	}
	if ((((((((((!unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()) || !unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F())) || unk_0x32E373675659FDB0(unk_0xBC25C936A095B5BA())) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || unk_0xABB2AFD7539464EA(unk_0xBC25C936A095B5BA())) || unk_0xA4813477CC5DD00F(unk_0xBC25C936A095B5BA())) || unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())) || unk_0x69871CAEBDD20966(unk_0xBC25C936A095B5BA())) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1))
	{
		return 0;
	}
	if ((((((func_57() || Global_4336.f_4) || func_78()) || unk_0x6F49774BB35FE28B()) || unk_0xD142D5C196F26594()) || func_90()) || func_106())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (unk_0x04604C9E42BD0E47())
		{
			return 0;
		}
	}
	return 1;
}

int func_78()//Position - 0x535E
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		return Global_161D2.f_2C == 1;
	}
	return 0;
}

bool func_79()//Position - 0x537A
{
	return Global_CF9C;
}

int func_80(int iParam0)//Position - 0x5385
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, true, 0) && unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
	{
		return 5;
	}
	vVar0 = { func_89(unk_0xB5CEFD608600A09F()) };
	if (Global_19773[10 /*10*/].f_1)
	{
		if (SYSTEM::VDIST2(vVar0, 241.9889f, 360.4732f, 105.6166f) < 2f)
		{
			return 3;
		}
	}
	if (func_88(2) && !func_88(17))
	{
		if (SYSTEM::VDIST2(vVar0, -59.96629f, -1099.005f, 25.52088f) < 8f)
		{
			if (unk_0x7352105EC4D7541F(vVar0, -61.26628f, -1096.505f, 25.52088f, -58.43333f, -1101.147f, 29.24937f, 1.25f, 0, 1))
			{
				return 9;
			}
		}
	}
	if (SYSTEM::VDIST2(vVar0, -740.9346f, 5599.426f, 40.71515f) < 11f)
	{
		if (unk_0x7352105EC4D7541F(vVar0, -746.1299f, 5599.226f, 40.47561f, -737.632f, 5599.364f, 44.1693f, 3.375f, 0, 1))
		{
			return 9;
		}
	}
	if (SYSTEM::VDIST2(vVar0, -740.9346f, 5590.426f, 40.71515f) < 11f)
	{
		if (unk_0x7352105EC4D7541F(vVar0, -746.1299f, 5590.667f, 40.4392f, -737.6585f, 5590.592f, 44.52327f, 3.375f, 0, 1))
		{
			return 9;
		}
	}
	if (SYSTEM::VDIST2(vVar0, 446.3265f, 5566.35f, 780.2151f) < 11f)
	{
		if (unk_0x7352105EC4D7541F(vVar0, 451.1661f, 5566.451f, 780.1703f, 442.5211f, 5566.374f, 783.9819f, 3.375f, 0, 1))
		{
			return 9;
		}
	}
	if (SYSTEM::VDIST2(vVar0, 446.3265f, 5577.35f, 780.2151f) < 11f)
	{
		if (unk_0x7352105EC4D7541F(vVar0, 451.1661f, 5577.867f, 780.1899f, 442.5765f, 5577.579f, 783.9086f, 3.375f, 0, 1))
		{
			return 9;
		}
	}
	if (SYSTEM::VDIST2(vVar0, 128.83f, -1297.98f, 29.3f) < 2f || SYSTEM::VDIST2(vVar0, 95.07f, -1284.98f, 29.3f) < 2f)
	{
		return 9;
	}
	if (SYSTEM::VDIST2(vVar0, 1081.951f, -1976.762f, 30.47218f) < 6f && func_87(26))
	{
		return 9;
	}
	if (!iLocal_27)
	{
		func_81(iParam0);
	}
	iVar1 = unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA());
	if (iVar1 == 0)
	{
		return 0;
	}
	else if ((iVar1 == Global_196F7 || iVar1 == Global_196F8) || iVar1 == Global_196F9)
	{
		return 9;
	}
	else if (iVar1 == Global_196EE)
	{
		return 9;
	}
	else if (iVar1 == Global_196EF)
	{
		return 9;
	}
	else if (iVar1 == Global_196F2)
	{
		return 9;
	}
	else if (iVar1 == Global_196F1)
	{
		return 9;
	}
	else if (iVar1 == Global_196F3)
	{
		return 9;
	}
	else if (iVar1 == Global_196F4)
	{
		return 9;
	}
	else if (iVar1 == Global_196F5)
	{
		return 9;
	}
	else if (iVar1 == Global_196F6)
	{
		return 9;
	}
	else if (iVar1 == Global_196FA)
	{
		return 9;
	}
	else if (iVar1 == Global_196FB)
	{
		return 9;
	}
	else if (iVar1 == Global_196FC)
	{
		return 9;
	}
	else if (iVar1 == Global_196FD)
	{
		return 9;
	}
	else if (iVar1 == Global_196FE)
	{
		return 9;
	}
	else if ((iVar1 == Global_196FF || iVar1 == Global_19700) && func_88(67))
	{
		return 9;
	}
	iVar2 = 0;
	while (iVar2 <= (19 - 1))
	{
		if (iVar1 == Global_19701[iVar2])
		{
			return 9;
		}
		iVar2++;
	}
	return 0;
}

void func_81(var uParam0)//Position - 0x57AD
{
	int iVar0;
	
	uParam0 = uParam0;
	func_84(24, &Global_196EE);
	func_84(47, &Global_196EF);
	func_84(10, &Global_196F7);
	func_84(9, &Global_196F8);
	func_84(8, &Global_196F9);
	func_84(21, &Global_196FA);
	func_84(11, &Global_196FB);
	func_84(18, &Global_196FF);
	func_84(19, &Global_19700);
	Global_196F2 = unk_0x5E29F9399E0829A3(-76.6618f, 6222.191f, 32.2412f, "V_factory1");
	Global_196F1 = unk_0x5E29F9399E0829A3(-98.2637f, 6210.022f, 31.924f, "V_factory2");
	Global_196F3 = unk_0x5E29F9399E0829A3(-115.8956f, 6179.749f, 32.4102f, "V_factory3");
	Global_196F4 = unk_0x5E29F9399E0829A3(-149.8199f, 6144.978f, 31.3353f, "V_factory4");
	Global_196F5 = unk_0x5E29F9399E0829A3(16.3605f, -1100.259f, 28.797f, "v_gun");
	Global_196F6 = unk_0x5E29F9399E0829A3(125.1948f, -1284.13f, 28.2847f, "v_strip3");
	Global_196FC = unk_0x5E29F9399E0829A3(-545.5717f, 1987.145f, 126.0262f, "cs6_08_mine_int");
	Global_196FD = unk_0x5E29F9399E0829A3(2330.598f, 2571.935f, 45.6802f, "ch3_01_trlr_int");
	Global_196FE = unk_0x5E29F9399E0829A3(-54.7f, -1092.7f, 26.4f, "v_carshowroom");
	iVar0 = 0;
	while (iVar0 <= (19 - 1))
	{
		Global_19701[iVar0] = unk_0x9911032C958CE1B0(func_82(iVar0));
		iVar0++;
	}
	iLocal_27 = 1;
}

Vector3 func_82(int iParam0)//Position - 0x5939
{
	if (!func_83(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return -711.8212f, -915.9057f, 18.2377f;
		
		case 1:
			return -52.7185f, -1756.175f, 28.4432f;
		
		case 2:
			return 1159.441f, -325.6666f, 68.2272f;
		
		case 3:
			return 1699.429f, 4928.642f, 41.0858f;
		
		case 4:
			return -1822.926f, 788.9531f, 137.212f;
		
		case 5:
			return 1166.427f, 2703.528f, 37.1574f;
		
		case 6:
			return -2973.414f, 390.6885f, 14.0433f;
		
		case 7:
			return -1225.86f, -903.5782f, 11.3263f;
		
		case 8:
			return 1140.659f, -981.0806f, 45.4158f;
		
		case 9:
			return -1490.275f, -382.8514f, 39.1634f;
		
		case 10:
			return -3240.719f, 1004.508f, 11.8468f;
		
		case 11:
			return -3039.249f, 589.3831f, 6.9251f;
		
		case 12:
			return 544.4275f, 2672.061f, 41.1726f;
		
		case 13:
			return 2558.754f, 385.599f, 107.6391f;
		
		case 14:
			return 2681.511f, 3282.763f, 54.2573f;
		
		case 15:
			return 1731.153f, 6411.633f, 34.0373f;
		
		case 16:
			return 1964.931f, 3741.207f, 31.3599f;
		
		case 17:
			return 29.0707f, -1348.773f, 28.5101f;
		
		case 18:
			return 376.8503f, 323.9777f, 102.5825f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_83(int iParam0)//Position - 0x5B23
{
	if (iParam0 >= 19)
	{
		return 0;
	}
	else if (iParam0 <= -1)
	{
		return 0;
	}
	return 1;
}

var func_84(int iParam0, var uParam1)//Position - 0x5B44
{
	struct<5> Var0;
	
	Var0 = { func_85(iParam0) };
	*uParam1 = unk_0x5E29F9399E0829A3(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_85(int iParam0)//Position - 0x5B69
{
	struct<5> Var0;
	vector3 vVar1;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -447.4833f, 280.3197f, 77.5215f };
			Var0.f_3 = "v_comedy";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 1:
			Var0 = { -1906.786f, -573.7576f, 19.0773f };
			Var0.f_3 = "v_psycheoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 2:
			Var0 = { 1399.973f, 1148.756f, 113.3336f };
			Var0.f_3 = "v_ranch";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 3:
			Var0 = { -598.6379f, -1608.399f, 26.0108f };
			Var0.f_3 = "v_recycle";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 4:
			Var0 = { -556.5089f, 286.3181f, 81.1763f };
			Var0.f_3 = "v_rockclub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 5:
			Var0 = { -111.7116f, -11.912f, 69.5196f };
			Var0.f_3 = "v_janitor";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 6:
			Var0 = { 1274.934f, -1714.726f, 53.7715f };
			Var0.f_3 = "v_lesters";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 7:
			Var0 = { 147.433f, -2201.37f, 3.688f };
			Var0.f_3 = "v_torture";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 8:
			Var0 = { 320.9934f, 265.2515f, 82.1221f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Vinewood)";
			break;
		
		case 9:
			Var0 = { -1425.564f, -244.3f, 15.8053f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Morningwood)";
			break;
		
		case 10:
			Var0 = { 377.153f, -717.567f, 10.0536f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Downtown)";
			break;
		
		case 11:
			Var0 = { 245.1564f, 370.211f, 104.7382f };
			Var0.f_3 = "v_epsilonism";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 12:
			Var0 = { 173.1176f, -1003.279f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 13:
			Var0 = { 199.9715f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 14:
			Var0 = { 228.6058f, -992.0537f, -99.9999f };
			Var0.f_3 = "v_garagel";
			Var0.f_3 = "hei_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 15:
			Var0 = { 1854.254f, 3686.739f, 33.2671f };
			Var0.f_3 = "v_sheriff";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 16:
			Var0 = { -444.8907f, 6013.587f, 30.7164f };
			Var0.f_3 = "v_sheriff2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 17:
			Var0 = { 3522.845f, 3707.965f, 19.9918f };
			Var0.f_3 = "v_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 18:
			Var0 = { 717.2994f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 19:
			Var0 = { 717.299f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweatempty";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 20:
			Var0 = { 2449.785f, 4983.825f, 45.8106f };
			Var0.f_3 = "v_farmhouse";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1087.195f, -1988.445f, 28.649f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 23:
			Var0 = { 982.233f, -2160.382f, 28.4761f };
			Var0.f_3 = "v_abattoir";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 21:
			Var0 = { 479.0568f, -1316.825f, 28.2038f };
			Var0.f_3 = "v_chopshop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 24:
			Var0 = { -1005.663f, -478.3461f, 49.0265f };
			Var0.f_3 = "v_58_sol_office";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 25:
			vVar1 = { func_86(1, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			vVar1 = { func_86(2, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			vVar1 = { func_86(3, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			vVar1 = { func_86(4, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			vVar1 = { func_86(5, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			vVar1 = { func_86(6, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			vVar1 = { func_86(7, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 32:
			Var0 = { Global_100449[34 /*1951*/].f_92.f_5ED + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 33:
			vVar1 = { func_86(35, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			vVar1 = { func_86(36, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			vVar1 = { func_86(37, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			vVar1 = { func_86(38, 0) };
			Var0 = { -20.1f, -580.8f, 91.3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			vVar1 = { func_86(39, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			vVar1 = { func_86(40, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			vVar1 = { func_86(41, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			vVar1 = { func_86(42, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			vVar1 = { func_86(43, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (17)";
			break;
		
		case 42:
			Var0 = { -470.3754f, -698.5207f, 51.5276f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (18)";
			break;
		
		case 43:
			Var0 = { -460.6133f, -691.5562f, 69.9067f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (19)";
			break;
		
		case 44:
			Var0 = { 300.633f, -997.4288f, -99.9727f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (20)";
			break;
		
		case 49:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (1)";
			break;
		
		case 50:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (2)";
			break;
		
		case 51:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (3)";
			break;
		
		case 52:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (4)";
			break;
		
		case 53:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (5)";
			break;
		
		case 54:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (7)";
			break;
		
		case 55:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (8)";
			break;
		
		case 56:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (10)";
			break;
		
		case 57:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (12)";
			break;
		
		case 58:
			Var0 = { 374.2012f, 416.9688f, 142.5991f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (13)";
			break;
		
		case 45:
			Var0 = { -16.29585f, -684.0385f, 33.50832f };
			Var0.f_3 = "dt1_03_carpark";
			Var0.f_4 = "dt1_03_carpark";
			break;
		
		case 46:
			Var0 = { 341.1f, -1000f, -99.2f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = "v_apart_midspaz";
			break;
		
		case 47:
			Var0 = { 199.9716f, -1018.954f, -100f };
			Var0.f_3 = "v_garagem_sp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 48:
			Var0 = { -1388.001f, -618.4197f, 30.8196f };
			Var0.f_3 = "v_bahama";
			Var0.f_4 = Var0.f_3;
			break;
	}
	switch (iParam0)
	{
		case 59:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 60:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 61:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 62:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 63:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 64:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 65:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 66:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 67:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 68:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 69:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 70:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 71:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 72:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 73:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 74:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 75:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 76:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 77:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 78:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 79:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 80:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 81:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 82:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 83:
			vVar1 = { func_86(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 84:
			vVar1 = { func_86(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 85:
			vVar1 = { func_86(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 86:
			vVar1 = { func_86(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 87:
			vVar1 = { func_86(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 88:
			vVar1 = { func_86(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 89:
			vVar1 = { func_86(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 90:
			vVar1 = { func_86(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 91:
			vVar1 = { func_86(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 92:
			vVar1 = { func_86(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 93:
			vVar1 = { func_86(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 94:
			vVar1 = { func_86(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 95:
			vVar1 = { func_86(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 96:
			vVar1 = { func_86(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 97:
			vVar1 = { func_86(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 98:
			vVar1 = { func_86(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 99:
			vVar1 = { func_86(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 100:
			vVar1 = { func_86(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 101:
			vVar1 = { func_86(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 102:
			vVar1 = { func_86(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 103:
			vVar1 = { func_86(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 104:
			vVar1 = { func_86(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 105:
			vVar1 = { func_86(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 106:
			vVar1 = { func_86(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 107:
			vVar1 = { func_86(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 108:
			vVar1 = { func_86(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 109:
			vVar1 = { func_86(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 110:
			vVar1 = { func_86(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 111:
			vVar1 = { func_86(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 112:
			vVar1 = { func_86(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 113:
			vVar1 = { func_86(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 114:
			vVar1 = { func_86(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 115:
			vVar1 = { func_86(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 116:
			vVar1 = { func_86(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 117:
			vVar1 = { func_86(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 118:
			vVar1 = { func_86(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 119:
			vVar1 = { func_86(91, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 120:
			vVar1 = { func_86(97, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 121:
			vVar1 = { func_86(103, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 122:
			vVar1 = { func_86(104, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 123:
			vVar1 = { func_86(105, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 124:
			vVar1 = { func_86(106, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 125:
			vVar1 = { func_86(107, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 126:
			vVar1 = { func_86(108, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 127:
			vVar1 = { func_86(109, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 128:
			vVar1 = { func_86(110, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 129:
			vVar1 = { func_86(111, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 130:
			vVar1 = { func_86(112, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 131:
			vVar1 = { func_86(113, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 132:
			vVar1 = { func_86(114, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 133:
			vVar1 = { func_86(103, 1) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 134:
			vVar1 = { func_86(106, 1) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 135:
			vVar1 = { func_86(109, 1) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 136:
			vVar1 = { func_86(112, 1) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 137:
			Var0 = { 938.3077f, -3196.112f, -100f };
			Var0.f_3 = "gr_grdlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 138:
			Var0 = { 512.5f, 4852f, -62.6f };
			Var0.f_3 = "xm_x17dlc_int_sub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 139:
			Var0 = { 2047f, 2942f, -61.9f };
			Var0.f_3 = "xm_x17dlc_int_facility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 140:
			Var0 = { -1047.6f, -232.3503f, 38.0135f };
			Var0.f_3 = "v_faceoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1100f, -2004f, 37f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 141:
			Var0 = { 361f, 6306f, -159f };
			Var0.f_3 = "xm_x17dlc_int_silo_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 142:
			Var0 = { 305f, 6298f, -160f };
			Var0.f_3 = "xm_x17dlc_int_silo_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 143:
			Var0 = { 244f, 6163f, -159f };
			Var0.f_3 = "xm_x17dlc_int_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 144:
			Var0 = { 2168f, 2920f, -84f };
			Var0.f_3 = "xm_x17dlc_int_facility2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 145:
			Var0 = { 446f, 5922f, -158f };
			Var0.f_3 = "xm_x17dlc_int_bse_tun";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 146:
			Var0 = { 252f, 5972f, -156f };
			Var0.f_3 = "xm_x17dlc_int_base_loop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 147:
			Var0 = { 682f, 5959f, -152f };
			Var0.f_3 = "xm_x17dlc_int_base_ent";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 148:
			Var0 = { 551f, 5939f, -158f };
			Var0.f_3 = "xm_x17dlc_int_base";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 149:
			Var0 = { 520.0001f, 4750f, -70f };
			Var0.f_3 = "xm_x17dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 150:
			Var0 = { -1266.802f, -3014.849f, -49.4903f };
			Var0.f_3 = "sm_smugdlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 151:
			Var0 = { 974.9203f, -3000.065f, -40.647f };
			Var0.f_3 = "imp_impexp_intwaremed";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 152:
			Var0 = { 969.5376f, -3000.411f, -48.647f };
			Var0.f_3 = "imp_impexp_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 153:
			Var0 = { 1094.997f, -3100.012f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_s_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 154:
			Var0 = { 1059.995f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_m_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 155:
			Var0 = { 1010.008f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_l_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 156:
			Var0 = { 372.6707f, 405.5235f, 144.5326f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 157:
			Var0 = { -282.0588f, -955.17f, 85.3036f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 158:
			Var0 = { 342.7946f, -997.4225f, -99.7444f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 159:
			Var0 = { 260.3268f, -997.4298f, -100.0086f };
			Var0.f_3 = "v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 160:
			Var0 = { 108.2369f, -753.5364f, 233.1523f };
			Var0.f_3 = "v_fib01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 161:
			Var0 = { 135.3226f, -746.3677f, 253.1523f };
			Var0.f_3 = "v_fib03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 162:
			Var0 = { 108.2572f, -753.5342f, 44.7548f };
			Var0.f_3 = "v_office_lobby";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 163:
			Var0 = { 228.6161f, -992.053f, -99.9999f };
			Var0.f_3 = "heist_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 164:
			Var0 = { 199.9716f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 165:
			Var0 = { 173.1165f, -1003.28f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 166:
			Var0 = { 575f, 4750f, -60f };
			Var0.f_3 = "xm_v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 167:
			Var0 = { 600f, 4750f, -60f };
			Var0.f_3 = "xm_v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 168:
			Var0 = { 630f, 4750f, -60f };
			Var0.f_3 = "xm_v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 169:
			Var0 = { 1257f, 4796.7f, -39.1f };
			Var0.f_3 = "xm_x17dlc_int_tun_entry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 170:
			Var0 = { 694.4f, 5898.9f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 171:
			Var0 = { 1121.8f, 5516.3f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 172:
			Var0 = { 1279.6f, 5233.2f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 173:
			Var0 = { 1158.6f, 5467.1f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 174:
			Var0 = { 705.9f, 5838.5f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 175:
			Var0 = { 1316.5f, 5184f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 176:
			Var0 = { 1248f, 5276.1f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 177:
			Var0 = { 1090.2f, 5559.2f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 178:
			Var0 = { 1261f, 4808.6f, -39.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 179:
			Var0 = { 721.8f, 5781.4f, -146.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 180:
			Var0 = { 780.8f, 5703.4f, -136.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 181:
			Var0 = { 868.1f, 5659.2f, -126.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 182:
			Var0 = { 1218.2f, 5321.2f, -85.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 183:
			Var0 = { 1278.5f, 4859.7f, -44.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 184:
			Var0 = { 1187.2f, 5419.8f, -96.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 185:
			Var0 = { 1344.7f, 5136.4f, -75.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 186:
			Var0 = { 1363.4f, 5039.5f, -65.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 187:
			Var0 = { 1049.3f, 5602.1f, -107.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 188:
			Var0 = { 1337.8f, 4944.3f, -55.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 189:
			Var0 = { 961.5f, 5646.9f, -117.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 190:
			Var0 = { 345.0041f, 4842.001f, -59.9997f };
			Var0.f_3 = "xm_x17dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 191:
			Var0 = { 279.9322f, -1337.49f, 23.7419f };
			Var0.f_3 = "v_coroner";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 192:
			Var0 = { -1604.664f, -3012.583f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_01_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 193:
			Var0 = { -1505.783f, -3012.587f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_02_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 194:
			Var0 = { -630.4205f, -236.7843f, 37.057f };
			Var0.f_3 = "V_JEWEL2";
			Var0.f_4 = Var0.f_3;
			break;
		
		default:
			break;
	}
	return Var0;
}

struct<6> func_86(int iParam0, bool bParam1)//Position - 0x7E5B
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case -1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 2:
			Var0 = { -761.0982f, 317.6259f, 169.5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { -761.1888f, 317.6295f, 216.0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { -795.3856f, 340.0188f, 152.7941f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 61:
			Var0 = { -778.5056f, 332.3779f, 212.1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 5:
			Var0 = { -258.1807f, -950.6853f, 70.0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 6:
			Var0 = { -285.0051f, -957.6552f, 85.3035f };
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		
		case 7:
			Var0 = { -1471.882f, -530.7484f, 62.34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 34:
			Var0 = { -1471.882f, -530.7484f, 49.72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 62:
			Var0 = { -1463.15f, -540.2369f, 74.2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 35:
			Var0 = { -885.3702f, -451.4775f, 119.327f };
			Var0.f_3 = { 0f, 0f, 27.55617f };
			break;
		
		case 36:
			Var0 = { -913.0385f, -438.4284f, 114.3997f };
			Var0.f_3 = { 0f, 0f, -153.3093f };
			break;
		
		case 37:
			Var0 = { -892.5499f, -430.4789f, 88.25368f };
			Var0.f_3 = { 0f, 0f, 116.9193f };
			break;
		
		case 38:
			Var0 = { -35.0462f, -576.317f, 82.90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 39:
			Var0 = { -10.3788f, -590.7431f, 93.02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 65:
			Var0 = { -22.2487f, -589.1461f, 80.2305f };
			Var0.f_3 = { 0f, 0f, 69.88f };
			break;
		
		case 40:
			Var0 = { -900.6311f, -376.7462f, 78.27306f };
			Var0.f_3 = { 0f, 0f, 26.92611f };
			break;
		
		case 41:
			Var0 = { -929.483f, -374.5104f, 102.2329f };
			Var0.f_3 = { 0f, 0f, -152.5531f };
			break;
		
		case 63:
			Var0 = { -914.4202f, -375.8189f, 114.4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 42:
			Var0 = { -617.1647f, 64.6042f, 100.8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 43:
			Var0 = { -584.2015f, 42.7133f, 86.4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { -609.5665f, 50.2203f, 98.3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 73:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		
		case 74:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = { 0f, 0f, -63.5f };
			break;
		
		case 75:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = { 0f, 0f, -71.5f };
			break;
		
		case 76:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = { 0f, 0f, 40.5f };
			break;
		
		case 77:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		
		case 78:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = { 0f, 0f, -14.5f };
			break;
		
		case 79:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		
		case 80:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = { 0f, 0f, 4.5f };
			break;
		
		case 81:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 82:
			Var0 = { 374.2012f, 416.9688f, 142.6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		
		case 83:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 84:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 85:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 86:
			Var0 = { -1573.098f, -4085.806f, 9.7851f };
			Var0.f_3 = { 0f, 0f, 162f };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342.8157f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260.3297f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 87:
			Var0 = { -1572.187f, -570.8315f, 109.9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		
		case 88:
			Var0 = { -1383.954f, -476.7112f, 73.507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		
		case 89:
			Var0 = { -138.0029f, -629.739f, 170.2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		
		case 90:
			Var0 = { -74.8895f, -817.6883f, 244.8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			Var0 = { 1100.764f, -3159.384f, -34.9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var0 = { 1005.806f, -3157.67f, -36.0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 103:
			if (!bParam1)
			{
				Var0 = { -1576.571f, -569.7595f, 85.5f };
				Var0.f_3 = { 0f, 0f, 36.1f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 104:
			if (!bParam1)
			{
				Var0 = { -1571.254f, -566.5865f, 85.5f };
				Var0.f_3 = { 0f, 0f, -53.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 105:
			if (!bParam1)
			{
				Var0 = { -1568.098f, -571.9171f, 85.5f };
				Var0.f_3 = { 0f, 0f, -143.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 106:
			if (!bParam1)
			{
				Var0 = { -1384.518f, -475.8657f, 56.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 107:
			if (!bParam1)
			{
				Var0 = { -1384.538f, -475.8829f, 48.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 108:
			if (!bParam1)
			{
				Var0 = { -1378.994f, -477.2481f, 56.1f };
				Var0.f_3 = { 0f, 0f, -81.1f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 109:
			if (!bParam1)
			{
				Var0 = { -186.5683f, -576.4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96.16f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 110:
			if (!bParam1)
			{
				Var0 = { -113.886f, -564.3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110.96f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 111:
			if (!bParam1)
			{
				Var0 = { -134.6568f, -635.1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9.04f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 112:
			if (!bParam1)
			{
				Var0 = { -79.0479f, -822.6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 113:
			if (!bParam1)
			{
				Var0 = { -70.3086f, -819.5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 114:
			if (!bParam1)
			{
				Var0 = { -79.9861f, -818.425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}
	return Var0;
}

int func_87(int iParam0)//Position - 0x8BAF
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

int func_88(int iParam0)//Position - 0x8C17
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_19B04.f_2360.f_14A[iParam0 /*6*/];
}

Vector3 func_89(int iParam0)//Position - 0x8C43
{
	return unk_0x541C2AEF053615BC(unk_0xA95CF30C72EB526E(iParam0), false);
}

int func_90()//Position - 0x8C56
{
	if (unk_0xB731B8C5BCE89836(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_91()//Position - 0x8C70
{
	return unk_0x105601648511CC64() <= Global_43C1.f_1671 + 100;
}

bool func_92()//Position - 0x8C85
{
	return unk_0xFA30DFD0084E92FE(Global_1163A, 9);
}

bool func_93()//Position - 0x8C97
{
	return unk_0xFA30DFD0084E92FE(Global_1163A, 8);
}

int func_94()//Position - 0x8CA9
{
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (((((((((((((((unk_0x96044E39418AAF17(unk_0xBC25C936A095B5BA(), "misshair_shop@barbers", "player_intro", 3) || unk_0x96044E39418AAF17(unk_0xBC25C936A095B5BA(), "misshair_shop@barbers", "player_base", 3)) || unk_0x96044E39418AAF17(unk_0xBC25C936A095B5BA(), "misshair_shop@barbers", "player_enterchair", 3)) || unk_0x96044E39418AAF17(unk_0xBC25C936A095B5BA(), "misshair_shop@barbers", "player_exitchair", 3)) || unk_0x96044E39418AAF17(unk_0xBC25C936A095B5BA(), "misshair_shop@barbers", "player_idle_a", 3)) || unk_0x96044E39418AAF17(unk_0xBC25C936A095B5BA(), "misshair_shop@barbers", "player_idle_b", 3)) || unk_0x96044E39418AAF17(unk_0xBC25C936A095B5BA(), "misshair_shop@barbers", "player_idle_c", 3)) || unk_0x96044E39418AAF17(unk_0xBC25C936A095B5BA(), "misshair_shop@barbers", "player_idle_d", 3)) || unk_0x96044E39418AAF17(unk_0xBC25C936A095B5BA(), "misshair_shop@hair_dressers", "player_intro", 3)) || unk_0x96044E39418AAF17(unk_0xBC25C936A095B5BA(), "misshair_shop@hair_dressers", "player_base", 3)) || unk_0x96044E39418AAF17(unk_0xBC25C936A095B5BA(), "misshair_shop@hair_dressers", "player_enterchair", 3)) || unk_0x96044E39418AAF17(unk_0xBC25C936A095B5BA(), "misshair_shop@hair_dressers", "player_exitchair", 3)) || unk_0x96044E39418AAF17(unk_0xBC25C936A095B5BA(), "misshair_shop@hair_dressers", "player_idle_a", 3)) || unk_0x96044E39418AAF17(unk_0xBC25C936A095B5BA(), "misshair_shop@hair_dressers", "player_idle_b", 3)) || unk_0x96044E39418AAF17(unk_0xBC25C936A095B5BA(), "misshair_shop@hair_dressers", "player_idle_c", 3)) || unk_0x96044E39418AAF17(unk_0xBC25C936A095B5BA(), "misshair_shop@hair_dressers", "player_idle_d", 3))
		{
			return 1;
		}
	}
	return 0;
}

int func_95()//Position - 0x8E3E
{
	int iVar0;
	
	if (func_101())
	{
		iVar0 = 0;
		while (iVar0 < 49)
		{
			if (func_96(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_96(int iParam0)//Position - 0x8E6E
{
	return func_97(iParam0, 20, 1);
}

int func_97(int iParam0, int iParam1, bool bParam2)//Position - 0x8E7F
{
	if (bParam2)
	{
		return unk_0xFA30DFD0084E92FE(Global_16B4F.f_531[iParam0], iParam1);
	}
	else if (unk_0x7AF0088ABFA713B6())
	{
		if (func_99() == 0)
		{
			return unk_0xFA30DFD0084E92FE(func_109(func_98(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xFA30DFD0084E92FE(Global_19B04.f_29C[iParam0], iParam1);
	}
	return 0;
}

int func_98(int iParam0)//Position - 0x8EDF
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

int func_99()//Position - 0x91D3
{
	return Global_62BD;
}

bool func_100()//Position - 0x91DE
{
	return Global_16B4F.f_142 > 0;
}

bool func_101()//Position - 0x91EF
{
	return Global_16B4F.f_141 > 0;
}

bool func_102(var uParam0, int iParam1)//Position - 0x9200
{
	return (uParam0 && iParam1) != 0;
}

bool func_103(bool bParam0)//Position - 0x920F
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_1163A, 0);
}

bool func_104()//Position - 0x923A
{
	return Global_16B42.f_1;
}

bool func_105()//Position - 0x9248
{
	return Global_1164D;
}

int func_106()//Position - 0x9254
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

int func_107()//Position - 0x927E
{
	if (Global_8C41 == 15)
	{
		return 0;
	}
	return 1;
}

int func_108(int iParam0)//Position - 0x9293
{
	if ((Global_4212 || Global_4211) || Global_4213)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return 0;
		}
	}
	if (Global_75[iParam0 /*10*/].f_8 != 144)
	{
		if (Global_389D.f_1 == 10)
		{
			if (Global_68E == iParam0)
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
	return 0;
}

int func_109(int iParam0, int iParam1, int iParam2)//Position - 0x92F7
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_110(iParam1)];
	if (unk_0x6CB99B97664C3727(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_110(var uParam0)//Position - 0x9329
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_111();
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

var func_111()//Position - 0x935D
{
	return Global_1407E0;
}

void func_112()//Position - 0x9369
{
	if (Global_11542 == 0)
	{
		Global_942[14 /*15*/].f_4 = -99;
		Global_942[4 /*15*/].f_4 = -99;
		if (Global_25805E)
		{
			if (func_28(14))
			{
				func_113(2, "CELL_2", 2, "appInternet", 6, 1, 1, 0, 0);
				func_113(14, "CELL_29", 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
			else
			{
				func_113(14, "CELL_29", 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
		}
		else
		{
			func_113(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}
}

void func_113(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x93F7
{
	StringCopy(&(Global_942[iParam0 /*15*/]), sParam1, 16);
	Global_942[iParam0 /*15*/].f_4 = iParam2;
	StringCopy(&(Global_942[iParam0 /*15*/].f_5), sParam3, 16);
	Global_942[iParam0 /*15*/].f_9 = unk_0x56BEECB328B6D29D(sParam3);
	Global_942[iParam0 /*15*/].f_A = iParam4;
	Global_942[iParam0 /*15*/].f_B = iParam5;
	Global_942[iParam0 /*15*/].f_C = iParam6;
	Global_942[iParam0 /*15*/].f_D = iParam7;
	Global_942[iParam0 /*15*/].f_E = iParam8;
	if (Global_942[iParam0 /*15*/].f_C == 0)
	{
		Global_942[iParam0 /*15*/].f_C = 0;
	}
	if (Global_942[iParam0 /*15*/].f_D == 0)
	{
		Global_942[iParam0 /*15*/].f_D = 0;
	}
	if (Global_942[iParam0 /*15*/].f_E == 0)
	{
		Global_942[iParam0 /*15*/].f_E = 0;
	}
}

void func_114()//Position - 0x94AD
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 34)
	{
		Global_942[iVar0 /*15*/].f_4 = -99;
		iVar0++;
	}
	if (Global_11542 == 0)
	{
		iVar1 = 0;
		while (iVar2 < 155)
		{
			if (Global_19B04.f_6D75[iVar2 /*29*/].f_13[Global_389D] == 1)
			{
				iVar1 = 1;
			}
			iVar2++;
		}
		func_113(7, "CELL_5", 0, "appEmail", 4, 1, 1, 0, 0);
		func_113(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_113(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		if ((Global_8C41 == 15 && func_103(0) == 0) && Global_940 == 0)
		{
			func_113(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_3946 = 0;
			Global_941 = 255;
		}
		else
		{
			func_113(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_3946 = 1;
			Global_941 = 42;
		}
		if (iVar1 == 1)
		{
			func_113(0, "CELL_0", 4, "appContacts", 27, 1, 1, 0, 0);
		}
		else
		{
			func_113(0, "CELL_0", 4, "appContacts", 5, 1, 1, 0, 0);
		}
		func_113(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_113(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_113(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		if (Global_19B04.f_36C6.f_59 == 1)
		{
			func_113(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		if (Global_19B04.f_36C6.f_58 == 1)
		{
			func_113(16, "CELL_25", 0, "appContacts", 40, 2, 1, 0, 0);
		}
		func_113(25, "CELL_14", -99, "appContacts", 17, 2, 1, 0, 0);
		func_113(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_113(11, "CELL_14", -99, "appContacts", 8, 2, 1, 0, 0);
		func_113(27, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_113(28, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_113(29, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
		func_113(30, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_113(31, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_113(32, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
	}
	else
	{
		func_113(7, "CELL_5", 0, "appMPEmail", 4, 1, 1, 0, 0);
		func_113(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_113(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_113(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_113(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		func_113(14, "CELL_29", 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_113(0, "CELL_0", 2, "appContacts", 5, 1, 1, 0, 0);
		func_113(21, "JIPMP_QJ", 3, "AppJIPMP", 14, 1, 1, 0, 0);
		if (unk_0xFA30DFD0084E92FE(Global_411DCA, 4) == 1)
		{
			func_113(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		func_113(13, "CELL_35", -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_113(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_113(15, "CELL_18", -99, "appContacts", 8, 1, 1, 0, 0);
		func_113(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_113(5, "CELL_4", -99, "appContacts", 12, 2, 1, 0, 0);
		func_113(23, "CELL_15", 0, "appContacts", 17, 2, 1, 0, 0);
		func_113(24, "CELL_15", 1, "appContacts", 17, 2, 1, 0, 0);
		func_113(25, "CELL_15", 2, "appContacts", 17, 2, 1, 0, 0);
		func_113(26, "CELL_15", 3, "appContacts", 17, 2, 1, 0, 0);
		func_113(27, "CELL_15", 4, "appContacts", 17, 2, 1, 0, 0);
		func_113(28, "CELL_15", 5, "appContacts", 17, 2, 1, 0, 0);
		func_113(29, "CELL_15", 6, "appContacts", 17, 2, 1, 0, 0);
		func_113(30, "CELL_15", 7, "appContacts", 17, 2, 1, 0, 0);
		func_113(31, "CELL_15", 8, "appContacts", 17, 2, 1, 0, 0);
		func_113(32, "CELL_15", 9, "appContacts", 17, 2, 1, 0, 0);
		func_113(33, "CELL_15", 10, "appContacts", 17, 2, 1, 0, 0);
		if (!unk_0xFA30DFD0084E92FE(Global_411DCA, 4) == 1)
		{
			if (Global_180414)
			{
				func_113(23, "CELL_CIRCBREAK", 8, "AppVLSI", 54, 1, 1, 0, 0);
			}
			else if (unk_0xFA30DFD0084E92FE(Global_411DCA, 20) == 1)
			{
				func_113(23, "CELL_SIGHTS", 8, "AppSettings", 59, 1, 1, 0, 0);
			}
			else if (unk_0xFA30DFD0084E92FE(Global_411DCA, 22) == 1)
			{
				func_113(23, "CELL_EXTRACT", 8, "AppExtraction", 58, 1, 1, 0, 0);
			}
			else if (unk_0xFA30DFD0084E92FE(Global_411DCA, 26) == 1)
			{
				func_113(23, "CELL_SECHACK", 8, "AppSecuroHack", 57, 1, 1, 0, 0);
			}
		}
		if ((((unk_0xFA30DFD0084E92FE(Global_411DCA, 4) == 0 && Global_180414 == 0) && unk_0xFA30DFD0084E92FE(Global_411DCA, 20) == 0) && unk_0xFA30DFD0084E92FE(Global_411DCA, 22) == 0) && unk_0xFA30DFD0084E92FE(Global_411DCA, 26) == 0)
		{
			func_113(23, "CELL_BOSSAGE", 8, "appMPBossAgency", 57, 1, 1, 0, 0);
		}
	}
}

void func_115()//Position - 0x9A41
{
}

