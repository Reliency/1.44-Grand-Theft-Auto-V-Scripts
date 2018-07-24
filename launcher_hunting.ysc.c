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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	struct<4> Local_37[10];
	bool bLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	var uLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	vector3 vLocal_57 = { 0f, 0f, 0f };
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	struct<2> Local_60 = { 0, 5 } ;
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
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 5;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	struct<42> Var0;
	vector3 vVar1;
	int iVar2[2];
	vector3 vVar3;
	
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_42 = 1;
	iLocal_43 = 65;
	iLocal_44 = 49;
	iLocal_45 = 64;
	iLocal_49 = unk_0xD736C0AC62BF73AD();
	iLocal_50 = unk_0x880E0FAC08C6FA65();
	uLocal_52 = func_271(54);
	iLocal_53 = joaat("dune");
	iLocal_54 = unk_0x20839301BD7D82F0(joaat("weapon_sniperrifle"));
	iLocal_55 = unk_0xE756C4AA1BCB8705(joaat("component_at_scope_large"));
	iLocal_56 = unk_0xE756C4AA1BCB8705(joaat("component_at_ar_supp_02"));
	vLocal_57 = { -683.8261f, 5840.81f, 16.566f };
	iLocal_59 = -1;
	unk_0x80BDE252D8D954BC(1);
	func_270();
	Var0.f_11 = 2;
	Var0.f_1C = 6;
	Var0.f_23 = 5;
	Var0.f_29 = 6;
	vVar1 = { 0f, 0f, 0f };
	func_269(&Var0);
	vVar1 = { ScriptParam_60.f_1[0 /*3*/] };
	iVar2[0] = 25;
	iVar2[1] = 26;
	if (unk_0xE8A79675302ED812(83))
	{
		func_268("Force cleanup [TERMINATING]");
		if (Var0 != -1)
		{
			if (Global_19773[Var0 /*10*/].f_9 != -1)
			{
				func_268("Relinquishing candidate id...");
				func_267(&(Global_19773[Var0 /*10*/].f_9));
			}
		}
		func_255(&Var0, 1);
	}
	if (!func_252(&iVar2, &Var0, vVar1, 1f))
	{
		func_251();
		func_268("SCRIPT TERMINATED");
		unk_0x95E4B6F3ED223F5A();
	}
	if (!func_243(Var0))
	{
		func_251();
		func_268("SCRIPT TERMINATED");
		unk_0x95E4B6F3ED223F5A();
	}
	if (func_242(Var0))
	{
		func_251();
		func_268("SCRIPT TERMINATED");
		unk_0x95E4B6F3ED223F5A();
	}
	while (!func_230(&Var0))
	{
		SYSTEM::WAIT(0);
		if (!unk_0x684B06333594F9EA())
		{
			func_268("Player out of range [TERMINATING]");
			func_255(&Var0, 1);
		}
	}
	unk_0x6C5F5B5F6894CCE3(vVar1, 3f, 1, 0, 0, false);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!func_192(&Var0, 1))
		{
			func_255(&Var0, 1);
		}
		func_191(Var0);
		func_184(&iLocal_59, &(Var0.f_9), vVar1);
		if (Var0 == 25)
		{
			func_179(&Var0, vVar1, "HUNT1AU", "HUNT1_AMB", 3, "CLETUS", 5000, 1101004800);
		}
		if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()) && !unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			vVar3 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false) };
		}
		if (Var0 == 25)
		{
			if (SYSTEM::VDIST2(vVar1, vVar3) < (10f * 10f))
			{
				unk_0xDBA0F5674ACCE43C(unk_0xBC25C936A095B5BA(), 1f);
			}
			else
			{
				unk_0xDBA0F5674ACCE43C(unk_0xBC25C936A095B5BA(), 3f);
			}
		}
		if (func_164(&Var0, 0) && unk_0x357058E632979E65((vVar1.z - vVar3.z)) < 2.5f)
		{
			if (!func_2(&Var0))
			{
				func_255(&Var0, 1);
			}
			if (func_1(&Var0))
			{
				func_255(&Var0, 0);
			}
		}
	}
}

int func_1(int iParam0)//Position - 0x2D0
{
	while (!Global_19773[*iParam0 /*10*/])
	{
		SYSTEM::WAIT(0);
	}
	return 1;
}

int func_2(int iParam0)//Position - 0x2EE
{
	struct<4> Var0;
	char* sVar1;
	
	if (!func_163())
	{
		while (!func_154(*iParam0))
		{
			if (func_153(*iParam0))
			{
				func_144();
			}
			if (!func_192(iParam0, *iParam0 != 2))
			{
				func_268("LAUNCH_RC_MISSION - NOT IS_RC_FINE_AND_IN_RANGE() [TERMINATING]");
				return 0;
			}
			SYSTEM::WAIT(0);
		}
	}
	if (func_143())
	{
		func_141();
	}
	if (!func_110(iParam0))
	{
		func_268("STEP_7_COMMON_LaunchMission - Trying to launch a null script string name");
		return 0;
	}
	func_107(*iParam0, &Var0);
	MemCopy(&sVar1, {func_106(*iParam0)}, 4);
	func_104(&sVar1, Var0.f_3, 0);
	func_103(*iParam0);
	if (!func_163())
	{
		if (iParam0->f_10 == 2)
		{
			func_22(&(iParam0->f_1), 0);
		}
		else
		{
			func_22(&(iParam0->f_1), 1);
		}
	}
	func_3(*iParam0, Var0);
	return 1;
}

void func_3(int iParam0, char* sParam1)//Position - 0x3AF
{
	func_21(sParam1);
	unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_4871[iParam0 /*6*/]), 5);
	if (unk_0xB731B8C5BCE89836(joaat("mission_stat_watcher")) > 0)
	{
		while (unk_0xB731B8C5BCE89836(joaat("mission_stat_watcher")) > 0)
		{
			func_19();
			SYSTEM::WAIT(0);
		}
	}
	if (unk_0xB731B8C5BCE89836(joaat("mission_stat_watcher")) < 1)
	{
		Global_DAA0 = 0;
		unk_0x63831D2D5110C305("mission_stat_watcher");
		while (!unk_0xACE95AD318CE412B("mission_stat_watcher"))
		{
			SYSTEM::WAIT(0);
		}
		SYSTEM::START_NEW_SCRIPT("mission_stat_watcher", 1828);
		unk_0x91DEC7187FA01089("mission_stat_watcher");
	}
	while (!unk_0xFA30DFD0084E92FE(Global_19B04.f_4871[iParam0 /*6*/], 5))
	{
		if (unk_0xB731B8C5BCE89836(joaat("mission_stat_watcher")) > 0)
		{
			unk_0xF0059F27F7BB6680(&(Global_19B04.f_4871[iParam0 /*6*/]), 5);
		}
	}
	func_4(iParam0);
}

void func_4(int iParam0)//Position - 0x46E
{
	int iVar0;
	int iVar1;
	
	if (Global_DA9D == 1)
	{
		func_18();
		Global_DA9D = 0;
		if (Global_DA98)
		{
			return;
		}
	}
	if (Global_3)
	{
		Global_DAA0 = 1;
		func_10();
		return;
	}
	MemCopy(&Global_DAAE, {func_9(iParam0)}, 4);
	Global_DAA2 = 0;
	Global_DAA1 = 0;
	switch (iParam0)
	{
		case 1:
		case 9:
			Global_DA95 = 1;
			Global_DA98 = 1;
			Global_DA9B = 1;
			break;
		
		case 0:
		case 4:
		case 7:
		case 10:
		case 11:
		case 13:
		case 15:
		case 27:
		case 31:
		case 35:
		case 36:
		case 37:
		case 48:
		case 44:
		case 45:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
			Global_DAA0 = 1;
			Global_DAA1 = 1;
			func_10();
			func_19();
			return;
			break;
	}
	iVar0 = Global_10A74;
	Global_10A74 = 1;
	iVar1 = Global_10A75;
	Global_10A75 = iParam0;
	if (!Global_DA95)
	{
		if ((Global_10A75 != iVar1 || Global_109DE == 0) || iVar0 != Global_10A74)
		{
			Global_63B7 = 0;
			func_10();
			func_6(iParam0);
		}
		else
		{
			Global_DA98 = 1;
		}
	}
	Global_DABB = unk_0x105601648511CC64();
	func_5();
	Global_DA9F = 0;
}

void func_5()//Position - 0x5C8
{
	int iVar0;
	
	if (!Global_DA9C)
	{
		return;
	}
	if (Global_109DE == 0)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_109DE)
	{
		switch (Global_DB80[Global_109DF[iVar0 /*9*/] /*13*/])
		{
			case 1:
			case 9:
				Global_109DF[iVar0 /*9*/].f_3 = 1;
				break;
			
			case 4:
				if (Global_DAA7)
				{
					Global_109DF[iVar0 /*9*/].f_3 = 1;
				}
				break;
			
			case 6:
				if (Global_DB80[Global_109DF[iVar0 /*9*/] /*13*/].f_3)
				{
					if (Global_109DF[iVar0 /*9*/].f_1 != 0)
					{
						Global_109DF[iVar0 /*9*/].f_3 = 1;
					}
				}
				break;
		}
		iVar0++;
	}
	Global_DA9C = 0;
}

void func_6(int iParam0)//Position - 0x67B
{
	switch (iParam0)
	{
		case 2:
			func_7(741);
			func_7(742);
			return;
		
		case 3:
			func_7(743);
			func_7(744);
			return;
		
		case 5:
			func_7(745);
			func_7(746);
			return;
		
		case 6:
			func_7(747);
			func_7(748);
			return;
		
		case 8:
			func_7(749);
			return;
		
		case 12:
			func_7(750);
			return;
		
		case 14:
			func_7(751);
			func_7(752);
			return;
		
		case 16:
			func_7(753);
			func_7(754);
			return;
		
		case 17:
			func_7(755);
			func_7(756);
			func_7(757);
			return;
		
		case 18:
			func_7(758);
			func_7(759);
			return;
		
		case 19:
			func_7(760);
			func_7(761);
			return;
		
		case 20:
			func_7(762);
			return;
		
		case 21:
			func_7(763);
			return;
		
		case 22:
			func_7(764);
			func_7(765);
			return;
		
		case 23:
			func_7(766);
			return;
		
		case 25:
			func_7(767);
			func_7(768);
			func_7(769);
			return;
		
		case 26:
			func_7(770);
			func_7(771);
			return;
		
		case 28:
			func_7(772);
			func_7(773);
			return;
		
		case 29:
			func_7(774);
			func_7(775);
			return;
		
		case 30:
			func_7(776);
			func_7(777);
			return;
		
		case 32:
			func_7(778);
			func_7(779);
			return;
		
		case 33:
			func_7(780);
			func_7(781);
			func_7(782);
			return;
		
		case 34:
			func_7(783);
			func_7(784);
			return;
		
		case 38:
			func_7(785);
			func_7(786);
			return;
		
		case 39:
			func_7(787);
			func_7(788);
			return;
		
		case 40:
			func_7(789);
			return;
		
		case 41:
			func_7(790);
			func_7(791);
			func_7(792);
			return;
		
		case 42:
			func_7(793);
			func_7(794);
			func_7(795);
			return;
		
		case 43:
			func_7(796);
			func_7(797);
			return;
		
		case 46:
			func_7(798);
			func_7(799);
			return;
		
		default:
	}
	switch (iParam0)
	{
		case 47:
			func_7(800);
			func_7(801);
			return;
		
		case 49:
			func_7(802);
			func_7(803);
			return;
		
		case 50:
			func_7(804);
			func_7(805);
			return;
		
		case 51:
			func_7(806);
			return;
		
		case 57:
			func_7(807);
			func_7(808);
			func_7(809);
			return;
		
		case 58:
			func_7(828);
			func_7(829);
			func_7(830);
			return;
		
		case 59:
			func_7(831);
			func_7(832);
			func_7(833);
			return;
		
		case 60:
			func_7(834);
			func_7(835);
			func_7(836);
			return;
		
		case 61:
			func_7(837);
			func_7(838);
			func_7(839);
			return;
		
		case 62:
			func_7(840);
			func_7(841);
			func_7(842);
			return;
		
		case 24:
			func_7(843);
			func_7(844);
			func_7(845);
			return;
		
		default:
	}
}

void func_7(int iParam0)//Position - 0xA63
{
	Global_DA98 = 1;
	Global_DA9B = 1;
	if (Global_109DE > 15)
	{
		return;
	}
	func_8(Global_109DE);
	Global_109DF[Global_109DE /*9*/] = iParam0;
	Global_109DE++;
	if (Global_DB80[iParam0 /*13*/] == 16)
	{
		Global_10A76 = 1;
	}
}

void func_8(int iParam0)//Position - 0xAAE
{
	Global_109DF[iParam0 /*9*/].f_1 = 0;
	Global_109DF[iParam0 /*9*/].f_2 = 0f;
	Global_109DF[iParam0 /*9*/].f_3 = 0;
	Global_109DF[iParam0 /*9*/].f_4 = 0;
}

struct<2> func_9(int iParam0)//Position - 0xAE2
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_106(iParam0) };
	if (unk_0xF1734B55490E9045(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

void func_10()//Position - 0xB1A
{
	if (Global_DA9F)
	{
		return;
	}
	Global_DAA8 = 0;
	Global_109DE = 0;
	Global_DAAA = 0;
	if (Global_DAA7)
	{
	}
	Global_DAA7 = 0;
	func_17(0);
	func_16();
	Global_10A76 = 0;
	Global_DA9E = 1;
	func_14();
	func_13();
	func_12();
	func_11();
	Global_DA95 = 0;
	Global_DAB3 = 0;
	Global_DABB = -1;
}

void func_11()//Position - 0xB70
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_10A99[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_10AA2 = 0;
}

void func_12()//Position - 0xB9D
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		Global_10A77[iVar0 /*2*/] = 0;
		Global_10A77[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_10A98 = 0;
}

void func_13()//Position - 0xBD4
{
	Global_DB3E = 0;
}

void func_14()//Position - 0xBE0
{
	Global_DAB2 = 0;
	Global_DAB6 = func_15(joaat("sp0_shots"));
	Global_DAB5 = func_15(joaat("sp0_hits"));
	Global_DAB8 = func_15(joaat("sp1_shots"));
	Global_DAB7 = func_15(joaat("sp1_hits"));
	Global_DABA = func_15(joaat("sp2_shots"));
	Global_DAB9 = func_15(joaat("sp2_hits"));
}

var func_15(int iParam0)//Position - 0xC34
{
	var uVar0;
	
	unk_0x6CB99B97664C3727(iParam0, &uVar0, -1);
	return uVar0;
}

void func_16()//Position - 0xC48
{
	int iVar0;
	
	Global_DABC = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		Global_DABD[iVar0 /*2*/] = 0;
		iVar0++;
	}
}

void func_17(int iParam0)//Position - 0xC72
{
	Global_11646 = iParam0;
	Global_11647 = iParam0;
}

void func_18()//Position - 0xC86
{
	int iVar0;
	
	Global_DA9D = 1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_109DE)
	{
		Global_109DF[iVar0 /*9*/].f_3 = 2;
		iVar0++;
	}
	if (Global_DAA7)
	{
	}
	Global_DAA7 = 0;
}

void func_19()//Position - 0xCBF
{
	if (unk_0xB731B8C5BCE89836(joaat("mission_stat_watcher")) > 0)
	{
		if (func_20())
		{
			if (Global_DA9A && !Global_DA99)
			{
				Global_DA9A = 0;
				unk_0xA451DE3BE57FDA90("mission_stat_watcher");
			}
		}
		else
		{
			unk_0xA451DE3BE57FDA90("mission_stat_watcher");
		}
	}
}

int func_20()//Position - 0xD01
{
	if (unk_0xB731B8C5BCE89836(joaat("mission_stat_watcher")) < 1)
	{
		return 0;
	}
	if (!Global_DA98)
	{
		return 0;
	}
	return Global_DAA4;
}

void func_21(char* sParam0)//Position - 0xD2B
{
	if (unk_0x3362CDE8460ED38B(sParam0, sParam0))
	{
	}
}

void func_22(char[4] cParam0, int iParam1)//Position - 0xD3E
{
	unk_0x7CB6FD92BE491AD9(&(Global_16B1B.f_14), 17);
	func_23(cParam0, iParam1, 0);
}

void func_23(char[4] cParam0, int iParam1, int iParam2)//Position - 0xD5B
{
	if (Global_16B1B != 10 && Global_16B1B != 9)
	{
		StringCopy(&Global_1763E, cParam0, 32);
		func_25(&Global_17646, cParam0, 0, "Start", iParam1, iParam2);
		func_24();
		Global_154EE = 0;
	}
}

void func_24()//Position - 0xDA0
{
	int iVar0;
	int iVar1;
	
	Global_181DF = Global_17646;
	Global_181DF.f_1 = Global_17646.f_1;
	Global_181DF.f_6 = Global_17646.f_6;
	Global_181DF.f_7 = Global_17646.f_7;
	Global_181DF.f_8 = Global_17646.f_8;
	Global_181DF.f_2 = Global_17646.f_2;
	Global_181DF.f_3 = Global_17646.f_3;
	Global_181DF.f_4 = Global_17646.f_4;
	Global_181DF.f_5 = Global_17646.f_5;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		Global_181DF.f_9[iVar1] = Global_17646.f_9[iVar1];
		Global_181DF.f_D[iVar1] = Global_17646.f_D[iVar1];
		Global_181DF.f_11[iVar1] = Global_17646.f_11[iVar1];
		Global_181DF.f_15[iVar1] = Global_17646.f_15[iVar1];
		Global_181DF.f_19[0 /*295*/][iVar1 /*98*/] = { Global_17646.f_19[0 /*295*/][iVar1 /*98*/] };
		Global_181DF.f_19[1 /*295*/][iVar1 /*98*/] = { Global_17646.f_19[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 < 12)
		{
			Global_181DF.f_268[iVar1 /*65*/][iVar0] = Global_17646.f_268[iVar1 /*65*/][iVar0];
			Global_181DF.f_268[iVar1 /*65*/].f_D[iVar0] = Global_17646.f_268[iVar1 /*65*/].f_D[iVar0];
			Global_181DF.f_268[iVar1 /*65*/].f_1A[iVar0] = Global_17646.f_268[iVar1 /*65*/].f_1A[iVar0];
			iVar0++;
		}
		Global_181DF.f_268[iVar1 /*65*/].f_3B = Global_17646.f_268[iVar1 /*65*/].f_3B;
		Global_181DF.f_268[iVar1 /*65*/].f_3C = Global_17646.f_268[iVar1 /*65*/].f_3C;
		Global_181DF.f_268[iVar1 /*65*/].f_3D = Global_17646.f_268[iVar1 /*65*/].f_3D;
		Global_181DF.f_268[iVar1 /*65*/].f_3E = Global_17646.f_268[iVar1 /*65*/].f_3E;
		Global_181DF.f_268[iVar1 /*65*/].f_3F = Global_17646.f_268[iVar1 /*65*/].f_3F;
		Global_181DF.f_268[iVar1 /*65*/].f_40 = Global_17646.f_268[iVar1 /*65*/].f_40;
		iVar0 = 0;
		while (iVar0 < 9)
		{
			Global_181DF.f_268[iVar1 /*65*/].f_27[iVar0] = Global_17646.f_268[iVar1 /*65*/].f_27[iVar0];
			Global_181DF.f_268[iVar1 /*65*/].f_31[iVar0] = Global_17646.f_268[iVar1 /*65*/].f_31[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			Global_181DF.f_32C[iVar1 /*472*/][iVar0 /*5*/] = { Global_17646.f_32C[iVar1 /*472*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			Global_181DF.f_32C[iVar1 /*472*/].f_DD[iVar0 /*5*/] = { Global_17646.f_32C[iVar1 /*472*/].f_DD[iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			Global_181DF.f_8B5[iVar1 /*32*/][iVar0] = Global_17646.f_8B5[iVar1 /*32*/][iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Global_181DF.f_8B5[iVar1 /*32*/].f_5[iVar0] = Global_17646.f_8B5[iVar1 /*32*/].f_5[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			Global_181DF.f_8B5[iVar1 /*32*/].f_10[iVar0] = Global_17646.f_8B5[iVar1 /*32*/].f_10[iVar0];
			iVar0++;
		}
		Global_181DF.f_916[iVar1] = Global_17646.f_916[iVar1];
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			Global_181DF.f_B07[iVar1 /*15*/][iVar0] = Global_17646.f_B07[iVar1 /*15*/][iVar0];
			Global_181DF.f_B07[iVar1 /*15*/].f_5[iVar0] = Global_17646.f_B07[iVar1 /*15*/].f_5[iVar0];
			Global_181DF.f_B07[iVar1 /*15*/].f_A[iVar0] = Global_17646.f_B07[iVar1 /*15*/].f_A[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			Global_181DF.f_91A[iVar1 /*164*/][iVar0] = Global_17646.f_91A[iVar1 /*164*/][iVar0];
			Global_181DF.f_91A[iVar1 /*164*/].f_4[iVar0] = Global_17646.f_91A[iVar1 /*164*/].f_4[iVar0];
			Global_181DF.f_91A[iVar1 /*164*/].f_8[iVar0] = Global_17646.f_91A[iVar1 /*164*/].f_8[iVar0];
			Global_181DF.f_91A[iVar1 /*164*/].f_C[iVar0] = Global_17646.f_91A[iVar1 /*164*/].f_C[iVar0];
			Global_181DF.f_91A[iVar1 /*164*/].f_10[iVar0] = Global_17646.f_91A[iVar1 /*164*/].f_10[iVar0];
			Global_181DF.f_91A[iVar1 /*164*/].f_14[iVar0] = Global_17646.f_91A[iVar1 /*164*/].f_14[iVar0];
			Global_181DF.f_91A[iVar1 /*164*/].f_18[iVar0] = Global_17646.f_91A[iVar1 /*164*/].f_18[iVar0];
			Global_181DF.f_91A[iVar1 /*164*/].f_1C[iVar0] = Global_17646.f_91A[iVar1 /*164*/].f_1C[iVar0];
			Global_181DF.f_91A[iVar1 /*164*/].f_20[iVar0] = Global_17646.f_91A[iVar1 /*164*/].f_20[iVar0];
			Global_181DF.f_91A[iVar1 /*164*/].f_24[iVar0] = Global_17646.f_91A[iVar1 /*164*/].f_24[iVar0];
			Global_181DF.f_91A[iVar1 /*164*/].f_28[iVar0] = Global_17646.f_91A[iVar1 /*164*/].f_28[iVar0];
			Global_181DF.f_91A[iVar1 /*164*/].f_2C[iVar0] = Global_17646.f_91A[iVar1 /*164*/].f_2C[iVar0];
			Global_181DF.f_91A[iVar1 /*164*/].f_30[iVar0] = Global_17646.f_91A[iVar1 /*164*/].f_30[iVar0];
			Global_181DF.f_91A[iVar1 /*164*/].f_34[iVar0] = Global_17646.f_91A[iVar1 /*164*/].f_34[iVar0];
			Global_181DF.f_91A[iVar1 /*164*/].f_38[iVar0] = Global_17646.f_91A[iVar1 /*164*/].f_38[iVar0];
			Global_181DF.f_91A[iVar1 /*164*/].f_3C[iVar0] = Global_17646.f_91A[iVar1 /*164*/].f_3C[iVar0];
			Global_181DF.f_91A[iVar1 /*164*/].f_40[iVar0] = Global_17646.f_91A[iVar1 /*164*/].f_40[iVar0];
			Global_181DF.f_91A[iVar1 /*164*/].f_44[iVar0] = Global_17646.f_91A[iVar1 /*164*/].f_44[iVar0];
			Global_181DF.f_91A[iVar1 /*164*/].f_48[iVar0] = Global_17646.f_91A[iVar1 /*164*/].f_48[iVar0];
			Global_181DF.f_91A[iVar1 /*164*/].f_4C[iVar0] = Global_17646.f_91A[iVar1 /*164*/].f_4C[iVar0];
			Global_181DF.f_91A[iVar1 /*164*/].f_50[iVar0] = Global_17646.f_91A[iVar1 /*164*/].f_50[iVar0];
			Global_181DF.f_91A[iVar1 /*164*/].f_54[iVar0] = Global_17646.f_91A[iVar1 /*164*/].f_54[iVar0];
			Global_181DF.f_91A[iVar1 /*164*/].f_58[iVar0] = Global_17646.f_91A[iVar1 /*164*/].f_58[iVar0];
			Global_181DF.f_91A[iVar1 /*164*/].f_5C[iVar0] = Global_17646.f_91A[iVar1 /*164*/].f_5C[iVar0];
			Global_181DF.f_91A[iVar1 /*164*/].f_60[iVar0] = Global_17646.f_91A[iVar1 /*164*/].f_60[iVar0];
			Global_181DF.f_91A[iVar1 /*164*/].f_64[iVar0] = Global_17646.f_91A[iVar1 /*164*/].f_64[iVar0];
			Global_181DF.f_91A[iVar1 /*164*/].f_68[iVar0] = Global_17646.f_91A[iVar1 /*164*/].f_68[iVar0];
			Global_181DF.f_91A[iVar1 /*164*/].f_6C[iVar0] = Global_17646.f_91A[iVar1 /*164*/].f_6C[iVar0];
			Global_181DF.f_91A[iVar1 /*164*/].f_70[iVar0] = Global_17646.f_91A[iVar1 /*164*/].f_70[iVar0];
			Global_181DF.f_91A[iVar1 /*164*/].f_74[iVar0] = Global_17646.f_91A[iVar1 /*164*/].f_74[iVar0];
			Global_181DF.f_91A[iVar1 /*164*/].f_78[iVar0] = Global_17646.f_91A[iVar1 /*164*/].f_78[iVar0];
			Global_181DF.f_91A[iVar1 /*164*/].f_7C[iVar0] = Global_17646.f_91A[iVar1 /*164*/].f_7C[iVar0];
			Global_181DF.f_91A[iVar1 /*164*/].f_80[iVar0] = Global_17646.f_91A[iVar1 /*164*/].f_80[iVar0];
			Global_181DF.f_91A[iVar1 /*164*/].f_84[iVar0] = Global_17646.f_91A[iVar1 /*164*/].f_84[iVar0];
			Global_181DF.f_91A[iVar1 /*164*/].f_88[iVar0] = Global_17646.f_91A[iVar1 /*164*/].f_88[iVar0];
			Global_181DF.f_91A[iVar1 /*164*/].f_8C[iVar0] = Global_17646.f_91A[iVar1 /*164*/].f_8C[iVar0];
			Global_181DF.f_91A[iVar1 /*164*/].f_90[iVar0] = Global_17646.f_91A[iVar1 /*164*/].f_90[iVar0];
			Global_181DF.f_91A[iVar1 /*164*/].f_94[iVar0] = Global_17646.f_91A[iVar1 /*164*/].f_94[iVar0];
			Global_181DF.f_91A[iVar1 /*164*/].f_98[iVar0] = Global_17646.f_91A[iVar1 /*164*/].f_98[iVar0];
			Global_181DF.f_91A[iVar1 /*164*/].f_9C[iVar0] = Global_17646.f_91A[iVar1 /*164*/].f_9C[iVar0];
			Global_181DF.f_91A[iVar1 /*164*/].f_A0[iVar0] = Global_17646.f_91A[iVar1 /*164*/].f_A0[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	Global_181DF.f_B35 = { Global_17646.f_B35 };
	Global_181DF.f_B35.f_3 = Global_17646.f_B35.f_3;
	Global_181DF.f_B3B = { Global_17646.f_B3B };
	Global_181DF.f_B3B.f_3 = { Global_17646.f_B3B.f_3 };
	Global_181DF.f_B3B.f_6 = Global_17646.f_B3B.f_6;
	Global_181DF.f_B3B.f_8 = Global_181DF.f_B3B.f_8;
	Global_181DF.f_B3B.f_7 = Global_17646.f_B3B.f_7;
	Global_181DF.f_B3B.f_9 = Global_17646.f_B3B.f_9;
	Global_181DF.f_B3B.f_B = Global_17646.f_B3B.f_B;
	Global_181DF.f_B3B.f_A = Global_17646.f_B3B.f_A;
	Global_181DF.f_B3B.f_C = Global_17646.f_B3B.f_C;
	Global_181DF.f_B3B.f_C.f_1 = { Global_17646.f_B3B.f_C.f_1 };
	Global_181DF.f_B3B.f_C.f_5 = Global_17646.f_B3B.f_C.f_5;
	Global_181DF.f_B3B.f_C.f_6 = Global_17646.f_B3B.f_C.f_6;
	Global_181DF.f_B3B.f_C.f_7 = Global_17646.f_B3B.f_C.f_7;
	Global_181DF.f_B3B.f_C.f_8 = Global_17646.f_B3B.f_C.f_8;
	Global_181DF.f_B3B.f_C.f_9 = { Global_17646.f_B3B.f_C.f_9 };
	Global_181DF.f_B3B.f_C.f_3B = { Global_17646.f_B3B.f_C.f_3B };
	Global_181DF.f_B3B.f_C.f_3E = Global_17646.f_B3B.f_C.f_3E;
	Global_181DF.f_B3B.f_C.f_3F = Global_17646.f_B3B.f_C.f_3F;
	Global_181DF.f_B3B.f_C.f_40 = Global_17646.f_B3B.f_C.f_40;
	Global_181DF.f_B3B.f_C.f_41 = Global_17646.f_B3B.f_C.f_41;
	Global_181DF.f_B3B.f_C.f_4D = Global_17646.f_B3B.f_C.f_4D;
	Global_181DF.f_B3B.f_C.f_42 = Global_17646.f_B3B.f_C.f_42;
	Global_181DF.f_B3B.f_C.f_43 = Global_17646.f_B3B.f_C.f_43;
	Global_181DF.f_B3B.f_C.f_44 = Global_17646.f_B3B.f_C.f_44;
	Global_181DF.f_B3B.f_C.f_45 = Global_17646.f_B3B.f_C.f_45;
	Global_181DF.f_B3B.f_C.f_47 = Global_17646.f_B3B.f_C.f_47;
	Global_181DF.f_B3B.f_C.f_48 = Global_17646.f_B3B.f_C.f_48;
	Global_181DF.f_B3B.f_C.f_49 = Global_17646.f_B3B.f_C.f_49;
	Global_181DF.f_B3B.f_C.f_4A = Global_17646.f_B3B.f_C.f_4A;
	Global_181DF.f_B3B.f_C.f_4B = Global_17646.f_B3B.f_C.f_4B;
	Global_181DF.f_B3B.f_C.f_4C = Global_17646.f_B3B.f_C.f_4C;
	Global_181DF.f_B95 = Global_17646.f_B95;
	Global_181DF.f_B95.f_1 = Global_17646.f_B95.f_1;
	Global_181DF.f_B95.f_2 = Global_17646.f_B95.f_2;
	Global_181DF.f_B95.f_3 = Global_17646.f_B95.f_3;
}

void func_25(var uParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x1A34
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_102();
	uParam0->f_1 = func_91();
	unk_0x6E1ECC86C790262C(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		func_65(&(uParam0->f_B35), 0);
		func_64(unk_0xBC25C936A095B5BA());
		func_57(unk_0xBC25C936A095B5BA(), 0);
		unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_11[iVar1] = Global_19B04.f_932.f_21B.f_126[iVar1];
		if (iVar1 == func_54())
		{
			func_47(unk_0xBC25C936A095B5BA(), &(uParam0->f_268[iVar1 /*65*/]), 1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_268[iVar1 /*65*/][iVar0] = Global_16A49[iVar1 /*65*/][iVar0];
				uParam0->f_268[iVar1 /*65*/].f_D[iVar0] = Global_16A49[iVar1 /*65*/].f_D[iVar0];
				iVar0++;
			}
			uParam0->f_268[iVar1 /*65*/].f_3B = Global_16A49[iVar1 /*65*/].f_3B;
			uParam0->f_268[iVar1 /*65*/].f_3C = Global_16A49[iVar1 /*65*/].f_3C;
			uParam0->f_268[iVar1 /*65*/].f_3D = Global_16A49[iVar1 /*65*/].f_3D;
			uParam0->f_268[iVar1 /*65*/].f_3E = Global_16A49[iVar1 /*65*/].f_3E;
			uParam0->f_268[iVar1 /*65*/].f_3F = Global_16A49[iVar1 /*65*/].f_3F;
			uParam0->f_268[iVar1 /*65*/].f_40 = Global_16A49[iVar1 /*65*/].f_40;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_268[iVar1 /*65*/].f_27[iVar0] = Global_16A49[iVar1 /*65*/].f_27[iVar0];
				uParam0->f_268[iVar1 /*65*/].f_31[iVar0] = Global_16A49[iVar1 /*65*/].f_31[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_32C[iVar1 /*472*/][iVar0 /*5*/] = { Global_19B04.f_932.f_21B.f_12A[iVar1 /*472*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			uParam0->f_32C[iVar1 /*472*/].f_DD[iVar0 /*5*/] = { Global_19B04.f_932.f_21B.f_12A[iVar1 /*472*/].f_DD[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				unk_0x6CB99B97664C3727(joaat("sp0_weap_purch_0"), &(uParam0->f_8B5[iVar1 /*32*/][0]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_purch_1"), &(uParam0->f_8B5[iVar1 /*32*/][1]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_8B5[iVar1 /*32*/].f_5[0]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_8B5[iVar1 /*32*/].f_5[1]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_8B5[iVar1 /*32*/].f_5[2]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_8B5[iVar1 /*32*/].f_5[3]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_8B5[iVar1 /*32*/].f_5[4]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[0]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[1]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[2]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[3]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[4]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[5]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[6]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[7]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[8]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[9]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[10]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[11]), -1);
				break;
			
			case 1:
				unk_0x6CB99B97664C3727(joaat("sp1_weap_purch_0"), &(uParam0->f_8B5[iVar1 /*32*/][0]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_purch_1"), &(uParam0->f_8B5[iVar1 /*32*/][1]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_8B5[iVar1 /*32*/].f_5[0]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_8B5[iVar1 /*32*/].f_5[1]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_8B5[iVar1 /*32*/].f_5[2]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_8B5[iVar1 /*32*/].f_5[3]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_8B5[iVar1 /*32*/].f_5[4]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[0]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[1]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[2]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[3]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[4]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[5]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[6]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[7]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[8]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[9]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[10]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[11]), -1);
				break;
			
			case 2:
				unk_0x6CB99B97664C3727(joaat("sp2_weap_purch_0"), &(uParam0->f_8B5[iVar1 /*32*/][0]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_purch_1"), &(uParam0->f_8B5[iVar1 /*32*/][1]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_8B5[iVar1 /*32*/].f_5[0]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_8B5[iVar1 /*32*/].f_5[1]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_8B5[iVar1 /*32*/].f_5[2]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_8B5[iVar1 /*32*/].f_5[3]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_8B5[iVar1 /*32*/].f_5[4]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[0]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[1]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[2]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[3]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[4]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[5]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[6]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[7]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[8]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[9]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[10]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_19B04.f_5037.f_E9[iVar1 /*69*/].f_1;
		uParam0->f_D[iVar1] = Global_CF95[iVar1];
		uParam0->f_19[0 /*295*/][iVar1 /*98*/] = { Global_19B04.f_932.f_21B.f_953[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_19[1 /*295*/][iVar1 /*98*/] = { Global_19B04.f_932.f_21B.f_953[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_B07[iVar1 /*15*/][iVar0] = Global_19B04.f_932.f_1ED[iVar1 /*15*/][iVar0];
			uParam0->f_B07[iVar1 /*15*/].f_5[iVar0] = Global_19B04.f_932.f_1ED[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_B07[iVar1 /*15*/].f_A[iVar0] = Global_19B04.f_932.f_1ED[iVar1 /*15*/].f_A[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_91A[iVar1 /*164*/][iVar0] = Global_19B04.f_932[iVar1 /*164*/][iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_4[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_8[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_C[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_C[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_10[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_10[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_14[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_14[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_18[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_18[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_1C[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_1C[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_20[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_24[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_28[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_2C[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_2C[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_30[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_30[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_34[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_34[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_38[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_38[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_3C[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_3C[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_40[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_44[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_48[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_4C[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_4C[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_50[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_50[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_54[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_54[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_58[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_58[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_5C[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_5C[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_60[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_64[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_68[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_6C[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_6C[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_70[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_70[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_74[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_74[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_78[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_78[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_7C[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_7C[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_80[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_84[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_88[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_8C[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_8C[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_90[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_90[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_94[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_94[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_98[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_98[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_9C[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_9C[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_A0[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_A0[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	unk_0x6CB99B97664C3727(joaat("sp0_special_ability"), &(uParam0->f_916[0]), -1);
	unk_0x6CB99B97664C3727(joaat("sp1_special_ability"), &(uParam0->f_916[1]), -1);
	unk_0x6CB99B97664C3727(joaat("sp2_special_ability"), &(uParam0->f_916[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_27(&(uParam0->f_B3B), uParam0, iParam5, 1, 1, 0);
	}
	func_26(&(uParam0->f_B95));
	sParam3 = sParam3;
	iParam2 = iParam2;
}

int func_26(var uParam0)//Position - 0x28BC
{
	*uParam0 = Global_15B75;
	uParam0->f_1 = Global_15B76;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_27(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x28DE
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = unk_0xBC25C936A095B5BA();
	}
	if (unk_0x724D816EA203A79E(iParam2))
	{
		uParam1->f_5 = func_45(iParam2);
	}
	if (func_42(iParam2, &iVar0, iParam3, iParam5))
	{
		func_28(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0x724D816EA203A79E(iVar0))
	{
		if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
		{
			if (unk_0x5E87CB0495C97732(iVar0, joaat("skylift")) && unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iVar0, 0))
			{
				func_28(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_28(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x2966
{
	if (unk_0xE59B7F5A03335350(iParam2, 0))
	{
		func_30(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_29(iParam2))
		{
			uParam1->f_3 = 1;
		}
		else
		{
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

int func_29(int iParam0)//Position - 0x29A6
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_16B1B.f_16[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_30(var uParam0, int iParam1, int iParam2)//Position - 0x29D4
{
	func_37(iParam1, &(uParam0->f_C));
	uParam0->f_7 = func_33(iParam1, 145, 0);
	uParam0->f_B = func_32(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_A)
		{
			uParam0->f_A = func_31(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { unk_0x541C2AEF053615BC(iParam1, true) };
		uParam0->f_6 = unk_0x349C94FFF43E2979(iParam1);
		uParam0->f_3 = { unk_0xB5D9AE572C19509E(iParam1) };
		if (unk_0x0C265B3C448E6954(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, true, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_11431 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_31(int iParam0)//Position - 0x2AB0
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x724D816EA203A79E(Global_110A8.f_1E4[iVar0]))
		{
			if (iParam0 == Global_110A8.f_1E4[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_32(int iParam0)//Position - 0x2AF2
{
	int iVar0;
	
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 145;
	}
	if (!unk_0xE59B7F5A03335350(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x724D816EA203A79E(Global_1613F[iVar0]))
		{
			if (Global_1613F[iVar0] == iParam0)
			{
				return Global_16149[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_33(int iParam0, int iParam1, int iParam2)//Position - 0x2B55
{
	int iVar0;
	
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 0;
	}
	if (!unk_0xE59B7F5A03335350(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x724D816EA203A79E(Global_1613F[iVar0]))
		{
			if (Global_1613F[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_16149[iVar0])
				{
					if (iParam2 == 0 || unk_0x6F79ECA8C83E4357(iParam0) == func_34(iParam1, iParam2))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_34(int iParam0, int iParam1)//Position - 0x2BE3
{
	struct<82> Var0;
	
	if (func_36(iParam0))
	{
		Var0.f_B = 12;
		Var0.f_1F = 49;
		Var0.f_51 = 2;
		func_35(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_35(int iParam0, var uParam1, int iParam2)//Position - 0x2C25
{
	int iVar0;
	
	uParam1->f_58 = 1;
	uParam1->f_54 = 255;
	uParam1->f_55 = 255;
	uParam1->f_56 = 255;
	uParam1->f_61 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_19B04.f_2360.f_63.f_3A[128] && !Global_19B04.f_2360.f_63.f_3A[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_B[0] = 1;
					StringCopy(&(uParam1->f_1B), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_1B), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_1B), "BETTY 32", 16);
					if (Global_19B04.f_2360.f_63.f_3A[119])
					{
						uParam1->f_B[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_19B04.f_2360.f_63.f_3A[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_1B), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_A = 1;
					StringCopy(&(uParam1->f_1B), "FC1988", 16);
					uParam1->f_B[0] = 1;
					uParam1->f_B[1] = 1;
					uParam1->f_B[2] = 1;
					uParam1->f_B[3] = 1;
					uParam1->f_B[4] = 1;
					uParam1->f_B[5] = 1;
					uParam1->f_B[6] = 1;
					uParam1->f_B[7] = 1;
					uParam1->f_B[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

bool func_36(int iParam0)//Position - 0x2E81
{
	return iParam0 < 3;
}

void func_37(int iParam0, var uParam1)//Position - 0x2E8D
{
	int iVar0;
	
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		func_41(uParam1);
		uParam1->f_42 = unk_0x6F79ECA8C83E4357(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x2232934AD664DD49(iParam0), 16);
		*uParam1 = unk_0x89FC8F09D6647DEC(iParam0);
		unk_0x87F182D2DA225F0D(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x375E42DA279E7FED(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x5F73107BDF663316(iParam0, &(uParam1->f_3E), &(uParam1->f_3F), &(uParam1->f_40));
		uParam1->f_41 = unk_0x2629793241883F74(iParam0);
		uParam1->f_43 = unk_0x0FF608FD384AF8FA(iParam0);
		uParam1->f_45 = unk_0xC2587DF549B15BB6(iParam0);
		uParam1->f_46 = unk_0xA3E58143095D5828(iParam0);
		unk_0x715BE0BE8D01B21C(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		unk_0x2774857472EBCE0F(iParam0, &(uParam1->f_4A), &(uParam1->f_4B), &(uParam1->f_4C));
		if (unk_0xFF7612EE8C5F1E19(iParam0, 2))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_4D), 28);
		}
		if (unk_0xFF7612EE8C5F1E19(iParam0, 3))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_4D), 29);
		}
		if (unk_0xFF7612EE8C5F1E19(iParam0, 0))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_4D), 30);
		}
		if (unk_0xFF7612EE8C5F1E19(iParam0, 1))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_4D), 31);
		}
		if (uParam1->f_41 == -1 && !func_40(uParam1->f_42))
		{
			uParam1->f_41 = 0;
		}
		if (unk_0x6DB86B1ADD81CED4(iParam0, 0))
		{
			uParam1->f_44 = unk_0xAA1A0B747CDFC807(iParam0);
		}
		if (unk_0xA19D269B4B5A1532(uParam1->f_42))
		{
			if (unk_0x9741AF87EDFF311C(iParam0))
			{
				switch (unk_0xBCD69B76B3E60BF5(iParam0))
				{
					case 3:
					case 0:
						unk_0x7CB6FD92BE491AD9(&(uParam1->f_4D), 23);
						unk_0xF0059F27F7BB6680(&(uParam1->f_4D), 22);
						break;
					
					case 4:
					case 1:
						unk_0x7CB6FD92BE491AD9(&(uParam1->f_4D), 23);
						unk_0x7CB6FD92BE491AD9(&(uParam1->f_4D), 22);
						break;
					
					case 5:
						unk_0xF0059F27F7BB6680(&(uParam1->f_4D), 23);
						break;
				}
			}
			else
			{
				unk_0xF0059F27F7BB6680(&(uParam1->f_4D), 23);
			}
		}
		if (!unk_0xB830044A99FABAAF(iParam0))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_4D), 9);
		}
		if (unk_0xA37E9F4E2795A88A(iParam0))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_4D), 10);
		}
		if (unk_0xFD22243DAFAFE349(iParam0))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_4D), 13);
			unk_0x103992E73728DA90(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		}
		if (unk_0x1EE004ED283345A0(iParam0))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_4D), 12);
		}
		func_39(&iParam0, &(uParam1->f_9), &(uParam1->f_3B));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xFC8A228C62614C5C(iParam0, iVar0 + 1))
			{
				unk_0xF0059F27F7BB6680(&(uParam1->f_4D), func_38(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x97413DC2A72A11B3(iParam0, 0))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_4D), 11);
		}
		else
		{
			unk_0x7CB6FD92BE491AD9(&(uParam1->f_4D), 11);
		}
		if (unk_0x3C03CFD5DD1E2D97(iParam0, "IgnoredByQuickSave") && unk_0x75236BEC3BDDE069(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_4D), 27);
		}
		else
		{
			unk_0x7CB6FD92BE491AD9(&(uParam1->f_4D), 27);
		}
	}
}

int func_38(int iParam0)//Position - 0x3138
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_39(int iParam0, var uParam1, var uParam2)//Position - 0x31E8
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xE59B7F5A03335350(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xA6BE0954FC6BAA16(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0x0ABA73B9B2E2F838(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x3EB14CBD49DA0017(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xC8B123E980199685(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xC8B123E980199685(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_40(int iParam0)//Position - 0x32C2
{
	switch (iParam0)
	{
		case joaat("granger"):
		case -998177792:
			return 1;
		
		default:
	}
	return 0;
}

void func_41(var uParam0)//Position - 0x32E2
{
	int iVar0;
	
	uParam0->f_42 = 0;
	uParam0->f_4D = 0;
	uParam0->f_41 = 0;
	uParam0->f_3E = 0;
	uParam0->f_3F = 0;
	uParam0->f_40 = 0;
	uParam0->f_4A = 0;
	uParam0->f_4B = 0;
	uParam0->f_4C = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_3B[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_43 = 0;
	uParam0->f_44 = 0;
	uParam0->f_45 = 0;
	uParam0->f_46 = 1;
	uParam0->f_47 = 0;
	uParam0->f_48 = 0;
	uParam0->f_49 = 0;
}

int func_42(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x3393
{
	char* sVar0;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (!unk_0x36CEFBE9B745A58D(iParam0))
		{
			if (iParam0 == unk_0xBC25C936A095B5BA())
			{
				*uParam1 = unk_0x3E12B546F3F2597A();
			}
			else
			{
				*uParam1 = unk_0x9FE9D386222EEE47(iParam0, 1);
			}
			if (unk_0x724D816EA203A79E(*uParam1))
			{
				if (unk_0xE59B7F5A03335350(*uParam1, 0))
				{
					if (iParam2 == 0 || unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(*uParam1, true), unk_0x541C2AEF053615BC(iParam0, true), true) < 100f)
					{
						if (unk_0x5E87CB0495C97732(*uParam1, joaat("taxi")))
						{
							if (unk_0x3187EF5798B5D209(*uParam1, -1, 0) != iParam0 && unk_0x3187EF5798B5D209(*uParam1, -1, 0) != 0)
							{
								return 0;
							}
						}
						if (func_43(*uParam1, func_102(), 1))
						{
							sVar0 = unk_0x1377080E9B0BD993();
							if (!unk_0x3362CDE8460ED38B(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!unk_0x5237AF95232D78C5(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (unk_0x3C03CFD5DD1E2D97(*uParam1, "IgnoredByQuickSave"))
							{
								if (unk_0x75236BEC3BDDE069(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (unk_0x5E87CB0495C97732(*uParam1, joaat("blimp")))
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_43(int iParam0, int iParam1, bool bParam2)//Position - 0x34C2
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0x724D816EA203A79E(iParam0) || !unk_0xE59B7F5A03335350(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_44(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || unk_0xFA30DFD0084E92FE(Global_19B04.f_1C20[iVar2], 0))
		{
			if (unk_0x9945EE67AEC122F7(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_44(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x3533
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

int func_45(int iParam0)//Position - 0x360C
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_46(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_46(int iParam0)//Position - 0x3649
{
	if (func_36(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_47(int iParam0, var uParam1, int iParam2)//Position - 0x3673
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		iVar0 = func_45(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_53(iParam0, iVar1, &(uParam1->f_D[iVar1]), uParam1[iVar1], &(uParam1->f_1A[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_52(iParam0, iVar1, &(uParam1->f_27[iVar1]), &(uParam1->f_31[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_36(iVar0))
		{
			uParam1->f_3B = Global_19B04.f_932.f_21B[iVar0 /*65*/].f_3B;
			uParam1->f_3C = Global_19B04.f_932.f_21B[iVar0 /*65*/].f_3C;
			uParam1->f_3D = Global_19B04.f_932.f_21B[iVar0 /*65*/].f_3D;
			uParam1->f_3E = Global_19B04.f_932.f_21B[iVar0 /*65*/].f_3E;
			uParam1->f_3F = Global_19B04.f_932.f_21B[iVar0 /*65*/].f_3F;
			uParam1->f_40 = Global_19B04.f_932.f_21B[iVar0 /*65*/].f_40;
		}
		else if (unk_0x7AF0088ABFA713B6() && unk_0x6F79ECA8C83E4357(iParam0) == unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			if (func_51(161, -1))
			{
				uParam1->f_3B = func_48(2051, Global_11486, 0);
			}
			else
			{
				uParam1->f_3B = func_48(752, Global_11486, 0);
			}
			uParam1->f_3C = func_48(753, Global_11486, 0);
			uParam1->f_3D = func_48(754, Global_11486, 0);
		}
		if (unk_0x7AF0088ABFA713B6() && iParam0 == unk_0xBC25C936A095B5BA())
		{
			if (func_51(161, -1))
			{
				uParam1->f_3B = func_48(2051, Global_11486, 0);
			}
			else
			{
				uParam1->f_3B = func_48(752, Global_11486, 0);
			}
		}
	}
}

int func_48(int iParam0, int iParam1, int iParam2)//Position - 0x381D
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_49(iParam1)];
	if (unk_0x6CB99B97664C3727(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_49(var uParam0)//Position - 0x384F
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_50();
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

int func_50()//Position - 0x3883
{
	return Global_1407E0;
}

int func_51(int iParam0, int iParam1)//Position - 0x388F
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2705A2[iParam0 /*3*/][func_49(iParam1)];
	if (unk_0x9CADE88F210A0BAE(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_52(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x38BB
{
	int iVar0;
	
	iVar0 = func_45(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x35C830BCF2BF70BE(iParam0, iParam1);
		*uParam3 = unk_0x98F83843E924A56E(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (unk_0x4B4D220E2BCD09B8(iParam0) && unk_0xB2B29814741DDD85(iParam0) != -1)
				{
					*uParam2 = unk_0xB2B29814741DDD85(iParam0);
					*uParam3 = unk_0xC226620531B0B29B(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_53(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)//Position - 0x3E03
{
	int iVar0;
	
	iVar0 = func_45(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0xA86A4D206EC8EB16(iParam0, iParam1);
		*uParam3 = unk_0x695D13ECF7DAEC22(iParam0, iParam1);
		*uParam4 = unk_0x41AF5D2DF638D88F(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

int func_54()//Position - 0x4046
{
	func_55();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_55()//Position - 0x405F
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_46(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_45(unk_0xBC25C936A095B5BA());
			if (func_36(iVar0) && (!func_56(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_36(Global_19B04.f_932.f_21B.f_10CD))
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

bool func_56(int iParam0)//Position - 0x415C
{
	return Global_8C41 == iParam0;
}

void func_57(int iParam0, bool bParam1)//Position - 0x416A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_45(iParam0);
	if (func_36(iVar0) && !unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (iParam0 == unk_0xBC25C936A095B5BA())
		{
			func_58(iParam0, &(Global_19B04.f_932.f_21B.f_12A[iVar0 /*472*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_19B04.f_932.f_21B.f_6B3[iVar2 /*4*/][iVar0] = unk_0x45068B6398B7C15B(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0x2BCE278DDEEAB2EB();
					if (Global_19B04.f_932.f_21B.f_6B3[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_19B04.f_932.f_21B.f_6D4 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0x98ACC000724833AC(unk_0xB5CEFD608600A09F(), &iVar3);
			if (iVar0 == 0)
			{
				unk_0x3A57956BCE003880(joaat("sp0_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 1)
			{
				unk_0x3A57956BCE003880(joaat("sp1_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 2)
			{
				unk_0x3A57956BCE003880(joaat("sp2_parachute_current_tint"), iVar3, 1);
			}
		}
	}
}

void func_58(int iParam0, var uParam1)//Position - 0x425D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar5;
	int iVar6;
	struct<2> Var7;
	struct<4> Var8;
	int iVar9;
	int iVar10;
	
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*5*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_63(iVar0);
			if (iVar3 != 0)
			{
				Var4 = unk_0xFEBBB8B5E3A12A20(iParam0, func_63(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4 != 0 && Var4 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0x46C0645571D5BB21(iParam0, Var4);
					if (Var4 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = unk_0x5BA4FE244D010B3B(iParam0, Var4);
					Var4.f_4 = unk_0x8C4F3A254E8EA3BD(iParam0, Var4);
					if (Var4.f_1 == -1)
					{
						if (!unk_0xDBF94F25838DCE55(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_61(Var4, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0x1D3364A4FCD401E3(iParam0, Var4, iVar2))
						{
							unk_0xF0059F27F7BB6680(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_61(Var4, iVar1);
					}
				}
				*(uParam1[iVar0 /*5*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (50 - 1))
		{
			uParam1->f_DD[iVar0 /*5*/].f_1 = 0;
			iVar0++;
		}
		iVar6 = unk_0x8E3F7DC568AC987B();
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			if ((unk_0x6740839132C4BD08(iVar5, &Var7) && !func_60(Var7.f_1)) && iVar9 < 50)
			{
				if (!unk_0xD90F58A58682ED2F(Var7))
				{
					Var4 = Var7.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = unk_0x46C0645571D5BB21(iParam0, Var4);
					if (unk_0x7B2E29350659BE8E(iParam0, Var4, 0))
					{
						Var4.f_3 = unk_0x5BA4FE244D010B3B(iParam0, Var4);
						Var4.f_4 = unk_0x8C4F3A254E8EA3BD(iParam0, Var4);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0xDBF94F25838DCE55(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_DD[iVar9 /*5*/].f_1 = Var4.f_1;
					iVar10 = 0;
					iVar1 = 0;
					while (iVar1 < unk_0x24C19AF1AF00F6A0(iVar5))
					{
						if (unk_0x9278F82C9078D16B(iVar5, iVar1, &Var8))
						{
							if (!func_59(Var8.f_3))
							{
								if (unk_0x1D3364A4FCD401E3(iParam0, Var4, Var8.f_3))
								{
									unk_0xF0059F27F7BB6680(&(Var4.f_2), iVar10);
								}
								iVar10++;
							}
						}
						iVar1++;
					}
				}
				if (Var4 != 0)
				{
					if (!unk_0x7B2E29350659BE8E(iParam0, Var4, 0))
					{
						Var4 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_DD[iVar9 /*5*/] = { Var4 };
				iVar9++;
			}
			iVar5++;
		}
	}
}

int func_59(int iParam0)//Position - 0x44E7
{
	switch (iParam0)
	{
		case -1258515792:
		case 438243936:
		case -455079056:
		case 740920107:
		case -541616347:
		case 1809261196:
		case -1646538868:
		case -1290164948:
		case -964465134:
		case 1135718771:
		case 1253942266:
		case -403805974:
		case 691432737:
		case 987648331:
		case -431680535:
		case -847582310:
		case -92592218:
		case -494548326:
		case 730876697:
		case 583159708:
		case -1928503603:
		case 520557834:
			return 1;
			break;
	}
	return 0;
}

int func_60(int iParam0)//Position - 0x4582
{
	if (unk_0x7AF0088ABFA713B6())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return 0;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return 0;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return 0;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 0;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return 0;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return 0;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return 0;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return 0;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
				return 0;
				break;
			
			case -947031628:
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
			case joaat("weapon_flashlight"):
			case joaat("weapon_switchblade"):
			case joaat("weapon_revolver"):
			case joaat("weapon_dbshotgun"):
			case joaat("weapon_compactrifle"):
			case 317205821:
			case -1121678507:
			case 125959754:
			case -853065399:
			case -1169823560:
			case -1810795771:
			case 419712736:
			case -1746263880:
				return 1;
				break;
			}
	}
	return 0;
}

int func_61(int iParam0, int iParam1)//Position - 0x46F6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<4> Var5;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 8:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 8:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 7:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 8:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 9:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		case -1121678507:
			switch (iParam1)
			{
				case 0:
					iVar0 = -2067221805;
					break;
				
				case 1:
					iVar0 = -1820405577;
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_62(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < unk_0x24C19AF1AF00F6A0(iVar1))
					{
						if (unk_0x9278F82C9078D16B(iVar1, iVar2, &Var5))
						{
							if (!func_59(Var5.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var5.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_62(int iParam0, var uParam1)//Position - 0x5267
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x8E3F7DC568AC987B();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x6740839132C4BD08(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_63(int iParam0)//Position - 0x52A2
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

void func_64(int iParam0)//Position - 0x5516
{
	int iVar0;
	
	iVar0 = func_45(iParam0);
	if (func_36(iVar0) && !unk_0x36CEFBE9B745A58D(iParam0))
	{
		Global_19B04.f_932.f_21B.f_126[iVar0] = unk_0x27C402B01C926499(iParam0);
	}
}

void func_65(var uParam0, int iParam1)//Position - 0x5552
{
	int iVar0;
	vector3 vVar1;
	var uVar2;
	int iVar3;
	
	*uParam0 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
	uParam0->f_3 = unk_0x349C94FFF43E2979(unk_0xBC25C936A095B5BA());
	uParam0->f_5 = unk_0xADC5538B9DCA2177(unk_0xBC25C936A095B5BA());
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		uParam0->f_4 = unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F());
	}
	if (SYSTEM::VDIST(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (SYSTEM::VDIST(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.472f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (unk_0xB731B8C5BCE89836(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (unk_0xFA30DFD0084E92FE(Global_1163A, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (unk_0xFA30DFD0084E92FE(Global_1163A, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (unk_0xFA30DFD0084E92FE(Global_1163A, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (unk_0xFA30DFD0084E92FE(Global_1163A, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA()) == unk_0x5E29F9399E0829A3(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, true, 0) || unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, true, 0))
	{
		*uParam0 = { -601.59f, 2099.197f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.376f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (SYSTEM::VDIST(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.932f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (SYSTEM::VDIST(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.93f, 2594.153f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 1)
	{
		if (func_69(&iVar0))
		{
			if (func_67(iVar0, &vVar1, &uVar2))
			{
				vVar1.z = (vVar1.z + 1f);
				*uParam0 = { vVar1 };
				uParam0->f_3 = uVar2;
			}
		}
		else if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, true, 0))
		{
			iVar3 = func_102();
			if (iVar3 == 0)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar3 == 1)
			{
				*uParam0 = { -68.5531f, -1824.377f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar3 == 2)
			{
				*uParam0 = { -220.8189f, -1162.302f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, true, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, true, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, true, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_66(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_66(vector3 vParam0, char* sParam1, vector3 vParam2)//Position - 0x5AAD
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xB47B61546691E6E3(vParam0))
	{
		iVar0 = unk_0x5E29F9399E0829A3(vParam2, sParam1);
		if (!unk_0xBF697FA7422C0621(iVar0))
		{
			return 0;
		}
		iVar1 = unk_0x77E1B0C83C9CC9DD(vParam0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_67(int iParam0, var uParam1, var uParam2)//Position - 0x5AF1
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
		
		case 1:
			*uParam1 = { 129.8484f, -1716.528f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
		
		case 2:
			*uParam1 = { -1296.913f, -1120.999f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
		
		case 3:
			*uParam1 = { 1938.028f, 3718.736f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
		
		case 4:
			*uParam1 = { 1197.866f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
		
		case 5:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
		
		case 6:
			*uParam1 = { -287.7696f, 6238.081f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
		
		case 7:
			*uParam1 = { 99.2876f, -1395.16f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
		
		case 8:
			*uParam1 = { 1679.445f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
		
		case 9:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
		
		case 10:
			*uParam1 = { -1088.054f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
		
		case 11:
			*uParam1 = { 1194.163f, 2695.644f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
		
		case 12:
			*uParam1 = { -821.2829f, -1088.027f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
		
		case 13:
			*uParam1 = { -3.3416f, 6521.303f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
		
		case 14:
			*uParam1 = { -1208.417f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
		
		case 15:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
		
		case 16:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
		
		case 17:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
		
		case 18:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
		
		case 19:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
		
		case 20:
			*uParam1 = { -1461.355f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
		
		case 21:
			*uParam1 = { -1347.739f, -1278.573f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
		
		case 22:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
		
		case 23:
			*uParam1 = { 1858.774f, 3742.393f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
		
		case 24:
			*uParam1 = { -286.3272f, 6202.802f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
		
		case 25:
			*uParam1 = { -1161.596f, -1417.7f, 3.712f };
			*uParam2 = 246.9161f;
			break;
		
		case 26:
			*uParam1 = { 1308.952f, -1660.611f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
		
		case 27:
			*uParam1 = { -3161.585f, 1074.214f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
		
		case 28:
			*uParam1 = { 28.423f, -1110.814f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
		
		case 29:
			*uParam1 = { 1704.966f, 3749.709f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
		
		case 30:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
		
		case 31:
			*uParam1 = { 837.7854f, -1017.963f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
		
		case 32:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
		
		case 33:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
		
		case 34:
			*uParam1 = { -1323.06f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
		
		case 35:
			*uParam1 = { -1106.102f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
		
		case 36:
			*uParam1 = { -3157.932f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
		
		case 37:
			*uParam1 = { 2562.882f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
		
		case 38:
			*uParam1 = { 822.48f, -2142.875f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
		
		case 39:
			*uParam1 = { -1137.053f, -1993.916f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
		
		case 40:
			*uParam1 = { 717.8107f, -1084.081f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
		
		case 41:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
		
		case 42:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
		
		case 43:
			*uParam1 = { 1201.709f, 2664.813f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
		
		case 44:
			*uParam1 = { -200.1521f, -1297.502f, 30.296f };
			*uParam2 = 269.0687f;
			break;
		
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 48:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_68(*uParam1, 0f, 0f, 0f, 0);
}

bool func_68(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x61BC
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_69(var uParam0)//Position - 0x6203
{
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (func_90())
		{
			*uParam0 = func_75(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false), 6, -1, 0, 1, -1);
			if (func_74(*uParam0) && !func_70(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_70(int iParam0)//Position - 0x625E
{
	return func_71(iParam0, 0, 1);
}

int func_71(int iParam0, int iParam1, bool bParam2)//Position - 0x626E
{
	if (bParam2)
	{
		return unk_0xFA30DFD0084E92FE(Global_16B4F.f_531[iParam0], iParam1);
	}
	else if (unk_0x7AF0088ABFA713B6())
	{
		if (func_73() == 0)
		{
			return unk_0xFA30DFD0084E92FE(func_48(func_72(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xFA30DFD0084E92FE(Global_19B04.f_29C[iParam0], iParam1);
	}
	return 0;
}

int func_72(int iParam0)//Position - 0x62CE
{
	switch (iParam0)
	{
		case 0:
			return 827;
			break;
		
		case 1:
			return 828;
			break;
		
		case 2:
			return 829;
			break;
		
		case 3:
			return 830;
			break;
		
		case 4:
			return 831;
			break;
		
		case 5:
			return 832;
			break;
		
		case 6:
			return 833;
			break;
		
		case 7:
			return 834;
			break;
		
		case 8:
			return 835;
			break;
		
		case 9:
			return 836;
			break;
		
		case 10:
			return 837;
			break;
		
		case 11:
			return 838;
			break;
		
		case 12:
			return 839;
			break;
		
		case 13:
			return 840;
			break;
		
		case 14:
			return 841;
			break;
		
		case 15:
			return 843;
			break;
		
		case 16:
			return 844;
			break;
		
		case 17:
			return 845;
			break;
		
		case 18:
			return 846;
			break;
		
		case 19:
			return 847;
			break;
		
		case 20:
			return 848;
			break;
		
		case 21:
			return 849;
			break;
		
		case 22:
			return 850;
			break;
		
		case 23:
			return 851;
			break;
		
		case 24:
			return 852;
			break;
		
		case 25:
			return 853;
			break;
		
		case 26:
			return 854;
			break;
		
		case 27:
			return 855;
			break;
		
		case 28:
			return 856;
			break;
		
		case 29:
			return 857;
			break;
		
		case 30:
			return 858;
			break;
		
		case 31:
			return 859;
			break;
		
		case 32:
			return 860;
			break;
		
		case 33:
			return 861;
			break;
		
		case 34:
			return 862;
			break;
		
		case 35:
			return 863;
			break;
		
		case 36:
			return 864;
			break;
		
		case 37:
			return 865;
			break;
		
		case 38:
			return 866;
			break;
		
		case 39:
			return 867;
			break;
		
		case 40:
			return 871;
			break;
		
		case 41:
			return 872;
			break;
		
		case 42:
			return 873;
			break;
		
		case 43:
			return 874;
			break;
		
		case 44:
			return 7779;
			break;
		
		case 45:
			return 3804;
			break;
		
		case 46:
			return 5379;
			break;
		
		case 47:
			return 6151;
			break;
		
		case 48:
			return 7228;
			break;
		
		default:
			break;
	}
	return 8804;
}

int func_73()//Position - 0x65C2
{
	return Global_62BD;
}

int func_74(int iParam0)//Position - 0x65CD
{
	return func_71(iParam0, 5, 1);
}

int func_75(vector3 vParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)//Position - 0x65DD
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 48)
	{
		if (iParam1 == 6 || iParam1 == func_89(iVar0))
		{
			if (!bParam3 || func_88(iVar0))
			{
				fVar1 = unk_0xF0F2FC9DE291567F(vParam0, func_76(iVar0, 0), true);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam2) || iParam2 == -1)) && (iParam4 || iVar0 != 21)) && iVar0 != iParam5)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_76(int iParam0, bool bParam1)//Position - 0x667F
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
		
		case 45:
			return func_87(Global_1732A);
			break;
		
		case 46:
			if (Global_183F8F != func_86())
			{
				if (func_85(Global_183F8F))
				{
					return func_78(2, 2);
				}
				else if (func_77(Global_183F8F))
				{
					return func_78(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 47:
			return 510.1f, 4749.5f, -69f;
			break;
		
		case 48:
			return -1422.197f, -3015.803f, -79.1603f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_77(int iParam0)//Position - 0x6C39
{
	if (iParam0 != func_86())
	{
		if ((unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 0) || unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 1)) || unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_78(int iParam0, int iParam1)//Position - 0x6C97
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar1 = { 1000000f, 1000000f, 1000000f };
	if (Global_183F8F != func_86())
	{
		if (iParam1 == 3)
		{
			if (func_79(iParam0, 1, &vVar0, 0, 0))
			{
				vVar1 = { vVar0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (unk_0xFA30DFD0084E92FE(Global_18402B[Global_183F8F /*770*/].f_111.f_F4, 4))
			{
				if (func_79(iParam0, 1, &vVar0, 0, 0))
				{
					vVar1 = { vVar0 };
				}
			}
			else if (unk_0xFA30DFD0084E92FE(Global_18402B[Global_183F8F /*770*/].f_111.f_F4, 5))
			{
				if (func_79(iParam0, 2, &vVar0, 0, 0))
				{
					vVar1 = { vVar0 };
				}
			}
		}
	}
	return vVar1;
}

int func_79(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)//Position - 0x6D45
{
	struct<4> Var0;
	vector3 vVar1;
	struct<4> Var2;
	vector3 vVar3;
	
	if (!func_84(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_84(iParam1, &vVar1))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var2 = { func_82(iParam0) };
	}
	else
	{
		Var2 = { func_81(iParam0) };
	}
	vVar3 = { Var2 - Var0 };
	vVar3 = { func_80(vVar3, -Var0.f_3.f_2) };
	vVar3 = { func_80(vVar3, vVar1.f_3.f_2) };
	*uParam2 = { unk_0x89D97EB4FAE4A574(vVar1, 0f, vVar3) };
	uParam2->f_3 = { Var2.f_3 };
	return 1;
}

Vector3 func_80(vector3 vParam0, float fParam1)//Position - 0x6DDA
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

struct<6> func_81(int iParam0)//Position - 0x6E1E
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 1:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 2:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 3:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 4:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 5:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 6:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 7:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 8:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
	}
	return Var0;
}

struct<6> func_82(int iParam0)//Position - 0x6FA2
{
	return func_83(iParam0);
}

struct<6> func_83(int iParam0)//Position - 0x6FB0
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1105.22f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			Var0 = { 1104.105f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 19:
			Var0 = { 1105.22f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 20:
			Var0 = { 1104.105f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 2:
			Var0 = { 1102f, -3011.925f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { 1103f, -3010f, -38.125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { 1103.213f, -3013.483f, -39.03f };
			Var0.f_3 = { 0f, 0f, 31.32f };
			break;
		
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101.408f, -3012.32f, -38.45339f };
			break;
		
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103.037f, -3012.318f, -39.99874f };
			break;
		
		case 7:
			Var0 = { 1105.645f, -3012.04f, -39.542f };
			Var0.f_3 = { 0f, 0f, -86.04f };
			break;
		
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104.063f, -3012.368f, -39.99875f };
			break;
		
		case 9:
			Var0 = { 1105.665f, -3012.334f, -38.50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 10:
			Var0 = { 1102.504f, -3012.35f, -39.341f };
			Var0.f_3 = { 0f, 0f, -96.48f };
			break;
		
		case 11:
			Var0 = { 1102.928f, -3012.693f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 12:
			Var0 = { 1102.942f, -3011.315f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 61:
			Var0 = { 1101.994f, -3012.878f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 62:
			Var0 = { 1103.152f, -3013.032f, -38.24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 13:
			Var0 = { 1102.465f, -3009.515f, -39.341f };
			Var0.f_3 = { 0f, 0f, -12.96f };
			break;
		
		case 14:
			Var0 = { 1102.917f, -3009.525f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 15:
			Var0 = { 1102.922f, -3010.887f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 63:
			Var0 = { 1101.682f, -3009.227f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { 1102.453f, -3008.51f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 16:
			Var0 = { 1104.684f, -3009.561f, -39.341f };
			Var0.f_3 = { 0f, 0f, 169.56f };
			break;
		
		case 17:
			Var0 = { 1104.34f, -3008.698f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 18:
			Var0 = { 1104.344f, -3009.618f, -37.98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 65:
			Var0 = { 1105.459f, -3009.793f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 66:
			Var0 = { 1104.783f, -3010.433f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 44:
			Var0 = { 1104.025f, -3007.316f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 21:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 22:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 23:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 24:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 25:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 26:
			Var0 = { 1102.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 27:
			Var0 = { 1102.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 28:
			Var0 = { 1105.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 29:
			Var0 = { 1105.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 30:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 31:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 32:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 33:
			Var0 = { 1102.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 34:
			Var0 = { 1102.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 35:
			Var0 = { 1105.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 36:
			Var0 = { 1105.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 37:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 38:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 39:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
		
		case 40:
			Var0 = { 1102.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 41:
			Var0 = { 1102.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 42:
			Var0 = { 1105.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 43:
			Var0 = { 1105.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 45:
			Var0 = { 1101f, -3011.9f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 46:
			Var0 = { 1102f, -3010f, -38.115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 47:
			Var0 = { 1105.174f, -3004.16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 48:
			Var0 = { 1105.175f, -3005.818f, -37.91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 49:
			Var0 = { 1106.6f, -3000.847f, -39.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 50:
			Var0 = { 1106.601f, -3002.171f, -37.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 51:
			Var0 = { 1101.95f, -3011.9f, -39.2f };
			Var0.f_3 = { 0f, 0f, 49.5f };
			break;
		
		case 52:
			Var0 = { 1101.95f, -3010f, -39.2f };
			Var0.f_3 = { 0f, 0f, 130.32f };
			break;
		
		case 53:
			Var0 = { 1105.16f, -3009.06f, -39.2f };
			Var0.f_3 = { 0f, 0f, -44.64f };
			break;
		
		case 54:
			Var0 = { 1102.476f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 55:
			Var0 = { 1099f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 56:
			Var0 = { 1103.593f, -3008.27f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 57:
			Var0 = { 1103.565f, -3014f, -39.988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 58:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 59:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 60:
			Var0 = { 1103.55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 67:
			Var0 = { 1103.55f, -3013.762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 68:
			Var0 = { 1103.55f, -3006.186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103.6f, -3013.933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_84(int iParam0, var uParam1)//Position - 0x7A77
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

int func_85(int iParam0)//Position - 0x7AF9
{
	if (iParam0 != func_86())
	{
		if ((unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 3) || unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 4)) || unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 5))
		{
			return 1;
		}
	}
	return 0;
}

int func_86()//Position - 0x7B57
{
	return -1;
}

Vector3 func_87(int iParam0)//Position - 0x7B60
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974.9542f, -3000.091f, -35f;
			break;
		
		case 6:
			return -1586.36f, -566.6f, 106.17f;
			break;
		
		case 7:
			return -1389.87f, -465.17f, 82.68f;
			break;
		
		case 8:
			return -145.81f, -590.2f, 171.13f;
			break;
		
		case 9:
			return -62.49f, -823.55f, 288.74f;
			break;
		
		case 4:
			return 1102.515f, -3158.888f, -38.5186f;
			break;
		
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
			break;
		
		case 10:
			return 1103.562f, -3000f, -40f;
			break;
		
		case 11:
			return 938.3077f, -3196.112f, -100f;
			break;
		
		case 12:
			return -1266.802f, -3014.836f, -49.4895f;
			break;
		
		case 13:
			return 520.0001f, 4750f, -70f;
			break;
		
		case 14:
			return 345.0041f, 4842.001f, -59.9997f;
			break;
		
		case 15:
			return -1604.664f, -3012.583f, -79.9999f;
			break;
		
		case 16:
			return -1421.015f, -3012.587f, -80f;
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_88(int iParam0)//Position - 0x7D33
{
	return func_71(iParam0, 0, 0);
}

int func_89(int iParam0)//Position - 0x7D43
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
	}
	return 6;
}

bool func_90()//Position - 0x7FDD
{
	return Global_16B4F.f_141 > 0;
}

var func_91()//Position - 0x7FEE
{
	var uVar0;
	
	func_101(&uVar0, unk_0xF40D00CD7B81C0A8());
	func_100(&uVar0, unk_0x7E09057438B9D216());
	func_99(&uVar0, unk_0x6E06C0DB9B43570D());
	func_94(&uVar0, unk_0xBE14F159908E4EE5());
	func_93(&uVar0, unk_0xDD6A91E47ED4D0CF());
	func_92(&uVar0, unk_0x4EEB3860BFC44B78());
	return uVar0;
}

void func_92(var uParam0, int iParam1)//Position - 0x8035
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_93(var uParam0, int iParam1)//Position - 0x80BB
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_94(var uParam0, int iParam1)//Position - 0x80EE
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_98(*uParam0);
	iVar1 = func_96(*uParam0);
	if (iParam1 < 1 || iParam1 > func_95(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_95(int iParam0, int iParam1)//Position - 0x813F
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

var func_96(int iParam0)//Position - 0x81E1
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_97(unk_0xFA30DFD0084E92FE(iParam0, 31), -1, 1)) + 2011;
}

int func_97(bool bParam0, int iParam1, int iParam2)//Position - 0x8206
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_98(var uParam0)//Position - 0x821D
{
	return uParam0 & 15;
}

void func_99(var uParam0, int iParam1)//Position - 0x822A
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_100(var uParam0, int iParam1)//Position - 0x8264
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_101(var uParam0, int iParam1)//Position - 0x829F
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_102()//Position - 0x82DB
{
	func_55();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_103(int iParam0)//Position - 0x82F4
{
	var uVar0;
	vector3 vVar1[24];
	
	if (unk_0xA76D65C63ED50F67() || unk_0xF49912B78E2591B6())
	{
		uVar0 = iParam0;
		unk_0xCEFBE636B33A557B(9, &uVar0, 1, 1);
	}
	else if (unk_0x3E9993F328985CCB() || unk_0xF7E138CFA19B55E7())
	{
		StringCopy(&cVar1, "SPRC_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x785F3AE9C51AE93D(9, &cVar1);
	}
}

void func_104(char* sParam0, int iParam1, int iParam2)//Position - 0x834D
{
	if (!unk_0xF1734B55490E9045(&Global_1603A))
	{
		unk_0x857F9926E7882AF4(&Global_1603A, 0, 0, 0, 1, 0);
		StringCopy(&Global_1603A, "", 64);
	}
	StringCopy(&Global_1603A, sParam0, 64);
	unk_0xFC3106D886D77FE2(sParam0, iParam1, iParam2, func_105(0));
}

bool func_105(bool bParam0)//Position - 0x838F
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_1163A, 0);
}

struct<2> func_106(int iParam0)//Position - 0x83BA
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

void func_107(int iParam0, var uParam1)//Position - 0x8807
{
	switch (iParam0)
	{
		case 0:
			func_108(uParam1, "Abigail1", func_9(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_109(iParam0), 1, 0);
			break;
		
		case 1:
			func_108(uParam1, "Abigail2", func_9(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_109(iParam0), 1, 0);
			break;
		
		case 2:
			func_108(uParam1, "Barry1", func_9(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_109(iParam0), 1, 0);
			break;
		
		case 3:
			func_108(uParam1, "Barry2", func_9(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_109(iParam0), 1, 1);
			break;
		
		case 4:
			func_108(uParam1, "Barry3", func_9(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_109(iParam0), 0, 0);
			break;
		
		case 5:
			func_108(uParam1, "Barry3A", func_9(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		case 6:
			func_108(uParam1, "Barry3C", func_9(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		case 7:
			func_108(uParam1, "Barry4", func_9(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_109(iParam0), 0, 0);
			break;
		
		case 8:
			func_108(uParam1, "Dreyfuss1", func_9(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_109(iParam0), 0, 0);
			break;
		
		case 9:
			func_108(uParam1, "Epsilon1", func_9(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_109(iParam0), 0, 0);
			break;
		
		case 10:
			func_108(uParam1, "Epsilon2", func_9(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_109(iParam0), 1, 0);
			break;
		
		case 11:
			func_108(uParam1, "Epsilon3", func_9(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_109(iParam0), 0, 0);
			break;
		
		case 12:
			func_108(uParam1, "Epsilon4", func_9(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_109(iParam0), 0, 0);
			break;
		
		case 13:
			func_108(uParam1, "Epsilon5", func_9(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_109(iParam0), 1, 0);
			break;
		
		case 14:
			func_108(uParam1, "Epsilon6", func_9(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		case 15:
			func_108(uParam1, "Epsilon7", func_9(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_109(iParam0), 0, 0);
			break;
		
		case 16:
			func_108(uParam1, "Epsilon8", func_9(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_109(iParam0), 1, 0);
			break;
		
		case 17:
			func_108(uParam1, "Extreme1", func_9(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		case 18:
			func_108(uParam1, "Extreme2", func_9(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		case 19:
			func_108(uParam1, "Extreme3", func_9(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		case 20:
			func_108(uParam1, "Extreme4", func_9(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_109(iParam0), 0, 0);
			break;
		
		case 21:
			func_108(uParam1, "Fanatic1", func_9(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_109(iParam0), 1, 0);
			break;
		
		case 22:
			func_108(uParam1, "Fanatic2", func_9(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_109(iParam0), 1, 0);
			break;
		
		case 23:
			func_108(uParam1, "Fanatic3", func_9(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_109(iParam0), 0, 1);
			break;
		
		case 24:
			func_108(uParam1, "Hao1", func_9(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_109(iParam0), 0, 1);
			break;
		
		case 25:
			func_108(uParam1, "Hunting1", func_9(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		case 26:
			func_108(uParam1, "Hunting2", func_9(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		case 27:
			func_108(uParam1, "Josh1", func_9(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_109(iParam0), 1, 0);
			break;
		
		case 28:
			func_108(uParam1, "Josh2", func_9(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_109(iParam0), 1, 1);
			break;
		
		case 29:
			func_108(uParam1, "Josh3", func_9(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_109(iParam0), 1, 1);
			break;
		
		case 30:
			func_108(uParam1, "Josh4", func_9(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_109(iParam0), 1, 0);
			break;
		
		case 31:
			func_108(uParam1, "Maude1", func_9(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		case 32:
			func_108(uParam1, "Minute1", func_9(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		case 33:
			func_108(uParam1, "Minute2", func_9(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		case 34:
			func_108(uParam1, "Minute3", func_9(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		case 35:
			func_108(uParam1, "MrsPhilips1", func_9(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_109(iParam0), 0, 0);
			break;
		
		case 36:
			func_108(uParam1, "MrsPhilips2", func_9(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_109(iParam0), 0, 0);
			break;
		
		case 37:
			func_108(uParam1, "Nigel1", func_9(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_109(iParam0), 1, 0);
			break;
		
		case 38:
			func_108(uParam1, "Nigel1A", func_9(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_109(iParam0), 1, 1);
			break;
		
		case 39:
			func_108(uParam1, "Nigel1B", func_9(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_109(iParam0), 1, 1);
			break;
		
		case 40:
			func_108(uParam1, "Nigel1C", func_9(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_109(iParam0), 1, 1);
			break;
		
		case 41:
			func_108(uParam1, "Nigel1D", func_9(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_109(iParam0), 1, 1);
			break;
		
		case 42:
			func_108(uParam1, "Nigel2", func_9(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_109(iParam0), 1, 1);
			break;
		
		case 43:
			func_108(uParam1, "Nigel3", func_9(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_109(iParam0), 1, 1);
			break;
		
		case 44:
			func_108(uParam1, "Omega1", func_9(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_109(iParam0), 0, 0);
			break;
		
		case 45:
			func_108(uParam1, "Omega2", func_9(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_109(iParam0), 0, 0);
			break;
		
		case 46:
			func_108(uParam1, "Paparazzo1", func_9(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		case 47:
			func_108(uParam1, "Paparazzo2", func_9(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		case 48:
			func_108(uParam1, "Paparazzo3", func_9(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_109(iParam0), 0, 0);
			break;
		
		case 49:
			func_108(uParam1, "Paparazzo3A", func_9(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		case 50:
			func_108(uParam1, "Paparazzo3B", func_9(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		case 51:
			func_108(uParam1, "Paparazzo4", func_9(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_109(iParam0), 0, 0);
			break;
		
		case 52:
			func_108(uParam1, "Rampage1", func_9(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_109(iParam0), 0, 0);
			break;
		
		case 54:
			func_108(uParam1, "Rampage3", func_9(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_109(iParam0), 1, 0);
			break;
		
		case 55:
			func_108(uParam1, "Rampage4", func_9(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_109(iParam0), 1, 0);
			break;
		
		case 56:
			func_108(uParam1, "Rampage5", func_9(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_109(iParam0), 0, 0);
			break;
		
		case 53:
			func_108(uParam1, "Rampage2", func_9(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_109(iParam0), 1, 0);
			break;
		
		case 57:
			func_108(uParam1, "TheLastOne", func_9(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		case 58:
			func_108(uParam1, "Tonya1", func_9(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		case 59:
			func_108(uParam1, "Tonya2", func_9(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		case 60:
			func_108(uParam1, "Tonya3", func_9(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		case 61:
			func_108(uParam1, "Tonya4", func_9(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		case 62:
			func_108(uParam1, "Tonya5", func_9(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_108(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0x9A4E
{
	uParam0->f_4 = iParam4;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam3;
	uParam0->f_5 = iParam5;
	uParam0->f_6 = { vParam6 };
	uParam0->f_9 = iParam7;
	StringCopy(&(uParam0->f_A), sParam8, 16);
	uParam0->f_E = iParam9;
	uParam0->f_F = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 24);
	uParam0->f_16 = iParam12;
	uParam0->f_17 = iParam13;
	uParam0->f_18 = iParam14;
	uParam0->f_19 = iParam15;
	uParam0->f_1A = iParam16;
	uParam0->f_1B = iParam17;
	uParam0->f_1C = iParam18;
	uParam0->f_1D = uParam19;
	uParam0->f_1E = iParam20;
	uParam0->f_1F = iParam21;
}

int func_109(int iParam0)//Position - 0x9ADF
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

int func_110(int iParam0)//Position - 0x9E25
{
	int iVar0;
	
	if (func_140(&(iParam0->f_1)))
	{
		if (!unk_0xF1734B55490E9045(&(iParam0->f_9)))
		{
			func_130(1);
			func_128(iParam0, 1, func_129(*iParam0));
		}
		if (iParam0->f_1B)
		{
			if (func_127(*iParam0))
			{
				while (!unk_0x7214F4879DF8A314(unk_0xBC25C936A095B5BA()))
				{
					func_144();
					SYSTEM::WAIT(0);
				}
			}
		}
		func_111(*iParam0);
		iVar0 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS(&(iParam0->f_1), iParam0, 61, 23500);
		unk_0x91DEC7187FA01089(&(iParam0->f_1));
		if (unk_0xDC9E16E99286F31D())
		{
			func_268("Initial cutscene loaded and passing to RC mission.");
			unk_0xC84DCDEC9A3FA0D0(iVar0);
		}
		else
		{
			func_268("Initial cutscene wasn't loaded in time to pass to RC mission.");
			unk_0xD103510B8989BEB2();
		}
		return 1;
	}
	return 0;
}

void func_111(int iParam0)//Position - 0x9EC9
{
	struct<2> Var0;
	
	func_126();
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 32, false);
		unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 250, false);
	}
	if (func_125(iParam0))
	{
		unk_0x9965F1612928953B(unk_0xBC25C936A095B5BA(), 0);
	}
	unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 1);
	unk_0x841D233D3CE81152(0, true);
	unk_0x841D233D3CE81152(3, true);
	unk_0x841D233D3CE81152(2, true);
	if (Global_90C1 == 1)
	{
		if (func_123(unk_0xBC25C936A095B5BA()))
		{
			func_114(unk_0xBC25C936A095B5BA());
		}
	}
	if (!func_163())
	{
		if (iParam0 < 63)
		{
			func_112(iParam0);
			Var0 = { func_9(iParam0) };
			unk_0x3FF92BBF0607A406(1, &Var0);
		}
	}
}

void func_112(int iParam0)//Position - 0x9F64
{
	if (iParam0 < 63)
	{
		func_113();
		Global_11641 = iParam0;
		Global_11640 = 0;
		Global_11643 = 7;
	}
}

void func_113()//Position - 0x9F8A
{
	if (Global_11640 != 6)
	{
	}
	if (Global_11645)
	{
		unk_0xC0404835F30391BB(15);
		Global_11645 = 0;
		Global_43C1.f_1EFB = 0;
	}
	Global_11640 = 6;
	Global_11642 = -1;
	Global_11641 = -1;
}

void func_114(int iParam0)//Position - 0x9FC2
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return;
	}
	iVar0 = func_122(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_8FEC[iVar0 /*5*/];
		func_117(1, iVar1, 1);
		return;
	}
	iVar2 = func_116(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_115(iVar2);
}

void func_115(int iParam0)//Position - 0xA01B
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_8FD2[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_8FD2[iParam0 /*5*/].f_1 == unk_0xBC25C936A095B5BA())
		{
			Global_90BF = 0;
		}
	}
	Global_8FD2[iParam0 /*5*/] = 13;
	Global_8FD2[iParam0 /*5*/].f_1 = 0;
	Global_8FD2[iParam0 /*5*/].f_2 = 0;
	Global_8FD2[iParam0 /*5*/].f_3 = 0;
	Global_8FD2[iParam0 /*5*/].f_4 = 0;
	Global_8FD1 = (Global_8FD1 - 1);
	if (Global_8FD1 < 0)
	{
		Global_8FD1 = 0;
	}
}

int func_116(int iParam0)//Position - 0xA09E
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_8FD2[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_117(int iParam0, int iParam1, int iParam2)//Position - 0xA0CF
{
	func_118(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_118(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0xA0E4
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_120(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_119();
	if (iVar0 == -1)
	{
		return;
	}
	Global_903D[iVar0 /*6*/] = iParam0;
	Global_903D[iVar0 /*6*/].f_1 = iParam1;
	Global_903D[iVar0 /*6*/].f_2 = iParam2;
	Global_903D[iVar0 /*6*/].f_3 = iParam3;
	Global_903D[iVar0 /*6*/].f_4 = iParam4;
	Global_903D[iVar0 /*6*/].f_5 = iParam5;
}

int func_119()//Position - 0xA166
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_903D[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_120(int iParam0, int iParam1, int iParam2)//Position - 0xA197
{
	if (func_121(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_121(int iParam0, int iParam1, int iParam2)//Position - 0xA1B2
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_903D[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_903D[iVar0 /*6*/])
			{
				if (iParam1 == Global_903D[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_122(int iParam0)//Position - 0xA1FE
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_8FEC[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_8FEC[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_123(int iParam0)//Position - 0xA247
{
	if (func_124(iParam0))
	{
		if (!unk_0x36CEFBE9B745A58D(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_124(int iParam0)//Position - 0xA267
{
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_125(int iParam0)//Position - 0xA288
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
		case 60:
		case 61:
			return 0;
			break;
	}
	return 1;
}

void func_126()//Position - 0xA2DB
{
	if (Global_C60[0 /*2811*/][0 /*281*/].f_103 == 2)
	{
		Global_C60[0 /*2811*/][0 /*281*/].f_103 = 0;
	}
	if (Global_C60[1 /*2811*/][0 /*281*/].f_103 == 2)
	{
		Global_C60[1 /*2811*/][0 /*281*/].f_103 = 0;
	}
	if (Global_C60[2 /*2811*/][0 /*281*/].f_103 == 2)
	{
		Global_C60[2 /*2811*/][0 /*281*/].f_103 = 0;
	}
	unk_0x7CB6FD92BE491AD9(&Global_93B, 25);
	unk_0xF0059F27F7BB6680(&Global_93C, 11);
}

int func_127(int iParam0)//Position - 0xA358
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 14:
		case 16:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
			return 0;
			break;
	}
	return 1;
}

void func_128(var uParam0, bool bParam1, bool bParam2)//Position - 0xA3AB
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_124(uParam0->f_1C[iVar0]))
		{
			unk_0x06D93FD5E4D394CF(uParam0->f_1C[iVar0], bParam1, bParam1, bParam1, bParam1, bParam1, false, 0, false);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_124(uParam0->f_23[iVar0]))
		{
			unk_0x06D93FD5E4D394CF(uParam0->f_23[iVar0], bParam1, bParam1, bParam1, bParam1, bParam1, false, 0, false);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_124(uParam0->f_29[iVar0]))
		{
			unk_0x06D93FD5E4D394CF(uParam0->f_29[iVar0], bParam1, bParam1, bParam1, bParam1, bParam1, false, 0, false);
		}
		iVar0++;
	}
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0x06D93FD5E4D394CF(unk_0xBC25C936A095B5BA(), bParam1, bParam1, bParam1, bParam1, bParam1, false, 0, false);
		unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), bParam1);
		if (bParam2)
		{
			unk_0x8E25082A46F87892(unk_0xBC25C936A095B5BA(), joaat("weapon_unarmed"), true);
		}
	}
}

int func_129(int iParam0)//Position - 0xA4A0
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 14:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
			return 0;
			break;
	}
	return 1;
}

void func_130(bool bParam0)//Position - 0xA50B
{
	int iVar0;
	
	iVar0 = unk_0xFC1CAE18F3ECBF2D();
	if (!unk_0x0928DEFC3216677B(iVar0))
	{
		if (bParam0)
		{
		}
		unk_0xDDCAA2E64649E083(iVar0, bParam0, 16);
		unk_0xDDCAA2E64649E083(iVar0, bParam0, 32);
	}
	func_131(1, 1, 0, 0, 0);
}

void func_131(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)//Position - 0xA548
{
	if (bParam0)
	{
		unk_0x0D2E9062E966BE4F(unk_0xB5CEFD608600A09F());
		unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 1);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 1);
		func_139(1);
		unk_0x32FF237D69EB5489();
		unk_0x3169E2C5E6A096BC();
		if (Global_389D.f_1 > 3)
		{
			if (unk_0x58E7DDFF8D17A82A())
			{
				unk_0x1E08809A5041F85B(false);
			}
			if (!func_138())
			{
				Global_389D.f_1 = 3;
			}
			Global_3DB8 = 5;
		}
		func_137(1, iParam3, iParam2, 0);
		Global_DAA5 = 1;
		Global_10ABB = 1;
		Global_11540 = 1;
	}
	else
	{
		func_139(0);
		unk_0xCB50D125C355ED9C();
		Global_DAA5 = 0;
		if (bParam1)
		{
			unk_0x7FF4F08CAB3344B1();
		}
		unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 0);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 0);
		func_137(0, iParam3, iParam2, 0);
		if (unk_0x7AF0088ABFA713B6())
		{
			if ((((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_135(unk_0xB5CEFD608600A09F())) && !func_133(unk_0xB5CEFD608600A09F(), 0)) && !func_132()) && !bParam4)
			{
				unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), false);
			}
		}
		else if ((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_135(unk_0xB5CEFD608600A09F())) && !bParam4)
		{
			unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), false);
		}
		Global_11540 = 0;
	}
}

bool func_132()//Position - 0xA671
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_27.f_12, 14);
}

bool func_133(int iParam0, int iParam1)//Position - 0xA68E
{
	bool bVar0;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		bVar0 = func_134(-1, 0) == 8;
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

int func_134(int iParam0, bool bParam1)//Position - 0xA6D9
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_50();
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

int func_135(int iParam0)//Position - 0xA71A
{
	if (func_133(iParam0, 0))
	{
		return 1;
	}
	if (func_136())
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

bool func_136()//Position - 0xA75C
{
	return unk_0xFA30DFD0084E92FE(Global_240006, 3);
}

int func_137(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0xA76D
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x8ACB0C3FACC09467())
	{
		if (unk_0xB34A6828EBD4A1D8() != iParam0 && uParam2)
		{
			unk_0x22506029183A78EC(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_138()//Position - 0xA7A0
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_139(int iParam0)//Position - 0xA7C7
{
	if (iParam0 == 1)
	{
		unk_0xF0059F27F7BB6680(&Global_93B, 13);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&Global_93B, 13);
	}
}

int func_140(char* sParam0)//Position - 0xA7EA
{
	if (!unk_0xF1734B55490E9045(sParam0))
	{
		unk_0x63831D2D5110C305(sParam0);
		while (!unk_0xACE95AD318CE412B(sParam0))
		{
			unk_0x63831D2D5110C305(sParam0);
			SYSTEM::WAIT(0);
		}
		return 1;
	}
	func_268("Attempting to launch invalid script file [TERMINATING]");
	return 0;
}

void func_141()//Position - 0xA827
{
	Global_394A = 0;
	func_142();
}

void func_142()//Position - 0xA837
{
	unk_0x5C7DC611411E2CF9();
	Global_41AB = 0;
	if ((unk_0x58E7DDFF8D17A82A() || Global_389D.f_1 == 9) || Global_389C == 1)
	{
		unk_0x1E08809A5041F85B(false);
		Global_3DB8 = 6;
		Global_389D.f_1 = 3;
		return;
	}
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x1E08809A5041F85B(true);
		Global_3DB8 = 6;
		return;
	}
}

int func_143()//Position - 0xA88E
{
	if (Global_3DB8 != 0 || unk_0xE6711F601F11B66B())
	{
		return 1;
	}
	return 0;
}

void func_144()//Position - 0xA8B0
{
	func_149(0);
	func_148();
	func_145();
}

void func_145()//Position - 0xA8C5
{
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			if (func_146(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 10.5f, 1, 1056964608, 0, 1, 0))
			{
				if (unk_0xF4FCC3C1048FF2AB(unk_0xBC25C936A095B5BA(), -828834893) != 1)
				{
					unk_0xA3981DED4FC2E56E(unk_0xBC25C936A095B5BA(), 0, 0);
				}
			}
		}
	}
}

int func_146(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0xA91D
{
	unk_0xBBC4195AD74D153D(0, 71, 1);
	unk_0xBBC4195AD74D153D(0, 72, 1);
	unk_0xBBC4195AD74D153D(0, 76, 1);
	unk_0xBBC4195AD74D153D(0, 73, 1);
	unk_0xBBC4195AD74D153D(0, 59, 1);
	unk_0xBBC4195AD74D153D(0, 60, 1);
	if (bParam5)
	{
		unk_0xBBC4195AD74D153D(0, 75, 1);
	}
	unk_0xBBC4195AD74D153D(0, 80, 1);
	if (!bParam6)
	{
		unk_0xBBC4195AD74D153D(0, 69, 1);
		unk_0xBBC4195AD74D153D(0, 70, 1);
		unk_0xBBC4195AD74D153D(0, 68, 1);
	}
	unk_0xBBC4195AD74D153D(0, 74, 1);
	unk_0xBBC4195AD74D153D(0, 86, 1);
	unk_0xBBC4195AD74D153D(0, 81, 1);
	unk_0xBBC4195AD74D153D(0, 82, 1);
	unk_0xBBC4195AD74D153D(0, 138, 1);
	unk_0xBBC4195AD74D153D(0, 136, 1);
	unk_0xBBC4195AD74D153D(0, 114, 1);
	unk_0xBBC4195AD74D153D(0, 107, 1);
	unk_0xBBC4195AD74D153D(0, 110, 1);
	unk_0xBBC4195AD74D153D(0, 89, 1);
	unk_0xBBC4195AD74D153D(0, 89, 1);
	unk_0xBBC4195AD74D153D(0, 87, 1);
	unk_0xBBC4195AD74D153D(0, 88, 1);
	unk_0xBBC4195AD74D153D(0, 113, 1);
	unk_0xBBC4195AD74D153D(0, 115, 1);
	unk_0xBBC4195AD74D153D(0, 116, 1);
	unk_0xBBC4195AD74D153D(0, 117, 1);
	unk_0xBBC4195AD74D153D(0, 118, 1);
	unk_0xBBC4195AD74D153D(0, 119, 1);
	unk_0xBBC4195AD74D153D(0, 131, 1);
	unk_0xBBC4195AD74D153D(0, 132, 1);
	unk_0xBBC4195AD74D153D(0, 123, 1);
	unk_0xBBC4195AD74D153D(0, 126, 1);
	unk_0xBBC4195AD74D153D(0, 129, 1);
	unk_0xBBC4195AD74D153D(0, 130, 1);
	unk_0xBBC4195AD74D153D(0, 133, 1);
	unk_0xBBC4195AD74D153D(0, 134, 1);
	unk_0x12D40A07C0F343DC();
	func_147(iParam0);
	if ((unk_0x105601648511CC64() - Global_1D) > 500)
	{
		unk_0x241D744C1CCBC526(iParam0, fParam1, iParam2, iParam4);
	}
	Global_1D = unk_0x105601648511CC64();
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		if (unk_0x357058E632979E65(unk_0x8910237449BB6F79(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_147(int iParam0)//Position - 0xAAAC
{
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		if (unk_0xB90934C41404D57A(iParam0))
		{
			if (unk_0x8324A028D312E68D(iParam0))
			{
				unk_0xFE0D4DB713B1C1E7(iParam0, 0);
			}
		}
	}
}

void func_148()//Position - 0xAAD8
{
	unk_0xBBC4195AD74D153D(0, 21, 1);
	unk_0xBBC4195AD74D153D(0, 37, 1);
	unk_0xBBC4195AD74D153D(0, 25, 1);
	unk_0xBBC4195AD74D153D(0, 141, 1);
	unk_0xBBC4195AD74D153D(0, 140, 1);
	unk_0xBBC4195AD74D153D(0, 24, 1);
	unk_0xBBC4195AD74D153D(0, 257, 1);
	unk_0xBBC4195AD74D153D(0, 22, 1);
	unk_0xBBC4195AD74D153D(0, 23, 1);
}

void func_149(int iParam0)//Position - 0xAB29
{
	if (!Global_389D.f_1 == 1)
	{
		if (func_152(0))
		{
			func_150(iParam0);
		}
		unk_0xF0059F27F7BB6680(&Global_93C, 2);
	}
}

void func_150(int iParam0)//Position - 0xAB52
{
	if (Global_3943)
	{
		func_151(0, 0);
	}
	if (Global_389D.f_1 == 10 || Global_389D.f_1 == 9)
	{
		unk_0xF0059F27F7BB6680(&Global_93C, 16);
	}
	if (unk_0x58E7DDFF8D17A82A())
	{
		unk_0x1E08809A5041F85B(false);
	}
	Global_3DB8 = 5;
	if (iParam0 == 1)
	{
		unk_0xF0059F27F7BB6680(&Global_93B, 30);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&Global_93B, 30);
	}
	if (!func_138())
	{
		Global_389D.f_1 = 3;
	}
}

void func_151(bool bParam0, bool bParam1)//Position - 0xABC2
{
	if (bParam0)
	{
		if (func_152(0))
		{
			Global_3943 = 1;
			if (bParam1)
			{
				unk_0x652515566BB40BA9(&Global_385E);
			}
			Global_3855 = { Global_3867[Global_3866 /*3*/] };
			unk_0x3D7D94BDD4D22C14(Global_3855);
		}
	}
	else if (Global_3943 == 1)
	{
		Global_3943 = 0;
		Global_3855 = { Global_386E[Global_3866 /*3*/] };
		if (bParam1)
		{
			unk_0x3D7D94BDD4D22C14(Global_385E);
		}
		else
		{
			unk_0x3D7D94BDD4D22C14(Global_3855);
		}
	}
}

int func_152(int iParam0)//Position - 0xAC36
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

int func_153(int iParam0)//Position - 0xAC90
{
	if ((((iParam0 == 52 || iParam0 == 53) || iParam0 == 54) || iParam0 == 55) || iParam0 == 56)
	{
		return 1;
	}
	return 0;
}

int func_154(int iParam0)//Position - 0xACD1
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_161();
	}
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_156(&(Global_19773[iParam0 /*10*/].f_9), 1, 4, 0, 0);
	if (!iVar0 == 1)
	{
		return 0;
	}
	func_155(iParam0);
	return 1;
}

void func_155(int iParam0)//Position - 0xAD16
{
	Global_19773[iParam0 /*10*/].f_4 = 1;
	Global_19773[iParam0 /*10*/].f_5 = 0;
	Global_19773[iParam0 /*10*/].f_6 = 0;
	Global_19773[iParam0 /*10*/] = 0;
}

int func_156(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0xAD48
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_161D2.f_2C == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_160(0))
		{
			return 0;
		}
		Global_8C1D++;
		*uParam0 = Global_8C1D;
		unk_0x3D7FF8418367D451(unk_0xFC1CAE18F3ECBF2D(), 0);
		Global_4336.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x27CBA62D1F6DF074(8);
		}
		Global_8C41 = iParam2;
		Global_8C1B = *uParam0;
		Global_8C1C = iParam4;
		Global_8C1A = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_8C1A > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_8C1A)
			{
				if (Global_8C20[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_8C1B == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_158(iParam2))
		{
			return 0;
		}
		if (Global_8C1A == 8)
		{
			return 0;
		}
		Global_8C1D++;
		*uParam0 = Global_8C1D;
		Global_8C20[Global_8C1A /*4*/] = Global_8C1D;
		Global_8C20[Global_8C1A /*4*/].f_1 = iParam1;
		Global_8C20[Global_8C1A /*4*/].f_2 = iParam2;
		Global_8C20[Global_8C1A /*4*/].f_3 = 0;
		Global_8C1A++;
		if (iParam4 != 0)
		{
			func_157(uParam0, iParam4);
		}
	}
	return 2;
}

void func_157(var uParam0, int iParam1)//Position - 0xAE7F
{
	int iVar0;
	
	if (Global_8C1A == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_8C1A)
	{
		if (Global_8C20[iVar0 /*4*/] == *uParam0)
		{
			Global_8C20[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_158(int iParam0)//Position - 0xAECE
{
	return func_159(iParam0, Global_8C41);
}

int func_159(int iParam0, int iParam1)//Position - 0xAEDF
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

int func_160(int iParam0)//Position - 0xB0C0
{
	if (Global_8C41 == 15)
	{
		return 0;
	}
	if (func_158(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_161()//Position - 0xB0E2
{
	return func_162(unk_0x1377080E9B0BD993(), 0);
}

int func_162(char* sParam0, int iParam1)//Position - 0xB0F3
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = unk_0x56BEECB328B6D29D(sParam0);
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < 63)
	{
		iVar0 = iVar3;
		func_107(iVar0, &sVar1);
		if (unk_0x56BEECB328B6D29D(sVar1) == iVar2)
		{
			return iVar0;
		}
		iVar3++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

int func_163()//Position - 0xB13C
{
	if (Global_16B1B == 10 || Global_16B1B == 9)
	{
		return 1;
	}
	return 0;
}

int func_164(int iParam0, int iParam1)//Position - 0xB160
{
	switch (iParam0->f_10)
	{
		case 0:
			if (*iParam0 == 12)
			{
				if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 1826.631f, 4699.115f, 35.38089f, 1812.878f, 4710.457f, 42.05354f, 23.75f, 0, true, 0))
				{
					if (func_124(iParam0->f_1C[0]))
					{
						if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), unk_0x541C2AEF053615BC(iParam0->f_1C[0], true), true) < 3f)
						{
							if (func_170(2))
							{
								if (func_168(iParam0->f_1B))
								{
									func_167(iParam0->f_1B, *iParam0);
									func_268("ARE_RC_TRIGGER_CONDITIONS_MET: RC_TRIG_CHAR - Used special case Eps 4 trigger.");
									return 1;
								}
							}
						}
					}
					else
					{
						return 0;
					}
				}
				else if (func_124(iParam0->f_1C[0]))
				{
					if (func_166(iParam0))
					{
						if (func_170(2))
						{
							if (func_168(iParam0->f_1B))
							{
								func_167(iParam0->f_1B, *iParam0);
								return 1;
							}
						}
					}
				}
				else
				{
					return 0;
				}
			}
			else if (*iParam0 == 21)
			{
				if ((((!unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -1895.788f, -434.0192f, 40.30126f, -1883.038f, -444.0811f, 50.24509f, 8.5f, 0, true, 0) && !unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -1883.576f, -443.6434f, 36.40581f, -1874.826f, -448.0797f, 49.15162f, 8.5f, 0, true, 0)) && !unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -1876.343f, -446.2214f, 35.64637f, -1866.952f, -456.5601f, 49.0442f, 8.5f, 0, true, 0)) && !unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -1882.997f, -438.9922f, 44.17246f, -1874.079f, -443.342f, 48.69179f, 0.75f, 0, true, 0)) || unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -1878.822f, -441.7655f, 44.9175f, -1877.941f, -439.9522f, 47.28982f, 1.25f, 0, true, 0))
				{
					if (func_124(iParam0->f_1C[0]))
					{
						if (func_166(iParam0))
						{
							if (func_170(2))
							{
								if (func_168(iParam0->f_1B))
								{
									func_167(iParam0->f_1B, *iParam0);
									return 1;
								}
							}
						}
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
			else if (*iParam0 == 22)
			{
				if (!unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 837.0731f, 1261.086f, 366.1592f, 780.8383f, 1260.829f, 351.405f, 17.75f, 0, true, 0))
				{
					if (func_124(iParam0->f_1C[0]))
					{
						if (func_166(iParam0))
						{
							if (func_170(2))
							{
								if (func_168(iParam0->f_1B))
								{
									func_167(iParam0->f_1B, *iParam0);
									return 1;
								}
							}
						}
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
			else if (func_124(iParam0->f_1C[0]))
			{
				if (func_166(iParam0))
				{
					if (func_170(2))
					{
						if (func_168(iParam0->f_1B))
						{
							func_167(iParam0->f_1B, *iParam0);
							return 1;
						}
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			if (func_124(iParam0->f_23[0]))
			{
				if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iParam0->f_23[0], 0))
				{
					if (func_170(3))
					{
						func_167(iParam0->f_1B, *iParam0);
						return 1;
					}
				}
				else if (iParam1 == 1)
				{
					func_165();
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 1:
			if (unk_0x724D816EA203A79E(iParam0->f_23[0]))
			{
				if (!unk_0x1D403DFADBC2DE3C(iParam0->f_23[0], 0))
				{
					if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), unk_0x541C2AEF053615BC(iParam0->f_23[0], true), true) < iParam0->f_F)
					{
						if (func_170(2))
						{
							if (func_168(iParam0->f_1B))
							{
								func_167(iParam0->f_1B, *iParam0);
								return 1;
							}
						}
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 3:
			if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), iParam0->f_11[0 /*3*/], true) < iParam0->f_F)
			{
				if (func_170(2))
				{
					if (func_168(iParam0->f_1B))
					{
						func_167(iParam0->f_1B, *iParam0);
						return 1;
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 4:
			if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), iParam0->f_11[0 /*3*/], iParam0->f_11[1 /*3*/], false, true, 0))
			{
				if (func_170(2))
				{
					if (func_168(iParam0->f_1B))
					{
						func_167(iParam0->f_1B, *iParam0);
						return 1;
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 5:
			if (*iParam0 == 6)
			{
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
				{
					if (func_124(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)))
					{
						if (unk_0x5E87CB0495C97732(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), joaat("towtruck")) || unk_0x5E87CB0495C97732(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), joaat("towtruck2")))
						{
							if (unk_0x27C9F6C1391327CF(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), iParam0->f_23[0]))
							{
								if (func_170(3))
								{
									return 1;
								}
							}
						}
						else if ((unk_0x5E87CB0495C97732(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), joaat("cargobob")) || unk_0x5E87CB0495C97732(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), joaat("cargobob2"))) || unk_0x5E87CB0495C97732(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), joaat("cargobob3")))
						{
							if (unk_0x3E7A19282640095F(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)) && unk_0xAEA754DE0733E937(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), iParam0->f_23[0]))
							{
								if (func_170(3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
			else if (*iParam0 == 10)
			{
				if (unk_0x9692102E7020D903(unk_0xBC25C936A095B5BA()) >= 2f)
				{
					if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 245.8885f, 371.9034f, 103.9884f, 241.5898f, 359.6458f, 107.3461f, 1.25f, 0, true, 0))
					{
						if (func_170(2))
						{
							if (func_168(iParam0->f_1B))
							{
								func_167(iParam0->f_1B, *iParam0);
								func_268("RC5_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - Eps 2 special case trigger used");
								return 1;
							}
						}
					}
				}
			}
			else if (*iParam0 == 46)
			{
				if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -164.2046f, 277.4866f, 91.55322f, -153.6f, 277.4061f, 97.33813f, 10f, 0, true, 0))
				{
					return 0;
				}
			}
			else if (*iParam0 == 31)
			{
				if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 2728.948f, 4143.44f, 42.29295f, 2722.213f, 4144.521f, 45.43182f, 10f, 0, true, 0))
				{
					if (func_170(2))
					{
						if (func_168(1))
						{
							func_167(1, *iParam0);
							func_268("RC_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - RC_MAUDE_1 special case vehicle launch area");
							return 1;
						}
					}
				}
			}
			else if (*iParam0 == 39)
			{
				if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -992.4995f, 358.7455f, 96.3735f, -1021.94f, 361.8888f, 65.36148f, 30f, 0, true, 0))
				{
					if (!unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -983.5426f, 369.1104f, 68.46017f, -1028.566f, 395.4613f, 94.57245f, 15f, 0, true, 0))
					{
						if (!unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -983.875f, 346.7556f, 68.02096f, -1021.451f, 336.3458f, 93.18714f, 14.5f, 0, true, 0))
						{
							if (func_170(2))
							{
								if (func_168(iParam0->f_1B))
								{
									func_167(iParam0->f_1B, *iParam0);
									func_268("RC_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - RC_NIGEL_1B special case vehicle launch area");
									return 1;
								}
							}
						}
					}
				}
			}
			if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), iParam0->f_11[0 /*3*/], iParam0->f_11[1 /*3*/], iParam0->f_18, 0, true, 0))
			{
				if (*iParam0 == 45)
				{
					if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 2338.697f, 2597.037f, 45.39052f, 2324.003f, 2597.185f, 47.74961f, 8.5f, 0, true, 0))
					{
						return 0;
					}
				}
				if (func_170(2))
				{
					if (func_168(iParam0->f_1B))
					{
						func_167(iParam0->f_1B, *iParam0);
						return 1;
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 6:
			break;
	}
	return 0;
}

void func_165()//Position - 0xB943
{
	func_27(&(Global_17646.f_B3B), &Global_17646, 0, 1, 1, 0);
}

int func_166(var uParam0)//Position - 0xB95E
{
	float fVar0;
	
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) && uParam0->f_1B)
	{
		if (*uParam0 == 27 || *uParam0 == 30)
		{
			fVar0 = 1f;
		}
		else
		{
			fVar0 = 5f;
		}
		if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), unk_0x541C2AEF053615BC(uParam0->f_1C[0], true), true) < (uParam0->f_F + fVar0))
		{
			return 1;
		}
	}
	else if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), unk_0x541C2AEF053615BC(uParam0->f_1C[0], true), true) < uParam0->f_F)
	{
		return 1;
	}
	return 0;
}

void func_167(int iParam0, int iParam1)//Position - 0xB9EC
{
	if (iParam0 == 1)
	{
		if (!func_127(iParam1))
		{
			return;
		}
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			func_268("RC_STOP_PLAYER_VEHICLE_CHECK: Stopping player's vehicle.");
			if (unk_0xE3CA72BD77D43B09(unk_0xBC25C936A095B5BA()) || unk_0x57379381A330B2FF(unk_0xBC25C936A095B5BA()))
			{
				func_268("RC_STOP_PLAYER_VEHICLE_CHECK: Turning off engine for plane or helicopter.");
				unk_0x2D655AA68FA1736B(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), false, true, 0);
			}
			func_144();
		}
	}
}

int func_168(bool bParam0)//Position - 0xBA50
{
	int iVar0;
	
	if (unk_0x6A9CDB766DF7216F(unk_0xFC1CAE18F3ECBF2D()))
	{
		if (unk_0x7214F4879DF8A314(unk_0xBC25C936A095B5BA()))
		{
			return 1;
		}
		else if (bParam0)
		{
			if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
			{
				iVar0 = unk_0x3E12B546F3F2597A();
				if (func_169(iVar0))
				{
					if (unk_0xE3CA72BD77D43B09(unk_0xBC25C936A095B5BA()) || unk_0x57379381A330B2FF(unk_0xBC25C936A095B5BA()))
					{
						if ((!unk_0x8B2EFFDCF3FE7E80(iVar0) && !unk_0x2A348A3A98B80B13(iVar0)) && unk_0x8910237449BB6F79(iVar0) < 1f)
						{
							return 1;
						}
					}
					else if (!unk_0x2A348A3A98B80B13(iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_169(int iParam0)//Position - 0xBAE7
{
	if (func_124(iParam0))
	{
		if (unk_0xE59B7F5A03335350(iParam0, 0))
		{
			if (!unk_0x7544D2465B934445(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_170(int iParam0)//Position - 0xBB11
{
	int iVar0;
	
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				iVar0 = func_102();
				if (!func_36(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_178()) || Global_1974B) || Global_62BF) || func_177()) || func_176(8, -1)) || func_90()) || func_175()) || func_174()) || func_173()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1) || func_178()) || Global_62BF) || func_177()) || func_176(8, -1)) || func_174()) || func_90()) || func_175()) || func_173()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_178()) || Global_1974B) || Global_62BF) || func_177()) || func_176(8, -1)) || func_174()) || func_90()) || func_175()) || func_173()) || Global_19B04.f_1DEB.f_397[iVar0] == 5) || Global_8E64 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_178()) || Global_1974B) || Global_62BF) || func_177()) || func_176(8, -1)) || func_90()) || func_175()) || func_173()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_178() || unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0) || func_176(8, -1)) || func_173()) || func_172()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_176(8, -1) || func_90()) || func_175()) || func_172()) || func_171())
						{
							return 0;
						}
						if ((unk_0x7930B3E9C919E90F() && unk_0xFAB96FF5BAB29092() != 3) && unk_0x5935088CFB983803() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
						{
							if ((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || func_178()) || Global_62BF) || func_177()) || func_176(8, -1)) || func_175()) || func_174()) || func_173()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || !unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) || !unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F())) || !unk_0x726D9204B160D23E()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || func_178()) || func_175()) || Global_1974B) || Global_62BF) || func_177()) || Global_90C1) || func_176(8, -1)) || func_174()) || func_172()) || func_173()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || !unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) || !unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F())) || !unk_0x726D9204B160D23E()) || unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0)) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1)) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0x9273B3557334635D(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || func_178()) || Global_1974B) || Global_62BF) || func_177()) || func_176(8, -1)) || func_174()) || func_172()) || func_90()) || func_175()) || func_173())
						{
							return 0;
						}
						break;
				}
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
	else
	{
		return 0;
	}
	return 1;
}

var func_171()//Position - 0xC230
{
	return Global_16B42.f_1;
}

int func_172()//Position - 0xC23E
{
	if (Global_15FA6 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_147B0[Global_15FA6 /*34*/].f_F, 13);
	}
	return 0;
}

int func_173()//Position - 0xC264
{
	if (unk_0xB731B8C5BCE89836(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_174()//Position - 0xC27E
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

bool func_175()//Position - 0xC2A8
{
	return Global_16B4F.f_142 > 0;
}

bool func_176(int iParam0, int iParam1)//Position - 0xC2B9
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

var func_177()//Position - 0xC2F4
{
	return Global_140856;
}

int func_178()//Position - 0xC300
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		return Global_161D2.f_2C == 1;
	}
	return 0;
}

int func_179(int iParam0, vector3 vParam1, char[4] cParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, float fParam7)//Position - 0xC31C
{
	var uVar0;
	
	if ((((func_124(unk_0xBC25C936A095B5BA()) && func_124(iParam0->f_1C[0])) && !func_143()) && (unk_0x105601648511CC64() - iParam0->f_3C) > iParam6) && func_183(unk_0xBC25C936A095B5BA(), vParam1, 1) < fParam7)
	{
		uVar0 = 16;
		func_182(&uVar0, iParam4, iParam0->f_1C[0], sParam5, 0, 1);
		func_180(&uVar0, cParam2, sParam3, 7, 0, 0);
		iParam0->f_3C = unk_0x105601648511CC64();
		return 1;
	}
	return 0;
}

void func_180(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0xC3A4
{
	func_181(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	unk_0xF0059F27F7BB6680(&Global_394A, 0);
	Global_3DBB = iParam3;
	StringCopy(&Global_3DAE, sParam2, 24);
}

void func_181(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0xC3DF
{
	Global_3B96 = { *uParam0 };
	Global_68F = iParam1;
	StringCopy(&Global_3DFE, sParam2, 24);
	Global_4195 = iParam5;
	if (iParam3 == 0)
	{
		Global_4193 = 1;
		Global_4191 = 0;
	}
	else
	{
		Global_4193 = 0;
		Global_4191 = 1;
	}
	if (iParam4 == 0)
	{
		Global_4194 = 1;
		Global_4192 = 0;
	}
	else
	{
		Global_4194 = 0;
		Global_4192 = 1;
	}
}

void func_182(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0xC435
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_11542)
	{
		if (!unk_0x36CEFBE9B745A58D(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x8941EA87BBF38C6F(iParam2, 0);
			}
			else
			{
				unk_0x8941EA87BBF38C6F(iParam2, 1);
			}
		}
		if (!unk_0x36CEFBE9B745A58D(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x7C7F4D01B6DB297B(iParam2, 0);
			}
			else
			{
				unk_0x7C7F4D01B6DB297B(iParam2, 1);
			}
		}
	}
}

float func_183(int iParam0, vector3 vParam1, bool bParam2)//Position - 0xC4D0
{
	vector3 vVar0;
	
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		vVar0 = { unk_0x541C2AEF053615BC(iParam0, true) };
	}
	else
	{
		vVar0 = { unk_0x541C2AEF053615BC(iParam0, false) };
	}
	return unk_0xF0F2FC9DE291567F(vVar0, vParam1, bParam2);
}

void func_184(int iParam0, char* sParam1, vector3 vParam2)//Position - 0xC50A
{
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (!unk_0xF1734B55490E9045(sParam1))
		{
			if (Global_8C41 == 17)
			{
				if (*iParam0 != -1)
				{
					func_189(iParam0);
				}
			}
			else if (func_188())
			{
				if (*iParam0 != -1)
				{
					func_189(iParam0);
				}
			}
			else if (*iParam0 == -1)
			{
				if (func_183(unk_0xBC25C936A095B5BA(), vParam2, 1) <= 100f)
				{
					func_187(iParam0, 1);
				}
			}
			else
			{
				switch (func_186(*iParam0))
				{
					case 1:
						if (unk_0x3362CDE8460ED38B(sParam1, "JOSH_1_INT_CONCAT"))
						{
							unk_0x589EFAE8BD1B8B57(sParam1, 14, 8);
						}
						else
						{
							unk_0x04DD7A558FCF2C34(sParam1, 8);
						}
						unk_0xBC9585C4B4EBFD4B(2);
						func_185(*iParam0, 1);
						break;
					
					case 2:
						unk_0x73F91C7985A4C83B(0);
						unk_0xD103510B8989BEB2();
						unk_0xBC9585C4B4EBFD4B(0);
						func_185(*iParam0, 0);
						break;
				}
				if (func_183(unk_0xBC25C936A095B5BA(), vParam2, 1) > 120f)
				{
					func_189(iParam0);
				}
			}
		}
	}
}

void func_185(int iParam0, bool bParam1)//Position - 0xC5FB
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (Global_1153E == iParam0)
		{
			Global_1153F = iParam0;
		}
	}
	else if (Global_1153F == iParam0)
	{
		Global_1153F = -1;
	}
}

int func_186(int iParam0)//Position - 0xC637
{
	if (Global_1153E == iParam0)
	{
		if (Global_1153F == -1)
		{
			if (Global_1153D < unk_0xC87A57742F7D3C06())
			{
				return 1;
			}
		}
	}
	else if (Global_1153F == iParam0)
	{
		return 2;
	}
	return 0;
}

void func_187(int iParam0, int iParam1)//Position - 0xC670
{
	bool bVar0;
	int iVar1;
	
	if (Global_1153B < 5)
	{
		Global_11530[Global_1153B /*2*/] = 0;
		Global_11530[Global_1153B /*2*/].f_1 = iParam1;
		bVar0 = false;
		while (!bVar0)
		{
			bVar0 = true;
			iVar1 = 0;
			while (iVar1 < Global_1153B)
			{
				if (Global_11530[iVar1 /*2*/] == Global_11530[Global_1153B /*2*/])
				{
					Global_11530[Global_1153B /*2*/]++;
					bVar0 = false;
				}
				iVar1++;
			}
		}
		*iParam0 = Global_11530[Global_1153B /*2*/];
		Global_1153B++;
		Global_1153C = 1;
	}
	else
	{
		*iParam0 = -1;
	}
}

bool func_188()//Position - 0xC70E
{
	return Global_16129;
}

void func_189(int iParam0)//Position - 0xC71A
{
	unk_0x73F91C7985A4C83B(0);
	unk_0xD103510B8989BEB2();
	func_190(iParam0);
}

void func_190(int iParam0)//Position - 0xC731
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (*iParam0 == -1)
	{
		return;
	}
	if (Global_1153F == *iParam0)
	{
		func_185(*iParam0, 0);
	}
	if (Global_1153E == *iParam0)
	{
		Global_1153E = -1;
	}
	bVar0 = false;
	iVar1 = 0;
	while (!bVar0 && iVar1 < Global_1153B)
	{
		if (Global_11530[iVar1 /*2*/] == *iParam0)
		{
			bVar0 = true;
		}
		else
		{
			iVar1++;
		}
	}
	if (!bVar0)
	{
		return;
	}
	iVar2 = iVar1;
	while (iVar2 <= (Global_1153B - 2))
	{
		Global_11530[iVar2 /*2*/] = Global_11530[iVar2 + 1 /*2*/];
		Global_11530[iVar2 /*2*/].f_1 = Global_11530[iVar2 + 1 /*2*/].f_1;
		iVar2++;
	}
	Global_11530[(Global_1153B - 1) /*2*/] = -1;
	Global_11530[(Global_1153B - 1) /*2*/].f_1 = 3;
	Global_1153B = (Global_1153B - 1);
	Global_1153C = 1;
	Global_1153D = unk_0xC87A57742F7D3C06();
	*iParam0 = -1;
}

void func_191(int iParam0)//Position - 0xC819
{
	if (iParam0 == -1)
	{
		iParam0 = func_161();
	}
	if (iParam0 == -1)
	{
		return;
	}
	Global_19773[iParam0 /*10*/].f_1 = 1;
}

int func_192(int iParam0, bool bParam1)//Position - 0xC841
{
	struct<27> Var0;
	
	if (Global_11542)
	{
		func_268("IS_RC_FINE_AND_IN_RANGE(): The game is running Multiplayer [TERMINATING]");
		return 0;
	}
	func_107(*iParam0, &Var0);
	if ((func_229(*iParam0) || func_227(*iParam0)) || Global_11637 == 1)
	{
		return 1;
	}
	if (!unk_0x684B06333594F9EA())
	{
		func_268("IS_RC_FINE_AND_IN_RANGE(): Player out of range [TERMINATING]");
		return 0;
	}
	if (func_223(*iParam0))
	{
		if (*iParam0 == 19)
		{
			func_222(iParam0->f_1C[0]);
		}
		func_268("IS_RC_FINE_AND_IN_RANGE(): Script denied by RC Controller [TERMINATING]");
		return 0;
	}
	if (iParam0->f_19 == 1)
	{
		if (!func_202(iParam0, 1, 0))
		{
			return 0;
		}
	}
	else if (iParam0->f_10 == 0)
	{
		if (!func_202(iParam0, 0, 0))
		{
			return 0;
		}
	}
	if (((((*iParam0 == 16 || *iParam0 == 9) || *iParam0 == 18) || *iParam0 == 22) || *iParam0 == 32) || *iParam0 == 51)
	{
		if (!func_200(iParam0, 1, 1))
		{
			if (*iParam0 == 16)
			{
				func_199(iParam0);
			}
			else
			{
				func_197(iParam0);
			}
			return 0;
		}
	}
	else if (*iParam0 == 24)
	{
		if (!func_200(iParam0, 0, 1))
		{
			func_197(iParam0);
			return 0;
		}
	}
	else if (*iParam0 == 6)
	{
		if (!func_200(iParam0, 0, 1))
		{
			return 0;
		}
	}
	else if (iParam0->f_1A == 1)
	{
		if (!func_200(iParam0, 1, 0))
		{
			func_197(iParam0);
			return 0;
		}
	}
	else if (iParam0->f_10 == 2 || iParam0->f_10 == 1)
	{
		if (!func_200(iParam0, 0, 0))
		{
			func_197(iParam0);
			return 0;
		}
	}
	if (iParam0->f_10 == 2 || iParam0->f_10 == 1)
	{
		if (func_124(iParam0->f_23[0]))
		{
			if (!unk_0x4DBCE270B354E123(iParam0->f_23[0], Var0.f_6, 8f, 8f, 8f, false, true, 0))
			{
				return 0;
			}
		}
	}
	if (*iParam0 == 10)
	{
		if (unk_0xC9FA5D38428AB6BE(-1, iParam0->f_11[0 /*3*/], 8f))
		{
			func_268("IS_RC_FINE_AND_IN_RANGE(): Explosion near mission trigger [TERMINATING]");
			return 0;
		}
	}
	if (Var0.f_4 != 17)
	{
		if (!unk_0xFA30DFD0084E92FE(Var0.f_1A, func_102()))
		{
			func_268("IS_RC_FINE_AND_IN_RANGE(): No longer a valid player character to launch mission");
			return 0;
		}
	}
	if (func_196(&(iParam0->f_30)) && bParam1)
	{
		func_193(iParam0->f_1C[0], &(iParam0->f_30), *iParam0);
	}
	return 1;
}

void func_193(int iParam0, var uParam1, int iParam2)//Position - 0xCAB4
{
	int iVar0;
	int iVar1;
	
	if (func_124(iParam0))
	{
		switch (uParam1->f_3)
		{
			case 1:
				if (func_196(uParam1))
				{
					if (unk_0xF9E082857622D91E(*uParam1))
					{
						unk_0x49D46EE47C9CCB66(iParam0);
						if (iParam2 != 21)
						{
							if (func_68(uParam1->f_5, 0f, 0f, 0f, 0))
							{
								unk_0xE896C0AD02364F2A(iParam0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
							}
							else
							{
								unk_0xC5A6DFE2B8987B17(&iVar0);
								if (func_195(uParam1))
								{
									unk_0x16F091616F4E9EA0(0, *uParam1, uParam1->f_2, uParam1->f_5, uParam1->f_8, 1000f, -8f, -1, 262152, 0, 2, 0);
								}
								else
								{
									unk_0x16F091616F4E9EA0(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 1000f, -8f, -1, 262152, 0, 2, 0);
								}
								unk_0x16F091616F4E9EA0(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
								unk_0x535008C596714F9E(iVar0);
								unk_0xA8E6405305C0D7DF(iParam0, iVar0);
								unk_0x02DAF06EA4F08219(&iVar0);
							}
						}
						else
						{
							unk_0x16F091616F4E9EA0(iParam0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 3);
						}
						uParam1->f_3 = 2;
					}
					else
					{
						uParam1->f_3 = 0;
					}
				}
				else
				{
					uParam1->f_3 = 0;
				}
				break;
			
			case 2:
				if (!func_195(uParam1) || !unk_0x96044E39418AAF17(iParam0, *uParam1, uParam1->f_2, 3))
				{
					if (func_194(iParam2) && !unk_0xC5B8A5F778E321DD(iParam0, unk_0xBC25C936A095B5BA(), 25f))
					{
						unk_0x85DB484A637CEAB9(iParam0, unk_0xBC25C936A095B5BA(), 0);
						uParam1->f_3 = 5;
					}
					else if ((func_195(uParam1) && uParam1->f_4 == 0) && unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), unk_0x541C2AEF053615BC(iParam0, true), true) < 20f)
					{
						uParam1->f_3 = 3;
					}
				}
				break;
			
			case 3:
				unk_0xC5A6DFE2B8987B17(&iVar1);
				if (func_68(uParam1->f_5, 0f, 0f, 0f, 0))
				{
					unk_0xE896C0AD02364F2A(0, *uParam1, uParam1->f_2, 4f, -4f, -1, 262144, 0, 0, 0, 0);
					unk_0xE896C0AD02364F2A(0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
				}
				else
				{
					unk_0x16F091616F4E9EA0(0, *uParam1, uParam1->f_2, uParam1->f_5, uParam1->f_8, 4f, -4f, -1, 262152, 0, 2, 0);
					unk_0x16F091616F4E9EA0(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
				}
				unk_0x535008C596714F9E(iVar1);
				unk_0xA8E6405305C0D7DF(iParam0, iVar1);
				unk_0x02DAF06EA4F08219(&iVar1);
				uParam1->f_4 = 1;
				if (func_194(iParam2))
				{
					uParam1->f_3 = 2;
				}
				else
				{
					uParam1->f_3 = 0;
				}
				break;
			
			case 5:
				if (!func_194(iParam2) || unk_0xC5B8A5F778E321DD(iParam0, unk_0xBC25C936A095B5BA(), 10f))
				{
					if (func_68(uParam1->f_5, 0f, 0f, 0f, 0))
					{
						unk_0xE896C0AD02364F2A(iParam0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
					}
					else
					{
						unk_0x16F091616F4E9EA0(iParam0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
					}
					uParam1->f_3 = 2;
				}
				break;
			}
	}
}

int func_194(int iParam0)//Position - 0xCE0C
{
	if (iParam0 == 17 || iParam0 == 20)
	{
		return 1;
	}
	return 0;
}

int func_195(var uParam0)//Position - 0xCE2C
{
	if (unk_0xF1734B55490E9045(uParam0->f_2))
	{
		return 0;
	}
	return 1;
}

int func_196(var uParam0)//Position - 0xCE44
{
	if (unk_0xF1734B55490E9045(*uParam0) || unk_0xF1734B55490E9045(uParam0->f_1))
	{
		return 0;
	}
	return 1;
}

void func_197(var uParam0)//Position - 0xCE69
{
	int iVar0;
	int iVar1;
	
	if (*uParam0 == 52)
	{
		func_198(&(uParam0->f_29[1]));
		func_198(&(uParam0->f_29[2]));
	}
	if (func_124(unk_0xBC25C936A095B5BA()))
	{
		iVar0 = 0;
		while (iVar0 <= (uParam0->f_1C - 1))
		{
			if (func_123(uParam0->f_1C[iVar0]))
			{
				if (!unk_0x5237AF95232D78C5(uParam0->f_1C[iVar0], 0))
				{
					unk_0xD434A01DEA38A939(uParam0->f_1C[iVar0], true, 0);
					unk_0x346478B12F69D4E3(uParam0->f_1C[0], false);
				}
				unk_0x22321800954A532E(uParam0->f_1C[iVar0], true);
				if (*uParam0 == 34)
				{
					if (func_124(uParam0->f_29[0]))
					{
						unk_0xD434A01DEA38A939(uParam0->f_29[0], true, 0);
						unk_0x346478B12F69D4E3(uParam0->f_29[0], false);
					}
				}
				switch (*uParam0)
				{
					case 19:
						func_222(uParam0->f_1C[iVar0]);
						break;
					
					case 8:
						unk_0x522053D86D6E1C7A("rcmcollect_paperleadinout@");
						while (!unk_0xF9E082857622D91E("rcmcollect_paperleadinout@"))
						{
							SYSTEM::WAIT(0);
						}
						unk_0xC5A6DFE2B8987B17(&iVar1);
						unk_0xE896C0AD02364F2A(0, "rcmcollect_paperleadinout@", "meditate_getup", 8f, -8f, -1, 8, 0, 0, 0, 0);
						unk_0x5558ED6D4A2DEC93(0, unk_0xBC25C936A095B5BA(), 10000f, -1, 0, 0);
						unk_0x535008C596714F9E(iVar1);
						unk_0xA8E6405305C0D7DF(uParam0->f_1C[iVar0], iVar1);
						unk_0x02DAF06EA4F08219(&iVar1);
						break;
					
					case 0:
					case 1:
						unk_0x522053D86D6E1C7A("rcmabigail");
						while (!unk_0xF9E082857622D91E("rcmabigail"))
						{
							SYSTEM::WAIT(0);
						}
						unk_0xC5A6DFE2B8987B17(&iVar1);
						unk_0xE896C0AD02364F2A(0, "rcmabigail", "breakout_base", 8f, -8f, -1, 8, 0, 0, 0, 0);
						unk_0x5558ED6D4A2DEC93(0, unk_0xBC25C936A095B5BA(), 10000f, -1, 0, 0);
						unk_0x535008C596714F9E(iVar1);
						unk_0xA8E6405305C0D7DF(uParam0->f_1C[iVar0], iVar1);
						unk_0x02DAF06EA4F08219(&iVar1);
						break;
					
					case 32:
						unk_0x522053D86D6E1C7A("rcmminute1");
						while (!unk_0xF9E082857622D91E("rcmminute1"))
						{
							SYSTEM::WAIT(0);
						}
						unk_0xC5A6DFE2B8987B17(&iVar1);
						if (iVar0 == 0)
						{
							unk_0xE896C0AD02364F2A(0, "rcmminute1", "base_to_idle_joe", 8f, -8f, -1, 32776, 0, 0, 0, 0);
						}
						else
						{
							unk_0xE896C0AD02364F2A(0, "rcmminute1", "base_to_idle_josef", 8f, -8f, -1, 32776, 0, 0, 0, 0);
						}
						unk_0x5558ED6D4A2DEC93(0, unk_0xBC25C936A095B5BA(), 10000f, -1, 0, 0);
						unk_0x535008C596714F9E(iVar1);
						unk_0xA8E6405305C0D7DF(uParam0->f_1C[iVar0], iVar1);
						unk_0x02DAF06EA4F08219(&iVar1);
						break;
					
					case 24:
						unk_0x522053D86D6E1C7A("special_ped@hao@base");
						while (!unk_0xF9E082857622D91E("special_ped@hao@base"))
						{
							SYSTEM::WAIT(0);
						}
						unk_0xC5A6DFE2B8987B17(&iVar1);
						unk_0xE896C0AD02364F2A(0, "special_ped@hao@base", "hao_exit", 8f, -8f, -1, 520, 0, 0, 0, 0);
						unk_0x5558ED6D4A2DEC93(0, unk_0xBC25C936A095B5BA(), 10000f, -1, 0, 0);
						unk_0x535008C596714F9E(iVar1);
						unk_0xA8E6405305C0D7DF(uParam0->f_1C[iVar0], iVar1);
						unk_0x02DAF06EA4F08219(&iVar1);
						break;
					
					default:
						unk_0xD999D66C5AFA4BE3(uParam0->f_1C[iVar0]);
						unk_0x5558ED6D4A2DEC93(uParam0->f_1C[iVar0], unk_0xBC25C936A095B5BA(), 10000f, -1, 0, 0);
						break;
					}
			}
			iVar0++;
		}
	}
}

void func_198(int iParam0)//Position - 0xD16D
{
	if (unk_0x724D816EA203A79E(*iParam0))
	{
		if (unk_0x2FAEA11D96CF14A3(*iParam0))
		{
			unk_0x17175087F2DB6AC8(*iParam0, 1, true);
		}
		unk_0xA35241BCE4C1A24B(iParam0);
	}
}

void func_199(var uParam0)//Position - 0xD198
{
	int iVar0;
	
	if (func_124(unk_0xBC25C936A095B5BA()))
	{
		iVar0 = 0;
		while (iVar0 <= (uParam0->f_1C - 1))
		{
			if (func_123(uParam0->f_1C[iVar0]))
			{
				unk_0x91629AC1E1F78419(uParam0->f_1C[iVar0], 1, false);
				unk_0x2E35C4FA5F0ED22F(uParam0->f_1C[iVar0], false);
				unk_0x22321800954A532E(uParam0->f_1C[iVar0], true);
				unk_0xB8CBD998685C0685(uParam0->f_1C[iVar0], unk_0xBC25C936A095B5BA(), 0, 16);
				unk_0x02537C8C1BEEB477(&(uParam0->f_1C[iVar0]));
			}
			iVar0++;
		}
	}
}

int func_200(var uParam0, bool bParam1, bool bParam2)//Position - 0xD218
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam1)
	{
		iVar1 = (uParam0->f_23 - 1);
	}
	else
	{
		iVar1 = 0;
	}
	if (func_123(unk_0xBC25C936A095B5BA()))
	{
		iVar0 = 0;
		while (iVar0 <= iVar1)
		{
			if (unk_0x724D816EA203A79E(uParam0->f_23[iVar0]))
			{
				if (unk_0x1D403DFADBC2DE3C(uParam0->f_23[iVar0], 0))
				{
					func_268("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is dead [TERMINATING]");
					return 0;
				}
				if (!unk_0xE59B7F5A03335350(uParam0->f_23[iVar0], 0))
				{
					func_268("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is not driveable [TERMINATING]");
					return 0;
				}
				if (unk_0xD9C1758D86688CEA(uParam0->f_23[iVar0], unk_0xBC25C936A095B5BA(), 0))
				{
					func_268("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has been damaged by player [TERMINATING]");
					return 0;
				}
				if (unk_0x8D66276473ABD7CC(uParam0->f_23[iVar0]) < 850)
				{
					func_268("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle health is less than 850 [TERMINATING]");
					return 0;
				}
				if (bParam2)
				{
					if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
					{
						if (unk_0xE921F8171F0733B3(uParam0->f_23[iVar0], unk_0xBC25C936A095B5BA()) && unk_0x8910237449BB6F79(unk_0xBC25C936A095B5BA()) > 5f)
						{
							func_268("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has collided with the player vehicle at speed [TERMINATING]");
							return 0;
						}
						iVar2 = unk_0x3E12B546F3F2597A();
						if (func_169(iVar2))
						{
							if (unk_0x6F79ECA8C83E4357(iVar2) == joaat("towtruck") || unk_0x6F79ECA8C83E4357(iVar2) == joaat("towtruck2"))
							{
								if (func_169(uParam0->f_23[iVar0]))
								{
									if (unk_0x27C9F6C1391327CF(iVar2, uParam0->f_23[iVar0]))
									{
										func_268("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is being towed by player [TERMINATING]");
										return 0;
									}
								}
							}
						}
					}
					else
					{
						iVar3 = unk_0x3E12B546F3F2597A();
						if (func_169(iVar3))
						{
							if (unk_0xE921F8171F0733B3(uParam0->f_23[iVar0], iVar3) && unk_0x8910237449BB6F79(iVar3) > 6f)
							{
								func_268("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has collided with the player's last known vehicle at speed (player bailed out?) [TERMINATING]");
								return 0;
							}
						}
						if (*uParam0 == 16)
						{
							if (func_201(unk_0xBC25C936A095B5BA(), uParam0->f_23[iVar0]))
							{
								func_268("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Player attempting to jack Epsilon vehicle [TERMINATING]");
								return 0;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_201(int iParam0, int iParam1)//Position - 0xD3D6
{
	int iVar0;
	
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (unk_0xE59B7F5A03335350(iParam1, 0))
		{
			iVar0 = unk_0xD20EBB97FE8799ED(iParam0);
			if (iVar0 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_202(var uParam0, bool bParam1, int iParam2)//Position - 0xD406
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = (uParam0->f_1C - 1);
	}
	else
	{
		iVar1 = 0;
	}
	if (*uParam0 == 16)
	{
		iParam2 = 1;
	}
	if (*uParam0 == 30)
	{
		iParam2 = 1;
	}
	if (func_123(unk_0xBC25C936A095B5BA()))
	{
		iVar0 = 0;
		while (iVar0 <= iVar1)
		{
			if (unk_0x724D816EA203A79E(uParam0->f_1C[iVar0]))
			{
				if (!unk_0x36CEFBE9B745A58D(uParam0->f_1C[iVar0]))
				{
					if (unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()))
					{
						if (unk_0xE921F8171F0733B3(unk_0xBC25C936A095B5BA(), uParam0->f_1C[iVar0]))
						{
							if (iParam2 == 0)
							{
								func_197(uParam0);
							}
							else
							{
								func_199(uParam0);
							}
							if (func_143())
							{
								func_141();
							}
							func_268("STEP_5_COMMON_RCfineAndInRange - Random character is being pushed by car [TERMINATING]");
							return 0;
						}
					}
					if ((unk_0x48EBE45A9A7EB10C(uParam0->f_1C[iVar0]) || unk_0x127812AA6652253F(uParam0->f_1C[iVar0])) || unk_0xA0ABD1D1512F5AFC(uParam0->f_1C[iVar0]))
					{
						if (iParam2 == 0)
						{
							func_197(uParam0);
						}
						else
						{
							func_199(uParam0);
						}
						func_268("STEP_5_COMMON_RCfineAndInRange - Random character has been damaged by something [TERMINATING]");
						return 0;
					}
					if (unk_0x2CDE18D6C89522AD(uParam0->f_1C[iVar0]))
					{
						if (unk_0xE642C1AC73CE364E(uParam0->f_1C[iVar0], unk_0xBC25C936A095B5BA(), 3f, 3f, 3f, 0, 1, 0))
						{
							if (iParam2 == 0)
							{
								func_197(uParam0);
							}
							else
							{
								func_199(uParam0);
							}
							func_268("STEP_5_COMMON_RCfineAndInRange - Random character is in ragdoll [TERMINATING]");
							return 0;
						}
					}
					if (func_221(*uParam0))
					{
						if (!func_153(*uParam0))
						{
							if (func_216(uParam0->f_1C[iVar0], 1, 0, 0, 0))
							{
								if (iParam2 == 0)
								{
									func_197(uParam0);
								}
								else
								{
									func_199(uParam0);
								}
								func_268("STEP_5_COMMON_RCfineAndInRange - Player is shooting near the Random Character [TERMINATING]");
								return 0;
							}
						}
						if (unk_0xC9FA5D38428AB6BE(-1, unk_0x541C2AEF053615BC(uParam0->f_1C[iVar0], true), 15f))
						{
							if (iParam2 == 0)
							{
								func_197(uParam0);
							}
							else
							{
								func_199(uParam0);
							}
							func_268("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
							return 0;
						}
						if (func_204(uParam0->f_1C[iVar0], 1126825984))
						{
							if (iParam2 == 0)
							{
								func_197(uParam0);
							}
							else
							{
								func_199(uParam0);
							}
							func_268("STEP_5_COMMON_RCfineAndInRange - Random character is in combat [TERMINATING]");
							return 0;
						}
					}
					if (!func_203(*uParam0))
					{
						if (unk_0xC9FA5D38428AB6BE(-1, unk_0x541C2AEF053615BC(uParam0->f_1C[iVar0], true), 5f))
						{
							if (iParam2 == 0)
							{
								func_197(uParam0);
							}
							else
							{
								func_199(uParam0);
							}
							func_268("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
							return 0;
						}
						if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0)
						{
							if (iParam2 == 0)
							{
								func_197(uParam0);
							}
							else
							{
								func_199(uParam0);
							}
							func_268("STEP_5_COMMON_RCfineAndInRange - Player has a wanted level [TERMINATING]");
							return 0;
						}
					}
				}
				else
				{
					func_268("STEP_5_COMMON_RCfineAndInRange - Random character injured / dead [TERMINATING]");
					if (*uParam0 == 34)
					{
						if (func_124(uParam0->f_29[0]))
						{
							unk_0xD434A01DEA38A939(uParam0->f_29[0], true, 0);
							unk_0x346478B12F69D4E3(uParam0->f_29[0], false);
						}
					}
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_203(int iParam0)//Position - 0xD6C2
{
	if (((iParam0 == 2 || iParam0 == 3) || iParam0 == 52) || iParam0 == 53)
	{
		return 1;
	}
	return 0;
}

int func_204(int iParam0, float fParam1)//Position - 0xD6F6
{
	float fVar0;
	
	if (func_124(unk_0xBC25C936A095B5BA()) && func_124(iParam0))
	{
		if (func_215(iParam0) || unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), iParam0))
		{
			if (unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_205(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_205(int iParam0, float fParam1)//Position - 0xD76C
{
	return func_206(iParam0, unk_0xBC25C936A095B5BA(), fParam1, 1, 250, 7);
}

bool func_206(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0xD784
{
	var uVar0;
	vector3 vVar1;
	int iVar2;
	
	iVar2 = func_214(iParam0, iParam1);
	if (!func_124(iParam0) || !func_124(iParam1))
	{
		if (iVar2 != -1)
		{
			func_213(&(Local_37[iVar2 /*4*/]));
		}
		return 0;
	}
	if (!func_210(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar2 == -1)
	{
		iVar2 = func_209();
		if (iVar2 == -1)
		{
			return 0;
		}
		Local_37[iVar2 /*4*/].f_1 = iParam0;
		Local_37[iVar2 /*4*/].f_2 = iParam1;
	}
	vVar1 = { unk_0x823166D9421223CA(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_207(&(Local_37[iVar2 /*4*/]), vVar1, iParam1, &(Local_37[iVar2 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0x105601648511CC64() - Local_37[iVar2 /*4*/].f_3) < iParam4);
}

int func_207(var uParam0, vector3 vParam1, int iParam2, var uParam3, int iParam4, int iParam5)//Position - 0xD845
{
	var uVar0;
	vector3 vVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = 0;
	if (!func_124(iParam2))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		vVar1 = { func_208(iParam2, iParam5) };
		*uParam0 = unk_0xA20E4A82503CECB3(vParam1, vVar1 + vVar1 - vParam1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam4, 7);
		return 0;
	}
	iVar4 = unk_0xB0695CD48A28A3A9(*uParam0, &uVar0, &vVar1, &uVar2, &iVar3);
	if (iVar4 == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (iVar4 == 1)
	{
		return 0;
	}
	*uParam0 = 0;
	if (unk_0x386592AF38881675(iVar3))
	{
		func_124(iVar3);
		if (unk_0x399F7937FFE4DEBF(iVar3) == iParam2)
		{
			if (bLocal_38)
			{
				unk_0xD1FD19DF6D5B1300(vParam1, unk_0x541C2AEF053615BC(iParam2, true), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam3 = unk_0x105601648511CC64();
			return 1;
		}
		return 0;
	}
	if (unk_0xD27AC0E9B78CFDD7(iVar3))
	{
		func_124(iVar3);
		if (unk_0x5237AF95232D78C5(iParam2, 0))
		{
			if (unk_0x233ED4CD1F1A42C1(iVar3) == unk_0x9FE9D386222EEE47(iParam2, 0))
			{
				if (bLocal_38)
				{
					unk_0xD1FD19DF6D5B1300(vParam1, unk_0x541C2AEF053615BC(iParam2, true), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam3 = unk_0x105601648511CC64();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_208(int iParam0, int iParam1)//Position - 0xD971
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = unk_0x491B2241281A03B7(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0x541C2AEF053615BC(iParam0, true);
	}
	else if (iParam1 == 1)
	{
		return unk_0x823166D9421223CA(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0x823166D9421223CA(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0x823166D9421223CA(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0x823166D9421223CA(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0x823166D9421223CA(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0x823166D9421223CA(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0x541C2AEF053615BC(iParam0, true);
}

int func_209()//Position - 0xDA36
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_37)
	{
		if ((Local_37[iVar0 /*4*/] == 0 && Local_37[iVar0 /*4*/].f_1 == 0) && Local_37[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_210(int iParam0, int iParam1, float fParam2, int iParam3)//Position - 0xDA80
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { func_212(unk_0x541C2AEF053615BC(iParam1, true) - unk_0x541C2AEF053615BC(iParam0, true)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		vVar1 = { unk_0xF90427F311003E57(iParam0) };
	}
	else
	{
		vVar1 = { func_212(unk_0x823166D9421223CA(iParam0, 31086, 0f, 5f, 0f) - unk_0x823166D9421223CA(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_211(vVar1, vVar0);
	if (fVar2 <= SYSTEM::COS((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_211(vector3 vParam0, vector3 vParam1)//Position - 0xDB11
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_212(vector3 vParam0)//Position - 0xDB32
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.y = 0f;
		vParam0.z = 0f;
	}
	return vParam0;
}

void func_213(var uParam0)//Position - 0xDB71
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_214(int iParam0, int iParam1)//Position - 0xDB8C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_37)
	{
		if (Local_37[iVar0 /*4*/].f_1 == iParam0 && Local_37[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_215(int iParam0)//Position - 0xDBCB
{
	if (unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), iParam0) && unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 6))
	{
		return 1;
	}
	return 0;
}

int func_216(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0xDBF3
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 8f;
	fVar1 = 15f;
	if (bParam1 == 0)
	{
		fVar0 = 1.86f;
		fVar1 = 1.86f;
	}
	if (bParam2)
	{
		fVar0 = 2f;
	}
	if (func_124(unk_0xBC25C936A095B5BA()) && func_124(iParam0))
	{
		unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_220(iParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_217(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (unk_0x75F706B6889D7D86(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x32E373675659FDB0(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x04880508C862E589(unk_0x541C2AEF053615BC(iParam0, true), fVar0, 1))
					{
						return 1;
					}
				}
			}
			else
			{
				if (bParam1)
				{
					fVar0 = 1.86f;
					fVar1 = 1.86f;
				}
				if (func_220(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_217(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_217(int iParam0, float fParam1, bool bParam2, bool bParam3)//Position - 0xDCEE
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { unk_0x541C2AEF053615BC(iParam0, true) };
	vVar1 = { vVar0 };
	vVar0.x = (vVar0.x - fParam1);
	vVar0.y = (vVar0.y - fParam1);
	vVar0.z = (vVar0.z - fParam1);
	vVar1.x = (vVar1.x + fParam1);
	vVar1.y = (vVar1.y + fParam1);
	vVar1.z = (vVar1.z + fParam1);
	if (bParam2)
	{
		if (((unk_0x882DD30F83E61E2F(unk_0x541C2AEF053615BC(iParam0, true), joaat("weapon_grenade"), fParam1, 1) || unk_0x882DD30F83E61E2F(unk_0x541C2AEF053615BC(iParam0, true), joaat("weapon_molotov"), fParam1, 1)) || unk_0x882DD30F83E61E2F(unk_0x541C2AEF053615BC(iParam0, true), joaat("weapon_smokegrenade"), fParam1, 1)) || unk_0x882DD30F83E61E2F(unk_0x541C2AEF053615BC(iParam0, true), joaat("weapon_stickybomb"), 5f, 1))
		{
			if (bParam3)
			{
				if (func_218(iParam0, fParam1))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			return 1;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_218(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x876474582C5DECDE(vVar0, vVar1, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_218(int iParam0, float fParam1)//Position - 0xDDFA
{
	var uVar0;
	vector3 vVar1;
	
	if ((((unk_0x532D2AB42B013CC0(iParam0, joaat("weapon_grenade"), fParam1, &vVar1, &uVar0, 0) || unk_0x532D2AB42B013CC0(iParam0, joaat("weapon_smokegrenade"), fParam1, &vVar1, &uVar0, 0)) || unk_0x532D2AB42B013CC0(iParam0, joaat("weapon_bzgas"), fParam1, &vVar1, &uVar0, 0)) || unk_0x532D2AB42B013CC0(iParam0, joaat("weapon_stickybomb"), fParam1, &vVar1, &uVar0, 0)) || unk_0x532D2AB42B013CC0(iParam0, joaat("weapon_molotov"), fParam1, &vVar1, &uVar0, 0))
	{
		if (func_219(iParam0, vVar1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_219(int iParam0, vector3 vParam1, float fParam2, int iParam3)//Position - 0xDE8F
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { func_212(vParam1 - unk_0x541C2AEF053615BC(iParam0, true)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		vVar1 = { unk_0xF90427F311003E57(iParam0) };
	}
	else
	{
		vVar1 = { func_212(unk_0x823166D9421223CA(iParam0, 31086, 0f, 5f, 0f) - unk_0x823166D9421223CA(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_211(vVar1, vVar0);
	if (fVar2 <= SYSTEM::COS((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

int func_220(int iParam0, bool bParam1, float fParam2, float fParam3)//Position - 0xDF1D
{
	if (bParam1)
	{
		if (unk_0x32E373675659FDB0(unk_0xBC25C936A095B5BA()))
		{
			if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (unk_0x04880508C862E589(unk_0x541C2AEF053615BC(iParam0, true), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

int func_221(int iParam0)//Position - 0xDF65
{
	if (((((iParam0 == 2 || iParam0 == 3) || iParam0 == 34) || iParam0 == 11) || iParam0 == 52) || iParam0 == 53)
	{
		return 0;
	}
	return 1;
}

void func_222(int iParam0)//Position - 0xDFAF
{
	int iVar0;
	
	if (func_124(unk_0xBC25C936A095B5BA()) && func_124(iParam0))
	{
		unk_0x522053D86D6E1C7A("rcmextreme3");
		while (!unk_0xF9E082857622D91E("rcmextreme3"))
		{
			SYSTEM::WAIT(0);
		}
		unk_0xC5A6DFE2B8987B17(&iVar0);
		unk_0xE896C0AD02364F2A(0, "rcmextreme3", "jump_fall", 1000f, -8f, -1, 8, 0, 0, 0, 0);
		unk_0x0D042F5C6172D20A(0, 1);
		unk_0xB0746E7FB281549D(0, 64.6f, -737.8f, 44.2f);
		unk_0x5558ED6D4A2DEC93(0, unk_0xBC25C936A095B5BA(), 10000f, -1, 0, 0);
		unk_0x535008C596714F9E(iVar0);
		unk_0xA8E6405305C0D7DF(iParam0, iVar0);
		unk_0x02DAF06EA4F08219(&iVar0);
	}
}

int func_223(int iParam0)//Position - 0xE04C
{
	if (iParam0 == -1)
	{
		iParam0 = func_161();
	}
	if (iParam0 == -1)
	{
		return 1;
	}
	if (func_229(iParam0))
	{
		return 0;
	}
	if (!func_158(4))
	{
		if (func_227(iParam0))
		{
		}
		else
		{
			return 1;
		}
	}
	if (func_226() && !func_225())
	{
		return 1;
	}
	if (!func_224(iParam0))
	{
		if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) != 0)
			{
				return 1;
			}
		}
	}
	if (!unk_0xFA30DFD0084E92FE(Global_19B04.f_4871[iParam0 /*6*/], 2))
	{
		return 1;
	}
	return 0;
}

int func_224(int iParam0)//Position - 0xE0E4
{
	if ((((iParam0 == 5 || iParam0 == 6) || iParam0 == 41) || iParam0 == 60) || iParam0 == 61)
	{
		return 1;
	}
	return 0;
}

int func_225()//Position - 0xE123
{
	if (unk_0x8ACB0C3FACC09467())
	{
		if (unk_0x45397F173D3E5C6B() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_226()//Position - 0xE140
{
	if (Global_15FA6 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_147B0[Global_15FA6 /*34*/].f_F, 20);
	}
	return 0;
}

int func_227(int iParam0)//Position - 0xE166
{
	if ((func_228() && Global_16B1B.f_B == 6) && iParam0 == func_162(&(Global_16B1B.f_3), 0))
	{
		return 1;
	}
	return 0;
}

int func_228()//Position - 0xE19A
{
	if (((Global_16B1B == 13 || Global_16B1B == 10) || Global_16B1B == 11) || Global_16B1B == 12)
	{
		return 0;
	}
	return 1;
}

int func_229(int iParam0)//Position - 0xE1D8
{
	if (func_105(0))
	{
		if (Global_11638.f_1 == 7)
		{
			if (Global_11638 == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_230(int iParam0)//Position - 0xE200
{
	switch (*iParam0)
	{
		case 25:
			if (!func_239(iParam0))
			{
				return 0;
			}
			break;
		
		case 26:
			if (!func_231(iParam0))
			{
				return 0;
			}
			break;
	}
	func_268("Created initial scene");
	return 1;
}

int func_231(var uParam0)//Position - 0xE247
{
	int iVar0[5];
	int iVar1;
	bool bVar2;
	
	iVar0[0] = uLocal_52;
	iVar0[1] = iLocal_53;
	iVar0[2] = iLocal_54;
	iVar0[3] = iLocal_55;
	iVar0[4] = iLocal_56;
	switch (iLocal_51)
	{
		case 0:
			uParam0->f_10 = 0;
			uParam0->f_1B = 0;
			uParam0->f_1A = 1;
			StringCopy(&(uParam0->f_9), "HUN_2_MCS_1", 24);
			uParam0->f_F = 4f;
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				unk_0xF243B7A14FCFD0F4(iVar0[iVar1]);
				iVar1++;
			}
			unk_0x522053D86D6E1C7A("rcmhunting2");
			iLocal_51 = 1;
			break;
		
		case 1:
			if (!func_238(&iVar0) || !unk_0xF9E082857622D91E("rcmhunting2"))
			{
				return 0;
			}
			iLocal_51 = 2;
			break;
		
		case 2:
			bVar2 = true;
			if (!unk_0x724D816EA203A79E(uParam0->f_1C[0]))
			{
				if (func_235(&(uParam0->f_1C[0]), 54, -683.3276f, 5841.042f, 17.217f, 8.33f, "RC HUNTER 2", 1))
				{
					unk_0x7A535CE1F001F3FE(uParam0->f_1C[0], joaat("weapon_pumpshotgun"), 0, true, true);
				}
				else
				{
					bVar2 = false;
				}
			}
			if (!unk_0x724D816EA203A79E(uParam0->f_23[0]))
			{
				func_232(&(uParam0->f_23[0]), -685.2281f, 5833.982f, 16.331f, 313.2204f, 0);
			}
			if (!unk_0x724D816EA203A79E(iLocal_58))
			{
				iLocal_58 = unk_0x8DF8172E178D3B37(joaat("weapon_sniperrifle"), 0, vLocal_57, 0, 1065353216, 0, 0, 1);
				unk_0x112064CBEF6B2384(iLocal_58, joaat("component_at_scope_large"));
				unk_0x112064CBEF6B2384(iLocal_58, joaat("component_at_ar_supp_02"));
			}
			if (bVar2)
			{
				iLocal_51 = 3;
			}
			break;
		
		case 3:
			if (func_124(uParam0->f_1C[0]))
			{
				if (unk_0xF9E082857622D91E("rcmhunting2"))
				{
					unk_0x16F091616F4E9EA0(uParam0->f_1C[0], "rcmhunting2", "_idle_loop", -683.152f, 5841.281f, 17.32f, 0f, 0f, 17.024f, 1000f, -8f, -1, 790537, 0f, 2, 1);
				}
			}
			unk_0x56F2E1B5599188FA(uParam0->f_1C[0], unk_0xBC25C936A095B5BA(), -1, 3088, 2);
			if (unk_0x70CF24CEFB0F53B0(vLocal_57, 1f, iLocal_54, 0))
			{
				unk_0x784C605D172817C8(iLocal_58, 0f, -90f, -162.64f, 2, 1);
			}
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				unk_0x2CA123B0622F495C(iVar0[iVar1]);
				iVar1++;
			}
			return 1;
			break;
	}
	return 0;
}

void func_232(int iParam0, vector3 vParam1, float fParam2, int iParam3)//Position - 0xE47C
{
	func_233(iParam0, iLocal_53, vParam1, fParam2);
	if (unk_0x724D816EA203A79E(*iParam0))
	{
		unk_0xF0A40F19AAB79E88(*iParam0, 1084227584);
		unk_0xE54F7105CEA81918(*iParam0, 1, true);
		unk_0xE54F7105CEA81918(*iParam0, 2, false);
		unk_0xE54F7105CEA81918(*iParam0, 3, true);
		unk_0x6012A6A4F2950585(*iParam0, 0);
		unk_0xA73D1278857991A2(*iParam0, true);
		if (iParam3 == 1)
		{
			unk_0xD421BC740C5340C3(*iParam0, 2);
		}
	}
}

void func_233(int iParam0, int iParam1, vector3 vParam2, float fParam3)//Position - 0xE4E2
{
	func_234(iParam0);
	*iParam0 = unk_0x61C05BF08A1E0EFE(iParam1, vParam2, fParam3, true, true, false);
	if (unk_0x724D816EA203A79E(*iParam0))
	{
		unk_0xF0A40F19AAB79E88(*iParam0, 1084227584);
		unk_0x65E471E4A2D56226(*iParam0, 1000, 0);
	}
}

void func_234(int iParam0)//Position - 0xE524
{
	if (unk_0x724D816EA203A79E(*iParam0))
	{
		if (!unk_0x5CAE759AE8219D20(*iParam0))
		{
			unk_0x77815D3407C6700D(*iParam0, true, 0);
		}
		if (func_169(*iParam0))
		{
			if (unk_0x5CAE759AE8219D20(*iParam0) && unk_0xB248FAA35ED47DB9(*iParam0, 1))
			{
				if (func_124(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), *iParam0, 0))
					{
						unk_0x1E7A09C1710FB071(iParam0);
						return;
					}
				}
				unk_0xCF6040807CC0E4A5(iParam0);
			}
		}
		else
		{
			if (func_124(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), *iParam0, 0))
				{
					unk_0x1E7A09C1710FB071(iParam0);
					return;
				}
			}
			unk_0xCF6040807CC0E4A5(iParam0);
		}
	}
}

int func_235(int iParam0, int iParam1, vector3 vParam2, float fParam3, char* sParam4, int iParam5)//Position - 0xE5C0
{
	if (func_236(iParam0, iParam1, vParam2, fParam3, 1))
	{
		if (unk_0x724D816EA203A79E(*iParam0))
		{
			if (!unk_0x1D403DFADBC2DE3C(*iParam0, 0))
			{
				unk_0x2E35C4FA5F0ED22F(*iParam0, true);
				unk_0x8EF3D958386640FE(*iParam0, 0);
				if (iParam5 == 1)
				{
					unk_0xB105531EDD3DE51B(*iParam0, false);
				}
			}
			unk_0xF85FAED5BA864282(*iParam0, sParam4);
		}
		return 1;
	}
	return 0;
}

int func_236(int iParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4)//Position - 0xE61C
{
	int iVar0;
	
	if (!func_36(iParam1))
	{
		iVar0 = func_271(iParam1);
		unk_0xF243B7A14FCFD0F4(iVar0);
		if (unk_0xD6513D668481290A(iVar0))
		{
			if (unk_0x724D816EA203A79E(*iParam0))
			{
				unk_0xF845620A03C7425B(iParam0);
			}
			*iParam0 = unk_0x01B3635C3E8EDD81(26, iVar0, vParam2, fParam3, 0, false);
			unk_0xDC3C88A35B53F90B(*iParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (unk_0xA86A4D206EC8EB16(*iParam0, 3) == 0)
				{
					unk_0xB0031DDAE4FF0BC3(*iParam0, 5, 2, 0, 0);
				}
			}
			func_237(*iParam0, iParam1);
			if (bParam4)
			{
				unk_0x2CA123B0622F495C(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_237(var uParam0, int iParam1)//Position - 0xE6AA
{
	int iVar0;
	
	iVar0 = 7;
	if (iParam1 == 19)
	{
		iVar0 = 3;
	}
	else if (iParam1 == 14)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 17)
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = 7;
		return 0;
	}
	Global_15B66[(iVar0 - 3)] = uParam0;
	return 1;
}

int func_238(int iParam0)//Position - 0xE6F0
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (!unk_0xD6513D668481290A((*iParam0)[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_239(var uParam0)//Position - 0xE721
{
	int iVar0[2];
	int iVar1;
	bool bVar2;
	
	iVar0[0] = uLocal_52;
	iVar0[1] = iLocal_53;
	switch (iLocal_51)
	{
		case 0:
			uParam0->f_10 = 0;
			uParam0->f_F = 15f;
			uParam0->f_1B = 0;
			uParam0->f_1A = 1;
			StringCopy(&(uParam0->f_9), "CLETUS_MCS_1_concat", 24);
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				unk_0xF243B7A14FCFD0F4(iVar0[iVar1]);
				iVar1++;
			}
			func_241(&(uParam0->f_30), "special_ped@cletus@base", "cletus_base", 0);
			unk_0x522053D86D6E1C7A("special_ped@cletus@base");
			iLocal_51 = 1;
			break;
		
		case 1:
			if ((!func_238(&iVar0) || !func_240(&(uParam0->f_30))) || !unk_0xF9E082857622D91E("special_ped@cletus@base"))
			{
				return 0;
			}
			iLocal_51 = 2;
			break;
		
		case 2:
			bVar2 = true;
			if (!unk_0x724D816EA203A79E(uParam0->f_1C[0]))
			{
				if (func_235(&(uParam0->f_1C[0]), 54, 1804.33f, 3931.33f, 33.83f, 91.63f, "RC HUNTER 1", 1))
				{
					unk_0x7A535CE1F001F3FE(uParam0->f_1C[0], joaat("weapon_sniperrifle"), 0, true, true);
				}
				else
				{
					bVar2 = false;
				}
			}
			if (!unk_0x724D816EA203A79E(uParam0->f_23[0]))
			{
				func_232(&(uParam0->f_23[0]), 1806.732f, 3934.353f, 33.3275f, 76.1155f, 0);
				unk_0xEDAD35A0D81ED3FB(1804.501f, 3922.917f, 32.8091f, 2f, 0, 0, 0, 0, false, 0);
			}
			if (bVar2)
			{
				iLocal_51 = 3;
			}
			break;
		
		case 3:
			if (func_124(uParam0->f_1C[0]))
			{
				unk_0xC808BD76500BA693(uParam0->f_1C[0], joaat("weapon_sniperrifle"), joaat("component_at_ar_supp_02"));
				unk_0xC8FD3EBBB90E8D7F(uParam0->f_1C[0], 104, true);
				unk_0x8E25082A46F87892(uParam0->f_1C[0], joaat("weapon_sniperrifle"), true);
				if (unk_0xF9E082857622D91E("special_ped@cletus@base"))
				{
					unk_0xE896C0AD02364F2A(uParam0->f_1C[0], "special_ped@cletus@base", "cletus_base", 8f, -8f, -1, 1, 0, 0, 0, 0);
				}
			}
			unk_0xA0C0B32E74BE8DB7(1801.159f, 3919.606f, 33.0662f, 5f, 0);
			unk_0xF16F7C45E0B1B52B(1803.603f, 3920.191f, 32.9855f, 1798.416f, 3918.291f, 35.0579f);
			unk_0xA0C0B32E74BE8DB7(1797.286f, 3927.359f, 33.0176f, 4f, 0);
			unk_0xF16F7C45E0B1B52B(1793.765f, 3926.749f, 35.1276f, 1799.73f, 3927.815f, 32.9875f);
			if (unk_0xC3B8DF3047632A6F("WORLD_HUMAN_HANG_OUT_STREET"))
			{
				unk_0xD0FC9D284379BED4("WORLD_HUMAN_HANG_OUT_STREET", 0);
			}
			if (unk_0xC3B8DF3047632A6F("WORLD_HUMAN_DRINKING"))
			{
				unk_0xD0FC9D284379BED4("WORLD_HUMAN_DRINKING", 0);
			}
			if (unk_0xC3B8DF3047632A6F("WORLD_HUMAN_SMOKING"))
			{
				unk_0xD0FC9D284379BED4("WORLD_HUMAN_SMOKING", 0);
			}
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				unk_0x2CA123B0622F495C(iVar0[iVar1]);
				iVar1++;
			}
			return 1;
			break;
	}
	return 0;
}

int func_240(var uParam0)//Position - 0xE9D6
{
	if (func_196(uParam0))
	{
		unk_0x522053D86D6E1C7A(*uParam0);
		if (unk_0xF9E082857622D91E(*uParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_241(var uParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0xEA00
{
	*uParam0 = sParam1;
	uParam0->f_1 = sParam2;
	uParam0->f_2 = iParam3;
	unk_0x522053D86D6E1C7A(*uParam0);
	uParam0->f_5 = { 0f, 0f, 0f };
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_3 = 1;
	uParam0->f_4 = 0;
}

int func_242(int iParam0)//Position - 0xEA3C
{
	struct<27> Var0;
	int iVar1;
	
	func_107(iParam0, &Var0);
	iVar1 = func_102();
	if (iVar1 == 145)
	{
		return 1;
	}
	else if ((iVar1 != 1 && iVar1 != 0) && iVar1 != 2)
	{
		return 1;
	}
	if (!unk_0xFA30DFD0084E92FE(Var0.f_1A, iVar1))
	{
		return 1;
	}
	return 0;
}

int func_243(int iParam0)//Position - 0xEA90
{
	char* sVar0;
	
	if (Global_11542)
	{
		func_268("STEP_3_COMMON_CanRCLaunch - Script denied. Multiplayer is running [TERMINATING]");
		return 0;
	}
	if (!Global_19B04.f_2360 && !func_105(1))
	{
		func_268("STEP_3_COMMON_CanRCLaunch - Script denied, game flow is not active");
		return 0;
	}
	if (!func_244(iParam0))
	{
		Global_19773[iParam0 /*10*/].f_1 = 1;
		func_268("STEP_3_COMMON_CanRCLaunch - Script denied by RC Controller [TERMINATING]");
		return 0;
	}
	if (Global_16B1B.f_B == 6)
	{
		if (Global_16B1B < 9)
		{
			func_107(iParam0, &sVar0);
			if (unk_0x3362CDE8460ED38B(&(Global_16B1B.f_3), sVar0))
			{
				func_268("STEP_3_COMMON_CanRCLaunch - Script denied as a replay for this RC is being configured. [TERMINATING]");
				return 0;
			}
		}
	}
	if (unk_0xB731B8C5BCE89836(joaat("candidate_controller")) == 0)
	{
		Global_19773[iParam0 /*10*/].f_1 = 1;
		func_268("STEP_3_COMMON_CanRCLaunch - Script denied as candidate_controller is not running. [TERMINATING]");
		return 0;
	}
	return 1;
}

int func_244(int iParam0)//Position - 0xEB49
{
	var uVar0;
	
	func_107(iParam0, &uVar0);
	if (!func_158(4))
	{
		if (func_227(iParam0))
		{
		}
		else
		{
			return 0;
		}
	}
	if (func_226() && !func_225())
	{
		return 0;
	}
	if (func_250(iParam0))
	{
		return 0;
	}
	if (iParam0 == -1)
	{
		iParam0 = func_161();
	}
	if (iParam0 == -1)
	{
		return 0;
	}
	if (!func_229(iParam0))
	{
		if (!func_249(iParam0))
		{
			return 0;
		}
		if (!func_248(iParam0))
		{
			return 0;
		}
		if (func_247(iParam0))
		{
			return 0;
		}
	}
	if (iParam0 == 58)
	{
		if (func_245(5))
		{
			Global_19773[iParam0 /*10*/].f_3 = 0;
		}
	}
	if (Global_19773[iParam0 /*10*/].f_3 == 1)
	{
		return 0;
	}
	return 1;
}

int func_245(int iParam0)//Position - 0xEC0A
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (Global_16B4F.f_13F == 0)
	{
		return 0;
	}
	if (iParam0 == 10)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (func_245(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	else if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		func_246(iParam0, &sVar1);
		iVar2 = unk_0x5E29F9399E0829A3(Global_1584A[iParam0 /*10*/].f_3, &sVar1);
		if (iVar2 != 0 && Global_16B4F.f_13F == iVar2)
		{
			return 1;
		}
	}
	return 0;
}

bool func_246(int iParam0, char* sParam1)//Position - 0xEC8F
{
	StringCopy(sParam1, "", 32);
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "v_michael", 32);
			break;
		
		case 5:
			StringCopy(sParam1, "v_franklins", 32);
			break;
		
		case 6:
			StringCopy(sParam1, "v_franklinshouse", 32);
			break;
		
		case 2:
		case 1:
			if (unk_0xE7CC712DAAEA69F3("TrevorsTrailer"))
			{
				StringCopy(sParam1, "v_trailer", 32);
			}
			else if (unk_0xE7CC712DAAEA69F3("TrevorsTrailerTidy"))
			{
				StringCopy(sParam1, "V_TrailerTIDY", 32);
			}
			else if (unk_0xE7CC712DAAEA69F3("TrevorsTrailerTrash"))
			{
				StringCopy(sParam1, "V_TrailerTRASH", 32);
			}
			break;
		
		case 3:
			StringCopy(sParam1, "v_trevors", 32);
			break;
		
		case 4:
			StringCopy(sParam1, "v_strip3", 32);
			break;
		
		case 8:
		case 7:
		case 9:
			StringCopy(sParam1, "v_psycheoffice", 32);
			break;
	}
	return !unk_0x3362CDE8460ED38B(sParam1, "");
}

bool func_247(int iParam0)//Position - 0xED71
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_19B04.f_4871[iParam0 /*6*/], 3);
}

bool func_248(int iParam0)//Position - 0xED9F
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_19B04.f_4871[iParam0 /*6*/], 2);
}

bool func_249(int iParam0)//Position - 0xEDCD
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_19B04.f_4871[iParam0 /*6*/], 0);
}

int func_250(int iParam0)//Position - 0xEDFB
{
	if (func_224(iParam0))
	{
		return 0;
	}
	else if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) != 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_251()//Position - 0xEE30
{
	func_268("Running end routines.");
	Global_199EA = (Global_199EA - 1);
}

int func_252(int iParam0, int iParam1, vector3 vParam2, float fParam3)//Position - 0xEE4A
{
	int iVar0;
	
	if (*iParam0 == 1)
	{
		if (func_253((*iParam0)[0], vParam2, fParam3, iParam1))
		{
			return 1;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < *iParam0)
		{
			if (func_253((*iParam0)[iVar0], vParam2, fParam3, iParam1))
			{
				iVar0 = *iParam0;
				return 1;
			}
			iVar0++;
		}
	}
	func_268("DETERMINE_RC_TO_LAUNCH - Unable to find mission to launch [TERMINATING]");
	return 0;
}

int func_253(int iParam0, vector3 vParam1, float fParam2, var uParam3)//Position - 0xEEAF
{
	int iVar0;
	struct<7> Var1;
	
	iVar0 = 0;
	func_107(iParam0, &Var1);
	if (func_254(Var1.f_6, vParam1, fParam2, 0))
	{
		if (unk_0xFA30DFD0084E92FE(Global_19B04.f_4871[iParam0 /*6*/], 0))
		{
			if (!unk_0xFA30DFD0084E92FE(Global_19B04.f_4871[iParam0 /*6*/], 3))
			{
				iVar0 = 1;
			}
		}
		if (func_229(iParam0))
		{
			iVar0 = 1;
		}
	}
	if (iVar0 == 1)
	{
		*uParam3 = iParam0;
		StringCopy(&(uParam3->f_1), Var1, 32);
		return 1;
	}
	return 0;
}

int func_254(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0xEF2D
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (unk_0x357058E632979E65((vParam0.x - vParam1.x)) <= fParam2)
		{
			if (unk_0x357058E632979E65((vParam0.y - vParam1.y)) <= fParam2)
			{
				if (unk_0x357058E632979E65((vParam0.z - vParam1.z)) <= fParam2)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x357058E632979E65((vParam0.x - vParam1.x)) <= fParam2)
	{
		if (unk_0x357058E632979E65((vParam0.y - vParam1.y)) <= fParam2)
		{
			return 1;
		}
	}
	return 0;
}

void func_255(int iParam0, bool bParam1)//Position - 0xEFA8
{
	if (bParam1)
	{
		func_268("SCRIPT TERMINATING: Cleaning up entities in Launcher");
		func_256(iParam0, 0, 0, 0);
	}
	if (iLocal_59 != -1)
	{
		func_268("SCRIPT TERMINATING: Ending off-mission cutscene request");
		func_190(&iLocal_59);
	}
	if (bParam1)
	{
		func_191(*iParam0);
	}
	func_251();
	func_268("SCRIPT TERMINATED");
	unk_0x95E4B6F3ED223F5A();
}

void func_256(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0xEFF5
{
	func_263(uParam0, iParam1);
	func_260(uParam0, bParam2);
	func_257(uParam0, bParam3);
}

void func_257(var uParam0, bool bParam1)//Position - 0xF015
{
	func_258(&(uParam0->f_29), bParam1);
}

void func_258(var uParam0, bool bParam1)//Position - 0xF027
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1)
		{
			func_198(uParam0[iVar0]);
		}
		else
		{
			func_259(uParam0[iVar0], 0);
		}
		iVar0++;
	}
}

void func_259(int iParam0, bool bParam1)//Position - 0xF065
{
	if (unk_0x724D816EA203A79E(*iParam0))
	{
		if (unk_0x2FAEA11D96CF14A3(*iParam0))
		{
			unk_0x17175087F2DB6AC8(*iParam0, 1, true);
		}
		if (!bParam1)
		{
			unk_0xF8ED8988FAF2823F(iParam0);
		}
		else
		{
			unk_0x5524CBCEE0910236(*iParam0);
		}
	}
}

void func_260(var uParam0, bool bParam1)//Position - 0xF0A0
{
	func_261(&(uParam0->f_23), bParam1);
}

void func_261(var uParam0, bool bParam1)//Position - 0xF0B2
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1)
		{
			func_234(uParam0[iVar0]);
		}
		else
		{
			func_262(uParam0[iVar0]);
		}
		iVar0++;
	}
}

void func_262(int iParam0)//Position - 0xF0EF
{
	if (unk_0x724D816EA203A79E(*iParam0))
	{
		unk_0x1D403DFADBC2DE3C(*iParam0, 0);
		if (unk_0x5CAE759AE8219D20(*iParam0) && unk_0xB248FAA35ED47DB9(*iParam0, 1))
		{
			unk_0x1E7A09C1710FB071(iParam0);
		}
	}
}

void func_263(var uParam0, int iParam1)//Position - 0xF127
{
	func_264(&(uParam0->f_1C), iParam1);
}

void func_264(var uParam0, int iParam1)//Position - 0xF139
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (iParam1 == 1)
		{
			func_266(uParam0[iVar0]);
		}
		else
		{
			func_265(uParam0[iVar0], 0, 1, 0);
		}
		iVar0++;
	}
}

void func_265(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0xF17A
{
	if (unk_0x724D816EA203A79E(*iParam0))
	{
		if (!unk_0x36CEFBE9B745A58D(*iParam0))
		{
			unk_0xB71D41C0310C93DE(*iParam0, false, 1);
			if (iParam3 == 0)
			{
				unk_0xD999D66C5AFA4BE3(*iParam0);
			}
			unk_0x22321800954A532E(*iParam0, bParam1);
			if (iParam2 == 1)
			{
				unk_0x2E35C4FA5F0ED22F(*iParam0, false);
			}
		}
		unk_0x02537C8C1BEEB477(iParam0);
	}
}

void func_266(int iParam0)//Position - 0xF1CA
{
	if (unk_0x724D816EA203A79E(*iParam0))
	{
		if (!unk_0x1D403DFADBC2DE3C(*iParam0, 0))
		{
			unk_0xB71D41C0310C93DE(*iParam0, false, 1);
		}
		if (!unk_0x5CAE759AE8219D20(*iParam0))
		{
			unk_0x77815D3407C6700D(*iParam0, true, 0);
		}
		unk_0xF845620A03C7425B(iParam0);
	}
}

void func_267(var uParam0)//Position - 0xF20B
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_8C1B)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_8C1A = 0;
	Global_8C1C = 0;
	Global_8C41 = 15;
	Global_DA9C = 0;
	Global_DA9D = 0;
}

void func_268(char* sParam0)//Position - 0xF248
{
	if (!unk_0xF1734B55490E9045(sParam0))
	{
	}
}

void func_269(var uParam0)//Position - 0xF25A
{
	*uParam0 = -1;
	StringCopy(&(uParam0->f_1), "", 32);
	uParam0->f_F = 12f;
	uParam0->f_10 = 6;
	uParam0->f_19 = 0;
	uParam0->f_1A = 0;
	uParam0->f_1B = 0;
}

void func_270()//Position - 0xF28D
{
	func_268("Running start routines.");
	Global_199EA++;
}

int func_271(int iParam0)//Position - 0xF2A7
{
	if (!func_36(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

