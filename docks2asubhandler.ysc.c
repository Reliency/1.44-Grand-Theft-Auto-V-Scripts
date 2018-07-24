#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void __EntryFunction__()//Position - 0x0
{
	float fVar0;
	
	if (unk_0xE8A79675302ED812(19))
	{
		func_1();
	}
	iLocal_0 = ScriptParam_3;
	iLocal_1 = ScriptParam_3.f_1;
	while (!unk_0xFA30DFD0084E92FE(iLocal_2, 1))
	{
		if (!unk_0xFA30DFD0084E92FE(iLocal_2, 0))
		{
			if (unk_0x724D816EA203A79E(iLocal_0))
			{
				if (unk_0xE59B7F5A03335350(iLocal_0, 0))
				{
					unk_0x77815D3407C6700D(iLocal_0, false, 1);
					unk_0x346478B12F69D4E3(iLocal_0, true);
					unk_0x06D93FD5E4D394CF(iLocal_0, true, true, true, true, true, 0, 0, 0);
					if (unk_0x724D816EA203A79E(iLocal_1))
					{
						unk_0x77815D3407C6700D(iLocal_1, false, 1);
						unk_0x346478B12F69D4E3(iLocal_1, true);
						unk_0x06D93FD5E4D394CF(iLocal_1, true, true, true, true, true, 0, 0, 0);
					}
					unk_0xF0059F27F7BB6680(&iLocal_2, 0);
				}
			}
		}
		else if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0xE59B7F5A03335350(iLocal_0, 0))
			{
				fVar0 = SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), unk_0x541C2AEF053615BC(iLocal_0, true));
				if (fVar0 > 90000f)
				{
					unk_0xF0059F27F7BB6680(&iLocal_2, 1);
				}
				else if (fVar0 > 40000f && !unk_0xD1DC4B08247A4317(iLocal_0))
				{
					unk_0xF0059F27F7BB6680(&iLocal_2, 1);
				}
			}
			else
			{
				unk_0xF0059F27F7BB6680(&iLocal_2, 1);
			}
		}
		SYSTEM::WAIT(0);
	}
	func_1();
}

void func_1()//Position - 0x10B
{
	unk_0x1E7A09C1710FB071(&iLocal_0);
	unk_0x91BCA7FA73FFCDF2(&iLocal_1);
	unk_0x95E4B6F3ED223F5A();
}

