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
	int iLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	struct<91> Local_36 = { 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_37 = 0;
	var uLocal_38 = 3;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 3;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	int iLocal_52 = 0;
	struct<122> Local_53[5];
	var uLocal_54 = 3;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
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
	iLocal_20 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	unk_0x25A523E067E06F54(1);
	if (unk_0xE8A79675302ED812(3))
	{
		if (!unk_0xF1734B55490E9045(Local_36.f_58))
		{
			unk_0x3857DADBD6EC8A54(Local_36.f_58);
		}
		func_41(2);
		func_37(&Local_36);
	}
	while (true)
	{
		if (iLocal_52 > unk_0x105601648511CC64())
		{
			unk_0xE9B1C9E275C24095();
		}
		switch (Local_36)
		{
			case 0:
				func_27();
				break;
			
			case 1:
				func_4();
				break;
			
			case 2:
				func_1();
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0xD6
{
	switch (Local_36.f_1)
	{
		case 1:
			func_3();
			break;
		
		case 2:
			func_2();
			break;
	}
}

void func_2()//Position - 0x101
{
	if (!unk_0xF1734B55490E9045(Local_36.f_58))
	{
		unk_0x3857DADBD6EC8A54(Local_36.f_58);
	}
	func_41(2);
	func_37(&Local_36);
}

void func_3()//Position - 0x129
{
	if (!unk_0xF1734B55490E9045(Local_36.f_57))
	{
		unk_0x3857DADBD6EC8A54(Local_36.f_57);
	}
	func_41(1);
	func_37(&Local_36);
}

void func_4()//Position - 0x151
{
	switch (Local_36.f_3)
	{
		case 9:
			unk_0x4B656426561BA934(1435f, -2385f, 1690f, -1885f);
			break;
	}
	switch (Local_36.f_53)
	{
		case 0:
			if (func_26(&Local_36))
			{
				Local_36.f_44 = 0;
				Local_36.f_53++;
			}
			break;
		
		case 1:
			if (func_25(&Local_36))
			{
				Local_36.f_44 = 0;
				Local_36.f_53++;
			}
			break;
		
		case 2:
			func_23();
			func_22();
			func_21(&Local_53);
			func_6(&Local_53);
			break;
	}
	if (Local_36.f_46 >= Local_36.f_45)
	{
		Local_36 = 2;
		Local_36.f_1 = 1;
	}
	if (unk_0xF0F2FC9DE291567F(func_5(Local_36.f_3), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), true) > 300f)
	{
		Local_36 = 2;
		Local_36.f_1 = 2;
	}
}

Vector3 func_5(int iParam0)//Position - 0x226
{
	switch (iParam0)
	{
		case 2:
			return 2147.317f, 4795.208f, 40.08961f;
			break;
		
		case 9:
			return 1524.329f, -2108.269f, 75.7248f;
			break;
		
		case 10:
			return -1172.195f, -1577.427f, 3.38152f;
			break;
		
		case 1:
			return 898.3718f, -177.0764f, 72.68348f;
			break;
		
		case 4:
			return 1191.302f, 2672.064f, 36.73154f;
			break;
		
		case 3:
			return -1584.333f, 5193.487f, 2.95912f;
			break;
		
		case 0:
			return 408.3429f, -1623.836f, 28.29278f;
			break;
		
		case 8:
			return -1339.489f, -21.19435f, 50.34566f;
			break;
		
		case 5:
			return 336.207f, 172.4251f, 102.2055f;
			break;
		
		case 6:
			return 394.5495f, -703.3795f, 28.27281f;
			break;
		
		case 7:
			return -1413.184f, -206.0555f, 46.29474f;
			break;
		
		case 11:
			return -560.3809f, 274.5476f, 82.02014f;
			break;
		
		case 12:
			return 221.0845f, 340.7849f, 104.5883f;
			break;
		
		case 13:
			return -296.7154f, 6259.732f, 30.49339f;
			break;
		
		case 14:
			return -2201.402f, 4291f, 47.32429f;
			break;
	}
	return 10f, 10f, 10f;
}

void func_6(int iParam0)//Position - 0x3D9
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	var uVar3;
	
	iVar1 = 0;
	while (iVar1 < 5)
	{
		switch ((*iParam0)[iVar1 /*122*/])
		{
			case 1:
				switch ((iParam0[iVar1 /*122*/])->f_1)
				{
					case 0:
						if (Local_36.f_46 >= (iParam0[iVar1 /*122*/])->f_74)
						{
							(iParam0[iVar1 /*122*/])->f_1 = 1;
						}
						break;
					
					case 1:
						if (func_18(&vVar2, &uVar3))
						{
							(iParam0[iVar1 /*122*/])->f_1 = 2;
							(iParam0[iVar1 /*122*/])->f_76 = { vVar2 };
							(iParam0[iVar1 /*122*/])->f_79 = uVar3;
						}
						break;
					
					case 2:
						if (func_16(iParam0, iVar1))
						{
							if (func_13(iParam0, iVar1))
							{
								func_12(iParam0, iVar1);
								(iParam0[iVar1 /*122*/])->f_1 = 3;
							}
						}
						break;
					
					case 3:
						iVar0 = 0;
						while (iVar0 < 4)
						{
							if (unk_0x724D816EA203A79E((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/]))
							{
								if (!unk_0x1D403DFADBC2DE3C((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 0))
								{
									switch ((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_9)
									{
										case 1:
											if ((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_10 == 0)
											{
												unk_0x80F51E5792576467((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 0);
												unk_0x54480313BB3E8DD0((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 2);
												unk_0x91629AC1E1F78419((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 1, unk_0x5237AF95232D78C5((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 0));
												unk_0x91629AC1E1F78419((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 3, !unk_0x5237AF95232D78C5((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 0));
												if ((iParam0[iVar1 /*122*/])->f_75 == iVar0)
												{
													unk_0x86C54B1EBF2170F2((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 13, 10f);
													unk_0x91629AC1E1F78419((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 31, true);
												}
												if ((iParam0[iVar1 /*122*/])->f_75 != iVar0)
												{
													unk_0x0CDCCB9F1AE1A3E9((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], (iParam0[iVar1 /*122*/])->f_2[(iParam0[iVar1 /*122*/])->f_75 /*20*/], 0f, 0f, 0f, 5f, 0);
												}
												unk_0xB90F3BE2A1EF63DB((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 300f, 0);
												unk_0x2E35C4FA5F0ED22F((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], false);
												(iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_11 = unk_0x105601648511CC64();
												(iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_10 = 1;
											}
											if ((iParam0[iVar1 /*122*/])->f_75 != iVar0)
											{
												if ((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_11 != 0)
												{
													if ((unk_0x105601648511CC64() - (iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_11) > 10000)
													{
														(iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_10 = 0;
														(iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_9 = 3;
													}
												}
											}
											if ((iParam0[iVar1 /*122*/])->f_75 == iVar0)
											{
												if ((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_11 != 0)
												{
													if ((unk_0x105601648511CC64() - (iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_11) > 25000 || unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), unk_0x541C2AEF053615BC((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], true), true) < 25f)
													{
														(iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_10 = 0;
														(iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_9 = 3;
													}
												}
											}
											break;
										
										case 3:
											if ((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_10 == 0)
											{
												unk_0xED9A67BF9F6ED860((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 0);
												unk_0x54480313BB3E8DD0((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 2);
												unk_0x91629AC1E1F78419((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 1, false);
												unk_0x91629AC1E1F78419((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 3, true);
												unk_0xB90F3BE2A1EF63DB((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 300f, 0);
												unk_0x2E35C4FA5F0ED22F((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], false);
												(iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_10 = 1;
											}
											break;
									}
									func_10(iParam0, iVar1, iVar0, Local_36.f_54);
								}
								else
								{
									func_8(iParam0, iVar1, iVar0);
									func_7(&Local_36);
								}
							}
							iVar0++;
						}
						break;
				}
				break;
		}
		iVar1++;
	}
}

void func_7(var uParam0)//Position - 0x7B5
{
	uParam0->f_46++;
}

void func_8(int iParam0, int iParam1, int iParam2)//Position - 0x7C7
{
	if (unk_0x724D816EA203A79E((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/]))
	{
		if (!unk_0x1D403DFADBC2DE3C((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/], 0))
		{
			unk_0x22321800954A532E((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/], true);
		}
		unk_0x02537C8C1BEEB477(&((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/]));
		func_9(&((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_1));
	}
}

void func_9(int iParam0)//Position - 0x82A
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0x2DA8CA50A72528FB(*iParam0))
	{
		unk_0x07B8ECB35A4ED3AC(iParam0);
		bVar0 = true;
	}
	if (unk_0x2DA8CA50A72528FB(iParam0->f_1))
	{
		unk_0x07B8ECB35A4ED3AC(&(iParam0->f_1));
		bVar0 = true;
	}
	if (unk_0x724D816EA203A79E(iParam0->f_7))
	{
		if (!unk_0x1D403DFADBC2DE3C(iParam0->f_7, 0))
		{
			if (unk_0x313CE760FC65D99D(iParam0->f_7))
			{
				unk_0xEA5D20C7C39B0EC6(iParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*iParam0 = { Var1 };
	}
}

void func_10(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x89C
{
	func_11((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/], &((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_1), -1, 0, !bParam3, 0, 300f, 0, -1, -1, 1);
}

int func_11(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x8D2
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0xFC1CAE18F3ECBF2D();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (!unk_0x313CE760FC65D99D(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0xEA5D20C7C39B0EC6(iParam0, 1);
			}
			else
			{
				unk_0x12CB6C9EAE68146D(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0x170F151F41735501(iParam0, iParam2);
			unk_0xBC50F5569FE1782F(iParam0, fParam6);
			if (unk_0x2DA8CA50A72528FB(*uParam1))
			{
				unk_0x12DB69036F6569F7(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			unk_0x92AAB9588E601C23(iParam0, iParam9);
		}
		unk_0xD09C169D88640D1B(iParam0, bParam4);
		unk_0x1A3FEAE5BF447BC7(iParam0, iParam5);
		*uParam1 = unk_0x7B2A47C84FD0CB9D(iParam0);
		if (!iParam9 == -1)
		{
			if (unk_0x2DA8CA50A72528FB(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0x0D5352939CC40C16(*uParam1, iParam8);
				}
				if (!unk_0xF1734B55490E9045(sParam7))
				{
					unk_0xB53F9D0C08974999("STRING");
					if (bParam10)
					{
						unk_0x607C19B90D297FE2(sParam7);
					}
					else
					{
						unk_0xC9C304D0AABE1335(sParam7);
					}
					unk_0x2E02627BEA5751E0(*uParam1);
				}
				unk_0x12DB69036F6569F7(*uParam1, 7);
			}
		}
		if (!unk_0xFA30DFD0084E92FE(uParam1->f_6, 2))
		{
			if (unk_0x2DA8CA50A72528FB(*uParam1))
			{
				unk_0xF0059F27F7BB6680(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x5237AF95232D78C5(iParam0, 0))
		{
			uParam1->f_1 = unk_0x5556F7BFA35E0D94(iParam0);
			if (!unk_0xFA30DFD0084E92FE(uParam1->f_6, 3))
			{
				if (unk_0x2DA8CA50A72528FB(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						unk_0x0D5352939CC40C16(uParam1->f_1, iParam8);
					}
					if (!unk_0xF1734B55490E9045(sParam7))
					{
						unk_0xB53F9D0C08974999("STRING");
						if (bParam10)
						{
							unk_0x607C19B90D297FE2(sParam7);
						}
						else
						{
							unk_0xC9C304D0AABE1335(sParam7);
						}
						unk_0x2E02627BEA5751E0(uParam1->f_1);
					}
					unk_0x12DB69036F6569F7(uParam1->f_1, 7);
					unk_0xF0059F27F7BB6680(&(uParam1->f_6), 3);
				}
			}
			else if (!unk_0x2DA8CA50A72528FB(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				unk_0x7CB6FD92BE491AD9(&(uParam1->f_6), 3);
			}
		}
		else if (unk_0x2DA8CA50A72528FB(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x7CB6FD92BE491AD9(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_12(int iParam0, int iParam1)//Position - 0xAA5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (iParam0[iParam1 /*122*/])->f_6F)
	{
		(iParam0[iParam1 /*122*/])->f_2[iVar0 /*20*/].f_9 = 1;
		iVar0++;
	}
}

int func_13(int iParam0, int iParam1)//Position - 0xAD5
{
	int iVar0;
	
	if ((iParam0[iParam1 /*122*/])->f_71 == (iParam0[iParam1 /*122*/])->f_6F)
	{
		return 1;
	}
	else
	{
		iVar0 = (iParam0[iParam1 /*122*/])->f_71;
		if (!unk_0x724D816EA203A79E((iParam0[iParam1 /*122*/])->f_2[iVar0 /*20*/]))
		{
			(iParam0[iParam1 /*122*/])->f_2[iVar0 /*20*/].f_A = { (iParam0[iParam1 /*122*/])->f_76 };
			(iParam0[iParam1 /*122*/])->f_2[iVar0 /*20*/].f_D = (iParam0[iParam1 /*122*/])->f_79;
			(iParam0[iParam1 /*122*/])->f_2[iVar0 /*20*/] = func_15(iParam0, iParam1, iVar0);
			func_14((iParam0[iParam1 /*122*/])->f_2[iVar0 /*20*/], Local_36, (iParam0[iParam1 /*122*/])->f_2[iVar0 /*20*/].f_F);
			(iParam0[iParam1 /*122*/])->f_71++;
		}
	}
	return 0;
}

void func_14(int iParam0, struct<61> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, int iParam32)//Position - 0xB91
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
		{
			iVar0 = Param1.f_3C[unk_0x491B2241281A03B7(0, 3)];
			if (iParam32 != 0)
			{
				iVar0 = iParam32;
			}
			unk_0x7A535CE1F001F3FE(iParam0, iVar0, -1, true, true);
			unk_0x8E25082A46F87892(iParam0, iVar0, true);
			unk_0x97AA3135A3018C3C(iParam0, 1, iVar0);
		}
	}
}

int func_15(int iParam0, int iParam1, int iParam2)//Position - 0xBE2
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x01B3635C3E8EDD81(26, Local_36.f_35[0], (iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_A, (iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_D, 1, true);
	unk_0x566684DB6DAC0531(iVar0, true);
	unk_0xF7CDBCD11F31B71A(iVar0, 1);
	unk_0x4106FAF8AA1D69D5(iVar0, Local_36.f_34);
	unk_0xE43AD8CB1B4DDED9(iVar0, 1, 0);
	unk_0x91629AC1E1F78419(iVar0, 5, true);
	unk_0xEB061E1EBFED4D59(iVar0, 1);
	unk_0xC8FD3EBBB90E8D7F(iVar0, 42, true);
	unk_0xC8FD3EBBB90E8D7F(iVar0, 132, true);
	unk_0x86C54B1EBF2170F2(iVar0, 12, 30f);
	unk_0xFC3C88E2313FA926(iVar0, 5);
	if ((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_12 != -1 && (iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_13 != -2)
	{
		iVar1 = (iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_12;
		if (unk_0x724D816EA203A79E((iParam0[iParam1 /*122*/])->f_53[iVar1 /*9*/]))
		{
			if (!unk_0x1D403DFADBC2DE3C((iParam0[iParam1 /*122*/])->f_53[iVar1 /*9*/], 0))
			{
				unk_0xBD53A029D0155A42(iVar0, (iParam0[iParam1 /*122*/])->f_53[iVar1 /*9*/], (iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_13);
			}
		}
	}
	iLocal_52 = unk_0x105601648511CC64() + 1000;
	return iVar0;
}

int func_16(int iParam0, int iParam1)//Position - 0xCFB
{
	int iVar0;
	
	if ((iParam0[iParam1 /*122*/])->f_72 == (iParam0[iParam1 /*122*/])->f_70)
	{
		return 1;
	}
	else
	{
		iVar0 = (iParam0[iParam1 /*122*/])->f_72;
		if (!unk_0x724D816EA203A79E((iParam0[iParam1 /*122*/])->f_53[iVar0 /*9*/]))
		{
			(iParam0[iParam1 /*122*/])->f_53[iVar0 /*9*/].f_1 = { (iParam0[iParam1 /*122*/])->f_76 };
			(iParam0[iParam1 /*122*/])->f_53[iVar0 /*9*/].f_7 = (iParam0[iParam1 /*122*/])->f_79;
			(iParam0[iParam1 /*122*/])->f_53[iVar0 /*9*/] = func_17(iParam0, iParam1, iVar0);
			(iParam0[iParam1 /*122*/])->f_72++;
		}
	}
	return 0;
}

int func_17(int iParam0, int iParam1, int iParam2)//Position - 0xD94
{
	int iVar0;
	
	iVar0 = unk_0x61C05BF08A1E0EFE((iParam0[iParam1 /*122*/])->f_53[iParam2 /*9*/].f_8, (iParam0[iParam1 /*122*/])->f_53[iParam2 /*9*/].f_1, (iParam0[iParam1 /*122*/])->f_53[iParam2 /*9*/].f_7, true, true, false);
	unk_0x251D94F557BABE92(iVar0, 0);
	return iVar0;
}

int func_18(var uParam0, var uParam1)//Position - 0xDDA
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = unk_0x491B2241281A03B7(0, 10);
	vVar1 = { Local_36.f_8[iVar0 /*3*/] };
	if (func_19(vVar1, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1123024896, 1, 1103626240))
	{
		*uParam0 = { vVar1 };
		*uParam1 = Local_36.f_27[iVar0];
		return 1;
	}
	return 0;
}

int func_19(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, float fParam6, int iParam7, float fParam8)//Position - 0xE3C
{
	if (func_20(vParam0))
	{
		return 0;
	}
	if (fParam1 > 0f)
	{
		if (unk_0x38B362A95EA24163(vParam0, fParam1))
		{
			return 0;
		}
	}
	if (fParam2 > 0f)
	{
		if (unk_0xAE7193AAF1ECF1DB(vParam0.x, vParam0.y, (vParam0.z + 1f), fParam2) || unk_0xAE7193AAF1ECF1DB(vParam0, fParam2))
		{
			return 0;
		}
	}
	if (fParam3 > 0f)
	{
		if (unk_0x85BF1D9693A8E47F(vParam0, fParam3, 0))
		{
			return 0;
		}
	}
	if (iParam7 == 1)
	{
		if (unk_0x90629C6D0C640733(vParam0, 1.5f) > 0)
		{
			return 0;
		}
	}
	if (iParam5 == 1)
	{
		if (fParam4 > 0f)
		{
			if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), vParam0, true) <= (fParam6 + fParam4))
			{
				if (unk_0x33CC9445B2DF9387(vParam0, fParam4))
				{
					return 0;
				}
			}
		}
	}
	if (fParam8 > 0f)
	{
		if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), vParam0, true) < fParam8)
		{
			return 0;
		}
	}
	return 1;
}

int func_20(vector3 vParam0)//Position - 0xF2C
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_21(int iParam0)//Position - 0xF56
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		switch ((*iParam0)[iVar0 /*122*/])
		{
			case 0:
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (unk_0x724D816EA203A79E((iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/]))
					{
						if (!unk_0x1D403DFADBC2DE3C((iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/], 0))
						{
							switch ((iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/].f_9)
							{
								case 2:
									if (unk_0x8F97799512B006B7((iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/], 0) || Local_36.f_54 == 1)
									{
										Local_36.f_54 = 1;
										(iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/].f_10 = 0;
										(iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/].f_9 = 3;
									}
									break;
								
								case 3:
									if ((iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/].f_10 == 0)
									{
										unk_0xB90F3BE2A1EF63DB((iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/], 150f, 0);
										(iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/].f_10 = 1;
									}
									break;
							}
							func_10(iParam0, iVar0, iVar1, Local_36.f_54);
						}
						else
						{
							func_8(iParam0, iVar0, iVar1);
							func_7(&Local_36);
						}
					}
					iVar1++;
				}
				break;
		}
		iVar0++;
	}
}

void func_22()//Position - 0x107E
{
	if (Local_36.f_59 == 0)
	{
		if (Local_36.f_47 == 1)
		{
			if (!unk_0xF1734B55490E9045(Local_36.f_55))
			{
				if (unk_0x3857DADBD6EC8A54(Local_36.f_55))
				{
					Local_36.f_59 = 1;
				}
			}
		}
	}
	if (Local_36.f_5A == 0)
	{
		if (Local_36.f_54 == 1)
		{
			if (!unk_0xF1734B55490E9045(Local_36.f_56))
			{
				if (unk_0x3857DADBD6EC8A54(Local_36.f_56))
				{
					Local_36.f_5A = 1;
				}
			}
		}
	}
}

void func_23()//Position - 0x10DE
{
	int iVar0;
	int iVar1;
	
	if (Local_36.f_47 == 0)
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (iVar1 == 0)
			{
				if (unk_0x2DA8CA50A72528FB(Local_53[0 /*122*/].f_2[iVar0 /*20*/].f_1))
				{
					func_24("PMD_OBJ", 7500, 1);
					iVar1 = 1;
					Local_36.f_47 = 1;
				}
			}
			iVar0++;
		}
	}
}

void func_24(char* sParam0, int iParam1, int iParam2)//Position - 0x112D
{
	iParam2 = iParam2;
	unk_0x3714DE83381EADC2(sParam0);
	unk_0x41D8F63F629E76BE(iParam1, 0);
}

int func_25(var uParam0)//Position - 0x1146
{
	int iVar0;
	
	if (uParam0->f_42 == uParam0->f_40)
	{
		return 1;
	}
	else if (Local_53[uParam0->f_44 /*122*/] == 0)
	{
		if (Local_53[uParam0->f_44 /*122*/].f_71 == Local_53[uParam0->f_44 /*122*/].f_6F)
		{
			uParam0->f_44++;
		}
		else
		{
			iVar0 = Local_53[uParam0->f_44 /*122*/].f_71;
			if (!unk_0x724D816EA203A79E(Local_53[uParam0->f_44 /*122*/].f_2[iVar0 /*20*/]))
			{
				Local_53[uParam0->f_44 /*122*/].f_2[iVar0 /*20*/] = func_15(&Local_53, uParam0->f_44, iVar0);
				func_14(Local_53[uParam0->f_44 /*122*/].f_2[iVar0 /*20*/], Local_36, Local_53[uParam0->f_44 /*122*/].f_2[iVar0 /*20*/].f_F);
				Local_53[uParam0->f_44 /*122*/].f_2[iVar0 /*20*/].f_9 = 2;
				Local_53[uParam0->f_44 /*122*/].f_71++;
				uParam0->f_42++;
			}
		}
	}
	else
	{
		uParam0->f_44++;
	}
	return 0;
}

int func_26(var uParam0)//Position - 0x1232
{
	int iVar0;
	
	if (uParam0->f_43 == uParam0->f_41)
	{
		return 1;
	}
	else if (Local_53[uParam0->f_44 /*122*/] == 0)
	{
		if (Local_53[uParam0->f_44 /*122*/].f_72 == Local_53[uParam0->f_44 /*122*/].f_70)
		{
			uParam0->f_44++;
		}
		else
		{
			iVar0 = Local_53[uParam0->f_44 /*122*/].f_72;
			if (!unk_0x724D816EA203A79E(Local_53[uParam0->f_44 /*122*/].f_53[iVar0 /*9*/]))
			{
				Local_53[uParam0->f_44 /*122*/].f_53[iVar0 /*9*/] = func_17(&Local_53, uParam0->f_44, iVar0);
				Local_53[uParam0->f_44 /*122*/].f_72++;
				uParam0->f_43++;
			}
		}
	}
	else
	{
		uParam0->f_44++;
	}
	return 0;
}

void func_27()//Position - 0x12E6
{
	switch (Local_36.f_33)
	{
		case 0:
			func_31(&Local_36, func_36());
			func_30(&Local_36);
			Local_36.f_33++;
			break;
		
		case 1:
			func_29(Local_36);
			Local_36.f_33++;
			break;
		
		case 2:
			if (func_28(Local_36))
			{
				Local_36.f_33++;
			}
			break;
		
		case 3:
			if (unk_0xB2CB6EAA6B280A84("PMD_ENEMIES", &(Local_36.f_34)))
			{
				unk_0xA902E18EDF6FA0C8(5, 1862763509, Local_36.f_34);
				unk_0xA902E18EDF6FA0C8(5, Local_36.f_34, -1533126372);
				unk_0xA902E18EDF6FA0C8(5, Local_36.f_34, 1862763509);
				unk_0xA902E18EDF6FA0C8(1, Local_36.f_34, Local_36.f_34);
			}
			Local_36 = 1;
			break;
	}
}

int func_28(struct<61> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)//Position - 0x13A6
{
	if (((((((((((Param0.f_35[0] == 0 || unk_0xD6513D668481290A(Param0.f_35[0])) && (Param0.f_35[1] == 0 || unk_0xD6513D668481290A(Param0.f_35[1]))) && (Param0.f_35[2] == 0 || unk_0xD6513D668481290A(Param0.f_35[2]))) && (Param0.f_39[0] == 0 || unk_0xD6513D668481290A(Param0.f_39[0]))) && (Param0.f_39[1] == 0 || unk_0xD6513D668481290A(Param0.f_39[1]))) && (Param0.f_39[0] == 0 || unk_0x317B2443006524C2(Param0.f_39[0]))) && (Param0.f_39[1] == 0 || unk_0x317B2443006524C2(Param0.f_39[1]))) && (Param0.f_3C[0] == 0 || unk_0x696DA708CCD839AD(Param0.f_3C[0]))) && (Param0.f_3C[1] == 0 || unk_0x696DA708CCD839AD(Param0.f_3C[1]))) && (Param0.f_3C[2] == 0 || unk_0x696DA708CCD839AD(Param0.f_3C[2]))) && unk_0xFA9040D29FE330BD(0))
	{
		return 1;
	}
	return 0;
}

void func_29(struct<61> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)//Position - 0x14F1
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Param0.f_35[iVar0] != 0)
		{
			unk_0xF243B7A14FCFD0F4(Param0.f_35[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Param0.f_39[iVar0] != 0)
		{
			unk_0xF243B7A14FCFD0F4(Param0.f_39[iVar0]);
			unk_0x3B6B082832176FA5(Param0.f_39[iVar0], 3);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Param0.f_3C[iVar0] != 0)
		{
			unk_0x10DE9785302A9E9F(Param0.f_3C[iVar0], 31, 0);
		}
		iVar0++;
	}
	unk_0x900CF084251DED26("PMD", 0);
}

void func_30(var uParam0)//Position - 0x158F
{
	if (!func_20(uParam0->f_4C) && !func_20(uParam0->f_4F))
	{
		uParam0->f_52 = unk_0x1DAA351326EA3537((uParam0->f_4C - uParam0->f_4F), (uParam0->f_4C.f_1 - uParam0->f_4F.f_1), (uParam0->f_4C.f_2 - uParam0->f_4F.f_2), (uParam0->f_4C + uParam0->f_4F), (uParam0->f_4C.f_1 + uParam0->f_4F.f_1), (uParam0->f_4C.f_2 + uParam0->f_4F.f_2), 0, 1, 1, 1);
	}
	if (!func_20(uParam0->f_48) && !uParam0->f_4B <= 0f)
	{
		unk_0x6C5F5B5F6894CCE3(uParam0->f_48, uParam0->f_4B, 1, 0, 0, false);
	}
}

void func_31(var uParam0, int iParam1)//Position - 0x1633
{
	switch (iParam1)
	{
		case 9:
			uParam0->f_3 = 9;
			uParam0->f_4 = func_34();
			uParam0->f_5 = { 1533.77f, -2135.35f, 82.04f };
			uParam0->f_2 = 4;
			uParam0->f_35[0] = joaat("g_m_y_lost_01");
			uParam0->f_35[1] = 0;
			uParam0->f_35[2] = 0;
			uParam0->f_39[0] = joaat("gburrito");
			uParam0->f_39[1] = joaat("hexer");
			uParam0->f_3C[0] = joaat("weapon_pistol");
			uParam0->f_3C[1] = joaat("weapon_sawnoffshotgun");
			uParam0->f_3C[2] = joaat("weapon_assaultrifle");
			uParam0->f_48 = { 1533.77f, -2135.35f, 82.04f };
			uParam0->f_4B = 90f;
			uParam0->f_4C = { 1533.77f, -2135.35f, 82.04f };
			uParam0->f_4F = { 54f, 72f, 8f };
			uParam0->f_32 = 9;
			uParam0->f_8[0 /*3*/] = { 1578.134f, -2317.858f, 86.636f };
			uParam0->f_27[0] = 36.2503f;
			uParam0->f_8[1 /*3*/] = { 1571.414f, -2314.379f, 86.0904f };
			uParam0->f_27[1] = 37.4325f;
			uParam0->f_8[2 /*3*/] = { 1555.674f, -2321.857f, 85.2531f };
			uParam0->f_27[2] = 2.4637f;
			uParam0->f_8[3 /*3*/] = { 1516.694f, -1980.273f, 70.1538f };
			uParam0->f_27[3] = 203.6018f;
			uParam0->f_8[4 /*3*/] = { 1505.077f, -1978.409f, 69.794f };
			uParam0->f_27[4] = 217.0733f;
			uParam0->f_8[5 /*3*/] = { 1498.166f, -1981.469f, 69.5705f };
			uParam0->f_27[5] = 256.7048f;
			uParam0->f_8[6 /*3*/] = { 1670.858f, -2022.844f, 99.5899f };
			uParam0->f_27[6] = 142.5751f;
			uParam0->f_8[7 /*3*/] = { 1677.085f, -2035.785f, 98.5593f };
			uParam0->f_27[7] = 109.2985f;
			uParam0->f_8[8 /*3*/] = { 1659.187f, -2090.027f, 99.2239f };
			uParam0->f_27[8] = 9.0974f;
			Local_53[0 /*122*/] = 0;
			Local_53[0 /*122*/].f_6F = 4;
			Local_53[0 /*122*/].f_70 = 2;
			Local_53[0 /*122*/].f_53[0 /*9*/].f_1 = { 1533.375f, -2087.209f, 76.0832f };
			Local_53[0 /*122*/].f_53[0 /*9*/].f_7 = 152.9678f;
			Local_53[0 /*122*/].f_53[0 /*9*/].f_8 = joaat("gburrito");
			Local_53[0 /*122*/].f_53[1 /*9*/].f_1 = { 1547.824f, -2091.365f, 76.1018f };
			Local_53[0 /*122*/].f_53[1 /*9*/].f_7 = 55.5566f;
			Local_53[0 /*122*/].f_53[1 /*9*/].f_8 = joaat("gburrito");
			Local_53[0 /*122*/].f_2[0 /*20*/].f_A = { 1525.76f, -2092.838f, 76.0174f };
			Local_53[0 /*122*/].f_2[0 /*20*/].f_D = 232.9176f;
			Local_53[0 /*122*/].f_2[1 /*20*/].f_A = { 1527.138f, -2091.832f, 76.031f };
			Local_53[0 /*122*/].f_2[1 /*20*/].f_D = 190.6337f;
			Local_53[0 /*122*/].f_2[2 /*20*/].f_A = { 1523.108f, -2115.134f, 75.6351f };
			Local_53[0 /*122*/].f_2[2 /*20*/].f_D = 350.4627f;
			Local_53[0 /*122*/].f_2[3 /*20*/].f_A = { 1522.629f, -2112.768f, 75.6853f };
			Local_53[0 /*122*/].f_2[3 /*20*/].f_D = 264.9478f;
			Local_53[1 /*122*/] = 1;
			Local_53[1 /*122*/].f_6F = 4;
			Local_53[1 /*122*/].f_70 = 1;
			Local_53[1 /*122*/].f_74 = 2;
			Local_53[1 /*122*/].f_53[0 /*9*/].f_8 = joaat("gburrito");
			Local_53[1 /*122*/].f_2[0 /*20*/].f_12 = 0;
			Local_53[1 /*122*/].f_2[0 /*20*/].f_13 = -1;
			Local_53[1 /*122*/].f_2[0 /*20*/].f_F = joaat("weapon_pistol");
			Local_53[1 /*122*/].f_2[1 /*20*/].f_12 = 0;
			Local_53[1 /*122*/].f_2[1 /*20*/].f_13 = 0;
			Local_53[1 /*122*/].f_2[1 /*20*/].f_F = joaat("weapon_pistol");
			Local_53[1 /*122*/].f_2[2 /*20*/].f_12 = 0;
			Local_53[1 /*122*/].f_2[2 /*20*/].f_13 = 1;
			Local_53[1 /*122*/].f_2[2 /*20*/].f_F = joaat("weapon_assaultrifle");
			Local_53[1 /*122*/].f_2[3 /*20*/].f_12 = 0;
			Local_53[1 /*122*/].f_2[3 /*20*/].f_13 = 2;
			Local_53[1 /*122*/].f_2[3 /*20*/].f_F = joaat("weapon_assaultrifle");
			Local_53[2 /*122*/] = 1;
			Local_53[2 /*122*/].f_6F = 4;
			Local_53[2 /*122*/].f_70 = 1;
			Local_53[2 /*122*/].f_74 = 3;
			Local_53[2 /*122*/].f_53[0 /*9*/].f_8 = joaat("gburrito");
			Local_53[2 /*122*/].f_2[0 /*20*/].f_12 = 0;
			Local_53[2 /*122*/].f_2[0 /*20*/].f_13 = -1;
			Local_53[2 /*122*/].f_2[0 /*20*/].f_F = joaat("weapon_pistol");
			Local_53[2 /*122*/].f_2[1 /*20*/].f_12 = 0;
			Local_53[2 /*122*/].f_2[1 /*20*/].f_13 = 0;
			Local_53[2 /*122*/].f_2[1 /*20*/].f_F = joaat("weapon_pistol");
			Local_53[2 /*122*/].f_2[2 /*20*/].f_12 = 0;
			Local_53[2 /*122*/].f_2[2 /*20*/].f_13 = 1;
			Local_53[2 /*122*/].f_2[2 /*20*/].f_F = joaat("weapon_assaultrifle");
			Local_53[2 /*122*/].f_2[3 /*20*/].f_12 = 0;
			Local_53[2 /*122*/].f_2[3 /*20*/].f_13 = 2;
			Local_53[2 /*122*/].f_2[3 /*20*/].f_F = joaat("weapon_assaultrifle");
			break;
		
		default:
			uParam0->f_2 = 6;
			uParam0->f_35[0] = joaat("g_m_y_mexgoon_01");
			uParam0->f_35[1] = joaat("g_m_y_mexgoon_02");
			uParam0->f_35[2] = joaat("g_m_y_mexgoon_03");
			uParam0->f_3C[0] = joaat("weapon_pistol");
			uParam0->f_3C[1] = joaat("weapon_microsmg");
			uParam0->f_3C[2] = joaat("weapon_assaultrifle");
			uParam0->f_45 = 10;
			break;
	}
	func_33(uParam0);
	func_32(uParam0);
}

void func_32(var uParam0)//Position - 0x1BC3
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Local_53[iVar0 /*122*/] == 0)
		{
			uParam0->f_40 = (uParam0->f_40 + Local_53[iVar0 /*122*/].f_6F);
			uParam0->f_41 = (uParam0->f_41 + Local_53[iVar0 /*122*/].f_70);
		}
		uParam0->f_45 = (uParam0->f_45 + Local_53[iVar0 /*122*/].f_6F);
		iVar0++;
	}
}

void func_33(var uParam0)//Position - 0x1C1A
{
	switch (uParam0->f_3)
	{
		case 9:
			switch (uParam0->f_4)
			{
				case 0:
					uParam0->f_55 = "PM_CV1_START";
					uParam0->f_56 = "PM_CV1_GF";
					uParam0->f_57 = "PM_CV1_STOP";
					uParam0->f_58 = "PM_CV1_FAIL";
					uParam0->f_59 = 0;
					uParam0->f_5A = 0;
					break;
				
				case 1:
					uParam0->f_55 = "PM_CV2_START";
					uParam0->f_56 = "PM_CV2_GF";
					uParam0->f_57 = "PM_CV2_STOP";
					uParam0->f_58 = "PM_CV2_FAIL";
					uParam0->f_59 = 0;
					uParam0->f_5A = 0;
					break;
			}
			break;
	}
}

int func_34()//Position - 0x1C9B
{
	return func_35(Global_195FA.f_14, Global_195FA.f_1D);
}

int func_35(int iParam0, int iParam1)//Position - 0x1CB3
{
	switch (iParam0)
	{
		case 9:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_36()//Position - 0x1CED
{
	return Global_195FA.f_14;
}

void func_37(var uParam0)//Position - 0x1CFB
{
	func_40(*uParam0);
	func_39(&Local_53);
	func_38(&Local_53);
	if (uParam0->f_52 != 0)
	{
		unk_0x483687B0FCA5415A(uParam0->f_52, 0);
	}
	unk_0x95E4B6F3ED223F5A();
}

void func_38(var uParam0)//Position - 0x1D2D
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (unk_0x724D816EA203A79E((uParam0[iVar0 /*122*/])->f_53[iVar1 /*9*/]))
			{
				unk_0x1E7A09C1710FB071(&((uParam0[iVar0 /*122*/])->f_53[iVar1 /*9*/]));
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_39(var uParam0)//Position - 0x1D7C
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			func_8(uParam0, iVar0, iVar1);
			iVar1++;
		}
		iVar0++;
	}
}

void func_40(struct<61> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)//Position - 0x1DB2
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Param0.f_35[iVar0] != 0)
		{
			unk_0x2CA123B0622F495C(Param0.f_35[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Param0.f_39[iVar0] != 0)
		{
			unk_0x2CA123B0622F495C(Param0.f_39[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Param0.f_3C[iVar0] != 0)
		{
			unk_0x5357DC61899A5365(Param0.f_3C[iVar0]);
		}
		iVar0++;
	}
}

void func_41(int iParam0)//Position - 0x1E38
{
	Global_195FA.f_16 = iParam0;
}

