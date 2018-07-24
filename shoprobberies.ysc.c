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
	bool bLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	vector3 vLocal_49 = { 0f, 0f, 0f };
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	struct<487> Local_66 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1500, 45, 1103626240, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	bool bLocal_86 = 0;
	int iLocal_87 = 0;
	bool bLocal_88 = 0;
	int iLocal_89 = 0;
	char* sLocal_90 = NULL;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	bool bLocal_94 = 0;
	int iLocal_95 = 0;
	struct<33> Local_96 = { 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_97 = 1;
	int iLocal_98[3] = { 0, 0, 0 };
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	int iLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 5;
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
	var uLocal_137 = 5;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	vector3 vVar5;
	vector3 vVar6;
	int iVar7;
	
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
	vLocal_49 = { 500f, 500f, 500f };
	iLocal_107 = 3;
	if (unk_0xE8A79675302ED812(98))
	{
		func_313();
	}
	if (func_310(0))
	{
		bLocal_86 = true;
		iLocal_83 = unk_0x8C6B6C3774164BB5();
	}
	if (Global_3)
	{
		unk_0x7456702622C62EA0(1);
		unk_0x95E4B6F3ED223F5A();
	}
	if (func_309(14))
	{
		unk_0x7456702622C62EA0(1);
		unk_0x95E4B6F3ED223F5A();
	}
	func_308(&Local_96, 3);
	func_299(&uScriptParam_120);
	vVar0 = { 24.088f, -1345.623f, 29.5082f };
	vVar1 = { 24.94562f, -1344.954f, 29.49f };
	vVar2 = { vVar0 - vVar1 };
	vVar2 = { vVar1 - vVar0 };
	fVar4 = 147.297f;
	vVar3 = { -1228.443f, -905.3416f, 13.523f };
	vVar2 = { vVar3 - Vector(12.31f, -907.8234f, -1222.331f) };
	vVar2 = { func_298(vVar2, fVar4) };
	if ((((func_297() && !func_296()) || Global_19ACC) || Global_62BF) || Global_19AF9 != -1)
	{
		if (func_297() && !func_296())
		{
		}
		else if (Global_19ACC)
		{
		}
		else if (Global_62BF)
		{
		}
		else if (Global_19AF9 != -1)
		{
		}
		if (!func_295())
		{
			func_293(&(Local_66.f_1D6), 64);
			func_291(1);
		}
		else
		{
			func_291(0);
		}
		func_313();
	}
	else if (Global_19B04.f_4E26[iLocal_80] > 0)
	{
		if (func_290())
		{
			func_288(iLocal_80, Local_66.f_1E6.f_9.f_2, &vVar5, &vVar6);
			unk_0xA0C0B32E74BE8DB7(Local_66.f_B5, 15f, 0);
			iLocal_79 = unk_0x1DAA351326EA3537(vVar5, vVar6, 0, 1, 1, 1);
			if (!func_295())
			{
				func_291(1);
			}
			else
			{
				func_291(0);
				func_286(&(Local_66.f_1D6), 512);
			}
			iLocal_65 = 2;
		}
		else
		{
			func_291(0);
		}
		if (!func_285())
		{
			iLocal_62 = 10;
			iVar7 = unk_0x491B2241281A03B7(0, 3);
			if (iVar7 == 0)
			{
				Local_66.f_2.f_C = 1;
			}
			else
			{
				Local_66.f_2.f_C = 0;
			}
		}
	}
	else
	{
		func_291(0);
	}
	while (true)
	{
		func_282(&Local_96);
		if (func_277())
		{
			func_313();
		}
		if (!bLocal_86)
		{
			if (func_310(0))
			{
				func_276();
				bLocal_86 = true;
			}
		}
		switch (iLocal_65)
		{
			case 0:
				func_247();
				break;
			
			case 1:
				func_5();
				break;
			
			case 2:
				if (func_295())
				{
					if (!unk_0xF16DAFF595E80F7C())
					{
						if (!func_3("SHOP_CLOSED", func_4(iLocal_80)))
						{
							unk_0x563F749F78AC90A0(0);
							func_2("SHOP_CLOSED", func_4(iLocal_80));
						}
					}
				}
				else
				{
					if (func_3("SHOP_CLOSED", func_4(iLocal_80)))
					{
						unk_0x7456702622C62EA0(1);
					}
					if (func_1(Local_66.f_1D6, 512))
					{
						func_291(1);
						func_293(&(Local_66.f_1D6), 512);
					}
				}
				break;
			
			case 3:
				break;
		}
		SYSTEM::WAIT(0);
	}
}

bool func_1(var uParam0, int iParam1)//Position - 0x35E
{
	return (uParam0 && iParam1) != 0;
}

void func_2(char* sParam0, char* sParam1)//Position - 0x36D
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0xC9C304D0AABE1335(sParam1);
	unk_0x72F8FA06CC9EC899(0, 1, true, -1);
}

int func_3(char* sParam0, char* sParam1)//Position - 0x389
{
	unk_0xF07D20149ECBC61E(sParam0);
	unk_0xC9C304D0AABE1335(sParam1);
	return unk_0xA66DBDA0A072514A(0);
}

char* func_4(int iParam0)//Position - 0x3A2
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return "SHR_GAS";
		
		case 5:
			return "SHR_LIQ1";
		
		case 6:
		case 7:
		case 8:
		case 9:
			return "SHR_LIQ2";
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			return "SHR_CONV";
		
		case -2:
			return "SHR_ACE";
		
		default:
	}
	return "";
}

void func_5()//Position - 0x44A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	func_244();
	func_241();
	func_236();
	func_230();
	func_212();
	func_190();
	func_184();
	func_66();
	func_65();
	func_64();
	func_54();
	func_53();
	func_50();
	if (!func_49())
	{
		func_36();
		func_26();
	}
	if (unk_0x724D816EA203A79E(Local_66))
	{
		unk_0x9CDD10270A1ACF6F(Local_66, &iVar0, 1);
	}
	else
	{
		return;
	}
	bLocal_88 = false;
	if (!unk_0x36CEFBE9B745A58D(Local_66.f_2) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &iVar1, 1))
		{
			if ((iVar1 != joaat("weapon_unarmed") && iVar1 != joaat("object")) && iVar1 != joaat("weapon_flare"))
			{
				if ((((unk_0xC2D39D2C720A03B0(unk_0xB5CEFD608600A09F()) && unk_0xC5B8A5F778E321DD(unk_0xBC25C936A095B5BA(), Local_66.f_2, 45f)) && unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), Local_66.f_2, 5f, 5f, 2f, 0, 1, 0)) || unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), Local_66.f_2)) || unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), Local_66.f_2))
				{
					if (!func_25() && !unk_0xADF4D6B0407B3CC1())
					{
						bLocal_88 = true;
					}
				}
			}
		}
	}
	if (bLocal_88)
	{
		if (!iLocal_89 && func_1(Local_66.f_1D6, 4))
		{
			iVar2 = func_24(unk_0xBC25C936A095B5BA());
			iVar3 = unk_0x1966F403E5C2133D(iVar2);
			if (iVar3 == 416676503)
			{
				sLocal_90 = "hold_up_head_additive_pistol";
				unk_0xE896C0AD02364F2A(unk_0xBC25C936A095B5BA(), "mp_am_hold_up", sLocal_90, 8f, -8f, -1, 305, 0, 0, 0, 0);
			}
			else if ((((iVar3 == 1159398588 || iVar3 == 970310034) || iVar3 == 860033945) || iVar3 == -1212426201) || iVar3 == -957766203)
			{
				sLocal_90 = "hold_up_head_additive_rifle";
				unk_0xE896C0AD02364F2A(unk_0xBC25C936A095B5BA(), "mp_am_hold_up", sLocal_90, 8f, -8f, -1, 305, 0, 0, 0, 0);
			}
			else
			{
				sLocal_90 = "";
			}
			iLocal_89 = 1;
		}
	}
	else if (iLocal_89)
	{
		if (!unk_0xF1734B55490E9045(sLocal_90))
		{
			if (unk_0x96044E39418AAF17(unk_0xBC25C936A095B5BA(), "mp_am_hold_up", sLocal_90, 3))
			{
				unk_0x08FA5F7132D73F6F(unk_0xBC25C936A095B5BA(), "mp_am_hold_up", sLocal_90, -1056964608);
			}
		}
		iLocal_89 = 0;
	}
	switch (iLocal_62)
	{
		case 0:
			if (func_295())
			{
				if (unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
				{
					iLocal_62 = 12;
				}
				else
				{
					iLocal_50 = 2;
					iLocal_57 = 1;
					if (!unk_0x1D403DFADBC2DE3C(Local_66, 0))
					{
						if (!unk_0x5237AF95232D78C5(Local_66, 0))
						{
							if ((func_24(Local_66) == joaat("weapon_unarmed") || func_24(Local_66) == joaat("object")) || func_24(Local_66) == joaat("weapon_briefcase"))
							{
								iLocal_60 = 1;
								iLocal_62 = 1;
							}
							else if (!func_1(Local_66.f_1D6, 1))
							{
								if (iVar0 == joaat("weapon_bat"))
								{
									iLocal_60 = 2;
									iLocal_62 = 5;
								}
								else if ((iVar0 == joaat("weapon_crowbar") || iVar0 == joaat("weapon_hammer")) || iVar0 == joaat("weapon_bottle"))
								{
									iLocal_60 = 3;
									iLocal_62 = 5;
								}
								else if (iVar0 == joaat("weapon_stickybomb"))
								{
									iLocal_60 = 4;
									iLocal_62 = 5;
								}
								else
								{
									iLocal_62 = 2;
								}
								func_286(&(Local_66.f_1D6), 1);
							}
						}
						else
						{
							iLocal_62 = 3;
						}
					}
				}
			}
			else if (func_23())
			{
				iLocal_50 = 2;
				iLocal_62 = 3;
			}
			else if (!func_295() && func_20(Local_66, Local_66.f_2, &(Local_66.f_1C3), 1))
			{
				iLocal_62 = 12;
			}
			break;
		
		case 1:
			if (!func_1(Local_66.f_1D6, 2))
			{
				iLocal_51 = 1;
				iLocal_56 = 1;
				func_286(&(Local_66.f_1D6), 2);
			}
			iLocal_62 = 5;
			break;
		
		case 2:
			iLocal_51 = 5;
			iLocal_56 = 3;
			iLocal_62 = 5;
			break;
		
		case 3:
			iLocal_51 = 6;
			iLocal_56 = 4;
			iLocal_62 = 5;
			break;
		
		case 5:
			if (!func_295() && !func_1(Local_66.f_1D6, 1))
			{
				iLocal_62 = 0;
			}
			break;
		
		case 6:
			if (iLocal_51 >= 13)
			{
				if (Local_66.f_2.f_C)
				{
					if (!func_19())
					{
						iLocal_62 = 7;
					}
				}
				else
				{
					iLocal_62 = 8;
				}
				iLocal_52 = 1;
			}
			break;
		
		case 7:
			if (func_1(Local_66.f_1D6, 256))
			{
				func_18();
				unk_0x7CB6FD92BE491AD9(&Global_15B77, 3);
				iLocal_62 = 13;
			}
			break;
		
		case 8:
			if (func_1(Local_66.f_1D6, 16))
			{
				if (func_16())
				{
					if (!unk_0x1D403DFADBC2DE3C(Local_66.f_2, 0))
					{
						if (!unk_0x2CDE18D6C89522AD(Local_66.f_2))
						{
							if (func_295())
							{
								if (Local_66.f_1E6 >= 0)
								{
									if (unk_0x77FC50899603581D(Local_66.f_1E6))
									{
										unk_0xE896C0AD02364F2A(Local_66.f_2, Local_66.f_1E6.f_1, "handsup_base", 4f, -8f, -1, 1, 0, 0, 0, 0);
										iLocal_58 = 10;
									}
								}
							}
							else
							{
								unk_0x5558ED6D4A2DEC93(Local_66.f_2, unk_0xBC25C936A095B5BA(), 100f, -1, 0, 0);
								iLocal_58 = 10;
							}
						}
					}
					unk_0x7CB6FD92BE491AD9(&Global_15B77, 3);
					iLocal_62 = 13;
				}
			}
			break;
		
		case 9:
			func_15(2, 0);
			iLocal_59 = 7;
			if (iLocal_63 == 1)
			{
				iLocal_62 = 8;
			}
			else
			{
				iLocal_62 = 13;
			}
			break;
		
		case 10:
			if (func_295())
			{
				iLocal_62 = 11;
			}
			break;
		
		case 11:
			if (!func_14(&(Local_66.f_1DD)))
			{
				if (!Local_66.f_2.f_C)
				{
					iLocal_51 = 28;
				}
				else
				{
					iLocal_51 = 29;
				}
				func_11(&(Local_66.f_1DD));
			}
			else if (func_8(&(Local_66.f_1DD)) > 5f)
			{
				func_15(1, 0);
				iLocal_62 = 13;
			}
			else if (func_8(&(Local_66.f_1DD)) > 1.5f)
			{
				if (!func_19())
				{
					if (iLocal_58 != 12)
					{
						iLocal_58 = 12;
						if (!Local_66.f_2.f_C)
						{
							func_7();
						}
						else
						{
							func_18();
						}
					}
				}
			}
			break;
		
		case 12:
			if (!func_14(&(Local_66.f_1DD)))
			{
				func_6();
				iLocal_51 = 30;
				iLocal_58 = 12;
				func_11(&(Local_66.f_1DD));
			}
			else if (func_8(&(Local_66.f_1DD)) > 3f)
			{
				iLocal_62 = 13;
			}
			break;
		
		case 13:
			break;
	}
}

void func_6()//Position - 0xA25
{
	int iVar0;
	
	if (unk_0x1D403DFADBC2DE3C(Local_66.f_2, 0))
	{
		return;
	}
	unk_0xC5A6DFE2B8987B17(&iVar0);
	unk_0x346129B364057FF6(0, Local_66.f_2.f_6, 2f, -1, 0.25f, 0, Local_66.f_2.f_9);
	unk_0xEE7131C3C73E7282(0, -1);
	unk_0x535008C596714F9E(iVar0);
	unk_0xA8E6405305C0D7DF(Local_66.f_2, iVar0);
	unk_0x02DAF06EA4F08219(&iVar0);
	func_286(&(Local_66.f_1D6), 128);
}

void func_7()//Position - 0xA84
{
	if (!unk_0x1D403DFADBC2DE3C(Local_66.f_2, 0))
	{
		unk_0x02DAF06EA4F08219(&iLocal_78);
		unk_0xC5A6DFE2B8987B17(&iLocal_78);
		unk_0xEE7131C3C73E7282(0, 5000);
		unk_0x5558ED6D4A2DEC93(0, unk_0xBC25C936A095B5BA(), 100f, -1, 0, 0);
		unk_0x535008C596714F9E(iLocal_78);
		unk_0xA8E6405305C0D7DF(Local_66.f_2, iLocal_78);
	}
}

float func_8(int iParam0)//Position - 0xAD2
{
	if (func_14(iParam0))
	{
		if (func_10(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_9(unk_0xFA30DFD0084E92FE(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_9(bool bParam0)//Position - 0xB11
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

bool func_10(int iParam0)//Position - 0xB69
{
	return unk_0xFA30DFD0084E92FE(*iParam0, 2);
}

void func_11(int iParam0)//Position - 0xB79
{
	if (!func_14(iParam0))
	{
		func_12(iParam0);
	}
}

void func_12(int iParam0)//Position - 0xB91
{
	func_13(iParam0, 0f);
}

void func_13(int iParam0, float fParam1)//Position - 0xBA0
{
	iParam0->f_1 = (func_9(unk_0xFA30DFD0084E92FE(*iParam0, 4)) - fParam1);
	unk_0xF0059F27F7BB6680(iParam0, 1);
	unk_0x7CB6FD92BE491AD9(iParam0, 2);
	iParam0->f_2 = 0f;
}

bool func_14(int iParam0)//Position - 0xBCE
{
	return unk_0xFA30DFD0084E92FE(*iParam0, 1);
}

void func_15(int iParam0, bool bParam1)//Position - 0xBDE
{
	if (unk_0x904E94842BB9E173(unk_0xFC1CAE18F3ECBF2D()) < iParam0 && (!bLocal_86 || (bLocal_86 && iParam0 < iLocal_83)))
	{
		unk_0x7024F5748BAC99FC(unk_0xFC1CAE18F3ECBF2D(), iParam0, 0);
		unk_0xCE6A8FE7DACF8BD4(unk_0xFC1CAE18F3ECBF2D(), 0);
		Local_66.f_9E = 1;
		if (bParam1)
		{
			unk_0xAEC867D0DBB7AFEB(iParam0);
		}
		else
		{
			unk_0xAEC867D0DBB7AFEB(5);
		}
	}
	else if (bLocal_86 && iParam0 > iLocal_83)
	{
	}
}

int func_16()//Position - 0xC51
{
	func_17();
	switch (iLocal_54)
	{
		case 0:
			Local_66.f_1E6 = unk_0xD0D858E538FD01C3(Local_66.f_1E6.f_6, Local_66.f_1E6.f_9, 2);
			if (!unk_0x610A1308608A0F91(Local_66.f_2, 1))
			{
				if (!unk_0x1D403DFADBC2DE3C(Local_66.f_1C, 0))
				{
					if (Local_66.f_1E6 >= 0)
					{
						unk_0xD434A01DEA38A939(Local_66.f_1C, true, 0);
						unk_0x73FD5B32F266E65D(Local_66.f_1C, 1);
						unk_0xB62398E536F695FC(Local_66.f_2, Local_66.f_1E6, Local_66.f_1E6.f_1, Local_66.f_1E6.f_3, 8f, -1.5f, 25, 0, 1148846080, 0);
						unk_0xBEBE356CCD6268A1(Local_66.f_1C, Local_66.f_1E6, Local_66.f_1E6.f_4, Local_66.f_1E6.f_1, 1000f, 8f, 137, 1148846080);
						unk_0xBEBE356CCD6268A1(Local_66.f_60.f_1, Local_66.f_1E6, Local_66.f_1E6.f_5, Local_66.f_1E6.f_1, 1000f, 8f, 137, 1148846080);
					}
					else
					{
						return 1;
					}
					iLocal_55 = 1;
					iLocal_58 = 5;
					iLocal_54 = 2;
				}
				else
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
			break;
		
		case 1:
			if (Local_66.f_1E6 >= 0)
			{
				if (unk_0x77FC50899603581D(Local_66.f_1E6))
				{
					if (unk_0x8FD30584EB38411B(Local_66.f_1E6) > 0.478f)
					{
						if (!unk_0x1D403DFADBC2DE3C(Local_66.f_1C, 0))
						{
							unk_0xBEBE356CCD6268A1(Local_66.f_1C, Local_66.f_1E6, Local_66.f_1E6.f_4, Local_66.f_1E6.f_1, 1000f, 8f, 137, 1148846080);
							Local_66.f_1C.f_7 = { Local_66.f_1C.f_7, Local_66.f_1C.f_7.f_1, (Local_66.f_1C.f_7.f_2 + 0.2f) };
						}
						iLocal_54 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (Local_66.f_1E6 >= 0)
			{
				if (unk_0x77FC50899603581D(Local_66.f_1E6))
				{
					if (unk_0x8FD30584EB38411B(Local_66.f_1E6) > 0.447f)
					{
						if (!unk_0x1D403DFADBC2DE3C(Local_66.f_1C, 0))
						{
							if (!unk_0x8F6EAC9E7D6812D5(Local_66.f_1C))
							{
								unk_0xDC078F87049ECECE(Local_66.f_1C, true, 0);
							}
						}
					}
					if (Local_66.f_1D3)
					{
						if (unk_0xA8ED09411890AFB7(Local_66.f_1E6) != 1.45f)
						{
							unk_0x0528941193DBFFA9(Local_66.f_1E6, 1.45f);
						}
					}
					if (unk_0x8FD30584EB38411B(Local_66.f_1E6) > 0.894f)
					{
						iLocal_54 = 3;
					}
				}
			}
			break;
		
		case 4:
			if (!unk_0x1D403DFADBC2DE3C(Local_66.f_1C, 0))
			{
				if (Local_66.f_1E6 >= 0)
				{
					if (unk_0x77FC50899603581D(Local_66.f_1E6))
					{
						if (iLocal_53 >= 4)
						{
							if (unk_0x8FD30584EB38411B(Local_66.f_1E6) < 0.871f)
							{
								iLocal_55 = 4;
							}
							unk_0x6C3BE67B02D72CDC(Local_66.f_1C, -16f, 1);
							unk_0x46913653D1C7E82E(Local_66.f_1C);
						}
					}
				}
			}
			iLocal_54 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_17()//Position - 0xEF6
{
	if (Local_66.f_1E6 >= 0)
	{
		if (unk_0x77FC50899603581D(Local_66.f_1E6))
		{
			if (unk_0x8FD30584EB38411B(Local_66.f_1E6) >= 0f)
			{
				if (unk_0x8FD30584EB38411B(Local_66.f_1E6) < 0.117f)
				{
					iLocal_53 = 1;
				}
				else if (unk_0x8FD30584EB38411B(Local_66.f_1E6) < 0.154f)
				{
					iLocal_53 = 2;
				}
				else if (unk_0x8FD30584EB38411B(Local_66.f_1E6) < 0.477f)
				{
					iLocal_53 = 3;
				}
				else if (unk_0x8FD30584EB38411B(Local_66.f_1E6) < 0.487f)
				{
					iLocal_53 = 4;
				}
				else if (unk_0x8FD30584EB38411B(Local_66.f_1E6) < 0.809f)
				{
					iLocal_53 = 5;
				}
				else if (unk_0x8FD30584EB38411B(Local_66.f_1E6) < 0.871f)
				{
					iLocal_53 = 6;
				}
				else if (unk_0x8FD30584EB38411B(Local_66.f_1E6) < 0.894f)
				{
					iLocal_53 = 7;
				}
				else if (unk_0x8FD30584EB38411B(Local_66.f_1E6) < 0.999f)
				{
					iLocal_53 = 8;
				}
				else if (iLocal_53 == 9)
				{
				}
			}
			else
			{
				iLocal_53 = 0;
			}
		}
		else if (iLocal_53 == 0)
		{
		}
	}
	else
	{
		iLocal_53 = 0;
	}
}

void func_18()//Position - 0xFFE
{
	if (!unk_0x1D403DFADBC2DE3C(Local_66.f_2, 0))
	{
		unk_0x7A535CE1F001F3FE(Local_66.f_2, joaat("weapon_pumpshotgun"), 12, false, true);
		unk_0x8E25082A46F87892(Local_66.f_2, joaat("weapon_pumpshotgun"), false);
		unk_0x4106FAF8AA1D69D5(Local_66.f_2, -2065892691);
		unk_0xC5A6DFE2B8987B17(&(Local_66.f_2.f_16));
		unk_0x57D65255D3D3B6A7(0, Local_66, 2000, 0);
		unk_0x3D3F19B39A42CF7A(0, Local_66, 4000, -957453492);
		unk_0xB90F3BE2A1EF63DB(0, 25f, 0);
		unk_0x535008C596714F9E(Local_66.f_2.f_16);
		unk_0xA8E6405305C0D7DF(Local_66.f_2, Local_66.f_2.f_16);
	}
}

int func_19()//Position - 0x1086
{
	if (Global_3DB8 != 0 || unk_0xE6711F601F11B66B())
	{
		return 1;
	}
	return 0;
}

int func_20(int iParam0, int iParam1, var uParam2, bool bParam3)//Position - 0x10A8
{
	vector3 vVar0;
	int iVar1;
	
	iVar1 = 0;
	if (!unk_0x1D403DFADBC2DE3C(iParam1, 0))
	{
		vVar0 = { unk_0x541C2AEF053615BC(iParam1, true) };
	}
	if (unk_0x04880508C862E589(vVar0, 4f, 1))
	{
		return 1;
	}
	if (unk_0xB7CB92A84A7518CD(vVar0, SYSTEM::TO_FLOAT(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0x72C9157015C2151B(iParam0, 2))
	{
		if (unk_0x32E373675659FDB0(iParam0))
		{
			if (unk_0x4DBCE270B354E123(iParam1, unk_0x541C2AEF053615BC(iParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
			{
				if (unk_0xC5B8A5F778E321DD(unk_0x399F7937FFE4DEBF(iParam1), iParam0, 120f) && unk_0x4833C1F1F1364989(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0x5237AF95232D78C5(unk_0x399F7937FFE4DEBF(iParam1), 0))
			{
				iVar1 = unk_0x9FE9D386222EEE47(unk_0x399F7937FFE4DEBF(iParam1), 0);
			}
			if (unk_0x042228744678C7D4(iParam0) || func_21(iVar1))
			{
				if (unk_0x4DBCE270B354E123(iParam1, unk_0x541C2AEF053615BC(iParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
				{
					if (unk_0xC5B8A5F778E321DD(unk_0x399F7937FFE4DEBF(iParam1), iParam0, 120f) && unk_0x4833C1F1F1364989(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0x876474582C5DECDE((vVar0.x - IntToFloat(uParam2->f_6)), (vVar0.y - IntToFloat(uParam2->f_6)), (vVar0.z - IntToFloat(uParam2->f_6)), (vVar0.x + IntToFloat(uParam2->f_6)), (vVar0.y + IntToFloat(uParam2->f_6)), (vVar0.z + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_21(int iParam0)//Position - 0x1221
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (unk_0xE59B7F5A03335350(iParam0, 0))
		{
			if (unk_0x3187EF5798B5D209(iParam0, -1, 0) != 0)
			{
				if (unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_22(unk_0xBC25C936A095B5BA(), iParam0, 1) < 40f)
						{
							if (unk_0x1CD240A97A49C198(unk_0xB5CEFD608600A09F(), &iVar1))
							{
								if ((unk_0xD27AC0E9B78CFDD7(iVar1) && unk_0x233ED4CD1F1A42C1(iVar1) == iParam0) || (unk_0x386592AF38881675(iVar1) && unk_0x399F7937FFE4DEBF(iVar1) == unk_0x3187EF5798B5D209(iParam0, -1, 0)))
								{
									if ((unk_0x7214F4879DF8A314(unk_0xBC25C936A095B5BA()) && unk_0x8FCEEB789599BD9B(0, 24)) || (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) && unk_0x8FCEEB789599BD9B(0, 69)))
									{
										return 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

float func_22(int iParam0, int iParam1, bool bParam2)//Position - 0x12EF
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		vVar0 = { unk_0x541C2AEF053615BC(iParam0, true) };
	}
	else
	{
		vVar0 = { unk_0x541C2AEF053615BC(iParam0, false) };
	}
	if (!unk_0x1D403DFADBC2DE3C(iParam1, 0))
	{
		vVar1 = { unk_0x541C2AEF053615BC(iParam1, true) };
	}
	else
	{
		vVar1 = { unk_0x541C2AEF053615BC(iParam1, false) };
	}
	return unk_0xF0F2FC9DE291567F(vVar0, vVar1, bParam2);
}

int func_23()//Position - 0x134D
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (!unk_0x1D403DFADBC2DE3C(Local_66, 0))
	{
		if (unk_0x5237AF95232D78C5(Local_66, 0))
		{
			iVar1 = unk_0x9FE9D386222EEE47(Local_66, 0);
			bVar0 = true;
		}
		else if (!unk_0x1D403DFADBC2DE3C(unk_0x3E12B546F3F2597A(), 0))
		{
			iVar1 = unk_0x3E12B546F3F2597A();
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (!unk_0x1D403DFADBC2DE3C(iVar1, 0))
		{
			if (unk_0x0C265B3C448E6954(iVar1, Local_66.f_BA, Local_66.f_BD, Local_66.f_C0, 0, true, 0))
			{
				return 1;
			}
			else if (unk_0x0C265B3C448E6954(iVar1, Local_66.f_C8, Local_66.f_CB, Local_66.f_CE, 0, true, 0))
			{
				return 1;
			}
			else if (unk_0x0C265B3C448E6954(iVar1, Local_66.f_CF, Local_66.f_D2, Local_66.f_D5, 0, true, 0))
			{
				return 1;
			}
			else if (Local_66.f_C7 != -1f)
			{
				if (unk_0x0C265B3C448E6954(iVar1, Local_66.f_C1, Local_66.f_C4, Local_66.f_C7, 0, true, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_24(int iParam0)//Position - 0x1435
{
	var uVar0;
	
	unk_0x9CDD10270A1ACF6F(iParam0, &uVar0, 1);
	return uVar0;
}

int func_25()//Position - 0x1449
{
	if (unk_0xB731B8C5BCE89836(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_26()//Position - 0x1466
{
	switch (iLocal_50)
	{
		case 0:
			break;
		
		case 2:
			if (!func_49())
			{
				if (func_295())
				{
					if (!func_1(Global_19B04.f_4E26.f_14, 1))
					{
						switch (func_35("SHR_HOLDUP_1"))
						{
							case 2:
								func_33("SHR_HOLDUP_1", 2, 0, -1, 10000, 7, 0, 0, 0);
								break;
							
							case 1:
								func_286(&(Global_19B04.f_4E26.f_14), 1);
								iLocal_50 = 1;
								break;
						}
						if (iLocal_63 > 0)
						{
							if (func_32("SHR_HOLDUP_1"))
							{
								func_28("SHR_HOLDUP_1", 1);
								iLocal_50 = 4;
							}
						}
						if ((unk_0x105601648511CC64() % 1000) < 50)
						{
						}
					}
					else
					{
						iLocal_50 = 1;
					}
				}
				else if (func_32("SHR_HOLDUP_1"))
				{
					func_28("SHR_HOLDUP_1", 1);
				}
			}
			break;
		
		case 1:
			if (!func_49())
			{
				if (func_295())
				{
					if (!func_1(Global_19B04.f_4E26.f_14, 2))
					{
						switch (func_35("SHR_SNK_TUT"))
						{
							case 2:
								func_33("SHR_SNK_TUT", 2, 0, -1, 10000, 7, 0, 0, 0);
								break;
							
							case 1:
								func_286(&(Global_19B04.f_4E26.f_14), 2);
								iLocal_50 = 4;
								break;
						}
					}
					else
					{
						iLocal_50 = 4;
					}
				}
				else if (func_32("SHR_SNK_TUT"))
				{
					func_28("SHR_SNK_TUT", 1);
				}
			}
			break;
		
		case 3:
			if (func_27("SHR_HOLDUP_1") || func_27("SHR_SNK_TUT"))
			{
				unk_0x7456702622C62EA0(1);
			}
			if (func_32("SHR_SNK_TUT") && !func_1(Global_19B04.f_4E26.f_14, 2))
			{
				func_28("SHR_SNK_TUT", 1);
			}
			if (func_32("SHR_HOLDUP_1") && !func_1(Global_19B04.f_4E26.f_14, 1))
			{
				func_28("SHR_HOLDUP_1", 1);
			}
			iLocal_50 = 4;
			break;
		
		case 4:
			if ((!func_295() && func_32("SHR_HOLDUP_1")) && !func_1(Global_19B04.f_4E26.f_14, 1))
			{
				func_28("SHR_HOLDUP_1", 1);
				iLocal_50 = 2;
			}
			if ((!func_295() && func_32("SHR_SNK_TUT")) && !func_1(Global_19B04.f_4E26.f_14, 2))
			{
				func_28("SHR_SNK_TUT", 1);
				iLocal_50 = 2;
			}
			break;
	}
}

int func_27(char* sParam0)//Position - 0x1693
{
	unk_0xF07D20149ECBC61E(sParam0);
	return unk_0xA66DBDA0A072514A(0);
}

void func_28(char* sParam0, int iParam1)//Position - 0x16A6
{
	int iVar0;
	int iVar1;
	
	if (Global_195B4 && iParam1)
	{
		if (func_27(sParam0) && !unk_0x5ECDC4E2F3BFF708())
		{
			unk_0x7456702622C62EA0(0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_19B04.f_4F9D.f_91)
	{
		if (unk_0x3362CDE8460ED38B(sParam0, &(Global_19B04.f_4F9D[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_19B04.f_4F9D.f_91 - 2))
			{
				func_31(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_30((Global_19B04.f_4F9D.f_91 - 1));
			Global_19B04.f_4F9D.f_91 = (Global_19B04.f_4F9D.f_91 - 1);
			func_29();
			return;
		}
		iVar0++;
	}
}

void func_29()//Position - 0x1753
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_19B04.f_4F9D.f_92[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_19B04.f_4F9D.f_91)
	{
		if (unk_0xFA30DFD0084E92FE(Global_19B04.f_4F9D[iVar0 /*16*/].f_B, 0))
		{
			if (Global_19B04.f_4F9D[iVar0 /*16*/].f_C > Global_19B04.f_4F9D.f_92[0])
			{
				Global_19B04.f_4F9D.f_92[0] = Global_19B04.f_4F9D[iVar0 /*16*/].f_C;
			}
		}
		if (unk_0xFA30DFD0084E92FE(Global_19B04.f_4F9D[iVar0 /*16*/].f_B, 1))
		{
			if (Global_19B04.f_4F9D[iVar0 /*16*/].f_C > Global_19B04.f_4F9D.f_92[1])
			{
				Global_19B04.f_4F9D.f_92[1] = Global_19B04.f_4F9D[iVar0 /*16*/].f_C;
			}
		}
		if (unk_0xFA30DFD0084E92FE(Global_19B04.f_4F9D[iVar0 /*16*/].f_B, 2))
		{
			if (Global_19B04.f_4F9D[iVar0 /*16*/].f_C > Global_19B04.f_4F9D.f_92[2])
			{
				Global_19B04.f_4F9D.f_92[2] = Global_19B04.f_4F9D[iVar0 /*16*/].f_C;
			}
		}
		iVar0++;
	}
}

void func_30(int iParam0)//Position - 0x1873
{
	StringCopy(&(Global_19B04.f_4F9D[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_19B04.f_4F9D[iParam0 /*16*/].f_4), "", 16);
	Global_19B04.f_4F9D[iParam0 /*16*/].f_8 = 0;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_9 = 0;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_B = 0;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_A = -1;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_C = 0;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_D = 0;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_E = 0;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_F = 0;
}

void func_31(int iParam0, int iParam1)//Position - 0x190D
{
	Global_19B04.f_4F9D[iParam0 /*16*/] = { Global_19B04.f_4F9D[iParam1 /*16*/] };
	Global_19B04.f_4F9D[iParam0 /*16*/].f_4 = { Global_19B04.f_4F9D[iParam1 /*16*/].f_4 };
	Global_19B04.f_4F9D[iParam0 /*16*/].f_8 = Global_19B04.f_4F9D[iParam1 /*16*/].f_8;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_A = Global_19B04.f_4F9D[iParam1 /*16*/].f_A;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_9 = Global_19B04.f_4F9D[iParam1 /*16*/].f_9;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_B = Global_19B04.f_4F9D[iParam1 /*16*/].f_B;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_C = Global_19B04.f_4F9D[iParam1 /*16*/].f_C;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_D = Global_19B04.f_4F9D[iParam1 /*16*/].f_D;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_E = Global_19B04.f_4F9D[iParam1 /*16*/].f_E;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_F = Global_19B04.f_4F9D[iParam1 /*16*/].f_F;
}

int func_32(char* sParam0)//Position - 0x1A1D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_19B04.f_4F9D.f_91)
	{
		if (unk_0x3362CDE8460ED38B(sParam0, &(Global_19B04.f_4F9D[iVar0 /*16*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_33(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x1A58
{
	func_34(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_34(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x1A79
{
	int iVar0;
	
	if (unk_0x3362CDE8460ED38B(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_19B04.f_4F9D.f_91)
	{
		if (unk_0x3362CDE8460ED38B(&(Global_19B04.f_4F9D[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_19B04.f_4F9D.f_91 < 9)
	{
		StringCopy(&(Global_19B04.f_4F9D[Global_19B04.f_4F9D.f_91 /*16*/]), sParam0, 16);
		StringCopy(&(Global_19B04.f_4F9D[Global_19B04.f_4F9D.f_91 /*16*/].f_4), sParam1, 16);
		Global_19B04.f_4F9D[Global_19B04.f_4F9D.f_91 /*16*/].f_8 = (unk_0x105601648511CC64() + iParam3);
		Global_19B04.f_4F9D[Global_19B04.f_4F9D.f_91 /*16*/].f_9 = iParam5;
		Global_19B04.f_4F9D[Global_19B04.f_4F9D.f_91 /*16*/].f_B = iParam6;
		Global_19B04.f_4F9D[Global_19B04.f_4F9D.f_91 /*16*/].f_C = uParam2;
		Global_19B04.f_4F9D[Global_19B04.f_4F9D.f_91 /*16*/].f_D = iParam7;
		Global_19B04.f_4F9D[Global_19B04.f_4F9D.f_91 /*16*/].f_E = iParam8;
		Global_19B04.f_4F9D[Global_19B04.f_4F9D.f_91 /*16*/].f_F = uParam9;
		if (iParam4 != -1)
		{
			Global_19B04.f_4F9D[Global_19B04.f_4F9D.f_91 /*16*/].f_A = ((unk_0x105601648511CC64() + iParam3) + iParam4);
		}
		else
		{
			Global_19B04.f_4F9D[Global_19B04.f_4F9D.f_91 /*16*/].f_A = -1;
		}
		Global_19B04.f_4F9D.f_91++;
		func_29();
	}
}

int func_35(char* sParam0)//Position - 0x1C4C
{
	if (unk_0x3362CDE8460ED38B(sParam0, &Global_195B7))
	{
		return 1;
	}
	if (func_32(sParam0))
	{
		return 0;
	}
	return 2;
}

void func_36()//Position - 0x1C73
{
	if (func_295())
	{
		if (!unk_0x1D403DFADBC2DE3C(Local_66, 0))
		{
		}
	}
	if (!unk_0x1D403DFADBC2DE3C(Local_66.f_2, 0))
	{
	}
	switch (iLocal_51)
	{
		case 1:
			if (!unk_0x1D403DFADBC2DE3C(Local_66.f_2, 0))
			{
				func_47(Local_66.f_2, "SHOP_GREET", 3);
			}
			iLocal_51 = 14;
			break;
		
		case 2:
			if (!unk_0x1D403DFADBC2DE3C(Local_66.f_2, 0))
			{
				func_47(Local_66.f_2, func_45(bLocal_94, "SHOP_THREATENED", func_45(func_46(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_51 = 14;
			break;
		
		case 3:
			if (!unk_0x1D403DFADBC2DE3C(Local_66.f_2, 0))
			{
				func_47(Local_66.f_2, func_45(bLocal_94, "SHOP_THREATENED", func_45(func_46(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_51 = 14;
			break;
		
		case 4:
			if (!unk_0x1D403DFADBC2DE3C(Local_66.f_2, 0))
			{
				func_47(Local_66.f_2, func_45(bLocal_94, "SHOP_THREATENED", func_45(func_46(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_51 = 14;
			break;
		
		case 5:
			if (!unk_0x1D403DFADBC2DE3C(Local_66.f_2, 0))
			{
				func_47(Local_66.f_2, func_45(bLocal_94, "SHOP_THREATENED", func_45(func_46(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_51 = 14;
			break;
		
		case 6:
			if (!unk_0x1D403DFADBC2DE3C(Local_66.f_2, 0))
			{
				func_47(Local_66.f_2, func_45(bLocal_94, "SHOP_THREATENED", func_45(func_46(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_51 = 14;
			break;
		
		case 15:
			if (!unk_0x1D403DFADBC2DE3C(Local_66.f_2, 0))
			{
				func_47(Local_66.f_2, "SHOP_STUBBORN", 3);
			}
			iLocal_51 = 14;
			break;
		
		case 7:
			if (!unk_0x1D403DFADBC2DE3C(Local_66.f_2, 0))
			{
				func_47(Local_66.f_2, "SHOP_NO_ENTRY", 3);
			}
			iLocal_51 = 14;
			break;
		
		case 8:
			if (!unk_0x1D403DFADBC2DE3C(Local_66.f_2, 0))
			{
				func_47(Local_66.f_2, "SHOP_NO_ENTRY", 3);
			}
			iLocal_51 = 14;
			break;
		
		case 36:
			if (!func_19())
			{
				if (!unk_0x1D403DFADBC2DE3C(Local_66.f_2, 0))
				{
					func_47(Local_66.f_2, "SHOP_THREATENED", 3);
				}
				iLocal_51 = 37;
			}
			break;
		
		case 9:
			if (!func_19())
			{
				if (!unk_0x1D403DFADBC2DE3C(Local_66.f_2, 0))
				{
					func_47(Local_66.f_2, "BUMP", 3);
				}
				iLocal_51 = 37;
			}
			break;
		
		case 10:
			if (!func_19())
			{
				if (!unk_0x1D403DFADBC2DE3C(Local_66.f_2, 0))
				{
					func_47(Local_66.f_2, "GENERIC_FRIGHTENED_HIGH", 3);
				}
				iLocal_51 = 37;
			}
			break;
		
		case 11:
			if (!func_19())
			{
				if (!unk_0x1D403DFADBC2DE3C(Local_66.f_2, 0))
				{
					func_47(Local_66.f_2, "SHOP_BRAVE", 3);
				}
				iLocal_51 = 37;
			}
			break;
		
		case 14:
			if (func_44() || func_43())
			{
				if (func_44())
				{
					if (!iLocal_91)
					{
						iLocal_51 = 7;
						iLocal_91 = 1;
					}
				}
				else if (func_43())
				{
					if (!iLocal_92)
					{
						iLocal_51 = 8;
						iLocal_92 = 1;
					}
				}
				if (!func_14(&(Local_66.f_1E3)))
				{
					func_11(&(Local_66.f_1E3));
				}
				else if (func_10(&(Local_66.f_1E3)))
				{
					func_42(&(Local_66.f_1E3));
				}
				else if (func_8(&(Local_66.f_1E3)) > 10f)
				{
					if (!func_1(Local_66.f_1D6, 32))
					{
						if (!unk_0x36CEFBE9B745A58D(Local_66.f_2) && func_1(Local_66.f_1D6, 4))
						{
							unk_0xE896C0AD02364F2A(Local_66.f_2, "misscommon@response", "numbnuts", 8f, -8f, -1, 0, 0, 0, 0, 0);
						}
						iLocal_51 = 36;
						func_15(1, 0);
						func_286(&(Local_66.f_1D6), 32);
					}
				}
			}
			else if (func_14(&(Local_66.f_1E3)) && !func_10(&(Local_66.f_1E3)))
			{
				func_41(&(Local_66.f_1E3));
			}
			break;
		
		case 12:
			if (!unk_0x9986AD62CA3DE747(unk_0xBC25C936A095B5BA()))
			{
				if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
				{
					func_47(unk_0xBC25C936A095B5BA(), "SHOP_HOLDUP", 8);
				}
				func_12(&(Local_66.f_1D7));
				if (Local_66.f_2.f_B)
				{
					iLocal_51 = 37;
				}
				else
				{
					iLocal_51 = 13;
				}
			}
			else
			{
				unk_0xAFD2CBD312D69CFA(unk_0xBC25C936A095B5BA());
			}
			break;
		
		case 13:
			if (func_40(&(Local_66.f_1D7)) > 3f)
			{
				if (Local_66.f_2.f_C)
				{
					iLocal_51 = 22;
				}
				else if (Local_66.f_1CA)
				{
					iLocal_51 = 17;
				}
				else if (Local_66.f_1CB)
				{
					iLocal_51 = 18;
				}
				else if (Local_66.f_1CC)
				{
					iLocal_51 = 19;
				}
				else if (Local_66.f_1CD)
				{
					iLocal_51 = 20;
				}
				else if (Local_66.f_1CE)
				{
					iLocal_51 = 21;
				}
				else
				{
					iLocal_51 = 16;
				}
				func_39(&(Local_66.f_1D7));
			}
			break;
		
		case 16:
			if (!unk_0x1D403DFADBC2DE3C(Local_66.f_2, 0))
			{
				func_47(Local_66.f_2, "SHOP_SCARED", 3);
			}
			iLocal_51 = 37;
			break;
		
		case 17:
			if (!unk_0x1D403DFADBC2DE3C(Local_66.f_2, 0))
			{
				func_47(Local_66.f_2, "SHOP_SCARED", 3);
			}
			iLocal_51 = 37;
			break;
		
		case 18:
			if (!unk_0x1D403DFADBC2DE3C(Local_66.f_2, 0))
			{
				func_47(Local_66.f_2, "SHOP_SCARED", 3);
			}
			iLocal_51 = 37;
			break;
		
		case 19:
			if (!unk_0x1D403DFADBC2DE3C(Local_66.f_2, 0))
			{
				func_47(Local_66.f_2, "SHOP_SCARED", 3);
			}
			iLocal_51 = 37;
			break;
		
		case 20:
			if (!unk_0x1D403DFADBC2DE3C(Local_66.f_2, 0))
			{
				func_47(Local_66.f_2, "SHOP_SCARED", 3);
			}
			iLocal_51 = 37;
			break;
		
		case 21:
			if (!unk_0x1D403DFADBC2DE3C(Local_66.f_2, 0))
			{
				func_47(Local_66.f_2, "SHOP_SCARED", 3);
			}
			iLocal_51 = 37;
			break;
		
		case 22:
			if (!unk_0x9986AD62CA3DE747(unk_0xBC25C936A095B5BA()))
			{
				if (!unk_0x1D403DFADBC2DE3C(Local_66.f_2, 0))
				{
					func_47(Local_66.f_2, "SHOP_BRAVE", 8);
				}
				func_286(&(Local_66.f_1D6), 256);
				iLocal_51 = 37;
			}
			break;
		
		case 23:
			if (!unk_0x9986AD62CA3DE747(unk_0xBC25C936A095B5BA()))
			{
				if (Local_66.f_1C.f_E)
				{
					if (!unk_0x1D403DFADBC2DE3C(Local_66.f_2, 0))
					{
						func_47(Local_66.f_2, "SHOP_GAVE_YOU_EVERYTHING", 3);
					}
				}
				iLocal_51 = 37;
			}
			else
			{
				unk_0xAFD2CBD312D69CFA(unk_0xBC25C936A095B5BA());
			}
			break;
		
		case 24:
			if (unk_0xE59B7F5A03335350(Local_66.f_2E.f_4[0], 0))
			{
				unk_0x0FB6723EA68C0881(Local_66.f_2E.f_4[0], false);
			}
			if (!unk_0x1D403DFADBC2DE3C(Local_66.f_2E[0], 0))
			{
				func_47(Local_66.f_2E[0], "SURROUNDED", 15);
			}
			iLocal_51 = 25;
			break;
		
		case 25:
			if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
			{
				func_47(unk_0xBC25C936A095B5BA(), "SPOT_POLICE", 3);
			}
			iLocal_51 = 37;
			break;
		
		case 26:
			if (!unk_0x1D403DFADBC2DE3C(Local_66.f_2, 0))
			{
				func_47(Local_66.f_2, "SHOP_POUR_CAN", 3);
			}
			iLocal_51 = 37;
			break;
		
		case 27:
			if (!func_19())
			{
				if (!unk_0x1D403DFADBC2DE3C(Local_66.f_2, 0))
				{
					func_47(Local_66.f_2, "SCREAM_PANIC", 3);
				}
				iLocal_51 = 37;
			}
			else
			{
				func_37();
			}
			break;
		
		case 28:
			if (!unk_0x1D403DFADBC2DE3C(Local_66.f_2, 0))
			{
				func_47(Local_66.f_2, "SHOP_RECOGNISE", 8);
			}
			iLocal_51 = 37;
			break;
		
		case 29:
			if (!unk_0x1D403DFADBC2DE3C(Local_66.f_2, 0))
			{
				func_47(Local_66.f_2, "SHOP_RECOGNISE", 8);
			}
			iLocal_51 = 37;
			break;
		
		case 30:
			if (!unk_0x1D403DFADBC2DE3C(Local_66.f_2, 0))
			{
				func_47(Local_66.f_2, "SHOP_NO_COPS", 3);
			}
			iLocal_51 = 37;
			break;
		
		case 31:
			if (!func_19())
			{
				iLocal_51 = 37;
			}
			break;
		
		case 33:
			if (!unk_0x9986AD62CA3DE747(unk_0xBC25C936A095B5BA()) && !unk_0x9986AD62CA3DE747(Local_66.f_2))
			{
				if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
				{
					func_47(unk_0xBC25C936A095B5BA(), "SHOP_HURRY", 11);
				}
				func_12(&(Local_66.f_1D7));
				iLocal_51 = 32;
			}
			break;
		
		case 32:
			if (func_40(&(Local_66.f_1D7)) > 1f)
			{
				if (!unk_0x1D403DFADBC2DE3C(Local_66.f_2, 0))
				{
					func_47(Local_66.f_2, "SHOP_HURRYING", 3);
				}
				iLocal_51 = 37;
			}
			break;
		
		case 34:
			if (!func_19())
			{
				if (!unk_0x1D403DFADBC2DE3C(Local_66.f_2, 0))
				{
					func_47(Local_66.f_2, "SHOP_SELL", 3);
				}
				iLocal_51 = 37;
			}
			break;
		
		case 35:
			if (!func_19())
			{
				if (!unk_0x1D403DFADBC2DE3C(Local_66.f_2, 0))
				{
					func_47(Local_66.f_2, "SHOP_STEAL", 3);
				}
				iLocal_51 = 37;
			}
			break;
	}
}

void func_37()//Position - 0x24B2
{
	Global_394A = 0;
	func_38();
}

void func_38()//Position - 0x24C2
{
	unk_0x5C7DC611411E2CF9();
	Global_41AB = 0;
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x1E08809A5041F85B(false);
		Global_3DB8 = 6;
	}
}

void func_39(int iParam0)//Position - 0x24E3
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

float func_40(var uParam0)//Position - 0x24F9
{
	if (func_14(uParam0))
	{
		if (func_10(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_9(unk_0xFA30DFD0084E92FE(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

void func_41(int iParam0)//Position - 0x2535
{
	if (func_14(iParam0))
	{
		if (!func_10(iParam0))
		{
			iParam0->f_2 = (func_9(unk_0xFA30DFD0084E92FE(*iParam0, 4)) - iParam0->f_1);
			unk_0xF0059F27F7BB6680(iParam0, 2);
		}
	}
}

void func_42(int iParam0)//Position - 0x256F
{
	if (func_14(iParam0))
	{
		if (func_10(iParam0))
		{
			iParam0->f_1 = (func_9(unk_0xFA30DFD0084E92FE(*iParam0, 4)) - iParam0->f_2);
			iParam0->f_2 = 0f;
			unk_0x7CB6FD92BE491AD9(iParam0, 2);
		}
	}
}

int func_43()//Position - 0x25AD
{
	if (!unk_0x1D403DFADBC2DE3C(Local_66, 0))
	{
		if (unk_0x0C265B3C448E6954(Local_66, Local_66.f_C8, Local_66.f_CB, Local_66.f_CE, 0, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_44()//Position - 0x25E1
{
	if (!unk_0x1D403DFADBC2DE3C(Local_66, 0))
	{
		if (unk_0x0C265B3C448E6954(Local_66, Local_66.f_D6, Local_66.f_D9, Local_66.f_DC, 0, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

char* func_45(bool bParam0, char* sParam1, char* sParam2)//Position - 0x2615
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_46()//Position - 0x262C
{
	if (unk_0xFA30DFD0084E92FE(unk_0x491B2241281A03B7(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_47(int iParam0, char* sParam1, int iParam2)//Position - 0x264D
{
	unk_0x53D8178763EDCE60(iParam0, sParam1, func_48(iParam2), 1);
}

int func_48(int iParam0)//Position - 0x2664
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

bool func_49()//Position - 0x2859
{
	return Global_4334;
}

void func_50()//Position - 0x2864
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_295() && iLocal_64 != 3)
	{
		iVar2 = 0;
		while (iVar2 < unk_0x432AA9CCB3EE0174(0))
		{
			iVar0 = unk_0x2BFAC254CC069912(0, iVar2);
			switch (iVar0)
			{
				case 140:
					unk_0x414AA1932D1C88E2(0, iVar2, &iVar1, 1);
					if (func_52(iVar1))
					{
						if (unk_0x386592AF38881675(iVar1))
						{
							if (iVar1 != func_51(Local_66.f_2) && iVar1 != func_51(unk_0xBC25C936A095B5BA()))
							{
								func_286(&(Local_66.f_1D6), 8);
							}
						}
						if (!unk_0x386592AF38881675(iVar1) && !unk_0xD27AC0E9B78CFDD7(iVar1))
						{
							func_286(&(Local_66.f_1D6), 8);
						}
					}
					break;
				
				case 139:
					unk_0x414AA1932D1C88E2(0, iVar2, &iVar1, 1);
					if (func_52(iVar1))
					{
						if (unk_0x386592AF38881675(iVar1))
						{
							if (iVar1 != func_51(Local_66.f_2) && iVar1 != func_51(unk_0xBC25C936A095B5BA()))
							{
								func_286(&(Local_66.f_1D6), 8);
							}
						}
						if (!unk_0x386592AF38881675(iVar1) && !unk_0xD27AC0E9B78CFDD7(iVar1))
						{
							func_286(&(Local_66.f_1D6), 8);
						}
					}
					break;
			}
			iVar2++;
		}
	}
}

int func_51(int iParam0)//Position - 0x2982
{
	return iParam0;
}

int func_52(int iParam0)//Position - 0x298C
{
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		if (unk_0x645938DA8ED5E0BA(iParam0) == Local_66.f_B9)
		{
			return 1;
		}
		else if (unk_0x0C265B3C448E6954(iParam0, Local_66.f_BA, Local_66.f_BD, Local_66.f_C0, 0, true, 0))
		{
			return 1;
		}
		else if (unk_0x0C265B3C448E6954(iParam0, Local_66.f_C8, Local_66.f_CB, Local_66.f_CE, 0, true, 0))
		{
			return 1;
		}
		else if (unk_0x0C265B3C448E6954(iParam0, Local_66.f_CF, Local_66.f_D2, Local_66.f_D5, 0, true, 0))
		{
			return 1;
		}
		else if (Local_66.f_C7 != -1f)
		{
			if (unk_0x0C265B3C448E6954(iParam0, Local_66.f_C1, Local_66.f_C4, Local_66.f_C7, 0, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_53()//Position - 0x2A49
{
	int iVar0;
	var uVar1[10];
	int iVar2;
	int iVar3;
	
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (func_295())
		{
			if (!unk_0xFA30DFD0084E92FE(Local_66.f_A2.f_12, 0))
			{
				iVar2 = 0;
				iVar3 = 0;
				iVar2 = unk_0x252B0CBDBF5803ED(unk_0xBC25C936A095B5BA(), &uVar1, -1);
				iVar0 = 0;
				while (iVar0 < Local_66.f_A2)
				{
					Local_66.f_A2[iVar0] = 0;
					iVar0++;
				}
				iVar0 = 0;
				iVar3 = 0;
				while (iVar3 < iVar2)
				{
					if (iVar0 < Local_66.f_A2)
					{
						if ((unk_0x724D816EA203A79E(uVar1[iVar3]) && !unk_0x36CEFBE9B745A58D(uVar1[iVar3])) && !unk_0x5237AF95232D78C5(uVar1[iVar3], 0))
						{
							if (unk_0x9488E18994C5C83D(uVar1[iVar3], unk_0x705BBFE5A8ADE4A9(unk_0xB5CEFD608600A09F())))
							{
								Local_66.f_A2[iVar0] = uVar1[iVar3];
								Local_66.f_A2.f_5[iVar0 /*3*/] = { unk_0x541C2AEF053615BC(uVar1[iVar3], true) };
								iVar0++;
							}
						}
					}
					iVar3++;
				}
				unk_0xF0059F27F7BB6680(&(Local_66.f_A2.f_12), 0);
			}
			iVar0 = 0;
			while (iVar0 < Local_66.f_A2)
			{
				if ((unk_0x724D816EA203A79E(Local_66.f_A2[iVar0]) && !unk_0x36CEFBE9B745A58D(Local_66.f_A2[iVar0])) && !unk_0x5237AF95232D78C5(Local_66.f_A2[iVar0], 0))
				{
					if (unk_0xFA30DFD0084E92FE(Local_66.f_A2.f_12, 1))
					{
						if ((unk_0x105601648511CC64() % 1500) < 50)
						{
						}
						unk_0xDC078F87049ECECE(Local_66.f_A2[iVar0], false, 0);
						unk_0xD434A01DEA38A939(Local_66.f_A2[iVar0], false, 0);
						unk_0x346478B12F69D4E3(Local_66.f_A2[iVar0], true);
						unk_0xD5874E4A4BF782FC(Local_66.f_A2[iVar0], Local_66.f_A2.f_5[iVar0 /*3*/], 1, 1, 1);
					}
					else if (!unk_0x8F6EAC9E7D6812D5(Local_66.f_A2[iVar0]))
					{
						unk_0xDC078F87049ECECE(Local_66.f_A2[iVar0], true, 0);
						unk_0xD434A01DEA38A939(Local_66.f_A2[iVar0], true, 0);
						unk_0x346478B12F69D4E3(Local_66.f_A2[iVar0], false);
						unk_0xD5874E4A4BF782FC(Local_66.f_A2[iVar0], Local_66.f_A2.f_5[iVar0 /*3*/], 1, 1, 1);
					}
				}
				iVar0++;
			}
		}
		else
		{
			if (unk_0xFA30DFD0084E92FE(Local_66.f_A2.f_12, 0))
			{
				unk_0x7CB6FD92BE491AD9(&(Local_66.f_A2.f_12), 0);
			}
			iVar0 = 0;
			while (iVar0 < Local_66.f_A2)
			{
				if ((unk_0x724D816EA203A79E(Local_66.f_A2[iVar0]) && !unk_0x36CEFBE9B745A58D(Local_66.f_A2[iVar0])) && !unk_0x5237AF95232D78C5(Local_66.f_A2[iVar0], 0))
				{
					if (!unk_0x8F6EAC9E7D6812D5(Local_66.f_A2[iVar0]))
					{
						unk_0xDC078F87049ECECE(Local_66.f_A2[iVar0], true, 0);
						unk_0xD434A01DEA38A939(Local_66.f_A2[iVar0], true, 0);
						unk_0x346478B12F69D4E3(Local_66.f_A2[iVar0], false);
						unk_0xD5874E4A4BF782FC(Local_66.f_A2[iVar0], Local_66.f_A2.f_5[iVar0 /*3*/], 1, 1, 1);
					}
				}
				iVar0++;
			}
		}
	}
}

void func_54()//Position - 0x2CFA
{
	switch (iLocal_99)
	{
		case 0:
			if (func_295())
			{
				unk_0xA67D3DDB524B8DBA(unk_0xB5CEFD608600A09F());
				unk_0x522053D86D6E1C7A("oddjobs@shop_robbery@rob_till");
				unk_0x522053D86D6E1C7A("misscommon@response");
				unk_0x8AA3F48A15444B98(func_63(iLocal_80), false);
				unk_0xF243B7A14FCFD0F4(joaat("prop_choc_ego"));
				unk_0xF243B7A14FCFD0F4(joaat("prop_choc_meto"));
				unk_0xF243B7A14FCFD0F4(joaat("prop_choc_pq"));
				if (!bLocal_86)
				{
					unk_0xF243B7A14FCFD0F4(Local_66.f_2E.f_1A);
					unk_0xF243B7A14FCFD0F4(Local_66.f_2E.f_1B);
				}
				iLocal_99 = 1;
			}
			break;
		
		case 1:
			if (!unk_0x284F2ACE6839D3C0("SCRIPT\MARKET_CASH_REGISTER", false, -1))
			{
				return;
			}
			if (!unk_0xF9E082857622D91E("oddjobs@shop_robbery@rob_till"))
			{
				return;
			}
			if (!unk_0xF9E082857622D91E("misscommon@response"))
			{
				return;
			}
			if (!unk_0xD6513D668481290A(joaat("prop_choc_ego")))
			{
				return;
			}
			if (!unk_0xD6513D668481290A(joaat("prop_choc_meto")))
			{
				return;
			}
			if (!unk_0xD6513D668481290A(joaat("prop_choc_pq")))
			{
				return;
			}
			if (!bLocal_86)
			{
				if (!unk_0xD6513D668481290A(Local_66.f_2E.f_1A))
				{
					return;
				}
				if (!unk_0xD6513D668481290A(Local_66.f_2E.f_1B))
				{
					return;
				}
			}
			if (!func_61("SNK_MNU", iLocal_80, 0))
			{
				return;
			}
			if (!func_1(Local_66.f_1D6, 4))
			{
				if (!func_1(Local_66.f_1D6, 1024))
				{
					iLocal_98[0] = unk_0xB6896943DA475493(func_60(0), func_59(0), true, true, false);
					iLocal_98[1] = unk_0xB6896943DA475493(func_60(1), func_59(1), true, true, false);
					iLocal_98[2] = unk_0xB6896943DA475493(func_60(2), func_59(2), true, true, false);
					unk_0xDC078F87049ECECE(iLocal_98[0], false, 0);
					unk_0xDC078F87049ECECE(iLocal_98[1], false, 0);
					unk_0xDC078F87049ECECE(iLocal_98[2], false, 0);
					func_286(&(Local_66.f_1D6), 1024);
				}
				func_286(&(Local_66.f_1D6), 4);
				iLocal_99 = 2;
			}
			break;
		
		case 2:
			if (!func_295())
			{
				func_55();
				func_293(&(Local_66.f_1D6), 4);
				iLocal_99 = 0;
			}
			break;
		
		case 3:
			if (func_1(Local_66.f_1D6, 4))
			{
				func_55();
				func_293(&(Local_66.f_1D6), 4);
			}
			break;
	}
}

void func_55()//Position - 0x2F04
{
	unk_0x4EA570997E107F35("oddjobs@shop_robbery@rob_till");
	unk_0x4EA570997E107F35("misscommon@response");
	unk_0xDA70546257A3ED8B("SCRIPT\MARKET_CASH_REGISTER");
	unk_0x786556581D95BCB2(func_63(iLocal_80));
	unk_0x2CA123B0622F495C(joaat("prop_choc_ego"));
	unk_0x2CA123B0622F495C(joaat("prop_choc_meto"));
	unk_0x2CA123B0622F495C(joaat("prop_choc_pq"));
	func_56(1, iLocal_80);
	if (!bLocal_86)
	{
		unk_0x2CA123B0622F495C(Local_66.f_2E.f_1A);
		unk_0x2CA123B0622F495C(Local_66.f_2E.f_1B);
	}
}

void func_56(bool bParam0, int iParam1)//Position - 0x2F6D
{
	int iVar0;
	
	if (!func_58(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_43C1.f_1EFB)
	{
		unk_0xC0404835F30391BB(15);
		Global_43C1.f_1EFB = 0;
	}
	unk_0xE7918A3D05166D98(0f);
	if (Global_43C1.f_157A[iVar0])
	{
		unk_0x841D233D3CE81152(9, false);
		Global_43C1.f_157A[iVar0] = 0;
	}
	if (Global_43C1.f_156C[iVar0])
	{
		unk_0x786556581D95BCB2("CommonMenu");
		Global_43C1.f_156C[iVar0] = 0;
	}
	if (Global_43C1.f_1573[iVar0])
	{
		unk_0x786556581D95BCB2("MPShopSale");
		Global_43C1.f_1573[iVar0] = 0;
	}
	if (bParam0)
	{
		func_57(&(Global_43C1.f_159A[iVar0 /*10*/]));
		Global_43C1.f_15D7[iVar0] = 0;
	}
	else
	{
		Global_43C1.f_15D7[iVar0] = 0;
	}
}

void func_57(int iParam0)//Position - 0x302B
{
	if (iParam0->f_9 != 0)
	{
		if (unk_0xA7F138B5B1AB2CF6(*iParam0))
		{
			unk_0xB0B0FE33F4F22679(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

int func_58(var uParam0, bool bParam1, int iParam2)//Position - 0x3054
{
	char cVar0[64];
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -1)
	{
		if (unk_0x7AF0088ABFA713B6() && unk_0x32405B7614E36453())
		{
			iParam2 = unk_0x115A5CB728B7997D();
		}
	}
	StringCopy(&cVar0, unk_0x1377080E9B0BD993(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar1 = unk_0x56BEECB328B6D29D(&cVar0);
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (Global_43C1.f_15D7[iVar2] == iVar1)
		{
			*uParam0 = iVar2;
			return 1;
		}
		else if (Global_43C1.f_15D7[iVar2] == 0)
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (bParam1)
	{
		if (iVar3 != -1)
		{
			Global_43C1.f_15D7[iVar3] = iVar1;
			*uParam0 = iVar3;
			return 1;
		}
	}
	return 0;
}

Vector3 func_59(int iParam0)//Position - 0x30F1
{
	switch (iParam0)
	{
		case 0:
			return Local_66.f_1E6.f_6 - Vector(1f, 0f, 0.1f);
		
		case 1:
			return Local_66.f_1E6.f_6 - Vector(1f, 0f, 0f);
		
		case 2:
			return Local_66.f_1E6.f_6 - Vector(1f, 0f, -0.1f);
		
		default:
	}
	return Local_66.f_1E6.f_6 - Vector(1f, 0f, -0.1f);
}

int func_60(int iParam0)//Position - 0x315B
{
	switch (iParam0)
	{
		case 0:
			return joaat("prop_choc_pq");
		
		case 1:
			return joaat("prop_choc_ego");
		
		case 2:
			return joaat("prop_choc_meto");
		
		default:
	}
	return joaat("prop_choc_pq");
}

bool func_61(char* sParam0, int iParam1, bool bParam2)//Position - 0x3199
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_58(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_43C1.f_1581[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0xF1734B55490E9045(&(Global_43C1.f_1581[iVar0 /*4*/])))
	{
		unk_0x900CF084251DED26(&(Global_43C1.f_1581[iVar0 /*4*/]), 9);
		Global_43C1.f_157A[iVar0] = 1;
		if (!unk_0x4C7022A83B41D888(&(Global_43C1.f_1581[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0x8AA3F48A15444B98("CommonMenu", false);
	Global_43C1.f_156C[iVar0] = 1;
	if (!unk_0x499783D01578C2D2("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0x8AA3F48A15444B98("MPShopSale", false);
		Global_43C1.f_1573[iVar0] = 1;
		if (!unk_0x499783D01578C2D2("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_43C1.f_159A[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_62(&(Global_43C1.f_159A[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_62(var uParam0)//Position - 0x328F
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0xA7F138B5B1AB2CF6(*uParam0))
			{
				*uParam0 = unk_0x9934FEFB3B8C6DB8(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0xA7F138B5B1AB2CF6(*uParam0))
					{
						uParam0->f_8 = unk_0x105601648511CC64();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x105601648511CC64();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0xA7F138B5B1AB2CF6(*uParam0))
			{
				uParam0->f_8 = unk_0x105601648511CC64();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0xA7F138B5B1AB2CF6(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

char* func_63(int iParam0)//Position - 0x3331
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return "ShopUI_Title_GasStation";
		
		case 5:
			return "ShopUI_Title_LiquorStore3";
		
		case 6:
		case 7:
		case 8:
		case 9:
			return "ShopUI_Title_LiquorStore2";
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			return "ShopUI_Title_ConvenienceStore";
		
		case -2:
			return "ShopUI_Title_LiquorStore";
		
		default:
	}
	return "NULL";
}

void func_64()//Position - 0x33DD
{
	switch (iLocal_100)
	{
		case 0:
			if (func_295())
			{
				unk_0x522053D86D6E1C7A(Local_66.f_1E6.f_1);
				iLocal_100 = 1;
			}
			break;
		
		case 1:
			if (!unk_0xF9E082857622D91E(Local_66.f_1E6.f_1))
			{
				return;
			}
			if (!func_1(Local_66.f_1D6, 16))
			{
				func_286(&(Local_66.f_1D6), 16);
				iLocal_100 = 2;
			}
			break;
		
		case 2:
			if (!func_295() && iLocal_63 != 1)
			{
				unk_0x4EA570997E107F35(Local_66.f_1E6.f_1);
				func_293(&(Local_66.f_1D6), 16);
				iLocal_100 = 0;
			}
			break;
		
		case 3:
			if (func_1(Local_66.f_1D6, 16))
			{
				unk_0x4EA570997E107F35(Local_66.f_1E6.f_1);
				func_293(&(Local_66.f_1D6), 16);
			}
			break;
	}
}

void func_65()//Position - 0x34A6
{
	switch (iLocal_119)
	{
		case 0:
			if (Local_66.f_9E)
			{
				iLocal_119 = 1;
			}
			break;
		
		case 1:
			if (func_295())
			{
				if (func_14(&(Local_66.f_9E.f_1)))
				{
					func_39(&(Local_66.f_9E.f_1));
				}
				if ((unk_0x105601648511CC64() % 1000) < 50)
				{
				}
				if (unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
				{
					unk_0xAEEA080912A0AB35(unk_0xB5CEFD608600A09F());
				}
			}
			else
			{
				func_12(&(Local_66.f_9E.f_1));
				iLocal_119 = 2;
			}
			break;
		
		case 2:
			if (func_295())
			{
				iLocal_119 = 1;
			}
			break;
		
		case 3:
			break;
	}
}

void func_66()//Position - 0x3540
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	int iVar4;
	char* sVar5;
	var uVar6;
	
	func_183();
	if (((((iLocal_58 == 1 || iLocal_58 == 2) && unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 0) && !unk_0x36CEFBE9B745A58D(Local_66)) && !func_182(-1082130432)) && !unk_0x36CEFBE9B745A58D(Local_66.f_2))
	{
		iVar1 = unk_0x8D66276473ABD7CC(unk_0xBC25C936A095B5BA());
		iVar2 = unk_0x0992793998FBCE2B(unk_0xBC25C936A095B5BA());
		if (((iLocal_64 != 2 && iLocal_64 != 3) && iLocal_64 != 4) && func_295())
		{
			if (!unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()))
			{
				unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
			}
		}
		iVar4 = 0;
		switch (iLocal_64)
		{
			case 0:
				if (func_1(Local_66.f_1D6, 4) && func_24(Local_66) == joaat("weapon_unarmed"))
				{
					if (func_181(iLocal_80, &(Local_66.f_1E6.f_6), Local_66.f_1E6.f_9.f_2, &(Local_66.f_66.f_1A[0 /*3*/]), &(Local_66.f_66.f_1A[1 /*3*/]), &(Local_66.f_66.f_21), &(Local_66.f_66.f_24)))
					{
						vVar3 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
						if (unk_0xF0F2FC9DE291567F(vVar3, Local_66.f_66.f_21, true) < 5f)
						{
							if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), Local_66.f_66.f_1A[0 /*3*/], Local_66.f_66.f_1A[1 /*3*/], Local_66.f_66.f_24, 0, true, 0))
							{
								if (unk_0x053F9FA04F814AF3(unk_0xBC25C936A095B5BA(), Local_66.f_66.f_21, 135f))
								{
									if ((unk_0x105601648511CC64() % 1000) < 50)
									{
									}
									if (((!func_27("SHR_HOLDUP_1") && !func_27("SHR_MENU")) && !func_49()) && func_180())
									{
										func_179("SHR_MENU");
									}
									Local_66.f_1D5 = -1;
									func_178(&(Local_66.f_1D5), 4, "SHR_MENU", 0, 0, 0, 0);
									unk_0x7CB6FD92BE491AD9(&(Local_66.f_A2.f_12), 1);
									unk_0x7CB6FD92BE491AD9(&(Local_66.f_A2.f_12), 0);
									iLocal_64 = 1;
								}
							}
						}
					}
				}
				break;
			
			case 1:
				if (!unk_0x053F9FA04F814AF3(unk_0xBC25C936A095B5BA(), Local_66.f_66.f_21, 135f) || !func_24(Local_66) == joaat("weapon_unarmed"))
				{
					if (func_27("SHR_MENU"))
					{
						unk_0x7456702622C62EA0(1);
					}
					Local_66.f_66.f_16 = -1;
					func_177(&(Local_66.f_1D5));
					iLocal_64 = 0;
				}
				else if (((!func_27("SHR_MENU") && !func_27("SHR_HOLDUP_1")) && func_180()) && !func_176(Local_66.f_1D5, 0))
				{
					func_179("SHR_MENU");
				}
				if ((!unk_0x226A1FD8C273ADE9(unk_0xBC25C936A095B5BA()) && !unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) && !unk_0x82BF33A9422C103C(unk_0xBC25C936A095B5BA()))
				{
					if (func_174(Local_66.f_1D5, 1))
					{
						if (func_27("SHR_MENU"))
						{
							unk_0x7456702622C62EA0(1);
						}
						unk_0xF0059F27F7BB6680(&(Local_66.f_A2.f_12), 1);
						func_12(&(Local_66.f_66.f_35));
						func_177(&(Local_66.f_1D5));
						func_173(23, 1);
						if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !unk_0x36CEFBE9B745A58D(Local_66.f_2))
						{
							unk_0x85DB484A637CEAB9(unk_0xBC25C936A095B5BA(), Local_66.f_2, 0);
						}
						iLocal_64 = 2;
					}
				}
				break;
			
			case 2:
				if (!unk_0xEF0E25DA0CB6E8FF(iLocal_118))
				{
					iLocal_118 = unk_0x585DE1CBEEB2D27D(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
				}
				func_172(iLocal_80, Local_66.f_1E6.f_6, Local_66.f_1E6.f_9.f_2, &(Local_66.f_66), &(Local_66.f_66.f_3), &uVar6);
				unk_0x6125108F6208C1F6(iLocal_118, Local_66.f_66);
				unk_0x3553F2A72957724E(iLocal_118, Local_66.f_66.f_3, 2);
				unk_0x9DF315A9EFFF87AC(iLocal_118, 35f);
				unk_0x2FB83B8BD6C05FD2(iLocal_118, "HAND_SHAKE", 0.1f);
				unk_0x348665177DBFB93B(iLocal_118, true);
				unk_0x062C9995BFD27B2A(true, false, 3000, 1, 0, 0);
				if (unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()))
				{
					unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 0);
					func_286(&(Local_66.f_1D6), 2048);
				}
				Local_66.f_66.f_2E = func_63(iLocal_80);
				Local_66.f_66.f_17 = 0;
				Local_66.f_66.f_18 = 3;
				func_171(0, 0);
				func_170(1, 1, 0, 0, 0);
				func_169(1, 2, 1, 1, 1);
				func_168(func_4(iLocal_80));
				func_166(1, Local_66.f_66.f_2E, Local_66.f_66.f_2E);
				func_165();
				func_161(0, "SNK_ITEM1", 0, 1, 0, 0);
				func_161(0, "ITEM_COST", 1, 1, 0, 0);
				func_157(func_160(0), 0);
				func_161(1, "SNK_ITEM2", 0, 1, 0, 0);
				func_161(1, "ITEM_COST", 1, 1, 0, 0);
				func_157(func_160(1), 0);
				func_161(2, "SNK_ITEM3", 0, 1, 0, 0);
				func_161(2, "ITEM_COST", 1, 1, 0, 0);
				func_157(func_160(2), 0);
				func_156(0);
				func_155(Local_66.f_66.f_17, 1, 1);
				func_154("SNK_ITEM1_D", 0, 0);
				func_153(201, "ITEM_SELECT", -1, 0);
				func_153(202, "ITEM_BACK", -1, 0);
				func_153(203, "SNK_LIFT", -1, 0);
				iLocal_64 = 3;
				break;
			
			case 3:
				iVar4 = 0;
				if (unk_0x8ACB0C3FACC09467())
				{
					if (unk_0x0738078C96634C59(2))
					{
						unk_0xBBC4195AD74D153D(0, 1, 1);
						unk_0xBBC4195AD74D153D(0, 2, 1);
						unk_0x5EFA245B45A49778(0, 237, 1);
						unk_0x5EFA245B45A49778(0, 238, 1);
						unk_0x5EFA245B45A49778(0, 241, 1);
						unk_0x5EFA245B45A49778(0, 242, 1);
						func_150(0, 0, 0, 1);
						func_149(0, -1, 1);
						if (func_148())
						{
							if (Global_4118D6 != Local_66.f_66.f_17)
							{
								unk_0xC4BA30B532FE260F(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
								Local_66.f_66.f_17 = Global_4118D6;
								func_155(Local_66.f_66.f_17, 1, 1);
								Local_66.f_66.f_25 = 0;
								Local_66.f_66.f_29 = 0;
								Local_66.f_66.f_2A = 0;
								sVar5 = func_147(Local_66.f_66.f_17);
								if (unk_0x0F6F4C227FB5DD52(sVar5))
								{
									func_154(sVar5, 0, 0);
								}
							}
							else
							{
								iVar4 = 1;
							}
						}
					}
				}
				func_110(1, iLocal_80, 1, 0, 1, -1082130432, 0, 0);
				func_106();
				if (unk_0xF7DDAAF0EFDAFA22(2, 201) || iVar4 == 1)
				{
					Local_66.f_66.f_25 = 1;
					Local_66.f_66.f_29 = 0;
					Local_66.f_66.f_2A = 0;
					if (Local_66.f_66.f_28 && Local_66.f_66.f_2B)
					{
						Local_66.f_66.f_2C = 1;
						unk_0xC4BA30B532FE260F(-1, "PURCHASE", "HUD_LIQUOR_STORE_SOUNDSET", true);
						iLocal_108 = 1;
						iLocal_111 = Local_66.f_66.f_17;
						iLocal_64 = 4;
					}
					else
					{
						Local_66.f_66.f_2C = 0;
						unk_0xC4BA30B532FE260F(-1, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", true);
					}
				}
				if (unk_0xF7DDAAF0EFDAFA22(2, 203))
				{
					iLocal_64 = 6;
					unk_0xC4BA30B532FE260F(-1, "SELECT", "HUD_LIQUOR_STORE_SOUNDSET", true);
					func_105();
				}
				if (unk_0xF7DDAAF0EFDAFA22(2, 202) || unk_0x093484B35A948BFC(2, 238))
				{
					iLocal_64 = 7;
					Local_66.f_66.f_2D = unk_0x105601648511CC64();
					unk_0xC4BA30B532FE260F(-1, "CANCEL", "HUD_LIQUOR_STORE_SOUNDSET", true);
					func_105();
				}
				break;
			
			case 4:
				func_110(1, iLocal_80, 1, 0, 1, -1082130432, 0, 0);
				switch (Local_66.f_66.f_17)
				{
					case 0:
						iVar0 = func_160(Local_66.f_66.f_17);
						if (iVar1 + 10 > iVar2)
						{
							unk_0x65E471E4A2D56226(unk_0xBC25C936A095B5BA(), iVar2, 0);
						}
						else
						{
							unk_0x65E471E4A2D56226(unk_0xBC25C936A095B5BA(), iVar1 + 10, 0);
						}
						break;
					
					case 1:
						iVar0 = func_160(Local_66.f_66.f_17);
						if (iVar1 + 20 > iVar2)
						{
							unk_0x65E471E4A2D56226(unk_0xBC25C936A095B5BA(), iVar2, 0);
						}
						else
						{
							unk_0x65E471E4A2D56226(unk_0xBC25C936A095B5BA(), iVar1 + 20, 0);
						}
						break;
					
					case 2:
						iVar0 = func_160(Local_66.f_66.f_17);
						if (iVar1 + 15 > iVar2)
						{
							unk_0x65E471E4A2D56226(unk_0xBC25C936A095B5BA(), iVar2, 0);
						}
						else
						{
							unk_0x65E471E4A2D56226(unk_0xBC25C936A095B5BA(), iVar1 + 15, 0);
						}
						break;
				}
				func_68(func_100(), 97, iVar0);
				if (!Local_66.f_66.f_27)
				{
					iLocal_51 = 34;
					Local_66.f_66.f_27 = 1;
				}
				func_12(&(Local_66.f_66.f_35));
				iLocal_64 = 3;
				break;
			
			case 5:
				if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
				{
					if (!bLocal_86)
					{
					}
					iLocal_64 = 6;
				}
				break;
			
			case 6:
				switch (Local_66.f_66.f_17)
				{
					case 0:
						if (iVar1 + 10 > iVar2)
						{
							unk_0x65E471E4A2D56226(unk_0xBC25C936A095B5BA(), iVar2, 0);
						}
						else
						{
							unk_0x65E471E4A2D56226(unk_0xBC25C936A095B5BA(), iVar1 + 10, 0);
						}
						break;
					
					case 1:
						if (iVar1 + 20 > iVar2)
						{
							unk_0x65E471E4A2D56226(unk_0xBC25C936A095B5BA(), iVar2, 0);
						}
						else
						{
							unk_0x65E471E4A2D56226(unk_0xBC25C936A095B5BA(), iVar1 + 20, 0);
						}
						break;
					
					case 2:
						if (iVar1 + 15 > iVar2)
						{
							unk_0x65E471E4A2D56226(unk_0xBC25C936A095B5BA(), iVar2, 0);
						}
						else
						{
							unk_0x65E471E4A2D56226(unk_0xBC25C936A095B5BA(), iVar1 + 15, 0);
						}
						break;
				}
				unk_0xDDCAA2E64649E083(unk_0xFC1CAE18F3ECBF2D(), true, 0);
				func_173(23, 0);
				iLocal_51 = 35;
				if (!unk_0x36CEFBE9B745A58D(Local_66.f_2) && func_1(Local_66.f_1D6, 4))
				{
					unk_0xE896C0AD02364F2A(Local_66.f_2, "misscommon@response", "give_me_a_break", 8f, -8f, -1, 0, 0, 0, 0, 0);
				}
				if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) < 1)
				{
					func_15(1, 0);
				}
				iLocal_64 = 8;
				break;
			
			case 7:
				if ((unk_0x105601648511CC64() - Local_66.f_66.f_2D) > 1000)
				{
					iLocal_64 = 0;
				}
				else
				{
					unk_0xD55638CE45B2B948(2, 193);
					unk_0xD55638CE45B2B948(2, 202);
					unk_0xD55638CE45B2B948(2, 188);
					unk_0xD55638CE45B2B948(2, 187);
					unk_0xD55638CE45B2B948(2, 189);
					unk_0xD55638CE45B2B948(2, 190);
				}
				break;
			
			case 8:
				break;
		}
	}
	else
	{
		if (iLocal_64 != 8 && func_1(Local_66.f_1D6, 4))
		{
			if ((iLocal_64 == 3 || iLocal_64 == 2) || iLocal_64 == 4)
			{
				func_105();
			}
			iLocal_64 = 8;
		}
		if (func_27("SHR_SNACKS"))
		{
			unk_0x7456702622C62EA0(1);
			func_177(&(Local_66.f_1D5));
		}
		if (func_27("SHR_MENU"))
		{
			unk_0x7456702622C62EA0(1);
			func_177(&(Local_66.f_1D5));
		}
		if (unk_0xFA30DFD0084E92FE(Local_66.f_A2.f_12, 1) && iLocal_101 < 2)
		{
			unk_0x7CB6FD92BE491AD9(&(Local_66.f_A2.f_12), 1);
		}
		if (func_1(Local_66.f_1D6, 4))
		{
			func_67();
		}
	}
}

void func_67()//Position - 0x3ED3
{
	if (func_1(Local_66.f_1D6, 2048))
	{
		if (!unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()))
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
			}
			unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
			func_293(&(Local_66.f_1D6), 2048);
		}
	}
	Local_66.f_66.f_25 = 0;
	unk_0x7CB6FD92BE491AD9(&(Local_66.f_A2.f_12), 1);
	if (unk_0xEF0E25DA0CB6E8FF(iLocal_118))
	{
		unk_0x4EC087603E1DEF9C(iLocal_118, 0);
	}
}

int func_68(int iParam0, int iParam1, int iParam2)//Position - 0x3F44
{
	if (Global_19B04.f_6D75[iParam0 /*29*/].f_11 == 3)
	{
		return 0;
	}
	if (Global_19B04.f_6D75[iParam0 /*29*/].f_11 == 4)
	{
		return 0;
	}
	return func_69(Global_19B04.f_6D75[iParam0 /*29*/].f_11, 0, iParam1, iParam2, 0);
}

int func_69(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x3F8D
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_99();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_98(99, 1);
					func_97(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_97(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_97(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_82(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_78(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_97(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_97(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_97(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_78(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_97(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_97(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_97(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_97(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_97(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_97(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 98:
				case 99:
				case 100:
				case 101:
				case 103:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
					switch (iParam0)
					{
						case 0:
							func_97(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_97(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_97(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x2C087518F90303D5())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_97(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_97(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_97(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_97(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_97(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_97(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_78(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_97(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_97(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_97(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_97(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_97(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_97(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_77(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_98(95, iParam3);
					break;
				
				case 1:
					func_98(97, iParam3);
					break;
				
				case 2:
					func_98(96, iParam3);
					break;
			}
			func_98(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_72(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_72(iVar1);
	}
	iVar5 = (Global_CF95[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_CF95[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_CF95[iVar2] = 2147483647;
				}
				else
				{
					Global_CF95[iVar2] = (Global_CF95[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_97(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_97(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_97(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_CF95[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_CF95[iVar2];
			Global_CF95[iVar2] = (Global_CF95[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_19B04.f_5037.f_E9[iVar2 /*69*/].f_2[Global_19B04.f_5037.f_E9[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_19B04.f_5037.f_E9[iVar2 /*69*/].f_2[Global_19B04.f_5037.f_E9[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_19B04.f_5037.f_E9[iVar2 /*69*/].f_2[Global_19B04.f_5037.f_E9[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_19B04.f_5037.f_E9[iVar2 /*69*/]++;
		Global_19B04.f_5037.f_E9[iVar2 /*69*/].f_1++;
		if (Global_19B04.f_5037.f_E9[iVar2 /*69*/].f_1 > 10)
		{
			Global_19B04.f_5037.f_E9[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_71(iParam0);
	if (Global_8C41 == 15)
	{
		func_70(0);
	}
	return 1;
}

void func_70(bool bParam0)//Position - 0x458C
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_19B04.f_5037.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_19B04.f_5037.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_19B04.f_5037.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_19B04.f_5037.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_19B04.f_5037.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_19B04.f_5037.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_CF9D[iVar0 /*3*/][0] = Global_19B04.f_5037[iVar0];
		Global_CF9D.f_1F[iVar0 /*3*/][0] = Global_19B04.f_5037.f_B[iVar0];
		Global_CF9D.f_3E[iVar0 /*3*/][0] = Global_19B04.f_5037.f_16[iVar0];
		Global_CF9D.f_5D[iVar0 /*3*/][0] = Global_19B04.f_5037.f_21[iVar0];
		Global_CF9D.f_7C[iVar0 /*3*/][0] = Global_19B04.f_5037.f_2C[iVar0];
		Global_CF9D.f_9B[iVar0 /*3*/][0] = Global_19B04.f_5037.f_37[iVar0];
		Global_CF9D.f_BA[iVar0 /*3*/][0] = Global_19B04.f_5037.f_42[iVar0];
		Global_CF9D.f_D9[iVar0 /*3*/][0] = Global_19B04.f_5037.f_4D[iVar0];
		Global_CF9D.f_F8[iVar0 /*3*/][0] = Global_19B04.f_5037.f_58[iVar0];
		if (!bParam0)
		{
			Global_CF9D[iVar0 /*3*/][1] = Global_19B04.f_5037[iVar0];
			Global_CF9D.f_1F[iVar0 /*3*/][1] = Global_19B04.f_5037.f_B[iVar0];
			Global_CF9D.f_3E[iVar0 /*3*/][1] = Global_19B04.f_5037.f_16[iVar0];
			Global_CF9D.f_5D[iVar0 /*3*/][1] = Global_19B04.f_5037.f_21[iVar0];
			Global_CF9D.f_7C[iVar0 /*3*/][1] = Global_19B04.f_5037.f_2C[iVar0];
			Global_CF9D.f_9B[iVar0 /*3*/][1] = Global_19B04.f_5037.f_37[iVar0];
			Global_CF9D.f_BA[iVar0 /*3*/][1] = Global_19B04.f_5037.f_42[iVar0];
			Global_CF9D.f_D9[iVar0 /*3*/][1] = Global_19B04.f_5037.f_4D[iVar0];
			Global_CF9D.f_F8[iVar0 /*3*/][1] = Global_19B04.f_5037.f_58[iVar0];
		}
		iVar0++;
	}
}

void func_71(int iParam0)//Position - 0x480E
{
	int iVar0;
	
	iVar0 = Global_CF95[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x3A57956BCE003880(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x3A57956BCE003880(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x3A57956BCE003880(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_72(int iParam0)//Position - 0x4868
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_75(129, 0, -1, 1);
		return;
	}
	bVar0 = false;
	if (!unk_0x7AF0088ABFA713B6())
	{
		if (unk_0xFA30DFD0084E92FE(Global_19B04.f_5037.f_1D7, iParam0))
		{
			bVar0 = true;
			unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_5037.f_1D7), iParam0);
		}
	}
	else if (unk_0xFA30DFD0084E92FE(Global_19B04.f_5037.f_1D7, iParam0) || unk_0xFA30DFD0084E92FE(Global_200000[func_74() /*12171*/].f_1E08.f_A, iParam0))
	{
		bVar0 = true;
		unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_5037.f_1D7), iParam0);
		unk_0x7CB6FD92BE491AD9(&(Global_200000[func_74() /*12171*/].f_1E08.f_A), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x2E94302CFF011F2E("COUP_RED");
		unk_0xC9C304D0AABE1335(func_73(iParam0));
		unk_0x7BB0762D8C75A3C7(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_73(int iParam0)//Position - 0x493E
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		default:
	}
	return "";
}

int func_74()//Position - 0x49C5
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_75(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x49D2
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
		iParam2 = func_76();
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

int func_76()//Position - 0x4EEC
{
	return Global_1407E0;
}

void func_77(int iParam0)//Position - 0x4EF8
{
	func_98(93, iParam0);
	func_98(29, iParam0);
	func_98(30, iParam0);
}

bool func_78(int iParam0)//Position - 0x4F18
{
	if (iParam0 == 8)
	{
		return func_79(129, -1, -1);
	}
	if (!unk_0x7AF0088ABFA713B6())
	{
		return unk_0xFA30DFD0084E92FE(Global_19B04.f_5037.f_1D7, iParam0);
	}
	return unk_0xFA30DFD0084E92FE(Global_200000[func_74() /*12171*/].f_1E08.f_A, iParam0);
}

int func_79(int iParam0, int iParam1, int iParam2)//Position - 0x4F66
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_76();
	}
	iVar1 = func_81(iParam0, iParam1);
	uVar2 = func_80(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDAB376DC6F83D68C(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_80(int iParam0)//Position - 0x4FA3
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

int func_81(int iParam0, int iParam1)//Position - 0x528F
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_76();
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

int func_82(bool bParam0)//Position - 0x555C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x6D5CBCB6411EDE89(27))
	{
		return 0;
	}
	if (unk_0x6CB99B97664C3727(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x6CB99B97664C3727(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x6CB99B97664C3727(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x6CB99B97664C3727(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x3A57956BCE003880(joaat("num_cash_spent"), iVar1, 1);
		func_96(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_83(27, 1);
	return 1;
}

int func_83(int iParam0, int iParam1)//Position - 0x5613
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_84(iParam0, iParam1);
}

int func_84(int iParam0, int iParam1)//Position - 0x562E
{
	if (func_309(14) && !func_95(iParam0))
	{
		return 0;
	}
	if (unk_0x6D5CBCB6411EDE89(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_63B4 != 0 && !Global_11542)
	{
		return 0;
	}
	if (func_94(&Global_411EB6))
	{
		if (func_92(&Global_411EB6, iParam0))
		{
			return 0;
		}
		if (func_85(&Global_411EB6, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xE07F36ACFF1AA002(iParam0))
		{
			return 0;
		}
		if (unk_0x6D5CBCB6411EDE89(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_85(var uParam0, int iParam1)//Position - 0x56CB
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x6D5CBCB6411EDE89(iParam1))
	{
		return 0;
	}
	if (func_309(14) && !func_95(iParam1))
	{
		return 0;
	}
	if (func_92(uParam0, iParam1))
	{
		return 0;
	}
	if (func_91(uParam0) < 0f)
	{
		func_90(uParam0, 0);
	}
	func_88(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_86(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_86(var uParam0, int iParam1)//Position - 0x577C
{
	int iVar0;
	
	if (unk_0x6D5CBCB6411EDE89(iParam1))
	{
		return 0;
	}
	if (func_309(14) && !func_95(iParam1))
	{
		return 0;
	}
	if (func_92(uParam0, iParam1))
	{
		return 0;
	}
	if (func_91(uParam0) < 0f)
	{
		func_90(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_87(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_87(var uParam0, int iParam1)//Position - 0x57F7
{
	return (*uParam0)[iParam1] == 78;
}

void func_88(var uParam0)//Position - 0x5808
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_89(uParam0, iVar0);
		iVar0++;
	}
	func_90(uParam0, (Global_411EB5 - 0.5f));
}

void func_89(var uParam0, int iParam1)//Position - 0x583C
{
	(*uParam0)[iParam1] = 78;
}

void func_90(var uParam0, float fParam1)//Position - 0x584C
{
	if (fParam1 == 0f)
	{
		uParam0->f_50 = 0f;
	}
	else
	{
		uParam0->f_50 = fParam1;
	}
}

float func_91(var uParam0)//Position - 0x5869
{
	return uParam0->f_50;
}

bool func_92(var uParam0, int iParam1)//Position - 0x5875
{
	return func_93(uParam0, iParam1) != -1;
}

int func_93(var uParam0, int iParam1)//Position - 0x5887
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_94(var uParam0)//Position - 0x58B4
{
	return uParam0->f_4F == 1;
}

int func_95(int iParam0)//Position - 0x58C2
{
	switch (iParam0)
	{
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
		
		default:
	}
	return 0;
}

int func_96(int iParam0, int iParam1)//Position - 0x5912
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x5FB6117CEABC82E7(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x1DE7859F3CC60466(iParam0, iParam1);
	}
	return 0;
}

void func_97(int iParam0, int iParam1)//Position - 0x5963
{
	int iVar0;
	
	unk_0x6CB99B97664C3727(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x3A57956BCE003880(iParam0, iVar0, 1);
}

void func_98(int iParam0, int iParam1)//Position - 0x5986
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_C9FD[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x7AF0088ABFA713B6())
	{
		return;
	}
	if (Global_C9FD[iParam0 /*7*/])
	{
		unk_0x6CB99B97664C3727(Global_C9FD[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x3A57956BCE003880(Global_C9FD[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_99()//Position - 0x59E3
{
	int iVar0;
	
	if (unk_0x7E3A4CFA5545546C())
	{
		unk_0x6CB99B97664C3727(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_CF95[0] == iVar0)
		{
			Global_CF95[0] = iVar0;
		}
		unk_0x6CB99B97664C3727(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_CF95[1] == iVar0)
		{
			Global_CF95[1] = iVar0;
		}
		unk_0x6CB99B97664C3727(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_CF95[2] == iVar0)
		{
			Global_CF95[2] = iVar0;
		}
	}
}

int func_100()//Position - 0x5A58
{
	func_101();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_101()//Position - 0x5A71
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_104(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_103(unk_0xBC25C936A095B5BA());
			if (func_102(iVar0) && (!func_309(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_102(Global_19B04.f_932.f_21B.f_10CD))
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

bool func_102(int iParam0)//Position - 0x5B6E
{
	return iParam0 < 3;
}

int func_103(int iParam0)//Position - 0x5B7A
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_104(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_104(int iParam0)//Position - 0x5BB7
{
	if (func_102(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_105()//Position - 0x5BE1
{
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
	}
	func_293(&(Local_66.f_1D6), 2048);
	unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
	unk_0xF3F01A78937DC905(0f);
	unk_0x2B9AEC08E469E384(0f, 1065353216);
	func_173(23, 0);
	Local_66.f_66.f_25 = 0;
	unk_0x7CB6FD92BE491AD9(&(Local_66.f_A2.f_12), 1);
	if (unk_0xEF0E25DA0CB6E8FF(iLocal_118))
	{
		unk_0x4EC087603E1DEF9C(iLocal_118, 0);
	}
	unk_0x062C9995BFD27B2A(false, false, 3000, 1, 0, 0);
}

void func_106()//Position - 0x5C59
{
	char* sVar0;
	
	unk_0xD55638CE45B2B948(2, 193);
	unk_0xD55638CE45B2B948(2, 202);
	unk_0xD55638CE45B2B948(2, 188);
	unk_0xD55638CE45B2B948(2, 187);
	unk_0xD55638CE45B2B948(2, 189);
	unk_0xD55638CE45B2B948(2, 190);
	if (func_109())
	{
		Local_66.f_66.f_25 = 0;
		func_39(&(Local_66.f_66.f_35));
		Local_66.f_66.f_17 = (Local_66.f_66.f_17 - 1);
		if (Local_66.f_66.f_17 < 0)
		{
			Local_66.f_66.f_17 = (Local_66.f_66.f_18 - 1);
		}
		unk_0xC4BA30B532FE260F(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", true);
		func_155(Local_66.f_66.f_17, 1, 1);
		sVar0 = func_147(Local_66.f_66.f_17);
		Local_66.f_66.f_29 = 0;
		Local_66.f_66.f_2A = 0;
		if (unk_0x0F6F4C227FB5DD52(sVar0))
		{
			func_154(sVar0, 0, 0);
		}
	}
	if (func_108())
	{
		Local_66.f_66.f_25 = 0;
		func_39(&(Local_66.f_66.f_35));
		Local_66.f_66.f_17++;
		if (Local_66.f_66.f_17 > (Local_66.f_66.f_18 - 1))
		{
			Local_66.f_66.f_17 = 0;
		}
		unk_0xC4BA30B532FE260F(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", true);
		func_155(Local_66.f_66.f_17, 1, 1);
		sVar0 = func_147(Local_66.f_66.f_17);
		Local_66.f_66.f_29 = 0;
		Local_66.f_66.f_2A = 0;
		if (unk_0x0F6F4C227FB5DD52(sVar0))
		{
			func_154(sVar0, 0, 0);
		}
	}
	if (!Local_66.f_66.f_29)
	{
		Local_66.f_66.f_28 = func_107(func_103(unk_0xBC25C936A095B5BA())) >= func_160(Local_66.f_66.f_17);
		Local_66.f_66.f_29 = 1;
	}
	if (!Local_66.f_66.f_2A)
	{
		Local_66.f_66.f_2B = unk_0x8D66276473ABD7CC(unk_0xBC25C936A095B5BA()) < unk_0x0992793998FBCE2B(unk_0xBC25C936A095B5BA());
		Local_66.f_66.f_2A = 1;
	}
	if (Local_66.f_66.f_25)
	{
		if (func_40(&(Local_66.f_66.f_35)) < 3f)
		{
			if (Local_66.f_66.f_2C)
			{
				func_154("SNK_BOUGHT", 0, 0);
			}
			else if (!Local_66.f_66.f_28)
			{
				func_154("SNK_AFFORD", 0, 0);
			}
			else if (!Local_66.f_66.f_2B)
			{
				func_154("SNK_NEEDED", 0, 0);
			}
		}
		else
		{
			Local_66.f_66.f_25 = 0;
			Local_66.f_66.f_2C = 0;
			func_39(&(Local_66.f_66.f_35));
			sVar0 = func_147(Local_66.f_66.f_17);
			if (unk_0x0F6F4C227FB5DD52(sVar0))
			{
				func_154(sVar0, 0, 0);
			}
		}
	}
}

int func_107(int iParam0)//Position - 0x5E78
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

int func_108()//Position - 0x5ED0
{
	float fVar0;
	
	fVar0 = unk_0x5F9521C8EE73F79F(2, 219);
	if ((fVar0 > 0.8f || unk_0x8FCEEB789599BD9B(2, 187)) || unk_0x694514BD37EC4E94(2, 242))
	{
		if (!func_14(&iLocal_115))
		{
			func_11(&iLocal_115);
			return 1;
		}
		else if (func_8(&iLocal_115) > 0.25f)
		{
			func_12(&iLocal_115);
			return 1;
		}
	}
	else if (func_14(&iLocal_115))
	{
		func_39(&iLocal_115);
	}
	return 0;
}

int func_109()//Position - 0x5F4F
{
	float fVar0;
	
	fVar0 = unk_0x5F9521C8EE73F79F(2, 219);
	if ((fVar0 < -0.8f || unk_0x8FCEEB789599BD9B(2, 188)) || unk_0x694514BD37EC4E94(2, 241))
	{
		if (!func_14(&iLocal_112))
		{
			func_11(&iLocal_112);
			return 1;
		}
		else if (func_8(&iLocal_112) > 0.25f)
		{
			func_12(&iLocal_112);
			return 1;
		}
	}
	else if (func_14(&iLocal_112))
	{
		func_39(&iLocal_112);
	}
	return 0;
}

void func_110(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)//Position - 0x5FCE
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
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	vector3 vVar38;
	bool bVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	float fVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	int iVar53;
	bool bVar54;
	float fVar55;
	float fVar56;
	float fVar57;
	float fVar58;
	int iVar59;
	int iVar60;
	float fVar61;
	float fVar62;
	float fVar63;
	char cVar64[64];
	char cVar65[64];
	float fVar66;
	int iVar67;
	float fVar68;
	float fVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	char cVar75[16];
	float fVar76;
	float fVar77;
	float fVar78;
	float fVar79;
	float fVar80;
	
	if (!func_58(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_144(0, bParam6))
	{
		return;
	}
	unk_0xC2EAD30963BDAA47(76, 84);
	unk_0xF6A6FFB73848BF82(-0.05f, -0.05f, 0f, 0f);
	fVar56 = 0f;
	fVar57 = 0f;
	if (Global_43C1)
	{
		if (func_142(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar56 = fVar37;
			fVar57 = fVar36;
			fVar56 = (fVar56 + 0f);
		}
		else
		{
			Global_43C1 = 0;
		}
	}
	if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_1)) == unk_0x56BEECB328B6D29D("HIDE"))
	{
		fVar58 = Global_43BF;
	}
	else
	{
		fVar58 = (((Global_43BF + fVar56) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_43C0;
	}
	fVar61 = 1f;
	if (bParam7)
	{
		unk_0x1BBB0A5225346008(&iVar59, &iVar60);
		fVar62 = unk_0x3771EE4CB542D71E(0);
		if (func_141())
		{
			iVar59 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar60) * fVar62));
		}
		fVar63 = (SYSTEM::TO_FLOAT(iVar59) / SYSTEM::TO_FLOAT(iVar60));
		fVar61 = (fVar63 / fVar62);
		if (func_141())
		{
			fVar61 = 1f;
		}
		iVar59 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar59) / fVar61));
		iVar60 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar60) / fVar61));
	}
	else
	{
		unk_0x7A569F3885B2E08A(&iVar59, &iVar60);
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_43C1.f_15DE)
		{
			if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_1)) == unk_0x56BEECB328B6D29D("HIDE"))
			{
				fVar49 = Global_43BF;
			}
			else
			{
				if (Global_43C1)
				{
					StringCopy(&cVar64, func_140(29), 64);
					StringCopy(&cVar65, func_137(29, 1), 64);
					if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_1A3F[29 /*16*/])) == -1487683087)
					{
						func_136(Global_43BE, Global_43BF, fParam5, (fVar56 - 0f), 0, 0, 0, 255);
						unk_0x51DA985AC0B70E2E(&cVar64, &cVar65, (Global_43BE + (fParam5 * 0.5f)), (Global_43BF + ((fVar56 - 0f) * 0.5f)), fVar57, (fVar56 - 0f), 0f, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0x51DA985AC0B70E2E(&cVar64, &cVar65, (Global_43BE + (fParam5 * 0.5f)), (Global_43BF + ((fVar56 - 0f) * 0.5f)), fParam5, (fVar56 - 0f), 0f, 255, 255, 255, 255, 0);
					}
				}
				if (Global_43C1.f_1EDD)
				{
					iVar1 = Global_43C1.f_1ED9;
					iVar2 = Global_43C1.f_1EDA;
					iVar3 = Global_43C1.f_1EDB;
					iVar4 = Global_43C1.f_1EDC;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_136(Global_43BE, (Global_43BF + fVar56), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_43BF + fVar56) + 0.034722f) + 0f);
				if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_1)) != 0)
				{
					func_135();
					unk_0x8B371195127AACF2(&(Global_43C1.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_43C1.f_44)
					{
						if (Global_43C1.f_5[iVar14] == 2)
						{
							unk_0xAA5C5BF0489E5553(Global_43C1.f_A[iVar15]);
							iVar15++;
						}
						else if (Global_43C1.f_5[iVar14] == 3)
						{
							unk_0x3AE7CB4034BE212F(Global_43C1.f_E[iVar16], Global_43C1.f_12[iVar16]);
							iVar16++;
						}
						else if (Global_43C1.f_5[iVar14] == 1)
						{
							unk_0xC9C304D0AABE1335(&(Global_43C1.f_16[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_43C1.f_5[iVar14] == 8)
						{
							unk_0xC9C304D0AABE1335(&(Global_43C1.f_16[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_43C1.f_5[iVar14] == 5)
						{
							unk_0x607C19B90D297FE2(&(Global_43C1.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_43C1.f_5[iVar14] == 6)
						{
							unk_0xC9C304D0AABE1335(&(Global_43C1.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_43C1.f_5[iVar14] == 7)
						{
							unk_0x607C19B90D297FE2(&(Global_43C1.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_43C1.f_5[iVar14] == 9)
						{
							unk_0x607C19B90D297FE2(&(Global_43C1.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0x3A8B9C7B1C825123((Global_43BE + 0.00390625f), ((Global_43BF + fVar56) + 0.00416664f), 0);
				}
				if (Global_43C1.f_15E1 > Global_43C1.f_13E7)
				{
					if (Global_43C1.f_15E4 != 0)
					{
						func_135();
						func_133((((Global_43BE + fParam5) - 0.00390625f) - func_134("CM_ITEM_COUNT", Global_43C1.f_15E4, Global_43C1.f_15E3)), ((Global_43BF + fVar56) + 0.00416664f), "CM_ITEM_COUNT", Global_43C1.f_15E4, Global_43C1.f_15E3);
					}
				}
			}
			iVar6 = Global_43C1.f_15E5;
			iVar9 = 0;
			fVar66 = fVar49;
			if (Global_43C1.f_1EE7)
			{
				iVar1 = Global_43C1.f_1EE3;
				iVar2 = Global_43C1.f_1EE4;
				iVar3 = Global_43C1.f_1EE5;
				iVar4 = Global_43C1.f_1EE6;
			}
			else
			{
				unk_0xE45648BDBF3441F5(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_43C1.f_13E7 && iVar6 <= Global_43C1.f_13E0)
			{
				if (iVar6 >= 0)
				{
					if (Global_43C1.f_14EB[iVar6])
					{
						if (Global_43C1.f_146A[iVar6] && iVar6 != Global_43C1.f_15E5)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar55 = 0.034722f;
						if (Global_43C1.f_15EC[iVar6] != 0f)
						{
							fVar55 = Global_43C1.f_15EC[iVar6];
						}
						fVar49 = (fVar49 + fVar55);
						iVar9++;
					}
				}
				iVar6++;
			}
			if (bParam3)
			{
				if (iVar9 <= 1)
				{
					fVar55 = 0.034722f;
					fVar49 = (fVar49 + fVar55);
					iVar9++;
					if (Global_43C1.f_13E0 <= 1)
					{
						Global_43C1.f_13E0++;
					}
					iVar53 = 1;
				}
			}
			unk_0x51DA985AC0B70E2E("CommonMenu", "Gradient_Bgd", (Global_43BE + (fParam5 * 0.5f)), ((fVar66 + ((fVar49 - fVar66) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar66), 0f, 255, 255, 255, 255, 0);
			if (Global_43C1.f_15E1 > Global_43C1.f_13E7)
			{
				if (Global_43C1.f_1EEC)
				{
					iVar1 = Global_43C1.f_1EE8;
					iVar2 = Global_43C1.f_1EE9;
					iVar3 = Global_43C1.f_1EEA;
					iVar4 = Global_43C1.f_1EEB;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_136(Global_43BE, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				vVar38 = { unk_0x9893E000F1F078E7("CommonMenu", "shop_arrows_upANDdown") };
				vVar38.x = (vVar38.x * (0.5f / fVar61));
				vVar38.y = (vVar38.y * (0.5f / fVar61));
				if (Global_43C1.f_1EF9)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0xE45648BDBF3441F5(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x51DA985AC0B70E2E("CommonMenu", "shop_arrows_upANDdown", (Global_43BE + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((vVar38.x / 1280f) * fVar61), ((vVar38.y / 720f) * fVar61), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_11D2)) != 0 && Global_43C1.f_121C != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_43BE + 0.0046875f);
				if (Global_43C1.f_121E != 0)
				{
					func_142(Global_43C1.f_121E, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_43BE + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_132(fVar40);
				unk_0xD8C1258D4AB3DD08(&(Global_43C1.f_11D2));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_43C1.f_1218)
				{
					if (Global_43C1.f_11D6[iVar14] == 2)
					{
						unk_0xAA5C5BF0489E5553(Global_43C1.f_11DB[iVar15]);
						iVar15++;
					}
					else if (Global_43C1.f_11D6[iVar14] == 3)
					{
						unk_0x3AE7CB4034BE212F(Global_43C1.f_11DF[iVar16], Global_43C1.f_11E3[iVar16]);
						iVar16++;
					}
					else if (Global_43C1.f_11D6[iVar14] == 1)
					{
						unk_0xC9C304D0AABE1335(&(Global_43C1.f_11E7[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_43C1.f_11D6[iVar14] == 5)
					{
						unk_0x607C19B90D297FE2(&(Global_43C1.f_11E7[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_43C1.f_11D6[iVar14] == 6)
					{
						unk_0xC9C304D0AABE1335(&(Global_43C1.f_11E7[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_43C1.f_11D6[iVar14] == 7)
					{
						unk_0x607C19B90D297FE2(&(Global_43C1.f_11E7[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_43C1.f_11D6[iVar14] == 9)
					{
						unk_0x607C19B90D297FE2(&(Global_43C1.f_11E7[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xD7347ECB614BEFFC(fVar40, (fVar49 + 0.00277776f));
				unk_0xE45648BDBF3441F5(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_136(Global_43BE, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_43C1.f_1EF1)
				{
					iVar1 = Global_43C1.f_1EED;
					iVar2 = Global_43C1.f_1EEE;
					iVar3 = Global_43C1.f_1EEF;
					iVar4 = Global_43C1.f_1EF0;
				}
				else
				{
					unk_0xE45648BDBF3441F5(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x51DA985AC0B70E2E("CommonMenu", "Gradient_Bgd", (Global_43BE + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x60F548525BE58E47(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x60F548525BE58E47(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_132(fVar40);
				unk_0x8B371195127AACF2(&(Global_43C1.f_11D2));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_43C1.f_1218)
				{
					if (Global_43C1.f_11D6[iVar14] == 2)
					{
						unk_0xAA5C5BF0489E5553(Global_43C1.f_11DB[iVar15]);
						iVar15++;
					}
					else if (Global_43C1.f_11D6[iVar14] == 3)
					{
						unk_0x3AE7CB4034BE212F(Global_43C1.f_11DF[iVar16], Global_43C1.f_11E3[iVar16]);
						iVar16++;
					}
					else if (Global_43C1.f_11D6[iVar14] == 1)
					{
						unk_0xC9C304D0AABE1335(&(Global_43C1.f_11E7[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_43C1.f_11D6[iVar14] == 5)
					{
						unk_0x607C19B90D297FE2(&(Global_43C1.f_11E7[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_43C1.f_11D6[iVar14] == 6)
					{
						unk_0xC9C304D0AABE1335(&(Global_43C1.f_11E7[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_43C1.f_11D6[iVar14] == 7)
					{
						unk_0x607C19B90D297FE2(&(Global_43C1.f_11E7[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_43C1.f_11D6[iVar14] == 9)
					{
						unk_0x607C19B90D297FE2(&(Global_43C1.f_11E7[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_43C1.f_11D6[iVar14] == 8)
					{
						unk_0xC9C304D0AABE1335(&(Global_43C1.f_11E7[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x3A8B9C7B1C825123(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_43C1.f_121E != 0)
				{
					func_142(Global_43C1.f_121E, 1, 1, &fVar36, &fVar37, bParam7);
					func_131(Global_43C1.f_121E, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0x51DA985AC0B70E2E(func_140(Global_43C1.f_121E), func_137(Global_43C1.f_121E, 1), ((Global_43BE + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
				}
				fVar49 = (fVar49 + (((unk_0x60F548525BE58E47(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_43C1.f_121C > 0)
				{
					if ((unk_0x105601648511CC64() - Global_43C1.f_121D) > Global_43C1.f_121C)
					{
						StringCopy(&(Global_43C1.f_11D2), "", 16);
						Global_43C1.f_121C = -1;
					}
				}
			}
			if (unk_0x56BEECB328B6D29D(&(Global_41188A.f_15)) != 0 && Global_41188A.f_41 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_43BE + 0.0046875f);
				if (Global_41188A.f_43 != 0)
				{
					func_142(Global_41188A.f_43, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_43BE + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_132(fVar40);
				unk_0xD8C1258D4AB3DD08(&(Global_41188A.f_15));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_41188A.f_3D)
				{
					if (Global_41188A.f_19[iVar14] == 2)
					{
						unk_0xAA5C5BF0489E5553(Global_41188A.f_1E[iVar15]);
						iVar15++;
					}
					else if (Global_41188A.f_19[iVar14] == 3)
					{
						unk_0x3AE7CB4034BE212F(Global_41188A.f_22[iVar16], Global_41188A.f_26[iVar16]);
						iVar16++;
					}
					else if (Global_41188A.f_19[iVar14] == 1)
					{
						unk_0xC9C304D0AABE1335(&(Global_41188A.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_41188A.f_19[iVar14] == 5)
					{
						unk_0x607C19B90D297FE2(&(Global_41188A.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_41188A.f_19[iVar14] == 6)
					{
						unk_0xC9C304D0AABE1335(&(Global_41188A.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_41188A.f_19[iVar14] == 7)
					{
						unk_0x607C19B90D297FE2(&(Global_41188A.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_41188A.f_19[iVar14] == 9)
					{
						unk_0x607C19B90D297FE2(&(Global_41188A.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_41188A.f_19[iVar14] == 8)
					{
						unk_0xC9C304D0AABE1335(&(Global_41188A.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xD7347ECB614BEFFC(fVar40, (fVar49 + 0.00277776f));
				unk_0xE45648BDBF3441F5(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_136(Global_43BE, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_43C1.f_1EF1)
				{
					iVar1 = Global_43C1.f_1EED;
					iVar2 = Global_43C1.f_1EEE;
					iVar3 = Global_43C1.f_1EEF;
					iVar4 = Global_43C1.f_1EF0;
				}
				else
				{
					unk_0xE45648BDBF3441F5(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x51DA985AC0B70E2E("CommonMenu", "Gradient_Bgd", (Global_43BE + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x60F548525BE58E47(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x60F548525BE58E47(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_132(fVar40);
				unk_0x8B371195127AACF2(&(Global_41188A.f_15));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_41188A.f_3D)
				{
					if (Global_41188A.f_19[iVar14] == 2)
					{
						unk_0xAA5C5BF0489E5553(Global_41188A.f_1E[iVar15]);
						iVar15++;
					}
					else if (Global_41188A.f_19[iVar14] == 3)
					{
						unk_0x3AE7CB4034BE212F(Global_41188A.f_22[iVar16], Global_41188A.f_26[iVar16]);
						iVar16++;
					}
					else if (Global_41188A.f_19[iVar14] == 1)
					{
						unk_0xC9C304D0AABE1335(&(Global_41188A.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_41188A.f_19[iVar14] == 8)
					{
						unk_0xC9C304D0AABE1335(&(Global_41188A.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_41188A.f_19[iVar14] == 5)
					{
						unk_0x607C19B90D297FE2(&(Global_41188A.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_41188A.f_19[iVar14] == 6)
					{
						unk_0xC9C304D0AABE1335(&(Global_41188A.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_41188A.f_19[iVar14] == 7)
					{
						unk_0x607C19B90D297FE2(&(Global_41188A.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_41188A.f_19[iVar14] == 9)
					{
						unk_0x607C19B90D297FE2(&(Global_41188A.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x3A8B9C7B1C825123(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_41188A.f_43 != 0)
				{
					func_142(Global_41188A.f_43, 1, 1, &fVar36, &fVar37, bParam7);
					func_131(Global_41188A.f_43, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0x51DA985AC0B70E2E(func_140(Global_41188A.f_43), func_137(Global_41188A.f_43, 1), ((Global_43BE + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
				}
				fVar49 = (fVar49 + (((unk_0x60F548525BE58E47(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_41188A.f_41 > 0)
				{
					if ((unk_0x105601648511CC64() - Global_41188A.f_42) > Global_41188A.f_41)
					{
						StringCopy(&(Global_41188A.f_15), "", 16);
						Global_41188A.f_41 = -1;
					}
				}
			}
			func_124(iVar59, iParam1, 0, 0, 0, 0, bParam4, 1, 0);
			unk_0xC2EAD30963BDAA47(76, 84);
			unk_0xF6A6FFB73848BF82(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_43C1.f_15DE)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar67 = Global_43C1.f_13E0;
			if (Global_43C1.f_15DF)
			{
				iVar67 = (Global_43C1.f_15E2 - 1);
			}
			fVar68 = 0f;
			fVar69 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar67)
			{
				fVar55 = 0.034722f;
				if (Global_43C1.f_15EC[iVar6] != 0f)
				{
					fVar55 = Global_43C1.f_15EC[iVar6];
				}
				if (Global_43C1.f_15DF)
				{
					iVar6 = Global_43C1.f_1D80[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_43C1.f_15E5 && iVar9 < Global_43C1.f_13E7)
				{
					bVar33 = true;
					if (Global_43C1.f_15E6 == iVar6)
					{
						fVar69 = fVar68;
					}
					if (Global_43C1.f_146A[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar58 + fVar68) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_43C1.f_1672[iVar6] = fVar35;
				fVar34 = (Global_43BE + 0.0046875f);
				bVar39 = false;
				bVar32 = Global_43C1.f_15E6 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar70 = 255;
					iVar71 = 255;
					iVar72 = 255;
					iVar73 = 255;
					if (Global_43C1.f_1EF3)
					{
						unk_0xE45648BDBF3441F5(Global_43C1.f_1EF2, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					else
					{
						unk_0xE45648BDBF3441F5(1, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					unk_0x51DA985AC0B70E2E("CommonMenu", "Gradient_Nav", (Global_43BE + (fParam5 * 0.5f)), (((fVar58 + fVar69) + (0.00277776f * IntToFloat(iVar12))) + (fVar55 * 0.5f)), fParam5, fVar55, 0f, iVar70, iVar71, iVar72, iVar73, 0);
					Global_43C1.f_1670 = fVar35;
				}
				if (iVar53 && iVar7 == iVar67)
				{
					func_122(bVar32, 1, 0, 0, 0, 0, 0);
					unk_0x8B371195127AACF2("DFLT_MNU_OPT");
					unk_0x3A8B9C7B1C825123(fVar34, fVar35, 0);
					bVar39 = true;
				}
				else
				{
					iVar8 = 0;
					while (iVar8 < Global_43C1.f_13E8)
					{
						if (unk_0xFA30DFD0084E92FE(Global_43C1.f_135F[iVar6], iVar8) || Global_43C1.f_133E[iVar8] == 5)
						{
							if (Global_43C1.f_15DF)
							{
								iVar19 = Global_43C1.f_1D90[((iVar9 * Global_43C1.f_13E8) + iVar8)];
								iVar20 = Global_43C1.f_1DB9[((iVar9 * Global_43C1.f_13E8) + iVar8)];
								iVar21 = Global_43C1.f_1DE2[((iVar9 * Global_43C1.f_13E8) + iVar8)];
								iVar22 = Global_43C1.f_1E0B[((iVar9 * Global_43C1.f_13E8) + iVar8)];
								iVar23 = Global_43C1.f_1E34[((iVar9 * Global_43C1.f_13E8) + iVar8)];
							}
							else
							{
								Global_43C1.f_1D90[((iVar9 * Global_43C1.f_13E8) + iVar8)] = iVar19;
								Global_43C1.f_1DB9[((iVar9 * Global_43C1.f_13E8) + iVar8)] = iVar20;
								Global_43C1.f_1DE2[((iVar9 * Global_43C1.f_13E8) + iVar8)] = iVar21;
								Global_43C1.f_1E0B[((iVar9 * Global_43C1.f_13E8) + iVar8)] = iVar22;
								Global_43C1.f_1E34[((iVar9 * Global_43C1.f_13E8) + iVar8)] = iVar23;
							}
							iVar74 = 0;
							bVar54 = false;
							if (Global_43C1.f_16F6[0] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_43C1.f_16F3[0])
								{
									bVar54 = true;
									iVar74 = 0;
								}
							}
							if (Global_43C1.f_16F6[1] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_43C1.f_16F3[1])
								{
									bVar54 = true;
									iVar74 = 1;
								}
							}
							if (Global_43C1.f_1344[iVar8] != -1f)
							{
								fVar34 = ((Global_43BE + 0.0046875f) + Global_43C1.f_1344[iVar8]);
							}
							if ((iVar8 < 4 && Global_43C1.f_1344[iVar8 + 1] != -1f) && fVar34 < Global_43C1.f_1344[iVar8 + 1])
							{
								fVar44 = (Global_43C1.f_1344[iVar8 + 1] - fVar34);
							}
							else
							{
								fVar44 = (((Global_43BE + Global_43C0) - 0.0046875f) - fVar34);
							}
							if ((Global_43C1.f_1351[iVar8] && Global_43C1.f_166D) && bVar32)
							{
								bVar52 = true;
							}
							else
							{
								bVar52 = false;
							}
							switch (Global_43C1.f_133E[iVar8])
							{
								case 0:
									break;
								
								case 1:
									iVar24 = iVar19;
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_43C1.f_15DF)
										{
											fVar41 = 0f;
											fVar42 = 0f;
											iVar25 = 0;
											iVar26 = 0;
											iVar27 = 0;
											iVar28 = 0;
											iVar29 = 0;
											if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
											{
												bVar50 = false;
												bVar51 = false;
												iVar14 = 0;
												while (iVar14 < 4)
												{
													if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 5 || Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 8)
													{
														bVar51 = true;
													}
													else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 9)
													{
														bVar50 = true;
													}
													iVar14++;
												}
												func_122(bVar32, Global_43C1.f_64A[iVar24], Global_43C1.f_74B[iVar24], bVar54, iVar74, bVar51, bVar50);
												unk_0xE746379C2AF24EF6(&(Global_43C1.f_49[iVar24 /*6*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
													{
														unk_0xC9C304D0AABE1335(&(Global_43C1.f_49[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
													{
														unk_0xC9C304D0AABE1335(&(Global_43C1.f_49[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 5)
												{
													if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
													{
														unk_0x607C19B90D297FE2(&(Global_25827C[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 6)
												{
													if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
													{
														unk_0xC9C304D0AABE1335(&(Global_25827C[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 7)
												{
													if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
													{
														unk_0x607C19B90D297FE2(&(Global_25827C[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 9)
												{
													if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
													{
														unk_0x607C19B90D297FE2(&(Global_25827C[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 2)
												{
													if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
													{
														unk_0xAA5C5BF0489E5553(Global_43C1.f_F4E[(iVar20 + iVar26)]);
													}
													iVar26++;
												}
												else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 3)
												{
													if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
													{
														unk_0x3AE7CB4034BE212F(Global_43C1.f_104F[(iVar21 + iVar27)], Global_43C1.f_10D0[(iVar21 + iVar27)]);
													}
													iVar27++;
												}
												else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 4)
												{
													iVar28++;
												}
												iVar14++;
											}
											if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
											{
												fVar41 = unk_0x2207C0EA517B975D(1);
											}
											if (iVar28 > 0)
											{
												iVar14 = 0;
												while (iVar14 < iVar28)
												{
													if (func_142(Global_43C1.f_1151[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar42 = (fVar42 + fVar36);
														if (iVar14 > 0)
														{
															fVar42 = (fVar42 - (0.00078125f * 4f));
														}
														if (Global_43C1.f_1151[(iVar22 + iVar14)] == 2 || Global_43C1.f_1151[(iVar22 + iVar14)] == 48)
														{
															fVar42 = (fVar42 - (0.00078125f * 5f));
														}
													}
													iVar14++;
												}
											}
											fVar40 = 0f;
											if (Global_43C1.f_1359[iVar8] == 2)
											{
												fVar40 = (fVar40 + ((fVar44 - (fVar41 + fVar42)) + (0.00078125f * 1f)));
											}
											else if (Global_43C1.f_1359[iVar8] == 0)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - ((fVar41 + fVar42) * 0.5f)));
											}
											Global_43C1.f_1E5D[((iVar9 * Global_43C1.f_13E8) + iVar8)] = fVar40;
											Global_43C1.f_1E86[((iVar9 * Global_43C1.f_13E8) + iVar8)] = fVar41;
											Global_43C1.f_1EAF[((iVar9 * Global_43C1.f_13E8) + iVar8)] = fVar42;
										}
										else
										{
											fVar40 = Global_43C1.f_1E5D[((iVar9 * Global_43C1.f_13E8) + iVar8)];
											fVar41 = Global_43C1.f_1E86[((iVar9 * Global_43C1.f_13E8) + iVar8)];
											fVar42 = Global_43C1.f_1EAF[((iVar9 * Global_43C1.f_13E8) + iVar8)];
										}
										if (bVar52)
										{
											if (func_142(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_43C1.f_1359[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_142(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_131(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0x51DA985AC0B70E2E(func_140(26), func_137(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
											if (func_142(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_142(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_131(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0x51DA985AC0B70E2E(func_140(27), func_137(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar31 = 0;
										if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
										{
											bVar50 = false;
											bVar51 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 5 || Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 8)
												{
													bVar51 = true;
												}
												else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 9)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											func_122(bVar32, Global_43C1.f_64A[iVar24], Global_43C1.f_74B[iVar24], bVar54, 0, bVar51, bVar50);
											if (Global_43C1.f_1EF7 && Global_43C1.f_1EF8 == iVar6)
											{
												func_121(bVar32);
											}
											unk_0x8B371195127AACF2(&(Global_43C1.f_49[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
												{
													unk_0xC9C304D0AABE1335(&(Global_43C1.f_49[(iVar24 + iVar25) /*6*/]));
												}
												iVar31 = 1;
											}
											else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
												{
													unk_0xC9C304D0AABE1335(&(Global_43C1.f_49[(iVar24 + iVar25) /*6*/]));
												}
												iVar31 = 8;
											}
											else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
												{
													unk_0x607C19B90D297FE2(&(Global_25827C[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 5;
											}
											else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
												{
													unk_0xC9C304D0AABE1335(&(Global_25827C[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 6;
											}
											else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
												{
													unk_0x607C19B90D297FE2(&(Global_25827C[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 7;
											}
											else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 9)
											{
												if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
												{
													unk_0x607C19B90D297FE2(&(Global_25827C[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 9;
											}
											else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
												{
													unk_0xAA5C5BF0489E5553(Global_43C1.f_F4E[(iVar20 + iVar26)]);
												}
												iVar26++;
												iVar31 = 2;
											}
											else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
												{
													unk_0x3AE7CB4034BE212F(Global_43C1.f_104F[(iVar21 + iVar27)], Global_43C1.f_10D0[(iVar21 + iVar27)]);
												}
												iVar27++;
												iVar31 = 3;
											}
											else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 4)
											{
												if (Global_43C1.f_1151[(iVar22 + iVar28)] == 2 || Global_43C1.f_1151[(iVar22 + iVar28)] == 48)
												{
													if (func_142(Global_43C1.f_1151[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar40 = (fVar40 + (fVar36 * 0.5f));
														if (func_142(Global_43C1.f_1151[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_131(Global_43C1.f_1151[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_43C1.f_1359[iVar8] == 2)
															{
																unk_0x51DA985AC0B70E2E(func_140(Global_43C1.f_1151[(iVar22 + iVar28)]), func_137(Global_43C1.f_1151[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0x51DA985AC0B70E2E(func_140(Global_43C1.f_1151[(iVar22 + iVar28)]), func_137(Global_43C1.f_1151[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															fVar40 = (fVar40 + (0.00078125f * 3f));
														}
													}
												}
												iVar28++;
												iVar31 = 4;
											}
											iVar14++;
										}
										if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
										{
											if (iVar31 == 4 && Global_43C1.f_1359[iVar8] == 2)
											{
												unk_0x3A8B9C7B1C825123(((fVar34 + fVar40) + (0.00078125f * 7f)), fVar35, 0);
											}
											else
											{
												unk_0x3A8B9C7B1C825123((fVar34 + fVar40), fVar35, 0);
												if (func_120() && unk_0xB731B8C5BCE89836(joaat("fm_mission_creator")) > 0)
												{
													if (iVar8 == 0)
													{
														func_122(0, Global_43C1.f_64A[iVar24], Global_43C1.f_74B[iVar24], bVar54, 0, bVar51, bVar50);
														StringCopy(&cVar75, "TEST_LABEL", 16);
														fVar76 = 0f;
														fVar77 = 55f;
														fVar78 = 0.0185f;
														fVar79 = 0.004f;
														fVar80 = 0.02f;
														unk_0xB8F3C51875F7BEA3(0f, (0.35f * 0.7f));
														unk_0xCC4FE6A016BA0765(255, 255, 255, 150);
														unk_0xF7EBEC3FF57AEC65((fVar34 - (fVar80 * 0.6f)), (fVar35 + (fVar78 * 0.75f)), 0.0175f, 0.035f, SYSTEM::FLOOR(fVar76), SYSTEM::FLOOR(fVar76), SYSTEM::FLOOR(fVar76), SYSTEM::FLOOR(fVar77), 0);
														unk_0x8B371195127AACF2(&cVar75);
														unk_0xAA5C5BF0489E5553((Global_43C1.f_15E5 + iVar30));
														unk_0x3A8B9C7B1C825123((fVar34 - fVar80), (fVar35 + fVar79), 0);
														iVar30++;
													}
												}
											}
										}
										if (iVar28 > 0)
										{
											fVar40 = (fVar40 + (6f * 0.00078125f));
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (Global_43C1.f_1151[(iVar22 + iVar14)] != 2 && Global_43C1.f_1151[(iVar22 + iVar14)] != 48)
												{
													if (func_142(Global_43C1.f_1151[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar40 = (fVar40 + (fVar36 * 0.5f));
														if (func_142(Global_43C1.f_1151[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_131(Global_43C1.f_1151[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_43C1.f_1151[(iVar22 + iVar14)] == 30)
															{
																unk_0x51DA985AC0B70E2E(func_140(Global_43C1.f_1151[(iVar22 + iVar14)]), func_137(Global_43C1.f_1151[(iVar22 + iVar14)], bVar32), (Global_43BE + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else if (Global_43C1.f_1359[iVar8] == 2)
															{
																unk_0x51DA985AC0B70E2E(func_140(Global_43C1.f_1151[(iVar22 + iVar14)]), func_137(Global_43C1.f_1151[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0x51DA985AC0B70E2E(func_140(Global_43C1.f_1151[(iVar22 + iVar14)]), func_137(Global_43C1.f_1151[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
														}
														fVar40 = (fVar40 + (12f * 0.00078125f));
													}
												}
												iVar14++;
											}
										}
									}
									bVar39 = true;
									iVar19++;
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 1)
										{
											iVar19++;
										}
										else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 8)
										{
											iVar19++;
										}
										else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 2)
										{
											iVar20++;
										}
										else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 3)
										{
											iVar21++;
										}
										else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 4)
										{
											iVar22++;
										}
										else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 5)
										{
											iVar23++;
										}
										else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 6)
										{
											iVar23++;
										}
										else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 7)
										{
											iVar23++;
										}
										else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 9)
										{
											iVar23++;
										}
										iVar14++;
									}
									break;
								
								case 2:
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_43C1.f_15DF)
										{
											func_122(bVar32, Global_43C1.f_64A[iVar24], Global_43C1.f_74B[iVar24], bVar54, 0, 0, 0);
											if (Global_43C1.f_1EF7 && Global_43C1.f_1EF8 == iVar6)
											{
												func_121(bVar32);
											}
											unk_0xE746379C2AF24EF6("NUMBER");
											unk_0xAA5C5BF0489E5553(Global_43C1.f_F4E[iVar20]);
											fVar41 = unk_0x2207C0EA517B975D(1);
											fVar40 = 0f;
											if (Global_43C1.f_1359[iVar8] == 2)
											{
												fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
											}
											else if (Global_43C1.f_1359[iVar8] == 0)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
											}
											Global_43C1.f_1E5D[((iVar9 * Global_43C1.f_13E8) + iVar8)] = fVar40;
											Global_43C1.f_1E86[((iVar9 * Global_43C1.f_13E8) + iVar8)] = fVar41;
										}
										else
										{
											fVar40 = Global_43C1.f_1E5D[((iVar9 * Global_43C1.f_13E8) + iVar8)];
											fVar41 = Global_43C1.f_1E86[((iVar9 * Global_43C1.f_13E8) + iVar8)];
										}
										if (bVar52)
										{
											if (func_142(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_43C1.f_1359[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_142(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_131(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0x51DA985AC0B70E2E(func_140(26), func_137(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
											if (func_142(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_142(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_131(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0x51DA985AC0B70E2E(func_140(27), func_137(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										func_122(bVar32, Global_43C1.f_64A[iVar24], Global_43C1.f_74B[iVar24], bVar54, 0, 0, 0);
										func_119((fVar34 + fVar40), fVar35, "NUMBER", Global_43C1.f_F4E[iVar20], 0);
									}
									bVar39 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_43C1.f_15DF)
										{
											func_122(bVar32, Global_43C1.f_64A[iVar24], Global_43C1.f_74B[iVar24], bVar54, 0, 0, 0);
											if (Global_43C1.f_1EF7 && Global_43C1.f_1EF8 == iVar6)
											{
												func_121(bVar32);
											}
											unk_0xE746379C2AF24EF6("NUMBER");
											unk_0x3AE7CB4034BE212F(Global_43C1.f_104F[iVar21], Global_43C1.f_10D0[iVar21]);
											fVar41 = unk_0x2207C0EA517B975D(1);
											fVar40 = 0f;
											if (Global_43C1.f_1359[iVar8] == 2)
											{
												fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
											}
											else if (Global_43C1.f_1359[iVar8] == 0)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
											}
											Global_43C1.f_1E5D[((iVar9 * Global_43C1.f_13E8) + iVar8)] = fVar40;
											Global_43C1.f_1E86[((iVar9 * Global_43C1.f_13E8) + iVar8)] = fVar41;
										}
										else
										{
											fVar40 = Global_43C1.f_1E5D[((iVar9 * Global_43C1.f_13E8) + iVar8)];
											fVar41 = Global_43C1.f_1E86[((iVar9 * Global_43C1.f_13E8) + iVar8)];
										}
										if (bVar52)
										{
											if (func_142(26, 1, 0, &fVar36, &fVar37, 0))
											{
												if (Global_43C1.f_1359[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_142(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_131(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0x51DA985AC0B70E2E(func_140(26), func_137(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
											if (func_142(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_142(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_131(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0x51DA985AC0B70E2E(func_140(27), func_137(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										func_122(bVar32, Global_43C1.f_64A[iVar24], Global_43C1.f_74B[iVar24], bVar54, 0, 0, 0);
										func_118((fVar34 + fVar40), fVar35, "NUMBER", Global_43C1.f_104F[iVar21], Global_43C1.f_10D0[iVar21]);
									}
									bVar39 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar33)
									{
										if (func_142(Global_43C1.f_1151[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
										{
											if (!Global_43C1.f_15DF)
											{
												fVar42 = fVar36;
												fVar40 = 0f;
												if (Global_43C1.f_1359[iVar8] == 2)
												{
													fVar40 = (fVar40 + ((fVar44 - fVar42) + (0.00078125f * 1f)));
												}
												else if (Global_43C1.f_1359[iVar8] == 0)
												{
													fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar42 * 0.5f)));
												}
												Global_43C1.f_1E5D[((iVar9 * Global_43C1.f_13E8) + iVar8)] = fVar40;
												Global_43C1.f_1EAF[((iVar9 * Global_43C1.f_13E8) + iVar8)] = fVar42;
											}
											else
											{
												fVar40 = Global_43C1.f_1E5D[((iVar9 * Global_43C1.f_13E8) + iVar8)];
												fVar42 = Global_43C1.f_1EAF[((iVar9 * Global_43C1.f_13E8) + iVar8)];
											}
											if (bVar52)
											{
												if (func_142(26, 1, 0, &fVar36, &fVar37, bParam7))
												{
													if (Global_43C1.f_1359[iVar8] == 2)
													{
														fVar40 = (fVar40 - (fVar36 * 2f));
													}
													fVar43 = (fVar36 * 0.5f);
													if (func_142(26, 1, 1, &fVar36, &fVar37, bParam7))
													{
														func_131(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
														unk_0x51DA985AC0B70E2E(func_140(26), func_137(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
												if (func_142(27, 1, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + fVar36);
													fVar43 = (fVar36 * 0.5f);
													if (func_142(27, 1, 1, &fVar36, &fVar37, bParam7))
													{
														func_131(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
														unk_0x51DA985AC0B70E2E(func_140(27), func_137(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
											}
											if (func_142(Global_43C1.f_1151[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_131(Global_43C1.f_1151[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
												unk_0x51DA985AC0B70E2E(func_140(Global_43C1.f_1151[iVar22]), func_137(Global_43C1.f_1151[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), (fVar36 * func_117(Global_43C1.f_1151[iVar22])), (fVar37 * func_117(Global_43C1.f_1151[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, 0);
											}
										}
									}
									bVar39 = true;
									iVar22++;
									break;
								
								case 5:
									bVar39 = true;
									break;
							}
							if (Global_43C1.f_133E[iVar8] == 5)
							{
								if (Global_43C1.f_134A[iVar8] > 0.05f)
								{
									fVar34 = (fVar34 + Global_43C1.f_134A[iVar8]);
								}
								else
								{
									fVar34 = (fVar34 + 0.05f);
								}
							}
							else
							{
								fVar34 = (fVar34 + Global_43C1.f_134A[iVar8]);
								if (Global_43C1.f_1351[iVar8])
								{
									if (func_142(26, 1, 1, &fVar36, &fVar37, bParam7))
									{
										fVar34 = (fVar34 - fVar36);
									}
								}
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_43C1.f_134A[iVar8]);
						}
						iVar8++;
					}
				}
				if (bVar39)
				{
					if (bVar33)
					{
						Global_43C1.f_1D80[iVar9] = iVar6;
						Global_43C1.f_15E7 = iVar6;
						iVar9++;
						if (Global_43C1.f_146A[iVar6])
						{
							iVar13++;
						}
						if (Global_43C1.f_15EC[iVar6] != 0f)
						{
							fVar68 = (fVar68 + Global_43C1.f_15EC[iVar6]);
						}
						else
						{
							fVar68 = (fVar68 + 0.034722f);
						}
					}
					if (!Global_43C1.f_15DE)
					{
						Global_43C1.f_14EB[iVar6] = 1;
						if (Global_43C1.f_13E9[iVar6])
						{
							if (bVar32)
							{
								Global_43C1.f_15E4 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_43C1.f_15E4 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_43C1.f_15DE)
			{
				Global_43C1.f_15E0 = ((fVar58 + fVar68) + (0.00277776f * IntToFloat(iVar12)));
				Global_43C1.f_15E3 = iVar11;
				Global_43C1.f_15E1 = iVar10;
				Global_43C1.f_15DE = 1;
			}
		}
		iVar5++;
	}
	if (!Global_43C1.f_15DF)
	{
		Global_43C1.f_15E2 = iVar9;
		Global_43C1.f_15DF = 1;
	}
	Global_43C1.f_166F = fVar49;
	Global_43C1.f_1671 = unk_0x105601648511CC64();
	unk_0xE7918A3D05166D98(Global_43C1.f_166F);
	if (!Global_43C1.f_1ED8)
	{
		func_112(0);
	}
	Global_43C1.f_1ED8 = 0;
	if (bParam2)
	{
		unk_0x4E0EC60D119222B1(10);
	}
	unk_0x4E0EC60D119222B1(6);
	unk_0x4E0EC60D119222B1(7);
	unk_0x4E0EC60D119222B1(9);
	unk_0x4E0EC60D119222B1(8);
	if (bParam0)
	{
		func_111(1);
	}
	unk_0x2A025E7CEBB76D14();
}

void func_111(int iParam0)//Position - 0x8C31
{
	Global_14D262.f_437 = iParam0;
}

void func_112(int iParam0)//Position - 0x8C42
{
	if (!Global_389D.f_1 == 1)
	{
		if (func_116(0))
		{
			func_113(iParam0);
		}
		unk_0xF0059F27F7BB6680(&Global_93C, 2);
	}
}

void func_113(int iParam0)//Position - 0x8C6B
{
	if (Global_3943)
	{
		func_115(0, 0);
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
	if (!func_114())
	{
		Global_389D.f_1 = 3;
	}
}

int func_114()//Position - 0x8CDB
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_115(bool bParam0, bool bParam1)//Position - 0x8D02
{
	if (bParam0)
	{
		if (func_116(0))
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

int func_116(int iParam0)//Position - 0x8D76
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

float func_117(int iParam0)//Position - 0x8DD0
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 50:
		case 43:
		case 44:
		case 45:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_118(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)//Position - 0x8E3F
{
	unk_0x8B371195127AACF2(sParam2);
	unk_0x3AE7CB4034BE212F(fParam3, iParam4);
	unk_0x3A8B9C7B1C825123(fParam0, fParam1, 0);
}

void func_119(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x8E5E
{
	unk_0x8B371195127AACF2(sParam2);
	unk_0xAA5C5BF0489E5553(iParam3);
	unk_0x3A8B9C7B1C825123(fParam0, fParam1, iParam4);
}

bool func_120()//Position - 0x8E7C
{
	return unk_0x7B2F21BFE86AEB61(-1762644250);
}

void func_121(bool bParam0)//Position - 0x8E8D
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0xE45648BDBF3441F5(Global_43C1.f_1EF4[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0xE45648BDBF3441F5(Global_43C1.f_1EF4[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0xCC4FE6A016BA0765(iVar0, iVar1, iVar2, 255);
}

void func_122(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x8ED3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_123(Global_43C1.f_16F6[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0xE45648BDBF3441F5(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			unk_0xCC4FE6A016BA0765(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0xE45648BDBF3441F5(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0xCC4FE6A016BA0765(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0xE45648BDBF3441F5(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0xCC4FE6A016BA0765(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0xCC4FE6A016BA0765(155, 155, 155, 255);
		}
		else
		{
			unk_0xCC4FE6A016BA0765(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0xCC4FE6A016BA0765(0, 0, 0, SYSTEM::FLOOR((255f * 0.8f)));
		}
		else
		{
			unk_0xE45648BDBF3441F5(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0xCC4FE6A016BA0765(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0xCC4FE6A016BA0765(155, 155, 155, 255);
	}
	else
	{
		unk_0xCC4FE6A016BA0765(155, 155, 155, 255);
	}
	unk_0xB8F3C51875F7BEA3(0f, 0.35f);
	unk_0x567A3300A78B3D65(1);
	if (bParam5)
	{
		unk_0xB8F3C51875F7BEA3(0f, 0.425f);
		unk_0xC8793973D4960AC4(4);
	}
	else if (bParam6)
	{
		unk_0xB8F3C51875F7BEA3(0f, 0.425f);
		unk_0xC8793973D4960AC4(6);
	}
	else
	{
		unk_0xC8793973D4960AC4(0);
	}
	unk_0x666751E43D377EAA(0f, 1f);
	unk_0x8F62A12BC2768BE8(0);
	unk_0x08F1F5EC48E158AB(0, 0, 0, 0, 0);
	unk_0x1EC7F2EE7CC55F66(0, 0, 0, 0, 0);
}

void func_123(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x9081
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_124(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x930B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_58(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_144(bParam4, bParam8))
	{
		return;
	}
	if (func_129())
	{
		return;
	}
	if (unk_0xF32BA80A2DED1FC6())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_127(unk_0xB5CEFD608600A09F(), 0))
		{
			return;
		}
	}
	if (unk_0x8ACB0C3FACC09467())
	{
		if (unk_0x0F8865E539C1FCE8() == 0 || unk_0xF32BA80A2DED1FC6())
		{
			return;
		}
	}
	if (Global_43C1.f_121F != 0)
	{
		if (unk_0x8A0D8839261BAEEF(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_43C1.f_121F)
			{
				if (Global_43C1.f_1320[iVar1] != 358)
				{
					StringCopy(&(Global_43C1.f_1221[iVar1 /*16*/]), unk_0xE57EAD1FEA2A6FAF(2, Global_43C1.f_1320[iVar1], true), 64);
				}
				else if (Global_43C1.f_132D[iVar1] != 32)
				{
					StringCopy(&(Global_43C1.f_1221[iVar1 /*16*/]), unk_0xC7CF72D26EA6A227(2, Global_43C1.f_132D[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_43C1.f_1220 = 0;
		}
		if (!Global_43C1.f_1220)
		{
			unk_0x29CD142125FE177B(Global_43C1.f_159A[iVar0 /*10*/], "CLEAR_ALL");
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(Global_43C1.f_159A[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0xD44E04EBBDC4CE88((1f - (Global_43C1.f_1357 / 100f)));
			unk_0xF9FBC2F3F73D94C9();
			if (unk_0x8ACB0C3FACC09467())
			{
				unk_0x29CD142125FE177B(Global_43C1.f_159A[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0x5E5DBD0A6623969E(true);
				unk_0xF9FBC2F3F73D94C9();
			}
			iVar1 = 0;
			while (iVar1 < Global_43C1.f_121F)
			{
				if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_12E2[iVar1 /*4*/])) != unk_0x56BEECB328B6D29D("PREV"))
				{
					unk_0x29CD142125FE177B(Global_43C1.f_159A[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0x1E1FB49121565EB6(iVar1);
					func_126(&(Global_43C1.f_1221[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x56BEECB328B6D29D(&(Global_43C1.f_12E2[iVar2 /*4*/])) == unk_0x56BEECB328B6D29D("PREV"))
					{
						func_126(&(Global_43C1.f_1221[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_43C1.f_1313[iVar1] == -1)
					{
						func_125(&(Global_43C1.f_12E2[iVar1 /*4*/]));
					}
					else
					{
						unk_0x57016C44F10111F0(&(Global_43C1.f_12E2[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0x4C36886AAFD04CF8(iParam2, 70);
						}
						else
						{
							unk_0xAA5C5BF0489E5553(iParam2);
						}
						unk_0x64989E60CF560CA1();
					}
					if (unk_0x8ACB0C3FACC09467())
					{
						if (Global_43C1.f_1320[iVar1] != 358 && unk_0xFA30DFD0084E92FE(Global_43C1.f_133A, iVar1))
						{
							unk_0x5E5DBD0A6623969E(true);
							unk_0x1E1FB49121565EB6(Global_43C1.f_1320[iVar1]);
						}
						else
						{
							unk_0x5E5DBD0A6623969E(false);
							unk_0x1E1FB49121565EB6(358);
						}
					}
					unk_0xF9FBC2F3F73D94C9();
				}
				iVar1++;
			}
			if (unk_0x56BEECB328B6D29D(&(Global_41188A.f_10)) != unk_0x56BEECB328B6D29D(""))
			{
				unk_0x29CD142125FE177B(Global_43C1.f_159A[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0x1E1FB49121565EB6(Global_43C1.f_121F);
				func_126(&Global_41188A);
				if (Global_41188A.f_14 == -1)
				{
					func_125(&(Global_41188A.f_10));
				}
				else
				{
					unk_0x57016C44F10111F0(&(Global_41188A.f_10));
					if (bParam5)
					{
						unk_0x4C36886AAFD04CF8(iParam2, 70);
					}
					else
					{
						unk_0xAA5C5BF0489E5553(iParam2);
					}
					unk_0x64989E60CF560CA1();
				}
				unk_0xF9FBC2F3F73D94C9();
			}
			unk_0x29CD142125FE177B(Global_43C1.f_159A[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0x1E1FB49121565EB6(0);
			unk_0x1E1FB49121565EB6(0);
			unk_0x1E1FB49121565EB6(0);
			unk_0x1E1FB49121565EB6(80);
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(Global_43C1.f_159A[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_43C1.f_1358)
			{
				unk_0x1E1FB49121565EB6(1);
			}
			else
			{
				unk_0x1E1FB49121565EB6(0);
			}
			unk_0xF9FBC2F3F73D94C9();
			Global_43C1.f_1220 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_43C1.f_121F)
		{
			if (Global_43C1.f_1313[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0x29CD142125FE177B(Global_43C1.f_159A[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0x1E1FB49121565EB6(iVar1);
					unk_0x57016C44F10111F0(&(Global_43C1.f_12E2[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0x4C36886AAFD04CF8(iParam2, 70);
					}
					else
					{
						unk_0xAA5C5BF0489E5553(iParam2);
					}
					unk_0x64989E60CF560CA1();
					unk_0xF9FBC2F3F73D94C9();
				}
			}
			iVar1++;
		}
		if (Global_41188A.f_14 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0x29CD142125FE177B(Global_43C1.f_159A[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0x1E1FB49121565EB6(iVar1);
				unk_0x57016C44F10111F0(&(Global_41188A.f_10));
				if (bParam5)
				{
					unk_0x4C36886AAFD04CF8(iParam2, 70);
				}
				else
				{
					unk_0xAA5C5BF0489E5553(iParam2);
				}
				unk_0x64989E60CF560CA1();
				unk_0xF9FBC2F3F73D94C9();
			}
		}
		unk_0xC2EAD30963BDAA47(76, 66);
		unk_0xF6A6FFB73848BF82(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_43C1.f_1EFB)
			{
				unk_0x6DB77F071B43C870(15, 0f, -0.0375f);
				Global_43C1.f_1EFB = 1;
			}
		}
		else if (Global_43C1.f_1EFB)
		{
			unk_0xC0404835F30391BB(15);
			Global_43C1.f_1EFB = 0;
		}
		unk_0x2A025E7CEBB76D14();
		if (Global_43C1.f_133D)
		{
			unk_0xC2EAD30963BDAA47(82, 66);
			unk_0xF6A6FFB73848BF82(0f, 0f, 0f, 0f);
			unk_0x65E432C782E7E702(Global_43C1.f_159A[iVar0 /*10*/], Global_43C1.f_133B, Global_43C1.f_133C, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0x2A025E7CEBB76D14();
		}
		else
		{
			unk_0x4B6031094354FED6(Global_43C1.f_159A[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_125(char* sParam0)//Position - 0x97E6
{
	unk_0x57016C44F10111F0(sParam0);
	unk_0x64989E60CF560CA1();
}

void func_126(char* sParam0)//Position - 0x97F8
{
	unk_0xCB30200B8055CA57(sParam0);
}

bool func_127(int iParam0, int iParam1)//Position - 0x9806
{
	bool bVar0;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		bVar0 = func_128(-1, 0) == 8;
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

int func_128(int iParam0, bool bParam1)//Position - 0x9851
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_76();
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

int func_129()//Position - 0x9892
{
	vector3 vVar0;
	
	if (Global_389D.f_1 > 3)
	{
		return 1;
	}
	if (func_130())
	{
		vVar0 = { 0f, -500f, 0f };
		unk_0x652515566BB40BA9(&vVar0);
		if (Global_3866 == 0)
		{
			if (vVar0.y > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (vVar0.y > -101f)
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

int func_130()//Position - 0x9900
{
	if (unk_0xB731B8C5BCE89836(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_131(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x991A
{
	unk_0xE45648BDBF3441F5(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 50:
		case 39:
		case 40:
		case 38:
		case 43:
		case 44:
		case 45:
		case 49:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 51:
			*iParam5 = 100;
			break;
	}
}

void func_132(float fParam0)//Position - 0x99ED
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xE45648BDBF3441F5(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0xC8793973D4960AC4(0);
	unk_0xB8F3C51875F7BEA3(0f, 0.35f);
	unk_0xB1B2D2C9D47D1278(2);
	unk_0xCC4FE6A016BA0765(iVar0, iVar1, iVar2, iVar3);
	unk_0x666751E43D377EAA(fParam0, ((Global_43BE + Global_43C0) - 0.0046875f));
	unk_0x8F62A12BC2768BE8(0);
	unk_0x08F1F5EC48E158AB(0, 0, 0, 0, 0);
	unk_0x1EC7F2EE7CC55F66(0, 0, 0, 0, 0);
}

void func_133(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x9A4C
{
	unk_0x8B371195127AACF2(sParam2);
	unk_0xAA5C5BF0489E5553(iParam3);
	unk_0xAA5C5BF0489E5553(iParam4);
	unk_0x3A8B9C7B1C825123(fParam0, fParam1, 0);
}

float func_134(char* sParam0, int iParam1, int iParam2)//Position - 0x9A6F
{
	if (!unk_0xEAEFBBEC1AEA464B(sParam0))
	{
		if (unk_0x56BEECB328B6D29D(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_135();
	unk_0xE746379C2AF24EF6(sParam0);
	unk_0xAA5C5BF0489E5553(iParam1);
	unk_0xAA5C5BF0489E5553(iParam2);
	return unk_0x2207C0EA517B975D(1);
}

void func_135()//Position - 0x9AB1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xE45648BDBF3441F5(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_43C1.f_1EE2)
	{
		iVar0 = Global_43C1.f_1EDE;
		iVar1 = Global_43C1.f_1EDF;
		iVar2 = Global_43C1.f_1EE0;
		iVar3 = Global_43C1.f_1EE1;
	}
	unk_0xC8793973D4960AC4(0);
	unk_0xB8F3C51875F7BEA3(0f, 0.35f);
	unk_0xCC4FE6A016BA0765(iVar0, iVar1, iVar2, iVar3);
	unk_0x666751E43D377EAA((Global_43BE + 0.0046875f), ((Global_43BE + Global_43C0) - 0.0046875f));
	unk_0x8F62A12BC2768BE8(0);
	unk_0x08F1F5EC48E158AB(0, 0, 0, 0, 0);
	unk_0x1EC7F2EE7CC55F66(0, 0, 0, 0, 0);
}

void func_136(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x9B3B
{
	unk_0xF7EBEC3FF57AEC65((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

var func_137(int iParam0, bool bParam1)//Position - 0x9B6A
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0xF1734B55490E9045(&(Global_43C1.f_1A3F[iParam0 /*16*/])))
	{
		if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_1A3F[iParam0 /*16*/])) == -1487683087)
		{
			Var2 = { func_139(unk_0xB5CEFD608600A09F()) };
			if (unk_0xB5AD4F878C27B0F4(&Var2, &uVar1))
			{
				return func_138(&uVar1);
			}
		}
		else
		{
			return func_138(&(Global_43C1.f_1A3F[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 48:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 49:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 51:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_138(var uParam0)//Position - 0x9FBA
{
	return uParam0;
}

struct<13> func_139(int iParam0)//Position - 0x9FC4
{
	struct<13> Var0;
	
	unk_0xB7DBA2C6D2C3C41A(iParam0, &Var0, 13);
	return Var0;
}

char* func_140(int iParam0)//Position - 0x9FDB
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0xF1734B55490E9045(&(Global_43C1.f_16FE[iParam0 /*16*/])))
	{
		if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_16FE[iParam0 /*16*/])) == -1487683087)
		{
			Var1 = { func_139(unk_0xB5CEFD608600A09F()) };
			unk_0xB5AD4F878C27B0F4(&Var1, &uVar0);
			return func_138(&uVar0);
		}
		else
		{
			return func_138(&(Global_43C1.f_16FE[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

int func_141()//Position - 0xA050
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0x1BBB0A5225346008(&iVar0, &iVar1);
	fVar2 = (SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

int func_142(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)//Position - 0xA082
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	StringCopy(&cVar0, func_140(iParam0), 64);
	StringCopy(&cVar1, func_137(iParam0, bParam1), 64);
	if (unk_0x56BEECB328B6D29D(&cVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0x1BBB0A5225346008(&iVar2, &iVar3);
			fVar5 = unk_0x3771EE4CB542D71E(0);
			if (func_141())
			{
				iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar5));
			}
			fVar6 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_141())
			{
				fVar4 = 1f;
			}
			if (unk_0xB731B8C5BCE89836(joaat("director_mode")) > 0)
			{
				unk_0x7A569F3885B2E08A(&iVar2, &iVar3);
			}
			iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar2) / fVar4));
			iVar3 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) / fVar4));
		}
		else
		{
			unk_0x7A569F3885B2E08A(&iVar2, &iVar3);
		}
		vVar7 = { unk_0x9893E000F1F078E7(&cVar0, &cVar1) };
		vVar7.x = (vVar7.x * (func_143(iParam0) / fVar4));
		vVar7.y = (vVar7.y * (func_143(iParam0) / fVar4));
		if (!bParam2)
		{
			vVar7.x = (vVar7.x - 2f);
			vVar7.y = (vVar7.y - 2f);
		}
		if (iParam0 == 30)
		{
			vVar7.x = 288f;
			vVar7.y = 106f;
		}
		if (iParam0 == 29 && unk_0x56BEECB328B6D29D(&(Global_43C1.f_1A3F[29 /*16*/])) == -1487683087)
		{
			vVar7.x = 106f;
			vVar7.y = 106f;
		}
		*fParam3 = ((vVar7.x / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((vVar7.y / IntToFloat(iVar3)) / (vVar7.x / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x877E3741B282A35F() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_43C0)
			{
				*fParam4 = (*fParam4 * (Global_43C0 / *fParam3));
				*fParam3 = Global_43C0;
			}
		}
		return 1;
	}
	return 0;
}

float func_143(int iParam0)//Position - 0xA233
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 49:
			return 0.5f;
			break;
	}
	return 1f;
}

int func_144(bool bParam0, bool bParam1)//Position - 0xA2D2
{
	if (Global_252E21.f_760.f_2B0 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x726D9204B160D23E() || (func_146(8, -1) && func_145() != 64)) || (unk_0x0352C1B6B66A87AC() != 0 && !bParam1)) || (unk_0x7930B3E9C919E90F() && !bParam0)) || unk_0x4F2BFB7C2A730EC7()) || Global_11646) || Global_43C1.f_1EFA) || unk_0x18158A50125911B6()) || Global_16B4F.f_569)
	{
		return 0;
	}
	return 1;
}

int func_145()//Position - 0xA36F
{
	return Global_140815;
}

bool func_146(int iParam0, int iParam1)//Position - 0xA37B
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

char* func_147(int iParam0)//Position - 0xA3B6
{
	switch (iParam0)
	{
		case 0:
			return "SNK_ITEM1_D";
		
		case 1:
			return "SNK_ITEM2_D";
		
		case 2:
			return "SNK_ITEM3_D";
		
		default:
	}
	return "";
}

int func_148()//Position - 0xA3EF
{
	if (unk_0x50465D2C022B9E04(2))
	{
		if (Global_4118D6 > -1)
		{
			if (unk_0x694514BD37EC4E94(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_149(int iParam0, int iParam1, bool bParam2)//Position - 0xA416
{
	if (!unk_0x50465D2C022B9E04(2))
	{
		return 0;
	}
	if (unk_0xE186ACC7BE9B244E() || unk_0x18158A50125911B6())
	{
		return 0;
	}
	if (bParam2)
	{
		unk_0x08009E53F6E7E15C();
	}
	if (Global_4118D6 == -6)
	{
		unk_0x5C26A2F0EACA52AB(4);
		if (iParam0 && unk_0x8FCEEB789599BD9B(2, 237))
		{
			return 1;
		}
		else
		{
			Global_4118D6 = -1;
			return 0;
		}
	}
	if (((Global_4118D6 > -1 || Global_4118D6 == -3) || Global_4118D6 == -2) || unk_0x1753B0F1C41FE93F())
	{
		unk_0x5C26A2F0EACA52AB(1);
		return 0;
	}
	if (Global_4118D6 == -1 && iParam0)
	{
		if (unk_0x8FCEEB789599BD9B(2, 237))
		{
			unk_0x5C26A2F0EACA52AB(4);
			Global_4118D6 = -6;
			return 1;
		}
		else
		{
			unk_0x5C26A2F0EACA52AB(3);
			return 0;
		}
	}
	unk_0x5C26A2F0EACA52AB(1);
	return 0;
}

void func_150(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0xA4F6
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
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar6 = (0.034722f / 2f);
	iVar13 = -1;
	if (!unk_0x50465D2C022B9E04(2))
	{
		Global_4118D6 = -1;
		return;
	}
	unk_0xA561536D61421F90(1);
	fVar0 = Global_43BE;
	fVar2 = (fVar0 + Global_43C0);
	fVar3 = Global_43C1.f_15E0;
	fVar1 = (Global_43C1.f_15E0 - (IntToFloat(Global_43C1.f_15E2) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_43C1.f_15E2 < 1)
	{
		fVar1 = (Global_43C1.f_15E0 - 0.034722f);
	}
	unk_0xC2EAD30963BDAA47(76, 84);
	unk_0xF6A6FFB73848BF82(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	unk_0xC498840061F88232(fVar0, fVar1, &fVar0, &fVar1);
	unk_0xC498840061F88232(fVar2, fVar3, &fVar2, &fVar3);
	unk_0x2A025E7CEBB76D14();
	func_152();
	if (Global_4118D6 == -6)
	{
		return;
	}
	Global_4118D6 = -1;
	fVar7 = Global_4118D0;
	fVar8 = Global_4118D1;
	if (Global_43C1.f_15E3 > Global_43C1.f_15E2)
	{
		if (((Global_4118D0 >= fVar0 && Global_4118D0 <= fVar2) && Global_4118D1 >= fVar3) && Global_4118D1 < (fVar3 + fVar6))
		{
			Global_4118D6 = -2;
			if (bParam3)
			{
				func_151(0);
			}
			return;
		}
		if (((Global_4118D0 >= fVar0 && Global_4118D0 <= fVar2) && Global_4118D1 >= (fVar3 + fVar6)) && Global_4118D1 < (fVar3 + 0.034722f))
		{
			Global_4118D6 = -3;
			if (bParam3)
			{
				func_151(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = SYSTEM::FLOOR((fVar9 / 0.034722f));
		if (Global_43C1.f_15E3 == -1)
		{
			Global_4118D6 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_43C1.f_15E2);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				unk_0xC2EAD30963BDAA47(76, 84);
				unk_0xF6A6FFB73848BF82(-0.05f, -0.05f, 0f, 0f);
				func_136(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_43C0, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				unk_0x2A025E7CEBB76D14();
			}
		}
		Global_4118D6 = Global_43C1.f_1D80[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4118D6 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_4118D6 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_4118D6 = -4;
		return;
	}
	Global_4118D6 = -1;
}

void func_151(bool bParam0)//Position - 0xA7A2
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_43BE;
	fVar1 = Global_43C1.f_15E0;
	unk_0xC2EAD30963BDAA47(76, 84);
	unk_0xF6A6FFB73848BF82(-0.05f, -0.05f, 0f, 0f);
	if (Global_4118D6 == -2)
	{
		func_136(fVar0, fVar1, Global_43C0, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4118D6 == -3)
	{
		func_136(fVar0, (fVar1 + fVar2), Global_43C0, fVar2, 255, 255, 255, iVar3);
	}
	unk_0x2A025E7CEBB76D14();
}

void func_152()//Position - 0xA82B
{
	Global_4118D2 = Global_4118D0;
	Global_4118D3 = Global_4118D1;
	Global_4118D0 = unk_0xBCEB785249D7E5BE(2, 239);
	Global_4118D1 = unk_0xBCEB785249D7E5BE(2, 240);
	Global_4118D4 = (Global_4118D0 - Global_4118D2);
	Global_4118D5 = (Global_4118D1 - Global_4118D3);
}

void func_153(int iParam0, char* sParam1, int iParam2, bool bParam3)//Position - 0xA873
{
	char* sVar0;
	
	sVar0 = unk_0xE57EAD1FEA2A6FAF(2, iParam0, true);
	if (Global_43C1.f_121F >= 12)
	{
		StringCopy(&Global_41188A, sVar0, 64);
		StringCopy(&(Global_41188A.f_10), sParam1, 16);
		Global_41188A.f_14 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		unk_0xF0059F27F7BB6680(&(Global_43C1.f_133A), Global_43C1.f_121F);
	}
	StringCopy(&(Global_43C1.f_1221[Global_43C1.f_121F /*16*/]), sVar0, 64);
	StringCopy(&(Global_43C1.f_12E2[Global_43C1.f_121F /*4*/]), sParam1, 16);
	Global_43C1.f_1313[Global_43C1.f_121F] = iParam2;
	Global_43C1.f_1320[Global_43C1.f_121F] = iParam0;
	Global_43C1.f_132D[Global_43C1.f_121F] = 32;
	Global_43C1.f_121F++;
}

void func_154(char* sParam0, int iParam1, int iParam2)//Position - 0xA928
{
	int iVar0;
	
	StringCopy(&(Global_43C1.f_11D2), sParam0, 16);
	Global_43C1.f_1218 = 0;
	Global_43C1.f_1219 = 0;
	Global_43C1.f_121A = 0;
	Global_43C1.f_121B = 0;
	Global_43C1.f_121C = iParam1;
	Global_43C1.f_121D = unk_0x105601648511CC64();
	Global_43C1.f_121E = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_43C1.f_11D6[iVar0] = 0;
		iVar0++;
	}
}

void func_155(var uParam0, bool bParam1, int iParam2)//Position - 0xA98D
{
	int iVar0;
	int iVar1;
	
	Global_43C1.f_15E6 = uParam0;
	Global_43C1.f_166D = iParam2;
	if (Global_43C1.f_15E6 < Global_43C1.f_15E5)
	{
		Global_43C1.f_15E5 = Global_43C1.f_15E6;
	}
	else if ((Global_43C1.f_15DF && Global_43C1.f_15E6 > Global_43C1.f_15E7) || (!Global_43C1.f_15DF && Global_43C1.f_15E6 >= (Global_43C1.f_15E5 + Global_43C1.f_13E7)))
	{
		iVar0 = Global_43C1.f_15E5;
		while (iVar0 <= Global_43C1.f_15E6)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_43C1.f_135F[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_43C1.f_13E7 && Global_43C1.f_15E5 < 128)
		{
			Global_43C1.f_15E5++;
			iVar1 = 0;
			iVar0 = Global_43C1.f_15E5;
			while (iVar0 <= Global_43C1.f_15E6)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_43C1.f_135F[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_43C1.f_15DE = 0;
	Global_43C1.f_15DF = 0;
	if (bParam1)
	{
		StringCopy(&(Global_43C1.f_11D2), "", 16);
		StringCopy(&(Global_41188A.f_15), "", 16);
	}
}

void func_156(int iParam0)//Position - 0xAADD
{
	Global_43C1.f_15E5 = iParam0;
}

void func_157(var uParam0, bool bParam1)//Position - 0xAAED
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_43C1.f_13E4 >= 256)
	{
		return;
	}
	if (Global_43C1.f_15EA >= 4)
	{
		return;
	}
	if (Global_43C1.f_15EB != 1)
	{
		return;
	}
	if (Global_43C1.f_15EA >= Global_43C1.f_15E8)
	{
		return;
	}
	Global_43C1.f_F4E[Global_43C1.f_13E4] = uParam0;
	Global_43C1.f_13E4++;
	Global_43C1.f_84C[Global_43C1.f_15E9 /*5*/][Global_43C1.f_15EA] = 2;
	Global_43C1.f_15EA++;
	if (Global_43C1.f_15EA >= Global_43C1.f_15E8)
	{
		fVar0 = func_159();
		if (Global_43C1.f_1351[Global_43C1.f_13E1] && Global_43C1.f_15EA == Global_43C1.f_15E8)
		{
			func_142(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_43C1.f_134A[(Global_43C1.f_13E1 - 1)])
		{
			Global_43C1.f_134A[(Global_43C1.f_13E1 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_43C1.f_15EA >= Global_43C1.f_15E8)
		{
			fVar3 = func_158();
			if (fVar3 > Global_43C1.f_15EC[Global_43C1.f_13E0])
			{
				Global_43C1.f_15EC[Global_43C1.f_13E0] = fVar3;
			}
		}
	}
}

float func_158()//Position - 0xAC28
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_43C1.f_15EA)
	{
		if (Global_43C1.f_84C[Global_43C1.f_15E9 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_43C1.f_1151[((Global_43C1.f_13E6 - iVar1) + iVar0)] != 0)
		{
			if (func_142(Global_43C1.f_1151[((Global_43C1.f_13E6 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > unk_0x60F548525BE58E47(0.35f, 0))
	{
		return fVar2;
	}
	return unk_0x60F548525BE58E47(0.35f, 0);
}

float func_159()//Position - 0xACDB
{
	float fVar0;
	float fVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar7 = 0;
	while (iVar7 < Global_43C1.f_15EA)
	{
		if (Global_43C1.f_84C[Global_43C1.f_15E9 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_43C1.f_84C[Global_43C1.f_15E9 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_43C1.f_84C[Global_43C1.f_15E9 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_43C1.f_84C[Global_43C1.f_15E9 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_43C1.f_84C[Global_43C1.f_15E9 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_43C1.f_84C[Global_43C1.f_15E9 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_43C1.f_84C[Global_43C1.f_15E9 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_43C1.f_84C[Global_43C1.f_15E9 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		else if (Global_43C1.f_84C[Global_43C1.f_15E9 /*5*/][iVar7] == 9)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_122(0, 1, 0, 0, 0, iVar6 > 0, 0);
	if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[Global_43C1.f_15E9 /*6*/])) != 0)
	{
		unk_0xE746379C2AF24EF6(&(Global_43C1.f_49[Global_43C1.f_15E9 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_43C1.f_15EA)
	{
		if (Global_43C1.f_84C[Global_43C1.f_15E9 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[Global_43C1.f_15E9 /*6*/])) != 0)
			{
				unk_0xC9C304D0AABE1335(&(Global_43C1.f_49[(Global_43C1.f_15E9 + iVar8) /*6*/]));
			}
		}
		else if (Global_43C1.f_84C[Global_43C1.f_15E9 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[Global_43C1.f_15E9 /*6*/])) != 0)
			{
				unk_0xC9C304D0AABE1335(&(Global_43C1.f_49[(Global_43C1.f_15E9 + iVar8) /*6*/]));
			}
		}
		else if (Global_43C1.f_84C[Global_43C1.f_15E9 /*5*/][iVar7] == 2)
		{
			if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[Global_43C1.f_15E9 /*6*/])) != 0)
			{
				unk_0xAA5C5BF0489E5553(Global_43C1.f_F4E[((Global_43C1.f_13E4 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_43C1.f_84C[Global_43C1.f_15E9 /*5*/][iVar7] == 3)
		{
			if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[Global_43C1.f_15E9 /*6*/])) != 0)
			{
				unk_0x3AE7CB4034BE212F(Global_43C1.f_104F[((Global_43C1.f_13E5 - iVar4) + iVar10)], Global_43C1.f_10D0[((Global_43C1.f_13E5 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_43C1.f_84C[Global_43C1.f_15E9 /*5*/][iVar7] == 5)
		{
			if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[Global_43C1.f_15E9 /*6*/])) != 0)
			{
				unk_0x607C19B90D297FE2(&(Global_25827C[((Global_43C1.f_13E3 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_43C1.f_84C[Global_43C1.f_15E9 /*5*/][iVar7] == 6)
		{
			if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[Global_43C1.f_15E9 /*6*/])) != 0)
			{
				unk_0xC9C304D0AABE1335(&(Global_25827C[((Global_43C1.f_13E3 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_43C1.f_84C[Global_43C1.f_15E9 /*5*/][iVar7] == 7)
		{
			if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[Global_43C1.f_15E9 /*6*/])) != 0)
			{
				unk_0x607C19B90D297FE2(&(Global_25827C[((Global_43C1.f_13E3 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_43C1.f_84C[Global_43C1.f_15E9 /*5*/][iVar7] == 9)
		{
			if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[Global_43C1.f_15E9 /*6*/])) != 0)
			{
				unk_0x607C19B90D297FE2(&(Global_25827C[((Global_43C1.f_13E3 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[Global_43C1.f_15E9 /*6*/])) != 0)
	{
		fVar0 = unk_0x2207C0EA517B975D(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_43C1.f_1151[((Global_43C1.f_13E6 - iVar5) + iVar7)] != 0)
		{
			func_142(Global_43C1.f_1151[((Global_43C1.f_13E6 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

int func_160(int iParam0)//Position - 0xB122
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 2;
		
		case 2:
			return 4;
		
		default:
	}
	return 0;
}

void func_161(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)//Position - 0xB150
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_43C1.f_13E0 > iParam0)
	{
		return;
	}
	if (Global_43C1.f_13E0 >= 128)
	{
		return;
	}
	if (Global_43C1.f_13E2 >= 256)
	{
		return;
	}
	if (Global_43C1.f_15EA < Global_43C1.f_15E8)
	{
		return;
	}
	if (Global_43C1.f_13E0 != iParam0)
	{
		Global_43C1.f_13E0 = iParam0;
		Global_43C1.f_13E1 = 0;
	}
	iVar0 = Global_43C1.f_133E[Global_43C1.f_13E1];
	if (iVar0 != 1)
	{
		while (Global_43C1.f_13E1 < 4 && iVar0 != 1)
		{
			Global_43C1.f_13E1++;
			iVar0 = Global_43C1.f_133E[Global_43C1.f_13E1];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_43C1.f_49[Global_43C1.f_13E2 /*6*/]), sParam1, 24);
	if (!unk_0xF1734B55490E9045(sParam1) && !unk_0x0F6F4C227FB5DD52(sParam1))
	{
	}
	Global_43C1.f_64A[Global_43C1.f_13E2] = bParam3;
	Global_43C1.f_74B[Global_43C1.f_13E2] = iParam4;
	Global_43C1.f_13E2++;
	if (!bParam3)
	{
		func_164(Global_43C1.f_13E0, 1);
	}
	else
	{
		func_164(Global_43C1.f_13E0, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_163(&(Global_43C1.f_49[Global_43C1.f_13E2 /*6*/]));
		if (Global_43C1.f_1351[Global_43C1.f_13E1])
		{
			func_142(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_43C1.f_134A[Global_43C1.f_13E1])
		{
			Global_43C1.f_134A[Global_43C1.f_13E1] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_162(&(Global_43C1.f_49[Global_43C1.f_13E2 /*6*/]));
			if (fVar4 > Global_43C1.f_15EC[iParam0])
			{
				Global_43C1.f_15EC[iParam0] = fVar4;
			}
		}
	}
	unk_0xF0059F27F7BB6680(&(Global_43C1.f_135F[iParam0]), Global_43C1.f_13E1);
	Global_43C1.f_13E1++;
	Global_43C1.f_15EB = 1;
	Global_43C1.f_15E9 = (Global_43C1.f_13E2 - 1);
	Global_43C1.f_15EA = 0;
	Global_43C1.f_15E8 = iParam2;
}

float func_162(char* sParam0)//Position - 0xB35C
{
	if (!unk_0x0F6F4C227FB5DD52(sParam0))
	{
	}
	return unk_0x60F548525BE58E47(0.35f, 0);
}

float func_163(char* sParam0)//Position - 0xB378
{
	if (!unk_0xEAEFBBEC1AEA464B(sParam0))
	{
		if (unk_0x56BEECB328B6D29D(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_122(0, 1, 0, 0, 0, 0, 0);
	unk_0xE746379C2AF24EF6(sParam0);
	return unk_0x2207C0EA517B975D(1);
}

void func_164(int iParam0, bool bParam1)//Position - 0xB3B5
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
	if (bParam1)
	{
		unk_0xF0059F27F7BB6680(&(Global_43C1.f_16F9[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_43C1.f_16F9[iVar0]), (iParam0 - iVar0 * 32));
	}
}

void func_165()//Position - 0xB401
{
	if (unk_0x8ACB0C3FACC09467())
	{
		unk_0xFCEBCC3D5D7DB96E(0.325f, 0.3f);
	}
}

void func_166(int iParam0, char* sParam1, char* sParam2)//Position - 0xB41F
{
	Global_43C1 = iParam0;
	func_167(29, sParam1, sParam2);
}

void func_167(int iParam0, char* sParam1, char* sParam2)//Position - 0xB436
{
	StringCopy(&(Global_43C1.f_16FE[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_43C1.f_1A3F[iParam0 /*16*/]), sParam2, 64);
}

void func_168(char* sParam0)//Position - 0xB45A
{
	int iVar0;
	
	StringCopy(&(Global_43C1.f_1), sParam0, 16);
	Global_43C1.f_44 = 0;
	Global_43C1.f_45 = 0;
	Global_43C1.f_46 = 0;
	Global_43C1.f_47 = 0;
	Global_43C1.f_48 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_43C1.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_169(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xB4A5
{
	Global_43C1.f_1359[0] = iParam0;
	Global_43C1.f_1359[1] = iParam1;
	Global_43C1.f_1359[2] = iParam2;
	Global_43C1.f_1359[3] = iParam3;
	Global_43C1.f_1359[4] = iParam4;
}

void func_170(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xB4E4
{
	Global_43C1.f_133E[0] = iParam0;
	Global_43C1.f_133E[1] = iParam1;
	Global_43C1.f_133E[2] = iParam2;
	Global_43C1.f_133E[3] = iParam3;
	Global_43C1.f_133E[4] = iParam4;
	Global_43C1.f_13E8 = 0;
	if (iParam0 != 0)
	{
		Global_43C1.f_13E8++;
	}
	if (iParam1 != 0)
	{
		Global_43C1.f_13E8++;
	}
	if (iParam2 != 0)
	{
		Global_43C1.f_13E8++;
	}
	if (iParam3 != 0)
	{
		Global_43C1.f_13E8++;
	}
	if (iParam4 != 0)
	{
		Global_43C1.f_13E8++;
	}
}

void func_171(bool bParam0, bool bParam1)//Position - 0xB58E
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_43C1.f_49[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_43C1.f_84C[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_25827C[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_43C1.f_F4E[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_43C1.f_104F[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_43C1.f_1151[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_43C1.f_135F[iVar0] = 0;
		Global_43C1.f_13E9[iVar0] = 0;
		Global_43C1.f_146A[iVar0] = 0;
		Global_43C1.f_1672[iVar0] = 0f;
		Global_43C1.f_14EB[iVar0] = 0;
		Global_43C1.f_15EC[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_43C1.f_133E[iVar0] = 0;
		Global_43C1.f_134A[iVar0] = 0f;
		Global_43C1.f_1344[iVar0] = -1f;
		Global_43C1.f_1351[iVar0] = 0;
		Global_43C1.f_1359[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_43C1.f_12E2[iVar0 /*4*/]), "", 16);
		Global_43C1.f_1313[iVar0] = -1;
		Global_43C1.f_1320[iVar0] = 358;
		Global_43C1.f_132D[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 52)
	{
		StringCopy(&(Global_43C1.f_16FE[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_43C1.f_1A3F[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_43C1.f_64A[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_41188A.f_10), "", 16);
	Global_41188A.f_14 = -1;
	Global_43C1 = 0;
	Global_43C1.f_13E0 = 0;
	Global_43C1.f_13E1 = 0;
	Global_43C1.f_13E2 = 0;
	Global_43C1.f_13E4 = 0;
	Global_43C1.f_13E5 = 0;
	Global_43C1.f_13E6 = 0;
	Global_43C1.f_13E3 = 0;
	Global_43C1.f_166D = 0;
	Global_43C1.f_15E6 = 0;
	Global_43C1.f_15E5 = 0;
	Global_43C1.f_15E7 = 0;
	StringCopy(&(Global_43C1.f_11D2), "", 16);
	Global_43C1.f_1218 = 0;
	Global_43C1.f_1219 = 0;
	Global_43C1.f_121A = 0;
	Global_43C1.f_121B = 0;
	Global_43C1.f_121C = 0;
	Global_43C1.f_121D = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_43C1.f_11D6[iVar0] = 0;
		iVar0++;
	}
	Global_43C1.f_121E = 0;
	StringCopy(&(Global_41188A.f_15), "", 16);
	Global_41188A.f_3D = 0;
	Global_41188A.f_3E = 0;
	Global_41188A.f_3F = 0;
	Global_41188A.f_40 = 0;
	Global_41188A.f_41 = 0;
	Global_41188A.f_42 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_41188A.f_19[iVar0] = 0;
		iVar0++;
	}
	Global_41188A.f_43 = 0;
	StringCopy(&(Global_43C1.f_1), "", 16);
	Global_43C1.f_1350 = 0f;
	Global_43C1.f_44 = 0;
	Global_43C1.f_45 = 0;
	Global_43C1.f_46 = 0;
	Global_43C1.f_47 = 0;
	Global_43C1.f_48 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_43C1.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_43C1.f_15EB = 0;
	Global_43C1.f_15EA = 0;
	Global_43C1.f_15E8 = 0;
	Global_43C1.f_15E9 = 0;
	Global_43C1.f_121F = 0;
	Global_43C1.f_1220 = 0;
	Global_43C1.f_13E7 = 10;
	Global_43C1.f_13E8 = 0;
	Global_43C1.f_166F = 0f;
	Global_43C1.f_1670 = 0f;
	Global_43C1.f_15DE = 0;
	Global_43C1.f_15DF = 0;
	Global_43C1.f_15E0 = 0f;
	Global_43C1.f_15E1 = 0;
	Global_43C1.f_15E3 = 0;
	Global_43C1.f_15E2 = 0;
	Global_43C1.f_15E4 = 0;
	Global_43C1.f_1EF7 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_43C1.f_16F3[iVar0] = -1;
		Global_43C1.f_16F6[iVar0] = -1;
		iVar0++;
	}
	Global_43C1.f_1357 = 0f;
	Global_43C1.f_133A = 0;
	Global_43C1.f_1358 = 0;
	iVar0 = 0;
	while (iVar0 < Global_43C1.f_16F9)
	{
		Global_43C1.f_16F9[iVar0] = 0;
		iVar0++;
	}
	Global_43C1.f_1EE2 = 0;
	Global_43C1.f_1EDD = 0;
	Global_43C1.f_1EE7 = 0;
	Global_43C1.f_1EEC = 0;
	Global_43C1.f_1EF1 = 0;
	Global_43C1.f_1EF3 = 0;
	Global_43C1.f_1EF9 = 0;
	Global_43BE = 0.05f;
	Global_43BF = 0.05f;
	Global_43C0 = 0.225f;
	fVar2 = unk_0x3771EE4CB542D71E(0);
	if (bParam0)
	{
		Global_43C0 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_43C0 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_43C0 = 0.225f;
	}
}

int func_172(int iParam0, vector3 vParam1, float fParam2, var uParam3, var uParam4, var uParam5)//Position - 0xBA67
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam3 = { unk_0x89D97EB4FAE4A574(vParam1, fParam2, 2.40015f, -7.75244f, 1.0825f) };
			*uParam4 = -4.2069f;
			uParam4->f_1 = -0.027f;
			uParam4->f_2 = (fParam2 + 22.8175f);
			*uParam5 = 32.8283f;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam3 = { unk_0x89D97EB4FAE4A574(vParam1, fParam2, 3.80296f, -5.391f, 1.213f) };
			*uParam4 = -9.3866f;
			uParam4->f_1 = -0.0011f;
			uParam4->f_2 = (fParam2 + 46.9866f);
			*uParam5 = 35f;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam3 = { unk_0x89D97EB4FAE4A574(vParam1, fParam2, 2.97963f, -3.39452f, 0.934498f) };
			*uParam4 = -8.483f;
			uParam4->f_1 = 0.0149f;
			uParam4->f_2 = (fParam2 + 53.5519f);
			*uParam5 = 35f;
			break;
		
		case -2:
			*uParam3 = { 1390.653f, 3598.966f, 35.6115f };
			*uParam4 = { -3.6091f, 0.022f, -8.6461f };
			*uParam5 = 35f;
			break;
	}
	return 1;
}

void func_173(int iParam0, bool bParam1)//Position - 0xBBEF
{
	if (bParam1)
	{
		unk_0xF0059F27F7BB6680(&Global_63B2, iParam0);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&Global_63B2, iParam0);
	}
}

int func_174(int iParam0, bool bParam1)//Position - 0xBC11
{
	int iVar0;
	
	iVar0 = func_175(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x6A9CDB766DF7216F(unk_0xFC1CAE18F3ECBF2D()))
	{
		return 0;
	}
	if (func_116(0))
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

int func_175(int iParam0)//Position - 0xBCC9
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

int func_176(int iParam0, int iParam1)//Position - 0xBD04
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_175(iParam0);
	if (iParam1 == 0)
	{
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	else
	{
		iVar0 = iParam0;
	}
	if (iVar0 < 0)
	{
		return 0;
	}
	if (Global_8F05[iVar0 /*32*/].f_6)
	{
		return 0;
	}
	iVar1 = 0;
	if (!Global_8F05[iVar0 /*32*/].f_C)
	{
		unk_0xF07D20149ECBC61E(&(Global_8F05[iVar0 /*32*/].f_8));
		unk_0xC9C304D0AABE1335(&Global_8FC8);
		iVar1 = unk_0xA66DBDA0A072514A(0);
	}
	else
	{
		unk_0xF07D20149ECBC61E(&(Global_8F05[iVar0 /*32*/].f_8));
		unk_0xC9C304D0AABE1335(&Global_8FC8);
		if (Global_8F05[iVar0 /*32*/].f_1E)
		{
			unk_0x607C19B90D297FE2(&(Global_8F05[iVar0 /*32*/].f_D));
		}
		else
		{
			unk_0xC9C304D0AABE1335(&(Global_8F05[iVar0 /*32*/].f_D));
		}
		iVar1 = unk_0xA66DBDA0A072514A(0);
	}
	return iVar1;
}

void func_177(var uParam0)//Position - 0xBDB9
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_175(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_8F05[iVar0 /*32*/])
		{
			Global_8F05[iVar0 /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

void func_178(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0xBE10
{
	int iVar0;
	
	if (unk_0xB731B8C5BCE89836(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x7930B3E9C919E90F())
	{
		if (!*uParam0 == -1)
		{
			func_177(uParam0);
		}
		return;
	}
	if (!*uParam0 == -1)
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
			*uParam0 = Global_8F05[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_179(char* sParam0)//Position - 0xBF3B
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 1, true, -1);
}

int func_180()//Position - 0xBF51
{
	if (Global_19B04.f_4F9D.f_91 > 0)
	{
		return 0;
	}
	return 1;
}

int func_181(int iParam0, var uParam1, float fParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0xBF6E
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam3 = { unk_0x89D97EB4FAE4A574(*uParam1, fParam2, 1.46991f, -0.814453f, -0.97226f) };
			*uParam4 = { unk_0x89D97EB4FAE4A574(*uParam1, fParam2, -1.5828f, -0.814453f, 0.84774f) };
			*uParam5 = { unk_0x89D97EB4FAE4A574(*uParam1, fParam2, 0.0586548f, 0.178162f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam3 = { unk_0x89D97EB4FAE4A574(*uParam1, fParam2, -1.55054f, -0.920414f, -0.998837f) };
			*uParam4 = { unk_0x89D97EB4FAE4A574(*uParam1, fParam2, 1.54138f, -0.920414f, 0.901165f) };
			*uParam5 = { unk_0x89D97EB4FAE4A574(*uParam1, fParam2, 0.0586548f, 0.178162f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam3 = { unk_0x89D97EB4FAE4A574(*uParam1, fParam2, -2.60296f, -0.851523f, -0.999289f) };
			*uParam4 = { unk_0x89D97EB4FAE4A574(*uParam1, fParam2, 0.443411f, -0.851523f, 0.820711f) };
			*uParam5 = { unk_0x89D97EB4FAE4A574(*uParam1, fParam2, -1.17421f, 0.39005f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case -2:
			*uParam3 = { 1390.955f, 3604.379f, 33.98091f };
			*uParam4 = { 1394.475f, 3605.664f, 35.98091f };
			*uParam5 = { 1392.551f, 3605.449f, 35.30949f };
			*uParam6 = 0.75f;
			break;
	}
	return 1;
}

int func_182(float fParam0)//Position - 0xC157
{
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()) && !unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		if (fParam0 <= 0f)
		{
			return unk_0x31E5D759D5CB9546(unk_0xBC25C936A095B5BA()) > 0;
		}
		else
		{
			return unk_0xEA85590434A67895(unk_0xBC25C936A095B5BA(), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), fParam0) > 0;
		}
	}
	return 0;
}

void func_183()//Position - 0xC1A9
{
	if (iLocal_108)
	{
		if (iLocal_107 == 3)
		{
			iLocal_107 = 0;
		}
		iLocal_108 = 0;
	}
	switch (iLocal_107)
	{
		case 0:
			unk_0xDC078F87049ECECE(iLocal_98[iLocal_111], true, 0);
			iLocal_109 = unk_0xD0D858E538FD01C3(unk_0x89D97EB4FAE4A574(Local_66.f_1E6.f_6, Local_66.f_1E6.f_9.f_2, -0.07f, 0.06f, -0.02f), Local_66.f_1E6.f_9, 2);
			if (!unk_0x36CEFBE9B745A58D(Local_66.f_2))
			{
				unk_0xB62398E536F695FC(Local_66.f_2, iLocal_109, "mp_am_hold_up", "purchase_chocbar_shopkeeper", 1.5f, -1.5f, 0, 0, 1148846080, 0);
				unk_0xBEBE356CCD6268A1(iLocal_98[iLocal_111], iLocal_109, "purchase_chocbar", "mp_am_hold_up", 1000f, 8f, 1, 1148846080);
				iLocal_107 = 1;
			}
			break;
		
		case 1:
			if (unk_0x77FC50899603581D(iLocal_109))
			{
				if (unk_0x8FD30584EB38411B(iLocal_109) == 1f)
				{
					if (!unk_0x36CEFBE9B745A58D(Local_66.f_2))
					{
						unk_0xA4E856A8CD53B8DF(Local_66.f_2);
					}
					if (unk_0x724D816EA203A79E(iLocal_98[iLocal_111]))
					{
						unk_0x73FD5B32F266E65D(iLocal_98[iLocal_111], 1);
					}
					iLocal_110 = unk_0x105601648511CC64();
					iLocal_107 = 2;
				}
			}
			else
			{
				iLocal_110 = unk_0x105601648511CC64();
				iLocal_107 = 2;
			}
			break;
		
		case 2:
			if ((unk_0x105601648511CC64() - iLocal_110) > 1000)
			{
				if (unk_0x724D816EA203A79E(iLocal_98[iLocal_111]))
				{
					unk_0xDC078F87049ECECE(iLocal_98[iLocal_111], false, 0);
					unk_0x641B19E156645A92(iLocal_98[iLocal_111], func_59(iLocal_111), 1, false, 0, 1);
					unk_0x73FD5B32F266E65D(iLocal_98[iLocal_111], 0);
				}
				iLocal_107 = 3;
			}
			break;
		
		case 3:
			break;
	}
}

void func_184()//Position - 0xC346
{
	if (iLocal_52 != 6)
	{
		switch (iLocal_52)
		{
			case 1:
				if (func_189())
				{
					iLocal_52 = 2;
				}
				else
				{
					iLocal_52 = 6;
				}
				break;
			
			case 2:
				if (!unk_0x1D403DFADBC2DE3C(Local_66.f_56, 0))
				{
					func_188();
					func_11(&(Local_66.f_56.f_7));
					iLocal_52 = 3;
				}
				break;
			
			case 3:
				if (!unk_0x1D403DFADBC2DE3C(Local_66.f_56, 0))
				{
					if ((func_187(&(Local_66.f_56.f_7), 5f) || func_185(Local_66.f_2, &(Local_66.f_1C3))) || unk_0x2CDE18D6C89522AD(Local_66.f_56))
					{
						iLocal_52 = 4;
					}
				}
				break;
			
			case 4:
				if (!unk_0x1D403DFADBC2DE3C(Local_66.f_56, 0))
				{
					iLocal_51 = 31;
					unk_0x5558ED6D4A2DEC93(Local_66.f_56, Local_66, 500f, -1, 0, 0);
					iLocal_52 = 5;
				}
				func_39(&(Local_66.f_56.f_7));
				break;
			}
	}
}

int func_185(int iParam0, var uParam1)//Position - 0xC41C
{
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		if (unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 7))
		{
			if (unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), iParam0) || unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), iParam0))
			{
				if (unk_0xC5B8A5F778E321DD(iParam0, unk_0xBC25C936A095B5BA(), 90f))
				{
					if (func_186(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0x105601648511CC64();
						}
						else if ((unk_0x105601648511CC64() - uParam1->f_1) > uParam1->f_3)
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

float func_186(int iParam0, bool bParam1)//Position - 0xC4A1
{
	return func_22(unk_0xA95CF30C72EB526E(unk_0xFC1CAE18F3ECBF2D()), iParam0, bParam1);
}

int func_187(var uParam0, float fParam1)//Position - 0xC4B9
{
	if (func_14(uParam0))
	{
		if (func_8(uParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_188()//Position - 0xC4DB
{
	if (!unk_0x1D403DFADBC2DE3C(Local_66.f_56, 0))
	{
		unk_0xC5A6DFE2B8987B17(&(Local_66.f_56.f_6));
		unk_0x85DB484A637CEAB9(0, Local_66, 0);
		unk_0x56F2E1B5599188FA(0, Local_66, 2500, 0, 2);
		unk_0x2A2F7485FD2B9A29(0, 2500, 0, -1, 0);
		unk_0x535008C596714F9E(Local_66.f_56.f_6);
		unk_0xA8E6405305C0D7DF(Local_66.f_56, Local_66.f_56.f_6);
	}
}

int func_189()//Position - 0xC531
{
	unk_0x50AE3E919DC9BC67(Local_66.f_56.f_2, Local_66.f_56.f_5, 1, 0, &(Local_66.f_56), 0, 1, -1);
	if (!unk_0x1D403DFADBC2DE3C(Local_66.f_56, 0))
	{
		if (unk_0x6F79ECA8C83E4357(Local_66.f_56) == Local_66.f_56.f_1)
		{
			unk_0x77815D3407C6700D(Local_66.f_56, true, 0);
			unk_0x2E35C4FA5F0ED22F(Local_66.f_56, true);
			return 1;
		}
	}
	return 0;
}

void func_190()//Position - 0xC591
{
	float fVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	vector3 vVar4;
	
	if (iLocal_101 > 1 && iLocal_101 < 5)
	{
		if (func_211())
		{
			unk_0x7A41D32A383895D8(500);
			iLocal_101 = 6;
		}
	}
	switch (iLocal_101)
	{
		case 0:
			if ((((unk_0x1D403DFADBC2DE3C(Local_66.f_2, 0) || !func_210()) || func_1(Local_66.f_1D6, 128)) && iLocal_55 < 3) && unk_0x90629C6D0C640733(Local_66.f_2.f_1, 1.5f) == 0)
			{
				if ((func_44() && !unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0)) && !func_209(0))
				{
					func_208("SHR_ROBTILL", -1);
					Local_66.f_1D5 = -1;
					func_178(&(Local_66.f_1D5), 4, "SHR_ROBTILL", 0, 0, 0, 0);
					unk_0x7CB6FD92BE491AD9(&(Local_66.f_A2.f_12), 1);
					unk_0x7CB6FD92BE491AD9(&(Local_66.f_A2.f_12), 0);
					iLocal_101 = 1;
				}
			}
			else if (!unk_0x36CEFBE9B745A58D(Local_66.f_2))
			{
			}
			else if (iLocal_55 == 7)
			{
			}
			else if (unk_0x90629C6D0C640733(Local_66.f_2.f_1, 1.5f) > 0)
			{
			}
			break;
		
		case 1:
			if (func_44())
			{
				if (func_174(Local_66.f_1D5, 1))
				{
					if (!unk_0x1D403DFADBC2DE3C(Local_66, 0))
					{
						if (!unk_0x1D403DFADBC2DE3C(unk_0x3E12B546F3F2597A(), 0))
						{
							iVar3 = unk_0x3E12B546F3F2597A();
							if (unk_0x0C265B3C448E6954(iVar3, Local_66.f_D6, Local_66.f_D9, Local_66.f_DC, 0, true, 0))
							{
								unk_0x641B19E156645A92(iVar3, unk_0x89D97EB4FAE4A574(Local_66.f_1E6.f_6, Local_66.f_1E6.f_9.f_2, -0.7961f, -1.562f, -0.4215f), 0, false, 0, 1);
							}
						}
					}
					unk_0xF0059F27F7BB6680(&(Local_66.f_A2.f_12), 1);
					if (func_27("SHR_ROBTILL"))
					{
						unk_0x7456702622C62EA0(1);
					}
					func_177(&(Local_66.f_1D5));
					bVar2 = unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &iLocal_105, 1);
					if (bVar2)
					{
						unk_0x8E25082A46F87892(unk_0xBC25C936A095B5BA(), joaat("weapon_unarmed"), true);
					}
					unk_0xDDCAA2E64649E083(unk_0xFC1CAE18F3ECBF2D(), false, 0);
					unk_0x7A71B0C6DDC0D7DA(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 15f);
					unk_0xD5E53AA0828339DA(0);
					func_113(0);
					func_202(1, 1, 1, 0, 0);
					unk_0x43F06392C4EF25E0(false);
					func_173(23, 1);
					unk_0xADC7E88690E324EB(Local_66.f_2.f_1, 3f, 0);
					iLocal_101 = 2;
				}
				else if ((unk_0x105601648511CC64() % 1000) < 50)
				{
					if (Local_66.f_1D5 <= 0)
					{
						Local_66.f_1D5 = -1;
						func_178(&(Local_66.f_1D5), 4, "SHR_ROBTILL", 0, 0, 0, 0);
					}
				}
			}
			else
			{
				if (func_27("SHR_ROBTILL"))
				{
					unk_0x7456702622C62EA0(1);
				}
				func_177(&(Local_66.f_1D5));
				iLocal_101 = 0;
			}
			break;
		
		case 2:
			if (unk_0x1D403DFADBC2DE3C(Local_66.f_2, 0))
			{
				unk_0xD434A01DEA38A939(Local_66.f_2, false, 0);
				unk_0x346478B12F69D4E3(Local_66.f_2, true);
			}
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), unk_0x89D97EB4FAE4A574(Local_66.f_2.f_1, Local_66.f_2.f_4, -0.75f, 0f, -1f), 1, false, 0, 1);
				unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), Local_66.f_2.f_4);
				unk_0x02DAF06EA4F08219(&iLocal_78);
				unk_0xC5A6DFE2B8987B17(&iLocal_78);
				unk_0xE896C0AD02364F2A(0, "oddjobs@shop_robbery@rob_till", "enter", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0xE896C0AD02364F2A(0, "oddjobs@shop_robbery@rob_till", "loop", 8f, -8f, 4000, 1, 0, 0, 0, 0);
				unk_0xE896C0AD02364F2A(0, "oddjobs@shop_robbery@rob_till", "exit", 8f, -1.5f, -1, 0, 0, 0, 0, 0);
				unk_0x535008C596714F9E(iLocal_78);
				unk_0xA8E6405305C0D7DF(unk_0xBC25C936A095B5BA(), iLocal_78);
				if (!unk_0xEF0E25DA0CB6E8FF(iLocal_102))
				{
					iLocal_102 = unk_0x585DE1CBEEB2D27D(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
				}
				unk_0x5BB58B645F7051F4(iLocal_102, unk_0xBC25C936A095B5BA(), -0.1878f, 3.0635f, 0.68f, 1);
				unk_0xA65BD9EDFDFA4D71(iLocal_102, unk_0xBC25C936A095B5BA(), -0.0129f, 0.0927f, 0.3008f, 1);
				unk_0x9DF315A9EFFF87AC(iLocal_102, 35f);
				unk_0x2FB83B8BD6C05FD2(iLocal_102, "HAND_SHAKE", 0.1f);
				unk_0x348665177DBFB93B(iLocal_102, true);
				unk_0x062C9995BFD27B2A(true, false, 3000, 1, 0, 0);
			}
			iLocal_101 = 3;
			break;
		
		case 3:
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				if (!unk_0xEF0E25DA0CB6E8FF(iLocal_103))
				{
					iLocal_103 = unk_0x585DE1CBEEB2D27D(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
				}
				unk_0x5BB58B645F7051F4(iLocal_103, unk_0xBC25C936A095B5BA(), -1.0346f, 2.9183f, 0.68f, 1);
				unk_0xA65BD9EDFDFA4D71(iLocal_103, unk_0xBC25C936A095B5BA(), -0.0574f, 0.1074f, 0.3008f, 1);
				unk_0x9DF315A9EFFF87AC(iLocal_103, 35f);
				unk_0x2FB83B8BD6C05FD2(iLocal_103, "HAND_SHAKE", 0.3f);
				unk_0xAE099C1ADC89C331(iLocal_103, iLocal_102, 8000, 1, 1);
			}
			iLocal_106 = unk_0x105601648511CC64();
			iLocal_101 = 4;
			break;
		
		case 4:
			if (((unk_0x105601648511CC64() - iLocal_106) > 4800 || (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()))) || unk_0x90629C6D0C640733(Local_66.f_2.f_1, 3f) > 0)
			{
				iLocal_101 = 5;
			}
			else if ((unk_0x105601648511CC64() - iLocal_106) > 4500)
			{
				if (func_201())
				{
					if (!iLocal_95)
					{
						unk_0x9216004FAC08D1DC("CamPushInNeutral", 0, 0);
						unk_0xC4BA30B532FE260F(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						iLocal_95 = 1;
					}
				}
			}
			else if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && unk_0x96044E39418AAF17(unk_0xBC25C936A095B5BA(), "oddjobs@shop_robbery@rob_till", "loop", 3))
			{
				fVar0 = unk_0x4A3B2CF8BADDD74E(unk_0xBC25C936A095B5BA(), "oddjobs@shop_robbery@rob_till", "loop");
				if ((fVar0 > 0.374f && fVar0 <= 0.484f) || (fVar0 > 0.824f && fVar0 <= 0.92f))
				{
					if (!iLocal_104)
					{
						iVar1 = unk_0x491B2241281A03B7(10, 51);
						func_200(func_100(), 1, iVar1, 0, 0);
						iLocal_81 = (iLocal_81 + iVar1);
						Local_66.f_1C.f_6 = unk_0x2F079D1FC5F6CB99();
						unk_0xC4BA30B532FE260F(-1, "ROBBERY_MONEY_TOTAL", "HUD_FRONTEND_CUSTOM_SOUNDSET", true);
						iLocal_104 = 1;
					}
				}
				else if (iLocal_104)
				{
					iLocal_104 = 0;
				}
			}
			break;
		
		case 5:
			if (unk_0x1D403DFADBC2DE3C(Local_66.f_2, 0))
			{
				unk_0xD434A01DEA38A939(Local_66.f_2, true, 0);
				unk_0x346478B12F69D4E3(Local_66.f_2, false);
			}
			unk_0xF3F01A78937DC905(0f);
			unk_0x2B9AEC08E469E384(0f, 1065353216);
			if (unk_0xEF0E25DA0CB6E8FF(iLocal_102))
			{
				unk_0x4EC087603E1DEF9C(iLocal_102, 0);
			}
			if (unk_0xEF0E25DA0CB6E8FF(iLocal_103))
			{
				unk_0x4EC087603E1DEF9C(iLocal_103, 0);
			}
			unk_0x062C9995BFD27B2A(false, false, 3000, 1, 0, 0);
			if (!unk_0x1D403DFADBC2DE3C(unk_0x3E12B546F3F2597A(), 0))
			{
				iVar3 = unk_0x3E12B546F3F2597A();
				vVar4 = { unk_0x541C2AEF053615BC(iVar3, true) };
			}
			if (iLocal_105 != joaat("weapon_unarmed") && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				unk_0x8E25082A46F87892(unk_0xBC25C936A095B5BA(), iLocal_105, true);
			}
			if (unk_0xFA30DFD0084E92FE(Local_66.f_A2.f_12, 1))
			{
				unk_0x7CB6FD92BE491AD9(&(Local_66.f_A2.f_12), 1);
			}
			func_199(1, 1, 1);
			func_15(1, 0);
			iLocal_60 = 12;
			func_196();
			func_191(297, 0, 0);
			Local_66.f_1D4 = 1;
			iLocal_101 = 7;
			break;
		
		case 6:
			if (unk_0x17FAADF9916EF741())
			{
				unk_0x348665177DBFB93B(iLocal_103, false);
				unk_0x062C9995BFD27B2A(false, false, 3000, 1, 0, 0);
				if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
				{
					unk_0x49D46EE47C9CCB66(unk_0xBC25C936A095B5BA());
				}
				if (iLocal_81 < 15)
				{
					iVar1 = unk_0x491B2241281A03B7(25, 65);
					func_200(func_100(), 1, iVar1, 0, 0);
					iLocal_81 = (iLocal_81 + iVar1);
				}
				unk_0x829FA4611BD56B44(500);
				iLocal_101 = 5;
			}
			break;
	}
}

void func_191(int iParam0, int iParam1, int iParam2)//Position - 0xCCB9
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_75((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_19B04.f_27B5[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_19B04.f_27B5[iParam0 /*12*/].f_6 == 11 || Global_19B04.f_27B5[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_19B04.f_27B5[iParam0 /*12*/].f_5 = 1;
		Global_19B04.f_27B5[iParam0 /*12*/].f_A = iParam1;
		Global_19B04.f_27B5[iParam0 /*12*/].f_B = iParam2;
		if (iParam0 == 287)
		{
			unk_0x438C09AFE8E5D473(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x438C09AFE8E5D473(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x438C09AFE8E5D473(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_192();
	}
}

void func_192()//Position - 0xCDA1
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_199FC = 0;
	Global_199FD = 0;
	Global_199FE = 0;
	Global_199FF = 0;
	Global_19A00 = 0;
	Global_19A01 = 0;
	Global_19A02 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_19B04.f_27B5.f_F0D;
	Global_19B04.f_27B5.f_F0D = 0f;
	while (iVar0 < 321)
	{
		if (Global_19B04.f_27B5[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_19B04.f_27B5[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_199FC++;
					fVar1 = (fVar1 + Global_19B04.f_27B5[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_199FD++;
					fVar2 = (fVar2 + Global_19B04.f_27B5[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_199FE++;
					fVar3 = (fVar3 + Global_19B04.f_27B5[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_199FF++;
					fVar4 = (fVar4 + Global_19B04.f_27B5[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_19A00++;
					fVar5 = (fVar5 + (Global_19B04.f_27B5[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_19A01++;
					fVar6 = (fVar6 + Global_19B04.f_27B5[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_19A02++;
					fVar7 = (fVar7 + Global_19B04.f_27B5[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_199EB > 0)
	{
		if (Global_199FC == Global_199EB)
		{
			fVar1 = 55f;
		}
	}
	if (Global_199EC > 0)
	{
		if (Global_199FD == Global_199EC)
		{
			fVar2 = 10f;
		}
	}
	if (Global_199ED > 0)
	{
		if (Global_199FE == Global_199ED)
		{
			fVar3 = 0f;
		}
	}
	if (Global_199EE > 0)
	{
		if (Global_199FF == Global_199EE)
		{
			fVar4 = 10f;
		}
	}
	if (Global_199EF > 0)
	{
		if (((Global_19A00 == Global_199EF || (Global_199EF * 10 / Global_19A00) < 41) || Global_19A00 > Global_199F2) || Global_19A00 == Global_199F2)
		{
			if (!unk_0xFA30DFD0084E92FE(Global_19B04.f_27B5.f_F10, 14))
			{
				if (Global_19A00 == Global_199EF)
				{
					unk_0x438C09AFE8E5D473(joaat("num_rndevents_completed"), Global_199EF, 0);
					unk_0xF0059F27F7BB6680(&(Global_19B04.f_27B5.f_F10), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_199F0 > 0)
	{
		if (Global_19A01 == Global_199F0)
		{
			fVar6 = 15f;
		}
	}
	if (Global_199F1 > 0)
	{
		if (Global_19A02 == Global_199F1)
		{
			fVar7 = 5f;
		}
	}
	Global_19B04.f_27B5.f_F0D = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_19A00 > Global_199F2 || Global_19A00 == Global_199F2)
	{
		iVar9 = Global_199F2;
	}
	else
	{
		iVar9 = Global_19A00;
	}
	unk_0x3A57956BCE003880(joaat("num_missions_completed"), Global_199FC, 1);
	unk_0x3A57956BCE003880(joaat("num_missions_available"), Global_199EB, 1);
	unk_0x3A57956BCE003880(joaat("num_minigames_completed"), Global_199FD, 1);
	unk_0x3A57956BCE003880(joaat("num_minigames_available"), Global_199EC, 1);
	unk_0x3A57956BCE003880(joaat("num_oddjobs_completed"), Global_199FE, 1);
	unk_0x3A57956BCE003880(joaat("num_oddjobs_available"), Global_199ED, 1);
	unk_0x3A57956BCE003880(joaat("num_rndpeople_completed"), Global_199FF, 1);
	unk_0x3A57956BCE003880(joaat("num_rndpeople_available"), Global_199EE, 1);
	unk_0x3A57956BCE003880(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x3A57956BCE003880(joaat("num_rndevents_available"), Global_199F2, 1);
	unk_0x3A57956BCE003880(joaat("num_misc_completed"), (Global_19A02 + Global_19A01), 1);
	unk_0x3A57956BCE003880(joaat("num_misc_available"), (Global_199F1 + Global_199F0), 1);
	Global_19A03 = (Global_199FC * 100 / Global_199EB);
	Global_19A05 = ((Global_199FE + Global_199FD) * 100 / (Global_199ED + Global_199EC));
	Global_19A04 = ((Global_199FF + iVar9) * 100 / (Global_199EE + Global_199F2));
	Global_19A06 = ((Global_19A01 + Global_19A02) * 100 / (Global_199F0 + Global_199F1));
	unk_0xAE9FF06DD2A69C74(joaat("total_progress_made"), Global_19B04.f_27B5.f_F0D, 1);
	unk_0x3A57956BCE003880(joaat("percent_story_missions"), Global_19A03, 1);
	unk_0x3A57956BCE003880(joaat("percent_ambient_missions"), Global_19A04, 1);
	unk_0x3A57956BCE003880(joaat("percent_oddjobs"), Global_19A05, 1);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_19B04.f_27B5.f_F0D))
	{
		func_96(13, SYSTEM::FLOOR(Global_19B04.f_27B5.f_F0D));
	}
	if (!unk_0xF9BFA43C1BAFD016())
	{
		if (!Global_11542)
		{
			if (func_195() == 2 == 0 && !unk_0x7AF0088ABFA713B6())
			{
				if (unk_0x670C0C6C780A3F84())
				{
					Global_199FA = 0;
				}
				if (!Global_DA9F)
				{
					func_193();
				}
			}
		}
	}
}

int func_193()//Position - 0xD262
{
	if (func_194(0))
	{
		return 0;
	}
	if (Global_16B42.f_8)
	{
		if (Global_16B42.f_A > 0)
		{
			return 0;
		}
	}
	else if (Global_16B42.f_A > 1)
	{
		return 0;
	}
	Global_16B42.f_A++;
	return 1;
}

bool func_194(bool bParam0)//Position - 0xD2AD
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_1163A, 0);
}

int func_195()//Position - 0xD2D8
{
	return Global_62BD;
}

void func_196()//Position - 0xD2E3
{
	if (!iLocal_87)
	{
		Global_19B04.f_4E26[iLocal_80]++;
		Global_19B04.f_4E26.f_3E[iLocal_80] = Local_66.f_1;
		if (func_100() == 0)
		{
			func_197(5);
		}
		iLocal_87 = 1;
	}
}

void func_197(int iParam0)//Position - 0xD332
{
	switch (iParam0)
	{
		case 0:
			func_198(&Global_15DE0, 1);
			break;
		
		case 1:
			func_198(&Global_15DE2, 3);
			break;
		
		case 2:
			func_198(&Global_15DE6, 1);
			break;
		
		case 3:
			func_198(&Global_15DE8, 1);
			break;
		
		case 4:
			func_198(&Global_15DEA, 1);
			break;
		
		case 5:
			func_198(&Global_15DEC, 1);
			break;
		
		case 6:
			func_198(&Global_15DEE, 1);
			break;
		
		case 7:
			func_198(&Global_15DF0, 2);
			break;
		
		case 8:
			func_198(&Global_15DF3, 1);
			break;
		
		case 9:
			func_198(&Global_15DF5, 1);
			break;
	}
}

void func_198(var uParam0, int iParam1)//Position - 0xD3F5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if (iVar0 < (iParam1 - 1))
		{
			(*uParam0)[iVar0] = (*uParam0)[iVar0 + 1];
		}
		else
		{
			(*uParam0)[iVar0] = unk_0x105601648511CC64();
		}
		iVar0++;
	}
}

void func_199(bool bParam0, bool bParam1, int iParam2)//Position - 0xD434
{
	if (bParam0)
	{
		unk_0xDDCAA2E64649E083(unk_0xFC1CAE18F3ECBF2D(), true, 0);
	}
	unk_0xD5E53AA0828339DA(1);
	func_202(0, 1, iParam2, 0, 0);
	if (bParam1)
	{
		unk_0x43F06392C4EF25E0(true);
		unk_0x59B038076F830627(true);
	}
	func_173(23, 0);
}

void func_200(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0xD470
{
	int iVar0;
	int iVar1;
	
	if (Global_19B04.f_6D75[iParam0 /*29*/].f_11 == 3)
	{
		return;
	}
	if (Global_19B04.f_6D75[iParam0 /*29*/].f_11 == 4)
	{
		return;
	}
	func_69(Global_19B04.f_6D75[iParam0 /*29*/].f_11, 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		unk_0x6CB99B97664C3727(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x3A57956BCE003880(iVar1, iVar0, 1);
	}
}

int func_201()//Position - 0xD557
{
	if (unk_0x3D875C2512206692(unk_0xEBC6179F395EFBEB()) == 4)
	{
		return 1;
	}
	return 0;
}

void func_202(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)//Position - 0xD570
{
	if (bParam0)
	{
		unk_0x0D2E9062E966BE4F(unk_0xB5CEFD608600A09F());
		unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 1);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 1);
		func_207(1);
		unk_0x32FF237D69EB5489();
		unk_0x3169E2C5E6A096BC();
		if (Global_389D.f_1 > 3)
		{
			if (unk_0x58E7DDFF8D17A82A())
			{
				unk_0x1E08809A5041F85B(false);
			}
			if (!func_114())
			{
				Global_389D.f_1 = 3;
			}
			Global_3DB8 = 5;
		}
		func_206(1, iParam3, iParam2, 0);
		Global_DAA5 = 1;
		Global_10ABB = 1;
		Global_11540 = 1;
	}
	else
	{
		func_207(0);
		unk_0xCB50D125C355ED9C();
		Global_DAA5 = 0;
		if (bParam1)
		{
			unk_0x7FF4F08CAB3344B1();
		}
		unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 0);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 0);
		func_206(0, iParam3, iParam2, 0);
		if (unk_0x7AF0088ABFA713B6())
		{
			if ((((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_204(unk_0xB5CEFD608600A09F())) && !func_127(unk_0xB5CEFD608600A09F(), 0)) && !func_203()) && !bParam4)
			{
				unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), false);
			}
		}
		else if ((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_204(unk_0xB5CEFD608600A09F())) && !bParam4)
		{
			unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), false);
		}
		Global_11540 = 0;
	}
}

bool func_203()//Position - 0xD699
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_27.f_12, 14);
}

int func_204(int iParam0)//Position - 0xD6B6
{
	if (func_127(iParam0, 0))
	{
		return 1;
	}
	if (func_205())
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

bool func_205()//Position - 0xD6F8
{
	return unk_0xFA30DFD0084E92FE(Global_240006, 3);
}

int func_206(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0xD709
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x8ACB0C3FACC09467())
	{
		if (unk_0xB34A6828EBD4A1D8() != iParam0 && uParam2)
		{
			unk_0x22506029183A78EC(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_207(int iParam0)//Position - 0xD73C
{
	if (iParam0 == 1)
	{
		unk_0xF0059F27F7BB6680(&Global_93B, 13);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&Global_93B, 13);
	}
}

void func_208(char* sParam0, int iParam1)//Position - 0xD75F
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, true, iParam1);
}

int func_209(int iParam0)//Position - 0xD776
{
	if (iParam0 == 1)
	{
		if (Global_389D.f_1 > 3)
		{
			if (unk_0xFA30DFD0084E92FE(Global_93B, 14))
			{
				if (Global_389C == 1)
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
		else
		{
			return 0;
		}
	}
	if (unk_0xB731B8C5BCE89836(joaat("cellphone_flashhand")) > 0)
	{
		if (Global_389C == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (Global_389D.f_1 > 3)
	{
		if (Global_389C == 1)
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

int func_210()//Position - 0xD7FA
{
	if (!unk_0x1D403DFADBC2DE3C(Local_66.f_2, 0))
	{
		if (unk_0x645938DA8ED5E0BA(Local_66.f_2) == Local_66.f_B9)
		{
			return 1;
		}
		else if (unk_0x0C265B3C448E6954(Local_66.f_2, Local_66.f_BA, Local_66.f_BD, Local_66.f_C0, 0, true, 0))
		{
			return 1;
		}
		else if (unk_0x0C265B3C448E6954(Local_66.f_2, Local_66.f_C8, Local_66.f_CB, Local_66.f_CE, 0, true, 0))
		{
			return 1;
		}
		else if (unk_0x0C265B3C448E6954(Local_66.f_2, Local_66.f_CF, Local_66.f_D2, Local_66.f_D5, 0, true, 0))
		{
			return 1;
		}
		else if (Local_66.f_C7 != -1f)
		{
			if (unk_0x0C265B3C448E6954(Local_66.f_2, Local_66.f_C1, Local_66.f_C4, Local_66.f_C7, 0, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_211()//Position - 0xD8C0
{
	if (unk_0xE186ACC7BE9B244E())
	{
		return 0;
	}
	if (unk_0x694514BD37EC4E94(0, 18) || unk_0x694514BD37EC4E94(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_212()//Position - 0xD8F2
{
	int iVar0;
	
	func_229();
	func_226();
	if (unk_0x724D816EA203A79E(Local_66))
	{
		unk_0x9CDD10270A1ACF6F(Local_66, &iVar0, 1);
		if ((iLocal_58 == 1 && iLocal_99 == 2) && ((unk_0x231DB1D0F4218A1B(unk_0xB5CEFD608600A09F()) || func_225()) || func_224()))
		{
			unk_0xA67D3DDB524B8DBA(unk_0xB5CEFD608600A09F());
			func_15(1, 0);
			iLocal_58 = 9;
		}
	}
	else
	{
		return;
	}
	func_221();
	if (!bLocal_86)
	{
		func_220();
	}
	switch (iLocal_58)
	{
		case 1:
			if (func_295())
			{
				if ((func_20(Local_66, Local_66.f_2, &(Local_66.f_1C3), 1) || (func_185(Local_66.f_2, &(Local_66.f_1C3)) && !unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))) && iVar0 != joaat("weapon_unarmed"))
				{
					func_219();
					unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 1);
					iLocal_51 = 12;
					iLocal_50 = 3;
					iLocal_58 = 5;
					unk_0xF0059F27F7BB6680(&Global_15B77, 3);
					func_218();
				}
				if (func_1(Local_66.f_1D6, 8))
				{
					if (!func_1(Local_66.f_1D6, 32))
					{
						if (!unk_0x36CEFBE9B745A58D(Local_66.f_2) && func_1(Local_66.f_1D6, 4))
						{
							unk_0xE896C0AD02364F2A(Local_66.f_2, "misscommon@response", "numbnuts", 8f, -8f, -1, 0, 0, 0, 0, 0);
						}
						iLocal_51 = 36;
						func_15(1, 0);
						func_217();
						func_286(&(Local_66.f_1D6), 32);
					}
				}
			}
			break;
		
		case 2:
			if (func_295())
			{
				if (func_185(Local_66.f_2, &(Local_66.f_1C3)) && iVar0 != joaat("weapon_unarmed"))
				{
					unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 1);
					Local_66.f_2.f_B = 1;
					func_196();
					iLocal_51 = 12;
					iLocal_50 = 3;
					iLocal_60 = 11;
					iLocal_58 = 3;
					unk_0xF0059F27F7BB6680(&Global_15B77, 3);
					func_218();
				}
				else if (func_20(Local_66, Local_66.f_2, &(Local_66.f_1C3), 1))
				{
					unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 1);
					func_217();
					func_219();
					iLocal_51 = 12;
					iLocal_58 = 5;
					func_218();
				}
				else if (func_1(Local_66.f_1D6, 8))
				{
					if (!func_1(Local_66.f_1D6, 32))
					{
						if (!unk_0x36CEFBE9B745A58D(Local_66.f_2) && func_1(Local_66.f_1D6, 4))
						{
							unk_0xE896C0AD02364F2A(Local_66.f_2, "misscommon@response", "numbnuts", 8f, -8f, -1, 0, 0, 0, 0, 0);
						}
						iLocal_51 = 36;
						func_15(1, 0);
						func_217();
						func_286(&(Local_66.f_1D6), 32);
					}
				}
			}
			break;
		
		case 3:
			if (iLocal_51 >= 13)
			{
				if (!unk_0x9986AD62CA3DE747(unk_0xBC25C936A095B5BA()) && !unk_0x9986AD62CA3DE747(Local_66.f_2))
				{
					iLocal_51 = 15;
					iLocal_56 = 5;
					iLocal_60 = 12;
					iLocal_58 = 4;
				}
			}
			break;
		
		case 4:
			if (func_20(Local_66, Local_66.f_2, &(Local_66.f_1C3), 1) && func_295())
			{
				func_219();
				if (Local_66.f_2.f_C)
				{
					iLocal_51 = 22;
				}
				else
				{
					iLocal_51 = 16;
				}
				iLocal_58 = 5;
			}
			break;
		
		case 5:
			if (Local_66.f_1E6 >= 0)
			{
				if (func_20(Local_66, Local_66.f_2, &(Local_66.f_1C3), 1) && func_295())
				{
					if (unk_0x77FC50899603581D(Local_66.f_1E6) && !Local_66.f_1D3)
					{
						iLocal_51 = 33;
						Local_66.f_1D3 = 1;
					}
				}
			}
			if (iLocal_53 >= 1 && iLocal_53 < 7)
			{
				unk_0xA67D3DDB524B8DBA(unk_0xFC1CAE18F3ECBF2D());
				if (func_215(Local_66.f_2, 0, 1, 0, 1, 1) || !unk_0x77FC50899603581D(Local_66.f_1E6))
				{
					iLocal_58 = 6;
				}
			}
			break;
		
		case 6:
			if (iLocal_54 != 3 && iLocal_54 != 4)
			{
				iLocal_54 = 4;
			}
			unk_0x7CB6FD92BE491AD9(&Global_15B77, 3);
			if (!unk_0x2CDE18D6C89522AD(Local_66.f_2))
			{
				func_6();
				iLocal_58 = 0;
			}
			break;
		
		case 7:
			if (!unk_0x2CDE18D6C89522AD(Local_66.f_2))
			{
				func_214();
				iLocal_51 = 36;
				func_15(1, 0);
				func_286(&(Local_66.f_1D6), 32);
				iLocal_56 = 7;
				iLocal_58 = 8;
			}
			break;
		
		case 8:
			if (((func_20(Local_66, Local_66.f_2, &(Local_66.f_1C3), 1) || func_185(Local_66.f_2, &(Local_66.f_1C3))) && func_295()) && iVar0 != joaat("weapon_unarmed"))
			{
				if (!Local_66.f_2.f_C)
				{
					iLocal_51 = 10;
					iLocal_58 = 9;
				}
				else
				{
					func_18();
					iLocal_51 = 11;
					iLocal_58 = 0;
				}
				Local_66.f_2.f_D = 0;
			}
			break;
		
		case 9:
			func_6();
			iLocal_58 = 12;
			break;
		
		case 10:
			if ((((func_20(Local_66, Local_66.f_2, &(Local_66.f_1C3), 1) || func_185(Local_66.f_2, &(Local_66.f_1C3))) && func_295()) && iVar0 != joaat("weapon_unarmed")) && !func_14(&(Local_66.f_1E0)))
			{
				func_11(&(Local_66.f_1E0));
				if (unk_0x2CDE18D6C89522AD(Local_66.f_2))
				{
					func_6();
				}
				iLocal_51 = 23;
			}
			else if (func_40(&(Local_66.f_1E0)) > 10f)
			{
				if (!unk_0x36CEFBE9B745A58D(Local_66.f_2))
				{
					unk_0x5558ED6D4A2DEC93(Local_66.f_2, unk_0xBC25C936A095B5BA(), 100f, -1, 0, 0);
				}
				iLocal_58 = 12;
			}
			break;
		
		case 11:
			func_213();
			iLocal_58 = 12;
			break;
	}
}

void func_213()//Position - 0xDE04
{
	if (!unk_0x1D403DFADBC2DE3C(Local_66.f_2, 0))
	{
		unk_0x2E35C4FA5F0ED22F(Local_66.f_2, false);
	}
}

void func_214()//Position - 0xDE22
{
	if (!unk_0x1D403DFADBC2DE3C(Local_66.f_2, 0))
	{
		unk_0x56F2E1B5599188FA(Local_66.f_2, Local_66, -1, 0, 2);
	}
}

int func_215(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0xDE44
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_45)
		{
			iLocal_46 = unk_0x8D66276473ABD7CC(iParam0);
			bLocal_45 = true;
		}
		iLocal_47 = unk_0x8D66276473ABD7CC(iParam0);
		iLocal_48 = (iLocal_46 - iLocal_47);
		iVar0 = unk_0x3E12B546F3F2597A();
		if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
		{
			if (unk_0xD9C1758D86688CEA(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_48) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_45)
		{
			if (unk_0xD9C1758D86688CEA(iParam0, unk_0xBC25C936A095B5BA(), 1))
			{
				if (IntToFloat(iLocal_48) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xD9C1758D86688CEA(iParam0, unk_0xBC25C936A095B5BA(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		iVar1 = unk_0x3E12B546F3F2597A();
		if (!unk_0x1D403DFADBC2DE3C(iVar1, 0))
		{
			if (unk_0xD9C1758D86688CEA(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
		{
			if (unk_0xA4813477CC5DD00F(iParam0))
			{
				if (unk_0x33213E99DDEE4631(iParam0) == unk_0xBC25C936A095B5BA())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0xABB2AFD7539464EA(unk_0xBC25C936A095B5BA()))
		{
			if (unk_0x4DBCE270B354E123(iParam0, unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 10f, 10f, 10f, false, true, 0))
			{
				if (unk_0x231DB1D0F4218A1B(unk_0xB5CEFD608600A09F()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0xADA34C38F1319208(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0xD1071273B19F81DF(iParam0))
		{
			return 1;
		}
	}
	if (func_216(unk_0xBC25C936A095B5BA(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x2CDE18D6C89522AD(iParam0) && func_186(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (unk_0x5237AF95232D78C5(iParam0, 0))
		{
			if (unk_0xE921F8171F0733B3(unk_0xBC25C936A095B5BA(), unk_0x9FE9D386222EEE47(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0xE921F8171F0733B3(unk_0xBC25C936A095B5BA(), iParam0))
		{
			return 1;
		}
		if (!unk_0x1D403DFADBC2DE3C(iParam1, 0))
		{
			if (unk_0xD9C1758D86688CEA(iParam1, unk_0xBC25C936A095B5BA(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_216(int iParam0, int iParam1)//Position - 0xE00C
{
	int iVar0;
	
	unk_0x9CDD10270A1ACF6F(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0x32E373675659FDB0(iParam0))
		{
			if (SYSTEM::VDIST(unk_0x541C2AEF053615BC(iParam0, true), unk_0x541C2AEF053615BC(iParam1, true)) < 2.5f)
			{
				if (unk_0xC5B8A5F778E321DD(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_217()//Position - 0xE061
{
	var uVar0[2];
	int iVar1;
	int iVar2;
	
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0) && func_295())
	{
		iVar1 = unk_0x252B0CBDBF5803ED(unk_0xBC25C936A095B5BA(), &uVar0, -1);
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if ((((uVar0[iVar2] != unk_0xBC25C936A095B5BA() && uVar0[iVar2] != Local_66.f_2) && !unk_0x36CEFBE9B745A58D(uVar0[iVar2])) && !unk_0x5CAE759AE8219D20(uVar0[iVar2])) && !unk_0x8F97799512B006B7(uVar0[iVar2], 0))
			{
				unk_0x77815D3407C6700D(uVar0[iVar2], true, 1);
				unk_0x5558ED6D4A2DEC93(uVar0[iVar2], unk_0xBC25C936A095B5BA(), 100f, -1, 0, 0);
			}
			iVar2++;
		}
	}
}

void func_218()//Position - 0xE118
{
	var uVar0[2];
	int iVar1;
	int iVar2;
	
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0) && func_295())
	{
		iVar1 = unk_0x252B0CBDBF5803ED(unk_0xBC25C936A095B5BA(), &uVar0, -1);
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if ((uVar0[iVar2] != unk_0xBC25C936A095B5BA() && uVar0[iVar2] != Local_66.f_2) && !unk_0x5CAE759AE8219D20(uVar0[iVar2]))
			{
				unk_0x77815D3407C6700D(uVar0[iVar2], true, 1);
				unk_0x02DAF06EA4F08219(&iLocal_78);
				unk_0xC5A6DFE2B8987B17(&iLocal_78);
				unk_0xEE7131C3C73E7282(0, 5000);
				unk_0x5558ED6D4A2DEC93(0, unk_0xBC25C936A095B5BA(), 100f, -1, 0, 0);
				unk_0x535008C596714F9E(iLocal_78);
				unk_0xA8E6405305C0D7DF(uVar0[iVar2], iLocal_78);
			}
			iVar2++;
		}
	}
}

void func_219()//Position - 0xE1D3
{
	if (func_24(Local_66) == joaat("weapon_rpg"))
	{
		Local_66.f_1CA = 1;
	}
	else if (func_24(Local_66) == joaat("weapon_knife"))
	{
		Local_66.f_1CB = 1;
	}
	else if (((func_24(Local_66) == joaat("weapon_hammer") || func_24(Local_66) == joaat("weapon_crowbar")) || func_24(Local_66) == joaat("weapon_bat")) || func_24(Local_66) == joaat("weapon_bottle"))
	{
		Local_66.f_1CC = 1;
	}
	else if ((func_24(Local_66) == joaat("weapon_grenade") || func_24(Local_66) == joaat("weapon_smokegrenade")) || func_24(Local_66) == joaat("weapon_molotov"))
	{
		Local_66.f_1CD = 1;
	}
	else if (func_24(Local_66) == joaat("weapon_stickybomb"))
	{
		Local_66.f_1CE = 1;
	}
	iLocal_60 = 12;
	func_196();
	iLocal_59 = 2;
	iLocal_63 = 1;
	iLocal_62 = 6;
	Local_66.f_2.f_D = 0;
}

void func_220()//Position - 0xE2BF
{
	if (iLocal_53 == 0)
	{
		if (!unk_0x1D403DFADBC2DE3C(Local_66.f_2, 0))
		{
			switch (iLocal_56)
			{
				case 1:
					iLocal_56 = 0;
					break;
				
				case 2:
					unk_0xE896C0AD02364F2A(Local_66.f_2, Local_66.f_2.f_F, Local_66.f_2.f_11, 8f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_56 = 0;
					break;
				
				case 3:
					unk_0xE896C0AD02364F2A(Local_66.f_2, Local_66.f_2.f_F, Local_66.f_2.f_12, 8f, -4f, -1, 0, 0, 0, 0, 0);
					iLocal_56 = 0;
					break;
				
				case 4:
					unk_0xE896C0AD02364F2A(Local_66.f_2, Local_66.f_2.f_F, Local_66.f_2.f_13, 8f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_56 = 0;
					break;
				
				case 5:
					unk_0xE896C0AD02364F2A(Local_66.f_2, Local_66.f_2.f_F, Local_66.f_2.f_14, 8f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_56 = 0;
					break;
				
				case 6:
					iLocal_56 = 0;
					break;
				
				case 7:
					unk_0xE896C0AD02364F2A(Local_66.f_2, Local_66.f_2.f_F, Local_66.f_2.f_15, 8f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_56 = 0;
					break;
				}
			}
	}
}

void func_221()//Position - 0xE3E9
{
	switch (iLocal_57)
	{
		case 1:
			func_214();
			iLocal_57 = 2;
			break;
		
		case 2:
			if (iLocal_53 == 2)
			{
				func_223();
				Local_66.f_2.f_D = 0;
				iLocal_57 = 3;
			}
			if ((func_44() || func_43()) && !Local_66.f_2.f_D)
			{
				Local_66.f_2.f_D = 1;
			}
			if (!Local_66.f_2.f_E)
			{
				if (!unk_0x36CEFBE9B745A58D(Local_66.f_2) && unk_0x889DA6CE8E4DB344(Local_66.f_2))
				{
					Local_66.f_2.f_E = 1;
				}
			}
			if ((Local_66.f_2.f_D && !unk_0x36CEFBE9B745A58D(Local_66.f_2)) && !iLocal_58 == 12)
			{
				func_222();
			}
			break;
		
		case 3:
			if (iLocal_53 >= 7)
			{
				func_214();
				iLocal_57 = 4;
			}
			break;
	}
}

void func_222()//Position - 0xE4AF
{
	if ((unk_0x105601648511CC64() - Local_66.f_2.f_A) > 5000)
	{
		unk_0x02DAF06EA4F08219(&(Local_66.f_2.f_18));
		unk_0xC5A6DFE2B8987B17(&(Local_66.f_2.f_18));
		unk_0x85DB484A637CEAB9(0, Local_66, 0);
		unk_0x56F2E1B5599188FA(0, Local_66, -1, 0, 2);
		unk_0x535008C596714F9E(Local_66.f_2.f_18);
		unk_0xA8E6405305C0D7DF(Local_66.f_2, Local_66.f_2.f_18);
		Local_66.f_2.f_A = unk_0x105601648511CC64();
	}
}

void func_223()//Position - 0xE510
{
	if (!unk_0x1D403DFADBC2DE3C(Local_66.f_2, 0))
	{
		unk_0x44C98C11ED6DD327(Local_66.f_2);
	}
}

int func_224()//Position - 0xE52D
{
	if (unk_0x596EC89128D2052F(Local_66.f_BA, Local_66.f_BD, Local_66.f_C0, 1))
	{
		return 1;
	}
	return 0;
}

int func_225()//Position - 0xE552
{
	if (unk_0x6E65ED1DEEDEE6F8(-1, Local_66.f_BA, Local_66.f_BD, Local_66.f_C0))
	{
		return 1;
	}
	return 0;
}

void func_226()//Position - 0xE577
{
	if (!Local_66.f_1D1)
	{
		if (func_227())
		{
			if (!func_14(&(Local_66.f_1DA)))
			{
				func_11(&(Local_66.f_1DA));
			}
			else if (func_187(&(Local_66.f_1DA), 1f))
			{
				Local_66.f_1D1 = 1;
				iLocal_51 = 26;
				if (!unk_0x36CEFBE9B745A58D(Local_66.f_2))
				{
					unk_0x5558ED6D4A2DEC93(Local_66.f_2, unk_0xBC25C936A095B5BA(), 100f, -1, 0, 0);
					func_15(1, 0);
				}
			}
		}
		else if (func_14(&(Local_66.f_1DA)))
		{
			func_39(&(Local_66.f_1DA));
		}
	}
}

int func_227()//Position - 0xE5FD
{
	int iVar0;
	
	if (!unk_0x1D403DFADBC2DE3C(Local_66, 0))
	{
		if (func_228())
		{
			unk_0x9CDD10270A1ACF6F(Local_66, &iVar0, 1);
			if (iVar0 == joaat("weapon_petrolcan"))
			{
				if (unk_0x32E373675659FDB0(Local_66))
				{
					if (unk_0xC5B8A5F778E321DD(Local_66.f_2, Local_66, 180f))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_228()//Position - 0xE64B
{
	if (!unk_0x1D403DFADBC2DE3C(Local_66, 0))
	{
		if (unk_0x0C265B3C448E6954(Local_66, Local_66.f_BA, Local_66.f_BD, Local_66.f_C0, 0, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_229()//Position - 0xE67F
{
	if (iLocal_58 != 12)
	{
		if (!unk_0x1D403DFADBC2DE3C(Local_66.f_2, 0))
		{
			if (unk_0x889DA6CE8E4DB344(Local_66.f_2))
			{
				unk_0x5558ED6D4A2DEC93(Local_66.f_2, Local_66, 100f, -1, 0, 0);
				iLocal_58 = 12;
				iLocal_57 = 4;
				iLocal_56 = 8;
				iLocal_60 = 15;
				if (iLocal_63 == 1)
				{
					iLocal_63 = 2;
				}
				else
				{
					iLocal_63 = 3;
				}
				iLocal_62 = 13;
				iLocal_51 = 27;
				if (!Local_66.f_2.f_E)
				{
					Local_66.f_2.f_E = 1;
				}
			}
		}
	}
}

void func_230()//Position - 0xE6EF
{
	switch (iLocal_55)
	{
		case 1:
			if (Local_66.f_1E6 >= 0)
			{
				if (unk_0x77FC50899603581D(Local_66.f_1E6))
				{
					if (unk_0x8FD30584EB38411B(Local_66.f_1E6) > 0.876f)
					{
						iLocal_55 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (Local_66.f_1E6 >= 0)
			{
				if (unk_0x77FC50899603581D(Local_66.f_1E6))
				{
					if (unk_0x8FD30584EB38411B(Local_66.f_1E6) > 0.894f || (unk_0x8FD30584EB38411B(Local_66.f_1E6) > 0.871f && SYSTEM::VDIST2(unk_0x541C2AEF053615BC(Local_66.f_1C, true), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true)) < 1f))
					{
						iLocal_55 = 3;
					}
				}
			}
			break;
		
		case 3:
			func_15(1, 0);
			func_231(0);
			unk_0x8AB4D83A9145FCD7(Local_66.f_1C, false, 0);
			iLocal_55 = 5;
			break;
		
		case 4:
			func_15(1, 0);
			func_231(1);
			unk_0xDC078F87049ECECE(Local_66.f_1C, false, 0);
			iLocal_55 = 5;
			break;
		
		case 5:
			if (unk_0xB6A16B5E7EB81F9B(Local_66.f_1C, unk_0xBC25C936A095B5BA()))
			{
				func_200(func_100(), 1, iLocal_81, 0, 0);
				unk_0xDC078F87049ECECE(Local_66.f_1C, false, 0);
				if (unk_0x2DA8CA50A72528FB(Local_66.f_1C.f_2))
				{
					unk_0x07B8ECB35A4ED3AC(&(Local_66.f_1C.f_2));
				}
				if (iLocal_60 != 12)
				{
					iLocal_60 = 12;
				}
				func_191(297, 0, 0);
				Local_66.f_1D4 = 1;
				Local_66.f_1C.f_6 = unk_0x2F079D1FC5F6CB99();
				unk_0xC4BA30B532FE260F(-1, "ROBBERY_MONEY_TOTAL", "HUD_FRONTEND_CUSTOM_SOUNDSET", true);
				func_12(&(Local_66.f_1C.f_F));
				iLocal_55 = 6;
			}
			else if (!unk_0x1D403DFADBC2DE3C(Local_66.f_1C, 0) && unk_0x8F6EAC9E7D6812D5(Local_66.f_1C))
			{
			}
			break;
		
		case 6:
			if (func_8(&(Local_66.f_1C.f_F)) > 2.5f)
			{
				if (unk_0x724D816EA203A79E(Local_66.f_1C) && unk_0xB6A16B5E7EB81F9B(Local_66.f_1C, unk_0xBC25C936A095B5BA()))
				{
					unk_0x17175087F2DB6AC8(unk_0xBC25C936A095B5BA(), 1, true);
					unk_0xA35241BCE4C1A24B(&(Local_66.f_1C));
				}
				iLocal_55 = 7;
			}
			break;
	}
}

void func_231(bool bParam0)//Position - 0xE8C8
{
	Local_66.f_1C.f_3 = 0;
	unk_0xF0059F27F7BB6680(&(Local_66.f_1C.f_3), 3);
	unk_0xF0059F27F7BB6680(&(Local_66.f_1C.f_3), 4);
	if (!bParam0)
	{
		iLocal_81 = unk_0x491B2241281A03B7(Local_66.f_1C.f_4, Local_66.f_1C.f_5);
		if (!unk_0x2DA8CA50A72528FB(Local_66.f_1C.f_2))
		{
			Local_66.f_1C.f_2 = func_234(Local_66.f_1C);
			unk_0x0D5352939CC40C16(Local_66.f_1C.f_2, 2);
		}
		unk_0xCF04858BE075051B(Local_66.f_1C, -0.2f, 1);
	}
	else
	{
		iLocal_81 = unk_0x491B2241281A03B7(50, Local_66.f_1C.f_4);
		Local_66.f_1C.f_1 = unk_0x249B372087B496EC(joaat("pickup_money_variable"), unk_0x541C2AEF053615BC(Local_66.f_1C, true), Local_66.f_1C.f_3, iLocal_81, 1, 0);
		if (!unk_0x2DA8CA50A72528FB(Local_66.f_1C.f_2))
		{
			Local_66.f_1C.f_2 = func_232(Local_66.f_1C.f_1);
		}
	}
	Local_66.f_1C.f_E = 1;
}

int func_232(int iParam0)//Position - 0xE995
{
	int iVar0;
	
	if (!unk_0xA901403F1DB7A780(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x480F8C5F7EE6B525(iParam0);
	unk_0x3F5F1772D71D5EC4(iVar0, func_233(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
	return iVar0;
}

float func_233(bool bParam0, float fParam1, float fParam2)//Position - 0xE9CD
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_234(int iParam0)//Position - 0xE9E4
{
	return func_235(iParam0, 1, 0);
}

int func_235(int iParam0, bool bParam1, bool bParam2)//Position - 0xE9F4
{
	int iVar0;
	
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x511FE22BCF5353CD(iParam0);
	if (unk_0xD27AC0E9B78CFDD7(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(iVar0, func_233(unk_0x7AF0088ABFA713B6(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xF9C2945DB5BAB4BF(iVar0, bParam1);
		}
		else
		{
			unk_0x0D5352939CC40C16(iVar0, 2);
		}
	}
	else if (unk_0x386592AF38881675(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(iVar0, func_233(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
		unk_0xF9C2945DB5BAB4BF(iVar0, bParam1);
	}
	else if (unk_0xB12D030810E8447D(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(iVar0, func_233(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
	}
	return iVar0;
}

void func_236()//Position - 0xEA98
{
	int iVar0;
	int iVar1;
	
	if (Local_66.f_1D0)
	{
		switch (iLocal_59)
		{
			case 2:
				if (func_1(Local_66.f_1D6, 4))
				{
					func_240();
					Local_66.f_2E.f_27 = unk_0x105601648511CC64();
					iLocal_59 = 3;
				}
				break;
			
			case 3:
				if (unk_0x105601648511CC64() - Local_66.f_2E.f_27) > unk_0x491B2241281A03B7(1000, 3000)
				{
					if (unk_0xE59B7F5A03335350(Local_66.f_2E.f_4[0], 0))
					{
						unk_0x0FB6723EA68C0881(Local_66.f_2E.f_4[0], true);
					}
					iLocal_59 = 4;
				}
				break;
			
			case 4:
				if (func_239() && func_238())
				{
					iLocal_59 = 5;
				}
				break;
			
			case 5:
				iLocal_51 = 24;
				func_15(1, 0);
				iLocal_59 = 6;
				break;
			
			case 6:
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if ((((unk_0x36CEFBE9B745A58D(Local_66.f_2E[iVar0]) || (!unk_0x1D403DFADBC2DE3C(Local_66.f_2E[iVar0], 0) && unk_0x3D3F3014B0F74446(Local_66.f_2E[iVar0], 0, 2))) || unk_0x36CEFBE9B745A58D(Local_66.f_2)) || (!unk_0x1D403DFADBC2DE3C(Local_66.f_2, 0) && unk_0x3D3F3014B0F74446(Local_66.f_2, 0, 2))) || func_20(Local_66, Local_66.f_2, &(Local_66.f_1C3), 1))
					{
						func_15(2, 0);
						iVar1 = 0;
						while (iVar1 < 3)
						{
							if (!unk_0x36CEFBE9B745A58D(Local_66.f_2E[iVar1]))
							{
								unk_0xB8CBD998685C0685(Local_66.f_2E[iVar1], unk_0xBC25C936A095B5BA(), 0, 16);
								unk_0x2E35C4FA5F0ED22F(Local_66.f_2E[iVar1], false);
							}
							iVar1++;
						}
						iLocal_59 = 0;
					}
					iVar0++;
				}
				break;
			
			case 7:
				func_237();
				iLocal_59 = 0;
				break;
			}
	}
}

void func_237()//Position - 0xEC3A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x1D403DFADBC2DE3C(Local_66.f_2E[iVar0], 0))
		{
			unk_0x2E35C4FA5F0ED22F(Local_66.f_2E[iVar0], false);
		}
		iVar0++;
	}
}

int func_238()//Position - 0xEC72
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x1D403DFADBC2DE3C(Local_66.f_2E[iVar0], 0))
		{
			if (!unk_0x5237AF95232D78C5(Local_66.f_2E[iVar0], 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_239()//Position - 0xECB3
{
	int iVar0;
	
	if (!unk_0x1D403DFADBC2DE3C(Local_66, 0))
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (!unk_0x1D403DFADBC2DE3C(Local_66.f_2E[iVar0], 0))
			{
				if (!unk_0x41A5D6415E2CC10E(Local_66.f_2E[iVar0]))
				{
					return 1;
				}
			}
			if (!unk_0x1D403DFADBC2DE3C(Local_66.f_2E.f_4[iVar0], 0))
			{
				if (!unk_0x41A5D6415E2CC10E(Local_66.f_2E.f_4[iVar0]))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_240()//Position - 0xED27
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Local_66.f_2E[iVar0] = unk_0x01B3635C3E8EDD81(6, Local_66.f_2E.f_1A, Local_66.f_2E.f_8[iVar0 /*3*/], Local_66.f_2E.f_12[iVar0], 1, true);
		unk_0x77815D3407C6700D(Local_66.f_2E[iVar0], true, 0);
		unk_0x2E35C4FA5F0ED22F(Local_66.f_2E[iVar0], true);
		Local_66.f_2E.f_4[iVar0] = unk_0x61C05BF08A1E0EFE(Local_66.f_2E.f_1B, Local_66.f_2E.f_8[iVar0 /*3*/], Local_66.f_2E.f_12[iVar0], true, true, false);
		unk_0x77815D3407C6700D(Local_66.f_2E.f_4[iVar0], true, 0);
		if (!(unk_0x1D403DFADBC2DE3C(Local_66.f_2E[iVar0], 0) && unk_0x1D403DFADBC2DE3C(Local_66.f_2E.f_4[iVar0], 0)))
		{
			unk_0xBD53A029D0155A42(Local_66.f_2E[iVar0], Local_66.f_2E.f_4[iVar0], -1);
			unk_0x7A535CE1F001F3FE(Local_66.f_2E[iVar0], joaat("weapon_pistol"), 99, false, true);
		}
		unk_0xC5A6DFE2B8987B17(&(Local_66.f_2E.f_23[iVar0]));
		unk_0x509F549022512095(0, Local_66.f_2E.f_4[iVar0], Local_66.f_2E.f_16, (unk_0x2D175DF90F6F05C3(Local_66.f_2E.f_4[iVar0]) - 8f), 1, Local_66.f_2E.f_1B, 786981, Local_66.f_2E.f_19, -1f);
		unk_0xA3981DED4FC2E56E(0, 0, 0);
		unk_0x57D65255D3D3B6A7(0, Local_66, -1, 0);
		unk_0x535008C596714F9E(Local_66.f_2E.f_23[iVar0]);
		unk_0xA8E6405305C0D7DF(Local_66.f_2E[iVar0], Local_66.f_2E.f_23[iVar0]);
		iVar0++;
	}
}

void func_241()//Position - 0xEE94
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(Local_66))
	{
		unk_0x9CDD10270A1ACF6F(Local_66, &iVar0, 1);
	}
	else
	{
		return;
	}
	iVar1 = 0;
	switch (iLocal_60)
	{
		case 1:
			iLocal_60 = 6;
			break;
		
		case 2:
			iLocal_51 = 2;
			iLocal_60 = 5;
			break;
		
		case 3:
			iLocal_51 = 3;
			iLocal_60 = 5;
			break;
		
		case 4:
			iLocal_51 = 4;
			iLocal_60 = 5;
			break;
		
		case 5:
			if (((((func_24(Local_66) != joaat("weapon_unarmed") && iVar0 != joaat("weapon_bat")) && iVar0 != joaat("weapon_hammer")) && iVar0 != joaat("weapon_crowbar")) && iVar0 != joaat("weapon_bottle")) && func_295())
			{
				iLocal_60 = 7;
			}
			break;
		
		case 6:
			if (func_24(Local_66) != joaat("weapon_unarmed") && func_295())
			{
				if (iVar0 == joaat("weapon_bat"))
				{
					iLocal_60 = 8;
				}
				else if ((iVar0 == joaat("weapon_crowbar") || iVar0 == joaat("weapon_hammer")) || iVar0 == joaat("weapon_bottle"))
				{
					iLocal_60 = 9;
				}
				else if (iVar0 == joaat("weapon_stickybomb"))
				{
					iLocal_60 = 10;
				}
				else if ((iVar0 != joaat("weapon_petrolcan") && iVar0 != joaat("object")) && iVar0 != joaat("weapon_briefcase"))
				{
					iLocal_60 = 7;
				}
			}
			break;
		
		case 7:
			iLocal_51 = 5;
			iLocal_56 = 3;
			iLocal_60 = 15;
			break;
		
		case 8:
			iLocal_51 = 2;
			iLocal_56 = 2;
			iLocal_60 = 5;
			break;
		
		case 9:
			iLocal_51 = 3;
			iLocal_56 = 2;
			iLocal_60 = 5;
			break;
		
		case 10:
			iLocal_51 = 4;
			iLocal_56 = 2;
			iLocal_60 = 5;
			break;
		
		case 11:
			if (func_20(Local_66, Local_66.f_2, &(Local_66.f_1C3), 1))
			{
				func_219();
				iLocal_58 = 5;
			}
			break;
		
		case 12:
			if (!func_295())
			{
				if (!Local_66.f_1D0)
				{
					iLocal_62 = 9;
					iLocal_60 = 15;
				}
				else
				{
					iLocal_60 = 13;
				}
			}
			break;
		
		case 13:
			if (unk_0x8910237449BB6F79(Local_66) < 0.1f && !func_243())
			{
				func_242();
				iLocal_60 = 14;
			}
			else if (func_243() && !func_295())
			{
				iLocal_60 = 14;
			}
			break;
		
		case 14:
			if (func_243() && !func_295())
			{
				iVar1 = 0;
				while (iVar1 < 3)
				{
					if (!unk_0x36CEFBE9B745A58D(Local_66.f_2E[iVar1]))
					{
						unk_0xB8CBD998685C0685(Local_66.f_2E[iVar1], unk_0xBC25C936A095B5BA(), 0, 16);
						unk_0x2E35C4FA5F0ED22F(Local_66.f_2E[iVar1], false);
					}
					iVar1++;
				}
				iLocal_62 = 9;
				iLocal_60 = 15;
			}
			break;
	}
}

void func_242()//Position - 0xF124
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x1D403DFADBC2DE3C(Local_66.f_2E[iVar0], 0))
		{
			if (!unk_0x32466DD5F50E57BE(Local_66.f_2E[iVar0]))
			{
				unk_0xA4E856A8CD53B8DF(Local_66.f_2E[iVar0]);
				unk_0x8BB35D6CAD2DF7C4(Local_66.f_2E[iVar0], Local_66);
			}
		}
		iVar0++;
	}
}

int func_243()//Position - 0xF179
{
	if (!unk_0x1D403DFADBC2DE3C(Local_66, 0))
	{
		if (unk_0x0C265B3C448E6954(Local_66, Local_66.f_2E.f_1C, Local_66.f_2E.f_1F, Local_66.f_2E.f_22, 0, true, 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_244()//Position - 0xF1B3
{
	switch (iLocal_63)
	{
		case 0:
			if (!iLocal_93)
			{
				if (func_245())
				{
					iLocal_51 = 9;
					iLocal_58 = 7;
					iLocal_50 = 3;
					iLocal_62 = 13;
					iLocal_63 = 3;
					iLocal_93 = 1;
				}
			}
			break;
		
		case 1:
			break;
	}
}

int func_245()//Position - 0xF1F7
{
	int iVar0;
	vector3 vVar1;
	
	if (unk_0x724D816EA203A79E(Local_66))
	{
		unk_0x9CDD10270A1ACF6F(Local_66, &iVar0, 1);
	}
	else
	{
		return 0;
	}
	if (!func_1(Local_66.f_1D6, 128))
	{
		if ((unk_0x2CDE18D6C89522AD(Local_66.f_2) || (unk_0xD9C1758D86688CEA(Local_66.f_2, Local_66, 1) && iVar0 == joaat("weapon_unarmed"))) || func_246(Local_66.f_2, Local_66.f_2.f_1, 1) > 1.15f)
		{
			if (unk_0x2CDE18D6C89522AD(Local_66.f_2))
			{
			}
			if (unk_0xD9C1758D86688CEA(Local_66.f_2, Local_66, 1) && iVar0 == joaat("weapon_unarmed"))
			{
			}
			if (func_246(Local_66.f_2, Local_66.f_2.f_1, 1) > 1.15f)
			{
			}
			if (!unk_0x4DBCE270B354E123(Local_66.f_2, Local_66.f_2.f_1, 0.35f, 0.35f, 1f, false, true, 0))
			{
				vVar1 = { unk_0x541C2AEF053615BC(Local_66.f_2, true) };
				vVar1 = { Local_66.f_2.f_1 };
			}
			return 1;
		}
	}
	return 0;
}

float func_246(int iParam0, vector3 vParam1, bool bParam2)//Position - 0xF2EE
{
	vector3 vVar0;
	
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		vVar0 = { unk_0x541C2AEF053615BC(iParam0, true) };
	}
	else
	{
		vVar0 = { unk_0x541C2AEF053615BC(iParam0, false) };
	}
	return unk_0xF0F2FC9DE291567F(vVar0, vParam1, bParam2);
}

void func_247()//Position - 0xF328
{
	switch (iLocal_61)
	{
		case 0:
			if (func_275())
			{
				iLocal_61 = 1;
			}
			break;
		
		case 1:
			func_268();
			iLocal_61 = 2;
			break;
		
		case 2:
			func_264();
			iLocal_61 = 3;
			break;
		
		case 3:
			if (func_259())
			{
				iLocal_61 = 4;
			}
			break;
		
		case 4:
			func_248();
			unk_0xA67D3DDB524B8DBA(unk_0xB5CEFD608600A09F());
			iLocal_65 = 1;
			break;
	}
}

void func_248()//Position - 0xF395
{
	func_252();
	func_251();
	func_250();
	if (unk_0xBF697FA7422C0621(Local_66.f_B9))
	{
		unk_0x7FDC51451428DF70(Local_66.f_2, Local_66.f_B9);
		unk_0x7FDC51451428DF70(Local_66.f_1C, Local_66.f_B9);
		if (!bLocal_86)
		{
			unk_0x7FDC51451428DF70(Local_66.f_60.f_1, Local_66.f_B9);
		}
	}
	func_249();
}

void func_249()//Position - 0xF3E8
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
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	
	iVar0 = unk_0x491B2241281A03B7(1, 11);
	iVar1 = unk_0x491B2241281A03B7(1, 5);
	iVar2 = unk_0x491B2241281A03B7(1, 5);
	iVar3 = unk_0x491B2241281A03B7(1, 3);
	iVar4 = unk_0x491B2241281A03B7(1, 6);
	iVar5 = unk_0x491B2241281A03B7(1, 4);
	iVar6 = unk_0x491B2241281A03B7(1, 5);
	iVar7 = unk_0x491B2241281A03B7(1, 4);
	iVar8 = unk_0x491B2241281A03B7(1, 4);
	iVar9 = unk_0x491B2241281A03B7(1, 5);
	iVar10 = unk_0x491B2241281A03B7(1, 5);
	iVar11 = unk_0x491B2241281A03B7(1, 5);
	iVar12 = unk_0x491B2241281A03B7(1, 5);
	iVar13 = unk_0x491B2241281A03B7(1, 9);
	iVar14 = unk_0x491B2241281A03B7(1, 3);
	iVar15 = unk_0x491B2241281A03B7(1, 5);
	iVar16 = unk_0x491B2241281A03B7(1, 3);
	iVar17 = unk_0x491B2241281A03B7(1, 6);
	iVar18 = unk_0x491B2241281A03B7(1, 5);
	iVar19 = unk_0x491B2241281A03B7(1, 4);
	iVar20 = unk_0x491B2241281A03B7(1, 4);
	iVar21 = unk_0x491B2241281A03B7(1, 4);
	iVar22 = unk_0x491B2241281A03B7(1, 6);
	iVar23 = unk_0x491B2241281A03B7(1, 6);
	iVar24 = unk_0x491B2241281A03B7(1, 6);
	iVar25 = unk_0x491B2241281A03B7(1, 6);
	iVar26 = unk_0x491B2241281A03B7(1, 4);
	iVar27 = unk_0x491B2241281A03B7(1, 3);
	iVar28 = unk_0x491B2241281A03B7(1, 4);
	iVar29 = unk_0x491B2241281A03B7(1, 4);
	if (func_100() == 0)
	{
		switch (iVar12)
		{
			case 1:
				Local_66.f_DD.f_D2 = "OJSR_HOLDUP_1";
				break;
			
			case 2:
				Local_66.f_DD.f_D2 = "OJSR_HOLDUP_2";
				break;
			
			case 3:
				Local_66.f_DD.f_D2 = "OJSR_HOLDUP_3";
				break;
			
			case 4:
				Local_66.f_DD.f_D2 = "OJSR_HOLDUP_4";
				break;
		}
		switch (iVar20)
		{
			case 1:
				Local_66.f_DD.f_DC = "OJSR_COPS_1";
				break;
			
			case 2:
				Local_66.f_DD.f_DC = "OJSR_COPS_2";
				break;
			
			case 3:
				Local_66.f_DD.f_DC = "OJSR_COPS_3";
				break;
		}
		switch (iVar27)
		{
			case 1:
				Local_66.f_DD.f_E3 = "OJSR_PLRHUR_1";
				break;
			
			case 2:
				Local_66.f_DD.f_E3 = "OJSR_PLRHUR_2";
				break;
		}
	}
	else if (func_100() == 1)
	{
		switch (iVar12)
		{
			case 1:
				Local_66.f_DD.f_D2 = "OJSR_HOLDUP_5";
				break;
			
			case 2:
				Local_66.f_DD.f_D2 = "OJSR_HOLDUP_6";
				break;
			
			case 3:
				Local_66.f_DD.f_D2 = "OJSR_HOLDUP_7";
				break;
			
			case 4:
				Local_66.f_DD.f_D2 = "OJSR_HOLDUP_8";
				break;
		}
		switch (iVar20)
		{
			case 1:
				Local_66.f_DD.f_DC = "OJSR_COPS_5";
				break;
			
			case 2:
				Local_66.f_DD.f_DC = "OJSR_COPS_6";
				break;
			
			case 3:
				Local_66.f_DD.f_DC = "OJSR_COPS_7";
				break;
		}
		switch (iVar27)
		{
			case 1:
				Local_66.f_DD.f_E3 = "OJSR_PLRHUR_3";
				break;
			
			case 2:
				Local_66.f_DD.f_E3 = "OJSR_PLRHUR_4";
				break;
		}
	}
	else if (func_100() == 2)
	{
		switch (iVar12)
		{
			case 1:
				Local_66.f_DD.f_D2 = "OJSR_HOLDUP_9";
				break;
			
			case 2:
				Local_66.f_DD.f_D2 = "OJSR_HOLDUP_10";
				break;
			
			case 3:
				Local_66.f_DD.f_D2 = "OJSR_HOLDUP_11";
				break;
			
			case 4:
				Local_66.f_DD.f_D2 = "OJSR_HOLDUP_12";
				break;
		}
		switch (iVar20)
		{
			case 1:
				Local_66.f_DD.f_DC = "OJSR_COPS_9";
				break;
			
			case 2:
				Local_66.f_DD.f_DC = "OJSR_COPS_10";
				break;
			
			case 3:
				Local_66.f_DD.f_DC = "OJSR_COPS_11";
				break;
		}
		switch (iVar27)
		{
			case 1:
				Local_66.f_DD.f_E3 = "OJSR_PLRHUR_5";
				break;
			
			case 2:
				Local_66.f_DD.f_E3 = "OJSR_PLRHUR_6";
				break;
			}
	}
	switch (iVar0)
	{
		case 1:
			Local_66.f_DD.f_C6 = "OJSR_GREET_1";
			break;
		
		case 2:
			Local_66.f_DD.f_C6 = "OJSR_GREET_2";
			break;
		
		case 3:
			Local_66.f_DD.f_C6 = "OJSR_GREET_3";
			break;
		
		case 4:
			Local_66.f_DD.f_C6 = "OJSR_GREET_4";
			break;
		
		case 5:
			Local_66.f_DD.f_C6 = "OJSR_GREET_5";
			break;
		
		case 6:
			Local_66.f_DD.f_C6 = "OJSR_GREET_6";
			break;
		
		case 7:
			Local_66.f_DD.f_C6 = "OJSR_GREET_7";
			break;
		
		case 8:
			Local_66.f_DD.f_C6 = "OJSR_GREET_8";
			break;
		
		case 9:
			Local_66.f_DD.f_C6 = "OJSR_GREET_9";
			break;
		
		case 10:
			Local_66.f_DD.f_C6 = "OJSR_GREET_10";
			break;
	}
	switch (iVar1)
	{
		case 1:
			Local_66.f_DD.f_C7 = "OJSR_BATEQ_1";
			break;
		
		case 2:
			Local_66.f_DD.f_C7 = "OJSR_BATEQ_2";
			break;
		
		case 3:
			Local_66.f_DD.f_C7 = "OJSR_BATEQ_3";
			break;
		
		case 4:
			Local_66.f_DD.f_C7 = "OJSR_BATEQ_4";
			break;
	}
	switch (iVar2)
	{
		case 1:
			Local_66.f_DD.f_C8 = "OJSR_TOOLEQ_1";
			break;
		
		case 2:
			Local_66.f_DD.f_C8 = "OJSR_TOOLEQ_2";
			break;
		
		case 3:
			Local_66.f_DD.f_C8 = "OJSR_TOOLEQ_3";
			break;
		
		case 4:
			Local_66.f_DD.f_C8 = "OJSR_TOOLEQ_4";
			break;
	}
	switch (iVar3)
	{
		case 1:
			Local_66.f_DD.f_C9 = "OJSR_STICKEQ_1";
			break;
		
		case 2:
			Local_66.f_DD.f_C9 = "OJSR_STICKEQ_2";
			break;
	}
	switch (iVar4)
	{
		case 1:
			Local_66.f_DD.f_CA = "OJSR_WORRY_1";
			break;
		
		case 2:
			Local_66.f_DD.f_CA = "OJSR_WORRY_2";
			break;
		
		case 3:
			Local_66.f_DD.f_CA = "OJSR_WORRY_3";
			break;
		
		case 4:
			Local_66.f_DD.f_CA = "OJSR_WORRY_4";
			break;
		
		case 5:
			Local_66.f_DD.f_CA = "OJSR_WORRY_5";
			break;
	}
	switch (iVar5)
	{
		case 1:
			Local_66.f_DD.f_CB = "OJSR_SHOCK_1";
			break;
		
		case 2:
			Local_66.f_DD.f_CB = "OJSR_SHOCK_2";
			break;
		
		case 3:
			Local_66.f_DD.f_CB = "OJSR_SHOCK_3";
			break;
	}
	switch (iVar6)
	{
		case 1:
			Local_66.f_DD.f_CC = "OJSR_STUBBRN_1";
			break;
		
		case 2:
			Local_66.f_DD.f_CC = "OJSR_STUBBRN_2";
			break;
		
		case 3:
			Local_66.f_DD.f_CC = "OJSR_STUBBRN_3";
			break;
		
		case 4:
			Local_66.f_DD.f_CC = "OJSR_STUBBRN_4";
			break;
	}
	switch (iVar7)
	{
		case 1:
			Local_66.f_DD.f_CD = "OJSR_COUNTER_1";
			break;
		
		case 2:
			Local_66.f_DD.f_CD = "OJSR_COUNTER_2";
			break;
		
		case 3:
			Local_66.f_DD.f_CD = "OJSR_COUNTER_3";
			break;
	}
	switch (iVar8)
	{
		case 1:
			Local_66.f_DD.f_CE = "OJSR_BACKRM_1";
			break;
		
		case 2:
			Local_66.f_DD.f_CE = "OJSR_BACKRM_2";
			break;
		
		case 3:
			Local_66.f_DD.f_CE = "OJSR_BACKRM_3";
			break;
	}
	switch (iVar9)
	{
		case 1:
			Local_66.f_DD.f_CF = "OJSR_BUMP_1";
			break;
		
		case 2:
			Local_66.f_DD.f_CF = "OJSR_BUMP_2";
			break;
		
		case 3:
			Local_66.f_DD.f_CF = "OJSR_BUMP_3";
			break;
		
		case 4:
			Local_66.f_DD.f_CF = "OJSR_BUMP_4";
			break;
	}
	switch (iVar10)
	{
		case 1:
			Local_66.f_DD.f_D0 = "OJSR_BPAIM_1";
			break;
		
		case 2:
			Local_66.f_DD.f_D0 = "OJSR_BPAIM_2";
			break;
		
		case 3:
			Local_66.f_DD.f_D0 = "OJSR_BPAIM_3";
			break;
		
		case 4:
			Local_66.f_DD.f_D0 = "OJSR_BPAIM_4";
			break;
	}
	switch (iVar11)
	{
		case 1:
			Local_66.f_DD.f_D1 = "OJSR_BPAIMAG_1";
			break;
		
		case 2:
			Local_66.f_DD.f_D1 = "OJSR_BPAIMAG_2";
			break;
		
		case 3:
			Local_66.f_DD.f_D1 = "OJSR_BPAIMAG_3";
			break;
		
		case 4:
			Local_66.f_DD.f_D1 = "OJSR_BPAIMAG_4";
			break;
	}
	switch (iVar13)
	{
		case 1:
			Local_66.f_DD.f_D3 = "OJSR_SCARED_1";
			break;
		
		case 2:
			Local_66.f_DD.f_D3 = "OJSR_SCARED_2";
			break;
		
		case 3:
			Local_66.f_DD.f_D3 = "OJSR_SCARED_3";
			break;
		
		case 4:
			Local_66.f_DD.f_D3 = "OJSR_SCARED_4";
			break;
		
		case 5:
			Local_66.f_DD.f_D3 = "OJSR_SCARED_5";
			break;
		
		case 6:
			Local_66.f_DD.f_D3 = "OJSR_SCARED_6";
			break;
		
		case 7:
			Local_66.f_DD.f_D3 = "OJSR_SCARED_7";
			break;
		
		case 8:
			Local_66.f_DD.f_D3 = "OJSR_SCARED_8";
			break;
	}
	switch (iVar14)
	{
		case 1:
			Local_66.f_DD.f_D5 = "OJSR_SCARED_9";
			break;
		
		case 2:
			Local_66.f_DD.f_D5 = "OJSR_SCARED_10";
			break;
	}
	switch (iVar15)
	{
		case 1:
			Local_66.f_DD.f_D8 = "OJSR_GRANAIM_1";
			break;
		
		case 2:
			Local_66.f_DD.f_D8 = "OJSR_GRANAIM_2";
			break;
		
		case 3:
			Local_66.f_DD.f_D8 = "OJSR_GRANAIM_3";
			break;
		
		case 4:
			Local_66.f_DD.f_D8 = "OJSR_GRANAIM_4";
			break;
	}
	switch (iVar16)
	{
		case 1:
			Local_66.f_DD.f_D9 = "OJSR_STICAIM_1";
			break;
		
		case 2:
			Local_66.f_DD.f_D9 = "OJSR_STICAIM_2";
			break;
	}
	switch (iVar17)
	{
		case 1:
			Local_66.f_DD.f_D4 = "OJSR_BRAVE_1";
			break;
		
		case 2:
			Local_66.f_DD.f_D4 = "OJSR_BRAVE_2";
			break;
		
		case 3:
			Local_66.f_DD.f_D4 = "OJSR_BRAVE_3";
			break;
		
		case 4:
			Local_66.f_DD.f_D4 = "OJSR_BRAVE_4";
			break;
		
		case 5:
			Local_66.f_DD.f_D4 = "OJSR_BRAVE_5";
			break;
	}
	switch (iVar18)
	{
		case 1:
			Local_66.f_DD.f_DA = "OJSR_MOREAIM_1";
			break;
		
		case 2:
			Local_66.f_DD.f_DA = "OJSR_MOREAIM_2";
			break;
		
		case 3:
			Local_66.f_DD.f_DA = "OJSR_MOREAIM_3";
			break;
		
		case 4:
			Local_66.f_DD.f_DA = "OJSR_MOREAIM_4";
			break;
	}
	switch (iVar19)
	{
		case 1:
			Local_66.f_DD.f_DB = "OJSR_SURNDER_1";
			break;
		
		case 2:
			Local_66.f_DD.f_DB = "OJSR_SURNDER_2";
			break;
		
		case 3:
			Local_66.f_DD.f_DB = "OJSR_SURNDER_3";
			break;
	}
	switch (iVar21)
	{
		case 1:
			Local_66.f_DD.f_DD = "OJSR_POURCAN_1";
			break;
		
		case 2:
			Local_66.f_DD.f_DD = "OJSR_POURCAN_2";
			break;
		
		case 3:
			Local_66.f_DD.f_DD = "OJSR_POURCAN_3";
			break;
	}
	switch (iVar22)
	{
		case 1:
			Local_66.f_DD.f_DE = "OJSR_FLEE_1";
			break;
		
		case 2:
			Local_66.f_DD.f_DE = "OJSR_FLEE_2";
			break;
		
		case 3:
			Local_66.f_DD.f_DE = "OJSR_FLEE_3";
			break;
		
		case 4:
			Local_66.f_DD.f_DE = "OJSR_FLEE_4";
			break;
		
		case 5:
			Local_66.f_DD.f_DE = "OJSR_FLEE_5";
			break;
	}
	switch (iVar23)
	{
		case 1:
			Local_66.f_DD.f_DF = "OJSR_RECSCAR_1";
			break;
		
		case 2:
			Local_66.f_DD.f_DF = "OJSR_RECSCAR_2";
			break;
		
		case 3:
			Local_66.f_DD.f_DF = "OJSR_RECSCAR_3";
			break;
		
		case 4:
			Local_66.f_DD.f_DF = "OJSR_RECSCAR_4";
			break;
		
		case 5:
			Local_66.f_DD.f_DF = "OJSR_RECSCAR_5";
			break;
	}
	switch (iVar24)
	{
		case 1:
			Local_66.f_DD.f_E0 = "OJSR_RECAGGR_1";
			break;
		
		case 2:
			Local_66.f_DD.f_E0 = "OJSR_RECAGGR_2";
			break;
		
		case 3:
			Local_66.f_DD.f_E0 = "OJSR_RECAGGR_3";
			break;
		
		case 4:
			Local_66.f_DD.f_E0 = "OJSR_RECAGGR_4";
			break;
		
		case 5:
			Local_66.f_DD.f_E0 = "OJSR_RECAGGR_5";
			break;
	}
	switch (iVar25)
	{
		case 1:
			Local_66.f_DD.f_E1 = "OJSR_CSTMER_1";
			break;
		
		case 2:
			Local_66.f_DD.f_E1 = "OJSR_CSTMER_2";
			break;
		
		case 3:
			Local_66.f_DD.f_E1 = "OJSR_CSTMER_3";
			break;
		
		case 4:
			Local_66.f_DD.f_E1 = "OJSR_CSTMER_4";
			break;
		
		case 5:
			Local_66.f_DD.f_E1 = "OJSR_CSTMER_5";
			break;
	}
	switch (iVar26)
	{
		case 1:
			Local_66.f_DD.f_E2 = "OJSR_MOSC_1";
			break;
		
		case 2:
			Local_66.f_DD.f_E2 = "OJSR_MOSC_2";
			break;
		
		case 3:
			Local_66.f_DD.f_E2 = "OJSR_MOSC_3";
			break;
	}
	switch (iVar28)
	{
		case 1:
			Local_66.f_DD.f_E4 = "OJSR_BUY_1";
			break;
		
		case 2:
			Local_66.f_DD.f_E4 = "OJSR_BUY_2";
			break;
		
		case 3:
			Local_66.f_DD.f_E4 = "OJSR_BUY_3";
			break;
	}
	switch (iVar29)
	{
		case 1:
			Local_66.f_DD.f_E5 = "OJSR_STEAL_1";
			break;
		
		case 2:
			Local_66.f_DD.f_E5 = "OJSR_STEAL_2";
			break;
		
		case 3:
			Local_66.f_DD.f_E5 = "OJSR_STEAL_3";
			break;
	}
	Local_66.f_DD.f_A6 = "OJSRAUD";
	Local_66.f_DD.f_A7 = "OJSR_GREET";
	Local_66.f_DD.f_A8 = "OJSR_BATEQ";
	Local_66.f_DD.f_A9 = "OJSR_TOOLEQ";
	Local_66.f_DD.f_AA = "OJSR_STICKEQ";
	Local_66.f_DD.f_AB = "OJSR_WORRY";
	Local_66.f_DD.f_AC = "OJSR_SHOCK";
	Local_66.f_DD.f_AD = "OJSR_STUBBRN";
	Local_66.f_DD.f_AE = "OJSR_COUNTER";
	Local_66.f_DD.f_AF = "OJSR_BACKRM";
	Local_66.f_DD.f_B0 = "OJSR_BUMP";
	Local_66.f_DD.f_B1 = "OJSR_BPAIM";
	Local_66.f_DD.f_B2 = "OJSR_BPAIMAG";
	Local_66.f_DD.f_B3 = "OJSR_HOLDUP";
	Local_66.f_DD.f_B4 = "OJSR_SCARED";
	Local_66.f_DD.f_B5 = "OJSR_KNIFAIM";
	Local_66.f_DD.f_B6 = "OJSR_TOOLAIM";
	Local_66.f_DD.f_B7 = "OJSR_GRANAIM";
	Local_66.f_DD.f_B8 = "OJSR_STICAIM";
	Local_66.f_DD.f_B9 = "OJSR_BRAVE";
	Local_66.f_DD.f_BA = "OJSR_MOREAIM";
	Local_66.f_DD.f_BB = "OJSR_SURNDER";
	Local_66.f_DD.f_BC = "OJSR_COPS";
	Local_66.f_DD.f_BD = "OJSR_POURCAN";
	Local_66.f_DD.f_BE = "OJSR_FLEE";
	Local_66.f_DD.f_BF = "OJSR_RECSCAR";
	Local_66.f_DD.f_C0 = "OJSR_RECAGGR";
	Local_66.f_DD.f_C1 = "OJSR_CSTMER";
	Local_66.f_DD.f_C2 = "OJSR_MOSC";
	Local_66.f_DD.f_C3 = "OJSR_PLRHUR";
	Local_66.f_DD.f_C4 = "OJSR_BUY";
	Local_66.f_DD.f_C5 = "OJSR_STEAL";
	iLocal_91 = 0;
	iLocal_92 = 0;
	iLocal_93 = 0;
}

void func_250()//Position - 0x10176
{
	unk_0xE090137E6ECF31FE(Local_66.f_1E6.f_6, 0.5f, 303280717, 1);
	unk_0xE090137E6ECF31FE(Local_66.f_1E6.f_6, 0.5f, joaat("prop_till_02"), 1);
	unk_0xE090137E6ECF31FE(Local_66.f_1E6.f_6, 0.5f, joaat("prop_till_03"), 1);
	Local_66.f_60.f_1 = unk_0xB6896943DA475493(Local_66.f_60, Local_66.f_1E6.f_6, true, true, false);
	unk_0x019CE76D5286C95C(Local_66.f_60.f_1, Local_66.f_60.f_5);
	unk_0x346478B12F69D4E3(Local_66.f_60.f_1, true);
}

void func_251()//Position - 0x101FB
{
	Local_66.f_1C = unk_0x9AAFCC33C3B745BA(joaat("pickup_portable_crate_unfixed"), Local_66.f_1C.f_7, false, Local_66.f_1C.f_D);
	unk_0x784C605D172817C8(Local_66.f_1C, Local_66.f_1C.f_A, 2, 1);
	unk_0xDC078F87049ECECE(Local_66.f_1C, false, 0);
	unk_0x8AB4D83A9145FCD7(Local_66.f_1C, true, 0);
	Local_66.f_1C.f_E = 0;
}

void func_252()//Position - 0x1024C
{
	int iVar0;
	int iVar1;
	
	Local_66.f_2 = unk_0x01B3635C3E8EDD81(4, Local_66.f_2.f_5, Local_66.f_2.f_1, Local_66.f_2.f_4, 1, true);
	func_258(iLocal_80, &iVar1, &iVar0);
	unk_0xB0031DDAE4FF0BC3(Local_66.f_2, 0, iVar1, iVar0, 0);
	func_257(&iVar1, &iVar0);
	unk_0xB0031DDAE4FF0BC3(Local_66.f_2, 2, iVar1, iVar0, 0);
	func_256(&iVar1, &iVar0);
	unk_0xB0031DDAE4FF0BC3(Local_66.f_2, 3, iVar1, iVar0, 0);
	func_255(&iVar1, &iVar0);
	unk_0xB0031DDAE4FF0BC3(Local_66.f_2, 4, iVar1, iVar0, 0);
	func_254(&iVar1, &iVar0);
	unk_0xB0031DDAE4FF0BC3(Local_66.f_2, 8, iVar1, iVar0, 0);
	unk_0x2E35C4FA5F0ED22F(Local_66.f_2, true);
	if (Local_66.f_2.f_C)
	{
		func_253();
	}
}

void func_253()//Position - 0x102FB
{
	if (!unk_0x1D403DFADBC2DE3C(Local_66.f_2, 0))
	{
	}
}

void func_254(int iParam0, int iParam1)//Position - 0x10310
{
	*iParam0 = unk_0x491B2241281A03B7(0, 2);
	if (*iParam0 == 0)
	{
		*iParam1 = unk_0x491B2241281A03B7(0, 2);
	}
	else
	{
		*iParam1 = 0;
	}
}

void func_255(int iParam0, int iParam1)//Position - 0x10338
{
	*iParam0 = 0;
	*iParam1 = unk_0x491B2241281A03B7(0, 2);
}

void func_256(int iParam0, int iParam1)//Position - 0x1034D
{
	*iParam0 = unk_0x491B2241281A03B7(0, 2);
	*iParam1 = unk_0x491B2241281A03B7(0, 3);
}

void func_257(int iParam0, int iParam1)//Position - 0x10367
{
	*iParam0 = unk_0x491B2241281A03B7(0, 3);
	if (*iParam0 > 0)
	{
		*iParam1 = unk_0x491B2241281A03B7(0, 2);
	}
	else
	{
		*iParam1 = 0;
	}
}

void func_258(int iParam0, var uParam1, var uParam2)//Position - 0x1038F
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam1 = 0;
			*uParam2 = unk_0x491B2241281A03B7(0, 3);
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam1 = 1;
			*uParam2 = 0;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam1 = 2;
			*uParam2 = unk_0x491B2241281A03B7(0, 3);
			break;
	}
}

int func_259()//Position - 0x1043B
{
	if (!func_260(&Local_96))
	{
		return 0;
	}
	if (!bLocal_86)
	{
		if (!unk_0xF9E082857622D91E(Local_66.f_2.f_F))
		{
			return 0;
		}
	}
	if (!unk_0x18487DB48DC3A046(Local_66.f_B9))
	{
		return 0;
	}
	unk_0x80BDE252D8D954BC(0);
	return 1;
}

int func_260(var uParam0)//Position - 0x10481
{
	int iVar0;
	
	if (!uParam0->f_1F)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*2*/], 30))
		{
			if (!unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*2*/], 29))
			{
				return 0;
			}
			if (!func_261(uParam0[iVar0 /*2*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_1F = 0;
	return 1;
}

bool func_261(var uParam0)//Position - 0x104E3
{
	return func_262(*uParam0, "NULL", uParam0->f_1);
}

int func_262(int iParam0, char* sParam1, int iParam2)//Position - 0x104F8
{
	if (unk_0xFA30DFD0084E92FE(iParam0, 30))
	{
		if (unk_0xFA30DFD0084E92FE(iParam0, 29))
		{
			switch (func_263(iParam0))
			{
				case 0:
					return unk_0xD6513D668481290A(iParam2);
					break;
				
				case 1:
					return unk_0xF9E082857622D91E(sParam1);
					break;
				
				case 2:
					return unk_0x320539481B2F0121(sParam1);
					break;
				
				case 3:
					return unk_0x499783D01578C2D2(sParam1);
					break;
				
				case 4:
					return unk_0x00D24B3F2A5CD22C(iParam2, sParam1);
					break;
				
				case 5:
					return unk_0x1E8349F219AC5AF9(sParam1);
					break;
				
				case 6:
					return unk_0x284F2ACE6839D3C0(sParam1, unk_0xFA30DFD0084E92FE(iParam0, 27), -1);
					break;
				
				case 7:
					return unk_0xFEAEF0BFEF7FED8A(iParam2);
					break;
				
				case 8:
					return unk_0xFA9040D29FE330BD(iParam2);
					break;
				
				case 9:
					return unk_0x95654D7A61CD43DE();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_263(int iParam0)//Position - 0x105EC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xFA30DFD0084E92FE(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_264()//Position - 0x10618
{
	unk_0x80BDE252D8D954BC(1);
	if (!bLocal_86)
	{
		unk_0x522053D86D6E1C7A(Local_66.f_2.f_F);
		Local_96.f_20 = unk_0xC87A57742F7D3C06();
	}
	func_265(&Local_96, Local_66.f_2.f_5);
	func_265(&Local_96, Local_66.f_1C.f_D);
	func_265(&Local_96, Local_66.f_60);
	Local_66.f_1D2 = 1;
}

void func_265(var uParam0, int iParam1)//Position - 0x1066A
{
	func_266(uParam0, 0, iParam1, 0);
}

void func_266(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1067C
{
	int iVar0;
	
	if (!func_267(iParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*2*/], 30))
		{
			if (unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*2*/], iParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*2*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_1F)
	{
		uParam0->f_1F = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*2*/], 30))
		{
			(uParam0[iVar0 /*2*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*2*/] = iParam3;
			unk_0xF0059F27F7BB6680(uParam0[iVar0 /*2*/], iParam1);
			unk_0xF0059F27F7BB6680(uParam0[iVar0 /*2*/], 30);
			return;
		}
		iVar0++;
	}
}

int func_267(int iParam0)//Position - 0x1073F
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 1;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 0;
			break;
		
		case 9:
			return 1;
			break;
	}
	return 0;
}

void func_268()//Position - 0x107DE
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	func_273(iLocal_80, &(Local_66.f_2E.f_8), &(Local_66.f_2E.f_12), &(Local_66.f_2E.f_16), &(Local_66.f_2E.f_19), &(Local_66.f_2E.f_1A), &(Local_66.f_2E.f_1B), &(Local_66.f_2E.f_1C), &(Local_66.f_2E.f_1F), &(Local_66.f_2E.f_22));
	func_271(iLocal_80);
	vVar0 = { -3244.573f, 1000.658f, 12.83f };
	fVar3 = 175.074f;
	vVar1 = { -3242.008f, 1001.202f, 11.83071f };
	vVar2 = { vVar1 - vVar0 };
	vVar2 = { func_298(vVar2, fVar3) };
	vVar1 = { -3245.088f, 1001.468f, 13.65071f };
	vVar2 = { vVar1 - vVar0 };
	vVar2 = { func_298(vVar2, fVar3) };
	vVar1 = { -3243.37f, 1000.37f, 12.83f };
	vVar2 = { vVar1 - vVar0 };
	vVar2 = { func_298(vVar2, fVar3) };
	Local_66.f_1D5 = -1;
	Local_66.f_66.f_16 = -1;
	Local_66.f_60 = joaat("p_till_01_s");
	Local_66.f_60.f_2 = { Local_66.f_1E6.f_6 };
	Local_66.f_60.f_5 = (Local_66.f_1E6.f_9.f_2 + 180f);
	Local_66.f_1C3.f_3 = 0;
	Local_66.f_1CA = 0;
	Local_66.f_1CB = 0;
	Local_66.f_1CC = 0;
	Local_66.f_1CD = 0;
	Local_66.f_1CE = 0;
	Local_66.f_1D1 = 0;
	func_270(iLocal_80, &(Local_66.f_2.f_6), &(Local_66.f_2.f_9));
	func_269();
}

void func_269()//Position - 0x1094D
{
	Local_66.f_56.f_1 = joaat("a_m_y_soucent_04");
	Local_66.f_56.f_2 = { -1224.15f, -907.2f, 12.33f };
	Local_66.f_56.f_5 = 2f;
}

void func_270(int iParam0, var uParam1, var uParam2)//Position - 0x1097E
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -709.7998f, -907.1352f, 18.2156f };
			*uParam2 = 291.6504f;
			break;
		
		case 1:
			*uParam1 = { -41.8128f, -1749.685f, 28.421f };
			*uParam2 = 214.6526f;
			break;
		
		case 2:
			*uParam1 = { 1159.682f, -314.254f, 68.2051f };
			*uParam2 = 232.6337f;
			break;
		
		case 3:
			*uParam1 = { 1707.303f, 4918.31f, 41.0636f };
			*uParam2 = 24.9178f;
			break;
		
		case 4:
			*uParam1 = { -1828.907f, 799.6096f, 137.1776f };
			*uParam2 = 247.1234f;
			break;
		
		case 5:
			*uParam1 = { 1168.971f, 2719.118f, 36.0632f };
			*uParam2 = 136.5945f;
			break;
		
		case 6:
			*uParam1 = { -2962.983f, 391.9788f, 14.0433f };
			*uParam2 = 176.1174f;
			break;
		
		case 7:
			*uParam1 = { -1218.283f, -915.7103f, 10.3264f };
			*uParam2 = 43.8031f;
			break;
		
		case 8:
			*uParam1 = { 1130.155f, -979.2816f, 45.4158f };
			*uParam2 = 269.2587f;
			break;
		
		case 9:
			*uParam1 = { -1479.163f, -375.0302f, 38.1633f };
			*uParam2 = 36.5415f;
			break;
		
		case 10:
			*uParam1 = { -3249.114f, 1006.558f, 11.8307f };
			*uParam2 = 191.594f;
			break;
		
		case 11:
			*uParam1 = { -3047.512f, 588.9807f, 6.9089f };
			*uParam2 = 178.8753f;
			break;
		
		case 12:
			*uParam1 = { 543.0796f, 2663.967f, 41.1565f };
			*uParam2 = 228.4295f;
			break;
		
		case 13:
			*uParam1 = { 2549.85f, 387.1622f, 107.623f };
			*uParam2 = 197.2994f;
			break;
		
		case 14:
			*uParam1 = { 2671.351f, 3283.136f, 54.2411f };
			*uParam2 = 296.5427f;
			break;
		
		case 15:
			*uParam1 = { 1733.967f, 6421.495f, 34.0372f };
			*uParam2 = 130.9518f;
			break;
		
		case 16:
			*uParam1 = { 1958.92f, 3746.267f, 31.3438f };
			*uParam2 = 73.6245f;
			break;
		
		case 17:
			*uParam1 = { 30.5721f, -1339.782f, 28.4939f };
			*uParam2 = 110.7699f;
			break;
		
		case 18:
			*uParam1 = { 376.2976f, 331.8158f, 102.5664f };
			*uParam2 = 52.0064f;
			break;
		
		case -2:
			*uParam1 = { 1958.92f, 3746.267f, 31.3438f };
			*uParam2 = 73.6245f;
			break;
	}
}

void func_271(int iParam0)//Position - 0x10C5D
{
	vector3 vVar0;
	
	vVar0 = { func_272(Local_66.f_BA, Local_66.f_BD) };
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			Local_66.f_B9 = unk_0x5E29F9399E0829A3(vVar0, "v_gasstation");
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			Local_66.f_B9 = unk_0x5E29F9399E0829A3(vVar0, "v_gen_liquor");
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			Local_66.f_B9 = unk_0x5E29F9399E0829A3(vVar0, "v_shop_247");
			break;
	}
}

Vector3 func_272(vector3 vParam0, vector3 vParam1)//Position - 0x10D2B
{
	vector3 vVar0;
	
	vVar0.x = ((vParam0.x + vParam1.x) / 2f);
	vVar0.y = ((vParam0.y + vParam1.y) / 2f);
	vVar0.z = ((vParam0.z + vParam1.z) / 2f);
	return vVar0;
}

void func_273(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9)//Position - 0x10D5E
{
	if (!func_274(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			*(uParam1[0 /*3*/]) = { -677.0792f, -952.9478f, 20.4712f };
			(*uParam2)[0] = 90.5427f;
			*(uParam1[1 /*3*/]) = { -668.8872f, -961.7076f, 20.6313f };
			(*uParam2)[1] = 90.5427f;
			*(uParam1[2 /*3*/]) = { -749.7003f, -901.2264f, 19.6691f };
			(*uParam2)[2] = 170.7498f;
			*uParam3 = { -715.81f, -930.27f, 18.04f };
			*uParam4 = 8.81f;
			*uParam7 = { -714.079f, -918.088f, 18.196f };
			*uParam8 = { -709.079f, -918.166f, 22.196f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 1:
			*(uParam1[0 /*3*/]) = { -133.86f, -1764.29f, 29.39f };
			(*uParam2)[0] = 297.87f;
			*(uParam1[1 /*3*/]) = { -63.16f, -1793.14f, 27.23f };
			(*uParam2)[1] = 50.66f;
			*(uParam1[2 /*3*/]) = { -56.5f, -1810.22f, 26.6f };
			(*uParam2)[2] = 50.67f;
			*uParam3 = { -68.92f, -1764.16f, 28.23f };
			*uParam4 = 9f;
			*uParam7 = { -55.922f, -1756.021f, 28.196f };
			*uParam8 = { -52.122f, -1759.271f, 32.196f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 2:
			*(uParam1[0 /*3*/]) = { 1103.004f, -378.3616f, 66.6258f };
			(*uParam2)[0] = 310.6741f;
			*(uParam1[1 /*3*/]) = { 1186.703f, -289.3757f, 68.5913f };
			(*uParam2)[1] = 214.1061f;
			*(uParam1[2 /*3*/]) = { 1251.639f, -371.6591f, 68.7078f };
			(*uParam2)[2] = 164.5987f;
			*uParam3 = { 1161.84f, -339.25f, 67.29f };
			*uParam4 = 9.17f;
			*uParam7 = { 1157.417f, -328.616f, 68.048f };
			*uParam8 = { 1162.351f, -327.81f, 72.048f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 3:
			*(uParam1[0 /*3*/]) = { 1667.82f, 4916.04f, 41.71f };
			(*uParam2)[0] = 346.32f;
			*(uParam1[1 /*3*/]) = { 1710.43f, 4963.03f, 43.92f };
			(*uParam2)[1] = 112.11f;
			*(uParam1[2 /*3*/]) = { 1727.59f, 4986.13f, 46.4f };
			(*uParam2)[2] = 132.27f;
			*uParam3 = { 1692.99f, 4939.56f, 41.16f };
			*uParam4 = 10f;
			*uParam7 = { 1699.338f, 4932.104f, 41.083f };
			*uParam8 = { 1696.313f, 4928.124f, 45.083f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 4:
			*(uParam1[0 /*3*/]) = { -1862.436f, 732.8416f, 130.8709f };
			(*uParam2)[0] = 301.6958f;
			*(uParam1[1 /*3*/]) = { -1870.955f, 722.3616f, 129.6428f };
			(*uParam2)[1] = 300.6013f;
			*(uParam1[2 /*3*/]) = { -1711.103f, 873.6471f, 145.9411f };
			(*uParam2)[2] = 146.5694f;
			*uParam3 = { -1814.22f, 782.55f, 136.57f };
			*uParam4 = 7.24f;
			*uParam7 = { -1823.281f, 785.687f, 137.027f };
			*uParam8 = { -1819.465f, 788.918f, 141.027f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 5:
			*(uParam1[0 /*3*/]) = { 1127.43f, 2680.61f, 38.02f };
			(*uParam2)[0] = 268.18f;
			*(uParam1[1 /*3*/]) = { 1205.02f, 2687.1f, 37.34f };
			(*uParam2)[1] = 91.37f;
			*(uParam1[2 /*3*/]) = { 1218.17f, 2677.4f, 37.27f };
			(*uParam2)[2] = 88.15f;
			*uParam3 = { 1164.39f, 2683.2f, 37.06f };
			*uParam4 = 8.49f;
			*uParam7 = { 1164.771f, 2702.528f, 38.162f };
			*uParam8 = { 1167.771f, 2702.548f, 41.162f };
			*uParam9 = 3f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 6:
			*(uParam1[0 /*3*/]) = { -3021.405f, 236.3884f, 15.6982f };
			(*uParam2)[0] = 354.8025f;
			*(uParam1[1 /*3*/]) = { -3021.883f, 207.4436f, 15.7511f };
			(*uParam2)[1] = 2.3146f;
			*(uParam1[2 /*3*/]) = { -3015.012f, 640.891f, 21.0514f };
			(*uParam2)[2] = 193.5162f;
			*uParam3 = { -2990.03f, 391.19f, 13.83f };
			*uParam4 = 9.41f;
			*uParam7 = { -2974.55f, 393.338f, 14.037f };
			*uParam8 = { -2975.084f, 388.366f, 18.037f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 7:
			*(uParam1[0 /*3*/]) = { -1270.806f, -944.262f, 10.8025f };
			(*uParam2)[0] = 17.2662f;
			*(uParam1[1 /*3*/]) = { -1327.767f, -855.9691f, 16.4331f };
			(*uParam2)[1] = 216.1689f;
			*(uParam1[2 /*3*/]) = { -1155.798f, -862.4445f, 13.4857f };
			(*uParam2)[2] = 36.347f;
			*uParam3 = { -1233.36f, -891.39f, 11.35f };
			*uParam4 = 5.7f;
			*uParam7 = { -1225.2f, -899.881f, 11.275f };
			*uParam8 = { -1229.293f, -902.753f, 15.275f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 8:
			*(uParam1[0 /*3*/]) = { 1132.016f, -956.2646f, 47.2548f };
			(*uParam2)[0] = 278.2335f;
			*(uParam1[1 /*3*/]) = { 1121.218f, -959.5676f, 46.788f };
			(*uParam2)[1] = 289.4738f;
			*(uParam1[2 /*3*/]) = { 1236.959f, -1153.587f, 37.1736f };
			(*uParam2)[2] = 27.5191f;
			*uParam3 = { 1154.17f, -979.23f, 45.36f };
			*uParam4 = 6.02f;
			*uParam7 = { 1142.794f, -983.315f, 45.205f };
			*uParam8 = { 1142.519f, -978.322f, 49.205f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 9:
			*(uParam1[0 /*3*/]) = { -1525.77f, -389.17f, 41.39f };
			(*uParam2)[0] = 229.73f;
			*(uParam1[1 /*3*/]) = { -1537.28f, -378.84f, 43.02f };
			(*uParam2)[1] = 226.22f;
			*(uParam1[2 /*3*/]) = { -1475.06f, -418.35f, 35.71f };
			(*uParam2)[2] = 45.71f;
			*uParam3 = { -1502.71f, -400.39f, 38.41f };
			*uParam4 = 7.86f;
			*uParam7 = { -1493.544f, -382.617f, 38.994f };
			*uParam8 = { -1489.947f, -386.09f, 42.994f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 10:
			*(uParam1[0 /*3*/]) = { -3218.999f, 1105.409f, 9.9489f };
			(*uParam2)[0] = 175.7402f;
			*(uParam1[1 /*3*/]) = { -3210.846f, 1114.875f, 9.8453f };
			(*uParam2)[1] = 152.4543f;
			*(uParam1[2 /*3*/]) = { -3201.518f, 920.3387f, 13.8887f };
			(*uParam2)[2] = 54.6774f;
			*uParam3 = { -3230.27f, 1003.54f, 11.31f };
			*uParam4 = 5.42f;
			*uParam7 = { -3238.442f, 1001.727f, 11.161f };
			*uParam8 = { -3238.268f, 1006.724f, 15.161f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 11:
			*(uParam1[0 /*3*/]) = { -3061.218f, 658.6545f, 9.6541f };
			(*uParam2)[0] = 216.9221f;
			*(uParam1[1 /*3*/]) = { -3017.391f, 509.7967f, 6.7435f };
			(*uParam2)[1] = 348.3592f;
			*(uParam1[2 /*3*/]) = { -3029.232f, 521.1291f, 6.975f };
			(*uParam2)[2] = 337.5117f;
			*uParam3 = { -3027.51f, 594.25f, 6.87f };
			*uParam4 = 5.89f;
			*uParam7 = { -3036.615f, 587.625f, 6.818f };
			*uParam8 = { -3038.087f, 592.404f, 10.818f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 12:
			*(uParam1[0 /*3*/]) = { 523.8614f, 2658.057f, 42.068f };
			(*uParam2)[0] = 2.8999f;
			*(uParam1[1 /*3*/]) = { 471.6328f, 2657.835f, 42.9164f };
			(*uParam2)[1] = 329.1264f;
			*(uParam1[2 /*3*/]) = { 656.9346f, 2731.927f, 41.5306f };
			(*uParam2)[2] = 183.28f;
			*uParam3 = { 545.05f, 2684.96f, 41.3f };
			*uParam4 = 6.77f;
			*uParam7 = { 546.505f, 2674.393f, 41.152f };
			*uParam8 = { 541.547f, 2673.75f, 45.152f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 13:
			*(uParam1[0 /*3*/]) = { 2593.841f, 273.2788f, 104.926f };
			(*uParam2)[0] = 345.1121f;
			*(uParam1[1 /*3*/]) = { 2595.69f, 262.9971f, 104.2577f };
			(*uParam2)[1] = 350.3949f;
			*(uParam1[2 /*3*/]) = { 2591.545f, 256.5517f, 103.7544f };
			(*uParam2)[2] = 343.9362f;
			*uParam3 = { 2575.75f, 385.11f, 107.46f };
			*uParam4 = 11.61f;
			*uParam7 = { 2560.435f, 382.891f, 107.626f };
			*uParam8 = { 2560.67f, 387.886f, 111.626f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 14:
			*(uParam1[0 /*3*/]) = { 2672.64f, 3259.44f, 54.87f };
			(*uParam2)[0] = 324.3f;
			*(uParam1[1 /*3*/]) = { 2703.37f, 3294.47f, 55.31f };
			(*uParam2)[1] = 152.87f;
			*(uParam1[2 /*3*/]) = { 2699.45f, 3299.76f, 55.35f };
			(*uParam2)[2] = 152.55f;
			*uParam3 = { 2691.41f, 3275.22f, 54.24f };
			*uParam4 = 7.56f;
			*uParam7 = { 2681.77f, 3279.805f, 54.245f };
			*uParam8 = { 2684.297f, 3284.12f, 58.245f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 15:
			*(uParam1[0 /*3*/]) = { 1740.035f, 6378.202f, 35.0341f };
			(*uParam2)[0] = 81.6255f;
			*(uParam1[1 /*3*/]) = { 1755.786f, 6375.046f, 36.2501f };
			(*uParam2)[1] = 76.057f;
			*(uParam1[2 /*3*/]) = { 1752.839f, 6367.344f, 36.135f };
			(*uParam2)[2] = 75.9713f;
			*uParam3 = { 1725.56f, 6400.85f, 33.42f };
			*uParam4 = 7.09f;
			*uParam7 = { 1728.266f, 6411.254f, 34.006f };
			*uParam8 = { 1732.739f, 6409.022f, 38.006f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 16:
			*(uParam1[0 /*3*/]) = { 1942.142f, 3738.897f, 31.9693f };
			(*uParam2)[0] = 210.3384f;
			*(uParam1[1 /*3*/]) = { 2024.891f, 3780.588f, 31.9156f };
			(*uParam2)[1] = 210.1552f;
			*(uParam1[2 /*3*/]) = { 1879.631f, 3673.292f, 33.1966f };
			(*uParam2)[2] = 302.2257f;
			*uParam3 = { 1968.55f, 3731.03f, 31.36f };
			*uParam4 = 6.12f;
			*uParam7 = { 1963.491f, 3738.337f, 31.324f };
			*uParam8 = { 1967.792f, 3740.886f, 35.324f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 17:
			*(uParam1[0 /*3*/]) = { 73.57f, -1359.63f, 28.96f };
			(*uParam2)[0] = 93.85f;
			*(uParam1[1 /*3*/]) = { 77.26f, -1364.69f, 28.97f };
			(*uParam2)[1] = 88.25f;
			*(uParam1[2 /*3*/]) = { -17.95f, -1366.03f, 28.97f };
			(*uParam2)[2] = 267.29f;
			*uParam3 = { 30.98f, -1362.09f, 28.33f };
			*uParam4 = 6f;
			*uParam7 = { 27.296f, -1350.255f, 28.33232f };
			*uParam8 = { 30.795f, -1350.308f, 30.82019f };
			*uParam9 = 3f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 18:
			*(uParam1[0 /*3*/]) = { 424.9115f, 314.1133f, 102.622f };
			(*uParam2)[0] = 155.4277f;
			*(uParam1[1 /*3*/]) = { 439.6049f, 292.7892f, 102.5935f };
			(*uParam2)[1] = 74.6758f;
			*(uParam1[2 /*3*/]) = { 275.961f, 331.2577f, 105.1467f };
			(*uParam2)[2] = 250.7508f;
			*uParam3 = { 372.79f, 313f, 102.47f };
			*uParam4 = 3.94f;
			*uParam7 = { 373.907f, 322.739f, 102.439f };
			*uParam8 = { 378.778f, 321.61f, 106.439f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
	}
}

int func_274(int iParam0)//Position - 0x11BD4
{
	if (iParam0 >= 19)
	{
		return 0;
	}
	else if (iParam0 <= -1)
	{
		return 0;
	}
	return 1;
}

int func_275()//Position - 0x11BF5
{
	vector3 vVar0;
	
	if (!unk_0x1D403DFADBC2DE3C(Local_66, 0))
	{
		vVar0 = { unk_0x541C2AEF053615BC(Local_66, true) };
		if (unk_0xF0F2FC9DE291567F(vVar0, Local_66.f_B5, true) < 50f)
		{
			return 1;
		}
	}
	return 0;
}

void func_276()//Position - 0x11C30
{
	if (Local_66.f_2E.f_1A != 0)
	{
		unk_0x2CA123B0622F495C(Local_66.f_2E.f_1A);
	}
	if (Local_66.f_2E.f_1B != 0)
	{
		unk_0x2CA123B0622F495C(Local_66.f_2E.f_1B);
	}
	if (!unk_0xF1734B55490E9045(Local_66.f_2.f_F))
	{
		unk_0x4EA570997E107F35(Local_66.f_2.f_F);
	}
}

int func_277()//Position - 0x11C78
{
	if (Global_19B04.f_2360)
	{
		if (!func_281(56))
		{
			return 1;
		}
	}
	if (func_280())
	{
		return 1;
	}
	if (!unk_0x684B06333594F9EA())
	{
		return 1;
	}
	if (func_297() && !func_296())
	{
		return 1;
	}
	if (func_279() && func_278())
	{
		return 1;
	}
	if (Global_62BF)
	{
		unk_0x7456702622C62EA0(1);
		unk_0x95E4B6F3ED223F5A();
	}
	return 0;
}

bool func_278()//Position - 0x11CE8
{
	return Global_199EA > 0;
}

int func_279()//Position - 0x11CF6
{
	if (Global_15FA6 != -1)
	{
		return 1;
	}
	return 0;
}

int func_280()//Position - 0x11D0B
{
	vector3 vVar0;
	float fVar1;
	
	if (!unk_0x1D403DFADBC2DE3C(Local_66, 0))
	{
		vVar0 = { unk_0x541C2AEF053615BC(Local_66, true) };
		fVar1 = unk_0xF0F2FC9DE291567F(vVar0, Local_66.f_B5, true);
		if (fVar1 > Local_66.f_B8)
		{
			return 1;
		}
	}
	return 0;
}

int func_281(int iParam0)//Position - 0x11D49
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_19B04.f_2360.f_63.f_3A[iParam0];
}

void func_282(var uParam0)//Position - 0x11D76
{
	int iVar0;
	
	if (uParam0->f_1F)
	{
		if ((unk_0xC87A57742F7D3C06() >= (uParam0->f_20 + uParam0->f_21) || unk_0xFA30DFD0084E92FE(Global_16B1B.f_14, 2)) || unk_0xFA30DFD0084E92FE(Global_16B1B.f_14, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*2*/], 30))
				{
					if (!unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*2*/], 29))
					{
						func_283(uParam0[iVar0 /*2*/]);
						uParam0->f_20 = unk_0xC87A57742F7D3C06();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_283(int iParam0)//Position - 0x11E00
{
	func_284(iParam0, "NULL", iParam0->f_1);
}

void func_284(int iParam0, char* sParam1, int iParam2)//Position - 0x11E14
{
	if (unk_0xFA30DFD0084E92FE(*iParam0, 30))
	{
		switch (func_263(*iParam0))
		{
			case 0:
				unk_0xF243B7A14FCFD0F4(iParam2);
				break;
			
			case 1:
				unk_0x522053D86D6E1C7A(sParam1);
				break;
			
			case 2:
				unk_0x37FA5A8A7F1136BA(sParam1);
				break;
			
			case 3:
				unk_0x8AA3F48A15444B98(sParam1, unk_0xFA30DFD0084E92FE(*iParam0, 28));
				break;
			
			case 4:
				unk_0x1B2A7C8188ADBE04(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x44840FD68E426678(sParam1);
				break;
			
			case 6:
				unk_0x284F2ACE6839D3C0(sParam1, unk_0xFA30DFD0084E92FE(*iParam0, 27), -1);
				break;
			
			case 7:
				unk_0x381A61AE1A1DAD09(iParam2);
				break;
			
			case 8:
				unk_0x900CF084251DED26(sParam1, iParam2);
				break;
			
			case 9:
				unk_0xA8396BF0E2C53C39();
				break;
			
			default:
				break;
		}
		unk_0xF0059F27F7BB6680(iParam0, 29);
	}
}

int func_285()//Position - 0x11EEE
{
	int iVar0;
	
	if (Local_66.f_1 != Global_19B04.f_4E26.f_3E[iLocal_80])
	{
		return 1;
	}
	iVar0 = (unk_0xBE14F159908E4EE5() - Global_19B04.f_4E26.f_2A[iLocal_80]);
	iLocal_85 = 2;
	if (iVar0 < 0)
	{
		iVar0 = unk_0xBE14F159908E4EE5() + 31;
		iVar0 = (iVar0 - Global_19B04.f_4E26.f_2A[iLocal_80]);
	}
	if (iVar0 < iLocal_85)
	{
		return 0;
	}
	return 1;
}

void func_286(var uParam0, int iParam1)//Position - 0x11F59
{
	func_287(uParam0, iParam1);
}

void func_287(var uParam0, var uParam1)//Position - 0x11F69
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_288(int iParam0, float fParam1, var uParam2, var uParam3)//Position - 0x11F7A
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam2 = { unk_0x89D97EB4FAE4A574(func_289(iParam0), fParam1, 5.95155f, -8.251f, -0.2377f) };
			*uParam3 = { unk_0x89D97EB4FAE4A574(func_289(iParam0), fParam1, -12.7268f, 7.21174f, 2.93854f) };
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam2 = { unk_0x89D97EB4FAE4A574(func_289(iParam0), fParam1, -6.52428f, -8.8002f, -0.657398f) };
			*uParam3 = { unk_0x89D97EB4FAE4A574(func_289(iParam0), fParam1, 3.54253f, 16.8382f, 3.20474f) };
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam2 = { unk_0x89D97EB4FAE4A574(func_289(iParam0), fParam1, -4.55363f, -7.52366f, -0.75f) };
			*uParam3 = { unk_0x89D97EB4FAE4A574(func_289(iParam0), fParam1, 11.8868f, 7.00122f, 3.9688f) };
			break;
	}
	return 1;
}

Vector3 func_289(int iParam0)//Position - 0x120BF
{
	if (!func_274(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return -711.8212f, -915.9057f, 18.2377f;
		
		case 1:
			return -52.7185f, -1756.175f, 28.4432f;
		
		case 2:
			return 1159.441f, -325.6666f, 68.2272f;
		
		case 3:
			return 1699.429f, 4928.642f, 41.0858f;
		
		case 4:
			return -1822.926f, 788.9531f, 137.212f;
		
		case 5:
			return 1166.427f, 2703.528f, 37.1574f;
		
		case 6:
			return -2973.414f, 390.6885f, 14.0433f;
		
		case 7:
			return -1225.86f, -903.5782f, 11.3263f;
		
		case 8:
			return 1140.659f, -981.0806f, 45.4158f;
		
		case 9:
			return -1490.275f, -382.8514f, 39.1634f;
		
		case 10:
			return -3240.719f, 1004.508f, 11.8468f;
		
		case 11:
			return -3039.249f, 589.3831f, 6.9251f;
		
		case 12:
			return 544.4275f, 2672.061f, 41.1726f;
		
		case 13:
			return 2558.754f, 385.599f, 107.6391f;
		
		case 14:
			return 2681.511f, 3282.763f, 54.2573f;
		
		case 15:
			return 1731.153f, 6411.633f, 34.0373f;
		
		case 16:
			return 1964.931f, 3741.207f, 31.3599f;
		
		case 17:
			return 29.0707f, -1348.773f, 28.5101f;
		
		case 18:
			return 376.8503f, 323.9777f, 102.5825f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_290()//Position - 0x122A9
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = (unk_0x6E06C0DB9B43570D() - Global_19B04.f_4E26.f_15[iLocal_80]);
	iVar1 = (unk_0xBE14F159908E4EE5() - Global_19B04.f_4E26.f_2A[iLocal_80]);
	iLocal_84 = 2;
	if (iVar0 < 0)
	{
		iVar0 = unk_0x6E06C0DB9B43570D() + 24;
		iVar0 = (iVar0 - Global_19B04.f_4E26.f_15[iLocal_80]);
		iVar2 = 1;
	}
	if ((iVar0 < iLocal_84 && iVar1 == 0) || (iVar0 < iLocal_84 && iVar2))
	{
		return 1;
	}
	return 0;
}

void func_291(bool bParam0)//Position - 0x12330
{
	int iVar0;
	var uVar1[2];
	var uVar2[2];
	vector3 vVar3[2];
	
	func_292(iLocal_80, &uVar1, &uVar2, &vVar3);
	if (!func_1(Local_66.f_1D6, 64))
	{
		if (!unk_0x86BC948CAD7C61EF(uVar1[iVar0]))
		{
			unk_0x0DE091F0061B5F19(uVar1[0], uVar2[0], vVar3[0 /*3*/], 0, 0, 0);
			if (uVar1[1] != -1)
			{
				unk_0x0DE091F0061B5F19(uVar1[1], uVar2[1], vVar3[1 /*3*/], 0, 0, 0);
			}
		}
		func_286(&(Local_66.f_1D6), 64);
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x86BC948CAD7C61EF(uVar1[iVar0]))
		{
			if (bParam0)
			{
				if (unk_0x6AAFA9D1E65503EA(uVar1[iVar0]) != 1)
				{
					unk_0xF72F6BB050622804(uVar1[iVar0], 1, 0, 0);
				}
			}
			else if (unk_0x6AAFA9D1E65503EA(uVar1[iVar0]) != 0)
			{
				unk_0xF72F6BB050622804(uVar1[iVar0], 0, 0, 0);
			}
		}
		iVar0++;
	}
}

void func_292(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x1241B
{
	switch (iParam0)
	{
		case 0:
			(*uParam1)[0] = unk_0x56BEECB328B6D29D("eCRIM_HUP_GAS_2A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { -713.07f, -916.54f, 19.37f };
			(*uParam1)[1] = unk_0x56BEECB328B6D29D("eCRIM_HUP_GAS_2B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { -710.47f, -916.54f, 19.37f };
			break;
		
		case 1:
			(*uParam1)[0] = unk_0x56BEECB328B6D29D("eCRIM_HUP_GAS_3A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { -53.96f, -1755.72f, 29.57f };
			(*uParam1)[1] = unk_0x56BEECB328B6D29D("eCRIM_HUP_GAS_3B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { -51.97f, -1757.39f, 29.57f };
			break;
		
		case 2:
			(*uParam1)[0] = unk_0x56BEECB328B6D29D("eCRIM_HUP_GAS_4A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { 1158.36f, -326.82f, 69.36f };
			(*uParam1)[1] = unk_0x56BEECB328B6D29D("eCRIM_HUP_GAS_4B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { 1160.93f, -326.36f, 69.36f };
			break;
		
		case 3:
			(*uParam1)[0] = unk_0x56BEECB328B6D29D("eCRIM_HUP_GAS_1A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { 1699.66f, 4930.28f, 42.21f };
			(*uParam1)[1] = unk_0x56BEECB328B6D29D("eCRIM_HUP_GAS_1B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { 1698.17f, 4928.15f, 42.21f };
			break;
		
		case 4:
			(*uParam1)[0] = unk_0x56BEECB328B6D29D("eCRIM_HUP_GAS_5A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { -1823.28f, 787.37f, 138.36f };
			(*uParam1)[1] = unk_0x56BEECB328B6D29D("eCRIM_HUP_GAS_5B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { -1821.37f, 789.13f, 138.31f };
			break;
		
		case 5:
			(*uParam1)[0] = unk_0x56BEECB328B6D29D("eCRIM_HUP_LIQUOR_1A");
			(*uParam2)[0] = -1212951353;
			*(uParam3[0 /*3*/]) = { 1167.13f, 2703.75f, 38.3f };
			(*uParam1)[1] = -1;
			break;
		
		case 6:
			(*uParam1)[0] = unk_0x56BEECB328B6D29D("eCRIM_HUP_LIQUOR_2A");
			(*uParam2)[0] = -1212951353;
			*(uParam3[0 /*3*/]) = { -2973.53f, 390.14f, 15.19f };
			(*uParam1)[1] = -1;
			break;
		
		case 7:
			(*uParam1)[0] = unk_0x56BEECB328B6D29D("eCRIM_HUP_LIQUOR_3A");
			(*uParam2)[0] = -1212951353;
			*(uParam3[0 /*3*/]) = { -1226.89f, -903.12f, 12.47f };
			(*uParam1)[1] = -1;
			break;
		
		case 8:
			(*uParam1)[0] = unk_0x56BEECB328B6D29D("eCRIM_HUP_LIQUOR_4A");
			(*uParam2)[0] = -1212951353;
			*(uParam3[0 /*3*/]) = { 1141.04f, -980.32f, 46.56f };
			(*uParam1)[1] = -1;
			break;
		
		case 9:
			(*uParam1)[0] = unk_0x56BEECB328B6D29D("eCRIM_HUP_LIQUOR_5A");
			(*uParam2)[0] = -1212951353;
			*(uParam3[0 /*3*/]) = { -1490.41f, -383.85f, 40.31f };
			(*uParam1)[1] = -1;
			break;
		
		case 10:
			(*uParam1)[0] = unk_0x56BEECB328B6D29D("eCRIM_HUP_SHOP247_3A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { -3240.13f, 1003.16f, 12.98f };
			(*uParam1)[1] = unk_0x56BEECB328B6D29D("eCRIM_HUP_SHOP247_3B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { -3239.9f, 1005.75f, 12.98f };
			break;
		
		case 11:
			(*uParam1)[0] = unk_0x56BEECB328B6D29D("eCRIM_HUP_SHOP247_2A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { -3038.22f, 588.29f, 8.06f };
			(*uParam1)[1] = unk_0x56BEECB328B6D29D("eCRIM_HUP_SHOP247_2B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { -3039.01f, 590.76f, 8.06f };
			break;
		
		case 12:
			(*uParam1)[0] = unk_0x56BEECB328B6D29D("eCRIM_HUP_SHOP247_4A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 545.5f, 2672.75f, 42.31f };
			(*uParam1)[1] = unk_0x56BEECB328B6D29D("eCRIM_HUP_SHOP247_4B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 542.93f, 2672.41f, 42.31f };
			break;
		
		case 13:
			(*uParam1)[0] = unk_0x56BEECB328B6D29D("eCRIM_HUP_SHOP247_5A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 2559.2f, 384.09f, 108.77f };
			(*uParam1)[1] = unk_0x56BEECB328B6D29D("eCRIM_HUP_SHOP247_5B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 2559.3f, 386.69f, 108.77f };
			break;
		
		case 14:
			(*uParam1)[0] = unk_0x56BEECB328B6D29D("eCRIM_HUP_SHOP247_6A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 2681.29f, 3281.43f, 55.39f };
			(*uParam1)[1] = unk_0x56BEECB328B6D29D("eCRIM_HUP_SHOP247_6B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 2682.56f, 3283.7f, 55.39f };
			break;
		
		case 15:
			(*uParam1)[0] = unk_0x56BEECB328B6D29D("eCRIM_HUP_SHOP247_7A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 1730.03f, 6412.07f, 35.19f };
			(*uParam1)[1] = unk_0x56BEECB328B6D29D("eCRIM_HUP_SHOP247_7B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 1732.36f, 6410.92f, 35.19f };
			break;
		
		case 16:
			(*uParam1)[0] = unk_0x56BEECB328B6D29D("eCRIM_HUP_SHOP247_8A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 1963.92f, 3740.08f, 32.49f };
			(*uParam1)[1] = unk_0x56BEECB328B6D29D("eCRIM_HUP_SHOP247_8B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 1966.17f, 3741.38f, 32.49f };
			break;
		
		case 17:
			(*uParam1)[0] = unk_0x56BEECB328B6D29D("eCRIM_HUP_SHOP247_9A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 27.82f, -1349.17f, 29.65f };
			(*uParam1)[1] = unk_0x56BEECB328B6D29D("eCRIM_HUP_SHOP247_9B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 30.42f, -1349.17f, 29.65f };
			break;
		
		case 18:
			(*uParam1)[0] = unk_0x56BEECB328B6D29D("eCRIM_HUP_SHOP247_10A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 375.35f, 323.8f, 103.72f };
			(*uParam1)[1] = unk_0x56BEECB328B6D29D("eCRIM_HUP_SHOP247_10B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 377.88f, 323.17f, 103.72f };
			break;
	}
}

void func_293(var uParam0, int iParam1)//Position - 0x12AC0
{
	func_294(uParam0, iParam1);
}

void func_294(var uParam0, var uParam1)//Position - 0x12AD0
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_295()//Position - 0x12AE5
{
	if (!unk_0x1D403DFADBC2DE3C(Local_66, 0))
	{
		if (unk_0x0C265B3C448E6954(Local_66, Local_66.f_BA, Local_66.f_BD, Local_66.f_C0, 0, true, 0))
		{
			return 1;
		}
		else if (unk_0x0C265B3C448E6954(Local_66, Local_66.f_C8, Local_66.f_CB, Local_66.f_CE, 0, true, 0))
		{
			return 1;
		}
		else if (unk_0x0C265B3C448E6954(Local_66, Local_66.f_CF, Local_66.f_D2, Local_66.f_D5, 0, true, 0))
		{
			return 1;
		}
		else if (Local_66.f_C7 != -1f)
		{
			if (unk_0x0C265B3C448E6954(Local_66, Local_66.f_C1, Local_66.f_C4, Local_66.f_C7, 0, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_296()//Position - 0x12B8B
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

int func_297()//Position - 0x12BA8
{
	if (Global_15FA6 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_147B0[Global_15FA6 /*34*/].f_F, 20);
	}
	return 0;
}

Vector3 func_298(vector3 vParam0, float fParam1)//Position - 0x12BCE
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = SYSTEM::SIN(fParam1);
	fVar2 = SYSTEM::COS(fParam1);
	vVar0.x = ((vParam0.x * fVar2) - (vParam0.y * fVar1));
	vVar0.y = ((vParam0.x * fVar1) + (vParam0.y * fVar2));
	vVar0.z = vParam0.z;
	return vVar0;
}

void func_299(var uParam0)//Position - 0x12C12
{
	iLocal_65 = 0;
	iLocal_63 = 0;
	iLocal_61 = 0;
	iLocal_62 = 0;
	iLocal_60 = 0;
	iLocal_59 = 1;
	iLocal_55 = 0;
	iLocal_58 = 1;
	iLocal_57 = 0;
	iLocal_54 = 0;
	iLocal_53 = 0;
	iLocal_51 = 0;
	iLocal_50 = 0;
	Local_66 = unk_0xBC25C936A095B5BA();
	func_307(&(uParam0->f_1[0 /*3*/]), &(Local_66.f_B5), &iLocal_80);
	if ((((((((iLocal_80 == 10 || iLocal_80 == 11) || iLocal_80 == 12) || iLocal_80 == 13) || iLocal_80 == 14) || iLocal_80 == 15) || iLocal_80 == 16) || iLocal_80 == 17) || iLocal_80 == 18)
	{
		bLocal_94 = true;
	}
	Local_66.f_B8 = 150f;
	Local_66.f_2.f_F = "random@shop_robbery_reactions@";
	Local_66.f_2.f_10 = "absolutely";
	Local_66.f_2.f_11 = "is_this_it";
	Local_66.f_2.f_12 = "shock";
	Local_66.f_2.f_13 = "anger_a";
	Local_66.f_2.f_14 = "screw_you";
	Local_66.f_2.f_15 = "but_why";
	Local_66.f_1E6.f_1 = "mp_am_hold_up";
	Local_66.f_1E6.f_2 = "guard_handsup_loop";
	Local_66.f_1E6.f_3 = "holdup_victim_20s";
	Local_66.f_1E6.f_4 = "holdup_victim_20s_bag";
	Local_66.f_1E6.f_5 = "holdup_victim_20s_till";
	iLocal_82 = func_306();
	if (!bLocal_86)
	{
		func_302();
	}
	iLocal_87 = 0;
	if (iLocal_80 != 7)
	{
		iLocal_52 = 6;
	}
	else
	{
		iLocal_52 = 0;
	}
	if (func_100() == 0)
	{
		Local_66.f_1 = 0;
	}
	else if (func_100() == 1)
	{
		Local_66.f_1 = 1;
	}
	else if (func_100() == 2)
	{
		Local_66.f_1 = 2;
	}
	func_301(iLocal_80, &(Local_66.f_BA), &(Local_66.f_BD), &(Local_66.f_C0), &(Local_66.f_C1), &(Local_66.f_C4), &(Local_66.f_C7), &(Local_66.f_C8), &(Local_66.f_CB), &(Local_66.f_CE), &(Local_66.f_CF), &(Local_66.f_D2), &(Local_66.f_D5), &(Local_66.f_D6), &(Local_66.f_D9), &(Local_66.f_DC), &(Local_66.f_66.f_6), &(Local_66.f_66.f_9));
	func_300(iLocal_80, &(Local_66.f_1E6.f_6), &(Local_66.f_1E6.f_9), &(Local_66.f_2.f_1), &(Local_66.f_2.f_4), &(Local_66.f_2.f_5), &(Local_66.f_1C.f_7), &(Local_66.f_1C.f_A), &(Local_66.f_1C.f_D), &(Local_66.f_1C.f_4), &(Local_66.f_1C.f_5), &(Local_66.f_66.f_15));
}

void func_300(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11)//Position - 0x12E41
{
	switch (iParam0)
	{
		case 0:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -706.6382f, -913.6887f, 19.21f };
			*uParam2 = { 0f, 0f, -89.999f };
			break;
		
		case 1:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -47.19871f, -1757.67f, 29.42f };
			*uParam2 = { 0f, 0f, -130f };
			break;
		
		case 2:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1164.21f, -322.89f, 69.2f };
			*uParam2 = { 0f, 0f, -80f };
			break;
		
		case 3:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1698.307f, 4923.371f, 42.06f };
			*uParam2 = { 0f, 0f, 145f };
			break;
		
		case 4:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -1820.465f, 793.8166f, 138.09f };
			*uParam2 = { 0f, 0f, -47.53f };
			break;
		
		case 5:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1165.958f, 2710.201f, 38.14286f };
			*uParam2 = { 0f, 0f, -1.15f };
			break;
		
		case 6:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -2967.027f, 390.9038f, 15.02f };
			*uParam2 = { 0f, 0f, -94.76f };
			break;
		
		case 7:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -1222.331f, -907.8234f, 12.31f };
			*uParam2 = { 0f, 0f, -147.297f };
			break;
		
		case 8:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1134.811f, -982.3615f, 46.4f };
			*uParam2 = { 0f, 0f, 96.68562f };
			break;
		
		case 9:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -1486.673f, -378.4638f, 40.15f };
			*uParam2 = { 0f, 0f, -46.229f };
			break;
		
		case 10:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -3244.573f, 1000.658f, 12.83f };
			*uParam2 = { 0f, 0f, 175.074f };
			break;
		
		case 11:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -3041.357f, 584.2665f, 7.9f };
			*uParam2 = { 0f, 0f, -162.241f };
			break;
		
		case 12:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 548.9015f, 2668.941f, 42.15f };
			*uParam2 = { 0f, 0f, -82.5f };
			break;
		
		case 13:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 2554.875f, 381.3857f, 108.62f };
			*uParam2 = { 0f, 0f, 177.716f };
			break;
		
		case 14:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 2676.212f, 3280.969f, 55.24f };
			*uParam2 = { 0f, 0f, 150.87f };
			break;
		
		case 15:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1729.329f, 6417.123f, 35.03f };
			*uParam2 = { 0f, 0f, 63.641f };
			break;
		
		case 16:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1959.323f, 3742.29f, 32.34f };
			*uParam2 = { 0f, 0f, 120f };
			break;
		
		case 17:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 24.94562f, -1344.954f, 29.49f };
			*uParam2 = { 0f, 0f, 90f };
			break;
		
		case 18:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 373.5954f, 328.5892f, 103.56f };
			*uParam2 = { 0f, 0f, 75.885f };
			break;
	}
	*uParam9 = 220;
	*uParam10 = 787;
	*uParam3 = { unk_0x89D97EB4FAE4A574(*uParam1, uParam2->f_2, -0.668213f, 0.85762f, 0.0181999f) };
	*uParam4 = (180f + uParam2->f_2);
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam6 = { unk_0x89D97EB4FAE4A574(*uParam1, uParam2->f_2, -0.040857f, (0.366089f - 0.088f), -0.428174f) };
			*uParam11 = 3;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam6 = { unk_0x89D97EB4FAE4A574(*uParam1, uParam2->f_2, -0.040857f, (0.366089f - 0.033f), -0.398174f) };
			*uParam11 = 2;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam6 = { unk_0x89D97EB4FAE4A574(*uParam1, uParam2->f_2, -0.040857f, (0.366089f - 0.077f), -0.378174f) };
			*uParam11 = 3;
			break;
	}
	*uParam7 = { 5f, 0f, uParam2->f_2 };
}

Vector3 func_301(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17)//Position - 0x133A3
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -711.81f, -916.36f, 18.22f };
			*uParam2 = { -711.74f, -908.75f, 21.72f };
			*uParam3 = 13.92f;
			*uParam4 = { -705.76f, -908.76f, 18.22f };
			*uParam5 = { -705.8f, -903.16f, 21.24f };
			*uParam6 = 2.32f;
			*uParam7 = { -709.02f, -907.72f, 18.22f };
			*uParam8 = { -708.96f, -903.15f, 21.25f };
			*uParam9 = 3.66f;
			*uParam10 = { -707.05f, -907.18f, 18.23f };
			*uParam11 = { -707.04f, -905.9f, 20.51f };
			*uParam12 = 0.75f;
			*uParam13 = { -704.528f, -913.948f, 18f };
			*uParam14 = { -706.528f, -913.948f, 22.221f };
			*uParam15 = 4f;
			*uParam16 = { -711.2905f, -913.7919f, 19.1156f };
			*uParam17 = 1.05f;
			break;
		
		case 1:
			*uParam1 = { -52.86f, -1756.43f, 28.42f };
			*uParam2 = { -47.94f, -1750.6f, 31.93f };
			*uParam3 = 13.92f;
			*uParam4 = { -43.36f, -1754.47f, 28.44f };
			*uParam5 = { -39.78f, -1750.15f, 31.46f };
			*uParam6 = 2.32f;
			*uParam7 = { -45.14f, -1751.51f, 28.43f };
			*uParam8 = { -42.23f, -1748.08f, 31.48f };
			*uParam9 = 3.66f;
			*uParam10 = { -43.3f, -1752.4f, 28.48f };
			*uParam11 = { -42.5f, -1751.44f, 30.71f };
			*uParam12 = 0.75f;
			*uParam13 = { -45.23195f, -1756.996f, 28.42101f };
			*uParam14 = { -47.68424f, -1759.943f, 31.92101f };
			*uParam15 = 1.8f;
			*uParam16 = { -50.83334f, -1754.827f, 29.321f };
			*uParam17 = 1.05f;
			break;
		
		case 2:
			*uParam1 = { 1159.64f, -326.47f, 68.21f };
			*uParam2 = { 1158.33f, -318.91f, 71.71f };
			*uParam3 = 13.92f;
			*uParam4 = { 1164.22f, -317.89f, 68.21f };
			*uParam5 = { 1163.26f, -312.51f, 71.2f };
			*uParam6 = 2.32f;
			*uParam7 = { 1160.91f, -317.34f, 68.21f };
			*uParam8 = { 1160.11f, -313.19f, 71.13f };
			*uParam9 = 3.66f;
			*uParam10 = { 1162.68f, -316.51f, 68.23f };
			*uParam11 = { 1162.46f, -315.28f, 70.49f };
			*uParam12 = 0.75f;
			*uParam13 = { 1164.222f, -323.349f, 68.21f };
			*uParam14 = { 1166.191f, -323.001f, 72.21f };
			*uParam15 = 4f;
			*uParam16 = { 1159.639f, -323.7686f, 69.1051f };
			*uParam17 = 1.05f;
			break;
		
		case 3:
			*uParam1 = { 1699.09f, 4929.01f, 41.06f };
			*uParam2 = { 1705.3f, 4924.67f, 44.58f };
			*uParam3 = 13.92f;
			*uParam4 = { 1701.85f, 4919.78f, 41.06f };
			*uParam5 = { 1706.43f, 4916.54f, 44.1f };
			*uParam6 = 2.32f;
			*uParam7 = { 1704.57f, 4921.8f, 41.06f };
			*uParam8 = { 1708.29f, 4919.18f, 44.1f };
			*uParam9 = 3.66f;
			*uParam10 = { 1703.9f, 4919.88f, 41.09f };
			*uParam11 = { 1704.92f, 4919.15f, 43.36f };
			*uParam12 = 0.75f;
			*uParam13 = { 1698.032f, 4923.538f, 41.069f };
			*uParam14 = { 1696.99f, 4921.831f, 45.069f };
			*uParam15 = 4f;
			*uParam16 = { 1700.856f, 4927.15f, 41.96366f };
			*uParam17 = 1.05f;
			break;
		
		case 4:
			*uParam1 = { -1822.46f, 788.35f, 137.19f };
			*uParam2 = { -1827.54f, 794.02f, 140.72f };
			*uParam3 = 13.92f;
			*uParam4 = { -1823.17f, 798.02f, 137.1f };
			*uParam5 = { -1826.81f, 802.05f, 140.12f };
			*uParam6 = 2.32f;
			*uParam7 = { -1826.25f, 796.63f, 137.16f };
			*uParam8 = { -1829.17f, 799.88f, 140.16f };
			*uParam9 = 3.66f;
			*uParam10 = { -1825.16f, 798.33f, 137.13f };
			*uParam11 = { -1826f, 799.31f, 139.43f };
			*uParam12 = 0.75f;
			*uParam13 = { -1820.332f, 793.679f, 137.084f };
			*uParam14 = { -1818.891f, 795.067f, 141.084f };
			*uParam15 = 4f;
			*uParam16 = { -1823.841f, 790.7311f, 138.0864f };
			*uParam17 = 1.05f;
			break;
		
		case 5:
			*uParam1 = { 1170.182f, 2708.049f, 37.6f };
			*uParam2 = { 1162.385f, 2708.255f, 40.6f };
			*uParam3 = 8.8f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 1170.399f, 2716.422f, 37f };
			*uParam8 = { 1162.601f, 2716.628f, 41.19f };
			*uParam9 = 9f;
			*uParam10 = { 1170.7f, 2712.368f, 37.7f };
			*uParam11 = { 1168.3f, 2712.431f, 40.73f };
			*uParam12 = 1.5f;
			*uParam13 = { 1165.149f, 2712.433f, 37.138f };
			*uParam14 = { 1165.132f, 2710.033f, 41.138f };
			*uParam15 = 5f;
			*uParam16 = { 1165.946f, 2709.136f, 37.96316f };
			*uParam17 = 1f;
			break;
		
		case 6:
			*uParam1 = { -2973.31f, 390.75f, 14.04f };
			*uParam2 = { -2964.67f, 390.23f, 17.65f };
			*uParam3 = 7.5f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -2956.98f, 389.73f, 13.21f };
			*uParam8 = { -2964.11f, 390.19f, 17.65f };
			*uParam9 = 7.5f;
			*uParam10 = { -2964.86f, 388.43f, 14.05f };
			*uParam11 = { -2964.98f, 386.49f, 17.63f };
			*uParam12 = 1.72f;
			*uParam13 = { -2964.645f, 391.391f, 14.048f };
			*uParam14 = { -2966.636f, 391.577f, 18.048f };
			*uParam15 = 4.5f;
			*uParam16 = { -2967.906f, 391.0424f, 14.94331f };
			*uParam17 = 1f;
			break;
		
		case 7:
			*uParam1 = { -1226.29f, -902.84f, 11.33f };
			*uParam2 = { -1221.4f, -910.16f, 14.93f };
			*uParam3 = 7.5f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -1217.01f, -916.41f, 10.47f };
			*uParam8 = { -1221.13f, -910.58f, 14.89f };
			*uParam9 = 7.5f;
			*uParam10 = { -1222.99f, -911.03f, 11.33f };
			*uParam11 = { -1224.59f, -912.13f, 14.93f };
			*uParam12 = 1.72f;
			*uParam13 = { -1220.512f, -909.343f, 11.331f };
			*uParam14 = { -1221.766f, -907.785f, 15.331f };
			*uParam15 = 4.5f;
			*uParam16 = { -1222.687f, -907.0001f, 12.22635f };
			*uParam17 = 1.15f;
			break;
		
		case 8:
			*uParam1 = { 1141f, -980.98f, 45.42f };
			*uParam2 = { 1132.3f, -982.16f, 48.99f };
			*uParam3 = 7.5f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 1124.73f, -983.22f, 44.57f };
			*uParam8 = { 1131.81f, -982.24f, 48.99f };
			*uParam9 = 7.5f;
			*uParam10 = { 1132.21f, -980.35f, 45.42f };
			*uParam11 = { 1131.91f, -978.44f, 49.02f };
			*uParam12 = 1.72f;
			*uParam13 = { 1132.764f, -983.742f, 45.42f };
			*uParam14 = { 1134.692f, -983.21f, 49.42f };
			*uParam15 = 4.5f;
			*uParam16 = { 1135.651f, -982.4113f, 46.31583f };
			*uParam17 = 1.05f;
			break;
		
		case 9:
			*uParam1 = { -1490.78f, -383.33f, 39.16f };
			*uParam2 = { -1484.56f, -377.1f, 42.74f };
			*uParam3 = 7.5f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -1479.17f, -371.69f, 38.33f };
			*uParam8 = { -1484.2f, -376.75f, 42.73f };
			*uParam9 = 7.5f;
			*uParam10 = { -1483.39f, -378.48f, 39.17f };
			*uParam11 = { -1482.01f, -379.86f, 42.77f };
			*uParam12 = 1.72f;
			*uParam13 = { -1485.5f, -376.545f, 39.167f };
			*uParam14 = { -1486.889f, -377.985f, 43.167f };
			*uParam15 = 4.5f;
			*uParam16 = { -1487.306f, -378.922f, 39.81341f };
			*uParam17 = 1.05f;
			break;
		
		case 10:
			*uParam1 = { -3240.12f, 1004.46f, 11.84f };
			*uParam2 = { -3247.19f, 1005.06f, 15.36f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -3249.75f, 999.74f, 11.83f };
			*uParam8 = { -3249.05f, 1007.41f, 15.2f };
			*uParam9 = 3.66f;
			*uParam10 = { -3247.71f, 1000.33f, 11.83f };
			*uParam11 = { -3247.59f, 1001.62f, 14.13f };
			*uParam12 = 0.75f;
			*uParam13 = { -3242.573f, 999.168f, 11.835f };
			*uParam14 = { -3242.482f, 1000.365f, 15.835f };
			*uParam15 = 4.2f;
			*uParam16 = { -3241.872f, 1006.54f, 12.73071f };
			*uParam17 = 1f;
			break;
		
		case 11:
			*uParam1 = { -3038.7f, 589.51f, 6.92f };
			*uParam2 = { -3045.47f, 587.31f, 10.45f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -3045.77f, 581.47f, 6.91f };
			*uParam8 = { -3048.23f, 589.1f, 10.43f };
			*uParam9 = 3.66f;
			*uParam10 = { -3044.12f, 582.75f, 6.9f };
			*uParam11 = { -3044.51f, 583.99f, 9.21f };
			*uParam12 = 0.75f;
			*uParam13 = { -3039.04f, 583.639f, 6.914f };
			*uParam14 = { -3039.453f, 584.766f, 10.914f };
			*uParam15 = 4.2f;
			*uParam16 = { -3041.18f, 590.7718f, 7.808933f };
			*uParam17 = 1f;
			break;
		
		case 12:
			*uParam1 = { 544.21f, 2672.5f, 41.16f };
			*uParam2 = { 545.16f, 2665.44f, 44.68f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 550.96f, 2664.13f, 41.16f };
			*uParam8 = { 542.86f, 2663.05f, 44.69f };
			*uParam9 = 3.66f;
			*uParam10 = { 549.89f, 2665.96f, 41.17f };
			*uParam11 = { 548.61f, 2665.78f, 43.46f };
			*uParam12 = 0.75f;
			*uParam13 = { 549.913f, 2671.202f, 41.161f };
			*uParam14 = { 548.726f, 2671.024f, 45.161f };
			*uParam15 = 4.2f;
			*uParam16 = { 542.5831f, 2670.376f, 42.05651f };
			*uParam17 = 1f;
			break;
		
		case 13:
			*uParam1 = { 2559.12f, 385.39f, 107.62f };
			*uParam2 = { 2552.06f, 385.68f, 111.17f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam10 = { 2551.76f, 380.95f, 107.65f };
			*uParam11 = { 2551.82f, 382.21f, 109.92f };
			*uParam12 = 0.75f;
			*uParam13 = { 2556.854f, 379.973f, 107.627f };
			*uParam14 = { 2556.845f, 381.173f, 111.627f };
			*uParam15 = 4.2f;
			*uParam16 = { 2557.248f, 387.3177f, 108.523f };
			*uParam17 = 1f;
			break;
		
		case 14:
			*uParam1 = { 2681.84f, 3282.62f, 54.24f };
			*uParam2 = { 2675.63f, 3286.07f, 57.79f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 2671.06f, 3282.22f, 54.48f };
			*uParam8 = { 2675.1f, 3289.37f, 57.77f };
			*uParam9 = 3.66f;
			*uParam10 = { 2673.23f, 3281.96f, 54.25f };
			*uParam11 = { 2673.85f, 3283.09f, 56.53f };
			*uParam12 = 0.75f;
			*uParam13 = { 2677.411f, 3278.796f, 54.246f };
			*uParam14 = { 2677.978f, 3279.854f, 58.246f };
			*uParam15 = 4.2f;
			*uParam16 = { 2680.964f, 3285.271f, 55.14115f };
			*uParam17 = 1f;
			break;
		
		case 15:
			*uParam1 = { 1731.25f, 6411.58f, 34.04f };
			*uParam2 = { 1734.35f, 6417.97f, 37.58f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 1730.29f, 6422.24f, 34.23f };
			*uParam8 = { 1737.68f, 6418.66f, 37.59f };
			*uParam9 = 3.66f;
			*uParam10 = { 1730.17f, 6420.17f, 34.04f };
			*uParam11 = { 1731.33f, 6419.58f, 36.34f };
			*uParam12 = 0.75f;
			*uParam13 = { 1727.219f, 6415.816f, 34.042f };
			*uParam14 = { 1728.296f, 6415.289f, 38.042f };
			*uParam15 = 4.2f;
			*uParam16 = { 1733.865f, 6412.566f, 34.93724f };
			*uParam17 = 1f;
			break;
		
		case 16:
			*uParam1 = { 1964.96f, 3740.86f, 31.38f };
			*uParam2 = { 1961.43f, 3746.95f, 34.89f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 1955.68f, 3746.02f, 31.4f };
			*uParam8 = { 1962.38f, 3749.91f, 34.72f };
			*uParam9 = 3.66f;
			*uParam10 = { 1957.3f, 3744.68f, 31.35f };
			*uParam11 = { 1958.38f, 3745.33f, 33.63f };
			*uParam12 = 0.75f;
			*uParam13 = { 1959.255f, 3739.774f, 31.349f };
			*uParam14 = { 1960.274f, 3740.408f, 35.349f };
			*uParam15 = 4.2f;
			*uParam16 = { 1965.634f, 3743.55f, 32.24376f };
			*uParam17 = 1f;
			break;
		
		case 17:
			*uParam1 = { 34.84f, -1345.6f, 27f };
			*uParam2 = { 23.34f, -1345.56f, 32f };
			*uParam3 = 7.2f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 27.44f, -1341.815f, 27.01f };
			*uParam8 = { 27.46f, -1337.815f, 32.01f };
			*uParam9 = 9f;
			*uParam10 = { 24.05f, -1341.89f, 27f };
			*uParam11 = { 26.05f, -1341.87f, 32f };
			*uParam12 = 1f;
			*uParam13 = { 23.566f, -1346.956f, 27f };
			*uParam14 = { 25.065f, -1346.901f, 32f };
			*uParam15 = 4f;
			*uParam16 = { 30.97348f, -1347.115f, 29.39393f };
			*uParam17 = 1f;
			break;
		
		case 18:
			*uParam1 = { 376.65f, 323.6f, 102.57f };
			*uParam2 = { 378.35f, 330.47f, 106.12f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 373.45f, 333.81f, 102.58f };
			*uParam8 = { 381.42f, 331.81f, 106.11f };
			*uParam9 = 3.66f;
			*uParam10 = { 373.79f, 331.72f, 102.58f };
			*uParam11 = { 375.03f, 331.41f, 104.86f };
			*uParam12 = 0.75f;
			*uParam13 = { 371.789f, 326.823f, 102.571f };
			*uParam14 = { 372.957f, 326.548f, 106.571f };
			*uParam15 = 4.2f;
			*uParam16 = { 378.9936f, 325.0343f, 103.4664f };
			*uParam17 = 1f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_302()//Position - 0x14578
{
	func_305();
	func_304();
	func_303();
}

void func_303()//Position - 0x1458C
{
	int iVar0;
	
	if (iLocal_82 >= 9)
	{
		if (Global_19B04.f_4E26.f_29 > 3)
		{
			if (iLocal_82 == 9)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = unk_0x491B2241281A03B7(0, 5);
			}
			if (iVar0 < 1)
			{
				Local_66.f_1D0 = 1;
				Global_19B04.f_4E26.f_29 = 0;
			}
			else
			{
				Local_66.f_1D0 = 0;
				Global_19B04.f_4E26.f_29++;
			}
		}
		else
		{
			Global_19B04.f_4E26.f_29++;
		}
	}
	else
	{
		Global_19B04.f_4E26.f_29++;
	}
}

void func_304()//Position - 0x14620
{
	int iVar0;
	
	if (iLocal_82 >= 3)
	{
		if (iLocal_82 == 3)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = unk_0x491B2241281A03B7(0, 10);
		}
		if (iVar0 < 1)
		{
			Local_66.f_2.f_C = 1;
		}
		else
		{
			Local_66.f_2.f_C = 0;
		}
	}
}

void func_305()//Position - 0x1465F
{
	int iVar0;
	
	if (iLocal_82 >= 6)
	{
		if (iLocal_82 == 6)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = unk_0x491B2241281A03B7(0, 7);
		}
		if (iVar0 < 1)
		{
			iLocal_58 = 2;
		}
		else
		{
			iLocal_58 = 1;
		}
	}
}

int func_306()//Position - 0x14695
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 19)
	{
		iVar0 = (iVar0 + Global_19B04.f_4E26[iVar1]);
		iVar1++;
	}
	return iVar0;
}

void func_307(var uParam0, var uParam1, int iParam2)//Position - 0x146C5
{
	float fVar0;
	int iVar1;
	float fVar2;
	
	*iParam2 = 0;
	fVar0 = SYSTEM::VDIST2(func_289(0), *uParam0);
	fVar2 = 0f;
	iVar1 = 1;
	while (iVar1 <= (19 - 1))
	{
		fVar2 = SYSTEM::VDIST2(*uParam0, func_289(iVar1));
		if (fVar2 < fVar0)
		{
			*iParam2 = iVar1;
			fVar0 = fVar2;
		}
		iVar1++;
	}
	*uParam1 = { func_289(*iParam2) };
}

void func_308(var uParam0, int iParam1)//Position - 0x14724
{
	if (iParam1 > 0)
	{
		uParam0->f_21 = iParam1;
	}
}

bool func_309(int iParam0)//Position - 0x1473B
{
	return Global_8C41 == iParam0;
}

int func_310(int iParam0)//Position - 0x14749
{
	if (Global_8C41 == 15)
	{
		return 0;
	}
	if (func_311(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_311(int iParam0)//Position - 0x1476B
{
	return func_312(iParam0, Global_8C41);
}

int func_312(int iParam0, int iParam1)//Position - 0x1477C
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

void func_313()//Position - 0x1495D
{
	if (((iLocal_63 == 1 || iLocal_63 == 2) || iLocal_101 == 7) || (unk_0x1D403DFADBC2DE3C(Local_66.f_2, 0) && iLocal_65 == 1))
	{
		if (iLocal_63 == 1)
		{
		}
		if (iLocal_63 == 2)
		{
		}
		if (iLocal_101 == 7)
		{
		}
		if (unk_0x1D403DFADBC2DE3C(Local_66.f_2, 0) && iLocal_65 == 1)
		{
		}
		Global_19B04.f_4E26.f_15[iLocal_80] = unk_0x6E06C0DB9B43570D();
		Global_19B04.f_4E26.f_2A[iLocal_80] = unk_0xBE14F159908E4EE5();
	}
	if ((unk_0x57D316754A262B34() && func_324()) && Local_66.f_1D4)
	{
		func_320(&iLocal_80, &iLocal_87, &iLocal_81);
	}
	func_319();
	iLocal_87 = 0;
	iLocal_91 = 0;
	iLocal_92 = 0;
	iLocal_93 = 0;
	if (!bLocal_86)
	{
		unk_0xAEC867D0DBB7AFEB(5);
	}
	unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 0);
	unk_0x483687B0FCA5415A(iLocal_79, 0);
	func_28("SHR_HOLDUP_1", 1);
	func_28("SHR_SNK_TUT", 1);
	if ((func_27("SHR_MENU") || func_27("SHR_HOLDUP_1")) || func_27("SHR_SNK_TUT"))
	{
		unk_0x7456702622C62EA0(1);
	}
	if (func_1(Local_66.f_1D6, 1024))
	{
		if ((unk_0x724D816EA203A79E(iLocal_98[0]) && unk_0x724D816EA203A79E(iLocal_98[1])) && unk_0x724D816EA203A79E(iLocal_98[2]))
		{
			unk_0xA35241BCE4C1A24B(&(iLocal_98[0]));
			unk_0xA35241BCE4C1A24B(&(iLocal_98[1]));
			unk_0xA35241BCE4C1A24B(&(iLocal_98[2]));
		}
	}
	if (iLocal_100 == 2)
	{
		unk_0x4EA570997E107F35(Local_66.f_1E6.f_1);
	}
	func_314(&Local_96, 0);
	unk_0x95E4B6F3ED223F5A();
}

void func_314(var uParam0, bool bParam1)//Position - 0x14AF6
{
	int iVar0;
	
	if (!bParam1)
	{
		func_316(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_315(uParam0[iVar0 /*2*/]);
		iVar0++;
	}
	uParam0->f_1F = 0;
	uParam0->f_20 = -1;
	uParam0->f_21 = 1;
}

void func_315(var uParam0)//Position - 0x14B36
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
}

void func_316(var uParam0)//Position - 0x14B47
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*2*/], 30))
		{
			func_317(uParam0[iVar0 /*2*/]);
		}
		iVar0++;
	}
	uParam0->f_1F = 1;
}

void func_317(var uParam0)//Position - 0x14B80
{
	func_318(*uParam0, "NULL", uParam0->f_1);
}

void func_318(int iParam0, char* sParam1, int iParam2)//Position - 0x14B95
{
	if (unk_0xFA30DFD0084E92FE(iParam0, 30))
	{
		switch (func_263(iParam0))
		{
			case 0:
				unk_0x2CA123B0622F495C(iParam2);
				break;
			
			case 1:
				unk_0x4EA570997E107F35(sParam1);
				break;
			
			case 2:
				unk_0xFC4EC4916831BFC8(sParam1);
				break;
			
			case 3:
				unk_0x786556581D95BCB2(sParam1);
				break;
			
			case 4:
				unk_0x4F5DAC981AF98536(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x4CE01E22F13D3913(sParam1);
				break;
			
			case 6:
				unk_0xC32C243942383443();
				break;
			
			case 7:
				unk_0xE0BCC382FA9C9FF7(iParam2);
				break;
			
			case 8:
				unk_0x841D233D3CE81152(iParam2, unk_0xFA30DFD0084E92FE(iParam0, 26));
				break;
			
			case 9:
				unk_0x8E5F062750135AD1();
				break;
			
			default:
				break;
		}
	}
}

void func_319()//Position - 0x14C55
{
	if (!unk_0x1D403DFADBC2DE3C(Local_66.f_2, 0))
	{
		unk_0xA4E856A8CD53B8DF(Local_66.f_2);
	}
	if (unk_0x724D816EA203A79E(Local_66.f_2))
	{
		func_213();
		unk_0x02537C8C1BEEB477(&(Local_66.f_2));
	}
	if (unk_0x724D816EA203A79E(Local_66.f_56))
	{
		unk_0x02537C8C1BEEB477(&(Local_66.f_56));
	}
	if (!unk_0x1D403DFADBC2DE3C(Local_66.f_1C, 0))
	{
		if (iLocal_53 >= 4)
		{
			unk_0x6C3BE67B02D72CDC(Local_66.f_1C, -8f, 1);
			unk_0x5EBD7EB63AD5FB1D(Local_66.f_1C, 1, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, 1, 1, 0, 0, 1);
		}
	}
	if (unk_0x724D816EA203A79E(Local_66.f_1C))
	{
		unk_0xF8ED8988FAF2823F(&(Local_66.f_1C));
	}
	if (unk_0x724D816EA203A79E(Local_66.f_60.f_1))
	{
		unk_0xA35241BCE4C1A24B(&(Local_66.f_60.f_1));
		unk_0x466BFD40867F5065(Local_66.f_1E6.f_6, 0.5f, 303280717, false);
		unk_0x466BFD40867F5065(Local_66.f_1E6.f_6, 0.5f, joaat("prop_till_02"), false);
		unk_0x466BFD40867F5065(Local_66.f_1E6.f_6, 0.5f, joaat("prop_till_03"), false);
	}
	if (unk_0xA901403F1DB7A780(Local_66.f_1C.f_1))
	{
		unk_0x9680DF46F29C0428(Local_66.f_1C.f_1);
	}
	if (func_14(&(Local_66.f_1DD)))
	{
		func_39(&(Local_66.f_1DD));
	}
	if (Local_66.f_1D2)
	{
		if (!bLocal_86)
		{
			unk_0x4EA570997E107F35(Local_66.f_2.f_F);
		}
		Local_66.f_1D2 = 0;
	}
}

void func_320(int iParam0, var uParam1, var uParam2)//Position - 0x14D94
{
	int iVar0;
	struct<6> Var1[3];
	struct<8> Var2[2];
	
	iVar0 = func_323(*uParam1, 1, 0);
	StringCopy(&(Var2[0 /*8*/]), "GameType", 32);
	StringCopy(&(Var2[1 /*8*/]), "Location", 32);
	StringCopy(&(Var1[0 /*6*/]), "SP", 24);
	MemCopy(&(Var1[1 /*6*/]), {func_322(iParam0)}, 6);
	if (func_321(276, &Var1, &Var2, 2, -1, 0, 0))
	{
		unk_0x18054B9E2612CC6D(131, *uParam2, SYSTEM::TO_FLOAT(*uParam2));
		unk_0x18054B9E2612CC6D(114, iVar0, SYSTEM::TO_FLOAT(iVar0));
	}
}

int func_321(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x14E11
{
	struct<68> Var0;
	int iVar1;
	struct<13> Var2;
	var uVar3;
	
	if (!unk_0x57D316754A262B34())
	{
	}
	if ((!unk_0x8BEB5B1064243AE5() && (unk_0x36C1DE668967177B() || !unk_0x11F704A1BA7AC122())) && unk_0x198118F0FE63908B())
	{
		Var0.f_2.f_1 = 4;
		Var0 = iParam0;
		if (iParam4 == -1)
		{
			if (unk_0xB9ACC1154C623363())
			{
				Var2 = { func_139(unk_0xB5CEFD608600A09F()) };
				if (unk_0xD7F4457CECF10121(&Var2))
				{
					if (unk_0x24723877416AAAFC(&uVar3, 35, &Var2))
					{
						Var0.f_1 = uVar3;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar1 = 0;
		while (iVar1 < iParam3)
		{
			Var0.f_2.f_1[iVar1 /*16*/] = { *(uParam2[iVar1 /*8*/]) };
			MemCopy(&(Var0.f_2.f_1[iVar1 /*16*/].f_8), {*(uParam1[iVar1 /*6*/])}, 8);
			iVar1++;
		}
		if (bParam5)
		{
			Global_1C0005.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (unk_0x7AF0088ABFA713B6() && Global_2579BD.f_3)
			{
				unk_0xD10ECE53AB296FDB(&Var0, &(Global_193A13.f_A));
			}
			else
			{
				unk_0x2F7E331C1ABCF9E9(&Var0);
			}
		}
		return 1;
	}
	if (unk_0x8BEB5B1064243AE5())
	{
	}
	if (!unk_0x36C1DE668967177B())
	{
	}
	if (unk_0x11F704A1BA7AC122())
	{
	}
	if (!unk_0x198118F0FE63908B())
	{
	}
	return 0;
}

struct<8> func_322(var uParam0)//Position - 0x14F45
{
	struct<8> Var0;
	
	switch (*uParam0)
	{
		case -2:
		case -1:
			StringCopy(&Var0, "InvalidEnum", 32);
			break;
		
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			StringCopy(&Var0, "SHR_GAS", 32);
			break;
		
		case 5:
			StringCopy(&Var0, "SHR_LIQ1", 32);
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
			StringCopy(&Var0, "SHR_LIQ2", 32);
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			StringCopy(&Var0, "SHR_CONV", 32);
			break;
		
		default:
			StringCopy(&Var0, "InvalidEnum", 32);
			break;
	}
	return Var0;
}

int func_323(bool bParam0, int iParam1, int iParam2)//Position - 0x15016
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_324()//Position - 0x1502D
{
	if (func_326() && func_325(0))
	{
		return 1;
	}
	return 0;
}

var func_325(int iParam0)//Position - 0x1504B
{
	return Global_140675[iParam0];
}

var func_326()//Position - 0x1505B
{
	return func_325(func_76() + 1);
}

