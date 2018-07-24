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
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	char* sLocal_23 = NULL;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	float fLocal_35 = 0f;
	float fLocal_36 = 0f;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 5;
	var uScriptParam_17 = 0;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	char* sVar2;
	vector3 vVar3;
	int iVar4;
	
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
	sLocal_23 = "NULL";
	fLocal_26 = 80f;
	fLocal_27 = 140f;
	fLocal_28 = 180f;
	fLocal_31 = 0f;
	fLocal_35 = -0.0375f;
	fLocal_36 = 0.17f;
	iLocal_39 = 3;
	iLocal_43 = 1;
	iLocal_44 = 65;
	iLocal_45 = 49;
	iLocal_46 = 64;
	iVar1 = joaat("carwash1");
	sVar2 = "carwash1";
	vVar3 = { ScriptParam_50.f_1[0 /*3*/] };
	if (unk_0xB731B8C5BCE89836(joaat("am_mp_carwash_launch")) > 1)
	{
		unk_0x95E4B6F3ED223F5A();
	}
	if (unk_0x7AF0088ABFA713B6())
	{
		unk_0xC1A27D367CCA8C15();
		unk_0x6C87EFD58B261C6F(0);
	}
	else
	{
		unk_0x95E4B6F3ED223F5A();
	}
	if (Global_28006E)
	{
		if (unk_0xB731B8C5BCE89836(131838674) == 0)
		{
			unk_0x381A61AE1A1DAD09(131838674);
			while (!unk_0xFEAEF0BFEF7FED8A(131838674))
			{
				SYSTEM::WAIT(0);
			}
			SYSTEM::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(131838674, &ScriptParam_50, 23, 1424);
		}
		unk_0x95E4B6F3ED223F5A();
	}
	if (func_8(unk_0xBC25C936A095B5BA()))
	{
	}
	iVar4 = 0;
	while (iVar4 == 0)
	{
		if (((func_5(unk_0xB5CEFD608600A09F(), 1) || func_4()) || !func_3(unk_0xB5CEFD608600A09F())) || func_2())
		{
			iVar4 = 0;
		}
		else
		{
			iVar4 = 1;
		}
		SYSTEM::WAIT(0);
	}
	if (SYSTEM::VDIST2(vVar3, func_1(157)) < SYSTEM::VDIST2(vVar3, func_1(156)))
	{
		sVar2 = "carwash2";
	}
	iVar0 = unk_0x105601648511CC64();
	iVar1 = unk_0x56BEECB328B6D29D(sVar2);
	if (unk_0xB731B8C5BCE89836(iVar1) == 0)
	{
		unk_0x63831D2D5110C305(sVar2);
		while (!unk_0xACE95AD318CE412B(sVar2))
		{
			unk_0x63831D2D5110C305(sVar2);
			SYSTEM::WAIT(0);
			if (unk_0x105601648511CC64() > iVar0 + 20000)
			{
				unk_0x95E4B6F3ED223F5A();
			}
		}
		if (unk_0xACE95AD318CE412B(sVar2))
		{
			SYSTEM::START_NEW_SCRIPT(sVar2, 1424);
			unk_0x91DEC7187FA01089(sVar2);
		}
	}
	unk_0x95E4B6F3ED223F5A();
}

Vector3 func_1(int iParam0)//Position - 0x1D4
{
	int iVar0;
	
	iVar0 = iParam0;
	return Global_6416[iVar0 /*23*/][0 /*3*/];
}

bool func_2()//Position - 0x1EC
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_27.f_12, 0);
}

bool func_3(int iParam0)//Position - 0x208
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_8E, 6);
}

int func_4()//Position - 0x220
{
	int iVar0;
	
	iVar0 = Global_252E21;
	if (unk_0xFA30DFD0084E92FE(Global_18C3AE[iVar0 /*35*/].f_D, 0) && Global_18C3AE[iVar0 /*35*/].f_16 == 2)
	{
		return 1;
	}
	return 0;
}

int func_5(int iParam0, bool bParam1)//Position - 0x256
{
	if (bParam1)
	{
		if (func_6(iParam0))
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

bool func_6(int iParam0)//Position - 0x282
{
	return func_7(iParam0);
}

bool func_7(int iParam0)//Position - 0x290
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_D.f_1, 0);
}

bool func_8(int iParam0)//Position - 0x2AA
{
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 0;
	}
	return !unk_0x1D403DFADBC2DE3C(iParam0, 0);
}

