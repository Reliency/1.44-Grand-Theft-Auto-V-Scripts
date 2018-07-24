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
	int iLocal_19[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	struct<6> Local_49[165];
	struct<6> Local_50[165];
	struct<8> Local_51[19];
	int iLocal_52 = 0;
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
		func_46();
	}
	func_41();
	Global_41E2 = 0;
	Global_19B04.f_36C6[Global_389D /*20*/].f_12 = 0;
	Global_3942 = 0;
	func_40(Global_388A, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_38();
	func_37();
	if (Global_389D.f_1 > 3)
	{
		Global_389D.f_1 = 7;
	}
	iLocal_30 = unk_0x105601648511CC64();
	Global_38A1 = 1;
	while (true)
	{
		SYSTEM::WAIT(0);
		if (iLocal_29 == 0)
		{
			iLocal_31 = unk_0x105601648511CC64();
			if ((iLocal_31 - iLocal_30) > 500)
			{
				iLocal_29 = 1;
			}
		}
		if (Global_389D.f_1 != 9)
		{
			switch (Global_389D.f_1)
			{
				case 7:
					if (Global_41E2 == 0)
					{
						if (Global_269667 == 0)
						{
							func_32();
							func_28();
						}
					}
					break;
				
				case 8:
					if (Global_41E2 == 1)
					{
						func_5();
						func_32();
					}
					break;
				
				default:
					break;
			}
			if (Global_41E2 == 0)
			{
				if (func_4())
				{
					func_46();
				}
			}
			else if (func_3(2, Global_387D, 0) || unk_0xFA30DFD0084E92FE(Global_93C, 12))
			{
				if (unk_0x3362CDE8460ED38B(&(Global_19B04.f_3720[iLocal_23 /*104*/]), "CELL_FINV"))
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
						func_46();
					}
					func_40(Global_388A, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_38();
					func_37();
					if (Global_19B04.f_3720[iLocal_23 /*104*/].f_1D > 0)
					{
						if (Global_19B04.f_3720[iLocal_23 /*104*/].f_1F == 1)
						{
							Global_19B04.f_3720[iLocal_23 /*104*/].f_1D = 4;
							Global_19B04.f_3720[iLocal_23 /*104*/].f_18 = 1;
						}
						else
						{
							Global_19B04.f_3720[iLocal_23 /*104*/].f_1D = 4;
							Global_19B04.f_3720[iLocal_23 /*104*/].f_18 = 1;
						}
					}
				}
			}
		}
		if (unk_0xB731B8C5BCE89836(joaat("cellphone_flashhand")) == 0)
		{
			func_46();
		}
		if (func_1())
		{
			func_46();
		}
	}
}

int func_1()//Position - 0x23A
{
	if (((Global_389D.f_1 == 1 || Global_389D.f_1 == 3) || Global_389D.f_1 == 0) || Global_3865 == 1)
	{
		Global_3890 = 1;
		return 1;
	}
	return 0;
}

void func_2()//Position - 0x27D
{
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0xC4BA30B532FE260F(-1, "Menu_Back", &Global_3892, 1);
	}
}

int func_3(int iParam0, int iParam1, int iParam2)//Position - 0x29E
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

int func_4()//Position - 0x310
{
	if (Global_B99 == 1 || Global_389D.f_1 < 7)
	{
		Global_3890 = 1;
		return 1;
	}
	return 0;
}

void func_5()//Position - 0x339
{
	func_6();
}

void func_6()//Position - 0x345
{
	if (Global_19B04.f_3720[iLocal_23 /*104*/].f_18 == 1)
	{
		if (Global_3887 == 0)
		{
			if (unk_0x694514BD37EC4E94(2, Global_3880))
			{
				func_2();
				Global_3887 = 1;
				func_22();
				if (Global_19B04.f_3720[iLocal_23 /*104*/].f_1B == 1)
				{
					Global_19B04.f_3720[iLocal_23 /*104*/].f_63[0] = 0;
					Global_19B04.f_3720[iLocal_23 /*104*/].f_63[1] = 0;
					Global_19B04.f_3720[iLocal_23 /*104*/].f_63[2] = 0;
				}
				else
				{
					Global_19B04.f_3720[iLocal_23 /*104*/].f_63[Global_389D] = 0;
				}
				if (func_21(iLocal_23))
				{
				}
				else
				{
					Global_19B04.f_3720[iLocal_23 /*104*/].f_18 = 0;
					Global_19B04.f_3720[iLocal_23 /*104*/].f_1C = 0;
				}
				unk_0x8C563C8EA840EA02(Global_19B04.f_3720[iLocal_23 /*104*/].f_10);
				func_40(Global_388A, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_38();
				if (iLocal_21 > 0)
				{
					iLocal_21 = (iLocal_21 - 1);
				}
				func_37();
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
			if (iLocal_25 == 1)
			{
				if (Global_389D.f_1 > 3)
				{
					StringCopy(&Global_10AA8, unk_0xFCB4C1AC11347344(&Global_41C9), 64);
					Global_10B29 = 7;
					unk_0xF0059F27F7BB6680(&Global_93C, 10);
					Global_389D.f_1 = 6;
				}
				func_46();
			}
		}
	}
	if (Global_19B04.f_3720[iLocal_23 /*104*/].f_1F == 1)
	{
		if (Global_3887 == 0)
		{
			if (func_3(2, Global_3881, 0))
			{
				func_18();
				Global_3887 = 1;
				Global_19B04.f_3720[iLocal_23 /*104*/].f_1D = 2;
				Global_19B04.f_3720[iLocal_23 /*104*/].f_18 = 1;
				Global_19B04.f_3720[iLocal_23 /*104*/].f_1F = 0;
				unk_0x7CB6FD92BE491AD9(&Global_93B, 17);
				Global_41E2 = 0;
				if (Global_389D.f_1 > 3)
				{
					Global_389D.f_1 = 7;
				}
				func_40(Global_388A, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_38();
				func_37();
			}
		}
	}
	if (Global_3887 == 0 && iLocal_29 == 1)
	{
		if (func_3(2, Global_387E, 0))
		{
			Global_3887 = 1;
			if (Global_19B04.f_3720[iLocal_23 /*104*/].f_1D > 0)
			{
				func_18();
				Global_19B04.f_3720[iLocal_23 /*104*/].f_1D = 3;
				Global_19B04.f_3720[iLocal_23 /*104*/].f_18 = 1;
				Global_41E2 = 0;
				if (Global_389D.f_1 > 3)
				{
					Global_389D.f_1 = 7;
				}
				func_40(Global_388A, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_38();
				func_37();
			}
			else if (Global_19B04.f_3720[iLocal_23 /*104*/].f_1E == 1)
			{
				func_18();
				Global_68E = 144;
				if (Global_389D.f_1 > 3)
				{
					Global_389D.f_1 = 10;
					if (func_17() == 0)
					{
						func_15();
					}
				}
				func_14("appContacts");
				Global_389B = SYSTEM::START_NEW_SCRIPT("appContacts", 4000);
				unk_0x91DEC7187FA01089("appContacts");
				Global_68E = Global_19B04.f_3720[iLocal_23 /*104*/].f_11;
				if (Global_19B04.f_6D75[Global_68E /*29*/].f_18[Global_389D] == 0)
				{
					func_13(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_75[Global_68E /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
				}
				else
				{
					func_13(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_19B04.f_6D75[Global_68E /*29*/].f_3), &(Global_19B04.f_6D75[Global_68E /*29*/].f_7), "CELL_211", &(Global_19B04.f_6D75[Global_68E /*29*/].f_3), 0);
				}
				func_7();
				func_46();
			}
		}
	}
}

void func_7()//Position - 0x6BE
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
			func_40(Global_388A, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_11(Global_B98);
			if (Global_B98 == 1)
			{
				func_40(Global_388A, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_38A1), -1082130432, -1082130432, -1082130432);
				Global_3889 = Global_38A1;
			}
			else
			{
				func_40(Global_388A, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_38A2), -1082130432, -1082130432, -1082130432);
				Global_3889 = Global_38A2;
			}
			if (Global_3891)
			{
				func_13(Global_388A, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_13(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_388A, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_13(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_3945 == 0)
			{
				func_13(Global_388A, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x7CB6FD92BE491AD9(&Global_93B, 17);
			}
			else if (Global_11542)
			{
				func_13(Global_388A, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x7CB6FD92BE491AD9(&Global_93B, 17);
			}
			else
			{
				if (Global_3944 == 1)
				{
					if (Global_3891)
					{
						func_13(Global_388A, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_13(Global_388A, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_3891)
				{
					func_13(Global_388A, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_13(Global_388A, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0xF0059F27F7BB6680(&Global_93B, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_40(Global_388A, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_13(Global_388A, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_13(Global_388A, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x7CB6FD92BE491AD9(&Global_93B, 17);
			if (unk_0xFA30DFD0084E92FE(Global_93B, 20))
			{
				func_13(Global_388A, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_3891)
			{
				func_13(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_3864)
				{
					func_13(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_13(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_389C == 1)
			{
				func_10();
				func_40(Global_388A, "SET_THEME", SYSTEM::TO_FLOAT(Global_19B04.f_36C6[Global_389D /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_3DC5)
				{
					unk_0x29CD142125FE177B(Global_388A, "SET_DATA_SLOT");
					unk_0x1E1FB49121565EB6(4);
					unk_0x1E1FB49121565EB6(0);
					unk_0x1E1FB49121565EB6(2);
					unk_0x57016C44F10111F0("CELL_CONDFON");
					unk_0x607C19B90D297FE2(&Global_3DC7);
					unk_0x64989E60CF560CA1();
					func_9("CELL_300");
					func_9("CELL_217");
					func_9("CELL_217");
					unk_0xF9FBC2F3F73D94C9();
				}
				else if (Global_19B04.f_6D75[Global_68E /*29*/].f_18[Global_389D] == 0)
				{
					func_13(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_75[Global_68E /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_13(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_19B04.f_6D75[Global_68E /*29*/].f_3), &(Global_19B04.f_6D75[Global_68E /*29*/].f_7), "CELL_217", &(Global_19B04.f_6D75[Global_68E /*29*/].f_3), 0);
				}
				func_40(Global_388A, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_3DB8 == 4 || Global_3DB8 == 3)
			{
				func_40(Global_388A, "SET_THEME", SYSTEM::TO_FLOAT(Global_19B04.f_36C6[Global_389D /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_10();
				if (Global_3DC5)
				{
					unk_0x29CD142125FE177B(Global_388A, "SET_DATA_SLOT");
					unk_0x1E1FB49121565EB6(4);
					unk_0x1E1FB49121565EB6(0);
					unk_0x1E1FB49121565EB6(2);
					unk_0x57016C44F10111F0("CELL_CONDFON");
					unk_0x607C19B90D297FE2(&Global_3DC7);
					unk_0x64989E60CF560CA1();
					func_9("CELL_300");
					func_9("CELL_219");
					func_9("CELL_219");
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
						func_40(Global_388A, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_13(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_75[Global_68E /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_40(Global_388A, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_13(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_19B04.f_6D75[Global_68E /*29*/].f_3), &(Global_19B04.f_6D75[Global_68E /*29*/].f_7), &cVar0, &(Global_19B04.f_6D75[Global_68E /*29*/].f_3), 0);
					}
				}
				func_40(Global_388A, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_8();
			break;
		
		default:
			break;
	}
}

void func_8()//Position - 0xC61
{
	if (unk_0xA7F138B5B1AB2CF6(Global_388A))
	{
		if (Global_389C == 1)
		{
			if (Global_3891)
			{
				func_13(Global_388A, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_388A, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_3DE7)
			{
				func_13(Global_388A, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0xFA30DFD0084E92FE(Global_93B, 20))
			{
				func_13(Global_388A, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_3891)
			{
				func_13(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_13(Global_388A, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x7CB6FD92BE491AD9(&Global_93B, 17);
		}
		else
		{
			func_13(Global_388A, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_13(Global_388A, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x7CB6FD92BE491AD9(&Global_93B, 17);
			if (unk_0xFA30DFD0084E92FE(Global_93B, 20))
			{
				func_13(Global_388A, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_3891)
			{
				func_13(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_3864)
				{
					func_13(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_13(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_9(char* sParam0)//Position - 0xDE1
{
	unk_0x57016C44F10111F0(sParam0);
	unk_0x64989E60CF560CA1();
}

void func_10()//Position - 0xDF3
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

void func_11(int iParam0)//Position - 0x106A
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
		if (func_12(14))
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
								func_9(&(Global_942[iVar1 /*15*/]));
								unk_0x1E1FB49121565EB6(iVar2);
								unk_0xF9FBC2F3F73D94C9();
							}
							if (Global_25805E)
							{
								if (iVar1 == 14)
								{
									func_13(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_41DF), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_13(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_41E4), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_13(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_13(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_13(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_41DF), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x29CD142125FE177B(Global_388A, "SET_DATA_SLOT");
								unk_0x1E1FB49121565EB6(1);
								unk_0x1E1FB49121565EB6(iVar0);
								unk_0x1E1FB49121565EB6(Global_942[iVar1 /*15*/].f_A);
								unk_0x1E1FB49121565EB6(0);
								func_9(&(Global_942[iVar1 /*15*/]));
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
								func_9(&(Global_942[iVar1 /*15*/]));
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
								func_9(&(Global_942[iVar1 /*15*/]));
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
								func_9(&(Global_942[iVar1 /*15*/]));
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
								func_9(&(Global_942[iVar1 /*15*/]));
								unk_0x1E1FB49121565EB6(42);
								unk_0xF9FBC2F3F73D94C9();
							}
							else if (Global_942[iVar1 /*15*/].f_A == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_18C323.f_1;
								func_13(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_13(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(0), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
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

bool func_12(int iParam0)//Position - 0x1602
{
	return Global_8C41 == iParam0;
}

void func_13(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x1610
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
		func_9(sParam7);
	}
	if (!unk_0xF1734B55490E9045(sParam8))
	{
		func_9(sParam8);
	}
	if (!unk_0xF1734B55490E9045(sParam9))
	{
		func_9(sParam9);
	}
	if (!unk_0xF1734B55490E9045(sParam10))
	{
		func_9(sParam10);
	}
	if (!unk_0xF1734B55490E9045(sParam11))
	{
		func_9(sParam11);
	}
	unk_0xF9FBC2F3F73D94C9();
}

void func_14(char* sParam0)//Position - 0x16C3
{
	unk_0x63831D2D5110C305(sParam0);
	while (!unk_0xACE95AD318CE412B(sParam0))
	{
		SYSTEM::WAIT(0);
	}
}

void func_15()//Position - 0x16E3
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (func_16() && unk_0x74AAB09D79A6344E(unk_0xBC25C936A095B5BA(), 0))
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

int func_16()//Position - 0x1806
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

int func_17()//Position - 0x182A
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
		if (func_12(14))
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

void func_18()//Position - 0x1A51
{
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0xC4BA30B532FE260F(-1, "Menu_Accept", &Global_3892, 1);
		func_19();
	}
}

void func_19()//Position - 0x1A76
{
	if (func_20())
	{
		unk_0x32A023E2F8F8566C(5);
	}
}

int func_20()//Position - 0x1A8A
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

int func_21(int iParam0)//Position - 0x1AD1
{
	if ((Global_19B04.f_3720[iParam0 /*104*/].f_63[0] == 1 || Global_19B04.f_3720[iParam0 /*104*/].f_63[1] == 1) || Global_19B04.f_3720[iParam0 /*104*/].f_63[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_22()//Position - 0x1B26
{
	if (func_12(14))
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
		Global_389D = func_23();
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

var func_23()//Position - 0x1BC8
{
	func_24();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_24()//Position - 0x1BE1
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_27(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_26(unk_0xBC25C936A095B5BA());
			if (func_25(iVar0) && (!func_12(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_25(Global_19B04.f_932.f_21B.f_10CD))
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

bool func_25(int iParam0)//Position - 0x1CDE
{
	return iParam0 < 3;
}

int func_26(int iParam0)//Position - 0x1CEA
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_27(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_27(int iParam0)//Position - 0x1D27
{
	if (func_25(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_28()//Position - 0x1D51
{
	struct<16> Var0;
	char* sVar1;
	int iVar2;
	
	if (Global_3887 == 0)
	{
		if ((func_3(2, Global_387E, 0) || Global_19B04.f_36C6[Global_389D /*20*/].f_11 == 1) || Global_41DC == 1)
		{
			if (Global_19B04.f_36C6[Global_389D /*20*/].f_11 == 0 && Global_41DC == 0)
			{
				func_18();
			}
			Global_3887 = 1;
			iLocal_29 = 0;
			iLocal_23 = iLocal_19[iLocal_21];
			if (Global_19B04.f_3720[iLocal_23 /*104*/].f_18 != 0)
			{
				if (Global_389D.f_1 > 3)
				{
					func_13(Global_388A, "SET_SOFT_KEYS", 1f, 0f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
					unk_0x7CB6FD92BE491AD9(&Global_93B, 17);
					Global_389D.f_1 = 8;
				}
				if (Global_19B04.f_36C6[Global_389D /*20*/].f_11 == 1 || Global_41DC == 1)
				{
					iLocal_23 = iLocal_19[0];
					iLocal_22 = 0;
					if (Global_19B04.f_36C6[Global_389D /*20*/].f_11 == 1)
					{
					}
					Global_41DC = 0;
				}
				else
				{
					SYSTEM::SETTIMERB(0);
					iLocal_27 = 0;
					unk_0x29CD142125FE177B(Global_388A, "GET_CURRENT_SELECTION");
					iLocal_32 = unk_0xC27A95D32A8160C0();
					while (!unk_0x3B6BD69AB08B86C2(iLocal_32) && iLocal_27 == 0)
					{
						SYSTEM::WAIT(0);
						if (SYSTEM::TIMERB() > 2000)
						{
							iLocal_27 = 1;
						}
					}
					if (iLocal_27 == 1)
					{
						iLocal_28 = 0;
					}
					else
					{
						iLocal_28 = unk_0x6AE1427A38313694(iLocal_32);
					}
					if (iLocal_28 < 0)
					{
						iLocal_28 = 0;
					}
					iLocal_23 = iLocal_19[iLocal_28];
					iLocal_22 = iLocal_28;
				}
				Global_19B04.f_3720[iLocal_23 /*104*/].f_1C = 1;
				iLocal_25 = 0;
				StringCopy(&Global_41C9, "NO_HYPERLINK", 64);
				Var0 = { Global_19B04.f_3720[iLocal_23 /*104*/] };
				StringConCat(&Var0, "_LINK", 64);
				if (unk_0x0F6F4C227FB5DD52(&Var0))
				{
					Global_41C9 = { Var0 };
					iLocal_25 = 1;
					if (Global_3891)
					{
						func_13(Global_388A, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, "CELL_267", 0, 0, 0, 0);
					}
					else
					{
						func_13(Global_388A, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					unk_0xF0059F27F7BB6680(&Global_93B, 17);
					Global_19B04.f_3720[iLocal_23 /*104*/].f_1A = 1;
					Global_19B04.f_3720[iLocal_23 /*104*/].f_18 = 2;
				}
				if (Global_19B04.f_3720[iLocal_23 /*104*/].f_1A == 0)
				{
					Global_19B04.f_3720[iLocal_23 /*104*/].f_18 = 1;
				}
				func_31();
				unk_0x29CD142125FE177B(Global_388A, "SET_DATA_SLOT");
				unk_0x1E1FB49121565EB6(7);
				unk_0x1E1FB49121565EB6(0);
				if (Global_19B04.f_3720[iLocal_23 /*104*/].f_11 == 145)
				{
					unk_0x57016C44F10111F0("CELL_2000");
					unk_0x607C19B90D297FE2(&(Global_19B04.f_3720[iLocal_23 /*104*/].f_32));
					unk_0x64989E60CF560CA1();
				}
				else
				{
					func_9(&(Global_19B04.f_6D75[Global_19B04.f_3720[iLocal_23 /*104*/].f_11 /*29*/].f_3));
				}
				switch (Global_19B04.f_3720[iLocal_23 /*104*/].f_20)
				{
					case 0:
						func_9(&(Global_19B04.f_3720[iLocal_23 /*104*/]));
						break;
					
					case 1:
						unk_0x57016C44F10111F0(&(Global_19B04.f_3720[iLocal_23 /*104*/]));
						unk_0x607C19B90D297FE2(&(Global_19B04.f_3720[iLocal_23 /*104*/].f_21));
						if (Global_19B04.f_3720[iLocal_23 /*104*/].f_42 == 1 && !unk_0x3362CDE8460ED38B(&(Global_19B04.f_3720[iLocal_23 /*104*/].f_43), "NULL"))
						{
							unk_0x607C19B90D297FE2(&(Global_19B04.f_3720[iLocal_23 /*104*/].f_43));
						}
						if ((Global_19B04.f_3720[iLocal_23 /*104*/].f_42 == 2 && !unk_0x3362CDE8460ED38B(&(Global_19B04.f_3720[iLocal_23 /*104*/].f_43), "NULL")) && !unk_0x3362CDE8460ED38B(&(Global_19B04.f_3720[iLocal_23 /*104*/].f_53), "NULL"))
						{
							if (unk_0x0F6F4C227FB5DD52(&(Global_19B04.f_3720[iLocal_23 /*104*/].f_43)))
							{
								unk_0xC9C304D0AABE1335(&(Global_19B04.f_3720[iLocal_23 /*104*/].f_43));
							}
							else
							{
								unk_0x607C19B90D297FE2(&(Global_19B04.f_3720[iLocal_23 /*104*/].f_43));
							}
							if (unk_0x0F6F4C227FB5DD52(&(Global_19B04.f_3720[iLocal_23 /*104*/].f_53)))
							{
								unk_0xC9C304D0AABE1335(&(Global_19B04.f_3720[iLocal_23 /*104*/].f_53));
							}
							else
							{
								unk_0x607C19B90D297FE2(&(Global_19B04.f_3720[iLocal_23 /*104*/].f_53));
							}
						}
						unk_0x64989E60CF560CA1();
						break;
					
					case 2:
						unk_0x57016C44F10111F0(&(Global_19B04.f_3720[iLocal_23 /*104*/]));
						unk_0xAA5C5BF0489E5553(Global_19B04.f_3720[iLocal_23 /*104*/].f_31);
						unk_0x64989E60CF560CA1();
						break;
					
					case 3:
						unk_0x57016C44F10111F0(&(Global_19B04.f_3720[iLocal_23 /*104*/]));
						unk_0x607C19B90D297FE2(&(Global_19B04.f_3720[iLocal_23 /*104*/].f_21));
						unk_0xAA5C5BF0489E5553(Global_19B04.f_3720[iLocal_23 /*104*/].f_31);
						if (Global_19B04.f_3720[iLocal_23 /*104*/].f_42 == 1 && !unk_0x3362CDE8460ED38B(&(Global_19B04.f_3720[iLocal_23 /*104*/].f_43), "NULL"))
						{
							unk_0x607C19B90D297FE2(&(Global_19B04.f_3720[iLocal_23 /*104*/].f_43));
						}
						if ((Global_19B04.f_3720[iLocal_23 /*104*/].f_42 == 2 && !unk_0x3362CDE8460ED38B(&(Global_19B04.f_3720[iLocal_23 /*104*/].f_43), "NULL")) && !unk_0x3362CDE8460ED38B(&(Global_19B04.f_3720[iLocal_23 /*104*/].f_53), "NULL"))
						{
							if (unk_0x0F6F4C227FB5DD52(&(Global_19B04.f_3720[iLocal_23 /*104*/].f_43)))
							{
								unk_0xC9C304D0AABE1335(&(Global_19B04.f_3720[iLocal_23 /*104*/].f_43));
							}
							else
							{
								unk_0x607C19B90D297FE2(&(Global_19B04.f_3720[iLocal_23 /*104*/].f_43));
							}
							if (unk_0x0F6F4C227FB5DD52(&(Global_19B04.f_3720[iLocal_23 /*104*/].f_53)))
							{
								unk_0xC9C304D0AABE1335(&(Global_19B04.f_3720[iLocal_23 /*104*/].f_53));
							}
							else
							{
								unk_0x607C19B90D297FE2(&(Global_19B04.f_3720[iLocal_23 /*104*/].f_53));
							}
						}
						unk_0x64989E60CF560CA1();
						break;
					
					case 4:
						func_30(iLocal_23);
						break;
					
					case 5:
						func_30(iLocal_23);
						break;
					
					case 6:
						func_30(iLocal_23);
						break;
					
					case 7:
						func_30(iLocal_23);
						break;
					
					case 8:
						func_30(iLocal_23);
						break;
					
					case 9:
						func_30(iLocal_23);
						break;
					
					case 10:
						func_30(iLocal_23);
						break;
					
					case 11:
						func_30(iLocal_23);
						break;
				}
				if (Global_41E5[iLocal_23] == 0)
				{
					func_9(&(Global_19B04.f_6D75[Global_19B04.f_3720[iLocal_23 /*104*/].f_11 /*29*/].f_7));
				}
				else
				{
					if (unk_0x516A8073F5BF5F0A(Global_41E5[iLocal_23]))
					{
						if (unk_0xEB606E770B747B2C(Global_41E5[iLocal_23]))
						{
							sVar1 = unk_0xF392EEDDF2FB749A(Global_41E5[iLocal_23]);
						}
						else
						{
							sVar1 = "CHAR_DEFAULT";
						}
					}
					else
					{
						sVar1 = "CHAR_DEFAULT";
					}
					unk_0x57016C44F10111F0("CELL_2000");
					unk_0x607C19B90D297FE2(sVar1);
					unk_0x64989E60CF560CA1();
				}
				unk_0xF9FBC2F3F73D94C9();
				Global_41E2 = 1;
				func_40(Global_388A, "DISPLAY_VIEW", 7f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_29(Global_388A, "SET_HEADER", "CELL_1", 0, 0, 0, 0);
				unk_0x8C563C8EA840EA02(Global_19B04.f_3720[iLocal_23 /*104*/].f_10);
				if (Global_19B04.f_3720[iLocal_23 /*104*/].f_1D > 0)
				{
					if (Global_3891)
					{
						func_13(Global_388A, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
					}
					else
					{
						func_13(Global_388A, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_19B04.f_3720[iLocal_23 /*104*/].f_1E == 1)
				{
					if (Global_3891)
					{
						func_13(Global_388A, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					}
					else
					{
						func_13(Global_388A, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else
				{
					func_13(Global_388A, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_19B04.f_3720[iLocal_23 /*104*/].f_1D > 0)
				{
					if (unk_0x3362CDE8460ED38B(&(Global_19B04.f_3720[iLocal_23 /*104*/]), "CELL_FINV"))
					{
						if (Global_3891)
						{
							func_13(Global_388A, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
						}
						else
						{
							func_13(Global_388A, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else if (Global_3891)
					{
						func_13(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
					}
					else
					{
						func_13(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_3891)
				{
					func_13(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_13(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_19B04.f_3720[iLocal_23 /*104*/].f_18 == 2)
				{
					if (Global_19B04.f_3720[iLocal_23 /*104*/].f_1F == 1)
					{
						iLocal_25 = 0;
						if (Global_3891)
						{
							func_13(Global_388A, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, "CELL_264", 0, 0, 0, 0);
						}
						else
						{
							func_13(Global_388A, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						unk_0xF0059F27F7BB6680(&Global_93B, 17);
					}
					else if (iLocal_25 == 0)
					{
						func_13(Global_388A, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						unk_0x7CB6FD92BE491AD9(&Global_93B, 17);
					}
				}
				else if (Global_3891)
				{
					func_13(Global_388A, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, "CELL_216", 0, 0, 0, 0);
					unk_0xF0059F27F7BB6680(&Global_93B, 17);
				}
				else
				{
					func_13(Global_388A, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, 0, 0, 0, 0, 0);
					unk_0xF0059F27F7BB6680(&Global_93B, 17);
				}
				Global_19B04.f_36C6[Global_389D /*20*/].f_12 = 0;
				Global_19B04.f_36C6[Global_389D /*20*/].f_11 = 0;
			}
			else
			{
				iVar2 = 0;
				if (Global_19B04.f_36C6[Global_389D /*20*/].f_11 == 1 || Global_41DC == 1)
				{
					if (Global_41DC)
					{
					}
					iVar2 = 1;
				}
				Global_19B04.f_36C6[Global_389D /*20*/].f_12 = 0;
				Global_19B04.f_36C6[Global_389D /*20*/].f_11 = 0;
				if (iVar2 == 1)
				{
					iVar2 = 0;
					Global_389D.f_1 = 3;
				}
			}
		}
		if (Global_269667 == 0)
		{
			if (Global_11542)
			{
				unk_0xD55638CE45B2B948(0, Global_3881);
				if (func_3(2, Global_3881, 0))
				{
					Global_3887 = 1;
					Global_269667 = 1;
				}
			}
		}
	}
}

void func_29(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)//Position - 0x26D1
{
	unk_0x29CD142125FE177B(iParam0, sParam1);
	func_9(sParam2);
	if (!unk_0xF1734B55490E9045(sParam3))
	{
		func_9(sParam3);
	}
	if (!unk_0xF1734B55490E9045(sParam4))
	{
		func_9(sParam4);
	}
	if (!unk_0xF1734B55490E9045(sParam5))
	{
		func_9(sParam5);
	}
	if (!unk_0xF1734B55490E9045(sParam6))
	{
		func_9(sParam6);
	}
	unk_0xF9FBC2F3F73D94C9();
}

void func_30(int iParam0)//Position - 0x272C
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

void func_31()//Position - 0x28CD
{
	int iVar0;
	
	if (iLocal_52)
	{
		unk_0x786556581D95BCB2(&uLocal_33);
	}
	iLocal_52 = 0;
	if (Global_19B04.f_3720[iLocal_23 /*104*/].f_18 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 165)
		{
			if (unk_0x3362CDE8460ED38B(&(Global_19B04.f_3720[iLocal_23 /*104*/]), &(Local_49[iVar0 /*6*/])))
			{
				if (iVar0 < 19)
				{
					MemCopy(&uLocal_33, {Local_51[iVar0 /*8*/]}, 16);
				}
				else
				{
					MemCopy(&uLocal_33, {Local_50[iVar0 /*6*/]}, 16);
				}
				iLocal_52 = 1;
				unk_0x8AA3F48A15444B98(&uLocal_33, 0);
				while (!unk_0x499783D01578C2D2(&uLocal_33))
				{
					SYSTEM::WAIT(100);
				}
			}
			iVar0++;
		}
	}
}

void func_32()//Position - 0x2968
{
	if (iLocal_26)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_26 = 0;
		}
	}
	if (iLocal_26 == 0)
	{
		if (func_3(2, Global_3885, 0) || unk_0x694514BD37EC4E94(2, 181))
		{
			if (iLocal_21 > 0)
			{
				iLocal_21 = (iLocal_21 - 1);
			}
			func_35();
			iLocal_26 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_3(2, Global_3886, 0) || unk_0x694514BD37EC4E94(2, 180))
		{
			iLocal_21++;
			if (iLocal_21 == iLocal_20)
			{
				iLocal_21 = 0;
			}
			func_33();
			iLocal_26 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_33()//Position - 0x29ED
{
	func_40(Global_388A, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xC4BA30B532FE260F(-1, "Menu_Navigate", &Global_3892, 1);
	func_34();
}

void func_34()//Position - 0x2A2A
{
	if (func_20())
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

void func_35()//Position - 0x2A4D
{
	func_40(Global_388A, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xC4BA30B532FE260F(-1, "Menu_Navigate", &Global_3892, 1);
	func_36();
}

void func_36()//Position - 0x2A8A
{
	if (func_20())
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

void func_37()//Position - 0x2AAD
{
	if (Global_19B04.f_36C6[Global_389D /*20*/].f_11 == 0)
	{
		if (iLocal_22 < 0)
		{
			iLocal_22 = 0;
		}
		func_40(Global_388A, "DISPLAY_VIEW", 6f, SYSTEM::TO_FLOAT(iLocal_22), -1082130432, -1082130432, -1082130432);
		func_29(Global_388A, "SET_HEADER", "CELL_1", 0, 0, 0, 0);
		if (Global_3891)
		{
			if (iLocal_20 > 0)
			{
				func_13(Global_388A, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_214", 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_388A, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_13(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			if (iLocal_20 > 0)
			{
				func_13(Global_388A, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_388A, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_13(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_11542)
		{
			func_13(Global_388A, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x7CB6FD92BE491AD9(&Global_93B, 17);
		}
		else
		{
			func_13(Global_388A, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x7CB6FD92BE491AD9(&Global_93B, 17);
		}
	}
	else
	{
		iLocal_22 = 0;
	}
}

void func_38()//Position - 0x2BE9
{
	int iVar0[35];
	int iVar1;
	int iVar2;
	int iVar3;
	
	iLocal_20 = 0;
	func_22();
	iVar1 = 0;
	while (iVar1 < 34)
	{
		if (unk_0xB731B8C5BCE89836(joaat("cellphone_flashhand")) == 0)
		{
			func_46();
		}
		iVar2 = 0;
		iVar3 = 34;
		Global_19B04.f_3720[iVar3 /*104*/].f_12 = -1;
		Global_19B04.f_3720[iVar3 /*104*/].f_12.f_1 = 0;
		Global_19B04.f_3720[iVar3 /*104*/].f_12.f_2 = 0;
		Global_19B04.f_3720[iVar3 /*104*/].f_12.f_3 = 0;
		Global_19B04.f_3720[iVar3 /*104*/].f_12.f_5 = 0;
		while (iVar2 < 35)
		{
			if (unk_0xB731B8C5BCE89836(joaat("cellphone_flashhand")) == 0)
			{
				func_46();
			}
			if (iVar0[iVar2] == 0)
			{
				if (Global_19B04.f_3720[iVar2 /*104*/].f_18 != 0)
				{
					if (Global_19B04.f_3720[iVar2 /*104*/].f_63[Global_389D] == 1)
					{
						if (func_39(Global_19B04.f_3720[iVar2 /*104*/].f_12, Global_19B04.f_3720[iVar3 /*104*/].f_12))
						{
							iVar3 = iVar2;
							if (Global_19B04.f_3720[iVar3 /*104*/].f_1C == 0)
							{
								iLocal_24 = 33;
							}
							else
							{
								iLocal_24 = 34;
							}
						}
					}
				}
			}
			iVar2++;
		}
		iLocal_19[iVar1] = iVar3;
		iVar0[iVar3] = 1;
		if (Global_19B04.f_3720[iVar3 /*104*/].f_18 != 0)
		{
			if (Global_19B04.f_3720[iVar3 /*104*/].f_63[Global_389D] == 1)
			{
				unk_0x29CD142125FE177B(Global_388A, "SET_DATA_SLOT");
				unk_0x1E1FB49121565EB6(6);
				unk_0x1E1FB49121565EB6(iVar1);
				unk_0x1E1FB49121565EB6(Global_19B04.f_3720[iVar3 /*104*/].f_12.f_2);
				unk_0x1E1FB49121565EB6(Global_19B04.f_3720[iVar3 /*104*/].f_12.f_1);
				unk_0x1E1FB49121565EB6(iLocal_24);
				if (Global_19B04.f_3720[iVar3 /*104*/].f_11 == 145)
				{
					unk_0x57016C44F10111F0("CELL_CONDFNH");
					unk_0x607C19B90D297FE2(&(Global_19B04.f_3720[iVar3 /*104*/].f_32));
					unk_0x64989E60CF560CA1();
				}
				else
				{
					func_9(&(Global_19B04.f_6D75[Global_19B04.f_3720[iVar3 /*104*/].f_11 /*29*/].f_3));
				}
				switch (Global_19B04.f_3720[iVar3 /*104*/].f_20)
				{
					case 0:
						func_9(&(Global_19B04.f_3720[iVar3 /*104*/]));
						break;
					
					case 1:
						unk_0x57016C44F10111F0(&(Global_19B04.f_3720[iVar3 /*104*/]));
						unk_0x607C19B90D297FE2(&(Global_19B04.f_3720[iVar3 /*104*/].f_21));
						if (Global_19B04.f_3720[iVar3 /*104*/].f_42 == 1 && !unk_0x3362CDE8460ED38B(&(Global_19B04.f_3720[iVar3 /*104*/].f_43), "NULL"))
						{
							unk_0x607C19B90D297FE2(&(Global_19B04.f_3720[iVar3 /*104*/].f_43));
						}
						if ((Global_19B04.f_3720[iVar3 /*104*/].f_42 == 2 && !unk_0x3362CDE8460ED38B(&(Global_19B04.f_3720[iVar3 /*104*/].f_43), "NULL")) && !unk_0x3362CDE8460ED38B(&(Global_19B04.f_3720[iVar3 /*104*/].f_53), "NULL"))
						{
							if (unk_0x0F6F4C227FB5DD52(&(Global_19B04.f_3720[iVar3 /*104*/].f_43)))
							{
								unk_0xC9C304D0AABE1335(&(Global_19B04.f_3720[iVar3 /*104*/].f_43));
							}
							else
							{
								unk_0x607C19B90D297FE2(&(Global_19B04.f_3720[iVar3 /*104*/].f_43));
							}
							if (unk_0x0F6F4C227FB5DD52(&(Global_19B04.f_3720[iVar3 /*104*/].f_53)))
							{
								unk_0xC9C304D0AABE1335(&(Global_19B04.f_3720[iVar3 /*104*/].f_53));
							}
							else
							{
								unk_0x607C19B90D297FE2(&(Global_19B04.f_3720[iVar3 /*104*/].f_53));
							}
						}
						unk_0x64989E60CF560CA1();
						break;
					
					case 2:
						unk_0x57016C44F10111F0(&(Global_19B04.f_3720[iVar3 /*104*/]));
						unk_0xAA5C5BF0489E5553(Global_19B04.f_3720[iVar3 /*104*/].f_31);
						unk_0x64989E60CF560CA1();
						break;
					
					case 3:
						unk_0x57016C44F10111F0(&(Global_19B04.f_3720[iVar3 /*104*/]));
						unk_0x607C19B90D297FE2(&(Global_19B04.f_3720[iVar3 /*104*/].f_21));
						unk_0xAA5C5BF0489E5553(Global_19B04.f_3720[iVar3 /*104*/].f_31);
						if (Global_19B04.f_3720[iVar3 /*104*/].f_42 == 1 && !unk_0x3362CDE8460ED38B(&(Global_19B04.f_3720[iVar3 /*104*/].f_43), "NULL"))
						{
							unk_0x607C19B90D297FE2(&(Global_19B04.f_3720[iVar3 /*104*/].f_43));
						}
						if ((Global_19B04.f_3720[iVar3 /*104*/].f_42 == 2 && !unk_0x3362CDE8460ED38B(&(Global_19B04.f_3720[iVar3 /*104*/].f_43), "NULL")) && !unk_0x3362CDE8460ED38B(&(Global_19B04.f_3720[iVar3 /*104*/].f_53), "NULL"))
						{
							if (unk_0x0F6F4C227FB5DD52(&(Global_19B04.f_3720[iVar3 /*104*/].f_43)))
							{
								unk_0xC9C304D0AABE1335(&(Global_19B04.f_3720[iVar3 /*104*/].f_43));
							}
							else
							{
								unk_0x607C19B90D297FE2(&(Global_19B04.f_3720[iVar3 /*104*/].f_43));
							}
							if (unk_0x0F6F4C227FB5DD52(&(Global_19B04.f_3720[iVar3 /*104*/].f_53)))
							{
								unk_0xC9C304D0AABE1335(&(Global_19B04.f_3720[iVar3 /*104*/].f_53));
							}
							else
							{
								unk_0x607C19B90D297FE2(&(Global_19B04.f_3720[iVar3 /*104*/].f_53));
							}
						}
						unk_0x64989E60CF560CA1();
						break;
					
					case 4:
						func_30(iVar3);
						break;
					
					case 5:
						func_30(iVar3);
						break;
					
					case 6:
						func_30(iVar3);
						break;
					
					case 7:
						func_30(iVar3);
						break;
					
					case 8:
						func_30(iVar3);
						break;
					
					case 9:
						func_30(iVar3);
						break;
					
					case 10:
						func_30(iVar3);
						break;
					
					case 11:
						func_30(iVar3);
						break;
				}
				unk_0xF9FBC2F3F73D94C9();
			}
		}
		if (Global_19B04.f_3720[iVar1 /*104*/].f_18 != 0)
		{
			if (Global_19B04.f_3720[iVar1 /*104*/].f_63[Global_389D] == 1)
			{
				iLocal_20++;
			}
		}
		iVar1++;
	}
}

int func_39(struct<6> Param0, struct<6> Param1)//Position - 0x312F
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

void func_40(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x321A
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

void func_41()//Position - 0x327D
{
	StringCopy(&(Local_49[0 /*6*/]), "SXT_JUL_1ST", 24);
	StringCopy(&(Local_51[0 /*8*/]), "05_a_sext_stripperJuliet", 32);
	StringCopy(&(Local_49[1 /*6*/]), "SXT_JUL_2ND", 24);
	StringCopy(&(Local_51[1 /*8*/]), "05_b_sext_stripperJuliet", 32);
	StringCopy(&(Local_49[2 /*6*/]), "SXT_JUL_NEED", 24);
	StringCopy(&(Local_51[2 /*8*/]), "05_c_sext_stripperJuliet", 32);
	StringCopy(&(Local_49[3 /*6*/]), "SXT_NIK_1ST", 24);
	StringCopy(&(Local_51[3 /*8*/]), "06_a_sext_stripperNikki", 32);
	StringCopy(&(Local_49[4 /*6*/]), "SXT_NIK_2ND", 24);
	StringCopy(&(Local_51[4 /*8*/]), "06_b_sext_stripperNikki", 32);
	StringCopy(&(Local_49[5 /*6*/]), "SXT_NIK_NEED", 24);
	StringCopy(&(Local_51[5 /*8*/]), "06_c_sext_stripperNikki", 32);
	StringCopy(&(Local_49[6 /*6*/]), "SXT_SAP_1ST", 24);
	StringCopy(&(Local_51[6 /*8*/]), "08_a_sext_stripperSapphire", 32);
	StringCopy(&(Local_49[7 /*6*/]), "SXT_SAP_2ND", 24);
	StringCopy(&(Local_51[7 /*8*/]), "08_b_sext_stripperSapphire", 32);
	StringCopy(&(Local_49[8 /*6*/]), "SXT_SAP_NEED", 24);
	StringCopy(&(Local_51[8 /*8*/]), "08_c_sext_stripperSapphire", 32);
	StringCopy(&(Local_49[9 /*6*/]), "SXT_INF_1ST", 24);
	StringCopy(&(Local_51[9 /*8*/]), "04_a_sext_stripperInfernus", 32);
	StringCopy(&(Local_49[10 /*6*/]), "SXT_INF_2ND", 24);
	StringCopy(&(Local_51[10 /*8*/]), "04_b_sext_stripperInfernus", 32);
	StringCopy(&(Local_49[11 /*6*/]), "SXT_INF_NEED", 24);
	StringCopy(&(Local_51[11 /*8*/]), "04_c_sext_stripperInfernus", 32);
	StringCopy(&(Local_49[12 /*6*/]), "SXT_TXI_1ST", 24);
	StringCopy(&(Local_51[12 /*8*/]), "11_a_sext_taxiLiz", 32);
	StringCopy(&(Local_49[13 /*6*/]), "SXT_TXI_2ND", 24);
	StringCopy(&(Local_51[13 /*8*/]), "11_b_sext_taxiLiz", 32);
	StringCopy(&(Local_49[14 /*6*/]), "SXT_TXI_NEED", 24);
	StringCopy(&(Local_51[14 /*8*/]), "11_c_sext_taxiLiz", 32);
	StringCopy(&(Local_49[15 /*6*/]), "SXT_HCH_1ST", 24);
	StringCopy(&(Local_51[15 /*8*/]), "10_a_sext_hitcherGirl", 32);
	StringCopy(&(Local_49[16 /*6*/]), "SXT_HCH_2ND", 24);
	StringCopy(&(Local_51[16 /*8*/]), "10_b_sext_hitcherGirl", 32);
	StringCopy(&(Local_49[17 /*6*/]), "SXT_HCH_NEED", 24);
	StringCopy(&(Local_51[17 /*8*/]), "10_c_sext_hitcherGirl", 32);
	StringCopy(&(Local_49[18 /*6*/]), "SOL2_PASS", 24);
	StringCopy(&(Local_51[18 /*8*/]), "executiveproducer", 32);
	StringCopy(&(Local_49[19 /*6*/]), "LR_PIC_TXT1", 24);
	StringCopy(&(Local_50[19 /*6*/]), "mt_phone_image_1", 24);
	StringCopy(&(Local_49[20 /*6*/]), "LR_PIC_TXT2", 24);
	StringCopy(&(Local_50[20 /*6*/]), "mt_phone_image_2", 24);
	StringCopy(&(Local_49[21 /*6*/]), "LR_PIC_TXT3", 24);
	StringCopy(&(Local_50[21 /*6*/]), "mt_phone_image_3", 24);
	StringCopy(&(Local_49[22 /*6*/]), "LR_PIC_TXT4", 24);
	StringCopy(&(Local_50[22 /*6*/]), "mt_phone_image_4", 24);
	StringCopy(&(Local_49[23 /*6*/]), "LR_PIC_TXT5", 24);
	StringCopy(&(Local_50[23 /*6*/]), "mt_phone_image_5", 24);
	StringCopy(&(Local_49[24 /*6*/]), "SAD_SMS_0", 24);
	StringCopy(&(Local_50[24 /*6*/]), "MP_SND_TARGET_01", 24);
	StringCopy(&(Local_49[25 /*6*/]), "SAD_SMS_1", 24);
	StringCopy(&(Local_50[25 /*6*/]), "MP_SND_TARGET_02", 24);
	StringCopy(&(Local_49[26 /*6*/]), "SAD_SMS_2", 24);
	StringCopy(&(Local_50[26 /*6*/]), "MP_SND_TARGET_03", 24);
	StringCopy(&(Local_49[27 /*6*/]), "SAD_SMS_3", 24);
	StringCopy(&(Local_50[27 /*6*/]), "MP_SND_TARGET_04", 24);
	StringCopy(&(Local_49[28 /*6*/]), "SAD_SMS_4", 24);
	StringCopy(&(Local_50[28 /*6*/]), "MP_SND_TARGET_05", 24);
	StringCopy(&(Local_49[29 /*6*/]), "SAD_SMS_5", 24);
	StringCopy(&(Local_50[29 /*6*/]), "MP_SND_TARGET_06", 24);
	StringCopy(&(Local_49[30 /*6*/]), "SAD_SMS_6", 24);
	StringCopy(&(Local_50[30 /*6*/]), "MP_SND_TARGET_07", 24);
	StringCopy(&(Local_49[31 /*6*/]), "SAD_SMS_7", 24);
	StringCopy(&(Local_50[31 /*6*/]), "MP_SND_TARGET_08", 24);
	StringCopy(&(Local_49[32 /*6*/]), "SAD_SMS_8", 24);
	StringCopy(&(Local_50[32 /*6*/]), "MP_SND_TARGET_09", 24);
	StringCopy(&(Local_49[33 /*6*/]), "SAD_SMS_9", 24);
	StringCopy(&(Local_50[33 /*6*/]), "MP_SND_TARGET_10", 24);
	StringCopy(&(Local_49[34 /*6*/]), "SAD_SMS_10", 24);
	StringCopy(&(Local_50[34 /*6*/]), "MP_SND_TARGET_11", 24);
	StringCopy(&(Local_49[35 /*6*/]), "SAD_SMS_11", 24);
	StringCopy(&(Local_50[35 /*6*/]), "MP_SND_TARGET_12", 24);
	StringCopy(&(Local_49[36 /*6*/]), "SAD_SMS_12", 24);
	StringCopy(&(Local_50[36 /*6*/]), "MP_SND_TARGET_13", 24);
	StringCopy(&(Local_49[37 /*6*/]), "SAD_SMS_13", 24);
	StringCopy(&(Local_50[37 /*6*/]), "MP_SND_TARGET_14", 24);
	StringCopy(&(Local_49[38 /*6*/]), "SAD_SMS_14", 24);
	StringCopy(&(Local_50[38 /*6*/]), "MP_SND_TARGET_15", 24);
	StringCopy(&(Local_49[39 /*6*/]), "SAD_SMS_15", 24);
	StringCopy(&(Local_50[39 /*6*/]), "MP_SND_TARGET_16", 24);
	StringCopy(&(Local_49[40 /*6*/]), "SAD_SMS_16", 24);
	StringCopy(&(Local_50[40 /*6*/]), "MP_SND_TARGET_17", 24);
	StringCopy(&(Local_49[41 /*6*/]), "SAD_SMS_17", 24);
	StringCopy(&(Local_50[41 /*6*/]), "MP_SND_TARGET_18", 24);
	StringCopy(&(Local_49[42 /*6*/]), "SAD_SMS_18", 24);
	StringCopy(&(Local_50[42 /*6*/]), "MP_SND_TARGET_19", 24);
	StringCopy(&(Local_49[43 /*6*/]), "SAD_SMS_19", 24);
	StringCopy(&(Local_50[43 /*6*/]), "MP_SND_TARGET_20", 24);
	StringCopy(&(Local_49[44 /*6*/]), "VEX_PM_PHOTO0", 24);
	StringCopy(&(Local_50[44 /*6*/]), "MP_EX_LOCATION_01", 24);
	StringCopy(&(Local_49[45 /*6*/]), "VEX_PM_PHOTO1", 24);
	StringCopy(&(Local_50[45 /*6*/]), "MP_EX_LOCATION_02", 24);
	StringCopy(&(Local_49[46 /*6*/]), "VEX_PM_PHOTO2", 24);
	StringCopy(&(Local_50[46 /*6*/]), "MP_EX_LOCATION_03", 24);
	StringCopy(&(Local_49[47 /*6*/]), "VEX_PM_PHOTO3", 24);
	StringCopy(&(Local_50[47 /*6*/]), "MP_EX_LOCATION_04", 24);
	StringCopy(&(Local_49[48 /*6*/]), "VEX_PM_PHOTO4", 24);
	StringCopy(&(Local_50[48 /*6*/]), "MP_EX_LOCATION_05", 24);
	StringCopy(&(Local_49[49 /*6*/]), "VEX_PM_PHOTO5", 24);
	StringCopy(&(Local_50[49 /*6*/]), "MP_EX_LOCATION_06", 24);
	StringCopy(&(Local_49[50 /*6*/]), "VEX_PM_PHOTO6", 24);
	StringCopy(&(Local_50[50 /*6*/]), "MP_EX_LOCATION_07", 24);
	StringCopy(&(Local_49[51 /*6*/]), "VEX_PM_PHOTO7", 24);
	StringCopy(&(Local_50[51 /*6*/]), "MP_EX_LOCATION_08", 24);
	StringCopy(&(Local_49[52 /*6*/]), "VEX_PM_PHOTO8", 24);
	StringCopy(&(Local_50[52 /*6*/]), "MP_EX_LOCATION_09", 24);
	StringCopy(&(Local_49[53 /*6*/]), "VEX_PM_PHOTO9", 24);
	StringCopy(&(Local_50[53 /*6*/]), "MP_EX_LOCATION_10", 24);
	StringCopy(&(Local_49[54 /*6*/]), "VEX_PM_PHOTO10", 24);
	StringCopy(&(Local_50[54 /*6*/]), "MP_EX_LOCATION_11", 24);
	StringCopy(&(Local_49[55 /*6*/]), "VEX_PM_PHOTO11", 24);
	StringCopy(&(Local_50[55 /*6*/]), "MP_EX_LOCATION_12", 24);
	StringCopy(&(Local_49[56 /*6*/]), "VEX_PM_PHOTO12", 24);
	StringCopy(&(Local_50[56 /*6*/]), "MP_EX_LOCATION_13", 24);
	StringCopy(&(Local_49[57 /*6*/]), "VEX_PM_PHOTO13", 24);
	StringCopy(&(Local_50[57 /*6*/]), "MP_EX_LOCATION_14", 24);
	StringCopy(&(Local_49[58 /*6*/]), "VEX_1_PROTO", 24);
	StringCopy(&(Local_50[58 /*6*/]), "IE_TEXTVECH_01", 24);
	StringCopy(&(Local_49[59 /*6*/]), "VEX_2_PROTO", 24);
	StringCopy(&(Local_50[59 /*6*/]), "IE_TEXTVECH_02", 24);
	StringCopy(&(Local_49[60 /*6*/]), "VEX_3_PROTO", 24);
	StringCopy(&(Local_50[60 /*6*/]), "IE_TEXTVECH_03", 24);
	StringCopy(&(Local_49[61 /*6*/]), "VEX_4_TYRUS", 24);
	StringCopy(&(Local_50[61 /*6*/]), "IE_TEXTVECH_04", 24);
	StringCopy(&(Local_49[62 /*6*/]), "VEX_5_TYRUS", 24);
	StringCopy(&(Local_50[62 /*6*/]), "IE_TEXTVECH_05", 24);
	StringCopy(&(Local_49[63 /*6*/]), "VEX_6_TYRUS", 24);
	StringCopy(&(Local_50[63 /*6*/]), "IE_TEXTVECH_06", 24);
	StringCopy(&(Local_49[64 /*6*/]), "VEX_7_BESTIA", 24);
	StringCopy(&(Local_50[64 /*6*/]), "IE_TEXTVECH_07", 24);
	StringCopy(&(Local_49[65 /*6*/]), "VEX_8_BESTIA", 24);
	StringCopy(&(Local_50[65 /*6*/]), "IE_TEXTVECH_08", 24);
	StringCopy(&(Local_49[66 /*6*/]), "VEX_9_BESTIA", 24);
	StringCopy(&(Local_50[66 /*6*/]), "IE_TEXTVECH_09", 24);
	StringCopy(&(Local_49[67 /*6*/]), "VEX_10_T20", 24);
	StringCopy(&(Local_50[67 /*6*/]), "IE_TEXTVECH_10", 24);
	StringCopy(&(Local_49[68 /*6*/]), "VEX_11_T20", 24);
	StringCopy(&(Local_50[68 /*6*/]), "IE_TEXTVECH_11", 24);
	StringCopy(&(Local_49[69 /*6*/]), "VEX_12_T20", 24);
	StringCopy(&(Local_50[69 /*6*/]), "IE_TEXTVECH_12", 24);
	StringCopy(&(Local_49[70 /*6*/]), "VEX_13_SHEAVA", 24);
	StringCopy(&(Local_50[70 /*6*/]), "IE_TEXTVECH_13", 24);
	StringCopy(&(Local_49[71 /*6*/]), "VEX_14_SHEAVA", 24);
	StringCopy(&(Local_50[71 /*6*/]), "IE_TEXTVECH_14", 24);
	StringCopy(&(Local_49[72 /*6*/]), "VEX_15_SHEAVA", 24);
	StringCopy(&(Local_50[72 /*6*/]), "IE_TEXTVECH_15", 24);
	StringCopy(&(Local_49[73 /*6*/]), "VEX_16_OSIRIS", 24);
	StringCopy(&(Local_50[73 /*6*/]), "IE_TEXTVECH_16", 24);
	StringCopy(&(Local_49[74 /*6*/]), "VEX_17_OSIRIS", 24);
	StringCopy(&(Local_50[74 /*6*/]), "IE_TEXTVECH_17", 24);
	StringCopy(&(Local_49[75 /*6*/]), "VEX_18_OSIRIS", 24);
	StringCopy(&(Local_50[75 /*6*/]), "IE_TEXTVECH_18", 24);
	StringCopy(&(Local_49[76 /*6*/]), "VEX_19_FMJ", 24);
	StringCopy(&(Local_50[76 /*6*/]), "IE_TEXTVECH_19", 24);
	StringCopy(&(Local_49[77 /*6*/]), "VEX_20_FMJ", 24);
	StringCopy(&(Local_50[77 /*6*/]), "IE_TEXTVECH_20", 24);
	StringCopy(&(Local_49[78 /*6*/]), "VEX_21_FMJ", 24);
	StringCopy(&(Local_50[78 /*6*/]), "IE_TEXTVECH_21", 24);
	StringCopy(&(Local_49[79 /*6*/]), "VEX_22_REAPER", 24);
	StringCopy(&(Local_50[79 /*6*/]), "IE_TEXTVECH_22", 24);
	StringCopy(&(Local_49[80 /*6*/]), "VEX_23_REAPER", 24);
	StringCopy(&(Local_50[80 /*6*/]), "IE_TEXTVECH_23", 24);
	StringCopy(&(Local_49[81 /*6*/]), "VEX_24_REAPER", 24);
	StringCopy(&(Local_50[81 /*6*/]), "IE_TEXTVECH_24", 24);
	StringCopy(&(Local_49[82 /*6*/]), "VEX_25_PFISTER", 24);
	StringCopy(&(Local_50[82 /*6*/]), "IE_TEXTVECH_25", 24);
	StringCopy(&(Local_49[83 /*6*/]), "VEX_26_PFISTER", 24);
	StringCopy(&(Local_50[83 /*6*/]), "IE_TEXTVECH_26", 24);
	StringCopy(&(Local_49[84 /*6*/]), "VEX_27_PFISTER", 24);
	StringCopy(&(Local_50[84 /*6*/]), "IE_TEXTVECH_27", 24);
	StringCopy(&(Local_49[85 /*6*/]), "VEX_28_ALPHA", 24);
	StringCopy(&(Local_50[85 /*6*/]), "IE_TEXTVECH_28", 24);
	StringCopy(&(Local_49[86 /*6*/]), "VEX_29_ALPHA", 24);
	StringCopy(&(Local_50[86 /*6*/]), "IE_TEXTVECH_29", 24);
	StringCopy(&(Local_49[87 /*6*/]), "VEX_30_ALPHA", 24);
	StringCopy(&(Local_50[87 /*6*/]), "IE_TEXTVECH_30", 24);
	StringCopy(&(Local_49[88 /*6*/]), "VEX_31_MAMBA", 24);
	StringCopy(&(Local_50[88 /*6*/]), "IE_TEXTVECH_31", 24);
	StringCopy(&(Local_49[89 /*6*/]), "VEX_32_MAMBA", 24);
	StringCopy(&(Local_50[89 /*6*/]), "IE_TEXTVECH_32", 24);
	StringCopy(&(Local_49[90 /*6*/]), "VEX_33_MAMBA", 24);
	StringCopy(&(Local_50[90 /*6*/]), "IE_TEXTVECH_33", 24);
	StringCopy(&(Local_49[91 /*6*/]), "VEX_34_TAMPA", 24);
	StringCopy(&(Local_50[91 /*6*/]), "IE_TEXTVECH_34", 24);
	StringCopy(&(Local_49[92 /*6*/]), "VEX_35_TAMPA", 24);
	StringCopy(&(Local_50[92 /*6*/]), "IE_TEXTVECH_35", 24);
	StringCopy(&(Local_49[93 /*6*/]), "VEX_36_TAMPA", 24);
	StringCopy(&(Local_50[93 /*6*/]), "IE_TEXTVECH_36", 24);
	StringCopy(&(Local_49[94 /*6*/]), "VEX_37_BTYPE", 24);
	StringCopy(&(Local_50[94 /*6*/]), "IE_TEXTVECH_37", 24);
	StringCopy(&(Local_49[95 /*6*/]), "VEX_38_BTYPE", 24);
	StringCopy(&(Local_50[95 /*6*/]), "IE_TEXTVECH_38", 24);
	StringCopy(&(Local_49[96 /*6*/]), "VEX_39_BTYPE", 24);
	StringCopy(&(Local_50[96 /*6*/]), "IE_TEXTVECH_39", 24);
	StringCopy(&(Local_49[97 /*6*/]), "VEX_40_FELTZ3", 24);
	StringCopy(&(Local_50[97 /*6*/]), "IE_TEXTVECH_40", 24);
	StringCopy(&(Local_49[98 /*6*/]), "VEX_41_FELTZ3", 24);
	StringCopy(&(Local_50[98 /*6*/]), "IE_TEXTVECH_41", 24);
	StringCopy(&(Local_49[99 /*6*/]), "VEX_42_FELTZ3", 24);
	StringCopy(&(Local_50[99 /*6*/]), "IE_TEXTVECH_42", 24);
	StringCopy(&(Local_49[100 /*6*/]), "VEX_43_ZTYPE", 24);
	StringCopy(&(Local_50[100 /*6*/]), "IE_TEXTVECH_43", 24);
	StringCopy(&(Local_49[101 /*6*/]), "VEX_44_ZTYPE", 24);
	StringCopy(&(Local_50[101 /*6*/]), "IE_TEXTVECH_44", 24);
	StringCopy(&(Local_49[102 /*6*/]), "VEX_45_ZTYPE", 24);
	StringCopy(&(Local_50[102 /*6*/]), "IE_TEXTVECH_45", 24);
	StringCopy(&(Local_49[103 /*6*/]), "VEX_46_TROPOS", 24);
	StringCopy(&(Local_50[103 /*6*/]), "IE_TEXTVECH_46", 24);
	StringCopy(&(Local_49[104 /*6*/]), "VEX_47_TROPOS", 24);
	StringCopy(&(Local_50[104 /*6*/]), "IE_TEXTVECH_47", 24);
	StringCopy(&(Local_49[105 /*6*/]), "VEX_48_TROPOS", 24);
	StringCopy(&(Local_50[105 /*6*/]), "IE_TEXTVECH_48", 24);
	StringCopy(&(Local_49[106 /*6*/]), "VEX_49_ENTITYXF", 24);
	StringCopy(&(Local_50[106 /*6*/]), "IE_TEXTVECH_49", 24);
	StringCopy(&(Local_49[107 /*6*/]), "VEX_50_ENTITYXF", 24);
	StringCopy(&(Local_50[107 /*6*/]), "IE_TEXTVECH_50", 24);
	StringCopy(&(Local_49[108 /*6*/]), "VEX_51_ENTITYXF", 24);
	StringCopy(&(Local_50[108 /*6*/]), "IE_TEXTVECH_51", 24);
	StringCopy(&(Local_49[109 /*6*/]), "VEX_52_SULTANRS", 24);
	StringCopy(&(Local_50[109 /*6*/]), "IE_TEXTVECH_52", 24);
	StringCopy(&(Local_49[110 /*6*/]), "VEX_53_SULTANRS", 24);
	StringCopy(&(Local_50[110 /*6*/]), "IE_TEXTVECH_53", 24);
	StringCopy(&(Local_49[111 /*6*/]), "VEX_54_SULTANRS", 24);
	StringCopy(&(Local_50[111 /*6*/]), "IE_TEXTVECH_54", 24);
	StringCopy(&(Local_49[112 /*6*/]), "VEX_55_ZENTORNO", 24);
	StringCopy(&(Local_50[112 /*6*/]), "IE_TEXTVECH_55", 24);
	StringCopy(&(Local_49[113 /*6*/]), "VEX_56_ZENTORNO", 24);
	StringCopy(&(Local_50[113 /*6*/]), "IE_TEXTVECH_56", 24);
	StringCopy(&(Local_49[114 /*6*/]), "VEX_57_ZENTORNO", 24);
	StringCopy(&(Local_50[114 /*6*/]), "IE_TEXTVECH_57", 24);
	StringCopy(&(Local_49[115 /*6*/]), "VEX_58_OMNIS", 24);
	StringCopy(&(Local_50[115 /*6*/]), "IE_TEXTVECH_58", 24);
	StringCopy(&(Local_49[116 /*6*/]), "VEX_59_OMNIS", 24);
	StringCopy(&(Local_50[116 /*6*/]), "IE_TEXTVECH_59", 24);
	StringCopy(&(Local_49[117 /*6*/]), "VEX_60_OMNIS", 24);
	StringCopy(&(Local_50[117 /*6*/]), "IE_TEXTVECH_60", 24);
	StringCopy(&(Local_49[118 /*6*/]), "VEX_61_COQUET3", 24);
	StringCopy(&(Local_50[118 /*6*/]), "IE_TEXTVECH_61", 24);
	StringCopy(&(Local_49[119 /*6*/]), "VEX_62_COQUET3", 24);
	StringCopy(&(Local_50[119 /*6*/]), "IE_TEXTVECH_62", 24);
	StringCopy(&(Local_49[120 /*6*/]), "VEX_63_COQUET3", 24);
	StringCopy(&(Local_50[120 /*6*/]), "IE_TEXTVECH_63", 24);
	StringCopy(&(Local_49[121 /*6*/]), "VEX_64_SEVEN70", 24);
	StringCopy(&(Local_50[121 /*6*/]), "IE_TEXTVECH_64", 24);
	StringCopy(&(Local_49[122 /*6*/]), "VEX_65_SEVEN70", 24);
	StringCopy(&(Local_50[122 /*6*/]), "IE_TEXTVECH_65", 24);
	StringCopy(&(Local_49[123 /*6*/]), "VEX_66_SEVEN70", 24);
	StringCopy(&(Local_50[123 /*6*/]), "IE_TEXTVECH_66", 24);
	StringCopy(&(Local_49[124 /*6*/]), "VEX_67_VERLI", 24);
	StringCopy(&(Local_50[124 /*6*/]), "IE_TEXTVECH_67", 24);
	StringCopy(&(Local_49[125 /*6*/]), "VEX_68_VERLI", 24);
	StringCopy(&(Local_50[125 /*6*/]), "IE_TEXTVECH_68", 24);
	StringCopy(&(Local_49[126 /*6*/]), "VEX_69_VERLI", 24);
	StringCopy(&(Local_50[126 /*6*/]), "IE_TEXTVECH_69", 24);
	StringCopy(&(Local_49[127 /*6*/]), "VEX_70_FELTZ2", 24);
	StringCopy(&(Local_50[127 /*6*/]), "IE_TEXTVECH_70", 24);
	StringCopy(&(Local_49[128 /*6*/]), "VEX_71_FELTZ2", 24);
	StringCopy(&(Local_50[128 /*6*/]), "IE_TEXTVECH_71", 24);
	StringCopy(&(Local_49[129 /*6*/]), "VEX_72_FELTZ2", 24);
	StringCopy(&(Local_50[129 /*6*/]), "IE_TEXTVECH_72", 24);
	StringCopy(&(Local_49[130 /*6*/]), "VEX_73_COQUET2", 24);
	StringCopy(&(Local_50[130 /*6*/]), "IE_TEXTVECH_73", 24);
	StringCopy(&(Local_49[131 /*6*/]), "VEX_74_COQUET2", 24);
	StringCopy(&(Local_50[131 /*6*/]), "IE_TEXTVECH_74", 24);
	StringCopy(&(Local_49[132 /*6*/]), "VEX_75_COQUET2", 24);
	StringCopy(&(Local_50[132 /*6*/]), "IE_TEXTVECH_75", 24);
	StringCopy(&(Local_49[133 /*6*/]), "VEX_76_CHEETAH", 24);
	StringCopy(&(Local_50[133 /*6*/]), "IE_TEXTVECH_76", 24);
	StringCopy(&(Local_49[134 /*6*/]), "VEX_77_CHEETAH", 24);
	StringCopy(&(Local_50[134 /*6*/]), "IE_TEXTVECH_77", 24);
	StringCopy(&(Local_49[135 /*6*/]), "VEX_78_CHEETAH", 24);
	StringCopy(&(Local_50[135 /*6*/]), "IE_TEXTVECH_78", 24);
	StringCopy(&(Local_49[136 /*6*/]), "VEX_79_NSHADE", 24);
	StringCopy(&(Local_50[136 /*6*/]), "IE_TEXTVECH_79", 24);
	StringCopy(&(Local_49[137 /*6*/]), "VEX_80_NSHADE", 24);
	StringCopy(&(Local_50[137 /*6*/]), "IE_TEXTVECH_80", 24);
	StringCopy(&(Local_49[138 /*6*/]), "VEX_81_NSHADE", 24);
	StringCopy(&(Local_50[138 /*6*/]), "IE_TEXTVECH_81", 24);
	StringCopy(&(Local_49[139 /*6*/]), "VEX_82_BANSH2", 24);
	StringCopy(&(Local_50[139 /*6*/]), "IE_TEXTVECH_82", 24);
	StringCopy(&(Local_49[140 /*6*/]), "VEX_83_BANSH2", 24);
	StringCopy(&(Local_50[140 /*6*/]), "IE_TEXTVECH_84", 24);
	StringCopy(&(Local_49[141 /*6*/]), "VEX_84_BANSH2", 24);
	StringCopy(&(Local_50[141 /*6*/]), "IE_TEXTVECH_85", 24);
	StringCopy(&(Local_49[142 /*6*/]), "VEX_82_TURIS", 24);
	StringCopy(&(Local_50[142 /*6*/]), "IE_TEXTVECH_83", 24);
	StringCopy(&(Local_49[143 /*6*/]), "VEX_86_TURIS", 24);
	StringCopy(&(Local_50[143 /*6*/]), "IE_TEXTVECH_86", 24);
	StringCopy(&(Local_49[144 /*6*/]), "VEX_87_TURIS", 24);
	StringCopy(&(Local_50[144 /*6*/]), "IE_TEXTVECH_87", 24);
	StringCopy(&(Local_49[145 /*6*/]), "VEX_88_MASS", 24);
	StringCopy(&(Local_50[145 /*6*/]), "IE_TEXTVECH_88", 24);
	StringCopy(&(Local_49[146 /*6*/]), "VEX_89_MASS", 24);
	StringCopy(&(Local_50[146 /*6*/]), "IE_TEXTVECH_89", 24);
	StringCopy(&(Local_49[147 /*6*/]), "VEX_90_MASS", 24);
	StringCopy(&(Local_50[147 /*6*/]), "IE_TEXTVECH_90", 24);
	StringCopy(&(Local_49[148 /*6*/]), "VEX_91_SABRE2", 24);
	StringCopy(&(Local_50[148 /*6*/]), "IE_TEXTVECH_91", 24);
	StringCopy(&(Local_49[149 /*6*/]), "VEX_92_SABRE2", 24);
	StringCopy(&(Local_50[149 /*6*/]), "IE_TEXTVECH_92", 24);
	StringCopy(&(Local_49[150 /*6*/]), "VEX_93_SABRE2", 24);
	StringCopy(&(Local_50[150 /*6*/]), "IE_TEXTVECH_93", 24);
	StringCopy(&(Local_49[151 /*6*/]), "VEX_94_JESTER", 24);
	StringCopy(&(Local_50[151 /*6*/]), "IE_TEXTVECH_94", 24);
	StringCopy(&(Local_49[152 /*6*/]), "VEX_95_JESTER", 24);
	StringCopy(&(Local_50[152 /*6*/]), "IE_TEXTVECH_95", 24);
	StringCopy(&(Local_49[153 /*6*/]), "VEX_96_JESTER", 24);
	StringCopy(&(Local_50[153 /*6*/]), "IE_TEXTVECH_96", 24);
	StringCopy(&(Local_49[154 /*6*/]), "GO_AS_PICM", 24);
	StringCopy(&(Local_50[154 /*6*/]), "NHP_prep_autosalvage", 24);
	StringCopy(&(Local_49[155 /*6*/]), "GO_DR_PICM", 24);
	StringCopy(&(Local_50[155 /*6*/]), "nhp_prep_daylightrob", 24);
	StringCopy(&(Local_49[156 /*6*/]), "FHTXT_DDR00M", 24);
	StringCopy(&(Local_50[156 /*6*/]), "NHP_prep_deaddrop", 24);
	StringCopy(&(Local_49[157 /*6*/]), "BBTXT_CPS00M", 24);
	StringCopy(&(Local_50[157 /*6*/]), "BAT_carpark_1", 24);
	StringCopy(&(Local_49[158 /*6*/]), "BBTXT_CPS10M", 24);
	StringCopy(&(Local_50[158 /*6*/]), "BAT_carpark_2", 24);
	StringCopy(&(Local_49[159 /*6*/]), "BBTXT_CPS20M", 24);
	StringCopy(&(Local_50[159 /*6*/]), "BAT_carpark_3", 24);
	if (func_42(unk_0xB5CEFD608600A09F()) == 19)
	{
		StringCopy(&(Local_49[44 /*6*/]), "SNP_IMG_0_0", 24);
		StringCopy(&(Local_50[44 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_49[45 /*6*/]), "SNP_IMG_0_1", 24);
		StringCopy(&(Local_50[45 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_49[46 /*6*/]), "SNP_IMG_0_2", 24);
		StringCopy(&(Local_50[46 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_49[47 /*6*/]), "SNP_IMG_0_3", 24);
		StringCopy(&(Local_50[47 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_49[48 /*6*/]), "SNP_IMG_0_4", 24);
		StringCopy(&(Local_50[48 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_49[49 /*6*/]), "SNP_IMG_0_5", 24);
		StringCopy(&(Local_50[49 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_49[50 /*6*/]), "SNP_IMG_0_6", 24);
		StringCopy(&(Local_50[50 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_49[51 /*6*/]), "SNP_IMG_0_7", 24);
		StringCopy(&(Local_50[51 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_49[52 /*6*/]), "SNP_IMG_0_8", 24);
		StringCopy(&(Local_50[52 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_49[53 /*6*/]), "SNP_IMG_0_9", 24);
		StringCopy(&(Local_50[53 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_49[54 /*6*/]), "SNP_IMG_1_0", 24);
		StringCopy(&(Local_50[54 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_49[55 /*6*/]), "SNP_IMG_1_1", 24);
		StringCopy(&(Local_50[55 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_49[56 /*6*/]), "SNP_IMG_1_2", 24);
		StringCopy(&(Local_50[56 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_49[57 /*6*/]), "SNP_IMG_1_3", 24);
		StringCopy(&(Local_50[57 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_49[58 /*6*/]), "SNP_IMG_1_4", 24);
		StringCopy(&(Local_50[58 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_49[59 /*6*/]), "SNP_IMG_1_5", 24);
		StringCopy(&(Local_50[59 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_49[60 /*6*/]), "SNP_IMG_1_6", 24);
		StringCopy(&(Local_50[60 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_49[61 /*6*/]), "SNP_IMG_1_7", 24);
		StringCopy(&(Local_50[61 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_49[62 /*6*/]), "SNP_IMG_1_8", 24);
		StringCopy(&(Local_50[62 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_49[64 /*6*/]), "SNP_IMG_1_9", 24);
		StringCopy(&(Local_50[64 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_49[65 /*6*/]), "SNP_IMG_2_0", 24);
		StringCopy(&(Local_50[65 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_49[66 /*6*/]), "SNP_IMG_2_1", 24);
		StringCopy(&(Local_50[66 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_49[67 /*6*/]), "SNP_IMG_2_2", 24);
		StringCopy(&(Local_50[67 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_49[68 /*6*/]), "SNP_IMG_2_3", 24);
		StringCopy(&(Local_50[68 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_49[69 /*6*/]), "SNP_IMG_2_4", 24);
		StringCopy(&(Local_50[69 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_49[70 /*6*/]), "SNP_IMG_2_5", 24);
		StringCopy(&(Local_50[70 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_49[71 /*6*/]), "SNP_IMG_2_6", 24);
		StringCopy(&(Local_50[71 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_49[72 /*6*/]), "SNP_IMG_2_7", 24);
		StringCopy(&(Local_50[72 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_49[73 /*6*/]), "SNP_IMG_2_8", 24);
		StringCopy(&(Local_50[73 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_49[74 /*6*/]), "SNP_IMG_2_9", 24);
		StringCopy(&(Local_50[74 /*6*/]), "SCLUB_3", 24);
	}
}

int func_42(int iParam0)//Position - 0x4512
{
	if (func_45(iParam0) == 237 || func_45(iParam0) == 250)
	{
		return func_43(iParam0);
	}
	return -1;
}

int func_43(int iParam0)//Position - 0x453F
{
	if (func_44(iParam0, 0))
	{
		return Global_18C80F[iParam0 /*558*/].f_B.f_B0;
	}
	return -1;
}

int func_44(int iParam0, int iParam1)//Position - 0x4562
{
	if (Global_18C80F[iParam0 /*558*/].f_B.f_21 != -1 || (iParam1 && Global_18C80F[iParam0 /*558*/].f_B.f_20 != -1))
	{
		return 1;
	}
	return 0;
}

int func_45(int iParam0)//Position - 0x459D
{
	if (func_44(iParam0, 0))
	{
		return Global_18C80F[iParam0 /*558*/].f_B.f_21;
	}
	return -1;
}

void func_46()//Position - 0x45C0
{
	if (unk_0xB731B8C5BCE89836(joaat("cellphone_flashhand")) == 0)
	{
		func_47(0);
	}
	if (iLocal_52)
	{
		unk_0x786556581D95BCB2(&uLocal_33);
	}
	unk_0x95E4B6F3ED223F5A();
}

void func_47(int iParam0)//Position - 0x45EA
{
	if (Global_3943)
	{
		func_49(0, 0);
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
	if (!func_48())
	{
		Global_389D.f_1 = 3;
	}
}

int func_48()//Position - 0x465A
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_49(bool bParam0, bool bParam1)//Position - 0x4681
{
	if (bParam0)
	{
		if (func_50(0))
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

int func_50(int iParam0)//Position - 0x46F5
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

