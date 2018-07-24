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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	bool bLocal_46 = 0;
	bool bLocal_47 = 0;
	var uLocal_48 = 0;
	struct<11> Local_49[10];
	char* sLocal_50[10] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_37 = 1;
	iLocal_38 = 1;
	iLocal_40 = joaat("prop_time_capsule_01");
	if (unk_0xE8A79675302ED812(210))
	{
		func_49();
	}
	if (unk_0xB731B8C5BCE89836(joaat("epsilontract")) > 1)
	{
		unk_0x95E4B6F3ED223F5A();
	}
	func_48(9);
	while (true)
	{
		SYSTEM::WAIT(0);
		switch (iLocal_39)
		{
			case 0:
				func_47();
				break;
			
			case 1:
				func_1();
				break;
			
			case 2:
				func_49();
				break;
		}
	}
}

void func_1()//Position - 0xCE
{
	int iVar0;
	int iVar1;
	
	if ((func_46(unk_0xBC25C936A095B5BA()) && !func_45(14)) && !unk_0x17FAADF9916EF741())
	{
		if (iLocal_41 < 10)
		{
			if (iLocal_41 == 0)
			{
				if (!func_44(36) && (unk_0x105601648511CC64() - iLocal_42) > iLocal_43)
				{
					func_43(0, 60, sLocal_50[0], 1, 0, 0, 0, 0, 1);
					func_42(36);
					iLocal_42 = -1;
				}
			}
			else if (iLocal_41 < 10)
			{
				if (!iLocal_42 == -1)
				{
					if ((unk_0x105601648511CC64() - iLocal_42) > 15000)
					{
						func_43(0, 60, sLocal_50[iLocal_41], 1, 0, 0, 0, 0, 1);
						iLocal_42 = -1;
					}
				}
			}
			if (Local_49[iLocal_41 /*11*/].f_A)
			{
				if (unk_0xF1B911222059B1A1(Local_49[iLocal_41 /*11*/].f_1) || func_41(Local_49[iLocal_41 /*11*/].f_1))
				{
					if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
					{
						unk_0x44C98C11ED6DD327(unk_0xBC25C936A095B5BA());
					}
					func_40(&(Local_49[iLocal_41 /*11*/].f_1));
					Local_49[iLocal_41 /*11*/].f_A = 0;
					unk_0xF715C239F71B95D6(0, 200, 250);
					iVar0 = (805 + iLocal_41);
					func_39(iVar0, 1, -1, 1);
					unk_0x0D5F0AC615350E61(joaat("num_hidden_packages_2"), 1f);
					bLocal_46 = true;
					if (iLocal_41 < 10)
					{
						iLocal_41++;
						iLocal_42 = unk_0x105601648511CC64();
						func_38(1, 0);
						func_36();
					}
				}
				else if (unk_0xA901403F1DB7A780(Local_49[iLocal_41 /*11*/].f_1))
				{
					func_34(Local_49[iLocal_41 /*11*/].f_3);
					func_33(&(Local_49[iLocal_41 /*11*/].f_1), &(Local_49[iLocal_41 /*11*/].f_A));
				}
			}
			else
			{
				while (func_32(4, iVar1) && iVar1 < 10)
				{
					iVar1++;
				}
				if (iVar1 == iLocal_41)
				{
					func_30(&(Local_49[iLocal_41 /*11*/]), iLocal_40, joaat("pickup_custom_script"), 0, 0, 2);
				}
			}
		}
		else if (!bLocal_47 && !bLocal_46)
		{
			func_13();
		}
		func_2(&bLocal_46, &bLocal_47, &uLocal_48, 4, &uLocal_44, &iLocal_45, "TRACT_TITLE", "TRACT_COLLECT");
	}
}

void func_2(bool bParam0, bool bParam1, var uParam2, int iParam3, var uParam4, int iParam5, char* sParam6, char* sParam7)//Position - 0x2A0
{
	int iVar0;
	
	func_12(0);
	if (*bParam0)
	{
		switch (*uParam4)
		{
			case 0:
				*iParam5 = unk_0x9934FEFB3B8C6DB8("MIDSIZED_MESSAGE");
				if (unk_0xA7F138B5B1AB2CF6(*iParam5))
				{
					iVar0 = unk_0x2F079D1FC5F6CB99();
					if (iParam3 == 6)
					{
						unk_0xC4BA30B532FE260F(iVar0, "PEYOTE_COMPLETED", "HUD_AWARDS", 1);
					}
					else
					{
						unk_0xC4BA30B532FE260F(iVar0, "COLLECTED", "HUD_AWARDS", 1);
					}
					*uParam4++;
				}
				break;
			
			case 1:
				unk_0x29CD142125FE177B(*iParam5, "SHOW_SHARD_MIDSIZED_MESSAGE");
				unk_0x57016C44F10111F0(sParam6);
				unk_0x64989E60CF560CA1();
				unk_0x57016C44F10111F0(sParam7);
				unk_0xAA5C5BF0489E5553(func_4(iParam3));
				unk_0x64989E60CF560CA1();
				unk_0xF9FBC2F3F73D94C9();
				*uParam2 = unk_0x105601648511CC64();
				*uParam4++;
				break;
			
			case 2:
				if ((unk_0x105601648511CC64() - *uParam2) > 7000)
				{
					unk_0x29CD142125FE177B(*iParam5, "SHARD_ANIM_OUT");
					unk_0x1E1FB49121565EB6(1);
					unk_0xD44E04EBBDC4CE88(0.33f);
					unk_0xF9FBC2F3F73D94C9();
					*uParam4++;
				}
				else if (!func_3())
				{
					if (unk_0xA7F138B5B1AB2CF6(*iParam5))
					{
						func_12(1);
						unk_0x4B6031094354FED6(*iParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 3:
				if ((unk_0x105601648511CC64() - *uParam2) > 7500)
				{
					*uParam4++;
				}
				else if (!func_3())
				{
					if (unk_0xA7F138B5B1AB2CF6(*iParam5))
					{
						func_12(1);
						unk_0x4B6031094354FED6(*iParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 4:
				if (unk_0xA7F138B5B1AB2CF6(*iParam5))
				{
					unk_0xB0B0FE33F4F22679(iParam5);
				}
				func_12(0);
				*bParam1 = 0;
				*bParam0 = 0;
				*uParam4 = 0;
				break;
			}
	}
}

int func_3()//Position - 0x423
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

int func_4(int iParam0)//Position - 0x44D
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 == 2)
	{
		iVar1 = 0;
		while (iVar1 < func_11(iParam0))
		{
			if (unk_0xFA30DFD0084E92FE(Global_19B04.f_2724.f_6C, func_10(func_11(iParam0), iVar1)))
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
		while (iVar1 < func_11(iParam0))
		{
			iVar2 = (func_9(iParam0) + iVar1);
			if (func_5(iVar2, -1, -1))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_5(int iParam0, int iParam1, int iParam2)//Position - 0x515
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_8();
	}
	iVar1 = func_7(iParam0, iParam1);
	uVar2 = func_6(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDAB376DC6F83D68C(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_6(int iParam0)//Position - 0x552
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

int func_7(int iParam0, int iParam1)//Position - 0x83E
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_8();
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

int func_8()//Position - 0xB01
{
	return Global_1407E0;
}

int func_9(int iParam0)//Position - 0xB0D
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

int func_10(int iParam0, int iParam1)//Position - 0xB54
{
	if (iParam1 < 32)
	{
		return iParam1;
	}
	return (iParam0 - iParam1);
}

int func_11(int iParam0)//Position - 0xB70
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

void func_12(int iParam0)//Position - 0xBC0
{
	if (Global_1164D != iParam0)
	{
		Global_1164D = iParam0;
	}
}

void func_13()//Position - 0xBDA
{
	func_29(95, 1);
	func_15(27, 84, 0);
	func_14(9);
	iLocal_39 = 2;
}

int func_14(int iParam0)//Position - 0xBFC
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

int func_15(int iParam0, int iParam1, bool bParam2)//Position - 0xC56
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_27(iParam0, 1);
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
			func_16(Global_B522[iVar0 /*203*/].f_4[iVar1], Global_B522[iVar0 /*203*/].f_1, 1, bParam2, 0);
		}
		iVar1++;
	}
	return 1;
}

void func_16(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0xE52
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
		Var3 = { func_26(Global_90CE[iVar5 /*12*/].f_1) };
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
			Var3 = { func_26(Global_90CE[iVar11 /*12*/].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_B3B8[iParam0 /*120*/].f_45[iVar0] && !bParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_17(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				
				case 1:
					if (iVar2 == 249)
					{
						func_17(1, iVar1, iVar2, "PW_FEED_EM_1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_17(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					break;
				
				case 2:
					func_17(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				}
			}
	}
}

void func_17(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13)//Position - 0x1227
{
	int iVar0;
	bool bVar1;
	char cVar2[64];
	
	if (unk_0x866EAD7E27D8D0F8())
	{
		return;
	}
	iVar0 = func_21();
	bVar1 = false;
	StringCopy(&cVar2, func_20(iParam1, &bVar1), 64);
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
			func_18(unk_0x7BB0762D8C75A3C7(&cVar2, &cVar2, 0, 2, unk_0xFCB4C1AC11347344(func_19(iParam1)), 0));
		}
		else
		{
			func_18(unk_0x7BB0762D8C75A3C7("CHAR_DEFAULT", "CHAR_DEFAULT", 0, 2, unk_0xFCB4C1AC11347344(func_19(iParam1)), 0));
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

void func_18(int iParam0)//Position - 0x140F
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

char* func_19(int iParam0)//Position - 0x143D
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

char* func_20(int iParam0, int iParam1)//Position - 0x17A8
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

var func_21()//Position - 0x1BFB
{
	func_22();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_22()//Position - 0x1C14
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_25(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_24(unk_0xBC25C936A095B5BA());
			if (func_23(iVar0) && (!func_45(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_23(Global_19B04.f_932.f_21B.f_10CD))
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

bool func_23(int iParam0)//Position - 0x1D11
{
	return iParam0 < 3;
}

int func_24(int iParam0)//Position - 0x1D1D
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_25(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_25(int iParam0)//Position - 0x1D5A
{
	if (func_23(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

struct<16> func_26(int iParam0)//Position - 0x1D84
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

int func_27(int iParam0, bool bParam1)//Position - 0x1DB5
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
	
	iVar0 = func_28(iParam0);
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

int func_28(int iParam0)//Position - 0x1FCD
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

void func_29(int iParam0, int iParam1)//Position - 0x2031
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

void func_30(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x2076
{
	int iVar0;
	
	if (!uParam0->f_A)
	{
		if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			if (!func_45(13) && !func_45(14))
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
							func_31(uParam0->f_3);
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

void func_31(vector3 vParam0)//Position - 0x218F
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

int func_32(int iParam0, int iParam1)//Position - 0x21CD
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 1)
	{
		iVar1 = 705;
	}
	else if (iParam0 == 0)
	{
		iVar1 = 755;
	}
	else if (iParam0 == 3)
	{
		iVar1 = 815;
	}
	else if (iParam0 == 4)
	{
		iVar1 = 805;
	}
	else if (iParam0 == 5)
	{
		iVar1 = 845;
	}
	iVar0 = (iVar1 + iParam1);
	return func_5(iVar0, -1, -1);
}

void func_33(var uParam0, var uParam1)//Position - 0x2227
{
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), unk_0x85EA1A40FC3A6769(*uParam0), true) >= 60f)
		{
			func_40(uParam0);
			*uParam0 = 0;
			*uParam1 = 0;
		}
	}
}

void func_34(vector3 vParam0)//Position - 0x2267
{
	if (func_35(unk_0xBC25C936A095B5BA(), vParam0, 7f))
	{
		unk_0x4BED3C9D6EF14C38(unk_0xBC25C936A095B5BA(), vParam0, 100, 2048, 1);
	}
}

bool func_35(int iParam0, vector3 vParam1, float fParam2)//Position - 0x2291
{
	return SYSTEM::VDIST2(unk_0x541C2AEF053615BC(iParam0, true), vParam1) <= (fParam2 * fParam2);
}

int func_36()//Position - 0x22AE
{
	if (func_37(0))
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

bool func_37(bool bParam0)//Position - 0x22F9
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_1163A, 0);
}

void func_38(int iParam0, int iParam1)//Position - 0x2324
{
	Global_16B42.f_7 = iParam0;
	Global_16B42.f_8 = iParam1;
}

int func_39(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x233C
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
		iParam2 = func_8();
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

void func_40(var uParam0)//Position - 0x284C
{
	if (unk_0xA901403F1DB7A780(*uParam0))
	{
		unk_0x9680DF46F29C0428(*uParam0);
	}
}

int func_41(var uParam0)//Position - 0x2865
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xA901403F1DB7A780(uParam0))
	{
		return 0;
	}
	if (func_46(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			iVar1 = unk_0x6F79ECA8C83E4357(iVar0);
			if (iVar1 == joaat("submersible") || iVar1 == joaat("submersible2"))
			{
				if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), unk_0x85EA1A40FC3A6769(uParam0)) < (5f * 5f) || unk_0xE921F8171F0733B3(unk_0xBC25C936A095B5BA(), unk_0xE34D8BCB888BAD7F(uParam0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_42(int iParam0)//Position - 0x28F1
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

int func_43(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x2933
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 21;
			break;
		
		case 1:
			iVar0 = 22;
			break;
		
		case 2:
			iVar0 = 23;
			break;
		
		default:
			return 0;
			break;
	}
	StringCopy(&(Global_19B04.f_3720[iVar0 /*104*/]), sParam2, 64);
	Global_19B04.f_3720[iVar0 /*104*/].f_11 = iParam1;
	if (iParam3 == 0)
	{
		return 0;
	}
	else
	{
		Global_19B04.f_3720[iVar0 /*104*/].f_18 = iParam3;
	}
	Global_19B04.f_3720[iVar0 /*104*/].f_19 = iParam4;
	Global_19B04.f_3720[iVar0 /*104*/].f_1A = iParam5;
	Global_19B04.f_3720[iVar0 /*104*/].f_1D = iParam6;
	Global_19B04.f_3720[iVar0 /*104*/].f_1E = iParam8;
	Global_19B04.f_3720[iVar0 /*104*/].f_1F = iParam7;
	Global_19B04.f_3720[iVar0 /*104*/].f_1C = 0;
	return 1;
}

int func_44(int iParam0)//Position - 0x2A04
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

bool func_45(int iParam0)//Position - 0x2A47
{
	return Global_8C41 == iParam0;
}

int func_46(int iParam0)//Position - 0x2A55
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

void func_47()//Position - 0x2A76
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (Global_19B04.f_4871.f_184)
	{
		sLocal_50[0] = "TRACT_HINT1B";
		iLocal_43 = 300000;
	}
	else
	{
		sLocal_50[0] = "TRACT_HINT1";
		iLocal_43 = 16000;
	}
	Local_49[0 /*11*/].f_3 = { 501.9415f, 5604.429f, 796.9146f };
	Local_49[1 /*11*/].f_3 = { 2658.18f, -1361.14f, -21.63f };
	sLocal_50[1] = "TRACT_HINT2";
	Local_49[2 /*11*/].f_3 = { 24.7139f, 7644.334f, 18.0792f };
	sLocal_50[2] = "TRACT_HINT3";
	Local_49[3 /*11*/].f_3 = { -263.55f, 4729.6f, 137.37f };
	sLocal_50[3] = "TRACT_HINT4";
	Local_49[4 /*11*/].f_3 = { -771.98f, -685.22f, 28.86f };
	sLocal_50[4] = "TRACT_HINT5";
	Local_49[5 /*11*/].f_3 = { -1605.03f, 5256.55f, 1.08f };
	sLocal_50[5] = "TRACT_HINT6";
	Local_49[6 /*11*/].f_3 = { -1804.546f, 403.9298f, 112.1966f };
	sLocal_50[6] = "TRACT_HINT7";
	Local_49[7 /*11*/].f_3 = { 484.2701f, 5617.175f, 787.4708f };
	sLocal_50[7] = "TRACT_HINT8";
	Local_49[8 /*11*/].f_3 = { -75.1004f, -819.0673f, 325.3656f };
	sLocal_50[8] = "TRACT_HINT9";
	Local_49[9 /*11*/].f_3 = { -1725.34f, -189.95f, 57.52f };
	sLocal_50[9] = "TRACT_HINT10";
	iLocal_42 = unk_0x105601648511CC64();
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar1 = (805 + iVar0);
		if (func_5(iVar1, -1, -1))
		{
			iLocal_41++;
		}
		iVar0++;
	}
	iLocal_39 = 1;
}

int func_48(int iParam0)//Position - 0x2C28
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

void func_49()//Position - 0x2C82
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_40(&(Local_49[iVar0 /*11*/].f_1));
		iVar0++;
	}
	unk_0x95E4B6F3ED223F5A();
}

