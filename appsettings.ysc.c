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
	int iLocal_18[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	var uLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	bool bLocal_36 = 0;
	int iLocal_37 = 0;
	float fLocal_38 = 0f;
	float fLocal_39 = 0f;
	float fLocal_40 = 0f;
	float fLocal_41 = 0f;
	int iLocal_42 = 0;
	float fLocal_43 = 0f;
	float fLocal_44 = 0f;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
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
	fLocal_38 = 0.82f;
	fLocal_39 = 0.42f;
	fLocal_40 = 0f;
	fLocal_41 = 0f;
	unk_0xC1A27D367CCA8C15();
	func_45(Global_388A, "SET_DATA_SLOT_EMPTY", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_44();
	if (Global_3866 == 0)
	{
		fLocal_43 = 0.75f;
		fLocal_44 = 0.8f;
	}
	else
	{
		fLocal_43 = 0.65f;
		fLocal_44 = 0.77f;
	}
	Global_C60[Global_389D /*2811*/][2 /*281*/].f_103 = Global_19B04.f_36C6[Global_389D /*20*/].f_6;
	Global_C60[Global_389D /*2811*/][4 /*281*/].f_103 = Global_19B04.f_36C6[Global_389D /*20*/].f_9;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (Global_11542)
		{
			Global_C60[Global_389D /*2811*/][1 /*281*/].f_103 = func_43(1198, -1, 0);
			Global_C60[Global_389D /*2811*/][2 /*281*/].f_103 = func_43(2028, -1, 0);
			Global_C60[Global_389D /*2811*/][4 /*281*/].f_103 = func_43(2027, -1, 0);
		}
		else if (unk_0x3362CDE8460ED38B(&(Global_19B04.f_36C6[Global_389D /*20*/].f_B), &(Global_C60[Global_389D /*2811*/][1 /*281*/].f_90[iVar0 /*6*/])))
		{
			Global_C60[Global_389D /*2811*/][1 /*281*/].f_103 = iVar0;
		}
		iVar0++;
	}
	if (Global_11542)
	{
		Global_19B04.f_36C6[3 /*20*/].f_A = func_43(1197, -1, 0);
	}
	Global_C60[Global_389D /*2811*/][3 /*281*/].f_103 = Global_19B04.f_36C6[Global_389D /*20*/].f_A;
	func_42();
	if (Global_11542)
	{
		Global_C60[3 /*2811*/][0 /*281*/] = 190;
		Global_C60[3 /*2811*/][0 /*281*/].f_1 = 190;
		StringCopy(&(Global_C60[3 /*2811*/][0 /*281*/].f_2), "CELL_701", 16);
		Global_C60[3 /*2811*/][0 /*281*/].f_6 = 19;
		Global_C60[3 /*2811*/][0 /*281*/].f_118 = 1;
		StringCopy(&(Global_C60[3 /*2811*/][0 /*281*/].f_7[0 /*4*/]), "CELL_704", 16);
		Global_C60[3 /*2811*/][0 /*281*/].f_7C[0] = 1;
		Global_C60[3 /*2811*/][0 /*281*/].f_54[0] = 170;
		Global_C60[3 /*2811*/][0 /*281*/].f_68[0] = 19;
		StringCopy(&(Global_C60[3 /*2811*/][0 /*281*/].f_7[1 /*4*/]), "CELL_703", 16);
		Global_C60[3 /*2811*/][0 /*281*/].f_7C[1] = 1;
		Global_C60[3 /*2811*/][0 /*281*/].f_54[1] = 175;
		Global_C60[3 /*2811*/][0 /*281*/].f_68[1] = 19;
		StringCopy(&(Global_C60[3 /*2811*/][0 /*281*/].f_7[2 /*4*/]), "CELL_801", 16);
		Global_C60[3 /*2811*/][0 /*281*/].f_7C[2] = 0;
		Global_C60[3 /*2811*/][0 /*281*/].f_54[2] = 190;
		Global_C60[3 /*2811*/][0 /*281*/].f_68[2] = 26;
		if (func_43(2090, -1, 0) == 0)
		{
			Global_C60[3 /*2811*/][0 /*281*/].f_103 = 0;
		}
		else
		{
			Global_C60[3 /*2811*/][0 /*281*/].f_103 = 1;
		}
	}
	func_33();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (iLocal_30)
		{
			if (SYSTEM::TIMERB() > 3500)
			{
				if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
				{
					unk_0xA67E4C38FDA2AC16(unk_0xBC25C936A095B5BA());
				}
				iLocal_30 = 0;
			}
		}
		if (Global_389D.f_1 != 9)
		{
			switch (Global_389D.f_1)
			{
				case 7:
					func_28();
					func_26();
					break;
				
				case 8:
					if (bLocal_36 || iLocal_37)
					{
						if (bLocal_36)
						{
							bLocal_36 = false;
							SYSTEM::SETTIMERB(0);
							Global_19B04.f_36C6.f_52 = 1;
							iLocal_37 = 1;
						}
						else if (SYSTEM::TIMERB() > 7500)
						{
							iLocal_37 = 0;
							unk_0x7456702622C62EA0(1);
						}
					}
					else
					{
						func_28();
						func_12();
						if (iLocal_33)
						{
							func_11();
						}
						if (func_10(2, Global_387D, 0))
						{
							if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
							{
								unk_0xA67E4C38FDA2AC16(unk_0xBC25C936A095B5BA());
							}
							iLocal_33 = 0;
							func_9();
							Global_3887 = 1;
							func_45(Global_388A, "SET_DATA_SLOT_EMPTY", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
							func_33();
							if (Global_389D.f_1 > 3)
							{
								Global_389D.f_1 = 7;
							}
						}
					}
					break;
				
				default:
					break;
			}
			if (func_8())
			{
				func_2();
			}
		}
		else
		{
			Global_389F = 6;
			func_2();
		}
		if (func_1())
		{
			func_2();
		}
	}
}

int func_1()//Position - 0x44E
{
	if (((Global_389D.f_1 == 1 || Global_389D.f_1 == 3) || Global_389D.f_1 == 0) || Global_3865 == 1)
	{
		Global_3890 = 1;
		return 1;
	}
	return 0;
}

void func_2()//Position - 0x491
{
	func_7();
	if (func_4(0))
	{
		func_3();
	}
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0xA67E4C38FDA2AC16(unk_0xBC25C936A095B5BA());
	}
	if (bLocal_36)
	{
		unk_0x7456702622C62EA0(1);
	}
	if (Global_19B04.f_36C6.f_53 == 0 || Global_19B04.f_36C6.f_52 == 0)
	{
		func_3();
	}
	unk_0x121BBDEFA4F0C22B(0);
	unk_0x95E4B6F3ED223F5A();
}

void func_3()//Position - 0x4F4
{
	if (Global_C60[0 /*2811*/][0 /*281*/].f_103 == 2)
	{
		Global_C60[0 /*2811*/][0 /*281*/].f_103 = 0;
	}
	if (Global_C60[1 /*2811*/][0 /*281*/].f_103 == 2)
	{
		Global_C60[1 /*2811*/][0 /*281*/].f_103 = 0;
	}
	if (Global_C60[2 /*2811*/][0 /*281*/].f_103 == 2)
	{
		Global_C60[2 /*2811*/][0 /*281*/].f_103 = 0;
	}
	unk_0x7CB6FD92BE491AD9(&Global_93B, 25);
	unk_0xF0059F27F7BB6680(&Global_93C, 11);
}

int func_4(int iParam0)//Position - 0x571
{
	if (Global_8C41 == 15)
	{
		return 0;
	}
	if (func_5(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_5(int iParam0)//Position - 0x593
{
	return func_6(iParam0, Global_8C41);
}

int func_6(int iParam0, int iParam1)//Position - 0x5A4
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

void func_7()//Position - 0x785
{
	func_44();
	Global_C60[Global_389D /*2811*/][0 /*281*/].f_7C[2] = 1;
}

int func_8()//Position - 0x7A4
{
	if (Global_B99 == 1 || Global_389D.f_1 < 7)
	{
		Global_3890 = 1;
		return 1;
	}
	return 0;
}

void func_9()//Position - 0x7CD
{
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0xC4BA30B532FE260F(-1, "Menu_Back", &Global_3892, 1);
	}
}

int func_10(int iParam0, int iParam1, int iParam2)//Position - 0x7EE
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

void func_11()//Position - 0x860
{
	int iVar0;
	
	iLocal_34 = unk_0x105601648511CC64();
	iVar0 = (iLocal_34 - iLocal_35);
	if ((iVar0 % 600) <= 300 && iVar0 < 3000)
	{
		unk_0xF715C239F71B95D6(0, 100, 100);
	}
}

void func_12()//Position - 0x895
{
	int iVar0;
	var uVar1;
	struct<13> Var2;
	int iVar3;
	
	if (iLocal_23 == 1)
	{
		if (iLocal_32)
		{
			iLocal_34 = unk_0x105601648511CC64();
			if ((iLocal_34 - iLocal_35) > 1000)
			{
				iLocal_31 = 1;
				iLocal_32 = 0;
			}
		}
		if (unk_0x50465D2C022B9E04(2))
		{
			if (unk_0x694514BD37EC4E94(2, 180))
			{
				iLocal_45 = 1;
				iLocal_46 = 0;
			}
			if (unk_0x694514BD37EC4E94(2, 181))
			{
				iLocal_45 = 0;
				iLocal_46 = 1;
			}
		}
		if ((((func_10(2, Global_3885, 0) || func_10(2, Global_3886, 0)) || iLocal_31) || iLocal_45 == 1) || iLocal_46 == 1)
		{
			iLocal_45 = 0;
			iLocal_46 = 0;
			iLocal_31 = 0;
			iLocal_32 = 0;
			SYSTEM::SETTIMERB(0);
			iLocal_30 = 1;
			unk_0x29CD142125FE177B(Global_388A, "GET_CURRENT_SELECTION");
			iLocal_21 = unk_0xC27A95D32A8160C0();
			while (!unk_0x3B6BD69AB08B86C2(iLocal_21))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_27 = iLocal_18[unk_0x6AE1427A38313694(iLocal_21)];
			if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
			{
				unk_0xA67E4C38FDA2AC16(unk_0xBC25C936A095B5BA());
				SYSTEM::WAIT(100);
				if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
				{
					if (!unk_0x53E4E7B535C34271(unk_0xBC25C936A095B5BA()))
					{
						if (unk_0x3362CDE8460ED38B(&(Global_C60[Global_389D /*2811*/][1 /*281*/].f_90[iLocal_27 /*6*/]), "Silent Ringtone Dummy"))
						{
						}
						else
						{
							unk_0xFDA58AE2D2E15855(&(Global_C60[Global_389D /*2811*/][1 /*281*/].f_90[iLocal_27 /*6*/]), unk_0xBC25C936A095B5BA(), 1);
						}
					}
				}
			}
		}
	}
	if (Global_3887 == 0)
	{
		if (func_10(2, Global_387E, 0))
		{
			func_23();
			Global_3887 = 1;
			unk_0x29CD142125FE177B(Global_388A, "GET_CURRENT_SELECTION");
			iLocal_21 = unk_0xC27A95D32A8160C0();
			while (!unk_0x3B6BD69AB08B86C2(iLocal_21))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_26 = unk_0x6AE1427A38313694(iLocal_21);
			if (iLocal_26 < 0)
			{
				iLocal_26 = 0;
			}
			Global_C60[Global_389D /*2811*/][iLocal_23 /*281*/].f_103 = iLocal_18[iLocal_26];
			if (iLocal_23 == 2)
			{
				iVar0 = Global_C60[Global_389D /*2811*/][iLocal_23 /*281*/].f_103;
				Global_19B04.f_36C6[Global_389D /*20*/].f_6 = Global_C60[Global_389D /*2811*/][2 /*281*/].f_104[iVar0];
				func_45(Global_388A, "SET_THEME", SYSTEM::TO_FLOAT(Global_19B04.f_36C6[Global_389D /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_11542)
				{
					Global_411E9E = Global_C60[3 /*2811*/][2 /*281*/].f_103;
					func_20(2028, Global_C60[3 /*2811*/][2 /*281*/].f_103, -1, 1, 0);
					func_45(Global_388A, "SET_THEME", SYSTEM::TO_FLOAT(Global_411E9E), -1082130432, -1082130432, -1082130432, -1082130432);
				}
				else
				{
					func_45(Global_388A, "SET_THEME", SYSTEM::TO_FLOAT(Global_19B04.f_36C6[Global_389D /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_19();
				func_18(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_25), SYSTEM::TO_FLOAT(23), -1f, -1f, &(Global_C60[Global_389D /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_25] /*4*/]), 0, 0, 0, 0);
				func_18(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_26), SYSTEM::TO_FLOAT(48), -1f, -1f, &(Global_C60[Global_389D /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_26] /*4*/]), 0, 0, 0, 0);
				iLocal_25 = iLocal_26;
				func_45(Global_388A, "DISPLAY_VIEW", 22f, SYSTEM::TO_FLOAT(iLocal_26), -1082130432, -1082130432, -1082130432);
			}
			if (iLocal_23 == 4)
			{
				Global_19B04.f_36C6[Global_389D /*20*/].f_9 = Global_C60[Global_389D /*2811*/][iLocal_23 /*281*/].f_103;
				if (Global_11542)
				{
					Global_411E9F = Global_C60[3 /*2811*/][4 /*281*/].f_103;
					func_20(2027, Global_C60[3 /*2811*/][4 /*281*/].f_103, -1, 1, 0);
					if (Global_411E9F == 0)
					{
						Var2 = { func_17(unk_0xB5CEFD608600A09F()) };
						iVar3 = 0;
						if (unk_0x5553DFDA03631860(0) == 0)
						{
						}
						if ((unk_0xD7F4457CECF10121(&Var2) && unk_0x5553DFDA03631860(0)) && Global_411EA2 == 0)
						{
							SYSTEM::SETTIMERA(0);
							while (!unk_0xB5AD4F878C27B0F4(&Var2, &uVar1) && SYSTEM::TIMERA() < 3000)
							{
								SYSTEM::WAIT(0);
								if (SYSTEM::TIMERA() > 2999)
								{
									iVar3 = 1;
								}
							}
							if (iVar3 == 0)
							{
								unk_0x29CD142125FE177B(Global_388A, "SET_BACKGROUND_CREW_IMAGE");
								unk_0x57016C44F10111F0("CELL_2000");
								unk_0x607C19B90D297FE2(&uVar1);
								unk_0x64989E60CF560CA1();
								unk_0xF9FBC2F3F73D94C9();
							}
						}
						else
						{
							func_45(Global_388A, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432, -1082130432);
						}
					}
					else
					{
						func_45(Global_388A, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(Global_411E9F), -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					func_45(Global_388A, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(Global_19B04.f_36C6[Global_389D /*20*/].f_9), -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_18(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_25), SYSTEM::TO_FLOAT(23), -1f, -1f, &(Global_C60[Global_389D /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_25] /*4*/]), 0, 0, 0, 0);
				func_18(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_26), SYSTEM::TO_FLOAT(48), -1f, -1f, &(Global_C60[Global_389D /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_26] /*4*/]), 0, 0, 0, 0);
				iLocal_25 = iLocal_26;
				func_45(Global_388A, "DISPLAY_VIEW", 22f, SYSTEM::TO_FLOAT(iLocal_26), -1082130432, -1082130432, -1082130432);
			}
			if (iLocal_23 == 1)
			{
				Global_19B04.f_36C6[Global_389D /*20*/].f_B = { Global_C60[Global_389D /*2811*/][1 /*281*/].f_90[Global_C60[Global_389D /*2811*/][1 /*281*/].f_103 /*6*/] };
				if (Global_11542)
				{
					func_20(1198, Global_C60[3 /*2811*/][1 /*281*/].f_103, -1, 1, 0);
				}
				func_18(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_25), SYSTEM::TO_FLOAT(18), -1f, -1f, &(Global_C60[Global_389D /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_25] /*4*/]), 0, 0, 0, 0);
				func_18(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_26), SYSTEM::TO_FLOAT(48), -1f, -1f, &(Global_C60[Global_389D /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_26] /*4*/]), 0, 0, 0, 0);
				iLocal_25 = iLocal_26;
				func_45(Global_388A, "DISPLAY_VIEW", 22f, SYSTEM::TO_FLOAT(iLocal_26), -1082130432, -1082130432, -1082130432);
			}
			if (iLocal_23 == 3)
			{
				Global_19B04.f_36C6[Global_389D /*20*/].f_A = Global_C60[Global_389D /*2811*/][iLocal_23 /*281*/].f_103;
				if (Global_11542)
				{
					func_20(1197, Global_19B04.f_36C6[3 /*20*/].f_A, -1, 1, 0);
				}
				if (Global_19B04.f_36C6[Global_389D /*20*/].f_A == 1)
				{
					iLocal_33 = 1;
					iLocal_35 = unk_0x105601648511CC64();
				}
				else
				{
					iLocal_33 = 0;
				}
			}
			if (iLocal_23 == 0)
			{
				if (Global_11542 == 1)
				{
					Global_C60[3 /*2811*/][iLocal_23 /*281*/].f_103 = iLocal_18[iLocal_26];
					func_18(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_25), SYSTEM::TO_FLOAT(19), -1f, -1f, &(Global_C60[Global_389D /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_25] /*4*/]), 0, 0, 0, 0);
					func_18(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_26), SYSTEM::TO_FLOAT(48), -1f, -1f, &(Global_C60[Global_389D /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_26] /*4*/]), 0, 0, 0, 0);
					iLocal_25 = iLocal_26;
					func_45(Global_388A, "DISPLAY_VIEW", 22f, SYSTEM::TO_FLOAT(iLocal_26), -1082130432, -1082130432, -1082130432);
					func_20(2090, Global_C60[3 /*2811*/][iLocal_23 /*281*/].f_103, -1, 1, 0);
				}
				else
				{
					Global_C60[0 /*2811*/][iLocal_23 /*281*/].f_103 = iLocal_18[iLocal_26];
					Global_C60[1 /*2811*/][iLocal_23 /*281*/].f_103 = iLocal_18[iLocal_26];
					Global_C60[2 /*2811*/][iLocal_23 /*281*/].f_103 = iLocal_18[iLocal_26];
					if (Global_C60[Global_389D /*2811*/][0 /*281*/].f_103 == 2)
					{
						if (Global_8C41 == 15)
						{
							if (Global_19B04.f_36C6.f_52 == 0)
							{
								unk_0x7456702622C62EA0(1);
								func_16("CELL_7050");
								if (fLocal_43 == fLocal_44)
								{
								}
								bLocal_36 = true;
							}
							else
							{
								func_45(Global_388A, "SET_SLEEP_MODE", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
								unk_0xF0059F27F7BB6680(&Global_93B, 25);
								unk_0xF0059F27F7BB6680(&Global_93C, 11);
								if (Global_19B04.f_36C6.f_53 == 0)
								{
									unk_0x7456702622C62EA0(1);
									func_15("CELL_7051", -1);
									Global_19B04.f_36C6.f_53 = 1;
								}
							}
						}
					}
					else
					{
						func_45(Global_388A, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
						unk_0x7CB6FD92BE491AD9(&Global_93B, 25);
						unk_0xF0059F27F7BB6680(&Global_93C, 11);
					}
				}
			}
			func_13(Global_388A, "SET_HEADER", &(Global_C60[Global_389D /*2811*/][iLocal_23 /*281*/].f_7[Global_C60[Global_389D /*2811*/][iLocal_23 /*281*/].f_103 /*4*/]), 0, 0, 0, 0);
			if (func_4(0))
			{
				func_3();
			}
		}
	}
}

void func_13(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)//Position - 0x1152
{
	unk_0x29CD142125FE177B(iParam0, sParam1);
	func_14(sParam2);
	if (!unk_0xF1734B55490E9045(sParam3))
	{
		func_14(sParam3);
	}
	if (!unk_0xF1734B55490E9045(sParam4))
	{
		func_14(sParam4);
	}
	if (!unk_0xF1734B55490E9045(sParam5))
	{
		func_14(sParam5);
	}
	if (!unk_0xF1734B55490E9045(sParam6))
	{
		func_14(sParam6);
	}
	unk_0xF9FBC2F3F73D94C9();
}

void func_14(char* sParam0)//Position - 0x11AD
{
	unk_0x57016C44F10111F0(sParam0);
	unk_0x64989E60CF560CA1();
}

void func_15(char* sParam0, int iParam1)//Position - 0x11BF
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, true, iParam1);
}

void func_16(char* sParam0)//Position - 0x11D6
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 1, true, -1);
}

struct<13> func_17(int iParam0)//Position - 0x11EC
{
	struct<13> Var0;
	
	unk_0xB7DBA2C6D2C3C41A(iParam0, &Var0, 13);
	return Var0;
}

void func_18(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x1203
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
		func_14(sParam7);
	}
	if (!unk_0xF1734B55490E9045(sParam8))
	{
		func_14(sParam8);
	}
	if (!unk_0xF1734B55490E9045(sParam9))
	{
		func_14(sParam9);
	}
	if (!unk_0xF1734B55490E9045(sParam10))
	{
		func_14(sParam10);
	}
	if (!unk_0xF1734B55490E9045(sParam11))
	{
		func_14(sParam11);
	}
	unk_0xF9FBC2F3F73D94C9();
}

void func_19()//Position - 0x12B6
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

void func_20(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x152D
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_21(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, iParam3);
	}
}

int func_21(var uParam0)//Position - 0x155D
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_22();
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

var func_22()//Position - 0x1591
{
	return Global_1407E0;
}

void func_23()//Position - 0x159D
{
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0xC4BA30B532FE260F(-1, "Menu_Accept", &Global_3892, 1);
		func_24();
	}
}

void func_24()//Position - 0x15C2
{
	if (func_25())
	{
		unk_0x32A023E2F8F8566C(5);
	}
}

int func_25()//Position - 0x15D6
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

void func_26()//Position - 0x161D
{
	if (Global_3887 == 0)
	{
		if (func_10(2, Global_387E, 0))
		{
			func_23();
			Global_3887 = 1;
			unk_0x29CD142125FE177B(Global_388A, "GET_CURRENT_SELECTION");
			iLocal_21 = unk_0xC27A95D32A8160C0();
			while (!unk_0x3B6BD69AB08B86C2(iLocal_21))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_24 = unk_0x6AE1427A38313694(iLocal_21);
			iLocal_23 = iLocal_18[iLocal_24];
			switch (iLocal_23)
			{
				case 0:
					if (Global_11542 == 0)
					{
						if (Global_8C41 == 15)
						{
							if (Global_19B04.f_36C6.f_52 == 0)
							{
								unk_0x7456702622C62EA0(1);
								func_16("CELL_7050");
								if (fLocal_43 == fLocal_44)
								{
								}
								bLocal_36 = true;
							}
						}
					}
					break;
				
				case 1:
					break;
				
				case 2:
					break;
				
				case 3:
					break;
			}
			if (Global_389D.f_1 > 3)
			{
				Global_389D.f_1 = 8;
			}
			func_27();
			iLocal_32 = 1;
			iLocal_35 = unk_0x105601648511CC64();
		}
	}
}

void func_27()//Position - 0x16EF
{
	int iVar0[19];
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	
	func_45(Global_388A, "SET_DATA_SLOT_EMPTY", 22f, -1082130432, -1082130432, -1082130432, -1082130432);
	iLocal_19 = 0;
	iVar1 = 0;
	if (Global_11542)
	{
		StringCopy(&(Global_C60[3 /*2811*/][4 /*281*/].f_7[0 /*4*/]), "CELL_CREWEMB", 16);
		Var2 = { func_17(unk_0xB5CEFD608600A09F()) };
		if (!unk_0xD7F4457CECF10121(&Var2))
		{
			StringCopy(&(Global_C60[3 /*2811*/][4 /*281*/].f_7[0 /*4*/]), "CELL_840", 16);
		}
	}
	while (iVar1 < 19)
	{
		iVar3 = 0;
		iVar4 = 18;
		Global_C60[Global_389D /*2811*/][iLocal_23 /*281*/].f_54[iVar4] = 5000;
		while (iVar3 < 19)
		{
			if (Global_C60[Global_389D /*2811*/][iLocal_23 /*281*/].f_7C[iVar3] == 1)
			{
				if (iVar0[iVar3] == 0)
				{
					if (Global_C60[Global_389D /*2811*/][iLocal_23 /*281*/].f_54[iVar3] < Global_C60[Global_389D /*2811*/][iLocal_23 /*281*/].f_54[iVar4])
					{
						iVar4 = iVar3;
						func_18(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iVar1), SYSTEM::TO_FLOAT(Global_C60[Global_389D /*2811*/][iLocal_23 /*281*/].f_68[iVar4]), -1f, -1f, &(Global_C60[Global_389D /*2811*/][iLocal_23 /*281*/].f_7[iVar4 /*4*/]), 0, 0, 0, 0);
					}
				}
			}
			iVar3++;
		}
		iLocal_18[iVar1] = iVar4;
		iVar0[iVar4] = 1;
		if (unk_0x3362CDE8460ED38B(&(Global_C60[Global_389D /*2811*/][iLocal_23 /*281*/].f_7[Global_C60[Global_389D /*2811*/][iLocal_23 /*281*/].f_103 /*4*/]), &(Global_C60[Global_389D /*2811*/][iLocal_23 /*281*/].f_7[iVar4 /*4*/])))
		{
			iLocal_28 = iVar1;
			if (iLocal_28 < 0)
			{
				iLocal_28 = 0;
			}
			if ((iLocal_23 == 1 || iLocal_23 == 4) || iLocal_23 == 2)
			{
				func_18(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iVar1), SYSTEM::TO_FLOAT(48), -1f, -1f, &(Global_C60[Global_389D /*2811*/][iLocal_23 /*281*/].f_7[iVar4 /*4*/]), 0, 0, 0, 0);
				iLocal_25 = iVar1;
			}
			if (iLocal_23 == 0 && Global_11542 == 1)
			{
				func_18(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iVar1), SYSTEM::TO_FLOAT(48), -1f, -1f, &(Global_C60[Global_389D /*2811*/][iLocal_23 /*281*/].f_7[iVar4 /*4*/]), 0, 0, 0, 0);
				iLocal_25 = iVar1;
			}
		}
		if (Global_C60[Global_389D /*2811*/][iLocal_23 /*281*/].f_7C[iVar1] == 1)
		{
			iLocal_19++;
		}
		iVar1++;
	}
	func_45(Global_388A, "DISPLAY_VIEW", 22f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_13(Global_388A, "SET_HEADER", &(Global_C60[Global_389D /*2811*/][iLocal_23 /*281*/].f_7[Global_C60[Global_389D /*2811*/][iLocal_23 /*281*/].f_103 /*4*/]), 0, 0, 0, 0);
	if (Global_3891)
	{
		func_18(Global_388A, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_18(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_18(Global_388A, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_18(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_18(Global_388A, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x7CB6FD92BE491AD9(&Global_93B, 17);
}

void func_28()//Position - 0x1A34
{
	if (iLocal_42)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_42 = 0;
		}
	}
	if (unk_0x50465D2C022B9E04(2))
	{
		if (func_10(2, 181, 0))
		{
			if (iLocal_20 > 0)
			{
				iLocal_20 = (iLocal_20 - 1);
			}
			func_31();
		}
		if (func_10(2, 180, 0))
		{
			iLocal_20++;
			if (iLocal_20 == iLocal_19)
			{
				iLocal_20 = 0;
			}
			func_29();
		}
	}
	if (iLocal_42 == 0)
	{
		if (func_10(2, Global_3885, 0))
		{
			if (iLocal_20 > 0)
			{
				iLocal_20 = (iLocal_20 - 1);
			}
			func_31();
			iLocal_42 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_10(2, Global_3886, 0))
		{
			iLocal_20++;
			if (iLocal_20 == iLocal_19)
			{
				iLocal_20 = 0;
			}
			func_29();
			iLocal_42 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_29()//Position - 0x1AE1
{
	func_45(Global_388A, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xC4BA30B532FE260F(-1, "Menu_Navigate", &Global_3892, 1);
	func_30();
}

void func_30()//Position - 0x1B1E
{
	if (func_25())
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

void func_31()//Position - 0x1B41
{
	func_45(Global_388A, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xC4BA30B532FE260F(-1, "Menu_Navigate", &Global_3892, 1);
	func_32();
}

void func_32()//Position - 0x1B7E
{
	if (func_25())
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

void func_33()//Position - 0x1BA1
{
	int iVar0[20];
	int iVar1;
	int iVar2;
	int iVar3;
	
	iLocal_19 = 0;
	iVar1 = 0;
	while (iVar1 < 9)
	{
		iVar2 = 0;
		iVar3 = 9;
		Global_C60[Global_389D /*2811*/][iVar3 /*281*/] = 5000;
		if (unk_0x2DC92D46FC48E795(2) == 0)
		{
			Global_C60[Global_389D /*2811*/][3 /*281*/].f_118 = 0;
		}
		else
		{
			Global_C60[Global_389D /*2811*/][3 /*281*/].f_118 = 1;
		}
		while (iVar2 < 9)
		{
			if (Global_C60[Global_389D /*2811*/][iVar2 /*281*/].f_118 == 1)
			{
				if (iVar0[iVar2] == 0)
				{
					if (Global_C60[Global_389D /*2811*/][iVar2 /*281*/] < Global_C60[Global_389D /*2811*/][iVar3 /*281*/])
					{
						if (Global_11542)
						{
							if (iVar2 == 0)
							{
								iVar3 = iVar2;
								func_41(iVar2, iVar3);
								func_18(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(iVar1), SYSTEM::TO_FLOAT(iLocal_29), -1f, -1f, &(Global_C60[Global_389D /*2811*/][iVar3 /*281*/].f_2), 0, 0, 0, 0);
							}
							else
							{
								iVar3 = iVar2;
								func_41(iVar2, iVar3);
								func_18(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(iVar1), SYSTEM::TO_FLOAT(iLocal_29), -1f, -1f, &(Global_C60[Global_389D /*2811*/][iVar3 /*281*/].f_2), 0, 0, 0, 0);
							}
						}
						else if (func_34() == 2)
						{
							if (iVar2 == 4 || iVar2 == 5)
							{
							}
							else
							{
								iVar3 = iVar2;
								func_41(iVar2, iVar3);
								func_18(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(iVar1), SYSTEM::TO_FLOAT(iLocal_29), -1f, -1f, &(Global_C60[Global_389D /*2811*/][iVar3 /*281*/].f_2), 0, 0, 0, 0);
							}
						}
						else if (iVar2 == 5)
						{
						}
						else
						{
							iVar3 = iVar2;
							func_41(iVar2, iVar3);
							func_18(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(iVar1), SYSTEM::TO_FLOAT(iLocal_29), -1f, -1f, &(Global_C60[Global_389D /*2811*/][iVar3 /*281*/].f_2), 0, 0, 0, 0);
						}
					}
				}
			}
			iVar2++;
		}
		iLocal_18[iVar1] = iVar3;
		iVar0[iVar3] = 1;
		if (Global_C60[Global_389D /*2811*/][iVar1 /*281*/].f_118 == 1)
		{
			iLocal_19++;
		}
		iVar1++;
	}
	func_45(Global_388A, "DISPLAY_VIEW", 13f, SYSTEM::TO_FLOAT(iLocal_24), -1082130432, -1082130432, -1082130432);
	func_13(Global_388A, "SET_HEADER", "CELL_16", 0, 0, 0, 0);
	if (Global_3891)
	{
		func_18(Global_388A, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_18(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_18(Global_388A, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_18(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_18(Global_388A, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x7CB6FD92BE491AD9(&Global_93B, 17);
}

int func_34()//Position - 0x1E6D
{
	if (Global_11542)
	{
		Global_389D = 3;
	}
	else
	{
		Global_389D = func_35();
	}
	if (Global_389D > 3)
	{
		Global_389D = 3;
	}
	return Global_19B04.f_36C6[Global_389D /*20*/].f_7;
}

var func_35()//Position - 0x1EA3
{
	func_36();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_36()//Position - 0x1EBC
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_40(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_39(unk_0xBC25C936A095B5BA());
			if (func_38(iVar0) && (!func_37(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_38(Global_19B04.f_932.f_21B.f_10CD))
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

bool func_37(int iParam0)//Position - 0x1FB9
{
	return Global_8C41 == iParam0;
}

bool func_38(int iParam0)//Position - 0x1FC7
{
	return iParam0 < 3;
}

int func_39(int iParam0)//Position - 0x1FD3
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_40(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_40(int iParam0)//Position - 0x2010
{
	if (func_38(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_41(int iParam0, int iParam1)//Position - 0x203A
{
	switch (iParam0)
	{
		case 0:
			if (Global_11542)
			{
				iLocal_29 = 19;
			}
			else if (Global_C60[Global_389D /*2811*/][0 /*281*/].f_103 == 2)
			{
				iLocal_29 = 26;
			}
			else
			{
				iLocal_29 = 25;
			}
			break;
		
		case 3:
			if (Global_C60[Global_389D /*2811*/][3 /*281*/].f_103 == 1)
			{
				iLocal_29 = 20;
			}
			else
			{
				iLocal_29 = 21;
			}
			break;
		
		default:
			iLocal_29 = Global_C60[Global_389D /*2811*/][iParam1 /*281*/].f_6;
			break;
	}
}

void func_42()//Position - 0x20BC
{
	if (Global_8C41 != 15)
	{
		func_44();
		Global_C60[Global_389D /*2811*/][0 /*281*/].f_7C[2] = 0;
	}
}

int func_43(int iParam0, int iParam1, int iParam2)//Position - 0x20E3
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_21(iParam1)];
	if (unk_0x6CB99B97664C3727(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_44()//Position - 0x2115
{
	if (func_37(14))
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

void func_45(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x21B7
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

