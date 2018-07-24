#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	if (unk_0xE8A79675302ED812(83))
	{
		func_10();
	}
	unk_0x6B8A98821B4304EB(0);
	unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_2703.f_19), 1);
	func_7();
	unk_0xC4248B71D9B26306(true);
	if (!unk_0x17FAADF9916EF741())
	{
		unk_0x7A41D32A383895D8(0);
	}
	iLocal_0 = unk_0x9934FEFB3B8C6DB8("OPENING_CREDITS");
	while (!unk_0xA7F138B5B1AB2CF6(iLocal_0))
	{
		func_7();
		SYSTEM::WAIT(0);
	}
	while (!unk_0x17FAADF9916EF741())
	{
		func_7();
		SYSTEM::WAIT(0);
	}
	func_6("TITLE", 0f, 1f, 1.5f, 1f, 0f, 1.5f, 15f);
	iLocal_1 = (unk_0x105601648511CC64() + 8000 + SYSTEM::ROUND((2f * 1000f)));
	while (!unk_0x866EAD7E27D8D0F8())
	{
		func_7();
		if (!unk_0xFA30DFD0084E92FE(Global_19B04.f_2703.f_19, 1))
		{
			unk_0x4B6031094354FED6(iLocal_0, 255, 255, 255, 255, 0);
			if (!iLocal_2)
			{
				if (unk_0x105601648511CC64() > iLocal_1)
				{
					func_5("TITLE");
					iLocal_2 = 1;
					iLocal_1 = (unk_0x105601648511CC64() + SYSTEM::ROUND((2f * 1000f)));
				}
			}
			else if (unk_0x105601648511CC64() > iLocal_1)
			{
				unk_0xF0059F27F7BB6680(&(Global_19B04.f_2703.f_19), 1);
				if (unk_0x3B006769D3779C74() || unk_0x8ACB0C3FACC09467())
				{
					func_4(1, 1);
					func_2();
				}
				else
				{
					func_1();
				}
			}
		}
		SYSTEM::WAIT(0);
	}
	func_10();
}

void func_1()//Position - 0x13E
{
	Global_16B42 = 1;
}

int func_2()//Position - 0x14B
{
	if (func_3(0))
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

bool func_3(bool bParam0)//Position - 0x196
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_1163A, 0);
}

void func_4(int iParam0, int iParam1)//Position - 0x1C1
{
	Global_16B42.f_7 = iParam0;
	Global_16B42.f_8 = iParam1;
}

void func_5(char* sParam0)//Position - 0x1D9
{
	unk_0x29CD142125FE177B(iLocal_0, "HIDE_LOGO");
	unk_0x57016C44F10111F0("STRING");
	unk_0x607C19B90D297FE2(sParam0);
	unk_0x64989E60CF560CA1();
	unk_0xF9FBC2F3F73D94C9();
}

void func_6(char* sParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7)//Position - 0x200
{
	unk_0x29CD142125FE177B(iLocal_0, "SHOW_LOGO");
	unk_0x57016C44F10111F0("STRING");
	unk_0x607C19B90D297FE2(sParam0);
	unk_0x64989E60CF560CA1();
	unk_0xD44E04EBBDC4CE88(fParam1);
	unk_0xD44E04EBBDC4CE88(fParam2);
	unk_0xD44E04EBBDC4CE88(fParam3);
	unk_0xD44E04EBBDC4CE88(fParam4);
	unk_0xD44E04EBBDC4CE88(fParam5);
	unk_0xD44E04EBBDC4CE88(fParam6);
	unk_0xD44E04EBBDC4CE88(fParam7);
	unk_0xF9FBC2F3F73D94C9();
}

void func_7()//Position - 0x251
{
	unk_0x37CCF3DE21C7FD23();
	unk_0xBBC4195AD74D153D(2, 199, 1);
	unk_0x996AC9A66B2A5A3F(7);
	func_8();
}

void func_8()//Position - 0x26E
{
	unk_0x2423B13D9CFAD1DD();
	func_9();
}

void func_9()//Position - 0x27E
{
	Global_4336.f_86 = 1;
}

void func_10()//Position - 0x28C
{
	unk_0xF0059F27F7BB6680(&(Global_19B04.f_2703.f_19), 1);
	if (iLocal_0 != 0)
	{
		unk_0xB0B0FE33F4F22679(&iLocal_0);
	}
	unk_0x996AC9A66B2A5A3F(4);
	unk_0xC4248B71D9B26306(false);
	unk_0x6B8A98821B4304EB(1);
	unk_0x95E4B6F3ED223F5A();
}

