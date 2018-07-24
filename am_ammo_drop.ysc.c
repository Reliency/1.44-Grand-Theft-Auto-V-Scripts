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
	struct<22> Local_60 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 3, -1, 0, 0, 0, -1861623876, 0 } ;
	var uLocal_61 = 0;
	vector3 vLocal_62[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	var uLocal_65 = 0;
	int iLocal_66 = 0;
	bool bLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 16;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
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
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
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
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	struct<21> Local_237 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	if (unk_0x7AF0088ABFA713B6())
	{
		if (!func_140(ScriptParam_237))
		{
			func_134();
		}
	}
	while (true)
	{
		func_133();
		if (func_123())
		{
			func_134();
		}
		if (unk_0x2F7EEEA6378AC19B() != bLocal_67)
		{
			func_134();
		}
		if (unk_0x4ED43B67B3F05E0F(unk_0x7121087DFC37DE0B()) != Local_60.f_11)
		{
			func_134();
		}
		unk_0x135885FDD612D1A8();
		switch (func_122(unk_0x6BAA0516CC970D99()))
		{
			case 0:
				if (func_120())
				{
					if (func_119() == 1)
					{
						func_118();
						vLocal_62[unk_0x6BAA0516CC970D99() /*3*/] = 1;
					}
					else if (func_119() == 4)
					{
						vLocal_62[unk_0x6BAA0516CC970D99() /*3*/] = 3;
					}
				}
				break;
			
			case 1:
				if (func_119() == 1)
				{
					func_100();
				}
				else if (func_119() == 4)
				{
					vLocal_62[unk_0x6BAA0516CC970D99() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_99(&(Local_60.f_15));
				if (func_98(&(Local_60.f_15)))
				{
					vLocal_62[unk_0x6BAA0516CC970D99() /*3*/] = 4;
				}
				break;
			
			case 2:
				vLocal_62[unk_0x6BAA0516CC970D99() /*3*/] = 4;
			
			case 4:
				func_134();
				break;
		}
		if (unk_0x0DE6397A2CB3EF75())
		{
			switch (func_119())
			{
				case 0:
					if (func_71())
					{
						Local_60 = 1;
					}
					break;
				
				case 1:
					func_35();
					if (func_1())
					{
						Local_60 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()//Position - 0x1B7
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()//Position - 0x1CB
{
	if (unk_0xFA30DFD0084E92FE(iLocal_63, 8))
	{
		if (!func_34(unk_0xB5CEFD608600A09F(), 1, 1))
		{
			if (!unk_0xFA30DFD0084E92FE(Local_60.f_1, 9))
			{
				unk_0xF0059F27F7BB6680(&(Local_60.f_1), 9);
			}
			return 0;
		}
		else if (unk_0xFA30DFD0084E92FE(Local_60.f_1, 9))
		{
			return 1;
		}
	}
	if (Local_60.f_C == 0 || Local_60.f_C == 1)
	{
		if (!unk_0x8EA6CABD14F1B89A(Local_60.f_4))
		{
			if (!func_32(Local_60.f_2))
			{
				return 1;
			}
			if (func_31(Local_60.f_3))
			{
				return 1;
			}
			if (Local_60.f_C > 0)
			{
				return 1;
			}
		}
		if (unk_0xFA30DFD0084E92FE(iLocal_63, 8))
		{
			if (!unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), Local_60.f_6, 250f, 250f, 250f, 0, 1, 0))
			{
				if (Local_60.f_12 == 1)
				{
					func_13();
				}
				return 1;
			}
			if (Local_60.f_12 == 1)
			{
				if ((((func_9(unk_0xB5CEFD608600A09F()) && func_8() != 151) || func_6(unk_0xB5CEFD608600A09F(), 146)) || func_5()) || func_4())
				{
					func_13();
					if (unk_0x7FFE36DB9042AF23(Local_60.f_4))
					{
						func_3(&(Local_60.f_4));
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_3(var uParam0)//Position - 0x306
{
	int iVar0;
	
	if (unk_0x7FFE36DB9042AF23(*uParam0))
	{
		if (!unk_0x89B5CBCE9D131B32(*uParam0))
		{
		}
	}
	if (unk_0x8EA6CABD14F1B89A(*uParam0))
	{
		iVar0 = unk_0xD14280F674B4DBF4(*uParam0);
		unk_0xC46CA8E9D2A3F4DD(&iVar0);
	}
}

var func_4()//Position - 0x33F
{
	return Global_1406A0;
}

var func_5()//Position - 0x34B
{
	return Global_267214.f_130F;
}

int func_6(int iParam0, int iParam1)//Position - 0x35A
{
	if (Global_18C80F[iParam0 /*558*/] == iParam1)
	{
		return func_7(iParam0);
	}
	return 0;
}

int func_7(int iParam0)//Position - 0x37A
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_18C80F[iVar0 /*558*/].f_1, 0);
	}
	return 0;
}

int func_8()//Position - 0x3A0
{
	return Global_190DD1;
}

int func_9(int iParam0)//Position - 0x3AC
{
	if (func_12(iParam0))
	{
		return 1;
	}
	if (func_10(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_10(int iParam0)//Position - 0x3CF
{
	return func_11(iParam0, 20);
}

bool func_11(int iParam0, int iParam1)//Position - 0x3DF
{
	return unk_0xFA30DFD0084E92FE(Global_18C80F[iParam0 /*558*/].f_B.f_4, iParam1);
}

int func_12(var uParam0)//Position - 0x3FA
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_18C80F[iVar0 /*558*/].f_1, 7);
	}
	return 0;
}

void func_13()//Position - 0x420
{
	if (unk_0x7FFE36DB9042AF23(Local_60.f_4))
	{
		if (Global_40001.f_4AF2 > 0)
		{
			func_28(Global_40001.f_4AF2, 0);
			func_14(Global_40001.f_4AF2, 14, 2, 1);
		}
	}
}

void func_14(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x459
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	StringCopy(&Var0, func_27(iParam1), 16);
	StringCopy(&Var1, func_26(iParam2), 16);
	switch (iParam1)
	{
		case 0:
			iVar2 = 1287308202;
			break;
		
		case 1:
			iVar2 = 691372038;
			break;
		
		case 2:
			iVar2 = 1480707108;
			break;
		
		case 3:
			iVar2 = 1512499951;
			break;
		
		case 4:
			iVar2 = 562283735;
			break;
		
		case 5:
			iVar2 = -154732333;
			break;
		
		case 6:
			iVar2 = -1362660491;
			break;
		
		case 7:
			iVar2 = 645708827;
			break;
		
		case 8:
			iVar2 = 767907967;
			break;
		
		case 9:
			iVar2 = -1970151306;
			break;
		
		case 10:
			iVar2 = 718859568;
			break;
		
		case 11:
			iVar2 = -1955564771;
			break;
		
		case 12:
			iVar2 = 892388724;
			break;
		
		case 13:
			iVar2 = -1426920838;
			break;
		
		case 14:
			iVar2 = -664597565;
			break;
		
		case 15:
			iVar2 = 1864522104;
			break;
		
		case 16:
			iVar2 = 215608230;
			break;
	}
	if (func_25())
	{
		func_15(iVar2, iParam0, &iVar3, bParam3, bParam3, 0);
		Global_41092C[iVar3 /*80*/].f_8.f_2B = { Var0 };
		Global_41092C[iVar3 /*80*/].f_8.f_2F = { Var1 };
	}
	else
	{
		unk_0xFCB169DE2DC9317A(iParam0, &Var0, &Var1, bParam3);
	}
}

void func_15(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x5D5
{
	int iVar0;
	
	if (!func_25())
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
				func_16(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_16(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_16(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xA9B
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_25())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x060D652F887827B8(func_24()) || unk_0xEBA8BD5AE6FF01CA())
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
			*uParam0 = func_23(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1);
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
			func_22(1, iParam4);
			Global_410B51 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_17(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_17(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xC3F
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xF0059F27F7BB6680(&(Global_24FB5C[unk_0xB5CEFD608600A09F() /*406*/].f_76.f_47), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_18(iParam0);
	}
}

void func_18(int iParam0)//Position - 0xC77
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_25())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_21(iParam0))
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
		func_19(&(Global_41092C[iParam0 /*80*/]));
	}
}

void func_19(var uParam0)//Position - 0xCC9
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
	func_20(&(uParam0->f_8.f_3));
	func_20(&(uParam0->f_8.f_10));
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

void func_20(var uParam0)//Position - 0xDBB
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

int func_21(int iParam0)//Position - 0xE03
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_41092C[iParam0 /*80*/].f_5 == 1;
	}
	return 0;
}

void func_22(int iParam0, int iParam1)//Position - 0xE2B
{
	Global_25897B = iParam1;
	Global_25897A = iParam0;
}

int func_23(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9)//Position - 0xE3F
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_41092C[iVar0 /*80*/].f_2 == 0)
		{
			if (!func_25())
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

int func_24()//Position - 0xF38
{
	return Global_1407E0;
}

int func_25()//Position - 0xF44
{
	if (unk_0x8ACB0C3FACC09467())
	{
		return unk_0xC9D803F7D7E10861();
	}
	return 0;
}

char* func_26(int iParam0)//Position - 0xF5B
{
	switch (iParam0)
	{
		case 0:
			return "NOTREACHTARGET";
			break;
		
		case 1:
			return "TARGET_ESCAPE";
			break;
		
		case 2:
			return "DELIVERY_FAIL";
			break;
		
		case 3:
			return "NOT_USED";
			break;
		
		case 4:
			return "TEAM_QUIT";
			break;
		
		case 5:
			return "SERVER_ERROR";
			break;
		
		case 6:
			return "RECEIVE_LJ_L";
			break;
		
		case 8:
			return "CHALLENGE_PLAYER_LEFT";
			break;
	}
	return "DEFAULT";
}

char* func_27(int iParam0)//Position - 0xFE4
{
	switch (iParam0)
	{
		case 0:
			return "BACKUP_VAGOS";
		
		case 1:
			return "BACKUP_LOST";
		
		case 2:
			return "BACKUP_FAMILIES";
		
		case 3:
			return "HIRE_MUGGER";
		
		case 4:
			return "HIRE_MERCENARY";
		
		case 5:
			return "BUY_CARDROPOFF";
		
		case 6:
			return "HELI_PICKUP";
		
		case 7:
			return "BOAT_PICKUP";
		
		case 8:
			return "CLEAR_WANTED";
		
		case 9:
			return "HEAD_2_HEAD";
		
		case 10:
			return "CHALLENGE";
		
		case 11:
			return "SHARE_LAST_JOB";
		
		case 13:
			return "REFUNDAPPEA";
		
		case 14:
			return "AMMO_DROP_REF";
		
		case 15:
			return "ORBITAL_MANUAL";
		
		case 16:
			return "ORBITAL_AUTO";
		
		default:
	}
	return "DEFAULT";
}

void func_28(int iParam0, int iParam1)//Position - 0x10BC
{
	func_30(iParam0, 1, 1, 0);
	if (iParam1 == 1)
	{
		func_29(iParam0, 0);
	}
}

void func_29(int iParam0, bool bParam1)//Position - 0x10DA
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_30(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x10EB
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = SYSTEM::FLOOR((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_D3.f_4 = iVar1;
	Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_D3.f_3 = (Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_D3.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_29(iVar1, 0);
	}
}

int func_31(int iParam0)//Position - 0x116E
{
	if (unk_0x7FFE36DB9042AF23(iParam0))
	{
		return unk_0x36CEFBE9B745A58D(unk_0xE48AD7BF7762E114(iParam0));
	}
	return 1;
}

int func_32(int iParam0)//Position - 0x118D
{
	if (unk_0x7FFE36DB9042AF23(iParam0))
	{
		return !func_33(unk_0x19D7F09C2FABDDA0(iParam0));
	}
	return 0;
}

int func_33(int iParam0)//Position - 0x11AD
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

int func_34(int iParam0, bool bParam1, bool bParam2)//Position - 0x11E6
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

void func_35()//Position - 0x1230
{
	switch (Local_60.f_C)
	{
		case 0:
			if (Local_60.f_12)
			{
				func_70();
			}
			else
			{
				func_65();
			}
			if (func_39())
			{
				func_38();
				Local_60.f_C = 1;
			}
			break;
		
		case 1:
			if (unk_0x7FFE36DB9042AF23(Local_60.f_4))
			{
				func_37(Local_60.f_4, 18);
				if (Local_60.f_F == 3)
				{
					if (!unk_0x7FFE36DB9042AF23(Local_60.f_5))
					{
						Local_60.f_F = 2;
					}
				}
				if (unk_0x7FFE36DB9042AF23(Local_60.f_2))
				{
					func_36(&(Local_60.f_2));
				}
				else if (Local_60.f_D == 1)
				{
					Local_60.f_D = 0;
				}
				if (unk_0x7FFE36DB9042AF23(Local_60.f_3))
				{
					func_36(&(Local_60.f_3));
				}
				else if (Local_60.f_E == 1)
				{
					Local_60.f_E = 0;
				}
			}
			break;
		
		case 2:
			break;
	}
}

void func_36(var uParam0)//Position - 0x12F2
{
	int iVar0;
	
	if (unk_0x8EA6CABD14F1B89A(*uParam0))
	{
		iVar0 = unk_0xD14280F674B4DBF4(*uParam0);
		unk_0x91BCA7FA73FFCDF2(&iVar0);
	}
}

void func_37(var uParam0, int iParam1)//Position - 0x1316
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	float fVar7;
	float fVar8;
	
	unk_0xE45648BDBF3441F5(iParam1, &iVar3, &iVar4, &iVar5, &uVar6);
	fVar2 = 0.5f;
	unk_0x2B3953EE61953843(unk_0x6F79ECA8C83E4357(unk_0x370629AFF3A5C45C(uParam0)), &vVar0, &vVar1);
	fVar7 = ((vVar1.z - vVar0.z) / 2f);
	fVar8 = (vVar1.z - fVar7);
	if (fVar2 <= (fVar8 + 0.1f))
	{
		fVar2 = (fVar8 + 0.4f);
	}
	unk_0xC6EA3A47240425C4(2, unk_0x541C2AEF053615BC(unk_0x370629AFF3A5C45C(uParam0), 1) + Vector((((vVar1.z - vVar0.z) / 2f) + fVar2), 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, iVar3, iVar4, iVar5, 100, 1, 1, 2, 0, 0, 0, 0);
}

void func_38()//Position - 0x13BC
{
	if (!unk_0x2DA8CA50A72528FB(iLocal_64))
	{
		iLocal_64 = unk_0x511FE22BCF5353CD(unk_0x370629AFF3A5C45C(Local_60.f_4));
		if (Local_60.f_12)
		{
			unk_0xBF0E22F3E083C33D(iLocal_64, 84);
			unk_0x3F5F1772D71D5EC4(iLocal_64, 1.2f);
			unk_0x436D0272182E484D(iLocal_64, "AMD_BLIPBALL");
		}
		else
		{
			unk_0xBF0E22F3E083C33D(iLocal_64, 351);
			unk_0x436D0272182E484D(iLocal_64, "AMD_BLIPN");
			unk_0x3F5F1772D71D5EC4(iLocal_64, 0.7f);
		}
		unk_0x0D5352939CC40C16(iLocal_64, 2);
		unk_0x7781946F1FC054FA(iLocal_64, 120);
	}
}

int func_39()//Position - 0x1430
{
	if (!unk_0xFA30DFD0084E92FE(Local_60.f_1, 7))
	{
		if (func_32(Local_60.f_2))
		{
			if (unk_0x4DBCE270B354E123(unk_0x19D7F09C2FABDDA0(Local_60.f_2), Local_60.f_6, 5f, 5f, 600f, 0, 1, 0))
			{
				unk_0xF0059F27F7BB6680(&(Local_60.f_1), 7);
			}
		}
	}
	else if (func_120())
	{
		if (func_42())
		{
			if (func_40())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_40()//Position - 0x1495
{
	unk_0xF243B7A14FCFD0F4(Local_60.f_13.f_1);
	if (unk_0xD6513D668481290A(Local_60.f_13.f_1))
	{
		if (!unk_0x7FFE36DB9042AF23(Local_60.f_13) && unk_0x7FFE36DB9042AF23(Local_60.f_4))
		{
			if (unk_0x892B896276E3AB8B(1))
			{
				if (func_41(&(Local_60.f_13), Local_60.f_13.f_1, unk_0x541C2AEF053615BC(unk_0x370629AFF3A5C45C(Local_60.f_4), 1) - Vector(5f, 0f, 0f), 1, 1, 1, 0, 0))
				{
					unk_0xF2A50F5F6E7737D8(Local_60.f_13, 1);
					unk_0x019CE76D5286C95C(unk_0x370629AFF3A5C45C(Local_60.f_13), unk_0x349C94FFF43E2979(unk_0x370629AFF3A5C45C(Local_60.f_4)));
					unk_0x5DBE04849460E608(unk_0x370629AFF3A5C45C(Local_60.f_4), unk_0x370629AFF3A5C45C(Local_60.f_13), 0, 0f, 0f, 0.25f, 0f, 0f, 0f, 0, 0, 1, 0, 2, 1);
					unk_0xDF8A3F99E7CDEF9C(unk_0x370629AFF3A5C45C(Local_60.f_13), 1);
					unk_0x656194E145691D3E(unk_0x370629AFF3A5C45C(Local_60.f_13), 0);
					unk_0x46913653D1C7E82E(unk_0x370629AFF3A5C45C(Local_60.f_13));
					unk_0x3A8D19D7D434A741(unk_0x370629AFF3A5C45C(Local_60.f_13), 0f, 0f, -0.2f);
					unk_0xE52E8965AAD7623B(unk_0x370629AFF3A5C45C(Local_60.f_13), 1);
				}
			}
		}
	}
	if (!unk_0x7FFE36DB9042AF23(Local_60.f_13))
	{
		return 0;
	}
	return 1;
}

int func_41(var uParam0, int iParam1, vector3 vParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x1599
{
	if (!unk_0x892B896276E3AB8B(1))
	{
		return 0;
	}
	if (bParam7)
	{
		*uParam0 = unk_0x2448E4C54354F8D6(unk_0x1E0CB5BD6231AB3D(iParam1, vParam2, bParam4, bParam3, iParam5));
	}
	else
	{
		*uParam0 = unk_0x2448E4C54354F8D6(unk_0xB6896943DA475493(iParam1, vParam2, bParam4, bParam3, iParam5));
	}
	if (unk_0x7FFE36DB9042AF23(*uParam0))
	{
		unk_0x656194E145691D3E(unk_0x370629AFF3A5C45C(*uParam0), iParam6);
		if (unk_0x270072584099CC42(unk_0x370629AFF3A5C45C(*uParam0)))
		{
			if (bParam3)
			{
				unk_0xF2A50F5F6E7737D8(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_42()//Position - 0x161B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = joaat("prop_box_ammo02a");
	if (Local_60.f_12 == 1)
	{
		iVar0 = 1688540826;
	}
	unk_0xF243B7A14FCFD0F4(iVar0);
	unk_0xF243B7A14FCFD0F4(joaat("p_cargo_chute_s"));
	if (unk_0xD6513D668481290A(iVar0) && unk_0xD6513D668481290A(joaat("p_cargo_chute_s")))
	{
		if (!unk_0x7FFE36DB9042AF23(Local_60.f_4) && !unk_0x7FFE36DB9042AF23(Local_60.f_5))
		{
			if (func_32(Local_60.f_2) && unk_0x16CC0D3F6523391B(0, 0, 2, 0))
			{
				iVar1 = 200;
				if (!unk_0x7FFE36DB9042AF23(Local_60.f_4))
				{
					iVar2 = 0;
					iVar3 = joaat("pickup_ammo_bullet_mp");
					if (Local_60.f_12 == 1)
					{
						iVar3 = joaat("pickup_weapon_minigun");
					}
					if (Local_60.f_12 == 0)
					{
						unk_0xF0059F27F7BB6680(&iVar2, 12);
					}
					else
					{
						unk_0xF0059F27F7BB6680(&iVar2, 12);
					}
					Local_60.f_4 = unk_0x2448E4C54354F8D6(unk_0x050087F9137D09CA(iVar3, unk_0x541C2AEF053615BC(unk_0x19D7F09C2FABDDA0(Local_60.f_2), 1) - Vector(3f, 0f, 0f), iVar2, iVar1, iVar0, 1, 1));
					if (Local_60.f_12 == 1)
					{
						func_64(unk_0x370629AFF3A5C45C(Local_60.f_4));
						unk_0x95F950F306038BD0(0);
					}
					unk_0x1E5C2A1EAB944289(unk_0x370629AFF3A5C45C(Local_60.f_4), 1);
					unk_0x374453000561F2DE(unk_0x370629AFF3A5C45C(Local_60.f_4), 1);
					unk_0xDF8A3F99E7CDEF9C(unk_0x370629AFF3A5C45C(Local_60.f_4), 1);
					unk_0x656194E145691D3E(unk_0x370629AFF3A5C45C(Local_60.f_4), 0);
					unk_0x46913653D1C7E82E(unk_0x370629AFF3A5C45C(Local_60.f_4));
					func_63();
					iVar4 = unk_0x2F079D1FC5F6CB99();
					unk_0xF2C27FE5A8B98CB5(iVar4, "Crate_Beeps", unk_0x370629AFF3A5C45C(Local_60.f_4), "MP_CRATE_DROP_SOUNDS", 1, 0);
					Local_60.f_10 = unk_0xE0F259265E9912C6(iVar4);
				}
				if (unk_0x7FFE36DB9042AF23(Local_60.f_4) && !unk_0x7FFE36DB9042AF23(Local_60.f_5))
				{
					if (func_41(&(Local_60.f_5), joaat("p_cargo_chute_s"), unk_0x541C2AEF053615BC(unk_0x19D7F09C2FABDDA0(Local_60.f_2), 1) - Vector(2f, 0f, 0f), 1, 1, 0, 1, 0))
					{
						unk_0xF2A50F5F6E7737D8(Local_60.f_5, 1);
						unk_0x5DBE04849460E608(unk_0x370629AFF3A5C45C(Local_60.f_5), unk_0x370629AFF3A5C45C(Local_60.f_4), 0, 0f, 0f, 0.1f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
						unk_0xDF8A3F99E7CDEF9C(unk_0x370629AFF3A5C45C(Local_60.f_5), 1);
						unk_0x656194E145691D3E(unk_0x370629AFF3A5C45C(Local_60.f_5), 0);
						unk_0x1F000DD52A4C4208(unk_0x370629AFF3A5C45C(Local_60.f_5), "P_cargo_chute_S_deploy", "P_cargo_chute_S", 1000f, 0, 0, 0, 0, 0);
						unk_0x366257F907116AD9(unk_0x370629AFF3A5C45C(Local_60.f_5));
					}
				}
				func_61();
				if (!unk_0xFA30DFD0084E92FE(iLocal_63, 15))
				{
					if (!Local_60.f_12)
					{
						func_60(&uLocal_72, 3, unk_0xE48AD7BF7762E114(Local_60.f_3), "FM_Pilot_Ammo", 0, 1);
						func_43(&uLocal_72, "CT_AUD", "MPCT_AMOinc", 12, 0, 0, 1);
					}
					unk_0xF0059F27F7BB6680(&iLocal_63, 15);
				}
			}
		}
	}
	if (unk_0x7FFE36DB9042AF23(Local_60.f_4) && unk_0x7FFE36DB9042AF23(Local_60.f_5))
	{
		return 1;
	}
	return 0;
}

int func_43(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x189A
{
	func_59(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_44(sParam2, iParam3, 0);
}

int func_44(char* sParam0, int iParam1, bool bParam2)//Position - 0x18E8
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
					func_58();
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
		if (func_57(8, -1))
		{
			return 0;
		}
		Global_3E04 = { Global_3DFE };
		func_56();
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
				func_49();
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
				if (func_48())
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
			if (func_47())
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
			func_46();
			Global_3DC2 = bParam2;
		}
		Global_3DBA = iParam1;
		StringCopy(&Global_3C3B, sParam0, 24);
		Global_394A = 0;
		func_45();
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
		func_58();
	}
	return 0;
}

void func_45()//Position - 0x1BB4
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

void func_46()//Position - 0x1BE4
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

int func_47()//Position - 0x1C79
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_48()//Position - 0x1CA0
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

void func_49()//Position - 0x1D39
{
	if (func_55(14))
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
		Global_389D = func_50();
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

var func_50()//Position - 0x1DDB
{
	func_51();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_51()//Position - 0x1DF4
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_54(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_53(unk_0xBC25C936A095B5BA());
			if (func_52(iVar0) && (!func_55(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_52(Global_19B04.f_932.f_21B.f_10CD))
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

bool func_52(int iParam0)//Position - 0x1EF1
{
	return iParam0 < 3;
}

int func_53(int iParam0)//Position - 0x1EFD
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_54(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_54(int iParam0)//Position - 0x1F3A
{
	if (func_52(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_55(int iParam0)//Position - 0x1F64
{
	return Global_8C41 == iParam0;
}

void func_56()//Position - 0x1F72
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

bool func_57(int iParam0, int iParam1)//Position - 0x1FC8
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

void func_58()//Position - 0x2003
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

void func_59(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x205A
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

void func_60(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x20B0
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

int func_61()//Position - 0x214B
{
	if (func_62())
	{
		if (!unk_0x2F1B39E315395385(iLocal_66))
		{
			iLocal_66 = unk_0x3E1A4D2AA8372983("scr_crate_drop_beacon", unk_0x370629AFF3A5C45C(Local_60.f_4), 0f, 0f, 0.2f, 0f, 0f, 0f, 1065353216, 0, 0, 0, 1065353216, 1065353216, 1065353216, 0);
			unk_0x42918D3B3281AA2C(iLocal_66, 0.8f, 0.18f, 0.19f, 0);
		}
	}
	if (!unk_0x2F1B39E315395385(iLocal_66))
	{
		return 0;
	}
	return 1;
}

int func_62()//Position - 0x21BD
{
	unk_0xA8396BF0E2C53C39();
	if (unk_0x95654D7A61CD43DE())
	{
		return 1;
	}
	return 0;
}

void func_63()//Position - 0x21D5
{
	if (unk_0xF0213F2BEA692F9E(Local_60.f_10) != -1)
	{
		if (unk_0x7FFE36DB9042AF23(Local_60.f_4))
		{
			if (!unk_0x1BD5EE88F32433CD(unk_0xF0213F2BEA692F9E(Local_60.f_10)))
			{
				unk_0x38FF8CB6377D36F6(unk_0xF0213F2BEA692F9E(Local_60.f_10));
			}
			unk_0x26D344275839A25E(unk_0xF0213F2BEA692F9E(Local_60.f_10));
		}
		else
		{
			if (!unk_0x1BD5EE88F32433CD(unk_0xF0213F2BEA692F9E(Local_60.f_10)))
			{
				unk_0x38FF8CB6377D36F6(unk_0xF0213F2BEA692F9E(Local_60.f_10));
			}
			unk_0x26D344275839A25E(unk_0xF0213F2BEA692F9E(Local_60.f_10));
		}
	}
}

void func_64(var uParam0)//Position - 0x2247
{
	var uVar0;
	
	unk_0xF0059F27F7BB6680(&uVar0, unk_0x822BEC8031773562());
	unk_0x9B6506B53E6B9B2D(uParam0, uVar0);
}

void func_65()//Position - 0x2261
{
	int iVar0;
	
	if (!unk_0xFA30DFD0084E92FE(iLocal_63, 11))
	{
		if (!unk_0xF16DAFF595E80F7C())
		{
			iVar0 = func_69(1190, -1, 0);
			if (!unk_0xFA30DFD0084E92FE(iVar0, 10))
			{
				func_68("AMD_HELP1", -1);
				unk_0xF0059F27F7BB6680(&iVar0, 10);
				func_66(1190, iVar0, -1, 1, 0);
				unk_0xF0059F27F7BB6680(&iLocal_63, 11);
			}
			else if (!unk_0xFA30DFD0084E92FE(iVar0, 11))
			{
				func_68("AMD_HELP2", -1);
				unk_0xF0059F27F7BB6680(&iVar0, 11);
				func_66(1190, iVar0, -1, 1, 0);
				unk_0xF0059F27F7BB6680(&iLocal_63, 11);
			}
			else
			{
				unk_0xF0059F27F7BB6680(&iLocal_63, 11);
			}
		}
	}
}

void func_66(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x22F8
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_67(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, iParam3);
	}
}

int func_67(var uParam0)//Position - 0x2328
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_24();
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

void func_68(char* sParam0, int iParam1)//Position - 0x235C
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, 1, iParam1);
}

int func_69(int iParam0, int iParam1, int iParam2)//Position - 0x2373
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_67(iParam1)];
	if (unk_0x6CB99B97664C3727(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_70()//Position - 0x23A5
{
	int iVar0;
	
	if (!unk_0xFA30DFD0084E92FE(iLocal_63, 17))
	{
		if (!unk_0xF16DAFF595E80F7C())
		{
			iVar0 = func_69(1190, -1, 0);
			if (!unk_0xFA30DFD0084E92FE(iVar0, 24))
			{
				func_68("BALD_HELP1", -1);
				unk_0xF0059F27F7BB6680(&iVar0, 24);
				func_66(1190, iVar0, -1, 1, 0);
				unk_0xF0059F27F7BB6680(&iLocal_63, 17);
			}
			else if (!unk_0xFA30DFD0084E92FE(iVar0, 25))
			{
				func_68("BALD_HELP2", -1);
				unk_0xF0059F27F7BB6680(&iVar0, 25);
				func_66(1190, iVar0, -1, 1, 0);
				unk_0xF0059F27F7BB6680(&iLocal_63, 17);
			}
			else
			{
				unk_0xF0059F27F7BB6680(&iLocal_63, 17);
			}
		}
	}
}

int func_71()//Position - 0x243C
{
	if (func_97(joaat("cuban800")) && func_97(joaat("s_m_m_pilot_02")))
	{
		if (func_95(&uLocal_70, 4000, 0))
		{
			if (func_74() && func_72())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_72()//Position - 0x2480
{
	if ((!unk_0x7FFE36DB9042AF23(Local_60.f_3) && func_97(joaat("s_m_m_pilot_02"))) && unk_0x7FFE36DB9042AF23(Local_60.f_2))
	{
		if (func_32(Local_60.f_2))
		{
			if (func_73(&(Local_60.f_3), Local_60.f_2, 22, joaat("s_m_m_pilot_02"), -1, 1, 1, 1))
			{
				unk_0x2E35C4FA5F0ED22F(unk_0xE48AD7BF7762E114(Local_60.f_3), 1);
				unk_0x4106FAF8AA1D69D5(unk_0xE48AD7BF7762E114(Local_60.f_3), Global_180791);
				unk_0x7D314AB19CA29C96(unk_0xE48AD7BF7762E114(Local_60.f_3), 0);
				unk_0x22321800954A532E(unk_0xE48AD7BF7762E114(Local_60.f_3), 1);
				unk_0x65E471E4A2D56226(unk_0xE48AD7BF7762E114(Local_60.f_3), SYSTEM::ROUND((200f * Global_40001.f_99)), 0);
				func_118();
				unk_0xA8E6405305C0D7DF(unk_0xE48AD7BF7762E114(Local_60.f_3), uLocal_65);
				unk_0x4D339A618B288894(unk_0x19D7F09C2FABDDA0(Local_60.f_2), SYSTEM::ROUND(50f));
			}
		}
	}
	if (!unk_0x7FFE36DB9042AF23(Local_60.f_3))
	{
		return 0;
	}
	unk_0x2CA123B0622F495C(joaat("s_m_m_pilot_02"));
	return 1;
}

int func_73(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)//Position - 0x2569
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

int func_74()//Position - 0x25F1
{
	vector3 vVar0;
	float fVar1;
	
	if (!unk_0x7FFE36DB9042AF23(Local_60.f_2))
	{
		if (func_97(joaat("cuban800")))
		{
			func_92(&vVar0, &fVar1);
			if (func_76(vVar0, 6f, 1f, 1f, 5f, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
			{
				if (func_75(&(Local_60.f_2), joaat("cuban800"), vVar0, fVar1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
				{
					unk_0xD421BC740C5340C3(unk_0x19D7F09C2FABDDA0(Local_60.f_2), 2);
					unk_0x346478B12F69D4E3(unk_0x19D7F09C2FABDDA0(Local_60.f_2), false);
					unk_0x73FD5B32F266E65D(unk_0x19D7F09C2FABDDA0(Local_60.f_2), 1);
					unk_0x46913653D1C7E82E(unk_0x19D7F09C2FABDDA0(Local_60.f_2));
					unk_0xA4DFFFD5B234240D(unk_0x19D7F09C2FABDDA0(Local_60.f_2), 60f);
					unk_0x251A179731E0D207(unk_0x19D7F09C2FABDDA0(Local_60.f_2));
					unk_0x2D655AA68FA1736B(unk_0x19D7F09C2FABDDA0(Local_60.f_2), true, 1, 0);
					unk_0xDDBD8CD1389FC0B5(unk_0x19D7F09C2FABDDA0(Local_60.f_2), 0);
					unk_0x656194E145691D3E(unk_0x19D7F09C2FABDDA0(Local_60.f_2), 0);
					unk_0xA1EE8501940C1D3E(unk_0x19D7F09C2FABDDA0(Local_60.f_2), 3);
					unk_0xA503C429FD75E6D3(unk_0x19D7F09C2FABDDA0(Local_60.f_2));
					if (Local_60.f_12 == 1)
					{
						unk_0x06D93FD5E4D394CF(unk_0x19D7F09C2FABDDA0(Local_60.f_2), 1, 0, 1, 0, 0, 0, 0, 0);
					}
				}
			}
		}
	}
	if (!unk_0x7FFE36DB9042AF23(Local_60.f_2))
	{
		return 0;
	}
	unk_0x2CA123B0622F495C(joaat("cuban800"));
	return 1;
}

int func_75(var uParam0, int iParam1, vector3 vParam2, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)//Position - 0x2720
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

int func_76(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)//Position - 0x281A
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
		if (func_85(vParam0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_24B2CE.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_77(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_24B2CE.f_2++;
	return 1;
}

int func_77(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)//Position - 0x292B
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_34(unk_0xB5CEFD608600A09F(), 1, 1))
		{
			if (!unk_0x17FAADF9916EF741())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0xF0F2FC9DE291567F(func_81(unk_0xB5CEFD608600A09F()), vParam0, true) <= (fVar2 + fParam1))
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
		if (func_34(iVar1, 1, 1))
		{
			if (!func_79(iVar1, 0) && unk_0x75206900382D1E30(unk_0xB5CEFD608600A09F(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0xB5CEFD608600A09F()))
				{
					if ((func_78(iVar1) || !bParam8) && !Global_24FB5C[iVar1 /*406*/].f_FF)
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
								if (unk_0xF0F2FC9DE291567F(func_81(iVar1), vParam0, true) <= (fVar2 + fParam1))
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
							if (unk_0xF0F2FC9DE291567F(func_81(iVar1), vParam0, true) <= (fVar2 + fParam1))
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

int func_78(int iParam0)//Position - 0x2AE2
{
	if (unk_0xE904009319A7A43E(unk_0xA95CF30C72EB526E(iParam0)) || Global_24FB5C[iParam0 /*406*/].f_F1)
	{
		return 1;
	}
	return 0;
}

bool func_79(int iParam0, int iParam1)//Position - 0x2B0D
{
	bool bVar0;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		bVar0 = func_80(-1, 0) == 8;
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

int func_80(int iParam0, bool bParam1)//Position - 0x2B58
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_24();
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

Vector3 func_81(int iParam0)//Position - 0x2B99
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_84() && Global_18402B[iVar0 /*770*/].f_2EA) && !func_83(Global_18402B[iVar0 /*770*/].f_2EB))
	{
		return Global_18402B[iVar0 /*770*/].f_2EB;
	}
	return func_82(iParam0);
}

Vector3 func_82(int iParam0)//Position - 0x2BEC
{
	return unk_0x541C2AEF053615BC(unk_0xA95CF30C72EB526E(iParam0), 0);
}

int func_83(vector3 vParam0)//Position - 0x2BFF
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

var func_84()//Position - 0x2C29
{
	return Global_255A46.f_10;
}

int func_85(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)//Position - 0x2C37
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && unk_0xB5CEFD608600A09F() != iVar1) || iParam6 == 0)
		{
			if (func_34(iVar1, bParam2, bParam3))
			{
				if (unk_0x75206900382D1E30(unk_0xB5CEFD608600A09F(), iVar1))
				{
					if (!bParam5 || (!unk_0x36CEFBE9B745A58D(unk_0xA95CF30C72EB526E(iVar1)) && func_78(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()) != unk_0x343CB262BF0CDF5A(iVar1))) || unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()) == -1)
						{
							if (((unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()) == -1 && uParam7) && bParam4) && func_86(iVar1))
							{
							}
							else if (unk_0x724D816EA203A79E(unk_0xA95CF30C72EB526E(iVar1)))
							{
								if (unk_0xF0F2FC9DE291567F(func_82(iVar1), vParam0, true) < fParam1)
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

int func_86(int iParam0)//Position - 0x2D33
{
	if (func_91(unk_0xB5CEFD608600A09F(), iParam0))
	{
		return 1;
	}
	Global_26210D = { func_90(iParam0) };
	if (unk_0xE140B7178EA00705(&Global_26210D))
	{
		return 1;
	}
	if (func_87(unk_0xB5CEFD608600A09F(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_87(int iParam0, int iParam1)//Position - 0x2D7A
{
	int iVar0;
	
	iVar0 = func_89(iParam0);
	if (!iVar0 == func_88())
	{
		if (iVar0 == func_89(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_88()//Position - 0x2DA5
{
	return -1;
}

int func_89(int iParam0)//Position - 0x2DAE
{
	if (iParam0 != func_88())
	{
		return Global_18C80F[iParam0 /*558*/].f_B;
	}
	return func_88();
}

struct<13> func_90(int iParam0)//Position - 0x2DD1
{
	struct<13> Var0;
	
	unk_0xB7DBA2C6D2C3C41A(iParam0, &Var0, 13);
	return Var0;
}

int func_91(int iParam0, int iParam1)//Position - 0x2DE8
{
	if (unk_0xB9ACC1154C623363())
	{
		Global_26210D = { func_90(iParam0) };
		Global_26211A = { func_90(iParam1) };
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

void func_92(var uParam0, var uParam1)//Position - 0x2E55
{
	float fVar0;
	
	*uParam0 = { func_93(Local_60.f_6 + Vector(200f, 0f, 0f), (400f / 2f), 400f, (200f / 2f)) };
	*uParam1 = unk_0xFDC254CE02DB0919((Local_60.f_6 - *uParam0), (Local_60.f_6.f_1 - uParam0->f_1));
	fVar0 = unk_0x5744C089D4BB9613((*uParam0 - 400f), (uParam0->f_1 - 400f), (*uParam0 + 400f), (uParam0->f_1 + 400f));
	if (uParam0->f_2 < fVar0)
	{
		uParam0->f_2 = fVar0;
	}
}

Vector3 func_93(vector3 vParam0, float fParam1, float fParam2, float fParam3)//Position - 0x2EDC
{
	vector3 vVar0;
	float fVar1;
	
	vVar0 = { unk_0x55AEFCD285ECC0F2(-1f, 1f), unk_0x55AEFCD285ECC0F2(-1f, 1f), 0f };
	fVar1 = (fParam3 / 2f);
	vVar0 = { func_94(vVar0, unk_0x55AEFCD285ECC0F2(fParam1, fParam2)) };
	vVar0.z = unk_0x55AEFCD285ECC0F2(-fVar1, fVar1);
	return vParam0 + vVar0;
}

Vector3 func_94(vector3 vParam0, float fParam1)//Position - 0x2F25
{
	float fVar0;
	
	if (fParam1 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = SYSTEM::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		return vParam0 * FtoV((fParam1 / fVar0));
	}
	return 0f, 0f, 0f;
}

int func_95(var uParam0, int iParam1, bool bParam2)//Position - 0x2F5C
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_96(uParam0, bParam2, 0);
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

void func_96(var uParam0, bool bParam1, bool bParam2)//Position - 0x2FBA
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

bool func_97(int iParam0)//Position - 0x2FFF
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xF243B7A14FCFD0F4(iParam0);
	return unk_0xD6513D668481290A(iParam0);
}

int func_98(var uParam0)//Position - 0x301D
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

void func_99(var uParam0)//Position - 0x3046
{
	if (!uParam0->f_1)
	{
		if (unk_0x0DE6397A2CB3EF75())
		{
			func_96(uParam0, 0, 0);
		}
	}
}

void func_100()//Position - 0x3065
{
	func_109();
	switch (vLocal_62[unk_0x6BAA0516CC970D99() /*3*/].f_2)
	{
		case 0:
			if (Local_60.f_C > 0)
			{
				vLocal_62[unk_0x6BAA0516CC970D99() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			func_105();
			func_101();
			break;
		
		case 2:
			func_134();
			break;
	}
}

void func_101()//Position - 0x30BA
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7FFE36DB9042AF23(Local_60.f_4))
	{
		if (func_34(unk_0xB5CEFD608600A09F(), 1, 1))
		{
			iVar1 = func_104(unk_0xBC25C936A095B5BA());
			if (((((((((((((((((iVar1 == joaat("weapon_unarmed") || iVar1 == joaat("weapon_flare")) || iVar1 == joaat("weapon_knife")) || iVar1 == joaat("weapon_nightstick")) || iVar1 == joaat("weapon_bat")) || iVar1 == joaat("weapon_hammer")) || iVar1 == joaat("weapon_golfclub")) || iVar1 == joaat("weapon_crowbar")) || iVar1 == joaat("weapon_molotov")) || iVar1 == joaat("weapon_grenade")) || iVar1 == joaat("weapon_grenadelauncher")) || iVar1 == joaat("weapon_grenadelauncher_smoke")) || iVar1 == joaat("weapon_petrolcan")) || iVar1 == joaat("weapon_rpg")) || iVar1 == joaat("weapon_smokegrenade")) || iVar1 == joaat("weapon_stickybomb")) || iVar1 == joaat("weapon_bzgas")) || iVar1 == joaat("weapon_bottle"))
			{
				iVar1 = Global_14069F;
			}
			unk_0xDBF94F25838DCE55(unk_0xBC25C936A095B5BA(), iVar1, &iVar0);
			if ((func_103(iVar1) && func_102(iVar1)) && unk_0x46C0645571D5BB21(unk_0xBC25C936A095B5BA(), iVar1) < iVar0)
			{
			}
			else if (unk_0x0DE6397A2CB3EF75())
			{
				if (!unk_0xFA30DFD0084E92FE(iLocal_63, 12))
				{
					if (!unk_0xF16DAFF595E80F7C())
					{
						if (Local_60.f_12)
						{
							func_68("BALD_HELP3", -1);
						}
						else
						{
							func_68("AMD_HELP3", -1);
						}
						unk_0xF0059F27F7BB6680(&iLocal_63, 12);
					}
				}
				else if (!unk_0xFA30DFD0084E92FE(iLocal_63, 13))
				{
					if (!unk_0xF16DAFF595E80F7C())
					{
						if (unk_0x8EA6CABD14F1B89A(Local_60.f_4))
						{
							if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), unk_0x370629AFF3A5C45C(Local_60.f_4), 10f, 10f, 10f, 0, 1, 0))
							{
								if (func_95(&uLocal_68, 20000, 0))
								{
									if (!Local_60.f_12)
									{
										func_68("AMD_HELP3", -1);
									}
									unk_0xF0059F27F7BB6680(&iLocal_63, 13);
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_102(int iParam0)//Position - 0x32C5
{
	if ((((((((((iParam0 == joaat("gadget_parachute") || iParam0 == joaat("weapon_knife")) || iParam0 == joaat("weapon_bat")) || iParam0 == joaat("weapon_crowbar")) || iParam0 == joaat("weapon_nightstick")) || iParam0 == joaat("weapon_golfclub")) || iParam0 == joaat("weapon_hammer")) || iParam0 == joaat("weapon_bat")) || iParam0 == joaat("weapon_bottle")) || iParam0 == joaat("weapon_dagger")) || iParam0 == joaat("weapon_hatchet"))
	{
		return 0;
	}
	return 1;
}

int func_103(int iParam0)//Position - 0x3369
{
	if (iParam0 == joaat("weapon_flare"))
	{
		return 0;
	}
	return 1;
}

var func_104(int iParam0)//Position - 0x3380
{
	var uVar0;
	
	unk_0x9CDD10270A1ACF6F(iParam0, &uVar0, 1);
	return uVar0;
}

void func_105()//Position - 0x3394
{
	bool bVar0;
	vector3 vVar1;
	int iVar2;
	
	if (unk_0x8EA6CABD14F1B89A(Local_60.f_4))
	{
		if (unk_0x89B5CBCE9D131B32(Local_60.f_4) || (!unk_0xDD5EE7D9FC37FA16(Local_60.f_4) && unk_0x0DE6397A2CB3EF75()))
		{
			if (unk_0x8EA6CABD14F1B89A(Local_60.f_5))
			{
				if (unk_0x89B5CBCE9D131B32(Local_60.f_5) || (!unk_0xDD5EE7D9FC37FA16(Local_60.f_5) && unk_0x0DE6397A2CB3EF75()))
				{
					if (func_108(Local_60.f_4) && func_108(Local_60.f_5))
					{
						if (!unk_0xFA30DFD0084E92FE(iLocal_63, 8))
						{
							if (unk_0xFA30DFD0084E92FE(iLocal_63, 7))
							{
								if (!unk_0x96044E39418AAF17(unk_0x370629AFF3A5C45C(Local_60.f_5), "P_cargo_chute_S", "P_cargo_chute_S_crumple", 3))
								{
									unk_0xF0059F27F7BB6680(&iLocal_63, 8);
									func_3(&(Local_60.f_5));
									if (Local_60.f_12 == 1)
									{
										func_64(unk_0x370629AFF3A5C45C(Local_60.f_4));
									}
								}
							}
						}
						if (!unk_0xFA30DFD0084E92FE(iLocal_63, 7))
						{
							if (unk_0xFA30DFD0084E92FE(iLocal_63, 6))
							{
								if (unk_0x96044E39418AAF17(unk_0x370629AFF3A5C45C(Local_60.f_5), "P_cargo_chute_S", "P_cargo_chute_S_crumple", 3))
								{
									unk_0xF0059F27F7BB6680(&iLocal_63, 7);
								}
							}
						}
						if (!unk_0xFA30DFD0084E92FE(iLocal_63, 6))
						{
							unk_0xA327E6F3F6D2F4C9(unk_0x370629AFF3A5C45C(Local_60.f_4), 2, 0.0245f);
							if (func_106())
							{
								unk_0x1F000DD52A4C4208(unk_0x370629AFF3A5C45C(Local_60.f_5), "P_cargo_chute_S_crumple", "P_cargo_chute_S", 1000f, 0, 0, 0, 0, 0);
								unk_0xF0059F27F7BB6680(&iLocal_63, 6);
								if (unk_0x2DA8CA50A72528FB(iLocal_64))
								{
									unk_0x7781946F1FC054FA(iLocal_64, 255);
								}
							}
						}
					}
				}
			}
			if (!unk_0xFA30DFD0084E92FE(iLocal_63, 14))
			{
				if (unk_0x8EA6CABD14F1B89A(Local_60.f_13))
				{
					if (unk_0x89B5CBCE9D131B32(Local_60.f_13) || (!unk_0xDD5EE7D9FC37FA16(Local_60.f_13) && unk_0x0DE6397A2CB3EF75()))
					{
						if (func_108(Local_60.f_13))
						{
							unk_0xA327E6F3F6D2F4C9(unk_0x370629AFF3A5C45C(Local_60.f_13), 2, 0.1f);
							if (unk_0xF6231E2AD6680273(unk_0x370629AFF3A5C45C(Local_60.f_13)))
							{
								if (unk_0x8EA6CABD14F1B89A(Local_60.f_4))
								{
									unk_0x17175087F2DB6AC8(unk_0x370629AFF3A5C45C(Local_60.f_4), 1, 1);
									if (Local_60.f_12 == 1)
									{
										func_64(unk_0x370629AFF3A5C45C(Local_60.f_4));
									}
								}
								unk_0xF0059F27F7BB6680(&iLocal_63, 14);
							}
						}
						if (!unk_0xFA30DFD0084E92FE(Local_60.f_1, 8) && unk_0xFA30DFD0084E92FE(iLocal_63, 8))
						{
							if (func_108(Local_60.f_13))
							{
								if (!unk_0xF3160454EE16A1B1(unk_0x370629AFF3A5C45C(Local_60.f_13)) && unk_0xD7B6937E7976D0CB(unk_0x370629AFF3A5C45C(Local_60.f_13)))
								{
									if (unk_0x48EBE45A9A7EB10C(unk_0x370629AFF3A5C45C(Local_60.f_13)))
									{
										bVar0 = true;
									}
									else if (!unk_0x2A348A3A98B80B13(unk_0x370629AFF3A5C45C(Local_60.f_13)) && unk_0xAF1DD0A735416F90(unk_0x370629AFF3A5C45C(Local_60.f_13)))
									{
										bVar0 = true;
									}
									if (bVar0)
									{
										unk_0xE52E8965AAD7623B(unk_0x370629AFF3A5C45C(Local_60.f_13), 0);
										unk_0xF0059F27F7BB6680(&(Local_60.f_1), 8);
									}
									if (Local_60.f_12 == 1)
									{
										func_64(unk_0x370629AFF3A5C45C(Local_60.f_4));
									}
								}
							}
						}
					}
				}
			}
			vVar1 = { unk_0x541C2AEF053615BC(unk_0x370629AFF3A5C45C(Local_60.f_4), 1) };
			if (vVar1.z < -50f && !unk_0x149E9368A11035DE(unk_0x370629AFF3A5C45C(Local_60.f_4)))
			{
				if (func_108(Local_60.f_4))
				{
					unk_0x641B19E156645A92(unk_0x370629AFF3A5C45C(Local_60.f_4), Local_60.f_6, 1, 0, 0, 1);
					if (Local_60.f_12 == 1)
					{
						func_64(unk_0x370629AFF3A5C45C(Local_60.f_4));
					}
				}
			}
			if (unk_0x8EA6CABD14F1B89A(Local_60.f_4))
			{
				if (unk_0x8EA6CABD14F1B89A(Local_60.f_13) && unk_0xE7E55F7532DEE345(unk_0x370629AFF3A5C45C(Local_60.f_4)))
				{
					iVar2 = unk_0x370629AFF3A5C45C(Local_60.f_13);
				}
				else
				{
					iVar2 = unk_0x370629AFF3A5C45C(Local_60.f_4);
				}
			}
			if (unk_0x724D816EA203A79E(iVar2))
			{
				if (!unk_0xFA30DFD0084E92FE(iLocal_63, 16))
				{
					if (unk_0x2C13E57F6AC776F8(iVar2) >= 0.9f)
					{
						if (unk_0xF0213F2BEA692F9E(Local_60.f_10) != -1)
						{
							unk_0x8B34879B92B3B225(unk_0xF0213F2BEA692F9E(Local_60.f_10), "Crate_Underwater", 1f);
						}
						unk_0xF0059F27F7BB6680(&iLocal_63, 16);
					}
				}
				else if (unk_0x2C13E57F6AC776F8(iVar2) < 0.9f)
				{
					if (unk_0xF0213F2BEA692F9E(Local_60.f_10) != -1)
					{
						unk_0x8B34879B92B3B225(unk_0xF0213F2BEA692F9E(Local_60.f_10), "Crate_Underwater", 0f);
					}
					unk_0x7CB6FD92BE491AD9(&iLocal_63, 16);
				}
			}
		}
	}
}

int func_106()//Position - 0x3760
{
	int iVar0;
	
	if (unk_0x8EA6CABD14F1B89A(Local_60.f_13))
	{
		if (!unk_0x2A348A3A98B80B13(unk_0x370629AFF3A5C45C(Local_60.f_13)))
		{
			iVar0 = 1;
		}
		if (unk_0xF6231E2AD6680273(unk_0x370629AFF3A5C45C(Local_60.f_13)))
		{
			iVar0 = 1;
		}
		if (unk_0x149E9368A11035DE(unk_0x370629AFF3A5C45C(Local_60.f_13)))
		{
			iVar0 = 1;
		}
		if (func_107())
		{
			iVar0 = 1;
		}
		if (iVar0 == 1)
		{
			if (func_108(Local_60.f_13))
			{
				unk_0xE52E8965AAD7623B(unk_0x370629AFF3A5C45C(Local_60.f_13), 0);
				return 1;
			}
		}
	}
	return 0;
}

int func_107()//Position - 0x37D7
{
	float fVar0;
	
	fVar0 = unk_0xB68DB207D933AA6C(unk_0x370629AFF3A5C45C(Local_60.f_5));
	if (fVar0 > 10f || fVar0 < -10f)
	{
		return 1;
	}
	fVar0 = unk_0x637D801AD41A6525(unk_0x370629AFF3A5C45C(Local_60.f_5));
	if (fVar0 > 10f || fVar0 < -10f)
	{
		return 1;
	}
	return 0;
}

int func_108(int iParam0)//Position - 0x3836
{
	if (unk_0x7FFE36DB9042AF23(iParam0))
	{
		unk_0xCDF25F6ADC88CCB4(iParam0);
		return unk_0x89B5CBCE9D131B32(iParam0);
	}
	return 0;
}

void func_109()//Position - 0x3858
{
	int iVar0;
	
	iVar0 = unk_0x146F82F73FA40AB0(false, 0);
	if (Local_60.f_D != iVar0)
	{
		if (Local_60.f_D > 0 || !unk_0x7FFE36DB9042AF23(Local_60.f_2))
		{
			if (Local_60.f_D < iVar0 || func_117(Local_60.f_D, 0, 1))
			{
				unk_0xA6E7E0EC9E48D44C(Local_60.f_D);
			}
		}
	}
	iVar0 = unk_0xBC93E1C9C8F877D9(false, 0);
	if (Local_60.f_E != iVar0)
	{
		if (Local_60.f_E > 0 || !unk_0x7FFE36DB9042AF23(Local_60.f_3))
		{
			if (Local_60.f_E < iVar0 || func_116(Local_60.f_E, 0, 1))
			{
				unk_0xD1CF2F876BAD2600(Local_60.f_E);
			}
		}
	}
	iVar0 = unk_0x2B3A16ECF7925A20(false, 0);
	if (Local_60.f_F != iVar0)
	{
		if (Local_60.f_F < iVar0 || func_110(Local_60.f_F, 0, 1))
		{
			unk_0x38A34821FCF0B79E(Local_60.f_F);
		}
	}
}

int func_110(int iParam0, bool bParam1, bool bParam2)//Position - 0x3929
{
	return func_111(2, iParam0, 1, bParam1, bParam2);
}

int func_111(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x393D
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xFA30DFD0084E92FE(Global_14FADF, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_115(iParam0) - func_114(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_114(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_115(iParam0) - func_113(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_114(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_115(iParam0) - func_114(iParam0, 1));
		}
		if (!bParam4 && Global_18402B[unk_0xB5CEFD608600A09F() /*770*/] != 3)
		{
			iVar1 = (iVar1 - func_112(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_112(int iParam0)//Position - 0x3A06
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

int func_113(int iParam0)//Position - 0x3A40
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

int func_114(int iParam0, bool bParam1)//Position - 0x3A86
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

int func_115(int iParam0)//Position - 0x3B23
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

int func_116(int iParam0, bool bParam1, bool bParam2)//Position - 0x3B63
{
	return func_111(0, iParam0, 1, bParam1, bParam2);
}

int func_117(int iParam0, bool bParam1, bool bParam2)//Position - 0x3B77
{
	return func_111(1, iParam0, 1, bParam1, bParam2);
}

void func_118()//Position - 0x3B8B
{
	if (!unk_0xFA30DFD0084E92FE(iLocal_63, 10))
	{
		if (func_32(Local_60.f_2))
		{
			unk_0xC5A6DFE2B8987B17(&uLocal_65);
			unk_0x509F549022512095(0, unk_0x19D7F09C2FABDDA0(Local_60.f_2), Local_60.f_6 + Vector(50f, 0f, 0f), 60f, 0, joaat("cuban800"), 262144, 15f, -1f);
			unk_0x509F549022512095(0, unk_0x19D7F09C2FABDDA0(Local_60.f_2), Local_60.f_9, 60f, 0, joaat("cuban800"), 262144, -1f, -1f);
			unk_0x535008C596714F9E(uLocal_65);
			unk_0xF0059F27F7BB6680(&iLocal_63, 10);
		}
	}
}

int func_119()//Position - 0x3C12
{
	return Local_60;
}

int func_120()//Position - 0x3C1C
{
	int iVar0;
	
	iVar0 = joaat("prop_box_ammo02a");
	if (Local_60.f_12 == 1)
	{
		iVar0 = 1688540826;
	}
	unk_0xF243B7A14FCFD0F4(iVar0);
	unk_0xF243B7A14FCFD0F4(joaat("p_cargo_chute_s"));
	if ((unk_0xD6513D668481290A(iVar0) && unk_0xD6513D668481290A(joaat("p_cargo_chute_s"))) && func_121())
	{
		return 1;
	}
	return 0;
}

int func_121()//Position - 0x3C6E
{
	unk_0x522053D86D6E1C7A("P_cargo_chute_S");
	if (unk_0xF9E082857622D91E("P_cargo_chute_S"))
	{
		return 1;
	}
	return 0;
}

int func_122(int iParam0)//Position - 0x3C8E
{
	return vLocal_62[iParam0 /*3*/];
}

int func_123()//Position - 0x3C9C
{
	var uVar0;
	
	func_130(&uVar0);
	if (Global_14083F == 0)
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			return 1;
		}
	}
	if (func_129())
	{
		return 1;
	}
	if (Global_25891C)
	{
		return 1;
	}
	if (func_128())
	{
		return 1;
	}
	if (func_127(157))
	{
		if (!func_126())
		{
			return 1;
		}
	}
	if (func_127(155))
	{
		return 1;
	}
	if (!unk_0x57D316754A262B34())
	{
		return 1;
	}
	if (func_124() != 0)
	{
		if (unk_0xB731B8C5BCE89836(func_124()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_124()//Position - 0x3D26
{
	switch (func_125())
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

int func_125()//Position - 0x3D5A
{
	return Global_62BD;
}

bool func_126()//Position - 0x3D65
{
	return Global_255A46.f_24A;
}

int func_127(int iParam0)//Position - 0x3D74
{
	if (unk_0xA1AC399BCBEE5B2D(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_128()//Position - 0x3D8B
{
	return Global_258063;
}

bool func_129()//Position - 0x3D97
{
	return Global_255A46.f_245;
}

void func_130(var uParam0)//Position - 0x3DA6
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
					func_131(iVar0);
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

void func_131(int iParam0)//Position - 0x3E19
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x414AA1932D1C88E2(1, iParam0, &vVar0, 3))
	{
		if (func_34(vVar0.y, 1, 1))
		{
			iVar1 = unk_0xA95CF30C72EB526E(vVar0.y);
			if (unk_0x724D816EA203A79E(iVar1))
			{
				if (unk_0x5237AF95232D78C5(iVar1, 0))
				{
					iVar2 = unk_0x9FE9D386222EEE47(iVar1, 0);
					if (unk_0x403C891106DCABAF(iVar2, vVar0.z) && unk_0x32405B7614E36453())
					{
						if (func_132(iVar2, &bVar3))
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

int func_132(int iParam0, var uParam1)//Position - 0x3E9A
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

void func_133()//Position - 0x3EF9
{
	SYSTEM::WAIT(0);
}

void func_134()//Position - 0x3F06
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0x2DA8CA50A72528FB(iLocal_64))
	{
		unk_0x07B8ECB35A4ED3AC(&iLocal_64);
	}
	if (unk_0x0DE6397A2CB3EF75())
	{
		iVar0 = 0;
		while (iVar0 < 250)
		{
			if (iVar1 == 0)
			{
				if (unk_0x8EA6CABD14F1B89A(Local_60.f_13))
				{
					if (unk_0xF6231E2AD6680273(unk_0x370629AFF3A5C45C(Local_60.f_13)))
					{
						if (func_108(Local_60.f_13))
						{
							unk_0xE52E8965AAD7623B(unk_0x370629AFF3A5C45C(Local_60.f_13), 0);
							iVar1 = 1;
						}
					}
					else
					{
						iVar1 = 1;
					}
				}
				else
				{
					iVar1 = 1;
				}
			}
			if (iVar2 == 0)
			{
				if (unk_0x8EA6CABD14F1B89A(Local_60.f_4))
				{
					if (unk_0xE7E55F7532DEE345(unk_0x370629AFF3A5C45C(Local_60.f_4)))
					{
						if (func_108(Local_60.f_4))
						{
							unk_0x17175087F2DB6AC8(unk_0x370629AFF3A5C45C(Local_60.f_4), 1, 1);
							iVar2 = 1;
						}
					}
					else
					{
						iVar2 = 1;
					}
				}
				else
				{
					iVar2 = 1;
				}
			}
			if (iVar3 == 0)
			{
				if (unk_0x8EA6CABD14F1B89A(Local_60.f_5))
				{
					if (func_108(Local_60.f_5))
					{
						func_3(&(Local_60.f_5));
						iVar3 = 1;
					}
				}
				else
				{
					iVar3 = 1;
				}
			}
			if ((iVar2 == 1 && iVar3 == 1) && iVar1 == 1)
			{
				iVar0 = 9999;
			}
			else
			{
				SYSTEM::WAIT(0);
			}
			iVar0++;
		}
		Local_60 = 4;
		func_138(func_139(1, 1), 8, func_88());
	}
	func_137();
	func_63();
	func_136();
	func_135();
}

void func_135()//Position - 0x403C
{
	unk_0x95E4B6F3ED223F5A();
}

void func_136()//Position - 0x4048
{
	if (unk_0xFA30DFD0084E92FE(iLocal_63, 10))
	{
		unk_0x02DAF06EA4F08219(&uLocal_65);
	}
}

void func_137()//Position - 0x4061
{
	if (iLocal_66 != 0)
	{
		if (unk_0x2F1B39E315395385(iLocal_66))
		{
			unk_0x2CA8D9DC16C6AF09(iLocal_66, 0);
			iLocal_66 = 0;
		}
	}
}

void func_138(int iParam0, int iParam1, var uParam2)//Position - 0x4088
{
	struct<4> Var0;
	
	Var0 = 539742369;
	Var0.f_1 = unk_0xB5CEFD608600A09F();
	Var0.f_3 = iParam1;
	Var0.f_2 = uParam2;
	if (!iParam0 == 0)
	{
		unk_0x38E776D9FA75679B(1, &Var0, 6, iParam0);
	}
}

int func_139(int iParam0, bool bParam1)//Position - 0x40C0
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x3171C34AB3FE6F2E(iVar1);
		if (func_34(iVar2, 0, 0))
		{
			if (iVar2 != unk_0xB5CEFD608600A09F() || iParam0)
			{
				if (bParam1)
				{
					unk_0xF0059F27F7BB6680(&uVar0, iVar1);
				}
				else if (!func_79(iVar2, 0))
				{
					unk_0xF0059F27F7BB6680(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_140(struct<21> Param0)//Position - 0x4125
{
	int iVar0;
	
	func_144(func_145(Param0), Param0);
	unk_0xD1CF2F876BAD2600(1);
	unk_0xA6E7E0EC9E48D44C(1);
	unk_0x38A34821FCF0B79E(2);
	func_142(0, -1, 0);
	unk_0x76AE988734CA7760(&Local_60, 23);
	unk_0xE45D6A3FD6454198(&vLocal_62, 97);
	if (!func_141())
	{
		return 0;
	}
	unk_0x6C87EFD58B261C6F(0);
	if (unk_0x0DE6397A2CB3EF75())
	{
		Local_60.f_11 = unk_0xB5CEFD608600A09F();
		Local_60.f_6 = { unk_0xA4455714F3DCE207(unk_0xBC25C936A095B5BA(), 0f, (5f * 1.5f), 0f) };
		Local_60.f_D = 1;
		Local_60.f_E = 1;
		Local_60.f_F = 3;
		Local_60.f_9 = { 0f, 0f, 500f };
		if (Param0.f_14 == 3)
		{
			Local_60.f_12 = 1;
		}
		iVar0 = unk_0x491B2241281A03B7(0, 3);
		if (iVar0 == 1)
		{
			Local_60.f_9 = 9000f;
		}
		else if (iVar0 == 2)
		{
			Local_60.f_9 = -9000f;
		}
		iVar0 = unk_0x491B2241281A03B7(0, 3);
		if (iVar0 == 1)
		{
			Local_60.f_9.f_1 = 9000f;
		}
		else if (iVar0 == 2)
		{
			Local_60.f_9.f_1 = -9000f;
		}
		if (Local_60.f_9 == 0f && Local_60.f_9.f_1 == 0f)
		{
			Local_60.f_9 = { -9000f, 5000f, 500f };
		}
	}
	bLocal_67 = unk_0x2F7EEEA6378AC19B();
	if (unk_0x7AF0088ABFA713B6())
	{
		vLocal_62[unk_0x6BAA0516CC970D99() /*3*/] = 0;
	}
	return 1;
}

int func_141()//Position - 0x425B
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
		if (func_129())
		{
			return 0;
		}
		if (func_127(155))
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

int func_142(int iParam0, int iParam1, bool bParam2)//Position - 0x42B4
{
	int iVar0;
	
	iVar0 = unk_0x4796DAD7A8894E2F();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_135();
			}
			else
			{
				return 0;
			}
		}
		if (!func_143())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x7AF0088ABFA713B6())
				{
					if (!bParam2)
					{
						func_135();
					}
					else
					{
						return 0;
					}
				}
				if (func_129())
				{
					if (!bParam2)
					{
						func_135();
					}
					else
					{
						return 0;
					}
				}
				if (func_127(155))
				{
					if (!bParam2)
					{
						func_135();
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
					func_135();
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
				func_135();
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
			func_135();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_143()//Position - 0x43C9
{
	return Global_14083F;
}

void func_144(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x43D5
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		func_135();
	}
	unk_0xBF463BC3D6FFDE31(iParam0, 0, Param1.f_10);
}

int func_145(int iParam0)//Position - 0x43F4
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

