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
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	float fLocal_16 = 0f;
	float fLocal_17[8] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_18 = 0f;
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
	fLocal_16 = -99f;
	fLocal_18 = -1f;
	unk_0xC1A27D367CCA8C15();
	if (unk_0xE8A79675302ED812(32))
	{
		func_31();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		func_30(0);
		func_29();
		func_22();
		func_19();
		func_14();
		func_2();
		iLocal_13++;
		if (iLocal_13 >= 16)
		{
			iLocal_13 = 0;
		}
		iLocal_14++;
		if (iLocal_14 >= 16)
		{
			iLocal_14 = 0;
		}
		iLocal_15++;
		if (iLocal_15 >= 5)
		{
			iLocal_15 = 0;
		}
		if (!func_1())
		{
			func_31();
		}
	}
}

int func_1()//Position - 0xA6
{
	if (Global_909F)
	{
		return 1;
	}
	if (unk_0xEF0E25DA0CB6E8FF(Global_90A0))
	{
		return 1;
	}
	if (unk_0xB731B8C5BCE89836(joaat("drunk")) > 0)
	{
		return 1;
	}
	if (Global_8FD1 > 0)
	{
		return 1;
	}
	return 0;
}

void func_2()//Position - 0xE3
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	bool bVar8;
	
	if (!Global_909F)
	{
		return;
	}
	iVar1 = unk_0x105601648511CC64();
	if (Global_90A1 > iVar1 || Global_90A1 == -1)
	{
		if (unk_0x7930B3E9C919E90F())
		{
			return;
		}
		iVar2 = func_13();
		iVar0 = (fLocal_17 - 1);
		while (iVar0 >= 1)
		{
			fLocal_17[iVar0] = fLocal_17[(iVar0 - 1)];
			iVar0 = (iVar0 + -1);
		}
		fLocal_17[0] = iVar2;
		iVar4 = 0;
		iVar0 = 0;
		while (iVar0 < fLocal_17)
		{
			fVar3 = (fVar3 + fLocal_17[iVar0]);
			iVar4++;
			iVar0++;
		}
		fVar3 = (fVar3 / IntToFloat(iVar4));
		fVar5 = func_8();
		if (Global_90A4 != Global_90A5)
		{
			fVar6 = (Global_90A5 - Global_90A4);
			Global_90A4 = (Global_90A4 + (fVar6 * 0.1f));
			if (unk_0x357058E632979E65((Global_90A4 - Global_90A5)) < 0.01f)
			{
				Global_90A4 = Global_90A5;
			}
		}
		if (!unk_0x77B12D37D510E10B())
		{
			unk_0x1683310AC27891EC("DRUNK_SHAKE", ((Global_90A4 * fVar3) * fVar5));
		}
		if ((unk_0x105601648511CC64() % 100) == 0)
		{
			if (Global_90A1 == -1)
			{
			}
			else
			{
				if (fLocal_18 == -1f)
				{
					fLocal_18 = fVar3;
				}
				unk_0xC7B707F8F56F2EAA(((Global_90A4 * fVar3) * fVar5));
				unk_0xC0231BA8D252A9AE(((Global_90A3 * fVar3) * fVar5));
				fLocal_18 = fVar3;
			}
		}
		if (((Global_90A3 * fVar3) * fVar5) < 1f)
		{
			unk_0x07A21648E1E26132(((Global_90A3 * fVar3) * fVar5));
		}
		else
		{
			unk_0x07A21648E1E26132(1f);
		}
		if (!unk_0xBF541DFAF847A0E9())
		{
			unk_0x07B86F728B9A5E4A("DRUNK_SHAKE", (((Global_90A4 * Global_909E) * fVar3) * fVar5));
		}
		unk_0x3B35C0FF76598EE9((((Global_90A4 * Global_909E) * fVar3) * fVar5));
		if (unk_0xEF0E25DA0CB6E8FF(Global_90A0))
		{
			if (unk_0xA3AE65489EB30BF4(Global_90A0))
			{
				unk_0xCE33D5EFE2BDE6EF(Global_90A0, ((Global_90A4 * fVar3) * fVar5));
			}
		}
		if (!unk_0xF1734B55490E9045(&Global_90BB) && !unk_0xF1734B55490E9045(&Global_90AB))
		{
			unk_0xD6423910AAD8A379(&Global_90AB);
			StringCopy(&Global_90BB, "", 16);
		}
		unk_0x86B38FBE5E57D36F();
		if (Global_90A6 > 0f)
		{
			if (fLocal_16 != Global_90A6)
			{
				if (unk_0x68A80623278A92F5() != -1)
				{
				}
				else if (!unk_0x98D18905BF723B99())
				{
					unk_0x62B7B978A1C28130(&Global_90A7, 15f);
					fLocal_16 = Global_90A6;
				}
			}
			else
			{
				if (unk_0x68A80623278A92F5() != -1 && unk_0xAF37936E3740DA19() != -1)
				{
					fLocal_16 = -99f;
				}
				unk_0xE752383E5104F3D0(2);
				iVar7 = (Global_90A1 - iVar1);
				if (iVar7 <= (Global_90A2 / 2))
				{
					bVar8 = false;
					if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
					{
						if (unk_0x8C2668F45F2BB3F2(unk_0xBC25C936A095B5BA()))
						{
							bVar8 = true;
						}
					}
					if (func_6(unk_0xBC25C936A095B5BA()))
					{
						Global_90A1 += 1000;
					}
					else if (bVar8)
					{
						Global_90A1 += 1000;
					}
					else if (unk_0x68A80623278A92F5() != -1)
					{
						Global_90A1 += 1000;
					}
					else if (func_5())
					{
						Global_90A1 += 1000;
					}
					else
					{
						if (unk_0xAF37936E3740DA19() != -1)
						{
							unk_0xC16E5B55E13BA29C((SYSTEM::TO_FLOAT((Global_90A2 / 2)) / 1000f));
						}
						fLocal_16 = -99f;
						Global_90A6 = 0f;
						StringCopy(&Global_90A7, "", 16);
					}
				}
			}
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 < fLocal_17)
	{
		fLocal_17[iVar0] = 0f;
		iVar0++;
	}
	fLocal_18 = -1f;
	fLocal_16 = -99f;
	func_3(1);
	iLocal_12 = 1;
}

void func_3(bool bParam0)//Position - 0x3E0
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
	func_4();
}

void func_4()//Position - 0x4BA
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

bool func_5()//Position - 0x4EC
{
	return Global_262336;
}

int func_6(int iParam0)//Position - 0x4F8
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_7(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_7(int iParam0)//Position - 0x519
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

float func_8()//Position - 0x562
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = 0.1f;
	iVar1 = func_12(unk_0xBC25C936A095B5BA());
	iVar2 = func_9(unk_0xBC25C936A095B5BA());
	if (iVar2 == 0)
	{
		if (iVar1 == 0)
		{
			fVar0 = 0.1f;
		}
		else
		{
			fVar0 = (SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(10));
			if (fVar0 > 1f)
			{
				fVar0 = 1f;
			}
		}
	}
	else if (iVar2 == 0)
	{
		fVar0 = 0.1f;
	}
	else
	{
		fVar0 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(5));
		if (fVar0 > 1f)
		{
			fVar0 = 1f;
		}
	}
	return fVar0;
}

int func_9(int iParam0)//Position - 0x5E1
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 0;
	}
	iVar0 = func_11(iParam0);
	iVar1 = func_10(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_8FEC[iVar1 /*5*/].f_4;
}

int func_10(int iParam0)//Position - 0x624
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_8FEC[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_11(int iParam0)//Position - 0x654
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

int func_12(int iParam0)//Position - 0x695
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 0;
	}
	iVar0 = func_11(iParam0);
	iVar1 = func_10(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_8FEC[iVar1 /*5*/].f_3;
}

float func_13()//Position - 0x6D8
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = unk_0x105601648511CC64();
	fVar1 = 1f;
	iVar2 = (Global_90A1 - iVar0);
	if (iVar2 <= Global_90A2)
	{
		if (Global_90A1 != -1)
		{
			fVar1 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(Global_90A2));
		}
	}
	return fVar1;
}

void func_14()//Position - 0x712
{
	if (Global_8FD2[iLocal_15 /*5*/] == 0)
	{
		func_15(iLocal_15);
	}
}

void func_15(int iParam0)//Position - 0x72B
{
	int iVar0;
	struct<5> Var1;
	
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (unk_0x1D403DFADBC2DE3C(Global_8FD2[iParam0 /*5*/].f_1, 0))
	{
		func_18(iParam0);
		return;
	}
	if (func_6(Global_8FD2[iParam0 /*5*/].f_1))
	{
		func_18(iParam0);
		return;
	}
	if (!unk_0xACE95AD318CE412B("drunk"))
	{
		unk_0x63831D2D5110C305("drunk");
		return;
	}
	iVar0 = func_17();
	if (iVar0 == -1)
	{
		func_18(iParam0);
		return;
	}
	Global_8FEC[iVar0 /*5*/] = func_16();
	Global_8FEC[iVar0 /*5*/].f_1 = Global_8FD2[iParam0 /*5*/].f_1;
	Global_8FEC[iVar0 /*5*/].f_2 = 0;
	Var1 = { Global_8FD2[iParam0 /*5*/] };
	SYSTEM::START_NEW_SCRIPT_WITH_ARGS("drunk", &Var1, 5, 1424);
	unk_0x91DEC7187FA01089("drunk");
	func_18(iParam0);
}

var func_16()//Position - 0x7F3
{
	var uVar0;
	
	uVar0 = Global_8FD0;
	Global_8FD0++;
	return uVar0;
}

int func_17()//Position - 0x80A
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_8FEC[iVar0 /*5*/] == -1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_18(int iParam0)//Position - 0x839
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

void func_19()//Position - 0x8BC
{
	if (!Global_903D[iLocal_13 /*6*/].f_2 == 6)
	{
		if (Global_903D[iLocal_13 /*6*/].f_1 == 0)
		{
			func_21(iLocal_13);
			func_20(iLocal_13);
		}
	}
}

void func_20(int iParam0)//Position - 0x8EC
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_903D[iParam0 /*6*/] = -1;
	Global_903D[iParam0 /*6*/].f_1 = -1;
	Global_903D[iParam0 /*6*/].f_2 = 6;
	Global_903D[iParam0 /*6*/].f_3 = 0;
	Global_903D[iParam0 /*6*/].f_4 = 0;
}

void func_21(int iParam0)//Position - 0x939
{
	int iVar0;
	
	iVar0 = Global_903D[iParam0 /*6*/].f_2;
	switch (iVar0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			break;
		
		default:
			break;
	}
}

void func_22()//Position - 0x983
{
	int iVar0;
	
	iVar0 = -1;
	if (!Global_8FEC[iLocal_14 /*5*/] == -1)
	{
		iVar0 = func_28(Global_8FEC[iLocal_14 /*5*/], 0);
		if (iVar0 == -1)
		{
			func_23(Global_8FEC[iLocal_14 /*5*/]);
		}
		else
		{
			func_20(iVar0);
		}
	}
}

void func_23(int iParam0)//Position - 0x9C3
{
	int iVar0;
	
	func_26(iParam0);
	iVar0 = func_25(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	func_24(iVar0);
}

void func_24(int iParam0)//Position - 0x9E8
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_8FEC[iParam0 /*5*/] = -1;
	Global_8FEC[iParam0 /*5*/].f_1 = 0;
	Global_8FEC[iParam0 /*5*/].f_2 = -1;
	Global_8FEC[iParam0 /*5*/].f_3 = 0;
	Global_8FEC[iParam0 /*5*/].f_4 = 0;
}

int func_25(int iParam0)//Position - 0xA35
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_8FEC[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_26(int iParam0)//Position - 0xA65
{
	func_30(iParam0);
	func_27(iParam0);
}

void func_27(int iParam0)//Position - 0xA79
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_903D[iVar0 /*6*/].f_1)
		{
			func_20(iVar0);
		}
		iVar0++;
	}
}

int func_28(int iParam0, int iParam1)//Position - 0xAAB
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam1 == Global_903D[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_903D[iVar0 /*6*/])
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_29()//Position - 0xAE9
{
	if (Global_903D[iLocal_13 /*6*/] == 1)
	{
		Global_903D[iLocal_13 /*6*/] = 0;
	}
}

void func_30(int iParam0)//Position - 0xB04
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_903D[iVar0 /*6*/])
		{
			func_20(iVar0);
		}
		iVar0++;
	}
}

void func_31()//Position - 0xB34
{
	func_32();
	if (!iLocal_12)
	{
		func_3(1);
	}
	unk_0x95E4B6F3ED223F5A();
}

void func_32()//Position - 0xB4F
{
	func_35();
	func_34();
	func_33();
	func_4();
	Global_90C0 = 0;
	Global_90BF = 0;
	Global_8FD1 = 0;
	unk_0xA451DE3BE57FDA90("drunk");
}

void func_33()//Position - 0xB7A
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_20(iVar0);
		iVar0++;
	}
}

void func_34()//Position - 0xB9E
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_24(iVar0);
		iVar0++;
	}
}

void func_35()//Position - 0xBC2
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_18(iVar0);
		iVar0++;
	}
}

