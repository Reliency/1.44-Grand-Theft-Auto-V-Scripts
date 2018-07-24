#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	vector3 vLocal_2 = { 0f, 0f, 0f };
	float fLocal_3 = 0f;
	char* sLocal_4 = NULL;
	int iLocal_5 = 0;
	char* sLocal_6 = NULL;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	sLocal_4 = "Poledance_01";
	iLocal_5 = joaat("a_f_y_beach_01");
	sLocal_6 = "MISSSTRIP_CLUB";
	if (unk_0x724D816EA203A79E(iScriptParam_8))
	{
		unk_0x346478B12F69D4E3(iScriptParam_8, true);
		vLocal_2 = { unk_0xA4455714F3DCE207(iScriptParam_8, 0f, 0f, 0f) };
		fLocal_3 = unk_0x349C94FFF43E2979(iScriptParam_8);
		unk_0xD434A01DEA38A939(iScriptParam_8, false, 0);
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (unk_0x724D816EA203A79E(iScriptParam_8))
		{
			if (unk_0x08B699D523A3F9CB(iScriptParam_8))
			{
				switch (iLocal_0)
				{
					case 0:
						if (func_5())
						{
							func_4();
							iLocal_0 = 2;
						}
						break;
					
					case 2:
						func_3();
						if (func_2())
						{
							unk_0xD434A01DEA38A939(iScriptParam_8, true, 0);
							iLocal_0 = 3;
						}
						break;
					
					case 3:
						if (!unk_0x36CEFBE9B745A58D(iLocal_1))
						{
							unk_0xEE7131C3C73E7282(iLocal_1, -1);
							unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 1);
							unk_0x22321800954A532E(iLocal_1, true);
							unk_0x95E4B6F3ED223F5A();
						}
						break;
				}
			}
			else
			{
				func_1();
			}
		}
		else
		{
			func_1();
		}
	}
}

void func_1()//Position - 0xDC
{
	if (!unk_0x1D403DFADBC2DE3C(iLocal_1, 0))
	{
		if (!unk_0xD1DC4B08247A4317(iLocal_1))
		{
			unk_0xF845620A03C7425B(&iLocal_1);
		}
		else
		{
			unk_0x22321800954A532E(iLocal_1, true);
		}
	}
	unk_0x95E4B6F3ED223F5A();
}

int func_2()//Position - 0x10D
{
	vector3 vVar0;
	
	vVar0 = { 2f, 2f, 0.5f };
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_1))
		{
			if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_1, vVar0, 0, 1, 0))
			{
				return 1;
			}
			if (unk_0xD9C1758D86688CEA(iLocal_1, unk_0xBC25C936A095B5BA(), 1))
			{
				return 1;
			}
			if (unk_0xE921F8171F0733B3(unk_0xBC25C936A095B5BA(), iLocal_1))
			{
				return 1;
			}
		}
		if (unk_0x32E373675659FDB0(unk_0xBC25C936A095B5BA()))
		{
			return 1;
		}
	}
	return 0;
}

void func_3()//Position - 0x181
{
	if (!unk_0x36CEFBE9B745A58D(iLocal_1))
	{
		if (unk_0xF4FCC3C1048FF2AB(iLocal_1, -2017877118) == 7)
		{
			unk_0xE896C0AD02364F2A(iLocal_1, sLocal_6, sLocal_4, 8f, -8f, -1, 0, 0, 0, 0, 0);
		}
		else if (unk_0xDA39550C86FB9A4D(iLocal_1, sLocal_6, sLocal_4, 3))
		{
			unk_0xE896C0AD02364F2A(iLocal_1, sLocal_6, sLocal_4, 8f, -8f, -1, 0, 0, 0, 0, 0);
		}
		else if (!iLocal_7)
		{
			if (unk_0x96044E39418AAF17(iLocal_1, sLocal_6, sLocal_4, 3))
			{
				unk_0x68567B14F012CF3E(iLocal_1, sLocal_6, sLocal_4, unk_0x55AEFCD285ECC0F2(0f, 1f));
				iLocal_7 = 1;
			}
		}
	}
}

void func_4()//Position - 0x215
{
	if (unk_0x1D403DFADBC2DE3C(iLocal_1, 0))
	{
		iLocal_1 = unk_0x01B3635C3E8EDD81(5, iLocal_5, vLocal_2.x, vLocal_2.y, vLocal_2.z, fLocal_3, 1, true);
		unk_0x7D314AB19CA29C96(iLocal_1, 0);
		unk_0xB105531EDD3DE51B(iLocal_1, false);
		unk_0x2E35C4FA5F0ED22F(iLocal_1, true);
	}
}

int func_5()//Position - 0x253
{
	unk_0xF243B7A14FCFD0F4(iLocal_5);
	unk_0x522053D86D6E1C7A(sLocal_6);
	if (unk_0xD6513D668481290A(iLocal_5) && unk_0xF9E082857622D91E(sLocal_6))
	{
		return 1;
	}
	else
	{
		unk_0xF243B7A14FCFD0F4(iLocal_5);
		unk_0x522053D86D6E1C7A(sLocal_6);
	}
	return 0;
}

