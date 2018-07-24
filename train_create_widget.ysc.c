#region Local Var
	int iLocal_0 = 0;
	vector3 vLocal_1 = { 0f, 0f, 0f };
	int iLocal_2 = 0;
	float fLocal_3 = 0f;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	bool bLocal_6 = 0;
	int iLocal_7 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	vLocal_1 = { 613f, 6438f, 31f };
	fLocal_3 = 5f;
	iLocal_4 = 1;
	unk_0x25A523E067E06F54(1);
	if (unk_0xE8A79675302ED812(3))
	{
		func_1();
	}
	unk_0xED48729ADA05C6DE(0);
	unk_0x28F3C8C5AD5BD015();
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), 626.68f, 6442.31f, 30.88f, 1, false, 0, 1);
		unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), -177f);
		unk_0xF3F01A78937DC905(0f);
	}
	unk_0xF243B7A14FCFD0F4(joaat("freight"));
	unk_0xF243B7A14FCFD0F4(joaat("freightcar"));
	unk_0xF243B7A14FCFD0F4(joaat("freightgrain"));
	unk_0xF243B7A14FCFD0F4(joaat("freightcont1"));
	unk_0xF243B7A14FCFD0F4(joaat("freightcont2"));
	unk_0xF243B7A14FCFD0F4(joaat("tankercar"));
	unk_0xF243B7A14FCFD0F4(868868440);
	while ((((((!unk_0xD6513D668481290A(joaat("freight")) || !unk_0xD6513D668481290A(joaat("freightcar"))) || !unk_0xD6513D668481290A(joaat("freightgrain"))) || !unk_0xD6513D668481290A(joaat("freightcont1"))) || !unk_0xD6513D668481290A(joaat("freightcont2"))) || !unk_0xD6513D668481290A(joaat("tankercar"))) || !unk_0xD6513D668481290A(868868440))
	{
		SYSTEM::WAIT(0);
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			if (iLocal_5)
			{
				if (unk_0x724D816EA203A79E(iLocal_0))
				{
					unk_0xCBD3B8A22DC34DE4(&iLocal_0);
				}
				iLocal_0 = unk_0xE6F956ED0C35CEC7(iLocal_2, vLocal_1, iLocal_4);
				iLocal_5 = 0;
			}
			if (iLocal_7)
			{
				vLocal_1 = { unk_0x8AB4E14F6E158D9D() };
				iLocal_7 = 0;
			}
			if (unk_0xE59B7F5A03335350(iLocal_0, 0) && !unk_0x1D403DFADBC2DE3C(iLocal_0, 0))
			{
				unk_0x2D4A9A2A2B11931A(iLocal_0, fLocal_3);
				unk_0x3BC0D8886158D9A7(iLocal_0, fLocal_3);
			}
			if (bLocal_6)
			{
				func_1();
			}
		}
	}
}

void func_1()//Position - 0x1A5
{
	unk_0xED48729ADA05C6DE(1);
	unk_0x95E4B6F3ED223F5A();
}

