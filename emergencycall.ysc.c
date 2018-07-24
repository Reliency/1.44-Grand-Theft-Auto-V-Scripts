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
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	vector3 vLocal_45 = { 0f, 0f, 0f };
	int iLocal_46 = 0;
	var uLocal_47 = 0;
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	if (unk_0xE8A79675302ED812(11))
	{
		iLocal_43 = 5;
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			switch (iLocal_43)
			{
				case 0:
					func_9();
					break;
				
				case 1:
					break;
				
				case 2:
					func_8();
					if (unk_0x7AF0088ABFA713B6())
					{
						if (unk_0xFDE08BF17742D2F5(7, unk_0xBC25C936A095B5BA(), 2, 3f, &uLocal_47, 0, 0))
						{
							iLocal_46 = unk_0x105601648511CC64();
							iLocal_43 = 5;
						}
					}
					else if (unk_0x9EDABB1E7725D7A0(7, vLocal_45, 2, 3f, &uLocal_47, 0, 0))
					{
						iLocal_46 = unk_0x105601648511CC64();
						iLocal_43 = 5;
					}
					break;
				
				case 3:
					func_8();
					if (unk_0x7AF0088ABFA713B6())
					{
						if ((func_7(unk_0xB5CEFD608600A09F(), 0) && func_4(unk_0xB5CEFD608600A09F()) == 5) && Global_19AF6D)
						{
							if (Global_19AF6E == 0)
							{
								Global_19AF6E = 1;
							}
							iLocal_43 = 5;
						}
						else if (unk_0xFDE08BF17742D2F5(5, unk_0xBC25C936A095B5BA(), 2, 3f, &uLocal_47, 0, 0))
						{
							iLocal_46 = unk_0x105601648511CC64();
							iLocal_43 = 5;
						}
					}
					else if (unk_0x9EDABB1E7725D7A0(5, vLocal_45, 2, 3f, &uLocal_47, 0, 0))
					{
						iLocal_46 = unk_0x105601648511CC64();
						iLocal_43 = 5;
					}
					break;
				
				case 4:
					func_8();
					if (unk_0x7AF0088ABFA713B6())
					{
						if (unk_0xFDE08BF17742D2F5(3, unk_0xBC25C936A095B5BA(), 4, 3f, &uLocal_47, 0, 0))
						{
							iLocal_46 = unk_0x105601648511CC64();
							iLocal_43 = 5;
						}
					}
					else if (unk_0x9EDABB1E7725D7A0(3, vLocal_45, 4, 3f, &uLocal_47, 0, 0))
					{
						if (Global_15DFD.f_166 == unk_0x56BEECB328B6D29D("AGENCY_PREP_1") || (unk_0xB731B8C5BCE89836(unk_0x56BEECB328B6D29D("agency_prep1")) > 0 && func_3(0)))
						{
							Global_15DFD.f_166 = unk_0x56BEECB328B6D29D("AHP1_TRUCKCALLED");
						}
						else if (func_2(67) && !func_2(68))
						{
							Global_15DB7 = 1;
						}
						iLocal_46 = unk_0x105601648511CC64();
						iLocal_43 = 5;
					}
					break;
				
				case 5:
					if (unk_0x105601648511CC64() > (iLocal_46 + 60000) || !unk_0x51FE3C0716E82F24(uLocal_47))
					{
						func_1();
					}
					else if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
					{
						if (!unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()))
						{
							if (unk_0x51FE3C0716E82F24(uLocal_47))
							{
								unk_0xA77AF936A56AEF7A(uLocal_47);
							}
						}
					}
					break;
				}
		}
	}
}

void func_1()//Position - 0x27A
{
	iLocal_43 = 0;
	iLocal_44 = 0;
	unk_0x95E4B6F3ED223F5A();
}

int func_2(int iParam0)//Position - 0x28C
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_19B04.f_2360.f_14A[iParam0 /*6*/];
}

bool func_3(bool bParam0)//Position - 0x2B8
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_1163A, 0);
}

int func_4(int iParam0)//Position - 0x2E3
{
	if (func_6(iParam0) == 233)
	{
		return func_5(iParam0);
	}
	return -1;
}

int func_5(int iParam0)//Position - 0x300
{
	if (func_7(iParam0, 0))
	{
		return Global_18C80F[iParam0 /*558*/].f_B.f_B0;
	}
	return -1;
}

int func_6(int iParam0)//Position - 0x323
{
	if (func_7(iParam0, 0))
	{
		return Global_18C80F[iParam0 /*558*/].f_B.f_21;
	}
	return -1;
}

int func_7(int iParam0, int iParam1)//Position - 0x346
{
	if (Global_18C80F[iParam0 /*558*/].f_B.f_21 != -1 || (iParam1 && Global_18C80F[iParam0 /*558*/].f_B.f_20 != -1))
	{
		return 1;
	}
	return 0;
}

void func_8()//Position - 0x381
{
	if (unk_0x105601648511CC64() > iLocal_46 + 30000)
	{
		iLocal_43 = 5;
	}
}

void func_9()//Position - 0x398
{
	var uVar0;
	
	switch (iLocal_44)
	{
		case 0:
			iLocal_44 = 1;
			iLocal_46 = unk_0x105601648511CC64();
			break;
		
		case 1:
			while (!func_17())
			{
				SYSTEM::WAIT(0);
				if (func_16() == 3)
				{
					iLocal_43 = 3;
				}
				if (func_16() == 4)
				{
					iLocal_43 = 4;
				}
				if (func_16() == 5)
				{
					iLocal_43 = 2;
				}
				if (unk_0x105601648511CC64() > iLocal_46 + 30000)
				{
					iLocal_46 = unk_0x105601648511CC64();
					func_12(0);
				}
			}
			if (iLocal_43 == 0)
			{
				iLocal_43 = 5;
			}
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				func_10(unk_0xBC25C936A095B5BA(), &vLocal_45, &uVar0);
			}
			iLocal_46 = unk_0x105601648511CC64();
			break;
	}
}

void func_10(int iParam0, var uParam1, var uParam2)//Position - 0x431
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	vector3 vVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	var uVar16;
	vector3 vVar17;
	var uVar18;
	
	fVar12 = 5f;
	iVar0 = 1;
	iVar13 = 0;
	while (iVar13 < 2)
	{
		switch (iVar13)
		{
			case 0:
				unk_0xF1893A29A79EED3B(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), iVar0, uParam1, &fVar10, &iVar1, 5, 3f, 0f);
				unk_0x0B9FA0F40EF282A2(*uParam1, 1f, 1, &uVar4, &uVar5, &uVar2, &uVar3, &fVar7, 0);
				if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false), -3044.66f, 596.43f, 6.58f, true) < 25f)
				{
					*uParam1 = { -3031.38f, 605.32f, 6.86f };
				}
				vVar6 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) - unk_0x541C2AEF053615BC(iParam0, true) };
				fVar8 = unk_0xFDC254CE02DB0919(vVar6.x, vVar6.y);
				fVar9 = (fVar10 + 180f);
				if (fVar9 > 360f)
				{
					fVar9 = (fVar9 - 360f);
				}
				if (func_11(fVar8, fVar10, 90f))
				{
					*uParam2 = fVar10;
				}
				else
				{
					*uParam2 = fVar9;
				}
				if (fVar7 < 0f)
				{
					fVar11 = 0f;
				}
				else if (unk_0x6F0339DC0CD61C94(unk_0x792A3209B8366EB3(*uParam1, 1, 1, 1077936128, 0)))
				{
					fVar11 = 0f;
				}
				else
				{
					fVar11 = (fVar12 * SYSTEM::TO_FLOAT((iVar1 / 2)));
					if (fVar11 == 0f)
					{
						fVar11 = (fVar11 + fVar12);
					}
					if (iVar1 == 5)
					{
						fVar11 = (fVar11 + fVar12);
					}
					if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false), 294f, -895f, 28f, true) < 25f || unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false), -713.01f, -819.64f, 22.63f, true) < 25f)
					{
						fVar11 = (fVar11 + 5f);
					}
					else
					{
						fVar11 = (fVar11 + 3.75f);
					}
					fVar11 = (fVar11 + (fVar7 / 2f));
				}
				if (SYSTEM::VDIST(unk_0x89D97EB4FAE4A574(*uParam1, *uParam2, fVar11, 0f, 0f), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true)) > SYSTEM::VDIST(unk_0x89D97EB4FAE4A574(*uParam1, *uParam2, -fVar11, 0f, 0f), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true)))
				{
					fVar11 = -fVar11;
				}
				*uParam1 = { unk_0x89D97EB4FAE4A574(*uParam1, *uParam2, fVar11, 0f, 0f) };
				iVar14 = unk_0xEDB5D06AC6E2D672(*uParam1 + FtoV((uParam1->f_2 + 4.5f)), *uParam1 + Vector(4.5f, 0.5f, 0.5f), 2.5f, 1, 0, 4);
				iVar13++;
				break;
			
			case 1:
				if (iVar0 <= 2)
				{
					if (unk_0xB0695CD48A28A3A9(iVar14, &iVar15, &vVar17, &uVar16, &uVar18) == 2)
					{
						if (iVar15 != 0)
						{
							if (vVar17.z > (uParam1->f_2 + 8.5f))
							{
								iVar13++;
							}
							else
							{
								iVar0++;
								iVar13 = 0;
							}
						}
						else
						{
							iVar13++;
						}
					}
				}
				else
				{
					iVar13++;
				}
				break;
			
			case 2:
				break;
		}
	}
}

int func_11(float fParam0, float fParam1, float fParam2)//Position - 0x6D7
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

void func_12(int iParam0)//Position - 0x74C
{
	if (Global_3943)
	{
		func_14(0, 0);
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
	if (!func_13())
	{
		Global_389D.f_1 = 3;
	}
}

int func_13()//Position - 0x7BC
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_14(bool bParam0, bool bParam1)//Position - 0x7E3
{
	if (bParam0)
	{
		if (func_15(0))
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

int func_15(int iParam0)//Position - 0x857
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

int func_16()//Position - 0x8B1
{
	return Global_41B1;
}

int func_17()//Position - 0x8BC
{
	if (Global_3DB8 == 0)
	{
		return 1;
	}
	return 0;
}

