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
	var uLocal_29 = 0;
	struct<2> Local_30 = { 0, 0 } ;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	struct<2> Local_33 = { 0, 0 } ;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	struct<2> Local_36 = { 0, 0 } ;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	struct<2> Local_39 = { 0, 0 } ;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	struct<2> Local_42 = { 0, 0 } ;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	struct<2> Local_45 = { 0, 0 } ;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
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
	StringCopy(&Local_30, "CELL_212", 16);
	StringCopy(&Local_33, "CELL_213", 16);
	StringCopy(&Local_36, "CELL_39", 16);
	StringCopy(&Local_39, "CELL_MP_300", 16);
	StringCopy(&Local_42, "CELL_MP_301", 16);
	StringCopy(&Local_45, "CELL_MP_302", 16);
	unk_0xC1A27D367CCA8C15();
	func_41(&iLocal_28);
	func_32();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!unk_0xF5F5C6DD66B0FB2A())
		{
			func_30(1);
			func_29();
		}
		if (!Global_389D.f_1 == 9 && Global_389D.f_1 > 3)
		{
			func_3();
			if (Global_389D.f_1 != 8)
			{
				if (func_2())
				{
					func_29();
				}
			}
		}
		if (func_1())
		{
			func_29();
		}
	}
}

int func_1()//Position - 0xDE
{
	if (((Global_389D.f_1 == 1 || Global_389D.f_1 == 3) || Global_389D.f_1 == 0) || Global_3865 == 1)
	{
		Global_3890 = 1;
		return 1;
	}
	return 0;
}

int func_2()//Position - 0x121
{
	if (Global_B99 == 1 || Global_389D.f_1 < 7)
	{
		Global_3890 = 1;
		return 1;
	}
	return 0;
}

void func_3()//Position - 0x14A
{
	if (func_25(&iLocal_28))
	{
		if (func_14())
		{
			if (Global_258018)
			{
				unk_0x097914E8B3DC12E8(0);
				func_8(-1531883188, func_9(1, 1));
				Global_258018 = 0;
			}
			else
			{
				unk_0x097914E8B3DC12E8(1);
				func_8(1471084428, func_9(1, 1));
				Global_258018 = 1;
			}
			func_4(0);
			return;
		}
	}
}

void func_4(int iParam0)//Position - 0x1A6
{
	if (Global_3943)
	{
		func_6(0, 0);
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
	if (!func_5())
	{
		Global_389D.f_1 = 3;
	}
}

int func_5()//Position - 0x216
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_6(bool bParam0, bool bParam1)//Position - 0x23D
{
	if (bParam0)
	{
		if (func_7(0))
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

int func_7(int iParam0)//Position - 0x2B1
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

void func_8(int iParam0, int iParam1)//Position - 0x30B
{
	struct<4> Var0;
	
	Var0 = -319074860;
	Var0.f_1 = unk_0xB5CEFD608600A09F();
	Var0.f_2 = iParam0;
	Var0.f_3 = unk_0x491B2241281A03B7(0, 9999);
	if (!iParam1 == 0)
	{
		if (unk_0x7AF0088ABFA713B6())
		{
			unk_0x38E776D9FA75679B(1, &Var0, 4, iParam1);
		}
	}
}

int func_9(int iParam0, bool bParam1)//Position - 0x350
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x3171C34AB3FE6F2E(iVar1);
		if (func_13(iVar2, 0, 0))
		{
			if (iVar2 != unk_0xB5CEFD608600A09F() || iParam0)
			{
				if (bParam1)
				{
					unk_0xF0059F27F7BB6680(&uVar0, iVar1);
				}
				else if (!func_10(iVar2, 0))
				{
					unk_0xF0059F27F7BB6680(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_10(int iParam0, int iParam1)//Position - 0x3B5
{
	bool bVar0;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		bVar0 = func_11(-1, 0) == 8;
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

int func_11(int iParam0, bool bParam1)//Position - 0x400
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_12();
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

int func_12()//Position - 0x441
{
	return Global_1407E0;
}

int func_13(int iParam0, bool bParam1, bool bParam2)//Position - 0x44D
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

int func_14()//Position - 0x497
{
	if (!func_20(unk_0xB5CEFD608600A09F(), 1) && func_15())
	{
		return 1;
	}
	return 0;
}

int func_15()//Position - 0x4BA
{
	if (Global_1406BE)
	{
		return 1;
	}
	if (func_19())
	{
		return 1;
	}
	if (func_18())
	{
		return 1;
	}
	return func_16(120, -1);
}

int func_16(int iParam0, int iParam1)//Position - 0x4EA
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2705A2[iParam0 /*3*/][func_17(iParam1)];
	if (unk_0x9CADE88F210A0BAE(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_17(var uParam0)//Position - 0x516
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_12();
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

bool func_18()//Position - 0x54A
{
	return Global_14084A;
}

bool func_19()//Position - 0x556
{
	return Global_14084C;
}

bool func_20(int iParam0, bool bParam1)//Position - 0x562
{
	if (Global_1406BF != 0)
	{
		return func_24(iParam0) != 0;
	}
	return func_21(iParam0, bParam1);
}

int func_21(int iParam0, bool bParam1)//Position - 0x588
{
	if (bParam1)
	{
		if (func_22(iParam0))
		{
			return 1;
		}
	}
	if (Global_18402B[iParam0 /*770*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_22(int iParam0)//Position - 0x5B4
{
	return func_23(iParam0);
}

bool func_23(int iParam0)//Position - 0x5C2
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_D.f_1, 0);
}

int func_24(int iParam0)//Position - 0x5DC
{
	if (func_13(iParam0, 0, 1))
	{
		return Global_24FB5C[iParam0 /*406*/].f_1;
	}
	return 0;
}

int func_25(int iParam0)//Position - 0x5FE
{
	if (!unk_0xFA30DFD0084E92FE(*iParam0, 0))
	{
		return 0;
	}
	if (Global_3887)
	{
		return 0;
	}
	if (!unk_0x726D9204B160D23E())
	{
		return 0;
	}
	if (!unk_0x694514BD37EC4E94(2, Global_387E))
	{
		return 0;
	}
	func_26();
	Global_3887 = 1;
	return 1;
}

void func_26()//Position - 0x645
{
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0xC4BA30B532FE260F(-1, "Menu_Accept", &Global_3892, 1);
		func_27();
	}
}

void func_27()//Position - 0x66A
{
	if (func_28())
	{
		unk_0x32A023E2F8F8566C(5);
	}
}

int func_28()//Position - 0x67E
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_11542)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0xEBC6179F395EFBEB();
	iVar1 = unk_0x3D875C2512206692(iVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_411EA0 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_29()//Position - 0x6C5
{
	unk_0x95E4B6F3ED223F5A();
}

void func_30(bool bParam0)//Position - 0x6D1
{
	if (bParam0)
	{
		func_31();
		if (Global_389D.f_1 == 10 || Global_389D.f_1 == 9)
		{
			unk_0xF0059F27F7BB6680(&Global_93C, 16);
		}
		Global_389D.f_1 = 1;
		if (func_7(0))
		{
			func_4(0);
		}
	}
	else if (Global_389D.f_1 == 1)
	{
		if (!Global_389D.f_1 == 0)
		{
			Global_389D.f_1 = 3;
		}
	}
}

void func_31()//Position - 0x734
{
	if (Global_389D.f_1 == 9 || Global_389D.f_1 == 10)
	{
		Global_3DED = 0;
		Global_3DE9 = 1;
	}
}

void func_32()//Position - 0x75D
{
	if (!Global_389D.f_1 == 7)
	{
		Global_389D.f_1 = 7;
	}
	func_40(Global_388A, "SET_DATA_SLOT_EMPTY", SYSTEM::TO_FLOAT(13), -1082130432, -1082130432, -1082130432, -1082130432);
	if (func_14())
	{
		if (Global_258018)
		{
			func_39(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(12), -1f, -1f, &Local_42, 0, 0, 0, 0);
		}
		else
		{
			func_39(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(12), -1f, -1f, &Local_39, 0, 0, 0, 0);
		}
	}
	else
	{
		func_39(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(12), -1f, -1f, &Local_45, 0, 0, 0, 0);
	}
	func_40(Global_388A, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(13), -1082130432, -1082130432, -1082130432, -1082130432);
	func_36(&Local_36);
	if (func_14())
	{
		func_33(13, &Local_30, 1, "", 4, &Local_33, &iLocal_28);
	}
	else
	{
		func_33(1, "", 1, "", 4, &Local_33, &iLocal_28);
	}
}

void func_33(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, int iParam6)//Position - 0x86D
{
	func_34(2, iParam0, sParam1, 0, iParam6, -1);
	func_34(1, iParam2, sParam3, 1, iParam6, 17);
	func_34(3, iParam4, sParam5, 2, iParam6, -1);
}

void func_34(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x89D
{
	if (iParam1 == 1)
	{
		func_39(Global_388A, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 0f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x7CB6FD92BE491AD9(iParam4, iParam3);
		func_35(iParam5, 0);
		return;
	}
	if (Global_3891)
	{
		func_39(Global_388A, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 1f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, sParam2, 0, 0, 0, 0);
		unk_0xF0059F27F7BB6680(iParam4, iParam3);
		func_35(iParam5, 1);
		return;
	}
	func_39(Global_388A, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 1f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
	unk_0xF0059F27F7BB6680(iParam4, iParam3);
	func_35(iParam5, 1);
}

void func_35(int iParam0, bool bParam1)//Position - 0x93F
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		unk_0xF0059F27F7BB6680(&Global_93B, iParam0);
		return;
	}
	unk_0x7CB6FD92BE491AD9(&Global_93B, iParam0);
}

void func_36(char* sParam0)//Position - 0x96A
{
	func_37(Global_388A, "SET_HEADER", sParam0, 0, 0, 0, 0);
}

void func_37(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)//Position - 0x982
{
	unk_0x29CD142125FE177B(iParam0, sParam1);
	func_38(sParam2);
	if (!unk_0xF1734B55490E9045(sParam3))
	{
		func_38(sParam3);
	}
	if (!unk_0xF1734B55490E9045(sParam4))
	{
		func_38(sParam4);
	}
	if (!unk_0xF1734B55490E9045(sParam5))
	{
		func_38(sParam5);
	}
	if (!unk_0xF1734B55490E9045(sParam6))
	{
		func_38(sParam6);
	}
	unk_0xF9FBC2F3F73D94C9();
}

void func_38(char* sParam0)//Position - 0x9DD
{
	unk_0x57016C44F10111F0(sParam0);
	unk_0x64989E60CF560CA1();
}

void func_39(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x9EF
{
	unk_0x29CD142125FE177B(iParam0, sParam1);
	unk_0x1E1FB49121565EB6(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x1E1FB49121565EB6(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x1E1FB49121565EB6(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x1E1FB49121565EB6(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x1E1FB49121565EB6(SYSTEM::ROUND(fParam6));
	}
	if (!unk_0xF1734B55490E9045(sParam7))
	{
		func_38(sParam7);
	}
	if (!unk_0xF1734B55490E9045(sParam8))
	{
		func_38(sParam8);
	}
	if (!unk_0xF1734B55490E9045(sParam9))
	{
		func_38(sParam9);
	}
	if (!unk_0xF1734B55490E9045(sParam10))
	{
		func_38(sParam10);
	}
	if (!unk_0xF1734B55490E9045(sParam11))
	{
		func_38(sParam11);
	}
	unk_0xF9FBC2F3F73D94C9();
}

void func_40(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0xAA2
{
	unk_0x29CD142125FE177B(iParam0, sParam1);
	unk_0x1E1FB49121565EB6(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x1E1FB49121565EB6(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x1E1FB49121565EB6(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x1E1FB49121565EB6(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x1E1FB49121565EB6(SYSTEM::ROUND(fParam6));
	}
	unk_0xF9FBC2F3F73D94C9();
}

void func_41(var uParam0)//Position - 0xB05
{
	*uParam0 = 0;
}

