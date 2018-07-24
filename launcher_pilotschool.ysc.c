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
	vector3 vLocal_45 = { 0f, 0f, 0f };
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	struct<16> Local_51 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<16> Local_52 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_53 = 0;
	var uLocal_54 = 0;
	vector3 vLocal_55 = { 0f, 0f, 0f };
	vector3 vLocal_56 = { 0f, 0f, 0f };
	float fLocal_57 = 0f;
	var uLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	char* sLocal_65 = NULL;
	float fLocal_66 = 0f;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	float fLocal_74 = 0f;
	vector3 vLocal_75 = { 0f, 0f, 0f };
	vector3 vLocal_76 = { 0f, 0f, 0f };
	float fLocal_77 = 0f;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	bool bLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	struct<2> Local_88 = { 0, 5 } ;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 5;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	bool bVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;
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
	vLocal_45 = { 500f, 500f, 500f };
	iLocal_60 = -1;
	iLocal_61 = 2050;
	iLocal_62 = -1;
	iLocal_63 = -1;
	sLocal_65 = "CC_SUBSTR";
	fLocal_66 = 125f;
	iLocal_67 = 1;
	iLocal_69 = 263;
	fLocal_77 = 4f;
	vLocal_56 = { ScriptParam_88.f_1[0 /*3*/] };
	vLocal_56 = { vLocal_56 };
	uLocal_54 = uLocal_54;
	Local_52 = { Local_52 };
	bVar0 = false;
	if (unk_0xE8A79675302ED812(82))
	{
		func_89(1);
	}
	iLocal_53 = unk_0xA95CF30C72EB526E(unk_0xB5CEFD608600A09F());
	iLocal_59 = 0;
	func_87(&Global_195BF, 0);
	func_86();
	if (func_85(uLocal_58, 1))
	{
		iLocal_64 = 10;
	}
	else
	{
		iLocal_64 = 9;
	}
	while (!Global_7BBB)
	{
		SYSTEM::WAIT(0);
	}
	if (!func_85(uLocal_58, 8))
	{
		if (!func_83(iLocal_64))
		{
			if (func_82(0, iLocal_63))
			{
				func_89(0);
			}
			else
			{
				func_89(1);
			}
		}
	}
	if (iLocal_63 != -1)
	{
		if (!func_82(0, iLocal_63))
		{
			func_89(1);
		}
	}
	if (func_85(uLocal_58, 8388608))
	{
		func_89(1);
	}
	if (func_85(uLocal_58, 524288) && (func_81() && !func_80()))
	{
		func_89(1);
	}
	if (unk_0xB731B8C5BCE89836(unk_0x2C087518F90303D5()) > 1 && !func_85(uLocal_58, 4194304))
	{
		if (iLocal_69 != 263)
		{
			func_79(iLocal_69, 1, 0);
			iLocal_69 = 263;
		}
		func_78(10);
	}
	while (true)
	{
		if (!func_85(uLocal_58, 268435456))
		{
			fVar1 = 0f;
			if (unk_0x2084D4C6C2DF616F(ScriptParam_88.f_1[0 /*3*/], &fVar1, 0, 0))
			{
				if (fVar1 != 0f)
				{
					ScriptParam_88.f_1[0 /*3*/].f_2 = fVar1;
					func_77(&uLocal_58, 268435456);
				}
			}
		}
		iLocal_53 = unk_0xA95CF30C72EB526E(unk_0xB5CEFD608600A09F());
		if (func_85(uLocal_58, 1048576))
		{
			if (unk_0x1D403DFADBC2DE3C(iLocal_53, 0))
			{
				func_89(1);
			}
		}
		if (unk_0x724D816EA203A79E(iLocal_53) && !unk_0x1D403DFADBC2DE3C(iLocal_53, 0))
		{
			vLocal_55 = { unk_0x541C2AEF053615BC(iLocal_53, true) };
			fLocal_57 = SYSTEM::VDIST2(vLocal_55, ScriptParam_88.f_1[0 /*3*/]);
			fLocal_57 = fLocal_57;
			vLocal_75 = { vLocal_55 };
			vLocal_76 = { ScriptParam_88.f_1[0 /*3*/] };
			vLocal_75.z = 0f;
			vLocal_76.z = 0f;
			fLocal_74 = SYSTEM::VDIST2(vLocal_75, vLocal_76);
			switch (iLocal_59)
			{
				case 0:
					if (func_83(iLocal_64) || (func_85(uLocal_58, 16) && !func_85(uLocal_58, 524288)))
					{
						iLocal_62 = -1;
						func_76();
						func_78(1);
					}
					else
					{
						if (fLocal_74 > (fLocal_66 * fLocal_66))
						{
							if (iLocal_69 != 263)
							{
								func_79(iLocal_69, 1, 0);
								iLocal_69 = 263;
							}
							func_78(10);
						}
						if ((vLocal_55.z - ScriptParam_88.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_75() && fLocal_57 > ((fLocal_77 * 1.5f) * (fLocal_77 * 1.5f)))
					{
						iLocal_67 = iLocal_67;
						func_78(3);
					}
					else
					{
						func_76();
					}
					break;
				
				case 3:
					if (unk_0xF5F5C6DD66B0FB2A())
					{
						func_89(1);
						return;
					}
					if (!func_83(iLocal_64))
					{
						if (!func_85(uLocal_58, 8))
						{
							bVar2 = true;
							if (unk_0x3362CDE8460ED38B(&(Global_16B1B.f_3), &Local_52))
							{
								Local_52 = { Local_51 };
								bVar2 = false;
							}
							if (bVar2)
							{
								func_89(0);
								break;
							}
						}
					}
					if (!func_85(uLocal_58, 4))
					{
						func_74();
						func_77(&uLocal_58, 4);
					}
					if (fLocal_74 > (fLocal_66 * fLocal_66) && !Global_16B3D)
					{
						if (iLocal_69 != 263)
						{
							if (func_73(6) && !func_72(iLocal_69))
							{
							}
							else
							{
								func_79(iLocal_69, 1, 0);
								iLocal_69 = 263;
							}
						}
						func_78(10);
					}
					else
					{
						Local_52 = { Local_51 };
						bVar3 = !func_85(uLocal_58, 64);
						func_87(&uLocal_58, 128);
						if (!func_71(3) && !Global_16B3D)
						{
							if (func_85(uLocal_58, 2097152))
							{
								if ((!func_85(uLocal_58, 1) || !unk_0x724D816EA203A79E(func_70())) && !Global_16B3D)
								{
									func_78(10);
									break;
								}
							}
						}
						if (func_85(uLocal_58, 524288) && (func_81() && !func_80()))
						{
							func_89(1);
						}
						if (func_69())
						{
							func_89(1);
						}
						if ((!func_56(6) || Global_1974B) || func_55())
						{
							bVar3 = false;
						}
						if (func_85(uLocal_58, 1))
						{
							if (!func_54())
							{
								func_52(&uLocal_58, 128);
								bVar3 = false;
							}
						}
						if (func_51(1))
						{
							bVar3 = false;
						}
						if (Global_11542)
						{
							bVar3 = false;
						}
						if (func_50())
						{
							bVar3 = false;
						}
						if (unk_0x7930B3E9C919E90F())
						{
							bVar3 = false;
						}
						if (func_49() || func_48(8, -1))
						{
							bVar3 = false;
						}
						if (!unk_0xDB625D1720DAC49A(unk_0xB5CEFD608600A09F()))
						{
							bVar3 = false;
						}
						if (!unk_0xE7A89C39746A63AC(unk_0xB5CEFD608600A09F()))
						{
							bVar3 = false;
						}
						if (func_47(0) || func_46())
						{
							bVar3 = false;
						}
						if (bVar3)
						{
							if (!unk_0x4DBCE270B354E123(iLocal_53, ScriptParam_88.f_1[0 /*3*/], fLocal_77, fLocal_77, 2f, false, true, iLocal_67))
							{
								bVar3 = false;
							}
							if (!unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()))
							{
								bVar3 = false;
							}
							if (bVar3)
							{
								unk_0xD55638CE45B2B948(0, 51);
								if (func_45(uLocal_54))
								{
									if (iLocal_60 == -1)
									{
										func_44(&iLocal_60, 4, sLocal_65, 0, 0, 0, 0);
										func_52(&uLocal_58, 2048);
									}
									else if (!func_85(uLocal_58, 2048) || !unk_0xF16DAFF595E80F7C())
									{
										func_43(&iLocal_60);
										func_87(&uLocal_58, 2048);
									}
									if (func_41(iLocal_60, 1))
									{
										sLocal_65 = sLocal_65;
										func_43(&iLocal_60);
										func_87(&uLocal_58, 2048);
										unk_0x63831D2D5110C305(&Local_52);
										unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 56);
										func_78(5);
									}
								}
								else
								{
									sLocal_65 = sLocal_65;
									func_43(&iLocal_60);
									func_87(&uLocal_58, 2048);
									unk_0x63831D2D5110C305(&Local_52);
									unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 56);
									func_78(5);
								}
							}
						}
						if (!bVar3)
						{
							if (iLocal_60 != -1)
							{
								func_43(&iLocal_60);
								func_87(&uLocal_58, 2048);
								unk_0x7456702622C62EA0(0);
							}
						}
					}
					func_40();
					break;
				
				case 5:
					unk_0xD55638CE45B2B948(0, 51);
					if (unk_0xACE95AD318CE412B(&Local_52))
					{
						if (iLocal_60 != -1)
						{
							func_43(&iLocal_60);
						}
						iVar4 = 2;
						bVar0 = false;
						if (func_85(uLocal_58, 1))
						{
							if (func_73(6) || func_73(7))
							{
								iVar4 = 1;
								bVar0 = true;
							}
						}
						if (iVar4 != 1)
						{
							iVar4 = func_37(&iLocal_62, 6, iLocal_64, 0, 0);
						}
						if (iVar4 == 1)
						{
							if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
							{
								unk_0xA98B19EC1C93FC3C(unk_0xB5CEFD608600A09F());
							}
							func_36();
							if (Global_90C1)
							{
								func_27(unk_0xBC25C936A095B5BA());
							}
							unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 56);
							iLocal_50 = func_26();
							func_87(&uLocal_58, 4);
							func_25();
							func_52(&uLocal_58, 2);
							func_78(6);
							func_21(&iLocal_71);
							if (iLocal_63 != -1)
							{
								func_20(iLocal_63);
								func_17(func_19(iLocal_63), 0, 0);
							}
						}
						else if (iVar4 == 2)
						{
							func_16();
						}
						else if (iVar4 == 0)
						{
							func_78(10);
						}
					}
					else
					{
						func_16();
					}
					break;
				
				case 6:
					if (!func_85(uLocal_58, 256))
					{
						if (unk_0x422F9EDE839E6ABB() || unk_0x726D9204B160D23E())
						{
							unk_0xD55638CE45B2B948(0, 51);
						}
						else if (unk_0x17FAADF9916EF741())
						{
							func_52(&uLocal_58, 256);
						}
					}
					if (func_85(Global_195BF, 262144))
					{
						func_87(&Global_195BF, 262144);
						func_15();
					}
					if (func_85(uLocal_58, 2097152))
					{
						if (!func_71(3) && !unk_0x3C406FC829C1E14A(iLocal_50))
						{
							func_78(10);
						}
					}
					if (!unk_0x3C406FC829C1E14A(iLocal_50))
					{
						unk_0x739C5CCC39AE3137(SYSTEM::ROUND((func_11(&iLocal_71) * 1000f)), iLocal_63, 0);
						func_10(&iLocal_71);
						func_87(&uLocal_58, 256);
						func_9();
						if (bVar0)
						{
							func_87(&uLocal_58, 2);
						}
						else if (func_85(uLocal_58, 2))
						{
							if (func_85(Global_195BF, 0))
							{
								func_8(&iLocal_62);
								iLocal_62 = -1;
								func_87(&uLocal_58, 2);
							}
							else
							{
								func_8(&iLocal_62);
								iLocal_62 = -1;
								func_87(&uLocal_58, 2);
							}
						}
						func_78(0);
						if (iLocal_63 != -1)
						{
							if (func_85(Global_195BF, 0))
							{
								unk_0x1B7435D54924A668(func_19(iLocal_63), 0, Global_16B40, 0);
								func_7(func_19(iLocal_63), 0, Global_16B40, 1, 0);
							}
							else
							{
								unk_0x1B7435D54924A668(func_19(iLocal_63), 0, Global_16B40, 0);
								func_7(func_19(iLocal_63), 0, Global_16B40, 0, 0);
							}
						}
						func_4();
						func_87(&Global_195BF, 0);
						if (func_85(uLocal_58, 16777216))
						{
							func_89(1);
						}
						if (iLocal_63 != -1)
						{
							if (Global_19B04.f_2360)
							{
								if (!func_82(0, iLocal_63))
								{
									func_89(1);
								}
							}
						}
					}
					func_3();
					break;
				
				case 8:
					func_78(0);
					break;
				
				case 10:
					func_89(1);
					break;
				
				case 9:
					if (fLocal_74 > (fLocal_66 * fLocal_66))
					{
						if (iLocal_69 != 263)
						{
							func_79(iLocal_69, 1, 0);
							iLocal_69 = 263;
						}
						func_78(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_69 != 263)
					{
						func_79(iLocal_69, 0, 0);
					}
					if (iLocal_60 != -1)
					{
						func_43(&iLocal_60);
					}
					if (!unk_0xF1734B55490E9045(sLocal_65))
					{
						if (func_1(sLocal_65))
						{
							unk_0x7456702622C62EA0(1);
						}
					}
					func_78(4);
					break;
				
				case 4:
					if ((iLocal_68 % 150) == 0)
					{
						if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
						{
							if (iLocal_70 == 2)
							{
								if (iLocal_70 == 2)
								{
									if (func_83(iLocal_64) && func_82(0, iLocal_63))
									{
										func_86();
										if (iLocal_69 != 263)
										{
											func_79(iLocal_69, 1, 0);
										}
										func_78(0);
									}
								}
							}
							else if (iLocal_70 == 0)
							{
								if (fLocal_74 > (fLocal_66 * fLocal_66))
								{
									if (iLocal_69 != 263)
									{
										func_79(iLocal_69, 1, 0);
										iLocal_69 = 263;
									}
									func_78(10);
								}
							}
							else if (iLocal_70 == 1)
							{
								if (fLocal_74 > ((80f + 5f) * (80f + 5f)))
								{
									func_86();
									if (iLocal_69 != 263)
									{
										func_79(iLocal_69, 1, 0);
									}
									func_78(0);
								}
							}
						}
						else
						{
							func_79(iLocal_69, 1, 0);
						}
					}
					else
					{
						iLocal_68++;
					}
					break;
				}
		}
		SYSTEM::WAIT(0);
	}
}

int func_1(char* sParam0)//Position - 0xA75
{
	unk_0xF07D20149ECBC61E(sParam0);
	return unk_0xA66DBDA0A072514A(0);
}

void func_2()//Position - 0xA88
{
}

void func_3()//Position - 0xA90
{
}

void func_4()//Position - 0xA98
{
	func_5(&uLocal_82);
}

void func_5(var uParam0)//Position - 0xAA6
{
	int iVar0;
	
	iVar0 = *uParam0;
	if (unk_0x724D816EA203A79E(iVar0))
	{
		if (!func_6(iVar0))
		{
			unk_0xD434A01DEA38A939(iVar0, true, 0);
			unk_0xDC078F87049ECECE(iVar0, true, 0);
			unk_0x346478B12F69D4E3(iVar0, false);
		}
	}
}

int func_6(int iParam0)//Position - 0xADD
{
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (unk_0x1D403DFADBC2DE3C(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xE59B7F5A03335350(iParam0, 0))
		{
			if (!unk_0x7544D2465B934445(iParam0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_7(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xB20
{
	if (unk_0xF1734B55490E9045(&Global_1603A))
	{
		return;
	}
	if (unk_0xB0A59416DB2992B5(sParam0, &Global_1603A, 0, -1) != 0)
	{
		return;
	}
	unk_0x857F9926E7882AF4(sParam0, iParam1, iParam2, iParam3, iParam4, Global_154ED);
	StringCopy(&Global_1603A, "", 64);
}

void func_8(int iParam0)//Position - 0xB64
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

void func_9()//Position - 0xBA1
{
	vector3 vVar0[24];
	
	if (unk_0xA76D65C63ED50F67() || unk_0xF49912B78E2591B6())
	{
		unk_0xCEFBE636B33A557B(StackVal, 0, 0, 0);
	}
	else if (unk_0x3E9993F328985CCB() || unk_0xF7E138CFA19B55E7())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		unk_0x785F3AE9C51AE93D(0, &cVar0);
	}
}

void func_10(int iParam0)//Position - 0xBE3
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

float func_11(int iParam0)//Position - 0xBF9
{
	if (func_14(iParam0))
	{
		if (func_13(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_12(unk_0xFA30DFD0084E92FE(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_12(bool bParam0)//Position - 0xC38
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(unk_0x105601648511CC64());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x7AF0088ABFA713B6())
	{
		iVar2 = unk_0xED678C85A82F0AB9();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(unk_0x105601648511CC64()) / 1000f);
}

bool func_13(var uParam0)//Position - 0xC90
{
	return unk_0xFA30DFD0084E92FE(*uParam0, 2);
}

bool func_14(var uParam0)//Position - 0xCA0
{
	return unk_0xFA30DFD0084E92FE(*uParam0, 1);
}

int func_15()//Position - 0xCB0
{
	return 1;
}

void func_16()//Position - 0xCB9
{
}

void func_17(char* sParam0, int iParam1, int iParam2)//Position - 0xCC1
{
	if (!unk_0xF1734B55490E9045(&Global_1603A))
	{
		unk_0x857F9926E7882AF4(&Global_1603A, 0, 0, 0, 1, 0);
		StringCopy(&Global_1603A, "", 64);
	}
	StringCopy(&Global_1603A, sParam0, 64);
	unk_0xFC3106D886D77FE2(sParam0, iParam1, iParam2, func_18(0));
}

bool func_18(bool bParam0)//Position - 0xD02
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_1163A, 0);
}

char* func_19(int iParam0)//Position - 0xD2D
{
	switch (iParam0)
	{
		case 0:
			return "OJBJ";
			break;
		
		case 1:
			return "MGDT";
			break;
		
		case 2:
			return "MGGF";
			break;
		
		case 3:
			return "OJHU";
			break;
		
		case 4:
			return "MGOR";
			break;
		
		case 5:
			return "MGPS";
			break;
		
		case 6:
			return "MGRP";
			break;
		
		case 7:
			return "MGSEA";
			break;
		
		case 8:
			return "MGSTR";
			break;
		
		case 9:
			return "MGSC";
			break;
		
		case 10:
			return "MGSP";
			break;
		
		case 11:
			return "MGSRm";
			break;
		
		case 12:
			return "OJTX";
			break;
		
		case 13:
			return "MGTN";
			break;
		
		case 14:
			return "OJTW";
			break;
		
		case 15:
			return "OJDA";
			break;
		
		case 16:
			return "OJDG";
			break;
		
		case 17:
			return "MGTR";
			break;
		
		case 18:
			return "MGYG";
			break;
		
		case 19:
			return "MGCR";
			break;
	}
	return "INVALID!";
}

void func_20(int iParam0)//Position - 0xE6B
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

void func_21(int iParam0)//Position - 0xEC2
{
	if (!func_14(iParam0))
	{
		func_24(iParam0);
	}
	else
	{
		func_22(iParam0);
	}
}

void func_22(int iParam0)//Position - 0xEE3
{
	func_23(iParam0, 0f);
}

void func_23(int iParam0, float fParam1)//Position - 0xEF2
{
	iParam0->f_1 = (func_12(unk_0xFA30DFD0084E92FE(*iParam0, 4)) - fParam1);
	unk_0xF0059F27F7BB6680(iParam0, 1);
	unk_0x7CB6FD92BE491AD9(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_24(int iParam0)//Position - 0xF20
{
	if (!func_14(iParam0))
	{
		func_22(iParam0);
	}
}

void func_25()//Position - 0xF38
{
	unk_0xA7FBEF44EF04D534(-1093.842f, -2375.285f, -100f, -1007.24f, -2425.285f, 100f, 150f, 0, true, 1);
}

int func_26()//Position - 0xF6A
{
	int iVar0;
	
	iVar0 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS(&Local_51, &uLocal_78, 4, iLocal_61);
	unk_0x91DEC7187FA01089(&Local_51);
	return iVar0;
}

void func_27(int iParam0)//Position - 0xF87
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
	iVar0 = func_35(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_8FEC[iVar0 /*5*/];
		func_30(1, iVar1, 1);
		return;
	}
	iVar2 = func_29(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_28(iVar2);
}

void func_28(int iParam0)//Position - 0xFE0
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

int func_29(int iParam0)//Position - 0x1063
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

void func_30(int iParam0, int iParam1, int iParam2)//Position - 0x1094
{
	func_31(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_31(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x10A9
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
	if (func_33(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_32();
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

int func_32()//Position - 0x112B
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

int func_33(int iParam0, int iParam1, int iParam2)//Position - 0x115C
{
	if (func_34(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_34(int iParam0, int iParam1, int iParam2)//Position - 0x1177
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

int func_35(int iParam0)//Position - 0x11C3
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

void func_36()//Position - 0x120C
{
	if (Global_C60[0 /*2811*/][0 /*281*/].f_103 == 2)
	{
		Global_C60[0 /*2811*/][0 /*281*/].f_103 = 0;
	}
	if (Global_C60[1 /*2811*/][0 /*281*/].f_103 == 2)
	{
		Global_C60[1 /*2811*/][0 /*281*/].f_103 = 0;
	}
	if (Global_C60[2 /*2811*/][0 /*281*/].f_103 == 2)
	{
		Global_C60[2 /*2811*/][0 /*281*/].f_103 = 0;
	}
	unk_0x7CB6FD92BE491AD9(&Global_93B, 25);
	unk_0xF0059F27F7BB6680(&Global_93C, 11);
}

int func_37(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x1289
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
		if (func_39(0))
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
		if (!func_83(iParam2))
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
			func_38(iParam0, iParam4);
		}
	}
	return 2;
}

void func_38(var uParam0, int iParam1)//Position - 0x13C0
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

int func_39(int iParam0)//Position - 0x140F
{
	if (Global_8C41 == 15)
	{
		return 0;
	}
	if (func_83(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_40()//Position - 0x1431
{
	if (func_72(76))
	{
		unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), -1154.11f, -2715.203f, 18.8074f, 0f, 0f, 1.8f, true, true, 0);
	}
}

int func_41(int iParam0, bool bParam1)//Position - 0x1464
{
	int iVar0;
	
	iVar0 = func_42(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x6A9CDB766DF7216F(unk_0xFC1CAE18F3ECBF2D()))
	{
		return 0;
	}
	if (func_47(0))
	{
		return 0;
	}
	if (unk_0x866EAD7E27D8D0F8())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_8F05[iVar0 /*32*/] == 1 && Global_8F05[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_8F05[iVar0 /*32*/].f_1D)
				{
					return 0;
				}
			}
			Global_8F05[iVar0 /*32*/].f_5 = 1;
			Global_8F05[iVar0 /*32*/].f_1D = 1;
			return 1;
		}
		else
		{
			if (Global_8F05[iVar0 /*32*/] == 0)
			{
			}
			if (Global_8F05[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_42(int iParam0)//Position - 0x151C
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_8F05[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_43(int iParam0)//Position - 0x1557
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_42(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_8F05[iVar0 /*32*/])
		{
			Global_8F05[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

void func_44(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0x15AE
{
	int iVar0;
	
	if (unk_0xB731B8C5BCE89836(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x7930B3E9C919E90F())
	{
		if (!*iParam0 == -1)
		{
			func_43(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_8F05[iVar0 /*32*/])
		{
			Global_8F05[iVar0 /*32*/] = 1;
			Global_8F05[iVar0 /*32*/].f_1 = Global_8FCE;
			Global_8FCE++;
			Global_8F05[iVar0 /*32*/].f_4 = 0;
			Global_8F05[iVar0 /*32*/].f_1D = 0;
			Global_8F05[iVar0 /*32*/].f_5 = 0;
			Global_8F05[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_8F05[iVar0 /*32*/].f_8), sParam2, 16);
			Global_8F05[iVar0 /*32*/].f_6 = iParam3;
			Global_8F05[iVar0 /*32*/].f_1F = unk_0x8A55B15F4133C912();
			Global_8F05[iVar0 /*32*/].f_7 = 0;
			Global_8F05[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0xF1734B55490E9045(sParam4))
			{
				Global_8F05[iVar0 /*32*/].f_C = 1;
				StringCopy(&(Global_8F05[iVar0 /*32*/].f_D), sParam4, 64);
				Global_8F05[iVar0 /*32*/].f_1E = iParam6;
			}
			else
			{
				Global_8F05[iVar0 /*32*/].f_C = 0;
				Global_8F05[iVar0 /*32*/].f_1E = 0;
			}
			*iParam0 = Global_8F05[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_45(var uParam0)//Position - 0x16D9
{
	return 1;
}

var func_46()//Position - 0x16E2
{
	return Global_10AB8;
}

int func_47(int iParam0)//Position - 0x16EE
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

bool func_48(int iParam0, int iParam1)//Position - 0x1748
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

bool func_49()//Position - 0x1783
{
	return unk_0x105601648511CC64() <= Global_43C1.f_1671 + 100;
}

int func_50()//Position - 0x1798
{
	if (unk_0xB731B8C5BCE89836(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_51(bool bParam0)//Position - 0x17B2
{
	if (bParam0)
	{
		return (Global_4336.f_4 && Global_4336.f_68 == 4);
	}
	return Global_4336.f_4;
}

void func_52(var uParam0, int iParam1)//Position - 0x17DB
{
	func_53(uParam0, iParam1);
}

void func_53(var uParam0, var uParam1)//Position - 0x17EB
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_54()//Position - 0x17FC
{
	return 1;
}

bool func_55()//Position - 0x1805
{
	int iVar0;
	bool bVar1;
	
	if (unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		return 0;
	}
	unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &iVar0, 1);
	if (((iVar0 == 0 || iVar0 == joaat("weapon_unarmed")) || iVar0 == joaat("weapon_electric_fence")) || iVar0 == joaat("gadget_parachute"))
	{
		bVar1 = false;
	}
	else
	{
		bVar1 = true;
	}
	if (bVar1)
	{
	}
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		return ((((bVar1 && unk_0x8FCEEB789599BD9B(0, 69)) || (bVar1 && unk_0x8FCEEB789599BD9B(0, 70))) || (bVar1 && unk_0x8FCEEB789599BD9B(0, 68))) || unk_0xE1C3A331B6951C3D(unk_0xB5CEFD608600A09F()));
	}
	return (((((bVar1 && unk_0x8FCEEB789599BD9B(0, 24)) || (bVar1 && unk_0x8FCEEB789599BD9B(0, 25))) || (bVar1 && unk_0x8FCEEB789599BD9B(0, 47))) || unk_0xFF2EA801C4691698(unk_0xBC25C936A095B5BA())) || unk_0xE1C3A331B6951C3D(unk_0xB5CEFD608600A09F()));
}

int func_56(int iParam0)//Position - 0x190F
{
	int iVar0;
	
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				iVar0 = func_65();
				if (!func_64(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_63()) || Global_1974B) || Global_62BF) || func_62()) || func_48(8, -1)) || func_61()) || func_60()) || func_59()) || func_50()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1) || func_63()) || Global_62BF) || func_62()) || func_48(8, -1)) || func_59()) || func_61()) || func_60()) || func_50()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_63()) || Global_1974B) || Global_62BF) || func_62()) || func_48(8, -1)) || func_59()) || func_61()) || func_60()) || func_50()) || Global_19B04.f_1DEB.f_397[iVar0] == 5) || Global_8E64 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_63()) || Global_1974B) || Global_62BF) || func_62()) || func_48(8, -1)) || func_61()) || func_60()) || func_50()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_63() || unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0) || func_48(8, -1)) || func_50()) || func_58()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_48(8, -1) || func_61()) || func_60()) || func_58()) || func_57())
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
							if ((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || func_63()) || Global_62BF) || func_62()) || func_48(8, -1)) || func_60()) || func_59()) || func_50()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || !unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) || !unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F())) || !unk_0x726D9204B160D23E()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || func_63()) || func_60()) || Global_1974B) || Global_62BF) || func_62()) || Global_90C1) || func_48(8, -1)) || func_59()) || func_58()) || func_50()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || !unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) || !unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F())) || !unk_0x726D9204B160D23E()) || unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0)) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1)) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0x9273B3557334635D(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || func_63()) || Global_1974B) || Global_62BF) || func_62()) || func_48(8, -1)) || func_59()) || func_58()) || func_61()) || func_60()) || func_50())
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

var func_57()//Position - 0x202C
{
	return Global_16B42.f_1;
}

int func_58()//Position - 0x203A
{
	if (Global_15FA6 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_147B0[Global_15FA6 /*34*/].f_F, 13);
	}
	return 0;
}

int func_59()//Position - 0x2060
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

bool func_60()//Position - 0x208A
{
	return Global_16B4F.f_142 > 0;
}

bool func_61()//Position - 0x209B
{
	return Global_16B4F.f_141 > 0;
}

var func_62()//Position - 0x20AC
{
	return Global_140856;
}

int func_63()//Position - 0x20B8
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		return Global_161D2.f_2C == 1;
	}
	return 0;
}

bool func_64(int iParam0)//Position - 0x20D4
{
	return iParam0 < 3;
}

var func_65()//Position - 0x20E0
{
	func_66();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_66()//Position - 0x20F9
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_68(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_67(unk_0xBC25C936A095B5BA());
			if (func_64(iVar0) && (!func_73(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_64(Global_19B04.f_932.f_21B.f_10CD))
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

int func_67(int iParam0)//Position - 0x21F6
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_68(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_68(int iParam0)//Position - 0x2233
{
	if (func_64(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_69()//Position - 0x225D
{
	if (unk_0xB731B8C5BCE89836(joaat("stripperhome")) > 0)
	{
		return 1;
	}
	return 0;
}

var func_70()//Position - 0x2277
{
	return Global_15B64;
}

int func_71(int iParam0)//Position - 0x2283
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_73(6) || func_73(7))
			{
				return 1;
			}
			else
			{
				return func_71(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_83(5))
			{
				if (func_56(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_72(int iParam0)//Position - 0x22F5
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return unk_0x2DA8CA50A72528FB(Global_6416[iVar0 /*23*/].f_13);
}

bool func_73(int iParam0)//Position - 0x2331
{
	return Global_8C41 == iParam0;
}

void func_74()//Position - 0x233F
{
}

int func_75()//Position - 0x2347
{
	return 1;
}

void func_76()//Position - 0x2350
{
}

void func_77(var uParam0, int iParam1)//Position - 0x2358
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_78(int iParam0)//Position - 0x2369
{
	iLocal_59 = iParam0;
}

void func_79(int iParam0, bool bParam1, bool bParam2)//Position - 0x2375
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

int func_80()//Position - 0x247E
{
	if (unk_0x8ACB0C3FACC09467())
	{
		if (unk_0x45397F173D3E5C6B() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_81()//Position - 0x249B
{
	if (Global_15FA6 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_147B0[Global_15FA6 /*34*/].f_F, 20);
	}
	return 0;
}

bool func_82(int iParam0, int iParam1)//Position - 0x24C1
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

bool func_83(int iParam0)//Position - 0x250E
{
	return func_84(iParam0, Global_8C41);
}

int func_84(int iParam0, int iParam1)//Position - 0x251F
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

bool func_85(var uParam0, int iParam1)//Position - 0x2700
{
	return (uParam0 && iParam1) != 0;
}

void func_86()//Position - 0x270F
{
	iLocal_63 = 5;
	sLocal_65 = "PLAY_PSCHOOL";
	StringCopy(&Local_51, "Pilot_School", 64);
	iLocal_61 = 23500;
}

void func_87(var uParam0, int iParam1)//Position - 0x272B
{
	func_88(uParam0, iParam1);
}

void func_88(var uParam0, var uParam1)//Position - 0x273B
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_89(bool bParam0)//Position - 0x2750
{
	if (bParam0)
	{
		if (iLocal_69 != 263)
		{
			func_79(iLocal_69, 0, 0);
		}
	}
	func_43(&iLocal_60);
	if (func_85(uLocal_58, 2))
	{
		func_4();
		func_87(&uLocal_58, 2);
		func_8(&iLocal_62);
	}
	iLocal_62 = -1;
	func_90();
	unk_0x95E4B6F3ED223F5A();
}

void func_90()//Position - 0x2799
{
	func_87(&uLocal_58, 4);
	func_91();
	if (unk_0x3C406FC829C1E14A(iLocal_50))
	{
		unk_0x17631956147B5347(iLocal_50, 3);
	}
	if (!unk_0xEAEFBBEC1AEA464B(&Local_52))
	{
		if (unk_0x5D29F91E567588E2(&Local_52) != 0)
		{
			unk_0x91DEC7187FA01089(&Local_52);
		}
	}
}

void func_91()//Position - 0x27D6
{
	if (bLocal_83)
	{
		func_92(76);
	}
}

void func_92(int iParam0)//Position - 0x27E9
{
	if (iParam0 != 263)
	{
		func_79(iParam0, 1, 0);
	}
}

