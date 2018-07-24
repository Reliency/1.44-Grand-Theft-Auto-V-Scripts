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
	float fLocal_31 = 0f;
	vector3 vLocal_32 = { 0f, 0f, 0f };
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	bool bLocal_35 = 0;
	int iLocal_36[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_37 = 0;
	bool bLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	vector3 vLocal_42 = { 0f, 0f, 0f };
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	vector3 vLocal_45 = { 0f, 0f, 0f };
	float fLocal_46 = 0f;
	int iLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49[5] = { 0, 0, 0, 0, 0 };
	var uLocal_50[5] = { 0, 0, 0, 0, 0 };
	var uLocal_51 = 5;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_31 = 1E+07f;
	vLocal_32 = { 2134.06f, 4780.69f, 41.664f };
	iLocal_33 = -1;
	vLocal_42 = { 2136.133f, 4780.563f, 39.9702f };
	vLocal_45 = { 2149.737f, 4798.472f, 40.1071f };
	fLocal_46 = 55.4847f;
	if (unk_0xE8A79675302ED812(82))
	{
		func_186();
	}
	func_185(17);
	func_184();
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	while (true)
	{
		if (func_183() == 309)
		{
			bLocal_35 = true;
		}
		else
		{
			bLocal_35 = false;
		}
		if (func_170())
		{
			if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
			{
				fLocal_31 = SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), vLocal_32);
			}
			func_168(&iVar1);
			func_30(&iVar2);
			if (iLocal_39 > 3)
			{
				if (fLocal_31 < 600f)
				{
					if (func_27(0) == 0 && (unk_0x105601648511CC64() - iLocal_59) > 2000)
					{
						iLocal_59 = unk_0x105601648511CC64();
						func_3();
					}
				}
			}
			iVar0 = 0;
		}
		else
		{
			if (!bLocal_38)
			{
				if (func_2(105))
				{
					func_1(105, 0, 0);
					Global_19B04.f_4DF2.f_E = 0;
				}
			}
			else
			{
				Global_19B04.f_4DF2.f_E = 0;
			}
			if (!bLocal_38)
			{
				if (func_2(106))
				{
					func_1(106, 0, 0);
					Global_19B04.f_4DF2.f_D = 0;
				}
			}
			else
			{
				Global_19B04.f_4DF2.f_D = 0;
			}
			iVar0 = 1000;
		}
		SYSTEM::WAIT(iVar0);
	}
}

void func_1(int iParam0, bool bParam1, bool bParam2)//Position - 0x1A4
{
	int iVar0;
	bool bVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		bVar1 = unk_0xFA30DFD0084E92FE(Global_6416[iVar0 /*23*/].f_B, 15);
		if (bVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != unk_0xFA30DFD0084E92FE(Global_6416[iVar0 /*23*/].f_B, 0))
	{
		unk_0xF0059F27F7BB6680(&(Global_6416[iVar0 /*23*/].f_B), 18);
		if (Global_6413 == 1)
		{
			Global_6414 = 1;
		}
		Global_6413 = 1;
	}
	if (bParam1)
	{
		unk_0xF0059F27F7BB6680(&(Global_6416[iVar0 /*23*/].f_B), 0);
		unk_0xF0059F27F7BB6680(&(Global_6416[iVar0 /*23*/].f_B), 15);
		unk_0xF0059F27F7BB6680(&(Global_6416[iVar0 /*23*/].f_B), 3);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_6416[iVar0 /*23*/].f_B), 0);
		unk_0x7CB6FD92BE491AD9(&(Global_6416[iVar0 /*23*/].f_B), 15);
	}
	if (!unk_0xFA30DFD0084E92FE(Global_6416[iVar0 /*23*/].f_B, 0))
	{
		if (unk_0x2DA8CA50A72528FB(Global_6416[iVar0 /*23*/].f_13))
		{
			unk_0xB5AD2E78802711D6(1);
			unk_0x07B8ECB35A4ED3AC(&(Global_6416[iVar0 /*23*/].f_13));
			unk_0xB5AD2E78802711D6(0);
		}
	}
}

bool func_2(int iParam0)//Position - 0x2AD
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return unk_0x2DA8CA50A72528FB(Global_6416[iVar0 /*23*/].f_13);
}

void func_3()//Position - 0x2E9
{
	func_4(&(Global_17646.f_B3B), &Global_17646, 0, 1, 1, 0);
}

void func_4(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x304
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = unk_0xBC25C936A095B5BA();
	}
	if (unk_0x724D816EA203A79E(iParam2))
	{
		uParam1->f_5 = func_26(iParam2);
	}
	if (func_19(iParam2, &iVar0, iParam3, iParam5))
	{
		func_5(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0x724D816EA203A79E(iVar0))
	{
		if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
		{
			if (unk_0x5E87CB0495C97732(iVar0, joaat("skylift")) && unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iVar0, 0))
			{
				func_5(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_5(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x38C
{
	if (unk_0xE59B7F5A03335350(iParam2, 0))
	{
		func_7(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_6(iParam2))
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

int func_6(int iParam0)//Position - 0x3CC
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

void func_7(var uParam0, int iParam1, int iParam2)//Position - 0x3FA
{
	func_14(iParam1, &(uParam0->f_C));
	uParam0->f_7 = func_10(iParam1, 145, 0);
	uParam0->f_B = func_9(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_A)
		{
			uParam0->f_A = func_8(iParam1);
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

int func_8(int iParam0)//Position - 0x4D6
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

int func_9(int iParam0)//Position - 0x518
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

int func_10(int iParam0, int iParam1, int iParam2)//Position - 0x57B
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
					if (iParam2 == 0 || unk_0x6F79ECA8C83E4357(iParam0) == func_11(iParam1, iParam2))
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

int func_11(int iParam0, int iParam1)//Position - 0x609
{
	struct<82> Var0;
	
	if (func_13(iParam0))
	{
		Var0.f_B = 12;
		Var0.f_1F = 49;
		Var0.f_51 = 2;
		func_12(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_12(int iParam0, var uParam1, int iParam2)//Position - 0x64B
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

bool func_13(int iParam0)//Position - 0x8A1
{
	return iParam0 < 3;
}

void func_14(int iParam0, var uParam1)//Position - 0x8AD
{
	int iVar0;
	
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		func_18(uParam1);
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
		if (uParam1->f_41 == -1 && !func_17(uParam1->f_42))
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
		func_16(&iParam0, &(uParam1->f_9), &(uParam1->f_3B));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xFC8A228C62614C5C(iParam0, iVar0 + 1))
			{
				unk_0xF0059F27F7BB6680(&(uParam1->f_4D), func_15(iVar0 + 1));
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

int func_15(int iParam0)//Position - 0xB56
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

int func_16(int iParam0, var uParam1, var uParam2)//Position - 0xC06
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

int func_17(int iParam0)//Position - 0xCE0
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

void func_18(var uParam0)//Position - 0xD00
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

int func_19(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0xDB0
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
						if (func_20(*uParam1, func_22(), 1))
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

int func_20(int iParam0, int iParam1, bool bParam2)//Position - 0xEDC
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0x724D816EA203A79E(iParam0) || !unk_0xE59B7F5A03335350(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_21(iParam1, iVar0, &sVar1, &iVar2))
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

int func_21(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0xF4D
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

int func_22()//Position - 0x101E
{
	func_23();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_23()//Position - 0x1037
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_25(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_26(unk_0xBC25C936A095B5BA());
			if (func_13(iVar0) && (!func_24(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_13(Global_19B04.f_932.f_21B.f_10CD))
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

bool func_24(int iParam0)//Position - 0x1134
{
	return Global_8C41 == iParam0;
}

int func_25(int iParam0)//Position - 0x1142
{
	if (func_13(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_26(int iParam0)//Position - 0x116C
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_25(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_27(int iParam0)//Position - 0x11A9
{
	if (Global_8C41 == 15)
	{
		return 0;
	}
	if (func_28(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_28(int iParam0)//Position - 0x11CB
{
	return func_29(iParam0, Global_8C41);
}

int func_29(int iParam0, int iParam1)//Position - 0x11DC
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

void func_30(int iParam0)//Position - 0x13BD
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<91> Var4;
	int iVar5;
	
	bVar0 = false;
	if (iLocal_43 != 9)
	{
		if (!Global_19B04.f_4DF2.f_D)
		{
			if (Global_19B04.f_4DF2.f_1 == 0 && Global_19B04.f_4DF2.f_2 == 0)
			{
				if (!func_167(Global_19B04.f_4DF2, 32))
				{
					func_164("MG_TRAF_AVAIL", 0, 0, -1, 10000, 7, 0, 0, 0);
					func_162(&(Global_19B04.f_4DF2), 32);
				}
			}
			func_1(106, 1, 0);
			Global_19B04.f_4DF2.f_D = 1;
			bVar0 = true;
		}
		else
		{
			bVar0 = true;
		}
	}
	else
	{
		func_1(106, 0, 0);
		Global_19B04.f_4DF2.f_D = 0;
	}
	if (iLocal_43 != 1 && iLocal_43 != 8)
	{
		if (func_161() && !*iParam0)
		{
			func_160(0);
			iLocal_43 = 1;
		}
	}
	switch (iLocal_43)
	{
		case 0:
			iLocal_43 = 1;
			break;
		
		case 1:
			if (!func_161())
			{
				if (fLocal_31 < 50625f)
				{
					iLocal_43 = 2;
				}
				else if (bLocal_35)
				{
					iLocal_43 = 2;
				}
			}
			break;
		
		case 2:
			unk_0xF243B7A14FCFD0F4(joaat("dune"));
			iLocal_43 = 3;
			break;
		
		case 3:
			if (unk_0xD6513D668481290A(joaat("dune")))
			{
				unk_0xEDAD35A0D81ED3FB(vLocal_45, 4f, 0, 0, 0, 0, false, 0);
				if (unk_0x724D816EA203A79E(iLocal_44))
				{
					unk_0xCF6040807CC0E4A5(&iLocal_44);
				}
				iLocal_44 = unk_0x61C05BF08A1E0EFE(func_159(), vLocal_45, fLocal_46, 1, 1, 0);
				unk_0x4E87F356DA56EB3F(iLocal_44, 0);
				unk_0x2CA123B0622F495C(func_159());
				if (unk_0x724D816EA203A79E(iLocal_44))
				{
					if (unk_0xCB05FE87EDC4E5AA(iLocal_44, 1))
					{
						unk_0xE54F7105CEA81918(iLocal_44, 1, true);
					}
					if (unk_0xCB05FE87EDC4E5AA(iLocal_44, 2))
					{
						unk_0xE54F7105CEA81918(iLocal_44, 2, false);
					}
					if (unk_0xCB05FE87EDC4E5AA(iLocal_44, 3))
					{
						unk_0xE54F7105CEA81918(iLocal_44, 3, false);
					}
					unk_0x914C5DE0B15B8B59(iLocal_44, 0, 0);
				}
				iLocal_43 = 4;
			}
			break;
		
		case 5:
			if (fLocal_31 >= 50625f && !*iParam0)
			{
				func_160(0);
				iLocal_43 = 1;
				return;
			}
			break;
		
		case 4:
			func_158();
			if (!bLocal_35)
			{
				if (fLocal_31 >= 50625f && !*iParam0)
				{
					func_160(0);
					iLocal_43 = 1;
					return;
				}
			}
			if (!bVar0 && !*iParam0)
			{
				if (!bVar0)
				{
				}
				if (!*iParam0)
				{
				}
				if (!iLocal_47)
				{
					if (unk_0x5237AF95232D78C5(iLocal_28, 0))
					{
						iVar1 = unk_0xD20EBB97FE8799ED(iLocal_28);
						if (iVar1 == iLocal_44)
						{
							iLocal_47 = 1;
							unk_0x1E7A09C1710FB071(&iLocal_44);
							iLocal_43 = 9;
						}
					}
				}
				return;
			}
			if (*iParam0)
			{
				if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0) && !unk_0x1D403DFADBC2DE3C(iLocal_44, 0))
				{
					unk_0xBD53A029D0155A42(unk_0xBC25C936A095B5BA(), iLocal_44, -1);
				}
			}
			if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0) && !unk_0x1D403DFADBC2DE3C(iLocal_44, 0))
			{
				if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_44, 1))
				{
					func_157();
				}
			}
			if (!unk_0x1D403DFADBC2DE3C(iLocal_44, 0) && !unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
			{
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
				{
					iVar2 = unk_0xD20EBB97FE8799ED(unk_0xBC25C936A095B5BA());
					if (iVar2 == iLocal_44)
					{
						if (SYSTEM::VDIST2(vLocal_45, unk_0x541C2AEF053615BC(iLocal_28, true)) < 100f)
						{
							unk_0x63831D2D5110C305("Traffick_Ground");
							if (unk_0x724D816EA203A79E(iLocal_29) && !unk_0x1D403DFADBC2DE3C(iLocal_29, 0))
							{
								if (unk_0x6F79ECA8C83E4357(iLocal_29) != joaat("dune") && unk_0x6F79ECA8C83E4357(iLocal_29) != joaat("cuban800"))
								{
									func_130(iLocal_29, 2142.245f, 4823.463f, 40.2769f, 118.4428f, 24, 0);
								}
								else if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
								{
									unk_0xE5CDD8C2A7508295(iLocal_29);
								}
							}
							iLocal_43 = 6;
						}
					}
				}
			}
			break;
		
		case 6:
			if (unk_0xACE95AD318CE412B("Traffick_Ground"))
			{
				iVar3 = 0;
				if (*iParam0)
				{
					iVar3 = 1;
				}
				else
				{
					iVar3 = func_128(&iLocal_33, 6, 9, 0, 0);
					iLocal_37 = 1;
				}
				if (iVar3 == 1)
				{
					if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
					{
						unk_0xA98B19EC1C93FC3C(unk_0xB5CEFD608600A09F());
					}
					if (!*iParam0)
					{
						func_81("Traffick_Ground", 0);
					}
					Var4 = -1;
					Var4.f_8 = 4;
					Var4.f_D = 2;
					Var4.f_10 = 4;
					Var4.f_1D = 4;
					Var4.f_3D = 9;
					Var4.f_47 = 4;
					Var4.f_4C = 8;
					Var4.f_55 = 4;
					Var4.f_5A = 6;
					iLocal_30 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS("Traffick_Ground", &Var4, 97, 23500);
					func_80(16);
					unk_0x91DEC7187FA01089("Traffick_Ground");
					unk_0x77815D3407C6700D(iLocal_44, true, 0);
					unk_0x1E7A09C1710FB071(&iLocal_44);
					if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
					{
						if (Global_90C1 == 1)
						{
							func_71(unk_0xBC25C936A095B5BA());
						}
					}
					iLocal_47 = 0;
					iLocal_43 = 7;
				}
				else if (iVar3 == 0)
				{
					iLocal_37 = 0;
					func_160(0);
					iLocal_43 = 9;
				}
			}
			break;
		
		case 7:
			if (!unk_0x3C406FC829C1E14A(iLocal_30))
			{
				iLocal_43 = 9;
				if (func_167(Global_195BF, 2))
				{
					iLocal_43 = 8;
				}
				else
				{
					func_70(&iLocal_33);
					func_53();
					iLocal_34 = 1;
					iVar5 = func_52();
					func_44(&iVar5, 0, 0, 3, 0, 0, 0);
					Global_19B04.f_4DF2.f_C = iVar5;
					func_1(106, 0, 0);
					Global_19B04.f_4DF2.f_D = 0;
				}
				*iParam0 = 0;
				func_42(&Global_195BF, 2);
			}
			break;
		
		case 8:
			if (Global_16B1B == 10)
			{
				if (Global_16B3D)
				{
					*iParam0 = 1;
					unk_0x63831D2D5110C305("Traffick_Ground");
					iLocal_43 = 2;
				}
				else
				{
					*iParam0 = 0;
					iLocal_43 = 2;
				}
			}
			else if (Global_16B1B == 13)
			{
				func_70(&iLocal_33);
				func_53();
				*iParam0 = 0;
				iLocal_43 = 2;
			}
			break;
		
		case 9:
			if (fLocal_31 >= 50625f && func_31(Global_19B04.f_4DF2.f_C))
			{
				func_160(0);
				iLocal_43 = 1;
			}
			break;
		
		default:
			break;
	}
}

int func_31(int iParam0)//Position - 0x191D
{
	return func_32(func_52(), iParam0);
}

int func_32(int iParam0, int iParam1)//Position - 0x192F
{
	int iVar0;
	int iVar1;
	
	if (!func_40(iParam1) || !func_40(iParam0))
	{
		return 1;
	}
	iVar0 = func_38(iParam0);
	iVar1 = func_38(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_37(iParam0);
	iVar1 = func_37(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_36(iParam0);
	iVar1 = func_36(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_35(iParam0);
	iVar1 = func_35(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_34(iParam0);
	iVar1 = func_34(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_33(iParam0);
	iVar1 = func_33(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_33(int iParam0)//Position - 0x1A3B
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_34(int iParam0)//Position - 0x1A4E
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_35(int iParam0)//Position - 0x1A61
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_36(int iParam0)//Position - 0x1A74
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_37(int iParam0)//Position - 0x1A86
{
	return iParam0 & 15;
}

var func_38(int iParam0)//Position - 0x1A93
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_39(unk_0xFA30DFD0084E92FE(iParam0, 31), -1, 1)) + 2011;
}

int func_39(bool bParam0, int iParam1, int iParam2)//Position - 0x1AB8
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_40(int iParam0)//Position - 0x1ACF
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_33(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_34(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_35(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_38(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_37(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_36(iParam0);
	if (iVar5 < 1 || iVar5 > func_41(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_41(int iParam0, int iParam1)//Position - 0x1BAB
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

void func_42(var uParam0, int iParam1)//Position - 0x1C4D
{
	func_43(uParam0, iParam1);
}

void func_43(var uParam0, var uParam1)//Position - 0x1C5D
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_44(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1C72
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_38(*iParam0);
	iVar1 = func_37(*iParam0);
	iVar2 = func_36(*iParam0);
	iVar3 = func_35(*iParam0);
	iVar4 = func_34(*iParam0);
	iVar5 = func_33(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_41(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_41(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_45(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_45(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1DF4
{
	func_51(uParam0, iParam1);
	func_50(uParam0, iParam2);
	func_49(uParam0, iParam3);
	func_48(uParam0, iParam5);
	func_47(uParam0, iParam4);
	func_46(uParam0, iParam6);
}

void func_46(var uParam0, int iParam1)//Position - 0x1E2C
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

void func_47(var uParam0, int iParam1)//Position - 0x1EB2
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_37(*uParam0);
	iVar1 = func_38(*uParam0);
	if (iParam1 < 1 || iParam1 > func_41(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_48(var uParam0, int iParam1)//Position - 0x1F03
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_49(var uParam0, int iParam1)//Position - 0x1F36
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_50(var uParam0, int iParam1)//Position - 0x1F70
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_51(var uParam0, int iParam1)//Position - 0x1FAB
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_52()//Position - 0x1FE7
{
	var uVar0;
	
	func_51(&uVar0, unk_0xF40D00CD7B81C0A8());
	func_50(&uVar0, unk_0x7E09057438B9D216());
	func_49(&uVar0, unk_0x6E06C0DB9B43570D());
	func_47(&uVar0, unk_0xBE14F159908E4EE5());
	func_48(&uVar0, unk_0xDD6A91E47ED4D0CF());
	func_46(&uVar0, unk_0x4EEB3860BFC44B78());
	return uVar0;
}

void func_53()//Position - 0x202D
{
	func_69();
	func_62();
	func_58();
	func_57();
	func_56();
	func_55();
	Global_16B40 = 0;
	Global_154EB = -1;
	unk_0x7CB6FD92BE491AD9(&(Global_16B1B.f_14), 17);
	Global_16B3E = 0;
	unk_0x720260ACC9BD334E(0);
	unk_0xE44AD04338101C64(0);
	unk_0xC63520BF0B3FB162(1);
	unk_0x153C03E284E30336(1);
	unk_0x4101DC5C065D2EB5(1);
	func_54(0);
}

void func_54(int iParam0)//Position - 0x2086
{
	if (iParam0 == 1)
	{
		unk_0xF0059F27F7BB6680(&(Global_16B1B.f_14), 13);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_16B1B.f_14), 13);
	}
}

void func_55()//Position - 0x20AF
{
	Global_11632 = { 0f, 0f, 0f };
	Global_11635 = 0f;
	Global_16B1B.f_15 = 145;
}

void func_56()//Position - 0x20CD
{
	StringCopy(&Global_1162A, "", 16);
	StringCopy(&Global_1162E, "", 16);
}

void func_57()//Position - 0x20E7
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		Global_16B1B.f_16[iVar0] = 0;
		iVar0++;
	}
}

void func_58()//Position - 0x210C
{
	Global_16B1B = 13;
	Global_16B1B.f_1 = -1;
	Global_16B1B.f_2 = 0;
	Global_16B1B.f_1E = 0f;
	unk_0x7CB6FD92BE491AD9(&(Global_16B1B.f_14), 25);
	Global_16B3D = 0;
	func_61(0);
	func_60();
	func_59();
	Global_16B1B.f_12 = -1;
	Global_16B1B.f_13 = -1;
}

void func_59()//Position - 0x215B
{
	unk_0x7CB6FD92BE491AD9(&(Global_16B1B.f_14), 22);
	unk_0x7CB6FD92BE491AD9(&(Global_16B1B.f_14), 8);
}

void func_60()//Position - 0x217B
{
	if (Global_16B1B.f_10 != 0)
	{
		unk_0xB0B0FE33F4F22679(&(Global_16B1B.f_10));
		Global_16B1B.f_10 = 0;
	}
	if (Global_16B1B.f_11 != 0)
	{
		unk_0xB0B0FE33F4F22679(&(Global_16B1B.f_11));
		Global_16B1B.f_11 = 0;
	}
}

void func_61(int iParam0)//Position - 0x21B9
{
	if (iParam0 == 1)
	{
		Global_8E66 = 1;
	}
	else
	{
		Global_8E66 = 0;
	}
}

void func_62()//Position - 0x21D2
{
	func_63(&Global_181DF);
}

void func_63(var uParam0)//Position - 0x21E2
{
	int iVar0;
	int iVar1;
	
	*uParam0 = 145;
	func_68(&(uParam0->f_1));
	uParam0->f_6 = -1;
	uParam0->f_7 = -1;
	uParam0->f_8 = 0f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 145;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_9[iVar1] = -1;
		uParam0->f_D[iVar1] = 0;
		uParam0->f_11[iVar1] = 0;
		uParam0->f_15[iVar1] = 0;
		func_67(&(uParam0->f_19[0 /*295*/][iVar1 /*98*/]));
		func_67(&(uParam0->f_19[1 /*295*/][iVar1 /*98*/]));
		iVar0 = 0;
		while (iVar0 < 12)
		{
			uParam0->f_268[iVar1 /*65*/][iVar0] = -1;
			uParam0->f_268[iVar1 /*65*/].f_D[iVar0] = -1;
			uParam0->f_268[iVar1 /*65*/].f_1A[iVar0] = -1;
			iVar0++;
		}
		uParam0->f_268[iVar1 /*65*/].f_3B = 0;
		uParam0->f_268[iVar1 /*65*/].f_3C = -99;
		uParam0->f_268[iVar1 /*65*/].f_3D = 2;
		uParam0->f_268[iVar1 /*65*/].f_3E = 0;
		uParam0->f_268[iVar1 /*65*/].f_3F = -99;
		uParam0->f_268[iVar1 /*65*/].f_40 = 1;
		iVar0 = 0;
		while (iVar0 < 9)
		{
			uParam0->f_268[iVar1 /*65*/].f_27[iVar0] = -1;
			uParam0->f_268[iVar1 /*65*/].f_31[iVar0] = -1;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_32C[iVar1 /*472*/][iVar0 /*5*/].f_1 = 0;
			uParam0->f_32C[iVar1 /*472*/][iVar0 /*5*/].f_2 = 0;
			uParam0->f_32C[iVar1 /*472*/][iVar0 /*5*/].f_3 = 0;
			uParam0->f_32C[iVar1 /*472*/][iVar0 /*5*/].f_4 = 0;
			uParam0->f_32C[iVar1 /*472*/][iVar0 /*5*/] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			uParam0->f_32C[iVar1 /*472*/].f_DD[iVar0 /*5*/].f_1 = 0;
			uParam0->f_32C[iVar1 /*472*/].f_DD[iVar0 /*5*/].f_2 = 0;
			uParam0->f_32C[iVar1 /*472*/].f_DD[iVar0 /*5*/].f_3 = 0;
			uParam0->f_32C[iVar1 /*472*/].f_DD[iVar0 /*5*/].f_4 = 0;
			uParam0->f_32C[iVar1 /*472*/].f_DD[iVar0 /*5*/] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			uParam0->f_8B5[iVar1 /*32*/][iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			uParam0->f_8B5[iVar1 /*32*/].f_5[iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			uParam0->f_8B5[iVar1 /*32*/].f_10[iVar0] = 0;
			iVar0++;
		}
		uParam0->f_916[iVar1] = 0;
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_B07[iVar1 /*15*/][iVar0] = 0;
			uParam0->f_B07[iVar1 /*15*/].f_5[iVar0] = 0;
			uParam0->f_B07[iVar1 /*15*/].f_A[iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_91A[iVar1 /*164*/][iVar0] = 0;
			uParam0->f_91A[iVar1 /*164*/].f_4[iVar0] = 0;
			uParam0->f_91A[iVar1 /*164*/].f_8[iVar0] = 0;
			uParam0->f_91A[iVar1 /*164*/].f_C[iVar0] = 0;
			uParam0->f_91A[iVar1 /*164*/].f_10[iVar0] = 0;
			uParam0->f_91A[iVar1 /*164*/].f_14[iVar0] = 0;
			uParam0->f_91A[iVar1 /*164*/].f_18[iVar0] = 0;
			uParam0->f_91A[iVar1 /*164*/].f_1C[iVar0] = 0;
			uParam0->f_91A[iVar1 /*164*/].f_20[iVar0] = 0;
			uParam0->f_91A[iVar1 /*164*/].f_24[iVar0] = 0;
			uParam0->f_91A[iVar1 /*164*/].f_28[iVar0] = 0;
			uParam0->f_91A[iVar1 /*164*/].f_2C[iVar0] = 0;
			uParam0->f_91A[iVar1 /*164*/].f_30[iVar0] = 0;
			uParam0->f_91A[iVar1 /*164*/].f_34[iVar0] = 0;
			uParam0->f_91A[iVar1 /*164*/].f_38[iVar0] = 0;
			uParam0->f_91A[iVar1 /*164*/].f_3C[iVar0] = 0;
			uParam0->f_91A[iVar1 /*164*/].f_40[iVar0] = 0;
			uParam0->f_91A[iVar1 /*164*/].f_44[iVar0] = 0;
			uParam0->f_91A[iVar1 /*164*/].f_48[iVar0] = 0;
			uParam0->f_91A[iVar1 /*164*/].f_4C[iVar0] = 0;
			uParam0->f_91A[iVar1 /*164*/].f_50[iVar0] = 0;
			uParam0->f_91A[iVar1 /*164*/].f_54[iVar0] = 0;
			uParam0->f_91A[iVar1 /*164*/].f_58[iVar0] = 0;
			uParam0->f_91A[iVar1 /*164*/].f_5C[iVar0] = 0;
			uParam0->f_91A[iVar1 /*164*/].f_60[iVar0] = 0;
			uParam0->f_91A[iVar1 /*164*/].f_64[iVar0] = 0;
			uParam0->f_91A[iVar1 /*164*/].f_68[iVar0] = 0;
			uParam0->f_91A[iVar1 /*164*/].f_6C[iVar0] = 0;
			uParam0->f_91A[iVar1 /*164*/].f_70[iVar0] = 0;
			uParam0->f_91A[iVar1 /*164*/].f_74[iVar0] = 0;
			uParam0->f_91A[iVar1 /*164*/].f_78[iVar0] = 0;
			uParam0->f_91A[iVar1 /*164*/].f_7C[iVar0] = 0;
			uParam0->f_91A[iVar1 /*164*/].f_80[iVar0] = 0;
			uParam0->f_91A[iVar1 /*164*/].f_84[iVar0] = 0;
			uParam0->f_91A[iVar1 /*164*/].f_88[iVar0] = 0;
			uParam0->f_91A[iVar1 /*164*/].f_8C[iVar0] = 0;
			uParam0->f_91A[iVar1 /*164*/].f_90[iVar0] = 0;
			uParam0->f_91A[iVar1 /*164*/].f_94[iVar0] = 0;
			uParam0->f_91A[iVar1 /*164*/].f_98[iVar0] = 0;
			uParam0->f_91A[iVar1 /*164*/].f_9C[iVar0] = 0;
			uParam0->f_91A[iVar1 /*164*/].f_A0[iVar0] = 0;
			iVar0++;
		}
		iVar1++;
	}
	func_66(&(uParam0->f_B35));
	func_65(&(uParam0->f_B3B));
	func_64(&(uParam0->f_B95));
}

void func_64(var uParam0)//Position - 0x2772
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_65(var uParam0)//Position - 0x278D
{
	func_18(&(uParam0->f_C));
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = { 0f, 0f, 0f };
	uParam0->f_6 = 0f;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
}

void func_66(var uParam0)//Position - 0x27BC
{
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	uParam0->f_5 = -1;
}

void func_67(var uParam0)//Position - 0x27DA
{
	int iVar0;
	
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_A = 0;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		uParam0->f_B[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
	StringCopy(&(uParam0->f_1B), "", 16);
	iVar0 = 0;
	while (iVar0 <= 48)
	{
		uParam0->f_1F[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		uParam0->f_51[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_54 = 0;
	uParam0->f_55 = 0;
	uParam0->f_56 = 0;
	uParam0->f_57 = 0;
	uParam0->f_58 = 0;
	uParam0->f_59 = 0;
	uParam0->f_5A = 0;
	uParam0->f_5B = 0;
	uParam0->f_5D = 0;
	uParam0->f_5E = 0;
	uParam0->f_5F = 0;
	uParam0->f_5C = 0;
}

void func_68(var uParam0)//Position - 0x28BA
{
	*uParam0 = -15;
}

void func_69()//Position - 0x28C8
{
	StringCopy(&Global_1763E, "", 32);
	func_63(&Global_17646);
}

void func_70(int iParam0)//Position - 0x28E1
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_8C1B)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_8C1A = 0;
	Global_8C1C = 0;
	Global_8C41 = 15;
	Global_DA9C = 0;
	Global_DA9D = 0;
}

void func_71(int iParam0)//Position - 0x291E
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
	iVar0 = func_79(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_8FEC[iVar0 /*5*/];
		func_74(1, iVar1, 1);
		return;
	}
	iVar2 = func_73(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_72(iVar2);
}

void func_72(int iParam0)//Position - 0x2977
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

int func_73(int iParam0)//Position - 0x29FA
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

void func_74(int iParam0, int iParam1, int iParam2)//Position - 0x2A2B
{
	func_75(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_75(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2A40
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
	if (func_77(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_76();
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

int func_76()//Position - 0x2AC2
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

int func_77(int iParam0, int iParam1, int iParam2)//Position - 0x2AF3
{
	if (func_78(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_78(int iParam0, int iParam1, int iParam2)//Position - 0x2B0E
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

int func_79(int iParam0)//Position - 0x2B5A
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

void func_80(int iParam0)//Position - 0x2BA3
{
	var uVar0;
	vector3 vVar1[24];
	
	if (unk_0xA76D65C63ED50F67() || unk_0xF49912B78E2591B6())
	{
		uVar0 = iParam0;
		unk_0xCEFBE636B33A557B(8, &uVar0, 1, 1);
	}
	else if (unk_0x3E9993F328985CCB() || unk_0xF7E138CFA19B55E7())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x785F3AE9C51AE93D(8, &cVar1);
	}
}

void func_81(char[4] cParam0, int iParam1)//Position - 0x2BFA
{
	unk_0x7CB6FD92BE491AD9(&(Global_16B1B.f_14), 17);
	func_82(cParam0, iParam1, 0);
}

void func_82(char[4] cParam0, int iParam1, int iParam2)//Position - 0x2C17
{
	if (Global_16B1B != 10 && Global_16B1B != 9)
	{
		StringCopy(&Global_1763E, cParam0, 32);
		func_84(&Global_17646, cParam0, 0, "Start", iParam1, iParam2);
		func_83();
		Global_154EE = 0;
	}
}

void func_83()//Position - 0x2C5B
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

void func_84(var uParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x38EF
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_22();
	uParam0->f_1 = func_52();
	unk_0x6E1ECC86C790262C(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		func_102(&(uParam0->f_B35), 0);
		func_101(unk_0xBC25C936A095B5BA());
		func_94(unk_0xBC25C936A095B5BA(), 0);
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
		if (iVar1 == func_93())
		{
			func_86(unk_0xBC25C936A095B5BA(), &(uParam0->f_268[iVar1 /*65*/]), 1);
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
		func_4(&(uParam0->f_B3B), uParam0, iParam5, 1, 1, 0);
	}
	func_85(&(uParam0->f_B95));
	sParam3 = sParam3;
	iParam2 = iParam2;
}

int func_85(var uParam0)//Position - 0x4779
{
	*uParam0 = Global_15B75;
	uParam0->f_1 = Global_15B76;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_86(int iParam0, var uParam1, int iParam2)//Position - 0x479B
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		iVar0 = func_26(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_92(iParam0, iVar1, &(uParam1->f_D[iVar1]), uParam1[iVar1], &(uParam1->f_1A[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_91(iParam0, iVar1, &(uParam1->f_27[iVar1]), &(uParam1->f_31[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_13(iVar0))
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
			if (func_90(161, -1))
			{
				uParam1->f_3B = func_87(2051, Global_11486, 0);
			}
			else
			{
				uParam1->f_3B = func_87(752, Global_11486, 0);
			}
			uParam1->f_3C = func_87(753, Global_11486, 0);
			uParam1->f_3D = func_87(754, Global_11486, 0);
		}
		if (unk_0x7AF0088ABFA713B6() && iParam0 == unk_0xBC25C936A095B5BA())
		{
			if (func_90(161, -1))
			{
				uParam1->f_3B = func_87(2051, Global_11486, 0);
			}
			else
			{
				uParam1->f_3B = func_87(752, Global_11486, 0);
			}
		}
	}
}

int func_87(int iParam0, int iParam1, int iParam2)//Position - 0x4945
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_88(iParam1)];
	if (unk_0x6CB99B97664C3727(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_88(var uParam0)//Position - 0x4977
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_89();
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

var func_89()//Position - 0x49AB
{
	return Global_1407E0;
}

int func_90(int iParam0, int iParam1)//Position - 0x49B7
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2705A2[iParam0 /*3*/][func_88(iParam1)];
	if (unk_0x9CADE88F210A0BAE(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_91(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x49E3
{
	int iVar0;
	
	iVar0 = func_26(iParam0);
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

void func_92(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)//Position - 0x4F2B
{
	int iVar0;
	
	iVar0 = func_26(iParam0);
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

int func_93()//Position - 0x516C
{
	func_23();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_94(int iParam0, bool bParam1)//Position - 0x5185
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_26(iParam0);
	if (func_13(iVar0) && !unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (iParam0 == unk_0xBC25C936A095B5BA())
		{
			func_95(iParam0, &(Global_19B04.f_932.f_21B.f_12A[iVar0 /*472*/]));
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

void func_95(int iParam0, var uParam1)//Position - 0x5278
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
			iVar3 = func_100(iVar0);
			if (iVar3 != 0)
			{
				Var4 = unk_0xFEBBB8B5E3A12A20(iParam0, func_100(iVar0));
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
					iVar2 = func_98(Var4, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0x1D3364A4FCD401E3(iParam0, Var4, iVar2))
						{
							unk_0xF0059F27F7BB6680(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_98(Var4, iVar1);
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
			if ((unk_0x6740839132C4BD08(iVar5, &Var7) && !func_97(Var7.f_1)) && iVar9 < 50)
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
							if (!func_96(Var8.f_3))
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

int func_96(int iParam0)//Position - 0x5502
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

int func_97(int iParam0)//Position - 0x559D
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

int func_98(int iParam0, int iParam1)//Position - 0x5711
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
				iVar1 = func_99(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < unk_0x24C19AF1AF00F6A0(iVar1))
					{
						if (unk_0x9278F82C9078D16B(iVar1, iVar2, &Var5))
						{
							if (!func_96(Var5.f_3))
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

int func_99(int iParam0, var uParam1)//Position - 0x6282
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

int func_100(int iParam0)//Position - 0x62BD
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

void func_101(int iParam0)//Position - 0x6531
{
	int iVar0;
	
	iVar0 = func_26(iParam0);
	if (func_13(iVar0) && !unk_0x36CEFBE9B745A58D(iParam0))
	{
		Global_19B04.f_932.f_21B.f_126[iVar0] = unk_0x27C402B01C926499(iParam0);
	}
}

void func_102(var uParam0, int iParam1)//Position - 0x656D
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
		if (func_106(&iVar0))
		{
			if (func_104(iVar0, &vVar1, &uVar2))
			{
				vVar1.z = (vVar1.z + 1f);
				*uParam0 = { vVar1 };
				uParam0->f_3 = uVar2;
			}
		}
		else if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, true, 0))
		{
			iVar3 = func_22();
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
		else if (func_103(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_103(vector3 vParam0, char* sParam1, vector3 vParam2)//Position - 0x6AC6
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

bool func_104(int iParam0, var uParam1, var uParam2)//Position - 0x6B0A
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
	return !func_105(*uParam1, 0f, 0f, 0f, 0);
}

bool func_105(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x71D5
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_106(var uParam0)//Position - 0x721C
{
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (func_127())
		{
			*uParam0 = func_112(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false), 6, -1, 0, 1, -1);
			if (func_111(*uParam0) && !func_107(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_107(int iParam0)//Position - 0x7277
{
	return func_108(iParam0, 0, 1);
}

int func_108(int iParam0, int iParam1, bool bParam2)//Position - 0x7287
{
	if (bParam2)
	{
		return unk_0xFA30DFD0084E92FE(Global_16B4F.f_531[iParam0], iParam1);
	}
	else if (unk_0x7AF0088ABFA713B6())
	{
		if (func_110() == 0)
		{
			return unk_0xFA30DFD0084E92FE(func_87(func_109(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xFA30DFD0084E92FE(Global_19B04.f_29C[iParam0], iParam1);
	}
	return 0;
}

int func_109(int iParam0)//Position - 0x72E7
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

int func_110()//Position - 0x75DB
{
	return Global_62BD;
}

int func_111(int iParam0)//Position - 0x75E6
{
	return func_108(iParam0, 5, 1);
}

int func_112(vector3 vParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)//Position - 0x75F6
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
		if (iParam1 == 6 || iParam1 == func_126(iVar0))
		{
			if (!bParam3 || func_125(iVar0))
			{
				fVar1 = unk_0xF0F2FC9DE291567F(vParam0, func_113(iVar0, 0), true);
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

Vector3 func_113(int iParam0, bool bParam1)//Position - 0x7698
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
			return func_124(Global_1732A);
			break;
		
		case 46:
			if (Global_183F8F != func_123())
			{
				if (func_122(Global_183F8F))
				{
					return func_115(2, 2);
				}
				else if (func_114(Global_183F8F))
				{
					return func_115(45, 3);
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

int func_114(int iParam0)//Position - 0x7C52
{
	if (iParam0 != func_123())
	{
		if ((unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 0) || unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 1)) || unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_115(int iParam0, int iParam1)//Position - 0x7CB0
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar1 = { 1000000f, 1000000f, 1000000f };
	if (Global_183F8F != func_123())
	{
		if (iParam1 == 3)
		{
			if (func_116(iParam0, 1, &vVar0, 0, 0))
			{
				vVar1 = { vVar0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (unk_0xFA30DFD0084E92FE(Global_18402B[Global_183F8F /*770*/].f_111.f_F4, 4))
			{
				if (func_116(iParam0, 1, &vVar0, 0, 0))
				{
					vVar1 = { vVar0 };
				}
			}
			else if (unk_0xFA30DFD0084E92FE(Global_18402B[Global_183F8F /*770*/].f_111.f_F4, 5))
			{
				if (func_116(iParam0, 2, &vVar0, 0, 0))
				{
					vVar1 = { vVar0 };
				}
			}
		}
	}
	return vVar1;
}

int func_116(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)//Position - 0x7D5E
{
	struct<4> Var0;
	vector3 vVar1;
	struct<4> Var2;
	vector3 vVar3;
	
	if (!func_121(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_121(iParam1, &vVar1))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var2 = { func_119(iParam0) };
	}
	else
	{
		Var2 = { func_118(iParam0) };
	}
	vVar3 = { Var2 - Var0 };
	vVar3 = { func_117(vVar3, -Var0.f_3.f_2) };
	vVar3 = { func_117(vVar3, vVar1.f_3.f_2) };
	*uParam2 = { unk_0x89D97EB4FAE4A574(vVar1, 0f, vVar3) };
	uParam2->f_3 = { Var2.f_3 };
	return 1;
}

Vector3 func_117(vector3 vParam0, float fParam1)//Position - 0x7DF3
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

struct<6> func_118(int iParam0)//Position - 0x7E37
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

struct<6> func_119(int iParam0)//Position - 0x7FBB
{
	return func_120(iParam0);
}

struct<6> func_120(int iParam0)//Position - 0x7FC9
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

int func_121(int iParam0, var uParam1)//Position - 0x8AC0
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

int func_122(int iParam0)//Position - 0x8B42
{
	if (iParam0 != func_123())
	{
		if ((unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 3) || unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 4)) || unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 5))
		{
			return 1;
		}
	}
	return 0;
}

int func_123()//Position - 0x8BA0
{
	return -1;
}

Vector3 func_124(int iParam0)//Position - 0x8BA9
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

int func_125(int iParam0)//Position - 0x8D7C
{
	return func_108(iParam0, 0, 0);
}

int func_126(int iParam0)//Position - 0x8D8C
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

bool func_127()//Position - 0x9026
{
	return Global_16B4F.f_141 > 0;
}

int func_128(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x9037
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
		if (func_27(0))
		{
			return 0;
		}
		Global_8C1D++;
		*iParam0 = Global_8C1D;
		unk_0x3D7FF8418367D451(unk_0xFC1CAE18F3ECBF2D(), 0);
		Global_4336.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x27CBA62D1F6DF074(8);
		}
		Global_8C41 = iParam2;
		Global_8C1B = *iParam0;
		Global_8C1C = iParam4;
		Global_8C1A = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_8C1A > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_8C1A)
			{
				if (Global_8C20[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_8C1B == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_28(iParam2))
		{
			return 0;
		}
		if (Global_8C1A == 8)
		{
			return 0;
		}
		Global_8C1D++;
		*iParam0 = Global_8C1D;
		Global_8C20[Global_8C1A /*4*/] = Global_8C1D;
		Global_8C20[Global_8C1A /*4*/].f_1 = iParam1;
		Global_8C20[Global_8C1A /*4*/].f_2 = iParam2;
		Global_8C20[Global_8C1A /*4*/].f_3 = 0;
		Global_8C1A++;
		if (iParam4 != 0)
		{
			func_129(iParam0, iParam4);
		}
	}
	return 2;
}

void func_129(var uParam0, int iParam1)//Position - 0x916E
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

void func_130(int iParam0, vector3 vParam1, float fParam2, int iParam3, bool bParam4)//Position - 0x91BD
{
	struct<60> Var0;
	
	if (unk_0x724D816EA203A79E(iParam0) && unk_0xE59B7F5A03335350(iParam0, 0))
	{
		if (iParam3 != 24 && iParam3 != 25)
		{
			return;
		}
		if (iParam3 == 24)
		{
			if (unk_0x724D816EA203A79E(Global_110A8.f_1E4[25]) && unk_0xE59B7F5A03335350(Global_110A8.f_1E4[25], 0))
			{
				if (Global_110A8.f_1E4[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam4)
		{
			if ((unk_0x10A01B0B02B273EF(iParam0) || unk_0x6F79ECA8C83E4357(iParam0) == joaat("bus")) || unk_0x6F79ECA8C83E4357(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_156(iParam3);
		Var0.f_9 = 49;
		Var0.f_3B = 2;
		func_14(iParam0, &Var0);
		if (func_105(vParam1, 0f, 0f, 0f, 0))
		{
			vParam1 = { unk_0x541C2AEF053615BC(iParam0, true) };
			fParam2 = unk_0x349C94FFF43E2979(iParam0);
		}
		if (iParam3 == 24)
		{
			if (unk_0x56BEECB328B6D29D(unk_0x1377080E9B0BD993()) != joaat("vehicle_gen_controller"))
			{
				Global_11484 = unk_0x56BEECB328B6D29D(unk_0x1377080E9B0BD993());
			}
		}
		func_150(iParam3, &Var0, vParam1, fParam2, func_9(iParam0));
		func_131(iParam3, iParam0, 0);
	}
}

void func_131(int iParam0, int iParam1, int iParam2)//Position - 0x92E6
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_149(&(Global_110A8.f_22B[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0xFA30DFD0084E92FE(Global_110A8.f_22B[0 /*21*/].f_9, 12) && !unk_0xFA30DFD0084E92FE(Global_110A8.f_22B[0 /*21*/].f_9, 10))
	{
		if (Global_110A8.f_22B[0 /*21*/].f_4 != unk_0x6F79ECA8C83E4357(iParam1))
		{
			return;
		}
	}
	if (Global_11433 != -1 && Global_11433 != iParam0)
	{
		return;
	}
	if (unk_0x724D816EA203A79E(iParam1))
	{
		if (unk_0xE59B7F5A03335350(iParam1, 0))
		{
			if (!unk_0x5CAE759AE8219D20(iParam1))
			{
				unk_0x77815D3407C6700D(iParam1, true, 1);
			}
			if (iParam0 == 24)
			{
				Global_19B04.f_7F22.f_12C1 = func_52();
			}
			if (iParam1 != Global_110A8.f_8B[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_148(iParam0);
					if ((unk_0x724D816EA203A79E(iVar0) && unk_0xE59B7F5A03335350(iVar0, 0)) && iParam1 != iVar0)
					{
						func_132(iVar0, 145);
					}
				}
				Global_11432 = iParam1;
				Global_11433 = iParam0;
				Global_11434 = iParam2;
			}
		}
	}
}

void func_132(int iParam0, int iParam1)//Position - 0x9403
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_133(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0x3187EF5798B5D209(iParam0, -1, 0);
		if (!unk_0x724D816EA203A79E(iVar0))
		{
			iVar0 = unk_0xE293D7F16E1815E8(iParam0, -1);
		}
		if (unk_0x724D816EA203A79E(iVar0) && !unk_0x36CEFBE9B745A58D(iVar0))
		{
			if (unk_0x6F79ECA8C83E4357(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x6F79ECA8C83E4357(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x6F79ECA8C83E4357(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_19B04.f_932.f_21B.f_10CD;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x6F79ECA8C83E4357(iParam0) == Global_19B04.f_7F22.f_13AE[iVar1 /*157*/][iVar2 /*78*/].f_42)
			{
				if (!unk_0xF1734B55490E9045(&(Global_19B04.f_7F22.f_13AE[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x3362CDE8460ED38B(unk_0x2232934AD664DD49(iParam0), &(Global_19B04.f_7F22.f_13AE[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_19B04.f_7F22.f_13AE[iVar1 /*157*/][iVar2 /*78*/].f_42 = 0;
						Global_19B04.f_7F22.f_15D8[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (unk_0x6F79ECA8C83E4357(iParam0) == Global_19B04.f_7F22.f_15E0[iVar1 /*78*/].f_42)
		{
			if (!unk_0xF1734B55490E9045(&(Global_19B04.f_7F22.f_15E0[iVar1 /*78*/].f_1)))
			{
				if (unk_0x3362CDE8460ED38B(unk_0x2232934AD664DD49(iParam0), &(Global_19B04.f_7F22.f_15E0[iVar1 /*78*/].f_1)))
				{
					Global_19B04.f_7F22.f_15E0[iVar1 /*78*/].f_42 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_19B04.f_7F22.f_15D6 = iParam1;
	Global_11431 = iParam0;
	Global_19B04.f_7F22.f_15D4 = 1;
	func_14(iParam0, &(Global_19B04.f_7F22.f_1586));
}

int func_133(int iParam0)//Position - 0x9605
{
	if ((((((((((!unk_0x724D816EA203A79E(iParam0) || !unk_0xE59B7F5A03335350(iParam0, 0)) || func_20(iParam0, 0, 0)) || func_20(iParam0, 1, 0)) || func_20(iParam0, 2, 0)) || func_9(iParam0) != 145) || func_147(iParam0)) || func_146(iParam0)) || func_145(iParam0)) || func_144(iParam0)) || !func_134(unk_0x6F79ECA8C83E4357(iParam0)))
	{
		if (func_146(iParam0))
		{
		}
		if (func_146(iParam0))
		{
		}
		if (func_20(iParam0, 0, 0))
		{
		}
		if (func_20(iParam0, 1, 0))
		{
		}
		if (func_20(iParam0, 2, 0))
		{
		}
		if (func_9(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_134(int iParam0)//Position - 0x96E2
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_135(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0xE7B3A320107C1379(iParam0) || unk_0xA19D269B4B5A1532(iParam0)) || unk_0x8C1A6E7D5F410F4A(iParam0)) || unk_0xFF2234981505F7F4(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case 1938952078:
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_135(int iParam0, bool bParam1)//Position - 0x9893
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x6067F058A4B0729F(iParam0))
	{
		return 0;
	}
	if ((((((iParam0 == joaat("dominator2") && !unk_0x7AF0088ABFA713B6()) || (iParam0 == joaat("buffalo3") && !unk_0x7AF0088ABFA713B6())) || (iParam0 == joaat("gauntlet2") && !unk_0x7AF0088ABFA713B6())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x7AF0088ABFA713B6())) || iParam0 == joaat("blista3"))
	{
		if (!func_143())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0xDF84CF7530FA6525())
		{
			if (unk_0x62A638D88F7B7D88(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0xD90F58A58682ED2F(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_142() && !func_141()) && !func_140()) && !func_139()) && !func_143())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xF49912B78E2591B6() || unk_0x8ACB0C3FACC09467()) || unk_0xF7E138CFA19B55E7())
		{
		}
		else if (!func_140())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_138(iParam0))
		{
			return 0;
		}
	}
	if (!func_136(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_136(int iParam0)//Position - 0x9A21
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_137())
	{
		return 1;
	}
	unk_0xC4F4FCDFF2D3ABE9(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0xD541643C038E7321(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_137()//Position - 0x9AED
{
	if (unk_0x8ACB0C3FACC09467())
	{
		return unk_0xC9D803F7D7E10861();
	}
	return 0;
}

int func_138(int iParam0)//Position - 0x9B04
{
	int iVar0;
	int iVar1;
	
	if (Global_262135)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0xB99C193A32DE341D();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_40001.f_1766 && !Global_40001.f_300B) && iVar1 < Global_40001.f_300C)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_40001.f_351D && iVar1 < Global_40001.f_3529)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_40001.f_3519 && iVar1 < Global_40001.f_3525)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_40001.f_351A && iVar1 < Global_40001.f_3526)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_40001.f_351B && iVar1 < Global_40001.f_3527)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_40001.f_351C && iVar1 < Global_40001.f_3528)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_40001.f_351E && iVar1 < Global_40001.f_352A)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_40001.f_351F && iVar1 < Global_40001.f_3522)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_40001.f_3520 && iVar1 < Global_40001.f_3523)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_40001.f_3521 && iVar1 < Global_40001.f_3524)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_40001.f_3F64 && iVar1 < Global_40001.f_3F41)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_40001.f_3F5F && iVar1 < Global_40001.f_3F3C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_40001.f_3F63 && iVar1 < Global_40001.f_3F40)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_40001.f_3F62 && iVar1 < Global_40001.f_3F3F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_40001.f_3F5C && iVar1 < Global_40001.f_3F39)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_40001.f_3F5D && iVar1 < Global_40001.f_3F3A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_40001.f_3F60 && iVar1 < Global_40001.f_3F3D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_40001.f_3F61 && iVar1 < Global_40001.f_3F3E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_40001.f_3F5E && iVar1 < Global_40001.f_3F3B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_40001.f_3F66 && iVar1 < Global_40001.f_3F43)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_40001.f_3F67 && iVar1 < Global_40001.f_3F44)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_40001.f_3F5B && iVar1 < Global_40001.f_3F38)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_40001.f_3F5A && iVar1 < Global_40001.f_3F37)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_40001.f_3F59 && iVar1 < Global_40001.f_3F36)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_40001.f_3F65 && iVar1 < Global_40001.f_3F42)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_40001.f_3F68 && iVar1 < Global_40001.f_3F45)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_40001.f_3F69 && iVar1 < Global_40001.f_3F46)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_40001.f_3F6A && iVar1 < Global_40001.f_3F47)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_40001.f_3F6B && iVar1 < Global_40001.f_3F48)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_40001.f_3FFC && iVar1 < Global_40001.f_4012)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_40001.f_3FFD && iVar1 < Global_40001.f_4013)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_40001.f_3FFE && iVar1 < Global_40001.f_4014)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_40001.f_3FFF && iVar1 < Global_40001.f_4015)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_40001.f_4000 && iVar1 < Global_40001.f_4016)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_40001.f_4001 && iVar1 < Global_40001.f_4017)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_40001.f_4003 && iVar1 < Global_40001.f_4018)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_40001.f_4004 && iVar1 < Global_40001.f_4019)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_40001.f_4005 && iVar1 < Global_40001.f_401A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_40001.f_4006 && iVar1 < Global_40001.f_401B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_40001.f_4007 && iVar1 < Global_40001.f_401C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_40001.f_4008 && iVar1 < Global_40001.f_401D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_40001.f_4009 && iVar1 < Global_40001.f_401E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_40001.f_400F && iVar1 < Global_40001.f_4025)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_40001.f_400C && iVar1 < Global_40001.f_4021)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_40001.f_400D && iVar1 < Global_40001.f_4022)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_40001.f_400E && iVar1 < Global_40001.f_4023)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_40001.f_4002 && iVar1 < Global_40001.f_4024)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_40001.f_4010 && iVar1 < Global_40001.f_4026)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_40001.f_400A && iVar1 < Global_40001.f_401F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_40001.f_400B && iVar1 < Global_40001.f_4020)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_40001.f_4011 && iVar1 < Global_40001.f_4027)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_40001.f_466D && iVar1 < Global_40001.f_46CF)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_40001.f_466E && iVar1 < Global_40001.f_46D0)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_40001.f_466F && iVar1 < Global_40001.f_46D1)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_40001.f_4670 && iVar1 < Global_40001.f_46D2)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_40001.f_4671 && iVar1 < Global_40001.f_46D3)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_40001.f_4672 && iVar1 < Global_40001.f_46D4)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_40001.f_4673 && iVar1 < Global_40001.f_46D5)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_40001.f_4674 && iVar1 < Global_40001.f_46D6)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_40001.f_4675 && iVar1 < Global_40001.f_46D7)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_40001.f_4676 && iVar1 < Global_40001.f_46D8)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_40001.f_4677 && iVar1 < Global_40001.f_46D9)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_40001.f_4678 && iVar1 < Global_40001.f_46DA)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_40001.f_4679 && iVar1 < Global_40001.f_46DB)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_40001.f_467A && iVar1 < Global_40001.f_46DC)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_40001.f_467B && iVar1 < Global_40001.f_46DD)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_40001.f_467C && iVar1 < Global_40001.f_46DE)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_40001.f_467D && iVar1 < Global_40001.f_46DF)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_40001.f_467E && iVar1 < Global_40001.f_46E0)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_40001.f_467F && iVar1 < Global_40001.f_46E1)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_40001.f_4680 && iVar1 < Global_40001.f_46E2)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_40001.f_4681 && iVar1 < Global_40001.f_46E3)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_40001.f_4682 && iVar1 < Global_40001.f_46E4)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_40001.f_4683 && iVar1 < Global_40001.f_46E5)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_40001.f_4684 && iVar1 < Global_40001.f_46E6)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_40001.f_4685 && iVar1 < Global_40001.f_46E7)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1234311532)
	{
		if (!Global_40001.f_4AA6 && iVar1 < Global_40001.f_4AA2)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1405937764)
	{
		if (!Global_40001.f_4AA7 && iVar1 < Global_40001.f_4AA3)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 719660200)
	{
		if (!Global_40001.f_4AA8 && iVar1 < Global_40001.f_4AA4)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -982130927)
	{
		if (!Global_40001.f_4AA9 && iVar1 < Global_40001.f_4AA5)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 917809321)
	{
		if (!Global_40001.f_4E15 && iVar1 < Global_40001.f_4E1D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 223240013)
	{
		if (!Global_40001.f_4E16 && iVar1 < Global_40001.f_4E1E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1504306544)
	{
		if (!Global_40001.f_4E17 && iVar1 < Global_40001.f_4E1F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1939284556)
	{
		if (!Global_40001.f_4E18 && iVar1 < Global_40001.f_4E20)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 159274291)
	{
		if (!Global_40001.f_4E19 && iVar1 < Global_40001.f_4E21)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 433954513)
	{
		if (!Global_40001.f_4E1A && iVar1 < Global_40001.f_4E22)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1763555241)
	{
		if (!Global_40001.f_511E && iVar1 < Global_40001.f_5132)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -749299473)
	{
		if (!Global_40001.f_512A && iVar1 < Global_40001.f_513E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -975345305)
	{
		if (!Global_40001.f_5121 && iVar1 < Global_40001.f_5135)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1700874274)
	{
		if (!Global_40001.f_512B && iVar1 < Global_40001.f_513F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -392675425)
	{
		if (!Global_40001.f_511F && iVar1 < Global_40001.f_5133)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1043222410)
	{
		if (!Global_40001.f_512F && iVar1 < Global_40001.f_5143)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1386191424)
	{
		if (!Global_40001.f_512D && iVar1 < Global_40001.f_5141)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1565978651)
	{
		if (!Global_40001.f_512E && iVar1 < Global_40001.f_5142)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1036591958)
	{
		if (!Global_40001.f_5129 && iVar1 < Global_40001.f_513D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -32878452)
	{
		if (!Global_40001.f_5130 && iVar1 < Global_40001.f_5144)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -42959138)
	{
		if (!Global_40001.f_512C && iVar1 < Global_40001.f_5140)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1984275979)
	{
		if (!Global_40001.f_5128 && iVar1 < Global_40001.f_513C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1007528109)
	{
		if (!Global_40001.f_5120 && iVar1 < Global_40001.f_5134)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1523619738)
	{
		if (!Global_40001.f_5122 && iVar1 < Global_40001.f_5136)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1392481335)
	{
		if (!Global_40001.f_5123 && iVar1 < Global_40001.f_5137)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -998177792)
	{
		if (!Global_40001.f_5124 && iVar1 < Global_40001.f_5138)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1242608589)
	{
		if (!Global_40001.f_5125 && iVar1 < Global_40001.f_5139)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1841130506)
	{
		if (!Global_40001.f_5126 && iVar1 < Global_40001.f_513A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2049897956)
	{
		if (!Global_40001.f_5127 && iVar1 < Global_40001.f_513B)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1483171323)
	{
		if (!Global_40001.f_54DF && iVar1 < Global_40001.f_54FB)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 886810209)
	{
		if (!Global_40001.f_54E0 && iVar1 < Global_40001.f_54FC)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1693015116)
	{
		if (!Global_40001.f_54E1 && iVar1 < Global_40001.f_54FD)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -692292317)
	{
		if (!Global_40001.f_54E2 && iVar1 < Global_40001.f_54FE)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1435527158)
	{
		if (!Global_40001.f_54E3 && iVar1 < Global_40001.f_54FF)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1181327175)
	{
		if (!Global_40001.f_54E4 && iVar1 < Global_40001.f_5500)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1489874736)
	{
		if (!Global_40001.f_54E5 && iVar1 < Global_40001.f_5501)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -212993243)
	{
		if (!Global_40001.f_54E6 && iVar1 < Global_40001.f_5502)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 447548909)
	{
		if (!Global_40001.f_54E7 && iVar1 < Global_40001.f_5503)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1561920505)
	{
		if (!Global_40001.f_54E8 && iVar1 < Global_40001.f_5504)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1848994066)
	{
		if (!Global_40001.f_54E9 && iVar1 < Global_40001.f_5505)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1741861769)
	{
		if (!Global_40001.f_54EA && iVar1 < Global_40001.f_5506)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1104234922)
	{
		if (!Global_40001.f_54EB && iVar1 < Global_40001.f_5507)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1871995513)
	{
		if (!Global_40001.f_54EC && iVar1 < Global_40001.f_5508)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1352136073)
	{
		if (!Global_40001.f_54ED && iVar1 < Global_40001.f_5509)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -313185164)
	{
		if (!Global_40001.f_54EE && iVar1 < Global_40001.f_550A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2079788230)
	{
		if (!Global_40001.f_54EF && iVar1 < Global_40001.f_550B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 600450546)
	{
		if (!Global_40001.f_54F0 && iVar1 < Global_40001.f_550C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -410205223)
	{
		if (!Global_40001.f_54F1 && iVar1 < Global_40001.f_550D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 867799010)
	{
		if (!Global_40001.f_54F2 && iVar1 < Global_40001.f_550E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1529242755)
	{
		if (!Global_40001.f_54F3 && iVar1 < Global_40001.f_550F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 903794909)
	{
		if (!Global_40001.f_54F4 && iVar1 < Global_40001.f_5510)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1532697517)
	{
		if (!Global_40001.f_54F5 && iVar1 < Global_40001.f_5511)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 15219735)
	{
		if (!Global_40001.f_54F6 && iVar1 < Global_40001.f_5512)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 661493923)
	{
		if (!Global_40001.f_54F7 && iVar1 < Global_40001.f_5513)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 838982985)
	{
		if (!Global_40001.f_54F8 && iVar1 < Global_40001.f_5514)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -391595372)
	{
		if (!Global_40001.f_54F9 && iVar1 < Global_40001.f_5515)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -121446169)
	{
		if (!Global_40001.f_54FA && iVar1 < Global_40001.f_5516)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1909189272)
	{
		if (!Global_40001.f_597B && iVar1 < Global_40001.f_598B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1617472902)
	{
		if (!Global_40001.f_597C && iVar1 < Global_40001.f_598C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1267543371)
	{
		if (!Global_40001.f_5980 && iVar1 < Global_40001.f_5990)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 931280609)
	{
		if (!Global_40001.f_5983 && iVar1 < Global_40001.f_5993)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1046206681)
	{
		if (!Global_40001.f_5988 && iVar1 < Global_40001.f_5998)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1259134696)
	{
		if (!Global_40001.f_5982 && iVar1 < Global_40001.f_5992)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1115909093)
	{
		if (!Global_40001.f_597A && iVar1 < Global_40001.f_598A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1031562256)
	{
		if (!Global_40001.f_5981 && iVar1 < Global_40001.f_5991)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -376434238)
	{
		if (!Global_40001.f_5987 && iVar1 < Global_40001.f_5997)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -986944621)
	{
		if (!Global_40001.f_5986 && iVar1 < Global_40001.f_5996)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1134706562)
	{
		if (!Global_40001.f_597D && iVar1 < Global_40001.f_598D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2120700196)
	{
		if (!Global_40001.f_597F && iVar1 < Global_40001.f_598F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -214906006)
	{
		if (!Global_40001.f_5989 && iVar1 < Global_40001.f_5999)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -988501280)
	{
		if (!Global_40001.f_5985 && iVar1 < Global_40001.f_5995)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1254014755)
	{
		if (!Global_40001.f_597E && iVar1 < Global_40001.f_598E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -726768679)
	{
		if (!Global_40001.f_5984 && iVar1 < Global_40001.f_5994)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1988428699)
	{
		if (!Global_40001.f_59D5 && iVar1 < Global_40001.f_59C8)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 345756458)
	{
		if (!Global_40001.f_59D6 && iVar1 < Global_40001.f_59C9)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1945374990)
	{
		if (!Global_40001.f_59DB && iVar1 < Global_40001.f_59CE)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1653666139)
	{
		if (!Global_40001.f_59DA && iVar1 < Global_40001.f_59CD)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 500482303)
	{
		if (!Global_40001.f_59D8 && iVar1 < Global_40001.f_59CB)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2044532910)
	{
		if (!Global_40001.f_59DE && iVar1 < Global_40001.f_59D1)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -638562243)
	{
		if (!Global_40001.f_59E0 && iVar1 < Global_40001.f_59D3)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1692272545)
	{
		if (!Global_40001.f_59E1 && iVar1 < Global_40001.f_59D4)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2069146067)
	{
		if (!Global_40001.f_59DF && iVar1 < Global_40001.f_59D2)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -420911112)
	{
		if (!Global_40001.f_59D7 && iVar1 < Global_40001.f_59CA)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 321186144)
	{
		if (!Global_40001.f_59D9 && iVar1 < Global_40001.f_59CC)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -54332285)
	{
		if (!Global_40001.f_59DD && iVar1 < Global_40001.f_59D0)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -307958377)
	{
		if (!Global_40001.f_59DC && iVar1 < Global_40001.f_59CF)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_139()//Position - 0xB5AB
{
	return 0;
}

int func_140()//Position - 0xB5B4
{
	return 1;
}

int func_141()//Position - 0xB5BD
{
	return 1;
}

int func_142()//Position - 0xB5C6
{
	if (unk_0x7B2F21BFE86AEB61(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_143()//Position - 0xB5DF
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

int func_144(int iParam0)//Position - 0xB69A
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x6F79ECA8C83E4357(iParam0);
	sVar1 = unk_0x2232934AD664DD49(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x3362CDE8460ED38B(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_135(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_145(int iParam0)//Position - 0xB6E0
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x724D816EA203A79E(Global_1615D[iVar0]))
		{
			if (Global_1615D[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_146(int iParam0)//Position - 0xB71B
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(iParam0) && unk_0xE59B7F5A03335350(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x724D816EA203A79E(Global_1613F[iVar0]) && unk_0xE59B7F5A03335350(Global_1613F[iVar0], 0))
			{
				if (Global_1613F[iVar0] == iParam0 && unk_0x6F79ECA8C83E4357(Global_1613F[iVar0]) == unk_0x6F79ECA8C83E4357(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_147(int iParam0)//Position - 0xB797
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(Global_110A8.f_1E4[24]))
	{
		if (iParam0 == Global_110A8.f_1E4[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x724D816EA203A79E(Global_110A8.f_1E4[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_110A8.f_1E4[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_148(int iParam0)//Position - 0xB87F
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_110A8.f_8B[iParam0];
}

int func_149(var uParam0, int iParam1)//Position - 0xB89B
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_A = 0;
	uParam0->f_B = 0;
	uParam0->f_C = 145;
	uParam0->f_D = -1;
	uParam0->f_E = 0;
	uParam0->f_F = { 0f, 0f, 0f };
	uParam0->f_12 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_11(0, 1);
			uParam0->f_C = 0;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_11(0, 1);
			uParam0->f_C = 0;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_11(1, 1);
			uParam0->f_C = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_11(1, 2);
			uParam0->f_C = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 19);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_11(1, 1);
			uParam0->f_C = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_11(1, 2);
			uParam0->f_C = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 19);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_11(2, 1);
			uParam0->f_C = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_11(2, 1);
			uParam0->f_C = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_11(2, 1);
			uParam0->f_C = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_E = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_C = 0;
			uParam0->f_D = 359;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_E = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_C = 1;
			uParam0->f_D = 359;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_E = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_C = 2;
			uParam0->f_D = 359;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_E = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_C = 0;
			uParam0->f_D = 356;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 22);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_E = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_C = 1;
			uParam0->f_D = 356;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 22);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_E = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_C = 2;
			uParam0->f_D = 356;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 22);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_E = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_C = 0;
			uParam0->f_D = 360;
			uParam0->f_F = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_12 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_E = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_C = 1;
			uParam0->f_D = 360;
			uParam0->f_F = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_12 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_E = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_C = 2;
			uParam0->f_D = 360;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_E = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = 0;
			uParam0->f_D = 357;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 24);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_E = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = 1;
			uParam0->f_D = 357;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 24);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_E = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = 2;
			uParam0->f_D = 357;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 24);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_E = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = (0 + iVar1);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 27);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 24);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_E = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = (0 + iVar1);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 27);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 24);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_E = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = (0 + iVar1);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 27);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 24);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_E = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 11);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 13);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_E = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 11);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 13);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_A = 126;
			uParam0->f_B = 126;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 9);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_A = 157;
			uParam0->f_B = 157;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 9);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = 1938952078;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_D = 308;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 2);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 30);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_D = 404;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 2);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 22);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_143())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_D = 401;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 13);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 2);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 1);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_143())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_D = 401;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 13);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 2);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 1);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_D = 308;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 30);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 30);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0xFA30DFD0084E92FE(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_19B04.f_7F22.f_45[uParam0->f_E /*78*/].f_42;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_105(Global_19B04.f_7F22.f_748[uParam0->f_E /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_19B04.f_7F22.f_748[uParam0->f_E /*3*/] };
		}
		if (Global_19B04.f_7F22.f_78E[uParam0->f_E] != -1f)
		{
			uParam0->f_3 = Global_19B04.f_7F22.f_78E[uParam0->f_E];
		}
	}
	if (unk_0xFA30DFD0084E92FE(uParam0->f_9, 19))
	{
		if (!func_105(Global_19B04.f_932.f_21B.f_DF0[1 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_19B04.f_932.f_21B.f_DF0[1 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_19B04.f_932.f_21B.f_E05[1 /*4*/][uParam0->f_C];
		}
	}
	else if (unk_0xFA30DFD0084E92FE(uParam0->f_9, 20))
	{
		if (!func_105(Global_19B04.f_932.f_21B.f_DF0[0 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_19B04.f_932.f_21B.f_DF0[0 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_19B04.f_932.f_21B.f_E05[0 /*4*/][uParam0->f_C];
		}
	}
	return iVar0;
}

void func_150(int iParam0, var uParam1, vector3 vParam2, float fParam3, int iParam4)//Position - 0xCF97
{
	if (func_149(&(Global_110A8.f_22B[0 /*21*/]), iParam0))
	{
		if (unk_0xFA30DFD0084E92FE(Global_110A8.f_22B[0 /*21*/].f_9, 10))
		{
			func_155(iParam0);
			func_154(uParam1, &(Global_19B04.f_7F22.f_45[Global_110A8.f_22B[0 /*21*/].f_E /*78*/]));
			if (unk_0xFA30DFD0084E92FE(Global_110A8.f_22B[0 /*21*/].f_9, 11))
			{
				Global_19B04.f_7F22.f_748[Global_110A8.f_22B[0 /*21*/].f_E /*3*/] = { vParam2 };
				Global_19B04.f_7F22.f_78E[Global_110A8.f_22B[0 /*21*/].f_E] = fParam3;
			}
			else
			{
				Global_19B04.f_7F22.f_748[Global_110A8.f_22B[0 /*21*/].f_E /*3*/] = { 0f, 0f, 0f };
				Global_19B04.f_7F22.f_78E[Global_110A8.f_22B[0 /*21*/].f_E] = -1f;
			}
			Global_19B04.f_7F22.f_7A6[Global_110A8.f_22B[0 /*21*/].f_E] = iParam4 + 1;
			func_151(iParam0, 1);
		}
	}
}

void func_151(int iParam0, bool bParam1)//Position - 0xD096
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_153(iParam0, 0))
		{
			func_152(iParam0, 1, 0);
			func_152(iParam0, 2, 0);
			func_152(iParam0, 3, 0);
			func_152(iParam0, 4, 0);
			func_152(iParam0, 0, 1);
			Global_110A8[iParam0] = 1;
		}
	}
	else
	{
		func_152(iParam0, 0, 0);
	}
}

void func_152(int iParam0, int iParam1, bool bParam2)//Position - 0xD0F3
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xF0059F27F7BB6680(&(Global_19B04.f_7F22[iParam0]), iParam1);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_7F22[iParam0]), iParam1);
	}
}

bool func_153(int iParam0, int iParam1)//Position - 0xD12E
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_19B04.f_7F22[iParam0], iParam1);
}

void func_154(var uParam0, var uParam1)//Position - 0xD151
{
	uParam1->f_42 = uParam0->f_42;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_3B = { uParam0->f_3B };
	uParam1->f_3E = uParam0->f_3E;
	uParam1->f_3F = uParam0->f_3F;
	uParam1->f_40 = uParam0->f_40;
	uParam1->f_41 = uParam0->f_41;
	uParam1->f_4D = uParam0->f_4D;
	uParam1->f_43 = uParam0->f_43;
	uParam1->f_45 = uParam0->f_45;
	uParam1->f_44 = uParam0->f_44;
	uParam1->f_47 = uParam0->f_47;
	uParam1->f_48 = uParam0->f_48;
	uParam1->f_49 = uParam0->f_49;
	uParam1->f_4A = uParam0->f_4A;
	uParam1->f_4B = uParam0->f_4B;
	uParam1->f_4C = uParam0->f_4C;
}

void func_155(int iParam0)//Position - 0xD21D
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_149(&(Global_110A8.f_22B[0 /*21*/]), iParam0))
	{
		if (unk_0x724D816EA203A79E(Global_110A8.f_8B[iParam0]))
		{
			unk_0x77815D3407C6700D(Global_110A8.f_8B[iParam0], true, 1);
			unk_0x1E7A09C1710FB071(&(Global_110A8.f_8B[iParam0]));
			Global_110A8.f_8B[iParam0] = 0;
		}
		if (unk_0xFA30DFD0084E92FE(Global_110A8.f_22B[0 /*21*/].f_9, 13))
		{
			func_151(iParam0, 0);
		}
	}
}

void func_156(int iParam0)//Position - 0xD297
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_155(iParam0);
	func_151(iParam0, 0);
}

void func_157()//Position - 0xD2BE
{
	Global_4336.f_6 = 1;
}

void func_158()//Position - 0xD2CC
{
	int iVar0;
	
	if (!unk_0x724D816EA203A79E(iLocal_29))
	{
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), vLocal_32) < 2500f)
			{
				iLocal_29 = unk_0x3E12B546F3F2597A();
				if (unk_0x724D816EA203A79E(iLocal_29))
				{
					iVar0 = unk_0x6F79ECA8C83E4357(iLocal_29);
					if (iVar0 == joaat("dune"))
					{
					}
				}
			}
		}
	}
}

int func_159()//Position - 0xD326
{
	return joaat("dune");
}

void func_160(bool bParam0)//Position - 0xD333
{
	unk_0x2CA123B0622F495C(joaat("dune"));
	if (unk_0x724D816EA203A79E(iLocal_44))
	{
		if (bParam0)
		{
			unk_0xCF6040807CC0E4A5(&iLocal_44);
		}
		else
		{
			unk_0x1E7A09C1710FB071(&iLocal_44);
		}
	}
}

int func_161()//Position - 0xD361
{
	if (func_27(9))
	{
		if (unk_0xB731B8C5BCE89836(joaat("trevor2")) == 1)
		{
			if (!iLocal_36[0])
			{
				iLocal_36[0] = 1;
			}
			return 0;
		}
		if (unk_0xB731B8C5BCE89836(joaat("finale_heist2b")) == 1)
		{
			if (!iLocal_36[1])
			{
				iLocal_36[1] = 1;
			}
			return 0;
		}
		if (unk_0xB731B8C5BCE89836(joaat("traffick_air")) == 1)
		{
			if (!iLocal_36[2])
			{
				iLocal_36[2] = 1;
			}
			return 0;
		}
		if (unk_0xB731B8C5BCE89836(joaat("traffick_ground")) == 1)
		{
			if (!iLocal_36[3])
			{
				iLocal_36[3] = 1;
			}
			return 0;
		}
		if (Global_16B3D)
		{
			return 0;
		}
		if (iLocal_33 != -1)
		{
			return 0;
		}
		if (func_183() == 309)
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

void func_162(var uParam0, int iParam1)//Position - 0xD41A
{
	func_163(uParam0, iParam1);
}

void func_163(var uParam0, var uParam1)//Position - 0xD42A
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_164(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0xD43B
{
	func_165(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_165(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0xD45C
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
		func_166();
	}
}

void func_166()//Position - 0xD62F
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

bool func_167(var uParam0, int iParam1)//Position - 0xD74F
{
	return (uParam0 && iParam1) != 0;
}

void func_168(int iParam0)//Position - 0xD75E
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	
	bVar0 = false;
	if (iLocal_39 != 9)
	{
		if (!Global_19B04.f_4DF2.f_E)
		{
			func_1(105, 1, 0);
			Global_19B04.f_4DF2.f_E = 1;
			bVar0 = true;
		}
		else
		{
			bVar0 = true;
		}
	}
	else
	{
		func_1(105, 0, 0);
		Global_19B04.f_4DF2.f_E = 0;
	}
	if (iLocal_39 != 1 && iLocal_39 != 8)
	{
		if (func_161() && !*iParam0)
		{
			func_169(0);
			iLocal_39 = 1;
		}
	}
	switch (iLocal_39)
	{
		case 0:
			iLocal_39 = 1;
			break;
		
		case 1:
			if (!func_161())
			{
				if (fLocal_31 < 50625f)
				{
					iLocal_39 = 2;
				}
				else if (bLocal_35)
				{
					iLocal_39 = 2;
				}
			}
			break;
		
		case 2:
			unk_0xF243B7A14FCFD0F4(joaat("cuban800"));
			iLocal_39 = 3;
			break;
		
		case 3:
			unk_0xF243B7A14FCFD0F4(joaat("cuban800"));
			if (unk_0xD6513D668481290A(joaat("cuban800")))
			{
				if (!unk_0x724D816EA203A79E(iLocal_40))
				{
					unk_0xEDAD35A0D81ED3FB(vLocal_42, 8f, 0, 0, 0, 0, false, 0);
					iLocal_40 = unk_0x61C05BF08A1E0EFE(joaat("cuban800"), vLocal_42, 25.29f, 1, 1, 0);
					unk_0x2CA123B0622F495C(joaat("cuban800"));
					unk_0x6012A6A4F2950585(iLocal_40, 2);
					func_162(&(Global_19B04.f_4DF2), 128);
					iLocal_39 = 4;
				}
				else
				{
					iLocal_39 = 4;
				}
			}
			break;
		
		case 4:
			if (unk_0x724D816EA203A79E(iLocal_40))
			{
				if (unk_0x1D403DFADBC2DE3C(iLocal_40, 0) || unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
				{
					iLocal_39 = 9;
					return;
				}
			}
			if (func_27(9))
			{
				if (unk_0xB731B8C5BCE89836(joaat("traffick_ground")) == 1)
				{
					if (!unk_0x1D403DFADBC2DE3C(iLocal_40, 0))
					{
						unk_0xD421BC740C5340C3(iLocal_40, 2);
						return;
					}
				}
			}
			else if (unk_0xB731B8C5BCE89836(joaat("traffick_ground")) == 0)
			{
				if (!unk_0x1D403DFADBC2DE3C(iLocal_40, 0))
				{
					unk_0xD421BC740C5340C3(iLocal_40, 1);
				}
			}
			if (!bLocal_35)
			{
				if (fLocal_31 >= 50625f && !*iParam0)
				{
					func_169(0);
					iLocal_39 = 1;
					return;
				}
			}
			if (!bVar0 && !*iParam0)
			{
				if (!iLocal_41)
				{
					if (unk_0x5237AF95232D78C5(iLocal_28, 0))
					{
						iVar1 = unk_0xD20EBB97FE8799ED(iLocal_28);
						if (iVar1 == iLocal_40)
						{
							iLocal_41 = 1;
							unk_0x1E7A09C1710FB071(&iLocal_40);
							iLocal_39 = 9;
						}
					}
				}
			}
			if (*iParam0)
			{
				unk_0xBD53A029D0155A42(iLocal_28, iLocal_40, -1);
			}
			if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0) && !unk_0x1D403DFADBC2DE3C(iLocal_40, 0))
			{
				if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_40, 1))
				{
					func_157();
				}
			}
			if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
			{
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
				{
					iVar2 = unk_0xD20EBB97FE8799ED(unk_0xBC25C936A095B5BA());
					if (iVar2 == iLocal_40)
					{
						unk_0x63831D2D5110C305("Traffick_Air");
						if (unk_0x724D816EA203A79E(iLocal_29) && !unk_0x1D403DFADBC2DE3C(iLocal_29, 0))
						{
							if (unk_0x6F79ECA8C83E4357(iLocal_29) != joaat("dune") && unk_0x6F79ECA8C83E4357(iLocal_29) != joaat("cuban800"))
							{
								if (!unk_0x0C265B3C448E6954(iLocal_29, 2137.12f, 4799.97f, 39.67854f, 2116.64f, 4790.417f, 45.45295f, 25f, 0, true, 0))
								{
									func_130(iLocal_29, 2142.245f, 4823.463f, 40.2769f, 118.4428f, 24, 0);
								}
							}
							else if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
							{
								unk_0xE5CDD8C2A7508295(iLocal_29);
							}
						}
						iLocal_39 = 6;
					}
				}
			}
			break;
		
		case 6:
			if (unk_0xACE95AD318CE412B("Traffick_Air"))
			{
				iVar3 = 0;
				if (*iParam0)
				{
					iVar3 = 1;
				}
				else
				{
					iVar3 = func_128(&iLocal_33, 6, 9, 0, 0);
					iLocal_37 = 1;
				}
				if (iVar3 == 1)
				{
					if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
					{
						unk_0xA98B19EC1C93FC3C(unk_0xB5CEFD608600A09F());
					}
					if (!*iParam0)
					{
						func_81(unk_0x1377080E9B0BD993(), 0);
					}
					iLocal_30 = SYSTEM::START_NEW_SCRIPT("Traffick_Air", 23500);
					func_80(15);
					unk_0x91DEC7187FA01089("Traffick_Air");
					unk_0x1E7A09C1710FB071(&iLocal_40);
					if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
					{
						if (Global_90C1 == 1)
						{
							func_71(unk_0xBC25C936A095B5BA());
						}
					}
					iLocal_41 = 0;
					iLocal_39 = 7;
				}
				else if (iVar3 == 0)
				{
					iLocal_37 = 0;
					func_169(0);
					iLocal_39 = 9;
				}
			}
			break;
		
		case 7:
			if (!unk_0x3C406FC829C1E14A(iLocal_30))
			{
				if (func_167(Global_195BF, 1))
				{
					iLocal_39 = 8;
				}
				else
				{
					func_70(&iLocal_33);
					func_53();
					uVar4 = func_52();
					func_44(&uVar4, 0, 0, 3, 0, 0, 0);
					Global_19B04.f_4DF2.f_B = uVar4;
					func_1(105, 0, 0);
					Global_19B04.f_4DF2.f_E = 0;
					iLocal_39 = 9;
				}
				*iParam0 = 0;
				func_42(&Global_195BF, 1);
			}
			break;
		
		case 8:
			if (Global_16B1B == 10)
			{
				if (Global_16B3D)
				{
					*iParam0 = 1;
					if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
					{
						if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
						{
							unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), 2136.446f, 4791.483f, 39.9702f, 1, 0, 0, 1);
						}
					}
					unk_0xF243B7A14FCFD0F4(joaat("cuban800"));
					unk_0x63831D2D5110C305("Traffick_Air");
					if (unk_0xD6513D668481290A(joaat("cuban800")))
					{
						unk_0xEDAD35A0D81ED3FB(vLocal_42, 8f, 0, 0, 0, 0, false, 0);
						iLocal_40 = unk_0x61C05BF08A1E0EFE(joaat("cuban800"), vLocal_42, 25.29f, 1, 1, 0);
						unk_0x2CA123B0622F495C(joaat("cuban800"));
						iLocal_39 = 3;
					}
				}
				else
				{
					*iParam0 = 0;
					iLocal_39 = 1;
				}
			}
			else if (Global_16B1B == 13)
			{
				func_70(&iLocal_33);
				func_53();
				*iParam0 = 0;
				iLocal_39 = 1;
			}
			break;
		
		case 9:
			if (fLocal_31 >= 50625f && func_31(Global_19B04.f_4DF2.f_B))
			{
				func_169(0);
				iLocal_39 = 1;
			}
			break;
		
		default:
			break;
	}
}

void func_169(bool bParam0)//Position - 0xDCA8
{
	unk_0x2CA123B0622F495C(joaat("cuban800"));
	if (unk_0x724D816EA203A79E(iLocal_40))
	{
		if (bParam0)
		{
			unk_0xCF6040807CC0E4A5(&iLocal_40);
		}
		else
		{
			unk_0x1E7A09C1710FB071(&iLocal_40);
		}
	}
	if (func_167(Global_19B04.f_4DF2, 128))
	{
		func_42(&(Global_19B04.f_4DF2), 128);
	}
	iLocal_41 = 0;
}

int func_170()//Position - 0xDCF6
{
	if (!func_181())
	{
		return 0;
	}
	if (!iLocal_37)
	{
		if (func_183() == 309)
		{
			return 1;
		}
		if (!func_28(9))
		{
			return 0;
		}
	}
	if (unk_0xB731B8C5BCE89836(joaat("traffick_ground")) == 1 || unk_0xB731B8C5BCE89836(joaat("traffick_air")) == 1)
	{
		return 1;
	}
	iLocal_28 = unk_0xBC25C936A095B5BA();
	if (unk_0x1D403DFADBC2DE3C(iLocal_28, 0))
	{
	}
	if (func_180())
	{
		return 1;
	}
	if (func_22() != 2)
	{
		return 0;
	}
	if (!func_174(6))
	{
		if (unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA()))
		{
			bLocal_38 = true;
		}
		if (!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()))
		{
			bLocal_38 = true;
		}
		if (unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0))
		{
		}
		if (!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()))
		{
		}
		if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0)
		{
		}
		if (unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
		{
		}
		if (unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA()))
		{
		}
		if (unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA()))
		{
		}
		if (unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()))
		{
		}
		if (unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1))
		{
		}
		if (unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F()))
		{
		}
		if (Global_1974B)
		{
		}
		if (Global_62BF)
		{
		}
		if (func_173())
		{
		}
		if (func_172(8, -1))
		{
		}
		if (func_171())
		{
			return 1;
		}
		return 0;
	}
	else
	{
		bLocal_38 = false;
	}
	return 1;
}

int func_171()//Position - 0xDE38
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

bool func_172(int iParam0, int iParam1)//Position - 0xDE62
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

bool func_173()//Position - 0xDE9D
{
	return Global_140856;
}

int func_174(int iParam0)//Position - 0xDEA9
{
	int iVar0;
	
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				iVar0 = func_22();
				if (!func_13(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_179()) || Global_1974B) || Global_62BF) || func_173()) || func_172(8, -1)) || func_127()) || func_178()) || func_171()) || func_177()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1) || func_179()) || Global_62BF) || func_173()) || func_172(8, -1)) || func_171()) || func_127()) || func_178()) || func_177()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_179()) || Global_1974B) || Global_62BF) || func_173()) || func_172(8, -1)) || func_171()) || func_127()) || func_178()) || func_177()) || Global_19B04.f_1DEB.f_397[iVar0] == 5) || Global_8E64 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_179()) || Global_1974B) || Global_62BF) || func_173()) || func_172(8, -1)) || func_127()) || func_178()) || func_177()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_179() || unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0) || func_172(8, -1)) || func_177()) || func_176()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_172(8, -1) || func_127()) || func_178()) || func_176()) || func_175())
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
							if ((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || func_179()) || Global_62BF) || func_173()) || func_172(8, -1)) || func_178()) || func_171()) || func_177()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || !unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) || !unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F())) || !unk_0x726D9204B160D23E()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || func_179()) || func_178()) || Global_1974B) || Global_62BF) || func_173()) || Global_90C1) || func_172(8, -1)) || func_171()) || func_176()) || func_177()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || !unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) || !unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F())) || !unk_0x726D9204B160D23E()) || unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0)) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1)) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0x9273B3557334635D(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || func_179()) || Global_1974B) || Global_62BF) || func_173()) || func_172(8, -1)) || func_171()) || func_176()) || func_127()) || func_178()) || func_177())
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

var func_175()//Position - 0xE5C6
{
	return Global_16B42.f_1;
}

int func_176()//Position - 0xE5D4
{
	if (Global_15FA6 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_147B0[Global_15FA6 /*34*/].f_F, 13);
	}
	return 0;
}

int func_177()//Position - 0xE5FA
{
	if (unk_0xB731B8C5BCE89836(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_178()//Position - 0xE614
{
	return Global_16B4F.f_142 > 0;
}

int func_179()//Position - 0xE625
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		return Global_161D2.f_2C == 1;
	}
	return 0;
}

int func_180()//Position - 0xE641
{
	if (((Global_16B1B == 13 || Global_16B1B == 10) || Global_16B1B == 11) || Global_16B1B == 12)
	{
		return 0;
	}
	return 1;
}

int func_181()//Position - 0xE67F
{
	if (Global_19B04.f_2360)
	{
		return (func_182(0, 15) && func_182(0, 16));
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_182(int iParam0, int iParam1)//Position - 0xE6AF
{
	bool bVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	bVar0 = unk_0xFA30DFD0084E92FE(Global_19B04.f_2360.f_63.f_DB[iParam0], iParam1);
	return bVar0;
}

int func_183()//Position - 0xE6FC
{
	if (unk_0x7930B3E9C919E90F())
	{
		return Global_163FA;
	}
	if (func_177())
	{
		return Global_163FA;
	}
	return 318;
}

void func_184()//Position - 0xE723
{
	if (!iLocal_58)
	{
		iLocal_57 = unk_0x1DAA351326EA3537(Vector(40.073f, 4788.559f, 2157.109f) - Vector(25f, 25f, 25f), Vector(40.073f, 4788.559f, 2157.109f) + Vector(25f, 25f, 25f), 0, 1, 1, 1);
		iLocal_58 = 1;
	}
}

int func_185(int iParam0)//Position - 0xE77C
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

void func_186()//Position - 0xE7D6
{
	if (iLocal_57 != 0)
	{
		unk_0x483687B0FCA5415A(iLocal_57, 0);
	}
	func_169(1);
	func_160(1);
	func_189();
	func_187();
	unk_0x95E4B6F3ED223F5A();
}

void func_187()//Position - 0xE801
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_15FB1[iVar0 /*17*/] && !Global_15FB1[iVar0 /*17*/].f_1)
		{
			if (Global_15FB1[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_15FB1[iVar0 /*17*/].f_5 != 88 && Global_15FB1[iVar0 /*17*/].f_5 != 89) && Global_15FB1[iVar0 /*17*/].f_5 != 92)
				{
					func_188(Global_15FB1[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_188(int iParam0, bool bParam1)//Position - 0xE888
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_1542D[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_1542D[iParam0 /*2*/] = 0;
	}
}

void func_189()//Position - 0xE8C6
{
	int iVar0;
	
	iLocal_34 = 0;
	unk_0x5357DC61899A5365(joaat("weapon_combatpistol"));
	unk_0x5357DC61899A5365(joaat("weapon_smg"));
	unk_0x5357DC61899A5365(joaat("weapon_stickybomb"));
	unk_0x5357DC61899A5365(joaat("weapon_assaultshotgun"));
	unk_0x5357DC61899A5365(joaat("weapon_rpg"));
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0xA901403F1DB7A780(uLocal_50[iVar0]))
		{
			unk_0x9680DF46F29C0428(uLocal_50[iVar0]);
		}
		if (unk_0x724D816EA203A79E(uLocal_49[iVar0]))
		{
			unk_0xA35241BCE4C1A24B(&(uLocal_49[iVar0]));
		}
		iVar0++;
	}
}

