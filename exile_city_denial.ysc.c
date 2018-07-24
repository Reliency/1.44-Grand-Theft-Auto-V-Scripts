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
	bool bLocal_29 = 0;
	bool bLocal_30 = 0;
	int iLocal_31 = 0;
	bool bLocal_32 = 0;
	var uLocal_33 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	
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
	iLocal_28 = -1;
	bLocal_32 = true;
	if (unk_0xB731B8C5BCE89836(joaat("exile_city_denial")) > 1)
	{
		Global_8C1E = 0;
		unk_0x95E4B6F3ED223F5A();
	}
	func_36(18);
	func_35();
	SYSTEM::SETTIMERA(0);
	SYSTEM::SETTIMERB(0);
	iVar0 = 2;
	iVar1 = 0;
	while (!iLocal_31)
	{
		iLocal_31 = 1;
		if (unk_0xE8A79675302ED812(83))
		{
			Global_8C1E = 0;
			if (!func_34(130))
			{
				func_33(18);
				func_32();
			}
			else if (func_34(131))
			{
				func_33(18);
				func_32();
			}
			switch (unk_0x663171D6F90FBA5A())
			{
				case 16:
					func_33(18);
					func_32();
					break;
				
				case 2:
					func_32();
					break;
				
				case 1:
					func_24(1628462442);
					func_24(1791324372);
					func_24(-240877892);
					func_24(1806999335);
					func_24(2054503592);
					func_24(-2009081795);
					bLocal_29 = false;
					while (!unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
					{
						SYSTEM::WAIT(1000);
					}
					iLocal_31 = 0;
					break;
				}
		}
	}
	while (true)
	{
		if (iVar1 > 0)
		{
			iVar1 = (iVar1 - SYSTEM::TIMERA());
			SYSTEM::SETTIMERA(0);
			if (iVar1 < 0)
			{
				iVar1 = 0;
			}
		}
		vVar2 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false) };
		bLocal_29 = func_23(vVar2, &bLocal_32);
		if (Global_1164F || Global_1164F.f_1)
		{
			bLocal_29 = false;
		}
		bVar3 = false;
		bVar4 = false;
		if (func_34(131))
		{
			bVar3 = true;
		}
		if (!func_34(130))
		{
			bVar3 = true;
		}
		if (bVar3)
		{
			Global_8C1E = 0;
			func_33(18);
			func_32();
		}
		if (func_21() == 1)
		{
			bVar4 = true;
		}
		Global_8C1E = bLocal_29;
		if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			if (unk_0x57379381A330B2FF(unk_0xBC25C936A095B5BA()) || unk_0xE3CA72BD77D43B09(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x2A348A3A98B80B13(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)))
				{
					bLocal_29 = false;
				}
			}
		}
		if (bLocal_30 != bLocal_29)
		{
			if (!bLocal_29)
			{
				func_19();
			}
			if (bLocal_29 && !bVar4)
			{
				bVar5 = false;
				bVar6 = true;
				while (bVar6)
				{
					switch (func_17(&iLocal_28, 6, 12, 0, 0))
					{
						case 0:
							bVar6 = false;
							bVar5 = false;
							break;
						
						case 1:
							bVar6 = false;
							bVar5 = true;
							break;
						
						default:
							SYSTEM::WAIT(0);
							break;
					}
					if (Global_11542)
					{
						unk_0x95E4B6F3ED223F5A();
					}
				}
				if (bVar5)
				{
					unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA());
					if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
					{
						iVar7 = unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA());
						while (unk_0xBF697FA7422C0621(iVar7))
						{
							SYSTEM::WAIT(5000);
							unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA());
							if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
							{
								iVar7 = unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA());
							}
						}
					}
					if (func_15(unk_0xBC25C936A095B5BA()) == 0)
					{
						if (!unk_0xFA30DFD0084E92FE(Global_19B04.f_1DEB.f_39B, 0))
						{
							func_10(1628462442, 7, 1, 31, 3, 10000, 20000, -1, -1, 150, -1, 1024);
						}
						else if (!unk_0xFA30DFD0084E92FE(Global_19B04.f_1DEB.f_39B, 1))
						{
							func_10(1791324372, 7, 1, 31, 3, 10000, 20000, -1, -1, 150, -1, 1024);
						}
						else if (!unk_0xFA30DFD0084E92FE(Global_19B04.f_1DEB.f_39B, 2))
						{
							func_10(-240877892, 7, 1, 31, 3, 10000, 20000, -1, -1, 150, -1, 1024);
						}
					}
					else if (func_15(unk_0xBC25C936A095B5BA()) == 2)
					{
						if (!unk_0xFA30DFD0084E92FE(Global_19B04.f_1DEB.f_39B, 3))
						{
							func_10(1806999335, 7, 4, 31, 3, 10000, 20000, -1, -1, 151, -1, 1024);
						}
						else if (!unk_0xFA30DFD0084E92FE(Global_19B04.f_1DEB.f_39B, 4))
						{
							func_10(2054503592, 7, 4, 31, 3, 10000, 20000, -1, -1, 151, -1, 1024);
						}
						else if (!unk_0xFA30DFD0084E92FE(Global_19B04.f_1DEB.f_39B, 4))
						{
							func_10(-2009081795, 7, 4, 31, 3, 10000, 20000, -1, -1, 151, -1, 1024);
						}
					}
					if (iVar1 == 0 && !bVar4)
					{
						if ((!func_9(0) && !func_9(4)) && !func_9(3))
						{
							if (unk_0x7C1DBF05F73F6132(11) < 256)
							{
								if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
								{
									if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
									{
										unk_0xFDE08BF17742D2F5(11, unk_0xBC25C936A095B5BA(), iVar0, 0f, &uLocal_33, 0, 0);
									}
								}
							}
							if (unk_0x726D9204B160D23E())
							{
								if (bLocal_32)
								{
									func_8("CITDENAL", -1);
								}
								else
								{
									func_8("CITDENAL_R", -1);
								}
								iVar1 = 120000;
							}
						}
					}
				}
				else
				{
					bLocal_29 = false;
				}
			}
			else
			{
				func_19();
			}
		}
		if (bLocal_29)
		{
			if (!unk_0x51FE3C0716E82F24(uLocal_33))
			{
				if (unk_0x7C1DBF05F73F6132(11) < 256)
				{
					if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
					{
						if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
						{
							unk_0xFDE08BF17742D2F5(11, unk_0xBC25C936A095B5BA(), iVar0, 0f, &uLocal_33, 0, 0);
						}
					}
				}
			}
		}
		if (bLocal_29 && SYSTEM::TIMERB() > 60000)
		{
			SYSTEM::SETTIMERB(0);
			iVar0 = (iVar0 + unk_0x491B2241281A03B7(1, 2));
			if (iVar0 < 8)
			{
				if (unk_0x51FE3C0716E82F24(uLocal_33))
				{
					unk_0x942026F6CCC37C25(uLocal_33, 11, iVar0);
				}
				else if (unk_0x7C1DBF05F73F6132(11) < 256)
				{
					if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
					{
						if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
						{
							unk_0xFDE08BF17742D2F5(11, unk_0xBC25C936A095B5BA(), iVar0, 0f, &uLocal_33, 0, 0);
						}
					}
				}
			}
			else
			{
				iVar0 = 8;
			}
		}
		bLocal_30 = bLocal_29;
		if (bVar4)
		{
			Global_8C1E = 0;
			if (bLocal_29)
			{
				func_19();
			}
			func_4();
			while (func_21() == 1)
			{
				SYSTEM::WAIT(2000);
			}
			func_35();
			bVar4 = false;
		}
		if (bLocal_29)
		{
			SYSTEM::WAIT(0);
		}
		else
		{
			SYSTEM::WAIT(10000);
		}
		if (func_1(12) && !func_9(12))
		{
			if (bLocal_29)
			{
				func_19();
			}
			while (func_9(0) || func_9(4))
			{
				SYSTEM::WAIT(8000);
			}
		}
	}
	func_4();
}

int func_1(int iParam0)//Position - 0x600
{
	if (Global_8C41 == 15)
	{
		return 0;
	}
	if (func_2(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_2(int iParam0)//Position - 0x622
{
	return func_3(iParam0, Global_8C41);
}

int func_3(int iParam0, int iParam1)//Position - 0x633
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

void func_4()//Position - 0x814
{
	func_7(0, 1);
	func_7(2, 1);
	func_7(1, 1);
	func_5(0, 1);
	func_5(1, 1);
	func_5(3, 1);
	func_5(2, 1);
}

void func_5(int iParam0, bool bParam1)//Position - 0x846
{
	if (iParam0 == 7)
	{
		return;
	}
	if (bParam1)
	{
		unk_0xF0059F27F7BB6680(&(Global_19B04.f_1C20.f_11[iParam0]), 0);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_1C20.f_11[iParam0]), 0);
	}
	unk_0xF88EAFC5F6D17453(Global_158AF[iParam0 /*9*/].f_8, !bParam1);
	func_6(Global_158AF[iParam0 /*9*/].f_7, 0, 0);
}

void func_6(int iParam0, bool bParam1, bool bParam2)//Position - 0x8A4
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

void func_7(int iParam0, bool bParam1)//Position - 0x9AD
{
	if (iParam0 == 5)
	{
		return;
	}
	if (bParam1)
	{
		unk_0xF0059F27F7BB6680(&(Global_19B04.f_1C20.f_B[iParam0]), 0);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_1C20.f_B[iParam0]), 0);
	}
	unk_0x38DC348EB8080D28(Global_158EF[iParam0 /*9*/].f_8, !bParam1);
	func_6(Global_158EF[iParam0 /*9*/].f_7, 0, 0);
}

void func_8(char* sParam0, int iParam1)//Position - 0xA0B
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, true, iParam1);
}

bool func_9(int iParam0)//Position - 0xA22
{
	return Global_8C41 == iParam0;
}

int func_10(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0xA30
{
	struct<15> Var0;
	int iVar1;
	
	if (func_14(0))
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
	if (iParam8 == 76)
	{
		return 0;
	}
	if (iParam9 == 235)
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
	if (iParam4 < 3)
	{
		if (iParam4 != iParam3)
		{
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7)
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
		Var0.f_3 = func_13(iParam1);
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam2;
		Var0.f_4 = (unk_0x105601648511CC64() + iParam5);
		Var0.f_5 = iParam6;
		Var0.f_6 = iParam3;
		Var0.f_E = iParam4;
		Var0.f_A = iParam7;
		Var0.f_B = -1;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		unk_0x7CB6FD92BE491AD9(&(Var0.f_1), 1);
		unk_0x7CB6FD92BE491AD9(&(Var0.f_1), 0);
		if (iParam7 != -1)
		{
			unk_0xF0059F27F7BB6680(&(Var0.f_1), 11);
		}
		else if (iParam1 == 0)
		{
			unk_0xF0059F27F7BB6680(&(Var0.f_1), 10);
		}
		Global_19B04.f_1DEB[Global_19B04.f_1DEB.f_88 /*15*/] = { Var0 };
		Global_19B04.f_1DEB.f_88++;
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (unk_0xFA30DFD0084E92FE(iParam2, iVar1))
			{
				func_11(iVar1);
			}
			iVar1++;
		}
		return 1;
	}
	return 0;
}

void func_11(int iParam0)//Position - 0xBB0
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_12(iParam0))
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

bool func_12(int iParam0)//Position - 0xC74
{
	return iParam0 < 3;
}

int func_13(int iParam0)//Position - 0xC80
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

bool func_14(bool bParam0)//Position - 0xCEA
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_1163A, 0);
}

int func_15(int iParam0)//Position - 0xD15
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_16(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_16(int iParam0)//Position - 0xD52
{
	if (func_12(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_17(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0xD7C
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
		if (func_1(0))
		{
			return 0;
		}
		Global_8C1D++;
		*iParam0 = Global_8C1D;
		unk_0x3D7FF8418367D451(unk_0xFC1CAE18F3ECBF2D(), 0);
		Global_4336.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x27CBA62D1F6DF074(8);
		}
		Global_8C41 = iParam2;
		Global_8C1B = *iParam0;
		Global_8C1C = iParam4;
		Global_8C1A = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_8C1A > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_8C1A)
			{
				if (Global_8C20[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_8C1B == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_2(iParam2))
		{
			return 0;
		}
		if (Global_8C1A == 8)
		{
			return 0;
		}
		Global_8C1D++;
		*iParam0 = Global_8C1D;
		Global_8C20[Global_8C1A /*4*/] = Global_8C1D;
		Global_8C20[Global_8C1A /*4*/].f_1 = iParam1;
		Global_8C20[Global_8C1A /*4*/].f_2 = iParam2;
		Global_8C20[Global_8C1A /*4*/].f_3 = 0;
		Global_8C1A++;
		if (iParam4 != 0)
		{
			func_18(iParam0, iParam4);
		}
	}
	return 2;
}

void func_18(var uParam0, int iParam1)//Position - 0xEB3
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

void func_19()//Position - 0xF02
{
	if (iLocal_28 != -1)
	{
		func_20(&iLocal_28);
	}
	func_24(1628462442);
	func_24(1791324372);
	func_24(-240877892);
	func_24(1806999335);
	func_24(2054503592);
	func_24(-2009081795);
	bLocal_29 = false;
	bLocal_30 = false;
	Global_8C1E = 0;
	unk_0xA77AF936A56AEF7A(uLocal_33);
}

void func_20(int iParam0)//Position - 0xF62
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_8C1B)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_8C1A = 0;
	Global_8C1C = 0;
	Global_8C41 = 15;
	Global_DA9C = 0;
	Global_DA9D = 0;
}

int func_21()//Position - 0xF9F
{
	func_22();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_22()//Position - 0xFB8
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_16(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_15(unk_0xBC25C936A095B5BA());
			if (func_12(iVar0) && (!func_9(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_12(Global_19B04.f_932.f_21B.f_10CD))
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

int func_23(struct<2> Param0, var uParam1, int iParam2)//Position - 0x10B5
{
	if (!(unk_0x726D9204B160D23E() || unk_0x26641E1BFD792DBC()))
	{
		return 0;
	}
	if (Param0.f_1 < 400f)
	{
		if (Param0 < 1400f)
		{
			if (Param0 > -1900f)
			{
				if (Param0.f_1 > -3500f)
				{
					*iParam2 = 1;
					return 1;
				}
			}
		}
	}
	if (Param0 < 1536.35f)
	{
		if (Param0.f_1 > 1016.18f)
		{
			if (Param0.f_1 < 1213.53f)
			{
				if (Param0 > 1278.08f)
				{
					*iParam2 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_24(int iParam0)//Position - 0x1144
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
				func_31(iVar0);
				func_28(iParam0);
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
			func_28(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_19B04.f_1DEB.f_28A)
	{
		if (Global_19B04.f_1DEB.f_C7[iVar0 /*15*/] == iParam0)
		{
			func_27(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_19B04.f_1DEB.f_2FC)
	{
		if (Global_19B04.f_1DEB.f_28B[iVar0 /*14*/] == iParam0)
		{
			func_26(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_19B04.f_1DEB.f_362)
	{
		if (Global_19B04.f_1DEB.f_2FD[iVar0 /*10*/] == iParam0)
		{
			func_25(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	return iVar1;
}

void func_25(int iParam0)//Position - 0x126B
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

void func_26(int iParam0)//Position - 0x1324
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
	func_11(0);
	func_11(1);
	func_11(2);
}

void func_27(int iParam0)//Position - 0x13EC
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

void func_28(int iParam0)//Position - 0x1499
{
	struct<15> Var0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < Global_19B04.f_1DEB.f_C6)
	{
		if (Global_19B04.f_1DEB.f_89[iVar1 /*15*/] == iParam0)
		{
			func_29(Global_19B04.f_1DEB.f_89[iVar1 /*15*/].f_6);
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

int func_29(int iParam0)//Position - 0x1555
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
				func_30(iParam0, iVar0);
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

void func_30(int iParam0, int iParam1)//Position - 0x15C6
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

void func_31(int iParam0)//Position - 0x1609
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
			func_11(iVar0);
		}
		iVar0++;
	}
}

void func_32()//Position - 0x16E4
{
	func_19();
	func_4();
	unk_0x95E4B6F3ED223F5A();
}

int func_33(int iParam0)//Position - 0x16F8
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

int func_34(int iParam0)//Position - 0x1752
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_19B04.f_2360.f_63.f_3A[iParam0];
}

void func_35()//Position - 0x177F
{
	func_7(0, 0);
	func_7(2, 0);
	func_7(1, 0);
	func_5(0, 0);
	func_5(1, 0);
	func_5(3, 0);
	func_5(2, 0);
}

int func_36(int iParam0)//Position - 0x17B1
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

