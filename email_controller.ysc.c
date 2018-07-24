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
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0[122];
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	int iVar14;
	bool bVar15;
	bool bVar16;
	int iVar17;
	
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
	if (unk_0xE8A79675302ED812(34))
	{
		func_67();
	}
	func_66();
	func_65();
	Global_90C3 = 0;
	iVar1 = func_58();
	iVar2 = func_58();
	iVar3 = 2000;
	Global_90C5 = 1;
	bVar4 = true;
	while (true)
	{
		iVar5 = 0;
		if (bVar4)
		{
			if (unk_0xFA30DFD0084E92FE(Global_19B04.f_617D, (4 - 1)))
			{
				func_57(26);
				bVar4 = false;
			}
		}
		if (!Global_90C4 && unk_0x105601648511CC64() > Global_8E68)
		{
			iVar5 = 0;
			while (iVar5 < 122)
			{
				if ((Global_9DCB[iVar5 /*46*/] && !Global_9DCB[iVar5 /*46*/].f_1) && !Global_9DCB[iVar5 /*46*/].f_2D)
				{
					iVar0[iVar5] = (iVar0[iVar5] + iVar3);
					if (iVar0[iVar5] > Global_9DCB[iVar5 /*46*/].f_2B)
					{
						if (func_33(7, 144, 2, -1, 0))
						{
							func_31(iVar5, 0);
							iVar0[iVar5] = 0;
							Global_90C5 = 1;
						}
					}
				}
				SYSTEM::WAIT(0);
				iVar5++;
			}
			iVar1 = func_58();
			iVar6 = 0;
			iVar7 = 0;
			iVar8 = 0;
			func_19(iVar1, iVar2, &iVar7, &iVar7, &iVar6, &iVar7, &iVar7, &iVar7);
			if (iVar6 < 0)
			{
				iVar6 = (iVar6 * -1);
			}
			if (iVar6 > 0 && Global_389D.f_1 == 3)
			{
				iVar2 = iVar1;
				if (Global_BAB0 > 0)
				{
					iVar9 = Global_BAB0;
					iVar10 = 0;
					while (iVar9 != 0)
					{
						if ((Global_BAB1[iVar10 /*53*/].f_34 != 0 && iVar10 < 8) && Global_BAB1[iVar10 /*53*/].f_4)
						{
							Global_BAB1[iVar10 /*53*/].f_2 = (Global_BAB1[iVar10 /*53*/].f_2 - iVar6);
							bVar11 = false;
							bVar12 = false;
							bVar13 = false;
							iVar14 = 0;
							while (!bVar13)
							{
								if (Global_B522[iVar14 /*203*/].f_1 != Global_BAB1[iVar10 /*53*/].f_34)
								{
									iVar14++;
								}
								else
								{
									bVar12 = true;
									bVar13 = true;
								}
								if (iVar14 == 7)
								{
									bVar13 = true;
									Global_BAB1[iVar10 /*53*/].f_34 = 0;
									bVar11 = true;
								}
							}
							if (!bVar12)
							{
								bVar11 = true;
								Global_BAB1[iVar10 /*53*/].f_4 = 0;
							}
							else if (Global_BAB1[iVar10 /*53*/].f_2 < 1)
							{
								if (func_33(7, 145, 2, -1, 0))
								{
									bVar15 = false;
									if (Global_BAB1[iVar10 /*53*/].f_5 || Global_BAB1[iVar10 /*53*/].f_A > 0)
									{
										bVar15 = true;
									}
									if (func_16(Global_BAB1[iVar10 /*53*/], Global_BAB1[iVar10 /*53*/].f_1, bVar15))
									{
										bVar16 = true;
										if (Global_BAB1[iVar10 /*53*/].f_A > 0)
										{
											bVar16 = false;
										}
										if (Global_BAB1[iVar10 /*53*/].f_5)
										{
											func_15(Global_BAB1[iVar10 /*53*/], &(Global_BAB1[iVar10 /*53*/].f_6), bVar16);
										}
										if (Global_BAB1[iVar10 /*53*/].f_A > 0)
										{
											iVar8 = 0;
											iVar8 = 0;
											while (iVar8 < Global_BAB1[iVar10 /*53*/].f_A)
											{
												func_14(Global_BAB1[iVar10 /*53*/], &(Global_BAB1[iVar10 /*53*/].f_B[iVar8 /*4*/]));
												iVar8++;
											}
										}
										if (bVar15 && !bVar16)
										{
											func_1(Global_BAB1[iVar10 /*53*/]);
										}
										func_57(Global_BAB1[iVar10 /*53*/]);
									}
									Global_BAB1[iVar10 /*53*/].f_34 = 0;
									Global_BAB1[iVar10 /*53*/].f_5 = 0;
									Global_BAB1[iVar10 /*53*/].f_2 = 0;
									bVar11 = true;
									Global_BAB1[iVar10 /*53*/].f_4 = 0;
								}
							}
							if (bVar11)
							{
								Global_BAB0 = (Global_BAB0 - 1);
							}
							iVar9 = (iVar9 - 1);
						}
						iVar10++;
						if (iVar10 == 8)
						{
							iVar9 = 0;
						}
						SYSTEM::WAIT(0);
					}
				}
			}
		}
		SYSTEM::WAIT(iVar3);
		Global_90C6 = 0;
		Global_90C7 = 0;
		Global_90C8 = 0;
		iVar17 = Global_B3B8[0 /*120*/];
		if (iVar17 > 16)
		{
			iVar17 = 16;
		}
		iVar5 = 0;
		while (iVar5 < iVar17)
		{
			if (!Global_B3B8[0 /*120*/].f_45[iVar5])
			{
				Global_90C6++;
			}
			iVar5++;
		}
		iVar17 = Global_B3B8[1 /*120*/];
		if (iVar17 > 16)
		{
			iVar17 = 16;
		}
		iVar5 = 0;
		while (iVar5 < iVar17)
		{
			if (!Global_B3B8[1 /*120*/].f_45[iVar5])
			{
				Global_90C7++;
			}
			iVar5++;
		}
		iVar17 = Global_B3B8[2 /*120*/];
		if (iVar17 > 16)
		{
			iVar17 = 16;
		}
		iVar5 = 0;
		while (iVar5 < iVar17)
		{
			if (!Global_B3B8[2 /*120*/].f_45[iVar5])
			{
				Global_90C8++;
			}
			iVar5++;
		}
		SYSTEM::WAIT(iVar3);
	}
}

void func_1(int iParam0)//Position - 0x43C
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar4;
	char* sVar5;
	
	iVar0 = func_13(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_B522[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	iVar1 = Global_B522[iVar0 /*203*/].f_A[(Global_B522[iVar0 /*203*/].f_9 - 1) /*48*/];
	iVar2 = (Global_B522[iVar0 /*203*/].f_9 - 1);
	if (!Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_1)
	{
		iVar4 = Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/];
		MemCopy(&Var3, {func_12(Global_90CE[iVar4 /*12*/].f_1)}, 4);
	}
	else
	{
		Var3 = { Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_2 };
	}
	if (iParam0 == 28)
	{
		switch (iVar1)
		{
			case 249:
				sVar5 = "PW_FEED_EM_1";
				break;
			
			case 269:
				sVar5 = "PW_FEED_EM_3";
				break;
			
			default:
				sVar5 = "PW_FEED_EM_2";
				break;
		}
		func_2(1, Global_90CE[iVar1 /*12*/].f_2, iVar1, sVar5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		switch (Global_90CE[iVar1 /*12*/].f_3)
		{
			case 0:
				func_2(0, Global_90CE[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 1:
				func_2(1, Global_90CE[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 2:
				func_2(2, Global_90CE[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			}
	}
}

void func_2(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13)//Position - 0x7A8
{
	int iVar0;
	bool bVar1;
	char cVar2[64];
	
	if (unk_0x866EAD7E27D8D0F8())
	{
		return;
	}
	iVar0 = func_6();
	bVar1 = false;
	StringCopy(&cVar2, func_5(iParam1, &bVar1), 64);
	if (iVar0 == iParam0)
	{
		switch (iParam2)
		{
			case 72:
				unk_0x2E94302CFF011F2E("PROPR_INCEMAIL1");
				break;
			
			case 73:
				unk_0x2E94302CFF011F2E("PROPR_INCEMAIL3");
				break;
			
			case 74:
				unk_0x2E94302CFF011F2E("PROPR_INCEMAIL2");
				break;
			
			default:
				unk_0x2E94302CFF011F2E(sParam3);
				if (!unk_0xF1734B55490E9045(sParam4))
				{
					unk_0xC9C304D0AABE1335(sParam4);
				}
				if (!unk_0xF1734B55490E9045(sParam5))
				{
					unk_0xC9C304D0AABE1335(sParam5);
				}
				if (!unk_0xF1734B55490E9045(sParam6))
				{
					unk_0xC9C304D0AABE1335(sParam6);
				}
				if (!unk_0xF1734B55490E9045(sParam7))
				{
					unk_0xC9C304D0AABE1335(sParam7);
				}
				if (!unk_0xF1734B55490E9045(sParam8))
				{
					unk_0xC9C304D0AABE1335(sParam8);
				}
				if (!unk_0xF1734B55490E9045(sParam9))
				{
					unk_0xC9C304D0AABE1335(sParam9);
				}
				if (!unk_0xF1734B55490E9045(sParam10))
				{
					unk_0xC9C304D0AABE1335(sParam10);
				}
				if (!unk_0xF1734B55490E9045(sParam11))
				{
					unk_0xC9C304D0AABE1335(sParam11);
				}
				if (!unk_0xF1734B55490E9045(sParam12))
				{
					unk_0xC9C304D0AABE1335(sParam12);
				}
				if (!unk_0xF1734B55490E9045(sParam13))
				{
					unk_0xC9C304D0AABE1335(sParam13);
				}
				break;
		}
		if (bVar1)
		{
			func_3(unk_0x7BB0762D8C75A3C7(&cVar2, &cVar2, 0, 2, unk_0xFCB4C1AC11347344(func_4(iParam1)), 0));
		}
		else
		{
			func_3(unk_0x7BB0762D8C75A3C7("CHAR_DEFAULT", "CHAR_DEFAULT", 0, 2, unk_0xFCB4C1AC11347344(func_4(iParam1)), 0));
		}
		switch (Global_389D)
		{
			case 0:
				StringCopy(&Global_3892, "Phone_SoundSet_Michael", 24);
				Global_90C6++;
				if (Global_90C6 > 16)
				{
					Global_90C6 = 16;
				}
				break;
			
			case 2:
				StringCopy(&Global_3892, "Phone_SoundSet_Trevor", 24);
				Global_90C8++;
				if (Global_90C8 > 16)
				{
					Global_90C8 = 16;
				}
				break;
			
			case 1:
				StringCopy(&Global_3892, "Phone_SoundSet_Franklin", 24);
				Global_90C7++;
				if (Global_90C7 > 16)
				{
					Global_90C7 = 16;
				}
				break;
			
			default:
				StringCopy(&Global_3892, "Phone_SoundSet_Default", 24);
				break;
		}
		unk_0xC4BA30B532FE260F(-1, "Notification", &Global_3892, 1);
	}
}

void func_3(int iParam0)//Position - 0x986
{
	Global_90C9[Global_90CD] = iParam0;
	Global_41DA = 1;
	Global_41D9 = iParam0;
	Global_90CD++;
	if (Global_90CD == 3)
	{
		Global_90CD = 0;
	}
}

char* func_4(int iParam0)//Position - 0x9B4
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_0";
		
		case 3:
			return "EMSTR_3";
		
		case 1:
			return "EMSTR_6";
		
		case 2:
			return "EMSTR_9";
		
		case 4:
			return "EMSTR_12";
		
		case 5:
			return "EMSTR_29";
		
		case 6:
			return "EMSTR_36";
		
		case 7:
			return "EMSTR_39";
		
		case 8:
			return "EMSTR_52";
		
		case 9:
			return "EMSTR_55";
		
		case 10:
			return "EMSTR_58";
		
		case 11:
			return "EMSTR_78";
		
		case 12:
			return "EMSTR_81";
		
		case 13:
			return "EMSTR_84";
		
		case 14:
			return "EMSTR_87";
		
		case 15:
			return "EMSTR_106";
		
		case 16:
			return "EMSTR_114";
		
		case 17:
			return "EMSTR_142";
		
		case 18:
			return "EMSTR_145";
		
		case 19:
			return "EMSTR_152";
		
		case 20:
			return "EMSTR_157";
		
		case 21:
			return "EMSTR_163";
		
		case 22:
			return "EMSTR_182";
		
		case 23:
			return "EMSTR_187";
		
		case 24:
			return "EMSTR_190";
		
		case 25:
			return "EMSTR_206";
		
		case 26:
			return "EMSTR_219";
		
		case 27:
			return "EMSTR_226";
		
		case 28:
			return "EMSTR_233";
		
		case 29:
			return "EMSTR_242";
		
		case 30:
			return "EMSTR_249";
		
		case 31:
			return "EMSTR_262";
		
		case 32:
			return "EMSTR_269";
		
		case 33:
			return "EMSTR_319";
		
		case 34:
			return "EMSTR_340";
		
		case 35:
			return "EMSTR_348";
		
		case 36:
			return "EMSTR_182";
		
		case 37:
			return "EMSTR_357";
		
		case 38:
			return "EMSTR_360";
		
		case 39:
			return "EMSTR_369";
		
		case 40:
			return "EMSTR_376";
		
		case 41:
			return "EMSTR_379";
		
		case 42:
			return "EMSTR_382";
		
		case 43:
			return "EMSTR_384";
		
		case 44:
			return "EMSTR_387";
		
		case 45:
			return "EMSTR_390";
		
		case 46:
			return "EMSTR_393";
		
		case 47:
			return "EMSTR_396";
		
		case 48:
			return "EMSTR_399";
		
		case 49:
			return "EMSTR_402";
		
		case 50:
			return "EMSTR_405";
		
		case 51:
			return "EMSTR_408";
		
		case 52:
			return "EMSTR_411";
		
		case 53:
			return "EMSTR_414";
		
		case 54:
			return "EMSTR_465";
		
		case 55:
			return "EMSTR_468";
		
		case 56:
			return "EMSTR_489";
		
		case 57:
			return "EMSTR_492";
		
		case 58:
			return "EMSTR_495";
		
		case 59:
			return "EMSTR_498";
		
		case 60:
			return "EMSTR_501";
		
		case 61:
			return "EMSTR_504";
		
		case 62:
			return "EMSTR_507";
		
		case 63:
			return "EMSTR_640";
		
		case 64:
			return "EMSTR_643";
		
		case 65:
			return "EMSTR_652";
		
		default:
	}
	return "NULL";
}

char* func_5(int iParam0, int iParam1)//Position - 0xD1A
{
	*iParam1 = 1;
	switch (iParam0)
	{
		case 0:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[0 /*29*/].f_7));
		
		case 1:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[1 /*29*/].f_7));
		
		case 2:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[2 /*29*/].f_7));
		
		case 7:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[12 /*29*/].f_7));
		
		case 4:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[60 /*29*/].f_7));
		
		case 6:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[62 /*29*/].f_7));
		
		case 3:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[14 /*29*/].f_7));
		
		case 16:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[97 /*29*/].f_7));
		
		case 19:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[99 /*29*/].f_7));
		
		case 15:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[96 /*29*/].f_7));
		
		case 63:
			return "CHAR_CARSITE2";
		
		case 64:
			return "CHAR_BOATSITE";
		
		case 8:
			return "CHAR_BANK_MAZE";
		
		case 9:
			return "CHAR_BANK_FLEECA";
		
		case 10:
			return "CHAR_BANK_BOL";
		
		case 21:
			return "CHAR_MINOTAUR";
		
		case 25:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[15 /*29*/].f_7));
		
		case 26:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[30 /*29*/].f_7));
		
		case 27:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[17 /*29*/].f_7));
		
		case 29:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[20 /*29*/].f_7));
		
		case 30:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[43 /*29*/].f_7));
		
		case 31:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[44 /*29*/].f_7));
		
		case 32:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[19 /*29*/].f_7));
		
		case 34:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[40 /*29*/].f_7));
		
		case 36:
			return unk_0xFCB4C1AC11347344("CELL_E_381");
		
		case 38:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[64 /*29*/].f_7));
		
		case 5:
			return "CHAR_EPSILON";
		
		case 13:
			return "CHAR_MILSITE";
		
		case 11:
			return "CHAR_CARSITE";
		
		case 14:
			return "CHAR_BOATSITE";
		
		case 12:
			return "CHAR_PLANESITE";
		
		case 24:
			return "CHAR_DR_FRIEDLANDER";
		
		case 55:
			return "CHAR_CARSITE2";
		
		case 54:
			return "CHAR_BIKESITE";
		
		case 39:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[122 /*29*/].f_7));
		
		case 40:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[125 /*29*/].f_7));
		
		case 41:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[113 /*29*/].f_7));
		
		case 42:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[126 /*29*/].f_7));
		
		case 43:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[127 /*29*/].f_7));
		
		case 44:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[124 /*29*/].f_7));
		
		case 45:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[114 /*29*/].f_7));
		
		case 46:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[115 /*29*/].f_7));
		
		case 47:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[116 /*29*/].f_7));
		
		case 48:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[123 /*29*/].f_7));
		
		case 49:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[117 /*29*/].f_7));
		
		case 50:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[118 /*29*/].f_7));
		
		case 51:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[119 /*29*/].f_7));
		
		case 52:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[120 /*29*/].f_7));
		
		case 53:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[121 /*29*/].f_7));
		
		default:
	}
	*iParam1 = 0;
	return "ERROR!";
}

int func_6()//Position - 0x116D
{
	func_7();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_7()//Position - 0x1186
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_11(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_10(unk_0xBC25C936A095B5BA());
			if (func_9(iVar0) && (!func_8(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_9(Global_19B04.f_932.f_21B.f_10CD))
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

bool func_8(int iParam0)//Position - 0x1283
{
	return Global_8C41 == iParam0;
}

bool func_9(int iParam0)//Position - 0x1291
{
	return iParam0 < 3;
}

int func_10(int iParam0)//Position - 0x129D
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_11(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_11(int iParam0)//Position - 0x12DA
{
	if (func_9(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

struct<16> func_12(int iParam0)//Position - 0x1304
{
	struct<16> Var0;
	struct<16> Var1;
	
	if (iParam0 > -1)
	{
		StringCopy(&Var0, "EMSTR_", 64);
		StringIntConCat(&Var0, iParam0, 64);
		return Var0;
	}
	StringCopy(&Var1, "FAIL", 64);
	return Var1;
}

int func_13(int iParam0)//Position - 0x1335
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_B522[iVar0 /*203*/].f_2 == iParam0)
		{
			if (Global_B522[iVar0 /*203*/].f_1 > iVar2)
			{
				iVar2 = Global_B522[iVar0 /*203*/].f_1;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 != -1 && iVar2 != -1)
	{
		return iVar1;
	}
	return -1;
}

void func_14(int iParam0, char* sParam1)//Position - 0x1399
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_13(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_B522[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	if (Global_B522[iVar0 /*203*/].f_A[(Global_B522[iVar0 /*203*/].f_9 - 1) /*48*/].f_6 == 10)
	{
		return;
	}
	iVar1 = Global_B522[iVar0 /*203*/].f_A[(Global_B522[iVar0 /*203*/].f_9 - 1) /*48*/].f_6;
	Global_B522[iVar0 /*203*/].f_A[(Global_B522[iVar0 /*203*/].f_9 - 1) /*48*/].f_6++;
	StringCopy(&(Global_B522[iVar0 /*203*/].f_A[(Global_B522[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[iVar1 /*4*/]), sParam1, 16);
}

void func_15(int iParam0, char* sParam1, bool bParam2)//Position - 0x144E
{
	int iVar0;
	
	iVar0 = func_13(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_B522[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	Global_B522[iVar0 /*203*/].f_A[(Global_B522[iVar0 /*203*/].f_9 - 1) /*48*/].f_1 = 1;
	StringCopy(&(Global_B522[iVar0 /*203*/].f_A[(Global_B522[iVar0 /*203*/].f_9 - 1) /*48*/].f_2), sParam1, 16);
	Global_B522[iVar0 /*203*/].f_A[(Global_B522[iVar0 /*203*/].f_9 - 1) /*48*/].f_6 = 0;
	StringCopy(&(Global_B522[iVar0 /*203*/].f_A[(Global_B522[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[0 /*4*/]), "", 16);
	StringCopy(&(Global_B522[iVar0 /*203*/].f_A[(Global_B522[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[1 /*4*/]), "", 16);
	StringCopy(&(Global_B522[iVar0 /*203*/].f_A[(Global_B522[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[2 /*4*/]), "", 16);
	StringCopy(&(Global_B522[iVar0 /*203*/].f_A[(Global_B522[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[3 /*4*/]), "", 16);
	StringCopy(&(Global_B522[iVar0 /*203*/].f_A[(Global_B522[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[4 /*4*/]), "", 16);
	if (bParam2)
	{
		func_1(iParam0);
	}
}

int func_16(int iParam0, int iParam1, bool bParam2)//Position - 0x1575
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_18(iParam0, 1);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (Global_B522[iVar0 /*203*/].f_9 == 4)
	{
		return 0;
	}
	Global_B522[iVar0 /*203*/].f_2 = iParam0;
	Global_B522[iVar0 /*203*/].f_A[Global_B522[iVar0 /*203*/].f_9 /*48*/] = iParam1;
	Global_B522[iVar0 /*203*/].f_A[Global_B522[iVar0 /*203*/].f_9 /*48*/].f_1 = 0;
	Global_B522[iVar0 /*203*/].f_A[Global_B522[iVar0 /*203*/].f_9 /*48*/].f_6 = 0;
	Global_B522[iVar0 /*203*/].f_9++;
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_B522[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_B522[iVar0 /*203*/].f_4[iVar1] == Global_90CE[iParam1 /*12*/].f_3)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_B522[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_B522[iVar0 /*203*/].f_4[Global_B522[iVar0 /*203*/].f_3] = Global_90CE[iParam1 /*12*/].f_3;
			Global_B522[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_B522[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_B522[iVar0 /*203*/].f_4[iVar1] == Global_90CE[iParam1 /*12*/].f_2)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_B522[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_B522[iVar0 /*203*/].f_4[Global_B522[iVar0 /*203*/].f_3] = Global_90CE[iParam1 /*12*/].f_2;
			Global_B522[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_B522[iVar0 /*203*/].f_3)
	{
		iVar3 = Global_B522[iVar0 /*203*/].f_4[iVar1];
		if (iVar3 < 3)
		{
			func_17(Global_B522[iVar0 /*203*/].f_4[iVar1], Global_B522[iVar0 /*203*/].f_1, 1, bParam2, 0);
		}
		iVar1++;
	}
	return 1;
}

void func_17(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x1771
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (!iParam0 < 3)
	{
		return;
	}
	iVar0 = -1;
	StringCopy(&Var3, "UNSET", 64);
	if (!bParam2)
	{
		iVar4 = (Global_9DCB[iParam1 /*46*/].f_2A - 1);
		if (iVar4 < 0)
		{
			return;
		}
		iVar5 = Global_9DCB[iParam1 /*46*/].f_20[iVar4];
		iVar2 = iVar5;
		Var3 = { func_12(Global_90CE[iVar5 /*12*/].f_1) };
		if (Global_90CE[iVar5 /*12*/].f_2 == iParam0 && !Global_90CE[iVar5 /*12*/].f_3 == iParam0)
		{
			return;
		}
		iVar1 = Global_90CE[iVar5 /*12*/].f_2;
		iVar0 = Global_B3B8[iParam0 /*120*/];
		bVar6 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar6 = true;
		}
		if (bVar6)
		{
			if (!Global_B3B8[iParam0 /*120*/].f_45[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_90C6 = (Global_90C6 - 1);
						if (Global_90C6 < 0)
						{
							Global_90C6 = 0;
						}
						break;
					
					case 1:
						Global_90C7 = (Global_90C7 - 1);
						if (Global_90C7 < 0)
						{
							Global_90C7 = 0;
						}
						break;
					
					case 2:
						Global_90C8 = (Global_90C8 - 1);
						if (Global_90C8 < 0)
						{
							Global_90C8 = 0;
						}
						break;
					}
				}
		}
		Global_B3B8[iParam0 /*120*/].f_12[iVar0] = iParam1;
		Global_B3B8[iParam0 /*120*/].f_1[iVar0] = iVar4;
		Global_B3B8[iParam0 /*120*/].f_23[iVar0] = 0;
		Global_B3B8[iParam0 /*120*/].f_56[iVar0] = 0;
		Global_B3B8[iParam0 /*120*/].f_45[iVar0] = 0;
		Global_B3B8[iParam0 /*120*/]++;
	}
	else
	{
		iVar0 = Global_B3B8[iParam0 /*120*/];
		bVar7 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar7 = true;
		}
		if (bVar7)
		{
			if (!Global_B3B8[iParam0 /*120*/].f_45[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_90C6 = (Global_90C6 - 1);
						if (Global_90C6 < 0)
						{
							Global_90C6 = 0;
						}
						break;
					
					case 1:
						Global_90C7 = (Global_90C7 - 1);
						if (Global_90C7 < 0)
						{
							Global_90C7 = 0;
						}
						break;
					
					case 2:
						Global_90C8 = (Global_90C8 - 1);
						if (Global_90C8 < 0)
						{
							Global_90C8 = 0;
						}
						break;
					}
				}
		}
		iVar8 = -1;
		iVar9 = 0;
		iVar9 = 0;
		while (iVar9 < 7)
		{
			if (Global_B522[iVar9 /*203*/].f_1 == iParam1 && Global_B522[iVar9 /*203*/].f_9 > 0)
			{
				iVar8 = iVar9;
			}
			iVar9++;
		}
		if (iVar8 == -1)
		{
			return;
		}
		Global_B3B8[iParam0 /*120*/].f_12[iVar0] = Global_B522[iVar8 /*203*/].f_1;
		Global_B3B8[iParam0 /*120*/].f_1[iVar0] = (Global_B522[iVar8 /*203*/].f_9 - 1);
		Global_B3B8[iParam0 /*120*/].f_23[iVar0] = 0;
		Global_B3B8[iParam0 /*120*/].f_56[iVar0] = 1;
		Global_B3B8[iParam0 /*120*/].f_45[iVar0] = 0;
		Global_B3B8[iParam0 /*120*/]++;
		iVar10 = Global_B3B8[iParam0 /*120*/].f_1[iVar0];
		iVar11 = Global_B522[iVar8 /*203*/].f_A[iVar10 /*48*/];
		iVar2 = iVar11;
		iVar1 = Global_90CE[iVar11 /*12*/].f_2;
		if (Global_B522[iVar8 /*203*/].f_A[(Global_B522[iVar8 /*203*/].f_9 - 1) /*48*/].f_1)
		{
			MemCopy(&Var3, {Global_B522[iVar8 /*203*/].f_A[(Global_B522[iVar8 /*203*/].f_9 - 1) /*48*/].f_2}, 16);
		}
		else
		{
			Var3 = { func_12(Global_90CE[iVar11 /*12*/].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_B3B8[iParam0 /*120*/].f_45[iVar0] && !bParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_2(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				
				case 1:
					if (iVar2 == 249)
					{
						func_2(1, iVar1, iVar2, "PW_FEED_EM_1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_2(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					break;
				
				case 2:
					func_2(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				}
			}
	}
}

int func_18(int iParam0, bool bParam1)//Position - 0x1B44
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = func_13(iParam0);
	if (iVar0 > -1)
	{
		if (Global_B522[iVar0 /*203*/].f_9 < 4)
		{
			return iVar0;
		}
	}
	iVar1 = 0;
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_B522[iVar1 /*203*/] == 0)
		{
			bVar2 = true;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return -1;
	}
	bVar3 = true;
	iVar1 = 0;
	iVar4 = -1;
	iVar5 = -1;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_B522[iVar1 /*203*/] == 0)
		{
			if (bVar3)
			{
				iVar4 = iVar1;
				iVar5 = Global_B522[iVar1 /*203*/].f_1;
				bVar3 = false;
			}
			else if (iVar5 > Global_B522[iVar1 /*203*/].f_1)
			{
				iVar4 = iVar1;
				iVar5 = Global_B522[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (Global_B522[iVar4 /*203*/].f_9 > 0)
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Global_B522[iVar4 /*203*/].f_9)
		{
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 3)
			{
				iVar7 = Global_B3B8[iVar6 /*120*/];
				if (iVar7 > 16)
				{
					iVar7 = 16;
				}
				iVar8 = 0;
				iVar8 = 0;
				while (iVar8 < iVar7)
				{
					if (Global_B3B8[iVar6 /*120*/].f_56[iVar8])
					{
						if (!Global_B3B8[iVar6 /*120*/].f_45[iVar8])
						{
							if (Global_B3B8[iVar6 /*120*/].f_12[iVar8] == Global_B522[iVar4 /*203*/].f_1)
							{
								if (Global_B3B8[iVar6 /*120*/].f_1[iVar8] == iVar1)
								{
									switch (iVar6)
									{
										case 0:
											Global_90C6 = (Global_90C6 - 1);
											break;
										
										case 1:
											Global_90C7 = (Global_90C7 - 1);
											break;
										
										case 2:
											Global_90C8 = (Global_90C8 - 1);
											break;
										}
									}
								}
							}
					}
					iVar8++;
				}
				iVar6++;
			}
			iVar1++;
		}
	}
	Global_B522[iVar4 /*203*/].f_2 = iParam0;
	Global_B522[iVar4 /*203*/].f_3 = 0;
	if (!bParam1)
	{
		Global_B522[iVar4 /*203*/] = 1;
	}
	Global_19B04.f_5210.f_136++;
	if (Global_19B04.f_5210.f_136 == 0)
	{
		Global_19B04.f_5210.f_136 = 1;
	}
	Global_B522[iVar4 /*203*/].f_1 = Global_19B04.f_5210.f_136;
	Global_B522[iVar4 /*203*/].f_9 = 0;
	return iVar4;
}

void func_19(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x1D5C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_29(iParam0, iParam1))
	{
		iVar0 = func_28(iParam1);
		iVar1 = func_26(iParam0);
		iVar2 = (func_26(iParam0) - func_26(iParam1));
		iVar3 = (func_28(iParam0) - func_28(iParam1));
		iVar4 = (func_25(iParam0) - func_25(iParam1));
		iVar5 = (func_24(iParam0) - func_24(iParam1));
		iVar6 = (func_23(iParam0) - func_23(iParam1));
		iVar7 = (func_22(iParam0) - func_22(iParam1));
	}
	else
	{
		iVar0 = func_28(iParam0);
		iVar1 = func_26(iParam1);
		iVar2 = (func_26(iParam1) - func_26(iParam0));
		iVar3 = (func_28(iParam1) - func_28(iParam0));
		iVar4 = (func_25(iParam1) - func_25(iParam0));
		iVar5 = (func_24(iParam1) - func_24(iParam0));
		iVar6 = (func_23(iParam1) - func_23(iParam0));
		iVar7 = (func_22(iParam1) - func_22(iParam0));
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
		iVar4 = (iVar4 + func_21(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_20(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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
	*iParam2 = iVar7;
	*iParam3 = iVar6;
	*iParam4 = iVar5;
	*iParam5 = iVar4;
	*iParam6 = iVar3;
	*iParam7 = iVar2;
}

float func_20(float fParam0, float fParam1, float fParam2)//Position - 0x1F5D
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

int func_21(int iParam0, int iParam1)//Position - 0x1F9F
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

int func_22(int iParam0)//Position - 0x2041
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_23(int iParam0)//Position - 0x2054
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_24(int iParam0)//Position - 0x2067
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_25(int iParam0)//Position - 0x207A
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_26(int iParam0)//Position - 0x208C
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_27(unk_0xFA30DFD0084E92FE(iParam0, 31), -1, 1)) + 2011;
}

int func_27(bool bParam0, int iParam1, int iParam2)//Position - 0x20B1
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_28(int iParam0)//Position - 0x20C8
{
	return iParam0 & 15;
}

int func_29(int iParam0, int iParam1)//Position - 0x20D5
{
	int iVar0;
	int iVar1;
	
	if (!func_30(iParam1) || !func_30(iParam0))
	{
		return 1;
	}
	iVar0 = func_26(iParam0);
	iVar1 = func_26(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_28(iParam0);
	iVar1 = func_28(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_25(iParam0);
	iVar1 = func_25(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_24(iParam0);
	iVar1 = func_24(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_23(iParam0);
	iVar1 = func_23(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_22(iParam0);
	iVar1 = func_22(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_30(int iParam0)//Position - 0x21E1
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
	iVar0 = func_22(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_23(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_24(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_26(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_28(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_25(iParam0);
	if (iVar5 < 1 || iVar5 > func_21(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_31(int iParam0, bool bParam1)//Position - 0x22BD
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!Global_9DCB[iParam0 /*46*/] && !Global_9DCB[iParam0 /*46*/].f_1)
	{
		return;
	}
	if (Global_9DCB[iParam0 /*46*/].f_1F == Global_9DCB[iParam0 /*46*/].f_1E)
	{
		iVar0 = (Global_9DCB[iParam0 /*46*/].f_2A - 1);
		if (iVar0 < 0)
		{
			return;
		}
		if (Global_90CE[Global_9DCB[iParam0 /*46*/].f_20[iVar0] /*12*/].f_4 == 0)
		{
			Global_9DCB[iParam0 /*46*/].f_1 = 1;
		}
		return;
	}
	if (Global_9DCB[iParam0 /*46*/].f_1)
	{
		return;
	}
	iVar1 = Global_9DCB[iParam0 /*46*/].f_8[Global_9DCB[iParam0 /*46*/].f_1F];
	Global_9DCB[iParam0 /*46*/].f_1F++;
	func_32(iParam0, iVar1);
	Global_9DCB[iParam0 /*46*/].f_2D = Global_90CE[iVar1 /*12*/].f_A;
	Global_9DCB[iParam0 /*46*/].f_2B = Global_90CE[iVar1 /*12*/].f_B;
	iVar2 = Global_9DCB[iParam0 /*46*/].f_2;
	func_17(Global_90CE[iVar1 /*12*/].f_3, iParam0, 0, 0, bParam1);
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		if (Global_9DCB[iParam0 /*46*/].f_3[iVar3] != Global_90CE[iVar1 /*12*/].f_2 && Global_9DCB[iParam0 /*46*/].f_3[iVar3] != Global_90CE[iVar1 /*12*/].f_3)
		{
			func_17(Global_9DCB[iParam0 /*46*/].f_3[iVar3], iParam0, 0, 0, bParam1);
		}
		iVar3++;
	}
	if (Global_9DCB[iParam0 /*46*/].f_1F == Global_9DCB[iParam0 /*46*/].f_1E)
	{
		if (Global_90CE[Global_9DCB[iParam0 /*46*/].f_20[(Global_9DCB[iParam0 /*46*/].f_2A - 1)] /*12*/].f_4 == 0)
		{
			Global_9DCB[iParam0 /*46*/].f_1 = 1;
			return;
		}
	}
}

int func_32(int iParam0, var uParam1)//Position - 0x2459
{
	if (Global_9DCB[iParam0 /*46*/].f_2A >= 9)
	{
		return 0;
	}
	Global_9DCB[iParam0 /*46*/].f_20[Global_9DCB[iParam0 /*46*/].f_2A] = uParam1;
	Global_9DCB[iParam0 /*46*/].f_2A++;
	return 1;
}

int func_33(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x249E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[16];
	int iVar6[2];
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (!unk_0x726D9204B160D23E())
	{
		return 0;
	}
	if (func_56())
	{
		return 0;
	}
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0xADC5538B9DCA2177(unk_0xBC25C936A095B5BA()) != -1)
		{
			return 0;
		}
	}
	if (unk_0xE6711F601F11B66B())
	{
		return 0;
	}
	if (func_55() && iParam2 < 4)
	{
		return 0;
	}
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (func_53(unk_0xBC25C936A095B5BA()))
		{
			if (unk_0xFA30DFD0084E92FE(iParam0, func_52()) && !unk_0xFA30DFD0084E92FE(iParam4, 19))
			{
				return 0;
			}
		}
	}
	if (Global_11540)
	{
		return 0;
	}
	if (unk_0x866EAD7E27D8D0F8())
	{
		return 0;
	}
	if (Global_10AB8)
	{
		return 0;
	}
	if (Global_15C13)
	{
		return 0;
	}
	if ((func_51() || (Global_4336.f_4 && Global_4336.f_68 == 4)) || func_50())
	{
		return 0;
	}
	if (unk_0xFA30DFD0084E92FE(iParam4, 18))
	{
		if (!unk_0xFA30DFD0084E92FE(iParam0, func_52()))
		{
			return 0;
		}
	}
	iVar0 = 1;
	if (((Global_16B1B == 13 || Global_16B1B == 10) || Global_16B1B == 11) || Global_16B1B == 12)
	{
		iVar0 = 0;
	}
	if (iVar0 == 1)
	{
		return 0;
	}
	if (!unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	else if (iParam2 != 5)
	{
		if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 1)
		{
			return 0;
		}
		if (unk_0xD142D5C196F26594())
		{
			return 0;
		}
		if (Global_15FAC)
		{
			return 0;
		}
		if (func_43(50f, 1) != -1)
		{
			return 0;
		}
		if (((((iParam1 == 17 || iParam1 == 19) || iParam1 == 14) || iParam1 == 0) || iParam1 == 1) || iParam1 == 2)
		{
			if (unk_0xFA30DFD0084E92FE(iParam0, func_52()))
			{
				iVar1 = func_42(func_6());
				iVar2 = func_42(iParam1);
				iVar3 = func_41(iVar1, iVar2);
				if (iVar3 < 9)
				{
					if (Global_19B04.f_469A.f_AF[iVar3 /*19*/].f_8 == 1 || Global_19B04.f_469A.f_AF[iVar3 /*19*/].f_8 == 2)
					{
						if (func_40(&(Global_19B04.f_469A.f_AF[iVar3 /*19*/].f_5)))
						{
							if (func_37(&(Global_19B04.f_469A.f_AF[iVar3 /*19*/].f_5)) < 30f)
							{
								return 0;
							}
						}
					}
				}
			}
		}
	}
	if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 2)
	{
		return 0;
	}
	if (func_36())
	{
		return 0;
	}
	if (unk_0xFA30DFD0084E92FE(iParam4, 3))
	{
		if (Global_1974B)
		{
			return 0;
		}
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0)
			{
				return 0;
			}
		}
		if (Global_195FA.f_13 != 0)
		{
			return 0;
		}
		if (Global_8C41 == 5)
		{
			return 0;
		}
	}
	if (iParam3 != -1)
	{
		if (func_35(unk_0xBC25C936A095B5BA(), iParam3, 0))
		{
			return 0;
		}
	}
	iVar4 = func_6();
	if (func_9(iVar4))
	{
		unk_0x252B0CBDBF5803ED(unk_0xBC25C936A095B5BA(), &uVar5, -1);
		switch (iParam1)
		{
			case 4:
				switch (iVar4)
				{
					case 0:
						iVar6[0] = func_11(1);
						iVar6[1] = func_11(2);
						break;
					
					case 1:
						iVar6[0] = func_11(0);
						iVar6[1] = func_11(2);
						break;
					
					case 2:
						iVar6[0] = func_11(0);
						iVar6[1] = func_11(1);
						break;
				}
				break;
			
			case 5:
				iVar6[0] = func_11(1);
				iVar6[1] = func_11(2);
				break;
			
			case 6:
				iVar6[0] = func_34(12);
				iVar6[1] = func_11(1);
				break;
			
			case 7:
				iVar6[0] = func_34(12);
				iVar6[1] = func_11(0);
				break;
			
			case 8:
				iVar6[0] = func_11(0);
				iVar6[1] = func_11(1);
				break;
			
			case 9:
				iVar6[0] = func_11(0);
				iVar6[1] = func_11(2);
				break;
			
			case 10:
				iVar6[0] = func_34(23);
				iVar6[1] = func_11(0);
				break;
			
			case 11:
				iVar6[0] = func_34(23);
				iVar6[1] = func_11(0);
				break;
			
			default:
				if (func_9(iParam1))
				{
					iVar6[0] = func_11(iParam1);
				}
				else
				{
					iVar6[0] = func_34(iParam1);
				}
				iVar6[1] = 0;
				break;
		}
		iVar7 = 0;
		while (iVar7 < 2)
		{
			if (iVar6[iVar7] != 0)
			{
				iVar8 = 0;
				while (iVar8 < 16)
				{
					if (unk_0x724D816EA203A79E(uVar5[iVar8]))
					{
						if (unk_0x6F79ECA8C83E4357(uVar5[iVar8]) == iVar6[iVar7])
						{
							if (!unk_0x1D403DFADBC2DE3C(uVar5[iVar8], 0))
							{
								if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
								{
									if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(uVar5[iVar8], true), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true)) < 6400f)
									{
										return 0;
									}
								}
							}
							else
							{
								return 0;
							}
						}
					}
					iVar8++;
				}
				iVar9 = 0;
				switch (iVar6[iVar7])
				{
					case joaat("player_zero"):
						iVar9 = Global_161D2[0];
						break;
					
					case joaat("player_one"):
						iVar9 = Global_161D2[1];
						break;
					
					case joaat("player_two"):
						iVar9 = Global_161D2[2];
						break;
				}
				if (unk_0x724D816EA203A79E(iVar9))
				{
					if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
					{
						if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(iVar9, true), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true)) < 6400f)
						{
							return 0;
						}
					}
				}
				switch (iVar6[iVar7])
				{
					case joaat("player_zero"):
						iVar9 = Global_16B11[0];
						break;
					
					case joaat("player_one"):
						iVar9 = Global_16B11[1];
						break;
					
					case joaat("player_two"):
						iVar9 = Global_16B11[2];
						break;
				}
				if (unk_0x724D816EA203A79E(iVar9))
				{
					if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
					{
						if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(iVar9, true), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true)) < 6400f)
						{
							return 0;
						}
					}
				}
			}
			iVar7++;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_34(int iParam0)//Position - 0x2A9C
{
	if (!func_9(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_35(int iParam0, int iParam1, float fParam2)//Position - 0x2AC7
{
	struct<5> Var0;
	float fVar1;
	
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		Var0 = { Global_8C42[iParam1 /*5*/] };
		fVar1 = Var0.f_3;
		if (fParam2 > 0f)
		{
			fVar1 = fParam2;
		}
		if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(iParam0, true), Var0, true) < fVar1)
		{
			return 1;
		}
		else if (Var0.f_4 != -1)
		{
			return func_35(iParam0, Var0.f_4, fParam2);
		}
	}
	return 0;
}

int func_36()//Position - 0x2B2D
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

float func_37(var uParam0)//Position - 0x2B57
{
	if (func_40(uParam0))
	{
		if (func_39(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_38(unk_0xFA30DFD0084E92FE(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_38(bool bParam0)//Position - 0x2B96
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

bool func_39(var uParam0)//Position - 0x2BEE
{
	return unk_0xFA30DFD0084E92FE(*uParam0, 2);
}

bool func_40(var uParam0)//Position - 0x2BFE
{
	return unk_0xFA30DFD0084E92FE(*uParam0, 1);
}

int func_41(int iParam0, int iParam1)//Position - 0x2C0E
{
	int iVar0;
	
	if ((iParam0 != 0 && iParam0 != 1) && iParam0 != 2)
	{
		if ((iParam1 == 0 || iParam1 == 1) || iParam1 == 2)
		{
			iVar0 = iParam1;
			iParam1 = iParam0;
			iParam0 = iVar0;
		}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 2;
					break;
				
				case 3:
					return 10;
					break;
				
				case 4:
					return 5;
					break;
				
				case 5:
					return 8;
					break;
				
				default:
					return 10;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 10;
					break;
				
				case 2:
					return 1;
					break;
				
				case 3:
					return 3;
					break;
				
				case 4:
					return 6;
					break;
				
				case 5:
					return 10;
					break;
				
				default:
					return 10;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				case 2:
					return 10;
					break;
				
				case 3:
					return 4;
					break;
				
				case 4:
					return 7;
					break;
				
				case 5:
					return 10;
					break;
				
				default:
					return 10;
					break;
			}
			break;
	}
	return 10;
}

int func_42(int iParam0)//Position - 0x2D98
{
	if (iParam0 == 145)
	{
		return 7;
	}
	if (iParam0 < 155)
	{
		return Global_19B04.f_6D75[iParam0 /*29*/].f_B;
	}
	if (iParam0 == 144)
	{
		return 7;
	}
	if (iParam0 == 155)
	{
		return 6;
	}
	if (iParam0 == 156)
	{
		return 6;
	}
	return 6;
}

int func_43(float fParam0, bool bParam1)//Position - 0x2DF3
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
		iVar5 = func_49();
		iVar6 = 0;
		iVar6 = 0;
		while (iVar6 < 63)
		{
			iVar1 = iVar6;
			if (unk_0xFA30DFD0084E92FE(Global_19B04.f_4871[iVar1 /*6*/], 2) && !unk_0xFA30DFD0084E92FE(Global_19B04.f_4871[iVar1 /*6*/], 3))
			{
				func_44(iVar1, &Var0);
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
	return iVar2;
}

void func_44(int iParam0, var uParam1)//Position - 0x2E9F
{
	switch (iParam0)
	{
		case 0:
			func_45(uParam1, "Abigail1", func_47(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_46(iParam0), 1, 0);
			break;
		
		case 1:
			func_45(uParam1, "Abigail2", func_47(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_46(iParam0), 1, 0);
			break;
		
		case 2:
			func_45(uParam1, "Barry1", func_47(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_46(iParam0), 1, 0);
			break;
		
		case 3:
			func_45(uParam1, "Barry2", func_47(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_46(iParam0), 1, 1);
			break;
		
		case 4:
			func_45(uParam1, "Barry3", func_47(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_46(iParam0), 0, 0);
			break;
		
		case 5:
			func_45(uParam1, "Barry3A", func_47(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 6:
			func_45(uParam1, "Barry3C", func_47(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 7:
			func_45(uParam1, "Barry4", func_47(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_46(iParam0), 0, 0);
			break;
		
		case 8:
			func_45(uParam1, "Dreyfuss1", func_47(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_46(iParam0), 0, 0);
			break;
		
		case 9:
			func_45(uParam1, "Epsilon1", func_47(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_46(iParam0), 0, 0);
			break;
		
		case 10:
			func_45(uParam1, "Epsilon2", func_47(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_46(iParam0), 1, 0);
			break;
		
		case 11:
			func_45(uParam1, "Epsilon3", func_47(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_46(iParam0), 0, 0);
			break;
		
		case 12:
			func_45(uParam1, "Epsilon4", func_47(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_46(iParam0), 0, 0);
			break;
		
		case 13:
			func_45(uParam1, "Epsilon5", func_47(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_46(iParam0), 1, 0);
			break;
		
		case 14:
			func_45(uParam1, "Epsilon6", func_47(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 15:
			func_45(uParam1, "Epsilon7", func_47(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_46(iParam0), 0, 0);
			break;
		
		case 16:
			func_45(uParam1, "Epsilon8", func_47(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_46(iParam0), 1, 0);
			break;
		
		case 17:
			func_45(uParam1, "Extreme1", func_47(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 18:
			func_45(uParam1, "Extreme2", func_47(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 19:
			func_45(uParam1, "Extreme3", func_47(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 20:
			func_45(uParam1, "Extreme4", func_47(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_46(iParam0), 0, 0);
			break;
		
		case 21:
			func_45(uParam1, "Fanatic1", func_47(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_46(iParam0), 1, 0);
			break;
		
		case 22:
			func_45(uParam1, "Fanatic2", func_47(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_46(iParam0), 1, 0);
			break;
		
		case 23:
			func_45(uParam1, "Fanatic3", func_47(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_46(iParam0), 0, 1);
			break;
		
		case 24:
			func_45(uParam1, "Hao1", func_47(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_46(iParam0), 0, 1);
			break;
		
		case 25:
			func_45(uParam1, "Hunting1", func_47(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 26:
			func_45(uParam1, "Hunting2", func_47(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 27:
			func_45(uParam1, "Josh1", func_47(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_46(iParam0), 1, 0);
			break;
		
		case 28:
			func_45(uParam1, "Josh2", func_47(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_46(iParam0), 1, 1);
			break;
		
		case 29:
			func_45(uParam1, "Josh3", func_47(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_46(iParam0), 1, 1);
			break;
		
		case 30:
			func_45(uParam1, "Josh4", func_47(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_46(iParam0), 1, 0);
			break;
		
		case 31:
			func_45(uParam1, "Maude1", func_47(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 32:
			func_45(uParam1, "Minute1", func_47(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 33:
			func_45(uParam1, "Minute2", func_47(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 34:
			func_45(uParam1, "Minute3", func_47(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 35:
			func_45(uParam1, "MrsPhilips1", func_47(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_46(iParam0), 0, 0);
			break;
		
		case 36:
			func_45(uParam1, "MrsPhilips2", func_47(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_46(iParam0), 0, 0);
			break;
		
		case 37:
			func_45(uParam1, "Nigel1", func_47(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_46(iParam0), 1, 0);
			break;
		
		case 38:
			func_45(uParam1, "Nigel1A", func_47(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_46(iParam0), 1, 1);
			break;
		
		case 39:
			func_45(uParam1, "Nigel1B", func_47(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_46(iParam0), 1, 1);
			break;
		
		case 40:
			func_45(uParam1, "Nigel1C", func_47(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_46(iParam0), 1, 1);
			break;
		
		case 41:
			func_45(uParam1, "Nigel1D", func_47(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_46(iParam0), 1, 1);
			break;
		
		case 42:
			func_45(uParam1, "Nigel2", func_47(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_46(iParam0), 1, 1);
			break;
		
		case 43:
			func_45(uParam1, "Nigel3", func_47(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_46(iParam0), 1, 1);
			break;
		
		case 44:
			func_45(uParam1, "Omega1", func_47(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_46(iParam0), 0, 0);
			break;
		
		case 45:
			func_45(uParam1, "Omega2", func_47(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_46(iParam0), 0, 0);
			break;
		
		case 46:
			func_45(uParam1, "Paparazzo1", func_47(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 47:
			func_45(uParam1, "Paparazzo2", func_47(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 48:
			func_45(uParam1, "Paparazzo3", func_47(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_46(iParam0), 0, 0);
			break;
		
		case 49:
			func_45(uParam1, "Paparazzo3A", func_47(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 50:
			func_45(uParam1, "Paparazzo3B", func_47(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 51:
			func_45(uParam1, "Paparazzo4", func_47(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_46(iParam0), 0, 0);
			break;
		
		case 52:
			func_45(uParam1, "Rampage1", func_47(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_46(iParam0), 0, 0);
			break;
		
		case 54:
			func_45(uParam1, "Rampage3", func_47(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_46(iParam0), 1, 0);
			break;
		
		case 55:
			func_45(uParam1, "Rampage4", func_47(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_46(iParam0), 1, 0);
			break;
		
		case 56:
			func_45(uParam1, "Rampage5", func_47(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_46(iParam0), 0, 0);
			break;
		
		case 53:
			func_45(uParam1, "Rampage2", func_47(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_46(iParam0), 1, 0);
			break;
		
		case 57:
			func_45(uParam1, "TheLastOne", func_47(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 58:
			func_45(uParam1, "Tonya1", func_47(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 59:
			func_45(uParam1, "Tonya2", func_47(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 60:
			func_45(uParam1, "Tonya3", func_47(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 61:
			func_45(uParam1, "Tonya4", func_47(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 62:
			func_45(uParam1, "Tonya5", func_47(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_45(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0x40E7
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

int func_46(int iParam0)//Position - 0x4178
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

struct<2> func_47(int iParam0)//Position - 0x44BE
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_48(iParam0) };
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

struct<2> func_48(int iParam0)//Position - 0x44F6
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

int func_49()//Position - 0x4943
{
	func_7();
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

int func_50()//Position - 0x4989
{
	if (unk_0xB731B8C5BCE89836(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_51()//Position - 0x49A3
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		return Global_161D2.f_2C == 1;
	}
	return 0;
}

var func_52()//Position - 0x49BF
{
	func_7();
	return Global_19B04.f_932.f_21B.f_10CD;
}

int func_53(int iParam0)//Position - 0x49D8
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_54(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_54(int iParam0)//Position - 0x49F9
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_8FEC[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_8FEC[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_55()//Position - 0x4A42
{
	if (Global_8C41 == 15)
	{
		return 0;
	}
	return 1;
}

int func_56()//Position - 0x4A57
{
	if (Global_389D.f_1 == 1)
	{
		return 1;
	}
	return 0;
}

void func_57(int iParam0)//Position - 0x4A70
{
	int iVar0;
	
	if (iParam0 == 26)
	{
		if (!unk_0xFA30DFD0084E92FE(Global_19B04.f_617D, (4 - 1)))
		{
			return;
		}
	}
	iVar0 = func_13(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	Global_B522[iVar0 /*203*/] = 0;
}

var func_58()//Position - 0x4AAD
{
	var uVar0;
	
	func_64(&uVar0, unk_0xF40D00CD7B81C0A8());
	func_63(&uVar0, unk_0x7E09057438B9D216());
	func_62(&uVar0, unk_0x6E06C0DB9B43570D());
	func_61(&uVar0, unk_0xBE14F159908E4EE5());
	func_60(&uVar0, unk_0xDD6A91E47ED4D0CF());
	func_59(&uVar0, unk_0x4EEB3860BFC44B78());
	return uVar0;
}

void func_59(var uParam0, int iParam1)//Position - 0x4AF3
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

void func_60(var uParam0, int iParam1)//Position - 0x4B79
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_61(var uParam0, int iParam1)//Position - 0x4BAC
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_28(*uParam0);
	iVar1 = func_26(*uParam0);
	if (iParam1 < 1 || iParam1 > func_21(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_62(var uParam0, int iParam1)//Position - 0x4BFD
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_63(var uParam0, int iParam1)//Position - 0x4C37
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_64(var uParam0, int iParam1)//Position - 0x4C72
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

void func_65()//Position - 0x4CAE
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_B3B8[iVar0 /*120*/] = Global_19B04.f_5210[iVar0 /*103*/];
		iVar1 = 0;
		while (iVar1 < 16)
		{
			Global_B3B8[iVar0 /*120*/].f_1[iVar1] = Global_19B04.f_5210[iVar0 /*103*/].f_1[iVar1];
			Global_B3B8[iVar0 /*120*/].f_12[iVar1] = Global_19B04.f_5210[iVar0 /*103*/].f_12[iVar1];
			Global_B3B8[iVar0 /*120*/].f_23[iVar1] = Global_19B04.f_5210[iVar0 /*103*/].f_23[iVar1];
			Global_B3B8[iVar0 /*120*/].f_34[iVar1] = Global_19B04.f_5210[iVar0 /*103*/].f_34[iVar1];
			Global_B3B8[iVar0 /*120*/].f_45[iVar1] = Global_19B04.f_5210[iVar0 /*103*/].f_45[iVar1];
			Global_B3B8[iVar0 /*120*/].f_56[iVar1] = Global_19B04.f_5210[iVar0 /*103*/].f_56[iVar1];
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		Global_B522[iVar0 /*203*/].f_2 = Global_19B04.f_5210.f_137[iVar0 /*203*/];
		Global_B522[iVar0 /*203*/] = Global_19B04.f_5210.f_137[iVar0 /*203*/].f_2;
		Global_B522[iVar0 /*203*/].f_3 = Global_19B04.f_5210.f_137[iVar0 /*203*/].f_3;
		Global_B522[iVar0 /*203*/].f_1 = Global_19B04.f_5210.f_137[iVar0 /*203*/].f_1;
		Global_B522[iVar0 /*203*/].f_9 = Global_19B04.f_5210.f_137[iVar0 /*203*/].f_9;
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_B522[iVar0 /*203*/].f_4[iVar1] = Global_19B04.f_5210.f_137[iVar0 /*203*/].f_4[iVar1];
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_B522[iVar0 /*203*/].f_A[iVar1 /*48*/] = Global_19B04.f_5210.f_137[iVar0 /*203*/].f_A[iVar1 /*48*/];
			Global_B522[iVar0 /*203*/].f_A[iVar1 /*48*/].f_1 = Global_19B04.f_5210.f_137[iVar0 /*203*/].f_A[iVar1 /*48*/].f_1;
			Global_B522[iVar0 /*203*/].f_A[iVar1 /*48*/].f_2 = { Global_19B04.f_5210.f_137[iVar0 /*203*/].f_A[iVar1 /*48*/].f_2 };
			Global_B522[iVar0 /*203*/].f_A[iVar1 /*48*/].f_6 = Global_19B04.f_5210.f_137[iVar0 /*203*/].f_A[iVar1 /*48*/].f_6;
			iVar2 = 0;
			while (iVar2 < 10)
			{
				Global_B522[iVar0 /*203*/].f_A[iVar1 /*48*/].f_7[iVar2 /*4*/] = { Global_19B04.f_5210.f_137[iVar0 /*203*/].f_A[iVar1 /*48*/].f_7[iVar2 /*4*/] };
				iVar2++;
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 122)
	{
		Global_9DCB[iVar0 /*46*/] = Global_19B04.f_5210.f_6C5[iVar0 /*14*/];
		Global_9DCB[iVar0 /*46*/].f_1 = Global_19B04.f_5210.f_6C5[iVar0 /*14*/].f_1;
		Global_9DCB[iVar0 /*46*/].f_2D = Global_19B04.f_5210.f_6C5[iVar0 /*14*/].f_2;
		Global_9DCB[iVar0 /*46*/].f_1F = Global_19B04.f_5210.f_6C5[iVar0 /*14*/].f_3;
		iVar1 = 0;
		while (iVar1 < 9)
		{
			if (Global_19B04.f_5210.f_6C5[iVar0 /*14*/].f_4[iVar1] > 0)
			{
				Global_9DCB[iVar0 /*46*/].f_20[iVar1] = (Global_19B04.f_5210.f_6C5[iVar0 /*14*/].f_4[iVar1] - 1);
				Global_9DCB[iVar0 /*46*/].f_2A++;
			}
			iVar1++;
		}
		iVar0++;
	}
	Global_BAB0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Global_BAB1[iVar0 /*53*/] = Global_19B04.f_5210.f_D72[iVar0 /*53*/];
		Global_BAB1[iVar0 /*53*/].f_1 = Global_19B04.f_5210.f_D72[iVar0 /*53*/].f_1;
		Global_BAB1[iVar0 /*53*/].f_2 = Global_19B04.f_5210.f_D72[iVar0 /*53*/].f_2;
		Global_BAB1[iVar0 /*53*/].f_5 = Global_19B04.f_5210.f_D72[iVar0 /*53*/].f_5;
		Global_BAB1[iVar0 /*53*/].f_6 = { Global_19B04.f_5210.f_D72[iVar0 /*53*/].f_6 };
		Global_BAB1[iVar0 /*53*/].f_A = Global_19B04.f_5210.f_D72[iVar0 /*53*/].f_A;
		iVar1 = 0;
		while (iVar1 < 10)
		{
			Global_BAB1[iVar0 /*53*/].f_B[iVar1 /*4*/] = { Global_19B04.f_5210.f_D72[iVar0 /*53*/].f_B[iVar1 /*4*/] };
			iVar1++;
		}
		Global_BAB1[iVar0 /*53*/].f_34 = Global_19B04.f_5210.f_D72[iVar0 /*53*/].f_34;
		if (Global_BAB1[iVar0 /*53*/].f_34 != 0)
		{
			Global_BAB0++;
		}
		iVar0++;
	}
}

void func_66()//Position - 0x5131
{
	Global_90CE[0 /*12*/] = 15;
	Global_90CE[0 /*12*/].f_1 = 16;
	Global_90CE[0 /*12*/].f_2 = 4;
	Global_90CE[0 /*12*/].f_3 = 0;
	Global_90CE[0 /*12*/].f_A = 1;
	Global_90CE[0 /*12*/].f_B = 0;
	Global_90CE[0 /*12*/].f_4 = 0;
	Global_90CE[1 /*12*/] = 17;
	Global_90CE[1 /*12*/].f_1 = 16;
	Global_90CE[1 /*12*/].f_2 = 4;
	Global_90CE[1 /*12*/].f_3 = 0;
	Global_90CE[1 /*12*/].f_A = 1;
	Global_90CE[1 /*12*/].f_B = 0;
	Global_90CE[1 /*12*/].f_4 = 0;
	Global_90CE[2 /*12*/] = 18;
	Global_90CE[2 /*12*/].f_1 = 16;
	Global_90CE[2 /*12*/].f_2 = 4;
	Global_90CE[2 /*12*/].f_3 = 0;
	Global_90CE[2 /*12*/].f_A = 1;
	Global_90CE[2 /*12*/].f_B = 0;
	Global_90CE[2 /*12*/].f_4 = 0;
	Global_90CE[3 /*12*/] = 19;
	Global_90CE[3 /*12*/].f_1 = 16;
	Global_90CE[3 /*12*/].f_2 = 4;
	Global_90CE[3 /*12*/].f_3 = 0;
	Global_90CE[3 /*12*/].f_A = 1;
	Global_90CE[3 /*12*/].f_B = 0;
	Global_90CE[3 /*12*/].f_4 = 0;
	Global_90CE[4 /*12*/] = 20;
	Global_90CE[4 /*12*/].f_1 = 16;
	Global_90CE[4 /*12*/].f_2 = 4;
	Global_90CE[4 /*12*/].f_3 = 0;
	Global_90CE[4 /*12*/].f_A = 1;
	Global_90CE[4 /*12*/].f_B = 0;
	Global_90CE[4 /*12*/].f_4 = 0;
	Global_90CE[5 /*12*/] = 21;
	Global_90CE[5 /*12*/].f_1 = 16;
	Global_90CE[5 /*12*/].f_2 = 4;
	Global_90CE[5 /*12*/].f_3 = 0;
	Global_90CE[5 /*12*/].f_A = 1;
	Global_90CE[5 /*12*/].f_B = 0;
	Global_90CE[5 /*12*/].f_4 = 0;
	Global_90CE[6 /*12*/] = 22;
	Global_90CE[6 /*12*/].f_1 = 16;
	Global_90CE[6 /*12*/].f_2 = 4;
	Global_90CE[6 /*12*/].f_3 = 0;
	Global_90CE[6 /*12*/].f_A = 0;
	Global_90CE[6 /*12*/].f_B = 0;
	Global_90CE[6 /*12*/].f_4 = 0;
	Global_90CE[7 /*12*/] = 23;
	Global_90CE[7 /*12*/].f_1 = 24;
	Global_90CE[7 /*12*/].f_2 = 4;
	Global_90CE[7 /*12*/].f_3 = 0;
	Global_90CE[7 /*12*/].f_A = 0;
	Global_90CE[7 /*12*/].f_B = 0;
	Global_90CE[7 /*12*/].f_4 = 0;
	Global_90CE[8 /*12*/] = 25;
	Global_90CE[8 /*12*/].f_1 = 26;
	Global_90CE[8 /*12*/].f_2 = 4;
	Global_90CE[8 /*12*/].f_3 = 0;
	Global_90CE[8 /*12*/].f_A = 0;
	Global_90CE[8 /*12*/].f_B = 0;
	Global_90CE[8 /*12*/].f_4 = 0;
	Global_90CE[9 /*12*/] = 27;
	Global_90CE[9 /*12*/].f_1 = 28;
	Global_90CE[9 /*12*/].f_2 = 4;
	Global_90CE[9 /*12*/].f_3 = 0;
	Global_90CE[9 /*12*/].f_A = 0;
	Global_90CE[9 /*12*/].f_B = 0;
	Global_90CE[9 /*12*/].f_4 = 0;
	Global_90CE[10 /*12*/] = 32;
	Global_90CE[10 /*12*/].f_1 = 33;
	Global_90CE[10 /*12*/].f_2 = 5;
	Global_90CE[10 /*12*/].f_3 = 0;
	Global_90CE[10 /*12*/].f_A = 0;
	Global_90CE[10 /*12*/].f_B = 0;
	Global_90CE[10 /*12*/].f_4 = 0;
	Global_90CE[11 /*12*/] = 34;
	Global_90CE[11 /*12*/].f_1 = 35;
	Global_90CE[11 /*12*/].f_2 = 5;
	Global_90CE[11 /*12*/].f_3 = 0;
	Global_90CE[11 /*12*/].f_A = 0;
	Global_90CE[11 /*12*/].f_B = 0;
	Global_90CE[11 /*12*/].f_4 = 0;
	Global_90CE[12 /*12*/] = 42;
	Global_90CE[12 /*12*/].f_1 = 43;
	Global_90CE[12 /*12*/].f_2 = 7;
	Global_90CE[12 /*12*/].f_3 = 1;
	Global_90CE[12 /*12*/].f_A = 0;
	Global_90CE[12 /*12*/].f_B = 0;
	Global_90CE[12 /*12*/].f_4 = 0;
	Global_90CE[13 /*12*/] = 44;
	Global_90CE[13 /*12*/].f_1 = 45;
	Global_90CE[13 /*12*/].f_2 = 7;
	Global_90CE[13 /*12*/].f_3 = 1;
	Global_90CE[13 /*12*/].f_A = 0;
	Global_90CE[13 /*12*/].f_B = 0;
	Global_90CE[13 /*12*/].f_4 = 0;
	Global_90CE[14 /*12*/] = 46;
	Global_90CE[14 /*12*/].f_1 = 47;
	Global_90CE[14 /*12*/].f_2 = 7;
	Global_90CE[14 /*12*/].f_3 = 1;
	Global_90CE[14 /*12*/].f_A = 0;
	Global_90CE[14 /*12*/].f_B = 0;
	Global_90CE[14 /*12*/].f_4 = 0;
	Global_90CE[15 /*12*/] = 48;
	Global_90CE[15 /*12*/].f_1 = 49;
	Global_90CE[15 /*12*/].f_2 = 7;
	Global_90CE[15 /*12*/].f_3 = 1;
	Global_90CE[15 /*12*/].f_A = 0;
	Global_90CE[15 /*12*/].f_B = 0;
	Global_90CE[15 /*12*/].f_4 = 0;
	Global_90CE[16 /*12*/] = 50;
	Global_90CE[16 /*12*/].f_1 = 51;
	Global_90CE[16 /*12*/].f_2 = 4;
	Global_90CE[16 /*12*/].f_3 = 0;
	Global_90CE[16 /*12*/].f_A = 0;
	Global_90CE[16 /*12*/].f_B = 0;
	Global_90CE[16 /*12*/].f_4 = 0;
	Global_90CE[17 /*12*/] = 61;
	Global_90CE[17 /*12*/].f_1 = 62;
	Global_90CE[17 /*12*/].f_2 = 8;
	Global_90CE[17 /*12*/].f_3 = 0;
	Global_90CE[17 /*12*/].f_A = 1;
	Global_90CE[17 /*12*/].f_B = 0;
	Global_90CE[17 /*12*/].f_4 = 0;
	Global_90CE[18 /*12*/] = 63;
	Global_90CE[18 /*12*/].f_1 = 64;
	Global_90CE[18 /*12*/].f_2 = 9;
	Global_90CE[18 /*12*/].f_3 = 1;
	Global_90CE[18 /*12*/].f_A = 1;
	Global_90CE[18 /*12*/].f_B = 0;
	Global_90CE[18 /*12*/].f_4 = 0;
	Global_90CE[19 /*12*/] = 61;
	Global_90CE[19 /*12*/].f_1 = 65;
	Global_90CE[19 /*12*/].f_2 = 8;
	Global_90CE[19 /*12*/].f_3 = 0;
	Global_90CE[19 /*12*/].f_A = 1;
	Global_90CE[19 /*12*/].f_B = 0;
	Global_90CE[19 /*12*/].f_4 = 0;
	Global_90CE[20 /*12*/] = 61;
	Global_90CE[20 /*12*/].f_1 = 66;
	Global_90CE[20 /*12*/].f_2 = 8;
	Global_90CE[20 /*12*/].f_3 = 0;
	Global_90CE[20 /*12*/].f_A = 1;
	Global_90CE[20 /*12*/].f_B = 0;
	Global_90CE[20 /*12*/].f_4 = 0;
	Global_90CE[21 /*12*/] = 61;
	Global_90CE[21 /*12*/].f_1 = 67;
	Global_90CE[21 /*12*/].f_2 = 8;
	Global_90CE[21 /*12*/].f_3 = 0;
	Global_90CE[21 /*12*/].f_A = 1;
	Global_90CE[21 /*12*/].f_B = 0;
	Global_90CE[21 /*12*/].f_4 = 0;
	Global_90CE[22 /*12*/] = 61;
	Global_90CE[22 /*12*/].f_1 = 68;
	Global_90CE[22 /*12*/].f_2 = 8;
	Global_90CE[22 /*12*/].f_3 = 0;
	Global_90CE[22 /*12*/].f_A = 0;
	Global_90CE[22 /*12*/].f_B = 0;
	Global_90CE[22 /*12*/].f_4 = 0;
	Global_90CE[23 /*12*/] = 69;
	Global_90CE[23 /*12*/].f_1 = 70;
	Global_90CE[23 /*12*/].f_2 = 10;
	Global_90CE[23 /*12*/].f_3 = 2;
	Global_90CE[23 /*12*/].f_A = 1;
	Global_90CE[23 /*12*/].f_B = 0;
	Global_90CE[23 /*12*/].f_4 = 0;
	Global_90CE[24 /*12*/] = 63;
	Global_90CE[24 /*12*/].f_1 = 74;
	Global_90CE[24 /*12*/].f_2 = 9;
	Global_90CE[24 /*12*/].f_3 = 1;
	Global_90CE[24 /*12*/].f_A = 1;
	Global_90CE[24 /*12*/].f_B = 0;
	Global_90CE[24 /*12*/].f_4 = 0;
	Global_90CE[25 /*12*/] = 63;
	Global_90CE[25 /*12*/].f_1 = 75;
	Global_90CE[25 /*12*/].f_2 = 9;
	Global_90CE[25 /*12*/].f_3 = 1;
	Global_90CE[25 /*12*/].f_A = 1;
	Global_90CE[25 /*12*/].f_B = 0;
	Global_90CE[25 /*12*/].f_4 = 0;
	Global_90CE[26 /*12*/] = 63;
	Global_90CE[26 /*12*/].f_1 = 76;
	Global_90CE[26 /*12*/].f_2 = 9;
	Global_90CE[26 /*12*/].f_3 = 1;
	Global_90CE[26 /*12*/].f_A = 1;
	Global_90CE[26 /*12*/].f_B = 0;
	Global_90CE[26 /*12*/].f_4 = 0;
	Global_90CE[27 /*12*/] = 63;
	Global_90CE[27 /*12*/].f_1 = 77;
	Global_90CE[27 /*12*/].f_2 = 9;
	Global_90CE[27 /*12*/].f_3 = 1;
	Global_90CE[27 /*12*/].f_A = 0;
	Global_90CE[27 /*12*/].f_B = 0;
	Global_90CE[27 /*12*/].f_4 = 0;
	Global_90CE[28 /*12*/] = 69;
	Global_90CE[28 /*12*/].f_1 = 73;
	Global_90CE[28 /*12*/].f_2 = 10;
	Global_90CE[28 /*12*/].f_3 = 2;
	Global_90CE[28 /*12*/].f_A = 1;
	Global_90CE[28 /*12*/].f_B = 0;
	Global_90CE[28 /*12*/].f_4 = 0;
	Global_90CE[29 /*12*/] = 69;
	Global_90CE[29 /*12*/].f_1 = 72;
	Global_90CE[29 /*12*/].f_2 = 10;
	Global_90CE[29 /*12*/].f_3 = 2;
	Global_90CE[29 /*12*/].f_A = 1;
	Global_90CE[29 /*12*/].f_B = 0;
	Global_90CE[29 /*12*/].f_4 = 0;
	Global_90CE[30 /*12*/] = 69;
	Global_90CE[30 /*12*/].f_1 = 71;
	Global_90CE[30 /*12*/].f_2 = 10;
	Global_90CE[30 /*12*/].f_3 = 2;
	Global_90CE[30 /*12*/].f_A = 0;
	Global_90CE[30 /*12*/].f_B = 0;
	Global_90CE[30 /*12*/].f_4 = 0;
	Global_90CE[31 /*12*/] = 90;
	Global_90CE[31 /*12*/].f_1 = 91;
	Global_90CE[31 /*12*/].f_2 = 11;
	Global_90CE[31 /*12*/].f_3 = 1;
	Global_90CE[31 /*12*/].f_A = 0;
	Global_90CE[31 /*12*/].f_B = 0;
	Global_90CE[31 /*12*/].f_4 = 0;
	Global_90CE[32 /*12*/] = 90;
	Global_90CE[32 /*12*/].f_1 = 92;
	Global_90CE[32 /*12*/].f_2 = 11;
	Global_90CE[32 /*12*/].f_3 = 0;
	Global_90CE[32 /*12*/].f_A = 0;
	Global_90CE[32 /*12*/].f_B = 0;
	Global_90CE[32 /*12*/].f_4 = 0;
	Global_90CE[33 /*12*/] = 90;
	Global_90CE[33 /*12*/].f_1 = 93;
	Global_90CE[33 /*12*/].f_2 = 11;
	Global_90CE[33 /*12*/].f_3 = 2;
	Global_90CE[33 /*12*/].f_A = 0;
	Global_90CE[33 /*12*/].f_B = 0;
	Global_90CE[33 /*12*/].f_4 = 0;
	Global_90CE[34 /*12*/] = 94;
	Global_90CE[34 /*12*/].f_1 = 95;
	Global_90CE[34 /*12*/].f_2 = 13;
	Global_90CE[34 /*12*/].f_3 = 0;
	Global_90CE[34 /*12*/].f_A = 0;
	Global_90CE[34 /*12*/].f_B = 0;
	Global_90CE[34 /*12*/].f_4 = 0;
	Global_90CE[35 /*12*/] = 94;
	Global_90CE[35 /*12*/].f_1 = 96;
	Global_90CE[35 /*12*/].f_2 = 13;
	Global_90CE[35 /*12*/].f_3 = 1;
	Global_90CE[35 /*12*/].f_A = 0;
	Global_90CE[35 /*12*/].f_B = 0;
	Global_90CE[35 /*12*/].f_4 = 0;
	Global_90CE[36 /*12*/] = 94;
	Global_90CE[36 /*12*/].f_1 = 97;
	Global_90CE[36 /*12*/].f_2 = 13;
	Global_90CE[36 /*12*/].f_3 = 2;
	Global_90CE[36 /*12*/].f_A = 0;
	Global_90CE[36 /*12*/].f_B = 0;
	Global_90CE[36 /*12*/].f_4 = 0;
	Global_90CE[37 /*12*/] = 94;
	Global_90CE[37 /*12*/].f_1 = 98;
	Global_90CE[37 /*12*/].f_2 = 14;
	Global_90CE[37 /*12*/].f_3 = 0;
	Global_90CE[37 /*12*/].f_A = 0;
	Global_90CE[37 /*12*/].f_B = 0;
	Global_90CE[37 /*12*/].f_4 = 0;
	Global_90CE[38 /*12*/] = 94;
	Global_90CE[38 /*12*/].f_1 = 99;
	Global_90CE[38 /*12*/].f_2 = 14;
	Global_90CE[38 /*12*/].f_3 = 1;
	Global_90CE[38 /*12*/].f_A = 0;
	Global_90CE[38 /*12*/].f_B = 0;
	Global_90CE[38 /*12*/].f_4 = 0;
	Global_90CE[39 /*12*/] = 94;
	Global_90CE[39 /*12*/].f_1 = 100;
	Global_90CE[39 /*12*/].f_2 = 14;
	Global_90CE[39 /*12*/].f_3 = 2;
	Global_90CE[39 /*12*/].f_A = 0;
	Global_90CE[39 /*12*/].f_B = 0;
	Global_90CE[39 /*12*/].f_4 = 0;
	Global_90CE[40 /*12*/] = 94;
	Global_90CE[40 /*12*/].f_1 = 101;
	Global_90CE[40 /*12*/].f_2 = 12;
	Global_90CE[40 /*12*/].f_3 = 0;
	Global_90CE[40 /*12*/].f_A = 0;
	Global_90CE[40 /*12*/].f_B = 0;
	Global_90CE[40 /*12*/].f_4 = 0;
	Global_90CE[41 /*12*/] = 94;
	Global_90CE[41 /*12*/].f_1 = 102;
	Global_90CE[41 /*12*/].f_2 = 12;
	Global_90CE[41 /*12*/].f_3 = 1;
	Global_90CE[41 /*12*/].f_A = 0;
	Global_90CE[41 /*12*/].f_B = 0;
	Global_90CE[41 /*12*/].f_4 = 0;
	Global_90CE[42 /*12*/] = 94;
	Global_90CE[42 /*12*/].f_1 = 103;
	Global_90CE[42 /*12*/].f_2 = 12;
	Global_90CE[42 /*12*/].f_3 = 2;
	Global_90CE[42 /*12*/].f_A = 0;
	Global_90CE[42 /*12*/].f_B = 0;
	Global_90CE[42 /*12*/].f_4 = 0;
	Global_90CE[43 /*12*/] = 104;
	Global_90CE[43 /*12*/].f_1 = 105;
	Global_90CE[43 /*12*/].f_2 = 7;
	Global_90CE[43 /*12*/].f_3 = 0;
	Global_90CE[43 /*12*/].f_A = 1;
	Global_90CE[43 /*12*/].f_B = 0;
	Global_90CE[43 /*12*/].f_4 = 0;
	Global_90CE[44 /*12*/] = 108;
	Global_90CE[44 /*12*/].f_1 = 109;
	Global_90CE[44 /*12*/].f_2 = 15;
	Global_90CE[44 /*12*/].f_3 = 0;
	Global_90CE[44 /*12*/].f_A = 1;
	Global_90CE[44 /*12*/].f_B = 0;
	Global_90CE[44 /*12*/].f_4 = 0;
	Global_90CE[45 /*12*/] = 110;
	Global_90CE[45 /*12*/].f_1 = 111;
	Global_90CE[45 /*12*/].f_2 = 15;
	Global_90CE[45 /*12*/].f_3 = 0;
	Global_90CE[45 /*12*/].f_A = 1;
	Global_90CE[45 /*12*/].f_B = 0;
	Global_90CE[45 /*12*/].f_4 = 0;
	Global_90CE[46 /*12*/] = 112;
	Global_90CE[46 /*12*/].f_1 = 113;
	Global_90CE[46 /*12*/].f_2 = 15;
	Global_90CE[46 /*12*/].f_3 = 0;
	Global_90CE[46 /*12*/].f_A = 1;
	Global_90CE[46 /*12*/].f_B = 0;
	Global_90CE[46 /*12*/].f_4 = 0;
	Global_90CE[47 /*12*/] = 117;
	Global_90CE[47 /*12*/].f_1 = 118;
	Global_90CE[47 /*12*/].f_2 = 16;
	Global_90CE[47 /*12*/].f_3 = 0;
	Global_90CE[47 /*12*/].f_A = 1;
	Global_90CE[47 /*12*/].f_B = 0;
	Global_90CE[47 /*12*/].f_4 = 0;
	Global_90CE[48 /*12*/] = 119;
	Global_90CE[48 /*12*/].f_1 = 120;
	Global_90CE[48 /*12*/].f_2 = 16;
	Global_90CE[48 /*12*/].f_3 = 0;
	Global_90CE[48 /*12*/].f_A = 1;
	Global_90CE[48 /*12*/].f_B = 0;
	Global_90CE[48 /*12*/].f_4 = 0;
	Global_90CE[49 /*12*/] = 131;
	Global_90CE[49 /*12*/].f_1 = 132;
	Global_90CE[49 /*12*/].f_2 = 16;
	Global_90CE[49 /*12*/].f_3 = 0;
	Global_90CE[49 /*12*/].f_A = 1;
	Global_90CE[49 /*12*/].f_B = 0;
	Global_90CE[49 /*12*/].f_4 = 0;
	Global_90CE[50 /*12*/] = 129;
	Global_90CE[50 /*12*/].f_1 = 130;
	Global_90CE[50 /*12*/].f_2 = 16;
	Global_90CE[50 /*12*/].f_3 = 0;
	Global_90CE[50 /*12*/].f_A = 0;
	Global_90CE[50 /*12*/].f_B = 0;
	Global_90CE[50 /*12*/].f_4 = 0;
	Global_90CE[51 /*12*/] = 127;
	Global_90CE[51 /*12*/].f_1 = 128;
	Global_90CE[51 /*12*/].f_2 = 16;
	Global_90CE[51 /*12*/].f_3 = 0;
	Global_90CE[51 /*12*/].f_A = 1;
	Global_90CE[51 /*12*/].f_B = 0;
	Global_90CE[51 /*12*/].f_4 = 0;
	Global_90CE[52 /*12*/] = 125;
	Global_90CE[52 /*12*/].f_1 = 126;
	Global_90CE[52 /*12*/].f_2 = 16;
	Global_90CE[52 /*12*/].f_3 = 0;
	Global_90CE[52 /*12*/].f_A = 1;
	Global_90CE[52 /*12*/].f_B = 0;
	Global_90CE[52 /*12*/].f_4 = 0;
	Global_90CE[53 /*12*/] = 123;
	Global_90CE[53 /*12*/].f_1 = 124;
	Global_90CE[53 /*12*/].f_2 = 16;
	Global_90CE[53 /*12*/].f_3 = 0;
	Global_90CE[53 /*12*/].f_A = 1;
	Global_90CE[53 /*12*/].f_B = 0;
	Global_90CE[53 /*12*/].f_4 = 0;
	Global_90CE[54 /*12*/] = 121;
	Global_90CE[54 /*12*/].f_1 = 122;
	Global_90CE[54 /*12*/].f_2 = 16;
	Global_90CE[54 /*12*/].f_3 = 0;
	Global_90CE[54 /*12*/].f_A = 1;
	Global_90CE[54 /*12*/].f_B = 0;
	Global_90CE[54 /*12*/].f_4 = 0;
	Global_90CE[55 /*12*/] = 133;
	Global_90CE[55 /*12*/].f_1 = 134;
	Global_90CE[55 /*12*/].f_2 = 12;
	Global_90CE[55 /*12*/].f_3 = 0;
	Global_90CE[55 /*12*/].f_A = 0;
	Global_90CE[55 /*12*/].f_B = 0;
	Global_90CE[55 /*12*/].f_4 = 0;
	Global_90CE[56 /*12*/] = 135;
	Global_90CE[56 /*12*/].f_1 = 136;
	Global_90CE[56 /*12*/].f_2 = 14;
	Global_90CE[56 /*12*/].f_3 = 0;
	Global_90CE[56 /*12*/].f_A = 0;
	Global_90CE[56 /*12*/].f_B = 0;
	Global_90CE[56 /*12*/].f_4 = 0;
	Global_90CE[57 /*12*/] = 137;
	Global_90CE[57 /*12*/].f_1 = 138;
	Global_90CE[57 /*12*/].f_2 = 12;
	Global_90CE[57 /*12*/].f_3 = 0;
	Global_90CE[57 /*12*/].f_A = 0;
	Global_90CE[57 /*12*/].f_B = 0;
	Global_90CE[57 /*12*/].f_4 = 0;
	Global_90CE[58 /*12*/] = 133;
	Global_90CE[58 /*12*/].f_1 = 139;
	Global_90CE[58 /*12*/].f_2 = 12;
	Global_90CE[58 /*12*/].f_3 = 1;
	Global_90CE[58 /*12*/].f_A = 0;
	Global_90CE[58 /*12*/].f_B = 0;
	Global_90CE[58 /*12*/].f_4 = 0;
	Global_90CE[59 /*12*/] = 133;
	Global_90CE[59 /*12*/].f_1 = 140;
	Global_90CE[59 /*12*/].f_2 = 12;
	Global_90CE[59 /*12*/].f_3 = 2;
	Global_90CE[59 /*12*/].f_A = 0;
	Global_90CE[59 /*12*/].f_B = 0;
	Global_90CE[59 /*12*/].f_4 = 0;
	Global_90CE[60 /*12*/] = 135;
	Global_90CE[60 /*12*/].f_1 = 136;
	Global_90CE[60 /*12*/].f_2 = 14;
	Global_90CE[60 /*12*/].f_3 = 1;
	Global_90CE[60 /*12*/].f_A = 0;
	Global_90CE[60 /*12*/].f_B = 0;
	Global_90CE[60 /*12*/].f_4 = 0;
	Global_90CE[61 /*12*/] = 135;
	Global_90CE[61 /*12*/].f_1 = 136;
	Global_90CE[61 /*12*/].f_2 = 14;
	Global_90CE[61 /*12*/].f_3 = 2;
	Global_90CE[61 /*12*/].f_A = 0;
	Global_90CE[61 /*12*/].f_B = 0;
	Global_90CE[61 /*12*/].f_4 = 0;
	Global_90CE[62 /*12*/] = 137;
	Global_90CE[62 /*12*/].f_1 = 141;
	Global_90CE[62 /*12*/].f_2 = 12;
	Global_90CE[62 /*12*/].f_3 = 1;
	Global_90CE[62 /*12*/].f_A = 0;
	Global_90CE[62 /*12*/].f_B = 0;
	Global_90CE[62 /*12*/].f_4 = 0;
	Global_90CE[63 /*12*/] = 137;
	Global_90CE[63 /*12*/].f_1 = 138;
	Global_90CE[63 /*12*/].f_2 = 12;
	Global_90CE[63 /*12*/].f_3 = 2;
	Global_90CE[63 /*12*/].f_A = 0;
	Global_90CE[63 /*12*/].f_B = 0;
	Global_90CE[63 /*12*/].f_4 = 0;
	Global_90CE[64 /*12*/] = 148;
	Global_90CE[64 /*12*/].f_1 = 149;
	Global_90CE[64 /*12*/].f_2 = 7;
	Global_90CE[64 /*12*/].f_3 = 0;
	Global_90CE[64 /*12*/].f_A = 0;
	Global_90CE[64 /*12*/].f_B = 0;
	Global_90CE[64 /*12*/].f_4 = 0;
	Global_90CE[65 /*12*/] = 148;
	Global_90CE[65 /*12*/].f_1 = 151;
	Global_90CE[65 /*12*/].f_2 = 7;
	Global_90CE[65 /*12*/].f_3 = 0;
	Global_90CE[65 /*12*/].f_A = 0;
	Global_90CE[65 /*12*/].f_B = 0;
	Global_90CE[65 /*12*/].f_4 = 0;
	Global_90CE[66 /*12*/] = 148;
	Global_90CE[66 /*12*/].f_1 = 150;
	Global_90CE[66 /*12*/].f_2 = 7;
	Global_90CE[66 /*12*/].f_3 = 0;
	Global_90CE[66 /*12*/].f_A = 0;
	Global_90CE[66 /*12*/].f_B = 0;
	Global_90CE[66 /*12*/].f_4 = 0;
	Global_90CE[67 /*12*/] = 155;
	Global_90CE[67 /*12*/].f_1 = 156;
	Global_90CE[67 /*12*/].f_2 = 63;
	Global_90CE[67 /*12*/].f_3 = 2;
	Global_90CE[67 /*12*/].f_A = 0;
	Global_90CE[67 /*12*/].f_B = 0;
	Global_90CE[67 /*12*/].f_4 = 0;
	Global_90CE[68 /*12*/] = 125;
	Global_90CE[68 /*12*/].f_1 = 160;
	Global_90CE[68 /*12*/].f_2 = 16;
	Global_90CE[68 /*12*/].f_3 = 0;
	Global_90CE[68 /*12*/].f_A = 1;
	Global_90CE[68 /*12*/].f_B = 0;
	Global_90CE[68 /*12*/].f_4 = 0;
	Global_90CE[69 /*12*/] = 161;
	Global_90CE[69 /*12*/].f_1 = 162;
	Global_90CE[69 /*12*/].f_2 = 64;
	Global_90CE[69 /*12*/].f_3 = 2;
	Global_90CE[69 /*12*/].f_A = 0;
	Global_90CE[69 /*12*/].f_B = 0;
	Global_90CE[69 /*12*/].f_4 = 0;
	Global_90CE[70 /*12*/] = 161;
	Global_90CE[70 /*12*/].f_1 = 162;
	Global_90CE[70 /*12*/].f_2 = 64;
	Global_90CE[70 /*12*/].f_3 = 1;
	Global_90CE[70 /*12*/].f_A = 0;
	Global_90CE[70 /*12*/].f_B = 0;
	Global_90CE[70 /*12*/].f_4 = 0;
	Global_90CE[71 /*12*/] = 161;
	Global_90CE[71 /*12*/].f_1 = 162;
	Global_90CE[71 /*12*/].f_2 = 64;
	Global_90CE[71 /*12*/].f_3 = 2;
	Global_90CE[71 /*12*/].f_A = 0;
	Global_90CE[71 /*12*/].f_B = 0;
	Global_90CE[71 /*12*/].f_4 = 0;
	Global_90CE[72 /*12*/] = 166;
	Global_90CE[72 /*12*/].f_1 = 16;
	Global_90CE[72 /*12*/].f_2 = 21;
	Global_90CE[72 /*12*/].f_3 = 0;
	Global_90CE[72 /*12*/].f_A = 0;
	Global_90CE[72 /*12*/].f_B = 0;
	Global_90CE[72 /*12*/].f_4 = 0;
	Global_90CE[73 /*12*/] = 166;
	Global_90CE[73 /*12*/].f_1 = 16;
	Global_90CE[73 /*12*/].f_2 = 21;
	Global_90CE[73 /*12*/].f_3 = 1;
	Global_90CE[73 /*12*/].f_A = 0;
	Global_90CE[73 /*12*/].f_B = 0;
	Global_90CE[73 /*12*/].f_4 = 0;
	Global_90CE[74 /*12*/] = 166;
	Global_90CE[74 /*12*/].f_1 = 16;
	Global_90CE[74 /*12*/].f_2 = 21;
	Global_90CE[74 /*12*/].f_3 = 2;
	Global_90CE[74 /*12*/].f_A = 0;
	Global_90CE[74 /*12*/].f_B = 0;
	Global_90CE[74 /*12*/].f_4 = 0;
	Global_90CE[75 /*12*/] = 167;
	Global_90CE[75 /*12*/].f_1 = 16;
	Global_90CE[75 /*12*/].f_2 = 6;
	Global_90CE[75 /*12*/].f_3 = 2;
	Global_90CE[75 /*12*/].f_A = 0;
	Global_90CE[75 /*12*/].f_B = 0;
	Global_90CE[75 /*12*/].f_4 = 0;
	Global_90CE[76 /*12*/] = 168;
	Global_90CE[76 /*12*/].f_1 = 16;
	Global_90CE[76 /*12*/].f_2 = 6;
	Global_90CE[76 /*12*/].f_3 = 2;
	Global_90CE[76 /*12*/].f_A = 0;
	Global_90CE[76 /*12*/].f_B = 0;
	Global_90CE[76 /*12*/].f_4 = 0;
	Global_90CE[77 /*12*/] = 169;
	Global_90CE[77 /*12*/].f_1 = 16;
	Global_90CE[77 /*12*/].f_2 = 6;
	Global_90CE[77 /*12*/].f_3 = 2;
	Global_90CE[77 /*12*/].f_A = 0;
	Global_90CE[77 /*12*/].f_B = 0;
	Global_90CE[77 /*12*/].f_4 = 0;
	Global_90CE[78 /*12*/] = 170;
	Global_90CE[78 /*12*/].f_1 = 16;
	Global_90CE[78 /*12*/].f_2 = 6;
	Global_90CE[78 /*12*/].f_3 = 2;
	Global_90CE[78 /*12*/].f_A = 0;
	Global_90CE[78 /*12*/].f_B = 0;
	Global_90CE[78 /*12*/].f_4 = 0;
	Global_90CE[79 /*12*/] = 171;
	Global_90CE[79 /*12*/].f_1 = 16;
	Global_90CE[79 /*12*/].f_2 = 6;
	Global_90CE[79 /*12*/].f_3 = 2;
	Global_90CE[79 /*12*/].f_A = 0;
	Global_90CE[79 /*12*/].f_B = 0;
	Global_90CE[79 /*12*/].f_4 = 0;
	Global_90CE[80 /*12*/] = 172;
	Global_90CE[80 /*12*/].f_1 = 173;
	Global_90CE[80 /*12*/].f_2 = 6;
	Global_90CE[80 /*12*/].f_3 = 2;
	Global_90CE[80 /*12*/].f_A = 0;
	Global_90CE[80 /*12*/].f_B = 0;
	Global_90CE[80 /*12*/].f_4 = 0;
	Global_90CE[81 /*12*/] = 174;
	Global_90CE[81 /*12*/].f_1 = 175;
	Global_90CE[81 /*12*/].f_2 = 6;
	Global_90CE[81 /*12*/].f_3 = 2;
	Global_90CE[81 /*12*/].f_A = 0;
	Global_90CE[81 /*12*/].f_B = 0;
	Global_90CE[81 /*12*/].f_4 = 0;
	Global_90CE[82 /*12*/] = 176;
	Global_90CE[82 /*12*/].f_1 = 177;
	Global_90CE[82 /*12*/].f_2 = 6;
	Global_90CE[82 /*12*/].f_3 = 2;
	Global_90CE[82 /*12*/].f_A = 0;
	Global_90CE[82 /*12*/].f_B = 0;
	Global_90CE[82 /*12*/].f_4 = 0;
	Global_90CE[83 /*12*/] = 178;
	Global_90CE[83 /*12*/].f_1 = 179;
	Global_90CE[83 /*12*/].f_2 = 6;
	Global_90CE[83 /*12*/].f_3 = 2;
	Global_90CE[83 /*12*/].f_A = 0;
	Global_90CE[83 /*12*/].f_B = 0;
	Global_90CE[83 /*12*/].f_4 = 0;
	Global_90CE[84 /*12*/] = 180;
	Global_90CE[84 /*12*/].f_1 = 181;
	Global_90CE[84 /*12*/].f_2 = 4;
	Global_90CE[84 /*12*/].f_3 = 0;
	Global_90CE[84 /*12*/].f_A = 0;
	Global_90CE[84 /*12*/].f_B = 3000;
	Global_90CE[84 /*12*/].f_4 = 0;
	Global_90CE[85 /*12*/] = 185;
	Global_90CE[85 /*12*/].f_1 = 186;
	Global_90CE[85 /*12*/].f_2 = 22;
	Global_90CE[85 /*12*/].f_3 = 0;
	Global_90CE[85 /*12*/].f_A = 0;
	Global_90CE[85 /*12*/].f_B = 0;
	Global_90CE[85 /*12*/].f_4 = 0;
	Global_90CE[86 /*12*/] = 193;
	Global_90CE[86 /*12*/].f_1 = 194;
	Global_90CE[86 /*12*/].f_2 = 24;
	Global_90CE[86 /*12*/].f_3 = 0;
	Global_90CE[86 /*12*/].f_A = 1;
	Global_90CE[86 /*12*/].f_B = 0;
	Global_90CE[86 /*12*/].f_4 = 1;
	Global_90CE[86 /*12*/].f_5[0 /*4*/] = 199;
	Global_90CE[86 /*12*/].f_5[0 /*4*/].f_1 = 87;
	Global_90CE[86 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[86 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[87 /*12*/] = 195;
	Global_90CE[87 /*12*/].f_1 = 196;
	Global_90CE[87 /*12*/].f_2 = 0;
	Global_90CE[87 /*12*/].f_3 = 24;
	Global_90CE[87 /*12*/].f_A = 0;
	Global_90CE[87 /*12*/].f_B = 0;
	Global_90CE[87 /*12*/].f_4 = 1;
	Global_90CE[87 /*12*/].f_5[0 /*4*/] = 199;
	Global_90CE[87 /*12*/].f_5[0 /*4*/].f_1 = 88;
	Global_90CE[87 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[87 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[88 /*12*/] = 197;
	Global_90CE[88 /*12*/].f_1 = 198;
	Global_90CE[88 /*12*/].f_2 = 24;
	Global_90CE[88 /*12*/].f_3 = 0;
	Global_90CE[88 /*12*/].f_A = 0;
	Global_90CE[88 /*12*/].f_B = 120000;
	Global_90CE[88 /*12*/].f_4 = 0;
	Global_90CE[89 /*12*/] = 200;
	Global_90CE[89 /*12*/].f_1 = 201;
	Global_90CE[89 /*12*/].f_2 = 24;
	Global_90CE[89 /*12*/].f_3 = 0;
	Global_90CE[89 /*12*/].f_A = 1;
	Global_90CE[89 /*12*/].f_B = 0;
	Global_90CE[89 /*12*/].f_4 = 1;
	Global_90CE[89 /*12*/].f_5[0 /*4*/] = 199;
	Global_90CE[89 /*12*/].f_5[0 /*4*/].f_1 = 90;
	Global_90CE[89 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[89 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[90 /*12*/] = 202;
	Global_90CE[90 /*12*/].f_1 = 203;
	Global_90CE[90 /*12*/].f_2 = 0;
	Global_90CE[90 /*12*/].f_3 = 24;
	Global_90CE[90 /*12*/].f_A = 0;
	Global_90CE[90 /*12*/].f_B = 0;
	Global_90CE[90 /*12*/].f_4 = 1;
	Global_90CE[90 /*12*/].f_5[0 /*4*/] = 199;
	Global_90CE[90 /*12*/].f_5[0 /*4*/].f_1 = 91;
	Global_90CE[90 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[90 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[91 /*12*/] = 204;
	Global_90CE[91 /*12*/].f_1 = 205;
	Global_90CE[91 /*12*/].f_2 = 24;
	Global_90CE[91 /*12*/].f_3 = 0;
	Global_90CE[91 /*12*/].f_A = 0;
	Global_90CE[91 /*12*/].f_B = 120000;
	Global_90CE[91 /*12*/].f_4 = 0;
	Global_90CE[92 /*12*/] = 209;
	Global_90CE[92 /*12*/].f_1 = 210;
	Global_90CE[92 /*12*/].f_2 = 25;
	Global_90CE[92 /*12*/].f_3 = 0;
	Global_90CE[92 /*12*/].f_A = 1;
	Global_90CE[92 /*12*/].f_B = 0;
	Global_90CE[92 /*12*/].f_4 = 1;
	Global_90CE[92 /*12*/].f_5[0 /*4*/] = 199;
	Global_90CE[92 /*12*/].f_5[0 /*4*/].f_1 = 93;
	Global_90CE[92 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[92 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[93 /*12*/] = 211;
	Global_90CE[93 /*12*/].f_1 = 212;
	Global_90CE[93 /*12*/].f_2 = 0;
	Global_90CE[93 /*12*/].f_3 = 25;
	Global_90CE[93 /*12*/].f_A = 0;
	Global_90CE[93 /*12*/].f_B = 0;
	Global_90CE[93 /*12*/].f_4 = 1;
	Global_90CE[93 /*12*/].f_5[0 /*4*/] = 199;
	Global_90CE[93 /*12*/].f_5[0 /*4*/].f_1 = 94;
	Global_90CE[93 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[93 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[94 /*12*/] = 213;
	Global_90CE[94 /*12*/].f_1 = 214;
	Global_90CE[94 /*12*/].f_2 = 25;
	Global_90CE[94 /*12*/].f_3 = 0;
	Global_90CE[94 /*12*/].f_A = 1;
	Global_90CE[94 /*12*/].f_B = 60000;
	Global_90CE[94 /*12*/].f_4 = 1;
	Global_90CE[94 /*12*/].f_5[0 /*4*/] = 199;
	Global_90CE[94 /*12*/].f_5[0 /*4*/].f_1 = 95;
	Global_90CE[94 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[94 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[95 /*12*/] = 215;
	Global_90CE[95 /*12*/].f_1 = 216;
	Global_90CE[95 /*12*/].f_2 = 0;
	Global_90CE[95 /*12*/].f_3 = 25;
	Global_90CE[95 /*12*/].f_A = 0;
	Global_90CE[95 /*12*/].f_B = 0;
	Global_90CE[95 /*12*/].f_4 = 1;
	Global_90CE[95 /*12*/].f_5[0 /*4*/] = 199;
	Global_90CE[95 /*12*/].f_5[0 /*4*/].f_1 = 96;
	Global_90CE[95 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[95 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[96 /*12*/] = 217;
	Global_90CE[96 /*12*/].f_1 = 218;
	Global_90CE[96 /*12*/].f_2 = 25;
	Global_90CE[96 /*12*/].f_3 = 0;
	Global_90CE[96 /*12*/].f_A = 0;
	Global_90CE[96 /*12*/].f_B = 60000;
	Global_90CE[96 /*12*/].f_4 = 0;
	Global_90CE[97 /*12*/] = 222;
	Global_90CE[97 /*12*/].f_1 = 223;
	Global_90CE[97 /*12*/].f_2 = 26;
	Global_90CE[97 /*12*/].f_3 = 0;
	Global_90CE[97 /*12*/].f_A = 1;
	Global_90CE[97 /*12*/].f_B = 0;
	Global_90CE[97 /*12*/].f_4 = 1;
	Global_90CE[97 /*12*/].f_5[0 /*4*/] = 199;
	Global_90CE[97 /*12*/].f_5[0 /*4*/].f_1 = 98;
	Global_90CE[97 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[97 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[98 /*12*/] = 224;
	Global_90CE[98 /*12*/].f_1 = 225;
	Global_90CE[98 /*12*/].f_2 = 0;
	Global_90CE[98 /*12*/].f_3 = 26;
	Global_90CE[98 /*12*/].f_A = 0;
	Global_90CE[98 /*12*/].f_B = 0;
	Global_90CE[98 /*12*/].f_4 = 0;
	Global_90CE[99 /*12*/] = 229;
	Global_90CE[99 /*12*/].f_1 = 230;
	Global_90CE[99 /*12*/].f_2 = 27;
	Global_90CE[99 /*12*/].f_3 = 0;
	Global_90CE[99 /*12*/].f_A = 1;
	Global_90CE[99 /*12*/].f_B = 0;
	Global_90CE[99 /*12*/].f_4 = 1;
	Global_90CE[99 /*12*/].f_5[0 /*4*/] = 199;
	Global_90CE[99 /*12*/].f_5[0 /*4*/].f_1 = 100;
	Global_90CE[99 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[99 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[100 /*12*/] = 231;
	Global_90CE[100 /*12*/].f_1 = 232;
	Global_90CE[100 /*12*/].f_2 = 0;
	Global_90CE[100 /*12*/].f_3 = 27;
	Global_90CE[100 /*12*/].f_A = 0;
	Global_90CE[100 /*12*/].f_B = 0;
	Global_90CE[100 /*12*/].f_4 = 0;
	Global_90CE[101 /*12*/] = 236;
	Global_90CE[101 /*12*/].f_1 = 237;
	Global_90CE[101 /*12*/].f_2 = 28;
	Global_90CE[101 /*12*/].f_3 = 0;
	Global_90CE[101 /*12*/].f_A = 0;
	Global_90CE[101 /*12*/].f_B = 0;
	Global_90CE[101 /*12*/].f_4 = 0;
	Global_90CE[102 /*12*/] = 238;
	Global_90CE[102 /*12*/].f_1 = 239;
	Global_90CE[102 /*12*/].f_2 = 26;
	Global_90CE[102 /*12*/].f_3 = 0;
	Global_90CE[102 /*12*/].f_A = 1;
	Global_90CE[102 /*12*/].f_B = 0;
	Global_90CE[102 /*12*/].f_4 = 1;
	Global_90CE[102 /*12*/].f_5[0 /*4*/] = 199;
	Global_90CE[102 /*12*/].f_5[0 /*4*/].f_1 = 103;
	Global_90CE[102 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[102 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[103 /*12*/] = 240;
	Global_90CE[103 /*12*/].f_1 = 241;
	Global_90CE[103 /*12*/].f_2 = 0;
	Global_90CE[103 /*12*/].f_3 = 26;
	Global_90CE[103 /*12*/].f_A = 0;
	Global_90CE[103 /*12*/].f_B = 0;
	Global_90CE[103 /*12*/].f_4 = 0;
	Global_90CE[104 /*12*/] = 245;
	Global_90CE[104 /*12*/].f_1 = 246;
	Global_90CE[104 /*12*/].f_2 = 29;
	Global_90CE[104 /*12*/].f_3 = 0;
	Global_90CE[104 /*12*/].f_A = 1;
	Global_90CE[104 /*12*/].f_B = 0;
	Global_90CE[104 /*12*/].f_4 = 1;
	Global_90CE[104 /*12*/].f_5[0 /*4*/] = 199;
	Global_90CE[104 /*12*/].f_5[0 /*4*/].f_1 = 105;
	Global_90CE[104 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[104 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[105 /*12*/] = 247;
	Global_90CE[105 /*12*/].f_1 = 248;
	Global_90CE[105 /*12*/].f_2 = 0;
	Global_90CE[105 /*12*/].f_3 = 29;
	Global_90CE[105 /*12*/].f_A = 0;
	Global_90CE[105 /*12*/].f_B = 0;
	Global_90CE[105 /*12*/].f_4 = 0;
	Global_90CE[106 /*12*/] = 252;
	Global_90CE[106 /*12*/].f_1 = 253;
	Global_90CE[106 /*12*/].f_2 = 30;
	Global_90CE[106 /*12*/].f_3 = 1;
	Global_90CE[106 /*12*/].f_A = 1;
	Global_90CE[106 /*12*/].f_B = 120000;
	Global_90CE[106 /*12*/].f_4 = 1;
	Global_90CE[106 /*12*/].f_5[0 /*4*/] = 199;
	Global_90CE[106 /*12*/].f_5[0 /*4*/].f_1 = 107;
	Global_90CE[106 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[106 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[107 /*12*/] = 254;
	Global_90CE[107 /*12*/].f_1 = 255;
	Global_90CE[107 /*12*/].f_2 = 1;
	Global_90CE[107 /*12*/].f_3 = 30;
	Global_90CE[107 /*12*/].f_A = 0;
	Global_90CE[107 /*12*/].f_B = 0;
	Global_90CE[107 /*12*/].f_4 = 1;
	Global_90CE[107 /*12*/].f_5[0 /*4*/] = 199;
	Global_90CE[107 /*12*/].f_5[0 /*4*/].f_1 = 108;
	Global_90CE[107 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[107 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[108 /*12*/] = 256;
	Global_90CE[108 /*12*/].f_1 = 257;
	Global_90CE[108 /*12*/].f_2 = 30;
	Global_90CE[108 /*12*/].f_3 = 1;
	Global_90CE[108 /*12*/].f_A = 1;
	Global_90CE[108 /*12*/].f_B = 120000;
	Global_90CE[108 /*12*/].f_4 = 1;
	Global_90CE[108 /*12*/].f_5[0 /*4*/] = 199;
	Global_90CE[108 /*12*/].f_5[0 /*4*/].f_1 = 109;
	Global_90CE[108 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[108 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[109 /*12*/] = 258;
	Global_90CE[109 /*12*/].f_1 = 259;
	Global_90CE[109 /*12*/].f_2 = 1;
	Global_90CE[109 /*12*/].f_3 = 30;
	Global_90CE[109 /*12*/].f_A = 0;
	Global_90CE[109 /*12*/].f_B = 0;
	Global_90CE[109 /*12*/].f_4 = 1;
	Global_90CE[109 /*12*/].f_5[0 /*4*/] = 199;
	Global_90CE[109 /*12*/].f_5[0 /*4*/].f_1 = 110;
	Global_90CE[109 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[109 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[110 /*12*/] = 260;
	Global_90CE[110 /*12*/].f_1 = 261;
	Global_90CE[110 /*12*/].f_2 = 30;
	Global_90CE[110 /*12*/].f_3 = 1;
	Global_90CE[110 /*12*/].f_A = 0;
	Global_90CE[110 /*12*/].f_B = 60000;
	Global_90CE[110 /*12*/].f_4 = 0;
	Global_90CE[111 /*12*/] = 265;
	Global_90CE[111 /*12*/].f_1 = 266;
	Global_90CE[111 /*12*/].f_2 = 31;
	Global_90CE[111 /*12*/].f_3 = 1;
	Global_90CE[111 /*12*/].f_A = 1;
	Global_90CE[111 /*12*/].f_B = 0;
	Global_90CE[111 /*12*/].f_4 = 1;
	Global_90CE[111 /*12*/].f_5[0 /*4*/] = 199;
	Global_90CE[111 /*12*/].f_5[0 /*4*/].f_1 = 112;
	Global_90CE[111 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[111 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[112 /*12*/] = 267;
	Global_90CE[112 /*12*/].f_1 = 268;
	Global_90CE[112 /*12*/].f_2 = 1;
	Global_90CE[112 /*12*/].f_3 = 31;
	Global_90CE[112 /*12*/].f_A = 0;
	Global_90CE[112 /*12*/].f_B = 0;
	Global_90CE[112 /*12*/].f_4 = 0;
	Global_90CE[113 /*12*/] = 272;
	Global_90CE[113 /*12*/].f_1 = 273;
	Global_90CE[113 /*12*/].f_2 = 32;
	Global_90CE[113 /*12*/].f_3 = 1;
	Global_90CE[113 /*12*/].f_A = 1;
	Global_90CE[113 /*12*/].f_B = 0;
	Global_90CE[113 /*12*/].f_4 = 1;
	Global_90CE[113 /*12*/].f_5[0 /*4*/] = 199;
	Global_90CE[113 /*12*/].f_5[0 /*4*/].f_1 = 114;
	Global_90CE[113 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[113 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[114 /*12*/] = 274;
	Global_90CE[114 /*12*/].f_1 = 275;
	Global_90CE[114 /*12*/].f_2 = 1;
	Global_90CE[114 /*12*/].f_3 = 32;
	Global_90CE[114 /*12*/].f_A = 0;
	Global_90CE[114 /*12*/].f_B = 0;
	Global_90CE[114 /*12*/].f_4 = 1;
	Global_90CE[114 /*12*/].f_5[0 /*4*/] = 199;
	Global_90CE[114 /*12*/].f_5[0 /*4*/].f_1 = 115;
	Global_90CE[114 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[114 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[115 /*12*/] = 276;
	Global_90CE[115 /*12*/].f_1 = 277;
	Global_90CE[115 /*12*/].f_2 = 32;
	Global_90CE[115 /*12*/].f_3 = 1;
	Global_90CE[115 /*12*/].f_A = 0;
	Global_90CE[115 /*12*/].f_B = 30000;
	Global_90CE[115 /*12*/].f_4 = 0;
	Global_90CE[116 /*12*/] = 278;
	Global_90CE[116 /*12*/].f_1 = 279;
	Global_90CE[116 /*12*/].f_2 = 32;
	Global_90CE[116 /*12*/].f_3 = 1;
	Global_90CE[116 /*12*/].f_A = 1;
	Global_90CE[116 /*12*/].f_B = 0;
	Global_90CE[116 /*12*/].f_4 = 1;
	Global_90CE[116 /*12*/].f_5[0 /*4*/] = 282;
	Global_90CE[116 /*12*/].f_5[0 /*4*/].f_1 = 117;
	Global_90CE[116 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[116 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[117 /*12*/] = 280;
	Global_90CE[117 /*12*/].f_1 = 281;
	Global_90CE[117 /*12*/].f_2 = 1;
	Global_90CE[117 /*12*/].f_3 = 32;
	Global_90CE[117 /*12*/].f_A = 0;
	Global_90CE[117 /*12*/].f_B = 0;
	Global_90CE[117 /*12*/].f_4 = 0;
	Global_90CE[118 /*12*/] = 283;
	Global_90CE[118 /*12*/].f_1 = 284;
	Global_90CE[118 /*12*/].f_2 = 32;
	Global_90CE[118 /*12*/].f_3 = 1;
	Global_90CE[118 /*12*/].f_A = 1;
	Global_90CE[118 /*12*/].f_B = 0;
	Global_90CE[118 /*12*/].f_4 = 1;
	Global_90CE[118 /*12*/].f_5[0 /*4*/] = 199;
	Global_90CE[118 /*12*/].f_5[0 /*4*/].f_1 = 119;
	Global_90CE[118 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[118 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[119 /*12*/] = 285;
	Global_90CE[119 /*12*/].f_1 = 286;
	Global_90CE[119 /*12*/].f_2 = 1;
	Global_90CE[119 /*12*/].f_3 = 32;
	Global_90CE[119 /*12*/].f_A = 0;
	Global_90CE[119 /*12*/].f_B = 0;
	Global_90CE[119 /*12*/].f_4 = 0;
	Global_90CE[120 /*12*/] = 287;
	Global_90CE[120 /*12*/].f_1 = 288;
	Global_90CE[120 /*12*/].f_2 = 32;
	Global_90CE[120 /*12*/].f_3 = 1;
	Global_90CE[120 /*12*/].f_A = 1;
	Global_90CE[120 /*12*/].f_B = 0;
	Global_90CE[120 /*12*/].f_4 = 1;
	Global_90CE[120 /*12*/].f_5[0 /*4*/] = 199;
	Global_90CE[120 /*12*/].f_5[0 /*4*/].f_1 = 121;
	Global_90CE[120 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[120 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[121 /*12*/] = 289;
	Global_90CE[121 /*12*/].f_1 = 290;
	Global_90CE[121 /*12*/].f_2 = 1;
	Global_90CE[121 /*12*/].f_3 = 32;
	Global_90CE[121 /*12*/].f_A = 0;
	Global_90CE[121 /*12*/].f_B = 0;
	Global_90CE[121 /*12*/].f_4 = 1;
	Global_90CE[121 /*12*/].f_5[0 /*4*/] = 199;
	Global_90CE[121 /*12*/].f_5[0 /*4*/].f_1 = 122;
	Global_90CE[121 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[121 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[122 /*12*/] = 291;
	Global_90CE[122 /*12*/].f_1 = 292;
	Global_90CE[122 /*12*/].f_2 = 32;
	Global_90CE[122 /*12*/].f_3 = 1;
	Global_90CE[122 /*12*/].f_A = 1;
	Global_90CE[122 /*12*/].f_B = 30000;
	Global_90CE[122 /*12*/].f_4 = 1;
	Global_90CE[122 /*12*/].f_5[0 /*4*/] = 199;
	Global_90CE[122 /*12*/].f_5[0 /*4*/].f_1 = 123;
	Global_90CE[122 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[122 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[123 /*12*/] = 293;
	Global_90CE[123 /*12*/].f_1 = 294;
	Global_90CE[123 /*12*/].f_2 = 1;
	Global_90CE[123 /*12*/].f_3 = 32;
	Global_90CE[123 /*12*/].f_A = 0;
	Global_90CE[123 /*12*/].f_B = 0;
	Global_90CE[123 /*12*/].f_4 = 0;
	Global_90CE[124 /*12*/] = 295;
	Global_90CE[124 /*12*/].f_1 = 296;
	Global_90CE[124 /*12*/].f_2 = 27;
	Global_90CE[124 /*12*/].f_3 = 1;
	Global_90CE[124 /*12*/].f_A = 1;
	Global_90CE[124 /*12*/].f_B = 0;
	Global_90CE[124 /*12*/].f_4 = 1;
	Global_90CE[124 /*12*/].f_5[0 /*4*/] = 199;
	Global_90CE[124 /*12*/].f_5[0 /*4*/].f_1 = 125;
	Global_90CE[124 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[124 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[125 /*12*/] = 297;
	Global_90CE[125 /*12*/].f_1 = 298;
	Global_90CE[125 /*12*/].f_2 = 1;
	Global_90CE[125 /*12*/].f_3 = 27;
	Global_90CE[125 /*12*/].f_A = 0;
	Global_90CE[125 /*12*/].f_B = 0;
	Global_90CE[125 /*12*/].f_4 = 0;
	Global_90CE[126 /*12*/] = 299;
	Global_90CE[126 /*12*/].f_1 = 300;
	Global_90CE[126 /*12*/].f_2 = 2;
	Global_90CE[126 /*12*/].f_3 = 1;
	Global_90CE[126 /*12*/].f_A = 1;
	Global_90CE[126 /*12*/].f_B = 0;
	Global_90CE[126 /*12*/].f_4 = 1;
	Global_90CE[126 /*12*/].f_5[0 /*4*/] = 199;
	Global_90CE[126 /*12*/].f_5[0 /*4*/].f_1 = 127;
	Global_90CE[126 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[126 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[127 /*12*/] = 301;
	Global_90CE[127 /*12*/].f_1 = 302;
	Global_90CE[127 /*12*/].f_2 = 1;
	Global_90CE[127 /*12*/].f_3 = 2;
	Global_90CE[127 /*12*/].f_A = 0;
	Global_90CE[127 /*12*/].f_B = 0;
	Global_90CE[127 /*12*/].f_4 = 1;
	Global_90CE[127 /*12*/].f_5[0 /*4*/] = 199;
	Global_90CE[127 /*12*/].f_5[0 /*4*/].f_1 = 128;
	Global_90CE[127 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[127 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[128 /*12*/] = 303;
	Global_90CE[128 /*12*/].f_1 = 304;
	Global_90CE[128 /*12*/].f_2 = 2;
	Global_90CE[128 /*12*/].f_3 = 1;
	Global_90CE[128 /*12*/].f_A = 1;
	Global_90CE[128 /*12*/].f_B = 60000;
	Global_90CE[128 /*12*/].f_4 = 1;
	Global_90CE[128 /*12*/].f_5[0 /*4*/] = 199;
	Global_90CE[128 /*12*/].f_5[0 /*4*/].f_1 = 129;
	Global_90CE[128 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[128 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[129 /*12*/] = 305;
	Global_90CE[129 /*12*/].f_1 = 306;
	Global_90CE[129 /*12*/].f_2 = 1;
	Global_90CE[129 /*12*/].f_3 = 2;
	Global_90CE[129 /*12*/].f_A = 0;
	Global_90CE[129 /*12*/].f_B = 0;
	Global_90CE[129 /*12*/].f_4 = 1;
	Global_90CE[129 /*12*/].f_5[0 /*4*/] = 199;
	Global_90CE[129 /*12*/].f_5[0 /*4*/].f_1 = 130;
	Global_90CE[129 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[129 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[130 /*12*/] = 307;
	Global_90CE[130 /*12*/].f_1 = 308;
	Global_90CE[130 /*12*/].f_2 = 2;
	Global_90CE[130 /*12*/].f_3 = 1;
	Global_90CE[130 /*12*/].f_A = 0;
	Global_90CE[130 /*12*/].f_B = 30000;
	Global_90CE[130 /*12*/].f_4 = 0;
	Global_90CE[131 /*12*/] = 309;
	Global_90CE[131 /*12*/].f_1 = 310;
	Global_90CE[131 /*12*/].f_2 = 0;
	Global_90CE[131 /*12*/].f_3 = 1;
	Global_90CE[131 /*12*/].f_A = 1;
	Global_90CE[131 /*12*/].f_B = 0;
	Global_90CE[131 /*12*/].f_4 = 1;
	Global_90CE[131 /*12*/].f_5[0 /*4*/] = 199;
	Global_90CE[131 /*12*/].f_5[0 /*4*/].f_1 = 132;
	Global_90CE[131 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[131 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[132 /*12*/] = 311;
	Global_90CE[132 /*12*/].f_1 = 312;
	Global_90CE[132 /*12*/].f_2 = 1;
	Global_90CE[132 /*12*/].f_3 = 0;
	Global_90CE[132 /*12*/].f_A = 0;
	Global_90CE[132 /*12*/].f_B = 0;
	Global_90CE[132 /*12*/].f_4 = 1;
	Global_90CE[132 /*12*/].f_5[0 /*4*/] = 199;
	Global_90CE[132 /*12*/].f_5[0 /*4*/].f_1 = 133;
	Global_90CE[132 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[132 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[133 /*12*/] = 313;
	Global_90CE[133 /*12*/].f_1 = 314;
	Global_90CE[133 /*12*/].f_2 = 0;
	Global_90CE[133 /*12*/].f_3 = 1;
	Global_90CE[133 /*12*/].f_A = 0;
	Global_90CE[133 /*12*/].f_B = 25000;
	Global_90CE[133 /*12*/].f_4 = 0;
	Global_90CE[134 /*12*/] = 315;
	Global_90CE[134 /*12*/].f_1 = 316;
	Global_90CE[134 /*12*/].f_2 = 0;
	Global_90CE[134 /*12*/].f_3 = 1;
	Global_90CE[134 /*12*/].f_A = 1;
	Global_90CE[134 /*12*/].f_B = 0;
	Global_90CE[134 /*12*/].f_4 = 1;
	Global_90CE[134 /*12*/].f_5[0 /*4*/] = 199;
	Global_90CE[134 /*12*/].f_5[0 /*4*/].f_1 = 135;
	Global_90CE[134 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[134 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[135 /*12*/] = 317;
	Global_90CE[135 /*12*/].f_1 = 318;
	Global_90CE[135 /*12*/].f_2 = 1;
	Global_90CE[135 /*12*/].f_3 = 0;
	Global_90CE[135 /*12*/].f_A = 0;
	Global_90CE[135 /*12*/].f_B = 0;
	Global_90CE[135 /*12*/].f_4 = 0;
	Global_90CE[136 /*12*/] = 322;
	Global_90CE[136 /*12*/].f_1 = 323;
	Global_90CE[136 /*12*/].f_2 = 33;
	Global_90CE[136 /*12*/].f_3 = 2;
	Global_90CE[136 /*12*/].f_A = 1;
	Global_90CE[136 /*12*/].f_B = 0;
	Global_90CE[136 /*12*/].f_4 = 1;
	Global_90CE[136 /*12*/].f_5[0 /*4*/] = 199;
	Global_90CE[136 /*12*/].f_5[0 /*4*/].f_1 = 137;
	Global_90CE[136 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[136 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[137 /*12*/] = 324;
	Global_90CE[137 /*12*/].f_1 = 325;
	Global_90CE[137 /*12*/].f_2 = 2;
	Global_90CE[137 /*12*/].f_3 = 33;
	Global_90CE[137 /*12*/].f_A = 0;
	Global_90CE[137 /*12*/].f_B = 0;
	Global_90CE[137 /*12*/].f_4 = 0;
	Global_90CE[138 /*12*/] = 326;
	Global_90CE[138 /*12*/].f_1 = 327;
	Global_90CE[138 /*12*/].f_2 = 33;
	Global_90CE[138 /*12*/].f_3 = 2;
	Global_90CE[138 /*12*/].f_A = 1;
	Global_90CE[138 /*12*/].f_B = 0;
	Global_90CE[138 /*12*/].f_4 = 1;
	Global_90CE[138 /*12*/].f_5[0 /*4*/] = 199;
	Global_90CE[138 /*12*/].f_5[0 /*4*/].f_1 = 139;
	Global_90CE[138 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[138 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[139 /*12*/] = 328;
	Global_90CE[139 /*12*/].f_1 = 329;
	Global_90CE[139 /*12*/].f_2 = 2;
	Global_90CE[139 /*12*/].f_3 = 33;
	Global_90CE[139 /*12*/].f_A = 0;
	Global_90CE[139 /*12*/].f_B = 0;
	Global_90CE[139 /*12*/].f_4 = 1;
	Global_90CE[139 /*12*/].f_5[0 /*4*/] = 199;
	Global_90CE[139 /*12*/].f_5[0 /*4*/].f_1 = -1;
	Global_90CE[139 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[139 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[140 /*12*/] = 330;
	Global_90CE[140 /*12*/].f_1 = 331;
	Global_90CE[140 /*12*/].f_2 = 2;
	Global_90CE[140 /*12*/].f_3 = 33;
	Global_90CE[140 /*12*/].f_A = 0;
	Global_90CE[140 /*12*/].f_B = 0;
	Global_90CE[140 /*12*/].f_4 = 0;
	Global_90CE[141 /*12*/] = 332;
	Global_90CE[141 /*12*/].f_1 = 333;
	Global_90CE[141 /*12*/].f_2 = 29;
	Global_90CE[141 /*12*/].f_3 = 2;
	Global_90CE[141 /*12*/].f_A = 0;
	Global_90CE[141 /*12*/].f_B = 0;
	Global_90CE[141 /*12*/].f_4 = 1;
	Global_90CE[141 /*12*/].f_5[0 /*4*/] = 199;
	Global_90CE[141 /*12*/].f_5[0 /*4*/].f_1 = 142;
	Global_90CE[141 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[141 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[142 /*12*/] = 334;
	Global_90CE[142 /*12*/].f_1 = 335;
	Global_90CE[142 /*12*/].f_2 = 2;
	Global_90CE[142 /*12*/].f_3 = 29;
	Global_90CE[142 /*12*/].f_A = 0;
	Global_90CE[142 /*12*/].f_B = 0;
	Global_90CE[142 /*12*/].f_4 = 0;
	Global_90CE[143 /*12*/] = 336;
	Global_90CE[143 /*12*/].f_1 = 337;
	Global_90CE[143 /*12*/].f_2 = 3;
	Global_90CE[143 /*12*/].f_3 = 2;
	Global_90CE[143 /*12*/].f_A = 0;
	Global_90CE[143 /*12*/].f_B = 0;
	Global_90CE[143 /*12*/].f_4 = 1;
	Global_90CE[143 /*12*/].f_5[0 /*4*/] = 199;
	Global_90CE[143 /*12*/].f_5[0 /*4*/].f_1 = 144;
	Global_90CE[143 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[143 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[144 /*12*/] = 338;
	Global_90CE[144 /*12*/].f_1 = 339;
	Global_90CE[144 /*12*/].f_2 = 2;
	Global_90CE[144 /*12*/].f_3 = 3;
	Global_90CE[144 /*12*/].f_A = 0;
	Global_90CE[144 /*12*/].f_B = 0;
	Global_90CE[144 /*12*/].f_4 = 0;
	Global_90CE[145 /*12*/] = 343;
	Global_90CE[145 /*12*/].f_1 = 344;
	Global_90CE[145 /*12*/].f_2 = 34;
	Global_90CE[145 /*12*/].f_3 = 2;
	Global_90CE[145 /*12*/].f_A = 0;
	Global_90CE[145 /*12*/].f_B = 0;
	Global_90CE[145 /*12*/].f_4 = 1;
	Global_90CE[145 /*12*/].f_5[0 /*4*/] = 199;
	Global_90CE[145 /*12*/].f_5[0 /*4*/].f_1 = 146;
	Global_90CE[145 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[145 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[146 /*12*/] = 345;
	Global_90CE[146 /*12*/].f_1 = 346;
	Global_90CE[146 /*12*/].f_2 = 2;
	Global_90CE[146 /*12*/].f_3 = 34;
	Global_90CE[146 /*12*/].f_A = 0;
	Global_90CE[146 /*12*/].f_B = 0;
	Global_90CE[146 /*12*/].f_4 = 0;
	Global_90CE[147 /*12*/] = 319;
	Global_90CE[147 /*12*/].f_1 = 347;
	Global_90CE[147 /*12*/].f_2 = 26;
	Global_90CE[147 /*12*/].f_3 = 2;
	Global_90CE[147 /*12*/].f_A = 0;
	Global_90CE[147 /*12*/].f_B = 0;
	Global_90CE[147 /*12*/].f_4 = 0;
	Global_90CE[148 /*12*/] = 351;
	Global_90CE[148 /*12*/].f_1 = 352;
	Global_90CE[148 /*12*/].f_2 = 35;
	Global_90CE[148 /*12*/].f_3 = 2;
	Global_90CE[148 /*12*/].f_A = 0;
	Global_90CE[148 /*12*/].f_B = 0;
	Global_90CE[148 /*12*/].f_4 = 0;
	Global_90CE[149 /*12*/] = 351;
	Global_90CE[149 /*12*/].f_1 = 352;
	Global_90CE[149 /*12*/].f_2 = 35;
	Global_90CE[149 /*12*/].f_3 = 0;
	Global_90CE[149 /*12*/].f_A = 0;
	Global_90CE[149 /*12*/].f_B = 0;
	Global_90CE[149 /*12*/].f_4 = 0;
	Global_90CE[150 /*12*/] = 351;
	Global_90CE[150 /*12*/].f_1 = 352;
	Global_90CE[150 /*12*/].f_2 = 35;
	Global_90CE[150 /*12*/].f_3 = 1;
	Global_90CE[150 /*12*/].f_A = 0;
	Global_90CE[150 /*12*/].f_B = 0;
	Global_90CE[150 /*12*/].f_4 = 0;
	Global_90CE[151 /*12*/] = 355;
	Global_90CE[151 /*12*/].f_1 = 356;
	Global_90CE[151 /*12*/].f_2 = 36;
	Global_90CE[151 /*12*/].f_3 = 2;
	Global_90CE[151 /*12*/].f_A = 0;
	Global_90CE[151 /*12*/].f_B = 0;
	Global_90CE[151 /*12*/].f_4 = 0;
	Global_90CE[152 /*12*/] = 355;
	Global_90CE[152 /*12*/].f_1 = 356;
	Global_90CE[152 /*12*/].f_2 = 36;
	Global_90CE[152 /*12*/].f_3 = 0;
	Global_90CE[152 /*12*/].f_A = 0;
	Global_90CE[152 /*12*/].f_B = 0;
	Global_90CE[152 /*12*/].f_4 = 0;
	Global_90CE[153 /*12*/] = 355;
	Global_90CE[153 /*12*/].f_1 = 356;
	Global_90CE[153 /*12*/].f_2 = 36;
	Global_90CE[153 /*12*/].f_3 = 1;
	Global_90CE[153 /*12*/].f_A = 0;
	Global_90CE[153 /*12*/].f_B = 0;
	Global_90CE[153 /*12*/].f_4 = 0;
	Global_90CE[154 /*12*/] = 363;
	Global_90CE[154 /*12*/].f_1 = 364;
	Global_90CE[154 /*12*/].f_2 = 38;
	Global_90CE[154 /*12*/].f_3 = 2;
	Global_90CE[154 /*12*/].f_A = 0;
	Global_90CE[154 /*12*/].f_B = 0;
	Global_90CE[154 /*12*/].f_4 = 0;
	Global_90CE[155 /*12*/] = 365;
	Global_90CE[155 /*12*/].f_1 = 366;
	Global_90CE[155 /*12*/].f_2 = 11;
	Global_90CE[155 /*12*/].f_3 = 0;
	Global_90CE[155 /*12*/].f_A = 0;
	Global_90CE[155 /*12*/].f_B = 0;
	Global_90CE[155 /*12*/].f_4 = 0;
	Global_90CE[156 /*12*/] = 365;
	Global_90CE[156 /*12*/].f_1 = 366;
	Global_90CE[156 /*12*/].f_2 = 11;
	Global_90CE[156 /*12*/].f_3 = 1;
	Global_90CE[156 /*12*/].f_A = 0;
	Global_90CE[156 /*12*/].f_B = 0;
	Global_90CE[156 /*12*/].f_4 = 0;
	Global_90CE[157 /*12*/] = 365;
	Global_90CE[157 /*12*/].f_1 = 366;
	Global_90CE[157 /*12*/].f_2 = 11;
	Global_90CE[157 /*12*/].f_3 = 2;
	Global_90CE[157 /*12*/].f_A = 0;
	Global_90CE[157 /*12*/].f_B = 0;
	Global_90CE[157 /*12*/].f_4 = 0;
	Global_90CE[158 /*12*/] = 367;
	Global_90CE[158 /*12*/].f_1 = 368;
	Global_90CE[158 /*12*/].f_2 = 29;
	Global_90CE[158 /*12*/].f_3 = 2;
	Global_90CE[158 /*12*/].f_A = 0;
	Global_90CE[158 /*12*/].f_B = 0;
	Global_90CE[158 /*12*/].f_4 = 0;
	Global_90CE[159 /*12*/] = 372;
	Global_90CE[159 /*12*/].f_1 = 373;
	Global_90CE[159 /*12*/].f_2 = 39;
	Global_90CE[159 /*12*/].f_3 = 0;
	Global_90CE[159 /*12*/].f_A = 0;
	Global_90CE[159 /*12*/].f_B = 0;
	Global_90CE[159 /*12*/].f_4 = 0;
	Global_90CE[160 /*12*/] = 374;
	Global_90CE[160 /*12*/].f_1 = 375;
	Global_90CE[160 /*12*/].f_2 = 39;
	Global_90CE[160 /*12*/].f_3 = 1;
	Global_90CE[160 /*12*/].f_A = 0;
	Global_90CE[160 /*12*/].f_B = 0;
	Global_90CE[160 /*12*/].f_4 = 0;
	Global_90CE[161 /*12*/] = 417;
	Global_90CE[161 /*12*/].f_1 = 418;
	Global_90CE[161 /*12*/].f_2 = 40;
	Global_90CE[161 /*12*/].f_3 = 1;
	Global_90CE[161 /*12*/].f_A = 0;
	Global_90CE[161 /*12*/].f_B = 0;
	Global_90CE[161 /*12*/].f_4 = 0;
	Global_90CE[162 /*12*/] = 419;
	Global_90CE[162 /*12*/].f_1 = 420;
	Global_90CE[162 /*12*/].f_2 = 43;
	Global_90CE[162 /*12*/].f_3 = 0;
	Global_90CE[162 /*12*/].f_A = 0;
	Global_90CE[162 /*12*/].f_B = 0;
	Global_90CE[162 /*12*/].f_4 = 0;
	Global_90CE[163 /*12*/] = 421;
	Global_90CE[163 /*12*/].f_1 = 422;
	Global_90CE[163 /*12*/].f_2 = 43;
	Global_90CE[163 /*12*/].f_3 = 2;
	Global_90CE[163 /*12*/].f_A = 0;
	Global_90CE[163 /*12*/].f_B = 0;
	Global_90CE[163 /*12*/].f_4 = 0;
	Global_90CE[164 /*12*/] = 423;
	Global_90CE[164 /*12*/].f_1 = 424;
	Global_90CE[164 /*12*/].f_2 = 43;
	Global_90CE[164 /*12*/].f_3 = 1;
	Global_90CE[164 /*12*/].f_A = 0;
	Global_90CE[164 /*12*/].f_B = 0;
	Global_90CE[164 /*12*/].f_4 = 0;
	Global_90CE[165 /*12*/] = 425;
	Global_90CE[165 /*12*/].f_1 = 426;
	Global_90CE[165 /*12*/].f_2 = 44;
	Global_90CE[165 /*12*/].f_3 = 1;
	Global_90CE[165 /*12*/].f_A = 0;
	Global_90CE[165 /*12*/].f_B = 0;
	Global_90CE[165 /*12*/].f_4 = 0;
	Global_90CE[166 /*12*/] = 427;
	Global_90CE[166 /*12*/].f_1 = 428;
	Global_90CE[166 /*12*/].f_2 = 45;
	Global_90CE[166 /*12*/].f_3 = 0;
	Global_90CE[166 /*12*/].f_A = 0;
	Global_90CE[166 /*12*/].f_B = 0;
	Global_90CE[166 /*12*/].f_4 = 0;
	Global_90CE[167 /*12*/] = 429;
	Global_90CE[167 /*12*/].f_1 = 430;
	Global_90CE[167 /*12*/].f_2 = 46;
	Global_90CE[167 /*12*/].f_3 = 0;
	Global_90CE[167 /*12*/].f_A = 0;
	Global_90CE[167 /*12*/].f_B = 0;
	Global_90CE[167 /*12*/].f_4 = 0;
	Global_90CE[168 /*12*/] = 431;
	Global_90CE[168 /*12*/].f_1 = 432;
	Global_90CE[168 /*12*/].f_2 = 49;
	Global_90CE[168 /*12*/].f_3 = 0;
	Global_90CE[168 /*12*/].f_A = 0;
	Global_90CE[168 /*12*/].f_B = 0;
	Global_90CE[168 /*12*/].f_4 = 0;
	Global_90CE[169 /*12*/] = 433;
	Global_90CE[169 /*12*/].f_1 = 434;
	Global_90CE[169 /*12*/].f_2 = 49;
	Global_90CE[169 /*12*/].f_3 = 2;
	Global_90CE[169 /*12*/].f_A = 0;
	Global_90CE[169 /*12*/].f_B = 0;
	Global_90CE[169 /*12*/].f_4 = 0;
	Global_90CE[170 /*12*/] = 435;
	Global_90CE[170 /*12*/].f_1 = 436;
	Global_90CE[170 /*12*/].f_2 = 49;
	Global_90CE[170 /*12*/].f_3 = 1;
	Global_90CE[170 /*12*/].f_A = 0;
	Global_90CE[170 /*12*/].f_B = 0;
	Global_90CE[170 /*12*/].f_4 = 0;
	Global_90CE[171 /*12*/] = 437;
	Global_90CE[171 /*12*/].f_1 = 438;
	Global_90CE[171 /*12*/].f_2 = 50;
	Global_90CE[171 /*12*/].f_3 = 1;
	Global_90CE[171 /*12*/].f_A = 0;
	Global_90CE[171 /*12*/].f_B = 0;
	Global_90CE[171 /*12*/].f_4 = 0;
	Global_90CE[172 /*12*/] = 439;
	Global_90CE[172 /*12*/].f_1 = 440;
	Global_90CE[172 /*12*/].f_2 = 51;
	Global_90CE[172 /*12*/].f_3 = 0;
	Global_90CE[172 /*12*/].f_A = 0;
	Global_90CE[172 /*12*/].f_B = 0;
	Global_90CE[172 /*12*/].f_4 = 0;
	Global_90CE[173 /*12*/] = 441;
	Global_90CE[173 /*12*/].f_1 = 442;
	Global_90CE[173 /*12*/].f_2 = 51;
	Global_90CE[173 /*12*/].f_3 = 2;
	Global_90CE[173 /*12*/].f_A = 0;
	Global_90CE[173 /*12*/].f_B = 0;
	Global_90CE[173 /*12*/].f_4 = 0;
	Global_90CE[174 /*12*/] = 443;
	Global_90CE[174 /*12*/].f_1 = 444;
	Global_90CE[174 /*12*/].f_2 = 51;
	Global_90CE[174 /*12*/].f_3 = 1;
	Global_90CE[174 /*12*/].f_A = 0;
	Global_90CE[174 /*12*/].f_B = 0;
	Global_90CE[174 /*12*/].f_4 = 0;
	Global_90CE[175 /*12*/] = 445;
	Global_90CE[175 /*12*/].f_1 = 446;
	Global_90CE[175 /*12*/].f_2 = 52;
	Global_90CE[175 /*12*/].f_3 = 0;
	Global_90CE[175 /*12*/].f_A = 0;
	Global_90CE[175 /*12*/].f_B = 0;
	Global_90CE[175 /*12*/].f_4 = 0;
	Global_90CE[176 /*12*/] = 447;
	Global_90CE[176 /*12*/].f_1 = 448;
	Global_90CE[176 /*12*/].f_2 = 52;
	Global_90CE[176 /*12*/].f_3 = 2;
	Global_90CE[176 /*12*/].f_A = 0;
	Global_90CE[176 /*12*/].f_B = 0;
	Global_90CE[176 /*12*/].f_4 = 0;
	Global_90CE[177 /*12*/] = 449;
	Global_90CE[177 /*12*/].f_1 = 450;
	Global_90CE[177 /*12*/].f_2 = 52;
	Global_90CE[177 /*12*/].f_3 = 1;
	Global_90CE[177 /*12*/].f_A = 0;
	Global_90CE[177 /*12*/].f_B = 0;
	Global_90CE[177 /*12*/].f_4 = 0;
	Global_90CE[178 /*12*/] = 451;
	Global_90CE[178 /*12*/].f_1 = 452;
	Global_90CE[178 /*12*/].f_2 = 53;
	Global_90CE[178 /*12*/].f_3 = 2;
	Global_90CE[178 /*12*/].f_A = 0;
	Global_90CE[178 /*12*/].f_B = 0;
	Global_90CE[178 /*12*/].f_4 = 0;
	Global_90CE[179 /*12*/] = 453;
	Global_90CE[179 /*12*/].f_1 = 454;
	Global_90CE[179 /*12*/].f_2 = 53;
	Global_90CE[179 /*12*/].f_3 = 0;
	Global_90CE[179 /*12*/].f_A = 0;
	Global_90CE[179 /*12*/].f_B = 0;
	Global_90CE[179 /*12*/].f_4 = 0;
	Global_90CE[180 /*12*/] = 455;
	Global_90CE[180 /*12*/].f_1 = 456;
	Global_90CE[180 /*12*/].f_2 = 53;
	Global_90CE[180 /*12*/].f_3 = 1;
	Global_90CE[180 /*12*/].f_A = 0;
	Global_90CE[180 /*12*/].f_B = 0;
	Global_90CE[180 /*12*/].f_4 = 0;
	Global_90CE[181 /*12*/] = 457;
	Global_90CE[181 /*12*/].f_1 = 458;
	Global_90CE[181 /*12*/].f_2 = 4;
	Global_90CE[181 /*12*/].f_3 = 0;
	Global_90CE[181 /*12*/].f_A = 0;
	Global_90CE[181 /*12*/].f_B = 0;
	Global_90CE[181 /*12*/].f_4 = 0;
	Global_90CE[182 /*12*/] = 459;
	Global_90CE[182 /*12*/].f_1 = 460;
	Global_90CE[182 /*12*/].f_2 = 37;
	Global_90CE[182 /*12*/].f_3 = 0;
	Global_90CE[182 /*12*/].f_A = 0;
	Global_90CE[182 /*12*/].f_B = 0;
	Global_90CE[182 /*12*/].f_4 = 0;
	Global_90CE[183 /*12*/] = 461;
	Global_90CE[183 /*12*/].f_1 = 462;
	Global_90CE[183 /*12*/].f_2 = 37;
	Global_90CE[183 /*12*/].f_3 = 2;
	Global_90CE[183 /*12*/].f_A = 0;
	Global_90CE[183 /*12*/].f_B = 0;
	Global_90CE[183 /*12*/].f_4 = 0;
	Global_90CE[184 /*12*/] = 463;
	Global_90CE[184 /*12*/].f_1 = 464;
	Global_90CE[184 /*12*/].f_2 = 37;
	Global_90CE[184 /*12*/].f_3 = 1;
	Global_90CE[184 /*12*/].f_A = 0;
	Global_90CE[184 /*12*/].f_B = 0;
	Global_90CE[184 /*12*/].f_4 = 0;
	Global_90CE[185 /*12*/] = 471;
	Global_90CE[185 /*12*/].f_1 = 472;
	Global_90CE[185 /*12*/].f_2 = 54;
	Global_90CE[185 /*12*/].f_3 = 1;
	Global_90CE[185 /*12*/].f_A = 0;
	Global_90CE[185 /*12*/].f_B = 0;
	Global_90CE[185 /*12*/].f_4 = 0;
	Global_90CE[186 /*12*/] = 473;
	Global_90CE[186 /*12*/].f_1 = 474;
	Global_90CE[186 /*12*/].f_2 = 54;
	Global_90CE[186 /*12*/].f_3 = 0;
	Global_90CE[186 /*12*/].f_A = 0;
	Global_90CE[186 /*12*/].f_B = 0;
	Global_90CE[186 /*12*/].f_4 = 0;
	Global_90CE[187 /*12*/] = 475;
	Global_90CE[187 /*12*/].f_1 = 476;
	Global_90CE[187 /*12*/].f_2 = 55;
	Global_90CE[187 /*12*/].f_3 = 1;
	Global_90CE[187 /*12*/].f_A = 0;
	Global_90CE[187 /*12*/].f_B = 0;
	Global_90CE[187 /*12*/].f_4 = 0;
	Global_90CE[188 /*12*/] = 477;
	Global_90CE[188 /*12*/].f_1 = 478;
	Global_90CE[188 /*12*/].f_2 = 54;
	Global_90CE[188 /*12*/].f_3 = 2;
	Global_90CE[188 /*12*/].f_A = 0;
	Global_90CE[188 /*12*/].f_B = 0;
	Global_90CE[188 /*12*/].f_4 = 0;
	Global_90CE[189 /*12*/] = 479;
	Global_90CE[189 /*12*/].f_1 = 480;
	Global_90CE[189 /*12*/].f_2 = 55;
	Global_90CE[189 /*12*/].f_3 = 0;
	Global_90CE[189 /*12*/].f_A = 0;
	Global_90CE[189 /*12*/].f_B = 0;
	Global_90CE[189 /*12*/].f_4 = 0;
	Global_90CE[190 /*12*/] = 481;
	Global_90CE[190 /*12*/].f_1 = 482;
	Global_90CE[190 /*12*/].f_2 = 55;
	Global_90CE[190 /*12*/].f_3 = 2;
	Global_90CE[190 /*12*/].f_A = 0;
	Global_90CE[190 /*12*/].f_B = 0;
	Global_90CE[190 /*12*/].f_4 = 0;
	Global_90CE[191 /*12*/] = 483;
	Global_90CE[191 /*12*/].f_1 = 484;
	Global_90CE[191 /*12*/].f_2 = 12;
	Global_90CE[191 /*12*/].f_3 = 0;
	Global_90CE[191 /*12*/].f_A = 0;
	Global_90CE[191 /*12*/].f_B = 0;
	Global_90CE[191 /*12*/].f_4 = 0;
	Global_90CE[192 /*12*/] = 485;
	Global_90CE[192 /*12*/].f_1 = 486;
	Global_90CE[192 /*12*/].f_2 = 12;
	Global_90CE[192 /*12*/].f_3 = 1;
	Global_90CE[192 /*12*/].f_A = 0;
	Global_90CE[192 /*12*/].f_B = 0;
	Global_90CE[192 /*12*/].f_4 = 0;
	Global_90CE[193 /*12*/] = 487;
	Global_90CE[193 /*12*/].f_1 = 488;
	Global_90CE[193 /*12*/].f_2 = 12;
	Global_90CE[193 /*12*/].f_3 = 2;
	Global_90CE[193 /*12*/].f_A = 0;
	Global_90CE[193 /*12*/].f_B = 0;
	Global_90CE[193 /*12*/].f_4 = 0;
	Global_90CE[194 /*12*/] = 510;
	Global_90CE[194 /*12*/].f_1 = 511;
	Global_90CE[194 /*12*/].f_2 = 56;
	Global_90CE[194 /*12*/].f_3 = 0;
	Global_90CE[194 /*12*/].f_A = 0;
	Global_90CE[194 /*12*/].f_B = 0;
	Global_90CE[194 /*12*/].f_4 = 0;
	Global_90CE[195 /*12*/] = 512;
	Global_90CE[195 /*12*/].f_1 = 513;
	Global_90CE[195 /*12*/].f_2 = 56;
	Global_90CE[195 /*12*/].f_3 = 0;
	Global_90CE[195 /*12*/].f_A = 0;
	Global_90CE[195 /*12*/].f_B = 0;
	Global_90CE[195 /*12*/].f_4 = 0;
	Global_90CE[196 /*12*/] = 514;
	Global_90CE[196 /*12*/].f_1 = 515;
	Global_90CE[196 /*12*/].f_2 = 56;
	Global_90CE[196 /*12*/].f_3 = 0;
	Global_90CE[196 /*12*/].f_A = 0;
	Global_90CE[196 /*12*/].f_B = 0;
	Global_90CE[196 /*12*/].f_4 = 0;
	Global_90CE[197 /*12*/] = 516;
	Global_90CE[197 /*12*/].f_1 = 517;
	Global_90CE[197 /*12*/].f_2 = 56;
	Global_90CE[197 /*12*/].f_3 = 0;
	Global_90CE[197 /*12*/].f_A = 0;
	Global_90CE[197 /*12*/].f_B = 0;
	Global_90CE[197 /*12*/].f_4 = 0;
	Global_90CE[198 /*12*/] = 518;
	Global_90CE[198 /*12*/].f_1 = 519;
	Global_90CE[198 /*12*/].f_2 = 56;
	Global_90CE[198 /*12*/].f_3 = 0;
	Global_90CE[198 /*12*/].f_A = 0;
	Global_90CE[198 /*12*/].f_B = 0;
	Global_90CE[198 /*12*/].f_4 = 0;
	Global_90CE[199 /*12*/] = 520;
	Global_90CE[199 /*12*/].f_1 = 521;
	Global_90CE[199 /*12*/].f_2 = 57;
	Global_90CE[199 /*12*/].f_3 = 0;
	Global_90CE[199 /*12*/].f_A = 1;
	Global_90CE[199 /*12*/].f_B = 60000;
	Global_90CE[199 /*12*/].f_4 = 1;
	Global_90CE[199 /*12*/].f_5[0 /*4*/] = 536;
	Global_90CE[199 /*12*/].f_5[0 /*4*/].f_1 = 200;
	Global_90CE[199 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[199 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[200 /*12*/] = 522;
	Global_90CE[200 /*12*/].f_1 = 523;
	Global_90CE[200 /*12*/].f_2 = 0;
	Global_90CE[200 /*12*/].f_3 = 57;
	Global_90CE[200 /*12*/].f_A = 0;
	Global_90CE[200 /*12*/].f_B = 0;
	Global_90CE[200 /*12*/].f_4 = 1;
	Global_90CE[200 /*12*/].f_5[0 /*4*/] = 537;
	Global_90CE[200 /*12*/].f_5[0 /*4*/].f_1 = 201;
	Global_90CE[200 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[200 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[201 /*12*/] = 524;
	Global_90CE[201 /*12*/].f_1 = 525;
	Global_90CE[201 /*12*/].f_2 = 57;
	Global_90CE[201 /*12*/].f_3 = 0;
	Global_90CE[201 /*12*/].f_A = 1;
	Global_90CE[201 /*12*/].f_B = 60000;
	Global_90CE[201 /*12*/].f_4 = 1;
	Global_90CE[201 /*12*/].f_5[0 /*4*/] = 538;
	Global_90CE[201 /*12*/].f_5[0 /*4*/].f_1 = 202;
	Global_90CE[201 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[201 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[202 /*12*/] = 526;
	Global_90CE[202 /*12*/].f_1 = 527;
	Global_90CE[202 /*12*/].f_2 = 0;
	Global_90CE[202 /*12*/].f_3 = 57;
	Global_90CE[202 /*12*/].f_A = 0;
	Global_90CE[202 /*12*/].f_B = 0;
	Global_90CE[202 /*12*/].f_4 = 1;
	Global_90CE[202 /*12*/].f_5[0 /*4*/] = 539;
	Global_90CE[202 /*12*/].f_5[0 /*4*/].f_1 = 203;
	Global_90CE[202 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[202 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[203 /*12*/] = 528;
	Global_90CE[203 /*12*/].f_1 = 529;
	Global_90CE[203 /*12*/].f_2 = 57;
	Global_90CE[203 /*12*/].f_3 = 0;
	Global_90CE[203 /*12*/].f_A = 1;
	Global_90CE[203 /*12*/].f_B = 60000;
	Global_90CE[203 /*12*/].f_4 = 1;
	Global_90CE[203 /*12*/].f_5[0 /*4*/] = 540;
	Global_90CE[203 /*12*/].f_5[0 /*4*/].f_1 = 204;
	Global_90CE[203 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[203 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[204 /*12*/] = 530;
	Global_90CE[204 /*12*/].f_1 = 531;
	Global_90CE[204 /*12*/].f_2 = 0;
	Global_90CE[204 /*12*/].f_3 = 57;
	Global_90CE[204 /*12*/].f_A = 0;
	Global_90CE[204 /*12*/].f_B = 0;
	Global_90CE[204 /*12*/].f_4 = 1;
	Global_90CE[204 /*12*/].f_5[0 /*4*/] = 541;
	Global_90CE[204 /*12*/].f_5[0 /*4*/].f_1 = 205;
	Global_90CE[204 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[204 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[205 /*12*/] = 532;
	Global_90CE[205 /*12*/].f_1 = 533;
	Global_90CE[205 /*12*/].f_2 = 57;
	Global_90CE[205 /*12*/].f_3 = 0;
	Global_90CE[205 /*12*/].f_A = 1;
	Global_90CE[205 /*12*/].f_B = 60000;
	Global_90CE[205 /*12*/].f_4 = 1;
	Global_90CE[205 /*12*/].f_5[0 /*4*/] = 542;
	Global_90CE[205 /*12*/].f_5[0 /*4*/].f_1 = 206;
	Global_90CE[205 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[205 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[206 /*12*/] = 534;
	Global_90CE[206 /*12*/].f_1 = 535;
	Global_90CE[206 /*12*/].f_2 = 0;
	Global_90CE[206 /*12*/].f_3 = 57;
	Global_90CE[206 /*12*/].f_A = 0;
	Global_90CE[206 /*12*/].f_B = 0;
	Global_90CE[206 /*12*/].f_4 = 0;
	Global_90CE[207 /*12*/] = 543;
	Global_90CE[207 /*12*/].f_1 = 544;
	Global_90CE[207 /*12*/].f_2 = 58;
	Global_90CE[207 /*12*/].f_3 = 0;
	Global_90CE[207 /*12*/].f_A = 1;
	Global_90CE[207 /*12*/].f_B = 60000;
	Global_90CE[207 /*12*/].f_4 = 1;
	Global_90CE[207 /*12*/].f_5[0 /*4*/] = 557;
	Global_90CE[207 /*12*/].f_5[0 /*4*/].f_1 = 208;
	Global_90CE[207 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[207 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[208 /*12*/] = 545;
	Global_90CE[208 /*12*/].f_1 = 546;
	Global_90CE[208 /*12*/].f_2 = 0;
	Global_90CE[208 /*12*/].f_3 = 58;
	Global_90CE[208 /*12*/].f_A = 0;
	Global_90CE[208 /*12*/].f_B = 0;
	Global_90CE[208 /*12*/].f_4 = 1;
	Global_90CE[208 /*12*/].f_5[0 /*4*/] = 558;
	Global_90CE[208 /*12*/].f_5[0 /*4*/].f_1 = 209;
	Global_90CE[208 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[208 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[209 /*12*/] = 547;
	Global_90CE[209 /*12*/].f_1 = 548;
	Global_90CE[209 /*12*/].f_2 = 58;
	Global_90CE[209 /*12*/].f_3 = 0;
	Global_90CE[209 /*12*/].f_A = 1;
	Global_90CE[209 /*12*/].f_B = 60000;
	Global_90CE[209 /*12*/].f_4 = 1;
	Global_90CE[209 /*12*/].f_5[0 /*4*/] = 559;
	Global_90CE[209 /*12*/].f_5[0 /*4*/].f_1 = 210;
	Global_90CE[209 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[209 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[210 /*12*/] = 549;
	Global_90CE[210 /*12*/].f_1 = 550;
	Global_90CE[210 /*12*/].f_2 = 0;
	Global_90CE[210 /*12*/].f_3 = 58;
	Global_90CE[210 /*12*/].f_A = 0;
	Global_90CE[210 /*12*/].f_B = 0;
	Global_90CE[210 /*12*/].f_4 = 1;
	Global_90CE[210 /*12*/].f_5[0 /*4*/] = 560;
	Global_90CE[210 /*12*/].f_5[0 /*4*/].f_1 = 211;
	Global_90CE[210 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[210 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[211 /*12*/] = 551;
	Global_90CE[211 /*12*/].f_1 = 552;
	Global_90CE[211 /*12*/].f_2 = 58;
	Global_90CE[211 /*12*/].f_3 = 0;
	Global_90CE[211 /*12*/].f_A = 1;
	Global_90CE[211 /*12*/].f_B = 60000;
	Global_90CE[211 /*12*/].f_4 = 1;
	Global_90CE[211 /*12*/].f_5[0 /*4*/] = 561;
	Global_90CE[211 /*12*/].f_5[0 /*4*/].f_1 = 212;
	Global_90CE[211 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[211 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[212 /*12*/] = 553;
	Global_90CE[212 /*12*/].f_1 = 554;
	Global_90CE[212 /*12*/].f_2 = 0;
	Global_90CE[212 /*12*/].f_3 = 58;
	Global_90CE[212 /*12*/].f_A = 0;
	Global_90CE[212 /*12*/].f_B = 0;
	Global_90CE[212 /*12*/].f_4 = 1;
	Global_90CE[212 /*12*/].f_5[0 /*4*/] = 562;
	Global_90CE[212 /*12*/].f_5[0 /*4*/].f_1 = -1;
	Global_90CE[212 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[212 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[213 /*12*/] = 555;
	Global_90CE[213 /*12*/].f_1 = 556;
	Global_90CE[213 /*12*/].f_2 = 58;
	Global_90CE[213 /*12*/].f_3 = 0;
	Global_90CE[213 /*12*/].f_A = 1;
	Global_90CE[213 /*12*/].f_B = 60000;
	Global_90CE[213 /*12*/].f_4 = 0;
	Global_90CE[214 /*12*/] = 563;
	Global_90CE[214 /*12*/].f_1 = 564;
	Global_90CE[214 /*12*/].f_2 = 59;
	Global_90CE[214 /*12*/].f_3 = 0;
	Global_90CE[214 /*12*/].f_A = 1;
	Global_90CE[214 /*12*/].f_B = 60000;
	Global_90CE[214 /*12*/].f_4 = 1;
	Global_90CE[214 /*12*/].f_5[0 /*4*/] = 579;
	Global_90CE[214 /*12*/].f_5[0 /*4*/].f_1 = 215;
	Global_90CE[214 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[214 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[215 /*12*/] = 565;
	Global_90CE[215 /*12*/].f_1 = 566;
	Global_90CE[215 /*12*/].f_2 = 0;
	Global_90CE[215 /*12*/].f_3 = 59;
	Global_90CE[215 /*12*/].f_A = 0;
	Global_90CE[215 /*12*/].f_B = 0;
	Global_90CE[215 /*12*/].f_4 = 1;
	Global_90CE[215 /*12*/].f_5[0 /*4*/] = 580;
	Global_90CE[215 /*12*/].f_5[0 /*4*/].f_1 = 216;
	Global_90CE[215 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[215 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[216 /*12*/] = 567;
	Global_90CE[216 /*12*/].f_1 = 568;
	Global_90CE[216 /*12*/].f_2 = 59;
	Global_90CE[216 /*12*/].f_3 = 0;
	Global_90CE[216 /*12*/].f_A = 1;
	Global_90CE[216 /*12*/].f_B = 60000;
	Global_90CE[216 /*12*/].f_4 = 1;
	Global_90CE[216 /*12*/].f_5[0 /*4*/] = 581;
	Global_90CE[216 /*12*/].f_5[0 /*4*/].f_1 = 217;
	Global_90CE[216 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[216 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[217 /*12*/] = 569;
	Global_90CE[217 /*12*/].f_1 = 570;
	Global_90CE[217 /*12*/].f_2 = 0;
	Global_90CE[217 /*12*/].f_3 = 59;
	Global_90CE[217 /*12*/].f_A = 0;
	Global_90CE[217 /*12*/].f_B = 0;
	Global_90CE[217 /*12*/].f_4 = 1;
	Global_90CE[217 /*12*/].f_5[0 /*4*/] = 582;
	Global_90CE[217 /*12*/].f_5[0 /*4*/].f_1 = 218;
	Global_90CE[217 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[217 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[218 /*12*/] = 571;
	Global_90CE[218 /*12*/].f_1 = 572;
	Global_90CE[218 /*12*/].f_2 = 59;
	Global_90CE[218 /*12*/].f_3 = 0;
	Global_90CE[218 /*12*/].f_A = 1;
	Global_90CE[218 /*12*/].f_B = 60000;
	Global_90CE[218 /*12*/].f_4 = 1;
	Global_90CE[218 /*12*/].f_5[0 /*4*/] = 583;
	Global_90CE[218 /*12*/].f_5[0 /*4*/].f_1 = 219;
	Global_90CE[218 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[218 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[219 /*12*/] = 573;
	Global_90CE[219 /*12*/].f_1 = 574;
	Global_90CE[219 /*12*/].f_2 = 0;
	Global_90CE[219 /*12*/].f_3 = 59;
	Global_90CE[219 /*12*/].f_A = 0;
	Global_90CE[219 /*12*/].f_B = 0;
	Global_90CE[219 /*12*/].f_4 = 1;
	Global_90CE[219 /*12*/].f_5[0 /*4*/] = 584;
	Global_90CE[219 /*12*/].f_5[0 /*4*/].f_1 = 220;
	Global_90CE[219 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[219 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[220 /*12*/] = 575;
	Global_90CE[220 /*12*/].f_1 = 576;
	Global_90CE[220 /*12*/].f_2 = 59;
	Global_90CE[220 /*12*/].f_3 = 0;
	Global_90CE[220 /*12*/].f_A = 1;
	Global_90CE[220 /*12*/].f_B = 60000;
	Global_90CE[220 /*12*/].f_4 = 1;
	Global_90CE[220 /*12*/].f_5[0 /*4*/] = 585;
	Global_90CE[220 /*12*/].f_5[0 /*4*/].f_1 = 221;
	Global_90CE[220 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[220 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[221 /*12*/] = 577;
	Global_90CE[221 /*12*/].f_1 = 578;
	Global_90CE[221 /*12*/].f_2 = 0;
	Global_90CE[221 /*12*/].f_3 = 59;
	Global_90CE[221 /*12*/].f_A = 0;
	Global_90CE[221 /*12*/].f_B = 0;
	Global_90CE[221 /*12*/].f_4 = 0;
	Global_90CE[222 /*12*/] = 586;
	Global_90CE[222 /*12*/].f_1 = 587;
	Global_90CE[222 /*12*/].f_2 = 60;
	Global_90CE[222 /*12*/].f_3 = 2;
	Global_90CE[222 /*12*/].f_A = 1;
	Global_90CE[222 /*12*/].f_B = 60000;
	Global_90CE[222 /*12*/].f_4 = 1;
	Global_90CE[222 /*12*/].f_5[0 /*4*/] = 600;
	Global_90CE[222 /*12*/].f_5[0 /*4*/].f_1 = 223;
	Global_90CE[222 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[222 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[223 /*12*/] = 588;
	Global_90CE[223 /*12*/].f_1 = 589;
	Global_90CE[223 /*12*/].f_2 = 2;
	Global_90CE[223 /*12*/].f_3 = 60;
	Global_90CE[223 /*12*/].f_A = 0;
	Global_90CE[223 /*12*/].f_B = 0;
	Global_90CE[223 /*12*/].f_4 = 1;
	Global_90CE[223 /*12*/].f_5[0 /*4*/] = 601;
	Global_90CE[223 /*12*/].f_5[0 /*4*/].f_1 = 224;
	Global_90CE[223 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[223 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[224 /*12*/] = 590;
	Global_90CE[224 /*12*/].f_1 = 591;
	Global_90CE[224 /*12*/].f_2 = 60;
	Global_90CE[224 /*12*/].f_3 = 2;
	Global_90CE[224 /*12*/].f_A = 1;
	Global_90CE[224 /*12*/].f_B = 60000;
	Global_90CE[224 /*12*/].f_4 = 1;
	Global_90CE[224 /*12*/].f_5[0 /*4*/] = 602;
	Global_90CE[224 /*12*/].f_5[0 /*4*/].f_1 = 225;
	Global_90CE[224 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[224 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[225 /*12*/] = 592;
	Global_90CE[225 /*12*/].f_1 = 593;
	Global_90CE[225 /*12*/].f_2 = 2;
	Global_90CE[225 /*12*/].f_3 = 60;
	Global_90CE[225 /*12*/].f_A = 0;
	Global_90CE[225 /*12*/].f_B = 0;
	Global_90CE[225 /*12*/].f_4 = 1;
	Global_90CE[225 /*12*/].f_5[0 /*4*/] = 603;
	Global_90CE[225 /*12*/].f_5[0 /*4*/].f_1 = 226;
	Global_90CE[225 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[225 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[226 /*12*/] = 594;
	Global_90CE[226 /*12*/].f_1 = 595;
	Global_90CE[226 /*12*/].f_2 = 60;
	Global_90CE[226 /*12*/].f_3 = 2;
	Global_90CE[226 /*12*/].f_A = 1;
	Global_90CE[226 /*12*/].f_B = 60000;
	Global_90CE[226 /*12*/].f_4 = 1;
	Global_90CE[226 /*12*/].f_5[0 /*4*/] = 604;
	Global_90CE[226 /*12*/].f_5[0 /*4*/].f_1 = 227;
	Global_90CE[226 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[226 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[227 /*12*/] = 596;
	Global_90CE[227 /*12*/].f_1 = 597;
	Global_90CE[227 /*12*/].f_2 = 2;
	Global_90CE[227 /*12*/].f_3 = 60;
	Global_90CE[227 /*12*/].f_A = 1;
	Global_90CE[227 /*12*/].f_B = 60000;
	Global_90CE[227 /*12*/].f_4 = 1;
	Global_90CE[227 /*12*/].f_5[0 /*4*/] = 605;
	Global_90CE[227 /*12*/].f_5[0 /*4*/].f_1 = 228;
	Global_90CE[227 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[227 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[228 /*12*/] = 598;
	Global_90CE[228 /*12*/].f_1 = 599;
	Global_90CE[228 /*12*/].f_2 = 2;
	Global_90CE[228 /*12*/].f_3 = 60;
	Global_90CE[228 /*12*/].f_A = 0;
	Global_90CE[228 /*12*/].f_B = 0;
	Global_90CE[228 /*12*/].f_4 = 0;
	Global_90CE[229 /*12*/] = 606;
	Global_90CE[229 /*12*/].f_1 = 607;
	Global_90CE[229 /*12*/].f_2 = 61;
	Global_90CE[229 /*12*/].f_3 = 2;
	Global_90CE[229 /*12*/].f_A = 1;
	Global_90CE[229 /*12*/].f_B = 60000;
	Global_90CE[229 /*12*/].f_4 = 1;
	Global_90CE[229 /*12*/].f_5[0 /*4*/] = 610;
	Global_90CE[229 /*12*/].f_5[0 /*4*/].f_1 = 230;
	Global_90CE[229 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[229 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[230 /*12*/] = 608;
	Global_90CE[230 /*12*/].f_1 = 609;
	Global_90CE[230 /*12*/].f_2 = 2;
	Global_90CE[230 /*12*/].f_3 = 61;
	Global_90CE[230 /*12*/].f_A = 0;
	Global_90CE[230 /*12*/].f_B = 0;
	Global_90CE[230 /*12*/].f_4 = 1;
	Global_90CE[230 /*12*/].f_5[0 /*4*/] = 617;
	Global_90CE[230 /*12*/].f_5[0 /*4*/].f_1 = 231;
	Global_90CE[230 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[230 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[231 /*12*/] = 611;
	Global_90CE[231 /*12*/].f_1 = 612;
	Global_90CE[231 /*12*/].f_2 = 61;
	Global_90CE[231 /*12*/].f_3 = 2;
	Global_90CE[231 /*12*/].f_A = 1;
	Global_90CE[231 /*12*/].f_B = 60000;
	Global_90CE[231 /*12*/].f_4 = 1;
	Global_90CE[231 /*12*/].f_5[0 /*4*/] = 618;
	Global_90CE[231 /*12*/].f_5[0 /*4*/].f_1 = 232;
	Global_90CE[231 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[231 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[232 /*12*/] = 613;
	Global_90CE[232 /*12*/].f_1 = 614;
	Global_90CE[232 /*12*/].f_2 = 2;
	Global_90CE[232 /*12*/].f_3 = 61;
	Global_90CE[232 /*12*/].f_A = 0;
	Global_90CE[232 /*12*/].f_B = 0;
	Global_90CE[232 /*12*/].f_4 = 1;
	Global_90CE[232 /*12*/].f_5[0 /*4*/] = 619;
	Global_90CE[232 /*12*/].f_5[0 /*4*/].f_1 = 233;
	Global_90CE[232 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[232 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[233 /*12*/] = 615;
	Global_90CE[233 /*12*/].f_1 = 616;
	Global_90CE[233 /*12*/].f_2 = 61;
	Global_90CE[233 /*12*/].f_3 = 2;
	Global_90CE[233 /*12*/].f_A = 1;
	Global_90CE[233 /*12*/].f_B = 60000;
	Global_90CE[233 /*12*/].f_4 = 1;
	Global_90CE[233 /*12*/].f_5[0 /*4*/] = 622;
	Global_90CE[233 /*12*/].f_5[0 /*4*/].f_1 = 234;
	Global_90CE[233 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[233 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[234 /*12*/] = 620;
	Global_90CE[234 /*12*/].f_1 = 621;
	Global_90CE[234 /*12*/].f_2 = 2;
	Global_90CE[234 /*12*/].f_3 = 61;
	Global_90CE[234 /*12*/].f_A = 0;
	Global_90CE[234 /*12*/].f_B = 0;
	Global_90CE[234 /*12*/].f_4 = 0;
	Global_90CE[235 /*12*/] = 623;
	Global_90CE[235 /*12*/].f_1 = 624;
	Global_90CE[235 /*12*/].f_2 = 62;
	Global_90CE[235 /*12*/].f_3 = 2;
	Global_90CE[235 /*12*/].f_A = 1;
	Global_90CE[235 /*12*/].f_B = 60000;
	Global_90CE[235 /*12*/].f_4 = 1;
	Global_90CE[235 /*12*/].f_5[0 /*4*/] = 635;
	Global_90CE[235 /*12*/].f_5[0 /*4*/].f_1 = 236;
	Global_90CE[235 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[235 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[236 /*12*/] = 625;
	Global_90CE[236 /*12*/].f_1 = 626;
	Global_90CE[236 /*12*/].f_2 = 2;
	Global_90CE[236 /*12*/].f_3 = 62;
	Global_90CE[236 /*12*/].f_A = 0;
	Global_90CE[236 /*12*/].f_B = 0;
	Global_90CE[236 /*12*/].f_4 = 1;
	Global_90CE[236 /*12*/].f_5[0 /*4*/] = 636;
	Global_90CE[236 /*12*/].f_5[0 /*4*/].f_1 = 237;
	Global_90CE[236 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[236 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[237 /*12*/] = 627;
	Global_90CE[237 /*12*/].f_1 = 628;
	Global_90CE[237 /*12*/].f_2 = 62;
	Global_90CE[237 /*12*/].f_3 = 2;
	Global_90CE[237 /*12*/].f_A = 1;
	Global_90CE[237 /*12*/].f_B = 60000;
	Global_90CE[237 /*12*/].f_4 = 1;
	Global_90CE[237 /*12*/].f_5[0 /*4*/] = 637;
	Global_90CE[237 /*12*/].f_5[0 /*4*/].f_1 = 238;
	Global_90CE[237 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[237 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[238 /*12*/] = 629;
	Global_90CE[238 /*12*/].f_1 = 630;
	Global_90CE[238 /*12*/].f_2 = 2;
	Global_90CE[238 /*12*/].f_3 = 62;
	Global_90CE[238 /*12*/].f_A = 0;
	Global_90CE[238 /*12*/].f_B = 0;
	Global_90CE[238 /*12*/].f_4 = 1;
	Global_90CE[238 /*12*/].f_5[0 /*4*/] = 638;
	Global_90CE[238 /*12*/].f_5[0 /*4*/].f_1 = 239;
	Global_90CE[238 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[238 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[239 /*12*/] = 631;
	Global_90CE[239 /*12*/].f_1 = 632;
	Global_90CE[239 /*12*/].f_2 = 62;
	Global_90CE[239 /*12*/].f_3 = 2;
	Global_90CE[239 /*12*/].f_A = 1;
	Global_90CE[239 /*12*/].f_B = 60000;
	Global_90CE[239 /*12*/].f_4 = 1;
	Global_90CE[239 /*12*/].f_5[0 /*4*/] = 639;
	Global_90CE[239 /*12*/].f_5[0 /*4*/].f_1 = 240;
	Global_90CE[239 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_90CE[239 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_90CE[240 /*12*/] = 633;
	Global_90CE[240 /*12*/].f_1 = 634;
	Global_90CE[240 /*12*/].f_2 = 2;
	Global_90CE[240 /*12*/].f_3 = 62;
	Global_90CE[240 /*12*/].f_A = 0;
	Global_90CE[240 /*12*/].f_B = 0;
	Global_90CE[240 /*12*/].f_4 = 0;
	Global_90CE[241 /*12*/] = 646;
	Global_90CE[241 /*12*/].f_1 = 647;
	Global_90CE[241 /*12*/].f_2 = 36;
	Global_90CE[241 /*12*/].f_3 = 2;
	Global_90CE[241 /*12*/].f_A = 0;
	Global_90CE[241 /*12*/].f_B = 0;
	Global_90CE[241 /*12*/].f_4 = 0;
	Global_90CE[242 /*12*/] = 648;
	Global_90CE[242 /*12*/].f_1 = 649;
	Global_90CE[242 /*12*/].f_2 = 36;
	Global_90CE[242 /*12*/].f_3 = 0;
	Global_90CE[242 /*12*/].f_A = 0;
	Global_90CE[242 /*12*/].f_B = 0;
	Global_90CE[242 /*12*/].f_4 = 0;
	Global_90CE[243 /*12*/] = 650;
	Global_90CE[243 /*12*/].f_1 = 651;
	Global_90CE[243 /*12*/].f_2 = 36;
	Global_90CE[243 /*12*/].f_3 = 1;
	Global_90CE[243 /*12*/].f_A = 0;
	Global_90CE[243 /*12*/].f_B = 0;
	Global_90CE[243 /*12*/].f_4 = 0;
	Global_90CE[244 /*12*/] = 655;
	Global_90CE[244 /*12*/].f_1 = 656;
	Global_90CE[244 /*12*/].f_2 = 65;
	Global_90CE[244 /*12*/].f_3 = 1;
	Global_90CE[244 /*12*/].f_A = 0;
	Global_90CE[244 /*12*/].f_B = 0;
	Global_90CE[244 /*12*/].f_4 = 0;
	Global_90CE[245 /*12*/] = 657;
	Global_90CE[245 /*12*/].f_1 = 658;
	Global_90CE[245 /*12*/].f_2 = 65;
	Global_90CE[245 /*12*/].f_3 = 1;
	Global_90CE[245 /*12*/].f_A = 0;
	Global_90CE[245 /*12*/].f_B = 0;
	Global_90CE[245 /*12*/].f_4 = 0;
	Global_90CE[246 /*12*/] = 659;
	Global_90CE[246 /*12*/].f_1 = 660;
	Global_90CE[246 /*12*/].f_2 = 65;
	Global_90CE[246 /*12*/].f_3 = 1;
	Global_90CE[246 /*12*/].f_A = 0;
	Global_90CE[246 /*12*/].f_B = 0;
	Global_90CE[246 /*12*/].f_4 = 0;
	Global_90CE[247 /*12*/] = 661;
	Global_90CE[247 /*12*/].f_1 = 662;
	Global_90CE[247 /*12*/].f_2 = 65;
	Global_90CE[247 /*12*/].f_3 = 1;
	Global_90CE[247 /*12*/].f_A = 0;
	Global_90CE[247 /*12*/].f_B = 0;
	Global_90CE[247 /*12*/].f_4 = 0;
	Global_90CE[248 /*12*/] = 663;
	Global_90CE[248 /*12*/].f_1 = 664;
	Global_90CE[248 /*12*/].f_2 = 33;
	Global_90CE[248 /*12*/].f_3 = 2;
	Global_90CE[248 /*12*/].f_A = 0;
	Global_90CE[248 /*12*/].f_B = 40000;
	Global_90CE[248 /*12*/].f_4 = 0;
	Global_90CE[249 /*12*/] = 665;
	Global_90CE[249 /*12*/].f_1 = 666;
	Global_90CE[249 /*12*/].f_2 = 19;
	Global_90CE[249 /*12*/].f_3 = 1;
	Global_90CE[249 /*12*/].f_A = 1;
	Global_90CE[249 /*12*/].f_B = 0;
	Global_90CE[249 /*12*/].f_4 = 0;
	Global_90CE[250 /*12*/] = 667;
	Global_90CE[250 /*12*/].f_1 = 668;
	Global_90CE[250 /*12*/].f_2 = 19;
	Global_90CE[250 /*12*/].f_3 = 1;
	Global_90CE[250 /*12*/].f_A = 1;
	Global_90CE[250 /*12*/].f_B = 0;
	Global_90CE[250 /*12*/].f_4 = 0;
	Global_90CE[251 /*12*/] = 669;
	Global_90CE[251 /*12*/].f_1 = 670;
	Global_90CE[251 /*12*/].f_2 = 19;
	Global_90CE[251 /*12*/].f_3 = 1;
	Global_90CE[251 /*12*/].f_A = 1;
	Global_90CE[251 /*12*/].f_B = 0;
	Global_90CE[251 /*12*/].f_4 = 0;
	Global_90CE[252 /*12*/] = 671;
	Global_90CE[252 /*12*/].f_1 = 672;
	Global_90CE[252 /*12*/].f_2 = 19;
	Global_90CE[252 /*12*/].f_3 = 1;
	Global_90CE[252 /*12*/].f_A = 1;
	Global_90CE[252 /*12*/].f_B = 0;
	Global_90CE[252 /*12*/].f_4 = 0;
	Global_90CE[253 /*12*/] = 673;
	Global_90CE[253 /*12*/].f_1 = 674;
	Global_90CE[253 /*12*/].f_2 = 19;
	Global_90CE[253 /*12*/].f_3 = 1;
	Global_90CE[253 /*12*/].f_A = 1;
	Global_90CE[253 /*12*/].f_B = 0;
	Global_90CE[253 /*12*/].f_4 = 0;
	Global_90CE[254 /*12*/] = 675;
	Global_90CE[254 /*12*/].f_1 = 676;
	Global_90CE[254 /*12*/].f_2 = 19;
	Global_90CE[254 /*12*/].f_3 = 1;
	Global_90CE[254 /*12*/].f_A = 1;
	Global_90CE[254 /*12*/].f_B = 0;
	Global_90CE[254 /*12*/].f_4 = 0;
	Global_90CE[255 /*12*/] = 679;
	Global_90CE[255 /*12*/].f_1 = 680;
	Global_90CE[255 /*12*/].f_2 = 19;
	Global_90CE[255 /*12*/].f_3 = 1;
	Global_90CE[255 /*12*/].f_A = 1;
	Global_90CE[255 /*12*/].f_B = 0;
	Global_90CE[255 /*12*/].f_4 = 0;
	Global_90CE[256 /*12*/] = 677;
	Global_90CE[256 /*12*/].f_1 = 678;
	Global_90CE[256 /*12*/].f_2 = 19;
	Global_90CE[256 /*12*/].f_3 = 1;
	Global_90CE[256 /*12*/].f_A = 1;
	Global_90CE[256 /*12*/].f_B = 0;
	Global_90CE[256 /*12*/].f_4 = 0;
	Global_90CE[257 /*12*/] = 681;
	Global_90CE[257 /*12*/].f_1 = 682;
	Global_90CE[257 /*12*/].f_2 = 19;
	Global_90CE[257 /*12*/].f_3 = 1;
	Global_90CE[257 /*12*/].f_A = 1;
	Global_90CE[257 /*12*/].f_B = 0;
	Global_90CE[257 /*12*/].f_4 = 0;
	Global_90CE[258 /*12*/] = 683;
	Global_90CE[258 /*12*/].f_1 = 684;
	Global_90CE[258 /*12*/].f_2 = 19;
	Global_90CE[258 /*12*/].f_3 = 1;
	Global_90CE[258 /*12*/].f_A = 1;
	Global_90CE[258 /*12*/].f_B = 0;
	Global_90CE[258 /*12*/].f_4 = 0;
	Global_90CE[259 /*12*/] = 685;
	Global_90CE[259 /*12*/].f_1 = 686;
	Global_90CE[259 /*12*/].f_2 = 19;
	Global_90CE[259 /*12*/].f_3 = 1;
	Global_90CE[259 /*12*/].f_A = 1;
	Global_90CE[259 /*12*/].f_B = 0;
	Global_90CE[259 /*12*/].f_4 = 0;
	Global_90CE[260 /*12*/] = 687;
	Global_90CE[260 /*12*/].f_1 = 688;
	Global_90CE[260 /*12*/].f_2 = 19;
	Global_90CE[260 /*12*/].f_3 = 1;
	Global_90CE[260 /*12*/].f_A = 1;
	Global_90CE[260 /*12*/].f_B = 0;
	Global_90CE[260 /*12*/].f_4 = 0;
	Global_90CE[261 /*12*/] = 691;
	Global_90CE[261 /*12*/].f_1 = 692;
	Global_90CE[261 /*12*/].f_2 = 19;
	Global_90CE[261 /*12*/].f_3 = 1;
	Global_90CE[261 /*12*/].f_A = 1;
	Global_90CE[261 /*12*/].f_B = 0;
	Global_90CE[261 /*12*/].f_4 = 0;
	Global_90CE[262 /*12*/] = 689;
	Global_90CE[262 /*12*/].f_1 = 690;
	Global_90CE[262 /*12*/].f_2 = 19;
	Global_90CE[262 /*12*/].f_3 = 1;
	Global_90CE[262 /*12*/].f_A = 1;
	Global_90CE[262 /*12*/].f_B = 0;
	Global_90CE[262 /*12*/].f_4 = 0;
	Global_90CE[263 /*12*/] = 693;
	Global_90CE[263 /*12*/].f_1 = 694;
	Global_90CE[263 /*12*/].f_2 = 19;
	Global_90CE[263 /*12*/].f_3 = 1;
	Global_90CE[263 /*12*/].f_A = 1;
	Global_90CE[263 /*12*/].f_B = 0;
	Global_90CE[263 /*12*/].f_4 = 0;
	Global_90CE[264 /*12*/] = 695;
	Global_90CE[264 /*12*/].f_1 = 696;
	Global_90CE[264 /*12*/].f_2 = 19;
	Global_90CE[264 /*12*/].f_3 = 1;
	Global_90CE[264 /*12*/].f_A = 1;
	Global_90CE[264 /*12*/].f_B = 0;
	Global_90CE[264 /*12*/].f_4 = 0;
	Global_90CE[265 /*12*/] = 697;
	Global_90CE[265 /*12*/].f_1 = 698;
	Global_90CE[265 /*12*/].f_2 = 19;
	Global_90CE[265 /*12*/].f_3 = 1;
	Global_90CE[265 /*12*/].f_A = 1;
	Global_90CE[265 /*12*/].f_B = 0;
	Global_90CE[265 /*12*/].f_4 = 0;
	Global_90CE[266 /*12*/] = 699;
	Global_90CE[266 /*12*/].f_1 = 700;
	Global_90CE[266 /*12*/].f_2 = 19;
	Global_90CE[266 /*12*/].f_3 = 1;
	Global_90CE[266 /*12*/].f_A = 1;
	Global_90CE[266 /*12*/].f_B = 0;
	Global_90CE[266 /*12*/].f_4 = 0;
	Global_90CE[267 /*12*/] = 701;
	Global_90CE[267 /*12*/].f_1 = 702;
	Global_90CE[267 /*12*/].f_2 = 19;
	Global_90CE[267 /*12*/].f_3 = 1;
	Global_90CE[267 /*12*/].f_A = 1;
	Global_90CE[267 /*12*/].f_B = 0;
	Global_90CE[267 /*12*/].f_4 = 0;
	Global_90CE[268 /*12*/] = 703;
	Global_90CE[268 /*12*/].f_1 = 704;
	Global_90CE[268 /*12*/].f_2 = 19;
	Global_90CE[268 /*12*/].f_3 = 1;
	Global_90CE[268 /*12*/].f_A = 1;
	Global_90CE[268 /*12*/].f_B = 0;
	Global_90CE[268 /*12*/].f_4 = 0;
	Global_90CE[269 /*12*/] = 705;
	Global_90CE[269 /*12*/].f_1 = 706;
	Global_90CE[269 /*12*/].f_2 = 19;
	Global_90CE[269 /*12*/].f_3 = 1;
	Global_90CE[269 /*12*/].f_A = 1;
	Global_90CE[269 /*12*/].f_B = 0;
	Global_90CE[269 /*12*/].f_4 = 0;
	Global_90CE[270 /*12*/] = 707;
	Global_90CE[270 /*12*/].f_1 = 708;
	Global_90CE[270 /*12*/].f_2 = 16;
	Global_90CE[270 /*12*/].f_3 = 0;
	Global_90CE[270 /*12*/].f_A = 1;
	Global_90CE[270 /*12*/].f_B = 0;
	Global_90CE[270 /*12*/].f_4 = 0;
	Global_90CE[271 /*12*/] = 709;
	Global_90CE[271 /*12*/].f_1 = 710;
	Global_90CE[271 /*12*/].f_2 = 16;
	Global_90CE[271 /*12*/].f_3 = 0;
	Global_90CE[271 /*12*/].f_A = 1;
	Global_90CE[271 /*12*/].f_B = 0;
	Global_90CE[271 /*12*/].f_4 = 0;
	Global_90CE[272 /*12*/] = 711;
	Global_90CE[272 /*12*/].f_1 = 712;
	Global_90CE[272 /*12*/].f_2 = 16;
	Global_90CE[272 /*12*/].f_3 = 0;
	Global_90CE[272 /*12*/].f_A = 1;
	Global_90CE[272 /*12*/].f_B = 0;
	Global_90CE[272 /*12*/].f_4 = 0;
	Global_90CE[273 /*12*/] = 713;
	Global_90CE[273 /*12*/].f_1 = 714;
	Global_90CE[273 /*12*/].f_2 = 16;
	Global_90CE[273 /*12*/].f_3 = 0;
	Global_90CE[273 /*12*/].f_A = 1;
	Global_90CE[273 /*12*/].f_B = 0;
	Global_90CE[273 /*12*/].f_4 = 0;
	Global_90CE[274 /*12*/] = 715;
	Global_90CE[274 /*12*/].f_1 = 716;
	Global_90CE[274 /*12*/].f_2 = 16;
	Global_90CE[274 /*12*/].f_3 = 0;
	Global_90CE[274 /*12*/].f_A = 1;
	Global_90CE[274 /*12*/].f_B = 0;
	Global_90CE[274 /*12*/].f_4 = 0;
	Global_90CE[275 /*12*/] = 717;
	Global_90CE[275 /*12*/].f_1 = 718;
	Global_90CE[275 /*12*/].f_2 = 16;
	Global_90CE[275 /*12*/].f_3 = 0;
	Global_90CE[275 /*12*/].f_A = 1;
	Global_90CE[275 /*12*/].f_B = 0;
	Global_90CE[275 /*12*/].f_4 = 0;
	Global_90CE[276 /*12*/] = 719;
	Global_90CE[276 /*12*/].f_1 = 720;
	Global_90CE[276 /*12*/].f_2 = 16;
	Global_90CE[276 /*12*/].f_3 = 0;
	Global_90CE[276 /*12*/].f_A = 1;
	Global_90CE[276 /*12*/].f_B = 0;
	Global_90CE[276 /*12*/].f_4 = 0;
	Global_9DCB[0 /*46*/].f_2D = 0;
	Global_9DCB[0 /*46*/].f_1F = 0;
	Global_9DCB[0 /*46*/].f_2A = 0;
	Global_9DCB[0 /*46*/].f_2B = 0;
	Global_9DCB[0 /*46*/].f_2 = 2;
	Global_9DCB[0 /*46*/].f_3[0] = 0;
	Global_9DCB[0 /*46*/].f_3[1] = 4;
	Global_9DCB[0 /*46*/].f_1E = 8;
	Global_9DCB[0 /*46*/].f_8[0] = 0;
	Global_9DCB[0 /*46*/].f_8[1] = 1;
	Global_9DCB[0 /*46*/].f_8[2] = 2;
	Global_9DCB[0 /*46*/].f_8[3] = 3;
	Global_9DCB[0 /*46*/].f_8[4] = 4;
	Global_9DCB[0 /*46*/].f_8[5] = 5;
	Global_9DCB[0 /*46*/].f_8[6] = 6;
	Global_9DCB[0 /*46*/].f_8[7] = 9;
	Global_9DCB[1 /*46*/].f_2D = 0;
	Global_9DCB[1 /*46*/].f_1F = 0;
	Global_9DCB[1 /*46*/].f_2A = 0;
	Global_9DCB[1 /*46*/].f_2B = 0;
	Global_9DCB[1 /*46*/].f_2 = 3;
	Global_9DCB[1 /*46*/].f_3[0] = 5;
	Global_9DCB[1 /*46*/].f_3[1] = 0;
	Global_9DCB[1 /*46*/].f_3[2] = 4;
	Global_9DCB[1 /*46*/].f_1E = 3;
	Global_9DCB[1 /*46*/].f_8[0] = 10;
	Global_9DCB[1 /*46*/].f_8[1] = 11;
	Global_9DCB[1 /*46*/].f_8[2] = 16;
	Global_9DCB[2 /*46*/].f_2D = 0;
	Global_9DCB[2 /*46*/].f_1F = 0;
	Global_9DCB[2 /*46*/].f_2A = 0;
	Global_9DCB[2 /*46*/].f_2B = 0;
	Global_9DCB[2 /*46*/].f_2 = 2;
	Global_9DCB[2 /*46*/].f_3[0] = 7;
	Global_9DCB[2 /*46*/].f_3[1] = 1;
	Global_9DCB[2 /*46*/].f_1E = 1;
	Global_9DCB[2 /*46*/].f_8[0] = 12;
	Global_9DCB[3 /*46*/].f_2D = 0;
	Global_9DCB[3 /*46*/].f_1F = 0;
	Global_9DCB[3 /*46*/].f_2A = 0;
	Global_9DCB[3 /*46*/].f_2B = 0;
	Global_9DCB[3 /*46*/].f_2 = 2;
	Global_9DCB[3 /*46*/].f_3[0] = 7;
	Global_9DCB[3 /*46*/].f_3[1] = 1;
	Global_9DCB[3 /*46*/].f_1E = 1;
	Global_9DCB[3 /*46*/].f_8[0] = 14;
	Global_9DCB[4 /*46*/].f_2D = 0;
	Global_9DCB[4 /*46*/].f_1F = 0;
	Global_9DCB[4 /*46*/].f_2A = 0;
	Global_9DCB[4 /*46*/].f_2B = 0;
	Global_9DCB[4 /*46*/].f_2 = 2;
	Global_9DCB[4 /*46*/].f_3[0] = 7;
	Global_9DCB[4 /*46*/].f_3[1] = 1;
	Global_9DCB[4 /*46*/].f_1E = 1;
	Global_9DCB[4 /*46*/].f_8[0] = 13;
	Global_9DCB[5 /*46*/].f_2D = 0;
	Global_9DCB[5 /*46*/].f_1F = 0;
	Global_9DCB[5 /*46*/].f_2A = 0;
	Global_9DCB[5 /*46*/].f_2B = 0;
	Global_9DCB[5 /*46*/].f_2 = 2;
	Global_9DCB[5 /*46*/].f_3[0] = 7;
	Global_9DCB[5 /*46*/].f_3[1] = 1;
	Global_9DCB[5 /*46*/].f_1E = 1;
	Global_9DCB[5 /*46*/].f_8[0] = 15;
	Global_9DCB[6 /*46*/].f_2D = 0;
	Global_9DCB[6 /*46*/].f_1F = 0;
	Global_9DCB[6 /*46*/].f_2A = 0;
	Global_9DCB[6 /*46*/].f_2B = 0;
	Global_9DCB[6 /*46*/].f_2 = 2;
	Global_9DCB[6 /*46*/].f_3[0] = 0;
	Global_9DCB[6 /*46*/].f_3[1] = 8;
	Global_9DCB[6 /*46*/].f_1E = 5;
	Global_9DCB[6 /*46*/].f_8[0] = 17;
	Global_9DCB[6 /*46*/].f_8[1] = 19;
	Global_9DCB[6 /*46*/].f_8[2] = 20;
	Global_9DCB[6 /*46*/].f_8[3] = 21;
	Global_9DCB[6 /*46*/].f_8[4] = 22;
	Global_9DCB[7 /*46*/].f_2D = 0;
	Global_9DCB[7 /*46*/].f_1F = 0;
	Global_9DCB[7 /*46*/].f_2A = 0;
	Global_9DCB[7 /*46*/].f_2B = 0;
	Global_9DCB[7 /*46*/].f_2 = 2;
	Global_9DCB[7 /*46*/].f_3[0] = 1;
	Global_9DCB[7 /*46*/].f_3[1] = 9;
	Global_9DCB[7 /*46*/].f_1E = 5;
	Global_9DCB[7 /*46*/].f_8[0] = 18;
	Global_9DCB[7 /*46*/].f_8[1] = 24;
	Global_9DCB[7 /*46*/].f_8[2] = 25;
	Global_9DCB[7 /*46*/].f_8[3] = 26;
	Global_9DCB[7 /*46*/].f_8[4] = 27;
	Global_9DCB[8 /*46*/].f_2D = 0;
	Global_9DCB[8 /*46*/].f_1F = 0;
	Global_9DCB[8 /*46*/].f_2A = 0;
	Global_9DCB[8 /*46*/].f_2B = 0;
	Global_9DCB[8 /*46*/].f_2 = 2;
	Global_9DCB[8 /*46*/].f_3[0] = 2;
	Global_9DCB[8 /*46*/].f_3[1] = 10;
	Global_9DCB[8 /*46*/].f_1E = 4;
	Global_9DCB[8 /*46*/].f_8[0] = 23;
	Global_9DCB[8 /*46*/].f_8[1] = 28;
	Global_9DCB[8 /*46*/].f_8[2] = 29;
	Global_9DCB[8 /*46*/].f_8[3] = 30;
	Global_9DCB[9 /*46*/].f_2D = 0;
	Global_9DCB[9 /*46*/].f_1F = 0;
	Global_9DCB[9 /*46*/].f_2A = 0;
	Global_9DCB[9 /*46*/].f_2B = 0;
	Global_9DCB[9 /*46*/].f_2 = 1;
	Global_9DCB[9 /*46*/].f_3[0] = 11;
	Global_9DCB[9 /*46*/].f_1E = 3;
	Global_9DCB[9 /*46*/].f_8[0] = 31;
	Global_9DCB[9 /*46*/].f_8[1] = 32;
	Global_9DCB[9 /*46*/].f_8[2] = 33;
	Global_9DCB[10 /*46*/].f_2D = 0;
	Global_9DCB[10 /*46*/].f_1F = 0;
	Global_9DCB[10 /*46*/].f_2A = 0;
	Global_9DCB[10 /*46*/].f_2B = 0;
	Global_9DCB[10 /*46*/].f_2 = 1;
	Global_9DCB[10 /*46*/].f_3[0] = 13;
	Global_9DCB[10 /*46*/].f_1E = 3;
	Global_9DCB[10 /*46*/].f_8[0] = 34;
	Global_9DCB[10 /*46*/].f_8[1] = 35;
	Global_9DCB[10 /*46*/].f_8[2] = 36;
	Global_9DCB[11 /*46*/].f_2D = 0;
	Global_9DCB[11 /*46*/].f_1F = 0;
	Global_9DCB[11 /*46*/].f_2A = 0;
	Global_9DCB[11 /*46*/].f_2B = 0;
	Global_9DCB[11 /*46*/].f_2 = 1;
	Global_9DCB[11 /*46*/].f_3[0] = 14;
	Global_9DCB[11 /*46*/].f_1E = 3;
	Global_9DCB[11 /*46*/].f_8[0] = 37;
	Global_9DCB[11 /*46*/].f_8[1] = 38;
	Global_9DCB[11 /*46*/].f_8[2] = 39;
	Global_9DCB[12 /*46*/].f_2D = 0;
	Global_9DCB[12 /*46*/].f_1F = 0;
	Global_9DCB[12 /*46*/].f_2A = 0;
	Global_9DCB[12 /*46*/].f_2B = 0;
	Global_9DCB[12 /*46*/].f_2 = 1;
	Global_9DCB[12 /*46*/].f_3[0] = 12;
	Global_9DCB[12 /*46*/].f_1E = 6;
	Global_9DCB[12 /*46*/].f_8[0] = 40;
	Global_9DCB[12 /*46*/].f_8[1] = 41;
	Global_9DCB[12 /*46*/].f_8[2] = 42;
	Global_9DCB[12 /*46*/].f_8[3] = 191;
	Global_9DCB[12 /*46*/].f_8[4] = 192;
	Global_9DCB[12 /*46*/].f_8[5] = 193;
	Global_9DCB[13 /*46*/].f_2D = 0;
	Global_9DCB[13 /*46*/].f_1F = 0;
	Global_9DCB[13 /*46*/].f_2A = 0;
	Global_9DCB[13 /*46*/].f_2B = 0;
	Global_9DCB[13 /*46*/].f_2 = 2;
	Global_9DCB[13 /*46*/].f_3[0] = 7;
	Global_9DCB[13 /*46*/].f_3[1] = 0;
	Global_9DCB[13 /*46*/].f_1E = 1;
	Global_9DCB[13 /*46*/].f_8[0] = 43;
	Global_9DCB[14 /*46*/].f_2D = 0;
	Global_9DCB[14 /*46*/].f_1F = 0;
	Global_9DCB[14 /*46*/].f_2A = 0;
	Global_9DCB[14 /*46*/].f_2B = 0;
	Global_9DCB[14 /*46*/].f_2 = 4;
	Global_9DCB[14 /*46*/].f_3[0] = 15;
	Global_9DCB[14 /*46*/].f_3[1] = 0;
	Global_9DCB[14 /*46*/].f_3[2] = 1;
	Global_9DCB[14 /*46*/].f_3[3] = 2;
	Global_9DCB[14 /*46*/].f_1E = 3;
	Global_9DCB[14 /*46*/].f_8[0] = 44;
	Global_9DCB[14 /*46*/].f_8[1] = 45;
	Global_9DCB[14 /*46*/].f_8[2] = 46;
	Global_9DCB[15 /*46*/].f_2D = 0;
	Global_9DCB[15 /*46*/].f_1F = 0;
	Global_9DCB[15 /*46*/].f_2A = 0;
	Global_9DCB[15 /*46*/].f_2B = 0;
	Global_9DCB[15 /*46*/].f_2 = 4;
	Global_9DCB[15 /*46*/].f_3[0] = 16;
	Global_9DCB[15 /*46*/].f_3[1] = 0;
	Global_9DCB[15 /*46*/].f_3[2] = 1;
	Global_9DCB[15 /*46*/].f_3[3] = 2;
	Global_9DCB[15 /*46*/].f_1E = 1;
	Global_9DCB[15 /*46*/].f_8[0] = 47;
	Global_9DCB[16 /*46*/].f_2D = 0;
	Global_9DCB[16 /*46*/].f_1F = 0;
	Global_9DCB[16 /*46*/].f_2A = 0;
	Global_9DCB[16 /*46*/].f_2B = 0;
	Global_9DCB[16 /*46*/].f_2 = 4;
	Global_9DCB[16 /*46*/].f_3[0] = 16;
	Global_9DCB[16 /*46*/].f_3[1] = 0;
	Global_9DCB[16 /*46*/].f_3[2] = 1;
	Global_9DCB[16 /*46*/].f_3[3] = 2;
	Global_9DCB[16 /*46*/].f_1E = 1;
	Global_9DCB[16 /*46*/].f_8[0] = 48;
	Global_9DCB[17 /*46*/].f_2D = 0;
	Global_9DCB[17 /*46*/].f_1F = 0;
	Global_9DCB[17 /*46*/].f_2A = 0;
	Global_9DCB[17 /*46*/].f_2B = 0;
	Global_9DCB[17 /*46*/].f_2 = 4;
	Global_9DCB[17 /*46*/].f_3[0] = 0;
	Global_9DCB[17 /*46*/].f_3[1] = 1;
	Global_9DCB[17 /*46*/].f_3[2] = 2;
	Global_9DCB[17 /*46*/].f_3[3] = 16;
	Global_9DCB[17 /*46*/].f_1E = 1;
	Global_9DCB[17 /*46*/].f_8[0] = 49;
	Global_9DCB[18 /*46*/].f_2D = 0;
	Global_9DCB[18 /*46*/].f_1F = 0;
	Global_9DCB[18 /*46*/].f_2A = 0;
	Global_9DCB[18 /*46*/].f_2B = 0;
	Global_9DCB[18 /*46*/].f_2 = 4;
	Global_9DCB[18 /*46*/].f_3[0] = 0;
	Global_9DCB[18 /*46*/].f_3[1] = 1;
	Global_9DCB[18 /*46*/].f_3[2] = 2;
	Global_9DCB[18 /*46*/].f_3[3] = 16;
	Global_9DCB[18 /*46*/].f_1E = 1;
	Global_9DCB[18 /*46*/].f_8[0] = 50;
	Global_9DCB[19 /*46*/].f_2D = 0;
	Global_9DCB[19 /*46*/].f_1F = 0;
	Global_9DCB[19 /*46*/].f_2A = 0;
	Global_9DCB[19 /*46*/].f_2B = 0;
	Global_9DCB[19 /*46*/].f_2 = 4;
	Global_9DCB[19 /*46*/].f_3[0] = 0;
	Global_9DCB[19 /*46*/].f_3[1] = 1;
	Global_9DCB[19 /*46*/].f_3[2] = 2;
	Global_9DCB[19 /*46*/].f_3[3] = 16;
	Global_9DCB[19 /*46*/].f_1E = 1;
	Global_9DCB[19 /*46*/].f_8[0] = 51;
	Global_9DCB[20 /*46*/].f_2D = 0;
	Global_9DCB[20 /*46*/].f_1F = 0;
	Global_9DCB[20 /*46*/].f_2A = 0;
	Global_9DCB[20 /*46*/].f_2B = 0;
	Global_9DCB[20 /*46*/].f_2 = 4;
	Global_9DCB[20 /*46*/].f_3[0] = 0;
	Global_9DCB[20 /*46*/].f_3[1] = 1;
	Global_9DCB[20 /*46*/].f_3[2] = 2;
	Global_9DCB[20 /*46*/].f_3[3] = 16;
	Global_9DCB[20 /*46*/].f_1E = 1;
	Global_9DCB[20 /*46*/].f_8[0] = 52;
	Global_9DCB[21 /*46*/].f_2D = 0;
	Global_9DCB[21 /*46*/].f_1F = 0;
	Global_9DCB[21 /*46*/].f_2A = 0;
	Global_9DCB[21 /*46*/].f_2B = 0;
	Global_9DCB[21 /*46*/].f_2 = 4;
	Global_9DCB[21 /*46*/].f_3[0] = 16;
	Global_9DCB[21 /*46*/].f_3[1] = 0;
	Global_9DCB[21 /*46*/].f_3[2] = 1;
	Global_9DCB[21 /*46*/].f_3[3] = 2;
	Global_9DCB[21 /*46*/].f_1E = 1;
	Global_9DCB[21 /*46*/].f_8[0] = 53;
	Global_9DCB[22 /*46*/].f_2D = 0;
	Global_9DCB[22 /*46*/].f_1F = 0;
	Global_9DCB[22 /*46*/].f_2A = 0;
	Global_9DCB[22 /*46*/].f_2B = 0;
	Global_9DCB[22 /*46*/].f_2 = 4;
	Global_9DCB[22 /*46*/].f_3[0] = 0;
	Global_9DCB[22 /*46*/].f_3[1] = 1;
	Global_9DCB[22 /*46*/].f_3[2] = 2;
	Global_9DCB[22 /*46*/].f_3[3] = 16;
	Global_9DCB[22 /*46*/].f_1E = 1;
	Global_9DCB[22 /*46*/].f_8[0] = 54;
	Global_9DCB[23 /*46*/].f_2D = 0;
	Global_9DCB[23 /*46*/].f_1F = 0;
	Global_9DCB[23 /*46*/].f_2A = 0;
	Global_9DCB[23 /*46*/].f_2B = 0;
	Global_9DCB[23 /*46*/].f_2 = 1;
	Global_9DCB[23 /*46*/].f_3[0] = 12;
	Global_9DCB[23 /*46*/].f_1E = 3;
	Global_9DCB[23 /*46*/].f_8[0] = 55;
	Global_9DCB[23 /*46*/].f_8[1] = 58;
	Global_9DCB[23 /*46*/].f_8[2] = 59;
	Global_9DCB[24 /*46*/].f_2D = 0;
	Global_9DCB[24 /*46*/].f_1F = 0;
	Global_9DCB[24 /*46*/].f_2A = 0;
	Global_9DCB[24 /*46*/].f_2B = 0;
	Global_9DCB[24 /*46*/].f_2 = 1;
	Global_9DCB[24 /*46*/].f_3[0] = 14;
	Global_9DCB[24 /*46*/].f_1E = 3;
	Global_9DCB[24 /*46*/].f_8[0] = 56;
	Global_9DCB[24 /*46*/].f_8[1] = 60;
	Global_9DCB[24 /*46*/].f_8[2] = 61;
	Global_9DCB[25 /*46*/].f_2D = 0;
	Global_9DCB[25 /*46*/].f_1F = 0;
	Global_9DCB[25 /*46*/].f_2A = 0;
	Global_9DCB[25 /*46*/].f_2B = 0;
	Global_9DCB[25 /*46*/].f_2 = 1;
	Global_9DCB[25 /*46*/].f_3[0] = 12;
	Global_9DCB[25 /*46*/].f_1E = 3;
	Global_9DCB[25 /*46*/].f_8[0] = 57;
	Global_9DCB[25 /*46*/].f_8[1] = 62;
	Global_9DCB[25 /*46*/].f_8[2] = 63;
	Global_9DCB[26 /*46*/].f_2D = 0;
	Global_9DCB[26 /*46*/].f_1F = 0;
	Global_9DCB[26 /*46*/].f_2A = 0;
	Global_9DCB[26 /*46*/].f_2B = 0;
	Global_9DCB[26 /*46*/].f_2 = 4;
	Global_9DCB[26 /*46*/].f_3[0] = 1;
	Global_9DCB[26 /*46*/].f_3[1] = 0;
	Global_9DCB[26 /*46*/].f_3[2] = 2;
	Global_9DCB[26 /*46*/].f_3[3] = 20;
	Global_9DCB[26 /*46*/].f_1E = 1;
	Global_9DCB[26 /*46*/].f_8[0] = 64;
	Global_9DCB[27 /*46*/].f_2D = 0;
	Global_9DCB[27 /*46*/].f_1F = 0;
	Global_9DCB[27 /*46*/].f_2A = 0;
	Global_9DCB[27 /*46*/].f_2B = 0;
	Global_9DCB[27 /*46*/].f_2 = 4;
	Global_9DCB[27 /*46*/].f_3[0] = 17;
	Global_9DCB[27 /*46*/].f_3[1] = 0;
	Global_9DCB[27 /*46*/].f_3[2] = 1;
	Global_9DCB[27 /*46*/].f_3[3] = 2;
	Global_9DCB[27 /*46*/].f_1E = 1;
	Global_9DCB[27 /*46*/].f_8[0] = 66;
	Global_9DCB[28 /*46*/].f_2D = 0;
	Global_9DCB[28 /*46*/].f_1F = 0;
	Global_9DCB[28 /*46*/].f_2A = 0;
	Global_9DCB[28 /*46*/].f_2B = 0;
	Global_9DCB[28 /*46*/].f_2 = 4;
	Global_9DCB[28 /*46*/].f_3[0] = 18;
	Global_9DCB[28 /*46*/].f_3[1] = 0;
	Global_9DCB[28 /*46*/].f_3[2] = 1;
	Global_9DCB[28 /*46*/].f_3[3] = 2;
	Global_9DCB[28 /*46*/].f_1E = 1;
	Global_9DCB[28 /*46*/].f_8[0] = 65;
	Global_9DCB[29 /*46*/].f_2D = 0;
	Global_9DCB[29 /*46*/].f_1F = 0;
	Global_9DCB[29 /*46*/].f_2A = 0;
	Global_9DCB[29 /*46*/].f_2B = 0;
	Global_9DCB[29 /*46*/].f_2 = 2;
	Global_9DCB[29 /*46*/].f_3[0] = 2;
	Global_9DCB[29 /*46*/].f_3[1] = 63;
	Global_9DCB[29 /*46*/].f_1E = 1;
	Global_9DCB[29 /*46*/].f_8[0] = 67;
	Global_9DCB[30 /*46*/].f_2D = 0;
	Global_9DCB[30 /*46*/].f_1F = 0;
	Global_9DCB[30 /*46*/].f_2A = 0;
	Global_9DCB[30 /*46*/].f_2B = 0;
	Global_9DCB[30 /*46*/].f_2 = 3;
	Global_9DCB[30 /*46*/].f_3[0] = 0;
	Global_9DCB[30 /*46*/].f_3[1] = 1;
	Global_9DCB[30 /*46*/].f_3[2] = 2;
	Global_9DCB[30 /*46*/].f_1E = 1;
	Global_9DCB[30 /*46*/].f_8[0] = 68;
	Global_9DCB[31 /*46*/].f_2D = 0;
	Global_9DCB[31 /*46*/].f_1F = 0;
	Global_9DCB[31 /*46*/].f_2A = 0;
	Global_9DCB[31 /*46*/].f_2B = 0;
	Global_9DCB[31 /*46*/].f_2 = 2;
	Global_9DCB[31 /*46*/].f_3[0] = 0;
	Global_9DCB[31 /*46*/].f_3[1] = 64;
	Global_9DCB[31 /*46*/].f_1E = 1;
	Global_9DCB[31 /*46*/].f_8[0] = 69;
	Global_9DCB[32 /*46*/].f_2D = 0;
	Global_9DCB[32 /*46*/].f_1F = 0;
	Global_9DCB[32 /*46*/].f_2A = 0;
	Global_9DCB[32 /*46*/].f_2B = 0;
	Global_9DCB[32 /*46*/].f_2 = 2;
	Global_9DCB[32 /*46*/].f_3[0] = 1;
	Global_9DCB[32 /*46*/].f_3[1] = 64;
	Global_9DCB[32 /*46*/].f_1E = 1;
	Global_9DCB[32 /*46*/].f_8[0] = 70;
	Global_9DCB[33 /*46*/].f_2D = 0;
	Global_9DCB[33 /*46*/].f_1F = 0;
	Global_9DCB[33 /*46*/].f_2A = 0;
	Global_9DCB[33 /*46*/].f_2B = 0;
	Global_9DCB[33 /*46*/].f_2 = 2;
	Global_9DCB[33 /*46*/].f_3[0] = 2;
	Global_9DCB[33 /*46*/].f_3[1] = 64;
	Global_9DCB[33 /*46*/].f_1E = 1;
	Global_9DCB[33 /*46*/].f_8[0] = 71;
	Global_9DCB[34 /*46*/].f_2D = 0;
	Global_9DCB[34 /*46*/].f_1F = 0;
	Global_9DCB[34 /*46*/].f_2A = 0;
	Global_9DCB[34 /*46*/].f_2B = 0;
	Global_9DCB[34 /*46*/].f_2 = 1;
	Global_9DCB[34 /*46*/].f_3[0] = 21;
	Global_9DCB[34 /*46*/].f_1E = 1;
	Global_9DCB[34 /*46*/].f_8[0] = 72;
	Global_9DCB[35 /*46*/].f_2D = 0;
	Global_9DCB[35 /*46*/].f_1F = 0;
	Global_9DCB[35 /*46*/].f_2A = 0;
	Global_9DCB[35 /*46*/].f_2B = 0;
	Global_9DCB[35 /*46*/].f_2 = 1;
	Global_9DCB[35 /*46*/].f_3[0] = 21;
	Global_9DCB[35 /*46*/].f_1E = 1;
	Global_9DCB[35 /*46*/].f_8[0] = 73;
	Global_9DCB[36 /*46*/].f_2D = 0;
	Global_9DCB[36 /*46*/].f_1F = 0;
	Global_9DCB[36 /*46*/].f_2A = 0;
	Global_9DCB[36 /*46*/].f_2B = 0;
	Global_9DCB[36 /*46*/].f_2 = 1;
	Global_9DCB[36 /*46*/].f_3[0] = 21;
	Global_9DCB[36 /*46*/].f_1E = 1;
	Global_9DCB[36 /*46*/].f_8[0] = 74;
	Global_9DCB[37 /*46*/].f_2D = 0;
	Global_9DCB[37 /*46*/].f_1F = 0;
	Global_9DCB[37 /*46*/].f_2A = 0;
	Global_9DCB[37 /*46*/].f_2B = 0;
	Global_9DCB[37 /*46*/].f_2 = 2;
	Global_9DCB[37 /*46*/].f_3[0] = 6;
	Global_9DCB[37 /*46*/].f_3[1] = 2;
	Global_9DCB[37 /*46*/].f_1E = 9;
	Global_9DCB[37 /*46*/].f_8[0] = 75;
	Global_9DCB[37 /*46*/].f_8[1] = 76;
	Global_9DCB[37 /*46*/].f_8[2] = 77;
	Global_9DCB[37 /*46*/].f_8[3] = 78;
	Global_9DCB[37 /*46*/].f_8[4] = 79;
	Global_9DCB[37 /*46*/].f_8[5] = 80;
	Global_9DCB[37 /*46*/].f_8[6] = 81;
	Global_9DCB[37 /*46*/].f_8[7] = 82;
	Global_9DCB[37 /*46*/].f_8[8] = 83;
	Global_9DCB[38 /*46*/].f_2D = 0;
	Global_9DCB[38 /*46*/].f_1F = 0;
	Global_9DCB[38 /*46*/].f_2A = 0;
	Global_9DCB[38 /*46*/].f_2B = 0;
	Global_9DCB[38 /*46*/].f_2 = 2;
	Global_9DCB[38 /*46*/].f_3[0] = 0;
	Global_9DCB[38 /*46*/].f_3[1] = 4;
	Global_9DCB[38 /*46*/].f_1E = 1;
	Global_9DCB[38 /*46*/].f_8[0] = 84;
	Global_9DCB[39 /*46*/].f_2D = 0;
	Global_9DCB[39 /*46*/].f_1F = 0;
	Global_9DCB[39 /*46*/].f_2A = 0;
	Global_9DCB[39 /*46*/].f_2B = 0;
	Global_9DCB[39 /*46*/].f_2 = 4;
	Global_9DCB[39 /*46*/].f_3[0] = 22;
	Global_9DCB[39 /*46*/].f_3[1] = 0;
	Global_9DCB[39 /*46*/].f_3[2] = 1;
	Global_9DCB[39 /*46*/].f_3[3] = 2;
	Global_9DCB[39 /*46*/].f_1E = 1;
	Global_9DCB[39 /*46*/].f_8[0] = 85;
	Global_9DCB[40 /*46*/].f_2D = 0;
	Global_9DCB[40 /*46*/].f_1F = 0;
	Global_9DCB[40 /*46*/].f_2A = 0;
	Global_9DCB[40 /*46*/].f_2B = 0;
	Global_9DCB[40 /*46*/].f_2 = 2;
	Global_9DCB[40 /*46*/].f_3[0] = 0;
	Global_9DCB[40 /*46*/].f_3[1] = 24;
	Global_9DCB[40 /*46*/].f_1E = 3;
	Global_9DCB[40 /*46*/].f_8[0] = 86;
	Global_9DCB[40 /*46*/].f_8[1] = 87;
	Global_9DCB[40 /*46*/].f_8[2] = 88;
	Global_9DCB[41 /*46*/].f_2D = 0;
	Global_9DCB[41 /*46*/].f_1F = 0;
	Global_9DCB[41 /*46*/].f_2A = 0;
	Global_9DCB[41 /*46*/].f_2B = 0;
	Global_9DCB[41 /*46*/].f_2 = 2;
	Global_9DCB[41 /*46*/].f_3[0] = 0;
	Global_9DCB[41 /*46*/].f_3[1] = 24;
	Global_9DCB[41 /*46*/].f_1E = 3;
	Global_9DCB[41 /*46*/].f_8[0] = 89;
	Global_9DCB[41 /*46*/].f_8[1] = 90;
	Global_9DCB[41 /*46*/].f_8[2] = 91;
	Global_9DCB[42 /*46*/].f_2D = 0;
	Global_9DCB[42 /*46*/].f_1F = 0;
	Global_9DCB[42 /*46*/].f_2A = 0;
	Global_9DCB[42 /*46*/].f_2B = 0;
	Global_9DCB[42 /*46*/].f_2 = 2;
	Global_9DCB[42 /*46*/].f_3[0] = 0;
	Global_9DCB[42 /*46*/].f_3[1] = 25;
	Global_9DCB[42 /*46*/].f_1E = 5;
	Global_9DCB[42 /*46*/].f_8[0] = 92;
	Global_9DCB[42 /*46*/].f_8[1] = 93;
	Global_9DCB[42 /*46*/].f_8[2] = 94;
	Global_9DCB[42 /*46*/].f_8[3] = 95;
	Global_9DCB[42 /*46*/].f_8[4] = 96;
	Global_9DCB[43 /*46*/].f_2D = 0;
	Global_9DCB[43 /*46*/].f_1F = 0;
	Global_9DCB[43 /*46*/].f_2A = 0;
	Global_9DCB[43 /*46*/].f_2B = 0;
	Global_9DCB[43 /*46*/].f_2 = 2;
	Global_9DCB[43 /*46*/].f_3[0] = 26;
	Global_9DCB[43 /*46*/].f_3[1] = 0;
	Global_9DCB[43 /*46*/].f_1E = 2;
	Global_9DCB[43 /*46*/].f_8[0] = 97;
	Global_9DCB[43 /*46*/].f_8[1] = 98;
	Global_9DCB[44 /*46*/].f_2D = 0;
	Global_9DCB[44 /*46*/].f_1F = 0;
	Global_9DCB[44 /*46*/].f_2A = 0;
	Global_9DCB[44 /*46*/].f_2B = 0;
	Global_9DCB[44 /*46*/].f_2 = 2;
	Global_9DCB[44 /*46*/].f_3[0] = 27;
	Global_9DCB[44 /*46*/].f_3[1] = 0;
	Global_9DCB[44 /*46*/].f_1E = 2;
	Global_9DCB[44 /*46*/].f_8[0] = 99;
	Global_9DCB[44 /*46*/].f_8[1] = 100;
	Global_9DCB[45 /*46*/].f_2D = 0;
	Global_9DCB[45 /*46*/].f_1F = 0;
	Global_9DCB[45 /*46*/].f_2A = 0;
	Global_9DCB[45 /*46*/].f_2B = 0;
	Global_9DCB[45 /*46*/].f_2 = 3;
	Global_9DCB[45 /*46*/].f_3[0] = 0;
	Global_9DCB[45 /*46*/].f_3[1] = 2;
	Global_9DCB[45 /*46*/].f_3[2] = 28;
	Global_9DCB[45 /*46*/].f_1E = 1;
	Global_9DCB[45 /*46*/].f_8[0] = 101;
	Global_9DCB[46 /*46*/].f_2D = 0;
	Global_9DCB[46 /*46*/].f_1F = 0;
	Global_9DCB[46 /*46*/].f_2A = 0;
	Global_9DCB[46 /*46*/].f_2B = 0;
	Global_9DCB[46 /*46*/].f_2 = 2;
	Global_9DCB[46 /*46*/].f_3[0] = 0;
	Global_9DCB[46 /*46*/].f_3[1] = 26;
	Global_9DCB[46 /*46*/].f_1E = 2;
	Global_9DCB[46 /*46*/].f_8[0] = 102;
	Global_9DCB[46 /*46*/].f_8[1] = 103;
	Global_9DCB[47 /*46*/].f_2D = 0;
	Global_9DCB[47 /*46*/].f_1F = 0;
	Global_9DCB[47 /*46*/].f_2A = 0;
	Global_9DCB[47 /*46*/].f_2B = 0;
	Global_9DCB[47 /*46*/].f_2 = 2;
	Global_9DCB[47 /*46*/].f_3[0] = 0;
	Global_9DCB[47 /*46*/].f_3[1] = 29;
	Global_9DCB[47 /*46*/].f_1E = 2;
	Global_9DCB[47 /*46*/].f_8[0] = 104;
	Global_9DCB[47 /*46*/].f_8[1] = 105;
	Global_9DCB[48 /*46*/].f_2D = 0;
	Global_9DCB[48 /*46*/].f_1F = 0;
	Global_9DCB[48 /*46*/].f_2A = 0;
	Global_9DCB[48 /*46*/].f_2B = 0;
	Global_9DCB[48 /*46*/].f_2 = 2;
	Global_9DCB[48 /*46*/].f_3[0] = 1;
	Global_9DCB[48 /*46*/].f_3[1] = 30;
	Global_9DCB[48 /*46*/].f_1E = 5;
	Global_9DCB[48 /*46*/].f_8[0] = 106;
	Global_9DCB[48 /*46*/].f_8[1] = 107;
	Global_9DCB[48 /*46*/].f_8[2] = 108;
	Global_9DCB[48 /*46*/].f_8[3] = 109;
	Global_9DCB[48 /*46*/].f_8[4] = 110;
	Global_9DCB[49 /*46*/].f_2D = 0;
	Global_9DCB[49 /*46*/].f_1F = 0;
	Global_9DCB[49 /*46*/].f_2A = 0;
	Global_9DCB[49 /*46*/].f_2B = 0;
	Global_9DCB[49 /*46*/].f_2 = 2;
	Global_9DCB[49 /*46*/].f_3[0] = 1;
	Global_9DCB[49 /*46*/].f_3[1] = 31;
	Global_9DCB[49 /*46*/].f_1E = 2;
	Global_9DCB[49 /*46*/].f_8[0] = 111;
	Global_9DCB[49 /*46*/].f_8[1] = 112;
	Global_9DCB[50 /*46*/].f_2D = 0;
	Global_9DCB[50 /*46*/].f_1F = 0;
	Global_9DCB[50 /*46*/].f_2A = 0;
	Global_9DCB[50 /*46*/].f_2B = 0;
	Global_9DCB[50 /*46*/].f_2 = 2;
	Global_9DCB[50 /*46*/].f_3[0] = 1;
	Global_9DCB[50 /*46*/].f_3[1] = 32;
	Global_9DCB[50 /*46*/].f_1E = 3;
	Global_9DCB[50 /*46*/].f_8[0] = 113;
	Global_9DCB[50 /*46*/].f_8[1] = 114;
	Global_9DCB[50 /*46*/].f_8[2] = 115;
	Global_9DCB[51 /*46*/].f_2D = 0;
	Global_9DCB[51 /*46*/].f_1F = 0;
	Global_9DCB[51 /*46*/].f_2A = 0;
	Global_9DCB[51 /*46*/].f_2B = 0;
	Global_9DCB[51 /*46*/].f_2 = 2;
	Global_9DCB[51 /*46*/].f_3[0] = 1;
	Global_9DCB[51 /*46*/].f_3[1] = 32;
	Global_9DCB[51 /*46*/].f_1E = 2;
	Global_9DCB[51 /*46*/].f_8[0] = 116;
	Global_9DCB[51 /*46*/].f_8[1] = 117;
	Global_9DCB[52 /*46*/].f_2D = 0;
	Global_9DCB[52 /*46*/].f_1F = 0;
	Global_9DCB[52 /*46*/].f_2A = 0;
	Global_9DCB[52 /*46*/].f_2B = 0;
	Global_9DCB[52 /*46*/].f_2 = 2;
	Global_9DCB[52 /*46*/].f_3[0] = 1;
	Global_9DCB[52 /*46*/].f_3[1] = 32;
	Global_9DCB[52 /*46*/].f_1E = 2;
	Global_9DCB[52 /*46*/].f_8[0] = 118;
	Global_9DCB[52 /*46*/].f_8[1] = 119;
	Global_9DCB[53 /*46*/].f_2D = 0;
	Global_9DCB[53 /*46*/].f_1F = 0;
	Global_9DCB[53 /*46*/].f_2A = 0;
	Global_9DCB[53 /*46*/].f_2B = 0;
	Global_9DCB[53 /*46*/].f_2 = 2;
	Global_9DCB[53 /*46*/].f_3[0] = 1;
	Global_9DCB[53 /*46*/].f_3[1] = 32;
	Global_9DCB[53 /*46*/].f_1E = 4;
	Global_9DCB[53 /*46*/].f_8[0] = 120;
	Global_9DCB[53 /*46*/].f_8[1] = 121;
	Global_9DCB[53 /*46*/].f_8[2] = 122;
	Global_9DCB[53 /*46*/].f_8[3] = 123;
	Global_9DCB[54 /*46*/].f_2D = 0;
	Global_9DCB[54 /*46*/].f_1F = 0;
	Global_9DCB[54 /*46*/].f_2A = 0;
	Global_9DCB[54 /*46*/].f_2B = 0;
	Global_9DCB[54 /*46*/].f_2 = 2;
	Global_9DCB[54 /*46*/].f_3[0] = 1;
	Global_9DCB[54 /*46*/].f_3[1] = 27;
	Global_9DCB[54 /*46*/].f_1E = 2;
	Global_9DCB[54 /*46*/].f_8[0] = 124;
	Global_9DCB[54 /*46*/].f_8[1] = 125;
	Global_9DCB[55 /*46*/].f_2D = 0;
	Global_9DCB[55 /*46*/].f_1F = 0;
	Global_9DCB[55 /*46*/].f_2A = 0;
	Global_9DCB[55 /*46*/].f_2B = 0;
	Global_9DCB[55 /*46*/].f_2 = 2;
	Global_9DCB[55 /*46*/].f_3[0] = 1;
	Global_9DCB[55 /*46*/].f_3[1] = 2;
	Global_9DCB[55 /*46*/].f_1E = 5;
	Global_9DCB[55 /*46*/].f_8[0] = 126;
	Global_9DCB[55 /*46*/].f_8[1] = 127;
	Global_9DCB[55 /*46*/].f_8[2] = 128;
	Global_9DCB[55 /*46*/].f_8[3] = 129;
	Global_9DCB[55 /*46*/].f_8[4] = 130;
	Global_9DCB[56 /*46*/].f_2D = 0;
	Global_9DCB[56 /*46*/].f_1F = 0;
	Global_9DCB[56 /*46*/].f_2A = 0;
	Global_9DCB[56 /*46*/].f_2B = 0;
	Global_9DCB[56 /*46*/].f_2 = 2;
	Global_9DCB[56 /*46*/].f_3[0] = 1;
	Global_9DCB[56 /*46*/].f_3[1] = 0;
	Global_9DCB[56 /*46*/].f_1E = 3;
	Global_9DCB[56 /*46*/].f_8[0] = 131;
	Global_9DCB[56 /*46*/].f_8[1] = 132;
	Global_9DCB[56 /*46*/].f_8[2] = 133;
	Global_9DCB[57 /*46*/].f_2D = 0;
	Global_9DCB[57 /*46*/].f_1F = 0;
	Global_9DCB[57 /*46*/].f_2A = 0;
	Global_9DCB[57 /*46*/].f_2B = 0;
	Global_9DCB[57 /*46*/].f_2 = 2;
	Global_9DCB[57 /*46*/].f_3[0] = 0;
	Global_9DCB[57 /*46*/].f_3[1] = 1;
	Global_9DCB[57 /*46*/].f_1E = 2;
	Global_9DCB[57 /*46*/].f_8[0] = 134;
	Global_9DCB[57 /*46*/].f_8[1] = 135;
	Global_9DCB[58 /*46*/].f_2D = 0;
	Global_9DCB[58 /*46*/].f_1F = 0;
	Global_9DCB[58 /*46*/].f_2A = 0;
	Global_9DCB[58 /*46*/].f_2B = 0;
	Global_9DCB[58 /*46*/].f_2 = 2;
	Global_9DCB[58 /*46*/].f_3[0] = 2;
	Global_9DCB[58 /*46*/].f_3[1] = 33;
	Global_9DCB[58 /*46*/].f_1E = 2;
	Global_9DCB[58 /*46*/].f_8[0] = 136;
	Global_9DCB[58 /*46*/].f_8[1] = 137;
	Global_9DCB[59 /*46*/].f_2D = 0;
	Global_9DCB[59 /*46*/].f_1F = 0;
	Global_9DCB[59 /*46*/].f_2A = 0;
	Global_9DCB[59 /*46*/].f_2B = 0;
	Global_9DCB[59 /*46*/].f_2 = 2;
	Global_9DCB[59 /*46*/].f_3[0] = 2;
	Global_9DCB[59 /*46*/].f_3[1] = 33;
	Global_9DCB[59 /*46*/].f_1E = 3;
	Global_9DCB[59 /*46*/].f_8[0] = 138;
	Global_9DCB[59 /*46*/].f_8[1] = 139;
	Global_9DCB[59 /*46*/].f_8[2] = 248;
	Global_9DCB[60 /*46*/].f_2D = 0;
	Global_9DCB[60 /*46*/].f_1F = 0;
	Global_9DCB[60 /*46*/].f_2A = 0;
	Global_9DCB[60 /*46*/].f_2B = 0;
	Global_9DCB[60 /*46*/].f_2 = 2;
	Global_9DCB[60 /*46*/].f_3[0] = 2;
	Global_9DCB[60 /*46*/].f_3[1] = 33;
	Global_9DCB[60 /*46*/].f_1E = 1;
	Global_9DCB[60 /*46*/].f_8[0] = 140;
	Global_9DCB[61 /*46*/].f_2D = 0;
	Global_9DCB[61 /*46*/].f_1F = 0;
	Global_9DCB[61 /*46*/].f_2A = 0;
	Global_9DCB[61 /*46*/].f_2B = 0;
	Global_9DCB[61 /*46*/].f_2 = 2;
	Global_9DCB[61 /*46*/].f_3[0] = 2;
	Global_9DCB[61 /*46*/].f_3[1] = 29;
	Global_9DCB[61 /*46*/].f_1E = 2;
	Global_9DCB[61 /*46*/].f_8[0] = 141;
	Global_9DCB[61 /*46*/].f_8[1] = 142;
	Global_9DCB[62 /*46*/].f_2D = 0;
	Global_9DCB[62 /*46*/].f_1F = 0;
	Global_9DCB[62 /*46*/].f_2A = 0;
	Global_9DCB[62 /*46*/].f_2B = 0;
	Global_9DCB[62 /*46*/].f_2 = 2;
	Global_9DCB[62 /*46*/].f_3[0] = 3;
	Global_9DCB[62 /*46*/].f_3[1] = 2;
	Global_9DCB[62 /*46*/].f_1E = 2;
	Global_9DCB[62 /*46*/].f_8[0] = 143;
	Global_9DCB[62 /*46*/].f_8[1] = 144;
	Global_9DCB[63 /*46*/].f_2D = 0;
	Global_9DCB[63 /*46*/].f_1F = 0;
	Global_9DCB[63 /*46*/].f_2A = 0;
	Global_9DCB[63 /*46*/].f_2B = 0;
	Global_9DCB[63 /*46*/].f_2 = 2;
	Global_9DCB[63 /*46*/].f_3[0] = 2;
	Global_9DCB[63 /*46*/].f_3[1] = 34;
	Global_9DCB[63 /*46*/].f_1E = 2;
	Global_9DCB[63 /*46*/].f_8[0] = 145;
	Global_9DCB[63 /*46*/].f_8[1] = 146;
	Global_9DCB[64 /*46*/].f_2D = 0;
	Global_9DCB[64 /*46*/].f_1F = 0;
	Global_9DCB[64 /*46*/].f_2A = 0;
	Global_9DCB[64 /*46*/].f_2B = 0;
	Global_9DCB[64 /*46*/].f_2 = 2;
	Global_9DCB[64 /*46*/].f_3[0] = 2;
	Global_9DCB[64 /*46*/].f_3[1] = 26;
	Global_9DCB[64 /*46*/].f_1E = 1;
	Global_9DCB[64 /*46*/].f_8[0] = 147;
	Global_9DCB[65 /*46*/].f_2D = 0;
	Global_9DCB[65 /*46*/].f_1F = 0;
	Global_9DCB[65 /*46*/].f_2A = 0;
	Global_9DCB[65 /*46*/].f_2B = 0;
	Global_9DCB[65 /*46*/].f_2 = 1;
	Global_9DCB[65 /*46*/].f_3[0] = 35;
	Global_9DCB[65 /*46*/].f_1E = 3;
	Global_9DCB[65 /*46*/].f_8[0] = 148;
	Global_9DCB[65 /*46*/].f_8[1] = 149;
	Global_9DCB[65 /*46*/].f_8[2] = 150;
	Global_9DCB[66 /*46*/].f_2D = 0;
	Global_9DCB[66 /*46*/].f_1F = 0;
	Global_9DCB[66 /*46*/].f_2A = 0;
	Global_9DCB[66 /*46*/].f_2B = 0;
	Global_9DCB[66 /*46*/].f_2 = 1;
	Global_9DCB[66 /*46*/].f_3[0] = 36;
	Global_9DCB[66 /*46*/].f_1E = 3;
	Global_9DCB[66 /*46*/].f_8[0] = 151;
	Global_9DCB[66 /*46*/].f_8[1] = 152;
	Global_9DCB[66 /*46*/].f_8[2] = 153;
	Global_9DCB[67 /*46*/].f_2D = 0;
	Global_9DCB[67 /*46*/].f_1F = 0;
	Global_9DCB[67 /*46*/].f_2A = 0;
	Global_9DCB[67 /*46*/].f_2B = 0;
	Global_9DCB[67 /*46*/].f_2 = 2;
	Global_9DCB[67 /*46*/].f_3[0] = 4;
	Global_9DCB[67 /*46*/].f_3[1] = 0;
	Global_9DCB[67 /*46*/].f_1E = 1;
	Global_9DCB[67 /*46*/].f_8[0] = 7;
	Global_9DCB[68 /*46*/].f_2D = 0;
	Global_9DCB[68 /*46*/].f_1F = 0;
	Global_9DCB[68 /*46*/].f_2A = 0;
	Global_9DCB[68 /*46*/].f_2B = 0;
	Global_9DCB[68 /*46*/].f_2 = 2;
	Global_9DCB[68 /*46*/].f_3[0] = 4;
	Global_9DCB[68 /*46*/].f_3[1] = 0;
	Global_9DCB[68 /*46*/].f_1E = 1;
	Global_9DCB[68 /*46*/].f_8[0] = 8;
	Global_9DCB[69 /*46*/].f_2D = 0;
	Global_9DCB[69 /*46*/].f_1F = 0;
	Global_9DCB[69 /*46*/].f_2A = 0;
	Global_9DCB[69 /*46*/].f_2B = 0;
	Global_9DCB[69 /*46*/].f_2 = 2;
	Global_9DCB[69 /*46*/].f_3[0] = 2;
	Global_9DCB[69 /*46*/].f_3[1] = 38;
	Global_9DCB[69 /*46*/].f_1E = 1;
	Global_9DCB[69 /*46*/].f_8[0] = 154;
	Global_9DCB[70 /*46*/].f_2D = 0;
	Global_9DCB[70 /*46*/].f_1F = 0;
	Global_9DCB[70 /*46*/].f_2A = 0;
	Global_9DCB[70 /*46*/].f_2B = 0;
	Global_9DCB[70 /*46*/].f_2 = 1;
	Global_9DCB[70 /*46*/].f_3[0] = 11;
	Global_9DCB[70 /*46*/].f_1E = 3;
	Global_9DCB[70 /*46*/].f_8[0] = 155;
	Global_9DCB[70 /*46*/].f_8[1] = 156;
	Global_9DCB[70 /*46*/].f_8[2] = 157;
	Global_9DCB[71 /*46*/].f_2D = 0;
	Global_9DCB[71 /*46*/].f_1F = 0;
	Global_9DCB[71 /*46*/].f_2A = 0;
	Global_9DCB[71 /*46*/].f_2B = 0;
	Global_9DCB[71 /*46*/].f_2 = 2;
	Global_9DCB[71 /*46*/].f_3[0] = 2;
	Global_9DCB[71 /*46*/].f_3[1] = 29;
	Global_9DCB[71 /*46*/].f_1E = 1;
	Global_9DCB[71 /*46*/].f_8[0] = 158;
	Global_9DCB[72 /*46*/].f_2D = 0;
	Global_9DCB[72 /*46*/].f_1F = 0;
	Global_9DCB[72 /*46*/].f_2A = 0;
	Global_9DCB[72 /*46*/].f_2B = 0;
	Global_9DCB[72 /*46*/].f_2 = 1;
	Global_9DCB[72 /*46*/].f_3[0] = 0;
	Global_9DCB[72 /*46*/].f_1E = 1;
	Global_9DCB[72 /*46*/].f_8[0] = 159;
	Global_9DCB[73 /*46*/].f_2D = 0;
	Global_9DCB[73 /*46*/].f_1F = 0;
	Global_9DCB[73 /*46*/].f_2A = 0;
	Global_9DCB[73 /*46*/].f_2B = 0;
	Global_9DCB[73 /*46*/].f_2 = 1;
	Global_9DCB[73 /*46*/].f_3[0] = 1;
	Global_9DCB[73 /*46*/].f_1E = 1;
	Global_9DCB[73 /*46*/].f_8[0] = 160;
	Global_9DCB[74 /*46*/].f_2D = 0;
	Global_9DCB[74 /*46*/].f_1F = 0;
	Global_9DCB[74 /*46*/].f_2A = 0;
	Global_9DCB[74 /*46*/].f_2B = 0;
	Global_9DCB[74 /*46*/].f_2 = 1;
	Global_9DCB[74 /*46*/].f_3[0] = 1;
	Global_9DCB[74 /*46*/].f_1E = 1;
	Global_9DCB[74 /*46*/].f_8[0] = 161;
	Global_9DCB[75 /*46*/].f_2D = 0;
	Global_9DCB[75 /*46*/].f_1F = 0;
	Global_9DCB[75 /*46*/].f_2A = 0;
	Global_9DCB[75 /*46*/].f_2B = 0;
	Global_9DCB[75 /*46*/].f_2 = 1;
	Global_9DCB[75 /*46*/].f_3[0] = 0;
	Global_9DCB[75 /*46*/].f_1E = 1;
	Global_9DCB[75 /*46*/].f_8[0] = 162;
	Global_9DCB[76 /*46*/].f_2D = 0;
	Global_9DCB[76 /*46*/].f_1F = 0;
	Global_9DCB[76 /*46*/].f_2A = 0;
	Global_9DCB[76 /*46*/].f_2B = 0;
	Global_9DCB[76 /*46*/].f_2 = 1;
	Global_9DCB[76 /*46*/].f_3[0] = 2;
	Global_9DCB[76 /*46*/].f_1E = 1;
	Global_9DCB[76 /*46*/].f_8[0] = 163;
	Global_9DCB[77 /*46*/].f_2D = 0;
	Global_9DCB[77 /*46*/].f_1F = 0;
	Global_9DCB[77 /*46*/].f_2A = 0;
	Global_9DCB[77 /*46*/].f_2B = 0;
	Global_9DCB[77 /*46*/].f_2 = 1;
	Global_9DCB[77 /*46*/].f_3[0] = 1;
	Global_9DCB[77 /*46*/].f_1E = 1;
	Global_9DCB[77 /*46*/].f_8[0] = 164;
	Global_9DCB[78 /*46*/].f_2D = 0;
	Global_9DCB[78 /*46*/].f_1F = 0;
	Global_9DCB[78 /*46*/].f_2A = 0;
	Global_9DCB[78 /*46*/].f_2B = 0;
	Global_9DCB[78 /*46*/].f_2 = 1;
	Global_9DCB[78 /*46*/].f_3[0] = 1;
	Global_9DCB[78 /*46*/].f_1E = 1;
	Global_9DCB[78 /*46*/].f_8[0] = 165;
	Global_9DCB[79 /*46*/].f_2D = 0;
	Global_9DCB[79 /*46*/].f_1F = 0;
	Global_9DCB[79 /*46*/].f_2A = 0;
	Global_9DCB[79 /*46*/].f_2B = 0;
	Global_9DCB[79 /*46*/].f_2 = 1;
	Global_9DCB[79 /*46*/].f_3[0] = 0;
	Global_9DCB[79 /*46*/].f_1E = 1;
	Global_9DCB[79 /*46*/].f_8[0] = 166;
	Global_9DCB[80 /*46*/].f_2D = 0;
	Global_9DCB[80 /*46*/].f_1F = 0;
	Global_9DCB[80 /*46*/].f_2A = 0;
	Global_9DCB[80 /*46*/].f_2B = 0;
	Global_9DCB[80 /*46*/].f_2 = 1;
	Global_9DCB[80 /*46*/].f_3[0] = 0;
	Global_9DCB[80 /*46*/].f_1E = 1;
	Global_9DCB[80 /*46*/].f_8[0] = 167;
	Global_9DCB[81 /*46*/].f_2D = 0;
	Global_9DCB[81 /*46*/].f_1F = 0;
	Global_9DCB[81 /*46*/].f_2A = 0;
	Global_9DCB[81 /*46*/].f_2B = 0;
	Global_9DCB[81 /*46*/].f_2 = 1;
	Global_9DCB[81 /*46*/].f_3[0] = 0;
	Global_9DCB[81 /*46*/].f_1E = 1;
	Global_9DCB[81 /*46*/].f_8[0] = 168;
	Global_9DCB[82 /*46*/].f_2D = 0;
	Global_9DCB[82 /*46*/].f_1F = 0;
	Global_9DCB[82 /*46*/].f_2A = 0;
	Global_9DCB[82 /*46*/].f_2B = 0;
	Global_9DCB[82 /*46*/].f_2 = 1;
	Global_9DCB[82 /*46*/].f_3[0] = 2;
	Global_9DCB[82 /*46*/].f_1E = 1;
	Global_9DCB[82 /*46*/].f_8[0] = 169;
	Global_9DCB[83 /*46*/].f_2D = 0;
	Global_9DCB[83 /*46*/].f_1F = 0;
	Global_9DCB[83 /*46*/].f_2A = 0;
	Global_9DCB[83 /*46*/].f_2B = 0;
	Global_9DCB[83 /*46*/].f_2 = 1;
	Global_9DCB[83 /*46*/].f_3[0] = 1;
	Global_9DCB[83 /*46*/].f_1E = 1;
	Global_9DCB[83 /*46*/].f_8[0] = 170;
	Global_9DCB[84 /*46*/].f_2D = 0;
	Global_9DCB[84 /*46*/].f_1F = 0;
	Global_9DCB[84 /*46*/].f_2A = 0;
	Global_9DCB[84 /*46*/].f_2B = 0;
	Global_9DCB[84 /*46*/].f_2 = 1;
	Global_9DCB[84 /*46*/].f_3[0] = 1;
	Global_9DCB[84 /*46*/].f_1E = 1;
	Global_9DCB[84 /*46*/].f_8[0] = 171;
	Global_9DCB[85 /*46*/].f_2D = 0;
	Global_9DCB[85 /*46*/].f_1F = 0;
	Global_9DCB[85 /*46*/].f_2A = 0;
	Global_9DCB[85 /*46*/].f_2B = 0;
	Global_9DCB[85 /*46*/].f_2 = 1;
	Global_9DCB[85 /*46*/].f_3[0] = 0;
	Global_9DCB[85 /*46*/].f_1E = 1;
	Global_9DCB[85 /*46*/].f_8[0] = 172;
	Global_9DCB[86 /*46*/].f_2D = 0;
	Global_9DCB[86 /*46*/].f_1F = 0;
	Global_9DCB[86 /*46*/].f_2A = 0;
	Global_9DCB[86 /*46*/].f_2B = 0;
	Global_9DCB[86 /*46*/].f_2 = 1;
	Global_9DCB[86 /*46*/].f_3[0] = 2;
	Global_9DCB[86 /*46*/].f_1E = 1;
	Global_9DCB[86 /*46*/].f_8[0] = 173;
	Global_9DCB[87 /*46*/].f_2D = 0;
	Global_9DCB[87 /*46*/].f_1F = 0;
	Global_9DCB[87 /*46*/].f_2A = 0;
	Global_9DCB[87 /*46*/].f_2B = 0;
	Global_9DCB[87 /*46*/].f_2 = 1;
	Global_9DCB[87 /*46*/].f_3[0] = 1;
	Global_9DCB[87 /*46*/].f_1E = 1;
	Global_9DCB[87 /*46*/].f_8[0] = 174;
	Global_9DCB[88 /*46*/].f_2D = 0;
	Global_9DCB[88 /*46*/].f_1F = 0;
	Global_9DCB[88 /*46*/].f_2A = 0;
	Global_9DCB[88 /*46*/].f_2B = 0;
	Global_9DCB[88 /*46*/].f_2 = 1;
	Global_9DCB[88 /*46*/].f_3[0] = 0;
	Global_9DCB[88 /*46*/].f_1E = 1;
	Global_9DCB[88 /*46*/].f_8[0] = 175;
	Global_9DCB[89 /*46*/].f_2D = 0;
	Global_9DCB[89 /*46*/].f_1F = 0;
	Global_9DCB[89 /*46*/].f_2A = 0;
	Global_9DCB[89 /*46*/].f_2B = 0;
	Global_9DCB[89 /*46*/].f_2 = 1;
	Global_9DCB[89 /*46*/].f_3[0] = 2;
	Global_9DCB[89 /*46*/].f_1E = 1;
	Global_9DCB[89 /*46*/].f_8[0] = 176;
	Global_9DCB[90 /*46*/].f_2D = 0;
	Global_9DCB[90 /*46*/].f_1F = 0;
	Global_9DCB[90 /*46*/].f_2A = 0;
	Global_9DCB[90 /*46*/].f_2B = 0;
	Global_9DCB[90 /*46*/].f_2 = 1;
	Global_9DCB[90 /*46*/].f_3[0] = 1;
	Global_9DCB[90 /*46*/].f_1E = 1;
	Global_9DCB[90 /*46*/].f_8[0] = 177;
	Global_9DCB[91 /*46*/].f_2D = 0;
	Global_9DCB[91 /*46*/].f_1F = 0;
	Global_9DCB[91 /*46*/].f_2A = 0;
	Global_9DCB[91 /*46*/].f_2B = 0;
	Global_9DCB[91 /*46*/].f_2 = 1;
	Global_9DCB[91 /*46*/].f_3[0] = 0;
	Global_9DCB[91 /*46*/].f_1E = 1;
	Global_9DCB[91 /*46*/].f_8[0] = 179;
	Global_9DCB[92 /*46*/].f_2D = 0;
	Global_9DCB[92 /*46*/].f_1F = 0;
	Global_9DCB[92 /*46*/].f_2A = 0;
	Global_9DCB[92 /*46*/].f_2B = 0;
	Global_9DCB[92 /*46*/].f_2 = 1;
	Global_9DCB[92 /*46*/].f_3[0] = 2;
	Global_9DCB[92 /*46*/].f_1E = 1;
	Global_9DCB[92 /*46*/].f_8[0] = 178;
	Global_9DCB[93 /*46*/].f_2D = 0;
	Global_9DCB[93 /*46*/].f_1F = 0;
	Global_9DCB[93 /*46*/].f_2A = 0;
	Global_9DCB[93 /*46*/].f_2B = 0;
	Global_9DCB[93 /*46*/].f_2 = 1;
	Global_9DCB[93 /*46*/].f_3[0] = 1;
	Global_9DCB[93 /*46*/].f_1E = 1;
	Global_9DCB[93 /*46*/].f_8[0] = 180;
	Global_9DCB[94 /*46*/].f_2D = 0;
	Global_9DCB[94 /*46*/].f_1F = 0;
	Global_9DCB[94 /*46*/].f_2A = 0;
	Global_9DCB[94 /*46*/].f_2B = 0;
	Global_9DCB[94 /*46*/].f_2 = 2;
	Global_9DCB[94 /*46*/].f_3[0] = 4;
	Global_9DCB[94 /*46*/].f_3[1] = 0;
	Global_9DCB[94 /*46*/].f_1E = 1;
	Global_9DCB[94 /*46*/].f_8[0] = 181;
	Global_9DCB[95 /*46*/].f_2D = 0;
	Global_9DCB[95 /*46*/].f_1F = 0;
	Global_9DCB[95 /*46*/].f_2A = 0;
	Global_9DCB[95 /*46*/].f_2B = 0;
	Global_9DCB[95 /*46*/].f_2 = 1;
	Global_9DCB[95 /*46*/].f_3[0] = 37;
	Global_9DCB[95 /*46*/].f_1E = 1;
	Global_9DCB[95 /*46*/].f_8[0] = 182;
	Global_9DCB[96 /*46*/].f_2D = 0;
	Global_9DCB[96 /*46*/].f_1F = 0;
	Global_9DCB[96 /*46*/].f_2A = 0;
	Global_9DCB[96 /*46*/].f_2B = 0;
	Global_9DCB[96 /*46*/].f_2 = 1;
	Global_9DCB[96 /*46*/].f_3[0] = 37;
	Global_9DCB[96 /*46*/].f_1E = 1;
	Global_9DCB[96 /*46*/].f_8[0] = 183;
	Global_9DCB[97 /*46*/].f_2D = 0;
	Global_9DCB[97 /*46*/].f_1F = 0;
	Global_9DCB[97 /*46*/].f_2A = 0;
	Global_9DCB[97 /*46*/].f_2B = 0;
	Global_9DCB[97 /*46*/].f_2 = 1;
	Global_9DCB[97 /*46*/].f_3[0] = 37;
	Global_9DCB[97 /*46*/].f_1E = 1;
	Global_9DCB[97 /*46*/].f_8[0] = 184;
	Global_9DCB[98 /*46*/].f_2D = 0;
	Global_9DCB[98 /*46*/].f_1F = 0;
	Global_9DCB[98 /*46*/].f_2A = 0;
	Global_9DCB[98 /*46*/].f_2B = 0;
	Global_9DCB[98 /*46*/].f_2 = 1;
	Global_9DCB[98 /*46*/].f_3[0] = 54;
	Global_9DCB[98 /*46*/].f_1E = 3;
	Global_9DCB[98 /*46*/].f_8[0] = 185;
	Global_9DCB[98 /*46*/].f_8[1] = 186;
	Global_9DCB[98 /*46*/].f_8[2] = 188;
	Global_9DCB[99 /*46*/].f_2D = 0;
	Global_9DCB[99 /*46*/].f_1F = 0;
	Global_9DCB[99 /*46*/].f_2A = 0;
	Global_9DCB[99 /*46*/].f_2B = 0;
	Global_9DCB[99 /*46*/].f_2 = 1;
	Global_9DCB[99 /*46*/].f_3[0] = 55;
	Global_9DCB[99 /*46*/].f_1E = 3;
	Global_9DCB[99 /*46*/].f_8[0] = 187;
	Global_9DCB[99 /*46*/].f_8[1] = 189;
	Global_9DCB[99 /*46*/].f_8[2] = 190;
	Global_9DCB[100 /*46*/].f_2D = 0;
	Global_9DCB[100 /*46*/].f_1F = 0;
	Global_9DCB[100 /*46*/].f_2A = 0;
	Global_9DCB[100 /*46*/].f_2B = 0;
	Global_9DCB[100 /*46*/].f_2 = 3;
	Global_9DCB[100 /*46*/].f_3[0] = 56;
	Global_9DCB[100 /*46*/].f_3[1] = 0;
	Global_9DCB[100 /*46*/].f_3[2] = 2;
	Global_9DCB[100 /*46*/].f_1E = 5;
	Global_9DCB[100 /*46*/].f_8[0] = 194;
	Global_9DCB[100 /*46*/].f_8[1] = 195;
	Global_9DCB[100 /*46*/].f_8[2] = 196;
	Global_9DCB[100 /*46*/].f_8[3] = 197;
	Global_9DCB[100 /*46*/].f_8[4] = 198;
	Global_9DCB[101 /*46*/].f_2D = 0;
	Global_9DCB[101 /*46*/].f_1F = 0;
	Global_9DCB[101 /*46*/].f_2A = 0;
	Global_9DCB[101 /*46*/].f_2B = 0;
	Global_9DCB[101 /*46*/].f_2 = 2;
	Global_9DCB[101 /*46*/].f_3[0] = 57;
	Global_9DCB[101 /*46*/].f_3[1] = 0;
	Global_9DCB[101 /*46*/].f_1E = 8;
	Global_9DCB[101 /*46*/].f_8[0] = 199;
	Global_9DCB[101 /*46*/].f_8[1] = 200;
	Global_9DCB[101 /*46*/].f_8[2] = 201;
	Global_9DCB[101 /*46*/].f_8[3] = 202;
	Global_9DCB[101 /*46*/].f_8[4] = 203;
	Global_9DCB[101 /*46*/].f_8[5] = 204;
	Global_9DCB[101 /*46*/].f_8[6] = 205;
	Global_9DCB[101 /*46*/].f_8[7] = 206;
	Global_9DCB[102 /*46*/].f_2D = 0;
	Global_9DCB[102 /*46*/].f_1F = 0;
	Global_9DCB[102 /*46*/].f_2A = 0;
	Global_9DCB[102 /*46*/].f_2B = 0;
	Global_9DCB[102 /*46*/].f_2 = 2;
	Global_9DCB[102 /*46*/].f_3[0] = 58;
	Global_9DCB[102 /*46*/].f_3[1] = 0;
	Global_9DCB[102 /*46*/].f_1E = 7;
	Global_9DCB[102 /*46*/].f_8[0] = 207;
	Global_9DCB[102 /*46*/].f_8[1] = 208;
	Global_9DCB[102 /*46*/].f_8[2] = 209;
	Global_9DCB[102 /*46*/].f_8[3] = 210;
	Global_9DCB[102 /*46*/].f_8[4] = 211;
	Global_9DCB[102 /*46*/].f_8[5] = 212;
	Global_9DCB[102 /*46*/].f_8[6] = 213;
	Global_9DCB[103 /*46*/].f_2D = 0;
	Global_9DCB[103 /*46*/].f_1F = 0;
	Global_9DCB[103 /*46*/].f_2A = 0;
	Global_9DCB[103 /*46*/].f_2B = 0;
	Global_9DCB[103 /*46*/].f_2 = 2;
	Global_9DCB[103 /*46*/].f_3[0] = 59;
	Global_9DCB[103 /*46*/].f_3[1] = 0;
	Global_9DCB[103 /*46*/].f_1E = 8;
	Global_9DCB[103 /*46*/].f_8[0] = 214;
	Global_9DCB[103 /*46*/].f_8[1] = 215;
	Global_9DCB[103 /*46*/].f_8[2] = 216;
	Global_9DCB[103 /*46*/].f_8[3] = 217;
	Global_9DCB[103 /*46*/].f_8[4] = 218;
	Global_9DCB[103 /*46*/].f_8[5] = 219;
	Global_9DCB[103 /*46*/].f_8[6] = 220;
	Global_9DCB[103 /*46*/].f_8[7] = 221;
	Global_9DCB[104 /*46*/].f_2D = 0;
	Global_9DCB[104 /*46*/].f_1F = 0;
	Global_9DCB[104 /*46*/].f_2A = 0;
	Global_9DCB[104 /*46*/].f_2B = 0;
	Global_9DCB[104 /*46*/].f_2 = 2;
	Global_9DCB[104 /*46*/].f_3[0] = 60;
	Global_9DCB[104 /*46*/].f_3[1] = 2;
	Global_9DCB[104 /*46*/].f_1E = 7;
	Global_9DCB[104 /*46*/].f_8[0] = 222;
	Global_9DCB[104 /*46*/].f_8[1] = 223;
	Global_9DCB[104 /*46*/].f_8[2] = 224;
	Global_9DCB[104 /*46*/].f_8[3] = 225;
	Global_9DCB[104 /*46*/].f_8[4] = 226;
	Global_9DCB[104 /*46*/].f_8[5] = 227;
	Global_9DCB[104 /*46*/].f_8[6] = 228;
	Global_9DCB[105 /*46*/].f_2D = 0;
	Global_9DCB[105 /*46*/].f_1F = 0;
	Global_9DCB[105 /*46*/].f_2A = 0;
	Global_9DCB[105 /*46*/].f_2B = 0;
	Global_9DCB[105 /*46*/].f_2 = 2;
	Global_9DCB[105 /*46*/].f_3[0] = 61;
	Global_9DCB[105 /*46*/].f_3[1] = 2;
	Global_9DCB[105 /*46*/].f_1E = 6;
	Global_9DCB[105 /*46*/].f_8[0] = 229;
	Global_9DCB[105 /*46*/].f_8[1] = 230;
	Global_9DCB[105 /*46*/].f_8[2] = 231;
	Global_9DCB[105 /*46*/].f_8[3] = 232;
	Global_9DCB[105 /*46*/].f_8[4] = 233;
	Global_9DCB[105 /*46*/].f_8[5] = 234;
	Global_9DCB[106 /*46*/].f_2D = 0;
	Global_9DCB[106 /*46*/].f_1F = 0;
	Global_9DCB[106 /*46*/].f_2A = 0;
	Global_9DCB[106 /*46*/].f_2B = 0;
	Global_9DCB[106 /*46*/].f_2 = 2;
	Global_9DCB[106 /*46*/].f_3[0] = 62;
	Global_9DCB[106 /*46*/].f_3[1] = 2;
	Global_9DCB[106 /*46*/].f_1E = 6;
	Global_9DCB[106 /*46*/].f_8[0] = 235;
	Global_9DCB[106 /*46*/].f_8[1] = 236;
	Global_9DCB[106 /*46*/].f_8[2] = 237;
	Global_9DCB[106 /*46*/].f_8[3] = 238;
	Global_9DCB[106 /*46*/].f_8[4] = 239;
	Global_9DCB[106 /*46*/].f_8[5] = 240;
	Global_9DCB[107 /*46*/].f_2D = 0;
	Global_9DCB[107 /*46*/].f_1F = 0;
	Global_9DCB[107 /*46*/].f_2A = 0;
	Global_9DCB[107 /*46*/].f_2B = 0;
	Global_9DCB[107 /*46*/].f_2 = 1;
	Global_9DCB[107 /*46*/].f_3[0] = 36;
	Global_9DCB[107 /*46*/].f_1E = 1;
	Global_9DCB[107 /*46*/].f_8[0] = 241;
	Global_9DCB[108 /*46*/].f_2D = 0;
	Global_9DCB[108 /*46*/].f_1F = 0;
	Global_9DCB[108 /*46*/].f_2A = 0;
	Global_9DCB[108 /*46*/].f_2B = 0;
	Global_9DCB[108 /*46*/].f_2 = 1;
	Global_9DCB[108 /*46*/].f_3[0] = 36;
	Global_9DCB[108 /*46*/].f_1E = 1;
	Global_9DCB[108 /*46*/].f_8[0] = 242;
	Global_9DCB[109 /*46*/].f_2D = 0;
	Global_9DCB[109 /*46*/].f_1F = 0;
	Global_9DCB[109 /*46*/].f_2A = 0;
	Global_9DCB[109 /*46*/].f_2B = 0;
	Global_9DCB[109 /*46*/].f_2 = 1;
	Global_9DCB[109 /*46*/].f_3[0] = 36;
	Global_9DCB[109 /*46*/].f_1E = 1;
	Global_9DCB[109 /*46*/].f_8[0] = 243;
	Global_9DCB[110 /*46*/].f_2D = 0;
	Global_9DCB[110 /*46*/].f_1F = 0;
	Global_9DCB[110 /*46*/].f_2A = 0;
	Global_9DCB[110 /*46*/].f_2B = 0;
	Global_9DCB[110 /*46*/].f_2 = 1;
	Global_9DCB[110 /*46*/].f_3[0] = 65;
	Global_9DCB[110 /*46*/].f_1E = 1;
	Global_9DCB[110 /*46*/].f_8[0] = 244;
	Global_9DCB[111 /*46*/].f_2D = 0;
	Global_9DCB[111 /*46*/].f_1F = 0;
	Global_9DCB[111 /*46*/].f_2A = 0;
	Global_9DCB[111 /*46*/].f_2B = 0;
	Global_9DCB[111 /*46*/].f_2 = 1;
	Global_9DCB[111 /*46*/].f_3[0] = 65;
	Global_9DCB[111 /*46*/].f_1E = 1;
	Global_9DCB[111 /*46*/].f_8[0] = 245;
	Global_9DCB[112 /*46*/].f_2D = 0;
	Global_9DCB[112 /*46*/].f_1F = 0;
	Global_9DCB[112 /*46*/].f_2A = 0;
	Global_9DCB[112 /*46*/].f_2B = 0;
	Global_9DCB[112 /*46*/].f_2 = 1;
	Global_9DCB[112 /*46*/].f_3[0] = 65;
	Global_9DCB[112 /*46*/].f_1E = 1;
	Global_9DCB[112 /*46*/].f_8[0] = 246;
	Global_9DCB[113 /*46*/].f_2D = 0;
	Global_9DCB[113 /*46*/].f_1F = 0;
	Global_9DCB[113 /*46*/].f_2A = 0;
	Global_9DCB[113 /*46*/].f_2B = 0;
	Global_9DCB[113 /*46*/].f_2 = 1;
	Global_9DCB[113 /*46*/].f_3[0] = 65;
	Global_9DCB[113 /*46*/].f_1E = 1;
	Global_9DCB[113 /*46*/].f_8[0] = 247;
	Global_9DCB[114 /*46*/].f_2D = 0;
	Global_9DCB[114 /*46*/].f_1F = 0;
	Global_9DCB[114 /*46*/].f_2A = 0;
	Global_9DCB[114 /*46*/].f_2B = 0;
	Global_9DCB[114 /*46*/].f_2 = 2;
	Global_9DCB[114 /*46*/].f_3[0] = 19;
	Global_9DCB[114 /*46*/].f_3[1] = 1;
	Global_9DCB[114 /*46*/].f_1E = 21;
	Global_9DCB[114 /*46*/].f_8[0] = 249;
	Global_9DCB[114 /*46*/].f_8[1] = 250;
	Global_9DCB[114 /*46*/].f_8[2] = 251;
	Global_9DCB[114 /*46*/].f_8[3] = 252;
	Global_9DCB[114 /*46*/].f_8[4] = 253;
	Global_9DCB[114 /*46*/].f_8[5] = 254;
	Global_9DCB[114 /*46*/].f_8[6] = 255;
	Global_9DCB[114 /*46*/].f_8[7] = 256;
	Global_9DCB[114 /*46*/].f_8[8] = 257;
	Global_9DCB[114 /*46*/].f_8[9] = 258;
	Global_9DCB[114 /*46*/].f_8[10] = 259;
	Global_9DCB[114 /*46*/].f_8[11] = 260;
	Global_9DCB[114 /*46*/].f_8[12] = 261;
	Global_9DCB[114 /*46*/].f_8[13] = 262;
	Global_9DCB[114 /*46*/].f_8[14] = 263;
	Global_9DCB[114 /*46*/].f_8[15] = 264;
	Global_9DCB[114 /*46*/].f_8[16] = 265;
	Global_9DCB[114 /*46*/].f_8[17] = 266;
	Global_9DCB[114 /*46*/].f_8[18] = 267;
	Global_9DCB[114 /*46*/].f_8[19] = 268;
	Global_9DCB[114 /*46*/].f_8[20] = 269;
	Global_9DCB[115 /*46*/].f_2D = 0;
	Global_9DCB[115 /*46*/].f_1F = 0;
	Global_9DCB[115 /*46*/].f_2A = 0;
	Global_9DCB[115 /*46*/].f_2B = 0;
	Global_9DCB[115 /*46*/].f_2 = 4;
	Global_9DCB[115 /*46*/].f_3[0] = 0;
	Global_9DCB[115 /*46*/].f_3[1] = 1;
	Global_9DCB[115 /*46*/].f_3[2] = 2;
	Global_9DCB[115 /*46*/].f_3[3] = 16;
	Global_9DCB[115 /*46*/].f_1E = 1;
	Global_9DCB[115 /*46*/].f_8[0] = 270;
	Global_9DCB[116 /*46*/].f_2D = 0;
	Global_9DCB[116 /*46*/].f_1F = 0;
	Global_9DCB[116 /*46*/].f_2A = 0;
	Global_9DCB[116 /*46*/].f_2B = 0;
	Global_9DCB[116 /*46*/].f_2 = 4;
	Global_9DCB[116 /*46*/].f_3[0] = 0;
	Global_9DCB[116 /*46*/].f_3[1] = 1;
	Global_9DCB[116 /*46*/].f_3[2] = 2;
	Global_9DCB[116 /*46*/].f_3[3] = 16;
	Global_9DCB[116 /*46*/].f_1E = 1;
	Global_9DCB[116 /*46*/].f_8[0] = 271;
	Global_9DCB[117 /*46*/].f_2D = 0;
	Global_9DCB[117 /*46*/].f_1F = 0;
	Global_9DCB[117 /*46*/].f_2A = 0;
	Global_9DCB[117 /*46*/].f_2B = 0;
	Global_9DCB[117 /*46*/].f_2 = 4;
	Global_9DCB[117 /*46*/].f_3[0] = 0;
	Global_9DCB[117 /*46*/].f_3[1] = 1;
	Global_9DCB[117 /*46*/].f_3[2] = 2;
	Global_9DCB[117 /*46*/].f_3[3] = 16;
	Global_9DCB[117 /*46*/].f_1E = 1;
	Global_9DCB[117 /*46*/].f_8[0] = 272;
	Global_9DCB[118 /*46*/].f_2D = 0;
	Global_9DCB[118 /*46*/].f_1F = 0;
	Global_9DCB[118 /*46*/].f_2A = 0;
	Global_9DCB[118 /*46*/].f_2B = 0;
	Global_9DCB[118 /*46*/].f_2 = 4;
	Global_9DCB[118 /*46*/].f_3[0] = 0;
	Global_9DCB[118 /*46*/].f_3[1] = 1;
	Global_9DCB[118 /*46*/].f_3[2] = 2;
	Global_9DCB[118 /*46*/].f_3[3] = 16;
	Global_9DCB[118 /*46*/].f_1E = 1;
	Global_9DCB[118 /*46*/].f_8[0] = 273;
	Global_9DCB[119 /*46*/].f_2D = 0;
	Global_9DCB[119 /*46*/].f_1F = 0;
	Global_9DCB[119 /*46*/].f_2A = 0;
	Global_9DCB[119 /*46*/].f_2B = 0;
	Global_9DCB[119 /*46*/].f_2 = 4;
	Global_9DCB[119 /*46*/].f_3[0] = 0;
	Global_9DCB[119 /*46*/].f_3[1] = 1;
	Global_9DCB[119 /*46*/].f_3[2] = 2;
	Global_9DCB[119 /*46*/].f_3[3] = 16;
	Global_9DCB[119 /*46*/].f_1E = 1;
	Global_9DCB[119 /*46*/].f_8[0] = 274;
	Global_9DCB[120 /*46*/].f_2D = 0;
	Global_9DCB[120 /*46*/].f_1F = 0;
	Global_9DCB[120 /*46*/].f_2A = 0;
	Global_9DCB[120 /*46*/].f_2B = 0;
	Global_9DCB[120 /*46*/].f_2 = 4;
	Global_9DCB[120 /*46*/].f_3[0] = 0;
	Global_9DCB[120 /*46*/].f_3[1] = 1;
	Global_9DCB[120 /*46*/].f_3[2] = 2;
	Global_9DCB[120 /*46*/].f_3[3] = 16;
	Global_9DCB[120 /*46*/].f_1E = 1;
	Global_9DCB[120 /*46*/].f_8[0] = 275;
	Global_9DCB[121 /*46*/].f_2D = 0;
	Global_9DCB[121 /*46*/].f_1F = 0;
	Global_9DCB[121 /*46*/].f_2A = 0;
	Global_9DCB[121 /*46*/].f_2B = 0;
	Global_9DCB[121 /*46*/].f_2 = 4;
	Global_9DCB[121 /*46*/].f_3[0] = 0;
	Global_9DCB[121 /*46*/].f_3[1] = 1;
	Global_9DCB[121 /*46*/].f_3[2] = 2;
	Global_9DCB[121 /*46*/].f_3[3] = 16;
	Global_9DCB[121 /*46*/].f_1E = 1;
	Global_9DCB[121 /*46*/].f_8[0] = 276;
}

void func_67()//Position - 0xE7D7
{
	unk_0x95E4B6F3ED223F5A();
}

