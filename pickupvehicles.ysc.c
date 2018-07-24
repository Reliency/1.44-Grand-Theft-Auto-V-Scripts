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
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
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
	func_4(21);
	if (unk_0xE8A79675302ED812(18))
	{
		if (unk_0x663171D6F90FBA5A() == 16)
		{
			func_3(21);
		}
		func_2();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (unk_0xB731B8C5BCE89836(joaat("docks_setup")) == 0)
		{
			if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
			{
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
				{
					iLocal_28 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
				}
				else
				{
					iLocal_28 = 0;
				}
			}
			if (unk_0x724D816EA203A79E(iLocal_28))
			{
				if (unk_0xE59B7F5A03335350(iLocal_28, 0))
				{
					if (unk_0x5E87CB0495C97732(iLocal_28, joaat("handler")))
					{
						unk_0xD55638CE45B2B948(0, 51);
						if (!unk_0xC2ED08796AD8022C(iLocal_28))
						{
							if (iLocal_32 == 0)
							{
								if (!unk_0x724D816EA203A79E(iLocal_29) || (unk_0x724D816EA203A79E(iLocal_29) && unk_0xCE5CC3450F9879E0(unk_0x541C2AEF053615BC(iLocal_28, true), 15f, 874602658, 1, 0, 1) != iLocal_29))
								{
									iLocal_29 = unk_0xCE5CC3450F9879E0(unk_0x541C2AEF053615BC(iLocal_28, true), 15f, 874602658, 1, 0, 1);
								}
								if (unk_0x724D816EA203A79E(iLocal_29))
								{
									if (func_1(&iLocal_30, 1000))
									{
										if (unk_0xDA2E60A24D8A66D7(iLocal_28, iLocal_29))
										{
											if (unk_0x694514BD37EC4E94(0, 51))
											{
												unk_0xB4C07757D19AD3EF(iLocal_28, iLocal_29);
												iLocal_31 = 1;
												iLocal_32 = 1;
											}
										}
									}
								}
							}
						}
						else
						{
							if (iLocal_31 == 1)
							{
								iLocal_30 = unk_0x105601648511CC64();
								iLocal_31 = 0;
								iLocal_32 = 0;
							}
							if (unk_0x694514BD37EC4E94(0, 51))
							{
							}
						}
					}
				}
			}
		}
	}
}

int func_1(var uParam0, int iParam1)//Position - 0x18E
{
	int iVar0;
	
	iVar0 = unk_0x105601648511CC64();
	if ((iVar0 - *uParam0) > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_2()//Position - 0x1AC
{
	unk_0x95E4B6F3ED223F5A();
}

int func_3(int iParam0)//Position - 0x1B8
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

int func_4(int iParam0)//Position - 0x212
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

