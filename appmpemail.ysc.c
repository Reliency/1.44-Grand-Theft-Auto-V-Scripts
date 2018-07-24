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
	int iLocal_18 = 0;
	int iLocal_19[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	var uLocal_33 = 0;
	struct<16> Local_34 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_35[59];
	struct<16> Local_36[59];
	int iLocal_37 = 0;
	vector3 vLocal_38 = { 0f, 0f, 0f };
	vector3 vLocal_39 = { 0f, 0f, 0f };
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	bool bLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	struct<314> Local_45 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	unk_0xC1A27D367CCA8C15();
	if (unk_0xB731B8C5BCE89836(joaat("cellphone_flashhand")) == 0)
	{
		func_56();
	}
	func_55();
	Global_41E2 = 0;
	Global_19B04.f_36C6[Global_389D /*20*/].f_12 = 0;
	Global_3942 = 0;
	func_54();
	func_53(Global_388A, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_48();
	func_46();
	if (Global_389D.f_1 > 3)
	{
		Global_389D.f_1 = 7;
	}
	iLocal_31 = unk_0x105601648511CC64();
	Global_38A1 = 0;
	unk_0x652515566BB40BA9(&vLocal_39);
	vLocal_38 = { vLocal_39 };
	vLocal_38.x = (vLocal_38.x - 10f);
	vLocal_38.y = (vLocal_38.y + 20f);
	Global_41C1 = 0;
	Global_41C2 = 1;
	while (true)
	{
		SYSTEM::WAIT(0);
		if (Global_41C2 == 0 && Global_41C1 == 1)
		{
			func_45();
		}
		if (Global_41C2 == 1 && Global_41C1 == 0)
		{
			func_40();
		}
		if (iLocal_30 == 0)
		{
			iLocal_32 = unk_0x105601648511CC64();
			if ((iLocal_32 - iLocal_31) > 500)
			{
				iLocal_30 = 1;
			}
		}
		if ((Global_389D.f_1 != 9 && Global_41C2 == 0) && Global_41C1 == 0)
		{
			switch (Global_389D.f_1)
			{
				case 7:
					if (Global_41E2 == 0)
					{
						if (Global_269667 == 0)
						{
							func_39();
							func_32();
						}
					}
					break;
				
				case 8:
					if (Global_41E2 == 1)
					{
						func_11();
						func_5();
					}
					break;
				
				default:
					break;
			}
			if (Global_41E2 == 0)
			{
				if (func_4())
				{
					Global_41C1 = 1;
				}
			}
			else if (func_3(2, Global_387D, 0) || unk_0xFA30DFD0084E92FE(Global_93C, 12))
			{
				if (unk_0x3362CDE8460ED38B(&(Global_4118D9[iLocal_24 /*104*/]), "CELL_FINV"))
				{
				}
				else
				{
					SYSTEM::WAIT(0);
					unk_0x7CB6FD92BE491AD9(&Global_93C, 12);
					func_2();
					Global_3887 = 1;
					Global_41E2 = 0;
					if (Global_389D.f_1 > 3)
					{
						Global_389D.f_1 = 7;
					}
					if (unk_0xB731B8C5BCE89836(joaat("cellphone_flashhand")) == 0)
					{
						func_56();
					}
					func_53(Global_388A, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_48();
					func_46();
					if (Global_4118D9[iLocal_24 /*104*/].f_1D > 0)
					{
						if (Global_4118D9[iLocal_24 /*104*/].f_1F == 1)
						{
							Global_4118D9[iLocal_24 /*104*/].f_1D = 4;
							Global_4118D9[iLocal_24 /*104*/].f_18 = 1;
						}
						else
						{
							Global_4118D9[iLocal_24 /*104*/].f_18 = 1;
						}
					}
				}
			}
		}
		if (unk_0xB731B8C5BCE89836(joaat("cellphone_flashhand")) == 0)
		{
			func_56();
		}
		if (func_1())
		{
			func_56();
		}
	}
}

int func_1()//Position - 0x29C
{
	if (((Global_389D.f_1 == 1 || Global_389D.f_1 == 3) || Global_389D.f_1 == 0) || Global_3865 == 1)
	{
		Global_3890 = 1;
		return 1;
	}
	return 0;
}

void func_2()//Position - 0x2DF
{
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0xC4BA30B532FE260F(-1, "Menu_Back", &Global_3892, 1);
	}
}

int func_3(int iParam0, int iParam1, int iParam2)//Position - 0x300
{
	if (unk_0x694514BD37EC4E94(iParam0, iParam1) || (iParam2 == 1 && unk_0xF7DDAAF0EFDAFA22(iParam0, iParam1)))
	{
		if (unk_0x8ACB0C3FACC09467())
		{
			if (unk_0x0F8865E539C1FCE8() == 0 || (unk_0xF32BA80A2DED1FC6() && unk_0x50465D2C022B9E04(2)))
			{
				return 0;
			}
		}
		if (unk_0xE186ACC7BE9B244E() || unk_0x18158A50125911B6())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_4()//Position - 0x372
{
	if (Global_B99 == 1 || Global_389D.f_1 < 7)
	{
		Global_3890 = 1;
		return 1;
	}
	return 0;
}

void func_5()//Position - 0x39B
{
	if (iLocal_27)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_27 = 0;
		}
	}
	if (unk_0x50465D2C022B9E04(2))
	{
		if (func_3(2, 181, 0))
		{
			func_9();
		}
		if (func_3(2, 180, 0))
		{
			func_6();
		}
	}
	if (iLocal_27 == 0)
	{
		if (func_3(2, Global_3885, 0))
		{
			func_9();
			iLocal_27 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_3(2, Global_3886, 0))
		{
			func_6();
			iLocal_27 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_6()//Position - 0x410
{
	func_53(Global_388A, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xC4BA30B532FE260F(-1, "Menu_Navigate", &Global_3892, 1);
	func_7();
}

void func_7()//Position - 0x44B
{
	if (func_8())
	{
		if (Global_3948 == 0)
		{
			unk_0x32A023E2F8F8566C(2);
		}
		else
		{
			unk_0x32A023E2F8F8566C(1);
		}
	}
}

int func_8()//Position - 0x46E
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_11542)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0xEBC6179F395EFBEB();
	iVar1 = unk_0x3D875C2512206692(iVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_411EA0 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_9()//Position - 0x4B5
{
	func_53(Global_388A, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xC4BA30B532FE260F(-1, "Menu_Navigate", &Global_3892, 1);
	func_10();
}

void func_10()//Position - 0x4F0
{
	if (func_8())
	{
		if (Global_3948 == 0)
		{
			unk_0x32A023E2F8F8566C(1);
		}
		else
		{
			unk_0x32A023E2F8F8566C(2);
		}
	}
}

void func_11()//Position - 0x513
{
	func_12();
}

void func_12()//Position - 0x51F
{
	if (Global_4118D9[iLocal_24 /*104*/].f_18 == 1)
	{
		if (Global_3887 == 0)
		{
			if (unk_0x8FCEEB789599BD9B(2, Global_3880))
			{
				func_2();
				Global_3887 = 1;
				func_26();
				if (Global_4118D9[iLocal_24 /*104*/].f_1B == 1)
				{
					Global_4118D9[iLocal_24 /*104*/].f_63[0] = 0;
					Global_4118D9[iLocal_24 /*104*/].f_63[1] = 0;
					Global_4118D9[iLocal_24 /*104*/].f_63[2] = 0;
				}
				else
				{
					Global_4118D9[iLocal_24 /*104*/].f_63[Global_389D] = 0;
				}
				if (func_25(iLocal_24))
				{
				}
				else
				{
					Global_4118D9[iLocal_24 /*104*/].f_18 = 0;
					Global_4118D9[iLocal_24 /*104*/].f_1C = 0;
				}
				unk_0x8C563C8EA840EA02(Global_4118D9[iLocal_24 /*104*/].f_10);
				func_53(Global_388A, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_48();
				if (iLocal_22 > 0)
				{
					iLocal_22 = (iLocal_22 - 1);
				}
				func_46();
				if (Global_389D.f_1 > 3)
				{
					Global_389D.f_1 = 7;
					Global_41E2 = 0;
				}
			}
		}
	}
	else if (Global_3887 == 0)
	{
		if (unk_0x8FCEEB789599BD9B(2, Global_3881))
		{
			if (iLocal_26 == 1)
			{
				if (Global_389D.f_1 > 3)
				{
					StringCopy(&Global_10AA8, unk_0xFCB4C1AC11347344(&Global_41C9), 64);
					if (unk_0x3362CDE8460ED38B(&Global_10AA8, "HARDCODED_4207156"))
					{
						Global_389D.f_1 = 3;
						Global_19AFA4 = 1;
					}
					else
					{
						Global_10B29 = 7;
						unk_0xF0059F27F7BB6680(&Global_93C, 10);
						Global_389D.f_1 = 6;
					}
				}
				func_56();
			}
		}
	}
	if (Global_4118D9[iLocal_24 /*104*/].f_1F == 1)
	{
		if (Global_3887 == 0)
		{
			if (func_3(2, Global_3881, 0))
			{
				func_23();
				Global_3887 = 1;
				Global_4118D9[iLocal_24 /*104*/].f_1D = 2;
				Global_4118D9[iLocal_24 /*104*/].f_18 = 1;
				Global_4118D9[iLocal_24 /*104*/].f_1F = 0;
				unk_0x7CB6FD92BE491AD9(&Global_93B, 17);
				Global_41E2 = 0;
				if (Global_389D.f_1 > 3)
				{
					Global_389D.f_1 = 7;
				}
				func_53(Global_388A, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_48();
				func_46();
			}
		}
	}
	if (Global_3887 == 0 && iLocal_30 == 1)
	{
		if (func_3(2, Global_387E, 0))
		{
			Global_3887 = 1;
			if (Global_4118D9[iLocal_24 /*104*/].f_1D > 0)
			{
				func_23();
				Global_4118D9[iLocal_24 /*104*/].f_1D = 3;
				Global_4118D9[iLocal_24 /*104*/].f_18 = 1;
				Global_41E2 = 0;
				if (Global_389D.f_1 > 3)
				{
					Global_389D.f_1 = 7;
				}
				func_53(Global_388A, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_48();
				func_46();
			}
			else if (Global_4118D9[iLocal_24 /*104*/].f_1E == 1)
			{
				func_23();
				Global_68E = 144;
				if (Global_389D.f_1 > 3)
				{
					Global_389D.f_1 = 10;
					func_21();
				}
				func_20("appContacts");
				Global_389B = SYSTEM::START_NEW_SCRIPT("appContacts", 4000);
				unk_0x91DEC7187FA01089("appContacts");
				Global_68E = Global_4118D9[iLocal_24 /*104*/].f_11;
				if (Global_19B04.f_6D75[Global_68E /*29*/].f_18[Global_389D] == 0)
				{
					func_19(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_75[Global_68E /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
				}
				else
				{
					func_19(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_19B04.f_6D75[Global_68E /*29*/].f_3), &(Global_19B04.f_6D75[Global_68E /*29*/].f_7), "CELL_211", &(Global_19B04.f_6D75[Global_68E /*29*/].f_3), 0);
				}
				func_13();
				func_56();
			}
		}
	}
}

void func_13()//Position - 0x882
{
	vector3 vVar0[24];
	
	if (Global_388C == 1)
	{
		return;
	}
	if (Global_389D.f_1 < 4)
	{
		return;
	}
	while (!unk_0xA7F138B5B1AB2CF6(Global_388A))
	{
		SYSTEM::WAIT(0);
	}
	switch (Global_389D.f_1)
	{
		case 6:
			func_53(Global_388A, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_17(Global_B98);
			if (Global_B98 == 1)
			{
				func_53(Global_388A, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_38A1), -1082130432, -1082130432, -1082130432);
				Global_3889 = Global_38A1;
			}
			else
			{
				func_53(Global_388A, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_38A2), -1082130432, -1082130432, -1082130432);
				Global_3889 = Global_38A2;
			}
			if (Global_3891)
			{
				func_19(Global_388A, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_19(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_19(Global_388A, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_19(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_3945 == 0)
			{
				func_19(Global_388A, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x7CB6FD92BE491AD9(&Global_93B, 17);
			}
			else if (Global_11542)
			{
				func_19(Global_388A, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x7CB6FD92BE491AD9(&Global_93B, 17);
			}
			else
			{
				if (Global_3944 == 1)
				{
					if (Global_3891)
					{
						func_19(Global_388A, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_19(Global_388A, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_3891)
				{
					func_19(Global_388A, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_19(Global_388A, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0xF0059F27F7BB6680(&Global_93B, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_53(Global_388A, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_19(Global_388A, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_19(Global_388A, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x7CB6FD92BE491AD9(&Global_93B, 17);
			if (unk_0xFA30DFD0084E92FE(Global_93B, 20))
			{
				func_19(Global_388A, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_3891)
			{
				func_19(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_3864)
				{
					func_19(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_19(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_389C == 1)
			{
				func_16();
				func_53(Global_388A, "SET_THEME", SYSTEM::TO_FLOAT(Global_19B04.f_36C6[Global_389D /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_3DC5)
				{
					unk_0x29CD142125FE177B(Global_388A, "SET_DATA_SLOT");
					unk_0x1E1FB49121565EB6(4);
					unk_0x1E1FB49121565EB6(0);
					unk_0x1E1FB49121565EB6(2);
					unk_0x57016C44F10111F0("CELL_CONDFON");
					unk_0x607C19B90D297FE2(&Global_3DC7);
					unk_0x64989E60CF560CA1();
					func_15("CELL_300");
					func_15("CELL_217");
					func_15("CELL_217");
					unk_0xF9FBC2F3F73D94C9();
				}
				else if (Global_19B04.f_6D75[Global_68E /*29*/].f_18[Global_389D] == 0)
				{
					func_19(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_75[Global_68E /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_19(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_19B04.f_6D75[Global_68E /*29*/].f_3), &(Global_19B04.f_6D75[Global_68E /*29*/].f_7), "CELL_217", &(Global_19B04.f_6D75[Global_68E /*29*/].f_3), 0);
				}
				func_53(Global_388A, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_3DB8 == 4 || Global_3DB8 == 3)
			{
				func_53(Global_388A, "SET_THEME", SYSTEM::TO_FLOAT(Global_19B04.f_36C6[Global_389D /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_16();
				if (Global_3DC5)
				{
					unk_0x29CD142125FE177B(Global_388A, "SET_DATA_SLOT");
					unk_0x1E1FB49121565EB6(4);
					unk_0x1E1FB49121565EB6(0);
					unk_0x1E1FB49121565EB6(2);
					unk_0x57016C44F10111F0("CELL_CONDFON");
					unk_0x607C19B90D297FE2(&Global_3DC7);
					unk_0x64989E60CF560CA1();
					func_15("CELL_300");
					func_15("CELL_219");
					func_15("CELL_219");
					unk_0xF9FBC2F3F73D94C9();
				}
				else
				{
					if (Global_3EBA)
					{
						StringCopy(&cVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211", 24);
					}
					if (Global_19B04.f_6D75[Global_68E /*29*/].f_18[Global_389D] == 0)
					{
						func_53(Global_388A, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_19(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_75[Global_68E /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_53(Global_388A, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_19(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_19B04.f_6D75[Global_68E /*29*/].f_3), &(Global_19B04.f_6D75[Global_68E /*29*/].f_7), &cVar0, &(Global_19B04.f_6D75[Global_68E /*29*/].f_3), 0);
					}
				}
				func_53(Global_388A, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_14();
			break;
		
		default:
			break;
	}
}

void func_14()//Position - 0xE25
{
	if (unk_0xA7F138B5B1AB2CF6(Global_388A))
	{
		if (Global_389C == 1)
		{
			if (Global_3891)
			{
				func_19(Global_388A, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_19(Global_388A, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_3DE7)
			{
				func_19(Global_388A, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0xFA30DFD0084E92FE(Global_93B, 20))
			{
				func_19(Global_388A, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_3891)
			{
				func_19(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_19(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_19(Global_388A, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x7CB6FD92BE491AD9(&Global_93B, 17);
		}
		else
		{
			func_19(Global_388A, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_19(Global_388A, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x7CB6FD92BE491AD9(&Global_93B, 17);
			if (unk_0xFA30DFD0084E92FE(Global_93B, 20))
			{
				func_19(Global_388A, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_3891)
			{
				func_19(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_3864)
				{
					func_19(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_19(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_15(char* sParam0)//Position - 0xFA5
{
	unk_0x57016C44F10111F0(sParam0);
	unk_0x64989E60CF560CA1();
}

void func_16()//Position - 0xFB7
{
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		if (Global_389D == 0)
		{
			switch (Global_19B04.f_36C6[Global_389D /*20*/].f_6)
			{
				case 1:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 0);
					break;
				
				case 2:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 1);
					break;
				
				case 3:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 2);
					break;
				
				case 4:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 3);
					break;
				
				case 5:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 4);
					break;
				
				case 6:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 5);
					break;
				
				case 7:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_389D == 1)
		{
			switch (Global_19B04.f_36C6[Global_389D /*20*/].f_6)
			{
				case 1:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 6);
					break;
				
				case 2:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 0);
					break;
				
				case 3:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 1);
					break;
				
				case 4:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 2);
					break;
				
				case 5:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 3);
					break;
				
				case 6:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 4);
					break;
				
				case 7:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_389D == 2)
		{
			switch (Global_19B04.f_36C6[Global_389D /*20*/].f_6)
			{
				case 1:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 5);
					break;
				
				case 2:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 6);
					break;
				
				case 3:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 1);
					break;
				
				case 4:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 0);
					break;
				
				case 5:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 2);
					break;
				
				case 6:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 3);
					break;
				
				case 7:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_389D == 3)
		{
			switch (Global_411E9E)
			{
				case 1:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 0);
					break;
				
				case 2:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 1);
					break;
				
				case 3:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 2);
					break;
				
				case 4:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 3);
					break;
				
				case 5:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 4);
					break;
				
				case 6:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 5);
					break;
				
				case 7:
					unk_0x27063F01E7A037DA(unk_0xB5CEFD608600A09F(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_17(int iParam0)//Position - 0x122E
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
		if (func_18(14))
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
								func_15(&(Global_942[iVar1 /*15*/]));
								unk_0x1E1FB49121565EB6(iVar2);
								unk_0xF9FBC2F3F73D94C9();
							}
							if (Global_25805E)
							{
								if (iVar1 == 14)
								{
									func_19(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_41DF), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_19(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_41E4), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_19(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_19(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_19(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_41DF), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x29CD142125FE177B(Global_388A, "SET_DATA_SLOT");
								unk_0x1E1FB49121565EB6(1);
								unk_0x1E1FB49121565EB6(iVar0);
								unk_0x1E1FB49121565EB6(Global_942[iVar1 /*15*/].f_A);
								unk_0x1E1FB49121565EB6(0);
								func_15(&(Global_942[iVar1 /*15*/]));
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
								func_15(&(Global_942[iVar1 /*15*/]));
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
								func_15(&(Global_942[iVar1 /*15*/]));
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
								func_15(&(Global_942[iVar1 /*15*/]));
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
								func_15(&(Global_942[iVar1 /*15*/]));
								unk_0x1E1FB49121565EB6(42);
								unk_0xF9FBC2F3F73D94C9();
							}
							else if (Global_942[iVar1 /*15*/].f_A == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_18C323.f_1;
								func_19(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_19(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(0), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
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

bool func_18(int iParam0)//Position - 0x17C7
{
	return Global_8C41 == iParam0;
}

void func_19(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x17D5
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
		func_15(sParam7);
	}
	if (!unk_0xF1734B55490E9045(sParam8))
	{
		func_15(sParam8);
	}
	if (!unk_0xF1734B55490E9045(sParam9))
	{
		func_15(sParam9);
	}
	if (!unk_0xF1734B55490E9045(sParam10))
	{
		func_15(sParam10);
	}
	if (!unk_0xF1734B55490E9045(sParam11))
	{
		func_15(sParam11);
	}
	unk_0xF9FBC2F3F73D94C9();
}

void func_20(char* sParam0)//Position - 0x1888
{
	unk_0x63831D2D5110C305(sParam0);
	while (!unk_0xACE95AD318CE412B(sParam0))
	{
		SYSTEM::WAIT(0);
	}
}

void func_21()//Position - 0x18A8
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (func_22() && unk_0x74AAB09D79A6344E(unk_0xBC25C936A095B5BA(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_11542)
	{
		if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && iVar1 == 0)
		{
			iVar2 = unk_0x35C830BCF2BF70BE(unk_0xBC25C936A095B5BA(), 0);
			if (Global_11542)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || unk_0x4B4D220E2BCD09B8(unk_0xBC25C936A095B5BA()))
				{
					iVar0 = 1;
				}
			}
			else if (unk_0x4B4D220E2BCD09B8(unk_0xBC25C936A095B5BA()))
			{
				iVar0 = 1;
			}
			if (!Global_3864)
			{
				if (Global_68E != 128)
				{
					if (iVar0 == 0)
					{
						if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
						{
							if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
							{
							}
							else
							{
								if (Global_11542)
								{
									unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 244, false);
									unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 243, false);
									unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 242, false);
								}
								unk_0xF0059F27F7BB6680(&Global_93B, 11);
								unk_0x419DE08DC356F2FD(unk_0xBC25C936A095B5BA(), 1, 1);
							}
						}
					}
				}
			}
		}
	}
}

int func_22()//Position - 0x19CB
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0xEBC6179F395EFBEB();
	iVar1 = unk_0x3D875C2512206692(iVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_23()//Position - 0x19EF
{
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0xC4BA30B532FE260F(-1, "Menu_Accept", &Global_3892, 1);
		func_24();
	}
}

void func_24()//Position - 0x1A15
{
	if (func_8())
	{
		unk_0x32A023E2F8F8566C(5);
	}
}

int func_25(int iParam0)//Position - 0x1A29
{
	if ((Global_19B04.f_3720[iParam0 /*104*/].f_63[0] == 1 || Global_19B04.f_3720[iParam0 /*104*/].f_63[1] == 1) || Global_19B04.f_3720[iParam0 /*104*/].f_63[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_26()//Position - 0x1A7E
{
	if (func_18(14))
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
		Global_389D = func_27();
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

var func_27()//Position - 0x1B20
{
	func_28();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_28()//Position - 0x1B39
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_31(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_30(unk_0xBC25C936A095B5BA());
			if (func_29(iVar0) && (!func_18(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_29(Global_19B04.f_932.f_21B.f_10CD))
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

bool func_29(int iParam0)//Position - 0x1C36
{
	return iParam0 < 3;
}

int func_30(int iParam0)//Position - 0x1C42
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_31(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_31(int iParam0)//Position - 0x1C7F
{
	if (func_29(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_32()//Position - 0x1CA9
{
	struct<16> Var0;
	
	if (Global_3887 == 0)
	{
		if ((func_3(2, Global_387E, 0) || Global_411DBB == 1) || Global_41DC == 1)
		{
			if (Global_411DBB == 0 && Global_41DC == 0)
			{
				func_23();
			}
			Global_3887 = 1;
			iLocal_30 = 0;
			func_19(Global_388A, "SET_SOFT_KEYS", 1f, 0f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x7CB6FD92BE491AD9(&Global_93B, 17);
			iLocal_24 = iLocal_19[iLocal_22];
			if (iLocal_22 == iLocal_21 || iLocal_22 > iLocal_21)
			{
				if (Global_389D.f_1 > 3)
				{
					Global_389D.f_1 = 8;
					Global_41E2 = 1;
					iLocal_23 = iLocal_22;
					unk_0x93C7A83E89FF8446(iLocal_19[iLocal_22], &Local_45);
				}
				SYSTEM::SETTIMERB(0);
				iLocal_28 = 0;
				unk_0x29CD142125FE177B(Global_388A, "GET_CURRENT_SELECTION");
				uLocal_33 = unk_0xC27A95D32A8160C0();
				while (!unk_0x3B6BD69AB08B86C2(uLocal_33) && iLocal_28 == 0)
				{
					SYSTEM::WAIT(0);
					if (SYSTEM::TIMERB() > 2000)
					{
						iLocal_28 = 1;
					}
				}
				func_37();
				unk_0x29CD142125FE177B(Global_388A, "SET_DATA_SLOT");
				unk_0x1E1FB49121565EB6(9);
				unk_0x1E1FB49121565EB6(0);
				func_15("CELL_1");
				unk_0x57016C44F10111F0("CELL_TO_FIELD");
				unk_0x607C19B90D297FE2(unk_0xD885B2234FC72D62(unk_0xB5CEFD608600A09F()));
				unk_0x64989E60CF560CA1();
				unk_0x57016C44F10111F0("CELL_FROM_FIELD");
				unk_0x607C19B90D297FE2(&(Local_45.f_2));
				unk_0x64989E60CF560CA1();
				unk_0x57016C44F10111F0("CELL_EMAIL_BCON");
				unk_0x607C19B90D297FE2(&(Local_45.f_38[0 /*16*/]));
				unk_0x607C19B90D297FE2(&(Local_45.f_38[1 /*16*/]));
				unk_0x607C19B90D297FE2(&(Local_45.f_38[2 /*16*/]));
				unk_0x607C19B90D297FE2(&(Local_45.f_38[3 /*16*/]));
				unk_0x607C19B90D297FE2(&(Local_45.f_38[4 /*16*/]));
				unk_0x607C19B90D297FE2(&(Local_45.f_38[5 /*16*/]));
				unk_0x607C19B90D297FE2(&(Local_45.f_38[6 /*16*/]));
				unk_0x607C19B90D297FE2(&(Local_45.f_38[7 /*16*/]));
				unk_0x607C19B90D297FE2(&(Local_45.f_38[8 /*16*/]));
				unk_0x607C19B90D297FE2(&(Local_45.f_38[9 /*16*/]));
				unk_0x64989E60CF560CA1();
				unk_0x57016C44F10111F0("CELL_2000");
				unk_0x607C19B90D297FE2(&(Local_45.f_2));
				unk_0x64989E60CF560CA1();
				switch (Local_45.f_139)
				{
					case 0:
						break;
					
					case 1:
						break;
					
					case 2:
						unk_0x6A664E53A192232C("EmailAds_Dock_Tease");
						unk_0x5E5DBD0A6623969E(true);
						break;
					
					case 3:
						unk_0x6A664E53A192232C("EmailAds_Warstock");
						unk_0x5E5DBD0A6623969E(true);
						break;
					
					case 4:
						unk_0x6A664E53A192232C("EmailAds_Legendary_Motorsport");
						unk_0x5E5DBD0A6623969E(true);
						break;
					
					case 5:
						unk_0x6A664E53A192232C("EmailAds_LS_Customs");
						unk_0x5E5DBD0A6623969E(true);
						break;
					
					case 6:
						unk_0x6A664E53A192232C("EmailAds_Elitas_Travel");
						unk_0x5E5DBD0A6623969E(true);
						break;
					
					case 7:
						unk_0x6A664E53A192232C("EmailAds_LS_Tourist_Info");
						unk_0x5E5DBD0A6623969E(true);
						break;
					
					case 8:
						unk_0x6A664E53A192232C("emailads_dynasty8");
						unk_0x5E5DBD0A6623969E(true);
						break;
					
					case 9:
						unk_0x6A664E53A192232C("emailads_bennys");
						unk_0x5E5DBD0A6623969E(true);
						break;
					
					case 10:
						unk_0x6A664E53A192232C("emailads_ammunation");
						unk_0x5E5DBD0A6623969E(true);
						break;
					
					case 11:
						unk_0x6A664E53A192232C("emailads_SSSA");
						unk_0x5E5DBD0A6623969E(true);
						break;
					
					case 12:
						unk_0x6A664E53A192232C("emailads_maze_bank");
						unk_0x5E5DBD0A6623969E(true);
						break;
					
					case 13:
						unk_0x6A664E53A192232C("emailads_shark");
						unk_0x5E5DBD0A6623969E(true);
						break;
					
					case 14:
						unk_0x6A664E53A192232C("emailads_RP");
						unk_0x5E5DBD0A6623969E(true);
						break;
				}
				unk_0xF9FBC2F3F73D94C9();
				func_19(Global_388A, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				func_53(Global_388A, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (iLocal_22 == iLocal_21)
				{
					if (unk_0xFA30DFD0084E92FE(Global_411DCA, 25))
					{
						unk_0x7CB6FD92BE491AD9(&Global_411DCA, 25);
					}
					if (Global_4118D8 > 0)
					{
						func_34(7782, iLocal_40, -1, 1, 0);
						if (Global_4118D8 > 0)
						{
							Global_4118D8 = 0;
						}
					}
				}
				return;
			}
			if (Global_4118D9[iLocal_24 /*104*/].f_18 != 0)
			{
				if (Global_389D.f_1 > 3)
				{
					Global_389D.f_1 = 8;
				}
				if (Global_411DBB == 1 || Global_41DC == 1)
				{
					iLocal_24 = iLocal_19[0];
					iLocal_23 = 0;
					if (Global_411DBB == 1)
					{
					}
					Global_41DC = 0;
				}
				else
				{
					SYSTEM::SETTIMERB(0);
					iLocal_28 = 0;
					unk_0x29CD142125FE177B(Global_388A, "GET_CURRENT_SELECTION");
					uLocal_33 = unk_0xC27A95D32A8160C0();
					while (!unk_0x3B6BD69AB08B86C2(uLocal_33) && iLocal_28 == 0)
					{
						SYSTEM::WAIT(0);
						if (SYSTEM::TIMERB() > 2000)
						{
							iLocal_28 = 1;
						}
					}
					if (iLocal_28 == 1)
					{
						iLocal_29 = 0;
					}
					else
					{
						iLocal_29 = unk_0x6AE1427A38313694(uLocal_33);
					}
					if (iLocal_29 < 0)
					{
						iLocal_29 = 0;
					}
					iLocal_24 = iLocal_19[iLocal_22];
					iLocal_23 = iLocal_22;
				}
				Global_4118D9[iLocal_24 /*104*/].f_1C = 1;
				iLocal_26 = 0;
				StringCopy(&Global_41C9, "NO_HYPERLINK", 64);
				Var0 = { Global_4118D9[iLocal_24 /*104*/] };
				StringConCat(&Var0, "_LINK", 64);
				if (unk_0x0F6F4C227FB5DD52(&Var0))
				{
					Global_41C9 = { Var0 };
					iLocal_26 = 1;
					if (Global_3891)
					{
						func_19(Global_388A, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, "CELL_267", 0, 0, 0, 0);
					}
					else
					{
						func_19(Global_388A, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					unk_0xF0059F27F7BB6680(&Global_93B, 17);
					Global_4118D9[iLocal_24 /*104*/].f_1A = 1;
					Global_4118D9[iLocal_24 /*104*/].f_18 = 2;
				}
				if (Global_4118D9[iLocal_24 /*104*/].f_1A == 0)
				{
					Global_4118D9[iLocal_24 /*104*/].f_18 = 1;
				}
				func_37();
				unk_0x29CD142125FE177B(Global_388A, "SET_DATA_SLOT");
				unk_0x1E1FB49121565EB6(9);
				unk_0x1E1FB49121565EB6(0);
				func_15("CELL_1");
				unk_0x57016C44F10111F0("CELL_TO_FIELD");
				unk_0x607C19B90D297FE2(unk_0xD885B2234FC72D62(unk_0xB5CEFD608600A09F()));
				unk_0x64989E60CF560CA1();
				if (Global_4118D9[iLocal_24 /*104*/].f_11 == 145)
				{
					unk_0x57016C44F10111F0("CELL_FROM_FIELD");
					unk_0x607C19B90D297FE2(&(Global_4118D9[iLocal_24 /*104*/].f_32));
					unk_0x64989E60CF560CA1();
				}
				else
				{
					unk_0x57016C44F10111F0("CELL_FROM_FIELD");
					unk_0xC9C304D0AABE1335(&(Global_19B04.f_6D75[Global_4118D9[iLocal_24 /*104*/].f_11 /*29*/].f_3));
					unk_0x64989E60CF560CA1();
				}
				switch (Global_4118D9[iLocal_24 /*104*/].f_20)
				{
					case 0:
						func_15(&(Global_4118D9[iLocal_24 /*104*/]));
						break;
					
					case 1:
						unk_0x57016C44F10111F0(&(Global_4118D9[iLocal_24 /*104*/]));
						unk_0x607C19B90D297FE2(&(Global_4118D9[iLocal_24 /*104*/].f_21));
						if (Global_4118D9[iLocal_24 /*104*/].f_42 == 1 && !unk_0x3362CDE8460ED38B(&(Global_4118D9[iLocal_24 /*104*/].f_43), "NULL"))
						{
							unk_0x607C19B90D297FE2(&(Global_4118D9[iLocal_24 /*104*/].f_43));
						}
						if ((Global_4118D9[iLocal_24 /*104*/].f_42 == 2 && !unk_0x3362CDE8460ED38B(&(Global_4118D9[iLocal_24 /*104*/].f_43), "NULL")) && !unk_0x3362CDE8460ED38B(&(Global_4118D9[iLocal_24 /*104*/].f_53), "NULL"))
						{
							if (unk_0x0F6F4C227FB5DD52(&(Global_4118D9[iLocal_24 /*104*/].f_43)))
							{
								unk_0xC9C304D0AABE1335(&(Global_4118D9[iLocal_24 /*104*/].f_43));
							}
							else
							{
								unk_0x607C19B90D297FE2(&(Global_4118D9[iLocal_24 /*104*/].f_43));
							}
							if (unk_0x0F6F4C227FB5DD52(&(Global_4118D9[iLocal_24 /*104*/].f_53)))
							{
								unk_0xC9C304D0AABE1335(&(Global_4118D9[iLocal_24 /*104*/].f_53));
							}
							else
							{
								unk_0x607C19B90D297FE2(&(Global_4118D9[iLocal_24 /*104*/].f_53));
							}
						}
						unk_0x64989E60CF560CA1();
						break;
					
					case 2:
						unk_0x57016C44F10111F0(&(Global_4118D9[iLocal_24 /*104*/]));
						unk_0xAA5C5BF0489E5553(Global_4118D9[iLocal_24 /*104*/].f_31);
						unk_0x64989E60CF560CA1();
						break;
					
					case 3:
						unk_0x57016C44F10111F0(&(Global_4118D9[iLocal_24 /*104*/]));
						unk_0x607C19B90D297FE2(&(Global_4118D9[iLocal_24 /*104*/].f_21));
						unk_0xAA5C5BF0489E5553(Global_4118D9[iLocal_24 /*104*/].f_31);
						if (Global_4118D9[iLocal_24 /*104*/].f_42 == 1 && !unk_0x3362CDE8460ED38B(&(Global_4118D9[iLocal_24 /*104*/].f_43), "NULL"))
						{
							unk_0x607C19B90D297FE2(&(Global_4118D9[iLocal_24 /*104*/].f_43));
						}
						if ((Global_4118D9[iLocal_24 /*104*/].f_42 == 2 && !unk_0x3362CDE8460ED38B(&(Global_4118D9[iLocal_24 /*104*/].f_43), "NULL")) && !unk_0x3362CDE8460ED38B(&(Global_4118D9[iLocal_24 /*104*/].f_53), "NULL"))
						{
							if (unk_0x0F6F4C227FB5DD52(&(Global_4118D9[iLocal_24 /*104*/].f_43)))
							{
								unk_0xC9C304D0AABE1335(&(Global_4118D9[iLocal_24 /*104*/].f_43));
							}
							else
							{
								unk_0x607C19B90D297FE2(&(Global_4118D9[iLocal_24 /*104*/].f_43));
							}
							if (unk_0x0F6F4C227FB5DD52(&(Global_4118D9[iLocal_24 /*104*/].f_53)))
							{
								unk_0xC9C304D0AABE1335(&(Global_4118D9[iLocal_24 /*104*/].f_53));
							}
							else
							{
								unk_0x607C19B90D297FE2(&(Global_4118D9[iLocal_24 /*104*/].f_53));
							}
						}
						unk_0x64989E60CF560CA1();
						break;
					
					case 4:
						func_33(iLocal_24);
						break;
					
					case 5:
						func_33(iLocal_24);
						break;
					
					case 6:
						func_33(iLocal_24);
						break;
					
					case 7:
						func_33(iLocal_24);
						break;
					
					case 8:
						func_33(iLocal_24);
						break;
					
					case 9:
						func_33(iLocal_24);
						break;
					
					case 10:
						func_33(iLocal_24);
						break;
					
					case 11:
						func_33(iLocal_24);
						break;
				}
				if (Global_4118D9[iLocal_24 /*104*/].f_11 == 145)
				{
					unk_0x57016C44F10111F0("CELL_2000");
					unk_0x607C19B90D297FE2(&(Global_4118D9[iLocal_24 /*104*/].f_32));
					unk_0x64989E60CF560CA1();
				}
				else
				{
					func_15(&(Global_19B04.f_6D75[Global_4118D9[iLocal_24 /*104*/].f_11 /*29*/].f_3));
				}
				if (Global_4118D9[iLocal_24 /*104*/].f_11 == 149)
				{
					unk_0x6A664E53A192232C("emailads_maze_bank");
					unk_0x5E5DBD0A6623969E(true);
				}
				if (Global_4118D9[iLocal_24 /*104*/].f_11 == 140)
				{
					unk_0x6A664E53A192232C("EmailAds_Warstock");
					unk_0x5E5DBD0A6623969E(true);
				}
				unk_0xF9FBC2F3F73D94C9();
				Global_41E2 = 1;
				func_53(Global_388A, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
				unk_0x8C563C8EA840EA02(Global_4118D9[iLocal_24 /*104*/].f_10);
				if (Global_4118D9[iLocal_24 /*104*/].f_1D > 0)
				{
					if (Global_3891)
					{
						func_19(Global_388A, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
					}
					else
					{
						func_19(Global_388A, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_4118D9[iLocal_24 /*104*/].f_1E == 1)
				{
					if (Global_3891)
					{
						func_19(Global_388A, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					}
					else
					{
						func_19(Global_388A, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else
				{
					func_19(Global_388A, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_4118D9[iLocal_24 /*104*/].f_1D > 0)
				{
					if (unk_0x3362CDE8460ED38B(&(Global_4118D9[iLocal_24 /*104*/]), "CELL_FINV"))
					{
						if (Global_3891)
						{
							func_19(Global_388A, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
						}
						else
						{
							func_19(Global_388A, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else if (Global_3891)
					{
						func_19(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
					}
					else
					{
						func_19(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_3891)
				{
					func_19(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_19(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_4118D9[iLocal_24 /*104*/].f_18 == 2)
				{
					if (Global_4118D9[iLocal_24 /*104*/].f_1F == 1)
					{
						iLocal_26 = 0;
						if (Global_3891)
						{
							func_19(Global_388A, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, "CELL_264", 0, 0, 0, 0);
						}
						else
						{
							func_19(Global_388A, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						unk_0xF0059F27F7BB6680(&Global_93B, 17);
					}
					else if (iLocal_26 == 0)
					{
						func_19(Global_388A, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						unk_0x7CB6FD92BE491AD9(&Global_93B, 17);
					}
				}
				else if (Global_3891)
				{
					func_19(Global_388A, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, "CELL_216", 0, 0, 0, 0);
					unk_0xF0059F27F7BB6680(&Global_93B, 17);
				}
				else
				{
					func_19(Global_388A, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, 0, 0, 0, 0, 0);
					unk_0xF0059F27F7BB6680(&Global_93B, 17);
				}
				Global_19B04.f_36C6[Global_389D /*20*/].f_12 = 0;
				Global_411DBB = 0;
			}
			else
			{
				Global_19B04.f_36C6[Global_389D /*20*/].f_12 = 0;
				Global_411DBB = 0;
			}
		}
		if (Global_269667 == 0)
		{
			if (Global_11542)
			{
			}
		}
	}
}

void func_33(int iParam0)//Position - 0x283B
{
	int iVar0;
	
	iVar0 = 0;
	switch (Global_19B04.f_3720[iParam0 /*104*/].f_31)
	{
		case 1:
			unk_0x57016C44F10111F0("CELL_CL01");
			break;
		
		case 2:
			unk_0x57016C44F10111F0("CELL_CL02");
			break;
		
		case 3:
			unk_0x57016C44F10111F0("CELL_CL03");
			break;
		
		case 4:
			unk_0x57016C44F10111F0("CELL_CL04");
			break;
		
		case 5:
			unk_0x57016C44F10111F0("CELL_CL05");
			break;
		
		case 6:
			unk_0x57016C44F10111F0("CELL_CL06");
			break;
		
		case 7:
			unk_0x57016C44F10111F0("CELL_CL07");
			break;
		
		case 8:
			unk_0x57016C44F10111F0("CELL_CL08");
			break;
		
		case 9:
			unk_0x57016C44F10111F0("CELL_CL09");
			break;
	}
	unk_0xC9C304D0AABE1335(&(Global_19B04.f_3720[iParam0 /*104*/]));
	while (iVar0 < Global_19B04.f_3720[iParam0 /*104*/].f_31)
	{
		switch (Global_19B04.f_3720[iParam0 /*104*/].f_20)
		{
			case 4:
				unk_0xC9C304D0AABE1335(&(Global_267214.f_673[iVar0 /*4*/]));
				break;
			
			case 5:
				unk_0xC9C304D0AABE1335(&(Global_19398A[iVar0 /*4*/]));
				break;
			
			case 6:
				unk_0xC9C304D0AABE1335(&(Global_1939B3[iVar0 /*4*/]));
				break;
			
			case 7:
				unk_0xC9C304D0AABE1335(&(Global_1939C8[iVar0 /*4*/]));
				break;
			
			case 8:
				unk_0xC9C304D0AABE1335(&(Global_1939D9[iVar0 /*4*/]));
				break;
			
			case 9:
				unk_0xC9C304D0AABE1335(&(Global_1939E6[iVar0 /*4*/]));
				break;
			
			case 10:
				unk_0xC9C304D0AABE1335(&(Global_1939F3[iVar0 /*4*/]));
				break;
			
			case 11:
				unk_0xC9C304D0AABE1335(&(Global_193A00[iVar0 /*4*/]));
				break;
		}
		iVar0++;
	}
	unk_0x64989E60CF560CA1();
}

void func_34(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x29DC
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_35(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, iParam3);
	}
}

int func_35(var uParam0)//Position - 0x2A0C
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_36();
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

int func_36()//Position - 0x2A40
{
	return Global_1407E0;
}

void func_37()//Position - 0x2A4C
{
	int iVar0;
	
	if (iLocal_37)
	{
		unk_0x786556581D95BCB2(&Local_34);
	}
	iLocal_37 = 0;
	if (Global_4118D9[iLocal_24 /*104*/].f_18 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 59)
		{
			if (unk_0x3362CDE8460ED38B(&(Global_4118D9[iLocal_24 /*104*/]), &(Local_35[iVar0 /*6*/])))
			{
				if (func_38(&(Local_35[iVar0 /*6*/])))
				{
					StringCopy(&Local_34, "BAT_CASE_", 64);
					StringIntConCat(&Local_34, Global_19AF9E, 64);
				}
				else
				{
					Local_34 = { Local_36[iVar0 /*16*/] };
				}
				iLocal_37 = 1;
				unk_0x8AA3F48A15444B98(&Local_34, 0);
				while (!unk_0x499783D01578C2D2(&Local_34))
				{
					SYSTEM::WAIT(100);
				}
			}
			iVar0++;
		}
	}
}

int func_38(char* sParam0)//Position - 0x2AE7
{
	switch (unk_0x56BEECB328B6D29D(sParam0))
	{
		case 368818696:
		case -242537573:
		case 293851599:
		case 1276417163:
		case -695052470:
		case -272335065:
		case 1286719131:
		case -1417266496:
		case -469944288:
		case -687436221:
		case 1989355620:
		case 549480519:
		case 1944388503:
		case -934641488:
		case -728564821:
		case 1522380948:
		case -1256768569:
		case -320488889:
		case -539437394:
		case -1801936221:
			return 1;
		
		default:
	}
	return 0;
}

void func_39()//Position - 0x2B77
{
	if (iLocal_27)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_27 = 0;
		}
	}
	if (unk_0x50465D2C022B9E04(2))
	{
		if (func_3(2, 181, 0))
		{
			if (iLocal_22 > 0)
			{
				iLocal_22 = (iLocal_22 - 1);
				func_9();
			}
		}
		if (func_3(2, 180, 0))
		{
			iLocal_22++;
			if (iLocal_22 == iLocal_20)
			{
				iLocal_22 = 0;
			}
			func_6();
		}
	}
	if (iLocal_27 == 0)
	{
		if (func_3(2, Global_3885, 0))
		{
			if (iLocal_22 > 0)
			{
				iLocal_22 = (iLocal_22 - 1);
				func_9();
			}
			iLocal_27 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_3(2, Global_3886, 0))
		{
			iLocal_22++;
			if (iLocal_22 == iLocal_20)
			{
				iLocal_22 = 0;
			}
			func_6();
			iLocal_27 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_40()//Position - 0x2C24
{
	float fVar0;
	
	fVar0 = func_41(vLocal_39, vLocal_38, Global_3875, -90f, 0f, 90f, 350f, 0);
	unk_0xCADAB6FA33E14AB8((500f + (75f * fVar0)));
	if (fVar0 >= 1f)
	{
		Global_41C2 = 0;
		iLocal_18 = 0;
	}
}

float func_41(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, float fParam4, bool bParam5)//Position - 0x2C72
{
	struct<2> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Global_411EA1 == 0)
	{
		if (unk_0xFA30DFD0084E92FE(Global_93B, 14) && Global_389D.f_1 < 4)
		{
			unk_0x652515566BB40BA9(&Var0);
			if (Global_386E[Global_3866 /*3*/].f_1 == Var0.f_1)
			{
				Global_411EA1 = 1;
			}
		}
	}
	if (func_44() && Global_411EA1 == 0)
	{
		return 2f;
	}
	if (iLocal_18 == 0)
	{
		iLocal_18 = unk_0x105601648511CC64();
	}
	fVar1 = func_43((SYSTEM::TO_FLOAT((unk_0x105601648511CC64() - iLocal_18)) / fParam4), 0f, 1f);
	if (fVar1 < 1f)
	{
		fVar2 = fVar1;
		if (bParam5)
		{
			fVar2 = (fVar2 - 1f);
			fVar3 = 0.670158f;
			fVar2 = (((fVar2 * fVar2) * (((fVar3 + 1f) * fVar2) + fVar3)) + 1f);
		}
		else
		{
			fVar2 = SYSTEM::SIN((fVar1 * 90f));
		}
		Global_3855 = { func_42(vParam0, vParam1, fVar2) };
		Global_3858 = { func_42(vParam2, vParam3, fVar2) };
	}
	else
	{
		Global_3855 = { vParam1 };
		Global_3858 = { vParam3 };
	}
	unk_0x3D7D94BDD4D22C14(Global_3855);
	unk_0xF960832D272B97D4(Global_3858, 0);
	return fVar1;
}

Vector3 func_42(vector3 vParam0, vector3 vParam1, float fParam2)//Position - 0x2D84
{
	return vParam0 + vParam1 - vParam0 * Vector(fParam2, fParam2, fParam2);
}

float func_43(float fParam0, float fParam1, float fParam2)//Position - 0x2D9E
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_44()//Position - 0x2DC5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		if (Global_389D.f_1 == 10 || Global_389D.f_1 == 9)
		{
			if (Global_3864 == 0)
			{
				if (Global_68E != 128)
				{
					if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
					{
						if (Global_3DB8 != 2)
						{
						}
					}
				}
			}
		}
		if (func_18(14))
		{
			return 0;
		}
		if (unk_0x74AAB09D79A6344E(unk_0xBC25C936A095B5BA(), 0))
		{
			return 0;
		}
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			if (!unk_0x98A60DA6C3008698())
			{
				if (unk_0x149E9368A11035DE(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0x9273B3557334635D(unk_0xBC25C936A095B5BA()) || unk_0xBCBEDE9A08E4ED89(unk_0xBC25C936A095B5BA())) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0x6BA46D5172404F26(unk_0xBC25C936A095B5BA()))
		{
			return 0;
		}
		if (Global_1974C)
		{
			return 0;
		}
	}
	if (Global_11542)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0xEBC6179F395EFBEB();
	iVar1 = unk_0x3D875C2512206692(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0x98A60DA6C3008698()))
	{
		iVar2 = 1;
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
			{
				iVar3 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
				if ((((((((unk_0x7512ED01F3F46714(unk_0x6F79ECA8C83E4357(iVar3)) || unk_0x2B4DE5C0D509B0F9(unk_0x6F79ECA8C83E4357(iVar3))) || unk_0x89B9572166100905(unk_0x6F79ECA8C83E4357(iVar3))) || unk_0x6F79ECA8C83E4357(iVar3) == joaat("seashark")) || unk_0x6F79ECA8C83E4357(iVar3) == joaat("seashark2")) || unk_0x6F79ECA8C83E4357(iVar3) == joaat("rhino")) || unk_0x6F79ECA8C83E4357(iVar3) == joaat("submersible")) || unk_0x6F79ECA8C83E4357(iVar3) == joaat("submersible2")) || unk_0x6F79ECA8C83E4357(iVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_411EA0 || iVar2 == 1)
	{
		if (unk_0xB731B8C5BCE89836(joaat("apptrackify")) > 0 || Global_19B04.f_36C6.f_59)
		{
			if (unk_0xB731B8C5BCE89836(joaat("michael2")) > 0)
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
			return 1;
		}
	}
	return 0;
}

void func_45()//Position - 0x2FEC
{
	float fVar0;
	
	fVar0 = func_41(vLocal_38, vLocal_39, -90f, 0f, 90f, Global_3875, 350f, 0);
	unk_0xCADAB6FA33E14AB8((500f + (75f * (1f - fVar0))));
	if (fVar0 >= 1f)
	{
		Global_41C1 = 0;
		func_56();
		iLocal_18 = 0;
	}
}

void func_46()//Position - 0x3040
{
	if (Global_411DBB == 0)
	{
		if (iLocal_23 < 0)
		{
			iLocal_23 = 0;
		}
		func_47(Global_388A, "SET_HEADER", "CELL_INBOX", 0, 0, 0, 0);
		func_53(Global_388A, "DISPLAY_VIEW", 8f, SYSTEM::TO_FLOAT(iLocal_23), -1082130432, -1082130432, -1082130432);
		if (Global_3891)
		{
			if (iLocal_20 > 0)
			{
				func_19(Global_388A, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_214", 0, 0, 0, 0);
			}
			else
			{
				func_19(Global_388A, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_19(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			if (iLocal_20 > 0)
			{
				func_19(Global_388A, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_19(Global_388A, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_19(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_11542)
		{
			func_19(Global_388A, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x7CB6FD92BE491AD9(&Global_93B, 17);
		}
		else
		{
			func_19(Global_388A, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x7CB6FD92BE491AD9(&Global_93B, 17);
		}
	}
	else
	{
		iLocal_23 = 0;
	}
}

void func_47(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)//Position - 0x3172
{
	unk_0x29CD142125FE177B(iParam0, sParam1);
	func_15(sParam2);
	if (!unk_0xF1734B55490E9045(sParam3))
	{
		func_15(sParam3);
	}
	if (!unk_0xF1734B55490E9045(sParam4))
	{
		func_15(sParam4);
	}
	if (!unk_0xF1734B55490E9045(sParam5))
	{
		func_15(sParam5);
	}
	if (!unk_0xF1734B55490E9045(sParam6))
	{
		func_15(sParam6);
	}
	unk_0xF9FBC2F3F73D94C9();
}

void func_48()//Position - 0x31CD
{
	int iVar0[12];
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<8> Var5;
	int iVar6;
	int iVar7[10];
	int iVar8;
	
	iLocal_20 = 0;
	iLocal_21 = 0;
	func_26();
	iVar1 = 0;
	iVar2 = 0;
	while (iVar1 < 11)
	{
		if (unk_0xB731B8C5BCE89836(joaat("cellphone_flashhand")) == 0)
		{
			func_56();
		}
		iVar3 = 0;
		iVar4 = 11;
		Global_4118D9[iVar4 /*104*/].f_12 = -1;
		Global_4118D9[iVar4 /*104*/].f_12.f_1 = 0;
		Global_4118D9[iVar4 /*104*/].f_12.f_2 = 0;
		Global_4118D9[iVar4 /*104*/].f_12.f_3 = 0;
		Global_4118D9[iVar4 /*104*/].f_12.f_5 = 0;
		while (iVar3 < 12)
		{
			if (unk_0xB731B8C5BCE89836(joaat("cellphone_flashhand")) == 0)
			{
				func_56();
			}
			if (iVar0[iVar3] == 0)
			{
				if (Global_4118D9[iVar3 /*104*/].f_18 != 0)
				{
					if (Global_4118D9[iVar3 /*104*/].f_63[Global_389D] == 1)
					{
						if (func_52(Global_4118D9[iVar3 /*104*/].f_12, Global_4118D9[iVar4 /*104*/].f_12))
						{
							iVar4 = iVar3;
							if (Global_4118D9[iVar4 /*104*/].f_1C == 0)
							{
								iLocal_25 = 0;
							}
							else
							{
								iLocal_25 = 1;
							}
						}
					}
				}
			}
			iVar3++;
		}
		iLocal_19[iVar1] = iVar4;
		iVar0[iVar4] = 1;
		if (Global_4118D9[iVar4 /*104*/].f_18 != 0)
		{
			if (Global_4118D9[iVar4 /*104*/].f_63[Global_389D] == 1)
			{
				unk_0x29CD142125FE177B(Global_388A, "SET_DATA_SLOT");
				unk_0x1E1FB49121565EB6(8);
				unk_0x1E1FB49121565EB6(iVar1);
				unk_0x1E1FB49121565EB6(iLocal_25);
				unk_0x5E5DBD0A6623969E(false);
				if (Global_4118D9[iVar4 /*104*/].f_11 == 145)
				{
					unk_0x57016C44F10111F0("CELL_2000");
					unk_0x607C19B90D297FE2(&(Global_4118D9[iVar4 /*104*/].f_32));
					unk_0x64989E60CF560CA1();
				}
				else
				{
					func_15(&(Global_19B04.f_6D75[Global_4118D9[iVar4 /*104*/].f_11 /*29*/].f_3));
				}
				Var5 = { Global_4118D9[iVar4 /*104*/] };
				if (func_38(&(Global_4118D9[iVar4 /*104*/])))
				{
					iVar6 = func_49(7315, -1, -1);
					switch (iVar6)
					{
						case 0:
							StringCopy(&Var5, "BONEMAIL_TXT_SUB", 64);
							break;
						
						case 1:
							StringCopy(&Var5, "BONEMAIL2_TXT_SUB", 64);
							break;
						
						case 2:
							StringCopy(&Var5, "BONEMAIL3_TXT_SUB", 64);
							break;
						
						case 3:
							StringCopy(&Var5, "BONEMAIL4_TXT_SUB", 64);
							break;
						
						case 4:
							StringCopy(&Var5, "BONEMAIL5_TXT_SUB", 64);
							break;
					}
				}
				else
				{
					StringConCat(&Var5, "_SUB", 64);
				}
				func_15(&Var5);
				unk_0xF9FBC2F3F73D94C9();
				iLocal_20++;
				iLocal_21++;
			}
		}
		iVar1++;
	}
	iVar1 = iLocal_20;
	iVar8 = 0;
	while (iVar1 < (iLocal_44 + iLocal_20))
	{
		iVar2 = 0;
		iVar8 = 0;
		while (iVar2 < iLocal_44 && iVar8 == 0)
		{
			unk_0x93C7A83E89FF8446(iVar2, &Local_45);
			if (iVar7[iVar2] == 0)
			{
				unk_0x29CD142125FE177B(Global_388A, "SET_DATA_SLOT");
				unk_0x1E1FB49121565EB6(8);
				unk_0x1E1FB49121565EB6(iVar1);
				if (iVar1 == 0)
				{
					if (Global_4118D8 == 0)
					{
						unk_0x1E1FB49121565EB6(1);
					}
					else
					{
						unk_0x1E1FB49121565EB6(0);
					}
				}
				else
				{
					unk_0x1E1FB49121565EB6(1);
				}
				unk_0x5E5DBD0A6623969E(false);
				unk_0x57016C44F10111F0("CELL_2000");
				unk_0x607C19B90D297FE2(&(Local_45.f_2));
				unk_0x64989E60CF560CA1();
				unk_0x57016C44F10111F0("CELL_EMAIL_SUBJ");
				unk_0x607C19B90D297FE2(&(Local_45.f_17[0 /*16*/]));
				unk_0x607C19B90D297FE2(&(Local_45.f_17[1 /*16*/]));
				unk_0x64989E60CF560CA1();
				unk_0xF9FBC2F3F73D94C9();
				iVar7[iVar2] = 1;
				iLocal_19[iVar1] = iVar2;
				iVar8 = 1;
				iLocal_20++;
				if (iVar2 == 0)
				{
					iLocal_40 = Local_45.f_1;
				}
			}
			iVar2++;
		}
		iVar1++;
	}
}

int func_49(int iParam0, int iParam1, int iParam2)//Position - 0x350E
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_36();
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

int func_50(int iParam0)//Position - 0x3554
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

int func_51(int iParam0, int iParam1)//Position - 0x38C8
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_36();
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

int func_52(struct<6> Param0, struct<6> Param1)//Position - 0x3BF2
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

void func_53(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x3CDD
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

void func_54()//Position - 0x3D40
{
	switch (unk_0x83D607D7994DEF3A())
	{
		case -1:
			unk_0x2322A0E1DC14C810("gta5mkt_en");
			break;
		
		case 0:
			unk_0x2322A0E1DC14C810("gta5mkt_en");
			break;
		
		case 1:
			unk_0x2322A0E1DC14C810("gta5mkt_fr");
			break;
		
		case 2:
			unk_0x2322A0E1DC14C810("gta5mkt_ge");
			break;
		
		case 3:
			unk_0x2322A0E1DC14C810("gta5mkt_it");
			break;
		
		case 4:
			unk_0x2322A0E1DC14C810("gta5mkt_sp");
			break;
		
		case 5:
			unk_0x2322A0E1DC14C810("gta5mkt_pt");
			break;
		
		case 6:
			unk_0x2322A0E1DC14C810("gta5mkt_pl");
			break;
		
		case 7:
			unk_0x2322A0E1DC14C810("gta5mkt_ru");
			break;
		
		case 8:
			unk_0x2322A0E1DC14C810("gta5mkt_ko");
			break;
		
		case 9:
			unk_0x2322A0E1DC14C810("gta5mkt_ch");
			break;
		
		case 10:
			unk_0x2322A0E1DC14C810("gta5mkt_ja");
			break;
		
		case 11:
			unk_0x2322A0E1DC14C810("gta5mkt_me");
			break;
		
		case 12:
			unk_0x2322A0E1DC14C810("gta5mkt_cn");
			break;
	}
	unk_0x9BDB77F1D472297C(0, 6);
	SYSTEM::WAIT(0);
	iLocal_41 = 1;
	bLocal_42 = false;
	while (iLocal_41 && Global_389D.f_1 > 3)
	{
		SYSTEM::WAIT(0);
		iLocal_43 = unk_0x08BD8A79E1629DD6();
		if (func_4())
		{
			Global_389D.f_1 = 3;
			iLocal_41 = 0;
			bLocal_42 = false;
		}
		switch (iLocal_43)
		{
			case 3:
				iLocal_41 = 0;
				bLocal_42 = true;
				break;
			
			case 0:
				iLocal_41 = 0;
				bLocal_42 = true;
				break;
			
			case 1:
				break;
			
			case 4:
				iLocal_41 = 0;
				bLocal_42 = false;
				break;
			
			case 2:
				iLocal_41 = 0;
				bLocal_42 = false;
				break;
		}
	}
	if (bLocal_42)
	{
		iLocal_44 = unk_0x3B7BC5BC304ADDD9();
	}
	else
	{
		iLocal_44 = 0;
	}
}

void func_55()//Position - 0x3EFF
{
	StringCopy(&(Local_35[0 /*6*/]), "SXT_JUL_1ST", 24);
	StringCopy(&(Local_36[0 /*16*/]), "05_a_sext_stripperJuliet", 64);
	StringCopy(&(Local_35[1 /*6*/]), "SXT_JUL_2ND", 24);
	StringCopy(&(Local_36[1 /*16*/]), "05_b_sext_stripperJuliet", 64);
	StringCopy(&(Local_35[2 /*6*/]), "SXT_JUL_NEED", 24);
	StringCopy(&(Local_36[2 /*16*/]), "05_c_sext_stripperJuliet", 64);
	StringCopy(&(Local_35[3 /*6*/]), "MAPEMAIL_TXT", 24);
	StringCopy(&(Local_36[3 /*16*/]), "NHP_PHOTO_19", 64);
	StringCopy(&(Local_35[4 /*6*/]), "SXT_NIK_2ND", 24);
	StringCopy(&(Local_36[4 /*16*/]), "06_b_sext_stripperNikki", 64);
	StringCopy(&(Local_35[5 /*6*/]), "SXT_NIK_NEED", 24);
	StringCopy(&(Local_36[5 /*16*/]), "06_c_sext_stripperNikki", 64);
	StringCopy(&(Local_35[6 /*6*/]), "SXT_SAP_1ST", 24);
	StringCopy(&(Local_36[6 /*16*/]), "08_a_sext_stripperSapphire", 64);
	StringCopy(&(Local_35[7 /*6*/]), "SXT_SAP_2ND", 24);
	StringCopy(&(Local_36[7 /*16*/]), "08_b_sext_stripperSapphire", 64);
	StringCopy(&(Local_35[8 /*6*/]), "SXT_SAP_NEED", 24);
	StringCopy(&(Local_36[8 /*16*/]), "08_c_sext_stripperSapphire", 64);
	StringCopy(&(Local_35[9 /*6*/]), "SXT_INF_1ST", 24);
	StringCopy(&(Local_36[9 /*16*/]), "04_a_sext_stripperInfernus", 64);
	StringCopy(&(Local_35[10 /*6*/]), "SXT_INF_2ND", 24);
	StringCopy(&(Local_36[10 /*16*/]), "04_b_sext_stripperInfernus", 64);
	StringCopy(&(Local_35[11 /*6*/]), "SXT_INF_NEED", 24);
	StringCopy(&(Local_36[11 /*16*/]), "04_c_sext_stripperInfernus", 64);
	StringCopy(&(Local_35[12 /*6*/]), "SXT_TXI_1ST", 24);
	StringCopy(&(Local_36[12 /*16*/]), "11_a_sext_taxiLiz", 64);
	StringCopy(&(Local_35[13 /*6*/]), "SXT_TXI_2ND", 24);
	StringCopy(&(Local_36[13 /*16*/]), "11_b_sext_taxiLiz", 64);
	StringCopy(&(Local_35[14 /*6*/]), "SXT_TXI_NEED", 24);
	StringCopy(&(Local_36[14 /*16*/]), "11_c_sext_taxiLiz", 64);
	StringCopy(&(Local_35[15 /*6*/]), "SXT_HCH_1ST", 24);
	StringCopy(&(Local_36[15 /*16*/]), "10_a_sext_hitcherGirl", 64);
	StringCopy(&(Local_35[16 /*6*/]), "SXT_HCH_2ND", 24);
	StringCopy(&(Local_36[16 /*16*/]), "10_b_sext_hitcherGirl", 64);
	StringCopy(&(Local_35[17 /*6*/]), "SXT_HCH_NEED", 24);
	StringCopy(&(Local_36[17 /*16*/]), "10_c_sext_hitcherGirl", 64);
	StringCopy(&(Local_35[18 /*6*/]), "SOL2_PASS", 24);
	StringCopy(&(Local_36[18 /*16*/]), "executiveproducer", 64);
	StringCopy(&(Local_35[19 /*6*/]), "MAPEMAIL_TXT1", 24);
	StringCopy(&(Local_36[19 /*16*/]), "NHP_PHOTO_18", 64);
	StringCopy(&(Local_35[20 /*6*/]), "MAPEMAIL_TXT2", 24);
	StringCopy(&(Local_36[20 /*16*/]), "NHP_PHOTO_11", 64);
	StringCopy(&(Local_35[21 /*6*/]), "MAPEMAIL_TXT3", 24);
	StringCopy(&(Local_36[21 /*16*/]), "NHP_PHOTO_13", 64);
	StringCopy(&(Local_35[22 /*6*/]), "MAPEMAIL_TXT4", 24);
	StringCopy(&(Local_36[22 /*16*/]), "NHP_PHOTO_5", 64);
	StringCopy(&(Local_35[23 /*6*/]), "MAPEMAIL_TXT5", 24);
	StringCopy(&(Local_36[23 /*16*/]), "NHP_PHOTO_12", 64);
	StringCopy(&(Local_35[24 /*6*/]), "MAPEMAIL_TXT6", 24);
	StringCopy(&(Local_36[24 /*16*/]), "NHP_PHOTO_3", 64);
	StringCopy(&(Local_35[25 /*6*/]), "MAPEMAIL_TXT7", 24);
	StringCopy(&(Local_36[25 /*16*/]), "NHP_PHOTO_1", 64);
	StringCopy(&(Local_35[26 /*6*/]), "MAPEMAIL_TXT8", 24);
	StringCopy(&(Local_36[26 /*16*/]), "NHP_PHOTO_10", 64);
	StringCopy(&(Local_35[27 /*6*/]), "MAPEMAIL_TXT9", 24);
	StringCopy(&(Local_36[27 /*16*/]), "NHP_PHOTO_6", 64);
	StringCopy(&(Local_35[28 /*6*/]), "MAPEMAIL_TXT10", 24);
	StringCopy(&(Local_36[28 /*16*/]), "NHP_PHOTO_20", 64);
	StringCopy(&(Local_35[29 /*6*/]), "MAPEMAIL_TXT11", 24);
	StringCopy(&(Local_36[29 /*16*/]), "NHP_PHOTO_7", 64);
	StringCopy(&(Local_35[30 /*6*/]), "MAPEMAIL_TXT12", 24);
	StringCopy(&(Local_36[30 /*16*/]), "NHP_PHOTO_14", 64);
	StringCopy(&(Local_35[31 /*6*/]), "MAPEMAIL_TXT13", 24);
	StringCopy(&(Local_36[31 /*16*/]), "NHP_PHOTO_4", 64);
	StringCopy(&(Local_35[32 /*6*/]), "MAPEMAIL_TXT14", 24);
	StringCopy(&(Local_36[32 /*16*/]), "NHP_PHOTO_17", 64);
	StringCopy(&(Local_35[33 /*6*/]), "MAPEMAIL_TXT15", 24);
	StringCopy(&(Local_36[33 /*16*/]), "NHP_PHOTO_2", 64);
	StringCopy(&(Local_35[34 /*6*/]), "MAPEMAIL_TXT16", 24);
	StringCopy(&(Local_36[34 /*16*/]), "NHP_PHOTO_15", 64);
	StringCopy(&(Local_35[35 /*6*/]), "MAPEMAIL_TXT17", 24);
	StringCopy(&(Local_36[35 /*16*/]), "NHP_PHOTO_8", 64);
	StringCopy(&(Local_35[36 /*6*/]), "MAPEMAIL_TXT18", 24);
	StringCopy(&(Local_36[36 /*16*/]), "NHP_PHOTO_9", 64);
	StringCopy(&(Local_35[37 /*6*/]), "MAPEMAIL_TXT19", 24);
	StringCopy(&(Local_36[37 /*16*/]), "NHP_PHOTO_16", 64);
	StringCopy(&(Local_35[38 /*6*/]), "MC_EMAIL_0", 24);
	StringCopy(&(Local_36[38 /*16*/]), "NHP_prep_mines", 64);
	StringCopy(&(Local_35[39 /*6*/]), "BONEPIC1_TXT", 24);
	StringCopy(&(Local_36[39 /*16*/]), "", 64);
	StringCopy(&(Local_35[40 /*6*/]), "BONEPIC2_TXT", 24);
	StringCopy(&(Local_36[40 /*16*/]), "", 64);
	StringCopy(&(Local_35[41 /*6*/]), "BONEPIC3_TXT", 24);
	StringCopy(&(Local_36[41 /*16*/]), "", 64);
	StringCopy(&(Local_35[42 /*6*/]), "BONEPIC4_TXT", 24);
	StringCopy(&(Local_36[42 /*16*/]), "", 64);
	StringCopy(&(Local_35[43 /*6*/]), "BONEPIC5_TXT", 24);
	StringCopy(&(Local_36[43 /*16*/]), "", 64);
	StringCopy(&(Local_35[44 /*6*/]), "BONEPIC6_TXT", 24);
	StringCopy(&(Local_36[44 /*16*/]), "", 64);
	StringCopy(&(Local_35[45 /*6*/]), "BONEPIC7_TXT", 24);
	StringCopy(&(Local_36[45 /*16*/]), "", 64);
	StringCopy(&(Local_35[46 /*6*/]), "BONEPIC8_TXT", 24);
	StringCopy(&(Local_36[46 /*16*/]), "", 64);
	StringCopy(&(Local_35[47 /*6*/]), "BONEPIC9_TXT", 24);
	StringCopy(&(Local_36[47 /*16*/]), "", 64);
	StringCopy(&(Local_35[48 /*6*/]), "BONEPIC10_TXT", 24);
	StringCopy(&(Local_36[48 /*16*/]), "", 64);
	StringCopy(&(Local_35[49 /*6*/]), "BONEPIC11_TXT", 24);
	StringCopy(&(Local_36[49 /*16*/]), "", 64);
	StringCopy(&(Local_35[50 /*6*/]), "BONEPIC12_TXT", 24);
	StringCopy(&(Local_36[50 /*16*/]), "", 64);
	StringCopy(&(Local_35[51 /*6*/]), "BONEPIC13_TXT", 24);
	StringCopy(&(Local_36[51 /*16*/]), "", 64);
	StringCopy(&(Local_35[52 /*6*/]), "BONEPIC14_TXT", 24);
	StringCopy(&(Local_36[52 /*16*/]), "", 64);
	StringCopy(&(Local_35[53 /*6*/]), "BONEPIC15_TXT", 24);
	StringCopy(&(Local_36[53 /*16*/]), "", 64);
	StringCopy(&(Local_35[54 /*6*/]), "BONEPIC16_TXT", 24);
	StringCopy(&(Local_36[54 /*16*/]), "", 64);
	StringCopy(&(Local_35[55 /*6*/]), "BONEPIC17_TXT", 24);
	StringCopy(&(Local_36[55 /*16*/]), "", 64);
	StringCopy(&(Local_35[56 /*6*/]), "BONEPIC18_TXT", 24);
	StringCopy(&(Local_36[56 /*16*/]), "", 64);
	StringCopy(&(Local_35[57 /*6*/]), "BONEPIC19_TXT", 24);
	StringCopy(&(Local_36[57 /*16*/]), "", 64);
	StringCopy(&(Local_35[58 /*6*/]), "BONEPIC20_TXT", 24);
	StringCopy(&(Local_36[58 /*16*/]), "", 64);
}

void func_56()//Position - 0x44BC
{
	if (func_44() == 0)
	{
		unk_0x3D7D94BDD4D22C14(Global_386E[Global_3866 /*3*/]);
	}
	if (unk_0xB731B8C5BCE89836(joaat("cellphone_flashhand")) == 0)
	{
		func_57(0);
	}
	if (iLocal_37)
	{
		unk_0x786556581D95BCB2(&Local_34);
	}
	Global_41C2 = 0;
	Global_41C1 = 0;
	unk_0x95E4B6F3ED223F5A();
}

void func_57(int iParam0)//Position - 0x4504
{
	if (Global_3943)
	{
		func_59(0, 0);
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
	if (!func_58())
	{
		Global_389D.f_1 = 3;
	}
}

int func_58()//Position - 0x4574
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_59(bool bParam0, bool bParam1)//Position - 0x459B
{
	if (bParam0)
	{
		if (func_60(0))
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

int func_60(int iParam0)//Position - 0x460F
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

