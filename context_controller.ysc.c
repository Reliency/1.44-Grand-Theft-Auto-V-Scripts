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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
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
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 10;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 2;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 8;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 8;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	float fLocal_94 = 0f;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	bool bLocal_105 = 0;
	bool bLocal_106 = 0;
	bool bLocal_107 = 0;
	struct<4> Local_108 = { 0, 0, 0, 0 } ;
	struct<16> Local_109 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_94 = ((0.05f + 0.275f) - 0.01f);
	if (unk_0xB731B8C5BCE89836(joaat("context_controller")) > 1)
	{
		unk_0x95E4B6F3ED223F5A();
	}
	unk_0xC1A27D367CCA8C15();
	iVar0 = 0;
	iVar1 = iVar0;
	SYSTEM::SETTIMERA(0);
	Global_8FC7 = 0;
	func_38();
	StringCopy(&Global_8FC8, "CC_SUBSTR", 16);
	iVar2 = -1;
	iVar3 = -1;
	bVar4 = false;
	bVar5 = false;
	iVar6 = 0;
	iVar7 = -1;
	iVar8 = Global_11542;
	while (true)
	{
		if (Global_11542)
		{
			func_35();
		}
		else
		{
			func_33();
		}
		func_26();
		if (Global_11542 != iVar8)
		{
			func_25();
			func_38();
			iVar2 = -1;
			iVar8 = Global_11542;
			while (unk_0x7930B3E9C919E90F())
			{
				SYSTEM::WAIT(2000);
			}
		}
		if (Global_8FCD)
		{
			if (Global_8FCF > -1)
			{
				if (!Global_8F05[Global_8FCF /*32*/].f_6)
				{
					if (!func_23(Global_8FCF, 1))
					{
						Global_8FCF = -1;
					}
				}
			}
		}
		if (func_19())
		{
			iVar2 = -1;
			func_25();
		}
		if (iVar2 > -1)
		{
			if (!Global_8FCD)
			{
				if (Global_8FCF != iVar2)
				{
					if (func_18(Global_8FCF))
					{
						func_25();
						if (!Global_8F05[iVar2 /*32*/].f_5 && Global_8F05[iVar2 /*32*/])
						{
							if (!func_19())
							{
								if (!Global_8F05[iVar2 /*32*/].f_7)
								{
									if (!Global_8F05[iVar2 /*32*/].f_6)
									{
										if (!Global_8F05[iVar2 /*32*/].f_C)
										{
											func_17(Global_8F05[iVar2 /*32*/].f_8, Global_8F05[iVar2 /*32*/].f_3);
										}
										else
										{
											func_16(Global_8F05[iVar2 /*32*/].f_8, Global_8F05[iVar2 /*32*/].f_D, Global_8F05[iVar2 /*32*/].f_3, Global_8F05[iVar2 /*32*/].f_1E);
										}
										Global_8FCF = iVar2;
									}
								}
							}
						}
					}
				}
			}
			else
			{
				func_25();
			}
		}
		else
		{
			func_25();
		}
		switch (iVar0)
		{
			case 0:
				iVar2 = func_15();
				if (unk_0xA2EAABEFA9CDA925(2, 51))
				{
					iVar6 = 1;
				}
				if (!func_19())
				{
					if (iVar2 > -1 && iVar6)
					{
						if (unk_0x694514BD37EC4E94(2, 51))
						{
							Global_8F05[iVar2 /*32*/].f_4 = 1;
							Global_8F05[iVar2 /*32*/].f_1D = 0;
							iVar7 = Global_8F05[iVar2 /*32*/].f_1;
							iVar0 = 1;
							Global_8FC6 = 0;
						}
					}
				}
				else
				{
					iVar2 = -1;
				}
				if (iVar3 != iVar2)
				{
					if (iVar2 != -1)
					{
						if (!unk_0x610A1308608A0F91(unk_0xA95CF30C72EB526E(unk_0xFC1CAE18F3ECBF2D()), 1))
						{
							if (unk_0x5237AF95232D78C5(unk_0xA95CF30C72EB526E(unk_0xFC1CAE18F3ECBF2D()), 0))
							{
								if (unk_0x4B1521EDBF25A39C(0, 101))
								{
									bVar5 = true;
									unk_0xBBC4195AD74D153D(0, 101, 1);
								}
								if (unk_0x4B1521EDBF25A39C(0, 74))
								{
									bVar4 = true;
									unk_0xBBC4195AD74D153D(0, 74, 1);
								}
							}
						}
					}
					else
					{
						if (bVar5)
						{
							unk_0x5EFA245B45A49778(0, 101, 1);
							bVar5 = false;
						}
						if (bVar4)
						{
							unk_0x5EFA245B45A49778(0, 74, 1);
							bVar4 = false;
						}
					}
					iVar3 = iVar2;
				}
				break;
			
			case 1:
				if (iVar2 < 0 || func_14() == 0)
				{
					iVar0 = 0;
				}
				else
				{
					if (SYSTEM::TIMERA() > 5000)
					{
						Global_8F05[iVar2 /*32*/].f_7 = 1;
						iVar0 = 0;
					}
					else if (func_13(iVar2))
					{
						iVar0 = 2;
					}
					if (!iVar7 == Global_8F05[iVar2 /*32*/].f_1)
					{
						iVar0 = 0;
					}
					if (Global_8F05[iVar2 /*32*/].f_7 || Global_8F05[iVar2 /*32*/] == 0)
					{
						iVar0 = 0;
					}
				}
				break;
			
			case 2:
				if (Global_8FC6)
				{
					func_25();
				}
				if (unk_0x694514BD37EC4E94(2, 51))
				{
					if (iVar2 > -1)
					{
						Global_8F05[iVar2 /*32*/].f_1D = 0;
					}
				}
				if (Global_8FC7)
				{
					Global_8FC7 = 0;
					iVar0 = 0;
				}
				else if (iVar2 > -1)
				{
					if (!(Global_8F05[iVar2 /*32*/].f_4 || Global_8F05[iVar2 /*32*/].f_7))
					{
						Global_8FC7 = 0;
						iVar2 = -1;
					}
				}
				if (iVar2 > -1)
				{
					if (Global_8F05[iVar2 /*32*/].f_7 || Global_8F05[iVar2 /*32*/] == 0)
					{
						iVar2 = -1;
					}
				}
				if (iVar2 == -1)
				{
					iVar0 = 0;
					iVar6 = 0;
				}
				break;
		}
		if (iVar2 > -1)
		{
			unk_0xBBC4195AD74D153D(0, 46, 1);
			unk_0xBBC4195AD74D153D(0, 54, 1);
		}
		if (iVar0 != iVar1)
		{
			iVar1 = iVar0;
			SYSTEM::SETTIMERA(0);
			iVar6 = 0;
		}
		func_12();
		func_10(&iVar2);
		Global_8FCC = 0;
		Global_8FCD = 0;
		func_1();
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x454
{
	bool bVar0;
	
	if (!bLocal_105)
	{
		return;
	}
	bVar0 = true;
	if (iLocal_110 == 1)
	{
		bVar0 = false;
	}
	if (bLocal_106)
	{
		if (bLocal_107)
		{
			unk_0x563F749F78AC90A0(0);
		}
		unk_0x2F618BD43614DD0D(&Local_108);
		if (bLocal_107)
		{
			unk_0x607C19B90D297FE2(&Local_109);
		}
		else
		{
			unk_0xC9C304D0AABE1335(&Global_8FC8);
			unk_0xC9C304D0AABE1335(&Local_109);
		}
		unk_0x72F8FA06CC9EC899(0, 0, bVar0, 50);
	}
	else
	{
		unk_0x2F618BD43614DD0D(&Local_108);
		unk_0xC9C304D0AABE1335(&Global_8FC8);
		unk_0x72F8FA06CC9EC899(0, 0, bVar0, 50);
	}
	switch (iLocal_110)
	{
		case 0:
			break;
		
		case 1:
			func_9(0);
			break;
		
		case 2:
			func_2(0);
			break;
	}
}

void func_2(int iParam0)//Position - 0x4F1
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_4(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_3())
	{
		unk_0xC4BA30B532FE260F(-1, "Boss_Message_Orange", sVar0, 0);
	}
}

bool func_3()//Position - 0x525
{
	return Global_252E21.f_A8F[0 /*80*/].f_1 != 0;
}

bool func_4(bool bParam0)//Position - 0x53B
{
	return func_5(unk_0xB5CEFD608600A09F(), bParam0);
}

int func_5(int iParam0, bool bParam1)//Position - 0x54D
{
	return func_6(iParam0, bParam1, 1);
}

int func_6(int iParam0, bool bParam1, int iParam2)//Position - 0x55E
{
	int iVar0;
	
	if (iParam0 == func_8())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_7(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_18C80F[iParam0 /*558*/].f_B;
	if (iVar0 != func_8() && Global_18C80F[iVar0 /*558*/].f_B.f_199 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_7(int iParam0, int iParam1)//Position - 0x5BA
{
	if (iParam0 != func_8())
	{
		if (Global_18C80F[iParam0 /*558*/].f_B != func_8())
		{
			if (Global_18C80F[iParam0 /*558*/].f_B == iParam0 && Global_18C80F[iParam0 /*558*/].f_B.f_199 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_8()//Position - 0x609
{
	return -1;
}

void func_9(int iParam0)//Position - 0x612
{
	unk_0x652B3075D0E58C13(3, 21, 200, 0, 0);
	if (iParam0 && !func_3())
	{
		unk_0xC4BA30B532FE260F(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_10(int iParam0)//Position - 0x63F
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_8F05[iVar0 /*32*/] && Global_8F05[iVar0 /*32*/].f_4)
		{
			if (Global_8F05[iVar0 /*32*/].f_1F != 0)
			{
				if (!unk_0x3C406FC829C1E14A(Global_8F05[iVar0 /*32*/].f_1F))
				{
					if (*iParam0 > -1)
					{
						func_11();
					}
					Global_8F05[iVar0 /*32*/] = 0;
					Global_8F05[iVar0 /*32*/].f_1F = 0;
					Global_8F05[iVar0 /*32*/] = 0;
					Global_8F05[iVar0 /*32*/].f_4 = 0;
					Global_8F05[iVar0 /*32*/].f_5 = 0;
					Global_8F05[iVar0 /*32*/].f_2 = 0;
					Global_8F05[iVar0 /*32*/].f_7 = 0;
					Global_8F05[iVar0 /*32*/].f_6 = 0;
					Global_8F05[iVar0 /*32*/].f_3 = 0;
					*iParam0 = -1;
				}
			}
		}
		iVar0++;
	}
}

void func_11()//Position - 0x6F7
{
	if (Global_8FCF != -1 || bLocal_105)
	{
		bLocal_105 = false;
		Global_8FCF = -1;
	}
}

void func_12()//Position - 0x716
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_8F05[iVar0 /*32*/].f_7)
		{
			if (iVar0 == Global_8FCF)
			{
				func_25();
			}
			Global_8F05[iVar0 /*32*/].f_1F = 0;
			Global_8F05[iVar0 /*32*/] = 0;
			Global_8F05[iVar0 /*32*/].f_4 = 0;
			Global_8F05[iVar0 /*32*/].f_5 = 0;
			Global_8F05[iVar0 /*32*/].f_2 = 0;
			Global_8F05[iVar0 /*32*/].f_7 = 0;
			Global_8F05[iVar0 /*32*/].f_6 = 0;
			Global_8F05[iVar0 /*32*/].f_1 = -1;
			Global_8F05[iVar0 /*32*/].f_3 = 0;
		}
		iVar0++;
	}
}

int func_13(int iParam0)//Position - 0x7A3
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_8F05[iParam0 /*32*/].f_5)
	{
		return 1;
	}
	return 0;
}

int func_14()//Position - 0x7C6
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_8F05[iVar0 /*32*/] == 1)
		{
			if (Global_8F05[iVar0 /*32*/].f_4 == 0)
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (iVar1 == 0)
	{
		func_25();
	}
	return iVar1;
}

int func_15()//Position - 0x810
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_8F05[iVar0 /*32*/])
		{
			if (Global_8F05[iVar0 /*32*/].f_2 > iVar1)
			{
				iVar2 = iVar0;
				iVar1 = Global_8F05[iVar0 /*32*/].f_2;
			}
		}
		iVar0++;
	}
	return iVar2;
}

void func_16(struct<4> Param0, struct<16> Param1, var uParam2, var uParam3)//Position - 0x85C
{
	Local_108 = { Param0 };
	Local_109 = { Param1 };
	bLocal_105 = true;
	bLocal_106 = true;
	iLocal_110 = uParam2;
	bLocal_107 = uParam3;
}

void func_17(struct<4> Param0, var uParam1)//Position - 0x884
{
	Local_108 = { Param0 };
	bLocal_105 = true;
	bLocal_106 = false;
	iLocal_110 = uParam1;
}

int func_18(int iParam0)//Position - 0x89E
{
	int iVar0;
	
	if (Global_15FAD && Global_15FAC)
	{
		return 0;
	}
	if (iParam0 > 0)
	{
		if (func_23(iParam0, 1) || bLocal_105)
		{
			return 1;
		}
	}
	if (unk_0xF16DAFF595E80F7C() && !unk_0x535D97BA31996564())
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (func_23(iVar0, 1))
			{
				return 1;
			}
			iVar0++;
		}
		return 0;
	}
	return 1;
}

int func_19()//Position - 0x90C
{
	if (Global_10AB8)
	{
		return 1;
	}
	if (!unk_0x6A9CDB766DF7216F(unk_0xFC1CAE18F3ECBF2D()))
	{
		return 1;
	}
	if (func_22(0))
	{
		return 1;
	}
	if (unk_0x866EAD7E27D8D0F8())
	{
		return 1;
	}
	if (Global_8FCC)
	{
		return 1;
	}
	if (unk_0xB6AACEDA0127F076(19))
	{
		return 1;
	}
	if (func_21(1))
	{
		return 1;
	}
	if (unk_0x7930B3E9C919E90F())
	{
		return 1;
	}
	if (func_20(8, -1))
	{
		return 1;
	}
	return 0;
}

bool func_20(int iParam0, int iParam1)//Position - 0x983
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

bool func_21(bool bParam0)//Position - 0x9BE
{
	if (bParam0)
	{
		return (Global_4336.f_4 && Global_4336.f_68 == 4);
	}
	return Global_4336.f_4;
}

int func_22(int iParam0)//Position - 0x9E7
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

int func_23(int iParam0, int iParam1)//Position - 0xA41
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_24(iParam0);
	if (iParam1 == 0)
	{
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	else
	{
		iVar0 = iParam0;
	}
	if (iVar0 < 0)
	{
		return 0;
	}
	if (Global_8F05[iVar0 /*32*/].f_6)
	{
		return 0;
	}
	iVar1 = 0;
	if (!Global_8F05[iVar0 /*32*/].f_C)
	{
		unk_0xF07D20149ECBC61E(&(Global_8F05[iVar0 /*32*/].f_8));
		unk_0xC9C304D0AABE1335(&Global_8FC8);
		iVar1 = unk_0xA66DBDA0A072514A(0);
	}
	else
	{
		unk_0xF07D20149ECBC61E(&(Global_8F05[iVar0 /*32*/].f_8));
		unk_0xC9C304D0AABE1335(&Global_8FC8);
		if (Global_8F05[iVar0 /*32*/].f_1E)
		{
			unk_0x607C19B90D297FE2(&(Global_8F05[iVar0 /*32*/].f_D));
		}
		else
		{
			unk_0xC9C304D0AABE1335(&(Global_8F05[iVar0 /*32*/].f_D));
		}
		iVar1 = unk_0xA66DBDA0A072514A(0);
	}
	return iVar1;
}

int func_24(int iParam0)//Position - 0xAF6
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_8F05[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_25()//Position - 0xB31
{
	func_11();
	Global_8FCF = -1;
}

void func_26()//Position - 0xB41
{
	if (!unk_0x7930B3E9C919E90F() && !func_32())
	{
		if (func_31(0))
		{
			if (!unk_0xF1734B55490E9045(&(Global_255A46.f_29F.f_C)))
			{
				func_30();
				func_27(6, 0, 0);
			}
		}
	}
}

int func_27(int iParam0, bool bParam1, int iParam2)//Position - 0xB80
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	Global_10B29 = iParam0;
	bVar0 = iParam2 == true;
	bVar1 = iParam2 == 2;
	bVar2 = iParam2 == 3;
	switch (Global_10B29)
	{
		case 3:
			Global_10B27 = 0;
			break;
		
		case 4:
			Global_10B27 = 3;
			break;
	}
	if (unk_0xB731B8C5BCE89836(joaat("appsecuroserv")) > 0)
	{
		if (bVar0)
		{
		}
		return 0;
	}
	if (unk_0xB731B8C5BCE89836(1476056117) > 0)
	{
		if (bVar1)
		{
		}
		return 0;
	}
	if (unk_0xB731B8C5BCE89836(290327540) > 0)
	{
		if (bVar2)
		{
		}
		return 0;
	}
	if (unk_0xB731B8C5BCE89836(joaat("appinternet")) > 0)
	{
		if ((bVar0 || bVar1) || bVar2)
		{
		}
		return 0;
	}
	if (Global_11542 && func_29())
	{
		return 0;
	}
	if (!Global_11542 && func_28())
	{
		return 0;
	}
	if (bVar0)
	{
		if (!unk_0xACE95AD318CE412B("appSecuroServ"))
		{
			unk_0x63831D2D5110C305("appSecuroServ");
			if (bParam1)
			{
				return 0;
			}
		}
		while (!unk_0xACE95AD318CE412B("appSecuroServ"))
		{
			SYSTEM::WAIT(0);
		}
		SYSTEM::START_NEW_SCRIPT("appSecuroServ", 4592);
		unk_0x91DEC7187FA01089("appSecuroServ");
		return 1;
	}
	if (bVar1)
	{
		if (!unk_0xACE95AD318CE412B("appBikerBusiness"))
		{
			unk_0x63831D2D5110C305("appBikerBusiness");
			if (bParam1)
			{
				return 0;
			}
		}
		while (!unk_0xACE95AD318CE412B("appBikerBusiness"))
		{
			SYSTEM::WAIT(0);
		}
		SYSTEM::START_NEW_SCRIPT("appBikerBusiness", 4592);
		unk_0x91DEC7187FA01089("appBikerBusiness");
		return 1;
	}
	if (bVar2)
	{
		if (!unk_0xACE95AD318CE412B("appImportExport"))
		{
			unk_0x63831D2D5110C305("appImportExport");
			if (bParam1)
			{
				return 0;
			}
		}
		while (!unk_0xACE95AD318CE412B("appImportExport"))
		{
			SYSTEM::WAIT(0);
		}
		SYSTEM::START_NEW_SCRIPT("appImportExport", 4592);
		unk_0x91DEC7187FA01089("appImportExport");
		return 1;
	}
	if (!unk_0xACE95AD318CE412B("appInternet"))
	{
		unk_0x63831D2D5110C305("appInternet");
		if (bParam1)
		{
			return 0;
		}
	}
	while (!unk_0xACE95AD318CE412B("appInternet"))
	{
		SYSTEM::WAIT(0);
	}
	SYSTEM::START_NEW_SCRIPT("appInternet", 4592);
	unk_0x91DEC7187FA01089("appInternet");
	return 1;
}

var func_28()//Position - 0xD87
{
	return Global_10AB9;
}

var func_29()//Position - 0xD93
{
	return Global_193B53;
}

void func_30()//Position - 0xD9F
{
	Global_255A46.f_29F.f_1C = 0;
}

bool func_31(bool bParam0)//Position - 0xDB1
{
	if (bParam0)
	{
		return (Global_255A46.f_29F.f_1C && unk_0x56BEECB328B6D29D(unk_0x1377080E9B0BD993()) == Global_255A46.f_29F.f_1F);
	}
	return Global_255A46.f_29F.f_1C;
}

bool func_32()//Position - 0xDED
{
	return Global_10AB8;
}

void func_33()//Position - 0xDF9
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (Global_CF95[iVar1] < 0)
		{
			Global_CF95[iVar1] = 0;
			bVar0 = true;
		}
		iVar1++;
	}
	if (bVar0)
	{
		func_34(0);
		func_34(1);
		func_34(2);
	}
}

void func_34(int iParam0)//Position - 0xE43
{
	int iVar0;
	
	iVar0 = Global_CF95[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x3A57956BCE003880(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x3A57956BCE003880(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x3A57956BCE003880(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_35()//Position - 0xE9D
{
	struct<13> Var0;
	
	if (Global_1801BA != -1)
	{
		Var0 = Global_1801BB[0];
		Var0.f_1 = Global_1801BB[1];
		Var0.f_2 = Global_1801BB[2];
		Var0.f_3 = Global_1801BB[3];
		Var0.f_4 = Global_1801BB[4];
		Var0.f_5 = Global_1801BB[5];
		Var0.f_6 = Global_1801BB[6];
		Var0.f_7 = Global_1801BB[7];
		Var0.f_8 = Global_1801BB[8];
		Var0.f_9 = Global_1801BB[9];
		Var0.f_A = Global_1801BB[10];
		Var0.f_B = Global_1801BB[11];
		Var0.f_C = Global_1801BB[12];
		if (unk_0xA76D65C63ED50F67() || unk_0xF49912B78E2591B6())
		{
			if (!iLocal_111)
			{
				if (unk_0x3C06831BC53A4780(&Var0))
				{
					iLocal_111 = 1;
				}
			}
			if (iLocal_111)
			{
				if (unk_0xCCEB07853B18E06B())
				{
				}
				else
				{
					if (unk_0x0D7CCCA101B6132E())
					{
						StringCopy(&(Global_200000[func_37() /*12171*/].f_2EDA.f_12[Global_1801BA /*6*/]), unk_0x3F78275202D8E949(&Var0), 24);
					}
					Global_1801BA = -1;
					iLocal_111 = 0;
				}
			}
		}
		else if (unk_0x3E9993F328985CCB() || unk_0xF7E138CFA19B55E7())
		{
			if (func_36(Var0))
			{
				StringCopy(&(Global_200000[func_37() /*12171*/].f_2EDA.f_12[Global_1801BA /*6*/]), unk_0x3F78275202D8E949(&Var0), 24);
			}
			Global_1801BA = -1;
			iLocal_111 = 0;
		}
		else
		{
			if (func_36(Var0))
			{
				StringCopy(&(Global_200000[func_37() /*12171*/].f_2EDA.f_12[Global_1801BA /*6*/]), unk_0x70B8E728541172FF(&Var0), 24);
			}
			Global_1801BA = -1;
			iLocal_111 = 0;
		}
	}
}

bool func_36(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x1019
{
	return unk_0x700A9F370C80C9E1(&uParam0, 13);
}

int func_37()//Position - 0x1029
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_38()//Position - 0x1036
{
	int iVar0;
	
	Global_8FC6 = 0;
	Global_8FCC = 0;
	Global_8FCD = 0;
	Global_8FCE = 1;
	Global_8FCF = -1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_8F05[iVar0 /*32*/] = 0;
		iVar0++;
	}
}

