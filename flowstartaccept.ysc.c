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
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
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
	if (unk_0xE8A79675302ED812(83))
	{
		func_6();
	}
	if ((!Global_1 && !unk_0x8ACB0C3FACC09467()) && unk_0x3B006769D3779C74())
	{
		unk_0xC4248B71D9B26306(true);
		if (!unk_0x17FAADF9916EF741())
		{
			if (!unk_0x422F9EDE839E6ABB())
			{
				unk_0x7A41D32A383895D8(800);
			}
		}
		iLocal_20 = unk_0x9934FEFB3B8C6DB8("MP_BIG_MESSAGE_FREEMODE");
		iLocal_21 = unk_0x9934FEFB3B8C6DB8("INSTRUCTIONAL_BUTTONS");
		while (!unk_0xA7F138B5B1AB2CF6(iLocal_20) || !unk_0xA7F138B5B1AB2CF6(iLocal_21))
		{
			SYSTEM::WAIT(0);
		}
		unk_0x29CD142125FE177B(iLocal_20, "SHOW_CENTERED_MP_MESSAGE");
		func_5("INSTALL_COMP");
		unk_0xF9FBC2F3F73D94C9();
		unk_0x29CD142125FE177B(iLocal_21, "SET_DATA_SLOT_EMPTY");
		unk_0xF9FBC2F3F73D94C9();
		unk_0x29CD142125FE177B(iLocal_21, "SET_DATA_SLOT");
		unk_0x1E1FB49121565EB6(0);
		func_4(unk_0xE57EAD1FEA2A6FAF(2, 201, true));
		func_5("HUD_CONTINUE");
		unk_0xF9FBC2F3F73D94C9();
		unk_0x29CD142125FE177B(iLocal_21, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0x5E5DBD0A6623969E(false);
		unk_0xF9FBC2F3F73D94C9();
		while (!unk_0x17FAADF9916EF741())
		{
			SYSTEM::WAIT(0);
		}
		unk_0x126E6B6CBE0FEACC();
		while (!iLocal_22)
		{
			unk_0x37CCF3DE21C7FD23();
			unk_0x996AC9A66B2A5A3F(7);
			unk_0x4B6031094354FED6(iLocal_20, 255, 255, 255, 0, 0);
			unk_0x4B6031094354FED6(iLocal_21, 255, 255, 255, 0, 0);
			if (unk_0x8FCEEB789599BD9B(2, 201))
			{
				iLocal_22 = 1;
			}
			SYSTEM::WAIT(0);
		}
		unk_0xC4248B71D9B26306(false);
		func_3(1, 1);
		func_1();
	}
	Global_1164F.f_1 = 0;
	unk_0xF0059F27F7BB6680(&(Global_19B04.f_2703.f_19), 0);
	func_6();
}

int func_1()//Position - 0x17D
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

bool func_2(bool bParam0)//Position - 0x1C8
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_1163A, 0);
}

void func_3(int iParam0, int iParam1)//Position - 0x1F3
{
	Global_16B42.f_7 = iParam0;
	Global_16B42.f_8 = iParam1;
}

void func_4(char* sParam0)//Position - 0x20B
{
	unk_0xCB30200B8055CA57(sParam0);
}

void func_5(char* sParam0)//Position - 0x219
{
	unk_0x57016C44F10111F0(sParam0);
	unk_0x64989E60CF560CA1();
}

void func_6()//Position - 0x22B
{
	if (iLocal_20 != 0)
	{
		unk_0xB0B0FE33F4F22679(&iLocal_20);
	}
	if (iLocal_21 != 0)
	{
		unk_0xB0B0FE33F4F22679(&iLocal_21);
	}
	unk_0x996AC9A66B2A5A3F(4);
	unk_0xC4248B71D9B26306(false);
	unk_0x95E4B6F3ED223F5A();
}

