#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	
	iLocal_0 = -1;
	unk_0xC1A27D367CCA8C15();
	unk_0x5183B5D4E829B7E4("prologue06_int");
	unk_0x5183B5D4E829B7E4("prologue01");
	unk_0x5183B5D4E829B7E4("prologue02");
	unk_0x5183B5D4E829B7E4("prologue03");
	unk_0x5183B5D4E829B7E4("prologue04");
	unk_0x5183B5D4E829B7E4("prologue05");
	unk_0x5183B5D4E829B7E4("prologue06");
	unk_0x5183B5D4E829B7E4("prologuerd");
	unk_0x5183B5D4E829B7E4("Prologue01c");
	unk_0x5183B5D4E829B7E4("Prologue01d");
	unk_0x5183B5D4E829B7E4("Prologue01e");
	unk_0x5183B5D4E829B7E4("Prologue01f");
	unk_0x5183B5D4E829B7E4("Prologue01g");
	unk_0x5183B5D4E829B7E4("prologue01h");
	unk_0x5183B5D4E829B7E4("prologue01i");
	unk_0x5183B5D4E829B7E4("prologue01j");
	unk_0x5183B5D4E829B7E4("prologue01k");
	unk_0x5183B5D4E829B7E4("prologue01z");
	unk_0x5183B5D4E829B7E4("prologue03b");
	unk_0x5183B5D4E829B7E4("prologue04b");
	unk_0x5183B5D4E829B7E4("prologue05b");
	unk_0x5183B5D4E829B7E4("prologue06b");
	unk_0x5183B5D4E829B7E4("prologuerdb");
	unk_0x5183B5D4E829B7E4("prologue_occl");
	unk_0x5183B5D4E829B7E4("DES_ProTree_start");
	unk_0x5183B5D4E829B7E4("DES_ProTree_start_lod");
	unk_0x5183B5D4E829B7E4("prologue04_cover");
	unk_0x5183B5D4E829B7E4("prologue03_grv_fun");
	unk_0x66EC947D9DEDE5B3("prologue03_grv_dug");
	unk_0x66EC947D9DEDE5B3("prologue_grv_torch");
	unk_0x90103EE52BA0AF81("prologue", 1);
	unk_0xF243B7A14FCFD0F4(joaat("csb_prolsec"));
	while (!unk_0xD6513D668481290A(joaat("csb_prolsec")))
	{
		SYSTEM::WAIT(0);
	}
	unk_0xBB339B629B6BBB2F(unk_0xB5CEFD608600A09F(), joaat("csb_prolsec"));
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), 5313.8f, -5207.2f, 83.5f, 1, false, 0, 1);
		unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), 169.2f);
	}
	unk_0x43F06392C4EF25E0(false);
	unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 0);
	unk_0x1732A8A5D2D39430(5312.996f, -5208.671f, 83.90526f, 10f, 0);
	iVar0 = unk_0x105601648511CC64() + 10000;
	while (!unk_0xF220370B0C08EC20() && unk_0x105601648511CC64() < iVar0)
	{
		SYSTEM::WAIT(0);
	}
	unk_0x126E6B6CBE0FEACC();
	unk_0xD6423910AAD8A379("MISSION_FAILED_SCENE");
	unk_0x829FA4611BD56B44(2500);
	unk_0x13D5880CBA449AA9();
	unk_0x900CF084251DED26("NG_INSTALL", 0);
	while (true)
	{
		if (!unk_0x726D9204B160D23E())
		{
			unk_0x829FA4611BD56B44(0);
		}
		unk_0xF7EBEC3FF57AEC65(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, 0);
		unk_0xF7EBEC3FF57AEC65(0.5f, 0.5f, 0.8f, 0.8f, 20, 20, 20, 255, 0);
		unk_0xB8F3C51875F7BEA3(0.5f, 0.5f);
		unk_0x8F62A12BC2768BE8(1);
		if (SYSTEM::TIMERA() > 10000 && unk_0xFA9040D29FE330BD(0))
		{
			iLocal_0 = unk_0x491B2241281A03B7(0, 5);
			if ((iLocal_0 - iLocal_1) != 0)
			{
				iLocal_1 = iLocal_0;
				SYSTEM::SETTIMERA(0);
			}
		}
		else
		{
			switch (iLocal_0)
			{
				case 0:
					func_1(0.5f, 0.4f, "NG_INST_TT_1", 0);
					break;
				
				case 1:
					func_1(0.5f, 0.4f, "NG_INST_TT_2", 0);
					break;
				
				case 2:
					func_1(0.5f, 0.4f, "NG_INST_TT_3", 0);
					break;
				
				case 3:
					func_1(0.5f, 0.4f, "NG_INST_TT_4", 0);
					break;
				
				case 4:
					func_1(0.5f, 0.4f, "NG_INST_TT_5", 0);
					break;
				}
		}
		unk_0x2D07FA763DF3EB00();
		if (unk_0x7D628BE0C6382087())
		{
			unk_0xDE0071984A2B05B5();
			return;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(float fParam0, float fParam1, char* sParam2, int iParam3)//Position - 0x2F8
{
	unk_0x8B371195127AACF2(sParam2);
	unk_0x3A8B9C7B1C825123(fParam0, fParam1, iParam3);
}

