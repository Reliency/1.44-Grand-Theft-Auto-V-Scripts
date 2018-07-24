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
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
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
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
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
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	if (func_87(&iLocal_46))
	{
		while (!func_76())
		{
			func_64(&iLocal_46);
			if (func_54(&iLocal_46))
			{
			}
			else
			{
				func_14(&iLocal_46);
				SYSTEM::WAIT(0);
			}
		}
	}
	func_1();
}

void func_1()//Position - 0xA6
{
	func_13();
	if (func_10())
	{
		unk_0x7456702622C62EA0(1);
	}
	if (func_8(&iLocal_46))
	{
		func_4(&iLocal_46);
	}
	unk_0xAEC867D0DBB7AFEB(5);
	func_3();
	unk_0x9A550931F6C602BC(unk_0xB5CEFD608600A09F(), 0);
	func_2();
}

void func_2()//Position - 0xE3
{
	unk_0x95E4B6F3ED223F5A();
}

void func_3()//Position - 0xEF
{
	unk_0x7CB6FD92BE491AD9(&(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_2EF), 3);
}

void func_4(int iParam0)//Position - 0x10A
{
	func_7(0, 1);
	func_6(0, -1, 1);
	func_5(&(iParam0->f_6), 5);
}

void func_5(int iParam0, int iParam1)//Position - 0x128
{
	unk_0x7CB6FD92BE491AD9(iParam0, iParam1);
}

void func_6(bool bParam0, int iParam1, bool bParam2)//Position - 0x138
{
	if ((!unk_0x3C406FC829C1E14A(Global_24DCC0.f_5C2) || Global_24DCC0.f_5C2 == unk_0x8A55B15F4133C912()) || bParam2)
	{
		if (bParam0)
		{
			Global_24DCC0.f_5C2 = unk_0x8A55B15F4133C912();
			Global_24DCC0.f_5C3 = unk_0xED678C85A82F0AB9();
		}
		else
		{
			Global_24DCC0.f_5C2 = -1;
		}
		Global_24DCC0.f_5C5 = iParam1;
		Global_24DCC0.f_5C7 = bParam0;
	}
	else if (!bParam2)
	{
	}
}

void func_7(bool bParam0, bool bParam1)//Position - 0x1AA
{
	if ((!unk_0x3C406FC829C1E14A(Global_24DCC0.f_5D2) || Global_24DCC0.f_5D2 == unk_0x8A55B15F4133C912()) || bParam1)
	{
		if (bParam0)
		{
			Global_24DCC0.f_5D2 = unk_0x8A55B15F4133C912();
			unk_0xF0059F27F7BB6680(&(Global_24FB5C[unk_0xB5CEFD608600A09F() /*406*/].f_44.f_2), 23);
		}
		else
		{
			Global_24DCC0.f_5D2 = -1;
			unk_0x7CB6FD92BE491AD9(&(Global_24FB5C[unk_0xB5CEFD608600A09F() /*406*/].f_44.f_2), 23);
		}
	}
	else if (!bParam1)
	{
	}
}

bool func_8(int iParam0)//Position - 0x229
{
	return func_9(&(iParam0->f_6), 5);
}

bool func_9(int iParam0, int iParam1)//Position - 0x23A
{
	return unk_0xFA30DFD0084E92FE(*iParam0, iParam1);
}

bool func_10()//Position - 0x24B
{
	return ((((func_12("STEALTH_ON") || func_12("STEALTH_OFF")) || func_12(func_11())) || func_12("STEALTH_ON_P")) || func_12("STEALTH_OFF_P"));
}

char* func_11()//Position - 0x28E
{
	return "STEALTH_WARN";
}

int func_12(char* sParam0)//Position - 0x299
{
	unk_0xF07D20149ECBC61E(sParam0);
	return unk_0xA66DBDA0A072514A(0);
}

void func_13()//Position - 0x2AC
{
	unk_0x7CB6FD92BE491AD9(&(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_2EF), 1);
}

void func_14(int iParam0)//Position - 0x2C7
{
	func_51(iParam0);
	func_50(iParam0);
	if (func_49(iParam0))
	{
		if (((func_48(iParam0) && !func_47(iParam0)) && unk_0x4DF785C4DF542CD0(iParam0->f_1)) && !func_46())
		{
			func_45(iParam0, 1, 0);
			func_44(iParam0);
		}
		else if (func_9(&(iParam0->f_6), 6) && func_47(iParam0))
		{
			if (unk_0x4DF785C4DF542CD0(iParam0->f_1) && !func_46())
			{
				func_45(iParam0, 0, 0);
				func_5(&(iParam0->f_6), 6);
				func_5(&(iParam0->f_6), 2);
			}
		}
	}
	if (func_43(iParam0))
	{
		unk_0x9A550931F6C602BC(unk_0xB5CEFD608600A09F(), 1);
		func_42();
		func_41(iParam0);
	}
	else if (func_40(iParam0))
	{
		unk_0x9A550931F6C602BC(unk_0xB5CEFD608600A09F(), 0);
		func_13();
		func_41(iParam0);
		func_39(iParam0, 5);
	}
	if (func_47(iParam0) && !func_48(iParam0))
	{
		func_37(iParam0);
		func_36();
		func_39(iParam0, 2);
		if (func_33(iParam0))
		{
			func_32();
		}
	}
	else
	{
		func_15(iParam0);
	}
	func_3();
	unk_0x7CB6FD92BE491AD9(&(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_2EF), 4);
}

void func_15(int iParam0)//Position - 0x3FC
{
	int iVar0;
	
	if (((((((!func_9(&(iParam0->f_6), 0) && !func_9(&(iParam0->f_6), 2)) && !unk_0xF16DAFF595E80F7C()) && func_31(iParam0)) && !func_30(0)) && !func_29()) && func_27()) && unk_0x724D816EA203A79E(unk_0x3187EF5798B5D209(iParam0->f_1, -1, 0)))
	{
		func_21(iParam0, 1);
		func_20(&(iParam0->f_6), 3);
		iVar0 = func_19(iParam0->f_6.f_2, 3333, 10000);
		iParam0->f_6.f_2 = 0;
		func_17(func_18(iParam0), iVar0);
		func_16(iParam0);
		func_20(&(iParam0->f_6), 0);
	}
}

void func_16(int iParam0)//Position - 0x4AA
{
	func_20(&(iParam0->f_6), 2);
}

void func_17(char* sParam0, int iParam1)//Position - 0x4BB
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, true, iParam1);
}

char* func_18(int iParam0)//Position - 0x4D2
{
	if (func_49(iParam0))
	{
		return "STEALTH_OFF";
	}
	return "STEALTH_OFF_P";
}

int func_19(bool bParam0, int iParam1, int iParam2)//Position - 0x4EF
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_20(int iParam0, int iParam1)//Position - 0x506
{
	unk_0xF0059F27F7BB6680(iParam0, iParam1);
}

void func_21(int iParam0, int iParam1)//Position - 0x516
{
	int iVar0;
	
	if (func_49(iParam0))
	{
		switch (iParam0->f_2)
		{
			case 1181327175:
				iVar0 = (func_24(19004, -1, -1) + iParam1);
				if (iVar0 >= 0)
				{
					func_22(19004, iVar0, -1, 1);
				}
				break;
			}
	}
}

var func_22(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x559
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_23();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xEDDF9BD8E04FC4AA((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0x86C669CF285C5AAD((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xEDDF9BD8E04FC4AA((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0x86C669CF285C5AAD((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xEDDF9BD8E04FC4AA((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0x86C669CF285C5AAD((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xEDDF9BD8E04FC4AA((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0x86C669CF285C5AAD((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x8EDD391D94A2AA73((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0x86C669CF285C5AAD((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x8EDD391D94A2AA73((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0x86C669CF285C5AAD((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0x86C669CF285C5AAD((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0x86C669CF285C5AAD((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0x86C669CF285C5AAD((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0x86C669CF285C5AAD((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0x86C669CF285C5AAD((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0x86C669CF285C5AAD((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - unk_0x86C669CF285C5AAD((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - unk_0x86C669CF285C5AAD((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - unk_0x86C669CF285C5AAD((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - unk_0x86C669CF285C5AAD((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 19018), 0, 1, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - unk_0x86C669CF285C5AAD((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0x86C669CF285C5AAD((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0x86C669CF285C5AAD((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0x787266E3704350D7(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_23()//Position - 0xA48
{
	return Global_1407E0;
}

int func_24(int iParam0, int iParam1, int iParam2)//Position - 0xA54
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_23();
	}
	iVar0 = 0;
	iVar1 = func_26(iParam0, iParam1);
	iVar2 = func_25(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x6AEE934BCCBCAA0E(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_25(int iParam0)//Position - 0xA9A
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0x86C669CF285C5AAD((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0x86C669CF285C5AAD((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0x86C669CF285C5AAD((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0x86C669CF285C5AAD((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0x86C669CF285C5AAD((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0x86C669CF285C5AAD((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0x86C669CF285C5AAD((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0x86C669CF285C5AAD((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0x86C669CF285C5AAD((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0x86C669CF285C5AAD((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0x86C669CF285C5AAD((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0x86C669CF285C5AAD((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0x86C669CF285C5AAD((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - unk_0x86C669CF285C5AAD((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0x86C669CF285C5AAD((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0x86C669CF285C5AAD((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - unk_0x86C669CF285C5AAD((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - unk_0x86C669CF285C5AAD((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - unk_0x86C669CF285C5AAD((iParam0 - 19018)) * 8) * 8;
	}
	return iVar0;
}

int func_26(int iParam0, int iParam1)//Position - 0xE0E
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_23();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xEDDF9BD8E04FC4AA((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xEDDF9BD8E04FC4AA((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xEDDF9BD8E04FC4AA((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xEDDF9BD8E04FC4AA((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x8EDD391D94A2AA73((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x8EDD391D94A2AA73((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	return iVar0;
}

bool func_27()//Position - 0x112B
{
	return (!unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_2EF, 4) && !func_28());
}

bool func_28()//Position - 0x1151
{
	return ((Global_440000.f_C7AE == 6 || Global_440000.f_C7AE == 7) && Global_440000.f_2 == 20);
}

bool func_29()//Position - 0x1185
{
	return Global_10AB8;
}

int func_30(int iParam0)//Position - 0x1191
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

int func_31(int iParam0)//Position - 0x11EB
{
	if (func_49(iParam0))
	{
		switch (iParam0->f_2)
		{
			case 1181327175:
				return func_24(19004, -1, -1) < 3;
			}
		
		default:
	}
	return 1;
}

void func_32()//Position - 0x121A
{
	if (!unk_0xF16DAFF595E80F7C())
	{
		func_17("STEALTH_WARN", 3000);
	}
}

int func_33(int iParam0)//Position - 0x1234
{
	int iVar0;
	
	if (func_30(0) || func_29())
	{
		return 0;
	}
	iVar0 = func_34(iParam0);
	switch (iVar0)
	{
		case 1:
			if ((unk_0xF7DDAAF0EFDAFA22(0, 114) || unk_0xF7DDAAF0EFDAFA22(0, 99)) || unk_0xF7DDAAF0EFDAFA22(0, 100))
			{
				return 1;
			}
			break;
		
		case 0:
			if (unk_0xF7DDAAF0EFDAFA22(0, 114))
			{
				return 1;
			}
			break;
		
		case 2:
			if (unk_0xF7DDAAF0EFDAFA22(0, 92))
			{
				return 1;
			}
			break;
		
		case 3:
			if (unk_0xF7DDAAF0EFDAFA22(0, 68))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_34(int iParam0)//Position - 0x12D8
{
	if (!func_35(iParam0))
	{
		return 4;
	}
	switch (iParam0->f_2)
	{
		case 1181327175:
			switch (iParam0->f_4)
			{
				case -1:
					return 1;
				
				case 0:
					return 2;
				
				default:
			}
			return 4;
		
		default:
	}
	return 4;
}

bool func_35(int iParam0)//Position - 0x1322
{
	return (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()) && !unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0));
}

void func_36()//Position - 0x1341
{
	unk_0xBBC4195AD74D153D(0, 24, 1);
	unk_0xBBC4195AD74D153D(0, 66, 1);
	unk_0xBBC4195AD74D153D(0, 67, 1);
	unk_0xBBC4195AD74D153D(0, 68, 1);
	unk_0xBBC4195AD74D153D(0, 114, 1);
	unk_0xBBC4195AD74D153D(0, 69, 1);
	unk_0xBBC4195AD74D153D(0, 70, 1);
	unk_0xBBC4195AD74D153D(0, 91, 1);
	unk_0xBBC4195AD74D153D(0, 92, 1);
	unk_0xBBC4195AD74D153D(0, 99, 1);
	unk_0xBBC4195AD74D153D(0, 100, 1);
	unk_0xBBC4195AD74D153D(0, 37, 1);
}

void func_37(int iParam0)//Position - 0x13A9
{
	int iVar0;
	
	if (((((((!func_9(&(iParam0->f_6), 0) && !func_9(&(iParam0->f_6), 1)) && !unk_0xF16DAFF595E80F7C()) && func_9(&(iParam0->f_6), 3)) && !func_30(0)) && !func_29()) && func_27()) && unk_0x724D816EA203A79E(unk_0x3187EF5798B5D209(iParam0->f_1, -1, 0)))
	{
		iVar0 = func_19(iParam0->f_6.f_2, 3333, 10000);
		iParam0->f_6.f_2 = 0;
		func_17(func_38(iParam0), iVar0);
		func_44(iParam0);
		func_20(&(iParam0->f_6), 0);
	}
}

char* func_38(int iParam0)//Position - 0x144A
{
	if (func_49(iParam0))
	{
		return "STEALTH_ON";
	}
	return "STEALTH_ON_P";
}

void func_39(int iParam0, int iParam1)//Position - 0x1466
{
	if (func_48(iParam0))
	{
		return;
	}
	if (unk_0x8C6B6C3774164BB5() != iParam1)
	{
		unk_0xAEC867D0DBB7AFEB(iParam1);
	}
	if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > iParam1)
	{
		unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), iParam1, 0);
	}
}

bool func_40(int iParam0)//Position - 0x14A1
{
	return (!func_9(iParam0, 0) && func_9(iParam0, 1));
}

void func_41(int iParam0)//Position - 0x14BD
{
	func_5(&(iParam0->f_6), 0);
	if (func_10())
	{
		unk_0x7456702622C62EA0(1);
	}
	if (!func_49(iParam0))
	{
		if (func_47(iParam0))
		{
			func_5(&(iParam0->f_6), 1);
		}
		else
		{
			func_5(&(iParam0->f_6), 2);
		}
	}
}

void func_42()//Position - 0x1502
{
	unk_0xF0059F27F7BB6680(&(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_2EF), 1);
}

bool func_43(int iParam0)//Position - 0x151D
{
	return (func_9(iParam0, 0) && !func_9(iParam0, 1));
}

void func_44(int iParam0)//Position - 0x1539
{
	func_20(&(iParam0->f_6), 1);
}

void func_45(int iParam0, bool bParam1, int iParam2)//Position - 0x154A
{
	switch (iParam0->f_2)
	{
		case 1181327175:
			unk_0x4566E6472F351A7B(iParam0->f_1, !bParam1, iParam2);
			break;
	}
}

bool func_46()//Position - 0x1571
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_2EF, 3);
}

bool func_47(int iParam0)//Position - 0x158C
{
	return func_9(iParam0, 0);
}

bool func_48(int iParam0)//Position - 0x159B
{
	return func_9(iParam0, 2);
}

bool func_49(int iParam0)//Position - 0x15AA
{
	return ((func_35(iParam0) && iParam0->f_3 == unk_0xBC25C936A095B5BA()) || unk_0x3187EF5798B5D209(iParam0->f_1, -1, 0) == unk_0xBC25C936A095B5BA());
}

void func_50(int iParam0)//Position - 0x15DB
{
	if (func_10() && (func_30(0) || func_29()))
	{
		iParam0->f_6.f_2 = 1;
		unk_0x7456702622C62EA0(1);
		func_5(&(iParam0->f_6), 0);
		if (func_47(iParam0))
		{
			func_5(&(iParam0->f_6), 1);
		}
		else
		{
			func_5(&(iParam0->f_6), 2);
			if (func_49(iParam0))
			{
				func_21(iParam0, -1);
			}
		}
	}
}

void func_51(int iParam0)//Position - 0x1641
{
	if (func_47(iParam0))
	{
		if (func_8(iParam0))
		{
			if (func_53())
			{
				func_4(iParam0);
			}
		}
		else if (!func_53())
		{
			func_52(iParam0);
		}
	}
	else if (func_8(iParam0))
	{
		func_4(iParam0);
	}
	unk_0x7CB6FD92BE491AD9(&(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_2EF), 2);
}

void func_52(int iParam0)//Position - 0x169E
{
	func_7(1, 1);
	func_6(1, -1, 1);
	func_20(&(iParam0->f_6), 5);
}

bool func_53()//Position - 0x16BC
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_2EF, 2);
}

int func_54(int iParam0)//Position - 0x16D7
{
	if (!func_35(iParam0))
	{
		return 1;
	}
	if (!func_63(iParam0))
	{
		return 1;
	}
	if (!func_62(iParam0->f_2))
	{
		return 1;
	}
	if (func_61(unk_0xB5CEFD608600A09F(), 1, 1))
	{
		return 1;
	}
	if (func_60(unk_0xB5CEFD608600A09F()))
	{
		return 1;
	}
	if (func_57(unk_0xB5CEFD608600A09F()))
	{
		return 1;
	}
	if (func_55(unk_0xB5CEFD608600A09F()))
	{
		return 1;
	}
	return 0;
}

int func_55(int iParam0)//Position - 0x174A
{
	if (iParam0 > -1)
	{
		if (Global_24FB5C[iParam0 /*406*/].f_E8 > -1)
		{
			if (func_56(Global_24FB5C[iParam0 /*406*/].f_E8) == 4)
			{
				return 1;
			}
		}
		if (unk_0xFA30DFD0084E92FE(Global_24FB5C[iParam0 /*406*/].f_BF, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_56(int iParam0)//Position - 0x1796
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

int func_57(int iParam0)//Position - 0x1A30
{
	if (iParam0 != func_59() && func_58(iParam0, 1, 1))
	{
		return unk_0xFA30DFD0084E92FE(Global_24FB5C[iParam0 /*406*/].f_131, 3);
	}
	return 0;
}

int func_58(int iParam0, bool bParam1, bool bParam2)//Position - 0x1A64
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

int func_59()//Position - 0x1AAE
{
	return -1;
}

int func_60(int iParam0)//Position - 0x1AB7
{
	if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_13, 14))
	{
		return 1;
	}
	if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_13, 11))
	{
		return 1;
	}
	return 0;
}

int func_61(int iParam0, bool bParam1, bool bParam2)//Position - 0x1AF6
{
	if (iParam0 == func_59())
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

int func_62(int iParam0)//Position - 0x1B60
{
	switch (iParam0)
	{
		case 1181327175:
			return 1;
		
		default:
	}
	return 0;
}

bool func_63(int iParam0)//Position - 0x1B7A
{
	return (unk_0x724D816EA203A79E(iParam0->f_1) && unk_0xE59B7F5A03335350(iParam0->f_1, 0));
}

void func_64(int iParam0)//Position - 0x1B98
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	bVar0 = func_9(iParam0, 4);
	bVar1 = func_9(iParam0, 0);
	func_75(iParam0);
	if (bVar0)
	{
		func_20(iParam0, 3);
	}
	else
	{
		func_5(iParam0, 3);
	}
	if (bVar1)
	{
		func_20(iParam0, 1);
	}
	else
	{
		func_5(iParam0, 1);
	}
	if (func_35(iParam0))
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			iParam0->f_1 = unk_0xD20EBB97FE8799ED(unk_0xBC25C936A095B5BA());
			if (func_63(iParam0))
			{
				iParam0->f_2 = unk_0x6F79ECA8C83E4357(iParam0->f_1);
				if (unk_0x74BCB6EDB1FFBFBA(unk_0xBC25C936A095B5BA(), 2))
				{
					func_20(iParam0, 2);
				}
			}
		}
	}
	if (func_63(iParam0))
	{
		if (!unk_0x1AAF0C23233C57AF(iParam0->f_1, -1, 0))
		{
			iVar2 = unk_0x3187EF5798B5D209(iParam0->f_1, -1, 0);
			if ((unk_0x724D816EA203A79E(iVar2) && !unk_0x1D403DFADBC2DE3C(iVar2, 0)) && unk_0x15DBD981998D4FE1(iVar2))
			{
				iParam0->f_3 = iVar2;
				if (iVar2 == unk_0xBC25C936A095B5BA())
				{
					func_20(iParam0, 4);
					if (!func_9(iParam0, 3))
					{
						func_20(&(iParam0->f_6), 6);
					}
				}
			}
		}
		if (func_35(iParam0))
		{
			iParam0->f_4 = func_74(unk_0xBC25C936A095B5BA(), 0);
		}
		if (func_49(iParam0))
		{
			if (func_73() && func_67(iParam0))
			{
				func_20(iParam0, 0);
			}
		}
		else
		{
			func_65(iParam0);
		}
	}
	if (func_43(iParam0))
	{
		iParam0->f_6.f_3 = unk_0xED678C85A82F0AB9();
	}
}

void func_65(int iParam0)//Position - 0x1CEF
{
	if (unk_0x724D816EA203A79E(iParam0->f_3) && func_66(unk_0x5363B43856FA7779(iParam0->f_3)))
	{
		func_20(iParam0, 0);
	}
	else
	{
		func_5(iParam0, 0);
	}
}

bool func_66(int iParam0)//Position - 0x1D24
{
	return (iParam0 != -1 && unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_2EF, 1));
}

bool func_67(int iParam0)//Position - 0x1D46
{
	bool bVar0;
	
	bVar0 = func_72();
	if (unk_0x4DF785C4DF542CD0(iParam0->f_1))
	{
		func_71(iParam0);
		switch (iParam0->f_2)
		{
			case 1181327175:
				bVar0 = !unk_0xD0346BDBA274ED75(iParam0->f_1);
				break;
		}
	}
	else if (func_70(iParam0))
	{
		if (func_69(iParam0))
		{
			unk_0xC7587327285D9984(iParam0->f_1);
		}
	}
	else
	{
		func_68(iParam0);
	}
	return bVar0;
}

void func_68(var uParam0)//Position - 0x1DAB
{
	func_20(&(uParam0->f_6), 4);
	uParam0->f_6.f_1 = unk_0x105601648511CC64();
}

bool func_69(var uParam0)//Position - 0x1DC6
{
	return (unk_0x105601648511CC64() - uParam0->f_6.f_1) >= 200;
}

bool func_70(var uParam0)//Position - 0x1DDC
{
	return func_9(&(uParam0->f_6), 4);
}

void func_71(var uParam0)//Position - 0x1DED
{
	func_5(&(uParam0->f_6), 4);
}

bool func_72()//Position - 0x1DFE
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_2EF, 1);
}

bool func_73()//Position - 0x1E19
{
	return !func_28();
}

int func_74(int iParam0, int iParam1)//Position - 0x1E26
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (unk_0x5237AF95232D78C5(iParam0, iParam1))
		{
			iVar0 = unk_0x9FE9D386222EEE47(iParam0, iParam1);
			if (unk_0x724D816EA203A79E(iVar0))
			{
				iVar1 = unk_0x7C02672B11D4F65B(unk_0x6F79ECA8C83E4357(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x1AAF0C23233C57AF(iVar0, iVar3, 0))
					{
						if (unk_0x3187EF5798B5D209(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

void func_75(var uParam0)//Position - 0x1EAB
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_3 = 0;
	uParam0->f_2 = 0;
	uParam0->f_4 = -1;
}

int func_76()//Position - 0x1ECB
{
	if (func_77())
	{
		return 1;
	}
	return 0;
}

int func_77()//Position - 0x1EDF
{
	var uVar0;
	
	func_84(&uVar0);
	if (Global_14083F == 0)
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			return 1;
		}
	}
	if (func_83())
	{
		return 1;
	}
	if (Global_25891C)
	{
		return 1;
	}
	if (func_82())
	{
		return 1;
	}
	if (func_81(157))
	{
		if (!func_80())
		{
			return 1;
		}
	}
	if (func_81(155))
	{
		return 1;
	}
	if (!unk_0x57D316754A262B34())
	{
		return 1;
	}
	if (func_78() != 0)
	{
		if (unk_0xB731B8C5BCE89836(func_78()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_78()//Position - 0x1F69
{
	switch (func_79())
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

int func_79()//Position - 0x1F9D
{
	return Global_62BD;
}

bool func_80()//Position - 0x1FA8
{
	return Global_255A46.f_24A;
}

int func_81(int iParam0)//Position - 0x1FB7
{
	if (unk_0xA1AC399BCBEE5B2D(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_82()//Position - 0x1FCE
{
	return Global_258063;
}

bool func_83()//Position - 0x1FDA
{
	return Global_255A46.f_245;
}

void func_84(var uParam0)//Position - 0x1FE9
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
					func_85(iVar0);
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

void func_85(int iParam0)//Position - 0x205C
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x414AA1932D1C88E2(1, iParam0, &vVar0, 3))
	{
		if (func_58(vVar0.y, 1, 1))
		{
			iVar1 = unk_0xA95CF30C72EB526E(vVar0.y);
			if (unk_0x724D816EA203A79E(iVar1))
			{
				if (unk_0x5237AF95232D78C5(iVar1, 0))
				{
					iVar2 = unk_0x9FE9D386222EEE47(iVar1, 0);
					if (unk_0x403C891106DCABAF(iVar2, vVar0.z) && unk_0x32405B7614E36453())
					{
						if (func_86(iVar2, &bVar3))
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

int func_86(int iParam0, var uParam1)//Position - 0x20DD
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

int func_87(int iParam0)//Position - 0x213C
{
	func_64(iParam0);
	if (func_63(iParam0))
	{
		if (func_49(iParam0))
		{
			if (unk_0x4DF785C4DF542CD0(iParam0->f_1))
			{
				if (!func_46())
				{
					func_45(iParam0, 0, 0);
				}
				else
				{
					func_20(&(iParam0->f_6), 3);
				}
			}
		}
		else
		{
			func_20(&(iParam0->f_6), 3);
		}
	}
	return 1;
}

