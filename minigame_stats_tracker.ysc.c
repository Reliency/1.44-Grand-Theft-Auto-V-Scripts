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
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	struct<68> ScriptParam_0 = { 0, 0, 1132396544, 1132396544, 1132396544, 0, -1082130432, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1092616192 } ;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	if (unk_0xE8A79675302ED812(3))
	{
		func_17();
	}
	while (true)
	{
		switch (iLocal_45)
		{
			case 0:
				iLocal_46 = unk_0x9934FEFB3B8C6DB8("mission_complete");
				iLocal_45 = 1;
				break;
			
			case 1:
				if (unk_0xA7F138B5B1AB2CF6(iLocal_46))
				{
					iLocal_45 = 2;
				}
				break;
			
			case 2:
				unk_0x3DC7DDDAC3F740D1(iLocal_46, "SET_MISSION_TITLE", ScriptParam_50, ScriptParam_50.f_1, 0, 0, 0);
				unk_0xA8032C3455BE4244(iLocal_46, "SET_MISSION_TITLE_COLOUR", ScriptParam_50.f_2, ScriptParam_50.f_2, ScriptParam_50.f_2, -1082130432, -1082130432);
				if (ScriptParam_50.f_5.f_1 != -1f && !unk_0xEAEFBBEC1AEA464B(ScriptParam_50.f_5.f_2))
				{
					unk_0x5CF9A02A75084EF7(iLocal_46, "SET_TOTAL", SYSTEM::TO_FLOAT(ScriptParam_50.f_5), ScriptParam_50.f_5.f_1, -1f, -1f, -1f, ScriptParam_50.f_5.f_2, 0, 0, 0, 0);
				}
				unk_0xA8032C3455BE4244(iLocal_46, "SET_MEDAL", SYSTEM::TO_FLOAT(ScriptParam_50.f_5), -1082130432, -1082130432, -1082130432, -1082130432);
				unk_0xA8032C3455BE4244(iLocal_46, "SET_SOCIAL_CLUB_INFO", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				iVar0 = 0;
				while (iVar0 < ScriptParam_50.f_42 + 1)
				{
					unk_0x29CD142125FE177B(iLocal_46, "SET_DATA_SLOT");
					unk_0x1E1FB49121565EB6(ScriptParam_50.f_9[iVar0 /*7*/]);
					unk_0x1E1FB49121565EB6(ScriptParam_50.f_9[iVar0 /*7*/].f_1);
					if (ScriptParam_50.f_9[iVar0 /*7*/].f_2 == 4)
					{
						unk_0x1E1FB49121565EB6(2);
						unk_0x1E1FB49121565EB6(0);
						unk_0x1E1FB49121565EB6(0);
						unk_0x57016C44F10111F0("STRING");
						unk_0x4C36886AAFD04CF8(SYSTEM::FLOOR((ScriptParam_50.f_9[iVar0 /*7*/].f_3 * 1000f)), 6);
						unk_0x64989E60CF560CA1();
						if (!unk_0xEAEFBBEC1AEA464B(ScriptParam_50.f_9[iVar0 /*7*/].f_5))
						{
							func_16(ScriptParam_50.f_9[iVar0 /*7*/].f_5);
						}
					}
					else if (ScriptParam_50.f_9[iVar0 /*7*/].f_2 == 8)
					{
						if (!unk_0xEAEFBBEC1AEA464B(ScriptParam_50.f_9[iVar0 /*7*/].f_5) && !unk_0xEAEFBBEC1AEA464B(ScriptParam_50.f_9[iVar0 /*7*/].f_6))
						{
							unk_0x57016C44F10111F0(ScriptParam_50.f_9[iVar0 /*7*/].f_6);
							unk_0x607C19B90D297FE2(ScriptParam_50.f_9[iVar0 /*7*/].f_5);
							unk_0x64989E60CF560CA1();
						}
					}
					else
					{
						unk_0x1E1FB49121565EB6(ScriptParam_50.f_9[iVar0 /*7*/].f_2);
						if ((ScriptParam_50.f_9[iVar0 /*7*/].f_3 % 1f) == 0f)
						{
							unk_0xD44E04EBBDC4CE88(ScriptParam_50.f_9[iVar0 /*7*/].f_3);
						}
						else
						{
							unk_0x57016C44F10111F0("NUMBER");
							unk_0x3AE7CB4034BE212F(ScriptParam_50.f_9[iVar0 /*7*/].f_3, 2);
							unk_0x64989E60CF560CA1();
						}
						if ((ScriptParam_50.f_9[iVar0 /*7*/].f_4 % 1f) == 0f)
						{
							unk_0xD44E04EBBDC4CE88(ScriptParam_50.f_9[iVar0 /*7*/].f_4);
						}
						else
						{
							unk_0x57016C44F10111F0("NUMBER");
							unk_0x3AE7CB4034BE212F(ScriptParam_50.f_9[iVar0 /*7*/].f_4, 2);
							unk_0x64989E60CF560CA1();
						}
						if (!unk_0xEAEFBBEC1AEA464B(ScriptParam_50.f_9[iVar0 /*7*/].f_5))
						{
							func_16(ScriptParam_50.f_9[iVar0 /*7*/].f_5);
						}
						if (!unk_0xEAEFBBEC1AEA464B(ScriptParam_50.f_9[iVar0 /*7*/].f_6))
						{
							func_16(ScriptParam_50.f_9[iVar0 /*7*/].f_6);
						}
					}
					unk_0xF9FBC2F3F73D94C9();
					iVar0++;
				}
				if (ScriptParam_50.f_5 != 0 && !unk_0xEAEFBBEC1AEA464B(ScriptParam_50.f_5.f_2))
				{
					unk_0x29CD142125FE177B(iLocal_46, "SET_TOTAL");
					unk_0x1E1FB49121565EB6(ScriptParam_50.f_5);
					if (!unk_0xEAEFBBEC1AEA464B(ScriptParam_50.f_5.f_3))
					{
						func_16(ScriptParam_50.f_5.f_3);
					}
					else
					{
						unk_0xD44E04EBBDC4CE88(ScriptParam_50.f_5.f_1);
					}
					func_16(ScriptParam_50.f_5.f_2);
					unk_0xF9FBC2F3F73D94C9();
				}
				unk_0x29CD142125FE177B(iLocal_46, "DRAW_MENU_LIST");
				unk_0xF9FBC2F3F73D94C9();
				func_12(1);
				func_9(&iLocal_47);
				if (!func_8(Global_19B04.f_4A7C, 4096))
				{
					func_6(&(Global_19B04.f_4A7C), 4096);
				}
				iLocal_45 = 3;
				break;
			
			case 3:
				if (((func_2(&iLocal_47) > ScriptParam_50.f_43 && ScriptParam_50.f_43 != -1f) || unk_0x17FAADF9916EF741()) || Global_634D)
				{
					func_17();
				}
				else
				{
					func_1(1);
					unk_0x65E432C782E7E702(iLocal_46, 0.1495f, 0.3159f, 0.2021f, 0.5111f, 255, 255, 255, 0, 0);
					if (unk_0xB6AACEDA0127F076(10))
					{
						unk_0x4E0EC60D119222B1(10);
					}
				}
				break;
		}
		SYSTEM::WAIT(0);
	}
	func_17();
}

void func_1(int iParam0)//Position - 0x447
{
	Global_11646 = iParam0;
	Global_11647 = iParam0;
}

float func_2(int iParam0)//Position - 0x45B
{
	if (func_5(iParam0))
	{
		if (func_4(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_3(unk_0xFA30DFD0084E92FE(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_3(bool bParam0)//Position - 0x49A
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

bool func_4(var uParam0)//Position - 0x4F2
{
	return unk_0xFA30DFD0084E92FE(*uParam0, 2);
}

bool func_5(var uParam0)//Position - 0x502
{
	return unk_0xFA30DFD0084E92FE(*uParam0, 1);
}

void func_6(var uParam0, int iParam1)//Position - 0x512
{
	func_7(uParam0, iParam1);
}

void func_7(var uParam0, var uParam1)//Position - 0x522
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_8(var uParam0, int iParam1)//Position - 0x533
{
	return (uParam0 && iParam1) != 0;
}

void func_9(int iParam0)//Position - 0x542
{
	if (!func_5(iParam0))
	{
		func_10(iParam0);
	}
}

void func_10(int iParam0)//Position - 0x55A
{
	func_11(iParam0, 0f);
}

void func_11(int iParam0, float fParam1)//Position - 0x569
{
	iParam0->f_1 = (func_3(unk_0xFA30DFD0084E92FE(*iParam0, 4)) - fParam1);
	unk_0xF0059F27F7BB6680(iParam0, 1);
	unk_0x7CB6FD92BE491AD9(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_12(int iParam0)//Position - 0x597
{
	if (Global_3943)
	{
		func_14(0, 0);
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

int func_13()//Position - 0x607
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_14(bool bParam0, bool bParam1)//Position - 0x62E
{
	if (bParam0)
	{
		if (func_15(0))
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

int func_15(int iParam0)//Position - 0x6A2
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

void func_16(char* sParam0)//Position - 0x6FC
{
	unk_0x57016C44F10111F0(sParam0);
	unk_0x64989E60CF560CA1();
}

void func_17()//Position - 0x70E
{
	unk_0xB0B0FE33F4F22679(&iLocal_46);
	Global_634D = 0;
	func_1(0);
	unk_0x95E4B6F3ED223F5A();
}

