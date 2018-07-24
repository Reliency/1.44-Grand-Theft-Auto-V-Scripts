#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	vector3 vLocal_4 = { 0f, 0f, 0f };
	vector3 vLocal_5 = { 0f, 0f, 0f };
	int iLocal_6 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	if (unk_0xE8A79675302ED812(2))
	{
		func_4();
	}
	if (unk_0x724D816EA203A79E(iScriptParam_6))
	{
		unk_0x346478B12F69D4E3(iScriptParam_6, true);
		vLocal_4 = { unk_0x541C2AEF053615BC(iScriptParam_6, true) };
		vLocal_5 = { unk_0xD7490CDEF40F3DA2(iScriptParam_6, 2) };
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (unk_0x724D816EA203A79E(iScriptParam_6))
		{
			if (unk_0x08B699D523A3F9CB(iScriptParam_6))
			{
				switch (iLocal_2)
				{
					case 0:
						if (unk_0xA184E93CD7E0E9AA(iScriptParam_6))
						{
							unk_0xF243B7A14FCFD0F4(joaat("p_abat_roller_1_col"));
							if (unk_0xD6513D668481290A(joaat("p_abat_roller_1_col")))
							{
								if (!func_3(vLocal_4, 0f, 0f, 0f, 0))
								{
									iLocal_3 = unk_0xB6896943DA475493(joaat("p_abat_roller_1_col"), vLocal_4, true, true, false);
									unk_0x784C605D172817C8(iLocal_3, vLocal_5, 2, 1);
									iLocal_2 = 1;
								}
							}
						}
						break;
					
					case 1:
						if (unk_0xA184E93CD7E0E9AA(iScriptParam_6))
						{
							if (unk_0xB731B8C5BCE89836(joaat("michael2")) > 0)
							{
								unk_0x522053D86D6E1C7A("map_objects");
								if (unk_0xF9E082857622D91E("map_objects"))
								{
									iLocal_2 = 2;
								}
							}
						}
						break;
					
					case 2:
						if (unk_0xA184E93CD7E0E9AA(iScriptParam_6))
						{
							if (unk_0xB731B8C5BCE89836(joaat("michael2")) > 0)
							{
								if (Global_15DBB)
								{
									if (unk_0xF9E082857622D91E("map_objects"))
									{
										unk_0x1F000DD52A4C4208(iScriptParam_6, "P_Abat_roller_1_open", "map_objects", 1f, false, 1, 0, 0, 0);
										iLocal_2 = 3;
									}
								}
							}
						}
						break;
					
					case 3:
						fVar3 = 0.35f;
						vVar0 = { vLocal_4 + Vector(3.45f, 0f, 0f) };
						if (unk_0x724D816EA203A79E(iLocal_3))
						{
							vVar1 = { unk_0x541C2AEF053615BC(iLocal_3, true) };
							if (!func_2(vVar1, vVar0, 0.1f, 0))
							{
								vVar2 = { vVar0 - vVar1 };
								unk_0x641B19E156645A92(iLocal_3, vVar1 + func_1(vVar2) * FtoV(unk_0x11F9F9006143871A()) * Vector(fVar3, fVar3, fVar3), 1, false, 0, 1);
							}
							else
							{
								Global_15DBC = 1;
								iLocal_2 = 4;
							}
						}
						break;
					
					case 4:
						break;
				}
			}
			else
			{
				func_4();
			}
		}
		else
		{
			func_4();
		}
	}
}

Vector3 func_1(vector3 vParam0)//Position - 0x1C6
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.y = 0f;
		vParam0.z = 0f;
	}
	return vParam0;
}

int func_2(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0x205
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (unk_0x357058E632979E65((vParam0.x - vParam1.x)) <= fParam2)
		{
			if (unk_0x357058E632979E65((vParam0.y - vParam1.y)) <= fParam2)
			{
				if (unk_0x357058E632979E65((vParam0.z - vParam1.z)) <= fParam2)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x357058E632979E65((vParam0.x - vParam1.x)) <= fParam2)
	{
		if (unk_0x357058E632979E65((vParam0.y - vParam1.y)) <= fParam2)
		{
			return 1;
		}
	}
	return 0;
}

bool func_3(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x280
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

void func_4()//Position - 0x2C7
{
	if (unk_0x724D816EA203A79E(iLocal_3))
	{
		unk_0xA35241BCE4C1A24B(&iLocal_3);
	}
	unk_0x2CA123B0622F495C(joaat("p_abat_roller_1_col"));
	func_5("ob_abatdoor Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0x95E4B6F3ED223F5A();
}

void func_5(char* sParam0)//Position - 0x2F2
{
	func_6(sParam0);
}

void func_6(char* sParam0)//Position - 0x300
{
	if (unk_0x3362CDE8460ED38B(sParam0, sParam0))
	{
	}
}

