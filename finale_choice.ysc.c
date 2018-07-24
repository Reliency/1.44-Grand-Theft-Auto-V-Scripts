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
	var uLocal_27 = 0;
	int iLocal_28 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	bool bVar0;
	
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
	iLocal_28 = 1;
	if (unk_0xE8A79675302ED812(18))
	{
		func_38();
	}
	func_37(20);
	func_36();
	func_35(1);
	func_35(0);
	func_35(2);
	func_35(13);
	func_35(12);
	Global_940 = 1;
	func_34();
	if (!func_33(-1615086084))
	{
		func_32(-1615086084, 2, 2, 2, 1, -1, 5);
	}
	if (!func_33(-1970925435))
	{
		func_32(-1970925435, 2, 0, 0, 1, -1, 5);
	}
	if (!func_33(-1817481777))
	{
		func_32(-1817481777, 2, 12, 3, 1, -1, 5);
	}
	bVar0 = false;
	while (func_31(23) && !func_30(134))
	{
		if (func_26() == 1)
		{
			if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
			{
				if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
				{
					if ((!unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA()) && !unk_0x149E9368A11035DE(unk_0xBC25C936A095B5BA())) && !unk_0x7544D2465B934445(unk_0xBC25C936A095B5BA()))
					{
						if (!bVar0)
						{
							if (!((func_25() || unk_0x7930B3E9C919E90F()) || func_24()))
							{
								if (func_13())
								{
									bVar0 = true;
								}
							}
						}
						else
						{
							if (iLocal_28)
							{
								unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 384);
								unk_0xDBA0F5674ACCE43C(unk_0xBC25C936A095B5BA(), 0f);
								unk_0x5EFA245B45A49778(0, 173, 1);
								unk_0x5EFA245B45A49778(0, 172, 1);
								unk_0x5EFA245B45A49778(0, 174, 1);
								unk_0x5EFA245B45A49778(0, 175, 1);
								unk_0x5EFA245B45A49778(0, 176, 1);
								unk_0x5EFA245B45A49778(0, 177, 1);
								unk_0x5EFA245B45A49778(0, 178, 1);
								unk_0x5EFA245B45A49778(0, 179, 1);
								unk_0x5EFA245B45A49778(0, 180, 1);
								unk_0x5EFA245B45A49778(0, 181, 1);
							}
							else
							{
								unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
							}
							switch (func_12())
							{
								case -1615086084:
									if (!func_33(-1989308064))
									{
										func_8(-1989308064, 0, 1, 0, 1, 6000, 6000, -1, 0, -1, 68);
									}
									break;
								
								case -1989308064:
									func_7(12, 0);
									func_6(134, 1);
									unk_0x3A57956BCE003880(joaat("sp_final_decision"), 2, 1);
									break;
								
								case -1970925435:
									if (!func_33(-1060930305))
									{
										func_8(-1060930305, 0, 1, 2, 2, 6000, 6000, -1, 0, -1, 68);
									}
									break;
								
								case -1060930305:
									func_7(12, 1);
									func_6(134, 1);
									unk_0x3A57956BCE003880(joaat("sp_final_decision"), 1, 1);
									break;
								
								case -1817481777:
									func_7(12, 2);
									func_6(134, 1);
									unk_0x3A57956BCE003880(joaat("sp_final_decision"), 3, 1);
									break;
								
								default:
									if (!func_5(0))
									{
										bVar0 = false;
									}
									else if (iLocal_28)
									{
										if (func_4())
										{
											iLocal_28 = 0;
										}
									}
									break;
								}
							}
						}
					}
				}
		}
		SYSTEM::WAIT(0);
	}
	func_3(20);
	Global_16B42 = 0;
	func_1();
	func_38();
}

int func_1()//Position - 0x2F3
{
	if (func_2(0))
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

bool func_2(bool bParam0)//Position - 0x33E
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_1163A, 0);
}

int func_3(int iParam0)//Position - 0x369
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0xFA30DFD0084E92FE(Global_19B04.f_2360.f_63.f_DB[iVar0], iVar1))
	{
		unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_2360.f_63.f_DB[iVar0]), iVar1);
		return 1;
	}
	return 0;
}

int func_4()//Position - 0x3C3
{
	if (Global_389D.f_1 == 10 || Global_389D.f_1 == 9)
	{
		return 1;
	}
	return 0;
}

int func_5(int iParam0)//Position - 0x3EC
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

void func_6(int iParam0, int iParam1)//Position - 0x446
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_19B04.f_2360.f_63.f_3A[iParam0] == iParam1)
	{
		return;
	}
	Global_19B04.f_2360.f_63.f_3A[iParam0] = iParam1;
}

void func_7(int iParam0, int iParam1)//Position - 0x48B
{
	if (iParam0 == 13 || iParam0 == -1)
	{
		return;
	}
	if (Global_19B04.f_2360.f_63.f_CD[iParam0] == iParam1)
	{
		return;
	}
	Global_19B04.f_2360.f_63.f_CD[iParam0] = iParam1;
}

int func_8(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x4D0
{
	struct<15> Var0;
	int iVar1;
	
	if (func_2(0))
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam7 == 76)
	{
		return 0;
	}
	if (iParam8 == 235)
	{
		return 0;
	}
	if (iParam3 == iParam2)
	{
		return 0;
	}
	if (((iParam2 != 144 && iParam2 != 0) && iParam2 != 1) && iParam2 != 2)
	{
		return 0;
	}
	if (Global_19B04.f_1DEB.f_88 < 9)
	{
		Var0 = iParam0;
		if (Global_19B04.f_1DEB.f_38F == Var0)
		{
			Global_19B04.f_1DEB.f_38F = -1;
		}
		Var0.f_3 = func_11(iParam1);
		Var0.f_5 = iParam6;
		Var0.f_4 = (unk_0x105601648511CC64() + iParam5);
		Var0.f_1 = iParam10;
		iVar1 = 0;
		unk_0xF0059F27F7BB6680(&iVar1, iParam2);
		Var0.f_2 = iVar1;
		Var0.f_6 = iParam3;
		Var0.f_E = iParam4;
		Var0.f_A = -1;
		Var0.f_B = -1;
		Var0.f_7 = iParam7;
		Var0.f_8 = iParam8;
		Var0.f_9 = iParam9;
		unk_0xF0059F27F7BB6680(&(Var0.f_1), 0);
		unk_0x7CB6FD92BE491AD9(&(Var0.f_1), 1);
		if (iParam1 == 0)
		{
			unk_0xF0059F27F7BB6680(&(Var0.f_1), 10);
		}
		Global_19B04.f_1DEB[Global_19B04.f_1DEB.f_88 /*15*/] = { Var0 };
		Global_19B04.f_1DEB.f_88++;
		func_9(iParam2);
		return 1;
	}
	return 0;
}

void func_9(int iParam0)//Position - 0x621
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_10(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_19B04.f_1DEB.f_88)
	{
		if (unk_0xFA30DFD0084E92FE(Global_19B04.f_1DEB[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_19B04.f_1DEB[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_19B04.f_1DEB[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_19B04.f_1DEB.f_2FC)
	{
		if (unk_0xFA30DFD0084E92FE(Global_19B04.f_1DEB.f_28B[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_19B04.f_1DEB.f_28B[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_19B04.f_1DEB.f_397[iParam0] = iVar1;
}

bool func_10(int iParam0)//Position - 0x6E5
{
	return iParam0 < 3;
}

int func_11(int iParam0)//Position - 0x6F1
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

int func_12()//Position - 0x75B
{
	return Global_19B04.f_1DEB.f_38F;
}

int func_13()//Position - 0x76D
{
	if (Global_389D.f_1 > 3)
	{
		unk_0x7CB6FD92BE491AD9(&Global_93C, 0);
		func_21(0);
		return 0;
	}
	unk_0xF0059F27F7BB6680(&Global_93C, 0);
	if (func_14(0, 0, 1, 1))
	{
		return 1;
	}
	unk_0x7CB6FD92BE491AD9(&Global_93C, 0);
	return 0;
}

int func_14(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x7B2
{
	if (Global_11542)
	{
		if ((iParam0 != 17 && iParam0 != 3) && iParam0 != 23)
		{
			return 0;
		}
		if (!unk_0xFA30DFD0084E92FE(Global_411DCA, 14))
		{
			if (iParam0 == 17)
			{
				unk_0xF0059F27F7BB6680(&Global_411DCA, 14);
				unk_0xF0059F27F7BB6680(&Global_411DCA, 16);
			}
			if (iParam0 == 3)
			{
				unk_0xF0059F27F7BB6680(&Global_411DCA, 14);
				unk_0xF0059F27F7BB6680(&Global_411DCA, 15);
			}
			if (iParam0 == 23)
			{
				unk_0xF0059F27F7BB6680(&Global_411DCA, 14);
				unk_0xF0059F27F7BB6680(&Global_411DCA, 27);
			}
		}
		if (Global_942[iParam0 /*15*/].f_9 == 0)
		{
			func_20();
		}
		if (unk_0xB731B8C5BCE89836(Global_942[iParam0 /*15*/].f_9) > 0)
		{
			unk_0x7CB6FD92BE491AD9(&Global_411DCA, 14);
			unk_0x7CB6FD92BE491AD9(&Global_411DCA, 16);
			unk_0x7CB6FD92BE491AD9(&Global_411DCA, 15);
			unk_0x7CB6FD92BE491AD9(&Global_411DCA, 27);
			return 1;
		}
		else
		{
			return 0;
		}
	}
	func_19();
	if (Global_389D.f_1 == 9)
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		if (func_5(0) == 1)
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
				func_18("cellphone_flashhand");
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
	func_20();
	func_15();
	if (unk_0xB731B8C5BCE89836(Global_942[iParam0 /*15*/].f_9) == 0)
	{
		Global_B99 = 0;
		Global_389D.f_1 = 7;
		func_18(&(Global_942[iParam0 /*15*/].f_5));
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

void func_15()//Position - 0x9C3
{
	if (Global_11542 == 0)
	{
		Global_942[14 /*15*/].f_4 = -99;
		Global_942[4 /*15*/].f_4 = -99;
		if (Global_25805E)
		{
			if (func_17(14))
			{
				func_16(2, "CELL_2", 2, "appInternet", 6, 1, 1, 0, 0);
				func_16(14, "CELL_29", 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
			else
			{
				func_16(14, "CELL_29", 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
		}
		else
		{
			func_16(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}
}

void func_16(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0xA47
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

bool func_17(int iParam0)//Position - 0xAFD
{
	return Global_8C41 == iParam0;
}

void func_18(char* sParam0)//Position - 0xB0B
{
	unk_0x63831D2D5110C305(sParam0);
	while (!unk_0xACE95AD318CE412B(sParam0))
	{
		SYSTEM::WAIT(0);
	}
}

void func_19()//Position - 0xB2B
{
	if (func_17(14))
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
		Global_389D = func_26();
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

void func_20()//Position - 0xBCD
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
		func_16(7, "CELL_5", 0, "appEmail", 4, 1, 1, 0, 0);
		func_16(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_16(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		if ((Global_8C41 == 15 && func_2(0) == 0) && Global_940 == 0)
		{
			func_16(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_3946 = 0;
			Global_941 = 255;
		}
		else
		{
			func_16(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_3946 = 1;
			Global_941 = 42;
		}
		if (iVar1 == 1)
		{
			func_16(0, "CELL_0", 4, "appContacts", 27, 1, 1, 0, 0);
		}
		else
		{
			func_16(0, "CELL_0", 4, "appContacts", 5, 1, 1, 0, 0);
		}
		func_16(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_16(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_16(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		if (Global_19B04.f_36C6.f_59 == 1)
		{
			func_16(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		if (Global_19B04.f_36C6.f_58 == 1)
		{
			func_16(16, "CELL_25", 0, "appContacts", 40, 2, 1, 0, 0);
		}
		func_16(25, "CELL_14", -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_16(11, "CELL_14", -99, "appContacts", 8, 2, 1, 0, 0);
		func_16(27, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(28, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(29, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
		func_16(30, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(31, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(32, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
	}
	else
	{
		func_16(7, "CELL_5", 0, "appMPEmail", 4, 1, 1, 0, 0);
		func_16(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_16(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_16(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_16(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		func_16(14, "CELL_29", 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_16(0, "CELL_0", 2, "appContacts", 5, 1, 1, 0, 0);
		func_16(21, "JIPMP_QJ", 3, "AppJIPMP", 14, 1, 1, 0, 0);
		if (unk_0xFA30DFD0084E92FE(Global_411DCA, 4) == 1)
		{
			func_16(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		func_16(13, "CELL_35", -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_16(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_16(15, "CELL_18", -99, "appContacts", 8, 1, 1, 0, 0);
		func_16(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_16(5, "CELL_4", -99, "appContacts", 12, 2, 1, 0, 0);
		func_16(23, "CELL_15", 0, "appContacts", 17, 2, 1, 0, 0);
		func_16(24, "CELL_15", 1, "appContacts", 17, 2, 1, 0, 0);
		func_16(25, "CELL_15", 2, "appContacts", 17, 2, 1, 0, 0);
		func_16(26, "CELL_15", 3, "appContacts", 17, 2, 1, 0, 0);
		func_16(27, "CELL_15", 4, "appContacts", 17, 2, 1, 0, 0);
		func_16(28, "CELL_15", 5, "appContacts", 17, 2, 1, 0, 0);
		func_16(29, "CELL_15", 6, "appContacts", 17, 2, 1, 0, 0);
		func_16(30, "CELL_15", 7, "appContacts", 17, 2, 1, 0, 0);
		func_16(31, "CELL_15", 8, "appContacts", 17, 2, 1, 0, 0);
		func_16(32, "CELL_15", 9, "appContacts", 17, 2, 1, 0, 0);
		func_16(33, "CELL_15", 10, "appContacts", 17, 2, 1, 0, 0);
		if (!unk_0xFA30DFD0084E92FE(Global_411DCA, 4) == 1)
		{
			if (Global_180414)
			{
				func_16(23, "CELL_CIRCBREAK", 8, "AppVLSI", 54, 1, 1, 0, 0);
			}
			else if (unk_0xFA30DFD0084E92FE(Global_411DCA, 20) == 1)
			{
				func_16(23, "CELL_SIGHTS", 8, "AppSettings", 59, 1, 1, 0, 0);
			}
			else if (unk_0xFA30DFD0084E92FE(Global_411DCA, 22) == 1)
			{
				func_16(23, "CELL_EXTRACT", 8, "AppExtraction", 58, 1, 1, 0, 0);
			}
			else if (unk_0xFA30DFD0084E92FE(Global_411DCA, 26) == 1)
			{
				func_16(23, "CELL_SECHACK", 8, "AppSecuroHack", 57, 1, 1, 0, 0);
			}
		}
		if ((((unk_0xFA30DFD0084E92FE(Global_411DCA, 4) == 0 && Global_180414 == 0) && unk_0xFA30DFD0084E92FE(Global_411DCA, 20) == 0) && unk_0xFA30DFD0084E92FE(Global_411DCA, 22) == 0) && unk_0xFA30DFD0084E92FE(Global_411DCA, 26) == 0)
		{
			func_16(23, "CELL_BOSSAGE", 8, "appMPBossAgency", 57, 1, 1, 0, 0);
		}
	}
}

void func_21(int iParam0)//Position - 0x10E9
{
	if (Global_3943)
	{
		func_23(0, 0);
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
	if (!func_22())
	{
		Global_389D.f_1 = 3;
	}
}

int func_22()//Position - 0x1159
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_23(bool bParam0, bool bParam1)//Position - 0x1180
{
	if (bParam0)
	{
		if (func_5(0))
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

int func_24()//Position - 0x11F4
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		return Global_161D2.f_2C == 1;
	}
	return 0;
}

int func_25()//Position - 0x1210
{
	if (unk_0xB731B8C5BCE89836(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_26()//Position - 0x122A
{
	func_27();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_27()//Position - 0x1243
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_29(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_28(unk_0xBC25C936A095B5BA());
			if (func_10(iVar0) && (!func_17(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_10(Global_19B04.f_932.f_21B.f_10CD))
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

int func_28(int iParam0)//Position - 0x1340
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_29(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_29(int iParam0)//Position - 0x137D
{
	if (func_10(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_30(int iParam0)//Position - 0x13A7
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_19B04.f_2360.f_63.f_3A[iParam0];
}

int func_31(int iParam0)//Position - 0x13D4
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_19B04.f_2360.f_14A[iParam0 /*6*/];
}

int func_32(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1400
{
	struct<15> Var0;
	
	if (func_2(0))
	{
		return 0;
	}
	if (iParam2 < 3)
	{
		if (unk_0xFA30DFD0084E92FE(iParam1, iParam2))
		{
			return 0;
		}
	}
	if (iParam1 < 1 || iParam1 > 7)
	{
		return 0;
	}
	if (iParam4 <= 0)
	{
		return 0;
	}
	if (Global_19B04.f_1DEB.f_28A < 30)
	{
		Var0 = iParam0;
		if (Global_19B04.f_1DEB.f_38F == Var0)
		{
			Global_19B04.f_1DEB.f_38F = -1;
		}
		Var0.f_1 = 0;
		Var0.f_6 = iParam2;
		Var0.f_2 = iParam1;
		Var0.f_E = iParam3;
		Var0.f_3 = iParam6;
		Var0.f_7 = -1;
		Var0.f_8 = 0;
		Var0.f_9 = -1;
		Var0.f_4 = (unk_0x105601648511CC64() + iParam4);
		Var0.f_9 = iParam5;
		Var0.f_A = -1;
		Var0.f_B = -1;
		unk_0xF0059F27F7BB6680(&(Var0.f_1), 0);
		unk_0xF0059F27F7BB6680(&(Var0.f_1), 6);
		Global_19B04.f_1DEB.f_C7[Global_19B04.f_1DEB.f_28A /*15*/] = { Var0 };
		Global_19B04.f_1DEB.f_28A++;
		return 1;
	}
	return 0;
}

int func_33(int iParam0)//Position - 0x1506
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_19B04.f_1DEB.f_88)
	{
		if (Global_19B04.f_1DEB[iVar0 /*15*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_19B04.f_1DEB.f_28A)
	{
		if (Global_19B04.f_1DEB.f_C7[iVar0 /*15*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_19B04.f_1DEB.f_C6)
	{
		if (Global_19B04.f_1DEB.f_89[iVar0 /*15*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_19B04.f_1DEB.f_2FC)
	{
		if (Global_19B04.f_1DEB.f_28B[iVar0 /*14*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_19B04.f_1DEB.f_362)
	{
		if (Global_19B04.f_1DEB.f_2FD[iVar0 /*10*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_34()//Position - 0x1602
{
	Global_16B42 = 1;
}

void func_35(int iParam0)//Position - 0x160F
{
	if (((iParam0 == 144 || iParam0 == 145) || iParam0 == 155) || iParam0 == 156)
	{
		return;
	}
	Global_8E69[iParam0] = unk_0x105601648511CC64();
}

void func_36()//Position - 0x164E
{
	Global_8E68 = unk_0x105601648511CC64();
}

int func_37(int iParam0)//Position - 0x165D
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0xFA30DFD0084E92FE(Global_19B04.f_2360.f_63.f_DB[iVar0], iVar1))
	{
		return 0;
	}
	unk_0xF0059F27F7BB6680(&(Global_19B04.f_2360.f_63.f_DB[iVar0]), iVar1);
	return 1;
}

void func_38()//Position - 0x16B7
{
	func_39(-1615086084);
	func_39(-1989308064);
	func_39(-1970925435);
	func_39(-1060930305);
	func_39(-1817481777);
	Global_940 = 0;
	unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
	unk_0x95E4B6F3ED223F5A();
}

int func_39(int iParam0)//Position - 0x1703
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < Global_19B04.f_1DEB.f_88)
	{
		if (Global_19B04.f_1DEB[iVar0 /*15*/] == iParam0)
		{
			if (Global_8E64 != iVar0)
			{
				func_46(iVar0);
				func_43(iParam0);
				iVar1 = 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_19B04.f_1DEB.f_C6)
	{
		if (Global_19B04.f_1DEB.f_89[iVar0 /*15*/] == iParam0)
		{
			func_43(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_19B04.f_1DEB.f_28A)
	{
		if (Global_19B04.f_1DEB.f_C7[iVar0 /*15*/] == iParam0)
		{
			func_42(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_19B04.f_1DEB.f_2FC)
	{
		if (Global_19B04.f_1DEB.f_28B[iVar0 /*14*/] == iParam0)
		{
			func_41(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_19B04.f_1DEB.f_362)
	{
		if (Global_19B04.f_1DEB.f_2FD[iVar0 /*10*/] == iParam0)
		{
			func_40(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	return iVar1;
}

void func_40(int iParam0)//Position - 0x182A
{
	int iVar0;
	struct<10> Var1;
	
	if (iParam0 < 0 || iParam0 >= Global_19B04.f_1DEB.f_362)
	{
		return;
	}
	if (Global_19B04.f_1DEB.f_362 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_19B04.f_1DEB.f_362 - 2))
		{
			Global_19B04.f_1DEB.f_2FD[iVar0 /*10*/] = { Global_19B04.f_1DEB.f_2FD[iVar0 + 1 /*10*/] };
			iVar0++;
		}
	}
	if (Global_19B04.f_1DEB.f_362 > 0)
	{
		Global_19B04.f_1DEB.f_2FD[(Global_19B04.f_1DEB.f_362 - 1) /*10*/] = { Var1 };
		Global_19B04.f_1DEB.f_362 = (Global_19B04.f_1DEB.f_362 - 1);
	}
}

void func_41(int iParam0)//Position - 0x18E3
{
	int iVar0;
	struct<14> Var1;
	
	if (iParam0 < 0 || iParam0 >= Global_19B04.f_1DEB.f_2FC)
	{
		return;
	}
	if (Global_19B04.f_1DEB.f_2FC > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_19B04.f_1DEB.f_2FC - 2))
		{
			Global_19B04.f_1DEB.f_28B[iVar0 /*14*/] = { Global_19B04.f_1DEB.f_28B[iVar0 + 1 /*14*/] };
			iVar0++;
		}
	}
	if (Global_19B04.f_1DEB.f_2FC > 0)
	{
		Global_19B04.f_1DEB.f_28B[(Global_19B04.f_1DEB.f_2FC - 1) /*14*/] = { Var1 };
		Global_19B04.f_1DEB.f_2FC = (Global_19B04.f_1DEB.f_2FC - 1);
	}
	func_9(0);
	func_9(1);
	func_9(2);
}

void func_42(int iParam0)//Position - 0x19AB
{
	struct<15> Var0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < Global_19B04.f_1DEB.f_28A)
	{
		if (Global_19B04.f_1DEB.f_C7[iVar1 /*15*/] == iParam0)
		{
			iVar2 = iVar1;
			while (iVar2 <= (Global_19B04.f_1DEB.f_28A - 2))
			{
				Global_19B04.f_1DEB.f_C7[iVar2 /*15*/] = { Global_19B04.f_1DEB.f_C7[iVar2 + 1 /*15*/] };
				iVar2++;
			}
			Global_19B04.f_1DEB.f_C7[(Global_19B04.f_1DEB.f_28A - 1) /*15*/] = { Var0 };
			Global_19B04.f_1DEB.f_28A = (Global_19B04.f_1DEB.f_28A - 1);
			return;
		}
		iVar1++;
	}
}

void func_43(int iParam0)//Position - 0x1A58
{
	struct<15> Var0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < Global_19B04.f_1DEB.f_C6)
	{
		if (Global_19B04.f_1DEB.f_89[iVar1 /*15*/] == iParam0)
		{
			func_44(Global_19B04.f_1DEB.f_89[iVar1 /*15*/].f_6);
			iVar2 = iVar1;
			while (iVar2 <= (Global_19B04.f_1DEB.f_C6 - 2))
			{
				Global_19B04.f_1DEB.f_89[iVar2 /*15*/] = { Global_19B04.f_1DEB.f_89[iVar2 + 1 /*15*/] };
				iVar2++;
			}
			Global_19B04.f_1DEB.f_89[(Global_19B04.f_1DEB.f_C6 - 1) /*15*/] = { Var0 };
			Global_19B04.f_1DEB.f_C6 = (Global_19B04.f_1DEB.f_C6 - 1);
			return;
		}
		iVar1++;
	}
}

int func_44(int iParam0)//Position - 0x1B14
{
	int iVar0;
	
	if (Global_75[iParam0 /*10*/].f_8 != 144)
	{
		if (Global_19B04.f_6D75[iParam0 /*29*/].f_13[Global_389D] == 1)
		{
			Global_19B04.f_6D75[iParam0 /*29*/].f_13[Global_389D] = 0;
			if (Global_19B04.f_6D75[iParam0 /*29*/].f_18[Global_389D] == 0)
			{
				iVar0 = Global_389D;
				func_45(iParam0, iVar0);
			}
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_45(int iParam0, int iParam1)//Position - 0x1B85
{
	if (Global_75[iParam0 /*10*/].f_8 != 144)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			Global_19B04.f_6D75[iParam0 /*29*/].f_C[iParam1] = 0;
			Global_19B04.f_6D75[iParam0 /*29*/].f_18[iParam1] = 0;
		}
	}
}

void func_46(int iParam0)//Position - 0x1BC8
{
	int iVar0;
	int iVar1;
	struct<15> Var2;
	
	if (iParam0 < 0 || iParam0 >= Global_19B04.f_1DEB.f_88)
	{
		return;
	}
	iVar1 = Global_19B04.f_1DEB[iParam0 /*15*/].f_2;
	if (Global_19B04.f_1DEB.f_88 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_19B04.f_1DEB.f_88 - 2))
		{
			Global_19B04.f_1DEB[iVar0 /*15*/] = { Global_19B04.f_1DEB[iVar0 + 1 /*15*/] };
			iVar0++;
		}
	}
	if (Global_19B04.f_1DEB.f_88 > 0)
	{
		Global_19B04.f_1DEB[(Global_19B04.f_1DEB.f_88 - 1) /*15*/] = { Var2 };
		Global_19B04.f_1DEB.f_88 = (Global_19B04.f_1DEB.f_88 - 1);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xFA30DFD0084E92FE(iVar1, iVar0))
		{
			func_9(iVar0);
		}
		iVar0++;
	}
}

