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
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	vector3 vLocal_38[24] = "";
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	vector3 vLocal_42[24] = "";
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	char cLocal_46[64] = "";
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	vector3 vLocal_55[24] = "";
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	char* sLocal_59 = NULL;
	vector3 vLocal_60[24] = "";
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	char* sLocal_64 = NULL;
	char* sLocal_65 = NULL;
	char* sLocal_66 = NULL;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	vector3 vLocal_70[24] = "";
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	char* sLocal_74 = NULL;
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
	var uLocal_94[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_95[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_96[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_97[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_98 = 0;
	int iLocal_99 = 0;
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
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	iLocal_34 = 5000;
	iLocal_35 = 5000;
	unk_0xC1A27D367CCA8C15();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (unk_0xFA30DFD0084E92FE(Global_93C, 1))
		{
			if (!unk_0xFA30DFD0084E92FE(Global_93B, 20))
			{
				if (unk_0x58E7DDFF8D17A82A())
				{
					if (Global_3891)
					{
						func_106(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
						if (Global_3864)
						{
							func_106(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else
					{
						func_106(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					unk_0x7CB6FD92BE491AD9(&Global_93C, 1);
				}
			}
		}
		if (unk_0xFA30DFD0084E92FE(Global_394A, 0))
		{
			if (!func_105())
			{
				if (!unk_0xFA30DFD0084E92FE(Global_394A, 1))
				{
					unk_0xF0059F27F7BB6680(&Global_394A, 1);
					if (unk_0x7AF0088ABFA713B6())
					{
						iLocal_89 = unk_0xED678C85A82F0AB9();
					}
					else
					{
						iLocal_85 = unk_0x105601648511CC64();
					}
				}
				if (unk_0x7AF0088ABFA713B6())
				{
					iLocal_91 = unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), iLocal_89);
				}
				else
				{
					iLocal_86 = unk_0x105601648511CC64();
					iLocal_91 = (iLocal_86 - iLocal_85);
				}
				if (iLocal_91 < 3000)
				{
					if (func_103(&Global_3B96, &Global_3DFE, &Global_3DAE, Global_3DBB, Global_4191, Global_4192, 0))
					{
						Global_394A = 0;
					}
				}
				else
				{
					Global_394A = 0;
				}
			}
		}
		if (!unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()) && !unk_0xFA30DFD0084E92FE(Global_440000.f_11, 4))
		{
			if (Global_3DB8 != 0)
			{
				if (unk_0xB731B8C5BCE89836(joaat("cellphone_flashhand")) == 0)
				{
					func_102();
				}
			}
		}
		if (iLocal_32 == 1)
		{
			func_98();
		}
		switch (Global_3DB8)
		{
			case 0:
				break;
			
			case 1:
				if (Global_3DBE)
				{
					if (Global_3DB4 == 0)
					{
						func_96();
					}
					else
					{
						func_95();
						func_96();
					}
				}
				else if (Global_3DB4 == 0)
				{
					func_85();
				}
				else
				{
					func_95();
					func_67();
				}
				break;
			
			case 2:
				func_61();
				break;
			
			case 3:
				func_57();
				break;
			
			case 4:
				if (Global_3DBE)
				{
					if (Global_3DC0)
					{
						func_56();
					}
					else
					{
						func_7();
					}
				}
				else
				{
					func_5();
				}
				break;
			
			case 5:
				func_4();
				break;
			
			case 6:
				func_1();
				break;
			
			default:
				break;
		}
	}
}

void func_1()//Position - 0x24E
{
	Global_3DC2 = 0;
	Global_389C = 0;
	func_2();
}

void func_2()//Position - 0x262
{
	Global_280001 = 0;
	Global_280002 = 0;
	Global_3DC3 = 0;
	Global_3DC4 = 0;
	Global_3DC5 = 0;
	Global_3DC6 = 0;
	Global_3AF1.f_A1 = -99;
	Global_3AF1.f_A2 = { 0f, 0f, 0f };
	Global_3DBC = 0;
	Global_3DBD = 0;
	Global_3DE7 = 0;
	Global_3DE8 = 0;
	Global_3DEB = 0;
	Global_3DED = 0;
	Global_3DEC = 0;
	Global_3DEF = 0;
	Global_3DEE = 0;
	Global_41B1 = 0;
	Global_3DF1 = 0;
	if (Global_389D.f_1 == 10)
	{
	}
	else if (unk_0xFA30DFD0084E92FE(Global_93B, 11))
	{
		func_3();
	}
	Global_3DBE = 0;
	Global_3DBF = 0;
	Global_3DC0 = 0;
	Global_3DC1 = 0;
	Global_4197 = 0;
	Global_4196 = 0;
	Global_419D = 0;
	Global_419C = 0;
	Global_4199 = 0;
	Global_4198 = 0;
	Global_419A = 0;
	Global_419B = 0;
	Global_3DB4 = 0;
	Global_3DB5 = 0;
	Global_3DB6 = 0;
	Global_3DB7 = 0;
	Global_3EBA = 0;
	Global_41B5 = 5000;
	Global_388C = 0;
	unk_0x7CB6FD92BE491AD9(&Global_93B, 20);
	unk_0x7CB6FD92BE491AD9(&Global_93B, 24);
	unk_0x7CB6FD92BE491AD9(&Global_93C, 23);
	unk_0x7CB6FD92BE491AD9(&Global_93D, 0);
	unk_0x7CB6FD92BE491AD9(&Global_93C, 9);
	unk_0x7CB6FD92BE491AD9(&Global_93C, 31);
	unk_0x7CB6FD92BE491AD9(&Global_93C, 17);
	unk_0x7CB6FD92BE491AD9(&Global_93D, 5);
	Global_4190 = 0;
	Global_418F = 0;
	if (unk_0xE6711F601F11B66B())
	{
		Global_3DB8 = 4;
	}
	else
	{
		Global_3DB8 = 0;
		Global_41AB = 0;
		Global_41B6 = unk_0x105601648511CC64();
	}
}

void func_3()//Position - 0x398
{
	if (!Global_11542)
	{
		if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			if (unk_0xFA30DFD0084E92FE(Global_93B, 11))
			{
				if (!Global_3864)
				{
					unk_0x419DE08DC356F2FD(unk_0xBC25C936A095B5BA(), 0, 1);
				}
				if (Global_11542)
				{
					unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 244, true);
					unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 243, true);
					unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 242, true);
				}
				unk_0x7CB6FD92BE491AD9(&Global_93B, 11);
			}
		}
	}
}

void func_4()//Position - 0x402
{
	Global_3DC2 = 0;
	Global_389C = 0;
	func_2();
}

void func_5()//Position - 0x416
{
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0xBCBEDE9A08E4ED89(unk_0xBC25C936A095B5BA()))
		{
			if (Global_3DF0 == 0)
			{
				func_6();
			}
		}
	}
	if (iLocal_33 == 1)
	{
		func_6();
		func_6();
	}
	if (Global_4198 == 0)
	{
		if (iLocal_31 == 0)
		{
			if (Global_41AB == 1)
			{
				unk_0xF0734ED8398D268C(1);
				iLocal_31 = 1;
			}
		}
		else if (Global_41AB == 0)
		{
			unk_0x5C7DC611411E2CF9();
			iLocal_31 = 0;
		}
	}
	else if (Global_419A > 0)
	{
		iLocal_37 = unk_0x105601648511CC64();
		if ((iLocal_37 - iLocal_36) > Global_419A)
		{
			unk_0xD02C58A9649E4D42();
			Global_4198 = 0;
		}
	}
	if (Global_41AB == 0)
	{
		if (!unk_0xE6711F601F11B66B())
		{
			Global_3DB8 = 6;
		}
	}
}

void func_6()//Position - 0x4B0
{
	unk_0x5C7DC611411E2CF9();
	Global_41AB = 0;
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x1E08809A5041F85B(false);
		Global_3DB8 = 6;
	}
}

void func_7()//Position - 0x4D1
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x58E7DDFF8D17A82A())
	{
		if (!unk_0xFA30DFD0084E92FE(Global_93B, 11))
		{
			if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
			{
				if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
				{
					if (Global_11542 == 0)
					{
						func_54();
					}
				}
			}
		}
		else if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()))
			{
				if (Global_11542 == 0)
				{
					func_3();
				}
			}
		}
	}
	if (Global_11542 == 0)
	{
		func_53();
	}
	if (iLocal_33 == 1)
	{
		func_50(0);
	}
	if (iLocal_31 == 0)
	{
		if (Global_41AB == 1)
		{
			if (Global_41AC == 1)
			{
				unk_0xF0734ED8398D268C(1);
				iLocal_31 = 1;
				Global_41AC = 0;
			}
		}
	}
	else if (Global_41AB == 0)
	{
		if (Global_41AC == 1)
		{
			unk_0x5C7DC611411E2CF9();
			iLocal_31 = 0;
			Global_41AC = 0;
		}
	}
	if (Global_3DED == 0)
	{
		if (!Global_3DC5)
		{
			if (!unk_0xFA30DFD0084E92FE(Global_93C, 31))
			{
				if (!unk_0xFA30DFD0084E92FE(Global_93C, 27))
				{
					if (func_49())
					{
						if (Global_389D.f_1 > 6)
						{
							unk_0xF0059F27F7BB6680(&Global_93C, 24);
							unk_0xF0059F27F7BB6680(&Global_93C, 27);
							unk_0x7CB6FD92BE491AD9(&Global_93C, 26);
							unk_0x7CB6FD92BE491AD9(&Global_93C, 25);
						}
					}
				}
			}
		}
	}
	if (unk_0x58E7DDFF8D17A82A() == 0 && Global_3DC5 == 0)
	{
		if (Global_3DED == 1)
		{
			unk_0xF0059F27F7BB6680(&Global_93C, 23);
		}
		else
		{
			unk_0x7CB6FD92BE491AD9(&Global_93C, 23);
		}
		if (Global_3DF1)
		{
			if (Global_3DED == 0)
			{
				Global_3C3B = { Global_3DF2 };
				Global_3E04 = { Global_3DF8 };
				Global_3DC2 = 0;
				Global_41B1 = 6;
				func_48();
				return;
			}
		}
		if (!Global_3DEF)
		{
			while (Global_3DED == 1)
			{
				SYSTEM::WAIT(0);
				if (Global_389D.f_1 < 6)
				{
					Global_3DED = 0;
				}
				else
				{
					if (iLocal_30 == 0)
					{
						func_47();
						if (Global_3DEF)
						{
							iLocal_30 = 1;
							Global_41AF = 1;
							func_106(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_3E46, &(Global_19B04.f_6D75[Global_68E /*29*/].f_7), &(Global_19B04.f_6D75[Global_68E /*29*/].f_3), &(Global_19B04.f_6D75[Global_68E /*29*/].f_3), 0);
							func_46(Global_388A, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							if (Global_3891)
							{
								func_106(Global_388A, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, "CELL_604", 0, 0, 0, 0);
								func_106(Global_388A, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, "CELL_602", 0, 0, 0, 0);
								unk_0xF0059F27F7BB6680(&Global_93B, 17);
								func_106(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, "CELL_603", 0, 0, 0, 0);
							}
							else
							{
								func_106(Global_388A, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, 0, 0, 0, 0, 0);
								func_106(Global_388A, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, 0, 0, 0, 0, 0);
								unk_0xF0059F27F7BB6680(&Global_93B, 17);
								func_106(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, 0, 0, 0, 0, 0);
							}
						}
						else
						{
							iLocal_30 = 1;
							Global_41AD = 1;
							if (Global_19B04.f_6D75[Global_68E /*29*/].f_18[Global_389D] == 0)
							{
								func_106(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_3E46, "CELL_300", &(Global_75[Global_68E /*10*/].f_4), "CELL_195", 0);
								func_46(Global_388A, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							else
							{
								func_106(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_3E46, &(Global_19B04.f_6D75[Global_68E /*29*/].f_7), &(Global_19B04.f_6D75[Global_68E /*29*/].f_3), &(Global_19B04.f_6D75[Global_68E /*29*/].f_3), 0);
								func_46(Global_388A, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							if (Global_3891)
							{
								func_106(Global_388A, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
								func_106(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
							}
							else
							{
								func_106(Global_388A, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
								func_106(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
							}
							func_106(Global_388A, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
							unk_0x7CB6FD92BE491AD9(&Global_93B, 17);
						}
					}
					if (func_45(2, Global_387E, 0))
					{
						func_43();
						Global_3853 = 0.19f;
						Global_3DED = 0;
						func_41();
						if (Global_3DEF)
						{
							Global_3C3B = { Global_3E40 };
							Global_41B1 = 5;
						}
						else if (Global_3DB6 > 0)
						{
							Global_3EBA = 1;
							Global_3DB8 = 0;
							Global_41B5 = 0;
							if (unk_0xFA30DFD0084E92FE(Global_93C, 9))
							{
								iVar0 = 0;
								while (iVar0 < Global_4190 + 1)
								{
									uLocal_94[iVar0] = func_40(&(Global_3EBB[iVar0 /*6*/]));
									uLocal_95[iVar0] = func_40(&(Global_4025[iVar0 /*6*/]));
									iVar0++;
								}
								func_39(Global_4190, &Global_3AF1, Global_68E, &Global_3E04, &uLocal_94, &uLocal_95, 9, 0, 0, 0, 0);
							}
							else if (Global_3DB6 == 2)
							{
								func_22(&Global_3AF1, Global_68E, &Global_3E04, &(Global_3E52[0 /*6*/]), &(Global_3E86[0 /*6*/]), &(Global_3E52[1 /*6*/]), &(Global_3E86[1 /*6*/]), 9, 0, 0, 0, 0);
							}
							Global_41B1 = 1;
							Global_41AD = 0;
							Global_41AF = 0;
							Global_3DC2 = 0;
							func_21();
							return;
						}
						else
						{
							Global_3C3B = { Global_3E16 };
							Global_41B1 = 1;
						}
						Global_41AD = 0;
						Global_41AF = 0;
						Global_3DC2 = 0;
						func_21();
						func_48();
						return;
					}
					if (func_45(2, Global_387F, 0) || unk_0xFA30DFD0084E92FE(Global_93B, 24))
					{
						func_43();
						Global_3853 = 0.19f;
						Global_3DED = 0;
						func_41();
						if (Global_3DEF)
						{
							Global_3C3B = { Global_3E3A };
							Global_41B1 = 4;
						}
						else if (Global_3DB6 > 0)
						{
							Global_3EBA = 1;
							Global_3DB8 = 0;
							Global_41B5 = 0;
							if (unk_0xFA30DFD0084E92FE(Global_93C, 9))
							{
								iVar1 = 0;
								while (iVar1 < Global_418F + 1)
								{
									uLocal_96[iVar1] = func_40(&(Global_3F70[iVar1 /*6*/]));
									uLocal_97[iVar1] = func_40(&(Global_40DA[iVar1 /*6*/]));
									iVar1++;
								}
								func_39(Global_418F, &Global_3AF1, Global_68E, &Global_3E04, &uLocal_96, &uLocal_97, 9, 0, 0, 0, 0);
							}
							else if (Global_3DB6 == 2)
							{
								func_22(&Global_3AF1, Global_68E, &Global_3E04, &(Global_3E5F[0 /*6*/]), &(Global_3E93[0 /*6*/]), &(Global_3E5F[1 /*6*/]), &(Global_3E93[1 /*6*/]), 9, 0, 0, 0, 0);
							}
							Global_41B1 = 2;
							Global_41AD = 0;
							Global_41AF = 0;
							Global_3DC2 = 0;
							func_21();
							return;
						}
						else
						{
							Global_3C3B = { Global_3E1C };
							Global_41B1 = 2;
						}
						Global_41AD = 0;
						Global_41AF = 0;
						Global_3DC2 = 0;
						func_21();
						func_48();
						return;
					}
					if (func_45(2, Global_3881, 0))
					{
						if (Global_3DEF)
						{
							Global_3853 = 0.19f;
							Global_3DED = 0;
							func_41();
							func_43();
							Global_3C3B = { Global_3E34 };
							Global_41B1 = 3;
							Global_41AD = 0;
							Global_41AF = 0;
							Global_3DC2 = 0;
							func_21();
							func_48();
							return;
						}
					}
				}
			}
		}
		else
		{
			while (Global_3DED)
			{
				SYSTEM::WAIT(0);
				if (Global_389D.f_1 < 6)
				{
					Global_3DED = 0;
				}
				else
				{
					if (iLocal_30 == 0)
					{
						func_47();
						func_46(Global_388A, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_106(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_603", 0, 0, 0, 0);
						func_106(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_602", 0, 0, 0, 0);
						func_106(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_604", 0, 0, 0, 0);
						func_46(Global_388A, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_20(Global_388A, "SET_HEADER", "CELL_601", 0, 0, 0, 0);
						if (Global_3891)
						{
							func_106(Global_388A, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
						}
						else
						{
							func_106(Global_388A, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						func_106(Global_388A, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						unk_0x7CB6FD92BE491AD9(&Global_93B, 17);
						iLocal_98 = 0;
						iLocal_30 = 1;
					}
					func_14();
					if (func_45(2, Global_387E, 0))
					{
						func_43();
						Global_3DED = 0;
						func_41();
						unk_0x29CD142125FE177B(Global_388A, "GET_CURRENT_SELECTION");
						iLocal_99 = unk_0xC27A95D32A8160C0();
						while (!unk_0x3B6BD69AB08B86C2(iLocal_99))
						{
							SYSTEM::WAIT(0);
						}
						iVar2 = unk_0x6AE1427A38313694(iLocal_99);
						switch (iVar2)
						{
							case 0:
								Global_3C3B = { Global_3E3A };
								Global_41B1 = 4;
								break;
							
							case 1:
								Global_3C3B = { Global_3E34 };
								Global_41B1 = 3;
								break;
							
							case 2:
								Global_3C3B = { Global_3E40 };
								Global_41B1 = 5;
								break;
						}
						Global_41AD = 0;
						Global_41AF = 0;
						Global_3DC2 = 0;
						func_21();
						func_48();
						return;
					}
					if (func_45(2, Global_387F, 0))
					{
						Global_3DED = 0;
						func_41();
					}
				}
			}
		}
		if (Global_3DB9 == 0)
		{
			unk_0x1E08809A5041F85B(false);
			SYSTEM::SETTIMERA(0);
			while (SYSTEM::TIMERA() < 900 && Global_389D.f_1 == 9)
			{
				SYSTEM::WAIT(0);
			}
			Global_3DB8 = 6;
		}
		unk_0xC4BA30B532FE260F(-1, "Hang_Up", &Global_3892, 1);
		func_13();
		Global_389D.f_1 = Global_389F;
		func_8();
	}
	else if (Global_3943 == 0)
	{
		if (func_45(2, Global_387D, 0))
		{
			if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
			{
				if (unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()))
				{
					if (unk_0xFA30DFD0084E92FE(Global_93B, 20))
					{
					}
					else
					{
						Global_3887 = 1;
						func_41();
						unk_0x1E08809A5041F85B(false);
						Global_3DE9 = 1;
						Global_3DEA = 1;
						Global_3DB8 = 6;
						func_13();
						Global_389D.f_1 = Global_389F;
						func_8();
					}
				}
			}
		}
	}
}

void func_8()//Position - 0xE40
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
			func_46(Global_388A, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_11(Global_B98);
			if (Global_B98 == 1)
			{
				func_46(Global_388A, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_38A1), -1082130432, -1082130432, -1082130432);
				Global_3889 = Global_38A1;
			}
			else
			{
				func_46(Global_388A, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_38A2), -1082130432, -1082130432, -1082130432);
				Global_3889 = Global_38A2;
			}
			if (Global_3891)
			{
				func_106(Global_388A, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_106(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_106(Global_388A, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_106(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_3945 == 0)
			{
				func_106(Global_388A, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x7CB6FD92BE491AD9(&Global_93B, 17);
			}
			else if (Global_11542)
			{
				func_106(Global_388A, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x7CB6FD92BE491AD9(&Global_93B, 17);
			}
			else
			{
				if (Global_3944 == 1)
				{
					if (Global_3891)
					{
						func_106(Global_388A, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_106(Global_388A, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_3891)
				{
					func_106(Global_388A, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_106(Global_388A, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0xF0059F27F7BB6680(&Global_93B, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_46(Global_388A, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_106(Global_388A, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_106(Global_388A, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x7CB6FD92BE491AD9(&Global_93B, 17);
			if (unk_0xFA30DFD0084E92FE(Global_93B, 20))
			{
				func_106(Global_388A, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_3891)
			{
				func_106(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_3864)
				{
					func_106(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_106(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_389C == 1)
			{
				func_10();
				func_46(Global_388A, "SET_THEME", SYSTEM::TO_FLOAT(Global_19B04.f_36C6[Global_389D /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_3DC5)
				{
					unk_0x29CD142125FE177B(Global_388A, "SET_DATA_SLOT");
					unk_0x1E1FB49121565EB6(4);
					unk_0x1E1FB49121565EB6(0);
					unk_0x1E1FB49121565EB6(2);
					unk_0x57016C44F10111F0("CELL_CONDFON");
					unk_0x607C19B90D297FE2(&Global_3DC7);
					unk_0x64989E60CF560CA1();
					func_9("CELL_300");
					func_9("CELL_217");
					func_9("CELL_217");
					unk_0xF9FBC2F3F73D94C9();
				}
				else if (Global_19B04.f_6D75[Global_68E /*29*/].f_18[Global_389D] == 0)
				{
					func_106(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_75[Global_68E /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_106(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_19B04.f_6D75[Global_68E /*29*/].f_3), &(Global_19B04.f_6D75[Global_68E /*29*/].f_7), "CELL_217", &(Global_19B04.f_6D75[Global_68E /*29*/].f_3), 0);
				}
				func_46(Global_388A, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_3DB8 == 4 || Global_3DB8 == 3)
			{
				func_46(Global_388A, "SET_THEME", SYSTEM::TO_FLOAT(Global_19B04.f_36C6[Global_389D /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_10();
				if (Global_3DC5)
				{
					unk_0x29CD142125FE177B(Global_388A, "SET_DATA_SLOT");
					unk_0x1E1FB49121565EB6(4);
					unk_0x1E1FB49121565EB6(0);
					unk_0x1E1FB49121565EB6(2);
					unk_0x57016C44F10111F0("CELL_CONDFON");
					unk_0x607C19B90D297FE2(&Global_3DC7);
					unk_0x64989E60CF560CA1();
					func_9("CELL_300");
					func_9("CELL_219");
					func_9("CELL_219");
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
						func_46(Global_388A, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_106(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_75[Global_68E /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_46(Global_388A, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_106(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_19B04.f_6D75[Global_68E /*29*/].f_3), &(Global_19B04.f_6D75[Global_68E /*29*/].f_7), &cVar0, &(Global_19B04.f_6D75[Global_68E /*29*/].f_3), 0);
					}
				}
				func_46(Global_388A, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_21();
			break;
		
		default:
			break;
	}
}

void func_9(char* sParam0)//Position - 0x13D7
{
	unk_0x57016C44F10111F0(sParam0);
	unk_0x64989E60CF560CA1();
}

void func_10()//Position - 0x13E9
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

void func_11(int iParam0)//Position - 0x1660
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
		if (func_12(14))
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
								func_9(&(Global_942[iVar1 /*15*/]));
								unk_0x1E1FB49121565EB6(iVar2);
								unk_0xF9FBC2F3F73D94C9();
							}
							if (Global_25805E)
							{
								if (iVar1 == 14)
								{
									func_106(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_41DF), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_106(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_41E4), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_106(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_106(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_106(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_41DF), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x29CD142125FE177B(Global_388A, "SET_DATA_SLOT");
								unk_0x1E1FB49121565EB6(1);
								unk_0x1E1FB49121565EB6(iVar0);
								unk_0x1E1FB49121565EB6(Global_942[iVar1 /*15*/].f_A);
								unk_0x1E1FB49121565EB6(0);
								func_9(&(Global_942[iVar1 /*15*/]));
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
								func_9(&(Global_942[iVar1 /*15*/]));
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
								func_9(&(Global_942[iVar1 /*15*/]));
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
								func_9(&(Global_942[iVar1 /*15*/]));
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
								func_9(&(Global_942[iVar1 /*15*/]));
								unk_0x1E1FB49121565EB6(42);
								unk_0xF9FBC2F3F73D94C9();
							}
							else if (Global_942[iVar1 /*15*/].f_A == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_18C323.f_1;
								func_106(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_106(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(0), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
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

bool func_12(int iParam0)//Position - 0x1BF9
{
	return Global_8C41 == iParam0;
}

void func_13()//Position - 0x1C07
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return;
	}
	switch (Global_389F)
	{
		case 5:
			Global_389F = 6;
			break;
		
		case 6:
			if (unk_0xFA30DFD0084E92FE(Global_93C, 5))
			{
				Global_389F = 6;
				unk_0x7CB6FD92BE491AD9(&Global_93C, 5);
			}
			else
			{
				Global_389F = 3;
			}
			break;
		
		case 7:
			Global_389F = 3;
			break;
		
		case 3:
			if (unk_0xFA30DFD0084E92FE(Global_93C, 5))
			{
				Global_389F = 6;
				unk_0x7CB6FD92BE491AD9(&Global_93C, 5);
			}
			else
			{
				Global_389F = 3;
			}
			break;
		
		default:
			Global_389F = 3;
			break;
	}
}

void func_14()//Position - 0x1CA0
{
	if (iLocal_98)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_98 = 0;
		}
	}
	if (iLocal_98 == 0)
	{
		if (func_45(2, Global_3885, 0) || unk_0x694514BD37EC4E94(2, 181))
		{
			func_18();
			iLocal_98 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_45(2, Global_3886, 0) || unk_0x694514BD37EC4E94(2, 180))
		{
			func_15();
			iLocal_98 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_15()//Position - 0x1D09
{
	func_46(Global_388A, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xC4BA30B532FE260F(-1, "Menu_Navigate", &Global_3892, 1);
	func_16();
}

void func_16()//Position - 0x1D46
{
	if (func_17())
	{
		if (Global_3948 == 0)
		{
			unk_0x32A023E2F8F8566C(2);
		}
		else
		{
			unk_0x32A023E2F8F8566C(1);
		}
	}
}

int func_17()//Position - 0x1D69
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

void func_18()//Position - 0x1DB0
{
	func_46(Global_388A, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xC4BA30B532FE260F(-1, "Menu_Navigate", &Global_3892, 1);
	func_19();
}

void func_19()//Position - 0x1DED
{
	if (func_17())
	{
		if (Global_3948 == 0)
		{
			unk_0x32A023E2F8F8566C(1);
		}
		else
		{
			unk_0x32A023E2F8F8566C(2);
		}
	}
}

void func_20(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)//Position - 0x1E10
{
	unk_0x29CD142125FE177B(iParam0, sParam1);
	func_9(sParam2);
	if (!unk_0xF1734B55490E9045(sParam3))
	{
		func_9(sParam3);
	}
	if (!unk_0xF1734B55490E9045(sParam4))
	{
		func_9(sParam4);
	}
	if (!unk_0xF1734B55490E9045(sParam5))
	{
		func_9(sParam5);
	}
	if (!unk_0xF1734B55490E9045(sParam6))
	{
		func_9(sParam6);
	}
	unk_0xF9FBC2F3F73D94C9();
}

void func_21()//Position - 0x1E6B
{
	if (unk_0xA7F138B5B1AB2CF6(Global_388A))
	{
		if (Global_389C == 1)
		{
			if (Global_3891)
			{
				func_106(Global_388A, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_106(Global_388A, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_3DE7)
			{
				func_106(Global_388A, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0xFA30DFD0084E92FE(Global_93B, 20))
			{
				func_106(Global_388A, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_3891)
			{
				func_106(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_106(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_106(Global_388A, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x7CB6FD92BE491AD9(&Global_93B, 17);
		}
		else
		{
			func_106(Global_388A, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_106(Global_388A, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x7CB6FD92BE491AD9(&Global_93B, 17);
			if (unk_0xFA30DFD0084E92FE(Global_93B, 20))
			{
				func_106(Global_388A, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_3891)
			{
				func_106(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_3864)
				{
					func_106(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_106(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

int func_22(var uParam0, int iParam1, char* sParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x1FE0
{
	var uVar0;
	var uVar1;
	
	func_38(uParam0, iParam1, sParam2, iParam9, iParam10, 0);
	func_37();
	if (iParam8 == 1)
	{
		Global_3DC4 = 1;
	}
	else
	{
		Global_3DC4 = 0;
	}
	uVar0 = 10;
	uVar1 = 10;
	func_35(2, &uVar0, &uVar1, uParam3, uParam4, uParam5, uParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_23(&uVar0, &uVar1, iParam7, bParam11);
}

int func_23(var uParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x203F
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
					func_102();
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
		if (func_34(8, -1))
		{
			return 0;
		}
		Global_3E04 = { Global_3DFE };
		func_33();
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
				func_27();
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
				if (func_26())
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
			}
			func_24();
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
		func_48();
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
		func_102();
	}
	return 0;
}

void func_24()//Position - 0x23A9
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

int func_25()//Position - 0x243E
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_26()//Position - 0x2465
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

void func_27()//Position - 0x24FE
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
		Global_389D = func_28();
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

var func_28()//Position - 0x25A0
{
	func_29();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_29()//Position - 0x25B9
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_32(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_31(unk_0xBC25C936A095B5BA());
			if (func_30(iVar0) && (!func_12(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_30(Global_19B04.f_932.f_21B.f_10CD))
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

bool func_30(int iParam0)//Position - 0x26B6
{
	return iParam0 < 3;
}

int func_31(int iParam0)//Position - 0x26C2
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_32(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_32(int iParam0)//Position - 0x26FF
{
	if (func_30(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_33()//Position - 0x2729
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

bool func_34(int iParam0, int iParam1)//Position - 0x2781
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

void func_35(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x27BC
{
	func_36(iParam0);
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

void func_36(var uParam0)//Position - 0x282C
{
	Global_3DB5 = uParam0;
	Global_3DBF = 1;
	Global_3DC6 = 0;
	Global_3DC1 = 0;
	Global_4197 = 0;
	Global_419D = 0;
	Global_280001 = 0;
}

void func_37()//Position - 0x2852
{
	Global_3DE8 = 0;
	Global_3DBF = 1;
	Global_3DC6 = 0;
	Global_3DC1 = 0;
	Global_4197 = 0;
	Global_4199 = 0;
	Global_3DC6 = 0;
	Global_419D = 0;
	Global_3DBD = 0;
	Global_3DEC = 0;
	Global_3DEE = 0;
	Global_280001 = 0;
}

void func_38(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x288B
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

int func_39(var uParam0, var uParam1, int iParam2, char* sParam3, var uParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x28E1
{
	func_38(uParam1, iParam2, sParam3, iParam8, iParam9, 0);
	func_37();
	if (iParam7 == 1)
	{
		Global_3DC4 = 1;
	}
	else
	{
		Global_3DC4 = 0;
	}
	func_36(uParam0);
	return func_23(uParam4, uParam5, iParam6, bParam10);
}

var func_40(var uParam0)//Position - 0x291F
{
	return uParam0;
}

void func_41()//Position - 0x2929
{
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0xC4BA30B532FE260F(-1, "Menu_Accept", &Global_3892, 1);
		func_42();
	}
}

void func_42()//Position - 0x294F
{
	if (func_17())
	{
		unk_0x32A023E2F8F8566C(5);
	}
}

void func_43()//Position - 0x2963
{
	if (func_44())
	{
		if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
			{
				if (!Global_3864)
				{
					if (!unk_0xFA30DFD0084E92FE(Global_93B, 11))
					{
						func_54();
					}
				}
			}
		}
	}
}

int func_44()//Position - 0x29A3
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
		if (func_12(14))
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

int func_45(int iParam0, int iParam1, int iParam2)//Position - 0x2BCA
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

void func_46(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x2C3C
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

void func_47()//Position - 0x2C9F
{
	if (func_44())
	{
		if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
			{
				if (!Global_3864)
				{
					if (unk_0xFA30DFD0084E92FE(Global_93B, 11))
					{
						func_3();
					}
				}
			}
		}
	}
}

void func_48()//Position - 0x2CDE
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

int func_49()//Position - 0x2D10
{
	if (unk_0x7AF0088ABFA713B6())
	{
		iLocal_91 = unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), iLocal_90);
	}
	else
	{
		iLocal_88 = unk_0x105601648511CC64();
		iLocal_91 = (iLocal_88 - iLocal_87);
	}
	return 0;
}

void func_50(int iParam0)//Position - 0x2D3C
{
	if (Global_3943)
	{
		func_51(0, 0);
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

void func_51(bool bParam0, bool bParam1)//Position - 0x2DAC
{
	if (bParam0)
	{
		if (func_52(0))
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

int func_52(int iParam0)//Position - 0x2E20
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

void func_53()//Position - 0x2E7A
{
	if (func_45(2, Global_3886, 0))
	{
		if (Global_41AB == 0)
		{
			if (Global_3DBE)
			{
				if (unk_0xFA30DFD0084E92FE(Global_93C, 17))
				{
				}
				else
				{
					unk_0xD30A170FFB82E713();
				}
			}
		}
	}
}

void func_54()//Position - 0x2EAE
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (func_55() && unk_0x74AAB09D79A6344E(unk_0xBC25C936A095B5BA(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_11542)
	{
		if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && iVar1 == 0)
		{
			iVar2 = unk_0x35C830BCF2BF70BE(unk_0xBC25C936A095B5BA(), 0);
			if (Global_11542)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || unk_0x4B4D220E2BCD09B8(unk_0xBC25C936A095B5BA()))
				{
					iVar0 = 1;
				}
			}
			else if (unk_0x4B4D220E2BCD09B8(unk_0xBC25C936A095B5BA()))
			{
				iVar0 = 1;
			}
			if (!Global_3864)
			{
				if (Global_68E != 128)
				{
					if (iVar0 == 0)
					{
						if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
						{
							if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
							{
							}
							else
							{
								if (Global_11542)
								{
									unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 244, false);
									unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 243, false);
									unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 242, false);
								}
								unk_0xF0059F27F7BB6680(&Global_93B, 11);
								unk_0x419DE08DC356F2FD(unk_0xBC25C936A095B5BA(), 1, 1);
							}
						}
					}
				}
			}
		}
	}
}

int func_55()//Position - 0x2FD1
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0xEBC6179F395EFBEB();
	iVar1 = unk_0x3D875C2512206692(iVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_56()//Position - 0x2FF5
{
	if (Global_11542 == 0)
	{
		func_53();
	}
	if (iLocal_33 == 1)
	{
		func_50(0);
	}
	if (iLocal_30 == 0)
	{
		iLocal_30 = 1;
		Global_41AD = 1;
		if (Global_19B04.f_6D75[Global_68E /*29*/].f_18[Global_389D] == 0)
		{
			func_106(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_3E46, "CELL_300", "CELL_195", "CELL_195", 0);
			func_46(Global_388A, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else
		{
			func_106(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_3E46, &(Global_19B04.f_6D75[Global_68E /*29*/].f_7), &(Global_19B04.f_6D75[Global_68E /*29*/].f_3), &(Global_19B04.f_6D75[Global_68E /*29*/].f_3), 0);
			func_46(Global_388A, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		Global_3853 = 0.2f;
		if (Global_3891)
		{
			func_106(Global_388A, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
			func_106(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
		}
		else
		{
			func_106(Global_388A, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
			func_106(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		func_106(Global_388A, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x7CB6FD92BE491AD9(&Global_93B, 17);
	}
	if (Global_3DED == 1)
	{
		if (Global_389D.f_1 < 6)
		{
			Global_3DED = 0;
		}
		else
		{
			if (Global_3861 == 0)
			{
				if (func_45(2, Global_387E, 0))
				{
					Global_3853 = 0.19f;
					Global_3DED = 0;
					func_41();
					Global_41B2 = 1;
					iLocal_32 = 1;
				}
			}
			if (func_45(2, Global_387F, 0))
			{
				Global_3853 = 0.19f;
				Global_3DED = 0;
				func_41();
				Global_41B2 = 2;
			}
		}
	}
	else if (Global_41B2 == 2)
	{
		if (Global_3DB9 == 0)
		{
			unk_0x1E08809A5041F85B(false);
			Global_3DB8 = 6;
		}
		func_13();
		Global_389D.f_1 = Global_389F;
		func_8();
	}
	else if (!unk_0x58E7DDFF8D17A82A())
	{
		iLocal_32 = 0;
		unk_0x1E08809A5041F85B(false);
		Global_3DB8 = 6;
		unk_0xC4BA30B532FE260F(-1, "Hang_Up", &Global_3892, 1);
		func_13();
		Global_389D.f_1 = Global_389F;
		func_8();
	}
}

void func_57()//Position - 0x3237
{
	if (Global_394B == 1)
	{
		if (unk_0x58E7DDFF8D17A82A())
		{
			if (unk_0xC95D751980F5BA7C())
			{
				Global_394B = 0;
			}
		}
		if (!unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			Global_394B = 0;
			unk_0x1E08809A5041F85B(false);
			Global_3DB8 = 6;
		}
	}
	if (SYSTEM::TIMERB() > iLocal_35)
	{
		if (Global_394B == 1)
		{
			Global_394B = 0;
		}
	}
	if (SYSTEM::TIMERA() < Global_41B5 || Global_394B == 1)
	{
		if (func_45(2, Global_387D, 0))
		{
			if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
			{
				if (unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()))
				{
					if (unk_0xFA30DFD0084E92FE(Global_93B, 20))
					{
					}
					else
					{
						Global_3887 = 1;
						func_41();
						unk_0x1E08809A5041F85B(false);
						Global_3DE9 = 1;
						Global_3DB8 = 6;
						unk_0x7CB6FD92BE491AD9(&Global_93B, 27);
						if (!Global_3DC3)
						{
							unk_0xF0059F27F7BB6680(&Global_93C, 5);
						}
						func_13();
						Global_389D.f_1 = Global_389F;
						func_8();
					}
				}
			}
		}
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&Global_93B, 27);
		Global_3DB8 = 4;
		Global_3DF1 = 0;
		func_60();
		func_59();
		if (!Global_3DC5)
		{
			if (Global_41B1 == 0)
			{
				if (!unk_0xFA30DFD0084E92FE(Global_93D, 5))
				{
					unk_0xD02C58A9649E4D42();
				}
				unk_0x7CB6FD92BE491AD9(&Global_93D, 5);
			}
			else
			{
				unk_0x088FD8DB51CCF3E9(Global_3C3B.f_170, Global_3C3B.f_171);
			}
		}
		func_58();
	}
}

void func_58()//Position - 0x3364
{
	if (unk_0x7AF0088ABFA713B6())
	{
		iLocal_90 = unk_0xED678C85A82F0AB9();
	}
	else
	{
		iLocal_87 = unk_0x105601648511CC64();
	}
}

void func_59()//Position - 0x3382
{
	if (Global_3DC5)
	{
		if (Global_11542)
		{
			if (unk_0xA7F138B5B1AB2CF6(Global_388A))
			{
				if (!unk_0x8ACB0C3FACC09467())
				{
					func_106(Global_388A, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					unk_0xF0059F27F7BB6680(&(Global_267214.f_6B9), 15);
				}
			}
		}
	}
}

void func_60()//Position - 0x33D0
{
	if (unk_0xA7F138B5B1AB2CF6(Global_388A))
	{
		if (!Global_3DC0)
		{
			func_106(Global_388A, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_106(Global_388A, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x7CB6FD92BE491AD9(&Global_93B, 17);
			if (unk_0xFA30DFD0084E92FE(Global_93B, 20))
			{
				func_106(Global_388A, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_3891)
			{
				func_106(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_3864)
				{
					func_106(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_106(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_3DC5)
			{
				unk_0x29CD142125FE177B(Global_388A, "SET_DATA_SLOT");
				unk_0x1E1FB49121565EB6(4);
				unk_0x1E1FB49121565EB6(0);
				unk_0x1E1FB49121565EB6(2);
				unk_0x57016C44F10111F0("CELL_CONDFON");
				unk_0x607C19B90D297FE2(&Global_3DC7);
				unk_0x64989E60CF560CA1();
				func_9("CELL_300");
				func_9("CELL_219");
				func_9("CELL_219");
				unk_0xF9FBC2F3F73D94C9();
			}
			else if (Global_19B04.f_6D75[Global_68E /*29*/].f_18[Global_389D] == 0)
			{
				func_106(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_75[Global_68E /*10*/].f_4), "CELL_300", "CELL_219", "CELL_195", 0);
			}
			else
			{
				func_106(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_19B04.f_6D75[Global_68E /*29*/].f_3), &(Global_19B04.f_6D75[Global_68E /*29*/].f_7), "CELL_219", &(Global_19B04.f_6D75[Global_68E /*29*/].f_3), 0);
			}
		}
		func_46(Global_388A, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_61()//Position - 0x3583
{
	if (unk_0x7AF0088ABFA713B6())
	{
		iLocal_92 = unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), iLocal_78);
		iLocal_93 = unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), iLocal_81);
	}
	else
	{
		iLocal_77 = unk_0x105601648511CC64();
		iLocal_92 = (iLocal_77 - iLocal_76);
		iLocal_80 = unk_0x105601648511CC64();
		iLocal_93 = (iLocal_80 - iLocal_79);
	}
	if (Global_3DE7 == 1)
	{
		if (func_44())
		{
			if (iLocal_92 > 4000)
			{
				if (unk_0xFA30DFD0084E92FE(Global_93B, 14))
				{
					if (unk_0xA7F138B5B1AB2CF6(Global_388A))
					{
						func_41();
						Global_389C = 2;
						func_60();
						func_59();
					}
				}
			}
		}
		else if (iLocal_92 > 2000)
		{
			if (unk_0xFA30DFD0084E92FE(Global_93B, 14))
			{
				if (unk_0xA7F138B5B1AB2CF6(Global_388A))
				{
					func_41();
					Global_389C = 2;
					func_60();
					func_59();
				}
			}
		}
	}
	if (iLocal_93 > 10000)
	{
		Global_389C = 3;
	}
	if (Global_389C == 2)
	{
		iLocal_30 = 0;
		Global_3DB8 = 4;
		func_54();
		Global_3DF1 = 0;
		func_60();
		func_59();
		if (!Global_3DC5)
		{
			if (Global_41B1 == 0)
			{
				unk_0xD02C58A9649E4D42();
			}
			else
			{
				unk_0x088FD8DB51CCF3E9(Global_3C3B.f_170, Global_3C3B.f_171);
			}
		}
		func_58();
		Global_41B0 = 0;
	}
	if (Global_3DE7 == 0)
	{
		if (Global_389C == 3)
		{
			if (Global_3DC5)
			{
				func_63();
				func_50(0);
			}
			else
			{
				func_62();
				Global_41B0 = 1;
				unk_0x1E08809A5041F85B(false);
				Global_3DB8 = 6;
				func_13();
				Global_389D.f_1 = Global_389F;
				func_8();
			}
		}
	}
	else if (Global_389C == 3)
	{
	}
}

void func_62()//Position - 0x36D7
{
}

void func_63()//Position - 0x36DF
{
	Global_268A34.f_2 = 1;
	Global_268A34.f_26 = 1;
	if (unk_0x57D316754A262B34())
	{
		if (unk_0x5F1FADF056F1CC85())
		{
			while (unk_0x95FD43CFE24C9F0D())
			{
				SYSTEM::WAIT(0);
			}
			unk_0x20405E3A95992098();
			Global_268A34 = 0;
			Global_268A34.f_2 = 0;
		}
		else if (func_66(Global_268A34.f_14))
		{
			if (unk_0xE140B7178EA00705(&(Global_268A34.f_14)))
			{
				if (!unk_0xCB39420213F43498(&(Global_268A34.f_14)))
				{
					func_64();
				}
			}
		}
		else
		{
			func_64();
		}
	}
	else
	{
		func_64();
	}
	if (Global_268A34.f_25)
	{
		func_50(0);
	}
	Global_268A34.f_25 = 0;
	Global_268A34.f_3 = 0;
}

void func_64()//Position - 0x377F
{
	Global_268A34.f_1 = 0;
	Global_268A34 = 0;
	Global_268A34.f_2 = 0;
	Global_268A34.f_21 = -1;
	Global_268A34.f_22 = -1;
	StringCopy(&(Global_268A34.f_4), "", 64);
	StringCopy(&(Global_268A34.f_27[0 /*16*/]), "", 64);
	Global_268A34.f_26 = 0;
	Global_268A34.f_38 = 0;
	Global_268A34.f_39 = 0;
	Global_268A34.f_3A = -2;
	Global_268A34.f_3 = 0;
	func_65(&(Global_268A34.f_14));
}

void func_65(var uParam0)//Position - 0x37F2
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

bool func_66(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x383A
{
	return unk_0x700A9F370C80C9E1(&uParam0, 13);
}

void func_67()//Position - 0x384A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	
	iLocal_75 = 0;
	iVar0 = 1;
	iVar1 = 1;
	iVar2 = 0;
	iLocal_29 = 0;
	iLocal_31 = 0;
	while (iLocal_75 < Global_3DB4)
	{
		func_84();
		func_83();
		func_82();
		iVar13 = 0;
		while (iVar2 < 70 && iLocal_29 == 0)
		{
			cLocal_42 = { Global_3C3B.f_6[iLocal_75 /*6*/] };
			StringConCat(&cLocal_42, "A", 24);
			Global_394C[iVar2 /*6*/] = { Global_3C3B.f_6[iLocal_75 /*6*/] };
			StringConCat(&(Global_394C[iVar2 /*6*/]), "_", 24);
			StringIntConCat(&(Global_394C[iVar2 /*6*/]), iVar1, 24);
			cLocal_38 = { Global_394C[iVar2 /*6*/] };
			StringConCat(&cLocal_38, "A", 24);
			if (unk_0x0F6F4C227FB5DD52(&cLocal_38))
			{
				StringCopy(&cLocal_46, unk_0xFCB4C1AC11347344(&cLocal_38), 64);
				iVar3 = func_81(iVar13);
				iVar4 = func_80(iVar13);
				uVar5 = func_78(iVar13);
				uLocal_67 = func_77();
				uLocal_68 = func_76();
				uLocal_69 = func_75();
				uVar6 = func_74(iVar13);
				uVar7 = func_73(iVar13);
				uVar8 = func_72(iVar13);
				uVar12 = func_71(iVar13);
				uVar9 = func_70(iVar13);
				uVar10 = func_69(iVar13);
				uVar11 = func_68(iVar13);
				if (unk_0x0F6F4C227FB5DD52(&(Global_394C[iVar2 /*6*/])))
				{
					if (unk_0x3362CDE8460ED38B(&(Global_394C[iVar2 /*6*/]), &(Global_3C3B.f_BB[iLocal_75 /*6*/])))
					{
						if (iVar3 > 36 || iVar4 > 36)
						{
						}
						unk_0x988232D5807088FE(iVar3, &cLocal_46, &(Global_394C[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
					}
				}
				iVar1 = (iVar1 + iVar0);
			}
			else if (unk_0x0F6F4C227FB5DD52(&cLocal_42))
			{
				StringCopy(&cLocal_46, unk_0xFCB4C1AC11347344(&cLocal_42), 64);
				iVar3 = func_81(0);
				iVar4 = func_80(0);
				uVar5 = func_78(0);
				uLocal_67 = func_77();
				uLocal_68 = func_76();
				uLocal_69 = func_75();
				uVar6 = func_74(0);
				uVar7 = func_73(0);
				uVar8 = func_72(0);
				uVar12 = func_71(0);
				uVar9 = func_70(0);
				uVar10 = func_69(0);
				uVar11 = func_68(0);
				unk_0x988232D5807088FE(iVar3, &cLocal_46, &(Global_3C3B.f_6[iLocal_75 /*6*/]), iVar4, uVar5, 1, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
				StringCopy(&(Global_394C[iVar2 /*6*/]), "END", 24);
				iLocal_29 = 1;
			}
			else
			{
				StringCopy(&(Global_394C[iVar2 /*6*/]), "END", 24);
				iLocal_29 = 1;
			}
			iVar2++;
			iVar13++;
			if (iVar2 == 70)
			{
			}
		}
		iLocal_75++;
		iLocal_29 = 0;
		iVar1 = 1;
		iVar13 = 0;
		iVar2 = 0;
	}
	if (Global_3DBE == 0)
	{
		unk_0x556DA903E57B4606(uLocal_68);
		unk_0x21B86EB78E50ACC7(uLocal_69);
		unk_0x038A0E27FFB3417F(Global_3C3B.f_170, Global_3C3B.f_171, Global_3C3B.f_172, uLocal_67);
		Global_3DB8 = 4;
	}
}

int func_68(int iParam0)//Position - 0x3AC9
{
	char* sVar0;
	
	sVar0 = unk_0x600976F1114FB6B1(unk_0xFCB4C1AC11347344(&cLocal_70), iParam0 * 7 + 6, iParam0 * 7 + 7);
	if (unk_0x3362CDE8460ED38B(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_69(int iParam0)//Position - 0x3AFE
{
	char* sVar0;
	
	sVar0 = unk_0x600976F1114FB6B1(unk_0xFCB4C1AC11347344(&cLocal_70), iParam0 * 7 + 5, iParam0 * 7 + 6);
	if (unk_0x3362CDE8460ED38B(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_70(int iParam0)//Position - 0x3B33
{
	char* sVar0;
	
	sVar0 = unk_0x600976F1114FB6B1(unk_0xFCB4C1AC11347344(&cLocal_70), iParam0 * 7 + 4, iParam0 * 7 + 5);
	if (unk_0x3362CDE8460ED38B(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_71(int iParam0)//Position - 0x3B68
{
	char* sVar0;
	
	sVar0 = unk_0x600976F1114FB6B1(unk_0xFCB4C1AC11347344(&cLocal_70), iParam0 * 7 + 3, iParam0 * 7 + 4);
	if (unk_0x3362CDE8460ED38B(sVar0, "0"))
	{
		return 1;
	}
	if (unk_0x3362CDE8460ED38B(sVar0, "1"))
	{
		return 1;
	}
	if (unk_0x3362CDE8460ED38B(sVar0, "2"))
	{
		return 2;
	}
	if (unk_0x3362CDE8460ED38B(sVar0, "3"))
	{
		return 3;
	}
	if (unk_0x3362CDE8460ED38B(sVar0, "4"))
	{
		return 0;
	}
	return 0;
}

int func_72(int iParam0)//Position - 0x3BDE
{
	char* sVar0;
	
	sVar0 = unk_0x600976F1114FB6B1(unk_0xFCB4C1AC11347344(&cLocal_70), iParam0 * 7 + 2, iParam0 * 7 + 3);
	if (unk_0x3362CDE8460ED38B(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_73(int iParam0)//Position - 0x3C13
{
	char* sVar0;
	
	sVar0 = unk_0x600976F1114FB6B1(unk_0xFCB4C1AC11347344(&cLocal_70), iParam0 * 7 + 1, iParam0 * 7 + 2);
	if (unk_0x3362CDE8460ED38B(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_74(int iParam0)//Position - 0x3C48
{
	char* sVar0;
	
	sVar0 = unk_0x600976F1114FB6B1(unk_0xFCB4C1AC11347344(&cLocal_70), iParam0 * 7, iParam0 * 7 + 1);
	if (unk_0x3362CDE8460ED38B(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_75()//Position - 0x3C7B
{
	char* sVar0;
	
	sVar0 = unk_0x600976F1114FB6B1(unk_0xFCB4C1AC11347344(&cLocal_60), 2, 3);
	if (unk_0x3362CDE8460ED38B(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_76()//Position - 0x3CA6
{
	char* sVar0;
	
	sVar0 = unk_0x600976F1114FB6B1(unk_0xFCB4C1AC11347344(&cLocal_60), 1, 2);
	if (unk_0x3362CDE8460ED38B(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_77()//Position - 0x3CD1
{
	char* sVar0;
	
	sVar0 = unk_0x600976F1114FB6B1(unk_0xFCB4C1AC11347344(&cLocal_60), 0, 1);
	if (unk_0x3362CDE8460ED38B(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_78(int iParam0)//Position - 0x3CFC
{
	char* sVar0;
	
	sVar0 = unk_0x600976F1114FB6B1(unk_0xFCB4C1AC11347344(&cLocal_55), iParam0 * 3 + 2, iParam0 * 3 + 3);
	return func_79(sVar0);
}

int func_79(char* sParam0)//Position - 0x3D22
{
	if (unk_0x3362CDE8460ED38B(sParam0, "0"))
	{
		return 0;
	}
	if (unk_0x3362CDE8460ED38B(sParam0, "1"))
	{
		return 1;
	}
	if (unk_0x3362CDE8460ED38B(sParam0, "2"))
	{
		return 2;
	}
	if (unk_0x3362CDE8460ED38B(sParam0, "3"))
	{
		return 3;
	}
	if (unk_0x3362CDE8460ED38B(sParam0, "4"))
	{
		return 4;
	}
	if (unk_0x3362CDE8460ED38B(sParam0, "5"))
	{
		return 5;
	}
	if (unk_0x3362CDE8460ED38B(sParam0, "6"))
	{
		return 6;
	}
	if (unk_0x3362CDE8460ED38B(sParam0, "7"))
	{
		return 7;
	}
	if (unk_0x3362CDE8460ED38B(sParam0, "8"))
	{
		return 8;
	}
	if (unk_0x3362CDE8460ED38B(sParam0, "9"))
	{
		return 9;
	}
	if (unk_0x3362CDE8460ED38B(sParam0, "A"))
	{
		return 10;
	}
	if (unk_0x3362CDE8460ED38B(sParam0, "B"))
	{
		return 11;
	}
	if (unk_0x3362CDE8460ED38B(sParam0, "C"))
	{
		return 12;
	}
	if (unk_0x3362CDE8460ED38B(sParam0, "D"))
	{
		return 13;
	}
	if (unk_0x3362CDE8460ED38B(sParam0, "E"))
	{
		return 14;
	}
	if (unk_0x3362CDE8460ED38B(sParam0, "F"))
	{
		return 15;
	}
	if (unk_0x3362CDE8460ED38B(sParam0, "G"))
	{
		return 16;
	}
	if (unk_0x3362CDE8460ED38B(sParam0, "H"))
	{
		return 17;
	}
	if (unk_0x3362CDE8460ED38B(sParam0, "I"))
	{
		return 18;
	}
	if (unk_0x3362CDE8460ED38B(sParam0, "J"))
	{
		return 19;
	}
	if (unk_0x3362CDE8460ED38B(sParam0, "K"))
	{
		return 20;
	}
	if (unk_0x3362CDE8460ED38B(sParam0, "L"))
	{
		return 21;
	}
	if (unk_0x3362CDE8460ED38B(sParam0, "M"))
	{
		return 22;
	}
	if (unk_0x3362CDE8460ED38B(sParam0, "N"))
	{
		return 23;
	}
	if (unk_0x3362CDE8460ED38B(sParam0, "O"))
	{
		return 24;
	}
	if (unk_0x3362CDE8460ED38B(sParam0, "P"))
	{
		return 25;
	}
	if (unk_0x3362CDE8460ED38B(sParam0, "Q"))
	{
		return 26;
	}
	if (unk_0x3362CDE8460ED38B(sParam0, "R"))
	{
		return 27;
	}
	if (unk_0x3362CDE8460ED38B(sParam0, "S"))
	{
		return 28;
	}
	if (unk_0x3362CDE8460ED38B(sParam0, "T"))
	{
		return 29;
	}
	if (unk_0x3362CDE8460ED38B(sParam0, "U"))
	{
		return 30;
	}
	if (unk_0x3362CDE8460ED38B(sParam0, "V"))
	{
		return 31;
	}
	if (unk_0x3362CDE8460ED38B(sParam0, "W"))
	{
		return 32;
	}
	if (unk_0x3362CDE8460ED38B(sParam0, "X"))
	{
		return 33;
	}
	if (unk_0x3362CDE8460ED38B(sParam0, "Y"))
	{
		return 34;
	}
	if (unk_0x3362CDE8460ED38B(sParam0, "Z"))
	{
		return 35;
	}
	if (unk_0x3362CDE8460ED38B(sParam0, "z"))
	{
		return -1;
	}
	return -1;
}

int func_80(int iParam0)//Position - 0x3FBF
{
	char* sVar0;
	
	sVar0 = unk_0x600976F1114FB6B1(unk_0xFCB4C1AC11347344(&cLocal_55), iParam0 * 3 + 1, iParam0 * 3 + 2);
	return func_79(sVar0);
}

int func_81(int iParam0)//Position - 0x3FE5
{
	char* sVar0;
	
	sVar0 = unk_0x600976F1114FB6B1(unk_0xFCB4C1AC11347344(&cLocal_55), iParam0 * 3, iParam0 * 3 + 1);
	return func_79(sVar0);
}

void func_82()//Position - 0x400B
{
	cLocal_70 = { Global_3C3B.f_6[iLocal_75 /*6*/] };
	StringConCat(&cLocal_70, "LF", 24);
	if (unk_0x0F6F4C227FB5DD52(&cLocal_70))
	{
		sLocal_74 = unk_0xFCB4C1AC11347344(&cLocal_70);
		if (unk_0xEAEFBBEC1AEA464B(sLocal_74))
		{
		}
	}
}

void func_83()//Position - 0x4044
{
	cLocal_60 = { Global_3C3B.f_6[iLocal_75 /*6*/] };
	StringConCat(&cLocal_60, "IF", 24);
	if (unk_0x0F6F4C227FB5DD52(&cLocal_60))
	{
		sLocal_64 = unk_0x600976F1114FB6B1(unk_0xFCB4C1AC11347344(&cLocal_60), 0, 1);
		if (unk_0xEAEFBBEC1AEA464B(sLocal_64))
		{
		}
		sLocal_65 = unk_0x600976F1114FB6B1(unk_0xFCB4C1AC11347344(&cLocal_60), 1, 2);
		if (unk_0xEAEFBBEC1AEA464B(sLocal_65))
		{
		}
		sLocal_66 = unk_0x600976F1114FB6B1(unk_0xFCB4C1AC11347344(&cLocal_60), 2, 3);
		if (unk_0xEAEFBBEC1AEA464B(sLocal_66))
		{
		}
	}
}

void func_84()//Position - 0x40B1
{
	cLocal_55 = { Global_3C3B.f_6[iLocal_75 /*6*/] };
	StringConCat(&cLocal_55, "SL", 24);
	if (unk_0x0F6F4C227FB5DD52(&cLocal_55))
	{
		sLocal_59 = unk_0xFCB4C1AC11347344(&cLocal_55);
		if (unk_0xEAEFBBEC1AEA464B(sLocal_59))
		{
		}
	}
}

void func_85()//Position - 0x40EA
{
	func_86();
	unk_0x556DA903E57B4606(uLocal_68);
	unk_0x21B86EB78E50ACC7(uLocal_69);
	if (Global_4198)
	{
		unk_0x21EB93E5B84AED94(Global_3C3B.f_170, Global_3C3B.f_171, Global_3C3B.f_172, uLocal_67);
		iLocal_36 = unk_0x105601648511CC64();
	}
	else
	{
		unk_0x038A0E27FFB3417F(Global_3C3B.f_170, Global_3C3B.f_171, Global_3C3B.f_172, uLocal_67);
	}
	Global_3DB8 = 4;
}

void func_86()//Position - 0x4145
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	int iVar14;
	
	iVar0 = 1;
	iVar1 = 1;
	iVar2 = 0;
	iLocal_29 = 0;
	iLocal_31 = 0;
	iLocal_33 = 0;
	if (unk_0x4B5358191700A331(&Global_3E04))
	{
		if (unk_0x3362CDE8460ED38B(&Global_3E04, "CT_AUD"))
		{
			Global_280002 = 1;
		}
		iVar13 = 0;
		if (unk_0xF7E138CFA19B55E7() || unk_0xF49912B78E2591B6())
		{
			if (Global_1801E2 == 1)
			{
				iVar13 = 1;
			}
			else
			{
				iVar13 = 2;
			}
		}
		iVar14 = 0;
		if (Global_11542 || func_94())
		{
			if (Global_1801E2 == 0)
			{
				iVar14 = 1;
			}
		}
		else if (!func_92())
		{
			iVar14 = 1;
		}
		if (func_91(unk_0x56BEECB328B6D29D(&Global_3E04)))
		{
			iVar14 = 0;
			Global_280002 = 0;
			iVar13 = 1;
		}
		if (((Global_3DBA < 5 || Global_3DBA == 10) || Global_3DBA == 12) || Global_3DBA == 13)
		{
			if ((iVar14 == 1 || Global_280002 == 1) || iVar13 == 2)
			{
				unk_0x900CF084251DED26(&Global_3E04, 7);
				while (!unk_0xFA9040D29FE330BD(7))
				{
					SYSTEM::WAIT(0);
				}
			}
			else
			{
				unk_0xBF8DAF77B7A8FB64(&Global_3E04, 15);
				while (!unk_0xFA9040D29FE330BD(15))
				{
					SYSTEM::WAIT(0);
				}
			}
		}
		else if ((iVar14 == 1 || Global_280002 == 1) || iVar13 == 2)
		{
			unk_0x900CF084251DED26(&Global_3E04, 6);
			while (!unk_0xFA9040D29FE330BD(6))
			{
				SYSTEM::WAIT(0);
			}
		}
		else
		{
			unk_0xBF8DAF77B7A8FB64(&Global_3E04, 14);
			while (!unk_0xFA9040D29FE330BD(14))
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	else
	{
		iLocal_33 = 1;
		return;
	}
	unk_0xF2A88AFA53BCE21D();
	func_90();
	func_89();
	func_88();
	func_87();
	Global_41AA = 0;
	while (iVar2 < 70 && iLocal_29 == 0)
	{
		cLocal_42 = { Global_3C3B };
		StringConCat(&cLocal_42, "A", 24);
		Global_394C[iVar2 /*6*/] = { Global_3C3B };
		StringConCat(&(Global_394C[iVar2 /*6*/]), "_", 24);
		StringIntConCat(&(Global_394C[iVar2 /*6*/]), iVar1, 24);
		cLocal_38 = { Global_394C[iVar2 /*6*/] };
		StringConCat(&cLocal_38, "A", 24);
		if (unk_0x0F6F4C227FB5DD52(&cLocal_38))
		{
			StringCopy(&cLocal_46, unk_0xFCB4C1AC11347344(&cLocal_38), 64);
			iVar3 = func_81(iVar2);
			if (iVar3 == 9)
			{
				if (Global_411E86 == 0)
				{
				}
			}
			iVar4 = func_80(iVar2);
			uVar5 = func_78(iVar2);
			uLocal_67 = func_77();
			uLocal_68 = func_76();
			uLocal_69 = func_75();
			uVar6 = func_74(iVar2);
			uVar7 = func_73(iVar2);
			uVar8 = func_72(iVar2);
			uVar12 = func_71(iVar2);
			uVar9 = func_70(iVar2);
			uVar10 = func_69(iVar2);
			uVar11 = func_68(iVar2);
			if (unk_0x0F6F4C227FB5DD52(&(Global_394C[iVar2 /*6*/])))
			{
				if (Global_4196 == 0 && Global_419C == 0)
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					unk_0x988232D5807088FE(iVar3, &cLocal_46, &(Global_394C[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
				}
				else if (unk_0x3362CDE8460ED38B(&(Global_394C[iVar2 /*6*/]), &Global_419E))
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					unk_0x988232D5807088FE(iVar3, &cLocal_46, &(Global_394C[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
					Global_41AA = iVar2;
					if (Global_419C == 1)
					{
						Global_419C = 0;
					}
				}
			}
			else if (Global_419C == 0 && Global_4196 == 0)
			{
				unk_0x988232D5807088FE(iVar3, &cLocal_46, &cLocal_46, iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
			}
			iVar1 = (iVar1 + iVar0);
		}
		else
		{
			if (unk_0x0F6F4C227FB5DD52(&cLocal_42))
			{
				StringCopy(&cLocal_46, unk_0xFCB4C1AC11347344(&cLocal_42), 64);
				iVar3 = func_81(iVar2);
				iVar4 = func_80(iVar2);
				uVar5 = func_78(iVar2);
				uLocal_67 = func_77();
				uLocal_68 = func_76();
				uLocal_69 = func_75();
				uVar6 = func_74(iVar2);
				uVar7 = func_73(iVar2);
				uVar8 = func_72(iVar2);
				uVar12 = func_71(iVar2);
				uVar9 = func_70(iVar2);
				uVar10 = func_69(iVar2);
				uVar11 = func_68(iVar2);
				unk_0x988232D5807088FE(iVar3, &cLocal_46, &Global_3C3B, iVar4, uVar5, 1, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
			}
			iLocal_29 = 1;
		}
		iVar2++;
		if (iVar2 == 70)
		{
		}
	}
}

void func_87()//Position - 0x4550
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		if (Global_3AF1[iVar0 /*10*/].f_7 == 1)
		{
			if (unk_0x724D816EA203A79E(Global_3AF1[iVar0 /*10*/]) || Global_3AF1[iVar0 /*10*/] == 0)
			{
				unk_0x62D34DDE4E0EDE85(iVar0, Global_3AF1[iVar0 /*10*/], &(Global_3AF1[iVar0 /*10*/].f_1));
			}
			if (Global_3AF1.f_A1 == iVar0)
			{
				if ((Global_3AF1.f_A2 != 0f && Global_3AF1.f_A2.f_1 != 0f) && Global_3AF1.f_A2.f_2 != 0f)
				{
					SYSTEM::WAIT(0);
					unk_0xDFBFB0F37A2592B2(Global_3AF1.f_A1, Global_3AF1.f_A2);
				}
			}
		}
		iVar0++;
	}
	if (Global_411E86 == 1)
	{
		Global_411E86 = 0;
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 19)
		{
			if (Global_411DD1[iVar0 /*9*/].f_7 == 1)
			{
				if (unk_0x724D816EA203A79E(Global_411DD1[iVar0 /*9*/]) || Global_411DD1[iVar0 /*9*/] == 0)
				{
					unk_0x62D34DDE4E0EDE85(Global_411DD1[iVar0 /*9*/].f_8, Global_411DD1[iVar0 /*9*/], &(Global_411DD1[iVar0 /*9*/].f_1));
				}
			}
			iVar0++;
		}
	}
}

void func_88()//Position - 0x4660
{
	cLocal_70 = { Global_3C3B };
	StringConCat(&cLocal_70, "LF", 24);
	if (unk_0x0F6F4C227FB5DD52(&cLocal_70))
	{
		sLocal_74 = unk_0xFCB4C1AC11347344(&cLocal_70);
		if (unk_0xEAEFBBEC1AEA464B(sLocal_74))
		{
		}
	}
}

void func_89()//Position - 0x4693
{
	cLocal_60 = { Global_3C3B };
	StringConCat(&cLocal_60, "IF", 24);
	if (unk_0x0F6F4C227FB5DD52(&cLocal_60))
	{
		sLocal_64 = unk_0x600976F1114FB6B1(unk_0xFCB4C1AC11347344(&cLocal_60), 0, 1);
		if (unk_0xEAEFBBEC1AEA464B(sLocal_64))
		{
		}
		sLocal_65 = unk_0x600976F1114FB6B1(unk_0xFCB4C1AC11347344(&cLocal_60), 1, 2);
		if (unk_0xEAEFBBEC1AEA464B(sLocal_65))
		{
		}
		sLocal_66 = unk_0x600976F1114FB6B1(unk_0xFCB4C1AC11347344(&cLocal_60), 2, 3);
		if (unk_0xEAEFBBEC1AEA464B(sLocal_66))
		{
		}
	}
}

void func_90()//Position - 0x46FA
{
	cLocal_55 = { Global_3C3B };
	StringConCat(&cLocal_55, "SL", 24);
	if (unk_0x0F6F4C227FB5DD52(&cLocal_55))
	{
		sLocal_59 = unk_0xFCB4C1AC11347344(&cLocal_55);
		if (unk_0xEAEFBBEC1AEA464B(sLocal_59))
		{
		}
	}
}

int func_91(int iParam0)//Position - 0x472D
{
	switch (iParam0)
	{
		case -1311531715:
		case -389729032:
		case -2064440312:
		case 1151576899:
		case 677852396:
		case 1017913414:
		case 1994430427:
		case 1430620518:
		case 1883599394:
		case 1146168957:
		case 785850502:
		case 1566303118:
		case 1220013368:
		case 71115730:
		case -251854137:
		case -243052328:
		case -1417718107:
		case -351584050:
		case 1854373416:
		case -1753835094:
		case -353948811:
		case -1883622926:
		case -46742865:
		case 1260190997:
		case 1080008561:
		case 1151572586:
		case 964109535:
		case -436910453:
		case 659972380:
		case 2120484290:
		case 1439733926:
		case 26437732:
		case 303339033:
		case 2088730730:
		case -1771498136:
		case -1993049002:
		case -1370815517:
		case -1267951531:
		case 60077066:
		case 1821448936:
		case 2043251532:
		case 1314391445:
		case -1267946537:
		case 1507036282:
		case 214936528:
		case 1071832486:
		case 379745124:
		case 409276020:
		case -495085533:
		case -383711312:
		case -1809286053:
		case -229061423:
		case 1399593776:
		case -1592188591:
		case 2119072113:
		case -2005721953:
		case -439426052:
		case 101634771:
		case -7767504:
		case -1576797630:
			return 1;
		
		default:
	}
	return 0;
}

int func_92()//Position - 0x48A9
{
	if (Global_28006E)
	{
		if (func_12(0))
		{
			if (Global_300000 || func_93(0))
			{
				return 1;
			}
		}
	}
	if (Global_28006D)
	{
		if (func_12(0))
		{
			if (Global_380000 || func_93(0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_93(bool bParam0)//Position - 0x48FC
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_1163A, 0);
}

var func_94()//Position - 0x4927
{
	return Global_14083F;
}

void func_95()//Position - 0x4933
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (unk_0xF7E138CFA19B55E7() || unk_0xF49912B78E2591B6())
	{
		if (Global_1801E2 == 1)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	iVar1 = 0;
	if (Global_11542)
	{
		if (Global_1801E2 == 0)
		{
			iVar1 = 1;
		}
	}
	else if (!func_92())
	{
		iVar1 = 1;
	}
	if (unk_0x4B5358191700A331(&Global_3E04))
	{
		if (unk_0x3362CDE8460ED38B(&Global_3E04, "CT_AUD"))
		{
			Global_280002 = 1;
		}
	}
	if (func_91(unk_0x56BEECB328B6D29D(&Global_3E04)))
	{
		iVar1 = 0;
		Global_280002 = 0;
		iVar0 = 1;
	}
	if (((Global_3DBA < 5 || Global_3DBA == 10) || Global_3DBA == 12) || Global_3DBA == 13)
	{
		if ((iVar1 == 1 || Global_280002 == 1) || iVar0 == 2)
		{
			unk_0x900CF084251DED26(&Global_3E04, 7);
			while (!unk_0xFA9040D29FE330BD(7))
			{
				SYSTEM::WAIT(0);
			}
		}
		else
		{
			unk_0xBF8DAF77B7A8FB64(&Global_3E04, 15);
			while (!unk_0xFA9040D29FE330BD(15))
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	else if ((iVar1 == 1 || Global_280002 == 1) || iVar0 == 2)
	{
		unk_0x900CF084251DED26(&Global_3E04, 6);
		while (!unk_0xFA9040D29FE330BD(6))
		{
			SYSTEM::WAIT(0);
		}
	}
	else
	{
		unk_0xBF8DAF77B7A8FB64(&Global_3E04, 14);
		while (!unk_0xFA9040D29FE330BD(14))
		{
			SYSTEM::WAIT(0);
		}
	}
	unk_0xF2A88AFA53BCE21D();
	func_87();
}

void func_96()//Position - 0x4A98
{
	while (Global_388C == 1 && unk_0xB731B8C5BCE89836(joaat("cellphone_flashhand")) > 0)
	{
		SYSTEM::WAIT(0);
	}
	Global_388C = 0;
	if (unk_0xFA30DFD0084E92FE(Global_93B, 20))
	{
		unk_0xF0059F27F7BB6680(&Global_93C, 1);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&Global_93C, 1);
	}
	Global_388D = 0;
	if (Global_3DB4 == 0)
	{
		if (!Global_3DC5)
		{
			func_86();
		}
	}
	else
	{
		func_67();
	}
	Global_394B = 0;
	if (Global_3DC2)
	{
		if (Global_41B1 == 0)
		{
			if (Global_3DC5 == 0)
			{
				iLocal_34 = 5000;
				unk_0x6AA5D911E367FF71(Global_3C3B.f_170, Global_3C3B.f_171);
			}
			else
			{
				iLocal_34 = 0;
			}
		}
		else
		{
			iLocal_34 = 0;
		}
		Global_394B = 1;
		SYSTEM::SETTIMERB(0);
		while ((Global_394B == 1 && Global_3DB8 == 1) && SYSTEM::TIMERB() < iLocal_34)
		{
			SYSTEM::WAIT(0);
			if (!unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
			{
				Global_394B = 0;
				unk_0x1E08809A5041F85B(false);
				Global_3DB8 = 6;
			}
			if (unk_0x58E7DDFF8D17A82A())
			{
				if (unk_0xC95D751980F5BA7C())
				{
					Global_394B = 0;
				}
			}
		}
		if (SYSTEM::TIMERB() > iLocal_34)
		{
		}
		if (Global_3DB8 != 1)
		{
		}
		if (Global_394B == 0)
		{
		}
	}
	Global_394B = 0;
	if (((Global_389D.f_1 == 1 || Global_389D.f_1 == 0) || Global_3DB8 != 1) || Global_387B == 1)
	{
		unk_0x1E08809A5041F85B(false);
		Global_3DB8 = 6;
	}
	else
	{
		if (Global_3DC0)
		{
			Global_41B2 = 0;
			iLocal_32 = 0;
		}
		if (Global_3DC2 == 0)
		{
			if (Global_3DEB == 0)
			{
				Global_389F = Global_389D.f_1;
				Global_3DEB = 1;
			}
			iLocal_30 = 0;
			if (Global_41B1 == 0)
			{
				unk_0x6AA5D911E367FF71(Global_3C3B.f_170, Global_3C3B.f_171);
				SYSTEM::WAIT(0);
				Global_3DB8 = 3;
				Global_394B = 1;
				SYSTEM::SETTIMERB(0);
				unk_0xF0059F27F7BB6680(&Global_93B, 27);
				SYSTEM::SETTIMERA(0);
			}
			else
			{
				Global_394B = 0;
				Global_3DB8 = 4;
			}
			Global_389C = 0;
			if (Global_3DC3 == 1)
			{
				if (Global_389D.f_1 == 10)
				{
				}
				if (!Global_389D.f_1 == 9)
				{
					if (Global_389D.f_1 > 4)
					{
						if (Global_388C == 0)
						{
							Global_389D.f_1 = 9;
							func_8();
						}
					}
					else
					{
						Global_389D.f_1 = 4;
					}
				}
				else
				{
					func_8();
				}
			}
			else
			{
				while (Global_389D.f_1 == 4)
				{
					SYSTEM::WAIT(0);
					if (Global_394B == 1)
					{
						if (unk_0x58E7DDFF8D17A82A())
						{
							if (unk_0xC95D751980F5BA7C())
							{
								Global_394B = 0;
							}
						}
					}
				}
				if (Global_389D.f_1 == 6)
				{
				}
				if (Global_389D.f_1 == 10)
				{
				}
				if (Global_389D.f_1 == 3)
				{
					unk_0x1E08809A5041F85B(false);
					Global_3DB8 = 6;
					Global_388D = 1;
					return;
				}
				Global_389D.f_1 = 9;
				func_8();
			}
			if (unk_0x7AF0088ABFA713B6())
			{
				iLocal_84 = unk_0xED678C85A82F0AB9();
			}
			else
			{
				iLocal_82 = unk_0x105601648511CC64();
			}
			while (Global_389D.f_1 != 9 && Global_388C == 0)
			{
				SYSTEM::WAIT(0);
				if (Global_394B == 1)
				{
					if (unk_0x58E7DDFF8D17A82A())
					{
						if (unk_0xC95D751980F5BA7C())
						{
							Global_394B = 0;
						}
					}
				}
				if (unk_0x7AF0088ABFA713B6())
				{
					iLocal_91 = unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), iLocal_84);
				}
				else
				{
					iLocal_83 = unk_0x105601648511CC64();
					iLocal_91 = (iLocal_83 - iLocal_82);
				}
				if (unk_0xB731B8C5BCE89836(joaat("cellphone_flashhand")) == 0)
				{
					if (iLocal_91 > 15000)
					{
						Global_41B0 = 1;
						Global_388C = 1;
					}
				}
			}
			if (!unk_0xFA30DFD0084E92FE(Global_93B, 11))
			{
				if (func_44() == 0)
				{
					func_54();
				}
			}
			if (Global_388C == 0)
			{
				if (!Global_41B1 == 0)
				{
					Global_3DF1 = 0;
					func_60();
					func_59();
					if (!Global_3DC5)
					{
						if (Global_41B1 == 0)
						{
							unk_0xD02C58A9649E4D42();
						}
						else
						{
							unk_0x088FD8DB51CCF3E9(Global_3C3B.f_170, Global_3C3B.f_171);
						}
					}
					func_58();
				}
			}
			else
			{
				func_97();
				Global_388D = 1;
			}
		}
		else
		{
			Global_389C = 1;
			if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
			{
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
				{
					if (Global_389D.f_1 == 3)
					{
					}
				}
				else
				{
					unk_0x7CB6FD92BE491AD9(&Global_93C, 21);
				}
			}
			if (Global_3DEB == 0)
			{
				Global_389F = Global_389D.f_1;
				Global_3DEB = 1;
			}
			if (Global_389D.f_1 == 3)
			{
				Global_389D.f_1 = 4;
			}
			else
			{
				while (Global_389D.f_1 == 4)
				{
					SYSTEM::WAIT(0);
				}
				if (Global_389D.f_1 == 6)
				{
				}
				Global_389D.f_1 = 9;
				func_8();
			}
			if (unk_0x7AF0088ABFA713B6())
			{
				iLocal_84 = unk_0xED678C85A82F0AB9();
			}
			else
			{
				iLocal_82 = unk_0x105601648511CC64();
			}
			while (Global_389D.f_1 != 9 && Global_388C == 0)
			{
				SYSTEM::WAIT(0);
				if (unk_0x7AF0088ABFA713B6())
				{
					iLocal_91 = unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), iLocal_84);
				}
				else
				{
					iLocal_83 = unk_0x105601648511CC64();
					iLocal_91 = (iLocal_83 - iLocal_82);
				}
				if (unk_0xB731B8C5BCE89836(joaat("cellphone_flashhand")) == 0)
				{
					if (iLocal_91 > 20000)
					{
						Global_41B0 = 1;
						Global_388C = 1;
						unk_0x7CB6FD92BE491AD9(&Global_93C, 21);
					}
				}
			}
			if (Global_388C == 0)
			{
				Global_3DB8 = 2;
			}
			else
			{
				func_97();
				Global_388D = 1;
			}
			if (unk_0x7AF0088ABFA713B6())
			{
				iLocal_78 = unk_0xED678C85A82F0AB9();
				iLocal_81 = unk_0xED678C85A82F0AB9();
			}
			else
			{
				iLocal_76 = unk_0x105601648511CC64();
				iLocal_79 = unk_0x105601648511CC64();
			}
		}
	}
}

void func_97()//Position - 0x4F2E
{
	Global_394A = 0;
	func_102();
}

void func_98()//Position - 0x4F3E
{
	float fVar0;
	
	fVar0 = func_99(Global_386E[Global_3866 /*3*/], Global_3867[Global_3866 /*3*/], Global_3875, Global_3858, 350f, 0);
	if (fVar0 >= 1f)
	{
		if (Global_41AE == 0)
		{
			unk_0x43F06392C4EF25E0(true);
		}
		iLocal_32 = 0;
	}
}

float func_99(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, float fParam4, bool bParam5)//Position - 0x4F86
{
	struct<2> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Global_411EA1 == 0)
	{
		if (unk_0xFA30DFD0084E92FE(Global_93B, 14) && Global_389D.f_1 < 4)
		{
			unk_0x652515566BB40BA9(&Var0);
			if (Global_386E[Global_3866 /*3*/].f_1 == Var0.f_1)
			{
				Global_411EA1 = 1;
			}
		}
	}
	if (func_44() && Global_411EA1 == 0)
	{
		return 2f;
	}
	if (iLocal_18 == 0)
	{
		iLocal_18 = unk_0x105601648511CC64();
	}
	fVar1 = func_101((SYSTEM::TO_FLOAT((unk_0x105601648511CC64() - iLocal_18)) / fParam4), 0f, 1f);
	if (fVar1 < 1f)
	{
		fVar2 = fVar1;
		if (bParam5)
		{
			fVar2 = (fVar2 - 1f);
			fVar3 = 0.670158f;
			fVar2 = (((fVar2 * fVar2) * (((fVar3 + 1f) * fVar2) + fVar3)) + 1f);
		}
		else
		{
			fVar2 = SYSTEM::SIN((fVar1 * 90f));
		}
		Global_3855 = { func_100(vParam0, vParam1, fVar2) };
		Global_3858 = { func_100(vParam2, vParam3, fVar2) };
	}
	else
	{
		Global_3855 = { vParam1 };
		Global_3858 = { vParam3 };
	}
	unk_0x3D7D94BDD4D22C14(Global_3855);
	unk_0xF960832D272B97D4(Global_3858, 0);
	return fVar1;
}

Vector3 func_100(vector3 vParam0, vector3 vParam1, float fParam2)//Position - 0x5098
{
	return vParam0 + vParam1 - vParam0 * Vector(fParam2, fParam2, fParam2);
}

float func_101(float fParam0, float fParam1, float fParam2)//Position - 0x50B2
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

void func_102()//Position - 0x50D9
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

bool func_103(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x5130
{
	func_38(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_104(sParam2, iParam3, 0);
}

int func_104(char* sParam0, int iParam1, bool bParam2)//Position - 0x517E
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
					func_102();
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
		if (func_34(8, -1))
		{
			return 0;
		}
		Global_3E04 = { Global_3DFE };
		func_33();
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
				func_27();
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
				if (func_26())
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
			func_24();
			Global_3DC2 = bParam2;
		}
		Global_3DBA = iParam1;
		StringCopy(&Global_3C3B, sParam0, 24);
		Global_394A = 0;
		func_48();
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
		func_102();
	}
	return 0;
}

int func_105()//Position - 0x544A
{
	if (Global_3DB8 != 0 || unk_0xE6711F601F11B66B())
	{
		return 1;
	}
	return 0;
}

void func_106(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x546C
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
		func_9(sParam7);
	}
	if (!unk_0xF1734B55490E9045(sParam8))
	{
		func_9(sParam8);
	}
	if (!unk_0xF1734B55490E9045(sParam9))
	{
		func_9(sParam9);
	}
	if (!unk_0xF1734B55490E9045(sParam10))
	{
		func_9(sParam10);
	}
	if (!unk_0xF1734B55490E9045(sParam11))
	{
		func_9(sParam11);
	}
	unk_0xF9FBC2F3F73D94C9();
}

