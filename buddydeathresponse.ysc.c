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
	int iLocal_20 = 0;
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
	if (unk_0xE8A79675302ED812(2) || unk_0x51984EECA4A0574A())
	{
		unk_0x95E4B6F3ED223F5A();
	}
	func_1();
}

void func_1()//Position - 0x4F
{
	vector3 vVar0;
	var uVar1;
	
	while (!func_8(&iLocal_20))
	{
		SYSTEM::WAIT(0);
	}
	if (!unk_0x36CEFBE9B745A58D(iLocal_20))
	{
		if (!Global_15DFB)
		{
			unk_0x77815D3407C6700D(iLocal_20, true, 1);
			if (unk_0xF4FCC3C1048FF2AB(iLocal_20, 1435919172) != 7)
			{
				unk_0xA4E856A8CD53B8DF(iLocal_20);
			}
			vVar0 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0) };
			unk_0x2E35C4FA5F0ED22F(iLocal_20, 1);
			unk_0xC5A6DFE2B8987B17(&uVar1);
			if (!unk_0x5237AF95232D78C5(iLocal_20, 0))
			{
				if (!unk_0x8F97799512B006B7(iLocal_20, 0) && !unk_0x5237AF95232D78C5(iLocal_20, 0))
				{
					unk_0xCF4C6C235CD09F4F(0, vVar0, 6000);
				}
			}
			unk_0x4BED3C9D6EF14C38(0, vVar0, 6000, 0, 2);
			unk_0x535008C596714F9E(uVar1);
			unk_0xA8E6405305C0D7DF(iLocal_20, uVar1);
		}
		func_2(iLocal_20);
	}
	while (!unk_0x17FAADF9916EF741())
	{
		SYSTEM::WAIT(0);
	}
	if (unk_0x724D816EA203A79E(iLocal_20))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_20))
		{
			unk_0x22321800954A532E(iLocal_20, 1);
		}
		unk_0x02537C8C1BEEB477(&iLocal_20);
	}
	Global_15DFB = 0;
	unk_0x95E4B6F3ED223F5A();
}

void func_2(int iParam0)//Position - 0x13C
{
	int iVar0;
	
	iVar0 = unk_0x105601648511CC64() + 1000;
	while (unk_0x105601648511CC64() < iVar0 && !unk_0x17FAADF9916EF741())
	{
		SYSTEM::WAIT(0);
	}
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (iLocal_19 == 1)
		{
			switch (func_5(unk_0xBC25C936A095B5BA()))
			{
				case 2:
					func_3(iParam0, "BUDDY_SEES_TREVOR_DEATH", "FRANKLIN_NORMAL", 3);
					break;
				
				case 0:
					func_3(iParam0, "BUDDY_SEES_MICHAEL_DEATH", "FRANKLIN_NORMAL", 3);
					break;
			}
		}
		else if (iLocal_19 == 2)
		{
			switch (func_5(unk_0xBC25C936A095B5BA()))
			{
				case 1:
					func_3(iParam0, "BUDDY_SEES_FRANKLIN_DEATH", "TREVOR_NORMAL", 3);
					break;
				
				case 0:
					func_3(iParam0, "BUDDY_SEES_MICHAEL_DEATH", "TREVOR_NORMAL", 3);
					break;
			}
		}
		else if (iLocal_19 == 0)
		{
			switch (func_5(unk_0xBC25C936A095B5BA()))
			{
				case 2:
					func_3(iParam0, "BUDDY_SEES_TREVOR_DEATH", "MICHAEL_NORMAL", 3);
					break;
				
				case 1:
					func_3(iParam0, "BUDDY_SEES_FRANKLIN_DEATH", "MICHAEL_NORMAL", 3);
					break;
				}
			}
	}
}

void func_3(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x234
{
	unk_0x7E80A36CD8BDF4D1(iParam0, sParam1, sParam2, func_4(iParam3), 0);
}

int func_4(int iParam0)//Position - 0x24D
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

int func_5(int iParam0)//Position - 0x43C
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_6(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_6(int iParam0)//Position - 0x479
{
	if (func_7(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_7(int iParam0)//Position - 0x4A3
{
	return iParam0 < 3;
}

int func_8(var uParam0)//Position - 0x4AF
{
	int iVar0;
	
	iLocal_18 = 0;
	while (iLocal_18 < 9)
	{
		if (unk_0x724D816EA203A79E(Global_16165[iLocal_18]) && !unk_0x36CEFBE9B745A58D(Global_16165[iLocal_18]))
		{
			if (Global_16165[iLocal_18] != unk_0xBC25C936A095B5BA())
			{
				if (!unk_0x5CAE759AE8219D20(Global_16165[iLocal_18]))
				{
					if (unk_0x5237AF95232D78C5(Global_16165[iLocal_18], 0) || !unk_0xE7E55F7532DEE345(Global_16165[iLocal_18]))
					{
						if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(Global_16165[iLocal_18], 1), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), true) < 10f)
						{
							iLocal_19 = func_5(Global_16165[iLocal_18]);
							if ((iLocal_19 == 0 || iLocal_19 == 2) || iLocal_19 == 1)
							{
								if (iLocal_19 != func_9())
								{
									if (unk_0x4833C1F1F1364989(Global_16165[iLocal_18], unk_0xBC25C936A095B5BA(), 17))
									{
										if (unk_0x5237AF95232D78C5(Global_16165[iLocal_18], 0))
										{
											iVar0 = unk_0x9FE9D386222EEE47(Global_16165[iLocal_18], 0);
										}
										if ((unk_0x724D816EA203A79E(iVar0) && unk_0xE59B7F5A03335350(iVar0, 0)) || !unk_0x724D816EA203A79E(iVar0))
										{
											*uParam0 = Global_16165[iLocal_18];
											return 1;
										}
									}
								}
							}
						}
					}
				}
			}
		}
		iLocal_18++;
	}
	if (unk_0x17FAADF9916EF741())
	{
		return 1;
	}
	return 0;
}

int func_9()//Position - 0x5F4
{
	func_10();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_10()//Position - 0x60D
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_6(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_5(unk_0xBC25C936A095B5BA());
			if (func_7(iVar0) && (!func_11(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_7(Global_19B04.f_932.f_21B.f_10CD))
				{
					Global_19B04.f_932.f_21B.f_10CE = Global_19B04.f_932.f_21B.f_10CD;
				}
				Global_19B04.f_932.f_21B.f_10CF = iVar0;
				Global_19B04.f_932.f_21B.f_10CD = iVar0;
				return;
			}
		}
		else
		{
			if (Global_19B04.f_932.f_21B.f_10CD != 145)
			{
				Global_19B04.f_932.f_21B.f_10CF = Global_19B04.f_932.f_21B.f_10CD;
			}
			return;
		}
	}
	Global_19B04.f_932.f_21B.f_10CD = 145;
}

bool func_11(int iParam0)//Position - 0x70A
{
	return Global_8C41 == iParam0;
}

