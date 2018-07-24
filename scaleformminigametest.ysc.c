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
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	bool bLocal_23 = 0;
	bool bLocal_24 = 0;
	float fLocal_25 = 0f;
	bool bLocal_26 = 0;
	bool bLocal_27 = 0;
	float fLocal_28 = 0f;
	bool bLocal_29 = 0;
	bool bLocal_30 = 0;
	float fLocal_31 = 0f;
	bool bLocal_32 = 0;
	bool bLocal_33 = 0;
	float fLocal_34 = 0f;
	bool bLocal_35 = 0;
	bool bLocal_36 = 0;
	float fLocal_37 = 0f;
	bool bLocal_38 = 0;
	bool bLocal_39 = 0;
	float fLocal_40 = 0f;
	bool bLocal_41 = 0;
	bool bLocal_42 = 0;
	float fLocal_43 = 0f;
	bool bLocal_44 = 0;
	bool bLocal_45 = 0;
	float fLocal_46 = 0f;
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
	iLocal_20 = unk_0x390CF6C8AD6903B7(100f, 100f, 30f);
	iLocal_22 = 1;
	fLocal_25 = 0f;
	fLocal_28 = 0f;
	fLocal_31 = 0f;
	fLocal_34 = 0f;
	fLocal_37 = 0f;
	fLocal_40 = 0f;
	fLocal_43 = 0f;
	fLocal_46 = 0f;
	if (unk_0x17FAADF9916EF741())
	{
		unk_0x829FA4611BD56B44(500);
	}
	if (unk_0xE8A79675302ED812(3))
	{
		func_2();
	}
	iLocal_18 = unk_0x9934FEFB3B8C6DB8("p_bubblegum");
	while (!unk_0xA7F138B5B1AB2CF6(iLocal_18))
	{
		SYSTEM::WAIT(0);
	}
	while (true)
	{
		if (iLocal_21 == 1)
		{
		}
		if (iLocal_22 == 1)
		{
			iLocal_22 = 0;
			iLocal_19 = unk_0x578D5D08EC980893("DEFAULT_SCRIPTED_CAMERA", true);
			if (unk_0xEF0E25DA0CB6E8FF(iLocal_19))
			{
				unk_0x9961B404F89D0597(iLocal_19, -160.6632f, -1072.144f, -1615.471f, -89.4999f, -0.2863f, 58.1189f, 45f, 0, 1, 1, 2);
				unk_0x97AD4F1D22AEA4FC(iLocal_19, 0.01f);
				unk_0x13063677BCFA7207(iLocal_19, 0.02f);
				unk_0x062C9995BFD27B2A(true, false, 3000, 1, 0, 0);
			}
			unk_0xBF0E22F3E083C33D(iLocal_20, 66);
		}
		iLocal_21 = 1;
		unk_0x65E432C782E7E702(iLocal_18, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
		func_1(iLocal_18);
		SYSTEM::WAIT(0);
	}
}

void func_1(int iParam0)//Position - 0x13F
{
	if (Global_3888 == 0)
	{
		if (unk_0x8FCEEB789599BD9B(2, 189) || unk_0x8FCEEB789599BD9B(2, 190))
		{
			Global_3888 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
	else if (SYSTEM::TIMERA() > 50)
	{
		Global_3888 = 0;
	}
	if (Global_3888 == 0)
	{
		if (unk_0x694514BD37EC4E94(2, 189))
		{
			bLocal_23 = true;
			fLocal_25 = 1f;
		}
		if (unk_0x8FCEEB789599BD9B(2, 189))
		{
			bLocal_23 = true;
			fLocal_25 = 1f;
		}
		if (!unk_0x8FCEEB789599BD9B(2, 189))
		{
			bLocal_23 = false;
			fLocal_25 = 0f;
		}
		if (!bLocal_23 == bLocal_24)
		{
			bLocal_24 = bLocal_23;
			unk_0x29CD142125FE177B(iParam0, "SET_INPUT_EVENT");
			unk_0x1E1FB49121565EB6(10);
			unk_0xD44E04EBBDC4CE88(fLocal_25);
			unk_0xF9FBC2F3F73D94C9();
		}
		if (unk_0x694514BD37EC4E94(2, 190))
		{
			bLocal_26 = true;
			fLocal_28 = 1f;
		}
		if (unk_0x8FCEEB789599BD9B(2, 190))
		{
			bLocal_26 = true;
			fLocal_28 = 1f;
		}
		if (!unk_0x8FCEEB789599BD9B(2, 190))
		{
			bLocal_26 = false;
			fLocal_28 = 0f;
		}
		if (!bLocal_26 == bLocal_27)
		{
			bLocal_27 = bLocal_26;
			unk_0x29CD142125FE177B(iParam0, "SET_INPUT_EVENT");
			unk_0x1E1FB49121565EB6(11);
			unk_0xD44E04EBBDC4CE88(fLocal_28);
			unk_0xF9FBC2F3F73D94C9();
		}
		if (unk_0x694514BD37EC4E94(2, 188))
		{
			bLocal_29 = true;
			fLocal_31 = 1f;
		}
		if (unk_0x8FCEEB789599BD9B(2, 188))
		{
			bLocal_29 = true;
			fLocal_31 = 1f;
		}
		if (!unk_0x8FCEEB789599BD9B(2, 188))
		{
			bLocal_29 = false;
			fLocal_31 = 0f;
		}
		if (!bLocal_29 == bLocal_30)
		{
			bLocal_30 = bLocal_29;
			unk_0x29CD142125FE177B(iParam0, "SET_INPUT_EVENT");
			unk_0x1E1FB49121565EB6(8);
			unk_0xD44E04EBBDC4CE88(fLocal_31);
			unk_0xF9FBC2F3F73D94C9();
		}
		if (unk_0x694514BD37EC4E94(2, 187))
		{
			bLocal_32 = true;
			fLocal_34 = 1f;
		}
		if (unk_0x8FCEEB789599BD9B(2, 187))
		{
			bLocal_32 = true;
			fLocal_34 = 1f;
		}
		if (!unk_0x8FCEEB789599BD9B(2, 187))
		{
			bLocal_32 = false;
			fLocal_34 = 0f;
		}
		if (!bLocal_32 == bLocal_33)
		{
			bLocal_33 = bLocal_32;
			unk_0x29CD142125FE177B(iParam0, "SET_INPUT_EVENT");
			unk_0x1E1FB49121565EB6(9);
			unk_0xD44E04EBBDC4CE88(fLocal_34);
			unk_0xF9FBC2F3F73D94C9();
		}
		if (unk_0x694514BD37EC4E94(2, 202))
		{
			bLocal_35 = true;
			fLocal_37 = 1f;
		}
		if (unk_0x8FCEEB789599BD9B(2, 202))
		{
			bLocal_35 = true;
			fLocal_37 = 1f;
		}
		if (!unk_0x8FCEEB789599BD9B(2, 202))
		{
			bLocal_35 = false;
			fLocal_37 = 0f;
		}
		if (!bLocal_35 == bLocal_36)
		{
			bLocal_36 = bLocal_35;
			unk_0x29CD142125FE177B(iParam0, "SET_INPUT_EVENT");
			unk_0x1E1FB49121565EB6(17);
			unk_0xD44E04EBBDC4CE88(fLocal_37);
			unk_0xF9FBC2F3F73D94C9();
		}
		if (unk_0x694514BD37EC4E94(2, 204))
		{
			bLocal_38 = true;
			fLocal_40 = 1f;
		}
		if (unk_0x8FCEEB789599BD9B(2, 204))
		{
			bLocal_38 = true;
			fLocal_40 = 1f;
		}
		if (!unk_0x8FCEEB789599BD9B(2, 204))
		{
			bLocal_38 = false;
			fLocal_40 = 0f;
		}
		if (!bLocal_38 == bLocal_39)
		{
			bLocal_39 = bLocal_38;
			unk_0x29CD142125FE177B(iParam0, "SET_INPUT_EVENT");
			unk_0x1E1FB49121565EB6(15);
			unk_0xD44E04EBBDC4CE88(fLocal_40);
			unk_0xF9FBC2F3F73D94C9();
		}
		if (unk_0x694514BD37EC4E94(2, 201))
		{
			bLocal_41 = true;
			fLocal_43 = 1f;
		}
		if (unk_0x8FCEEB789599BD9B(2, 201))
		{
			bLocal_41 = true;
			fLocal_43 = 1f;
		}
		if (!unk_0x8FCEEB789599BD9B(2, 201))
		{
			bLocal_41 = false;
			fLocal_43 = 0f;
		}
		if (!bLocal_41 == bLocal_42)
		{
			bLocal_42 = bLocal_41;
			unk_0x29CD142125FE177B(iParam0, "SET_INPUT_EVENT");
			unk_0x1E1FB49121565EB6(16);
			unk_0xD44E04EBBDC4CE88(fLocal_43);
			unk_0xF9FBC2F3F73D94C9();
		}
		if (unk_0x694514BD37EC4E94(2, 203))
		{
			bLocal_44 = true;
			fLocal_46 = 1f;
		}
		if (unk_0x8FCEEB789599BD9B(2, 203))
		{
			bLocal_44 = true;
			fLocal_46 = 1f;
		}
		if (!unk_0x8FCEEB789599BD9B(2, 203))
		{
			bLocal_44 = false;
			fLocal_46 = 0f;
		}
		if (!bLocal_44 == bLocal_45)
		{
			bLocal_45 = bLocal_44;
			unk_0x29CD142125FE177B(iParam0, "SET_INPUT_EVENT");
			unk_0x1E1FB49121565EB6(14);
			unk_0xD44E04EBBDC4CE88(fLocal_46);
			unk_0xF9FBC2F3F73D94C9();
		}
	}
}

void func_2()//Position - 0x43D
{
	if (unk_0xEF0E25DA0CB6E8FF(iLocal_19))
	{
		unk_0x4EC087603E1DEF9C(iLocal_19, 0);
	}
	unk_0x062C9995BFD27B2A(false, false, 3000, 1, 0, 0);
	func_3(0);
	unk_0x121BBDEFA4F0C22B(0);
	unk_0x7456702622C62EA0(1);
	unk_0xB0B0FE33F4F22679(&iLocal_18);
	unk_0x95E4B6F3ED223F5A();
}

void func_3(bool bParam0)//Position - 0x47A
{
	if (bParam0)
	{
		func_8();
		if (Global_389D.f_1 == 10 || Global_389D.f_1 == 9)
		{
			unk_0xF0059F27F7BB6680(&Global_93C, 16);
		}
		Global_389D.f_1 = 1;
		if (func_7(0))
		{
			func_4(0);
		}
	}
	else if (Global_389D.f_1 == 1)
	{
		if (!Global_389D.f_1 == 0)
		{
			Global_389D.f_1 = 3;
		}
	}
}

void func_4(int iParam0)//Position - 0x4DD
{
	if (Global_3943)
	{
		func_6(0, 0);
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
	if (!func_5())
	{
		Global_389D.f_1 = 3;
	}
}

int func_5()//Position - 0x54D
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_6(bool bParam0, bool bParam1)//Position - 0x574
{
	if (bParam0)
	{
		if (func_7(0))
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

int func_7(int iParam0)//Position - 0x5E8
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

void func_8()//Position - 0x642
{
	if (Global_389D.f_1 == 9 || Global_389D.f_1 == 10)
	{
		Global_3DED = 0;
		Global_3DE9 = 1;
	}
}

