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
	char* sLocal_21 = NULL;
	char* sLocal_22 = NULL;
	char* sLocal_23 = NULL;
	vector3 vLocal_24 = { 0f, 0f, 0f };
	vector3 vLocal_25 = { 0f, 0f, 0f };
	int iLocal_26 = 0;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	float fLocal_35 = 0f;
	float fLocal_36 = 0f;
	float fLocal_37 = 0f;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	bool bLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	bool bLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	bool bLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	
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
	sLocal_21 = "CHECKPOINT_NORMAL";
	sLocal_22 = "CHECKPOINT_MISSED";
	sLocal_23 = "CHECKPOINT_PERFECT";
	vLocal_24 = { 1694.74f, 3276.502f, 41.2796f };
	vLocal_25 = { 8.79494f, 0.59893f, 154.8464f };
	iLocal_26 = 3;
	fLocal_27 = 0f;
	fLocal_31 = -0.0375f;
	fLocal_32 = 0.17f;
	fLocal_35 = 80f;
	fLocal_36 = 140f;
	fLocal_37 = 180f;
	bLocal_46 = true;
	iLocal_49 = -1;
	if (unk_0xE8A79675302ED812(2))
	{
		func_50();
	}
	iVar0 = 0;
	while (iVar0 <= 48)
	{
		iVar1 = func_49(iVar0);
		func_46(iVar1, func_47(iVar0));
		iVar0++;
	}
	func_45(91, 1);
	func_45(92, 1);
	Global_6413 = 1;
	while (Global_6415)
	{
		if ((unk_0x105601648511CC64() % 250) == 0)
		{
		}
		SYSTEM::WAIT(0);
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 7)
	{
		iLocal_51[iVar2] = -1;
		iVar2++;
	}
	unk_0xF0059F27F7BB6680(&(Global_6416[iVar2 /*23*/].f_B), 18);
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 263)
	{
		unk_0xF0059F27F7BB6680(&(Global_6416[iVar2 /*23*/].f_B), 18);
		iVar2++;
	}
	iLocal_60 = Global_7BB9;
	bVar3 = false;
	func_44();
	func_42();
	while (true)
	{
		if (!bVar3)
		{
			func_41();
		}
		bVar3 = func_34();
		if (bVar3)
		{
			Global_6413 = 1;
		}
		iVar4 = 0;
		iVar5 = 0;
		iVar2 = 0;
		if (Global_6413)
		{
			func_44();
			func_42();
			iVar6 = 0;
			iVar2 = 0;
			while (iVar2 < 263)
			{
				bVar7 = unk_0xFA30DFD0084E92FE(Global_6416[iVar2 /*23*/].f_B, 18);
				if (!bVar7)
				{
					if (func_33(iVar2))
					{
						iVar5++;
						bVar7 = true;
					}
				}
				iVar4++;
				if (bVar7)
				{
					iVar8 = 0;
					iVar9 = 0;
					if (Global_7BB9)
					{
						iVar8++;
						iVar9++;
					}
					else
					{
						if (unk_0xFA30DFD0084E92FE(Global_6416[iVar2 /*23*/].f_B, 13))
						{
							if (func_32())
							{
								iVar8++;
							}
							iVar9++;
						}
						if (unk_0xFA30DFD0084E92FE(Global_6416[iVar2 /*23*/].f_B, 1))
						{
							if (!bLocal_46)
							{
								iVar8++;
							}
							iVar9++;
						}
						if (unk_0xFA30DFD0084E92FE(Global_6416[iVar2 /*23*/].f_B, 2))
						{
							if (bLocal_46)
							{
								iVar8++;
							}
							iVar9++;
						}
						if (unk_0xFA30DFD0084E92FE(Global_6416[iVar2 /*23*/].f_B, 7))
						{
							if (!func_31(15))
							{
								iVar8++;
							}
							iVar9++;
						}
						if (unk_0xFA30DFD0084E92FE(Global_6416[iVar2 /*23*/].f_B, 16))
						{
							if (!func_29(Global_6416[iVar2 /*23*/].f_16))
							{
								iVar8++;
							}
							iVar9++;
						}
						if (unk_0xFA30DFD0084E92FE(Global_6416[iVar2 /*23*/].f_B, 14))
						{
							if (func_31(5))
							{
								iVar8++;
							}
							iVar9++;
						}
						if (unk_0xFA30DFD0084E92FE(Global_6416[iVar2 /*23*/].f_B, 8))
						{
							if (Global_6416[iVar2 /*23*/].f_10 != 4 && Global_6416[iVar2 /*23*/].f_10 != 8)
							{
								if (!func_28(iVar2))
								{
									iVar8++;
								}
								iVar9++;
							}
						}
						if (unk_0xFA30DFD0084E92FE(Global_6416[iVar2 /*23*/].f_B, 19))
						{
							switch (iLocal_53)
							{
								case 1:
								case 0:
								case 2:
									break;
								
								default:
									iVar8++;
									break;
							}
							iVar9++;
						}
						if (unk_0xFA30DFD0084E92FE(Global_6416[iVar2 /*23*/].f_B, 27))
						{
							if (bLocal_41)
							{
								iVar8++;
							}
							iVar9++;
						}
						if (Global_6416[iVar2 /*23*/].f_10 == 1)
						{
							func_22();
						}
					}
					if (iVar9 > 0)
					{
						if (iVar8 > 0)
						{
							unk_0x7CB6FD92BE491AD9(&(Global_6416[iVar2 /*23*/].f_B), 0);
						}
						else if (unk_0xFA30DFD0084E92FE(Global_6416[iVar2 /*23*/].f_B, 15))
						{
							unk_0xF0059F27F7BB6680(&(Global_6416[iVar2 /*23*/].f_B), 0);
						}
					}
					else if (unk_0xFA30DFD0084E92FE(Global_6416[iVar2 /*23*/].f_B, 15))
					{
						unk_0xF0059F27F7BB6680(&(Global_6416[iVar2 /*23*/].f_B), 0);
					}
					if (unk_0xFA30DFD0084E92FE(Global_6416[iVar2 /*23*/].f_B, 0) && unk_0xFA30DFD0084E92FE(Global_6416[iVar2 /*23*/].f_B, 3))
					{
						bVar10 = false;
						if (!unk_0x2DA8CA50A72528FB(Global_6416[iVar2 /*23*/].f_13))
						{
							while (!unk_0x24F8722456844090() < 150)
							{
								SYSTEM::WAIT(2000);
							}
							if (unk_0xFA30DFD0084E92FE(Global_6416[iVar2 /*23*/].f_B, 19))
							{
								switch (iLocal_53)
								{
									case 1:
									case 0:
									case 2:
										if (unk_0xFA30DFD0084E92FE(Global_6416[iVar2 /*23*/].f_B, 28))
										{
											Global_6416[iVar2 /*23*/].f_13 = unk_0x489E7A92D55C10F8(Global_6416[iVar2 /*23*/][0 /*3*/], Global_6416[iVar2 /*23*/].f_A);
											unk_0x7781946F1FC054FA(Global_6416[iVar2 /*23*/].f_13, 128);
											unk_0x222805B89367761E(Global_6416[iVar2 /*23*/].f_13, 0);
										}
										else
										{
											Global_6416[iVar2 /*23*/].f_13 = unk_0x390CF6C8AD6903B7(Global_6416[iVar2 /*23*/][iLocal_53 /*3*/]);
											unk_0xBF0E22F3E083C33D(Global_6416[iVar2 /*23*/].f_13, Global_6416[iVar2 /*23*/].f_C[iLocal_53]);
										}
										break;
									
									default:
										Global_6416[iVar2 /*23*/].f_13 = unk_0x390CF6C8AD6903B7(1f, 2f, 3f);
										break;
								}
							}
							else if (unk_0xFA30DFD0084E92FE(Global_6416[iVar2 /*23*/].f_B, 28))
							{
								Global_6416[iVar2 /*23*/].f_13 = unk_0x489E7A92D55C10F8(Global_6416[iVar2 /*23*/][0 /*3*/], Global_6416[iVar2 /*23*/].f_A);
								unk_0x7781946F1FC054FA(Global_6416[iVar2 /*23*/].f_13, 128);
								unk_0x222805B89367761E(Global_6416[iVar2 /*23*/].f_13, 0);
							}
							else
							{
								Global_6416[iVar2 /*23*/].f_13 = unk_0x390CF6C8AD6903B7(Global_6416[iVar2 /*23*/][0 /*3*/]);
								unk_0xBF0E22F3E083C33D(Global_6416[iVar2 /*23*/].f_13, Global_6416[iVar2 /*23*/].f_C[0]);
							}
							if (Global_6416[iVar2 /*23*/].f_10 == 1)
							{
								bVar10 = true;
							}
						}
						else
						{
							if (unk_0xFA30DFD0084E92FE(Global_6416[iVar2 /*23*/].f_B, 19))
							{
								switch (iLocal_53)
								{
									case 1:
									case 0:
									case 2:
										unk_0x1423825E528B4DE1(Global_6416[iVar2 /*23*/].f_13, Global_6416[iVar2 /*23*/][iLocal_53 /*3*/]);
										break;
									
									default:
										break;
								}
							}
							else
							{
								unk_0x1423825E528B4DE1(Global_6416[iVar2 /*23*/].f_13, Global_6416[iVar2 /*23*/][0 /*3*/]);
							}
							if (unk_0xFA30DFD0084E92FE(Global_6416[iVar2 /*23*/].f_B, 9))
							{
								if (iLocal_43)
								{
									unk_0x7A6BBF86FCBBCF7E(Global_6416[iVar2 /*23*/].f_13, 1);
									iLocal_43 = 0;
								}
								else
								{
									unk_0x3B665F62857B996C(Global_6416[iVar2 /*23*/].f_13, 1);
									iLocal_43 = 1;
								}
								unk_0x6F02E6814C1AD504(Global_6416[iVar2 /*23*/].f_13, 10000);
								unk_0x7CB6FD92BE491AD9(&(Global_6416[iVar2 /*23*/].f_B), 9);
							}
							else
							{
								unk_0x7A6BBF86FCBBCF7E(Global_6416[iVar2 /*23*/].f_13, 0);
							}
						}
						func_19(Global_6416[iVar2 /*23*/].f_13, iVar2);
						if (bVar10)
						{
							func_18(iVar2);
						}
						iVar5++;
					}
					else
					{
						if (unk_0x2DA8CA50A72528FB(Global_6416[iVar2 /*23*/].f_13))
						{
							unk_0x07B8ECB35A4ED3AC(&(Global_6416[iVar2 /*23*/].f_13));
							iVar5++;
							if (Global_6416[iVar2 /*23*/].f_10 == 1)
							{
								func_17(iVar2);
							}
						}
						Global_6416[iVar2 /*23*/].f_13 = 0;
					}
				}
				unk_0x7CB6FD92BE491AD9(&(Global_6416[iVar2 /*23*/].f_B), 18);
				iVar11 = 30;
				if (unk_0x17FAADF9916EF741())
				{
					iVar11 = 250;
				}
				if (iVar5 > iVar11)
				{
					SYSTEM::WAIT(0);
					iVar5 = 0;
				}
				if ((iVar4 / 20) > iVar6)
				{
					iVar6 = (iVar4 / 20);
					SYSTEM::WAIT(0);
				}
				iVar2++;
			}
		}
		Global_6413 = Global_6414;
		Global_6414 = 0;
		if (iVar4 == 0)
		{
			func_10();
			func_6();
			SYSTEM::WAIT(500);
			iLocal_53 = func_1();
		}
	}
}

int func_1()//Position - 0x746
{
	func_2();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_2()//Position - 0x75F
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_5(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_4(unk_0xBC25C936A095B5BA());
			if (func_3(iVar0) && (!func_31(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_3(Global_19B04.f_932.f_21B.f_10CD))
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

bool func_3(int iParam0)//Position - 0x85C
{
	return iParam0 < 3;
}

int func_4(int iParam0)//Position - 0x868
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_5(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_5(int iParam0)//Position - 0x8A5
{
	if (func_3(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_6()//Position - 0x8CF
{
	if (func_1() == 1)
	{
		if (func_9(63))
		{
			if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
			{
				if (func_9(126))
				{
					if (func_8(138))
					{
						func_7(138, 0, 0);
					}
					if (!func_8(139))
					{
						if (unk_0xB731B8C5BCE89836(joaat("chop")) == 0)
						{
							if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), 19.3f, 528.24f, 169.63f, true) > 50f)
							{
								func_7(139, 1, 0);
							}
						}
					}
				}
				else
				{
					if (func_8(139))
					{
						func_7(139, 0, 0);
					}
					if (!func_8(138))
					{
						if (unk_0xB731B8C5BCE89836(joaat("chop")) == 0)
						{
							if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), -11.15f, -1425.56f, 29.67f, true) > 50f)
							{
								func_7(138, 1, 0);
							}
						}
					}
				}
			}
		}
	}
}

void func_7(int iParam0, bool bParam1, bool bParam2)//Position - 0x9AB
{
	int iVar0;
	bool bVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		bVar1 = unk_0xFA30DFD0084E92FE(Global_6416[iVar0 /*23*/].f_B, 15);
		if (bVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != unk_0xFA30DFD0084E92FE(Global_6416[iVar0 /*23*/].f_B, 0))
	{
		unk_0xF0059F27F7BB6680(&(Global_6416[iVar0 /*23*/].f_B), 18);
		if (Global_6413 == 1)
		{
			Global_6414 = 1;
		}
		Global_6413 = 1;
	}
	if (bParam1)
	{
		unk_0xF0059F27F7BB6680(&(Global_6416[iVar0 /*23*/].f_B), 0);
		unk_0xF0059F27F7BB6680(&(Global_6416[iVar0 /*23*/].f_B), 15);
		unk_0xF0059F27F7BB6680(&(Global_6416[iVar0 /*23*/].f_B), 3);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_6416[iVar0 /*23*/].f_B), 0);
		unk_0x7CB6FD92BE491AD9(&(Global_6416[iVar0 /*23*/].f_B), 15);
	}
	if (!unk_0xFA30DFD0084E92FE(Global_6416[iVar0 /*23*/].f_B, 0))
	{
		if (unk_0x2DA8CA50A72528FB(Global_6416[iVar0 /*23*/].f_13))
		{
			unk_0xB5AD2E78802711D6(1);
			unk_0x07B8ECB35A4ED3AC(&(Global_6416[iVar0 /*23*/].f_13));
			unk_0xB5AD2E78802711D6(0);
		}
	}
}

bool func_8(int iParam0)//Position - 0xAB4
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return unk_0x2DA8CA50A72528FB(Global_6416[iVar0 /*23*/].f_13);
}

int func_9(int iParam0)//Position - 0xAF0
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_19B04.f_2360.f_63.f_3A[iParam0];
}

void func_10()//Position - 0xB1D
{
	vector3 vVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	
	if (unk_0x0928DEFC3216677B(unk_0xFC1CAE18F3ECBF2D()))
	{
		return;
	}
	vVar0 = { func_16(unk_0xFC1CAE18F3ECBF2D()) };
	iVar1 = -1;
	fVar2 = 1000000f;
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < 7)
	{
		if (iLocal_51[iVar3] != -1)
		{
			if (unk_0x2DA8CA50A72528FB(Global_6416[iLocal_51[iVar3] /*23*/].f_13))
			{
				fVar4 = unk_0xF0F2FC9DE291567F(vVar0, unk_0x5DC00ADB7E2FD7C2(Global_6416[iLocal_51[iVar3] /*23*/].f_13), true);
				if (fVar4 < fVar2)
				{
					fVar2 = fVar4;
					iVar1 = iVar3;
				}
			}
		}
		iVar3++;
	}
	if (iLocal_49 == iVar1)
	{
		return;
	}
	iLocal_49 = iVar1;
	if (iVar1 == -1)
	{
		return;
	}
	iVar3 = 0;
	while (iVar3 < 7)
	{
		if (iLocal_51[iVar3] != -1)
		{
			if (iVar3 == iVar1)
			{
				if (unk_0x2DA8CA50A72528FB(Global_6416[iLocal_51[iVar3] /*23*/].f_13))
				{
					func_15(iLocal_51[iVar3]);
				}
			}
			else if (unk_0x2DA8CA50A72528FB(Global_6416[iLocal_51[iVar3] /*23*/].f_13))
			{
				func_11(iLocal_51[iVar3]);
			}
		}
		iVar3++;
	}
}

void func_11(int iParam0)//Position - 0xC21
{
	func_14(iParam0, 0, 0);
	func_13(iParam0, 1);
	func_12(iParam0, 1);
}

void func_12(int iParam0, bool bParam1)//Position - 0xC3F
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == unk_0xFA30DFD0084E92FE(Global_6416[iVar0 /*23*/].f_B, 4))
	{
		return;
	}
	if (bParam1)
	{
		unk_0xF0059F27F7BB6680(&(Global_6416[iVar0 /*23*/].f_B), 4);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_6416[iVar0 /*23*/].f_B), 4);
	}
	if (Global_6413 == 1)
	{
		Global_6414 = 1;
	}
	Global_6413 = 1;
	unk_0xF0059F27F7BB6680(&(Global_6416[iVar0 /*23*/].f_B), 18);
}

void func_13(int iParam0, bool bParam1)//Position - 0xCC5
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == unk_0xFA30DFD0084E92FE(Global_6416[iVar0 /*23*/].f_B, 5))
	{
		return;
	}
	if (bParam1)
	{
		unk_0xF0059F27F7BB6680(&(Global_6416[iVar0 /*23*/].f_B), 5);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_6416[iVar0 /*23*/].f_B), 5);
	}
	if (Global_6413 == 1)
	{
		Global_6414 = 1;
	}
	Global_6413 = 1;
	unk_0xF0059F27F7BB6680(&(Global_6416[iVar0 /*23*/].f_B), 18);
}

void func_14(int iParam0, bool bParam1, bool bParam2)//Position - 0xD4B
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == unk_0xFA30DFD0084E92FE(Global_6416[iVar0 /*23*/].f_B, 6))
	{
		return;
	}
	if (bParam1)
	{
		unk_0xF0059F27F7BB6680(&(Global_6416[iVar0 /*23*/].f_B), 6);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_6416[iVar0 /*23*/].f_B), 6);
	}
	if (bParam2)
	{
		unk_0xF0059F27F7BB6680(&(Global_6416[iVar0 /*23*/].f_B), 11);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_6416[iVar0 /*23*/].f_B), 11);
	}
	if (Global_6413 == 1)
	{
		Global_6414 = 1;
	}
	Global_6413 = 1;
	unk_0xF0059F27F7BB6680(&(Global_6416[iVar0 /*23*/].f_B), 18);
}

void func_15(int iParam0)//Position - 0xDF7
{
	func_14(iParam0, 1, 0);
	func_13(iParam0, 1);
	func_12(iParam0, 1);
}

Vector3 func_16(int iParam0)//Position - 0xE15
{
	return unk_0x541C2AEF053615BC(unk_0xA95CF30C72EB526E(iParam0), 0);
}

void func_17(int iParam0)//Position - 0xE28
{
	int iVar0;
	
	if (iLocal_50 < 1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iLocal_51[iVar0] == iParam0)
		{
			iLocal_50 = (iLocal_50 - 1);
			iLocal_51[iVar0] = -1;
			if (iParam0 == iLocal_49)
			{
				iLocal_49 = -1;
			}
			return;
		}
		iVar0++;
	}
}

void func_18(int iParam0)//Position - 0xE73
{
	int iVar0;
	int iVar1;
	
	if (iLocal_50 == 7)
	{
		return;
	}
	iVar0 = 0;
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < iLocal_50)
	{
		if (iLocal_51[iVar0] == iParam0)
		{
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iLocal_51[iVar0] == -1)
		{
			iVar1 = iVar0;
			iVar0 = 7;
		}
		iVar0++;
	}
	iLocal_51[iVar1] = iParam0;
	iLocal_50++;
}

void func_19(int iParam0, int iParam1)//Position - 0xEDC
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	iVar0 = func_1();
	unk_0x19CA0A1B612C31E5(iParam0, 1);
	unk_0x12DB69036F6569F7(iParam0, 2);
	unk_0x0D5352939CC40C16(iParam0, func_21(iParam1));
	if (Global_6416[iParam1 /*23*/].f_10 == 4 || Global_6416[iParam1 /*23*/].f_10 == 8)
	{
		switch (iVar0)
		{
			case 0:
				unk_0x0D5352939CC40C16(iParam0, 42);
				break;
			
			case 1:
				unk_0x0D5352939CC40C16(iParam0, 43);
				break;
			
			case 2:
				unk_0x0D5352939CC40C16(iParam0, 44);
				break;
			}
	}
	if (!unk_0xFA30DFD0084E92FE(Global_6416[iParam1 /*23*/].f_B, 28))
	{
		unk_0x3F5F1772D71D5EC4(iParam0, 1f);
	}
	if (!unk_0xF1734B55490E9045(&(Global_6416[iParam1 /*23*/].f_14)))
	{
		if (unk_0x0F6F4C227FB5DD52(&(Global_6416[iParam1 /*23*/].f_14)))
		{
			unk_0x436D0272182E484D(iParam0, &(Global_6416[iParam1 /*23*/].f_14));
		}
	}
	bVar1 = unk_0xFA30DFD0084E92FE(Global_6416[iParam1 /*23*/].f_B, 4);
	bVar2 = unk_0xFA30DFD0084E92FE(Global_6416[iParam1 /*23*/].f_B, 5);
	bVar3 = unk_0xFA30DFD0084E92FE(Global_6416[iParam1 /*23*/].f_B, 6);
	bVar4 = false;
	if (func_20(0))
	{
		bVar4 = unk_0xFA30DFD0084E92FE(Global_6416[iParam1 /*23*/].f_B, 11);
	}
	if (bVar3 && !bVar4)
	{
		unk_0x4909873A6873A6C3(iParam0, false);
	}
	else
	{
		unk_0x4909873A6873A6C3(iParam0, true);
	}
	if (bVar2 && bVar1)
	{
		unk_0x2E9308F22ABD4DF5(iParam0, 4);
	}
	else
	{
		if (bVar2)
		{
			unk_0x2E9308F22ABD4DF5(iParam0, 5);
		}
		if (bVar1)
		{
			unk_0x2E9308F22ABD4DF5(iParam0, 3);
		}
	}
	switch (Global_6416[iParam1 /*23*/].f_10)
	{
		case 7:
			unk_0x12DB69036F6569F7(iParam0, 2);
			unk_0x0264FA32FD9E8845(iParam0, 0);
			break;
		
		case 6:
		case 5:
			unk_0x12DB69036F6569F7(iParam0, 2);
			unk_0x0264FA32FD9E8845(iParam0, 0);
			break;
		
		case 1:
			unk_0x12DB69036F6569F7(iParam0, 3);
			unk_0x0264FA32FD9E8845(iParam0, 1);
			break;
		
		case 9:
			unk_0x12DB69036F6569F7(iParam0, 1);
			unk_0x906B52FF11E38F2D(iParam0, 10);
			unk_0x0264FA32FD9E8845(iParam0, 0);
			break;
		
		case 4:
		case 8:
			unk_0x0264FA32FD9E8845(iParam0, 1);
			if (Global_6416[iParam1 /*23*/].f_10 == 4)
			{
				unk_0x12DB69036F6569F7(iParam0, 7);
			}
			else
			{
				unk_0x12DB69036F6569F7(iParam0, 5);
			}
			if (unk_0xFA30DFD0084E92FE(Global_6416[iParam1 /*23*/].f_B, 8))
			{
				if (!func_28(iParam1))
				{
					if (unk_0xFA30DFD0084E92FE(Global_6416[iParam1 /*23*/].f_B, 28))
					{
						unk_0x7781946F1FC054FA(iParam0, 0);
					}
					else
					{
						if (Global_6416[iParam1 /*23*/].f_11 == 0)
						{
							unk_0x0D5352939CC40C16(iParam0, 42);
						}
						if (Global_6416[iParam1 /*23*/].f_11 == 1)
						{
							unk_0x0D5352939CC40C16(iParam0, 43);
						}
						if (Global_6416[iParam1 /*23*/].f_11 == 2)
						{
							unk_0x0D5352939CC40C16(iParam0, 44);
						}
						if (Global_6416[iParam1 /*23*/].f_10 == 8)
						{
							unk_0x4909873A6873A6C3(iParam0, unk_0xFA30DFD0084E92FE(Global_6416[iParam1 /*23*/].f_B, 5));
							unk_0x12DB69036F6569F7(iParam0, 3);
							unk_0x4909873A6873A6C3(iParam0, true);
							unk_0xF71DF45ABB5957A5(iParam0, 1);
							unk_0x3F5F1772D71D5EC4(iParam0, 0.77f);
						}
						else
						{
							unk_0x3F5F1772D71D5EC4(iParam0, 0.72f);
						}
					}
				}
				else
				{
					if (unk_0xFA30DFD0084E92FE(Global_6416[iParam1 /*23*/].f_B, 28))
					{
						unk_0x7781946F1FC054FA(iParam0, 128);
					}
					if (Global_6416[iParam1 /*23*/].f_10 == 8)
					{
						unk_0xF71DF45ABB5957A5(iParam0, 0);
					}
				}
			}
			break;
		
		default:
			unk_0x12DB69036F6569F7(iParam0, 5);
			break;
	}
	switch (iParam1)
	{
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
			unk_0x0264FA32FD9E8845(iParam0, 1);
			break;
	}
	if (unk_0xFA30DFD0084E92FE(Global_6416[iParam1 /*23*/].f_B, 19))
	{
		switch (iVar0)
		{
			case 1:
			case 0:
			case 2:
				unk_0x1423825E528B4DE1(Global_6416[iParam1 /*23*/].f_13, Global_6416[iParam1 /*23*/][iVar0 /*3*/]);
				break;
			}
	}
	if (unk_0xFA30DFD0084E92FE(Global_6416[iParam1 /*23*/].f_B, 17))
	{
		unk_0x6E3E610B98797985(iParam0, 1);
	}
	else
	{
		unk_0x6E3E610B98797985(iParam0, 0);
	}
	if (unk_0xFA30DFD0084E92FE(Global_6416[iParam1 /*23*/].f_B, 20))
	{
		unk_0x5F6CD46DF1BDE3CE(iParam0, 1);
	}
	else
	{
		unk_0x5F6CD46DF1BDE3CE(iParam0, 0);
	}
	if (unk_0xFA30DFD0084E92FE(Global_6416[iParam1 /*23*/].f_B, 29))
	{
		unk_0x0D5352939CC40C16(iParam0, 39);
	}
}

int func_20(int iParam0)//Position - 0x12EA
{
	if (Global_8C41 == 15)
	{
		return 0;
	}
	if (func_29(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_21(int iParam0)//Position - 0x130C
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	uVar1 = unk_0xA7C1E72EF76E439E(Global_6416[iVar0 /*23*/].f_B, 21, 26);
	return uVar1;
}

void func_22()//Position - 0x134F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		func_23(iVar0);
		iVar0++;
	}
}

void func_23(int iParam0)//Position - 0x136F
{
	bool bVar0;
	
	if (iParam0 == 10)
	{
		return;
	}
	if (Global_1584A[iParam0 /*10*/].f_7 == 263)
	{
		return;
	}
	bVar0 = false;
	if (unk_0xFA30DFD0084E92FE(Global_19B04.f_1C20[iParam0], 0))
	{
		if (Global_1584A[iParam0 /*10*/].f_9 != func_27())
		{
			bVar0 = true;
		}
		else if (!func_25(iParam0))
		{
			bVar0 = true;
		}
	}
	if (iParam0 == 5)
	{
		if (func_24(6))
		{
			bVar0 = false;
		}
	}
	if (func_20(14))
	{
		bVar0 = false;
	}
	func_7(Global_1584A[iParam0 /*10*/].f_7, bVar0, 0);
}

bool func_24(int iParam0)//Position - 0x13FC
{
	return unk_0xFA30DFD0084E92FE(Global_19B04.f_1C20[iParam0], 0);
}

int func_25(int iParam0)//Position - 0x1414
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (Global_16B4F.f_13F == 0)
	{
		return 0;
	}
	if (iParam0 == 10)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (func_25(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	else if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		func_26(iParam0, &sVar1);
		iVar2 = unk_0x5E29F9399E0829A3(Global_1584A[iParam0 /*10*/].f_3, &sVar1);
		if (iVar2 != 0 && Global_16B4F.f_13F == iVar2)
		{
			return 1;
		}
	}
	return 0;
}

bool func_26(int iParam0, char* sParam1)//Position - 0x1499
{
	StringCopy(sParam1, "", 32);
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "v_michael", 32);
			break;
		
		case 5:
			StringCopy(sParam1, "v_franklins", 32);
			break;
		
		case 6:
			StringCopy(sParam1, "v_franklinshouse", 32);
			break;
		
		case 2:
		case 1:
			if (unk_0xE7CC712DAAEA69F3("TrevorsTrailer"))
			{
				StringCopy(sParam1, "v_trailer", 32);
			}
			else if (unk_0xE7CC712DAAEA69F3("TrevorsTrailerTidy"))
			{
				StringCopy(sParam1, "V_TrailerTIDY", 32);
			}
			else if (unk_0xE7CC712DAAEA69F3("TrevorsTrailerTrash"))
			{
				StringCopy(sParam1, "V_TrailerTRASH", 32);
			}
			break;
		
		case 3:
			StringCopy(sParam1, "v_trevors", 32);
			break;
		
		case 4:
			StringCopy(sParam1, "v_strip3", 32);
			break;
		
		case 8:
		case 7:
		case 9:
			StringCopy(sParam1, "v_psycheoffice", 32);
			break;
	}
	return !unk_0x3362CDE8460ED38B(sParam1, "");
}

int func_27()//Position - 0x156D
{
	func_2();
	return Global_19B04.f_932.f_21B.f_10CD;
}

int func_28(int iParam0)//Position - 0x1586
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	if (!unk_0xFA30DFD0084E92FE(Global_6416[iVar0 /*23*/].f_B, 8))
	{
		return 0;
	}
	if (Global_6416[iVar0 /*23*/].f_11 == func_1())
	{
		return 1;
	}
	if (!unk_0xFA30DFD0084E92FE(Global_6416[iVar0 /*23*/].f_B, 10))
	{
		return 0;
	}
	if (Global_6416[iVar0 /*23*/].f_12 == func_1())
	{
		return 1;
	}
	return 0;
}

bool func_29(int iParam0)//Position - 0x160C
{
	return func_30(iParam0, Global_8C41);
}

int func_30(int iParam0, int iParam1)//Position - 0x161D
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

bool func_31(int iParam0)//Position - 0x17FE
{
	return Global_8C41 == iParam0;
}

int func_32()//Position - 0x180C
{
	if (unk_0x904E94842BB9E173(unk_0xFC1CAE18F3ECBF2D()) != 0)
	{
		return 1;
	}
	return 0;
}

int func_33(int iParam0)//Position - 0x1825
{
	if (iLocal_57 && unk_0xFA30DFD0084E92FE(Global_6416[iParam0 /*23*/].f_B, 13))
	{
		unk_0xF0059F27F7BB6680(&(Global_6416[iParam0 /*23*/].f_B), 18);
		return 1;
	}
	if (iLocal_58 && ((unk_0xFA30DFD0084E92FE(Global_6416[iParam0 /*23*/].f_B, 7) || unk_0xFA30DFD0084E92FE(Global_6416[iParam0 /*23*/].f_B, 11)) || unk_0xFA30DFD0084E92FE(Global_6416[iParam0 /*23*/].f_B, 16)))
	{
		unk_0xF0059F27F7BB6680(&(Global_6416[iParam0 /*23*/].f_B), 18);
		return 1;
	}
	if (iLocal_59 && unk_0xFA30DFD0084E92FE(Global_6416[iParam0 /*23*/].f_B, 14))
	{
		unk_0xF0059F27F7BB6680(&(Global_6416[iParam0 /*23*/].f_B), 18);
		return 1;
	}
	if (iLocal_54 && ((unk_0xFA30DFD0084E92FE(Global_6416[iParam0 /*23*/].f_B, 10) || unk_0xFA30DFD0084E92FE(Global_6416[iParam0 /*23*/].f_B, 8)) || unk_0xFA30DFD0084E92FE(Global_6416[iParam0 /*23*/].f_B, 19)))
	{
		unk_0xF0059F27F7BB6680(&(Global_6416[iParam0 /*23*/].f_B), 18);
		return 1;
	}
	if (bLocal_55)
	{
		unk_0xF0059F27F7BB6680(&(Global_6416[iParam0 /*23*/].f_B), 18);
		return 1;
	}
	if (iLocal_61 && unk_0xFA30DFD0084E92FE(Global_6416[iParam0 /*23*/].f_B, 27))
	{
		unk_0xF0059F27F7BB6680(&(Global_6416[iParam0 /*23*/].f_B), 18);
		return 1;
	}
	if ((iLocal_62 && (unk_0xFA30DFD0084E92FE(Global_6416[iParam0 /*23*/].f_B, 1) || unk_0xFA30DFD0084E92FE(Global_6416[iParam0 /*23*/].f_B, 2))) || Global_6416[iParam0 /*23*/].f_10 == 1)
	{
		unk_0xF0059F27F7BB6680(&(Global_6416[iParam0 /*23*/].f_B), 18);
		return 1;
	}
	return 0;
}

int func_34()//Position - 0x19C5
{
	int iVar0;
	
	iVar0 = 0;
	if (func_40())
	{
		if (!iLocal_56)
		{
			iLocal_56 = 1;
			iVar0 = 1;
		}
	}
	if (func_39())
	{
		if (!iLocal_57)
		{
			iLocal_57 = 1;
			iVar0 = 1;
		}
	}
	if (func_38())
	{
		if (!iLocal_58)
		{
			iLocal_58 = 1;
			iVar0 = 1;
		}
	}
	if (func_37())
	{
		if (!iLocal_59)
		{
			iLocal_59 = 1;
			iVar0 = 1;
		}
	}
	bLocal_55 = false;
	if (Global_7BB9 != iLocal_60)
	{
		iLocal_60 = Global_7BB9;
		if (!bLocal_55)
		{
			bLocal_55 = true;
			iVar0 = 1;
		}
	}
	if (func_35())
	{
		if (!iLocal_62)
		{
			iLocal_62 = 1;
			iVar0 = 1;
		}
	}
	iLocal_53 = func_1();
	if (iLocal_53 != iLocal_52)
	{
		iLocal_52 = iLocal_53;
		iLocal_54 = 1;
		iVar0 = 1;
	}
	iLocal_42 = bLocal_41;
	if (func_9(130))
	{
		bLocal_41 = true;
	}
	if (func_9(131))
	{
		bLocal_41 = false;
	}
	if (bLocal_41 != iLocal_42)
	{
		if (!iLocal_61)
		{
			iVar0 = 1;
		}
		iLocal_61 = 1;
	}
	return iVar0;
}

int func_35()//Position - 0x1A93
{
	int iVar0;
	
	if (unk_0x1D403DFADBC2DE3C(unk_0xA95CF30C72EB526E(unk_0xFC1CAE18F3ECBF2D()), 0))
	{
		return 0;
	}
	iVar0 = unk_0x645938DA8ED5E0BA(unk_0xA95CF30C72EB526E(unk_0xFC1CAE18F3ECBF2D()));
	if (iLocal_47 != iVar0)
	{
		iLocal_47 = iVar0;
		if (iVar0 == 0 || func_36(iVar0))
		{
			bLocal_46 = true;
		}
		else
		{
			bLocal_46 = false;
		}
		return 1;
	}
	return 0;
}

int func_36(int iParam0)//Position - 0x1AE9
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 60)
	{
		if (Global_1E[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_37()//Position - 0x1B18
{
	if (iLocal_48 != func_20(0))
	{
		iLocal_48 = func_20(0);
		return 1;
	}
	return 0;
}

bool func_38()//Position - 0x1B36
{
	bool bVar0;
	
	bVar0 = Global_7BBA;
	Global_7BBA = 0;
	if (bVar0)
	{
	}
	return bVar0;
}

int func_39()//Position - 0x1B4E
{
	if (unk_0x904E94842BB9E173(unk_0xFC1CAE18F3ECBF2D()) != iLocal_45)
	{
		iLocal_45 = unk_0x904E94842BB9E173(unk_0xFC1CAE18F3ECBF2D());
		return 1;
	}
	return 0;
}

int func_40()//Position - 0x1B72
{
	if (Global_8C41 != 15)
	{
		return 0;
	}
	if (unk_0x6E06C0DB9B43570D() != iLocal_44)
	{
		iLocal_44 = unk_0x6E06C0DB9B43570D();
		return 1;
	}
	return 0;
}

void func_41()//Position - 0x1B9A
{
	iLocal_54 = 0;
	bLocal_55 = false;
	iLocal_56 = 0;
	iLocal_57 = 0;
	iLocal_58 = 0;
	iLocal_59 = 0;
	iLocal_60 = 0;
	iLocal_61 = 0;
	iLocal_62 = 0;
}

void func_42()//Position - 0x1BBD
{
	if (func_43(0) == 1 && !func_31(6))
	{
		func_7(112, 1, 0);
		func_7(113, 1, 0);
		func_7(114, 1, 0);
	}
}

int func_43(int iParam0)//Position - 0x1BF2
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_19B04.f_2360.f_14A[iParam0 /*6*/];
}

void func_44()//Position - 0x1C1E
{
	if (func_43(0) == 1 && !func_31(6))
	{
		func_7(156, 1, 0);
		func_7(157, 1, 0);
		func_7(161, 1, 0);
		func_7(160, 1, 0);
		func_7(158, 1, 0);
		func_11(158);
		func_7(159, 1, 0);
		func_11(159);
	}
}

void func_45(int iParam0, bool bParam1)//Position - 0x1C77
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == unk_0xFA30DFD0084E92FE(Global_6416[iVar0 /*23*/].f_B, 2))
	{
		return;
	}
	if (bParam1)
	{
		unk_0xF0059F27F7BB6680(&(Global_6416[iVar0 /*23*/].f_B), 2);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_6416[iVar0 /*23*/].f_B), 2);
	}
	if (Global_6413 == 1)
	{
		Global_6414 = 1;
	}
	Global_6413 = 1;
	unk_0xF0059F27F7BB6680(&(Global_6416[iVar0 /*23*/].f_B), 18);
}

void func_46(int iParam0, char* sParam1)//Position - 0x1CFD
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	StringCopy(&(Global_6416[iVar0 /*23*/].f_14), sParam1, 8);
	if (unk_0x2DA8CA50A72528FB(Global_6416[iVar0 /*23*/].f_13))
	{
		unk_0x436D0272182E484D(Global_6416[iVar0 /*23*/].f_13, sParam1);
	}
}

char* func_47(int iParam0)//Position - 0x1D57
{
	switch (iParam0)
	{
		case 0:
			return "SB_SAL";
			break;
		
		case 1:
			return "SB_BAR";
			break;
		
		case 2:
			return "SB_BAR";
			break;
		
		case 3:
			return "SB_BAR";
			break;
		
		case 4:
			return "SB_BAR";
			break;
		
		case 5:
			return "SB_BAR";
			break;
		
		case 6:
			return "SB_BAR";
			break;
		
		case 7:
			return func_48(iParam0, 0);
			break;
		
		case 8:
			return func_48(iParam0, 0);
			break;
		
		case 9:
			return func_48(iParam0, 0);
			break;
		
		case 10:
			return func_48(iParam0, 0);
			break;
		
		case 11:
			return func_48(iParam0, 0);
			break;
		
		case 12:
			return func_48(iParam0, 0);
			break;
		
		case 13:
			return func_48(iParam0, 0);
			break;
		
		case 14:
			return func_48(iParam0, 0);
			break;
		
		case 15:
			return func_48(iParam0, 0);
			break;
		
		case 16:
			return func_48(iParam0, 0);
			break;
		
		case 17:
			return func_48(iParam0, 0);
			break;
		
		case 18:
			return func_48(iParam0, 0);
			break;
		
		case 19:
			return func_48(iParam0, 0);
			break;
		
		case 20:
			return func_48(iParam0, 0);
			break;
		
		case 21:
			return func_48(iParam0, 0);
			break;
		
		case 22:
			return "SB_TAT";
			break;
		
		case 23:
			return "SB_TAT";
			break;
		
		case 24:
			return "SB_TAT";
			break;
		
		case 25:
			return "SB_TAT";
			break;
		
		case 26:
			return "SB_TAT";
			break;
		
		case 27:
			return "SB_TAT";
			break;
		
		case 28:
			return "SB_AMU2";
			break;
		
		case 29:
			return "SB_AMU";
			break;
		
		case 30:
			return "SB_AMU";
			break;
		
		case 31:
			return "SB_AMU";
			break;
		
		case 32:
			return "SB_AMU";
			break;
		
		case 33:
			return "SB_AMU";
			break;
		
		case 34:
			return "SB_AMU";
			break;
		
		case 35:
			return "SB_AMU";
			break;
		
		case 36:
			return "SB_AMU";
			break;
		
		case 37:
			return "SB_AMU";
			break;
		
		case 38:
			return "SB_AMU2";
			break;
		
		case 39:
			return func_48(iParam0, 0);
			break;
		
		case 40:
			return func_48(iParam0, 0);
			break;
		
		case 41:
			return func_48(iParam0, 0);
			break;
		
		case 42:
			return func_48(iParam0, 0);
			break;
		
		case 43:
			return func_48(iParam0, 0);
			break;
		
		case 44:
			return func_48(iParam0, 0);
			break;
		
		case 45:
			return func_48(iParam0, 0);
			break;
		
		case 46:
			return "SB_AMU";
			break;
		
		case 47:
			return "SB_AMU";
			break;
		
		case 48:
			return "SB_AMU";
			break;
	}
	return "SHOP_BLIP_INV";
}

char* func_48(int iParam0, int iParam1)//Position - 0x20AD
{
	switch (iParam0)
	{
		case -1:
			return "S_N_EM";
			break;
		
		case 0:
			return "S_H_01";
			break;
		
		case 1:
			return "S_H_02";
			break;
		
		case 2:
			return "S_H_03";
			break;
		
		case 3:
			return "S_H_04";
			break;
		
		case 4:
			return "S_H_05";
			break;
		
		case 5:
			return "S_H_06";
			break;
		
		case 6:
			return "S_H_07";
			break;
		
		case 7:
			return "S_CL_01";
			break;
		
		case 8:
			return "S_CL_02";
			break;
		
		case 9:
			return "S_CL_03";
			break;
		
		case 10:
			return "S_CL_04";
			break;
		
		case 11:
			return "S_CL_05";
			break;
		
		case 12:
			return "S_CL_06";
			break;
		
		case 13:
			return "S_CL_07";
			break;
		
		case 14:
			return "S_CM_01";
			break;
		
		case 15:
			return "S_CM_03";
			break;
		
		case 16:
			return "S_CM_04";
			break;
		
		case 17:
			return "S_CM_05";
			break;
		
		case 18:
			return "S_CH_01";
			break;
		
		case 19:
			return "S_CH_02";
			break;
		
		case 20:
			return "S_CH_03";
			break;
		
		case 21:
			return "S_CA_01";
			break;
		
		case 22:
			return "S_T_01";
			break;
		
		case 23:
			return "S_T_02";
			break;
		
		case 24:
			return "S_T_03";
			break;
		
		case 25:
			return "S_T_04";
			break;
		
		case 26:
			return "S_T_05";
			break;
		
		case 27:
			return "S_T_06";
			break;
		
		case 28:
			return "S_G_01";
			break;
		
		case 29:
			return "S_G_02";
			break;
		
		case 30:
			return "S_G_03";
			break;
		
		case 31:
			return "S_G_04";
			break;
		
		case 32:
			return "S_G_05";
			break;
		
		case 33:
			return "S_G_06";
			break;
		
		case 34:
			return "S_G_07";
			break;
		
		case 35:
			return "S_G_08";
			break;
		
		case 36:
			return "S_G_09";
			break;
		
		case 37:
			return "S_G_10";
			break;
		
		case 38:
			return "S_G_11";
			break;
		
		case 39:
			return "S_MO_01";
			break;
		
		case 40:
			return "S_MO_05";
			break;
		
		case 41:
			return "S_MO_06";
			break;
		
		case 42:
			return "S_MO_07";
			break;
		
		case 43:
			return "S_MO_08";
			break;
		
		case 44:
			return "S_MO_09";
			break;
		
		case 45:
			switch (iParam1)
			{
				case 4:
				case 5:
					return "S_MO_10";
				
				case 11:
					return "S_MO_B";
				
				case 10:
					return "S_MO_T";
				
				case 12:
					return "S_MO_HA";
				
				case 13:
					return "S_MO_AOC";
				
				case 14:
					return "S_MO_AOC";
					break;
				
				case 15:
					return "S_MO_AOC";
					break;
				
				case 16:
					return "S_MO_AOC";
					break;
			}
			return "S_MO_11";
			break;
		
		case 46:
			return "S_G_12";
			break;
		
		case 47:
			return "S_G_13";
			break;
		
		case 48:
			return "S_G_14";
			break;
	}
	return "SHOP_NAME_EMPTY";
}

int func_49(int iParam0)//Position - 0x245E
{
	switch (iParam0)
	{
		case -1:
			return 263;
			break;
		
		case 0:
			return 19;
			break;
		
		case 1:
			return 20;
			break;
		
		case 2:
			return 21;
			break;
		
		case 3:
			return 22;
			break;
		
		case 4:
			return 23;
			break;
		
		case 5:
			return 24;
			break;
		
		case 6:
			return 25;
			break;
		
		case 7:
			return 26;
			break;
		
		case 8:
			return 27;
			break;
		
		case 9:
			return 28;
			break;
		
		case 10:
			return 29;
			break;
		
		case 11:
			return 30;
			break;
		
		case 12:
			return 31;
			break;
		
		case 13:
			return 32;
			break;
		
		case 14:
			return 33;
			break;
		
		case 15:
			return 35;
			break;
		
		case 16:
			return 36;
			break;
		
		case 17:
			return 37;
			break;
		
		case 18:
			return 38;
			break;
		
		case 19:
			return 39;
			break;
		
		case 20:
			return 40;
			break;
		
		case 21:
			return 41;
			break;
		
		case 22:
			return 42;
			break;
		
		case 23:
			return 43;
			break;
		
		case 24:
			return 44;
			break;
		
		case 25:
			return 45;
			break;
		
		case 26:
			return 46;
			break;
		
		case 27:
			return 47;
			break;
		
		case 28:
			return 48;
			break;
		
		case 29:
			return 49;
			break;
		
		case 30:
			return 50;
			break;
		
		case 31:
			return 51;
			break;
		
		case 32:
			return 52;
			break;
		
		case 33:
			return 53;
			break;
		
		case 34:
			return 54;
			break;
		
		case 35:
			return 55;
			break;
		
		case 36:
			return 56;
			break;
		
		case 37:
			return 57;
			break;
		
		case 38:
			return 58;
			break;
		
		case 39:
			return 59;
			break;
		
		case 40:
			return 60;
			break;
		
		case 41:
			return 61;
			break;
		
		case 42:
			return 62;
			break;
		
		case 43:
			return 63;
			break;
		
		case 44:
			return 64;
			break;
		
		case 45:
			return 64;
			break;
		
		case 46:
			return 48;
			break;
		
		case 47:
			return 48;
			break;
		
		case 48:
			return 48;
			break;
		
		default:
			break;
	}
	return 263;
}

void func_50()//Position - 0x2730
{
	unk_0x95E4B6F3ED223F5A();
}

