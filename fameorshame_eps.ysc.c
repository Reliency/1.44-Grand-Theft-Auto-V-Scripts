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
	var uLocal_20 = 0;
	vector3 vLocal_21 = { 0f, 0f, 0f };
	struct<18> Local_22 = { 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16 } ;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40[29] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_41 = 0;
	struct<178> Local_42[27];
	var uLocal_43 = 0;
	struct<24> Local_44[30];
	var uLocal_45 = 0;
	struct<24> Local_46[24];
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	float fLocal_49 = 0f;
	float fLocal_50 = 0f;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	bool bLocal_55 = 0;
	bool bLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	int iLocal_63 = 0;
	bool bLocal_64 = 0;
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
	iLocal_41 = 29;
	fLocal_49 = 0.075f;
	fLocal_50 = 0.725f;
	iLocal_57 = 1;
	iLocal_58 = 1;
	bLocal_64 = true;
	unk_0x25A523E067E06F54(1);
	if (unk_0xE8A79675302ED812(3))
	{
		func_40();
	}
	bLocal_64 = false;
	unk_0x7A41D32A383895D8(0);
	unk_0xEF23FCC849B5EB47(1);
	func_35(1);
	unk_0x04DD7A558FCF2C34("FOS_EP_1_P6", 8);
	func_18(0);
	func_8(1, 1, 1, 0, 0);
	while (true)
	{
		unk_0x598D851D7D0D2BA3(0f);
		unk_0xF8F756483107049E(0f);
		func_7(unk_0xBC25C936A095B5BA());
		if (func_2())
		{
			func_40();
		}
		if (bLocal_56)
		{
			unk_0xB8F3C51875F7BEA3(0.5f, 0.5f);
			func_1(0.1f, 0.1f, "NUMBER", 1, 0);
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0xE0
{
	unk_0x8B371195127AACF2(sParam2);
	unk_0xAA5C5BF0489E5553(iParam3);
	unk_0x3A8B9C7B1C825123(fParam0, fParam1, iParam4);
}

int func_2()//Position - 0xFE
{
	unk_0xC2BB4D344E887586(vLocal_21.x, vLocal_21.y, vLocal_21.z);
	unk_0x64C30D4D0365316E(-1f);
	switch (iLocal_59)
	{
		case 0:
			unk_0x829FA4611BD56B44(0);
			func_6();
			unk_0x829FA4611BD56B44(500);
			unk_0x93B1CB6BD50812C7(0);
			iLocal_59++;
			break;
		
		case 1:
			if (!unk_0xD96732B3E060BAE1())
			{
				if (bLocal_64)
				{
					func_4();
				}
				unk_0xF14A31FD690DC3B0(iLocal_53);
				unk_0x65E432C782E7E702(iLocal_51, 0.2f, 0.34f, 0.410001f, 0.69f, 100, 100, 100, 255, 0);
				unk_0xF14A31FD690DC3B0(iLocal_54);
				if (bLocal_55)
				{
					unk_0x29CD142125FE177B(iLocal_52, "SET_TEXT");
					func_3("KEYNOTE_NAME");
					func_3("KEYNOTE_TITLE");
					unk_0xF9FBC2F3F73D94C9();
					unk_0x65E432C782E7E702(iLocal_52, 0.5f, 0.5f, 1f, 1f, 100, 100, 100, 255, 0);
				}
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_3(char* sParam0)//Position - 0x1D7
{
	unk_0x57016C44F10111F0(sParam0);
	unk_0x64989E60CF560CA1();
}

void func_4()//Position - 0x1E9
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0xADE6C4641AFD481C();
	iVar1 = 0;
	while (iVar1 <= (16 - 1))
	{
		if (Local_22[iVar1] != -1)
		{
			if ((!unk_0xFA30DFD0084E92FE(iLocal_39, iVar1) && iVar0 >= Local_22[iVar1]) && iVar0 < Local_22.f_11[iVar1])
			{
				func_5();
				unk_0xF0059F27F7BB6680(&iLocal_39, iVar1);
			}
		}
		iVar1++;
	}
}

void func_5()//Position - 0x24C
{
}

void func_6()//Position - 0x254
{
}

bool func_7(int iParam0)//Position - 0x25C
{
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 0;
	}
	return !unk_0x1D403DFADBC2DE3C(iParam0, 0);
}

void func_8(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x27A
{
	if (bParam0)
	{
		unk_0x0D2E9062E966BE4F(unk_0xB5CEFD608600A09F());
		unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 1);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 1);
		func_17(1);
		unk_0x32FF237D69EB5489();
		unk_0x3169E2C5E6A096BC();
		if (Global_389D.f_1 > 3)
		{
			if (unk_0x58E7DDFF8D17A82A())
			{
				unk_0x1E08809A5041F85B(false);
			}
			if (!func_16())
			{
				Global_389D.f_1 = 3;
			}
			Global_3DB8 = 5;
		}
		func_15(1, iParam3, iParam2, 0);
		Global_DAA5 = 1;
		Global_10ABB = 1;
		Global_11540 = 1;
	}
	else
	{
		func_17(0);
		unk_0xCB50D125C355ED9C();
		Global_DAA5 = 0;
		if (bParam1)
		{
			unk_0x7FF4F08CAB3344B1();
		}
		unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 0);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 0);
		func_15(0, iParam3, iParam2, 0);
		if (unk_0x7AF0088ABFA713B6())
		{
			if ((((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_13(unk_0xB5CEFD608600A09F())) && !func_10(unk_0xB5CEFD608600A09F(), 0)) && !func_9()) && !bParam4)
			{
				unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), false);
			}
		}
		else if ((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_13(unk_0xB5CEFD608600A09F())) && !bParam4)
		{
			unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), false);
		}
		Global_11540 = 0;
	}
}

bool func_9()//Position - 0x3A3
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_27.f_12, 14);
}

bool func_10(int iParam0, int iParam1)//Position - 0x3C0
{
	bool bVar0;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		bVar0 = func_11(-1, 0) == 8;
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

int func_11(int iParam0, bool bParam1)//Position - 0x40B
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_12();
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

int func_12()//Position - 0x44C
{
	return Global_1407E0;
}

int func_13(int iParam0)//Position - 0x458
{
	if (func_10(iParam0, 0))
	{
		return 1;
	}
	if (func_14())
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

bool func_14()//Position - 0x49A
{
	return unk_0xFA30DFD0084E92FE(Global_240006, 3);
}

int func_15(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x4AB
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

int func_16()//Position - 0x4DE
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_17(int iParam0)//Position - 0x505
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

void func_18(bool bParam0)//Position - 0x528
{
	int iVar0;
	
	if (func_7(unk_0xBC25C936A095B5BA()))
	{
		unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), 689.1f, 586.5f, 130.5f, 1, false, 0, 1);
		unk_0xA0C0B32E74BE8DB7(689.1f, 586.5f, 130.5f, 500f, 0);
		unk_0xEC9E10B23689A01D(unk_0xBC25C936A095B5BA(), 1);
	}
	func_34(0);
	func_33(&iLocal_63, 0);
	unk_0x1732A8A5D2D39430(689.1f, 586.5f, 130.5f, 80f, 0);
	while (!unk_0xF220370B0C08EC20())
	{
		SYSTEM::WAIT(0);
	}
	unk_0x13D5880CBA449AA9();
	if (bParam0)
	{
		unk_0x5183B5D4E829B7E4("LInvader");
		while (!unk_0xE7CC712DAAEA69F3("LInvader"))
		{
			SYSTEM::WAIT(0);
		}
	}
	unk_0xECFC79CE36279CD8("EXTRASUNNY");
	iLocal_40[0] = joaat("a_m_y_hipster_01");
	iLocal_40[1] = joaat("a_m_y_hipster_02");
	iLocal_40[2] = joaat("a_m_y_hipster_03");
	iLocal_40[3] = joaat("a_f_y_hipster_01");
	iLocal_40[4] = joaat("a_f_y_hipster_02");
	iLocal_40[5] = joaat("a_f_y_hipster_03");
	iLocal_40[6] = joaat("a_f_y_hipster_04");
	iLocal_40[7] = joaat("a_f_y_bevhills_01");
	iLocal_40[8] = joaat("a_m_m_business_01");
	iLocal_40[9] = joaat("a_m_m_bevhills_02");
	iLocal_40[10] = joaat("a_m_m_skater_01");
	iLocal_40[11] = joaat("a_m_y_beachvesp_01");
	iLocal_40[12] = joaat("a_m_y_bevhills_01");
	iLocal_40[13] = joaat("a_f_m_bevhills_01");
	iLocal_40[14] = joaat("a_m_m_ktown_01");
	iLocal_40[15] = joaat("a_m_y_busicas_01");
	iLocal_40[16] = joaat("a_m_y_business_02");
	iLocal_40[17] = joaat("a_m_y_gay_01");
	iLocal_40[18] = joaat("a_m_y_ktown_02");
	iLocal_40[19] = joaat("a_m_m_bevhills_02");
	iLocal_40[20] = joaat("a_m_y_business_03");
	iLocal_40[21] = joaat("a_m_y_gay_02");
	iLocal_40[22] = joaat("a_m_m_malibu_01");
	iLocal_40[22] = joaat("a_m_y_gay_02");
	iLocal_40[23] = joaat("a_m_y_eastsa_02");
	iLocal_40[24] = joaat("a_m_y_soucent_02");
	iLocal_40[25] = joaat("a_m_y_vinewood_01");
	iLocal_40[26] = joaat("a_m_y_vinewood_02");
	iLocal_40[27] = joaat("a_m_y_vinewood_03");
	iLocal_40[28] = joaat("a_m_y_vinewood_04");
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		func_31(func_32(iVar0), 1);
		iVar0++;
	}
	func_31("misslester1b_crowdlow@14@", 1);
	func_31("misslester1b_crowdlow@24@", 1);
	func_30("BREAKING_NEWS", &iLocal_52, 1);
	func_30("lifeinvader_presentation", &iLocal_51, 1);
	func_29("LEST1", 0, 1, 0);
	iVar0 = 0;
	while (iVar0 <= 26)
	{
		func_23(&(Local_42[iVar0 /*178*/]), iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		func_22(&(Local_44[iVar0 /*24*/]), iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 23)
	{
		func_21(&(Local_46[iVar0 /*24*/]), iVar0);
		iVar0++;
	}
	unk_0x996AC9A66B2A5A3F(1);
	unk_0xED8E639D9071342D("Big_Disp", 0);
	unk_0xC70517054574AD3E(joaat("prop_huge_display_01"));
	unk_0xC70517054574AD3E(joaat("prop_huge_display_02"));
	iLocal_53 = unk_0xCE506A7684415A58("Big_Disp");
	iLocal_54 = unk_0xECF3C87B07EE1C98();
	while (unk_0xF3160454EE16A1B1(unk_0xBC25C936A095B5BA()))
	{
		SYSTEM::WAIT(0);
	}
	while (!unk_0xDC9E16E99286F31D())
	{
		SYSTEM::WAIT(0);
	}
	SYSTEM::WAIT(2000);
	iLocal_59 = 0;
	vLocal_21.x = 12;
	vLocal_21.y = 0;
	vLocal_21.z = 0;
	iVar0 = 0;
	while (iVar0 <= (16 - 1))
	{
		func_19(iVar0);
		iVar0++;
	}
	if (bLocal_56)
	{
	}
}

void func_19(int iParam0)//Position - 0x85C
{
	switch (iParam0)
	{
		case 0:
			func_20(iParam0, 0, 10000);
			break;
		
		case 1:
			func_20(iParam0, 9000, 10000);
			break;
		
		case 2:
			func_20(iParam0, 27000, 32000);
			break;
		
		case 3:
			func_20(iParam0, 32000, 42000);
			break;
		
		case 4:
			func_20(iParam0, 51000, 63000);
			break;
		
		case 5:
			func_20(iParam0, 63600, 69000);
			break;
		
		case 6:
			func_20(iParam0, 66000, 70200);
			break;
		
		case 7:
			func_20(iParam0, 69600, 79200);
			break;
		
		case 8:
			func_20(iParam0, 77400, 84000);
			break;
		
		case 12:
			func_20(iParam0, 81000, 93600);
			break;
		
		case 9:
			func_20(iParam0, -1, -1);
			break;
		
		case 11:
			func_20(iParam0, 90000, 154200);
			break;
		
		case 10:
			func_20(iParam0, 129600, 133200);
			break;
		
		case 13:
			func_20(iParam0, 144600, 154200);
			break;
		
		case 14:
			func_20(iParam0, 152700, 154200);
			break;
		
		case 15:
			func_20(iParam0, 154200, 154200);
			break;
	}
}

void func_20(int iParam0, int iParam1, int iParam2)//Position - 0x9CC
{
	Local_22[iParam0] = iParam1;
	Local_22.f_11[iParam0] = iParam2;
}

void func_21(var uParam0, int iParam1)//Position - 0x9E6
{
	uParam0->f_16 = 0;
	unk_0x7CB6FD92BE491AD9(&uLocal_47, iParam1);
	if (iParam1 == 0 && uParam0->f_16 == 0)
	{
	}
}

void func_22(var uParam0, int iParam1)//Position - 0xA0E
{
	uParam0->f_16 = 0;
	unk_0x7CB6FD92BE491AD9(&uLocal_45, iParam1);
	if (iParam1 == 0 && uParam0->f_16 == 0)
	{
	}
}

void func_23(var uParam0, int iParam1)//Position - 0xA36
{
	vector3 vVar0;
	
	func_28(uParam0);
	unk_0x7CB6FD92BE491AD9(&uLocal_43, iParam1);
	switch (iParam1)
	{
		case 0:
			vVar0 = { 0f, 0f, (func_27(-4.29f) + 180f) };
			func_25(uParam0, 82047830, 667.319f, 572.133f, 128.521f, vVar0, 6, 0, 0);
			func_25(uParam0, 83248680, 666.312f, 571.675f, 128.521f, vVar0, 6, 1, 0);
			func_25(uParam0, 71526810, 665.235f, 571.183f, 128.521f, vVar0, 6, 2, 0);
			func_25(uParam0, 49826530, 664.124f, 570.679f, 128.521f, vVar0, 6, 0, 0);
			func_25(uParam0, 78575440, 663.029f, 570.181f, 128.521f, vVar0, 6, 1, 0);
			func_25(uParam0, 12133230, 661.937f, 569.685f, 128.521f, vVar0, 6, 2, 0);
			func_25(uParam0, 89665750, 660.839f, 569.194f, 128.521f, vVar0, 6, 0, 0);
			func_25(uParam0, 65990810, 659.537f, 569.392f, 128.521f, vVar0, 6, 1, 0);
			func_25(uParam0, 21233450, 658.187f, 569.572f, 128.523f, vVar0, 4, 0, 1f);
			func_24(&(uParam0->f_9B[0 /*11*/]), 659.867f, 571.539f, 128.531f, vVar0, 0, 0.5f, -1.5f);
			func_24(&(uParam0->f_9B[1 /*11*/]), 660.646f, 567.108f, 128.521f, vVar0, 0, 0.5f, -1.5f);
			break;
		
		case 1:
			vVar0 = { 0f, 0f, (func_27(-3.98f) + 180f) };
			func_25(uParam0, 21091970, 670.312f, 568.023f, 128.521f, vVar0, 5, 0, 0.5f);
			func_25(uParam0, 97482490, 669.189f, 567.502f, 128.522f, vVar0, 6, 1, 0);
			func_25(uParam0, 66764240, 668.28f, 566.688f, 128.522f, vVar0, 6, 0, 0);
			func_25(uParam0, 82832850, 667.384f, 565.885f, 128.522f, vVar0, 6, 2, 0);
			func_25(uParam0, 33636100, 666.491f, 565.085f, 128.522f, vVar0, 6, 0, 0);
			func_25(uParam0, 22769640, 665.595f, 564.282f, 128.522f, vVar0, 6, 1, 0);
			break;
		
		case 2:
			vVar0 = { 0f, 0f, (func_27(-3.78f) + 180f) };
			func_25(uParam0, 91480760, 673.7f, 564.799f, 128.521f, vVar0, 6, 0, 0);
			func_25(uParam0, 64996320, 672.996f, 563.847f, 128.521f, vVar0, 6, 1, 0);
			func_25(uParam0, 30855220, 672.271f, 562.865f, 128.521f, vVar0, 6, 2, 0);
			func_25(uParam0, 98921990, 671.557f, 561.897f, 128.521f, vVar0, 6, 0, 0);
			func_25(uParam0, 73357200, 670.258f, 561.366f, 128.522f, vVar0, 6, 1, 0);
			func_24(&(uParam0->f_9B[0 /*11*/]), 669.564f, 563.469f, 128.521f, vVar0, 2, -1.5f, -1.5f);
			func_24(&(uParam0->f_9B[1 /*11*/]), 672.34f, 559.914f, 128.522f, vVar0, 2, -1.5f, -1.5f);
			break;
		
		case 3:
			vVar0 = { 0f, 0f, (func_27(-3.38f) + 180f) };
			func_25(uParam0, 89689390, 681.517f, 555.801f, 128.522f, vVar0, 6, 0, 0);
			func_25(uParam0, 71057000, 681.796f, 556.967f, 128.522f, vVar0, 6, 1, 0);
			func_25(uParam0, 26206390, 682.076f, 558.137f, 128.522f, vVar0, 6, 2, 0);
			func_25(uParam0, 58207860, 682.36f, 559.342f, 128.522f, vVar0, 6, 0, 0);
			func_25(uParam0, 43622440, 682.635f, 560.475f, 128.522f, vVar0, 6, 1, 0);
			break;
		
		case 4:
			vVar0 = { 0f, 0f, (func_27(-3.17f) + 180f) };
			func_25(uParam0, 78555440, 687.841f, 559.785f, 128.522f, vVar0, 6, 0, 0);
			func_25(uParam0, 12324420, 687.807f, 558.602f, 128.522f, vVar0, 6, 1, 0);
			func_25(uParam0, 4083210, 687.771f, 557.382f, 128.522f, vVar0, 6, 2, 0);
			func_25(uParam0, 2021980, 688.465f, 556.159f, 128.522f, vVar0, 6, 0, 0);
			func_25(uParam0, 21091970, 688.431f, 554.961f, 128.521f, vVar0, 6, 1, 0);
			func_24(&(uParam0->f_9B[0 /*11*/]), 685.931f, 556.306f, 128.522f, vVar0, 0, 0.5f, -1.5f);
			func_24(&(uParam0->f_9B[1 /*11*/]), 685.897f, 555.108f, 128.521f, vVar0, 1, -1.5f, -1.5f);
			break;
		
		case 5:
			vVar0 = { 0f, 0f, (func_27(-2.97f) + 180f) };
			func_25(uParam0, 31491440, 692.632f, 559.992f, 128.522f, vVar0, 5, 2, -0.5f);
			func_25(uParam0, 34393340, 693.189f, 558.886f, 128.522f, vVar0, 6, 0, 0);
			func_25(uParam0, 94762900, 693.396f, 557.684f, 128.522f, vVar0, 6, 1, 0);
			func_25(uParam0, 95283980, 693.6f, 556.498f, 128.522f, vVar0, 6, 2, 0);
			func_25(uParam0, 92416940, 693.803f, 555.317f, 128.522f, vVar0, 6, 0, 0);
			func_25(uParam0, 53597080, 694.007f, 554.131f, 128.522f, vVar0, 6, 1, 0);
			break;
		
		case 6:
			vVar0 = { 0f, 0f, (func_27(-2.7f) + 180f) };
			func_25(uParam0, 86170110, 697.492f, 561.188f, 128.522f, vVar0, 6, 0, 0);
			func_25(uParam0, 62247860, 697.964f, 560.188f, 128.522f, vVar0, 6, 1, 0);
			func_25(uParam0, 43665230, 698.467f, 559.116f, 128.522f, vVar0, 6, 2, 0);
			func_25(uParam0, 32906070, 698.988f, 558.013f, 128.522f, vVar0, 6, 0, 0);
			func_25(uParam0, 70836820, 699.502f, 556.925f, 128.522f, vVar0, 6, 1, 0);
			func_25(uParam0, 67800350, 700.014f, 555.841f, 128.522f, vVar0, 6, 2, 0);
			func_25(uParam0, 41115560, 701.184f, 555.063f, 128.521f, vVar0, 6, 0, 0);
			func_25(uParam0, 98430790, 701.005f, 553.758f, 128.522f, vVar0, 6, 1, 0);
			func_24(&(uParam0->f_9B[0 /*11*/]), 698.861f, 554.048f, 128.521f, vVar0, 0, 0.5f, -1.5f);
			func_24(&(uParam0->f_9B[1 /*11*/]), 703.267f, 554.91f, 128.522f, vVar0, 0, 0.5f, -1.5f);
			break;
		
		case 7:
			vVar0 = { 0f, 0f, (func_27(-3.99f) + 180f) };
			func_25(uParam0, 13168530, 652.833f, 570.052f, 128.529f, vVar0, 6, 0, 0);
			func_25(uParam0, 92127780, 652.006f, 569.319f, 128.528f, vVar0, 6, 1, 0);
			func_25(uParam0, 51664260, 651.136f, 568.538f, 128.729f, vVar0, 6, 2, 0);
			func_25(uParam0, 35914010, 650.242f, 567.746f, 128.729f, vVar0, 6, 0, 0);
			func_25(uParam0, 43076060, 649.661f, 566.94f, 128.929f, vVar0, 6, 1, 0);
			func_25(uParam0, 21755390, 648.426f, 566.137f, 128.929f, vVar0, 6, 2, 0);
			break;
		
		case 8:
			vVar0 = { 0f, 0f, (func_27(-3.9f) + 180f) };
			func_25(uParam0, 20501110, 656.955f, 565.868f, 128.53f, vVar0, 6, 0, 0);
			func_25(uParam0, 10114780, 656.193f, 565.067f, 128.53f, vVar0, 6, 1, 0);
			func_25(uParam0, 12664730, 655.358f, 564.19f, 128.73f, vVar0, 6, 2, 0);
			func_25(uParam0, 32956570, 654.534f, 563.324f, 128.73f, vVar0, 6, 0, 0);
			func_25(uParam0, 11862860, 653.696f, 562.443f, 128.93f, vVar0, 6, 1, 0);
			func_25(uParam0, 87809290, 652.862f, 561.566f, 128.93f, vVar0, 6, 2, 0);
			break;
		
		case 9:
			vVar0 = { 0f, 0f, (func_27(-3.76f) + 180f) };
			func_25(uParam0, 75170110, 662.947f, 560.965f, 128.529f, vVar0, 6, 0, 0);
			func_25(uParam0, 62246860, 662.306f, 560.065f, 128.529f, vVar0, 6, 1, 0);
			func_25(uParam0, 83665250, 661.603f, 559.079f, 128.73f, vVar0, 6, 2, 0);
			func_25(uParam0, 22016170, 660.91f, 558.106f, 128.73f, vVar0, 6, 0, 0);
			func_25(uParam0, 41846840, 660.204f, 557.116f, 128.929f, vVar0, 6, 1, 0);
			func_25(uParam0, 10000350, 659.502f, 556.13f, 128.929f, vVar0, 6, 2, 0);
			break;
		
		case 10:
			vVar0 = { 0f, 0f, (func_27(-3.68f) + 180f) };
			func_25(uParam0, 86878180, 667.872f, 557.785f, 128.53f, vVar0, 6, 0, 0);
			func_25(uParam0, 22242820, 667.31f, 556.833f, 128.53f, vVar0, 6, 1, 0);
			func_25(uParam0, 93969290, 666.693f, 555.791f, 128.73f, vVar0, 6, 2, 0);
			func_25(uParam0, 12101010, 666.086f, 554.762f, 128.73f, vVar0, 6, 0, 0);
			func_25(uParam0, 20232220, 665.467f, 553.715f, 128.93f, vVar0, 6, 1, 0);
			func_25(uParam0, 57707370, 664.852f, 552.673f, 128.93f, vVar0, 6, 2, 0);
			break;
		
		case 11:
			vVar0 = { 0f, 0f, (func_27(-3.53f) + 180f) };
			func_25(uParam0, 13130110, 674.882f, 554.326f, 128.529f, vVar0, 6, 0, 0);
			func_25(uParam0, 97845810, 674.46f, 553.305f, 128.529f, vVar0, 6, 1, 0);
			func_25(uParam0, 12345670, 673.997f, 552.186f, 128.73f, vVar0, 6, 2, 0);
			func_25(uParam0, 89101110, 673.541f, 551.081f, 128.73f, vVar0, 6, 0, 0);
			func_25(uParam0, 12131410, 673.076f, 549.958f, 128.929f, vVar0, 6, 1, 0);
			func_25(uParam0, 51617180, 672.613f, 548.839f, 128.929f, vVar0, 6, 2, 0);
			break;
		
		case 12:
			vVar0 = { 0f, 0f, (func_27(-3.45f) + 180f) };
			func_25(uParam0, 60616260, 680.396f, 552.335f, 128.53f, vVar0, 6, 0, 0);
			func_25(uParam0, 36465660, 680.063f, 551.281f, 128.53f, vVar0, 6, 1, 0);
			func_25(uParam0, 67686970, 679.697f, 550.127f, 128.73f, vVar0, 6, 2, 0);
			func_25(uParam0, 71727370, 679.336f, 548.988f, 128.73f, vVar0, 6, 0, 0);
			func_25(uParam0, 47576770, 678.969f, 547.829f, 128.93f, vVar0, 6, 1, 0);
			func_25(uParam0, 78798080, 678.603f, 546.674f, 128.93f, vVar0, 6, 2, 0);
			break;
		
		case 13:
			vVar0 = { 0f, 0f, (func_27(-3.31f) + 180f) };
			func_25(uParam0, 11511610, 688.034f, 550.483f, 128.529f, vVar0, 6, 0, 0);
			func_25(uParam0, 17118110, 687.853f, 549.393f, 128.529f, vVar0, 6, 1, 0);
			func_25(uParam0, 91201210, 687.653f, 548.199f, 128.73f, vVar0, 6, 2, 0);
			func_25(uParam0, 12212310, 687.457f, 547.02f, 128.73f, vVar0, 6, 0, 0);
			func_25(uParam0, 23124120, 687.257f, 545.821f, 128.929f, vVar0, 6, 1, 0);
			func_25(uParam0, 51261270, 687.058f, 544.627f, 128.929f, vVar0, 6, 2, 0);
			break;
		
		case 14:
			vVar0 = { 0f, 0f, (func_27(-3.22f) + 180f) };
			func_25(uParam0, 15515610, 693.855f, 549.783f, 128.53f, vVar0, 6, 0, 0);
			func_25(uParam0, 57158150, 693.767f, 548.682f, 128.53f, vVar0, 6, 1, 0);
			func_25(uParam0, 91601610, 693.67f, 547.474f, 128.73f, vVar0, 6, 2, 0);
			func_25(uParam0, 16216310, 693.575f, 546.283f, 128.73f, vVar0, 6, 0, 0);
			func_25(uParam0, 64165160, 693.478f, 545.071f, 128.93f, vVar0, 6, 1, 0);
			func_25(uParam0, 61671680, 693.381f, 543.865f, 128.93f, vVar0, 6, 2, 0);
			break;
		
		case 15:
			vVar0 = { 0f, 0f, (func_27(-3.08f) + 180f) };
			func_25(uParam0, 19920020, 701.652f, 549.708f, 128.529f, vVar0, 6, 0, 0);
			func_25(uParam0, 1202200, 701.721f, 548.605f, 128.529f, vVar0, 6, 1, 0);
			func_25(uParam0, 32042050, 701.795f, 547.396f, 128.729f, vVar0, 6, 2, 0);
			func_25(uParam0, 20620720, 701.869f, 546.203f, 128.729f, vVar0, 6, 0, 0);
			func_25(uParam0, 8209210, 701.944f, 544.99f, 128.929f, vVar0, 6, 1, 0);
			func_25(uParam0, 2112120, 702.019f, 543.781f, 128.929f, vVar0, 6, 2, 0);
			break;
		
		case 16:
			vVar0 = { 0f, 0f, (func_27(-2.99f) + 180f) };
			func_25(uParam0, 24024120, 707.482f, 550.335f, 128.53f, vVar0, 6, 0, 0);
			func_25(uParam0, 43244240, 707.644f, 549.242f, 128.53f, vVar0, 6, 1, 0);
			func_25(uParam0, 42452460, 707.821f, 548.044f, 128.73f, vVar0, 6, 2, 0);
			func_25(uParam0, 24724820, 707.996f, 546.862f, 128.73f, vVar0, 6, 0, 0);
			func_25(uParam0, 48249250, 708.174f, 545.659f, 128.929f, vVar0, 6, 1, 0);
			func_25(uParam0, 2512520, 708.351f, 544.461f, 128.929f, vVar0, 6, 2, 0);
			break;
		
		case 17:
			vVar0 = { 0f, 0f, (func_27(-3.98f) + 180f) };
			func_25(uParam0, 46779100, 646.434f, 564.522f, 128.927f, vVar0, 6, 0, 0);
			func_25(uParam0, 93643160, 645.612f, 563.784f, 128.927f, vVar0, 6, 1, 0);
			func_25(uParam0, 34729570, 644.71f, 562.975f, 129.127f, vVar0, 6, 2, 0);
			func_25(uParam0, 28556490, 643.821f, 562.177f, 129.127f, vVar0, 6, 0, 0);
			func_25(uParam0, 75335160, 642.916f, 561.365f, 129.327f, vVar0, 6, 1, 0);
			func_25(uParam0, 84872300, 642.015f, 560.557f, 129.327f, vVar0, 6, 2, 0);
			break;
		
		case 18:
			vVar0 = { 0f, 0f, (func_27(-3.91f) + 180f) };
			func_25(uParam0, 65187100, 651.092f, 559.707f, 128.926f, vVar0, 6, 0, 0);
			func_25(uParam0, 87514460, 650.325f, 558.912f, 128.926f, vVar0, 6, 1, 0);
			func_25(uParam0, 46165810, 649.483f, 558.04f, 128.127f, vVar0, 6, 2, 0);
			func_25(uParam0, 12560720, 648.654f, 557.18f, 129.127f, vVar0, 6, 0, 0);
			func_25(uParam0, 27854880, 647.809f, 556.306f, 129.326f, vVar0, 6, 1, 0);
			func_25(uParam0, 97601360, 646.968f, 555.435f, 129.326f, vVar0, 6, 2, 0);
			break;
		
		case 19:
			vVar0 = { 0f, 0f, (func_27(-3.75f) + 180f) };
			func_25(uParam0, 55178130, 657.925f, 554.108f, 128.927f, vVar0, 6, 0, 0);
			func_25(uParam0, 75148880, 657.29f, 553.204f, 128.927f, vVar0, 6, 1, 0);
			func_25(uParam0, 88865540, 656.593f, 552.213f, 129.127f, vVar0, 6, 2, 0);
			func_25(uParam0, 64916770, 655.906f, 551.235f, 129.127f, vVar0, 6, 0, 0);
			func_25(uParam0, 70536220, 655.207f, 550.241f, 129.327f, vVar0, 6, 1, 0);
			func_25(uParam0, 17101310, 654.512f, 549.25f, 129.327f, vVar0, 6, 2, 0);
			break;
		
		case 20:
			vVar0 = { 0f, 0f, (func_27(-3.68f) + 180f) };
			func_25(uParam0, 76870120, 663.545f, 550.463f, 128.926f, vVar0, 6, 0, 0);
			func_25(uParam0, 32147850, 662.977f, 549.515f, 128.926f, vVar0, 6, 1, 0);
			func_25(uParam0, 97662220, 662.353f, 548.477f, 129.127f, vVar0, 6, 2, 0);
			func_25(uParam0, 12107070, 661.738f, 547.453f, 129.127f, vVar0, 6, 0, 0);
			func_25(uParam0, 60841880, 661.111f, 546.411f, 129.326f, vVar0, 6, 1, 0);
			func_25(uParam0, 27803350, 660.489f, 545.373f, 129.326f, vVar0, 6, 2, 0);
			break;
		
		case 21:
			vVar0 = { 0f, 0f, (func_27(-3.53f) + 180f) };
			func_25(uParam0, 19202120, 671.531f, 546.515f, 128.927f, vVar0, 6, 0, 0);
			func_25(uParam0, 22232420, 671.116f, 545.491f, 128.927f, vVar0, 6, 1, 0);
			func_25(uParam0, 52627280, 670.66f, 544.369f, 129.127f, vVar0, 6, 2, 0);
			func_25(uParam0, 29303130, 670.211f, 543.262f, 129.127f, vVar0, 6, 0, 0);
			func_25(uParam0, 23334350, 669.753f, 542.135f, 129.327f, vVar0, 6, 1, 0);
			func_25(uParam0, 36373830, 669.298f, 541.014f, 129.327f, vVar0, 6, 2, 0);
			break;
		
		case 22:
			vVar0 = { 0f, 0f, (func_27(-3.46f) + 180f) };
			func_25(uParam0, 18283840, 677.828f, 544.227f, 128.926f, vVar0, 6, 0, 0);
			func_25(uParam0, 85858680, 677.487f, 543.176f, 128.926f, vVar0, 6, 1, 0);
			func_25(uParam0, 78889900, 677.112f, 542.024f, 129.127f, vVar0, 6, 2, 0);
			func_25(uParam0, 91929390, 676.744f, 540.888f, 129.127f, vVar0, 6, 0, 0);
			func_25(uParam0, 49596970, 676.368f, 539.731f, 129.326f, vVar0, 6, 1, 0);
			func_25(uParam0, 98991000, 675.994f, 538.58f, 129.326f, vVar0, 6, 2, 0);
			break;
		
		case 23:
			vVar0 = { 0f, 0f, (func_27(-3.3f) + 180f) };
			func_25(uParam0, 12812910, 686.526f, 542.118f, 128.927f, vVar0, 6, 0, 0);
			func_25(uParam0, 30131130, 686.352f, 541.027f, 128.927f, vVar0, 6, 1, 0);
			func_25(uParam0, 21331340, 686.16f, 539.831f, 129.127f, vVar0, 6, 1, 0);
			func_25(uParam0, 13513610, 685.972f, 538.652f, 129.127f, vVar0, 6, 0, 0);
			func_25(uParam0, 37138130, 685.779f, 537.451f, 129.327f, vVar0, 6, 1, 0);
			func_25(uParam0, 91401410, 685.588f, 536.256f, 129.327f, vVar0, 6, 2, 0);
			break;
		
		case 24:
			vVar0 = { 0f, 0f, (func_27(-3.23f) + 180f) };
			func_25(uParam0, 16917010, 693.176f, 541.306f, 128.926f, vVar0, 6, 0, 0);
			func_25(uParam0, 71172170, 693.08f, 540.205f, 128.926f, vVar0, 6, 1, 0);
			func_25(uParam0, 31741750, 692.975f, 538.998f, 129.127f, vVar0, 6, 2, 0);
			func_25(uParam0, 17617810, 692.871f, 537.808f, 129.127f, vVar0, 6, 0, 0);
			func_25(uParam0, 79180180, 692.765f, 536.597f, 129.326f, vVar0, 6, 1, 0);
			func_25(uParam0, 21831840, 692.66f, 535.391f, 129.326f, vVar0, 6, 2, 0);
			break;
		
		case 25:
			vVar0 = { 0f, 0f, (func_27(-3.07f) + 180f) };
			func_25(uParam0, 21321420, 702.065f, 541.218f, 128.927f, vVar0, 6, 0, 0);
			func_25(uParam0, 15216210, 702.14f, 540.116f, 128.927f, vVar0, 6, 1, 0);
			func_25(uParam0, 72182190, 702.223f, 538.907f, 129.127f, vVar0, 6, 2, 0);
			func_25(uParam0, 22022120, 702.304f, 537.715f, 129.127f, vVar0, 6, 0, 0);
			func_25(uParam0, 22223220, 702.387f, 536.502f, 129.327f, vVar0, 6, 1, 0);
			func_25(uParam0, 42252260, 703.116f, 526.841f, 129.618f, vVar0, 6, 2, 0);
			break;
		
		case 26:
			vVar0 = { 0f, 0f, (func_27(-3f) + 180f) };
			func_25(uParam0, 25325420, 708.727f, 541.922f, 128.926f, vVar0, 6, 0, 0);
			func_25(uParam0, 55256250, 709.881f, 539.828f, 128.926f, vVar0, 6, 1, 0);
			func_25(uParam0, 72582590, 709.05f, 539.628f, 129.127f, vVar0, 6, 2, 0);
			func_25(uParam0, 26026120, 709.217f, 538.445f, 129.127f, vVar0, 6, 0, 0);
			func_25(uParam0, 62263260, 709.386f, 537.241f, 129.326f, vVar0, 6, 1, 0);
			func_25(uParam0, 42652650, 709.555f, 536.043f, 129.326f, vVar0, 6, 2, 0);
			break;
		
		default:
			break;
	}
}

void func_24(var uParam0, vector3 vParam1, vector3 vParam2, int iParam3, float fParam4, float fParam5)//Position - 0x23DB
{
	uParam0->f_1 = { vParam1 };
	uParam0->f_4 = { vParam2 };
	uParam0->f_7 = iParam3;
	*uParam0 = 1;
	uParam0->f_8 = fParam4;
	uParam0->f_9 = fParam5;
}

void func_25(var uParam0, int iParam1, vector3 vParam2, vector3 vParam3, int iParam4, int iParam5, int iParam6)//Position - 0x240D
{
	if (uParam0->f_9A >= *uParam0)
	{
		return;
	}
	func_26(uParam0[uParam0->f_9A /*17*/], iParam1, vParam2, vParam3, iParam4, iParam5, iParam6);
	uParam0->f_9A++;
}

void func_26(var uParam0, var uParam1, vector3 vParam2, vector3 vParam3, var uParam4, var uParam5, var uParam6)//Position - 0x2448
{
	*uParam0 = { vParam2 };
	uParam0->f_3 = { vParam3 };
	uParam0->f_6 = uParam4;
	uParam0->f_7 = uParam1;
	uParam0->f_8 = uParam5;
	uParam0->f_9 = uParam6;
}

float func_27(float fParam0)//Position - 0x247A
{
	return (fParam0 * 57.29578f);
}

void func_28(var uParam0)//Position - 0x248A
{
	uParam0->f_9A = 0;
	uParam0->f_9B[0 /*11*/] = 0;
	uParam0->f_9B[1 /*11*/] = 0;
}

int func_29(char* sParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x24A7
{
	int iVar0;
	
	iVar0 = unk_0x105601648511CC64() + 7500;
	unk_0x900CF084251DED26(sParam0, iParam1);
	if (unk_0xFA9040D29FE330BD(iParam1) && !bParam3)
	{
		return 1;
	}
	if (iParam2 == 0)
	{
		return 1;
	}
	while (!unk_0xFA9040D29FE330BD(iParam1))
	{
		SYSTEM::WAIT(0);
		if (unk_0x105601648511CC64() > iVar0 && !unk_0xFA9040D29FE330BD(iParam1))
		{
			return 0;
		}
	}
	return 1;
}

int func_30(char* sParam0, var uParam1, int iParam2)//Position - 0x250C
{
	int iVar0;
	
	iVar0 = unk_0x105601648511CC64() + 7500;
	if (*uParam1 == 0)
	{
		*uParam1 = unk_0x9934FEFB3B8C6DB8(sParam0);
	}
	if (unk_0xA7F138B5B1AB2CF6(*uParam1))
	{
		return 1;
	}
	if (iParam2 == 0)
	{
		return 1;
	}
	while (!unk_0xA7F138B5B1AB2CF6(*uParam1))
	{
		SYSTEM::WAIT(0);
		if (unk_0x105601648511CC64() > iVar0 && !unk_0xA7F138B5B1AB2CF6(*uParam1))
		{
			return 0;
		}
	}
	return 1;
}

int func_31(char* sParam0, int iParam1)//Position - 0x2574
{
	int iVar0;
	
	iVar0 = unk_0x105601648511CC64() + 7500;
	unk_0x522053D86D6E1C7A(sParam0);
	if (unk_0xF9E082857622D91E(sParam0))
	{
		return 1;
	}
	if (iParam1 == 0)
	{
		return 1;
	}
	while (!unk_0xF9E082857622D91E(sParam0))
	{
		SYSTEM::WAIT(0);
		if (unk_0x105601648511CC64() > iVar0 && !unk_0xF9E082857622D91E(sParam0))
		{
			return 0;
		}
	}
	return 1;
}

char* func_32(int iParam0)//Position - 0x25CF
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "misslester1b_crowd@a_";
			break;
		
		case 1:
			sVar0 = "misslester1b_crowd@b_";
			break;
		
		case 2:
			sVar0 = "misslester1b_crowd@c_";
			break;
		
		case 3:
			sVar0 = "misslester1b_crowd@d_";
			break;
		
		case 4:
			sVar0 = "misslester1b_crowd@e_";
			break;
		
		case 5:
			sVar0 = "misslester1b_crowd@f_";
			break;
		
		case 6:
			sVar0 = "misslester1b_crowd@g_";
			break;
		
		case 7:
			sVar0 = "misslester1b_crowd@h_";
			break;
		
		case 8:
			sVar0 = "misslester1b_crowd@i_";
			break;
		
		case 9:
			sVar0 = "misslester1b_crowd@j_";
			break;
		
		case 10:
			sVar0 = "misslester1b_crowd@k_";
			break;
		
		case 11:
			sVar0 = "misslester1b_crowd@l_";
			break;
		
		case 12:
			sVar0 = "misslester1b_crowd@m_";
			break;
	}
	return sVar0;
}

void func_33(int iParam0, int iParam1)//Position - 0x269F
{
	unk_0x1A8FF13FA68ECF72(0);
	unk_0xF88ED6E14792039C(true);
	unk_0xA7F63A62AD048372(0);
	unk_0x0F4D4FD0A5211FEC(true);
	unk_0x635083B90B1A9C63(unk_0xB5CEFD608600A09F(), 0);
	unk_0x6E52C7765A0F4382(0);
	unk_0x6B9198657DA89F17(1);
	*iParam0 = unk_0x1DAA351326EA3537(-7000f, -7000f, -100f, 7000f, 7000f, 315f, 0, 1, 1, 1);
	unk_0xD0FC9D284379BED4("DRIVE", 0);
	unk_0x379ACE23D404525C(-7000f, -7000f, -100f, 7000f, 7000f, 315f, false, 1);
	unk_0xDD56BACCCF835044(-7000f, -7000f, -100f, 7000f, 7000f, 315f, 0);
	if (func_7(unk_0xBC25C936A095B5BA()) && iParam1 == 1)
	{
		unk_0xA0C0B32E74BE8DB7(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 500f, 0);
	}
}

void func_34(bool bParam0)//Position - 0x276E
{
	unk_0xE85B33FB221A23CD(2, bParam0);
	unk_0xE85B33FB221A23CD(3, bParam0);
	unk_0xE85B33FB221A23CD(4, bParam0);
	unk_0xE85B33FB221A23CD(5, bParam0);
	unk_0xE85B33FB221A23CD(6, bParam0);
	unk_0xE85B33FB221A23CD(7, bParam0);
	unk_0xE85B33FB221A23CD(8, bParam0);
	unk_0xE85B33FB221A23CD(9, bParam0);
	unk_0xE85B33FB221A23CD(10, bParam0);
	unk_0xE85B33FB221A23CD(11, bParam0);
	unk_0xE85B33FB221A23CD(12, bParam0);
}

void func_35(bool bParam0)//Position - 0x27C8
{
	if (bParam0)
	{
		func_39();
		if (Global_389D.f_1 == 10 || Global_389D.f_1 == 9)
		{
			unk_0xF0059F27F7BB6680(&Global_93C, 16);
		}
		Global_389D.f_1 = 1;
		if (func_38(0))
		{
			func_36(0);
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

void func_36(int iParam0)//Position - 0x282B
{
	if (Global_3943)
	{
		func_37(0, 0);
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
	if (!func_16())
	{
		Global_389D.f_1 = 3;
	}
}

void func_37(bool bParam0, bool bParam1)//Position - 0x289B
{
	if (bParam0)
	{
		if (func_38(0))
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

int func_38(int iParam0)//Position - 0x290F
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

void func_39()//Position - 0x2969
{
	if (Global_389D.f_1 == 9 || Global_389D.f_1 == 10)
	{
		Global_3DED = 0;
		Global_3DE9 = 1;
	}
}

void func_40()//Position - 0x2992
{
	func_41();
	func_8(0, 1, 1, 0, 0);
	unk_0x95E4B6F3ED223F5A();
}

void func_41()//Position - 0x29AB
{
	int iVar0;
	
	if (unk_0x102F1A3BD4B68933())
	{
		if (unk_0x866EAD7E27D8D0F8())
		{
			unk_0x641313DE533F9784();
		}
		unk_0xD103510B8989BEB2();
	}
	func_51(&iLocal_60);
	unk_0xCE6E44419BF6F4AF("Big_Disp");
	unk_0x66EC947D9DEDE5B3("LInvader");
	unk_0xB0B0FE33F4F22679(&iLocal_51);
	unk_0xB0B0FE33F4F22679(&iLocal_52);
	unk_0x11E7662BFA0E7D15();
	iVar0 = 0;
	while (iVar0 < Local_42)
	{
		func_48(&(Local_42[iVar0 /*178*/]));
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_44)
	{
		func_45(&(Local_44[iVar0 /*24*/]));
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_46)
	{
		func_45(&(Local_46[iVar0 /*24*/]));
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_40)
	{
		func_44(iLocal_40[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		func_43(func_32(iVar0));
		iVar0++;
	}
	func_42(iLocal_63);
	func_8(0, 1, 1, 0, 0);
}

void func_42(int iParam0)//Position - 0x2A9F
{
	unk_0xF88ED6E14792039C(false);
	unk_0x1A8FF13FA68ECF72(3);
	unk_0x0F4D4FD0A5211FEC(false);
	unk_0xA7F63A62AD048372(3);
	unk_0x635083B90B1A9C63(unk_0xB5CEFD608600A09F(), 1);
	unk_0x6E52C7765A0F4382(1);
	unk_0x6B9198657DA89F17(0);
	unk_0x483687B0FCA5415A(iParam0, 0);
	unk_0xD0FC9D284379BED4("DRIVE", 1);
	unk_0x379ACE23D404525C(-7000f, -7000f, -100f, 7000f, 7000f, 315f, true, 1);
}

void func_43(char* sParam0)//Position - 0x2B02
{
	unk_0x4EA570997E107F35(sParam0);
}

void func_44(int iParam0)//Position - 0x2B10
{
	if (iParam0 != 0)
	{
		unk_0x2CA123B0622F495C(iParam0);
	}
}

void func_45(var uParam0)//Position - 0x2B24
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	
	sVar1 = func_47(uParam0->f_10);
	sVar2 = func_46(uParam0->f_10);
	iVar0 = 0;
	while (iVar0 < uParam0->f_11)
	{
		if (unk_0x724D816EA203A79E(uParam0->f_11[iVar0]) && !unk_0x1D403DFADBC2DE3C(uParam0->f_11[iVar0], 0))
		{
			unk_0x448CBB54998E5DCE(uParam0->f_11[iVar0], sVar2, sVar1, -1000f);
		}
		func_51(&(uParam0->f_11[iVar0]));
		iVar0++;
	}
}

char* func_46(int iParam0)//Position - 0x2B99
{
	char* sVar0;
	
	if (iParam0 == 0)
	{
	}
	sVar0 = "001077_01_14";
	return sVar0;
}

char* func_47(int iParam0)//Position - 0x2BAF
{
	char* sVar0;
	
	if (iParam0 == 0)
	{
	}
	sVar0 = "misslester1b_crowdlow@14@";
	return sVar0;
}

void func_48(var uParam0)//Position - 0x2BC4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_50(uParam0[iVar0 /*17*/]);
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_9B)
	{
		func_49(&(uParam0->f_9B[iVar0 /*11*/].f_A));
		iVar0++;
	}
}

void func_49(int iParam0)//Position - 0x2C10
{
	if (unk_0x724D816EA203A79E(*iParam0))
	{
		if (!unk_0x1D403DFADBC2DE3C(*iParam0, 0))
		{
			unk_0xB71D41C0310C93DE(*iParam0, 0, 1);
		}
		if (!unk_0x5CAE759AE8219D20(*iParam0))
		{
			unk_0x77815D3407C6700D(*iParam0, true, 0);
		}
		unk_0xF845620A03C7425B(iParam0);
	}
}

void func_50(var uParam0)//Position - 0x2C51
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_A)
	{
		func_49(&(uParam0->f_A[iVar0]));
		iVar0++;
	}
}

void func_51(int iParam0)//Position - 0x2C7A
{
	if (unk_0x724D816EA203A79E(*iParam0))
	{
		if (unk_0x2FAEA11D96CF14A3(*iParam0))
		{
			unk_0x17175087F2DB6AC8(*iParam0, 1, 1);
		}
		unk_0xA35241BCE4C1A24B(iParam0);
	}
}

