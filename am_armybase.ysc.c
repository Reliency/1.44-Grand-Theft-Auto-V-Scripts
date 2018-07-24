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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 10;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 2;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 8;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 8;
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
	float fLocal_96 = 0f;
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
	vector3 vLocal_107 = { 0f, 0f, 0f };
	struct<4> Local_108 = { 2, 0, 0, 3 } ;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 2;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 2;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	struct<8> Local_132[32];
	struct<184> Local_133 = { 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_134 = 0;
	bool bLocal_135 = 0;
	bool bLocal_136 = 0;
	bool bLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	struct<21> Local_147 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_96 = ((0.05f + 0.275f) - 0.01f);
	vLocal_107 = { -2357.12f, 3250.68f, 106.04f };
	iLocal_142 = -1;
	if (unk_0x7AF0088ABFA713B6())
	{
		func_174(ScriptParam_147);
	}
	else
	{
		func_171();
	}
	while (true)
	{
		func_170();
		func_162();
		if (func_152() || unk_0x2F7EEEA6378AC19B())
		{
			func_171();
		}
		if (unk_0x7AF0088ABFA713B6())
		{
			if ((func_146() && !Global_40001.f_5165) && !unk_0x517823CA390A19F6())
			{
				func_141();
			}
			if (func_37())
			{
				func_171();
			}
			if (func_34(unk_0xB5CEFD608600A09F()))
			{
				if (!unk_0xFA30DFD0084E92FE(Local_133.f_B6, 3))
				{
					unk_0xF0059F27F7BB6680(&(Local_133.f_B6), 3);
				}
			}
			if ((((((((!Global_18044A && !func_33(2)) && !func_30(unk_0xB5CEFD608600A09F(), 0)) && !unk_0x7930B3E9C919E90F()) && unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) && !func_28(unk_0xB5CEFD608600A09F())) && !func_26(func_27(unk_0xB5CEFD608600A09F()))) && !func_24(unk_0xB5CEFD608600A09F(), 146)) && !func_20(unk_0xB5CEFD608600A09F()))
			{
				if (func_19(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), 3, 1000, 0) || func_18(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), 1000))
				{
					if (!unk_0xFA30DFD0084E92FE(Global_267214.f_11BD, 0))
					{
						if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
						{
							if (!func_146())
							{
								func_17();
								if (unk_0x57379381A330B2FF(unk_0xBC25C936A095B5BA()) || unk_0xE3CA72BD77D43B09(unk_0xBC25C936A095B5BA()))
								{
									if (func_19(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), 3, 0, 0) || func_18(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), 0))
									{
										if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) < 4)
										{
											unk_0x16F9568D5D08F080(unk_0xB5CEFD608600A09F(), 36, (unk_0x88B0E2A64EF693DE(4) - unk_0x88B0E2A64EF693DE(unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()))));
										}
										else
										{
											unk_0xC87F56DCAF19EC70(unk_0xB5CEFD608600A09F());
										}
									}
									else if (!func_16(&(Local_133.f_3)))
									{
										func_13(&(Local_133.f_3));
									}
									else if (func_10(&(Local_133.f_3)) > 20f || Local_133.f_B1)
									{
										if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) < 4)
										{
											unk_0x16F9568D5D08F080(unk_0xB5CEFD608600A09F(), 36, (unk_0x88B0E2A64EF693DE(4) - unk_0x88B0E2A64EF693DE(unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()))));
										}
										else
										{
											unk_0xC87F56DCAF19EC70(unk_0xB5CEFD608600A09F());
										}
									}
								}
								else if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) < 4)
								{
									unk_0x16F9568D5D08F080(unk_0xB5CEFD608600A09F(), 36, (unk_0x88B0E2A64EF693DE(4) - unk_0x88B0E2A64EF693DE(unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()))));
								}
								else
								{
									unk_0xC87F56DCAF19EC70(unk_0xB5CEFD608600A09F());
								}
							}
							else
							{
								if (Global_267214.f_180C)
								{
									bLocal_135 = false;
									Global_267214.f_180C = 0;
								}
								if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 0 && !iLocal_139)
								{
									iLocal_139 = 1;
								}
								if (Global_40001.f_515A && !func_8(unk_0xB5CEFD608600A09F()))
								{
									if ((!bLocal_135 && unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) != 0) && iLocal_139)
									{
										unk_0xA98B19EC1C93FC3C(unk_0xB5CEFD608600A09F());
										unk_0xAEC867D0DBB7AFEB(0);
										iLocal_138 = 1;
									}
									if (func_2() && !bLocal_135)
									{
										bLocal_135 = true;
										unk_0xAEC867D0DBB7AFEB(5);
									}
								}
								if (func_2() && !bLocal_135)
								{
									bLocal_135 = true;
								}
								if (bLocal_135)
								{
									if (bLocal_136)
									{
										if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) < 2)
										{
											unk_0x16F9568D5D08F080(unk_0xB5CEFD608600A09F(), 36, (unk_0x88B0E2A64EF693DE(2) - unk_0x88B0E2A64EF693DE(unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()))));
										}
										else
										{
											unk_0xC87F56DCAF19EC70(unk_0xB5CEFD608600A09F());
										}
									}
									else if (bLocal_137)
									{
										if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) < 3)
										{
											unk_0x16F9568D5D08F080(unk_0xB5CEFD608600A09F(), 36, (unk_0x88B0E2A64EF693DE(3) - unk_0x88B0E2A64EF693DE(unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()))));
										}
										else
										{
											unk_0xC87F56DCAF19EC70(unk_0xB5CEFD608600A09F());
										}
									}
									else if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) < Global_40001.f_511B)
									{
										unk_0x16F9568D5D08F080(unk_0xB5CEFD608600A09F(), 36, (unk_0x88B0E2A64EF693DE(Global_40001.f_511B) - unk_0x88B0E2A64EF693DE(unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()))));
									}
									else
									{
										unk_0xC87F56DCAF19EC70(unk_0xB5CEFD608600A09F());
									}
								}
							}
						}
						else
						{
							if (func_16(&(Local_133.f_3)))
							{
								func_1(&(Local_133.f_3));
							}
							if (Local_133.f_B1)
							{
								Local_133.f_B1 = 0;
							}
							func_17();
						}
					}
					else
					{
						if (!Local_133.f_B1)
						{
							Local_133.f_B1 = 1;
						}
						func_17();
					}
				}
				else
				{
					if (Local_133.f_B1)
					{
						Local_133.f_B1 = 0;
					}
					func_17();
				}
			}
			else
			{
				func_17();
			}
		}
		else
		{
			func_171();
		}
	}
}

void func_1(var uParam0)//Position - 0x4D5
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_2()//Position - 0x4EB
{
	int iVar0;
	
	if (func_19(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), 3, 1000, 0) || func_18(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), 1000))
	{
		if (Global_40001.f_5115)
		{
			return 0;
		}
		if (((unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -2346.975f, 3259.757f, 31.81074f, -2349.507f, 3261.232f, 33.81074f, 9.5625f, 0, 1, 0) || unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -2054.865f, 3240.977f, 30.51001f, -2056.552f, 3237.846f, 32.50156f, 4.0625f, 0, 1, 0)) || unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -1792.908f, 3091.104f, 31.81257f, -1812.707f, 3102.736f, 39.46682f, 18.187f, 0, 1, 0)) || func_7(unk_0xB5CEFD608600A09F()))
		{
			bLocal_136 = false;
			bLocal_137 = false;
			return 1;
		}
		if (Global_40001.f_511C)
		{
			if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
			{
				iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
				if (unk_0xA37E9F4E2795A88A(iVar0))
				{
					if (func_6(iVar0))
					{
						if ((!func_5(iVar0, 1) && !func_4(iVar0)) && !func_3(iVar0))
						{
							bLocal_136 = true;
							bLocal_137 = false;
							return 1;
						}
					}
				}
			}
		}
		else if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0xA37E9F4E2795A88A(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)))
			{
				if ((!func_5(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 1) && !func_4(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0))) && !func_3(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)))
				{
					bLocal_136 = true;
					bLocal_137 = false;
					return 1;
				}
			}
		}
		if (Global_267214.f_180A || Global_267214.f_180B)
		{
			if (Global_267214.f_180B)
			{
				bLocal_136 = false;
				bLocal_137 = true;
			}
			else
			{
				bLocal_136 = true;
				bLocal_137 = false;
			}
			Global_267214.f_180A = 0;
			Global_267214.f_180B = 0;
			return 1;
		}
	}
	return 0;
}

int func_3(int iParam0)//Position - 0x6ED
{
	int iVar0;
	
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		if (unk_0x46032D09AA009EC4("MPBitset", 3) && unk_0x3C03CFD5DD1E2D97(iParam0, "MPBitset"))
		{
			iVar0 = unk_0x67CFC62D543B19EF(iParam0, "MPBitset");
			if (unk_0xFA30DFD0084E92FE(iVar0, 17))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_4(int iParam0)//Position - 0x730
{
	if ((unk_0x46032D09AA009EC4("CreatedByPegasus", 2) && unk_0x3C03CFD5DD1E2D97(iParam0, "CreatedByPegasus")) && unk_0x75236BEC3BDDE069(iParam0, "CreatedByPegasus"))
	{
		return 1;
	}
	return 0;
}

int func_5(int iParam0, bool bParam1)//Position - 0x764
{
	if (Global_11542)
	{
		if (unk_0x724D816EA203A79E(iParam0) && (!bParam1 || unk_0xE59B7F5A03335350(iParam0, 0)))
		{
			if (unk_0x3C03CFD5DD1E2D97(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_6(int iParam0)//Position - 0x7A2
{
	int iVar0;
	
	iVar0 = unk_0x6F79ECA8C83E4357(iParam0);
	switch (iVar0)
	{
		case joaat("barracks"):
		case joaat("barracks2"):
		case joaat("barracks3"):
		case joaat("besra"):
		case joaat("buzzard"):
		case joaat("buzzard2"):
		case joaat("cargobob"):
		case joaat("crusader"):
		case 1938952078:
		case joaat("lazer"):
		case joaat("rhino"):
		case joaat("titan"):
			return 1;
		
		default:
	}
	return 0;
}

int func_7(int iParam0)//Position - 0x806
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x645938DA8ED5E0BA(unk_0xA95CF30C72EB526E(iParam0));
	iVar1 = unk_0x5E29F9399E0829A3(-2346.975f, 3259.757f, 31.81074f, "v_tower");
	if (unk_0xBF697FA7422C0621(iVar0) && unk_0xBF697FA7422C0621(iVar1))
	{
		if ((iVar0 == iVar1 && !unk_0x0C265B3C448E6954(unk_0xA95CF30C72EB526E(iParam0), -2345.4f, 3270.1f, 31.81f, -2347.9f, 3265.8f, 34.811f, 8.25f, 0, 1, 0)) && !unk_0x0C265B3C448E6954(unk_0xA95CF30C72EB526E(iParam0), -2349.3f, 3266.7f, 31.81f, -2350f, 3265.5f, 34.811f, 5.15f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_8(int iParam0)//Position - 0x8BF
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_9(iParam0, 9);
	}
	return 0;
}

bool func_9(int iParam0, int iParam1)//Position - 0x8DD
{
	return unk_0xFA30DFD0084E92FE(Global_18C80F[iParam0 /*558*/].f_B.f_4, iParam1);
}

float func_10(int iParam0)//Position - 0x8F8
{
	if (func_16(iParam0))
	{
		if (func_12(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_11(unk_0xFA30DFD0084E92FE(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_11(bool bParam0)//Position - 0x937
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

bool func_12(var uParam0)//Position - 0x98F
{
	return unk_0xFA30DFD0084E92FE(*uParam0, 2);
}

void func_13(int iParam0)//Position - 0x99F
{
	if (!func_16(iParam0))
	{
		func_14(iParam0);
	}
}

void func_14(int iParam0)//Position - 0x9B7
{
	func_15(iParam0, 0f);
}

void func_15(int iParam0, float fParam1)//Position - 0x9C6
{
	iParam0->f_1 = (func_11(unk_0xFA30DFD0084E92FE(*iParam0, 4)) - fParam1);
	unk_0xF0059F27F7BB6680(iParam0, 1);
	unk_0x7CB6FD92BE491AD9(iParam0, 2);
	iParam0->f_2 = 0f;
}

bool func_16(var uParam0)//Position - 0x9F4
{
	return unk_0xFA30DFD0084E92FE(*uParam0, 1);
}

void func_17()//Position - 0xA04
{
	if (iLocal_138)
	{
		unk_0xAEC867D0DBB7AFEB(5);
	}
	Global_267214.f_180A = 0;
	Global_267214.f_180B = 0;
	iLocal_138 = 0;
	bLocal_135 = false;
	bLocal_136 = false;
	iLocal_139 = 0;
}

int func_18(vector3 vParam0, int iParam1)//Position - 0xA37
{
	vector3 vVar0[15];
	vector3 vVar1[15];
	float fVar2[15];
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar5 = 0;
	vVar0[0 /*3*/] = { -1877.436f, 2783.151f, 31.80618f };
	vVar1[0 /*3*/] = { -1797.873f, 2924.37f, (307.1106f + IntToFloat(iParam1)) };
	fVar2[0] = 88f;
	vVar0[1 /*3*/] = { -1761.116f, 2834.651f, 31.80622f };
	vVar1[1 /*3*/] = { -1720.887f, 2906.419f, (281.8062f + IntToFloat(iParam1)) };
	fVar2[1] = 88f;
	vVar0[2 /*3*/] = { -1761.493f, 2817.68f, 32.37125f };
	vVar1[2 /*3*/] = { -1769.704f, 2913.734f, (281.8066f + IntToFloat(iParam1)) };
	fVar2[2] = 88f;
	vVar0[3 /*3*/] = { -1879.297f, 2772.653f, 29.57795f };
	vVar1[3 /*3*/] = { -1864.521f, 2825.472f, (281.8062f + IntToFloat(iParam1)) };
	fVar2[3] = 88f;
	vVar0[4 /*3*/] = { -2676.74f, 3366.988f, 29.92394f };
	vVar1[4 /*3*/] = { -2744.79f, 3340.347f, (37.80379f + IntToFloat(iParam1)) };
	fVar2[4] = 9f;
	vVar0[5 /*3*/] = { -2676.74f, 3366.988f, 29.92394f };
	vVar1[5 /*3*/] = { -2744.79f, 3340.347f, (37.80379f + IntToFloat(iParam1)) };
	fVar2[5] = 9.5f;
	vVar0[6 /*3*/] = { -2807.397f, 3264.226f, 29.92764f };
	vVar1[6 /*3*/] = { -2879.805f, 3309.01f, (37.57864f + IntToFloat(iParam1)) };
	fVar2[6] = 9.5f;
	vVar0[7 /*3*/] = { -2808.236f, 3264.634f, 29.92764f };
	vVar1[7 /*3*/] = { -2747.55f, 3187.8f, (37.45682f + IntToFloat(iParam1)) };
	fVar2[7] = 9.5f;
	vVar0[8 /*3*/] = { -2530.996f, 3064.151f, 29.71081f };
	vVar1[8 /*3*/] = { -2748.557f, 3189.939f, (37.45682f + IntToFloat(iParam1)) };
	fVar2[8] = 9.5f;
	vVar0[9 /*3*/] = { -2533.902f, 3062.491f, 29.70715f };
	vVar1[9 /*3*/] = { -2520.674f, 2996.817f, (37.45715f + IntToFloat(iParam1)) };
	fVar2[9] = 9.5f;
	vVar0[10 /*3*/] = { -2500.716f, 2927.103f, 29.45663f };
	vVar1[10 /*3*/] = { -2445.696f, 2896.657f, (37.68009f + IntToFloat(iParam1)) };
	fVar2[10] = 9.5f;
	vVar0[11 /*3*/] = { -2020.543f, 2810.747f, 29.45658f };
	vVar1[11 /*3*/] = { -1927.949f, 2785.779f, (37.67057f + IntToFloat(iParam1)) };
	fVar2[11] = 9.5f;
	vVar0[12 /*3*/] = { -2261.899f, 3376.549f, 29.77859f };
	vVar1[12 /*3*/] = { -2141.067f, 3376.773f, (37.90019f + IntToFloat(iParam1)) };
	fVar2[12] = 9.5f;
	iVar3 = 13;
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		if (unk_0x7352105EC4D7541F(vParam0, vVar0[iVar4 /*3*/], vVar1[iVar4 /*3*/], fVar2[iVar4], iVar5, 1))
		{
			return 1;
		}
		iVar4++;
	}
	return 0;
}

int func_19(vector3 vParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xD95
{
	vector3 vVar0[15];
	vector3 vVar1[15];
	float fVar2[15];
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar5 = 0;
	switch (iParam1)
	{
		case 1:
			vVar0[0 /*3*/] = { -1332.211f, 100.4608f, 40.38437f };
			vVar1[0 /*3*/] = { -1094.238f, 148.4274f, 73f };
			fVar2[0] = 171.25f;
			vVar0[1 /*3*/] = { -999.7344f, -110.2231f, 25.25706f };
			vVar1[1 /*3*/] = { -1149.494f, 109.2558f, 73f };
			fVar2[1] = 132f;
			vVar0[2 /*3*/] = { -1035.113f, -84.95885f, 28.2746f };
			vVar1[2 /*3*/] = { -1261.103f, 50.08148f, 73f };
			fVar2[2] = 132f;
			iVar3 = 3;
			break;
		
		case 2:
			vVar0[0 /*3*/] = { -804.3439f, -3346.5f, 10f };
			vVar1[0 /*3*/] = { -1816.954f, -2768.893f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 247f;
			vVar0[1 /*3*/] = { -1911.488f, -2934.197f, 10f };
			vVar1[1 /*3*/] = { -968.6236f, -3477.748f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 149f;
			vVar0[2 /*3*/] = { -844.9433f, -2802.785f, 10f };
			vVar1[2 /*3*/] = { -1011.081f, -3086.904f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 185.5f;
			vVar0[3 /*3*/] = { -1021.086f, -2952.277f, 10f };
			vVar1[3 /*3*/] = { -1599.008f, -2616.271f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 250f;
			vVar0[4 /*3*/] = { -1027.136f, -2436.457f, 10f };
			vVar1[4 /*3*/] = { -1392.61f, -2226.763f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 193.5f;
			vVar0[5 /*3*/] = { -1497.549f, -2408.712f, 10f };
			vVar1[5 /*3*/] = { -1136.917f, -2617.955f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 234.5f;
			vVar0[6 /*3*/] = { -982.7924f, -2831.709f, 12.93313f };
			vVar1[6 /*3*/] = { -966.4677f, -2803.458f, 16.68313f };
			fVar2[6] = 16f;
			vVar0[7 /*3*/] = { -1110.083f, -3496.806f, 12f };
			vVar1[7 /*3*/] = { -1955.298f, -3010.431f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 80f;
			vVar0[8 /*3*/] = { -1886.899f, -3193.024f, 12f };
			vVar1[8 /*3*/] = { -1836.143f, -3105.268f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 142f;
			vVar0[9 /*3*/] = { -1134.337f, -3535.648f, 12f };
			vVar1[9 /*3*/] = { -1259.649f, -3463.486f, IntToFloat((250 + iParam2)) };
			fVar2[9] = 30.75f;
			vVar0[10 /*3*/] = { -969.1279f, -3463.899f, 12f };
			vVar1[10 /*3*/] = { -896.3734f, -3505.715f, IntToFloat((250 + iParam2)) };
			fVar2[10] = 150f;
			vVar0[11 /*3*/] = { -1369.491f, -2173.579f, 10f };
			vVar1[11 /*3*/] = { -1685.626f, -2720.364f, IntToFloat((250 + iParam2)) };
			fVar2[11] = 29.25f;
			vVar0[12 /*3*/] = { -1010.926f, -3550.943f, 10f };
			vVar1[12 /*3*/] = { -1110.198f, -3493.617f, IntToFloat((250 + iParam2)) };
			fVar2[12] = 43f;
			iVar3 = 13;
			break;
		
		case 3:
			vVar0[0 /*3*/] = { -1773.944f, 3287.334f, 30f };
			vVar1[0 /*3*/] = { -2029.776f, 2845.083f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 255f;
			vVar0[1 /*3*/] = { -2725.889f, 3291.099f, 30f };
			vVar1[1 /*3*/] = { -2009.182f, 2879.835f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 180f;
			vVar0[2 /*3*/] = { -2442.026f, 3326.699f, 30f };
			vVar1[2 /*3*/] = { -2033.928f, 3089.049f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 205f;
			vVar0[3 /*3*/] = { -1917.165f, 3374.209f, 30f };
			vVar1[3 /*3*/] = { -2016.791f, 3195.058f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 86.25f;
			vVar0[4 /*3*/] = { -2192.753f, 3373.278f, 30f };
			vVar1[4 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 150.5f;
			vVar0[5 /*3*/] = { -2077.663f, 3344.514f, 30f };
			vVar1[5 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 140.5f;
			vVar0[6 /*3*/] = { -2861.755f, 3352.661f, 30f };
			vVar1[6 /*3*/] = { -2715.871f, 3269.916f, IntToFloat((250 + iParam2)) };
			fVar2[6] = 90f;
			vVar0[7 /*3*/] = { -2005.574f, 3364.533f, 30f };
			vVar1[7 /*3*/] = { -1977.569f, 3330.888f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 100f;
			vVar0[8 /*3*/] = { -1682.235f, 3004.285f, 30f };
			vVar1[8 /*3*/] = { -1942.747f, 2947.441f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 248.75f;
			vVar0[9 /*3*/] = { -2393.295f, 2936.406f, 31.6801f };
			vVar1[9 /*3*/] = { -2453.037f, 3006.863f, 52.31003f };
			fVar2[9] = 128f;
			vVar0[10 /*3*/] = { -2347.185f, 3023.83f, 31.56573f };
			vVar1[10 /*3*/] = { -2517.33f, 2989.063f, 49.95644f };
			fVar2[10] = 127.25f;
			vVar0[11 /*3*/] = { -2259.922f, 3358.04f, 29.99972f };
			vVar1[11 /*3*/] = { -2299.772f, 3385.79f, 38.06014f };
			fVar2[11] = 16f;
			vVar0[12 /*3*/] = { -2476.309f, 3363.914f, 31.67933f };
			vVar1[12 /*3*/] = { -2431.981f, 3287.669f, 39.97826f };
			fVar2[12] = 214.25f;
			vVar0[13 /*3*/] = { -2103.081f, 2797.783f, 29.37864f };
			vVar1[13 /*3*/] = { -2096.821f, 2874.423f, 57.80989f };
			fVar2[13] = 65.75f;
			if (bParam3)
			{
				iVar6 = iParam2;
			}
			else
			{
				iVar6 = 0;
			}
			vVar1[9 /*3*/].f_2 = (vVar1[9 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[10 /*3*/].f_2 = (vVar1[10 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[11 /*3*/].f_2 = (vVar1[11 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[12 /*3*/].f_2 = (vVar1[12 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[13 /*3*/].f_2 = (vVar1[13 /*3*/].f_2 + IntToFloat(iVar6));
			iVar3 = 14;
			break;
		
		case 4:
			vVar0[0 /*3*/] = { 1541.607f, 2527.555f, 40f };
			vVar1[0 /*3*/] = { 1815.575f, 2535.06f, IntToFloat((150 + iParam2)) };
			fVar2[0] = 114f;
			vVar0[1 /*3*/] = { 1788.879f, 2445.727f, 40f };
			vVar1[1 /*3*/] = { 1716.96f, 2502.957f, IntToFloat((150 + iParam2)) };
			fVar2[1] = 88.5f;
			vVar0[2 /*3*/] = { 1601.157f, 2436.244f, 40f };
			vVar1[2 /*3*/] = { 1650.078f, 2515.923f, IntToFloat((150 + iParam2)) };
			fVar2[2] = 133.25f;
			vVar0[3 /*3*/] = { 1706.331f, 2407.597f, 40f };
			vVar1[3 /*3*/] = { 1698.555f, 2460.208f, IntToFloat((150 + iParam2)) };
			fVar2[3] = 104.5f;
			vVar0[4 /*3*/] = { 1712.452f, 2756.218f, 40f };
			vVar1[4 /*3*/] = { 1718.848f, 2589.162f, IntToFloat((150 + iParam2)) };
			fVar2[4] = 121.75f;
			vVar0[5 /*3*/] = { 1830.228f, 2661.24f, 40f };
			vVar1[5 /*3*/] = { 1774.812f, 2679.419f, IntToFloat((150 + iParam2)) };
			fVar2[5] = 84.5f;
			vVar0[6 /*3*/] = { 1559.05f, 2632.22f, 40f };
			vVar1[6 /*3*/] = { 1657.208f, 2595.484f, IntToFloat((150 + iParam2)) };
			fVar2[6] = 103.75f;
			vVar0[7 /*3*/] = { 1612.021f, 2716.869f, 40f };
			vVar1[7 /*3*/] = { 1657.165f, 2669.721f, IntToFloat((150 + iParam2)) };
			fVar2[7] = 104.25f;
			vVar0[8 /*3*/] = { 1809.872f, 2729.827f, 40f };
			vVar1[8 /*3*/] = { 1789.855f, 2705.037f, IntToFloat((150 + iParam2)) };
			fVar2[8] = 91f;
			vVar0[9 /*3*/] = { 1818.789f, 2605.948f, 40f };
			vVar1[9 /*3*/] = { 1783.114f, 2606.783f, IntToFloat((150 + iParam2)) };
			fVar2[9] = 51.25f;
			iVar3 = 10;
			break;
		
		case 5:
			vVar0[0 /*3*/] = { 3411.002f, 3663.185f, 20f };
			vVar1[0 /*3*/] = { 3615.583f, 3626.194f, IntToFloat((40 + iParam2)) };
			fVar2[0] = 45.75f;
			vVar0[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			vVar1[1 /*3*/] = { 3643.801f, 3694.362f, IntToFloat((40 + iParam2)) };
			fVar2[1] = 99f;
			vVar0[2 /*3*/] = { 3446.036f, 3795.688f, 20f };
			vVar1[2 /*3*/] = { 3650.914f, 3766.152f, IntToFloat((40 + iParam2)) };
			fVar2[2] = 81.5f;
			iVar3 = 3;
			break;
		
		case 6:
			vVar0[0 /*3*/] = { 526.053f, -3391.497f, -10f };
			vVar1[0 /*3*/] = { 523.2289f, -3118.678f, IntToFloat((10 + iParam2)) };
			fVar2[0] = 120f;
			vVar0[1 /*3*/] = { 459.4397f, -3199.99f, 4.819676f };
			vVar1[1 /*3*/] = { 593.8928f, -3199.998f, 30.06926f };
			fVar2[1] = 170f;
			vVar0[2 /*3*/] = { 552.8467f, -3111.054f, 4.819394f };
			vVar1[2 /*3*/] = { 585.3137f, -3111.844f, 17.56923f };
			fVar2[2] = 12.5f;
			vVar0[3 /*3*/] = { 598.4666f, -3140.147f, 4.819257f };
			vVar1[3 /*3*/] = { 597.4973f, -3117.063f, 17.31926f };
			fVar2[3] = 9.75f;
			iVar3 = 4;
			break;
		
		case 7:
			vVar0[0 /*3*/] = { -1108.55f, -570.8798f, 20f };
			vVar1[0 /*3*/] = { -1187.811f, -477.5037f, IntToFloat((50 + iParam2)) };
			fVar2[0] = 162f;
			vVar0[1 /*3*/] = { -1201.378f, -485.9673f, 20f };
			vVar1[1 /*3*/] = { -1215.796f, -464.8281f, IntToFloat((50 + iParam2)) };
			fVar2[1] = 124f;
			vVar0[2 /*3*/] = { -985.6311f, -525.4233f, 20f };
			vVar1[2 /*3*/] = { -1013.393f, -475.2057f, IntToFloat((50 + iParam2)) };
			fVar2[2] = 55f;
			vVar0[3 /*3*/] = { -1055.849f, -477.8226f, 20f };
			vVar1[3 /*3*/] = { -1073.333f, -498.717f, IntToFloat((50 + iParam2)) };
			fVar2[3] = 142f;
			iVar3 = 4;
			break;
		
		case 8:
			vVar0[0 /*3*/] = { 461.5684f, -984.572f, 29.43951f };
			vVar1[0 /*3*/] = { 471.17f, -984.4292f, 40.14212f };
			fVar2[0] = 7.75f;
			vVar0[1 /*3*/] = { 457.3404f, -984.756f, 34.43951f };
			vVar1[1 /*3*/] = { 457.2084f, -993.7189f, 29.38958f };
			fVar2[1] = 14.75f;
			vVar0[2 /*3*/] = { 477.6227f, -986.6f, 40.00819f };
			vVar1[2 /*3*/] = { 424.8687f, -986.3279f, 48.71241f };
			fVar2[2] = 31.5f;
			vVar0[3 /*3*/] = { 474.3889f, -974.4613f, 39.55761f };
			vVar1[3 /*3*/] = { 474.0358f, -1021.972f, 49.10033f };
			fVar2[3] = 30.5f;
			vVar0[4 /*3*/] = { 442.1768f, -974.1888f, 29.68951f };
			vVar1[4 /*3*/] = { 442.1855f, -979.8635f, 33.43951f };
			fVar2[4] = 6.75f;
			iVar3 = 5;
			break;
	}
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		if (unk_0x7352105EC4D7541F(vParam0, vVar0[iVar4 /*3*/], vVar1[iVar4 /*3*/], fVar2[iVar4], iVar5, 1))
		{
			return 1;
		}
		iVar4++;
	}
	return 0;
}

bool func_20(int iParam0)//Position - 0x1AE9
{
	return func_21(func_22(iParam0));
}

int func_21(int iParam0)//Position - 0x1AFB
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

int func_22(int iParam0)//Position - 0x1B21
{
	if (func_23(iParam0, 0))
	{
		return Global_18C80F[iParam0 /*558*/].f_B.f_21;
	}
	return -1;
}

int func_23(int iParam0, int iParam1)//Position - 0x1B44
{
	if (Global_18C80F[iParam0 /*558*/].f_B.f_21 != -1 || (iParam1 && Global_18C80F[iParam0 /*558*/].f_B.f_20 != -1))
	{
		return 1;
	}
	return 0;
}

int func_24(int iParam0, int iParam1)//Position - 0x1B7F
{
	if (Global_18C80F[iParam0 /*558*/] == iParam1)
	{
		return func_25(iParam0);
	}
	return 0;
}

int func_25(int iParam0)//Position - 0x1B9F
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_18C80F[iVar0 /*558*/].f_1, 0);
	}
	return 0;
}

int func_26(int iParam0)//Position - 0x1BC5
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_25(unk_0xB5CEFD608600A09F()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_27(int iParam0)//Position - 0x1C03
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_18C80F[iVar0 /*558*/];
	}
	return -1;
}

int func_28(int iParam0)//Position - 0x1C22
{
	if (func_30(iParam0, 0))
	{
		return 1;
	}
	if (func_29())
	{
		if (iParam0 == unk_0xB5CEFD608600A09F())
		{
			return 1;
		}
	}
	if (unk_0xFA30DFD0084E92FE(Global_24FB5C[iParam0 /*406*/].f_BF, 2))
	{
		return 1;
	}
	return 0;
}

bool func_29()//Position - 0x1C64
{
	return unk_0xFA30DFD0084E92FE(Global_240006, 3);
}

bool func_30(int iParam0, int iParam1)//Position - 0x1C75
{
	bool bVar0;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		bVar0 = func_31(-1, 0) == 8;
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

int func_31(int iParam0, bool bParam1)//Position - 0x1CC0
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_32();
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

int func_32()//Position - 0x1D01
{
	return Global_1407E0;
}

bool func_33(int iParam0)//Position - 0x1D0D
{
	return unk_0xFA30DFD0084E92FE(Global_180449, iParam0);
}

int func_34(int iParam0)//Position - 0x1D1F
{
	if (iParam0 != func_36() && func_35(iParam0, 1, 1))
	{
		return unk_0xFA30DFD0084E92FE(Global_24FB5C[iParam0 /*406*/].f_131, 3);
	}
	return 0;
}

int func_35(int iParam0, bool bParam1, bool bParam2)//Position - 0x1D53
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

int func_36()//Position - 0x1D9D
{
	return -1;
}

int func_37()//Position - 0x1DA6
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x0DE6397A2CB3EF75())
	{
		if (func_120())
		{
			iVar0 = 1;
		}
	}
	if (func_38())
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_38()//Position - 0x1DCE
{
	int iVar0;
	
	switch (Local_133.f_6)
	{
		case 0:
			func_119();
			if ((((((func_116(unk_0xB5CEFD608600A09F(), 1) && func_115()) || func_22(unk_0xB5CEFD608600A09F()) == 159) || func_22(unk_0xB5CEFD608600A09F()) == 225) || func_22(unk_0xB5CEFD608600A09F()) == 233) || func_27(unk_0xB5CEFD608600A09F()) == 236) || Global_1805D3)
			{
				unk_0x8510BC031C24B862(joaat("rhino"), 1);
			}
			func_113(&(Local_132[unk_0x6BAA0516CC970D99() /*8*/]), 1);
			Local_133.f_B0 = 1;
			Local_133.f_6 = 1;
			break;
		
		case 1:
			if (func_112())
			{
				func_113(&(Local_132[unk_0x6BAA0516CC970D99() /*8*/]), 2);
				Local_133.f_6 = 2;
			}
			break;
		
		case 2:
			if (func_111(Local_108.f_14, 1))
			{
				Local_133.f_6 = 3;
			}
			break;
		
		case 3:
			if ((!func_116(unk_0xB5CEFD608600A09F(), 1) && !func_115()) && !func_146())
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					func_105(iVar0);
					iVar0++;
				}
			}
			if (unk_0x7AF0088ABFA713B6())
			{
				if ((((func_103() && !func_116(unk_0xB5CEFD608600A09F(), 1)) && !func_115()) && !unk_0x517823CA390A19F6()) && func_101(unk_0xB5CEFD608600A09F()) != 6)
				{
					func_46();
				}
			}
			iVar0 = 0;
			while (iVar0 < 3)
			{
				func_39(iVar0);
				iVar0++;
			}
			if (((func_22(unk_0xB5CEFD608600A09F()) == 225 || func_22(unk_0xB5CEFD608600A09F()) == 233) || func_27(unk_0xB5CEFD608600A09F()) == 236) || Global_1805D3)
			{
				unk_0x8510BC031C24B862(joaat("rhino"), 1);
			}
			if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), -2076.374f, 3112.294f, 33.13584f) >= 1030225f)
			{
				Local_133.f_6 = 4;
			}
			break;
		
		case 4:
			if ((((((func_116(unk_0xB5CEFD608600A09F(), 1) && func_115()) || func_22(unk_0xB5CEFD608600A09F()) == 159) || func_22(unk_0xB5CEFD608600A09F()) == 225) || func_22(unk_0xB5CEFD608600A09F()) == 233) || func_27(unk_0xB5CEFD608600A09F()) == 236) || Global_1805D3)
			{
				unk_0x8510BC031C24B862(joaat("rhino"), 0);
			}
			return 1;
			break;
	}
	return 0;
}

void func_39(int iParam0)//Position - 0x2039
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (Local_108.f_3[iParam0 /*5*/].f_2 > 2 && unk_0x8EA6CABD14F1B89A(Local_108.f_3[iParam0 /*5*/]))
	{
		if (unk_0x1D403DFADBC2DE3C(unk_0x19D7F09C2FABDDA0(Local_108.f_3[iParam0 /*5*/]), 0))
		{
			if (unk_0x2DA8CA50A72528FB(Local_133.f_AC[iParam0]))
			{
				unk_0x07B8ECB35A4ED3AC(&(Local_133.f_AC[iParam0]));
			}
		}
		else if (!unk_0x2DA8CA50A72528FB(Local_133.f_AC[iParam0]) && unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) >= 2)
		{
			Local_133.f_AC[iParam0] = unk_0x511FE22BCF5353CD(unk_0xD14280F674B4DBF4(Local_108.f_3[iParam0 /*5*/]));
			unk_0x0D5352939CC40C16(Local_133.f_AC[iParam0], 1);
		}
	}
	else if (unk_0x2DA8CA50A72528FB(Local_133.f_AC[iParam0]))
	{
		unk_0x07B8ECB35A4ED3AC(&(Local_133.f_AC[iParam0]));
	}
	switch (Local_108.f_3[iParam0 /*5*/].f_2)
	{
		case 0:
			if (!func_45(Local_132[unk_0x6BAA0516CC970D99() /*8*/].f_4[iParam0], 16))
			{
				Local_132[unk_0x6BAA0516CC970D99() /*8*/].f_4[iParam0] = 0;
				func_44(&(Local_132[unk_0x6BAA0516CC970D99() /*8*/].f_4[iParam0]), 16);
			}
			break;
		
		case 1:
			if (!func_45(Local_132[unk_0x6BAA0516CC970D99() /*8*/].f_4[iParam0], 1))
			{
				if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
				{
					if (unk_0x57379381A330B2FF(unk_0xBC25C936A095B5BA()) || unk_0xE3CA72BD77D43B09(unk_0xBC25C936A095B5BA()))
					{
						if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) >= 4)
						{
							if (func_19(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), 3, 500, 0))
							{
								func_44(&(Local_132[unk_0x6BAA0516CC970D99() /*8*/].f_4[iParam0]), 1);
							}
						}
					}
				}
			}
			break;
		
		case 2:
			break;
		
		case 3:
			if (!func_45(Local_132[unk_0x6BAA0516CC970D99() /*8*/].f_4[iParam0], 2))
			{
				if (func_43(iParam0))
				{
					iVar2 = unk_0xA95CF30C72EB526E(Local_108.f_3[iParam0 /*5*/].f_4);
					iVar0 = unk_0xE48AD7BF7762E114(Local_108.f_3[iParam0 /*5*/].f_1);
					iVar1 = unk_0x19D7F09C2FABDDA0(Local_108.f_3[iParam0 /*5*/]);
					if (!unk_0x1D403DFADBC2DE3C(iVar2, 0))
					{
						if (unk_0x57379381A330B2FF(iVar2))
						{
							iVar3 = unk_0x9FE9D386222EEE47(iVar2, 0);
							if ((!unk_0x1D403DFADBC2DE3C(iVar0, 0) && !unk_0x1D403DFADBC2DE3C(iVar1, 0)) && !unk_0x1D403DFADBC2DE3C(iVar3, 0))
							{
								unk_0xA7EC3DF47EFA2131(iVar0, iVar1, iVar3, iVar2, unk_0x541C2AEF053615BC(iVar2, 1), 6, 70f, -1f, 30f, 500, 50, 1);
								unk_0xD9584325F5E42F85(iVar0, joaat("vehicle_weapon_space_rocket"));
								unk_0xB499FECE23EEF9E4(iVar0, false);
							}
						}
					}
				}
				if (func_42(iParam0))
				{
					iVar0 = unk_0xE48AD7BF7762E114(Local_108.f_3[iParam0 /*5*/].f_1);
					iVar2 = unk_0xA95CF30C72EB526E(Local_108.f_3[iParam0 /*5*/].f_4);
					if (!unk_0x1D403DFADBC2DE3C(iVar2, 0))
					{
						if (unk_0x57379381A330B2FF(iVar2))
						{
							unk_0x262EA26E6995B464(iVar0, iVar2, unk_0x541C2AEF053615BC(iVar2, 1));
						}
					}
				}
				if (func_41(iParam0, 6))
				{
					func_44(&(Local_132[unk_0x6BAA0516CC970D99() /*8*/].f_4[iParam0]), 2);
				}
			}
			break;
		
		case 4:
			break;
		
		case 5:
			if (!func_45(Local_132[unk_0x6BAA0516CC970D99() /*8*/].f_4[iParam0], 8))
			{
				if (func_43(iParam0))
				{
					iVar0 = unk_0xE48AD7BF7762E114(Local_108.f_3[iParam0 /*5*/].f_1);
					iVar1 = unk_0x19D7F09C2FABDDA0(Local_108.f_3[iParam0 /*5*/]);
					if (!unk_0x1D403DFADBC2DE3C(iVar0, 0) && !unk_0x1D403DFADBC2DE3C(iVar1, 0))
					{
						unk_0xA7EC3DF47EFA2131(iVar0, iVar1, 0, 0, -2076.374f, 3112.294f, 33.13584f, 9, 70f, -1f, 30f, 500, 50, 1);
					}
				}
				if (func_41(iParam0, 9))
				{
					func_44(&(Local_132[unk_0x6BAA0516CC970D99() /*8*/].f_4[iParam0]), 8);
				}
			}
			break;
		
		case 6:
			if (unk_0x7FFE36DB9042AF23(Local_108.f_3[iParam0 /*5*/]) || unk_0x7FFE36DB9042AF23(Local_108.f_3[iParam0 /*5*/].f_1))
			{
				if (!unk_0x33CC9445B2DF9387(unk_0x541C2AEF053615BC(unk_0xD14280F674B4DBF4(Local_108.f_3[iParam0 /*5*/]), 0), 10f) && !unk_0xBDD80E8D075D485A(unk_0x541C2AEF053615BC(unk_0xD14280F674B4DBF4(Local_108.f_3[iParam0 /*5*/]), 0), 10f))
				{
					if (unk_0x8EA6CABD14F1B89A(Local_108.f_3[iParam0 /*5*/].f_1) && unk_0x89B5CBCE9D131B32(Local_108.f_3[iParam0 /*5*/].f_1))
					{
						iVar4 = unk_0xD14280F674B4DBF4(Local_108.f_3[iParam0 /*5*/].f_1);
						unk_0xC46CA8E9D2A3F4DD(&iVar4);
					}
					if (unk_0x8EA6CABD14F1B89A(Local_108.f_3[iParam0 /*5*/]) && unk_0x89B5CBCE9D131B32(Local_108.f_3[iParam0 /*5*/]))
					{
						iVar5 = unk_0xD14280F674B4DBF4(Local_108.f_3[iParam0 /*5*/]);
						unk_0xC46CA8E9D2A3F4DD(&iVar5);
					}
				}
			}
			else if (func_45(Local_132[unk_0x6BAA0516CC970D99() /*8*/].f_4[iParam0], 16))
			{
				func_40(&(Local_132[unk_0x6BAA0516CC970D99() /*8*/].f_4[iParam0]), 16);
			}
			break;
	}
}

void func_40(var uParam0, int iParam1)//Position - 0x24C6
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_41(int iParam0, int iParam1)//Position - 0x24DB
{
	int iVar0;
	
	if (!unk_0x8EA6CABD14F1B89A(Local_108.f_3[iParam0 /*5*/]))
	{
		return 1;
	}
	iVar0 = unk_0x19D7F09C2FABDDA0(Local_108.f_3[iParam0 /*5*/]);
	if (unk_0x1D403DFADBC2DE3C(iVar0, 0))
	{
		return 1;
	}
	if (unk_0x6CA135F04B190AA2(iVar0) != iParam1)
	{
		return 0;
	}
	return 1;
}

int func_42(int iParam0)//Position - 0x2523
{
	int iVar0;
	
	if (!unk_0x8EA6CABD14F1B89A(Local_108.f_3[iParam0 /*5*/].f_1))
	{
		return 0;
	}
	iVar0 = unk_0xE48AD7BF7762E114(Local_108.f_3[iParam0 /*5*/].f_1);
	if (unk_0x1D403DFADBC2DE3C(iVar0, 0))
	{
		return 0;
	}
	if (!unk_0x4DF785C4DF542CD0(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_43(int iParam0)//Position - 0x256E
{
	int iVar0;
	
	if (!unk_0x8EA6CABD14F1B89A(Local_108.f_3[iParam0 /*5*/]))
	{
		return 0;
	}
	iVar0 = unk_0x19D7F09C2FABDDA0(Local_108.f_3[iParam0 /*5*/]);
	if (unk_0x1D403DFADBC2DE3C(iVar0, 0))
	{
		return 0;
	}
	if (!unk_0x4DF785C4DF542CD0(iVar0))
	{
		return 0;
	}
	return 1;
}

void func_44(var uParam0, int iParam1)//Position - 0x25B5
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_45(var uParam0, int iParam1)//Position - 0x25C6
{
	return (uParam0 && iParam1) != 0;
}

void func_46()//Position - 0x25D5
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	struct<6> Var3;
	
	func_100();
	func_95();
	vVar2 = { vLocal_107 };
	if (((func_19(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), 3, 1000, 0) || func_18(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), 1000)) || func_93(unk_0xBC25C936A095B5BA())) && func_92(unk_0xBC25C936A095B5BA()))
	{
		bVar0 = true;
	}
	else
	{
		Local_133.f_B2 = 0;
	}
	if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, 0, 1, 0) || unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, 0, 1, 0))
	{
		bVar1 = true;
	}
	else
	{
		Local_133.f_B3 = 0;
	}
	if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, 0, 1, 0))
	{
		vVar2 = { -1592.1f, 2797.2f, 17.1f };
		Local_133.f_B5 = 1;
	}
	else if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, 0, 1, 0))
	{
		vVar2 = { -2303.9f, 3388f, 31.3f };
		Local_133.f_B5 = 2;
	}
	if (func_90(bVar0, bVar1))
	{
		func_88();
		if (!func_87())
		{
			Global_1801E2 = 1;
			func_86(&(Local_133.f_7), 2);
			func_85(&(Local_133.f_7), 2);
			func_84(&(Local_133.f_7), 2, 0, "AIRMECH", 0, 1);
			func_83(&(Local_133.f_7), 2, vVar2);
			Global_3AF1.f_A2 = { vVar2 };
			Var3 = { func_82() };
			if (!unk_0xF1734B55490E9045(&Var3))
			{
				if (func_65(&(Local_133.f_7), "SMGFZAU", &Var3, 7, 0, 0, 0))
				{
					func_47(bVar0, bVar1);
				}
			}
		}
	}
	else if (!func_87())
	{
		if (!unk_0xFA30DFD0084E92FE(Local_133.f_B6, 2))
		{
			Global_1801E2 = 0;
			func_86(&(Local_133.f_7), 2);
			func_85(&(Local_133.f_7), 2);
			unk_0xF0059F27F7BB6680(&(Local_133.f_B6), 2);
		}
	}
}

void func_47(bool bParam0, bool bParam1)//Position - 0x280B
{
	if (bParam0)
	{
		if (!func_62(16000, -1, -1))
		{
			func_61(16000, 1, -1, 1);
			if (Global_267214.f_1811)
			{
				if (func_55())
				{
					func_53("AB_ENTRY_HT");
					Local_133.f_B4 = 1;
				}
			}
			else if (func_55())
			{
				func_52("AB_ENTRY_HT", -1);
			}
		}
		else if (!func_62(16001, -1, -1))
		{
			func_61(16001, 1, -1, 1);
			if (Global_267214.f_1811)
			{
				if (func_55())
				{
					func_53("AB_ENTRY_HT");
					Local_133.f_B4 = 1;
				}
			}
			else if (func_55())
			{
				func_52("AB_ENTRY_HT", -1);
			}
		}
		Local_133.f_B2 = 1;
	}
	else if (bParam1)
	{
		if (!func_62(15999, -1, -1))
		{
			func_61(15999, 1, -1, 1);
			if (Global_267214.f_1811)
			{
				if (func_55())
				{
					func_53("AB_ENTRY_HT");
					Local_133.f_B4 = 1;
				}
			}
			else if (func_55())
			{
				func_52("AB_ENTRY_HT", -1);
			}
		}
		else if (Local_133.f_B5 == 1)
		{
			if (!func_62(16002, -1, -1))
			{
				func_61(16002, 1, -1, 1);
				if (Global_267214.f_1811)
				{
					if (func_55())
					{
						func_53("AB_ENTRY_HT");
						Local_133.f_B4 = 1;
					}
				}
				else if (func_55())
				{
					func_52("AB_ENTRY_HT", -1);
				}
			}
		}
		else if (Local_133.f_B5 == 2)
		{
			if (func_49(18097, -1, -1) == 0)
			{
				func_48(18097, 1, -1, 1);
				if (Global_267214.f_1811)
				{
					if (func_55())
					{
						func_53("AB_ENTRY_HT");
						Local_133.f_B4 = 1;
					}
				}
				else if (func_55())
				{
					func_52("AB_ENTRY_HT", -1);
				}
			}
		}
		Local_133.f_B3 = 1;
		Local_133.f_B5 = 0;
	}
	if (unk_0xFA30DFD0084E92FE(Local_133.f_B6, 2))
	{
		unk_0x7CB6FD92BE491AD9(&(Local_133.f_B6), 2);
	}
}

var func_48(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x29CC
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_32();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xEDDF9BD8E04FC4AA((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0x86C669CF285C5AAD((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xEDDF9BD8E04FC4AA((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0x86C669CF285C5AAD((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xEDDF9BD8E04FC4AA((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0x86C669CF285C5AAD((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xEDDF9BD8E04FC4AA((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0x86C669CF285C5AAD((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x8EDD391D94A2AA73((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0x86C669CF285C5AAD((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x8EDD391D94A2AA73((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0x86C669CF285C5AAD((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0x86C669CF285C5AAD((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0x86C669CF285C5AAD((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0x86C669CF285C5AAD((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0x86C669CF285C5AAD((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0x86C669CF285C5AAD((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0x86C669CF285C5AAD((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - unk_0x86C669CF285C5AAD((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - unk_0x86C669CF285C5AAD((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - unk_0x86C669CF285C5AAD((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - unk_0x86C669CF285C5AAD((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 19018), 0, 1, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - unk_0x86C669CF285C5AAD((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0x86C669CF285C5AAD((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0x86C669CF285C5AAD((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0x787266E3704350D7(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_49(int iParam0, int iParam1, int iParam2)//Position - 0x2EBB
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_32();
	}
	iVar0 = 0;
	iVar1 = func_51(iParam0, iParam1);
	iVar2 = func_50(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x6AEE934BCCBCAA0E(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_50(int iParam0)//Position - 0x2F01
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0x86C669CF285C5AAD((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0x86C669CF285C5AAD((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0x86C669CF285C5AAD((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0x86C669CF285C5AAD((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0x86C669CF285C5AAD((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0x86C669CF285C5AAD((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0x86C669CF285C5AAD((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0x86C669CF285C5AAD((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0x86C669CF285C5AAD((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0x86C669CF285C5AAD((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0x86C669CF285C5AAD((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0x86C669CF285C5AAD((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0x86C669CF285C5AAD((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - unk_0x86C669CF285C5AAD((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0x86C669CF285C5AAD((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0x86C669CF285C5AAD((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - unk_0x86C669CF285C5AAD((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - unk_0x86C669CF285C5AAD((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - unk_0x86C669CF285C5AAD((iParam0 - 19018)) * 8) * 8;
	}
	return iVar0;
}

int func_51(int iParam0, int iParam1)//Position - 0x3275
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_32();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xEDDF9BD8E04FC4AA((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xEDDF9BD8E04FC4AA((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xEDDF9BD8E04FC4AA((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xEDDF9BD8E04FC4AA((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x8EDD391D94A2AA73((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x8EDD391D94A2AA73((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	return iVar0;
}

void func_52(char* sParam0, int iParam1)//Position - 0x3592
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, 1, iParam1);
}

void func_53(char* sParam0)//Position - 0x35A9
{
	if (unk_0xF16DAFF595E80F7C())
	{
		unk_0x7456702622C62EA0(1);
	}
	if (!func_54(sParam0))
	{
		func_52(sParam0, -1);
	}
}

int func_54(char* sParam0)//Position - 0x35CE
{
	unk_0xF07D20149ECBC61E(sParam0);
	return unk_0xA66DBDA0A072514A(0);
}

int func_55()//Position - 0x35E1
{
	if (func_58(unk_0xB5CEFD608600A09F()) && !func_56(unk_0xB5CEFD608600A09F(), 0))
	{
		return 1;
	}
	return 0;
}

bool func_56(int iParam0, bool bParam1)//Position - 0x3608
{
	if (!bParam1)
	{
		if (func_57(iParam0))
		{
			return 0;
		}
	}
	return Global_18C80F[iParam0 /*558*/].f_B != func_36();
}

int func_57(int iParam0)//Position - 0x3633
{
	if (iParam0 != func_36())
	{
		if (Global_18C80F[iParam0 /*558*/].f_B != func_36())
		{
			return Global_18C80F[iParam0 /*558*/].f_B == iParam0;
		}
	}
	return 0;
}

int func_58(int iParam0)//Position - 0x3668
{
	int iVar0;
	
	if (func_60(iParam0))
	{
		iVar0 = func_59(iParam0);
		if ((iVar0 == 3 || iVar0 == 4) || iVar0 == 5)
		{
			return 1;
		}
	}
	return 0;
}

int func_59(int iParam0)//Position - 0x36A1
{
	if (iParam0 != func_36())
	{
		return Global_18402B[iParam0 /*770*/].f_111.f_F9;
	}
	return 0;
}

int func_60(int iParam0)//Position - 0x36C4
{
	if (iParam0 != func_36())
	{
		return Global_18402B[iParam0 /*770*/].f_111.f_F9 != 0;
	}
	return 0;
}

int func_61(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x36E9
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		iParam2 = func_32();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0x761270FB5119E371((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x87C0AFE55188B978((iParam0 - 0)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0x761270FB5119E371((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x87C0AFE55188B978((iParam0 - 192)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0x761270FB5119E371((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x87C0AFE55188B978((iParam0 - 513)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0x761270FB5119E371((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x87C0AFE55188B978((iParam0 - 705)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0xC4006144B74F1FE6((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x87C0AFE55188B978((iParam0 - 3111)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0xC4006144B74F1FE6((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x87C0AFE55188B978((iParam0 - 2919)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x64CE28C63005F094((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x87C0AFE55188B978((iParam0 - 4207)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x64CE28C63005F094((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x87C0AFE55188B978((iParam0 - 4335)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x64CE28C63005F094((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x87C0AFE55188B978((iParam0 - 6029)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x64CE28C63005F094((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x87C0AFE55188B978((iParam0 - 7385)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x64CE28C63005F094((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x87C0AFE55188B978((iParam0 - 7321)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0x64CE28C63005F094((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x87C0AFE55188B978((iParam0 - 9361)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0x64CE28C63005F094((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x87C0AFE55188B978((iParam0 - 15369)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0x64CE28C63005F094((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x87C0AFE55188B978((iParam0 - 15562)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0x64CE28C63005F094((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x87C0AFE55188B978((iParam0 - 15946)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0x64CE28C63005F094((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x87C0AFE55188B978((iParam0 - 18098)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = unk_0x64CE28C63005F094((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x87C0AFE55188B978((iParam0 - 22066)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar18, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_62(int iParam0, int iParam1, int iParam2)//Position - 0x3C03
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_32();
	}
	iVar1 = func_64(iParam0, iParam1);
	uVar2 = func_63(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDAB376DC6F83D68C(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_63(int iParam0)//Position - 0x3C40
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x87C0AFE55188B978((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x87C0AFE55188B978((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x87C0AFE55188B978((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x87C0AFE55188B978((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x87C0AFE55188B978((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x87C0AFE55188B978((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x87C0AFE55188B978((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x87C0AFE55188B978((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x87C0AFE55188B978((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x87C0AFE55188B978((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x87C0AFE55188B978((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x87C0AFE55188B978((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x87C0AFE55188B978((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x87C0AFE55188B978((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x87C0AFE55188B978((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x87C0AFE55188B978((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x87C0AFE55188B978((iParam0 - 22066)) * 64);
	}
	return iVar0;
}

int func_64(int iParam0, int iParam1)//Position - 0x3F2C
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_32();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x761270FB5119E371((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x761270FB5119E371((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x761270FB5119E371((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x761270FB5119E371((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0xC4006144B74F1FE6((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0xC4006144B74F1FE6((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	return iVar0;
}

bool func_65(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x41FA
{
	func_81(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_3DBF = 0;
	Global_3DC1 = 0;
	Global_3DC6 = 0;
	Global_4197 = 0;
	Global_4199 = 0;
	Global_419D = 0;
	Global_280001 = 0;
	return func_66(sParam2, iParam3, 0);
}

int func_66(char* sParam0, int iParam1, bool bParam2)//Position - 0x4248
{
	Global_3DB9 = 0;
	if (Global_3DB8 == 0 || Global_3DBA == 2)
	{
		if (Global_3DB8 != 0)
		{
			if (iParam1 > Global_3DBA)
			{
				if (Global_3DBF == 0)
				{
					unk_0x1E08809A5041F85B(false);
					Global_389D.f_1 = 3;
					Global_3DB8 = 0;
					Global_3DB9 = 1;
					Global_3DED = 0;
					Global_3DB4 = 0;
					Global_3DB5 = 0;
					Global_3DC3 = 0;
					Global_3DC2 = 0;
					Global_389C = 0;
				}
				else
				{
					func_80();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xE6711F601F11B66B())
		{
			return 0;
		}
		if (func_79(8, -1))
		{
			return 0;
		}
		Global_3E04 = { Global_3DFE };
		func_78();
		Global_3AF1 = { Global_3B96 };
		Global_3DBE = Global_3DBF;
		Global_3DC5 = Global_3DC6;
		Global_280002 = Global_280001;
		Global_3DC7 = { Global_3DD7 };
		Global_3DC0 = Global_3DC1;
		Global_4196 = Global_4197;
		Global_419E = { Global_41A4 };
		Global_4198 = Global_4199;
		Global_419A = Global_419B;
		Global_419C = Global_419D;
		Global_3C3B.f_172 = Global_4195;
		Global_3C3B.f_170 = Global_4193;
		Global_3C3B.f_171 = Global_4194;
		Global_3DB4 = Global_3DB5;
		if (Global_3DBE)
		{
			unk_0x7CB6FD92BE491AD9(&Global_93B, 20);
			unk_0x7CB6FD92BE491AD9(&Global_93C, 17);
			unk_0x7CB6FD92BE491AD9(&Global_93D, 0);
			if (bParam2)
			{
				func_71();
				if (Global_C60[Global_389D /*2811*/][0 /*281*/].f_103 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_389D.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_387B == 1)
			{
				return 0;
			}
			if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
			{
				if (unk_0xABB2AFD7539464EA(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (func_70())
				{
					return 0;
				}
				if (unk_0x7199482D96955B9E(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (unk_0x01666D754C368931(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (unk_0xE959459C9FB1C42E(unk_0xBC25C936A095B5BA(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_11542)
				{
					if (unk_0x149E9368A11035DE(unk_0xBC25C936A095B5BA()))
					{
						return 0;
					}
					if (unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F()))
					{
						return 0;
					}
					if (unk_0x042228744678C7D4(unk_0xBC25C936A095B5BA()))
					{
						return 0;
					}
					if (unk_0x36210078ECC9DC40(unk_0xB5CEFD608600A09F()))
					{
						return 0;
					}
				}
			}
			if (func_69())
			{
				return 0;
			}
			else
			{
				switch (Global_389D.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (unk_0xFA30DFD0084E92FE(Global_93B, 9))
				{
					return 0;
				}
			}
			func_68();
			Global_3DC2 = bParam2;
		}
		Global_3DBA = iParam1;
		StringCopy(&Global_3C3B, sParam0, 24);
		Global_394A = 0;
		func_67();
		return 1;
	}
	if (Global_3DB8 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_3DBA || iParam1 == Global_3DBA)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_80();
	}
	return 0;
}

void func_67()//Position - 0x4514
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_394C[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x1E08809A5041F85B(false);
	Global_3DB8 = 1;
}

void func_68()//Position - 0x4546
{
	Global_3DED = Global_3DEC;
	Global_3DE7 = Global_3DE8;
	Global_3E16 = { Global_3E0A };
	Global_3E1C = { Global_3E10 };
	Global_3DEF = Global_3DEE;
	Global_3E34 = { Global_3E22 };
	Global_3E3A = { Global_3E28 };
	Global_3E40 = { Global_3E2E };
	Global_3E46 = { Global_3E4C };
	Global_68E = Global_68F;
	Global_690 = Global_691;
	Global_3DC3 = Global_3DC4;
	Global_3DC5 = Global_3DC6;
	Global_3DC7 = { Global_3DD7 };
	Global_3DBC = Global_3DBD;
	Global_41B0 = 0;
	Global_3DE9 = 0;
	Global_3DEA = 0;
	unk_0x7CB6FD92BE491AD9(&Global_93C, 16);
}

int func_69()//Position - 0x45DB
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_70()//Position - 0x4602
{
	int iVar0;
	int iVar1;
	
	if (Global_11542)
	{
		iVar0 = 0;
		unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &iVar1, 1);
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xCDE05E3688DE990D() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0xA0747FCBCF1D1424(unk_0xBC25C936A095B5BA(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_71()//Position - 0x469B
{
	if (func_77(14))
	{
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_19B04.f_6D75[0 /*29*/])
			{
				Global_389D = 0;
			}
			else if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_19B04.f_6D75[1 /*29*/])
			{
				Global_389D = 1;
			}
			else if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_19B04.f_6D75[2 /*29*/])
			{
				Global_389D = 2;
			}
			else
			{
				Global_389D = 0;
			}
		}
	}
	else
	{
		Global_389D = func_72();
		if (Global_389D == 145)
		{
			Global_389D = 3;
		}
		if (Global_11542)
		{
			Global_389D = 3;
		}
		if (Global_389D > 3)
		{
			Global_389D = 3;
		}
	}
}

var func_72()//Position - 0x473D
{
	func_73();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_73()//Position - 0x4756
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_76(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_75(unk_0xBC25C936A095B5BA());
			if (func_74(iVar0) && (!func_77(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_74(Global_19B04.f_932.f_21B.f_10CD))
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

bool func_74(int iParam0)//Position - 0x4853
{
	return iParam0 < 3;
}

int func_75(int iParam0)//Position - 0x485F
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_76(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_76(int iParam0)//Position - 0x489C
{
	if (func_74(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_77(int iParam0)//Position - 0x48C6
{
	return Global_8C41 == iParam0;
}

void func_78()//Position - 0x48D4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_3AF1[iVar0 /*10*/] = 0;
		StringCopy(&(Global_3AF1[iVar0 /*10*/].f_1), "", 24);
		Global_3AF1[iVar0 /*10*/].f_7 = 0;
		Global_3AF1[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_3AF1.f_A1 = -99;
	Global_3AF1.f_A2 = { 0f, 0f, 0f };
}

bool func_79(int iParam0, int iParam1)//Position - 0x492C
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

void func_80()//Position - 0x4967
{
	unk_0x5C7DC611411E2CF9();
	Global_41AB = 0;
	if ((unk_0x58E7DDFF8D17A82A() || Global_389D.f_1 == 9) || Global_389C == 1)
	{
		unk_0x1E08809A5041F85B(false);
		Global_3DB8 = 6;
		Global_389D.f_1 = 3;
		return;
	}
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x1E08809A5041F85B(true);
		Global_3DB8 = 6;
		return;
	}
}

void func_81(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x49BE
{
	Global_3B96 = { *uParam0 };
	Global_68F = iParam1;
	StringCopy(&Global_3DFE, sParam2, 24);
	Global_4195 = uParam5;
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

struct<6> func_82()//Position - 0x4A14
{
	struct<6> Var0;
	
	StringCopy(&Var0, "", 24);
	if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, 0, 1, 0) || unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, 0, 1, 0))
	{
		if (!func_62(15999, -1, -1))
		{
			StringCopy(&Var0, "SMGFZ_WLK1ST", 24);
		}
		else if (!func_62(16002, -1, -1) || func_49(18097, -1, -1) == 0)
		{
			StringCopy(&Var0, "SMGFZ_WLKENT", 24);
		}
	}
	else if (((func_19(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), 3, 1000, 0) || func_18(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), 1000)) || func_93(unk_0xBC25C936A095B5BA())) && func_92(unk_0xBC25C936A095B5BA()))
	{
		if (!func_62(16000, -1, -1))
		{
			StringCopy(&Var0, "SMGFZ_FLY1ST", 24);
		}
		else if (!func_62(16001, -1, -1))
		{
			StringCopy(&Var0, "SMGFZ_FLYENT", 24);
		}
	}
	return Var0;
}

void func_83(var uParam0, int iParam1, vector3 vParam2)//Position - 0x4B41
{
	uParam0->f_A1 = iParam1;
	uParam0->f_A2 = { vParam2 };
}

void func_84(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x4B59
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

void func_85(var uParam0, int iParam1)//Position - 0x4BF4
{
	uParam0->f_A1 = -99;
	uParam0->f_A2 = { 0f, 0f, 0f };
	if (iParam1 < 0)
	{
	}
}

void func_86(var uParam0, int iParam1)//Position - 0x4C12
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

int func_87()//Position - 0x4C2F
{
	if (Global_3DB8 != 0 || unk_0xE6711F601F11B66B())
	{
		return 1;
	}
	return 0;
}

void func_88()//Position - 0x4C51
{
	Global_394A = 0;
	func_89();
}

void func_89()//Position - 0x4C61
{
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x5C7DC611411E2CF9();
		Global_41AB = 0;
		unk_0x1E08809A5041F85B(true);
		Global_3DB8 = 6;
		return;
	}
}

int func_90(bool bParam0, bool bParam1)//Position - 0x4C85
{
	if (bParam0)
	{
		if (!Local_133.f_B2)
		{
			if (unk_0xFA30DFD0084E92FE(Local_133.f_B6, 1))
			{
				if (unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()))
				{
					if (!func_62(16000, -1, -1) || !func_62(16001, -1, -1))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (bParam1)
	{
		if (!Local_133.f_B3)
		{
			if (unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()) && unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 0)
			{
				if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) || func_91())
				{
					if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, 0, 1, 0))
					{
						if (!func_62(15999, -1, -1) || !func_62(16002, -1, -1))
						{
							if (unk_0x349C94FFF43E2979(unk_0xBC25C936A095B5BA()) >= -25f && unk_0x349C94FFF43E2979(unk_0xBC25C936A095B5BA()) <= 125f)
							{
								return 1;
							}
						}
					}
					else if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, 0, 1, 0))
					{
						if (!func_62(15999, -1, -1) || func_49(18097, -1, -1) == 0)
						{
							if (unk_0x349C94FFF43E2979(unk_0xBC25C936A095B5BA()) >= 160f && unk_0x349C94FFF43E2979(unk_0xBC25C936A095B5BA()) <= 290f)
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_91()//Position - 0x4E07
{
	int iVar0;
	
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
		if (unk_0xA37E9F4E2795A88A(iVar0))
		{
			if (func_6(iVar0))
			{
				if (!func_5(iVar0, 1) && !func_4(iVar0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_92(int iParam0)//Position - 0x4E54
{
	if (unk_0x57379381A330B2FF(iParam0) || unk_0xE3CA72BD77D43B09(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_93(int iParam0)//Position - 0x4E76
{
	if (unk_0x724D816EA203A79E(iParam0) && func_94(iParam0))
	{
		if ((unk_0x0C265B3C448E6954(iParam0, -2013.3f, 2878.6f, 1000f, -2864.6f, 3357.6f, 31f, 400f, 0, 1, 0) || unk_0x0C265B3C448E6954(iParam0, -1700f, 3150f, 1000f, -2039f, 3342f, 30f, 175f, 0, 1, 0)) || unk_0x0C265B3C448E6954(iParam0, -1950f, 2786f, 1000f, -1856f, 3141f, 31f, 270f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_94(int iParam0)//Position - 0x4F2A
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

void func_95()//Position - 0x4F4B
{
	if (Local_133.f_B4)
	{
		if (!func_99(&(Local_133.f_B7)))
		{
			func_98(&(Local_133.f_B7), 0, 0);
		}
		else if (!func_97(&(Local_133.f_B7), 17000, 0))
		{
			if (!func_54("AB_ENTRY_HT"))
			{
				func_52("AB_ENTRY_HT", -1);
			}
		}
		else if (func_97(&(Local_133.f_B7), 17000, 0))
		{
			if (func_54("AB_ENTRY_HT"))
			{
				unk_0x7456702622C62EA0(1);
			}
			func_96(&(Local_133.f_B7));
			Local_133.f_B4 = 0;
		}
	}
}

void func_96(var uParam0)//Position - 0x4FCB
{
	uParam0->f_1 = 0;
}

int func_97(var uParam0, int iParam1, bool bParam2)//Position - 0x4FD8
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_98(uParam0, bParam2, 0);
	if (unk_0x7AF0088ABFA713B6() && !bParam2)
	{
		if (unk_0xC40EDFF7541407A8(unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xC40EDFF7541407A8(unk_0xCCA9497DA4595710(unk_0x105601648511CC64(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_98(var uParam0, bool bParam1, bool bParam2)//Position - 0x5036
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x7AF0088ABFA713B6() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xED678C85A82F0AB9();
			}
			else
			{
				*uParam0 = unk_0x1C44CABA911F93F7();
			}
		}
		else
		{
			*uParam0 = unk_0x105601648511CC64();
		}
		uParam0->f_1 = 1;
	}
}

bool func_99(var uParam0)//Position - 0x507B
{
	return uParam0->f_1;
}

void func_100()//Position - 0x5087
{
	if (unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()))
	{
		if ((func_19(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), 3, 1000, 0) || func_18(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), 1000)) || func_93(unk_0xBC25C936A095B5BA()))
		{
			if (!unk_0xFA30DFD0084E92FE(Local_133.f_B6, 0))
			{
				if ((((func_92(unk_0xBC25C936A095B5BA()) && unk_0x2A348A3A98B80B13(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0))) && unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 0) && func_91()) && !Global_19966C)
				{
					if (!unk_0xFA30DFD0084E92FE(Local_133.f_B6, 1) && !unk_0xFA30DFD0084E92FE(Local_133.f_B6, 3))
					{
						unk_0xF0059F27F7BB6680(&(Local_133.f_B6), 1);
					}
				}
				unk_0xF0059F27F7BB6680(&(Local_133.f_B6), 0);
			}
		}
		else
		{
			if (unk_0xFA30DFD0084E92FE(Local_133.f_B6, 0))
			{
				unk_0x7CB6FD92BE491AD9(&(Local_133.f_B6), 0);
			}
			if (unk_0xFA30DFD0084E92FE(Local_133.f_B6, 1))
			{
				unk_0x7CB6FD92BE491AD9(&(Local_133.f_B6), 1);
			}
			if (unk_0xFA30DFD0084E92FE(Local_133.f_B6, 3))
			{
				unk_0x7CB6FD92BE491AD9(&(Local_133.f_B6), 3);
			}
			if (Global_19966C)
			{
				Global_19966C = 0;
			}
		}
	}
}

int func_101(int iParam0)//Position - 0x51A6
{
	if (func_22(iParam0) == 233)
	{
		return func_102(iParam0);
	}
	return -1;
}

int func_102(int iParam0)//Position - 0x51C3
{
	if (func_23(iParam0, 0))
	{
		return Global_18C80F[iParam0 /*558*/].f_B.f_B0;
	}
	return -1;
}

int func_103()//Position - 0x51E6
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_58(unk_0xB5CEFD608600A09F()))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x3171C34AB3FE6F2E(iVar0);
		if (func_35(iVar1, 0, 1))
		{
			if (iVar1 != unk_0xB5CEFD608600A09F())
			{
				if (func_104(unk_0xA95CF30C72EB526E(unk_0xB5CEFD608600A09F()), unk_0xA95CF30C72EB526E(iVar1)))
				{
					iVar2 = unk_0x9FE9D386222EEE47(unk_0xA95CF30C72EB526E(iVar1), 0);
					if (unk_0x3187EF5798B5D209(iVar2, -1, 0) == unk_0xA95CF30C72EB526E(iVar1))
					{
						if (func_58(iVar1))
						{
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_104(int iParam0, int iParam1)//Position - 0x526D
{
	if (iParam0 == iParam1)
	{
		return 1;
	}
	if (!unk_0x5237AF95232D78C5(iParam0, 0) || !unk_0x5237AF95232D78C5(iParam1, 0))
	{
		return 0;
	}
	return unk_0x9FE9D386222EEE47(iParam0, 0) == unk_0x9FE9D386222EEE47(iParam1, 0);
}

void func_105(int iParam0)//Position - 0x52AC
{
	int iVar0;
	
	if (!unk_0x8EA6CABD14F1B89A(Local_108[iParam0]))
	{
		return;
	}
	iVar0 = unk_0xE48AD7BF7762E114(Local_108[iParam0]);
	if (unk_0x1D403DFADBC2DE3C(iVar0, 0))
	{
		return;
	}
	switch (Local_108.f_15[iParam0])
	{
		case 0:
			if (!func_45(Local_132[unk_0x6BAA0516CC970D99() /*8*/].f_1[iParam0], 64))
			{
				Local_132[unk_0x6BAA0516CC970D99() /*8*/].f_1[iParam0] = 0;
				func_44(&(Local_132[unk_0x6BAA0516CC970D99() /*8*/].f_1[iParam0]), 64);
			}
			break;
		
		case 1:
			if (!func_45(Local_132[unk_0x6BAA0516CC970D99() /*8*/].f_1[iParam0], 1))
			{
				if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
				{
					if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), unk_0x541C2AEF053615BC(iVar0, 1)) <= 900f)
					{
						func_44(&(Local_132[unk_0x6BAA0516CC970D99() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			break;
		
		case 2:
			if (!func_45(Local_132[unk_0x6BAA0516CC970D99() /*8*/].f_1[iParam0], 2) && SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), unk_0x541C2AEF053615BC(iVar0, 1)) <= 900f)
			{
				func_84(&(Local_133.f_7), 4, iVar0, "ARMY_Guard01", 0, 1);
				func_110(&(Local_133.f_7), "ARMYAUD", "ARMY_WRN1", 12, 0, 0, 0);
				func_44(&(Local_132[unk_0x6BAA0516CC970D99() /*8*/].f_1[iParam0]), 2);
			}
			break;
		
		case 3:
			if (!func_45(Local_132[unk_0x6BAA0516CC970D99() /*8*/].f_1[iParam0], 4))
			{
				if (func_109(iParam0))
				{
					unk_0x57D65255D3D3B6A7(iVar0, func_108(iParam0), -1, 0);
				}
				if (func_107(iParam0, 1630799643))
				{
					func_44(&(Local_132[unk_0x6BAA0516CC970D99() /*8*/].f_1[iParam0]), 4);
				}
			}
			break;
		
		case 4:
			if ((!func_45(Local_132[unk_0x6BAA0516CC970D99() /*8*/].f_1[iParam0], 8) && SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), unk_0x541C2AEF053615BC(iVar0, 1)) <= 900f) && unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) < 1)
			{
				if (!func_16(&Local_133))
				{
					func_13(&Local_133);
				}
				if (func_10(&Local_133) >= 7f)
				{
					func_44(&(Local_132[unk_0x6BAA0516CC970D99() /*8*/].f_1[iParam0]), 8);
					func_110(&(Local_133.f_7), "ARMYAUD", "ARMY_WRN1a", 12, 0, 0, 0);
				}
			}
			else if (func_16(&Local_133))
			{
				func_1(&Local_133);
			}
			if (!func_45(Local_132[unk_0x6BAA0516CC970D99() /*8*/].f_1[iParam0], 16))
			{
				if (func_106(iParam0) && SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), unk_0x541C2AEF053615BC(iVar0, 1)) <= 900f)
				{
					func_44(&(Local_132[unk_0x6BAA0516CC970D99() /*8*/].f_1[iParam0]), 16);
					if (!func_146())
					{
						unk_0x16F9568D5D08F080(unk_0xB5CEFD608600A09F(), 36, unk_0x88B0E2A64EF693DE(4));
					}
					else
					{
						unk_0x16F9568D5D08F080(unk_0xB5CEFD608600A09F(), 36, unk_0x88B0E2A64EF693DE(Global_40001.f_511B));
					}
				}
			}
			if (func_45(Local_132[unk_0x6BAA0516CC970D99() /*8*/].f_1[iParam0], 1))
			{
				if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
				{
					if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), unk_0x541C2AEF053615BC(iVar0, 1)) > 900f)
					{
						func_40(&(Local_132[unk_0x6BAA0516CC970D99() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			break;
		
		case 5:
			if (!func_45(Local_132[unk_0x6BAA0516CC970D99() /*8*/].f_1[iParam0], 16))
			{
				if (func_106(iParam0) && SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), unk_0x541C2AEF053615BC(iVar0, 1)) <= 900f)
				{
					func_44(&(Local_132[unk_0x6BAA0516CC970D99() /*8*/].f_1[iParam0]), 16);
					if (!func_146())
					{
						unk_0x16F9568D5D08F080(unk_0xB5CEFD608600A09F(), 36, (unk_0x88B0E2A64EF693DE(4) - unk_0x88B0E2A64EF693DE(unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()))));
					}
					else
					{
						unk_0x16F9568D5D08F080(unk_0xB5CEFD608600A09F(), 36, (unk_0x88B0E2A64EF693DE(Global_40001.f_511B) - unk_0x88B0E2A64EF693DE(unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()))));
					}
				}
			}
			if (func_45(Local_132[unk_0x6BAA0516CC970D99() /*8*/].f_1[iParam0], 1))
			{
				if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
				{
					if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), unk_0x541C2AEF053615BC(iVar0, 1)) > 900f)
					{
						func_40(&(Local_132[unk_0x6BAA0516CC970D99() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			if (!func_107(iParam0, 1630799643))
			{
				if (func_109(iParam0))
				{
					unk_0x57D65255D3D3B6A7(iVar0, func_108(iParam0), -1, 0);
				}
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (func_45(Local_132[unk_0x6BAA0516CC970D99() /*8*/].f_1[iParam0], 4))
			{
				if (func_109(iParam0))
				{
					unk_0xA4E856A8CD53B8DF(iVar0);
				}
				if (!func_107(iParam0, 1435919172))
				{
					func_40(&(Local_132[unk_0x6BAA0516CC970D99() /*8*/].f_1[iParam0]), 4);
					func_40(&(Local_132[unk_0x6BAA0516CC970D99() /*8*/].f_1[iParam0]), 64);
				}
			}
			break;
	}
}

int func_106(int iParam0)//Position - 0x576D
{
	int iVar0;
	
	if (!unk_0x8EA6CABD14F1B89A(Local_108[iParam0]))
	{
		return 0;
	}
	iVar0 = unk_0xE48AD7BF7762E114(Local_108[iParam0]);
	if (unk_0x1D403DFADBC2DE3C(iVar0, 0))
	{
		return 0;
	}
	if (unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		return 0;
	}
	if (unk_0x32E373675659FDB0(unk_0xBC25C936A095B5BA()))
	{
		return 1;
	}
	if (unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), iVar0))
	{
		return 1;
	}
	if (unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), iVar0))
	{
		return 1;
	}
	if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), unk_0x541C2AEF053615BC(iVar0, 1)) <= 64f)
	{
		return 1;
	}
	return 0;
}

int func_107(int iParam0, int iParam1)//Position - 0x5804
{
	int iVar0;
	
	if (!unk_0x8EA6CABD14F1B89A(Local_108[iParam0]))
	{
		return 1;
	}
	iVar0 = unk_0xE48AD7BF7762E114(Local_108[iParam0]);
	if (unk_0x1D403DFADBC2DE3C(iVar0, 0))
	{
		return 1;
	}
	if (unk_0xF4FCC3C1048FF2AB(iVar0, iParam1) != 1 && unk_0xF4FCC3C1048FF2AB(iVar0, iParam1) != 0)
	{
		return 0;
	}
	return 1;
}

int func_108(int iParam0)//Position - 0x5859
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	fVar3 = 1E+11f;
	iVar0 = 0;
	while (iVar0 < unk_0x81C86888AEA2F49B())
	{
		if (unk_0x05086B70D2CFEA6F(unk_0xCFA8A401AAD7BB5A(iVar0)))
		{
			iVar2 = unk_0xA95CF30C72EB526E(unk_0x4ED43B67B3F05E0F(unk_0xCFA8A401AAD7BB5A(iVar0)));
			if (!unk_0x1D403DFADBC2DE3C(iVar2, 0))
			{
				fVar4 = SYSTEM::VDIST2(unk_0x541C2AEF053615BC(iVar2, 1), unk_0x541C2AEF053615BC(unk_0xD14280F674B4DBF4(Local_108[iParam0]), 1));
				if (fVar4 < fVar3)
				{
					iVar1 = iVar2;
					fVar3 = fVar4;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_109(int iParam0)//Position - 0x58D3
{
	int iVar0;
	
	if (!unk_0x8EA6CABD14F1B89A(Local_108[iParam0]))
	{
		return 0;
	}
	iVar0 = unk_0xE48AD7BF7762E114(Local_108[iParam0]);
	if (unk_0x1D403DFADBC2DE3C(iVar0, 0))
	{
		return 0;
	}
	if (!unk_0x4DF785C4DF542CD0(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_110(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x5916
{
	func_81(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_3DBF = 0;
	Global_3DC1 = 0;
	Global_3DC6 = 0;
	Global_4197 = 0;
	Global_4199 = 0;
	Global_419D = 0;
	Global_280001 = 1;
	return func_66(sParam2, iParam3, 0);
}

bool func_111(var uParam0, int iParam1)//Position - 0x5964
{
	return (uParam0 && iParam1) != 0;
}

int func_112()//Position - 0x5973
{
	if (!unk_0xD6513D668481290A(joaat("s_m_y_marine_01")))
	{
		return 0;
	}
	if (!unk_0xD6513D668481290A(joaat("lazer")))
	{
		return 0;
	}
	if (!unk_0xD6513D668481290A(joaat("s_m_y_pilot_01")))
	{
		return 0;
	}
	return 1;
}

void func_113(var uParam0, int iParam1)//Position - 0x59AF
{
	func_114(uParam0, iParam1);
}

void func_114(var uParam0, var uParam1)//Position - 0x59BF
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_115()//Position - 0x59D0
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_27.f_12, 0);
}

int func_116(int iParam0, bool bParam1)//Position - 0x59EC
{
	if (bParam1)
	{
		if (func_117(iParam0))
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

bool func_117(int iParam0)//Position - 0x5A18
{
	return func_118(iParam0);
}

bool func_118(int iParam0)//Position - 0x5A26
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_D.f_1, 0);
}

void func_119()//Position - 0x5A40
{
	unk_0xF243B7A14FCFD0F4(joaat("s_m_y_marine_01"));
	unk_0xF243B7A14FCFD0F4(joaat("lazer"));
	unk_0xF243B7A14FCFD0F4(joaat("s_m_y_pilot_01"));
}

int func_120()//Position - 0x5A63
{
	int iVar0;
	
	switch (Local_108.f_13)
	{
		case 0:
			if (func_140())
			{
				Local_108.f_13 = 1;
			}
			break;
		
		case 1:
			if (func_139())
			{
				Local_108.f_13 = 2;
			}
			break;
		
		case 2:
			if (((((func_116(unk_0xB5CEFD608600A09F(), 1) || func_115()) || func_22(unk_0xB5CEFD608600A09F()) == 225) || func_22(unk_0xB5CEFD608600A09F()) == 233) || func_27(unk_0xB5CEFD608600A09F()) == 236) || Global_1805D3)
			{
				func_113(&(Local_108.f_14), 1);
				Local_108.f_13 = 3;
			}
			else if (func_137())
			{
				func_113(&(Local_108.f_14), 1);
				Local_108.f_13 = 3;
			}
			break;
		
		case 3:
			if (!func_116(unk_0xB5CEFD608600A09F(), 1) && !func_115())
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					func_134(iVar0);
					iVar0++;
				}
				iVar0 = 0;
				while (iVar0 < 3)
				{
					func_123(iVar0);
					iVar0++;
				}
			}
			if (((func_22(unk_0xB5CEFD608600A09F()) == 225 || func_22(unk_0xB5CEFD608600A09F()) == 233) || func_27(unk_0xB5CEFD608600A09F()) == 236) || Global_1805D3)
			{
				func_122();
			}
			if (func_121())
			{
				Local_108.f_13 = 4;
			}
			break;
		
		case 4:
			func_122();
			return 1;
			break;
	}
	return 0;
}

int func_121()//Position - 0x5BCC
{
	if (unk_0x3D4274189EB7E01E() > 1)
	{
		return 0;
	}
	if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), -2076.374f, 3112.294f, 33.13584f) >= 1030225f)
	{
		return 1;
	}
	return 0;
}

void func_122()//Position - 0x5C0D
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x8EA6CABD14F1B89A(Local_108[iVar0]))
		{
			iVar1 = unk_0xE48AD7BF7762E114(Local_108[iVar0]);
			if (!unk_0x1D403DFADBC2DE3C(iVar1, 0))
			{
				unk_0x02537C8C1BEEB477(&iVar1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x8EA6CABD14F1B89A(Local_108.f_3[iVar0 /*5*/].f_1))
		{
			iVar1 = unk_0xE48AD7BF7762E114(Local_108.f_3[iVar0 /*5*/].f_1);
			if (!unk_0x1D403DFADBC2DE3C(iVar1, 0))
			{
				unk_0x02537C8C1BEEB477(&iVar1);
			}
		}
		if (unk_0x8EA6CABD14F1B89A(Local_108.f_3[iVar0 /*5*/]))
		{
			iVar2 = unk_0x19D7F09C2FABDDA0(Local_108.f_3[iVar0 /*5*/]);
			if (!unk_0x1D403DFADBC2DE3C(iVar2, 0))
			{
				unk_0x1E7A09C1710FB071(&iVar2);
			}
		}
		iVar0++;
	}
}

void func_123(int iParam0)//Position - 0x5CC3
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	vector3 vVar3;
	int iVar4;
	
	if (Local_108.f_3[iParam0 /*5*/].f_2 > 2)
	{
		if (unk_0x8EA6CABD14F1B89A(Local_108.f_3[iParam0 /*5*/].f_1))
		{
			if (!unk_0x1D403DFADBC2DE3C(unk_0xE48AD7BF7762E114(Local_108.f_3[iParam0 /*5*/].f_1), 0))
			{
				iVar0 = unk_0xE48AD7BF7762E114(Local_108.f_3[iParam0 /*5*/].f_1);
				vVar1 = { unk_0x541C2AEF053615BC(iVar0, 1) };
				if (vVar1.z <= -150f)
				{
					unk_0x02537C8C1BEEB477(&iVar0);
					if (unk_0x8EA6CABD14F1B89A(Local_108.f_3[iParam0 /*5*/]))
					{
						if (!unk_0x1D403DFADBC2DE3C(unk_0x19D7F09C2FABDDA0(Local_108.f_3[iParam0 /*5*/]), 0))
						{
							iVar2 = unk_0x19D7F09C2FABDDA0(Local_108.f_3[iParam0 /*5*/]);
							unk_0x1E7A09C1710FB071(&iVar2);
						}
					}
				}
			}
		}
	}
	switch (Local_108.f_3[iParam0 /*5*/].f_2)
	{
		case 0:
			if (func_133(iParam0, 16))
			{
				Local_108.f_3[iParam0 /*5*/].f_4 = -1;
				Local_108.f_3[iParam0 /*5*/].f_2 = 1;
			}
			break;
		
		case 1:
			if (func_131(iParam0))
			{
				Local_108.f_3[iParam0 /*5*/].f_2 = 2;
			}
			break;
		
		case 2:
			vVar3 = { func_130(iParam0) };
			if (!func_129(vVar3))
			{
				if (!unk_0xBDD80E8D075D485A(vVar3, 20f) && !unk_0x33CC9445B2DF9387(vVar3, 20f))
				{
					if (func_126(vVar3, unk_0x349C94FFF43E2979(unk_0xA95CF30C72EB526E(Local_108.f_3[iParam0 /*5*/].f_4)), iParam0))
					{
						Local_108.f_3[iParam0 /*5*/].f_2 = 3;
					}
				}
			}
			break;
		
		case 3:
			if (func_133(iParam0, 2))
			{
				Local_108.f_3[iParam0 /*5*/].f_2 = 4;
			}
			break;
		
		case 4:
			iVar4 = unk_0xA95CF30C72EB526E(Local_108.f_3[iParam0 /*5*/].f_4);
			if (!unk_0x724D816EA203A79E(iVar4))
			{
				Local_108.f_3[iParam0 /*5*/].f_2 = 5;
			}
			else if (unk_0x1D403DFADBC2DE3C(iVar4, 0))
			{
				Local_108.f_3[iParam0 /*5*/].f_2 = 5;
			}
			else if (unk_0x57379381A330B2FF(iVar4) || unk_0xE3CA72BD77D43B09(iVar4))
			{
				if (func_125(unk_0x9FE9D386222EEE47(iVar4, 0)))
				{
					Local_108.f_3[iParam0 /*5*/].f_2 = 5;
				}
			}
			break;
		
		case 5:
			if (func_133(iParam0, 8))
			{
				Local_108.f_3[iParam0 /*5*/].f_2 = 6;
				Local_108.f_3[iParam0 /*5*/].f_4 = -1;
			}
			break;
		
		case 6:
			if (!func_124(iParam0, 16))
			{
				Local_108.f_3[iParam0 /*5*/].f_2 = 0;
			}
			if (func_131(iParam0))
			{
				Local_108.f_3[iParam0 /*5*/].f_2 = 3;
			}
			break;
	}
}

int func_124(int iParam0, int iParam1)//Position - 0x5F1D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x81C86888AEA2F49B())
	{
		if (unk_0x05086B70D2CFEA6F(unk_0xCFA8A401AAD7BB5A(iVar0)))
		{
			if (func_45(Local_132[iVar0 /*8*/].f_4[iParam0], iParam1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_125(int iParam0)//Position - 0x5F61
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

int func_126(vector3 vParam0, float fParam1, int iParam2)//Position - 0x5FA4
{
	int iVar0;
	
	if (!unk_0x0DE6397A2CB3EF75())
	{
		return 1;
	}
	iVar0 = 1;
	if (!unk_0x8EA6CABD14F1B89A(Local_108.f_3[iParam2 /*5*/]))
	{
		if (!func_128(&(Local_108.f_3[iParam2 /*5*/]), joaat("lazer"), vParam0, fParam1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
		{
			iVar0 = 0;
		}
		else
		{
			unk_0xA1EE8501940C1D3E(unk_0x19D7F09C2FABDDA0(Local_108.f_3[iParam2 /*5*/]), 3);
		}
	}
	if (unk_0x8EA6CABD14F1B89A(Local_108.f_3[iParam2 /*5*/]))
	{
		if (!unk_0x8EA6CABD14F1B89A(Local_108.f_3[iParam2 /*5*/].f_1))
		{
			if (!func_127(&(Local_108.f_3[iParam2 /*5*/].f_1), Local_108.f_3[iParam2 /*5*/], 29, joaat("s_m_y_pilot_01"), -1, 1, 1, 1))
			{
				iVar0 = 0;
			}
			else
			{
				unk_0xD9584325F5E42F85(unk_0xE48AD7BF7762E114(Local_108.f_3[iParam2 /*5*/].f_1), joaat("vehicle_weapon_space_rocket"));
				unk_0xB499FECE23EEF9E4(unk_0xE48AD7BF7762E114(Local_108.f_3[iParam2 /*5*/].f_1), false);
			}
		}
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_127(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)//Position - 0x608C
{
	if (!unk_0x88E77A85289CC883(1))
	{
		return 0;
	}
	if (!unk_0x7FFE36DB9042AF23(iParam1))
	{
		return 0;
	}
	if (!unk_0xE59B7F5A03335350(unk_0x19D7F09C2FABDDA0(iParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x5902CDB733CD6ADE(unk_0xFD8987C090669BD5(unk_0x19D7F09C2FABDDA0(iParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0x7FFE36DB9042AF23(*uParam0))
	{
		unk_0x656194E145691D3E(unk_0xE48AD7BF7762E114(*uParam0), iParam7);
		if (unk_0x270072584099CC42(unk_0xE48AD7BF7762E114(*uParam0)))
		{
			if (bParam5)
			{
				unk_0xF2A50F5F6E7737D8(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_128(var uParam0, int iParam1, vector3 vParam2, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)//Position - 0x6114
{
	float fVar0;
	int iVar1;
	
	if (!unk_0x4A09C6BA3AFA4242(iParam1))
	{
		return 0;
	}
	if (!unk_0x424470694C82EFFA(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == -32878452)
	{
		fVar0 = 20f;
	}
	if (bParam9)
	{
		unk_0xEDAD35A0D81ED3FB(vParam2, fVar0, 0, 0, 0, 0, false, 0);
	}
	iVar1 = unk_0x61C05BF08A1E0EFE(iParam1, vParam2, fParam3, iParam5, iParam4, iParam12);
	if (unk_0x724D816EA203A79E(iVar1))
	{
		*uParam0 = unk_0xD3495809C4827891(iVar1);
		Global_267214.f_17E0 = iVar1;
		if (unk_0x7FFE36DB9042AF23(*uParam0))
		{
			if (bParam13)
			{
				unk_0x03C1DBD85D4F7482(iVar1, 1);
			}
			unk_0x656194E145691D3E(iVar1, iParam8);
			if (unk_0x270072584099CC42(iVar1))
			{
				if (bParam6)
				{
					unk_0xF2A50F5F6E7737D8(*uParam0, 1);
				}
				else
				{
					unk_0xF2A50F5F6E7737D8(*uParam0, 0);
				}
				if (bParam11)
				{
					unk_0xE106CB3E79DC85D6(*uParam0, unk_0xB5CEFD608600A09F(), 1);
				}
			}
			unk_0x8D8F52BBEE186D6D(iVar1, bParam7);
			unk_0x9E9094D4A850A6F4(iVar1, 1);
			if (bParam10)
			{
				unk_0x64B0385195B407FC(iVar1);
				unk_0x1E6686599BFBEC90(iVar1, 5, 5, 1f);
			}
			return 1;
		}
	}
	return 0;
}

int func_129(vector3 vParam0)//Position - 0x620E
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_130(int iParam0)//Position - 0x6238
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = unk_0xA95CF30C72EB526E(Local_108.f_3[iParam0 /*5*/].f_4);
	if (unk_0x1D403DFADBC2DE3C(iVar0, 0))
	{
		return 0f, 0f, 0f;
	}
	vVar1 = { unk_0x89D97EB4FAE4A574(unk_0x541C2AEF053615BC(iVar0, 1), unk_0x349C94FFF43E2979(iVar0), 0f, -250f, (40f * SYSTEM::TO_FLOAT(iParam0))) };
	if (vVar1.z < 100f)
	{
		vVar1.z = 100f;
	}
	return vVar1;
}

int func_131(int iParam0)//Position - 0x62A1
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = 0;
	while (iVar0 < unk_0x81C86888AEA2F49B())
	{
		if (unk_0x05086B70D2CFEA6F(unk_0xCFA8A401AAD7BB5A(iVar0)))
		{
			iVar1 = unk_0xA95CF30C72EB526E(unk_0x4ED43B67B3F05E0F(unk_0xCFA8A401AAD7BB5A(iVar0)));
			if (!func_132(unk_0x4ED43B67B3F05E0F(unk_0xCFA8A401AAD7BB5A(iVar0))))
			{
				if (unk_0x57379381A330B2FF(iVar1) || unk_0xE3CA72BD77D43B09(iVar1))
				{
					if (unk_0x904E94842BB9E173(unk_0x4ED43B67B3F05E0F(unk_0xCFA8A401AAD7BB5A(iVar0))) >= 4)
					{
						vVar2 = { unk_0x541C2AEF053615BC(iVar1, 0) };
						if (func_19(vVar2, 3, 1000, 0) && vVar2.z > 90f)
						{
							Local_108.f_3[iParam0 /*5*/].f_4 = unk_0x4ED43B67B3F05E0F(unk_0xCFA8A401AAD7BB5A(iVar0));
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_132(int iParam0)//Position - 0x6357
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0xA95CF30C72EB526E(iParam0);
	if (!unk_0x724D816EA203A79E(iVar0))
	{
		return 1;
	}
	if (unk_0x1D403DFADBC2DE3C(iVar0, 0))
	{
		return 1;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = unk_0xA95CF30C72EB526E(Local_108.f_3[iVar1 /*5*/].f_4);
		if (unk_0x724D816EA203A79E(iVar2))
		{
			if (iParam0 == Local_108.f_3[iVar1 /*5*/].f_4)
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

int func_133(int iParam0, int iParam1)//Position - 0x63C2
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x81C86888AEA2F49B())
	{
		if (unk_0x05086B70D2CFEA6F(unk_0xCFA8A401AAD7BB5A(iVar0)))
		{
			if (!func_45(Local_132[iVar0 /*8*/].f_4[iParam0], iParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_134(int iParam0)//Position - 0x6407
{
	switch (Local_108.f_15[iParam0])
	{
		case 0:
			if (func_136(iParam0, 64))
			{
				Local_108.f_15[iParam0] = 1;
			}
			break;
		
		case 1:
			if (func_135(iParam0, 1))
			{
				Local_108.f_15[iParam0] = 2;
			}
			break;
		
		case 2:
			if (func_135(iParam0, 2))
			{
				Local_108.f_15[iParam0] = 3;
			}
			break;
		
		case 3:
			if (func_136(iParam0, 4))
			{
				Local_108.f_15[iParam0] = 4;
			}
			break;
		
		case 4:
			if (func_135(iParam0, 8))
			{
				Local_108.f_15[iParam0] = 5;
			}
			if (!func_135(iParam0, 1))
			{
				Local_108.f_15[iParam0] = 7;
			}
			if (func_135(iParam0, 16))
			{
				Local_108.f_15[iParam0] = 6;
			}
			break;
		
		case 5:
			if (func_135(iParam0, 16))
			{
				Local_108.f_15[iParam0] = 6;
			}
			if (!func_135(iParam0, 1))
			{
				Local_108.f_15[iParam0] = 7;
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (!func_135(iParam0, 4))
			{
				Local_108.f_15[iParam0] = 0;
			}
			break;
	}
}

int func_135(int iParam0, int iParam1)//Position - 0x6529
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x81C86888AEA2F49B())
	{
		if (unk_0x05086B70D2CFEA6F(unk_0xCFA8A401AAD7BB5A(iVar0)))
		{
			if (func_45(Local_132[iVar0 /*8*/].f_1[iParam0], iParam1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_136(int iParam0, int iParam1)//Position - 0x656D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x81C86888AEA2F49B())
	{
		if (unk_0x05086B70D2CFEA6F(unk_0xCFA8A401AAD7BB5A(iVar0)))
		{
			if (!func_45(Local_132[iVar0 /*8*/].f_1[iParam0], iParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_137()//Position - 0x65B2
{
	int iVar0;
	
	if (!unk_0x0DE6397A2CB3EF75())
	{
		return 1;
	}
	iVar0 = 1;
	if (!func_138(&(Local_108[0]), 29, joaat("s_m_y_marine_01"), -2308.4f, 3391f, 30.0601f, 55.8214f, 1, 1, 1))
	{
		iVar0 = 0;
	}
	else if (unk_0x8EA6CABD14F1B89A(Local_108[0]))
	{
		unk_0x7A535CE1F001F3FE(unk_0xE48AD7BF7762E114(Local_108[0]), joaat("weapon_assaultrifle"), 200, true, true);
	}
	if (!func_138(&(Local_108[1]), 29, joaat("s_m_y_marine_01"), -1588.9f, 2792.9f, 16.1385f, 229.437f, 1, 1, 1))
	{
		iVar0 = 0;
	}
	else if (unk_0x8EA6CABD14F1B89A(Local_108[1]))
	{
		unk_0x7A535CE1F001F3FE(unk_0xE48AD7BF7762E114(Local_108[1]), joaat("weapon_assaultrifle"), 200, true, true);
	}
	return iVar0;
}

int func_138(var uParam0, int iParam1, int iParam2, vector3 vParam3, float fParam4, bool bParam5, int iParam6, int iParam7)//Position - 0x6671
{
	int iVar0;
	
	if (!unk_0x88E77A85289CC883(1))
	{
		return 0;
	}
	iVar0 = unk_0x01B3635C3E8EDD81(iParam1, iParam2, vParam3, fParam4, iParam6, bParam5);
	*uParam0 = unk_0x5902CDB733CD6ADE(iVar0);
	if (unk_0x7FFE36DB9042AF23(*uParam0))
	{
		unk_0x656194E145691D3E(iVar0, iParam7);
		if (unk_0x270072584099CC42(iVar0))
		{
			if (bParam5)
			{
				unk_0xF2A50F5F6E7737D8(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_139()//Position - 0x66D0
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < unk_0x81C86888AEA2F49B())
	{
		if (unk_0x05086B70D2CFEA6F(unk_0xCFA8A401AAD7BB5A(iVar1)))
		{
			if (!func_111(Local_132[iVar1 /*8*/], 2))
			{
				iVar0 = 0;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_140()//Position - 0x6711
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < unk_0x81C86888AEA2F49B())
	{
		if (unk_0x05086B70D2CFEA6F(unk_0xCFA8A401AAD7BB5A(iVar1)))
		{
			if (!func_111(Local_132[iVar1 /*8*/], 1))
			{
				iVar0 = 0;
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_141()//Position - 0x6752
{
	if (func_99(&uLocal_145) && func_97(&uLocal_145, Global_40001.f_5166, 0))
	{
		func_96(&uLocal_145);
	}
	if (func_99(&uLocal_143) && func_97(&uLocal_143, Global_40001.f_5167, 0))
	{
		func_96(&uLocal_143);
		iLocal_140 = 0;
	}
	if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) <= 0)
	{
		if (func_142())
		{
			if (!Global_267214.f_1812)
			{
				Global_267214.f_1812 = 1;
				func_52("BASE_EXP_WARN", -1);
			}
			if (!iLocal_140)
			{
				iLocal_140 = 1;
				func_98(&uLocal_145, 0, 0);
				func_98(&uLocal_143, 0, 0);
			}
			else if (!func_99(&uLocal_145))
			{
				unk_0xAEC867D0DBB7AFEB(5);
				bLocal_135 = true;
				bLocal_136 = true;
				iLocal_140 = 0;
				func_96(&uLocal_145);
				func_96(&uLocal_143);
			}
		}
	}
}

int func_142()//Position - 0x6821
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 26)
	{
		func_145(&iLocal_141, iVar1);
		iLocal_142 = func_144();
		if (iLocal_142 >= 0)
		{
			iVar0 = func_143(iLocal_142);
			if (unk_0x724D816EA203A79E(iVar0) && unk_0x386592AF38881675(iVar0))
			{
				if (unk_0x399F7937FFE4DEBF(iVar0) == unk_0xBC25C936A095B5BA())
				{
					return 1;
				}
			}
		}
		iVar1++;
	}
	return 0;
}

var func_143(int iParam0)//Position - 0x6882
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			uVar0 = unk_0xF676222496F84174(iLocal_141, -1773.944f, 3287.334f, 30f, -2029.776f, 2845.083f, 1250f, 255f);
			break;
		
		case 1:
			uVar0 = unk_0xF676222496F84174(iLocal_141, -2725.889f, 3291.099f, 30f, -2009.182f, 2879.835f, 1250f, 180f);
			break;
		
		case 2:
			uVar0 = unk_0xF676222496F84174(iLocal_141, -2442.026f, 3326.699f, 30f, -2033.928f, 3089.049f, 1250f, 205f);
			break;
		
		case 3:
			uVar0 = unk_0xF676222496F84174(iLocal_141, -1917.165f, 3374.209f, 30f, -2016.791f, 3195.058f, 1250f, 86.25f);
			break;
		
		case 4:
			uVar0 = unk_0xF676222496F84174(iLocal_141, -2192.753f, 3373.278f, 30f, -2191.544f, 3150.417f, 1250f, 150f);
			break;
		
		case 5:
			uVar0 = unk_0xF676222496F84174(iLocal_141, -2077.663f, 3344.514f, 30f, -2191.544f, 3150.417f, 1250f, 140.5f);
			break;
		
		case 6:
			uVar0 = unk_0xF676222496F84174(iLocal_141, -2861.755f, 3352.661f, 30f, -2715.871f, 3269.916f, 1250f, 90f);
			break;
		
		case 7:
			uVar0 = unk_0xF676222496F84174(iLocal_141, -2005.574f, 3364.533f, 30f, -1977.569f, 3330.888f, 1250f, 100f);
			break;
		
		case 8:
			uVar0 = unk_0xF676222496F84174(iLocal_141, -1682.235f, 3004.285f, 30f, -1942.747f, 2947.441f, 1250f, 248.75f);
			break;
		
		case 9:
			uVar0 = unk_0xF676222496F84174(iLocal_141, -2393.295f, 2936.406f, 31.6801f, -2453.037f, 3006.863f, 52.31003f, 128f);
			break;
		
		case 10:
			uVar0 = unk_0xF676222496F84174(iLocal_141, -2347.185f, 3023.83f, 31.56573f, -2517.33f, 2989.063f, 49.95644f, 127.25f);
			break;
		
		case 11:
			uVar0 = unk_0xF676222496F84174(iLocal_141, -2259.922f, 3358.04f, 29.99972f, -2299.772f, 3385.79f, 38.06014f, 16f);
			break;
		
		case 12:
			uVar0 = unk_0xF676222496F84174(iLocal_141, -2476.309f, 3363.914f, 31.67933f, -2431.981f, 3287.669f, 39.97826f, 214.25f);
			break;
		
		case 13:
			uVar0 = unk_0xF676222496F84174(iLocal_141, -2103.081f, 2797.783f, 29.37864f, -2096.821f, 2874.423f, 57.80989f, 65.75f);
			break;
		
		case 14:
			uVar0 = unk_0xF676222496F84174(iLocal_141, -1877.436f, 2783.151f, 31.80618f, -1797.873f, 2924.37f, 1307.111f, 88f);
			break;
		
		case 15:
			uVar0 = unk_0xF676222496F84174(iLocal_141, -1761.116f, 2834.651f, 31.80622f, -1720.887f, 2906.419f, 1281.806f, 88f);
			break;
		
		case 16:
			uVar0 = unk_0xF676222496F84174(iLocal_141, -1761.493f, 2817.68f, 32.37125f, -1769.704f, 2913.734f, 1281.807f, 88f);
			break;
		
		case 17:
			uVar0 = unk_0xF676222496F84174(iLocal_141, -1879.297f, 2772.653f, 29.57795f, -1864.521f, 2825.472f, 1281.806f, 88f);
			break;
		
		case 18:
			uVar0 = unk_0xF676222496F84174(iLocal_141, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9f);
			break;
		
		case 19:
			uVar0 = unk_0xF676222496F84174(iLocal_141, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9.5f);
			break;
		
		case 20:
			uVar0 = unk_0xF676222496F84174(iLocal_141, -2807.397f, 3264.226f, 29.92764f, -2744.79f, 3340.347f, 1037.804f, 9.5f);
			break;
		
		case 21:
			uVar0 = unk_0xF676222496F84174(iLocal_141, -2808.236f, 3264.634f, 29.92764f, -2747.55f, 3187.8f, 1037.457f, 9.5f);
			break;
		
		case 22:
			uVar0 = unk_0xF676222496F84174(iLocal_141, -2530.996f, 3064.151f, 29.71081f, -2748.557f, 3189.939f, 1037.457f, 9.5f);
			break;
		
		case 23:
			uVar0 = unk_0xF676222496F84174(iLocal_141, -2533.902f, 3062.491f, 29.70715f, -2520.674f, 2996.817f, 1037.457f, 9.5f);
			break;
		
		case 24:
			uVar0 = unk_0xF676222496F84174(iLocal_141, -2500.716f, 2927.103f, 29.45663f, -2445.696f, 2896.657f, 1037.68f, 9.5f);
			break;
		
		case 25:
			uVar0 = unk_0xF676222496F84174(iLocal_141, -2020.543f, 2810.747f, 29.45658f, -1927.949f, 2785.779f, 1037.671f, 9.5f);
			break;
		
		case 26:
			uVar0 = unk_0xF676222496F84174(iLocal_141, -2261.899f, 3376.549f, 29.77859f, -2141.067f, 3376.773f, 1037.9f, 9.5f);
			break;
	}
	return uVar0;
}

int func_144()//Position - 0x6E2A
{
	if (unk_0x6E65ED1DEEDEE6F8(iLocal_141, -1773.944f, 3287.334f, 30f, -2029.776f, 2845.083f, 1250f, 255f))
	{
		return 0;
	}
	else if (unk_0x6E65ED1DEEDEE6F8(iLocal_141, -2725.889f, 3291.099f, 30f, -2009.182f, 2879.835f, 1250f, 180f))
	{
		return 1;
	}
	else if (unk_0x6E65ED1DEEDEE6F8(iLocal_141, -2442.026f, 3326.699f, 30f, -2033.928f, 3089.049f, 1250f, 205f))
	{
		return 2;
	}
	else if (unk_0x6E65ED1DEEDEE6F8(iLocal_141, -1917.165f, 3374.209f, 30f, -2016.791f, 3195.058f, 1250f, 86.25f))
	{
		return 3;
	}
	else if (unk_0x6E65ED1DEEDEE6F8(iLocal_141, -2192.753f, 3373.278f, 30f, -2191.544f, 3150.417f, 1250f, 150f))
	{
		return 4;
	}
	else if (unk_0x6E65ED1DEEDEE6F8(iLocal_141, -2077.663f, 3344.514f, 30f, -2191.544f, 3150.417f, 1250f, 140.5f))
	{
		return 5;
	}
	else if (unk_0x6E65ED1DEEDEE6F8(iLocal_141, -2861.755f, 3352.661f, 30f, -2715.871f, 3269.916f, 1250f, 90f))
	{
		return 6;
	}
	else if (unk_0x6E65ED1DEEDEE6F8(iLocal_141, -2005.574f, 3364.533f, 30f, -1977.569f, 3330.888f, 1250f, 100f))
	{
		return 7;
	}
	else if (unk_0x6E65ED1DEEDEE6F8(iLocal_141, -1682.235f, 3004.285f, 30f, -1942.747f, 2947.441f, 1250f, 248.75f))
	{
		return 8;
	}
	else if (unk_0x6E65ED1DEEDEE6F8(iLocal_141, -2393.295f, 2936.406f, 31.6801f, -2453.037f, 3006.863f, 52.31003f, 128f))
	{
		return 9;
	}
	else if (unk_0x6E65ED1DEEDEE6F8(iLocal_141, -2347.185f, 3023.83f, 31.56573f, -2517.33f, 2989.063f, 49.95644f, 127.25f))
	{
		return 10;
	}
	else if (unk_0x6E65ED1DEEDEE6F8(iLocal_141, -2259.922f, 3358.04f, 29.99972f, -2299.772f, 3385.79f, 38.06014f, 16f))
	{
		return 11;
	}
	else if (unk_0x6E65ED1DEEDEE6F8(iLocal_141, -2476.309f, 3363.914f, 31.67933f, -2431.981f, 3287.669f, 39.97826f, 214.25f))
	{
		return 12;
	}
	else if (unk_0x6E65ED1DEEDEE6F8(iLocal_141, -2103.081f, 2797.783f, 29.37864f, -2096.821f, 2874.423f, 57.80989f, 65.75f))
	{
		return 13;
	}
	else if (unk_0x6E65ED1DEEDEE6F8(iLocal_141, -1877.436f, 2783.151f, 31.80618f, -1797.873f, 2924.37f, 1307.111f, 88f))
	{
		return 14;
	}
	else if (unk_0x6E65ED1DEEDEE6F8(iLocal_141, -1761.116f, 2834.651f, 31.80622f, -1720.887f, 2906.419f, 1281.806f, 88f))
	{
		return 15;
	}
	else if (unk_0x6E65ED1DEEDEE6F8(iLocal_141, -1761.493f, 2817.68f, 32.37125f, -1769.704f, 2913.734f, 1281.807f, 88f))
	{
		return 16;
	}
	else if (unk_0x6E65ED1DEEDEE6F8(iLocal_141, -1879.297f, 2772.653f, 29.57795f, -1864.521f, 2825.472f, 1281.806f, 88f))
	{
		return 17;
	}
	else if (unk_0x6E65ED1DEEDEE6F8(iLocal_141, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9f))
	{
		return 18;
	}
	else if (unk_0x6E65ED1DEEDEE6F8(iLocal_141, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9.5f))
	{
		return 19;
	}
	else if (unk_0x6E65ED1DEEDEE6F8(iLocal_141, -2807.397f, 3264.226f, 29.92764f, -2744.79f, 3340.347f, 1037.804f, 9.5f))
	{
		return 20;
	}
	else if (unk_0x6E65ED1DEEDEE6F8(iLocal_141, -2808.236f, 3264.634f, 29.92764f, -2747.55f, 3187.8f, 1037.457f, 9.5f))
	{
		return 21;
	}
	else if (unk_0x6E65ED1DEEDEE6F8(iLocal_141, -2530.996f, 3064.151f, 29.71081f, -2748.557f, 3189.939f, 1037.457f, 9.5f))
	{
		return 22;
	}
	else if (unk_0x6E65ED1DEEDEE6F8(iLocal_141, -2533.902f, 3062.491f, 29.70715f, -2520.674f, 2996.817f, 1037.457f, 9.5f))
	{
		return 23;
	}
	else if (unk_0x6E65ED1DEEDEE6F8(iLocal_141, -2500.716f, 2927.103f, 29.45663f, -2445.696f, 2896.657f, 1037.68f, 9.5f))
	{
		return 24;
	}
	else if (unk_0x6E65ED1DEEDEE6F8(iLocal_141, -2020.543f, 2810.747f, 29.45658f, -1927.949f, 2785.779f, 1037.671f, 9.5f))
	{
		return 25;
	}
	else if (unk_0x6E65ED1DEEDEE6F8(iLocal_141, -2261.899f, 3376.549f, 29.77859f, -2141.067f, 3376.773f, 1037.9f, 9.5f))
	{
		return 26;
	}
	return -1;
}

void func_145(var uParam0, int iParam1)//Position - 0x73BF
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 0;
			break;
		
		case 1:
			*uParam0 = 1;
			break;
		
		case 2:
			*uParam0 = 2;
			break;
		
		case 3:
			*uParam0 = 3;
			break;
		
		case 4:
			*uParam0 = 4;
			break;
		
		case 5:
			*uParam0 = 5;
			break;
		
		case 6:
			*uParam0 = 19;
			break;
		
		case 7:
			*uParam0 = 20;
			break;
		
		case 8:
			*uParam0 = 21;
			break;
		
		case 9:
			*uParam0 = 32;
			break;
		
		case 10:
			*uParam0 = 36;
			break;
		
		case 11:
			*uParam0 = 40;
			break;
		
		case 12:
			*uParam0 = 41;
			break;
		
		case 13:
			*uParam0 = 43;
			break;
		
		case 14:
			*uParam0 = 44;
			break;
		
		case 15:
			*uParam0 = 45;
			break;
		
		case 16:
			*uParam0 = 46;
			break;
		
		case 17:
			*uParam0 = 47;
			break;
		
		case 18:
			*uParam0 = 48;
			break;
		
		case 19:
			*uParam0 = 49;
			break;
		
		case 20:
			*uParam0 = 50;
			break;
		
		case 21:
			*uParam0 = 53;
			break;
		
		case 22:
			*uParam0 = 54;
			break;
		
		case 23:
			*uParam0 = 55;
			break;
		
		case 24:
			*uParam0 = 56;
			break;
		
		case 25:
			*uParam0 = 57;
			break;
	}
}

int func_146()//Position - 0x7534
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_58(unk_0xB5CEFD608600A09F()))
	{
		return 1;
	}
	if (func_151(1))
	{
		iVar0 = func_150();
		if (iVar0 != func_36())
		{
			if (func_58(iVar0))
			{
				return 1;
			}
		}
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x3171C34AB3FE6F2E(iVar1);
		if (func_35(iVar2, 0, 1))
		{
			if (iVar2 != unk_0xB5CEFD608600A09F())
			{
				if (func_151(1))
				{
					if (func_148(unk_0xB5CEFD608600A09F(), iVar2))
					{
						if (func_58(iVar2))
						{
							return 1;
						}
					}
				}
				if (func_147(unk_0xA95CF30C72EB526E(unk_0xB5CEFD608600A09F()), unk_0xA95CF30C72EB526E(iVar2)))
				{
					iVar3 = unk_0x9FE9D386222EEE47(unk_0xA95CF30C72EB526E(iVar2), 0);
					if (unk_0x3187EF5798B5D209(iVar3, -1, 0) == unk_0xA95CF30C72EB526E(iVar2))
					{
						if (func_58(iVar2))
						{
							return 1;
						}
					}
				}
			}
		}
		iVar1++;
	}
	return 0;
}

int func_147(int iParam0, int iParam1)//Position - 0x7601
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0) && unk_0x724D816EA203A79E(iParam1))
	{
		if (!unk_0x1D403DFADBC2DE3C(iParam0, 0) && !unk_0x1D403DFADBC2DE3C(iParam1, 0))
		{
			if (unk_0x5237AF95232D78C5(iParam0, 0) && unk_0x5237AF95232D78C5(iParam1, 0))
			{
				iVar0 = unk_0x9FE9D386222EEE47(iParam0, 0);
				iVar1 = unk_0x9FE9D386222EEE47(iParam1, 0);
				if (unk_0x724D816EA203A79E(iVar0) && unk_0x724D816EA203A79E(iVar1))
				{
					if (iVar0 == iVar1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_148(int iParam0, int iParam1)//Position - 0x767D
{
	int iVar0;
	
	iVar0 = func_149(iParam0);
	if (!iVar0 == func_36())
	{
		if (iVar0 == func_149(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_149(int iParam0)//Position - 0x76A8
{
	if (iParam0 != func_36())
	{
		return Global_18C80F[iParam0 /*558*/].f_B;
	}
	return func_36();
}

var func_150()//Position - 0x76CB
{
	return Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B;
}

bool func_151(bool bParam0)//Position - 0x76E0
{
	return func_56(unk_0xB5CEFD608600A09F(), bParam0);
}

int func_152()//Position - 0x76F2
{
	var uVar0;
	
	func_159(&uVar0);
	if (Global_14083F == 0)
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			return 1;
		}
	}
	if (func_158())
	{
		return 1;
	}
	if (Global_25891C)
	{
		return 1;
	}
	if (func_157())
	{
		return 1;
	}
	if (func_156(157))
	{
		if (!func_155())
		{
			return 1;
		}
	}
	if (func_156(155))
	{
		return 1;
	}
	if (!unk_0x57D316754A262B34())
	{
		return 1;
	}
	if (func_153() != 0)
	{
		if (unk_0xB731B8C5BCE89836(func_153()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_153()//Position - 0x777C
{
	switch (func_154())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_154()//Position - 0x77B0
{
	return Global_62BD;
}

bool func_155()//Position - 0x77BB
{
	return Global_255A46.f_24A;
}

int func_156(int iParam0)//Position - 0x77CA
{
	if (unk_0xA1AC399BCBEE5B2D(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_157()//Position - 0x77E1
{
	return Global_258063;
}

bool func_158()//Position - 0x77ED
{
	return Global_255A46.f_245;
}

void func_159(var uParam0)//Position - 0x77FC
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	
	iVar0 = 0;
	while (iVar0 < unk_0x432AA9CCB3EE0174(1))
	{
		iVar1 = unk_0x2BFAC254CC069912(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x414AA1932D1C88E2(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 1113296425:
					func_160(iVar0);
					break;
				
				case -319074860:
					unk_0x414AA1932D1C88E2(1, iVar0, &vVar3, 4);
					if (vVar3.z == -1987561915)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_160(int iParam0)//Position - 0x786F
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x414AA1932D1C88E2(1, iParam0, &vVar0, 3))
	{
		if (func_35(vVar0.y, 1, 1))
		{
			iVar1 = unk_0xA95CF30C72EB526E(vVar0.y);
			if (unk_0x724D816EA203A79E(iVar1))
			{
				if (unk_0x5237AF95232D78C5(iVar1, 0))
				{
					iVar2 = unk_0x9FE9D386222EEE47(iVar1, 0);
					if (unk_0x403C891106DCABAF(iVar2, vVar0.z) && unk_0x32405B7614E36453())
					{
						if (func_161(iVar2, &bVar3))
						{
							unk_0xD5DC0505375F4D00(iVar2, vVar0.z);
						}
						if (bVar3)
						{
							unk_0x1E7A09C1710FB071(&iVar2);
						}
					}
				}
			}
		}
	}
}

int func_161(int iParam0, var uParam1)//Position - 0x78F0
{
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (!unk_0x5CAE759AE8219D20(iParam0))
		{
			if (unk_0x63B5FF8D34CBC98E(iParam0))
			{
				if (!unk_0xFF2234981505F7F4(unk_0x6F79ECA8C83E4357(iParam0)))
				{
					unk_0x77815D3407C6700D(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0xB248FAA35ED47DB9(iParam0, 0))
		{
			if (unk_0x4DF785C4DF542CD0(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_162()//Position - 0x794F
{
	if (unk_0xBC93E1C9C8F877D9(false, 0) != 5)
	{
		if (func_169(5, 0, 1))
		{
			if (unk_0xC77EC38683AB49CC(0) <= 5)
			{
				unk_0xD1CF2F876BAD2600(5);
			}
		}
	}
	if (unk_0x146F82F73FA40AB0(false, 0) != 3)
	{
		if (func_163(3, 0, 1))
		{
			if (unk_0x16EE8745DB04D52E(0) <= 3)
			{
				unk_0xA6E7E0EC9E48D44C(3);
			}
		}
	}
}

bool func_163(int iParam0, bool bParam1, bool bParam2)//Position - 0x799B
{
	return func_164(1, iParam0, 1, bParam1, bParam2);
}

int func_164(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x79AF
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xFA30DFD0084E92FE(Global_14FADF, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_168(iParam0) - func_167(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_167(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_168(iParam0) - func_166(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_167(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_168(iParam0) - func_167(iParam0, 1));
		}
		if (!bParam4 && Global_18402B[unk_0xB5CEFD608600A09F() /*770*/] != 3)
		{
			iVar1 = (iVar1 - func_165(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_165(int iParam0)//Position - 0x7A78
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_166(int iParam0)//Position - 0x7AB2
{
	switch (iParam0)
	{
		case 0:
			return Global_14FADF.f_1;
			break;
		
		case 1:
			return Global_14FADF.f_2;
			break;
		
		case 2:
			return Global_14FADF.f_3;
			break;
	}
	return 0;
}

int func_167(int iParam0, bool bParam1)//Position - 0x7AF8
{
	int iVar0;
	
	iVar0 = unk_0xB5CEFD608600A09F();
	switch (iParam0)
	{
		case 0:
			if (!unk_0x32405B7614E36453())
			{
				return Global_24FB5C[iVar0 /*406*/].f_CD;
			}
			else
			{
				return unk_0xBC93E1C9C8F877D9(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!unk_0x32405B7614E36453())
			{
				return Global_24FB5C[iVar0 /*406*/].f_CE;
			}
			else
			{
				return unk_0x146F82F73FA40AB0(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!unk_0x32405B7614E36453())
			{
				return Global_24FB5C[iVar0 /*406*/].f_CF;
			}
			else
			{
				return unk_0x2B3A16ECF7925A20(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_168(int iParam0)//Position - 0x7B95
{
	switch (iParam0)
	{
		case 0:
			return Global_14FAE7;
			break;
		
		case 1:
			return Global_14FAE8;
			break;
		
		case 2:
			return Global_14FAE9;
			break;
	}
	return 0;
}

bool func_169(int iParam0, bool bParam1, bool bParam2)//Position - 0x7BD5
{
	return func_164(0, iParam0, 1, bParam1, bParam2);
}

void func_170()//Position - 0x7BE9
{
	SYSTEM::WAIT(0);
}

void func_171()//Position - 0x7BF6
{
	int iVar0;
	
	if (unk_0x7AF0088ABFA713B6())
	{
		if (unk_0x0DE6397A2CB3EF75())
		{
			if (func_121())
			{
				func_122();
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x2DA8CA50A72528FB(Local_133.f_AC[iVar0]))
		{
			unk_0x07B8ECB35A4ED3AC(&(Local_133.f_AC[iVar0]));
		}
		iVar0++;
	}
	if (iLocal_138)
	{
		unk_0xAEC867D0DBB7AFEB(5);
		iLocal_138 = 0;
	}
	Global_19966C = 0;
	func_173();
	func_172();
}

void func_172()//Position - 0x7C62
{
	unk_0x95E4B6F3ED223F5A();
}

void func_173()//Position - 0x7C6E
{
	if (!Local_133.f_B0)
	{
		return;
	}
	if (unk_0xD6513D668481290A(joaat("s_m_y_marine_01")))
	{
		unk_0x2CA123B0622F495C(joaat("s_m_y_marine_01"));
	}
	if (unk_0xD6513D668481290A(joaat("lazer")))
	{
		unk_0x2CA123B0622F495C(joaat("lazer"));
	}
	if (unk_0xD6513D668481290A(joaat("s_m_y_pilot_01")))
	{
		unk_0x2CA123B0622F495C(joaat("s_m_y_pilot_01"));
	}
}

void func_174(struct<21> Param0)//Position - 0x7CC1
{
	func_178(func_179(Param0), Param0);
	func_176(0, -1, 0);
	unk_0xD1CF2F876BAD2600(5);
	unk_0xA6E7E0EC9E48D44C(3);
	unk_0x76AE988734CA7760(&Local_108, 27);
	unk_0xE45D6A3FD6454198(&Local_132, 257);
	unk_0x6C87EFD58B261C6F(0);
	if (!func_175())
	{
		func_171();
	}
	if (unk_0xE8A79675302ED812(3))
	{
		func_171();
	}
	Global_267214.f_180C = 0;
}

int func_175()//Position - 0x7D20
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x7AF0088ABFA713B6())
		{
			return 0;
		}
		if (unk_0xB3E1B1F67FB95F04())
		{
			return 1;
		}
		if (func_158())
		{
			return 0;
		}
		if (func_156(155))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}

int func_176(int iParam0, int iParam1, bool bParam2)//Position - 0x7D79
{
	int iVar0;
	
	iVar0 = unk_0x4796DAD7A8894E2F();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_172();
			}
			else
			{
				return 0;
			}
		}
		if (!func_177())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x7AF0088ABFA713B6())
				{
					if (!bParam2)
					{
						func_172();
					}
					else
					{
						return 0;
					}
				}
				if (func_158())
				{
					if (!bParam2)
					{
						func_172();
					}
					else
					{
						return 0;
					}
				}
				if (func_156(155))
				{
					if (!bParam2)
					{
						func_172();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xF5F5C6DD66B0FB2A())
			{
				if (!bParam2)
				{
					func_172();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = unk_0x4796DAD7A8894E2F();
	}
	if (iParam1 > -1)
	{
		Global_1406F4 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			if (!bParam2)
			{
				func_172();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xF5F5C6DD66B0FB2A())
	{
		if (!bParam2)
		{
			func_172();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_177()//Position - 0x7E8E
{
	return Global_14083F;
}

void func_178(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x7E9A
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		func_172();
	}
	unk_0xBF463BC3D6FFDE31(iParam0, 0, Param1.f_10);
}

int func_179(int iParam0)//Position - 0x7EB9
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 8;
		
		case 91:
			return 32;
		
		case 92:
			return 8;
		
		case 93:
			return 8;
		
		case 101:
			return 8;
		
		case 94:
			return 8;
		
		case 95:
			return 32;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 8;
		
		case 99:
			return 32;
		
		case 100:
			return 32;
		
		case 102:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 8;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 32;
		
		case 114:
			return 8;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 32;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 8;
		
		case 123:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 124:
			return 32;
		
		case 125:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 136:
			return 32;
		
		case 137:
			return 32;
		
		case 126:
			return 32;
		
		case 127:
			return 32;
		
		case 131:
			return 32;
		
		case 129:
			return 32;
		
		case 130:
			return 32;
		
		case 134:
			return 32;
		
		case 135:
			return 32;
		
		case 132:
			return 32;
		
		case 133:
			return 32;
		
		case 138:
			return 32;
		
		case 139:
			return 32;
		
		case 140:
			return 32;
		
		case 141:
			return 32;
		
		case 142:
			return 2;
		
		case 147:
			return 1;
		
		case 143:
			return 2;
		
		case 144:
			return 4;
		
		case 145:
			return 2;
		
		case 146:
			return 2;
		
		case 128:
			return 1;
		
		case 148:
			return 2;
		
		case 149:
		case 150:
		case 151:
		case 152:
		case 153:
		case 154:
			return 0;
		
		case 158:
			return 1;
		
		case 155:
			return 4;
		
		case 156:
			return 16;
		
		case 157:
			return 32;
		
		default:
	}
	return 0;
}

