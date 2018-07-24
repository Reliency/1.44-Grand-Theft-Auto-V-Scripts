#region Local Var
	int iLocal_0 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 5;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	if (unk_0xB731B8C5BCE89836(joaat("wp_partyboombox")) > 1)
	{
		unk_0x95E4B6F3ED223F5A();
	}
	if (unk_0xE8A79675302ED812(18))
	{
		func_1();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!unk_0x684B06333594F9EA())
		{
			iLocal_0 = 3;
		}
		switch (iLocal_0)
		{
			case 0:
				if (unk_0x6E06C0DB9B43570D() >= 22 || unk_0x6E06C0DB9B43570D() <= 4)
				{
					iLocal_0 = 1;
				}
				else
				{
					func_1();
				}
				break;
			
			case 1:
				if (!unk_0xE7CC712DAAEA69F3("ID2_21_G_Night"))
				{
					unk_0x5183B5D4E829B7E4("ID2_21_G_Night");
					iLocal_0 = 2;
				}
				break;
			
			case 2:
				break;
			
			case 3:
				if (!unk_0x719413B40BB63D86() && !unk_0x7930B3E9C919E90F())
				{
					func_1();
				}
				break;
		}
	}
}

void func_1()//Position - 0xB1
{
	if (unk_0xE7CC712DAAEA69F3("ID2_21_G_Night"))
	{
		unk_0x66EC947D9DEDE5B3("ID2_21_G_Night");
	}
	unk_0x95E4B6F3ED223F5A();
}

