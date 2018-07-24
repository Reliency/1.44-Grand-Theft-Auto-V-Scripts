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
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	char* sLocal_44 = NULL;
	char* sLocal_45 = NULL;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	vector3 vLocal_49 = { 0f, 0f, 0f };
	vector3 vLocal_50 = { 0f, 0f, 0f };
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
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	sLocal_44 = "RCMBarryLeadInOut";
	sLocal_45 = "idle";
	vLocal_49 = { 189.5964f, -956.0344f, 29.5771f };
	vLocal_50 = { 190.2424f, -956.379f, 28.63f };
	unk_0xBBC4195AD74D153D(0, 26, 1);
	if (func_24(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) != 0)
		{
			unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 0, 0);
		}
	}
	if (unk_0xE8A79675302ED812(83))
	{
		func_21(0);
	}
	unk_0x522053D86D6E1C7A(sLocal_44);
	unk_0x900CF084251DED26("BARY1", 7);
	while (!unk_0xF9E082857622D91E(sLocal_44) || !unk_0xFA9040D29FE330BD(7))
	{
		unk_0xBBC4195AD74D153D(0, 26, 1);
		SYSTEM::WAIT(0);
	}
	unk_0xBBC4195AD74D153D(0, 26, 1);
	func_24(unk_0xBC25C936A095B5BA());
	iLocal_46 = unk_0x105601648511CC64() + 13000;
	iLocal_47 = unk_0x491B2241281A03B7(0, 5);
	func_18();
	while (!func_13(&iLocal_43, 49, vLocal_50, func_17(1.12f), 0))
	{
		unk_0xBBC4195AD74D153D(0, 26, 1);
		SYSTEM::WAIT(0);
	}
	unk_0xBBC4195AD74D153D(0, 26, 1);
	func_12();
	iLocal_48 = unk_0x105601648511CC64() + 1000;
	unk_0xBBC4195AD74D153D(0, 26, 1);
	while (true)
	{
		func_24(unk_0xBC25C936A095B5BA());
		if (unk_0x105601648511CC64() < iLocal_48)
		{
			unk_0xBBC4195AD74D153D(0, 26, 1);
		}
		func_11();
		if (!func_24(iLocal_43))
		{
			func_21(0);
		}
		if (func_3())
		{
		}
		if (func_2(unk_0xBC25C936A095B5BA(), vLocal_50, 1) > 70f)
		{
			func_1(&iLocal_40, 0);
			func_1(&iLocal_41, 0);
			func_1(&iLocal_42, 0);
			func_21(0);
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(int iParam0, bool bParam1)//Position - 0x1D9
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

float func_2(int iParam0, vector3 vParam1, bool bParam2)//Position - 0x214
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

int func_3()//Position - 0x24E
{
	var uVar0;
	
	if (((((func_10(unk_0xBC25C936A095B5BA()) && func_10(iLocal_43)) && !func_9()) && unk_0x105601648511CC64() > iLocal_46) && func_8(unk_0xBC25C936A095B5BA(), iLocal_43, 1) < 20f) && !unk_0x04604C9E42BD0E47())
	{
		uVar0 = 16;
		func_7(&uVar0, 0, iLocal_43, "BARRY", 0, 1);
		func_4(&uVar0, "BARY1AU", func_6(), 7, 0, 0);
		iLocal_46 = (unk_0x105601648511CC64() + unk_0x491B2241281A03B7(12000, 18000));
		return 1;
	}
	return 0;
}

void func_4(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2DE
{
	func_5(uParam0, 145, sParam1, iParam4, iParam5, 0);
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

void func_5(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x319
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

char* func_6()//Position - 0x36F
{
	char* sVar0;
	
	switch (iLocal_47)
	{
		case 0:
			sVar0 = "BARY1_RCMLI1";
			break;
		
		case 1:
			sVar0 = "BARY1_RCMLI2";
			break;
		
		case 2:
			sVar0 = "BARY1_RCMLI3";
			break;
		
		case 3:
			sVar0 = "BARY1_RCMLI4";
			break;
		
		case 4:
			sVar0 = "BARY1_RCMLI5";
			break;
	}
	iLocal_47++;
	if (iLocal_47 > 4)
	{
		iLocal_47 = 0;
	}
	return sVar0;
}

void func_7(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x3D5
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

float func_8(int iParam0, int iParam1, bool bParam2)//Position - 0x470
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		vVar0 = { unk_0x541C2AEF053615BC(iParam0, true) };
	}
	else
	{
		vVar0 = { unk_0x541C2AEF053615BC(iParam0, false) };
	}
	if (!unk_0x1D403DFADBC2DE3C(iParam1, 0))
	{
		vVar1 = { unk_0x541C2AEF053615BC(iParam1, true) };
	}
	else
	{
		vVar1 = { unk_0x541C2AEF053615BC(iParam1, false) };
	}
	return unk_0xF0F2FC9DE291567F(vVar0, vVar1, bParam2);
}

int func_9()//Position - 0x4CE
{
	if (Global_3DB8 != 0 || unk_0xE6711F601F11B66B())
	{
		return 1;
	}
	return 0;
}

int func_10(int iParam0)//Position - 0x4F0
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

void func_11()//Position - 0x511
{
	if (unk_0xC9FA5D38428AB6BE(-1, vLocal_50, 5f))
	{
		if (func_10(iLocal_43))
		{
			unk_0x346478B12F69D4E3(iLocal_43, false);
			unk_0xA372031D01C4F878(iLocal_43, 1000, 1, 0);
		}
		if (func_10(iLocal_41))
		{
			unk_0x346478B12F69D4E3(iLocal_41, false);
		}
		if (func_10(iLocal_40))
		{
			unk_0x346478B12F69D4E3(iLocal_40, false);
		}
	}
}

void func_12()//Position - 0x561
{
	if (func_10(iLocal_43))
	{
		if (!unk_0x5CAE759AE8219D20(iLocal_43))
		{
			unk_0x77815D3407C6700D(iLocal_43, true, 0);
		}
		unk_0x70FF586D857F1A81(iLocal_43, 1, 0, 0, false);
		unk_0x2E35C4FA5F0ED22F(iLocal_43, true);
		unk_0x8EF3D958386640FE(iLocal_43, 0);
		unk_0xB105531EDD3DE51B(iLocal_43, false);
		unk_0xF85FAED5BA864282(iLocal_43, "POSTBARRY");
		unk_0x4106FAF8AA1D69D5(iLocal_43, 1862763509);
		unk_0xD434A01DEA38A939(iLocal_43, false, 0);
		unk_0x346478B12F69D4E3(iLocal_43, true);
		unk_0x641B19E156645A92(iLocal_43, vLocal_50, 1, false, 0, 1);
		unk_0x019CE76D5286C95C(iLocal_43, func_17(1.12f));
		unk_0x346478B12F69D4E3(iLocal_43, true);
		unk_0xE896C0AD02364F2A(iLocal_43, sLocal_44, sLocal_45, 8f, -8f, -1, 9, 0, 0, 0, 0);
		unk_0x56F2E1B5599188FA(iLocal_43, unk_0xBC25C936A095B5BA(), -1, 0, 2);
	}
}

int func_13(int iParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4)//Position - 0x612
{
	int iVar0;
	
	if (!func_16(iParam1))
	{
		iVar0 = func_15(iParam1);
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
			func_14(*iParam0, iParam1);
			if (bParam4)
			{
				unk_0x2CA123B0622F495C(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_14(var uParam0, int iParam1)//Position - 0x6A0
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

int func_15(int iParam0)//Position - 0x6E6
{
	if (!func_16(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_16(int iParam0)//Position - 0x711
{
	return iParam0 < 3;
}

float func_17(float fParam0)//Position - 0x71D
{
	return (fParam0 * 57.29578f);
}

void func_18()//Position - 0x72D
{
	if (unk_0x70CF24CEFB0F53B0(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), 0))
	{
		iLocal_41 = unk_0xCE5CC3450F9879E0(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), 0, 0, 1);
		if (func_24(iLocal_41))
		{
			if (!unk_0x5CAE759AE8219D20(iLocal_41))
			{
				unk_0x77815D3407C6700D(iLocal_41, true, 0);
			}
			vLocal_49 = { 189.5964f, -956.0344f, 29.54f };
			unk_0x641B19E156645A92(iLocal_41, vLocal_49, 1, false, 0, 1);
			unk_0x019CE76D5286C95C(iLocal_41, func_17(-2.01f));
			unk_0x346478B12F69D4E3(iLocal_41, true);
		}
	}
	if (unk_0x70CF24CEFB0F53B0(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), 0))
	{
		iLocal_40 = unk_0xCE5CC3450F9879E0(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), 0, 0, 1);
		if (func_24(iLocal_40))
		{
			if (!unk_0x5CAE759AE8219D20(iLocal_40))
			{
				unk_0x77815D3407C6700D(iLocal_40, true, 0);
			}
			vLocal_49 = { 190.2574f, -956.3513f, 29.621f };
			unk_0x641B19E156645A92(iLocal_40, vLocal_49, 1, false, 0, 1);
			unk_0x019CE76D5286C95C(iLocal_40, func_17(-1.68f));
			unk_0x346478B12F69D4E3(iLocal_40, true);
		}
	}
	else
	{
		vLocal_49 = { 190.2574f, -956.3513f, 29.621f };
		func_19(&iLocal_40, joaat("prop_chair_08"), vLocal_49, func_17(-1.68f));
		unk_0x641B19E156645A92(iLocal_40, vLocal_49, 1, false, 0, 1);
		unk_0x019CE76D5286C95C(iLocal_40, func_17(-1.68f));
		unk_0x346478B12F69D4E3(iLocal_40, true);
	}
	vLocal_49 = { 192.4462f, -953.5946f, 29.0919f };
	if (unk_0x70CF24CEFB0F53B0(vLocal_49, 25f, joaat("prop_protest_sign_01"), 0))
	{
		iLocal_42 = unk_0xCE5CC3450F9879E0(vLocal_49, 25f, joaat("prop_protest_sign_01"), 0, 0, 1);
		if (func_24(iLocal_42))
		{
			if (!unk_0x5CAE759AE8219D20(iLocal_42))
			{
				unk_0x77815D3407C6700D(iLocal_42, true, 0);
			}
			vLocal_49.z = 29.603f;
			unk_0x641B19E156645A92(iLocal_42, vLocal_49, 1, false, 0, 1);
			unk_0x019CE76D5286C95C(iLocal_42, 23.45f);
		}
	}
	else
	{
		func_19(&iLocal_42, joaat("prop_protest_sign_01"), vLocal_49, 23.45f);
		unk_0x641B19E156645A92(iLocal_42, vLocal_49, 1, false, 0, 1);
		unk_0x019CE76D5286C95C(iLocal_42, 23.45f);
	}
}

void func_19(int iParam0, int iParam1, vector3 vParam2, float fParam3)//Position - 0x95E
{
	func_20(iParam0);
	*iParam0 = unk_0xB6896943DA475493(iParam1, vParam2, true, true, false);
	unk_0x019CE76D5286C95C(*iParam0, fParam3);
}

void func_20(int iParam0)//Position - 0x985
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

void func_21(bool bParam0)//Position - 0x9B0
{
	if (bParam0)
	{
		func_23(&iLocal_43);
	}
	else
	{
		func_22(&iLocal_43, 1, 0, 1);
	}
	if (func_10(iLocal_41))
	{
		unk_0x346478B12F69D4E3(iLocal_41, false);
	}
	if (func_10(iLocal_40))
	{
		unk_0x346478B12F69D4E3(iLocal_40, false);
	}
	if (bParam0)
	{
		func_20(&iLocal_40);
		func_20(&iLocal_41);
		func_20(&iLocal_42);
	}
	else
	{
		func_1(&iLocal_40, 0);
		func_1(&iLocal_41, 0);
		func_1(&iLocal_42, 0);
	}
	unk_0x4EA570997E107F35(sLocal_44);
	unk_0x841D233D3CE81152(7, false);
	unk_0x95E4B6F3ED223F5A();
}

void func_22(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0xA2E
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

void func_23(int iParam0)//Position - 0xA7E
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

bool func_24(int iParam0)//Position - 0xABF
{
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 0;
	}
	return !unk_0x1D403DFADBC2DE3C(iParam0, 0);
}

