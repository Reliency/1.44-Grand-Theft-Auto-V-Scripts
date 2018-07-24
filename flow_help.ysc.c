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
	struct<17> Local_20 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_21 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	int iVar2;
	
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
	if (unk_0xE8A79675302ED812(50))
	{
		func_22();
	}
	while (true)
	{
		if (Global_19B04.f_4F9D.f_91 > 0 || Global_195B4)
		{
			if (!Global_195B4)
			{
				if ((Global_8C41 != 6 && Global_8C41 != 15) && !Global_15C13)
				{
					func_22();
				}
				if (!Global_195B3)
				{
					if (Global_19B04.f_4F9D.f_91 > 0)
					{
						if (func_19(&(Global_19B04.f_4F9D[iLocal_21 /*16*/])))
						{
							if (func_17(func_18()))
							{
								if (unk_0xFA30DFD0084E92FE(Global_19B04.f_4F9D[iLocal_21 /*16*/].f_B, func_12()))
								{
									if (Global_19B04.f_4F9D[iLocal_21 /*16*/].f_C == Global_19B04.f_4F9D.f_92[func_12()])
									{
										if (unk_0x105601648511CC64() > Global_195B6)
										{
											if (unk_0x105601648511CC64() > Global_19B04.f_4F9D[iLocal_21 /*16*/].f_8)
											{
												if (unk_0x3362CDE8460ED38B(&(Global_19B04.f_4F9D[iLocal_21 /*16*/].f_4), ""))
												{
													unk_0x563F749F78AC90A0(1);
													func_11(&(Global_19B04.f_4F9D[iLocal_21 /*16*/]));
												}
												else
												{
													unk_0x563F749F78AC90A0(1);
													func_10(&(Global_19B04.f_4F9D[iLocal_21 /*16*/]), &(Global_19B04.f_4F9D[iLocal_21 /*16*/].f_4));
												}
												if (Global_19B04.f_4F9D[iLocal_21 /*16*/].f_D != 0)
												{
													func_9(Global_19B04.f_4F9D[iLocal_21 /*16*/].f_D, 0);
												}
												Local_20 = { Global_19B04.f_4F9D[iLocal_21 /*16*/] };
												Local_20.f_4 = { Global_19B04.f_4F9D[iLocal_21 /*16*/].f_4 };
												Local_20.f_8 = Global_19B04.f_4F9D[iLocal_21 /*16*/].f_8;
												Local_20.f_A = Global_19B04.f_4F9D[iLocal_21 /*16*/].f_A;
												Local_20.f_9 = Global_19B04.f_4F9D[iLocal_21 /*16*/].f_9;
												Local_20.f_B = Global_19B04.f_4F9D[iLocal_21 /*16*/].f_B;
												Local_20.f_C = Global_19B04.f_4F9D[iLocal_21 /*16*/].f_C;
												Local_20.f_D = Global_19B04.f_4F9D[iLocal_21 /*16*/].f_D;
												Local_20.f_E = Global_19B04.f_4F9D[iLocal_21 /*16*/].f_E;
												Local_20.f_F = Global_19B04.f_4F9D[iLocal_21 /*16*/].f_F;
												Local_20.f_10 = 0;
												Global_195B7 = { Global_19B04.f_4F9D[iLocal_21 /*16*/] };
												Global_195B5 = unk_0x105601648511CC64();
												iVar0 = iLocal_21;
												while (iVar0 <= (Global_19B04.f_4F9D.f_91 - 2))
												{
													func_8(iVar0, iVar0 + 1);
													iVar0++;
												}
												func_7((Global_19B04.f_4F9D.f_91 - 1));
												Global_19B04.f_4F9D.f_91 = (Global_19B04.f_4F9D.f_91 - 1);
												func_6();
												Global_195B4 = 1;
											}
										}
									}
								}
							}
						}
					}
				}
			}
			else if (!func_4())
			{
				if (unk_0x3362CDE8460ED38B(&(Local_20.f_4), ""))
				{
					if (func_3(&Local_20))
					{
						unk_0x7456702622C62EA0(0);
					}
				}
				else if (func_2(&Local_20, &(Local_20.f_4)))
				{
					unk_0x7456702622C62EA0(0);
				}
				if ((unk_0x105601648511CC64() - Global_195B5) > 4000 || Local_20.f_10)
				{
					if (Local_20.f_E != 0)
					{
						func_9(Local_20.f_E, 0);
					}
					Global_195B6 = unk_0x105601648511CC64() + 250;
				}
				else
				{
					if (Local_20.f_A != -1)
					{
						iVar1 = 20000;
					}
					else
					{
						iVar1 = -1;
					}
					func_1(&Local_20, &(Local_20.f_4), Local_20.f_C, 1000, iVar1, Local_20.f_9, Local_20.f_B, Local_20.f_D, Local_20.f_E, Local_20.f_F);
				}
				StringCopy(&Local_20, "", 16);
				StringCopy(&(Local_20.f_4), "", 16);
				Local_20.f_8 = 0;
				Local_20.f_9 = 0;
				Local_20.f_A = -1;
				Local_20.f_B = 0;
				Local_20.f_C = 0;
				Local_20.f_D = 0;
				Local_20.f_E = 0;
				Local_20.f_F = 0;
				Local_20.f_10 = 0;
				Global_195B5 = 0;
				Global_195B4 = 0;
			}
			if (!unk_0x3362CDE8460ED38B(&(Global_19B04.f_4F9D[iLocal_21 /*16*/]), &Local_20) && !unk_0x3362CDE8460ED38B(&(Global_19B04.f_4F9D[iLocal_21 /*16*/]), ""))
			{
				if (Global_19B04.f_4F9D[iLocal_21 /*16*/].f_A != -1)
				{
					if (unk_0x105601648511CC64() > Global_19B04.f_4F9D[iLocal_21 /*16*/].f_A)
					{
						iVar2 = iLocal_21;
						while (iVar2 <= (Global_19B04.f_4F9D.f_91 - 2))
						{
							func_8(iVar2, iVar2 + 1);
							iVar2++;
						}
						func_7((Global_19B04.f_4F9D.f_91 - 1));
						Global_19B04.f_4F9D.f_91 = (Global_19B04.f_4F9D.f_91 - 1);
						func_6();
					}
				}
			}
			iLocal_21++;
			if (iLocal_21 >= Global_19B04.f_4F9D.f_91)
			{
				iLocal_21 = 0;
			}
		}
		else if ((Global_8C41 != 6 && Global_8C41 != 15) && !Global_15C13)
		{
			func_22();
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x475
{
	int iVar0;
	
	if (unk_0x3362CDE8460ED38B(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_19B04.f_4F9D.f_91)
	{
		if (unk_0x3362CDE8460ED38B(&(Global_19B04.f_4F9D[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_19B04.f_4F9D.f_91 < 9)
	{
		StringCopy(&(Global_19B04.f_4F9D[Global_19B04.f_4F9D.f_91 /*16*/]), sParam0, 16);
		StringCopy(&(Global_19B04.f_4F9D[Global_19B04.f_4F9D.f_91 /*16*/].f_4), sParam1, 16);
		Global_19B04.f_4F9D[Global_19B04.f_4F9D.f_91 /*16*/].f_8 = (unk_0x105601648511CC64() + iParam3);
		Global_19B04.f_4F9D[Global_19B04.f_4F9D.f_91 /*16*/].f_9 = iParam5;
		Global_19B04.f_4F9D[Global_19B04.f_4F9D.f_91 /*16*/].f_B = iParam6;
		Global_19B04.f_4F9D[Global_19B04.f_4F9D.f_91 /*16*/].f_C = uParam2;
		Global_19B04.f_4F9D[Global_19B04.f_4F9D.f_91 /*16*/].f_D = iParam7;
		Global_19B04.f_4F9D[Global_19B04.f_4F9D.f_91 /*16*/].f_E = iParam8;
		Global_19B04.f_4F9D[Global_19B04.f_4F9D.f_91 /*16*/].f_F = uParam9;
		if (iParam4 != -1)
		{
			Global_19B04.f_4F9D[Global_19B04.f_4F9D.f_91 /*16*/].f_A = ((unk_0x105601648511CC64() + iParam3) + iParam4);
		}
		else
		{
			Global_19B04.f_4F9D[Global_19B04.f_4F9D.f_91 /*16*/].f_A = -1;
		}
		Global_19B04.f_4F9D.f_91++;
		func_6();
	}
}

int func_2(char* sParam0, char* sParam1)//Position - 0x647
{
	unk_0xF07D20149ECBC61E(sParam0);
	unk_0xC9C304D0AABE1335(sParam1);
	return unk_0xA66DBDA0A072514A(0);
}

int func_3(char* sParam0)//Position - 0x660
{
	unk_0xF07D20149ECBC61E(sParam0);
	return unk_0xA66DBDA0A072514A(0);
}

int func_4()//Position - 0x673
{
	if (unk_0x866EAD7E27D8D0F8())
	{
		return 0;
	}
	if (func_5())
	{
		return 0;
	}
	if (Local_20.f_9 != -1 && (unk_0x105601648511CC64() - Global_195B5) > Local_20.f_9)
	{
		return 0;
	}
	if (Global_195B3)
	{
		return 0;
	}
	if (unk_0x866EAD7E27D8D0F8())
	{
		return 0;
	}
	if (unk_0x3362CDE8460ED38B(&(Local_20.f_4), ""))
	{
		if (!func_3(&Local_20))
		{
			Local_20.f_10 = 1;
			return 0;
		}
	}
	else if (!func_2(&Local_20, &(Local_20.f_4)))
	{
		Local_20.f_10 = 1;
		return 0;
	}
	return 1;
}

int func_5()//Position - 0x702
{
	if (unk_0xB731B8C5BCE89836(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_6()//Position - 0x71C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_19B04.f_4F9D.f_92[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_19B04.f_4F9D.f_91)
	{
		if (unk_0xFA30DFD0084E92FE(Global_19B04.f_4F9D[iVar0 /*16*/].f_B, 0))
		{
			if (Global_19B04.f_4F9D[iVar0 /*16*/].f_C > Global_19B04.f_4F9D.f_92[0])
			{
				Global_19B04.f_4F9D.f_92[0] = Global_19B04.f_4F9D[iVar0 /*16*/].f_C;
			}
		}
		if (unk_0xFA30DFD0084E92FE(Global_19B04.f_4F9D[iVar0 /*16*/].f_B, 1))
		{
			if (Global_19B04.f_4F9D[iVar0 /*16*/].f_C > Global_19B04.f_4F9D.f_92[1])
			{
				Global_19B04.f_4F9D.f_92[1] = Global_19B04.f_4F9D[iVar0 /*16*/].f_C;
			}
		}
		if (unk_0xFA30DFD0084E92FE(Global_19B04.f_4F9D[iVar0 /*16*/].f_B, 2))
		{
			if (Global_19B04.f_4F9D[iVar0 /*16*/].f_C > Global_19B04.f_4F9D.f_92[2])
			{
				Global_19B04.f_4F9D.f_92[2] = Global_19B04.f_4F9D[iVar0 /*16*/].f_C;
			}
		}
		iVar0++;
	}
}

void func_7(int iParam0)//Position - 0x83C
{
	StringCopy(&(Global_19B04.f_4F9D[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_19B04.f_4F9D[iParam0 /*16*/].f_4), "", 16);
	Global_19B04.f_4F9D[iParam0 /*16*/].f_8 = 0;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_9 = 0;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_B = 0;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_A = -1;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_C = 0;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_D = 0;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_E = 0;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_F = 0;
}

void func_8(int iParam0, int iParam1)//Position - 0x8D4
{
	Global_19B04.f_4F9D[iParam0 /*16*/] = { Global_19B04.f_4F9D[iParam1 /*16*/] };
	Global_19B04.f_4F9D[iParam0 /*16*/].f_4 = { Global_19B04.f_4F9D[iParam1 /*16*/].f_4 };
	Global_19B04.f_4F9D[iParam0 /*16*/].f_8 = Global_19B04.f_4F9D[iParam1 /*16*/].f_8;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_A = Global_19B04.f_4F9D[iParam1 /*16*/].f_A;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_9 = Global_19B04.f_4F9D[iParam1 /*16*/].f_9;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_B = Global_19B04.f_4F9D[iParam1 /*16*/].f_B;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_C = Global_19B04.f_4F9D[iParam1 /*16*/].f_C;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_D = Global_19B04.f_4F9D[iParam1 /*16*/].f_D;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_E = Global_19B04.f_4F9D[iParam1 /*16*/].f_E;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_F = Global_19B04.f_4F9D[iParam1 /*16*/].f_F;
}

void func_9(int iParam0, int iParam1)//Position - 0x9E4
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_19B04.f_2188[iParam0] = 1;
	Global_19B04.f_2188.f_EC[iParam0] = (unk_0x105601648511CC64() + iParam1);
}

void func_10(char* sParam0, char* sParam1)//Position - 0xA21
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0xC9C304D0AABE1335(sParam1);
	unk_0x72F8FA06CC9EC899(0, 1, true, -1);
}

void func_11(char* sParam0)//Position - 0xA3D
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 1, true, -1);
}

int func_12()//Position - 0xA53
{
	func_13();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_13()//Position - 0xA6C
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_16(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_15(unk_0xBC25C936A095B5BA());
			if (func_17(iVar0) && (!func_14(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_17(Global_19B04.f_932.f_21B.f_10CD))
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

bool func_14(int iParam0)//Position - 0xB69
{
	return Global_8C41 == iParam0;
}

int func_15(int iParam0)//Position - 0xB77
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_16(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_16(int iParam0)//Position - 0xBB4
{
	if (func_17(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_17(int iParam0)//Position - 0xBDE
{
	return iParam0 < 3;
}

int func_18()//Position - 0xBEA
{
	func_13();
	return Global_19B04.f_932.f_21B.f_10CD;
}

int func_19(var uParam0)//Position - 0xC03
{
	if (unk_0xF16DAFF595E80F7C())
	{
		return 0;
	}
	if (unk_0x866EAD7E27D8D0F8())
	{
		return 0;
	}
	if (!unk_0x726D9204B160D23E())
	{
		return 0;
	}
	if (unk_0x18158A50125911B6())
	{
		return 0;
	}
	if (func_21())
	{
		return 0;
	}
	if (func_5())
	{
		return 0;
	}
	if (uParam0->f_C < 3)
	{
		if (func_20())
		{
			return 0;
		}
		if (Global_11540)
		{
			return 0;
		}
		if (Global_15FA4)
		{
			return 0;
		}
		if (!unk_0xFA30DFD0084E92FE(uParam0->f_F, 1))
		{
			if (Global_15FAC)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_20()//Position - 0xC90
{
	if (Global_11646)
	{
		return 1;
	}
	else if (Global_DA99 && !Global_DA9F)
	{
		return 1;
	}
	return 0;
}

int func_21()//Position - 0xCBA
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		return Global_161D2.f_2C == 1;
	}
	return 0;
}

void func_22()//Position - 0xCD6
{
	if (Global_195B4)
	{
		if (unk_0x3362CDE8460ED38B(&(Local_20.f_4), ""))
		{
			if (func_3(&Local_20))
			{
				unk_0x7456702622C62EA0(1);
			}
		}
		else if (func_2(&Local_20, &(Local_20.f_4)))
		{
			unk_0x7456702622C62EA0(1);
		}
	}
	Global_195B5 = 0;
	Global_195B4 = 0;
	unk_0x95E4B6F3ED223F5A();
}

