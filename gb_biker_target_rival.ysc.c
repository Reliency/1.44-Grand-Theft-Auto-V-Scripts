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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	func_77();
	while (true)
	{
		func_76();
		if (func_68())
		{
			func_67();
		}
		if (Global_267214.f_1312.f_2E2 == 0)
		{
			func_67();
		}
		switch (iLocal_35)
		{
			case 0:
				iLocal_35 = 1;
				break;
			
			case 1:
				if (func_11())
				{
					iLocal_35 = 2;
				}
				break;
			
			case 2:
				if (!func_1())
				{
					iLocal_35 = 4;
				}
				break;
			
			case 4:
				func_67();
				break;
		}
	}
}

int func_1()//Position - 0xD3
{
	int iVar0;
	
	if (func_7(1))
	{
		iVar0 = Global_267214.f_1312.f_2E1;
		if (iVar0 != func_6())
		{
			if (func_4(iVar0))
			{
				func_2(iVar0);
				return 0;
			}
		}
		else
		{
			func_2(iVar0);
			return 0;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_2(int iParam0)//Position - 0x120
{
	if (iParam0 != func_6())
	{
		func_3(iParam0);
	}
	Global_267214.f_1312.f_2E1 = func_6();
}

void func_3(int iParam0)//Position - 0x145
{
	int iVar0;
	
	iVar0 = iParam0;
	unk_0x7CB6FD92BE491AD9(&(Global_24DCC0.f_181), iVar0);
	unk_0x7CB6FD92BE491AD9(&(Global_24DCC0.f_182), iVar0);
	unk_0x7CB6FD92BE491AD9(&(Global_24DCC0.f_183), iVar0);
	unk_0x7CB6FD92BE491AD9(&(Global_24DCC0.f_185), iVar0);
	unk_0x7CB6FD92BE491AD9(&(Global_24DCC0.f_189), iVar0);
	unk_0x7CB6FD92BE491AD9(&(Global_24DCC0.f_184), iVar0);
}

int func_4(int iParam0)//Position - 0x19F
{
	if (!func_5(iParam0, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_5(int iParam0, bool bParam1, bool bParam2)//Position - 0x1B8
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

int func_6()//Position - 0x202
{
	return -1;
}

bool func_7(bool bParam0)//Position - 0x20B
{
	return func_8(unk_0xB5CEFD608600A09F(), bParam0);
}

int func_8(int iParam0, bool bParam1)//Position - 0x21D
{
	return func_9(iParam0, bParam1, 1);
}

int func_9(int iParam0, bool bParam1, int iParam2)//Position - 0x22E
{
	int iVar0;
	
	if (iParam0 == func_6())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_10(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_18C80F[iParam0 /*558*/].f_B;
	if (iVar0 != func_6() && Global_18C80F[iVar0 /*558*/].f_B.f_199 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_10(int iParam0, int iParam1)//Position - 0x28A
{
	if (iParam0 != func_6())
	{
		if (Global_18C80F[iParam0 /*558*/].f_B != func_6())
		{
			if (Global_18C80F[iParam0 /*558*/].f_B == iParam0 && Global_18C80F[iParam0 /*558*/].f_B.f_199 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_11()//Position - 0x2D9
{
	int iVar0;
	
	if (func_7(1))
	{
		iVar0 = Global_267214.f_1312.f_2E1;
		if (iVar0 != func_6())
		{
			if (func_12(iVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_12(int iParam0)//Position - 0x30C
{
	if (func_5(iParam0, 0, 1))
	{
		func_65(iParam0, 432, 1, 0);
		if (func_64(iParam0))
		{
			func_61(iParam0, func_62(func_63(unk_0xB5CEFD608600A09F())), 1, 0);
		}
		if (func_59(iParam0))
		{
			func_57(iParam0, 1, 1, 0);
		}
		func_52(iParam0, 1, 0);
		func_13(iParam0, 1, 5000);
		return 1;
	}
	return 0;
}

void func_13(int iParam0, bool bParam1, int iParam2)//Position - 0x370
{
	int iVar0;
	
	if (iParam0 == func_6())
	{
		return;
	}
	if (iParam2 > 200000)
	{
		iParam2 = 200000;
	}
	iVar0 = iParam0;
	if (bParam1)
	{
		if (iParam0 == Global_252E21)
		{
		}
		else if (unk_0x2DA8CA50A72528FB(Global_24DCC0[iVar0]))
		{
			unk_0xF0059F27F7BB6680(&(Global_24DCC0.f_16F), iVar0);
			unk_0x7CB6FD92BE491AD9(&(Global_24DCC0.f_174), iVar0);
			unk_0x7A6BBF86FCBBCF7E(Global_24DCC0[iVar0], 1);
			unk_0x8E7353709BE00FEC(Global_24DCC0[iVar0], 250);
			func_14(iParam0);
			if (iParam2 < 0)
			{
				unk_0xF0059F27F7BB6680(&(Global_24DCC0.f_174), iVar0);
			}
			else
			{
				Global_24DCC0.f_C6[iVar0] = unk_0x863D0D1A37055D36(unk_0xED678C85A82F0AB9(), iParam2);
			}
		}
		else
		{
			unk_0xF0059F27F7BB6680(&(Global_24DCC0.f_16F), iVar0);
			unk_0x7CB6FD92BE491AD9(&(Global_24DCC0.f_174), iVar0);
			if (iParam2 < 0)
			{
				unk_0xF0059F27F7BB6680(&(Global_24DCC0.f_174), iVar0);
			}
			else
			{
				Global_24DCC0.f_C6[iVar0] = unk_0x863D0D1A37055D36(unk_0xED678C85A82F0AB9(), iParam2);
			}
		}
	}
	if (!bParam1)
	{
		unk_0x7CB6FD92BE491AD9(&(Global_24DCC0.f_16F), iVar0);
		unk_0x7CB6FD92BE491AD9(&(Global_24DCC0.f_174), iVar0);
		if (unk_0x2DA8CA50A72528FB(Global_24DCC0[iVar0]))
		{
			func_14(iParam0);
			unk_0x7A6BBF86FCBBCF7E(Global_24DCC0[iVar0], 0);
		}
	}
}

void func_14(int iParam0)//Position - 0x4A5
{
	int iVar0;
	
	iVar0 = iParam0;
	if (func_5(iParam0, 0, 1))
	{
		if (unk_0x2DA8CA50A72528FB(Global_24DCC0[iVar0]))
		{
			Global_24DCC0.f_575[iVar0] = func_15(iParam0);
			unk_0x12DB69036F6569F7(Global_24DCC0[iVar0], Global_24DCC0.f_575[iVar0]);
		}
	}
}

int func_15(int iParam0)//Position - 0x4F3
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (func_5(iParam0, 0, 1))
	{
		if (unk_0x2DA8CA50A72528FB(Global_24DCC0[iVar0]))
		{
			iVar1 = unk_0xC091C6E0775FBDAA(Global_24DCC0[iVar0]);
			if (unk_0xFA30DFD0084E92FE(Global_24DCC0.f_17F, iVar0) || unk_0xFA30DFD0084E92FE(Global_24DCC0.f_17E, iVar0))
			{
				return 1;
			}
			else if ((unk_0xFA30DFD0084E92FE(Global_24DCC0.f_170, iVar0) || unk_0xFA30DFD0084E92FE(Global_24DCC0.f_16F, iVar0)) || unk_0xFA30DFD0084E92FE(Global_24DCC0.f_181, iVar0))
			{
				return func_49(10);
			}
			else
			{
				switch (iVar1)
				{
					case 253:
					case 252:
					case 255:
						return func_49(7);
						break;
					
					case 257:
					case 258:
					case 259:
					case 260:
					case 261:
						return func_49(11);
						break;
					
					case 254:
						if (unk_0x343CB262BF0CDF5A(iParam0) == unk_0x343CB262BF0CDF5A(Global_252E21))
						{
							return func_49(6);
						}
						else
						{
							return func_49(5);
						}
						break;
					
					case 271:
						if (unk_0x343CB262BF0CDF5A(iParam0) == unk_0x343CB262BF0CDF5A(Global_252E21))
						{
							return func_49(6);
						}
						else
						{
							return func_49(5);
						}
						break;
					
					case 163:
					case 164:
						if (func_48(Global_252E21, iParam0, -2, 0))
						{
							return func_49(6);
						}
						else
						{
							return func_49(5);
						}
						break;
					
					case 303:
					case 418:
						return func_49(10);
						break;
					
					case 364:
						if (func_16(Global_252E21, iParam0, 1))
						{
							return func_49(10);
						}
						else
						{
							return func_49(5);
						}
						break;
					
					case 478:
					case 501:
					case 523:
					case 556:
						return func_49(10);
						break;
					
					case 417:
						if (func_16(Global_252E21, iParam0, 1))
						{
							return func_49(6);
						}
						else
						{
							return func_49(5);
						}
						break;
					
					case 256:
					case 268:
					default:
						if (func_16(Global_252E21, iParam0, 1))
						{
							return func_49(6);
						}
						else
						{
							return func_49(5);
						}
						break;
					}
				}
			}
	}
	return 1;
}

int func_16(int iParam0, int iParam1, bool bParam2)//Position - 0x730
{
	if (func_19(iParam0, -2, 0, 0) == func_19(iParam1, -2, 0, 0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (func_17(func_19(iParam0, -2, 0, 0)) && func_17(func_19(iParam1, -2, 0, 0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_17(int iParam0)//Position - 0x785
{
	if (iParam0 == func_18(1) || iParam0 == func_18(0))
	{
		return 1;
	}
	return 0;
}

int func_18(bool bParam0)//Position - 0x7AB
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_19(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x7C2
{
	int iVar0;
	int iVar1;
	
	if (func_43(iParam0))
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = unk_0x343CB262BF0CDF5A(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_440000.f_1DBFD[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if ((func_43(unk_0xB5CEFD608600A09F()) || (func_42() && func_41())) && !unk_0xFA30DFD0084E92FE(Global_267214.f_11E0, 31))
	{
		iVar1 = func_40();
		if (unk_0x724D816EA203A79E(iVar1))
		{
			if (unk_0x15DBD981998D4FE1(iVar1))
			{
				if (unk_0x5363B43856FA7779(iVar1) != -1)
				{
					if (func_5(unk_0x5363B43856FA7779(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x517823CA390A19F6()) && iParam1 < 4)
						{
							if (Global_440000.f_1DBFD[iParam1] != -1)
							{
								return func_38(iParam1, iParam0, 0);
							}
							else
							{
								return func_26(iParam0, unk_0x5363B43856FA7779(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_26(iParam0, unk_0x5363B43856FA7779(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x517823CA390A19F6()) && iParam1 < 4)
			{
				if (Global_440000.f_1DBFD[iParam1] != -1)
				{
					return func_38(iParam1, iParam0, 0);
				}
				else
				{
					return func_20(0, -1, 0);
				}
			}
			else
			{
				return func_20(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x517823CA390A19F6()) && iParam1 < 4)
	{
		if (Global_440000.f_1DBFD[iParam1] != -1)
		{
			return func_38(iParam1, iParam0, 0);
		}
		else
		{
			return func_26(iParam0, unk_0xB5CEFD608600A09F(), iParam1, bParam2, bParam3);
		}
	}
	return func_26(iParam0, unk_0xB5CEFD608600A09F(), iParam1, bParam2, bParam3);
}

int func_20(bool bParam0, int iParam1, bool bParam2)//Position - 0x992
{
	return func_21(unk_0xB5CEFD608600A09F(), bParam0, iParam1, bParam2);
}

int func_21(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x9A8
{
	int iVar0;
	
	if (!unk_0x96B1061E8F3CBC9A(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x343CB262BF0CDF5A(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_25(iVar0, iParam2, 0) && !unk_0xFA30DFD0084E92FE(Global_440000.f_F, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_18(1);
				}
				else
				{
					return func_18(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xFA30DFD0084E92FE(Global_440000.f_4, 20))
			{
				return func_22(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_22(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_18(1);
	}
	return func_18(0);
}

int func_22(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0xA6C
{
	int iVar0;
	
	iVar0 = func_24(iParam0, iParam1, iParam3);
	if (func_23(Global_440000.f_1EF38, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_23(int iParam0, bool bParam1)//Position - 0xB84
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_440000.f_243FE == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_40001.f_20D8[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_24(int iParam0, int iParam1, int iParam2)//Position - 0xBD5
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_25(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_25(int iParam0, int iParam1, int iParam2)//Position - 0xC1C
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 0);
				
				case 1:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 1);
				
				case 2:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 2);
				
				case 3:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 4);
				
				case 1:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 5);
				
				case 2:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 6);
				
				case 3:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 8);
				
				case 1:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 9);
				
				case 2:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 10);
				
				case 3:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 12);
				
				case 1:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 13);
				
				case 2:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 14);
				
				case 3:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_26(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0xDE7
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x343CB262BF0CDF5A(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_18402B[unk_0xB5CEFD608600A09F() /*770*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_18402B[iVar2 /*770*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_34(1))
			{
				iVar3 = func_30(iParam0);
				if (!iVar3 == -1)
				{
					return func_28(iVar3);
				}
			}
			if ((func_48(iParam1, iParam0, iVar0, 0) && !unk_0xFA30DFD0084E92FE(Global_440000.f_F, 18)) || ((func_25(unk_0x343CB262BF0CDF5A(iParam1), unk_0x343CB262BF0CDF5A(iParam0), 0) && unk_0xFA30DFD0084E92FE(Global_440000.f_F, 23)) && !unk_0xFA30DFD0084E92FE(Global_440000.f_F, 18)))
			{
				return func_18(1);
			}
			else if (unk_0xFA30DFD0084E92FE(Global_440000.f_F, 26))
			{
				return func_27(1);
			}
			else
			{
				return func_21(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1805D3 || Global_1805CA) || Global_18402B[iParam0 /*770*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1805D3 == 1 && Global_1805DD == 0))
			{
				return func_18(1);
			}
			else
			{
				return func_21(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1805CE && Global_1803FC.f_E == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_30(iParam0);
	if (!iVar4 == -1)
	{
		return func_28(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_27(bool bParam0)//Position - 0xF8B
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

int func_28(int iParam0)//Position - 0xFA2
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_29(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_29(int iParam0)//Position - 0x1065
{
	return Global_24E35D.f_817.f_2C[iParam0 /*2*/].f_1;
}

int func_30(int iParam0)//Position - 0x107C
{
	if (!iParam0 == func_6())
	{
		if (func_32(iParam0, 1))
		{
			return Global_24E35D.f_817.f_B[func_31(iParam0)];
		}
	}
	return -1;
}

int func_31(int iParam0)//Position - 0x10AE
{
	if (iParam0 != func_6())
	{
		return Global_18C80F[iParam0 /*558*/].f_B;
	}
	return func_6();
}

bool func_32(int iParam0, bool bParam1)//Position - 0x10D1
{
	if (!bParam1)
	{
		if (func_33(iParam0))
		{
			return 0;
		}
	}
	return Global_18C80F[iParam0 /*558*/].f_B != func_6();
}

int func_33(int iParam0)//Position - 0x10FC
{
	if (iParam0 != func_6())
	{
		if (Global_18C80F[iParam0 /*558*/].f_B != func_6())
		{
			return Global_18C80F[iParam0 /*558*/].f_B == iParam0;
		}
	}
	return 0;
}

int func_34(int iParam0)//Position - 0x1131
{
	if ((func_37() || func_36()) || (func_35() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_35()//Position - 0x1160
{
	return Global_255A46.f_10;
}

var func_36()//Position - 0x116E
{
	return Global_255A46.f_F;
}

var func_37()//Position - 0x117C
{
	return Global_255A46.f_E;
}

int func_38(int iParam0, int iParam1, bool bParam2)//Position - 0x118A
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_EF621.f_C[iParam0];
	if (func_34(1))
	{
		iVar2 = func_30(iParam1);
		if (!iVar2 == -1)
		{
			return func_28(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0xFA30DFD0084E92FE(Global_440000.f_62[iParam0 /*10231*/].f_14F1[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_6())
	{
		if (Global_440000.f_1DBFD[iParam0] != -1 && Global_440000.f_1DBFD[iParam0] <= 4)
		{
			if (Global_440000.f_1DBFD[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_440000.f_1DBFD[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_440000.f_1DBFD[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_440000.f_1DBFD[iParam0] == 4)
			{
				if (unk_0xFA30DFD0084E92FE(Global_440000.f_F, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_440000.f_1DBFD[iParam0];
			}
		}
		else
		{
			iVar0 = func_21(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0xFA30DFD0084E92FE(Global_440000.f_15, 13))
		{
			iVar0 = func_39(iParam0);
		}
		if (unk_0xFA30DFD0084E92FE(Global_440000.f_18, 29))
		{
			iVar0 = 0;
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_39(int iParam0)//Position - 0x12EF
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_440000.f_24429;
			break;
		
		case 1:
			iVar0 = Global_440000.f_2442A;
			break;
		
		case 2:
			iVar0 = Global_440000.f_2442B;
			break;
		
		case 3:
			iVar0 = Global_440000.f_2442C;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_40()//Position - 0x13C4
{
	return Global_240006.f_2;
}

bool func_41()//Position - 0x13D2
{
	return unk_0xFA30DFD0084E92FE(Global_240006, 4);
}

bool func_42()//Position - 0x13E3
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_27.f_12, 14);
}

int func_43(int iParam0)//Position - 0x1400
{
	if (func_45(iParam0, 0))
	{
		return 1;
	}
	if (func_44())
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

bool func_44()//Position - 0x1442
{
	return unk_0xFA30DFD0084E92FE(Global_240006, 3);
}

bool func_45(int iParam0, int iParam1)//Position - 0x1453
{
	bool bVar0;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		bVar0 = func_46(-1, 0) == 8;
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

int func_46(int iParam0, bool bParam1)//Position - 0x149E
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_47();
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

int func_47()//Position - 0x14DF
{
	return Global_1407E0;
}

bool func_48(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x14EB
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x343CB262BF0CDF5A(iParam0) == -1 && unk_0x343CB262BF0CDF5A(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x343CB262BF0CDF5A(iParam0) == unk_0x343CB262BF0CDF5A(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x343CB262BF0CDF5A(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x343CB262BF0CDF5A(iParam0) == iParam2;
	}
	return unk_0x343CB262BF0CDF5A(iParam0) == iParam2;
}

int func_49(int iParam0)//Position - 0x1563
{
	switch (iParam0)
	{
		case 5:
		case 6:
			if (func_51())
			{
				if (iParam0 == 5)
				{
					iParam0 = 6;
				}
				else
				{
					iParam0 = 5;
				}
			}
			break;
	}
	return func_50(iParam0);
}

int func_50(int iParam0)//Position - 0x159D
{
	switch (iParam0)
	{
		case 10:
			return 9;
			break;
		
		case 5:
			return 8;
			break;
		
		case 6:
			return 7;
			break;
		
		case 8:
			return 6;
			break;
		
		case 7:
			return 4;
			break;
		
		case 4:
		case 11:
			return 2;
			break;
		
		case 0:
		case 2:
		case 3:
		case 9:
		case 1:
			return 1;
			break;
	}
	return 1;
}

int func_51()//Position - 0x1628
{
	int iVar0;
	
	iVar0 = unk_0x343CB262BF0CDF5A(Global_252E21);
	if (iVar0 > -1 && iVar0 < 4)
	{
		return unk_0xFA30DFD0084E92FE(Global_440000.f_62[iVar0 /*10231*/].f_1528, 4);
	}
	return 0;
}

void func_52(int iParam0, bool bParam1, bool bParam2)//Position - 0x1661
{
	var uVar0;
	
	if (func_54(iParam0))
	{
		return;
	}
	func_53(&(Global_24DCC0.f_2C9[iParam0]), &(Global_24DCC0.f_434[iParam0]), &(Global_24DCC0.f_186), bParam1, iParam0, bParam2, &uVar0);
}

int func_53(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)//Position - 0x169F
{
	if (bParam5)
	{
		if (!unk_0x3C406FC829C1E14A(*uParam1) || *uParam1 == unk_0x8A55B15F4133C912())
		{
			*uParam1 = unk_0x8A55B15F4133C912();
			*uParam0 = unk_0x8A55B15F4133C912();
		}
	}
	if (!unk_0x3C406FC829C1E14A(*uParam0) || *uParam0 == unk_0x8A55B15F4133C912())
	{
		if (bParam3)
		{
			if (!unk_0xFA30DFD0084E92FE(*iParam2, iParam4))
			{
				*uParam6 = 1;
				unk_0xF0059F27F7BB6680(iParam2, iParam4);
			}
			*uParam0 = unk_0x8A55B15F4133C912();
		}
		else
		{
			if (unk_0xFA30DFD0084E92FE(*iParam2, iParam4))
			{
				*uParam6 = 1;
				unk_0x7CB6FD92BE491AD9(iParam2, iParam4);
			}
			if (*uParam1 == unk_0x8A55B15F4133C912())
			{
				*uParam1 = -1;
			}
			*uParam0 = -1;
		}
		return 1;
	}
	else if (unk_0x3C406FC829C1E14A(*uParam1) && !*uParam1 == unk_0x8A55B15F4133C912())
	{
	}
	return 0;
}

int func_54(int iParam0)//Position - 0x1764
{
	if (iParam0 == func_6())
	{
		return 1;
	}
	if (unk_0x56BEECB328B6D29D(unk_0x1377080E9B0BD993()) == func_55())
	{
		return 1;
	}
	return 0;
}

int func_55()//Position - 0x178D
{
	switch (func_56())
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

int func_56()//Position - 0x17C1
{
	return Global_62BD;
}

void func_57(int iParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x17CC
{
	var uVar0;
	
	if (func_54(iParam0))
	{
		return;
	}
	if (func_53(&(Global_24DCC0.f_32C[iParam0]), &(Global_24DCC0.f_497[iParam0]), &(Global_24DCC0.f_16C), bParam1, iParam0, bParam3, &uVar0))
	{
		func_58(iParam0, bParam2);
	}
}

void func_58(int iParam0, bool bParam1)//Position - 0x1814
{
	if (bParam1)
	{
		unk_0xF0059F27F7BB6680(&(Global_24DCC0.f_16D), iParam0);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_24DCC0.f_16D), iParam0);
	}
	if (unk_0x2DA8CA50A72528FB(Global_24DCC0[iParam0]))
	{
		if (bParam1)
		{
			unk_0x4909873A6873A6C3(Global_24DCC0[iParam0], false);
		}
		else
		{
			unk_0x4909873A6873A6C3(Global_24DCC0[iParam0], true);
		}
	}
}

bool func_59(int iParam0)//Position - 0x186F
{
	return func_60(&(Global_24DCC0.f_32C[iParam0]));
}

int func_60(var uParam0)//Position - 0x1886
{
	if (unk_0x3C406FC829C1E14A(*uParam0))
	{
		if (!*uParam0 == unk_0x8A55B15F4133C912())
		{
			return 0;
		}
	}
	return 1;
}

void func_61(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x18A9
{
	var uVar0;
	
	if (func_54(iParam0))
	{
		return;
	}
	if (func_53(&(Global_24DCC0.f_266[iParam0]), &(Global_24DCC0.f_3D1[iParam0]), &(Global_24DCC0.f_182), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_24DCC0.f_1C1[iParam0] = uParam1;
		}
	}
}

int func_62(int iParam0)//Position - 0x18FB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	unk_0xE45648BDBF3441F5(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

int func_63(int iParam0)//Position - 0x1B63
{
	int iVar0;
	
	iVar0 = func_30(iParam0);
	if (iVar0 != -1)
	{
		return func_28(iVar0);
	}
	return 1;
}

bool func_64(int iParam0)//Position - 0x1B83
{
	return func_60(&(Global_24DCC0.f_266[iParam0]));
}

void func_65(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x1B9A
{
	bool bVar0;
	
	if (func_54(iParam0))
	{
		return;
	}
	if (func_53(&(Global_24DCC0.f_245[iParam0]), &(Global_24DCC0.f_3B0[iParam0]), &(Global_24DCC0.f_181), bParam2, iParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_24DCC0.f_1A0[iParam0] = iParam1;
		}
		if (bVar0)
		{
			func_66();
		}
	}
}

void func_66()//Position - 0x1BF5
{
	Global_24DCC0.f_5E4 = 1;
}

void func_67()//Position - 0x1C05
{
	func_2(Global_267214.f_1312.f_2E1);
	unk_0x95E4B6F3ED223F5A();
}

int func_68()//Position - 0x1C1F
{
	var uVar0;
	
	func_73(&uVar0);
	if (Global_14083F == 0)
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			return 1;
		}
	}
	if (func_72())
	{
		return 1;
	}
	if (Global_25891C)
	{
		return 1;
	}
	if (func_71())
	{
		return 1;
	}
	if (func_70(157))
	{
		if (!func_69())
		{
			return 1;
		}
	}
	if (func_70(155))
	{
		return 1;
	}
	if (!unk_0x57D316754A262B34())
	{
		return 1;
	}
	if (func_55() != 0)
	{
		if (unk_0xB731B8C5BCE89836(func_55()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_69()//Position - 0x1CA9
{
	return Global_255A46.f_24A;
}

int func_70(int iParam0)//Position - 0x1CB8
{
	if (unk_0xA1AC399BCBEE5B2D(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_71()//Position - 0x1CCF
{
	return Global_258063;
}

bool func_72()//Position - 0x1CDB
{
	return Global_255A46.f_245;
}

void func_73(var uParam0)//Position - 0x1CEA
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
					func_74(iVar0);
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

void func_74(int iParam0)//Position - 0x1D5D
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x414AA1932D1C88E2(1, iParam0, &vVar0, 3))
	{
		if (func_5(vVar0.y, 1, 1))
		{
			iVar1 = unk_0xA95CF30C72EB526E(vVar0.y);
			if (unk_0x724D816EA203A79E(iVar1))
			{
				if (unk_0x5237AF95232D78C5(iVar1, 0))
				{
					iVar2 = unk_0x9FE9D386222EEE47(iVar1, 0);
					if (unk_0x403C891106DCABAF(iVar2, vVar0.z) && unk_0x32405B7614E36453())
					{
						if (func_75(iVar2, &bVar3))
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

int func_75(int iParam0, var uParam1)//Position - 0x1DDE
{
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (!unk_0x5CAE759AE8219D20(iParam0))
		{
			if (unk_0x63B5FF8D34CBC98E(iParam0))
			{
				if (!unk_0xFF2234981505F7F4(unk_0x6F79ECA8C83E4357(iParam0)))
				{
					unk_0x77815D3407C6700D(iParam0, false, 1);
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

void func_76()//Position - 0x1E3D
{
	SYSTEM::WAIT(0);
}

int func_77()//Position - 0x1E4A
{
	unk_0x6C87EFD58B261C6F(0);
	return 1;
}

