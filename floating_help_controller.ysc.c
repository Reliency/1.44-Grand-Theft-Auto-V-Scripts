void __EntryFunction__()//Position - 0x0
{
	unk_0xC1A27D367CCA8C15();
	while (true)
	{
		SYSTEM::WAIT(0);
		func_1();
	}
}

void func_1()//Position - 0x1C
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_195C0)
	{
		if (Global_195C0[iVar0 /*28*/].f_15 != 0)
		{
			iVar1 = iVar0;
			if (unk_0x105601648511CC64() > Global_195C0[iVar0 /*28*/].f_15 && Global_195C0[iVar0 /*28*/].f_15 != -1)
			{
				if (func_3(iVar0))
				{
					unk_0x7A4219270DF1663F(iVar1, 0);
				}
				func_2(iVar0);
			}
			else if (func_3(iVar0))
			{
				if (Global_195C0[iVar0 /*28*/].f_15 != -1)
				{
					if (!unk_0xFA30DFD0084E92FE(Global_195C0[iVar0 /*28*/].f_1B, 0))
					{
						Global_195C0[iVar0 /*28*/].f_15 = (Global_195C0[iVar0 /*28*/].f_15 + SYSTEM::ROUND((unk_0x11F9F9006143871A() * 1000f)));
						if (unk_0x23B133A41F418EDC(iVar1))
						{
							unk_0xF0059F27F7BB6680(&(Global_195C0[iVar0 /*28*/].f_1B), 0);
						}
					}
				}
				if (Global_195C0[iVar0 /*28*/].f_18.f_2 != 9999f)
				{
					if (Global_195C0[iVar0 /*28*/].f_17 != 0)
					{
						if (!unk_0x1D403DFADBC2DE3C(Global_195C0[iVar0 /*28*/].f_17, 0))
						{
							if (!unk_0xFA30DFD0084E92FE(Global_195C0[iVar0 /*28*/].f_1B, 3))
							{
								unk_0x2787A88780067390(iVar1, unk_0xA4455714F3DCE207(Global_195C0[iVar0 /*28*/].f_17, Global_195C0[iVar0 /*28*/].f_18));
							}
							else
							{
								unk_0x9DFEFB617DC467A9(iVar1, Global_195C0[iVar0 /*28*/].f_17, Global_195C0[iVar0 /*28*/].f_18, Global_195C0[iVar0 /*28*/].f_18.f_1);
							}
						}
					}
					else if ((Global_195C0[iVar0 /*28*/].f_18 != 0f || Global_195C0[iVar0 /*28*/].f_18.f_1 != 0f) || Global_195C0[iVar0 /*28*/].f_18.f_2 != 0f)
					{
						unk_0x2787A88780067390(iVar1, Global_195C0[iVar0 /*28*/].f_18);
					}
				}
				else
				{
					unk_0x776325384BDC7376(iVar1, Global_195C0[iVar0 /*28*/].f_18, Global_195C0[iVar0 /*28*/].f_18.f_1);
				}
			}
			else if ((unk_0x105601648511CC64() - Global_195C0[iVar0 /*28*/].f_16) > 1000)
			{
				func_2(iVar0);
			}
		}
		iVar0++;
	}
}

void func_2(int iParam0)//Position - 0x20A
{
	Global_195C0[iParam0 /*28*/].f_15 = 0;
	StringCopy(&(Global_195C0[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_195C0[iParam0 /*28*/].f_4), "", 64);
	Global_195C0[iParam0 /*28*/].f_17 = 0;
	Global_195C0[iParam0 /*28*/].f_18 = { 0f, 0f, 0f };
	Global_195C0[iParam0 /*28*/].f_1B = 0;
	Global_195C0[iParam0 /*28*/].f_14 = 0;
	Global_195C0[iParam0 /*28*/].f_16 = 0;
}

int func_3(int iParam0)//Position - 0x272
{
	int iVar0;
	
	iVar0 = iParam0;
	if (!unk_0x3362CDE8460ED38B(&(Global_195C0[iParam0 /*28*/]), "") && !unk_0xEAEFBBEC1AEA464B(&(Global_195C0[iParam0 /*28*/])))
	{
		if (unk_0xFA30DFD0084E92FE(Global_195C0[iParam0 /*28*/].f_1B, 1))
		{
			if (unk_0xFA30DFD0084E92FE(Global_195C0[iParam0 /*28*/].f_1B, 2))
			{
				return func_7(iVar0, &(Global_195C0[iParam0 /*28*/]), &(Global_195C0[iParam0 /*28*/].f_4), Global_195C0[iParam0 /*28*/].f_14);
			}
			else
			{
				return func_6(iVar0, &(Global_195C0[iParam0 /*28*/]), &(Global_195C0[iParam0 /*28*/].f_4));
			}
		}
		else if (unk_0xFA30DFD0084E92FE(Global_195C0[iParam0 /*28*/].f_1B, 2))
		{
			return func_5(iVar0, &(Global_195C0[iParam0 /*28*/]), Global_195C0[iParam0 /*28*/].f_14);
		}
		else
		{
			return func_4(iVar0, &(Global_195C0[iParam0 /*28*/]));
		}
	}
	return 0;
}

int func_4(int iParam0, char* sParam1)//Position - 0x34E
{
	unk_0xF07D20149ECBC61E(sParam1);
	return unk_0xA66DBDA0A072514A((1 + iParam0));
}

int func_5(int iParam0, char* sParam1, int iParam2)//Position - 0x364
{
	unk_0xF07D20149ECBC61E(sParam1);
	unk_0xAA5C5BF0489E5553(iParam2);
	return unk_0xA66DBDA0A072514A((1 + iParam0));
}

int func_6(int iParam0, char* sParam1, char* sParam2)//Position - 0x380
{
	unk_0xF07D20149ECBC61E(sParam1);
	unk_0xC9C304D0AABE1335(sParam2);
	return unk_0xA66DBDA0A072514A((1 + iParam0));
}

int func_7(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x39C
{
	unk_0xF07D20149ECBC61E(sParam1);
	unk_0xC9C304D0AABE1335(sParam2);
	unk_0xAA5C5BF0489E5553(iParam3);
	return unk_0xA66DBDA0A072514A((1 + iParam0));
}

