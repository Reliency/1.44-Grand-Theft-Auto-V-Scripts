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
	int iLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	struct<16> Local_51 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<16> Local_52 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
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
	int iLocal_78 = 0;
	float fLocal_79 = 0f;
	int iLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	struct<2> Local_85 = { 0, 5 } ;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
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
	var uLocal_101 = 5;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	
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
	fLocal_79 = 0f;
	vLocal_56 = { ScriptParam_85.f_1[0 /*3*/] };
	vLocal_56 = { vLocal_56 };
	iLocal_54 = iLocal_54;
	Local_52 = { Local_52 };
	bVar0 = false;
	if (unk_0xE8A79675302ED812(82))
	{
		func_110(1);
	}
	iLocal_53 = unk_0xA95CF30C72EB526E(unk_0xB5CEFD608600A09F());
	iLocal_59 = 0;
	func_108(&Global_195BF, 0);
	func_107();
	if (func_106(uLocal_58, 1))
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
	if (!func_106(uLocal_58, 8))
	{
		if (!func_104(iLocal_64))
		{
			if (func_103(0, iLocal_63))
			{
				func_110(0);
			}
			else
			{
				func_110(1);
			}
		}
	}
	if (iLocal_63 != -1)
	{
		if (!func_103(0, iLocal_63))
		{
			func_110(1);
		}
	}
	if (func_106(uLocal_58, 8388608))
	{
		func_110(1);
	}
	if (func_106(uLocal_58, 524288) && (func_102() && !func_101()))
	{
		func_110(1);
	}
	if (unk_0xB731B8C5BCE89836(unk_0x2C087518F90303D5()) > 1 && !func_106(uLocal_58, 4194304))
	{
		if (iLocal_69 != 263)
		{
			func_100(iLocal_69, 1, 0);
			iLocal_69 = 263;
		}
		func_99(10);
	}
	if (!unk_0x724D816EA203A79E(iLocal_54))
	{
		if (func_98() && !Global_1974B)
		{
			func_97(1);
		}
		else if (Global_1974B)
		{
		}
	}
	while (true)
	{
		if ((!func_96() && !func_95()) && !func_94())
		{
			func_110(1);
		}
		iLocal_53 = unk_0xA95CF30C72EB526E(unk_0xB5CEFD608600A09F());
		if (func_106(uLocal_58, 1048576))
		{
			if (unk_0x1D403DFADBC2DE3C(iLocal_53, 0))
			{
				func_110(1);
			}
		}
		if (unk_0x724D816EA203A79E(iLocal_53) && !unk_0x1D403DFADBC2DE3C(iLocal_53, 0))
		{
			vLocal_55 = { unk_0x541C2AEF053615BC(iLocal_53, true) };
			fLocal_57 = SYSTEM::VDIST2(vLocal_55, ScriptParam_85.f_1[0 /*3*/]);
			fLocal_57 = fLocal_57;
			vLocal_75 = { vLocal_55 };
			vLocal_76 = { ScriptParam_85.f_1[0 /*3*/] };
			vLocal_75.z = 0f;
			vLocal_76.z = 0f;
			fLocal_74 = SYSTEM::VDIST2(vLocal_75, vLocal_76);
			switch (iLocal_59)
			{
				case 0:
					if (func_104(iLocal_64) || (func_106(uLocal_58, 16) && !func_106(uLocal_58, 524288)))
					{
						unk_0xF243B7A14FCFD0F4(iLocal_78);
						iLocal_62 = -1;
						func_93();
						func_99(1);
					}
					else
					{
						if (fLocal_74 > (fLocal_66 * fLocal_66))
						{
							if (iLocal_69 != 263)
							{
								func_100(iLocal_69, 1, 0);
								iLocal_69 = 263;
							}
							func_99(10);
						}
						if ((vLocal_55.z - ScriptParam_85.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_92() && unk_0xD6513D668481290A(iLocal_78))
					{
						iLocal_67 = iLocal_67;
						func_99(3);
					}
					else
					{
						func_93();
					}
					break;
				
				case 3:
					if (unk_0xF5F5C6DD66B0FB2A())
					{
						func_110(1);
						return;
					}
					if (!func_104(iLocal_64))
					{
						if (!func_106(uLocal_58, 8))
						{
							bVar1 = true;
							if (unk_0x3362CDE8460ED38B(&(Global_16B1B.f_3), &Local_52))
							{
								Local_52 = { Local_51 };
								bVar1 = false;
							}
							if (bVar1)
							{
								func_110(0);
								break;
							}
						}
					}
					if (!unk_0x724D816EA203A79E(iLocal_54) && (((fLocal_57 > (10f * 10f) && !unk_0x33CC9445B2DF9387(ScriptParam_85.f_1[0 /*3*/], 5f)) || fLocal_57 > (80f * 80f)) || (!unk_0x724D816EA203A79E(iLocal_54) && unk_0x17FAADF9916EF741())))
					{
						unk_0xEDAD35A0D81ED3FB(ScriptParam_85.f_1[0 /*3*/], 8f, 0, 0, 0, 0, false, 0);
						iLocal_54 = unk_0x61C05BF08A1E0EFE(iLocal_78, ScriptParam_85.f_1[0 /*3*/], fLocal_79, true, true, false);
						func_91();
						unk_0xA73D1278857991A2(iLocal_54, true);
						bVar2 = false;
						if (func_90() && !bVar2)
						{
							unk_0xD421BC740C5340C3(iLocal_54, 2);
							func_88(&uLocal_58, 32);
						}
					}
					else if (func_106(uLocal_58, 32))
					{
						if (!func_90())
						{
							if (!unk_0x1D403DFADBC2DE3C(iLocal_54, 0))
							{
								unk_0xD421BC740C5340C3(iLocal_54, 1);
							}
							func_108(&uLocal_58, 32);
						}
					}
					if (!func_106(uLocal_58, 4))
					{
						func_87();
						func_86(&uLocal_58, 4);
					}
					if (fLocal_74 > (fLocal_66 * fLocal_66) && !Global_16B3D)
					{
						if (iLocal_69 != 263)
						{
							if (func_85(6) && !func_84(iLocal_69))
							{
							}
							else
							{
								func_100(iLocal_69, 1, 0);
								iLocal_69 = 263;
							}
						}
						func_99(10);
					}
					else
					{
						Local_52 = { Local_51 };
						bVar3 = !func_106(uLocal_58, 64);
						func_108(&uLocal_58, 128);
						if (!func_83(3) && !Global_16B3D)
						{
							if (func_106(uLocal_58, 2097152))
							{
								if ((!func_106(uLocal_58, 1) || !unk_0x724D816EA203A79E(func_82())) && !Global_16B3D)
								{
									func_99(10);
									break;
								}
							}
						}
						if (func_106(uLocal_58, 524288) && (func_102() && !func_101()))
						{
							func_110(1);
						}
						if (func_81())
						{
							func_110(1);
						}
						if ((!func_73(6) || Global_1974B) || func_72())
						{
							bVar3 = false;
						}
						if (func_106(uLocal_58, 1))
						{
							if (!func_71())
							{
								func_88(&uLocal_58, 128);
								bVar3 = false;
							}
						}
						if (func_70(1))
						{
							bVar3 = false;
						}
						if (Global_11542)
						{
							bVar3 = false;
						}
						if (func_69())
						{
							bVar3 = false;
						}
						if (unk_0x7930B3E9C919E90F())
						{
							bVar3 = false;
						}
						if (func_68() || func_67(8, -1))
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
						if (func_66(0) || func_65())
						{
							bVar3 = false;
						}
						if (bVar3)
						{
							if (unk_0x724D816EA203A79E(iLocal_54))
							{
								if (!unk_0x4DBCE270B354E123(iLocal_54, vLocal_56, fLocal_77, fLocal_77, fLocal_77, false, true, 0))
								{
									func_99(7);
								}
							}
							if (unk_0x1D403DFADBC2DE3C(iLocal_54, 0))
							{
								func_88(&uLocal_58, 128);
								bVar3 = false;
							}
							else if (!unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA()))
							{
								func_88(&uLocal_58, 128);
								bVar3 = false;
							}
							else
							{
								iVar4 = unk_0x25480ACDBB6DB8F1(unk_0xBC25C936A095B5BA());
								if (bVar3)
								{
									if (iLocal_54 == iVar4)
									{
										if (!unk_0x4DBCE270B354E123(iLocal_53, ScriptParam_85.f_1[0 /*3*/], 4f, 4f, 2f, false, true, 0))
										{
											func_88(&uLocal_58, 128);
											bVar3 = false;
										}
									}
									else
									{
										func_88(&uLocal_58, 128);
										bVar3 = false;
									}
								}
							}
							if (!unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()))
							{
								bVar3 = false;
							}
							if (bVar3)
							{
								unk_0xD55638CE45B2B948(0, 51);
								if (func_64(iLocal_54))
								{
									if (iLocal_60 == -1)
									{
										func_63(&iLocal_60, 4, sLocal_65, 0, 0, 0, 0);
										func_88(&uLocal_58, 2048);
									}
									else if (!func_106(uLocal_58, 2048) || !unk_0xF16DAFF595E80F7C())
									{
										func_62(&iLocal_60);
										func_108(&uLocal_58, 2048);
									}
									if (func_60(iLocal_60, 1))
									{
										sLocal_65 = sLocal_65;
										func_62(&iLocal_60);
										func_108(&uLocal_58, 2048);
										unk_0x63831D2D5110C305(&Local_52);
										unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 56);
										func_99(5);
									}
								}
								else
								{
									sLocal_65 = sLocal_65;
									func_62(&iLocal_60);
									func_108(&uLocal_58, 2048);
									unk_0x63831D2D5110C305(&Local_52);
									unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 56);
									func_99(5);
								}
							}
						}
						if (!bVar3)
						{
							if (iLocal_60 != -1)
							{
								func_62(&iLocal_60);
								func_108(&uLocal_58, 2048);
								unk_0x7456702622C62EA0(0);
							}
						}
					}
					func_54();
					break;
				
				case 5:
					unk_0xD55638CE45B2B948(0, 51);
					if (unk_0xACE95AD318CE412B(&Local_52))
					{
						if (iLocal_60 != -1)
						{
							func_62(&iLocal_60);
						}
						iVar5 = 2;
						bVar0 = false;
						if (func_106(uLocal_58, 1))
						{
							if (func_85(6) || func_85(7))
							{
								iVar5 = 1;
								bVar0 = true;
							}
						}
						if (iVar5 != 1)
						{
							iVar5 = func_51(&iLocal_62, 6, iLocal_64, 0, 0);
						}
						if (iVar5 == 1)
						{
							if (!unk_0x1D403DFADBC2DE3C(iLocal_54, 0))
							{
								unk_0x1E7A09C1710FB071(&iLocal_54);
							}
							if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
							{
								unk_0xA98B19EC1C93FC3C(unk_0xB5CEFD608600A09F());
							}
							func_50();
							if (Global_90C1)
							{
								func_41(unk_0xBC25C936A095B5BA());
							}
							unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 56);
							iLocal_50 = func_25();
							func_88(&uLocal_58, 2);
							func_99(6);
							func_21(&iLocal_71);
							if (iLocal_63 != -1)
							{
								func_20(iLocal_63);
								func_17(func_19(iLocal_63), 0, 0);
							}
						}
						else if (iVar5 == 2)
						{
							func_16();
						}
						else if (iVar5 == 0)
						{
							func_99(10);
						}
					}
					else
					{
						func_16();
					}
					break;
				
				case 6:
					if (!func_106(uLocal_58, 256))
					{
						if (unk_0x422F9EDE839E6ABB() || unk_0x726D9204B160D23E())
						{
							unk_0xD55638CE45B2B948(0, 51);
						}
						else if (unk_0x17FAADF9916EF741())
						{
							func_88(&uLocal_58, 256);
						}
					}
					if (func_106(Global_195BF, 262144))
					{
						func_108(&Global_195BF, 262144);
						func_15();
					}
					if (func_106(uLocal_58, 2097152))
					{
						if (!func_83(3) && !unk_0x3C406FC829C1E14A(iLocal_50))
						{
							func_99(10);
						}
					}
					if (!unk_0x3C406FC829C1E14A(iLocal_50))
					{
						unk_0x739C5CCC39AE3137(SYSTEM::ROUND((func_11(&iLocal_71) * 1000f)), iLocal_63, 0);
						func_10(&iLocal_71);
						func_108(&uLocal_58, 256);
						func_9();
						if (unk_0x724D816EA203A79E(iLocal_54))
						{
							if (!unk_0x1D403DFADBC2DE3C(iLocal_54, 0))
							{
								unk_0x1E7A09C1710FB071(&iLocal_54);
								iLocal_54 = 0;
							}
						}
						if (bVar0)
						{
							func_108(&uLocal_58, 2);
						}
						else if (func_106(uLocal_58, 2))
						{
							if (func_106(Global_195BF, 0))
							{
								func_8(&iLocal_62);
								iLocal_62 = -1;
								func_108(&uLocal_58, 2);
							}
							else
							{
								func_8(&iLocal_62);
								iLocal_62 = -1;
								func_108(&uLocal_58, 2);
							}
						}
						func_99(0);
						if (iLocal_63 != -1)
						{
							if (func_106(Global_195BF, 0))
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
						func_108(&Global_195BF, 0);
						if (func_106(uLocal_58, 16777216))
						{
							func_110(1);
						}
						if (iLocal_63 != -1)
						{
							if (Global_19B04.f_2360)
							{
								if (!func_103(0, iLocal_63))
								{
									func_110(1);
								}
							}
						}
					}
					func_3();
					break;
				
				case 8:
					func_99(0);
					break;
				
				case 10:
					func_110(1);
					break;
				
				case 9:
					if (fLocal_74 > (fLocal_66 * fLocal_66))
					{
						if (iLocal_69 != 263)
						{
							func_100(iLocal_69, 1, 0);
							iLocal_69 = 263;
						}
						func_99(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_69 != 263)
					{
						func_100(iLocal_69, 0, 0);
					}
					if (iLocal_60 != -1)
					{
						func_62(&iLocal_60);
					}
					if (!unk_0xF1734B55490E9045(sLocal_65))
					{
						if (func_1(sLocal_65))
						{
							unk_0x7456702622C62EA0(1);
						}
					}
					func_99(4);
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
									if (func_104(iLocal_64) && func_103(0, iLocal_63))
									{
										func_107();
										if (iLocal_69 != 263)
										{
											func_100(iLocal_69, 1, 0);
										}
										func_99(0);
									}
								}
							}
							else if (iLocal_70 == 0)
							{
								if (fLocal_74 > (fLocal_66 * fLocal_66))
								{
									if (iLocal_69 != 263)
									{
										func_100(iLocal_69, 1, 0);
										iLocal_69 = 263;
									}
									func_99(10);
								}
							}
							else if (iLocal_70 == 1)
							{
								if (fLocal_74 > ((80f + 5f) * (80f + 5f)))
								{
									func_107();
									if (iLocal_69 != 263)
									{
										func_100(iLocal_69, 1, 0);
									}
									func_99(0);
								}
							}
						}
						else
						{
							func_100(iLocal_69, 1, 0);
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

int func_1(char* sParam0)//Position - 0xC00
{
	unk_0xF07D20149ECBC61E(sParam0);
	return unk_0xA66DBDA0A072514A(0);
}

void func_2()//Position - 0xC13
{
}

void func_3()//Position - 0xC1B
{
}

void func_4()//Position - 0xC23
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x585DE1CBEEB2D27D(26379945, 1697.183f, 3279.226f, 41.7283f, 1.5897f, 0f, 146.8519f, 50f, 1, 2);
	iVar1 = unk_0x585DE1CBEEB2D27D(26379945, 1697.755f, 3280.423f, 41.7708f, -9.1434f, 0f, 168.0244f, 50f, 0, 2);
	unk_0xAE099C1ADC89C331(iVar1, iVar0, 3650, 1, 1);
	unk_0xCF9DB88DE4E2D5C7(0);
	unk_0x062C9995BFD27B2A(true, false, 3000, 1, 0, 0);
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()) && !unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1) || unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA()))
		{
			iLocal_54 = unk_0xD20EBB97FE8799ED(unk_0xBC25C936A095B5BA());
			unk_0xD421BC740C5340C3(iLocal_54, 1);
			unk_0x4E87F356DA56EB3F(iLocal_54, true);
			unk_0xA3981DED4FC2E56E(unk_0xBC25C936A095B5BA(), 0, 0);
		}
	}
	unk_0x77815D3407C6700D(iLocal_54, true, 1);
	func_5(&iLocal_80);
	if (unk_0x724D816EA203A79E(iLocal_80))
	{
		unk_0x1E7A09C1710FB071(&iLocal_80);
	}
	while (unk_0x16BE1286447174A9(iVar0) || unk_0x16BE1286447174A9(iVar1))
	{
		unk_0xDE7B9CB38D019BF0();
		SYSTEM::WAIT(0);
	}
	unk_0x9CB4DD3D88846081(0, 0, 3, 0);
	if (unk_0xEF0E25DA0CB6E8FF(iVar0))
	{
		unk_0x4EC087603E1DEF9C(iVar0, 0);
	}
	if (unk_0xEF0E25DA0CB6E8FF(iVar1))
	{
		unk_0x4EC087603E1DEF9C(iVar1, 0);
	}
}

void func_5(var uParam0)//Position - 0xD5D
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

int func_6(int iParam0)//Position - 0xD94
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

void func_7(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xDD7
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

void func_8(int iParam0)//Position - 0xE1B
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

void func_9()//Position - 0xE58
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

void func_10(int iParam0)//Position - 0xE9A
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

float func_11(int iParam0)//Position - 0xEB0
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

float func_12(bool bParam0)//Position - 0xEEF
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

bool func_13(var uParam0)//Position - 0xF47
{
	return unk_0xFA30DFD0084E92FE(*uParam0, 2);
}

bool func_14(var uParam0)//Position - 0xF57
{
	return unk_0xFA30DFD0084E92FE(*uParam0, 1);
}

int func_15()//Position - 0xF67
{
	return 1;
}

void func_16()//Position - 0xF70
{
}

void func_17(char* sParam0, int iParam1, int iParam2)//Position - 0xF78
{
	if (!unk_0xF1734B55490E9045(&Global_1603A))
	{
		unk_0x857F9926E7882AF4(&Global_1603A, 0, 0, 0, 1, 0);
		StringCopy(&Global_1603A, "", 64);
	}
	StringCopy(&Global_1603A, sParam0, 64);
	unk_0xFC3106D886D77FE2(sParam0, iParam1, iParam2, func_18(0));
}

bool func_18(bool bParam0)//Position - 0xFB9
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_1163A, 0);
}

char* func_19(int iParam0)//Position - 0xFE4
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

void func_20(int iParam0)//Position - 0x1122
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

void func_21(int iParam0)//Position - 0x1179
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

void func_22(int iParam0)//Position - 0x119A
{
	func_23(iParam0, 0f);
}

void func_23(int iParam0, float fParam1)//Position - 0x11A9
{
	iParam0->f_1 = (func_12(unk_0xFA30DFD0084E92FE(*iParam0, 4)) - fParam1);
	unk_0xF0059F27F7BB6680(iParam0, 1);
	unk_0x7CB6FD92BE491AD9(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_24(int iParam0)//Position - 0x11D7
{
	if (!func_14(iParam0))
	{
		func_22(iParam0);
	}
}

int func_25()//Position - 0x11EF
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_1(sLocal_65))
	{
		unk_0x7456702622C62EA0(1);
	}
	if (unk_0xE7CC712DAAEA69F3("airfield"))
	{
		unk_0x66EC947D9DEDE5B3("airfield");
	}
	iVar0 = unk_0x3E12B546F3F2597A();
	if (((((unk_0x724D816EA203A79E(iVar0) && iVar0 != iLocal_54) && !unk_0x1D403DFADBC2DE3C(iVar0, 0)) && unk_0x6F79ECA8C83E4357(iVar0) != joaat("stunt")) && unk_0x1AAF0C23233C57AF(iVar0, -1, 0)) && unk_0x6F79ECA8C83E4357(iVar0) != joaat("cargobob"))
	{
		iVar1 = unk_0x39827CF9BEAB804C(1694.736f, 3276.483f, 41.2979f, 5f, joaat("stunt"), 16384);
		if (unk_0x724D816EA203A79E(iVar1))
		{
			unk_0x77815D3407C6700D(iVar1, true, 0);
		}
		func_27(1689.662f, 3274.546f, 40.00918f, 1696.669f, 3271.265f, 42.80674f, 7.25f, 1673.428f, 3267.02f, 40.0898f, 108.5236f, 1, 1, 1, 0, 0);
		if (unk_0x724D816EA203A79E(iVar1))
		{
			unk_0x1E7A09C1710FB071(&iVar1);
		}
		if (func_26(&iLocal_80))
		{
		}
	}
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()) && !unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		iVar0 = unk_0xD20EBB97FE8799ED(unk_0xBC25C936A095B5BA());
	}
	if (unk_0x724D816EA203A79E(iVar0))
	{
		unk_0xD421BC740C5340C3(iVar0, 1);
	}
	iVar2 = SYSTEM::START_NEW_SCRIPT(&Local_51, iLocal_61);
	unk_0x91DEC7187FA01089(&Local_51);
	return iVar2;
}

int func_26(int iParam0)//Position - 0x133E
{
	int iVar0;
	
	iVar0 = unk_0x3E12B546F3F2597A();
	if (unk_0x724D816EA203A79E(iVar0))
	{
		if (!func_6(iVar0))
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && unk_0xE642C1AC73CE364E(iVar0, unk_0xBC25C936A095B5BA(), vLocal_45, 0, 1, 0))
			{
				unk_0x7A368CF6F3C10DC1(iVar0);
				unk_0xD434A01DEA38A939(iVar0, false, 0);
				unk_0xDC078F87049ECECE(iVar0, false, 0);
				unk_0x346478B12F69D4E3(iVar0, true);
				unk_0x77815D3407C6700D(iVar0, true, 1);
				*iParam0 = iVar0;
				return 1;
			}
		}
	}
	return 0;
}

void func_27(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)//Position - 0x13B0
{
	func_28(vParam0, vParam1, fParam2, vParam3, fParam4, 0f, 0f, 0f, bParam5, bParam6, bParam7, bParam8, bParam9);
}

void func_28(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, float fParam4, vector3 vParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)//Position - 0x13D9
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (bParam7)
	{
		bParam7 = false;
	}
	bVar2 = true;
	iVar3 = 0;
	iVar0 = unk_0x3E12B546F3F2597A();
	if (unk_0x724D816EA203A79E(iVar0))
	{
		if (!unk_0x5CAE759AE8219D20(iVar0))
		{
			unk_0x77815D3407C6700D(iVar0, true, 0);
			iVar3 = 1;
		}
		if (unk_0xE59B7F5A03335350(iVar0, 0))
		{
			if (bParam10)
			{
				func_40(iVar0);
			}
			if (unk_0x0C265B3C448E6954(iVar0, vParam0, vParam1, fParam2, 0, true, 0))
			{
				bVar1 = true;
			}
			else
			{
				vVar6 = { unk_0x541C2AEF053615BC(iVar0, true) };
				if ((vVar6.z > vParam0.z && vVar6.z < vParam1.z) || (vVar6.z > vParam1.z && vVar6.z < vParam0.z))
				{
					if (func_37(iVar0, vParam0, vParam1, fParam2))
					{
						bVar1 = true;
					}
				}
			}
			if (unk_0xE59B7F5A03335350(iVar0, 0))
			{
				if (unk_0x5E87CB0495C97732(iVar0, joaat("taxi")))
				{
					if (unk_0x3187EF5798B5D209(iVar0, -1, 0) != unk_0xBC25C936A095B5BA() && unk_0x3187EF5798B5D209(iVar0, -1, 0) != 0)
					{
						if (unk_0xF0F2FC9DE291567F(vParam0 + vParam1 / Vector(2f, 2f, 2f), unk_0x541C2AEF053615BC(iVar0, true), true) < 20f)
						{
							bVar1 = true;
							bVar2 = false;
						}
					}
				}
			}
			if (bParam8)
			{
				if (func_30(iVar0, func_32(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!func_29(vParam5))
				{
					if (unk_0xE59B7F5A03335350(iVar0, 0))
					{
						iVar7 = unk_0x6F79ECA8C83E4357(iVar0);
						unk_0xB34C58360DA450F6(iVar0, &vVar4, &vVar5);
						if (unk_0x8C1A6E7D5F410F4A(iVar7))
						{
							vParam5.x = (vParam5.x + 3f);
							vParam5.y = (vParam5.y + 3f);
						}
						if (((iVar7 == joaat("zentorno") || iVar7 == joaat("btype")) || iVar7 == joaat("dubsta3")) || iVar7 == joaat("monster"))
						{
							vParam5 = { vParam5 * Vector(1.1f, 1.1f, 1.1f) };
						}
						else if (iVar7 == joaat("t20") || iVar7 == joaat("virgo"))
						{
							vParam5 = { vParam5 * Vector(1.2f, 1.2f, 1.2f) };
						}
						if ((vVar5.x - vVar4.x) > vParam5.x)
						{
							bVar2 = false;
						}
						else if ((vVar5.y - vVar4.y) > vParam5.y)
						{
							bVar2 = false;
						}
						else if ((vVar5.z - vVar4.z) > vParam5.z)
						{
							bVar2 = false;
						}
					}
				}
				if (unk_0xE59B7F5A03335350(iVar0, 0))
				{
					if (bVar2)
					{
						unk_0xEDAD35A0D81ED3FB(vParam3, 5f, 0, 0, 0, 0, false, 0);
						unk_0x019CE76D5286C95C(iVar0, fParam4);
						unk_0x641B19E156645A92(iVar0, vParam3, 1, false, 0, 1);
						unk_0xF0A40F19AAB79E88(iVar0, 1084227584);
						if (bParam9)
						{
							unk_0x2D655AA68FA1736B(iVar0, false, true, 0);
							unk_0x127F627F30266DD9(iVar0, 1);
						}
					}
					else
					{
						if (!unk_0x5CAE759AE8219D20(iVar0) || !unk_0xB248FAA35ED47DB9(iVar0, 1))
						{
							unk_0x77815D3407C6700D(iVar0, true, 1);
						}
						if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iVar0, 0))
						{
							unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), unk_0x541C2AEF053615BC(iVar0, true), 1, false, 0, 1);
						}
						unk_0xCF6040807CC0E4A5(&iVar0);
					}
				}
			}
			if (bParam6)
			{
				unk_0x1E0EC6B6C067C872(vParam0, vParam1, fParam2, 0, 0, 0, 0, 0, 0);
			}
			if (iVar3 == 1)
			{
				if (unk_0x724D816EA203A79E(iVar0))
				{
					if (unk_0x5CAE759AE8219D20(iVar0))
					{
						unk_0x1E7A09C1710FB071(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!unk_0x5CAE759AE8219D20(iVar0))
			{
				unk_0x77815D3407C6700D(iVar0, true, 0);
			}
			iVar8 = unk_0x3187EF5798B5D209(iVar0, -1, 0);
			if (unk_0x724D816EA203A79E(iVar8) && !unk_0x36CEFBE9B745A58D(iVar8))
			{
				unk_0x641B19E156645A92(iVar8, unk_0x541C2AEF053615BC(iVar8, true), 1, false, 0, 1);
			}
			iVar9 = unk_0x7C02672B11D4F65B(unk_0x6F79ECA8C83E4357(iVar0));
			if (iVar9 <= 2)
			{
				iVar8 = unk_0x3187EF5798B5D209(iVar0, 0, 0);
				if (unk_0x724D816EA203A79E(iVar8) && !unk_0x36CEFBE9B745A58D(iVar8))
				{
					unk_0x641B19E156645A92(iVar8, unk_0x541C2AEF053615BC(iVar8, true), 1, false, 0, 1);
				}
			}
			if (iVar9 <= 4)
			{
				iVar8 = unk_0x3187EF5798B5D209(iVar0, 1, 0);
				if (unk_0x724D816EA203A79E(iVar8) && !unk_0x36CEFBE9B745A58D(iVar8))
				{
					unk_0x641B19E156645A92(iVar8, unk_0x541C2AEF053615BC(iVar8, true), 1, false, 0, 1);
				}
				iVar8 = unk_0x3187EF5798B5D209(iVar0, 2, 0);
				if (unk_0x724D816EA203A79E(iVar8) && !unk_0x36CEFBE9B745A58D(iVar8))
				{
					unk_0x641B19E156645A92(iVar8, unk_0x541C2AEF053615BC(iVar8, true), 1, false, 0, 1);
				}
			}
			unk_0xCF6040807CC0E4A5(&iVar0);
		}
	}
}

int func_29(vector3 vParam0)//Position - 0x17CD
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_30(int iParam0, int iParam1, bool bParam2)//Position - 0x17F7
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0x724D816EA203A79E(iParam0) || !unk_0xE59B7F5A03335350(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_31(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || unk_0xFA30DFD0084E92FE(Global_19B04.f_1C20[iVar2], 0))
		{
			if (unk_0x9945EE67AEC122F7(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_31(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x1868
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

int func_32()//Position - 0x1939
{
	func_33();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_33()//Position - 0x1952
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_36(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_35(unk_0xBC25C936A095B5BA());
			if (func_34(iVar0) && (!func_85(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_34(Global_19B04.f_932.f_21B.f_10CD))
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

bool func_34(int iParam0)//Position - 0x1A4F
{
	return iParam0 < 3;
}

int func_35(int iParam0)//Position - 0x1A5B
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_36(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_36(int iParam0)//Position - 0x1A98
{
	if (func_34(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_37(int iParam0, vector3 vParam1, vector3 vParam2, float fParam3)//Position - 0x1AC2
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6[4];
	struct<2> Var7;
	struct<2> Var8;
	
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		vParam1.z = vParam2.z;
		vVar0 = { func_39(vParam1 - vParam2) };
		vVar1 = { vVar0 };
		vVar0.x = -vVar1.y;
		vVar0.y = vVar1.x;
		vVar0.z = 0f;
		vVar2 = { vParam1 - vVar0 * FtoV((fParam3 / 2f)) };
		vVar3 = { vParam1 + vVar0 * FtoV((fParam3 / 2f)) };
		vVar4 = { vParam2 - vVar0 * FtoV((fParam3 / 2f)) };
		vVar5 = { vParam2 + vVar0 * FtoV((fParam3 / 2f)) };
		unk_0x2B3953EE61953843(unk_0x6F79ECA8C83E4357(iParam0), &Var7, &Var8);
		vVar6[0 /*3*/] = { unk_0xA4455714F3DCE207(iParam0, Var7, Var7.f_1, 0f) };
		vVar6[1 /*3*/] = { unk_0xA4455714F3DCE207(iParam0, Var7, Var8.f_1, 0f) };
		vVar6[2 /*3*/] = { unk_0xA4455714F3DCE207(iParam0, Var8, Var7.f_1, 0f) };
		vVar6[3 /*3*/] = { unk_0xA4455714F3DCE207(iParam0, Var8, Var8.f_1, 0f) };
		if (((((((((((((((func_38(vVar6[0 /*3*/], vVar6[1 /*3*/], vVar2, vVar3) || func_38(vVar6[0 /*3*/], vVar6[1 /*3*/], vVar3, vVar5)) || func_38(vVar6[0 /*3*/], vVar6[1 /*3*/], vVar4, vVar5)) || func_38(vVar6[0 /*3*/], vVar6[1 /*3*/], vVar2, vVar4)) || func_38(vVar6[1 /*3*/], vVar6[3 /*3*/], vVar2, vVar3)) || func_38(vVar6[1 /*3*/], vVar6[3 /*3*/], vVar3, vVar5)) || func_38(vVar6[1 /*3*/], vVar6[3 /*3*/], vVar4, vVar5)) || func_38(vVar6[1 /*3*/], vVar6[3 /*3*/], vVar2, vVar4)) || func_38(vVar6[3 /*3*/], vVar6[2 /*3*/], vVar2, vVar3)) || func_38(vVar6[3 /*3*/], vVar6[2 /*3*/], vVar3, vVar5)) || func_38(vVar6[3 /*3*/], vVar6[2 /*3*/], vVar4, vVar5)) || func_38(vVar6[3 /*3*/], vVar6[2 /*3*/], vVar2, vVar4)) || func_38(vVar6[2 /*3*/], vVar6[0 /*3*/], vVar2, vVar3)) || func_38(vVar6[2 /*3*/], vVar6[0 /*3*/], vVar3, vVar5)) || func_38(vVar6[2 /*3*/], vVar6[0 /*3*/], vVar4, vVar5)) || func_38(vVar6[2 /*3*/], vVar6[0 /*3*/], vVar2, vVar4))
		{
			return 1;
		}
	}
	return 0;
}

int func_38(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3, struct<2> Param4, var uParam5, struct<2> Param6, var uParam7)//Position - 0x1DB8
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	
	fVar0 = Param0;
	fVar1 = Param0.f_1;
	fVar2 = Param2;
	fVar3 = Param2.f_1;
	fVar4 = Param4;
	fVar5 = Param4.f_1;
	fVar6 = Param6;
	fVar7 = Param6.f_1;
	fVar8 = (fVar2 - fVar0);
	fVar9 = (fVar3 - fVar1);
	fVar10 = (fVar6 - fVar4);
	fVar11 = (fVar7 - fVar5);
	fVar12 = (((-fVar9 * (fVar0 - fVar4)) + (fVar8 * (fVar1 - fVar5))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	fVar13 = (((fVar10 * (fVar1 - fVar5)) - (fVar11 * (fVar0 - fVar4))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	if (((fVar12 >= 0f && fVar12 <= 1f) && fVar13 >= 0f) && fVar13 <= 1f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_39(vector3 vParam0)//Position - 0x1E6C
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.y = 0f;
		vParam0.z = 0f;
	}
	return vParam0;
}

void func_40(int iParam0)//Position - 0x1EAB
{
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (unk_0xE59B7F5A03335350(iParam0, 0))
		{
			if (unk_0x77F5C030D3238E26(iParam0) <= 200f)
			{
				unk_0xE6E403909F4BF47F(iParam0, 500f);
			}
			if (unk_0xA6EB9CEADFB819EC(iParam0) <= 700f)
			{
				unk_0xE6E403909F4BF47F(iParam0, 900f);
			}
			if (unk_0x8D66276473ABD7CC(iParam0) < 200)
			{
				unk_0xE6E403909F4BF47F(iParam0, 500f);
			}
		}
	}
}

void func_41(int iParam0)//Position - 0x1F10
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
	iVar0 = func_49(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_8FEC[iVar0 /*5*/];
		func_44(1, iVar1, 1);
		return;
	}
	iVar2 = func_43(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_42(iVar2);
}

void func_42(int iParam0)//Position - 0x1F69
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

int func_43(int iParam0)//Position - 0x1FEC
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

void func_44(int iParam0, int iParam1, int iParam2)//Position - 0x201D
{
	func_45(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_45(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2032
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
	if (func_47(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_46();
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

int func_46()//Position - 0x20B4
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

int func_47(int iParam0, int iParam1, int iParam2)//Position - 0x20E5
{
	if (func_48(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_48(int iParam0, int iParam1, int iParam2)//Position - 0x2100
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

int func_49(int iParam0)//Position - 0x214C
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

void func_50()//Position - 0x2195
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

int func_51(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x2212
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
		if (func_53(0))
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
		if (!func_104(iParam2))
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
			func_52(iParam0, iParam4);
		}
	}
	return 2;
}

void func_52(var uParam0, int iParam1)//Position - 0x2349
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

int func_53(int iParam0)//Position - 0x2398
{
	if (Global_8C41 == 15)
	{
		return 0;
	}
	if (func_104(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_54()//Position - 0x23BA
{
	if (((!unk_0x724D816EA203A79E(iLocal_54) || unk_0x1D403DFADBC2DE3C(iLocal_54, 0)) || !unk_0xE59B7F5A03335350(iLocal_54, 1)) || unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
	{
		if (unk_0x724D816EA203A79E(iLocal_54) && unk_0xE59B7F5A03335350(iLocal_54, 0))
		{
			unk_0xD421BC740C5340C3(iLocal_54, 2);
		}
		func_97(0);
		if (func_1(sLocal_65))
		{
			unk_0x7456702622C62EA0(1);
		}
		return;
	}
	if (fLocal_57 < (fLocal_77 * fLocal_77))
	{
		unk_0xD421BC740C5340C3(iLocal_54, 1);
		func_59(sLocal_65);
		func_55(0);
	}
	else if (func_1(sLocal_65))
	{
		unk_0x7456702622C62EA0(1);
	}
}

void func_55(int iParam0)//Position - 0x2456
{
	if (!Global_389D.f_1 == 1)
	{
		if (func_66(0))
		{
			func_56(iParam0);
		}
		unk_0xF0059F27F7BB6680(&Global_93C, 2);
	}
}

void func_56(int iParam0)//Position - 0x247F
{
	if (Global_3943)
	{
		func_58(0, 0);
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
	if (!func_57())
	{
		Global_389D.f_1 = 3;
	}
}

int func_57()//Position - 0x24EF
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_58(bool bParam0, bool bParam1)//Position - 0x2516
{
	if (bParam0)
	{
		if (func_66(0))
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

void func_59(char* sParam0)//Position - 0x258A
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 1, true, -1);
}

int func_60(int iParam0, bool bParam1)//Position - 0x25A0
{
	int iVar0;
	
	iVar0 = func_61(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x6A9CDB766DF7216F(unk_0xFC1CAE18F3ECBF2D()))
	{
		return 0;
	}
	if (func_66(0))
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

int func_61(int iParam0)//Position - 0x2658
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

void func_62(int iParam0)//Position - 0x2693
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_61(*iParam0);
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

void func_63(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0x26EA
{
	int iVar0;
	
	if (unk_0xB731B8C5BCE89836(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x7930B3E9C919E90F())
	{
		if (!*iParam0 == -1)
		{
			func_62(iParam0);
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

int func_64(int iParam0)//Position - 0x2815
{
	return 0;
	return 1;
}

var func_65()//Position - 0x2822
{
	return Global_10AB8;
}

int func_66(int iParam0)//Position - 0x282E
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

bool func_67(int iParam0, int iParam1)//Position - 0x2888
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

bool func_68()//Position - 0x28C3
{
	return unk_0x105601648511CC64() <= Global_43C1.f_1671 + 100;
}

int func_69()//Position - 0x28D8
{
	if (unk_0xB731B8C5BCE89836(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_70(bool bParam0)//Position - 0x28F2
{
	if (bParam0)
	{
		return (Global_4336.f_4 && Global_4336.f_68 == 4);
	}
	return Global_4336.f_4;
}

int func_71()//Position - 0x291B
{
	return 1;
}

bool func_72()//Position - 0x2924
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

int func_73(int iParam0)//Position - 0x2A2E
{
	int iVar0;
	
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				iVar0 = func_32();
				if (!func_34(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_80()) || Global_1974B) || Global_62BF) || func_79()) || func_67(8, -1)) || func_78()) || func_77()) || func_76()) || func_69()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1) || func_80()) || Global_62BF) || func_79()) || func_67(8, -1)) || func_76()) || func_78()) || func_77()) || func_69()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_80()) || Global_1974B) || Global_62BF) || func_79()) || func_67(8, -1)) || func_76()) || func_78()) || func_77()) || func_69()) || Global_19B04.f_1DEB.f_397[iVar0] == 5) || Global_8E64 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_80()) || Global_1974B) || Global_62BF) || func_79()) || func_67(8, -1)) || func_78()) || func_77()) || func_69()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_80() || unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0) || func_67(8, -1)) || func_69()) || func_75()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_67(8, -1) || func_78()) || func_77()) || func_75()) || func_74())
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
							if ((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || func_80()) || Global_62BF) || func_79()) || func_67(8, -1)) || func_77()) || func_76()) || func_69()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || !unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) || !unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F())) || !unk_0x726D9204B160D23E()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || func_80()) || func_77()) || Global_1974B) || Global_62BF) || func_79()) || Global_90C1) || func_67(8, -1)) || func_76()) || func_75()) || func_69()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || !unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) || !unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F())) || !unk_0x726D9204B160D23E()) || unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0)) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1)) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0x9273B3557334635D(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || func_80()) || Global_1974B) || Global_62BF) || func_79()) || func_67(8, -1)) || func_76()) || func_75()) || func_78()) || func_77()) || func_69())
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

var func_74()//Position - 0x314B
{
	return Global_16B42.f_1;
}

int func_75()//Position - 0x3159
{
	if (Global_15FA6 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_147B0[Global_15FA6 /*34*/].f_F, 13);
	}
	return 0;
}

int func_76()//Position - 0x317F
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

bool func_77()//Position - 0x31A9
{
	return Global_16B4F.f_142 > 0;
}

bool func_78()//Position - 0x31BA
{
	return Global_16B4F.f_141 > 0;
}

var func_79()//Position - 0x31CB
{
	return Global_140856;
}

int func_80()//Position - 0x31D7
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		return Global_161D2.f_2C == 1;
	}
	return 0;
}

int func_81()//Position - 0x31F3
{
	if (unk_0xB731B8C5BCE89836(joaat("stripperhome")) > 0)
	{
		return 1;
	}
	return 0;
}

var func_82()//Position - 0x320D
{
	return Global_15B64;
}

int func_83(int iParam0)//Position - 0x3219
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_85(6) || func_85(7))
			{
				return 1;
			}
			else
			{
				return func_83(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_104(5))
			{
				if (func_73(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_84(int iParam0)//Position - 0x328B
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return unk_0x2DA8CA50A72528FB(Global_6416[iVar0 /*23*/].f_13);
}

bool func_85(int iParam0)//Position - 0x32C7
{
	return Global_8C41 == iParam0;
}

void func_86(var uParam0, int iParam1)//Position - 0x32D5
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_87()//Position - 0x32E6
{
}

void func_88(var uParam0, int iParam1)//Position - 0x32EE
{
	func_89(uParam0, iParam1);
}

void func_89(var uParam0, var uParam1)//Position - 0x32FE
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_90()//Position - 0x330F
{
	if (Global_8C41 == 15)
	{
		return 0;
	}
	return 1;
}

void func_91()//Position - 0x3324
{
	iLocal_46++;
}

int func_92()//Position - 0x3332
{
	return 1;
}

void func_93()//Position - 0x333B
{
}

int func_94()//Position - 0x3343
{
	return 0;
}

int func_95()//Position - 0x334C
{
	return 1;
}

int func_96()//Position - 0x3355
{
	return 1;
}

void func_97(int iParam0)//Position - 0x335E
{
	if (iParam0 == 2)
	{
	}
	else if (iParam0 == 0)
	{
	}
	iLocal_70 = iParam0;
	iLocal_68 = 0;
	iLocal_59 = 7;
}

int func_98()//Position - 0x337F
{
	vector3 vVar0;
	float fVar1;
	
	if (unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		return 0;
	}
	vVar0 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
	fVar1 = SYSTEM::VDIST2(vVar0, vLocal_56);
	if (fVar1 < (10f * 10f))
	{
		return 1;
	}
	else if (fVar1 < (80f * 80f))
	{
		if (unk_0x33CC9445B2DF9387(vLocal_56, 5f))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_99(int iParam0)//Position - 0x33F2
{
	iLocal_59 = iParam0;
}

void func_100(int iParam0, bool bParam1, bool bParam2)//Position - 0x33FE
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

int func_101()//Position - 0x3507
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

int func_102()//Position - 0x3524
{
	if (Global_15FA6 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_147B0[Global_15FA6 /*34*/].f_F, 20);
	}
	return 0;
}

bool func_103(int iParam0, int iParam1)//Position - 0x354A
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

bool func_104(int iParam0)//Position - 0x3597
{
	return func_105(iParam0, Global_8C41);
}

int func_105(int iParam0, int iParam1)//Position - 0x35A8
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

bool func_106(var uParam0, int iParam1)//Position - 0x3789
{
	return (uParam0 && iParam1) != 0;
}

void func_107()//Position - 0x3798
{
	StringCopy(&Local_51, "stunt_plane_races", 64);
	iLocal_78 = joaat("stunt");
	fLocal_79 = 154.8464f;
	fLocal_66 = 209f;
	iLocal_69 = 95;
	unk_0xEDAD35A0D81ED3FB(vLocal_76, 10f, 0, 0, 0, 0, false, 0);
	iLocal_63 = 10;
	sLocal_65 = "PLAY_STUNT";
	fLocal_77 = 6f;
	iLocal_61 = 23500;
}

void func_108(var uParam0, int iParam1)//Position - 0x37E6
{
	func_109(uParam0, iParam1);
}

void func_109(var uParam0, var uParam1)//Position - 0x37F6
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_110(bool bParam0)//Position - 0x380B
{
	if (bParam0)
	{
		if (iLocal_69 != 263)
		{
			func_100(iLocal_69, 0, 0);
		}
	}
	func_62(&iLocal_60);
	if (func_106(uLocal_58, 2))
	{
		func_4();
		func_108(&uLocal_58, 2);
		func_8(&iLocal_62);
	}
	iLocal_62 = -1;
	func_111();
	unk_0x95E4B6F3ED223F5A();
}

void func_111()//Position - 0x3854
{
	if (unk_0x724D816EA203A79E(iLocal_54))
	{
		if (!unk_0x1D403DFADBC2DE3C(iLocal_54, 0))
		{
			unk_0x77815D3407C6700D(iLocal_54, true, 1);
			unk_0x1E7A09C1710FB071(&iLocal_54);
			unk_0xCF6040807CC0E4A5(&iLocal_54);
		}
	}
	func_108(&uLocal_58, 4);
	func_112();
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

void func_112()//Position - 0x38B9
{
}

