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
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	struct<4> Local_37[10];
	bool bLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	vector3 vVar0;
	vector3 vVar1;
	
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_45 = -1;
	iLocal_46 = -1;
	if (unk_0xE8A79675302ED812(19))
	{
		func_55();
	}
	if (!func_52())
	{
		func_55();
	}
	if (!func_51(iLocal_42))
	{
		func_55();
	}
	else
	{
		func_50();
		iLocal_43 = unk_0x105601648511CC64();
		iLocal_45 = func_49();
		iLocal_44 = 0;
		func_48(1, &uLocal_48);
	}
	while (true)
	{
		if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			if (!func_51(iLocal_42))
			{
				func_55();
			}
			vVar0 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
			vVar1 = { unk_0x541C2AEF053615BC(iLocal_42, true) };
			if (SYSTEM::VDIST2(vVar0, vVar1) >= (100f * 100f))
			{
				func_55();
			}
			switch (iLocal_47)
			{
				case 0:
					func_43(vVar1, vVar0, 18000, 1101004800);
					if (func_25(&iLocal_42, 0))
					{
						func_24();
						func_16(0);
						func_12(vVar1, vVar0);
						unk_0x522053D86D6E1C7A(func_11());
						iLocal_47 = 1;
					}
					break;
				
				case 1:
					if (func_5(&iLocal_42, &iLocal_39, &iLocal_46))
					{
						iLocal_47 = 2;
					}
					break;
				
				case 2:
					if (!func_4(iLocal_42, 1805844857) && !unk_0x889DA6CE8E4DB344(iLocal_42))
					{
						if (!unk_0x96044E39418AAF17(iLocal_42, func_11(), func_3(), 3))
						{
							func_1();
						}
					}
					else
					{
						func_55();
					}
					break;
				}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x1B3
{
	if (func_51(iLocal_42))
	{
		func_2(&iLocal_42);
		unk_0x5558ED6D4A2DEC93(iLocal_42, unk_0xBC25C936A095B5BA(), 10000f, -1, 0, 0);
		unk_0x22321800954A532E(iLocal_42, true);
	}
}

void func_2(int iParam0)//Position - 0x1E3
{
	if (func_51(*iParam0))
	{
		unk_0xABA7AE40608505F2(*iParam0, 2, false);
		unk_0xABA7AE40608505F2(*iParam0, 64, false);
		unk_0xABA7AE40608505F2(*iParam0, 128, false);
		unk_0xABA7AE40608505F2(*iParam0, 8, false);
		unk_0xABA7AE40608505F2(*iParam0, 1, false);
		unk_0xABA7AE40608505F2(*iParam0, 32, false);
		unk_0x91629AC1E1F78419(*iParam0, 5, false);
		unk_0x91629AC1E1F78419(*iParam0, 17, true);
		unk_0xC8FD3EBBB90E8D7F(*iParam0, 118, true);
	}
}

char* func_3()//Position - 0x24C
{
	return "female_Flee_Table_Left_Maude";
}

int func_4(int iParam0, int iParam1)//Position - 0x256
{
	if (func_51(iParam0))
	{
		if (unk_0xF4FCC3C1048FF2AB(iParam0, iParam1) == 1 || unk_0xF4FCC3C1048FF2AB(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_5(int iParam0, int iParam1, int iParam2)//Position - 0x289
{
	int iVar0;
	
	if (func_51(*iParam0))
	{
		if (unk_0x96044E39418AAF17(*iParam0, func_10(), func_9(), 3))
		{
			if (!unk_0x2CDE18D6C89522AD(*iParam0) || unk_0x69871CAEBDD20966(*iParam0))
			{
				unk_0x522053D86D6E1C7A(func_11());
				if (unk_0xF9E082857622D91E(func_11()))
				{
					*iParam2 = unk_0xD0D858E538FD01C3(2727.4f, 4145.56f, 43.68f, 0f, 0f, -92.17f, 2);
					unk_0xC2BF3DE5E47F801D(*iParam2, false);
					unk_0x69D4A898629B0BDA(*iParam2, false);
					if (func_4(*iParam0, 1785177548))
					{
						unk_0x6C3BE67B02D72CDC(*iParam0, -1000f, 1);
					}
					unk_0xB62398E536F695FC(*iParam0, *iParam2, func_11(), func_3(), 1000f, -4f, 4626, 0, 1148846080, 0);
					unk_0x2EB4D46478766D87(*iParam0, 0, 0);
					if (func_8(*iParam1))
					{
						if (unk_0x96044E39418AAF17(*iParam1, func_10(), func_7(), 3))
						{
							unk_0x6C3BE67B02D72CDC(*iParam1, -16f, 0);
						}
						iVar0 = 0;
						iVar0 += 16;
						iVar0 += 64;
						iVar0 += 512;
						iVar0 += 4096;
						unk_0xBEBE356CCD6268A1(*iParam1, *iParam2, func_6(), func_11(), 16f, -4f, iVar0, 1148846080);
					}
					return 1;
				}
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
	}
	return 0;
}

char* func_6()//Position - 0x3D5
{
	return "Female_Flee_Table_Left_Maude_Chair";
}

char* func_7()//Position - 0x3E0
{
	return "base_chair";
}

int func_8(int iParam0)//Position - 0x3EB
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

char* func_9()//Position - 0x40C
{
	return "base";
}

char* func_10()//Position - 0x417
{
	return "special_ped@maude@base";
}

char* func_11()//Position - 0x422
{
	return "special_ped@maude@exit_flee";
}

void func_12(vector3 vParam0, vector3 vParam1)//Position - 0x42D
{
	if (func_51(iLocal_42))
	{
		if (!unk_0x9986AD62CA3DE747(iLocal_42))
		{
			if (SYSTEM::VDIST2(vParam1, vParam0) < (35f * 35f))
			{
				func_13(&iLocal_42, "GENERIC_FRIGHTENED_HIGH", "MAUDE", 3);
			}
		}
	}
}

void func_13(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x473
{
	bool bVar0;
	
	if (func_51(*iParam0))
	{
		bVar0 = unk_0x3F6DD623586D3140(*iParam0);
		if (bVar0)
		{
			unk_0x0DEF5E53360637F2(*iParam0, 0);
		}
		func_14(*iParam0, sParam1, sParam2, iParam3);
		if (bVar0)
		{
			unk_0x0DEF5E53360637F2(*iParam0, 1);
		}
	}
}

void func_14(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x4B5
{
	unk_0x7E80A36CD8BDF4D1(iParam0, sParam1, sParam2, func_15(iParam3), 0);
}

int func_15(int iParam0)//Position - 0x4CE
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

void func_16(bool bParam0)//Position - 0x6BE
{
	struct<6> Var0;
	char* sVar1;
	
	if (func_23())
	{
		Var0 = { func_22() };
		sVar1 = func_21();
		if (unk_0x3362CDE8460ED38B(&Var0, sVar1))
		{
			if (bParam0)
			{
				func_19();
			}
			else
			{
				func_17();
			}
		}
	}
}

void func_17()//Position - 0x6F6
{
	Global_394A = 0;
	func_18();
}

void func_18()//Position - 0x706
{
	unk_0x5C7DC611411E2CF9();
	Global_41AB = 0;
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x1E08809A5041F85B(false);
		Global_3DB8 = 6;
	}
}

void func_19()//Position - 0x727
{
	Global_394A = 0;
	func_20();
}

void func_20()//Position - 0x737
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

char* func_21()//Position - 0x75B
{
	if (unk_0xFA30DFD0084E92FE(Global_19B04.f_617D, 3))
	{
		return "BB4_loiter";
	}
	else if (unk_0xFA30DFD0084E92FE(Global_19B04.f_617D, 2))
	{
		return "BB3_loiter";
	}
	else if (unk_0xFA30DFD0084E92FE(Global_19B04.f_617D, 1))
	{
		return "BB2_loiter";
	}
	else if (unk_0xFA30DFD0084E92FE(Global_19B04.f_617D, 0))
	{
		return "BB1_loiter";
	}
	return "MAUDE_loiter";
}

struct<6> func_22()//Position - 0x7C8
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_3DB8 == 4)
	{
		return Global_3C3B;
	}
	return Var0;
}

int func_23()//Position - 0x7EC
{
	if (Global_3DB8 != 0 || unk_0xE6711F601F11B66B())
	{
		return 1;
	}
	return 0;
}

void func_24()//Position - 0x80E
{
	if (unk_0x724D816EA203A79E(iLocal_41))
	{
		unk_0x346478B12F69D4E3(iLocal_41, false);
	}
	if (unk_0x724D816EA203A79E(iLocal_40))
	{
		unk_0x346478B12F69D4E3(iLocal_40, false);
	}
}

int func_25(int iParam0, bool bParam1)//Position - 0x836
{
	if (func_51(*iParam0))
	{
		if ((unk_0x48EBE45A9A7EB10C(*iParam0) || unk_0x127812AA6652253F(*iParam0)) || unk_0xA0ABD1D1512F5AFC(*iParam0))
		{
			return 1;
		}
		if (unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()))
		{
			if (unk_0xE921F8171F0733B3(unk_0xBC25C936A095B5BA(), *iParam0))
			{
				return 1;
			}
			if (unk_0x724D816EA203A79E(iLocal_39))
			{
				if (unk_0xE921F8171F0733B3(unk_0xBC25C936A095B5BA(), iLocal_39))
				{
					return 1;
				}
			}
			if (unk_0x724D816EA203A79E(iLocal_40))
			{
				if (unk_0xE921F8171F0733B3(unk_0xBC25C936A095B5BA(), iLocal_40))
				{
					return 1;
				}
			}
			if (unk_0x724D816EA203A79E(iLocal_41))
			{
				if (unk_0xE921F8171F0733B3(unk_0xBC25C936A095B5BA(), iLocal_41))
				{
					return 1;
				}
			}
		}
		if (unk_0xBF94E62A1FA7B7F3(*iParam0, 60))
		{
			return 1;
		}
		if (unk_0x2CDE18D6C89522AD(*iParam0))
		{
			if (unk_0xE642C1AC73CE364E(*iParam0, unk_0xBC25C936A095B5BA(), 3f, 3f, 3f, 0, 1, 0))
			{
				return 1;
			}
		}
		if (unk_0xBF94E62A1FA7B7F3(*iParam0, 50))
		{
			return 1;
		}
		if (func_33(*iParam0, 1126825984))
		{
			return 1;
		}
		if (func_26(*iParam0, 1, 0, 0, 0))
		{
			return 1;
		}
		if (unk_0xC9FA5D38428AB6BE(-1, unk_0x541C2AEF053615BC(*iParam0, true), 15f))
		{
			return 1;
		}
		if (unk_0xBF94E62A1FA7B7F3(*iParam0, 72))
		{
			return 1;
		}
		if (bParam1)
		{
			if (unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
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

int func_26(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x988
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 8f;
	fVar1 = 15f;
	if (bParam1 == 0)
	{
		fVar0 = 1.86f;
		fVar1 = 1.86f;
	}
	if (bParam2)
	{
		fVar0 = 2f;
	}
	if (func_8(unk_0xBC25C936A095B5BA()) && func_8(iParam0))
	{
		unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_32(iParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_27(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (unk_0x75F706B6889D7D86(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x32E373675659FDB0(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x04880508C862E589(unk_0x541C2AEF053615BC(iParam0, true), fVar0, 1))
					{
						return 1;
					}
				}
			}
			else
			{
				if (bParam1)
				{
					fVar0 = 1.86f;
					fVar1 = 1.86f;
				}
				if (func_32(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_27(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_27(int iParam0, float fParam1, bool bParam2, bool bParam3)//Position - 0xA83
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { unk_0x541C2AEF053615BC(iParam0, true) };
	vVar1 = { vVar0 };
	vVar0.x = (vVar0.x - fParam1);
	vVar0.y = (vVar0.y - fParam1);
	vVar0.z = (vVar0.z - fParam1);
	vVar1.x = (vVar1.x + fParam1);
	vVar1.y = (vVar1.y + fParam1);
	vVar1.z = (vVar1.z + fParam1);
	if (bParam2)
	{
		if (((unk_0x882DD30F83E61E2F(unk_0x541C2AEF053615BC(iParam0, true), joaat("weapon_grenade"), fParam1, 1) || unk_0x882DD30F83E61E2F(unk_0x541C2AEF053615BC(iParam0, true), joaat("weapon_molotov"), fParam1, 1)) || unk_0x882DD30F83E61E2F(unk_0x541C2AEF053615BC(iParam0, true), joaat("weapon_smokegrenade"), fParam1, 1)) || unk_0x882DD30F83E61E2F(unk_0x541C2AEF053615BC(iParam0, true), joaat("weapon_stickybomb"), 5f, 1))
		{
			if (bParam3)
			{
				if (func_28(iParam0, fParam1))
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
	}
	else
	{
		if (bParam3)
		{
			if (func_28(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x876474582C5DECDE(vVar0, vVar1, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_28(int iParam0, float fParam1)//Position - 0xB8F
{
	var uVar0;
	vector3 vVar1;
	
	if ((((unk_0x532D2AB42B013CC0(iParam0, joaat("weapon_grenade"), fParam1, &vVar1, &uVar0, 0) || unk_0x532D2AB42B013CC0(iParam0, joaat("weapon_smokegrenade"), fParam1, &vVar1, &uVar0, 0)) || unk_0x532D2AB42B013CC0(iParam0, joaat("weapon_bzgas"), fParam1, &vVar1, &uVar0, 0)) || unk_0x532D2AB42B013CC0(iParam0, joaat("weapon_stickybomb"), fParam1, &vVar1, &uVar0, 0)) || unk_0x532D2AB42B013CC0(iParam0, joaat("weapon_molotov"), fParam1, &vVar1, &uVar0, 0))
	{
		if (func_29(iParam0, vVar1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_29(int iParam0, vector3 vParam1, float fParam2, int iParam3)//Position - 0xC24
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { func_31(vParam1 - unk_0x541C2AEF053615BC(iParam0, true)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		vVar1 = { unk_0xF90427F311003E57(iParam0) };
	}
	else
	{
		vVar1 = { func_31(unk_0x823166D9421223CA(iParam0, 31086, 0f, 5f, 0f) - unk_0x823166D9421223CA(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_30(vVar1, vVar0);
	if (fVar2 <= SYSTEM::COS((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_30(vector3 vParam0, vector3 vParam1)//Position - 0xCB2
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_31(vector3 vParam0)//Position - 0xCD3
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

int func_32(int iParam0, bool bParam1, float fParam2, float fParam3)//Position - 0xD12
{
	if (bParam1)
	{
		if (unk_0x32E373675659FDB0(unk_0xBC25C936A095B5BA()))
		{
			if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (unk_0x04880508C862E589(unk_0x541C2AEF053615BC(iParam0, true), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

int func_33(int iParam0, float fParam1)//Position - 0xD5A
{
	float fVar0;
	
	if (func_8(unk_0xBC25C936A095B5BA()) && func_8(iParam0))
	{
		if (func_42(iParam0) || unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), iParam0))
		{
			if (unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_34(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_34(int iParam0, float fParam1)//Position - 0xDD0
{
	return func_35(iParam0, unk_0xBC25C936A095B5BA(), fParam1, 1, 250, 7);
}

bool func_35(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0xDE8
{
	var uVar0;
	vector3 vVar1;
	int iVar2;
	
	iVar2 = func_41(iParam0, iParam1);
	if (!func_8(iParam0) || !func_8(iParam1))
	{
		if (iVar2 != -1)
		{
			func_40(&(Local_37[iVar2 /*4*/]));
		}
		return 0;
	}
	if (!func_39(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar2 == -1)
	{
		iVar2 = func_38();
		if (iVar2 == -1)
		{
			return 0;
		}
		Local_37[iVar2 /*4*/].f_1 = iParam0;
		Local_37[iVar2 /*4*/].f_2 = iParam1;
	}
	vVar1 = { unk_0x823166D9421223CA(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_36(&(Local_37[iVar2 /*4*/]), vVar1, iParam1, &(Local_37[iVar2 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0x105601648511CC64() - Local_37[iVar2 /*4*/].f_3) < iParam4);
}

int func_36(var uParam0, vector3 vParam1, int iParam2, var uParam3, int iParam4, int iParam5)//Position - 0xEA9
{
	var uVar0;
	vector3 vVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = 0;
	if (!func_8(iParam2))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		vVar1 = { func_37(iParam2, iParam5) };
		*uParam0 = unk_0xA20E4A82503CECB3(vParam1, vVar1 + vVar1 - vParam1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam4, 7);
		return 0;
	}
	iVar4 = unk_0xB0695CD48A28A3A9(*uParam0, &uVar0, &vVar1, &uVar2, &iVar3);
	if (iVar4 == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (iVar4 == 1)
	{
		return 0;
	}
	*uParam0 = 0;
	if (unk_0x386592AF38881675(iVar3))
	{
		func_8(iVar3);
		if (unk_0x399F7937FFE4DEBF(iVar3) == iParam2)
		{
			if (bLocal_38)
			{
				unk_0xD1FD19DF6D5B1300(vParam1, unk_0x541C2AEF053615BC(iParam2, true), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam3 = unk_0x105601648511CC64();
			return 1;
		}
		return 0;
	}
	if (unk_0xD27AC0E9B78CFDD7(iVar3))
	{
		func_8(iVar3);
		if (unk_0x5237AF95232D78C5(iParam2, 0))
		{
			if (unk_0x233ED4CD1F1A42C1(iVar3) == unk_0x9FE9D386222EEE47(iParam2, 0))
			{
				if (bLocal_38)
				{
					unk_0xD1FD19DF6D5B1300(vParam1, unk_0x541C2AEF053615BC(iParam2, true), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam3 = unk_0x105601648511CC64();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_37(int iParam0, int iParam1)//Position - 0xFD5
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = unk_0x491B2241281A03B7(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0x541C2AEF053615BC(iParam0, true);
	}
	else if (iParam1 == 1)
	{
		return unk_0x823166D9421223CA(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0x823166D9421223CA(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0x823166D9421223CA(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0x823166D9421223CA(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0x823166D9421223CA(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0x823166D9421223CA(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0x541C2AEF053615BC(iParam0, true);
}

int func_38()//Position - 0x109A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_37)
	{
		if ((Local_37[iVar0 /*4*/] == 0 && Local_37[iVar0 /*4*/].f_1 == 0) && Local_37[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_39(int iParam0, int iParam1, float fParam2, int iParam3)//Position - 0x10E4
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { func_31(unk_0x541C2AEF053615BC(iParam1, true) - unk_0x541C2AEF053615BC(iParam0, true)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		vVar1 = { unk_0xF90427F311003E57(iParam0) };
	}
	else
	{
		vVar1 = { func_31(unk_0x823166D9421223CA(iParam0, 31086, 0f, 5f, 0f) - unk_0x823166D9421223CA(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_30(vVar1, vVar0);
	if (fVar2 <= SYSTEM::COS((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

void func_40(var uParam0)//Position - 0x1175
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_41(int iParam0, int iParam1)//Position - 0x1190
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_37)
	{
		if (Local_37[iVar0 /*4*/].f_1 == iParam0 && Local_37[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_42(int iParam0)//Position - 0x11CF
{
	if (unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), iParam0) && unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 6))
	{
		return 1;
	}
	return 0;
}

int func_43(vector3 vParam0, vector3 vParam1, int iParam2, float fParam3)//Position - 0x11F7
{
	var uVar0;
	char[] cVar1[8];
	char* sVar2;
	
	if (iLocal_44 < iLocal_45)
	{
		if (!func_23())
		{
			if (SYSTEM::VDIST2(vParam1, vParam0) < (fParam3 * fParam3))
			{
				if (unk_0x105601648511CC64() - iLocal_43) > (iParam2 + unk_0x491B2241281A03B7(0, 2000))
				{
					uVar0 = 16;
					func_47(&uVar0, 3, iLocal_42, "MAUDE", 0, 1);
					cVar1 = func_46();
					sVar2 = func_21();
					func_44(&uVar0, cVar1, sVar2, 7, 0, 0);
					iLocal_43 = unk_0x105601648511CC64();
					iLocal_44++;
					return 1;
				}
			}
		}
		else
		{
			iLocal_43 = unk_0x105601648511CC64();
		}
	}
	return 0;
}

void func_44(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x1281
{
	func_45(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	unk_0xF0059F27F7BB6680(&Global_394A, 0);
	Global_3DBB = iParam3;
	StringCopy(&Global_3DAE, sParam2, 24);
}

void func_45(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x12BC
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

char* func_46()//Position - 0x1312
{
	if (unk_0xFA30DFD0084E92FE(Global_19B04.f_617D, 3))
	{
		return "BB4AUD";
	}
	else if (unk_0xFA30DFD0084E92FE(Global_19B04.f_617D, 2))
	{
		return "BB3AUD";
	}
	else if (unk_0xFA30DFD0084E92FE(Global_19B04.f_617D, 1))
	{
		return "BB2AUD";
	}
	else if (unk_0xFA30DFD0084E92FE(Global_19B04.f_617D, 0))
	{
		return "BB1AUD";
	}
	return "MAUDEAU";
}

void func_47(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x137F
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

void func_48(bool bParam0, var uParam1)//Position - 0x141A
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { 2711.198f, 4134.425f, 32.90168f };
	vVar1 = { 2739.981f, 4155.221f, 50.28859f };
	if (bParam0)
	{
		*uParam1 = unk_0x1DAA351326EA3537(vVar0, vVar1, 0, 1, 1, 1);
		unk_0xF16F7C45E0B1B52B(vVar0, vVar1);
		unk_0x379ACE23D404525C(vVar0, vVar1, false, 1);
		unk_0xDD56BACCCF835044(vVar0, vVar1, 0);
		unk_0x6935EBF9868982DC(2697.222f, 4119.894f, 42.79107f, 2746.04f, 4162.974f, 43.62732f, false, 1);
		unk_0x6C5F5B5F6894CCE3(2728.333f, 4144.778f, 43.29292f, 7.5f, 1, 0, 0, false);
	}
	else
	{
		unk_0x483687B0FCA5415A(*uParam1, 0);
		unk_0x02DD9F29D9655E48();
		unk_0x379ACE23D404525C(vVar0, vVar1, true, 1);
		unk_0x832ADB79A274D4E9(2697.222f, 4119.894f, 42.79107f, 2746.04f, 4162.974f, 43.62732f, true);
	}
}

int func_49()//Position - 0x1507
{
	if (unk_0xFA30DFD0084E92FE(Global_19B04.f_617D, 3))
	{
		return 4;
	}
	else if (unk_0xFA30DFD0084E92FE(Global_19B04.f_617D, 2))
	{
		return 4;
	}
	else if (unk_0xFA30DFD0084E92FE(Global_19B04.f_617D, 1))
	{
		return 4;
	}
	else if (unk_0xFA30DFD0084E92FE(Global_19B04.f_617D, 0))
	{
		return 3;
	}
	return 4;
}

void func_50()//Position - 0x1565
{
	vector3 vVar0;
	
	if (func_51(iLocal_42))
	{
		if (!unk_0x5CAE759AE8219D20(iLocal_42))
		{
			unk_0x77815D3407C6700D(iLocal_42, true, 0);
		}
		unk_0x2E35C4FA5F0ED22F(iLocal_42, true);
		unk_0x8EF3D958386640FE(iLocal_42, 0);
		unk_0xB105531EDD3DE51B(iLocal_42, false);
		unk_0x4106FAF8AA1D69D5(iLocal_42, 1862763509);
		unk_0x95F58F57ACD332BA(iLocal_42, 0);
		unk_0x6757D726B4BAF0C4(iLocal_42, 0);
		unk_0xC8FD3EBBB90E8D7F(iLocal_42, 118, false);
		vVar0 = { 2728.33f, 4145.6f, 43.89f };
		if (unk_0x70CF24CEFB0F53B0(vVar0, 10f, -380698483, 0))
		{
			iLocal_40 = unk_0xCE5CC3450F9879E0(vVar0, 10f, -380698483, 1, 0, 1);
			if (func_8(iLocal_40))
			{
				unk_0x641B19E156645A92(iLocal_40, 2727.4f, 4145.56f, 43.68f, 1, false, 0, 1);
				unk_0x019CE76D5286C95C(iLocal_40, -92.17f);
				unk_0x346478B12F69D4E3(iLocal_40, true);
			}
		}
		if (unk_0x70CF24CEFB0F53B0(vVar0, 10f, 1385417869, 0))
		{
			iLocal_41 = unk_0xCE5CC3450F9879E0(vVar0, 10f, 1385417869, 0, 0, 1);
			if (func_8(iLocal_41))
			{
				if (!unk_0x5CAE759AE8219D20(iLocal_41))
				{
					unk_0x77815D3407C6700D(iLocal_41, true, 0);
				}
				unk_0x641B19E156645A92(iLocal_41, 2727.686f, 4145.715f, 44.08f, 1, false, 0, 1);
				unk_0x019CE76D5286C95C(iLocal_41, 71f);
				unk_0x346478B12F69D4E3(iLocal_41, true);
			}
		}
		if (unk_0x70CF24CEFB0F53B0(vVar0, 10f, -741944541, 0))
		{
			iLocal_39 = unk_0xCE5CC3450F9879E0(vVar0, 10f, -741944541, 0, 0, 1);
			if (func_8(iLocal_39))
			{
				if (!unk_0x5CAE759AE8219D20(iLocal_39))
				{
					unk_0x77815D3407C6700D(iLocal_39, true, 0);
				}
				unk_0x641B19E156645A92(iLocal_39, 2728.35f, 4145.59f, 43.3f, 1, false, 0, 1);
				unk_0x019CE76D5286C95C(iLocal_39, -91.28f);
			}
		}
	}
}

int func_51(int iParam0)//Position - 0x1712
{
	if (func_8(iParam0))
	{
		if (!unk_0x36CEFBE9B745A58D(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_52()//Position - 0x1732
{
	int iVar0;
	int iVar1;
	var uVar2[32];
	
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		iVar0 = unk_0x252B0CBDBF5803ED(unk_0xBC25C936A095B5BA(), &uVar2, -1);
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			if (func_51(uVar2[iVar1]))
			{
				if (unk_0x6F79ECA8C83E4357(uVar2[iVar1]) == func_53(62))
				{
					iLocal_42 = uVar2[iVar1];
					return 1;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_53(int iParam0)//Position - 0x1799
{
	if (!func_54(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_54(int iParam0)//Position - 0x17C4
{
	return iParam0 < 3;
}

void func_55()//Position - 0x17D0
{
	func_48(0, &uLocal_48);
	if (func_8(iLocal_41))
	{
		unk_0x346478B12F69D4E3(iLocal_41, false);
	}
	func_57(&iLocal_41, 0);
	if (func_8(iLocal_40))
	{
		unk_0x346478B12F69D4E3(iLocal_40, false);
	}
	func_57(&iLocal_40, 0);
	if (func_8(iLocal_39))
	{
		unk_0x346478B12F69D4E3(iLocal_39, false);
		if (unk_0x96044E39418AAF17(iLocal_39, "special_ped@maude@base", "base_chair", 3))
		{
			unk_0x448CBB54998E5DCE(iLocal_39, "base_chair", "special_ped@maude@base", -1000f);
			unk_0x6C3BE67B02D72CDC(iLocal_39, -1000f, 1);
		}
		else if (unk_0x96044E39418AAF17(iLocal_39, func_11(), "Female_Flee_Table_Left_Maude_Chair", 3))
		{
			unk_0x448CBB54998E5DCE(iLocal_39, "Female_Flee_Table_Left_Maude_Chair", func_11(), -1000f);
			unk_0x6C3BE67B02D72CDC(iLocal_39, -1000f, 1);
		}
	}
	func_57(&iLocal_39, 0);
	if (func_51(iLocal_42))
	{
		unk_0x22321800954A532E(iLocal_42, true);
		unk_0xC8FD3EBBB90E8D7F(iLocal_42, 118, true);
	}
	func_56(&iLocal_42, 1, 0, 1);
	unk_0x4EA570997E107F35(func_11());
	unk_0x95E4B6F3ED223F5A();
}

void func_56(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x18B5
{
	if (unk_0x724D816EA203A79E(*iParam0))
	{
		if (!unk_0x36CEFBE9B745A58D(*iParam0))
		{
			unk_0xB71D41C0310C93DE(*iParam0, false, 1);
			if (iParam3 == 0)
			{
				unk_0xD999D66C5AFA4BE3(*iParam0);
			}
			unk_0x22321800954A532E(*iParam0, bParam1);
			if (iParam2 == 1)
			{
				unk_0x2E35C4FA5F0ED22F(*iParam0, false);
			}
		}
		unk_0x02537C8C1BEEB477(iParam0);
	}
}

void func_57(int iParam0, bool bParam1)//Position - 0x1905
{
	if (unk_0x724D816EA203A79E(*iParam0))
	{
		if (unk_0x2FAEA11D96CF14A3(*iParam0))
		{
			unk_0x17175087F2DB6AC8(*iParam0, 1, true);
		}
		if (!bParam1)
		{
			unk_0xF8ED8988FAF2823F(iParam0);
		}
		else
		{
			unk_0x5524CBCEE0910236(*iParam0);
		}
	}
}

