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
	vector3 vLocal_19 = { 0f, 0f, 0f };
	int iLocal_20 = 0;
	int iLocal_21 = 0;
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
	if (unk_0x7AF0088ABFA713B6())
	{
		if (unk_0xFA30DFD0084E92FE(Global_14FADF, 1))
		{
			func_17();
		}
		else
		{
			unk_0xBF463BC3D6FFDE31(32, 0, -1);
			func_14(0, -1, 0);
			unk_0x6C87EFD58B261C6F(0);
			iLocal_20 = 1;
		}
	}
	else if (unk_0xE8A79675302ED812(2))
	{
		func_17();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (iLocal_20 == 1)
		{
			if (func_3())
			{
				func_17();
			}
		}
		if (unk_0x724D816EA203A79E(iScriptParam_21))
		{
			if (unk_0x08B699D523A3F9CB(iScriptParam_21))
			{
				switch (iLocal_18)
				{
					case 0:
						if (unk_0xA184E93CD7E0E9AA(iScriptParam_21))
						{
							vLocal_19 = { unk_0x541C2AEF053615BC(iScriptParam_21, true) };
							iLocal_18 = 1;
						}
						break;
					
					case 1:
						if ((unk_0xF6231E2AD6680273(iScriptParam_21) && unk_0x8F6EAC9E7D6812D5(iScriptParam_21)) && !unk_0x5CAE759AE8219D20(iScriptParam_21))
						{
							func_1();
							iLocal_18 = 2;
						}
						break;
					
					case 2:
						break;
				}
			}
			else
			{
				func_17();
			}
		}
		else
		{
			func_17();
		}
	}
}

void func_1()//Position - 0x113
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = joaat("prop_money_bag_01");
	iVar1 = joaat("pickup_money_med_bag");
	iVar3 = unk_0x491B2241281A03B7(70, 121);
	if (unk_0x7AF0088ABFA713B6())
	{
		iVar0 = joaat("prop_cash_pile_01");
		iVar3 = unk_0x491B2241281A03B7(50, 101);
		iVar3 = func_2(iVar3, 1);
	}
	unk_0xF0059F27F7BB6680(&iVar2, 3);
	unk_0xF0059F27F7BB6680(&iVar2, 4);
	unk_0xF243B7A14FCFD0F4(iVar0);
	while (!unk_0xD6513D668481290A(iVar0))
	{
		SYSTEM::WAIT(0);
	}
	unk_0x249B372087B496EC(iVar1, unk_0xEFF59CF8CAAFA23E(vLocal_19, 1067030938, 1069547520), iVar2, iVar3, 0, iVar0);
}

int func_2(int iParam0, int iParam1)//Position - 0x198
{
	float fVar0;
	
	switch (iParam1)
	{
		case 0:
			break;
		
		case 1:
			if (iParam0 > 0)
			{
				fVar0 = (SYSTEM::TO_FLOAT(iParam0) * Global_40001);
				iParam0 = SYSTEM::ROUND(fVar0);
			}
			break;
		
		default:
			break;
	}
	return iParam0;
}

int func_3()//Position - 0x1D9
{
	var uVar0;
	
	func_10(&uVar0);
	if (Global_14083F == 0)
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			return 1;
		}
	}
	if (func_9())
	{
		return 1;
	}
	if (Global_25891C)
	{
		return 1;
	}
	if (func_8())
	{
		return 1;
	}
	if (func_7(157))
	{
		if (!func_6())
		{
			return 1;
		}
	}
	if (func_7(155))
	{
		return 1;
	}
	if (!unk_0x57D316754A262B34())
	{
		return 1;
	}
	if (func_4() != 0)
	{
		if (unk_0xB731B8C5BCE89836(func_4()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_4()//Position - 0x263
{
	switch (func_5())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_5()//Position - 0x297
{
	return Global_62BD;
}

bool func_6()//Position - 0x2A2
{
	return Global_255A46.f_24A;
}

int func_7(int iParam0)//Position - 0x2B1
{
	if (unk_0xA1AC399BCBEE5B2D(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_8()//Position - 0x2C8
{
	return Global_258063;
}

bool func_9()//Position - 0x2D4
{
	return Global_255A46.f_245;
}

void func_10(var uParam0)//Position - 0x2E3
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	
	iVar0 = 0;
	while (iVar0 < unk_0x432AA9CCB3EE0174(1))
	{
		iVar1 = unk_0x2BFAC254CC069912(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x414AA1932D1C88E2(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 1113296425:
					func_11(iVar0);
					break;
				
				case -319074860:
					unk_0x414AA1932D1C88E2(1, iVar0, &vVar3, 4);
					if (vVar3.z == -1987561915)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_11(int iParam0)//Position - 0x356
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x414AA1932D1C88E2(1, iParam0, &vVar0, 3))
	{
		if (func_13(vVar0.y, 1, 1))
		{
			iVar1 = unk_0xA95CF30C72EB526E(vVar0.y);
			if (unk_0x724D816EA203A79E(iVar1))
			{
				if (unk_0x5237AF95232D78C5(iVar1, 0))
				{
					iVar2 = unk_0x9FE9D386222EEE47(iVar1, 0);
					if (unk_0x403C891106DCABAF(iVar2, vVar0.z) && unk_0x32405B7614E36453())
					{
						if (func_12(iVar2, &bVar3))
						{
							unk_0xD5DC0505375F4D00(iVar2, vVar0.z);
						}
						if (bVar3)
						{
							unk_0x1E7A09C1710FB071(&iVar2);
						}
					}
				}
			}
		}
	}
}

int func_12(int iParam0, var uParam1)//Position - 0x3D7
{
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (!unk_0x5CAE759AE8219D20(iParam0))
		{
			if (unk_0x63B5FF8D34CBC98E(iParam0))
			{
				if (!unk_0xFF2234981505F7F4(unk_0x6F79ECA8C83E4357(iParam0)))
				{
					unk_0x77815D3407C6700D(iParam0, false, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0xB248FAA35ED47DB9(iParam0, 0))
		{
			if (unk_0x4DF785C4DF542CD0(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_13(int iParam0, bool bParam1, bool bParam2)//Position - 0x436
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x96B1061E8F3CBC9A(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x6A9CDB766DF7216F(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_252E21.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_14(int iParam0, int iParam1, bool bParam2)//Position - 0x480
{
	int iVar0;
	
	iVar0 = unk_0x4796DAD7A8894E2F();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_16();
			}
			else
			{
				return 0;
			}
		}
		if (!func_15())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x7AF0088ABFA713B6())
				{
					if (!bParam2)
					{
						func_16();
					}
					else
					{
						return 0;
					}
				}
				if (func_9())
				{
					if (!bParam2)
					{
						func_16();
					}
					else
					{
						return 0;
					}
				}
				if (func_7(155))
				{
					if (!bParam2)
					{
						func_16();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xF5F5C6DD66B0FB2A())
			{
				if (!bParam2)
				{
					func_16();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = unk_0x4796DAD7A8894E2F();
	}
	if (iParam1 > -1)
	{
		Global_1406F4 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			if (!bParam2)
			{
				func_16();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xF5F5C6DD66B0FB2A())
	{
		if (!bParam2)
		{
			func_16();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_15()//Position - 0x595
{
	return Global_14083F;
}

void func_16()//Position - 0x5A1
{
	unk_0x95E4B6F3ED223F5A();
}

void func_17()//Position - 0x5AD
{
	unk_0x95E4B6F3ED223F5A();
}

