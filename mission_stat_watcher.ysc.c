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
	struct<563> Local_45 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	float fLocal_68 = 0f;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	bool bLocal_71 = 0;
	int iLocal_72 = 0;
	bool bLocal_73 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	
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
	iLocal_62 = iLocal_61;
	iLocal_63 = iLocal_62;
	fLocal_68 = 100f;
	if (unk_0xB731B8C5BCE89836(joaat("mission_stat_watcher")) > 1)
	{
		unk_0x95E4B6F3ED223F5A();
	}
	Global_DA99 = 0;
	Global_DAA0 = 0;
	iVar0 = 1;
	if (unk_0xE8A79675302ED812(18))
	{
		func_109();
		Global_109DE = 0;
		Global_DA9A = 0;
		Global_DAB4 = 0;
		unk_0x95E4B6F3ED223F5A();
	}
	iVar1 = 0;
	SYSTEM::WAIT(0);
	func_107();
	while (!Global_DA98)
	{
		SYSTEM::WAIT(200);
		if (Global_DAA0)
		{
			func_109();
			unk_0x95E4B6F3ED223F5A();
		}
	}
	Global_DAA7 = 0;
	Global_DA9A = 1;
	while (!Global_DA99)
	{
		if (Global_109DE > 0)
		{
			func_101();
			if (Global_DABB == -1)
			{
				Global_DABB = unk_0x105601648511CC64();
			}
			else if ((unk_0x105601648511CC64() - Global_DABB) > 1000)
			{
				func_100();
			}
		}
		if (Global_DAA0)
		{
			func_109();
			Global_DA9A = 0;
			unk_0x95E4B6F3ED223F5A();
		}
		SYSTEM::WAIT(0);
	}
	Global_DA9A = 0;
	if (func_99())
	{
		while (func_99())
		{
			SYSTEM::WAIT(0);
		}
	}
	bVar2 = false;
	while (!bVar2)
	{
		if (!Global_DA9B == iLocal_70)
		{
			if (Global_DA9B)
			{
				SYSTEM::SETTIMERB(0);
				iLocal_60 = 0;
				Global_DAAA = 0;
			}
			iLocal_70 = Global_DA9B;
		}
		while (Global_DA9F)
		{
			SYSTEM::WAIT(1000);
		}
		if (Global_DA99 && !Global_DAA0)
		{
			if (Global_DA98 || iLocal_72)
			{
				Global_DA9D = 0;
				if (bLocal_71)
				{
				}
				if (Global_DA99)
				{
				}
				if (!bLocal_71 == Global_DA99)
				{
					func_98(&Local_45);
					Local_45.f_232 = 1;
					func_97();
					func_96();
					iVar3 = 0;
					iVar3 = 0;
					while (iVar3 < Global_109DE)
					{
						if (Global_109DF[iVar3 /*9*/] > 0)
						{
							if (Global_DB80[Global_109DF[iVar3 /*9*/] /*13*/] == 4)
							{
								if (!Global_DB80[Global_109DF[iVar3 /*9*/] /*13*/].f_7)
								{
									if (Global_DB80[Global_109DF[iVar3 /*9*/] /*13*/].f_3)
									{
										if (Global_109DF[iVar3 /*9*/].f_1 == 0)
										{
											Global_109DF[iVar3 /*9*/].f_3 = 5;
										}
									}
								}
							}
						}
						iVar3++;
					}
					bVar4 = false;
					if ((Global_11646 && !Global_DA95) || Global_DAA1)
					{
						bVar4 = true;
					}
					bVar5 = false;
					if (unk_0x726D9204B160D23E() || unk_0x26641E1BFD792DBC())
					{
						bVar5 = true;
					}
					else
					{
						if (Global_16B42.f_8)
						{
							bVar5 = true;
						}
						if (Global_DAB3)
						{
							bVar5 = true;
						}
					}
					if (func_95(0))
					{
						bVar5 = true;
						Global_DAB3 = 1;
					}
					iVar6 = Global_10A75;
					if (Global_DAA2)
					{
						func_92(Global_DAA3);
						iVar0 = 2;
						func_91(&Local_45, "HISHPA", &Global_DAAE, 0);
						if (iVar6 == 69 || iVar6 == 70)
						{
							func_90(&Local_45, 3, "ACTATAKE_AG", "", Global_19B04.f_1.f_7E[Global_DAA3 /*23*/], 0, 0, 0);
						}
						else
						{
							func_90(&Local_45, 3, "POTATAKE", "", Global_19B04.f_1.f_7E[Global_DAA3 /*23*/], 0, 0, 0);
						}
						iVar7 = 0;
						iVar7 = 0;
						while (iVar7 < Global_15CF2[Global_DAA3 /*38*/].f_25)
						{
							if (Global_15CF2[Global_DAA3 /*38*/].f_1F[iVar7] > 0)
							{
								func_90(&Local_45, 3, func_89(Global_15CF2[Global_DAA3 /*38*/].f_19[iVar7]), "", (-1 * Global_15CF2[Global_DAA3 /*38*/].f_1F[iVar7]), 0, 0, 0);
							}
							iVar7++;
						}
						if ((((Global_19B04.f_1.f_7E[Global_DAA3 /*23*/].f_2[0] > 0 || iVar6 == 74) || iVar6 == 75) || iVar6 == 69) || iVar6 == 70)
						{
							func_90(&Local_45, 3, "ACTATAKE_M", "", Global_19B04.f_1.f_7E[Global_DAA3 /*23*/].f_2[0], 0, 0, 0);
						}
						if ((Global_19B04.f_1.f_7E[Global_DAA3 /*23*/].f_2[1] > 0 || iVar6 == 74) || iVar6 == 75)
						{
							func_90(&Local_45, 3, "ACTATAKE_F", "", Global_19B04.f_1.f_7E[Global_DAA3 /*23*/].f_2[1], 0, 0, 0);
						}
						if ((Global_19B04.f_1.f_7E[Global_DAA3 /*23*/].f_2[2] > 0 || iVar6 == 74) || iVar6 == 75)
						{
							func_90(&Local_45, 3, "ACTATAKE_T", "", Global_19B04.f_1.f_7E[Global_DAA3 /*23*/].f_2[2], 0, 0, 0);
						}
						if (Global_15CE8.f_7 > 0)
						{
							func_90(&Local_45, 3, "ACTATAKE_L", "", Global_15CE8.f_7, 0, 0, 0);
						}
						iVar8 = func_87(func_88(Global_DAA3));
						iVar9 = 0;
						iVar10 = 0;
						iVar7 = 0;
						while (iVar7 < Global_15C29[iVar8 /*19*/])
						{
							if (!func_86(Global_19B04.f_1.f_C[iVar8 /*6*/][iVar7]))
							{
								iVar9 = (iVar9 + Global_19B04.f_1.f_7E[Global_DAA3 /*23*/].f_11[iVar7]);
							}
							else
							{
								iVar10 = (iVar10 + Global_19B04.f_1.f_7E[Global_DAA3 /*23*/].f_11[iVar7]);
							}
							iVar7++;
						}
						if (iVar6 == 74 || iVar6 == 75)
						{
							func_90(&Local_45, 3, "LACKTAKE", "", iVar9, 0, 0, 0);
						}
						else
						{
							func_90(&Local_45, 3, "CREWTAKE", "", iVar9, 0, 0, 0);
						}
						if (iVar10 > 0)
						{
							if (!func_95(0))
							{
								switch (iVar6)
								{
									case 90:
										unk_0x3A57956BCE003880(joaat("hcs_penalty_jewel_funeral"), iVar10, 1);
										break;
									
									case 93:
										unk_0x3A57956BCE003880(joaat("hcs_penalty_paleto_funeral"), iVar10, 1);
										break;
									
									case 69:
									case 70:
										unk_0x3A57956BCE003880(joaat("hcs_penalty_bureau_funeral"), iVar10, 1);
										break;
									
									case 84:
									case 85:
										unk_0x3A57956BCE003880(joaat("hcs_penalty_bigs_funeral"), iVar10, 1);
										break;
									}
							}
							func_90(&Local_45, 3, "HSTENDPFUN", "", iVar10, 0, 0, 0);
						}
					}
					else
					{
						func_91(&Local_45, "MISHPA", &Global_DAAE, 0);
					}
					if (Global_109DE > 0)
					{
						func_71(&Local_45);
					}
					if (!Global_DA95)
					{
						func_65();
					}
					while (!bVar5)
					{
						if (unk_0x726D9204B160D23E() || unk_0x26641E1BFD792DBC())
						{
							bVar5 = true;
						}
						SYSTEM::WAIT(0);
					}
					if ((bVar5 || Global_DAB3) && !bVar4)
					{
						if (!Global_DAA1)
						{
							func_61(&Local_45, 0, 0);
						}
						bVar11 = false;
						if (!Global_10A74)
						{
							switch (Global_10A75)
							{
								case 50:
								case 51:
								case 52:
									unk_0x9B90420B04C07704("HoldMissionCompleteWhenPrepared", 1);
									func_57(1);
									bVar11 = true;
									break;
								
								default:
									unk_0x9B90420B04C07704("HoldMissionCompleteWhenPrepared", 1);
									func_57(0);
									bVar11 = true;
									break;
							}
						}
						else
						{
							unk_0x9B90420B04C07704("HoldMissionCompleteWhenPrepared", 1);
							func_57(1);
							bVar11 = true;
						}
						iVar1 = func_56();
						unk_0x900CF084251DED26("MISHSTA", 3);
						while (!unk_0xFA9040D29FE330BD(3))
						{
							SYSTEM::WAIT(0);
						}
						bLocal_73 = true;
						while (unk_0x866EAD7E27D8D0F8())
						{
							SYSTEM::WAIT(0);
						}
						while (unk_0x0928DEFC3216677B(unk_0xFC1CAE18F3ECBF2D()))
						{
							SYSTEM::WAIT(0);
						}
						func_61(&Local_45, 1, 0);
						unk_0x9B90420B04C07704("HoldMissionCompleteWhenPrepared", 0);
						if (bVar11)
						{
							while (!unk_0xC5B1B5690C2BE6B8())
							{
								SYSTEM::WAIT(0);
							}
						}
						unk_0xF3D744E4ACB5CB90();
					}
					if (Global_DA98)
					{
						iLocal_72 = 1;
						Global_DA98 = 0;
					}
					SYSTEM::SETTIMERA(0);
				}
				if (bLocal_73 && !Global_DAA0)
				{
					if (unk_0xB731B8C5BCE89836(joaat("appcamera")) > 0)
					{
						func_53(0);
					}
					if (Global_109DE > 0 || Global_DA95)
					{
						if (Global_DAB3)
						{
							unk_0x996AC9A66B2A5A3F(7);
						}
						if (iVar1 && !Global_DA95)
						{
							Global_8FCD = 1;
						}
						if (!Global_DAA1)
						{
							if (func_21(&Local_45, 0, SYSTEM::TO_FLOAT(iVar0), 0, 0, 0))
							{
								Global_DAA0 = 1;
							}
							func_20();
						}
						if (Global_DAB3)
						{
							unk_0x996AC9A66B2A5A3F(7);
						}
					}
					func_19(1);
					if (!unk_0x726D9204B160D23E())
					{
						func_17();
					}
					if (!func_16(0))
					{
						switch (func_14("AM_H_PASS"))
						{
							case 2:
								func_11("AM_H_PASS", 3, 2000, 2500, 10000, 7, 0, 0, 0);
								break;
							
							case 1:
								func_10(0);
								break;
							}
						}
				}
				bLocal_71 = Global_DA99;
				if (Global_DA96)
				{
				}
				else
				{
					unk_0x0928DEFC3216677B(unk_0xFC1CAE18F3ECBF2D());
					if (unk_0x8D66276473ABD7CC(unk_0xA95CF30C72EB526E(unk_0xFC1CAE18F3ECBF2D())) < 1)
					{
						Global_DAA1 = 1;
					}
					if (((((func_99() || func_9()) || Global_DAA0) || Global_1164F) || Global_DAA1) || !bLocal_73)
					{
						Global_DA95 = 0;
						Global_DA99 = 0;
						iLocal_72 = 0;
						Global_DA9C = 0;
						Global_DA9D = 0;
						Global_DAA7 = 0;
						Global_DAAA = 0;
						func_19(0);
						func_2();
						Global_DAA0 = 0;
						bVar2 = true;
					}
				}
			}
		}
		SYSTEM::WAIT(0);
	}
	func_1(&Local_45);
	Global_63B7 = 0;
	Global_DAA4 = 0;
	unk_0x95E4B6F3ED223F5A();
}

void func_1(var uParam0)//Position - 0x8BD
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
				if (unk_0x17FAADF9916EF741() && !func_95(0))
				{
					unk_0x829FA4611BD56B44(800);
				}
			}
		}
	}
	func_19(0);
}

void func_2()//Position - 0x963
{
	if (Global_DA9F)
	{
		return;
	}
	Global_DAA8 = 0;
	Global_109DE = 0;
	Global_DAAA = 0;
	if (Global_DAA7)
	{
	}
	Global_DAA7 = 0;
	func_19(0);
	func_8();
	Global_10A76 = 0;
	Global_DA9E = 1;
	func_6();
	func_5();
	func_4();
	func_3();
	Global_DA95 = 0;
	Global_DAB3 = 0;
	Global_DABB = -1;
}

void func_3()//Position - 0x9B9
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_10A99[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_10AA2 = 0;
}

void func_4()//Position - 0x9E6
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		Global_10A77[iVar0 /*2*/] = 0;
		Global_10A77[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_10A98 = 0;
}

void func_5()//Position - 0xA1D
{
	Global_DB3E = 0;
}

void func_6()//Position - 0xA29
{
	Global_DAB2 = 0;
	Global_DAB6 = func_7(joaat("sp0_shots"));
	Global_DAB5 = func_7(joaat("sp0_hits"));
	Global_DAB8 = func_7(joaat("sp1_shots"));
	Global_DAB7 = func_7(joaat("sp1_hits"));
	Global_DABA = func_7(joaat("sp2_shots"));
	Global_DAB9 = func_7(joaat("sp2_hits"));
}

int func_7(int iParam0)//Position - 0xA7D
{
	var uVar0;
	
	unk_0x6CB99B97664C3727(iParam0, &uVar0, -1);
	return uVar0;
}

void func_8()//Position - 0xA91
{
	int iVar0;
	
	Global_DABC = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		Global_DABD[iVar0 /*2*/] = 0;
		iVar0++;
	}
}

var func_9()//Position - 0xABB
{
	return Global_140856;
}

void func_10(int iParam0)//Position - 0xAC7
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

void func_11(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0xB09
{
	func_12(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_12(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0xB2A
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
		func_13();
	}
}

void func_13()//Position - 0xCFD
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

int func_14(char* sParam0)//Position - 0xE1D
{
	if (unk_0x3362CDE8460ED38B(sParam0, &Global_195B7))
	{
		return 1;
	}
	if (func_15(sParam0))
	{
		return 0;
	}
	return 2;
}

int func_15(char* sParam0)//Position - 0xE44
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

int func_16(int iParam0)//Position - 0xE7F
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

void func_17()//Position - 0xEC2
{
	unk_0x2423B13D9CFAD1DD();
	func_18();
}

void func_18()//Position - 0xED2
{
	Global_4336.f_86 = 1;
}

void func_19(int iParam0)//Position - 0xEE0
{
	Global_11646 = iParam0;
	Global_11647 = iParam0;
}

void func_20()//Position - 0xEF4
{
	Global_4336.f_6 = 1;
}

int func_21(var uParam0, bool bParam1, float fParam2, bool bParam3, int iParam4, bool bParam5)//Position - 0xF02
{
	bool bVar0;
	
	if (unk_0xC87A57742F7D3C06() == uParam0->f_23E)
	{
		return uParam0->f_23F;
	}
	uParam0->f_23E = unk_0xC87A57742F7D3C06();
	if (!unk_0x7AF0088ABFA713B6())
	{
		if (unk_0x610A1308608A0F91(unk_0xA95CF30C72EB526E(unk_0xFC1CAE18F3ECBF2D()), 1))
		{
			uParam0->f_23F = 1;
			return 1;
		}
		if (unk_0x19B821A70FE4D11F(unk_0xA95CF30C72EB526E(unk_0xFC1CAE18F3ECBF2D())))
		{
			uParam0->f_23F = 1;
			return 1;
		}
	}
	if (!uParam0->f_234)
	{
		if (unk_0x17FAADF9916EF741() || unk_0x422F9EDE839E6ABB())
		{
			unk_0xC4248B71D9B26306(true);
			uParam0->f_234 = 1;
		}
	}
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			if (unk_0x36210078ECC9DC40(unk_0xB5CEFD608600A09F()))
			{
				unk_0xD50A43D7C495F078(unk_0xB5CEFD608600A09F());
			}
		}
	}
	unk_0x4E0EC60D119222B1(7);
	unk_0x4E0EC60D119222B1(8);
	unk_0x4E0EC60D119222B1(9);
	unk_0x4E0EC60D119222B1(6);
	unk_0x4E0EC60D119222B1(19);
	unk_0xBBC4195AD74D153D(2, 19, 1);
	unk_0xBBC4195AD74D153D(0, 37, 1);
	unk_0xBBC4195AD74D153D(0, 21, 1);
	unk_0xBBC4195AD74D153D(0, 28, 1);
	unk_0xBBC4195AD74D153D(0, 29, 1);
	unk_0xBBC4195AD74D153D(0, 171, 1);
	func_51(0);
	if (unk_0x50465D2C022B9E04(2))
	{
		if (unk_0xD8169614C33872A0() || (unk_0x17FAADF9916EF741() && !unk_0x26641E1BFD792DBC()))
		{
			unk_0x08009E53F6E7E15C();
		}
	}
	Global_8E67 = 1;
	if (!uParam0->f_233)
	{
		switch (func_48(unk_0xA95CF30C72EB526E(unk_0xFC1CAE18F3ECBF2D())))
		{
			case 1:
				unk_0x9216004FAC08D1DC("SuccessFranklin", 1000, 0);
				break;
			
			case 2:
				unk_0x9216004FAC08D1DC("SuccessTrevor", 1000, 0);
				break;
			
			default:
				unk_0x9216004FAC08D1DC("SuccessMichael", 1000, 0);
				break;
		}
		uParam0->f_233 = 1;
	}
	if (uParam0->f_22E == 0)
	{
		uParam0->f_22E = (uParam0->f_23C + SYSTEM::FLOOR((15000f * fParam2)));
	}
	if (iParam4 && uParam0->f_23C >= (uParam0->f_22E - 1500))
	{
		uParam0->f_22E = uParam0->f_23C + 3000;
	}
	if (uParam0->f_230 == 0f)
	{
		uParam0->f_230 = (uParam0->f_230 + func_47(30f));
		uParam0->f_230 = (uParam0->f_230 + (IntToFloat(uParam0->f_38) * func_47(25f)));
		if (uParam0->f_38 > 0)
		{
			uParam0->f_230 = (uParam0->f_230 + func_47((25f * 0.5f)));
		}
		if (uParam0->f_225)
		{
			uParam0->f_230 = (uParam0->f_230 + (func_47(30f) - func_47(2f)));
		}
	}
	bVar0 = true;
	while (bVar0)
	{
		func_19(1);
		uParam0->f_23C = (uParam0->f_23C + SYSTEM::ROUND((0f + (1000f * SYSTEM::TIMESTEP()))));
		func_26(uParam0, fParam2, bParam3);
		if (IntToFloat(uParam0->f_23C) > (IntToFloat(uParam0->f_22E + 666) - (15000f * fParam2)))
		{
			if (uParam0->f_1E < 1f)
			{
				uParam0->f_1E = (uParam0->f_1E + (0f + ((1f / 0.225f) * SYSTEM::TIMESTEP())));
			}
		}
		uParam0->f_1E = func_25(uParam0->f_1E, 0f, 1f);
		if (uParam0->f_23C > (uParam0->f_22E - 333))
		{
			if (!uParam0->f_231)
			{
				if (uParam0->f_235)
				{
					uParam0->f_235 = 0;
					uParam0->f_236 = 0;
					uParam0->f_23D = 0.75f;
					unk_0x29CD142125FE177B(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0xF9FBC2F3F73D94C9();
				}
				uParam0->f_223 = (uParam0->f_223 - (0f + ((1f / 1.215f) * SYSTEM::TIMESTEP())));
			}
		}
		uParam0->f_223 = func_25(uParam0->f_223, 0f, 1f);
		if ((uParam0->f_223 <= 0.7f && !uParam0->f_221) && uParam0->f_1 != 0)
		{
			unk_0x29CD142125FE177B(uParam0->f_1, "TRANSITION_OUT");
			unk_0xF9FBC2F3F73D94C9();
			uParam0->f_222 = uParam0->f_23C;
			uParam0->f_221 = 1;
		}
		if (uParam0->f_23C > (uParam0->f_22E - 333))
		{
			if (!uParam0->f_231)
			{
				if (uParam0->f_224 < 1f)
				{
					uParam0->f_224 = (uParam0->f_224 + (0f + ((1f / 0.3f) * SYSTEM::TIMESTEP())));
				}
			}
		}
		uParam0->f_224 = func_25(uParam0->f_224, 0f, 1f);
		if (uParam0->f_232)
		{
			if (unk_0x8A0D8839261BAEEF(2))
			{
				if (unk_0xA7F138B5B1AB2CF6(uParam0->f_4))
				{
					if (!uParam0->f_237)
					{
						func_22(uParam0, (!uParam0->f_235 && uParam0->f_38 > 0));
					}
				}
			}
		}
		if (unk_0x694514BD37EC4E94(2, 216) && uParam0->f_22E > uParam0->f_23C + 333)
		{
			if (((!uParam0->f_236 && uParam0->f_38 != 0) && unk_0xA7F138B5B1AB2CF6(uParam0->f_4)) && IntToFloat(uParam0->f_23C) > (IntToFloat(uParam0->f_22E + 1165) - (15000f * fParam2)))
			{
				if (!uParam0->f_235)
				{
					unk_0x29CD142125FE177B(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0xF9FBC2F3F73D94C9();
					uParam0->f_235 = 1;
					uParam0->f_23D = 0.75f;
					if (uParam0->f_23C > (uParam0->f_22E - 5000))
					{
						uParam0->f_22E = uParam0->f_23C + 5000;
					}
				}
				else if (bParam5)
				{
					unk_0x29CD142125FE177B(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0xF9FBC2F3F73D94C9();
					uParam0->f_235 = 0;
					uParam0->f_23D = 0.75f;
				}
				func_22(uParam0, (!uParam0->f_235 && uParam0->f_38 > 0));
			}
		}
		if ((uParam0->f_235 || uParam0->f_236) && uParam0->f_38 != 0)
		{
			if (IntToFloat(uParam0->f_23C) > (IntToFloat(uParam0->f_22E + 1165) - (15000f * fParam2)))
			{
				if (uParam0->f_236 && !uParam0->f_235)
				{
					uParam0->f_235 = 1;
					uParam0->f_23D = 0.75f;
					unk_0x29CD142125FE177B(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0xF9FBC2F3F73D94C9();
				}
				uParam0->f_22F = func_25((uParam0->f_22F + (((1f / 0.3f) * uParam0->f_23D) * SYSTEM::TIMESTEP())), 0f, 1f);
				uParam0->f_23D = func_25((uParam0->f_23D + 0.07f), 0.75f, 1.15f);
			}
		}
		else
		{
			uParam0->f_22F = func_25((uParam0->f_22F - ((((1f / 0.3f) * uParam0->f_23D) * 0.01f) * SYSTEM::TIMESTEP())), 0f, 1f);
			uParam0->f_23D = func_25((uParam0->f_23D + 0.07f), 0.75f, 1.15f);
		}
		if (uParam0->f_23C > uParam0->f_22E)
		{
			if (uParam0->f_231)
			{
				if (!uParam0->f_237)
				{
					if (unk_0x694514BD37EC4E94(2, 215))
					{
						uParam0->f_231 = 0;
					}
				}
			}
			else if ((uParam0->f_23C - uParam0->f_222) > 1000 && uParam0->f_221)
			{
				bVar0 = false;
			}
		}
		uParam0->f_23F = !bVar0;
		if (bParam1)
		{
			SYSTEM::WAIT(0);
		}
		else
		{
			if (!bVar0)
			{
				func_19(0);
			}
			return !bVar0;
		}
	}
	func_19(0);
	return 1;
}

void func_22(var uParam0, bool bParam1)//Position - 0x1555
{
	unk_0x29CD142125FE177B(uParam0->f_4, "CLEAR_ALL");
	unk_0xF9FBC2F3F73D94C9();
	if (unk_0x8ACB0C3FACC09467())
	{
		unk_0x29CD142125FE177B(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0x5E5DBD0A6623969E(true);
		unk_0xF9FBC2F3F73D94C9();
	}
	unk_0x29CD142125FE177B(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x1E1FB49121565EB6(0);
	func_24(unk_0xE57EAD1FEA2A6FAF(2, 215, true));
	func_23("ES_HELP");
	if (unk_0x8ACB0C3FACC09467())
	{
		unk_0x5E5DBD0A6623969E(true);
		unk_0x1E1FB49121565EB6(215);
	}
	unk_0xF9FBC2F3F73D94C9();
	if (bParam1)
	{
		unk_0x29CD142125FE177B(uParam0->f_4, "SET_DATA_SLOT");
		unk_0x1E1FB49121565EB6(1);
		func_24(unk_0xE57EAD1FEA2A6FAF(2, 216, true));
		func_23("ES_XPAND");
		if (unk_0x8ACB0C3FACC09467())
		{
			unk_0x5E5DBD0A6623969E(true);
			unk_0x1E1FB49121565EB6(216);
		}
		unk_0xF9FBC2F3F73D94C9();
	}
	unk_0x29CD142125FE177B(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0xF9FBC2F3F73D94C9();
}

void func_23(char* sParam0)//Position - 0x1618
{
	unk_0x57016C44F10111F0(sParam0);
	unk_0x64989E60CF560CA1();
}

void func_24(char* sParam0)//Position - 0x162A
{
	unk_0xCB30200B8055CA57(sParam0);
}

float func_25(float fParam0, float fParam1, float fParam2)//Position - 0x1638
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

void func_26(var uParam0, float fParam1, bool bParam2)//Position - 0x165F
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
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	char cVar23[16];
	char cVar24[32];
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	float fVar29;
	float fVar30;
	float fVar31;
	float fVar32;
	float fVar33;
	
	iVar0 = SYSTEM::ROUND((uParam0->f_223 * 255f));
	fVar1 = (func_46() * 0.25f);
	if (unk_0xA7F138B5B1AB2CF6(uParam0->f_1))
	{
		if (uParam0->f_1E >= 0f)
		{
			if (!uParam0->f_2)
			{
				unk_0x29CD142125FE177B(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_23(&(uParam0->f_5));
				if (uParam0->f_22C == 4)
				{
					func_45(&(uParam0->f_D));
				}
				else
				{
					func_23(&(uParam0->f_D));
				}
				if (unk_0x7AF0088ABFA713B6())
				{
					unk_0x1E1FB49121565EB6(150);
				}
				else
				{
					unk_0x1E1FB49121565EB6(100);
				}
				unk_0x5E5DBD0A6623969E(true);
				if (uParam0->f_22C == 4)
				{
					unk_0x1E1FB49121565EB6((uParam0->f_38 - 1));
				}
				else
				{
					unk_0x1E1FB49121565EB6(uParam0->f_38);
				}
				unk_0x5E5DBD0A6623969E(bParam2);
				if (uParam0->f_22C == 4 || uParam0->f_22C == 3)
				{
					unk_0x1E1FB49121565EB6(2);
				}
				else
				{
					unk_0x1E1FB49121565EB6(69);
				}
				unk_0xF9FBC2F3F73D94C9();
				uParam0->f_2 = 1;
			}
			if ((uParam0->f_38 > 0 && !uParam0->f_3) && uParam0->f_23C > 600)
			{
				unk_0x29CD142125FE177B(uParam0->f_1, "TRANSITION_UP");
				unk_0xD44E04EBBDC4CE88(0.15f);
				unk_0x5E5DBD0A6623969E(true);
				unk_0xF9FBC2F3F73D94C9();
				uParam0->f_3 = 1;
			}
		}
		func_44();
		unk_0x4B6031094354FED6(uParam0->f_1, 255, 255, 255, 255, 0);
	}
	fVar2 = ((uParam0->f_230 * uParam0->f_22F) * (1f - uParam0->f_224));
	fVar3 = 0f;
	if (uParam0->f_237)
	{
		fVar3 = (((0.1388889f + func_47((2f * 2f))) * uParam0->f_238) * (1f - uParam0->f_224));
		fVar2 = (fVar2 + (3f * fVar3));
	}
	if (uParam0->f_224 != 0f)
	{
		fVar4 = 0f;
		if (fVar2 < fVar4)
		{
			fVar2 = fVar4;
		}
	}
	else
	{
		fVar5 = 0f;
		if (uParam0->f_1E >= 0.975f)
		{
			if (fVar2 < fVar5)
			{
				fVar2 = fVar5;
			}
		}
	}
	fVar1 = (0.3f * func_46());
	if (uParam0->f_C)
	{
		fVar1 = 0.5f;
	}
	fVar6 = (*uParam0 * 2f);
	if (uParam0->f_22C != 4)
	{
		fVar7 = func_43(&(uParam0->f_D));
		if (fVar6 < fVar7)
		{
			fVar6 = (fVar7 + (3f * 0.006f));
		}
		if (unk_0x3771EE4CB542D71E(0) < 1.4f)
		{
			fVar6 = (fVar6 * 1.3f);
		}
		fVar7 = func_43(&(uParam0->f_226));
		fVar8 = (((0.119f + 0.05f) / func_46()) / 2.5f);
		if ((uParam0->f_22C == 1 || uParam0->f_22C == 0) && uParam0->f_22D != 0)
		{
			if (fVar6 < (fVar7 + (2.6f * fVar8)))
			{
				fVar6 = (fVar7 + (2.6f * fVar8));
			}
		}
		else if (uParam0->f_22C == 5)
		{
			if (fVar6 < (fVar7 + (2.6f * fVar8)))
			{
				fVar6 = (fVar7 + (2.6f * fVar8));
			}
		}
		else if (fVar6 < (fVar7 + (1.9f * fVar8)))
		{
			fVar6 = (fVar7 + (2f * fVar8));
		}
	}
	fVar9 = ((0.499f - (fVar6 / 2f)) + 0.006f);
	fVar10 = ((0.499f + (fVar6 / 2f)) - 0.006f);
	unk_0xD55638CE45B2B948(2, 215);
	unk_0xD55638CE45B2B948(2, 216);
	unk_0xD55638CE45B2B948(2, 200);
	unk_0xBBC4195AD74D153D(2, 200, 1);
	if (uParam0->f_232 || uParam0->f_237)
	{
		if ((IntToFloat(uParam0->f_22E) - (14000f * fParam1)) < IntToFloat(uParam0->f_23C) || ((uParam0->f_237 && uParam0->f_22F > 0.95f) && (uParam0->f_22E - 10000) < uParam0->f_23C))
		{
			if (uParam0->f_237)
			{
				if (uParam0->f_23A < 0)
				{
					uParam0->f_23A = (uParam0->f_23A * -1);
					uParam0->f_23A = (uParam0->f_23C + uParam0->f_23A);
				}
				if (uParam0->f_23A > 0)
				{
					if ((uParam0->f_23A - uParam0->f_23C) > 0)
					{
						func_40((uParam0->f_23A - uParam0->f_23C), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						uParam0->f_23A = 0;
						uParam0->f_239 = 1;
						uParam0->f_237 = 0;
						uParam0->f_231 = 0;
						uParam0->f_232 = 0;
						uParam0->f_22E = uParam0->f_23C + 500;
						uParam0->f_23A = 0;
					}
				}
				if (uParam0->f_238 < 1f)
				{
					uParam0->f_238 = (uParam0->f_238 + (0f + ((1f / 0.166f) * SYSTEM::TIMESTEP())));
					if (uParam0->f_238 > 1f)
					{
						uParam0->f_238 = 1f;
					}
				}
			}
			if (unk_0x17FAADF9916EF741())
			{
				unk_0x37CCF3DE21C7FD23();
			}
			if ((uParam0->f_4 != 0 && uParam0->f_224 < 0.1f) && uParam0->f_23C <= uParam0->f_22E)
			{
				unk_0x4E0EC60D119222B1(7);
				unk_0x4E0EC60D119222B1(8);
				unk_0x4E0EC60D119222B1(9);
				unk_0x4E0EC60D119222B1(6);
				unk_0x4B6031094354FED6(uParam0->f_4, 255, 255, 255, iVar0, 0);
			}
			if (uParam0->f_237)
			{
				unk_0xBBC4195AD74D153D(0, 140, 1);
				unk_0xBBC4195AD74D153D(0, 141, 1);
				unk_0xBBC4195AD74D153D(0, 142, 1);
				unk_0xBBC4195AD74D153D(2, 188, 1);
				if (unk_0xF7DDAAF0EFDAFA22(2, 188))
				{
					unk_0xC4BA30B532FE260F(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
					uParam0->f_237 = 0;
					uParam0->f_231 = 0;
					uParam0->f_232 = 0;
					uParam0->f_22E = uParam0->f_23C + 500;
					uParam0->f_239 = 3;
					uParam0->f_23A = 0;
					unk_0xC4BA30B532FE260F(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
				}
				unk_0xBBC4195AD74D153D(2, 187, 1);
				if (unk_0xF7DDAAF0EFDAFA22(2, 187))
				{
					unk_0xC4BA30B532FE260F(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
					uParam0->f_237 = 0;
					uParam0->f_231 = 0;
					uParam0->f_232 = 0;
					uParam0->f_22E = uParam0->f_23C + 500;
					uParam0->f_239 = 4;
					uParam0->f_23A = 0;
					unk_0xC4BA30B532FE260F(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
				}
				unk_0xBBC4195AD74D153D(2, 202, 1);
				if (unk_0xF7DDAAF0EFDAFA22(2, 202))
				{
					unk_0xC4BA30B532FE260F(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
					uParam0->f_237 = 0;
					uParam0->f_231 = 0;
					uParam0->f_232 = 0;
					uParam0->f_22E = uParam0->f_23C + 500;
					uParam0->f_239 = 2;
					uParam0->f_23A = 0;
					unk_0xC4BA30B532FE260F(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
				}
			}
			else if (uParam0->f_232)
			{
				unk_0x4E0EC60D119222B1(7);
				unk_0x4E0EC60D119222B1(8);
				unk_0x4E0EC60D119222B1(9);
				unk_0x4E0EC60D119222B1(6);
				unk_0xBBC4195AD74D153D(0, 140, 1);
				unk_0xBBC4195AD74D153D(0, 141, 1);
				unk_0xBBC4195AD74D153D(0, 142, 1);
				if (unk_0x694514BD37EC4E94(2, 215) || unk_0xF7DDAAF0EFDAFA22(2, 200))
				{
					unk_0xC4BA30B532FE260F(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
					uParam0->f_232 = 0;
					uParam0->f_231 = 0;
					uParam0->f_22E = uParam0->f_23C + 500;
					unk_0xC4BA30B532FE260F(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
				}
			}
		}
	}
	unk_0xE45648BDBF3441F5(1, &iVar13, &iVar14, &iVar15, &iVar16);
	unk_0xCC4FE6A016BA0765(iVar13, iVar14, iVar15, iVar0);
	unk_0x666751E43D377EAA(fVar9, fVar10);
	unk_0x567A3300A78B3D65(0);
	unk_0xB8F3C51875F7BEA3(1f, 0.4f);
	fVar1 = (fVar1 - func_47(6f));
	fVar1 = (fVar1 + (func_47(30f) - func_47((2f * 2f))));
	fVar11 = (fVar2 - func_47((2f * 14f)));
	if (fVar11 >= 0f)
	{
		fVar12 = func_25((fVar11 / (0.6f * func_47(25f))), 0f, 1f);
		func_44();
		unk_0xF7EBEC3FF57AEC65(0.5f, (fVar1 - (func_47((2f - 0.5f)) - 0.001388889f)), fVar6, func_39(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
	}
	else
	{
		return;
	}
	fVar1 = (fVar1 + func_47((2f * 0.3f)));
	if (uParam0->f_38 > 0)
	{
		fVar1 = (fVar1 + func_47((25f * 0.2f)));
	}
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < uParam0->f_38)
	{
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_46())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_25((fVar11 / (0.8f * func_47(25f))), 0f, 1f);
			func_36(uParam0, iVar17, (fVar1 + func_47(2f)), fVar9, fVar10, SYSTEM::ROUND((IntToFloat(iVar0) * fVar12)));
		}
		else
		{
			return;
		}
		fVar1 = (fVar1 + func_47(25f));
		if (uParam0->f_22C == 4)
		{
			if (iVar17 == (uParam0->f_240 - 1))
			{
				fVar1 = (fVar1 + func_47((25f * 0.2f)));
				fVar11 = (fVar2 - (fVar1 - (0.3f * func_46())));
				if (fVar11 >= 0f)
				{
					fVar1 = (fVar1 + func_47(2f));
					fVar12 = func_25((fVar11 / (0.6f * func_47(25f))), 0f, 1f);
					func_44();
					unk_0xF7EBEC3FF57AEC65(0.5f, (fVar1 + func_47((2f * 0.5f))), fVar6, func_39(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
					fVar1 = (fVar1 + func_47((2f * 0.3f)));
					if (uParam0->f_38 > 0)
					{
						fVar1 = (fVar1 + func_47((25f * 0.2f)));
					}
				}
			}
		}
		iVar17++;
	}
	if (uParam0->f_22C == 4)
	{
		return;
	}
	if (uParam0->f_38 > 0)
	{
		fVar1 = (fVar1 + func_47((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_46())));
		if (fVar11 >= 0f)
		{
			fVar1 = (fVar1 + func_47(2f));
			fVar12 = func_25((fVar11 / (0.6f * func_47(25f))), 0f, 1f);
			func_44();
			unk_0xF7EBEC3FF57AEC65(0.5f, (fVar1 + func_47((2f * 0.5f))), fVar6, func_39(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
		}
	}
	if (uParam0->f_225)
	{
		fVar1 = (fVar1 + func_47((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_46())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_25((fVar11 / (0.8f * func_47(25f))), 0f, 1f);
			unk_0xCC4FE6A016BA0765(iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))));
			func_29(7, 0, 1, &fVar18, &fVar19, 0);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (unk_0x83D607D7994DEF3A() == 0)
			{
				fVar20 = (fVar9 + ((0.119f / func_46()) / 2.5f));
				fVar21 = (fVar10 - ((0.119f / func_46()) / 2.5f));
				if (uParam0->f_22C == 1)
				{
					fVar20 = (fVar9 + (((0.119f + 0.05f) / func_46()) / 2.5f));
					fVar21 = (fVar10 - (((0.119f + 0.05f) / func_46()) / 2.5f));
				}
			}
			if (uParam0->f_22D == 0)
			{
				fVar20 = (fVar20 + (((fVar18 * 0.28f) + 0.006f) / 2f));
				fVar21 = (fVar21 + (((fVar18 * 0.28f) + 0.006f) / 2f));
			}
			if (uParam0->f_22C != 3)
			{
				unk_0x666751E43D377EAA(fVar20, fVar21);
				unk_0x567A3300A78B3D65(1);
			}
			else
			{
				fVar20 = 0.5f;
				unk_0x567A3300A78B3D65(0);
			}
			unk_0xB8F3C51875F7BEA3(1f, 0.4f);
			func_28(&(uParam0->f_226), fVar20, (fVar1 + func_47((2f * 2f))), 0, 0, 0);
			unk_0x666751E43D377EAA(fVar20, fVar21);
			unk_0x567A3300A78B3D65(2);
			unk_0xB8F3C51875F7BEA3(1f, 0.4f);
			unk_0x8F62A12BC2768BE8(0);
			func_44();
			fVar22 = fVar21;
			StringCopy(&cVar23, "MPHud", 16);
			StringCopy(&cVar24, "MissionPassedMedal", 32);
			fVar22 = (fVar22 - ((fVar18 * 0.28f) + 0.006f));
			unk_0x666751E43D377EAA(fVar20, fVar22);
			unk_0xCC4FE6A016BA0765(iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))));
			switch (uParam0->f_22C)
			{
				case 0:
					unk_0x8B371195127AACF2("PERCENTAGE");
					unk_0xAA5C5BF0489E5553(uParam0->f_22A);
					unk_0x3A8B9C7B1C825123(fVar20, (fVar1 + func_47((2f * 2f))), 0);
					break;
				
				case 1:
					unk_0x8B371195127AACF2("FO_TWO_NUM");
					unk_0xAA5C5BF0489E5553(uParam0->f_22A);
					unk_0xAA5C5BF0489E5553(uParam0->f_22B);
					unk_0x3A8B9C7B1C825123(fVar20, (fVar1 + func_47((2f * 2f))), 0);
					break;
				
				case 2:
					unk_0x8B371195127AACF2("MTPHPER_XPNO");
					unk_0xAA5C5BF0489E5553(uParam0->f_22A);
					unk_0x3A8B9C7B1C825123(fVar20, (fVar1 + func_47((2f * 2f))), 0);
					break;
				
				case 5:
					unk_0x8B371195127AACF2("ESDOLLA");
					unk_0xBCDE00BFDE9A5BD1(uParam0->f_22A, 1);
					unk_0x3A8B9C7B1C825123(fVar20, (fVar1 + func_47((2f * 2f))), 0);
					break;
			}
			if (uParam0->f_22D != 0)
			{
				iVar25 = 255;
				iVar26 = 255;
				iVar27 = 255;
				iVar28 = iVar0;
				switch (uParam0->f_22D)
				{
					case 1:
						unk_0xE45648BDBF3441F5(107, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
					
					case 3:
						unk_0xE45648BDBF3441F5(109, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
					
					case 2:
						unk_0xE45648BDBF3441F5(108, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
				}
				fVar29 = (0.001388889f * 5f);
				fVar30 = ((0.00078125f * 16f) * 2f);
				fVar31 = ((0.001388889f * 16f) * 2f);
				fVar32 = ((fVar21 + func_27(4f)) - 0.006f);
				fVar33 = ((fVar1 + func_47(10f)) + fVar29);
				if (uParam0->f_22C == -1)
				{
					fVar32 = (fVar32 - (0.006f * 6f));
				}
				fVar30 = (fVar30 * 0.65f);
				fVar31 = (fVar31 * 0.65f);
				unk_0x51DA985AC0B70E2E(&cVar23, &cVar24, fVar32, fVar33, fVar30, fVar31, 0f, iVar25, iVar26, iVar27, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))), 0);
			}
			fVar1 = (fVar1 + (func_47(30f) - 2f));
		}
	}
}

float func_27(float fParam0)//Position - 0x22EF
{
	return (fParam0 * 0.00078125f);
}

void func_28(char* sParam0, float fParam1, float fParam2, int iParam3, bool bParam4, int iParam5)//Position - 0x22FF
{
	unk_0x8F62A12BC2768BE8(iParam3);
	unk_0xC8793973D4960AC4(iParam5);
	func_44();
	if (bParam4)
	{
		unk_0x8B371195127AACF2("STRING");
		unk_0x607C19B90D297FE2(sParam0);
	}
	else
	{
		unk_0x8B371195127AACF2(sParam0);
	}
	unk_0x3A8B9C7B1C825123(fParam1, fParam2, 0);
}

int func_29(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)//Position - 0x233C
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	StringCopy(&cVar0, func_35(iParam0), 64);
	StringCopy(&cVar1, func_32(iParam0, bParam1), 64);
	if (unk_0x56BEECB328B6D29D(&cVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0x1BBB0A5225346008(&iVar2, &iVar3);
			fVar5 = unk_0x3771EE4CB542D71E(0);
			if (func_31())
			{
				iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar5));
			}
			fVar6 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_31())
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
		vVar7.x = (vVar7.x * (func_30(iParam0) / fVar4));
		vVar7.y = (vVar7.y * (func_30(iParam0) / fVar4));
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

float func_30(int iParam0)//Position - 0x24ED
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

int func_31()//Position - 0x258C
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

var func_32(int iParam0, bool bParam1)//Position - 0x25BE
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0xF1734B55490E9045(&(Global_43C1.f_1A3F[iParam0 /*16*/])))
	{
		if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_1A3F[iParam0 /*16*/])) == -1487683087)
		{
			Var2 = { func_34(unk_0xB5CEFD608600A09F()) };
			if (unk_0xB5AD4F878C27B0F4(&Var2, &uVar1))
			{
				return func_33(&uVar1);
			}
		}
		else
		{
			return func_33(&(Global_43C1.f_1A3F[iParam0 /*16*/]));
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

var func_33(var uParam0)//Position - 0x2A0E
{
	return uParam0;
}

struct<13> func_34(int iParam0)//Position - 0x2A18
{
	struct<13> Var0;
	
	unk_0xB7DBA2C6D2C3C41A(iParam0, &Var0, 13);
	return Var0;
}

char* func_35(int iParam0)//Position - 0x2A2F
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0xF1734B55490E9045(&(Global_43C1.f_16FE[iParam0 /*16*/])))
	{
		if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_16FE[iParam0 /*16*/])) == -1487683087)
		{
			Var1 = { func_34(unk_0xB5CEFD608600A09F()) };
			unk_0xB5AD4F878C27B0F4(&Var1, &uVar0);
			return func_33(&uVar0);
		}
		else
		{
			return func_33(&(Global_43C1.f_16FE[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_36(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5)//Position - 0x2AA4
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	unk_0xE45648BDBF3441F5(1, &iVar0, &iVar1, &iVar2, &uVar3);
	unk_0xCC4FE6A016BA0765(iVar0, iVar1, iVar2, iParam5);
	unk_0x666751E43D377EAA(fParam3, fParam4);
	unk_0x567A3300A78B3D65(1);
	unk_0xB8F3C51875F7BEA3(1f, func_38(14f));
	unk_0x8F62A12BC2768BE8(0);
	unk_0xC8793973D4960AC4(0);
	func_44();
	if (uParam0->f_213[iParam1])
	{
		unk_0x8B371195127AACF2("STRING");
		unk_0x607C19B90D297FE2(&(uParam0->f_47[iParam1 /*16*/]));
	}
	else
	{
		unk_0x8B371195127AACF2(&(uParam0->f_47[iParam1 /*16*/]));
		if (uParam0->f_39[iParam1] == 16 || uParam0->f_39[iParam1] == 17)
		{
			unk_0xAA5C5BF0489E5553(uParam0->f_1E9[iParam1]);
		}
	}
	unk_0x3A8B9C7B1C825123(fParam3, fParam2, 0);
	fVar4 = fParam4;
	switch (uParam0->f_205[iParam1])
	{
		case 0:
			break;
		
		case 1:
			func_29(7, 0, 1, &fVar5, &fVar6, 0);
			unk_0x51DA985AC0B70E2E("CommonMenu", func_32(7, 0), (fParam4 - 0.006f), ((fParam2 + func_47(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 2:
			func_29(5, 0, 1, &fVar5, &fVar6, 0);
			unk_0x51DA985AC0B70E2E("CommonMenu", func_32(5, 0), (fParam4 - 0.006f), ((fParam2 + func_47(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 3:
			func_29(6, 0, 1, &fVar5, &fVar6, 0);
			unk_0x51DA985AC0B70E2E("CommonMenu", func_32(6, 0), (fParam4 - 0.006f), ((fParam2 + func_47(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
	}
	if (uParam0->f_39[iParam1] == 0)
	{
		return;
	}
	if (uParam0->f_39[iParam1] == 15)
	{
		unk_0x567A3300A78B3D65(1);
	}
	else
	{
		unk_0x567A3300A78B3D65(2);
	}
	unk_0xB8F3C51875F7BEA3(1f, func_38(14f));
	if (uParam0->f_39[iParam1] == 5 || uParam0->f_39[iParam1] == 4)
	{
		unk_0x666751E43D377EAA(fParam3, (fVar4 - (0.00078125f * 3f)));
	}
	else
	{
		unk_0x666751E43D377EAA(fParam3, (fVar4 + (0.00078125f * 2f)));
	}
	unk_0xCC4FE6A016BA0765(iVar0, iVar1, iVar2, iParam5);
	func_37(uParam0->f_1E9[iParam1], uParam0->f_1F7[iParam1], fParam4, fParam2, &(uParam0->f_118[iParam1 /*16*/]), uParam0->f_39[iParam1]);
}

void func_37(int iParam0, int iParam1, float fParam2, float fParam3, char* sParam4, int iParam5)//Position - 0x2D2F
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 1;
	unk_0x8F62A12BC2768BE8(0);
	unk_0xC8793973D4960AC4(0);
	func_44();
	fVar1 = 0f;
	fVar2 = (8f * 0.00078125f);
	fVar3 = (16f * 0.001388889f);
	iVar4 = 93;
	iVar5 = 182;
	iVar6 = 229;
	if (iParam5 == 4)
	{
		iVar4 = 194;
		iVar5 = 80;
		iVar6 = 80;
	}
	switch (iParam5)
	{
		case 4:
		case 5:
			unk_0xB8F3C51875F7BEA3(1f, func_38(18f));
			unk_0xC8793973D4960AC4(4);
			if (iParam0 < 0)
			{
				unk_0xE746379C2AF24EF6("ESMINDOLLA");
				unk_0xBCDE00BFDE9A5BD1((-1 * iParam0), 1);
				fVar1 = unk_0x2207C0EA517B975D(0);
			}
			else
			{
				unk_0xE746379C2AF24EF6("ESDOLLA");
				unk_0xBCDE00BFDE9A5BD1(iParam0, 1);
				fVar1 = unk_0x2207C0EA517B975D(0);
			}
			fVar1 = (fVar1 - (fVar1 % 0.00078125f));
			unk_0x51DA985AC0B70E2E("CommonMenu", "BettingBox_Left", (fParam2 - fVar1), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0x51DA985AC0B70E2E("CommonMenu", "BettingBox_Centre", ((fParam2 - (fVar1 * 0.5f)) - (0.00078125f * 2f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), (fVar1 - (fVar2 * 0.5f)), fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0x51DA985AC0B70E2E("CommonMenu", "BettingBox_Right", (fParam2 - (0.00078125f * 4f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0xB8F3C51875F7BEA3(1f, func_38(14f));
			break;
	}
	unk_0x449F0674640D94C0(iVar0);
	switch (iParam5)
	{
		case 11:
			unk_0x8B371195127AACF2("PERCENTAGE");
			unk_0xAA5C5BF0489E5553(iParam0);
			break;
		
		case 1:
			unk_0xC8793973D4960AC4(5);
			unk_0x8B371195127AACF2("FO_NUM");
			unk_0xAA5C5BF0489E5553(iParam0);
			break;
		
		case 2:
			unk_0xC8793973D4960AC4(5);
			unk_0x8B371195127AACF2("FO_TWO_NUM");
			unk_0xAA5C5BF0489E5553(iParam0);
			unk_0xAA5C5BF0489E5553(iParam1);
			break;
		
		case 4:
		case 5:
			unk_0xB8F3C51875F7BEA3(1f, func_38(18f));
		
		case 3:
			if (iParam0 < 0)
			{
				unk_0x8B371195127AACF2("ESMINDOLLA");
				unk_0xBCDE00BFDE9A5BD1((-1 * iParam0), 1);
			}
			else
			{
				unk_0x8B371195127AACF2("ESDOLLA");
				unk_0xBCDE00BFDE9A5BD1(iParam0, 1);
			}
			break;
		
		case 6:
			unk_0x8B371195127AACF2(sParam4);
			break;
		
		case 7:
			unk_0x8B371195127AACF2("STRING");
			unk_0x607C19B90D297FE2(sParam4);
			break;
		
		case 8:
			unk_0xC8793973D4960AC4(5);
			unk_0x8B371195127AACF2("STRING");
			unk_0x4C36886AAFD04CF8(iParam0, 14);
			break;
		
		case 9:
			unk_0xC8793973D4960AC4(5);
			unk_0x8B371195127AACF2("STRING");
			unk_0x4C36886AAFD04CF8(iParam0, 6);
			break;
		
		case 10:
			unk_0xC8793973D4960AC4(5);
			unk_0x8B371195127AACF2("STRING");
			unk_0x4C36886AAFD04CF8(iParam0, 2055);
			break;
		
		case 18:
			unk_0xC8793973D4960AC4(5);
			unk_0x8B371195127AACF2("STRING");
			unk_0x4C36886AAFD04CF8(iParam0, 2055);
			break;
		
		case 12:
			unk_0x8B371195127AACF2("AHD_DIST");
			unk_0xAA5C5BF0489E5553(iParam0);
			break;
		
		case 13:
			unk_0x8B371195127AACF2(sParam4);
			unk_0xAA5C5BF0489E5553(iParam0);
			unk_0xAA5C5BF0489E5553(iParam1);
			break;
		
		case 15:
		case 14:
			unk_0x8B371195127AACF2(sParam4);
			unk_0xAA5C5BF0489E5553(iParam0);
			unk_0xAA5C5BF0489E5553(iParam1);
			break;
		
		case 16:
			unk_0x8B371195127AACF2(sParam4);
			unk_0xAA5C5BF0489E5553(iParam1);
			break;
	}
	if (iParam5 != 17)
	{
		if (iParam5 == 4 || iParam5 == 5)
		{
			unk_0x3A8B9C7B1C825123((fParam2 - (0.00078125f * 4f)), fParam3, 0);
			unk_0xB8F3C51875F7BEA3(1f, func_38(14f));
		}
		else
		{
			unk_0x3A8B9C7B1C825123(fParam2, fParam3, 0);
		}
	}
}

float func_38(float fParam0)//Position - 0x30A8
{
	return (fParam0 * 0.025f);
}

float func_39(float fParam0)//Position - 0x30B8
{
	return (fParam0 * 0.0009259259f);
}

void func_40(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x30C8
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_42(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_14D262.f_1 = 1;
		func_41(7, iVar0);
		Global_14D262.f_1124[iVar0] = iParam0;
		StringCopy(&(Global_14D262.f_1124.f_B[iVar0 /*16*/]), sParam1, 64);
		Global_14D262.f_1124.f_AC[iVar0] = iParam2;
		Global_14D262.f_1124.f_D8[iVar0] = iParam3;
		Global_14D262.f_1124.f_B7[iVar0] = iParam4;
		Global_14D262.f_1124.f_C2[iVar0] = iParam5;
		Global_14D262.f_1124.f_F9[iVar0] = iParam6;
		Global_14D262.f_1124.f_104[iVar0] = iParam7;
		Global_14D262.f_1124.f_CD[iVar0] = iParam8;
		Global_14D262.f_1124.f_13A[iVar0] = iParam9;
		Global_14D262.f_1124.f_145[iVar0] = iParam10;
		Global_14D262.f_1124.f_165[iVar0] = iParam11;
		Global_14D262.f_1124.f_EE[iVar0] = iParam12;
		Global_14D262.f_1124.f_10F[iVar0] = iParam13;
		Global_14D262.f_1124.f_170[iVar0] = iParam14;
		Global_14D262.f_1124.f_17B[iVar0] = iParam15;
		Global_14D262.f_1124.f_186[iVar0] = iParam16;
	}
}

void func_41(int iParam0, int iParam1)//Position - 0x3216
{
	unk_0xF0059F27F7BB6680(&(Global_14D262.f_17E7[iParam0]), iParam1);
}

bool func_42(int iParam0, int iParam1)//Position - 0x322F
{
	return unk_0xFA30DFD0084E92FE(Global_14D262.f_17E7[iParam0], iParam1);
}

float func_43(char* sParam0)//Position - 0x3248
{
	unk_0xE746379C2AF24EF6(sParam0);
	return (unk_0x2207C0EA517B975D(1) / 2f);
}

void func_44()//Position - 0x325D
{
	unk_0x996AC9A66B2A5A3F(1);
	if (unk_0x422F9EDE839E6ABB() || unk_0x17FAADF9916EF741())
	{
		unk_0x996AC9A66B2A5A3F(7);
	}
	unk_0x6AEB48E3B648804A(0);
}

void func_45(char* sParam0)//Position - 0x3285
{
	unk_0xCB30200B8055CA57(sParam0);
}

float func_46()//Position - 0x3293
{
	float fVar0;
	
	fVar0 = 1f;
	if (unk_0x8ACB0C3FACC09467())
	{
	}
	return fVar0;
}

float func_47(float fParam0)//Position - 0x32A7
{
	return (fParam0 * 0.001388889f);
}

int func_48(int iParam0)//Position - 0x32B7
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_49(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_49(int iParam0)//Position - 0x32F4
{
	if (func_50(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_50(int iParam0)//Position - 0x331E
{
	return iParam0 < 3;
}

void func_51(int iParam0)//Position - 0x332A
{
	if (!Global_389D.f_1 == 1)
	{
		if (func_52(0))
		{
			func_53(iParam0);
		}
		unk_0xF0059F27F7BB6680(&Global_93C, 2);
	}
}

int func_52(int iParam0)//Position - 0x3353
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

void func_53(int iParam0)//Position - 0x33AD
{
	if (Global_3943)
	{
		func_55(0, 0);
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
	if (!func_54())
	{
		Global_389D.f_1 = 3;
	}
}

int func_54()//Position - 0x341D
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_55(bool bParam0, bool bParam1)//Position - 0x3444
{
	if (bParam0)
	{
		if (func_52(0))
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

int func_56()//Position - 0x34B8
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_109DE)
	{
		if (Global_109DF[iVar0 /*9*/] > 0)
		{
			if (Global_DB80[Global_109DF[iVar0 /*9*/] /*13*/].f_7 == 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_57(bool bParam0)//Position - 0x34FC
{
	char* sVar0;
	
	unk_0xCB8EEC006EBFC1E7(0);
	switch (func_58())
	{
		case 0:
			if (bParam0)
			{
				sVar0 = "MICHAEL_SMALL_01";
			}
			else
			{
				sVar0 = "MICHAEL_BIG_01";
			}
			break;
		
		case 1:
			if (bParam0)
			{
				sVar0 = "FRANKLIN_SMALL_01";
			}
			else
			{
				sVar0 = "FRANKLIN_BIG_01";
			}
			break;
		
		case 2:
			if (bParam0)
			{
				sVar0 = "TREVOR_SMALL_01";
			}
			else
			{
				sVar0 = "TREVOR_BIG_01";
			}
			break;
	}
	unk_0xC432586F5C2E5AA5(sVar0);
}

int func_58()//Position - 0x356F
{
	func_59();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_59()//Position - 0x3588
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_49(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_48(unk_0xBC25C936A095B5BA());
			if (func_50(iVar0) && (!func_60(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_50(Global_19B04.f_932.f_21B.f_10CD))
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

bool func_60(int iParam0)//Position - 0x3685
{
	return Global_8C41 == iParam0;
}

int func_61(var uParam0, bool bParam1, int iParam2)//Position - 0x3693
{
	uParam0->f_C = iParam2;
	func_64(uParam0);
	func_63(uParam0);
	if (unk_0x3362CDE8460ED38B(&(uParam0->f_226), "SPR_RESULT") || (unk_0x3362CDE8460ED38B(&(uParam0->f_226), "") && uParam0->f_38 > 0))
	{
		uParam0->f_236 = 1;
	}
	if (unk_0x7AF0088ABFA713B6())
	{
		unk_0x8AA3F48A15444B98("MPHud", false);
	}
	if (uParam0->f_1 == 0)
	{
		unk_0x8AA3F48A15444B98("CommonMenu", false);
		unk_0x8AA3F48A15444B98("MPLeaderboard", false);
		unk_0x8AA3F48A15444B98("MPHud", false);
		uParam0->f_1 = unk_0x9934FEFB3B8C6DB8("MP_BIG_MESSAGE_FREEMODE");
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
	}
	uParam0->f_4 = unk_0x4B4A22319BB70CD6("INSTRUCTIONAL_BUTTONS");
	if (bParam1)
	{
		while (((!unk_0xA7F138B5B1AB2CF6(uParam0->f_1) || !unk_0x499783D01578C2D2("CommonMenu")) || !unk_0x499783D01578C2D2("MPLeaderboard")) || !unk_0x499783D01578C2D2("MPHud"))
		{
			SYSTEM::WAIT(0);
		}
		if (uParam0->f_232 || uParam0->f_237)
		{
			while (!unk_0xA7F138B5B1AB2CF6(uParam0->f_4))
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	else
	{
		if (((!unk_0xA7F138B5B1AB2CF6(uParam0->f_1) || !unk_0x499783D01578C2D2("CommonMenu")) || !unk_0x499783D01578C2D2("MPLeaderboard")) || !unk_0x499783D01578C2D2("MPHud"))
		{
			return 0;
		}
		if (uParam0->f_232)
		{
			if (!unk_0xA7F138B5B1AB2CF6(uParam0->f_4))
			{
				return 0;
			}
		}
	}
	if (uParam0->f_232)
	{
		if (uParam0->f_237)
		{
			func_62(uParam0);
		}
		else if (uParam0->f_38 != 0)
		{
			func_22(uParam0, 1);
		}
		else
		{
			func_22(uParam0, 0);
		}
	}
	Global_11647 = 1;
	return 1;
}

void func_62(var uParam0)//Position - 0x3832
{
	unk_0x29CD142125FE177B(uParam0->f_4, "CLEAR_ALL");
	unk_0xF9FBC2F3F73D94C9();
	if (unk_0x8ACB0C3FACC09467())
	{
		unk_0x29CD142125FE177B(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0x5E5DBD0A6623969E(true);
		unk_0xF9FBC2F3F73D94C9();
	}
	unk_0x29CD142125FE177B(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x1E1FB49121565EB6(2);
	func_24(unk_0xE57EAD1FEA2A6FAF(2, 188, true));
	func_23("ES_HELP_TU");
	unk_0xF9FBC2F3F73D94C9();
	unk_0x29CD142125FE177B(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x1E1FB49121565EB6(1);
	func_24(unk_0xE57EAD1FEA2A6FAF(2, 187, true));
	func_23("ES_HELP_TD");
	unk_0xF9FBC2F3F73D94C9();
	unk_0x29CD142125FE177B(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x1E1FB49121565EB6(0);
	func_24(unk_0xE57EAD1FEA2A6FAF(2, 202, true));
	func_23("ES_HELP_AB");
	unk_0xF9FBC2F3F73D94C9();
	unk_0x29CD142125FE177B(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0xF9FBC2F3F73D94C9();
}

void func_63(var uParam0)//Position - 0x38F6
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 0f;
	unk_0x567A3300A78B3D65(0);
	unk_0xB8F3C51875F7BEA3(1f, func_38(16f));
	if (uParam0->f_1F == 0)
	{
		if (uParam0->f_1D)
		{
			unk_0xE746379C2AF24EF6("STRING");
			unk_0x607C19B90D297FE2(&(uParam0->f_D));
			fVar0 = unk_0x2207C0EA517B975D(1);
		}
		else
		{
			unk_0xE746379C2AF24EF6(&(uParam0->f_D));
			fVar0 = unk_0x2207C0EA517B975D(1);
		}
	}
	else
	{
		unk_0xE746379C2AF24EF6("STRING");
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar3 = 0;
		while (iVar3 < uParam0->f_1F)
		{
			switch (uParam0->f_20[iVar3])
			{
				case 0:
					unk_0xAA5C5BF0489E5553(uParam0->f_35[iVar1]);
					iVar1++;
					break;
				
				case 1:
					unk_0xC9C304D0AABE1335(&(uParam0->f_24[iVar2 /*16*/]));
					iVar2++;
					break;
				
				case 2:
					unk_0x607C19B90D297FE2(&(uParam0->f_24[iVar2 /*16*/]));
					iVar2++;
					break;
			}
			iVar3++;
		}
		fVar0 = unk_0x2207C0EA517B975D(1);
	}
	if (fVar0 > ((0.1125f * 2f) - (0.006f * 2f)))
	{
		*uParam0 = ((fVar0 / 2f) + (0.006f * 2f));
	}
}

void func_64(var uParam0)//Position - 0x39FE
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

void func_65()//Position - 0x3A7D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	var uVar6;
	float fVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	vector3 vVar12;
	vector3 vVar13;
	
	if (Global_109DE == 0)
	{
		return;
	}
	if (Global_10A75 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_109DE)
	{
		if (Global_109DF[iVar0 /*9*/].f_3 != 0)
		{
			return;
		}
		iVar0++;
	}
	iVar1 = 0;
	iVar0 = 0;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_109DE)
	{
		iVar3 = Global_109DF[iVar0 /*9*/];
		bVar4 = !Global_DB80[iVar3 /*13*/].f_7;
		bVar5 = Global_DB80[iVar3 /*13*/].f_8;
		uVar6 = Global_DB80[iVar3 /*13*/].f_C;
		fVar7 = Global_DB80[iVar3 /*13*/].f_9;
		bVar8 = false;
		bVar8 = false;
		if (func_70(iVar3, Global_109DF[iVar0 /*9*/].f_1))
		{
			bVar8 = true;
		}
		if (bVar4)
		{
			if (bVar8)
			{
				iVar1 = (iVar1 + 100000000);
			}
		}
		if (bVar5)
		{
			iVar9 = Global_109DF[iVar0 /*9*/].f_1;
			iVar10 = SYSTEM::FLOOR((IntToFloat(iVar9) * fVar7));
			iVar2 = (iVar2 + iVar10);
			iVar1 = (iVar1 + iVar10);
		}
		iVar0++;
	}
	Global_10A70 = iVar1;
	Global_10A71 = iVar2;
	if (unk_0x57D316754A262B34())
	{
		if (Global_10A74 == 0)
		{
			iVar11 = Global_10A75;
			if (iVar11 == 90)
			{
				if (Global_19B04.f_2360.f_63.f_CD[func_69(0)] == 2)
				{
					vVar12.f_2.f_1 = 4;
					vVar12.x = 716;
					unk_0x2F7E331C1ABCF9E9(&vVar12);
					unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
					unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
					unk_0x18054B9E2612CC6D(126, 1, 0f);
					unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
					unk_0x18054B9E2612CC6D(135, func_68(810), 0f);
					unk_0x18054B9E2612CC6D(136, func_68(811), 0f);
					unk_0x18054B9E2612CC6D(132, func_68(812), 0f);
					unk_0x18054B9E2612CC6D(2, func_68(813), 0f);
					unk_0x18054B9E2612CC6D(141, func_68(814), 0f);
					unk_0x18054B9E2612CC6D(127, func_68(815), 0f);
					unk_0x18054B9E2612CC6D(137, func_68(816), 0f);
					unk_0x18054B9E2612CC6D(7, func_68(817), 0f);
					unk_0x18054B9E2612CC6D(133, func_68(818), 0f);
					unk_0x18054B9E2612CC6D(90, func_68(819), 0f);
					vVar12.x = 717;
					unk_0x2F7E331C1ABCF9E9(&vVar12);
					unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
					unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
					unk_0x18054B9E2612CC6D(126, 1, 0f);
					unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
					unk_0x18054B9E2612CC6D(135, func_68(810), 0f);
					unk_0x18054B9E2612CC6D(136, func_68(811), 0f);
					unk_0x18054B9E2612CC6D(132, func_68(812), 0f);
					unk_0x18054B9E2612CC6D(2, func_68(813), 0f);
					unk_0x18054B9E2612CC6D(141, func_68(814), 0f);
					unk_0x18054B9E2612CC6D(127, func_68(815), 0f);
					unk_0x18054B9E2612CC6D(137, func_68(816), 0f);
					unk_0x18054B9E2612CC6D(7, func_68(817), 0f);
					unk_0x18054B9E2612CC6D(133, func_68(818), 0f);
					unk_0x18054B9E2612CC6D(90, func_68(819), 0f);
				}
				else
				{
					func_67(iVar11);
				}
			}
			else if (iVar11 == 47)
			{
				vVar13.f_2.f_1 = 4;
				vVar13.x = 673;
				unk_0x2F7E331C1ABCF9E9(&vVar13);
				unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
				unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
				unk_0x18054B9E2612CC6D(126, 1, 0f);
				unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
				unk_0x18054B9E2612CC6D(142, func_68(413), 0f);
				unk_0x18054B9E2612CC6D(1, func_68(414), 0f);
				unk_0x18054B9E2612CC6D(87, func_68(415), 0f);
				unk_0x18054B9E2612CC6D(138, func_68(416), 0f);
				unk_0x18054B9E2612CC6D(133, func_68(417), 0f);
				unk_0x18054B9E2612CC6D(7, func_68(418), 0f);
				unk_0x18054B9E2612CC6D(90, func_68(419), 0f);
				unk_0x18054B9E2612CC6D(92, func_68(420), 0f);
				unk_0x18054B9E2612CC6D(5, func_68(421), 0f);
				unk_0x18054B9E2612CC6D(127, func_68(422), 0f);
				unk_0x18054B9E2612CC6D(139, func_68(423), 0f);
				unk_0x18054B9E2612CC6D(134, func_68(424), 0f);
				unk_0x18054B9E2612CC6D(141, func_68(425), 0f);
				unk_0x18054B9E2612CC6D(137, func_68(426), 0f);
				unk_0x18054B9E2612CC6D(132, func_68(427), 0f);
				unk_0x18054B9E2612CC6D(2, func_68(428), 0f);
				unk_0x18054B9E2612CC6D(140, 0, 0f);
				vVar13.x = 672;
				unk_0x2F7E331C1ABCF9E9(&vVar13);
				unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
				unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
				unk_0x18054B9E2612CC6D(126, 1, 0f);
				unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
				unk_0x18054B9E2612CC6D(142, func_68(413), 0f);
				unk_0x18054B9E2612CC6D(1, func_68(414), 0f);
				unk_0x18054B9E2612CC6D(87, func_68(415), 0f);
				unk_0x18054B9E2612CC6D(138, func_68(416), 0f);
				unk_0x18054B9E2612CC6D(133, func_68(417), 0f);
				unk_0x18054B9E2612CC6D(7, func_68(418), 0f);
				unk_0x18054B9E2612CC6D(90, func_68(419), 0f);
				unk_0x18054B9E2612CC6D(92, func_68(420), 0f);
				unk_0x18054B9E2612CC6D(5, func_68(421), 0f);
				unk_0x18054B9E2612CC6D(127, func_68(422), 0f);
				unk_0x18054B9E2612CC6D(139, func_68(423), 0f);
				unk_0x18054B9E2612CC6D(134, func_68(424), 0f);
				unk_0x18054B9E2612CC6D(141, func_68(425), 0f);
				unk_0x18054B9E2612CC6D(135, func_68(426), 0f);
				unk_0x18054B9E2612CC6D(132, func_68(427), 0f);
				unk_0x18054B9E2612CC6D(2, func_68(428), 0f);
				unk_0x18054B9E2612CC6D(140, 0, 0f);
			}
			else
			{
				func_67(iVar11);
			}
			Global_19B04.f_2360.f_14A[iVar11 /*6*/].f_4 = Global_10A70;
		}
		else
		{
			func_66(Global_10A75);
		}
	}
}

void func_66(var uParam0)//Position - 0x3FB7
{
	var uVar0;
	
	uVar0 = uParam0;
	uVar0 = uVar0;
}

void func_67(int iParam0)//Position - 0x3FC7
{
	vector3 vVar0;
	struct<13> Var1;
	var uVar2;
	
	vVar0.f_2.f_1 = 4;
	if (!unk_0x57D316754A262B34())
	{
		return;
	}
	if (unk_0xB9ACC1154C623363())
	{
		Var1 = { func_34(unk_0xB5CEFD608600A09F()) };
		if (unk_0xD7F4457CECF10121(&Var1))
		{
			if (unk_0x24723877416AAAFC(&uVar2, 35, &Var1))
			{
				vVar0.y = uVar2;
			}
		}
	}
	switch (iParam0)
	{
		case 0:
			vVar0.x = 577;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(7, func_68(0), 0f);
			unk_0x18054B9E2612CC6D(148, func_68(1), 0f);
			unk_0x18054B9E2612CC6D(139, func_68(2), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(3), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(4), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(5), 0f);
			unk_0x18054B9E2612CC6D(135, func_68(6), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(7), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(8), 0f);
			vVar0.x = 913;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(7, func_68(0), 0f);
			unk_0x18054B9E2612CC6D(148, func_68(1), 0f);
			unk_0x18054B9E2612CC6D(139, func_68(2), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(3), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(4), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(5), 0f);
			unk_0x18054B9E2612CC6D(135, func_68(6), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(7), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(8), 0f);
			return;
		
		case 1:
			vVar0.x = 576;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(2, func_68(9), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(10), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(11), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(12), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(13), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(14), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(15), 0f);
			unk_0x18054B9E2612CC6D(135, func_68(16), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(17), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(18), 0f);
			unk_0x18054B9E2612CC6D(136, func_68(19), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(20), 0f);
			vVar0.x = 575;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(2, func_68(9), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(10), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(11), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(12), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(13), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(14), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(15), 0f);
			unk_0x18054B9E2612CC6D(135, func_68(16), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(17), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(18), 0f);
			unk_0x18054B9E2612CC6D(136, func_68(19), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(20), 0f);
			return;
		
		case 2:
			vVar0.x = 579;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(2, func_68(21), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(22), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(23), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(24), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(25), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(26), 0f);
			unk_0x18054B9E2612CC6D(139, func_68(27), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(28), 0f);
			unk_0x18054B9E2612CC6D(135, func_68(29), 0f);
			vVar0.x = 578;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(2, func_68(21), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(22), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(23), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(24), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(25), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(26), 0f);
			unk_0x18054B9E2612CC6D(139, func_68(27), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(28), 0f);
			unk_0x18054B9E2612CC6D(135, func_68(29), 0f);
			return;
		
		case 3:
			vVar0.x = 797;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(2, func_68(30), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(31), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(32), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(33), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(34), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(35), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(36), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(37), 0f);
			vVar0.x = 796;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(2, func_68(30), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(31), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(32), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(33), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(34), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(35), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(36), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(37), 0f);
			return;
		
		case 4:
			vVar0.x = 799;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(2, func_68(43), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(44), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(45), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(46), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(47), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(48), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(49), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(50), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(51), 0f);
			vVar0.x = 798;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(2, func_68(43), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(44), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(45), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(46), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(47), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(48), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(49), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(50), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(51), 0f);
			return;
		
		case 5:
			vVar0.x = 801;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(2, func_68(57), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(58), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(59), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(60), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(61), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(62), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(63), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(64), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(65), 0f);
			vVar0.x = 800;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(2, func_68(57), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(58), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(59), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(60), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(61), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(62), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(63), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(64), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(65), 0f);
			return;
		
		case 6:
			vVar0.x = 803;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(2, func_68(71), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(72), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(73), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(74), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(75), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(76), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(77), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(78), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(79), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(80), 0f);
			vVar0.x = 802;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(2, func_68(71), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(72), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(73), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(74), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(75), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(76), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(77), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(78), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(79), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(80), 0f);
			return;
		
		case 7:
			vVar0.x = 805;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(2, func_68(86), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(87), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(88), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(89), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(90), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(91), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(92), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(93), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(94), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(95), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(96), 0f);
			vVar0.x = 804;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(2, func_68(86), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(87), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(88), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(89), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(90), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(91), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(92), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(93), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(94), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(95), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(96), 0f);
			return;
		
		case 9:
			vVar0.x = 639;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(7, func_68(102), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(103), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(104), 0f);
			unk_0x18054B9E2612CC6D(135, func_68(105), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(106), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(107), 0f);
			unk_0x18054B9E2612CC6D(136, func_68(108), 0f);
			unk_0x18054B9E2612CC6D(137, func_68(109), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(110), 0f);
			vVar0.x = 638;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(7, func_68(102), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(103), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(104), 0f);
			unk_0x18054B9E2612CC6D(135, func_68(105), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(106), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(107), 0f);
			unk_0x18054B9E2612CC6D(136, func_68(108), 0f);
			unk_0x18054B9E2612CC6D(137, func_68(109), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(110), 0f);
			return;
		
		case 8:
			vVar0.x = 641;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(134, func_68(111), 0f);
			unk_0x18054B9E2612CC6D(135, func_68(112), 0f);
			unk_0x18054B9E2612CC6D(136, func_68(113), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(114), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(115), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(116), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(117), 0f);
			unk_0x18054B9E2612CC6D(142, func_68(118), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(119), 0f);
			vVar0.x = 640;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(134, func_68(111), 0f);
			unk_0x18054B9E2612CC6D(135, func_68(112), 0f);
			unk_0x18054B9E2612CC6D(136, func_68(113), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(114), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(115), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(116), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(117), 0f);
			unk_0x18054B9E2612CC6D(142, func_68(118), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(119), 0f);
			return;
		
		case 10:
			vVar0.x = 646;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(7, func_68(120), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(121), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(122), 0f);
			unk_0x18054B9E2612CC6D(136, func_68(123), 0f);
			unk_0x18054B9E2612CC6D(137, func_68(124), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(125), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(126), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(127), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(128), 0f);
			vVar0.x = 645;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(7, func_68(120), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(121), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(122), 0f);
			unk_0x18054B9E2612CC6D(136, func_68(123), 0f);
			unk_0x18054B9E2612CC6D(137, func_68(124), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(125), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(126), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(127), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(128), 0f);
			return;
		
		case 11:
			vVar0.x = 671;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(2, func_68(129), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(130), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(131), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(132), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(133), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(134), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(135), 0f);
			vVar0.x = 670;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(2, func_68(129), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(130), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(131), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(132), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(133), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(134), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(135), 0f);
			return;
		
		case 12:
			vVar0.x = 603;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(92, func_68(136), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(137), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(138), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(139), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(140), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(141), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(142), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(143), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(144), 0f);
			unk_0x18054B9E2612CC6D(135, func_68(145), 0f);
			unk_0x18054B9E2612CC6D(136, func_68(146), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(147), 0f);
			vVar0.x = 602;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(92, func_68(136), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(137), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(138), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(139), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(140), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(141), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(142), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(143), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(144), 0f);
			unk_0x18054B9E2612CC6D(135, func_68(145), 0f);
			unk_0x18054B9E2612CC6D(136, func_68(146), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(147), 0f);
			return;
		
		case 13:
			vVar0.x = 605;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(87, func_68(148), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(149), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(150), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(151), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(152), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(153), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(154), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(155), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(156), 0f);
			unk_0x18054B9E2612CC6D(139, func_68(157), 0f);
			unk_0x18054B9E2612CC6D(135, func_68(158), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(159), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(160), 0f);
			vVar0.x = 604;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(87, func_68(148), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(149), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(150), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(151), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(152), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(153), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(154), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(155), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(156), 0f);
			unk_0x18054B9E2612CC6D(139, func_68(157), 0f);
			unk_0x18054B9E2612CC6D(135, func_68(158), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(159), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(160), 0f);
			return;
		
		case 14:
			vVar0.x = 648;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(1, func_68(161), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(162), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(163), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(164), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(165), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(166), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(167), 0f);
			unk_0x18054B9E2612CC6D(139, func_68(168), 0f);
			unk_0x18054B9E2612CC6D(135, func_68(169), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(170), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(171), 0f);
			vVar0.x = 647;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(1, func_68(161), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(162), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(163), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(164), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(165), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(166), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(167), 0f);
			unk_0x18054B9E2612CC6D(139, func_68(168), 0f);
			unk_0x18054B9E2612CC6D(135, func_68(169), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(170), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(171), 0f);
			return;
		
		case 15:
			vVar0.x = 650;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(1, func_68(172), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(173), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(174), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(175), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(176), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(177), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(178), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(179), 0f);
			unk_0x18054B9E2612CC6D(139, func_68(180), 0f);
			unk_0x18054B9E2612CC6D(142, func_68(181), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(182), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(183), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(184), 0f);
			vVar0.x = 649;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(1, func_68(172), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(173), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(174), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(175), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(176), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(177), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(178), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(179), 0f);
			unk_0x18054B9E2612CC6D(139, func_68(180), 0f);
			unk_0x18054B9E2612CC6D(142, func_68(181), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(182), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(183), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(184), 0f);
			return;
		
		case 16:
			vVar0.x = 656;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(2, func_68(185), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(186), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(187), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(188), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(189), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(190), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(191), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(192), 0f);
			unk_0x18054B9E2612CC6D(142, func_68(193), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(194), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(195), 0f);
			vVar0.x = 655;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(2, func_68(185), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(186), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(187), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(188), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(189), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(190), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(191), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(192), 0f);
			unk_0x18054B9E2612CC6D(142, func_68(193), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(194), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(195), 0f);
			return;
		
		case 17:
			vVar0.x = 583;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(138, func_68(196), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(197), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(198), 0f);
			unk_0x18054B9E2612CC6D(139, func_68(199), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(200), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(201), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(202), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(203), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(204), 0f);
			vVar0.x = 582;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(138, func_68(196), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(197), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(198), 0f);
			unk_0x18054B9E2612CC6D(139, func_68(199), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(200), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(201), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(202), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(203), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(204), 0f);
			return;
		
		case 18:
			vVar0.x = 585;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(133, func_68(205), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(206), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(207), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(208), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(209), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(210), 0f);
			unk_0x18054B9E2612CC6D(139, func_68(211), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(212), 0f);
			unk_0x18054B9E2612CC6D(140, func_68(213), 0f);
			unk_0x18054B9E2612CC6D(135, func_68(214), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(215), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(216), 0f);
			vVar0.x = 584;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(133, func_68(205), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(206), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(207), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(208), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(209), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(210), 0f);
			unk_0x18054B9E2612CC6D(139, func_68(211), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(212), 0f);
			unk_0x18054B9E2612CC6D(140, func_68(213), 0f);
			unk_0x18054B9E2612CC6D(135, func_68(214), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(215), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(216), 0f);
			return;
		
		case 19:
			vVar0.x = 587;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(7, func_68(217), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(218), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(219), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(220), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(221), 0f);
			unk_0x18054B9E2612CC6D(142, func_68(222), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(223), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(224), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(225), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(226), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(227), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(228), 0f);
			vVar0.x = 586;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(7, func_68(217), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(218), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(219), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(220), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(221), 0f);
			unk_0x18054B9E2612CC6D(142, func_68(222), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(223), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(224), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(225), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(226), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(227), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(228), 0f);
			return;
		
		case 20:
			vVar0.x = 609;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(95, func_68(229), 0f);
			unk_0x18054B9E2612CC6D(135, func_68(230), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(231), 0f);
			unk_0x18054B9E2612CC6D(136, func_68(232), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(233), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(234), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(235), 0f);
			unk_0x18054B9E2612CC6D(137, func_68(236), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(237), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(238), 0f);
			vVar0.x = 608;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(95, func_68(229), 0f);
			unk_0x18054B9E2612CC6D(135, func_68(230), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(231), 0f);
			unk_0x18054B9E2612CC6D(136, func_68(232), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(233), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(234), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(235), 0f);
			unk_0x18054B9E2612CC6D(137, func_68(236), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(237), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(238), 0f);
			return;
		
		case 21:
			vVar0.x = 621;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(2, func_68(239), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(240), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(241), 0f);
			unk_0x18054B9E2612CC6D(135, func_68(242), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(243), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(244), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(245), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(246), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(247), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(248), 0f);
			vVar0.x = 620;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(2, func_68(239), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(240), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(241), 0f);
			unk_0x18054B9E2612CC6D(135, func_68(242), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(243), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(244), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(245), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(246), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(247), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(248), 0f);
			return;
		
		case 22:
			vVar0.x = 675;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(2, func_68(249), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(250), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(251), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(252), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(253), 0f);
			unk_0x18054B9E2612CC6D(139, func_68(254), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(255), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(256), 0f);
			vVar0.x = 674;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(2, func_68(249), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(250), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(251), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(252), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(253), 0f);
			unk_0x18054B9E2612CC6D(139, func_68(254), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(255), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(256), 0f);
			return;
		
		case 26:
			vVar0.x = 712;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(2, func_68(257), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(258), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(259), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(260), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(261), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(262), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(263), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(264), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(265), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(266), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(267), 0f);
			unk_0x18054B9E2612CC6D(135, func_68(268), 0f);
			unk_0x18054B9E2612CC6D(142, func_68(269), 0f);
			unk_0x18054B9E2612CC6D(136, func_68(270), 0f);
			unk_0x18054B9E2612CC6D(137, func_68(271), 0f);
			unk_0x18054B9E2612CC6D(103, func_68(272), 0f);
			vVar0.x = 711;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(2, func_68(257), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(258), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(259), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(260), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(261), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(262), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(263), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(264), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(265), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(266), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(267), 0f);
			unk_0x18054B9E2612CC6D(135, func_68(268), 0f);
			unk_0x18054B9E2612CC6D(142, func_68(269), 0f);
			unk_0x18054B9E2612CC6D(136, func_68(270), 0f);
			unk_0x18054B9E2612CC6D(137, func_68(271), 0f);
			unk_0x18054B9E2612CC6D(103, func_68(272), 0f);
			return;
		
		case 29:
			vVar0.x = 611;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(1, func_68(273), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(274), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(275), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(276), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(277), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(278), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(279), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(280), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(281), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(282), 0f);
			vVar0.x = 610;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(1, func_68(273), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(274), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(275), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(276), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(277), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(278), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(279), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(280), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(281), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(282), 0f);
			return;
		
		default:
	}
	switch (iParam0)
	{
		case 30:
			vVar0.x = 615;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(2, func_68(283), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(284), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(285), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(286), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(287), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(288), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(289), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(290), 0f);
			unk_0x18054B9E2612CC6D(142, func_68(291), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(292), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(293), 0f);
			vVar0.x = 614;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(2, func_68(283), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(284), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(285), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(286), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(287), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(288), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(289), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(290), 0f);
			unk_0x18054B9E2612CC6D(142, func_68(291), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(292), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(293), 0f);
			return;
		
		case 31:
			vVar0.x = 623;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(133, func_68(294), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(295), 0f);
			unk_0x18054B9E2612CC6D(135, func_68(296), 0f);
			unk_0x18054B9E2612CC6D(136, func_68(297), 0f);
			unk_0x18054B9E2612CC6D(137, func_68(298), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(299), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(300), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(301), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(302), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(303), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(304), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(305), 0f);
			vVar0.x = 622;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(133, func_68(294), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(295), 0f);
			unk_0x18054B9E2612CC6D(135, func_68(296), 0f);
			unk_0x18054B9E2612CC6D(136, func_68(297), 0f);
			unk_0x18054B9E2612CC6D(137, func_68(298), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(299), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(300), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(301), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(302), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(303), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(304), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(305), 0f);
			return;
		
		case 38:
			vVar0.x = 627;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(127, func_68(306), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(307), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(308), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(309), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(310), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(311), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(312), 0f);
			unk_0x18054B9E2612CC6D(142, func_68(313), 0f);
			unk_0x18054B9E2612CC6D(135, func_68(314), 0f);
			unk_0x18054B9E2612CC6D(136, func_68(315), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(316), 0f);
			vVar0.x = 626;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(127, func_68(306), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(307), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(308), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(309), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(310), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(311), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(312), 0f);
			unk_0x18054B9E2612CC6D(142, func_68(313), 0f);
			unk_0x18054B9E2612CC6D(135, func_68(314), 0f);
			unk_0x18054B9E2612CC6D(136, func_68(315), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(316), 0f);
			return;
		
		case 33:
			vVar0.x = 741;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(2, func_68(317), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(318), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(319), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(320), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(321), 0f);
			vVar0.x = 740;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(2, func_68(317), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(318), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(319), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(320), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(321), 0f);
			return;
		
		case 34:
			vVar0.x = 745;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(2, func_68(322), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(323), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(324), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(325), 0f);
			vVar0.x = 742;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(2, func_68(322), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(323), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(324), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(325), 0f);
			return;
		
		case 39:
			vVar0.x = 658;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(133, func_68(326), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(327), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(328), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(329), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(330), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(331), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(332), 0f);
			unk_0x18054B9E2612CC6D(142, func_68(333), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(334), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(335), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(336), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(337), 0f);
			vVar0.x = 657;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(133, func_68(326), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(327), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(328), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(329), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(330), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(331), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(332), 0f);
			unk_0x18054B9E2612CC6D(142, func_68(333), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(334), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(335), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(336), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(337), 0f);
			return;
		
		case 40:
			vVar0.x = 581;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(7, func_68(338), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(339), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(340), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(341), 0f);
			unk_0x18054B9E2612CC6D(140, func_68(342), 0f);
			unk_0x18054B9E2612CC6D(142, func_68(343), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(344), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(345), 0f);
			vVar0.x = 580;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(7, func_68(338), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(339), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(340), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(341), 0f);
			unk_0x18054B9E2612CC6D(140, func_68(342), 0f);
			unk_0x18054B9E2612CC6D(142, func_68(343), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(344), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(345), 0f);
			return;
		
		case 41:
			vVar0.x = 619;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(2, func_68(346), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(347), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(348), 0f);
			unk_0x18054B9E2612CC6D(135, func_68(349), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(350), 0f);
			unk_0x18054B9E2612CC6D(136, func_68(351), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(352), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(353), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(354), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(355), 0f);
			unk_0x18054B9E2612CC6D(142, func_68(356), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(357), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(358), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(359), 0f);
			vVar0.x = 618;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(2, func_68(346), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(347), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(348), 0f);
			unk_0x18054B9E2612CC6D(135, func_68(349), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(350), 0f);
			unk_0x18054B9E2612CC6D(136, func_68(351), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(352), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(353), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(354), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(355), 0f);
			unk_0x18054B9E2612CC6D(142, func_68(356), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(357), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(358), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(359), 0f);
			return;
		
		case 42:
			vVar0.x = 704;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(127, func_68(360), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(361), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(362), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(363), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(364), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(365), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(366), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(367), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(368), 0f);
			unk_0x18054B9E2612CC6D(142, func_68(369), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(370), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(371), 0f);
			vVar0.x = 703;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(127, func_68(360), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(361), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(362), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(363), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(364), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(365), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(366), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(367), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(368), 0f);
			unk_0x18054B9E2612CC6D(142, func_68(369), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(370), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(371), 0f);
			return;
		
		case 43:
			vVar0.x = 593;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(1, func_68(372), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(373), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(374), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(375), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(376), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(377), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(378), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(379), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(380), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(381), 0f);
			unk_0x18054B9E2612CC6D(136, func_68(382), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(383), 0f);
			vVar0.x = 592;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(1, func_68(372), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(373), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(374), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(375), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(376), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(377), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(378), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(379), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(380), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(381), 0f);
			unk_0x18054B9E2612CC6D(136, func_68(382), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(383), 0f);
			return;
		
		case 44:
			vVar0.x = 589;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(2, func_68(384), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(385), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(386), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(387), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(388), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(389), 0f);
			unk_0x18054B9E2612CC6D(135, func_68(390), 0f);
			unk_0x18054B9E2612CC6D(139, func_68(391), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(392), 0f);
			vVar0.x = 588;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(2, func_68(384), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(385), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(386), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(387), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(388), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(389), 0f);
			unk_0x18054B9E2612CC6D(135, func_68(390), 0f);
			unk_0x18054B9E2612CC6D(139, func_68(391), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(392), 0f);
			return;
		
		case 45:
			vVar0.x = 635;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(133, func_68(393), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(394), 0f);
			unk_0x18054B9E2612CC6D(135, func_68(395), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(396), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(397), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(398), 0f);
			unk_0x18054B9E2612CC6D(139, func_68(399), 0f);
			vVar0.x = 634;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(133, func_68(393), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(394), 0f);
			unk_0x18054B9E2612CC6D(135, func_68(395), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(396), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(397), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(398), 0f);
			unk_0x18054B9E2612CC6D(139, func_68(399), 0f);
			return;
		
		case 46:
			vVar0.x = 669;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(2, func_68(400), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(401), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(402), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(403), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(404), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(405), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(406), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(407), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(408), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(409), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(410), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(411), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(412), 0f);
			vVar0.x = 668;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(2, func_68(400), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(401), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(402), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(403), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(404), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(405), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(406), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(407), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(408), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(409), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(410), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(411), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(412), 0f);
			return;
		
		case 47:
			vVar0.x = 673;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(142, func_68(413), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(414), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(415), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(416), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(417), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(418), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(419), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(420), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(421), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(422), 0f);
			unk_0x18054B9E2612CC6D(139, func_68(423), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(424), 0f);
			unk_0x18054B9E2612CC6D(141, func_68(425), 0f);
			unk_0x18054B9E2612CC6D(137, func_68(426), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(427), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(428), 0f);
			vVar0.x = 672;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(142, func_68(413), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(414), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(415), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(416), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(417), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(418), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(419), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(420), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(421), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(422), 0f);
			unk_0x18054B9E2612CC6D(139, func_68(423), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(424), 0f);
			unk_0x18054B9E2612CC6D(141, func_68(425), 0f);
			unk_0x18054B9E2612CC6D(135, func_68(426), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(427), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(428), 0f);
			return;
		
		case 48:
			vVar0.x = 694;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(2, func_68(429), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(430), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(431), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(432), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(433), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(434), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(435), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(436), 0f);
			unk_0x18054B9E2612CC6D(142, func_68(437), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(438), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(439), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(440), 0f);
			vVar0.x = 693;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(2, func_68(429), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(430), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(431), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(432), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(433), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(434), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(435), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(436), 0f);
			unk_0x18054B9E2612CC6D(142, func_68(437), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(438), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(439), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(440), 0f);
			return;
		
		case 49:
			vVar0.x = 702;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(2, func_68(441), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(442), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(443), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(444), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(445), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(446), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(447), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(448), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(449), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(450), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(451), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(452), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(453), 0f);
			vVar0.x = 701;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(2, func_68(441), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(442), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(443), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(444), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(445), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(446), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(447), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(448), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(449), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(450), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(451), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(452), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(453), 0f);
			return;
		
		case 53:
			vVar0.x = 714;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(95, func_68(454), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(455), 0f);
			unk_0x18054B9E2612CC6D(139, func_68(456), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(457), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(458), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(459), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(460), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(461), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(462), 0f);
			unk_0x18054B9E2612CC6D(142, func_68(463), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(464), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(465), 0f);
			vVar0.x = 713;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(95, func_68(454), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(455), 0f);
			unk_0x18054B9E2612CC6D(139, func_68(456), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(457), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(458), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(459), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(460), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(461), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(462), 0f);
			unk_0x18054B9E2612CC6D(142, func_68(463), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(464), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(465), 0f);
			return;
		
		case 60:
			vVar0.x = 809;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(2, func_68(466), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(467), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(468), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(469), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(470), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(471), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(472), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(473), 0f);
			vVar0.x = 808;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(2, func_68(466), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(467), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(468), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(469), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(470), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(471), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(472), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(473), 0f);
			return;
		
		case 61:
			vVar0.x = 637;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(2, func_68(474), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(475), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(476), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(477), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(478), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(479), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(480), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(481), 0f);
			unk_0x18054B9E2612CC6D(139, func_68(482), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(483), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(484), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(485), 0f);
			vVar0.x = 636;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(2, func_68(474), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(475), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(476), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(477), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(478), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(479), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(480), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(481), 0f);
			unk_0x18054B9E2612CC6D(139, func_68(482), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(483), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(484), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(485), 0f);
			return;
		
		case 62:
			vVar0.x = 599;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(136, func_68(486), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(487), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(488), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(489), 0f);
			unk_0x18054B9E2612CC6D(137, func_68(490), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(491), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(492), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(493), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(494), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(495), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(496), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(497), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(498), 0f);
			vVar0.x = 598;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(136, func_68(486), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(487), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(488), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(489), 0f);
			unk_0x18054B9E2612CC6D(137, func_68(490), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(491), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(492), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(493), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(494), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(495), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(496), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(497), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(498), 0f);
			return;
		
		case 63:
			vVar0.x = 601;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(87, func_68(499), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(500), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(501), 0f);
			unk_0x18054B9E2612CC6D(135, func_68(502), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(503), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(504), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(505), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(506), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(507), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(508), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(509), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(510), 0f);
			unk_0x18054B9E2612CC6D(137, func_68(511), 0f);
			unk_0x18054B9E2612CC6D(136, func_68(512), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(513), 0f);
			unk_0x18054B9E2612CC6D(9, func_68(514), 0f);
			vVar0.x = 600;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(87, func_68(499), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(500), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(501), 0f);
			unk_0x18054B9E2612CC6D(135, func_68(502), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(503), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(504), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(505), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(506), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(507), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(508), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(509), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(510), 0f);
			unk_0x18054B9E2612CC6D(137, func_68(511), 0f);
			unk_0x18054B9E2612CC6D(136, func_68(512), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(513), 0f);
			unk_0x18054B9E2612CC6D(9, func_68(514), 0f);
			return;
		
		case 64:
			vVar0.x = 607;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(87, func_68(515), 0f);
			unk_0x18054B9E2612CC6D(137, func_68(516), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(517), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(518), 0f);
			unk_0x18054B9E2612CC6D(135, func_68(519), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(520), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(521), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(522), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(523), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(524), 0f);
			unk_0x18054B9E2612CC6D(136, func_68(525), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(526), 0f);
			vVar0.x = 606;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(87, func_68(515), 0f);
			unk_0x18054B9E2612CC6D(137, func_68(516), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(517), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(518), 0f);
			unk_0x18054B9E2612CC6D(135, func_68(519), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(520), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(521), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(522), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(523), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(524), 0f);
			unk_0x18054B9E2612CC6D(136, func_68(525), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(526), 0f);
			return;
		
		case 66:
			vVar0.x = 680;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(133, func_68(527), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(528), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(529), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(530), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(531), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(532), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(533), 0f);
			vVar0.x = 676;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(133, func_68(527), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(528), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(529), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(530), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(531), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(532), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(533), 0f);
			return;
		
		case 67:
			vVar0.x = 679;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(139, func_68(534), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(535), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(536), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(537), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(538), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(539), 0f);
			vVar0.x = 678;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(139, func_68(534), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(535), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(536), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(537), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(538), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(539), 0f);
			return;
		
		case 68:
			vVar0.x = 725;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(95, func_68(540), 0f);
			unk_0x18054B9E2612CC6D(139, func_68(541), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(542), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(543), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(544), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(545), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(546), 0f);
			vVar0.x = 724;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(95, func_68(540), 0f);
			unk_0x18054B9E2612CC6D(139, func_68(541), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(542), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(543), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(544), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(545), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(546), 0f);
			return;
		
		default:
	}
	switch (iParam0)
	{
		case 69:
			vVar0.x = 686;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(92, func_68(547), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(548), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(549), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(550), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(551), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(552), 0f);
			unk_0x18054B9E2612CC6D(136, func_68(553), 0f);
			unk_0x18054B9E2612CC6D(142, func_68(554), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(555), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(556), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(557), 0f);
			unk_0x18054B9E2612CC6D(137, func_68(558), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(559), 0f);
			unk_0x18054B9E2612CC6D(139, func_68(560), 0f);
			vVar0.x = 681;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(92, func_68(547), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(548), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(549), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(550), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(551), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(552), 0f);
			unk_0x18054B9E2612CC6D(136, func_68(553), 0f);
			unk_0x18054B9E2612CC6D(142, func_68(554), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(555), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(556), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(557), 0f);
			unk_0x18054B9E2612CC6D(137, func_68(558), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(559), 0f);
			unk_0x18054B9E2612CC6D(139, func_68(560), 0f);
			return;
		
		case 70:
			vVar0.x = 721;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(142, func_68(561), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(562), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(563), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(564), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(565), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(566), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(567), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(568), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(569), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(570), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(571), 0f);
			unk_0x18054B9E2612CC6D(136, func_68(572), 0f);
			unk_0x18054B9E2612CC6D(137, func_68(573), 0f);
			unk_0x18054B9E2612CC6D(139, func_68(574), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(575), 0f);
			vVar0.x = 720;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(142, func_68(561), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(562), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(563), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(564), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(565), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(566), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(567), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(568), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(569), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(570), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(571), 0f);
			unk_0x18054B9E2612CC6D(136, func_68(572), 0f);
			unk_0x18054B9E2612CC6D(137, func_68(573), 0f);
			unk_0x18054B9E2612CC6D(139, func_68(574), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(575), 0f);
			return;
		
		case 71:
			vVar0.x = 617;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(2, func_68(576), 0f);
			unk_0x18054B9E2612CC6D(135, func_68(577), 0f);
			unk_0x18054B9E2612CC6D(136, func_68(578), 0f);
			unk_0x18054B9E2612CC6D(137, func_68(579), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(580), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(581), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(582), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(583), 0f);
			unk_0x18054B9E2612CC6D(139, func_68(584), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(585), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(586), 0f);
			vVar0.x = 616;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(2, func_68(576), 0f);
			unk_0x18054B9E2612CC6D(135, func_68(577), 0f);
			unk_0x18054B9E2612CC6D(136, func_68(578), 0f);
			unk_0x18054B9E2612CC6D(137, func_68(579), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(580), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(581), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(582), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(583), 0f);
			unk_0x18054B9E2612CC6D(139, func_68(584), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(585), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(586), 0f);
			return;
		
		case 72:
			vVar0.x = 727;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(138, func_68(587), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(588), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(589), 0f);
			unk_0x18054B9E2612CC6D(135, func_68(590), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(591), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(592), 0f);
			unk_0x18054B9E2612CC6D(136, func_68(593), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(594), 0f);
			vVar0.x = 726;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(138, func_68(587), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(588), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(589), 0f);
			unk_0x18054B9E2612CC6D(135, func_68(590), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(591), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(592), 0f);
			unk_0x18054B9E2612CC6D(136, func_68(593), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(594), 0f);
			return;
		
		case 73:
			vVar0.x = 729;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(92, func_68(595), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(596), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(597), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(598), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(599), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(600), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(601), 0f);
			unk_0x18054B9E2612CC6D(139, func_68(602), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(603), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(604), 0f);
			vVar0.x = 728;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(92, func_68(595), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(596), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(597), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(598), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(599), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(600), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(601), 0f);
			unk_0x18054B9E2612CC6D(139, func_68(602), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(603), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(604), 0f);
			return;
		
		case 74:
			vVar0.x = 625;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(87, func_68(605), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(606), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(607), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(608), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(609), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(610), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(611), 0f);
			unk_0x18054B9E2612CC6D(142, func_68(612), 0f);
			unk_0x18054B9E2612CC6D(136, func_68(613), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(614), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(615), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(616), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(617), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(618), 0f);
			unk_0x18054B9E2612CC6D(137, func_68(619), 0f);
			unk_0x18054B9E2612CC6D(139, func_68(620), 0f);
			vVar0.x = 624;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(87, func_68(605), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(606), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(607), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(608), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(609), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(610), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(611), 0f);
			unk_0x18054B9E2612CC6D(142, func_68(612), 0f);
			unk_0x18054B9E2612CC6D(136, func_68(613), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(614), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(615), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(616), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(617), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(618), 0f);
			unk_0x18054B9E2612CC6D(137, func_68(619), 0f);
			unk_0x18054B9E2612CC6D(139, func_68(620), 0f);
			return;
		
		case 75:
			vVar0.x = 719;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(127, func_68(621), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(622), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(623), 0f);
			unk_0x18054B9E2612CC6D(142, func_68(624), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(625), 0f);
			unk_0x18054B9E2612CC6D(136, func_68(626), 0f);
			unk_0x18054B9E2612CC6D(137, func_68(627), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(628), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(629), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(630), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(631), 0f);
			unk_0x18054B9E2612CC6D(135, func_68(632), 0f);
			unk_0x18054B9E2612CC6D(139, func_68(633), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(634), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(635), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(636), 0f);
			vVar0.x = 718;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(127, func_68(621), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(622), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(623), 0f);
			unk_0x18054B9E2612CC6D(142, func_68(624), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(625), 0f);
			unk_0x18054B9E2612CC6D(136, func_68(626), 0f);
			unk_0x18054B9E2612CC6D(137, func_68(627), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(628), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(629), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(630), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(631), 0f);
			unk_0x18054B9E2612CC6D(135, func_68(632), 0f);
			unk_0x18054B9E2612CC6D(139, func_68(633), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(634), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(635), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(636), 0f);
			return;
		
		case 76:
			vVar0.x = 667;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(7, func_68(637), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(638), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(639), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(640), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(641), 0f);
			unk_0x18054B9E2612CC6D(142, func_68(642), 0f);
			unk_0x18054B9E2612CC6D(135, func_68(643), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(644), 0f);
			unk_0x18054B9E2612CC6D(136, func_68(645), 0f);
			unk_0x18054B9E2612CC6D(137, func_68(646), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(647), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(648), 0f);
			vVar0.x = 666;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(7, func_68(637), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(638), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(639), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(640), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(641), 0f);
			unk_0x18054B9E2612CC6D(142, func_68(642), 0f);
			unk_0x18054B9E2612CC6D(135, func_68(643), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(644), 0f);
			unk_0x18054B9E2612CC6D(136, func_68(645), 0f);
			unk_0x18054B9E2612CC6D(137, func_68(646), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(647), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(648), 0f);
			return;
		
		case 78:
			vVar0.x = 735;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(138, func_68(649), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(650), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(651), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(652), 0f);
			vVar0.x = 734;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(138, func_68(649), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(650), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(651), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(652), 0f);
			return;
		
		case 79:
			vVar0.x = 737;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(7, func_68(653), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(654), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(655), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(656), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(657), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(658), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(659), 0f);
			vVar0.x = 736;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(7, func_68(653), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(654), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(655), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(656), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(657), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(658), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(659), 0f);
			return;
		
		case 84:
			vVar0.x = 706;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(7, func_68(660), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(661), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(662), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(663), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(664), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(665), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(666), 0f);
			unk_0x18054B9E2612CC6D(142, func_68(667), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(668), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(669), 0f);
			unk_0x18054B9E2612CC6D(137, func_68(670), 0f);
			unk_0x18054B9E2612CC6D(136, func_68(671), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(672), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(673), 0f);
			vVar0.x = 705;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(7, func_68(660), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(661), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(662), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(663), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(664), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(665), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(666), 0f);
			unk_0x18054B9E2612CC6D(142, func_68(667), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(668), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(669), 0f);
			unk_0x18054B9E2612CC6D(137, func_68(670), 0f);
			unk_0x18054B9E2612CC6D(136, func_68(671), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(672), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(673), 0f);
			return;
		
		case 85:
			vVar0.x = 723;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(133, func_68(674), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(675), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(676), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(677), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(678), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(679), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(680), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(681), 0f);
			unk_0x18054B9E2612CC6D(136, func_68(682), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(683), 0f);
			unk_0x18054B9E2612CC6D(142, func_68(684), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(685), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(686), 0f);
			unk_0x18054B9E2612CC6D(139, func_68(687), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(688), 0f);
			vVar0.x = 722;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(133, func_68(674), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(675), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(676), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(677), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(678), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(679), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(680), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(681), 0f);
			unk_0x18054B9E2612CC6D(136, func_68(682), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(683), 0f);
			unk_0x18054B9E2612CC6D(142, func_68(684), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(685), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(686), 0f);
			unk_0x18054B9E2612CC6D(139, func_68(687), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(688), 0f);
			return;
		
		case 86:
			vVar0.x = 595;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(7, func_68(689), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(690), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(691), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(692), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(693), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(694), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(695), 0f);
			vVar0.x = 594;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(7, func_68(689), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(690), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(691), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(692), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(693), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(694), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(695), 0f);
			return;
		
		case 87:
			vVar0.x = 731;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(90, func_68(696), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(697), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(698), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(699), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(700), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(701), 0f);
			vVar0.x = 730;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(90, func_68(696), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(697), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(698), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(699), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(700), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(701), 0f);
			return;
		
		case 88:
			vVar0.x = 733;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(95, func_68(702), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(703), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(704), 0f);
			unk_0x18054B9E2612CC6D(139, func_68(705), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(706), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(707), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(708), 0f);
			vVar0.x = 732;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(95, func_68(702), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(703), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(704), 0f);
			unk_0x18054B9E2612CC6D(139, func_68(705), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(706), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(707), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(708), 0f);
			return;
		
		case 91:
			vVar0.x = 652;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(138, func_68(709), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(710), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(711), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(712), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(713), 0f);
			unk_0x18054B9E2612CC6D(142, func_68(714), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(715), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(716), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(717), 0f);
			vVar0.x = 651;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(138, func_68(709), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(710), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(711), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(712), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(713), 0f);
			unk_0x18054B9E2612CC6D(142, func_68(714), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(715), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(716), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(717), 0f);
			return;
		
		case 92:
			vVar0.x = 739;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(95, func_68(718), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(719), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(720), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(721), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(722), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(723), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(724), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(725), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(726), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(727), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(728), 0f);
			vVar0.x = 738;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(95, func_68(718), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(719), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(720), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(721), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(722), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(723), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(724), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(725), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(726), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(727), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(728), 0f);
			return;
		
		case 93:
			vVar0.x = 654;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(7, func_68(729), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(730), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(731), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(732), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(733), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(734), 0f);
			unk_0x18054B9E2612CC6D(135, func_68(735), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(736), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(737), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(738), 0f);
			unk_0x18054B9E2612CC6D(136, func_68(739), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(740), 0f);
			vVar0.x = 653;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(7, func_68(729), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(730), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(731), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(732), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(733), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(734), 0f);
			unk_0x18054B9E2612CC6D(135, func_68(735), 0f);
			unk_0x18054B9E2612CC6D(87, func_68(736), 0f);
			unk_0x18054B9E2612CC6D(1, func_68(737), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(738), 0f);
			unk_0x18054B9E2612CC6D(136, func_68(739), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(740), 0f);
			return;
		
		case 90:
			vVar0.x = 597;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(135, func_68(810), 0f);
			unk_0x18054B9E2612CC6D(136, func_68(811), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(812), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(813), 0f);
			unk_0x18054B9E2612CC6D(141, func_68(814), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(815), 0f);
			unk_0x18054B9E2612CC6D(137, func_68(816), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(817), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(818), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(819), 0f);
			vVar0.x = 596;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(135, func_68(810), 0f);
			unk_0x18054B9E2612CC6D(136, func_68(811), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(812), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(813), 0f);
			unk_0x18054B9E2612CC6D(141, func_68(814), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(815), 0f);
			unk_0x18054B9E2612CC6D(137, func_68(816), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(817), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(818), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(819), 0f);
			return;
		
		case 36:
			vVar0.x = 831;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(138, func_68(820), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(821), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(822), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(823), 0f);
			vVar0.x = 832;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(138, func_68(820), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(821), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(822), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(823), 0f);
			return;
		
		case 37:
			vVar0.x = 833;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(138, func_68(824), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(825), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(826), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(827), 0f);
			vVar0.x = 834;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(138, func_68(824), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(825), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(826), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(827), 0f);
			return;
		
		case 24:
			vVar0.x = 848;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(133, func_68(846), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(847), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(848), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(849), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(850), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(851), 0f);
			vVar0.x = 847;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(133, func_68(846), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(847), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(848), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(849), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(850), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(851), 0f);
			return;
		
		case 25:
			vVar0.x = 846;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(133, func_68(852), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(853), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(854), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(855), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(856), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(857), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(858), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(859), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(860), 0f);
			vVar0.x = 845;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(133, func_68(852), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(853), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(854), 0f);
			unk_0x18054B9E2612CC6D(5, func_68(855), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(856), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(857), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(858), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(859), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(860), 0f);
			return;
		
		case 59:
			vVar0.x = 807;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(2, func_68(861), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(862), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(863), 0f);
			unk_0x18054B9E2612CC6D(135, func_68(864), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(865), 0f);
			unk_0x18054B9E2612CC6D(136, func_68(866), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(867), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(868), 0f);
			unk_0x18054B9E2612CC6D(137, func_68(869), 0f);
			vVar0.x = 806;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(2, func_68(861), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(862), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(863), 0f);
			unk_0x18054B9E2612CC6D(135, func_68(864), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(865), 0f);
			unk_0x18054B9E2612CC6D(136, func_68(866), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(867), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(868), 0f);
			unk_0x18054B9E2612CC6D(137, func_68(869), 0f);
			return;
		
		case 65:
			vVar0.x = 838;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(2, func_68(870), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(871), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(872), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(873), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(874), 0f);
			vVar0.x = 837;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(2, func_68(870), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(871), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(872), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(873), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(874), 0f);
			return;
		
		default:
	}
	switch (iParam0)
	{
		case 80:
			vVar0.x = 917;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(133, func_68(875), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(876), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(877), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(878), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(879), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(880), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(881), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(882), 0f);
			vVar0.x = 916;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(133, func_68(875), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(876), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(877), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(878), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(879), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(880), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(881), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(882), 0f);
			return;
		
		case 81:
			vVar0.x = 919;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(133, func_68(883), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(884), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(885), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(886), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(887), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(888), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(889), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(890), 0f);
			vVar0.x = 918;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(133, func_68(883), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(884), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(885), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(886), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(887), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(888), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(889), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(890), 0f);
			return;
		
		case 82:
			vVar0.x = 921;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(133, func_68(891), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(892), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(893), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(894), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(895), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(896), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(897), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(898), 0f);
			vVar0.x = 920;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(133, func_68(891), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(892), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(893), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(894), 0f);
			unk_0x18054B9E2612CC6D(138, func_68(895), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(896), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(897), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(898), 0f);
			return;
		
		case 83:
			vVar0.x = 923;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(2, func_68(899), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(900), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(901), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(902), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(903), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(904), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(905), 0f);
			vVar0.x = 922;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(2, func_68(899), 0f);
			unk_0x18054B9E2612CC6D(134, func_68(900), 0f);
			unk_0x18054B9E2612CC6D(92, func_68(901), 0f);
			unk_0x18054B9E2612CC6D(133, func_68(902), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(903), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(904), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(905), 0f);
			return;
		
		case 89:
			vVar0.x = 925;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(138, func_68(906), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(907), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(908), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(909), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(910), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(911), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(912), 0f);
			vVar0.x = 924;
			unk_0x2F7E331C1ABCF9E9(&vVar0);
			unk_0x18054B9E2612CC6D(131, Global_10A70, 0f);
			unk_0x18054B9E2612CC6D(162, Global_10A71, 0f);
			unk_0x18054B9E2612CC6D(126, 1, 0f);
			unk_0x18054B9E2612CC6D(161, Global_10A73, 0f);
			unk_0x18054B9E2612CC6D(138, func_68(906), 0f);
			unk_0x18054B9E2612CC6D(2, func_68(907), 0f);
			unk_0x18054B9E2612CC6D(7, func_68(908), 0f);
			unk_0x18054B9E2612CC6D(127, func_68(909), 0f);
			unk_0x18054B9E2612CC6D(95, func_68(910), 0f);
			unk_0x18054B9E2612CC6D(90, func_68(911), 0f);
			unk_0x18054B9E2612CC6D(132, func_68(912), 0f);
			return;
		
		default:
	}
}

int func_68(int iParam0)//Position - 0xB6E1
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	switch (iParam0)
	{
		case 665:
		case 676:
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (Global_19B04.f_1.f_7E[Global_DAA3 /*23*/].f_B[iVar0] == 1)
				{
					iVar1 = (iVar1 + Global_19B04.f_1.f_7E[Global_DAA3 /*23*/].f_11[iVar0]);
				}
				iVar0++;
			}
			return iVar1;
		
		default:
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_109DE)
	{
		if (Global_109DF[iVar0 /*9*/] == iParam0)
		{
			return Global_109DF[iVar0 /*9*/].f_1;
		}
		iVar0++;
	}
	return 0;
}

int func_69(int iParam0)//Position - 0xB77B
{
	switch (iParam0)
	{
		case 0:
			return 7;
			break;
		
		case 1:
			return 8;
			break;
		
		case 2:
			return 9;
			break;
		
		case 3:
			return 10;
			break;
		
		case 4:
			return 11;
			break;
	}
	return -1;
}

int func_70(int iParam0, int iParam1)//Position - 0xB7D0
{
	if (iParam1 < 0)
	{
		return 0;
	}
	switch (Global_DB80[iParam0 /*13*/])
	{
		case 1:
		case 2:
		case 4:
		case 5:
		case 17:
			if (iParam1 < 1)
			{
				return 0;
			}
			break;
	}
	if (iParam1 == 2147483647)
	{
		return 0;
	}
	if (((iParam0 == 881 || iParam0 == 889) || iParam0 == 897) && Global_19B04.f_612B[4 /*4*/] == func_58())
	{
		Global_DB80[iParam0 /*13*/].f_2 = 0;
	}
	if (Global_DB80[iParam0 /*13*/].f_3)
	{
		if (iParam1 < Global_DB80[iParam0 /*13*/].f_2)
		{
			return 1;
		}
	}
	else if (iParam1 >= Global_DB80[iParam0 /*13*/].f_2)
	{
		return 1;
	}
	return 0;
}

void func_71(var uParam0)//Position - 0xB89A
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	
	if (Global_DA95)
	{
		Global_DAA4 = 0;
		return;
	}
	iLocal_61 = 0;
	iLocal_62 = 0;
	iVar0 = 0;
	if (func_95(0))
	{
		unk_0x80A449AA1459185A();
		Global_DA97 = 1;
		unk_0x88A3A770FF3B868E(33, 33);
	}
	iVar1 = -1;
	iLocal_66 = 0;
	bVar2 = false;
	iVar0 = 0;
	while (iVar0 < Global_109DE)
	{
		switch (Global_109DF[iVar0 /*9*/])
		{
			case 852:
			case 846:
				Global_109DF[iVar0 /*9*/].f_1 = 1;
				break;
		}
		if (func_82(uParam0, iVar0))
		{
		}
		if (Global_109DF[iVar0 /*9*/] >= 0)
		{
			if (!Global_DB80[Global_109DF[iVar0 /*9*/] /*13*/].f_7)
			{
				iLocal_62++;
				if (Global_109DF[iVar0 /*9*/].f_3 == 2)
				{
					bVar2 = true;
				}
			}
		}
		switch (Global_109DF[iVar0 /*9*/])
		{
			case 84:
			case 100:
			case 69:
			case 41:
			case 54:
				iVar1 = Global_109DF[iVar0 /*9*/].f_1;
				break;
		}
		iVar0++;
	}
	Global_10A73 = iLocal_61;
	fVar3 = func_77(uParam0, iLocal_61, iLocal_62, bVar2);
	if (func_95(0))
	{
		unk_0xCB3A971CB165FFBA(Global_10A75);
		unk_0xCB3A971CB165FFBA(SYSTEM::ROUND(fVar3));
		if (bVar2)
		{
			unk_0xCB3A971CB165FFBA(1);
		}
		else
		{
			unk_0xCB3A971CB165FFBA(0);
		}
		if (Global_10A74)
		{
			unk_0xCB3A971CB165FFBA(1);
		}
		else
		{
			unk_0xCB3A971CB165FFBA(0);
		}
		unk_0xFAAD10092CDBEB81();
		Global_DA97 = 0;
	}
	Global_DAA4 = 0;
	if (iVar1 > -1)
	{
		fVar3 = SYSTEM::TO_FLOAT(iVar1);
	}
	func_72(fVar3, bVar2);
}

void func_72(float fParam0, bool bParam1)//Position - 0xBA0D
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	if (Global_10A74)
	{
		iVar1 = Global_10A75;
		fVar0 = func_76(iVar1);
		if (fVar0 < 100f)
		{
			if (fParam0 >= 100f)
			{
				Global_19B04.f_2703.f_16++;
			}
		}
		if (fParam0 >= fVar0)
		{
			func_75(iVar1, fParam0, bParam1);
		}
	}
	else if (Global_10A75 == -1)
	{
	}
	else
	{
		iVar2 = Global_10A75;
		fVar0 = func_74(iVar2);
		if (fVar0 < 100f)
		{
			if (fParam0 >= 100f)
			{
				Global_19B04.f_2703.f_16++;
			}
		}
		if (fParam0 >= fVar0)
		{
			func_73(iVar2, fParam0, bParam1);
		}
	}
}

void func_73(int iParam0, float fParam1, bool bParam2)//Position - 0xBABE
{
	if (bParam2)
	{
		Global_19B04.f_2360.f_14A[iParam0 /*6*/].f_5 = 50f;
	}
	else
	{
		Global_19B04.f_2360.f_14A[iParam0 /*6*/].f_5 = fParam1;
	}
	Global_62C6 = 1;
}

float func_74(int iParam0)//Position - 0xBAF9
{
	return Global_19B04.f_2360.f_14A[iParam0 /*6*/].f_5;
}

void func_75(int iParam0, float fParam1, bool bParam2)//Position - 0xBB11
{
	if (bParam2)
	{
		Global_19B04.f_4871[iParam0 /*6*/].f_5 = 50f;
	}
	else
	{
		Global_19B04.f_4871[iParam0 /*6*/].f_5 = fParam1;
	}
	Global_62C6 = 1;
}

var func_76(int iParam0)//Position - 0xBB46
{
	return Global_19B04.f_4871[iParam0 /*6*/].f_5;
}

float func_77(var uParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xBB5B
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = func_81(iParam1, iParam2, 0);
	iVar1 = func_80(fVar0);
	if (bParam3)
	{
		fVar0 = 50f;
		iVar1 = 1;
	}
	if (fVar0 == 0f)
	{
		func_79(uParam0, 1, "MTPHPER", 0, 0, 0, 0, 0);
		return fVar0;
	}
	iVar2 = 0;
	switch (func_78(iVar1))
	{
		case 109:
			iVar2 = 3;
			break;
		
		case 108:
			iVar2 = 2;
			break;
		
		case 107:
			iVar2 = 1;
			break;
	}
	switch (func_78(iVar1))
	{
		case 109:
			func_79(uParam0, 1, "MTPHPER", SYSTEM::ROUND(fVar0), 0, 0, iVar2, 0);
			break;
		
		case 108:
			func_79(uParam0, 1, "MTPHPER", SYSTEM::ROUND(fVar0), 0, 0, iVar2, 0);
			break;
		
		case 107:
			func_79(uParam0, 1, "MTPHPER", SYSTEM::ROUND(fVar0), 0, 0, iVar2, 0);
			break;
	}
	return fVar0;
}

int func_78(int iParam0)//Position - 0xBC3D
{
	int iVar0;
	
	iVar0 = 107;
	switch (iParam0)
	{
		case 3:
			iVar0 = 109;
			break;
		
		case 2:
			iVar0 = 108;
			break;
		
		case 1:
			iVar0 = 107;
			break;
	}
	return iVar0;
}

void func_79(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xBC79
{
	uParam0->f_225 = iParam1;
	StringCopy(&(uParam0->f_226), sParam2, 16);
	uParam0->f_22A = iParam3;
	uParam0->f_22B = iParam4;
	uParam0->f_22C = iParam5;
	uParam0->f_22D = iParam6;
	uParam0->f_240 = iParam7;
}

int func_80(float fParam0)//Position - 0xBCB4
{
	if (fParam0 == 0f)
	{
		return 0;
	}
	if (fParam0 == 100f)
	{
		return 3;
	}
	else if (fParam0 > 50f)
	{
		return 2;
	}
	return 1;
}

float func_81(int iParam0, int iParam1, bool bParam2)//Position - 0xBCE9
{
	float fVar0;
	float fVar1;
	
	if (bParam2)
	{
		return 0f;
	}
	if (iParam0 == iParam1)
	{
		return 100f;
	}
	fVar0 = (SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1));
	fVar1 = ((50f * fVar0) + 50f);
	fVar1 = SYSTEM::TO_FLOAT(SYSTEM::CEIL(fVar1));
	if (fVar1 > 100f)
	{
		fVar1 = 100f;
	}
	return fVar1;
}

int func_82(var uParam0, int iParam1)//Position - 0xBD48
{
	float fVar0;
	float fVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	char* sVar8;
	int iVar9;
	
	fVar0 = 0f;
	fVar1 = 0f;
	if (Global_109DF[iParam1 /*9*/] >= 0)
	{
	}
	else
	{
		return 0;
	}
	Var2 = { Global_DB80[Global_109DF[iParam1 /*9*/] /*13*/] };
	if (Var2 == 15)
	{
		Global_109DF[iParam1 /*9*/].f_1 = iLocal_69;
	}
	if (Var2 == 9)
	{
		Global_109DF[iParam1 /*9*/].f_2 = fLocal_68;
	}
	if (Var2 == 14)
	{
		Global_109DF[iParam1 /*9*/].f_1 = SYSTEM::FLOOR(Global_109DF[iParam1 /*9*/].f_2);
	}
	if (func_70(Global_109DF[iParam1 /*9*/], Global_109DF[iParam1 /*9*/].f_1))
	{
		fVar0 = 1f;
	}
	if (Global_109DF[iParam1 /*9*/].f_3 != 0)
	{
		fVar0 = 0f;
	}
	if (!Var2.f_2 == 0)
	{
		fVar1 = SYSTEM::TO_FLOAT(SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_109DF[iParam1 /*9*/].f_1) / SYSTEM::TO_FLOAT(Var2.f_2)) * 100f)));
		if (fVar1 > 100f)
		{
			fVar1 = 100f;
		}
	}
	iVar3 = func_85(Var2.f_4);
	iVar4 = 0;
	switch (Global_109DF[iParam1 /*9*/])
	{
		case 42:
		case 55:
		case 85:
		case 70:
		case 101:
			iVar4 = 1;
			break;
		
		case 84:
		case 100:
		case 69:
		case 41:
		case 54:
			iVar4 = 1;
			break;
	}
	if (Global_109DF[iParam1 /*9*/].f_3 == 0 || iVar4)
	{
		if (Var2.f_3)
		{
			if ((iVar3 > Global_109DF[iParam1 /*9*/].f_1 || iVar3 < 0) || iVar3 == -1)
			{
				func_84(Global_109DF[iParam1 /*9*/].f_1, Global_109DF[iParam1 /*9*/]);
			}
		}
		else if ((Global_109DF[iParam1 /*9*/].f_1 > iVar3 || iVar3 < 0) || iVar3 == -1)
		{
			func_84(Global_109DF[iParam1 /*9*/].f_1, Global_109DF[iParam1 /*9*/]);
		}
	}
	iVar5 = Global_109DF[iParam1 /*9*/].f_1;
	if (Var2.f_7)
	{
		return 1;
	}
	iVar6 = 1;
	if (fVar0 == 1f)
	{
		iLocal_61++;
		iVar6 = 2;
	}
	sVar7 = func_83(Global_109DF[iParam1 /*9*/]);
	if (Global_109DF[iParam1 /*9*/].f_3 != 0)
	{
		if (!func_95(0))
		{
			func_84(-1, Global_109DF[iParam1 /*9*/]);
		}
		sVar8 = "MTPHPERRET";
		switch (Global_109DF[iParam1 /*9*/].f_3)
		{
			case 4:
				sVar8 = "MTPHPERCHE";
				break;
			
			case 2:
				sVar8 = "MTPHPERSKI";
				break;
			
			case 3:
				sVar8 = "MTPHPERTAX";
				break;
			
			case 5:
				sVar8 = "MTPHPERNOREC";
				break;
		}
		if (iLocal_66 == Global_109DF[iParam1 /*9*/].f_3)
		{
			sVar8 = "";
		}
		iLocal_66 = Global_109DF[iParam1 /*9*/].f_3;
		func_90(uParam0, 6, sVar7, sVar8, Global_109DF[iParam1 /*9*/].f_1, 0, 3, 0);
	}
	else
	{
		iLocal_66 = 0;
		switch (Var2)
		{
			case 1:
				func_90(uParam0, 8, sVar7, "", Global_109DF[iParam1 /*9*/].f_1, 0, iVar6, 0);
				break;
			
			case 2:
				func_90(uParam0, 9, sVar7, "", Global_109DF[iParam1 /*9*/].f_1, 0, iVar6, 0);
				break;
			
			case 3:
				func_90(uParam0, 0, sVar7, "", Global_109DF[iParam1 /*9*/].f_1, 0, iVar6, 0);
				break;
			
			case 4:
			case 17:
				func_90(uParam0, 9, sVar7, "", Global_109DF[iParam1 /*9*/].f_1, 0, iVar6, 0);
				break;
			
			case 5:
				func_90(uParam0, 11, sVar7, "", SYSTEM::CEIL(((SYSTEM::TO_FLOAT(Global_109DF[iParam1 /*9*/].f_1) / SYSTEM::TO_FLOAT(Var2.f_2)) * 100f)), 0, iVar6, 0);
				break;
			
			case 6:
				func_90(uParam0, 0, sVar7, "", Global_109DF[iParam1 /*9*/].f_1, 0, iVar6, 0);
				break;
			
			case 7:
				if (iVar5 > Var2.f_2)
				{
					iVar5 = Var2.f_2;
				}
				func_90(uParam0, 2, sVar7, "", iVar5, Var2.f_2, iVar6, 0);
				break;
			
			case 8:
				iVar9 = Global_109DF[iParam1 /*9*/].f_1;
				if (iVar9 > Var2.f_2)
				{
					iVar9 = Var2.f_2;
				}
				func_90(uParam0, 2, sVar7, "", iVar9, Var2.f_2, iVar6, 0);
				break;
			
			case 9:
				func_90(uParam0, 11, sVar7, "", SYSTEM::ROUND(Global_109DF[iParam1 /*9*/].f_2), 0, iVar6, 0);
				break;
			
			case 10:
			case 15:
			case 16:
				func_90(uParam0, 1, sVar7, "", Global_109DF[iParam1 /*9*/].f_1, 0, iVar6, 0);
				break;
			
			case 11:
				func_90(uParam0, 11, sVar7, "", Global_109DF[iParam1 /*9*/].f_1, 0, iVar6, 0);
				break;
			
			case 14:
				func_90(uParam0, 12, sVar7, "", Global_109DF[iParam1 /*9*/].f_1, 0, iVar6, 0);
				break;
			
			case 12:
			case 13:
				func_90(uParam0, 3, sVar7, "", Global_109DF[iParam1 /*9*/].f_1, 0, iVar6, 0);
				break;
			
			default:
				break;
			}
	}
	return 0;
}

char* func_83(int iParam0)//Position - 0xC249
{
	switch (iParam0)
	{
		case 0:
			return "MISHSTA_0";
		
		case 9:
			return "MISHSTA_1";
		
		case 10:
			return "MISHSTA_2";
		
		case 21:
			return "MISHSTA_1";
		
		case 22:
			return "MISHSTA_3";
		
		case 338:
			return "MISHSTA_0";
		
		case 339:
			return "MISHSTA_4";
		
		case 196:
			return "MISHSTA_5";
		
		case 197:
			return "MISHSTA_0";
		
		case 205:
			return "MISHSTA_6";
		
		case 206:
			return "MISHSTA_7";
		
		case 207:
			return "MISHSTA_8";
		
		case 218:
			return "MISHSTA_1";
		
		case 217:
			return "MISHSTA_0";
		
		case 384:
			return "MISHSTA_1";
		
		case 385:
			return "MISHSTA_9";
		
		case 372:
			return "MISHSTA_10";
		
		case 373:
			return "MISHSTA_11";
		
		case 375:
			return "MISHSTA_1";
		
		case 374:
			return "MISHSTA_12";
		
		case 486:
			return "MISHSTA_13";
		
		case 487:
			return "MISHSTA_11";
		
		case 488:
			return "MISHSTA_1";
		
		case 489:
			return "MISHSTA_14";
		
		case 490:
			return "MISHSTA_15";
		
		case 499:
			return "MISHSTA_11";
		
		case 500:
			return "MISHSTA_1";
		
		case 501:
			return "MISHSTA_16";
		
		case 502:
			return "MISHSTA_17";
		
		case 515:
			return "MISHSTA_11";
		
		default:
	}
	switch (iParam0)
	{
		case 516:
			return "MISHSTA_18";
		
		case 517:
			return "MISHSTA_12";
		
		case 518:
			return "MISHSTA_19";
		
		case 137:
			return "MISHSTA_12";
		
		case 136:
			return "MISHSTA_20";
		
		case 148:
			return "MISHSTA_11";
		
		case 149:
			return "MISHSTA_12";
		
		case 150:
			return "MISHSTA_21";
		
		case 229:
			return "MISHSTA_6";
		
		case 230:
			return "MISHSTA_22";
		
		case 273:
			return "MISHSTA_10";
		
		case 274:
			return "MISHSTA_11";
		
		case 275:
			return "MISHSTA_1";
		
		case 276:
			return "MISHSTA_23";
		
		case 277:
			return "MISHSTA_12";
		
		case 283:
			return "MISHSTA_1";
		
		case 284:
			return "MISHSTA_10";
		
		case 285:
			return "MISHSTA_11";
		
		case 346:
			return "MISHSTA_1";
		
		case 239:
			return "MISHSTA_1";
		
		case 240:
			return "MISHSTA_24";
		
		case 241:
			return "MISHSTA_25";
		
		case 242:
			return "MISHSTA_26";
		
		case 294:
			return "MISHSTA_27";
		
		case 295:
			return "MISHSTA_28";
		
		case 296:
			return "MISHSTA_29";
		
		case 297:
			return "MISHSTA_30";
		
		case 298:
			return "MISHSTA_31";
		
		case 308:
			return "MISHSTA_32";
		
		case 102:
			return "MISHSTA_0";
		
		case 115:
			return "MISHSTA_33";
		
		default:
	}
	switch (iParam0)
	{
		case 114:
			return "MISHSTA_1";
		
		case 111:
			return "MISHSTA_34";
		
		case 112:
			return "MISHSTA_35";
		
		case 113:
			return "MISHSTA_36";
		
		case 396:
			return "MISHSTA_1";
		
		case 393:
			return "MISHSTA_37";
		
		case 394:
			return "MISHSTA_38";
		
		case 395:
			return "MISHSTA_39";
		
		case 120:
			return "MISHSTA_0";
		
		case 121:
			return "MISHSTA_6";
		
		case 122:
			return "MISHSTA_40";
		
		case 123:
			return "MISHSTA_41";
		
		case 124:
			return "MISHSTA_42";
		
		case 161:
			return "MISHSTA_43";
		
		case 172:
			return "MISHSTA_43";
		
		case 173:
			return "MISHSTA_1";
		
		case 174:
			return "MISHSTA_11";
		
		case 175:
			return "MISHSTA_44";
		
		case 185:
			return "MISHSTA_1";
		
		case 186:
			return "MISHSTA_6";
		
		case 187:
			return "MISHSTA_45";
		
		case 326:
			return "MISHSTA_46";
		
		case 129:
			return "MISHSTA_1";
		
		case 130:
			return "MISHSTA_0";
		
		case 466:
			return "MISHSTA_1";
		
		case 400:
			return "MISHSTA_1";
		
		case 401:
			return "MISHSTA_47";
		
		case 413:
			return "MISHSTA_48";
		
		case 414:
			return "MISHSTA_10";
		
		case 415:
			return "MISHSTA_11";
		
		case 416:
			return "MISHSTA_49";
		
		default:
	}
	switch (iParam0)
	{
		case 417:
			return "MISHSTA_50";
		
		case 249:
			return "MISHSTA_1";
		
		case 474:
			return "MISHSTA_1";
		
		case 257:
			return "MISHSTA_1";
		
		case 527:
			return "MISHSTA_51";
		
		case 528:
			return "MISHSTA_52";
		
		case 529:
			return "MISHSTA_53";
		
		case 534:
			return "MISHSTA_54";
		
		case 709:
			return "MISHSTA_55";
		
		case 576:
			return "MISHSTA_1";
		
		case 577:
			return "MISHSTA_56";
		
		case 578:
			return "MISHSTA_57";
		
		case 579:
			return "MISHSTA_58";
		
		case 742:
			return "MISHSTA_59";
		
		case 741:
			return "MISHSTA_60";
		
		case 743:
			return "MISHSTA_61";
		
		case 745:
			return "MISHSTA_62";
		
		case 748:
			return "MISHSTA_62";
		
		case 747:
			return "MISHSTA_63";
		
		case 749:
			return "MISHSTA_64";
		
		case 750:
			return "MISHSTA_65";
		
		case 751:
			return "MISHSTA_66";
		
		case 754:
			return "MISHSTA_67";
		
		case 753:
			return "MISHSTA_68";
		
		case 757:
			return "MISHSTA_69";
		
		case 756:
			return "MISHSTA_70";
		
		case 755:
			return "MISHSTA_71";
		
		case 759:
			return "MISHSTA_72";
		
		case 758:
			return "MISHSTA_73";
		
		case 761:
			return "MISHSTA_74";
		
		case 760:
			return "MISHSTA_75";
		
		default:
	}
	switch (iParam0)
	{
		case 762:
			return "MISHSTA_76";
		
		case 763:
			return "MISHSTA_77";
		
		case 766:
			return "MISHSTA_78";
		
		case 769:
			return "MISHSTA_79";
		
		case 768:
			return "MISHSTA_80";
		
		case 767:
			return "MISHSTA_81";
		
		case 771:
			return "MISHSTA_82";
		
		case 770:
			return "MISHSTA_83";
		
		case 773:
			return "MISHSTA_84";
		
		case 772:
			return "MISHSTA_85";
		
		case 775:
			return "MISHSTA_86";
		
		case 774:
			return "MISHSTA_87";
		
		case 777:
			return "MISHSTA_88";
		
		case 776:
			return "MISHSTA_89";
		
		case 779:
			return "MISHSTA_90";
		
		case 778:
			return "MISHSTA_91";
		
		case 782:
			return "MISHSTA_92";
		
		case 780:
			return "MISHSTA_93";
		
		case 781:
			return "MISHSTA_94";
		
		case 784:
			return "MISHSTA_95";
		
		case 783:
			return "MISHSTA_96";
		
		case 786:
			return "MISHSTA_97";
		
		case 785:
			return "MISHSTA_98";
		
		case 788:
			return "MISHSTA_99";
		
		case 787:
			return "MISHSTA_100";
		
		case 789:
			return "MISHSTA_101";
		
		case 792:
			return "MISHSTA_102";
		
		case 791:
			return "MISHSTA_103";
		
		case 790:
			return "MISHSTA_104";
		
		case 793:
			return "MISHSTA_105";
		
		case 794:
			return "MISHSTA_106";
		
		default:
	}
	switch (iParam0)
	{
		case 795:
			return "MISHSTA_0";
		
		case 796:
			return "MISHSTA_107";
		
		case 797:
			return "MISHSTA_108";
		
		case 798:
			return "MISHSTA_109";
		
		case 799:
			return "MISHSTA_110";
		
		case 800:
			return "MISHSTA_111";
		
		case 801:
			return "MISHSTA_112";
		
		case 802:
			return "MISHSTA_113";
		
		case 803:
			return "MISHSTA_114";
		
		case 804:
			return "MISHSTA_115";
		
		case 805:
			return "MISHSTA_116";
		
		case 806:
			return "MISHSTA_117";
		
		case 807:
			return "MISHSTA_118";
		
		case 808:
			return "MISHSTA_119";
		
		case 809:
			return "MISHSTA_120";
		
		case 429:
			return "MISHSTA_1";
		
		case 441:
			return "MISHSTA_1";
		
		case 4:
			return "MISHSTA_121";
		
		case 13:
			return "MISHSTA_11";
		
		case 341:
			return "MISHSTA_122";
		
		case 5:
			return "MISHSTA_123";
		
		case 6:
			return "MISHSTA_124";
		
		case 20:
			return "MISHSTA_10";
		
		case 169:
			return "MISHSTA_125";
		
		case 731:
			return "MISHSTA_126";
		
		case 737:
			return "MISHSTA_10";
		
		case 145:
			return "MISHSTA_127";
		
		case 159:
			return "MISHSTA_10";
		
		case 353:
			return "MISHSTA_10";
		
		case 357:
			return "MISHSTA_11";
		
		case 605:
			return "MISHSTA_11";
		
		default:
	}
	switch (iParam0)
	{
		case 606:
			return "MISHSTA_10";
		
		case 613:
			return "MISHSTA_128";
		
		case 616:
			return "MISHSTA_129";
		
		case 628:
			return "MISHSTA_130";
		
		case 309:
			return "MISHSTA_11";
		
		case 310:
			return "MISHSTA_10";
		
		case 313:
			return "MISHSTA_131";
		
		case 477:
			return "MISHSTA_37";
		
		case 482:
			return "MISHSTA_132";
		
		case 484:
			return "MISHSTA_133";
		
		case 715:
			return "MISHSTA_123";
		
		case 570:
			return "MISHSTA_10";
		
		case 566:
			return "MISHSTA_11";
		
		case 565:
			return "MISHSTA_134";
		
		case 572:
			return "MISHSTA_135";
		
		case 574:
			return "MISHSTA_136";
		
		case 431:
			return "MISHSTA_11";
		
		case 443:
			return "MISHSTA_137";
		
		case 446:
			return "MISHSTA_138";
		
		case 452:
			return "MISHSTA_139";
		
		case 364:
			return "MISHSTA_11";
		
		case 365:
			return "MISHSTA_10";
		
		case 369:
			return "MISHSTA_140";
		
		case 668:
			return "MISHSTA_11";
		
		case 670:
			return "MISHSTA_141";
		
		case 678:
			return "MISHSTA_11";
		
		case 265:
			return "MISHSTA_11";
		
		case 266:
			return "MISHSTA_10";
		
		case 270:
			return "MISHSTA_142";
		
		case 271:
			return "MISHSTA_143";
		
		case 272:
			return "MISHSTA_144";
		
		default:
	}
	switch (iParam0)
	{
		case 765:
			return "MISHSTA_145";
		
		case 764:
			return "MISHSTA_146";
		
		case 330:
			return "MISHSTA_11";
		
		case 331:
			return "MISHSTA_10";
		
		case 643:
			return "MISHSTA_147";
		
		case 644:
			return "MISHSTA_148";
		
		case 645:
			return "MISHSTA_149";
		
		case 646:
			return "MISHSTA_150";
		
		case 404:
			return "MISHSTA_10";
		
		case 721:
			return "MISHSTA_151";
		
		case 752:
			return "MISHSTA_152";
		
		case 147:
			return "MISHSTA_1";
		
		case 336:
			return "MISHSTA_1";
		
		case 371:
			return "MISHSTA_1";
		
		case 557:
			return "MISHSTA_1";
		
		case 575:
			return "MISHSTA_1";
		
		case 629:
			return "MISHSTA_1";
		
		case 647:
			return "MISHSTA_1";
		
		case 685:
			return "MISHSTA_1";
		
		case 693:
			return "MISHSTA_1";
		
		case 738:
			return "MISHSTA_1";
		
		case 650:
			return "MISHSTA_0";
		
		case 649:
			return "MISHSTA_153";
		
		case 825:
			return "MISHSTA_154";
		
		case 824:
			return "MISHSTA_155";
		
		case 821:
			return "MISHSTA_156";
		
		case 820:
			return "MISHSTA_157";
		
		case 319:
			return "MISHSTA_158";
		
		case 318:
			return "MISHSTA_159";
		
		case 317:
			return "MISHSTA_1";
		
		case 322:
			return "MISHSTA_1";
		
		default:
	}
	switch (iParam0)
	{
		case 323:
			return "MISHSTA_0";
		
		case 324:
			return "MISHSTA_160";
		
		case 816:
			return "MISHSTA_161";
		
		case 815:
			return "MISHSTA_162";
		
		case 814:
			return "MISHSTA_163";
		
		case 746:
			return "MISHSTA_164";
		
		case 514:
			return "MISHSTA_165";
		
		case 744:
			return "MISHSTA_166";
		
		case 841:
			return "MISHSTA_167";
		
		case 840:
			return "MISHSTA_1";
		
		case 838:
			return "MISHSTA_167";
		
		case 828:
			return "MISHSTA_1";
		
		case 829:
			return "MISHSTA_167";
		
		case 831:
			return "MISHSTA_1";
		
		case 832:
			return "MISHSTA_167";
		
		case 834:
			return "MISHSTA_1";
		
		case 835:
			return "MISHSTA_167";
		
		case 837:
			return "MISHSTA_1";
		
		case 739:
			return "MISHSTA_168";
		
		case 619:
			return "MISHSTA_169";
		
		case 560:
			return "MISHSTA_170";
		
		case 559:
			return "MISHSTA_171";
		
		case 558:
			return "MISHSTA_172";
		
		case 673:
			return "MISHSTA_10";
		
		case 688:
			return "MISHSTA_10";
		
		case 687:
			return "MISHSTA_173";
		
		case 844:
			return "MISHSTA_174";
		
		case 845:
			return "MISHSTA_175";
		
		case 843:
			return "MISHSTA_176";
		
		case 236:
			return "MISHSTA_177";
		
		case 29:
			return "MISHSTA_178";
		
		default:
	}
	switch (iParam0)
	{
		case 109:
			return "MISHSTA_179";
		
		case 108:
			return "MISHSTA_180";
		
		case 135:
			return "MISHSTA_181";
		
		case 227:
			return "MISHSTA_182";
		
		case 852:
			return "MISHSTA_183";
		
		case 846:
			return "MISHSTA_184";
		
		case 440:
			return "MISHSTA_185";
		
		case 864:
			return "MISHSTA_186";
		
		case 863:
			return "MISHSTA_187";
		
		case 861:
			return "MISHSTA_1";
		
		case 862:
			return "MISHSTA_188";
		
		case 870:
			return "MISHSTA_1";
		
		case 544:
			return "MISHSTA_0";
		
		case 543:
			return "MISHSTA_189";
		
		case 593:
			return "MISHSTA_190";
		
		case 592:
			return "MISHSTA_1";
		
		case 603:
			return "MISHSTA_1";
		
		case 899:
			return "MISHSTA_1";
		
		case 900:
			return "MISHSTA_191";
		
		case 883:
			return "MISHSTA_192";
		
		case 891:
			return "MISHSTA_192";
		
		case 657:
			return "MISHSTA_193";
		
		case 875:
			return "MISHSTA_192";
		
		case 906:
			return "MISHSTA_194";
		
		case 706:
			return "MISHSTA_195";
		
		case 699:
			return "MISHSTA_196";
		
		case 726:
			return "MISHSTA_197";
		
		case 237:
			return "MISHSTA_198";
		
		case 658:
			return "MISHSTA_1";
		
		case 877:
			return "MISHSTA_0";
		
		case 885:
			return "MISHSTA_0";
		
		default:
	}
	switch (iParam0)
	{
		case 893:
			return "MISHSTA_0";
		
		case 694:
			return "MISHSTA_110";
		
		case 881:
			return "MISHSTA_199";
		
		case 889:
			return "MISHSTA_199";
		
		case 897:
			return "MISHSTA_199";
		
		case 633:
			return "MISHSTA_200";
		
		case 632:
			return "MISHSTA_201";
		
		case 38:
			return "MISHSTA_202";
		
		case 41:
			return "MISHSTA_203";
		
		case 39:
			return "MISHSTA_204";
		
		case 40:
			return "MISHSTA_205";
		
		case 42:
			return "MISHSTA_206";
		
		case 56:
			return "MISHSTA_205";
		
		case 52:
			return "MISHSTA_202";
		
		case 53:
			return "MISHSTA_207";
		
		case 54:
			return "MISHSTA_203";
		
		case 55:
			return "MISHSTA_206";
		
		case 70:
			return "MISHSTA_206";
		
		case 69:
			return "MISHSTA_203";
		
		case 67:
			return "MISHSTA_132";
		
		case 68:
			return "MISHSTA_205";
		
		case 66:
			return "MISHSTA_202";
		
		case 81:
			return "MISHSTA_202";
		
		case 82:
			return "MISHSTA_208";
		
		case 84:
			return "MISHSTA_203";
		
		case 83:
			return "MISHSTA_205";
		
		case 85:
			return "MISHSTA_206";
		
		case 97:
			return "MISHSTA_202";
		
		case 98:
			return "MISHSTA_209";
		
		case 100:
			return "MISHSTA_203";
		
		case 99:
			return "MISHSTA_205";
		
		default:
	}
	switch (iParam0)
	{
		case 101:
			return "MISHSTA_206";
		
		default:
	}
	return "MISSING_MISSION_STAT_STRING";
}

void func_84(int iParam0, int iParam1)//Position - 0xD3FA
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_DB80[iParam1 /*13*/].f_4;
	if (iVar0 == 0)
	{
		return;
	}
	Global_DB80[iParam1 /*13*/].f_1 = iParam0;
	iVar1 = iParam0 + 1;
	unk_0x3A57956BCE003880(iVar0, iVar1, 1);
	if (func_95(0) && Global_DA97)
	{
		unk_0xCB3A971CB165FFBA(iVar0);
		unk_0xCB3A971CB165FFBA(iParam0);
		unk_0xCB3A971CB165FFBA(iParam1);
	}
}

int func_85(int iParam0)//Position - 0xD453
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	if (unk_0x6CB99B97664C3727(iParam0, &iVar0, -1))
	{
		return (iVar0 - 1);
	}
	return -1;
}

bool func_86(int iParam0)//Position - 0xD47C
{
	return unk_0xFA30DFD0084E92FE(Global_19B04.f_1.f_76, iParam0);
}

int func_87(int iParam0)//Position - 0xD492
{
	if (iParam0 == 13 || iParam0 == -1)
	{
		return 0;
	}
	return Global_19B04.f_2360.f_63.f_CD[iParam0];
}

int func_88(int iParam0)//Position - 0xD4BF
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 7;
			break;
		
		case 1:
			iVar0 = 8;
			break;
		
		case 2:
			iVar0 = 9;
			break;
		
		case 3:
			iVar0 = 10;
			break;
		
		case 4:
			iVar0 = 11;
			break;
	}
	return iVar0;
}

char* func_89(int iParam0)//Position - 0xD510
{
	switch (iParam0)
	{
		case 1:
			return "JCSLMVANR";
		
		case 2:
			return "JCHMDRAZ";
		
		case 3:
			return "HSTAGNCUT";
		
		case 4:
			return "UNSELLWEAP";
		
		case 0:
			return "HSTECUT";
		
		case 5:
			return "HSTSLWLD";
		
		case 6:
			return "HSTCASECUT";
		
		default:
	}
	return "UNSET_HEISTPENALTY";
}

void func_90(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xD57E
{
	int iVar0;
	
	if (uParam0->f_38 == 13)
	{
		return;
	}
	iVar0 = uParam0->f_38;
	uParam0->f_39[iVar0] = iParam1;
	StringCopy(&(uParam0->f_47[iVar0 /*16*/]), sParam2, 64);
	StringCopy(&(uParam0->f_118[iVar0 /*16*/]), sParam3, 64);
	uParam0->f_1E9[iVar0] = iParam4;
	uParam0->f_1F7[iVar0] = iParam5;
	uParam0->f_205[iVar0] = iParam6;
	uParam0->f_213[iVar0] = iParam7;
	uParam0->f_38++;
}

void func_91(var uParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0xD5F1
{
	StringCopy(&(uParam0->f_5), sParam1, 16);
	StringCopy(&(uParam0->f_D), sParam2, 64);
	uParam0->f_1D = iParam3;
	uParam0->f_B = 0;
}

void func_92(int iParam0)//Position - 0xD614
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
	
	if (Global_15CE8.f_3)
	{
		return;
	}
	switch (iParam0)
	{
		case 4:
			Global_19B04.f_1.f_7E[iParam0 /*23*/].f_1 = 201600000;
			Global_19B04.f_1.f_7E[iParam0 /*23*/] = 201600000;
			break;
		
		case 3:
			Global_19B04.f_1.f_7E[iParam0 /*23*/].f_1 = 331985;
			Global_19B04.f_1.f_7E[iParam0 /*23*/] = 331985;
			break;
		
		case 1:
			Global_19B04.f_1.f_7E[iParam0 /*23*/] = 20000000;
			Global_19B04.f_1.f_7E[iParam0 /*23*/].f_1 = 20000000;
			break;
	}
	iVar0 = func_87(func_69(iParam0));
	iVar1 = Global_19B04.f_1.f_7E[iParam0 /*23*/].f_1;
	switch (iParam0)
	{
		case 0:
			func_94(iParam0, 2, 2500000);
			break;
		
		case 1:
			func_94(iParam0, 4, 20000000);
			break;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		Global_19B04.f_1.f_7E[iParam0 /*23*/].f_11[iVar2] = 0;
		iVar2++;
	}
	iVar2 = 0;
	iVar3 = 0;
	iVar2 = 0;
	while (iVar2 < Global_15CF2[iParam0 /*38*/].f_25)
	{
		if (Global_15CF2[iParam0 /*38*/].f_1F[iVar2] > 0)
		{
			iVar3 = (iVar3 + Global_15CF2[iParam0 /*38*/].f_1F[iVar2]);
			Global_19B04.f_1.f_7E[iParam0 /*23*/].f_1 = (Global_19B04.f_1.f_7E[iParam0 /*23*/].f_1 - Global_15CF2[iParam0 /*38*/].f_1F[iVar2]);
		}
		iVar2++;
	}
	iVar1 = (iVar1 - iVar3);
	if (iParam0 == 2)
	{
		iVar4 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_19B04.f_1.f_7E[iParam0 /*23*/].f_1) * 0.78f));
		func_94(iParam0, 3, iVar4);
		Global_19B04.f_1.f_7E[iParam0 /*23*/].f_1 = (Global_19B04.f_1.f_7E[iParam0 /*23*/].f_1 - iVar4);
		iVar1 = (iVar1 - iVar4);
	}
	iVar2 = 0;
	while (iVar2 < 5)
	{
		iVar5 = Global_19B04.f_1.f_C[iVar0 /*6*/][iVar2];
		switch (Global_19B04.f_1.f_7E[iParam0 /*23*/].f_B[iVar2])
		{
			case 1:
			case 2:
			case 0:
				Global_19B04.f_1.f_7E[iParam0 /*23*/].f_11[iVar2] = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(Global_15B8F[iVar5 /*5*/].f_1) * 0.01f) * IntToFloat(Global_19B04.f_1.f_7E[iParam0 /*23*/].f_1)));
				break;
			
			case 3:
				Global_19B04.f_1.f_7E[iParam0 /*23*/].f_11[iVar2] = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(Global_15B8F[iVar5 /*5*/].f_1) * 0.015f) * IntToFloat(Global_19B04.f_1.f_7E[iParam0 /*23*/].f_1)));
				break;
		}
		iVar2++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < Global_15C29[iVar0 /*19*/])
	{
		iVar1 = (iVar1 - Global_19B04.f_1.f_7E[iParam0 /*23*/].f_11[iVar2]);
		iVar2++;
	}
	Global_19B04.f_1.f_7E[0 /*23*/].f_2[0] = 0;
	Global_19B04.f_1.f_7E[0 /*23*/].f_2[1] = 0;
	Global_19B04.f_1.f_7E[0 /*23*/].f_2[2] = 0;
	Global_15CE8.f_7 = 0;
	switch (iParam0)
	{
		case 0:
			Global_19B04.f_1.f_7E[0 /*23*/].f_6[0] = 0f;
			Global_19B04.f_1.f_7E[0 /*23*/].f_6[1] = 0f;
			Global_19B04.f_1.f_7E[0 /*23*/].f_6[2] = -1f;
			Global_19B04.f_1.f_7E[0 /*23*/].f_2[1] = SYSTEM::CEIL((0.12f * IntToFloat(Global_19B04.f_1.f_7E[iParam0 /*23*/].f_1)));
			iVar1 = (iVar1 - Global_19B04.f_1.f_7E[0 /*23*/].f_2[1]);
			Global_15CE8.f_7 = SYSTEM::CEIL((0.14f * IntToFloat(Global_19B04.f_1.f_7E[iParam0 /*23*/].f_1)));
			iVar1 = (iVar1 - Global_15CE8.f_7);
			Global_15CE8.f_6 = 14f;
			Global_19B04.f_1.f_7E[0 /*23*/].f_2[0] = iVar1;
			break;
		
		case 1:
			Global_19B04.f_1.f_7E[1 /*23*/].f_6[0] = 0f;
			Global_19B04.f_1.f_7E[1 /*23*/].f_6[1] = 0f;
			Global_19B04.f_1.f_7E[1 /*23*/].f_6[2] = 0f;
			Global_19B04.f_1.f_7E[1 /*23*/].f_2[0] = 0;
			Global_19B04.f_1.f_7E[1 /*23*/].f_2[1] = 0;
			Global_19B04.f_1.f_7E[1 /*23*/].f_2[2] = 0;
			Global_15CE8.f_6 = -1f;
			break;
		
		case 2:
			Global_19B04.f_1.f_7E[2 /*23*/].f_6[0] = 0f;
			Global_19B04.f_1.f_7E[2 /*23*/].f_6[1] = 0f;
			Global_19B04.f_1.f_7E[2 /*23*/].f_6[2] = 0f;
			Global_15CE8.f_7 = SYSTEM::CEIL((0.12f * IntToFloat(Global_19B04.f_1.f_7E[iParam0 /*23*/].f_1)));
			iVar1 = (iVar1 - Global_15CE8.f_7);
			Global_15CE8.f_6 = 12f;
			Global_19B04.f_1.f_7E[2 /*23*/].f_2[0] = (iVar1 / 3);
			Global_19B04.f_1.f_7E[2 /*23*/].f_2[1] = (iVar1 / 3);
			Global_19B04.f_1.f_7E[2 /*23*/].f_2[2] = (iVar1 / 3);
			Global_15CE8.f_6 = 0f;
			break;
		
		case 3:
			Global_19B04.f_1.f_7E[3 /*23*/].f_6[0] = -1f;
			Global_19B04.f_1.f_7E[3 /*23*/].f_6[1] = 0f;
			Global_19B04.f_1.f_7E[3 /*23*/].f_6[2] = 0f;
			Global_15CE8.f_7 = SYSTEM::CEIL((0.12f * IntToFloat(Global_19B04.f_1.f_7E[iParam0 /*23*/].f_1)));
			iVar1 = (iVar1 - Global_15CE8.f_7);
			Global_15CE8.f_6 = 12f;
			Global_19B04.f_1.f_7E[3 /*23*/].f_2[1] = iVar1;
			break;
		
		case 4:
			Global_19B04.f_1.f_7E[4 /*23*/].f_6[0] = 0f;
			Global_19B04.f_1.f_7E[4 /*23*/].f_6[1] = 0f;
			Global_19B04.f_1.f_7E[4 /*23*/].f_6[2] = 0f;
			Global_15CE8.f_7 = SYSTEM::CEIL((0.12f * IntToFloat(Global_19B04.f_1.f_7E[iParam0 /*23*/].f_1)));
			iVar1 = (iVar1 - Global_15CE8.f_7);
			Global_15CE8.f_6 = 12f;
			Global_19B04.f_1.f_7E[4 /*23*/].f_2[0] = (iVar1 / 3);
			Global_19B04.f_1.f_7E[4 /*23*/].f_2[1] = (iVar1 / 3);
			Global_19B04.f_1.f_7E[4 /*23*/].f_2[2] = (iVar1 / 3);
			Global_15CE8.f_6 = 0f;
			break;
	}
	iVar6 = Global_19B04.f_1.f_7E[iParam0 /*23*/].f_1;
	if (Global_19B04.f_1.f_7E[iParam0 /*23*/].f_6[0] != -1f)
	{
		Global_19B04.f_1.f_7E[iParam0 /*23*/].f_6[0] = ((SYSTEM::TO_FLOAT(Global_19B04.f_1.f_7E[iParam0 /*23*/].f_2[0]) / SYSTEM::TO_FLOAT(iVar6)) * 100f);
	}
	if (Global_19B04.f_1.f_7E[iParam0 /*23*/].f_6[1] != -1f)
	{
		Global_19B04.f_1.f_7E[iParam0 /*23*/].f_6[1] = ((SYSTEM::TO_FLOAT(Global_19B04.f_1.f_7E[iParam0 /*23*/].f_2[1]) / SYSTEM::TO_FLOAT(iVar6)) * 100f);
	}
	if (Global_19B04.f_1.f_7E[iParam0 /*23*/].f_6[2] != -1f)
	{
		Global_19B04.f_1.f_7E[iParam0 /*23*/].f_6[2] = ((SYSTEM::TO_FLOAT(Global_19B04.f_1.f_7E[iParam0 /*23*/].f_2[2]) / SYSTEM::TO_FLOAT(iVar6)) * 100f);
	}
	if (Global_15CE8.f_6 != -1f)
	{
		Global_15CE8.f_6 = ((SYSTEM::TO_FLOAT(Global_15CE8.f_7) / SYSTEM::TO_FLOAT(iVar6)) * 100f);
	}
	switch (iParam0)
	{
		case 0:
			unk_0x3A57956BCE003880(joaat("jewel_heist_raw_take"), Global_19B04.f_1.f_7E[iParam0 /*23*/], 1);
			break;
	}
	iVar7 = 0;
	iVar8 = 0;
	iVar8 = 0;
	while (iVar8 < 3)
	{
		iVar7 = (iVar7 + Global_19B04.f_1.f_7E[iParam0 /*23*/].f_2[iVar8]);
		iVar8++;
	}
	switch (iParam0)
	{
		case 0:
			func_93(810, Global_19B04.f_1.f_7E[iParam0 /*23*/].f_1, 1);
			func_93(811, iVar7, 1);
			break;
		
		case 1:
			switch (func_87(8))
			{
				case 3:
					func_93(610, Global_19B04.f_1.f_7E[iParam0 /*23*/].f_1, 1);
					func_93(611, iVar7, 1);
					break;
				
				case 4:
					func_93(622, Global_19B04.f_1.f_7E[iParam0 /*23*/].f_1, 1);
					func_93(623, iVar7, 1);
					break;
			}
			break;
		
		case 2:
			func_93(734, Global_19B04.f_1.f_7E[iParam0 /*23*/].f_1, 1);
			func_93(735, iVar7, 1);
			break;
		
		case 3:
			switch (func_87(10))
			{
				case 6:
					break;
				
				case 7:
					break;
			}
			break;
		
		case 4:
			switch (func_87(11))
			{
				case 8:
					func_93(664, Global_19B04.f_1.f_7E[iParam0 /*23*/].f_1, 1);
					func_93(671, iVar7, 1);
					break;
				
				case 9:
					func_93(674, Global_19B04.f_1.f_7E[iParam0 /*23*/].f_1, 1);
					func_93(682, iVar7, 1);
					break;
			}
			break;
	}
	Global_15CE8.f_3 = 1;
	Global_DA9F = 0;
}

void func_93(int iParam0, int iParam1, bool bParam2)//Position - 0xDF15
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_109DE)
	{
		if (Global_109DF[iVar0 /*9*/] == iParam0)
		{
			if (bParam2)
			{
				Global_109DF[iVar0 /*9*/].f_1 = iParam1;
			}
			else
			{
				Global_109DF[iVar0 /*9*/].f_1 = (Global_109DF[iVar0 /*9*/].f_1 + iParam1);
			}
			return;
		}
		iVar0++;
	}
	if (Global_109DF[iVar0 /*9*/] != -1)
	{
		if (Global_DB80[Global_109DF[iVar0 /*9*/] /*13*/] == 3)
		{
			if (Global_109DF[iVar0 /*9*/].f_1 > 1)
			{
				Global_109DF[iVar0 /*9*/].f_1 = 1;
			}
			if (Global_109DF[iVar0 /*9*/].f_1 < 0)
			{
				Global_109DF[iVar0 /*9*/].f_1 = 0;
			}
		}
	}
}

void func_94(int iParam0, int iParam1, int iParam2)//Position - 0xDFBF
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == 0)
	{
		return;
	}
	iVar0 = iParam2;
	if (iVar0 < 0)
	{
		iVar0 = (iVar0 * -1);
	}
	bVar1 = false;
	if (Global_15CF2[iParam0 /*38*/].f_25 == 5)
	{
		bVar1 = true;
	}
	iVar2 = Global_15CF2[iParam0 /*38*/].f_25;
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		if (Global_15CF2[iParam0 /*38*/].f_19[iVar3] == iParam1)
		{
			Global_15CF2[iParam0 /*38*/].f_19[iVar3] = iParam1;
			Global_15CF2[iParam0 /*38*/].f_1F[iVar3] = iVar0;
			return;
		}
		iVar3++;
	}
	if (bVar1)
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					unk_0x3A57956BCE003880(joaat("hcs_penalty_jewel_drop_money"), iParam2, 1);
					break;
				
				case 2:
					unk_0x3A57956BCE003880(joaat("hcs_penalty_paleto_drop_money"), iParam2, 1);
					break;
				
				case 4:
					unk_0x3A57956BCE003880(joaat("hcs_penalty_bigs_drop_money"), iParam2, 1);
					break;
			}
			break;
		
		case 1:
			unk_0x3A57956BCE003880(joaat("hcs_penalty_jewel_drop_money"), iParam2, 1);
			break;
		
		case 2:
			unk_0x3A57956BCE003880(joaat("hcs_penalty_jewel_madr_house"), iParam2, 1);
			break;
		
		case 4:
			unk_0x3A57956BCE003880(joaat("hcs_penalty_docks_unsell_wpn"), iParam2, 1);
			break;
		
		case 3:
			unk_0x3A57956BCE003880(joaat("hcs_penalty_paleto_agent_cut"), iParam2, 1);
			break;
		
		case 5:
			unk_0x3A57956BCE003880(joaat("hcs_penalty_bigs_slow_loading"), iParam2, 1);
			break;
		
		case 6:
			unk_0x3A57956BCE003880(joaat("hcs_penalty_bigs_hostage_gift"), iParam2, 1);
			break;
	}
	Global_15CF2[iParam0 /*38*/].f_19[Global_15CF2[iParam0 /*38*/].f_25] = iParam1;
	Global_15CF2[iParam0 /*38*/].f_1F[Global_15CF2[iParam0 /*38*/].f_25] = iVar0;
	Global_15CF2[iParam0 /*38*/].f_25++;
}

bool func_95(bool bParam0)//Position - 0xE177
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_1163A, 0);
}

void func_96()//Position - 0xE1A2
{
	int iVar0;
	int iVar1;
	
	if (Global_109DE > 16)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_109DE)
	{
		if (Global_109DF[iVar0 /*9*/].f_1 == 0)
		{
			if (Global_109DF[iVar0 /*9*/].f_2 != 0f)
			{
				Global_109DF[iVar0 /*9*/].f_1 = SYSTEM::FLOOR(Global_109DF[iVar0 /*9*/].f_2);
			}
		}
		iVar1 = Global_109DF[iVar0 /*9*/];
		if (iVar1 > 0)
		{
			if (Global_DB80[iVar1 /*13*/] == 9)
			{
				Global_109DF[iVar0 /*9*/].f_1 = SYSTEM::ROUND(fLocal_68);
			}
			if (Global_DB80[iVar1 /*13*/] == 15)
			{
				Global_109DF[iVar0 /*9*/].f_1 = iLocal_69;
			}
		}
		iVar0++;
	}
}

void func_97()//Position - 0xE249
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	if (Global_DAB2)
	{
		return;
	}
	Global_DAB2 = 1;
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = (func_7(joaat("sp0_shots")) - Global_DAB6);
	iVar1 = (func_7(joaat("sp0_hits")) - Global_DAB5);
	iVar0 = (iVar0 + (func_7(joaat("sp1_shots")) - Global_DAB8));
	iVar1 = (iVar1 + (func_7(joaat("sp1_hits")) - Global_DAB7));
	iVar0 = (iVar0 + (func_7(joaat("sp2_shots")) - Global_DABA));
	iVar1 = (iVar1 + (func_7(joaat("sp2_hits")) - Global_DAB9));
	SYSTEM::WAIT(0);
	fVar2 = 100f;
	if (!iVar0 == 0)
	{
		fVar3 = SYSTEM::TO_FLOAT(iVar0);
		fVar4 = SYSTEM::TO_FLOAT(iVar1);
		fVar2 = SYSTEM::TO_FLOAT(SYSTEM::FLOOR(((fVar4 / fVar3) * 100f)));
		if (fVar2 > 100f)
		{
			fVar2 = 100f;
		}
	}
	fLocal_68 = fVar2;
	iLocal_69 = iVar0;
}

void func_98(var uParam0)//Position - 0xE31F
{
	func_64(uParam0);
	uParam0->f_23A = 0;
	uParam0->f_1F = 0;
	uParam0->f_38 = 0;
	uParam0->f_237 = 0;
	uParam0->f_239 = 0;
}

int func_99()//Position - 0xE349
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		return Global_161D2.f_2C == 1;
	}
	return 0;
}

void func_100()//Position - 0xE365
{
	int iVar0;
	
	if (Global_63B3 == 0 && !Global_63B7)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_109DE)
	{
		Global_109DF[iVar0 /*9*/].f_3 = 4;
		iVar0++;
	}
}

void func_101()//Position - 0xE3A4
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	func_102();
	if (((Global_DAA5 && unk_0x6A9CDB766DF7216F(unk_0xFC1CAE18F3ECBF2D())) && !unk_0x102F1A3BD4B68933()) && !unk_0xE186ACC7BE9B244E())
	{
		Global_DAA5 = 0;
	}
	if (Global_DA9E)
	{
		Global_DA9E = 0;
		iLocal_60 = 0;
	}
	bVar0 = true;
	bVar1 = true;
	if (unk_0xE186ACC7BE9B244E())
	{
		bVar0 = false;
	}
	if (!unk_0xD96732B3E060BAE1())
	{
		bVar0 = false;
		bVar1 = false;
	}
	if (Global_DAA5)
	{
		bVar0 = false;
		bVar1 = false;
	}
	if (!unk_0x8CC5A4A5615C6420(unk_0xFC1CAE18F3ECBF2D()))
	{
		bVar0 = false;
		bVar1 = false;
	}
	if (bVar0)
	{
		iLocal_60 = SYSTEM::ROUND((unk_0x11F9F9006143871A() * 1000f));
	}
	iVar2 = 0;
	fVar3 = 0f;
	iVar2 = 0;
	while (iVar2 < Global_109DE)
	{
		if (Global_109DF[iVar2 /*9*/] >= 0)
		{
			iVar4 = Global_DB80[Global_109DF[iVar2 /*9*/] /*13*/];
			switch (iVar4)
			{
				case 6:
					if (Global_109DF[iVar2 /*9*/].f_6 != 0)
					{
						if (Global_109DF[iVar2 /*9*/].f_7 == 1)
						{
							Global_109DF[iVar2 /*9*/].f_8 = 0;
							Global_109DF[iVar2 /*9*/].f_1 = 0;
							Global_109DF[iVar2 /*9*/].f_7 = 0;
						}
						else if (unk_0x724D816EA203A79E(Global_109DF[iVar2 /*9*/].f_6))
						{
							if (!unk_0x1D403DFADBC2DE3C(Global_109DF[iVar2 /*9*/].f_6, 0))
							{
								iLocal_64 = Global_109DF[iVar2 /*9*/].f_8;
								iLocal_63 = unk_0x8D66276473ABD7CC(Global_109DF[iVar2 /*9*/].f_6);
								iLocal_65 = (iLocal_64 - iLocal_63);
								if (iLocal_65 > 0)
								{
									Global_109DF[iVar2 /*9*/].f_1 = (Global_109DF[iVar2 /*9*/].f_1 + iLocal_65);
									if (Global_109DF[iVar2 /*9*/].f_1 < 0)
									{
										Global_109DF[iVar2 /*9*/].f_1 = (Global_109DF[iVar2 /*9*/].f_1 * -1);
									}
								}
								Global_109DF[iVar2 /*9*/].f_8 = iLocal_63;
							}
						}
						else
						{
							Global_109DF[iVar2 /*9*/].f_6 = 0;
						}
					}
					break;
				
				case 1:
					Global_109DF[iVar2 /*9*/].f_1 = (Global_109DF[iVar2 /*9*/].f_1 + iLocal_60);
					break;
				
				case 2:
					if (Global_DAA6)
					{
						Global_109DF[iVar2 /*9*/].f_1 = (Global_109DF[iVar2 /*9*/].f_1 + iLocal_60);
					}
					break;
				
				case 3:
					break;
				
				case 4:
					if (Global_DAA7)
					{
						if (Global_DAA9 == -1 || Global_109DF[iVar2 /*9*/] == Global_DAA9)
						{
							if (((Global_109DF[iVar2 /*9*/] == 339 || Global_109DF[iVar2 /*9*/] == 179) || Global_109DF[iVar2 /*9*/] == 342) || Global_109DF[iVar2 /*9*/] == 234)
							{
								Global_109DF[iVar2 /*9*/].f_1 = (Global_109DF[iVar2 /*9*/].f_1 + SYSTEM::ROUND((unk_0x11F9F9006143871A() * 1000f)));
							}
							else
							{
								Global_109DF[iVar2 /*9*/].f_1 = (Global_109DF[iVar2 /*9*/].f_1 + iLocal_60);
							}
						}
					}
					break;
				
				case 5:
					if (bVar1)
					{
						if (Global_DAAB == -1 || Global_DAAB == Global_109DF[iVar2 /*9*/])
						{
							if (!Global_DAAA == 0)
							{
								if (unk_0x724D816EA203A79E(Global_DAAA))
								{
									if (!unk_0x1D403DFADBC2DE3C(Global_DAAA, 0))
									{
										if (unk_0xD27AC0E9B78CFDD7(Global_DAAA))
										{
											fVar3 = unk_0x8910237449BB6F79(Global_DAAA);
											if (fVar3 > Global_109DF[iVar2 /*9*/].f_2)
											{
												Global_109DF[iVar2 /*9*/].f_2 = fVar3;
											}
										}
									}
								}
							}
						}
					}
					break;
				
				case 7:
					break;
				
				case 8:
					break;
				
				case 9:
					break;
				
				case 13:
					break;
				
				case 12:
					break;
				
				case 10:
				case 11:
				case 14:
					break;
				
				case 16:
					break;
				
				case 17:
					if (func_50(func_58()))
					{
						if (unk_0x36210078ECC9DC40(unk_0xFC1CAE18F3ECBF2D()) && unk_0xC788DE2EF3138672(unk_0xFC1CAE18F3ECBF2D()))
						{
							Global_109DF[iVar2 /*9*/].f_1 = (Global_109DF[iVar2 /*9*/].f_1 + iLocal_60);
						}
					}
					break;
				
				case 15:
					break;
				
				default:
					break;
				}
		}
		iVar2++;
	}
}

void func_102()//Position - 0xE77D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	if ((((Global_10AA2 == 0 && Global_10A98 == 0) && Global_DB3E == 0) && Global_DABC == 0) && !Global_10A76)
	{
		return;
	}
	iVar10 = 0;
	if (Global_DABC > 0)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 64)
		{
			if (Global_DABD[iVar0 /*2*/] != 0)
			{
				if (!unk_0x724D816EA203A79E(Global_DABD[iVar0 /*2*/]))
				{
					Global_DABD[iVar0 /*2*/] = 0;
					Global_DABC = (Global_DABC - 1);
				}
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < unk_0x432AA9CCB3EE0174(0))
	{
		iVar3 = unk_0x2BFAC254CC069912(0, iVar0);
		switch (iVar3)
		{
			case 140:
				unk_0x414AA1932D1C88E2(0, iVar0, &iVar4, 1);
				if (unk_0x724D816EA203A79E(iVar4))
				{
					unk_0x1D403DFADBC2DE3C(iVar4, 0);
					if (Global_DB3E > 0)
					{
						iVar7 = unk_0x6F79ECA8C83E4357(iVar4);
						iVar1 = 0;
						iVar1 = 0;
						while (iVar1 < Global_DB3E)
						{
							if (Global_DB3F[iVar1 /*2*/] == iVar7)
							{
								iVar10 = (iVar10 + Global_DB3F[iVar1 /*2*/].f_1);
							}
							iVar1++;
						}
					}
					if (unk_0x386592AF38881675(iVar4) && unk_0x399F7937FFE4DEBF(iVar4) != unk_0xBC25C936A095B5BA())
					{
						iVar5 = unk_0x08AB8FFCC3668639(unk_0x399F7937FFE4DEBF(iVar4));
						iVar14 = 0;
						if (unk_0x724D816EA203A79E(iVar5))
						{
							if (unk_0xD27AC0E9B78CFDD7(iVar5))
							{
								if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
								{
									iVar15 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
								}
								else
								{
									iVar15 = unk_0x3E12B546F3F2597A();
								}
								if (unk_0x724D816EA203A79E(iVar15) && unk_0x233ED4CD1F1A42C1(iVar5) == iVar15)
								{
									iVar14 = 1;
								}
							}
						}
						if ((unk_0x386592AF38881675(iVar5) && unk_0xA95CF30C72EB526E(unk_0xFC1CAE18F3ECBF2D()) == unk_0x399F7937FFE4DEBF(iVar5)) || iVar14)
						{
							if (unk_0x386592AF38881675(iVar5))
							{
								iVar6 = unk_0xEF16F494406FEE60(unk_0x399F7937FFE4DEBF(iVar4));
								if (Global_DABC > 0)
								{
									iVar11 = func_106(iVar4);
									if (iVar11 != -1)
									{
										unk_0x4DA34DFBFD6B69A0(unk_0x399F7937FFE4DEBF(Global_DABD[iVar11 /*2*/]), &iLocal_67);
										if (iLocal_67 == 31086 || iLocal_67 == 39317)
										{
											if (iVar6 != 0 && iVar6 != joaat("weapon_unarmed"))
											{
												func_105();
												Global_DABD[iVar11 /*2*/] = 0;
												Global_DABC = (Global_DABC - 1);
											}
										}
									}
								}
								if (Global_10AA2 > 0)
								{
									iVar1 = 0;
									iVar1 = 0;
									while (iVar1 < Global_10AA2)
									{
										if (Global_10A99[iVar1 /*2*/] == iVar6)
										{
											func_93(Global_10A99[iVar1 /*2*/].f_1, 1, 0);
										}
										iVar1++;
									}
								}
							}
							if (Global_10A76)
							{
								iVar12 = unk_0x399F7937FFE4DEBF(iVar4);
								iVar13 = unk_0x2F1156328414FE82(iVar12);
								if (!unk_0x5CAE759AE8219D20(iVar4) && ((((((!iVar13 == 22 && !iVar13 == 19) && !iVar13 == 17) && !iVar13 == 18) && !iVar13 == 27) && !iVar13 == 29) && !iVar13 == 28))
								{
									iVar9 = unk_0x1EC515406A2FCF0C(unk_0xA95CF30C72EB526E(unk_0xFC1CAE18F3ECBF2D()), unk_0x399F7937FFE4DEBF(iVar4));
									switch (iVar9)
									{
										case 255:
										case 0:
										case 1:
										case 2:
											if (unk_0x95FEE2A3FD506FA6(unk_0x399F7937FFE4DEBF(iVar4)))
											{
												func_104();
											}
											break;
										
										default:
											break;
										}
									}
							}
							if (Global_10A98 > 0)
							{
								iVar1 = 0;
								iVar2 = Global_10A98;
								bVar8 = false;
								while (!bVar8)
								{
									if (Global_10A77[iVar1 /*2*/] != 0)
									{
										if (unk_0x724D816EA203A79E(Global_10A77[iVar1 /*2*/]))
										{
											if (unk_0x1D403DFADBC2DE3C(Global_10A77[iVar1 /*2*/], 0))
											{
												if (Global_10A77[iVar1 /*2*/] == iVar4)
												{
													func_93(Global_10A77[iVar1 /*2*/].f_1, 1, 0);
													Global_10A77[iVar1 /*2*/] = 0;
												}
											}
										}
										else
										{
											Global_10A77[iVar1 /*2*/] = 0;
										}
										iVar2 = (iVar2 - 1);
									}
									iVar1++;
									if (iVar1 == 16 || iVar2 == 0)
									{
										bVar8 = true;
									}
								}
								if (Global_10A98 > 0)
								{
									while (Global_10A77[(Global_10A98 - 1) /*2*/] == 0 && Global_10A98 > 1)
									{
										if (Global_10A98 > 1)
										{
											Global_10A98 = (Global_10A98 - 1);
										}
									}
								}
							}
						}
					}
				}
				break;
		}
		iVar0++;
	}
	if (iVar10 > 0)
	{
		func_103(iVar10);
	}
}

void func_103(int iParam0)//Position - 0xEB86
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_109DE)
	{
		iVar1 = Global_109DF[iVar0 /*9*/];
		if (Global_DB80[iVar1 /*13*/] == 13)
		{
			Global_109DF[iVar0 /*9*/].f_1 = (Global_109DF[iVar0 /*9*/].f_1 + iParam0);
		}
		iVar0++;
	}
}

void func_104()//Position - 0xEBD3
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_109DE)
	{
		iVar1 = Global_109DF[iVar0 /*9*/];
		if (Global_DB80[iVar1 /*13*/] == 16)
		{
			Global_109DF[iVar0 /*9*/].f_1++;
		}
		iVar0++;
	}
}

void func_105()//Position - 0xEC1F
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (Global_DABC == 0)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < Global_109DE)
	{
		iVar2 = Global_109DF[iVar1 /*9*/];
		if (Global_DB80[iVar2 /*13*/] == 7)
		{
			Global_109DF[iVar1 /*9*/].f_1++;
			bVar0 = true;
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

int func_106(int iParam0)//Position - 0xEC7D
{
	int iVar0;
	
	if (Global_DABC == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (Global_DABD[iVar0 /*2*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_107()//Position - 0xECB8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	if (unk_0x059E38BCA78ACE46())
	{
		if (unk_0x2E343C537697E125() == 33)
		{
			if (unk_0xE00B3C21150289B9() == 33)
			{
				iVar0 = unk_0xE0AB8FE29795AD72();
				iVar1 = -1;
				iVar2 = (iVar0 - 4);
				if (((iVar0 - 4) % 3) == 0)
				{
					iVar0 = ((iVar0 - 4) / 3);
					iVar3 = 0;
					iVar3 = 0;
					while (iVar3 < iVar0)
					{
						iVar4 = unk_0xA12942E05B2F1500(iVar3 * 3 + 1);
						iVar5 = unk_0xA12942E05B2F1500(iVar3 * 3 + 2);
						switch (iVar5)
						{
							case 84:
							case 100:
							case 69:
							case 41:
							case 54:
								iVar1 = iVar4;
								break;
						}
						func_84(iVar4, iVar5);
						iVar3++;
					}
					iVar6 = unk_0xA12942E05B2F1500(iVar2);
					iVar7 = unk_0xA12942E05B2F1500(iVar2 + 1);
					bVar8 = false;
					if (unk_0xA12942E05B2F1500(iVar2 + 2) > 0)
					{
						bVar8 = true;
					}
					iVar9 = 0;
					if (unk_0xA12942E05B2F1500(iVar2 + 3) > 0)
					{
						iVar9 = 1;
					}
					Global_10A74 = iVar9;
					Global_10A75 = iVar6;
					if (iVar1 == -1)
					{
						func_72(SYSTEM::TO_FLOAT(iVar7), bVar8);
					}
					else
					{
						func_72(SYSTEM::TO_FLOAT(iVar1), bVar8);
					}
				}
				func_108();
			}
		}
		if (unk_0x2E343C537697E125() == 13)
		{
			if (unk_0xE00B3C21150289B9() == 37)
			{
				iVar10 = unk_0xE0AB8FE29795AD72();
				if (iVar10 == 3)
				{
					iVar11 = unk_0xA12942E05B2F1500(0);
					iVar12 = unk_0xA12942E05B2F1500(1);
					iVar13 = unk_0xA12942E05B2F1500(2);
					Global_19B04.f_927[iVar11 /*2*/] = iVar12;
					Global_19B04.f_927[iVar11 /*2*/].f_1 = iVar13;
					func_108();
				}
			}
		}
	}
}

int func_108()//Position - 0xEE18
{
	if (func_95(0))
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

void func_109()//Position - 0xEE63
{
	Global_11646 = 0;
	Global_11647 = 0;
	Global_DA9F = 0;
	SYSTEM::SETTIMERA(0);
	SYSTEM::SETTIMERB(0);
	unk_0xCB50D125C355ED9C();
	iLocal_60 = 0;
	Global_DA9B = 0;
	Global_DAA9 = -1;
	iLocal_70 = 0;
	Global_DA99 = 0;
	Global_DA98 = 0;
	iLocal_72 = 0;
	Global_DAAA = 0;
	Global_DAA8 = 0;
	Global_DA95 = 0;
	Global_10AA2 = 0;
	Global_10A98 = 0;
	func_4();
	func_3();
	if (bLocal_73)
	{
		func_1(&Local_45);
		bLocal_73 = false;
	}
	if (Global_3)
	{
		unk_0x95E4B6F3ED223F5A();
	}
	Global_DAA4 = 0;
	Global_DAA0 = 0;
}

