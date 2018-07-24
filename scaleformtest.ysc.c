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
	int iLocal_19 = 0;
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
	if (unk_0x17FAADF9916EF741())
	{
		unk_0x829FA4611BD56B44(500);
	}
	if (unk_0xE8A79675302ED812(3))
	{
		func_5();
	}
	iLocal_19 = unk_0x9934FEFB3B8C6DB8("instructional_buttons");
	while (!unk_0xA7F138B5B1AB2CF6(iLocal_19))
	{
		SYSTEM::WAIT(0);
	}
	while (true)
	{
		unk_0x4B6031094354FED6(iLocal_19, 255, 255, 255, 0, 0);
		func_4();
		func_1(iLocal_18, iLocal_19);
		SYSTEM::WAIT(0);
	}
}

void func_1(int iParam0, int iParam1)//Position - 0x8D
{
	switch (iParam0)
	{
		case 0:
			unk_0x29CD142125FE177B(iParam1, "CLEAR_ALL");
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(iParam1, "SET_CLEAR_SPACE");
			unk_0x1E1FB49121565EB6(200);
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(iParam1, "SET_DATA_SLOT");
			unk_0x1E1FB49121565EB6(0);
			func_3(unk_0xE57EAD1FEA2A6FAF(2, 191, true));
			func_2("PRESS A");
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(iParam1, "SET_DATA_SLOT");
			unk_0x1E1FB49121565EB6(1);
			func_3(unk_0xE57EAD1FEA2A6FAF(2, 194, true));
			func_2("PRESS B");
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(iParam1, "SET_DATA_SLOT");
			unk_0x1E1FB49121565EB6(2);
			func_3(unk_0xE57EAD1FEA2A6FAF(2, 193, true));
			func_2("PRESS X");
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(iParam1, "SET_DATA_SLOT");
			unk_0x1E1FB49121565EB6(3);
			func_3(unk_0xE57EAD1FEA2A6FAF(2, 192, true));
			func_2("PRESS Y");
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(iParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(iParam1, "SET_BACKGROUND_COLOUR");
			unk_0x1E1FB49121565EB6(0);
			unk_0x1E1FB49121565EB6(0);
			unk_0x1E1FB49121565EB6(0);
			unk_0x1E1FB49121565EB6(80);
			unk_0xF9FBC2F3F73D94C9();
			iLocal_18 = -1;
			break;
		
		case 1:
			unk_0x29CD142125FE177B(iParam1, "CLEAR_ALL");
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(iParam1, "SET_CLEAR_SPACE");
			unk_0x1E1FB49121565EB6(200);
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(iParam1, "SET_DATA_SLOT");
			unk_0x1E1FB49121565EB6(0);
			func_3(unk_0xE57EAD1FEA2A6FAF(2, 187, true));
			func_2("DOWN");
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(iParam1, "SET_DATA_SLOT");
			unk_0x1E1FB49121565EB6(1);
			func_3(unk_0xE57EAD1FEA2A6FAF(2, 188, true));
			func_2("UP");
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(iParam1, "SET_DATA_SLOT");
			unk_0x1E1FB49121565EB6(2);
			func_3(unk_0xE57EAD1FEA2A6FAF(2, 190, true));
			func_2("LEFT");
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(iParam1, "SET_DATA_SLOT");
			unk_0x1E1FB49121565EB6(3);
			func_3(unk_0xE57EAD1FEA2A6FAF(2, 189, true));
			func_2("RIGHT");
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(iParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(iParam1, "SET_BACKGROUND_COLOUR");
			unk_0x1E1FB49121565EB6(0);
			unk_0x1E1FB49121565EB6(0);
			unk_0x1E1FB49121565EB6(0);
			unk_0x1E1FB49121565EB6(80);
			unk_0xF9FBC2F3F73D94C9();
			iLocal_18 = -1;
			break;
		
		case 2:
			unk_0x29CD142125FE177B(iParam1, "CLEAR_ALL");
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(iParam1, "SET_CLEAR_SPACE");
			unk_0x1E1FB49121565EB6(200);
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(iParam1, "SET_DATA_SLOT");
			unk_0x1E1FB49121565EB6(0);
			func_3(unk_0xE57EAD1FEA2A6FAF(2, 202, true));
			func_2("BACK");
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(iParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(iParam1, "SET_BACKGROUND_COLOUR");
			unk_0x1E1FB49121565EB6(0);
			unk_0x1E1FB49121565EB6(0);
			unk_0x1E1FB49121565EB6(0);
			unk_0x1E1FB49121565EB6(80);
			unk_0xF9FBC2F3F73D94C9();
			iLocal_18 = -1;
			break;
		
		default:
			break;
	}
}

void func_2(char* sParam0)//Position - 0x312
{
	unk_0x57016C44F10111F0(sParam0);
	unk_0x64989E60CF560CA1();
}

void func_3(char* sParam0)//Position - 0x324
{
	unk_0xCB30200B8055CA57(sParam0);
}

void func_4()//Position - 0x332
{
	if (Global_3888 == 0)
	{
		if (((((((((unk_0x8FCEEB789599BD9B(2, 189) || unk_0x8FCEEB789599BD9B(2, 190)) || unk_0x8FCEEB789599BD9B(2, 188)) || unk_0x8FCEEB789599BD9B(2, 187)) || unk_0x8FCEEB789599BD9B(2, 205)) || unk_0x8FCEEB789599BD9B(2, 206)) || unk_0x8FCEEB789599BD9B(2, 207)) || unk_0x8FCEEB789599BD9B(2, 208)) || unk_0x8FCEEB789599BD9B(2, 201)) || unk_0x8FCEEB789599BD9B(2, 202))
		{
			Global_3888 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
	else if (SYSTEM::TIMERA() > 50)
	{
		Global_3888 = 0;
	}
	if (Global_3888 == 0)
	{
		if (unk_0x8FCEEB789599BD9B(2, 217))
		{
			iLocal_18 = 1;
		}
		if (unk_0x8FCEEB789599BD9B(2, 189))
		{
			iLocal_18 = 2;
		}
		if (unk_0x8FCEEB789599BD9B(2, 190))
		{
			iLocal_18 = 2;
		}
		if (unk_0x8FCEEB789599BD9B(2, 205))
		{
		}
		if (unk_0x8FCEEB789599BD9B(2, 206))
		{
		}
		if (unk_0x8FCEEB789599BD9B(2, 207))
		{
		}
		if (unk_0x8FCEEB789599BD9B(2, 208))
		{
		}
		if (unk_0x8FCEEB789599BD9B(2, 188))
		{
			iLocal_18 = 2;
		}
		if (unk_0x8FCEEB789599BD9B(2, 187))
		{
			iLocal_18 = 2;
		}
		if (unk_0x8FCEEB789599BD9B(2, 201))
		{
			iLocal_18 = 1;
		}
		if (unk_0x8FCEEB789599BD9B(2, 202))
		{
			iLocal_18 = 0;
		}
		if (unk_0x8FCEEB789599BD9B(2, 203))
		{
			iLocal_18 = 1;
		}
		if (unk_0x8FCEEB789599BD9B(2, 204))
		{
			iLocal_18 = 1;
		}
	}
}

void func_5()//Position - 0x47D
{
	func_6(0);
	unk_0x121BBDEFA4F0C22B(0);
	unk_0xB0B0FE33F4F22679(&iLocal_19);
	unk_0x95E4B6F3ED223F5A();
}

void func_6(bool bParam0)//Position - 0x499
{
	if (bParam0)
	{
		func_11();
		if (Global_389D.f_1 == 10 || Global_389D.f_1 == 9)
		{
			unk_0xF0059F27F7BB6680(&Global_93C, 16);
		}
		Global_389D.f_1 = 1;
		if (func_10(0))
		{
			func_7(0);
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

void func_7(int iParam0)//Position - 0x4FC
{
	if (Global_3943)
	{
		func_9(0, 0);
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
	if (!func_8())
	{
		Global_389D.f_1 = 3;
	}
}

int func_8()//Position - 0x56C
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_9(bool bParam0, bool bParam1)//Position - 0x593
{
	if (bParam0)
	{
		if (func_10(0))
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

int func_10(int iParam0)//Position - 0x607
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

void func_11()//Position - 0x661
{
	if (Global_389D.f_1 == 9 || Global_389D.f_1 == 10)
	{
		Global_3DED = 0;
		Global_3DE9 = 1;
	}
}

