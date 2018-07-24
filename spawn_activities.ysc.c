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
	var uLocal_60 = 0;
	var uLocal_61 = 10;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 2;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 8;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 8;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	bool bLocal_100 = 0;
	int iLocal_101 = 0;
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
	unk_0xC1A27D367CCA8C15();
	unk_0x6C87EFD58B261C6F(0);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (func_150())
		{
			func_147();
		}
		if (func_137())
		{
			func_147();
		}
		switch (iLocal_96)
		{
			case 0:
				if (Global_24C31F.f_1A && Global_14178C == -1)
				{
				}
				else
				{
					if (!Global_24C31F.f_10)
					{
						func_48();
					}
					if (!Global_24C31F.f_F)
					{
						func_23();
					}
					if (func_17())
					{
						iLocal_96 = 1;
					}
				}
				break;
			
			case 1:
				if (func_1())
				{
					func_147();
				}
				break;
			
			case 2:
				break;
		}
	}
}

int func_1()//Position - 0x109
{
	int iVar0;
	
	if (Global_24C31F.f_10)
	{
		if (((!unk_0xD92FE7FDA11C7334() && !unk_0x866EAD7E27D8D0F8()) && !func_16()) && !func_11(unk_0xB5CEFD608600A09F()))
		{
			unk_0x0AB03EBE7D95F108(0);
		}
		if (func_10())
		{
			if (!iLocal_97)
			{
				if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
				{
					unk_0xD434A01DEA38A939(unk_0xBC25C936A095B5BA(), true, 0);
					unk_0x346478B12F69D4E3(unk_0xBC25C936A095B5BA(), false);
				}
				else
				{
					iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
					if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
					{
						unk_0x346478B12F69D4E3(iVar0, false);
						unk_0x5EBD7EB63AD5FB1D(iVar0, 1, 0f, 0f, -1f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
						unk_0x204BA7B1C7DD25F4(unk_0xBC25C936A095B5BA(), iVar0, 20f, 786603);
						iLocal_99 = 1;
					}
				}
				iLocal_97 = 1;
			}
		}
		func_7();
		if (func_6(unk_0xB5CEFD608600A09F(), 0, 1))
		{
			if (!Global_24C31F.f_1C)
			{
				Global_24C31F.f_1D = unk_0xED678C85A82F0AB9();
				Global_24C31F.f_1C = 1;
			}
			switch (Global_24C31F)
			{
				case 0:
					if (!Global_24C31F.f_11)
					{
						Global_24C31F.f_1D = unk_0xED678C85A82F0AB9();
						Global_24C31F.f_11 = 1;
					}
					if (func_4() || func_3())
					{
						if (Global_24C31F.f_1A)
						{
							if (unk_0xEF0E25DA0CB6E8FF(iLocal_94))
							{
								unk_0x9CB4DD3D88846081(0, 0, 3, 0);
							}
							if (unk_0xEF0E25DA0CB6E8FF(iLocal_94))
							{
								unk_0x4EC087603E1DEF9C(iLocal_94, 1);
							}
						}
						return 1;
					}
					break;
				
				case 1:
					if ((func_4() || !func_2(-258271821)) || func_3())
					{
						if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
						{
							iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
							unk_0x346478B12F69D4E3(iVar0, false);
							unk_0x30034548191398D0(iVar0, true);
						}
						Global_24C31F.f_A = 1;
						iLocal_99 = 0;
						unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
						return 1;
					}
					break;
				
				case 2:
					if ((func_4() || !func_2(-1146898486)) || func_3())
					{
						unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
						iLocal_99 = 0;
						return 1;
					}
					else if (Global_24C31F.f_1B > 0)
					{
						if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 0)
						{
							unk_0x06348AD562D28C78(1f);
							unk_0x8CE2798B9A7027EC(unk_0xBC25C936A095B5BA(), 1193033728, 0);
						}
					}
					break;
				
				case 7:
					unk_0x522053D86D6E1C7A("GET_UP@DIRECTIONAL@TRANSITION@PRONE_TO_SEATED@INJURED");
					unk_0x522053D86D6E1C7A("get_up@directional@movement@from_seated@standard");
					if (unk_0xF9E082857622D91E("GET_UP@DIRECTIONAL@TRANSITION@PRONE_TO_SEATED@INJURED"))
					{
						if (!unk_0x96044E39418AAF17(unk_0xBC25C936A095B5BA(), "GET_UP@DIRECTIONAL@TRANSITION@PRONE_TO_SEATED@INJURED", "front", 3))
						{
							if (!unk_0x96044E39418AAF17(unk_0xBC25C936A095B5BA(), "get_up@directional@movement@from_seated@standard", "get_up_l_0", 3))
							{
								unk_0xE896C0AD02364F2A(unk_0xBC25C936A095B5BA(), "GET_UP@DIRECTIONAL@TRANSITION@PRONE_TO_SEATED@INJURED", "front", 8f, -8f, -1, 2, 0, 0, 0, 0);
							}
							else if (unk_0x4A3B2CF8BADDD74E(unk_0xBC25C936A095B5BA(), "get_up@directional@movement@from_seated@standard", "get_up_l_0") > 0.85f)
							{
								unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
								unk_0x4EA570997E107F35("GET_UP@DIRECTIONAL@TRANSITION@PRONE_TO_SEATED@INJURED");
								unk_0x4EA570997E107F35("get_up@directional@movement@from_seated@standard");
								iLocal_99 = 0;
								if (bLocal_100)
								{
									unk_0xC738E4BB7AAEF78D(4);
								}
								return 1;
							}
						}
						else if (unk_0x4A3B2CF8BADDD74E(unk_0xBC25C936A095B5BA(), "GET_UP@DIRECTIONAL@TRANSITION@PRONE_TO_SEATED@INJURED", "front") > 0.85f && unk_0xF9E082857622D91E("get_up@directional@movement@from_seated@standard"))
						{
							unk_0xE896C0AD02364F2A(unk_0xBC25C936A095B5BA(), "get_up@directional@movement@from_seated@standard", "get_up_l_0", 8f, -8f, -1, 2, 0, 0, 0, 0);
						}
						else if (unk_0x4A3B2CF8BADDD74E(unk_0xBC25C936A095B5BA(), "GET_UP@DIRECTIONAL@TRANSITION@PRONE_TO_SEATED@INJURED", "front") < 0.01f)
						{
							unk_0x8C2A518F01A59605(unk_0xBC25C936A095B5BA(), 1f, 0, 0);
						}
					}
					break;
				
				case 3:
					return 1;
					break;
				
				case 4:
				case 5:
					if (Global_24C31F.f_13)
					{
						return 1;
					}
					break;
				
				default:
					return 1;
					break;
				}
			}
	}
	return 0;
}

int func_2(int iParam0)//Position - 0x460
{
	int iVar0;
	
	iVar0 = unk_0xF4FCC3C1048FF2AB(unk_0xBC25C936A095B5BA(), iParam0);
	if (!iVar0 == 7)
	{
		return 1;
	}
	return 0;
}

int func_3()//Position - 0x481
{
	if (Global_24C31F.f_1C)
	{
		if (unk_0xC40EDFF7541407A8(unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), Global_24C31F.f_1D)) > 6000)
		{
			return 1;
		}
	}
	return 0;
}

int func_4()//Position - 0x4AF
{
	if (func_5(0))
	{
		return 1;
	}
	return 0;
}

int func_5(int iParam0)//Position - 0x4C4
{
	if (unk_0x8F0B060286933896(iParam0) < 2000)
	{
		return 1;
	}
	return 0;
}

int func_6(int iParam0, bool bParam1, bool bParam2)//Position - 0x4DD
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

void func_7()//Position - 0x527
{
	if (Global_24C31F == 0)
	{
		if (Global_24C31F.f_1A)
		{
			if (func_9())
			{
				if (!unk_0xEF0E25DA0CB6E8FF(iLocal_94))
				{
					if (unk_0xEF0E25DA0CB6E8FF(iLocal_95))
					{
						unk_0x4EC087603E1DEF9C(iLocal_95, 0);
					}
					iLocal_94 = unk_0x578D5D08EC980893("DEFAULT_SCRIPTED_CAMERA", false);
					func_8(Global_24C31F.f_19, iLocal_94);
					unk_0x2FB83B8BD6C05FD2(iLocal_94, "HAND_SHAKE", 0.2f);
					unk_0x348665177DBFB93B(iLocal_94, true);
					unk_0x062C9995BFD27B2A(true, false, 3000, 1, 0, 0);
				}
			}
		}
	}
}

void func_8(int iParam0, int iParam1)//Position - 0x598
{
	switch (iParam0)
	{
		case 0:
			unk_0x6125108F6208C1F6(iParam1, -1589.074f, -3015.353f, -74.8535f);
			unk_0x3553F2A72957724E(iParam1, -15.8449f, 0f, 78.0001f, 2);
			unk_0x9DF315A9EFFF87AC(iParam1, 25.1368f);
			break;
		
		case 2:
			unk_0x6125108F6208C1F6(iParam1, -1589.807f, -3008.426f, -74.9934f);
			unk_0x3553F2A72957724E(iParam1, -17.1168f, 0f, 104.7282f, 2);
			unk_0x9DF315A9EFFF87AC(iParam1, 34.7654f);
			break;
		
		case 4:
			unk_0x6125108F6208C1F6(iParam1, -1592.237f, -3008.188f, -78.166f);
			unk_0x3553F2A72957724E(iParam1, -3.025f, 0f, 121.1804f, 2);
			unk_0x9DF315A9EFFF87AC(iParam1, 35.9f);
			break;
	}
}

int func_9()//Position - 0x658
{
	switch (Global_24C31F.f_19)
	{
		case 0:
		case 2:
		case 4:
			return 1;
		
		default:
	}
	return 0;
}

int func_10()//Position - 0x682
{
	if (unk_0x17FAADF9916EF741())
	{
		return 0;
	}
	if (unk_0x7930B3E9C919E90F())
	{
		if (unk_0xFAB96FF5BAB29092() != 3)
		{
			if (unk_0x5935088CFB983803() > 9)
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_11(int iParam0)//Position - 0x6B9
{
	if (func_13(iParam0, 0))
	{
		return 1;
	}
	if (func_12())
	{
		if (iParam0 == unk_0xB5CEFD608600A09F())
		{
			return 1;
		}
	}
	if (unk_0xFA30DFD0084E92FE(Global_24FB5C[iParam0 /*406*/].f_BF, 2))
	{
		return 1;
	}
	return 0;
}

bool func_12()//Position - 0x6FB
{
	return unk_0xFA30DFD0084E92FE(Global_240006, 3);
}

bool func_13(int iParam0, int iParam1)//Position - 0x70C
{
	bool bVar0;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		bVar0 = func_14(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_18402B[iParam0 /*770*/].f_D3 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x96B1061E8F3CBC9A(iParam0))
		{
			bVar0 = unk_0x343CB262BF0CDF5A(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_14(int iParam0, bool bParam1)//Position - 0x757
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_15();
	}
	if (Global_140842[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1407DA[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_15()//Position - 0x798
{
	return Global_1407E0;
}

bool func_16()//Position - 0x7A4
{
	return Global_16B4F.f_142 > 0;
}

int func_17()//Position - 0x7B5
{
	if (Global_24C31F.f_12)
	{
		func_22();
		return 1;
	}
	if (func_21() || func_20())
	{
		func_22();
		return 1;
	}
	if ((func_19() && Global_24C31F != 6) && !Global_24C31F.f_1A)
	{
		func_22();
		return 1;
	}
	if (Global_24C31F.f_10 && Global_24C31F.f_F)
	{
		return 1;
	}
	else if (!Global_24C31F.f_14)
	{
		if (unk_0xB731B8C5BCE89836(joaat("spawn_activities")) == 0)
		{
			if (func_18("spawn_activities", 1424))
			{
				Global_24C31F.f_14 = 1;
			}
		}
	}
	else if (unk_0xB731B8C5BCE89836(joaat("spawn_activities")) == 0)
	{
		func_22();
		return 1;
	}
	if (unk_0xC40EDFF7541407A8(unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), Global_24C31F.f_3)) > 120000)
	{
		func_22();
		return 1;
	}
	unk_0xF0059F27F7BB6680(&(Global_195D63[1]), 22);
	return 0;
}

int func_18(char* sParam0, int iParam1)//Position - 0x8A0
{
	int iVar0;
	
	if (unk_0xE20974EBA7B8A3FD(sParam0))
	{
		unk_0x63831D2D5110C305(sParam0);
		if (unk_0xACE95AD318CE412B(sParam0))
		{
			if (iParam1 <= 0)
			{
				iParam1 = 512;
			}
			iVar0 = SYSTEM::START_NEW_SCRIPT(sParam0, iParam1);
			unk_0x91DEC7187FA01089(sParam0);
			return 1;
		}
	}
	return 0;
}

var func_19()//Position - 0x8E3
{
	return Global_255A46.f_2DC;
}

var func_20()//Position - 0x8F2
{
	return Global_258544;
}

var func_21()//Position - 0x8FE
{
	return Global_140852;
}

void func_22()//Position - 0x90A
{
	Global_24C31F.f_16 = -1;
	Global_24C31F.f_17 = -1;
}

void func_23()//Position - 0x920
{
	if (!Global_24C31F.f_16 > -1 || !Global_24C31F.f_17 > -1)
	{
		Global_24C31F.f_F = 1;
	}
	else
	{
		if (Global_24C31F.f_18 == 0)
		{
			if ((!func_39(Global_24C31F.f_16, Global_24C31F.f_17) || func_37(func_38(Global_24C31F.f_16, Global_24C31F.f_17), -1, 0) > 0) || Global_24C31F.f_1A)
			{
				if (func_39(Global_24C31F.f_16, Global_24C31F.f_17))
				{
					if (func_37(func_38(Global_24C31F.f_16, Global_24C31F.f_17), -1, 0) < 0)
					{
						func_36(func_38(Global_24C31F.f_16, Global_24C31F.f_17), 0, -1, 1, 0);
					}
					func_32(func_38(Global_24C31F.f_16, Global_24C31F.f_17), -1);
				}
				if (Global_24C31F.f_1A)
				{
					if (func_31())
					{
						func_30();
					}
					func_25(Global_24C31F.f_16, Global_24C31F.f_17, 1, 1, func_29(), 1, 0, 0, 0);
				}
				else
				{
					func_25(Global_24C31F.f_16, Global_24C31F.f_17, 1, 1, 1, 1, 0, 0, 0);
				}
				Global_24C31F.f_18++;
			}
			else
			{
				Global_24C31F.f_F = 1;
			}
		}
		if (Global_24C31F.f_18 == 1)
		{
			if ((func_24() || (Global_40E7E8 == -1 && Global_40E7E8.f_1 == -1)) || Global_40E7E8.f_3 == 0)
			{
				Global_24C31F.f_18++;
				Global_24C31F.f_F = 1;
			}
		}
	}
}

int func_24()//Position - 0xA9C
{
	if (Global_40E7E8.f_302 == 1)
	{
		return 1;
	}
	return 0;
}

void func_25(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0xAB4
{
	Global_40E7E8 = iParam0;
	Global_40E7E8.f_1 = iParam1;
	if (bParam3)
	{
		if (func_28(&Global_40E7E8))
		{
			func_27(&Global_40E7E8);
		}
	}
	Global_40E7E8.f_3 = 1;
	if (iParam4 || func_26(iParam0, iParam1))
	{
		Global_40E7E8.f_4 = 1;
	}
	Global_40E7E8.f_9 = iParam2;
	Global_40E7E8.f_D = iParam5;
	Global_40E7E8.f_E = iParam6;
	Global_40E7E8.f_F = iParam7;
	Global_40E7E8.f_33E = iParam8;
	if (unk_0xFA30DFD0084E92FE(Global_93D, 3))
	{
		Global_40E7E8.f_5 = 1;
	}
}

int func_26(int iParam0, int iParam1)//Position - 0xB3E
{
	switch (iParam0)
	{
		case 3:
			switch (iParam1)
			{
				case 3:
				case 4:
				case 5:
				case 6:
					return 1;
					break;
				
				case 7:
				case 8:
				case 9:
				case 10:
				case 11:
				case 12:
				case 13:
				case 14:
				case 15:
				case 16:
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
				case 23:
				case 24:
				case 25:
				case 26:
				case 27:
				case 28:
				case 29:
				case 30:
				case 31:
				case 32:
				case 33:
				case 34:
					return 1;
					break;
				
				case 0:
				default:
					return 0;
					break;
			}
			break;
	}
	return 0;
}

void func_27(var uParam0)//Position - 0xC39
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_37(func_38(2, 44), -1, 0);
	iVar1 = func_37(func_38(2, 43), -1, 0);
	iVar2 = func_37(func_38(2, 42), -1, 0);
	if (iVar0 > 0)
	{
		uParam0->f_1 = 44;
	}
	else if (iVar1 > 0)
	{
		uParam0->f_1 = 43;
	}
	else if (iVar2 > 0)
	{
		uParam0->f_1 = 42;
	}
}

int func_28(var uParam0)//Position - 0xC98
{
	if (*uParam0 == 2)
	{
		if ((uParam0->f_1 == 42 || uParam0->f_1 == 43) || uParam0->f_1 == 44)
		{
			return 1;
		}
	}
	return 0;
}

int func_29()//Position - 0xCD0
{
	switch (Global_24C31F.f_19)
	{
		case 0:
		case 2:
			return 0;
		
		case 1:
		case 3:
			return 1;
		
		case 4:
			switch (Global_14178A)
			{
				case 3:
				case 4:
					return 1;
				
				default:
			}
		
		default:
	}
	return 0;
}

void func_30()//Position - 0xD23
{
	int iVar0;
	
	switch (Global_24C31F.f_19)
	{
		case 0:
		case 2:
			Global_24C31F.f_17 = 36;
			break;
		
		case 4:
			switch (Global_14178A)
			{
				case 0:
				case 1:
					Global_24C31F.f_17 = 36;
					break;
				
				case 2:
					iVar0 = unk_0x491B2241281A03B7(0, 6);
					switch (iVar0)
					{
						case 0:
							Global_24C31F.f_17 = 30;
							break;
						
						case 1:
							Global_24C31F.f_17 = 32;
							break;
						
						case 2:
							Global_24C31F.f_17 = 33;
							break;
						
						case 3:
							Global_24C31F.f_17 = 35;
							break;
						
						case 4:
							Global_24C31F.f_17 = 37;
							break;
						
						case 5:
							Global_24C31F.f_17 = 38;
							break;
					}
					break;
				
				case 3:
				case 4:
					iVar0 = unk_0x491B2241281A03B7(0, 7);
					switch (iVar0)
					{
						case 0:
							Global_24C31F.f_17 = 36;
							break;
						
						case 1:
							Global_24C31F.f_17 = 30;
							break;
						
						case 2:
							Global_24C31F.f_17 = 32;
							break;
						
						case 3:
							Global_24C31F.f_17 = 33;
							break;
						
						case 4:
							Global_24C31F.f_17 = 35;
							break;
						
						case 5:
							Global_24C31F.f_17 = 37;
							break;
						
						case 6:
							Global_24C31F.f_17 = 38;
							break;
					}
					break;
			}
			break;
	}
}

int func_31()//Position - 0xE89
{
	if (Global_24C31F.f_17 == 2)
	{
		switch (Global_24C31F.f_17)
		{
			case 30:
			case 32:
			case 33:
			case 34:
			case 35:
			case 36:
			case 37:
			case 38:
				return 1;
			}
		
		default:
	}
	return 0;
}

void func_32(int iParam0, int iParam1)//Position - 0xEDB
{
	int iVar0;
	
	iVar0 = func_37(iParam0, func_35(iParam1), 0);
	iVar0++;
	if (!func_34(iParam0))
	{
		func_36(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_33(iParam0, iVar0, iParam1, 1);
	}
}

void func_33(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xF1C
{
	int iVar0;
	
	iVar0 = Global_269BC5[iParam0 /*3*/][func_35(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_14F606[func_35(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_14F60C[func_35(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_14F612[func_35(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_14F618[func_35(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_14F5EE[func_35(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_14F5F4[func_35(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_14F5FA[func_35(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_14F600[func_35(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_14F5D6[func_35(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_14F5DC[func_35(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_14F5E2[func_35(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_14F5E8[func_35(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_14F61E[func_35(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_14F624[func_35(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_14F62A[func_35(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_14F630[func_35(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_14F636[func_35(iParam2)] = iParam1;
			break;
		
		case 7229:
			Global_14F63C[func_35(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_14F642[func_35(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_14F648[func_35(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_270CF3[0 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_270CF3[1 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 2925:
			Global_270CF3[2 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_270CF3[3 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 7818:
			Global_270D5E[func_35(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_14F64E[func_35(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_14F654[func_35(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_14F65A[func_35(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_14F660[func_35(iParam2)] = iParam1;
			break;
		
		case 3049:
			Global_270D27[0 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 3050:
			Global_270D27[1 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 3051:
			Global_270D27[2 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 3052:
			Global_270D27[3 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_270D27[4 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 3632:
			Global_270D61[0 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 3633:
			Global_270D61[1 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 3634:
			Global_270D61[2 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 3635:
			Global_270D61[3 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_270D61[4 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_270D71[0 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_270D71[1 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_270D71[2 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_270D71[3 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_270D71[4 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_270D27[5 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_270CF3[4 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 3659:
			Global_270D81[func_35(iParam2)] = iParam1;
			break;
		
		case 3660:
			Global_270D8A[func_35(iParam2)] = iParam1;
			break;
		
		case 3661:
			Global_270D84[func_35(iParam2)] = iParam1;
			break;
		
		case 3662:
			Global_270D8D[func_35(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_270D87[func_35(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_270D90[func_35(iParam2)] = iParam1;
			break;
		
		case 3685:
			Global_270D93[func_35(iParam2)] = iParam1;
			break;
		
		case 3225:
			Global_270D27[6 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 3226:
			Global_270CF3[5 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_270D27[7 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 3228:
			Global_270CF3[6 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 4015:
			Global_270D27[8 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 4016:
			Global_270CF3[7 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 4018:
			Global_270D27[9 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_270CF3[8 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_270D27[10 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_270CF3[9 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_270D27[11 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_270CF3[10 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 6105:
			Global_270D27[12 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 6106:
			Global_270CF3[11 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 6163:
			Global_270D27[13 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 6164:
			Global_270CF3[12 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 6541:
			Global_270D27[14 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 6542:
			Global_270CF3[13 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 6554:
			Global_270D27[15 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 6555:
			Global_270CF3[14 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 6557:
			Global_270D27[16 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_270CF3[15 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_270D27[17 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_270CF3[16 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_34(int iParam0)//Position - 0x16D6
{
	if (Global_14F5C3)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
			case 777:
			case 778:
			case 779:
			case 780:
			case 767:
			case 768:
			case 769:
			case 770:
			case 757:
			case 758:
			case 759:
			case 760:
			case 1303:
			case 7229:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 1236:
			case 1876:
			case 2267:
			case 2925:
			case 3054:
			case 7818:
			case 3049:
			case 3050:
			case 3051:
			case 3052:
			case 3053:
			case 3228:
			case 3230:
			case 3632:
			case 3633:
			case 3634:
			case 3635:
			case 3636:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3223:
			case 3217:
			case 3659:
			case 3660:
			case 3661:
			case 3662:
			case 3663:
			case 3664:
			case 3685:
			case 3226:
			case 3225:
			case 4016:
			case 4015:
			case 4019:
			case 4018:
			case 4022:
			case 4021:
			case 4025:
			case 4024:
			case 6106:
			case 6105:
			case 6164:
			case 6163:
			case 6529:
			case 6528:
			case 6542:
			case 6541:
			case 6555:
			case 6554:
			case 6558:
			case 6557:
			case 6561:
			case 6560:
				return 1;
				break;
			}
	}
	return 0;
}

int func_35(var uParam0)//Position - 0x18CE
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_15();
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

void func_36(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x1902
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_35(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, iParam3);
	}
}

int func_37(int iParam0, int iParam1, int iParam2)//Position - 0x1932
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_35(iParam1)];
	if (unk_0x6CB99B97664C3727(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_38(int iParam0, int iParam1)//Position - 0x1964
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					return 1097;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 39:
					return 1097;
					break;
				
				case 40:
					return 62;
					break;
				
				case 41:
					return 63;
					break;
				
				case 42:
					return 1275;
					break;
				
				case 43:
					return 1276;
					break;
				
				case 44:
					return 1277;
					break;
			}
			break;
	}
	return 0;
}

int func_39(int iParam0, int iParam1)//Position - 0x19FB
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					return 1;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 39:
					if ((func_46(unk_0xB5CEFD608600A09F()) != -1 && func_44(func_46(unk_0xB5CEFD608600A09F()), 11)) && func_42() == 0)
					{
						return !func_40();
					}
					return 1;
					break;
				
				case 40:
				case 41:
				case 42:
				case 43:
				case 44:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

bool func_40()//Position - 0x1A9D
{
	return func_41(unk_0xB5CEFD608600A09F());
}

bool func_41(int iParam0)//Position - 0x1AAD
{
	return unk_0xFA30DFD0084E92FE(Global_24FB5C[iParam0 /*406*/].f_131.f_15, 13);
}

int func_42()//Position - 0x1AC9
{
	return func_43(unk_0xB5CEFD608600A09F());
}

int func_43(int iParam0)//Position - 0x1AD9
{
	return unk_0xA7C1E72EF76E439E(Global_24FB5C[iParam0 /*406*/].f_131.f_15, 28, 31);
}

bool func_44(int iParam0, int iParam1)//Position - 0x1AF6
{
	return func_45(iParam0) == iParam1;
}

int func_45(int iParam0)//Position - 0x1B07
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
	}
	return -1;
}

int func_46(int iParam0)//Position - 0x1E53
{
	if (iParam0 != func_47())
	{
		if (func_6(iParam0, 1, 1))
		{
			return Global_24FB5C[iParam0 /*406*/].f_131.f_1;
		}
		else if (((Global_140856 || Global_24B2CE.f_A64) && iParam0 == unk_0xB5CEFD608600A09F()) && func_6(iParam0, 1, 0))
		{
			return Global_24FB5C[iParam0 /*406*/].f_131.f_1;
		}
	}
	return -1;
}

int func_47()//Position - 0x1EC2
{
	return -1;
}

void func_48()//Position - 0x1ECB
{
	if (!Global_24C31F > -1)
	{
		Global_24C31F.f_10 = 1;
	}
	else
	{
		switch (Global_24C31F)
		{
			case 0:
				switch (Global_24C31F.f_1)
				{
					case 0:
						if (func_6(unk_0xB5CEFD608600A09F(), 0, 0))
						{
							Global_24C31F.f_10 = 1;
						}
						break;
				}
				break;
			
			case 1:
				if (Global_24C31F.f_1 == 0)
				{
					if (func_102())
					{
						Global_24C31F.f_2 = 0;
						Global_24C31F.f_8 = 1;
						Global_24C31F.f_B = 1;
						Global_24C31F.f_C = 1;
						Global_24C31F.f_9 = 1;
						Global_24C31F.f_1++;
					}
					else
					{
						Global_24C31F.f_10 = 1;
					}
				}
				if (Global_24C31F.f_1 == 1)
				{
					if (func_102())
					{
						if (func_6(unk_0xB5CEFD608600A09F(), 0, 0))
						{
							if (func_100(0))
							{
								Global_24C31F.f_1++;
							}
						}
					}
					else
					{
						Global_24C31F.f_10 = 1;
					}
				}
				if (Global_24C31F.f_1 == 2)
				{
					if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
					{
						Global_24C31F.f_10 = 1;
					}
				}
				break;
			
			case 2:
				if (func_6(unk_0xB5CEFD608600A09F(), 0, 0))
				{
					if (Global_24C31F.f_1B > 0)
					{
						unk_0x06348AD562D28C78(2f);
						unk_0x8CE2798B9A7027EC(unk_0xBC25C936A095B5BA(), 1193033728, 0);
					}
					else
					{
						unk_0x8CE2798B9A7027EC(unk_0xBC25C936A095B5BA(), 1193033728, 0);
					}
					iLocal_99 = 1;
					Global_24C31F.f_10 = 1;
				}
				break;
			
			case 7:
				if (func_6(unk_0xB5CEFD608600A09F(), 0, 0))
				{
					unk_0x522053D86D6E1C7A("GET_UP@DIRECTIONAL@TRANSITION@PRONE_TO_SEATED@INJURED");
					if (unk_0xF9E082857622D91E("GET_UP@DIRECTIONAL@TRANSITION@PRONE_TO_SEATED@INJURED"))
					{
						if (!unk_0x96044E39418AAF17(unk_0xBC25C936A095B5BA(), "GET_UP@DIRECTIONAL@TRANSITION@PRONE_TO_SEATED@INJURED", "front", 3))
						{
							unk_0xE896C0AD02364F2A(unk_0xBC25C936A095B5BA(), "GET_UP@DIRECTIONAL@TRANSITION@PRONE_TO_SEATED@INJURED", "front", 8f, -8f, -1, 2, 0, 0, 0, 0);
							iLocal_99 = 1;
						}
						else
						{
							unk_0x8C2A518F01A59605(unk_0xBC25C936A095B5BA(), 0f, 0, 0);
							if (unk_0x7FCE28BE45D0735E() == 4)
							{
								unk_0xC738E4BB7AAEF78D(1);
								bLocal_100 = true;
							}
							else
							{
								bLocal_100 = false;
							}
							unk_0xF3F01A78937DC905(160f);
							unk_0x2B9AEC08E469E384(0f, 1065353216);
							Global_24C31F.f_10 = 1;
						}
					}
				}
				break;
			
			case 3:
			case 4:
			case 5:
			case 6:
				if (func_6(unk_0xB5CEFD608600A09F(), 0, 0))
				{
					if (Global_24C31F.f_1 == 0)
					{
						func_99(Global_24C31F);
						if (!Global_24B2CE.f_A64 && !func_98())
						{
							Global_24B2CE.f_A61 = 1;
						}
						iLocal_101 = unk_0xED678C85A82F0AB9();
						Global_24C31F.f_1++;
					}
					if (Global_24C31F.f_1 == 1)
					{
						if (!func_96(Global_24C31F) || unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), iLocal_101) > 20000)
						{
							Global_24C31F.f_10 = 1;
							func_95();
						}
						else
						{
							Global_1413C8 = 1;
							if (!Global_24B2CE.f_A64 && !func_98())
							{
								func_49();
							}
							if (!iLocal_98)
							{
								unk_0x53BAAE26D201AAF0(8);
								unk_0x53BAAE26D201AAF0(2);
								iLocal_98 = 1;
							}
						}
					}
				}
				break;
			
			default:
				break;
			}
	}
}

void func_49()//Position - 0x2192
{
	int iVar0;
	struct<7> Var1;
	
	iVar0 = 19400;
	if ((((((unk_0xFA30DFD0084E92FE(Global_183ECC.f_16, 5) || unk_0xFA30DFD0084E92FE(Global_183ECC.f_16, 6)) || unk_0xFA30DFD0084E92FE(Global_183ECC.f_16, 8)) || unk_0xFA30DFD0084E92FE(Global_183ECC.f_16, 7)) || unk_0xFA30DFD0084E92FE(Global_183ECC.f_16, 9)) || unk_0xFA30DFD0084E92FE(Global_183ECC.f_16, 20)) || func_94())
	{
		if (!unk_0xFA30DFD0084E92FE(Global_100000.f_8, 0))
		{
			if (unk_0xB731B8C5BCE89836(joaat("am_mp_property_int")) <= 0 && !unk_0x18C4EA3345AA5A99("AM_MP_PROPERTY_INT", Global_100000.f_423, 1, 0))
			{
				unk_0x63831D2D5110C305("AM_MP_PROPERTY_INT");
				if (unk_0xACE95AD318CE412B("AM_MP_PROPERTY_INT"))
				{
					SYSTEM::START_NEW_SCRIPT("AM_MP_PROPERTY_INT", iVar0);
					unk_0x91DEC7187FA01089("AM_MP_PROPERTY_INT");
					unk_0xF0059F27F7BB6680(&(Global_100000.f_8), 0);
				}
			}
		}
	}
	else if (Global_24B2CE.f_A61)
	{
		if (!unk_0xFA30DFD0084E92FE(Global_100000.f_8, 0))
		{
			if (unk_0xB731B8C5BCE89836(joaat("am_mp_property_int")) <= 0 && !unk_0x18C4EA3345AA5A99("AM_MP_PROPERTY_INT", Global_100000.f_423, 1, 0))
			{
				unk_0x63831D2D5110C305("AM_MP_PROPERTY_INT");
				if (unk_0xACE95AD318CE412B("AM_MP_PROPERTY_INT"))
				{
					SYSTEM::START_NEW_SCRIPT("AM_MP_PROPERTY_INT", iVar0);
					unk_0x91DEC7187FA01089("AM_MP_PROPERTY_INT");
					unk_0xF0059F27F7BB6680(&(Global_100000.f_8), 0);
				}
			}
		}
	}
	else if (Global_183ECC.f_13 != 0 && func_93(unk_0xB5CEFD608600A09F(), 1, 0))
	{
		if (!unk_0xFA30DFD0084E92FE(Global_100000.f_8, 0))
		{
			if (unk_0xB731B8C5BCE89836(joaat("am_mp_property_int")) <= 0 && !unk_0x18C4EA3345AA5A99("AM_MP_PROPERTY_INT", Global_100000.f_423, 1, 0))
			{
				unk_0x63831D2D5110C305("AM_MP_PROPERTY_INT");
				if (unk_0xACE95AD318CE412B("AM_MP_PROPERTY_INT"))
				{
					SYSTEM::START_NEW_SCRIPT("AM_MP_PROPERTY_INT", iVar0);
					unk_0x91DEC7187FA01089("AM_MP_PROPERTY_INT");
					unk_0xF0059F27F7BB6680(&(Global_100000.f_8), 0);
				}
			}
		}
	}
	else if (Global_258238)
	{
		if (unk_0xB731B8C5BCE89836(joaat("am_mp_property_int")) <= 0 && !unk_0x18C4EA3345AA5A99("AM_MP_PROPERTY_INT", Global_100000.f_423, 1, 0))
		{
			unk_0x63831D2D5110C305("AM_MP_PROPERTY_INT");
			if (unk_0xACE95AD318CE412B("AM_MP_PROPERTY_INT"))
			{
				SYSTEM::START_NEW_SCRIPT("AM_MP_PROPERTY_INT", iVar0);
				unk_0x91DEC7187FA01089("AM_MP_PROPERTY_INT");
				unk_0xF0059F27F7BB6680(&(Global_100000.f_8), 0);
				Global_258238 = 0;
			}
		}
	}
	else if (((((!unk_0xFA30DFD0084E92FE(Global_100000.f_8, 0) && !unk_0xFA30DFD0084E92FE(Global_267214.f_17E.f_5, 3)) && (!Global_24B2CD || (Global_24B2CD && Global_255D53.f_1.f_B09.f_D > 0))) && !func_92()) && !func_87()) && !func_86())
	{
		if (unk_0xB731B8C5BCE89836(joaat("am_mp_property_int")) <= 0 && !unk_0x18C4EA3345AA5A99("AM_MP_PROPERTY_INT", Global_100000.f_423, 1, 0))
		{
			if (!func_85())
			{
				if (func_81())
				{
					unk_0x63831D2D5110C305("AM_MP_PROPERTY_INT");
					if (unk_0xACE95AD318CE412B("AM_MP_PROPERTY_INT"))
					{
						SYSTEM::START_NEW_SCRIPT("AM_MP_PROPERTY_INT", iVar0);
						unk_0x91DEC7187FA01089("AM_MP_PROPERTY_INT");
						unk_0xF0059F27F7BB6680(&(Global_100000.f_8), 0);
						unk_0xF0059F27F7BB6680(&(Global_183ECC.f_16), 12);
						return;
					}
					return;
				}
			}
			else
			{
				if (!func_80(Global_100000.f_422) && unk_0xF0F2FC9DE291567F(func_79(unk_0xB5CEFD608600A09F()), func_78(Global_100000.f_422), true) <= 30f)
				{
					if (func_76(&(Global_100449[Global_100000.f_422 /*1951*/]), 1, 0))
					{
						if (!Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_286)
						{
							unk_0x63831D2D5110C305("AM_MP_PROPERTY_INT");
							if (unk_0xACE95AD318CE412B("AM_MP_PROPERTY_INT"))
							{
								SYSTEM::START_NEW_SCRIPT("AM_MP_PROPERTY_INT", iVar0);
								unk_0x91DEC7187FA01089("AM_MP_PROPERTY_INT");
								unk_0xF0059F27F7BB6680(&(Global_100000.f_8), 0);
								unk_0xF0059F27F7BB6680(&(Global_183ECC.f_16), 12);
								return;
							}
							return;
						}
					}
					else
					{
						Var1 = { func_79(unk_0xB5CEFD608600A09F()) };
					}
				}
				if (func_72(Global_100000.f_422, 0, 0))
				{
					if (func_63(Global_100000.f_422, unk_0xB5CEFD608600A09F(), 0, 1) || func_76(&(Global_100449[Global_100000.f_422 /*1951*/]), 1, 0))
					{
						if (!Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_286)
						{
							unk_0x63831D2D5110C305("AM_MP_PROPERTY_INT");
							if (unk_0xACE95AD318CE412B("AM_MP_PROPERTY_INT"))
							{
								SYSTEM::START_NEW_SCRIPT("AM_MP_PROPERTY_INT", iVar0);
								unk_0x91DEC7187FA01089("AM_MP_PROPERTY_INT");
								unk_0xF0059F27F7BB6680(&(Global_100000.f_8), 0);
								unk_0xF0059F27F7BB6680(&(Global_183ECC.f_16), 12);
								return;
							}
							return;
						}
					}
				}
				if (unk_0xF0F2FC9DE291567F(func_79(unk_0xB5CEFD608600A09F()), func_62(2), true) <= 30f)
				{
					func_61(&Var1, 2);
					if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), Var1, Var1.f_3, Var1.f_6, 0, true, 0))
					{
						if (!Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_286)
						{
							unk_0x63831D2D5110C305("AM_MP_PROPERTY_INT");
							if (unk_0xACE95AD318CE412B("AM_MP_PROPERTY_INT"))
							{
								SYSTEM::START_NEW_SCRIPT("AM_MP_PROPERTY_INT", iVar0);
								unk_0x91DEC7187FA01089("AM_MP_PROPERTY_INT");
								unk_0xF0059F27F7BB6680(&(Global_100000.f_8), 0);
								unk_0xF0059F27F7BB6680(&(Global_183ECC.f_16), 12);
								return;
							}
							return;
						}
					}
				}
				if (unk_0xF0F2FC9DE291567F(func_79(unk_0xB5CEFD608600A09F()), func_62(6), true) <= 30f)
				{
					func_61(&Var1, 6);
					if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), Var1, Var1.f_3, Var1.f_6, 0, true, 0))
					{
						if (!Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_286)
						{
							unk_0x63831D2D5110C305("AM_MP_PROPERTY_INT");
							if (unk_0xACE95AD318CE412B("AM_MP_PROPERTY_INT"))
							{
								SYSTEM::START_NEW_SCRIPT("AM_MP_PROPERTY_INT", iVar0);
								unk_0x91DEC7187FA01089("AM_MP_PROPERTY_INT");
								unk_0xF0059F27F7BB6680(&(Global_100000.f_8), 0);
								unk_0xF0059F27F7BB6680(&(Global_183ECC.f_16), 12);
								return;
							}
							return;
						}
					}
				}
				if (unk_0xF0F2FC9DE291567F(func_79(unk_0xB5CEFD608600A09F()), func_62(10), true) <= 30f)
				{
					func_61(&Var1, 10);
					if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), Var1, Var1.f_3, Var1.f_6, 0, true, 0))
					{
						if (!Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_286)
						{
							unk_0x63831D2D5110C305("AM_MP_PROPERTY_INT");
							if (unk_0xACE95AD318CE412B("AM_MP_PROPERTY_INT"))
							{
								SYSTEM::START_NEW_SCRIPT("AM_MP_PROPERTY_INT", iVar0);
								unk_0x91DEC7187FA01089("AM_MP_PROPERTY_INT");
								unk_0xF0059F27F7BB6680(&(Global_100000.f_8), 0);
								unk_0xF0059F27F7BB6680(&(Global_183ECC.f_16), 12);
								return;
							}
							return;
						}
					}
				}
				Global_100000.f_422++;
				if (Global_100000.f_422 > 121 || unk_0xFA30DFD0084E92FE(Global_100000.f_8, 10))
				{
					Global_100000.f_422 = 0;
					Global_100000.f_424 = 0;
					if (unk_0xFA30DFD0084E92FE(Global_100000.f_8, 10))
					{
						unk_0x7CB6FD92BE491AD9(&(Global_100000.f_8), 10);
					}
					if (Global_255D53.f_1.f_B09.f_D != 0)
					{
						if ((!func_60() && !func_59()) && !unk_0x5F716E419581BD2A())
						{
							if ((!func_58() && !func_57()) && !func_56())
							{
								if ((!func_55() && !func_54()) && !func_53())
								{
									if (!func_52())
									{
										if (!func_51())
										{
											if (!Global_255D53.f_B1B.f_9D)
											{
												func_50();
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_50()//Position - 0x288D
{
	Global_255D53.f_1.f_B09.f_D = 0;
	Global_255D53.f_1.f_B09 = 0;
	Global_255D53.f_1.f_B09.f_1 = 0;
	Global_255D53.f_1.f_B09.f_2 = 0;
	Global_255D53.f_1.f_B09.f_3 = 0;
	Global_255D53.f_1.f_B09.f_4 = 0;
	Global_255D53.f_1.f_B09.f_5 = 0;
	Global_255D53.f_1.f_B09.f_6 = 0;
	Global_255D53.f_1.f_B09.f_7 = 0;
	Global_255D53.f_1.f_B09.f_8 = 0;
	Global_255D53.f_1.f_B09.f_9 = 0;
	Global_255D53.f_1.f_B09.f_A = 0;
	Global_255D53.f_1.f_B09.f_B = 0;
	Global_255D53.f_1.f_B09.f_C = 0;
}

bool func_51()//Position - 0x293B
{
	return Global_255A46.f_27B;
}

bool func_52()//Position - 0x294A
{
	return Global_255A46.f_2DD;
}

bool func_53()//Position - 0x2959
{
	return unk_0xFA30DFD0084E92FE(Global_255A46, 20);
}

bool func_54()//Position - 0x296B
{
	return unk_0xFA30DFD0084E92FE(Global_255A46, 2);
}

bool func_55()//Position - 0x297C
{
	return unk_0xFA30DFD0084E92FE(Global_255A46, 1);
}

bool func_56()//Position - 0x298D
{
	return Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_C4 != 0;
}

bool func_57()//Position - 0x29A4
{
	return Global_191873.f_3;
}

bool func_58()//Position - 0x29B2
{
	return Global_255A46.f_273;
}

bool func_59()//Position - 0x29C1
{
	return Global_255A46.f_243;
}

bool func_60()//Position - 0x29D0
{
	return Global_255A46.f_244;
}

struct<8> func_61(var uParam0, int iParam1)//Position - 0x29DF
{
	switch (iParam1)
	{
		case 2:
			*uParam0 = { 175.0434f, -998.7965f, -100.2256f };
			uParam0->f_3 = { 175.0878f, -1009.004f, -95.99992f };
			uParam0->f_6 = 14f;
			break;
		
		case 6:
			*uParam0 = { 212.9084f, -999.6776f, -99.99996f };
			uParam0->f_3 = { 189.6844f, -1000.068f, -95.2507f };
			uParam0->f_6 = 16.75f;
			break;
		
		case 10:
			*uParam0 = { 230.0094f, -1009.124f, -100.6539f };
			uParam0->f_3 = { 230.5939f, -964.022f, -94.53618f };
			uParam0->f_6 = 23.5f;
			break;
	}
	return *uParam0;
}

Vector3 func_62(int iParam0)//Position - 0x2AA1
{
	vector3 vVar0;
	
	switch (iParam0)
	{
		case 2:
			vVar0 = { 172.7787f, -1003.21f, -99.9999f };
			break;
		
		case 6:
			vVar0 = { 198.6071f, -1000.536f, -100f };
			break;
		
		case 10:
			vVar0 = { 227.8602f, -991.1093f, -99.9999f };
			break;
	}
	return vVar0;
}

int func_63(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x2B08
{
	struct<6> Var0[2];
	
	if (func_71(iParam0) || func_72(iParam0, 0, 0))
	{
		if (func_6(iParam1, 1, 1))
		{
			if (unk_0xF0F2FC9DE291567F(Global_100449[iParam0 /*1951*/].f_92.f_2F, func_79(unk_0xB5CEFD608600A09F()), !bParam2) <= 75f)
			{
				func_65(iParam0, 971, &(Var0[0 /*6*/]), func_70(iParam0), 1);
				func_65(iParam0, 972, &(Var0[1 /*6*/]), func_70(iParam0), 1);
				if (unk_0x0C265B3C448E6954(unk_0xA95CF30C72EB526E(iParam1), Var0[0 /*6*/], Var0[1 /*6*/], Var0[0 /*6*/].f_3.f_2, 0, true, 0))
				{
					return 1;
				}
				else if (bParam3)
				{
					return 0;
				}
				if (bParam2)
				{
					if (Var0[0 /*6*/].f_2 < Var0[1 /*6*/].f_2)
					{
						Var0[0 /*6*/].f_2 = (Var0[0 /*6*/].f_2 - 1000f);
					}
					else
					{
						Var0[1 /*6*/].f_2 = (Var0[1 /*6*/].f_2 - 1000f);
					}
					if (unk_0x0C265B3C448E6954(unk_0xA95CF30C72EB526E(iParam1), Var0[0 /*6*/], Var0[1 /*6*/], 30f, 0, true, 0))
					{
						return 1;
					}
					if (unk_0x17FAADF9916EF741())
					{
						return 1;
					}
				}
				if (func_64(unk_0xB5CEFD608600A09F()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_64(int iParam0)//Position - 0x2C43
{
	return unk_0xFA30DFD0084E92FE(Global_24FB5C[iParam0 /*406*/].f_C0, 5);
}

void func_65(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)//Position - 0x2C5B
{
	struct<6> Var0[2];
	vector3 vVar1;
	
	Var0[0 /*6*/] = { func_69(iParam3, bParam4) };
	Var0[1 /*6*/] = { func_69(iParam0, bParam4) };
	*uParam2 = { func_67(iParam1, iParam3) };
	vVar1 = { *uParam2 - Var0[0 /*6*/] };
	vVar1 = { func_66(vVar1, -Var0[0 /*6*/].f_3.f_2) };
	vVar1 = { func_66(vVar1, Var0[1 /*6*/].f_3.f_2) };
	*uParam2 = { unk_0x89D97EB4FAE4A574(Var0[1 /*6*/], 0f, vVar1) };
	switch (iParam1)
	{
		case 6:
		case 2:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 34:
		case 35:
		case 36:
		case 38:
		case 39:
		case 120:
		case 121:
		case 125:
		case 40:
		case 41:
		case 43:
		case 44:
		case 45:
		case 42:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 64:
		case 65:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 66:
		case 67:
		case 68:
		case 109:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 85:
		case 84:
		case 89:
		case 90:
		case 91:
		case 92:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 93:
		case 99:
		case 100:
		case 106:
		case 107:
		case 108:
		case 119:
		case 122:
		case 123:
		case 124:
		case 138:
		case 139:
		case 140:
		case 130:
		case 128:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
		case 148:
		case 153:
		case 154:
		case 155:
		case 157:
		case 234:
		case 174:
		case 175:
		case 176:
		case 177:
		case 178:
		case 179:
		case 180:
		case 235:
		case 149:
		case 150:
		case 151:
		case 152:
		case 172:
		case 187:
		case 173:
		case 201:
		case 188:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 196:
		case 197:
		case 198:
		case 199:
		case 200:
		case 284:
		case 285:
		case 286:
		case 287:
		case 202:
		case 203:
		case 204:
		case 205:
		case 206:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
		case 212:
		case 213:
		case 214:
		case 216:
		case 217:
		case 182:
		case 183:
		case 181:
		case 156:
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 243:
		case 244:
		case 245:
		case 246:
		case 247:
		case 248:
		case 249:
		case 250:
		case 251:
		case 252:
		case 253:
		case 254:
		case 255:
		case 256:
		case 257:
		case 258:
		case 259:
		case 260:
		case 261:
		case 262:
		case 263:
		case 264:
		case 265:
		case 266:
		case 267:
		case 268:
		case 269:
		case 270:
		case 271:
		case 272:
		case 273:
		case 274:
		case 275:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
	switch (iParam1)
	{
		case 278:
		case 279:
		case 280:
		case 281:
		case 282:
		case 283:
		case 300:
		case 301:
		case 302:
		case 303:
		case 304:
		case 306:
		case 305:
		case 308:
		case 309:
		case 312:
		case 313:
		case 314:
		case 315:
		case 316:
		case 317:
		case 318:
		case 319:
		case 320:
		case 321:
		case 322:
		case 323:
		case 324:
		case 325:
		case 326:
		case 327:
		case 328:
		case 329:
		case 307:
		case 331:
		case 332:
		case 333:
		case 334:
		case 310:
		case 335:
		case 336:
		case 337:
		case 338:
		case 339:
		case 311:
		case 340:
		case 435:
		case 436:
		case 437:
		case 470:
		case 477:
		case 504:
		case 507:
		case 510:
		case 513:
		case 528:
		case 531:
		case 534:
		case 537:
		case 540:
		case 547:
		case 445:
		case 446:
		case 447:
		case 448:
		case 449:
		case 450:
		case 471:
		case 472:
		case 478:
		case 479:
		case 505:
		case 506:
		case 508:
		case 509:
		case 511:
		case 512:
		case 514:
		case 515:
		case 529:
		case 530:
		case 532:
		case 533:
		case 535:
		case 536:
		case 538:
		case 539:
		case 541:
		case 542:
		case 548:
		case 549:
		case 432:
		case 433:
		case 434:
		case 451:
		case 452:
		case 453:
		case 454:
		case 455:
		case 456:
		case 459:
		case 460:
		case 461:
		case 462:
		case 463:
		case 464:
		case 560:
		case 546:
		case 587:
		case 588:
		case 589:
		case 590:
		case 591:
		case 592:
		case 501:
		case 502:
		case 500:
		case 616:
		case 615:
		case 612:
		case 629:
		case 630:
		case 631:
		case 714:
		case 633:
		case 634:
		case 635:
		case 636:
		case 637:
		case 638:
		case 639:
		case 640:
		case 643:
		case 644:
		case 641:
		case 642:
		case 646:
		case 645:
		case 647:
		case 648:
		case 649:
		case 650:
		case 666:
		case 667:
		case 668:
		case 669:
		case 670:
		case 671:
		case 673:
		case 674:
		case 675:
		case 676:
		case 677:
		case 689:
		case 690:
		case 691:
		case 692:
		case 693:
		case 694:
		case 695:
		case 696:
		case 697:
		case 698:
		case 699:
		case 700:
		case 701:
		case 702:
		case 703:
		case 704:
		case 705:
		case 706:
		case 707:
		case 708:
		case 709:
		case 710:
		case 711:
		case 712:
		case 713:
		case 632:
		case 738:
		case 739:
		case 740:
		case 741:
		case 742:
		case 743:
		case 744:
		case 745:
		case 746:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
	switch (iParam1)
	{
		case 715:
		case 716:
		case 717:
		case 718:
		case 719:
		case 720:
		case 721:
		case 722:
		case 723:
		case 724:
		case 725:
		case 726:
		case 727:
		case 728:
		case 729:
		case 730:
		case 731:
		case 732:
		case 733:
		case 734:
		case 735:
		case 736:
		case 737:
		case 747:
		case 748:
		case 749:
		case 750:
		case 751:
		case 752:
		case 753:
		case 754:
		case 755:
		case 756:
		case 757:
		case 758:
		case 759:
		case 760:
		case 761:
		case 762:
		case 763:
		case 764:
		case 765:
		case 766:
		case 767:
		case 768:
		case 769:
		case 770:
		case 771:
		case 772:
		case 773:
		case 774:
		case 775:
		case 776:
		case 777:
		case 778:
		case 779:
		case 780:
		case 781:
		case 782:
		case 783:
		case 784:
		case 785:
		case 786:
		case 787:
		case 788:
		case 789:
		case 790:
		case 791:
		case 792:
		case 793:
		case 794:
		case 795:
		case 796:
		case 797:
		case 798:
		case 799:
		case 800:
		case 802:
		case 801:
		case 803:
		case 804:
		case 805:
		case 806:
		case 807:
		case 808:
		case 809:
		case 678:
		case 679:
		case 680:
		case 681:
		case 682:
		case 683:
		case 684:
		case 685:
		case 810:
		case 811:
		case 812:
		case 813:
		case 814:
		case 815:
		case 817:
		case 816:
		case 819:
		case 818:
		case 820:
		case 821:
		case 822:
		case 823:
		case 824:
		case 825:
		case 826:
		case 827:
		case 828:
		case 829:
		case 830:
		case 831:
		case 832:
		case 833:
		case 834:
		case 835:
		case 836:
		case 837:
		case 838:
		case 839:
		case 840:
		case 841:
		case 842:
		case 843:
		case 844:
		case 845:
		case 846:
		case 847:
		case 848:
		case 849:
		case 850:
		case 851:
		case 852:
		case 853:
		case 854:
		case 855:
		case 856:
		case 686:
		case 687:
		case 688:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
	switch (iParam1)
	{
		case 857:
		case 858:
		case 859:
		case 860:
		case 861:
		case 862:
		case 863:
		case 864:
		case 865:
		case 866:
		case 867:
		case 868:
		case 869:
		case 870:
		case 871:
		case 872:
		case 873:
		case 874:
		case 875:
		case 876:
		case 877:
		case 878:
		case 879:
		case 880:
		case 881:
		case 882:
		case 883:
		case 884:
		case 888:
		case 889:
		case 890:
		case 891:
		case 651:
		case 652:
		case 653:
		case 654:
		case 655:
		case 656:
		case 657:
		case 658:
		case 659:
		case 660:
		case 661:
		case 662:
		case 663:
		case 664:
		case 665:
		case 887:
		case 894:
		case 895:
		case 896:
		case 897:
		case 898:
		case 899:
		case 900:
		case 901:
		case 902:
		case 903:
		case 904:
		case 905:
		case 906:
		case 907:
		case 908:
		case 911:
		case 913:
		case 914:
		case 915:
		case 916:
		case 917:
		case 918:
		case 919:
		case 920:
		case 921:
		case 922:
		case 923:
		case 924:
		case 925:
		case 926:
		case 927:
		case 928:
		case 929:
		case 930:
		case 931:
		case 932:
		case 954:
		case 955:
		case 956:
		case 957:
		case 958:
		case 959:
		case 968:
		case 969:
		case 970:
		case 973:
		case 974:
		case 975:
		case 976:
		case 977:
		case 978:
		case 979:
		case 980:
		case 981:
		case 982:
		case 983:
		case 984:
		case 985:
		case 986:
		case 987:
		case 988:
		case 989:
		case 990:
		case 1008:
		case 1009:
		case 1010:
		case 991:
		case 992:
		case 993:
		case 994:
		case 995:
		case 996:
		case 997:
		case 998:
		case 999:
		case 960:
		case 961:
		case 962:
		case 963:
		case 964:
		case 965:
		case 966:
		case 967:
		case 1000:
		case 1001:
		case 1002:
		case 1003:
		case 1004:
		case 1005:
		case 1006:
		case 1007:
		case 1011:
		case 1012:
		case 1013:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
}

Vector3 func_66(vector3 vParam0, float fParam1)//Position - 0x4119
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = SYSTEM::SIN(fParam1);
	fVar2 = SYSTEM::COS(fParam1);
	vVar0.x = ((vParam0.x * fVar2) - (vParam0.y * fVar1));
	vVar0.y = ((vParam0.x * fVar1) + (vParam0.y * fVar2));
	vVar0.z = vParam0.z;
	return vVar0;
}

struct<6> func_67(var uParam0, int iParam1)//Position - 0x415D
{
	struct<6> Var0;
	var uVar1;
	int iVar2;
	
	iVar2 = 0;
	if (func_68(iParam1, &uVar1))
	{
		iVar2 = 1;
	}
	if (iVar2 && unk_0x7C8EDC49D8CFCC77(&Var0, &(Var0.f_3), uParam0, uVar1))
	{
		return Var0;
	}
	return Var0;
}

int func_68(int iParam0, var uParam1)//Position - 0x419F
{
	switch (iParam0)
	{
		case -1:
		case 1:
			*uParam1 = 0;
			StringCopy(&(uParam1->f_1), "BaseElementLocationsMap", 64);
			return 1;
			break;
		
		case 61:
			*uParam1 = 1;
			StringCopy(&(uParam1->f_1), "BaseElementLocationsMap_HighApt", 64);
			return 1;
			break;
		
		case 73:
			*uParam1 = 2;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap1", 64);
			return 1;
			break;
		
		case 77:
			*uParam1 = 3;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap2", 64);
			return 1;
			break;
		
		case 83:
			*uParam1 = 4;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap3", 64);
			return 1;
			break;
		
		case 86:
			*uParam1 = 5;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap4", 64);
			return 1;
			break;
		
		case 88:
			*uParam1 = 6;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap5", 64);
			return 1;
			break;
		
		case 91:
			*uParam1 = 7;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap6", 64);
			return 1;
			break;
		
		case 97:
			*uParam1 = 8;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap7", 64);
			return 1;
			break;
		
		case 109:
			*uParam1 = 9;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap8", 64);
			return 1;
			break;
	}
	return 0;
}

struct<6> func_69(int iParam0, bool bParam1)//Position - 0x42C2
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case -1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 2:
			Var0 = { -761.0982f, 317.6259f, 169.5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { -761.1888f, 317.6295f, 216.0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { -795.3856f, 340.0188f, 152.7941f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 61:
			Var0 = { -778.5056f, 332.3779f, 212.1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 5:
			Var0 = { -258.1807f, -950.6853f, 70.0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 6:
			Var0 = { -285.0051f, -957.6552f, 85.3035f };
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		
		case 7:
			Var0 = { -1471.882f, -530.7484f, 62.34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 34:
			Var0 = { -1471.882f, -530.7484f, 49.72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 62:
			Var0 = { -1463.15f, -540.2369f, 74.2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 35:
			Var0 = { -885.3702f, -451.4775f, 119.327f };
			Var0.f_3 = { 0f, 0f, 27.55617f };
			break;
		
		case 36:
			Var0 = { -913.0385f, -438.4284f, 114.3997f };
			Var0.f_3 = { 0f, 0f, -153.3093f };
			break;
		
		case 37:
			Var0 = { -892.5499f, -430.4789f, 88.25368f };
			Var0.f_3 = { 0f, 0f, 116.9193f };
			break;
		
		case 38:
			Var0 = { -35.0462f, -576.317f, 82.90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 39:
			Var0 = { -10.3788f, -590.7431f, 93.02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 65:
			Var0 = { -22.2487f, -589.1461f, 80.2305f };
			Var0.f_3 = { 0f, 0f, 69.88f };
			break;
		
		case 40:
			Var0 = { -900.6311f, -376.7462f, 78.27306f };
			Var0.f_3 = { 0f, 0f, 26.92611f };
			break;
		
		case 41:
			Var0 = { -929.483f, -374.5104f, 102.2329f };
			Var0.f_3 = { 0f, 0f, -152.5531f };
			break;
		
		case 63:
			Var0 = { -914.4202f, -375.8189f, 114.4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 42:
			Var0 = { -617.1647f, 64.6042f, 100.8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 43:
			Var0 = { -584.2015f, 42.7133f, 86.4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { -609.5665f, 50.2203f, 98.3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 73:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		
		case 74:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = { 0f, 0f, -63.5f };
			break;
		
		case 75:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = { 0f, 0f, -71.5f };
			break;
		
		case 76:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = { 0f, 0f, 40.5f };
			break;
		
		case 77:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		
		case 78:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = { 0f, 0f, -14.5f };
			break;
		
		case 79:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		
		case 80:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = { 0f, 0f, 4.5f };
			break;
		
		case 81:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 82:
			Var0 = { 374.2012f, 416.9688f, 142.6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		
		case 83:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 84:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 85:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 86:
			Var0 = { -1573.098f, -4085.806f, 9.7851f };
			Var0.f_3 = { 0f, 0f, 162f };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342.8157f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260.3297f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 87:
			Var0 = { -1572.187f, -570.8315f, 109.9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		
		case 88:
			Var0 = { -1383.954f, -476.7112f, 73.507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		
		case 89:
			Var0 = { -138.0029f, -629.739f, 170.2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		
		case 90:
			Var0 = { -74.8895f, -817.6883f, 244.8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			Var0 = { 1100.764f, -3159.384f, -34.9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var0 = { 1005.806f, -3157.67f, -36.0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 103:
			if (!bParam1)
			{
				Var0 = { -1576.571f, -569.7595f, 85.5f };
				Var0.f_3 = { 0f, 0f, 36.1f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 104:
			if (!bParam1)
			{
				Var0 = { -1571.254f, -566.5865f, 85.5f };
				Var0.f_3 = { 0f, 0f, -53.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 105:
			if (!bParam1)
			{
				Var0 = { -1568.098f, -571.9171f, 85.5f };
				Var0.f_3 = { 0f, 0f, -143.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 106:
			if (!bParam1)
			{
				Var0 = { -1384.518f, -475.8657f, 56.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 107:
			if (!bParam1)
			{
				Var0 = { -1384.538f, -475.8829f, 48.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 108:
			if (!bParam1)
			{
				Var0 = { -1378.994f, -477.2481f, 56.1f };
				Var0.f_3 = { 0f, 0f, -81.1f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 109:
			if (!bParam1)
			{
				Var0 = { -186.5683f, -576.4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96.16f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 110:
			if (!bParam1)
			{
				Var0 = { -113.886f, -564.3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110.96f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 111:
			if (!bParam1)
			{
				Var0 = { -134.6568f, -635.1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9.04f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 112:
			if (!bParam1)
			{
				Var0 = { -79.0479f, -822.6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 113:
			if (!bParam1)
			{
				Var0 = { -70.3086f, -819.5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 114:
			if (!bParam1)
			{
				Var0 = { -79.9861f, -818.425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}
	return Var0;
}

int func_70(int iParam0)//Position - 0x4E78
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return 1;
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 69:
		case 68:
		case 66:
		case 67:
			return 8;
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			return 17;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			return 61;
			break;
		
		case 73:
		case 74:
		case 75:
		case 76:
			return 73;
			break;
		
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
			return 77;
			break;
		
		case 83:
		case 84:
		case 85:
			return 83;
			break;
		
		case 86:
			return 86;
			break;
		
		case 87:
		case 88:
		case 89:
		case 90:
			return 88;
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			return 91;
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			return 97;
			break;
		
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 109;
			break;
	}
	return -1;
}

int func_71(int iParam0)//Position - 0x50B5
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_72(int iParam0, bool bParam1, bool bParam2)//Position - 0x50E4
{
	if (bParam2)
	{
		return func_73(unk_0xB5CEFD608600A09F(), 0);
	}
	if (bParam1)
	{
		if (func_73(unk_0xB5CEFD608600A09F(), 0))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return 1;
				break;
			}
	}
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 1;
			break;
	}
	return 0;
}

bool func_73(int iParam0, bool bParam1)//Position - 0x51BF
{
	if (Global_183F8E != func_47())
	{
		if (!func_75(Global_183F8E))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0xB5CEFD608600A09F() != Global_183F8E)
			{
				if (unk_0xFA30DFD0084E92FE(Global_24FB5C[Global_183F8E /*406*/].f_BF, 24) || func_74(Global_183F8E))
				{
					return 1;
				}
			}
		}
	}
	return unk_0xFA30DFD0084E92FE(Global_24FB5C[iParam0 /*406*/].f_BF, 24);
}

int func_74(int iParam0)//Position - 0x522B
{
	if (iParam0 != func_47())
	{
		return unk_0xFA30DFD0084E92FE(Global_24FB5C[iParam0 /*406*/].f_BF, 9);
	}
	return 0;
}

int func_75(int iParam0)//Position - 0x5251
{
	if (iParam0 != func_47())
	{
		return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_146, 2);
	}
	return 0;
}

int func_76(var uParam0, int iParam1, float fParam2)//Position - 0x527D
{
	vector3 vVar0;
	
	if (iParam1 == 2 && !func_77(uParam0->f_1F, -1))
	{
		if (unk_0xF0F2FC9DE291567F(func_79(unk_0xB5CEFD608600A09F()), uParam0->f_6CE.f_96, true) <= 30f)
		{
			if (unk_0x7352105EC4D7541F(func_79(unk_0xB5CEFD608600A09F()), uParam0->f_6CE.f_99, uParam0->f_6CE.f_99.f_3, uParam0->f_6CE.f_99.f_6, 0, true))
			{
				return 1;
			}
		}
	}
	else
	{
		vVar0 = { func_79(unk_0xB5CEFD608600A09F()) };
		if (unk_0xF0F2FC9DE291567F(func_79(unk_0xB5CEFD608600A09F()), uParam0->f_92.f_2F, true) <= 40f)
		{
			if ((unk_0x7352105EC4D7541F(func_79(unk_0xB5CEFD608600A09F()), uParam0->f_92.f_39[0 /*8*/], uParam0->f_92.f_39[0 /*8*/].f_3, uParam0->f_92.f_39[0 /*8*/].f_6, 0, true) || unk_0x7352105EC4D7541F(func_79(unk_0xB5CEFD608600A09F()), uParam0->f_92.f_39[1 /*8*/], uParam0->f_92.f_39[1 /*8*/].f_3, uParam0->f_92.f_39[1 /*8*/].f_6, 0, true)) || unk_0x7352105EC4D7541F(func_79(unk_0xB5CEFD608600A09F()), uParam0->f_92.f_39[2 /*8*/], uParam0->f_92.f_39[2 /*8*/].f_3, uParam0->f_92.f_39[2 /*8*/].f_6, 0, true))
			{
				return 1;
			}
			else if (unk_0xF0F2FC9DE291567F(vVar0, uParam0->f_92.f_638, true) < (uParam0->f_92.f_63B + fParam2) && (vVar0.z > uParam0->f_92.f_39[2 /*8*/].f_2 && vVar0.z < uParam0->f_92.f_39[2 /*8*/].f_3.f_2))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_77(int iParam0, int iParam1)//Position - 0x5413
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

Vector3 func_78(int iParam0)//Position - 0x54F0
{
	vector3 vVar0;
	vector3 vVar1;
	
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			vVar1 = { Global_100449[iParam0 /*1951*/].f_92.f_2F };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			vVar1 = { 348.132f, -997.2031f, -100.1741f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			vVar1 = { 264.3808f, -997.7274f, -100.0087f };
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			vVar1 = { Global_100449[iParam0 /*1951*/].f_92.f_2F };
			break;
		
		case 73:
		case 74:
		case 75:
		case 76:
			vVar1 = { Global_100449[iParam0 /*1951*/].f_92.f_2F };
			break;
		
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
			vVar1 = { Global_100449[iParam0 /*1951*/].f_92.f_2F };
			break;
		
		case 83:
		case 84:
		case 85:
			vVar1 = { Global_100449[iParam0 /*1951*/].f_92.f_2F };
			break;
		
		case 86:
			func_65(iParam0, 3, &vVar0, 86, 0);
			vVar1 = { vVar0 };
			break;
		
		case 87:
		case 88:
		case 89:
		case 90:
			vVar1 = { Global_100449[iParam0 /*1951*/].f_92.f_2F };
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			vVar1 = { Global_100449[iParam0 /*1951*/].f_92.f_2F };
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			vVar1 = { Global_100449[iParam0 /*1951*/].f_92.f_2F };
			break;
	}
	return vVar1;
}

Vector3 func_79(int iParam0)//Position - 0x57B8
{
	return unk_0x541C2AEF053615BC(unk_0xA95CF30C72EB526E(iParam0), false);
}

int func_80(int iParam0)//Position - 0x57CB
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			return 0;
		
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
		case 112:
		case 113:
		case 114:
		case 115:
		case 116:
		case 117:
		case 118:
		case 119:
		case 120:
		case 121:
			return 1;
		
		default:
	}
	return 0;
}

int func_81()//Position - 0x5AC3
{
	if (func_83(Global_100000.f_424))
	{
		if (unk_0xF0F2FC9DE291567F(func_79(unk_0xB5CEFD608600A09F()), Global_3C07A7[Global_100000.f_424 /*2012*/].f_92.f_2F, true) <= 30f)
		{
			if (func_82(unk_0xB5CEFD608600A09F(), 0, 0))
			{
				if (!Global_24B2CE.f_A61 && !Global_24B2CE.f_A63)
				{
					return 0;
				}
			}
			if (func_76(&(Global_3C07A7[Global_100000.f_424 /*2012*/]), 1, 0))
			{
				if (!Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_286)
				{
					return 1;
				}
			}
		}
	}
	Global_100000.f_424++;
	if (Global_100000.f_424 >= 36)
	{
		Global_100000.f_424 = -1;
	}
	return 0;
}

int func_82(int iParam0, bool bParam1, int iParam2)//Position - 0x5B84
{
	if (Global_24FB5C[iParam0 /*406*/].f_DA == 99)
	{
		if ((iParam2 && Global_24FB5C[iParam0 /*406*/].f_DD == 0) || iParam2 == 0)
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (Global_24FB5C[iParam0 /*406*/].f_DA == 13)
		{
			return 0;
		}
	}
	return 1;
}

int func_83(int iParam0)//Position - 0x5BDB
{
	if (func_84(iParam0))
	{
		return Global_269326.f_2[iParam0];
	}
	return 0;
}

int func_84(int iParam0)//Position - 0x5BFA
{
	if (iParam0 > -1 && iParam0 < 36)
	{
		return 1;
	}
	return 0;
}

int func_85()//Position - 0x5C18
{
	if (Global_100000.f_424 == -1)
	{
		return 1;
	}
	return 0;
}

bool func_86()//Position - 0x5C30
{
	return Global_197055.f_1C;
}

int func_87()//Position - 0x5C3E
{
	if ((unk_0x517823CA390A19F6() && ((func_59() || func_60()) || (func_56() && func_91() <= 21))) && func_88())
	{
		return 1;
	}
	return 0;
}

int func_88()//Position - 0x5C84
{
	if (unk_0x517823CA390A19F6())
	{
		return func_90();
	}
	return func_89(Global_440000.f_1EF38);
}

int func_89(int iParam0)//Position - 0x5CA8
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_40001.f_1373[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_90()//Position - 0x5CE2
{
	return Global_255A46.f_E;
}

int func_91()//Position - 0x5CF0
{
	return Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_C4;
}

int func_92()//Position - 0x5D05
{
	if (Global_255D53.f_17C9 && !Global_258237)
	{
		return 1;
	}
	return 0;
}

int func_93(int iParam0, bool bParam1, bool bParam2)//Position - 0x5D26
{
	if (iParam0 == func_47())
	{
		return 0;
	}
	if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_13, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_13, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
		{
			return 1;
		}
	}
	return 0;
}

var func_94()//Position - 0x5D90
{
	return Global_255D53.f_1.f_B17;
}

void func_95()//Position - 0x5DA1
{
	Global_24C31F.f_E = 0;
}

int func_96(int iParam0)//Position - 0x5DB0
{
	if (iParam0 == func_97())
	{
		return Global_24C31F.f_E;
	}
	return 0;
}

int func_97()//Position - 0x5DCB
{
	return Global_24C31F;
}

bool func_98()//Position - 0x5DD7
{
	return Global_197055.f_F != -1;
}

void func_99(int iParam0)//Position - 0x5DE7
{
	if (iParam0 == func_97())
	{
		Global_24C31F.f_E = 1;
	}
}

int func_100(int iParam0)//Position - 0x5E02
{
	if (func_102())
	{
		if (Global_24C31F.f_2 == 0)
		{
			Global_24C31F.f_6 = 1;
			Global_24C31F.f_4 = iParam0;
			Global_24C31F.f_2++;
		}
		if (Global_24C31F.f_2 == 1)
		{
			if (!Global_24C31F.f_6)
			{
				Global_24C31F.f_2 = 0;
				func_101();
				return 1;
			}
		}
	}
	return 0;
}

void func_101()//Position - 0x5E5C
{
	Global_24C31F.f_8 = 1;
	Global_24C31F.f_B = 0;
	Global_24C31F.f_C = 0;
	Global_24C31F.f_4 = 1;
	Global_24C31F.f_9 = 0;
	Global_24C31F.f_2 = 0;
}

int func_102()//Position - 0x5E8E
{
	int iVar0;
	
	iVar0 = func_135();
	if ((((((iVar0 > -1 && !Global_1425AC[iVar0 /*141*/].f_42 == 0) && !unk_0xFA30DFD0084E92FE(Global_1425AC[iVar0 /*141*/].f_66, 1)) && !unk_0xFA30DFD0084E92FE(Global_1425AC[iVar0 /*141*/].f_66, 6)) && !func_134(0)) && !func_134(31)) && func_103())
	{
		return 1;
	}
	return 0;
}

int func_103()//Position - 0x5F07
{
	int iVar0;
	
	iVar0 = func_133();
	if (((((((((((((((((((((((((((func_132() || func_131()) || func_124()) || (func_123() && !func_121())) || (func_56() && !func_120())) || func_119(unk_0xB5CEFD608600A09F())) || func_118(unk_0xB5CEFD608600A09F())) || func_117(unk_0xB5CEFD608600A09F())) || func_116()) || func_113()) || func_112()) || func_111()) || func_110()) || (func_109() && !func_120())) || (func_12() && !func_6(unk_0xB5CEFD608600A09F(), 1, 0))) || func_13(unk_0xB5CEFD608600A09F(), 0)) || Global_18402B[unk_0xB5CEFD608600A09F() /*770*/] == 10) || Global_18402B[unk_0xB5CEFD608600A09F() /*770*/] == 11) || Global_18402B[unk_0xB5CEFD608600A09F() /*770*/] == 12) || Global_18402B[unk_0xB5CEFD608600A09F() /*770*/] == 13) || Global_18402B[unk_0xB5CEFD608600A09F() /*770*/] == 14) || Global_18402B[unk_0xB5CEFD608600A09F() /*770*/] == 15) || Global_18402B[unk_0xB5CEFD608600A09F() /*770*/] == 1) || Global_18402B[unk_0xB5CEFD608600A09F() /*770*/] == 3) || Global_18402B[unk_0xB5CEFD608600A09F() /*770*/] == 8) || Global_18402B[unk_0xB5CEFD608600A09F() /*770*/] == 122) || func_108()) || (func_107() && (func_106() || func_104())))
	{
		return 0;
	}
	else if (iVar0 != -1)
	{
		if (((((((((Global_18402B[iVar0 /*770*/] == 10 || Global_18402B[iVar0 /*770*/] == 11) || Global_18402B[iVar0 /*770*/] == 12) || Global_18402B[iVar0 /*770*/] == 13) || Global_18402B[iVar0 /*770*/] == 14) || Global_18402B[iVar0 /*770*/] == 15) || Global_18402B[iVar0 /*770*/] == 1) || Global_18402B[iVar0 /*770*/] == 3) || Global_18402B[iVar0 /*770*/] == 8) || Global_18402B[iVar0 /*770*/] == 122)
		{
			return 0;
		}
	}
	return 1;
}

int func_104()//Position - 0x619F
{
	if (func_105() == 1 || func_105() == 4)
	{
		return 1;
	}
	return 0;
}

int func_105()//Position - 0x61C1
{
	return Global_1406D2.f_12;
}

int func_106()//Position - 0x61CF
{
	if (func_105() == 3 || func_105() == 2)
	{
		return 1;
	}
	return 0;
}

bool func_107()//Position - 0x61F1
{
	return unk_0xFA30DFD0084E92FE(Global_255D53.f_1.f_AF9, 5);
}

int func_108()//Position - 0x6207
{
	if (((Global_193981 && !Global_18402B[unk_0xB5CEFD608600A09F() /*770*/] == 6) && !Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_1FD >= 0) && !Global_193982)
	{
		return 1;
	}
	return 0;
}

var func_109()//Position - 0x624E
{
	return Global_255A46.f_2C9;
}

var func_110()//Position - 0x625D
{
	return Global_255A46.f_261;
}

bool func_111()//Position - 0x626C
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_27.f_12, 14);
}

var func_112()//Position - 0x6289
{
	return Global_1805D3;
}

int func_113()//Position - 0x6295
{
	if (func_115(unk_0xB5CEFD608600A09F()) || func_114(unk_0xB5CEFD608600A09F()))
	{
		if (func_91() == 25)
		{
			return 1;
		}
	}
	return 0;
}

bool func_114(int iParam0)//Position - 0x62C4
{
	return Global_24FB5C[iParam0 /*406*/].f_6F == 7;
}

bool func_115(int iParam0)//Position - 0x62D9
{
	return Global_24FB5C[iParam0 /*406*/].f_6F == 2;
}

bool func_116()//Position - 0x62EE
{
	return unk_0xFA30DFD0084E92FE(Global_255A46.f_22D.f_1, 0);
}

bool func_117(int iParam0)//Position - 0x6304
{
	return Global_24FB5C[iParam0 /*406*/].f_6F == 4;
}

bool func_118(int iParam0)//Position - 0x6319
{
	return Global_24FB5C[iParam0 /*406*/].f_6F == 6;
}

bool func_119(int iParam0)//Position - 0x632E
{
	return Global_24FB5C[iParam0 /*406*/].f_6F == 5;
}

bool func_120()//Position - 0x6343
{
	return Global_255A46.f_23.f_32;
}

int func_121()//Position - 0x6353
{
	if (func_122())
	{
		return 1;
	}
	if ((Global_24B2CE.f_1A.f_6 > 0 && !Global_24B2CE.f_1A.f_7) && !Global_24B2CE.f_1A.f_4)
	{
		return 1;
	}
	return 0;
}

bool func_122()//Position - 0x6394
{
	return Global_14083F;
}

var func_123()//Position - 0x63A0
{
	return Global_24B2CE.f_1A.f_1;
}

int func_124()//Position - 0x63B0
{
	if (func_135() > -1)
	{
		if ((func_115(unk_0xB5CEFD608600A09F()) || func_114(unk_0xB5CEFD608600A09F())) || (func_128() && unk_0x517823CA390A19F6()))
		{
			if (func_127(Global_1425AC[func_135() /*141*/].f_42) || (func_126(Global_1425AC[func_135() /*141*/].f_42) && func_125(Global_1425AC[func_135() /*141*/].f_42)))
			{
				return 1;
			}
		}
	}
	return Global_24B2CE.f_1A;
}

int func_125(int iParam0)//Position - 0x6434
{
	switch (iParam0)
	{
		case 562680400:
			return Global_40001.f_5090;
		
		case 159274291:
			return Global_40001.f_5091;
		
		case 433954513:
			return Global_40001.f_5092;
		
		case -1924433270:
			return Global_40001.f_5093;
		
		case 1356124575:
			return Global_40001.f_5094;
		
		case -32236122:
			return Global_40001.f_5095;
		
		case -1881846085:
			return Global_40001.f_5096;
		
		case -1210451983:
			return Global_40001.f_5097;
		
		case 1897744184:
			return Global_40001.f_5098;
		
		case 884483972:
			return Global_40001.f_5099;
		
		case -1242608589:
			return Global_40001.f_54D0;
		
		case 1489874736:
			return Global_40001.f_56FE;
		
		case 1483171323:
			return Global_40001.f_56FF;
			break;
		
		case 886810209:
			return Global_40001.f_5700;
		
		case -1693015116:
			return Global_40001.f_5701;
		
		case -692292317:
			return Global_40001.f_5702;
		
		case -212993243:
			return Global_40001.f_5703;
		
		case -1435527158:
			return Global_40001.f_5704;
		
		case 1561920505:
			return Global_40001.f_5705;
		
		case 903794909:
			return Global_40001.f_5706;
		
		case -410205223:
			return Global_40001.f_5708;
		
		case -2118308144:
			return Global_40001.f_5709;
		
		case 447548909:
			return Global_40001.f_570A;
		
		case 1181327175:
			return Global_40001.f_570B;
		
		case 2069146067:
			return Global_40001.f_570C;
		
		case -638562243:
			return Global_40001.f_570D;
	}
	if (iParam0 == -391595372)
	{
		return Global_40001.f_5707;
	}
	return 0;
}

int func_126(int iParam0)//Position - 0x65FB
{
	switch (iParam0)
	{
		case 562680400:
		case -32236122:
		case 1897744184:
		case 884483972:
		case -1210451983:
		case -1881846085:
		case 1502869817:
		case 1356124575:
		case -1924433270:
		case 177270108:
		case 159274291:
		case 433954513:
		case 387748548:
		case -769147461:
		case -1242608589:
		case 1489874736:
		case 1483171323:
		case 886810209:
		case -1693015116:
		case -692292317:
		case -212993243:
		case -1435527158:
		case -2118308144:
		case 447548909:
		case 1181327175:
		case 1254014755:
		case 2044532910:
		case -638562243:
		case 2069146067:
			return 1;
		
		default:
	}
	return 0;
}

int func_127(int iParam0)//Position - 0x66BD
{
	switch (iParam0)
	{
		case joaat("voltic2"):
		case joaat("ruiner2"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("phantom2"):
		case joaat("technical2"):
		case joaat("blazer5"):
		case joaat("boxville5"):
		case joaat("wastelander"):
			return 1;
		
		default:
	}
	return 0;
}

int func_128()//Position - 0x6707
{
	if (unk_0x517823CA390A19F6())
	{
		return func_130();
	}
	return func_129(Global_440000.f_1EF38);
}

int func_129(int iParam0)//Position - 0x672B
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_40001.f_1385[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_130()//Position - 0x6765
{
	return Global_255A46.f_10;
}

var func_131()//Position - 0x6773
{
	return Global_19396B;
}

var func_132()//Position - 0x677F
{
	return Global_252E21.f_1F6.f_3B;
}

var func_133()//Position - 0x6790
{
	return Global_255A46.f_28A;
}

bool func_134(int iParam0)//Position - 0x679F
{
	if (iParam0 < 32)
	{
		return unk_0xFA30DFD0084E92FE(Global_252E21.f_1F6.f_1, iParam0);
	}
	return unk_0xFA30DFD0084E92FE(Global_252E21.f_1F6.f_2, (iParam0 - 32));
}

int func_135()//Position - 0x67D5
{
	if (Global_200000[func_136() /*12171*/].f_1E08.f_2 >= 231)
	{
		Global_200000[func_136() /*12171*/].f_1E08.f_2 = -1;
		return -1;
	}
	return Global_200000[func_136() /*12171*/].f_1E08.f_2;
}

int func_136()//Position - 0x6817
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_137()//Position - 0x6824
{
	var uVar0;
	
	func_144(&uVar0);
	if (Global_14083F == 0)
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			return 1;
		}
	}
	if (func_143())
	{
		return 1;
	}
	if (Global_25891C)
	{
		return 1;
	}
	if (func_142())
	{
		return 1;
	}
	if (func_141(157))
	{
		if (!func_140())
		{
			return 1;
		}
	}
	if (func_141(155))
	{
		return 1;
	}
	if (!unk_0x57D316754A262B34())
	{
		return 1;
	}
	if (func_138() != 0)
	{
		if (unk_0xB731B8C5BCE89836(func_138()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_138()//Position - 0x68AE
{
	switch (func_139())
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

int func_139()//Position - 0x68E2
{
	return Global_62BD;
}

bool func_140()//Position - 0x68ED
{
	return Global_255A46.f_24A;
}

int func_141(int iParam0)//Position - 0x68FC
{
	if (unk_0xA1AC399BCBEE5B2D(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_142()//Position - 0x6913
{
	return Global_258063;
}

bool func_143()//Position - 0x691F
{
	return Global_255A46.f_245;
}

void func_144(var uParam0)//Position - 0x692E
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
					func_145(iVar0);
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

void func_145(int iParam0)//Position - 0x69A1
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x414AA1932D1C88E2(1, iParam0, &vVar0, 3))
	{
		if (func_6(vVar0.y, 1, 1))
		{
			iVar1 = unk_0xA95CF30C72EB526E(vVar0.y);
			if (unk_0x724D816EA203A79E(iVar1))
			{
				if (unk_0x5237AF95232D78C5(iVar1, 0))
				{
					iVar2 = unk_0x9FE9D386222EEE47(iVar1, 0);
					if (unk_0x403C891106DCABAF(iVar2, vVar0.z) && unk_0x32405B7614E36453())
					{
						if (func_146(iVar2, &bVar3))
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

int func_146(int iParam0, var uParam1)//Position - 0x6A22
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

void func_147()//Position - 0x6A81
{
	func_148();
	unk_0x95E4B6F3ED223F5A();
}

void func_148()//Position - 0x6A91
{
	Global_40E7E8.f_9 = 0;
	func_149();
	if (unk_0xEF0E25DA0CB6E8FF(iLocal_94))
	{
		unk_0x4EC087603E1DEF9C(iLocal_94, 0);
	}
	if (unk_0xEF0E25DA0CB6E8FF(iLocal_95))
	{
		unk_0x4EC087603E1DEF9C(iLocal_95, 0);
	}
	if (iLocal_99)
	{
		if (func_6(unk_0xB5CEFD608600A09F(), 0, 1))
		{
			unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
		}
	}
}

void func_149()//Position - 0x6ADE
{
	struct<30> Var0;
	
	Var0.f_4 = 1;
	Var0.f_5 = 1;
	Var0.f_12 = 1;
	Var0.f_15 = 1125515264;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_19 = -1;
	Global_24C31F = { Var0 };
}

bool func_150()//Position - 0x6B23
{
	return Global_1407ED;
}

