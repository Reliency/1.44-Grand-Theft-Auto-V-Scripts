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
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
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
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
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
	char* sLocal_70 = NULL;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	float fLocal_78 = 0f;
	int iLocal_79 = 0;
	int iLocal_80[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_46 = 1;
	iLocal_47 = 1;
	iLocal_48 = 1;
	iLocal_49 = 1;
	iLocal_50 = 1;
	iLocal_51 = 1;
	iLocal_52 = 1;
	iLocal_53 = 1;
	iLocal_54 = 1;
	iLocal_55 = 1;
	iLocal_56 = 1;
	iLocal_57 = 1;
	iLocal_58 = 1;
	iLocal_59 = 1;
	iLocal_60 = 1;
	iLocal_61 = 1;
	iLocal_62 = 1;
	iLocal_63 = 1;
	iLocal_64 = 1;
	iLocal_65 = 1;
	iLocal_66 = 1;
	iLocal_67 = joaat("bmx");
	iLocal_73 = 300000;
	fLocal_78 = 1f;
	if (unk_0xE8A79675302ED812(34))
	{
		func_112();
	}
	Global_63B3 = 0;
	Global_63B2 = 0;
	Global_63B4 = 0;
	Global_63B5 = 0;
	Global_63B7 = 0;
	Global_63B6 = 0;
	func_111();
	while (true)
	{
		func_2();
		if (((unk_0x7AF0088ABFA713B6() && func_1(unk_0xB5CEFD608600A09F(), 1, 1)) && !Global_180525) && Global_62BD == 0)
		{
			func_112();
		}
		SYSTEM::WAIT(0);
	}
}

int func_1(int iParam0, bool bParam1, bool bParam2)//Position - 0x127
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

void func_2()//Position - 0x171
{
	func_87();
	func_67();
	func_21();
	func_3(iLocal_67);
}

void func_3(int iParam0)//Position - 0x18B
{
	switch (iLocal_46)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			if (unk_0x50298ED00321BDFA())
			{
				func_20("CHEAT_VEHICLE_SPAWN_DENIED");
				iLocal_46 = 1;
			}
			else
			{
				func_19(iParam0);
			}
			break;
		
		case 4:
			func_4(iParam0);
			break;
		
		default:
			break;
	}
}

void func_4(int iParam0)//Position - 0x1E0
{
	vector3 vVar0;
	float fVar1;
	bool bVar2;
	
	bVar2 = false;
	if (unk_0xD6513D668481290A(iParam0))
	{
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			if (unk_0x724D816EA203A79E(iLocal_68))
			{
				if (!unk_0x1D403DFADBC2DE3C(iLocal_68, 0))
				{
					if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_68, 0))
					{
						vVar0 = { unk_0x541C2AEF053615BC(iLocal_68, true) };
						fVar1 = unk_0x349C94FFF43E2979(iLocal_68);
						unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), vVar0.x, vVar0.y, (vVar0.z + 4f), 1, 0, 0, 1);
						bVar2 = true;
					}
				}
				unk_0xCF6040807CC0E4A5(&iLocal_68);
			}
			if (!bVar2)
			{
				if (iParam0 == joaat("duster") || iParam0 == joaat("stunt"))
				{
					vVar0 = { unk_0xA4455714F3DCE207(unk_0xBC25C936A095B5BA(), -1.5f, 3.5f, 1f) };
				}
				else if (iParam0 == joaat("buzzard"))
				{
					vVar0 = { unk_0xA4455714F3DCE207(unk_0xBC25C936A095B5BA(), 0f, 6f, 2f) };
				}
				else
				{
					vVar0 = { unk_0xA4455714F3DCE207(unk_0xBC25C936A095B5BA(), 0f, 3.5f, 1f) };
				}
				fVar1 = (unk_0x349C94FFF43E2979(unk_0xBC25C936A095B5BA()) + 90f);
			}
			if (func_17(iParam0, vVar0, fVar1))
			{
				iLocal_68 = unk_0x61C05BF08A1E0EFE(iParam0, vVar0, fVar1, 0, 1, 0);
				unk_0xF0A40F19AAB79E88(iLocal_68, 1084227584);
				unk_0x2CA123B0622F495C(iParam0);
				unk_0x1E7A09C1710FB071(&iLocal_68);
				func_15(sLocal_70);
				func_5(20);
			}
			else
			{
				unk_0x2CA123B0622F495C(iParam0);
				func_20("CHEAT_VEHICLE_SPAWN_DENIED");
			}
			iLocal_46 = 1;
		}
	}
}

void func_5(int iParam0)//Position - 0x323
{
	if (!func_14(14) && !func_13(""))
	{
		unk_0xF0059F27F7BB6680(&Global_63B4, iParam0);
		Global_63B7 = 1;
		func_6();
	}
}

void func_6()//Position - 0x356
{
	int iVar0;
	
	iVar0 = func_8();
	switch (iVar0)
	{
		case 0:
			func_7(joaat("sp0_times_cheated"), 1);
			break;
		
		case 1:
			func_7(joaat("sp1_times_cheated"), 1);
			break;
		
		case 2:
			func_7(joaat("sp2_times_cheated"), 1);
			break;
	}
}

void func_7(int iParam0, int iParam1)//Position - 0x3A4
{
	int iVar0;
	
	unk_0x6CB99B97664C3727(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x3A57956BCE003880(iParam0, iVar0, 1);
}

int func_8()//Position - 0x3C7
{
	func_9();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_9()//Position - 0x3E0
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_12(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_11(unk_0xBC25C936A095B5BA());
			if (func_10(iVar0) && (!func_14(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_10(Global_19B04.f_932.f_21B.f_10CD))
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

bool func_10(int iParam0)//Position - 0x4DD
{
	return iParam0 < 3;
}

int func_11(int iParam0)//Position - 0x4E9
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_12(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_12(int iParam0)//Position - 0x526
{
	if (func_10(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_13(char* sParam0)//Position - 0x550
{
	if (iLocal_84 != 0)
	{
		if (func_14(14) && unk_0x726D9204B160D23E())
		{
			if (unk_0x3362CDE8460ED38B(sParam0, "CHEAT_SUPER_JUMP") && unk_0x50298ED00321BDFA())
			{
				return 0;
			}
			if ((unk_0x3362CDE8460ED38B(sParam0, "CHEAT_GRAVITY_MOON") && !unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0)) && unk_0x149E9368A11035DE(unk_0xBC25C936A095B5BA()))
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

bool func_14(int iParam0)//Position - 0x5BA
{
	return Global_8C41 == iParam0;
}

void func_15(char* sParam0)//Position - 0x5C8
{
	if (func_13(""))
	{
	}
	else
	{
		unk_0x2E94302CFF011F2E("CHEAT_ACTIVATED");
		unk_0xC9C304D0AABE1335(sParam0);
		func_16(unk_0x5E48BB10C6423FD5(0, 1));
		unk_0xC0710A85A78B056E(sParam0);
	}
}

void func_16(int iParam0)//Position - 0x5FA
{
	iLocal_80[iLocal_81] = iParam0;
	iLocal_81++;
	if (iLocal_81 >= 10)
	{
		iLocal_81 = 0;
	}
}

int func_17(int iParam0, vector3 vParam1, float fParam2)//Position - 0x61A
{
	vector3 vVar0[9];
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	var uVar14;
	
	unk_0x2B3953EE61953843(iParam0, &vVar1, &vVar2);
	vVar3.x = (unk_0x357058E632979E65((vVar2.x - vVar1.x)) / 2f);
	vVar3.y = (unk_0x357058E632979E65((vVar2.y - vVar1.y)) / 2f);
	vVar3.z = (unk_0x357058E632979E65((vVar2.z - vVar1.z)) / 2f);
	vVar0[0 /*3*/] = { vParam1 };
	vVar0[1 /*3*/] = { unk_0x89D97EB4FAE4A574(vParam1, fParam2, -vVar3.x, -vVar3.y, -vVar3.z) };
	vVar0[2 /*3*/] = { unk_0x89D97EB4FAE4A574(vParam1, fParam2, vVar3.x, -vVar3.y, -vVar3.z) };
	vVar0[3 /*3*/] = { unk_0x89D97EB4FAE4A574(vParam1, fParam2, vVar3.x, vVar3.y, -vVar3.z) };
	vVar0[4 /*3*/] = { unk_0x89D97EB4FAE4A574(vParam1, fParam2, -vVar3.x, vVar3.y, -vVar3.z) };
	vVar0[5 /*3*/] = { unk_0x89D97EB4FAE4A574(vParam1, fParam2, -vVar3.x, -vVar3.y, vVar3.z) };
	vVar0[6 /*3*/] = { unk_0x89D97EB4FAE4A574(vParam1, fParam2, vVar3.x, -vVar3.y, vVar3.z) };
	vVar0[7 /*3*/] = { unk_0x89D97EB4FAE4A574(vParam1, fParam2, vVar3.x, vVar3.y, vVar3.z) };
	vVar0[8 /*3*/] = { unk_0x89D97EB4FAE4A574(vParam1, fParam2, -vVar3.x, vVar3.y, vVar3.z) };
	if (!unk_0xB47B61546691E6E3(vParam1))
	{
		return 0;
	}
	iVar13 = unk_0x2CE52CF124DA4A6A(func_18(unk_0xB5CEFD608600A09F()) + Vector(1f, 0f, 0f), vParam1, 87, unk_0xBC25C936A095B5BA(), 0);
	unk_0xB0695CD48A28A3A9(iVar13, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	iVar7 = unk_0x2CE52CF124DA4A6A(vVar0[1 /*3*/], vVar0[3 /*3*/], 87, unk_0xBC25C936A095B5BA(), 0);
	unk_0xB0695CD48A28A3A9(iVar7, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	iVar8 = unk_0x2CE52CF124DA4A6A(vVar0[2 /*3*/], vVar0[4 /*3*/], 87, unk_0xBC25C936A095B5BA(), 0);
	unk_0xB0695CD48A28A3A9(iVar8, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	iVar9 = unk_0x2CE52CF124DA4A6A(vVar0[5 /*3*/], vVar0[7 /*3*/], 87, unk_0xBC25C936A095B5BA(), 0);
	unk_0xB0695CD48A28A3A9(iVar9, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	iVar10 = unk_0x2CE52CF124DA4A6A(vVar0[6 /*3*/], vVar0[8 /*3*/], 87, unk_0xBC25C936A095B5BA(), 0);
	unk_0xB0695CD48A28A3A9(iVar10, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	iVar11 = unk_0x2CE52CF124DA4A6A(vVar0[1 /*3*/], vVar0[8 /*3*/], 87, unk_0xBC25C936A095B5BA(), 0);
	unk_0xB0695CD48A28A3A9(iVar11, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	iVar12 = unk_0x2CE52CF124DA4A6A(vVar0[2 /*3*/], vVar0[7 /*3*/], 87, unk_0xBC25C936A095B5BA(), 0);
	unk_0xB0695CD48A28A3A9(iVar12, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	return 1;
}

Vector3 func_18(int iParam0)//Position - 0x8D6
{
	return unk_0x541C2AEF053615BC(unk_0xA95CF30C72EB526E(iParam0), false);
}

void func_19(int iParam0)//Position - 0x8E9
{
	if (unk_0xA4267BD4AB92007E(iParam0))
	{
		unk_0xF243B7A14FCFD0F4(iParam0);
		if (unk_0xD6513D668481290A(iParam0))
		{
			iLocal_46 = 4;
		}
	}
}

void func_20(char* sParam0)//Position - 0x90C
{
	if (!func_14(14))
	{
		unk_0x2E94302CFF011F2E("CHEAT_DENIED");
		unk_0xC9C304D0AABE1335(sParam0);
		func_16(unk_0x5E48BB10C6423FD5(0, 1));
	}
}

void func_21()//Position - 0x938
{
	func_64();
	func_63();
	func_44();
	func_43();
	func_42();
	func_38();
	func_35();
	func_31();
	func_22();
}

void func_22()//Position - 0x964
{
	switch (iLocal_66)
	{
		case 1:
			break;
		
		case 4:
			func_30(19, 1);
			func_29();
			break;
		
		case 5:
			if ((((!unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()) || func_27()) || func_26(23)) || func_26(21)) || func_26(19))
			{
				iLocal_66 = 9;
				return;
			}
			func_24();
			break;
		
		case 9:
			func_23("CHEAT_AIM_SLOW_MO");
			func_30(19, 0);
			unk_0x2991B7F8ABC4BB0C(1f);
			iLocal_77 = 0;
			iLocal_66 = 1;
			break;
		
		default:
			break;
	}
}

void func_23(char* sParam0)//Position - 0xA03
{
	if (func_13(sParam0))
	{
	}
	else
	{
		unk_0x2E94302CFF011F2E("CHEAT_DEACTIVATED");
		unk_0xC9C304D0AABE1335(sParam0);
		func_16(unk_0x5E48BB10C6423FD5(0, 1));
	}
}

void func_24()//Position - 0xA2E
{
	if (unk_0x7214F4879DF8A314(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0x8FCEEB789599BD9B(2, 25))
		{
			if (func_25(unk_0xBC25C936A095B5BA()) != joaat("weapon_unarmed") && func_25(unk_0xBC25C936A095B5BA()) != joaat("object"))
			{
				unk_0x2991B7F8ABC4BB0C(fLocal_78);
			}
			else
			{
				unk_0x2991B7F8ABC4BB0C(1f);
			}
		}
		else
		{
			unk_0x2991B7F8ABC4BB0C(1f);
		}
	}
}

int func_25(int iParam0)//Position - 0xA85
{
	var uVar0;
	
	unk_0x9CDD10270A1ACF6F(iParam0, &uVar0, 1);
	return uVar0;
}

int func_26(int iParam0)//Position - 0xA99
{
	if (unk_0xFA30DFD0084E92FE(Global_63B2, iParam0))
	{
		return 1;
	}
	return 0;
}

int func_27()//Position - 0xAB2
{
	if (((((((func_14(0) || func_14(11)) || func_14(4)) || func_14(9)) || func_14(10)) || func_14(3)) || func_14(2)) || func_28(35))
	{
		return 1;
	}
	return 0;
}

int func_28(int iParam0)//Position - 0xB18
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_19B04.f_2360.f_63.f_3A[iParam0];
}

void func_29()//Position - 0xB45
{
	iLocal_77++;
	if (iLocal_77 > 3)
	{
		iLocal_77 = 0;
		iLocal_66 = 9;
		return;
	}
	switch (iLocal_77)
	{
		case 1:
			func_15("CHEAT_AIM_SLOW_MO1");
			fLocal_78 = 0.6f;
			break;
		
		case 2:
			func_15("CHEAT_AIM_SLOW_MO2");
			fLocal_78 = 0.4f;
			break;
		
		case 3:
			func_15("CHEAT_AIM_SLOW_MO3");
			fLocal_78 = 0.2f;
			break;
		
		default:
			break;
	}
	iLocal_66 = 5;
}

void func_30(int iParam0, bool bParam1)//Position - 0xBB5
{
	if (bParam1)
	{
		unk_0xF0059F27F7BB6680(&Global_63B3, iParam0);
		func_5(iParam0);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&Global_63B3, iParam0);
	}
}

void func_31()//Position - 0xBDD
{
	switch (iLocal_63)
	{
		case 1:
			break;
		
		case 4:
			func_30(16, 1);
			func_34();
			break;
		
		case 5:
			unk_0xBBC4195AD74D153D(2, 37, 1);
			unk_0xBBC4195AD74D153D(2, 19, 1);
			if ((((((((!unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()) || func_27()) || func_33()) || func_32(1)) || unk_0xF7DDAAF0EFDAFA22(2, 37)) || unk_0xF7DDAAF0EFDAFA22(2, 19)) || func_26(23)) || func_26(21)) || func_26(16))
			{
				iLocal_63 = 9;
			}
			break;
		
		case 9:
			unk_0xBBC4195AD74D153D(2, 37, 1);
			unk_0xBBC4195AD74D153D(2, 19, 1);
			func_23("CHEAT_SLOW_MO");
			func_30(16, 0);
			iLocal_76 = 0;
			unk_0x2991B7F8ABC4BB0C(1f);
			iLocal_63 = 1;
			break;
		
		default:
			break;
	}
}

bool func_32(bool bParam0)//Position - 0xCC4
{
	if (bParam0)
	{
		return (Global_4336.f_4 && Global_4336.f_68 == 4);
	}
	return Global_4336.f_4;
}

int func_33()//Position - 0xCED
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		return Global_161D2.f_2C == 1;
	}
	return 0;
}

void func_34()//Position - 0xD09
{
	iLocal_76++;
	if (iLocal_76 > 3)
	{
		iLocal_63 = 9;
		return;
	}
	switch (iLocal_76)
	{
		case 1:
			func_15("CHEAT_SLOW_MO1");
			unk_0x2991B7F8ABC4BB0C(0.6f);
			break;
		
		case 2:
			func_15("CHEAT_SLOW_MO2");
			unk_0x2991B7F8ABC4BB0C(0.4f);
			break;
		
		case 3:
			func_15("CHEAT_SLOW_MO3");
			unk_0x2991B7F8ABC4BB0C(0.2f);
			break;
		
		default:
			break;
	}
	iLocal_63 = 5;
}

void func_35()//Position - 0xD7C
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	
	switch (iLocal_64)
	{
		case 1:
			break;
		
		case 2:
			func_30(17, 1);
			unk_0x346478B12F69D4E3(unk_0xBC25C936A095B5BA(), true);
			unk_0x3D7FF8418367D451(unk_0xB5CEFD608600A09F(), 1);
			unk_0x06D93FD5E4D394CF(unk_0xBC25C936A095B5BA(), true, true, true, true, true, 0, 0, 0);
			unk_0x7A535CE1F001F3FE(unk_0xBC25C936A095B5BA(), joaat("gadget_parachute"), 1, false, true);
			vVar0 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
			fVar1 = unk_0x349C94FFF43E2979(unk_0xBC25C936A095B5BA());
			unk_0x2084D4C6C2DF616F(vVar0, &fVar2, 0, 0);
			fVar2 = (fVar2 + 500f);
			unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), vVar0.x, vVar0.y, fVar2, 1, 0, 0, 1);
			unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), fVar1);
			iLocal_72 = unk_0x105601648511CC64();
			unk_0x7A41D32A383895D8(0);
			iLocal_64 = 3;
			break;
		
		case 3:
			if (func_37(1000, iLocal_72))
			{
				unk_0x346478B12F69D4E3(unk_0xBC25C936A095B5BA(), false);
				unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
				iLocal_72 = unk_0x105601648511CC64();
				iLocal_64 = 4;
			}
			break;
		
		case 4:
			if (func_37(1000, iLocal_72))
			{
				unk_0xBBC4195AD74D153D(0, 144, 1);
				unk_0xBBC4195AD74D153D(0, 149, 1);
				if (func_8() == 0)
				{
					unk_0xB0031DDAE4FF0BC3(unk_0xBC25C936A095B5BA(), 9, 0, 0, 0);
				}
				else
				{
					unk_0xB0031DDAE4FF0BC3(unk_0xBC25C936A095B5BA(), 8, 0, 0, 0);
				}
				unk_0x829FA4611BD56B44(250);
				iLocal_72 = unk_0x105601648511CC64();
				func_15("CHEAT_SKYFALL");
				unk_0xAF0732277B825027(2);
				iLocal_64 = 5;
			}
			break;
		
		case 5:
			if ((((!unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()) || func_27()) || func_26(23)) || func_26(21)) || func_26(17))
			{
				iLocal_64 = 9;
				break;
			}
			unk_0xBBC4195AD74D153D(0, 144, 1);
			unk_0x4E0EC60D119222B1(2);
			if (unk_0x01666D754C368931(unk_0xBC25C936A095B5BA()))
			{
				unk_0x5EBD7EB63AD5FB1D(unk_0xBC25C936A095B5BA(), 1, 0f, 200f, 2.5f, 0f, 0f, 0f, 0, 1, 0, 0, 0, 1);
				if (unk_0x8B2EFFDCF3FE7E80(unk_0xBC25C936A095B5BA()))
				{
					iLocal_64 = 9;
				}
			}
			else
			{
				iLocal_64 = 9;
			}
			break;
		
		case 9:
			func_36();
			func_23("CHEAT_SKYFALL");
			func_30(17, 0);
			iLocal_64 = 1;
			break;
		
		default:
			break;
	}
}

void func_36()//Position - 0xF7C
{
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		unk_0x133D1B11D62F99C0(unk_0xBC25C936A095B5BA(), joaat("gadget_parachute"));
	}
	if (iLocal_62 != 5)
	{
		unk_0x3D7FF8418367D451(unk_0xB5CEFD608600A09F(), 0);
		unk_0x06D93FD5E4D394CF(unk_0xBC25C936A095B5BA(), false, false, false, false, false, 0, 0, 0);
	}
	unk_0xAF0732277B825027(0);
}

int func_37(int iParam0, int iParam1)//Position - 0xFC1
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x105601648511CC64();
	iVar1 = (iVar0 - iParam0);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_38()//Position - 0xFE2
{
	vector3 vVar0;
	
	switch (iLocal_62)
	{
		case 1:
			break;
		
		case 4:
			func_15("CHEAT_INVINCIBILITY");
			func_30(15, 1);
			iLocal_62 = 5;
			iLocal_74 = unk_0x105601648511CC64();
			unk_0x3D7FF8418367D451(unk_0xB5CEFD608600A09F(), 1);
			unk_0x06D93FD5E4D394CF(unk_0xBC25C936A095B5BA(), true, true, true, true, true, 0, 0, 0);
			break;
		
		case 5:
			if (!unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()) || unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				iLocal_62 = 9;
				return;
			}
			vVar0 = { func_18(unk_0xB5CEFD608600A09F()) };
			if (((((func_27() || func_33()) || func_26(23)) || func_26(21)) || func_26(15)) || vVar0.z <= -170f)
			{
				iLocal_62 = 9;
				return;
			}
			iLocal_75 = (unk_0x105601648511CC64() - iLocal_74);
			if (unk_0xB731B8C5BCE89836(joaat("appinternet")) == 0)
			{
				func_39((iLocal_73 - iLocal_75), "CHEAT_INV", 0, 0, 1000, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			if (iLocal_75 >= (iLocal_73 - 1000))
			{
				iLocal_62 = 9;
				return;
			}
			unk_0x3D7FF8418367D451(unk_0xB5CEFD608600A09F(), 1);
			unk_0x06D93FD5E4D394CF(unk_0xBC25C936A095B5BA(), true, true, true, true, true, 0, 0, 0);
			unk_0xFB8688C033FDE8F7();
			break;
		
		case 9:
			func_23("CHEAT_INVINCIBILITY_OFF");
			func_30(15, 0);
			iLocal_62 = 1;
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				unk_0x3D7FF8418367D451(unk_0xB5CEFD608600A09F(), 0);
				unk_0x06D93FD5E4D394CF(unk_0xBC25C936A095B5BA(), false, false, false, false, false, 0, 0, 0);
			}
			break;
		
		default:
			break;
	}
}

void func_39(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x115C
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_41(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_14D262.f_1 = 1;
		func_40(7, iVar0);
		Global_14D262.f_1124[iVar0] = iParam0;
		StringCopy(&(Global_14D262.f_1124.f_B[iVar0 /*16*/]), sParam1, 64);
		Global_14D262.f_1124.f_AC[iVar0] = iParam2;
		Global_14D262.f_1124.f_D8[iVar0] = iParam3;
		Global_14D262.f_1124.f_B7[iVar0] = iParam4;
		Global_14D262.f_1124.f_C2[iVar0] = iParam5;
		Global_14D262.f_1124.f_F9[iVar0] = iParam6;
		Global_14D262.f_1124.f_104[iVar0] = iParam7;
		Global_14D262.f_1124.f_CD[iVar0] = iParam8;
		Global_14D262.f_1124.f_13A[iVar0] = iParam9;
		Global_14D262.f_1124.f_145[iVar0] = iParam10;
		Global_14D262.f_1124.f_165[iVar0] = iParam11;
		Global_14D262.f_1124.f_EE[iVar0] = iParam12;
		Global_14D262.f_1124.f_10F[iVar0] = iParam13;
		Global_14D262.f_1124.f_170[iVar0] = iParam14;
		Global_14D262.f_1124.f_17B[iVar0] = iParam15;
		Global_14D262.f_1124.f_186[iVar0] = iParam16;
	}
}

void func_40(int iParam0, int iParam1)//Position - 0x12AA
{
	unk_0xF0059F27F7BB6680(&(Global_14D262.f_17E7[iParam0]), iParam1);
}

bool func_41(int iParam0, int iParam1)//Position - 0x12C3
{
	return unk_0xFA30DFD0084E92FE(Global_14D262.f_17E7[iParam0], iParam1);
}

void func_42()//Position - 0x12DC
{
	switch (iLocal_59)
	{
		case 1:
			break;
		
		case 4:
			func_15("CHEAT_FLAMING_BULLETS");
			func_30(12, 1);
			iLocal_59 = 5;
			break;
		
		case 5:
			if (((!unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()) || func_26(23)) || func_26(21)) || func_26(12))
			{
				iLocal_59 = 9;
				return;
			}
			if (func_27())
			{
				iLocal_59 = 9;
				return;
			}
			unk_0x5CDDDD610D50D6DB(unk_0xB5CEFD608600A09F());
			break;
		
		case 9:
			func_23("CHEAT_FLAMING_BULLETS");
			func_30(12, 0);
			iLocal_59 = 1;
			break;
		
		default:
			break;
	}
}

void func_43()//Position - 0x1383
{
	switch (iLocal_60)
	{
		case 1:
			break;
		
		case 4:
			func_15("CHEAT_EXPLOSIVE_MELEE");
			func_30(13, 1);
			iLocal_60 = 5;
			break;
		
		case 5:
			if ((((!unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()) || func_26(23)) || func_26(21)) || func_26(13)) || func_27())
			{
				iLocal_60 = 9;
				return;
			}
			unk_0xA61D93B1E6DCC7AF(unk_0xB5CEFD608600A09F());
			break;
		
		case 9:
			func_23("CHEAT_EXPLOSIVE_MELEE");
			func_30(13, 0);
			iLocal_60 = 1;
			break;
		
		default:
			break;
	}
}

void func_44()//Position - 0x1426
{
	switch (iLocal_65)
	{
		case 1:
			break;
		
		case 4:
			func_15("CHEAT_DRUNK");
			func_30(18, 1);
			func_59(unk_0xBC25C936A095B5BA());
			func_57(30000, 1050253722, 1065353216, 0);
			iLocal_65 = 5;
			break;
		
		case 5:
			if ((((func_27() || !unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F())) || func_26(23)) || func_26(21)) || func_26(18))
			{
				iLocal_65 = 9;
			}
			break;
		
		case 9:
			func_23("CHEAT_DRUNK");
			func_30(18, 0);
			func_48(unk_0xBC25C936A095B5BA());
			func_47(1000);
			iLocal_65 = 1;
			break;
		
		case 10:
			func_45(1);
			func_30(18, 0);
			iLocal_65 = 1;
			break;
		
		default:
			break;
	}
}

void func_45(bool bParam0)//Position - 0x1500
{
	unk_0xC0231BA8D252A9AE(0f);
	unk_0x07A21648E1E26132(0f);
	unk_0xC7B707F8F56F2EAA(0f);
	unk_0x7D9EA045634DD11D(1);
	unk_0x3B35C0FF76598EE9(0f);
	unk_0x99FD3E61CA8D5A34(1);
	unk_0xE752383E5104F3D0(0);
	if (unk_0x144E80F5C46A6B75("SAFEHOUSE_STONED_MICHAEL"))
	{
		unk_0xC1300D0F3A74E20B("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!unk_0xF1734B55490E9045(&Global_90AB))
	{
		if (unk_0x144E80F5C46A6B75(&Global_90AB))
		{
			unk_0xC1300D0F3A74E20B(&Global_90AB);
		}
	}
	if (unk_0xEF0E25DA0CB6E8FF(Global_90A0))
	{
		if (unk_0xA3AE65489EB30BF4(Global_90A0))
		{
			unk_0xCE33D5EFE2BDE6EF(Global_90A0, 0f);
			unk_0x2880294117B40FE9(Global_90A0, 1);
		}
	}
	if (unk_0x6CACA595557C5755())
	{
		unk_0x01EB6657F2BCE9D3(0);
	}
	if (bParam0)
	{
		if (unk_0xAF37936E3740DA19() != -1 || unk_0x68A80623278A92F5() != -1)
		{
			unk_0x38505EF4199EB062();
		}
		else if (unk_0x7930B3E9C919E90F())
		{
			unk_0x38505EF4199EB062();
		}
	}
	Global_90A6 = 0f;
	StringCopy(&Global_90A7, "", 16);
	StringCopy(&Global_90AB, "", 64);
	StringCopy(&Global_90BB, "", 16);
	func_46();
}

void func_46()//Position - 0x15DC
{
	Global_909F = 0;
	Global_90A0 = 0;
	Global_90A1 = 0;
	Global_90A2 = 30000;
	Global_90A3 = 0f;
	Global_90A5 = 0f;
	Global_90A4 = 0f;
	Global_90A6 = 0f;
	StringCopy(&Global_90A7, "", 16);
}

void func_47(int iParam0)//Position - 0x160E
{
	int iVar0;
	
	if (!Global_909F)
	{
		return;
	}
	iVar0 = unk_0x105601648511CC64();
	Global_90A1 = (iVar0 + iParam0);
	Global_90A2 = iParam0;
}

void func_48(int iParam0)//Position - 0x1633
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
	iVar0 = func_56(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_8FEC[iVar0 /*5*/];
		func_51(1, iVar1, 1);
		return;
	}
	iVar2 = func_50(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_49(iVar2);
}

void func_49(int iParam0)//Position - 0x168C
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

int func_50(int iParam0)//Position - 0x170F
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

void func_51(int iParam0, int iParam1, int iParam2)//Position - 0x1740
{
	func_52(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_52(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x1755
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
	if (func_54(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_53();
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

int func_53()//Position - 0x17D7
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

int func_54(int iParam0, int iParam1, int iParam2)//Position - 0x1808
{
	if (func_55(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_55(int iParam0, int iParam1, int iParam2)//Position - 0x1823
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

int func_56(int iParam0)//Position - 0x186F
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

void func_57(int iParam0, float fParam1, float fParam2, int iParam3)//Position - 0x18B8
{
	func_58(-1, iParam0, fParam1, fParam2, iParam3, 1);
}

void func_58(int iParam0, var uParam1, float fParam2, float fParam3, int iParam4, bool bParam5)//Position - 0x18CE
{
	int iVar0;
	
	if (Global_3)
	{
		return;
	}
	if (Global_909F)
	{
		return;
	}
	if (!bParam5)
	{
		if (iParam0 < 0)
		{
			return;
		}
	}
	if (fParam2 < 0f || fParam2 > 5f)
	{
		return;
	}
	if (!unk_0x77B12D37D510E10B())
	{
		unk_0x1683310AC27891EC("DRUNK_SHAKE", fParam3);
	}
	if (!unk_0xBF541DFAF847A0E9())
	{
		unk_0x07B86F728B9A5E4A("DRUNK_SHAKE", (fParam3 * Global_909E));
	}
	if (unk_0xEF0E25DA0CB6E8FF(iParam4))
	{
		unk_0x2FB83B8BD6C05FD2(iParam4, "DRUNK_SHAKE", fParam3);
		Global_90A0 = iParam4;
	}
	else
	{
		Global_90A0 = 0;
	}
	Global_909F = 1;
	iVar0 = unk_0x105601648511CC64();
	Global_90A1 = (iVar0 + iParam0);
	if (bParam5)
	{
		if (iParam0 == -1)
		{
			Global_90A1 = -1;
		}
	}
	Global_90A2 = uParam1;
	Global_90A3 = fParam2;
	Global_90A5 = fParam3;
	Global_90A4 = fParam3;
}

int func_59(int iParam0)//Position - 0x1989
{
	return func_60(iParam0, -1, 1);
}

int func_60(int iParam0, int iParam1, bool bParam2)//Position - 0x1999
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 0;
	}
	iVar0 = func_62(iParam0);
	if (!iVar0 == -1)
	{
		return 1;
	}
	iVar1 = func_50(iParam0);
	if (!iVar1 == -1)
	{
		return 1;
	}
	if (!bParam2)
	{
		if (iParam1 == 0 || iParam1 < 0)
		{
			return 0;
		}
	}
	iVar2 = func_61();
	if (iVar2 == -1)
	{
		return 0;
	}
	Global_8FD2[iVar2 /*5*/] = 0;
	Global_8FD2[iVar2 /*5*/].f_1 = iParam0;
	Global_8FD2[iVar2 /*5*/].f_2 = iParam1;
	Global_8FD2[iVar2 /*5*/].f_3 = iParam1;
	Global_8FD2[iVar2 /*5*/].f_4 = 0;
	if (iParam0 == unk_0xBC25C936A095B5BA())
	{
		Global_90BF = 1;
	}
	Global_8FD1++;
	return 1;
}

int func_61()//Position - 0x1A55
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_8FD2[iVar0 /*5*/] == 13)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_62(int iParam0)//Position - 0x1A84
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
		if (iParam0 == Global_8FEC[iVar0 /*5*/].f_1)
		{
			return Global_8FEC[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

void func_63()//Position - 0x1AC5
{
	switch (iLocal_58)
	{
		case 1:
			break;
		
		case 4:
			func_15("CHEAT_BANG_BANG");
			func_30(11, 1);
			iLocal_58 = 5;
			break;
		
		case 5:
			if (((!unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()) || func_26(23)) || func_26(21)) || func_26(11))
			{
				iLocal_58 = 9;
				return;
			}
			if (func_27())
			{
				iLocal_58 = 9;
				return;
			}
			unk_0xE69786B04E234230(unk_0xB5CEFD608600A09F());
			break;
		
		case 9:
			func_23("CHEAT_BANG_BANG");
			func_30(11, 0);
			iLocal_58 = 1;
			break;
		
		default:
			break;
	}
}

void func_64()//Position - 0x1B6C
{
	switch (iLocal_61)
	{
		case 1:
			break;
		
		case 4:
			func_5(14);
			func_30(14, 1);
			func_66();
			break;
		
		case 5:
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				if ((((((!unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()) || func_27()) || func_26(23)) || func_26(21)) || func_26(14)) || func_65(17)) || unk_0x149E9368A11035DE(unk_0xBC25C936A095B5BA()))
				{
					iLocal_61 = 9;
				}
			}
			else
			{
				iLocal_61 = 9;
			}
			break;
		
		case 9:
			func_23("CHEAT_GRAVITY_MOON");
			func_30(14, 0);
			unk_0x8E9F4F9A422079A2(0);
			iLocal_79 = 0;
			iLocal_61 = 1;
			break;
		
		default:
			break;
	}
}

int func_65(int iParam0)//Position - 0x1C37
{
	if (unk_0xFA30DFD0084E92FE(Global_63B3, iParam0))
	{
		return 1;
	}
	return 0;
}

void func_66()//Position - 0x1C50
{
	iLocal_79++;
	if (iLocal_79 > 1)
	{
		iLocal_61 = 9;
		return;
	}
	switch (iLocal_79)
	{
		case 1:
			func_15("CHEAT_GRAVITY_MOON");
			unk_0x8E9F4F9A422079A2(1);
			break;
		
		default:
			break;
	}
	iLocal_61 = 5;
}

void func_67()//Position - 0x1C8D
{
	func_86();
	func_80();
	func_79();
	func_78();
	func_77();
	func_76();
	func_75();
	func_73();
	func_72();
	func_71();
	func_68();
}

void func_68()//Position - 0x1CC1
{
	if (iLocal_57 == 4)
	{
		iLocal_57 = 1;
		if ((func_26(23) || func_26(22)) || func_26(10))
		{
			func_20("CHEAT_NOT_NOW");
			return;
		}
		if (func_69())
		{
			func_20("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			func_15("CHEAT_GIVE_PARACHUTE");
			unk_0x7A535CE1F001F3FE(unk_0xBC25C936A095B5BA(), joaat("gadget_parachute"), 1, true, true);
			func_5(10);
		}
	}
}

int func_69()//Position - 0x1D39
{
	if (iLocal_83)
	{
		iLocal_83 = 0;
		return 0;
	}
	if (func_70(0))
	{
		return 1;
	}
	return 0;
}

int func_70(int iParam0)//Position - 0x1D5A
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

void func_71()//Position - 0x1DB4
{
	int iVar0;
	
	if (iLocal_56 == 4)
	{
		iLocal_56 = 1;
		if ((func_26(23) || func_26(22)) || func_26(9))
		{
			func_20("CHEAT_NOT_NOW");
			return;
		}
		if (func_69())
		{
			func_20("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			if (unk_0x8C6B6C3774164BB5() == 0)
			{
				func_20("CHEAT_NOT_NOW");
				return;
			}
			iVar0 = unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F());
			if (iVar0 > 0)
			{
				func_15("CHEAT_WANTED_DOWN");
				unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), (iVar0 - 1), 0);
				func_5(9);
			}
			else
			{
				func_20("CHEAT_WANTED_DOWN_DENIED");
			}
		}
	}
}

void func_72()//Position - 0x1E57
{
	int iVar0;
	
	if (iLocal_55 == 4)
	{
		iLocal_55 = 1;
		if ((func_26(23) || func_26(22)) || func_26(8))
		{
			func_20("CHEAT_NOT_NOW");
			return;
		}
		if (func_69())
		{
			func_20("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			if (unk_0x8C6B6C3774164BB5() == 0)
			{
				func_20("CHEAT_NOT_NOW");
				return;
			}
			iVar0 = unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F());
			if (iVar0 < unk_0x8C6B6C3774164BB5())
			{
				unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), iVar0 + 1, 0);
				unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
				func_15("CHEAT_WANTED_UP");
				func_5(8);
			}
			else
			{
				func_20("CHEAT_WANTED_UP_DENIED");
			}
		}
	}
}

void func_73()//Position - 0x1F06
{
	if (iLocal_54 == 4)
	{
		iLocal_54 = 1;
		if ((((((func_26(23) || func_26(22)) || func_26(7)) || func_14(9)) || func_14(10)) || !unk_0x68736A1D8A3DF71D(func_74())) || !unk_0xC788DE2EF3138672(unk_0xB5CEFD608600A09F()))
		{
			func_20("CHEAT_NOT_NOW");
			return;
		}
		if (func_69())
		{
			func_20("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			unk_0xA250DC6A7CADB56D(unk_0xB5CEFD608600A09F(), 1);
			func_15("CHEAT_SPECIAL_ABILITY");
			func_5(7);
		}
	}
}

int func_74()//Position - 0x1FAB
{
	return unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA());
}

void func_75()//Position - 0x1FBB
{
	int iVar0;
	
	if (iLocal_53 == 4)
	{
		iLocal_53 = 1;
		if ((((func_26(23) || func_26(22)) || func_26(6)) || func_14(9)) || func_14(10))
		{
			func_20("CHEAT_NOT_NOW");
			return;
		}
		if (func_69())
		{
			func_20("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			func_15("CHEAT_HEALTH_ARMOR");
			func_5(6);
			unk_0x65E471E4A2D56226(unk_0xBC25C936A095B5BA(), unk_0x0992793998FBCE2B(unk_0xBC25C936A095B5BA()), 0);
			unk_0x17733741547714F0(unk_0xBC25C936A095B5BA(), (unk_0x52D9B156E5EE1E8C(unk_0xB5CEFD608600A09F()) - unk_0x27C402B01C926499(unk_0xBC25C936A095B5BA())));
			if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
			{
				iVar0 = unk_0xD20EBB97FE8799ED(unk_0xBC25C936A095B5BA());
				if (unk_0x724D816EA203A79E(iVar0))
				{
					if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
					{
						unk_0x3F91283C7E2D2183(iVar0);
					}
				}
			}
		}
	}
}

void func_76()//Position - 0x2093
{
	if (iLocal_52 == 4)
	{
		iLocal_52 = 1;
		if ((func_26(23) || func_26(22)) || func_26(5))
		{
			func_20("CHEAT_NOT_NOW");
			return;
		}
		if (func_69())
		{
			func_20("CHEAT_PHONE_DENIED");
			return;
		}
		func_5(5);
		switch (iLocal_71)
		{
			case 0:
				iLocal_71 = 1;
			
			case 1:
				unk_0xECFC79CE36279CD8("EXTRASUNNY");
				unk_0x11E7662BFA0E7D15();
				func_15("CHEAT_ADVANCE_WEATHER_EXTRA_SUNNY");
				iLocal_71 = 2;
				break;
			
			case 2:
				unk_0xECFC79CE36279CD8("CLEAR");
				unk_0x11E7662BFA0E7D15();
				func_15("CHEAT_ADVANCE_WEATHER_CLEAR");
				iLocal_71 = 3;
				break;
			
			case 3:
				unk_0xECFC79CE36279CD8("CLOUDS");
				unk_0x11E7662BFA0E7D15();
				func_15("CHEAT_ADVANCE_WEATHER_CLOUDY");
				iLocal_71 = 4;
				break;
			
			case 4:
				unk_0xECFC79CE36279CD8("SMOG");
				unk_0x11E7662BFA0E7D15();
				func_15("CHEAT_ADVANCE_WEATHER_SMOGGY");
				iLocal_71 = 6;
				break;
			
			case 6:
				unk_0xECFC79CE36279CD8("OVERCAST");
				unk_0x11E7662BFA0E7D15();
				func_15("CHEAT_ADVANCE_WEATHER_OVERCAST");
				iLocal_71 = 7;
				break;
			
			case 7:
				unk_0xECFC79CE36279CD8("RAIN");
				unk_0x11E7662BFA0E7D15();
				func_15("CHEAT_ADVANCE_WEATHER_RAIN");
				func_30(5, 1);
				iLocal_71 = 8;
				break;
			
			case 8:
				unk_0xECFC79CE36279CD8("THUNDER");
				unk_0x11E7662BFA0E7D15();
				func_15("CHEAT_ADVANCE_WEATHER_THUNDER");
				iLocal_71 = 9;
				break;
			
			case 9:
				unk_0xECFC79CE36279CD8("CLEARING");
				unk_0x11E7662BFA0E7D15();
				func_15("CHEAT_ADVANCE_WEATHER_CLEARING");
				iLocal_71 = 11;
				break;
			
			case 11:
				unk_0xECFC79CE36279CD8("XMAS");
				unk_0x11E7662BFA0E7D15();
				func_15("CHEAT_ADVANCE_WEATHER_SNOW");
				iLocal_71 = 0;
				break;
			
			default:
				break;
			}
	}
}

void func_77()//Position - 0x2222
{
	if (iLocal_51 == 4)
	{
		iLocal_51 = 1;
		if ((func_26(23) || func_26(22)) || func_26(4))
		{
			func_20("CHEAT_NOT_NOW");
			return;
		}
		if (func_69())
		{
			func_20("CHEAT_PHONE_DENIED");
			return;
		}
		func_15("CHEAT_GIVE_WEAPONS");
		func_5(4);
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			unk_0x7A853DA478E4882E(unk_0xBC25C936A095B5BA(), joaat("weapon_knife"), -1, false);
			unk_0x7A853DA478E4882E(unk_0xBC25C936A095B5BA(), joaat("weapon_smg"), 300, false);
			unk_0x7A853DA478E4882E(unk_0xBC25C936A095B5BA(), joaat("weapon_assaultrifle"), 300, true);
			unk_0x7A853DA478E4882E(unk_0xBC25C936A095B5BA(), joaat("weapon_pumpshotgun"), 150, false);
			unk_0x7A853DA478E4882E(unk_0xBC25C936A095B5BA(), joaat("weapon_sniperrifle"), 30, false);
			unk_0x7A853DA478E4882E(unk_0xBC25C936A095B5BA(), joaat("weapon_grenade"), 5, false);
			unk_0x7A853DA478E4882E(unk_0xBC25C936A095B5BA(), joaat("weapon_rpg"), 5, false);
		}
	}
}

void func_78()//Position - 0x22F7
{
	switch (iLocal_50)
	{
		case 1:
			break;
		
		case 4:
			func_15("CHEAT_FAST_SWIM");
			func_30(3, 1);
			iLocal_50 = 5;
			break;
		
		case 5:
			if (((!unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()) || func_26(23)) || func_26(22)) || func_26(3))
			{
				iLocal_50 = 9;
			}
			else
			{
				unk_0xFF00156B37CCD12A(unk_0xB5CEFD608600A09F(), 1.49f);
				unk_0xFB8688C033FDE8F7();
			}
			break;
		
		case 9:
			unk_0xFF00156B37CCD12A(unk_0xB5CEFD608600A09F(), 1f);
			func_23("CHEAT_FAST_SWIM");
			func_30(3, 0);
			iLocal_50 = 1;
			break;
		
		default:
			break;
	}
}

void func_79()//Position - 0x239F
{
	switch (iLocal_49)
	{
		case 1:
			break;
		
		case 4:
			func_15("CHEAT_FAST_RUN");
			func_30(2, 1);
			iLocal_49 = 5;
			break;
		
		case 5:
			if ((((!unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()) || unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA())) || func_26(23)) || func_26(22)) || func_26(2))
			{
				iLocal_49 = 9;
			}
			else
			{
				if (unk_0x226A1FD8C273ADE9(unk_0xBC25C936A095B5BA()) || (unk_0x7199482D96955B9E(unk_0xBC25C936A095B5BA()) && !unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())))
				{
					unk_0x962DA0CEE17988CD(unk_0xB5CEFD608600A09F(), 1.49f);
				}
				else
				{
					unk_0x962DA0CEE17988CD(unk_0xB5CEFD608600A09F(), 1f);
				}
				unk_0xFB8688C033FDE8F7();
			}
			break;
		
		case 9:
			unk_0x962DA0CEE17988CD(unk_0xB5CEFD608600A09F(), 1f);
			func_23("CHEAT_FAST_RUN");
			func_30(2, 0);
			iLocal_49 = 1;
			break;
		
		default:
			break;
	}
}

void func_80()//Position - 0x2488
{
	int iVar0;
	
	switch (iLocal_48)
	{
		case 1:
			break;
		
		case 4:
			func_15("CHEAT_SLIDEY_CARS");
			func_30(1, 1);
			iLocal_48 = 5;
			break;
		
		case 5:
			if (((!unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()) || func_26(23)) || func_26(22)) || func_26(1))
			{
				iLocal_48 = 9;
			}
			if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
			{
				iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
				if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
				{
					if (unk_0x3187EF5798B5D209(iVar0, -1, 0) == unk_0xBC25C936A095B5BA())
					{
						if (iLocal_69 == 0)
						{
							iLocal_69 = iVar0;
							if (!unk_0x1D403DFADBC2DE3C(iLocal_69, 0))
							{
								if (func_81(1))
								{
									unk_0x120080352B04E4DF(iLocal_69, 1);
								}
								else
								{
									iLocal_69 = 0;
								}
							}
						}
						else if (iLocal_69 != iVar0)
						{
							if (!unk_0x1D403DFADBC2DE3C(iLocal_69, 0))
							{
								unk_0x120080352B04E4DF(iLocal_69, 0);
							}
							iLocal_69 = 0;
						}
					}
				}
			}
			break;
		
		case 9:
			func_23("CHEAT_SLIDEY_CARS");
			iLocal_48 = 10;
			break;
		
		case 10:
			if (!unk_0x1D403DFADBC2DE3C(iLocal_69, 0))
			{
				unk_0x120080352B04E4DF(iLocal_69, 0);
				iLocal_69 = 0;
			}
			func_30(1, 0);
			iLocal_48 = 1;
			break;
		
		default:
			break;
	}
}

int func_81(int iParam0)//Position - 0x25AF
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	char* sVar4;
	
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		iVar0 = unk_0x3E12B546F3F2597A();
		if (unk_0x724D816EA203A79E(iVar0))
		{
			if (unk_0xE59B7F5A03335350(iVar0, 0))
			{
				iVar1 = unk_0x6F79ECA8C83E4357(iVar0);
				iVar2 = func_8();
				if (iParam0 & 1 != 0)
				{
					if (!unk_0x7C28D15641461C68(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 2 != 0)
				{
					if (!unk_0x7512ED01F3F46714(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 4 != 0)
				{
					if (!unk_0x8C1A6E7D5F410F4A(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 8 != 0)
				{
					if (!unk_0xE7B3A320107C1379(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 16 != 0)
				{
					if (unk_0xB5B60A04E1654409(iVar0, "door_dside_r") != -1 || unk_0xB5B60A04E1654409(iVar0, "door_pside_r") != -1)
					{
						return 0;
					}
				}
				if (iParam0 & 32 != 0)
				{
					if (unk_0xB5B60A04E1654409(iVar0, "door_dside_r") == -1 || unk_0xB5B60A04E1654409(iVar0, "door_pside_r") == -1)
					{
						return 0;
					}
				}
				if (iParam0 & 64 != 0)
				{
					if (unk_0x7512ED01F3F46714(iVar1))
					{
						if (unk_0xB5B60A04E1654409(iVar0, "seat_r") == -1)
						{
							return 0;
						}
					}
					else if (unk_0xB5B60A04E1654409(iVar0, "seat_dside_r") != -1 || unk_0xB5B60A04E1654409(iVar0, "seat_pside_r") != -1)
					{
						return 0;
					}
				}
				if (iParam0 & 128 != 0)
				{
					if (unk_0xB5B60A04E1654409(iVar0, "seat_dside_r") == -1 || unk_0xB5B60A04E1654409(iVar0, "seat_pside_r") == -1)
					{
						return 0;
					}
				}
				if (iParam0 & 256 != 0)
				{
					if (!func_10(iVar2))
					{
						return 0;
					}
					if (func_84(iVar2, 0) != iVar1)
					{
						return 0;
					}
				}
				if (iParam0 & 512 != 0)
				{
					if (!unk_0x7C28D15641461C68(iVar1) && !unk_0x7512ED01F3F46714(iVar1))
					{
						return 0;
					}
					if (unk_0x10A01B0B02B273EF(iVar0))
					{
						return 0;
					}
					sVar4 = unk_0x0B00D4CDDAB33814(iVar0, &uVar3);
					if (!unk_0xF1734B55490E9045(sVar4))
					{
						if (unk_0x56BEECB328B6D29D(sVar4) == unk_0x56BEECB328B6D29D("taxiService"))
						{
							return 0;
						}
					}
					if (func_82(iVar0, iVar2, 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_82(int iParam0, int iParam1, bool bParam2)//Position - 0x27B0
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0x724D816EA203A79E(iParam0) || !unk_0xE59B7F5A03335350(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_83(iParam1, iVar0, &sVar1, &iVar2))
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

int func_83(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x2821
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

int func_84(int iParam0, int iParam1)//Position - 0x28F9
{
	struct<82> Var0;
	
	if (func_10(iParam0))
	{
		Var0.f_B = 12;
		Var0.f_1F = 49;
		Var0.f_51 = 2;
		func_85(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_85(int iParam0, var uParam1, int iParam2)//Position - 0x293B
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

void func_86()//Position - 0x2B97
{
	switch (iLocal_47)
	{
		case 1:
			break;
		
		case 4:
			func_15("CHEAT_SUPER_JUMP");
			func_30(0, 1);
			iLocal_47 = 5;
			break;
		
		case 5:
			if ((((!unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()) || func_26(23)) || func_26(22)) || func_26(0)) || unk_0x50298ED00321BDFA())
			{
				iLocal_47 = 9;
				return;
			}
			unk_0x9C3FB11BF0A44112(unk_0xB5CEFD608600A09F());
			unk_0x2E9860A2B72187F5(unk_0xBC25C936A095B5BA(), 217, 1);
			break;
		
		case 9:
			func_23("CHEAT_SUPER_JUMP");
			func_30(0, 0);
			iLocal_47 = 1;
			break;
		
		default:
			break;
	}
}

void func_87()//Position - 0x2C40
{
	if ((func_110() || iLocal_84 != 0) || func_14(14))
	{
		unk_0xBBC4195AD74D153D(2, 243, 1);
	}
	func_109();
	if (unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		return;
	}
	if (unk_0x19B821A70FE4D11F(unk_0xBC25C936A095B5BA()))
	{
		return;
	}
	if (!unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		return;
	}
	if (!unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()))
	{
		return;
	}
	if (func_33() || unk_0x7930B3E9C919E90F())
	{
		return;
	}
	if (func_108())
	{
		if (!iLocal_82)
		{
			func_107();
			iLocal_82 = 1;
		}
		return;
	}
	iLocal_82 = 0;
	iLocal_83 = 0;
	if ((func_106(988027572, 12) || unk_0x3D30E714ACBA663F(joaat("buzzoff"))) || func_105(20, joaat("buzzard")))
	{
		func_102(joaat("buzzard"), "CHEAT_SPAWN_VEH1");
	}
	if ((func_106(-1134279030, 11) || unk_0x3D30E714ACBA663F(joaat("bandit"))) || func_105(20, joaat("bmx")))
	{
		func_102(joaat("bmx"), "CHEAT_SPAWN_VEH2");
	}
	if ((func_106(971352167, 10) || unk_0x3D30E714ACBA663F(joaat("holein1"))) || func_105(20, joaat("caddy")))
	{
		func_102(joaat("caddy"), "CHEAT_SPAWN_VEH3");
	}
	if ((func_106(-269863225, 10) || unk_0x3D30E714ACBA663F(joaat("comet"))) || func_105(20, joaat("comet2")))
	{
		func_102(joaat("comet2"), "CHEAT_SPAWN_VEH4");
	}
	if ((func_106(458579068, 12) || unk_0x3D30E714ACBA663F(joaat("flyspray"))) || func_105(20, joaat("duster")))
	{
		func_102(joaat("duster"), "CHEAT_SPAWN_VEH5");
	}
	if ((func_106(-666513193, 12) || unk_0x3D30E714ACBA663F(joaat("rocket"))) || func_105(20, joaat("pcj")))
	{
		func_102(joaat("pcj"), "CHEAT_SPAWN_VEH6");
	}
	if ((func_106(-1245984749, 10) || unk_0x3D30E714ACBA663F(joaat("rapidgt"))) || func_105(20, joaat("rapidgt")))
	{
		func_102(joaat("rapidgt"), "CHEAT_SPAWN_VEH7");
	}
	if ((func_106(2076774618, 12) || unk_0x3D30E714ACBA663F(joaat("offroad"))) || func_105(20, joaat("sanchez")))
	{
		func_102(joaat("sanchez"), "CHEAT_SPAWN_VEH8");
	}
	if ((func_106(855685457, 9) || unk_0x3D30E714ACBA663F(joaat("vinewood"))) || func_105(20, joaat("stretch")))
	{
		func_102(joaat("stretch"), "CHEAT_SPAWN_VEH9");
	}
	if ((func_106(-591395876, 12) || unk_0x3D30E714ACBA663F(joaat("barnstorm"))) || func_105(20, joaat("stunt")))
	{
		func_102(joaat("stunt"), "CHEAT_SPAWN_VEH10");
	}
	if ((func_106(-1399217582, 10) || unk_0x3D30E714ACBA663F(joaat("trashed"))) || func_105(20, joaat("trash")))
	{
		func_102(joaat("trash"), "CHEAT_SPAWN_VEH11");
	}
	if (func_101())
	{
		if ((func_106(-375917581, 10) || unk_0x3D30E714ACBA663F(joaat("extinct"))) || func_105(20, joaat("dodo")))
		{
			func_102(joaat("dodo"), "CHEAT_SPAWN_VEH12");
		}
		if ((func_106(-2124307881, 10) || unk_0x3D30E714ACBA663F(joaat("deathcar"))) || func_105(20, joaat("dukes2")))
		{
			func_102(joaat("dukes2"), "CHEAT_SPAWN_VEH13");
		}
		if ((func_106(1028964594, 9) || unk_0x3D30E714ACBA663F(joaat("bubbles"))) || func_105(20, joaat("submersible2")))
		{
			func_102(joaat("submersible2"), "CHEAT_SPAWN_VEH14");
		}
	}
	if ((func_106(-393416581, 11) || unk_0x3D30E714ACBA663F(joaat("hoptoit"))) || func_105(0, 0))
	{
		func_100();
	}
	if ((func_106(-296509791, 8) || unk_0x3D30E714ACBA663F(joaat("snowday"))) || func_105(1, 0))
	{
		func_99();
	}
	if ((func_106(1120820643, 7) || unk_0x3D30E714ACBA663F(joaat("catchme"))) || func_105(2, 0))
	{
		func_98();
	}
	if ((func_106(-421458016, 9) || unk_0x3D30E714ACBA663F(joaat("gotgills"))) || func_105(3, 0))
	{
		func_97();
	}
	if ((func_106(372390926, 12) || unk_0x3D30E714ACBA663F(joaat("toolup"))) || func_105(4, 0))
	{
		iLocal_51 = 4;
	}
	if ((func_106(606506837, 8) || unk_0x3D30E714ACBA663F(joaat("makeitrain"))) || func_105(5, 0))
	{
		iLocal_52 = 4;
	}
	if ((func_106(453014206, 12) || unk_0x3D30E714ACBA663F(joaat("turtle"))) || func_105(6, 0))
	{
		iLocal_53 = 4;
	}
	if ((func_106(1773187142, 9) || unk_0x3D30E714ACBA663F(joaat("powerup"))) || func_105(7, 0))
	{
		iLocal_54 = 4;
	}
	if ((func_106(1173296014, 10) || unk_0x3D30E714ACBA663F(joaat("fugitive"))) || func_105(8, 0))
	{
		iLocal_55 = 4;
	}
	if ((func_106(-381269753, 10) || unk_0x3D30E714ACBA663F(joaat("lawyerup"))) || func_105(9, 0))
	{
		iLocal_56 = 4;
	}
	if ((func_106(-2023988698, 11) || unk_0x3D30E714ACBA663F(joaat("skydive"))) || func_105(10, 0))
	{
		iLocal_57 = 4;
	}
	if ((func_106(-835863906, 12) || unk_0x3D30E714ACBA663F(joaat("highex"))) || func_105(11, 0))
	{
		func_96();
	}
	if ((func_106(1958387485, 12) || unk_0x3D30E714ACBA663F(joaat("incendiary"))) || func_105(12, 0))
	{
		func_95();
	}
	if ((func_106(-903985180, 9) || unk_0x3D30E714ACBA663F(joaat("hothands"))) || func_105(13, 0))
	{
		func_94();
	}
	if ((func_106(2087642905, 9) || unk_0x3D30E714ACBA663F(joaat("floater"))) || func_105(14, 0))
	{
		func_93();
	}
	if ((func_106(1257820019, 10) || unk_0x3D30E714ACBA663F(joaat("painkiller"))) || func_105(15, 0))
	{
		func_92();
	}
	if ((func_106(1540206179, 7) || unk_0x3D30E714ACBA663F(joaat("slowmo"))) || func_105(16, 0))
	{
		func_91();
	}
	if ((func_106(115565392, 16) || unk_0x3D30E714ACBA663F(joaat("skyfall"))) || func_105(17, 0))
	{
		func_90();
	}
	if ((func_106(-1276513277, 8) || unk_0x3D30E714ACBA663F(joaat("liquor"))) || func_105(18, 0))
	{
		func_89();
	}
	if ((func_106(2040433593, 9) || unk_0x3D30E714ACBA663F(joaat("deadeye"))) || func_105(19, 0))
	{
		func_88();
	}
}

void func_88()//Position - 0x33A4
{
	if (func_27())
	{
		func_20("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		return;
	}
	if ((func_26(23) || func_26(21)) || func_26(16))
	{
		func_20("CHEAT_NOT_NOW");
		return;
	}
	if (iLocal_63 != 1)
	{
		func_20("CHEAT_NOT_NOW");
	}
	else
	{
		iLocal_66 = 4;
	}
}

void func_89()//Position - 0x3410
{
	if (func_27())
	{
		func_20("CHEAT_MISSION_DENIED");
		iLocal_65 = 1;
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		iLocal_65 = 1;
		return;
	}
	if ((func_26(23) || func_26(21)) || func_26(18))
	{
		func_20("CHEAT_NOT_NOW");
		iLocal_65 = 1;
		return;
	}
	if (iLocal_65 == 1)
	{
		iLocal_65 = 4;
	}
	else if (iLocal_65 == 5)
	{
		iLocal_65 = 9;
	}
}

void func_90()//Position - 0x3487
{
	if (func_27())
	{
		func_20("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		return;
	}
	if (unk_0x50298ED00321BDFA())
	{
		func_20("CHEAT_NOT_HERE");
		return;
	}
	if (iLocal_64 != 1)
	{
		func_20("CHEAT_ALREADY_ACTIVE");
		return;
	}
	if (((((func_26(23) || func_26(21)) || func_26(17)) || func_65(0)) || unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0)) || !unk_0xAE9335ADE2B33DFC())
	{
		func_20("CHEAT_NOT_NOW");
		return;
	}
	if ((unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 0)) || unk_0xB731B8C5BCE89836(joaat("respawn_controller")) > 0)
	{
		func_20("CHEAT_NOT_NOW");
		return;
	}
	iLocal_64 = 2;
}

void func_91()//Position - 0x3560
{
	if (func_27())
	{
		func_20("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		return;
	}
	if ((func_26(23) || func_26(21)) || func_26(16))
	{
		func_20("CHEAT_NOT_NOW");
		return;
	}
	if (iLocal_66 != 1)
	{
		func_20("CHEAT_NOT_NOW");
	}
	else
	{
		iLocal_63 = 4;
	}
}

void func_92()//Position - 0x35CC
{
	vector3 vVar0;
	
	vVar0 = { func_18(unk_0xB5CEFD608600A09F()) };
	if (func_27())
	{
		func_20("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		return;
	}
	if (((func_26(23) || func_26(21)) || func_26(15)) || vVar0.z <= -170f)
	{
		func_20("CHEAT_NOT_NOW");
		return;
	}
	if (iLocal_62 == 1)
	{
		iLocal_62 = 4;
	}
	else if (iLocal_62 == 5)
	{
		iLocal_62 = 9;
	}
}

void func_93()//Position - 0x3656
{
	if (func_27())
	{
		func_20("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		return;
	}
	if ((((func_26(23) || func_26(21)) || func_26(14)) || func_65(17)) || unk_0x149E9368A11035DE(unk_0xBC25C936A095B5BA()))
	{
		func_20("CHEAT_NOT_NOW");
		return;
	}
	iLocal_61 = 4;
}

void func_94()//Position - 0x36CB
{
	if (func_27())
	{
		func_20("CHEAT_MISSION_DENIED");
		iLocal_60 = 1;
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		iLocal_60 = 1;
		return;
	}
	if ((func_26(23) || func_26(21)) || func_26(13))
	{
		func_20("CHEAT_NOT_NOW");
		iLocal_60 = 1;
		return;
	}
	if (iLocal_60 == 1)
	{
		iLocal_60 = 4;
	}
	else if (iLocal_60 == 5)
	{
		iLocal_60 = 9;
	}
}

void func_95()//Position - 0x3742
{
	if (func_27())
	{
		func_20("CHEAT_MISSION_DENIED");
		iLocal_59 = 1;
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		iLocal_59 = 1;
		return;
	}
	if ((func_26(23) || func_26(21)) || func_26(12))
	{
		func_20("CHEAT_NOT_NOW");
		iLocal_59 = 1;
		return;
	}
	if (iLocal_59 == 1)
	{
		iLocal_59 = 4;
	}
	else if (iLocal_59 == 5)
	{
		iLocal_59 = 9;
	}
}

void func_96()//Position - 0x37B9
{
	if (func_27())
	{
		func_20("CHEAT_MISSION_DENIED");
		iLocal_58 = 1;
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		iLocal_58 = 1;
		return;
	}
	if ((func_26(23) || func_26(21)) || func_26(11))
	{
		func_20("CHEAT_NOT_NOW");
		iLocal_58 = 1;
		return;
	}
	if (iLocal_58 == 1)
	{
		iLocal_58 = 4;
	}
	else if (iLocal_58 == 5)
	{
		iLocal_58 = 9;
	}
}

void func_97()//Position - 0x3830
{
	if ((((func_26(23) || func_26(22)) || func_26(3)) || func_14(9)) || func_14(10))
	{
		func_20("CHEAT_NOT_NOW");
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_50 == 1)
	{
		iLocal_50 = 4;
	}
	else if (iLocal_50 == 5)
	{
		iLocal_50 = 9;
	}
}

void func_98()//Position - 0x38A3
{
	if ((((func_26(23) || func_26(22)) || func_26(2)) || func_14(9)) || func_14(10))
	{
		func_20("CHEAT_NOT_NOW");
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_49 == 1)
	{
		iLocal_49 = 4;
	}
	else if (iLocal_49 == 5)
	{
		iLocal_49 = 9;
	}
}

void func_99()//Position - 0x3916
{
	if ((func_26(23) || func_26(22)) || func_26(1))
	{
		func_20("CHEAT_NOT_NOW");
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_48 == 1)
	{
		iLocal_48 = 4;
	}
	else if (iLocal_48 == 5)
	{
		iLocal_48 = 9;
	}
}

void func_100()//Position - 0x3971
{
	if (((func_26(23) || func_26(22)) || func_26(0)) || unk_0x50298ED00321BDFA())
	{
		func_20("CHEAT_NOT_NOW");
		return;
	}
	if (func_69())
	{
		func_20("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_47 == 1)
	{
		iLocal_47 = 4;
	}
	else if (iLocal_47 == 5)
	{
		iLocal_47 = 9;
	}
}

int func_101()//Position - 0x39D6
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

void func_102(int iParam0, char* sParam1)//Position - 0x3A91
{
	if (iLocal_46 == 1)
	{
		if (((((func_14(9) || unk_0xB731B8C5BCE89836(joaat("barry1")) > 0) || unk_0xB731B8C5BCE89836(joaat("tennis")) > 0) || func_26(23)) || func_26(22)) || func_26(20))
		{
			func_20("CHEAT_NOT_NOW");
			return;
		}
		if (func_69())
		{
			func_20("CHEAT_PHONE_DENIED");
			return;
		}
		if (!func_103(iParam0))
		{
			func_20("CHEAT_VEHICLE_LOCKED_DENIED");
			return;
		}
		iLocal_67 = iParam0;
		sLocal_70 = sParam1;
		iLocal_46 = 2;
	}
}

int func_103(int iParam0)//Position - 0x3B2B
{
	switch (iParam0)
	{
		case joaat("dodo"):
			if (func_104(66, 0) == 0)
			{
				return 0;
			}
			break;
		
		case joaat("dukes2"):
			if (func_104(64, 0) == 0)
			{
				return 0;
			}
			break;
		
		case joaat("submersible2"):
			if (func_104(63, 0) == 0)
			{
				return 0;
			}
			break;
	}
	return 1;
}

bool func_104(int iParam0, int iParam1)//Position - 0x3B83
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_19B04.f_7F22[iParam0], iParam1);
}

int func_105(int iParam0, int iParam1)//Position - 0x3BA6
{
	if (unk_0xFA30DFD0084E92FE(Global_63B5, iParam0))
	{
		if (iParam1 != 0)
		{
			if (iParam1 == Global_63B6)
			{
				unk_0x7CB6FD92BE491AD9(&Global_63B5, iParam0);
				iLocal_83 = 1;
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			unk_0x7CB6FD92BE491AD9(&Global_63B5, iParam0);
			iLocal_83 = 1;
			return 1;
		}
	}
	return 0;
}

int func_106(int iParam0, int iParam1)//Position - 0x3BF3
{
	if (!func_14(14))
	{
		return unk_0x43C52D7387E30186(iParam0, iParam1);
	}
	return 0;
}

void func_107()//Position - 0x3C11
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iLocal_80[iVar0] != -1)
		{
			unk_0x8C563C8EA840EA02(iLocal_80[iVar0]);
			iLocal_80[iVar0] = -1;
		}
		iVar0++;
	}
}

int func_108()//Position - 0x3C47
{
	if (((Global_16B1B == 13 || Global_16B1B == 10) || Global_16B1B == 11) || Global_16B1B == 12)
	{
		return 0;
	}
	return 1;
}

void func_109()//Position - 0x3C85
{
	if (func_14(14) || (!unk_0x726D9204B160D23E() && iLocal_84 != 0))
	{
		iLocal_84 = unk_0x105601648511CC64();
	}
	if (iLocal_84 != 0)
	{
		if (!func_14(14))
		{
			if ((unk_0x105601648511CC64() - iLocal_84) > 1000)
			{
				iLocal_84 = 0;
			}
		}
	}
}

int func_110()//Position - 0x3CD0
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

void func_111()//Position - 0x3CFA
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iLocal_80[iVar0] = -1;
		iVar0++;
	}
	iLocal_82 = 0;
	iLocal_81 = 0;
}

void func_112()//Position - 0x3D22
{
	unk_0x91EF346F026FB45F(0);
	if (iLocal_64 == 5)
	{
		func_36();
	}
	if (iLocal_65 == 5)
	{
		func_45(1);
	}
	if (iLocal_63 == 5 || iLocal_66 == 5)
	{
		unk_0x2991B7F8ABC4BB0C(1f);
	}
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (iLocal_62 == 5)
		{
			unk_0x3D7FF8418367D451(unk_0xB5CEFD608600A09F(), 0);
			unk_0x06D93FD5E4D394CF(unk_0xBC25C936A095B5BA(), false, false, false, false, false, 0, 0, 0);
		}
		unk_0x962DA0CEE17988CD(unk_0xB5CEFD608600A09F(), 1f);
		unk_0xFF00156B37CCD12A(unk_0xB5CEFD608600A09F(), 1f);
	}
	unk_0x8E9F4F9A422079A2(0);
	Global_63B3 = 0;
	Global_63B2 = 0;
	Global_63B4 = 0;
	Global_63B5 = 0;
	Global_63B7 = 0;
	Global_63B6 = 0;
	unk_0x95E4B6F3ED223F5A();
}

