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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	int iLocal_29 = 0;
	float fLocal_30 = 0f;
	vector3 vLocal_31 = { 0f, 0f, 0f };
	float fLocal_32 = 0f;
	int iLocal_33 = 0;
	bool bLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	char cLocal_44[64] = "";
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	char cLocal_53[64] = "";
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	int iLocal_62 = 0;
	vector3 vLocal_63 = { 0f, 0f, 0f };
	vector3 vLocal_64 = { 0f, 0f, 0f };
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	vector3 vLocal_68 = { 0f, 0f, 0f };
	int iLocal_69 = 0;
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
	sLocal_18 = "NULL";
	iLocal_21 = 3;
	iLocal_25 = 1;
	iLocal_33 = -1;
	iLocal_40 = -1;
	iLocal_41 = -1;
	iLocal_42 = -1;
	StringCopy(&cLocal_44, "NULL", 64);
	StringCopy(&cLocal_53, "NULL", 64);
	if (unk_0xE8A79675302ED812(2))
	{
		func_66();
	}
	if (unk_0x724D816EA203A79E(iScriptParam_69))
	{
		iLocal_35 = iScriptParam_69;
		iLocal_38 = iScriptParam_69;
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		func_65();
		if (unk_0x724D816EA203A79E(iScriptParam_69))
		{
			if ((iLocal_41 != -1 && (func_64() && !func_63())) && !func_62(iLocal_41))
			{
				func_66();
			}
			if ((unk_0x7930B3E9C919E90F() && unk_0xFAB96FF5BAB29092() != 3) && unk_0x5935088CFB983803() == 3)
			{
				func_66();
			}
			if (func_61(13) || func_61(14))
			{
				func_66();
			}
			if (unk_0xF6231E2AD6680273(iScriptParam_69))
			{
				func_66();
			}
			if (unk_0x08B699D523A3F9CB(iScriptParam_69))
			{
				if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
				{
					func_60();
					if (unk_0x8D66276473ABD7CC(iScriptParam_69) < 950)
					{
						func_66();
					}
					switch (iLocal_29)
					{
						case 0:
							func_57();
							if (iLocal_41 == 5)
							{
								if (func_56(18) == 1 && func_56(20) == 0)
								{
									uLocal_39 = unk_0xF80718E42755119B(-809.962f, 170.919f, 75.7407f, 3f, "des_tvsmash");
									if (unk_0x9CD72B946AEA39F0(uLocal_39))
									{
										unk_0x16AF01D36A7DCE23(uLocal_39, 9);
									}
									unk_0x95E4B6F3ED223F5A();
								}
							}
							if (iLocal_41 == -1)
							{
								func_66();
							}
							else
							{
								func_55();
								unk_0xB02EBA8FD2534CAF("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1);
								unk_0xCB8EEC006EBFC1E7(0);
								Global_62F9[iLocal_41 /*11*/].f_2 = 0;
								Global_62F9[iLocal_41 /*11*/].f_6 = 1;
								Global_62F9[iLocal_41 /*11*/] = unk_0x491B2241281A03B7(0, 2);
								Global_62F9[iLocal_41 /*11*/].f_1 = 0;
								Global_62F9[iLocal_41 /*11*/].f_4 = 0;
								Global_62F9[iLocal_41 /*11*/].f_7 = 0;
								Global_62F9[iLocal_41 /*11*/].f_8 = 0;
								Global_62F9[iLocal_41 /*11*/].f_A = 0;
								fLocal_30 = -4f;
								func_53(&iLocal_26);
								func_51();
								func_50();
								SYSTEM::WAIT(0);
								iLocal_29 = 1;
							}
							break;
						
						case 1:
							if (unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
							{
								SYSTEM::WAIT(0);
							}
							else if (unk_0xAF1DD0A735416F90(iLocal_35) && unk_0xB506EAE677B8090D(iLocal_35, 90f))
							{
								if (func_42() || Global_62F9[iLocal_41 /*11*/].f_5)
								{
									iLocal_29 = 2;
								}
							}
							else
							{
								func_41(&iLocal_40);
							}
							break;
						
						case 2:
							func_51();
							if (!func_62(iLocal_41))
							{
								func_41(&iLocal_40);
								if (func_40("TV_HLP1"))
								{
									unk_0x7456702622C62EA0(1);
								}
							}
							if (unk_0x724D816EA203A79E(iLocal_35))
							{
								if (!unk_0x8F6EAC9E7D6812D5(iLocal_35))
								{
									unk_0xDC078F87049ECECE(iLocal_35, true, 0);
								}
							}
							if (unk_0x724D816EA203A79E(iLocal_37))
							{
								if (!unk_0x8F6EAC9E7D6812D5(iLocal_37))
								{
									unk_0xDC078F87049ECECE(iLocal_37, true, 0);
								}
							}
							if (unk_0x724D816EA203A79E(iLocal_36))
							{
								if (unk_0x8F6EAC9E7D6812D5(iLocal_36))
								{
									unk_0xDC078F87049ECECE(iLocal_36, false, 0);
								}
							}
							if (!unk_0x3362CDE8460ED38B(&cLocal_44, "NULL"))
							{
								unk_0x155A8308CD79CCE9(&cLocal_44, false);
							}
							unk_0x71A0432EDBACC722(0);
							SYSTEM::WAIT(0);
							if (unk_0x724D816EA203A79E(iLocal_38))
							{
								unk_0xCDCA74FF249AB959(iLocal_38);
							}
							if (!func_62(iLocal_41))
							{
								if ((Global_62F9[iLocal_41 /*11*/] == 3 || Global_62F9[iLocal_41 /*11*/] == 2) || Global_62F9[iLocal_41 /*11*/] == -1)
								{
									Global_62F9[iLocal_41 /*11*/] = unk_0x491B2241281A03B7(0, 2);
								}
								unk_0x5AA34F7239618297(Global_62F9[iLocal_41 /*11*/]);
								unk_0x7B9F1666641485C9(fLocal_30);
							}
							else
							{
								iLocal_42 = Global_62F9[iLocal_41 /*11*/];
								iLocal_43 = Global_62F9[iLocal_41 /*11*/].f_1;
								unk_0xE1900892794032D6(iLocal_42, func_39(iLocal_43), Global_62F9[iLocal_41 /*11*/].f_9);
								unk_0x5AA34F7239618297(iLocal_42);
								if (Global_62F9[iLocal_41 /*11*/].f_7)
								{
									Global_62F9[iLocal_41 /*11*/].f_5 = 0;
									Global_62F9[iLocal_41 /*11*/].f_7 = 0;
								}
							}
							Global_62F9[iLocal_41 /*11*/].f_2 = 1;
							func_38(133, 1);
							func_38(131, 1);
							func_38(132, 1);
							iLocal_29 = 3;
							break;
						
						case 3:
							if (Global_62F9[iLocal_41 /*11*/].f_4)
							{
								iLocal_29 = 6;
							}
							if (Global_62F9[iLocal_41 /*11*/].f_7 && func_62(iLocal_41))
							{
								Global_62F9[iLocal_41 /*11*/].f_7 = 0;
								iLocal_29 = 6;
							}
							if (!func_36(iLocal_41))
							{
								func_35();
								iLocal_29 = 5;
							}
							else
							{
								func_33();
								if (unk_0xA5A1668CC891DF7C() == -1)
								{
									unk_0x5AA34F7239618297(Global_62F9[iLocal_41 /*11*/]);
								}
								if (func_15())
								{
									iLocal_29 = 6;
								}
							}
							break;
						
						case 5:
							if (func_36(iLocal_41))
							{
								iLocal_29 = 2;
							}
							if (Global_62F9[iLocal_41 /*11*/].f_4)
							{
								iLocal_29 = 6;
							}
							break;
						
						case 6:
							func_1();
							if (iLocal_40 != -1)
							{
								func_41(&iLocal_40);
							}
							Global_62F9[iLocal_41 /*11*/].f_5 = 0;
							Global_62F9[iLocal_41 /*11*/].f_4 = 0;
							Global_62F9[iLocal_41 /*11*/].f_1 = 0;
							Global_62F9[iLocal_41 /*11*/].f_2 = 0;
							Global_62F9[iLocal_41 /*11*/].f_7 = 0;
							Global_62F9[iLocal_41 /*11*/].f_8 = 0;
							Global_62F9[iLocal_41 /*11*/].f_A = 0;
							iLocal_29 = 1;
							break;
						}
					}
			}
		}
		else
		{
			func_66();
			unk_0x95E4B6F3ED223F5A();
		}
	}
	func_66();
	unk_0x95E4B6F3ED223F5A();
}

void func_1()//Position - 0x4E5
{
	if (iLocal_41 != -1)
	{
		Global_62F9[iLocal_41 /*11*/] = unk_0xA5A1668CC891DF7C();
	}
	fLocal_30 = unk_0x4AB522627FFE49CA();
	unk_0x5AA34F7239618297(-1);
	func_4();
	if (unk_0xB731B8C5BCE89836(joaat("family5")) == 0)
	{
		if (!unk_0x3362CDE8460ED38B(&cLocal_44, "NULL"))
		{
			unk_0x155A8308CD79CCE9(&cLocal_44, true);
		}
	}
	if (((func_40("TV_HLP1") || func_40("TV_HLP2")) || func_40("TV_HLP5")) || func_40("TV_HLP6"))
	{
		unk_0x7456702622C62EA0(1);
	}
	func_3();
	func_50();
	if (unk_0x724D816EA203A79E(iLocal_36))
	{
		if (!unk_0x8F6EAC9E7D6812D5(iLocal_36))
		{
			unk_0xDC078F87049ECECE(iLocal_36, true, 0);
		}
	}
	unk_0x2E79224E47980006(0);
	func_2();
}

void func_2()//Position - 0x58F
{
	if (unk_0x8ACB0C3FACC09467())
	{
		if (iLocal_67 == 1)
		{
			unk_0x4110C66549D5F74F();
			iLocal_67 = 0;
		}
	}
}

void func_3()//Position - 0x5AB
{
	if (!iLocal_33 == -1)
	{
		unk_0xF14A31FD690DC3B0(iLocal_33);
		if (unk_0x724D816EA203A79E(iLocal_35))
		{
			if (unk_0x6F79ECA8C83E4357(iLocal_35) == joaat("v_ilev_mm_screen2") || unk_0x6F79ECA8C83E4357(iLocal_35) == joaat("v_ilev_mm_scre_off"))
			{
				unk_0xDC078F87049ECECE(iLocal_35, false, 0);
				if (unk_0x6F79ECA8C83E4357(iLocal_35) == joaat("v_ilev_mm_scre_off"))
				{
					unk_0xF7EBEC3FF57AEC65(0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
				}
			}
			else
			{
				unk_0xF7EBEC3FF57AEC65(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, 0);
			}
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_37))
	{
		unk_0xDC078F87049ECECE(iLocal_37, false, 0);
	}
}

void func_4()//Position - 0x642
{
	if (iLocal_65)
	{
		unk_0x062C9995BFD27B2A(false, false, 3000, 1, 0, 0);
		if (unk_0xEDEA6C8F42EE05F6(iLocal_62))
		{
			unk_0x348665177DBFB93B(iLocal_62, false);
		}
		unk_0x4EC087603E1DEF9C(iLocal_62, 0);
		unk_0xF3F01A78937DC905(0f);
		if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			unk_0x346478B12F69D4E3(unk_0xBC25C936A095B5BA(), false);
			unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
			unk_0x4BED3C9D6EF14C38(unk_0xBC25C936A095B5BA(), vLocal_31, 1, 0, 2);
			if (!unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()))
			{
				if (bLocal_34 == 1)
				{
					bLocal_34 = false;
					unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
				}
			}
			unk_0xDC078F87049ECECE(unk_0xBC25C936A095B5BA(), true, 0);
		}
		if (!unk_0x3362CDE8460ED38B(&cLocal_53, "NULL"))
		{
			if (unk_0x144E80F5C46A6B75(&cLocal_53))
			{
				unk_0xC1300D0F3A74E20B(&cLocal_53);
			}
		}
		if (unk_0x724D816EA203A79E(iLocal_37))
		{
			unk_0xDC078F87049ECECE(iLocal_37, true, 0);
		}
		func_5(0, 1, 0, 0, 0);
		unk_0x2E79224E47980006(0);
		iLocal_65 = 0;
	}
}

void func_5(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x70C
{
	if (bParam0)
	{
		unk_0x0D2E9062E966BE4F(unk_0xB5CEFD608600A09F());
		unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 1);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 1);
		func_14(1);
		unk_0x32FF237D69EB5489();
		unk_0x3169E2C5E6A096BC();
		if (Global_389D.f_1 > 3)
		{
			if (unk_0x58E7DDFF8D17A82A())
			{
				unk_0x1E08809A5041F85B(false);
			}
			if (!func_13())
			{
				Global_389D.f_1 = 3;
			}
			Global_3DB8 = 5;
		}
		func_12(1, iParam3, iParam2, 0);
		Global_DAA5 = 1;
		Global_10ABB = 1;
		Global_11540 = 1;
	}
	else
	{
		func_14(0);
		unk_0xCB50D125C355ED9C();
		Global_DAA5 = 0;
		if (bParam1)
		{
			unk_0x7FF4F08CAB3344B1();
		}
		unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 0);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 0);
		func_12(0, iParam3, iParam2, 0);
		if (unk_0x7AF0088ABFA713B6())
		{
			if ((((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_10(unk_0xB5CEFD608600A09F())) && !func_7(unk_0xB5CEFD608600A09F(), 0)) && !func_6()) && !bParam4)
			{
				unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), false);
			}
		}
		else if ((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_10(unk_0xB5CEFD608600A09F())) && !bParam4)
		{
			unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), false);
		}
		Global_11540 = 0;
	}
}

bool func_6()//Position - 0x835
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_27.f_12, 14);
}

bool func_7(int iParam0, int iParam1)//Position - 0x852
{
	bool bVar0;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		bVar0 = func_8(-1, 0) == 8;
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

int func_8(int iParam0, bool bParam1)//Position - 0x89D
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_9();
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

int func_9()//Position - 0x8DE
{
	return Global_1407E0;
}

int func_10(int iParam0)//Position - 0x8EA
{
	if (func_7(iParam0, 0))
	{
		return 1;
	}
	if (func_11())
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

bool func_11()//Position - 0x92C
{
	return unk_0xFA30DFD0084E92FE(Global_240006, 3);
}

int func_12(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x93D
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

int func_13()//Position - 0x970
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_14(int iParam0)//Position - 0x997
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

int func_15()//Position - 0x9BA
{
	if (!func_62(iLocal_41))
	{
		if (((((((func_29(&iLocal_26) >= 1f && unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vLocal_68, 1f, 1f, 1.5f, false, true, 0)) && unk_0x645938DA8ED5E0BA(iLocal_35) == unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA())) && !func_28(8, -1)) && !unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0)) && unk_0x053F9FA04F814AF3(unk_0xBC25C936A095B5BA(), vLocal_31, 90f)) && !unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) && !unk_0x7930B3E9C919E90F())
		{
			if (iLocal_40 == -1)
			{
				func_27();
				func_26(&iLocal_40, 3, "TV_HLP5", 0, 0, 0, 0);
			}
			else if (func_24(iLocal_40, 1))
			{
				func_41(&iLocal_40);
				func_53(&iLocal_26);
				Global_62F9[iLocal_41 /*11*/].f_7 = 0;
				if (unk_0xF25512B8A510B0E1("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					unk_0xC4BA30B532FE260F(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, true);
				}
				return 1;
			}
			func_16();
		}
		else
		{
			if (func_40("TV_HLP5"))
			{
				unk_0x7456702622C62EA0(1);
			}
			func_2();
			func_41(&iLocal_40);
		}
	}
	return 0;
}

void func_16()//Position - 0xAC6
{
	if (iLocal_65 == 0)
	{
		unk_0xD55638CE45B2B948(2, 222);
		if (unk_0x694514BD37EC4E94(2, 222))
		{
			func_41(&iLocal_40);
			func_26(&iLocal_40, 3, "TV_HLP6", 0, 0, 0, 0);
			func_23();
		}
	}
	else
	{
		unk_0xBBC4195AD74D153D(2, 200, 1);
		if (unk_0x8F6EAC9E7D6812D5(unk_0xBC25C936A095B5BA()))
		{
			unk_0xDC078F87049ECECE(unk_0xBC25C936A095B5BA(), false, 0);
		}
		if (bLocal_34)
		{
			if (unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()))
			{
				unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 0);
			}
		}
		unk_0xDE7B9CB38D019BF0();
		unk_0x20852A0028996F02(unk_0xBC25C936A095B5BA());
		func_21(1, 1);
		unk_0xD55638CE45B2B948(2, 222);
		func_17(0);
		if (unk_0x694514BD37EC4E94(2, 222) || (unk_0x50465D2C022B9E04(2) && unk_0xCB3E71B7B7FACCAF(2, 200)))
		{
			func_41(&iLocal_40);
			func_4();
		}
	}
}

void func_17(int iParam0)//Position - 0xB80
{
	if (!Global_389D.f_1 == 1)
	{
		if (func_20(0))
		{
			func_18(iParam0);
		}
		unk_0xF0059F27F7BB6680(&Global_93C, 2);
	}
}

void func_18(int iParam0)//Position - 0xBA9
{
	if (Global_3943)
	{
		func_19(0, 0);
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
	if (!func_13())
	{
		Global_389D.f_1 = 3;
	}
}

void func_19(bool bParam0, bool bParam1)//Position - 0xC19
{
	if (bParam0)
	{
		if (func_20(0))
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

int func_20(int iParam0)//Position - 0xC8D
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

void func_21(bool bParam0, bool bParam1)//Position - 0xCE7
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 64;
	if (bParam0)
	{
		if (func_22(0))
		{
			if (!iLocal_22)
			{
				if (unk_0xF25512B8A510B0E1("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					unk_0xC4BA30B532FE260F(-1, "MICHAEL_SOFA_TV_CHANGE_CHANNEL_MASTER", 0, true);
				}
				if (unk_0xA5A1668CC891DF7C() == 0)
				{
					unk_0x5AA34F7239618297(1);
				}
				else
				{
					unk_0x5AA34F7239618297(0);
				}
				iLocal_22 = 1;
			}
		}
		else if (iLocal_22)
		{
			iLocal_22 = 0;
		}
	}
	if (bParam1)
	{
		iVar1 = (unk_0x1B3AE5B27313855F(2, 219) - 127);
		if (!iLocal_23)
		{
			if (iVar1 > (0 + iVar0))
			{
				fVar2 = unk_0x4AB522627FFE49CA();
				fVar2 = (fVar2 - 0.5f);
				if (fVar2 < -36f)
				{
					fVar2 = -36f;
				}
				unk_0x7B9F1666641485C9(fVar2);
				iLocal_24 = unk_0x105601648511CC64();
				iLocal_23 = 1;
			}
			if (iVar1 < (0 - iVar0))
			{
				fVar2 = unk_0x4AB522627FFE49CA();
				fVar2 = (fVar2 + 0.5f);
				if (fVar2 > 0f)
				{
					fVar2 = 0f;
				}
				unk_0x7B9F1666641485C9(fVar2);
				iLocal_24 = unk_0x105601648511CC64();
				iLocal_23 = 1;
			}
			if (iVar1 < (0 + iVar0) && iVar1 > (0 - iVar0))
			{
				iLocal_25 = 1;
			}
			else if (iLocal_25)
			{
				if (unk_0xF25512B8A510B0E1("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					if (fVar2 != -36f && fVar2 != 0f)
					{
						unk_0xC4BA30B532FE260F(-1, "MICHAEL_SOFA_REMOTE_CLICK_VOLUME_MASTER", 0, true);
					}
					iLocal_25 = 0;
				}
			}
		}
		if (iLocal_23)
		{
			if (iVar1 == 0 || unk_0x105601648511CC64() > iLocal_24 + 24)
			{
				iLocal_23 = 0;
			}
		}
	}
}

int func_22(int iParam0)//Position - 0xE2E
{
	int iVar0;
	int iVar1;
	
	iVar0 = 64;
	iVar1 = (unk_0x1B3AE5B27313855F(2, 218) - 127);
	if (iParam0 || SYSTEM::TIMERA() > 300)
	{
		if (iVar1 > (0 + iVar0) || iVar1 < (0 - iVar0))
		{
			SYSTEM::SETTIMERA(0);
			return 1;
		}
	}
	return 0;
}

void func_23()//Position - 0xE7A
{
	float fVar0;
	
	fVar0 = 50f;
	if (iLocal_65 == 0)
	{
		iLocal_62 = unk_0x6B8F797EEC7B95E2("DEFAULT_SCRIPTED_CAMERA", vLocal_63, vLocal_64, fVar0, 0, 2);
		unk_0x13063677BCFA7207(iLocal_62, 100f);
		unk_0x348665177DBFB93B(iLocal_62, true);
		unk_0x062C9995BFD27B2A(true, false, 3000, 1, 0, 0);
		if (unk_0x724D816EA203A79E(iLocal_37))
		{
			unk_0xDC078F87049ECECE(iLocal_37, false, 0);
		}
		if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			unk_0x346478B12F69D4E3(unk_0xBC25C936A095B5BA(), true);
			unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
			if (unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()))
			{
				unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 0);
				bLocal_34 = true;
			}
			unk_0x4BED3C9D6EF14C38(unk_0xBC25C936A095B5BA(), vLocal_31, -1, 0, 2);
			unk_0xDC078F87049ECECE(unk_0xBC25C936A095B5BA(), false, 0);
		}
		if (!unk_0x3362CDE8460ED38B(&cLocal_53, "NULL"))
		{
			if (!unk_0x144E80F5C46A6B75(&cLocal_53))
			{
				unk_0xD6423910AAD8A379(&cLocal_53);
			}
		}
		func_5(1, 1, 0, 0, 0);
		unk_0x2E79224E47980006(1);
		iLocal_65 = 1;
	}
}

int func_24(int iParam0, bool bParam1)//Position - 0xF4F
{
	int iVar0;
	
	iVar0 = func_25(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x6A9CDB766DF7216F(unk_0xFC1CAE18F3ECBF2D()))
	{
		return 0;
	}
	if (func_20(0))
	{
		return 0;
	}
	if (unk_0x866EAD7E27D8D0F8())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_8F05[iVar0 /*32*/] == 1 && Global_8F05[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_8F05[iVar0 /*32*/].f_1D)
				{
					return 0;
				}
			}
			Global_8F05[iVar0 /*32*/].f_5 = 1;
			Global_8F05[iVar0 /*32*/].f_1D = 1;
			return 1;
		}
		else
		{
			if (Global_8F05[iVar0 /*32*/] == 0)
			{
			}
			if (Global_8F05[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_25(int iParam0)//Position - 0x1007
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_8F05[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_26(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0x1042
{
	int iVar0;
	
	if (unk_0xB731B8C5BCE89836(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x7930B3E9C919E90F())
	{
		if (!*iParam0 == -1)
		{
			func_41(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_8F05[iVar0 /*32*/])
		{
			Global_8F05[iVar0 /*32*/] = 1;
			Global_8F05[iVar0 /*32*/].f_1 = Global_8FCE;
			Global_8FCE++;
			Global_8F05[iVar0 /*32*/].f_4 = 0;
			Global_8F05[iVar0 /*32*/].f_1D = 0;
			Global_8F05[iVar0 /*32*/].f_5 = 0;
			Global_8F05[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_8F05[iVar0 /*32*/].f_8), sParam2, 16);
			Global_8F05[iVar0 /*32*/].f_6 = iParam3;
			Global_8F05[iVar0 /*32*/].f_1F = unk_0x8A55B15F4133C912();
			Global_8F05[iVar0 /*32*/].f_7 = 0;
			Global_8F05[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0xF1734B55490E9045(sParam4))
			{
				Global_8F05[iVar0 /*32*/].f_C = 1;
				StringCopy(&(Global_8F05[iVar0 /*32*/].f_D), sParam4, 64);
				Global_8F05[iVar0 /*32*/].f_1E = iParam6;
			}
			else
			{
				Global_8F05[iVar0 /*32*/].f_C = 0;
				Global_8F05[iVar0 /*32*/].f_1E = 0;
			}
			*iParam0 = Global_8F05[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_27()//Position - 0x116D
{
	if (unk_0x8ACB0C3FACC09467())
	{
		if (iLocal_67 == 0)
		{
			unk_0xB1AFC550627C7E8D("TV_Controls");
			iLocal_67 = 1;
		}
	}
}

bool func_28(int iParam0, int iParam1)//Position - 0x118D
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

float func_29(int iParam0)//Position - 0x11C8
{
	if (func_32(iParam0))
	{
		if (func_31(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_30(unk_0xFA30DFD0084E92FE(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_30(bool bParam0)//Position - 0x1207
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

bool func_31(var uParam0)//Position - 0x125F
{
	return unk_0xFA30DFD0084E92FE(*uParam0, 2);
}

bool func_32(var uParam0)//Position - 0x126F
{
	return unk_0xFA30DFD0084E92FE(*uParam0, 1);
}

void func_33()//Position - 0x127F
{
	float fVar0;
	
	fVar0 = 1f;
	func_34(&fVar0);
	unk_0xF14A31FD690DC3B0(iLocal_33);
	unk_0x996AC9A66B2A5A3F(4);
	unk_0x6AEB48E3B648804A(1);
	unk_0xA138921CF8E29289(0.5f, 0.5f, fVar0, 1f, 0f, 255, 255, 255, 255);
	unk_0xF14A31FD690DC3B0(unk_0xECF3C87B07EE1C98());
}

void func_34(float fParam0)//Position - 0x12C0
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0x3771EE4CB542D71E(0);
	if (fVar0 <= (16f / 9f))
	{
		fVar1 = (fVar0 / (16f / 9f));
		fVar2 = *fParam0;
		*fParam0 = (fVar2 * fVar1);
	}
}

void func_35()//Position - 0x12FD
{
	Global_62F9[iLocal_41 /*11*/].f_7 = 0;
	Global_62F9[iLocal_41 /*11*/] = unk_0xA5A1668CC891DF7C();
	fLocal_30 = unk_0x4AB522627FFE49CA();
	if (unk_0x144E80F5C46A6B75(&cLocal_53))
	{
		unk_0xC1300D0F3A74E20B(&cLocal_53);
	}
	if (((func_40("TV_HLP1") || func_40("TV_HLP2")) || func_40("TV_HLP5")) || func_40("TV_HLP6"))
	{
		unk_0x7456702622C62EA0(1);
	}
	func_41(&iLocal_40);
	unk_0x5AA34F7239618297(-1);
	SYSTEM::WAIT(0);
	func_3();
	func_50();
}

int func_36(int iParam0)//Position - 0x137D
{
	vector3 vVar0;
	
	vVar0 = { func_37(unk_0xB5CEFD608600A09F()) };
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 6:
			return 1;
			break;
		
		case 4:
			if (vVar0.z < 74f)
			{
				return 1;
			}
			break;
		
		case 5:
			if (vVar0.z > 75f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

Vector3 func_37(int iParam0)//Position - 0x13F2
{
	return unk_0x541C2AEF053615BC(unk_0xA95CF30C72EB526E(iParam0), false);
}

void func_38(int iParam0, int iParam1)//Position - 0x1405
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

char* func_39(int iParam0)//Position - 0x1462
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 1:
			sVar0 = "PL_STD_CNT";
			break;
		
		case 2:
			sVar0 = "PL_STD_WZL";
			break;
		
		case 3:
			sVar0 = "PL_LO_CNT";
			break;
		
		case 4:
			sVar0 = "PL_LO_WZL";
			break;
		
		case 7:
			sVar0 = "PL_SP_WORKOUT";
			break;
		
		case 8:
			sVar0 = "PL_SP_INV";
			break;
		
		case 9:
			sVar0 = "PL_SP_INV_EXP";
			break;
		
		case 5:
			sVar0 = "PL_LO_RS";
			break;
		
		case 6:
			sVar0 = "PL_LO_RS_CUTSCENE";
			break;
		
		case 10:
			sVar0 = "PL_SP_PLSH1_INTRO";
			break;
		
		case 11:
			sVar0 = "PL_LES1_FAME_OR_SHAME";
			break;
		
		case 12:
			sVar0 = "PL_STD_WZL_FOS_EP2";
			break;
		
		case 13:
			sVar0 = "PL_MP_WEAZEL";
			break;
		
		case 14:
			sVar0 = "PL_MP_CCTV";
			break;
	}
	return sVar0;
}

int func_40(char* sParam0)//Position - 0x1541
{
	unk_0xF07D20149ECBC61E(sParam0);
	return unk_0xA66DBDA0A072514A(0);
}

void func_41(int iParam0)//Position - 0x1554
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_25(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_8F05[iVar0 /*32*/])
		{
			Global_8F05[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_42()//Position - 0x15AB
{
	if (func_29(&iLocal_26) < 1f)
	{
		func_41(&iLocal_40);
		return 0;
	}
	if ((!unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vLocal_68, 1f, 1f, 1.5f, false, true, 0) || !unk_0x053F9FA04F814AF3(unk_0xBC25C936A095B5BA(), vLocal_31, 90f)) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()))
	{
		func_41(&iLocal_40);
		return 0;
	}
	if (unk_0x645938DA8ED5E0BA(iLocal_35) != unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA()))
	{
		func_41(&iLocal_40);
		return 0;
	}
	if (func_28(8, -1))
	{
		func_41(&iLocal_40);
		return 0;
	}
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		func_41(&iLocal_40);
		return 0;
	}
	if (Global_15FAC)
	{
		func_41(&iLocal_40);
		return 0;
	}
	if (Global_62F9[iLocal_41 /*11*/].f_8)
	{
		func_41(&iLocal_40);
		return 0;
	}
	if (iLocal_40 == -1)
	{
		func_26(&iLocal_40, 3, "TV_HLP1", 0, 0, 0, 0);
		return 0;
	}
	if (func_24(iLocal_40, 1))
	{
		func_41(&iLocal_40);
		func_53(&iLocal_26);
		Global_62F9[iLocal_41 /*11*/].f_7 = 1;
		if (unk_0xF25512B8A510B0E1("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
		{
			unk_0xC4BA30B532FE260F(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, true);
		}
		func_43(309, 0, 0);
		return 1;
	}
	return 0;
}

void func_43(int iParam0, int iParam1, int iParam2)//Position - 0x16DA
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
		func_49((891 + iParam0), 1, -1, 1);
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
		Global_19B04.f_27B5[iParam0 /*12*/].f_A = iParam1;
		Global_19B04.f_27B5[iParam0 /*12*/].f_B = iParam2;
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
		func_44();
	}
}

void func_44()//Position - 0x17C2
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
		func_48(13, SYSTEM::FLOOR(Global_19B04.f_27B5.f_F0D));
	}
	if (!unk_0xF9BFA43C1BAFD016())
	{
		if (!Global_11542)
		{
			if (func_47() == 2 == 0 && !unk_0x7AF0088ABFA713B6())
			{
				if (unk_0x670C0C6C780A3F84())
				{
					Global_199FA = 0;
				}
				if (!Global_DA9F)
				{
					func_45();
				}
			}
		}
	}
}

int func_45()//Position - 0x1C83
{
	if (func_46(0))
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

bool func_46(bool bParam0)//Position - 0x1CCE
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_1163A, 0);
}

int func_47()//Position - 0x1CF9
{
	return Global_62BD;
}

int func_48(int iParam0, int iParam1)//Position - 0x1D04
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

int func_49(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x1D55
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
		iParam2 = func_9();
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

void func_50()//Position - 0x226F
{
	SYSTEM::WAIT(0);
	if (unk_0x56B8298B48E2A713("tvscreen"))
	{
		unk_0xCE6E44419BF6F4AF("tvscreen");
		iLocal_33 = -1;
		unk_0xF14A31FD690DC3B0(unk_0xECF3C87B07EE1C98());
	}
}

void func_51()//Position - 0x229B
{
	int iVar0;
	
	if (iLocal_41 == 4)
	{
		func_52();
	}
	if (unk_0x56B8298B48E2A713("tvscreen"))
	{
		unk_0xCE6E44419BF6F4AF("tvscreen");
	}
	SYSTEM::WAIT(0);
	if (!unk_0x724D816EA203A79E(iLocal_35))
	{
		func_66();
	}
	iVar0 = unk_0x6F79ECA8C83E4357(iLocal_35);
	unk_0xED8E639D9071342D("tvscreen", 0);
	unk_0xC70517054574AD3E(iVar0);
	SYSTEM::WAIT(0);
	if (iLocal_41 != 4)
	{
		while (!unk_0x59B966CB65C66DDF(iVar0))
		{
			if (!unk_0x724D816EA203A79E(iLocal_35))
			{
				func_66();
			}
			if (!unk_0x08B699D523A3F9CB(iLocal_35))
			{
				func_66();
			}
			if (!unk_0x56B8298B48E2A713("tvscreen"))
			{
				unk_0xED8E639D9071342D("tvscreen", 0);
			}
			if (!unk_0x59B966CB65C66DDF(iVar0))
			{
				unk_0xC70517054574AD3E(iVar0);
			}
			SYSTEM::WAIT(0);
		}
	}
	iLocal_33 = unk_0xCE506A7684415A58("tvscreen");
	func_3();
}

void func_52()//Position - 0x2359
{
	if (unk_0x724D816EA203A79E(iLocal_35))
	{
		if (unk_0x6F79ECA8C83E4357(iLocal_35) == joaat("v_ilev_mm_screen2"))
		{
			return;
		}
	}
	iLocal_35 = 0;
	iLocal_35 = unk_0x1E0CB5BD6231AB3D(joaat("v_ilev_mm_screen2"), vLocal_31, true, true, false);
	unk_0x019CE76D5286C95C(iLocal_35, fLocal_32);
	unk_0x346478B12F69D4E3(iLocal_35, true);
	unk_0xDC078F87049ECECE(iLocal_35, false, 0);
	iLocal_37 = 0;
	iLocal_37 = unk_0x1E0CB5BD6231AB3D(joaat("v_ilev_mm_screen2_vl"), vLocal_31, true, true, false);
	unk_0x019CE76D5286C95C(iLocal_37, fLocal_32);
	unk_0x346478B12F69D4E3(iLocal_37, true);
	unk_0xDC078F87049ECECE(iLocal_37, false, 0);
}

void func_53(int iParam0)//Position - 0x23D6
{
	func_54(iParam0, 0f);
}

void func_54(int iParam0, float fParam1)//Position - 0x23E5
{
	iParam0->f_1 = (func_30(unk_0xFA30DFD0084E92FE(*iParam0, 4)) - fParam1);
	unk_0xF0059F27F7BB6680(iParam0, 1);
	unk_0x7CB6FD92BE491AD9(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_55()//Position - 0x2413
{
}

int func_56(int iParam0)//Position - 0x241B
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_19B04.f_2360.f_14A[iParam0 /*6*/];
}

void func_57()//Position - 0x2447
{
	vLocal_31 = { unk_0x541C2AEF053615BC(iLocal_35, true) };
	fLocal_32 = unk_0x349C94FFF43E2979(iLocal_35);
	func_59();
	if (unk_0x6F79ECA8C83E4357(iLocal_35) == -897601557)
	{
		if (SYSTEM::VDIST(vLocal_31, -9.541955f, -1440.917f, 31.34692f) < 3f)
		{
			iLocal_41 = 0;
			vLocal_63 = { -9.8135f, -1440.913f, 31.3654f };
			vLocal_64 = { 0f, 0f, -134.3211f };
			vLocal_68 = { -9.3078f, -1440.931f, 30.1015f };
			StringCopy(&cLocal_44, "SE_FRANKLIN_AUNT_HOUSE_RADIO_01", 64);
			StringCopy(&cLocal_53, "TV_FRANKLINS_HOUSE_SOCEN", 64);
		}
	}
	else if (unk_0x6F79ECA8C83E4357(iLocal_35) == joaat("prop_trev_tv_01"))
	{
		if (SYSTEM::VDIST(vLocal_31, 1978.425f, 3819.657f, 34.26763f) < 3f)
		{
			iLocal_41 = 2;
			vLocal_63 = { 1978.23f, 3819.65f, 34.2724f };
			vLocal_64 = { 0f, 0f, -105.15f };
			vLocal_68 = { 1978.33f, 3819.717f, 32.4501f };
			func_58();
			StringCopy(&cLocal_44, "SE_TREVOR_TRAILER_RADIO_01", 64);
			StringCopy(&cLocal_53, "TV_TREVORS_TRAILER", 64);
		}
	}
	else if (unk_0x6F79ECA8C83E4357(iLocal_35) == joaat("prop_tv_flat_01"))
	{
		if (SYSTEM::VDIST(vLocal_31, 3.6654f, 529.8486f, 173.6281f) < 3f)
		{
			iLocal_41 = 1;
			vLocal_63 = { 2.5724f, 527.9989f, 176.1619f };
			vLocal_64 = { 0f, 0f, -29.9488f };
			vLocal_68 = { 3.6654f, 529.8486f, 173.6281f };
			StringCopy(&cLocal_44, "SE_FRANKLIN_HILLS_HOUSE_RADIO_01", 64);
			StringCopy(&cLocal_53, "TV_FRANKLINS_HOUSE_VINEWOOD", 64);
		}
	}
	else if (unk_0x6F79ECA8C83E4357(iLocal_35) == 1340914825)
	{
		if (SYSTEM::VDIST(vLocal_31, -1160.695f, -1520.745f, 10.49168f) < 3f)
		{
			iLocal_41 = 3;
			vLocal_63 = { -1160.502f, -1520.76f, 10.7393f };
			vLocal_64 = { 0f, 0f, 60.061f };
			vLocal_68 = { -1160.143f, -1520.495f, 9.6555f };
			StringCopy(&cLocal_44, "TREVOR_APARTMENT_RADIO", 64);
			StringCopy(&cLocal_53, "TV_FLOYDS_APARTMENT", 64);
		}
	}
	else if (unk_0x6F79ECA8C83E4357(iLocal_35) == joaat("v_ilev_mm_screen2") || unk_0x6F79ECA8C83E4357(iLocal_35) == joaat("v_ilev_mm_scre_off"))
	{
		if (SYSTEM::VDIST(vLocal_31, -802.2527f, 173.0374f, 74.35708f) < 3f)
		{
			iLocal_41 = 4;
			vLocal_63 = { -802.8972f, 172.537f, 74.5801f };
			vLocal_64 = { 0f, 0f, -69.0273f };
			vLocal_68 = { -800.7292f, 173.2194f, 71.8348f };
			StringCopy(&cLocal_44, "SE_MICHAELS_HOUSE_RADIO", 64);
			StringCopy(&cLocal_53, "TV_MICHAELS_HOUSE", 64);
		}
	}
	else if (unk_0x6F79ECA8C83E4357(iLocal_35) == joaat("des_tvsmash_start"))
	{
		if (SYSTEM::VDIST(vLocal_31, -809.962f, 170.919f, 75.7407f) < 3f)
		{
			iLocal_41 = 5;
			vLocal_63 = { -808.3051f, 171.2623f, 77.2822f };
			vLocal_64 = { 1.8886f, 0f, 110.9232f };
			vLocal_68 = { -809.962f, 170.919f, 75.7407f };
			StringCopy(&cLocal_44, "SE_MICHAELS_HOUSE_RADIO", 64);
			StringCopy(&cLocal_53, "TV_MICHAELS_HOUSE", 64);
		}
	}
}

void func_58()//Position - 0x2736
{
	iLocal_36 = unk_0x1E0CB5BD6231AB3D(joaat("prop_tt_screenstatic"), vLocal_31, true, true, false);
	unk_0x019CE76D5286C95C(iLocal_36, fLocal_32);
	unk_0xDC078F87049ECECE(iLocal_36, true, 0);
	unk_0x346478B12F69D4E3(iLocal_36, true);
}

void func_59()//Position - 0x2767
{
	unk_0xE1900892794032D6(0, func_39(1), 0);
	if (func_56(22))
	{
		unk_0xE1900892794032D6(1, func_39(12), 0);
	}
	else
	{
		unk_0xE1900892794032D6(1, func_39(2), 0);
	}
}

void func_60()//Position - 0x279D
{
	if (iLocal_41 == -1)
	{
		return;
	}
	if (Global_62F9[iLocal_41 /*11*/].f_A == 0)
	{
		if (iLocal_66 == 1)
		{
			if (unk_0x724D816EA203A79E(iLocal_38))
			{
				unk_0x1E5C2A1EAB944289(iLocal_38, false);
			}
			if (unk_0x724D816EA203A79E(iLocal_35))
			{
				unk_0x1E5C2A1EAB944289(iLocal_35, false);
			}
			if (unk_0x724D816EA203A79E(iLocal_37))
			{
				unk_0x1E5C2A1EAB944289(iLocal_37, false);
			}
			if (unk_0x724D816EA203A79E(iLocal_36))
			{
				unk_0x1E5C2A1EAB944289(iLocal_36, false);
			}
			iLocal_66 = 0;
		}
	}
	else if (iLocal_66 == 0)
	{
		if (unk_0x724D816EA203A79E(iLocal_38))
		{
			unk_0x1E5C2A1EAB944289(iLocal_38, true);
		}
		if (unk_0x724D816EA203A79E(iLocal_35))
		{
			unk_0x1E5C2A1EAB944289(iLocal_35, true);
		}
		if (unk_0x724D816EA203A79E(iLocal_37))
		{
			unk_0x1E5C2A1EAB944289(iLocal_37, true);
		}
		if (unk_0x724D816EA203A79E(iLocal_36))
		{
			unk_0x1E5C2A1EAB944289(iLocal_36, true);
		}
		iLocal_66 = 1;
	}
}

bool func_61(int iParam0)//Position - 0x2850
{
	return Global_8C41 == iParam0;
}

int func_62(int iParam0)//Position - 0x285E
{
	if (iParam0 != -1)
	{
		if (Global_62F9[iParam0 /*11*/].f_5)
		{
			return 1;
		}
	}
	return 0;
}

int func_63()//Position - 0x287D
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

int func_64()//Position - 0x289A
{
	if (Global_15FA6 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_147B0[Global_15FA6 /*34*/].f_F, 20);
	}
	return 0;
}

void func_65()//Position - 0x28C0
{
}

void func_66()//Position - 0x28C8
{
	if (iLocal_41 == -1)
	{
		unk_0x95E4B6F3ED223F5A();
	}
	func_41(&iLocal_40);
	if (iLocal_41 != -1)
	{
		func_1();
		Global_62F9[iLocal_41 /*11*/].f_6 = 0;
		Global_62F9[iLocal_41 /*11*/].f_7 = 0;
		Global_62F9[iLocal_41 /*11*/].f_8 = 0;
		Global_62F9[iLocal_41 /*11*/].f_4 = 0;
		Global_62F9[iLocal_41 /*11*/].f_5 = 0;
		Global_62F9[iLocal_41 /*11*/].f_2 = 0;
		Global_62F9[iLocal_41 /*11*/] = -1;
		Global_62F9[iLocal_41 /*11*/].f_1 = 0;
		Global_62F9[iLocal_41 /*11*/].f_A = 0;
	}
	if ((func_40("TV_HLP1") || func_40("TV_HLP5")) || func_40("TV_HLP6"))
	{
		unk_0x7456702622C62EA0(1);
	}
	SYSTEM::WAIT(0);
	func_67();
	if (unk_0x144E80F5C46A6B75(&cLocal_53))
	{
		unk_0xC1300D0F3A74E20B(&cLocal_53);
	}
	unk_0x9D248CEFBC38D598();
	func_2();
	unk_0x95E4B6F3ED223F5A();
}

void func_67()//Position - 0x298F
{
	func_50();
	if (unk_0x724D816EA203A79E(iLocal_35))
	{
		if (unk_0x6F79ECA8C83E4357(iLocal_35) == joaat("v_ilev_mm_screen2"))
		{
			unk_0xA35241BCE4C1A24B(&iLocal_35);
			unk_0x2CA123B0622F495C(joaat("v_ilev_mm_screen2"));
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_37))
	{
		unk_0xA35241BCE4C1A24B(&iLocal_37);
		unk_0x2CA123B0622F495C(joaat("v_ilev_mm_screen2_vl"));
	}
	if (unk_0x724D816EA203A79E(iLocal_36))
	{
		unk_0xA35241BCE4C1A24B(&iLocal_36);
		unk_0x2CA123B0622F495C(joaat("prop_tt_screenstatic"));
	}
}

