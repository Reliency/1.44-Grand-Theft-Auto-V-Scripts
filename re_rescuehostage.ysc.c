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
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	char* sLocal_22 = NULL;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	vector3 vLocal_44 = { 0f, 0f, 0f };
	int iLocal_45 = 0;
	vector3 vLocal_46 = { 0f, 0f, 0f };
	float fLocal_47 = 0f;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	var uLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	vector3 vLocal_66 = { 0f, 0f, 0f };
	vector3 vLocal_67 = { 0f, 0f, 0f };
	bool bLocal_68 = 0;
	bool bLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	bool bLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	char* sLocal_82 = NULL;
	char* sLocal_83 = NULL;
	char* sLocal_84 = NULL;
	float fLocal_85 = 0f;
	float fLocal_86 = 0f;
	float fLocal_87 = 0f;
	float fLocal_88 = 0f;
	int iLocal_89 = 0;
	bool bLocal_90 = 0;
	int iLocal_91 = 0;
	bool bLocal_92 = 0;
	struct<10> Local_93[16];
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	int iLocal_98 = 0;
	char* sLocal_99 = NULL;
	struct<18> Local_100 = { 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5 } ;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
	iLocal_19 = 3;
	sLocal_22 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_59 = 8000;
	iLocal_64 = -1;
	bLocal_79 = true;
	sLocal_84 = "NULL";
	fLocal_85 = -120f;
	fLocal_86 = 120f;
	fLocal_87 = 40f;
	fLocal_88 = 90f;
	bLocal_90 = true;
	sLocal_99 = "RANDOM@RESCUE_HOSTAGE";
	vLocal_46 = { ScriptParam_100.f_1[0 /*3*/] };
	fLocal_47 = ScriptParam_100.f_11[0];
	if (unk_0xE8A79675302ED812(11))
	{
		func_157();
	}
	if (Global_81F6[0] == 1)
	{
		unk_0x95E4B6F3ED223F5A();
	}
	if (func_115(vLocal_46, -1, 0, 0, 0))
	{
		func_112(-1);
	}
	else
	{
		unk_0x95E4B6F3ED223F5A();
	}
	func_111();
	func_110();
	while (true)
	{
		SYSTEM::WAIT(0);
		func_109();
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			unk_0x6A095EC1C9AF12A4(unk_0xB5CEFD608600A09F());
		}
		if (unk_0x684B06333594F9EA())
		{
			switch (iLocal_45)
			{
				case 0:
					if (func_106())
					{
						iLocal_91 = unk_0x105601648511CC64();
						iLocal_45 = 1;
					}
					else if (func_105())
					{
						func_157();
					}
					break;
				
				case 1:
					if (iLocal_60 == 0)
					{
						iLocal_60 = unk_0x9C23040DD1853B23(99, -104.982f, 6408.737f, 30.4905f, 180000f);
					}
					func_104();
					if (!unk_0x36CEFBE9B745A58D(iLocal_49))
					{
						func_103();
					}
					else if (!unk_0x36CEFBE9B745A58D(iLocal_50))
					{
						func_99();
						func_98();
					}
					else
					{
						func_157();
					}
					if (bLocal_68)
					{
						func_96();
					}
					if (!unk_0x36CEFBE9B745A58D(iLocal_48))
					{
						if (!func_95())
						{
							if (func_83())
							{
								func_157();
							}
							func_68();
						}
						else if (!bLocal_68)
						{
							func_51();
						}
					}
					else
					{
						if (Local_93[1 /*10*/].f_7)
						{
							if (unk_0x2DA8CA50A72528FB(iLocal_53))
							{
								unk_0x07B8ECB35A4ED3AC(&iLocal_53);
							}
							if (unk_0x2DA8CA50A72528FB(iLocal_54))
							{
								unk_0x07B8ECB35A4ED3AC(&iLocal_54);
							}
							func_50(&Local_93, 1);
							func_48();
						}
						if (!unk_0x36CEFBE9B745A58D(iLocal_49))
						{
							if (bLocal_68)
							{
								if (unk_0x77FC50899603581D(iLocal_63))
								{
									if (unk_0x8FD30584EB38411B(iLocal_63) == 1f)
									{
										if (!unk_0x36CEFBE9B745A58D(iLocal_49))
										{
											unk_0xF1FC2182A76AD7FC(iLocal_49, 1);
											unk_0x65E471E4A2D56226(iLocal_49, 0, 0);
										}
									}
								}
							}
							else
							{
								if (func_47())
								{
									iLocal_45 = 3;
								}
								if (!unk_0x36CEFBE9B745A58D(iLocal_50))
								{
								}
							}
						}
					}
					break;
				
				case 2:
					iLocal_52 = unk_0x67FCE1EB536A0735(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 35f, 0, 101383);
					if (unk_0xE59B7F5A03335350(iLocal_52, 0))
					{
						if (!bLocal_92)
						{
							unk_0xED946BB96C5E9C4A(unk_0xB5CEFD608600A09F(), 2, 0);
							unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
						}
						func_157();
					}
					if (!iLocal_78)
					{
						if (unk_0x9EDABB1E7725D7A0(7, vLocal_46, 2, 0f, &uLocal_80, 0, 0))
						{
							iLocal_78 = 1;
						}
					}
					break;
				
				case 3:
					if (iLocal_76)
					{
						if (SYSTEM::TIMERA() > 5000)
						{
							if (!unk_0x36CEFBE9B745A58D(iLocal_49))
							{
								unk_0x22321800954A532E(iLocal_49, true);
								func_22();
							}
							func_157();
						}
					}
					else
					{
						if (func_47())
						{
							if (!bLocal_69)
							{
								if (bLocal_79)
								{
									if (func_5(&Local_93, "RERHOAU", "RERHO_THANK", 4, iLocal_98, 0, 0))
									{
										bLocal_69 = true;
									}
								}
								else if (func_5(&Local_93, "RERHOAU", "RERHO_NOGUN", 4, iLocal_98, 0, 0))
								{
									bLocal_69 = true;
								}
							}
						}
						func_3();
						if (!unk_0x36CEFBE9B745A58D(iLocal_49))
						{
							if (unk_0x105601648511CC64() > iLocal_62 + 100)
							{
								func_1(iLocal_49, "WHIMPER", "WAVELOAD_PAIN_FEMALE", 24);
								iLocal_62 = unk_0x105601648511CC64();
							}
						}
						if (bLocal_69)
						{
							if (!iLocal_77)
							{
								if (!unk_0x36CEFBE9B745A58D(iLocal_50))
								{
									if (func_5(&Local_93, "RERHOAU", "RERHO_CONS", 4, iLocal_98, 0, 0))
									{
										iLocal_77 = 1;
									}
								}
							}
						}
						iLocal_52 = unk_0x67FCE1EB536A0735(vLocal_46, 5f, joaat("ambulance"), 0);
						if (unk_0xE59B7F5A03335350(iLocal_52, 0))
						{
							SYSTEM::SETTIMERA(0);
							iLocal_76 = 1;
						}
						iLocal_51 = unk_0xDD69F88FEB1D3ABD(vLocal_46, 1.5f, 1.5f, 1.5f, -1);
						if (!unk_0x36CEFBE9B745A58D(iLocal_51))
						{
							SYSTEM::SETTIMERA(5000);
							iLocal_76 = 1;
						}
						if (!iLocal_78 && iLocal_77)
						{
							if (unk_0x9EDABB1E7725D7A0(5, vLocal_46, 2, 0f, &uLocal_81, 0, 0))
							{
								iLocal_78 = 1;
							}
						}
						if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), vLocal_46) > 5625f && !unk_0x33CC9445B2DF9387(vLocal_46, 10f))
						{
							func_22();
						}
					}
					break;
			}
		}
		else if (iLocal_45 == 3)
		{
			func_22();
		}
		else
		{
			func_157();
		}
	}
}

void func_1(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x45A
{
	unk_0x7E80A36CD8BDF4D1(iParam0, sParam1, sParam2, func_2(iParam3), 0);
}

int func_2(int iParam0)//Position - 0x473
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

void func_3()//Position - 0x662
{
	if (func_4())
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_49))
		{
			unk_0x2E35C4FA5F0ED22F(iLocal_49, false);
			unk_0xAB43C54784946B9F(iLocal_49, vLocal_46, 50f, -1, 0, 0);
			unk_0x22321800954A532E(iLocal_49, true);
			unk_0x02537C8C1BEEB477(&iLocal_49);
			func_48();
		}
		if (!unk_0x36CEFBE9B745A58D(iLocal_50))
		{
			unk_0x2E35C4FA5F0ED22F(iLocal_50, false);
			unk_0xAB43C54784946B9F(iLocal_50, vLocal_46, 50f, -1, 0, 0);
			unk_0x22321800954A532E(iLocal_50, true);
			unk_0x02537C8C1BEEB477(&iLocal_50);
			func_48();
		}
	}
	if (!unk_0x36CEFBE9B745A58D(iLocal_49))
	{
		if (unk_0xD9C1758D86688CEA(iLocal_49, unk_0xBC25C936A095B5BA(), 1))
		{
			if (unk_0x2CDE18D6C89522AD(iLocal_49))
			{
				unk_0x65E471E4A2D56226(iLocal_49, 0, 0);
			}
		}
		else if (unk_0x2CDE18D6C89522AD(iLocal_49))
		{
			unk_0x2E35C4FA5F0ED22F(iLocal_49, false);
			unk_0xAB43C54784946B9F(iLocal_49, vLocal_46, 50f, -1, 0, 0);
			unk_0x22321800954A532E(iLocal_49, true);
			unk_0x02537C8C1BEEB477(&iLocal_49);
			func_48();
			if (!unk_0x36CEFBE9B745A58D(iLocal_50))
			{
				unk_0x2E35C4FA5F0ED22F(iLocal_50, false);
				unk_0xAB43C54784946B9F(iLocal_50, vLocal_46, 50f, -1, 0, 0);
				unk_0x22321800954A532E(iLocal_50, true);
				unk_0x02537C8C1BEEB477(&iLocal_50);
				func_48();
			}
		}
	}
	else if (!unk_0x36CEFBE9B745A58D(iLocal_50))
	{
		unk_0x2E35C4FA5F0ED22F(iLocal_50, false);
		unk_0xAB43C54784946B9F(iLocal_50, vLocal_46, 50f, -1, 0, 0);
		unk_0x22321800954A532E(iLocal_50, true);
		unk_0x02537C8C1BEEB477(&iLocal_50);
		func_48();
	}
	if (!unk_0x36CEFBE9B745A58D(iLocal_50))
	{
		if (unk_0xD9C1758D86688CEA(iLocal_50, unk_0xBC25C936A095B5BA(), 1))
		{
			if (unk_0x2CDE18D6C89522AD(iLocal_50))
			{
				unk_0x65E471E4A2D56226(iLocal_50, 0, 0);
			}
		}
		else if (unk_0x2CDE18D6C89522AD(iLocal_50))
		{
			unk_0x2E35C4FA5F0ED22F(iLocal_50, false);
			unk_0xAB43C54784946B9F(iLocal_50, vLocal_46, 50f, -1, 0, 0);
			unk_0x22321800954A532E(iLocal_50, true);
			unk_0x02537C8C1BEEB477(&iLocal_50);
			func_48();
			if (!unk_0x36CEFBE9B745A58D(iLocal_49))
			{
				unk_0x2E35C4FA5F0ED22F(iLocal_49, false);
				unk_0xAB43C54784946B9F(iLocal_49, vLocal_46, 50f, -1, 0, 0);
				unk_0x22321800954A532E(iLocal_49, true);
				unk_0x02537C8C1BEEB477(&iLocal_49);
				func_48();
			}
		}
	}
	else if (!unk_0x36CEFBE9B745A58D(iLocal_49))
	{
		unk_0x2E35C4FA5F0ED22F(iLocal_49, false);
		unk_0xAB43C54784946B9F(iLocal_49, vLocal_46, 50f, -1, 0, 0);
		unk_0x22321800954A532E(iLocal_49, true);
		unk_0x02537C8C1BEEB477(&iLocal_49);
		func_48();
	}
}

bool func_4()//Position - 0x86D
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar2;
	
	vVar1 = { 15f, 15f, 10f };
	vVar2 = { -15f, -15f, -10f };
	if (!unk_0x36CEFBE9B745A58D(iLocal_49))
	{
		if (unk_0x04880508C862E589(unk_0x823166D9421223CA(iLocal_49, 31086, 0f, 0f, 0f), 15f, 1))
		{
			bVar0 = true;
		}
		vVar1 = { vVar1 + unk_0x823166D9421223CA(iLocal_49, 31086, 0f, 0f, 0f) };
		vVar2 = { vVar2 + unk_0x823166D9421223CA(iLocal_49, 31086, 0f, 0f, 0f) };
		if ((unk_0x1749F74D4E70A733(vVar2, vVar1, joaat("weapon_smokegrenade"), 1) || unk_0x1749F74D4E70A733(vVar2, vVar1, joaat("weapon_grenade"), 1)) || unk_0x1749F74D4E70A733(vVar2, vVar1, joaat("weapon_stickybomb"), 1))
		{
			bLocal_90 = true;
			bVar0 = true;
		}
		if (unk_0x6E65ED1DEEDEE6F8(-1, -90.68654f, 6411.883f, 36.00729f, -103.86f, 6398.848f, 30.19453f, 23f) || unk_0xC9FA5D38428AB6BE(-1, unk_0x823166D9421223CA(iLocal_49, 31086, 0f, 0f, 0f), 20f))
		{
			bLocal_90 = true;
			bVar0 = true;
		}
		if (unk_0xD9ED1893F2541636(unk_0x823166D9421223CA(iLocal_49, 31086, 0f, 0f, 0f), 6f))
		{
			bVar0 = true;
			bLocal_90 = true;
		}
	}
	if (!unk_0x36CEFBE9B745A58D(iLocal_50))
	{
		if (unk_0xD9C1758D86688CEA(iLocal_50, unk_0xBC25C936A095B5BA(), 1))
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
	}
	return bVar0;
}

bool func_5(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x9C5
{
	func_21(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_6(sParam2, iParam3, 0);
}

int func_6(char* sParam0, int iParam1, bool bParam2)//Position - 0xA13
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
					func_20();
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
		if (func_19(8, -1))
		{
			return 0;
		}
		Global_3E04 = { Global_3DFE };
		func_18();
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
				func_11();
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
				if (func_10())
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
			if (func_9())
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
			func_8();
			Global_3DC2 = bParam2;
		}
		Global_3DBA = iParam1;
		StringCopy(&Global_3C3B, sParam0, 24);
		Global_394A = 0;
		func_7();
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
		func_20();
	}
	return 0;
}

void func_7()//Position - 0xCDF
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

void func_8()//Position - 0xD11
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

int func_9()//Position - 0xDA6
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_10()//Position - 0xDCD
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

void func_11()//Position - 0xE66
{
	if (func_17(14))
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
		Global_389D = func_12();
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

int func_12()//Position - 0xF08
{
	func_13();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_13()//Position - 0xF21
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_16(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_15(unk_0xBC25C936A095B5BA());
			if (func_14(iVar0) && (!func_17(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_14(Global_19B04.f_932.f_21B.f_10CD))
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

bool func_14(int iParam0)//Position - 0x101E
{
	return iParam0 < 3;
}

int func_15(int iParam0)//Position - 0x102A
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_16(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_16(int iParam0)//Position - 0x1067
{
	if (func_14(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_17(int iParam0)//Position - 0x1091
{
	return Global_8C41 == iParam0;
}

void func_18()//Position - 0x109F
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

bool func_19(int iParam0, int iParam1)//Position - 0x10F7
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

void func_20()//Position - 0x1132
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

void func_21(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x1189
{
	Global_3B96 = { *uParam0 };
	Global_68F = iParam1;
	StringCopy(&Global_3DFE, sParam2, 24);
	Global_4195 = iParam5;
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

void func_22()//Position - 0x11DF
{
	unk_0xA98B19EC1C93FC3C(unk_0xB5CEFD608600A09F());
	func_46();
	func_26(-1, 0);
	func_23();
	func_157();
}

void func_23()//Position - 0x1202
{
	func_24();
}

int func_24()//Position - 0x120F
{
	if (func_25(0))
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

bool func_25(bool bParam0)//Position - 0x125A
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_1163A, 0);
}

void func_26(int iParam0, int iParam1)//Position - 0x1285
{
	if (iParam0 == -1)
	{
		iParam0 = func_44();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_43(iParam0))
	{
		func_42(iParam0, iParam1);
		if (!func_41(51))
		{
			func_37("RE_REWARD", 1, 0, 4000, 10000, func_40(), 0, 138, 0);
			func_36(51);
		}
		if (func_35(iParam0))
		{
			Global_19B04.f_6186.f_2 = 3;
		}
		if (func_34(iParam0, iParam1) != 322)
		{
			func_28(func_34(iParam0, iParam1), vLocal_44.x, vLocal_44.y);
		}
		Global_19AF8 = iParam1;
		if (Global_19AF6 == 0)
		{
			if (((Global_19AF9 == 1 || Global_19AF9 == 5) || Global_19AF9 == 11) || Global_19AF9 == 25)
			{
				func_27(2);
			}
			else if ((Global_19AF9 == 26 || Global_19AF9 == 8) || Global_19AF9 == 17)
			{
				func_27(7);
			}
			else
			{
				func_27(1);
			}
		}
	}
}

void func_27(int iParam0)//Position - 0x1389
{
	Global_19AF6 = iParam0;
}

void func_28(int iParam0, var uParam1, var uParam2)//Position - 0x1397
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
		func_32((891 + iParam0), 1, -1, 1);
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
		Global_19B04.f_27B5[iParam0 /*12*/].f_A = uParam1;
		Global_19B04.f_27B5[iParam0 /*12*/].f_B = uParam2;
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
		func_29();
	}
}

void func_29()//Position - 0x147F
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
		func_31(13, SYSTEM::FLOOR(Global_19B04.f_27B5.f_F0D));
	}
	if (!unk_0xF9BFA43C1BAFD016())
	{
		if (!Global_11542)
		{
			if (func_30() == 2 == 0 && !unk_0x7AF0088ABFA713B6())
			{
				if (unk_0x670C0C6C780A3F84())
				{
					Global_199FA = 0;
				}
				if (!Global_DA9F)
				{
					func_24();
				}
			}
		}
	}
}

int func_30()//Position - 0x1940
{
	return Global_62BD;
}

int func_31(int iParam0, int iParam1)//Position - 0x194B
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

int func_32(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x199C
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
		iParam2 = func_33();
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

int func_33()//Position - 0x1EB6
{
	return Global_1407E0;
}

int func_34(int iParam0, int iParam1)//Position - 0x1EC2
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_35(int iParam0)//Position - 0x2236
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_36(int iParam0)//Position - 0x2265
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		unk_0xF0059F27F7BB6680(&(Global_19B04.f_4F9D.f_96[iVar1]), iVar0);
	}
}

void func_37(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x22A7
{
	func_38(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_38(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x22C9
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
		func_39();
	}
}

void func_39()//Position - 0x249D
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

int func_40()//Position - 0x25BD
{
	func_13();
	switch (Global_19B04.f_932.f_21B.f_10CD)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

int func_41(int iParam0)//Position - 0x2603
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return unk_0xFA30DFD0084E92FE(Global_19B04.f_4F9D.f_96[iVar1], iVar0);
	}
	return 0;
}

void func_42(int iParam0, int iParam1)//Position - 0x2646
{
	unk_0xF0059F27F7BB6680(&(Global_19B04.f_6186.f_8[iParam0]), iParam1);
}

int func_43(int iParam0)//Position - 0x2661
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_44()//Position - 0x2712
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x1377080E9B0BD993(), 64);
	uVar1 = func_45(Var0);
	return uVar1;
}

int func_45(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x272F
{
	switch (unk_0x56BEECB328B6D29D(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

int func_46()//Position - 0x2909
{
	return 1;
}

int func_47()//Position - 0x2912
{
	if (!iLocal_73)
	{
		SYSTEM::WAIT(0);
		if (!unk_0x36CEFBE9B745A58D(iLocal_49))
		{
			if (iLocal_64 == -1)
			{
				unk_0xF1FC2182A76AD7FC(iLocal_49, 0);
				unk_0x3D410827E8F2C7BF(5, 0.5f);
				unk_0xC9926634CA95A831(5, 1f);
				unk_0x26BD89E1EA20454E(iLocal_49, 1);
				unk_0x751846449040F7EC(iLocal_49, 1);
				unk_0xE896C0AD02364F2A(iLocal_49, sLocal_99, "girl_villian_shot", 8f, -2f, -1, 10, 0, 0, 0, 0);
				iLocal_64 = unk_0xD0D858E538FD01C3(vLocal_66, vLocal_67, 2);
				if (!unk_0x36CEFBE9B745A58D(iLocal_50))
				{
					unk_0x4106FAF8AA1D69D5(iLocal_50, iLocal_55);
					if (!unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -91.30704f, 6391.854f, 30.6403f, -102.5595f, 6403.103f, 32.45444f, 8.5f, 0, true, 0))
					{
						unk_0xB62398E536F695FC(iLocal_50, iLocal_64, sLocal_99, "bystander_villian_shot", 1000f, -2f, 5, 0, 1148846080, 0);
					}
					else
					{
						unk_0x2E35C4FA5F0ED22F(iLocal_50, false);
					}
				}
				unk_0xB62398E536F695FC(iLocal_49, iLocal_64, sLocal_99, "girl_villian_shot", 1000f, -2f, 5, 0, 1148846080, 0);
			}
			else if (unk_0x77FC50899603581D(iLocal_64))
			{
				if (unk_0x8FD30584EB38411B(iLocal_64) > 0.1f)
				{
					func_3();
				}
				if (!iLocal_70)
				{
					if (bLocal_79)
					{
						if (unk_0x8FD30584EB38411B(iLocal_64) > 0.5f)
						{
							if (func_5(&Local_93, "RERHOAU", "RERHO_SAINT", 4, iLocal_98, 0, 0))
							{
								iLocal_70 = 1;
							}
						}
					}
					else if (func_5(&Local_93, "RERHOAU", "RERHO_THANK", 4, iLocal_98, 0, 0))
					{
						iLocal_70 = 1;
					}
				}
				if (unk_0x8FD30584EB38411B(iLocal_64) == 1f)
				{
					iLocal_64 = unk_0xD0D858E538FD01C3(vLocal_66, vLocal_67, 2);
					func_1(iLocal_49, "WHIMPER", "WAVELOAD_PAIN_FEMALE", 24);
					unk_0xC2BF3DE5E47F801D(iLocal_64, true);
					if (!unk_0x36CEFBE9B745A58D(iLocal_50))
					{
						if (bLocal_79)
						{
							unk_0xB62398E536F695FC(iLocal_50, iLocal_64, sLocal_99, "bystander_helping_girl_loop", 1000f, -2f, 5, 0, 1148846080, 0);
						}
						else
						{
							unk_0xC5A6DFE2B8987B17(&iLocal_71);
							unk_0x56F2E1B5599188FA(0, iLocal_49, -1, 1024, 2);
							unk_0x9565F9267674873A(0, iLocal_49, 20000, 3f, 1f, 1073741824, 0);
							unk_0xDE2D2B13F24A979D(0, -1);
							unk_0x535008C596714F9E(iLocal_71);
							unk_0xA8E6405305C0D7DF(iLocal_50, iLocal_71);
						}
						unk_0x22321800954A532E(iLocal_50, true);
						unk_0x4106FAF8AA1D69D5(iLocal_50, iLocal_57);
					}
					unk_0xB62398E536F695FC(iLocal_49, iLocal_64, sLocal_99, "girl_helping_girl_loop", 1000f, -2f, 5, 0, 1148846080, 0);
					unk_0x22321800954A532E(iLocal_49, true);
					unk_0x4106FAF8AA1D69D5(iLocal_49, iLocal_57);
					unk_0xF1FC2182A76AD7FC(iLocal_49, 1);
					unk_0xDF53A66AEE1401AA(1f);
					iLocal_73 = 1;
				}
			}
		}
	}
	return iLocal_73;
}

void func_48()//Position - 0x2B6E
{
	Global_394A = 0;
	func_49();
}

void func_49()//Position - 0x2B7E
{
	unk_0x5C7DC611411E2CF9();
	Global_41AB = 0;
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x1E08809A5041F85B(false);
		Global_3DB8 = 6;
	}
}

void func_50(var uParam0, int iParam1)//Position - 0x2B9F
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_51()//Position - 0x2BBC
{
	if (((((((((((unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -91.30704f, 6391.854f, 30.6403f, -102.5595f, 6403.103f, 32.45444f, 8.5f, 0, true, 0) && unk_0x1028B6250119A74B(iLocal_48, unk_0xBC25C936A095B5BA())) || (func_61(iLocal_48, &uLocal_58, &iLocal_59, 0, 0, 1077936128, 0) && unk_0x1028B6250119A74B(iLocal_48, unk_0xBC25C936A095B5BA()))) || (func_60(1) && unk_0x1028B6250119A74B(iLocal_48, unk_0xBC25C936A095B5BA()))) || func_58()) || func_57()) || func_4()) || func_56()) || unk_0x2CDE18D6C89522AD(iLocal_48)) || func_55()) || func_54()) || func_52(iLocal_48))
	{
		if (!unk_0xADA34C38F1319208(unk_0xBC25C936A095B5BA()))
		{
			if (!unk_0xD2B7EC731CF3F2D6(iLocal_48, joaat("weapon_stungun"), 0))
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_49))
				{
					if (!unk_0x2CDE18D6C89522AD(iLocal_48))
					{
						iLocal_63 = unk_0xD0D858E538FD01C3(vLocal_66, vLocal_67, 2);
						unk_0xC2BF3DE5E47F801D(iLocal_63, false);
						unk_0xB62398E536F695FC(iLocal_49, iLocal_63, sLocal_99, "girl_girl_shot", 4f, -4f, 5, 0, 1148846080, 0);
						unk_0xB62398E536F695FC(iLocal_48, iLocal_63, sLocal_99, "villian_girl_shot", 4f, -4f, 5, 0, 1148846080, 0);
						unk_0x22321800954A532E(iLocal_49, true);
						unk_0xF1FC2182A76AD7FC(iLocal_49, 0);
					}
				}
				if (!unk_0x36CEFBE9B745A58D(iLocal_50))
				{
					unk_0xF1FC2182A76AD7FC(iLocal_50, 1);
				}
				bLocal_68 = true;
			}
			else
			{
				unk_0x65E471E4A2D56226(iLocal_48, 50, 0);
			}
		}
	}
	else if (SYSTEM::TIMERA() > 6000)
	{
		if ((unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), iLocal_48) && unk_0x1028B6250119A74B(iLocal_48, unk_0xBC25C936A095B5BA())) || (unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), iLocal_48) && unk_0x1028B6250119A74B(iLocal_48, unk_0xBC25C936A095B5BA())))
		{
			if (unk_0x2DA8CA50A72528FB(iLocal_53))
			{
				unk_0x222805B89367761E(iLocal_53, true);
			}
			if (!iLocal_72)
			{
				if (!unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -91.30704f, 6391.854f, 30.6403f, -102.5595f, 6403.103f, 32.45444f, 8.5f, 0, true, 0))
				{
					if (func_5(&Local_93, "RERHOAU", sLocal_83, 4, 0, 0, 0))
					{
						iLocal_59 = 24000;
					}
					SYSTEM::SETTIMERA(0);
					iLocal_72 = 1;
				}
			}
		}
		else if (unk_0x3362CDE8460ED38B(sLocal_84, "NULL"))
		{
			switch (unk_0x491B2241281A03B7(0, 10))
			{
				case 6:
				case 5:
				case 4:
				case 3:
				case 0:
				case 9:
				case 8:
				case 7:
				case 1:
					if (iLocal_89)
					{
						sLocal_84 = "RERHO_HELP";
						iLocal_89 = 0;
					}
					else
					{
						sLocal_84 = "RERHO_RANT";
						iLocal_89 = 1;
					}
					break;
				
				case 2:
					sLocal_84 = "RERHO_SCREAM";
					break;
			}
		}
		else if (func_5(&Local_93, "RERHOAU", sLocal_84, 4, iLocal_98, 0, 0))
		{
			SYSTEM::SETTIMERA(0);
		}
	}
	else
	{
		sLocal_84 = "NULL";
	}
}

int func_52(int iParam0)//Position - 0x2E95
{
	int iVar0;
	bool bVar1;
	
	bVar1 = false;
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 0;
	}
	if (unk_0x36CEFBE9B745A58D(iParam0))
	{
		return 0;
	}
	unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &iVar0, 1);
	if (unk_0x1D3364A4FCD401E3(unk_0xBC25C936A095B5BA(), iVar0, joaat("component_at_ar_flsh")))
	{
		if (unk_0xEF2359E564E5DAF2(unk_0xBC25C936A095B5BA(), iVar0, joaat("component_at_ar_flsh")))
		{
			bVar1 = true;
		}
	}
	else if (unk_0x1D3364A4FCD401E3(unk_0xBC25C936A095B5BA(), iVar0, joaat("component_at_pi_flsh")))
	{
		if (unk_0xEF2359E564E5DAF2(unk_0xBC25C936A095B5BA(), iVar0, joaat("component_at_pi_flsh")))
		{
			bVar1 = true;
		}
	}
	if (bVar1)
	{
		if (unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), iParam0) || unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), iParam0))
		{
			if (SYSTEM::VDIST(unk_0x541C2AEF053615BC(iParam0, true), func_53(unk_0xB5CEFD608600A09F())) < 8f)
			{
				return 1;
			}
		}
	}
	return 0;
}

Vector3 func_53(int iParam0)//Position - 0x2F5B
{
	return unk_0x541C2AEF053615BC(unk_0xA95CF30C72EB526E(iParam0), false);
}

int func_54()//Position - 0x2F6E
{
	if (func_95())
	{
		if (unk_0x105601648511CC64() > (iLocal_91 + 60000))
		{
			bLocal_92 = true;
			return 1;
		}
	}
	else if (unk_0x105601648511CC64() > (iLocal_91 + 120000))
	{
		bLocal_92 = true;
		return 1;
	}
	return 0;
}

int func_55()//Position - 0x2FAB
{
	float fVar0;
	var uVar1[32];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	fVar0 = 75f;
	iVar4 = unk_0xDD69F88FEB1D3ABD(unk_0x541C2AEF053615BC(iLocal_48, false), fVar0, fVar0, fVar0, -1);
	if (!unk_0x36CEFBE9B745A58D(iVar4))
	{
		if (unk_0x6F79ECA8C83E4357(iVar4) == joaat("s_f_y_cop_01") || unk_0x6F79ECA8C83E4357(iVar4) == joaat("s_m_y_cop_01"))
		{
			return 1;
		}
	}
	iVar5 = unk_0x67FCE1EB536A0735(unk_0x541C2AEF053615BC(iLocal_48, false), fVar0, 0, 66561);
	if (unk_0xE59B7F5A03335350(iVar5, 0))
	{
		return 1;
	}
	iVar3 = unk_0xD7F48BFEBC0E3FB2(iLocal_48, &uVar1);
	if (iVar3 > 0)
	{
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			if (unk_0xE59B7F5A03335350(uVar1[iVar2], 0))
			{
				if (((unk_0x6F79ECA8C83E4357(uVar1[iVar2]) == joaat("police") || unk_0x6F79ECA8C83E4357(uVar1[iVar2]) == joaat("pranger")) || unk_0x6F79ECA8C83E4357(uVar1[iVar2]) == joaat("sheriff")) || unk_0x6F79ECA8C83E4357(uVar1[iVar2]) == joaat("sheriff2"))
				{
					return 1;
				}
			}
			iVar2++;
		}
	}
	return 0;
}

int func_56()//Position - 0x30B0
{
	if (unk_0xE642C1AC73CE364E(iLocal_48, unk_0xBC25C936A095B5BA(), 2f, 2f, 1.5f, 0, 1, 0))
	{
		if (unk_0x0921C54CF8DFC6E7(unk_0xB5CEFD608600A09F(), iLocal_48))
		{
			return 1;
		}
	}
	return 0;
}

bool func_57()//Position - 0x30E1
{
	bool bVar0;
	
	bVar0 = false;
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		if (unk_0x6F79ECA8C83E4357(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)) == joaat("bulldozer"))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_50))
			{
				if (unk_0xE921F8171F0733B3(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), iLocal_50))
				{
					bVar0 = true;
				}
			}
			if (!unk_0x36CEFBE9B745A58D(iLocal_49))
			{
				if (unk_0xE921F8171F0733B3(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), iLocal_49))
				{
					bVar0 = true;
				}
			}
			if (!unk_0x36CEFBE9B745A58D(iLocal_48))
			{
				if (unk_0xE921F8171F0733B3(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), iLocal_48))
				{
					bVar0 = true;
				}
			}
		}
	}
	if (bVar0)
	{
	}
	return bVar0;
}

bool func_58()//Position - 0x3171
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	var uVar3;
	struct<2> Var4;
	float fVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	
	bVar0 = false;
	bVar1 = false;
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0x2B3953EE61953843(unk_0x6F79ECA8C83E4357(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)), &uVar3, &Var4);
		fVar6 = Var4.f_1;
		if (unk_0x6E80E5225F67328D(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)))
		{
			if (unk_0xA6705B5DA0B723DE(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), &iVar8))
			{
				unk_0x2B3953EE61953843(unk_0x6F79ECA8C83E4357(iVar8), &uVar3, &Var4);
				fVar6 = (fVar6 + Var4.f_1);
				fVar6 = (fVar6 + 3f);
			}
		}
		if (unk_0x8910237449BB6F79(unk_0xBC25C936A095B5BA()) > 15f)
		{
			if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_48, (fVar6 + 17f), (fVar6 + 17f), 6f, 0, 1, 0))
			{
				bVar1 = true;
			}
		}
		else if (unk_0x8910237449BB6F79(unk_0xBC25C936A095B5BA()) > 10f)
		{
			if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_48, (fVar6 + 12f), (fVar6 + 12f), 6f, 0, 1, 0))
			{
				bVar1 = true;
			}
		}
		else if (unk_0x8910237449BB6F79(unk_0xBC25C936A095B5BA()) > 5f)
		{
			if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_48, (fVar6 + 8f), (fVar6 + 8f), 6f, 0, 1, 0))
			{
				bVar1 = true;
			}
		}
	}
	if (bVar1)
	{
		vVar2 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) - vLocal_46 };
		fVar5 = unk_0xFDC254CE02DB0919(vVar2.x, vVar2.y);
		if (func_59(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), fVar5, 15f))
		{
			bVar0 = true;
		}
		vVar2 = { vLocal_46 - unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
		fVar5 = unk_0xFDC254CE02DB0919(vVar2.x, vVar2.y);
		if (func_59(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), fVar5, 15f))
		{
			bVar0 = true;
		}
	}
	iVar7 = unk_0x3E12B546F3F2597A();
	if (unk_0x724D816EA203A79E(iVar7))
	{
		if (unk_0x0C265B3C448E6954(iVar7, -91.56341f, 6391.747f, 30.6397f, -101.2611f, 6401.7f, 32.45449f, 7.5f, 0, true, 0))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
	}
	return bVar0;
}

int func_59(int iParam0, float fParam1, float fParam2)//Position - 0x3343
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		fVar0 = unk_0x349C94FFF43E2979(iParam0);
		fVar2 = (fParam1 - fParam2);
		if (fVar2 < 0f)
		{
			fVar2 = (fVar2 + 360f);
		}
		fVar1 = (fParam1 + fParam2);
		if (fVar1 >= 360f)
		{
			fVar1 = (fVar1 - 360f);
		}
		if (fVar1 > fVar2)
		{
			if (fVar0 < fVar1 && fVar0 > fVar2)
			{
				return 1;
			}
		}
		else if (fVar0 < fVar1 || fVar0 > fVar2)
		{
			return 1;
		}
	}
	return 0;
}

int func_60(int iParam0)//Position - 0x33CA
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

int func_61(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, float fParam5, int iParam6)//Position - 0x3424
{
	float fVar0;
	float fVar1;
	bool bVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	bVar2 = false;
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0) && !bParam4)
	{
		if (unk_0x7214F4879DF8A314(iParam0))
		{
			fVar1 = fParam5;
		}
		else
		{
			fVar1 = (fParam5 + 3f);
		}
	}
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		if (!unk_0x1D403DFADBC2DE3C(iParam0, 0) && !bParam4)
		{
			vVar3 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
			vVar4 = { unk_0x541C2AEF053615BC(iParam0, true) };
			fVar5 = SYSTEM::VDIST(vVar3, vVar4);
			if (!unk_0xFA30DFD0084E92FE(iParam3, 3))
			{
				if (func_67(iParam0, iParam6))
				{
					func_66("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_66("	aggroReason = EAggro_Attacked\n");
					*uParam1 = 3;
					func_65(iParam0);
					return 1;
				}
			}
			if (!unk_0xFA30DFD0084E92FE(iParam3, 1))
			{
				if (fVar1 < 20f)
				{
				}
				if (unk_0x04880508C862E589(vVar4, fParam5, 1))
				{
					func_66("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_66("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_65(iParam0);
					return 1;
				}
				if (unk_0x876474582C5DECDE(vVar4 - Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), vVar4 + Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), 0))
				{
					func_66("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_66("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_65(iParam0);
					return 1;
				}
			}
			if (!unk_0xFA30DFD0084E92FE(iParam3, 2))
			{
				fVar0 = unk_0x28441A6C76D65605(unk_0xBC25C936A095B5BA());
				if (fVar0 < 0f)
				{
					fVar0 = 25f;
				}
				else if (fVar0 > 25f)
				{
					fVar0 = 25f;
				}
				if (unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 6))
				{
					if (unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), iParam0) || unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), iParam0))
					{
						if (fVar5 < fVar0)
						{
							if (unk_0x4833C1F1F1364989(iParam0, unk_0xBC25C936A095B5BA(), 17))
							{
								func_66("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
								func_66("	aggro Ped knows player is pointing gun\n");
								func_62("		lockOnTimer = ", *iParam2);
								func_66("\n");
								func_62("		time since not LockedOn = ", (unk_0x105601648511CC64() - iLocal_2));
								func_66("\n");
								bVar2 = true;
								if (unk_0x105601648511CC64() > (iLocal_2 + *iParam2))
								{
									func_66("			aggroReason = EAggro_HostileOrEnemy\n");
									*uParam1 = 2;
									func_65(iParam0);
									return 1;
								}
							}
						}
						else
						{
							bVar2 = false;
						}
					}
					else
					{
						bVar2 = false;
					}
				}
			}
			if (!unk_0xFA30DFD0084E92FE(iParam3, 0))
			{
				if (unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
				{
					func_66("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_66("			aggroReason = EAggro_Danger\n");
					*uParam1 = 0;
					func_65(iParam0);
					return 1;
				}
			}
		}
	}
	if (!bVar2)
	{
		iLocal_2 = unk_0x105601648511CC64();
	}
	return 0;
}

void func_62(char* sParam0, int iParam1)//Position - 0x3682
{
	func_64(sParam0);
	func_63(iParam1);
}

void func_63(int iParam0)//Position - 0x3696
{
	if (iParam0 > 0)
	{
	}
}

void func_64(char* sParam0)//Position - 0x36A4
{
	if (unk_0x3362CDE8460ED38B(sParam0, sParam0))
	{
	}
}

void func_65(int iParam0)//Position - 0x36B7
{
	unk_0xAFD2CBD312D69CFA(iParam0);
}

void func_66(char* sParam0)//Position - 0x36C5
{
	func_64(sParam0);
}

int func_67(int iParam0, int iParam1)//Position - 0x36D3
{
	if (unk_0x7214F4879DF8A314(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0xD9C1758D86688CEA(iParam0, unk_0xBC25C936A095B5BA(), 1))
		{
			return 1;
		}
	}
	else if (unk_0xD9C1758D86688CEA(iParam0, unk_0xBC25C936A095B5BA(), 1))
	{
		if ((unk_0xDF3442EA6BB67B98(iParam0) - unk_0x8D66276473ABD7CC(iParam0)) > iParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_68()//Position - 0x3720
{
	if (((unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -62.6571f, 6447.08f, 40.49928f, -153.6411f, 6354.579f, 23.99063f, 144.25f, 0, true, 0) || unk_0x33CC9445B2DF9387(vLocal_46, 15f)) || bLocal_68) || func_4())
	{
		iLocal_53 = func_79(iLocal_48, 1, 0);
		if (unk_0x2DA8CA50A72528FB(iLocal_53))
		{
			unk_0x222805B89367761E(iLocal_53, false);
		}
		func_69(1);
		iLocal_91 = unk_0x105601648511CC64();
		unk_0x6E52C7765A0F4382(0);
	}
	else
	{
		func_51();
	}
}

int func_69(int iParam0)//Position - 0x37B0
{
	if (func_73())
	{
		Global_19AFA = 1;
		Global_19AF7 = unk_0x105601648511CC64();
		if (func_35(Global_19AF9))
		{
			func_70(0);
		}
		unk_0x3FF92BBF0607A406(1, "RE_TITLE");
		if (iParam0 && func_35(Global_19AF9))
		{
			unk_0x621CEDEDDD531386();
		}
		return 1;
	}
	return 0;
}

void func_70(int iParam0)//Position - 0x3803
{
	switch (iParam0)
	{
		case 0:
			if (Global_19B04.f_6186.f_2 < 3)
			{
				if (!unk_0x5107E30005FCFEA8())
				{
					func_71(func_72(iParam0), -1);
					Global_19B04.f_6186.f_2++;
					unk_0xF0059F27F7BB6680(&Global_19B00, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xFA30DFD0084E92FE(Global_19B00, 1))
			{
				if (!unk_0x5107E30005FCFEA8())
				{
					func_71(func_72(iParam0), -1);
					Global_19B04.f_6186.f_3++;
					unk_0xF0059F27F7BB6680(&Global_19B00, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xFA30DFD0084E92FE(Global_19B00, 2))
			{
				if (!unk_0x5107E30005FCFEA8())
				{
					func_71(func_72(iParam0), -1);
					Global_19B04.f_6186.f_4++;
					unk_0xF0059F27F7BB6680(&Global_19B00, 2);
				}
			}
			break;
	}
}

void func_71(char* sParam0, int iParam1)//Position - 0x38E4
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, true, iParam1);
}

char* func_72(int iParam0)//Position - 0x38FB
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_73()//Position - 0x393F
{
	switch (func_74(&Global_62F8, 0, 5, 0, unk_0x8A55B15F4133C912()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_74(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x3975
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
		if (func_78(0))
		{
			return 0;
		}
		Global_8C1D++;
		*uParam0 = Global_8C1D;
		unk_0x3D7FF8418367D451(unk_0xFC1CAE18F3ECBF2D(), 0);
		Global_4336.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x27CBA62D1F6DF074(8);
		}
		Global_8C41 = iParam2;
		Global_8C1B = *uParam0;
		Global_8C1C = iParam4;
		Global_8C1A = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_8C1A > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_8C1A)
			{
				if (Global_8C20[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_8C1B == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_76(iParam2))
		{
			return 0;
		}
		if (Global_8C1A == 8)
		{
			return 0;
		}
		Global_8C1D++;
		*uParam0 = Global_8C1D;
		Global_8C20[Global_8C1A /*4*/] = Global_8C1D;
		Global_8C20[Global_8C1A /*4*/].f_1 = iParam1;
		Global_8C20[Global_8C1A /*4*/].f_2 = iParam2;
		Global_8C20[Global_8C1A /*4*/].f_3 = 0;
		Global_8C1A++;
		if (iParam4 != 0)
		{
			func_75(uParam0, iParam4);
		}
	}
	return 2;
}

void func_75(var uParam0, int iParam1)//Position - 0x3AAC
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

bool func_76(int iParam0)//Position - 0x3AFB
{
	return func_77(iParam0, Global_8C41);
}

int func_77(int iParam0, int iParam1)//Position - 0x3B0C
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

int func_78(int iParam0)//Position - 0x3CED
{
	if (Global_8C41 == 15)
	{
		return 0;
	}
	if (func_76(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_79(int iParam0, bool bParam1, int iParam2)//Position - 0x3D0F
{
	iParam2 = iParam2;
	return func_80(iParam0, bParam1, 145);
}

int func_80(int iParam0, bool bParam1, int iParam2)//Position - 0x3D25
{
	int iVar0;
	
	iVar0 = func_81(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x2DA8CA50A72528FB(iVar0)) && unk_0x0F6F4C227FB5DD52(&(Global_19B04.f_6D75[iParam2 /*29*/].f_3)))
	{
		unk_0x436D0272182E484D(iVar0, &(Global_19B04.f_6D75[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_81(int iParam0, bool bParam1, bool bParam2)//Position - 0x3D77
{
	int iVar0;
	
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x511FE22BCF5353CD(iParam0);
	if (unk_0xD27AC0E9B78CFDD7(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(iVar0, func_82(unk_0x7AF0088ABFA713B6(), 1f, 1f));
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
		unk_0x3F5F1772D71D5EC4(iVar0, func_82(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
		unk_0xF9C2945DB5BAB4BF(iVar0, bParam1);
	}
	else if (unk_0xB12D030810E8447D(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(iVar0, func_82(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_82(bool bParam0, float fParam1, float fParam2)//Position - 0x3E1B
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_83()//Position - 0x3E32
{
	if (!func_76(5))
	{
		return 1;
	}
	if (func_91())
	{
		return 1;
	}
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (SYSTEM::VMAG2(unk_0xB5D9AE572C19509E(unk_0xBC25C936A095B5BA())) > 1369f && !func_90())
		{
			return 0;
		}
	}
	if (func_84(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_84(float fParam0, bool bParam1)//Position - 0x3E94
{
	struct<27> Var0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	
	iVar2 = -1;
	fVar3 = fParam0;
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (func_14(func_12()))
		{
			iVar5 = func_40();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (unk_0xFA30DFD0084E92FE(Global_19B04.f_4871[iVar1 /*6*/], 2) && !unk_0xFA30DFD0084E92FE(Global_19B04.f_4871[iVar1 /*6*/], 3))
				{
					func_85(iVar1, &Var0);
					fVar4 = unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false), Var0.f_6, true);
					if (fVar4 < fVar3)
					{
						bVar7 = true;
						if (bParam1)
						{
							if (iVar5 != Var0.f_1A)
							{
								bVar7 = false;
							}
						}
						if (bVar7)
						{
							iVar2 = iVar1;
							fVar3 = fVar4;
						}
					}
				}
				iVar6++;
			}
		}
	}
	return iVar2;
}

void func_85(int iParam0, var uParam1)//Position - 0x3F4B
{
	switch (iParam0)
	{
		case 0:
			func_86(uParam1, "Abigail1", func_88(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_87(iParam0), 1, 0);
			break;
		
		case 1:
			func_86(uParam1, "Abigail2", func_88(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_87(iParam0), 1, 0);
			break;
		
		case 2:
			func_86(uParam1, "Barry1", func_88(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_87(iParam0), 1, 0);
			break;
		
		case 3:
			func_86(uParam1, "Barry2", func_88(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_87(iParam0), 1, 1);
			break;
		
		case 4:
			func_86(uParam1, "Barry3", func_88(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_87(iParam0), 0, 0);
			break;
		
		case 5:
			func_86(uParam1, "Barry3A", func_88(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 6:
			func_86(uParam1, "Barry3C", func_88(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 7:
			func_86(uParam1, "Barry4", func_88(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_87(iParam0), 0, 0);
			break;
		
		case 8:
			func_86(uParam1, "Dreyfuss1", func_88(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_87(iParam0), 0, 0);
			break;
		
		case 9:
			func_86(uParam1, "Epsilon1", func_88(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_87(iParam0), 0, 0);
			break;
		
		case 10:
			func_86(uParam1, "Epsilon2", func_88(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_87(iParam0), 1, 0);
			break;
		
		case 11:
			func_86(uParam1, "Epsilon3", func_88(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_87(iParam0), 0, 0);
			break;
		
		case 12:
			func_86(uParam1, "Epsilon4", func_88(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_87(iParam0), 0, 0);
			break;
		
		case 13:
			func_86(uParam1, "Epsilon5", func_88(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_87(iParam0), 1, 0);
			break;
		
		case 14:
			func_86(uParam1, "Epsilon6", func_88(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 15:
			func_86(uParam1, "Epsilon7", func_88(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_87(iParam0), 0, 0);
			break;
		
		case 16:
			func_86(uParam1, "Epsilon8", func_88(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_87(iParam0), 1, 0);
			break;
		
		case 17:
			func_86(uParam1, "Extreme1", func_88(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 18:
			func_86(uParam1, "Extreme2", func_88(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 19:
			func_86(uParam1, "Extreme3", func_88(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 20:
			func_86(uParam1, "Extreme4", func_88(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_87(iParam0), 0, 0);
			break;
		
		case 21:
			func_86(uParam1, "Fanatic1", func_88(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_87(iParam0), 1, 0);
			break;
		
		case 22:
			func_86(uParam1, "Fanatic2", func_88(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_87(iParam0), 1, 0);
			break;
		
		case 23:
			func_86(uParam1, "Fanatic3", func_88(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_87(iParam0), 0, 1);
			break;
		
		case 24:
			func_86(uParam1, "Hao1", func_88(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_87(iParam0), 0, 1);
			break;
		
		case 25:
			func_86(uParam1, "Hunting1", func_88(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 26:
			func_86(uParam1, "Hunting2", func_88(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 27:
			func_86(uParam1, "Josh1", func_88(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_87(iParam0), 1, 0);
			break;
		
		case 28:
			func_86(uParam1, "Josh2", func_88(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_87(iParam0), 1, 1);
			break;
		
		case 29:
			func_86(uParam1, "Josh3", func_88(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_87(iParam0), 1, 1);
			break;
		
		case 30:
			func_86(uParam1, "Josh4", func_88(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_87(iParam0), 1, 0);
			break;
		
		case 31:
			func_86(uParam1, "Maude1", func_88(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 32:
			func_86(uParam1, "Minute1", func_88(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 33:
			func_86(uParam1, "Minute2", func_88(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 34:
			func_86(uParam1, "Minute3", func_88(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 35:
			func_86(uParam1, "MrsPhilips1", func_88(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_87(iParam0), 0, 0);
			break;
		
		case 36:
			func_86(uParam1, "MrsPhilips2", func_88(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_87(iParam0), 0, 0);
			break;
		
		case 37:
			func_86(uParam1, "Nigel1", func_88(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_87(iParam0), 1, 0);
			break;
		
		case 38:
			func_86(uParam1, "Nigel1A", func_88(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_87(iParam0), 1, 1);
			break;
		
		case 39:
			func_86(uParam1, "Nigel1B", func_88(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_87(iParam0), 1, 1);
			break;
		
		case 40:
			func_86(uParam1, "Nigel1C", func_88(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_87(iParam0), 1, 1);
			break;
		
		case 41:
			func_86(uParam1, "Nigel1D", func_88(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_87(iParam0), 1, 1);
			break;
		
		case 42:
			func_86(uParam1, "Nigel2", func_88(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_87(iParam0), 1, 1);
			break;
		
		case 43:
			func_86(uParam1, "Nigel3", func_88(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_87(iParam0), 1, 1);
			break;
		
		case 44:
			func_86(uParam1, "Omega1", func_88(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_87(iParam0), 0, 0);
			break;
		
		case 45:
			func_86(uParam1, "Omega2", func_88(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_87(iParam0), 0, 0);
			break;
		
		case 46:
			func_86(uParam1, "Paparazzo1", func_88(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 47:
			func_86(uParam1, "Paparazzo2", func_88(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 48:
			func_86(uParam1, "Paparazzo3", func_88(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_87(iParam0), 0, 0);
			break;
		
		case 49:
			func_86(uParam1, "Paparazzo3A", func_88(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 50:
			func_86(uParam1, "Paparazzo3B", func_88(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 51:
			func_86(uParam1, "Paparazzo4", func_88(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_87(iParam0), 0, 0);
			break;
		
		case 52:
			func_86(uParam1, "Rampage1", func_88(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_87(iParam0), 0, 0);
			break;
		
		case 54:
			func_86(uParam1, "Rampage3", func_88(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_87(iParam0), 1, 0);
			break;
		
		case 55:
			func_86(uParam1, "Rampage4", func_88(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_87(iParam0), 1, 0);
			break;
		
		case 56:
			func_86(uParam1, "Rampage5", func_88(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_87(iParam0), 0, 0);
			break;
		
		case 53:
			func_86(uParam1, "Rampage2", func_88(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_87(iParam0), 1, 0);
			break;
		
		case 57:
			func_86(uParam1, "TheLastOne", func_88(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 58:
			func_86(uParam1, "Tonya1", func_88(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 59:
			func_86(uParam1, "Tonya2", func_88(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 60:
			func_86(uParam1, "Tonya3", func_88(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 61:
			func_86(uParam1, "Tonya4", func_88(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 62:
			func_86(uParam1, "Tonya5", func_88(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_86(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0x5240
{
	uParam0->f_4 = iParam4;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam3;
	uParam0->f_5 = iParam5;
	uParam0->f_6 = { vParam6 };
	uParam0->f_9 = iParam7;
	StringCopy(&(uParam0->f_A), sParam8, 16);
	uParam0->f_E = iParam9;
	uParam0->f_F = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 24);
	uParam0->f_16 = iParam12;
	uParam0->f_17 = iParam13;
	uParam0->f_18 = iParam14;
	uParam0->f_19 = iParam15;
	uParam0->f_1A = iParam16;
	uParam0->f_1B = iParam17;
	uParam0->f_1C = iParam18;
	uParam0->f_1D = uParam19;
	uParam0->f_1E = iParam20;
	uParam0->f_1F = iParam21;
}

int func_87(int iParam0)//Position - 0x52D1
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_88(int iParam0)//Position - 0x5617
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_89(iParam0) };
	if (unk_0xF1734B55490E9045(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_89(int iParam0)//Position - 0x564F
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_90()//Position - 0x5A9C
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

int func_91()//Position - 0x5AB9
{
	if (func_94() && !func_90())
	{
		return 1;
	}
	if (func_93() && func_92())
	{
		return 1;
	}
	return 0;
}

bool func_92()//Position - 0x5AEB
{
	return Global_199EA > 0;
}

int func_93()//Position - 0x5AF9
{
	if (Global_15FA6 != -1)
	{
		return 1;
	}
	return 0;
}

int func_94()//Position - 0x5B0E
{
	if (Global_15FA6 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_147B0[Global_15FA6 /*34*/].f_F, 20);
	}
	return 0;
}

int func_95()//Position - 0x5B34
{
	if ((Global_19AF9 == func_44() && unk_0x8520DF5301DD9811()) && Global_19AFA)
	{
		return 1;
	}
	return 0;
}

void func_96()//Position - 0x5B5F
{
	if (unk_0x2DA8CA50A72528FB(iLocal_53))
	{
		unk_0x222805B89367761E(iLocal_53, true);
	}
	if (!unk_0x36CEFBE9B745A58D(iLocal_48))
	{
		unk_0x2E9860A2B72187F5(iLocal_48, 156, true);
		if (unk_0x77FC50899603581D(iLocal_63))
		{
			if (unk_0x8FD30584EB38411B(iLocal_63) > 0.1f)
			{
				if (!iLocal_74)
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_49))
					{
						unk_0x876593D39059C175(iLocal_48, unk_0x823166D9421223CA(iLocal_49, 31086, 0f, 0f, -0.1f), 0);
					}
					iLocal_74 = 1;
					iLocal_72 = 1;
					func_97();
				}
			}
		}
		else if (!unk_0x36CEFBE9B745A58D(iLocal_49))
		{
			unk_0xF1FC2182A76AD7FC(iLocal_49, 1);
			unk_0x65E471E4A2D56226(iLocal_49, 0, 0);
		}
		if (unk_0x77FC50899603581D(iLocal_63))
		{
			if (unk_0x8FD30584EB38411B(iLocal_63) > 0.6f)
			{
				func_97();
			}
		}
		else if (!unk_0x36CEFBE9B745A58D(iLocal_49))
		{
			unk_0xF1FC2182A76AD7FC(iLocal_49, 1);
			unk_0x65E471E4A2D56226(iLocal_49, 0, 0);
		}
		if (unk_0x77FC50899603581D(iLocal_63))
		{
			if (unk_0x8FD30584EB38411B(iLocal_63) == 1f)
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_49))
				{
					unk_0xF1FC2182A76AD7FC(iLocal_49, 1);
					unk_0x65E471E4A2D56226(iLocal_49, 0, 0);
				}
			}
		}
		else
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_49))
			{
				unk_0xF1FC2182A76AD7FC(iLocal_49, 1);
				unk_0x65E471E4A2D56226(iLocal_49, 0, 0);
			}
			func_97();
		}
	}
}

void func_97()//Position - 0x5C74
{
	if (!iLocal_75)
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_48))
		{
			unk_0xA4E856A8CD53B8DF(iLocal_48);
			unk_0xA902E18EDF6FA0C8(5, iLocal_56, iLocal_55);
			unk_0xA902E18EDF6FA0C8(5, iLocal_55, iLocal_56);
			unk_0xA902E18EDF6FA0C8(0, iLocal_57, iLocal_55);
			unk_0xA902E18EDF6FA0C8(2, iLocal_57, iLocal_56);
			unk_0xA902E18EDF6FA0C8(2, iLocal_56, iLocal_57);
			if (unk_0xE642C1AC73CE364E(iLocal_48, unk_0xBC25C936A095B5BA(), 50f, 50f, 50f, 0, 1, 0))
			{
				unk_0xB8CBD998685C0685(iLocal_48, unk_0xBC25C936A095B5BA(), 0, 16);
				unk_0xEB061E1EBFED4D59(iLocal_48, 1);
			}
			else
			{
				unk_0x5558ED6D4A2DEC93(iLocal_48, unk_0xBC25C936A095B5BA(), 200f, -1, 0, 0);
			}
			unk_0x22321800954A532E(iLocal_48, true);
			func_5(&Local_93, "RERHOAU", "RERHO_DIE", 4, 0, 0, 0);
			iLocal_75 = 1;
		}
	}
}

void func_98()//Position - 0x5D23
{
	if (bLocal_90)
	{
		unk_0x2E35C4FA5F0ED22F(iLocal_50, false);
		unk_0xAB43C54784946B9F(iLocal_50, vLocal_46, 50f, -1, 0, 0);
		unk_0x22321800954A532E(iLocal_50, true);
		unk_0x02537C8C1BEEB477(&iLocal_50);
		func_48();
	}
}

void func_99()//Position - 0x5D5A
{
	if (Local_93[2 /*10*/].f_7)
	{
		func_50(&Local_93, 2);
	}
	func_102();
	unk_0x88A0E19F56297020(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), &vLocal_46, 1, 1077936128, 0);
	unk_0x3D410827E8F2C7BF(1, 0.5f);
	unk_0xC9926634CA95A831(1, 1f);
	if (Local_93[1 /*10*/].f_7)
	{
		if (unk_0x2DA8CA50A72528FB(iLocal_53))
		{
			unk_0x07B8ECB35A4ED3AC(&iLocal_53);
		}
		func_50(&Local_93, 1);
	}
	if (iLocal_72)
	{
		if (!unk_0x3D3F3014B0F74446(iLocal_50, joaat("weapon_pistol"), 0) && unk_0x36CEFBE9B745A58D(iLocal_48))
		{
			if (!bLocal_92)
			{
				iLocal_45 = 2;
			}
			else if (func_101(&Local_93, "RERHOAU", "RERHO_BLAME", "RERHO_BLAME_3", 4, iLocal_98, 0))
			{
				iLocal_45 = 2;
			}
		}
		else
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_50))
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_48))
				{
					unk_0x5558ED6D4A2DEC93(iLocal_50, iLocal_48, 100f, -1, 0, 0);
				}
				else
				{
					unk_0x5558ED6D4A2DEC93(iLocal_50, unk_0xBC25C936A095B5BA(), 100f, -1, 0, 0);
				}
				unk_0x22321800954A532E(iLocal_50, true);
				if (!bLocal_92)
				{
					if (func_101(&Local_93, "RERHOAU", "RERHO_BLAME", "RERHO_BLAME_3", 4, iLocal_98, 0))
					{
					}
					else
					{
						func_100(iLocal_50, "GENERIC_SHOCKED_HIGH", 24);
					}
				}
				else
				{
					func_100(iLocal_50, "GENERIC_SHOCKED_HIGH", 24);
				}
				SYSTEM::WAIT(0);
			}
			unk_0xDF53A66AEE1401AA(1f);
			unk_0x6E52C7765A0F4382(1);
			iLocal_45 = 2;
		}
	}
	else
	{
		func_157();
	}
}

void func_100(int iParam0, char* sParam1, int iParam2)//Position - 0x5E9F
{
	unk_0x53D8178763EDCE60(iParam0, sParam1, func_2(iParam2), 1);
}

bool func_101(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x5EB6
{
	func_21(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_3DBF = 0;
	Global_3DC6 = 0;
	Global_3DC1 = 0;
	Global_4197 = 0;
	Global_4199 = 0;
	Global_419D = 1;
	StringCopy(&Global_41A4, sParam3, 24);
	Global_280001 = 0;
	return func_6(sParam2, iParam4, 0);
}

void func_102()//Position - 0x5F0A
{
	if (func_4())
	{
		bLocal_90 = true;
	}
	if (bLocal_90 == 0)
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_50) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			if (iLocal_72)
			{
				unk_0xC5A6DFE2B8987B17(&iLocal_71);
				unk_0x9565F9267674873A(0, unk_0xBC25C936A095B5BA(), 20000, 5f, 2f, 1073741824, 0);
				unk_0x56F2E1B5599188FA(0, unk_0xBC25C936A095B5BA(), -1, 2048, 2);
				unk_0xE896C0AD02364F2A(0, sLocal_99, "bystander_bystander_angry", 8f, -8f, 1500, 0, 0, 0, 0, 0);
				unk_0x5558ED6D4A2DEC93(0, unk_0xBC25C936A095B5BA(), 150f, -1, 0, 0);
				unk_0x535008C596714F9E(iLocal_71);
				unk_0xA8E6405305C0D7DF(iLocal_50, iLocal_71);
				unk_0x02DAF06EA4F08219(&iLocal_71);
				unk_0x22321800954A532E(iLocal_50, true);
			}
			else
			{
				unk_0xC5A6DFE2B8987B17(&iLocal_71);
				unk_0xDF14F570C0180463(0, vLocal_46, 1f, 20000, 1193033728, 0.5f);
				unk_0x4BED3C9D6EF14C38(0, vLocal_46, -1, 2048, 2);
				unk_0xE896C0AD02364F2A(0, sLocal_99, "bystander_bystander_angry", 8f, -8f, 1500, 0, 0, 0, 0, 0);
				unk_0x535008C596714F9E(iLocal_71);
				unk_0xA8E6405305C0D7DF(iLocal_50, iLocal_71);
				unk_0x02DAF06EA4F08219(&iLocal_71);
				unk_0x22321800954A532E(iLocal_50, true);
			}
		}
	}
}

void func_103()//Position - 0x601C
{
	if (unk_0xD9C1758D86688CEA(iLocal_49, unk_0xBC25C936A095B5BA(), 1))
	{
		if (!unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 2))
		{
			unk_0xED946BB96C5E9C4A(unk_0xB5CEFD608600A09F(), 2, 0);
			unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
		}
		unk_0xF1FC2182A76AD7FC(iLocal_49, 1);
		unk_0x65E471E4A2D56226(iLocal_49, 0, 0);
		bLocal_68 = true;
		iLocal_72 = 1;
		func_97();
	}
	else if (!unk_0x9986AD62CA3DE747(iLocal_49))
	{
		unk_0xAB1A796DCD561BF8(iLocal_49, 4, 0f, 0);
	}
}

void func_104()//Position - 0x6081
{
	if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vLocal_46, 50f, 50f, 25f, false, true, 0))
	{
		iLocal_98 = 0;
	}
	else
	{
		iLocal_98 = 1;
	}
}

int func_105()//Position - 0x60B5
{
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), vLocal_44) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(unk_0xB5D9AE572C19509E(unk_0xBC25C936A095B5BA())) > 1369f && !func_90())
		{
			return 0;
		}
	}
	if (func_91())
	{
		return 1;
	}
	if (func_84(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_106()//Position - 0x613B
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	
	vLocal_46 = { -96.4f, 6398.201f, 30.4542f };
	fLocal_47 = 0f;
	iVar0 = joaat("a_m_m_hillbilly_02");
	iVar1 = joaat("a_m_m_business_01");
	iVar2 = joaat("a_f_m_tourist_01");
	sVar3 = "A_F_M_BEVHILLS_02_WHITE_FULL_02";
	unk_0xF243B7A14FCFD0F4(iVar0);
	unk_0xF243B7A14FCFD0F4(iVar2);
	unk_0xF243B7A14FCFD0F4(iVar1);
	unk_0x522053D86D6E1C7A(sLocal_99);
	if (((unk_0xD6513D668481290A(iVar0) && unk_0xD6513D668481290A(iVar2)) && unk_0xD6513D668481290A(iVar1)) && unk_0xF9E082857622D91E(sLocal_99))
	{
		unk_0x6C5F5B5F6894CCE3(vLocal_46, 5f, 1, 1, 0, false);
		iLocal_49 = unk_0x01B3635C3E8EDD81(5, iVar2, vLocal_46, fLocal_47, 1, true);
		unk_0x751846449040F7EC(iLocal_49, 1);
		unk_0x36C3B58DA78A2679(iLocal_49, sVar3);
		unk_0xC8FD3EBBB90E8D7F(iLocal_49, 20, true);
		iLocal_48 = unk_0x01B3635C3E8EDD81(22, iVar0, vLocal_46, fLocal_47, 1, true);
		unk_0x65E471E4A2D56226(iLocal_48, 125, 0);
		unk_0x9F55475569E78DF5(iLocal_48, 125);
		unk_0xABA7AE40608505F2(iLocal_48, 128, true);
		unk_0x751846449040F7EC(iLocal_48, 1);
		unk_0xC8FD3EBBB90E8D7F(iLocal_48, 42, true);
		unk_0x5AAB329BBC1053A1(iLocal_48, 1.5f);
		unk_0x0DEF5E53360637F2(iLocal_48, 1);
		unk_0x6CCBC1B22488DC0C(iLocal_48, 40f);
		unk_0xC8FD3EBBB90E8D7F(iLocal_48, 20, true);
		unk_0x1BAA0038DD57C475(iLocal_48, fLocal_85);
		unk_0x9C4E6006A4F26EB5(iLocal_48, fLocal_86);
		unk_0xAA40189C27870A99(iLocal_48, fLocal_87);
		unk_0x3BA6DE071C07D143(iLocal_48, fLocal_88);
		iLocal_50 = unk_0x01B3635C3E8EDD81(4, iVar1, -98.113f, 6405.354f, 30.6005f, fLocal_47, 1, true);
		unk_0x681514F2D10C60E7(Vector(31.64024f, 6405.058f, -98.41389f) - Vector(5f, 5f, 5f), Vector(31.64024f, 6405.058f, -98.41389f) + Vector(5f, 5f, 5f), 0, 0, 1, 0);
		iLocal_61 = unk_0x1DAA351326EA3537(Vector(31.64024f, 6405.058f, -98.41389f) - Vector(40f, 40f, 40f), Vector(31.64024f, 6405.058f, -98.41389f) + Vector(40f, 40f, 40f), 0, 1, 1, 1);
		unk_0xB105531EDD3DE51B(iLocal_50, false);
		unk_0x0DEF5E53360637F2(iLocal_50, 1);
		vLocal_46.z = (vLocal_46.z + 1f);
		vLocal_66 = { vLocal_46 };
		vLocal_67 = { 0f, 0f, fLocal_47 };
		iLocal_63 = unk_0xD0D858E538FD01C3(vLocal_66, vLocal_67, 2);
		unk_0xC2BF3DE5E47F801D(iLocal_63, true);
		unk_0xB62398E536F695FC(iLocal_48, iLocal_63, sLocal_99, "villian_struggle_loop", 1000f, -4f, 5, 0, 1148846080, 0);
		unk_0xB62398E536F695FC(iLocal_49, iLocal_63, sLocal_99, "girl_struggle_loop", 1000f, -4f, 5, 0, 1148846080, 0);
		iLocal_65 = unk_0xD0D858E538FD01C3(vLocal_66, vLocal_67, 2);
		unk_0xC2BF3DE5E47F801D(iLocal_65, true);
		unk_0xB62398E536F695FC(iLocal_50, iLocal_65, sLocal_99, "bystander_taking_cover", 1000f, -1.5f, 5, 0, 1148846080, 0);
		unk_0xC8FD3EBBB90E8D7F(iLocal_50, 185, true);
		unk_0x7A535CE1F001F3FE(iLocal_48, joaat("weapon_pistol"), -1, true, true);
		unk_0xF7CDBCD11F31B71A(iLocal_48, 1);
		unk_0xB2CB6EAA6B280A84("re_rescuehostage relManager", &iLocal_57);
		unk_0xB2CB6EAA6B280A84("re_rescuehostage relBadGuy", &iLocal_56);
		iLocal_55 = unk_0x84788C4CA5E15BDC(unk_0xBC25C936A095B5BA());
		unk_0xA902E18EDF6FA0C8(5, iLocal_56, iLocal_55);
		unk_0xA902E18EDF6FA0C8(5, iLocal_55, iLocal_56);
		unk_0x4106FAF8AA1D69D5(iLocal_50, iLocal_57);
		unk_0x4106FAF8AA1D69D5(iLocal_48, iLocal_56);
		unk_0x2E35C4FA5F0ED22F(iLocal_49, true);
		unk_0x2E35C4FA5F0ED22F(iLocal_50, true);
		unk_0x2E35C4FA5F0ED22F(iLocal_48, true);
		unk_0x91629AC1E1F78419(iLocal_50, 11, true);
		unk_0x91629AC1E1F78419(iLocal_50, 17, true);
		unk_0x91629AC1E1F78419(iLocal_50, 13, false);
		unk_0x91629AC1E1F78419(iLocal_50, 5, false);
		unk_0x95F58F57ACD332BA(iLocal_50, 0);
		unk_0x91629AC1E1F78419(iLocal_49, 11, true);
		unk_0x95F58F57ACD332BA(iLocal_49, 0);
		unk_0x91629AC1E1F78419(iLocal_49, 13, false);
		unk_0x91629AC1E1F78419(iLocal_49, 5, false);
		func_108(&Local_93, 0, unk_0xBC25C936A095B5BA(), sLocal_82, 0, 1);
		func_108(&Local_93, 1, iLocal_48, "RHCriminal", 0, 1);
		func_108(&Local_93, 2, iLocal_49, "RHHostage", 0, 1);
		func_108(&Local_93, 3, iLocal_50, "RHBystander", 0, 1);
		unk_0x6E52C7765A0F4382(0);
		unk_0xDF53A66AEE1401AA(0f);
		func_107(1);
		unk_0x4516EDD0A096FB5B(-89f, 6392f, 32f, 3f, 2);
		SYSTEM::SETTIMERA(8000);
		return 1;
	}
	return 0;
}

void func_107(bool bParam0)//Position - 0x64E5
{
	if (bParam0)
	{
		Global_63A4 = 1;
	}
	else
	{
		Global_63A4 = 0;
	}
}

void func_108(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x64FD
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

void func_109()//Position - 0x6598
{
}

void func_110()//Position - 0x65A0
{
}

void func_111()//Position - 0x65A8
{
	switch (func_12())
	{
		case 0:
			sLocal_82 = "MICHAEL";
			sLocal_83 = "RERHO_MDOWN";
			break;
		
		case 1:
			sLocal_82 = "FRANKLIN";
			sLocal_83 = "RERHO_FDOWN";
			break;
		
		case 2:
			sLocal_82 = "TREVOR";
			sLocal_83 = "RERHO_TDOWN";
			break;
	}
}

void func_112(int iParam0)//Position - 0x65F8
{
	if (iParam0 == -1)
	{
		iParam0 = func_44();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_114(iParam0);
	unk_0x8A623F2A0D19557F(0);
	unk_0xCB0D7BF24DBB59C6(1);
	Global_19AF6 = 0;
	func_113();
}

void func_113()//Position - 0x662E
{
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			unk_0x8510BC031C24B862(unk_0x6F79ECA8C83E4357(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)), true);
		}
		unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 32, false);
	}
}

void func_114(int iParam0)//Position - 0x666B
{
	Global_19AF9 = iParam0;
}

int func_115(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x6679
{
	bool bVar0;
	vector3 vVar1;
	int iVar2;
	vector3 vVar3;
	int iVar4;
	
	if (!Global_230F1)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = func_44();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_156())
		{
			return 0;
		}
	}
	vLocal_44 = { vParam0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			vVar1 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
			if (SYSTEM::VMAG2(unk_0xB5D9AE572C19509E(unk_0xBC25C936A095B5BA())) > 1369f && !func_90())
			{
				return 0;
			}
		}
		if (!Global_19B04.f_2360)
		{
			return 0;
		}
		if (func_25(0))
		{
			return 0;
		}
		if (func_91())
		{
			return 0;
		}
		if (func_155())
		{
			return 0;
		}
		if (Global_19AF9 != -1)
		{
			return 0;
		}
		if (func_14(func_12()))
		{
			if (func_84(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()) && !bParam4)
		{
			if ((vVar1.z - vLocal_44.z) > 50f)
			{
				return 0;
			}
		}
		if (!func_154(iParam1))
		{
			return 0;
		}
		if (func_14(func_12()))
		{
			if (func_153(func_12()) == 4 || func_153(func_12()) == 5)
			{
				return 0;
			}
		}
		if (func_14(func_12()))
		{
			if (!func_152(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_151(Global_19B04.f_6186.f_2B[iParam1]))
		{
			return 0;
		}
		if ((unk_0x105601648511CC64() - Global_19AFB) < 150000)
		{
			if (iParam1 != 30)
			{
				return 0;
			}
		}
		if (func_150())
		{
			return 0;
		}
		if (unk_0x04604C9E42BD0E47())
		{
			return 0;
		}
		if (unk_0x8520DF5301DD9811())
		{
			return 0;
		}
		if (!func_141(4))
		{
			return 0;
		}
		if (!func_76(5))
		{
			return 0;
		}
		if (func_140(iParam1, iParam2) && !bParam3)
		{
			return 0;
		}
		if (Global_3 && iParam1 != 10)
		{
			return 0;
		}
		if (unk_0xBF697FA7422C0621(unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA())))
		{
			if ((unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA()) == unk_0x9911032C958CE1B0(377.153f, -717.567f, 10.0536f) || unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA()) == unk_0x9911032C958CE1B0(320.9934f, 265.2515f, 82.1221f)) || unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA()) == unk_0x9911032C958CE1B0(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_140(0, 0))
		{
			return 0;
		}
		if (Global_634F)
		{
			return 0;
		}
		if (func_154(30) && !func_140(30, 0))
		{
			if (iParam1 != 30)
			{
				if (SYSTEM::VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_14(func_12()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				vVar3 = { Global_19B04.f_932.f_21B.f_8E8[iVar2 /*3*/] };
				iVar4 = Global_19B04.f_932.f_21B.f_8E4[iVar2];
				if (func_139(iVar4))
				{
					if (func_117(iVar2))
					{
						if (!func_116(vVar3, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false), vVar3) < (210f * 210f))
							{
								if (func_12() != iVar2)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return 1;
}

bool func_116(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x6A13
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_117(int iParam0)//Position - 0x6A5A
{
	int iVar0;
	
	iVar0 = Global_19B04.f_932.f_21B.f_8E4[iParam0];
	return func_118(iVar0);
}

int func_118(int iParam0)//Position - 0x6A7B
{
	return func_119(iParam0, 1);
}

int func_119(int iParam0, int iParam1)//Position - 0x6A8A
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_139(iParam0))
	{
		return 0;
	}
	func_120(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_120(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x6ADD
{
	func_121(func_132(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_121(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x6AFB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_131(iParam0, iParam1))
	{
		iVar0 = func_130(iParam1);
		iVar1 = func_128(iParam0);
		iVar2 = (func_128(iParam0) - func_128(iParam1));
		iVar3 = (func_130(iParam0) - func_130(iParam1));
		iVar4 = (func_127(iParam0) - func_127(iParam1));
		iVar5 = (func_126(iParam0) - func_126(iParam1));
		iVar6 = (func_125(iParam0) - func_125(iParam1));
		iVar7 = (func_124(iParam0) - func_124(iParam1));
	}
	else
	{
		iVar0 = func_130(iParam0);
		iVar1 = func_128(iParam1);
		iVar2 = (func_128(iParam1) - func_128(iParam0));
		iVar3 = (func_130(iParam1) - func_130(iParam0));
		iVar4 = (func_127(iParam1) - func_127(iParam0));
		iVar5 = (func_126(iParam1) - func_126(iParam0));
		iVar6 = (func_125(iParam1) - func_125(iParam0));
		iVar7 = (func_124(iParam1) - func_124(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_123(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_122(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_122(float fParam0, float fParam1, float fParam2)//Position - 0x6CFC
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(SYSTEM::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_123(int iParam0, int iParam1)//Position - 0x6D3E
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_124(int iParam0)//Position - 0x6DE0
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_125(int iParam0)//Position - 0x6DF3
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_126(int iParam0)//Position - 0x6E06
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_127(int iParam0)//Position - 0x6E19
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_128(int iParam0)//Position - 0x6E2B
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_129(unk_0xFA30DFD0084E92FE(iParam0, 31), -1, 1)) + 2011;
}

int func_129(bool bParam0, int iParam1, int iParam2)//Position - 0x6E50
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_130(int iParam0)//Position - 0x6E67
{
	return iParam0 & 15;
}

int func_131(int iParam0, int iParam1)//Position - 0x6E74
{
	int iVar0;
	int iVar1;
	
	if (!func_139(iParam1) || !func_139(iParam0))
	{
		return 1;
	}
	iVar0 = func_128(iParam0);
	iVar1 = func_128(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_130(iParam0);
	iVar1 = func_130(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_127(iParam0);
	iVar1 = func_127(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_126(iParam0);
	iVar1 = func_126(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_125(iParam0);
	iVar1 = func_125(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_124(iParam0);
	iVar1 = func_124(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_132()//Position - 0x6F80
{
	var uVar0;
	
	func_138(&uVar0, unk_0xF40D00CD7B81C0A8());
	func_137(&uVar0, unk_0x7E09057438B9D216());
	func_136(&uVar0, unk_0x6E06C0DB9B43570D());
	func_135(&uVar0, unk_0xBE14F159908E4EE5());
	func_134(&uVar0, unk_0xDD6A91E47ED4D0CF());
	func_133(&uVar0, unk_0x4EEB3860BFC44B78());
	return uVar0;
}

void func_133(var uParam0, int iParam1)//Position - 0x6FC6
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_134(var uParam0, int iParam1)//Position - 0x704C
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_135(var uParam0, int iParam1)//Position - 0x707F
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_130(*uParam0);
	iVar1 = func_128(*uParam0);
	if (iParam1 < 1 || iParam1 > func_123(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_136(var uParam0, int iParam1)//Position - 0x70D0
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_137(var uParam0, int iParam1)//Position - 0x710A
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_138(var uParam0, int iParam1)//Position - 0x7145
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_139(int iParam0)//Position - 0x7181
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_124(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_125(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_126(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_128(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_130(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_127(iParam0);
	if (iVar5 < 1 || iVar5 > func_123(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_140(int iParam0, int iParam1)//Position - 0x725D
{
	if (unk_0xFA30DFD0084E92FE(Global_19B04.f_6186.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_141(int iParam0)//Position - 0x7280
{
	int iVar0;
	
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				iVar0 = func_12();
				if (!func_14(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_149()) || Global_1974B) || Global_62BF) || func_148()) || func_19(8, -1)) || func_147()) || func_146()) || func_145()) || func_144()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1) || func_149()) || Global_62BF) || func_148()) || func_19(8, -1)) || func_145()) || func_147()) || func_146()) || func_144()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_149()) || Global_1974B) || Global_62BF) || func_148()) || func_19(8, -1)) || func_145()) || func_147()) || func_146()) || func_144()) || Global_19B04.f_1DEB.f_397[iVar0] == 5) || Global_8E64 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_149()) || Global_1974B) || Global_62BF) || func_148()) || func_19(8, -1)) || func_147()) || func_146()) || func_144()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_149() || unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0) || func_19(8, -1)) || func_144()) || func_143()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_19(8, -1) || func_147()) || func_146()) || func_143()) || func_142())
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
							if ((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || func_149()) || Global_62BF) || func_148()) || func_19(8, -1)) || func_146()) || func_145()) || func_144()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || !unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) || !unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F())) || !unk_0x726D9204B160D23E()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || func_149()) || func_146()) || Global_1974B) || Global_62BF) || func_148()) || Global_90C1) || func_19(8, -1)) || func_145()) || func_143()) || func_144()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || !unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) || !unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F())) || !unk_0x726D9204B160D23E()) || unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0)) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1)) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0x9273B3557334635D(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || func_149()) || Global_1974B) || Global_62BF) || func_148()) || func_19(8, -1)) || func_145()) || func_143()) || func_147()) || func_146()) || func_144())
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

var func_142()//Position - 0x799D
{
	return Global_16B42.f_1;
}

int func_143()//Position - 0x79AB
{
	if (Global_15FA6 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_147B0[Global_15FA6 /*34*/].f_F, 13);
	}
	return 0;
}

int func_144()//Position - 0x79D1
{
	if (unk_0xB731B8C5BCE89836(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_145()//Position - 0x79EB
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

bool func_146()//Position - 0x7A15
{
	return Global_16B4F.f_142 > 0;
}

bool func_147()//Position - 0x7A26
{
	return Global_16B4F.f_141 > 0;
}

var func_148()//Position - 0x7A37
{
	return Global_140856;
}

int func_149()//Position - 0x7A43
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		return Global_161D2.f_2C == 1;
	}
	return 0;
}

int func_150()//Position - 0x7A5F
{
	func_11();
	if (Global_C60[Global_389D /*2811*/][0 /*281*/].f_103 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_151(int iParam0)//Position - 0x7A87
{
	return func_131(func_132(), iParam0);
}

int func_152(int iParam0, int iParam1, int iParam2)//Position - 0x7A99
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_12();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_153(int iParam0)//Position - 0x7B7D
{
	if (!func_14(iParam0))
	{
		return 7;
	}
	return Global_19B04.f_1DEB.f_397[iParam0];
}

bool func_154(int iParam0)//Position - 0x7BA1
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_156())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0xFA30DFD0084E92FE(Global_19B04.f_6186, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0xFA30DFD0084E92FE(Global_19B04.f_6186.f_1, iVar0);
	}
	return bVar1;
}

int func_155()//Position - 0x7BFF
{
	int iVar0;
	
	if (Global_6353)
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			if (unk_0xE59B7F5A03335350(iVar0, 0))
			{
				if (!unk_0x36CEFBE9B745A58D(unk_0x3187EF5798B5D209(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_156()//Position - 0x7C43
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

void func_157()//Position - 0x7CFE
{
	if (func_95())
	{
		unk_0xDF53A66AEE1401AA(1f);
		unk_0x6E52C7765A0F4382(1);
	}
	if (iLocal_45 != 0)
	{
		unk_0x926FDA90094AA5FA(iLocal_56);
		unk_0x926FDA90094AA5FA(iLocal_57);
		unk_0x966D234EBE3F5299(20000);
		unk_0x483687B0FCA5415A(iLocal_61, 0);
		unk_0x9A172FCB057ABAEF(iLocal_60);
		func_107(0);
	}
	if (!unk_0x36CEFBE9B745A58D(iLocal_48) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		unk_0x5558ED6D4A2DEC93(iLocal_48, unk_0xBC25C936A095B5BA(), 100f, -1, 0, 0);
		unk_0x22321800954A532E(iLocal_48, true);
		SYSTEM::WAIT(0);
	}
	func_158(-1);
	unk_0x95E4B6F3ED223F5A();
}

void func_158(int iParam0)//Position - 0x7D82
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_44();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_95())
	{
		func_162(iParam0);
		unk_0x3FF92BBF0607A406(0, 0);
		Global_19AFB = unk_0x105601648511CC64();
		func_161(30000);
		StringCopy(&cVar0, func_160(Global_19AF9, 1), 64);
		if (func_43(Global_19AF9) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_19AF8, 64);
		}
		unk_0x3D65262152B53A67(&cVar0, Global_19AF6, (unk_0x105601648511CC64() - Global_19AF7), 0);
	}
	else if (unk_0xFA30DFD0084E92FE(Global_19B00, 0) && Global_19B04.f_6186.f_2 < 3)
	{
		unk_0x7CB6FD92BE491AD9(&Global_19B00, 0);
	}
	func_159(&Global_62F8);
	Global_19AFA = 0;
	func_114(-1);
}

void func_159(var uParam0)//Position - 0x7E37
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_8C1B)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_8C1A = 0;
	Global_8C1C = 0;
	Global_8C41 = 15;
	Global_DA9C = 0;
	Global_DA9D = 0;
}

char* func_160(int iParam0, bool bParam1)//Position - 0x7E74
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_161(int iParam0)//Position - 0x80BE
{
	Global_8E68 = (unk_0x105601648511CC64() + iParam0);
}

void func_162(int iParam0)//Position - 0x80D0
{
	func_163(iParam0, 0, func_168(iParam0));
}

void func_163(int iParam0, int iParam1, int iParam2)//Position - 0x80E5
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_132();
	func_166(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_165(iParam0, &uVar0);
	Var1 = { func_164(&uVar0) };
}

struct<16> func_164(var uParam0)//Position - 0x8114
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_126(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_125(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_124(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_127(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_130(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_128(*uParam0), 64);
	return Var0;
}

void func_165(int iParam0, var uParam1)//Position - 0x81E5
{
	Global_19B04.f_6186.f_2B[iParam0] = *uParam1;
}

void func_166(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x81FD
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_128(*uParam0);
	iVar1 = func_130(*uParam0);
	iVar2 = func_127(*uParam0);
	iVar3 = func_126(*uParam0);
	iVar4 = func_125(*uParam0);
	iVar5 = func_124(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_123(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_123(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_167(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_167(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x837F
{
	func_138(uParam0, iParam1);
	func_137(uParam0, iParam2);
	func_136(uParam0, iParam3);
	func_134(uParam0, iParam5);
	func_135(uParam0, iParam4);
	func_133(uParam0, iParam6);
}

int func_168(int iParam0)//Position - 0x83B7
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

