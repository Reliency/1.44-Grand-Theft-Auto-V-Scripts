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
	vector3 vLocal_19[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_20[2] = { 0f, 0f };
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
	if (unk_0xE8A79675302ED812(3))
	{
		func_1();
	}
	unk_0x25A523E067E06F54(1);
	unk_0xF243B7A14FCFD0F4(joaat("cuban800"));
	while (!unk_0xD6513D668481290A(joaat("cuban800")))
	{
		SYSTEM::WAIT(0);
	}
	vLocal_19[0 /*3*/] = { 1169.976f, 3592.572f, 32.6481f };
	vLocal_19[1 /*3*/] = { 1215.738f, 3586.608f, 33.5131f };
	fLocal_20[0] = 277.7043f;
	fLocal_20[1] = 77.1113f;
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), 1220.202f, 3596.281f, 33.259f, 1, false, 0, 1);
	}
	unk_0x8B6B50EADA01F251(1220.202f, 3596.281f, 33.259f);
	iLocal_18 = unk_0x61C05BF08A1E0EFE(joaat("cuban800"), vLocal_19[0 /*3*/], fLocal_20[0], true, true, false);
	unk_0xF0A40F19AAB79E88(iLocal_18, 1084227584);
	unk_0x2CA123B0622F495C(joaat("cuban800"));
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0xBD53A029D0155A42(unk_0xBC25C936A095B5BA(), iLocal_18, -1);
	}
	while (true)
	{
		func_1();
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x136
{
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0x49D46EE47C9CCB66(unk_0xBC25C936A095B5BA());
	}
	if (unk_0x724D816EA203A79E(iLocal_18))
	{
		unk_0xCF6040807CC0E4A5(&iLocal_18);
	}
	unk_0x2CA123B0622F495C(joaat("cuban800"));
	unk_0x95E4B6F3ED223F5A();
}

