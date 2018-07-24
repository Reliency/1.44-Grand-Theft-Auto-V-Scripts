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
	var uLocal_61 = 10;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 2;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 8;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 8;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	float fLocal_94 = 0f;
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
	struct<872> Local_105 = { 0, 0, 4, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 10, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 10, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 5, 0, 0, 0, 0, 0, 0 } ;
	struct<14> Local_106[32];
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	int iLocal_122[4] = { 0, 0, 0, 0 };
	struct<8> Local_123[30];
	var uLocal_124[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_125 = 0;
	var uLocal_126 = 0;
	int iLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	struct<21> Local_132 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_94 = ((0.05f + 0.275f) - 0.01f);
	iLocal_114 = -1;
	if (unk_0x7AF0088ABFA713B6() && func_948(unk_0xB5CEFD608600A09F(), 0, 1))
	{
		func_909(ScriptParam_132);
	}
	else
	{
		func_861();
	}
	while (true)
	{
		func_860();
		if (func_852())
		{
			func_861();
		}
		Global_196948.f_2 = Local_105.f_35F;
		Global_196948.f_3 = Local_105.f_360;
		switch (func_851(unk_0x6BAA0516CC970D99()))
		{
			case 0:
				if (func_850() == 1)
				{
					if (func_849())
					{
						func_848();
						if (func_847())
						{
							func_832(166, 1, -1, 0);
							unk_0xAEC867D0DBB7AFEB(3);
							func_831(0f);
							iLocal_113 = unk_0x84788C4CA5E15BDC(unk_0xBC25C936A095B5BA());
							unk_0x4106FAF8AA1D69D5(unk_0xBC25C936A095B5BA(), iLocal_112);
						}
						else
						{
							func_832(166, 0, -1, 0);
						}
						func_830();
						func_829();
						func_828();
						Local_106[unk_0x6BAA0516CC970D99() /*14*/] = 1;
					}
				}
				else if (func_850() == 4)
				{
					Local_106[unk_0x6BAA0516CC970D99() /*14*/] = 3;
				}
				break;
			
			case 1:
				if (func_822(1))
				{
					Local_106[unk_0x6BAA0516CC970D99() /*14*/] = 2;
				}
				if (func_850() == 1)
				{
					func_821();
					func_801();
					func_778();
					func_296();
					func_287();
					if (func_847() || func_285())
					{
						func_141(&(Global_14A4EA.f_215), &Global_14A4EA, 27, &(Global_14A4EA.f_1), &(Global_14A4EA.f_74), -1, 0, 0);
					}
					func_76();
				}
				else if (func_850() == 4)
				{
					Local_106[unk_0x6BAA0516CC970D99() /*14*/] = 3;
					func_73();
				}
				func_72();
				break;
			
			case 3:
				func_71(&(Local_105.f_34D));
				if (func_70(&(Local_105.f_34D)))
				{
					Local_106[unk_0x6BAA0516CC970D99() /*14*/] = 4;
				}
				break;
			
			case 2:
				Local_106[unk_0x6BAA0516CC970D99() /*14*/] = 4;
			
			case 4:
				func_861();
				break;
		}
		if (unk_0x0DE6397A2CB3EF75())
		{
			switch (func_850())
			{
				case 0:
					func_68();
					func_67();
					if (func_25())
					{
						unk_0x498B26CF846D31E2(&(Local_105.f_35F), &(Local_105.f_360));
						Local_105 = 1;
						Local_105.f_76 = unk_0x6BAA0516CC970D99();
						Local_105.f_77 = unk_0xB5CEFD608600A09F();
						func_832(166, 1, -1, 0);
					}
					break;
				
				case 1:
					func_21();
					func_15();
					func_11();
					func_4();
					if (func_2())
					{
						Local_105 = 4;
					}
					else if (func_1())
					{
						Local_105 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()//Position - 0x2C6
{
	if (Global_267214.f_1312.f_20)
	{
		Global_267214.f_1312.f_20 = 0;
		return 1;
	}
	return 0;
}

int func_2()//Position - 0x2E9
{
	if (func_3())
	{
		return 1;
	}
	if (unk_0xFA30DFD0084E92FE(Local_105.f_1, 2))
	{
		return 1;
	}
	return 0;
}

int func_3()//Position - 0x30D
{
	return 0;
}

void func_4()//Position - 0x316
{
	switch (Local_105.f_75)
	{
		case 0:
			func_9();
			func_5();
			if (unk_0xFA30DFD0084E92FE(Local_105.f_1, 1))
			{
				Local_105.f_75 = 2;
			}
			else if (unk_0xFA30DFD0084E92FE(Local_105.f_1, 3))
			{
				Local_105.f_75 = 2;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			break;
	}
}

void func_5()//Position - 0x36F
{
	if (!unk_0xFA30DFD0084E92FE(Local_105.f_1, 6))
	{
		if (!func_8(&(Local_105.f_351)))
		{
			func_7(&(Local_105.f_351), 0, 0);
		}
		else if (func_6(&(Local_105.f_351), 500, 0))
		{
			unk_0xF0059F27F7BB6680(&(Local_105.f_1), 6);
		}
	}
}

int func_6(var uParam0, int iParam1, bool bParam2)//Position - 0x3B8
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_7(uParam0, bParam2, 0);
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

void func_7(var uParam0, bool bParam1, bool bParam2)//Position - 0x416
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

bool func_8(var uParam0)//Position - 0x45B
{
	return uParam0->f_1;
}

void func_9()//Position - 0x467
{
	if (!func_8(&(Local_105.f_34F)))
	{
		func_7(&(Local_105.f_34F), 0, 0);
	}
	else if (func_6(&(Local_105.f_34F), func_10(), 0))
	{
		unk_0xF0059F27F7BB6680(&(Local_105.f_1), 3);
	}
}

int func_10()//Position - 0x4A4
{
	return Global_40001.f_3835;
}

void func_11()//Position - 0x4B3
{
	int iVar0;
	int iVar1;
	
	if (unk_0x0DE6397A2CB3EF75())
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			switch (Local_105.f_2[iVar0 /*26*/].f_11)
			{
				case 0:
					if (unk_0x8EA6CABD14F1B89A(Local_105.f_2[iVar0 /*26*/].f_1))
					{
						if (Local_105.f_2[iVar0 /*26*/] == 0)
						{
							if (unk_0x8EA6CABD14F1B89A(Local_105.f_2[iVar0 /*26*/].f_2))
							{
								Local_105.f_2[iVar0 /*26*/].f_11 = 1;
							}
						}
						else if (Local_105.f_2[iVar0 /*26*/] == 1)
						{
							Local_105.f_2[iVar0 /*26*/].f_11 = 5;
						}
						else
						{
							Local_105.f_2[iVar0 /*26*/].f_11 = 8;
						}
					}
					break;
				
				case 1:
					if (unk_0x8EA6CABD14F1B89A(Local_105.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_105.f_2[iVar0 /*26*/].f_1))
						{
							if (unk_0x8EA6CABD14F1B89A(Local_105.f_2[iVar0 /*26*/].f_2))
							{
								if (func_12(Local_105.f_2[iVar0 /*26*/].f_2))
								{
									if (unk_0x25EF720B1CAB1E23(unk_0xE48AD7BF7762E114(Local_105.f_2[iVar0 /*26*/].f_1), unk_0x19D7F09C2FABDDA0(Local_105.f_2[iVar0 /*26*/].f_2)))
									{
										if (unk_0xFA30DFD0084E92FE(Local_105.f_6D, iVar0))
										{
											unk_0xF0059F27F7BB6680(&(Local_105.f_6C), iVar0);
											Local_105.f_2[iVar0 /*26*/].f_11 = 2;
										}
										else if (unk_0xFA30DFD0084E92FE(Local_105.f_6E, iVar0))
										{
											unk_0xF0059F27F7BB6680(&(Local_105.f_6C), iVar0);
											Local_105.f_2[iVar0 /*26*/].f_11 = 2;
										}
										else if (unk_0xFA30DFD0084E92FE(Local_105.f_6F, iVar0))
										{
											unk_0xF0059F27F7BB6680(&(Local_105.f_6C), iVar0);
											Local_105.f_2[iVar0 /*26*/].f_11 = 2;
										}
										else if (unk_0xFA30DFD0084E92FE(Local_105.f_70, iVar0))
										{
											Local_105.f_2[iVar0 /*26*/].f_11 = 3;
										}
									}
									else
									{
										Local_105.f_2[iVar0 /*26*/].f_11 = 4;
									}
								}
								else
								{
									Local_105.f_2[iVar0 /*26*/].f_11 = 3;
								}
							}
						}
					}
					break;
				
				case 2:
					if (unk_0x8EA6CABD14F1B89A(Local_105.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_105.f_2[iVar0 /*26*/].f_1))
						{
							if (!unk_0xCBBE5AFE2CD2E9B6(unk_0xE48AD7BF7762E114(Local_105.f_2[iVar0 /*26*/].f_1)))
							{
								Local_105.f_2[iVar0 /*26*/].f_11 = 4;
							}
							else if (unk_0x8EA6CABD14F1B89A(Local_105.f_2[iVar0 /*26*/].f_2))
							{
								if (!func_12(Local_105.f_2[iVar0 /*26*/].f_2))
								{
									Local_105.f_2[iVar0 /*26*/].f_11 = 3;
								}
								else if (unk_0xFA30DFD0084E92FE(Local_105.f_70, iVar0))
								{
									Local_105.f_2[iVar0 /*26*/].f_11 = 3;
								}
							}
						}
					}
					break;
				
				case 3:
					if (unk_0x8EA6CABD14F1B89A(Local_105.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_105.f_2[iVar0 /*26*/].f_1))
						{
							if (!unk_0x5237AF95232D78C5(unk_0xE48AD7BF7762E114(Local_105.f_2[iVar0 /*26*/].f_1), 0))
							{
								Local_105.f_2[iVar0 /*26*/].f_11 = 4;
							}
						}
					}
					break;
				
				case 5:
					if (unk_0x8EA6CABD14F1B89A(Local_105.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_105.f_2[iVar0 /*26*/].f_1))
						{
							if (unk_0xFA30DFD0084E92FE(Local_105.f_6E, iVar0))
							{
								Local_105.f_2[iVar0 /*26*/].f_11 = 4;
							}
							else if (unk_0xFA30DFD0084E92FE(Local_105.f_6F, iVar0))
							{
								Local_105.f_2[iVar0 /*26*/].f_11 = 4;
							}
						}
					}
					break;
				
				case 8:
					if (unk_0x8EA6CABD14F1B89A(Local_105.f_2[iVar0 /*26*/].f_1))
					{
						if (Local_105.f_2[iVar0 /*26*/].f_18)
						{
							Local_105.f_2[iVar0 /*26*/].f_11 = 9;
						}
					}
					break;
				
				case 9:
					if (unk_0x8EA6CABD14F1B89A(Local_105.f_2[iVar0 /*26*/].f_1))
					{
						if (Local_105.f_2[iVar0 /*26*/].f_19)
						{
							Local_105.f_2[iVar0 /*26*/].f_11 = 6;
						}
					}
					break;
				
				case 4:
					break;
			}
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 3)
			{
				switch (Local_105.f_2[iVar0 /*26*/].f_12[iVar1])
				{
					case 0:
						if (unk_0x8EA6CABD14F1B89A(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_105.f_2[iVar0 /*26*/] == 0)
							{
								Local_105.f_2[iVar0 /*26*/].f_12[iVar1] = 1;
							}
							else if (Local_105.f_2[iVar0 /*26*/] == 2)
							{
								Local_105.f_2[iVar0 /*26*/].f_12[iVar1] = 8;
							}
						}
						break;
					
					case 1:
						if (unk_0x8EA6CABD14F1B89A(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_105.f_2[iVar0 /*26*/].f_11 == 2)
							{
								Local_105.f_2[iVar0 /*26*/].f_12[iVar1] = 7;
							}
							else if (Local_105.f_2[iVar0 /*26*/].f_11 == 3 || Local_105.f_2[iVar0 /*26*/].f_11 == 4)
							{
								Local_105.f_2[iVar0 /*26*/].f_12[iVar1] = 3;
							}
						}
						break;
					
					case 8:
						if (unk_0x8EA6CABD14F1B89A(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_105.f_2[iVar0 /*26*/].f_18)
							{
								Local_105.f_2[iVar0 /*26*/].f_12[iVar1] = 6;
							}
						}
						break;
					
					case 7:
						if (unk_0x8EA6CABD14F1B89A(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_105.f_2[iVar0 /*26*/].f_11 == 3 || Local_105.f_2[iVar0 /*26*/].f_11 == 4)
							{
								Local_105.f_2[iVar0 /*26*/].f_12[iVar1] = 3;
							}
						}
						break;
					
					case 3:
						if (unk_0x8EA6CABD14F1B89A(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (!func_14(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]))
							{
								if (!unk_0x5237AF95232D78C5(unk_0xE48AD7BF7762E114(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]), 0))
								{
									Local_105.f_2[iVar0 /*26*/].f_12[iVar1] = 6;
								}
							}
						}
						break;
					
					case 6:
						break;
				}
				iVar1++;
			}
			iVar0++;
		}
	}
}

int func_12(int iParam0)//Position - 0x9F3
{
	if (unk_0x7FFE36DB9042AF23(iParam0))
	{
		return !func_13(unk_0x19D7F09C2FABDDA0(iParam0));
	}
	return 0;
}

int func_13(int iParam0)//Position - 0xA13
{
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (unk_0x1D403DFADBC2DE3C(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xE59B7F5A03335350(iParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_14(int iParam0)//Position - 0xA4C
{
	if (unk_0x7FFE36DB9042AF23(iParam0))
	{
		return unk_0x36CEFBE9B745A58D(unk_0xE48AD7BF7762E114(iParam0));
	}
	return 1;
}

void func_15()//Position - 0xA6B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x8EA6CABD14F1B89A(Local_105.f_2[iVar0 /*26*/].f_2))
		{
			if (!unk_0xFA30DFD0084E92FE(Local_105.f_74, iVar0))
			{
				if (func_20(iVar0))
				{
					if (func_12(Local_105.f_2[iVar0 /*26*/].f_2))
					{
						func_16(iVar0);
						unk_0xF0059F27F7BB6680(&(Local_105.f_74), iVar0);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_16(int iParam0)//Position - 0xACE
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x81C86888AEA2F49B())
	{
		if (unk_0x05086B70D2CFEA6F(unk_0xCFA8A401AAD7BB5A(iVar0)))
		{
			iVar1 = unk_0x4ED43B67B3F05E0F(unk_0xCFA8A401AAD7BB5A(iVar0));
			if (!func_17(iVar1, 0))
			{
				unk_0x4D511FF0F0902CCD(unk_0x19D7F09C2FABDDA0(Local_105.f_2[iParam0 /*26*/].f_2), iVar1, 0);
			}
		}
		iVar0++;
	}
}

bool func_17(int iParam0, int iParam1)//Position - 0xB24
{
	bool bVar0;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		bVar0 = func_18(-1, 0) == 8;
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

int func_18(int iParam0, bool bParam1)//Position - 0xB6F
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_19();
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

int func_19()//Position - 0xBB0
{
	return Global_1407E0;
}

int func_20(int iParam0)//Position - 0xBBC
{
	int iVar0;
	
	if (!unk_0x8EA6CABD14F1B89A(Local_105.f_2[iParam0 /*26*/].f_1))
	{
		return 0;
	}
	if (!func_14(Local_105.f_2[iParam0 /*26*/].f_1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x8EA6CABD14F1B89A(Local_105.f_2[iParam0 /*26*/].f_3[iVar0]))
		{
			if (!func_14(Local_105.f_2[iParam0 /*26*/].f_3[iVar0]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_21()//Position - 0xC32
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar1 = 0;
	bVar2 = false;
	if (Local_105 != 4)
	{
		iLocal_109 = 0;
		while (iLocal_109 < unk_0x81C86888AEA2F49B())
		{
			if (unk_0x05086B70D2CFEA6F(unk_0xCFA8A401AAD7BB5A(iLocal_109)))
			{
				iVar3 = unk_0x4ED43B67B3F05E0F(unk_0xCFA8A401AAD7BB5A(iLocal_109));
				if (!func_17(iVar3, 0))
				{
					if (func_948(iVar3, 1, 1))
					{
					}
					func_24(iLocal_109);
					func_23(iLocal_109);
					if (!unk_0xFA30DFD0084E92FE(Local_105.f_1, 2))
					{
						if (!bVar2)
						{
							if ((unk_0xFA30DFD0084E92FE(Local_105.f_1, 1) || unk_0xFA30DFD0084E92FE(Local_105.f_1, 3)) || unk_0xFA30DFD0084E92FE(Local_105.f_1, 5))
							{
								if (!unk_0xFA30DFD0084E92FE(Local_106[iLocal_109 /*14*/].f_1, 4))
								{
									bVar2 = true;
								}
							}
							else
							{
								bVar2 = true;
							}
						}
					}
				}
			}
			else if (!unk_0xFA30DFD0084E92FE(Local_105.f_1, 5))
			{
				if (Local_105.f_76 > -1)
				{
					if (iLocal_109 == Local_105.f_76)
					{
						unk_0xF0059F27F7BB6680(&(Local_105.f_1), 5);
					}
				}
			}
			iLocal_109++;
		}
		func_22();
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (unk_0xFA30DFD0084E92FE(Local_105.f_71, iVar1))
			{
				iVar0++;
			}
			iVar1++;
		}
		if (Local_105.f_73 != iVar0)
		{
			Local_105.f_73 = iVar0;
		}
		if (!unk_0xFA30DFD0084E92FE(Local_105.f_1, 1))
		{
			if (iVar0 >= 4)
			{
				unk_0xF0059F27F7BB6680(&(Local_105.f_1), 1);
			}
		}
		if (!unk_0xFA30DFD0084E92FE(Local_105.f_1, 2))
		{
			if (!bVar2)
			{
				unk_0xF0059F27F7BB6680(&(Local_105.f_1), 2);
			}
		}
	}
}

void func_22()//Position - 0xD95
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x8EA6CABD14F1B89A(Local_105.f_2[iVar0 /*26*/].f_1))
		{
			if (!unk_0xFA30DFD0084E92FE(Local_105.f_71, iVar0))
			{
				if (!func_8(&(Local_105.f_355[iVar0 /*2*/])))
				{
					if (func_14(Local_105.f_2[iVar0 /*26*/].f_1))
					{
						func_7(&(Local_105.f_355[iVar0 /*2*/]), 0, 0);
					}
				}
				else if (func_6(&(Local_105.f_355[iVar0 /*2*/]), 10000, 0))
				{
					unk_0xF0059F27F7BB6680(&(Local_105.f_71), iVar0);
				}
			}
		}
		iVar0++;
	}
}

void func_23(int iParam0)//Position - 0xE20
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0xFA30DFD0084E92FE(Local_105.f_6D, iVar0))
		{
			if (unk_0xFA30DFD0084E92FE(Local_106[iParam0 /*14*/].f_5, iVar0))
			{
				unk_0xF0059F27F7BB6680(&(Local_105.f_6D), iVar0);
			}
		}
		if (!unk_0xFA30DFD0084E92FE(Local_105.f_6E, iVar0))
		{
			if (unk_0xFA30DFD0084E92FE(Local_106[iParam0 /*14*/].f_2, iVar0))
			{
				unk_0xF0059F27F7BB6680(&(Local_105.f_6E), iVar0);
			}
		}
		if (!unk_0xFA30DFD0084E92FE(Local_105.f_70, iVar0))
		{
			if (unk_0xFA30DFD0084E92FE(Local_106[iParam0 /*14*/].f_3, iVar0))
			{
				unk_0xF0059F27F7BB6680(&(Local_105.f_70), iVar0);
			}
		}
		if (!unk_0xFA30DFD0084E92FE(Local_105.f_6F, iVar0))
		{
			if (unk_0xFA30DFD0084E92FE(Local_106[iParam0 /*14*/].f_4, iVar0))
			{
				unk_0xF0059F27F7BB6680(&(Local_105.f_6F), iVar0);
			}
		}
		if (!unk_0xFA30DFD0084E92FE(Local_105.f_71, iVar0))
		{
			if (unk_0xFA30DFD0084E92FE(Local_106[iParam0 /*14*/].f_6, iVar0))
			{
				unk_0xF0059F27F7BB6680(&(Local_105.f_71), iVar0);
			}
			else if (unk_0xFA30DFD0084E92FE(Local_106[iParam0 /*14*/].f_7, iVar0))
			{
				unk_0xF0059F27F7BB6680(&(Local_105.f_71), iVar0);
			}
		}
		if (Local_105.f_2[iVar0 /*26*/] == 2)
		{
			if (!Local_105.f_2[iVar0 /*26*/].f_18)
			{
				if (unk_0xFA30DFD0084E92FE(Local_106[iParam0 /*14*/].f_C, iVar0))
				{
					Local_105.f_2[iVar0 /*26*/].f_18 = 1;
				}
			}
			if (!Local_105.f_2[iVar0 /*26*/].f_19)
			{
				if (unk_0xFA30DFD0084E92FE(Local_106[iParam0 /*14*/].f_D, iVar0))
				{
					Local_105.f_2[iVar0 /*26*/].f_19 = 1;
				}
			}
		}
		iVar0++;
	}
}

void func_24(int iParam0)//Position - 0xF8D
{
	int iVar0;
	
	if (!unk_0xFA30DFD0084E92FE(Local_105.f_72, iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (unk_0x8EA6CABD14F1B89A(Local_105.f_2[iVar0 /*26*/].f_2))
			{
				if (unk_0x8EA6CABD14F1B89A(Local_105.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_105.f_2[iVar0 /*26*/].f_1))
					{
						if (func_12(Local_105.f_2[iVar0 /*26*/].f_2))
						{
							unk_0x4D511FF0F0902CCD(unk_0x19D7F09C2FABDDA0(Local_105.f_2[iVar0 /*26*/].f_2), unk_0x4ED43B67B3F05E0F(unk_0xCFA8A401AAD7BB5A(iParam0)), 1);
							unk_0xF0059F27F7BB6680(&(Local_105.f_72), iParam0);
						}
					}
				}
			}
			else
			{
				unk_0xF0059F27F7BB6680(&(Local_105.f_72), iParam0);
			}
			iVar0++;
		}
	}
}

int func_25()//Position - 0x102E
{
	if (!func_44())
	{
		return 0;
	}
	if (!func_33())
	{
		return 0;
	}
	if (!func_26())
	{
		return 0;
	}
	return 1;
}

int func_26()//Position - 0x105B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_32(iVar0))
		{
			func_29(iVar0);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_32(iVar0))
		{
			if (!func_27(iVar0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_27(int iParam0)//Position - 0x10B2
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = Local_105.f_2[iParam0 /*26*/].f_16;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		vVar2 = { Local_105.f_7B[iVar0 /*36*/].f_12[iVar1 /*3*/] };
		if (!func_28(vVar2, 0f, 0f, 0f, 0))
		{
			if (!unk_0x8EA6CABD14F1B89A(Local_105.f_2[iParam0 /*26*/].f_7[iVar1]))
			{
				return 0;
			}
		}
		iVar1++;
	}
	return 1;
}

bool func_28(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x1117
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_29(int iParam0)//Position - 0x115E
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar4;
	
	iVar0 = Local_105.f_2[iParam0 /*26*/].f_16;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (!unk_0x8EA6CABD14F1B89A(Local_105.f_2[iParam0 /*26*/].f_7[iVar1]))
		{
			vVar3 = { Local_105.f_7B[iVar0 /*36*/].f_12[iVar1 /*3*/] };
			fVar4 = Local_105.f_7B[iVar0 /*36*/].f_1C[iVar1];
			if (!func_28(vVar3, 0f, 0f, 0f, 0))
			{
				iVar2 = Local_105.f_7B[iVar0 /*36*/].f_20[iVar1];
				if (unk_0x424470694C82EFFA(1))
				{
					if (func_31(iVar2))
					{
						if (!unk_0xFA30DFD0084E92FE(Local_105.f_2[iParam0 /*26*/].f_17, iVar1))
						{
							unk_0x6C5F5B5F6894CCE3(vVar3, 10f, 1, 0, 0, true);
							unk_0xF0059F27F7BB6680(&(Local_105.f_2[iParam0 /*26*/].f_17), iVar1);
						}
						if (func_30(&(Local_105.f_2[iParam0 /*26*/].f_7[iVar1]), iVar2, vVar3, fVar4, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
						{
							unk_0x6364EF367CF6875E(unk_0x19D7F09C2FABDDA0(Local_105.f_2[iParam0 /*26*/].f_7[iVar1]), 1);
							unk_0x60DE8B477F0A634B(unk_0x19D7F09C2FABDDA0(Local_105.f_2[iParam0 /*26*/].f_7[iVar1]), 1);
							unk_0x378958EC44E25CD8(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_7[iVar1]), 1, iLocal_112);
							unk_0xD38EB677CBE7440A(unk_0x19D7F09C2FABDDA0(Local_105.f_2[iParam0 /*26*/].f_7[iVar1]), false, 0);
							unk_0x8389D644A7CF28CF(unk_0x19D7F09C2FABDDA0(Local_105.f_2[iParam0 /*26*/].f_7[iVar1]), 0);
						}
					}
				}
			}
		}
		iVar1++;
	}
	return 0;
}

int func_30(var uParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x12C4
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
	iVar1 = unk_0x61C05BF08A1E0EFE(iParam1, vParam2, fParam3, bParam5, bParam4, bParam12);
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
			unk_0x656194E145691D3E(iVar1, bParam8);
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

bool func_31(int iParam0)//Position - 0x13BE
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xF243B7A14FCFD0F4(iParam0);
	return unk_0xD6513D668481290A(iParam0);
}

bool func_32(int iParam0)//Position - 0x13DC
{
	int iVar0;
	
	if (Local_105.f_2[iParam0 /*26*/] != 2)
	{
		return 0;
	}
	iVar0 = Local_105.f_2[iParam0 /*26*/].f_16;
	return !func_28(Local_105.f_7B[iVar0 /*36*/].f_12[0 /*3*/], 0f, 0f, 0f, 0);
}

int func_33()//Position - 0x1418
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_43(iVar0))
		{
			func_35(iVar0);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_43(iVar0))
		{
			if (!func_34(iVar0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_34(int iParam0)//Position - 0x146F
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	
	iVar1 = Local_105.f_2[iParam0 /*26*/];
	iVar2 = Local_105.f_2[iParam0 /*26*/].f_16;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x8EA6CABD14F1B89A(Local_105.f_2[iParam0 /*26*/].f_3[iVar0]))
		{
			if (iVar1 == 0)
			{
				return 0;
			}
			else if (iVar1 == 2)
			{
				vVar3 = { Local_105.f_7B[iVar2 /*36*/].f_4[iVar0 /*3*/] };
				if (!func_28(vVar3, 0f, 0f, 0f, 0))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int func_35(int iParam0)//Position - 0x14F1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	float fVar6;
	
	if (unk_0x8EA6CABD14F1B89A(Local_105.f_2[iParam0 /*26*/].f_1))
	{
		switch (Local_105.f_2[iParam0 /*26*/])
		{
			case 0:
				if (func_42(Local_105.f_2[iParam0 /*26*/].f_2))
				{
					if (unk_0x8EA6CABD14F1B89A(Local_105.f_2[iParam0 /*26*/].f_2))
					{
						iVar0 = func_41();
						iVar1 = 0;
						while (iVar1 < 3)
						{
							if (!unk_0x8EA6CABD14F1B89A(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]))
							{
								if (unk_0x88E77A85289CC883(1))
								{
									if (func_31(iVar0))
									{
										if (func_40(&(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), Local_105.f_2[iParam0 /*26*/].f_2, 22, iVar0, iVar1, 1, 1, 1))
										{
											unk_0xF82197F205B9D8FD(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), true);
											unk_0xE43AD8CB1B4DDED9(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), 1, 0);
											unk_0x2E35C4FA5F0ED22F(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), true);
											unk_0x4106FAF8AA1D69D5(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), Global_18079D);
											unk_0x378958EC44E25CD8(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), 1, iLocal_112);
											unk_0x566684DB6DAC0531(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), true);
											unk_0x7A535CE1F001F3FE(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), joaat("weapon_microsmg"), 99999999, false, true);
											unk_0x91629AC1E1F78419(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), 3, false);
											unk_0x91629AC1E1F78419(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), 5, true);
											unk_0x91629AC1E1F78419(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), 2, true);
										}
									}
								}
							}
							iVar1++;
						}
					}
				}
				break;
			
			case 2:
				iVar0 = func_41();
				iVar1 = 0;
				while (iVar1 < 3)
				{
					if (!unk_0x8EA6CABD14F1B89A(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]))
					{
						if (unk_0x88E77A85289CC883(1))
						{
							if (func_31(iVar0))
							{
								iVar2 = Local_105.f_2[iParam0 /*26*/].f_16;
								vVar5 = { Local_105.f_7B[iVar2 /*36*/].f_4[iVar1 /*3*/] };
								fVar6 = Local_105.f_7B[iVar2 /*36*/].f_E[iVar1];
								if (!func_28(vVar5, 0f, 0f, 0f, 0))
								{
									if (func_39(&(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), 22, iVar0, vVar5, fVar6, 1, 1, 1))
									{
										unk_0xF82197F205B9D8FD(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), true);
										unk_0xE43AD8CB1B4DDED9(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), 1, 0);
										unk_0x2E35C4FA5F0ED22F(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), true);
										unk_0x4106FAF8AA1D69D5(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), Global_18079D);
										unk_0x378958EC44E25CD8(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), 1, iLocal_112);
										unk_0x7A535CE1F001F3FE(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), joaat("weapon_carbinerifle"), 99999999, false, true);
										unk_0x54480313BB3E8DD0(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										unk_0xC8FD3EBBB90E8D7F(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), 42, true);
										unk_0x5BF507BADF17CFE4(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										unk_0x91629AC1E1F78419(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), 43, true);
										unk_0x91629AC1E1F78419(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), 44, true);
										unk_0xEB061E1EBFED4D59(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										unk_0xE95574194EEDAEF7(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), vVar5, 7f, 0, 0);
										unk_0xC8FD3EBBB90E8D7F(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), 132, true);
										iVar3 = func_38();
										unk_0xD62A17B791ABB06F(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), iVar3);
										unk_0x65E471E4A2D56226(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), iVar3, 0);
										iVar4 = func_37();
										unk_0x6BBC364B0AA788E8(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), iVar4);
										unk_0xFC3C88E2313FA926(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), func_36());
										unk_0x751846449040F7EC(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), 0);
										unk_0xC8FD3EBBB90E8D7F(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_3[iVar1]), 281, true);
									}
								}
							}
						}
					}
					iVar1++;
				}
				break;
			}
	}
	return 0;
}

int func_36()//Position - 0x1951
{
	return SYSTEM::ROUND(Global_40001.f_383D);
}

int func_37()//Position - 0x1964
{
	return 200;
}

var func_38()//Position - 0x196E
{
	return Global_40001.f_383C;
}

int func_39(var uParam0, int iParam1, int iParam2, vector3 vParam3, float fParam4, bool bParam5, int iParam6, bool bParam7)//Position - 0x197D
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
		unk_0x656194E145691D3E(iVar0, bParam7);
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

int func_40(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)//Position - 0x19DC
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
		unk_0x656194E145691D3E(unk_0xE48AD7BF7762E114(*uParam0), bParam7);
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

int func_41()//Position - 0x1A64
{
	return joaat("s_m_m_chemsec_01");
}

int func_42(int iParam0)//Position - 0x1A71
{
	if (unk_0x7FFE36DB9042AF23(iParam0))
	{
		unk_0xCDF25F6ADC88CCB4(iParam0);
		return unk_0x89B5CBCE9D131B32(iParam0);
	}
	return 0;
}

bool func_43(int iParam0)//Position - 0x1A93
{
	return (Local_105.f_2[iParam0 /*26*/] == 0 || Local_105.f_2[iParam0 /*26*/] == 2);
}

int func_44()//Position - 0x1AB5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_46(iVar0);
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_45(iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_45(int iParam0)//Position - 0x1AFA
{
	switch (Local_105.f_2[iParam0 /*26*/])
	{
		case 0:
			if (unk_0x8EA6CABD14F1B89A(Local_105.f_2[iParam0 /*26*/].f_1))
			{
				if (unk_0x8EA6CABD14F1B89A(Local_105.f_2[iParam0 /*26*/].f_2))
				{
					return 1;
				}
			}
			break;
		
		case 1:
		case 2:
			if (unk_0x8EA6CABD14F1B89A(Local_105.f_2[iParam0 /*26*/].f_1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_46(int iParam0)//Position - 0x1B63
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	
	switch (Local_105.f_2[iParam0 /*26*/])
	{
		case 0:
			if (!unk_0x8EA6CABD14F1B89A(Local_105.f_2[iParam0 /*26*/].f_2))
			{
				iVar0 = Local_105.f_2[iParam0 /*26*/].f_B;
				if (unk_0x424470694C82EFFA(1))
				{
					if (func_31(iVar0))
					{
						if (func_28(Local_105.f_2[iParam0 /*26*/].f_D, 0f, 0f, 0f, 0))
						{
							if (func_52(iParam0, &vVar2, &uVar3, &uVar4))
							{
								Local_105.f_2[iParam0 /*26*/].f_D = { vVar2 };
								Local_105.f_2[iParam0 /*26*/].f_10 = uVar3;
							}
						}
						if (!func_28(Local_105.f_2[iParam0 /*26*/].f_D, 0f, 0f, 0f, 0))
						{
							if (func_30(&(Local_105.f_2[iParam0 /*26*/].f_2), iVar0, Local_105.f_2[iParam0 /*26*/].f_D, Local_105.f_2[iParam0 /*26*/].f_10, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
							{
								unk_0x60DE8B477F0A634B(unk_0x19D7F09C2FABDDA0(Local_105.f_2[iParam0 /*26*/].f_2), 1);
								unk_0x6364EF367CF6875E(unk_0x19D7F09C2FABDDA0(Local_105.f_2[iParam0 /*26*/].f_2), 1);
								unk_0x2D655AA68FA1736B(unk_0x19D7F09C2FABDDA0(Local_105.f_2[iParam0 /*26*/].f_2), true, true, 0);
								unk_0x378958EC44E25CD8(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_2), 1, iLocal_112);
								unk_0xE82050D41B744FF3(unk_0x19D7F09C2FABDDA0(Local_105.f_2[iParam0 /*26*/].f_2), false);
								unk_0xD38EB677CBE7440A(unk_0x19D7F09C2FABDDA0(Local_105.f_2[iParam0 /*26*/].f_2), false, 0);
								unk_0xB71D41C0310C93DE(unk_0x19D7F09C2FABDDA0(Local_105.f_2[iParam0 /*26*/].f_2), true, 1);
								unk_0xDB35A2F9333ABEC5(unk_0x19D7F09C2FABDDA0(Local_105.f_2[iParam0 /*26*/].f_2), true);
								unk_0xE8DCC180E2F61CFC(unk_0x19D7F09C2FABDDA0(Local_105.f_2[iParam0 /*26*/].f_2), 1);
								unk_0x8389D644A7CF28CF(unk_0x19D7F09C2FABDDA0(Local_105.f_2[iParam0 /*26*/].f_2), 0);
								unk_0xA1BA0675804B896A(unk_0x19D7F09C2FABDDA0(Local_105.f_2[iParam0 /*26*/].f_2), 0);
							}
						}
					}
				}
			}
			if (unk_0x8EA6CABD14F1B89A(Local_105.f_2[iParam0 /*26*/].f_2))
			{
				if (!unk_0x8EA6CABD14F1B89A(Local_105.f_2[iParam0 /*26*/].f_1))
				{
					if (unk_0x88E77A85289CC883(1))
					{
						iVar1 = Local_105.f_2[iParam0 /*26*/].f_C;
						if (func_31(iVar1))
						{
							if (func_40(&(Local_105.f_2[iParam0 /*26*/].f_1), Local_105.f_2[iParam0 /*26*/].f_2, 22, iVar1, -1, 1, 1, 1))
							{
								unk_0xF82197F205B9D8FD(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_1), true);
								unk_0xE43AD8CB1B4DDED9(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_1), 1, 0);
								unk_0x2E35C4FA5F0ED22F(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_1), true);
								unk_0x4106FAF8AA1D69D5(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_1), Global_18079D);
								unk_0x378958EC44E25CD8(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_1), 1, iLocal_112);
								unk_0x566684DB6DAC0531(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_1), true);
								unk_0xF0059F27F7BB6680(&(Local_105.f_6B), iParam0);
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0x8EA6CABD14F1B89A(Local_105.f_2[iParam0 /*26*/].f_1))
			{
				if (unk_0x88E77A85289CC883(1))
				{
					iVar1 = Local_105.f_2[iParam0 /*26*/].f_C;
					if (func_31(iVar1))
					{
						if (func_28(Local_105.f_2[iParam0 /*26*/].f_D, 0f, 0f, 0f, 0))
						{
							if (func_52(iParam0, &vVar2, &uVar3, &uVar4))
							{
								Local_105.f_2[iParam0 /*26*/].f_D = { vVar2 };
								Local_105.f_2[iParam0 /*26*/].f_10 = uVar3;
							}
						}
						if (!func_28(Local_105.f_2[iParam0 /*26*/].f_D, 0f, 0f, 0f, 0))
						{
							if (func_39(&(Local_105.f_2[iParam0 /*26*/].f_1), 22, iVar1, Local_105.f_2[iParam0 /*26*/].f_D, Local_105.f_2[iParam0 /*26*/].f_10, 1, 1, 1))
							{
								unk_0xF82197F205B9D8FD(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_1), true);
								unk_0xE43AD8CB1B4DDED9(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_1), 1, 0);
								unk_0x2E35C4FA5F0ED22F(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_1), true);
								unk_0x4106FAF8AA1D69D5(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_1), Global_18079D);
								unk_0x378958EC44E25CD8(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_1), 1, iLocal_112);
								unk_0x566684DB6DAC0531(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_1), true);
								unk_0xF0059F27F7BB6680(&(Local_105.f_6B), iParam0);
							}
						}
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0x8EA6CABD14F1B89A(Local_105.f_2[iParam0 /*26*/].f_1))
			{
				if (unk_0x88E77A85289CC883(1))
				{
					iVar1 = Local_105.f_2[iParam0 /*26*/].f_C;
					if (func_31(iVar1))
					{
						if (func_28(Local_105.f_2[iParam0 /*26*/].f_D, 0f, 0f, 0f, 0))
						{
							if (func_52(iParam0, &vVar2, &uVar3, &uVar4))
							{
								Local_105.f_2[iParam0 /*26*/].f_D = { vVar2 };
								Local_105.f_2[iParam0 /*26*/].f_10 = uVar3;
								Local_105.f_2[iParam0 /*26*/].f_16 = uVar4;
								func_51(vVar2);
							}
						}
						if (!func_28(Local_105.f_2[iParam0 /*26*/].f_D, 0f, 0f, 0f, 0))
						{
							if (func_39(&(Local_105.f_2[iParam0 /*26*/].f_1), 22, iVar1, Local_105.f_2[iParam0 /*26*/].f_D, Local_105.f_2[iParam0 /*26*/].f_10, 1, 1, 1))
							{
								unk_0xF82197F205B9D8FD(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_1), true);
								unk_0xE43AD8CB1B4DDED9(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_1), 1, 0);
								unk_0x2E35C4FA5F0ED22F(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_1), true);
								unk_0x4106FAF8AA1D69D5(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_1), Global_18079D);
								unk_0x378958EC44E25CD8(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_1), 1, iLocal_112);
								unk_0x566684DB6DAC0531(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_1), true);
								unk_0x54480313BB3E8DD0(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_1), 1);
								unk_0xC8FD3EBBB90E8D7F(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_1), 42, true);
								unk_0x5BF507BADF17CFE4(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_1), 1);
								unk_0x91629AC1E1F78419(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_1), 11, true);
								unk_0x91629AC1E1F78419(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_1), 44, true);
								unk_0xEB061E1EBFED4D59(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_1), 1);
								unk_0x7A535CE1F001F3FE(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_1), joaat("weapon_pistol"), 99999999, false, true);
								fVar7 = func_50(iParam0);
								unk_0xE95574194EEDAEF7(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_1), Local_105.f_2[iParam0 /*26*/].f_D, fVar7, 0, 0);
								unk_0xC8FD3EBBB90E8D7F(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_1), 132, true);
								unk_0xC8FD3EBBB90E8D7F(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_1), 281, true);
								iVar5 = func_49();
								unk_0xD62A17B791ABB06F(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_1), iVar5);
								unk_0x65E471E4A2D56226(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_1), iVar5, 0);
								iVar6 = func_48();
								unk_0x6BBC364B0AA788E8(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_1), iVar6);
								unk_0xFC3C88E2313FA926(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_1), func_47());
								unk_0xB71D41C0310C93DE(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_1), true, 1);
								unk_0xF0059F27F7BB6680(&(Local_105.f_6B), iParam0);
							}
						}
					}
				}
			}
			break;
	}
	return 0;
}

int func_47()//Position - 0x2201
{
	return SYSTEM::ROUND(Global_40001.f_383B);
}

int func_48()//Position - 0x2214
{
	return 100;
}

var func_49()//Position - 0x221E
{
	return Global_40001.f_383A;
}

float func_50(int iParam0)//Position - 0x222D
{
	if (func_28(Local_105.f_2[iParam0 /*26*/].f_D, -1597.604f, 3083.673f, 31.5661f, 0))
	{
		return 10f;
	}
	return 3f;
}

void func_51(vector3 vParam0)//Position - 0x2261
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (iVar0 == -1)
		{
			if (!unk_0xFA30DFD0084E92FE(Local_105.f_367, iVar1))
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 < 0)
	{
		return;
	}
	if (func_28(vParam0, -1596.399f, 3058.814f, 31.5661f, 0))
	{
		Local_105.f_361[iVar0] = unk_0x1DAA351326EA3537(-1631.312f, 3027.889f, 30.8859f, -1560.55f, 3137.933f, 33.9384f, 1, 1, 1, 1);
		unk_0xF0059F27F7BB6680(&(Local_105.f_367), iVar0);
	}
	if (func_28(vParam0, 2328.066f, 2576.558f, 45.6677f, 0))
	{
		Local_105.f_361[iVar0] = unk_0x1DAA351326EA3537(2266.34f, 2486.074f, 54.976f, 2413.662f, 2679.982f, 43.5461f, 1, 1, 1, 1);
		unk_0xF0059F27F7BB6680(&(Local_105.f_367), iVar0);
	}
	if (func_28(vParam0, -46.8187f, 1946.659f, 189.5608f, 0))
	{
		Local_105.f_361[iVar0] = unk_0x1DAA351326EA3537(-65.1142f, 1905.577f, 194.9851f, -20.5564f, 2013.468f, 171.5573f, 1, 1, 1, 1);
		unk_0xF0059F27F7BB6680(&(Local_105.f_367), iVar0);
	}
}

int func_52(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x239F
{
	int iVar0;
	
	switch (Local_105.f_2[iParam0 /*26*/])
	{
		case 1:
			iVar0 = unk_0x491B2241281A03B7(0, Local_105.f_7A);
			if (!func_28(Local_105.f_7B[iVar0 /*36*/], 0f, 0f, 0f, 0))
			{
				if (func_53(Local_105.f_7B[iVar0 /*36*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					*uParam1 = { Local_105.f_7B[iVar0 /*36*/] };
					*uParam2 = Local_105.f_7B[iVar0 /*36*/].f_3;
					Local_105.f_7B[iVar0 /*36*/] = { 0f, 0f, 0f };
					return 1;
				}
			}
			break;
		
		case 2:
			iVar0 = unk_0x491B2241281A03B7(0, Local_105.f_7A);
			if (!func_28(Local_105.f_7B[iVar0 /*36*/], 0f, 0f, 0f, 0))
			{
				if (func_53(Local_105.f_7B[iVar0 /*36*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					*uParam1 = { Local_105.f_7B[iVar0 /*36*/] };
					*uParam2 = Local_105.f_7B[iVar0 /*36*/].f_3;
					*uParam3 = iVar0;
					Local_105.f_7B[iVar0 /*36*/] = { 0f, 0f, 0f };
					return 1;
				}
			}
			break;
		
		case 0:
			iVar0 = unk_0x491B2241281A03B7(0, 10);
			if (!func_28(Local_105.f_1E4[iVar0 /*36*/], 0f, 0f, 0f, 0))
			{
				if (func_53(Local_105.f_1E4[iVar0 /*36*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					*uParam1 = { Local_105.f_1E4[iVar0 /*36*/] };
					*uParam2 = Local_105.f_1E4[iVar0 /*36*/].f_3;
					Local_105.f_1E4[iVar0 /*36*/] = { 0f, 0f, 0f };
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_53(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)//Position - 0x2567
{
	Global_24B2CE.f_2 = 0;
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
		if (unk_0x85BF1D9693A8E47F(vParam0, fParam3, iParam16))
		{
			return 0;
		}
	}
	Global_24B2CE.f_2++;
	if (bParam11)
	{
		if (unk_0x90629C6D0C640733(vParam0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_24B2CE.f_2++;
	if (fParam12 > 0f)
	{
		if (func_60(vParam0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_24B2CE.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_54(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_24B2CE.f_2++;
	return 1;
}

int func_54(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)//Position - 0x2678
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_948(unk_0xB5CEFD608600A09F(), 1, 1))
		{
			if (!unk_0x17FAADF9916EF741())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0xF0F2FC9DE291567F(func_56(unk_0xB5CEFD608600A09F()), vParam0, true) <= (fVar2 + fParam1))
				{
					if (unk_0x33CC9445B2DF9387(vParam0, fParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_948(iVar1, 1, 1))
		{
			if (!func_17(iVar1, 0) && unk_0x75206900382D1E30(unk_0xB5CEFD608600A09F(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0xB5CEFD608600A09F()))
				{
					if ((func_55(iVar1) || !bParam8) && !Global_24FB5C[iVar1 /*406*/].f_FF)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!unk_0x343CB262BF0CDF5A(iVar1) == -1)
							{
								if (unk_0x343CB262BF0CDF5A(iVar1) == unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && unk_0x343CB262BF0CDF5A(iVar1) != unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()))) || unk_0x343CB262BF0CDF5A(iVar1) == -1)
							{
								if (unk_0xF0F2FC9DE291567F(func_56(iVar1), vParam0, true) <= (fVar2 + fParam1))
								{
									if (unk_0xCFC6F6FA0A38CF65(iVar1, vParam0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x343CB262BF0CDF5A(iVar1) != iParam6 || unk_0x343CB262BF0CDF5A(iVar1) == -1)
						{
							if (unk_0xF0F2FC9DE291567F(func_56(iVar1), vParam0, true) <= (fVar2 + fParam1))
							{
								if (unk_0xCFC6F6FA0A38CF65(iVar1, vParam0, fParam1))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_55(int iParam0)//Position - 0x282F
{
	if (unk_0xE904009319A7A43E(unk_0xA95CF30C72EB526E(iParam0)) || Global_24FB5C[iParam0 /*406*/].f_F1)
	{
		return 1;
	}
	return 0;
}

Vector3 func_56(int iParam0)//Position - 0x285A
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_59() && Global_18402B[iVar0 /*770*/].f_2EA) && !func_58(Global_18402B[iVar0 /*770*/].f_2EB))
	{
		return Global_18402B[iVar0 /*770*/].f_2EB;
	}
	return func_57(iParam0);
}

Vector3 func_57(int iParam0)//Position - 0x28AD
{
	return unk_0x541C2AEF053615BC(unk_0xA95CF30C72EB526E(iParam0), false);
}

int func_58(vector3 vParam0)//Position - 0x28C0
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_59()//Position - 0x28EA
{
	return Global_255A46.f_10;
}

int func_60(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)//Position - 0x28F8
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && unk_0xB5CEFD608600A09F() != iVar1) || iParam6 == 0)
		{
			if (func_948(iVar1, bParam2, bParam3))
			{
				if (unk_0x75206900382D1E30(unk_0xB5CEFD608600A09F(), iVar1))
				{
					if (!bParam5 || (!unk_0x36CEFBE9B745A58D(unk_0xA95CF30C72EB526E(iVar1)) && func_55(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()) != unk_0x343CB262BF0CDF5A(iVar1))) || unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()) == -1)
						{
							if (((unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()) == -1 && uParam7) && bParam4) && func_61(iVar1))
							{
							}
							else if (unk_0x724D816EA203A79E(unk_0xA95CF30C72EB526E(iVar1)))
							{
								if (unk_0xF0F2FC9DE291567F(func_57(iVar1), vParam0, true) < fParam1)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_61(int iParam0)//Position - 0x29F4
{
	if (func_66(unk_0xB5CEFD608600A09F(), iParam0))
	{
		return 1;
	}
	Global_26210D = { func_65(iParam0) };
	if (unk_0xE140B7178EA00705(&Global_26210D))
	{
		return 1;
	}
	if (func_62(unk_0xB5CEFD608600A09F(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_62(int iParam0, int iParam1)//Position - 0x2A3B
{
	int iVar0;
	
	iVar0 = func_64(iParam0);
	if (!iVar0 == func_63())
	{
		if (iVar0 == func_64(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_63()//Position - 0x2A66
{
	return -1;
}

int func_64(int iParam0)//Position - 0x2A6F
{
	if (iParam0 != func_63())
	{
		return Global_18C80F[iParam0 /*558*/].f_B;
	}
	return func_63();
}

struct<13> func_65(int iParam0)//Position - 0x2A92
{
	struct<13> Var0;
	
	unk_0xB7DBA2C6D2C3C41A(iParam0, &Var0, 13);
	return Var0;
}

int func_66(int iParam0, int iParam1)//Position - 0x2AA9
{
	if (unk_0xB9ACC1154C623363())
	{
		Global_26210D = { func_65(iParam0) };
		Global_26211A = { func_65(iParam1) };
		if (unk_0xD7F4457CECF10121(&Global_26210D))
		{
			if (unk_0xD7F4457CECF10121(&Global_26211A))
			{
				unk_0x24723877416AAAFC(&Global_2620C7, 35, &Global_26210D);
				unk_0x24723877416AAAFC(&Global_2620EA, 35, &Global_26211A);
				if (Global_2620C7 == Global_2620EA)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_67()//Position - 0x2B16
{
	Local_105.f_2[0 /*26*/] = 2;
	Local_105.f_2[0 /*26*/].f_B = joaat("baller3");
	Local_105.f_2[0 /*26*/].f_C = joaat("a_m_y_business_03");
	Local_105.f_2[1 /*26*/] = 2;
	Local_105.f_2[1 /*26*/].f_B = joaat("dubsta");
	Local_105.f_2[1 /*26*/].f_C = joaat("a_m_y_business_03");
	Local_105.f_2[2 /*26*/] = 0;
	Local_105.f_2[2 /*26*/].f_B = joaat("cog552");
	Local_105.f_2[2 /*26*/].f_C = joaat("a_m_y_business_03");
	Local_105.f_2[3 /*26*/] = 0;
	Local_105.f_2[3 /*26*/].f_B = joaat("baller5");
	Local_105.f_2[3 /*26*/].f_C = joaat("a_m_y_business_03");
}

void func_68()//Position - 0x2BAE
{
	func_69();
	if (Local_105.f_7A == 0)
	{
		if (Local_105.f_79 == 0)
		{
			Local_105.f_7A = 10;
		}
		else
		{
			Local_105.f_7A = 9;
		}
	}
	if (unk_0xFA30DFD0084E92FE(Local_105.f_1, 4))
	{
		return;
	}
	switch (Local_105.f_79)
	{
		case 0:
			Local_105.f_7B[0 /*36*/] = { -106.8009f, 331.5984f, 111.7262f };
			Local_105.f_7B[0 /*36*/].f_3 = 45.1956f;
			Local_105.f_7B[0 /*36*/].f_4[0 /*3*/] = { -106.2522f, 353.0331f, 111.8849f };
			Local_105.f_7B[0 /*36*/].f_4[1 /*3*/] = { -104.2692f, 356.5287f, 111.8858f };
			Local_105.f_7B[0 /*36*/].f_4[2 /*3*/] = { -108.1528f, 347.4515f, 111.8858f };
			Local_105.f_7B[1 /*36*/] = { -1193.408f, -218.8712f, 36.9448f };
			Local_105.f_7B[1 /*36*/].f_3 = 136.8281f;
			Local_105.f_7B[1 /*36*/].f_4[0 /*3*/] = { -1174.724f, -238.3963f, 36.9385f };
			Local_105.f_7B[1 /*36*/].f_4[1 /*3*/] = { -1201.011f, -231.2006f, 36.948f };
			Local_105.f_7B[1 /*36*/].f_4[2 /*3*/] = { -1162.52f, -229.3399f, 36.9564f };
			Local_105.f_7B[2 /*36*/] = { -1646.583f, -1102.801f, 12.0181f };
			Local_105.f_7B[2 /*36*/].f_3 = 312.8899f;
			Local_105.f_7B[2 /*36*/].f_4[0 /*3*/] = { -1643.292f, -1098.154f, 12.0207f };
			Local_105.f_7B[2 /*36*/].f_4[1 /*3*/] = { -1638.825f, -1093.105f, 12.0269f };
			Local_105.f_7B[3 /*36*/] = { 1171.307f, -398.4046f, 70.5896f };
			Local_105.f_7B[3 /*36*/].f_3 = 252.8763f;
			Local_105.f_7B[3 /*36*/].f_4[0 /*3*/] = { 1180.066f, -405.9521f, 66.7792f };
			Local_105.f_7B[3 /*36*/].f_4[1 /*3*/] = { 1176.999f, -397.1275f, 66.928f };
			Local_105.f_7B[4 /*36*/] = { 929.1267f, -1255.108f, 24.4835f };
			Local_105.f_7B[4 /*36*/].f_3 = 27.8866f;
			Local_105.f_7B[4 /*36*/].f_4[0 /*3*/] = { 943.2654f, -1244.3f, 24.6881f };
			Local_105.f_7B[4 /*36*/].f_4[1 /*3*/] = { 939.8859f, -1229.958f, 24.652f };
			Local_105.f_7B[4 /*36*/].f_4[2 /*3*/] = { 920.2808f, -1259.097f, 24.5269f };
			Local_105.f_7B[5 /*36*/] = { 883.0366f, -2166.188f, 31.2735f };
			Local_105.f_7B[5 /*36*/].f_3 = 186.7157f;
			Local_105.f_7B[5 /*36*/].f_4[0 /*3*/] = { 871.2222f, -2167.22f, 31.2735f };
			Local_105.f_7B[5 /*36*/].f_4[1 /*3*/] = { 872.3619f, -2199.464f, 29.5194f };
			Local_105.f_7B[5 /*36*/].f_4[2 /*3*/] = { 888.3759f, -2169.164f, 35.2714f };
			Local_105.f_7B[6 /*36*/] = { -110.3279f, -2705.599f, 5.0099f };
			Local_105.f_7B[6 /*36*/].f_3 = 0.3174f;
			Local_105.f_7B[6 /*36*/].f_4[0 /*3*/] = { -133.4379f, -2700.109f, 5.0103f };
			Local_105.f_7B[6 /*36*/].f_4[1 /*3*/] = { -127.772f, -2681.304f, 5.0274f };
			Local_105.f_7B[6 /*36*/].f_4[2 /*3*/] = { -112.7492f, -2673.062f, 5.006f };
			Local_105.f_7B[6 /*36*/].f_E[2] = 180f;
			Local_105.f_7B[7 /*36*/] = { -520.2162f, 163.9754f, 70.0812f };
			Local_105.f_7B[7 /*36*/].f_3 = 358.2249f;
			Local_105.f_7B[7 /*36*/].f_4[0 /*3*/] = { -508.6846f, 166.9421f, 69.9316f };
			Local_105.f_7B[7 /*36*/].f_4[1 /*3*/] = { -495.0937f, 169.297f, 69.9316f };
			Local_105.f_7B[7 /*36*/].f_12[0 /*3*/] = { -505.5487f, 166.7718f, 69.9316f };
			Local_105.f_7B[7 /*36*/].f_1C[0] = 85.9643f;
			Local_105.f_7B[7 /*36*/].f_20[0] = joaat("baller5");
			Local_105.f_7B[7 /*36*/].f_12[1 /*3*/] = { -498.6042f, 169.8883f, 69.9316f };
			Local_105.f_7B[7 /*36*/].f_1C[1] = 263.6038f;
			Local_105.f_7B[7 /*36*/].f_20[1] = joaat("cog552");
			Local_105.f_7B[8 /*36*/] = { -591.7915f, -1765.793f, 22.1854f };
			Local_105.f_7B[9 /*36*/].f_3 = 241.2612f;
			Local_105.f_7B[8 /*36*/].f_4[0 /*3*/] = { -593.1422f, -1779.995f, 21.8499f };
			Local_105.f_7B[8 /*36*/].f_4[1 /*3*/] = { -584.6111f, -1774.981f, 21.62f };
			Local_105.f_7B[8 /*36*/].f_4[2 /*3*/] = { -580.9441f, -1769.818f, 22.1854f };
			Local_105.f_7B[8 /*36*/].f_12[0 /*3*/] = { -582.6792f, -1777.695f, 21.6132f };
			Local_105.f_7B[8 /*36*/].f_1C[0] = 145.1394f;
			Local_105.f_7B[8 /*36*/].f_20[0] = joaat("baller5");
			Local_105.f_7B[9 /*36*/] = { 306.2488f, -1000.808f, 28.3108f };
			Local_105.f_7B[9 /*36*/].f_3 = 63.2117f;
			Local_105.f_7B[9 /*36*/].f_4[0 /*3*/] = { 314.583f, -998.1405f, 28.1613f };
			Local_105.f_7B[9 /*36*/].f_4[1 /*3*/] = { 300.5795f, -997.6307f, 28.1986f };
			Local_105.f_7B[9 /*36*/].f_12[0 /*3*/] = { 312.527f, -1000.571f, 28.2617f };
			Local_105.f_7B[9 /*36*/].f_1C[0] = 148.5301f;
			Local_105.f_7B[9 /*36*/].f_20[0] = joaat("baller5");
			Local_105.f_7B[9 /*36*/].f_12[1 /*3*/] = { 303.729f, -1000.568f, 28.3096f };
			Local_105.f_7B[9 /*36*/].f_1C[1] = 44.2995f;
			Local_105.f_7B[9 /*36*/].f_20[1] = joaat("cog552");
			Local_105.f_1E4[0 /*36*/] = { 533.1884f, -136.2944f, 58.6519f };
			Local_105.f_1E4[0 /*36*/].f_3 = 179.583f;
			Local_105.f_1E4[1 /*36*/] = { 774.9319f, -1329.652f, 25.243f };
			Local_105.f_1E4[1 /*36*/].f_3 = 268.6526f;
			Local_105.f_1E4[2 /*36*/] = { 999.0349f, -3054.079f, 4.9011f };
			Local_105.f_1E4[2 /*36*/].f_3 = 90.3809f;
			Local_105.f_1E4[3 /*36*/] = { 329.7707f, -1750.917f, 28.2917f };
			Local_105.f_1E4[3 /*36*/].f_3 = 229.4149f;
			Local_105.f_1E4[4 /*36*/] = { -1000.175f, -2098.133f, 11.3367f };
			Local_105.f_1E4[4 /*36*/].f_3 = 141.0009f;
			Local_105.f_1E4[5 /*36*/] = { -712.6369f, -880.1467f, 22.5928f };
			Local_105.f_1E4[5 /*36*/].f_3 = 359.1567f;
			Local_105.f_1E4[6 /*36*/] = { -1482.46f, -498.4642f, 31.8069f };
			Local_105.f_1E4[6 /*36*/].f_3 = 212.8829f;
			Local_105.f_1E4[7 /*36*/] = { -1357.325f, 579.7441f, 130.483f };
			Local_105.f_1E4[7 /*36*/].f_3 = 257.1156f;
			Local_105.f_1E4[8 /*36*/] = { -555.6091f, 55.0564f, 48.3253f };
			Local_105.f_1E4[8 /*36*/].f_3 = 174.0491f;
			Local_105.f_1E4[9 /*36*/] = { -84.1599f, -1024.114f, 27.2205f };
			Local_105.f_1E4[9 /*36*/].f_3 = 245.895f;
			break;
		
		case 1:
			Local_105.f_7B[0 /*36*/] = { 1447.271f, 3750.165f, 30.9342f };
			Local_105.f_7B[0 /*36*/].f_3 = 225.1522f;
			Local_105.f_7B[0 /*36*/].f_4[0 /*3*/] = { 1440.142f, 3753.75f, 30.9407f };
			Local_105.f_7B[0 /*36*/].f_4[1 /*3*/] = { 1455.688f, 3760.388f, 31.0543f };
			Local_105.f_7B[1 /*36*/] = { -46.8187f, 1946.659f, 189.5608f };
			Local_105.f_7B[9 /*36*/].f_3 = 128.6356f;
			Local_105.f_7B[1 /*36*/].f_4[0 /*3*/] = { -52.1263f, 1953.13f, 189.1861f };
			Local_105.f_7B[1 /*36*/].f_4[1 /*3*/] = { -63.1502f, 1951.946f, 189.1861f };
			Local_105.f_7B[1 /*36*/].f_4[2 /*3*/] = { -59.1516f, 1964.074f, 189.1861f };
			Local_105.f_7B[2 /*36*/] = { 2002.527f, 4978.516f, 40.5969f };
			Local_105.f_7B[2 /*36*/].f_3 = 214.3712f;
			Local_105.f_7B[2 /*36*/].f_4[0 /*3*/] = { 2013.281f, 4976.885f, 40.4305f };
			Local_105.f_7B[2 /*36*/].f_4[1 /*3*/] = { 2025.947f, 4978.383f, 40.1376f };
			Local_105.f_7B[2 /*36*/].f_4[2 /*3*/] = { 2000.83f, 4990.36f, 40.4477f };
			Local_105.f_7B[3 /*36*/] = { 2939.418f, 4623.833f, 47.7256f };
			Local_105.f_7B[3 /*36*/].f_3 = 151.8443f;
			Local_105.f_7B[3 /*36*/].f_4[0 /*3*/] = { 2930.615f, 4620.496f, 47.7246f };
			Local_105.f_7B[3 /*36*/].f_4[1 /*3*/] = { 2946.911f, 4629.479f, 47.7251f };
			Local_105.f_7B[3 /*36*/].f_4[2 /*3*/] = { 2936.956f, 4609.8f, 47.7277f };
			Local_105.f_7B[4 /*36*/] = { 519.5331f, 3105.464f, 39.5241f };
			Local_105.f_7B[4 /*36*/].f_3 = 186.7534f;
			Local_105.f_7B[4 /*36*/].f_4[0 /*3*/] = { 518.6117f, 3090.195f, 39.4652f };
			Local_105.f_7B[4 /*36*/].f_4[1 /*3*/] = { 532.1984f, 3083.56f, 39.4652f };
			Local_105.f_7B[5 /*36*/] = { -1597.604f, 3083.673f, 31.5661f };
			Local_105.f_7B[5 /*36*/].f_3 = 101.7629f;
			Local_105.f_7B[5 /*36*/].f_4[0 /*3*/] = { -1601.259f, 3078.785f, 31.5661f };
			Local_105.f_7B[5 /*36*/].f_4[1 /*3*/] = { -1609.109f, 3080.765f, 31.5661f };
			Local_105.f_7B[5 /*36*/].f_4[2 /*3*/] = { -1598.4f, 3070.091f, 32.6629f };
			Local_105.f_7B[6 /*36*/] = { 1470.055f, 6550.666f, 13.9091f };
			Local_105.f_7B[6 /*36*/].f_3 = 352.4692f;
			Local_105.f_7B[6 /*36*/].f_4[0 /*3*/] = { 1459.452f, 6546.819f, 13.6304f };
			Local_105.f_7B[6 /*36*/].f_4[1 /*3*/] = { 1460.641f, 6562.202f, 12.7644f };
			Local_105.f_7B[6 /*36*/].f_12[0 /*3*/] = { 1459.178f, 6544.879f, 13.713f };
			Local_105.f_7B[6 /*36*/].f_1C[0] = 88.1481f;
			Local_105.f_7B[6 /*36*/].f_20[0] = joaat("baller5");
			Local_105.f_7B[6 /*36*/].f_12[1 /*3*/] = { 1460.212f, 6560.179f, 12.9444f };
			Local_105.f_7B[6 /*36*/].f_1C[1] = 97.3821f;
			Local_105.f_7B[6 /*36*/].f_20[1] = joaat("cog552");
			Local_105.f_7B[7 /*36*/] = { 2328.066f, 2576.558f, 45.6677f };
			Local_105.f_7B[7 /*36*/].f_3 = 335.1092f;
			Local_105.f_7B[7 /*36*/].f_4[0 /*3*/] = { 2339.745f, 2569.616f, 46.7255f };
			Local_105.f_7B[7 /*36*/].f_4[1 /*3*/] = { 2356.385f, 2593.859f, 46.1125f };
			Local_105.f_7B[7 /*36*/].f_4[2 /*3*/] = { 2338.935f, 2549.453f, 45.6677f };
			Local_105.f_7B[8 /*36*/] = { -1600.295f, 5204.928f, 3.3151f };
			Local_105.f_7B[8 /*36*/].f_3 = 296.2108f;
			Local_105.f_7B[8 /*36*/].f_4[0 /*3*/] = { -1587.408f, 5193.21f, 3.3151f };
			Local_105.f_7B[8 /*36*/].f_4[1 /*3*/] = { -1576.558f, 5176.321f, 18.7159f };
			Local_105.f_7B[8 /*36*/].f_4[2 /*3*/] = { -1595.553f, 5206.593f, 3.3151f };
			Local_105.f_7B[8 /*36*/].f_12[0 /*3*/] = { -1575.924f, 5170.995f, 18.5541f };
			Local_105.f_7B[8 /*36*/].f_1C[0] = 312.3839f;
			Local_105.f_7B[8 /*36*/].f_20[0] = joaat("baller5");
			Local_105.f_1E4[0 /*36*/] = { 1514.526f, 1730.14f, 108.9447f };
			Local_105.f_1E4[0 /*36*/].f_3 = 87.1735f;
			Local_105.f_1E4[1 /*36*/] = { 2028.331f, 3444.544f, 42.9909f };
			Local_105.f_1E4[1 /*36*/].f_3 = 251.7144f;
			Local_105.f_1E4[2 /*36*/] = { 392.7668f, 3588.585f, 32.2922f };
			Local_105.f_1E4[2 /*36*/].f_3 = 351.6842f;
			Local_105.f_1E4[3 /*36*/] = { 200.9893f, 2351.4f, 72.5299f };
			Local_105.f_1E4[3 /*36*/].f_3 = 297.6164f;
			Local_105.f_1E4[4 /*36*/] = { -2337.792f, 4041.646f, 29.414f };
			Local_105.f_1E4[4 /*36*/].f_3 = 346.6894f;
			Local_105.f_1E4[5 /*36*/] = { -742.3113f, 5537.667f, 32.4857f };
			Local_105.f_1E4[5 /*36*/].f_3 = 30.2635f;
			Local_105.f_1E4[6 /*36*/] = { 1586.277f, 6445.438f, 24.1337f };
			Local_105.f_1E4[6 /*36*/].f_3 = 155.2497f;
			Local_105.f_1E4[7 /*36*/] = { 2574.845f, 5086.147f, 43.6593f };
			Local_105.f_1E4[7 /*36*/].f_3 = 11.7033f;
			Local_105.f_1E4[8 /*36*/] = { 362.3407f, 4431.755f, 61.9071f };
			Local_105.f_1E4[8 /*36*/].f_3 = 290.5464f;
			Local_105.f_1E4[9 /*36*/] = { -1906.661f, 1773.933f, 170.3475f };
			Local_105.f_1E4[9 /*36*/].f_3 = 113.551f;
			break;
	}
	unk_0xF0059F27F7BB6680(&(Local_105.f_1), 4);
}

var func_69()//Position - 0x39D5
{
	if (Local_105.f_79 != -1)
	{
		return Local_105.f_79;
	}
	if (Local_105.f_79 == -1)
	{
		if (unk_0xB89F0CA3818CA220(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false)) == -289320599)
		{
			Local_105.f_79 = 0;
		}
		else
		{
			Local_105.f_79 = 1;
		}
	}
	return Local_105.f_79;
}

int func_70(var uParam0)//Position - 0x3A1A
{
	if (uParam0->f_1)
	{
		if (unk_0xC40EDFF7541407A8(unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_71(var uParam0)//Position - 0x3A43
{
	if (!uParam0->f_1)
	{
		if (unk_0x0DE6397A2CB3EF75())
		{
			func_7(uParam0, 0, 0);
		}
	}
}

void func_72()//Position - 0x3A62
{
}

void func_73()//Position - 0x3A6A
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Local_105.f_77 != -1)
	{
		iVar0 = unk_0x3171C34AB3FE6F2E(Local_105.f_77);
	}
	iVar1 = 0;
	while (iVar1 < unk_0x81C86888AEA2F49B())
	{
		if (unk_0x05086B70D2CFEA6F(unk_0xCFA8A401AAD7BB5A(iVar1)))
		{
			iVar2 = unk_0x4ED43B67B3F05E0F(unk_0xCFA8A401AAD7BB5A(iVar1));
			if (!func_17(iVar2, 0))
			{
				if (iVar0 != func_63())
				{
					if (iVar2 == iVar0 || func_74(iVar2, iVar0, 1))
					{
						unk_0xA902E18EDF6FA0C8(5, Global_180770[iVar1], Global_18079D);
						unk_0xA902E18EDF6FA0C8(5, Global_18079D, Global_180770[iVar1]);
					}
				}
			}
		}
		iVar1++;
	}
}

int func_74(int iParam0, int iParam1, bool bParam2)//Position - 0x3AFF
{
	if (iParam1 != func_63())
	{
		if (!bParam2)
		{
			if (func_75(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_18C80F[iParam0 /*558*/].f_B != func_63())
		{
			return iParam1 == Global_18C80F[iParam0 /*558*/].f_B;
		}
	}
	return 0;
}

int func_75(int iParam0, int iParam1)//Position - 0x3B49
{
	if (iParam1 != func_63())
	{
		if (iParam0 != func_63())
		{
			if (Global_18C80F[iParam0 /*558*/].f_B != func_63())
			{
				if (Global_18C80F[iParam0 /*558*/].f_B == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

void func_76()//Position - 0x3B8E
{
	vector3 vVar0;
	int iVar1;
	float fVar2;
	
	if (func_847())
	{
		return;
	}
	if (!func_285())
	{
		return;
	}
	iVar1 = -1;
	fVar2 = func_140(&iVar1, 0);
	if (fVar2 <= 1600f)
	{
		if (!func_139(unk_0xB5CEFD608600A09F()))
		{
			if (!func_133())
			{
				func_129(0);
				unk_0xEF791AEFDDE09A3D(false);
				unk_0xF0059F27F7BB6680(&iLocal_107, 18);
			}
		}
	}
	if (Local_105.f_77 > -1)
	{
		if (iVar1 > -1)
		{
			vVar0 = { unk_0x541C2AEF053615BC(unk_0xE48AD7BF7762E114(Local_105.f_2[iVar1 /*26*/].f_1), false) };
		}
	}
	if (!func_28(vVar0, 0f, 0f, 0f, 0))
	{
		func_77(166, vVar0, &uLocal_126, 1140457472, 1144750080, 0);
	}
}

void func_77(int iParam0, vector3 vParam1, var uParam2, float fParam3, float fParam4, int iParam5)//Position - 0x3C36
{
	float fVar0;
	float fVar1;
	
	if ((((func_128(unk_0xB5CEFD608600A09F()) && !func_127(unk_0xB5CEFD608600A09F())) && !unk_0xFA30DFD0084E92FE(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_1, 8)) && (func_126(unk_0xB5CEFD608600A09F()) || func_125(unk_0xB5CEFD608600A09F()))) || func_58(vParam1))
	{
		return;
	}
	Global_19693F = { vParam1 };
	fVar0 = SYSTEM::VDIST(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false), vParam1);
	func_121(iParam0, fVar0);
	if (unk_0xE186ACC7BE9B244E() && unk_0x0352C1B6B66A87AC() == 15)
	{
		if (func_120(unk_0xB5CEFD608600A09F()) || func_118(unk_0xB5CEFD608600A09F()))
		{
			if (!unk_0x7922FBF86CF76430(1344549371))
			{
				unk_0xFD1119221F75C876(1344549371);
			}
		}
		else if (unk_0x7922FBF86CF76430(1344549371))
		{
			unk_0xCB1E3206344A11E1(1344549371);
		}
	}
	if (fVar0 < fParam3)
	{
		if (!func_117(unk_0xB5CEFD608600A09F(), 21))
		{
			func_116(vParam1, 1, 0);
		}
		if (!*uParam2 && func_948(unk_0xB5CEFD608600A09F(), 1, 1))
		{
			*uParam2 = 1;
			if (func_115(iParam0))
			{
				unk_0xDF53A66AEE1401AA(func_114(iParam0));
				if (func_113(iParam0, -1))
				{
					unk_0xAEC867D0DBB7AFEB(0);
					if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0)
					{
						unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 0, 1);
						unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 1);
					}
					unk_0xF0059F27F7BB6680(&(Global_19693F.f_3), 0);
				}
			}
			if (func_112(iParam0))
			{
				fVar1 = func_111(iParam0);
				if (fVar1 != 1f)
				{
					func_831(fVar1);
					unk_0xF0059F27F7BB6680(&(Global_19693F.f_3), 1);
				}
			}
			if (!Global_247C05)
			{
				if (func_110(iParam0) && func_120(unk_0xB5CEFD608600A09F()))
				{
					func_108(1);
					func_107(2);
				}
			}
			func_106(19);
		}
	}
	else
	{
		if (fVar0 > fParam4)
		{
			if (func_105(unk_0xB5CEFD608600A09F(), 19))
			{
				func_104(19);
			}
		}
		if (*uParam2 && func_948(unk_0xB5CEFD608600A09F(), 1, 1))
		{
			*uParam2 = 0;
			if (func_115(iParam0))
			{
				if (unk_0xFA30DFD0084E92FE(Global_19693F.f_3, 0))
				{
					unk_0xDF53A66AEE1401AA(1f);
					unk_0xAEC867D0DBB7AFEB(5);
					unk_0x7CB6FD92BE491AD9(&(Global_19693F.f_3), 0);
				}
			}
			if (func_112(iParam0))
			{
				func_103();
				unk_0x7CB6FD92BE491AD9(&(Global_19693F.f_3), 1);
			}
			if (iParam5 && !func_128(unk_0xB5CEFD608600A09F()))
			{
				if (func_101(unk_0xB5CEFD608600A09F()) != 152)
				{
					func_80();
				}
			}
			if (func_79(2))
			{
				func_108(0);
				func_78(2);
			}
		}
	}
}

void func_78(int iParam0)//Position - 0x3EA9
{
	unk_0x7CB6FD92BE491AD9(&(Global_267214.f_1312.f_25), iParam0);
}

bool func_79(int iParam0)//Position - 0x3EC0
{
	return unk_0xFA30DFD0084E92FE(Global_267214.f_1312.f_25, iParam0);
}

void func_80()//Position - 0x3ED7
{
	unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_18), &Global_24C33D, 2);
	unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_1A), &Global_24C33F, 18);
	func_99();
	func_83(1, 1, 0);
	func_81();
}

void func_81()//Position - 0x3F0D
{
	func_82(0, 0);
}

void func_82(int iParam0, int iParam1)//Position - 0x3F1B
{
	Global_24B2CE.f_16 = iParam0;
	Global_24B2CE.f_17 = iParam1;
}

void func_83(bool bParam0, bool bParam1, bool bParam2)//Position - 0x3F33
{
	if (bParam1)
	{
		unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_2C), &Global_24C351, 317);
	}
	else
	{
		Global_24B2CE.f_2C = { Global_24C351 };
		Global_24B2CE.f_2C.f_31 = { Global_24C351.f_31 };
		Global_24B2CE.f_2C.f_34 = Global_24C351.f_34;
		Global_24B2CE.f_2C.f_35 = Global_24C351.f_35;
	}
	if (bParam0)
	{
		func_98();
	}
	if (!bParam2)
	{
		func_86(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	}
	func_85(0);
	func_84();
}

void func_84()//Position - 0x3FD2
{
	struct<6> Var0;
	
	if (Global_24B2CE.f_1E3.f_1 == unk_0x8A55B15F4133C912())
	{
		Global_24B2CE.f_1E3 = { Var0 };
	}
}

void func_85(bool bParam0)//Position - 0x3FF7
{
	if (bParam0)
	{
		Global_24B2CE.f_2BD = 0;
	}
	else
	{
		Global_24B2CE.f_2BD = 1;
	}
}

void func_86(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x4019
{
	if (bParam0)
	{
		if (func_97())
		{
			func_96();
		}
		Global_24B2CE.f_2BE.f_203 = unk_0x8A55B15F4133C912();
		Global_24B2CE.f_2BE.f_1F8 = iParam1;
		Global_24B2CE.f_2BE.f_1F9 = iParam2;
		Global_24B2CE.f_2BE.f_1FA = iParam10;
		func_94();
		func_90(8, 0, 0, 0, 0);
		Global_24B2CE.f_2BE.f_1FB = iParam11;
		Global_24B2CE.f_2BE.f_1FE = iParam3;
		Global_24B2CE.f_2BE.f_1FF = iParam4;
		Global_24B2CE.f_2BE.f_1FC = iParam5;
		Global_24B2CE.f_2BE.f_1FD = iParam6;
		Global_24B2CE.f_2BE.f_200 = iParam7;
		Global_24B2CE.f_2BE.f_201 = iParam8;
		Global_24B2CE.f_2BE.f_202 = iParam9;
		Global_24B2CE.f_6C7 = 1;
	}
	else
	{
		func_87();
	}
}

void func_87()//Position - 0x40E0
{
	if (func_97() && !func_89())
	{
		func_96();
	}
	if (func_89())
	{
		func_88();
	}
	else
	{
		func_94();
		func_90(0, 0, 0, 0, 0);
		Global_24B2CE.f_6C7 = 0;
		Global_24B2CE.f_6C6 = 0;
	}
}

void func_88()//Position - 0x4128
{
	unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_2BE), &(Global_24B2CE.f_4C2), 516);
	Global_24B2CE.f_1E3 = { Global_24B2CE.f_1E9 };
	if (unk_0x8A55B15F4133C912() == Global_24B2CE.f_2BE.f_203)
	{
		Global_24B2CE.f_6C6 = 0;
	}
}

int func_89()//Position - 0x4170
{
	if ((Global_24B2CE.f_6C6 && !unk_0x8A55B15F4133C912() == Global_24B2CE.f_4C2.f_203) && unk_0x3C406FC829C1E14A(Global_24B2CE.f_4C2.f_203))
	{
		return 1;
	}
	return 0;
}

void func_90(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x41AF
{
	if (Global_252E21.f_760.f_2B2.f_10 != func_63())
	{
		if (unk_0xFA30DFD0084E92FE(Global_24FB5C[Global_252E21.f_760.f_2B2.f_10 /*406*/].f_18C, 0) && func_91())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_24CF63 = 0;
	}
	Global_24B2CE.f_1E3 = iParam0;
	Global_24B2CE.f_1E3.f_1 = unk_0x8A55B15F4133C912();
	Global_24B2CE.f_1E3.f_2 = iParam1;
	Global_24B2CE.f_1E3.f_3 = iParam2;
	Global_24B2CE.f_1E3.f_4 = iParam3;
	Global_24B2CE.f_1E3.f_5 = iParam4;
}

int func_91()//Position - 0x424E
{
	if (((func_101(unk_0xB5CEFD608600A09F()) == 229 || func_101(unk_0xB5CEFD608600A09F()) == 191) || func_93()) || func_92())
	{
		return 0;
	}
	return 1;
}

var func_92()//Position - 0x428E
{
	return Global_1805CE;
}

int func_93()//Position - 0x429A
{
	if (Global_440000 == 6)
	{
		return 1;
	}
	return 0;
}

void func_94()//Position - 0x42AF
{
	if (func_97() && !func_89())
	{
		func_96();
	}
	func_95();
	Global_24B2CE.f_2BE = 0;
}

void func_95()//Position - 0x42D8
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_24B2CE.f_2BE.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_96()//Position - 0x4313
{
	if (func_89())
	{
		if (Global_24B2CE.f_2BE.f_203 == Global_24B2CE.f_4C2.f_203)
		{
			return;
		}
	}
	if (!unk_0x8A55B15F4133C912() == Global_24B2CE.f_2BE.f_203)
	{
		unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_4C2), &(Global_24B2CE.f_2BE), 516);
		Global_24B2CE.f_1E9 = { Global_24B2CE.f_1E3 };
		Global_24B2CE.f_6C6 = 1;
	}
}

int func_97()//Position - 0x4381
{
	if ((Global_24B2CE.f_6C7 && !unk_0x8A55B15F4133C912() == Global_24B2CE.f_2BE.f_203) && unk_0x3C406FC829C1E14A(Global_24B2CE.f_2BE.f_203))
	{
		return 1;
	}
	return 0;
}

void func_98()//Position - 0x43C0
{
	unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_169), &Global_24C48E, 121);
}

void func_99()//Position - 0x43D9
{
	func_100();
	Global_24B2CE.f_8C4 = 0;
}

void func_100()//Position - 0x43ED
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_24B2CE.f_8C5[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

int func_101(int iParam0)//Position - 0x4419
{
	if (func_102(iParam0, 0))
	{
		return Global_18C80F[iParam0 /*558*/].f_B.f_21;
	}
	return -1;
}

int func_102(int iParam0, int iParam1)//Position - 0x443C
{
	if (Global_18C80F[iParam0 /*558*/].f_B.f_21 != -1 || (iParam1 && Global_18C80F[iParam0 /*558*/].f_B.f_20 != -1))
	{
		return 1;
	}
	return 0;
}

void func_103()//Position - 0x4477
{
	if (unk_0x3C406FC829C1E14A(Global_267214.f_130E))
	{
		if (!Global_267214.f_130E == unk_0x8A55B15F4133C912() && Global_267214.f_130D < 1f)
		{
			return;
		}
	}
	Global_267214.f_130E = -1;
	Global_267214.f_130D = 1f;
}

void func_104(int iParam0)//Position - 0x44BE
{
	unk_0x7CB6FD92BE491AD9(&(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_4), iParam0);
}

bool func_105(int iParam0, int iParam1)//Position - 0x44DB
{
	return unk_0xFA30DFD0084E92FE(Global_18C80F[iParam0 /*558*/].f_B.f_4, iParam1);
}

void func_106(int iParam0)//Position - 0x44F6
{
	unk_0xF0059F27F7BB6680(&(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_4), iParam0);
}

void func_107(int iParam0)//Position - 0x4513
{
	unk_0xF0059F27F7BB6680(&(Global_267214.f_1312.f_25), iParam0);
}

void func_108(int iParam0)//Position - 0x452A
{
	if (func_109() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_247C05)
	{
		return;
	}
	Global_247C05 = iParam0;
	Global_247C07 = 0;
	Global_247C08 = 0;
}

int func_109()//Position - 0x455F
{
	if ((((Global_EF3AE != -1 && Global_EF3AE != 33) && Global_EF3AE != 35) && Global_EF3AE != 37) && Global_EF3AE != 21)
	{
		return 1;
	}
	return 0;
}

int func_110(int iParam0)//Position - 0x45A5
{
	switch (iParam0)
	{
		case 142:
		case 159:
		case 148:
		case 157:
		case 166:
		case 179:
		case 189:
		case 193:
		case 198:
		case 205:
			return 1;
		
		default:
	}
	return 0;
}

float func_111(int iParam0)//Position - 0x45F5
{
	switch (iParam0)
	{
		case 142:
		case 157:
		case 159:
		case 151:
		case 148:
		case 164:
		case 152:
		case 153:
		case 154:
		case 155:
		case 160:
		case 162:
		case 166:
		case 173:
		case 169:
		case 167:
		case 168:
		case 170:
		case 178:
		case 179:
		case 189:
		case 180:
		case 182:
		case 183:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 199:
		case 201:
		case 185:
		case 197:
		case 186:
		case 198:
		case 195:
		case 205:
		case 207:
		case 208:
		case 209:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_112(int iParam0)//Position - 0x4789
{
	switch (iParam0)
	{
		case 152:
		case 164:
		case 151:
		case 170:
		case 169:
		case 201:
		case 191:
		case 198:
		case 180:
		case 200:
		case 208:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_113(int iParam0, int iParam1)//Position - 0x4851
{
	switch (iParam0)
	{
		case 148:
		case 164:
		case 152:
		case 153:
		case 160:
			return 1;
		
		case 168:
			if ((iParam1 != 2 && iParam1 != 10) && iParam1 != 7)
			{
				return 1;
			}
			break;
		
		case 170:
		case 166:
		case 173:
			return 1;
		
		case 179:
		case 183:
		case 189:
		case 191:
		case 192:
		case 193:
		case 194:
		case 186:
		case 199:
		case 185:
		case 201:
		case 198:
		case 195:
		case 180:
		case 207:
		case 208:
		case 209:
		case 210:
		case 214:
		case 217:
		case 218:
		case 215:
		case 216:
		case 219:
		case 220:
		case 221:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 227:
			return 1;
		
		case 190:
			if (((iParam1 != 6 && iParam1 != 9) && iParam1 != 7) && iParam1 != 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

float func_114(int iParam0)//Position - 0x49D2
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 0f;
		
		case 144:
			return 0f;
		
		case 185:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_115(int iParam0)//Position - 0x4A8A
{
	switch (iParam0)
	{
		case 152:
		case 142:
		case 164:
		case 151:
		case 160:
		case 166:
		case 173:
		case 183:
		case 185:
		case 197:
		case 186:
		case 201:
		case 191:
		case 198:
		case 207:
		case 208:
		case 209:
		case 200:
		case 195:
		case 180:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

void func_116(vector3 vParam0, int iParam1, int iParam2)//Position - 0x4B88
{
	Global_24B2CE.f_2C.f_31 = { vParam0 };
	Global_24B2CE.f_2C.f_34 = iParam1;
	Global_24B2CE.f_2C.f_35 = iParam2;
}

bool func_117(int iParam0, int iParam1)//Position - 0x4BB2
{
	return unk_0xFA30DFD0084E92FE(Global_24FB5C[iParam0 /*406*/].f_CC, iParam1);
}

int func_118(int iParam0)//Position - 0x4BCB
{
	if (func_119(iParam0))
	{
		if (func_120(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_119(int iParam0)//Position - 0x4BEA
{
	if (iParam0 != func_63())
	{
		if (Global_18C80F[iParam0 /*558*/].f_B != func_63())
		{
			return Global_18C80F[iParam0 /*558*/].f_B == iParam0;
		}
	}
	return 0;
}

int func_120(int iParam0)//Position - 0x4C1F
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_105(iParam0, 9);
	}
	return 0;
}

void func_121(int iParam0, float fParam1)//Position - 0x4C3D
{
	int iVar0;
	
	iVar0 = func_124(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_122();
	}
}

void func_122()//Position - 0x4C63
{
	if (!func_123(unk_0xB5CEFD608600A09F()))
	{
		func_106(25);
	}
}

bool func_123(int iParam0)//Position - 0x4C7D
{
	return func_105(iParam0, 25);
}

int func_124(int iParam0)//Position - 0x4C8D
{
	switch (iParam0)
	{
		case 152:
			return Global_40001.f_2E87;
		
		case 142:
			return Global_40001.f_2E7B;
		
		case 157:
			return Global_40001.f_2E5A;
		
		case 159:
			return Global_40001.f_2E49;
		
		case 162:
			return Global_40001.f_2EB8;
		
		case 173:
			return 100;
		
		case 170:
			return 100;
		
		default:
	}
	return -1;
}

int func_125(int iParam0)//Position - 0x4D03
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_18C80F[iVar0 /*558*/].f_1, 0);
	}
	return 0;
}

int func_126(int iParam0)//Position - 0x4D29
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_18C80F[iVar0 /*558*/].f_1, 7);
	}
	return 0;
}

bool func_127(int iParam0)//Position - 0x4D4F
{
	return unk_0xFA30DFD0084E92FE(Global_18C80F[iParam0 /*558*/].f_1, 2);
}

int func_128(int iParam0)//Position - 0x4D67
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_18C80F[iVar0 /*558*/] != -1;
	}
	return 0;
}

void func_129(int iParam0)//Position - 0x4D88
{
	if (!func_139(unk_0xB5CEFD608600A09F()))
	{
		if (iParam0 || func_130(unk_0xB5CEFD608600A09F()) != 0)
		{
			func_106(20);
			if (func_128(unk_0xB5CEFD608600A09F()))
			{
				if (!unk_0xFA30DFD0084E92FE(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_1, 8))
				{
					unk_0xF0059F27F7BB6680(&(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_1), 8);
				}
			}
		}
	}
}

int func_130(int iParam0)//Position - 0x4DEF
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_128(iParam0) && !func_127(iParam0)) && !unk_0xFA30DFD0084E92FE(Global_18C80F[iParam0 /*558*/].f_1, 8));
	bVar2 = func_139(iParam0);
	uVar3 = func_132();
	uVar4 = func_133();
	if ((bVar1 && (func_126(iParam0) || func_125(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_120(iParam0)) && !func_131(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_267214.f_1312.f_D0 != iVar0)
	{
		Global_267214.f_1312.f_D0 = iVar0;
	}
	return iVar0;
}

bool func_131(int iParam0)//Position - 0x4EAD
{
	return func_105(iParam0, 19);
}

bool func_132()//Position - 0x4EBD
{
	return Global_1406A0;
}

int func_133()//Position - 0x4EC9
{
	if ((func_105(unk_0xB5CEFD608600A09F(), 21) || func_105(unk_0xB5CEFD608600A09F(), 22)) || func_136())
	{
		return 1;
	}
	if (func_134())
	{
		func_106(22);
		return 1;
	}
	return 0;
}

int func_134()//Position - 0x4F0E
{
	if (func_102(unk_0xB5CEFD608600A09F(), 0))
	{
		if ((func_132() && !func_135()) || func_117(unk_0xB5CEFD608600A09F(), 21))
		{
			return 1;
		}
		else
		{
			func_104(27);
		}
	}
	return 0;
}

bool func_135()//Position - 0x4F51
{
	return Global_1406A0.f_1;
}

bool func_136()//Position - 0x4F5F
{
	return func_137(306, -1);
}

int func_137(int iParam0, int iParam1)//Position - 0x4F6F
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2705A2[iParam0 /*3*/][func_138(iParam1)];
	if (unk_0x9CADE88F210A0BAE(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_138(int iParam0)//Position - 0x4F9B
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_19();
		if (iVar1 > -1)
		{
			Global_269AA6 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_269AA6 = 1;
		}
	}
	return iVar0;
}

bool func_139(int iParam0)//Position - 0x4FCF
{
	return func_105(iParam0, 20);
}

float func_140(int iParam0, bool bParam1)//Position - 0x4FDF
{
	float fVar0;
	float fVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar4;
	
	fVar0 = 1E+10f;
	fVar1 = 0f;
	vVar3 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false) };
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (unk_0x8EA6CABD14F1B89A(Local_105.f_2[iVar2 /*26*/].f_1))
		{
			if (Local_105.f_2[iVar2 /*26*/] == 2 || !bParam1)
			{
				if (!func_14(Local_105.f_2[iVar2 /*26*/].f_1))
				{
					vVar4 = { unk_0x541C2AEF053615BC(unk_0xE48AD7BF7762E114(Local_105.f_2[iVar2 /*26*/].f_1), true) };
					fVar1 = SYSTEM::VDIST2(vVar3, vVar4);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
						*iParam0 = iVar2;
					}
				}
			}
		}
		iVar2++;
	}
	return fVar0;
}

void func_141(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)//Position - 0x5081
{
	int iVar0;
	int iVar1[32];
	bool bVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	struct<4> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	struct<2> Var22;
	
	if (func_284(iParam2))
	{
		return;
	}
	fVar10 = -1f;
	iVar11 = -1;
	iVar12 = -1;
	iVar14 = 0;
	iVar15 = 0;
	uParam3->f_24 = 0;
	if (func_282() || iParam2 == 27)
	{
		if (func_225(iParam1, iParam2, uParam3, Global_180515, 0, func_280(), sParam7))
		{
			func_224(1);
			if ((!func_222() && !func_220()) || unk_0xFA30DFD0084E92FE(Global_267214.f_11DD, 1))
			{
				if (func_219())
				{
					func_216();
				}
				else
				{
					unk_0xC2EAD30963BDAA47(76, 84);
					if (uParam3->f_1B == 0)
					{
						func_215(1);
						Global_180515 = 0;
						iVar19 = -1;
						if (Global_1805CF != 1)
						{
							func_214(iParam1, 0, 0);
							if (unk_0xFA30DFD0084E92FE(uParam3->f_21, 7))
							{
								unk_0x7CB6FD92BE491AD9(&(uParam3->f_21), 7);
							}
						}
						if (iParam2 == 27)
						{
							iVar17 = 0;
							while (iVar17 < 32)
							{
								iVar1[iVar17] = -1;
								iVar17++;
							}
							iVar17 = 0;
							while (iVar17 < 32)
							{
								if (func_948(unk_0x3171C34AB3FE6F2E(iVar17), 0, 1))
								{
									iVar3 = unk_0x3171C34AB3FE6F2E(iVar17);
									if (!func_17(iVar3, 0))
									{
										if ((func_213(iVar3) || Global_24FB5C[iVar3 /*406*/].f_E8 != -1) || func_212(iVar3))
										{
											iVar9 = iVar3;
											if (func_119(iVar3))
											{
												iVar1[iVar9] = iVar20;
												iVar20++;
												iVar0++;
												func_211(&iVar1, iVar3, &iVar20, &iVar0);
											}
										}
									}
								}
								iVar17++;
							}
						}
						if (!func_208(unk_0xB5CEFD608600A09F(), 0) && func_101(unk_0xB5CEFD608600A09F()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							if (func_207())
							{
								if (func_948(unk_0x3171C34AB3FE6F2E(iVar17), 0, 1))
								{
									iVar3 = unk_0x3171C34AB3FE6F2E(iVar17);
								}
								else
								{
									iVar3 = func_63();
								}
							}
							else
							{
								iVar3 = (uParam0[iVar17 /*42*/])->f_1;
							}
							if ((func_206(iVar3) && func_202(iVar3, iParam2)) && func_948(iVar3, 0, 1))
							{
								iVar9 = iVar3;
								iVar7 = Global_18402B[iVar9 /*770*/].f_D3.f_6;
								Var6 = { func_197(iVar3) };
								if (iVar3 == unk_0xB5CEFD608600A09F())
								{
									uParam3->f_23 = iVar18;
								}
								StringCopy(&(uParam3->f_1), unk_0xD885B2234FC72D62(iVar3), 64);
								*(uParam4[iVar17 /*13*/]) = { func_65(iVar3) };
								iVar5 = func_191(iVar3);
								sVar4 = "";
								if (iVar5 != 0)
								{
									sVar4 = unk_0xF392EEDDF2FB749A(iVar5);
								}
								Global_180515++;
								if ((uParam0[iVar17 /*42*/])->f_16 != -1f)
								{
									fVar10 = (uParam0[iVar17 /*42*/])->f_16;
								}
								if ((uParam0[iVar17 /*42*/])->f_1F != -1)
								{
									iVar11 = (uParam0[iVar17 /*42*/])->f_1F;
								}
								if ((uParam0[iVar17 /*42*/])->f_29 != -1)
								{
									iVar12 = (uParam0[iVar17 /*42*/])->f_29;
								}
								iVar8 = (uParam0[iVar17 /*42*/])->f_9;
								if (((uParam0[iVar17 /*42*/])->f_9 != -1 || (uParam0[iVar17 /*42*/])->f_16 != -1f) || (uParam0[iVar17 /*42*/])->f_1F != -1)
								{
									if (!func_207())
									{
										iVar15 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_186(&iVar8, &fVar10, (uParam0[iVar17 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_68), func_185(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar13 = (uParam0[iVar17 /*42*/])->f_2 + 1;
									if (iVar19 != iVar13)
									{
										iVar19 = iVar13;
									}
									else
									{
										iVar13 = -2;
									}
								}
								iVar16 = func_180(iVar3, 0);
								if (bVar2)
								{
									if (func_179(iVar3, 1) && iVar1[iVar9] != -1)
									{
										iVar18 = iVar1[iVar9];
									}
									else
									{
										iVar18 = (iVar0 + iVar21);
										iVar21++;
									}
								}
								uParam3->f_26[iVar9 /*2*/].f_1 = iVar18;
								if ((uParam0[iVar17 /*42*/])->f_27 != -1)
								{
									StringCopy(&Var22, "UW_TM", 16);
									StringIntConCat(&Var22, (uParam0[iVar17 /*42*/])->f_27, 16);
								}
								if (func_178(iParam5))
								{
									func_177(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar8, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_28, iVar13, bParam6);
								}
								else
								{
									func_177(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar11, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_28, iVar13, bParam6);
								}
								unk_0xF0059F27F7BB6680(&iVar14, iVar3);
								iVar18++;
							}
							iVar17++;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							iVar3 = unk_0x3171C34AB3FE6F2E(iVar17);
							if (func_948(iVar3, 0, 1) && !unk_0xFA30DFD0084E92FE(iVar14, iVar3))
							{
								iVar3 = unk_0x3171C34AB3FE6F2E(iVar17);
							}
							else
							{
								iVar3 = func_63();
							}
							if (func_206(iVar3))
							{
								if (func_948(unk_0x3171C34AB3FE6F2E(iVar17), 0, 1))
								{
									iVar9 = iVar3;
									iVar7 = Global_18402B[iVar9 /*770*/].f_D3.f_6;
									Var6 = { func_197(iVar3) };
									*(uParam4[iVar17 /*13*/]) = { func_65(iVar3) };
									iVar5 = func_191(iVar3);
									sVar4 = "";
									if (iVar5 != 0)
									{
										sVar4 = unk_0xF392EEDDF2FB749A(iVar5);
									}
									Global_180515++;
									iVar16 = func_180(iVar3, 1);
									if (bVar2)
									{
										if (func_179(iVar3, 1))
										{
											iVar18 = iVar1[iVar17];
										}
										else
										{
											iVar18 = (iVar0 + iVar21);
											iVar21++;
										}
									}
									uParam3->f_26[iVar9 /*2*/].f_1 = iVar18;
									func_155(iVar3, unk_0xD885B2234FC72D62(iVar3), iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar16, iVar15);
									iVar18++;
								}
							}
							iVar17++;
						}
						if (unk_0xFA30DFD0084E92FE(uParam3->f_21, 11))
						{
							func_152(uParam3, iParam1);
						}
						func_151(&(uParam3->f_15));
						func_150();
						uParam3->f_1B = 2;
					}
					if (uParam3->f_1B == 2)
					{
						if (!unk_0xFA30DFD0084E92FE(uParam3->f_21, 7))
						{
							func_149(uParam3, iParam1);
							func_148(iParam1, 0, 1);
							unk_0xF0059F27F7BB6680(&(uParam3->f_21), 7);
						}
						func_149(uParam3, iParam1);
						if (!unk_0xFA30DFD0084E92FE(uParam3->f_21, 11))
						{
							unk_0xF0059F27F7BB6680(&(uParam3->f_21), 11);
						}
						if (func_144(uParam3))
						{
							Global_1805CF = 1;
						}
						func_142(uParam3);
						if (Global_1805CF == 1)
						{
							uParam3->f_1B = 0;
						}
						if (Global_1805CF == 2)
						{
							uParam3->f_1B = 0;
						}
					}
					if (unk_0xA7F138B5B1AB2CF6(*iParam1))
					{
						unk_0x996AC9A66B2A5A3F(7);
						unk_0x65E432C782E7E702(*iParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0x996AC9A66B2A5A3F(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_1B = 0;
			func_150();
			func_215(0);
			if (unk_0xFA30DFD0084E92FE(uParam3->f_21, 7))
			{
				unk_0x7CB6FD92BE491AD9(&(uParam3->f_21), 7);
			}
			if (unk_0xFA30DFD0084E92FE(uParam3->f_21, 10))
			{
				unk_0x7CB6FD92BE491AD9(&(uParam3->f_21), 10);
			}
		}
	}
	unk_0x2A025E7CEBB76D14();
}

void func_142(var uParam0)//Position - 0x56CE
{
	if (!func_8(&(uParam0->f_15)))
	{
		func_7(&(uParam0->f_15), 0, 0);
	}
	else if (func_6(&(uParam0->f_15), 250, 0))
	{
		func_151(&(uParam0->f_15));
		func_143(0);
	}
}

void func_143(bool bParam0)//Position - 0x570A
{
	if (bParam0)
	{
		if (Global_1805CF != 2)
		{
			Global_1805CF = 2;
		}
	}
	else
	{
		switch (Global_1805CF)
		{
			case 0:
				Global_1805CF = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_144(var uParam0)//Position - 0x5750
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0;
	iVar0 = uParam0->f_25;
	iVar3 = unk_0x3171C34AB3FE6F2E(uParam0->f_25);
	if (iVar3 != func_63() && func_948(iVar3, 0, 1))
	{
		Var2 = { func_65(iVar3) };
		iVar1 = func_147(uParam0, uParam0->f_25);
		if (func_146(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x926C9CB9879D0731(&Var2))
					{
						if (unk_0xF7C6C9F82039E424(&Var2))
						{
							iVar4 = 1;
							func_145(uParam0, iVar0, 2);
						}
					}
					else if (unk_0xCE838A0680E73021(&Var2))
					{
						iVar4 = 1;
						func_145(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x926C9CB9879D0731(&Var2))
					{
						if (!unk_0xF7C6C9F82039E424(&Var2))
						{
							iVar4 = 1;
							func_145(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar4 = 1;
						func_145(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x926C9CB9879D0731(&Var2))
					{
						if (!unk_0xCE838A0680E73021(&Var2))
						{
							iVar4 = 1;
							func_145(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0xCE838A0680E73021(&Var2))
					{
						iVar4 = 1;
						func_145(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_25++;
	if (uParam0->f_25 >= 32)
	{
		uParam0->f_25 = 0;
	}
	return iVar4;
}

void func_145(var uParam0, int iParam1, int iParam2)//Position - 0x587D
{
	uParam0->f_26[iParam1 /*2*/] = iParam2;
}

bool func_146(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x588F
{
	return unk_0x700A9F370C80C9E1(&uParam0, 13);
}

var func_147(var uParam0, int iParam1)//Position - 0x589F
{
	return uParam0->f_26[iParam1 /*2*/];
}

void func_148(int iParam0, bool bParam1, int iParam2)//Position - 0x58AF
{
	if (unk_0x29CD142125FE177B(*iParam0, "COLLAPSE"))
	{
		unk_0x5E5DBD0A6623969E(bParam1);
		unk_0xF9FBC2F3F73D94C9();
	}
	if (iParam2 == 1)
	{
		if (unk_0x29CD142125FE177B(*iParam0, "DISPLAY_VIEW"))
		{
			unk_0xF9FBC2F3F73D94C9();
		}
	}
}

void func_149(var uParam0, int iParam1)//Position - 0x58E5
{
	if (!unk_0xFA30DFD0084E92FE(uParam0->f_21, 10))
	{
		unk_0x29CD142125FE177B(*iParam1, "SET_HIGHLIGHT");
		unk_0x1E1FB49121565EB6(uParam0->f_23);
		unk_0xF9FBC2F3F73D94C9();
		unk_0xF0059F27F7BB6680(&(uParam0->f_21), 10);
	}
}

void func_150()//Position - 0x591C
{
	if (Global_1805CF != 0)
	{
		Global_1805CF = 0;
	}
}

void func_151(var uParam0)//Position - 0x5931
{
	uParam0->f_1 = 0;
}

void func_152(var uParam0, int iParam1)//Position - 0x593E
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x3171C34AB3FE6F2E(iVar0);
		if (iVar2 != func_63())
		{
			if (func_948(iVar2, 0, 1))
			{
				if (uParam0->f_26[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_154(uParam0->f_26[iVar0 /*2*/], 0);
					func_153(iParam1, uParam0->f_26[iVar0 /*2*/].f_1, iVar1, Global_18402B[iVar0 /*770*/].f_D3.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_153(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x59B1
{
	if (unk_0xA7F138B5B1AB2CF6(*uParam0))
	{
		if (unk_0x29CD142125FE177B(*uParam0, "SET_ICON"))
		{
			unk_0x1E1FB49121565EB6(iParam1);
			unk_0x1E1FB49121565EB6(iParam2);
			if (iParam2 == 65)
			{
				unk_0x1E1FB49121565EB6(iParam3);
			}
			unk_0xF9FBC2F3F73D94C9();
		}
	}
}

int func_154(int iParam0, bool bParam1)//Position - 0x59ED
{
	int iVar0;
	
	iVar0 = 65;
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_155(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)//Position - 0x5A21
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_176() && iParam4 < func_175())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_180517)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1805CF == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x29CD142125FE177B(*iParam2, sVar1))
		{
			unk_0x1E1FB49121565EB6(iParam4);
			if (unk_0xFA30DFD0084E92FE(uParam3->f_21, 8) || uParam3->f_6C == 6)
			{
				func_174("");
			}
			else
			{
				unk_0x1E1FB49121565EB6(iParam10);
			}
			func_174(sParam1);
			unk_0x1E1FB49121565EB6(iParam11);
			if (uParam3->f_6C == 6)
			{
				func_174("");
			}
			else
			{
				unk_0x1E1FB49121565EB6(65);
			}
			unk_0x1E1FB49121565EB6(-1);
			func_174("");
			if (uParam3->f_6C == 6)
			{
				func_174("");
			}
			else
			{
				func_174(&sParam5);
			}
			func_160(uParam3, iParam0);
			unk_0x6A664E53A192232C(sParam9);
			unk_0x6A664E53A192232C(sParam9);
			if (func_159(uParam3))
			{
				func_158("DPAD_FRIEND");
			}
			else if (func_157(uParam3))
			{
				func_158("DPAD_FRIEND");
			}
			else if (func_156(uParam3))
			{
				func_158("DPAD_CREW");
			}
			else
			{
				func_158("");
			}
			unk_0xF9FBC2F3F73D94C9();
		}
	}
}

bool func_156(var uParam0)//Position - 0x5B41
{
	return unk_0xFA30DFD0084E92FE(uParam0->f_21, 6);
}

bool func_157(var uParam0)//Position - 0x5B52
{
	return unk_0xFA30DFD0084E92FE(uParam0->f_21, 5);
}

void func_158(char* sParam0)//Position - 0x5B63
{
	unk_0x57016C44F10111F0(sParam0);
	unk_0x64989E60CF560CA1();
}

int func_159(var uParam0)//Position - 0x5B75
{
	if (func_157(uParam0) && func_156(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_160(var uParam0, int iParam1)//Position - 0x5B96
{
	if (func_173(iParam1))
	{
		unk_0x1E1FB49121565EB6(121);
	}
	else if (func_165(iParam1))
	{
		unk_0x1E1FB49121565EB6(122);
	}
	else if (((unk_0xFA30DFD0084E92FE(Global_440000.f_1B, 15) && iParam1 > -1) && iParam1 < 32) && unk_0xFA30DFD0084E92FE(Global_24FB5C[iParam1 /*406*/].f_195, 0))
	{
		unk_0x1E1FB49121565EB6(123);
	}
	else
	{
		if (func_161())
		{
			uParam0->f_24 = 0;
		}
		unk_0x5E5DBD0A6623969E(uParam0->f_24);
	}
}

int func_161()//Position - 0x5C17
{
	if (unk_0x517823CA390A19F6())
	{
		if (func_163() || func_162())
		{
			return 1;
		}
	}
	return 0;
}

var func_162()//Position - 0x5C3C
{
	return Global_255A46.f_E;
}

int func_163()//Position - 0x5C4A
{
	if (unk_0x517823CA390A19F6())
	{
		return func_162();
	}
	return func_164(Global_440000.f_1EF38);
}

int func_164(int iParam0)//Position - 0x5C6E
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_40001.f_1373[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_165(int iParam0)//Position - 0x5CA8
{
	if ((func_948(iParam0, 0, 1) && func_169()) && func_166(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_166(int iParam0, bool bParam1)//Position - 0x5CD5
{
	return func_167(iParam0, bParam1, 1);
}

int func_167(int iParam0, bool bParam1, int iParam2)//Position - 0x5CE6
{
	int iVar0;
	
	if (iParam0 == func_63())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_168(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_18C80F[iParam0 /*558*/].f_B;
	if (iVar0 != func_63() && Global_18C80F[iVar0 /*558*/].f_B.f_199 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_168(int iParam0, int iParam1)//Position - 0x5D42
{
	if (iParam0 != func_63())
	{
		if (Global_18C80F[iParam0 /*558*/].f_B != func_63())
		{
			if (Global_18C80F[iParam0 /*558*/].f_B == iParam0 && Global_18C80F[iParam0 /*558*/].f_B.f_199 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_169()//Position - 0x5D91
{
	if (func_128(unk_0xB5CEFD608600A09F()) || func_172())
	{
		if (!func_170(unk_0xB5CEFD608600A09F(), 236))
		{
			return 0;
		}
	}
	return 1;
}

int func_170(int iParam0, int iParam1)//Position - 0x5DC1
{
	if (func_171(iParam0) == iParam1)
	{
		return func_126(iParam0);
	}
	return 0;
}

int func_171(int iParam0)//Position - 0x5DDE
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_18C80F[iVar0 /*558*/];
	}
	return -1;
}

int func_172()//Position - 0x5DFD
{
	switch (func_101(unk_0xB5CEFD608600A09F()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_173(int iParam0)//Position - 0x5E3B
{
	if (func_161())
	{
		if (func_948(iParam0, 0, 1))
		{
			return func_119(iParam0);
		}
	}
	if ((func_948(iParam0, 0, 1) && func_169()) && func_168(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_174(char* sParam0)//Position - 0x5E83
{
	unk_0xCB30200B8055CA57(sParam0);
}

int func_175()//Position - 0x5E91
{
	int iVar0;
	
	if (Global_180517)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_176()//Position - 0x5EAD
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_180517)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_177(int iParam0, int iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)//Position - 0x5EC5
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_176() && iParam3 < func_175())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_180517)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1805CF == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0xA7F138B5B1AB2CF6(*iParam1))
		{
			if (unk_0x29CD142125FE177B(*iParam1, sVar1))
			{
				unk_0x1E1FB49121565EB6(iParam3);
				if (unk_0xFA30DFD0084E92FE(uParam2->f_21, 8) || uParam2->f_6C == 6)
				{
					func_174("");
				}
				else
				{
					unk_0x1E1FB49121565EB6(iParam9);
				}
				if (uParam2->f_6C == 6 && !unk_0xF1734B55490E9045(sParam16))
				{
					func_158(sParam16);
				}
				else
				{
					func_174(&(uParam2->f_1));
				}
				unk_0x1E1FB49121565EB6(iParam11);
				if (uParam2->f_6C == 6)
				{
					func_174("");
				}
				else
				{
					unk_0x1E1FB49121565EB6(65);
				}
				if (iParam12 == 1)
				{
					unk_0x1E1FB49121565EB6(iVar0);
				}
				else
				{
					unk_0x1E1FB49121565EB6(-1);
				}
				if (func_207())
				{
					func_174("");
				}
				else if (uParam2->f_6C == 6 && !unk_0xF1734B55490E9045(sParam16))
				{
					unk_0x57016C44F10111F0("FM_AE_ONE_INT");
					unk_0xC9C304D0AABE1335(sParam16);
					unk_0xAA5C5BF0489E5553(iParam17);
					unk_0x64989E60CF560CA1();
				}
				else if (uParam2->f_6C == 5 && !unk_0xF1734B55490E9045(sParam16))
				{
					unk_0x57016C44F10111F0("FM_AE_ONE_INT");
					unk_0xC9C304D0AABE1335(sParam16);
					unk_0xAA5C5BF0489E5553(iParam17);
					unk_0x64989E60CF560CA1();
				}
				else if (uParam2->f_6C == 7 && !unk_0xF1734B55490E9045(sParam16))
				{
					unk_0x57016C44F10111F0("FM_AE_TWO_INT");
					unk_0xC9C304D0AABE1335(sParam16);
					unk_0xAA5C5BF0489E5553(iParam17);
					unk_0x64989E60CF560CA1();
				}
				else if (uParam2->f_6C == 8 && !unk_0xF1734B55490E9045(&(uParam2->f_68)))
				{
					unk_0x57016C44F10111F0("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0x3AE7CB4034BE212F(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						unk_0xAA5C5BF0489E5553(iParam10);
					}
					unk_0xC9C304D0AABE1335(&(uParam2->f_68));
					unk_0x64989E60CF560CA1();
				}
				else if (uParam2->f_6C == 9)
				{
					unk_0x57016C44F10111F0("FM_AE_CASH");
					unk_0xBCDE00BFDE9A5BD1(iParam10, 1);
					unk_0x64989E60CF560CA1();
				}
				else if (uParam2->f_6C == 10)
				{
					if (iParam10 == 0)
					{
						unk_0x57016C44F10111F0("FM_AE_CASH");
						unk_0xBCDE00BFDE9A5BD1(iParam10, 1);
						unk_0x64989E60CF560CA1();
					}
					else
					{
						unk_0x57016C44F10111F0("FM_NG_CASH");
						unk_0xBCDE00BFDE9A5BD1(iParam10, 1);
						unk_0x64989E60CF560CA1();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !unk_0xF1734B55490E9045(&(uParam2->f_68)))
					{
						func_158(&(uParam2->f_68));
					}
					else
					{
						func_174("");
					}
				}
				else if (iParam14 != -1)
				{
					unk_0x57016C44F10111F0("STRING");
					unk_0x4C36886AAFD04CF8(iParam14, 6);
					unk_0x64989E60CF560CA1();
				}
				else if (fParam13 != -1f)
				{
					unk_0x57016C44F10111F0("NUMBER");
					unk_0x3AE7CB4034BE212F(fParam13, 1);
					unk_0x64989E60CF560CA1();
				}
				else if (iParam10 != -1)
				{
					unk_0x1E1FB49121565EB6(iParam10);
				}
				else
				{
					func_174("");
				}
				if (uParam2->f_6C == 6)
				{
					func_174("");
				}
				else
				{
					func_174(&sParam4);
				}
				func_160(uParam2, iParam0);
				if (iParam12 == 1 || unk_0xF1734B55490E9045(sParam8))
				{
					func_174("");
					func_174("");
				}
				else
				{
					unk_0x6A664E53A192232C(sParam8);
					unk_0x6A664E53A192232C(sParam8);
				}
				if (func_159(uParam2))
				{
					func_158("DPAD_FRIEND");
				}
				else if (func_157(uParam2))
				{
					func_158("DPAD_FRIEND");
				}
				else if (func_156(uParam2))
				{
					func_158("DPAD_CREW");
				}
				else
				{
					func_158("");
				}
				unk_0xF9FBC2F3F73D94C9();
			}
		}
	}
}

int func_178(int iParam0)//Position - 0x6208
{
	return 0;
	switch (iParam0)
	{
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

bool func_179(int iParam0, bool bParam1)//Position - 0x622C
{
	if (!bParam1)
	{
		if (func_119(iParam0))
		{
			return 0;
		}
	}
	return Global_18C80F[iParam0 /*558*/].f_B != func_63();
}

int func_180(int iParam0, bool bParam1)//Position - 0x6257
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_128(iParam0)) && !func_139(iParam0))
	{
		iVar0 = func_184();
	}
	iVar1 = func_183(iParam0);
	if (!iVar1 == -1)
	{
		return func_181(iVar1);
	}
	return iVar0;
}

int func_181(int iParam0)//Position - 0x62A1
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_182(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_182(int iParam0)//Position - 0x6364
{
	return Global_24E35D.f_817.f_2C[iParam0 /*2*/].f_1;
}

int func_183(int iParam0)//Position - 0x637B
{
	if (!iParam0 == func_63())
	{
		if (func_179(iParam0, 1))
		{
			return Global_24E35D.f_817.f_B[func_64(iParam0)];
		}
	}
	return -1;
}

int func_184()//Position - 0x63AD
{
	return 21;
}

char* func_185(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x63B7
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0x8150E47F9B8C07E2())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 2:
			if (unk_0x8150E47F9B8C07E2())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_186(var uParam0, float fParam1, int iParam2, int iParam3)//Position - 0x6539
{
	if (func_190(iParam3))
	{
		*fParam1 = (func_187(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_178(iParam3))
	{
		*fParam1 = (func_187(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_187(int iParam0, int iParam1)//Position - 0x6589
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0x8150E47F9B8C07E2())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_189(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		
		case 2:
			if (unk_0x8150E47F9B8C07E2())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_188(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(iParam1);
}

float func_188(float fParam0)//Position - 0x662C
{
	return (fParam0 / 1.609344f);
}

float func_189(float fParam0)//Position - 0x663C
{
	return (fParam0 / 0.3048f);
}

int func_190(int iParam0)//Position - 0x664C
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_191(int iParam0)//Position - 0x66A8
{
	int iVar0;
	
	iVar0 = func_194(iParam0);
	if (iVar0 == -1)
	{
		func_192(iParam0, 1);
		return 0;
	}
	Global_14FA05[iVar0 /*5*/].f_4 = 1;
	return Global_14FA05[iVar0 /*5*/].f_2;
}

void func_192(int iParam0, bool bParam1)//Position - 0x66DE
{
	if (!func_948(iParam0, 0, 1))
	{
		return;
	}
	if (func_194(iParam0) != -1)
	{
		return;
	}
	if (Global_14FAA8)
	{
		if (iParam0 == Global_14FAA8.f_1)
		{
			return;
		}
	}
	if (func_193(iParam0))
	{
		return;
	}
	if (Global_14FACE >= 32)
	{
		return;
	}
	Global_14FAAD[Global_14FACE] = iParam0;
	Global_14FACE++;
	if (bParam1)
	{
	}
}

int func_193(int iParam0)//Position - 0x674A
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_14FACE)
	{
		if (Global_14FAAD[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_194(int iParam0)//Position - 0x677C
{
	int iVar0;
	
	if (!func_948(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_14FAA6 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_14FAA6)
	{
		if (Global_14FA05[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x516A8073F5BF5F0A(Global_14FA05[iVar0 /*5*/].f_2) && unk_0xEB606E770B747B2C(Global_14FA05[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_195(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_195(int iParam0)//Position - 0x67FB
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_14FAA6)
	{
		return;
	}
	if (unk_0x516A8073F5BF5F0A(Global_14FA05[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_14FA05[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar1, unk_0xF392EEDDF2FB749A(Global_14FA05[iParam0 /*5*/].f_2), 64);
			unk_0x8F5E9D20607FC4FF(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		unk_0x469C2D90A617CB9A(Global_14FA05[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_14FAA6)
	{
		Global_14FA05[iVar2 /*5*/] = { Global_14FA05[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_196(&(Global_14FA05[iVar2 /*5*/]));
	Global_14FAA6 = (Global_14FAA6 - 1);
}

void func_196(var uParam0)//Position - 0x68B1
{
	*uParam0 = 0;
	uParam0->f_1 = func_63();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x7AF0088ABFA713B6())
	{
		uParam0->f_3 = unk_0xED678C85A82F0AB9();
	}
}

struct<4> func_197(int iParam0)//Position - 0x68DE
{
	char cVar0[32];
	
	if (func_948(iParam0, 0, 1))
	{
		Global_26210D = { func_65(iParam0) };
		if (unk_0xF49912B78E2591B6())
		{
			if (func_146(Global_26210D))
			{
				if (!unk_0x43AECC0539840131(&Global_26210D))
				{
					return cVar0;
				}
			}
		}
		else if (!unk_0x5553DFDA03631860(0))
		{
			return cVar0;
		}
		if (func_201(&Global_26210D))
		{
			Global_2620C7 = { func_199(iParam0) };
			func_198(&Global_2620C7, &cVar0);
		}
	}
	return cVar0;
}

void func_198(var uParam0, char* sParam1)//Position - 0x695F
{
	unk_0x6B97B73981ADFBF1(uParam0, 35, sParam1);
}

struct<35> func_199(int iParam0)//Position - 0x6971
{
	struct<13> Var0;
	struct<35> Var1;
	
	if (func_200(iParam0))
	{
		return Global_140876[unk_0xB5CEFD608600A09F() /*35*/];
	}
	Var0 = { func_65(iParam0) };
	unk_0x24723877416AAAFC(&Var1, 35, &Var0);
	return Var1;
}

int func_200(int iParam0)//Position - 0x69AD
{
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		return 1;
	}
	return 0;
}

int func_201(var uParam0)//Position - 0x69C3
{
	if (unk_0x97EF4023B86C354F())
	{
		if (unk_0xB9ACC1154C623363() && unk_0xD7F4457CECF10121(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_202(int iParam0, int iParam1)//Position - 0x69E9
{
	if (iParam1 == 26)
	{
		if ((func_127(iParam0) || func_205(iParam0)) || func_204(iParam0))
		{
			return 0;
		}
	}
	if (!func_203(iParam0))
	{
		return 0;
	}
	if ((!func_213(iParam0) && Global_24FB5C[iParam0 /*406*/].f_E8 == -1) && !func_212(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_203(int iParam0)//Position - 0x6A58
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_8E, 22);
}

bool func_204(int iParam0)//Position - 0x6A71
{
	if (func_127(iParam0))
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_18C80F[iParam0 /*558*/].f_1, 8);
}

int func_205(int iParam0)//Position - 0x6A97
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0xFA30DFD0084E92FE(Global_18C80F[iParam0 /*558*/].f_1, 10) || unk_0xFA30DFD0084E92FE(Global_18C80F[iParam0 /*558*/].f_1, 9));
	}
	return 0;
}

int func_206(int iParam0)//Position - 0x6AD5
{
	int iVar0;
	
	if (iParam0 == func_63())
	{
		return 0;
	}
	if (func_17(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xFA30DFD0084E92FE(Global_18402B[iVar0 /*770*/].f_8E, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_207()//Position - 0x6B1A
{
	switch (func_101(unk_0xB5CEFD608600A09F()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		
		default:
	}
	switch (func_171(unk_0xB5CEFD608600A09F()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_139(unk_0xB5CEFD608600A09F()))
	{
		switch (func_101(unk_0xB5CEFD608600A09F()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	if (func_170(unk_0xB5CEFD608600A09F(), 236))
	{
		return 1;
	}
	return 0;
}

int func_208(int iParam0, int iParam1)//Position - 0x6C56
{
	if (Global_18C80F[iParam0 /*558*/].f_B.f_21 != -1 && func_209(Global_18C80F[iParam0 /*558*/].f_B.f_21))
	{
		return 1;
	}
	if (iParam1 && Global_18C80F[iParam0 /*558*/].f_B.f_20 != -1)
	{
		if (func_209(Global_18C80F[iParam0 /*558*/].f_B.f_20))
		{
			return 1;
		}
	}
	return 0;
}

int func_209(int iParam0)//Position - 0x6CBC
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return func_210(iParam0, 0);
	return 0;
}

int func_210(int iParam0, int iParam1)//Position - 0x6D16
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

void func_211(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x6D6B
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_948(unk_0x3171C34AB3FE6F2E(iVar0), 0, 1))
		{
			iVar1 = unk_0x3171C34AB3FE6F2E(iVar0);
			if (!func_17(iVar1, 0))
			{
				if ((func_213(iVar1) || Global_24FB5C[iVar1 /*406*/].f_E8 != -1) || func_212(iVar1))
				{
					if (func_74(iVar1, iParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

bool func_212(int iParam0)//Position - 0x6DF5
{
	return Global_18402B[iParam0 /*770*/].f_C4 != 0;
}

int func_213(int iParam0)//Position - 0x6E0A
{
	if (func_948(iParam0, 0, 1))
	{
		if (func_948(unk_0xB5CEFD608600A09F(), 0, 1))
		{
			if (unk_0x75206900382D1E30(iParam0, unk_0xB5CEFD608600A09F()) || func_101(iParam0) == 233)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_214(int iParam0, int iParam1, int iParam2)//Position - 0x6E4B
{
	if (unk_0xA7F138B5B1AB2CF6(*iParam0))
	{
		unk_0x29CD142125FE177B(*iParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x1E1FB49121565EB6(iParam1);
		unk_0x1E1FB49121565EB6(iParam2);
		unk_0xF9FBC2F3F73D94C9();
	}
}

void func_215(bool bParam0)//Position - 0x6E79
{
	if (bParam0)
	{
		if (Global_14CC7E.f_2 == 0)
		{
			Global_14CC7E.f_2 = 1;
		}
	}
	else if (Global_14CC7E.f_2 == 1)
	{
		Global_14CC7E.f_2 = 0;
	}
}

void func_216()//Position - 0x6EAB
{
	if (unk_0xFA30DFD0084E92FE(Global_267214.f_11DD, 1))
	{
		if (func_218())
		{
			func_217();
		}
	}
}

void func_217()//Position - 0x6ECD
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_252E21.f_A8F[iVar0 /*80*/].f_2 != 0)
		{
			Global_252E21.f_A8F[iVar0 /*80*/].f_2 = 5;
			unk_0xF0059F27F7BB6680(&(Global_252E21.f_A8F[iVar0 /*80*/].f_45), 0);
		}
		iVar0++;
	}
}

bool func_218()//Position - 0x6F18
{
	return Global_252E21.f_A8F[0 /*80*/].f_1 != 0;
}

int func_219()//Position - 0x6F2E
{
	if (unk_0xFA30DFD0084E92FE(Global_267214.f_11DD, 0) && func_218())
	{
		return 1;
	}
	if (unk_0xFA30DFD0084E92FE(Global_267214.f_11DD, 1) && func_218())
	{
		return 1;
	}
	return 0;
}

int func_220()//Position - 0x6F6F
{
	if (func_218())
	{
		if (func_221(Global_252E21.f_A8F[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_221(int iParam0)//Position - 0x6F96
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
			return 1;
		
		default:
	}
	return 0;
}

int func_222()//Position - 0x7016
{
	if (func_218())
	{
		if (func_223(Global_252E21.f_A8F[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_223(int iParam0)//Position - 0x703D
{
	switch (iParam0)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_224(int iParam0)//Position - 0x70CF
{
	if (Global_14CC7E.f_1 != Global_14CC7E)
	{
		Global_14CC7E.f_1 = Global_14CC7E;
	}
	if (Global_14CC7E != iParam0)
	{
		Global_14CC7E = iParam0;
	}
}

int func_225(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)//Position - 0x70FD
{
	struct<4> Var0;
	char* sVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	char* sVar5;
	int iVar6;
	
	StringCopy(&Var0, "", 16);
	bVar3 = func_279(iParam1);
	if (iParam1 == 20)
	{
		bVar2 = true;
	}
	fVar4 = func_278();
	if (iParam1 == 26 || iParam1 == 27)
	{
		if (func_277())
		{
			if (func_276() > 0 && Global_180517)
			{
				unk_0xE9DBADA362313538();
				unk_0xE7918A3D05166D98(fVar4);
				unk_0x4E0EC60D119222B1(18);
				if (unk_0xF16DAFF595E80F7C())
				{
					unk_0x39CC55A2108C1AB0();
				}
				unk_0x4E0EC60D119222B1(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_259())
		{
			func_258(iParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0xFA30DFD0084E92FE(Global_267214.f_11E0, 26))
	{
		func_258(iParam0, uParam2, 1);
		return 0;
	}
	if (!func_8(&(uParam2->f_13)))
	{
		if (func_276() == 1)
		{
			func_257(bVar3, iParam0, 0);
			func_7(&(uParam2->f_13), 0, 0);
			func_258(iParam0, uParam2, 0);
			unk_0xF0059F27F7BB6680(&(Global_267214.f_11E1), 5);
		}
	}
	if (func_8(&(uParam2->f_13)) || bParam5)
	{
		if (unk_0xF16DAFF595E80F7C())
		{
			unk_0x39CC55A2108C1AB0();
		}
		unk_0x4E0EC60D119222B1(10);
		if (func_6(&(uParam2->f_13), 10000, 0) || (func_276() == 0 && !bParam5))
		{
			func_258(iParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar2 == 0)
			{
				func_256();
				if (iParam1 == 26 || iParam1 == 27)
				{
					unk_0xE9DBADA362313538();
				}
				unk_0x4E0EC60D119222B1(18);
			}
			if (!unk_0xFA30DFD0084E92FE(uParam2->f_21, 0))
			{
				if (bVar2 == 0)
				{
					func_256();
					if (iParam1 == 26 || iParam1 == 27)
					{
						unk_0xE9DBADA362313538();
					}
					unk_0x4E0EC60D119222B1(18);
				}
				unk_0xE7918A3D05166D98(fVar4);
				if (func_257(bVar3, iParam0, 0))
				{
					func_214(iParam0, 0, 0);
					sVar1 = func_254(iParam1, &(Global_440000.f_1EF3F), bParam4);
					Var0 = { func_252(iParam1) };
					if (bParam4)
					{
						func_249(iParam0, sVar1, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 26)
					{
						func_242(iParam0, func_246(uParam2), func_243(uParam2), -1);
					}
					else if (iParam1 == 27)
					{
						sVar5 = func_235(uParam2);
						if (!unk_0xF1734B55490E9045(sParam6))
						{
							sVar5 = sParam6;
						}
						func_233(iParam0, sVar5, func_234(), -1);
					}
					else if (func_161())
					{
						uParam2->f_22 = Global_180516;
						func_249(iParam0, sVar1, &Var0, 1, -1, Global_180516, 1);
					}
					else if (bVar2)
					{
						uParam2->f_22 = Global_180516;
						func_249(iParam0, sVar1, "", 0, -1, Global_180516, 1);
					}
					else
					{
						iVar6 = func_226(iParam1);
						func_249(iParam0, sVar1, &Var0, 1, iVar6, -1, 1);
					}
					unk_0xF0059F27F7BB6680(&(uParam2->f_21), 0);
				}
			}
			if (unk_0xFA30DFD0084E92FE(uParam2->f_21, 0))
			{
				Global_180515 = uParam3;
				Global_180514 = 1;
				unk_0xE7918A3D05166D98(fVar4);
				if (bVar2)
				{
					if (uParam2->f_22 != Global_180516)
					{
						unk_0x7CB6FD92BE491AD9(&(uParam2->f_21), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_226(int iParam0)//Position - 0x73CD
{
	int iVar0;
	
	iVar0 = -1;
	if (func_232())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 25:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
		case 11:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 12:
		case 13:
		case 14:
		case 17:
			iVar0 = 2;
			break;
		
		case 15:
			iVar0 = 17;
			break;
		
		case 16:
			iVar0 = 18;
			break;
		
		case 18:
			if (func_231(unk_0xB5CEFD608600A09F()))
			{
				iVar0 = 20;
			}
			if (func_230(unk_0xB5CEFD608600A09F()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_229(unk_0xB5CEFD608600A09F()))
	{
		iVar0 = 2;
	}
	if (func_227())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_227()//Position - 0x74DD
{
	if (unk_0x517823CA390A19F6())
	{
		return func_59();
	}
	return func_228(Global_440000.f_1EF38);
}

int func_228(int iParam0)//Position - 0x7501
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_40001.f_1385[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_229(int iParam0)//Position - 0x753B
{
	return Global_24FB5C[iParam0 /*406*/].f_6F == 4;
}

bool func_230(int iParam0)//Position - 0x7550
{
	return Global_24FB5C[iParam0 /*406*/].f_6F == 7;
}

bool func_231(int iParam0)//Position - 0x7565
{
	return Global_24FB5C[iParam0 /*406*/].f_6F == 2;
}

bool func_232()//Position - 0x757A
{
	return Global_440000.f_1 == 0;
}

void func_233(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x758A
{
	if (unk_0xA7F138B5B1AB2CF6(*iParam0))
	{
		unk_0x29CD142125FE177B(*iParam0, "SET_TITLE");
		if (unk_0xF1734B55490E9045(sParam2))
		{
			func_158(sParam1);
		}
		else
		{
			unk_0x57016C44F10111F0("FM_AE_BRACKT");
			unk_0xC9C304D0AABE1335(sParam1);
			unk_0xC9C304D0AABE1335(sParam2);
			unk_0x64989E60CF560CA1();
		}
		func_158("");
		if (iParam3 != -1)
		{
			unk_0x1E1FB49121565EB6(iParam3);
		}
		unk_0xF9FBC2F3F73D94C9();
	}
}

char* func_234()//Position - 0x75E8
{
	switch (func_101(unk_0xB5CEFD608600A09F()))
	{
		case 163:
			return "BD_SORT_1";
			break;
		
		case 160:
			return "BD_SORT_4";
			break;
		
		case 154:
			return "BD_SORT_3";
			break;
		
		case 155:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_235(var uParam0)//Position - 0x763F
{
	switch (uParam0->f_70)
	{
		case 0:
			return "GR_DPD_E";
			break;
		
		case 1:
			return "GR_DPD_F";
			break;
		
		case 2:
			return "GR_DPD_S";
			break;
	}
	switch (uParam0->f_6E)
	{
		case 0:
			return "GR_DPD_A";
			break;
		
		case 1:
			return "GR_DPD_B";
			break;
		
		case 2:
			return "GR_DPD_C";
			break;
		
		case 3:
			return "GR_DPD_D";
			break;
	}
	switch (func_101(unk_0xB5CEFD608600A09F()))
	{
		case 233:
			return "H2_DPAD_SET";
			break;
		
		case 180:
			return "GB_BIGUNLOAD_T";
			break;
		
		case 182:
			return "DEAL_DEALN";
			break;
		
		case 194:
			return "PI_BIK_13_0";
			break;
		
		case 189:
			return "PI_BIK_4_1";
			break;
		
		case 193:
			return "PI_BIK_13_1";
			break;
		
		case 205:
			return "PI_BIK_13_3";
			break;
		
		case 186:
			return "CELL_BIKER_CK";
			break;
		
		case 207:
			return "DV_SH_TITLE";
			break;
		
		case 208:
			return "BA_SH_TITLE";
			break;
		
		case 209:
			return "SHU_SH_TITLE";
			break;
		
		case 210:
			return "PI_BIK_13_4";
			break;
		
		case 183:
			return "CELL_BIKER_RESC";
			break;
		
		case 199:
			return "CELL_BIKER_SEAR";
			break;
		
		case 201:
			return "CELL_BIKER_STAN";
			break;
		
		case 142:
			return "PIM_MAGM210";
			break;
		
		case 163:
			return "PIM_MAGM608";
			break;
		
		case 160:
			return "PIM_MAGM604";
			break;
		
		case 154:
			return "PIM_MAGM602";
			break;
		
		case 155:
			return "PIM_MAGM603";
			break;
		
		case 148:
			if (func_238())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_237(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_237(1))
			{
				return "PI_BIK_3_2";
			}
			return "PIM_MAGM601";
			break;
		
		case 157:
			return "PIM_MAGM207";
			break;
		
		case 159:
			return "PIM_MAGM206";
			break;
		
		case 162:
			return "PIM_MAGM607";
			break;
		
		case 164:
			return "PIM_MAGM212";
			break;
		
		case 166:
			return "GB_DPAD_HEAD";
		
		case 167:
			return "GB_DPAD_BUY";
		
		case 168:
			return "GB_DPAD_SELL";
		
		case 169:
			return "GB_DPAD_DEF";
		
		case 170:
			return "GB_DPAD_AIR";
		
		case 171:
			return "GB_DPAD_CASH";
		
		case 172:
			return "GB_DPAD_SAL";
		
		case 173:
			return "GB_DPAD_FRA";
		
		case 178:
			return "VEX_TITLEa";
		
		case 188:
			return "VEX_TITLEb";
		
		case 218:
			return "FRT_MODE";
		
		case 217:
			return "FRT_TRNS";
		
		case 214:
			return "MODE_PLW";
		
		case 215:
			return "MODE_FUL";
		
		case 216:
			return "MODE_AA";
		
		case 219:
			return "MODE_VEL";
		
		case 220:
			return "MODE_RMP";
		
		case 221:
			return "MODE_STK";
		
		case 225:
			return "GR_TITLEL";
		
		case 226:
			return "GRS_TITLEL";
		
		case 227:
			return "GRD_TITLEL";
		
		case 195:
			return "GB_STEAL_T";
		
		case 198:
			return "SC_MENU_TITLE";
		
		case 190:
			return "GB_DPAD_BSEL";
		
		case 191:
			return "GB_DPAD_BDEF";
		
		case 185:
			return "GB_DPAD_GFH";
		
		case 197:
			return "GB_DPAD_JB";
		
		case 179:
			return "CELL_JOUST";
		
		case 200:
			return "CAG_BLIP";
		
		case 192:
			if (func_236(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_B0))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_236(int iParam0)//Position - 0x7A6A
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

bool func_237(bool bParam0)//Position - 0x7A9C
{
	return func_166(unk_0xB5CEFD608600A09F(), bParam0);
}

bool func_238()//Position - 0x7AAE
{
	return (func_241() && func_239(func_240()));
}

bool func_239(int iParam0)//Position - 0x7AC7
{
	return func_168(iParam0, 1);
}

int func_240()//Position - 0x7AD6
{
	return Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_23;
}

bool func_241()//Position - 0x7AED
{
	return Global_18402B[unk_0xB5CEFD608600A09F() /*770*/] == 148;
}

void func_242(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x7B03
{
	if (unk_0xA7F138B5B1AB2CF6(*iParam0))
	{
		unk_0x29CD142125FE177B(*iParam0, "SET_TITLE");
		if (unk_0xF1734B55490E9045(sParam2))
		{
			func_158(sParam1);
		}
		else if (func_171(unk_0xB5CEFD608600A09F()) == 133)
		{
			unk_0x57016C44F10111F0("FM_AE_BRACKT_C");
			unk_0xC9C304D0AABE1335(sParam1);
			unk_0xC9C304D0AABE1335(sParam2);
			unk_0x64989E60CF560CA1();
		}
		else
		{
			unk_0x57016C44F10111F0("FM_AE_BRACKT");
			unk_0xC9C304D0AABE1335(sParam1);
			unk_0xC9C304D0AABE1335(sParam2);
			unk_0x64989E60CF560CA1();
		}
		func_158("");
		if (iParam3 != -1)
		{
			unk_0x1E1FB49121565EB6(iParam3);
		}
		unk_0xF9FBC2F3F73D94C9();
	}
}

char* func_243(var uParam0)//Position - 0x7B89
{
	int iVar0;
	
	iVar0 = func_171(unk_0xB5CEFD608600A09F());
	if (func_245())
	{
		if (uParam0->f_67 != -1)
		{
			iVar0 = uParam0->f_67;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_244())
			{
				case 0:
					return "FM_AE_SORT_2";
				
				case 1:
					return "FM_AE_SORT_2";
				
				case 2:
					return "FM_AE_SORT_3";
				
				case 3:
					return "FM_AE_SORT_2";
				
				case 4:
					return "FM_AE_SORT_2";
				
				case 5:
					return "FM_AE_SORT_2";
				
				case 6:
					return "FM_AE_SORT_2";
				
				case 7:
					return "FM_AE_SORT_13";
				
				case 8:
					return "FM_AE_SORT_4";
				
				case 9:
					return "FM_AE_SORT_2";
				
				case 10:
					return "FM_AE_SORT_2";
				
				case 11:
					return "FM_AE_SORT_2";
				
				case 12:
					return "FM_AE_SORT_2";
				
				case 13:
					return "FM_AE_SORT_2";
				
				case 14:
					return "FM_AE_SORT_5";
				
				case 15:
					return "FM_AE_SORT_9";
				
				case 16:
					return "FM_AE_SORT_9";
				
				case 17:
					return "FM_AE_SORT_9";
				
				case 18:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10";
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5";
		
		case 144:
			return "FM_AE_SORT_1";
		
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

int func_244()//Position - 0x7D2F
{
	if (func_171(unk_0xB5CEFD608600A09F()) == 133)
	{
		return Global_267214.f_12C3;
	}
	return -1;
}

bool func_245()//Position - 0x7D52
{
	return Global_183FAC;
}

char* func_246(var uParam0)//Position - 0x7D5E
{
	int iVar0;
	
	iVar0 = func_171(unk_0xB5CEFD608600A09F());
	if (func_245())
	{
		if (uParam0->f_67 != -1)
		{
			iVar0 = uParam0->f_67;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_248() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_248() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_244())
			{
				case 0:
					return "AMCH_0SLC";
				
				case 1:
					return "AMCH_1SLC";
				
				case 2:
					return "AMCH_2SLC";
				
				case 3:
					return "AMCH_3SLC";
				
				case 4:
					return "AMCH_4SLC";
				
				case 5:
					return "AMCH_5SLC";
				
				case 6:
					return "AMCH_6SLC";
				
				case 7:
					return "AMCH_7SLC";
				
				case 8:
					return "AMCH_8SLC";
				
				case 9:
					return "AMCH_12SLC";
				
				case 10:
					return "AMCH_13SLC";
				
				case 11:
					return "AMCH_15SLC";
				
				case 12:
					return "AMCH_16SLC";
				
				case 13:
					return "AMCH_23SLC";
				
				case 14:
					return "AMCH_9SLC";
				
				case 15:
					return "AMCH_19SLC";
				
				case 16:
					return "AMCH_20SLC";
				
				case 17:
					return "AMCH_21SLC";
				
				case 18:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10";
		
		case 138:
			return "PIM_TA4";
		
		case 139:
			return "PIM_TA5";
		
		case 140:
			return "PIM_TA3";
		
		case 141:
			return "PIM_TA8";
		
		case 144:
			return "PIM_TA2";
		
		case 129:
			if (func_247() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 146:
			return "PIM_TA6";
	}
	return "";
}

int func_247()//Position - 0x7F52
{
	return Global_267214.f_12C6;
}

int func_248()//Position - 0x7F61
{
	if (func_171(unk_0xB5CEFD608600A09F()) == 132)
	{
		return Global_267214.f_12C1;
	}
	return -1;
}

void func_249(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)//Position - 0x7F84
{
	int iVar0;
	int iVar1;
	
	if (unk_0xA7F138B5B1AB2CF6(*iParam0))
	{
		unk_0x29CD142125FE177B(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_174(sParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x57016C44F10111F0(sParam1);
			unk_0xAA5C5BF0489E5553(iParam5);
			unk_0x64989E60CF560CA1();
		}
		else
		{
			func_158(sParam1);
		}
		if (func_277() && iParam6)
		{
			if (func_251())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0x57016C44F10111F0("LBD_DPD_CNT");
			unk_0xAA5C5BF0489E5553(iVar0);
			unk_0xAA5C5BF0489E5553(iVar1);
			unk_0x64989E60CF560CA1();
		}
		else
		{
			func_158(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x1E1FB49121565EB6(iParam4);
			if (func_250(unk_0xB5CEFD608600A09F()))
			{
				unk_0x1E1FB49121565EB6(166);
			}
			else if (func_59())
			{
				unk_0x1E1FB49121565EB6(220);
			}
		}
		unk_0xF9FBC2F3F73D94C9();
	}
}

int func_250(int iParam0)//Position - 0x8047
{
	if (func_231(iParam0) || func_230(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_251()//Position - 0x8069
{
	return Global_180517;
}

struct<4> func_252(int iParam0)//Position - 0x8075
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_253(unk_0xB5CEFD608600A09F()) || func_229(unk_0xB5CEFD608600A09F()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 12:
		case 13:
		case 14:
		case 17:
		case 15:
		case 16:
		case 18:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_440000.f_22, 16);
			break;
	}
	if (func_161() && unk_0x517823CA390A19F6())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_440000.f_22, 16);
	}
	return Var0;
}

bool func_253(int iParam0)//Position - 0x810F
{
	return Global_24FB5C[iParam0 /*406*/].f_6F == 5;
}

char* func_254(int iParam0, char* sParam1, bool bParam2)//Position - 0x8124
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_161() || unk_0xF1734B55490E9045(sParam1)))
	{
		uVar0 = func_255();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 24)
	{
		if (Global_1805E1 == 0)
		{
			Global_1805E1 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0xF1734B55490E9045(sParam1))
	{
		if (Global_1805E1 == 1)
		{
			Global_1805E1 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1805E1 == 0)
		{
			Global_1805E1 = 1;
		}
		switch (iParam0)
		{
			case 0:
				return "HUD_LBD_DM";
				break;
			
			case 1:
				return "HUD_LBD_TDM";
				break;
			
			case 5:
				return "HUD_LBD_GRCE";
				break;
			
			case 4:
			case 9:
			case 10:
			case 6:
			case 25:
			case 11:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 18:
			case 14:
			case 17:
			case 15:
			case 13:
			case 12:
			case 16:
			case 19:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 21:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_255()//Position - 0x8282
{
	if (unk_0xB3132AD292C8DA36())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0x2C748E7CAA8D1D06())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0x9115F2BCE1FD06B6())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0x5CE1D384CAEEB356())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_256()//Position - 0x82C6
{
	Global_8FCD = 1;
}

bool func_257(bool bParam0, int iParam1, bool bParam2)//Position - 0x82D2
{
	if (bParam0)
	{
		*iParam1 = unk_0x9934FEFB3B8C6DB8("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*iParam1 = unk_0x9934FEFB3B8C6DB8("MP_SPECTATOR_CARD");
	}
	else
	{
		*iParam1 = unk_0x9934FEFB3B8C6DB8("mp_matchmaking_card");
	}
	return unk_0xA7F138B5B1AB2CF6(*iParam1);
}

void func_258(int iParam0, var uParam1, bool bParam2)//Position - 0x8312
{
	unk_0x7CB6FD92BE491AD9(&(uParam1->f_21), 7);
	Global_180515 = 0;
	func_150();
	Global_180514 = 0;
	uParam1->f_1B = 0;
	if (bParam2)
	{
		if (func_8(&(uParam1->f_13)))
		{
			func_151(&(uParam1->f_13));
			unk_0x7CB6FD92BE491AD9(&(Global_267214.f_11E1), 5);
		}
	}
	if (unk_0xA7F138B5B1AB2CF6(*iParam0))
	{
		unk_0xB0B0FE33F4F22679(iParam0);
	}
	if (unk_0xFA30DFD0084E92FE(uParam1->f_21, 0))
	{
		unk_0x7CB6FD92BE491AD9(&(uParam1->f_21), 0);
	}
	unk_0xE7918A3D05166D98(0f);
}

int func_259()//Position - 0x8384
{
	if (func_275())
	{
		return 0;
	}
	if (func_274())
	{
		return 0;
	}
	if (!func_272())
	{
		return 0;
	}
	if (!func_270())
	{
		return 0;
	}
	if (func_269(8, -1))
	{
		return 0;
	}
	if (func_276() == 2)
	{
		return 0;
	}
	if (Global_267214.f_11B1)
	{
		return 0;
	}
	if (func_268())
	{
		return 0;
	}
	else if (!func_265(unk_0xB5CEFD608600A09F(), 1) && Global_1403E4[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_264(1) || func_262(1)) || Global_4336.f_7C) || Global_4336)
	{
		return 0;
	}
	if (unk_0xE186ACC7BE9B244E())
	{
		return 0;
	}
	if (func_260(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	if (Global_193981)
	{
		return 0;
	}
	if (Global_193985)
	{
		return 0;
	}
	if (func_79(0))
	{
		return 0;
	}
	if (unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_111.f_13, 4))
	{
		return 0;
	}
	if (Global_14B1E6)
	{
		return 0;
	}
	if ((Global_199A7E.f_2C1.f_5 || Global_19A579.f_2C1.f_5) || Global_1996C1.f_2C1.f_5)
	{
		return 0;
	}
	return 1;
}

int func_260(int iParam0)//Position - 0x84CC
{
	if (func_17(iParam0, 0))
	{
		return 1;
	}
	if (func_261())
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

bool func_261()//Position - 0x850E
{
	return unk_0xFA30DFD0084E92FE(Global_240006, 3);
}

int func_262(bool bParam0)//Position - 0x851F
{
	if (unk_0x546584EE3E61A6C6())
	{
		if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			if (func_263(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x8FCEEB789599BD9B(0, 25) || unk_0x8FCEEB789599BD9B(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_4336.f_82)
	{
		return 0;
	}
	if (unk_0x8FCEEB789599BD9B(0, 19) || (!bParam0 && unk_0xD3C4A010282C31F2(0, 19)))
	{
		return 1;
	}
	if (unk_0x8ACB0C3FACC09467())
	{
		if (((unk_0x8FCEEB789599BD9B(0, 166) || unk_0x8FCEEB789599BD9B(0, 167)) || unk_0x8FCEEB789599BD9B(0, 168)) || unk_0x8FCEEB789599BD9B(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0xD3C4A010282C31F2(0, 166) || unk_0xD3C4A010282C31F2(0, 167)) || unk_0xD3C4A010282C31F2(0, 168)) || unk_0xD3C4A010282C31F2(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_263(int iParam0)//Position - 0x860A
{
	int iVar0;
	
	if (unk_0xADF4D6B0407B3CC1())
	{
		if (!unk_0x36CEFBE9B745A58D(iParam0))
		{
			unk_0x9CDD10270A1ACF6F(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == 177293209)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_264(bool bParam0)//Position - 0x8667
{
	if (bParam0)
	{
		return (Global_4336.f_4 && Global_4336.f_68 == 4);
	}
	return Global_4336.f_4;
}

int func_265(int iParam0, bool bParam1)//Position - 0x8690
{
	if (bParam1)
	{
		if (func_266(iParam0))
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

bool func_266(int iParam0)//Position - 0x86BC
{
	return func_267(iParam0);
}

bool func_267(int iParam0)//Position - 0x86CA
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_D.f_1, 0);
}

bool func_268()//Position - 0x86E4
{
	return Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_C4 != 0;
}

bool func_269(int iParam0, int iParam1)//Position - 0x86FB
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

int func_270()//Position - 0x8736
{
	if (func_271() == 0)
	{
		return 1;
	}
	return 0;
}

int func_271()//Position - 0x874B
{
	return Global_1406D2.f_12;
}

int func_272()//Position - 0x8759
{
	if (func_273())
	{
		return 1;
	}
	if (unk_0x17FAADF9916EF741())
	{
		return 0;
	}
	if (unk_0x422F9EDE839E6ABB() || unk_0x26641E1BFD792DBC())
	{
		return 0;
	}
	if (unk_0xF6023EB13558345B())
	{
		return 0;
	}
	return 1;
}

bool func_273()//Position - 0x8798
{
	return Global_1406B6;
}

bool func_274()//Position - 0x87A4
{
	return Global_18402B[unk_0xB5CEFD608600A09F() /*770*/] == 5;
}

bool func_275()//Position - 0x87B9
{
	return unk_0x105601648511CC64() <= Global_43C1.f_1671 + 100;
}

int func_276()//Position - 0x87CE
{
	return Global_14CC81.f_44;
}

int func_277()//Position - 0x87DC
{
	if (Global_180516 > 16)
	{
		return 1;
	}
	return 0;
}

float func_278()//Position - 0x87F2
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0xFAD6B644971DD747()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_279(int iParam0)//Position - 0x8816
{
	switch (iParam0)
	{
		case 20:
		case 26:
		case 27:
			return 1;
			break;
	}
	return 0;
}

int func_280()//Position - 0x883F
{
	if (func_281(unk_0xB5CEFD608600A09F()))
	{
		return Global_141780;
	}
	return 0;
}

int func_281(int iParam0)//Position - 0x885A
{
	if (unk_0x7AF0088ABFA713B6())
	{
		if (func_17(iParam0, 0))
		{
			return unk_0xE502970386494D01(iParam0);
		}
	}
	return 0;
}

int func_282()//Position - 0x887D
{
	if (func_280())
	{
		return 1;
	}
	if (func_204(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	if (func_245())
	{
		return 1;
	}
	if (func_128(unk_0xB5CEFD608600A09F()))
	{
		switch (func_171(unk_0xB5CEFD608600A09F()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			
			case 140:
				if (!func_283(unk_0xB5CEFD608600A09F()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_283(unk_0xB5CEFD608600A09F()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_283(unk_0xB5CEFD608600A09F()))
				{
					return 1;
				}
				break;
			
			case 175:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_283(int iParam0)//Position - 0x8958
{
	return unk_0xFA30DFD0084E92FE(Global_18C80F[iParam0 /*558*/].f_1, 4);
}

int func_284(int iParam0)//Position - 0x8970
{
	if (iParam0 == 27)
	{
		if ((func_128(unk_0xB5CEFD608600A09F()) && !func_139(unk_0xB5CEFD608600A09F())) && !func_170(unk_0xB5CEFD608600A09F(), 236))
		{
			return 1;
		}
	}
	if (iParam0 == 26)
	{
		if (func_102(unk_0xB5CEFD608600A09F(), 0) && func_139(unk_0xB5CEFD608600A09F()))
		{
			return 1;
		}
		if (func_130(unk_0xB5CEFD608600A09F()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_285()//Position - 0x89E1
{
	int iVar0;
	
	iVar0 = -1;
	if (!func_17(unk_0xB5CEFD608600A09F(), 0))
	{
		iVar0 = unk_0x6BAA0516CC970D99();
	}
	else
	{
		iVar0 = func_286();
	}
	if (iVar0 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Local_106[iVar0 /*14*/].f_1, 1);
	}
	return 0;
}

int func_286()//Position - 0x8A23
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_280;
	if (unk_0x96B1061E8F3CBC9A(iVar1))
	{
		if (unk_0xF6391659C669C3B1(iVar1))
		{
			iVar2 = unk_0xDE780EBA36114734(iVar1);
			iVar0 = iVar2;
		}
	}
	return iVar0;
}

void func_287()//Position - 0x8A5E
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x432AA9CCB3EE0174(1))
	{
		iVar1 = unk_0x2BFAC254CC069912(1, iVar0);
		switch (iVar1)
		{
			case 182:
				func_288(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_288(int iParam0)//Position - 0x8A9B
{
	struct<4> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<14> Var6;
	int iVar7;
	
	if (unk_0x414AA1932D1C88E2(1, iParam0, &Var0, 11))
	{
		iVar7 = 0;
		while (iVar7 < 4)
		{
			if (!unk_0xFA30DFD0084E92FE(Local_105.f_71, iVar7))
			{
				if (!unk_0xFA30DFD0084E92FE(Local_106[unk_0x6BAA0516CC970D99() /*14*/].f_6, iVar7))
				{
					if (unk_0x724D816EA203A79E(Var0))
					{
						if (unk_0xD27AC0E9B78CFDD7(Var0))
						{
							if (!unk_0xFA30DFD0084E92FE(Local_105.f_6D, iVar7))
							{
								if (!unk_0xFA30DFD0084E92FE(Local_106[unk_0x6BAA0516CC970D99() /*14*/].f_5, iVar7))
								{
									if (unk_0x8EA6CABD14F1B89A(Local_105.f_2[iVar7 /*26*/].f_2))
									{
										if (unk_0x724D816EA203A79E(unk_0x19D7F09C2FABDDA0(Local_105.f_2[iVar7 /*26*/].f_2)))
										{
											if (unk_0x233ED4CD1F1A42C1(Var0) == unk_0x19D7F09C2FABDDA0(Local_105.f_2[iVar7 /*26*/].f_2))
											{
												if (unk_0x724D816EA203A79E(Var0.f_1))
												{
													if (unk_0x386592AF38881675(Var0.f_1))
													{
														if (unk_0x399F7937FFE4DEBF(Var0.f_1) == unk_0xBC25C936A095B5BA())
														{
															if (func_848() == Local_105.f_76)
															{
																unk_0xF0059F27F7BB6680(&(Local_106[unk_0x6BAA0516CC970D99() /*14*/].f_5), iVar7);
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
						else if (unk_0x386592AF38881675(Var0))
						{
							iVar2 = unk_0x399F7937FFE4DEBF(Var0);
							if (iVar2 == unk_0xE48AD7BF7762E114(Local_105.f_2[iVar7 /*26*/].f_1))
							{
								if (unk_0x724D816EA203A79E(Var0.f_1))
								{
									if (unk_0x386592AF38881675(Var0.f_1))
									{
										iVar1 = unk_0x399F7937FFE4DEBF(Var0.f_1);
										if (unk_0x15DBD981998D4FE1(iVar1))
										{
											iVar4 = unk_0x5363B43856FA7779(iVar1);
											if (unk_0xF6391659C669C3B1(iVar4))
											{
												if (Var0.f_3)
												{
													if (iVar4 == unk_0xB5CEFD608600A09F())
													{
														Local_106[unk_0x6BAA0516CC970D99() /*14*/].f_B++;
														unk_0xF0059F27F7BB6680(&(Local_106[unk_0x6BAA0516CC970D99() /*14*/].f_6), iVar7);
														Var6.f_2 = -566878099;
														Var6.f_A = unk_0xB5CEFD608600A09F();
														func_294(Var6, func_295(0));
														func_289("HUNT_TCKP", 1);
													}
												}
											}
											else if (!unk_0xFA30DFD0084E92FE(Local_106[unk_0x6BAA0516CC970D99() /*14*/].f_7, iVar7))
											{
												if (Var0.f_3)
												{
													iVar4 = unk_0x5363B43856FA7779(iVar1);
													unk_0xF0059F27F7BB6680(&(Local_106[unk_0x6BAA0516CC970D99() /*14*/].f_7), iVar7);
												}
											}
										}
										else if (!unk_0xFA30DFD0084E92FE(Local_106[unk_0x6BAA0516CC970D99() /*14*/].f_7, iVar7))
										{
											if (Var0.f_3)
											{
												unk_0xF0059F27F7BB6680(&(Local_106[unk_0x6BAA0516CC970D99() /*14*/].f_7), iVar7);
											}
										}
									}
									else if (!unk_0xFA30DFD0084E92FE(Local_106[unk_0x6BAA0516CC970D99() /*14*/].f_7, iVar7))
									{
										if (Var0.f_3)
										{
											unk_0xF0059F27F7BB6680(&(Local_106[unk_0x6BAA0516CC970D99() /*14*/].f_7), iVar7);
										}
									}
								}
								else if (!unk_0xFA30DFD0084E92FE(Local_106[unk_0x6BAA0516CC970D99() /*14*/].f_7, iVar7))
								{
									if (Var0.f_3)
									{
										unk_0xF0059F27F7BB6680(&(Local_106[unk_0x6BAA0516CC970D99() /*14*/].f_7), iVar7);
									}
								}
							}
						}
					}
				}
			}
			iVar7++;
		}
	}
	if (func_285())
	{
		if (!func_105(unk_0xB5CEFD608600A09F(), 20))
		{
			if (unk_0x724D816EA203A79E(Var0))
			{
				if (unk_0x386592AF38881675(Var0))
				{
					iVar2 = unk_0x399F7937FFE4DEBF(Var0);
					if (unk_0x15DBD981998D4FE1(iVar2))
					{
						iVar3 = unk_0x5363B43856FA7779(iVar2);
						if (unk_0x724D816EA203A79E(Var0.f_1))
						{
							if (unk_0x386592AF38881675(Var0.f_1))
							{
								iVar1 = unk_0x399F7937FFE4DEBF(Var0.f_1);
								if (unk_0x15DBD981998D4FE1(iVar1))
								{
									iVar4 = unk_0x5363B43856FA7779(iVar1);
									if (iVar4 == unk_0xB5CEFD608600A09F())
									{
										if (unk_0xF6391659C669C3B1(iVar3))
										{
											if (func_179(iVar3, 1))
											{
												if (Local_105.f_76 > -1)
												{
													iVar5 = unk_0x4ED43B67B3F05E0F(unk_0xCFA8A401AAD7BB5A(Local_105.f_76));
													if (func_74(iVar3, iVar5, 1))
													{
														if (!func_133())
														{
															func_129(0);
															func_122();
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_289(char* sParam0, int iParam1)//Position - 0x8DE4
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x2E94302CFF011F2E(sParam0);
	iVar0 = unk_0x5E48BB10C6423FD5(0, 1);
	func_290(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_290(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x8E10
{
	int iVar0;
	
	if ((!func_293() || !unk_0x517823CA390A19F6()) || !func_17(unk_0xB5CEFD608600A09F(), 0))
	{
		return;
	}
	iVar0 = func_291(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_195C05.f_5[iVar0 /*53*/] = iParam0;
		Global_195C05.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_195C05.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_195C05.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_195C05.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_195C05.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_195C05.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_195C05.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_195C05.f_5[iVar0 /*53*/].f_C), sParam3, 64);
		StringCopy(&(Global_195C05.f_5[iVar0 /*53*/].f_1C[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_195C05.f_5[iVar0 /*53*/].f_1C[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_195C05.f_5[iVar0 /*53*/].f_1C[2 /*6*/]), sParam11, 24);
	}
}

int func_291(int iParam0)//Position - 0x8F18
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_195C05 - 1))
	{
		if (iParam0 > Global_195C05.f_5[iVar0 /*53*/].f_1)
		{
			func_292(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_195C05++;
	if (Global_195C05 > 5)
	{
		Global_195C05 = 5;
		return Global_195C05;
	}
	return (Global_195C05 - 1);
}

void func_292(int iParam0)//Position - 0x8F7A
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_195C05.f_5[iVar0 /*53*/] = { Global_195C05.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_293()//Position - 0x8FB3
{
	return unk_0x7B2F21BFE86AEB61(-1762644250);
}

void func_294(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)//Position - 0x8FC4
{
	Param0 = -471892217;
	Param0.f_1 = unk_0xB5CEFD608600A09F();
	if (!iParam13 == 0)
	{
		unk_0x38E776D9FA75679B(1, &Param0, 14, iParam13);
	}
}

int func_295(int iParam0)//Position - 0x8FF1
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x81C86888AEA2F49B())
	{
		if (unk_0x05086B70D2CFEA6F(unk_0xCFA8A401AAD7BB5A(iVar1)))
		{
			iVar2 = unk_0x4ED43B67B3F05E0F(unk_0xCFA8A401AAD7BB5A(iVar1));
			if (func_948(iVar2, 0, 0))
			{
				if (iVar2 != unk_0xB5CEFD608600A09F() || iParam0)
				{
					unk_0xF0059F27F7BB6680(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_296()//Position - 0x904E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!func_17(unk_0xB5CEFD608600A09F(), 0))
	{
		if (unk_0xFA30DFD0084E92FE(iLocal_107, 14))
		{
			unk_0x7CB6FD92BE491AD9(&iLocal_107, 14);
		}
		return;
	}
	iVar0 = Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_280;
	if (!unk_0xFA30DFD0084E92FE(iLocal_107, 14))
	{
		if (Local_106[unk_0x6BAA0516CC970D99() /*14*/].f_1 != 0)
		{
			Local_106[unk_0x6BAA0516CC970D99() /*14*/].f_1 = 0;
		}
		unk_0xF0059F27F7BB6680(&iLocal_107, 14);
	}
	if (!unk_0xFA30DFD0084E92FE(iLocal_107, 15))
	{
		unk_0xF0059F27F7BB6680(&iLocal_107, 15);
		func_777();
	}
	if (unk_0x96B1061E8F3CBC9A(iVar0))
	{
		if (unk_0xF6391659C669C3B1(iVar0))
		{
			iVar1 = unk_0xDE780EBA36114734(iVar0);
			iVar2 = iVar1;
			iVar3 = Local_106[iVar2 /*14*/].f_9;
			switch (iVar3)
			{
				case 0:
					func_734();
					func_716();
					func_701();
					break;
				
				case 2:
					func_297();
					break;
				
				case 3:
					func_861();
					break;
				}
			}
	}
}

void func_297()//Position - 0x9135
{
	struct<20> Var0;
	int iVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	int iVar5;
	
	Var0.f_2 = 1065353216;
	Var0.f_3 = 1065353216;
	Var0.f_4 = 1;
	Var0.f_9 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	iVar1 = unk_0x6BAA0516CC970D99();
	iVar2 = unk_0xB5CEFD608600A09F();
	if (func_17(unk_0xB5CEFD608600A09F(), 0))
	{
		iVar1 = func_286();
		iVar2 = Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_280;
	}
	if (!unk_0xFA30DFD0084E92FE(Local_106[iVar1 /*14*/].f_1, 4))
	{
		if (!unk_0xFA30DFD0084E92FE(iLocal_107, 9))
		{
			if (unk_0xFA30DFD0084E92FE(Local_105.f_1, 1))
			{
				if (iVar1 == Local_105.f_76 || func_848() == Local_105.f_76)
				{
					if (func_130(iVar2) >= 2)
					{
						sVar3 = func_700(iVar2);
						iVar4 = func_699(iVar2);
						func_697(87, "GB_WINNER", "BIGM_HUNTD", sVar3, iVar4, 0, -1, -1, -1, 2, -1);
					}
					if (iVar2 == unk_0xB5CEFD608600A09F())
					{
						if (!unk_0xFA30DFD0084E92FE(iLocal_107, 6))
						{
							func_596(1, 1, 0, 0, -1, -1, -1, -1, -1, 0);
							unk_0xF0059F27F7BB6680(&iLocal_107, 6);
						}
						Var0 = func_595();
						Var0.f_1 = func_594();
						func_410(166, 1, &Var0, 0);
						unk_0xA98B19EC1C93FC3C(iVar2);
						iLocal_127 = unk_0x8C6B6C3774164BB5();
						unk_0xAEC867D0DBB7AFEB(0);
						unk_0xF0059F27F7BB6680(&iLocal_107, 17);
						func_7(&uLocal_128, 0, 0);
					}
				}
				else if (func_285())
				{
					if (func_179(iVar2, 1))
					{
						if (func_130(iVar2) >= 2)
						{
							sVar3 = func_700(unk_0x3171C34AB3FE6F2E(Local_105.f_77));
							iVar4 = func_699(unk_0x3171C34AB3FE6F2E(Local_105.f_77));
							func_697(88, "GB_WORK_OVER", "BIGM_HUNTD", sVar3, iVar4, 0, -1, -1, -1, 2, -1);
						}
						if (iVar2 == unk_0xB5CEFD608600A09F())
						{
							if (!unk_0xFA30DFD0084E92FE(iLocal_107, 6))
							{
								func_596(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
								unk_0xF0059F27F7BB6680(&iLocal_107, 6);
							}
							if (func_123(iVar2))
							{
								Var0 = func_409();
								Var0.f_1 = func_408();
							}
							func_410(166, 0, &Var0, 0);
						}
					}
					else
					{
						if (func_130(iVar2) >= 2)
						{
							sVar3 = func_700(unk_0x3171C34AB3FE6F2E(Local_105.f_77));
							iVar4 = func_699(unk_0x3171C34AB3FE6F2E(Local_105.f_77));
							func_697(88, "GB_WORK_OVER", "BIGM_HUNTD", sVar3, iVar4, 0, -1, -1, -1, 2, -1);
						}
						if (iVar2 == unk_0xB5CEFD608600A09F())
						{
							if (!unk_0xFA30DFD0084E92FE(iLocal_107, 6))
							{
								func_596(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
								unk_0xF0059F27F7BB6680(&iLocal_107, 6);
							}
							if (func_123(iVar2))
							{
								Var0 = func_409();
								Var0.f_1 = func_408();
							}
							func_410(166, 0, &Var0, 0);
						}
					}
				}
				unk_0xF0059F27F7BB6680(&iLocal_107, 9);
			}
			else if (unk_0xFA30DFD0084E92FE(Local_105.f_1, 3))
			{
				iVar5 = (4 - Local_105.f_73);
				if (iVar1 == Local_105.f_76 || func_848() == Local_105.f_76)
				{
					if (func_130(iVar2) >= 2)
					{
						sVar3 = func_402();
						iVar4 = func_699(iVar2);
						func_697(88, "GB_WORK_OVER", "BIGM_HUNFD", sVar3, iVar4, 0, -1, -1, -1, 2, -1);
					}
					if (iVar2 == unk_0xB5CEFD608600A09F())
					{
						if (!unk_0xFA30DFD0084E92FE(iLocal_107, 6))
						{
							func_596(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
							unk_0xF0059F27F7BB6680(&iLocal_107, 6);
						}
						Var0 = func_595();
						Var0.f_1 = func_594();
						func_410(166, 0, &Var0, 0);
					}
				}
				else
				{
					if (func_130(iVar2) >= 2)
					{
						sVar3 = func_700(unk_0x3171C34AB3FE6F2E(Local_105.f_77));
						iVar4 = func_699(unk_0x3171C34AB3FE6F2E(Local_105.f_77));
						if (iVar5 == 1)
						{
							func_697(87, "GB_WINNER", "BIGM_HUN1S", sVar3, iVar4, 0, iVar5, -1, -1, 2, -1);
						}
						else if (iVar5 > 1)
						{
							func_697(87, "GB_WINNER", "BIGM_HUNRS", sVar3, iVar4, 0, iVar5, -1, -1, 2, -1);
						}
					}
					if (iVar2 == unk_0xB5CEFD608600A09F())
					{
						if (!unk_0xFA30DFD0084E92FE(iLocal_107, 6))
						{
							func_596(1, 1, 0, 0, -1, -1, -1, -1, -1, 0);
							unk_0xF0059F27F7BB6680(&iLocal_107, 6);
						}
						if (func_123(iVar2))
						{
							Var0 = func_409();
							Var0.f_1 = func_408();
						}
						func_410(166, 1, &Var0, 0);
						unk_0xA98B19EC1C93FC3C(unk_0xB5CEFD608600A09F());
					}
				}
				unk_0xF0059F27F7BB6680(&iLocal_107, 9);
			}
			else if (unk_0xFA30DFD0084E92FE(Local_105.f_1, 5))
			{
				if (func_362())
				{
					if (func_847())
					{
						if (func_130(iVar2) >= 2)
						{
						}
					}
					else if (func_130(iVar2) >= 2)
					{
						func_331(88, "GB_WORK_OVER", "BIGM_HUNTRBQ", 1, -1, 2, 1);
					}
				}
				if (iVar2 == unk_0xB5CEFD608600A09F())
				{
					if (!unk_0xFA30DFD0084E92FE(iLocal_107, 6))
					{
						func_596(0, 8, 0, 0, -1, -1, -1, -1, -1, 0);
						unk_0xF0059F27F7BB6680(&iLocal_107, 6);
					}
					func_410(166, 0, &Var0, 0);
				}
				unk_0xF0059F27F7BB6680(&iLocal_107, 9);
			}
		}
		if (unk_0xFA30DFD0084E92FE(iLocal_107, 9))
		{
			func_777();
			if (!unk_0xFA30DFD0084E92FE(iLocal_108, 8))
			{
				func_317();
				func_73();
				unk_0xF0059F27F7BB6680(&iLocal_108, 8);
			}
			if (!unk_0xFA30DFD0084E92FE(iLocal_107, 10))
			{
			}
			if (func_298(&uLocal_115, 0, 0))
			{
				if (iVar1 == unk_0x6BAA0516CC970D99())
				{
					unk_0xF0059F27F7BB6680(&(Local_106[unk_0x6BAA0516CC970D99() /*14*/].f_1), 4);
				}
			}
			else if (unk_0xFA30DFD0084E92FE(iLocal_107, 17))
			{
				if (func_6(&uLocal_128, 10000, 0))
				{
					unk_0xAEC867D0DBB7AFEB(iLocal_127);
					unk_0x7CB6FD92BE491AD9(&iLocal_107, 17);
				}
			}
		}
	}
}

int func_298(var uParam0, bool bParam1, int iParam2)//Position - 0x9634
{
	bool bVar0;
	
	func_106(29);
	if ((*uParam0 > 0 && !func_218()) && func_130(unk_0xB5CEFD608600A09F()) != 0)
	{
		if (!func_314())
		{
			func_313();
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_8(&(uParam0->f_3)))
			{
				func_7(&(uParam0->f_3), 0, 0);
			}
			else if (func_6(&(uParam0->f_3), 1000, 0))
			{
				unk_0xF0059F27F7BB6680(&(Global_19693F.f_3), 2);
				if (bParam1)
				{
					unk_0xF0059F27F7BB6680(&(Global_267214.f_11DD), 0);
					func_7(&(uParam0->f_5), 0, 0);
				}
				func_7(&(uParam0->f_1), 0, 0);
				func_312(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_8(&(uParam0->f_5)))
			{
				if (func_6(&(uParam0->f_5), 3000, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_305(iParam2);
				func_312(uParam0, 2);
			}
			break;
		
		case 2:
			func_305(0);
			if (func_6(&(uParam0->f_1), 15000, 0))
			{
				if (func_299(func_300(0)))
				{
					unk_0x7456702622C62EA0(1);
				}
				func_312(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_6(&(uParam0->f_1), 23500, 0))
			{
				unk_0x7CB6FD92BE491AD9(&(Global_267214.f_11DD), 1);
				unk_0x7CB6FD92BE491AD9(&(Global_19693F.f_3), 2);
				func_312(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0x7CB6FD92BE491AD9(&(Global_267214.f_11DD), 1);
			unk_0x7CB6FD92BE491AD9(&(Global_19693F.f_3), 2);
			return 1;
	}
	return 0;
}

int func_299(char* sParam0)//Position - 0x97AE
{
	unk_0xF07D20149ECBC61E(sParam0);
	return unk_0xA66DBDA0A072514A(0);
}

char* func_300(int iParam0)//Position - 0x97C1
{
	if (((func_303(unk_0xB5CEFD608600A09F()) || func_302(unk_0xB5CEFD608600A09F())) || func_238()) || iParam0)
	{
		if (func_302(unk_0xB5CEFD608600A09F()))
		{
			return "BG_LBD_HELP";
		}
		return "BG_LBD_HELPW";
	}
	if (func_209(func_301()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_301()//Position - 0x9823
{
	return Global_190DD1;
}

bool func_302(int iParam0)//Position - 0x982F
{
	return func_210(func_101(iParam0), 0);
}

bool func_303(int iParam0)//Position - 0x9842
{
	return func_304(func_101(iParam0));
}

int func_304(int iParam0)//Position - 0x9854
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_18402B[unk_0xB5CEFD608600A09F() /*770*/] == 148 && func_168(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_23, 1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 182:
		case 183:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 197:
		case 198:
		case 199:
		case 200:
		case 201:
		case 205:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
			return 1;
	}
	return 0;
}

void func_305(int iParam0)//Position - 0x9936
{
	if (unk_0xFA30DFD0084E92FE(Global_267214.f_11DD, 0))
	{
		if (((((((((((!unk_0x7382A6B79BD5F585() && !unk_0xFA30DFD0084E92FE(Global_267214.f_310, 2)) && func_948(unk_0xB5CEFD608600A09F(), 1, 1)) && !Global_10AB8) && !Global_CF9C) && !unk_0x17FAADF9916EF741()) && !func_105(unk_0xB5CEFD608600A09F(), 22)) && func_130(unk_0xB5CEFD608600A09F()) != 0) && !func_310(func_311())) && !func_303(unk_0xB5CEFD608600A09F())) && !func_309(func_101(unk_0xB5CEFD608600A09F()))) && !func_308(func_101(unk_0xB5CEFD608600A09F())))
		{
			unk_0xF0059F27F7BB6680(&(Global_267214.f_11DD), 1);
			func_307(func_300(iParam0), -1);
			func_306(1);
			unk_0x7CB6FD92BE491AD9(&(Global_267214.f_11DD), 0);
		}
	}
}

void func_306(int iParam0)//Position - 0x9A1A
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_237(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_218())
	{
		unk_0xC4BA30B532FE260F(-1, "Boss_Message_Orange", sVar0, false);
	}
}

void func_307(char* sParam0, int iParam1)//Position - 0x9A51
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, false, iParam1);
}

int func_308(int iParam0)//Position - 0x9A68
{
	switch (iParam0)
	{
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_309(int iParam0)//Position - 0x9ABE
{
	switch (iParam0)
	{
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 188:
		case 178:
			return 1;
		
		default:
	}
	return 0;
}

int func_310(int iParam0)//Position - 0x9B0E
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

int func_311()//Position - 0x9B34
{
	char* sVar0;
	
	sVar0 = unk_0x1377080E9B0BD993();
	if (unk_0x3362CDE8460ED38B(sVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_VEHICLE_EXPORT"))
	{
		return 178;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_PLOUGHED"))
	{
		return 214;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_FULLY_LOADED"))
	{
		return 215;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_AMPHIBIOUS_ASSAULT"))
	{
		return 216;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_TRANSPORTER"))
	{
		return 217;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_FORTIFIED"))
	{
		return 218;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_VELOCITY"))
	{
		return 219;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_STOCKPILING"))
	{
		return 221;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_RAMPED_UP"))
	{
		return 220;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_GUNRUNNING"))
	{
		return 225;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_GUNRUNNING_DEFEND"))
	{
		return 227;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_SMUGGLER"))
	{
		return 229;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_FM_GANGOPS"))
	{
		return 233;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "FMMC_TYPE_FMBB_SELL"))
	{
		return 237;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "FMMC_TYPE_FMBB_DEFEND"))
	{
		return 238;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "FMMC_TYPE_FMBB_SECURITY_VAN"))
	{
		return 239;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "FMMC_TYPE_FMBB_TARGET_PURSUIT"))
	{
		return 240;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "FMMC_TYPE_FMBB_JEWEL_STORE_GRAB"))
	{
		return 241;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "FMMC_TYPE_FMBB_BANK_JOB"))
	{
		return 242;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "FMMC_TYPE_FMBB_DATA_HACK"))
	{
		return 244;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "FMMC_TYPE_FMBB_INFILTRATION"))
	{
		return 248;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "FMMC_TYPE_FMBB_PHONECALL"))
	{
		return 249;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "FMMC_TYPE_FMBB_CLUB_MANAGEMENT"))
	{
		return 250;
	}
	return 0;
}

void func_312(var uParam0, int iParam1)//Position - 0xA0BF
{
	*uParam0 = iParam1;
}

void func_313()//Position - 0xA0CC
{
	Global_258664 = 1;
}

int func_314()//Position - 0xA0D9
{
	if (((((((func_101(unk_0xB5CEFD608600A09F()) == 170 || func_101(unk_0xB5CEFD608600A09F()) == 219) || func_101(unk_0xB5CEFD608600A09F()) == 221) || func_101(unk_0xB5CEFD608600A09F()) == 220) || func_101(unk_0xB5CEFD608600A09F()) == 216) || func_101(unk_0xB5CEFD608600A09F()) == 215) || func_101(unk_0xB5CEFD608600A09F()) == 214) || func_101(unk_0xB5CEFD608600A09F()) == 218)
	{
		return 1;
	}
	if (func_315(unk_0xB5CEFD608600A09F()))
	{
		return 1;
	}
	return 0;
}

int func_315(int iParam0)//Position - 0xA17A
{
	if (iParam0 != func_63())
	{
		if (func_948(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_316(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 2;
			}
		}
	}
	return 0;
}

int func_316(int iParam0)//Position - 0xA1C0
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
	}
	return -1;
}

void func_317()//Position - 0xA50C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x2DA8CA50A72528FB(iLocal_122[iVar0]))
		{
			unk_0x07B8ECB35A4ED3AC(&(iLocal_122[iVar0]));
		}
		iVar0++;
	}
	if (unk_0xFA30DFD0084E92FE(iLocal_107, 18))
	{
		func_330(1);
		unk_0x7CB6FD92BE491AD9(&iLocal_107, 18);
	}
	func_327();
	func_318();
}

void func_318()//Position - 0xA561
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xFA30DFD0084E92FE(iLocal_107, 7))
	{
		unk_0xF0059F27F7BB6680(&iLocal_107, 7);
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = unk_0x3171C34AB3FE6F2E(iVar0);
			if (unk_0x96B1061E8F3CBC9A(iVar1))
			{
				if (iVar1 != unk_0xB5CEFD608600A09F())
				{
					if (unk_0xFA30DFD0084E92FE(Local_106[unk_0x6BAA0516CC970D99() /*14*/].f_8, iVar0))
					{
						func_325(iVar1, 432, 0, 0);
						func_319(iVar1, func_324(iLocal_125), 0, 0);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_319(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0xA5D8
{
	var uVar0;
	
	if (func_321(iParam0))
	{
		return;
	}
	if (func_320(&(Global_24DCC0.f_266[iParam0]), &(Global_24DCC0.f_3D1[iParam0]), &(Global_24DCC0.f_182), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_24DCC0.f_1C1[iParam0] = uParam1;
		}
	}
}

int func_320(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)//Position - 0xA62A
{
	if (bParam5)
	{
		if (!unk_0x3C406FC829C1E14A(*uParam1) || *uParam1 == unk_0x8A55B15F4133C912())
		{
			*uParam1 = unk_0x8A55B15F4133C912();
			*uParam0 = unk_0x8A55B15F4133C912();
		}
	}
	if (!unk_0x3C406FC829C1E14A(*uParam0) || *uParam0 == unk_0x8A55B15F4133C912())
	{
		if (bParam3)
		{
			if (!unk_0xFA30DFD0084E92FE(*iParam2, iParam4))
			{
				*uParam6 = 1;
				unk_0xF0059F27F7BB6680(iParam2, iParam4);
			}
			*uParam0 = unk_0x8A55B15F4133C912();
		}
		else
		{
			if (unk_0xFA30DFD0084E92FE(*iParam2, iParam4))
			{
				*uParam6 = 1;
				unk_0x7CB6FD92BE491AD9(iParam2, iParam4);
			}
			if (*uParam1 == unk_0x8A55B15F4133C912())
			{
				*uParam1 = -1;
			}
			*uParam0 = -1;
		}
		return 1;
	}
	else if (unk_0x3C406FC829C1E14A(*uParam1) && !*uParam1 == unk_0x8A55B15F4133C912())
	{
	}
	return 0;
}

int func_321(int iParam0)//Position - 0xA6EF
{
	if (iParam0 == func_63())
	{
		return 1;
	}
	if (unk_0x56BEECB328B6D29D(unk_0x1377080E9B0BD993()) == func_322())
	{
		return 1;
	}
	return 0;
}

int func_322()//Position - 0xA718
{
	switch (func_323())
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

int func_323()//Position - 0xA74C
{
	return Global_62BD;
}

int func_324(int iParam0)//Position - 0xA757
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	unk_0xE45648BDBF3441F5(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_325(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0xA9BF
{
	bool bVar0;
	
	if (func_321(iParam0))
	{
		return;
	}
	if (func_320(&(Global_24DCC0.f_245[iParam0]), &(Global_24DCC0.f_3B0[iParam0]), &(Global_24DCC0.f_181), bParam2, iParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_24DCC0.f_1A0[iParam0] = iParam1;
		}
		if (bVar0)
		{
			func_326();
		}
	}
}

void func_326()//Position - 0xAA1A
{
	Global_24DCC0.f_5E4 = 1;
}

void func_327()//Position - 0xAA2A
{
	if (unk_0xFA30DFD0084E92FE(iLocal_107, 16))
	{
		func_84();
		func_328();
		unk_0x7CB6FD92BE491AD9(&iLocal_107, 16);
	}
}

void func_328()//Position - 0xAA4F
{
	if (Global_24D43C.f_6 == unk_0x8A55B15F4133C912())
	{
		func_329();
	}
}

void func_329()//Position - 0xAA68
{
	struct<28> Var0;
	
	if (unk_0x3C406FC829C1E14A(Global_24D43C.f_6))
	{
		if (!Global_24D43C.f_6 == unk_0x8A55B15F4133C912())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_15 = 1115815936;
	Var0.f_1B = -1082130432;
	Global_24D43C = { Var0 };
	Global_24D43C.f_6 = -1;
}

void func_330(bool bParam0)//Position - 0xAAC5
{
	if (unk_0x7AF0088ABFA713B6())
	{
		if (!func_132())
		{
			if (func_948(unk_0xB5CEFD608600A09F(), 1, 0))
			{
				unk_0x0130A557FECA322C(unk_0xBC25C936A095B5BA(), 1);
				unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 342, false);
				unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 122, false);
			}
			unk_0xE8A86792404E8DB8(unk_0xB5CEFD608600A09F(), 1f);
			unk_0x6CF2954DEC49C61F(0);
			unk_0xEF791AEFDDE09A3D(true);
			if (Global_1406A0.f_1 == 0 || Global_1406A0.f_2 == 1)
			{
				Global_1406A0.f_2 = 0;
				if (bParam0)
				{
					unk_0x4D5701941275B494(0, 0);
				}
			}
		}
		else
		{
			if (func_948(unk_0xB5CEFD608600A09F(), 1, 1))
			{
				unk_0x0130A557FECA322C(unk_0xBC25C936A095B5BA(), 0);
				unk_0x8E25082A46F87892(unk_0xBC25C936A095B5BA(), joaat("weapon_unarmed"), true);
				unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 342, true);
				unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 122, true);
				unk_0xE8A86792404E8DB8(unk_0xB5CEFD608600A09F(), 0.5f);
				if (Global_1406A0.f_1 == 0 || Global_1406A0.f_2 == 1)
				{
					unk_0x4D5701941275B494(1, 0);
				}
			}
			unk_0x6CF2954DEC49C61F(1);
			unk_0xEF791AEFDDE09A3D(false);
		}
	}
}

int func_331(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xABBE
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_10 = 1;
	Var0.f_47 = 1;
	Var0.f_48 = 2;
	Var0.f_4F = -1;
	func_361(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_47 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_48 = iParam5;
	Var0.f_10 = iParam6;
	return func_332(&Var0);
}

int func_332(var uParam0)//Position - 0xAC2E
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_252E21.f_BD1)
		{
			return 0;
		}
	}
	func_342(uParam0, uParam0->f_11);
	func_341(uParam0);
	if (func_59())
	{
		func_341(uParam0);
	}
	if (func_340(uParam0->f_1))
	{
		func_333();
		if (Global_252E21.f_A8F[0 /*80*/].f_2 == 0)
		{
			Global_252E21.f_A8F[0 /*80*/] = { *uParam0 };
			return 1;
		}
		if (((Global_252E21.f_A8F[0 /*80*/].f_1 == 13 || Global_252E21.f_A8F[0 /*80*/].f_1 == 53) || Global_252E21.f_A8F[0 /*80*/].f_1 == 54) || Global_252E21.f_A8F[0 /*80*/].f_1 == 58)
		{
			Global_252E21.f_A8F[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_252E21.f_A8F[iVar0 + 1 /*80*/] = { Global_252E21.f_A8F[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_252E21.f_A8F[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_252E21.f_A8F[iVar0 /*80*/].f_2 == 0)
		{
			Global_252E21.f_A8F[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_333();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				unk_0xF0059F27F7BB6680(&(Global_252E21.f_A8F[iVar0 /*80*/].f_45), 1);
				Global_252E21.f_A8F[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !unk_0xFA30DFD0084E92FE(uParam0->f_45, 7))
			{
				if (func_221(Global_252E21.f_A8F[iVar0 /*80*/].f_1))
				{
					Global_252E21.f_A8F[iVar0 /*80*/].f_2 = 5;
					unk_0xF0059F27F7BB6680(&(Global_252E21.f_A8F[iVar0 /*80*/].f_45), 0);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_333()//Position - 0xADFF
{
	bool bVar0;
	
	if (Global_252E21.f_BD2)
	{
		return;
	}
	if (!Global_1164E)
	{
		Global_1164E = 1;
		bVar0 = true;
	}
	func_334();
	if (bVar0)
	{
		Global_1164E = 0;
	}
}

void func_334()//Position - 0xAE32
{
	Global_252E21.f_BD3 = 0;
	Global_252E21.f_BD3.f_242 = 0;
	func_338(&(Global_252E21.f_BD3.f_1));
	Global_252E21.f_BD3.f_1.f_1 = 0;
	func_335(&(Global_252E21.f_BD3.f_1));
}

void func_335(var uParam0)//Position - 0xAE73
{
	if (uParam0->f_1 != 0)
	{
		unk_0xB0B0FE33F4F22679(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_232 && uParam0->f_4 != 0)
	{
		if (unk_0x8ACB0C3FACC09467())
		{
			unk_0x29CD142125FE177B(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0x5E5DBD0A6623969E(false);
			unk_0xF9FBC2F3F73D94C9();
		}
		unk_0xB0B0FE33F4F22679(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_234)
	{
		unk_0xC4248B71D9B26306(false);
		uParam0->f_234 = 0;
	}
	if (!Global_1164E)
	{
		if (!unk_0x0928DEFC3216677B(unk_0xFC1CAE18F3ECBF2D()))
		{
			if (!Global_1164F)
			{
				if (unk_0x17FAADF9916EF741() && !func_337(0))
				{
					unk_0x829FA4611BD56B44(800);
				}
			}
		}
	}
	func_336(0);
}

void func_336(int iParam0)//Position - 0xAF1A
{
	Global_11646 = iParam0;
	Global_11647 = iParam0;
}

bool func_337(bool bParam0)//Position - 0xAF2E
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_1163A, 0);
}

void func_338(var uParam0)//Position - 0xAF59
{
	func_339(uParam0);
	uParam0->f_23A = 0;
	uParam0->f_1F = 0;
	uParam0->f_38 = 0;
	uParam0->f_237 = 0;
	uParam0->f_239 = 0;
}

void func_339(var uParam0)//Position - 0xAF83
{
	uParam0->f_223 = 1f;
	uParam0->f_222 = 0;
	uParam0->f_238 = 0f;
	uParam0->f_22E = 0;
	uParam0->f_1E = 0f;
	uParam0->f_224 = 0f;
	uParam0->f_22F = 0f;
	uParam0->f_230 = 0f;
	uParam0->f_221 = 0;
	uParam0->f_233 = 0;
	uParam0->f_23C = 0;
	uParam0->f_234 = 0;
	uParam0->f_235 = 0;
	uParam0->f_236 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_23E = 0;
	uParam0->f_23F = 0;
	uParam0->f_23D = 1f;
}

int func_340(int iParam0)//Position - 0xB002
{
	if ((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105)
	{
		return 1;
	}
	return 0;
}

void func_341(var uParam0)//Position - 0xB104
{
	if (func_223(uParam0->f_1))
	{
		uParam0->f_48 = func_184();
	}
}

void func_342(var uParam0, int iParam1)//Position - 0xB11F
{
	if (func_223(uParam0->f_1))
	{
		uParam0->f_49 = 1;
	}
	if (iParam1 == func_63() || !func_948(iParam1, 0, 1))
	{
		return;
	}
	if (func_221(uParam0->f_1))
	{
		if (uParam0->f_47 == 1)
		{
			uParam0->f_49 = func_343(iParam1, -2, 0, 0);
		}
	}
}

int func_343(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0xB175
{
	int iVar0;
	int iVar1;
	
	if (func_260(iParam0))
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = unk_0x343CB262BF0CDF5A(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_440000.f_1DBFD[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if ((func_260(unk_0xB5CEFD608600A09F()) || (func_360() && func_359())) && !unk_0xFA30DFD0084E92FE(Global_267214.f_11E0, 31))
	{
		iVar1 = func_358();
		if (unk_0x724D816EA203A79E(iVar1))
		{
			if (unk_0x15DBD981998D4FE1(iVar1))
			{
				if (unk_0x5363B43856FA7779(iVar1) != -1)
				{
					if (func_948(unk_0x5363B43856FA7779(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x517823CA390A19F6()) && iParam1 < 4)
						{
							if (Global_440000.f_1DBFD[iParam1] != -1)
							{
								return func_356(iParam1, iParam0, 0);
							}
							else
							{
								return func_351(iParam0, unk_0x5363B43856FA7779(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_351(iParam0, unk_0x5363B43856FA7779(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x517823CA390A19F6()) && iParam1 < 4)
			{
				if (Global_440000.f_1DBFD[iParam1] != -1)
				{
					return func_356(iParam1, iParam0, 0);
				}
				else
				{
					return func_344(0, -1, 0);
				}
			}
			else
			{
				return func_344(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x517823CA390A19F6()) && iParam1 < 4)
	{
		if (Global_440000.f_1DBFD[iParam1] != -1)
		{
			return func_356(iParam1, iParam0, 0);
		}
		else
		{
			return func_351(iParam0, unk_0xB5CEFD608600A09F(), iParam1, bParam2, bParam3);
		}
	}
	return func_351(iParam0, unk_0xB5CEFD608600A09F(), iParam1, bParam2, bParam3);
}

int func_344(bool bParam0, int iParam1, bool bParam2)//Position - 0xB345
{
	return func_345(unk_0xB5CEFD608600A09F(), bParam0, iParam1, bParam2);
}

int func_345(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0xB35B
{
	int iVar0;
	
	if (!unk_0x96B1061E8F3CBC9A(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x343CB262BF0CDF5A(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_350(iVar0, iParam2, 0) && !unk_0xFA30DFD0084E92FE(Global_440000.f_F, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_349(1);
				}
				else
				{
					return func_349(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xFA30DFD0084E92FE(Global_440000.f_4, 20))
			{
				return func_346(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_346(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_349(1);
	}
	return func_349(0);
}

int func_346(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0xB41F
{
	int iVar0;
	
	iVar0 = func_348(iParam0, iParam1, iParam3);
	if (func_347(Global_440000.f_1EF38, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_347(int iParam0, bool bParam1)//Position - 0xB537
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_440000.f_243FE == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_40001.f_20D8[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_348(int iParam0, int iParam1, int iParam2)//Position - 0xB588
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_350(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_349(bool bParam0)//Position - 0xB5CF
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_350(int iParam0, int iParam1, int iParam2)//Position - 0xB5E6
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 0);
				
				case 1:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 1);
				
				case 2:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 2);
				
				case 3:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 4);
				
				case 1:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 5);
				
				case 2:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 6);
				
				case 3:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 8);
				
				case 1:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 9);
				
				case 2:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 10);
				
				case 3:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 12);
				
				case 1:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 13);
				
				case 2:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 14);
				
				case 3:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_351(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0xB7B1
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x343CB262BF0CDF5A(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_18402B[unk_0xB5CEFD608600A09F() /*770*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_18402B[iVar2 /*770*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_354(1))
			{
				iVar3 = func_183(iParam0);
				if (!iVar3 == -1)
				{
					return func_181(iVar3);
				}
			}
			if ((func_353(iParam1, iParam0, iVar0, 0) && !unk_0xFA30DFD0084E92FE(Global_440000.f_F, 18)) || ((func_350(unk_0x343CB262BF0CDF5A(iParam1), unk_0x343CB262BF0CDF5A(iParam0), 0) && unk_0xFA30DFD0084E92FE(Global_440000.f_F, 23)) && !unk_0xFA30DFD0084E92FE(Global_440000.f_F, 18)))
			{
				return func_349(1);
			}
			else if (unk_0xFA30DFD0084E92FE(Global_440000.f_F, 26))
			{
				return func_352(1);
			}
			else
			{
				return func_345(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1805D3 || Global_1805CA) || Global_18402B[iParam0 /*770*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1805D3 == 1 && Global_1805DD == 0))
			{
				return func_349(1);
			}
			else
			{
				return func_345(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1805CE && Global_1803FC.f_E == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_183(iParam0);
	if (!iVar4 == -1)
	{
		return func_181(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_352(bool bParam0)//Position - 0xB955
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_353(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xB96C
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x343CB262BF0CDF5A(iParam0) == -1 && unk_0x343CB262BF0CDF5A(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x343CB262BF0CDF5A(iParam0) == unk_0x343CB262BF0CDF5A(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x343CB262BF0CDF5A(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x343CB262BF0CDF5A(iParam0) == iParam2;
	}
	return unk_0x343CB262BF0CDF5A(iParam0) == iParam2;
}

int func_354(int iParam0)//Position - 0xB9E4
{
	if ((func_162() || func_355()) || (func_59() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_355()//Position - 0xBA13
{
	return Global_255A46.f_F;
}

int func_356(int iParam0, int iParam1, bool bParam2)//Position - 0xBA21
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_EF621.f_C[iParam0];
	if (func_354(1))
	{
		iVar2 = func_183(iParam1);
		if (!iVar2 == -1)
		{
			return func_181(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0xFA30DFD0084E92FE(Global_440000.f_62[iParam0 /*10231*/].f_14F1[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_63())
	{
		if (Global_440000.f_1DBFD[iParam0] != -1 && Global_440000.f_1DBFD[iParam0] <= 4)
		{
			if (Global_440000.f_1DBFD[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_440000.f_1DBFD[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_440000.f_1DBFD[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_440000.f_1DBFD[iParam0] == 4)
			{
				if (unk_0xFA30DFD0084E92FE(Global_440000.f_F, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_440000.f_1DBFD[iParam0];
			}
		}
		else
		{
			iVar0 = func_345(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0xFA30DFD0084E92FE(Global_440000.f_15, 13))
		{
			iVar0 = func_357(iParam0);
		}
		if (unk_0xFA30DFD0084E92FE(Global_440000.f_18, 29))
		{
			iVar0 = 0;
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_357(int iParam0)//Position - 0xBB86
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_440000.f_24429;
			break;
		
		case 1:
			iVar0 = Global_440000.f_2442A;
			break;
		
		case 2:
			iVar0 = Global_440000.f_2442B;
			break;
		
		case 3:
			iVar0 = Global_440000.f_2442C;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_358()//Position - 0xBC5B
{
	return Global_240006.f_2;
}

bool func_359()//Position - 0xBC69
{
	return unk_0xFA30DFD0084E92FE(Global_240006, 4);
}

bool func_360()//Position - 0xBC7A
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_27.f_12, 14);
}

void func_361(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)//Position - 0xBC97
{
	uParam1->f_11 = func_63();
	uParam1->f_12 = func_63();
	uParam1->f_13 = func_63();
	uParam1->f_14 = func_63();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_15), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_10 = 1;
	uParam1->f_3 = iParam2;
	uParam1->f_47 = 1;
	uParam1->f_4A = 1;
	uParam1->f_4B = 1;
	uParam1->f_4C = 0;
	uParam1->f_4D = 0;
	uParam1->f_49 = 0;
	StringCopy(&(uParam1->f_19), "", 64);
	StringCopy(&(uParam1->f_29), "", 64);
}

int func_362()//Position - 0xBD13
{
	int iVar0;
	
	if (!func_17(unk_0xB5CEFD608600A09F(), 0))
	{
		if (!func_363(1, 1, 1))
		{
			if (unk_0xFA30DFD0084E92FE(Local_106[unk_0x6BAA0516CC970D99() /*14*/].f_1, 6))
			{
				unk_0x7CB6FD92BE491AD9(&(Local_106[unk_0x6BAA0516CC970D99() /*14*/].f_1), 6);
			}
			return 0;
		}
		if (func_133())
		{
			if (unk_0xFA30DFD0084E92FE(Local_106[unk_0x6BAA0516CC970D99() /*14*/].f_1, 6))
			{
				unk_0x7CB6FD92BE491AD9(&(Local_106[unk_0x6BAA0516CC970D99() /*14*/].f_1), 6);
			}
			return 0;
		}
		if (!unk_0xFA30DFD0084E92FE(Local_106[unk_0x6BAA0516CC970D99() /*14*/].f_1, 6))
		{
			unk_0xF0059F27F7BB6680(&(Local_106[unk_0x6BAA0516CC970D99() /*14*/].f_1), 6);
		}
	}
	else
	{
		iVar0 = func_286();
		if (iVar0 == -1)
		{
			return 0;
		}
		if (!unk_0xFA30DFD0084E92FE(Local_106[iVar0 /*14*/].f_1, 6))
		{
			return 0;
		}
	}
	return 1;
}

int func_363(bool bParam0, bool bParam1, bool bParam2)//Position - 0xBDD6
{
	if (func_401(unk_0xB5CEFD608600A09F(), 29))
	{
		return 0;
	}
	if (func_117(unk_0xB5CEFD608600A09F(), 21))
	{
		return 0;
	}
	if (bParam2)
	{
		if (unk_0x2F7EEEA6378AC19B())
		{
			return 0;
		}
	}
	if (!func_203(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xD92FE7FDA11C7334())
		{
			return 0;
		}
	}
	if (func_400(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	if (func_399())
	{
		return 0;
	}
	if (func_274())
	{
		return 0;
	}
	if (func_398())
	{
		return 0;
	}
	if (func_268())
	{
		return 0;
	}
	if (unk_0x517823CA390A19F6())
	{
		return 0;
	}
	if (func_266(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	if (!func_270())
	{
		return 0;
	}
	if (func_117(unk_0xB5CEFD608600A09F(), 0) || func_117(unk_0xB5CEFD608600A09F(), 3))
	{
		return 0;
	}
	if ((func_117(unk_0xB5CEFD608600A09F(), 12) || func_117(unk_0xB5CEFD608600A09F(), 14)) || func_117(unk_0xB5CEFD608600A09F(), 13))
	{
		return 0;
	}
	if (func_395(unk_0xB5CEFD608600A09F(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
	{
		if (!func_370())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (func_369())
		{
			return 0;
		}
	}
	if (Global_193981)
	{
		return 0;
	}
	if (func_368(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	if (func_367())
	{
		return 0;
	}
	if (func_366(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	if (func_365())
	{
		return 0;
	}
	if (unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_111.f_13, 4))
	{
		return 0;
	}
	if (func_364(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	return 1;
}

int func_364(int iParam0)//Position - 0xBF7E
{
	if (Global_24FB5C[iParam0 /*406*/].f_101.f_4 != 0 || Global_24FB5C[iParam0 /*406*/].f_101.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_365()//Position - 0xBFB2
{
	return Global_197055.f_D0E != -1;
}

int func_366(int iParam0)//Position - 0xBFC3
{
	if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_13, 14))
	{
		return 1;
	}
	if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_13, 11))
	{
		return 1;
	}
	return 0;
}

int func_367()//Position - 0xC003
{
	if (Global_40E7E8.f_31D > -1)
	{
		return 1;
	}
	return 0;
}

int func_368(int iParam0)//Position - 0xC01B
{
	if (!func_948(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_18402B[iParam0 /*770*/].f_23;
}

bool func_369()//Position - 0xC03E
{
	return Global_16B4F.f_142 > 0;
}

int func_370()//Position - 0xC04F
{
	int iVar0;
	
	iVar0 = func_101(unk_0xB5CEFD608600A09F());
	if (((func_394(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_111.f_15) || func_393(unk_0xB5CEFD608600A09F())) || func_392(unk_0xB5CEFD608600A09F())) || func_387(unk_0xB5CEFD608600A09F()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_385(unk_0xB5CEFD608600A09F()))
	{
		if (func_384(iVar0) || func_383(iVar0))
		{
			return 1;
		}
	}
	if (func_315(unk_0xB5CEFD608600A09F()))
	{
		if (func_383(iVar0))
		{
			return 1;
		}
	}
	if (func_382(unk_0xB5CEFD608600A09F()))
	{
		if (func_381(iVar0))
		{
			return 1;
		}
	}
	if (func_380(unk_0xB5CEFD608600A09F()))
	{
		if (func_379(iVar0))
		{
			return 1;
		}
	}
	if (func_378(unk_0xB5CEFD608600A09F()))
	{
		if (func_377(iVar0))
		{
			return 1;
		}
	}
	if (func_376(unk_0xB5CEFD608600A09F()))
	{
		if (func_375(iVar0))
		{
			return 1;
		}
	}
	if (func_374(unk_0xB5CEFD608600A09F(), 0))
	{
		if (func_373(iVar0))
		{
			if (func_371(unk_0xB5CEFD608600A09F()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_371(int iParam0)//Position - 0xC190
{
	if (func_372(iParam0) != func_63())
	{
		return func_372(iParam0) == func_64(iParam0);
	}
	return 0;
}

int func_372(int iParam0)//Position - 0xC1B6
{
	return Global_18C80F[iParam0 /*558*/].f_B.f_23;
}

int func_373(int iParam0)//Position - 0xC1CB
{
	switch (iParam0)
	{
		case 241:
		case 248:
		case 242:
		case 244:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return 0;
}

int func_374(int iParam0, bool bParam1)//Position - 0xC203
{
	int iVar0;
	
	if (bParam1)
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			if (unk_0x6F79ECA8C83E4357(iVar0) == -1988428699)
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_63())
	{
		if (func_948(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1 && Global_24FB5C[iParam0 /*406*/].f_131.f_4 != func_63())
			{
				return func_316(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 12;
			}
		}
	}
	return 0;
}

int func_375(int iParam0)//Position - 0xC291
{
	switch (iParam0)
	{
		case 237:
		case 238:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_376(int iParam0)//Position - 0xC2BD
{
	if (iParam0 != func_63())
	{
		if (func_948(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_316(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 11;
			}
		}
	}
	return 0;
}

int func_377(int iParam0)//Position - 0xC304
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_378(int iParam0)//Position - 0xC31E
{
	if (iParam0 != func_63())
	{
		if (func_948(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_316(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 9;
			}
		}
	}
	return 0;
}

int func_379(int iParam0)//Position - 0xC365
{
	switch (iParam0)
	{
		case 229:
		case 230:
			return 1;
		
		default:
	}
	return 0;
}

int func_380(int iParam0)//Position - 0xC385
{
	if (iParam0 != func_63())
	{
		if (func_948(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_316(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 7;
			}
		}
	}
	return 0;
}

int func_381(int iParam0)//Position - 0xC3CB
{
	switch (iParam0)
	{
		case 225:
		case 226:
		case 227:
			return 1;
		
		default:
	}
	return 0;
}

int func_382(int iParam0)//Position - 0xC3F1
{
	if (iParam0 != func_63())
	{
		if (func_948(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_316(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 4;
			}
		}
	}
	return 0;
}

int func_383(int iParam0)//Position - 0xC437
{
	switch (iParam0)
	{
		case 190:
		case 191:
		case 192:
			return 1;
		
		default:
	}
	return 0;
}

int func_384(int iParam0)//Position - 0xC45D
{
	switch (iParam0)
	{
		case 180:
		case 183:
		case 185:
		case 186:
		case 182:
		case 195:
		case 197:
		case 198:
		case 207:
		case 208:
		case 209:
			return 1;
		
		default:
	}
	return 0;
}

int func_385(int iParam0)//Position - 0xC4B3
{
	if (func_386(Global_18402B[iParam0 /*770*/].f_111.f_15, -1))
	{
		return 1;
	}
	return 0;
}

int func_386(int iParam0, int iParam1)//Position - 0xC4D6
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

int func_387(int iParam0)//Position - 0xC5B3
{
	if (func_388(Global_18402B[iParam0 /*770*/].f_111.f_15, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_388(int iParam0, bool bParam1, bool bParam2)//Position - 0xC5D7
{
	if (bParam2)
	{
		return func_389(unk_0xB5CEFD608600A09F(), 0);
	}
	if (bParam1)
	{
		if (func_389(unk_0xB5CEFD608600A09F(), 0))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return 1;
				break;
			}
	}
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 1;
			break;
	}
	return 0;
}

bool func_389(int iParam0, bool bParam1)//Position - 0xC6B2
{
	if (Global_183F8E != func_63())
	{
		if (!func_391(Global_183F8E))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0xB5CEFD608600A09F() != Global_183F8E)
			{
				if (unk_0xFA30DFD0084E92FE(Global_24FB5C[Global_183F8E /*406*/].f_BF, 24) || func_390(Global_183F8E))
				{
					return 1;
				}
			}
		}
	}
	return unk_0xFA30DFD0084E92FE(Global_24FB5C[iParam0 /*406*/].f_BF, 24);
}

int func_390(int iParam0)//Position - 0xC71E
{
	if (iParam0 != func_63())
	{
		return unk_0xFA30DFD0084E92FE(Global_24FB5C[iParam0 /*406*/].f_BF, 9);
	}
	return 0;
}

int func_391(int iParam0)//Position - 0xC744
{
	if (iParam0 != func_63())
	{
		return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_146, 2);
	}
	return 0;
}

int func_392(int iParam0)//Position - 0xC770
{
	if (iParam0 != func_63())
	{
		if (func_948(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_316(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 1;
			}
		}
	}
	return 0;
}

int func_393(int iParam0)//Position - 0xC7B6
{
	if (iParam0 != func_63())
	{
		if (func_948(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_316(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 0;
			}
		}
	}
	return 0;
}

int func_394(int iParam0)//Position - 0xC7FC
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_395(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)//Position - 0xC82B
{
	if (Global_18402B[iParam0 /*770*/].f_111.f_15 > 0)
	{
		if (bParam1)
		{
			if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_13, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (!bParam2)
	{
		if (func_393(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_315(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_392(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_382(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_380(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_378(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_397(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_376(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_396(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_374(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_396(int iParam0)//Position - 0xC92B
{
	if (iParam0 != func_63())
	{
		if (func_948(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_316(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 11;
			}
		}
	}
	return 0;
}

int func_397(int iParam0)//Position - 0xC972
{
	if (iParam0 != func_63())
	{
		if (func_948(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1 && Global_24FB5C[iParam0 /*406*/].f_131.f_4 != func_63())
			{
				return func_316(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 8;
			}
		}
	}
	return 0;
}

bool func_398()//Position - 0xC9D2
{
	return Global_140856;
}

bool func_399()//Position - 0xC9DE
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_27.f_12, 0);
}

int func_400(int iParam0)//Position - 0xC9FA
{
	if (func_265(iParam0, 1))
	{
		if (Global_18402B[iParam0 /*770*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_401(int iParam0, int iParam1)//Position - 0xCA1E
{
	return unk_0xFA30DFD0084E92FE(Global_18C80F[iParam0 /*558*/].f_B.f_5, iParam1);
}

char* func_402()//Position - 0xCA39
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_64(unk_0xB5CEFD608600A09F());
	if (iVar0 != func_63())
	{
		if (iVar0 != unk_0xB5CEFD608600A09F())
		{
			if (((func_105(iVar0, 28) || func_105(unk_0xB5CEFD608600A09F(), 28)) || func_407(iVar0)) && !func_406(iVar0))
			{
				return func_404(iVar0, 0);
			}
			if (!unk_0xF49912B78E2591B6() && !unk_0x7A3896EC51DA2E5E(0, -1, 1))
			{
				return func_404(iVar0, 0);
			}
		}
		sVar1 = func_403(&(Global_18C80F[iVar0 /*558*/].f_B.f_63));
		if (unk_0xF1734B55490E9045(sVar1))
		{
			return func_404(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

var func_403(var uParam0)//Position - 0xCAE9
{
	return uParam0;
}

char* func_404(int iParam0, bool bParam1)//Position - 0xCAF3
{
	if (!bParam1)
	{
		if (func_166(iParam0, 1))
		{
			return func_405();
		}
	}
	return unk_0xFCB4C1AC11347344("GB_REST_ACC");
}

char* func_405()//Position - 0xCB1A
{
	return unk_0xFCB4C1AC11347344("GB_REST_ACCM");
}

int func_406(int iParam0)//Position - 0xCB2A
{
	struct<13> Var0;
	
	Var0 = { func_65(iParam0) };
	if (unk_0xF49912B78E2591B6())
	{
		if (unk_0x5553DFDA03631860(0))
		{
			if (unk_0x43AECC0539840131(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_407(int iParam0)//Position - 0xCB5A
{
	struct<13> Var0;
	
	if (iParam0 != func_63())
	{
		Var0 = { func_65(iParam0) };
		if (unk_0xF7E138CFA19B55E7() || unk_0x8ACB0C3FACC09467())
		{
			if (unk_0x5553DFDA03631860(0))
			{
				return 0;
			}
		}
		else if (unk_0xF49912B78E2591B6())
		{
			if (unk_0x5553DFDA03631860(0))
			{
				if (unk_0x43AECC0539840131(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_408()//Position - 0xCBB3
{
	return ((4 - Local_105.f_73) * Global_40001.f_3A2D);
}

int func_409()//Position - 0xCBC9
{
	return ((4 - Local_105.f_73) * Global_40001.f_3A2C);
}

void func_410(int iParam0, bool bParam1, var uParam2, bool bParam3)//Position - 0xCBDF
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	bool bVar14;
	struct<2> Var15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	
	func_592(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		if (bParam3)
		{
			iVar1 = (iVar1 + Global_40001.f_44F4);
		}
		else
		{
			iVar1 = (iVar1 + func_591(iParam0, uParam2->f_D));
		}
		if (iParam0 == 233)
		{
			iVar6 = (uParam2->f_A / uParam2->f_B) * 100;
			iVar1 = ((iVar1 / 100) * iVar6);
		}
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		if (bParam3 == 0)
		{
			iVar0 = (iVar0 + func_590(iParam0));
		}
		else
		{
			iVar0 = (iVar0 + Global_40001.f_44F3);
		}
		iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * fVar2));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * uParam2->f_2));
	}
	else if ((iParam0 == 185 || iParam0 == 220) || iParam0 == 221)
	{
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * fVar2));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * uParam2->f_2));
	}
	if (uParam2->f_12 > -1)
	{
		iVar0 = (iVar0 + uParam2->f_12);
	}
	if (uParam2->f_13 > -1)
	{
		iVar1 = (iVar1 + uParam2->f_13);
	}
	if (func_588(iParam0))
	{
		if (bParam1)
		{
			if (func_587(unk_0xB5CEFD608600A09F()) > 0)
			{
				func_586();
			}
			else
			{
				func_585();
			}
		}
		else
		{
			func_584();
		}
	}
	func_568(iParam0, bParam1, uParam2, &iVar0, &iVar4);
	func_566(iParam0, uParam2, &iVar0, &iVar5);
	func_544(iParam0, uParam2, &iVar0, &iVar5);
	func_530(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	func_513(iParam0, uParam2, &iVar0, &iVar5);
	if (iParam0 == 168)
	{
		Global_267214.f_1312.f_173 = iVar4;
	}
	else
	{
		Global_267214.f_1312.f_173 = iVar5;
	}
	iVar8 = func_240();
	if (iVar8 != func_63() && iParam0 != 148)
	{
		if (func_179(unk_0xB5CEFD608600A09F(), 0))
		{
			if (!func_74(unk_0xB5CEFD608600A09F(), iVar8, 1))
			{
				func_501(&iVar0, 1);
			}
		}
	}
	func_497(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_196948.f_A = iVar1;
		func_496();
		func_453(0, unk_0xBC25C936A095B5BA(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_196948.f_9 = iVar0;
		iVar13 = func_452();
		if (iVar13 != func_63())
		{
			func_451(iVar13, &uVar11, &uVar12);
		}
		bVar14 = !func_450(1);
		if (iParam0 == 168)
		{
			if (!func_449())
			{
				unk_0xF8ED2CAA140D95A9(iVar0, iVar4);
			}
		}
		else if (iParam0 == 190)
		{
			if (func_448())
			{
				if (!func_449())
				{
					Var15 = { func_447() };
					unk_0x7C78EDD3BFB2E833(iVar0, unk_0x56BEECB328B6D29D(func_446(Var15)), func_445(Var15), iVar5);
				}
			}
			else if (func_449())
			{
				func_436(-856006867, iVar0, &iVar16, 0, 1, 0);
				Global_41092C[iVar16 /*80*/].f_8.f_36 = uVar11;
				Global_41092C[iVar16 /*80*/].f_8.f_37 = uVar12;
				Global_41092C[iVar16 /*80*/].f_8.f_38 = bVar14;
			}
			else
			{
				unk_0xF8ED2CAA140D95A9(iVar0, iVar5);
			}
		}
		else if (iParam0 == 226)
		{
			if (func_435())
			{
				if (!func_449())
				{
					unk_0x7C78EDD3BFB2E833(iVar0, unk_0x56BEECB328B6D29D(func_446(func_434(unk_0xB5CEFD608600A09F()))), 5, iVar5);
				}
			}
			else if (func_449())
			{
				func_436(-856006867, iVar0, &iVar17, 0, 1, 0);
				Global_41092C[iVar17 /*80*/].f_8.f_36 = uVar11;
				Global_41092C[iVar17 /*80*/].f_8.f_37 = uVar12;
				Global_41092C[iVar17 /*80*/].f_8.f_38 = bVar14;
			}
			else
			{
				unk_0xF8ED2CAA140D95A9(iVar0, iVar5);
			}
		}
		else if (iParam0 == 230)
		{
			if (func_435())
			{
				if (!func_449())
				{
					iVar18 = func_430(uParam2->f_10, iVar5);
					iVar19 = iVar0;
					if (iVar18 > 0)
					{
						iVar19 = (iVar19 - iVar18);
					}
					if (iVar7 > 0)
					{
						iVar19 = (iVar19 - iVar7);
					}
					unk_0xB6DC534CAEB0D937(iVar19, iVar5, iVar7, iVar18, uParam2->f_10);
				}
			}
			else if (func_449())
			{
				func_436(463142405, iVar0, &iVar20, 0, 1, 0);
				Global_41092C[iVar20 /*80*/].f_8.f_36 = uVar11;
				Global_41092C[iVar20 /*80*/].f_8.f_37 = uVar12;
				Global_41092C[iVar20 /*80*/].f_8.f_38 = bVar14;
			}
			else
			{
				unk_0xACD5CE18E734968D(uVar11, uVar12, iVar0, bVar14);
			}
		}
		else if (iParam0 == 233)
		{
			if (func_449())
			{
				func_436(1407278493, iVar0, &iVar21, 0, 1, 0);
				Global_41092C[iVar21 /*80*/].f_8.f_36 = uVar11;
				Global_41092C[iVar21 /*80*/].f_8.f_37 = uVar12;
				Global_41092C[iVar21 /*80*/].f_8.f_38 = bVar14;
			}
			else
			{
				unk_0x02A33E5F88B092E3(iVar0);
			}
		}
		else if (iParam0 == 237)
		{
			if (func_435())
			{
				if (!func_449())
				{
					unk_0x0B39CF0D53F1C883(iVar0, uParam2->f_14, iVar5);
				}
			}
			else if (func_449())
			{
				func_436(-856006867, iVar0, &iVar22, 0, 1, 0);
				Global_41092C[iVar22 /*80*/].f_8.f_36 = uVar11;
				Global_41092C[iVar22 /*80*/].f_8.f_37 = uVar12;
				Global_41092C[iVar22 /*80*/].f_8.f_38 = bVar14;
			}
			else
			{
				unk_0xF8ED2CAA140D95A9(iVar0, iVar5);
			}
		}
		else if (iParam0 == 250)
		{
			if (func_449())
			{
				func_436(-961034881, iVar0, &iVar23, 0, 1, 0);
				Global_41092C[iVar23 /*80*/].f_8.f_36 = uVar11;
				Global_41092C[iVar23 /*80*/].f_8.f_37 = uVar12;
				Global_41092C[iVar23 /*80*/].f_8.f_38 = bVar14;
			}
			else
			{
				unk_0xA75EAC69F59E96E7(iVar0);
			}
		}
		else if (iParam0 == 249)
		{
			if (func_449())
			{
				func_436(1135468152, iVar0, &iVar24, 0, 1, 0);
				Global_41092C[iVar24 /*80*/].f_8.f_36 = uVar11;
				Global_41092C[iVar24 /*80*/].f_8.f_37 = uVar12;
				Global_41092C[iVar24 /*80*/].f_8.f_38 = bVar14;
			}
			else
			{
				unk_0xC5156361F26E2212(iVar0);
			}
		}
		else if (((((iParam0 == 242 || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240)
		{
			if (func_449())
			{
				func_436(-634726636, iVar0, &iVar25, 0, 1, 0);
				Global_41092C[iVar25 /*80*/].f_8.f_36 = uVar11;
				Global_41092C[iVar25 /*80*/].f_8.f_37 = uVar12;
				Global_41092C[iVar25 /*80*/].f_8.f_38 = bVar14;
			}
			else
			{
				unk_0x1FDA0AA679C9919B(iVar0);
			}
		}
		else if (func_449())
		{
			func_436(-856006867, iVar0, &iVar26, 0, 1, 0);
			Global_41092C[iVar26 /*80*/].f_8.f_36 = uVar11;
			Global_41092C[iVar26 /*80*/].f_8.f_37 = uVar12;
			Global_41092C[iVar26 /*80*/].f_8.f_38 = bVar14;
		}
		else
		{
			unk_0xECDF3A47BBA3F980(uVar11, uVar12, iVar0, bVar14);
		}
		func_429(iParam0, iVar0);
		if (func_428(iParam0))
		{
			if (func_427(iParam0) > -1)
			{
				func_426(func_427(iParam0), iVar0);
			}
		}
		Global_2588F5 = iVar0;
		func_425(&Global_258230, 0, 0);
	}
	if (func_120(unk_0xB5CEFD608600A09F()) || func_139(unk_0xB5CEFD608600A09F()))
	{
		func_416(iParam0);
	}
	if (func_304(iParam0))
	{
		Global_19695A.f_D = iVar0;
		Global_19695A.f_E = iVar1;
	}
	if (func_309(iParam0))
	{
		Global_196990.f_D = iVar0;
		Global_196990.f_E = iVar1;
	}
	if (func_381(iParam0))
	{
		Global_1969CF.f_C = iVar0;
		Global_1969CF.f_D = iVar1;
	}
	if (func_379(iParam0))
	{
		Global_1969FB.f_C = iVar0;
		Global_1969FB.f_D = iVar1;
	}
	if (func_377(iParam0))
	{
		Global_196A31.f_C = iVar0;
		Global_196A31.f_D = iVar1;
	}
	if (func_308(iParam0))
	{
		if (func_415(iParam0))
		{
			Global_196A81.f_C = iVar0;
			Global_196A81.f_D = iVar1;
		}
		else if (func_411(iParam0))
		{
			Global_196AB6.f_C = iVar0;
			Global_196AB6.f_D = iVar1;
		}
	}
}

int func_411(int iParam0)//Position - 0xD3D5
{
	if (((((((((iParam0 == 250 || iParam0 == 238) || iParam0 == 242) || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240) || iParam0 == 249) || (iParam0 == 237 && func_412(func_413(unk_0xB5CEFD608600A09F()))))
	{
		return 1;
	}
	return 0;
}

int func_412(int iParam0)//Position - 0xD45E
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 3:
		case 2:
		case 5:
		case 1:
			return 1;
		
		default:
	}
	return 0;
}

int func_413(int iParam0)//Position - 0xD496
{
	if (func_101(iParam0) == 237 || func_101(iParam0) == 250)
	{
		return func_414(iParam0);
	}
	return -1;
}

int func_414(int iParam0)//Position - 0xD4C3
{
	if (func_102(iParam0, 0))
	{
		return Global_18C80F[iParam0 /*558*/].f_B.f_B0;
	}
	return -1;
}

int func_415(int iParam0)//Position - 0xD4E6
{
	if (iParam0 == 237)
	{
		return 1;
	}
	return 0;
}

void func_416(int iParam0)//Position - 0xD4FA
{
	if (func_424(unk_0xB5CEFD608600A09F()) && func_448())
	{
		if (func_384(iParam0))
		{
			func_419(7948, -1);
		}
		else if (func_418(iParam0))
		{
			func_419(7950, -1);
		}
		else if (func_210(iParam0, 1))
		{
			func_419(7951, -1);
		}
		else if (func_417(iParam0))
		{
			func_419(7952, -1);
		}
	}
}

int func_417(int iParam0)//Position - 0xD564
{
	switch (iParam0)
	{
		case 194:
		case 193:
		case 189:
		case 153:
			return 1;
		
		default:
	}
	return 0;
}

int func_418(int iParam0)//Position - 0xD590
{
	switch (iParam0)
	{
		case 179:
		case 201:
		case 200:
		case 148:
			return 1;
		
		default:
	}
	return 0;
}

void func_419(int iParam0, int iParam1)//Position - 0xD5BC
{
	int iVar0;
	
	iVar0 = func_423(iParam0, func_138(iParam1), 0);
	iVar0++;
	if (!func_422(iParam0))
	{
		func_421(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_420(iParam0, iVar0, iParam1, 1);
	}
}

void func_420(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xD5FD
{
	int iVar0;
	
	iVar0 = Global_269BC5[iParam0 /*3*/][func_138(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_14F606[func_138(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_14F60C[func_138(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_14F612[func_138(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_14F618[func_138(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_14F5EE[func_138(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_14F5F4[func_138(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_14F5FA[func_138(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_14F600[func_138(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_14F5D6[func_138(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_14F5DC[func_138(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_14F5E2[func_138(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_14F5E8[func_138(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_14F61E[func_138(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_14F624[func_138(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_14F62A[func_138(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_14F630[func_138(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_14F636[func_138(iParam2)] = iParam1;
			break;
		
		case 7229:
			Global_14F63C[func_138(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_14F642[func_138(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_14F648[func_138(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_270CF3[0 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_270CF3[1 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 2925:
			Global_270CF3[2 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_270CF3[3 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 7818:
			Global_270D5E[func_138(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_14F64E[func_138(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_14F654[func_138(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_14F65A[func_138(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_14F660[func_138(iParam2)] = iParam1;
			break;
		
		case 3049:
			Global_270D27[0 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3050:
			Global_270D27[1 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3051:
			Global_270D27[2 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3052:
			Global_270D27[3 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_270D27[4 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3632:
			Global_270D61[0 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3633:
			Global_270D61[1 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3634:
			Global_270D61[2 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3635:
			Global_270D61[3 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_270D61[4 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_270D71[0 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_270D71[1 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_270D71[2 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_270D71[3 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_270D71[4 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_270D27[5 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_270CF3[4 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3659:
			Global_270D81[func_138(iParam2)] = iParam1;
			break;
		
		case 3660:
			Global_270D8A[func_138(iParam2)] = iParam1;
			break;
		
		case 3661:
			Global_270D84[func_138(iParam2)] = iParam1;
			break;
		
		case 3662:
			Global_270D8D[func_138(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_270D87[func_138(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_270D90[func_138(iParam2)] = iParam1;
			break;
		
		case 3685:
			Global_270D93[func_138(iParam2)] = iParam1;
			break;
		
		case 3225:
			Global_270D27[6 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3226:
			Global_270CF3[5 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_270D27[7 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3228:
			Global_270CF3[6 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 4015:
			Global_270D27[8 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 4016:
			Global_270CF3[7 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 4018:
			Global_270D27[9 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_270CF3[8 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_270D27[10 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_270CF3[9 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_270D27[11 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_270CF3[10 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6105:
			Global_270D27[12 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6106:
			Global_270CF3[11 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6163:
			Global_270D27[13 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6164:
			Global_270CF3[12 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6541:
			Global_270D27[14 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6542:
			Global_270CF3[13 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6554:
			Global_270D27[15 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6555:
			Global_270CF3[14 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6557:
			Global_270D27[16 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_270CF3[15 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_270D27[17 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_270CF3[16 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_421(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0xDDB7
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_138(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, iParam3);
	}
}

int func_422(int iParam0)//Position - 0xDDE7
{
	if (Global_14F5C3)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
			case 777:
			case 778:
			case 779:
			case 780:
			case 767:
			case 768:
			case 769:
			case 770:
			case 757:
			case 758:
			case 759:
			case 760:
			case 1303:
			case 7229:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 1236:
			case 1876:
			case 2267:
			case 2925:
			case 3054:
			case 7818:
			case 3049:
			case 3050:
			case 3051:
			case 3052:
			case 3053:
			case 3228:
			case 3230:
			case 3632:
			case 3633:
			case 3634:
			case 3635:
			case 3636:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3223:
			case 3217:
			case 3659:
			case 3660:
			case 3661:
			case 3662:
			case 3663:
			case 3664:
			case 3685:
			case 3226:
			case 3225:
			case 4016:
			case 4015:
			case 4019:
			case 4018:
			case 4022:
			case 4021:
			case 4025:
			case 4024:
			case 6106:
			case 6105:
			case 6164:
			case 6163:
			case 6529:
			case 6528:
			case 6542:
			case 6541:
			case 6555:
			case 6554:
			case 6558:
			case 6557:
			case 6561:
			case 6560:
				return 1;
				break;
			}
	}
	return 0;
}

int func_423(int iParam0, int iParam1, int iParam2)//Position - 0xDFDF
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_138(iParam1)];
	if (unk_0x6CB99B97664C3727(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_424(int iParam0)//Position - 0xE011
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_6D, 14);
}

void func_425(var uParam0, bool bParam1, bool bParam2)//Position - 0xE037
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

void func_426(int iParam0, int iParam1)//Position - 0xE074
{
	if (iParam1 > 0)
	{
		if (Global_40001.f_5943 == 0 || Global_40001.f_5943 == 1)
		{
			if (!unk_0x8ACB0C3FACC09467() || Global_40001.f_5943 == 1)
			{
				Global_267214.f_110 = iParam0;
				if (iParam1 > Global_40001.f_1757)
				{
					iParam1 = Global_40001.f_1757;
				}
				Global_267214.f_111 = iParam1;
				Global_267214.f_112 = 0;
			}
		}
	}
}

int func_427(int iParam0)//Position - 0xE0E6
{
	switch (iParam0)
	{
		case 142:
			return 25;
		
		case 157:
			return 22;
		
		case 159:
			return 21;
		
		case 151:
			return 33;
		
		case 148:
			return 23;
		
		case 164:
			return 24;
		
		case 152:
			return 26;
		
		case 153:
			return 30;
		
		case 154:
			return 32;
		
		case 155:
			return 28;
		
		case 160:
			return 29;
		
		case 162:
			return 31;
		
		case 163:
			return 27;
		
		case 166:
			return 38;
		
		case 170:
			return 34;
		
		case 171:
			return 35;
		
		case 172:
			return 36;
		
		case 173:
			return 37;
		
		case 179:
			return 23;
		
		default:
	}
	return 0;
}

int func_428(int iParam0)//Position - 0xE1C7
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 167:
			iVar0 = 0;
			break;
		
		case 169:
			iVar0 = 0;
			break;
		
		case 168:
			iVar0 = 0;
			break;
		
		case 166:
			iVar0 = 0;
			break;
		
		case 190:
			iVar0 = 0;
			break;
		
		case 191:
			iVar0 = 0;
			break;
		
		case 192:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

void func_429(int iParam0, int iParam1)//Position - 0xE22F
{
	if (func_424(unk_0xB5CEFD608600A09F()) && func_448())
	{
		if (func_384(iParam0) && iParam1 > 0)
		{
			func_421(7949, (func_423(7949, -1, 0) + iParam1), -1, 1, 0);
		}
	}
}

int func_430(int iParam0, int iParam1)//Position - 0xE273
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_433(iParam0, iParam1);
	fVar1 = (SYSTEM::TO_FLOAT(func_431(iParam0, iParam1)) * fVar0);
	return SYSTEM::ROUND(fVar1);
}

int func_431(int iParam0, int iParam1)//Position - 0xE29C
{
	return (func_432(iParam0) * iParam1);
}

int func_432(int iParam0)//Position - 0xE2AD
{
	switch (iParam0)
	{
		case 8:
			return Global_40001.f_54AC;
		
		case 0:
			return Global_40001.f_54AD;
		
		case 1:
			return Global_40001.f_54AE;
		
		case 2:
			return Global_40001.f_54AF;
		
		case 3:
			return Global_40001.f_54B0;
		
		case 4:
			return Global_40001.f_54B1;
		
		case 5:
			return Global_40001.f_54B2;
		
		case 6:
			return Global_40001.f_54B3;
		
		case 7:
			return Global_40001.f_54B4;
		
		default:
	}
	return 0;
}

float func_433(int iParam0, int iParam1)//Position - 0xE34D
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = SYSTEM::TO_FLOAT(Global_40001.f_54B6);
	switch (iParam0)
	{
		case -1:
		case 8:
			return 0f;
		
		case 7:
			fVar0 = Global_40001.f_54B8;
			fVar1 = SYSTEM::TO_FLOAT(Global_40001.f_54B5);
			break;
		
		case 3:
			fVar0 = Global_40001.f_54B8;
			fVar1 = SYSTEM::TO_FLOAT(Global_40001.f_54B5);
			break;
		
		case 0:
			fVar0 = Global_40001.f_54B9;
			break;
		
		case 1:
			fVar0 = Global_40001.f_54B9;
			break;
		
		case 4:
			fVar0 = Global_40001.f_54B9;
			break;
		
		case 6:
			fVar0 = Global_40001.f_54BA;
			fVar1 = SYSTEM::TO_FLOAT(Global_40001.f_54B7);
			break;
		
		case 2:
			fVar0 = Global_40001.f_54BA;
			fVar1 = SYSTEM::TO_FLOAT(Global_40001.f_54B7);
			break;
		
		case 5:
			fVar0 = Global_40001.f_54BA;
			fVar1 = SYSTEM::TO_FLOAT(Global_40001.f_54B7);
			break;
	}
	iVar2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / fVar1));
	return (SYSTEM::TO_FLOAT(iVar2) * fVar0);
}

int func_434(int iParam0)//Position - 0xE465
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return Global_18402B[iParam0 /*770*/].f_111.f_A8[5 /*12*/];
}

bool func_435()//Position - 0xE48B
{
	return func_119(unk_0xB5CEFD608600A09F());
}

void func_436(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0xE49B
{
	int iVar0;
	
	if (!func_449())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
			if (iParam1 > 0)
			{
				func_437(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
			func_437(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_437(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xE961
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_449())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x060D652F887827B8(func_19()) || unk_0xEBA8BD5AE6FF01CA())
		{
			Global_410B52 = 1;
			return 0;
		}
		if (Global_2584E7)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_410B53 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_41092C[iVar2 /*80*/].f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || unk_0x4EB807D82D2F9433(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0xCEA9F48EB9CF0CC7(iVar4))
		{
			*uParam0 = func_444(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_41092C[*uParam0 /*80*/].f_45 = 1;
					Global_41092C[*uParam0 /*80*/].f_49 = 1;
				}
			}
			Global_410B45 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_410B51 = 1;
			Global_410B54 = iParam4;
			Global_410B56 = iParam3;
			Global_410B57 = 1;
			Global_410B55 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_410B54 = iParam4;
			Global_410B56 = iParam3;
			Global_410B57 = 1;
			Global_410B55 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_443(1, iParam4);
			Global_410B51 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_438(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_438(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xEB05
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xF0059F27F7BB6680(&(Global_24FB5C[unk_0xB5CEFD608600A09F() /*406*/].f_76.f_47), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_439(iParam0);
	}
}

void func_439(int iParam0)//Position - 0xEB3D
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_449())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_442(iParam0))
		{
			if (!bVar0)
			{
				unk_0xC7150D5EF5AFC7C1();
			}
		}
		else if (!bVar0)
		{
			unk_0xA48F55B05F42FD2C(Global_41092C[iParam0 /*80*/]);
		}
		func_440(&(Global_41092C[iParam0 /*80*/]));
	}
}

void func_440(var uParam0)//Position - 0xEB8F
{
	*uParam0 = 0;
	*uParam0 = 2147483647;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1593119440;
	uParam0->f_4 = -2085313189;
	uParam0->f_5 = 0;
	uParam0->f_6 = 1227573907;
	uParam0->f_7 = -1161833819;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	func_441(&(uParam0->f_8.f_3));
	func_441(&(uParam0->f_8.f_10));
	StringCopy(&(uParam0->f_8.f_1D), "", 32);
	StringCopy(&(uParam0->f_8.f_25), "", 24);
	StringCopy(&(uParam0->f_8.f_2B), "", 16);
	StringCopy(&(uParam0->f_8.f_2F), "", 16);
	uParam0->f_8.f_33 = 0;
	uParam0->f_8.f_34 = 0;
	uParam0->f_8.f_35 = 0;
	uParam0->f_8.f_36 = 0;
	uParam0->f_8.f_37 = 0;
	uParam0->f_8.f_38 = 0;
	uParam0->f_45 = 0;
	uParam0->f_46 = 0;
	uParam0->f_47 = 0;
	uParam0->f_48 = 0;
	uParam0->f_4A = 0;
	uParam0->f_49 = 0;
	uParam0->f_4B = 0;
	uParam0->f_4C = 0;
	uParam0->f_4D = 0;
	uParam0->f_4F = 0;
}

void func_441(var uParam0)//Position - 0xEC81
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_A = 0;
	uParam0->f_B = 0;
	uParam0->f_C = 0;
}

int func_442(int iParam0)//Position - 0xECC9
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_41092C[iParam0 /*80*/].f_5 == 1;
	}
	return 0;
}

void func_443(int iParam0, int iParam1)//Position - 0xECF1
{
	Global_25897B = iParam1;
	Global_25897A = iParam0;
}

int func_444(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9)//Position - 0xED05
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_41092C[iVar0 /*80*/].f_2 == 0)
		{
			if (!func_449())
			{
				iParam0 = iVar0 + 900;
			}
			Global_41092C[iVar0 /*80*/].f_2 = 1;
			Global_41092C[iVar0 /*80*/].f_1 = iParam5;
			Global_41092C[iVar0 /*80*/].f_3 = uParam1;
			Global_41092C[iVar0 /*80*/].f_4 = iParam2;
			Global_41092C[iVar0 /*80*/].f_7 = iParam3;
			Global_41092C[iVar0 /*80*/].f_5 = 0;
			Global_41092C[iVar0 /*80*/] = iParam0;
			Global_41092C[iVar0 /*80*/].f_6 = iParam4;
			Global_41092C[iVar0 /*80*/].f_48 = uParam8;
			Global_41092C[iVar0 /*80*/].f_47 = iParam7;
			Global_41092C[iVar0 /*80*/].f_4A = iParam9;
			Global_41092C[iVar0 /*80*/].f_49 = 0;
			Global_41092C[iVar0 /*80*/].f_4B = unk_0xC87A57742F7D3C06();
			Global_41092C[iVar0 /*80*/].f_4F = 0;
			Global_410B45 = 0;
			if (bParam6)
			{
				Global_41092C[iVar0 /*80*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_445(int iParam0)//Position - 0xEDFE
{
	switch (iParam0)
	{
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 4;
		
		case 4:
			return 2;
		
		case 5:
			return 0;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 4;
		
		case 9:
			return 2;
		
		case 10:
			return 0;
		
		case 11:
			return 3;
		
		case 12:
			return 1;
		
		case 13:
			return 4;
		
		case 14:
			return 2;
		
		case 15:
			return 0;
		
		case 16:
			return 3;
		
		case 17:
			return 1;
		
		case 18:
			return 4;
		
		case 19:
			return 2;
		
		case 20:
			return 0;
		
		case 21:
			return 5;
		
		case 22:
			return 5;
		
		case 23:
			return 5;
		
		case 24:
			return 5;
		
		case 25:
			return 5;
		
		case 26:
			return 5;
		
		case 27:
			return 5;
		
		case 28:
			return 5;
		
		case 29:
			return 5;
		
		case 30:
			return 5;
		
		case 31:
			return 5;
		
		default:
	}
	return -1;
}

char* func_446(int iParam0)//Position - 0xEF44
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 2:
			sVar0 = "MP_BWH_WEED_1";
			break;
		
		case 1:
			sVar0 = "MP_BWH_METH_1";
			break;
		
		case 3:
			sVar0 = "MP_BWH_CRACK_1";
			break;
		
		case 5:
			sVar0 = "MP_BWH_FAKEID_1";
			break;
		
		case 4:
			sVar0 = "MP_BWH_CASH_1";
			break;
		
		case 7:
			sVar0 = "MP_BWH_WEED_2";
			break;
		
		case 6:
			sVar0 = "MP_BWH_METH_2";
			break;
		
		case 8:
			sVar0 = "MP_BWH_CRACK_2";
			break;
		
		case 10:
			sVar0 = "MP_BWH_FAKEID_2";
			break;
		
		case 9:
			sVar0 = "MP_BWH_CASH_2";
			break;
		
		case 12:
			sVar0 = "MP_BWH_WEED_3";
			break;
		
		case 11:
			sVar0 = "MP_BWH_METH_3";
			break;
		
		case 13:
			sVar0 = "MP_BWH_CRACK_3";
			break;
		
		case 15:
			sVar0 = "MP_BWH_FAKEID_3";
			break;
		
		case 14:
			sVar0 = "MP_BWH_CASH_3";
			break;
		
		case 17:
			sVar0 = "MP_BWH_WEED_4";
			break;
		
		case 16:
			sVar0 = "MP_BWH_METH_4";
			break;
		
		case 18:
			sVar0 = "MP_BWH_CRACK_4";
			break;
		
		case 20:
			sVar0 = "MP_BWH_FAKEID_4";
			break;
		
		case 19:
			sVar0 = "MP_BWH_CASH_4";
			break;
		
		case 21:
			sVar0 = "MP_BUNKER_1";
			break;
		
		case 22:
			sVar0 = "MP_BUNKER_2";
			break;
		
		case 23:
			sVar0 = "MP_BUNKER_3";
			break;
		
		case 24:
			sVar0 = "MP_BUNKER_4";
			break;
		
		case 25:
			sVar0 = "MP_BUNKER_5";
			break;
		
		case 26:
			sVar0 = "MP_BUNKER_6";
			break;
		
		case 27:
			sVar0 = "MP_BUNKER_7";
			break;
		
		case 28:
			sVar0 = "MP_BUNKER_9";
			break;
		
		case 29:
			sVar0 = "MP_BUNKER_10";
			break;
		
		case 30:
			sVar0 = "MP_BUNKER_11";
			break;
		
		case 31:
			sVar0 = "MP_BUNKER_12";
			break;
	}
	return sVar0;
}

struct<2> func_447()//Position - 0xF126
{
	return Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_BC;
}

bool func_448()//Position - 0xF13F
{
	return func_239(unk_0xB5CEFD608600A09F());
}

int func_449()//Position - 0xF14F
{
	if (unk_0x8ACB0C3FACC09467())
	{
		return unk_0xC9D803F7D7E10861();
	}
	return 0;
}

bool func_450(bool bParam0)//Position - 0xF166
{
	return func_179(unk_0xB5CEFD608600A09F(), bParam0);
}

void func_451(int iParam0, var uParam1, var uParam2)//Position - 0xF178
{
	*uParam1 = Global_18C80F[iParam0 /*558*/].f_B.f_8[0];
	*uParam2 = Global_18C80F[iParam0 /*558*/].f_B.f_8[1];
}

int func_452()//Position - 0xF1A6
{
	return Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B;
}

int func_453(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0xF1BB
{
	return func_454(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_454(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0xF1DD
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_464(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x724D816EA203A79E(iParam1))
		{
			if (unk_0x386592AF38881675(iParam1))
			{
				iVar1 = unk_0x399F7937FFE4DEBF(iParam1);
				func_460(unk_0x823166D9421223CA(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_455(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_455(int iParam0, int iParam1, char* sParam2, int iParam3)//Position - 0xF256
{
	vector3 vVar0;
	
	vVar0 = { func_458(iParam0, 1) };
	if (iParam0 == func_457(unk_0xBC25C936A095B5BA()))
	{
		func_456(1);
	}
	func_460(vVar0, iParam1, 0, sParam2, iParam3);
}

void func_456(int iParam0)//Position - 0xF28A
{
	Global_252E21.f_75D = iParam0;
}

int func_457(int iParam0)//Position - 0xF29B
{
	return iParam0;
}

Vector3 func_458(int iParam0, bool bParam1)//Position - 0xF2A5
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	if (unk_0xAE9335ADE2B33DFC())
	{
		vVar1 = { unk_0x14C8316F37CF95AA(2) };
	}
	if (iParam0 == func_459(unk_0xBC25C936A095B5BA()) && unk_0x3D875C2512206692(unk_0xEBC6179F395EFBEB()) == 4)
	{
		vVar0 = { unk_0xA4455714F3DCE207(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		vVar0 = { unk_0x541C2AEF053615BC(iParam0, false) };
	}
	fVar2 = 0f;
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		fVar2 = unk_0x349C94FFF43E2979(iParam0);
		if (unk_0x3D875C2512206692(unk_0xEBC6179F395EFBEB()) == 4)
		{
			fVar2 = vVar1.z;
		}
	}
	unk_0x2B3953EE61953843(unk_0x6F79ECA8C83E4357(iParam0), &vVar3, &vVar4);
	if (bParam1)
	{
		fVar5 = (vVar4.z + 0.18f);
	}
	else
	{
		fVar5 = (vVar3.z + 0.18f);
	}
	vVar0 = { unk_0x89D97EB4FAE4A574(vVar0, fVar2, 0f, 0f, fVar5) };
	return vVar0;
}

int func_459(int iParam0)//Position - 0xF369
{
	return iParam0;
}

void func_460(vector3 vParam0, int iParam1, int iParam2, char* sParam3, int iParam4)//Position - 0xF373
{
	int iVar0;
	int iVar1;
	
	if (iParam1 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_252E21.f_504[iVar0 /*30*/].f_6 == 0 || Global_252E21.f_504[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_252E21.f_504[iVar1 /*30*/] = { vParam0 };
			Global_252E21.f_504[iVar1 /*30*/].f_6 = 1;
			Global_252E21.f_504[iVar1 /*30*/].f_4 = func_463(Global_252E21.f_504[iVar1 /*30*/], &Global_14063D, &Global_14063E);
			Global_252E21.f_504[iVar1 /*30*/].f_7 = unk_0xED678C85A82F0AB9();
			Global_252E21.f_504[iVar1 /*30*/].f_3 = iParam1;
			Global_252E21.f_504[iVar1 /*30*/].f_8 = iParam2;
			Global_252E21.f_504[iVar1 /*30*/].f_9 = func_462();
			Global_252E21.f_504[iVar1 /*30*/].f_A = func_461();
			StringCopy(&(Global_252E21.f_504[iVar1 /*30*/].f_16), sParam3, 16);
			Global_252E21.f_504[iVar1 /*30*/].f_1A = unk_0x863D0D1A37055D36(unk_0xED678C85A82F0AB9(), iParam4);
		}
	}
}

int func_461()//Position - 0xF48A
{
	if (Global_252E21.f_75D)
	{
		Global_252E21.f_75D = 0;
		return 1;
	}
	Global_252E21.f_75D = 0;
	return 0;
}

var func_462()//Position - 0xF4B4
{
	var uVar0;
	
	uVar0 = Global_252E21.f_75F;
	Global_252E21.f_75F = 1;
	return uVar0;
}

float func_463(vector3 vParam0, var uParam1, var uParam2)//Position - 0xF4CF
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0xF0F2FC9DE291567F(unk_0x4E95580B2DDCC7A9(), vParam0, true);
	if (fVar0 < 5f)
	{
		*uParam1 = 0.402f;
		*uParam2 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam1 = 0.212f;
		*uParam2 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam1 = (fVar2 + 0.212f);
	*uParam2 = (fVar3 + 0.286f);
	return fVar1;
}

var func_464(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0xF568
{
	var uVar0;
	
	uVar0 = func_465(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_465(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0xF58B
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_495(unk_0xB5CEFD608600A09F()) || func_494(unk_0xB5CEFD608600A09F()))
	{
		if (Global_40001.f_2340 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_40001.f_2340;
		}
	}
	else if (func_227() || func_493(unk_0xB5CEFD608600A09F()))
	{
		if (Global_40001.f_567F > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_40001.f_567F;
		}
	}
	else if (Global_40001.f_178A > 10000)
	{
		iVar2 = 10000;
	}
	else
	{
		iVar2 = Global_40001.f_178A;
	}
	if (func_492(sParam2))
	{
	}
	if (func_491())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_489(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_40001.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_488(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_486(0, &iVar1);
					break;
				
				case 3:
					func_486(1, &iVar1);
					break;
				
				case 1:
					func_484(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1992E3)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_483(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_475((func_482(unk_0xB5CEFD608600A09F()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x5FF267E54EB49897(iVar1, iParam8, iParam9);
				if (Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_27.f_2 != -1)
				{
					func_483(1165, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_470(iVar1);
				}
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_466((func_468(unk_0xB5CEFD608600A09F()) + iVar1));
			}
			else
			{
				func_466((func_468(unk_0xB5CEFD608600A09F()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_466(int iParam0)//Position - 0xF789
{
	if (func_491())
	{
		Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_D3.f_5 = iParam0;
		func_467(joaat("mpply_globalxp"), iParam0);
	}
}

void func_467(int iParam0, int iParam1)//Position - 0xF7B4
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, 1);
	}
}

int func_468(int iParam0)//Position - 0xF7D0
{
	if (iParam0 > -1)
	{
		if (func_948(iParam0, 0, 1))
		{
			if (iParam0 == unk_0xB5CEFD608600A09F())
			{
				return func_469(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_18402B[iParam0 /*770*/].f_D3.f_5;
			}
		}
		else
		{
			return func_469(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_469(int iParam0)//Position - 0xF821
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (unk_0x6CB99B97664C3727(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_470(int iParam0)//Position - 0xF83F
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_65(unk_0xB5CEFD608600A09F()) };
	if (unk_0xB9ACC1154C623363())
	{
		if (unk_0xD7F4457CECF10121(&Var0))
		{
			iVar1 = func_473(func_474(&Var0));
			if (iVar1 == 0)
			{
				func_472(&Global_14F5C9, iParam0);
				func_471(joaat("mpply_crew_local_xp_0"), Global_14F5C9);
			}
			else if (iVar1 == 1)
			{
				func_472(&Global_14F5CA, iParam0);
				func_471(joaat("mpply_crew_local_xp_1"), Global_14F5CA);
			}
			else if (iVar1 == 2)
			{
				func_472(&Global_14F5CB, iParam0);
				func_471(joaat("mpply_crew_local_xp_2"), Global_14F5CB);
			}
			else if (iVar1 == 3)
			{
				func_472(&Global_14F5CC, iParam0);
				func_471(joaat("mpply_crew_local_xp_3"), Global_14F5CC);
			}
			else if (iVar1 == 4)
			{
				func_472(&Global_14F5CD, iParam0);
				func_471(joaat("mpply_crew_local_xp_4"), Global_14F5CD);
			}
		}
	}
}

void func_471(int iParam0, int iParam1)//Position - 0xF913
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_14F5C4 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_14F5C6 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_14F5C6 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_14F5C7 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_14F5C8 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_14F5C9 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_14F5CA = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_14F5CB = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_14F5CC = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_14F5CD = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_14F5CE = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_14F5CF = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_14F5D0 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_14F5D1 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_14F5D2 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_14F5D3 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_14F5D4 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_472(var uParam0, int iParam1)//Position - 0xFA38
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_473(int iParam0)//Position - 0xFA49
{
	if (iParam0 == Global_14F5C4)
	{
		return 0;
	}
	else if (iParam0 == Global_14F5C5)
	{
		return 1;
	}
	else if (iParam0 == Global_14F5C6)
	{
		return 2;
	}
	else if (iParam0 == Global_14F5C7)
	{
		return 3;
	}
	else if (iParam0 == Global_14F5C8)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_474(var uParam0)//Position - 0xFAA6
{
	if (unk_0xB9ACC1154C623363())
	{
		if (unk_0xD7F4457CECF10121(uParam0))
		{
			return Global_25801B;
		}
	}
	return Global_25801B;
}

void func_475(int iParam0, int iParam1, int iParam2)//Position - 0xFAC9
{
	if (func_491())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_40001.f_2320 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_14F642[func_138(-1)])
				{
					unk_0x5FF267E54EB49897(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_14F642[func_138(-1)])
				{
					return;
				}
			}
		}
		if (Global_40001.f_231F == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x5FF267E54EB49897(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_40001.f_231F == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x5FF267E54EB49897(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_481(unk_0xB5CEFD608600A09F()))
		{
			Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_D3.f_1 = iParam0;
			Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_D3.f_6 = func_479(iParam0, 1);
		}
		func_420(639, iParam0, -1, 1);
		func_421(640, func_479(iParam0, 1), -1, 1, 0);
		Global_14F642[func_138(-1)] = iParam0;
		func_476(7, 0);
	}
}

void func_476(int iParam0, int iParam1)//Position - 0xFBEA
{
	int iVar0;
	
	if (func_478(iParam0, iParam1))
	{
		iVar0 = func_477();
		Global_258004[iVar0] = iParam0;
	}
}

int func_477()//Position - 0xFC0D
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_258004[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_478(int iParam0, var uParam1)//Position - 0xFC42
{
	if (Global_14084A)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_140856) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_479(int iParam0, bool bParam1)//Position - 0xFCC8
{
	if (bParam1)
	{
	}
	return func_480(iParam0, 0);
}

int func_480(int iParam0, int iParam1)//Position - 0xFCDC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_45E53[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_45E53[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_481(int iParam0)//Position - 0xFD9B
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xFA30DFD0084E92FE(Global_252E21.f_1, iParam0);
	}
	return 1;
}

int func_482(int iParam0)//Position - 0xFDC0
{
	if (Global_1406D2.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xB5CEFD608600A09F())
			{
				return Global_14F642[func_138(-1)];
			}
			else if (func_481(iParam0))
			{
				return Global_18402B[iParam0 /*770*/].f_D3.f_1;
			}
		}
	}
	else
	{
		return Global_14F642[func_138(-1)];
	}
	return 0;
}

void func_483(int iParam0, int iParam1, int iParam2)//Position - 0xFE1D
{
	int iVar0;
	
	iVar0 = func_423(iParam0, func_138(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_422(iParam0))
	{
		func_421(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_420(iParam0, iVar0, iParam2, 1);
	}
}

void func_484(int iParam0)//Position - 0xFE5F
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F());
	iVar0 = 0;
	while (iVar0 < unk_0x81C86888AEA2F49B())
	{
		iVar4 = unk_0xCFA8A401AAD7BB5A(iVar0);
		if (unk_0x05086B70D2CFEA6F(iVar4))
		{
			iVar5 = unk_0x4ED43B67B3F05E0F(iVar4);
			if (unk_0x343CB262BF0CDF5A(iVar5) != -1)
			{
				if (unk_0x343CB262BF0CDF5A(iVar5) == iVar1 || func_350(unk_0x343CB262BF0CDF5A(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0xB5CEFD608600A09F())
					{
						if (func_66(unk_0xB5CEFD608600A09F(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_485(*iParam0, 100) * (10f * Global_40001.f_1079)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_485(*iParam0, 100) * (20f * Global_40001.f_1072)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_485(int iParam0, int iParam1)//Position - 0xFF4A
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_486(bool bParam0, int iParam1)//Position - 0xFF6B
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < unk_0x81C86888AEA2F49B())
		{
			iVar3 = iVar0;
			if (unk_0x05086B70D2CFEA6F(iVar3))
			{
				iVar4 = unk_0x4ED43B67B3F05E0F(iVar3);
				if (func_948(iVar4, 0, 1))
				{
					if (iVar4 != unk_0xB5CEFD608600A09F())
					{
						iVar1++;
						if (func_66(unk_0xB5CEFD608600A09F(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_948(iVar4, 1, 1))
			{
				if (iVar4 != unk_0xB5CEFD608600A09F())
				{
					if (func_487(unk_0xB5CEFD608600A09F(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_66(unk_0xB5CEFD608600A09F(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_485(*iParam1, 100) * (10f * Global_40001.f_1079)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_485(*iParam1, 100) * (20f * Global_40001.f_1072)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_487(int iParam0, int iParam1)//Position - 0x10085
{
	return SYSTEM::VDIST(func_57(iParam0), func_57(iParam1));
	return 0f;
}

int func_488(int iParam0)//Position - 0x100A1
{
	int iVar0;
	
	if (unk_0x8820DB58BCD4A148() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_485(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_489(int iParam0)//Position - 0x100D8
{
	if (iParam0 < 0)
	{
		if (unk_0xC40EDFF7541407A8(iParam0) > func_482(unk_0xB5CEFD608600A09F()))
		{
			iParam0 = -func_482(unk_0xB5CEFD608600A09F());
		}
	}
	if (func_490(8000, 0, 0) > 0)
	{
		if (func_490(8000, 0, 0) < (iParam0 + func_482(unk_0xB5CEFD608600A09F())))
		{
			iParam0 = (func_490(8000, 0, 0) - func_482(unk_0xB5CEFD608600A09F()));
		}
	}
	return iParam0;
}

int func_490(int iParam0, bool bParam1, int iParam2)//Position - 0x1013C
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_45E53[iParam0];
}

int func_491()//Position - 0x10164
{
	return 1;
}

int func_492(char* sParam0)//Position - 0x1016D
{
	if (unk_0xEAEFBBEC1AEA464B(sParam0))
	{
		return 1;
	}
	else if (unk_0x3362CDE8460ED38B(sParam0, "") || unk_0x3362CDE8460ED38B(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_493(int iParam0)//Position - 0x101A5
{
	return func_377(func_101(iParam0));
}

bool func_494(int iParam0)//Position - 0x101B7
{
	return Global_24FB5C[iParam0 /*406*/].f_6F == 2;
}

bool func_495(int iParam0)//Position - 0x101CC
{
	return Global_24FB5C[iParam0 /*406*/].f_6F == 7;
}

void func_496()//Position - 0x101E1
{
	Global_258663 = 1;
}

void func_497(int iParam0, var uParam1, var uParam2)//Position - 0x101EE
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_79(7))
	{
		return;
	}
	iVar0 = func_500(iParam0);
	iVar1 = func_499(iParam0);
	iVar2 = unk_0xC40EDFF7541407A8(unk_0xCCA9497DA4595710(Global_267214.f_1312.f_101, unk_0xED678C85A82F0AB9()));
	if (func_498(iParam0) != -1)
	{
		if (iVar2 > func_498(iParam0))
		{
			iVar2 = func_498(iParam0);
		}
	}
	else if (iVar2 > Global_40001.f_2E08)
	{
		iVar2 = Global_40001.f_2E08;
	}
	iVar3 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_498(int iParam0)//Position - 0x10298
{
	if (func_210(iParam0, 0) || func_418(iParam0))
	{
		return Global_40001.f_45C1;
	}
	if (func_384(iParam0))
	{
		return Global_40001.f_45C0;
	}
	switch (iParam0)
	{
		case 192:
			return Global_40001.f_45BD;
		
		case 191:
			return Global_40001.f_45BF;
		
		case 190:
			return Global_40001.f_45BE;
		
		case 227:
			return Global_40001.f_4FBD;
		
		case 226:
			return Global_40001.f_4FB1;
		
		case 225:
			return Global_40001.f_4FC5;
		
		case 230:
			return Global_40001.f_54A9;
		
		case 229:
			return Global_40001.f_5449;
		
		case 233:
			return Global_40001.f_5684;
		
		case 237:
			return Global_40001.f_5AEC;
		
		case 238:
			return Global_40001.f_5B5B;
		
		case 249:
			return Global_40001.f_5B6B;
		
		default:
	}
	return -1;
}

int func_499(int iParam0)//Position - 0x1039B
{
	switch (iParam0)
	{
		case 148:
			return Global_40001.f_2E63;
		
		case 152:
			return Global_40001.f_2E86;
		
		case 151:
			return 0;
		
		case 142:
			return Global_40001.f_2E7A;
		
		case 157:
			return Global_40001.f_2E59;
		
		case 159:
			return Global_40001.f_2E48;
		
		case 164:
			return Global_40001.f_2E70;
		
		case 160:
			return Global_40001.f_2EA2;
		
		case 162:
			return Global_40001.f_2EB6;
		
		case 163:
			return Global_40001.f_2E93;
		
		case 154:
			return Global_40001.f_2ED9;
		
		case 155:
			return Global_40001.f_2ECF;
		
		case 153:
			return Global_40001.f_2EAB;
		
		case 170:
			return Global_40001.f_3822;
		
		case 171:
			return Global_40001.f_385D;
		
		case 172:
			return Global_40001.f_386F;
		
		case 173:
			return Global_40001.f_3834;
		
		case 166:
			return Global_40001.f_3843;
		
		case 167:
			return Global_40001.f_389E;
		
		case 169:
			return Global_40001.f_3882;
		
		case 168:
			return Global_40001.f_387B;
		
		case 179:
			return Global_40001.f_4548;
		
		case 180:
			return Global_40001.f_446B;
		
		case 182:
			return Global_40001.f_446B;
		
		case 183:
			return Global_40001.f_446B;
		
		case 185:
			return Global_40001.f_446B;
		
		case 186:
			return Global_40001.f_446B;
		
		case 189:
			return Global_40001.f_4548;
		
		case 190:
			return Global_40001.f_43EF;
		
		case 191:
			return Global_40001.f_444A;
		
		case 192:
			return Global_40001.f_437C;
		
		case 193:
			return Global_40001.f_4548;
		
		case 194:
			return Global_40001.f_4548;
		
		case 195:
			return Global_40001.f_446B;
		
		case 197:
			return Global_40001.f_446B;
		
		case 198:
			return Global_40001.f_446B;
		
		case 199:
			return Global_40001.f_4548;
		
		case 200:
			return Global_40001.f_4548;
		
		case 201:
			return Global_40001.f_4548;
		
		case 205:
			return Global_40001.f_4548;
		
		case 207:
			return Global_40001.f_446B;
		
		case 208:
			return Global_40001.f_446B;
		
		case 209:
			return Global_40001.f_446B;
		
		case 210:
			return Global_40001.f_4548;
		
		case 211:
			return Global_40001.f_4548;
		
		case 214:
			return Global_40001.f_489A;
		
		case 215:
			return Global_40001.f_489C;
		
		case 216:
			return Global_40001.f_489E;
		
		case 217:
			return Global_40001.f_48A0;
		
		case 218:
			return Global_40001.f_48A2;
		
		case 219:
			return Global_40001.f_48A4;
		
		case 220:
			return Global_40001.f_48A6;
		
		case 221:
			return Global_40001.f_48A8;
		
		case 225:
			if (func_450(0) || func_237(0))
			{
				return Global_40001.f_4FC7;
			}
			break;
		
		case 226:
			if (func_450(0) || func_237(0))
			{
				return Global_40001.f_4FB3;
			}
			break;
		
		case 227:
			if (func_450(0) || func_237(0))
			{
				return Global_40001.f_4FBF;
			}
			break;
		
		case 229:
			if (func_450(0) || func_237(0))
			{
				return Global_40001.f_544B;
			}
			break;
		
		case 230:
			if (func_450(0) || func_237(0))
			{
				return Global_40001.f_54AB;
			}
			break;
		
		case 233:
			if (func_450(0) || func_237(0))
			{
				return Global_40001.f_5683;
			}
			break;
		
		case 241:
			return 100;
		
		case 242:
			return 100;
		
		case 244:
			return 100;
		
		case 248:
			return 100;
		
		case 239:
			return 100;
		
		case 240:
			return 100;
		
		case 250:
			return 100;
		
		case 237:
			if (func_450(0) || func_237(0))
			{
				return Global_40001.f_5AEE;
			}
			break;
		
		case 238:
			if (func_450(0) || func_237(0))
			{
				return Global_40001.f_5B5D;
			}
			break;
		
		case 249:
			if (func_450(0) || func_237(0))
			{
				return Global_40001.f_5B6D;
			}
			break;
	}
	return 0;
}

int func_500(int iParam0)//Position - 0x10898
{
	switch (iParam0)
	{
		case 148:
			return Global_40001.f_2E62;
		
		case 152:
			return Global_40001.f_2E85;
		
		case 151:
			return 0;
		
		case 142:
			return Global_40001.f_2E79;
		
		case 157:
			return Global_40001.f_2E58;
		
		case 159:
			return Global_40001.f_2E47;
		
		case 164:
			return Global_40001.f_2E6F;
		
		case 160:
			return Global_40001.f_2EA1;
		
		case 162:
			return Global_40001.f_2EB5;
		
		case 163:
			return Global_40001.f_2E92;
		
		case 154:
			return Global_40001.f_2ED8;
		
		case 155:
			return Global_40001.f_2ECE;
		
		case 153:
			return Global_40001.f_2EAA;
		
		case 170:
			return Global_40001.f_3821;
		
		case 171:
			return Global_40001.f_385C;
		
		case 172:
			return Global_40001.f_386E;
		
		case 173:
			return Global_40001.f_3833;
		
		case 166:
			return Global_40001.f_3842;
		
		case 179:
			return Global_40001.f_4547;
		
		case 180:
			return Global_40001.f_446A;
		
		case 182:
			return Global_40001.f_446A;
		
		case 183:
			return Global_40001.f_446A;
		
		case 185:
			return Global_40001.f_446A;
		
		case 186:
			return Global_40001.f_446A;
		
		case 189:
			return Global_40001.f_4547;
		
		case 193:
			return Global_40001.f_4547;
		
		case 194:
			return Global_40001.f_4547;
		
		case 195:
			return Global_40001.f_446A;
		
		case 197:
			return Global_40001.f_446A;
		
		case 198:
			return Global_40001.f_446A;
		
		case 199:
			return Global_40001.f_4547;
		
		case 200:
			return Global_40001.f_4547;
		
		case 201:
			return Global_40001.f_4547;
		
		case 205:
			return Global_40001.f_4547;
		
		case 207:
			return Global_40001.f_446A;
		
		case 208:
			return Global_40001.f_446A;
		
		case 209:
			return Global_40001.f_446A;
		
		case 210:
			return Global_40001.f_4547;
		
		case 211:
			return Global_40001.f_4547;
		
		case 190:
			if (!func_435())
			{
				return Global_40001.f_43EE;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (!func_435())
			{
				return Global_40001.f_4449;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (!func_435())
			{
				return Global_40001.f_437B;
			}
			else
			{
				return 0;
			}
			break;
		
		case 214:
			return Global_40001.f_4899;
		
		case 215:
			return Global_40001.f_489B;
		
		case 216:
			return Global_40001.f_489D;
		
		case 217:
			return Global_40001.f_489F;
		
		case 218:
			return Global_40001.f_48A1;
		
		case 219:
			return Global_40001.f_48A3;
		
		case 220:
			return Global_40001.f_48A5;
		
		case 221:
			return Global_40001.f_48A7;
		
		case 225:
			if (func_237(0))
			{
				return Global_40001.f_4FC6;
			}
			break;
		
		case 226:
			if (func_237(0))
			{
				return Global_40001.f_4FB2;
			}
			break;
		
		case 227:
			if (func_237(0))
			{
				return Global_40001.f_4FBE;
			}
			break;
		
		case 229:
			if (func_237(0))
			{
				return Global_40001.f_544A;
			}
			break;
		
		case 230:
			if (func_237(0))
			{
				return Global_40001.f_54AA;
			}
			break;
		
		case 233:
			if (func_237(0))
			{
				return Global_40001.f_5685;
			}
			break;
		
		case 241:
			return 500;
		
		case 242:
			return 500;
		
		case 244:
			return 500;
		
		case 248:
			return 500;
		
		case 239:
			return 500;
		
		case 240:
			return 500;
		
		case 250:
			return 500;
		
		case 237:
			if (func_237(0))
			{
				return Global_40001.f_5AED;
			}
			break;
		
		case 238:
			if (func_237(0))
			{
				return Global_40001.f_5B5C;
			}
			break;
		
		case 249:
			if (func_237(0))
			{
				return Global_40001.f_5B6C;
			}
			break;
	}
	return 0;
}

void func_501(int iParam0, int iParam1)//Position - 0x10D3F
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_435())
		{
			if (func_450(0))
			{
				if (!func_237(0))
				{
					if (unk_0x96B1061E8F3CBC9A(func_452()))
					{
						if (func_512() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_512());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_510(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_507("GB_BCUT_TICK1", func_452(), iVar0, 0, 0, 1, 1);
						}
						func_506(20);
						func_502(func_452(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_502(int iParam0, int iParam1, int iParam2)//Position - 0x10DE0
{
	struct<8> Var0;
	
	if (func_948(iParam0, 0, 1))
	{
		Var0 = 1838378015;
		Var0.f_1 = unk_0xB5CEFD608600A09F();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_505(iParam0);
		func_504(&(Var0.f_6), &(Var0.f_7));
		unk_0x38E776D9FA75679B(1, &Var0, 8, func_503(iParam0));
	}
}

var func_503(int iParam0)//Position - 0x10E36
{
	var uVar0;
	
	unk_0xF0059F27F7BB6680(&uVar0, iParam0);
	return uVar0;
}

void func_504(var uParam0, var uParam1)//Position - 0x10E48
{
	*uParam0 = Global_190DD1.f_9;
	*uParam1 = Global_190DD1.f_A;
}

var func_505(int iParam0)//Position - 0x10E62
{
	return Global_18C80F[iParam0 /*558*/].f_1EB;
}

void func_506(int iParam0)//Position - 0x10E76
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xF0059F27F7BB6680(&(Global_267214.f_1312.f_7[iVar0]), iVar1);
}

int func_507(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)//Position - 0x10E9F
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0x75206900382D1E30(unk_0xB5CEFD608600A09F(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0xD885B2234FC72D62(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0xD885B2234FC72D62(iParam1), 64);
		}
		if (unk_0xF1734B55490E9045(&Var1))
		{
		}
		unk_0x2E94302CFF011F2E(sParam0);
		unk_0x449F0674640D94C0(func_343(iParam1, -2, 1, 0));
		unk_0x607C19B90D297FE2(func_508(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x449F0674640D94C0(iParam3);
		}
		unk_0xAA5C5BF0489E5553(iParam2);
		iVar0 = unk_0x5E48BB10C6423FD5(0, 1);
		func_290(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

var func_508(char* sParam0)//Position - 0x10F36
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_509(&cVar0);
}

var func_509(char[4] cParam0)//Position - 0x10F5A
{
	return cParam0;
}

void func_510(int iParam0, bool bParam1)//Position - 0x10F64
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_511(1);
	}
	else
	{
		iVar1 = func_511(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_511(bool bParam0)//Position - 0x10F96
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_40001.f_2E03;
}

int func_512()//Position - 0x10FBC
{
	return Global_40001.f_2E02;
}

void func_513(int iParam0, var uParam1, int iParam2, var uParam3)//Position - 0x10FCB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	int iVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	
	bVar18 = func_237(1);
	bVar19 = false;
	if (iParam0 == 237)
	{
		if (func_435())
		{
			iVar17 = unk_0xB5CEFD608600A09F();
		}
		else
		{
			iVar17 = func_452();
		}
		iVar11 = iVar17;
		if (iVar11 != -1)
		{
			iVar0 = Global_18402B[iVar11 /*770*/].f_2F1.f_1;
			if (uParam1->f_A == uParam1->f_B)
			{
				iVar1 = iVar0;
				bVar19 = true;
			}
			else
			{
				fVar12 = SYSTEM::TO_FLOAT(uParam1->f_A);
				fVar13 = SYSTEM::TO_FLOAT(uParam1->f_B);
				fVar14 = ((fVar12 / fVar13) * 100f);
				fVar15 = ((IntToFloat(iVar0) / 100f) * fVar14);
				iVar1 = SYSTEM::CEIL(fVar15);
			}
			*uParam3 = iVar1;
			if (bVar19)
			{
				iVar2 = Global_18402B[iVar11 /*770*/].f_2F1.f_2;
			}
			else
			{
				iVar2 = func_529(Global_18402B[iVar11 /*770*/].f_2F1, *uParam3);
			}
			if (uParam1->f_11)
			{
				iVar20 = (iVar2 - SYSTEM::CEIL((IntToFloat(iVar2) * 0.9f)));
				if (iVar20 > 100000)
				{
					iVar20 = 100000;
				}
				iVar2 = (iVar2 - iVar20);
			}
			*iParam2 = (*iParam2 + iVar2);
			iVar10 = func_528(*iParam2);
			if (iVar10 > 0)
			{
				if (iVar17 == unk_0xB5CEFD608600A09F())
				{
					func_527("TICK_TCUT", iVar10, 1);
				}
				*iParam2 = (*iParam2 - iVar10);
			}
			Global_196A81.f_31 = *uParam3;
			if (iVar17 == unk_0xB5CEFD608600A09F())
			{
				if (iVar2 > 0)
				{
					func_526(iVar2);
				}
				if (*uParam3 > 0)
				{
					func_524(*uParam3);
				}
				iVar6 = func_523(&uVar5);
				iVar7 = Global_40001.f_5B0B;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar9 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_40001.f_5B0A));
				iVar8 = ((*iParam2 / 100) * iVar9);
				*iParam2 = (*iParam2 + iVar8);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_506(140);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar18)
					{
						iVar21 = 0;
						while (iVar21 < unk_0x81C86888AEA2F49B())
						{
							iVar22 = iVar21;
							if (unk_0x05086B70D2CFEA6F(iVar22))
							{
								iVar23 = unk_0x4ED43B67B3F05E0F(iVar22);
								if (func_522(iVar23))
								{
									func_514(iVar23, 1, 198210293);
								}
							}
							iVar21++;
						}
					}
				}
				Global_267214.f_1312.f_172 = *iParam2;
			}
			else if (bVar18)
			{
				fVar16 = Global_40001.f_5AEF;
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar16));
				*iParam2 = iVar3;
				iVar4 = Global_40001.f_5AF0;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1992EB = *iParam2;
					func_506(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_514(int iParam0, int iParam1, int iParam2)//Position - 0x11232
{
	var uVar0;
	
	uVar0 = func_516(iParam0);
	func_515(iParam0, uVar0, iParam1, iParam2);
}

void func_515(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x1124E
{
	struct<8> Var0;
	
	Var0 = 151656521;
	Var0.f_1 = unk_0xB5CEFD608600A09F();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_505(iParam0);
	func_504(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_63())
	{
		if (unk_0x96B1061E8F3CBC9A(iParam0))
		{
			unk_0x38E776D9FA75679B(1, &Var0, 8, func_503(iParam0));
		}
	}
}

int func_516(int iParam0)//Position - 0x112B4
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_521();
	iVar0 = func_519(iParam0, iVar0);
	iVar1 = Global_18C80F[func_452() /*558*/].f_B.f_198;
	iVar0 = (iVar0 + (iVar1 * Global_40001.f_37FA));
	if (iVar0 < func_518())
	{
		iVar0 = func_518();
	}
	if (iVar0 > func_517())
	{
		iVar0 = func_517();
	}
	return iVar0;
}

int func_517()//Position - 0x1130D
{
	return Global_40001.f_37FB;
}

int func_518()//Position - 0x1131C
{
	return Global_40001.f_3C92;
}

int func_519(int iParam0, int iParam1)//Position - 0x1132B
{
	int iVar0;
	
	iVar0 = (func_587(iParam0) * func_520());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_520()//Position - 0x11349
{
	return Global_40001.f_3C91;
}

var func_521()//Position - 0x11358
{
	return Global_40001.f_2DFA;
}

int func_522(int iParam0)//Position - 0x11367
{
	if (unk_0x96B1061E8F3CBC9A(iParam0))
	{
		if (iParam0 != unk_0xB5CEFD608600A09F())
		{
			if (func_74(iParam0, unk_0xB5CEFD608600A09F(), 0))
			{
				if (!func_105(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_523(var uParam0)//Position - 0x113A0
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0x96B1061E8F3CBC9A(unk_0x3171C34AB3FE6F2E(iVar0)))
		{
			iVar2 = unk_0x3171C34AB3FE6F2E(iVar0);
			if (!func_17(iVar2, 0) && !func_74(iVar2, unk_0xB5CEFD608600A09F(), 1))
			{
				iVar1++;
			}
			else if (func_17(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_524(int iParam0)//Position - 0x1140C
{
	func_525(iParam0, 7232);
}

void func_525(int iParam0, int iParam1)//Position - 0x1141D
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_423(iParam1, -1, 0);
	func_421(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_526(int iParam0)//Position - 0x11446
{
	func_525(iParam0, 7227);
}

int func_527(char* sParam0, int iParam1, int iParam2)//Position - 0x11457
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x2E94302CFF011F2E(sParam0);
	unk_0xAA5C5BF0489E5553(iParam1);
	iVar0 = unk_0x5E48BB10C6423FD5(0, 1);
	func_290(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_528(int iParam0)//Position - 0x1148B
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = (fVar0 * Global_40001.f_5B0C);
	if (fVar1 > 100000f)
	{
		fVar1 = 100000f;
	}
	return SYSTEM::ROUND(fVar1);
}

int func_529(struct<5> Param0, int iParam1)//Position - 0x114BF
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	if (iParam1 == Param0.f_1)
	{
		return Param0.f_2;
	}
	iVar0 = Param0.f_2;
	if ((Param0.f_4 == 1 || Param0.f_4 == 2) || Param0.f_4 == 3)
	{
		iVar0 = (iVar0 - Param0.f_3);
	}
	fVar1 = (SYSTEM::TO_FLOAT(iParam1) / SYSTEM::TO_FLOAT(Param0.f_1));
	fVar2 = SYSTEM::TO_FLOAT(iVar0);
	return SYSTEM::FLOOR((fVar2 * fVar1));
}

void func_530(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4)//Position - 0x11529
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	*uParam4 = 0;
	bVar16 = func_237(1);
	bVar17 = false;
	if (iParam0 == 229)
	{
	}
	else if (iParam0 == 230)
	{
		if (func_435())
		{
			iVar15 = unk_0xB5CEFD608600A09F();
		}
		else
		{
			iVar15 = func_452();
		}
		if (iVar15 != -1)
		{
			if (uParam1->f_10 == 8)
			{
				iVar0 = (func_542(iVar15) + uParam1->f_8);
			}
			else
			{
				iVar0 = (func_533(uParam1->f_10) + uParam1->f_8);
			}
			if (uParam1->f_A == uParam1->f_B)
			{
				iVar1 = iVar0;
				bVar17 = true;
			}
			else
			{
				fVar10 = SYSTEM::TO_FLOAT(uParam1->f_A);
				fVar11 = SYSTEM::TO_FLOAT(uParam1->f_B);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = SYSTEM::CEIL(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_431(uParam1->f_10, *uParam3);
			*iParam2 = (*iParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = func_430(uParam1->f_10, *uParam3);
				if (iVar9 > 0)
				{
					*iParam2 = (*iParam2 + iVar9);
				}
			}
			if (func_532(*iParam2) > 0)
			{
				if (iVar15 == unk_0xB5CEFD608600A09F())
				{
					func_527("SMTICK_RONCUT", func_532(*iParam2), 1);
				}
				*iParam2 = (*iParam2 - func_532(*iParam2));
			}
			if (iVar15 == unk_0xB5CEFD608600A09F())
			{
				func_531(iVar2, iVar9);
				iVar6 = func_523(&uVar5);
				iVar7 = Global_40001.f_54BC;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_40001.f_54BB));
				*uParam4 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + *uParam4);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_506(44);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar16)
					{
						iVar18 = 0;
						while (iVar18 < unk_0x81C86888AEA2F49B())
						{
							iVar19 = iVar18;
							if (unk_0x05086B70D2CFEA6F(iVar19))
							{
								iVar20 = unk_0x4ED43B67B3F05E0F(iVar19);
								if (func_522(iVar20))
								{
									func_514(iVar20, 1, 1160415507);
								}
							}
							iVar18++;
						}
					}
				}
				Global_267214.f_1312.f_172 = *iParam2;
			}
			else if (bVar16)
			{
				fVar14 = Global_40001.f_5479;
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_40001.f_547A;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1992EB = *iParam2;
					func_506(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_531(int iParam0, int iParam1)//Position - 0x1176F
{
	if (iParam0 > 0)
	{
		func_525(iParam0, 6112);
	}
	if (iParam1 > 0)
	{
		func_525(iParam1, 6113);
	}
}

int func_532(int iParam0)//Position - 0x11795
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = (fVar0 * Global_40001.f_549B);
	if (fVar1 > SYSTEM::TO_FLOAT(Global_40001.f_549C))
	{
		fVar1 = SYSTEM::TO_FLOAT(Global_40001.f_549C);
	}
	return SYSTEM::ROUND(fVar1);
}

int func_533(int iParam0)//Position - 0x117D5
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_540())
	{
		return 0;
	}
	if (iParam0 == 8)
	{
		return func_542(unk_0xB5CEFD608600A09F());
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		iVar2 = func_535(func_536(func_539(iVar0), -1, -1));
		if (func_534(iVar2) == iParam0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_534(int iParam0)//Position - 0x11833
{
	switch (iParam0)
	{
		case -508960047:
			return 5;
		
		case -1996578712:
			return 5;
		
		case -324063008:
			return 7;
		
		case -1537242760:
			return 7;
		
		case 167523060:
			return 1;
		
		case 440723308:
			return 1;
		
		case -1821684485:
			return 6;
		
		case 1075487129:
			return 6;
		
		case 1339867730:
			return 4;
		
		case 1158536477:
			return 4;
		
		case -1222709082:
			return 0;
		
		case -260422691:
			return 0;
		
		case -1117639471:
			return 3;
		
		case -1434473216:
			return 3;
		
		case 690570889:
			return 2;
		
		case 320416020:
			return 2;
		
		default:
	}
	return -1;
}

int func_535(int iParam0)//Position - 0x118E3
{
	switch (iParam0)
	{
		case 1:
			return -508960047;
		
		case 2:
			return -1996578712;
		
		case 3:
			return -324063008;
		
		case 4:
			return -1537242760;
		
		case 5:
			return 167523060;
		
		case 6:
			return 440723308;
		
		case 7:
			return -1821684485;
		
		case 8:
			return 1075487129;
		
		case 9:
			return 1339867730;
		
		case 10:
			return 1158536477;
		
		case 11:
			return -1222709082;
		
		case 12:
			return -260422691;
		
		case 13:
			return -1117639471;
		
		case 14:
			return -1434473216;
		
		case 15:
			return 690570889;
		
		case 16:
			return 320416020;
		
		default:
	}
	return 0;
}

int func_536(int iParam0, int iParam1, int iParam2)//Position - 0x119D3
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	iVar0 = 0;
	iVar1 = func_538(iParam0, iParam1);
	iVar2 = func_537(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x6AEE934BCCBCAA0E(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_537(int iParam0)//Position - 0x11A19
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

int func_538(int iParam0, int iParam1)//Position - 0x11D8D
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_19();
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

int func_539(int iParam0)//Position - 0x120B7
{
	switch (iParam0)
	{
		case 0:
			return 16011;
		
		case 1:
			return 16012;
		
		case 2:
			return 16013;
		
		case 3:
			return 16014;
		
		case 4:
			return 16015;
		
		case 5:
			return 16016;
		
		case 6:
			return 16017;
		
		case 7:
			return 16018;
		
		case 8:
			return 16019;
		
		case 9:
			return 16020;
		
		case 10:
			return 16021;
		
		case 11:
			return 16022;
		
		case 12:
			return 16023;
		
		case 13:
			return 16024;
		
		case 14:
			return 16025;
		
		case 15:
			return 16026;
		
		case 16:
			return 16027;
		
		case 17:
			return 16028;
		
		case 18:
			return 16029;
		
		case 19:
			return 16030;
		
		case 20:
			return 16031;
		
		case 21:
			return 16032;
		
		case 22:
			return 16033;
		
		case 23:
			return 16034;
		
		case 24:
			return 16035;
		
		case 25:
			return 16036;
		
		case 26:
			return 16037;
		
		case 27:
			return 16038;
		
		case 28:
			return 16039;
		
		case 29:
			return 16040;
		
		case 30:
			return 16041;
		
		case 31:
			return 16042;
		
		case 32:
			return 16043;
		
		case 33:
			return 16044;
		
		case 34:
			return 16045;
		
		case 35:
			return 16046;
		
		case 36:
			return 16047;
		
		case 37:
			return 16048;
		
		case 38:
			return 16049;
		
		case 39:
			return 16050;
		
		case 40:
			return 16051;
		
		case 41:
			return 16052;
		
		case 42:
			return 16053;
		
		case 43:
			return 16054;
		
		case 44:
			return 16055;
		
		case 45:
			return 16056;
		
		case 46:
			return 16057;
		
		case 47:
			return 16058;
		
		case 48:
			return 16059;
		
		case 49:
			return 16060;
		
		default:
	}
	return 16011;
}

bool func_540()//Position - 0x12321
{
	return func_541() != 0;
}

int func_541()//Position - 0x1232F
{
	return Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_111.f_F9;
}

int func_542(int iParam0)//Position - 0x12347
{
	if (iParam0 != func_63() && func_543(iParam0))
	{
		return Global_18402B[iParam0 /*770*/].f_111.f_F9.f_3;
	}
	return 0;
}

int func_543(int iParam0)//Position - 0x12378
{
	if (iParam0 != func_63())
	{
		return Global_18402B[iParam0 /*770*/].f_111.f_F9 != 0;
	}
	return 0;
}

void func_544(int iParam0, var uParam1, int iParam2, var uParam3)//Position - 0x1239D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	bVar17 = func_237(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_435())
		{
			iVar15 = unk_0xB5CEFD608600A09F();
		}
		else
		{
			iVar15 = func_452();
		}
		if (iVar15 != -1)
		{
			iVar16 = func_434(iVar15);
			iVar0 = (func_565(iVar15, iVar16) + uParam1->f_8);
			if (uParam1->f_A == uParam1->f_B)
			{
				iVar1 = iVar0;
			}
			else
			{
				fVar10 = SYSTEM::TO_FLOAT(uParam1->f_A);
				fVar11 = SYSTEM::TO_FLOAT(uParam1->f_B);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = SYSTEM::CEIL(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_561(iVar15, iVar16, iVar1);
			if (uParam1->f_E == 0)
			{
				iVar2 = SYSTEM::CEIL((IntToFloat(iVar2) * Global_40001.f_4FB5));
			}
			else
			{
				iVar2 = SYSTEM::CEIL((IntToFloat(iVar2) * Global_40001.f_4FB4));
			}
			*iParam2 = (*iParam2 + iVar2);
			if (iVar15 == unk_0xB5CEFD608600A09F())
			{
				func_558(iVar16, iVar2);
				if (func_554(iVar16) >= Global_40001.f_4DF1 || iVar2 >= Global_40001.f_4DF1)
				{
					func_545(5);
				}
				iVar6 = func_523(&uVar5);
				iVar7 = SYSTEM::ROUND(Global_40001.f_4FB7);
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_40001.f_4FB6));
				iVar9 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + iVar9);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_506(108);
					}
					else
					{
						func_506(110);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar17)
					{
						iVar18 = 0;
						while (iVar18 < unk_0x81C86888AEA2F49B())
						{
							iVar19 = iVar18;
							if (unk_0x05086B70D2CFEA6F(iVar19))
							{
								iVar20 = unk_0x4ED43B67B3F05E0F(iVar19);
								if (func_522(iVar20))
								{
									func_514(iVar20, 1, -1905128202);
								}
							}
							iVar18++;
						}
					}
				}
				Global_267214.f_1312.f_172 = *iParam2;
			}
			else if (bVar17)
			{
				fVar14 = Global_40001.f_4FB8;
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_40001.f_4FB9;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1992EB = *iParam2;
					func_506(112);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
	else if (iParam0 == 227)
	{
	}
}

void func_545(int iParam0)//Position - 0x125D8
{
	switch (iParam0)
	{
		case 0:
			if (Global_40001.f_4DE5)
			{
				if (func_547(Global_40001.f_4DE6))
				{
					func_546("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0, 1);
				}
			}
			break;
		
		case 1:
			if (Global_40001.f_4DE7)
			{
				if (func_547(Global_40001.f_4DE8))
				{
					func_546("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0, 1);
				}
			}
			break;
		
		case 2:
			if (Global_40001.f_4DE9)
			{
				if (func_547(Global_40001.f_4DEA))
				{
					func_546("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0, 1);
				}
			}
			break;
		
		case 3:
			if (Global_40001.f_4DEB)
			{
				if (func_547(Global_40001.f_4DEC))
				{
					func_546("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0, 1);
				}
			}
			break;
		
		case 4:
			if (Global_40001.f_4DED)
			{
				if (func_547(Global_40001.f_4DEE))
				{
					func_546("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0, 1);
				}
			}
			break;
		
		case 5:
			if (Global_40001.f_4DEF)
			{
				if (func_547(Global_40001.f_4DF0))
				{
					func_527("CLOTHAWDSTRAP3", Global_40001.f_4DF1, 1);
				}
			}
			break;
		
		case 6:
			if (Global_40001.f_4DF2)
			{
				if (func_547(Global_40001.f_4DF3))
				{
					func_527("CLOTHAWDSTRAP5", Global_40001.f_4E77, 1);
				}
			}
			break;
		
		case 7:
			if (Global_40001.f_4DF5)
			{
				if (func_547(Global_40001.f_4DF6))
				{
					func_546("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0, 1);
				}
			}
			break;
		
		case 8:
			if (Global_40001.f_4DF7)
			{
				if (func_547(Global_40001.f_4DF8))
				{
					func_546("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0, 1);
				}
			}
			break;
		
		case 9:
			if (Global_40001.f_4DF9)
			{
				if (func_547(Global_40001.f_4DFA))
				{
					func_546("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0, 1);
				}
			}
			break;
		
		case 10:
			if (Global_40001.f_4DFB)
			{
				if (func_547(Global_40001.f_4DFC))
				{
					func_546("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0, 1);
				}
			}
			break;
		
		case 11:
			if (Global_40001.f_4DFD)
			{
				if (func_547(Global_40001.f_4DFE))
				{
					func_546("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0, 1);
				}
			}
			break;
		
		case 12:
			if (Global_40001.f_4DFF)
			{
				if (func_547(Global_40001.f_4E00))
				{
					func_546("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0, 1);
				}
			}
			break;
		
		case 13:
			if (Global_40001.f_4E01)
			{
				if (func_547(Global_40001.f_4E02))
				{
					func_546("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0, 1);
				}
			}
			break;
		
		case 14:
			if (Global_40001.f_4E03)
			{
				if (func_547(Global_40001.f_4E04))
				{
					func_546("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0, 1);
				}
			}
			break;
	}
}

int func_546(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5)//Position - 0x128D5
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	unk_0x2E94302CFF011F2E(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x449F0674640D94C0(iParam2);
	}
	if (!iParam3 == 0)
	{
		unk_0x449F0674640D94C0(iParam3);
	}
	unk_0xC9C304D0AABE1335(sParam1);
	if (!bParam4)
	{
		iVar0 = unk_0x5E48BB10C6423FD5(0, 1);
	}
	else
	{
		Global_26210D = { func_65(unk_0xB5CEFD608600A09F()) };
		if (unk_0x24723877416AAAFC(&Global_2620C7, 35, &Global_26210D))
		{
			iVar1 = 0;
			if (unk_0x3362CDE8460ED38B(&(Global_2620C7.f_16), "Leader") && Global_2620C7.f_1E == 0)
			{
				iVar1 = 1;
			}
			if (Global_2620C7.f_15 > 0)
			{
				iVar2 = 0;
			}
			else
			{
				iVar2 = 1;
			}
			iVar0 = unk_0x0F92E4F5455F4880(iVar2, unk_0x5E69F635CCDEE0CF(&Global_2620C7, 35), &(Global_2620C7.f_11), Global_2620C7.f_1E, iVar1, 0, Global_2620C7, unk_0xD885B2234FC72D62(unk_0xB5CEFD608600A09F()), Global_140CDB, Global_140CDC, Global_140CDD);
		}
		else
		{
			iVar0 = unk_0x5E48BB10C6423FD5(0, 1);
		}
	}
	func_290(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_547(int iParam0)//Position - 0x129C9
{
	switch (iParam0)
	{
		case 558790811:
		case 1740171158:
		case -1191485992:
		case -1735342207:
			if (!func_551(15417, -1, -1))
			{
				func_550(15417, 1, -1, 1);
				return 1;
			}
			break;
		
		case 2108830041:
		case -120911428:
		case -1407302654:
		case -2039798986:
			if (!func_551(15418, -1, -1))
			{
				func_550(15418, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1898746692:
		case -1359197372:
		case -140996548:
		case -1850642937:
			if (!func_551(15425, -1, -1))
			{
				func_550(15425, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case -695364761:
		case 1263491585:
		case -1307315235:
		case 258618816:
			if (!func_551(15405, -1, -1))
			{
				func_550(15405, 1, -1, 1);
				return 1;
			}
			break;
		
		case 2024167318:
		case 1915398071:
		case -571324979:
		case 1374601256:
			if (!func_551(15393, -1, -1))
			{
				func_550(15393, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1720955761:
		case 1608057620:
		case 867332432:
		case -660288110:
			if (!func_551(15409, -1, -1))
			{
				func_550(15409, 1, -1, 1);
				return 1;
			}
			break;
		
		case 221872318:
		case -1802539904:
		case -1005186539:
		case -426022529:
			if (!func_551(15396, -1, -1))
			{
				func_550(15396, 1, -1, 1);
				return 1;
			}
			break;
		
		case -2098369500:
		case -1196968784:
		case -1314656979:
		case -1132522169:
			if (!func_551(15412, -1, -1))
			{
				func_550(15412, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1172743557:
		case -1502212019:
		case 1110085176:
		case -889671110:
			if (!func_137(209, -1))
			{
				func_548(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1883175477:
		case -584614481:
		case -1736983851:
		case -182614393:
			if (!func_551(15403, -1, -1))
			{
				func_550(15403, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1449333520:
		case -890709710:
		case -1496983695:
		case 48701978:
			if (!func_137(209, -1))
			{
				func_548(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -869990766:
		case -581140963:
		case 1827333048:
		case -646852824:
			if (!func_551(15389, -1, -1))
			{
				func_550(15389, 1, -1, 1);
				return 1;
			}
			break;
		
		case -542628448:
		case -870458464:
		case 420690954:
		case -408392811:
			if (!func_137(209, -1))
			{
				func_548(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 787769067:
		case 1132791298:
		case 1330653315:
		case 1717168382:
			if (!func_551(15398, -1, -1))
			{
				func_550(15398, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case -1361097493:
		case -73647644:
		case -1036580403:
		case -1765816422:
		case -1991379993:
		case -1731611121:
			if (!func_551(15400, -1, -1))
			{
				func_550(15400, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1167465472:
		case -313418417:
		case -203035350:
		case -1533320367:
		case 2065127290:
		case -390081030:
			if (!func_137(209, -1))
			{
				func_548(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -2105609173:
		case -698486936:
		case 917598912:
		case 939297301:
		case -56403312:
		case -1368923829:
			if (!func_551(15408, -1, -1))
			{
				func_550(15408, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1864920868:
		case -1072905530:
		case 682284723:
		case 1186965403:
		case -292700571:
		case -2068738593:
			if (!func_137(209, -1))
			{
				func_548(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1729183056:
		case 2114404000:
		case 481083063:
		case 1575507436:
		case -648899601:
		case -612123774:
			if (!func_551(15411, -1, -1))
			{
				func_550(15411, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1967315379:
		case 1750602562:
		case 114660105:
		case 1783131820:
		case -889194678:
		case 801334272:
			if (!func_551(15397, -1, -1))
			{
				func_550(15397, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1192623422:
		case 1330733365:
		case 1897981854:
		case 2059866009:
		case 867092646:
		case -146705667:
			if (!func_551(15413, -1, -1))
			{
				func_550(15413, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1444780905:
		case 1272666697:
		case 1601455173:
		case -1997689882:
		case 627387411:
		case -847831191:
			if (!func_551(15391, -1, -1))
			{
				func_550(15391, 1, -1, 1);
				return 1;
			}
			break;
		
		case 444212231:
		case -1563654102:
		case 1932815241:
		case -1617209023:
		case 308545041:
		case 1682427144:
			if (!func_551(15388, -1, -1))
			{
				func_550(15388, 1, -1, 1);
				return 1;
			}
			break;
		
		case 704955164:
		case -720081735:
		case 1626031863:
		case -1391954917:
		case 35480964:
		case 2029975158:
			if (!func_137(209, -1))
			{
				func_548(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1124704392:
		case -850093035:
		case 926585800:
		case -1832969872:
		case 1539395388:
		case 1377465778:
			if (!func_551(15401, -1, -1))
			{
				func_550(15401, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case 1029334921:
		case -322091380:
		case -1604737223:
		case -836382797:
			if (!func_551(15394, -1, -1))
			{
				func_550(15394, 1, -1, 1);
				return 1;
			}
			break;
		
		case -534855486:
		case -1168575065:
		case -1367129204:
		case -1006027910:
			if (!func_137(209, -1))
			{
				func_548(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -516333262:
		case 756873456:
		case 87453937:
		case -1438775324:
			if (!func_551(15406, -1, -1))
			{
				func_550(15406, 1, -1, 1);
				return 1;
			}
			break;
		
		case 485135095:
		case -730037708:
		case -1686659723:
		case -1094274807:
			if (!func_551(15395, -1, -1))
			{
				func_550(15395, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1713551997:
		case -970458486:
		case 1992217604:
		case -1348726092:
			if (!func_137(209, -1))
			{
				func_548(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1490658501:
		case 975601953:
		case -1934557208:
		case 1786218600:
			if (!func_551(15410, -1, -1))
			{
				func_550(15410, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1735635238:
		case 1614208560:
		case -1034032319:
		case -1858021894:
			if (!func_551(15407, -1, -1))
			{
				func_550(15407, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1931303956:
		case -726032561:
		case 1747334867:
		case 1237632771:
			if (!func_137(209, -1))
			{
				func_548(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1931617488:
		case -1824987162:
		case 236389050:
		case 1987485798:
			if (!func_137(209, -1))
			{
				func_548(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1726332301:
		case 417579524:
		case 591736086:
		case 908992470:
			if (!func_551(15414, -1, -1))
			{
				func_550(15414, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1382922530:
		case 734151492:
		case -357636850:
		case -1021993708:
			if (!func_551(15415, -1, -1))
			{
				func_550(15415, 1, -1, 1);
				return 1;
			}
			break;
		
		case 452778672:
		case -1766862320:
		case 479676642:
		case -1654828636:
			if (!func_551(15399, -1, -1))
			{
				func_550(15399, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1776790350:
		case 579562906:
		case 242920617:
		case -1365707749:
			if (!func_551(15404, -1, -1))
			{
				func_550(15404, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1988057295:
		case -619754931:
		case -1219723702:
		case -388208479:
			if (!func_137(209, -1))
			{
				func_548(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 816707921:
		case 1424441799:
		case -1576971340:
		case 2087194554:
			if (!func_551(15392, -1, -1))
			{
				func_550(15392, 1, -1, 1);
				return 1;
			}
			break;
		
		case 744446190:
		case -1405036369:
		case -622901905:
		case 981732339:
			if (!func_551(15390, -1, -1))
			{
				func_550(15390, 1, -1, 1);
				return 1;
			}
			break;
		
		case 917772807:
		case 1929056908:
		case -981132613:
		case 1271443068:
			if (!func_551(15402, -1, -1))
			{
				func_550(15402, 1, -1, 1);
				return 1;
			}
			break;
		
		case -292922355:
		case -34538790:
		case -1908986844:
		case -1785118184:
			if (!func_551(15416, -1, -1))
			{
				func_550(15416, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1495432685:
		case 1898518287:
		case 2029126042:
		case -1521032813:
			if (!func_137(209, -1))
			{
				func_548(209, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case -2123485438:
		case 1457900554:
		case -14316613:
		case 619771057:
			if (!func_551(15426, -1, -1))
			{
				func_550(15426, 1, -1, 1);
				return 1;
			}
			break;
		
		case -815706791:
		case -1066127505:
		case 1281631799:
		case -1519028808:
			if (!func_551(15422, -1, -1))
			{
				func_550(15422, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1318802347:
		case -1366750043:
		case 447234752:
		case 1996626130:
			if (!func_551(15423, -1, -1))
			{
				func_550(15423, 1, -1, 1);
				return 1;
			}
			break;
		
		case 306110040:
		case 1944822196:
		case 278933172:
		case -1981759857:
			if (!func_551(15421, -1, -1))
			{
				func_550(15421, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1828101251:
		case -1639289459:
		case -562607521:
		case -879279621:
			if (!func_551(15427, -1, -1))
			{
				func_550(15427, 1, -1, 1);
				return 1;
			}
			break;
		
		case -919314748:
		case 1282565442:
		case 755492739:
		case 1276101346:
			if (!func_551(15419, -1, -1))
			{
				func_550(15419, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1971111649:
		case -884280700:
		case -85982412:
		case 1573086793:
			if (!func_551(15420, -1, -1))
			{
				func_550(15420, 1, -1, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_548(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1353E
{
	int iVar0;
	
	if (func_549())
	{
		iVar0 = Global_2705A2[iParam0 /*3*/][func_138(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x7DB90DFB4AE71E86(iVar0, iParam1, iParam3);
		}
	}
}

int func_549()//Position - 0x13570
{
	return 1;
	return 0;
}

int func_550(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x1357D
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
		iParam2 = func_19();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0x761270FB5119E371((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x87C0AFE55188B978((iParam0 - 0)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar2, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0x761270FB5119E371((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x87C0AFE55188B978((iParam0 - 192)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar3, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0x761270FB5119E371((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x87C0AFE55188B978((iParam0 - 513)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar4, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0x761270FB5119E371((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x87C0AFE55188B978((iParam0 - 705)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar5, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0xC4006144B74F1FE6((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x87C0AFE55188B978((iParam0 - 3111)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar6, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0xC4006144B74F1FE6((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x87C0AFE55188B978((iParam0 - 2919)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar7, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x64CE28C63005F094((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x87C0AFE55188B978((iParam0 - 4207)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar8, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x64CE28C63005F094((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x87C0AFE55188B978((iParam0 - 4335)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar9, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x64CE28C63005F094((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x87C0AFE55188B978((iParam0 - 6029)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar10, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x64CE28C63005F094((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x87C0AFE55188B978((iParam0 - 7385)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar11, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x64CE28C63005F094((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x87C0AFE55188B978((iParam0 - 7321)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar12, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0x64CE28C63005F094((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x87C0AFE55188B978((iParam0 - 9361)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar13, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0x64CE28C63005F094((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x87C0AFE55188B978((iParam0 - 15369)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar14, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0x64CE28C63005F094((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x87C0AFE55188B978((iParam0 - 15562)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar15, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0x64CE28C63005F094((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x87C0AFE55188B978((iParam0 - 15946)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar16, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0x64CE28C63005F094((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x87C0AFE55188B978((iParam0 - 18098)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar17, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = unk_0x64CE28C63005F094((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x87C0AFE55188B978((iParam0 - 22066)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar18, bParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_551(int iParam0, int iParam1, int iParam2)//Position - 0x13A97
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	iVar1 = func_553(iParam0, iParam1);
	uVar2 = func_552(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDAB376DC6F83D68C(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_552(int iParam0)//Position - 0x13AD4
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

int func_553(int iParam0, int iParam1)//Position - 0x13DC0
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_19();
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

int func_554(int iParam0)//Position - 0x14090
{
	int iVar0;
	
	iVar0 = func_556(iParam0);
	return func_423(func_555(iVar0), -1, 0);
}

int func_555(int iParam0)//Position - 0x140AC
{
	switch (iParam0)
	{
		case 0:
			return 3947;
		
		case 1:
			return 3948;
		
		case 2:
			return 3949;
		
		case 3:
			return 3950;
		
		case 4:
			return 3951;
		
		case 5:
			return 5452;
		
		default:
	}
	return 3947;
}

int func_556(int iParam0)//Position - 0x14106
{
	int iVar0;
	
	if (func_557(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_111.f_A8[iVar0 /*12*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_557(int iParam0)//Position - 0x14148
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_558(int iParam0, int iParam1)//Position - 0x14167
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_556(iParam0);
	iVar1 = func_555(iVar0);
	iVar2 = (func_423(iVar1, -1, 0) + iParam1);
	func_421(iVar1, iVar2, -1, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_536(9357, -1, -1) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_111.f_A8[iVar0 /*12*/] != 0)
			{
				iVar1 = func_555(iVar0);
				iVar3 = (iVar3 + func_423(iVar1, -1, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_560(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_559(9357, iVar5, -1, 1);
	}
}

var func_559(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1421C
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_19();
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

int func_560(int iParam0)//Position - 0x14718
{
	switch (iParam0)
	{
		case 1:
			return 100000;
			break;
		
		case 2:
			return 300000;
			break;
		
		case 3:
			return 500000;
			break;
	}
	return 0;
}

int func_561(int iParam0, int iParam1, int iParam2)//Position - 0x14758
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_445(iParam1);
	if (func_557(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_40001.f_3FCF;
				if (func_562(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_3FD4);
				}
				if (func_562(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_3FD9);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_40001.f_3FCE;
				if (func_562(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_3FD3);
				}
				if (func_562(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_3FD8);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_40001.f_3FCD;
				if (func_562(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_3FD2);
				}
				if (func_562(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_3FD7);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_40001.f_3FCB;
				if (func_562(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_3FD0);
				}
				if (func_562(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_3FD5);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_40001.f_3FCC;
				if (func_562(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_3FD1);
				}
				if (func_562(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_3FD6);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_40001.f_4FCE;
				if (func_562(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_4FD0);
				}
				if (func_562(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_4FCF);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_562(int iParam0, int iParam1, int iParam2)//Position - 0x14930
{
	int iVar0;
	
	if (func_564(iParam0, iParam1))
	{
		iVar0 = func_563(iParam0, iParam1);
		return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_A8[iVar0 /*12*/].f_5, iParam2);
	}
	return 0;
}

int func_563(int iParam0, int iParam1)//Position - 0x1496B
{
	int iVar0;
	
	if (func_557(iParam1) && iParam0 != func_63())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_18402B[iParam0 /*770*/].f_111.f_A8[iVar0 /*12*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_564(int iParam0, int iParam1)//Position - 0x149B7
{
	int iVar0;
	
	if (func_557(iParam1) && iParam0 != func_63())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_18402B[iParam0 /*770*/].f_111.f_A8[iVar0 /*12*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_565(int iParam0, int iParam1)//Position - 0x14A02
{
	int iVar0;
	
	if (iParam0 == func_63())
	{
		return 0;
	}
	if (func_557(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_18402B[iParam0 /*770*/].f_111.f_A8[iVar0 /*12*/] == iParam1)
			{
				return Global_18402B[iParam0 /*770*/].f_111.f_A8[iVar0 /*12*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_566(int iParam0, var uParam1, int iParam2, var uParam3)//Position - 0x14A61
{
	struct<2> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	var uVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<2> Var14;
	float fVar15;
	float fVar16;
	float fVar17;
	int iVar18;
	float fVar19;
	int iVar20;
	float fVar21;
	int iVar22;
	int iVar23;
	
	if (iParam0 == 192)
	{
	}
	else if (iParam0 == 190)
	{
		if (uParam1->f_A > 0)
		{
			if (func_448())
			{
				Var0 = { func_447() };
				if (uParam1->f_A == uParam1->f_B)
				{
					*uParam3 = (uParam1->f_F + uParam1->f_8);
				}
				else
				{
					fVar1 = SYSTEM::TO_FLOAT(uParam1->f_A);
					fVar2 = SYSTEM::TO_FLOAT(uParam1->f_B);
					fVar3 = ((fVar1 / fVar2) * 100f);
					iVar4 = (uParam1->f_F + uParam1->f_8);
					fVar5 = ((IntToFloat(iVar4) / 100f) * fVar3);
					*uParam3 = SYSTEM::CEIL(fVar5);
				}
				iVar6 = func_561(unk_0xB5CEFD608600A09F(), Var0, *uParam3);
				if (Var0.f_1 == 1)
				{
					fVar7 = (SYSTEM::TO_FLOAT(iVar6) * Global_40001.f_462D);
					iVar6 = SYSTEM::ROUND(fVar7);
				}
				else
				{
					fVar8 = (SYSTEM::TO_FLOAT(iVar6) * Global_40001.f_462C);
					iVar6 = SYSTEM::ROUND(fVar8);
				}
				*iParam2 = (*iParam2 + iVar6);
				iVar10 = func_523(&uVar9);
				iVar11 = SYSTEM::ROUND(Global_40001.f_4623);
				if (iVar10 > iVar11)
				{
					iVar10 = iVar11;
				}
				iVar12 = SYSTEM::CEIL((IntToFloat(iVar10) * Global_40001.f_4622));
				iVar13 = ((*iParam2 / 100) * iVar12);
				*iParam2 = (*iParam2 + iVar13);
				if (uParam1->f_6)
				{
					*iParam2 = (*iParam2 + *uParam1);
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_C == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
					else if (uParam1->f_C == 9)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
				if (iVar10 > 0)
				{
					func_506(86);
				}
				Global_267214.f_1312.f_172 = *iParam2;
			}
			else if (func_237(0))
			{
				Var14 = { func_567(func_452()) };
				if (uParam1->f_A == uParam1->f_B)
				{
					*uParam3 = (uParam1->f_F + uParam1->f_8);
				}
				else
				{
					fVar15 = SYSTEM::TO_FLOAT(uParam1->f_A);
					fVar16 = SYSTEM::TO_FLOAT(uParam1->f_B);
					fVar17 = ((fVar15 / fVar16) * 100f);
					iVar18 = (uParam1->f_F + uParam1->f_8);
					fVar19 = ((IntToFloat(iVar18) / 100f) * fVar17);
					*uParam3 = SYSTEM::CEIL(fVar19);
				}
				iVar20 = func_561(func_452(), Var14, *uParam3);
				if (Var14.f_1 == 1)
				{
					iVar20 = SYSTEM::CEIL((IntToFloat(iVar20) * Global_40001.f_462D));
				}
				else if (Var14.f_1 == 0)
				{
					iVar20 = SYSTEM::CEIL((IntToFloat(iVar20) * Global_40001.f_462C));
				}
				*iParam2 = (*iParam2 + iVar20);
				fVar21 = Global_40001.f_4654;
				iVar22 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar21));
				*iParam2 = iVar22;
				iVar23 = Global_40001.f_4655;
				if (*iParam2 > iVar23)
				{
					*iParam2 = iVar23;
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_C == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
			}
		}
	}
}

struct<2> func_567(int iParam0)//Position - 0x14D04
{
	return Global_18C80F[iParam0 /*558*/].f_B.f_BC;
}

void func_568(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)//Position - 0x14D1B
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (iParam0 == 167)
	{
		if (func_119(unk_0xB5CEFD608600A09F()))
		{
			if (bParam1)
			{
				func_583();
			}
			func_582();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_119(unk_0xB5CEFD608600A09F()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_574(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_B1));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_573(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_523(&uVar2);
					iVar4 = Global_40001.f_3C9C;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = SYSTEM::CEIL((IntToFloat(iVar3) * Global_40001.f_3985));
					iVar6 = ((*iParam3 / 100) * iVar5);
					*iParam3 = (*iParam3 + iVar6);
					if (uParam2->f_6)
					{
						*iParam3 = (*iParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_506(44);
					}
				}
				func_571(*iParam3);
				func_570();
				Global_267214.f_1312.f_172 = *iParam3;
				iVar7 = 0;
				while (iVar7 < unk_0x81C86888AEA2F49B())
				{
					iVar8 = iVar7;
					if (unk_0x05086B70D2CFEA6F(iVar8))
					{
						iVar9 = unk_0x4ED43B67B3F05E0F(iVar8);
						if (func_522(iVar9))
						{
							func_514(iVar9, 1, -1292453789);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_119(unk_0xB5CEFD608600A09F()))
		{
			func_569();
		}
	}
}

void func_569()//Position - 0x14E87
{
	int iVar0;
	
	iVar0 = Global_270D87[func_19()];
	iVar0++;
	func_420(3663, iVar0, -1, 1);
}

void func_570()//Position - 0x14EAC
{
	int iVar0;
	
	iVar0 = Global_270D8D[func_19()];
	iVar0++;
	func_420(3662, iVar0, -1, 1);
}

void func_571(int iParam0)//Position - 0x14ED1
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_270D90[func_19()];
	iVar0 = (iVar0 + iParam0);
	func_420(3664, iVar0, -1, 1);
	if (func_536(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_572(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_559(7666, iVar2, -1, 1);
	}
}

int func_572(int iParam0)//Position - 0x14F33
{
	switch (iParam0)
	{
		case 1:
			return Global_40001.f_3D21;
			break;
		
		case 2:
			return Global_40001.f_3D22;
			break;
		
		case 3:
			return Global_40001.f_3D23;
			break;
		
		case 4:
			return Global_40001.f_3D24;
			break;
		
		case 5:
			return Global_40001.f_3D25;
			break;
		
		case 6:
			return Global_40001.f_3D26;
			break;
		
		case 7:
			return Global_40001.f_3D27;
			break;
		
		case 8:
			return Global_40001.f_3D28;
			break;
		
		case 9:
			return Global_40001.f_3D29;
			break;
		
		case 10:
			return Global_40001.f_3D2A;
			break;
		
		case 11:
			return Global_40001.f_3D2B;
			break;
		
		case 12:
			return Global_40001.f_3D2C;
			break;
		
		case 13:
			return Global_40001.f_3D2D;
			break;
		
		case 14:
			return Global_40001.f_3D2E;
			break;
		
		case 15:
			return Global_40001.f_3D2F;
			break;
		
		case 16:
			return Global_40001.f_3D30;
			break;
		
		case 17:
			return Global_40001.f_3D31;
			break;
		
		case 18:
			return Global_40001.f_3D32;
			break;
		
		case 19:
			return Global_40001.f_3D33;
			break;
		
		case 20:
			return Global_40001.f_3D34;
			break;
		
		case 21:
			return Global_40001.f_3D35;
			break;
		
		case 22:
			return Global_40001.f_3D36;
			break;
		
		case 23:
			return Global_40001.f_3D37;
			break;
		
		case 24:
			return Global_40001.f_3D38;
			break;
	}
	return 0;
}

var func_573(int iParam0)//Position - 0x1510B
{
	if (iParam0 >= Global_40001.f_396F)
	{
		return Global_40001.f_3984;
	}
	else if (iParam0 >= Global_40001.f_396E)
	{
		return Global_40001.f_3983;
	}
	else if (iParam0 >= Global_40001.f_396D)
	{
		return Global_40001.f_3982;
	}
	else if (iParam0 >= Global_40001.f_396C)
	{
		return Global_40001.f_3981;
	}
	else if (iParam0 >= Global_40001.f_396B)
	{
		return Global_40001.f_3980;
	}
	else if (iParam0 >= Global_40001.f_396A)
	{
		return Global_40001.f_397F;
	}
	else if (iParam0 >= Global_40001.f_3969)
	{
		return Global_40001.f_397E;
	}
	else if (iParam0 >= Global_40001.f_3968)
	{
		return Global_40001.f_397D;
	}
	else if (iParam0 >= Global_40001.f_3967)
	{
		return Global_40001.f_397C;
	}
	else if (iParam0 >= Global_40001.f_3966)
	{
		return Global_40001.f_397B;
	}
	else if (iParam0 >= Global_40001.f_3965)
	{
		return Global_40001.f_397A;
	}
	else if (iParam0 >= Global_40001.f_3964)
	{
		return Global_40001.f_3979;
	}
	else if (iParam0 >= Global_40001.f_3963)
	{
		return Global_40001.f_3978;
	}
	else if (iParam0 >= Global_40001.f_3962)
	{
		return Global_40001.f_3977;
	}
	else if (iParam0 >= Global_40001.f_3961)
	{
		return Global_40001.f_3976;
	}
	else if (iParam0 >= Global_40001.f_3960)
	{
		return Global_40001.f_3975;
	}
	else if (iParam0 >= Global_40001.f_395F)
	{
		return Global_40001.f_3974;
	}
	else if (iParam0 >= Global_40001.f_395E)
	{
		return Global_40001.f_3973;
	}
	else if (iParam0 >= Global_40001.f_395D)
	{
		return Global_40001.f_3972;
	}
	else if (iParam0 >= Global_40001.f_395C)
	{
		return Global_40001.f_3971;
	}
	return Global_40001.f_3970;
}

int func_574(int iParam0)//Position - 0x1530B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_581(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_580(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_579(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_575(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_575(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_579(unk_0x491B2241281A03B7(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_575(int iParam0)//Position - 0x15387
{
	int iVar0;
	
	if (func_578(iParam0))
	{
		iVar0 = func_576(func_577(iParam0));
		return func_423(iVar0, -1, 0);
	}
	return 0;
}

int func_576(int iParam0)//Position - 0x153B0
{
	if (iParam0 == 0)
	{
		return 3642;
	}
	else if (iParam0 == 1)
	{
		return 3643;
	}
	else if (iParam0 == 2)
	{
		return 3644;
	}
	else if (iParam0 == 3)
	{
		return 3645;
	}
	else if (iParam0 == 4)
	{
		return 3646;
	}
	return 3642;
}

int func_577(int iParam0)//Position - 0x15403
{
	int iVar0;
	
	if (func_578(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_111.f_5C[iVar0 /*3*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_578(int iParam0)//Position - 0x15445
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_579(int iParam0)//Position - 0x15464
{
	if (iParam0 == 1)
	{
		return Global_40001.f_3A37;
	}
	else if (iParam0 == 2)
	{
		return Global_40001.f_3A35;
	}
	else if (iParam0 == 3)
	{
		return Global_40001.f_3A39;
	}
	else if (iParam0 == 4)
	{
		return Global_40001.f_3A33;
	}
	else if (iParam0 == 5)
	{
		return Global_40001.f_3A31;
	}
	else if (iParam0 == 6)
	{
		return Global_40001.f_3A3B;
	}
	return 0;
}

int func_580(int iParam0, int iParam1)//Position - 0x154DC
{
	int iVar0;
	
	if (func_578(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_196F35[iVar0] == iParam1 && Global_196F3C[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_581(int iParam0)//Position - 0x15522
{
	int iVar0;
	
	if (func_578(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_111.f_5C[iVar0 /*3*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_582()//Position - 0x15563
{
	int iVar0;
	
	iVar0 = Global_270D84[func_19()];
	iVar0++;
	Global_270D84[func_19()] = iVar0;
	func_420(3661, iVar0, -1, 1);
}

void func_583()//Position - 0x15594
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_270D81[func_19()];
	iVar1 = Global_270D8A[func_19()];
	iVar0++;
	iVar1++;
	Global_270D81[func_19()] = iVar0;
	Global_270D8A[func_19()] = iVar1;
	Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_111.f_72 = iVar1;
	func_420(3659, iVar0, -1, 1);
	func_420(3660, iVar1, -1, 1);
}

void func_584()//Position - 0x15600
{
	if (func_435())
	{
		Global_255D53.f_BFA.f_86 = 0;
		Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_198 = Global_255D53.f_BFA.f_86;
	}
}

void func_585()//Position - 0x15632
{
	if (func_435())
	{
		if (Global_255D53.f_BFA.f_86 < 10)
		{
			Global_255D53.f_BFA.f_86++;
			Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_198 = Global_255D53.f_BFA.f_86;
		}
	}
}

void func_586()//Position - 0x1567C
{
	if (func_435())
	{
		if (Global_255D53.f_BFA.f_86 > 0)
		{
			Global_255D53.f_BFA.f_86 = (Global_255D53.f_BFA.f_86 - 1);
			Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_198 = Global_255D53.f_BFA.f_86;
		}
	}
}

int func_587(int iParam0)//Position - 0x156C5
{
	return Global_18C80F[iParam0 /*558*/].f_B.f_1C;
}

int func_588(int iParam0)//Position - 0x156DA
{
	switch (iParam0)
	{
		case 167:
		case 168:
		case 178:
		case 188:
			return 1;
		
		case 225:
		case 226:
		case 229:
		case 230:
		case 233:
		case 237:
			if (func_450(1) && !func_237(1))
			{
				if (func_589(func_452()))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_589(int iParam0)//Position - 0x1574F
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_13, 26);
}

int func_590(int iParam0)//Position - 0x15775
{
	switch (iParam0)
	{
		case 142:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_2E77) * Global_40001.f_2E7C));
		
		case 157:
			return 0;
		
		case 159:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_2E45) * Global_40001.f_2E4A));
		
		case 151:
			return 0;
		
		case 148:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_2E60) * Global_40001.f_2E64));
		
		case 164:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_2E6D) * Global_40001.f_2E71));
		
		case 152:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_2E83) * Global_40001.f_2E88));
		
		case 153:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_2F25) * Global_40001.f_2F26));
		
		case 154:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_2F2B) * Global_40001.f_2F2C));
		
		case 155:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_2F29) * Global_40001.f_2F2A));
		
		case 160:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_2F23) * Global_40001.f_2F24));
		
		case 162:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_2F27) * Global_40001.f_2F28));
		
		case 163:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_2F21) * Global_40001.f_2F22));
		
		case 170:
			return 0;
		
		case 171:
			return Global_40001.f_385A;
		
		case 172:
			return Global_40001.f_386A;
		
		case 173:
			return Global_40001.f_3831;
		
		case 166:
			return 0;
		
		case 179:
			return Global_40001.f_44FB;
		
		case 180:
			return Global_40001.f_447F;
		
		case 182:
			return 0;
		
		case 183:
			return Global_40001.f_4487;
		
		case 185:
			return Global_40001.f_4490;
		
		case 186:
			return 0;
		
		case 189:
			return Global_40001.f_4553;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_40001.f_4564;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_40001.f_44CC;
		
		case 198:
			return 0;
		
		case 199:
			return Global_40001.f_4583;
		
		case 200:
			return 0;
		
		case 201:
			return Global_40001.f_4509;
		
		case 205:
			return Global_40001.f_4576;
		
		case 207:
			return 0;
		
		case 208:
			return Global_40001.f_44E8;
		
		case 209:
			return 0;
		
		case 210:
			return Global_40001.f_4571;
		
		case 211:
			return Global_40001.f_454D;
		
		case 214:
			return Global_40001.f_479F;
		
		case 215:
			return Global_40001.f_47A9;
		
		case 216:
			return Global_40001.f_47B3;
		
		case 217:
			return Global_40001.f_47BC;
		
		case 218:
			return Global_40001.f_47C5;
		
		case 219:
			return Global_40001.f_47D5;
		
		case 241:
			return Global_40001.f_5B80;
		
		case 242:
			return Global_40001.f_5B7C;
		
		case 248:
			return Global_40001.f_5B7F;
		
		case 244:
			return Global_40001.f_5B7D;
		
		case 239:
			return Global_40001.f_5B81;
		
		case 240:
			return Global_40001.f_5B82;
		
		default:
	}
	return 0;
}

int func_591(int iParam0, bool bParam1)//Position - 0x15B1A
{
	switch (iParam0)
	{
		case 142:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_2E78) * Global_40001.f_2E7D));
		
		case 157:
			return 0;
		
		case 159:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_2E46) * Global_40001.f_2E4B));
		
		case 151:
			return 0;
		
		case 148:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_2E61) * Global_40001.f_2E65));
		
		case 164:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_2E6E) * Global_40001.f_2E72));
		
		case 152:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_2E84) * Global_40001.f_2E89));
		
		case 153:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_2EA9) * Global_40001.f_2EAC));
		
		case 154:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_2ED7) * Global_40001.f_2EDA));
		
		case 155:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_2ECD) * Global_40001.f_2ED0));
		
		case 160:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_2EA0) * Global_40001.f_2EA3));
		
		case 162:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_2EB4) * Global_40001.f_2EB9));
		
		case 163:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_2E91) * Global_40001.f_2E94));
		
		case 170:
			return Global_40001.f_3820;
		
		case 171:
			return Global_40001.f_385B;
		
		case 172:
			return Global_40001.f_386B;
		
		case 173:
			return Global_40001.f_3832;
		
		case 166:
			return 0;
		
		case 167:
			return Global_40001.f_404F;
		
		case 168:
			return Global_40001.f_404E;
		
		case 179:
			return Global_40001.f_44FC;
		
		case 180:
			return Global_40001.f_4480;
		
		case 182:
			return 0;
		
		case 183:
			return Global_40001.f_4488;
		
		case 185:
			return Global_40001.f_4491;
		
		case 186:
			return 0;
		
		case 189:
			return Global_40001.f_4554;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_40001.f_4565;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_40001.f_44CD;
		
		case 198:
			return 0;
		
		case 199:
			return Global_40001.f_4584;
		
		case 200:
			return 0;
		
		case 201:
			return Global_40001.f_450A;
		
		case 205:
			return Global_40001.f_4577;
		
		case 207:
			return 0;
		
		case 208:
			return Global_40001.f_44E9;
		
		case 209:
			return 0;
		
		case 210:
			return Global_40001.f_4572;
		
		case 211:
			return Global_40001.f_454E;
		
		case 214:
			return Global_40001.f_47A0;
		
		case 215:
			return Global_40001.f_47AA;
		
		case 216:
			return Global_40001.f_47B4;
		
		case 217:
			return Global_40001.f_47BD;
		
		case 218:
			return Global_40001.f_47C6;
		
		case 219:
			return Global_40001.f_47D6;
		
		case 178:
			if (func_435())
			{
				return Global_40001.f_4725;
			}
			else if (bParam1)
			{
				return Global_40001.f_4726;
			}
			break;
		
		case 188:
			if (func_435())
			{
				return Global_40001.f_4779;
			}
			else if (bParam1)
			{
				return Global_40001.f_477A;
			}
			break;
		
		case 225:
			if (func_435() && !func_448())
			{
				if (func_589(unk_0xB5CEFD608600A09F()))
				{
					return Global_40001.f_4FC2;
				}
				else
				{
					return Global_40001.f_4FC3;
				}
			}
			else if (func_448())
			{
				return Global_40001.f_4FC4;
			}
			break;
		
		case 226:
			if (func_435() && !func_448())
			{
				if (func_589(unk_0xB5CEFD608600A09F()))
				{
					return Global_40001.f_4FAE;
				}
				else
				{
					return Global_40001.f_4FAF;
				}
			}
			else if (func_448())
			{
				return Global_40001.f_4FB0;
			}
			break;
		
		case 227:
			if (func_435() && !func_448())
			{
				if (func_589(unk_0xB5CEFD608600A09F()))
				{
					return Global_40001.f_4FBA;
				}
				else
				{
					return Global_40001.f_4FBB;
				}
			}
			else if (func_448())
			{
				return Global_40001.f_4FBC;
			}
			break;
		
		case 229:
			if (func_435() && !func_448())
			{
				if (func_589(unk_0xB5CEFD608600A09F()))
				{
					return Global_40001.f_5446;
				}
				else
				{
					return Global_40001.f_5447;
				}
			}
			else if (func_448())
			{
				return Global_40001.f_5448;
			}
			break;
		
		case 230:
			if (func_435() && !func_448())
			{
				if (func_589(unk_0xB5CEFD608600A09F()))
				{
					return Global_40001.f_54A6;
				}
				else
				{
					return Global_40001.f_54A7;
				}
			}
			else if (func_448())
			{
				return Global_40001.f_54A8;
			}
			break;
		
		case 233:
			if (func_435() && !func_448())
			{
				if (func_589(unk_0xB5CEFD608600A09F()))
				{
					return Global_40001.f_5681;
				}
				else
				{
					return Global_40001.f_5682;
				}
			}
			else if (func_448())
			{
				return Global_40001.f_5680;
			}
			break;
		
		case 241:
			return Global_40001.f_5B87;
		
		case 242:
			return Global_40001.f_5B83;
		
		case 244:
			return Global_40001.f_5B84;
		
		case 248:
			return Global_40001.f_5B86;
		
		case 239:
			return Global_40001.f_5B88;
		
		case 240:
			return Global_40001.f_5B89;
		
		case 237:
			if (func_435() && !func_448())
			{
				if (func_589(unk_0xB5CEFD608600A09F()))
				{
					return Global_40001.f_5AE9;
				}
				else
				{
					return Global_40001.f_5AEA;
				}
			}
			else if (func_448())
			{
				return Global_40001.f_5AEB;
			}
			break;
		
		case 238:
			if (func_435() && !func_448())
			{
				if (func_589(unk_0xB5CEFD608600A09F()))
				{
					return Global_40001.f_5B58;
				}
				else
				{
					return Global_40001.f_5B59;
				}
			}
			else if (func_448())
			{
				return Global_40001.f_5B5A;
			}
			break;
		
		case 249:
			if (func_435() && !func_448())
			{
				if (func_589(unk_0xB5CEFD608600A09F()))
				{
					return Global_40001.f_5B68;
				}
				else
				{
					return Global_40001.f_5B69;
				}
			}
			else if (func_448())
			{
				return Global_40001.f_5B6A;
			}
			break;
	}
	return 0;
}

void func_592(int iParam0, var uParam1, var uParam2)//Position - 0x1620D
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_593(iParam0))
	{
		if (!func_435())
		{
			*uParam1 = 1f;
			*uParam2 = Global_40001.f_2E0D;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	if (func_179(unk_0xB5CEFD608600A09F(), 1))
	{
		if (func_304(iParam0))
		{
			*uParam1 = (Global_40001.f_4468 / 100f);
			*uParam2 = (Global_40001.f_4468 / 100f);
		}
		else if (iParam0 == 242)
		{
			*uParam1 = Global_40001.f_5B8A;
			*uParam2 = Global_40001.f_5B8A;
		}
		else if (iParam0 == 244)
		{
			*uParam1 = Global_40001.f_5B8B;
			*uParam2 = Global_40001.f_5B8B;
		}
		else if (iParam0 == 248)
		{
			*uParam1 = Global_40001.f_5B8D;
			*uParam2 = Global_40001.f_5B8D;
		}
		else if (iParam0 == 241)
		{
			*uParam1 = Global_40001.f_5B8E;
			*uParam2 = Global_40001.f_5B8E;
		}
		else if (iParam0 == 239)
		{
			*uParam1 = Global_40001.f_5B8F;
			*uParam2 = Global_40001.f_5B8F;
		}
		else if (iParam0 == 240)
		{
			*uParam1 = Global_40001.f_5B90;
			*uParam2 = Global_40001.f_5B90;
		}
		else
		{
			*uParam1 = Global_40001.f_2E0A;
			*uParam2 = Global_40001.f_2E09;
		}
	}
	else if (func_304(iParam0))
	{
		*uParam1 = (Global_40001.f_4469 / 100f);
		*uParam2 = (Global_40001.f_4469 / 100f);
	}
	else if (iParam0 == 242)
	{
		*uParam1 = Global_40001.f_5B91;
		*uParam2 = Global_40001.f_5B91;
	}
	else if (iParam0 == 244)
	{
		*uParam1 = Global_40001.f_5B92;
		*uParam2 = Global_40001.f_5B92;
	}
	else if (iParam0 == 248)
	{
		*uParam1 = Global_40001.f_5B94;
		*uParam2 = Global_40001.f_5B94;
	}
	else if (iParam0 == 241)
	{
		*uParam1 = Global_40001.f_5B95;
		*uParam2 = Global_40001.f_5B95;
	}
	else if (iParam0 == 239)
	{
		*uParam1 = Global_40001.f_5B96;
		*uParam2 = Global_40001.f_5B96;
	}
	else if (iParam0 == 240)
	{
		*uParam1 = Global_40001.f_5B97;
		*uParam2 = Global_40001.f_5B97;
	}
	else
	{
		*uParam1 = Global_40001.f_2E0C;
		*uParam2 = Global_40001.f_2E0B;
	}
	iVar0 = func_240();
	if (iVar0 != func_63())
	{
		if (func_74(unk_0xB5CEFD608600A09F(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_593(int iParam0)//Position - 0x16470
{
	switch (iParam0)
	{
		case 160:
		case 162:
		case 153:
		case 154:
		case 155:
		case 163:
		case 171:
		case 172:
			return 1;
		
		default:
	}
	return 0;
}

int func_594()//Position - 0x164B4
{
	return (Local_105.f_73 * Global_40001.f_3841);
}

int func_595()//Position - 0x164C8
{
	return (Local_105.f_73 * Global_40001.f_3840);
}

void func_596(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)//Position - 0x164DC
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x7AF0088ABFA713B6())
	{
		return;
	}
	if (bParam9)
	{
		iVar0 = func_171(unk_0xB5CEFD608600A09F());
		Global_196A5F.f_4 = func_696();
		Global_196A5F.f_5 = func_695();
		if (func_125(unk_0xB5CEFD608600A09F()) || func_126(unk_0xB5CEFD608600A09F()))
		{
			Global_196A5F.f_6 = 1;
		}
		else
		{
			Global_196A5F.f_6 = 0;
		}
		Global_196A5F.f_1 = func_691(bParam9);
		Global_196A5F.f_8 = unk_0xB99C193A32DE341D();
		Global_196A5F.f_9 = func_690(bParam0);
		Global_196A5F.f_A = iParam1;
		Global_196A5F.f_11 = Global_196A5F.f_2;
		Global_196A5F.f_12 = Global_196A5F.f_2;
		Global_196A5F.f_13 = func_689();
		Global_196A5F.f_15 = (Global_196A5F.f_8 - Global_196A5F.f_7);
		if (func_179(unk_0xB5CEFD608600A09F(), 1))
		{
			Global_196A5F.f_17 = func_690(func_237(1));
		}
		Global_196A5F.f_18 = func_688(unk_0xB5CEFD608600A09F());
		Global_196A5F.f_1C = func_687(unk_0xB5CEFD608600A09F());
		if (Global_196A5F.f_18 > 2)
		{
			Global_196A5F.f_18 = 2;
		}
		func_685(iVar0);
	}
	else
	{
		iVar0 = func_101(unk_0xB5CEFD608600A09F());
	}
	if (func_304(iVar0))
	{
		Global_19695A.f_2 = func_696();
		Global_19695A.f_3 = func_695();
		Global_19695A.f_32 = iParam4;
		Global_19695A.f_33 = iParam5;
		Global_19695A.f_A = unk_0xB99C193A32DE341D();
		Global_19695A.f_14 = (Global_19695A.f_A - Global_19695A.f_9);
		Global_19695A.f_C = iParam1;
		Global_19695A.f_13 = func_679(iVar0, bParam0, func_684(bParam3));
		if (bParam0)
		{
			Global_19695A.f_B = 1;
		}
		else
		{
			Global_19695A.f_B = 0;
		}
		if ((func_120(unk_0xB5CEFD608600A09F()) || func_131(unk_0xB5CEFD608600A09F())) || func_139(unk_0xB5CEFD608600A09F()))
		{
			Global_19695A.f_8 = 1;
		}
		else
		{
			Global_19695A.f_8 = 0;
		}
		if (iParam2 != 0)
		{
			Global_19695A.f_2B = 0;
			Global_19695A.f_2D = func_678(func_452(), iParam2);
			Global_19695A.f_2F = iParam7;
			Global_19695A.f_2E = iParam6;
			Global_19695A.f_34 = func_677(func_452(), iParam2);
		}
		func_675(iVar0);
	}
	else if (func_309(iVar0))
	{
		Global_196990.f_2 = func_696();
		Global_196990.f_3 = func_695();
		Global_196990.f_A = unk_0xB99C193A32DE341D();
		Global_196990.f_13 = (Global_196990.f_A - Global_196990.f_9);
		Global_196990.f_C = iParam1;
		if (bParam0)
		{
			Global_196990.f_B = 1;
		}
		else
		{
			Global_196990.f_B = 0;
		}
		if ((func_120(unk_0xB5CEFD608600A09F()) || func_131(unk_0xB5CEFD608600A09F())) || func_139(unk_0xB5CEFD608600A09F()))
		{
			Global_196990.f_8 = 1;
		}
		else
		{
			Global_196990.f_8 = 0;
		}
		func_673(iVar0);
	}
	else if (func_381(iVar0))
	{
		Global_1969CF.f_2 = func_696();
		Global_1969CF.f_3 = func_695();
		Global_1969CF.f_9 = unk_0xB99C193A32DE341D();
		Global_1969CF.f_12 = (Global_1969CF.f_9 - Global_1969CF.f_8);
		Global_1969CF.f_B = iParam1;
		Global_1969CF.f_7 = func_689();
		Global_1969CF.f_2A = func_671(func_19(), 5);
		iVar1 = unk_0xB5CEFD608600A09F();
		iVar2 = func_434(iVar1);
		Global_1969CF.f_1C = iVar2;
		Global_1969CF.f_1D = func_690((func_670(iVar1) || func_669(iVar1)));
		Global_1969CF.f_1E = func_690(func_668(iVar1));
		Global_1969CF.f_20 = func_690(func_667(iVar1));
		Global_1969CF.f_21 = func_690(func_666(iVar1));
		Global_1969CF.f_22 = func_690(func_665(iVar1));
		Global_1969CF.f_23 = func_690(func_664(0, iVar1) == 1);
		Global_1969CF.f_24 = func_690(func_663(iVar1));
		Global_1969CF.f_25 = func_690(func_662(iVar1));
		Global_1969CF.f_26 = func_690(func_661(iVar1));
		Global_1969CF.f_27 = func_690(func_562(iVar1, iVar2, 0));
		Global_1969CF.f_28 = func_690(func_562(iVar1, iVar2, 2));
		Global_1969CF.f_29 = func_690(func_562(iVar1, iVar2, 1));
		if (func_660(iVar1))
		{
			Global_1969CF.f_1F = 2;
		}
		else if (func_659(iVar1))
		{
			Global_1969CF.f_1F = 1;
		}
		if (bParam0)
		{
			Global_1969CF.f_A = 1;
		}
		else
		{
			Global_1969CF.f_A = 0;
		}
		if ((func_120(unk_0xB5CEFD608600A09F()) || func_131(unk_0xB5CEFD608600A09F())) || func_139(unk_0xB5CEFD608600A09F()))
		{
			Global_1969CF.f_6 = 1;
		}
		else
		{
			Global_1969CF.f_6 = 0;
		}
		Global_1969CF.f_15 = -2;
		Global_1969CF.f_16 = -2;
		func_657(iVar0);
	}
	else if (func_379(iVar0))
	{
		Global_1969FB.f_2 = func_696();
		Global_1969FB.f_3 = func_695();
		if ((func_120(unk_0xB5CEFD608600A09F()) || func_131(unk_0xB5CEFD608600A09F())) || func_139(unk_0xB5CEFD608600A09F()))
		{
			Global_1969FB.f_6 = 1;
		}
		else
		{
			Global_1969FB.f_6 = 0;
		}
		Global_1969FB.f_9 = unk_0xB99C193A32DE341D();
		Global_1969FB.f_A = func_690(bParam0);
		Global_1969FB.f_B = iParam1;
		Global_1969FB.f_11 = func_656(func_240());
		Global_1969FB.f_12 = (Global_1969FB.f_9 - Global_1969FB.f_8);
		Global_1969FB.f_14 = iParam8;
		Global_1969FB.f_15 = -2;
		Global_1969FB.f_16 = -2;
		Global_1969FB.f_1B = func_655();
		Global_1969FB.f_1D = func_423(6103, -1, 0);
		Global_1969FB.f_1E = func_423(6099, -1, 0);
		Global_1969FB.f_1F = func_423(6100, -1, 0);
		Global_1969FB.f_20 = func_423(6102, -1, 0);
		Global_1969FB.f_21 = func_423(6101, -1, 0);
		Global_1969FB.f_22 = func_423(6104, -1, 0);
		Global_1969FB.f_24 = func_690(func_237(1));
		Global_1969FB.f_25 = func_653();
		func_638();
		func_636(iVar0);
	}
	else if (func_377(iVar0))
	{
		Global_196A31.f_2 = func_696();
		Global_196A31.f_3 = func_695();
		if ((func_120(unk_0xB5CEFD608600A09F()) || func_131(unk_0xB5CEFD608600A09F())) || func_139(unk_0xB5CEFD608600A09F()))
		{
			Global_196A31.f_6 = 1;
		}
		else
		{
			Global_196A31.f_6 = 0;
		}
		Global_196A31.f_9 = unk_0xB99C193A32DE341D();
		Global_196A31.f_A = func_690(bParam0);
		Global_196A31.f_B = iParam1;
		Global_196A31.f_12 = (Global_196A31.f_9 - Global_196A31.f_8);
		Global_196A31.f_14 = iParam8;
		Global_196A31.f_17 = Global_C0073;
		Global_196A31.f_24 = Global_C0073.f_1;
		Global_196A31.f_18 = func_423(6153, -1, 0);
		Global_196A31.f_19 = func_423(6158, -1, 0);
		Global_196A31.f_1A = func_423(6159, -1, 0);
		Global_196A31.f_1B = func_690((((func_635() || func_634()) || func_633()) || func_632(unk_0xB5CEFD608600A09F())));
		Global_196A31.f_1C = func_423(6160, -1, 0);
		Global_196A31.f_1D = func_690(func_631());
		Global_196A31.f_23 = -1;
		Global_196A31.f_26 = -1;
		Global_196A31.f_27 = Global_196A31.f_4;
		Global_196A31.f_28 = Global_196A31.f_5;
		Global_196A31.f_29 = func_696();
		Global_196A31.f_2A = func_690(func_237(1));
		Global_196A31.f_2C = Global_196A31.f_12;
		func_629(iVar0);
	}
	else if (func_411(iVar0))
	{
		if (Global_196AB6.f_2 == -1)
		{
			Global_196AB6.f_2 = func_696();
		}
		if (Global_196AB6.f_3 == -1)
		{
			Global_196AB6.f_3 = func_695();
		}
		if ((func_120(unk_0xB5CEFD608600A09F()) || func_131(unk_0xB5CEFD608600A09F())) || func_139(unk_0xB5CEFD608600A09F()))
		{
			Global_196AB6.f_6 = 1;
		}
		else
		{
			Global_196AB6.f_6 = 0;
		}
		Global_196AB6.f_1 = func_691(0);
		Global_196AB6.f_7 = func_689();
		Global_196AB6.f_9 = unk_0xB99C193A32DE341D();
		Global_196AB6.f_A = func_690(bParam0);
		Global_196AB6.f_B = iParam1;
		if (func_452() != -1)
		{
			Global_196AB6.f_11 = func_628(func_452());
		}
		Global_196AB6.f_12 = (Global_196AB6.f_9 - Global_196AB6.f_8);
		Global_196AB6.f_13 = Global_267214.f_181A;
		Global_196AB6.f_1C = func_687(unk_0xB5CEFD608600A09F());
		Global_196AB6.f_1D = func_690(func_627(unk_0xB5CEFD608600A09F()));
		Global_196AB6.f_1E = func_690(func_626(unk_0xB5CEFD608600A09F()));
		Global_196AB6.f_1F = func_625(unk_0xB5CEFD608600A09F());
		if (func_179(unk_0xB5CEFD608600A09F(), 1))
		{
			Global_196AB6.f_21 = func_690(func_237(1));
		}
		if (Global_196AB6.f_22 > 2)
		{
			Global_196AB6.f_22 = 2;
		}
		func_623(iVar0);
	}
	else if (func_415(iVar0))
	{
		Global_196A81.f_2 = func_696();
		Global_196A81.f_3 = func_695();
		if ((func_120(unk_0xB5CEFD608600A09F()) || func_131(unk_0xB5CEFD608600A09F())) || func_139(unk_0xB5CEFD608600A09F()))
		{
			Global_196A81.f_6 = 1;
		}
		else
		{
			Global_196A81.f_6 = 0;
		}
		Global_196A81.f_1 = func_691(0);
		Global_196A81.f_9 = unk_0xB99C193A32DE341D();
		Global_196A81.f_A = func_690(bParam0);
		Global_196A81.f_B = iParam1;
		Global_196A81.f_12 = (Global_196A81.f_9 - Global_196A81.f_8);
		Global_196A81.f_1C = func_687(unk_0xB5CEFD608600A09F());
		if (Global_196A81.f_1C)
		{
			Global_196A81.f_1D = func_622(unk_0xB5CEFD608600A09F());
		}
		else
		{
			Global_196A81.f_1D = 0;
		}
		Global_196A81.f_1E = func_606(unk_0xB5CEFD608600A09F(), 4, -1);
		Global_196A81.f_1F = func_625(unk_0xB5CEFD608600A09F());
		Global_196A81.f_20 = func_690(func_605(unk_0xB5CEFD608600A09F()));
		Global_196A81.f_21 = func_690(func_604(unk_0xB5CEFD608600A09F()));
		Global_196A81.f_22 = func_690(func_603(unk_0xB5CEFD608600A09F()));
		Global_196A81.f_23 = func_690(func_602(unk_0xB5CEFD608600A09F()));
		Global_196A81.f_24 = func_601(unk_0xB5CEFD608600A09F());
		Global_196A81.f_25 = func_600(unk_0xB5CEFD608600A09F());
		Global_196A81.f_27 = func_599(unk_0xB5CEFD608600A09F());
		if (func_179(unk_0xB5CEFD608600A09F(), 1))
		{
			Global_196A81.f_29 = func_690(func_237(1));
		}
		if (Global_196A81.f_2A > 2)
		{
			Global_196A81.f_2A = 2;
		}
		func_597(iVar0);
	}
	else
	{
		Global_196948.f_6 = unk_0xB99C193A32DE341D();
		if (bParam0)
		{
			Global_196948.f_7 = 1;
		}
		else
		{
			Global_196948.f_7 = 0;
		}
		Global_196948.f_8 = iParam1;
		if (Global_196948.f_4 == 0)
		{
			if ((func_120(unk_0xB5CEFD608600A09F()) || func_131(unk_0xB5CEFD608600A09F())) || func_139(unk_0xB5CEFD608600A09F()))
			{
				Global_196948.f_4 = 1;
			}
		}
	}
}

void func_597(int iParam0)//Position - 0x16F34
{
	unk_0x2D7A9B577E72385E(&Global_196A81);
	func_598();
}

void func_598()//Position - 0x16F48
{
	struct<53> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_A = -1;
	Var0.f_B = -1;
	Var0.f_C = -1;
	Var0.f_D = -1;
	Var0.f_E = -1;
	Var0.f_F = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_1A = -1;
	Var0.f_1B = -1;
	Var0.f_1D = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_2A = -1;
	Var0.f_2B = -1;
	Var0.f_2C = -1;
	Var0.f_2D = -1;
	Var0.f_2E = -1;
	Var0.f_2F = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Global_196A81 = { Var0 };
}

int func_599(int iParam0)//Position - 0x17071
{
	if (iParam0 != func_63())
	{
		return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_13F, 12);
	}
	return 0;
}

int func_600(int iParam0)//Position - 0x1709B
{
	if (iParam0 != func_63())
	{
		return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_13F, 10);
	}
	return 0;
}

int func_601(int iParam0)//Position - 0x170C5
{
	if (iParam0 != func_63())
	{
		return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_13F, 11);
	}
	return 0;
}

bool func_602(int iParam0)//Position - 0x170EF
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_10A.f_4, 4);
}

bool func_603(int iParam0)//Position - 0x1711A
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_10A.f_4, 3);
}

bool func_604(int iParam0)//Position - 0x17145
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_10A.f_4, 2);
}

bool func_605(int iParam0)//Position - 0x17170
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_10A.f_4, 1);
}

int func_606(int iParam0, int iParam1, int iParam2)//Position - 0x1719B
{
	if (iParam0 == func_63() || !func_621(iParam1))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			return func_616(iParam0, iParam2);
		
		case 1:
			return func_614(iParam0, iParam2);
		
		case 3:
			return func_613(iParam0);
		
		case 2:
			return func_608(iParam0, iParam2);
		
		case 4:
			return func_607(iParam0);
		
		default:
	}
	return 0;
}

bool func_607(int iParam0)//Position - 0x17217
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_10A.f_4, 6);
}

int func_608(int iParam0, int iParam1)//Position - 0x17242
{
	switch (iParam1)
	{
		case 10:
			return func_612(iParam0);
		
		case 11:
			return func_611(iParam0);
		
		case 12:
			return func_610(iParam0);
		
		case 13:
			return func_609(iParam0);
		
		default:
	}
	return 0;
}

bool func_609(int iParam0)//Position - 0x1728E
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_10A.f_4, 15);
}

bool func_610(int iParam0)//Position - 0x172BA
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_10A.f_4, 14);
}

bool func_611(int iParam0)//Position - 0x172E6
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_10A.f_4, 13);
}

bool func_612(int iParam0)//Position - 0x17312
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_10A.f_4, 12);
}

bool func_613(int iParam0)//Position - 0x1733E
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_10A.f_4, 5);
}

int func_614(int iParam0, int iParam1)//Position - 0x17369
{
	switch (iParam1)
	{
		case 5:
			return func_615(iParam0);
		
		case 6:
			return func_605(iParam0);
		
		case 7:
			return func_604(iParam0);
		
		case 8:
			return func_603(iParam0);
		
		case 9:
			return func_602(iParam0);
		
		default:
	}
	return 0;
}

bool func_615(int iParam0)//Position - 0x173C4
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_10A.f_4, 0);
}

int func_616(int iParam0, int iParam1)//Position - 0x173EF
{
	switch (iParam1)
	{
		case 0:
			return func_620(iParam0);
		
		case 1:
			return func_619(iParam0);
		
		case 2:
			return func_618(iParam0);
		
		case 3:
			return func_617(iParam0);
		
		case 4:
			return func_625(iParam0);
		
		default:
	}
	return 0;
}

bool func_617(int iParam0)//Position - 0x1744A
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_10A.f_4, 10);
}

bool func_618(int iParam0)//Position - 0x17476
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_10A.f_4, 9);
}

bool func_619(int iParam0)//Position - 0x174A2
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_10A.f_4, 8);
}

bool func_620(int iParam0)//Position - 0x174CE
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_10A.f_4, 7);
}

bool func_621(int iParam0)//Position - 0x174F9
{
	return (iParam0 != -1 && iParam0 != 6);
}

int func_622(int iParam0)//Position - 0x1750E
{
	int iVar0;
	
	if (iParam0 == func_63())
	{
		return 0;
	}
	iVar0 = 1;
	if (func_606(iParam0, 2, 13))
	{
		iVar0 = 5;
	}
	else if (func_606(iParam0, 2, 12))
	{
		iVar0 = 4;
	}
	else if (func_606(iParam0, 2, 11))
	{
		iVar0 = 3;
	}
	else if (func_606(iParam0, 2, 10))
	{
		iVar0 = 2;
	}
	return iVar0;
}

void func_623(int iParam0)//Position - 0x1756D
{
	unk_0x830C3A44EB3F2CF9(&Global_196AB6);
	func_624();
}

void func_624()//Position - 0x17581
{
	struct<39> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_A = -1;
	Var0.f_B = -1;
	Var0.f_C = -1;
	Var0.f_D = -1;
	Var0.f_E = -1;
	Var0.f_F = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_1A = -1;
	Var0.f_1B = -1;
	Var0.f_1D = -1;
	Var0.f_1E = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Global_196AB6 = { Var0 };
}

bool func_625(int iParam0)//Position - 0x17674
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_146, 31);
}

bool func_626(int iParam0)//Position - 0x17691
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_133.f_1, 0);
}

bool func_627(int iParam0)//Position - 0x176BC
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_133.f_1, 19);
}

var func_628(int iParam0)//Position - 0x176E8
{
	return Global_18402B[iParam0 /*770*/].f_D3.f_6;
}

void func_629(int iParam0)//Position - 0x176FD
{
	unk_0x38096CFACAFA5597(&Global_196A31);
	func_630();
}

void func_630()//Position - 0x17711
{
	struct<46> Var0;
	
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_A = -1;
	Var0.f_B = -1;
	Var0.f_C = -1;
	Var0.f_D = -1;
	Var0.f_E = -1;
	Var0.f_F = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_1A = -1;
	Var0.f_1B = -1;
	Var0.f_1C = -1;
	Var0.f_1D = -1;
	Var0.f_1E = -1;
	Var0.f_1F = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_2A = -1;
	Var0.f_2B = -1;
	Var0.f_2C = -1;
	Var0.f_2D = -1;
	Global_196A31 = { Var0 };
	Global_196A31.f_10 = 0;
}

bool func_631()//Position - 0x1781F
{
	return func_423(6152, -1, 0) != 0;
}

int func_632(int iParam0)//Position - 0x17832
{
	if (iParam0 != func_63())
	{
		return Global_18402B[iParam0 /*770*/].f_111.f_100 != 0;
	}
	return 0;
}

bool func_633()//Position - 0x17858
{
	return func_423(6160, -1, 0) == 3;
}

bool func_634()//Position - 0x1786B
{
	return func_423(6160, -1, 0) == 2;
}

bool func_635()//Position - 0x1787E
{
	return func_423(6160, -1, 0) == 1;
}

void func_636(int iParam0)//Position - 0x17891
{
	unk_0xF0764752B63D769A(&Global_1969FB);
	func_637();
}

void func_637()//Position - 0x178A5
{
	struct<54> Var0;
	
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_A = -1;
	Var0.f_B = -1;
	Var0.f_C = -1;
	Var0.f_D = -1;
	Var0.f_E = -1;
	Var0.f_F = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_1A = -1;
	Var0.f_1B = -1;
	Var0.f_1C = -1;
	Var0.f_1D = -1;
	Var0.f_1E = -1;
	Var0.f_1F = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_2A = -1;
	Var0.f_2B = -1;
	Var0.f_2C = -1;
	Var0.f_2D = -1;
	Var0.f_2E = -1;
	Var0.f_2F = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Global_1969FB = { Var0 };
	Global_1969FB.f_17 = 0;
	Global_1969FB.f_18 = 0;
	Global_1969FB.f_10 = 0;
}

void func_638()//Position - 0x179F1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar2 = (iVar0 + func_649(12));
		func_648(iVar2, &iVar1, 1);
		if (iVar1 >= 0)
		{
			if (Global_1425AC[iVar1 /*141*/].f_42 != 0 && func_640(Global_1425AC[iVar1 /*141*/].f_42, 1))
			{
				if (Global_267214.f_375 != iVar1)
				{
					if (func_639(Global_1425AC[iVar1 /*141*/].f_42))
					{
						if (Global_1425AC[iVar1 /*141*/].f_42 != 0)
						{
							iVar3 = Global_1425AC[iVar1 /*141*/].f_42;
						}
						switch (iVar0)
						{
							case 0:
								Global_1969FB.f_26 = iVar3;
								break;
							
							case 1:
								Global_1969FB.f_27 = iVar3;
								break;
							
							case 2:
								Global_1969FB.f_28 = iVar3;
								break;
							
							case 3:
								Global_1969FB.f_29 = iVar3;
								break;
							
							case 4:
								Global_1969FB.f_2A = iVar3;
								break;
							
							case 5:
								Global_1969FB.f_2B = iVar3;
								break;
							
							case 6:
								Global_1969FB.f_2C = iVar3;
								break;
							
							case 7:
								Global_1969FB.f_2D = iVar3;
								break;
							
							case 8:
								Global_1969FB.f_2E = iVar3;
								break;
							
							case 9:
								Global_1969FB.f_2F = iVar3;
								break;
							}
						}
					}
				}
		}
		iVar0++;
	}
}

int func_639(int iParam0)//Position - 0x17B37
{
	switch (iParam0)
	{
		case joaat("buzzard"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("hydra"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case -1984275979:
		case -42959138:
		case joaat("volatus"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("annihilator"):
		case -749299473:
		case -975345305:
		case -1700874274:
		case -392675425:
		case -1763555241:
		case 1043222410:
		case joaat("lazer"):
		case -1386191424:
		case 1565978651:
		case 1036591958:
		case -1007528109:
		case -32878452:
		case -1523619738:
		case joaat("nimbus"):
		case joaat("luxor2"):
		case joaat("velum2"):
		case joaat("dodo"):
		case joaat("miljet"):
		case joaat("besra"):
		case joaat("vestra"):
		case joaat("duster"):
		case joaat("shamal"):
		case joaat("cuban800"):
		case joaat("luxor"):
		case joaat("stunt"):
		case joaat("mammatus"):
		case joaat("titan"):
		case joaat("velum"):
		case 1181327175:
		case 447548909:
		case -726768679:
			return 1;
		
		default:
	}
	if (iParam0 == 1692272545)
	{
		return 1;
	}
	return 0;
}

int func_640(int iParam0, bool bParam1)//Position - 0x17C73
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x6067F058A4B0729F(iParam0))
	{
		return 0;
	}
	if ((((((iParam0 == joaat("dominator2") && !unk_0x7AF0088ABFA713B6()) || (iParam0 == joaat("buffalo3") && !unk_0x7AF0088ABFA713B6())) || (iParam0 == joaat("gauntlet2") && !unk_0x7AF0088ABFA713B6())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x7AF0088ABFA713B6())) || iParam0 == joaat("blista3"))
	{
		if (!func_647())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0xDF84CF7530FA6525())
		{
			if (unk_0x62A638D88F7B7D88(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0xD90F58A58682ED2F(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_646() && !func_645()) && !func_644()) && !func_643()) && !func_647())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xF49912B78E2591B6() || unk_0x8ACB0C3FACC09467()) || unk_0xF7E138CFA19B55E7())
		{
		}
		else if (!func_644())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_642(iParam0))
		{
			return 0;
		}
	}
	if (!func_641(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_641(int iParam0)//Position - 0x17E01
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_449())
	{
		return 1;
	}
	unk_0xC4F4FCDFF2D3ABE9(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0xD541643C038E7321(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_642(int iParam0)//Position - 0x17ECD
{
	int iVar0;
	int iVar1;
	
	if (Global_262135)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0xB99C193A32DE341D();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_40001.f_1766 && !Global_40001.f_300B) && iVar1 < Global_40001.f_300C)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_40001.f_351D && iVar1 < Global_40001.f_3529)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_40001.f_3519 && iVar1 < Global_40001.f_3525)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_40001.f_351A && iVar1 < Global_40001.f_3526)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_40001.f_351B && iVar1 < Global_40001.f_3527)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_40001.f_351C && iVar1 < Global_40001.f_3528)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_40001.f_351E && iVar1 < Global_40001.f_352A)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_40001.f_351F && iVar1 < Global_40001.f_3522)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_40001.f_3520 && iVar1 < Global_40001.f_3523)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_40001.f_3521 && iVar1 < Global_40001.f_3524)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_40001.f_3F64 && iVar1 < Global_40001.f_3F41)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_40001.f_3F5F && iVar1 < Global_40001.f_3F3C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_40001.f_3F63 && iVar1 < Global_40001.f_3F40)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_40001.f_3F62 && iVar1 < Global_40001.f_3F3F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_40001.f_3F5C && iVar1 < Global_40001.f_3F39)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_40001.f_3F5D && iVar1 < Global_40001.f_3F3A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_40001.f_3F60 && iVar1 < Global_40001.f_3F3D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_40001.f_3F61 && iVar1 < Global_40001.f_3F3E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_40001.f_3F5E && iVar1 < Global_40001.f_3F3B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_40001.f_3F66 && iVar1 < Global_40001.f_3F43)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_40001.f_3F67 && iVar1 < Global_40001.f_3F44)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_40001.f_3F5B && iVar1 < Global_40001.f_3F38)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_40001.f_3F5A && iVar1 < Global_40001.f_3F37)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_40001.f_3F59 && iVar1 < Global_40001.f_3F36)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_40001.f_3F65 && iVar1 < Global_40001.f_3F42)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_40001.f_3F68 && iVar1 < Global_40001.f_3F45)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_40001.f_3F69 && iVar1 < Global_40001.f_3F46)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_40001.f_3F6A && iVar1 < Global_40001.f_3F47)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_40001.f_3F6B && iVar1 < Global_40001.f_3F48)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_40001.f_3FFC && iVar1 < Global_40001.f_4012)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_40001.f_3FFD && iVar1 < Global_40001.f_4013)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_40001.f_3FFE && iVar1 < Global_40001.f_4014)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_40001.f_3FFF && iVar1 < Global_40001.f_4015)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_40001.f_4000 && iVar1 < Global_40001.f_4016)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_40001.f_4001 && iVar1 < Global_40001.f_4017)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_40001.f_4003 && iVar1 < Global_40001.f_4018)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_40001.f_4004 && iVar1 < Global_40001.f_4019)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_40001.f_4005 && iVar1 < Global_40001.f_401A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_40001.f_4006 && iVar1 < Global_40001.f_401B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_40001.f_4007 && iVar1 < Global_40001.f_401C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_40001.f_4008 && iVar1 < Global_40001.f_401D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_40001.f_4009 && iVar1 < Global_40001.f_401E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_40001.f_400F && iVar1 < Global_40001.f_4025)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_40001.f_400C && iVar1 < Global_40001.f_4021)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_40001.f_400D && iVar1 < Global_40001.f_4022)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_40001.f_400E && iVar1 < Global_40001.f_4023)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_40001.f_4002 && iVar1 < Global_40001.f_4024)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_40001.f_4010 && iVar1 < Global_40001.f_4026)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_40001.f_400A && iVar1 < Global_40001.f_401F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_40001.f_400B && iVar1 < Global_40001.f_4020)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_40001.f_4011 && iVar1 < Global_40001.f_4027)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_40001.f_466D && iVar1 < Global_40001.f_46CF)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_40001.f_466E && iVar1 < Global_40001.f_46D0)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_40001.f_466F && iVar1 < Global_40001.f_46D1)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_40001.f_4670 && iVar1 < Global_40001.f_46D2)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_40001.f_4671 && iVar1 < Global_40001.f_46D3)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_40001.f_4672 && iVar1 < Global_40001.f_46D4)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_40001.f_4673 && iVar1 < Global_40001.f_46D5)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_40001.f_4674 && iVar1 < Global_40001.f_46D6)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_40001.f_4675 && iVar1 < Global_40001.f_46D7)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_40001.f_4676 && iVar1 < Global_40001.f_46D8)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_40001.f_4677 && iVar1 < Global_40001.f_46D9)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_40001.f_4678 && iVar1 < Global_40001.f_46DA)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_40001.f_4679 && iVar1 < Global_40001.f_46DB)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_40001.f_467A && iVar1 < Global_40001.f_46DC)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_40001.f_467B && iVar1 < Global_40001.f_46DD)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_40001.f_467C && iVar1 < Global_40001.f_46DE)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_40001.f_467D && iVar1 < Global_40001.f_46DF)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_40001.f_467E && iVar1 < Global_40001.f_46E0)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_40001.f_467F && iVar1 < Global_40001.f_46E1)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_40001.f_4680 && iVar1 < Global_40001.f_46E2)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_40001.f_4681 && iVar1 < Global_40001.f_46E3)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_40001.f_4682 && iVar1 < Global_40001.f_46E4)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_40001.f_4683 && iVar1 < Global_40001.f_46E5)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_40001.f_4684 && iVar1 < Global_40001.f_46E6)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_40001.f_4685 && iVar1 < Global_40001.f_46E7)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1234311532)
	{
		if (!Global_40001.f_4AA6 && iVar1 < Global_40001.f_4AA2)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1405937764)
	{
		if (!Global_40001.f_4AA7 && iVar1 < Global_40001.f_4AA3)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 719660200)
	{
		if (!Global_40001.f_4AA8 && iVar1 < Global_40001.f_4AA4)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -982130927)
	{
		if (!Global_40001.f_4AA9 && iVar1 < Global_40001.f_4AA5)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 917809321)
	{
		if (!Global_40001.f_4E15 && iVar1 < Global_40001.f_4E1D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 223240013)
	{
		if (!Global_40001.f_4E16 && iVar1 < Global_40001.f_4E1E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1504306544)
	{
		if (!Global_40001.f_4E17 && iVar1 < Global_40001.f_4E1F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1939284556)
	{
		if (!Global_40001.f_4E18 && iVar1 < Global_40001.f_4E20)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 159274291)
	{
		if (!Global_40001.f_4E19 && iVar1 < Global_40001.f_4E21)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 433954513)
	{
		if (!Global_40001.f_4E1A && iVar1 < Global_40001.f_4E22)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1763555241)
	{
		if (!Global_40001.f_511E && iVar1 < Global_40001.f_5132)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -749299473)
	{
		if (!Global_40001.f_512A && iVar1 < Global_40001.f_513E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -975345305)
	{
		if (!Global_40001.f_5121 && iVar1 < Global_40001.f_5135)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1700874274)
	{
		if (!Global_40001.f_512B && iVar1 < Global_40001.f_513F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -392675425)
	{
		if (!Global_40001.f_511F && iVar1 < Global_40001.f_5133)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1043222410)
	{
		if (!Global_40001.f_512F && iVar1 < Global_40001.f_5143)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1386191424)
	{
		if (!Global_40001.f_512D && iVar1 < Global_40001.f_5141)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1565978651)
	{
		if (!Global_40001.f_512E && iVar1 < Global_40001.f_5142)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1036591958)
	{
		if (!Global_40001.f_5129 && iVar1 < Global_40001.f_513D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -32878452)
	{
		if (!Global_40001.f_5130 && iVar1 < Global_40001.f_5144)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -42959138)
	{
		if (!Global_40001.f_512C && iVar1 < Global_40001.f_5140)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1984275979)
	{
		if (!Global_40001.f_5128 && iVar1 < Global_40001.f_513C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1007528109)
	{
		if (!Global_40001.f_5120 && iVar1 < Global_40001.f_5134)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1523619738)
	{
		if (!Global_40001.f_5122 && iVar1 < Global_40001.f_5136)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1392481335)
	{
		if (!Global_40001.f_5123 && iVar1 < Global_40001.f_5137)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -998177792)
	{
		if (!Global_40001.f_5124 && iVar1 < Global_40001.f_5138)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1242608589)
	{
		if (!Global_40001.f_5125 && iVar1 < Global_40001.f_5139)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1841130506)
	{
		if (!Global_40001.f_5126 && iVar1 < Global_40001.f_513A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2049897956)
	{
		if (!Global_40001.f_5127 && iVar1 < Global_40001.f_513B)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1483171323)
	{
		if (!Global_40001.f_54DF && iVar1 < Global_40001.f_54FB)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 886810209)
	{
		if (!Global_40001.f_54E0 && iVar1 < Global_40001.f_54FC)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1693015116)
	{
		if (!Global_40001.f_54E1 && iVar1 < Global_40001.f_54FD)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -692292317)
	{
		if (!Global_40001.f_54E2 && iVar1 < Global_40001.f_54FE)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1435527158)
	{
		if (!Global_40001.f_54E3 && iVar1 < Global_40001.f_54FF)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1181327175)
	{
		if (!Global_40001.f_54E4 && iVar1 < Global_40001.f_5500)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1489874736)
	{
		if (!Global_40001.f_54E5 && iVar1 < Global_40001.f_5501)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -212993243)
	{
		if (!Global_40001.f_54E6 && iVar1 < Global_40001.f_5502)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 447548909)
	{
		if (!Global_40001.f_54E7 && iVar1 < Global_40001.f_5503)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1561920505)
	{
		if (!Global_40001.f_54E8 && iVar1 < Global_40001.f_5504)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1848994066)
	{
		if (!Global_40001.f_54E9 && iVar1 < Global_40001.f_5505)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1741861769)
	{
		if (!Global_40001.f_54EA && iVar1 < Global_40001.f_5506)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1104234922)
	{
		if (!Global_40001.f_54EB && iVar1 < Global_40001.f_5507)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1871995513)
	{
		if (!Global_40001.f_54EC && iVar1 < Global_40001.f_5508)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1352136073)
	{
		if (!Global_40001.f_54ED && iVar1 < Global_40001.f_5509)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -313185164)
	{
		if (!Global_40001.f_54EE && iVar1 < Global_40001.f_550A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2079788230)
	{
		if (!Global_40001.f_54EF && iVar1 < Global_40001.f_550B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 600450546)
	{
		if (!Global_40001.f_54F0 && iVar1 < Global_40001.f_550C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -410205223)
	{
		if (!Global_40001.f_54F1 && iVar1 < Global_40001.f_550D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 867799010)
	{
		if (!Global_40001.f_54F2 && iVar1 < Global_40001.f_550E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1529242755)
	{
		if (!Global_40001.f_54F3 && iVar1 < Global_40001.f_550F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 903794909)
	{
		if (!Global_40001.f_54F4 && iVar1 < Global_40001.f_5510)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1532697517)
	{
		if (!Global_40001.f_54F5 && iVar1 < Global_40001.f_5511)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 15219735)
	{
		if (!Global_40001.f_54F6 && iVar1 < Global_40001.f_5512)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 661493923)
	{
		if (!Global_40001.f_54F7 && iVar1 < Global_40001.f_5513)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 838982985)
	{
		if (!Global_40001.f_54F8 && iVar1 < Global_40001.f_5514)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -391595372)
	{
		if (!Global_40001.f_54F9 && iVar1 < Global_40001.f_5515)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -121446169)
	{
		if (!Global_40001.f_54FA && iVar1 < Global_40001.f_5516)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1909189272)
	{
		if (!Global_40001.f_597B && iVar1 < Global_40001.f_598B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1617472902)
	{
		if (!Global_40001.f_597C && iVar1 < Global_40001.f_598C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1267543371)
	{
		if (!Global_40001.f_5980 && iVar1 < Global_40001.f_5990)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 931280609)
	{
		if (!Global_40001.f_5983 && iVar1 < Global_40001.f_5993)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1046206681)
	{
		if (!Global_40001.f_5988 && iVar1 < Global_40001.f_5998)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1259134696)
	{
		if (!Global_40001.f_5982 && iVar1 < Global_40001.f_5992)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1115909093)
	{
		if (!Global_40001.f_597A && iVar1 < Global_40001.f_598A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1031562256)
	{
		if (!Global_40001.f_5981 && iVar1 < Global_40001.f_5991)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -376434238)
	{
		if (!Global_40001.f_5987 && iVar1 < Global_40001.f_5997)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -986944621)
	{
		if (!Global_40001.f_5986 && iVar1 < Global_40001.f_5996)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1134706562)
	{
		if (!Global_40001.f_597D && iVar1 < Global_40001.f_598D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2120700196)
	{
		if (!Global_40001.f_597F && iVar1 < Global_40001.f_598F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -214906006)
	{
		if (!Global_40001.f_5989 && iVar1 < Global_40001.f_5999)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -988501280)
	{
		if (!Global_40001.f_5985 && iVar1 < Global_40001.f_5995)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1254014755)
	{
		if (!Global_40001.f_597E && iVar1 < Global_40001.f_598E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -726768679)
	{
		if (!Global_40001.f_5984 && iVar1 < Global_40001.f_5994)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1988428699)
	{
		if (!Global_40001.f_59D5 && iVar1 < Global_40001.f_59C8)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 345756458)
	{
		if (!Global_40001.f_59D6 && iVar1 < Global_40001.f_59C9)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1945374990)
	{
		if (!Global_40001.f_59DB && iVar1 < Global_40001.f_59CE)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1653666139)
	{
		if (!Global_40001.f_59DA && iVar1 < Global_40001.f_59CD)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 500482303)
	{
		if (!Global_40001.f_59D8 && iVar1 < Global_40001.f_59CB)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2044532910)
	{
		if (!Global_40001.f_59DE && iVar1 < Global_40001.f_59D1)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -638562243)
	{
		if (!Global_40001.f_59E0 && iVar1 < Global_40001.f_59D3)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1692272545)
	{
		if (!Global_40001.f_59E1 && iVar1 < Global_40001.f_59D4)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2069146067)
	{
		if (!Global_40001.f_59DF && iVar1 < Global_40001.f_59D2)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -420911112)
	{
		if (!Global_40001.f_59D7 && iVar1 < Global_40001.f_59CA)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 321186144)
	{
		if (!Global_40001.f_59D9 && iVar1 < Global_40001.f_59CC)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -54332285)
	{
		if (!Global_40001.f_59DD && iVar1 < Global_40001.f_59D0)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -307958377)
	{
		if (!Global_40001.f_59DC && iVar1 < Global_40001.f_59CF)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_643()//Position - 0x19978
{
	return 0;
}

int func_644()//Position - 0x19981
{
	return 1;
}

int func_645()//Position - 0x1998A
{
	return 1;
}

int func_646()//Position - 0x19993
{
	if (unk_0x7B2F21BFE86AEB61(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_647()//Position - 0x199AC
{
	int iVar0;
	
	if (unk_0x7E3A4CFA5545546C())
	{
		if (unk_0x6EFCE916927099A8())
		{
			if (unk_0x0D618527B2B8660A())
			{
				unk_0x6CB99B97664C3727(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				unk_0xF0059F27F7BB6680(&iVar0, 2);
				unk_0xF0059F27F7BB6680(&iVar0, 4);
				unk_0xF0059F27F7BB6680(&iVar0, 6);
				unk_0xF0059F27F7BB6680(&Global_19, 2);
				unk_0xF0059F27F7BB6680(&Global_19, 4);
				unk_0xF0059F27F7BB6680(&Global_19, 6);
				unk_0x3A57956BCE003880(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (unk_0x7A4B76D06AAF8132())
				{
					iVar0 = unk_0x2DC92D46FC48E795(866);
					unk_0xF0059F27F7BB6680(&iVar0, 0);
					unk_0x973C4C95367920C1(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_231F0 == 2)
	{
		return 1;
	}
	else if (Global_231F0 == 3)
	{
		return 0;
	}
	if (unk_0x7A4B76D06AAF8132())
	{
		if (unk_0xFA30DFD0084E92FE(unk_0x2DC92D46FC48E795(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_648(int iParam0, int iParam1, bool bParam2)//Position - 0x19A67
{
	if (Global_40001.f_2550)
	{
		*iParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*iParam1 = (Global_195D66[iParam0] - 1);
		if (bParam2)
		{
			if ((unk_0xC87A57742F7D3C06() % 5) == 0)
			{
			}
		}
	}
	else
	{
		*iParam1 = -1;
	}
}

int func_649(int iParam0)//Position - 0x19AA7
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 88;
			break;
		
		case 9:
			return 108;
			break;
		
		case 10:
			return 128;
			break;
		
		case 11:
			return 148;
			break;
		
		case 6:
			return 65;
			break;
		
		case 7:
			return 75;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 159;
			break;
		
		case 13:
			return 179;
			break;
		
		case 14:
			return 191;
			break;
		
		case 15:
			return 192;
			break;
		
		case 16:
			return 202;
			break;
		
		case 17:
			return 212;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_652(iParam0);
		return func_651(iVar0);
	}
	return (func_650(iParam0, -1) * iParam0);
}

int func_650(int iParam0, int iParam1)//Position - 0x19B8E
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_388(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_394(iParam1))
			{
				return 0;
			}
			else if (func_386(iParam1, -1))
			{
				return 10;
			}
			else if (iParam1 == 115)
			{
				return 8;
			}
			else if (iParam1 == 116)
			{
				return 20;
			}
			else if (iParam1 == 117)
			{
				return 7;
			}
			else if (iParam1 == 118)
			{
				return 1;
			}
			else if ((iParam1 == 119 || iParam1 == 120) || iParam1 == 121)
			{
				return 10;
			}
			else if (iParam1 <= 121 && iParam1 > 0)
			{
				if (Global_100449[iParam1 /*1951*/].f_21 == 2)
				{
					return 3;
				}
				else if (Global_100449[iParam1 /*1951*/].f_21 == 6)
				{
					return 8;
				}
				else if (Global_100449[iParam1 /*1951*/].f_21 == 10)
				{
					return 13;
				}
			}
		}
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
			return 13;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 10;
			break;
		
		case 8:
		case 9:
		case 10:
			return 20;
			break;
		
		case 11:
			return 8;
			break;
		
		case 12:
			return 20;
			break;
		
		case 13:
			return 7;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
		case 16:
		case 17:
			return 10;
			break;
	}
	return 0;
}

int func_651(int iParam0)//Position - 0x19D43
{
	switch (iParam0)
	{
		case 0:
			return 156;
		
		case 2:
			return 223;
		
		case 1:
			return 224;
		
		default:
	}
	return -1;
}

int func_652(int iParam0)//Position - 0x19D74
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return iParam0;
	}
	return -1;
}

var func_653()//Position - 0x19D9A
{
	var uVar0;
	
	uVar0 = func_654();
	if (!func_435())
	{
		if (func_452() != func_63())
		{
			uVar0 = func_688(func_452()) + 1;
		}
	}
	return uVar0;
}

int func_654()//Position - 0x19DC9
{
	return func_688(unk_0xB5CEFD608600A09F()) + 1;
}

int func_655()//Position - 0x19DDB
{
	return func_423(6109, -1, 0);
}

int func_656(int iParam0)//Position - 0x19DEC
{
	if (func_179(iParam0, 1))
	{
		return Global_18C80F[iParam0 /*558*/].f_B.f_19A;
	}
	return -1;
}

void func_657(int iParam0)//Position - 0x19E10
{
	if (iParam0 == 0)
	{
	}
	unk_0x5F080E7F4F761E28(&Global_1969CF);
	func_658();
}

void func_658()//Position - 0x19E2A
{
	struct<44> Var0;
	
	Global_1969CF = { Var0 };
	Global_1969CF.f_17 = 0;
	Global_1969CF.f_18 = 0;
	Global_1969CF.f_10 = 0;
}

bool func_659(int iParam0)//Position - 0x19E53
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_146, 12);
}

bool func_660(int iParam0)//Position - 0x19E70
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_146, 13);
}

int func_661(int iParam0)//Position - 0x19E8D
{
	if (iParam0 != func_63())
	{
		if ((unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 12) || unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 13)) || unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 14))
		{
			return 1;
		}
	}
	return 0;
}

int func_662(int iParam0)//Position - 0x19EEE
{
	if (iParam0 != func_63())
	{
		if ((unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 0) || unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 1)) || unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_663(int iParam0)//Position - 0x19F4C
{
	if (iParam0 != func_63())
	{
		if (((((unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 3) || unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 4)) || unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 5)) || unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 0)) || unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 1)) || unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_664(int iParam0, int iParam1)//Position - 0x19FF5
{
	if (iParam1 == func_63())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam1 /*770*/].f_111.f_F4, 0))
			{
				return 3;
			}
			else if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam1 /*770*/].f_111.f_F4, 3))
			{
				return 2;
			}
			else if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam1 /*770*/].f_111.f_F4, 6))
			{
				return 4;
			}
			else if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam1 /*770*/].f_111.f_F4, 9))
			{
				return 1;
			}
			else if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam1 /*770*/].f_111.f_F4, 12))
			{
				return 7;
			}
			else if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam1 /*770*/].f_111.f_F4, 15))
			{
				return 5;
			}
			else if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam1 /*770*/].f_111.f_F4, 18))
			{
				return 6;
			}
			else if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam1 /*770*/].f_111.f_F4, 21))
			{
				return 0;
			}
			else if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam1 /*770*/].f_111.f_F4, 24))
			{
				return 8;
			}
			break;
		
		case 1:
			if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam1 /*770*/].f_111.f_F4, 1))
			{
				return 3;
			}
			else if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam1 /*770*/].f_111.f_F4, 4))
			{
				return 2;
			}
			else if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam1 /*770*/].f_111.f_F4, 7))
			{
				return 4;
			}
			else if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam1 /*770*/].f_111.f_F4, 10))
			{
				return 1;
			}
			else if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam1 /*770*/].f_111.f_F4, 13))
			{
				return 7;
			}
			else if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam1 /*770*/].f_111.f_F4, 16))
			{
				return 5;
			}
			else if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam1 /*770*/].f_111.f_F4, 19))
			{
				return 6;
			}
			else if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam1 /*770*/].f_111.f_F4, 22))
			{
				return 0;
			}
			else if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam1 /*770*/].f_111.f_F4, 25))
			{
				return 8;
			}
			break;
		
		case 2:
			if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam1 /*770*/].f_111.f_F4, 2))
			{
				return 3;
			}
			else if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam1 /*770*/].f_111.f_F4, 5))
			{
				return 2;
			}
			else if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam1 /*770*/].f_111.f_F4, 8))
			{
				return 4;
			}
			else if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam1 /*770*/].f_111.f_F4, 11))
			{
				return 1;
			}
			else if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam1 /*770*/].f_111.f_F4, 14))
			{
				return 7;
			}
			else if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam1 /*770*/].f_111.f_F4, 17))
			{
				return 5;
			}
			else if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam1 /*770*/].f_111.f_F4, 20))
			{
				return 6;
			}
			else if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam1 /*770*/].f_111.f_F4, 23))
			{
				return 0;
			}
			else if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam1 /*770*/].f_111.f_F4, 26))
			{
				return 8;
			}
			break;
	}
	return 0;
}

int func_665(int iParam0)//Position - 0x1A349
{
	if (iParam0 != func_63())
	{
		if ((unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 6) || unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 7)) || unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 8))
		{
			return 1;
		}
	}
	return 0;
}

bool func_666(int iParam0)//Position - 0x1A3A8
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_146, 8);
}

bool func_667(int iParam0)//Position - 0x1A3C5
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_146, 7);
}

bool func_668(int iParam0)//Position - 0x1A3E1
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_146, 9);
}

bool func_669(int iParam0)//Position - 0x1A40B
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_146, 11);
}

bool func_670(int iParam0)//Position - 0x1A435
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_146, 10);
}

int func_671(int iParam0, int iParam1)//Position - 0x1A45F
{
	return func_423(func_672(iParam1), iParam0, 0);
}

int func_672(int iParam0)//Position - 0x1A474
{
	switch (iParam0)
	{
		case 0:
			return 3894;
		
		case 1:
			return 3923;
		
		case 2:
			return 3927;
		
		case 3:
			return 3931;
		
		case 4:
			return 3935;
		
		case 5:
			return 5446;
		
		default:
	}
	return 3894;
}

void func_673(int iParam0)//Position - 0x1A4CE
{
	if (iParam0 == 0)
	{
	}
	unk_0x446AB56E5D45010D(&Global_196990);
	func_674();
}

void func_674()//Position - 0x1A4E8
{
	struct<63> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_A = -1;
	Var0.f_B = -1;
	Var0.f_C = -1;
	Var0.f_F = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_1A = -1;
	Var0.f_1B = -1;
	Var0.f_1C = -1;
	Var0.f_1D = -1;
	Var0.f_1E = -1;
	Var0.f_1F = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_2A = -1;
	Var0.f_2B = -1;
	Var0.f_2C = -1;
	Var0.f_2D = -1;
	Var0.f_2E = -1;
	Var0.f_2F = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_3A = -1;
	Var0.f_3B = -1;
	Var0.f_3C = -1;
	Var0.f_3D = -1;
	Var0.f_3E = -1;
	Global_196990 = { Var0 };
	Global_196990.f_18 = 0;
	Global_196990.f_19 = 0;
	Global_196990.f_11 = 0;
}

void func_675(int iParam0)//Position - 0x1A652
{
	if (iParam0 == 0)
	{
	}
	unk_0xF1381B4DBB31FA25(&Global_19695A);
	func_676();
}

void func_676()//Position - 0x1A66C
{
	struct<54> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_A = -1;
	Var0.f_B = -1;
	Var0.f_C = -1;
	Var0.f_F = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_1A = -1;
	Var0.f_1B = -1;
	Var0.f_1C = -1;
	Var0.f_1D = -1;
	Var0.f_1E = -1;
	Var0.f_1F = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_2A = -1;
	Var0.f_2B = -1;
	Var0.f_2C = -1;
	Var0.f_2D = -1;
	Var0.f_2E = -1;
	Var0.f_2F = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Global_19695A = { Var0 };
	Global_19695A.f_1D = 0;
	Global_19695A.f_1E = 0;
	Global_19695A.f_11 = 0;
}

int func_677(int iParam0, int iParam1)//Position - 0x1A7A0
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = func_562(iParam0, iParam1, 2);
	bVar1 = func_562(iParam0, iParam1, 1);
	bVar2 = func_562(iParam0, iParam1, 0);
	if ((bVar0 && bVar1) && bVar2)
	{
		return 7;
	}
	else if ((bVar1 && bVar0) && !bVar2)
	{
		return 6;
	}
	else if ((bVar2 && bVar0) && !bVar1)
	{
		return 5;
	}
	else if ((bVar2 && bVar1) && !bVar0)
	{
		return 4;
	}
	else if (bVar0)
	{
		return 3;
	}
	else if (bVar1)
	{
		return 2;
	}
	else if (bVar2)
	{
		return 1;
	}
	return 0;
}

int func_678(int iParam0, int iParam1)//Position - 0x1A856
{
	int iVar0;
	
	if (iParam0 == func_63())
	{
		return 0;
	}
	if (func_557(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_18402B[iParam0 /*770*/].f_111.f_A8[iVar0 /*12*/] == iParam1)
			{
				return Global_18402B[iParam0 /*770*/].f_111.f_A8[iVar0 /*12*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_679(int iParam0, bool bParam1, bool bParam2)//Position - 0x1A8B5
{
	int iVar0;
	int iVar1;
	
	if (func_384(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_40001.f_42AE;
		}
		else if (!bParam2)
		{
			iVar0 = Global_40001.f_42AD;
		}
		else
		{
			iVar0 = Global_40001.f_429B;
		}
		iVar1 = 19;
	}
	else if (func_383(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_210(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_40001.f_429A;
			iVar1 = 20;
		}
	}
	else if (func_304(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_40001.f_42AE;
		}
		else if (!bParam2)
		{
			iVar0 = Global_40001.f_42AD;
		}
		else
		{
			iVar0 = Global_40001.f_429B;
		}
		iVar1 = 18;
	}
	if (iVar0 != 0)
	{
		unk_0x0022CBDAA2EA4C4F(func_683(func_452()), func_682(func_452()), func_696(), func_695(), iVar1, iVar0);
	}
	func_681(iVar0);
	func_680(iVar0);
	return iVar0;
}

void func_680(int iParam0)//Position - 0x1A9A8
{
	int iVar0;
	
	iVar0 = func_423(3964, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_1C1 = iVar0;
	func_421(3964, iVar0, -1, 1, 0);
}

void func_681(int iParam0)//Position - 0x1A9F6
{
	int iVar0;
	
	iVar0 = unk_0xB5CEFD608600A09F();
	Global_18C80F[iVar0 /*558*/].f_B.f_1C0 = (Global_18C80F[iVar0 /*558*/].f_B.f_1C0 + iParam0);
	if (Global_18C80F[iVar0 /*558*/].f_B.f_1C0 < -9999)
	{
		Global_18C80F[iVar0 /*558*/].f_B.f_1C0 = 9999;
	}
	else if (Global_18C80F[iVar0 /*558*/].f_B.f_1C0 > 9999)
	{
		Global_18C80F[iVar0 /*558*/].f_B.f_1C0 = 9999;
	}
}

int func_682(int iParam0)//Position - 0x1AA70
{
	if (iParam0 == func_63())
	{
		return -1;
	}
	return Global_18C80F[iParam0 /*558*/].f_B.f_8[1];
}

int func_683(int iParam0)//Position - 0x1AA95
{
	if (iParam0 == func_63())
	{
		return -1;
	}
	return Global_18C80F[iParam0 /*558*/].f_B.f_8[0];
}

int func_684(bool bParam0)//Position - 0x1AABA
{
	if (bParam0)
	{
		return 0;
	}
	if (func_120(unk_0xB5CEFD608600A09F()) || func_139(unk_0xB5CEFD608600A09F()))
	{
		return 1;
	}
	return 0;
}

void func_685(var uParam0)//Position - 0x1AAE9
{
	unk_0x316DB59CD14C1774(&Global_196A5F);
	func_686();
}

void func_686()//Position - 0x1AAFD
{
	struct<34> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_A = -1;
	Var0.f_B = -1;
	Var0.f_C = -1;
	Var0.f_D = -1;
	Var0.f_E = -1;
	Var0.f_F = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_1A = -1;
	Var0.f_1B = -1;
	Var0.f_1D = -1;
	Var0.f_1E = -1;
	Var0.f_1F = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Global_196A5F = { Var0 };
}

int func_687(int iParam0)//Position - 0x1ABD8
{
	if (iParam0 != func_63())
	{
		return Global_18402B[iParam0 /*770*/].f_111.f_133 != 0;
	}
	return 0;
}

int func_688(int iParam0)//Position - 0x1ABFE
{
	return Global_18C80F[iParam0 /*558*/].f_B.f_13;
}

int func_689()//Position - 0x1AC13
{
	int iVar0;
	
	if (func_448())
	{
		return 4;
	}
	else if (func_435())
	{
		if (func_589(unk_0xB5CEFD608600A09F()))
		{
			return 8;
		}
		return 6;
	}
	if (func_237(1))
	{
		iVar0 = func_656(unk_0xB5CEFD608600A09F());
		if (iVar0 == -1)
		{
			iVar0 = 5;
		}
		return iVar0;
	}
	else if (func_450(1))
	{
		if (func_589(func_452()))
		{
			return 9;
		}
		return 7;
	}
	return -2;
}

int func_690(bool bParam0)//Position - 0x1AC86
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_691(bool bParam0)//Position - 0x1AC98
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = -1;
	if (bParam0)
	{
		iVar0 = func_171(unk_0xB5CEFD608600A09F());
	}
	else
	{
		iVar0 = func_101(unk_0xB5CEFD608600A09F());
	}
	if (iVar0 != -1)
	{
	}
	switch (iVar0)
	{
		case 236:
			iVar2 = func_694(unk_0xB5CEFD608600A09F());
			iVar1 = iVar2;
			break;
		
		case 237:
			iVar2 = func_693(unk_0xB5CEFD608600A09F());
			if (func_412(func_413(unk_0xB5CEFD608600A09F())))
			{
				iVar1 = 100;
			}
			else
			{
				iVar1 = 200;
			}
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 250:
			iVar2 = func_693(unk_0xB5CEFD608600A09F());
			iVar1 = 300;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 238:
			iVar2 = func_692(unk_0xB5CEFD608600A09F());
			iVar1 = 400;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 249:
			iVar2 = func_692(unk_0xB5CEFD608600A09F());
			iVar1 = 500;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 239:
			iVar1 = 600;
			break;
		
		case 240:
			iVar1 = 700;
			break;
		
		case 241:
			iVar1 = 800;
			break;
		
		case 242:
			iVar1 = 900;
			break;
		
		case 244:
			iVar1 = 1100;
			break;
		
		case 248:
			iVar1 = 1200;
			break;
	}
	return iVar1;
}

int func_692(int iParam0)//Position - 0x1ADD0
{
	if (func_101(unk_0xB5CEFD608600A09F()) == 238 || func_101(unk_0xB5CEFD608600A09F()) == 249)
	{
		return Global_18C80F[iParam0 /*558*/].f_B.f_1C9;
	}
	return -1;
}

int func_693(int iParam0)//Position - 0x1AE09
{
	if (func_101(unk_0xB5CEFD608600A09F()) == 237 || func_101(unk_0xB5CEFD608600A09F()) == 250)
	{
		return Global_18C80F[iParam0 /*558*/].f_B.f_1C8;
	}
	return -1;
}

int func_694(int iParam0)//Position - 0x1AE42
{
	if (func_171(iParam0) == 236)
	{
		return Global_18C80F[iParam0 /*558*/].f_B.f_1C7;
	}
	return -1;
}

int func_695()//Position - 0x1AE67
{
	if (Global_196948.f_3 != 0)
	{
		return Global_196948.f_3;
	}
	return -1;
}

int func_696()//Position - 0x1AE83
{
	if (Global_196948.f_2 != 0)
	{
		return Global_196948.f_2;
	}
	return -1;
}

int func_697(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x1AE9F
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_63();
	iVar1 = func_63();
	iVar2 = func_63();
	return func_698(iParam0, sParam1, sParam2, sParam3, iParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

int func_698(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)//Position - 0x1AEDA
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_10 = 1;
	Var0.f_47 = 1;
	Var0.f_48 = 2;
	Var0.f_4F = -1;
	func_361(uParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = uParam10;
	Var0.f_5 = uParam11;
	Var0.f_11 = iParam5;
	Var0.f_12 = iParam6;
	Var0.f_13 = iParam7;
	StringCopy(&(Var0.f_19), sParam3, 64);
	StringCopy(&(Var0.f_39), sParam8, 16);
	Var0.f_49 = uParam4;
	Var0.f_47 = uParam4;
	Var0.f_6 = uParam13;
	Var0.f_48 = uParam12;
	if (iParam14 != 2)
	{
		Var0.f_47 = iParam14;
	}
	unk_0xF0059F27F7BB6680(&(Var0.f_45), 2);
	return func_332(&Var0);
}

int func_699(int iParam0)//Position - 0x1AF8E
{
	int iVar0;
	
	iVar0 = func_183(iParam0);
	if (iVar0 != -1)
	{
		return func_181(iVar0);
	}
	return 1;
}

char* func_700(int iParam0)//Position - 0x1AFAE
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		sVar0 = func_403(&(Global_18C80F[iParam0 /*558*/].f_B.f_63));
		return sVar0;
	}
	if (Global_18C80F[iParam0 /*558*/].f_B.f_73 != Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_73)
	{
		sVar0 = func_404(iParam0, 0);
		return sVar0;
	}
	if (((func_105(iParam0, 28) || func_105(unk_0xB5CEFD608600A09F(), 28)) || func_407(iParam0)) && !func_406(iParam0))
	{
		return func_404(iParam0, 0);
	}
	iVar1 = func_64(iParam0);
	if (iVar1 != func_63())
	{
		if (iVar1 != unk_0xB5CEFD608600A09F())
		{
			if (!unk_0xF49912B78E2591B6() && !unk_0x7A3896EC51DA2E5E(0, -1, 1))
			{
				return func_404(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_63())
	{
		sVar0 = func_403(&(Global_18C80F[iVar1 /*558*/].f_B.f_63));
		if (unk_0xF1734B55490E9045(sVar0))
		{
			return func_404(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

void func_701()//Position - 0x1B0B3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!func_847() && !func_285())
	{
		return;
	}
	if (!func_362())
	{
		return;
	}
	iVar0 = unk_0xB5CEFD608600A09F();
	if (func_17(unk_0xB5CEFD608600A09F(), 0))
	{
		iVar0 = Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_280;
	}
	iVar1 = func_130(iVar0);
	if (iVar1 < 3)
	{
		return;
	}
	if (func_8(&(Local_105.f_34F)))
	{
		iVar2 = (func_10() - func_715(&(Local_105.f_34F), 0, 0));
		iVar3 = (func_714() - Local_105.f_73);
		func_712(iVar2);
		if (iVar2 > 30000)
		{
			func_702(iVar3, "HUNT_HUD", iVar2, 1, "GB_WORK_END");
		}
		else if (iVar2 > 0)
		{
			func_702(iVar3, "HUNT_HUD", iVar2, 6, "GB_WORK_END");
		}
		else
		{
			func_702(iVar3, "HUNT_HUD", 0, 6, "GB_WORK_END");
		}
	}
}

void func_702(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4)//Position - 0x1B183
{
	char* sVar0;
	
	if (func_710(0) == 0)
	{
		return;
	}
	func_709();
	func_706(iParam0, sParam1, -1, 1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
	sVar0 = "HUD_COUNTDOWN";
	if (!func_492(sParam4))
	{
		sVar0 = sParam4;
	}
	func_703(iParam2, sVar0, 0, 0, -1, 0, 3, 0, iParam3, 0, 0, 0, iParam3, 0, 0, 0, 0);
}

void func_703(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, int iParam10, int iParam11, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x1B1E8
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_705(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_14D262.f_1 = 1;
		func_704(7, iVar0);
		Global_14D262.f_1124[iVar0] = uParam0;
		StringCopy(&(Global_14D262.f_1124.f_B[iVar0 /*16*/]), sParam1, 64);
		Global_14D262.f_1124.f_AC[iVar0] = iParam2;
		Global_14D262.f_1124.f_D8[iVar0] = iParam3;
		Global_14D262.f_1124.f_B7[iVar0] = iParam4;
		Global_14D262.f_1124.f_C2[iVar0] = iParam5;
		Global_14D262.f_1124.f_F9[iVar0] = iParam6;
		Global_14D262.f_1124.f_104[iVar0] = iParam7;
		Global_14D262.f_1124.f_CD[iVar0] = uParam8;
		Global_14D262.f_1124.f_13A[iVar0] = iParam9;
		Global_14D262.f_1124.f_145[iVar0] = iParam10;
		Global_14D262.f_1124.f_165[iVar0] = iParam11;
		Global_14D262.f_1124.f_EE[iVar0] = uParam12;
		Global_14D262.f_1124.f_10F[iVar0] = iParam13;
		Global_14D262.f_1124.f_170[iVar0] = iParam14;
		Global_14D262.f_1124.f_17B[iVar0] = iParam15;
		Global_14D262.f_1124.f_186[iVar0] = iParam16;
	}
}

void func_704(int iParam0, int iParam1)//Position - 0x1B336
{
	unk_0xF0059F27F7BB6680(&(Global_14D262.f_17E7[iParam0]), iParam1);
}

bool func_705(int iParam0, int iParam1)//Position - 0x1B34F
{
	return unk_0xFA30DFD0084E92FE(Global_14D262.f_17E7[iParam0], iParam1);
}

void func_706(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24)//Position - 0x1B368
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_705(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_14D262.f_1 = 1;
		func_704(6, iVar0);
		Global_14D262.f_EBA[iVar0] = iParam0;
		StringCopy(&(Global_14D262.f_EBA.f_B[iVar0 /*16*/]), sParam1, 64);
		Global_14D262.f_EBA.f_B7[iVar0] = iParam3;
		Global_14D262.f_EBA.f_AC[iVar0] = iParam2;
		Global_14D262.f_EBA.f_104[iVar0] = iParam4;
		Global_14D262.f_EBA.f_10F[iVar0] = iParam5;
		StringCopy(&(Global_14D262.f_EBA.f_11A[iVar0 /*16*/]), sParam6, 64);
		Global_14D262.f_EBA.f_1BB[iVar0] = iParam7;
		Global_14D262.f_EBA.f_1C6[iVar0] = iParam8;
		Global_14D262.f_EBA.f_1F1[iVar0] = iParam9;
		Global_14D262.f_EBA.f_1FC[iVar0] = iParam10;
		Global_14D262.f_EBA.f_CD[iVar0] = iParam11;
		Global_14D262.f_EBA.f_D8[iVar0] = iParam12;
		Global_14D262.f_EBA.f_E3[iVar0] = iParam13;
		Global_14D262.f_EBA.f_EE[iVar0] = iParam14;
		Global_14D262.f_EBA.f_F9[iVar0] = iParam15;
		Global_14D262.f_EBA.f_207[iVar0] = iParam16;
		Global_14D262.f_EBA.f_212[iVar0] = iParam17;
		Global_14D262.f_EBA.f_21D[iVar0] = iParam18;
		Global_14D262.f_EBA.f_228[iVar0] = iParam19;
		Global_14D262.f_EBA.f_233[iVar0] = iParam20;
		Global_14D262.f_EBA.f_23E[iVar0] = iParam21;
		Global_14D262.f_EBA.f_249[iVar0] = iParam22;
		Global_14D262.f_EBA.f_254[iVar0] = iParam23;
		Global_14D262.f_EBA.f_25F[iVar0] = iParam24;
		if (iParam15 == 5 && func_708())
		{
			Global_14D262.f_440 = 1;
		}
		if (unk_0x8ACB0C3FACC09467())
		{
			iVar2 = 0;
			unk_0x1BBB0A5225346008(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_14D262.f_444 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_14D262.f_443 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_14D262.f_440 = 1;
			}
			if (func_707())
			{
				Global_14D262.f_444 = 1;
			}
		}
	}
}

int func_707()//Position - 0x1B5CA
{
	int iVar0;
	var uVar1;
	
	if (unk_0x8ACB0C3FACC09467())
	{
		unk_0x1BBB0A5225346008(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_708()//Position - 0x1B5EE
{
	if (((unk_0x83D607D7994DEF3A() == 8 || unk_0x83D607D7994DEF3A() == 9) || unk_0x83D607D7994DEF3A() == 10) || unk_0x83D607D7994DEF3A() == 12)
	{
		return 1;
	}
	return 0;
}

void func_709()//Position - 0x1B62C
{
	unk_0x4E0EC60D119222B1(8);
	unk_0x4E0EC60D119222B1(9);
	unk_0x4E0EC60D119222B1(6);
	unk_0x4E0EC60D119222B1(7);
	Global_258667 = 1;
}

int func_710(bool bParam0)//Position - 0x1B64F
{
	if (func_711())
	{
		return 0;
	}
	if (func_268())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_948(unk_0xB5CEFD608600A09F(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_711()//Position - 0x1B686
{
	return unk_0xFA30DFD0084E92FE(Global_240006, 12);
}

void func_712(int iParam0)//Position - 0x1B698
{
	if (unk_0xFA30DFD0084E92FE(iLocal_108, 8))
	{
		func_713();
		return;
	}
	if (!unk_0xFA30DFD0084E92FE(iLocal_108, 15))
	{
		if (iParam0 <= 35000)
		{
			if (unk_0x3857DADBD6EC8A54("APT_PRE_COUNTDOWN_STOP"))
			{
				unk_0xF0059F27F7BB6680(&iLocal_108, 15);
				unk_0xF0059F27F7BB6680(&iLocal_108, 9);
				unk_0x9B90420B04C07704("AllowScoreAndRadio", 1);
				unk_0x1549CEF3D921CF97(0);
				unk_0x9B90420B04C07704("WantedMusicDisabled", 1);
			}
		}
	}
	if (unk_0xFA30DFD0084E92FE(iLocal_108, 9))
	{
		if (iParam0 <= 30000)
		{
			if (!unk_0xFA30DFD0084E92FE(iLocal_108, 11))
			{
				if (unk_0x6FED2D1AA2EBF334("APT_COUNTDOWN_30S_KILL"))
				{
					unk_0xF0059F27F7BB6680(&iLocal_108, 11);
				}
			}
			else
			{
				unk_0xFA30DFD0084E92FE(iLocal_108, 11);
				if (!unk_0xFA30DFD0084E92FE(iLocal_108, 14))
				{
					if (unk_0x3857DADBD6EC8A54("APT_COUNTDOWN_30S"))
					{
						unk_0xF0059F27F7BB6680(&iLocal_108, 14);
					}
				}
			}
			if (unk_0xFA30DFD0084E92FE(iLocal_108, 14))
			{
				if (iParam0 <= 27000)
				{
					if (!unk_0xFA30DFD0084E92FE(iLocal_108, 12))
					{
						unk_0x1549CEF3D921CF97(1);
						unk_0x9B90420B04C07704("AllowScoreAndRadio", 0);
						unk_0xF0059F27F7BB6680(&iLocal_108, 12);
					}
					if (iParam0 <= 500)
					{
						if (unk_0x3857DADBD6EC8A54("APT_FADE_IN_RADIO"))
						{
							unk_0x748798F6C2AB96B7("APT_COUNTDOWN_30S_KILL");
							unk_0x7CB6FD92BE491AD9(&iLocal_108, 9);
						}
					}
				}
			}
		}
	}
}

void func_713()//Position - 0x1B7C9
{
	if (unk_0xFA30DFD0084E92FE(iLocal_108, 8))
	{
		if (unk_0xFA30DFD0084E92FE(iLocal_108, 9))
		{
			if (!unk_0xFA30DFD0084E92FE(iLocal_108, 10))
			{
				if (unk_0xFA30DFD0084E92FE(iLocal_108, 11))
				{
					if (!unk_0xFA30DFD0084E92FE(iLocal_108, 12))
					{
						unk_0x1549CEF3D921CF97(1);
						unk_0x9B90420B04C07704("AllowScoreAndRadio", 0);
						unk_0x9B90420B04C07704("WantedMusicDisabled", 0);
					}
				}
				if (!unk_0xFA30DFD0084E92FE(iLocal_108, 16))
				{
					if (unk_0x3857DADBD6EC8A54("APT_COUNTDOWN_30S_KILL"))
					{
						unk_0xF0059F27F7BB6680(&iLocal_108, 16);
					}
				}
				if (unk_0xFA30DFD0084E92FE(iLocal_108, 16))
				{
					if (!unk_0xFA30DFD0084E92FE(iLocal_108, 13))
					{
						if (unk_0x3857DADBD6EC8A54("APT_FADE_IN_RADIO"))
						{
							unk_0xF0059F27F7BB6680(&iLocal_108, 13);
						}
					}
					if (unk_0xFA30DFD0084E92FE(iLocal_108, 13))
					{
						unk_0xF0059F27F7BB6680(&iLocal_108, 10);
					}
				}
			}
		}
	}
}

int func_714()//Position - 0x1B889
{
	return 4;
}

int func_715(var uParam0, bool bParam1, bool bParam2)//Position - 0x1B892
{
	if (unk_0x7AF0088ABFA713B6() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), *uParam0);
		}
		else
		{
			return unk_0xCCA9497DA4595710(unk_0x1C44CABA911F93F7(), *uParam0);
		}
	}
	return unk_0xCCA9497DA4595710(unk_0x105601648511CC64(), *uParam0);
}

void func_716()//Position - 0x1B8D9
{
	int iVar0;
	struct<8> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	iVar2 = unk_0xB5CEFD608600A09F();
	iVar3 = unk_0x6BAA0516CC970D99();
	if (func_17(unk_0xB5CEFD608600A09F(), 0))
	{
		iVar3 = func_286();
		iVar2 = Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_280;
	}
	iVar4 = func_130(iVar2);
	if (!func_17(unk_0xB5CEFD608600A09F(), 0))
	{
		if (!func_362())
		{
			if (func_733("HUNT_OBJ"))
			{
				func_777();
			}
			if (func_733("HUNT_OBJ1L"))
			{
				func_777();
			}
			if (func_733("HUNT_TOBJ"))
			{
				func_777();
			}
			if (func_733("HUNT_DOBJ"))
			{
				func_777();
			}
			if (func_733("HUNT_DOBJ1L"))
			{
				func_777();
			}
			return;
		}
	}
	else if (!unk_0xFA30DFD0084E92FE(Local_106[iVar3 /*14*/].f_1, 6))
	{
		func_777();
		return;
	}
	if (iVar4 < 3)
	{
		if (func_733("HUNT_OBJ"))
		{
			func_777();
		}
		if (func_733("HUNT_OBJ1L"))
		{
			func_777();
		}
		if (func_733("HUNT_TOBJ"))
		{
			func_777();
		}
		if (func_733("HUNT_DOBJ"))
		{
			func_777();
		}
		if (func_733("HUNT_DOBJ1L"))
		{
			func_777();
		}
		return;
	}
	bVar5 = func_732() == true;
	if (iVar3 == Local_105.f_76)
	{
		if (!bVar5)
		{
			if (!func_733("HUNT_OBJ"))
			{
				func_729("HUNT_OBJ", 0);
			}
		}
		else if (!func_733("HUNT_OBJ1L"))
		{
			func_729("HUNT_OBJ1L", 0);
		}
	}
	else if (func_848() == Local_105.f_76)
	{
		if (!bVar5)
		{
			if (!func_733("HUNT_OBJ"))
			{
				func_729("HUNT_OBJ", 0);
			}
		}
		else if (!func_733("HUNT_OBJ1L"))
		{
			func_729("HUNT_OBJ1L", 0);
		}
	}
	else if (func_285())
	{
		if (Local_105.f_77 > -1)
		{
			if (!bVar5)
			{
				if (!func_733("HUNT_DOBJ"))
				{
					StringCopy(&Var1, func_700(unk_0x3171C34AB3FE6F2E(Local_105.f_77)), 64);
					iVar0 = func_699(unk_0x3171C34AB3FE6F2E(Local_105.f_77));
					func_717("HUNT_DOBJ", &Var1, iVar0, 0);
				}
			}
			else if (!func_733("HUNT_DOBJ1L"))
			{
				StringCopy(&Var1, func_700(unk_0x3171C34AB3FE6F2E(Local_105.f_77)), 64);
				iVar0 = func_699(unk_0x3171C34AB3FE6F2E(Local_105.f_77));
				func_717("HUNT_DOBJ1L", &Var1, iVar0, 0);
			}
		}
	}
}

void func_717(char* sParam0, char* sParam1, int iParam2, bool bParam3)//Position - 0x1BAF8
{
	if (func_718(sParam0, sParam1, bParam3, iParam2))
	{
		Global_140740 = 16;
		Global_140740.f_38 = iParam2;
	}
}

int func_718(char* sParam0, char* sParam1, bool bParam2, var uParam3)//Position - 0x1BB1D
{
	if (unk_0xF1734B55490E9045(sParam0))
	{
		return 0;
	}
	if (unk_0xF5429F058A48A07C(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0xF1734B55490E9045(sParam1))
	{
		return 0;
	}
	if (func_728(sParam0, sParam1) && Global_140740.f_38 == Global_140740.f_3A)
	{
		return 0;
	}
	func_722();
	Global_140740 = 3;
	StringCopy(&(Global_140740.f_1), unk_0x1377080E9B0BD993(), 32);
	Global_140740.f_9 = unk_0x56BEECB328B6D29D(&(Global_140740.f_1));
	StringCopy(&(Global_140740.f_C), sParam0, 16);
	StringCopy(&(Global_140740.f_10), sParam1, 64);
	Global_140740.f_3A = uParam3;
	Global_140740.f_38 = uParam3;
	func_721();
	func_720(bParam2);
	func_719();
	return 1;
}

void func_719()//Position - 0x1BBC7
{
	unk_0xF0059F27F7BB6680(&(Global_140740.f_3B), 1);
}

void func_720(bool bParam0)//Position - 0x1BBDA
{
	if (bParam0)
	{
		unk_0xF0059F27F7BB6680(&(Global_140740.f_3B), 0);
		return;
	}
	unk_0x7CB6FD92BE491AD9(&(Global_140740.f_3B), 0);
}

void func_721()//Position - 0x1BC00
{
	Global_140740.f_A = unk_0x863D0D1A37055D36(unk_0xED678C85A82F0AB9(), 86400000);
	Global_140740.f_B = unk_0xED678C85A82F0AB9();
}

void func_722()//Position - 0x1BC25
{
	func_724();
	func_723(0);
}

void func_723(bool bParam0)//Position - 0x1BC36
{
	bool bVar0;
	
	bVar0 = unk_0x7AF0088ABFA713B6();
	Global_140740 = 20;
	StringCopy(&(Global_140740.f_1), "", 32);
	Global_140740.f_9 = 0;
	if (bVar0)
	{
		Global_140740.f_A = unk_0xED678C85A82F0AB9();
		Global_140740.f_B = unk_0xED678C85A82F0AB9();
	}
	StringCopy(&(Global_140740.f_C), "", 16);
	StringCopy(&(Global_140740.f_10), "", 64);
	StringCopy(&(Global_140740.f_20), "", 64);
	Global_140740.f_34 = 0;
	Global_140740.f_35 = 0;
	Global_140740.f_36 = 0;
	Global_140740.f_37 = -1;
	Global_140740.f_38 = 0;
	Global_140740.f_3B = 0;
	if (bParam0)
	{
		return;
	}
}

void func_724()//Position - 0x1BCC4
{
	if (!func_727())
	{
	}
	if (func_726())
	{
		unk_0x0C2CA00C24C64582(&(Global_140740.f_C));
		func_725();
		unk_0xF633952844D6CF3D();
	}
}

void func_725()//Position - 0x1BCED
{
	switch (Global_140740)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0xAA5C5BF0489E5553(Global_140740.f_34);
			return;
		
		case 2:
			unk_0xAA5C5BF0489E5553(Global_140740.f_34);
			unk_0xAA5C5BF0489E5553(Global_140740.f_35);
			return;
		
		case 3:
			unk_0xC9C304D0AABE1335(&(Global_140740.f_10));
			return;
		
		case 4:
			unk_0xC9C304D0AABE1335(&(Global_140740.f_10));
			unk_0xC9C304D0AABE1335(&(Global_140740.f_20));
			return;
		
		case 5:
			unk_0x607C19B90D297FE2(&(Global_140740.f_10));
			return;
		
		case 6:
			unk_0x449F0674640D94C0(Global_140740.f_38);
			unk_0x607C19B90D297FE2(&(Global_140740.f_10));
			return;
		
		case 7:
			unk_0xC9C304D0AABE1335(&(Global_140740.f_10));
			return;
		
		case 8:
			unk_0x449F0674640D94C0(Global_140740.f_38);
			unk_0xC9C304D0AABE1335(&(Global_140740.f_10));
			return;
		
		case 9:
			unk_0xA5CB8AC295293426(&(Global_140740.f_10));
			return;
		
		case 10:
			unk_0x607C19B90D297FE2(&(Global_140740.f_10));
			unk_0x607C19B90D297FE2(&(Global_140740.f_20));
			return;
		
		case 12:
			unk_0x607C19B90D297FE2(&(Global_140740.f_10));
			unk_0xC9C304D0AABE1335(&(Global_140740.f_20));
			return;
		
		case 13:
			unk_0x449F0674640D94C0(Global_140740.f_38);
			unk_0xC9C304D0AABE1335(&(Global_140740.f_10));
			unk_0x449F0674640D94C0(Global_140740.f_39);
			unk_0xC9C304D0AABE1335(&(Global_140740.f_20));
			return;
		
		case 11:
			unk_0xA5CB8AC295293426(&(Global_140740.f_10));
			return;
		
		case 14:
			unk_0x449F0674640D94C0(Global_140740.f_38);
			unk_0x607C19B90D297FE2(&(Global_140740.f_10));
			unk_0x449F0674640D94C0(Global_140740.f_38);
			unk_0xC9C304D0AABE1335(&(Global_140740.f_20));
			return;
		
		case 15:
			unk_0x449F0674640D94C0(Global_140740.f_38);
			unk_0x607C19B90D297FE2(&(Global_140740.f_10));
			unk_0x449F0674640D94C0(Global_140740.f_39);
			unk_0xC9C304D0AABE1335(&(Global_140740.f_20));
			return;
		
		case 17:
			unk_0x607C19B90D297FE2(&(Global_140740.f_10));
			unk_0x607C19B90D297FE2(&(Global_140740.f_20));
			unk_0x449F0674640D94C0(Global_140740.f_38);
			unk_0xC9C304D0AABE1335(&(Global_140740.f_30));
			return;
		
		case 16:
			unk_0x449F0674640D94C0(Global_140740.f_38);
			unk_0x607C19B90D297FE2(&(Global_140740.f_10));
			return;
		
		case 19:
			unk_0x449F0674640D94C0(Global_140740.f_38);
			unk_0xC9C304D0AABE1335(&(Global_140740.f_10));
			return;
		
		case 18:
			unk_0x607C19B90D297FE2(&(Global_140740.f_10));
			unk_0x449F0674640D94C0(Global_140740.f_38);
			unk_0xC9C304D0AABE1335(&(Global_140740.f_30));
			unk_0x607C19B90D297FE2(&(Global_140740.f_20));
			return;
		
		default:
	}
}

int func_726()//Position - 0x1BF5F
{
	if (Global_140740 == 20)
	{
		return 0;
	}
	return 1;
}

int func_727()//Position - 0x1BF75
{
	if (!func_726())
	{
		return 0;
	}
	unk_0xE2CFC41F8121CE68(&(Global_140740.f_C));
	func_725();
	return unk_0x121EFFA2D57472F2();
}

bool func_728(char* sParam0, char* sParam1)//Position - 0x1BF9B
{
	if (!func_726())
	{
		return 0;
	}
	if (unk_0xF1734B55490E9045(sParam0))
	{
		return 0;
	}
	if (unk_0xF1734B55490E9045(sParam1))
	{
		return 0;
	}
	if (!unk_0x56BEECB328B6D29D(sParam0) == unk_0x56BEECB328B6D29D(&(Global_140740.f_C)))
	{
		return 0;
	}
	return unk_0x56BEECB328B6D29D(sParam1) == unk_0x56BEECB328B6D29D(&(Global_140740.f_10));
}

void func_729(char* sParam0, bool bParam1)//Position - 0x1BFF3
{
	if (unk_0xF1734B55490E9045(sParam0))
	{
		return;
	}
	if (unk_0xF5429F058A48A07C(sParam0) > 23)
	{
		return;
	}
	if (func_730(sParam0))
	{
		return;
	}
	func_722();
	Global_140740 = 0;
	StringCopy(&(Global_140740.f_1), unk_0x1377080E9B0BD993(), 32);
	Global_140740.f_9 = unk_0x56BEECB328B6D29D(&(Global_140740.f_1));
	StringCopy(&(Global_140740.f_C), sParam0, 16);
	func_721();
	func_720(bParam1);
	func_719();
}

bool func_730(char* sParam0)//Position - 0x1C060
{
	if (!func_726())
	{
		return 0;
	}
	if (Global_140740 == 11)
	{
		return func_731(sParam0);
	}
	if (unk_0xF1734B55490E9045(sParam0))
	{
		return 0;
	}
	return unk_0x56BEECB328B6D29D(sParam0) == unk_0x56BEECB328B6D29D(&(Global_140740.f_C));
}

bool func_731(char* sParam0)//Position - 0x1C0A4
{
	if (!func_726())
	{
		return 0;
	}
	if (unk_0xF1734B55490E9045(sParam0))
	{
		return 0;
	}
	return unk_0x56BEECB328B6D29D(sParam0) == unk_0x56BEECB328B6D29D(&(Global_140740.f_10));
}

int func_732()//Position - 0x1C0D6
{
	return (4 - Local_105.f_73);
}

int func_733(char* sParam0)//Position - 0x1C0E4
{
	if (unk_0xF1734B55490E9045(sParam0))
	{
		return 0;
	}
	if (!func_726())
	{
		return 0;
	}
	if (Global_140740 == 11)
	{
		if (unk_0xF5429F058A48A07C(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (unk_0xF5429F058A48A07C(sParam0) > 23)
	{
		return 0;
	}
	return func_730(sParam0);
}

void func_734()//Position - 0x1C135
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_847() && !func_285())
	{
		return;
	}
	if (!func_362())
	{
		return;
	}
	iVar1 = func_63();
	iVar2 = -1;
	if (!func_17(unk_0xB5CEFD608600A09F(), 0))
	{
		iVar1 = unk_0xB5CEFD608600A09F();
		iVar2 = unk_0x6BAA0516CC970D99();
	}
	else
	{
		iVar2 = func_286();
		iVar1 = Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_280;
	}
	if (iVar2 == -1)
	{
		return;
	}
	if (!unk_0xFA30DFD0084E92FE(iLocal_107, 1))
	{
		iVar0 = func_130(iVar1);
		if (iVar0 >= 2)
		{
			if (iVar2 == Local_105.f_76 || func_848() == Local_105.f_76)
			{
				if (func_760(82, "HUNT_TXT1", 2, 0, 0, 0, 0, 1, 0, 1))
				{
					func_331(86, "BIGM_HUNTN", "BIGM_HUNTBD", 1, -1, 2, 1);
					if (iVar2 == unk_0x6BAA0516CC970D99())
					{
						func_759(1);
						func_735(-1, 0, 0, -1, 0, 0);
					}
				}
			}
			else
			{
				if (iVar2 == unk_0x6BAA0516CC970D99())
				{
					func_735(-1, 0, 0, -1, 0, 0);
				}
				func_331(86, "BIGM_HUNTN", "BIGM_HUNTPR", 1, -1, 2, 1);
			}
		}
		unk_0xF0059F27F7BB6680(&iLocal_107, 1);
	}
}

void func_735(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x1C248
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (bParam5)
	{
		iVar0 = func_171(unk_0xB5CEFD608600A09F());
		Global_196A5F = iVar0;
		Global_196A5F.f_1 = iParam0;
		if (func_452() != func_63())
		{
			Global_196A5F.f_2 = func_683(func_452());
			Global_196A5F.f_3 = func_682(func_452());
		}
		if (func_240() != func_63())
		{
			func_451(func_240(), &(Global_196A5F.f_2), &(Global_196A5F.f_3));
		}
		Global_196A5F.f_7 = unk_0xB99C193A32DE341D();
		Global_196A5F.f_1C = func_687(unk_0xB5CEFD608600A09F());
		Global_196A5F.f_D = 0;
		Global_196A5F.f_E = 0;
		if (func_179(unk_0xB5CEFD608600A09F(), 1))
		{
			Global_196A5F.f_17 = func_690(func_237(1));
		}
	}
	else
	{
		iVar0 = func_101(unk_0xB5CEFD608600A09F());
	}
	if (iParam2 || func_304(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
			iVar0 = iParam3;
		}
		Global_19695A = iVar0;
		if (func_384(iVar0))
		{
			Global_19695A.f_1 = 4;
		}
		else if (func_383(iVar0))
		{
			Global_19695A.f_1 = 5;
		}
		else if (func_210(iVar0, 0))
		{
			Global_19695A.f_1 = 2;
			if (func_417(iVar0))
			{
				Global_19695A.f_1 = 3;
			}
		}
		else
		{
			Global_19695A.f_1 = 1;
		}
		if (func_452() != func_63())
		{
			Global_19695A.f_4 = func_683(func_452());
			Global_19695A.f_5 = func_682(func_452());
		}
		if (func_240() != func_63())
		{
			func_451(func_240(), &(Global_19695A.f_6), &(Global_19695A.f_7));
		}
		Global_19695A.f_9 = unk_0xB99C193A32DE341D();
		if (iVar0 == 148 || iVar0 == 179)
		{
			Global_19695A.f_1B = 1;
			Global_19695A.f_1C = 1;
		}
		if (iParam0 != -1)
		{
			Global_19695A.f_1A = iParam0;
		}
		if (iParam1 != 0)
		{
			Global_19695A.f_28 = func_445(iParam1);
			Global_19695A.f_29 = func_758();
			Global_19695A.f_2A = func_565(unk_0xB5CEFD608600A09F(), iParam1);
			Global_19695A.f_2C = func_678(unk_0xB5CEFD608600A09F(), iParam1);
		}
		if (!func_435() || iVar0 != 192)
		{
			Global_19695A.f_35 = 0;
		}
	}
	else if (func_381(iVar0))
	{
		if (iVar0 == 225 || iVar0 == 226)
		{
			Global_1969CF = iParam0 + 1;
		}
		else if (iVar0 == 227)
		{
			Global_1969CF = iParam0 + 1;
		}
		else
		{
			Global_1969CF = func_757(unk_0xB5CEFD608600A09F());
		}
		switch (iVar0)
		{
			case 225:
				if (func_414(unk_0xB5CEFD608600A09F()) == 0)
				{
					Global_1969CF.f_1 = 0;
				}
				else
				{
					Global_1969CF.f_1 = 1;
				}
				break;
			
			case 226:
				Global_1969CF.f_1 = 2;
				break;
			
			case 227:
				Global_1969CF.f_1 = 3;
				break;
		}
		Global_1969CF.f_15 = 1;
		Global_1969CF.f_16 = 1;
		if (func_452() != func_63())
		{
			Global_1969CF.f_4 = func_683(func_452());
			Global_1969CF.f_5 = func_682(func_452());
		}
		if (func_240() != func_63())
		{
			func_451(func_240(), &(Global_1969CF.f_4), &(Global_1969CF.f_5));
		}
		Global_1969CF.f_8 = unk_0xB99C193A32DE341D();
		if (iParam0 != -1)
		{
			Global_1969CF.f_14 = iParam0;
		}
	}
	else if (func_309(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
		}
		Global_196990 = iVar0;
		Global_19695A.f_1 = 1;
		if (func_452() != func_63())
		{
			Global_196990.f_4 = func_683(func_452());
			Global_196990.f_5 = func_682(func_452());
		}
		if (func_240() != func_63())
		{
			func_451(func_240(), &(Global_196990.f_6), &(Global_196990.f_7));
		}
		Global_196990.f_9 = unk_0xB99C193A32DE341D();
		if (iParam0 != -1)
		{
			Global_196990.f_15 = iParam0;
		}
	}
	else if (func_379(iVar0))
	{
		Global_1969FB = iVar0;
		Global_1969FB.f_1 = iParam0;
		Global_1969FB.f_15 = 1;
		Global_1969FB.f_16 = 1;
		if (func_452() != func_63())
		{
			Global_1969FB.f_4 = func_683(func_452());
			Global_1969FB.f_5 = func_682(func_452());
		}
		if (func_240() != func_63())
		{
			func_451(func_240(), &(Global_1969FB.f_4), &(Global_1969FB.f_5));
		}
		Global_1969FB.f_8 = unk_0xB99C193A32DE341D();
		if (iParam0 != -1)
		{
			Global_1969FB.f_14 = iParam0;
		}
		Global_1969FB.f_1B = func_671(func_19(), 5);
		Global_1969FB.f_1C = func_690(func_543(unk_0xB5CEFD608600A09F()));
		Global_1969FB.f_1D = func_423(6103, -1, 0);
		Global_1969FB.f_1E = func_423(6099, -1, 0);
		Global_1969FB.f_1F = func_423(6100, -1, 0);
		Global_1969FB.f_20 = func_423(6102, -1, 0);
		Global_1969FB.f_21 = func_423(6101, -1, 0);
		Global_1969FB.f_22 = func_423(6104, -1, 0);
		Global_1969FB.f_7 = func_689();
		Global_1969FB.f_33 = func_690(bParam4);
	}
	else if (func_377(iVar0))
	{
		Global_196A31 = iVar0;
		Global_196A31.f_1 = iParam0;
		Global_196A31.f_15 = 1;
		Global_196A31.f_16 = 1;
		if (func_452() != func_63())
		{
			Global_196A31.f_4 = func_683(func_452());
			Global_196A31.f_5 = func_682(func_452());
		}
		if (func_240() != func_63())
		{
			func_451(func_240(), &(Global_196A31.f_4), &(Global_196A31.f_5));
		}
		Global_196A31.f_8 = unk_0xB99C193A32DE341D();
		if (iParam0 != -1)
		{
			Global_196A31.f_14 = iParam0;
		}
		Global_196A31.f_18 = func_423(6153, -1, 0);
		Global_196A31.f_19 = func_423(6158, -1, 0);
		Global_196A31.f_1A = func_423(6159, -1, 0);
		Global_196A31.f_1B = func_690((((func_635() || func_634()) || func_633()) || func_632(unk_0xB5CEFD608600A09F())));
		Global_196A31.f_1C = func_423(6160, -1, 0);
		Global_196A31.f_1D = func_690(func_631());
		Global_196A31.f_1F = 0;
		Global_196A31.f_1E = 0;
		Global_196A31.f_20 = 0;
		Global_196A31.f_21 = 0;
		Global_196A31.f_22 = 0;
		Global_196A31.f_10 = 0;
		Global_196A31.f_7 = func_689();
	}
	else if (((((((((iVar0 == 250 || iVar0 == 238) || iVar0 == 242) || iVar0 == 244) || iVar0 == 248) || iVar0 == 241) || iVar0 == 239) || iVar0 == 240) || iVar0 == 249) || (iVar0 == 237 && func_412(func_413(unk_0xB5CEFD608600A09F()))))
	{
		Global_196AB6 = iVar0;
		Global_196AB6.f_1 = iParam0;
		Global_196AB6.f_15 = 1;
		Global_196AB6.f_16 = 1;
		Global_196AB6.f_7 = func_689();
		if (func_452() != func_63())
		{
			Global_196AB6.f_4 = func_683(func_452());
			Global_196AB6.f_5 = func_682(func_452());
		}
		if (func_240() != func_63())
		{
			func_451(func_240(), &(Global_196AB6.f_4), &(Global_196AB6.f_5));
		}
		if (func_452() != -1)
		{
			Global_196AB6.f_11 = func_628(func_452());
		}
		Global_196AB6.f_8 = unk_0xB99C193A32DE341D();
		Global_196AB6.f_1C = func_687(unk_0xB5CEFD608600A09F());
		Global_196AB6.f_10 = 0;
		Global_196AB6.f_18 = 0;
		Global_196AB6.f_17 = 0;
		if (func_179(unk_0xB5CEFD608600A09F(), 1))
		{
			Global_196AB6.f_21 = func_690(func_237(1));
		}
	}
	else if (iVar0 == 237)
	{
		Global_196A81 = iVar0;
		Global_196A81.f_1 = iParam0;
		Global_196A81.f_15 = 1;
		Global_196A81.f_16 = 1;
		Global_196A81.f_7 = func_689();
		Global_196A81.f_18 = 0;
		Global_196A81.f_17 = 0;
		Global_196A81.f_10 = 0;
		if (func_452() != func_63())
		{
			Global_196A81.f_4 = func_683(func_452());
			Global_196A81.f_5 = func_682(func_452());
		}
		Global_196A81.f_1C = func_687(unk_0xB5CEFD608600A09F());
		if (Global_196A81.f_1C)
		{
			Global_196A81.f_1D = func_622(unk_0xB5CEFD608600A09F());
		}
		else
		{
			Global_196A81.f_1D = 0;
		}
		Global_196A81.f_1E = func_606(unk_0xB5CEFD608600A09F(), 4, -1);
		Global_196A81.f_1F = func_625(unk_0xB5CEFD608600A09F());
		Global_196A81.f_20 = func_690(func_605(unk_0xB5CEFD608600A09F()));
		Global_196A81.f_21 = func_690(func_604(unk_0xB5CEFD608600A09F()));
		Global_196A81.f_22 = func_690(func_603(unk_0xB5CEFD608600A09F()));
		Global_196A81.f_23 = func_690(func_602(unk_0xB5CEFD608600A09F()));
		Global_196A81.f_24 = func_601(unk_0xB5CEFD608600A09F());
		Global_196A81.f_25 = func_600(unk_0xB5CEFD608600A09F());
		Global_196A81.f_27 = func_599(unk_0xB5CEFD608600A09F());
		if (func_179(unk_0xB5CEFD608600A09F(), 1))
		{
			Global_196A81.f_29 = func_690(func_237(1));
		}
		if (func_240() != func_63())
		{
			func_451(func_240(), &(Global_196A81.f_4), &(Global_196A81.f_5));
		}
		Global_196A81.f_8 = unk_0xB99C193A32DE341D();
		Global_196A81.f_1C = func_687(unk_0xB5CEFD608600A09F());
	}
	else
	{
		if (func_452() != func_63())
		{
			Global_196948 = func_683(func_452());
			Global_196948.f_1 = func_682(func_452());
		}
		Global_196948.f_5 = unk_0xB99C193A32DE341D();
		Global_196948.f_D = func_756();
		Global_196948.f_F = 0;
		if (func_450(1))
		{
			if (func_240() == func_452())
			{
				Global_196948.f_F = 1;
			}
		}
		if (func_755())
		{
			Global_1969CF.f_1C = 1;
		}
		if ((((func_754() || func_753()) || func_752()) || func_751()) || func_749())
		{
			Global_1969CF.f_1E = 1;
		}
		if (func_747(func_748(-1881846085)))
		{
			Global_1969CF.f_20 = 1;
		}
		if (func_739(func_746(joaat("caddy"))))
		{
			Global_1969CF.f_1F = 1;
		}
		if (func_670(unk_0xB5CEFD608600A09F()) || func_669(unk_0xB5CEFD608600A09F()))
		{
			Global_1969CF.f_1D = 1;
		}
		if (func_666(unk_0xB5CEFD608600A09F()))
		{
			Global_1969CF.f_21 = 1;
			Global_1969CF.f_22 = 1;
		}
		if (func_667(unk_0xB5CEFD608600A09F()))
		{
			Global_1969CF.f_24 = 1;
		}
		if (func_664(0, unk_0xB5CEFD608600A09F()) == 1)
		{
			Global_1969CF.f_23 = 1;
		}
		if (func_738(unk_0xB5CEFD608600A09F(), 3, &uVar1))
		{
			Global_1969CF.f_25 = 1;
		}
		if (func_738(unk_0xB5CEFD608600A09F(), 7, &uVar1))
		{
			Global_1969CF.f_26 = 1;
		}
		if (func_737(unk_0xB5CEFD608600A09F()))
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = func_736(unk_0xB5CEFD608600A09F(), iVar2);
				if (func_562(unk_0xB5CEFD608600A09F(), iVar3, 0))
				{
					Global_1969CF.f_27 = 1;
				}
				if (func_562(unk_0xB5CEFD608600A09F(), iVar3, 2))
				{
					Global_1969CF.f_28 = 1;
				}
				if (func_562(unk_0xB5CEFD608600A09F(), iVar3, 1))
				{
					Global_1969CF.f_29 = 1;
				}
				iVar2++;
			}
		}
	}
}

int func_736(int iParam0, int iParam1)//Position - 0x1CCA7
{
	var uVar0;
	
	if (iParam0 == func_63())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_557(Global_18402B[iParam0 /*770*/].f_111.f_A8[iParam1 /*12*/]))
	{
		uVar0 = Global_18402B[iParam0 /*770*/].f_111.f_A8[iParam1 /*12*/];
	}
	return uVar0;
}

int func_737(int iParam0)//Position - 0x1CD00
{
	int iVar0;
	
	if (iParam0 == func_63())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_18402B[iParam0 /*770*/].f_111.f_A8[iVar0 /*12*/] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_738(int iParam0, int iParam1, var uParam2)//Position - 0x1CD42
{
	int iVar0;
	
	if (iParam0 != func_63())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam1 == func_664(iVar0, iParam0))
			{
				*uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_739(int iParam0)//Position - 0x1CD7C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_744(11, -1) == 0)
	{
		return 0;
	}
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = (iParam0 + func_649(11));
		func_648(iVar1, &iVar0, 1);
		iVar2 = func_744(func_741(iVar1), -1);
		if (iVar2 > 0)
		{
		}
		else if (iVar0 >= 0)
		{
		}
		if (iVar0 >= 0)
		{
			iVar3 = func_423(func_740(4, iVar0), -1, 0);
			if (iVar2 > 0)
			{
			}
			if (iVar3 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_740(int iParam0, int iParam1)//Position - 0x1CDF8
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1629;
				
				case 1:
					return 1636;
				
				case 2:
					return 1643;
				
				case 3:
					return 1650;
				
				case 4:
					return 1657;
				
				case 5:
					return 1664;
				
				case 6:
					return 1671;
				
				case 7:
					return 1678;
				
				case 8:
					return 1685;
				
				case 9:
					return 1692;
				
				case 10:
					return 1699;
				
				case 11:
					return 1705;
				
				case 12:
					return 1711;
				
				case 13:
					return 1717;
				
				case 14:
					return 1795;
				
				case 15:
					return 1802;
				
				case 16:
					return 1809;
				
				case 17:
					return 1816;
				
				case 18:
					return 1823;
				
				case 19:
					return 1830;
				
				case 20:
					return 1837;
				
				case 21:
					return 1844;
				
				case 22:
					return 1851;
				
				case 23:
					return 1858;
				
				case 24:
					return 1864;
				
				case 25:
					return 1870;
				
				case 26:
					return 2165;
				
				case 27:
					return 2172;
				
				case 28:
					return 2179;
				
				case 29:
					return 2186;
				
				case 30:
					return 2193;
				
				case 31:
					return 2200;
				
				case 32:
					return 2207;
				
				case 33:
					return 2214;
				
				case 34:
					return 2221;
				
				case 35:
					return 2228;
				
				case 36:
					return 2235;
				
				case 37:
					return 2241;
				
				case 38:
					return 2247;
				
				case 39:
					return 2824;
				
				case 40:
					return 2831;
				
				case 41:
					return 2838;
				
				case 42:
					return 2845;
				
				case 43:
					return 2852;
				
				case 44:
					return 2859;
				
				case 45:
					return 2866;
				
				case 46:
					return 2873;
				
				case 47:
					return 2880;
				
				case 48:
					return 2887;
				
				case 49:
					return 2894;
				
				case 50:
					return 2900;
				
				case 51:
					return 2906;
				
				case 52:
					return 2948;
				
				case 53:
					return 2955;
				
				case 54:
					return 2962;
				
				case 55:
					return 2969;
				
				case 56:
					return 2976;
				
				case 57:
					return 2983;
				
				case 58:
					return 2990;
				
				case 59:
					return 2997;
				
				case 60:
					return 3004;
				
				case 61:
					return 3011;
				
				case 62:
					return 3018;
				
				case 63:
					return 3024;
				
				case 64:
					return 3030;
				
				case 65:
					return 3231;
				
				case 66:
					return 3239;
				
				case 67:
					return 3247;
				
				case 68:
					return 3255;
				
				case 69:
					return 3263;
				
				case 70:
					return 3271;
				
				case 71:
					return 3279;
				
				case 72:
					return 3287;
				
				case 73:
					return 3295;
				
				case 74:
					return 3303;
				
				case 75:
					return 3311;
				
				case 76:
					return 3319;
				
				case 77:
					return 3327;
				
				case 78:
					return 3335;
				
				case 79:
					return 3343;
				
				case 80:
					return 3351;
				
				case 81:
					return 3359;
				
				case 82:
					return 3367;
				
				case 83:
					return 3375;
				
				case 84:
					return 3383;
				
				case 85:
					return 3391;
				
				case 86:
					return 3398;
				
				case 87:
					return 3405;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4027;
				
				case 89:
					return 4035;
				
				case 90:
					return 4043;
				
				case 91:
					return 4051;
				
				case 92:
					return 4059;
				
				case 93:
					return 4067;
				
				case 94:
					return 4075;
				
				case 95:
					return 4083;
				
				case 96:
					return 4091;
				
				case 97:
					return 4099;
				
				case 98:
					return 4107;
				
				case 99:
					return 4115;
				
				case 100:
					return 4123;
				
				case 101:
					return 4131;
				
				case 102:
					return 4139;
				
				case 103:
					return 4147;
				
				case 104:
					return 4155;
				
				case 105:
					return 4163;
				
				case 106:
					return 4171;
				
				case 107:
					return 4179;
				
				case 108:
					return 4187;
				
				case 109:
					return 4195;
				
				case 110:
					return 4203;
				
				case 111:
					return 4211;
				
				case 112:
					return 4219;
				
				case 113:
					return 4227;
				
				case 114:
					return 4235;
				
				case 115:
					return 4243;
				
				case 116:
					return 4251;
				
				case 117:
					return 4259;
				
				case 118:
					return 4267;
				
				case 119:
					return 4275;
				
				case 120:
					return 4283;
				
				case 121:
					return 4291;
				
				case 122:
					return 4299;
				
				case 123:
					return 4307;
				
				case 124:
					return 4315;
				
				case 125:
					return 4323;
				
				case 126:
					return 4331;
				
				case 127:
					return 4339;
				
				case 128:
					return 4347;
				
				case 129:
					return 4355;
				
				case 130:
					return 4363;
				
				case 131:
					return 4371;
				
				case 132:
					return 4379;
				
				case 133:
					return 4387;
				
				case 134:
					return 4395;
				
				case 135:
					return 4403;
				
				case 136:
					return 4411;
				
				case 137:
					return 4419;
				
				case 138:
					return 4427;
				
				case 139:
					return 4435;
				
				case 140:
					return 4443;
				
				case 141:
					return 4451;
				
				case 142:
					return 4459;
				
				case 143:
					return 4467;
				
				case 144:
					return 4475;
				
				case 145:
					return 4483;
				
				case 146:
					return 4491;
				
				case 147:
					return 4499;
				
				case 148:
					return 4507;
				
				case 149:
					return 4515;
				
				case 150:
					return 4523;
				
				case 151:
					return 4531;
				
				case 152:
					return 4539;
				
				case 153:
					return 4547;
				
				case 154:
					return 4555;
				
				case 155:
					return 4563;
				
				case 156:
					return 4571;
				
				case 157:
					return 4579;
				
				case 158:
					return 5472;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5921;
				
				case 160:
					return 5928;
				
				case 161:
					return 5935;
				
				case 162:
					return 5942;
				
				case 163:
					return 5949;
				
				case 164:
					return 5956;
				
				case 165:
					return 5963;
				
				case 166:
					return 5970;
				
				case 167:
					return 5977;
				
				case 168:
					return 5984;
				
				case 169:
					return 5991;
				
				case 170:
					return 5998;
				
				case 171:
					return 6005;
				
				case 172:
					return 6012;
				
				case 173:
					return 6019;
				
				case 174:
					return 6026;
				
				case 175:
					return 6033;
				
				case 176:
					return 6040;
				
				case 177:
					return 6047;
				
				case 178:
					return 6054;
				
				case 179:
					return 6061;
				
				case 180:
					return 6068;
				
				case 181:
					return 6075;
				
				case 182:
					return 6082;
				
				case 183:
					return 6089;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6166;
				
				case 185:
					return 6173;
				
				case 186:
					return 6180;
				
				case 187:
					return 6187;
				
				case 188:
					return 6194;
				
				case 189:
					return 6201;
				
				case 190:
					return 6208;
				
				case 191:
					return 6215;
				
				case 192:
					return 6222;
				
				case 193:
					return 6229;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6563;
				
				case 195:
					return 6570;
				
				case 196:
					return 6577;
				
				case 197:
					return 6584;
				
				case 198:
					return 6591;
				
				case 199:
					return 6598;
				
				case 200:
					return 6605;
				
				case 201:
					return 6612;
				
				case 202:
					return 6619;
				
				case 203:
					return 6626;
				
				case 204:
					return 6633;
				
				case 205:
					return 6640;
				
				case 206:
					return 6647;
				
				case 207:
					return 6654;
				
				case 208:
					return 6661;
				
				case 209:
					return 6668;
				
				case 210:
					return 6675;
				
				case 211:
					return 6682;
				
				case 212:
					return 6689;
				
				case 213:
					return 6696;
				
				case 214:
					return 6703;
				
				case 215:
					return 6710;
				
				case 216:
					return 6717;
				
				case 217:
					return 6724;
				
				case 218:
					return 6731;
				
				case 219:
					return 6738;
				
				case 220:
					return 6745;
				
				case 221:
					return 6752;
				
				case 222:
					return 6759;
				
				case 223:
					return 6766;
				
				case 224:
					return 6773;
				
				case 225:
					return 6780;
				
				case 226:
					return 6787;
				
				case 227:
					return 6794;
				
				case 228:
					return 6801;
				
				case 229:
					return 6808;
				
				case 230:
					return 6815;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1630;
				
				case 1:
					return 1637;
				
				case 2:
					return 1644;
				
				case 3:
					return 1651;
				
				case 4:
					return 1658;
				
				case 5:
					return 1665;
				
				case 6:
					return 1672;
				
				case 7:
					return 1679;
				
				case 8:
					return 1686;
				
				case 9:
					return 1693;
				
				case 10:
					return 1700;
				
				case 11:
					return 1706;
				
				case 12:
					return 1712;
				
				case 13:
					return 1718;
				
				case 14:
					return 1796;
				
				case 15:
					return 1803;
				
				case 16:
					return 1810;
				
				case 17:
					return 1817;
				
				case 18:
					return 1824;
				
				case 19:
					return 1831;
				
				case 20:
					return 1838;
				
				case 21:
					return 1845;
				
				case 22:
					return 1852;
				
				case 23:
					return 1859;
				
				case 24:
					return 1865;
				
				case 25:
					return 1871;
				
				case 26:
					return 2166;
				
				case 27:
					return 2173;
				
				case 28:
					return 2180;
				
				case 29:
					return 2187;
				
				case 30:
					return 2194;
				
				case 31:
					return 2201;
				
				case 32:
					return 2208;
				
				case 33:
					return 2215;
				
				case 34:
					return 2222;
				
				case 35:
					return 2229;
				
				case 36:
					return 2236;
				
				case 37:
					return 2242;
				
				case 38:
					return 2248;
				
				case 39:
					return 2825;
				
				case 40:
					return 2832;
				
				case 41:
					return 2839;
				
				case 42:
					return 2846;
				
				case 43:
					return 2853;
				
				case 44:
					return 2860;
				
				case 45:
					return 2867;
				
				case 46:
					return 2874;
				
				case 47:
					return 2881;
				
				case 48:
					return 2888;
				
				case 49:
					return 2895;
				
				case 50:
					return 2901;
				
				case 51:
					return 2907;
				
				case 52:
					return 2949;
				
				case 53:
					return 2956;
				
				case 54:
					return 2963;
				
				case 55:
					return 2970;
				
				case 56:
					return 2977;
				
				case 57:
					return 2984;
				
				case 58:
					return 2991;
				
				case 59:
					return 2998;
				
				case 60:
					return 3005;
				
				case 61:
					return 3012;
				
				case 62:
					return 3019;
				
				case 63:
					return 3025;
				
				case 64:
					return 3031;
				
				case 65:
					return 3232;
				
				case 66:
					return 3240;
				
				case 67:
					return 3248;
				
				case 68:
					return 3256;
				
				case 69:
					return 3264;
				
				case 70:
					return 3272;
				
				case 71:
					return 3280;
				
				case 72:
					return 3288;
				
				case 73:
					return 3296;
				
				case 74:
					return 3304;
				
				case 75:
					return 3312;
				
				case 76:
					return 3320;
				
				case 77:
					return 3328;
				
				case 78:
					return 3336;
				
				case 79:
					return 3344;
				
				case 80:
					return 3352;
				
				case 81:
					return 3360;
				
				case 82:
					return 3368;
				
				case 83:
					return 3376;
				
				case 84:
					return 3384;
				
				case 85:
					return 3392;
				
				case 86:
					return 3399;
				
				case 87:
					return 3406;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4028;
				
				case 89:
					return 4036;
				
				case 90:
					return 4044;
				
				case 91:
					return 4052;
				
				case 92:
					return 4060;
				
				case 93:
					return 4068;
				
				case 94:
					return 4076;
				
				case 95:
					return 4084;
				
				case 96:
					return 4092;
				
				case 97:
					return 4100;
				
				case 98:
					return 4108;
				
				case 99:
					return 4116;
				
				case 100:
					return 4124;
				
				case 101:
					return 4132;
				
				case 102:
					return 4140;
				
				case 103:
					return 4148;
				
				case 104:
					return 4156;
				
				case 105:
					return 4164;
				
				case 106:
					return 4172;
				
				case 107:
					return 4180;
				
				case 108:
					return 4188;
				
				case 109:
					return 4196;
				
				case 110:
					return 4204;
				
				case 111:
					return 4212;
				
				case 112:
					return 4220;
				
				case 113:
					return 4228;
				
				case 114:
					return 4236;
				
				case 115:
					return 4244;
				
				case 116:
					return 4252;
				
				case 117:
					return 4260;
				
				case 118:
					return 4268;
				
				case 119:
					return 4276;
				
				case 120:
					return 4284;
				
				case 121:
					return 4292;
				
				case 122:
					return 4300;
				
				case 123:
					return 4308;
				
				case 124:
					return 4316;
				
				case 125:
					return 4324;
				
				case 126:
					return 4332;
				
				case 127:
					return 4340;
				
				case 128:
					return 4348;
				
				case 129:
					return 4356;
				
				case 130:
					return 4364;
				
				case 131:
					return 4372;
				
				case 132:
					return 4380;
				
				case 133:
					return 4388;
				
				case 134:
					return 4396;
				
				case 135:
					return 4404;
				
				case 136:
					return 4412;
				
				case 137:
					return 4420;
				
				case 138:
					return 4428;
				
				case 139:
					return 4436;
				
				case 140:
					return 4444;
				
				case 141:
					return 4452;
				
				case 142:
					return 4460;
				
				case 143:
					return 4468;
				
				case 144:
					return 4476;
				
				case 145:
					return 4484;
				
				case 146:
					return 4492;
				
				case 147:
					return 4500;
				
				case 148:
					return 4508;
				
				case 149:
					return 4516;
				
				case 150:
					return 4524;
				
				case 151:
					return 4532;
				
				case 152:
					return 4540;
				
				case 153:
					return 4548;
				
				case 154:
					return 4556;
				
				case 155:
					return 4564;
				
				case 156:
					return 4572;
				
				case 157:
					return 4580;
				
				case 158:
					return 5473;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5922;
				
				case 160:
					return 5929;
				
				case 161:
					return 5936;
				
				case 162:
					return 5943;
				
				case 163:
					return 5950;
				
				case 164:
					return 5957;
				
				case 165:
					return 5964;
				
				case 166:
					return 5971;
				
				case 167:
					return 5978;
				
				case 168:
					return 5985;
				
				case 169:
					return 5992;
				
				case 170:
					return 5999;
				
				case 171:
					return 6006;
				
				case 172:
					return 6013;
				
				case 173:
					return 6020;
				
				case 174:
					return 6027;
				
				case 175:
					return 6034;
				
				case 176:
					return 6041;
				
				case 177:
					return 6048;
				
				case 178:
					return 6055;
				
				case 179:
					return 6062;
				
				case 180:
					return 6069;
				
				case 181:
					return 6076;
				
				case 182:
					return 6083;
				
				case 183:
					return 6090;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6167;
				
				case 185:
					return 6174;
				
				case 186:
					return 6181;
				
				case 187:
					return 6188;
				
				case 188:
					return 6195;
				
				case 189:
					return 6202;
				
				case 190:
					return 6209;
				
				case 191:
					return 6216;
				
				case 192:
					return 6223;
				
				case 193:
					return 6230;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6564;
				
				case 195:
					return 6571;
				
				case 196:
					return 6578;
				
				case 197:
					return 6585;
				
				case 198:
					return 6592;
				
				case 199:
					return 6599;
				
				case 200:
					return 6606;
				
				case 201:
					return 6613;
				
				case 202:
					return 6620;
				
				case 203:
					return 6627;
				
				case 204:
					return 6634;
				
				case 205:
					return 6641;
				
				case 206:
					return 6648;
				
				case 207:
					return 6655;
				
				case 208:
					return 6662;
				
				case 209:
					return 6669;
				
				case 210:
					return 6676;
				
				case 211:
					return 6683;
				
				case 212:
					return 6690;
				
				case 213:
					return 6697;
				
				case 214:
					return 6704;
				
				case 215:
					return 6711;
				
				case 216:
					return 6718;
				
				case 217:
					return 6725;
				
				case 218:
					return 6732;
				
				case 219:
					return 6739;
				
				case 220:
					return 6746;
				
				case 221:
					return 6753;
				
				case 222:
					return 6760;
				
				case 223:
					return 6767;
				
				case 224:
					return 6774;
				
				case 225:
					return 6781;
				
				case 226:
					return 6788;
				
				case 227:
					return 6795;
				
				case 228:
					return 6802;
				
				case 229:
					return 6809;
				
				case 230:
					return 6816;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1631;
				
				case 1:
					return 1638;
				
				case 2:
					return 1645;
				
				case 3:
					return 1652;
				
				case 4:
					return 1659;
				
				case 5:
					return 1666;
				
				case 6:
					return 1673;
				
				case 7:
					return 1680;
				
				case 8:
					return 1687;
				
				case 9:
					return 1694;
				
				case 10:
					return 1701;
				
				case 11:
					return 1707;
				
				case 12:
					return 1713;
				
				case 13:
					return 1719;
				
				case 14:
					return 1797;
				
				case 15:
					return 1804;
				
				case 16:
					return 1811;
				
				case 17:
					return 1818;
				
				case 18:
					return 1825;
				
				case 19:
					return 1832;
				
				case 20:
					return 1839;
				
				case 21:
					return 1846;
				
				case 22:
					return 1853;
				
				case 23:
					return 1860;
				
				case 24:
					return 1866;
				
				case 25:
					return 1872;
				
				case 26:
					return 2167;
				
				case 27:
					return 2174;
				
				case 28:
					return 2181;
				
				case 29:
					return 2188;
				
				case 30:
					return 2195;
				
				case 31:
					return 2202;
				
				case 32:
					return 2209;
				
				case 33:
					return 2216;
				
				case 34:
					return 2223;
				
				case 35:
					return 2230;
				
				case 36:
					return 2237;
				
				case 37:
					return 2243;
				
				case 38:
					return 2249;
				
				case 39:
					return 2826;
				
				case 40:
					return 2833;
				
				case 41:
					return 2840;
				
				case 42:
					return 2847;
				
				case 43:
					return 2854;
				
				case 44:
					return 2861;
				
				case 45:
					return 2868;
				
				case 46:
					return 2875;
				
				case 47:
					return 2882;
				
				case 48:
					return 2889;
				
				case 49:
					return 2896;
				
				case 50:
					return 2902;
				
				case 51:
					return 2908;
				
				case 52:
					return 2950;
				
				case 53:
					return 2957;
				
				case 54:
					return 2964;
				
				case 55:
					return 2971;
				
				case 56:
					return 2978;
				
				case 57:
					return 2985;
				
				case 58:
					return 2992;
				
				case 59:
					return 2999;
				
				case 60:
					return 3006;
				
				case 61:
					return 3013;
				
				case 62:
					return 3020;
				
				case 63:
					return 3026;
				
				case 64:
					return 3032;
				
				case 65:
					return 3233;
				
				case 66:
					return 3241;
				
				case 67:
					return 3249;
				
				case 68:
					return 3257;
				
				case 69:
					return 3265;
				
				case 70:
					return 3273;
				
				case 71:
					return 3281;
				
				case 72:
					return 3289;
				
				case 73:
					return 3297;
				
				case 74:
					return 3305;
				
				case 75:
					return 3313;
				
				case 76:
					return 3321;
				
				case 77:
					return 3329;
				
				case 78:
					return 3337;
				
				case 79:
					return 3345;
				
				case 80:
					return 3353;
				
				case 81:
					return 3361;
				
				case 82:
					return 3369;
				
				case 83:
					return 3377;
				
				case 84:
					return 3385;
				
				case 85:
					return 3393;
				
				case 86:
					return 3400;
				
				case 87:
					return 3407;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4029;
				
				case 89:
					return 4037;
				
				case 90:
					return 4045;
				
				case 91:
					return 4053;
				
				case 92:
					return 4061;
				
				case 93:
					return 4069;
				
				case 94:
					return 4077;
				
				case 95:
					return 4085;
				
				case 96:
					return 4093;
				
				case 97:
					return 4101;
				
				case 98:
					return 4109;
				
				case 99:
					return 4117;
				
				case 100:
					return 4125;
				
				case 101:
					return 4133;
				
				case 102:
					return 4141;
				
				case 103:
					return 4149;
				
				case 104:
					return 4157;
				
				case 105:
					return 4165;
				
				case 106:
					return 4173;
				
				case 107:
					return 4181;
				
				case 108:
					return 4189;
				
				case 109:
					return 4197;
				
				case 110:
					return 4205;
				
				case 111:
					return 4213;
				
				case 112:
					return 4221;
				
				case 113:
					return 4229;
				
				case 114:
					return 4237;
				
				case 115:
					return 4245;
				
				case 116:
					return 4253;
				
				case 117:
					return 4261;
				
				case 118:
					return 4269;
				
				case 119:
					return 4277;
				
				case 120:
					return 4285;
				
				case 121:
					return 4293;
				
				case 122:
					return 4301;
				
				case 123:
					return 4309;
				
				case 124:
					return 4317;
				
				case 125:
					return 4325;
				
				case 126:
					return 4333;
				
				case 127:
					return 4341;
				
				case 128:
					return 4349;
				
				case 129:
					return 4357;
				
				case 130:
					return 4365;
				
				case 131:
					return 4373;
				
				case 132:
					return 4381;
				
				case 133:
					return 4389;
				
				case 134:
					return 4397;
				
				case 135:
					return 4405;
				
				case 136:
					return 4413;
				
				case 137:
					return 4421;
				
				case 138:
					return 4429;
				
				case 139:
					return 4437;
				
				case 140:
					return 4445;
				
				case 141:
					return 4453;
				
				case 142:
					return 4461;
				
				case 143:
					return 4469;
				
				case 144:
					return 4477;
				
				case 145:
					return 4485;
				
				case 146:
					return 4493;
				
				case 147:
					return 4501;
				
				case 148:
					return 4509;
				
				case 149:
					return 4517;
				
				case 150:
					return 4525;
				
				case 151:
					return 4533;
				
				case 152:
					return 4541;
				
				case 153:
					return 4549;
				
				case 154:
					return 4557;
				
				case 155:
					return 4565;
				
				case 156:
					return 4573;
				
				case 157:
					return 4581;
				
				case 158:
					return 5474;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5923;
				
				case 160:
					return 5930;
				
				case 161:
					return 5937;
				
				case 162:
					return 5944;
				
				case 163:
					return 5951;
				
				case 164:
					return 5958;
				
				case 165:
					return 5965;
				
				case 166:
					return 5972;
				
				case 167:
					return 5979;
				
				case 168:
					return 5986;
				
				case 169:
					return 5993;
				
				case 170:
					return 6000;
				
				case 171:
					return 6007;
				
				case 172:
					return 6014;
				
				case 173:
					return 6021;
				
				case 174:
					return 6028;
				
				case 175:
					return 6035;
				
				case 176:
					return 6042;
				
				case 177:
					return 6049;
				
				case 178:
					return 6056;
				
				case 179:
					return 6063;
				
				case 180:
					return 6070;
				
				case 181:
					return 6077;
				
				case 182:
					return 6084;
				
				case 183:
					return 6091;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6168;
				
				case 185:
					return 6175;
				
				case 186:
					return 6182;
				
				case 187:
					return 6189;
				
				case 188:
					return 6196;
				
				case 189:
					return 6203;
				
				case 190:
					return 6210;
				
				case 191:
					return 6217;
				
				case 192:
					return 6224;
				
				case 193:
					return 6231;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6565;
				
				case 195:
					return 6572;
				
				case 196:
					return 6579;
				
				case 197:
					return 6586;
				
				case 198:
					return 6593;
				
				case 199:
					return 6600;
				
				case 200:
					return 6607;
				
				case 201:
					return 6614;
				
				case 202:
					return 6621;
				
				case 203:
					return 6628;
				
				case 204:
					return 6635;
				
				case 205:
					return 6642;
				
				case 206:
					return 6649;
				
				case 207:
					return 6656;
				
				case 208:
					return 6663;
				
				case 209:
					return 6670;
				
				case 210:
					return 6677;
				
				case 211:
					return 6684;
				
				case 212:
					return 6691;
				
				case 213:
					return 6698;
				
				case 214:
					return 6705;
				
				case 215:
					return 6712;
				
				case 216:
					return 6719;
				
				case 217:
					return 6726;
				
				case 218:
					return 6733;
				
				case 219:
					return 6740;
				
				case 220:
					return 6747;
				
				case 221:
					return 6754;
				
				case 222:
					return 6761;
				
				case 223:
					return 6768;
				
				case 224:
					return 6775;
				
				case 225:
					return 6782;
				
				case 226:
					return 6789;
				
				case 227:
					return 6796;
				
				case 228:
					return 6803;
				
				case 229:
					return 6810;
				
				case 230:
					return 6817;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1632;
				
				case 1:
					return 1639;
				
				case 2:
					return 1646;
				
				case 3:
					return 1653;
				
				case 4:
					return 1660;
				
				case 5:
					return 1667;
				
				case 6:
					return 1674;
				
				case 7:
					return 1681;
				
				case 8:
					return 1688;
				
				case 9:
					return 1695;
				
				case 10:
					return 1702;
				
				case 11:
					return 1708;
				
				case 12:
					return 1714;
				
				case 13:
					return 1720;
				
				case 14:
					return 1798;
				
				case 15:
					return 1805;
				
				case 16:
					return 1812;
				
				case 17:
					return 1819;
				
				case 18:
					return 1826;
				
				case 19:
					return 1833;
				
				case 20:
					return 1840;
				
				case 21:
					return 1847;
				
				case 22:
					return 1854;
				
				case 23:
					return 1861;
				
				case 24:
					return 1867;
				
				case 25:
					return 1873;
				
				case 26:
					return 2168;
				
				case 27:
					return 2175;
				
				case 28:
					return 2182;
				
				case 29:
					return 2189;
				
				case 30:
					return 2196;
				
				case 31:
					return 2203;
				
				case 32:
					return 2210;
				
				case 33:
					return 2217;
				
				case 34:
					return 2224;
				
				case 35:
					return 2231;
				
				case 36:
					return 2238;
				
				case 37:
					return 2244;
				
				case 38:
					return 2250;
				
				case 39:
					return 2827;
				
				case 40:
					return 2834;
				
				case 41:
					return 2841;
				
				case 42:
					return 2848;
				
				case 43:
					return 2855;
				
				case 44:
					return 2862;
				
				case 45:
					return 2869;
				
				case 46:
					return 2876;
				
				case 47:
					return 2883;
				
				case 48:
					return 2890;
				
				case 49:
					return 2897;
				
				case 50:
					return 2903;
				
				case 51:
					return 2909;
				
				case 52:
					return 2951;
				
				case 53:
					return 2958;
				
				case 54:
					return 2965;
				
				case 55:
					return 2972;
				
				case 56:
					return 2979;
				
				case 57:
					return 2986;
				
				case 58:
					return 2993;
				
				case 59:
					return 3000;
				
				case 60:
					return 3007;
				
				case 61:
					return 3014;
				
				case 62:
					return 3021;
				
				case 63:
					return 3027;
				
				case 64:
					return 3033;
				
				case 65:
					return 3234;
				
				case 66:
					return 3242;
				
				case 67:
					return 3250;
				
				case 68:
					return 3258;
				
				case 69:
					return 3266;
				
				case 70:
					return 3274;
				
				case 71:
					return 3282;
				
				case 72:
					return 3290;
				
				case 73:
					return 3298;
				
				case 74:
					return 3306;
				
				case 75:
					return 3314;
				
				case 76:
					return 3322;
				
				case 77:
					return 3330;
				
				case 78:
					return 3338;
				
				case 79:
					return 3346;
				
				case 80:
					return 3354;
				
				case 81:
					return 3362;
				
				case 82:
					return 3370;
				
				case 83:
					return 3378;
				
				case 84:
					return 3386;
				
				case 85:
					return 3394;
				
				case 86:
					return 3401;
				
				case 87:
					return 3408;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4030;
				
				case 89:
					return 4038;
				
				case 90:
					return 4046;
				
				case 91:
					return 4054;
				
				case 92:
					return 4062;
				
				case 93:
					return 4070;
				
				case 94:
					return 4078;
				
				case 95:
					return 4086;
				
				case 96:
					return 4094;
				
				case 97:
					return 4102;
				
				case 98:
					return 4110;
				
				case 99:
					return 4118;
				
				case 100:
					return 4126;
				
				case 101:
					return 4134;
				
				case 102:
					return 4142;
				
				case 103:
					return 4150;
				
				case 104:
					return 4158;
				
				case 105:
					return 4166;
				
				case 106:
					return 4174;
				
				case 107:
					return 4182;
				
				case 108:
					return 4190;
				
				case 109:
					return 4198;
				
				case 110:
					return 4206;
				
				case 111:
					return 4214;
				
				case 112:
					return 4222;
				
				case 113:
					return 4230;
				
				case 114:
					return 4238;
				
				case 115:
					return 4246;
				
				case 116:
					return 4254;
				
				case 117:
					return 4262;
				
				case 118:
					return 4270;
				
				case 119:
					return 4278;
				
				case 120:
					return 4286;
				
				case 121:
					return 4294;
				
				case 122:
					return 4302;
				
				case 123:
					return 4310;
				
				case 124:
					return 4318;
				
				case 125:
					return 4326;
				
				case 126:
					return 4334;
				
				case 127:
					return 4342;
				
				case 128:
					return 4350;
				
				case 129:
					return 4358;
				
				case 130:
					return 4366;
				
				case 131:
					return 4374;
				
				case 132:
					return 4382;
				
				case 133:
					return 4390;
				
				case 134:
					return 4398;
				
				case 135:
					return 4406;
				
				case 136:
					return 4414;
				
				case 137:
					return 4422;
				
				case 138:
					return 4430;
				
				case 139:
					return 4438;
				
				case 140:
					return 4446;
				
				case 141:
					return 4454;
				
				case 142:
					return 4462;
				
				case 143:
					return 4470;
				
				case 144:
					return 4478;
				
				case 145:
					return 4486;
				
				case 146:
					return 4494;
				
				case 147:
					return 4502;
				
				case 148:
					return 4510;
				
				case 149:
					return 4518;
				
				case 150:
					return 4526;
				
				case 151:
					return 4534;
				
				case 152:
					return 4542;
				
				case 153:
					return 4550;
				
				case 154:
					return 4558;
				
				case 155:
					return 4566;
				
				case 156:
					return 4574;
				
				case 157:
					return 4582;
				
				case 158:
					return 5475;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5924;
				
				case 160:
					return 5931;
				
				case 161:
					return 5938;
				
				case 162:
					return 5945;
				
				case 163:
					return 5952;
				
				case 164:
					return 5959;
				
				case 165:
					return 5966;
				
				case 166:
					return 5973;
				
				case 167:
					return 5980;
				
				case 168:
					return 5987;
				
				case 169:
					return 5994;
				
				case 170:
					return 6001;
				
				case 171:
					return 6008;
				
				case 172:
					return 6015;
				
				case 173:
					return 6022;
				
				case 174:
					return 6029;
				
				case 175:
					return 6036;
				
				case 176:
					return 6043;
				
				case 177:
					return 6050;
				
				case 178:
					return 6057;
				
				case 179:
					return 6064;
				
				case 180:
					return 6071;
				
				case 181:
					return 6078;
				
				case 182:
					return 6085;
				
				case 183:
					return 6092;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6169;
				
				case 185:
					return 6176;
				
				case 186:
					return 6183;
				
				case 187:
					return 6190;
				
				case 188:
					return 6197;
				
				case 189:
					return 6204;
				
				case 190:
					return 6211;
				
				case 191:
					return 6218;
				
				case 192:
					return 6225;
				
				case 193:
					return 6232;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6566;
				
				case 195:
					return 6573;
				
				case 196:
					return 6580;
				
				case 197:
					return 6587;
				
				case 198:
					return 6594;
				
				case 199:
					return 6601;
				
				case 200:
					return 6608;
				
				case 201:
					return 6615;
				
				case 202:
					return 6622;
				
				case 203:
					return 6629;
				
				case 204:
					return 6636;
				
				case 205:
					return 6643;
				
				case 206:
					return 6650;
				
				case 207:
					return 6657;
				
				case 208:
					return 6664;
				
				case 209:
					return 6671;
				
				case 210:
					return 6678;
				
				case 211:
					return 6685;
				
				case 212:
					return 6692;
				
				case 213:
					return 6699;
				
				case 214:
					return 6706;
				
				case 215:
					return 6713;
				
				case 216:
					return 6720;
				
				case 217:
					return 6727;
				
				case 218:
					return 6734;
				
				case 219:
					return 6741;
				
				case 220:
					return 6748;
				
				case 221:
					return 6755;
				
				case 222:
					return 6762;
				
				case 223:
					return 6769;
				
				case 224:
					return 6776;
				
				case 225:
					return 6783;
				
				case 226:
					return 6790;
				
				case 227:
					return 6797;
				
				case 228:
					return 6804;
				
				case 229:
					return 6811;
				
				case 230:
					return 6818;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 1633;
				
				case 1:
					return 1640;
				
				case 2:
					return 1647;
				
				case 3:
					return 1654;
				
				case 4:
					return 1661;
				
				case 5:
					return 1668;
				
				case 6:
					return 1675;
				
				case 7:
					return 1682;
				
				case 8:
					return 1689;
				
				case 9:
					return 1696;
				
				case 10:
					return 1703;
				
				case 11:
					return 1709;
				
				case 12:
					return 1715;
				
				case 13:
					return 1721;
				
				case 14:
					return 1799;
				
				case 15:
					return 1806;
				
				case 16:
					return 1813;
				
				case 17:
					return 1820;
				
				case 18:
					return 1827;
				
				case 19:
					return 1834;
				
				case 20:
					return 1841;
				
				case 21:
					return 1848;
				
				case 22:
					return 1855;
				
				case 23:
					return 1862;
				
				case 24:
					return 1868;
				
				case 25:
					return 1874;
				
				case 26:
					return 2169;
				
				case 27:
					return 2176;
				
				case 28:
					return 2183;
				
				case 29:
					return 2190;
				
				case 30:
					return 2197;
				
				case 31:
					return 2204;
				
				case 32:
					return 2211;
				
				case 33:
					return 2218;
				
				case 34:
					return 2225;
				
				case 35:
					return 2232;
				
				case 36:
					return 2239;
				
				case 37:
					return 2245;
				
				case 38:
					return 2251;
				
				case 39:
					return 2828;
				
				case 40:
					return 2835;
				
				case 41:
					return 2842;
				
				case 42:
					return 2849;
				
				case 43:
					return 2856;
				
				case 44:
					return 2863;
				
				case 45:
					return 2870;
				
				case 46:
					return 2877;
				
				case 47:
					return 2884;
				
				case 48:
					return 2891;
				
				case 49:
					return 2898;
				
				case 50:
					return 2904;
				
				case 51:
					return 2910;
				
				case 52:
					return 2952;
				
				case 53:
					return 2959;
				
				case 54:
					return 2966;
				
				case 55:
					return 2973;
				
				case 56:
					return 2980;
				
				case 57:
					return 2987;
				
				case 58:
					return 2994;
				
				case 59:
					return 3001;
				
				case 60:
					return 3008;
				
				case 61:
					return 3015;
				
				case 62:
					return 3022;
				
				case 63:
					return 3028;
				
				case 64:
					return 3034;
				
				case 65:
					return 3235;
				
				case 66:
					return 3243;
				
				case 67:
					return 3251;
				
				case 68:
					return 3259;
				
				case 69:
					return 3267;
				
				case 70:
					return 3275;
				
				case 71:
					return 3283;
				
				case 72:
					return 3291;
				
				case 73:
					return 3299;
				
				case 74:
					return 3307;
				
				case 75:
					return 3315;
				
				case 76:
					return 3323;
				
				case 77:
					return 3331;
				
				case 78:
					return 3339;
				
				case 79:
					return 3347;
				
				case 80:
					return 3355;
				
				case 81:
					return 3363;
				
				case 82:
					return 3371;
				
				case 83:
					return 3379;
				
				case 84:
					return 3387;
				
				case 85:
					return 3395;
				
				case 86:
					return 3402;
				
				case 87:
					return 3409;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4031;
				
				case 89:
					return 4039;
				
				case 90:
					return 4047;
				
				case 91:
					return 4055;
				
				case 92:
					return 4063;
				
				case 93:
					return 4071;
				
				case 94:
					return 4079;
				
				case 95:
					return 4087;
				
				case 96:
					return 4095;
				
				case 97:
					return 4103;
				
				case 98:
					return 4111;
				
				case 99:
					return 4119;
				
				case 100:
					return 4127;
				
				case 101:
					return 4135;
				
				case 102:
					return 4143;
				
				case 103:
					return 4151;
				
				case 104:
					return 4159;
				
				case 105:
					return 4167;
				
				case 106:
					return 4175;
				
				case 107:
					return 4183;
				
				case 108:
					return 4191;
				
				case 109:
					return 4199;
				
				case 110:
					return 4207;
				
				case 111:
					return 4215;
				
				case 112:
					return 4223;
				
				case 113:
					return 4231;
				
				case 114:
					return 4239;
				
				case 115:
					return 4247;
				
				case 116:
					return 4255;
				
				case 117:
					return 4263;
				
				case 118:
					return 4271;
				
				case 119:
					return 4279;
				
				case 120:
					return 4287;
				
				case 121:
					return 4295;
				
				case 122:
					return 4303;
				
				case 123:
					return 4311;
				
				case 124:
					return 4319;
				
				case 125:
					return 4327;
				
				case 126:
					return 4335;
				
				case 127:
					return 4343;
				
				case 128:
					return 4351;
				
				case 129:
					return 4359;
				
				case 130:
					return 4367;
				
				case 131:
					return 4375;
				
				case 132:
					return 4383;
				
				case 133:
					return 4391;
				
				case 134:
					return 4399;
				
				case 135:
					return 4407;
				
				case 136:
					return 4415;
				
				case 137:
					return 4423;
				
				case 138:
					return 4431;
				
				case 139:
					return 4439;
				
				case 140:
					return 4447;
				
				case 141:
					return 4455;
				
				case 142:
					return 4463;
				
				case 143:
					return 4471;
				
				case 144:
					return 4479;
				
				case 145:
					return 4487;
				
				case 146:
					return 4495;
				
				case 147:
					return 4503;
				
				case 148:
					return 4511;
				
				case 149:
					return 4519;
				
				case 150:
					return 4527;
				
				case 151:
					return 4535;
				
				case 152:
					return 4543;
				
				case 153:
					return 4551;
				
				case 154:
					return 4559;
				
				case 155:
					return 4567;
				
				case 156:
					return 4575;
				
				case 157:
					return 4583;
				
				case 158:
					return 5476;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5925;
				
				case 160:
					return 5932;
				
				case 161:
					return 5939;
				
				case 162:
					return 5946;
				
				case 163:
					return 5953;
				
				case 164:
					return 5960;
				
				case 165:
					return 5967;
				
				case 166:
					return 5974;
				
				case 167:
					return 5981;
				
				case 168:
					return 5988;
				
				case 169:
					return 5995;
				
				case 170:
					return 6002;
				
				case 171:
					return 6009;
				
				case 172:
					return 6016;
				
				case 173:
					return 6023;
				
				case 174:
					return 6030;
				
				case 175:
					return 6037;
				
				case 176:
					return 6044;
				
				case 177:
					return 6051;
				
				case 178:
					return 6058;
				
				case 179:
					return 6065;
				
				case 180:
					return 6072;
				
				case 181:
					return 6079;
				
				case 182:
					return 6086;
				
				case 183:
					return 6093;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6170;
				
				case 185:
					return 6177;
				
				case 186:
					return 6184;
				
				case 187:
					return 6191;
				
				case 188:
					return 6198;
				
				case 189:
					return 6205;
				
				case 190:
					return 6212;
				
				case 191:
					return 6219;
				
				case 192:
					return 6226;
				
				case 193:
					return 6233;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6567;
				
				case 195:
					return 6574;
				
				case 196:
					return 6581;
				
				case 197:
					return 6588;
				
				case 198:
					return 6595;
				
				case 199:
					return 6602;
				
				case 200:
					return 6609;
				
				case 201:
					return 6616;
				
				case 202:
					return 6623;
				
				case 203:
					return 6630;
				
				case 204:
					return 6637;
				
				case 205:
					return 6644;
				
				case 206:
					return 6651;
				
				case 207:
					return 6658;
				
				case 208:
					return 6665;
				
				case 209:
					return 6672;
				
				case 210:
					return 6679;
				
				case 211:
					return 6686;
				
				case 212:
					return 6693;
				
				case 213:
					return 6700;
				
				case 214:
					return 6707;
				
				case 215:
					return 6714;
				
				case 216:
					return 6721;
				
				case 217:
					return 6728;
				
				case 218:
					return 6735;
				
				case 219:
					return 6742;
				
				case 220:
					return 6749;
				
				case 221:
					return 6756;
				
				case 222:
					return 6763;
				
				case 223:
					return 6770;
				
				case 224:
					return 6777;
				
				case 225:
					return 6784;
				
				case 226:
					return 6791;
				
				case 227:
					return 6798;
				
				case 228:
					return 6805;
				
				case 229:
					return 6812;
				
				case 230:
					return 6819;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1635;
				
				case 1:
					return 1642;
				
				case 2:
					return 1649;
				
				case 3:
					return 1656;
				
				case 4:
					return 1663;
				
				case 5:
					return 1670;
				
				case 6:
					return 1677;
				
				case 7:
					return 1684;
				
				case 8:
					return 1691;
				
				case 9:
					return 1698;
				
				case 13:
					return 1723;
				
				case 14:
					return 1801;
				
				case 15:
					return 1808;
				
				case 16:
					return 1815;
				
				case 17:
					return 1822;
				
				case 18:
					return 1829;
				
				case 19:
					return 1836;
				
				case 20:
					return 1843;
				
				case 21:
					return 1850;
				
				case 22:
					return 1857;
				
				case 26:
					return 2171;
				
				case 27:
					return 2178;
				
				case 28:
					return 2185;
				
				case 29:
					return 2192;
				
				case 30:
					return 2199;
				
				case 31:
					return 2206;
				
				case 32:
					return 2213;
				
				case 33:
					return 2220;
				
				case 34:
					return 2227;
				
				case 35:
					return 2234;
				
				case 39:
					return 2830;
				
				case 40:
					return 2837;
				
				case 41:
					return 2844;
				
				case 42:
					return 2851;
				
				case 43:
					return 2858;
				
				case 44:
					return 2865;
				
				case 45:
					return 2872;
				
				case 46:
					return 2879;
				
				case 47:
					return 2886;
				
				case 48:
					return 2893;
				
				case 52:
					return 2954;
				
				case 53:
					return 2961;
				
				case 54:
					return 2968;
				
				case 55:
					return 2975;
				
				case 56:
					return 2982;
				
				case 57:
					return 2989;
				
				case 58:
					return 2996;
				
				case 59:
					return 3003;
				
				case 60:
					return 3010;
				
				case 61:
					return 3017;
				
				case 65:
					return 3238;
				
				case 66:
					return 3246;
				
				case 67:
					return 3254;
				
				case 68:
					return 3262;
				
				case 69:
					return 3270;
				
				case 70:
					return 3278;
				
				case 71:
					return 3286;
				
				case 72:
					return 3294;
				
				case 73:
					return 3302;
				
				case 74:
					return 3310;
				
				case 75:
					return 3318;
				
				case 76:
					return 3326;
				
				case 77:
					return 3334;
				
				case 78:
					return 3342;
				
				case 79:
					return 3350;
				
				case 80:
					return 3358;
				
				case 81:
					return 3366;
				
				case 82:
					return 3374;
				
				case 83:
					return 3382;
				
				case 84:
					return 3390;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4034;
				
				case 89:
					return 4042;
				
				case 90:
					return 4050;
				
				case 91:
					return 4058;
				
				case 92:
					return 4066;
				
				case 93:
					return 4074;
				
				case 94:
					return 4082;
				
				case 95:
					return 4090;
				
				case 96:
					return 4098;
				
				case 97:
					return 4106;
				
				case 98:
					return 4114;
				
				case 99:
					return 4122;
				
				case 100:
					return 4130;
				
				case 101:
					return 4138;
				
				case 102:
					return 4146;
				
				case 103:
					return 4154;
				
				case 104:
					return 4162;
				
				case 105:
					return 4170;
				
				case 106:
					return 4178;
				
				case 107:
					return 4186;
				
				case 108:
					return 4194;
				
				case 109:
					return 4202;
				
				case 110:
					return 4210;
				
				case 111:
					return 4218;
				
				case 112:
					return 4226;
				
				case 113:
					return 4234;
				
				case 114:
					return 4242;
				
				case 115:
					return 4250;
				
				case 116:
					return 4258;
				
				case 117:
					return 4266;
				
				case 118:
					return 4274;
				
				case 119:
					return 4282;
				
				case 120:
					return 4290;
				
				case 121:
					return 4298;
				
				case 122:
					return 4306;
				
				case 123:
					return 4314;
				
				case 124:
					return 4322;
				
				case 125:
					return 4330;
				
				case 126:
					return 4338;
				
				case 127:
					return 4346;
				
				case 128:
					return 4354;
				
				case 129:
					return 4362;
				
				case 130:
					return 4370;
				
				case 131:
					return 4378;
				
				case 132:
					return 4386;
				
				case 133:
					return 4394;
				
				case 134:
					return 4402;
				
				case 135:
					return 4410;
				
				case 136:
					return 4418;
				
				case 137:
					return 4426;
				
				case 138:
					return 4434;
				
				case 139:
					return 4442;
				
				case 140:
					return 4450;
				
				case 141:
					return 4458;
				
				case 142:
					return 4466;
				
				case 143:
					return 4474;
				
				case 144:
					return 4482;
				
				case 145:
					return 4490;
				
				case 146:
					return 4498;
				
				case 147:
					return 4506;
				
				case 148:
					return 4514;
				
				case 149:
					return 4522;
				
				case 150:
					return 4530;
				
				case 151:
					return 4538;
				
				case 152:
					return 4546;
				
				case 153:
					return 4554;
				
				case 154:
					return 4562;
				
				case 155:
					return 4570;
				
				case 156:
					return 4578;
				
				case 157:
					return 4586;
				
				case 158:
					return 5479;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5927;
				
				case 160:
					return 5934;
				
				case 161:
					return 5941;
				
				case 162:
					return 5948;
				
				case 163:
					return 5955;
				
				case 164:
					return 5962;
				
				case 165:
					return 5969;
				
				case 166:
					return 5976;
				
				case 167:
					return 5983;
				
				case 168:
					return 5990;
				
				case 169:
					return 5997;
				
				case 170:
					return 6004;
				
				case 171:
					return 6011;
				
				case 172:
					return 6018;
				
				case 173:
					return 6025;
				
				case 174:
					return 6032;
				
				case 175:
					return 6039;
				
				case 176:
					return 6046;
				
				case 177:
					return 6053;
				
				case 178:
					return 6060;
				
				case 179:
					return 6067;
				
				case 180:
					return 6074;
				
				case 181:
					return 6081;
				
				case 182:
					return 6088;
				
				case 183:
					return 6095;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6172;
				
				case 185:
					return 6179;
				
				case 186:
					return 6186;
				
				case 187:
					return 6193;
				
				case 188:
					return 6200;
				
				case 189:
					return 6207;
				
				case 190:
					return 6214;
				
				case 191:
					return 6221;
				
				case 192:
					return 6228;
				
				case 193:
					return 6235;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6569;
				
				case 195:
					return 6576;
				
				case 196:
					return 6583;
				
				case 197:
					return 6590;
				
				case 198:
					return 6597;
				
				case 199:
					return 6604;
				
				case 200:
					return 6611;
				
				case 201:
					return 6618;
				
				case 202:
					return 6625;
				
				case 203:
					return 6632;
				
				case 204:
					return 6639;
				
				case 205:
					return 6646;
				
				case 206:
					return 6653;
				
				case 207:
					return 6660;
				
				case 208:
					return 6667;
				
				case 209:
					return 6674;
				
				case 210:
					return 6681;
				
				case 211:
					return 6688;
				
				case 212:
					return 6695;
				
				case 213:
					return 6702;
				
				case 214:
					return 6709;
				
				case 215:
					return 6716;
				
				case 216:
					return 6723;
				
				case 217:
					return 6730;
				
				case 218:
					return 6737;
				
				case 219:
					return 6744;
				
				case 220:
					return 6751;
				
				case 221:
					return 6758;
				
				case 222:
					return 6765;
				
				case 223:
					return 6772;
				
				case 224:
					return 6779;
				
				case 225:
					return 6786;
				
				case 226:
					return 6793;
				
				case 227:
					return 6800;
				
				case 228:
					return 6807;
				
				case 229:
					return 6814;
				
				case 230:
					return 6821;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return 1634;
				
				case 1:
					return 1641;
				
				case 2:
					return 1648;
				
				case 3:
					return 1655;
				
				case 4:
					return 1662;
				
				case 5:
					return 1669;
				
				case 6:
					return 1676;
				
				case 7:
					return 1683;
				
				case 8:
					return 1690;
				
				case 9:
					return 1697;
				
				case 10:
					return 1704;
				
				case 11:
					return 1710;
				
				case 12:
					return 1716;
				
				case 13:
					return 1722;
				
				case 14:
					return 1800;
				
				case 15:
					return 1807;
				
				case 16:
					return 1814;
				
				case 17:
					return 1821;
				
				case 18:
					return 1828;
				
				case 19:
					return 1835;
				
				case 20:
					return 1842;
				
				case 21:
					return 1849;
				
				case 22:
					return 1856;
				
				case 23:
					return 1863;
				
				case 24:
					return 1869;
				
				case 25:
					return 1875;
				
				case 26:
					return 2170;
				
				case 27:
					return 2177;
				
				case 28:
					return 2184;
				
				case 29:
					return 2191;
				
				case 30:
					return 2198;
				
				case 31:
					return 2205;
				
				case 32:
					return 2212;
				
				case 33:
					return 2219;
				
				case 34:
					return 2226;
				
				case 35:
					return 2233;
				
				case 36:
					return 2240;
				
				case 37:
					return 2246;
				
				case 38:
					return 2252;
				
				case 39:
					return 2829;
				
				case 40:
					return 2836;
				
				case 41:
					return 2843;
				
				case 42:
					return 2850;
				
				case 43:
					return 2857;
				
				case 44:
					return 2864;
				
				case 45:
					return 2871;
				
				case 46:
					return 2878;
				
				case 47:
					return 2885;
				
				case 48:
					return 2892;
				
				case 49:
					return 2899;
				
				case 50:
					return 2905;
				
				case 51:
					return 2911;
				
				case 52:
					return 2953;
				
				case 53:
					return 2960;
				
				case 54:
					return 2967;
				
				case 55:
					return 2974;
				
				case 56:
					return 2981;
				
				case 57:
					return 2988;
				
				case 58:
					return 2995;
				
				case 59:
					return 3002;
				
				case 60:
					return 3009;
				
				case 61:
					return 3016;
				
				case 62:
					return 3023;
				
				case 63:
					return 3029;
				
				case 64:
					return 3035;
				
				case 65:
					return 3236;
				
				case 66:
					return 3244;
				
				case 67:
					return 3252;
				
				case 68:
					return 3260;
				
				case 69:
					return 3268;
				
				case 70:
					return 3276;
				
				case 71:
					return 3284;
				
				case 72:
					return 3292;
				
				case 73:
					return 3300;
				
				case 74:
					return 3308;
				
				case 75:
					return 3316;
				
				case 76:
					return 3324;
				
				case 77:
					return 3333;
				
				case 78:
					return 3341;
				
				case 79:
					return 3348;
				
				case 80:
					return 3356;
				
				case 81:
					return 3364;
				
				case 82:
					return 3372;
				
				case 83:
					return 3380;
				
				case 84:
					return 3388;
				
				case 85:
					return 3396;
				
				case 86:
					return 3403;
				
				case 87:
					return 3410;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4032;
				
				case 89:
					return 4040;
				
				case 90:
					return 4048;
				
				case 91:
					return 4056;
				
				case 92:
					return 4064;
				
				case 93:
					return 4072;
				
				case 94:
					return 4080;
				
				case 95:
					return 4088;
				
				case 96:
					return 4096;
				
				case 97:
					return 4104;
				
				case 98:
					return 4112;
				
				case 99:
					return 4120;
				
				case 100:
					return 4129;
				
				case 101:
					return 4137;
				
				case 102:
					return 4144;
				
				case 103:
					return 4152;
				
				case 104:
					return 4160;
				
				case 105:
					return 4168;
				
				case 106:
					return 4176;
				
				case 107:
					return 4184;
				
				case 108:
					return 4192;
				
				case 109:
					return 4200;
				
				case 110:
					return 4208;
				
				case 111:
					return 4216;
				
				case 112:
					return 4224;
				
				case 113:
					return 4232;
				
				case 114:
					return 4240;
				
				case 115:
					return 4248;
				
				case 116:
					return 4256;
				
				case 117:
					return 4264;
				
				case 118:
					return 4272;
				
				case 119:
					return 4280;
				
				case 120:
					return 4289;
				
				case 121:
					return 4297;
				
				case 122:
					return 4304;
				
				case 123:
					return 4312;
				
				case 124:
					return 4320;
				
				case 125:
					return 4328;
				
				case 126:
					return 4336;
				
				case 127:
					return 4344;
				
				case 128:
					return 4352;
				
				case 129:
					return 4360;
				
				case 130:
					return 4368;
				
				case 131:
					return 4376;
				
				case 132:
					return 4384;
				
				case 133:
					return 4392;
				
				case 134:
					return 4400;
				
				case 135:
					return 4408;
				
				case 136:
					return 4416;
				
				case 137:
					return 4424;
				
				case 138:
					return 4432;
				
				case 139:
					return 4440;
				
				case 140:
					return 4449;
				
				case 141:
					return 4457;
				
				case 142:
					return 4464;
				
				case 143:
					return 4472;
				
				case 144:
					return 4480;
				
				case 145:
					return 4488;
				
				case 146:
					return 4496;
				
				case 147:
					return 4504;
				
				case 148:
					return 4512;
				
				case 149:
					return 4520;
				
				case 150:
					return 4528;
				
				case 151:
					return 4536;
				
				case 152:
					return 4544;
				
				case 153:
					return 4552;
				
				case 154:
					return 4560;
				
				case 155:
					return 4568;
				
				case 156:
					return 4576;
				
				case 157:
					return 4584;
				
				case 158:
					return 5477;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5926;
				
				case 160:
					return 5933;
				
				case 161:
					return 5940;
				
				case 162:
					return 5947;
				
				case 163:
					return 5954;
				
				case 164:
					return 5961;
				
				case 165:
					return 5968;
				
				case 166:
					return 5975;
				
				case 167:
					return 5982;
				
				case 168:
					return 5989;
				
				case 169:
					return 5996;
				
				case 170:
					return 6003;
				
				case 171:
					return 6010;
				
				case 172:
					return 6017;
				
				case 173:
					return 6024;
				
				case 174:
					return 6031;
				
				case 175:
					return 6038;
				
				case 176:
					return 6045;
				
				case 177:
					return 6052;
				
				case 178:
					return 6059;
				
				case 179:
					return 6066;
				
				case 180:
					return 6073;
				
				case 181:
					return 6080;
				
				case 182:
					return 6087;
				
				case 183:
					return 6094;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6171;
				
				case 185:
					return 6178;
				
				case 186:
					return 6185;
				
				case 187:
					return 6192;
				
				case 188:
					return 6199;
				
				case 189:
					return 6206;
				
				case 190:
					return 6213;
				
				case 191:
					return 6220;
				
				case 192:
					return 6227;
				
				case 193:
					return 6234;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6568;
				
				case 195:
					return 6575;
				
				case 196:
					return 6582;
				
				case 197:
					return 6589;
				
				case 198:
					return 6596;
				
				case 199:
					return 6603;
				
				case 200:
					return 6610;
				
				case 201:
					return 6617;
				
				case 202:
					return 6624;
				
				case 203:
					return 6631;
				
				case 204:
					return 6638;
				
				case 205:
					return 6645;
				
				case 206:
					return 6652;
				
				case 207:
					return 6659;
				
				case 208:
					return 6666;
				
				case 209:
					return 6673;
				
				case 210:
					return 6680;
				
				case 211:
					return 6687;
				
				case 212:
					return 6694;
				
				case 213:
					return 6701;
				
				case 214:
					return 6708;
				
				case 215:
					return 6715;
				
				case 216:
					return 6722;
				
				case 217:
					return 6729;
				
				case 218:
					return 6736;
				
				case 219:
					return 6743;
				
				case 220:
					return 6750;
				
				case 221:
					return 6757;
				
				case 222:
					return 6764;
				
				case 223:
					return 6771;
				
				case 224:
					return 6778;
				
				case 225:
					return 6785;
				
				case 226:
					return 6792;
				
				case 227:
					return 6799;
				
				case 228:
					return 6806;
				
				case 229:
					return 6813;
				
				case 230:
					return 6820;
				
				default:
			}
			break;
			break;
	}
	return 1629;
}

int func_741(int iParam0)//Position - 0x21A35
{
	int iVar0;
	
	if (iParam0 < 231)
	{
		iVar0 = 0;
		while (iVar0 < 18)
		{
			if (iParam0 >= func_649(iVar0) && iParam0 < func_742(iVar0))
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_742(int iParam0)//Position - 0x21A77
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 108;
			break;
		
		case 9:
			return 128;
			break;
		
		case 10:
			return 148;
			break;
		
		case 11:
			return 156;
			break;
		
		case 6:
			return 75;
			break;
		
		case 7:
			return 88;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 179;
			break;
		
		case 13:
			return 186;
			break;
		
		case 14:
			return 192;
			break;
		
		case 15:
			return 202;
			break;
		
		case 16:
			return 212;
			break;
		
		case 17:
			return 222;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_652(iParam0);
		return func_743(iVar0);
	}
	return (func_650(iParam0, -1) * iParam0 + 1);
}

int func_743(int iParam0)//Position - 0x21B60
{
	switch (iParam0)
	{
		case 0:
			return 157;
		
		case 2:
			return 224;
		
		case 1:
			return 227;
		
		default:
	}
	return -1;
}

int func_744(int iParam0, int iParam1)//Position - 0x21B91
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_19();
	}
	if (iParam0 == 7 && !Global_40001.f_3FE5)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_652(iParam0);
		if (iVar1 == 0 && func_423(5389, iParam1, 0) != 0)
		{
			return 1234;
		}
		if (func_745(-1) && iVar1 == 2)
		{
			return 1236;
		}
		if (func_687(unk_0xB5CEFD608600A09F()) && iVar1 == 1)
		{
			return 1237;
		}
	}
	if (iParam0 == 0)
	{
		return Global_14F648[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_270D5E[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 18)
		{
			return 0;
		}
		return Global_270CF3[(iParam0 - 1) /*3*/][iVar0];
	}
	return 0;
}

bool func_745(int iParam0)//Position - 0x21C6C
{
	if (!Global_40001.f_59D5)
	{
		return 0;
	}
	return func_423(7203, iParam0, 0) != 0;
}

int func_746(int iParam0)//Position - 0x21C8F
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case joaat("technical2"):
			return 0;
			break;
		
		case joaat("boxville5"):
			return 1;
			break;
		
		case joaat("wastelander"):
			return 2;
			break;
		
		case joaat("phantom2"):
			return 3;
			break;
		
		case joaat("voltic2"):
			return 4;
			break;
		
		case joaat("dune4"):
			return 5;
			break;
		
		case joaat("dune5"):
			return 5;
			break;
		
		case joaat("ruiner2"):
			return 6;
			break;
		
		case joaat("blazer5"):
			return 7;
			break;
	}
	return -1;
}

int func_747(int iParam0)//Position - 0x21D18
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = iParam0 + 157;
		func_648(iVar1, &iVar0, 1);
		if (iVar0 >= 0)
		{
			iVar2 = func_423(func_740(4, iVar0), -1, 0);
			if (iVar2 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_748(int iParam0)//Position - 0x21D5E
{
	switch (iParam0)
	{
		case -1881846085:
			return 0;
			break;
	}
	return -1;
}

bool func_749()//Position - 0x21D7B
{
	return func_423(func_750(3), -1, 0) != 0;
}

int func_750(int iParam0)//Position - 0x21D90
{
	switch (iParam0)
	{
		case 0:
			return 6534;
			break;
		
		case 1:
			return 6536;
			break;
		
		case 2:
			return 6537;
			break;
		
		case 3:
			return 6538;
			break;
		
		case 4:
			return 6539;
			break;
		
		case 5:
			return 6540;
			break;
	}
	return 8804;
}

bool func_751()//Position - 0x21DFC
{
	return func_423(6159, -1, 0) != 0;
}

bool func_752()//Position - 0x21E0F
{
	return func_423(5376, -1, 0) != 0;
}

bool func_753()//Position - 0x21E22
{
	return func_423(3824, -1, 0) != 0;
}

bool func_754()//Position - 0x21E35
{
	return func_423(3219, -1, 0) != 0;
}

bool func_755()//Position - 0x21E48
{
	return func_423(5375, -1, 0) != 0;
}

int func_756()//Position - 0x21E5B
{
	int iVar0;
	
	iVar0 = func_452();
	if (iVar0 != func_63())
	{
		return Global_18C80F[iVar0 /*558*/].f_B.f_5D;
	}
	return 0;
}

int func_757(int iParam0)//Position - 0x21E83
{
	if (func_101(iParam0) == 225 || func_101(iParam0) == 226)
	{
		return func_414(iParam0);
	}
	return -1;
}

var func_758()//Position - 0x21EB0
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_564(unk_0xB5CEFD608600A09F(), iVar0))
		{
			unk_0xF0059F27F7BB6680(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

void func_759(bool bParam0)//Position - 0x21EE2
{
	if (bParam0)
	{
		if (!func_105(unk_0xB5CEFD608600A09F(), 9))
		{
			if (func_130(unk_0xB5CEFD608600A09F()) != 0)
			{
				func_106(9);
			}
		}
	}
	else if (func_105(unk_0xB5CEFD608600A09F(), 9))
	{
		func_104(9);
	}
}

int func_760(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x21F28
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0x7CB6FD92BE491AD9(&Global_93B, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_761(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_BFE = iParam6;
			Global_B9D[3 /*6*/] = { Global_19B04.f_6D75[iParam0 /*29*/].f_3 };
			Global_BEA = iParam0;
			unk_0xF0059F27F7BB6680(&Global_93B, 1);
			unk_0xF0059F27F7BB6680(&Global_93B, 7);
		}
		return 1;
	}
	return 0;
}

int func_761(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0x21FC0
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x3362CDE8460ED38B(sParam14, sParam15))
	{
	}
	func_771();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_389D == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_389D == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_389D == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			if (unk_0xBCBEDE9A08E4ED89(unk_0xBC25C936A095B5BA()))
			{
				return 0;
			}
		}
		if (Global_19B04.f_36C6[Global_389D /*20*/].f_11 == 1)
		{
			return 0;
		}
		if (unk_0xB731B8C5BCE89836(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0xB731B8C5BCE89836(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_770() == 0)
	{
		func_768();
		return 0;
	}
	func_767(Global_41E3);
	StringCopy(&(Global_19B04.f_3720[Global_41E3 /*104*/]), sParam1, 64);
	Global_19B04.f_3720[Global_41E3 /*104*/].f_11 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_19B04.f_3720[Global_41E3 /*104*/].f_18 = iParam2;
	}
	Global_19B04.f_3720[Global_41E3 /*104*/].f_19 = iParam7;
	Global_19B04.f_3720[Global_41E3 /*104*/].f_1A = uParam8;
	Global_19B04.f_3720[Global_41E3 /*104*/].f_1D = uParam9;
	Global_19B04.f_3720[Global_41E3 /*104*/].f_1E = uParam12;
	Global_19B04.f_3720[Global_41E3 /*104*/].f_1F = uParam11;
	Global_19B04.f_3720[Global_41E3 /*104*/].f_1C = 0;
	Global_19B04.f_3720[Global_41E3 /*104*/].f_20 = iParam3;
	StringCopy(&(Global_19B04.f_3720[Global_41E3 /*104*/].f_21), sParam4, 64);
	Global_19B04.f_3720[Global_41E3 /*104*/].f_31 = iParam6;
	StringCopy(&(Global_19B04.f_3720[Global_41E3 /*104*/].f_32), sParam5, 64);
	Global_19B04.f_3720[Global_41E3 /*104*/].f_42 = iParam13;
	StringCopy(&(Global_19B04.f_3720[Global_41E3 /*104*/].f_43), sParam14, 64);
	StringCopy(&(Global_19B04.f_3720[Global_41E3 /*104*/].f_53), sParam15, 64);
	if (unk_0xFA30DFD0084E92FE(Global_93B, 10))
	{
		Global_19B04.f_3720[Global_41E3 /*104*/].f_63[0] = 1;
		Global_19B04.f_3720[Global_41E3 /*104*/].f_63[1] = 1;
		Global_19B04.f_3720[Global_41E3 /*104*/].f_63[2] = 1;
		Global_BFD = 4;
		func_766(0);
		func_766(2);
		func_766(1);
	}
	else
	{
		func_771();
		switch (iParam16)
		{
			case 3:
				Global_19B04.f_3720[Global_41E3 /*104*/].f_63[Global_389D] = 1;
				break;
			
			case 0:
				Global_19B04.f_3720[Global_41E3 /*104*/].f_63[0] = 1;
				break;
			
			case 2:
				Global_19B04.f_3720[Global_41E3 /*104*/].f_63[2] = 1;
				break;
			
			case 1:
				Global_19B04.f_3720[Global_41E3 /*104*/].f_63[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_389D)
			{
				case 0:
					func_766(0);
					Global_BFD = 0;
					break;
				
				case 1:
					func_766(1);
					Global_BFD = 1;
					break;
				
				case 2:
					func_766(2);
					Global_BFD = 2;
					break;
				
				case 3:
					func_766(3);
					Global_BFD = 3;
					break;
				
				default:
					Global_BFD = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0xFA30DFD0084E92FE(Global_93B, 10))
		{
			Global_19B04.f_36C6[0 /*20*/].f_11 = 1;
			Global_19B04.f_36C6[1 /*20*/].f_11 = 1;
			Global_19B04.f_36C6[2 /*20*/].f_11 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_19B04.f_36C6[Global_389D /*20*/].f_11 = 1;
					break;
				
				case 0:
					Global_19B04.f_36C6[0 /*20*/].f_11 = 1;
					break;
				
				case 2:
					Global_19B04.f_36C6[2 /*20*/].f_11 = 1;
					break;
				
				case 1:
					Global_19B04.f_36C6[1 /*20*/].f_11 = 1;
					break;
				}
			}
	}
	Global_41E5[Global_41E3] = 0;
	if (bParam10)
	{
		func_771();
		if (Global_3864)
		{
			StringCopy(&Global_3892, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_389D)
			{
				case 0:
					StringCopy(&Global_3892, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_3892, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_3892, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_3892, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_C60[Global_389D /*2811*/][0 /*281*/].f_103 == 1)
		{
			if (!func_398())
			{
				unk_0xC4BA30B532FE260F(-1, "Text_Arrive_Tone", &Global_3892, true);
			}
		}
	}
	if (!Global_3944)
	{
		if (Global_389D.f_1 == 6)
		{
			func_765(Global_388A, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_762(1);
			func_765(Global_388A, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_3889), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_762(int iParam0)//Position - 0x22476
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
	
	Global_41E4 = 0;
	Global_B98 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_B74[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_764(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_942[iVar1 /*15*/].f_B)
				{
					if (iVar0 == Global_942[iVar1 /*15*/].f_4)
					{
						if (Global_B74[iVar0] == 0)
						{
							Global_B50[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0xFA30DFD0084E92FE(Global_93C, 3))
								{
									iVar2 = 42;
									Global_3947 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_3947 = 0;
								}
								unk_0x29CD142125FE177B(Global_388A, "SET_DATA_SLOT");
								unk_0x1E1FB49121565EB6(1);
								unk_0x1E1FB49121565EB6(iVar0);
								unk_0x1E1FB49121565EB6(Global_942[iVar1 /*15*/].f_A);
								unk_0x1E1FB49121565EB6(0);
								func_158(&(Global_942[iVar1 /*15*/]));
								unk_0x1E1FB49121565EB6(iVar2);
								unk_0xF9FBC2F3F73D94C9();
							}
							if (Global_25805E)
							{
								if (iVar1 == 14)
								{
									func_763(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_41DF), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_B74[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_942[iVar1 /*15*/].f_B)
				{
					if (iVar0 == Global_942[iVar1 /*15*/].f_4)
					{
						if (Global_B74[iVar0] == 0)
						{
							Global_B50[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_19B04.f_3720[iVar3 /*104*/].f_18 != 0)
									{
										if (Global_19B04.f_3720[iVar3 /*104*/].f_1C == 0)
										{
											if (Global_19B04.f_3720[iVar3 /*104*/].f_63[Global_389D] == 1)
											{
												Global_41E4++;
											}
										}
									}
									iVar3++;
								}
								func_763(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_41E4), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_11542)
								{
									iVar4 = 0;
									iVar4 = Global_4118D8;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4118D9[iVar5 /*104*/].f_18 != 0)
										{
											if (Global_4118D9[iVar5 /*104*/].f_1C == 0)
											{
												if (Global_4118D9[iVar5 /*104*/].f_63[Global_389D] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_763(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_389D)
									{
										case 0:
											iVar6 = Global_90C6;
											break;
										
										case 1:
											iVar6 = Global_90C7;
											break;
										
										case 2:
											iVar6 = Global_90C8;
											break;
										
										default:
											break;
									}
									func_763(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_763(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_41DF), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x29CD142125FE177B(Global_388A, "SET_DATA_SLOT");
								unk_0x1E1FB49121565EB6(1);
								unk_0x1E1FB49121565EB6(iVar0);
								unk_0x1E1FB49121565EB6(Global_942[iVar1 /*15*/].f_A);
								unk_0x1E1FB49121565EB6(0);
								func_158(&(Global_942[iVar1 /*15*/]));
								unk_0x1E1FB49121565EB6(Global_941);
								unk_0xF9FBC2F3F73D94C9();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xFA30DFD0084E92FE(Global_93C, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x29CD142125FE177B(Global_388A, "SET_DATA_SLOT");
								unk_0x1E1FB49121565EB6(1);
								unk_0x1E1FB49121565EB6(iVar0);
								unk_0x1E1FB49121565EB6(Global_942[iVar1 /*15*/].f_A);
								unk_0x1E1FB49121565EB6(0);
								func_158(&(Global_942[iVar1 /*15*/]));
								unk_0x1E1FB49121565EB6(iVar7);
								unk_0xF9FBC2F3F73D94C9();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xFA30DFD0084E92FE(Global_93C, 3))
								{
									iVar8 = 42;
									Global_3947 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_3947 = 0;
								}
								unk_0x29CD142125FE177B(Global_388A, "SET_DATA_SLOT");
								unk_0x1E1FB49121565EB6(1);
								unk_0x1E1FB49121565EB6(iVar0);
								unk_0x1E1FB49121565EB6(Global_942[iVar1 /*15*/].f_A);
								unk_0x1E1FB49121565EB6(0);
								func_158(&(Global_942[iVar1 /*15*/]));
								unk_0x1E1FB49121565EB6(iVar8);
								unk_0xF9FBC2F3F73D94C9();
							}
							else if (iVar1 == 8)
							{
								unk_0x29CD142125FE177B(Global_388A, "SET_DATA_SLOT");
								unk_0x1E1FB49121565EB6(1);
								unk_0x1E1FB49121565EB6(iVar0);
								unk_0x1E1FB49121565EB6(Global_942[iVar1 /*15*/].f_A);
								unk_0x1E1FB49121565EB6(0);
								func_158(&(Global_942[iVar1 /*15*/]));
								unk_0x1E1FB49121565EB6(42);
								unk_0xF9FBC2F3F73D94C9();
							}
							else if ((iVar1 == 23 && unk_0x3362CDE8460ED38B(&(Global_942[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xFA30DFD0084E92FE(Global_93C, 6))
							{
								unk_0x29CD142125FE177B(Global_388A, "SET_DATA_SLOT");
								unk_0x1E1FB49121565EB6(1);
								unk_0x1E1FB49121565EB6(iVar0);
								unk_0x1E1FB49121565EB6(Global_942[iVar1 /*15*/].f_A);
								unk_0x1E1FB49121565EB6(0);
								func_158(&(Global_942[iVar1 /*15*/]));
								unk_0x1E1FB49121565EB6(42);
								unk_0xF9FBC2F3F73D94C9();
							}
							else if (Global_942[iVar1 /*15*/].f_A == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_18C323.f_1;
								func_763(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_763(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(0), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_B74[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_763(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x22A0F
{
	unk_0x29CD142125FE177B(iParam0, sParam1);
	unk_0x1E1FB49121565EB6(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x1E1FB49121565EB6(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x1E1FB49121565EB6(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x1E1FB49121565EB6(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x1E1FB49121565EB6(SYSTEM::ROUND(fParam6));
	}
	if (!unk_0xF1734B55490E9045(sParam7))
	{
		func_158(sParam7);
	}
	if (!unk_0xF1734B55490E9045(sParam8))
	{
		func_158(sParam8);
	}
	if (!unk_0xF1734B55490E9045(sParam9))
	{
		func_158(sParam9);
	}
	if (!unk_0xF1734B55490E9045(sParam10))
	{
		func_158(sParam10);
	}
	if (!unk_0xF1734B55490E9045(sParam11))
	{
		func_158(sParam11);
	}
	unk_0xF9FBC2F3F73D94C9();
}

bool func_764(int iParam0)//Position - 0x22AC2
{
	return Global_8C41 == iParam0;
}

void func_765(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x22AD0
{
	unk_0x29CD142125FE177B(iParam0, sParam1);
	unk_0x1E1FB49121565EB6(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x1E1FB49121565EB6(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x1E1FB49121565EB6(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x1E1FB49121565EB6(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x1E1FB49121565EB6(SYSTEM::ROUND(fParam6));
	}
	unk_0xF9FBC2F3F73D94C9();
}

void func_766(int iParam0)//Position - 0x22B33
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_19B04.f_36C6[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_767(int iParam0)//Position - 0x22B52
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = unk_0xF40D00CD7B81C0A8();
	iVar1 = unk_0x7E09057438B9D216();
	iVar2 = unk_0x6E06C0DB9B43570D();
	iVar3 = unk_0xBE14F159908E4EE5();
	uVar4 = unk_0xDD6A91E47ED4D0CF() + 1;
	iVar5 = unk_0x4EEB3860BFC44B78();
	Global_19B04.f_3720[iParam0 /*104*/].f_12 = iVar0;
	Global_19B04.f_3720[iParam0 /*104*/].f_12.f_1 = iVar1;
	Global_19B04.f_3720[iParam0 /*104*/].f_12.f_2 = iVar2;
	Global_19B04.f_3720[iParam0 /*104*/].f_12.f_3 = iVar3;
	Global_19B04.f_3720[iParam0 /*104*/].f_12.f_4 = uVar4;
	Global_19B04.f_3720[iParam0 /*104*/].f_12.f_5 = iVar5;
}

void func_768()//Position - 0x22BE4
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_11542)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_41E3 = 34;
	Global_19B04.f_3720[Global_41E3 /*104*/].f_12 = -1;
	Global_19B04.f_3720[Global_41E3 /*104*/].f_12.f_1 = 0;
	Global_19B04.f_3720[Global_41E3 /*104*/].f_12.f_2 = 0;
	Global_19B04.f_3720[Global_41E3 /*104*/].f_12.f_3 = 0;
	Global_19B04.f_3720[Global_41E3 /*104*/].f_12.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_769(Global_19B04.f_3720[iVar2 /*104*/].f_12, Global_19B04.f_3720[Global_41E3 /*104*/].f_12))
		{
			Global_41E3 = iVar2;
		}
		iVar2++;
	}
	Global_19B04.f_3720[Global_41E3 /*104*/].f_18 = 1;
}

int func_769(struct<6> Param0, struct<6> Param1)//Position - 0x22CAF
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1 = Param1;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_770()//Position - 0x22D9A
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_11542)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_19B04.f_3720[iVar2 /*104*/].f_18 == 0)
		{
			Global_41E3 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_41E3 = 34;
	Global_19B04.f_3720[Global_41E3 /*104*/].f_12 = -1;
	Global_19B04.f_3720[Global_41E3 /*104*/].f_12.f_1 = 0;
	Global_19B04.f_3720[Global_41E3 /*104*/].f_12.f_2 = 0;
	Global_19B04.f_3720[Global_41E3 /*104*/].f_12.f_3 = 0;
	Global_19B04.f_3720[Global_41E3 /*104*/].f_12.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_19B04.f_3720[iVar2 /*104*/].f_18 == 0 || Global_19B04.f_3720[iVar2 /*104*/].f_18 == 1)
		{
			if (!func_769(Global_19B04.f_3720[iVar2 /*104*/].f_12, Global_19B04.f_3720[Global_41E3 /*104*/].f_12))
			{
				Global_41E3 = iVar2;
			}
		}
		if (Global_19B04.f_3720[iVar2 /*104*/].f_18 == 2)
		{
		}
		iVar2++;
	}
	if (Global_41E3 == 34)
	{
		return 0;
	}
	Global_19B04.f_3720[Global_41E3 /*104*/].f_63[0] = 0;
	Global_19B04.f_3720[Global_41E3 /*104*/].f_63[1] = 0;
	Global_19B04.f_3720[Global_41E3 /*104*/].f_63[2] = 0;
	return 1;
}

void func_771()//Position - 0x22F02
{
	if (func_764(14))
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
		Global_389D = func_772();
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

var func_772()//Position - 0x22FA4
{
	func_773();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_773()//Position - 0x22FBD
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_776(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_775(unk_0xBC25C936A095B5BA());
			if (func_774(iVar0) && (!func_764(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_774(Global_19B04.f_932.f_21B.f_10CD))
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

bool func_774(int iParam0)//Position - 0x230BA
{
	return iParam0 < 3;
}

int func_775(int iParam0)//Position - 0x230C6
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_776(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_776(int iParam0)//Position - 0x23103
{
	if (func_774(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_777()//Position - 0x2312D
{
	if (!func_726())
	{
		return;
	}
	if (!unk_0x56BEECB328B6D29D(unk_0x1377080E9B0BD993()) == Global_140740.f_9)
	{
		return;
	}
	func_722();
}

void func_778()//Position - 0x2315A
{
	if (func_17(unk_0xB5CEFD608600A09F(), 0))
	{
		return;
	}
	switch (Local_106[unk_0x6BAA0516CC970D99() /*14*/].f_9)
	{
		case 0:
			func_780();
			func_297();
			if (Local_105.f_75 == 2)
			{
				Local_106[unk_0x6BAA0516CC970D99() /*14*/].f_9 = 2;
			}
			else if (Local_105.f_75 == 3)
			{
				Local_106[unk_0x6BAA0516CC970D99() /*14*/].f_9 = 3;
			}
			break;
		
		case 2:
			func_297();
			if (func_779())
			{
				func_713();
			}
			if (Local_105.f_75 == 3)
			{
				Local_106[unk_0x6BAA0516CC970D99() /*14*/].f_9 = 3;
			}
			break;
		
		case 3:
			func_861();
			break;
	}
}

bool func_779()//Position - 0x231F6
{
	return ((unk_0xFA30DFD0084E92FE(Local_105.f_1, 1) || unk_0xFA30DFD0084E92FE(Local_105.f_1, 3)) || unk_0xFA30DFD0084E92FE(Local_105.f_1, 5));
}

void func_780()//Position - 0x23225
{
	func_800();
	func_799();
	func_734();
	func_716();
	func_789();
	func_788();
	func_783();
	func_782();
	func_701();
	func_781();
}

void func_781()//Position - 0x23255
{
}

void func_782()//Position - 0x2325D
{
	if (func_779())
	{
		return;
	}
	if (!func_847())
	{
		return;
	}
	if (!Global_40001.f_3839)
	{
		return;
	}
	if (Local_105.f_73 == 0)
	{
		return;
	}
}

void func_783()//Position - 0x23293
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	
	if (func_847())
	{
		return;
	}
	if (func_779())
	{
		return;
	}
	fVar2 = func_140(&iVar0, 1);
	if (fVar2 < 62500f)
	{
		if (iVar0 > -1)
		{
			if (iLocal_114 != iVar0)
			{
				vVar1 = { unk_0x541C2AEF053615BC(unk_0xE48AD7BF7762E114(Local_105.f_2[iVar0 /*26*/].f_1), false) };
				func_90(10, 0, 0, 0, 0);
				func_784(vVar1, 0f, 250f, 1, 75f, 0, 1, 65f, 1, 0, 0, 1, -1082130432);
				iLocal_114 = iVar0;
				unk_0xF0059F27F7BB6680(&iLocal_107, 16);
			}
		}
	}
	else if (fVar2 > 250000f)
	{
		func_327();
	}
}

void func_784(vector3 vParam0, float fParam1, float fParam2, int iParam3, float fParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)//Position - 0x23336
{
	struct<28> Var0;
	
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_15 = 1115815936;
	Var0.f_1B = -1082130432;
	if (unk_0x3C406FC829C1E14A(Global_24D43C.f_6))
	{
		if (!Global_24D43C.f_6 == unk_0x8A55B15F4133C912())
		{
			return;
		}
	}
	else
	{
		Global_24D43C.f_6 = unk_0x8A55B15F4133C912();
	}
	Var0.f_6 = Global_24D43C.f_6;
	Var0 = { vParam0 };
	Var0.f_5 = fParam1;
	Var0.f_4 = fParam2;
	Var0.f_7 = iParam3;
	Var0.f_3 = fParam4;
	Var0.f_8 = iParam6;
	Var0.f_9 = iParam5;
	Var0.f_A = 0;
	Var0.f_B = { 0f, 0f, 0f };
	Var0.f_E = { 0f, 0f, 0f };
	Var0.f_11 = 0f;
	Var0.f_15 = fParam7;
	Var0.f_16 = iParam8;
	if (func_785(unk_0xB5CEFD608600A09F()))
	{
		if (iParam11 || iParam5)
		{
			Var0.f_17 = 1;
		}
		else
		{
			Var0.f_17 = 0;
		}
	}
	else
	{
		Var0.f_17 = 0;
	}
	if (Var0.f_15 < 1f)
	{
		Var0.f_15 = 1f;
	}
	Var0.f_18 = iParam9;
	Var0.f_1A = iParam10;
	Var0.f_1B = iParam12;
	Global_24D43C = { Var0 };
}

int func_785(int iParam0)//Position - 0x23444
{
	if (((func_786(iParam0, 1) || func_128(iParam0)) || func_102(iParam0, 0)) || func_368(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_786(int iParam0, bool bParam1)//Position - 0x23480
{
	if (Global_1406BF != 0)
	{
		return func_787(iParam0) != 0;
	}
	return func_265(iParam0, bParam1);
}

int func_787(int iParam0)//Position - 0x234A6
{
	if (func_948(iParam0, 0, 1))
	{
		return Global_24FB5C[iParam0 /*406*/].f_1;
	}
	return 0;
}

void func_788()//Position - 0x234C8
{
	int iVar0;
	
	if (iLocal_111 != Local_105.f_73)
	{
		if (func_847())
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()))
				{
					if (!unk_0xD92FE7FDA11C7334())
					{
						iVar0 = unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F());
						switch (Local_105.f_73)
						{
							case 1:
								if (iVar0 < Global_40001.f_3836)
								{
									unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), Global_40001.f_3836, 0);
									unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
								}
								break;
							
							case 2:
								if (iVar0 < Global_40001.f_3837)
								{
									unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), Global_40001.f_3837, 0);
									unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
								}
								break;
							
							case 3:
								if (iVar0 < Global_40001.f_3838)
								{
									unk_0xAEC867D0DBB7AFEB(Global_40001.f_3838);
									unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), Global_40001.f_3838, 0);
									unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
								}
								break;
						}
						iLocal_111 = Local_105.f_73;
					}
				}
			}
		}
		else
		{
			iLocal_111 = Local_105.f_73;
		}
	}
}

void func_789()//Position - 0x235B9
{
	int iVar0;
	
	if (!func_362())
	{
		if (func_798("HUNT_HELPA", "HUNT_TARBLP"))
		{
			unk_0x7456702622C62EA0(1);
		}
		return;
	}
	iVar0 = func_130(unk_0xB5CEFD608600A09F());
	if (iVar0 < 2)
	{
		if (func_798("HUNT_HELPA", "HUNT_TARBLP"))
		{
			unk_0x7456702622C62EA0(1);
		}
		return;
	}
	if (!unk_0xFA30DFD0084E92FE(iLocal_107, 2))
	{
		if (!func_797(86))
		{
			if (func_791(0, 1, 1, 1))
			{
				if (unk_0x6BAA0516CC970D99() == Local_105.f_76)
				{
					func_790("HUNT_HELPA", "HUNT_TARBLP", 6, -1);
					func_306(1);
					unk_0xF0059F27F7BB6680(&iLocal_107, 2);
				}
				else if (func_848() == Local_105.f_76)
				{
					func_790("HUNT_HELPAG", "HUNT_TARBLP", 6, -1);
					func_306(1);
					unk_0xF0059F27F7BB6680(&iLocal_107, 2);
				}
				else if (func_285())
				{
					func_790("HUNT_HELPD", "HUNT_TARRVL", 9, -1);
					func_306(1);
					unk_0xF0059F27F7BB6680(&iLocal_107, 2);
				}
			}
		}
	}
	if (unk_0xFA30DFD0084E92FE(iLocal_107, 2))
	{
		if (!unk_0xFA30DFD0084E92FE(iLocal_107, 3))
		{
			if (func_791(0, 1, 1, 1))
			{
				if (!func_798("HUNT_HELPA", "HUNT_TARBLP"))
				{
					if (unk_0x6BAA0516CC970D99() == Local_105.f_76 || func_848() == Local_105.f_76)
					{
						func_307("HUNT_HELPB", -1);
						func_306(1);
						unk_0xF0059F27F7BB6680(&iLocal_107, 3);
					}
				}
			}
		}
	}
}

void func_790(char* sParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x23700
{
	unk_0x2F618BD43614DD0D(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x449F0674640D94C0(iParam2);
	}
	unk_0xC9C304D0AABE1335(sParam1);
	unk_0x72F8FA06CC9EC899(0, 0, false, iParam3);
}

int func_791(bool bParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x2372B
{
	if (iParam2 && unk_0xF16DAFF595E80F7C())
	{
		return 0;
	}
	if (func_796())
	{
		return 0;
	}
	if (!unk_0x726D9204B160D23E())
	{
		return 0;
	}
	if (func_275())
	{
		return 0;
	}
	if (func_399())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_265(unk_0xB5CEFD608600A09F(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_795(unk_0xB5CEFD608600A09F()))
		{
			return 0;
		}
	}
	if (func_794())
	{
		return 0;
	}
	if (unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		return 0;
	}
	if (unk_0xE186ACC7BE9B244E())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()))
		{
			return 0;
		}
	}
	if (Global_180514)
	{
		return 0;
	}
	if (func_793())
	{
		return 0;
	}
	if (func_792())
	{
		return 0;
	}
	if (func_268())
	{
		return 0;
	}
	if (Global_10AB8)
	{
		return 0;
	}
	if (Global_269665)
	{
		return 0;
	}
	return 1;
}

bool func_792()//Position - 0x23818
{
	return Global_255A46.f_243;
}

bool func_793()//Position - 0x23827
{
	return Global_255A46.f_2DB;
}

bool func_794()//Position - 0x23836
{
	return Global_252E21.f_BD3.f_242;
}

int func_795(int iParam0)//Position - 0x23848
{
	if (Global_24FB5C[iParam0 /*406*/].f_CC == 0)
	{
		return 0;
	}
	return 1;
}

int func_796()//Position - 0x23864
{
	if (Global_3DB8 != 0 || unk_0xE6711F601F11B66B())
	{
		return 1;
	}
	return 0;
}

bool func_797(int iParam0)//Position - 0x23886
{
	return Global_252E21.f_A8F[0 /*80*/].f_1 == iParam0;
}

int func_798(char* sParam0, char* sParam1)//Position - 0x2389D
{
	unk_0xF07D20149ECBC61E(sParam0);
	unk_0xC9C304D0AABE1335(sParam1);
	return unk_0xA66DBDA0A072514A(0);
}

void func_799()//Position - 0x238B6
{
	var uVar0;
	float fVar1;
	
	fVar1 = func_140(&uVar0, 0);
	if (fVar1 < 10000f)
	{
		if (!func_123(unk_0xB5CEFD608600A09F()))
		{
			func_122();
		}
	}
}

void func_800()//Position - 0x238E2
{
	if (func_133())
	{
		if (unk_0xFA30DFD0084E92FE(Local_106[unk_0x6BAA0516CC970D99() /*14*/].f_1, 1))
		{
			func_108(0);
			unk_0x7CB6FD92BE491AD9(&(Local_106[unk_0x6BAA0516CC970D99() /*14*/].f_1), 1);
		}
		return;
	}
	if (func_130(unk_0xB5CEFD608600A09F()) == 0)
	{
		return;
	}
	if (!unk_0xFA30DFD0084E92FE(Local_106[unk_0x6BAA0516CC970D99() /*14*/].f_1, 1))
	{
		if (!func_847())
		{
			if (!func_132())
			{
				if (unk_0xFA30DFD0084E92FE(Local_105.f_1, 6))
				{
					func_108(1);
					unk_0xF0059F27F7BB6680(&(Local_106[unk_0x6BAA0516CC970D99() /*14*/].f_1), 1);
				}
			}
		}
	}
}

void func_801()//Position - 0x23970
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	
	iVar4 = func_63();
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0xFA30DFD0084E92FE(Local_106[unk_0x6BAA0516CC970D99() /*14*/].f_2, iVar0))
		{
			if (!unk_0xFA30DFD0084E92FE(Local_105.f_6E, iVar0))
			{
				if (unk_0x8EA6CABD14F1B89A(Local_105.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_105.f_2[iVar0 /*26*/].f_1))
					{
						if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
						{
							if (func_848() == Local_105.f_76)
							{
								if (func_819(unk_0xE48AD7BF7762E114(Local_105.f_2[iVar0 /*26*/].f_1)))
								{
									unk_0xF0059F27F7BB6680(&(Local_106[unk_0x6BAA0516CC970D99() /*14*/].f_2), iVar0);
								}
							}
						}
					}
				}
			}
		}
		if (!unk_0xFA30DFD0084E92FE(Local_106[unk_0x6BAA0516CC970D99() /*14*/].f_3, iVar0))
		{
			if (!unk_0xFA30DFD0084E92FE(Local_105.f_70, iVar0))
			{
				if (unk_0x8EA6CABD14F1B89A(Local_105.f_2[iVar0 /*26*/].f_2))
				{
					if (func_818(iVar0))
					{
						unk_0xF0059F27F7BB6680(&(Local_106[unk_0x6BAA0516CC970D99() /*14*/].f_3), iVar0);
					}
				}
			}
		}
		if (!unk_0xFA30DFD0084E92FE(Local_106[unk_0x6BAA0516CC970D99() /*14*/].f_4, iVar0))
		{
			if (!unk_0xFA30DFD0084E92FE(Local_105.f_6F, iVar0))
			{
				if (unk_0x8EA6CABD14F1B89A(Local_105.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_105.f_2[iVar0 /*26*/].f_1))
					{
						if (unk_0x04880508C862E589(unk_0x541C2AEF053615BC(unk_0xE48AD7BF7762E114(Local_105.f_2[iVar0 /*26*/].f_1), true), 10f, 1))
						{
							unk_0xF0059F27F7BB6680(&(Local_106[unk_0x6BAA0516CC970D99() /*14*/].f_4), iVar0);
						}
					}
				}
			}
		}
		func_817(iVar0);
		if (func_362())
		{
			if (!unk_0x2DA8CA50A72528FB(iLocal_122[iVar0]))
			{
				if (!func_779())
				{
					if (unk_0x8EA6CABD14F1B89A(Local_105.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_105.f_2[iVar0 /*26*/].f_1))
						{
							iLocal_122[iVar0] = unk_0x511FE22BCF5353CD(unk_0xE48AD7BF7762E114(Local_105.f_2[iVar0 /*26*/].f_1));
							if (func_848() == Local_105.f_76)
							{
								unk_0x12DB69036F6569F7(iLocal_122[iVar0], 12);
								unk_0xBF0E22F3E083C33D(iLocal_122[iVar0], 432);
								func_816(&(iLocal_122[iVar0]), 6);
							}
							else
							{
								unk_0xBF0E22F3E083C33D(iLocal_122[iVar0], 480);
								func_816(&(iLocal_122[iVar0]), 9);
							}
							unk_0x7A6BBF86FCBBCF7E(iLocal_122[iVar0], 1);
							unk_0x6F02E6814C1AD504(iLocal_122[iVar0], 7000);
							unk_0x3F5F1772D71D5EC4(iLocal_122[iVar0], 1.1f);
							unk_0x436D0272182E484D(iLocal_122[iVar0], "HUNT_BLIP");
						}
					}
				}
			}
			else if (unk_0x8EA6CABD14F1B89A(Local_105.f_2[iVar0 /*26*/].f_1))
			{
				if (func_14(Local_105.f_2[iVar0 /*26*/].f_1))
				{
					unk_0x07B8ECB35A4ED3AC(&(iLocal_122[iVar0]));
				}
				else if (func_779())
				{
					unk_0x07B8ECB35A4ED3AC(&(iLocal_122[iVar0]));
				}
			}
		}
		else if (unk_0x2DA8CA50A72528FB(iLocal_122[iVar0]))
		{
			unk_0x07B8ECB35A4ED3AC(&(iLocal_122[iVar0]));
		}
		func_815(iVar0);
		func_814(iVar0);
		func_812(iVar0);
		switch (Local_105.f_2[iVar0 /*26*/].f_11)
		{
			case 1:
				if (unk_0x0DE6397A2CB3EF75())
				{
					if (unk_0x8EA6CABD14F1B89A(Local_105.f_2[iVar0 /*26*/].f_2))
					{
						if (func_12(Local_105.f_2[iVar0 /*26*/].f_2))
						{
							if (!func_14(Local_105.f_2[iVar0 /*26*/].f_1))
							{
								if (unk_0x25EF720B1CAB1E23(unk_0xE48AD7BF7762E114(Local_105.f_2[iVar0 /*26*/].f_1), unk_0x19D7F09C2FABDDA0(Local_105.f_2[iVar0 /*26*/].f_2)))
								{
									if (unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_105.f_2[iVar0 /*26*/].f_1), -258271821) != 1 && unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_105.f_2[iVar0 /*26*/].f_1), -258271821) != 0)
									{
										unk_0x204BA7B1C7DD25F4(unk_0xE48AD7BF7762E114(Local_105.f_2[iVar0 /*26*/].f_1), unk_0x19D7F09C2FABDDA0(Local_105.f_2[iVar0 /*26*/].f_2), 20f, 786603);
									}
								}
							}
						}
					}
				}
				break;
			
			case 2:
				if (unk_0x0DE6397A2CB3EF75())
				{
					if (unk_0x8EA6CABD14F1B89A(Local_105.f_2[iVar0 /*26*/].f_2))
					{
						if (unk_0x8EA6CABD14F1B89A(Local_105.f_2[iVar0 /*26*/].f_1))
						{
							if (func_12(Local_105.f_2[iVar0 /*26*/].f_2))
							{
								if (!func_14(Local_105.f_2[iVar0 /*26*/].f_1))
								{
									if (unk_0x25EF720B1CAB1E23(unk_0xE48AD7BF7762E114(Local_105.f_2[iVar0 /*26*/].f_1), unk_0x19D7F09C2FABDDA0(Local_105.f_2[iVar0 /*26*/].f_2)))
									{
										if ((unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_105.f_2[iVar0 /*26*/].f_1), -258271821) != 1 && unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_105.f_2[iVar0 /*26*/].f_1), -258271821) != 0) || unk_0xFA30DFD0084E92FE(Local_105.f_6C, iVar0))
										{
											unk_0x204BA7B1C7DD25F4(unk_0xE48AD7BF7762E114(Local_105.f_2[iVar0 /*26*/].f_1), unk_0x19D7F09C2FABDDA0(Local_105.f_2[iVar0 /*26*/].f_2), 30f, 786469);
											if (unk_0xFA30DFD0084E92FE(Local_105.f_6C, iVar0))
											{
												unk_0x7CB6FD92BE491AD9(&(Local_105.f_6C), iVar0);
											}
										}
									}
								}
							}
						}
					}
				}
				break;
			
			case 3:
				if (unk_0x8EA6CABD14F1B89A(Local_105.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_105.f_2[iVar0 /*26*/].f_1))
					{
						if (unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_105.f_2[iVar0 /*26*/].f_1), -828834893) != 1 && unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_105.f_2[iVar0 /*26*/].f_1), -828834893) != 0)
						{
							if (func_810(Local_105.f_2[iVar0 /*26*/].f_1))
							{
								if (unk_0x89B5CBCE9D131B32(Local_105.f_2[iVar0 /*26*/].f_1))
								{
									unk_0xA3981DED4FC2E56E(unk_0xE48AD7BF7762E114(Local_105.f_2[iVar0 /*26*/].f_1), 0, 0);
								}
							}
						}
					}
				}
				break;
			
			case 5:
				if (unk_0x8EA6CABD14F1B89A(Local_105.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_105.f_2[iVar0 /*26*/].f_1))
					{
						if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
						{
							if (unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_105.f_2[iVar0 /*26*/].f_1), -1146898486) != 1 && unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_105.f_2[iVar0 /*26*/].f_1), -1146898486) != 0)
							{
								if (func_810(Local_105.f_2[iVar0 /*26*/].f_1))
								{
									if (unk_0x89B5CBCE9D131B32(Local_105.f_2[iVar0 /*26*/].f_1))
									{
										unk_0x8CE2798B9A7027EC(unk_0xE48AD7BF7762E114(Local_105.f_2[iVar0 /*26*/].f_1), 1193033728, 0);
									}
								}
							}
						}
					}
				}
				break;
			
			case 4:
				if (unk_0x8EA6CABD14F1B89A(Local_105.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_105.f_2[iVar0 /*26*/].f_1))
					{
						if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
						{
							if (unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_105.f_2[iVar0 /*26*/].f_1), 1805844857) != 1 && unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_105.f_2[iVar0 /*26*/].f_1), 1805844857) != 0)
							{
								if (func_810(Local_105.f_2[iVar0 /*26*/].f_1))
								{
									if (unk_0x89B5CBCE9D131B32(Local_105.f_2[iVar0 /*26*/].f_1))
									{
										iVar2 = func_808(iVar0);
										if (!unk_0x36CEFBE9B745A58D(iVar2))
										{
											unk_0x5558ED6D4A2DEC93(unk_0xE48AD7BF7762E114(Local_105.f_2[iVar0 /*26*/].f_1), iVar2, 500f, -1, 0, 1);
										}
									}
								}
							}
						}
					}
				}
				break;
			
			case 6:
				if (unk_0x8EA6CABD14F1B89A(Local_105.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_105.f_2[iVar0 /*26*/].f_1))
					{
						if (unk_0x89B5CBCE9D131B32(Local_105.f_2[iVar0 /*26*/].f_1))
						{
							unk_0x2E9860A2B72187F5(unk_0xE48AD7BF7762E114(Local_105.f_2[iVar0 /*26*/].f_1), 187, true);
						}
						iVar3 = unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_105.f_2[iVar0 /*26*/].f_1), -1442466670);
						if (iVar3 != 1 && iVar3 != 0)
						{
							if (func_810(Local_105.f_2[iVar0 /*26*/].f_1))
							{
								if (unk_0x89B5CBCE9D131B32(Local_105.f_2[iVar0 /*26*/].f_1))
								{
									unk_0x2E35C4FA5F0ED22F(unk_0xE48AD7BF7762E114(Local_105.f_2[iVar0 /*26*/].f_1), false);
									unk_0xB90F3BE2A1EF63DB(unk_0xE48AD7BF7762E114(Local_105.f_2[iVar0 /*26*/].f_1), 299f, 0);
								}
							}
						}
					}
				}
				break;
			
			case 9:
				if (unk_0x8EA6CABD14F1B89A(Local_105.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_105.f_2[iVar0 /*26*/].f_1))
					{
						if (unk_0x89B5CBCE9D131B32(Local_105.f_2[iVar0 /*26*/].f_1))
						{
							unk_0x2E9860A2B72187F5(unk_0xE48AD7BF7762E114(Local_105.f_2[iVar0 /*26*/].f_1), 187, true);
						}
						iVar3 = unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_105.f_2[iVar0 /*26*/].f_1), 1910705116);
						if (iVar3 != 1 && iVar3 != 0)
						{
							if (func_810(Local_105.f_2[iVar0 /*26*/].f_1))
							{
								if (unk_0x89B5CBCE9D131B32(Local_105.f_2[iVar0 /*26*/].f_1))
								{
									unk_0x7F159E8BAEBBE6EE(unk_0xE48AD7BF7762E114(Local_105.f_2[iVar0 /*26*/].f_1), 1);
									fVar5 = 0f;
									iVar4 = func_807(iVar0, &fVar5);
									if (iVar4 != func_63())
									{
										unk_0x40DD085221F706D0(unk_0xE48AD7BF7762E114(Local_105.f_2[iVar0 /*26*/].f_1), unk_0xA95CF30C72EB526E(iVar4), -1, 0);
									}
								}
							}
						}
					}
				}
				break;
			
			case 8:
				if (unk_0x8EA6CABD14F1B89A(Local_105.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_105.f_2[iVar0 /*26*/].f_1))
					{
						iVar3 = unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_105.f_2[iVar0 /*26*/].f_1), 993674639);
						if (iVar3 != 1 && iVar3 != 0)
						{
							if (func_810(Local_105.f_2[iVar0 /*26*/].f_1))
							{
								if (unk_0x89B5CBCE9D131B32(Local_105.f_2[iVar0 /*26*/].f_1))
								{
									unk_0xA3A7138EAD2268A0(unk_0xE48AD7BF7762E114(Local_105.f_2[iVar0 /*26*/].f_1), "WORLD_HUMAN_SMOKING", 0, 0);
								}
							}
						}
					}
				}
				break;
		}
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 3)
		{
			switch (Local_105.f_2[iVar0 /*26*/].f_12[iVar1])
			{
				case 0:
					break;
				
				case 1:
					break;
				
				case 8:
					if (unk_0x8EA6CABD14F1B89A(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							iVar3 = unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]), 993674639);
							if (iVar3 != 1 && iVar3 != 0)
							{
								if (func_810(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]))
								{
									if (unk_0x89B5CBCE9D131B32(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										unk_0xA3A7138EAD2268A0(unk_0xE48AD7BF7762E114(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]), "WORLD_HUMAN_GUARD_STAND", 0, 0);
									}
								}
							}
						}
					}
					break;
				
				case 7:
					if (unk_0x8EA6CABD14F1B89A(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							iVar3 = unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]), -1442466670);
							if (iVar3 != 1 && iVar3 != 0)
							{
								if (func_810(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]))
								{
									if (unk_0x89B5CBCE9D131B32(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										unk_0x2E35C4FA5F0ED22F(unk_0xE48AD7BF7762E114(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]), false);
										unk_0xB90F3BE2A1EF63DB(unk_0xE48AD7BF7762E114(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]), 299f, 0);
									}
								}
							}
						}
					}
					break;
				
				case 6:
					if (unk_0x8EA6CABD14F1B89A(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							iVar3 = unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]), -1442466670);
							if (iVar3 != 1 && iVar3 != 0)
							{
								if (func_810(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]))
								{
									if (unk_0x89B5CBCE9D131B32(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										unk_0x2E35C4FA5F0ED22F(unk_0xE48AD7BF7762E114(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]), false);
										unk_0xB90F3BE2A1EF63DB(unk_0xE48AD7BF7762E114(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]), 299f, 0);
									}
								}
							}
						}
					}
					break;
				
				case 3:
					if (unk_0x8EA6CABD14F1B89A(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (unk_0xCBBE5AFE2CD2E9B6(unk_0xE48AD7BF7762E114(Local_105.f_2[iVar0 /*26*/].f_3[iVar1])))
							{
								iVar3 = unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]), -828834893);
								if (iVar3 != 1 && iVar3 != 0)
								{
									if (func_810(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										if (unk_0x89B5CBCE9D131B32(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]))
										{
											unk_0x2E35C4FA5F0ED22F(unk_0xE48AD7BF7762E114(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]), true);
											unk_0xA3981DED4FC2E56E(unk_0xE48AD7BF7762E114(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]), 299, 0);
											unk_0x91629AC1E1F78419(unk_0xE48AD7BF7762E114(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]), 3, true);
										}
									}
								}
							}
						}
					}
					break;
			}
			iVar1++;
		}
		iVar0++;
	}
	if (func_847())
	{
		func_802();
	}
}

void func_802()//Position - 0x245A8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		func_803(uLocal_124[iVar0], &(Local_123[iVar0 /*8*/]), -1082130432, 0, 0, 0, 0, -1, -1, 1);
		iVar0++;
	}
}

void func_803(int iParam0, int iParam1, float fParam2, bool bParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, bool bParam9)//Position - 0x245E1
{
	if (unk_0x7FFE36DB9042AF23(iParam0))
	{
		if (func_806())
		{
			Global_252E21 = unk_0xB5CEFD608600A09F();
		}
		if (bParam3)
		{
			func_805(unk_0xE48AD7BF7762E114(iParam0), iParam1, 1, Global_252E21, iParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_805(unk_0xE48AD7BF7762E114(iParam0), iParam1, -1, Global_252E21, iParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (unk_0x2DA8CA50A72528FB(*iParam1))
	{
		func_804(iParam1);
	}
}

void func_804(int iParam0)//Position - 0x2465C
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

int func_805(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x246CE
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
		unk_0xD09C169D88640D1B(iParam0, iParam4);
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

bool func_806()//Position - 0x248A3
{
	return Global_14083F;
}

int func_807(int iParam0, float fParam1)//Position - 0x248AF
{
	int iVar0;
	float fVar1;
	float fVar2;
	vector3 vVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_63();
	fVar1 = 1E+08f;
	vVar3 = { unk_0x541C2AEF053615BC(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_1), true) };
	iVar4 = 0;
	while (iVar4 < unk_0x81C86888AEA2F49B())
	{
		if (unk_0x05086B70D2CFEA6F(unk_0xCFA8A401AAD7BB5A(iVar4)))
		{
			iVar5 = unk_0x4ED43B67B3F05E0F(unk_0xCFA8A401AAD7BB5A(iVar4));
			if (!func_17(iVar5, 0))
			{
				iVar6 = unk_0xA95CF30C72EB526E(iVar5);
				if (iVar4 == Local_105.f_76 || Local_106[iVar4 /*14*/].f_A == Local_105.f_76)
				{
					if (!unk_0x36CEFBE9B745A58D(iVar6))
					{
						fVar2 = SYSTEM::VDIST2(unk_0x541C2AEF053615BC(iVar6, true), vVar3);
						if (fVar2 < fVar1)
						{
							fVar1 = fVar2;
							iVar0 = iVar5;
						}
					}
				}
			}
		}
		iVar4++;
	}
	if (iVar0 != func_63())
	{
		*fParam1 = fVar1;
	}
	return iVar0;
}

int func_808(int iParam0)//Position - 0x24975
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_809(iParam0);
	if (iVar1 != func_63())
	{
		iVar0 = unk_0xA95CF30C72EB526E(iVar1);
	}
	return iVar0;
}

int func_809(int iParam0)//Position - 0x24998
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	vector3 vVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_63();
	fVar1 = 1E+10f;
	fVar2 = 0f;
	vVar4 = { unk_0x541C2AEF053615BC(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_1), false) };
	iVar3 = 0;
	while (iVar3 < unk_0x81C86888AEA2F49B())
	{
		if (unk_0x05086B70D2CFEA6F(unk_0xCFA8A401AAD7BB5A(iVar3)))
		{
			iVar5 = unk_0x4ED43B67B3F05E0F(unk_0xCFA8A401AAD7BB5A(iVar3));
			iVar6 = unk_0xA95CF30C72EB526E(iVar5);
			if (func_179(iVar5, 1))
			{
				if (!unk_0xFA30DFD0084E92FE(Local_106[iVar3 /*14*/].f_1, 1))
				{
					if (func_64(iVar5) == unk_0x4ED43B67B3F05E0F(unk_0xCFA8A401AAD7BB5A(Local_105.f_76)))
					{
						if (!unk_0x36CEFBE9B745A58D(iVar6))
						{
							fVar2 = SYSTEM::VDIST2(unk_0x541C2AEF053615BC(iVar6, true), vVar4);
							if (fVar2 < fVar1)
							{
								fVar1 = fVar2;
								iVar0 = iVar5;
							}
						}
					}
				}
			}
		}
		iVar3++;
	}
	return iVar0;
}

int func_810(int iParam0)//Position - 0x24A5B
{
	if (unk_0xDD5EE7D9FC37FA16(iParam0))
	{
		return 1;
	}
	if (func_811(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_811(int iParam0)//Position - 0x24A7E
{
	if (!unk_0x0DE6397A2CB3EF75())
	{
		return 0;
	}
	if (!unk_0x8EA6CABD14F1B89A(iParam0))
	{
		return 0;
	}
	if (func_42(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_812(int iParam0)//Position - 0x24AAE
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	vector3 vVar4;
	int iVar5;
	
	if (!func_362())
	{
		return;
	}
	if (func_130(unk_0xB5CEFD608600A09F()) < 1)
	{
		return;
	}
	if (!func_847() && !func_285())
	{
		return;
	}
	if (func_779())
	{
		return;
	}
	if (func_847())
	{
		unk_0xE45648BDBF3441F5(6, &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0xE45648BDBF3441F5(9, &iVar0, &iVar1, &iVar2, &uVar3);
	}
	if (unk_0x8EA6CABD14F1B89A(Local_105.f_2[iParam0 /*26*/].f_1))
	{
		if (!func_14(Local_105.f_2[iParam0 /*26*/].f_1))
		{
			if (!unk_0xCBBE5AFE2CD2E9B6(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_1)))
			{
				vVar4 = { unk_0x541C2AEF053615BC(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_1), true) };
				unk_0xC6EA3A47240425C4(2, vVar4 + Vector(2f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, iVar0, iVar1, iVar2, 100, 1, 1, 2, 0, 0, 0, false);
			}
			else
			{
				iVar5 = unk_0x9FE9D386222EEE47(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_1), 0);
				func_813(iVar5, iVar0, iVar1, iVar2, 0);
			}
		}
	}
}

void func_813(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4)//Position - 0x24BBE
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	fVar2 = 0.5f;
	unk_0x2B3953EE61953843(unk_0x6F79ECA8C83E4357(iParam0), &vVar0, &vVar1);
	fVar3 = ((vVar1.z - vVar0.z) / 2f);
	fVar4 = (vVar1.z - fVar3);
	if (fVar2 <= (fVar4 + 0.1f))
	{
		fVar2 = (fVar4 + 0.4f);
	}
	fVar2 = (fVar2 + fParam4);
	unk_0xC6EA3A47240425C4(2, unk_0x541C2AEF053615BC(iParam0, true) + Vector((((vVar1.z - vVar0.z) / 2f) + fVar2), 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, iParam1, iParam2, iParam3, 100, 1, 1, 2, 0, 0, 0, false);
}

void func_814(int iParam0)//Position - 0x24C55
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	int iVar3;
	bool bVar4;
	
	if (Local_105.f_2[iParam0 /*26*/] != 2)
	{
		return;
	}
	if (Local_105.f_2[iParam0 /*26*/].f_19)
	{
		return;
	}
	if (func_848() != Local_105.f_76)
	{
		return;
	}
	if (unk_0xFA30DFD0084E92FE(Local_106[unk_0x6BAA0516CC970D99() /*14*/].f_D, iParam0))
	{
		return;
	}
	if (!unk_0x8EA6CABD14F1B89A(Local_105.f_2[iParam0 /*26*/].f_1))
	{
		return;
	}
	if (func_14(Local_105.f_2[iParam0 /*26*/].f_1))
	{
		unk_0xF0059F27F7BB6680(&(Local_106[unk_0x6BAA0516CC970D99() /*14*/].f_C), iParam0);
		return;
	}
	iVar0 = unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_1);
	vVar1 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false) };
	vVar2 = { unk_0x541C2AEF053615BC(iVar0, false) };
	if (SYSTEM::VDIST2(vVar1, vVar2) < 5625f)
	{
		unk_0xF0059F27F7BB6680(&(Local_106[unk_0x6BAA0516CC970D99() /*14*/].f_D), iParam0);
		return;
	}
	if (unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		return;
	}
	bVar4 = false;
	iVar3 = 0;
	while (iVar3 < 3)
	{
		if (unk_0x8EA6CABD14F1B89A(Local_105.f_2[iParam0 /*26*/].f_3[iVar3]))
		{
			if (!func_14(Local_105.f_2[iParam0 /*26*/].f_3[iVar3]))
			{
				bVar4 = true;
			}
		}
		iVar3++;
	}
	if (!bVar4)
	{
		unk_0xF0059F27F7BB6680(&(Local_106[unk_0x6BAA0516CC970D99() /*14*/].f_D), iParam0);
	}
}

void func_815(int iParam0)//Position - 0x24D94
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	int iVar3;
	int iVar4;
	
	if (Local_105.f_2[iParam0 /*26*/] != 2)
	{
		return;
	}
	if (Local_105.f_2[iParam0 /*26*/].f_18)
	{
		return;
	}
	if (func_848() != Local_105.f_76)
	{
		return;
	}
	if (unk_0xFA30DFD0084E92FE(Local_106[unk_0x6BAA0516CC970D99() /*14*/].f_C, iParam0))
	{
		return;
	}
	if (!unk_0x8EA6CABD14F1B89A(Local_105.f_2[iParam0 /*26*/].f_1))
	{
		return;
	}
	if (func_14(Local_105.f_2[iParam0 /*26*/].f_1))
	{
		unk_0xF0059F27F7BB6680(&(Local_106[unk_0x6BAA0516CC970D99() /*14*/].f_C), iParam0);
		return;
	}
	iVar0 = unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_1);
	vVar1 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false) };
	vVar2 = { unk_0x541C2AEF053615BC(iVar0, false) };
	if (SYSTEM::VDIST2(vVar1, vVar2) < 62500f)
	{
		unk_0xF0059F27F7BB6680(&(Local_106[unk_0x6BAA0516CC970D99() /*14*/].f_C), iParam0);
		return;
	}
	if (unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		return;
	}
	iVar4 = 0;
	while (iVar4 < 3)
	{
		if (unk_0x8EA6CABD14F1B89A(Local_105.f_2[iParam0 /*26*/].f_3[iVar4]))
		{
			if (func_14(Local_105.f_2[iParam0 /*26*/].f_3[iVar4]))
			{
				unk_0xF0059F27F7BB6680(&(Local_106[unk_0x6BAA0516CC970D99() /*14*/].f_C), iParam0);
			}
			else
			{
				iVar3 = unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_3[iVar4]);
				if (func_848() == Local_105.f_76)
				{
					if (SYSTEM::VDIST2(vVar1, vVar2) < 40000f)
					{
						unk_0xF0059F27F7BB6680(&(Local_106[unk_0x6BAA0516CC970D99() /*14*/].f_C), iParam0);
						return;
					}
					if (func_819(iVar3))
					{
						unk_0xF0059F27F7BB6680(&(Local_106[unk_0x6BAA0516CC970D99() /*14*/].f_C), iParam0);
						return;
					}
				}
			}
		}
		iVar4++;
	}
}

void func_816(var uParam0, int iParam1)//Position - 0x24F2E
{
	int iVar0;
	
	if (unk_0x2DA8CA50A72528FB(*uParam0))
	{
		iVar0 = func_324(iParam1);
		unk_0x0D5352939CC40C16(*uParam0, iVar0);
	}
}

void func_817(int iParam0)//Position - 0x24F54
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar3;
	
	if (Local_105.f_2[iParam0 /*26*/] == 0)
	{
		if (unk_0x8EA6CABD14F1B89A(Local_105.f_2[iParam0 /*26*/].f_1))
		{
			if (unk_0x89B5CBCE9D131B32(Local_105.f_2[iParam0 /*26*/].f_1))
			{
				if (!func_14(Local_105.f_2[iParam0 /*26*/].f_1))
				{
					if (!unk_0x5237AF95232D78C5(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_1), 0))
					{
						fVar0 = unk_0x8910237449BB6F79(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_1));
						if (fVar0 < 0.1f)
						{
							vVar2 = { unk_0x541C2AEF053615BC(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_1), true) };
							vVar3 = { vVar2 };
							vVar3.z = (vVar3.z + 500f);
							if (unk_0x2084D4C6C2DF616F(vVar3, &fVar1, 0, 0))
							{
								if (unk_0x357058E632979E65((vVar2.z - fVar1)) > 30f)
								{
									unk_0x65E471E4A2D56226(unk_0xE48AD7BF7762E114(Local_105.f_2[iParam0 /*26*/].f_1), 0, 0);
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_818(int iParam0)//Position - 0x25036
{
	if (unk_0x8EA6CABD14F1B89A(Local_105.f_2[iParam0 /*26*/].f_2))
	{
		if (func_12(Local_105.f_2[iParam0 /*26*/].f_2))
		{
			if (unk_0xBCDD4514E5CAE591(unk_0x19D7F09C2FABDDA0(Local_105.f_2[iParam0 /*26*/].f_2), 0, 7000) || unk_0xBCDD4514E5CAE591(unk_0x19D7F09C2FABDDA0(Local_105.f_2[iParam0 /*26*/].f_2), 1, 40000))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_819(int iParam0)//Position - 0x250A2
{
	int iVar0;
	int iVar1;
	
	if (unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), iParam0))
	{
		return 1;
	}
	if (unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), iParam0))
	{
		return 1;
	}
	if (func_820())
	{
		if (unk_0x1CD240A97A49C198(unk_0xB5CEFD608600A09F(), &iVar0))
		{
			if (unk_0x386592AF38881675(iVar0))
			{
				iVar1 = unk_0x399F7937FFE4DEBF(iVar0);
				if (unk_0x724D816EA203A79E(iVar1))
				{
					if (!unk_0x1D403DFADBC2DE3C(iVar1, 0))
					{
						if (unk_0x5237AF95232D78C5(iVar1, 0))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

bool func_820()//Position - 0x25114
{
	return Global_1805CD;
}

void func_821()//Position - 0x25120
{
	int iVar0;
	int iVar1;
	
	if (Local_105 != 4)
	{
		iVar1 = unk_0x3171C34AB3FE6F2E(iLocal_110);
		if (unk_0x96B1061E8F3CBC9A(iVar1))
		{
			if (unk_0xF6391659C669C3B1(iVar1))
			{
				if (!func_779())
				{
					if (!func_847())
					{
						if (func_285())
						{
							if (func_179(iVar1, 1))
							{
								iVar0 = unk_0x4ED43B67B3F05E0F(unk_0xCFA8A401AAD7BB5A(Local_105.f_76));
								if (func_74(iVar1, iVar0, 1))
								{
									if (!unk_0xFA30DFD0084E92FE(Local_106[unk_0x6BAA0516CC970D99() /*14*/].f_8, iLocal_110))
									{
										func_325(iVar1, 432, 1, 0);
										func_319(iVar1, func_324(iLocal_125), 1, 0);
										unk_0xF0059F27F7BB6680(&(Local_106[unk_0x6BAA0516CC970D99() /*14*/].f_8), iLocal_110);
									}
								}
							}
						}
					}
				}
			}
			else if (unk_0xFA30DFD0084E92FE(Local_106[unk_0x6BAA0516CC970D99() /*14*/].f_8, iLocal_110))
			{
				func_325(iVar1, 432, 0, 0);
				func_319(iVar1, func_324(iLocal_125), 0, 0);
				unk_0x7CB6FD92BE491AD9(&(Local_106[unk_0x6BAA0516CC970D99() /*14*/].f_8), iLocal_110);
			}
		}
	}
	iLocal_110++;
	if (iLocal_110 >= 32)
	{
		iLocal_110 = 0;
	}
}

int func_822(bool bParam0)//Position - 0x2521E
{
	if (func_826(1))
	{
		return 1;
	}
	if (Global_267214.f_1312.f_21)
	{
		Global_267214.f_1312.f_21 = 0;
		return 1;
	}
	if (bParam0)
	{
		if (func_240() == func_63() || !func_948(func_240(), 0, 1))
		{
			return 1;
		}
	}
	if (!func_371(unk_0xB5CEFD608600A09F()))
	{
		if (func_825(unk_0xB5CEFD608600A09F()) && func_823(func_824(unk_0xB5CEFD608600A09F()), 11))
		{
			return 1;
		}
	}
	return 0;
}

bool func_823(int iParam0, int iParam1)//Position - 0x252A1
{
	return func_316(iParam0) == iParam1;
}

int func_824(int iParam0)//Position - 0x252B2
{
	if (iParam0 != func_63() && func_948(iParam0, 1, 1))
	{
		return Global_24FB5C[iParam0 /*406*/].f_131.f_C;
	}
	return -1;
}

int func_825(int iParam0)//Position - 0x252E3
{
	if (iParam0 != func_63() && func_948(iParam0, 1, 1))
	{
		return unk_0xFA30DFD0084E92FE(Global_24FB5C[iParam0 /*406*/].f_131, 4);
	}
	return 0;
}

int func_826(bool bParam0)//Position - 0x25317
{
	bool bVar0;
	
	if (!func_450(1))
	{
		bVar0 = false;
		if (Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_39 != func_63())
		{
			if (func_948(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_39, 0, 1))
			{
				if ((Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_18 == 4 || Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_18 == 8) || Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_18 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_827(func_101(unk_0xB5CEFD608600A09F())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_506(31);
				if (func_304(func_101(unk_0xB5CEFD608600A09F())))
				{
					func_506(81);
				}
				if (Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_39 != func_63() && unk_0x96B1061E8F3CBC9A(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_39))
				{
					Global_18C287 = func_343(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_39, -2, 0, 0);
					if (!func_239(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_39))
					{
						func_506(88);
					}
				}
				else
				{
					Global_18C287 = 1;
				}
				Global_18C277 = { Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_63 };
			}
			return 1;
		}
	}
	return 0;
}

int func_827(int iParam0)//Position - 0x25468
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 249:
		case 250:
			return 0;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 241:
		case 242:
		case 244:
		case 248:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

void func_828()//Position - 0x2561C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (unk_0x8EA6CABD14F1B89A(Local_105.f_2[iVar1 /*26*/].f_1))
		{
			if (Local_105.f_2[iVar1 /*26*/] == 2)
			{
				if (func_43(iVar1))
				{
					iVar2 = 0;
					iVar2 = 0;
					while (iVar2 < 3)
					{
						if (unk_0x8EA6CABD14F1B89A(Local_105.f_2[iVar1 /*26*/].f_3[iVar2]))
						{
							uLocal_124[iVar0] = Local_105.f_2[iVar1 /*26*/].f_3[iVar2];
							iVar0++;
						}
						iVar2++;
					}
				}
			}
		}
		iVar1++;
	}
}

void func_829()//Position - 0x256A1
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	bVar2 = (unk_0x6BAA0516CC970D99() == Local_105.f_76 || func_848() == Local_105.f_76);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!bVar2)
		{
			if (unk_0x8EA6CABD14F1B89A(Local_105.f_2[iVar0 /*26*/].f_1))
			{
				unk_0xF39D341E7D27B49B(unk_0xE48AD7BF7762E114(Local_105.f_2[iVar0 /*26*/].f_1), unk_0xB5CEFD608600A09F(), 0);
			}
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (unk_0x8EA6CABD14F1B89A(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]))
				{
					unk_0xF39D341E7D27B49B(unk_0xE48AD7BF7762E114(Local_105.f_2[iVar0 /*26*/].f_3[iVar1]), unk_0xB5CEFD608600A09F(), 0);
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_830()//Position - 0x25748
{
	if (Local_105.f_76 > -1)
	{
		iLocal_125 = func_699(unk_0x4ED43B67B3F05E0F(unk_0xCFA8A401AAD7BB5A(Local_105.f_76)));
	}
}

void func_831(float fParam0)//Position - 0x2576B
{
	float fVar0;
	
	if (unk_0x56BEECB328B6D29D(unk_0x1377080E9B0BD993()) == func_322())
	{
		return;
	}
	fVar0 = (Global_267214.f_130D - fParam0);
	if (unk_0x3C406FC829C1E14A(Global_267214.f_130E))
	{
		if (!Global_267214.f_130E == unk_0x8A55B15F4133C912() && unk_0x357058E632979E65(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_267214.f_130D = fParam0;
	Global_267214.f_130E = unk_0x8A55B15F4133C912();
}

void func_832(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x257D7
{
	float fVar0;
	
	if (Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_21 != iParam0)
	{
		func_846(-1);
		Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_21 = iParam0;
		if (func_845() != -1)
		{
			func_844(-1);
		}
		if (func_843() != -1)
		{
			func_842(-1);
		}
		func_841(iParam2);
		func_839(iParam0);
		if (!func_112(iParam0))
		{
			fVar0 = func_111(iParam0);
			if (fVar0 != 1f)
			{
				func_831(fVar0);
				unk_0xF0059F27F7BB6680(&(Global_19693F.f_3), 1);
			}
		}
		if (!func_115(iParam0) || iParam3)
		{
			if (func_113(iParam0, iParam2) && iParam3 == 1)
			{
				unk_0xAEC867D0DBB7AFEB(0);
				if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
				{
					unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 0, 0);
					unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
				}
				unk_0xF0059F27F7BB6680(&(Global_19693F.f_3), 0);
			}
			else if (unk_0x8C6B6C3774164BB5() < 5)
			{
				unk_0xDF53A66AEE1401AA(1f);
				unk_0xAEC867D0DBB7AFEB(5);
			}
		}
		if (func_132())
		{
			func_106(27);
		}
		if (bParam1)
		{
			if (!func_133())
			{
				func_108(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((unk_0xFA30DFD0084E92FE(Global_267214.f_11BD, 1) || unk_0xFA30DFD0084E92FE(Global_267214.f_11BD, 4)) || unk_0xFA30DFD0084E92FE(Global_267214.f_11BD, 0))
			{
				func_506(6);
			}
			func_838();
		}
		if (((iParam0 == 164 || iParam0 == 208) || iParam0 == 250) || iParam0 == 237)
		{
			unk_0xE85B33FB221A23CD(3, false);
			unk_0xE85B33FB221A23CD(5, false);
		}
		if (func_128(unk_0xB5CEFD608600A09F()) && func_120(unk_0xB5CEFD608600A09F()))
		{
			unk_0xF0059F27F7BB6680(&(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_1), 8);
		}
		func_834();
		if (func_833(iParam0))
		{
			unk_0xE85B33FB221A23CD(3, false);
			unk_0xE85B33FB221A23CD(5, false);
			unk_0xF0059F27F7BB6680(&(Global_19693F.f_3), 6);
		}
		Global_267214.f_181A = 0;
	}
}

int func_833(int iParam0)//Position - 0x259F4
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
			return 1;
		
		default:
	}
	return 0;
}

void func_834()//Position - 0x25A3E
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	bVar3 = func_837();
	iVar2 = func_64(unk_0xB5CEFD608600A09F());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x3171C34AB3FE6F2E(iVar0);
		if (unk_0x96B1061E8F3CBC9A(iVar1))
		{
			if (func_74(iVar1, iVar2, 1) || func_835(iVar1, unk_0xB5CEFD608600A09F()))
			{
				unk_0xB7BCAAFF114A94F2(unk_0xB5CEFD608600A09F(), iVar1, bVar3);
				unk_0xB7BCAAFF114A94F2(iVar1, unk_0xB5CEFD608600A09F(), bVar3);
			}
		}
		iVar0++;
	}
}

int func_835(int iParam0, int iParam1)//Position - 0x25AAE
{
	if (func_179(iParam0, 1) && func_179(iParam1, 1))
	{
		return (func_836(iParam0) == func_64(iParam1) || func_836(iParam1) == func_64(iParam0));
	}
	return 0;
}

int func_836(int iParam0)//Position - 0x25AF0
{
	if (func_179(iParam0, 1))
	{
		return Global_18C80F[func_64(iParam0) /*558*/].f_B.f_1BB;
	}
	return func_63();
}

int func_837()//Position - 0x25B1B
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_452();
	if (iVar0 != func_63())
	{
		if (func_948(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return unk_0xFA30DFD0084E92FE(Global_18C80F[iVar1 /*558*/].f_1, 16);
			}
		}
	}
	return 0;
}

void func_838()//Position - 0x25B5C
{
	if (unk_0xFA30DFD0084E92FE(Global_267214.f_11BD, 1))
	{
		unk_0x7CB6FD92BE491AD9(&(Global_267214.f_11BD), 1);
	}
	if (unk_0xFA30DFD0084E92FE(Global_267214.f_11BD, 4))
	{
		unk_0x7CB6FD92BE491AD9(&(Global_267214.f_11BD), 4);
	}
	if (unk_0xFA30DFD0084E92FE(Global_267214.f_11BD, 6))
	{
		unk_0x7CB6FD92BE491AD9(&(Global_267214.f_11BD), 6);
	}
	unk_0x7CB6FD92BE491AD9(&(Global_267214.f_11BD), 0);
	unk_0x7CB6FD92BE491AD9(&(Global_267214.f_11BD), 2);
	Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_28B = 0;
	if (Global_267214.f_11BF > 0)
	{
		unk_0xAEC867D0DBB7AFEB(Global_267214.f_11BF);
	}
	Global_267214.f_11BE = 0;
}

void func_839(int iParam0)//Position - 0x25BFA
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_423(3787, -1, 0);
	iVar1 = func_840(iParam0);
	if (iVar1 != -1)
	{
		unk_0xF0059F27F7BB6680(&iVar0, iVar1);
		func_421(3787, iVar0, -1, 1, 0);
	}
}

int func_840(int iParam0)//Position - 0x25C2F
{
	switch (iParam0)
	{
		case 170:
			return 0;
		
		case 166:
			return 1;
		
		case 171:
			return 2;
		
		case 172:
			return 3;
		
		case 173:
			return 4;
		
		case 214:
			return 5;
		
		case 215:
			return 6;
		
		case 216:
			return 7;
		
		case 217:
			return 8;
		
		case 218:
			return 9;
		
		case 219:
			return 10;
		
		case 220:
			return 11;
		
		case 221:
			return 12;
		
		default:
	}
	return -1;
}

void func_841(int iParam0)//Position - 0x25CC6
{
	int iVar0;
	
	iVar0 = unk_0xB5CEFD608600A09F();
	if (Global_18C80F[iVar0 /*558*/].f_B.f_B0 != iParam0)
	{
		Global_18C80F[iVar0 /*558*/].f_B.f_B0 = iParam0;
	}
}

void func_842(int iParam0)//Position - 0x25CF5
{
	if (Global_267214.f_1312.f_149 != iParam0)
	{
		Global_267214.f_1312.f_149 = iParam0;
	}
}

int func_843()//Position - 0x25D18
{
	return Global_267214.f_1312.f_149;
}

void func_844(int iParam0)//Position - 0x25D2A
{
	if (Global_267214.f_1312.f_148 != iParam0)
	{
		Global_267214.f_1312.f_148 = iParam0;
	}
}

int func_845()//Position - 0x25D4D
{
	return Global_267214.f_1312.f_148;
}

void func_846(int iParam0)//Position - 0x25D5F
{
	Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_20 = iParam0;
}

int func_847()//Position - 0x25D78
{
	int iVar0;
	
	iVar0 = func_848();
	if (iVar0 > -1)
	{
		if (Local_105.f_76 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_848()//Position - 0x25D9A
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = func_63();
	if (!func_17(unk_0xB5CEFD608600A09F(), 0))
	{
		iVar0 = unk_0x6BAA0516CC970D99();
		iVar1 = unk_0xB5CEFD608600A09F();
	}
	else
	{
		iVar0 = func_286();
		iVar1 = Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_280;
	}
	if (iVar0 == -1)
	{
		return -1;
	}
	if (Local_106[iVar0 /*14*/].f_A != -1)
	{
		return Local_106[iVar0 /*14*/].f_A;
	}
	if (func_119(iVar1))
	{
		Local_106[iVar0 /*14*/].f_A = iVar0;
		if (iVar0 == Local_105.f_76)
		{
			func_759(1);
		}
	}
	else if (func_179(iVar1, 1))
	{
		iVar2 = func_64(iVar1);
		if (iVar2 != func_63())
		{
			if (unk_0xF6391659C669C3B1(iVar2))
			{
				Local_106[iVar0 /*14*/].f_A = unk_0xDE780EBA36114734(iVar2);
			}
		}
	}
	return Local_106[iVar0 /*14*/].f_A;
}

int func_849()//Position - 0x25E61
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0x8EA6CABD14F1B89A(Local_105.f_2[iVar0 /*26*/].f_1))
		{
			return 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_43(iVar0))
		{
			if (!func_34(iVar0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_32(iVar0))
		{
			if (!func_27(iVar0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_850()//Position - 0x25EEA
{
	return Local_105;
}

int func_851(int iParam0)//Position - 0x25EF4
{
	return Local_106[iParam0 /*14*/];
}

int func_852()//Position - 0x25F03
{
	var uVar0;
	
	func_857(&uVar0);
	if (Global_14083F == 0)
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			return 1;
		}
	}
	if (func_856())
	{
		return 1;
	}
	if (Global_25891C)
	{
		return 1;
	}
	if (func_855())
	{
		return 1;
	}
	if (func_854(157))
	{
		if (!func_853())
		{
			return 1;
		}
	}
	if (func_854(155))
	{
		return 1;
	}
	if (!unk_0x57D316754A262B34())
	{
		return 1;
	}
	if (func_322() != 0)
	{
		if (unk_0xB731B8C5BCE89836(func_322()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_853()//Position - 0x25F8D
{
	return Global_255A46.f_24A;
}

int func_854(int iParam0)//Position - 0x25F9C
{
	if (unk_0xA1AC399BCBEE5B2D(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_855()//Position - 0x25FB3
{
	return Global_258063;
}

bool func_856()//Position - 0x25FBF
{
	return Global_255A46.f_245;
}

void func_857(var uParam0)//Position - 0x25FCE
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
					func_858(iVar0);
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

void func_858(int iParam0)//Position - 0x26041
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x414AA1932D1C88E2(1, iParam0, &vVar0, 3))
	{
		if (func_948(vVar0.y, 1, 1))
		{
			iVar1 = unk_0xA95CF30C72EB526E(vVar0.y);
			if (unk_0x724D816EA203A79E(iVar1))
			{
				if (unk_0x5237AF95232D78C5(iVar1, 0))
				{
					iVar2 = unk_0x9FE9D386222EEE47(iVar1, 0);
					if (unk_0x403C891106DCABAF(iVar2, vVar0.z) && unk_0x32405B7614E36453())
					{
						if (func_859(iVar2, &bVar3))
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

int func_859(int iParam0, var uParam1)//Position - 0x260C2
{
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (!unk_0x5CAE759AE8219D20(iParam0))
		{
			if (unk_0x63B5FF8D34CBC98E(iParam0))
			{
				if (!unk_0xFF2234981505F7F4(unk_0x6F79ECA8C83E4357(iParam0)))
				{
					unk_0x77815D3407C6700D(iParam0, false, 1);
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

void func_860()//Position - 0x26121
{
	SYSTEM::WAIT(0);
}

void func_861()//Position - 0x2612E
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (!func_17(unk_0xB5CEFD608600A09F(), 0))
	{
		if (!unk_0xFA30DFD0084E92FE(iLocal_107, 6))
		{
			if (unk_0x7AF0088ABFA713B6())
			{
				if (func_847() || func_285())
				{
					func_596(0, 4, 0, 0, -1, -1, -1, -1, -1, 0);
					unk_0xF0059F27F7BB6680(&iLocal_107, 6);
				}
			}
		}
		uVar0 = Local_105.f_73;
		uVar1 = Local_105.f_79;
		iVar2 = -1;
		if (unk_0x7AF0088ABFA713B6())
		{
			iVar2 = Local_106[unk_0x6BAA0516CC970D99() /*14*/].f_B;
		}
		func_907(uVar0, uVar1, iVar2, -1082130432);
		if (unk_0x7AF0088ABFA713B6())
		{
			if (unk_0x84788C4CA5E15BDC(unk_0xBC25C936A095B5BA()) == iLocal_112)
			{
				unk_0x4106FAF8AA1D69D5(unk_0xBC25C936A095B5BA(), iLocal_113);
			}
		}
	}
	if (unk_0xFA30DFD0084E92FE(iLocal_107, 18))
	{
		func_330(1);
		unk_0x7CB6FD92BE491AD9(&iLocal_107, 18);
	}
	func_906();
	if (Local_105.f_77 != -1)
	{
		if (unk_0xFA30DFD0084E92FE(iLocal_107, 5))
		{
			if (unk_0x96B1061E8F3CBC9A(unk_0x3171C34AB3FE6F2E(Local_105.f_77)))
			{
			}
		}
	}
	if (func_79(0))
	{
		func_78(0);
	}
	if (unk_0x7AF0088ABFA713B6())
	{
		if (unk_0x0DE6397A2CB3EF75())
		{
			iVar3 = 0;
			while (iVar3 < 5)
			{
				if (unk_0xFA30DFD0084E92FE(Local_105.f_367, iVar3))
				{
					unk_0x483687B0FCA5415A(Local_105.f_361[iVar3], 1);
				}
				iVar3++;
			}
		}
	}
	if (unk_0xFA30DFD0084E92FE(iLocal_107, 17))
	{
		unk_0xAEC867D0DBB7AFEB(iLocal_127);
		unk_0x7CB6FD92BE491AD9(&iLocal_107, 17);
	}
	func_327();
	unk_0xF0059F27F7BB6680(&iLocal_108, 8);
	func_713();
	unk_0xE01834352258C5C6(1);
	func_759(0);
	func_863(1, 0);
	unk_0xAEC867D0DBB7AFEB(5);
	func_318();
	func_862();
}

void func_862()//Position - 0x262A5
{
	unk_0x95E4B6F3ED223F5A();
}

void func_863(bool bParam0, int iParam1)//Position - 0x262B1
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_14A4EA.f_1.f_6C != 0)
	{
		Global_14A4EA.f_1.f_6C = 0;
	}
	Global_14A4EA.f_1.f_6D = -1;
	Global_14A4EA.f_1.f_6E = -1;
	if (Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_21 == 167 || Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_21 == 168)
	{
		func_904();
		unk_0x7CB6FD92BE491AD9(&(Global_19693F.f_3), 4);
	}
	if ((func_448() && iParam1 != 0) && Global_40001.f_3FE2)
	{
		if (Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_21 == 190 || Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_21 == 192)
		{
			func_886(unk_0xB5CEFD608600A09F(), iParam1, 1, 0);
		}
	}
	if (((Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_21 == 164 || Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_21 == 208) || Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_21 == 250) || Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_21 == 237)
	{
		unk_0xE85B33FB221A23CD(3, true);
		unk_0xE85B33FB221A23CD(5, true);
	}
	if (Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_21 != -1)
	{
		Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_21 = -1;
		if (!unk_0xFA30DFD0084E92FE(Global_180634.f_1, 14) && !func_128(unk_0xB5CEFD608600A09F()))
		{
			func_108(0);
		}
	}
	else if (func_884(unk_0xB5CEFD608600A09F()) != -1)
	{
		func_846(-1);
	}
	func_883(func_63());
	if (func_79(16))
	{
		func_78(16);
	}
	func_880(0);
	func_841(-1);
	func_879();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_878(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_876(iVar1);
		iVar1++;
	}
	if (unk_0xFA30DFD0084E92FE(Global_19693F.f_3, 0))
	{
		unk_0xDF53A66AEE1401AA(1f);
		unk_0xAEC867D0DBB7AFEB(5);
		unk_0x7CB6FD92BE491AD9(&(Global_19693F.f_3), 0);
	}
	if (unk_0xFA30DFD0084E92FE(Global_19693F.f_3, 5))
	{
		unk_0x7CB6FD92BE491AD9(&(Global_19693F.f_3), 5);
	}
	iVar2 = func_311();
	if ((func_209(iVar2) || iVar2 == 205) || iVar2 == 210)
	{
		func_875(-1);
	}
	else if (((iVar2 == 201 || iVar2 == 200) || iVar2 == 179) || func_384(iVar2))
	{
		func_872(-1, 1);
	}
	else if (((((func_310(iVar2) || func_871(iVar2)) || func_870(iVar2)) || func_381(iVar2)) || func_379(iVar2)) || func_377(iVar2))
	{
	}
	else
	{
		func_872(-1, 1);
	}
	func_104(19);
	func_104(20);
	func_104(21);
	func_104(22);
	func_104(27);
	func_78(3);
	func_78(4);
	func_78(7);
	func_869();
	if (func_120(unk_0xB5CEFD608600A09F()))
	{
		func_759(0);
	}
	func_104(29);
	Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_39 = func_63();
	if (Global_267214.f_1312.f_21 != 0)
	{
		Global_267214.f_1312.f_21 = 0;
	}
	if (bParam0)
	{
		func_80();
	}
	if (!func_128(unk_0xB5CEFD608600A09F()))
	{
		func_103();
		unk_0x7CB6FD92BE491AD9(&(Global_19693F.f_3), 1);
	}
	if (unk_0xFA30DFD0084E92FE(Global_19693F.f_3, 6))
	{
		unk_0xE85B33FB221A23CD(3, true);
		unk_0xE85B33FB221A23CD(5, true);
		unk_0x7CB6FD92BE491AD9(&(Global_19693F.f_3), 6);
	}
	if (unk_0xFA30DFD0084E92FE(Global_19693F.f_3, 7))
	{
		unk_0x7CB6FD92BE491AD9(&(Global_19693F.f_3), 7);
	}
	if (unk_0xFA30DFD0084E92FE(Global_19693F.f_3, 8))
	{
		func_868("IMPEXP_SELFDES", 0);
		func_866("IMPEXP_SELFDES");
		unk_0x7CB6FD92BE491AD9(&(Global_19693F.f_3), 8);
	}
	func_864(iVar2, 0);
}

void func_864(int iParam0, bool bParam1)//Position - 0x2667A
{
	if (bParam1)
	{
		if (!unk_0xFA30DFD0084E92FE(Global_19693F.f_3, 9))
		{
			unk_0xD6423910AAD8A379(func_865(iParam0));
			unk_0xF0059F27F7BB6680(&(Global_19693F.f_3), 9);
		}
	}
	else if (unk_0xFA30DFD0084E92FE(Global_19693F.f_3, 9))
	{
		unk_0xC1300D0F3A74E20B(func_865(iParam0));
		unk_0x7CB6FD92BE491AD9(&(Global_19693F.f_3), 9);
	}
}

char* func_865(int iParam0)//Position - 0x266D6
{
	switch (iParam0)
	{
		case 219:
			return "DLC_IE_VIP_Velocity_Vehicle_Scene";
		
		case 221:
			return "DLC_IE_VIP_Stockpiling_Vehicle_Scene";
		
		case 220:
			return "DLC_IE_VIP_Ramped_Up_Vehicle_Scene";
		
		case 214:
			return "DLC_IE_VIP_Plowed_Vehicle_Scene";
		
		case 217:
			return "DLC_IE_VIP_Transporter_Vehicle_Scene";
		
		case 218:
			return "DLC_IE_VIP_Fortified_Vehicle_Scene";
		
		case 215:
			return "DLC_IE_VIP_Fully_Loaded_Vehicle_Scene";
		
		case 216:
			return "DLC_IE_VIP_Amphibious_Assault_Vehicle_Scene";
		
		default:
	}
	return "";
}

void func_866(char* sParam0)//Position - 0x2674F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0xEAEFBBEC1AEA464B(&(Global_19B04.f_3720[iVar0 /*104*/])))
		{
			if (unk_0x3362CDE8460ED38B(&(Global_19B04.f_3720[iVar0 /*104*/]), sParam0))
			{
				if (Global_19B04.f_3720[iVar0 /*104*/].f_18 == 2)
				{
				}
				else
				{
					func_771();
					Global_19B04.f_3720[iVar0 /*104*/].f_63[Global_389D] = 0;
					if (func_867(iVar0))
					{
					}
					else
					{
						Global_19B04.f_3720[iVar0 /*104*/].f_18 = 0;
						Global_19B04.f_3720[iVar0 /*104*/].f_1C = 0;
						Global_19B04.f_3720[iVar0 /*104*/].f_1D = 0;
					}
					unk_0x8C563C8EA840EA02(Global_19B04.f_3720[iVar0 /*104*/].f_10);
				}
			}
		}
		iVar0++;
	}
}

int func_867(int iParam0)//Position - 0x26803
{
	if ((Global_19B04.f_3720[iParam0 /*104*/].f_63[0] == 1 || Global_19B04.f_3720[iParam0 /*104*/].f_63[1] == 1) || Global_19B04.f_3720[iParam0 /*104*/].f_63[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_868(char* sParam0, int iParam1)//Position - 0x26858
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0xEAEFBBEC1AEA464B(&(Global_19B04.f_3720[iVar0 /*104*/])))
		{
			if (unk_0x3362CDE8460ED38B(&(Global_19B04.f_3720[iVar0 /*104*/]), sParam0))
			{
				if (Global_19B04.f_3720[iVar0 /*104*/].f_18 == 0)
				{
				}
				Global_19B04.f_3720[iVar0 /*104*/].f_18 = 1;
				if (Global_19B04.f_3720[iVar0 /*104*/].f_19 == 1)
				{
					if (Global_19B04.f_3720[iVar0 /*104*/].f_63[0] == 1)
					{
						Global_19B04.f_36C6[0 /*20*/].f_11 = 0;
					}
					if (Global_19B04.f_3720[iVar0 /*104*/].f_63[1] == 1)
					{
						Global_19B04.f_36C6[1 /*20*/].f_11 = 0;
					}
					if (Global_19B04.f_3720[iVar0 /*104*/].f_63[2] == 1)
					{
						Global_19B04.f_36C6[2 /*20*/].f_11 = 0;
					}
					if (Global_19B04.f_3720[iVar0 /*104*/].f_63[3] == 1)
					{
						Global_19B04.f_36C6[3 /*20*/].f_11 = 0;
					}
					Global_19B04.f_3720[iVar0 /*104*/].f_19 = 0;
					if (iParam1 == 1)
					{
						Global_19B04.f_3720[iVar0 /*104*/].f_1B = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_869()//Position - 0x26970
{
	if (func_123(unk_0xB5CEFD608600A09F()))
	{
		func_104(25);
	}
}

int func_870(int iParam0)//Position - 0x26989
{
	switch (iParam0)
	{
		case 178:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_871(int iParam0)//Position - 0x269A9
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

void func_872(int iParam0, bool bParam1)//Position - 0x269D4
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_311();
	}
	if (iParam0 > 0)
	{
		if (func_452() != func_63())
		{
			if (func_372(unk_0xB5CEFD608600A09F()) == unk_0xB5CEFD608600A09F())
			{
				Global_262283.f_5D[func_874(iParam0)] = 1;
			}
		}
		iVar0 = func_874(159);
		if (func_873(iVar0, Global_40001.f_2EDB, bParam1))
		{
			func_151(&(Global_262283[iVar0 /*2*/]));
			func_7(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(157);
		if (func_873(iVar0, Global_40001.f_2EDB, bParam1))
		{
			func_151(&(Global_262283[iVar0 /*2*/]));
			func_7(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(148);
		if (func_873(iVar0, Global_40001.f_2EDB, bParam1))
		{
			func_151(&(Global_262283[iVar0 /*2*/]));
			func_7(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(164);
		if (func_873(iVar0, Global_40001.f_2EDB, bParam1))
		{
			func_151(&(Global_262283[iVar0 /*2*/]));
			func_7(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(142);
		if (func_873(iVar0, Global_40001.f_2EDB, bParam1))
		{
			func_151(&(Global_262283[iVar0 /*2*/]));
			func_7(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(152);
		if (func_873(iVar0, Global_40001.f_2EDB, bParam1))
		{
			func_151(&(Global_262283[iVar0 /*2*/]));
			func_7(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(166);
		if (func_873(iVar0, Global_40001.f_2EDB, bParam1))
		{
			func_151(&(Global_262283[iVar0 /*2*/]));
			func_7(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(170);
		if (func_873(iVar0, Global_40001.f_2EDB, bParam1))
		{
			func_151(&(Global_262283[iVar0 /*2*/]));
			func_7(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(173);
		if (func_873(iVar0, Global_40001.f_2EDB, bParam1))
		{
			func_151(&(Global_262283[iVar0 /*2*/]));
			func_7(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(179);
		if (func_873(iVar0, Global_40001.f_2EDB, bParam1))
		{
			func_151(&(Global_262283[iVar0 /*2*/]));
			func_7(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(200);
		if (func_873(iVar0, Global_40001.f_2EDB, bParam1))
		{
			func_151(&(Global_262283[iVar0 /*2*/]));
			func_7(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(201);
		if (func_873(iVar0, Global_40001.f_2EDB, bParam1))
		{
			func_151(&(Global_262283[iVar0 /*2*/]));
			func_7(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(182);
		if (func_873(iVar0, Global_40001.f_2EDC, 0))
		{
			func_151(&(Global_262283[iVar0 /*2*/]));
			func_7(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(183);
		if (func_873(iVar0, Global_40001.f_2EDC, 0))
		{
			func_151(&(Global_262283[iVar0 /*2*/]));
			func_7(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(185);
		if (func_873(iVar0, Global_40001.f_2EDC, 0))
		{
			func_151(&(Global_262283[iVar0 /*2*/]));
			func_7(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(186);
		if (func_873(iVar0, Global_40001.f_2EDC, 0))
		{
			func_151(&(Global_262283[iVar0 /*2*/]));
			func_7(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(180);
		if (func_873(iVar0, Global_40001.f_2EDC, 0))
		{
			func_151(&(Global_262283[iVar0 /*2*/]));
			func_7(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(195);
		if (func_873(iVar0, Global_40001.f_2EDC, 0))
		{
			func_151(&(Global_262283[iVar0 /*2*/]));
			func_7(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(197);
		if (func_873(iVar0, Global_40001.f_2EDC, 0))
		{
			func_151(&(Global_262283[iVar0 /*2*/]));
			func_7(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(198);
		if (func_873(iVar0, Global_40001.f_2EDC, 0))
		{
			func_151(&(Global_262283[iVar0 /*2*/]));
			func_7(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(207);
		if (func_873(iVar0, Global_40001.f_2EDC, 0))
		{
			func_151(&(Global_262283[iVar0 /*2*/]));
			func_7(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(208);
		if (func_873(iVar0, Global_40001.f_2EDC, 0))
		{
			func_151(&(Global_262283[iVar0 /*2*/]));
			func_7(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(209);
		if (func_873(iVar0, Global_40001.f_2EDC, 0))
		{
			func_151(&(Global_262283[iVar0 /*2*/]));
			func_7(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(214);
		if (func_873(iVar0, Global_40001.f_2EDC, 0))
		{
			func_151(&(Global_262283[iVar0 /*2*/]));
			func_7(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(215);
		if (func_873(iVar0, Global_40001.f_2EDC, 0))
		{
			func_151(&(Global_262283[iVar0 /*2*/]));
			func_7(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(216);
		if (func_873(iVar0, Global_40001.f_2EDC, 0))
		{
			func_151(&(Global_262283[iVar0 /*2*/]));
			func_7(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(217);
		if (func_873(iVar0, Global_40001.f_2EDC, 0))
		{
			func_151(&(Global_262283[iVar0 /*2*/]));
			func_7(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(218);
		if (func_873(iVar0, Global_40001.f_2EDC, 0))
		{
			func_151(&(Global_262283[iVar0 /*2*/]));
			func_7(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(219);
		if (func_873(iVar0, Global_40001.f_2EDC, 0))
		{
			func_151(&(Global_262283[iVar0 /*2*/]));
			func_7(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(220);
		if (func_873(iVar0, Global_40001.f_2EDC, 0))
		{
			func_151(&(Global_262283[iVar0 /*2*/]));
			func_7(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(221);
		if (func_873(iVar0, Global_40001.f_2EDC, 0))
		{
			func_151(&(Global_262283[iVar0 /*2*/]));
			func_7(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_873(int iParam0, int iParam1, bool bParam2)//Position - 0x27050
{
	if (bParam2)
	{
		if ((!func_105(unk_0xB5CEFD608600A09F(), 19) && !func_105(unk_0xB5CEFD608600A09F(), 20)) && !func_105(unk_0xB5CEFD608600A09F(), 9))
		{
			return 0;
		}
	}
	if (Global_262283.f_5D[iParam0] == 1 && func_8(&(Global_262283[iParam0 /*2*/])))
	{
		if (func_715(&(Global_262283[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_262283.f_5D[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_874(int iParam0)//Position - 0x270D6
{
	switch (iParam0)
	{
		case 159:
			return 11;
		
		case 157:
			return 12;
		
		case 148:
			return 13;
		
		case 164:
			return 14;
		
		case 142:
			return 15;
		
		case 152:
			return 16;
		
		case 163:
			return 17;
		
		case 155:
			return 18;
		
		case 160:
			return 19;
		
		case 153:
			return 20;
		
		case 162:
			return 21;
		
		case 154:
			return 22;
		
		case 166:
			return 8;
		
		case 170:
			return 9;
		
		case 173:
			return 10;
		
		case 171:
			return 23;
		
		case 172:
			return 24;
		
		case 179:
			return 25;
		
		case 189:
			return 26;
		
		case 193:
			return 27;
		
		case 194:
			return 28;
		
		case 199:
			return 29;
		
		case 201:
			return 30;
		
		case 200:
			return 31;
		
		case 205:
			return 32;
		
		case 210:
			return 33;
		
		case 182:
			return 34;
		
		case 183:
			return 35;
		
		case 185:
			return 36;
		
		case 186:
			return 37;
		
		case 180:
			return 38;
		
		case 195:
			return 39;
		
		case 197:
			return 40;
		
		case 198:
			return 41;
		
		case 207:
			return 42;
		
		case 208:
			return 43;
		
		case 209:
			return 44;
		
		case 211:
			return 45;
		
		case 214:
			return 0;
		
		case 215:
			return 1;
		
		case 216:
			return 2;
		
		case 217:
			return 3;
		
		case 218:
			return 4;
		
		case 219:
			return 5;
		
		case 220:
			return 6;
		
		case 221:
			return 7;
		
		default:
	}
	return -1;
}

void func_875(int iParam0)//Position - 0x272D8
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_311();
	}
	if (iParam0 > 0)
	{
		if (func_452() != func_63())
		{
			Global_262283.f_5D[func_874(iParam0)] = 1;
		}
		iVar0 = func_874(155);
		if (func_873(iVar0, Global_40001.f_2EDC, 0))
		{
			func_151(&(Global_262283[iVar0 /*2*/]));
			func_7(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(163);
		if (func_873(iVar0, Global_40001.f_2EDC, 0))
		{
			func_151(&(Global_262283[iVar0 /*2*/]));
			func_7(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(160);
		if (func_873(iVar0, Global_40001.f_2EDC, 0))
		{
			func_151(&(Global_262283[iVar0 /*2*/]));
			func_7(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(153);
		if (func_873(iVar0, Global_40001.f_2EDC, 0))
		{
			func_151(&(Global_262283[iVar0 /*2*/]));
			func_7(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(162);
		if (func_873(iVar0, Global_40001.f_2EDC, 0))
		{
			func_151(&(Global_262283[iVar0 /*2*/]));
			func_7(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(154);
		if (func_873(iVar0, Global_40001.f_2EDC, 0))
		{
			func_151(&(Global_262283[iVar0 /*2*/]));
			func_7(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(171);
		if (func_873(iVar0, Global_40001.f_2EDC, 0))
		{
			func_151(&(Global_262283[iVar0 /*2*/]));
			func_7(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(172);
		if (func_873(iVar0, Global_40001.f_2EDC, 0))
		{
			func_151(&(Global_262283[iVar0 /*2*/]));
			func_7(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(199);
		if (func_873(iVar0, Global_40001.f_2EDC, 0))
		{
			func_151(&(Global_262283[iVar0 /*2*/]));
			func_7(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(194);
		if (func_873(iVar0, Global_40001.f_2EDC, 0))
		{
			func_151(&(Global_262283[iVar0 /*2*/]));
			func_7(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(193);
		if (func_873(iVar0, Global_40001.f_2EDC, 0))
		{
			func_151(&(Global_262283[iVar0 /*2*/]));
			func_7(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(210);
		if (func_873(iVar0, Global_40001.f_2EDC, 0))
		{
			func_151(&(Global_262283[iVar0 /*2*/]));
			func_7(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(205);
		if (func_873(iVar0, Global_40001.f_2EDC, 0))
		{
			func_151(&(Global_262283[iVar0 /*2*/]));
			func_7(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(189);
		if (func_873(iVar0, Global_40001.f_2EDC, 0))
		{
			func_151(&(Global_262283[iVar0 /*2*/]));
			func_7(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_874(211);
		if (func_873(iVar0, Global_40001.f_2EDC, 0))
		{
			func_151(&(Global_262283[iVar0 /*2*/]));
			func_7(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_876(int iParam0)//Position - 0x27609
{
	if (!func_28(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_12F[iParam0 /*3*/], func_877(), 0))
	{
		Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_12F[iParam0 /*3*/] = { func_877() };
	}
	if (!func_28(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_122[iParam0 /*3*/], func_877(), 0))
	{
		Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_122[iParam0 /*3*/] = { func_877() };
	}
}

Vector3 func_877()//Position - 0x2768B
{
	vector3 vVar0;
	
	return vVar0;
}

void func_878(int iParam0)//Position - 0x27697
{
	if (!func_28(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_91[iParam0 /*3*/], func_877(), 0))
	{
		Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_91[iParam0 /*3*/] = { func_877() };
	}
	if (!func_28(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_78[iParam0 /*3*/], func_877(), 0))
	{
		Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_78[iParam0 /*3*/] = { func_877() };
	}
}

void func_879()//Position - 0x27715
{
	struct<20> Var0;
	
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1803FC = { Var0 };
	Global_1803FC.f_D = func_63();
	if (unk_0xFA30DFD0084E92FE(Global_1801DE, 3))
	{
		unk_0x7CB6FD92BE491AD9(&Global_1801DE, 3);
	}
}

void func_880(bool bParam0)//Position - 0x2776F
{
	if (bParam0)
	{
		if (!func_401(unk_0xB5CEFD608600A09F(), 14))
		{
			func_882(14);
		}
	}
	else if (func_401(unk_0xB5CEFD608600A09F(), 14))
	{
		func_881(14);
	}
}

void func_881(int iParam0)//Position - 0x277A6
{
	unk_0x7CB6FD92BE491AD9(&(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_5), iParam0);
}

void func_882(int iParam0)//Position - 0x277C3
{
	unk_0xF0059F27F7BB6680(&(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_5), iParam0);
}

void func_883(int iParam0)//Position - 0x277E0
{
	if (func_119(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0xB5CEFD608600A09F() != iParam0)
		{
			if (Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_1BB != iParam0)
			{
				Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_1BB = iParam0;
				if (iParam0 != func_63())
				{
				}
			}
		}
	}
}

int func_884(int iParam0)//Position - 0x2782F
{
	if (func_885(iParam0, 0))
	{
		return Global_18C80F[iParam0 /*558*/].f_B.f_20;
	}
	return -1;
}

int func_885(int iParam0, int iParam1)//Position - 0x27852
{
	if (Global_18C80F[iParam0 /*558*/].f_B.f_20 != -1 || (iParam1 && Global_18C80F[iParam0 /*558*/].f_B.f_21 != -1))
	{
		return 1;
	}
	return 0;
}

void func_886(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x2788D
{
	int iVar0;
	
	if (func_564(iParam0, iParam1) && func_903(iParam0, iParam1))
	{
		iVar0 = func_563(iParam0, iParam1);
		func_890(iVar0, bParam2, bParam3);
		func_887(iVar0, 1);
	}
}

void func_887(int iParam0, bool bParam1)//Position - 0x278C8
{
	if (!func_889(iParam0))
	{
		return;
	}
	func_550(func_888(iParam0), bParam1, -1, 1);
	Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_111.f_A8[iParam0 /*12*/].f_6 = bParam1;
}

int func_888(int iParam0)//Position - 0x27904
{
	switch (iParam0)
	{
		case 0:
			return 7628;
		
		case 1:
			return 7629;
		
		case 2:
			return 7630;
		
		case 3:
			return 7631;
		
		case 4:
			return 7632;
		
		case 5:
			return 15373;
		
		default:
	}
	return 7628;
}

bool func_889(int iParam0)//Position - 0x2795E
{
	return (iParam0 >= 0 && iParam0 < 6);
}

void func_890(int iParam0, bool bParam1, bool bParam2)//Position - 0x27973
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	bVar1 = false;
	iVar2 = func_736(unk_0xB5CEFD608600A09F(), iParam0);
	if (!bParam1)
	{
		func_902(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_262209[iParam0];
		iVar0 = func_901(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_196FC7 = -1;
		}
		func_900(iParam0, 0, bParam2);
	}
	else if (func_898(iParam0, bParam2))
	{
		iVar0 = func_897(iVar2, 0);
		iVar3 = func_678(unk_0xB5CEFD608600A09F(), iVar2);
		iVar4 = func_896(iVar2, bParam2);
		iVar5 = func_897(iVar2, bParam2);
		fVar6 = (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(iVar4));
		iVar0 = (iVar0 - SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_895(iVar2) && func_894(unk_0xB5CEFD608600A09F(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_902(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_893(unk_0xB5CEFD608600A09F(), iVar2) > 0)
		{
			func_892(iParam0, (Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_111.f_A8[iParam0 /*12*/].f_2 - (func_896(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_897(iVar2, bParam2) / func_893(unk_0xB5CEFD608600A09F(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_895(iVar2) && func_894(unk_0xB5CEFD608600A09F(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_891(unk_0xB5CEFD608600A09F(), iVar2, iVar0, bParam2);
}

void func_891(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x27AE4
{
	int iVar0;
	
	if (iParam0 == func_63())
	{
		return;
	}
	if (func_557(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_18402B[iParam0 /*770*/].f_111.f_A8[iVar0 /*12*/] == iParam1)
			{
				if (bParam3)
				{
					Global_18402B[iParam0 /*770*/].f_111.f_F2 = iParam2;
				}
				else
				{
					Global_18402B[iParam0 /*770*/].f_111.f_A8[iVar0 /*12*/].f_9 = iParam2;
				}
			}
			iVar0++;
		}
	}
}

void func_892(int iParam0, int iParam1)//Position - 0x27B58
{
	if (iParam0 != -1 && iParam1 != Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_111.f_A8[iParam0 /*12*/].f_2)
	{
		Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_111.f_A8[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_893(int iParam0, int iParam1)//Position - 0x27B9D
{
	int iVar0;
	
	if (iParam0 == func_63())
	{
		return 0;
	}
	if (func_557(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_18402B[iParam0 /*770*/].f_111.f_A8[iVar0 /*12*/] == iParam1)
			{
				return Global_18402B[iParam0 /*770*/].f_111.f_A8[iVar0 /*12*/].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_894(int iParam0, int iParam1)//Position - 0x27BFC
{
	int iVar0;
	
	if (iParam0 == func_63())
	{
		return 0;
	}
	if (func_557(iParam1) && func_895(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_18402B[iParam0 /*770*/].f_111.f_A8[iVar0 /*12*/] == iParam1)
			{
				return Global_18402B[iParam0 /*770*/].f_111.f_A8[iVar0 /*12*/].f_B;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_895(int iParam0)//Position - 0x27C66
{
	return func_445(iParam0) == 5;
}

int func_896(int iParam0, bool bParam1)//Position - 0x27C76
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_445(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_40001.f_3FC5;
			if (func_562(unk_0xB5CEFD608600A09F(), iParam0, 0))
			{
				uVar0 = Global_40001.f_3FCA;
			}
			break;
		
		case 3:
			uVar0 = Global_40001.f_3FC4;
			if (func_562(unk_0xB5CEFD608600A09F(), iParam0, 0))
			{
				uVar0 = Global_40001.f_3FC9;
			}
			break;
		
		case 4:
			uVar0 = Global_40001.f_3FC3;
			if (func_562(unk_0xB5CEFD608600A09F(), iParam0, 0))
			{
				uVar0 = Global_40001.f_3FC8;
			}
			break;
		
		case 0:
			uVar0 = Global_40001.f_3FC1;
			if (func_562(unk_0xB5CEFD608600A09F(), iParam0, 0))
			{
				uVar0 = Global_40001.f_3FC6;
			}
			break;
		
		case 2:
			uVar0 = Global_40001.f_3FC2;
			if (func_562(unk_0xB5CEFD608600A09F(), iParam0, 0))
			{
				uVar0 = Global_40001.f_3FC7;
			}
			break;
		
		case 5:
			if (bParam1)
			{
				uVar0 = Global_40001.f_4FDC;
				if (func_562(unk_0xB5CEFD608600A09F(), iParam0, 0))
				{
					uVar0 = Global_40001.f_4FDD;
				}
			}
			else
			{
				uVar0 = Global_40001.f_4FCC;
				if (func_562(unk_0xB5CEFD608600A09F(), iParam0, 0))
				{
					uVar0 = Global_40001.f_4FCD;
				}
			}
			break;
	}
	return uVar0;
}

int func_897(int iParam0, bool bParam1)//Position - 0x27DAD
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_445(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_40001.f_3FB2;
			if (func_562(unk_0xB5CEFD608600A09F(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_40001.f_3FBB);
			}
			if (func_562(unk_0xB5CEFD608600A09F(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_40001.f_3FC0);
			}
			break;
		
		case 3:
			iVar0 = Global_40001.f_3FB3;
			if (func_562(unk_0xB5CEFD608600A09F(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_40001.f_3FBA);
			}
			if (func_562(unk_0xB5CEFD608600A09F(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_40001.f_3FBF);
			}
			break;
		
		case 4:
			iVar0 = Global_40001.f_3FB4;
			if (func_562(unk_0xB5CEFD608600A09F(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_40001.f_3FB9);
			}
			if (func_562(unk_0xB5CEFD608600A09F(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_40001.f_3FBE);
			}
			break;
		
		case 0:
			iVar0 = Global_40001.f_3FB5;
			if (func_562(unk_0xB5CEFD608600A09F(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_40001.f_3FB7);
			}
			if (func_562(unk_0xB5CEFD608600A09F(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_40001.f_3FBC);
			}
			break;
		
		case 2:
			iVar0 = Global_40001.f_3FB6;
			if (func_562(unk_0xB5CEFD608600A09F(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_40001.f_3FB8);
			}
			if (func_562(unk_0xB5CEFD608600A09F(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_40001.f_3FBD);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				iVar0 = Global_40001.f_4FD9;
			}
			else
			{
				iVar0 = Global_40001.f_4FC9;
			}
			if (func_562(unk_0xB5CEFD608600A09F(), iParam0, 0))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_40001.f_4FDA);
				}
				else
				{
					iVar0 = (iVar0 - Global_40001.f_4FCA);
				}
			}
			if (func_562(unk_0xB5CEFD608600A09F(), iParam0, 1))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_40001.f_4FDB);
				}
				else
				{
					iVar0 = (iVar0 - Global_40001.f_4FCB);
				}
			}
			if (func_894(unk_0xB5CEFD608600A09F(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_898(int iParam0, bool bParam1)//Position - 0x27FB7
{
	if (bParam1)
	{
		return func_551(15384, -1, -1);
	}
	return func_551(func_899(iParam0), -1, -1);
}

int func_899(int iParam0)//Position - 0x27FDC
{
	switch (iParam0)
	{
		case 0:
			return 9416;
		
		case 1:
			return 9417;
		
		case 2:
			return 9418;
		
		case 3:
			return 9419;
		
		case 4:
			return 9420;
		
		case 5:
			return 15372;
		
		default:
	}
	return 9416;
}

void func_900(int iParam0, bool bParam1, bool bParam2)//Position - 0x28053
{
	if (bParam2)
	{
		func_550(15384, bParam1, -1, 1);
		return;
	}
	func_550(func_899(iParam0), bParam1, -1, 1);
}

int func_901(int iParam0, bool bParam1)//Position - 0x2807E
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_262209[iParam0];
	iVar1 = func_736(unk_0xB5CEFD608600A09F(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_262210;
	}
	if (func_895(iVar1))
	{
		if (func_894(unk_0xB5CEFD608600A09F(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_902(int iParam0, int iParam1, bool bParam2)//Position - 0x280C6
{
	if (bParam2)
	{
		Global_262210 = iParam1;
		return;
	}
	Global_262209[iParam0] = iParam1;
}

int func_903(int iParam0, int iParam1)//Position - 0x280E6
{
	int iVar0;
	
	if (func_564(iParam0, iParam1))
	{
		iVar0 = func_563(iParam0, iParam1);
		if (Global_18402B[iParam0 /*770*/].f_111.f_A8[iVar0 /*12*/].f_4 > 0 && Global_18402B[iParam0 /*770*/].f_111.f_A8[iVar0 /*12*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_904()//Position - 0x2813A
{
	unk_0x7CB6FD92BE491AD9(&(Global_267214.f_6BD), 28);
	unk_0x7CB6FD92BE491AD9(&(Global_267214.f_6BD), 29);
	func_905(24);
}

void func_905(int iParam0)//Position - 0x28162
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x7CB6FD92BE491AD9(&(Global_267214.f_1312.f_7[iVar0]), iVar1);
}

void func_906()//Position - 0x2818B
{
	unk_0x926FDA90094AA5FA(iLocal_112);
}

void func_907(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x2819A
{
	char* sVar0;
	struct<14> Var1;
	struct<17> Var2;
	struct<17> Var3;
	struct<16> Var4;
	struct<17> Var5;
	struct<16> Var6;
	struct<18> Var7;
	struct<18> Var8;
	struct<19> Var9;
	struct<18> Var10;
	
	sVar0 = unk_0x1377080E9B0BD993();
	Var1 = Global_196948;
	Var1.f_1 = Global_196948.f_1;
	Var1.f_2 = Global_196948.f_2;
	Var1.f_3 = Global_196948.f_3;
	Var1.f_4 = Global_196948.f_4;
	Var1.f_5 = Global_196948.f_5;
	Var1.f_6 = Global_196948.f_6;
	Var1.f_7 = Global_196948.f_7;
	Var1.f_8 = Global_196948.f_8;
	Var1.f_9 = Global_196948.f_9;
	Var1.f_A = Global_196948.f_A;
	Var1.f_B = Global_196948.f_B;
	Var1.f_C = Global_196948.f_C;
	Var1.f_D = Global_196948.f_E;
	if (unk_0x7AF0088ABFA713B6())
	{
		if (unk_0x3362CDE8460ED38B(sVar0, "GB_DEATHMATCH"))
		{
			Var2 = { Var1 };
			Var2.f_E = Global_196948.f_F;
			Var2.f_F = Global_196948.f_10;
			Var2.f_10 = Global_196948.f_11;
			unk_0x6899EB66155B3500(&Var2);
		}
		else if (unk_0x3362CDE8460ED38B(sVar0, "GB_YACHT_ROB"))
		{
			Var3 = { Var1 };
			Var3.f_E = Global_196948.f_F;
			Var3.f_F = uParam0;
			Var3.f_10 = uParam1;
			unk_0x536E90877E33B644(&Var3);
		}
		else if (unk_0x3362CDE8460ED38B(sVar0, "GB_HUNT_THE_BOSS"))
		{
			Var4 = { Var1 };
			Var4.f_E = Global_196948.f_F;
			Var4.f_F = uParam0;
			unk_0x3A6ACC2FAB290CDC(&Var4);
		}
		else if (unk_0x3362CDE8460ED38B(sVar0, "GB_SIGHTSEER"))
		{
			Var5 = { Var1 };
			Var5.f_E = Global_196948.f_F;
			Var5.f_F = uParam0;
			Var5.f_10 = uParam1;
			unk_0x4071F63CF95F324E(&Var5);
		}
		else if (unk_0x3362CDE8460ED38B(sVar0, "GB_ASSAULT"))
		{
			Var6 = { Var1 };
			Var6.f_E = Global_196948.f_F;
			Var6.f_F = uParam0;
			unk_0x217787AB4F2FB1E9(&Var6);
		}
		else if (unk_0x3362CDE8460ED38B(sVar0, "GB_BELLYBEAST"))
		{
			Var7 = { Var1 };
			Var7.f_E = Global_196948.f_F;
			Var7.f_F = uParam0;
			Var7.f_10 = uParam1;
			Var7.f_11 = iParam2;
			unk_0x63FAAF4414D8B3D5(&Var7);
		}
		else if (unk_0x3362CDE8460ED38B(sVar0, "GB_HEADHUNTER"))
		{
			Var8 = { Var1 };
			Var8.f_E = uParam0;
			Var8.f_F = uParam1;
			Var8.f_10 = iParam2;
			Var8.f_11 = Global_196948.f_F;
			unk_0xFDDF5012CAC01420(&Var8);
		}
		else if (unk_0x3362CDE8460ED38B(sVar0, "GB_FRAGILE_GOODS"))
		{
			Var9 = { Var1 };
			Var9.f_F = uParam0;
			Var9.f_10 = uParam1;
			Var9.f_11 = iParam2;
			Var9.f_E = iParam3;
			Var9.f_12 = Global_196948.f_F;
			unk_0x26687349CB68A516(&Var9);
		}
		else if (unk_0x3362CDE8460ED38B(sVar0, "GB_AIRFREIGHT"))
		{
			Var10 = { Var1 };
			Var10.f_E = uParam0;
			Var10.f_F = uParam1;
			Var10.f_10 = iParam2;
			Var10.f_11 = Global_196948.f_F;
			unk_0x37D5D670955A5AA7(&Var10);
		}
	}
	func_908();
}

void func_908()//Position - 0x28438
{
	struct<18> Var0;
	
	Global_196948 = { Var0 };
}

void func_909(struct<21> Param0)//Position - 0x2844C
{
	func_946(func_947(Param0), Param0);
	unk_0xD1CF2F876BAD2600(16);
	unk_0xA6E7E0EC9E48D44C(8);
	func_945(0, -1, 0);
	unk_0x76AE988734CA7760(&Local_105, 872);
	unk_0xE45D6A3FD6454198(&Local_106, 449);
	if (!func_944())
	{
		func_861();
	}
	if (unk_0x7AF0088ABFA713B6())
	{
		unk_0x6C87EFD58B261C6F(0);
		if (unk_0x0DE6397A2CB3EF75())
		{
		}
		func_941();
		func_910(0, 0);
		Local_106[unk_0x6BAA0516CC970D99() /*14*/] = 0;
	}
	else
	{
		func_861();
	}
}

void func_910(int iParam0, int iParam1)//Position - 0x284C4
{
	func_940();
	if (func_371(unk_0xB5CEFD608600A09F()))
	{
		func_913(1);
	}
	if ((iParam0 != 0 && unk_0x96B1061E8F3CBC9A(iParam1)) && func_912(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				unk_0xF0059F27F7BB6680(&Global_19693A, 0);
				break;
			}
	}
	if (!func_435() && !func_179(unk_0xB5CEFD608600A09F(), 1))
	{
		if (func_136())
		{
			func_107(3);
		}
	}
	func_107(4);
	if (func_450(0))
	{
		Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_39 = func_452();
	}
	if (func_304(iParam0))
	{
		func_676();
		Global_19695A.f_12 = func_656(func_240());
	}
	else if (func_309(func_884(unk_0xB5CEFD608600A09F())))
	{
		func_674();
		Global_196990.f_12 = func_656(func_240());
	}
	func_911();
}

void func_911()//Position - 0x285A0
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_14A4EA.f_215[iVar0 /*42*/].f_1 = func_63();
		Global_14A4EA.f_215[iVar0 /*42*/].f_9 = 0;
		iVar0++;
	}
}

int func_912(int iParam0, bool bParam1)//Position - 0x285DA
{
	return func_74(unk_0xB5CEFD608600A09F(), iParam0, bParam1);
}

void func_913(bool bParam0)//Position - 0x285EE
{
	int iVar0;
	
	func_905(33);
	func_905(34);
	func_905(35);
	func_905(36);
	func_905(37);
	func_905(38);
	func_905(39);
	func_905(40);
	func_905(43);
	func_905(41);
	func_905(54);
	func_905(42);
	func_905(47);
	func_939(23);
	func_939(24);
	func_905(92);
	unk_0x7CB6FD92BE491AD9(&(Global_267214.f_6BD), 2);
	func_938();
	func_933();
	func_928();
	func_923();
	func_915();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_267214.f_1312.f_E[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_914(3))
	{
		func_939(3);
	}
	else if (func_914(4))
	{
		func_939(4);
	}
	else if (func_914(5))
	{
		func_939(5);
	}
	else if (func_914(6))
	{
		func_939(6);
	}
	else if (func_914(7))
	{
		func_939(7);
	}
	else if (((((((((((((((((func_914(0) || func_914(1)) || func_914(2)) || func_914(8)) || func_914(9)) || func_914(10)) || func_914(11)) || func_914(12)) || func_914(13)) || func_914(14)) || func_914(15)) || func_914(16)) || func_914(17)) || func_914(18)) || func_914(19)) || func_914(20)) || func_914(21)) || func_914(22))
	{
		func_939(8);
		func_939(0);
		func_939(1);
		func_939(2);
		func_939(9);
		func_939(10);
		func_939(11);
		func_939(12);
		func_939(13);
		func_939(14);
		func_939(15);
		func_939(16);
		func_939(17);
		func_939(18);
		func_939(19);
		func_939(20);
		func_939(21);
		func_939(22);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_267214.f_1312.f_E[iVar0] = 0;
			iVar0++;
		}
	}
}

bool func_914(int iParam0)//Position - 0x2884C
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xFA30DFD0084E92FE(Global_267214.f_1312.f_E[iVar0], iVar1);
}

void func_915()//Position - 0x28875
{
	int iVar0;
	
	if (func_922())
	{
		func_921(8);
		func_921(9);
		func_921(10);
		func_921(12);
		func_921(13);
		func_921(14);
		func_921(19);
		func_921(20);
		func_921(21);
		func_921(22);
		func_921(23);
		func_921(24);
		func_921(25);
		func_921(26);
		func_921(15);
		func_921(16);
		func_921(17);
		func_921(18);
		func_921(35);
		func_921(45);
		func_921(46);
		if (func_920(11))
		{
			func_921(11);
			iVar0 = func_423(7222, -1, 0);
			unk_0xF0059F27F7BB6680(&iVar0, 2);
			func_421(7222, iVar0, -1, 1, 0);
		}
	}
	if (func_920(48))
	{
		if (func_919(151, 3))
		{
			func_918(151, 3);
		}
		func_921(48);
	}
	if (func_920(49))
	{
		if (func_919(152, 3))
		{
			func_918(152, 3);
		}
		func_921(49);
	}
	if (func_920(50))
	{
		if (func_919(153, 3))
		{
			func_918(153, 3);
		}
		func_921(50);
	}
	if (func_920(51))
	{
		if (func_919(func_916(), 3))
		{
			func_918(func_916(), 3);
		}
		func_921(51);
	}
}

int func_916()//Position - 0x289BF
{
	if (func_917())
	{
		Global_19B04.f_6D75[154 /*29*/].f_18[Global_389D] = 1;
	}
	return 154;
}

int func_917()//Position - 0x289E3
{
	int iVar0;
	
	iVar0 = func_64(unk_0xB5CEFD608600A09F());
	if (((iVar0 != unk_0xB5CEFD608600A09F() && iVar0 != func_63()) && unk_0x96B1061E8F3CBC9A(iVar0)) && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

void func_918(int iParam0, int iParam1)//Position - 0x28A24
{
	if (Global_75[iParam0 /*10*/].f_8 != 144)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			Global_19B04.f_6D75[iParam0 /*29*/].f_C[iParam1] = 0;
			Global_19B04.f_6D75[iParam0 /*29*/].f_18[iParam1] = 0;
		}
	}
}

int func_919(int iParam0, int iParam1)//Position - 0x28A67
{
	if (Global_19B04.f_6D75[iParam0 /*29*/].f_C[iParam1] == 1)
	{
		return 1;
	}
	return 0;
}

bool func_920(int iParam0)//Position - 0x28A8C
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xFA30DFD0084E92FE(Global_267214.f_1312.f_1A[iVar0], iVar1);
}

void func_921(int iParam0)//Position - 0x28AB5
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x7CB6FD92BE491AD9(&(Global_267214.f_1312.f_1A[iVar0]), iVar1);
}

int func_922()//Position - 0x28ADE
{
	if (((((((((((((((((((((func_920(8) || func_920(9)) || func_920(10)) || func_920(12)) || func_920(11)) || func_920(13)) || func_920(14)) || func_920(19)) || func_920(20)) || func_920(21)) || func_920(22)) || func_920(23)) || func_920(24)) || func_920(25)) || func_920(26)) || func_920(15)) || func_920(16)) || func_920(17)) || func_920(18)) || func_920(35)) || func_920(45)) || func_920(46))
	{
		return 1;
	}
	return 0;
}

void func_923()//Position - 0x28BF0
{
	if (func_927())
	{
		func_926(0);
		func_926(1);
		func_926(2);
		func_926(3);
		func_926(4);
		func_926(5);
		if (func_925(32))
		{
			if (func_919(func_924(), 3))
			{
				func_918(func_924(), 3);
			}
			func_926(32);
		}
	}
}

int func_924()//Position - 0x28C44
{
	if (func_917())
	{
		Global_19B04.f_6D75[12 /*29*/].f_18[Global_389D] = 1;
	}
	return 12;
}

bool func_925(int iParam0)//Position - 0x28C68
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xFA30DFD0084E92FE(Global_267214.f_1312.f_17[iVar0], iVar1);
}

void func_926(int iParam0)//Position - 0x28C91
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x7CB6FD92BE491AD9(&(Global_267214.f_1312.f_17[iVar0]), iVar1);
}

int func_927()//Position - 0x28CBA
{
	if ((((func_925(1) || func_925(0)) || func_925(2)) || func_925(4)) || func_925(5))
	{
		return 1;
	}
	return 0;
}

void func_928()//Position - 0x28CFB
{
	if (func_932())
	{
		func_931(0);
		func_931(1);
		func_931(2);
		func_931(3);
		func_931(4);
		func_931(5);
		func_931(6);
		func_931(7);
		if (func_930(8))
		{
			func_931(8);
		}
		if (func_930(15))
		{
			if (func_919(func_929(), 3))
			{
				func_918(func_929(), 3);
			}
			func_931(15);
		}
	}
}

int func_929()//Position - 0x28D68
{
	if (func_917())
	{
		Global_19B04.f_6D75[20 /*29*/].f_18[Global_389D] = 1;
	}
	return 20;
}

bool func_930(int iParam0)//Position - 0x28D8C
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xFA30DFD0084E92FE(Global_267214.f_1312.f_15[iVar0], iVar1);
}

void func_931(int iParam0)//Position - 0x28DB5
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x7CB6FD92BE491AD9(&(Global_267214.f_1312.f_15[iVar0]), iVar1);
}

int func_932()//Position - 0x28DDE
{
	if ((((((((func_930(0) || func_930(1)) || func_930(2)) || func_930(3)) || func_930(4)) || func_930(5)) || func_930(6)) || func_930(7)) || func_930(8))
	{
		return 1;
	}
	return 0;
}

void func_933()//Position - 0x28E4C
{
	if (func_937())
	{
		func_936(0);
		func_936(1);
		func_936(2);
		func_936(3);
		func_936(4);
		func_936(5);
		func_936(6);
		func_936(7);
		func_936(8);
		func_936(9);
		func_936(10);
		func_936(11);
		func_936(12);
		if (func_935(13))
		{
			if (func_919(func_934(), 3))
			{
				func_918(func_934(), 3);
			}
			func_936(13);
		}
	}
}

int func_934()//Position - 0x28EC8
{
	if (func_917())
	{
		Global_19B04.f_6D75[76 /*29*/].f_18[Global_389D] = 1;
	}
	return 76;
}

bool func_935(int iParam0)//Position - 0x28EEC
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xFA30DFD0084E92FE(Global_267214.f_1312.f_13[iVar0], iVar1);
}

void func_936(int iParam0)//Position - 0x28F15
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x7CB6FD92BE491AD9(&(Global_267214.f_1312.f_13[iVar0]), iVar1);
}

int func_937()//Position - 0x28F3E
{
	if ((((((((((((func_935(0) || func_935(1)) || func_935(2)) || func_935(3)) || func_935(4)) || func_935(5)) || func_935(6)) || func_935(7)) || func_935(8)) || func_935(9)) || func_935(10)) || func_935(11)) || func_935(12))
	{
		return 1;
	}
	return 0;
}

void func_938()//Position - 0x28FDC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_267214.f_1312.f_11[iVar0] = 0;
		iVar0++;
	}
}

void func_939(int iParam0)//Position - 0x29004
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x7CB6FD92BE491AD9(&(Global_267214.f_1312.f_E[iVar0]), iVar1);
}

void func_940()//Position - 0x2902D
{
	struct<14> Var0;
	
	Global_196948 = { Var0 };
	Global_196948.f_E = 0;
	Global_196948.f_F = 0;
}

void func_941()//Position - 0x2904F
{
	int iVar0;
	int iVar1;
	
	unk_0xB2CB6EAA6B280A84("relHeadHunterPlayer", &iLocal_112);
	iVar0 = unk_0xF9E3B31053F43360(unk_0x84788C4CA5E15BDC(unk_0xBC25C936A095B5BA()), -1533126372);
	iVar1 = 0;
	while (iVar1 < 32)
	{
		unk_0xA902E18EDF6FA0C8(5, Global_180770[iVar1], iLocal_112);
		unk_0xA902E18EDF6FA0C8(5, iLocal_112, Global_180770[iVar1]);
		unk_0xA902E18EDF6FA0C8(1, Global_180770[iVar1], Global_18079D);
		unk_0xA902E18EDF6FA0C8(1, Global_18079D, Global_180770[iVar1]);
		unk_0xA902E18EDF6FA0C8(iVar0, iLocal_112, -1533126372);
		unk_0xA902E18EDF6FA0C8(iVar0, -1533126372, iLocal_112);
		unk_0xA902E18EDF6FA0C8(1, iLocal_112, Global_1807A0[5]);
		unk_0xA902E18EDF6FA0C8(1, Global_1807A0[5], iLocal_112);
		unk_0xA902E18EDF6FA0C8(1, iLocal_112, Global_180791);
		unk_0xA902E18EDF6FA0C8(1, Global_180791, iLocal_112);
		iVar1++;
	}
	unk_0xA902E18EDF6FA0C8(5, iLocal_112, Global_18079D);
	unk_0xA902E18EDF6FA0C8(5, Global_18079D, iLocal_112);
	unk_0xA902E18EDF6FA0C8(1, 2017343592, Global_18079D);
	unk_0xA902E18EDF6FA0C8(5, 2017343592, iLocal_112);
	func_943(1, &Global_18079D);
	func_942(&Global_18079D);
	func_942(&iLocal_112);
}

void func_942(int iParam0)//Position - 0x29168
{
	unk_0xA902E18EDF6FA0C8(1, -1865950624, *iParam0);
	unk_0xA902E18EDF6FA0C8(1, *iParam0, -1865950624);
	unk_0xA902E18EDF6FA0C8(1, 296331235, *iParam0);
	unk_0xA902E18EDF6FA0C8(1, *iParam0, 296331235);
	unk_0xA902E18EDF6FA0C8(1, 1166638144, *iParam0);
	unk_0xA902E18EDF6FA0C8(1, *iParam0, 1166638144);
	unk_0xA902E18EDF6FA0C8(1, 2037579709, *iParam0);
	unk_0xA902E18EDF6FA0C8(1, *iParam0, 2037579709);
	unk_0xA902E18EDF6FA0C8(1, 2017343592, *iParam0);
	unk_0xA902E18EDF6FA0C8(1, *iParam0, 2017343592);
	unk_0xA902E18EDF6FA0C8(1, -1821475077, *iParam0);
	unk_0xA902E18EDF6FA0C8(1, *iParam0, -1821475077);
	unk_0xA902E18EDF6FA0C8(1, 1782292358, *iParam0);
	unk_0xA902E18EDF6FA0C8(1, *iParam0, 1782292358);
	unk_0xA902E18EDF6FA0C8(1, -1033021910, *iParam0);
	unk_0xA902E18EDF6FA0C8(1, *iParam0, -1033021910);
	unk_0xA902E18EDF6FA0C8(1, -1285976420, *iParam0);
	unk_0xA902E18EDF6FA0C8(1, *iParam0, -1285976420);
}

void func_943(int iParam0, var uParam1)//Position - 0x2925A
{
	unk_0xA902E18EDF6FA0C8(iParam0, -1533126372, *uParam1);
	unk_0xA902E18EDF6FA0C8(iParam0, *uParam1, -1533126372);
	unk_0xA902E18EDF6FA0C8(iParam0, -472287501, *uParam1);
	unk_0xA902E18EDF6FA0C8(iParam0, *uParam1, -472287501);
	unk_0xA902E18EDF6FA0C8(iParam0, -183807561, *uParam1);
	unk_0xA902E18EDF6FA0C8(iParam0, *uParam1, -183807561);
}

int func_944()//Position - 0x292B6
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
		if (func_856())
		{
			return 0;
		}
		if (func_854(155))
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

int func_945(int iParam0, int iParam1, bool bParam2)//Position - 0x2930F
{
	int iVar0;
	
	iVar0 = unk_0x4796DAD7A8894E2F();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_862();
			}
			else
			{
				return 0;
			}
		}
		if (!func_806())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x7AF0088ABFA713B6())
				{
					if (!bParam2)
					{
						func_862();
					}
					else
					{
						return 0;
					}
				}
				if (func_856())
				{
					if (!bParam2)
					{
						func_862();
					}
					else
					{
						return 0;
					}
				}
				if (func_854(155))
				{
					if (!bParam2)
					{
						func_862();
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
					func_862();
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
				func_862();
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
			func_862();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_946(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x29424
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		func_862();
	}
	unk_0xBF463BC3D6FFDE31(iParam0, 0, Param1.f_10);
}

int func_947(int iParam0)//Position - 0x29443
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

int func_948(int iParam0, bool bParam1, bool bParam2)//Position - 0x29AD9
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

