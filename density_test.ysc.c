#region Local Var
	bool bLocal_0 = 0;
	bool bLocal_1 = 0;
	float fLocal_2 = 0f;
	float fLocal_3 = 0f;
	float fLocal_4 = 0f;
	float fLocal_5 = 0f;
	float fLocal_6 = 0f;
	float fLocal_7 = 0f;
	float fLocal_8 = 0f;
#endregion

void __EntryFunction__()//Position - 0x0
{
	bLocal_0 = true;
	bLocal_1 = true;
	fLocal_2 = 1f;
	fLocal_3 = 1f;
	fLocal_4 = 1f;
	fLocal_5 = 1f;
	fLocal_6 = 1f;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	unk_0x25A523E067E06F54(1);
	if (unk_0xE8A79675302ED812(3))
	{
		func_1();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			if (bLocal_0)
			{
				unk_0x598D851D7D0D2BA3(fLocal_2);
			}
			unk_0x12FC760610FCE787(fLocal_3);
			unk_0x4A19CBD4D4B2F663(fLocal_4);
			unk_0x2FBD34F0C73314E9(fLocal_5);
			if (bLocal_1)
			{
				unk_0xF8F756483107049E(fLocal_6);
			}
			unk_0x3A27D4CD1D9BF9D5(fLocal_7, fLocal_8);
		}
	}
}

void func_1()//Position - 0x7C
{
	unk_0xED48729ADA05C6DE(1);
	unk_0x95E4B6F3ED223F5A();
}

