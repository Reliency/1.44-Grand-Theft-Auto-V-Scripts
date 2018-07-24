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
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	bool bLocal_40 = 0;
	bool bLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	struct<8> Local_44 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	struct<11> Local_50[50];
	int iLocal_51 = 0;
	char* sLocal_52 = NULL;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	char* sLocal_57[4] = { NULL, NULL, NULL, NULL };
	int iLocal_58 = 0;
	var uLocal_59 = 0;
	int iLocal_60 = 0;
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
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	bLocal_40 = true;
	bLocal_41 = true;
	iLocal_51 = 4;
	sLocal_52 = "id1_11_tunnel6_int";
	if (unk_0xE8A79675302ED812(210))
	{
		func_73();
	}
	if (unk_0xB731B8C5BCE89836(joaat("letterscraps")) > 1)
	{
		unk_0x95E4B6F3ED223F5A();
	}
	func_72(12);
	if (func_71(106) == 1)
	{
		func_70(12);
		func_67(287, 0, 0);
		func_66(106, 1);
		func_65(168, 0);
		func_73();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		func_64(unk_0xBC25C936A095B5BA());
		switch (iLocal_42)
		{
			case 0:
				func_19();
				break;
			
			case 1:
				func_1();
				break;
		}
	}
}

void func_1()//Position - 0xF8
{
	switch (iLocal_43)
	{
		case 0:
			if (unk_0xB731B8C5BCE89836(joaat("startup_positioning")) > 0)
			{
				iLocal_43 = 2;
			}
			else if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x726D9204B160D23E())
				{
					if (!func_18())
					{
						if (((!unk_0x58E7DDFF8D17A82A() && !func_12()) && !func_11()) && !func_10())
						{
							iLocal_58 = 0;
							iLocal_56 = 0;
							sLocal_57[0] = "LETTERS_PAGE_ONE";
							sLocal_57[1] = "LETTERS_PAGE_TWO";
							sLocal_57[2] = "LETTERS_PAGE_THREE";
							sLocal_57[3] = "LETTERS_PAGE_FOUR";
							iLocal_55 = unk_0x9934FEFB3B8C6DB8("LETTER_SCRAPS");
							while (!unk_0xA7F138B5B1AB2CF6(iLocal_55))
							{
								SYSTEM::WAIT(0);
							}
							unk_0x29CD142125FE177B(iLocal_55, "SET_LETTER_TEXT");
							func_9(sLocal_57[0]);
							unk_0xF9FBC2F3F73D94C9();
							unk_0x6AEB48E3B648804A(1);
							func_6(1);
							func_5(1, 1, 1, 0);
							unk_0x1A52075550F42C09("LETTERS_HELP2", 0);
							unk_0x121BBDEFA4F0C22B(1);
							unk_0x43F06392C4EF25E0(false);
							iLocal_43 = 1;
						}
					}
				}
			}
			break;
		
		case 1:
			func_3(0);
			unk_0x2D07FA763DF3EB00();
			unk_0x6AEB48E3B648804A(1);
			unk_0x996AC9A66B2A5A3F(1);
			if (iLocal_56 < 4)
			{
				if (!iLocal_58)
				{
					if (unk_0x8FCEEB789599BD9B(2, 190))
					{
						if (iLocal_56 >= 0 && iLocal_56 < 3)
						{
							iLocal_56++;
							unk_0x29CD142125FE177B(iLocal_55, "SET_LETTER_TEXT");
							func_9(sLocal_57[iLocal_56]);
							unk_0xF9FBC2F3F73D94C9();
						}
						iLocal_58 = 1;
					}
					else if (unk_0x8FCEEB789599BD9B(2, 189))
					{
						if (iLocal_56 > 0 && iLocal_56 < 4)
						{
							iLocal_56 = (iLocal_56 - 1);
							unk_0x29CD142125FE177B(iLocal_55, "SET_LETTER_TEXT");
							func_9(sLocal_57[iLocal_56]);
							unk_0xF9FBC2F3F73D94C9();
						}
						iLocal_58 = 1;
					}
					else if (unk_0x093484B35A948BFC(2, 202))
					{
						iLocal_43 = 2;
					}
				}
				else if (!func_2())
				{
					iLocal_58 = 0;
				}
				unk_0x4B6031094354FED6(iLocal_55, 255, 255, 255, 255, 0);
			}
			else
			{
				iLocal_43 = 2;
			}
			break;
		
		case 2:
			unk_0x43F06392C4EF25E0(true);
			unk_0x7456702622C62EA0(1);
			func_5(0, 1, 1, 0);
			func_70(12);
			func_73();
			break;
	}
}

int func_2()//Position - 0x304
{
	if ((unk_0x8FCEEB789599BD9B(2, 190) || unk_0x8FCEEB789599BD9B(2, 189)) || unk_0x8FCEEB789599BD9B(2, 202))
	{
		return 1;
	}
	return 0;
}

void func_3(int iParam0)//Position - 0x335
{
	if (!Global_389D.f_1 == 1)
	{
		if (func_4(0))
		{
			func_6(iParam0);
		}
		unk_0xF0059F27F7BB6680(&Global_93C, 2);
	}
}

int func_4(int iParam0)//Position - 0x35E
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

int func_5(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3B8
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x8ACB0C3FACC09467())
	{
		if (unk_0xB34A6828EBD4A1D8() != iParam0 && iParam2)
		{
			unk_0x22506029183A78EC(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_6(int iParam0)//Position - 0x3EB
{
	if (Global_3943)
	{
		func_8(0, 0);
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
	if (!func_7())
	{
		Global_389D.f_1 = 3;
	}
}

int func_7()//Position - 0x45B
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_8(bool bParam0, bool bParam1)//Position - 0x482
{
	if (bParam0)
	{
		if (func_4(0))
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

void func_9(char* sParam0)//Position - 0x4F6
{
	unk_0x57016C44F10111F0(sParam0);
	unk_0x64989E60CF560CA1();
}

bool func_10()//Position - 0x508
{
	return Global_141335;
}

int func_11()//Position - 0x514
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_258004[iVar1] != 0)
		{
			Global_141336 = iVar1;
			iVar0 = 1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_12()//Position - 0x54D
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_195C0)
	{
		if (func_13(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_13(int iParam0)//Position - 0x57B
{
	int iVar0;
	
	iVar0 = iParam0;
	if (!unk_0x3362CDE8460ED38B(&(Global_195C0[iParam0 /*28*/]), "") && !unk_0xEAEFBBEC1AEA464B(&(Global_195C0[iParam0 /*28*/])))
	{
		if (unk_0xFA30DFD0084E92FE(Global_195C0[iParam0 /*28*/].f_1B, 1))
		{
			if (unk_0xFA30DFD0084E92FE(Global_195C0[iParam0 /*28*/].f_1B, 2))
			{
				return func_17(iVar0, &(Global_195C0[iParam0 /*28*/]), &(Global_195C0[iParam0 /*28*/].f_4), Global_195C0[iParam0 /*28*/].f_14);
			}
			else
			{
				return func_16(iVar0, &(Global_195C0[iParam0 /*28*/]), &(Global_195C0[iParam0 /*28*/].f_4));
			}
		}
		else if (unk_0xFA30DFD0084E92FE(Global_195C0[iParam0 /*28*/].f_1B, 2))
		{
			return func_15(iVar0, &(Global_195C0[iParam0 /*28*/]), Global_195C0[iParam0 /*28*/].f_14);
		}
		else
		{
			return func_14(iVar0, &(Global_195C0[iParam0 /*28*/]));
		}
	}
	return 0;
}

int func_14(int iParam0, char* sParam1)//Position - 0x658
{
	unk_0xF07D20149ECBC61E(sParam1);
	return unk_0xA66DBDA0A072514A((1 + iParam0));
}

int func_15(int iParam0, char* sParam1, int iParam2)//Position - 0x66E
{
	unk_0xF07D20149ECBC61E(sParam1);
	unk_0xAA5C5BF0489E5553(iParam2);
	return unk_0xA66DBDA0A072514A((1 + iParam0));
}

int func_16(int iParam0, char* sParam1, char* sParam2)//Position - 0x68A
{
	unk_0xF07D20149ECBC61E(sParam1);
	unk_0xC9C304D0AABE1335(sParam2);
	return unk_0xA66DBDA0A072514A((1 + iParam0));
}

int func_17(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x6A6
{
	unk_0xF07D20149ECBC61E(sParam1);
	unk_0xC9C304D0AABE1335(sParam2);
	unk_0xAA5C5BF0489E5553(iParam3);
	return unk_0xA66DBDA0A072514A((1 + iParam0));
}

int func_18()//Position - 0x6C8
{
	if (Global_8C41 == 15)
	{
		return 0;
	}
	return 1;
}

void func_19()//Position - 0x6DD
{
	switch (iLocal_43)
	{
		case 0:
			func_62();
			func_61(&Local_44, 1, joaat("prop_ld_scrap"), "LETTERS_COLLECT");
			func_59(&Local_44, joaat("num_hidden_packages_0"), 705, 50);
			iLocal_43 = 1;
			iLocal_60 = 1;
			break;
		
		case 1:
			if (!func_58(14) && !unk_0x17FAADF9916EF741())
			{
				if (func_21(&Local_44, &Local_50) || uLocal_59)
				{
					iLocal_43 = 2;
				}
				if (Local_44.f_1.f_4 == Local_44.f_1.f_3)
				{
					if (func_71(106) == 0)
					{
						func_66(106, 1);
						func_65(168, 0);
					}
				}
			}
			break;
		
		case 2:
			func_66(106, 1);
			func_65(168, 0);
			func_20(1);
			break;
	}
}

void func_20(int iParam0)//Position - 0x796
{
	iLocal_42 = iParam0;
	iLocal_43 = 0;
}

int func_21(var uParam0, int iParam1)//Position - 0x7A5
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	bool bVar3;
	
	bVar3 = (!func_18() && !func_18());
	unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA());
	vVar2 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
	iVar0 = 0;
	while (iVar0 < 1)
	{
		bVar1 = func_57(&(uParam0->f_1), uParam0->f_A);
		if (!(iParam1[uParam0->f_A /*11*/])->f_A)
		{
			if (!bVar1)
			{
				if (((((((uParam0->f_A == 1 || uParam0->f_A == 5) || uParam0->f_A == 7) || uParam0->f_A == 13) || uParam0->f_A == 18) || uParam0->f_A == 20) || uParam0->f_A == 37) || uParam0->f_A == 42)
				{
					func_55(iParam1[uParam0->f_A /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0, 1, 2);
				}
				else if (uParam0->f_A == iLocal_51)
				{
					func_55(iParam1[uParam0->f_A /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0, 1, 2);
					if (unk_0xA901403F1DB7A780((iParam1[uParam0->f_A /*11*/])->f_1))
					{
						unk_0xED487BB7EB176F2C((iParam1[uParam0->f_A /*11*/])->f_1, sLocal_52);
					}
				}
				else
				{
					func_55(iParam1[uParam0->f_A /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0, 0, 2);
				}
			}
		}
		else if (!bVar1)
		{
			if (func_38(uParam0, iParam1, vVar2))
			{
				if (bVar3)
				{
					if (!func_37(33))
					{
						func_34("LETTERS_FIRST", 1, 0, -1, 10000, 7, 0, 0, 0);
						func_33(33);
					}
				}
			}
		}
		uParam0->f_A++;
		if (uParam0->f_A >= *iParam1)
		{
			uParam0->f_A = 0;
		}
		iVar0++;
	}
	if (uParam0->f_B)
	{
		if (!Global_11646)
		{
			func_22(&(uParam0->f_B), &(uParam0->f_C), &(uParam0->f_9), 1, &iLocal_53, &iLocal_54, "LETTERS_TITLE", "LETTERS_COLLECT");
		}
	}
	if (!uParam0->f_C && !uParam0->f_B)
	{
		return uParam0->f_1.f_4 >= uParam0->f_1.f_3;
	}
	return 0;
}

void func_22(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, char* sParam6, char* sParam7)//Position - 0x98D
{
	int iVar0;
	
	func_32(0);
	if (*uParam0)
	{
		switch (*iParam4)
		{
			case 0:
				*iParam5 = unk_0x9934FEFB3B8C6DB8("MIDSIZED_MESSAGE");
				if (unk_0xA7F138B5B1AB2CF6(*iParam5))
				{
					iVar0 = unk_0x2F079D1FC5F6CB99();
					if (iParam3 == 6)
					{
						unk_0xC4BA30B532FE260F(iVar0, "PEYOTE_COMPLETED", "HUD_AWARDS", true);
					}
					else
					{
						unk_0xC4BA30B532FE260F(iVar0, "COLLECTED", "HUD_AWARDS", true);
					}
					*iParam4++;
				}
				break;
			
			case 1:
				unk_0x29CD142125FE177B(*iParam5, "SHOW_SHARD_MIDSIZED_MESSAGE");
				unk_0x57016C44F10111F0(sParam6);
				unk_0x64989E60CF560CA1();
				unk_0x57016C44F10111F0(sParam7);
				unk_0xAA5C5BF0489E5553(func_24(iParam3));
				unk_0x64989E60CF560CA1();
				unk_0xF9FBC2F3F73D94C9();
				*uParam2 = unk_0x105601648511CC64();
				*iParam4++;
				break;
			
			case 2:
				if ((unk_0x105601648511CC64() - *uParam2) > 7000)
				{
					unk_0x29CD142125FE177B(*iParam5, "SHARD_ANIM_OUT");
					unk_0x1E1FB49121565EB6(1);
					unk_0xD44E04EBBDC4CE88(0.33f);
					unk_0xF9FBC2F3F73D94C9();
					*iParam4++;
				}
				else if (!func_23())
				{
					if (unk_0xA7F138B5B1AB2CF6(*iParam5))
					{
						func_32(1);
						unk_0x4B6031094354FED6(*iParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 3:
				if ((unk_0x105601648511CC64() - *uParam2) > 7500)
				{
					*iParam4++;
				}
				else if (!func_23())
				{
					if (unk_0xA7F138B5B1AB2CF6(*iParam5))
					{
						func_32(1);
						unk_0x4B6031094354FED6(*iParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 4:
				if (unk_0xA7F138B5B1AB2CF6(*iParam5))
				{
					unk_0xB0B0FE33F4F22679(iParam5);
				}
				func_32(0);
				*uParam1 = 0;
				*uParam0 = 0;
				*iParam4 = 0;
				break;
			}
	}
}

int func_23()//Position - 0xB11
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

int func_24(int iParam0)//Position - 0xB3B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 == 2)
	{
		iVar1 = 0;
		while (iVar1 < func_31(iParam0))
		{
			if (unk_0xFA30DFD0084E92FE(Global_19B04.f_2724.f_6C, func_30(func_31(iParam0), iVar1)))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	else if (iParam0 == 6)
	{
		unk_0x6CB99B97664C3727(joaat("num_hidden_packages_5"), &iVar0, -1);
	}
	else if (iParam0 == 7)
	{
		unk_0x6CB99B97664C3727(joaat("num_hidden_packages_7"), &iVar0, -1);
	}
	else if (iParam0 == 8)
	{
		unk_0x6CB99B97664C3727(joaat("num_hidden_packages_6"), &iVar0, -1);
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < func_31(iParam0))
		{
			iVar2 = (func_29(iParam0) + iVar1);
			if (func_25(iVar2, -1, -1))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_25(int iParam0, int iParam1, int iParam2)//Position - 0xC03
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_28();
	}
	iVar1 = func_27(iParam0, iParam1);
	uVar2 = func_26(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDAB376DC6F83D68C(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_26(int iParam0)//Position - 0xC40
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x87C0AFE55188B978((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x87C0AFE55188B978((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x87C0AFE55188B978((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x87C0AFE55188B978((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x87C0AFE55188B978((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x87C0AFE55188B978((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x87C0AFE55188B978((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x87C0AFE55188B978((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x87C0AFE55188B978((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x87C0AFE55188B978((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x87C0AFE55188B978((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x87C0AFE55188B978((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x87C0AFE55188B978((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x87C0AFE55188B978((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x87C0AFE55188B978((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x87C0AFE55188B978((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x87C0AFE55188B978((iParam0 - 22066)) * 64);
	}
	return iVar0;
}

int func_27(int iParam0, int iParam1)//Position - 0xF2C
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_28();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x761270FB5119E371((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x761270FB5119E371((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x761270FB5119E371((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x761270FB5119E371((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0xC4006144B74F1FE6((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0xC4006144B74F1FE6((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	return iVar0;
}

int func_28()//Position - 0x11F9
{
	return Global_1407E0;
}

int func_29(int iParam0)//Position - 0x1205
{
	if (iParam0 == 3)
	{
		return 815;
	}
	if (iParam0 == 5)
	{
		return 845;
	}
	if (iParam0 == 1)
	{
		return 705;
	}
	if (iParam0 == 0)
	{
		return 755;
	}
	return 805;
}

int func_30(int iParam0, int iParam1)//Position - 0x124C
{
	if (iParam1 < 32)
	{
		return iParam1;
	}
	return (iParam0 - iParam1);
}

int func_31(int iParam0)//Position - 0x1268
{
	if (iParam0 == 3)
	{
		return 30;
	}
	if (iParam0 == 1)
	{
		return 50;
	}
	if (iParam0 == 0)
	{
		return 50;
	}
	if (iParam0 == 4)
	{
		return 10;
	}
	if (iParam0 == 5)
	{
		return 30;
	}
	return 15;
}

void func_32(int iParam0)//Position - 0x12B8
{
	if (Global_1164D != iParam0)
	{
		Global_1164D = iParam0;
	}
}

void func_33(int iParam0)//Position - 0x12D2
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

void func_34(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x1314
{
	func_35(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_35(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x1335
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
		func_36();
	}
}

void func_36()//Position - 0x1508
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

int func_37(int iParam0)//Position - 0x1628
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

int func_38(var uParam0, var uParam1, vector3 vParam2)//Position - 0x166B
{
	int iVar0;
	
	iVar0 = uParam0->f_A;
	if ((uParam1[iVar0 /*11*/])->f_A)
	{
		if ((uParam1[iVar0 /*11*/])->f_1 != 0)
		{
			if (unk_0xF1B911222059B1A1((uParam1[iVar0 /*11*/])->f_1) || func_53((uParam1[iVar0 /*11*/])->f_1))
			{
				func_40(uParam0, uParam1, iVar0);
				return 1;
			}
		}
	}
	if (unk_0xA901403F1DB7A780((uParam1[iVar0 /*11*/])->f_1))
	{
		if ((SYSTEM::VDIST2(vParam2, unk_0x85EA1A40FC3A6769((uParam1[iVar0 /*11*/])->f_1)) > (60f * 60f) || func_58(13)) || func_58(14))
		{
			func_39(&((uParam1[iVar0 /*11*/])->f_1));
			(uParam1[iVar0 /*11*/])->f_1 = 0;
			(uParam1[iVar0 /*11*/])->f_A = 0;
		}
	}
	return 0;
}

void func_39(var uParam0)//Position - 0x1728
{
	if (unk_0xA901403F1DB7A780(*uParam0))
	{
		unk_0x9680DF46F29C0428(*uParam0);
	}
}

void func_40(var uParam0, var uParam1, int iParam2)//Position - 0x1741
{
	int iVar0;
	
	iVar0 = (func_29(*uParam0) + iParam2);
	func_39(&((uParam1[iParam2 /*11*/])->f_1));
	func_52(&((uParam1[iParam2 /*11*/])->f_2));
	(uParam1[iParam2 /*11*/])->f_1 = 0;
	(uParam1[iParam2 /*11*/])->f_A = 0;
	func_51(&(uParam0->f_1), iParam2, 1);
	if (*uParam0 == 1 || *uParam0 == 0)
	{
		func_50(*uParam0, iParam2, 1);
	}
	unk_0xF715C239F71B95D6(0, 200, 250);
	unk_0x0D5F0AC615350E61(uParam0->f_6, 1f);
	if (bLocal_41)
	{
		func_49(&(uParam0->f_1), iParam2);
	}
	else
	{
		func_47(&(uParam0->f_1));
	}
	func_44();
	unk_0xCA44EE5E2316C9C7(iVar0);
	func_43(1, 0);
	func_41();
	uParam0->f_B = 1;
}

int func_41()//Position - 0x17EC
{
	if (func_42(0))
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

bool func_42(bool bParam0)//Position - 0x1837
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_1163A, 0);
}

void func_43(int iParam0, int iParam1)//Position - 0x1862
{
	Global_16B42.f_7 = iParam0;
	Global_16B42.f_8 = iParam1;
}

void func_44()//Position - 0x187A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = 0;
	unk_0x6CB99B97664C3727(func_46(0), &iVar0, -1);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_45(18, iVar0);
	}
	unk_0x6CB99B97664C3727(func_46(1), &iVar0, -1);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_45(19, iVar0);
	}
	unk_0x6CB99B97664C3727(func_46(3), &iVar0, -1);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_45(20, iVar0);
	}
	iVar2 = ((func_31(0) + func_31(1)) + func_31(3));
	if (iVar2 > 0)
	{
		iVar3 = (iVar1 * 100 / iVar2);
	}
	unk_0x3A57956BCE003880(joaat("percent_hidden_packages"), iVar3, 1);
}

int func_45(int iParam0, int iParam1)//Position - 0x191D
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

int func_46(int iParam0)//Position - 0x196E
{
	if (iParam0 == 3)
	{
		return joaat("num_hidden_packages_3");
	}
	if (iParam0 == 1)
	{
		return joaat("num_hidden_packages_0");
	}
	if (iParam0 == 0)
	{
		return joaat("num_hidden_packages_1");
	}
	if (iParam0 == 5)
	{
		return joaat("num_hidden_packages_4");
	}
	return joaat("num_hidden_packages_2");
}

void func_47(var uParam0)//Position - 0x19BF
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (uParam0->f_3 <= 0)
	{
	}
	if (uParam0->f_2 <= 0)
	{
	}
	if (bLocal_40)
	{
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (func_57(uParam0, iVar0))
		{
			iVar1++;
			func_48((uParam0->f_2 + iVar0), 1, -1, 1);
			if (bLocal_40)
			{
			}
		}
		iVar0++;
	}
	uParam0->f_4 = iVar1;
	if (bLocal_40)
	{
	}
	if (iVar1 == uParam0->f_3 && uParam0->f_2 == 705)
	{
		func_65(168, 0);
	}
}

int func_48(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x1A42
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
		iParam2 = func_28();
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

void func_49(var uParam0, int iParam1)//Position - 0x1F5C
{
	if (uParam0->f_3 <= 0)
	{
	}
	if (uParam0->f_2 <= 0)
	{
	}
	if (bLocal_40)
	{
	}
	if (iParam1 >= uParam0->f_3)
	{
	}
	if (func_57(uParam0, iParam1))
	{
		uParam0->f_4++;
		func_48((uParam0->f_2 + iParam1), 1, -1, 1);
		if (bLocal_40)
		{
		}
	}
	if (bLocal_40)
	{
	}
	if (uParam0->f_4 == uParam0->f_3 && uParam0->f_2 == 705)
	{
		func_65(168, 0);
	}
}

void func_50(int iParam0, int iParam1, bool bParam2)//Position - 0x1FD0
{
	if (iParam1 < 0 || iParam1 >= 64)
	{
		return;
	}
	if (iParam0 == 1)
	{
		if (iParam1 <= 31)
		{
			if (bParam2)
			{
				unk_0xF0059F27F7BB6680(&(Global_19B04.f_2724.f_7A), iParam1);
			}
			else
			{
				unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_2724.f_7A), iParam1);
			}
			return;
		}
		if (bParam2)
		{
			unk_0xF0059F27F7BB6680(&(Global_19B04.f_2724.f_7A.f_1), (iParam1 - 32));
		}
		else
		{
			unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_2724.f_7A.f_1), (iParam1 - 32));
		}
	}
	else if (iParam0 == 0)
	{
		if (iParam1 <= 31)
		{
			if (bParam2)
			{
				unk_0xF0059F27F7BB6680(&(Global_19B04.f_2724.f_7D), iParam1);
			}
			else
			{
				unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_2724.f_7D), iParam1);
			}
			return;
		}
		if (bParam2)
		{
			unk_0xF0059F27F7BB6680(&(Global_19B04.f_2724.f_7D.f_1), (iParam1 - 32));
		}
		else
		{
			unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_2724.f_7D.f_1), (iParam1 - 32));
		}
	}
}

void func_51(int iParam0, int iParam1, bool bParam2)//Position - 0x20BC
{
	if (iParam1 < 0 || iParam1 >= 64)
	{
		return;
	}
	if (iParam1 <= 31)
	{
		if (bParam2)
		{
			unk_0xF0059F27F7BB6680(iParam0, iParam1);
		}
		else
		{
			unk_0x7CB6FD92BE491AD9(iParam0, iParam1);
		}
		return;
	}
	if (bParam2)
	{
		unk_0xF0059F27F7BB6680(&(iParam0->f_1), (iParam1 - 32));
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(iParam0->f_1), (iParam1 - 32));
	}
}

void func_52(int iParam0)//Position - 0x211D
{
	if (unk_0x2DA8CA50A72528FB(*iParam0))
	{
		unk_0x0BBAABB52887CF8C(*iParam0, false);
		unk_0x07B8ECB35A4ED3AC(iParam0);
	}
}

int func_53(int iParam0)//Position - 0x213D
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xA901403F1DB7A780(iParam0))
	{
		return 0;
	}
	if (func_54(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			iVar1 = unk_0x6F79ECA8C83E4357(iVar0);
			if (iVar1 == joaat("submersible") || iVar1 == joaat("submersible2"))
			{
				if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), unk_0x85EA1A40FC3A6769(iParam0)) < (5f * 5f) || unk_0xE921F8171F0733B3(unk_0xBC25C936A095B5BA(), unk_0xE34D8BCB888BAD7F(iParam0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_54(int iParam0)//Position - 0x21C9
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

void func_55(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x21EA
{
	int iVar0;
	
	if (!uParam0->f_A)
	{
		if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			if (!func_58(13) && !func_58(14))
			{
				if (!unk_0xA901403F1DB7A780(uParam0->f_1))
				{
					if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), uParam0->f_3) <= (50f * 50f))
					{
						unk_0xF243B7A14FCFD0F4(iParam1);
						while (!unk_0xD6513D668481290A(iParam1))
						{
							unk_0xF243B7A14FCFD0F4(iParam1);
							SYSTEM::WAIT(0);
						}
						if (bParam3)
						{
							func_56(uParam0->f_3);
						}
						unk_0x6C5F5B5F6894CCE3(uParam0->f_3, 2.5f, 0, 0, 0, false);
						if (bParam4)
						{
							unk_0xF0059F27F7BB6680(&iVar0, 1);
							uParam0->f_1 = unk_0x37B86314BDCAA6F0(joaat("pickup_custom_script"), uParam0->f_3, uParam0->f_6, iVar0, -1, iParam5, 1, iParam1);
						}
						else
						{
							unk_0xF0059F27F7BB6680(&iVar0, 3);
							unk_0xF0059F27F7BB6680(&iVar0, 4);
							unk_0xF0059F27F7BB6680(&iVar0, 8);
							unk_0xF0059F27F7BB6680(&iVar0, 1);
							uParam0->f_1 = unk_0x249B372087B496EC(iParam2, uParam0->f_3, iVar0, -1, 1, iParam1);
						}
						unk_0x2CA123B0622F495C(iParam1);
					}
				}
			}
			if (unk_0xA901403F1DB7A780(uParam0->f_1))
			{
				uParam0->f_A = 1;
			}
		}
	}
}

void func_56(vector3 vParam0)//Position - 0x2303
{
	int iVar0;
	
	iVar0 = unk_0x9911032C958CE1B0(vParam0);
	if (unk_0xBF697FA7422C0621(iVar0))
	{
		unk_0x184188AF06D2A771(iVar0);
		while (!unk_0x18487DB48DC3A046(iVar0))
		{
			SYSTEM::WAIT(0);
		}
		SYSTEM::WAIT(0);
		unk_0xB165D6ED2E977354(iVar0);
	}
}

bool func_57(var uParam0, int iParam1)//Position - 0x2341
{
	if (iParam1 < 0 || iParam1 >= 64)
	{
		return 0;
	}
	if (iParam1 <= 31)
	{
		return unk_0xFA30DFD0084E92FE(*uParam0, iParam1);
	}
	return unk_0xFA30DFD0084E92FE(uParam0->f_1, (iParam1 - 32));
}

bool func_58(int iParam0)//Position - 0x237F
{
	return Global_8C41 == iParam0;
}

void func_59(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x238D
{
	uParam0->f_6 = iParam1;
	func_60(&(uParam0->f_1), iParam2, iParam3);
}

void func_60(int iParam0, var uParam1, var uParam2)//Position - 0x23A7
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	*iParam0 = 0;
	iParam0->f_1 = 0;
	iParam0->f_2 = uParam1;
	iParam0->f_3 = uParam2;
	if (bLocal_40)
	{
	}
	iVar0 = 0;
	while (iVar0 < iParam0->f_3)
	{
		if (func_25((iParam0->f_2 + iVar0), -1, -1))
		{
			iVar1++;
			func_51(iParam0, iVar0, 1);
			if (bLocal_40)
			{
			}
		}
		iVar0++;
	}
	iParam0->f_4 = iVar1;
	if (bLocal_40)
	{
	}
}

void func_61(var uParam0, int iParam1, int iParam2, char* sParam3)//Position - 0x2410
{
	*uParam0 = iParam1;
	uParam0->f_7 = iParam2;
	uParam0->f_8 = sParam3;
	uParam0->f_A = 0;
}

void func_62()//Position - 0x242E
{
	int iVar0;
	
	Global_19B04.f_2724.f_7A.f_2 = 1;
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Local_50[iVar0 /*11*/].f_3 = { func_63(iVar0, 0) };
		Local_50[iVar0 /*11*/].f_A = 0;
		iVar0++;
	}
	iLocal_53 = 0;
	Local_50[0 /*11*/].f_9 = 179.4746f;
	Local_50[1 /*11*/].f_6 = { 0f, 0f, 198f };
	Local_50[2 /*11*/].f_9 = 104f;
	Local_50[3 /*11*/].f_9 = 321.5f;
	Local_50[4 /*11*/].f_6 = { 0f, 0f, 49f };
	Local_50[5 /*11*/].f_6 = { 0f, 0f, 286.5f };
	Local_50[6 /*11*/].f_9 = 278.0092f;
	Local_50[7 /*11*/].f_6 = { 5.3f, -1801.4f, 15.57f };
	Local_50[8 /*11*/].f_9 = 80.5f;
	Local_50[9 /*11*/].f_9 = 116f;
	Local_50[10 /*11*/].f_9 = 15f;
	Local_50[11 /*11*/].f_9 = 305.5f;
	Local_50[12 /*11*/].f_9 = 0f;
	Local_50[13 /*11*/].f_9 = 95f;
	Local_50[13 /*11*/].f_6 = { -0.91f, -0.03f, -0.81f };
	Local_50[14 /*11*/].f_9 = 40f;
	Local_50[15 /*11*/].f_9 = 40f;
	Local_50[16 /*11*/].f_9 = 40f;
	Local_50[17 /*11*/].f_9 = 90f;
	Local_50[17 /*11*/].f_6 = { -0.55f, 0f, 0.78f };
	Local_50[18 /*11*/].f_6 = { 0f, 0f, 0f };
	Local_50[19 /*11*/].f_9 = 40f;
	Local_50[20 /*11*/].f_6 = { 0f, 2f, 15f };
	Local_50[21 /*11*/].f_9 = 40f;
	Local_50[22 /*11*/].f_9 = 40f;
	Local_50[23 /*11*/].f_9 = 40f;
	Local_50[24 /*11*/].f_9 = 40f;
	Local_50[25 /*11*/].f_9 = 40f;
	Local_50[26 /*11*/].f_9 = 40f;
	Local_50[26 /*11*/].f_6 = { -6f, 10f, 0f };
	Local_50[27 /*11*/].f_9 = 40f;
	Local_50[27 /*11*/].f_6 = { -4.66f, 8.7f, 67.03f };
	Local_50[28 /*11*/].f_9 = 40f;
	Local_50[28 /*11*/].f_6 = { 1.54f, -8.31f, -19.94f };
	Local_50[29 /*11*/].f_9 = 40f;
	Local_50[30 /*11*/].f_9 = 40f;
	Local_50[30 /*11*/].f_6 = { 27.21f, -3.11f, -2.09f };
	Local_50[31 /*11*/].f_9 = 40f;
	Local_50[32 /*11*/].f_9 = 40f;
	Local_50[33 /*11*/].f_9 = 40f;
	Local_50[33 /*11*/].f_6 = { -9.89f, 0.3f, -0.01f };
	Local_50[34 /*11*/].f_9 = 40f;
	Local_50[35 /*11*/].f_9 = 40f;
	Local_50[36 /*11*/].f_9 = 40f;
	Local_50[36 /*11*/].f_6 = { 6.5f, -4.41f, -0.62f };
	Local_50[37 /*11*/].f_6 = { -9f, 5.3f, -2f };
	Local_50[38 /*11*/].f_9 = 40f;
	Local_50[38 /*11*/].f_6 = { -13.32f, -0.57f, -0.15f };
	Local_50[39 /*11*/].f_9 = 40f;
	Local_50[39 /*11*/].f_6 = { 4.71f, -21.26f, -0.06f };
	Local_50[40 /*11*/].f_9 = 40f;
	Local_50[41 /*11*/].f_9 = 80f;
	Local_50[42 /*11*/].f_6 = { -2f, 9f, 1f };
	Local_50[43 /*11*/].f_9 = 198f;
	Local_50[44 /*11*/].f_9 = 198f;
	Local_50[44 /*11*/].f_6 = { 0f, -20f, 0f };
	Local_50[45 /*11*/].f_9 = 198f;
	Local_50[46 /*11*/].f_9 = 198f;
	Local_50[47 /*11*/].f_9 = 198f;
	Local_50[48 /*11*/].f_9 = 198f;
	Local_50[49 /*11*/].f_9 = 198f;
}

Vector3 func_63(int iParam0, int iParam1)//Position - 0x2824
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 1)
			{
				return 1034.274f, -3026.275f, 4.90197f;
			}
			else
			{
				return 1026.705f, -3026.052f, 13.3323f;
			}
			break;
		
		case 1:
			if (iParam1 == 1)
			{
				return -1040.979f, -2743.509f, 12.94983f;
			}
			else
			{
				return -1048.604f, -2734.218f, 12.8895f;
			}
			break;
		
		case 2:
			if (iParam1 == 1)
			{
				return -93.9012f, -2711.314f, 5.01752f;
			}
			else
			{
				return -81.1199f, -2726.511f, 7.74f;
			}
			break;
		
		case 3:
			return -917.6909f, -2527.384f, 22.3218f;
			break;
		
		case 4:
			if (iParam1 == 1)
			{
				return 746.45f, -2310.32f, 26.03f;
			}
			else
			{
				return 748.922f, -2298.114f, 19.624f;
			}
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 1509.742f, -2126.038f, 75.21973f;
			}
			else
			{
				return 1509.099f, -2120.551f, 75.61f;
			}
			break;
		
		case 6:
			return 76.0032f, -1970.475f, 20.1302f;
			break;
		
		case 7:
			if (iParam1 == 1)
			{
				return -1.82327f, -1732.614f, 28.29367f;
			}
			else
			{
				return 0.067f, -1734.027f, 30.606f;
			}
			break;
		
		case 8:
			if (iParam1 == 1)
			{
				return -1377.766f, -1409.837f, 4.63205f;
			}
			else
			{
				return -1380.491f, -1404.374f, 1.7273f;
			}
			break;
		
		case 9:
			return 2864.808f, -1372.84f, 1.3151f;
			break;
		
		case 10:
			return -1035.812f, -1273.077f, 0.8919f;
			break;
		
		case 11:
			return -1821.136f, -1201.36f, 18.1698f;
			break;
		
		case 12:
			return 643.0116f, -1035.65f, 35.8891f;
			break;
		
		case 13:
			return -119.0616f, -977.2228f, 303.23f;
			break;
		
		case 14:
			if (iParam1 == 1)
			{
				return -1243.104f, -507.8057f, 30.10775f;
			}
			else
			{
				return -1238.766f, -506.7138f, 37.6019f;
			}
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 83.79993f, -431.9302f, 36.55315f;
			}
			else
			{
				return 86.4f, -433.9f, 36f;
			}
			break;
		
		case 16:
			return 1095.953f, -210.4642f, 54.9477f;
			break;
		
		case 17:
			return -1724.522f, -196f, 57.2387f;
			break;
		
		case 18:
			return 265.374f, -199.546f, 60.795f;
			break;
		
		case 19:
			if (iParam1 == 1)
			{
				return -3020.475f, 36.55431f, 9.11777f;
			}
			else
			{
				return -3021.4f, 38f, 10.2945f;
			}
			break;
		
		case 20:
			if (iParam1 == 1)
			{
				return -347.5277f, 53.37161f, 52.97814f;
			}
			else
			{
				return -347.3f, 54.865f, 53.921f;
			}
			break;
		
		case 21:
			return 1052.248f, 167.611f, 87.7406f;
			break;
		
		case 22:
			return -2303.798f, 217.4301f, 166.6017f;
			break;
		
		case 23:
			return -138.9423f, 868.3885f, 231.6956f;
			break;
		
		case 24:
			if (iParam1 == 1)
			{
				return 688.1073f, 1204.671f, 323.3438f;
			}
			else
			{
				return 682.4505f, 1204.928f, 344.3322f;
			}
			break;
		
		case 25:
			return -1548.763f, 1380.173f, 125.3728f;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return -432.14f, 1598.46f, 355.73f;
			}
			else
			{
				return -432.0034f, 1597.129f, 356.613f;
			}
			break;
		
		case 27:
			return 3081.93f, 1648.29f, 2.42f;
			break;
		
		case 28:
			return -594.38f, 2092f, 130.57f;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 3069.213f, 2160.988f, 1.1327f;
			}
			else
			{
				return 3063.583f, 2212.63f, 2.5863f;
			}
			break;
		
		case 30:
			return 180.21f, 2263.83f, 91.87f;
			break;
		
		case 31:
			if (iParam1 == 1)
			{
				return 926.96f, 2445.36f, 49.09f;
			}
			else
			{
				return 929.6946f, 2444.115f, 48.43f;
			}
			break;
		
		case 32:
			if (iParam1 == 1)
			{
				return -2380.212f, 2655.176f, 0.832f;
			}
			else
			{
				return -2379.948f, 2656.953f, 1.4906f;
			}
			break;
		
		case 33:
			return -861.38f, 2753.3f, 12.867f;
			break;
		
		case 34:
			return -289.0195f, 2848.853f, 53.331f;
			break;
		
		case 35:
			if (iParam1 == 1)
			{
				return 288.8409f, 2871.912f, 42.6422f;
			}
			else
			{
				return 265.7415f, 2866.416f, 73.19f;
			}
			break;
		
		case 36:
			if (iParam1 == 1)
			{
				return 1297.378f, 2988.71f, 40.11787f;
			}
			else
			{
				return 1294.2f, 3001.9f, 57.7f;
			}
			break;
		
		case 37:
			return 1568.65f, 3572.8f, 32.294f;
			break;
		
		case 38:
			return -1608.62f, 4274.25f, 102.95f;
			break;
		
		case 39:
			if (iParam1 == 1)
			{
				return -3.51812f, 4332.451f, 31.21602f;
			}
			else
			{
				return -1.9585f, 4334.787f, 32.3702f;
			}
			break;
		
		case 40:
			return 1336.737f, 4307.2f, 37.1325f;
			break;
		
		case 41:
			if (iParam1 == 1)
			{
				return -1007.103f, 4836.936f, 268.5488f;
			}
			else
			{
				return -1001.48f, 4851.322f, 273.6112f;
			}
			break;
		
		case 42:
			return 1877.09f, 5078.98f, 50.49f;
			break;
		
		case 43:
			if (iParam1 == 1)
			{
				return 3366.099f, 5182.461f, 0.68317f;
			}
			else
			{
				return 3436.453f, 5176.911f, 6.386f;
			}
			break;
		
		case 44:
			if (iParam1 == 1)
			{
				return -576.12f, 5472.24f, 59.28f;
			}
			else
			{
				return -578.8057f, 5470.164f, 59.0295f;
			}
			break;
		
		case 45:
			return 444.6518f, 5571.781f, 780.1888f;
			break;
		
		case 46:
			return -402.9948f, 6319.279f, 31.2256f;
			break;
		
		case 47:
			return 1439.599f, 6335.208f, 22.9485f;
			break;
		
		case 48:
			if (iParam1 == 1)
			{
				return 1466.109f, 6552.266f, 12.95773f;
			}
			else
			{
				return 1469.632f, 6552.174f, 13.6854f;
			}
			break;
		
		case 49:
			if (iParam1 == 1)
			{
				return 66.19278f, 6668.888f, 30.80633f;
			}
			else
			{
				return 66.7136f, 6663.198f, 30.7821f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_64(int iParam0)//Position - 0x3004
{
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 0;
	}
	return !unk_0x1D403DFADBC2DE3C(iParam0, 0);
}

void func_65(int iParam0, int iParam1)//Position - 0x3022
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_19B04.f_2188[iParam0] = 1;
	Global_19B04.f_2188.f_EC[iParam0] = (unk_0x105601648511CC64() + iParam1);
}

void func_66(int iParam0, int iParam1)//Position - 0x305F
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

void func_67(int iParam0, int iParam1, int iParam2)//Position - 0x30A4
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
		func_48((891 + iParam0), 1, -1, 1);
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
		func_68();
	}
}

void func_68()//Position - 0x318C
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
		func_45(13, SYSTEM::FLOOR(Global_19B04.f_27B5.f_F0D));
	}
	if (!unk_0xF9BFA43C1BAFD016())
	{
		if (!Global_11542)
		{
			if (func_69() == 2 == 0 && !unk_0x7AF0088ABFA713B6())
			{
				if (unk_0x670C0C6C780A3F84())
				{
					Global_199FA = 0;
				}
				if (!Global_DA9F)
				{
					func_41();
				}
			}
		}
	}
}

int func_69()//Position - 0x364D
{
	return Global_62BD;
}

int func_70(int iParam0)//Position - 0x3658
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

int func_71(int iParam0)//Position - 0x36B2
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_19B04.f_2360.f_63.f_3A[iParam0];
}

int func_72(int iParam0)//Position - 0x36DF
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

void func_73()//Position - 0x3739
{
	int iVar0;
	
	unk_0x6AEB48E3B648804A(0);
	unk_0xB0B0FE33F4F22679(&iLocal_55);
	unk_0x121BBDEFA4F0C22B(0);
	Global_19B04.f_2724.f_7A.f_2 = 0;
	iVar0 = 0;
	while (iVar0 < Local_50)
	{
		func_52(&(Local_50[iVar0 /*11*/].f_2));
		func_39(&(Local_50[iVar0 /*11*/].f_1));
		Local_50[iVar0 /*11*/].f_1 = 0;
		iVar0++;
	}
	if (func_71(106) == 1)
	{
		func_66(106, 1);
		func_75();
		func_70(12);
	}
	else if (func_74(&(Local_44.f_1)))
	{
		func_66(106, 1);
		func_75();
		func_70(12);
	}
	else
	{
		func_72(12);
	}
	if (iLocal_60)
	{
		unk_0x2CA123B0622F495C(Local_44.f_7);
	}
	unk_0x95E4B6F3ED223F5A();
}

bool func_74(var uParam0)//Position - 0x37EA
{
	if (uParam0->f_3 <= 0)
	{
	}
	return uParam0->f_4 >= uParam0->f_3;
}

void func_75()//Position - 0x3803
{
	int iVar0;
	
	iVar0 = func_76(64);
	Global_24D643[iVar0 /*83*/] = 64;
	StringCopy(&(Global_24D643[iVar0 /*83*/].f_12[0 /*16*/]), "", 64);
}

int func_76(int iParam0)//Position - 0x382F
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_24D643[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_24D643[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

