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
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49[4] = { 0, 0, 0, 0 };
	int iLocal_50 = 0;
	int iLocal_51[4] = { 0, 0, 0, 0 };
	int iLocal_52 = 0;
	vector3 vLocal_53[4] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_54 = { 0f, 0f, 0f };
	int iLocal_55 = 0;
	bool bLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	bool bLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	float fLocal_63 = 0f;
	float fLocal_64 = 0f;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	bool bLocal_73 = 0;
	var uLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
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
	bLocal_56 = true;
	iLocal_62 = joaat("s_m_m_pilot_01");
	iLocal_77 = 500;
	if (unk_0xE8A79675302ED812(3))
	{
		func_12();
	}
	iLocal_75 = unk_0xBC25C936A095B5BA();
	while (true)
	{
		if (unk_0x1D403DFADBC2DE3C(iLocal_75, 0))
		{
			iLocal_76 = 5;
		}
		switch (iLocal_76)
		{
			case 0:
				iLocal_76 = 1;
				break;
			
			case 1:
				func_11();
				iLocal_76 = 2;
				break;
			
			case 2:
				if (func_10())
				{
					iLocal_76 = 3;
				}
				break;
			
			case 3:
				func_9();
				iLocal_76 = 4;
				break;
			
			case 4:
				if (Global_15FAC)
				{
					iLocal_76 = 5;
				}
				func_4();
				break;
			
			case 5:
				func_1();
				func_12();
				break;
		}
		SYSTEM::WAIT(iLocal_77);
	}
}

void func_1()//Position - 0x11A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x724D816EA203A79E(iLocal_49[iVar0]))
		{
			if (unk_0x41A5D6415E2CC10E(iLocal_49[iVar0]) || (!unk_0x1D403DFADBC2DE3C(iLocal_49[iVar0], 0) && !unk_0x8F6EAC9E7D6812D5(iLocal_49[iVar0])))
			{
				unk_0xCF6040807CC0E4A5(&(iLocal_49[iVar0]));
				unk_0xF845620A03C7425B(&(iLocal_51[iVar0]));
			}
			else
			{
				if (iVar0 == 0 || iVar0 == 2)
				{
					func_3(1);
				}
				func_2(&(iLocal_49[iVar0]), &(iLocal_51[iVar0]));
				unk_0x1E7A09C1710FB071(&(iLocal_49[iVar0]));
				unk_0x02537C8C1BEEB477(&(iLocal_51[iVar0]));
			}
		}
		iVar0++;
	}
	if (unk_0x724D816EA203A79E(iLocal_50))
	{
		if (unk_0x41A5D6415E2CC10E(iLocal_50))
		{
			unk_0xCF6040807CC0E4A5(&iLocal_50);
			unk_0xF845620A03C7425B(&iLocal_52);
		}
		else
		{
			func_2(&iLocal_50, &iLocal_52);
			unk_0x1E7A09C1710FB071(&iLocal_50);
			unk_0x02537C8C1BEEB477(&iLocal_52);
		}
	}
	if (bLocal_60)
	{
		unk_0x4F5DAC981AF98536(101, "AirportJetTakeOff");
		unk_0x4F5DAC981AF98536(102, "AirportJetTakeOff");
		unk_0x4F5DAC981AF98536(101, "AirportNew");
		unk_0x4F5DAC981AF98536(102, "AirportNew");
		unk_0x4F5DAC981AF98536(103, "AirplaneLandingRedux");
		unk_0x4F5DAC981AF98536(104, "AirplaneLandingRedux");
		unk_0x4F5DAC981AF98536(101, "EastWestFlight");
	}
}

void func_2(int iParam0, var uParam1)//Position - 0x233
{
	if (((unk_0x724D816EA203A79E(*iParam0) && unk_0x724D816EA203A79E(*uParam1)) && !unk_0x1D403DFADBC2DE3C(*iParam0, 0)) && !unk_0x1D403DFADBC2DE3C(*uParam1, 0))
	{
		if (unk_0x2A348A3A98B80B13(*iParam0))
		{
			if (unk_0xB34E411B0A4BF096(*iParam0))
			{
				if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
				{
					unk_0xA7EC3DF47EFA2131(*uParam1, *iParam0, 0, 0, unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 8, 50f, -1f, 30f, 100, 50, 1);
				}
			}
		}
	}
}

void func_3(bool bParam0)//Position - 0x2B4
{
	if (bLocal_56)
	{
		if (unk_0x724D816EA203A79E(iLocal_49[0]) && !unk_0x1D403DFADBC2DE3C(iLocal_49[0], 0))
		{
			if (unk_0x2A348A3A98B80B13(iLocal_49[0]))
			{
				if (!unk_0xB34E411B0A4BF096(iLocal_49[0]))
				{
					if ((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !unk_0x1D403DFADBC2DE3C(iLocal_51[0], 0)) && !unk_0x1D403DFADBC2DE3C(iLocal_49[0], 0))
					{
						unk_0xA7EC3DF47EFA2131(iLocal_51[0], iLocal_49[0], 0, 0, unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 8, 50f, -1f, 90f, 100, 50, 1);
					}
				}
				else if (bParam0)
				{
					if ((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !unk_0x1D403DFADBC2DE3C(iLocal_51[0], 0)) && !unk_0x1D403DFADBC2DE3C(iLocal_49[0], 0))
					{
						unk_0xA7EC3DF47EFA2131(iLocal_51[0], iLocal_49[0], 0, 0, unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 8, 50f, -1f, 90f, 100, 50, 1);
					}
				}
			}
		}
		if (unk_0x724D816EA203A79E(iLocal_49[2]) && !unk_0x1D403DFADBC2DE3C(iLocal_49[2], 0))
		{
			if (unk_0x2A348A3A98B80B13(iLocal_49[2]))
			{
				if (!unk_0xB34E411B0A4BF096(iLocal_49[2]))
				{
					if ((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !unk_0x1D403DFADBC2DE3C(iLocal_51[2], 0)) && !unk_0x1D403DFADBC2DE3C(iLocal_49[2], 0))
					{
						unk_0xA7EC3DF47EFA2131(iLocal_51[2], iLocal_49[2], 0, 0, unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 8, 50f, -1f, 90f, 100, 50, 1);
					}
				}
				else if (bParam0)
				{
					if ((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !unk_0x1D403DFADBC2DE3C(iLocal_51[2], 0)) && !unk_0x1D403DFADBC2DE3C(iLocal_49[2], 0))
					{
						unk_0xA7EC3DF47EFA2131(iLocal_51[2], iLocal_49[2], 0, 0, unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 8, 50f, -1f, 90f, 100, 50, 1);
					}
				}
			}
		}
	}
}

void func_4()//Position - 0x493
{
	int iVar0;
	
	switch (iLocal_66)
	{
		case 0:
			vLocal_53[0 /*3*/] = { -1542.113f, -3023.802f, 23.2538f };
			vLocal_53[1 /*3*/] = { -3089.888f, -1960.075f, 313.559f };
			vLocal_53[2 /*3*/] = { -1037.638f, -3316.12f, 23.2475f };
			vLocal_53[3 /*3*/] = { 451.174f, -4009.46f, 135.1171f };
			vLocal_54 = { -1612.174f, -2688.442f, 12.9444f };
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				if ((unk_0xE3CA72BD77D43B09(unk_0xBC25C936A095B5BA()) || unk_0x57379381A330B2FF(unk_0xBC25C936A095B5BA())) || unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
				{
					bLocal_56 = false;
				}
				else
				{
					bLocal_56 = true;
				}
			}
			iLocal_66 = 1;
			break;
		
		case 1:
			unk_0xF243B7A14FCFD0F4(joaat("jet"));
			unk_0xF243B7A14FCFD0F4(iLocal_62);
			unk_0x1B2A7C8188ADBE04(101, "AirportJetTakeOff");
			unk_0x1B2A7C8188ADBE04(103, "AirplaneLandingRedux");
			unk_0x1B2A7C8188ADBE04(101, "EastWestFlight");
			unk_0x1B2A7C8188ADBE04(101, "AirportNew");
			unk_0x1B2A7C8188ADBE04(104, "AirplaneLandingRedux");
			iLocal_66 = 2;
			break;
		
		case 2:
			if (!bLocal_60)
			{
				if ((((((unk_0xD6513D668481290A(joaat("jet")) && unk_0xD6513D668481290A(iLocal_62)) && unk_0x00D24B3F2A5CD22C(101, "AirportJetTakeOff")) && unk_0x00D24B3F2A5CD22C(103, "AirplaneLandingRedux")) && unk_0x00D24B3F2A5CD22C(101, "AirportNew")) && unk_0x00D24B3F2A5CD22C(104, "AirplaneLandingRedux")) && unk_0x00D24B3F2A5CD22C(101, "EastWestFlight"))
				{
					bLocal_60 = true;
				}
				else
				{
					unk_0xF243B7A14FCFD0F4(joaat("jet"));
					unk_0xF243B7A14FCFD0F4(iLocal_62);
					unk_0x1B2A7C8188ADBE04(101, "AirportJetTakeOff");
					unk_0x1B2A7C8188ADBE04(102, "AirportJetTakeOff");
					unk_0x1B2A7C8188ADBE04(101, "AirportNew");
					unk_0x1B2A7C8188ADBE04(102, "AirportNew");
					unk_0x1B2A7C8188ADBE04(101, "EastWestFlight");
				}
			}
			if (bLocal_60)
			{
				if (!unk_0x33CC9445B2DF9387(vLocal_53[0 /*3*/], 50f) && !unk_0x33CC9445B2DF9387(vLocal_54, 50f))
				{
					iLocal_66 = 3;
				}
				else
				{
					if (unk_0x33CC9445B2DF9387(vLocal_53[0 /*3*/], 50f))
					{
					}
					if (unk_0x33CC9445B2DF9387(vLocal_54, 50f))
					{
					}
				}
			}
			break;
		
		case 3:
			iLocal_49[0] = unk_0x61C05BF08A1E0EFE(joaat("jet"), vLocal_53[0 /*3*/], 0f, true, true, false);
			unk_0x019CE76D5286C95C(iLocal_49[0], 240.3179f);
			unk_0x06C06CCCDCB3FDD2(iLocal_49[0], 0);
			iLocal_49[1] = unk_0x61C05BF08A1E0EFE(joaat("jet"), vLocal_53[1 /*3*/], 0f, true, true, false);
			unk_0x06C06CCCDCB3FDD2(iLocal_49[1], 0);
			iLocal_49[2] = unk_0x61C05BF08A1E0EFE(joaat("jet"), vLocal_53[2 /*3*/], 0f, true, true, false);
			unk_0x06C06CCCDCB3FDD2(iLocal_49[2], 0);
			iLocal_49[3] = unk_0x61C05BF08A1E0EFE(joaat("jet"), vLocal_53[3 /*3*/], 0f, true, true, false);
			unk_0x06C06CCCDCB3FDD2(iLocal_49[3], 0);
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (unk_0x724D816EA203A79E(iLocal_49[iVar0]))
				{
					iLocal_51[iVar0] = unk_0xFD8987C090669BD5(iLocal_49[iVar0], 4, iLocal_62, -1, 1, true);
					unk_0xAF9FC4463EA3090B(iLocal_49[iVar0], 1000);
					unk_0x2D655AA68FA1736B(iLocal_49[iVar0], true, true, 0);
					unk_0x2E35C4FA5F0ED22F(iLocal_51[iVar0], true);
				}
				iVar0++;
			}
			func_8(&(iLocal_49[1]), &(iLocal_51[1]));
			func_8(&(iLocal_49[2]), &(iLocal_51[2]));
			func_8(&(iLocal_49[3]), &(iLocal_51[3]));
			if (bLocal_56)
			{
				if (unk_0x724D816EA203A79E(iLocal_49[0]))
				{
					if (unk_0x00D24B3F2A5CD22C(101, "AirportJetTakeOff"))
					{
						unk_0x9CBD4853E502D342(iLocal_49[0], 101, "AirportJetTakeOff", 2, 5, 786603);
						iLocal_55 = 1;
					}
					else
					{
						unk_0x1B2A7C8188ADBE04(101, "AirportJetTakeOff");
					}
				}
			}
			iLocal_66 = 4;
			break;
		
		case 4:
			if (iLocal_59)
			{
				if (unk_0x724D816EA203A79E(iLocal_49[3]) && !unk_0x1D403DFADBC2DE3C(iLocal_49[3], 0))
				{
					if (unk_0x41A5D6415E2CC10E(iLocal_49[3]))
					{
						if (!iLocal_57)
						{
							func_8(&(iLocal_49[3]), &(iLocal_51[3]));
							iLocal_57 = 1;
						}
					}
				}
			}
			func_3(0);
			func_7();
			switch (iLocal_65)
			{
				case 0:
					if (!iLocal_55)
					{
						if (bLocal_56)
						{
							if (unk_0x724D816EA203A79E(iLocal_49[0]) && !unk_0x1D403DFADBC2DE3C(iLocal_49[0], 0))
							{
								if (unk_0x41A5D6415E2CC10E(iLocal_49[0]) && !unk_0x33CC9445B2DF9387(vLocal_53[0 /*3*/], 50f))
								{
									if (unk_0x00D24B3F2A5CD22C(101, "AirportJetTakeOff"))
									{
										unk_0x9CBD4853E502D342(iLocal_49[0], 101, "AirportJetTakeOff", 2, 5, 786603);
										iLocal_55 = 1;
									}
									else
									{
										unk_0x1B2A7C8188ADBE04(101, "AirportJetTakeOff");
									}
								}
							}
						}
					}
					if (iLocal_55)
					{
						if (unk_0x724D816EA203A79E(iLocal_49[0]) && !unk_0x1D403DFADBC2DE3C(iLocal_49[0], 0))
						{
							if (unk_0xB34E411B0A4BF096(iLocal_49[0]))
							{
								fLocal_63 = unk_0x953E9293B390C02A(iLocal_49[0]);
							}
						}
						if (fLocal_63 > 1100f)
						{
							iLocal_65 = 1;
						}
					}
					break;
				
				case 1:
					if (unk_0x724D816EA203A79E(iLocal_49[1]) && !unk_0x1D403DFADBC2DE3C(iLocal_49[1], 0))
					{
						if (bLocal_56)
						{
							if (unk_0x41A5D6415E2CC10E(iLocal_49[1]))
							{
								if (iLocal_59)
								{
									if (iLocal_57)
									{
										func_6(&(iLocal_49[1]), &(iLocal_51[1]));
										if (unk_0x00D24B3F2A5CD22C(103, "AirplaneLandingRedux"))
										{
											unk_0x9CBD4853E502D342(iLocal_49[1], 103, "AirplaneLandingRedux", 2, 5, 786603);
											iLocal_58 = 0;
											iLocal_65 = 2;
										}
										else
										{
											unk_0x1B2A7C8188ADBE04(103, "AirplaneLandingRedux");
										}
									}
								}
								else
								{
									func_6(&(iLocal_49[1]), &(iLocal_51[1]));
									if (unk_0x00D24B3F2A5CD22C(103, "AirplaneLandingRedux"))
									{
										unk_0x9CBD4853E502D342(iLocal_49[1], 103, "AirplaneLandingRedux", 2, 5, 786603);
										iLocal_58 = 0;
										iLocal_65 = 2;
									}
									else
									{
										unk_0x1B2A7C8188ADBE04(103, "AirplaneLandingRedux");
									}
								}
							}
						}
					}
					break;
				
				case 2:
					if (unk_0x724D816EA203A79E(iLocal_49[1]) && !unk_0x1D403DFADBC2DE3C(iLocal_49[1], 0))
					{
						if (!unk_0xB34E411B0A4BF096(iLocal_49[1]))
						{
							iLocal_65 = 3;
						}
					}
					break;
				
				case 3:
					if (unk_0x724D816EA203A79E(iLocal_49[2]) && !unk_0x1D403DFADBC2DE3C(iLocal_49[2], 0))
					{
						if (unk_0x00D24B3F2A5CD22C(101, "AirportNew"))
						{
							if (!unk_0x33CC9445B2DF9387(vLocal_53[2 /*3*/], 50f))
							{
								if (!unk_0xB34E411B0A4BF096(iLocal_49[2]))
								{
									func_6(&(iLocal_49[2]), &(iLocal_51[2]));
									unk_0x9E6D037EC3389728(iLocal_49[2], 101, "AirportNew", 1);
									iLocal_65 = 4;
								}
							}
						}
					}
					break;
				
				case 4:
					if (unk_0x724D816EA203A79E(iLocal_49[2]) && !unk_0x1D403DFADBC2DE3C(iLocal_49[2], 0))
					{
						if (unk_0xB34E411B0A4BF096(iLocal_49[2]))
						{
							fLocal_64 = unk_0x953E9293B390C02A(iLocal_49[2]);
						}
					}
					if (unk_0x724D816EA203A79E(iLocal_49[1]) && !unk_0x1D403DFADBC2DE3C(iLocal_49[1], 0))
					{
						if (!unk_0xB34E411B0A4BF096(iLocal_49[1]))
						{
							if (unk_0x41A5D6415E2CC10E(iLocal_49[1]))
							{
								func_8(&(iLocal_49[1]), &(iLocal_51[1]));
								iLocal_58 = 1;
							}
						}
					}
					if (fLocal_64 > 1100f)
					{
						if (unk_0x724D816EA203A79E(iLocal_49[3]) && !unk_0x1D403DFADBC2DE3C(iLocal_49[3], 0))
						{
							if (unk_0x00D24B3F2A5CD22C(104, "AirplaneLandingRedux"))
							{
								if (!unk_0x33CC9445B2DF9387(vLocal_53[3 /*3*/], 50f))
								{
									if (!unk_0xB34E411B0A4BF096(iLocal_49[3]) && iLocal_58)
									{
										func_6(&(iLocal_49[3]), &(iLocal_51[3]));
										unk_0x9E6D037EC3389728(iLocal_49[3], 104, "AirplaneLandingRedux", 1);
										iLocal_65 = 5;
									}
								}
							}
						}
					}
					break;
				
				case 5:
					if (unk_0x724D816EA203A79E(iLocal_49[3]) && !unk_0x1D403DFADBC2DE3C(iLocal_49[3], 0))
					{
						if (!unk_0xB34E411B0A4BF096(iLocal_49[3]))
						{
							func_5();
							iLocal_65 = 0;
						}
					}
					break;
			}
			break;
	}
}

void func_5()//Position - 0xBB3
{
	fLocal_63 = 0f;
	iLocal_55 = 0;
	iLocal_59 = 1;
	iLocal_57 = 0;
}

void func_6(var uParam0, var uParam1)//Position - 0xBC7
{
	unk_0xDC078F87049ECECE(*uParam0, true, 0);
	unk_0xDC078F87049ECECE(*uParam1, true, 0);
	unk_0xD434A01DEA38A939(*uParam0, true, 0);
	unk_0x346478B12F69D4E3(*uParam0, false);
}

void func_7()//Position - 0xBF2
{
	vector3 vVar0;
	
	switch (iLocal_61)
	{
		case 0:
			if (!unk_0x724D816EA203A79E(iLocal_50))
			{
				iLocal_50 = unk_0x61C05BF08A1E0EFE(joaat("jet"), -65.3177f, 15.4603f, 703.106f, 0f, true, true, false);
				unk_0xAF9FC4463EA3090B(iLocal_50, 1000);
				unk_0x2D655AA68FA1736B(iLocal_50, true, true, 0);
				unk_0x06C06CCCDCB3FDD2(iLocal_50, 0);
				iLocal_52 = unk_0xFD8987C090669BD5(iLocal_50, 4, iLocal_62, -1, 1, true);
				unk_0x2E35C4FA5F0ED22F(iLocal_52, true);
				iLocal_61 = 1;
			}
			break;
		
		case 1:
			if (unk_0x724D816EA203A79E(iLocal_50) && !unk_0x1D403DFADBC2DE3C(iLocal_50, 0))
			{
				if (unk_0x00D24B3F2A5CD22C(101, "EastWestFlight"))
				{
					if (!unk_0xB34E411B0A4BF096(iLocal_50))
					{
						unk_0x9CBD4853E502D342(iLocal_50, 101, "EastWestFlight", 2, 5, 786603);
						iLocal_61 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
			{
				vVar0 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
			}
			if (unk_0x724D816EA203A79E(iLocal_50) && !unk_0x1D403DFADBC2DE3C(iLocal_50, 0))
			{
				if (!unk_0xB34E411B0A4BF096(iLocal_50))
				{
					if ((unk_0x41A5D6415E2CC10E(iLocal_50) && !unk_0x33CC9445B2DF9387(-1602.086f, -2674.039f, 12.9444f, 50f)) && SYSTEM::VDIST2(vVar0, unk_0x541C2AEF053615BC(iLocal_50, true)) > 62500f)
					{
						iLocal_61 = 1;
					}
				}
			}
			break;
	}
}

void func_8(var uParam0, var uParam1)//Position - 0xD31
{
	unk_0xDC078F87049ECECE(*uParam0, false, 0);
	unk_0xDC078F87049ECECE(*uParam1, false, 0);
	unk_0xD434A01DEA38A939(*uParam0, false, 0);
	unk_0x346478B12F69D4E3(*uParam0, true);
}

void func_9()//Position - 0xD5C
{
}

int func_10()//Position - 0xD64
{
	return 1;
}

void func_11()//Position - 0xD6D
{
}

void func_12()//Position - 0xD75
{
	func_1();
	func_13();
	unk_0x95E4B6F3ED223F5A();
}

void func_13()//Position - 0xD89
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	if (unk_0x724D816EA203A79E(iLocal_67))
	{
		if (unk_0x41A5D6415E2CC10E(iLocal_67))
		{
			unk_0xCF6040807CC0E4A5(&iLocal_67);
		}
		else if (!unk_0x1D403DFADBC2DE3C(iLocal_67, 0) && !unk_0x36CEFBE9B745A58D(iLocal_68))
		{
			unk_0xD87F0F9CDF39238A(iLocal_67);
			unk_0x22321800954A532E(iLocal_68, true);
			vVar0 = { unk_0x541C2AEF053615BC(iLocal_67, true) };
			fVar3 = unk_0x349C94FFF43E2979(iLocal_67);
			vVar1 = { 0f, 500f, 50f };
			vVar2 = { unk_0x89D97EB4FAE4A574(vVar0, fVar3, vVar1) };
			unk_0x143DD8A84CAA784C(iLocal_68, iLocal_67, 0, 0, vVar2, 4, 50f, -1f, 0f, 100, 50, -1082130432, 0);
		}
	}
	if (bLocal_73)
	{
		unk_0x4F5DAC981AF98536(102, "HelicopterTakeOff");
	}
}

