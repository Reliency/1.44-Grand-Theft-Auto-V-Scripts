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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_41 = joaat("blimp");
	iLocal_44 = joaat("s_m_m_pilot_02");
	iLocal_46 = joaat("buzzard");
	if (unk_0x17FAADF9916EF741())
	{
		unk_0x829FA4611BD56B44(500);
	}
	if (unk_0xE8A79675302ED812(18))
	{
		func_18();
	}
	unk_0xAEC867D0DBB7AFEB(0);
	func_17();
	func_16();
	func_14();
	func_11();
	while (true)
	{
		unk_0xCC4FE6A016BA0765(255, 255, 255, 255);
		unk_0xB8F3C51875F7BEA3(0.75f, 0.9f);
		unk_0x666751E43D377EAA(0f, 1f);
		func_10(0.05f, 0.63f, "PLCHLD_MISS", 0);
		unk_0xCC4FE6A016BA0765(255, 255, 255, 255);
		unk_0xB8F3C51875F7BEA3(0.4f, 0.45f);
		unk_0x666751E43D377EAA(0f, 1f);
		func_10(0.05f, 0.7f, "PLCHLD_PASS", 0);
		func_1();
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x116
{
	vector3 vVar0;
	
	if (unk_0x724D816EA203A79E(iLocal_40))
	{
		if ((unk_0x1D403DFADBC2DE3C(iLocal_40, 0) || unk_0x8D66276473ABD7CC(iLocal_40) <= 0) || unk_0x77F5C030D3238E26(iLocal_40) <= 0f)
		{
			func_9(&iLocal_42);
			if (unk_0xB34E411B0A4BF096(iLocal_40))
			{
				unk_0xD87F0F9CDF39238A(iLocal_40);
			}
			if (iLocal_47 == 1)
			{
				vVar0 = { unk_0x541C2AEF053615BC(iLocal_40, 0) };
				func_8(vVar0);
			}
			if (iLocal_47 == 1)
			{
				func_7(&iLocal_43);
				func_4(&iLocal_40);
			}
			else
			{
				func_3(&iLocal_43, 1, 0, 1);
				func_2(&iLocal_40);
			}
		}
		else if (unk_0xB34E411B0A4BF096(iLocal_40))
		{
			unk_0x821B5D8CB4B20F84(iLocal_40, 0.25f);
		}
	}
}

void func_2(int iParam0)//Position - 0x1B6
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

void func_3(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1EE
{
	if (unk_0x724D816EA203A79E(*iParam0))
	{
		if (!unk_0x36CEFBE9B745A58D(*iParam0))
		{
			unk_0xB71D41C0310C93DE(*iParam0, 0, 1);
			if (iParam3 == 0)
			{
				unk_0xD999D66C5AFA4BE3(*iParam0);
			}
			unk_0x22321800954A532E(*iParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0x2E35C4FA5F0ED22F(*iParam0, 0);
			}
		}
		unk_0x02537C8C1BEEB477(iParam0);
	}
}

void func_4(int iParam0)//Position - 0x23E
{
	if (unk_0x724D816EA203A79E(*iParam0))
	{
		if (!unk_0x5CAE759AE8219D20(*iParam0))
		{
			unk_0x77815D3407C6700D(*iParam0, true, 0);
		}
		if (func_6(*iParam0))
		{
			if (unk_0x5CAE759AE8219D20(*iParam0) && unk_0xB248FAA35ED47DB9(*iParam0, 1))
			{
				if (func_5(unk_0xBC25C936A095B5BA()))
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
			if (func_5(unk_0xBC25C936A095B5BA()))
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

int func_5(int iParam0)//Position - 0x2DA
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

int func_6(int iParam0)//Position - 0x2FB
{
	if (func_5(iParam0))
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

void func_7(int iParam0)//Position - 0x325
{
	if (unk_0x724D816EA203A79E(*iParam0))
	{
		if (!unk_0x1D403DFADBC2DE3C(*iParam0, 0))
		{
			unk_0xB71D41C0310C93DE(*iParam0, 0, 1);
		}
		if (!unk_0x5CAE759AE8219D20(*iParam0))
		{
			unk_0x77815D3407C6700D(*iParam0, true, 0);
		}
		unk_0xF845620A03C7425B(iParam0);
	}
}

void func_8(vector3 vParam0)//Position - 0x366
{
	int iVar0;
	int iVar1;
	vector3 vVar2[12];
	
	iVar1 = 12;
	vVar2[0 /*3*/] = { 5f, 0f, 0f };
	vVar2[1 /*3*/] = { 0f, 5f, 0f };
	vVar2[2 /*3*/] = { 0f, 0f, 5f };
	vVar2[3 /*3*/] = { 5f, 5f, 0f };
	vVar2[4 /*3*/] = { 5f, 0f, 5f };
	vVar2[5 /*3*/] = { 0f, 5f, 5f };
	vVar2[6 /*3*/] = { 20f, 0f, 0f };
	vVar2[7 /*3*/] = { 0f, 20f, 0f };
	vVar2[8 /*3*/] = { 0f, 0f, 20f };
	vVar2[9 /*3*/] = { 20f, 20f, 0f };
	vVar2[10 /*3*/] = { 20f, 0f, 20f };
	vVar2[11 /*3*/] = { 0f, 20f, 20f };
	unk_0xFB3EF14E3F131640(vParam0, 8, 1f, 1, 0, 1f, 0);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		unk_0xFB3EF14E3F131640(vParam0 + vVar2[iVar0 /*3*/], 8, 1f, 1, 0, 1f, 0);
		iVar0++;
	}
}

void func_9(int iParam0)//Position - 0x45C
{
	if (unk_0x2DA8CA50A72528FB(*iParam0))
	{
		unk_0x0BBAABB52887CF8C(*iParam0, false);
		unk_0x07B8ECB35A4ED3AC(iParam0);
	}
}

void func_10(float fParam0, float fParam1, char* sParam2, int iParam3)//Position - 0x47C
{
	unk_0x8B371195127AACF2(sParam2);
	unk_0x3A8B9C7B1C825123(fParam0, fParam1, iParam3);
}

void func_11()//Position - 0x494
{
	func_2(&iLocal_45);
	unk_0xF243B7A14FCFD0F4(iLocal_46);
	while (!unk_0xD6513D668481290A(iLocal_46))
	{
		SYSTEM::WAIT(0);
	}
	if (func_6(iLocal_40))
	{
		iLocal_45 = unk_0x61C05BF08A1E0EFE(iLocal_46, unk_0xA4455714F3DCE207(iLocal_40, 50f, 0f, 15f), 0f, 1, 1, 0);
		unk_0x251A179731E0D207(iLocal_45);
		func_12(iLocal_45, iLocal_40);
		if (func_5(unk_0xBC25C936A095B5BA()))
		{
			unk_0xBD53A029D0155A42(unk_0xBC25C936A095B5BA(), iLocal_45, -1);
			unk_0x2B9AEC08E469E384(0f, 1065353216);
			unk_0xF3F01A78937DC905(0f);
			unk_0x6C5F5B5F6894CCE3(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), 500f, 1, 0, 0, false);
		}
	}
	unk_0x2CA123B0622F495C(iLocal_46);
}

void func_12(int iParam0, int iParam1)//Position - 0x52F
{
	float fVar0;
	
	fVar0 = func_13(unk_0x541C2AEF053615BC(iParam0, 1), unk_0x541C2AEF053615BC(iParam1, 1), 1);
	unk_0x019CE76D5286C95C(iParam0, fVar0);
}

float func_13(struct<2> Param0, float fParam1, struct<2> Param2, float fParam3, int iParam4)//Position - 0x554
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param2 - Param0);
	fVar2 = (Param2.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = unk_0xE8CFCB6B2165523B(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam4 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

void func_14()//Position - 0x5B9
{
	func_9(&iLocal_42);
	if (func_6(iLocal_40))
	{
		iLocal_42 = func_15(iLocal_40, 1, 5);
	}
}

int func_15(int iParam0, bool bParam1, int iParam2)//Position - 0x5DA
{
	int iVar0;
	
	iVar0 = 0;
	if (func_5(iParam0))
	{
		iVar0 = unk_0x511FE22BCF5353CD(iParam0);
		unk_0xF9C2945DB5BAB4BF(iVar0, bParam1);
		unk_0x12DB69036F6569F7(iVar0, iParam2);
		unk_0x3F5F1772D71D5EC4(iVar0, 1f);
	}
	return iVar0;
}

void func_16()//Position - 0x60F
{
	unk_0xF243B7A14FCFD0F4(iLocal_44);
	while (!unk_0xD6513D668481290A(iLocal_44))
	{
		SYSTEM::WAIT(0);
	}
	if (func_6(iLocal_40))
	{
		iLocal_43 = unk_0xFD8987C090669BD5(iLocal_40, 26, iLocal_44, -1, 1, true);
		if (func_5(iLocal_43))
		{
			unk_0x2E35C4FA5F0ED22F(iLocal_43, 1);
			unk_0xC8FD3EBBB90E8D7F(iLocal_43, 118, false);
			unk_0xC8FD3EBBB90E8D7F(iLocal_43, 29, false);
			unk_0xC8FD3EBBB90E8D7F(iLocal_43, 116, false);
		}
	}
	if (func_6(iLocal_40))
	{
		unk_0x9E6D037EC3389728(iLocal_40, 1, "Blimp_City", 1);
	}
	unk_0x2CA123B0622F495C(iLocal_44);
}

void func_17()//Position - 0x68C
{
	vector3 vVar0;
	
	if (func_6(iLocal_40) && unk_0xB34E411B0A4BF096(iLocal_40))
	{
		unk_0xD87F0F9CDF39238A(iLocal_40);
	}
	func_9(&iLocal_42);
	func_7(&iLocal_43);
	func_4(&iLocal_40);
	unk_0xF243B7A14FCFD0F4(iLocal_41);
	unk_0x1B2A7C8188ADBE04(1, "Blimp_City");
	while (!unk_0xD6513D668481290A(iLocal_41) || !unk_0x00D24B3F2A5CD22C(1, "Blimp_City"))
	{
		SYSTEM::WAIT(0);
	}
	vVar0 = { unk_0x765910C3692C24BC(unk_0xE42C8D4CE70B2D35(1, "Blimp_City"), 0f) };
	iLocal_40 = unk_0x61C05BF08A1E0EFE(iLocal_41, unk_0xE69565EA6CC00034(unk_0xE42C8D4CE70B2D35(1, "Blimp_City"), 0f), vVar0.z, 1, 1, 0);
	unk_0x2CA123B0622F495C(iLocal_41);
}

void func_18()//Position - 0x722
{
	if (func_6(iLocal_40) && unk_0xB34E411B0A4BF096(iLocal_40))
	{
		unk_0xD87F0F9CDF39238A(iLocal_40);
	}
	unk_0x4F5DAC981AF98536(1, "Blimp_city");
	func_9(&iLocal_42);
	func_3(&iLocal_43, 1, 0, 1);
	func_2(&iLocal_40);
	func_2(&iLocal_45);
	unk_0x2CA123B0622F495C(iLocal_44);
	unk_0x2CA123B0622F495C(iLocal_41);
	unk_0x2CA123B0622F495C(iLocal_46);
	unk_0xAEC867D0DBB7AFEB(6);
	unk_0x95E4B6F3ED223F5A();
}

