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
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	vector3 vLocal_47 = { 0f, 0f, 0f };
	vector3 vLocal_48 = { 0f, 0f, 0f };
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	struct<2> Local_54 = { 0, 5 } ;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uScriptParam_0 = 0;
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
	var uScriptParam_12 = 5;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 0;
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
	sLocal_20 = "NULL";
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
	vLocal_47 = { ScriptParam_54.f_1[0 /*3*/] };
	iLocal_44 = unk_0x491B2241281A03B7(0, 2);
	func_27();
	if (unk_0xE8A79675302ED812(11))
	{
		func_27();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (unk_0x684B06333594F9EA())
		{
			if (func_8(3))
			{
				switch (iLocal_43)
				{
					case 0:
						if (iLocal_45 == 1)
						{
							iLocal_43 = 1;
						}
						else
						{
							func_7();
						}
						break;
					
					case 1:
						if (!unk_0x1D403DFADBC2DE3C(iLocal_50, 0))
						{
							if (iLocal_46 == 0)
							{
								if (func_2(iLocal_50, 0, 1056964608, 0, 0, 0))
								{
									iLocal_46 = 1;
								}
							}
						}
						if (iLocal_52 == 0)
						{
							func_1();
						}
						break;
				}
			}
			else
			{
				func_27();
			}
		}
		else
		{
			func_27();
		}
	}
}

void func_1()//Position - 0x119
{
	if (SYSTEM::TIMERB() > 10000)
	{
		if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vLocal_47, 10f, 10f, 10f, false, true, 0) && !unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			SYSTEM::SETTIMERB(0);
			if (!unk_0x1D403DFADBC2DE3C(iLocal_50, 0))
			{
				if (iLocal_44 == 0)
				{
					if (iLocal_46 == 0)
					{
					}
					unk_0xC5A6DFE2B8987B17(&iLocal_53);
					unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 0);
					unk_0xE896C0AD02364F2A(0, "amb@drug_dealer", "beckon_03", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x535008C596714F9E(iLocal_53);
					unk_0xA8E6405305C0D7DF(iLocal_50, iLocal_53);
					unk_0x02DAF06EA4F08219(&iLocal_53);
				}
				else if (!unk_0x1D403DFADBC2DE3C(iLocal_51, 0))
				{
					unk_0x85DB484A637CEAB9(iLocal_50, iLocal_51, 0);
					if (iLocal_46 == 0)
					{
					}
					unk_0x8CE2798B9A7027EC(iLocal_51, 1193033728, 0);
					iLocal_44 = 0;
				}
			}
		}
	}
}

int func_2(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x1E1
{
	float fVar0;
	
	if (iParam4 == 2)
	{
		fVar0 = 150f;
	}
	else if (iParam4 == 1)
	{
		fVar0 = 100f;
	}
	else if (iParam4 == 0)
	{
		fVar0 = 40f;
	}
	switch (iParam3)
	{
		case 2:
			if (func_3(iParam0, func_6(iParam1, 2, fParam2), fVar0, fParam2, bParam5))
			{
				return 1;
			}
			if (func_3(iParam0, func_6(iParam1, 3, fParam2), fVar0, fParam2, bParam5))
			{
				return 1;
			}
			if (func_3(iParam0, func_6(iParam1, 5, fParam2), fVar0, fParam2, bParam5))
			{
				return 1;
			}
			if (func_3(iParam0, func_6(iParam1, 6, fParam2), fVar0, fParam2, bParam5))
			{
				return 1;
			}
			if (func_3(iParam0, func_6(iParam1, 7, fParam2), fVar0, fParam2, bParam5))
			{
				return 1;
			}
			if (func_3(iParam0, func_6(iParam1, 8, fParam2), fVar0, fParam2, bParam5))
			{
				return 1;
			}
		
		case 1:
			if (func_3(iParam0, func_6(iParam1, 1, fParam2), fVar0, fParam2, bParam5))
			{
				return 1;
			}
		
		case 0:
			if (func_3(iParam0, func_6(iParam1, 0, fParam2), fVar0, fParam2, bParam5))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_3(int iParam0, vector3 vParam1, float fParam2, float fParam3, bool bParam4)//Position - 0x314
{
	float fVar0;
	vector3 vVar1;
	
	if (fParam3 < 1f)
	{
		fVar0 = (1f + 0.5f);
	}
	else
	{
		fVar0 = (fParam3 + 0.5f);
	}
	vVar1 = { (fParam3 + 0.2f), (fParam3 + 0.2f), fVar0 };
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		if ((((unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), unk_0xA4455714F3DCE207(iParam0, vParam1), vVar1, false, true, 0) && unk_0x053F9FA04F814AF3(unk_0xBC25C936A095B5BA(), unk_0x541C2AEF053615BC(iParam0, true), fParam2)) && func_5(bParam4)) && !unk_0x2CDE18D6C89522AD(iParam0)) && !unk_0x69871CAEBDD20966(iParam0))
		{
			func_4(iParam0, 1);
			return 1;
		}
		else
		{
			func_4(iParam0, 0);
		}
	}
	return 0;
}

void func_4(int iParam0, bool bParam1)//Position - 0x3C7
{
	if (bParam1)
	{
	}
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
	}
}

int func_5(bool bParam0)//Position - 0x3DF
{
	if (unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()))
	{
		if (bParam0)
		{
			if (unk_0x9692102E7020D903(unk_0xBC25C936A095B5BA()) == 1f || unk_0x9692102E7020D903(unk_0xBC25C936A095B5BA()) == 0f)
			{
				return 1;
			}
		}
		else if (unk_0x9692102E7020D903(unk_0xBC25C936A095B5BA()) == 1f)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_6(int iParam0, int iParam1, float fParam2)//Position - 0x42D
{
	vector3 vVar0;
	
	switch (iParam1)
	{
		case 0:
			if (iParam0 == 0)
			{
				vVar0 = { 0f, fParam2, 0f };
			}
			else if (iParam0 == 1)
			{
				vVar0 = { fParam2, 0f, 0f };
			}
			else if (iParam0 == 3)
			{
				vVar0 = { 0f, -fParam2, 0f };
			}
			else if (iParam0 == 2)
			{
				vVar0 = { -fParam2, 0f, 0f };
			}
			break;
		
		case 1:
			if (iParam0 == 3)
			{
				vVar0 = { 0f, fParam2, 0f };
			}
			else if (iParam0 == 2)
			{
				vVar0 = { fParam2, 0f, 0f };
			}
			else if (iParam0 == 0)
			{
				vVar0 = { 0f, -fParam2, 0f };
			}
			else if (iParam0 == 1)
			{
				vVar0 = { -fParam2, 0f, 0f };
			}
			break;
		
		case 2:
			if (iParam0 == 2)
			{
				vVar0 = { 0f, fParam2, 0f };
			}
			else if (iParam0 == 3)
			{
				vVar0 = { fParam2, 0f, 0f };
			}
			else if (iParam0 == 1)
			{
				vVar0 = { 0f, -fParam2, 0f };
			}
			else if (iParam0 == 0)
			{
				vVar0 = { -fParam2, 0f, 0f };
			}
			break;
		
		case 3:
			if (iParam0 == 1)
			{
				vVar0 = { 0f, fParam2, 0f };
			}
			else if (iParam0 == 0)
			{
				vVar0 = { fParam2, 0f, 0f };
			}
			else if (iParam0 == 2)
			{
				vVar0 = { 0f, -fParam2, 0f };
			}
			else if (iParam0 == 3)
			{
				vVar0 = { -fParam2, 0f, 0f };
			}
			break;
		
		case 5:
			if (iParam0 == 1)
			{
				vVar0 = { fParam2, fParam2, 0f };
			}
			else if (iParam0 == 0)
			{
				vVar0 = { -fParam2, fParam2, 0f };
			}
			else if (iParam0 == 3)
			{
				vVar0 = { fParam2, -fParam2, 0f };
			}
			else if (iParam0 == 2)
			{
				vVar0 = { -fParam2, -fParam2, 0f };
			}
			break;
		
		case 6:
			if (iParam0 == 0)
			{
				vVar0 = { fParam2, fParam2, 0f };
			}
			else if (iParam0 == 2)
			{
				vVar0 = { -fParam2, fParam2, 0f };
			}
			else if (iParam0 == 1)
			{
				vVar0 = { fParam2, -fParam2, 0f };
			}
			else if (iParam0 == 3)
			{
				vVar0 = { -fParam2, -fParam2, 0f };
			}
			break;
		
		case 7:
			if (iParam0 == 3)
			{
				vVar0 = { fParam2, fParam2, 0f };
			}
			else if (iParam0 == 1)
			{
				vVar0 = { -fParam2, fParam2, 0f };
			}
			else if (iParam0 == 2)
			{
				vVar0 = { fParam2, -fParam2, 0f };
			}
			else if (iParam0 == 0)
			{
				vVar0 = { -fParam2, -fParam2, 0f };
			}
			break;
		
		case 8:
			if (iParam0 == 2)
			{
				vVar0 = { fParam2, fParam2, 0f };
			}
			else if (iParam0 == 3)
			{
				vVar0 = { -fParam2, fParam2, 0f };
			}
			else if (iParam0 == 0)
			{
				vVar0 = { fParam2, -fParam2, 0f };
			}
			else if (iParam0 == 1)
			{
				vVar0 = { -fParam2, -fParam2, 0f };
			}
			break;
	}
	if (fParam2 < 0f)
	{
		fParam2 = (fParam2 * -1f);
	}
	return vVar0;
}

void func_7()//Position - 0x6C5
{
	if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vLocal_47, 50f, 50f, 50f, false, true, 0))
	{
		unk_0xF243B7A14FCFD0F4(joaat("a_m_o_tramp_01"));
		unk_0xF243B7A14FCFD0F4(joaat("g_m_y_strpunk_01"));
		unk_0x522053D86D6E1C7A("amb@drug_dealer");
		while ((!unk_0xD6513D668481290A(joaat("a_m_o_tramp_01")) || !unk_0xD6513D668481290A(joaat("g_m_y_strpunk_01"))) || !unk_0xF9E082857622D91E("amb@drug_dealer"))
		{
			SYSTEM::WAIT(0);
		}
		unk_0xB2CB6EAA6B280A84("homeless", &iLocal_49);
		vLocal_48.z = (vLocal_47.z - 1f);
		iLocal_50 = unk_0x01B3635C3E8EDD81(19, joaat("a_m_o_tramp_01"), vLocal_47.x, vLocal_47.y, vLocal_48.z, 0f, 1, true);
		unk_0x4106FAF8AA1D69D5(iLocal_50, iLocal_49);
		if (iLocal_44 == 1)
		{
			vLocal_48 = { unk_0xA4455714F3DCE207(iLocal_50, 0.8f, 0.8f, -1f) };
			iLocal_51 = unk_0x01B3635C3E8EDD81(5, joaat("g_m_y_strpunk_01"), vLocal_48, 0f, 1, true);
			unk_0xB2CB6EAA6B280A84("homeless", &iLocal_49);
			unk_0x4106FAF8AA1D69D5(iLocal_51, iLocal_49);
			if (!unk_0x1D403DFADBC2DE3C(iLocal_50, 0))
			{
				unk_0xC5A6DFE2B8987B17(&iLocal_53);
				unk_0xCF4C6C235CD09F4F(0, vLocal_48, 0);
				unk_0xE896C0AD02364F2A(0, "amb@drug_dealer", "beckon_01", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x535008C596714F9E(iLocal_53);
				unk_0xA8E6405305C0D7DF(iLocal_50, iLocal_53);
				unk_0x02DAF06EA4F08219(&iLocal_53);
			}
			if (!unk_0x1D403DFADBC2DE3C(iLocal_51, 0))
			{
				unk_0xC5A6DFE2B8987B17(&iLocal_53);
				unk_0xCF4C6C235CD09F4F(0, vLocal_47, 0);
				unk_0xE896C0AD02364F2A(0, "amb@drug_dealer", "beckon_02", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x535008C596714F9E(iLocal_53);
				unk_0xA8E6405305C0D7DF(iLocal_51, iLocal_53);
				unk_0x02DAF06EA4F08219(&iLocal_53);
			}
		}
		iLocal_45 = 1;
	}
}

int func_8(int iParam0)//Position - 0x843
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_26(6) || func_26(7))
			{
				return 1;
			}
			else
			{
				return func_8(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_24(5))
			{
				if (func_9(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_9(int iParam0)//Position - 0x8B5
{
	int iVar0;
	
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				iVar0 = func_20();
				if (!func_19(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_18()) || Global_1974B) || Global_62BF) || func_17()) || func_16(8, -1)) || func_15()) || func_14()) || func_13()) || func_12()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1) || func_18()) || Global_62BF) || func_17()) || func_16(8, -1)) || func_13()) || func_15()) || func_14()) || func_12()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_18()) || Global_1974B) || Global_62BF) || func_17()) || func_16(8, -1)) || func_13()) || func_15()) || func_14()) || func_12()) || Global_19B04.f_1DEB.f_397[iVar0] == 5) || Global_8E64 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_18()) || Global_1974B) || Global_62BF) || func_17()) || func_16(8, -1)) || func_15()) || func_14()) || func_12()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_18() || unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0) || func_16(8, -1)) || func_12()) || func_11()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_16(8, -1) || func_15()) || func_14()) || func_11()) || func_10())
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
							if ((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || func_18()) || Global_62BF) || func_17()) || func_16(8, -1)) || func_14()) || func_13()) || func_12()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || !unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) || !unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F())) || !unk_0x726D9204B160D23E()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || func_18()) || func_14()) || Global_1974B) || Global_62BF) || func_17()) || Global_90C1) || func_16(8, -1)) || func_13()) || func_11()) || func_12()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || !unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) || !unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F())) || !unk_0x726D9204B160D23E()) || unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0)) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1)) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0x9273B3557334635D(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || func_18()) || Global_1974B) || Global_62BF) || func_17()) || func_16(8, -1)) || func_13()) || func_11()) || func_15()) || func_14()) || func_12())
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

var func_10()//Position - 0xFD2
{
	return Global_16B42.f_1;
}

int func_11()//Position - 0xFE0
{
	if (Global_15FA6 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_147B0[Global_15FA6 /*34*/].f_F, 13);
	}
	return 0;
}

int func_12()//Position - 0x1006
{
	if (unk_0xB731B8C5BCE89836(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_13()//Position - 0x1020
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

bool func_14()//Position - 0x104A
{
	return Global_16B4F.f_142 > 0;
}

bool func_15()//Position - 0x105B
{
	return Global_16B4F.f_141 > 0;
}

bool func_16(int iParam0, int iParam1)//Position - 0x106C
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

var func_17()//Position - 0x10A7
{
	return Global_140856;
}

int func_18()//Position - 0x10B3
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		return Global_161D2.f_2C == 1;
	}
	return 0;
}

bool func_19(int iParam0)//Position - 0x10CF
{
	return iParam0 < 3;
}

var func_20()//Position - 0x10DB
{
	func_21();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_21()//Position - 0x10F4
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_23(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_22(unk_0xBC25C936A095B5BA());
			if (func_19(iVar0) && (!func_26(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_19(Global_19B04.f_932.f_21B.f_10CD))
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

int func_22(int iParam0)//Position - 0x11F1
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_23(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_23(int iParam0)//Position - 0x122E
{
	if (func_19(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_24(int iParam0)//Position - 0x1258
{
	return func_25(iParam0, Global_8C41);
}

int func_25(int iParam0, int iParam1)//Position - 0x1269
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

bool func_26(int iParam0)//Position - 0x144A
{
	return Global_8C41 == iParam0;
}

void func_27()//Position - 0x1458
{
	unk_0x95E4B6F3ED223F5A();
}

