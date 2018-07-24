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
	char* sLocal_19 = NULL;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	int iLocal_29 = 0;
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
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	vector3 vLocal_47 = { 0f, 0f, 0f };
	vector3 vLocal_48 = { 0f, 0f, 0f };
	var uLocal_49 = 0;
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
	char* sLocal_65 = NULL;
	float fLocal_66 = 0f;
	int iLocal_67 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	
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
	sLocal_19 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	iLocal_29 = 3;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_56 = -1;
	iLocal_57 = -1;
	fLocal_66 = 0f;
	iLocal_67 = 1;
	if (Global_11542)
	{
		unk_0x95E4B6F3ED223F5A();
	}
	unk_0xC1A27D367CCA8C15();
	iLocal_51 = func_74();
	unk_0x900CF084251DED26("email", 1);
	while (!unk_0xFA9040D29FE330BD(1))
	{
		SYSTEM::WAIT(0);
	}
	Global_41C1 = 0;
	Global_41C2 = 0;
	Global_389D.f_1 = 8;
	Global_41C2 = 1;
	Global_90C4 = 1;
	if (Global_388B)
	{
		func_73(0);
		func_72(1);
		func_71(0);
	}
	SYSTEM::SETTIMERB(0);
	vLocal_47 = { Global_386E[Global_3866 /*3*/] };
	vLocal_48 = { vLocal_47 };
	vLocal_48.x = (vLocal_48.x - 10f);
	vLocal_48.y = (vLocal_48.y + 20f);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (Global_389D.f_1 != 9)
		{
			if (Global_41C2 && !Global_41C1)
			{
				func_69();
			}
			else if (Global_41C1)
			{
				func_64();
			}
			if (!iLocal_52)
			{
				iLocal_52 = 1;
			}
			else if (Global_388B)
			{
				if (!iLocal_53)
				{
					iLocal_53 = 1;
					func_62(Global_388A, iLocal_51);
					func_61(Global_388A, "SET_HEADER", "EM_INBOX", 0, 0, 0, 0);
					func_60(Global_388A, "DISPLAY_VIEW", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				else
				{
					if (Global_90C5)
					{
						Global_90C5 = 0;
						iLocal_54 = 1;
					}
					if (iLocal_54)
					{
						SYSTEM::SETTIMERA(0);
						SYSTEM::SETTIMERB(0);
						if (iLocal_56 == -1)
						{
							if (iLocal_67)
							{
								iLocal_67 = 0;
								fLocal_66 = 0f;
							}
							func_60(Global_388A, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
							iVar0 = func_62(Global_388A, iLocal_51);
							func_61(Global_388A, "SET_HEADER", "EM_INBOX", 0, 0, 0, 0);
							iLocal_55 = 0;
							if (iVar0 > 0)
							{
								func_73(1);
							}
							else
							{
								func_73(0);
							}
							func_72(1);
							func_71(0);
							func_60(Global_388A, "DISPLAY_VIEW", 8f, fLocal_66, -1082130432, -1082130432, -1082130432);
						}
						else
						{
							func_60(Global_388A, "SET_DATA_SLOT_EMPTY", 21f, -1082130432, -1082130432, -1082130432, -1082130432);
							SYSTEM::WAIT(0);
							func_60(Global_388A, "DISPLAY_VIEW", 21f, -1082130432, -1082130432, -1082130432, -1082130432);
							SYSTEM::WAIT(0);
							func_72(1);
							func_59();
							if (iLocal_57 == -1)
							{
								func_57(iLocal_51, iLocal_56);
								func_52(Global_388A, iLocal_51, iLocal_56);
								Global_41DC = 0;
								iLocal_64 = func_50(iLocal_51, iLocal_56);
								if (iLocal_64)
								{
									sLocal_65 = func_47(iLocal_51, iLocal_56);
									if (!func_46(37))
									{
										switch (func_44("AM_H_FLINK"))
										{
											case 2:
												func_41("AM_H_FLINK", 2, 0, 1000, 10000, 7, 0, 0, 0);
												break;
											
											case 1:
												func_40(37);
												break;
										}
									}
									else if (unk_0x8ACB0C3FACC09467())
									{
										if (!unk_0xFA30DFD0084E92FE(Global_411DCA, 17))
										{
											unk_0xF0059F27F7BB6680(&Global_411DCA, 17);
											func_39("AM_H_FLINK", -1);
										}
									}
									func_71(1);
								}
								else
								{
									if (!func_46(38))
									{
										switch (func_44("AM_H_SCROLL"))
										{
											case 2:
												func_41("AM_H_SCROLL", 2, 0, 1000, 10000, 7, 0, 0, 0);
												break;
											
											case 1:
												func_40(38);
												break;
											}
									}
									func_71(0);
								}
								func_60(Global_388A, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							else
							{
								func_60(Global_388A, "SET_DATA_SLOT_EMPTY", 21f, -1082130432, -1082130432, -1082130432, -1082130432);
								SYSTEM::WAIT(0);
								func_60(Global_388A, "DISPLAY_VIEW", 21f, -1082130432, -1082130432, -1082130432, -1082130432);
								SYSTEM::WAIT(0);
								func_60(Global_388A, "SET_DATA_SLOT_EMPTY", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
								func_36(Global_388A, iLocal_51, iLocal_56);
								func_60(Global_388A, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
						}
						iLocal_54 = 0;
					}
					else
					{
						func_13();
					}
				}
			}
			if (!iLocal_51 == func_74())
			{
				Global_90C4 = 0;
				func_4();
			}
		}
		if (func_3())
		{
			Global_41C1 = 0;
			Global_41C2 = 0;
			Global_90C4 = 0;
			func_1(0);
			unk_0x95E4B6F3ED223F5A();
		}
	}
}

void func_1(int iParam0)//Position - 0x492
{
	if (func_2())
	{
		if (iParam0 == 1)
		{
			unk_0x1D21497755DD8FB3(1);
		}
		else if (Global_389D.f_1 > 3)
		{
			unk_0x1D21497755DD8FB3(0);
		}
	}
}

int func_2()//Position - 0x4BD
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

int func_3()//Position - 0x504
{
	if (((Global_389D.f_1 == 1 || Global_389D.f_1 == 3) || Global_389D.f_1 == 0) || Global_3865 == 1)
	{
		Global_3890 = 1;
		return 1;
	}
	return 0;
}

void func_4()//Position - 0x547
{
	if (Global_B521 != -1)
	{
		unk_0x786556581D95BCB2(func_12(Global_B521));
		Global_B521 = -1;
	}
	Global_90C4 = 0;
	if (Global_389D.f_1 > 4)
	{
		Global_389D.f_1 = 6;
		func_5();
	}
	unk_0x95E4B6F3ED223F5A();
}

void func_5()//Position - 0x580
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
			func_60(Global_388A, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_10(Global_B98);
			if (Global_B98 == 1)
			{
				func_60(Global_388A, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_38A1), -1082130432, -1082130432, -1082130432);
				Global_3889 = Global_38A1;
			}
			else
			{
				func_60(Global_388A, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_38A2), -1082130432, -1082130432, -1082130432);
				Global_3889 = Global_38A2;
			}
			if (Global_3891)
			{
				func_9(Global_388A, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_9(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_9(Global_388A, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_9(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_3945 == 0)
			{
				func_9(Global_388A, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x7CB6FD92BE491AD9(&Global_93B, 17);
			}
			else if (Global_11542)
			{
				func_9(Global_388A, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x7CB6FD92BE491AD9(&Global_93B, 17);
			}
			else
			{
				if (Global_3944 == 1)
				{
					if (Global_3891)
					{
						func_9(Global_388A, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_9(Global_388A, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_3891)
				{
					func_9(Global_388A, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_9(Global_388A, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0xF0059F27F7BB6680(&Global_93B, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_60(Global_388A, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_9(Global_388A, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_9(Global_388A, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x7CB6FD92BE491AD9(&Global_93B, 17);
			if (unk_0xFA30DFD0084E92FE(Global_93B, 20))
			{
				func_9(Global_388A, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_3891)
			{
				func_9(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_3864)
				{
					func_9(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_9(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_389C == 1)
			{
				func_8();
				func_60(Global_388A, "SET_THEME", SYSTEM::TO_FLOAT(Global_19B04.f_36C6[Global_389D /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_3DC5)
				{
					unk_0x29CD142125FE177B(Global_388A, "SET_DATA_SLOT");
					unk_0x1E1FB49121565EB6(4);
					unk_0x1E1FB49121565EB6(0);
					unk_0x1E1FB49121565EB6(2);
					unk_0x57016C44F10111F0("CELL_CONDFON");
					unk_0x607C19B90D297FE2(&Global_3DC7);
					unk_0x64989E60CF560CA1();
					func_7("CELL_300");
					func_7("CELL_217");
					func_7("CELL_217");
					unk_0xF9FBC2F3F73D94C9();
				}
				else if (Global_19B04.f_6D75[Global_68E /*29*/].f_18[Global_389D] == 0)
				{
					func_9(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_75[Global_68E /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_9(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_19B04.f_6D75[Global_68E /*29*/].f_3), &(Global_19B04.f_6D75[Global_68E /*29*/].f_7), "CELL_217", &(Global_19B04.f_6D75[Global_68E /*29*/].f_3), 0);
				}
				func_60(Global_388A, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_3DB8 == 4 || Global_3DB8 == 3)
			{
				func_60(Global_388A, "SET_THEME", SYSTEM::TO_FLOAT(Global_19B04.f_36C6[Global_389D /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_8();
				if (Global_3DC5)
				{
					unk_0x29CD142125FE177B(Global_388A, "SET_DATA_SLOT");
					unk_0x1E1FB49121565EB6(4);
					unk_0x1E1FB49121565EB6(0);
					unk_0x1E1FB49121565EB6(2);
					unk_0x57016C44F10111F0("CELL_CONDFON");
					unk_0x607C19B90D297FE2(&Global_3DC7);
					unk_0x64989E60CF560CA1();
					func_7("CELL_300");
					func_7("CELL_219");
					func_7("CELL_219");
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
						func_60(Global_388A, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_9(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_75[Global_68E /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_60(Global_388A, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_9(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_19B04.f_6D75[Global_68E /*29*/].f_3), &(Global_19B04.f_6D75[Global_68E /*29*/].f_7), &cVar0, &(Global_19B04.f_6D75[Global_68E /*29*/].f_3), 0);
					}
				}
				func_60(Global_388A, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_6();
			break;
		
		default:
			break;
	}
}

void func_6()//Position - 0xB26
{
	if (unk_0xA7F138B5B1AB2CF6(Global_388A))
	{
		if (Global_389C == 1)
		{
			if (Global_3891)
			{
				func_9(Global_388A, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_9(Global_388A, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_3DE7)
			{
				func_9(Global_388A, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0xFA30DFD0084E92FE(Global_93B, 20))
			{
				func_9(Global_388A, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_3891)
			{
				func_9(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_9(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_9(Global_388A, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x7CB6FD92BE491AD9(&Global_93B, 17);
		}
		else
		{
			func_9(Global_388A, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_9(Global_388A, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x7CB6FD92BE491AD9(&Global_93B, 17);
			if (unk_0xFA30DFD0084E92FE(Global_93B, 20))
			{
				func_9(Global_388A, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_3891)
			{
				func_9(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_3864)
				{
					func_9(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_9(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_7(char* sParam0)//Position - 0xCA6
{
	unk_0x57016C44F10111F0(sParam0);
	unk_0x64989E60CF560CA1();
}

void func_8()//Position - 0xCB8
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

void func_9(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0xF2F
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
		func_7(sParam7);
	}
	if (!unk_0xF1734B55490E9045(sParam8))
	{
		func_7(sParam8);
	}
	if (!unk_0xF1734B55490E9045(sParam9))
	{
		func_7(sParam9);
	}
	if (!unk_0xF1734B55490E9045(sParam10))
	{
		func_7(sParam10);
	}
	if (!unk_0xF1734B55490E9045(sParam11))
	{
		func_7(sParam11);
	}
	unk_0xF9FBC2F3F73D94C9();
}

void func_10(int iParam0)//Position - 0xFE2
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
		if (func_11(14))
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
								func_7(&(Global_942[iVar1 /*15*/]));
								unk_0x1E1FB49121565EB6(iVar2);
								unk_0xF9FBC2F3F73D94C9();
							}
							if (Global_25805E)
							{
								if (iVar1 == 14)
								{
									func_9(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_41DF), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_9(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_41E4), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_9(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_9(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_9(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_41DF), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x29CD142125FE177B(Global_388A, "SET_DATA_SLOT");
								unk_0x1E1FB49121565EB6(1);
								unk_0x1E1FB49121565EB6(iVar0);
								unk_0x1E1FB49121565EB6(Global_942[iVar1 /*15*/].f_A);
								unk_0x1E1FB49121565EB6(0);
								func_7(&(Global_942[iVar1 /*15*/]));
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
								func_7(&(Global_942[iVar1 /*15*/]));
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
								func_7(&(Global_942[iVar1 /*15*/]));
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
								func_7(&(Global_942[iVar1 /*15*/]));
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
								func_7(&(Global_942[iVar1 /*15*/]));
								unk_0x1E1FB49121565EB6(42);
								unk_0xF9FBC2F3F73D94C9();
							}
							else if (Global_942[iVar1 /*15*/].f_A == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_18C323.f_1;
								func_9(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_9(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(0), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
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

bool func_11(int iParam0)//Position - 0x157A
{
	return Global_8C41 == iParam0;
}

char* func_12(int iParam0)//Position - 0x1588
{
	switch (iParam0)
	{
		case 0:
			return "Epsilon_Cars";
		
		case 1:
			return "Epsilon_Cars";
		
		case 2:
			return "Epsilon_Cars";
		
		case 3:
			return "Epsilon_Cars";
		
		case 4:
			return "Epsilon_Cars";
		
		case 5:
			return "Epsilon_Cars";
		
		case 6:
			return "Epsilon_Cars";
		
		case 12:
			return "Assassinations";
		
		case 13:
			return "Assassinations";
		
		case 14:
			return "Assassinations";
		
		case 15:
			return "Assassinations";
		
		case 64:
			return "BSPBadHacker";
		
		case 65:
			return "BPDGoodHacker";
		
		case 66:
			return "BPSMedHacker";
		
		case 75:
			return "email_quarry_bail_bond";
		
		case 76:
			return "email_abandonedfarm_bail_bond";
		
		case 77:
			return "email_mountain_bail_bond";
		
		case 78:
			return "email_hobocamp_bail_bond";
		
		case 80:
			return "email_quarry_bail_bond";
		
		case 81:
			return "email_abandonedfarm_bail_bond";
		
		case 82:
			return "email_mountain_bail_bond";
		
		case 83:
			return "email_hobocamp_bail_bond";
		
		case 205:
			return "hush_foxymama21";
		
		case 209:
			return "hush_alterego";
		
		case 212:
			return "hush_michael";
		
		case 238:
			return "hush_trevor";
		
		default:
	}
	return "NULL";
}

void func_13()//Position - 0x16E4
{
	bool bVar0;
	
	if (Global_41DC)
	{
		iLocal_56 = 0;
		fLocal_66 = SYSTEM::TO_FLOAT(iLocal_56);
		if (func_35(iLocal_51) == 0)
		{
			iLocal_56 = -1;
		}
		if (!iLocal_56 == -1)
		{
			Global_389D.f_1 = 8;
			iLocal_54 = 1;
			SYSTEM::SETTIMERB(0);
			func_33();
		}
		return;
	}
	if (func_32())
	{
		return;
	}
	if (Global_41C1)
	{
		return;
	}
	if (!iLocal_60)
	{
		if (unk_0x694514BD37EC4E94(2, 172) || unk_0x694514BD37EC4E94(2, 181))
		{
			iLocal_60 = 1;
			unk_0x29CD142125FE177B(Global_388A, "SET_INPUT_EVENT");
			unk_0x1E1FB49121565EB6(1);
			unk_0xF9FBC2F3F73D94C9();
			unk_0xC4BA30B532FE260F(-1, "Menu_Navigate", &Global_3892, 1);
			SYSTEM::SETTIMERA(0);
			iLocal_67 = 1;
		}
	}
	else if (unk_0x8FCEEB789599BD9B(2, 172) || unk_0x8FCEEB789599BD9B(2, 181))
	{
		if (SYSTEM::TIMERA() > 100 && iLocal_56 != -1)
		{
			unk_0x29CD142125FE177B(Global_388A, "SET_INPUT_EVENT");
			unk_0x1E1FB49121565EB6(1);
			unk_0xF9FBC2F3F73D94C9();
			SYSTEM::SETTIMERA(0);
			iLocal_67 = 1;
		}
	}
	else
	{
		iLocal_60 = 0;
	}
	if (!iLocal_61)
	{
		if (unk_0x694514BD37EC4E94(2, 173) || unk_0x694514BD37EC4E94(2, 180))
		{
			iLocal_61 = 1;
			unk_0x29CD142125FE177B(Global_388A, "SET_INPUT_EVENT");
			unk_0x1E1FB49121565EB6(3);
			unk_0xF9FBC2F3F73D94C9();
			unk_0xC4BA30B532FE260F(-1, "Menu_Navigate", &Global_3892, 1);
			SYSTEM::SETTIMERB(0);
			iLocal_67 = 1;
		}
	}
	else if (unk_0x8FCEEB789599BD9B(2, 173) || unk_0x8FCEEB789599BD9B(2, 180))
	{
		if (SYSTEM::TIMERB() > 100 && iLocal_56 != -1)
		{
			unk_0x29CD142125FE177B(Global_388A, "SET_INPUT_EVENT");
			unk_0x1E1FB49121565EB6(3);
			unk_0xF9FBC2F3F73D94C9();
			SYSTEM::SETTIMERB(0);
			iLocal_67 = 1;
		}
	}
	else
	{
		iLocal_61 = 0;
	}
	if (!iLocal_62)
	{
		if (unk_0x8FCEEB789599BD9B(2, 174))
		{
			iLocal_62 = 1;
			unk_0x29CD142125FE177B(Global_388A, "SET_INPUT_EVENT");
			unk_0x1E1FB49121565EB6(4);
			unk_0xF9FBC2F3F73D94C9();
			unk_0xC4BA30B532FE260F(-1, "Menu_Navigate", &Global_3892, 1);
		}
	}
	else if (!unk_0x8FCEEB789599BD9B(2, 174))
	{
		iLocal_62 = 0;
	}
	if (!iLocal_63)
	{
		if (unk_0x8FCEEB789599BD9B(2, 175))
		{
			iLocal_63 = 1;
			unk_0x29CD142125FE177B(Global_388A, "SET_INPUT_EVENT");
			unk_0x1E1FB49121565EB6(2);
			unk_0xF9FBC2F3F73D94C9();
			unk_0xC4BA30B532FE260F(-1, "Menu_Navigate", &Global_3892, 1);
		}
	}
	else if (!unk_0x8FCEEB789599BD9B(2, 175))
	{
		iLocal_63 = 0;
	}
	if (!iLocal_59)
	{
		if (unk_0x8FCEEB789599BD9B(2, 176) && SYSTEM::TIMERB() > 100)
		{
			if (iLocal_56 == -1)
			{
				unk_0x29CD142125FE177B(Global_388A, "GET_CURRENT_SELECTION");
				uLocal_49 = unk_0xC27A95D32A8160C0();
				while (!unk_0x3B6BD69AB08B86C2(uLocal_49))
				{
					SYSTEM::WAIT(0);
				}
				iLocal_50 = unk_0x6AE1427A38313694(uLocal_49);
				iLocal_56 = iLocal_50;
				if (func_35(iLocal_51) == 0)
				{
					iLocal_56 = -1;
				}
				if (!iLocal_56 == -1)
				{
					if (iLocal_67 == 1)
					{
						fLocal_66 = SYSTEM::TO_FLOAT(iLocal_56);
						iLocal_67 = 0;
					}
					Global_389D.f_1 = 8;
					iLocal_54 = 1;
					SYSTEM::SETTIMERB(0);
					func_33();
				}
			}
			else if (iLocal_57 == -1)
			{
				if (func_30(iLocal_51, iLocal_56) && !iLocal_55)
				{
					iLocal_57 = 0;
					iLocal_54 = 1;
					SYSTEM::SETTIMERB(0);
					func_33();
				}
			}
			else
			{
				iLocal_57 = 0;
				func_18(iLocal_51, iLocal_56, iLocal_57);
				iLocal_55 = 1;
				iLocal_57 = -1;
				iLocal_54 = 1;
				func_33();
				SYSTEM::SETTIMERB(0);
			}
			iLocal_59 = 1;
		}
	}
	else
	{
		iLocal_59 = 0;
	}
	if (SYSTEM::TIMERB() > 100)
	{
		if (unk_0x8FCEEB789599BD9B(2, 177))
		{
			bVar0 = false;
			if (iLocal_58 == 0)
			{
				if (!iLocal_56 == -1)
				{
					if (iLocal_57 == -1)
					{
						iLocal_56 = SYSTEM::ROUND(fLocal_66);
						iLocal_64 = 0;
						SYSTEM::SETTIMERB(0);
						bVar0 = true;
						func_17();
					}
					else
					{
						SYSTEM::SETTIMERB(0);
						iLocal_57 = -1;
						func_17();
					}
					iLocal_54 = 1;
				}
				else
				{
					if (func_44("AM_H_FLINK") == 0)
					{
						func_40(37);
					}
					if (func_44("AM_H_SCROLL") == 0)
					{
						func_40(38);
					}
					if (Global_41C2 == 0 && !Global_41C1)
					{
						func_17();
						Global_41C1 = 1;
						Global_90C4 = 0;
					}
				}
				iLocal_58 = 1;
			}
			if (bVar0)
			{
				iLocal_56 = -1;
			}
		}
		else
		{
			iLocal_58 = 0;
		}
	}
	if (unk_0x8FCEEB789599BD9B(2, 179))
	{
		if (iLocal_64)
		{
			if (func_44("AM_H_FLINK") == 0)
			{
				func_40(37);
			}
			if (func_44("AM_H_SCROLL") == 0)
			{
				func_40(38);
			}
			StringCopy(&Global_10AA8, sLocal_65, 64);
			func_14(7, 0, 0);
			iLocal_64 = 0;
			func_33();
		}
	}
}

int func_14(int iParam0, bool bParam1, int iParam2)//Position - 0x1ACA
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	Global_10B29 = iParam0;
	bVar0 = iParam2 == true;
	bVar1 = iParam2 == 2;
	bVar2 = iParam2 == 3;
	switch (Global_10B29)
	{
		case 3:
			Global_10B27 = 0;
			break;
		
		case 4:
			Global_10B27 = 3;
			break;
	}
	if (unk_0xB731B8C5BCE89836(joaat("appsecuroserv")) > 0)
	{
		if (bVar0)
		{
		}
		return 0;
	}
	if (unk_0xB731B8C5BCE89836(1476056117) > 0)
	{
		if (bVar1)
		{
		}
		return 0;
	}
	if (unk_0xB731B8C5BCE89836(290327540) > 0)
	{
		if (bVar2)
		{
		}
		return 0;
	}
	if (unk_0xB731B8C5BCE89836(joaat("appinternet")) > 0)
	{
		if ((bVar0 || bVar1) || bVar2)
		{
		}
		return 0;
	}
	if (Global_11542 && func_16())
	{
		return 0;
	}
	if (!Global_11542 && func_15())
	{
		return 0;
	}
	if (bVar0)
	{
		if (!unk_0xACE95AD318CE412B("appSecuroServ"))
		{
			unk_0x63831D2D5110C305("appSecuroServ");
			if (bParam1)
			{
				return 0;
			}
		}
		while (!unk_0xACE95AD318CE412B("appSecuroServ"))
		{
			SYSTEM::WAIT(0);
		}
		SYSTEM::START_NEW_SCRIPT("appSecuroServ", 4592);
		unk_0x91DEC7187FA01089("appSecuroServ");
		return 1;
	}
	if (bVar1)
	{
		if (!unk_0xACE95AD318CE412B("appBikerBusiness"))
		{
			unk_0x63831D2D5110C305("appBikerBusiness");
			if (bParam1)
			{
				return 0;
			}
		}
		while (!unk_0xACE95AD318CE412B("appBikerBusiness"))
		{
			SYSTEM::WAIT(0);
		}
		SYSTEM::START_NEW_SCRIPT("appBikerBusiness", 4592);
		unk_0x91DEC7187FA01089("appBikerBusiness");
		return 1;
	}
	if (bVar2)
	{
		if (!unk_0xACE95AD318CE412B("appImportExport"))
		{
			unk_0x63831D2D5110C305("appImportExport");
			if (bParam1)
			{
				return 0;
			}
		}
		while (!unk_0xACE95AD318CE412B("appImportExport"))
		{
			SYSTEM::WAIT(0);
		}
		SYSTEM::START_NEW_SCRIPT("appImportExport", 4592);
		unk_0x91DEC7187FA01089("appImportExport");
		return 1;
	}
	if (!unk_0xACE95AD318CE412B("appInternet"))
	{
		unk_0x63831D2D5110C305("appInternet");
		if (bParam1)
		{
			return 0;
		}
	}
	while (!unk_0xACE95AD318CE412B("appInternet"))
	{
		SYSTEM::WAIT(0);
	}
	SYSTEM::START_NEW_SCRIPT("appInternet", 4592);
	unk_0x91DEC7187FA01089("appInternet");
	return 1;
}

var func_15()//Position - 0x1CE5
{
	return Global_10AB9;
}

var func_16()//Position - 0x1CF1
{
	return Global_193B53;
}

void func_17()//Position - 0x1CFD
{
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0xC4BA30B532FE260F(-1, "Menu_Back", &Global_3892, 1);
	}
}

void func_18(int iParam0, int iParam1, int iParam2)//Position - 0x1D1F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 < -1 && iVar0 > 3)
	{
		return;
	}
	iVar1 = ((Global_B3B8[iVar0 /*120*/] - 1) - iParam1);
	while (iVar1 >= 16)
	{
		iVar1 = (iVar1 - 16);
	}
	iVar2 = iVar1;
	iVar3 = Global_B3B8[iVar0 /*120*/].f_12[iVar2];
	iVar4 = Global_B3B8[iVar0 /*120*/].f_1[iVar2];
	if (((iVar4 < 0 || iVar3 < 0) || !iVar4 < 9) || !iVar3 < 122)
	{
		return;
	}
	iVar5 = Global_9DCB[iVar3 /*46*/].f_20[iVar4];
	if (Global_90CE[iVar5 /*12*/].f_4 == 0)
	{
		return;
	}
	Global_B3B8[iVar0 /*120*/].f_23[iVar2] = 1;
	Global_B3B8[iVar0 /*120*/].f_34[iVar2] = iParam2;
	func_19(iVar3, iParam2);
}

void func_19(int iParam0, int iParam1)//Position - 0x1E19
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (!Global_9DCB[iParam0 /*46*/] && !Global_9DCB[iParam0 /*46*/].f_1)
	{
		return;
	}
	iVar0 = (Global_9DCB[iParam0 /*46*/].f_2A - 1);
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = Global_9DCB[iParam0 /*46*/].f_20[iVar0];
	if (!iParam1 < Global_90CE[iVar1 /*12*/].f_4)
	{
		return;
	}
	iVar2 = Global_90CE[iVar1 /*12*/].f_5[iParam1 /*4*/].f_1;
	bVar3 = false;
	if (Global_9DCB[iParam0 /*46*/].f_1F < (Global_9DCB[iParam0 /*46*/].f_1E - 1))
	{
		iVar4 = Global_9DCB[iParam0 /*46*/].f_8[Global_9DCB[iParam0 /*46*/].f_1F];
		if (iVar2 == iVar4)
		{
			bVar3 = true;
		}
	}
	if (!bVar3)
	{
		if (iVar2 > -1)
		{
			func_29(iParam0, iVar2);
			iVar5 = Global_9DCB[iParam0 /*46*/].f_2;
			iVar6 = 0;
			iVar7 = Global_90CE[iVar2 /*12*/].f_2;
			iVar6 = 0;
			while (iVar6 < iVar5)
			{
				if (!iVar6 == iVar7)
				{
					func_23(Global_9DCB[iParam0 /*46*/].f_3[iVar6], iParam0, 0, 0, 0);
				}
				iVar6++;
			}
		}
	}
	if (Global_90CE[iVar1 /*12*/].f_5[iParam1 /*4*/].f_3 > -1)
	{
		func_20(Global_90CE[iVar1 /*12*/].f_5[iParam1 /*4*/].f_3, 0);
	}
	if (Global_90CE[iVar1 /*12*/].f_5[iParam1 /*4*/].f_2)
	{
		Global_9DCB[iParam0 /*46*/].f_1 = 1;
	}
	else if (iVar2 > -1)
	{
		Global_9DCB[iParam0 /*46*/].f_2D = Global_90CE[iVar2 /*12*/].f_A;
		Global_9DCB[iParam0 /*46*/].f_2B = Global_90CE[iVar2 /*12*/].f_B;
	}
	else
	{
		Global_9DCB[iParam0 /*46*/].f_2D = 0;
	}
	if (Global_9DCB[iParam0 /*46*/].f_2B < 30000)
	{
		Global_9DCB[iParam0 /*46*/].f_2B = 30000;
	}
}

void func_20(int iParam0, bool bParam1)//Position - 0x1FBC
{
	Global_90C5 = 1;
	if (!Global_9DCB[iParam0 /*46*/] && !Global_9DCB[iParam0 /*46*/].f_1)
	{
		Global_9DCB[iParam0 /*46*/] = 1;
		func_22(iParam0, bParam1);
	}
	else
	{
		func_21(iParam0);
		func_20(iParam0, bParam1);
	}
}

void func_21(int iParam0)//Position - 0x2003
{
	Global_9DCB[iParam0 /*46*/] = 0;
	Global_9DCB[iParam0 /*46*/].f_1F = 0;
	Global_9DCB[iParam0 /*46*/].f_2A = 0;
	Global_9DCB[iParam0 /*46*/].f_2D = 0;
	Global_9DCB[iParam0 /*46*/].f_2B = 0;
	Global_9DCB[iParam0 /*46*/].f_1 = 0;
}

void func_22(int iParam0, bool bParam1)//Position - 0x2045
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!Global_9DCB[iParam0 /*46*/] && !Global_9DCB[iParam0 /*46*/].f_1)
	{
		return;
	}
	if (Global_9DCB[iParam0 /*46*/].f_1F == Global_9DCB[iParam0 /*46*/].f_1E)
	{
		iVar0 = (Global_9DCB[iParam0 /*46*/].f_2A - 1);
		if (iVar0 < 0)
		{
			return;
		}
		if (Global_90CE[Global_9DCB[iParam0 /*46*/].f_20[iVar0] /*12*/].f_4 == 0)
		{
			Global_9DCB[iParam0 /*46*/].f_1 = 1;
		}
		return;
	}
	if (Global_9DCB[iParam0 /*46*/].f_1)
	{
		return;
	}
	iVar1 = Global_9DCB[iParam0 /*46*/].f_8[Global_9DCB[iParam0 /*46*/].f_1F];
	Global_9DCB[iParam0 /*46*/].f_1F++;
	func_29(iParam0, iVar1);
	Global_9DCB[iParam0 /*46*/].f_2D = Global_90CE[iVar1 /*12*/].f_A;
	Global_9DCB[iParam0 /*46*/].f_2B = Global_90CE[iVar1 /*12*/].f_B;
	iVar2 = Global_9DCB[iParam0 /*46*/].f_2;
	func_23(Global_90CE[iVar1 /*12*/].f_3, iParam0, 0, 0, bParam1);
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		if (Global_9DCB[iParam0 /*46*/].f_3[iVar3] != Global_90CE[iVar1 /*12*/].f_2 && Global_9DCB[iParam0 /*46*/].f_3[iVar3] != Global_90CE[iVar1 /*12*/].f_3)
		{
			func_23(Global_9DCB[iParam0 /*46*/].f_3[iVar3], iParam0, 0, 0, bParam1);
		}
		iVar3++;
	}
	if (Global_9DCB[iParam0 /*46*/].f_1F == Global_9DCB[iParam0 /*46*/].f_1E)
	{
		if (Global_90CE[Global_9DCB[iParam0 /*46*/].f_20[(Global_9DCB[iParam0 /*46*/].f_2A - 1)] /*12*/].f_4 == 0)
		{
			Global_9DCB[iParam0 /*46*/].f_1 = 1;
			return;
		}
	}
}

void func_23(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x21E1
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (!iParam0 < 3)
	{
		return;
	}
	iVar0 = -1;
	StringCopy(&Var3, "UNSET", 64);
	if (!bParam2)
	{
		iVar4 = (Global_9DCB[iParam1 /*46*/].f_2A - 1);
		if (iVar4 < 0)
		{
			return;
		}
		iVar5 = Global_9DCB[iParam1 /*46*/].f_20[iVar4];
		iVar2 = iVar5;
		Var3 = { func_28(Global_90CE[iVar5 /*12*/].f_1) };
		if (Global_90CE[iVar5 /*12*/].f_2 == iParam0 && !Global_90CE[iVar5 /*12*/].f_3 == iParam0)
		{
			return;
		}
		iVar1 = Global_90CE[iVar5 /*12*/].f_2;
		iVar0 = Global_B3B8[iParam0 /*120*/];
		bVar6 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar6 = true;
		}
		if (bVar6)
		{
			if (!Global_B3B8[iParam0 /*120*/].f_45[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_90C6 = (Global_90C6 - 1);
						if (Global_90C6 < 0)
						{
							Global_90C6 = 0;
						}
						break;
					
					case 1:
						Global_90C7 = (Global_90C7 - 1);
						if (Global_90C7 < 0)
						{
							Global_90C7 = 0;
						}
						break;
					
					case 2:
						Global_90C8 = (Global_90C8 - 1);
						if (Global_90C8 < 0)
						{
							Global_90C8 = 0;
						}
						break;
					}
				}
		}
		Global_B3B8[iParam0 /*120*/].f_12[iVar0] = iParam1;
		Global_B3B8[iParam0 /*120*/].f_1[iVar0] = iVar4;
		Global_B3B8[iParam0 /*120*/].f_23[iVar0] = 0;
		Global_B3B8[iParam0 /*120*/].f_56[iVar0] = 0;
		Global_B3B8[iParam0 /*120*/].f_45[iVar0] = 0;
		Global_B3B8[iParam0 /*120*/]++;
	}
	else
	{
		iVar0 = Global_B3B8[iParam0 /*120*/];
		bVar7 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar7 = true;
		}
		if (bVar7)
		{
			if (!Global_B3B8[iParam0 /*120*/].f_45[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_90C6 = (Global_90C6 - 1);
						if (Global_90C6 < 0)
						{
							Global_90C6 = 0;
						}
						break;
					
					case 1:
						Global_90C7 = (Global_90C7 - 1);
						if (Global_90C7 < 0)
						{
							Global_90C7 = 0;
						}
						break;
					
					case 2:
						Global_90C8 = (Global_90C8 - 1);
						if (Global_90C8 < 0)
						{
							Global_90C8 = 0;
						}
						break;
					}
				}
		}
		iVar8 = -1;
		iVar9 = 0;
		iVar9 = 0;
		while (iVar9 < 7)
		{
			if (Global_B522[iVar9 /*203*/].f_1 == iParam1 && Global_B522[iVar9 /*203*/].f_9 > 0)
			{
				iVar8 = iVar9;
			}
			iVar9++;
		}
		if (iVar8 == -1)
		{
			return;
		}
		Global_B3B8[iParam0 /*120*/].f_12[iVar0] = Global_B522[iVar8 /*203*/].f_1;
		Global_B3B8[iParam0 /*120*/].f_1[iVar0] = (Global_B522[iVar8 /*203*/].f_9 - 1);
		Global_B3B8[iParam0 /*120*/].f_23[iVar0] = 0;
		Global_B3B8[iParam0 /*120*/].f_56[iVar0] = 1;
		Global_B3B8[iParam0 /*120*/].f_45[iVar0] = 0;
		Global_B3B8[iParam0 /*120*/]++;
		iVar10 = Global_B3B8[iParam0 /*120*/].f_1[iVar0];
		iVar11 = Global_B522[iVar8 /*203*/].f_A[iVar10 /*48*/];
		iVar2 = iVar11;
		iVar1 = Global_90CE[iVar11 /*12*/].f_2;
		if (Global_B522[iVar8 /*203*/].f_A[(Global_B522[iVar8 /*203*/].f_9 - 1) /*48*/].f_1)
		{
			MemCopy(&Var3, {Global_B522[iVar8 /*203*/].f_A[(Global_B522[iVar8 /*203*/].f_9 - 1) /*48*/].f_2}, 16);
		}
		else
		{
			Var3 = { func_28(Global_90CE[iVar11 /*12*/].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_B3B8[iParam0 /*120*/].f_45[iVar0] && !bParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_24(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				
				case 1:
					if (iVar2 == 249)
					{
						func_24(1, iVar1, iVar2, "PW_FEED_EM_1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_24(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					break;
				
				case 2:
					func_24(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				}
			}
	}
}

void func_24(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13)//Position - 0x25B6
{
	int iVar0;
	bool bVar1;
	char cVar2[64];
	
	if (unk_0x866EAD7E27D8D0F8())
	{
		return;
	}
	iVar0 = func_74();
	bVar1 = false;
	StringCopy(&cVar2, func_27(iParam1, &bVar1), 64);
	if (iVar0 == iParam0)
	{
		switch (iParam2)
		{
			case 72:
				unk_0x2E94302CFF011F2E("PROPR_INCEMAIL1");
				break;
			
			case 73:
				unk_0x2E94302CFF011F2E("PROPR_INCEMAIL3");
				break;
			
			case 74:
				unk_0x2E94302CFF011F2E("PROPR_INCEMAIL2");
				break;
			
			default:
				unk_0x2E94302CFF011F2E(sParam3);
				if (!unk_0xF1734B55490E9045(sParam4))
				{
					unk_0xC9C304D0AABE1335(sParam4);
				}
				if (!unk_0xF1734B55490E9045(sParam5))
				{
					unk_0xC9C304D0AABE1335(sParam5);
				}
				if (!unk_0xF1734B55490E9045(sParam6))
				{
					unk_0xC9C304D0AABE1335(sParam6);
				}
				if (!unk_0xF1734B55490E9045(sParam7))
				{
					unk_0xC9C304D0AABE1335(sParam7);
				}
				if (!unk_0xF1734B55490E9045(sParam8))
				{
					unk_0xC9C304D0AABE1335(sParam8);
				}
				if (!unk_0xF1734B55490E9045(sParam9))
				{
					unk_0xC9C304D0AABE1335(sParam9);
				}
				if (!unk_0xF1734B55490E9045(sParam10))
				{
					unk_0xC9C304D0AABE1335(sParam10);
				}
				if (!unk_0xF1734B55490E9045(sParam11))
				{
					unk_0xC9C304D0AABE1335(sParam11);
				}
				if (!unk_0xF1734B55490E9045(sParam12))
				{
					unk_0xC9C304D0AABE1335(sParam12);
				}
				if (!unk_0xF1734B55490E9045(sParam13))
				{
					unk_0xC9C304D0AABE1335(sParam13);
				}
				break;
		}
		if (bVar1)
		{
			func_25(unk_0x7BB0762D8C75A3C7(&cVar2, &cVar2, 0, 2, unk_0xFCB4C1AC11347344(func_26(iParam1)), 0));
		}
		else
		{
			func_25(unk_0x7BB0762D8C75A3C7("CHAR_DEFAULT", "CHAR_DEFAULT", 0, 2, unk_0xFCB4C1AC11347344(func_26(iParam1)), 0));
		}
		switch (Global_389D)
		{
			case 0:
				StringCopy(&Global_3892, "Phone_SoundSet_Michael", 24);
				Global_90C6++;
				if (Global_90C6 > 16)
				{
					Global_90C6 = 16;
				}
				break;
			
			case 2:
				StringCopy(&Global_3892, "Phone_SoundSet_Trevor", 24);
				Global_90C8++;
				if (Global_90C8 > 16)
				{
					Global_90C8 = 16;
				}
				break;
			
			case 1:
				StringCopy(&Global_3892, "Phone_SoundSet_Franklin", 24);
				Global_90C7++;
				if (Global_90C7 > 16)
				{
					Global_90C7 = 16;
				}
				break;
			
			default:
				StringCopy(&Global_3892, "Phone_SoundSet_Default", 24);
				break;
		}
		unk_0xC4BA30B532FE260F(-1, "Notification", &Global_3892, 1);
	}
}

void func_25(int iParam0)//Position - 0x279E
{
	Global_90C9[Global_90CD] = iParam0;
	Global_41DA = 1;
	Global_41D9 = iParam0;
	Global_90CD++;
	if (Global_90CD == 3)
	{
		Global_90CD = 0;
	}
}

char* func_26(int iParam0)//Position - 0x27CC
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_0";
		
		case 3:
			return "EMSTR_3";
		
		case 1:
			return "EMSTR_6";
		
		case 2:
			return "EMSTR_9";
		
		case 4:
			return "EMSTR_12";
		
		case 5:
			return "EMSTR_29";
		
		case 6:
			return "EMSTR_36";
		
		case 7:
			return "EMSTR_39";
		
		case 8:
			return "EMSTR_52";
		
		case 9:
			return "EMSTR_55";
		
		case 10:
			return "EMSTR_58";
		
		case 11:
			return "EMSTR_78";
		
		case 12:
			return "EMSTR_81";
		
		case 13:
			return "EMSTR_84";
		
		case 14:
			return "EMSTR_87";
		
		case 15:
			return "EMSTR_106";
		
		case 16:
			return "EMSTR_114";
		
		case 17:
			return "EMSTR_142";
		
		case 18:
			return "EMSTR_145";
		
		case 19:
			return "EMSTR_152";
		
		case 20:
			return "EMSTR_157";
		
		case 21:
			return "EMSTR_163";
		
		case 22:
			return "EMSTR_182";
		
		case 23:
			return "EMSTR_187";
		
		case 24:
			return "EMSTR_190";
		
		case 25:
			return "EMSTR_206";
		
		case 26:
			return "EMSTR_219";
		
		case 27:
			return "EMSTR_226";
		
		case 28:
			return "EMSTR_233";
		
		case 29:
			return "EMSTR_242";
		
		case 30:
			return "EMSTR_249";
		
		case 31:
			return "EMSTR_262";
		
		case 32:
			return "EMSTR_269";
		
		case 33:
			return "EMSTR_319";
		
		case 34:
			return "EMSTR_340";
		
		case 35:
			return "EMSTR_348";
		
		case 36:
			return "EMSTR_182";
		
		case 37:
			return "EMSTR_357";
		
		case 38:
			return "EMSTR_360";
		
		case 39:
			return "EMSTR_369";
		
		case 40:
			return "EMSTR_376";
		
		case 41:
			return "EMSTR_379";
		
		case 42:
			return "EMSTR_382";
		
		case 43:
			return "EMSTR_384";
		
		case 44:
			return "EMSTR_387";
		
		case 45:
			return "EMSTR_390";
		
		case 46:
			return "EMSTR_393";
		
		case 47:
			return "EMSTR_396";
		
		case 48:
			return "EMSTR_399";
		
		case 49:
			return "EMSTR_402";
		
		case 50:
			return "EMSTR_405";
		
		case 51:
			return "EMSTR_408";
		
		case 52:
			return "EMSTR_411";
		
		case 53:
			return "EMSTR_414";
		
		case 54:
			return "EMSTR_465";
		
		case 55:
			return "EMSTR_468";
		
		case 56:
			return "EMSTR_489";
		
		case 57:
			return "EMSTR_492";
		
		case 58:
			return "EMSTR_495";
		
		case 59:
			return "EMSTR_498";
		
		case 60:
			return "EMSTR_501";
		
		case 61:
			return "EMSTR_504";
		
		case 62:
			return "EMSTR_507";
		
		case 63:
			return "EMSTR_640";
		
		case 64:
			return "EMSTR_643";
		
		case 65:
			return "EMSTR_652";
		
		default:
	}
	return "NULL";
}

char* func_27(int iParam0, int iParam1)//Position - 0x2B37
{
	*iParam1 = 1;
	switch (iParam0)
	{
		case 0:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[0 /*29*/].f_7));
		
		case 1:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[1 /*29*/].f_7));
		
		case 2:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[2 /*29*/].f_7));
		
		case 7:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[12 /*29*/].f_7));
		
		case 4:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[60 /*29*/].f_7));
		
		case 6:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[62 /*29*/].f_7));
		
		case 3:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[14 /*29*/].f_7));
		
		case 16:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[97 /*29*/].f_7));
		
		case 19:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[99 /*29*/].f_7));
		
		case 15:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[96 /*29*/].f_7));
		
		case 63:
			return "CHAR_CARSITE2";
		
		case 64:
			return "CHAR_BOATSITE";
		
		case 8:
			return "CHAR_BANK_MAZE";
		
		case 9:
			return "CHAR_BANK_FLEECA";
		
		case 10:
			return "CHAR_BANK_BOL";
		
		case 21:
			return "CHAR_MINOTAUR";
		
		case 25:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[15 /*29*/].f_7));
		
		case 26:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[30 /*29*/].f_7));
		
		case 27:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[17 /*29*/].f_7));
		
		case 29:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[20 /*29*/].f_7));
		
		case 30:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[43 /*29*/].f_7));
		
		case 31:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[44 /*29*/].f_7));
		
		case 32:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[19 /*29*/].f_7));
		
		case 34:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[40 /*29*/].f_7));
		
		case 36:
			return unk_0xFCB4C1AC11347344("CELL_E_381");
		
		case 38:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[64 /*29*/].f_7));
		
		case 5:
			return "CHAR_EPSILON";
		
		case 13:
			return "CHAR_MILSITE";
		
		case 11:
			return "CHAR_CARSITE";
		
		case 14:
			return "CHAR_BOATSITE";
		
		case 12:
			return "CHAR_PLANESITE";
		
		case 24:
			return "CHAR_DR_FRIEDLANDER";
		
		case 55:
			return "CHAR_CARSITE2";
		
		case 54:
			return "CHAR_BIKESITE";
		
		case 39:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[122 /*29*/].f_7));
		
		case 40:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[125 /*29*/].f_7));
		
		case 41:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[113 /*29*/].f_7));
		
		case 42:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[126 /*29*/].f_7));
		
		case 43:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[127 /*29*/].f_7));
		
		case 44:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[124 /*29*/].f_7));
		
		case 45:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[114 /*29*/].f_7));
		
		case 46:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[115 /*29*/].f_7));
		
		case 47:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[116 /*29*/].f_7));
		
		case 48:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[123 /*29*/].f_7));
		
		case 49:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[117 /*29*/].f_7));
		
		case 50:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[118 /*29*/].f_7));
		
		case 51:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[119 /*29*/].f_7));
		
		case 52:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[120 /*29*/].f_7));
		
		case 53:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[121 /*29*/].f_7));
		
		default:
	}
	*iParam1 = 0;
	return "ERROR!";
}

struct<16> func_28(int iParam0)//Position - 0x2F8A
{
	struct<16> Var0;
	struct<16> Var1;
	
	if (iParam0 > -1)
	{
		StringCopy(&Var0, "EMSTR_", 64);
		StringIntConCat(&Var0, iParam0, 64);
		return Var0;
	}
	StringCopy(&Var1, "FAIL", 64);
	return Var1;
}

int func_29(int iParam0, int iParam1)//Position - 0x2FBB
{
	if (Global_9DCB[iParam0 /*46*/].f_2A >= 9)
	{
		return 0;
	}
	Global_9DCB[iParam0 /*46*/].f_20[Global_9DCB[iParam0 /*46*/].f_2A] = iParam1;
	Global_9DCB[iParam0 /*46*/].f_2A++;
	return 1;
}

int func_30(int iParam0, int iParam1)//Position - 0x3000
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	iVar1 = ((Global_B3B8[iVar0 /*120*/] - 1) - iParam1);
	while (iVar1 >= 16)
	{
		iVar1 = (iVar1 - 16);
	}
	iVar2 = iVar1;
	if (!Global_B3B8[iVar0 /*120*/].f_56[iVar2])
	{
		iVar3 = Global_B3B8[iVar0 /*120*/].f_12[iVar2];
		iVar4 = Global_B3B8[iVar0 /*120*/].f_1[iVar2];
		iVar5 = Global_9DCB[iVar3 /*46*/].f_20[iVar4];
		if (Global_90CE[iVar5 /*12*/].f_4 == 0)
		{
			return 0;
		}
		if (Global_B3B8[iVar0 /*120*/].f_23[iVar2] == 1)
		{
			return 0;
		}
		if (!func_31(iVar0, iVar2))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

int func_31(int iParam0, int iParam1)//Position - 0x30DF
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!iParam0 < 3)
	{
		return 0;
	}
	iVar0 = Global_B3B8[iParam0 /*120*/].f_1[iParam1];
	iVar1 = Global_B3B8[iParam0 /*120*/].f_12[iParam1];
	if (!(Global_9DCB[iVar1 /*46*/] && !Global_9DCB[iVar1 /*46*/].f_1))
	{
		return 0;
	}
	if (!iVar0 == (Global_9DCB[iVar1 /*46*/].f_2A - 1))
	{
		return 0;
	}
	iVar2 = Global_9DCB[iVar1 /*46*/].f_20[(Global_9DCB[iVar1 /*46*/].f_2A - 1)];
	if (Global_90CE[iVar2 /*12*/].f_4 > 0)
	{
		return 1;
	}
	return 0;
}

bool func_32()//Position - 0x316F
{
	return Global_10AB8;
}

void func_33()//Position - 0x317B
{
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0xC4BA30B532FE260F(-1, "Menu_Accept", &Global_3892, 1);
		func_34();
	}
}

void func_34()//Position - 0x31A1
{
	if (func_2())
	{
		unk_0x32A023E2F8F8566C(5);
	}
}

int func_35(int iParam0)//Position - 0x31B5
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	return Global_B3B8[iVar0 /*120*/];
}

void func_36(int iParam0, int iParam1, int iParam2)//Position - 0x31F2
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
	struct<16> Var9;
	struct<16> Var10;
	
	iVar0 = -1;
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = ((Global_B3B8[iVar0 /*120*/] - 1) - iParam2);
	while (iVar1 >= 16)
	{
		iVar1 = (iVar1 - 16);
	}
	iVar2 = iVar1;
	if (!Global_B3B8[iVar0 /*120*/].f_56[iVar2])
	{
		iVar3 = Global_B3B8[iVar0 /*120*/].f_12[iVar2];
		iVar4 = Global_B3B8[iVar0 /*120*/].f_1[iVar2];
		iVar5 = Global_9DCB[iVar3 /*46*/].f_20[iVar4];
		if (Global_90CE[iVar5 /*12*/].f_4 == 0)
		{
			return;
		}
		iVar6 = 0;
		iVar7 = Global_90CE[iVar5 /*12*/].f_4;
		if (iVar7 > 1)
		{
			iVar7 = 1;
		}
		iVar6 = 0;
		while (iVar6 < iVar7)
		{
			iVar8 = Global_90CE[iVar5 /*12*/].f_5[iVar6 /*4*/].f_1;
			Var9 = { func_28(Global_90CE[iVar8 /*12*/].f_1) };
			Var10 = { func_28(Global_90CE[iVar8 /*12*/].f_1) };
			unk_0x29CD142125FE177B(iParam0, "SET_DATA_SLOT");
			unk_0x1E1FB49121565EB6(9);
			unk_0x1E1FB49121565EB6(0);
			func_7("");
			func_7("");
			func_7("EM_RESPONSE_NEW");
			func_7(&Var10);
			func_7(func_38(Global_90CE[iVar8 /*12*/].f_2));
			func_37(iVar8, Global_90CE[iVar8 /*12*/].f_2);
			unk_0xF9FBC2F3F73D94C9();
			iVar6++;
		}
	}
}

void func_37(int iParam0, int iParam1)//Position - 0x335B
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 55:
		case 57:
		case 58:
		case 59:
		case 62:
		case 63:
		case 40:
		case 41:
		case 42:
			unk_0x6A664E53A192232C("EmailAds_Elitas_Travel");
			unk_0x5E5DBD0A6623969E(true);
			return;
		
		case 37:
		case 38:
		case 39:
		case 60:
		case 61:
		case 56:
			unk_0x6A664E53A192232C("EmailAds_Dock_Tease");
			unk_0x5E5DBD0A6623969E(true);
			return;
		
		case 34:
		case 35:
		case 36:
			unk_0x6A664E53A192232C("EmailAds_Warstock");
			unk_0x5E5DBD0A6623969E(true);
			return;
		
		case 31:
		case 32:
		case 33:
			unk_0x6A664E53A192232C("EmailAds_Legendary_Motorsport");
			unk_0x5E5DBD0A6623969E(true);
			return;
		
		default:
	}
	switch (iParam1)
	{
		case 13:
			unk_0x6A664E53A192232C("EmailAds_Warstock");
			unk_0x5E5DBD0A6623969E(true);
			return;
		
		case 15:
			unk_0x6A664E53A192232C("EmailAds_LS_Customs");
			unk_0x5E5DBD0A6623969E(true);
			return;
		
		case 19:
			unk_0x6A664E53A192232C("EmailAds_LS_Tourist_Info");
			unk_0x5E5DBD0A6623969E(true);
			return;
		
		default:
	}
}

char* func_38(int iParam0)//Position - 0x3475
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_2";
		
		case 3:
			return "EMSTR_5";
		
		case 1:
			return "EMSTR_8";
		
		case 2:
			return "EMSTR_11";
		
		case 4:
			return "EMSTR_14";
		
		case 5:
			return "EMSTR_31";
		
		case 6:
			return "EMSTR_38";
		
		case 7:
			return "EMSTR_41";
		
		case 8:
			return "EMSTR_54";
		
		case 9:
			return "EMSTR_57";
		
		case 10:
			return "EMSTR_60";
		
		case 11:
			return "EMSTR_80";
		
		case 12:
			return "EMSTR_83";
		
		case 13:
			return "EMSTR_86";
		
		case 14:
			return "EMSTR_89";
		
		case 15:
			return "EMSTR_106";
		
		case 16:
			return "EMSTR_116";
		
		case 17:
			return "EMSTR_144";
		
		case 18:
			return "EMSTR_147";
		
		case 19:
			return "EMSTR_154";
		
		case 20:
			return "EMSTR_159";
		
		case 21:
			return "EMSTR_165";
		
		case 22:
			return "EMSTR_184";
		
		case 23:
			return "EMSTR_189";
		
		case 24:
			return "EMSTR_192";
		
		case 25:
			return "EMSTR_208";
		
		case 26:
			return "EMSTR_221";
		
		case 27:
			return "EMSTR_228";
		
		case 28:
			return "EMSTR_235";
		
		case 29:
			return "EMSTR_244";
		
		case 30:
			return "EMSTR_251";
		
		case 31:
			return "EMSTR_264";
		
		case 32:
			return "EMSTR_271";
		
		case 33:
			return "EMSTR_321";
		
		case 34:
			return "EMSTR_342";
		
		case 35:
			return "EMSTR_350";
		
		case 36:
			return "EMSTR_354";
		
		case 37:
			return "EMSTR_359";
		
		case 38:
			return "EMSTR_362";
		
		case 39:
			return "EMSTR_371";
		
		case 40:
			return "EMSTR_378";
		
		case 41:
			return "EMSTR_381";
		
		case 42:
			return "EMSTR_382";
		
		case 43:
			return "EMSTR_386";
		
		case 44:
			return "EMSTR_389";
		
		case 45:
			return "EMSTR_392";
		
		case 46:
			return "EMSTR_395";
		
		case 47:
			return "EMSTR_398";
		
		case 48:
			return "EMSTR_401";
		
		case 49:
			return "EMSTR_404";
		
		case 50:
			return "EMSTR_407";
		
		case 51:
			return "EMSTR_410";
		
		case 52:
			return "EMSTR_413";
		
		case 53:
			return "EMSTR_416";
		
		case 54:
			return "EMSTR_467";
		
		case 55:
			return "EMSTR_470";
		
		case 56:
			return "EMSTR_491";
		
		case 57:
			return "EMSTR_494";
		
		case 58:
			return "EMSTR_497";
		
		case 59:
			return "EMSTR_500";
		
		case 60:
			return "EMSTR_503";
		
		case 61:
			return "EMSTR_506";
		
		case 62:
			return "EMSTR_509";
		
		case 63:
			return "EMSTR_642";
		
		case 64:
			return "EMSTR_645";
		
		case 65:
			return "EMSTR_654";
		
		default:
	}
	return "NULL";
}

void func_39(char* sParam0, int iParam1)//Position - 0x37E0
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, true, iParam1);
}

void func_40(int iParam0)//Position - 0x37F7
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

void func_41(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x3839
{
	func_42(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_42(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x385B
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
		func_43();
	}
}

void func_43()//Position - 0x3A2F
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

int func_44(char* sParam0)//Position - 0x3B4F
{
	if (unk_0x3362CDE8460ED38B(sParam0, &Global_195B7))
	{
		return 1;
	}
	if (func_45(sParam0))
	{
		return 0;
	}
	return 2;
}

int func_45(char* sParam0)//Position - 0x3B76
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

int func_46(int iParam0)//Position - 0x3BB1
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

char* func_47(int iParam0, int iParam1)//Position - 0x3BF4
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return "";
	}
	iVar4 = func_49(iVar0, iParam1, &iVar2, &iVar3, &uVar1);
	uVar1 = uVar1;
	iVar5 = -1;
	bVar6 = Global_B3B8[iVar0 /*120*/].f_56[iVar4];
	if (!bVar6)
	{
		iVar5 = Global_9DCB[iVar2 /*46*/].f_20[iVar3];
	}
	else
	{
		iVar7 = -1;
		iVar8 = 0;
		iVar8 = 0;
		while (iVar8 < 7)
		{
			if (Global_B522[iVar8 /*203*/].f_1 == iVar2)
			{
				iVar7 = iVar8;
			}
			iVar8++;
		}
		iVar5 = Global_B522[iVar7 /*203*/].f_A[iVar3 /*48*/];
	}
	return func_48(iVar5);
}

char* func_48(int iParam0)//Position - 0x3CB4
{
	switch (iParam0)
	{
		case 7:
			return "WWW_EPSILONPROGRAM_COM_S_MAKEDONATION";
		
		case 8:
			return "WWW_EPSILONPROGRAM_COM_S_MAKEDONATION";
		
		case 9:
			return "WWW_EPSILONPROGRAM_COM_S_STORE";
		
		case 10:
			return "WWW_EPSILONPROGRAM_COM";
		
		case 11:
			return "WWW_EPSILONPROGRAM_COM";
		
		case 16:
			return "WWW_EPSILONPROGRAM_COM";
		
		case 17:
			return "WWW_MAZE_D_BANK_COM";
		
		case 18:
			return "WWW_FLEECA_COM";
		
		case 19:
			return "WWW_MAZE_D_BANK_COM";
		
		case 20:
			return "WWW_MAZE_D_BANK_COM";
		
		case 21:
			return "WWW_MAZE_D_BANK_COM";
		
		case 22:
			return "WWW_MAZE_D_BANK_COM";
		
		case 23:
			return "WWW_THEBANKOFLIBERTY_COM";
		
		case 24:
			return "WWW_FLEECA_COM";
		
		case 25:
			return "WWW_FLEECA_COM";
		
		case 26:
			return "WWW_FLEECA_COM";
		
		case 27:
			return "WWW_FLEECA_COM";
		
		case 28:
			return "WWW_THEBANKOFLIBERTY_COM";
		
		case 29:
			return "WWW_THEBANKOFLIBERTY_COM";
		
		case 30:
			return "WWW_THEBANKOFLIBERTY_COM";
		
		case 43:
			return "WWW_LCN_D_EXCHANGE_COM";
		
		case 47:
			return "WWW_AMMUNATION_NET";
		
		case 48:
			return "WWW_AMMUNATION_NET";
		
		case 49:
			return "WWW_AMMUNATION_NET";
		
		case 50:
			return "WWW_AMMUNATION_NET";
		
		case 51:
			return "WWW_AMMUNATION_NET";
		
		case 52:
			return "WWW_AMMUNATION_NET";
		
		case 53:
			return "WWW_AMMUNATION_NET";
		
		case 54:
			return "WWW_AMMUNATION_NET";
		
		case 55:
			return "WWW_ELITASTRAVEL_COM";
		
		case 56:
			return "WWW_DOCKTEASE_COM";
		
		case 57:
			return "WWW_ELITASTRAVEL_COM";
		
		case 58:
			return "WWW_ELITASTRAVEL_COM";
		
		case 59:
			return "WWW_ELITASTRAVEL_COM";
		
		case 60:
			return "WWW_DOCKTEASE_COM";
		
		case 61:
			return "WWW_DOCKTEASE_COM";
		
		case 62:
			return "WWW_ELITASTRAVEL_COM";
		
		case 63:
			return "WWW_ELITASTRAVEL_COM";
		
		case 68:
			return "WWW_AMMUNATION_NET";
		
		case 84:
			return "WWW_EPSILONPROGRAM_COM_S_TRACT";
		
		case 155:
			return "WWW_LEGENDARYMOTORSPORT_NET";
		
		case 156:
			return "WWW_LEGENDARYMOTORSPORT_NET";
		
		case 157:
			return "WWW_LEGENDARYMOTORSPORT_NET";
		
		case 181:
			return "WWW_EPSILONPROGRAM_COM_S_MAKEDONATION";
		
		case 194:
			return "WWW_HUSHSMUSH_COM";
		
		case 195:
			return "WWW_HUSHSMUSH_COM";
		
		case 196:
			return "WWW_HUSHSMUSH_COM";
		
		case 197:
			return "WWW_HUSHSMUSH_COM";
		
		case 198:
			return "WWW_HUSHSMUSH_COM";
		
		case 244:
			return "WWW_MYDIVINEWITHIN_COM";
		
		case 245:
			return "WWW_THECHILDRENOFTHEMOUNTAIN_COM";
		
		case 246:
			return "WWW_THECHILDRENOFTHEMOUNTAIN_COM";
		
		case 270:
			return "WWW_AMMUNATION_NET";
		
		case 271:
			return "WWW_AMMUNATION_NET";
		
		case 272:
			return "WWW_AMMUNATION_NET";
		
		case 273:
			return "WWW_AMMUNATION_NET";
		
		case 274:
			return "WWW_AMMUNATION_NET";
		
		case 275:
			return "WWW_AMMUNATION_NET";
		
		case 276:
			return "WWW_AMMUNATION_NET";
		
		default:
	}
	return "NULL";
}

int func_49(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)//Position - 0x3FC4
{
	int iVar0;
	int iVar1;
	
	iVar0 = ((Global_B3B8[iParam0 /*120*/] - 1) - iParam1);
	while (iVar0 >= 16)
	{
		iVar0 = (iVar0 - 16);
	}
	iVar1 = iVar0;
	*uParam2 = Global_B3B8[iParam0 /*120*/].f_12[iVar1];
	*uParam3 = Global_B3B8[iParam0 /*120*/].f_1[iVar1];
	*uParam4 = Global_B3B8[iParam0 /*120*/].f_23[iVar1];
	return iVar1;
}

int func_50(int iParam0, int iParam1)//Position - 0x4023
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	iVar4 = func_49(iVar0, iParam1, &iVar1, &iVar2, &uVar3);
	uVar3 = uVar3;
	iVar5 = -1;
	bVar6 = Global_B3B8[iVar0 /*120*/].f_56[iVar4];
	if (!bVar6)
	{
		iVar5 = Global_9DCB[iVar1 /*46*/].f_20[iVar2];
	}
	else
	{
		iVar7 = -1;
		iVar8 = 0;
		iVar8 = 0;
		while (iVar8 < 7)
		{
			if (Global_B522[iVar8 /*203*/].f_1 == iVar1)
			{
				iVar7 = iVar8;
			}
			iVar8++;
		}
		iVar5 = Global_B522[iVar7 /*203*/].f_A[iVar2 /*48*/];
	}
	return func_51(iVar5);
}

int func_51(int iParam0)//Position - 0x40E0
{
	switch (iParam0)
	{
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 43:
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
		case 60:
		case 61:
		case 62:
		case 63:
		case 68:
		case 84:
		case 155:
		case 156:
		case 157:
		case 181:
		case 194:
		case 195:
		case 196:
		case 197:
		case 198:
		case 244:
		case 245:
		case 246:
		case 270:
		case 271:
		case 272:
		case 273:
		case 274:
		case 275:
		case 276:
			return 1;
		
		default:
	}
	return 0;
}

void func_52(int iParam0, int iParam1, int iParam2)//Position - 0x4256
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	struct<16> Var7;
	struct<16> Var8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	struct<16> Var17;
	struct<16> Var18;
	bool bVar19;
	int iVar20;
	
	unk_0x29CD142125FE177B(iParam0, "SET_DATA_SLOT_EMPTY");
	unk_0x1E1FB49121565EB6(9);
	unk_0xF9FBC2F3F73D94C9();
	iVar0 = -1;
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return;
	}
	iVar4 = func_49(iVar0, iParam2, &iVar2, &iVar3, &bVar1);
	bVar5 = Global_B3B8[iVar0 /*120*/].f_56[iVar4];
	if (!Global_B3B8[iVar0 /*120*/].f_45[iVar4])
	{
		func_56(-1);
	}
	Global_B3B8[iVar0 /*120*/].f_45[iVar4] = 1;
	if (!bVar5)
	{
		iVar6 = Global_9DCB[iVar2 /*46*/].f_20[iVar3];
		Var7 = { func_28(Global_90CE[iVar6 /*12*/]) };
		Var8 = { func_28(Global_90CE[iVar6 /*12*/].f_1) };
		unk_0x29CD142125FE177B(iParam0, "SET_DATA_SLOT");
		unk_0x1E1FB49121565EB6(9);
		unk_0x1E1FB49121565EB6(0);
		func_7(func_55(Global_90CE[iVar6 /*12*/].f_3));
		func_7(func_55(Global_90CE[iVar6 /*12*/].f_2));
		func_7(&Var7);
		func_7(&Var8);
		func_7(func_38(Global_90CE[iVar6 /*12*/].f_2));
		func_37(iVar6, Global_90CE[iVar6 /*12*/].f_2);
		unk_0xF9FBC2F3F73D94C9();
		if (Global_90CE[iVar6 /*12*/].f_4 == 0)
		{
			func_73(0);
		}
		else if (bVar1 || !func_31(iVar0, iVar4))
		{
			func_73(0);
		}
		else
		{
			func_73(1);
		}
		if (Global_9DCB[iVar2 /*46*/].f_2A > 1)
		{
			iVar9 = iVar3;
			iVar10 = (iVar3 - 1);
			iVar11 = 0;
			iVar11 = 0;
			while (iVar11 < iVar9)
			{
				iVar6 = Global_9DCB[iVar2 /*46*/].f_20[iVar10];
				Var7 = { func_28(Global_90CE[iVar6 /*12*/]) };
				Var8 = { func_28(Global_90CE[iVar6 /*12*/].f_1) };
				iVar12 = func_54(iParam1, Global_90CE[iVar6 /*12*/].f_3);
				unk_0x29CD142125FE177B(iParam0, "SET_DATA_SLOT");
				unk_0x1E1FB49121565EB6(9);
				unk_0x1E1FB49121565EB6(iVar11 + 1);
				func_7(func_55(iVar12));
				func_7(func_55(Global_90CE[iVar6 /*12*/].f_2));
				func_7(&Var7);
				func_7(&Var8);
				func_7(func_38(Global_90CE[iVar6 /*12*/].f_2));
				func_37(iVar6, Global_90CE[iVar6 /*12*/].f_2);
				unk_0xF9FBC2F3F73D94C9();
				iVar10 = (iVar10 - 1);
				iVar11++;
			}
		}
	}
	else
	{
		iVar13 = -1;
		iVar14 = 0;
		iVar14 = 0;
		while (iVar14 < 7)
		{
			if (Global_B522[iVar14 /*203*/].f_1 == iVar2)
			{
				iVar13 = iVar14;
			}
			iVar14++;
		}
		if (iVar13 == -1)
		{
			return;
		}
		else
		{
			iVar15 = Global_B522[iVar13 /*203*/].f_A[iVar3 /*48*/];
			iVar16 = Global_B522[iVar13 /*203*/].f_A[iVar3 /*48*/];
			Var17 = { func_28(Global_90CE[iVar15 /*12*/]) };
			Var18 = { func_28(Global_90CE[iVar15 /*12*/].f_1) };
			if (Global_B522[iVar13 /*203*/].f_A[iVar3 /*48*/].f_1)
			{
				MemCopy(&Var18, {Global_B522[iVar13 /*203*/].f_A[iVar3 /*48*/].f_2}, 16);
			}
			if (Global_90CE[iVar15 /*12*/].f_4 == 0)
			{
				func_73(0);
			}
			else if (bVar1)
			{
				func_73(0);
			}
			else
			{
				func_73(1);
			}
			bVar19 = false;
			bVar19 = func_53(iParam0, Global_B522[iVar13 /*203*/].f_1, iVar3, iVar16);
			if (!bVar19)
			{
				unk_0x29CD142125FE177B(iParam0, "SET_DATA_SLOT");
				unk_0x1E1FB49121565EB6(9);
				unk_0x1E1FB49121565EB6(0);
				func_7(func_55(Global_90CE[iVar15 /*12*/].f_3));
				func_7(func_55(Global_90CE[iVar15 /*12*/].f_2));
				func_7(&Var17);
				if (Global_B522[iVar13 /*203*/].f_A[iVar3 /*48*/].f_6 > 0)
				{
					unk_0x57016C44F10111F0(&Var18);
					iVar20 = 0;
					iVar20 = 0;
					while (iVar20 < Global_B522[iVar13 /*203*/].f_A[iVar3 /*48*/].f_6)
					{
						unk_0xC9C304D0AABE1335(&(Global_B522[iVar13 /*203*/].f_A[iVar3 /*48*/].f_7[iVar20 /*4*/]));
						iVar20++;
					}
					unk_0x64989E60CF560CA1();
				}
				else
				{
					func_7(&Var18);
				}
				func_7(func_38(Global_90CE[iVar15 /*12*/].f_2));
				func_37(iVar15, Global_90CE[iVar15 /*12*/].f_2);
				unk_0xF9FBC2F3F73D94C9();
			}
		}
	}
}

int func_53(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x4643
{
	int iVar0;
	var uVar1;
	int iVar2;
	struct<16> Var3;
	struct<8> Var4;
	int iVar5;
	int iVar6;
	bool bVar7;
	char* sVar8;
	
	iVar0 = 0;
	uVar1 = uParam1;
	uVar1 = iParam2;
	uVar1 = uVar1;
	iVar2 = 0;
	unk_0x29CD142125FE177B(iParam0, "SET_DATA_SLOT_EMPTY");
	unk_0xF9FBC2F3F73D94C9();
	Var3 = { func_28(Global_90CE[iParam3 /*12*/]) };
	switch (iParam3)
	{
		case 72:
			StringCopy(&Var4, "PROPR_INCEMAIL1", 64);
			break;
		
		case 73:
			StringCopy(&Var4, "PROPR_INCEMAIL3", 64);
			break;
		
		case 74:
			StringCopy(&Var4, "PROPR_INCEMAIL2", 64);
			break;
	}
	unk_0x29CD142125FE177B(iParam0, "SET_DATA_SLOT");
	unk_0x1E1FB49121565EB6(9);
	unk_0x1E1FB49121565EB6(iVar2);
	func_7(func_55(Global_90CE[iParam3 /*12*/].f_3));
	func_7(func_55(Global_90CE[iParam3 /*12*/].f_2));
	func_7(&Var3);
	func_7(&Var4);
	func_7(func_38(Global_90CE[iParam3 /*12*/].f_2));
	func_7("");
	unk_0x1E1FB49121565EB6(0);
	unk_0x5E5DBD0A6623969E(true);
	unk_0xF9FBC2F3F73D94C9();
	iVar2++;
	iVar5 = 0;
	while (iVar5 < 16)
	{
		iVar6 = iVar5;
		bVar7 = false;
		switch (iParam3)
		{
			case 72:
				if (Global_19B04.f_612B[iVar6 /*4*/] == 0)
				{
					bVar7 = true;
				}
				break;
			
			case 73:
				if (Global_19B04.f_612B[iVar6 /*4*/] == 1)
				{
					bVar7 = true;
				}
				break;
			
			case 74:
				if (Global_19B04.f_612B[iVar6 /*4*/] == 2)
				{
					bVar7 = true;
				}
				break;
		}
		if (bVar7)
		{
			switch (iVar6)
			{
				case 0:
					sVar8 = "ACCNA_TOWING";
					break;
				
				case 1:
					sVar8 = "ACCNA_TAXI_LOT";
					break;
				
				case 2:
					sVar8 = "ACCNA_ARMS";
					break;
				
				case 3:
					sVar8 = "ACCNA_SONAR";
					break;
				
				case 4:
					sVar8 = "ACCNA_CARMOD";
					break;
				
				case 5:
					sVar8 = "ACCNA_VCINEMA";
					break;
				
				case 6:
					sVar8 = "ACCNA_DCINEMA";
					break;
				
				case 7:
					sVar8 = "ACCNA_MCINEMA";
					break;
				
				case 8:
					sVar8 = "ACCNA_GOLF";
					break;
				
				case 9:
					sVar8 = "ACCNA_CSCRAP";
					break;
				
				case 10:
					sVar8 = "ACCNA_SMOKE";
					break;
				
				case 11:
					sVar8 = "ACCNA_TEQUILA";
					break;
				
				case 12:
					sVar8 = "ACCNA_PITCHERS";
					break;
				
				case 13:
					sVar8 = "ACCNA_HEN";
					break;
				
				case 14:
					sVar8 = "ACCNA_HOOKIES";
					break;
				
				case 15:
					sVar8 = "ACCNA_STRP";
					break;
			}
			unk_0x29CD142125FE177B(iParam0, "SET_DATA_SLOT");
			unk_0x1E1FB49121565EB6(9);
			unk_0x1E1FB49121565EB6(iVar2);
			unk_0x57016C44F10111F0("PROPR_INCEMAIL4");
			unk_0xC9C304D0AABE1335(sVar8);
			unk_0xAA5C5BF0489E5553(Global_19B04.f_612B[iVar6 /*4*/].f_3);
			unk_0x64989E60CF560CA1();
			unk_0xF9FBC2F3F73D94C9();
			iVar2++;
			iVar0 = 1;
		}
		iVar5++;
	}
	return iVar0;
}

int func_54(int iParam0, int iParam1)//Position - 0x48DC
{
	if (iParam1 == 0)
	{
		if (iParam0 == 1)
		{
			return 1;
		}
		else if (iParam0 == 2)
		{
			return 2;
		}
	}
	return iParam1;
}

char* func_55(int iParam0)//Position - 0x4903
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_1";
		
		case 3:
			return "EMSTR_4";
		
		case 1:
			return "EMSTR_7";
		
		case 2:
			return "EMSTR_10";
		
		case 4:
			return "EMSTR_13";
		
		case 5:
			return "EMSTR_30";
		
		case 6:
			return "EMSTR_37";
		
		case 7:
			return "EMSTR_40";
		
		case 8:
			return "EMSTR_53";
		
		case 9:
			return "EMSTR_56";
		
		case 10:
			return "EMSTR_59";
		
		case 11:
			return "EMSTR_79";
		
		case 12:
			return "EMSTR_82";
		
		case 13:
			return "EMSTR_85";
		
		case 14:
			return "EMSTR_88";
		
		case 15:
			return "EMSTR_107";
		
		case 16:
			return "EMSTR_115";
		
		case 17:
			return "EMSTR_143";
		
		case 18:
			return "EMSTR_146";
		
		case 19:
			return "EMSTR_153";
		
		case 20:
			return "EMSTR_158";
		
		case 21:
			return "EMSTR_164";
		
		case 22:
			return "EMSTR_183";
		
		case 23:
			return "EMSTR_188";
		
		case 24:
			return "EMSTR_191";
		
		case 25:
			return "EMSTR_207";
		
		case 26:
			return "EMSTR_220";
		
		case 27:
			return "EMSTR_227";
		
		case 28:
			return "EMSTR_234";
		
		case 29:
			return "EMSTR_243";
		
		case 30:
			return "EMSTR_250";
		
		case 31:
			return "EMSTR_263";
		
		case 32:
			return "EMSTR_270";
		
		case 33:
			return "EMSTR_320";
		
		case 34:
			return "EMSTR_341";
		
		case 35:
			return "EMSTR_349";
		
		case 36:
			return "EMSTR_353";
		
		case 37:
			return "EMSTR_358";
		
		case 38:
			return "EMSTR_361";
		
		case 39:
			return "EMSTR_370";
		
		case 40:
			return "EMSTR_377";
		
		case 41:
			return "EMSTR_380";
		
		case 42:
			return "EMSTR_383";
		
		case 43:
			return "EMSTR_385";
		
		case 44:
			return "EMSTR_388";
		
		case 45:
			return "EMSTR_391";
		
		case 46:
			return "EMSTR_394";
		
		case 47:
			return "EMSTR_397";
		
		case 48:
			return "EMSTR_400";
		
		case 49:
			return "EMSTR_403";
		
		case 50:
			return "EMSTR_406";
		
		case 51:
			return "EMSTR_409";
		
		case 52:
			return "EMSTR_412";
		
		case 53:
			return "EMSTR_415";
		
		case 54:
			return "EMSTR_466";
		
		case 55:
			return "EMSTR_469";
		
		case 56:
			return "EMSTR_490";
		
		case 57:
			return "EMSTR_493";
		
		case 58:
			return "EMSTR_496";
		
		case 59:
			return "EMSTR_499";
		
		case 60:
			return "EMSTR_502";
		
		case 61:
			return "EMSTR_505";
		
		case 62:
			return "EMSTR_508";
		
		case 63:
			return "EMSTR_641";
		
		case 64:
			return "EMSTR_644";
		
		case 65:
			return "EMSTR_653";
		
		default:
	}
	return "NULL";
}

void func_56(int iParam0)//Position - 0x4C6E
{
	switch (func_74())
	{
		case 0:
			Global_90C6 = (Global_90C6 + iParam0);
			if (Global_90C6 < 0)
			{
				Global_90C6 = 0;
			}
			break;
		
		case 2:
			Global_90C8 = (Global_90C8 + iParam0);
			if (Global_90C8 < 0)
			{
				Global_90C8 = 0;
			}
			break;
		
		case 1:
			Global_90C7 = (Global_90C7 + iParam0);
			if (Global_90C7 < 0)
			{
				Global_90C7 = 0;
			}
			break;
		
		default:
			break;
	}
}

void func_57(int iParam0, int iParam1)//Position - 0x4CD9
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = ((Global_B3B8[iVar0 /*120*/] - 1) - iParam1);
	while (iVar1 >= 16)
	{
		iVar1 = (iVar1 - 16);
	}
	iVar2 = iVar1;
	iVar3 = Global_B3B8[iVar0 /*120*/].f_12[iVar2];
	iVar4 = Global_B3B8[iVar0 /*120*/].f_1[iVar2];
	iVar5 = -1;
	bVar6 = Global_B3B8[iVar0 /*120*/].f_56[iVar2];
	if (!bVar6)
	{
		iVar5 = Global_9DCB[iVar3 /*46*/].f_20[iVar4];
	}
	else
	{
		iVar7 = -1;
		iVar8 = 0;
		iVar8 = 0;
		while (iVar8 < 7)
		{
			if (Global_B522[iVar8 /*203*/].f_1 == iVar3)
			{
				iVar7 = iVar8;
			}
			iVar8++;
		}
		if (iVar7 == -1)
		{
			return;
		}
		iVar5 = Global_B522[iVar7 /*203*/].f_A[iVar4 /*48*/];
	}
	if (!func_58(iVar5))
	{
		return;
	}
	if (Global_B521 != -1)
	{
		unk_0x786556581D95BCB2(func_12(Global_B521));
	}
	Global_B521 = iVar5;
	unk_0x8AA3F48A15444B98(func_12(iVar5), 0);
	while (!unk_0x499783D01578C2D2(func_12(iVar5)))
	{
		SYSTEM::WAIT(100);
	}
}

int func_58(int iParam0)//Position - 0x4E0B
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
		case 12:
		case 13:
		case 14:
		case 15:
		case 64:
		case 65:
		case 66:
		case 75:
		case 76:
		case 77:
		case 78:
		case 80:
		case 81:
		case 82:
		case 83:
		case 205:
		case 209:
		case 212:
		case 238:
			return 1;
		
		default:
	}
	return 0;
}

void func_59()//Position - 0x4EBB
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_90C9[iVar0] != -1)
		{
			unk_0x8C563C8EA840EA02(Global_90C9[iVar0]);
			Global_90C9[iVar0] = -1;
		}
		iVar0++;
	}
	Global_90CD = 0;
}

void func_60(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x4EFA
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

void func_61(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)//Position - 0x4F5D
{
	unk_0x29CD142125FE177B(iParam0, sParam1);
	func_7(sParam2);
	if (!unk_0xF1734B55490E9045(sParam3))
	{
		func_7(sParam3);
	}
	if (!unk_0xF1734B55490E9045(sParam4))
	{
		func_7(sParam4);
	}
	if (!unk_0xF1734B55490E9045(sParam5))
	{
		func_7(sParam5);
	}
	if (!unk_0xF1734B55490E9045(sParam6))
	{
		func_7(sParam6);
	}
	unk_0xF9FBC2F3F73D94C9();
}

int func_62(int iParam0, int iParam1)//Position - 0x4FB8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	char* sVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	struct<16> Var15;
	
	func_63(iParam1);
	iVar0 = -1;
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	unk_0x29CD142125FE177B(iParam0, "SET_DATA_SLOT_EMPTY");
	unk_0x1E1FB49121565EB6(8);
	unk_0xF9FBC2F3F73D94C9();
	if (Global_B3B8[iVar0 /*120*/] < 1)
	{
		return 0;
	}
	iVar1 = (Global_B3B8[iVar0 /*120*/] - 1);
	while (iVar1 >= 16)
	{
		iVar1 = (iVar1 - 16);
	}
	iVar2 = Global_B3B8[iVar0 /*120*/];
	if (iVar2 > 16)
	{
		iVar2 = 16;
	}
	if (iVar1 < 0 || iVar1 > 15)
	{
		return 0;
	}
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		if (!Global_B3B8[iVar0 /*120*/].f_56[iVar1])
		{
			iVar4 = Global_B3B8[iVar0 /*120*/].f_12[iVar1];
			iVar5 = Global_B3B8[iVar0 /*120*/].f_1[iVar1];
			iVar6 = Global_9DCB[iVar4 /*46*/].f_20[iVar5];
			iVar7 = 0;
			if (Global_B3B8[iVar0 /*120*/].f_45[iVar1])
			{
				iVar7 = 1;
			}
			if (iVar7 == 1)
			{
				if (Global_90CE[iVar6 /*12*/].f_4 > 0)
				{
					if (Global_B3B8[iVar0 /*120*/].f_23[iVar1] == 0)
					{
						iVar7 = 2;
					}
				}
			}
			MemCopy(&sVar8, {func_28(Global_90CE[iVar6 /*12*/])}, 4);
			unk_0x29CD142125FE177B(iParam0, "SET_DATA_SLOT");
			unk_0x1E1FB49121565EB6(8);
			unk_0x1E1FB49121565EB6(iVar3);
			unk_0x1E1FB49121565EB6(iVar7);
			unk_0x1E1FB49121565EB6(0);
			func_7(func_55(Global_90CE[iVar6 /*12*/].f_2));
			func_7(&sVar8);
			unk_0xF9FBC2F3F73D94C9();
		}
		else
		{
			iVar9 = Global_B3B8[iVar0 /*120*/].f_12[iVar1];
			iVar10 = -1;
			iVar11 = 0;
			iVar11 = 0;
			while (iVar11 < 7)
			{
				if (Global_B522[iVar11 /*203*/].f_1 == iVar9)
				{
					iVar10 = iVar11;
				}
				iVar11++;
			}
			if (iVar10 == -1)
			{
				return 1;
			}
			else
			{
				iVar12 = Global_B3B8[iVar0 /*120*/].f_1[iVar1];
				iVar13 = 0;
				if (Global_B3B8[iVar0 /*120*/].f_45[iVar1])
				{
					iVar13 = 1;
				}
				iVar14 = Global_B522[iVar10 /*203*/].f_A[iVar12 /*48*/];
				if (iVar13 == 1)
				{
					if (Global_90CE[iVar14 /*12*/].f_4 > 0)
					{
						if (Global_B3B8[iVar0 /*120*/].f_23[iVar1] == 0)
						{
							iVar13 = 2;
						}
					}
				}
				Var15 = { func_28(Global_90CE[iVar14 /*12*/]) };
				unk_0x29CD142125FE177B(iParam0, "SET_DATA_SLOT");
				unk_0x1E1FB49121565EB6(8);
				unk_0x1E1FB49121565EB6(iVar3);
				unk_0x1E1FB49121565EB6(iVar13);
				unk_0x1E1FB49121565EB6(0);
				func_7(func_55(Global_90CE[iVar14 /*12*/].f_2));
				func_7(&Var15);
				unk_0xF9FBC2F3F73D94C9();
			}
		}
		iVar1 = (iVar1 - 1);
		if (iVar1 < 0)
		{
			iVar1 = 15;
		}
		iVar3++;
	}
	return iVar2;
}

void func_63(int iParam0)//Position - 0x5247
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<104> Var4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_B3B8[iVar0 /*120*/] < 1)
	{
		return;
	}
	iVar1 = (Global_B3B8[iVar0 /*120*/] - 1);
	while (iVar1 >= 16)
	{
		iVar1 = (iVar1 - 16);
	}
	iVar2 = Global_B3B8[iVar0 /*120*/];
	if (iVar2 > 16)
	{
		iVar2 = 16;
	}
	if (iVar1 < 0 || iVar1 > 15)
	{
		return;
	}
	iVar3 = (iVar1 - (iVar2 - 1));
	if (iVar3 < 0)
	{
		iVar3 = (16 + iVar3);
	}
	Var4.f_1 = 16;
	Var4.f_12 = 16;
	Var4.f_23 = 16;
	Var4.f_34 = 16;
	Var4.f_45 = 16;
	Var4.f_56 = 16;
	Var4.f_67 = 16;
	iVar5 = 0;
	while (iVar5 < iVar2)
	{
		bVar6 = true;
		if (Global_B3B8[iVar0 /*120*/].f_67[iVar3])
		{
			bVar6 = false;
		}
		if (Global_B3B8[iVar0 /*120*/].f_56[iVar3])
		{
			iVar7 = Global_B3B8[iVar0 /*120*/].f_12[iVar3];
			iVar8 = -1;
			iVar9 = 0;
			iVar9 = 0;
			while (iVar9 < 7)
			{
				if (Global_B522[iVar9 /*203*/].f_1 == iVar7)
				{
					iVar8 = iVar9;
				}
				iVar9++;
			}
			if (iVar8 == -1)
			{
				bVar6 = false;
			}
		}
		if (bVar6)
		{
			iVar10 = Var4;
			Var4.f_1[iVar10] = Global_B3B8[iVar0 /*120*/].f_1[iVar3];
			Var4.f_12[iVar10] = Global_B3B8[iVar0 /*120*/].f_12[iVar3];
			Var4.f_23[iVar10] = Global_B3B8[iVar0 /*120*/].f_23[iVar3];
			Var4.f_34[iVar10] = Global_B3B8[iVar0 /*120*/].f_34[iVar3];
			Var4.f_45[iVar10] = Global_B3B8[iVar0 /*120*/].f_45[iVar3];
			Var4.f_56[iVar10] = Global_B3B8[iVar0 /*120*/].f_56[iVar3];
			Var4++;
		}
		iVar3++;
		if (iVar3 == 16)
		{
			iVar3 = 0;
		}
		iVar5++;
	}
	Global_B3B8[iVar0 /*120*/] = Var4;
	iVar5 = 0;
	while (iVar5 < 16)
	{
		Global_B3B8[iVar0 /*120*/].f_67[iVar5] = 0;
		Global_B3B8[iVar0 /*120*/].f_1[iVar5] = Var4.f_1[iVar5];
		Global_B3B8[iVar0 /*120*/].f_12[iVar5] = Var4.f_12[iVar5];
		Global_B3B8[iVar0 /*120*/].f_23[iVar5] = Var4.f_23[iVar5];
		Global_B3B8[iVar0 /*120*/].f_34[iVar5] = Var4.f_34[iVar5];
		Global_B3B8[iVar0 /*120*/].f_45[iVar5] = Var4.f_45[iVar5];
		Global_B3B8[iVar0 /*120*/].f_56[iVar5] = Var4.f_56[iVar5];
		iVar5++;
	}
}

void func_64()//Position - 0x54E3
{
	float fVar0;
	
	fVar0 = func_65(vLocal_48, vLocal_47, -90f, 0f, 90f, Global_3875, 350f, 0);
	if (Global_C5F == 0)
	{
		unk_0xCADAB6FA33E14AB8((500f + (75f * (1f - fVar0))));
	}
	if (fVar0 >= 1f)
	{
		Global_41C1 = 0;
		func_1(0);
		func_4();
		iLocal_18 = 0;
	}
}

float func_65(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, float fParam4, bool bParam5)//Position - 0x5541
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
	if (func_68() && Global_411EA1 == 0)
	{
		return 2f;
	}
	if (iLocal_18 == 0)
	{
		iLocal_18 = unk_0x105601648511CC64();
	}
	fVar1 = func_67((SYSTEM::TO_FLOAT((unk_0x105601648511CC64() - iLocal_18)) / fParam4), 0f, 1f);
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
		Global_3855 = { func_66(vParam0, vParam1, fVar2) };
		Global_3858 = { func_66(vParam2, vParam3, fVar2) };
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

Vector3 func_66(vector3 vParam0, vector3 vParam1, float fParam2)//Position - 0x5653
{
	return vParam0 + vParam1 - vParam0 * Vector(fParam2, fParam2, fParam2);
}

float func_67(float fParam0, float fParam1, float fParam2)//Position - 0x566D
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

int func_68()//Position - 0x5694
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
		if (func_11(14))
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

void func_69()//Position - 0x58BB
{
	float fVar0;
	
	fVar0 = func_65(vLocal_47, vLocal_48, Global_3875, -90f, 0f, 90f, 350f, 0);
	if (Global_C5F == 0)
	{
		if (unk_0x8ACB0C3FACC09467())
		{
			if (!func_70())
			{
				unk_0xCADAB6FA33E14AB8((500f + (75f * fVar0)));
			}
		}
		else
		{
			unk_0xCADAB6FA33E14AB8((500f + (75f * fVar0)));
		}
	}
	if (fVar0 >= 1f)
	{
		func_1(1);
		Global_41C2 = 0;
		iLocal_18 = 0;
	}
}

int func_70()//Position - 0x5937
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

void func_71(bool bParam0)//Position - 0x595B
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (unk_0xA76D65C63ED50F67() || unk_0xF49912B78E2591B6())
	{
		unk_0xE45648BDBF3441F5(9, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	else
	{
		unk_0xE45648BDBF3441F5(126, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	if (bParam0)
	{
		unk_0x29CD142125FE177B(Global_388A, "SET_SOFT_KEYS");
		unk_0x1E1FB49121565EB6(1);
		unk_0x5E5DBD0A6623969E(true);
		unk_0x1E1FB49121565EB6(16);
		unk_0xF9FBC2F3F73D94C9();
	}
	else
	{
		unk_0x29CD142125FE177B(Global_388A, "SET_SOFT_KEYS");
		unk_0x1E1FB49121565EB6(1);
		unk_0x5E5DBD0A6623969E(false);
		unk_0x1E1FB49121565EB6(16);
		unk_0xF9FBC2F3F73D94C9();
	}
}

void func_72(bool bParam0)//Position - 0x59D9
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (unk_0xA76D65C63ED50F67() || unk_0xF49912B78E2591B6())
	{
		unk_0xE45648BDBF3441F5(6, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	else
	{
		unk_0xE45648BDBF3441F5(6, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	if (bParam0)
	{
		unk_0x29CD142125FE177B(Global_388A, "SET_SOFT_KEYS");
		unk_0x1E1FB49121565EB6(3);
		unk_0x5E5DBD0A6623969E(true);
		unk_0x1E1FB49121565EB6(4);
		unk_0xF9FBC2F3F73D94C9();
	}
	else
	{
		unk_0x29CD142125FE177B(Global_388A, "SET_SOFT_KEYS");
		unk_0x1E1FB49121565EB6(3);
		unk_0x5E5DBD0A6623969E(false);
		unk_0x1E1FB49121565EB6(4);
		unk_0xF9FBC2F3F73D94C9();
	}
}

void func_73(bool bParam0)//Position - 0x5A53
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (unk_0xA76D65C63ED50F67() || unk_0xF49912B78E2591B6())
	{
		unk_0xE45648BDBF3441F5(18, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	else
	{
		unk_0xE45648BDBF3441F5(9, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	if (bParam0)
	{
		unk_0x29CD142125FE177B(Global_388A, "SET_SOFT_KEYS");
		unk_0x1E1FB49121565EB6(2);
		unk_0x5E5DBD0A6623969E(true);
		unk_0x1E1FB49121565EB6(2);
		unk_0xF9FBC2F3F73D94C9();
	}
	else
	{
		unk_0x29CD142125FE177B(Global_388A, "SET_SOFT_KEYS");
		unk_0x1E1FB49121565EB6(2);
		unk_0x5E5DBD0A6623969E(false);
		unk_0x1E1FB49121565EB6(2);
		unk_0xF9FBC2F3F73D94C9();
	}
}

int func_74()//Position - 0x5ACF
{
	func_75();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_75()//Position - 0x5AE8
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_78(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_77(unk_0xBC25C936A095B5BA());
			if (func_76(iVar0) && (!func_11(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_76(Global_19B04.f_932.f_21B.f_10CD))
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

bool func_76(int iParam0)//Position - 0x5BE5
{
	return iParam0 < 3;
}

int func_77(int iParam0)//Position - 0x5BF1
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_78(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_78(int iParam0)//Position - 0x5C2E
{
	if (func_76(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

