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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	bool bLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
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
	sLocal_18 = "NULL";
	iLocal_21 = 3;
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_53 = 3;
	unk_0xC1A27D367CCA8C15();
	if (unk_0xE8A79675302ED812(32))
	{
		unk_0x95E4B6F3ED223F5A();
	}
	while (true)
	{
		func_101();
		switch (iLocal_54)
		{
			case 0:
				func_96();
				break;
			
			case 1:
				func_87();
				func_2();
				Global_16110 = 0;
				break;
			
			case 2:
				func_1();
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0xCC
{
	iLocal_54 = 0;
}

void func_2()//Position - 0xD7
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	
	if (iLocal_60)
	{
		iLocal_60 = 0;
	}
	else
	{
		iLocal_55++;
	}
	bLocal_59 = false;
	if (unk_0x7AF0088ABFA713B6())
	{
		iVar0 = 3;
	}
	else
	{
		iVar0 = func_83();
	}
	if (iVar0 != iLocal_58)
	{
		iLocal_58 = iVar0;
		bLocal_59 = true;
		iLocal_66 = 0;
		iLocal_67 = 0;
		iLocal_74 = 0;
		iLocal_80 = 0;
	}
	if (iLocal_58 == 145)
	{
		return;
	}
	bVar1 = false;
	if ((iLocal_55 == 6 && func_82(64)) || (iLocal_55 == 5 && unk_0xB731B8C5BCE89836(joaat("pilot_school")) > 0))
	{
		bVar1 = true;
		iLocal_60 = 1;
	}
	func_76();
	if (Global_1610E || (Global_1610F && !func_73(0)))
	{
		if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			iVar2 = 0;
			while (iVar2 < 8)
			{
				func_72(iLocal_58, iVar2);
				iVar2++;
			}
			Global_1610E = 0;
		}
	}
	if (!bVar1)
	{
		if (((((((((unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) || (!unk_0x7AF0088ABFA713B6() && !func_71(iLocal_58))) || unk_0x7930B3E9C919E90F()) || func_70()) || unk_0x866EAD7E27D8D0F8()) || unk_0x17FAADF9916EF741()) || !unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) || Global_11540) || Global_16110) || iLocal_61)
		{
			iLocal_82 = 1;
			iLocal_83 = unk_0x105601648511CC64();
			if (unk_0x7AF0088ABFA713B6())
			{
				iLocal_84 = unk_0xED678C85A82F0AB9();
			}
			return;
		}
		if (iLocal_82)
		{
			if ((!unk_0x7AF0088ABFA713B6() && (unk_0x105601648511CC64() - iLocal_83) > 3000) || (unk_0x7AF0088ABFA713B6() && unk_0x0FF2ECF37CE834C6(unk_0xED678C85A82F0AB9(), unk_0x863D0D1A37055D36(iLocal_84, 3000))))
			{
				iLocal_82 = 0;
			}
			else
			{
				return;
			}
		}
	}
	if (((!unk_0x7AF0088ABFA713B6() && (unk_0x105601648511CC64() - iLocal_56) > 2000) || (unk_0x7AF0088ABFA713B6() && unk_0x0FF2ECF37CE834C6(unk_0xED678C85A82F0AB9(), unk_0x863D0D1A37055D36(iLocal_57, 2000)))) || bLocal_59)
	{
		if (iLocal_55 >= 8)
		{
			iLocal_55 = 0;
			iLocal_56 = unk_0x105601648511CC64();
			if (unk_0x7AF0088ABFA713B6())
			{
				iLocal_57 = unk_0xED678C85A82F0AB9();
			}
		}
		iVar11 = 1;
		if (bLocal_59)
		{
			iVar11 = 8;
		}
		iVar12 = 0;
		while (iVar12 < iVar11)
		{
			bVar13 = true;
			if (bLocal_59)
			{
				iVar8 = iVar12;
			}
			else
			{
				iVar8 = iLocal_55;
			}
			func_69(iLocal_58, iVar8, &iVar6, &iVar7);
			if (unk_0x7AF0088ABFA713B6())
			{
				iVar3 = func_68(iVar7, -1, 0);
			}
			else if (iVar8 == 0)
			{
				iVar3 = Global_19B04.f_932.f_21B.f_93F[iLocal_58];
			}
			else
			{
				unk_0x6CB99B97664C3727(iVar6, &iVar3, -1);
			}
			iVar5 = iVar3;
			iVar3 = func_67(iVar3, 0, 100);
			if (func_54(iLocal_58, iVar8, iVar3, &iVar4))
			{
				if (unk_0x7AF0088ABFA713B6())
				{
					func_53(iVar7, iVar4, -1, 1, 0);
				}
				else if (iVar8 == 0)
				{
					if (Global_19B04.f_932.f_21B.f_93F[iLocal_58] == 0)
					{
						bVar13 = false;
					}
					Global_19B04.f_932.f_21B.f_93F[iLocal_58] = iVar4;
				}
				else
				{
					unk_0x3A57956BCE003880(iVar6, iVar4, 1);
				}
				if (iVar4 > func_51(iLocal_58, iVar8, -1))
				{
					if (unk_0x7AF0088ABFA713B6())
					{
					}
					else if ((!Global_19B04.f_2360 && !func_50(0)) || !unk_0xFA30DFD0084E92FE(Global_19B04.f_2360.f_2[27 /*3*/], 2))
					{
						bVar13 = false;
					}
					iVar14 = iVar4;
					iVar15 = (iVar14 - (iVar14 % func_49(iLocal_58, iVar8)));
					if ((iVar14 % func_49(iLocal_58, iVar8)) >= 0)
					{
						iVar15 = (iVar15 + func_49(iLocal_58, iVar8));
					}
					if (iVar14 >= iVar15)
					{
						iVar14 = iVar15;
					}
					else
					{
						iVar14 = (iVar15 - func_49(iLocal_58, iVar8));
					}
					if (iVar4 > iVar14)
					{
						bVar13 = false;
					}
					if (func_43())
					{
						bVar13 = false;
					}
					if (bVar13)
					{
						if (!bLocal_59)
						{
							if (unk_0x7AF0088ABFA713B6())
							{
								if (func_42(117, -1) == 0)
								{
									if (!unk_0xF16DAFF595E80F7C() && func_9())
									{
										func_8("STAT_HELP2", -1);
										func_4(117, 1, -1, 1);
									}
								}
							}
							iLocal_61 = 1;
							iLocal_64 = (iVar4 - iVar3);
							iLocal_64 = (iLocal_64 + (iVar3 % func_49(iLocal_58, iVar8)));
							iLocal_65 = iVar4;
							iLocal_62 = iLocal_58;
							iLocal_63 = iVar8;
						}
					}
					if (iVar4 >= 100)
					{
						if (func_3(iLocal_58, iVar8, &iVar9))
						{
							if (iLocal_58 == 0)
							{
								unk_0x6CB99B97664C3727(joaat("sp0_total_playing_time"), &iVar10, -1);
								unk_0x3A57956BCE003880(iVar9, iVar10, 1);
							}
							else if (iLocal_58 == 1)
							{
								unk_0x6CB99B97664C3727(joaat("sp1_total_playing_time"), &iVar10, -1);
								unk_0x3A57956BCE003880(iVar9, iVar10, 1);
							}
							else if (iLocal_58 == 2)
							{
								unk_0x6CB99B97664C3727(joaat("sp2_total_playing_time"), &iVar10, -1);
								unk_0x3A57956BCE003880(iVar9, iVar10, 1);
							}
							else if (iLocal_58 == 3)
							{
							}
						}
					}
				}
				func_72(iLocal_58, iVar8);
			}
			else if (iVar4 < iVar5)
			{
				bVar16 = true;
				if (unk_0x7AF0088ABFA713B6())
				{
					func_53(iVar7, iVar4, -1, 1, 0);
				}
				else if (iVar8 == 0)
				{
					Global_19B04.f_932.f_21B.f_93F[iLocal_58] = iVar4;
					bVar16 = false;
				}
				else
				{
					unk_0x3A57956BCE003880(iVar6, iVar4, 1);
				}
				if (bVar16)
				{
					func_72(iLocal_58, iVar8);
				}
			}
			iVar12++;
		}
	}
	else
	{
		iLocal_60 = 1;
	}
}

bool func_3(int iParam0, int iParam1, var uParam2)//Position - 0x5B8
{
	*uParam2 = joaat("last_playing_time");
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp0_special_ability_maxed");
					break;
				
				case 1:
					*uParam2 = joaat("sp0_stamina_maxed");
					break;
				
				case 3:
					*uParam2 = joaat("sp0_lung_capacity_maxed");
					break;
				
				case 2:
					*uParam2 = joaat("sp0_strength_maxed");
					break;
				
				case 4:
					*uParam2 = joaat("sp0_wheelie_ability_maxed");
					break;
				
				case 5:
					*uParam2 = joaat("sp0_flying_ability_maxed");
					break;
				
				case 6:
					*uParam2 = joaat("sp0_shooting_ability_maxed");
					break;
				
				case 7:
					*uParam2 = joaat("sp0_stealth_ability_maxed");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp1_special_ability_maxed");
					break;
				
				case 1:
					*uParam2 = joaat("sp1_stamina_maxed");
					break;
				
				case 3:
					*uParam2 = joaat("sp1_lung_capacity_maxed");
					break;
				
				case 2:
					*uParam2 = joaat("sp1_strength_maxed");
					break;
				
				case 4:
					*uParam2 = joaat("sp1_wheelie_ability_maxed");
					break;
				
				case 5:
					*uParam2 = joaat("sp1_flying_ability_maxed");
					break;
				
				case 6:
					*uParam2 = joaat("sp1_shooting_ability_maxed");
					break;
				
				case 7:
					*uParam2 = joaat("sp1_stealth_ability_maxed");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp2_special_ability_maxed");
					break;
				
				case 1:
					*uParam2 = joaat("sp2_stamina_maxed");
					break;
				
				case 3:
					*uParam2 = joaat("sp2_lung_capacity_maxed");
					break;
				
				case 2:
					*uParam2 = joaat("sp2_strength_maxed");
					break;
				
				case 4:
					*uParam2 = joaat("sp2_wheelie_ability_maxed");
					break;
				
				case 5:
					*uParam2 = joaat("sp2_flying_ability_maxed");
					break;
				
				case 6:
					*uParam2 = joaat("sp2_shooting_ability_maxed");
					break;
				
				case 7:
					*uParam2 = joaat("sp2_stealth_ability_maxed");
					break;
			}
			break;
	}
	return *uParam2 != joaat("last_playing_time");
}

void func_4(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x7A0
{
	int iVar0;
	
	if (func_7())
	{
		iVar0 = Global_2705A2[iParam0 /*3*/][func_5(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x7DB90DFB4AE71E86(iVar0, bParam1, iParam3);
		}
	}
}

int func_5(var uParam0)//Position - 0x7D2
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_6();
		if (iVar1 > -1)
		{
			Global_269AA6 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_269AA6 = 1;
		}
	}
	return iVar0;
}

int func_6()//Position - 0x806
{
	return Global_1407E0;
}

int func_7()//Position - 0x812
{
	return 1;
	return 0;
}

void func_8(char* sParam0, int iParam1)//Position - 0x81F
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, true, iParam1);
}

int func_9()//Position - 0x836
{
	if ((unk_0x9149B2E713BDD677() && unk_0x7382A6B79BD5F585()) && !func_41(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	if (Global_193A12 == 1)
	{
		return 0;
	}
	if (Global_193981 == 1)
	{
		return 0;
	}
	if (unk_0xA18AD9D4D2D7041A())
	{
		return 0;
	}
	if (Global_1805C6 == 1)
	{
		return 0;
	}
	if (unk_0x87DD8C3CB85096D5())
	{
		return 0;
	}
	if (Global_EF3AF)
	{
		return 0;
	}
	if (Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_28A == 1)
	{
		return 0;
	}
	if (func_40())
	{
		return 0;
	}
	if (func_39())
	{
		return 0;
	}
	if (func_38())
	{
		if (!func_39())
		{
			if (!func_37(3, -1))
			{
				if (func_35(&Global_258969, 300000, 0) == 1)
				{
					func_34(&Global_258967);
					func_32(3, -1);
				}
				else if (func_35(&Global_258967, 7000, 0) == 0)
				{
					return 0;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	if (func_31())
	{
		return 0;
	}
	if (func_30())
	{
		return 0;
	}
	if (func_28())
	{
		return 0;
	}
	if (func_27())
	{
		return 0;
	}
	if (func_26())
	{
		return 0;
	}
	if (func_25())
	{
		return 0;
	}
	if (unk_0xD92FE7FDA11C7334())
	{
		return 0;
	}
	if (unk_0xE186ACC7BE9B244E())
	{
		return 0;
	}
	if (unk_0xADF4D6B0407B3CC1())
	{
		if (func_24(unk_0xBC25C936A095B5BA()) == joaat("weapon_sniperrifle") || func_24(unk_0xBC25C936A095B5BA()) == joaat("weapon_heavysniper"))
		{
			return 0;
		}
	}
	if (unk_0x17FAADF9916EF741())
	{
		return 0;
	}
	if (func_23(8, -1))
	{
		return 0;
	}
	if (func_22(12, -1))
	{
		return 0;
	}
	if (unk_0xB6AACEDA0127F076(19))
	{
		return 0;
	}
	if (func_21())
	{
		return 0;
	}
	if (func_20())
	{
		return 0;
	}
	if (Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_23)
	{
		return 0;
	}
	if (Global_18051B)
	{
		return 0;
	}
	if (Global_18051F)
	{
		return 0;
	}
	if (Global_180521)
	{
		return 0;
	}
	if (Global_252E21.f_F27.f_27)
	{
		return 0;
	}
	if (func_19(0))
	{
		return 0;
	}
	if (func_18())
	{
		return 0;
	}
	if (Global_267214.f_F71)
	{
		return 0;
	}
	if (Global_252E21.f_EA1)
	{
		return 0;
	}
	if (!func_17(unk_0xB5CEFD608600A09F(), 1, 0))
	{
		return 0;
	}
	if (func_16(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	if (Global_252E21.f_F27.f_27 == 1)
	{
		return 0;
	}
	if (Global_255D53.f_B1B.f_19 == 1)
	{
		return 0;
	}
	if (func_15(1))
	{
		return 0;
	}
	if (func_13())
	{
		return 0;
	}
	if (unk_0xB6AACEDA0127F076(16))
	{
		return 0;
	}
	if (func_12())
	{
		return 0;
	}
	if (func_11())
	{
		return 0;
	}
	if (unk_0x5107E30005FCFEA8())
	{
		if (func_10("FHU_HELP3"))
		{
			return 0;
		}
	}
	if (Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_278)
	{
		return 0;
	}
	return 1;
}

int func_10(char* sParam0)//Position - 0xB1C
{
	unk_0xF07D20149ECBC61E(sParam0);
	return unk_0xA66DBDA0A072514A(0);
}

bool func_11()//Position - 0xB2F
{
	return Global_252E21.f_760.f_2B0 != 0;
}

bool func_12()//Position - 0xB43
{
	return Global_252E21.f_BD3.f_242;
}

bool func_13()//Position - 0xB55
{
	return func_14();
}

bool func_14()//Position - 0xB61
{
	return Global_14B309.f_28 == 3;
}

bool func_15(bool bParam0)//Position - 0xB71
{
	if (bParam0)
	{
		return (Global_4336.f_4 && Global_4336.f_68 == 4);
	}
	return Global_4336.f_4;
}

bool func_16(int iParam0)//Position - 0xB9A
{
	return unk_0xFA30DFD0084E92FE(Global_18C3AE[iParam0 /*35*/].f_D, 0);
}

int func_17(int iParam0, bool bParam1, bool bParam2)//Position - 0xBB1
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

int func_18()//Position - 0xBFB
{
	if (unk_0xB731B8C5BCE89836(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_19(int iParam0)//Position - 0xC18
{
	if (iParam0 == 1)
	{
		if (Global_389D.f_1 > 3)
		{
			if (unk_0xFA30DFD0084E92FE(Global_93B, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xB731B8C5BCE89836(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_389D.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_20()//Position - 0xC72
{
	return Global_14CC81.f_70;
}

bool func_21()//Position - 0xC80
{
	return Global_252E21.f_A8F[0 /*80*/].f_1 != 0;
}

int func_22(int iParam0, int iParam1)//Position - 0xC96
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				if (Global_14CC81.f_89[iParam1])
				{
					return 1;
				}
				if (Global_14CC81.f_AA[iParam1])
				{
					return 1;
				}
			}
			break;
		
		default:
			if (unk_0xFA30DFD0084E92FE(Global_14CC81.f_416, iParam0))
			{
				return 1;
			}
			if (unk_0xFA30DFD0084E92FE(Global_14CC81.f_417, iParam0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_23(int iParam0, int iParam1)//Position - 0xD02
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_14CC81.f_CB[iParam1];
			}
			break;
	}
	return unk_0xFA30DFD0084E92FE(Global_14CC81.f_418, iParam0);
}

int func_24(int iParam0)//Position - 0xD3D
{
	var uVar0;
	
	unk_0x9CDD10270A1ACF6F(iParam0, &uVar0, 1);
	return uVar0;
}

bool func_25()//Position - 0xD51
{
	return Global_255A46.f_244;
}

bool func_26()//Position - 0xD60
{
	return unk_0xFA30DFD0084E92FE(Global_ED138.f_8, 13);
}

bool func_27()//Position - 0xD74
{
	return Global_255A46.f_243;
}

int func_28()//Position - 0xD83
{
	if (func_29() == 1 || func_29() == 4)
	{
		return 1;
	}
	return 0;
}

int func_29()//Position - 0xDA5
{
	return Global_1406D2.f_12;
}

int func_30()//Position - 0xDB3
{
	if (func_29() == 3 || func_29() == 2)
	{
		return 1;
	}
	return 0;
}

int func_31()//Position - 0xDD5
{
	if (unk_0xB731B8C5BCE89836(joaat("maintransition")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_32(int iParam0, int iParam1)//Position - 0xDEF
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_6();
	}
	Global_14F5C3 = 0;
	if (unk_0x7A4B76D06AAF8132() == 0)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			unk_0xBEFBE1B64B17C8AF(0, iParam1);
			iVar1 = func_33(iParam1);
			iVar0 = unk_0x2DC92D46FC48E795(iVar1);
			break;
		
		default:
			iVar1 = func_33(iParam1);
			iVar0 = unk_0x2DC92D46FC48E795(iVar1);
			if (!unk_0xFA30DFD0084E92FE(iVar0, iParam0))
			{
				unk_0xF0059F27F7BB6680(&iVar0, iParam0);
				unk_0xBEFBE1B64B17C8AF(iVar0, iParam1);
			}
			break;
	}
	switch (iParam0)
	{
		case 0:
			func_4(120, 0, iParam1, 1);
			func_4(124, 0, iParam1, 1);
			func_4(115, 0, iParam1, 1);
			func_4(119, 0, iParam1, 1);
			func_4(121, 0, iParam1, 1);
			func_4(122, 0, iParam1, 1);
			func_4(125, 0, iParam1, 1);
			func_53(1303, 0, iParam1, 1, 0);
			func_53(7229, 0, iParam1, 1, 0);
			break;
	}
}

int func_33(int iParam0)//Position - 0xEDA
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_6();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 914;
			break;
		
		case 1:
			iVar0 = 915;
			break;
		
		case 2:
			iVar0 = 916;
			break;
		
		case 3:
			iVar0 = 917;
			break;
		
		case 4:
			iVar0 = 918;
			break;
	}
	return iVar0;
}

void func_34(var uParam0)//Position - 0xF3D
{
	uParam0->f_1 = 0;
}

int func_35(var uParam0, int iParam1, bool bParam2)//Position - 0xF4A
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_36(uParam0, bParam2, 0);
	if (unk_0x7AF0088ABFA713B6() && !bParam2)
	{
		if (unk_0xC40EDFF7541407A8(unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), *uParam0)) >= iParam1)
		{
			func_34(uParam0);
			return 1;
		}
	}
	else if (unk_0xC40EDFF7541407A8(unk_0xCCA9497DA4595710(unk_0x105601648511CC64(), *uParam0)) >= iParam1)
	{
		func_34(uParam0);
		return 1;
	}
	return 0;
}

void func_36(var uParam0, bool bParam1, bool bParam2)//Position - 0xFB4
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x7AF0088ABFA713B6() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xED678C85A82F0AB9();
			}
			else
			{
				*uParam0 = unk_0x1C44CABA911F93F7();
			}
		}
		else
		{
			*uParam0 = unk_0x105601648511CC64();
		}
		uParam0->f_1 = 1;
	}
}

bool func_37(int iParam0, int iParam1)//Position - 0xFF9
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_6();
	}
	iVar0 = func_33(iParam1);
	iVar1 = unk_0x2DC92D46FC48E795(iVar0);
	return unk_0xFA30DFD0084E92FE(iVar1, iParam0);
}

int func_38()//Position - 0x1025
{
	int iVar0;
	
	if (unk_0x7E3A4CFA5545546C())
	{
		if (unk_0x6EFCE916927099A8())
		{
			if (unk_0x0D618527B2B8660A())
			{
				unk_0x6CB99B97664C3727(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				unk_0xF0059F27F7BB6680(&iVar0, 2);
				unk_0xF0059F27F7BB6680(&iVar0, 4);
				unk_0xF0059F27F7BB6680(&iVar0, 6);
				unk_0xF0059F27F7BB6680(&Global_19, 2);
				unk_0xF0059F27F7BB6680(&Global_19, 4);
				unk_0xF0059F27F7BB6680(&Global_19, 6);
				unk_0x3A57956BCE003880(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (unk_0x7A4B76D06AAF8132())
				{
					iVar0 = unk_0x2DC92D46FC48E795(866);
					unk_0xF0059F27F7BB6680(&iVar0, 0);
					unk_0x973C4C95367920C1(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_231F0 == 2)
	{
		return 1;
	}
	else if (Global_231F0 == 3)
	{
		return 0;
	}
	if (unk_0x7A4B76D06AAF8132())
	{
		if (unk_0xFA30DFD0084E92FE(unk_0x2DC92D46FC48E795(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_39()//Position - 0x10E0
{
	return Global_140856;
}

bool func_40()//Position - 0x10EC
{
	return Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_C4 != 0;
}

bool func_41(int iParam0)//Position - 0x1103
{
	return unk_0xFA30DFD0084E92FE(Global_24FB5C[iParam0 /*406*/].f_131.f_15, 13);
}

int func_42(int iParam0, int iParam1)//Position - 0x111F
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2705A2[iParam0 /*3*/][func_5(iParam1)];
	if (unk_0x9CADE88F210A0BAE(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_43()//Position - 0x114B
{
	if (!func_47(1))
	{
		return 0;
	}
	if (func_44())
	{
		return 0;
	}
	return Global_19693B;
}

bool func_44()//Position - 0x116F
{
	return func_45(unk_0xB5CEFD608600A09F());
}

int func_45(int iParam0)//Position - 0x117F
{
	if (iParam0 != func_46())
	{
		if (Global_18C80F[iParam0 /*558*/].f_B != func_46())
		{
			return Global_18C80F[iParam0 /*558*/].f_B == iParam0;
		}
	}
	return 0;
}

int func_46()//Position - 0x11B4
{
	return -1;
}

bool func_47(bool bParam0)//Position - 0x11BD
{
	return func_48(unk_0xB5CEFD608600A09F(), bParam0);
}

bool func_48(int iParam0, bool bParam1)//Position - 0x11CF
{
	if (!bParam1)
	{
		if (func_45(iParam0))
		{
			return 0;
		}
	}
	return Global_18C80F[iParam0 /*558*/].f_B != func_46();
}

int func_49(int iParam0, int iParam1)//Position - 0x11FA
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 20;
					break;
				
				case 1:
					return 20;
					break;
				
				case 3:
					return 20;
					break;
				
				case 2:
					return 20;
					break;
				
				case 4:
					return 20;
					break;
				
				case 5:
					return 20;
					break;
				
				case 6:
					return 20;
					break;
				
				case 7:
					return 20;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 20;
					break;
				
				case 1:
					return 20;
					break;
				
				case 3:
					return 20;
					break;
				
				case 2:
					return 20;
					break;
				
				case 4:
					return 20;
					break;
				
				case 5:
					return 20;
					break;
				
				case 6:
					return 20;
					break;
				
				case 7:
					return 20;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 20;
					break;
				
				case 1:
					return 20;
					break;
				
				case 3:
					return 20;
					break;
				
				case 2:
					return 20;
					break;
				
				case 4:
					return 20;
					break;
				
				case 5:
					return 20;
					break;
				
				case 6:
					return 20;
					break;
				
				case 7:
					return 20;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 20;
					break;
				
				case 1:
					return 20;
					break;
				
				case 3:
					return 20;
					break;
				
				case 2:
					return 20;
					break;
				
				case 4:
					return 20;
					break;
				
				case 5:
					return 20;
					break;
				
				case 6:
					return 20;
					break;
				
				case 7:
					return 20;
					break;
			}
			break;
	}
	return 1;
}

bool func_50(bool bParam0)//Position - 0x140A
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_1163A, 0);
}

int func_51(int iParam0, int iParam1, int iParam2)//Position - 0x1435
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		if (func_52(14))
		{
			return 100;
		}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 47;
					break;
				
				case 3:
					return 22;
					break;
				
				case 2:
					return 21;
					break;
				
				case 4:
					return 54;
					break;
				
				case 5:
					return 31;
					break;
				
				case 6:
					return 79;
					break;
				
				case 7:
					return 81;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 51;
					break;
				
				case 3:
					return 46;
					break;
				
				case 2:
					return 49;
					break;
				
				case 4:
					return 71;
					break;
				
				case 5:
					return 19;
					break;
				
				case 6:
					return 24;
					break;
				
				case 7:
					return 21;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 23;
					break;
				
				case 3:
					return 28;
					break;
				
				case 2:
					return 79;
					break;
				
				case 4:
					return 31;
					break;
				
				case 5:
					return 82;
					break;
				
				case 6:
					return 69;
					break;
				
				case 7:
					return 49;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 1:
					return func_68(1224, iParam2, 0);
					break;
				
				case 3:
					return func_68(1230, iParam2, 0);
					break;
				
				case 2:
					return func_68(1226, iParam2, 0);
					break;
				
				case 4:
					return func_68(1229, iParam2, 0);
					break;
				
				case 5:
					return func_68(1228, iParam2, 0);
					break;
				
				case 6:
					return func_68(1225, iParam2, 0);
					break;
				
				case 7:
					return func_68(1227, iParam2, 0);
					break;
			}
			break;
	}
	return 0;
}

bool func_52(int iParam0)//Position - 0x1682
{
	return Global_8C41 == iParam0;
}

void func_53(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x1690
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_5(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, iParam3);
	}
}

int func_54(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0x16C0
{
	*uParam3 = func_55(iParam0, iParam1, 0, -1);
	if (*uParam3 > iParam2)
	{
		return 1;
	}
	return 0;
}

int func_55(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x16E2
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	
	iVar2 = 0;
	switch (iParam1)
	{
		case 0:
			if (iParam0 == 0)
			{
				unk_0x6CB99B97664C3727(joaat("sp0_special_ability_unlocked"), &iVar3, -1);
				fVar0 = SYSTEM::TO_FLOAT(iVar3);
			}
			else if (iParam0 == 1)
			{
				unk_0x6CB99B97664C3727(joaat("sp1_special_ability_unlocked"), &iVar3, -1);
				fVar0 = SYSTEM::TO_FLOAT(iVar3);
			}
			else if (iParam0 == 2)
			{
				unk_0x6CB99B97664C3727(joaat("sp2_special_ability_unlocked"), &iVar3, -1);
				fVar0 = SYSTEM::TO_FLOAT(iVar3);
			}
			else if (iParam0 == 3)
			{
				fVar0 = SYSTEM::TO_FLOAT(func_68(64, iParam3, 0));
			}
			break;
		
		case 1:
			if (iParam0 == 0)
			{
				unk_0x70870CD1718D74F0(joaat("sp0_dist_running"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_19B04.f_932.f_21B.f_91F[iParam0]) / 175f);
			}
			else if (iParam0 == 1)
			{
				unk_0x70870CD1718D74F0(joaat("sp1_dist_running"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_19B04.f_932.f_21B.f_91F[iParam0]) / 175f);
			}
			else if (iParam0 == 2)
			{
				unk_0x70870CD1718D74F0(joaat("sp2_dist_running"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_19B04.f_932.f_21B.f_91F[iParam0]) / 175f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (func_66(20, iParam3) / 175f);
				func_63(&fVar0);
			}
			if (iParam0 == 0)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(func_62(joaat("sp0_time_swimming"))));
			}
			else if (iParam0 == 1)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(func_62(joaat("sp1_time_swimming"))));
			}
			else if (iParam0 == 2)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(func_62(joaat("sp2_time_swimming"))));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(func_62(func_61(50, iParam3))));
				func_63(&fVar0);
			}
			if (iParam0 == 0)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(func_62(joaat("sp0_time_driving_bicycle"))));
			}
			else if (iParam0 == 1)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(func_62(joaat("sp1_time_driving_bicycle"))));
			}
			else if (iParam0 == 2)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(func_62(joaat("sp2_time_driving_bicycle"))));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(func_62(func_61(47, iParam3))));
				func_63(&fVar0);
			}
			if (iParam0 == 3)
			{
				fVar0 = (fVar0 + ((4f * Global_40001.f_5A77) * IntToFloat(func_68(7230, -1, 0))));
			}
			if (iParam0 == 3)
			{
				fVar0 = (fVar0 * 0.25f);
			}
			break;
		
		case 3:
			if (iParam0 == 0)
			{
				fVar0 = (SYSTEM::TO_FLOAT(func_60(joaat("sp0_time_underwater"))) / 30f);
			}
			else if (iParam0 == 1)
			{
				fVar0 = (SYSTEM::TO_FLOAT(func_60(joaat("sp1_time_underwater"))) / 30f);
			}
			else if (iParam0 == 2)
			{
				fVar0 = (SYSTEM::TO_FLOAT(func_60(joaat("sp2_time_underwater"))) / 30f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (SYSTEM::TO_FLOAT(func_60(func_61(52, iParam3))) / 30f);
				func_63(&fVar0);
			}
			break;
		
		case 2:
			if (iParam0 == 0)
			{
				unk_0x6CB99B97664C3727(joaat("sp0_unarmed_hits"), &iVar3, -1);
				fVar0 = (SYSTEM::TO_FLOAT((iVar3 - Global_19B04.f_932.f_21B.f_923[iParam0])) / 20f);
			}
			else if (iParam0 == 1)
			{
				unk_0x6CB99B97664C3727(joaat("sp1_unarmed_hits"), &iVar3, -1);
				fVar0 = (SYSTEM::TO_FLOAT((iVar3 - Global_19B04.f_932.f_21B.f_923[iParam0])) / 20f);
			}
			else if (iParam0 == 2)
			{
				unk_0x6CB99B97664C3727(joaat("sp2_unarmed_hits"), &iVar3, -1);
				fVar0 = (SYSTEM::TO_FLOAT((iVar3 - Global_19B04.f_932.f_21B.f_923[iParam0])) / 20f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (SYSTEM::TO_FLOAT(func_68(1499, iParam3, 0)) / 20f);
				func_63(&fVar0);
			}
			break;
		
		case 4:
			if (iParam0 == 0)
			{
				unk_0x6CB99B97664C3727(joaat("sp0_number_near_miss"), &iVar3, -1);
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT((iVar3 - Global_19B04.f_932.f_21B.f_927[iParam0])) / 50f));
			}
			else if (iParam0 == 1)
			{
				unk_0x6CB99B97664C3727(joaat("sp1_number_near_miss"), &iVar3, -1);
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT((iVar3 - Global_19B04.f_932.f_21B.f_927[iParam0])) / 50f));
			}
			else if (iParam0 == 2)
			{
				unk_0x6CB99B97664C3727(joaat("sp2_number_near_miss"), &iVar3, -1);
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT((iVar3 - Global_19B04.f_932.f_21B.f_927[iParam0])) / 50f));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + IntToFloat((func_68(112, iParam3, 0) / 50)));
				func_63(&fVar0);
			}
			break;
		
		case 5:
			if (iParam0 == 0)
			{
				fVar0 = (SYSTEM::TO_FLOAT(func_62(joaat("sp0_time_driving_plane"))) / 10f);
			}
			else if (iParam0 == 1)
			{
				fVar0 = (SYSTEM::TO_FLOAT(func_62(joaat("sp1_time_driving_plane"))) / 10f);
			}
			else if (iParam0 == 2)
			{
				fVar0 = (SYSTEM::TO_FLOAT(func_62(joaat("sp2_time_driving_plane"))) / 10f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (SYSTEM::TO_FLOAT(func_62(func_61(43, iParam3))) / 10f);
			}
			if (iParam0 == 0)
			{
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT(func_62(joaat("sp0_time_driving_heli"))) / 10f));
			}
			else if (iParam0 == 1)
			{
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT(func_62(joaat("sp1_time_driving_heli"))) / 10f));
			}
			else if (iParam0 == 2)
			{
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT(func_62(joaat("sp2_time_driving_heli"))) / 10f));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT(func_62(func_61(45, iParam3))) / 10f));
			}
			if (iParam0 == 0)
			{
				unk_0x6CB99B97664C3727(joaat("sp0_plane_landings"), &iVar3, -1);
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(iVar3));
			}
			else if (iParam0 == 1)
			{
				unk_0x6CB99B97664C3727(joaat("sp1_plane_landings"), &iVar3, -1);
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(iVar3));
			}
			else if (iParam0 == 2)
			{
				unk_0x6CB99B97664C3727(joaat("sp2_plane_landings"), &iVar3, -1);
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(iVar3));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + IntToFloat(func_68(61, iParam3, 0)));
				func_63(&fVar0);
			}
			if ((iParam0 == 0 || iParam0 == 1) || iParam0 == 2)
			{
				iVar4 = func_59(iParam0, 0);
				if (iParam0 == 2)
				{
					if (iVar4 == 3)
					{
						fVar0 = (fVar0 + 10f);
					}
					else if (iVar4 == 2)
					{
						fVar0 = (fVar0 + 7f);
					}
					else if (iVar4 == 1)
					{
						fVar0 = (fVar0 + 5f);
					}
				}
				else if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_59(iParam0, 1);
				if (iParam0 == 2)
				{
					if (iVar4 == 3)
					{
						fVar0 = (fVar0 + 10f);
					}
					else if (iVar4 == 2)
					{
						fVar0 = (fVar0 + 7f);
					}
					else if (iVar4 == 1)
					{
						fVar0 = (fVar0 + 5f);
					}
				}
				else if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_59(iParam0, 2);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_59(iParam0, 3);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_59(iParam0, 6);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_59(iParam0, 4);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 5f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 3f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 2f);
				}
				iVar4 = func_59(iParam0, 5);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_59(iParam0, 7);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_59(iParam0, 8);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_59(iParam0, 11);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
			}
			break;
		
		case 7:
			if (iParam0 == 0)
			{
				unk_0x70870CD1718D74F0(joaat("sp0_dist_walk_st"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_19B04.f_932.f_21B.f_92B[iParam0]) / 45f);
			}
			else if (iParam0 == 1)
			{
				unk_0x70870CD1718D74F0(joaat("sp1_dist_walk_st"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_19B04.f_932.f_21B.f_92B[iParam0]) / 45f);
			}
			else if (iParam0 == 2)
			{
				unk_0x70870CD1718D74F0(joaat("sp2_dist_walk_st"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_19B04.f_932.f_21B.f_92B[iParam0]) / 45f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (func_66(19, iParam3) / 45f);
			}
			if (iParam0 == 0)
			{
				unk_0x6CB99B97664C3727(joaat("sp0_kills_stealth"), &iVar3, -1);
				fVar0 = (fVar0 + ((SYSTEM::TO_FLOAT((iVar3 - Global_19B04.f_932.f_21B.f_92F[iParam0])) / 2f) * 1.5f));
			}
			else if (iParam0 == 1)
			{
				unk_0x6CB99B97664C3727(joaat("sp1_kills_stealth"), &iVar3, -1);
				fVar0 = (fVar0 + ((SYSTEM::TO_FLOAT((iVar3 - Global_19B04.f_932.f_21B.f_92F[iParam0])) / 2f) * 1.5f));
			}
			else if (iParam0 == 2)
			{
				unk_0x6CB99B97664C3727(joaat("sp2_kills_stealth"), &iVar3, -1);
				fVar0 = (fVar0 + ((SYSTEM::TO_FLOAT((iVar3 - Global_19B04.f_932.f_21B.f_92F[iParam0])) / 2f) * 1.5f));
			}
			else if (iParam0 == 3)
			{
				iVar3 = func_68(34, iParam3, 0);
				fVar0 = (fVar0 + ((SYSTEM::TO_FLOAT(iVar3) / 2f) * 1.5f));
				func_63(&fVar0);
			}
			break;
		
		case 6:
			if (iParam0 == 0)
			{
				unk_0x6CB99B97664C3727(joaat("sp0_hits_mission"), &iVar5, -1);
				unk_0x6CB99B97664C3727(joaat("sp0_hits_peds_vehicles"), &iVar6, -1);
				iVar6 = (iVar6 - iVar5);
				fVar0 = (SYSTEM::TO_FLOAT((iVar5 - Global_19B04.f_932.f_21B.f_933[iParam0])) / 40f);
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT((iVar6 - Global_19B04.f_932.f_21B.f_937[iParam0])) / 80f));
			}
			else if (iParam0 == 1)
			{
				unk_0x6CB99B97664C3727(joaat("sp1_hits_mission"), &iVar5, -1);
				unk_0x6CB99B97664C3727(joaat("sp1_hits_peds_vehicles"), &iVar6, -1);
				iVar6 = (iVar6 - iVar5);
				fVar0 = (SYSTEM::TO_FLOAT((iVar5 - Global_19B04.f_932.f_21B.f_933[iParam0])) / 40f);
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT((iVar6 - Global_19B04.f_932.f_21B.f_937[iParam0])) / 80f));
			}
			else if (iParam0 == 2)
			{
				unk_0x6CB99B97664C3727(joaat("sp2_hits_mission"), &iVar5, -1);
				unk_0x6CB99B97664C3727(joaat("sp2_hits_peds_vehicles"), &iVar6, -1);
				iVar6 = (iVar6 - iVar5);
				fVar0 = (SYSTEM::TO_FLOAT((iVar5 - Global_19B04.f_932.f_21B.f_933[iParam0])) / 40f);
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT((iVar6 - Global_19B04.f_932.f_21B.f_937[iParam0])) / 80f));
			}
			else if (iParam0 == 3)
			{
				iVar6 = func_68(171, iParam3, 0);
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT(iVar6) / 80f));
			}
			if ((iParam0 == 0 || iParam0 == 1) || iParam0 == 2)
			{
				iVar7 = 0;
				while (iVar7 < 22)
				{
					switch (func_58(iVar7, iParam0))
					{
						case 3:
							iVar8++;
							break;
						
						case 2:
							iVar9++;
							break;
						
						case 1:
							iVar10++;
							break;
					}
					iVar7++;
				}
				fVar0 = (fVar0 + IntToFloat(iVar8 * 3));
				fVar0 = (fVar0 + IntToFloat(iVar9 * 2));
				fVar0 = (fVar0 + IntToFloat(iVar10 * 1));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + IntToFloat(func_57(joaat("mpply_shootingrange_wins")) * 1));
				func_63(&fVar0);
			}
			break;
	}
	if (iParam1 != 0)
	{
		iVar11 = func_51(iParam0, iParam1, iParam3);
		fVar0 = (fVar0 + IntToFloat(iVar11));
		fVar0 = (fVar0 + IntToFloat(func_56(iParam0, iParam1, iParam3)));
	}
	if (bParam2)
	{
		fVar12 = (fVar0 - (fVar0 % IntToFloat(func_49(iParam0, iParam1))));
		if ((fVar0 % IntToFloat(func_49(iParam0, iParam1))) >= 0f)
		{
			fVar12 = (fVar12 + IntToFloat(func_49(iParam0, iParam1)));
		}
		if (fVar0 >= fVar12)
		{
			fVar0 = fVar12;
		}
		else
		{
			fVar0 = (fVar12 - IntToFloat(func_49(iParam0, iParam1)));
		}
	}
	iVar2 = SYSTEM::FLOOR(fVar0);
	iVar2 = func_67(iVar2, 0, 100);
	return iVar2;
}

int func_56(int iParam0, int iParam1, int iParam2)//Position - 0x23F5
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			switch (iParam1)
			{
				case 1:
				case 3:
				case 2:
				case 4:
				case 5:
				case 6:
				case 7:
					return Global_19B04.f_932.f_21B.f_8B3[iParam1 /*4*/][iParam0];
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 1:
					return func_68(72, iParam2, 0);
					break;
				
				case 3:
					return func_68(74, iParam2, 0);
					break;
				
				case 2:
					return func_68(73, iParam2, 0);
					break;
				
				case 4:
					return func_68(75, iParam2, 0);
					break;
				
				case 5:
					return func_68(76, iParam2, 0);
					break;
				
				case 6:
					return func_68(77, iParam2, 0);
					break;
				
				case 7:
					return func_68(78, iParam2, 0);
					break;
			}
			break;
	}
	return 0;
}

int func_57(int iParam0)//Position - 0x2509
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (unk_0x6CB99B97664C3727(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_58(int iParam0, int iParam1)//Position - 0x2527
{
	return Global_19B04.f_4AAE[iParam1 /*271*/].f_3[iParam0 /*12*/].f_3;
}

int func_59(int iParam0, int iParam1)//Position - 0x2543
{
	if (iParam0 < 0 || iParam0 > 2)
	{
		return 0;
	}
	return Global_19B04.f_7BB[iParam0 /*121*/][iParam1 /*10*/].f_8;
}

int func_60(int iParam0)//Position - 0x2571
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = (iVar0 + (unk_0x2B92B25BC2B880BA(iParam0) * 86400));
	iVar0 = (iVar0 + unk_0xDCBCF3447B4EA28E(iParam0) * 3600);
	iVar0 = (iVar0 + unk_0xD17D8426C29123D9(iParam0) * 60);
	iVar0 = (iVar0 + unk_0xFC93B6864DB23AB5(iParam0));
	return iVar0;
}

int func_61(int iParam0, int iParam1)//Position - 0x25B4
{
	return Global_269BC5[iParam0 /*3*/][func_5(iParam1)];
}

int func_62(int iParam0)//Position - 0x25CC
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = (iVar0 + unk_0x2B92B25BC2B880BA(iParam0) * 1440);
	iVar0 = (iVar0 + unk_0xDCBCF3447B4EA28E(iParam0) * 60);
	iVar0 = (iVar0 + unk_0xD17D8426C29123D9(iParam0));
	return iVar0;
}

var func_63(float fParam0)//Position - 0x25FF
{
	if (func_43())
	{
		if (func_64() < Global_40001.f_2F34)
		{
			if (*fParam0 + (IntToFloat(func_64()) * Global_40001.f_2F33)) <= IntToFloat(Global_40001.f_2F3D)
			{
				*fParam0 = (*fParam0 + (IntToFloat(func_64()) * Global_40001.f_2F33));
			}
		}
		return *fParam0;
	}
	return *fParam0;
}

int func_64()//Position - 0x2659
{
	if (func_47(1))
	{
		return Global_18402B[func_65() /*770*/].f_D3.f_6;
	}
	return 0;
}

int func_65()//Position - 0x267F
{
	return Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B;
}

float func_66(int iParam0, int iParam1)//Position - 0x2694
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2702F2[iParam0 /*3*/][func_5(iParam1)];
	if (unk_0x70870CD1718D74F0(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0f;
}

int func_67(int iParam0, int iParam1, int iParam2)//Position - 0x26C0
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_68(int iParam0, int iParam1, int iParam2)//Position - 0x26E5
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_5(iParam1)];
	if (unk_0x6CB99B97664C3727(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_69(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x2717
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp0_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp0_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp0_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp0_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp0_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp0_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp0_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp0_stealth_ability");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp1_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp1_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp1_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp1_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp1_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp1_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp1_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp1_stealth_ability");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp2_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp2_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp2_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp2_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp2_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp2_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp2_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp2_stealth_ability");
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam3 = 64;
					break;
				
				case 1:
					*uParam3 = 65;
					break;
				
				case 3:
					*uParam3 = 67;
					break;
				
				case 2:
					*uParam3 = 66;
					break;
				
				case 4:
					*uParam3 = 68;
					break;
				
				case 5:
					*uParam3 = 69;
					break;
				
				case 6:
					*uParam3 = 70;
					break;
				
				case 7:
					*uParam3 = 71;
					break;
			}
			break;
	}
}

int func_70()//Position - 0x296E
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		return Global_161D2.f_2C == 1;
	}
	return 0;
}

bool func_71(int iParam0)//Position - 0x298A
{
	return iParam0 < 3;
}

void func_72(int iParam0, int iParam1)//Position - 0x2996
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if (((iParam0 != 0 || iParam0 != 1) || iParam0 != 2) || iParam0 != 3)
	{
		return;
	}
	func_69(iParam0, iParam1, &iVar2, &iVar3);
	if (unk_0x7AF0088ABFA713B6())
	{
		iVar0 = func_68(iVar3, -1, 0);
	}
	else
	{
		unk_0x6CB99B97664C3727(iVar2, &iVar0, -1);
	}
	switch (iParam1)
	{
		case 2:
			fVar1 = (0.8f + (0.4f * (SYSTEM::TO_FLOAT(iVar0) / 100f)));
			unk_0xBCB43C2514486D78(unk_0xB5CEFD608600A09F(), fVar1, 1);
			break;
		
		case 7:
			if (unk_0xB731B8C5BCE89836(joaat("armenian3")) != 0 || unk_0xB731B8C5BCE89836(joaat("trevor3")) != 0)
			{
				Global_1610F = 1;
			}
			else
			{
				fVar1 = (1f - (SYSTEM::TO_FLOAT(iVar0) / 100f));
				unk_0x3B3C317B9102719D(unk_0xB5CEFD608600A09F(), fVar1);
				unk_0x9F2796007DC5EEF5(unk_0xB5CEFD608600A09F(), fVar1);
				unk_0x0DDF18180335790C(unk_0xB5CEFD608600A09F(), fVar1);
			}
			break;
	}
}

int func_73(int iParam0)//Position - 0x2A83
{
	if (Global_8C41 == 15)
	{
		return 0;
	}
	if (func_74(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_74(int iParam0)//Position - 0x2AA5
{
	return func_75(iParam0, Global_8C41);
}

int func_75(int iParam0, int iParam1)//Position - 0x2AB6
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_76()//Position - 0x2C97
{
	func_81();
	func_80();
	func_77();
}

void func_77()//Position - 0x2CAB
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!iLocal_80)
	{
		if (iLocal_58 == 3)
		{
			if (Global_200000[func_79() /*12171*/].f_1E08.f_7)
			{
				iLocal_77 = func_60(func_61(147, -1));
				Global_200000[func_79() /*12171*/].f_1E08.f_7 = 0;
			}
			else
			{
				iLocal_77 = Global_200000[func_79() /*12171*/].f_1E08.f_6;
			}
			if (Global_200000[func_79() /*12171*/].f_1E08.f_4 == 0)
			{
				Global_200000[func_79() /*12171*/].f_1E08.f_4 = unk_0xB99C193A32DE341D();
			}
			iLocal_79 = Global_200000[func_79() /*12171*/].f_1E08.f_4;
			iLocal_78 = Global_200000[func_79() /*12171*/].f_1E08.f_5;
		}
		else
		{
			if (Global_19B04.f_932.f_21B.f_8E0[iLocal_58])
			{
				switch (iLocal_58)
				{
					case 0:
						iLocal_77 = func_60(joaat("sp0_total_wheelie_time"));
						break;
					
					case 1:
						iLocal_77 = func_60(joaat("sp1_total_wheelie_time"));
						break;
					
					case 2:
						iLocal_77 = func_60(joaat("sp2_total_wheelie_time"));
						break;
				}
				Global_19B04.f_932.f_21B.f_8E0[iLocal_58] = 0;
			}
			else
			{
				iLocal_77 = Global_19B04.f_932.f_21B.f_8DC[iLocal_58];
			}
			if (Global_19B04.f_932.f_21B.f_8D4[iLocal_58] == 0)
			{
				Global_19B04.f_932.f_21B.f_8D4[iLocal_58] = unk_0xB99C193A32DE341D();
			}
			iLocal_79 = Global_19B04.f_932.f_21B.f_8D4[iLocal_58];
			iLocal_78 = Global_19B04.f_932.f_21B.f_8D8[iLocal_58];
		}
		iLocal_80 = 1;
		iLocal_81 = 1;
	}
	else if ((unk_0xB99C193A32DE341D() - iLocal_79) > 86400)
	{
		iLocal_80 = 0;
		iLocal_81 = 0;
		iLocal_79 = unk_0xB99C193A32DE341D();
		iLocal_78 = 0;
		if (iLocal_58 == 3)
		{
			Global_200000[func_79() /*12171*/].f_1E08.f_7 = 1;
		}
		else
		{
			Global_19B04.f_932.f_21B.f_8E0[iLocal_58] = 1;
		}
	}
	if (iLocal_81)
	{
		switch (iLocal_58)
		{
			case 0:
				iVar0 = func_60(joaat("sp0_total_wheelie_time"));
				break;
			
			case 1:
				iVar0 = func_60(joaat("sp1_total_wheelie_time"));
				break;
			
			case 2:
				iVar0 = func_60(joaat("sp2_total_wheelie_time"));
				break;
			
			case 3:
				iVar0 = func_60(func_61(147, -1));
				break;
		}
		iVar1 = (iVar0 - iLocal_77);
		iVar2 = (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar1) / 15f)) - iLocal_78);
		if (iVar2 > 0)
		{
			func_78(iLocal_58, 4, iVar2);
			iLocal_78 = (iLocal_78 + iVar2);
		}
		if (iVar0 > (iLocal_77 + (unk_0x5BEE008DE1E4AA67() / 1000) * 60))
		{
			iLocal_81 = 0;
		}
	}
	if (iLocal_58 == 3)
	{
		Global_200000[func_79() /*12171*/].f_1E08.f_4 = iLocal_79;
		Global_200000[func_79() /*12171*/].f_1E08.f_5 = iLocal_78;
	}
	else
	{
		Global_19B04.f_932.f_21B.f_8D4[iLocal_58] = iLocal_79;
		Global_19B04.f_932.f_21B.f_8D8[iLocal_58] = iLocal_78;
	}
}

void func_78(int iParam0, int iParam1, int iParam2)//Position - 0x2F6D
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_19B04.f_932.f_21B.f_8B3[iParam1 /*4*/][iParam0] = (Global_19B04.f_932.f_21B.f_8B3[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 8804;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				
				case 3:
					iVar1 = 74;
					break;
				
				case 2:
					iVar1 = 73;
					break;
				
				case 4:
					iVar1 = 75;
					break;
				
				case 5:
					iVar1 = 76;
					break;
				
				case 6:
					iVar1 = 77;
					break;
				
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 8804)
			{
				iVar0 = func_68(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_53(iVar1, iVar0, -1, 1, 0);
			}
			break;
	}
}

int func_79()//Position - 0x305D
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_80()//Position - 0x306A
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_74)
	{
		bVar0 = true;
		if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			iVar1 = unk_0xD20EBB97FE8799ED(unk_0xBC25C936A095B5BA());
			if ((((unk_0x724D816EA203A79E(iVar1) && unk_0xE59B7F5A03335350(iVar1, 0)) && !unk_0x2A348A3A98B80B13(iVar1)) && unk_0x3187EF5798B5D209(iVar1, -1, 0) == unk_0xBC25C936A095B5BA()) && (unk_0x7512ED01F3F46714(unk_0x6F79ECA8C83E4357(iVar1)) || unk_0x7C28D15641461C68(unk_0x6F79ECA8C83E4357(iVar1))))
			{
				bVar0 = false;
				if (unk_0x8910237449BB6F79(iVar1) >= 53f)
				{
					func_78(iLocal_58, 4, 2);
					bVar0 = true;
				}
			}
		}
		if (bVar0)
		{
			iLocal_74 = 0;
			iLocal_75 = unk_0x105601648511CC64();
			if (unk_0x7AF0088ABFA713B6())
			{
				iLocal_76 = unk_0xED678C85A82F0AB9();
			}
		}
	}
	else if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		iVar2 = unk_0xD20EBB97FE8799ED(unk_0xBC25C936A095B5BA());
		if (((unk_0x724D816EA203A79E(iVar2) && unk_0xE59B7F5A03335350(iVar2, 0)) && unk_0x8910237449BB6F79(iVar2) < 20f) && !unk_0x2A348A3A98B80B13(iVar2))
		{
			if ((!unk_0x7AF0088ABFA713B6() && (unk_0x105601648511CC64() - iLocal_75) > 10000) || (unk_0x7AF0088ABFA713B6() && unk_0x0FF2ECF37CE834C6(unk_0xED678C85A82F0AB9(), unk_0x863D0D1A37055D36(iLocal_76, 10000))))
			{
				iLocal_74 = 1;
			}
		}
	}
}

void func_81()//Position - 0x31BC
{
	bool bVar0;
	int iVar1;
	char cVar2[64];
	
	bVar0 = false;
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		iVar1 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
		if (((unk_0x724D816EA203A79E(iVar1) && unk_0xE59B7F5A03335350(iVar1, 0)) && unk_0x3187EF5798B5D209(iVar1, -1, 0) == unk_0xBC25C936A095B5BA()) && (((unk_0x7C28D15641461C68(unk_0x6F79ECA8C83E4357(iVar1)) || unk_0x7512ED01F3F46714(unk_0x6F79ECA8C83E4357(iVar1))) || unk_0x2B4DE5C0D509B0F9(unk_0x6F79ECA8C83E4357(iVar1))) || unk_0x89B9572166100905(unk_0x6F79ECA8C83E4357(iVar1))))
		{
			if (iLocal_66)
			{
				if (!unk_0x2A348A3A98B80B13(iVar1))
				{
					if ((!unk_0x7AF0088ABFA713B6() && (unk_0x105601648511CC64() - iLocal_68) > 1500) || (unk_0x7AF0088ABFA713B6() && unk_0x0FF2ECF37CE834C6(unk_0xED678C85A82F0AB9(), unk_0x863D0D1A37055D36(iLocal_69, 1500))))
					{
						iLocal_70 = unk_0x105601648511CC64();
						if (unk_0x7AF0088ABFA713B6())
						{
							iLocal_71 = unk_0xED678C85A82F0AB9();
						}
						iLocal_67 = 1;
					}
					iLocal_66 = 0;
				}
			}
			if (iLocal_67)
			{
				if (!unk_0x2A348A3A98B80B13(iVar1))
				{
					if (unk_0x58F9E0EA914AEF2C(iVar1))
					{
						if ((((!unk_0x7AF0088ABFA713B6() && (unk_0x105601648511CC64() - iLocal_70) > 20) || (!unk_0x7AF0088ABFA713B6() && (unk_0x105601648511CC64() - iLocal_70) == 0)) || (unk_0x7AF0088ABFA713B6() && unk_0x0FF2ECF37CE834C6(unk_0xED678C85A82F0AB9(), unk_0x863D0D1A37055D36(iLocal_71, 20)))) || (unk_0x7AF0088ABFA713B6() && unk_0xD73539670E5FC1DB(unk_0xED678C85A82F0AB9(), iLocal_71)))
						{
						}
						else
						{
							func_78(iLocal_58, 4, 1);
						}
						StringCopy(&cVar2, "Player landed on all wheels in ", 64);
						StringIntConCat(&cVar2, (unk_0x105601648511CC64() - iLocal_70), 64);
						StringConCat(&cVar2, "ms", 64);
						bVar0 = true;
					}
				}
				else
				{
					bVar0 = true;
				}
			}
			if (!iLocal_66 && !iLocal_67)
			{
				if ((!unk_0x7AF0088ABFA713B6() && (unk_0x105601648511CC64() - iLocal_72) > 1000) || (unk_0x7AF0088ABFA713B6() && unk_0x0FF2ECF37CE834C6(unk_0xED678C85A82F0AB9(), unk_0x863D0D1A37055D36(iLocal_73, 1000))))
				{
					if (unk_0x2A348A3A98B80B13(iVar1))
					{
						if (!iLocal_66)
						{
							iLocal_68 = unk_0x105601648511CC64();
							if (unk_0x7AF0088ABFA713B6())
							{
								iLocal_69 = unk_0xED678C85A82F0AB9();
							}
							iLocal_66 = 1;
						}
					}
				}
			}
		}
		else if (iLocal_66 || iLocal_67)
		{
			bVar0 = true;
		}
	}
	else if (iLocal_66 || iLocal_67)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		iLocal_72 = unk_0x105601648511CC64();
		if (unk_0x7AF0088ABFA713B6())
		{
			iLocal_73 = unk_0xED678C85A82F0AB9();
		}
		iLocal_66 = 0;
		iLocal_67 = 0;
	}
}

bool func_82(int iParam0)//Position - 0x3400
{
	return (Global_19771 && iParam0) != 0;
}

int func_83()//Position - 0x3411
{
	func_84();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_84()//Position - 0x342A
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_86(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_85(unk_0xBC25C936A095B5BA());
			if (func_71(iVar0) && (!func_52(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_71(Global_19B04.f_932.f_21B.f_10CD))
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

int func_85(int iParam0)//Position - 0x3527
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_86(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_86(int iParam0)//Position - 0x3564
{
	if (func_71(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_87()//Position - 0x358E
{
	char* sVar0;
	int iVar1;
	
	if (iLocal_61)
	{
		if (iLocal_62 != iLocal_58)
		{
			iLocal_61 = 0;
			return;
		}
		sVar0 = "CHAR_DEFAULT";
		switch (iLocal_62)
		{
			case 0:
				sVar0 = "CHAR_MICHAEL";
				break;
			
			case 1:
				sVar0 = "CHAR_FRANKLIN";
				break;
			
			case 2:
				sVar0 = "CHAR_TREVOR";
				break;
			
			case 3:
				iVar1 = func_90(unk_0xB5CEFD608600A09F());
				if (iVar1 == 0)
				{
					return;
				}
				else
				{
					sVar0 = unk_0xF392EEDDF2FB749A(iVar1);
				}
				break;
		}
		unk_0x2E94302CFF011F2E("PS_UPDATE");
		unk_0xAA5C5BF0489E5553(iLocal_65);
		unk_0x193CC5876FFC53A9(func_89(iLocal_63), func_88(iLocal_63), iLocal_64, (iLocal_65 - iLocal_64), 0, sVar0, sVar0);
		iLocal_82 = 1;
		iLocal_83 = unk_0x105601648511CC64() + 5000;
		if (unk_0x7AF0088ABFA713B6())
		{
			iLocal_84 = unk_0x863D0D1A37055D36(unk_0xED678C85A82F0AB9(), 5000);
		}
		iLocal_61 = 0;
	}
}

int func_88(int iParam0)//Position - 0x3652
{
	switch (iParam0)
	{
		case 0:
			return 23;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 24;
			break;
		
		case 2:
			return 25;
			break;
		
		case 4:
			return 14;
			break;
		
		case 5:
			return 27;
			break;
		
		case 6:
			return 17;
			break;
		
		case 7:
			return 28;
			break;
	}
	return -1;
}

char* func_89(int iParam0)//Position - 0x36D1
{
	switch (iParam0)
	{
		case 0:
			return "PSF_SPEC_AB";
			break;
		
		case 1:
			return "PSF_STAMINA";
			break;
		
		case 3:
			return "PSF_LUNG";
			break;
		
		case 2:
			return "PSF_STRENGTH";
			break;
		
		case 4:
			return "PSF_DRIVING";
			break;
		
		case 5:
			return "PSF_FLYING";
			break;
		
		case 6:
			return "PSF_SHOOTING";
			break;
		
		case 7:
			return "PSF_STEALTH";
			break;
	}
	return "ERROR";
}

int func_90(int iParam0)//Position - 0x375B
{
	int iVar0;
	
	iVar0 = func_93(iParam0);
	if (iVar0 == -1)
	{
		func_91(iParam0, 1);
		return 0;
	}
	Global_14FA05[iVar0 /*5*/].f_4 = 1;
	return Global_14FA05[iVar0 /*5*/].f_2;
}

void func_91(int iParam0, bool bParam1)//Position - 0x3791
{
	if (!func_17(iParam0, 0, 1))
	{
		return;
	}
	if (func_93(iParam0) != -1)
	{
		return;
	}
	if (Global_14FAA8)
	{
		if (iParam0 == Global_14FAA8.f_1)
		{
			return;
		}
	}
	if (func_92(iParam0))
	{
		return;
	}
	if (Global_14FACE >= 32)
	{
		return;
	}
	Global_14FAAD[Global_14FACE] = iParam0;
	Global_14FACE++;
	if (bParam1)
	{
	}
}

int func_92(int iParam0)//Position - 0x37FD
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_14FACE)
	{
		if (Global_14FAAD[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_93(int iParam0)//Position - 0x382F
{
	int iVar0;
	
	if (!func_17(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_14FAA6 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_14FAA6)
	{
		if (Global_14FA05[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x516A8073F5BF5F0A(Global_14FA05[iVar0 /*5*/].f_2) && unk_0xEB606E770B747B2C(Global_14FA05[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_94(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_94(int iParam0)//Position - 0x38AE
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_14FAA6)
	{
		return;
	}
	if (unk_0x516A8073F5BF5F0A(Global_14FA05[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_14FA05[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar1, unk_0xF392EEDDF2FB749A(Global_14FA05[iParam0 /*5*/].f_2), 64);
			unk_0x8F5E9D20607FC4FF(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		unk_0x469C2D90A617CB9A(Global_14FA05[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_14FAA6)
	{
		Global_14FA05[iVar2 /*5*/] = { Global_14FA05[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_95(&(Global_14FA05[iVar2 /*5*/]));
	Global_14FAA6 = (Global_14FAA6 - 1);
}

void func_95(var uParam0)//Position - 0x3963
{
	*uParam0 = 0;
	uParam0->f_1 = func_46();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x7AF0088ABFA713B6())
	{
		uParam0->f_3 = unk_0xED678C85A82F0AB9();
	}
}

void func_96()//Position - 0x3990
{
	float fVar0;
	int iVar1;
	
	if (unk_0xB6469267B091EAAA() != 1)
	{
		return;
	}
	if (unk_0x7AF0088ABFA713B6())
	{
		if (!func_100(unk_0xB5CEFD608600A09F()))
		{
			return;
		}
		if (func_99() != 0)
		{
			return;
		}
	}
	if (unk_0x7AF0088ABFA713B6())
	{
		if (func_99() == 0)
		{
			iLocal_53 = 2;
		}
	}
	else
	{
		iLocal_53 = 0;
	}
	if (!func_98())
	{
		func_97();
	}
	iLocal_55 = 0;
	iLocal_56 = 0;
	if (unk_0x7AF0088ABFA713B6())
	{
		iLocal_57 = unk_0xED678C85A82F0AB9();
	}
	iLocal_72 = unk_0x105601648511CC64();
	if (unk_0x7AF0088ABFA713B6())
	{
		iLocal_73 = unk_0xED678C85A82F0AB9();
	}
	if (unk_0x7AF0088ABFA713B6())
	{
		if (!unk_0xFA30DFD0084E92FE(Global_200000[func_79() /*12171*/].f_1E08.f_4F9, 2))
		{
			fVar0 = (SYSTEM::TO_FLOAT(func_68(192, -1, 0)) / 20f);
			iVar1 = SYSTEM::FLOOR(fVar0);
			iVar1 = func_67(iVar1, 0, 100);
			func_78(3, 2, iVar1);
			unk_0xF0059F27F7BB6680(&(Global_200000[func_79() /*12171*/].f_1E08.f_4F9), 2);
		}
	}
	bLocal_59 = true;
	iLocal_54 = 1;
}

void func_97()//Position - 0x3A7A
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	
	if (unk_0x7AF0088ABFA713B6())
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (iVar0 != 0)
			{
				func_69(3, iVar0, &uVar1, &iVar2);
				func_53(iVar2, func_51(3, iVar0, -1), -1, 1, 0);
			}
			iVar0++;
		}
		func_4(0, 1, -1, 1);
		Global_1610E = 1;
	}
	else
	{
		iVar3 = 0;
		while (iVar3 < 3)
		{
			iVar4 = 0;
			while (iVar4 < 8)
			{
				if (iVar4 != 0)
				{
					func_69(iVar3, iVar4, &iVar5, &uVar6);
					unk_0x3A57956BCE003880(iVar5, func_51(iVar3, iVar4, -1), 1);
				}
				iVar4++;
			}
			iVar3++;
		}
		Global_19B04.f_932.f_21B.f_93F[0] = func_51(0, 0, -1);
		Global_19B04.f_932.f_21B.f_93F[1] = func_51(1, 0, -1);
		Global_19B04.f_932.f_21B.f_93F[2] = func_51(2, 0, -1);
		Global_19B04.f_932.f_21B.f_91E = 1;
		Global_1610E = 1;
	}
}

int func_98()//Position - 0x3B6E
{
	if (unk_0x7AF0088ABFA713B6())
	{
		return 1;
	}
	return Global_19B04.f_932.f_21B.f_91E;
}

int func_99()//Position - 0x3B91
{
	return Global_62BD;
}

int func_100(int iParam0)//Position - 0x3B9C
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xFA30DFD0084E92FE(Global_252E21.f_1, iParam0);
	}
	return 1;
}

void func_101()//Position - 0x3BC1
{
	if (iLocal_54 != 0 && iLocal_53 != 3)
	{
		if (iLocal_53 == 0)
		{
			if (unk_0x7AF0088ABFA713B6())
			{
				iLocal_53 = 3;
			}
			if (!func_98())
			{
				iLocal_53 = 3;
			}
		}
		else if (iLocal_53 == 2)
		{
			if ((!unk_0x7AF0088ABFA713B6() || !func_100(unk_0xB5CEFD608600A09F())) || func_99() != 0)
			{
				iLocal_53 = 3;
			}
		}
		if (iLocal_53 == 3)
		{
			iLocal_54 = 2;
		}
	}
}

