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
	char cLocal_52[64] = "";
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	vector3 vLocal_63 = { 0f, 0f, 0f };
	vector3 vLocal_64 = { 0f, 0f, 0f };
	float fLocal_65 = 0f;
	var uLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	char* sLocal_73 = NULL;
	float fLocal_74 = 0f;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	float fLocal_82 = 0f;
	vector3 vLocal_83 = { 0f, 0f, 0f };
	vector3 vLocal_84 = { 0f, 0f, 0f };
	float fLocal_85 = 0f;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	struct<2> Local_93 = { 0, 5 } ;
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
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 5;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
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
	iLocal_68 = -1;
	iLocal_69 = 2050;
	iLocal_70 = -1;
	iLocal_71 = -1;
	sLocal_73 = "CC_SUBSTR";
	fLocal_74 = 125f;
	iLocal_75 = 1;
	iLocal_77 = 263;
	fLocal_85 = 4f;
	iLocal_86 = 6;
	iLocal_87 = 18;
	vLocal_64 = { ScriptParam_93.f_1[0 /*3*/] };
	vLocal_64 = { vLocal_64 };
	iLocal_62 = iLocal_62;
	cLocal_52 = { cLocal_52 };
	bVar0 = false;
	if (unk_0xE8A79675302ED812(82))
	{
		func_93(1);
	}
	iLocal_61 = unk_0xA95CF30C72EB526E(unk_0xB5CEFD608600A09F());
	iLocal_67 = 0;
	func_91(&Global_195BF, 0);
	func_88();
	if (func_87(uLocal_66, 1))
	{
		iLocal_72 = 10;
	}
	else
	{
		iLocal_72 = 9;
	}
	while (!Global_7BBB)
	{
		SYSTEM::WAIT(0);
	}
	if (!func_87(uLocal_66, 8))
	{
		if (!func_85(iLocal_72))
		{
			if (func_84(0, iLocal_71))
			{
				func_93(0);
			}
			else
			{
				func_93(1);
			}
		}
	}
	if (iLocal_71 != -1)
	{
		if (!func_84(0, iLocal_71))
		{
			func_93(1);
		}
	}
	if (func_87(uLocal_66, 8388608))
	{
		func_93(1);
	}
	if (func_87(uLocal_66, 524288) && (func_83() && !func_82()))
	{
		func_93(1);
	}
	if (unk_0xB731B8C5BCE89836(unk_0x2C087518F90303D5()) > 1 && !func_87(uLocal_66, 4194304))
	{
		if (iLocal_77 != 263)
		{
			func_81(iLocal_77, 1, 0);
			iLocal_77 = 263;
		}
		func_80(10);
	}
	while (true)
	{
		iLocal_61 = unk_0xA95CF30C72EB526E(unk_0xB5CEFD608600A09F());
		if (func_87(uLocal_66, 1048576))
		{
			if (unk_0x1D403DFADBC2DE3C(iLocal_61, 0))
			{
				func_93(1);
			}
		}
		if (unk_0x724D816EA203A79E(iLocal_61) && !unk_0x1D403DFADBC2DE3C(iLocal_61, 0))
		{
			vLocal_63 = { unk_0x541C2AEF053615BC(iLocal_61, true) };
			fLocal_65 = SYSTEM::VDIST2(vLocal_63, ScriptParam_93.f_1[0 /*3*/]);
			fLocal_65 = fLocal_65;
			vLocal_83 = { vLocal_63 };
			vLocal_84 = { ScriptParam_93.f_1[0 /*3*/] };
			vLocal_83.z = 0f;
			vLocal_84.z = 0f;
			fLocal_82 = SYSTEM::VDIST2(vLocal_83, vLocal_84);
			switch (iLocal_67)
			{
				case 0:
					if (func_85(iLocal_72) || (func_87(uLocal_66, 16) && !func_87(uLocal_66, 524288)))
					{
						iLocal_70 = -1;
						func_79();
						func_80(1);
					}
					else
					{
						if (fLocal_82 > (fLocal_74 * fLocal_74))
						{
							if (iLocal_77 != 263)
							{
								func_81(iLocal_77, 1, 0);
								iLocal_77 = 263;
							}
							func_80(10);
						}
						if ((vLocal_63.z - ScriptParam_93.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_78())
					{
						iLocal_75 = iLocal_75;
						func_80(3);
					}
					else
					{
						func_79();
					}
					break;
				
				case 3:
					if (unk_0xF5F5C6DD66B0FB2A())
					{
						func_93(1);
						return;
					}
					if (!func_85(iLocal_72))
					{
						if (!func_87(uLocal_66, 8))
						{
							bVar1 = true;
							if (unk_0x3362CDE8460ED38B(&(Global_16B1B.f_3), &cLocal_52))
							{
								cLocal_52 = { Local_51 };
								bVar1 = false;
							}
							if (bVar1)
							{
								func_93(0);
								break;
							}
						}
					}
					if (!func_87(uLocal_66, 4))
					{
						func_77();
						func_76(&uLocal_66, 4);
					}
					if (fLocal_82 > (fLocal_74 * fLocal_74) && !Global_16B3D)
					{
						if (iLocal_77 != 263)
						{
							if (func_75(6) && !func_74(iLocal_77))
							{
							}
							else
							{
								func_81(iLocal_77, 1, 0);
								iLocal_77 = 263;
							}
						}
						func_80(10);
					}
					else
					{
						cLocal_52 = { Local_51 };
						bVar2 = !func_87(uLocal_66, 64);
						func_91(&uLocal_66, 128);
						if (!func_73(3) && !Global_16B3D)
						{
							if (func_87(uLocal_66, 2097152))
							{
								if ((!func_87(uLocal_66, 1) || !unk_0x724D816EA203A79E(func_72())) && !Global_16B3D)
								{
									func_80(10);
									break;
								}
							}
						}
						if (func_87(uLocal_66, 524288) && (func_83() && !func_82()))
						{
							func_93(1);
						}
						if (func_71())
						{
							func_93(1);
						}
						if ((!func_63(6) || Global_1974B) || func_62())
						{
							bVar2 = false;
						}
						if (func_87(uLocal_66, 1))
						{
							if (!func_61())
							{
								func_59(&uLocal_66, 128);
								bVar2 = false;
							}
						}
						if (func_58(1))
						{
							bVar2 = false;
						}
						if (Global_11542)
						{
							bVar2 = false;
						}
						if (func_57())
						{
							bVar2 = false;
						}
						if (unk_0x7930B3E9C919E90F())
						{
							bVar2 = false;
						}
						if (func_56() || func_55(8, -1))
						{
							bVar2 = false;
						}
						if (!unk_0xDB625D1720DAC49A(unk_0xB5CEFD608600A09F()))
						{
							bVar2 = false;
						}
						if (!unk_0xE7A89C39746A63AC(unk_0xB5CEFD608600A09F()))
						{
							bVar2 = false;
						}
						if (func_54(0) || func_53())
						{
							bVar2 = false;
						}
						if (bVar2)
						{
							if (unk_0x5237AF95232D78C5(iLocal_61, 0))
							{
								if (!unk_0x4DBCE270B354E123(unk_0x9FE9D386222EEE47(iLocal_61, 0), ScriptParam_93.f_1[0 /*3*/], fLocal_85, fLocal_85, 20f, false, false, iLocal_75))
								{
									bVar2 = false;
								}
							}
							else if (!unk_0x4DBCE270B354E123(iLocal_61, ScriptParam_93.f_1[0 /*3*/], fLocal_85, fLocal_85, 2f, false, true, iLocal_75))
							{
								bVar2 = false;
							}
							if (!unk_0x4DBCE270B354E123(iLocal_61, ScriptParam_93.f_1[0 /*3*/], fLocal_85, fLocal_85, 2f, false, true, 0))
							{
								func_59(&uLocal_66, 128);
								bVar2 = false;
							}
							iVar3 = unk_0x6E06C0DB9B43570D();
							if (iLocal_86 > iLocal_87)
							{
								if (iVar3 < iLocal_86 && iVar3 >= iLocal_87)
								{
									func_59(&uLocal_66, 128);
									bVar2 = false;
									if (fLocal_65 < ((fLocal_85 * fLocal_85) + 4f))
									{
										if (!func_87(uLocal_66, 134217728))
										{
											func_52("MG_NA_TIME", iLocal_86, iLocal_87);
											func_59(&uLocal_66, 134217728);
										}
									}
									else
									{
										func_91(&uLocal_66, 134217728);
									}
								}
							}
							else if (iVar3 < iLocal_86 || iVar3 >= iLocal_87)
							{
								func_59(&uLocal_66, 128);
								bVar2 = false;
								if (fLocal_65 < ((fLocal_85 * fLocal_85) + 4f))
								{
									if (!func_87(uLocal_66, 134217728))
									{
										func_52("MG_NA_TIME", iLocal_86, iLocal_87);
										func_59(&uLocal_66, 134217728);
									}
								}
								else
								{
									func_91(&uLocal_66, 134217728);
								}
							}
							if (bVar2 && func_46(func_47()) < iLocal_88)
							{
								func_59(&uLocal_66, 128);
								bVar2 = false;
								if (!func_87(uLocal_66, 33554432))
								{
									func_45("MG_YOU_IS_BROKE", iLocal_88, -1);
									func_59(&uLocal_66, 33554432);
								}
							}
							else
							{
								func_91(&uLocal_66, 33554432);
							}
							if (!unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()))
							{
								bVar2 = false;
							}
							if (bVar2)
							{
								unk_0xD55638CE45B2B948(0, 51);
								if (func_44(iLocal_62))
								{
									if (iLocal_68 == -1)
									{
										if (iLocal_88 > 0)
										{
											func_43(&iLocal_68, 4, "", 1, 0, 0, 0);
											func_42(sLocal_73, iLocal_88);
											func_59(&uLocal_66, 2048);
										}
										else
										{
											func_43(&iLocal_68, 4, sLocal_73, 0, 0, 0, 0);
											func_59(&uLocal_66, 2048);
										}
									}
									else if (!func_87(uLocal_66, 2048) || !unk_0xF16DAFF595E80F7C())
									{
										func_41(&iLocal_68);
										func_91(&uLocal_66, 2048);
									}
									if (func_39(iLocal_68, 1))
									{
										sLocal_73 = sLocal_73;
										func_41(&iLocal_68);
										func_91(&uLocal_66, 2048);
										if (func_87(uLocal_66, 2048))
										{
											if (unk_0xF16DAFF595E80F7C())
											{
												func_91(&uLocal_66, 2048);
												unk_0x7456702622C62EA0(0);
											}
										}
										unk_0x63831D2D5110C305(&cLocal_52);
										unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 56);
										func_80(5);
									}
								}
								else
								{
									sLocal_73 = sLocal_73;
									func_41(&iLocal_68);
									func_91(&uLocal_66, 2048);
									if (func_87(uLocal_66, 2048))
									{
										if (unk_0xF16DAFF595E80F7C())
										{
											func_91(&uLocal_66, 2048);
											unk_0x7456702622C62EA0(0);
										}
									}
									unk_0x63831D2D5110C305(&cLocal_52);
									unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 56);
									func_80(5);
								}
							}
						}
						if (!bVar2)
						{
							if (iLocal_68 != -1)
							{
								if (unk_0xF16DAFF595E80F7C())
								{
									func_41(&iLocal_68);
									func_91(&uLocal_66, 2048);
									unk_0x7456702622C62EA0(0);
								}
							}
						}
					}
					func_37();
					break;
				
				case 5:
					unk_0xD55638CE45B2B948(0, 51);
					if (unk_0xACE95AD318CE412B(&cLocal_52))
					{
						if (iLocal_68 != -1)
						{
							func_41(&iLocal_68);
						}
						iVar4 = 2;
						bVar0 = false;
						if (func_87(uLocal_66, 1))
						{
							if (func_75(6) || func_75(7))
							{
								iVar4 = 1;
								bVar0 = true;
							}
						}
						if (iVar4 != 1)
						{
							iVar4 = func_34(&iLocal_70, 6, iLocal_72, 0, 0);
						}
						if (iVar4 == 1)
						{
							if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
							{
								unk_0xA98B19EC1C93FC3C(unk_0xB5CEFD608600A09F());
							}
							func_33();
							if (Global_90C1)
							{
								func_24(unk_0xBC25C936A095B5BA());
							}
							unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 56);
							iLocal_50 = SYSTEM::START_NEW_SCRIPT(&cLocal_52, iLocal_69);
							unk_0x91DEC7187FA01089(&cLocal_52);
							Local_51 = { cLocal_52 };
							StringCopy(&cLocal_52, "", 64);
							func_91(&uLocal_66, 4);
							func_23();
							func_59(&uLocal_66, 2);
							func_80(6);
							func_19(&iLocal_79);
							if (iLocal_71 != -1)
							{
								func_18(iLocal_71);
								func_15(func_17(iLocal_71), 0, 0);
							}
						}
						else if (iVar4 == 2)
						{
							func_14();
						}
						else if (iVar4 == 0)
						{
							func_80(10);
						}
					}
					else
					{
						func_14();
					}
					break;
				
				case 6:
					if (func_87(Global_195BF, 262144))
					{
						func_91(&Global_195BF, 262144);
						func_13();
					}
					if (func_87(uLocal_66, 2097152))
					{
						if (!func_73(3) && !unk_0x3C406FC829C1E14A(iLocal_50))
						{
							func_80(10);
						}
					}
					if (!unk_0x3C406FC829C1E14A(iLocal_50))
					{
						unk_0x739C5CCC39AE3137(SYSTEM::ROUND((func_9(&iLocal_79) * 1000f)), iLocal_71, 0);
						func_8(&iLocal_79);
						func_91(&uLocal_66, 256);
						func_7();
						if (bVar0)
						{
							func_91(&uLocal_66, 2);
						}
						else if (func_87(uLocal_66, 2))
						{
							if (func_87(Global_195BF, 0))
							{
								func_6(&iLocal_70);
								iLocal_70 = -1;
								func_91(&uLocal_66, 2);
							}
							else
							{
								func_6(&iLocal_70);
								iLocal_70 = -1;
								func_91(&uLocal_66, 2);
							}
						}
						func_80(0);
						if (iLocal_71 != -1)
						{
							if (func_87(Global_195BF, 0))
							{
								unk_0x1B7435D54924A668(func_17(iLocal_71), 0, Global_16B40, 0);
								func_5(func_17(iLocal_71), 0, Global_16B40, 1, 0);
							}
							else
							{
								unk_0x1B7435D54924A668(func_17(iLocal_71), 0, Global_16B40, 0);
								func_5(func_17(iLocal_71), 0, Global_16B40, 0, 0);
							}
						}
						func_4();
						func_91(&Global_195BF, 0);
						if (func_87(uLocal_66, 16777216))
						{
							func_93(1);
						}
						if (iLocal_71 != -1)
						{
							if (Global_19B04.f_2360)
							{
								if (!func_84(0, iLocal_71))
								{
									func_93(1);
								}
							}
						}
					}
					func_3();
					break;
				
				case 8:
					func_80(0);
					break;
				
				case 10:
					func_93(1);
					break;
				
				case 9:
					if (fLocal_82 > (fLocal_74 * fLocal_74))
					{
						if (iLocal_77 != 263)
						{
							func_81(iLocal_77, 1, 0);
							iLocal_77 = 263;
						}
						func_80(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_77 != 263)
					{
						func_81(iLocal_77, 0, 0);
					}
					if (iLocal_68 != -1)
					{
						func_41(&iLocal_68);
					}
					if (!unk_0xF1734B55490E9045(sLocal_73))
					{
						if (func_1(sLocal_73))
						{
							unk_0x7456702622C62EA0(1);
						}
					}
					func_80(4);
					break;
				
				case 4:
					if ((iLocal_76 % 150) == 0)
					{
						if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
						{
							if (iLocal_78 == 2)
							{
								if (iLocal_78 == 2)
								{
									if (func_85(iLocal_72) && func_84(0, iLocal_71))
									{
										func_88();
										if (iLocal_77 != 263)
										{
											func_81(iLocal_77, 1, 0);
										}
										func_80(0);
									}
								}
							}
							else if (iLocal_78 == 0)
							{
								if (fLocal_82 > (fLocal_74 * fLocal_74))
								{
									if (iLocal_77 != 263)
									{
										func_81(iLocal_77, 1, 0);
										iLocal_77 = 263;
									}
									func_80(10);
								}
							}
							else if (iLocal_78 == 1)
							{
								if (fLocal_82 > ((80f + 5f) * (80f + 5f)))
								{
									func_88();
									if (iLocal_77 != 263)
									{
										func_81(iLocal_77, 1, 0);
									}
									func_80(0);
								}
							}
						}
						else
						{
							func_81(iLocal_77, 1, 0);
						}
					}
					else
					{
						iLocal_76++;
					}
					break;
				}
		}
		SYSTEM::WAIT(0);
	}
}

int func_1(char* sParam0)//Position - 0xBEC
{
	unk_0xF07D20149ECBC61E(sParam0);
	return unk_0xA66DBDA0A072514A(0);
}

void func_2()//Position - 0xBFF
{
}

void func_3()//Position - 0xC07
{
}

void func_4()//Position - 0xC0F
{
}

void func_5(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xC17
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

void func_6(int iParam0)//Position - 0xC5B
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

void func_7()//Position - 0xC98
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

void func_8(int iParam0)//Position - 0xCDA
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

float func_9(int iParam0)//Position - 0xCF0
{
	if (func_12(iParam0))
	{
		if (func_11(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_10(unk_0xFA30DFD0084E92FE(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_10(bool bParam0)//Position - 0xD2F
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

bool func_11(var uParam0)//Position - 0xD87
{
	return unk_0xFA30DFD0084E92FE(*uParam0, 2);
}

bool func_12(var uParam0)//Position - 0xD97
{
	return unk_0xFA30DFD0084E92FE(*uParam0, 1);
}

int func_13()//Position - 0xDA7
{
	return 1;
}

void func_14()//Position - 0xDB0
{
}

void func_15(char* sParam0, int iParam1, int iParam2)//Position - 0xDB8
{
	if (!unk_0xF1734B55490E9045(&Global_1603A))
	{
		unk_0x857F9926E7882AF4(&Global_1603A, 0, 0, 0, 1, 0);
		StringCopy(&Global_1603A, "", 64);
	}
	StringCopy(&Global_1603A, sParam0, 64);
	unk_0xFC3106D886D77FE2(sParam0, iParam1, iParam2, func_16(0));
}

bool func_16(bool bParam0)//Position - 0xDF9
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_1163A, 0);
}

char* func_17(int iParam0)//Position - 0xE24
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

void func_18(int iParam0)//Position - 0xF62
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

void func_19(int iParam0)//Position - 0xFB9
{
	if (!func_12(iParam0))
	{
		func_22(iParam0);
	}
	else
	{
		func_20(iParam0);
	}
}

void func_20(int iParam0)//Position - 0xFDA
{
	func_21(iParam0, 0f);
}

void func_21(int iParam0, float fParam1)//Position - 0xFE9
{
	iParam0->f_1 = (func_10(unk_0xFA30DFD0084E92FE(*iParam0, 4)) - fParam1);
	unk_0xF0059F27F7BB6680(iParam0, 1);
	unk_0x7CB6FD92BE491AD9(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_22(int iParam0)//Position - 0x1017
{
	if (!func_12(iParam0))
	{
		func_20(iParam0);
	}
}

void func_23()//Position - 0x102F
{
	int iVar0;
	var uVar1[100];
	int iVar2;
	int iVar3;
	
	if (unk_0x50AE3E919DC9BC67(-1370.625f, 56.1227f, 52.7033f, 100f, 1, 1, &iVar0, 0, 0, -1))
	{
		if (!unk_0x36CEFBE9B745A58D(iVar0))
		{
			iVar2 = unk_0x252B0CBDBF5803ED(iVar0, &uVar1, -1);
			unk_0xA4E856A8CD53B8DF(iVar0);
		}
		if (iVar2 == 0)
		{
		}
		iVar3 = 0;
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!unk_0x36CEFBE9B745A58D(uVar1[iVar3]))
			{
				unk_0xA4E856A8CD53B8DF(uVar1[iVar3]);
			}
			iVar3++;
		}
	}
}

void func_24(int iParam0)//Position - 0x10B4
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
	iVar0 = func_32(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_8FEC[iVar0 /*5*/];
		func_27(1, iVar1, 1);
		return;
	}
	iVar2 = func_26(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_25(iVar2);
}

void func_25(int iParam0)//Position - 0x110D
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

int func_26(int iParam0)//Position - 0x1190
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

void func_27(int iParam0, int iParam1, int iParam2)//Position - 0x11C1
{
	func_28(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_28(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x11D6
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
	if (func_30(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_29();
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

int func_29()//Position - 0x1258
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

int func_30(int iParam0, int iParam1, int iParam2)//Position - 0x1289
{
	if (func_31(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_31(int iParam0, int iParam1, int iParam2)//Position - 0x12A4
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

int func_32(int iParam0)//Position - 0x12F0
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

void func_33()//Position - 0x1339
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

int func_34(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x13B6
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
		if (func_36(0))
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
		if (!func_85(iParam2))
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
			func_35(iParam0, iParam4);
		}
	}
	return 2;
}

void func_35(var uParam0, int iParam1)//Position - 0x14ED
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

int func_36(int iParam0)//Position - 0x153C
{
	if (Global_8C41 == 15)
	{
		return 0;
	}
	if (func_85(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_37()//Position - 0x155E
{
	if (unk_0x4DBCE270B354E123(iLocal_61, vLocal_64, fLocal_85, fLocal_85, 2f, false, true, iLocal_75))
	{
		unk_0xBBC4195AD74D153D(0, 46, 1);
	}
	if (iLocal_88 > 0)
	{
		if (func_38(8) == func_47())
		{
			iLocal_88 = 0;
			sLocal_73 = "PLAY_GOLF";
		}
	}
}

int func_38(int iParam0)//Position - 0x159F
{
	return Global_19B04.f_612B[iParam0 /*4*/];
}

int func_39(int iParam0, bool bParam1)//Position - 0x15B2
{
	int iVar0;
	
	iVar0 = func_40(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x6A9CDB766DF7216F(unk_0xFC1CAE18F3ECBF2D()))
	{
		return 0;
	}
	if (func_54(0))
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

int func_40(int iParam0)//Position - 0x166A
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

void func_41(int iParam0)//Position - 0x16A5
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_40(*iParam0);
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

void func_42(char* sParam0, int iParam1)//Position - 0x16FC
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0xAA5C5BF0489E5553(iParam1);
	unk_0x72F8FA06CC9EC899(0, 1, true, -1);
}

void func_43(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0x1718
{
	int iVar0;
	
	if (unk_0xB731B8C5BCE89836(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x7930B3E9C919E90F())
	{
		if (!*iParam0 == -1)
		{
			func_41(iParam0);
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

int func_44(int iParam0)//Position - 0x1843
{
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		iParam0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
		if (!unk_0x2A348A3A98B80B13(iParam0) && unk_0x58F9E0EA914AEF2C(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

void func_45(char* sParam0, int iParam1, int iParam2)//Position - 0x187F
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0xAA5C5BF0489E5553(iParam1);
	unk_0x72F8FA06CC9EC899(0, 0, true, iParam2);
}

int func_46(int iParam0)//Position - 0x189C
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0x6CB99B97664C3727(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0x6CB99B97664C3727(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0x6CB99B97664C3727(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

int func_47()//Position - 0x18F4
{
	func_48();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_48()//Position - 0x190D
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_51(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_50(unk_0xBC25C936A095B5BA());
			if (func_49(iVar0) && (!func_75(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_49(Global_19B04.f_932.f_21B.f_10CD))
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

bool func_49(int iParam0)//Position - 0x1A0A
{
	return iParam0 < 3;
}

int func_50(int iParam0)//Position - 0x1A16
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_51(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_51(int iParam0)//Position - 0x1A53
{
	if (func_49(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_52(char* sParam0, int iParam1, int iParam2)//Position - 0x1A7D
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0xAA5C5BF0489E5553(iParam1);
	unk_0xAA5C5BF0489E5553(iParam2);
	unk_0x72F8FA06CC9EC899(0, 0, true, -1);
}

var func_53()//Position - 0x1A9F
{
	return Global_10AB8;
}

int func_54(int iParam0)//Position - 0x1AAB
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

bool func_55(int iParam0, int iParam1)//Position - 0x1B05
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

bool func_56()//Position - 0x1B40
{
	return unk_0x105601648511CC64() <= Global_43C1.f_1671 + 100;
}

int func_57()//Position - 0x1B55
{
	if (unk_0xB731B8C5BCE89836(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_58(bool bParam0)//Position - 0x1B6F
{
	if (bParam0)
	{
		return (Global_4336.f_4 && Global_4336.f_68 == 4);
	}
	return Global_4336.f_4;
}

void func_59(var uParam0, int iParam1)//Position - 0x1B98
{
	func_60(uParam0, iParam1);
}

void func_60(var uParam0, var uParam1)//Position - 0x1BA8
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_61()//Position - 0x1BB9
{
	if (func_75(6) || func_75(7))
	{
		return func_74(68);
	}
	return 1;
}

bool func_62()//Position - 0x1BDE
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

int func_63(int iParam0)//Position - 0x1CE8
{
	int iVar0;
	
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				iVar0 = func_47();
				if (!func_49(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_70()) || Global_1974B) || Global_62BF) || func_69()) || func_55(8, -1)) || func_68()) || func_67()) || func_66()) || func_57()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1) || func_70()) || Global_62BF) || func_69()) || func_55(8, -1)) || func_66()) || func_68()) || func_67()) || func_57()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_70()) || Global_1974B) || Global_62BF) || func_69()) || func_55(8, -1)) || func_66()) || func_68()) || func_67()) || func_57()) || Global_19B04.f_1DEB.f_397[iVar0] == 5) || Global_8E64 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_70()) || Global_1974B) || Global_62BF) || func_69()) || func_55(8, -1)) || func_68()) || func_67()) || func_57()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_70() || unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0) || func_55(8, -1)) || func_57()) || func_65()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_55(8, -1) || func_68()) || func_67()) || func_65()) || func_64())
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
							if ((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || func_70()) || Global_62BF) || func_69()) || func_55(8, -1)) || func_67()) || func_66()) || func_57()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || !unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) || !unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F())) || !unk_0x726D9204B160D23E()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || func_70()) || func_67()) || Global_1974B) || Global_62BF) || func_69()) || Global_90C1) || func_55(8, -1)) || func_66()) || func_65()) || func_57()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || !unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) || !unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F())) || !unk_0x726D9204B160D23E()) || unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0)) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1)) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0x9273B3557334635D(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || func_70()) || Global_1974B) || Global_62BF) || func_69()) || func_55(8, -1)) || func_66()) || func_65()) || func_68()) || func_67()) || func_57())
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

var func_64()//Position - 0x2405
{
	return Global_16B42.f_1;
}

int func_65()//Position - 0x2413
{
	if (Global_15FA6 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_147B0[Global_15FA6 /*34*/].f_F, 13);
	}
	return 0;
}

int func_66()//Position - 0x2439
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

bool func_67()//Position - 0x2463
{
	return Global_16B4F.f_142 > 0;
}

bool func_68()//Position - 0x2474
{
	return Global_16B4F.f_141 > 0;
}

var func_69()//Position - 0x2485
{
	return Global_140856;
}

int func_70()//Position - 0x2491
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		return Global_161D2.f_2C == 1;
	}
	return 0;
}

int func_71()//Position - 0x24AD
{
	if (unk_0xB731B8C5BCE89836(joaat("stripperhome")) > 0)
	{
		return 1;
	}
	return 0;
}

var func_72()//Position - 0x24C7
{
	return Global_15B64;
}

int func_73(int iParam0)//Position - 0x24D3
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_75(6) || func_75(7))
			{
				return 1;
			}
			else
			{
				return func_73(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_85(5))
			{
				if (func_63(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_74(int iParam0)//Position - 0x2545
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return unk_0x2DA8CA50A72528FB(Global_6416[iVar0 /*23*/].f_13);
}

bool func_75(int iParam0)//Position - 0x2581
{
	return Global_8C41 == iParam0;
}

void func_76(var uParam0, int iParam1)//Position - 0x258F
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_77()//Position - 0x25A0
{
}

int func_78()//Position - 0x25A8
{
	return 1;
}

void func_79()//Position - 0x25B1
{
}

void func_80(int iParam0)//Position - 0x25B9
{
	iLocal_67 = iParam0;
}

void func_81(int iParam0, bool bParam1, bool bParam2)//Position - 0x25C5
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

int func_82()//Position - 0x26CE
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

int func_83()//Position - 0x26EB
{
	if (Global_15FA6 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_147B0[Global_15FA6 /*34*/].f_F, 20);
	}
	return 0;
}

bool func_84(int iParam0, int iParam1)//Position - 0x2711
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

bool func_85(int iParam0)//Position - 0x275E
{
	return func_86(iParam0, Global_8C41);
}

int func_86(int iParam0, int iParam1)//Position - 0x276F
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

bool func_87(var uParam0, int iParam1)//Position - 0x2950
{
	return (uParam0 && iParam1) != 0;
}

void func_88()//Position - 0x295F
{
	StringCopy(&Local_51, "golf", 64);
	iLocal_71 = 2;
	fLocal_85 = 7f;
	func_76(&uLocal_66, 1);
	if (func_75(6) || func_75(7))
	{
		iLocal_75 = 0;
	}
	if (func_38(8) == func_47())
	{
		iLocal_88 = 0;
		sLocal_73 = "PLAY_GOLF";
	}
	else
	{
		iLocal_88 = func_90(unk_0x724D816EA203A79E(func_72()));
		sLocal_73 = "PAY_PLAY_GOLF";
	}
	iLocal_77 = 68;
	fLocal_74 = (SYSTEM::TO_FLOAT(func_89(iLocal_77)) + 5f);
	iLocal_69 = 23500;
}

int func_89(int iParam0)//Position - 0x29D3
{
	switch (iParam0)
	{
		case 91:
		case 92:
		case 110:
		case 111:
			return 20;
			break;
		
		case 66:
		case 67:
		case 76:
		case 107:
		case 108:
		case 109:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 129:
		case 130:
		case 131:
		case 133:
		case 137:
			return 100;
			break;
		
		case 125:
		case 126:
		case 127:
		case 128:
		case 132:
		case 134:
		case 135:
		case 136:
		case 68:
		case 69:
		case 95:
		case 70:
		case 71:
		case 73:
		case 74:
		case 75:
		case 72:
			return 209;
			break;
	}
	return -1;
}

int func_90(bool bParam0)//Position - 0x2AEB
{
	if (bParam0)
	{
		return 200;
	}
	return 100;
}

void func_91(var uParam0, int iParam1)//Position - 0x2B02
{
	func_92(uParam0, iParam1);
}

void func_92(var uParam0, var uParam1)//Position - 0x2B12
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_93(bool bParam0)//Position - 0x2B27
{
	if (bParam0)
	{
		if (iLocal_77 != 263)
		{
			func_81(iLocal_77, 0, 0);
		}
	}
	func_41(&iLocal_68);
	if (func_87(uLocal_66, 2048))
	{
		if (func_96(sLocal_73, iLocal_88))
		{
			func_91(&uLocal_66, 2048);
			unk_0x7456702622C62EA0(0);
		}
	}
	if (func_87(uLocal_66, 2))
	{
		func_4();
		func_91(&uLocal_66, 2);
		func_6(&iLocal_70);
	}
	iLocal_70 = -1;
	func_94();
	unk_0x95E4B6F3ED223F5A();
}

void func_94()//Position - 0x2B95
{
	func_91(&uLocal_66, 4);
	func_95();
	if (unk_0x3C406FC829C1E14A(iLocal_50))
	{
		unk_0x17631956147B5347(iLocal_50, 3);
	}
	if (!unk_0xEAEFBBEC1AEA464B(&cLocal_52))
	{
		if (unk_0x5D29F91E567588E2(&cLocal_52) != 0)
		{
			unk_0x91DEC7187FA01089(&cLocal_52);
		}
	}
}

void func_95()//Position - 0x2BD2
{
}

int func_96(char* sParam0, int iParam1)//Position - 0x2BDA
{
	unk_0xF07D20149ECBC61E(sParam0);
	unk_0xAA5C5BF0489E5553(iParam1);
	return unk_0xA66DBDA0A072514A(0);
}

