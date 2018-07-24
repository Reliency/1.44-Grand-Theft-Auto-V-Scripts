#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iScriptParam_0 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	if (unk_0xE8A79675302ED812(2))
	{
		func_1();
	}
	if (unk_0x724D816EA203A79E(iScriptParam_3))
	{
		unk_0x346478B12F69D4E3(iScriptParam_3, true);
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (unk_0x724D816EA203A79E(iScriptParam_3))
		{
			if (unk_0x08B699D523A3F9CB(iScriptParam_3) && unk_0xB731B8C5BCE89836(joaat("michael2")) > 0)
			{
				switch (iLocal_2)
				{
					case 0:
						if (unk_0xA184E93CD7E0E9AA(iScriptParam_3))
						{
							unk_0x522053D86D6E1C7A("MISSMIC2");
							if (unk_0xF9E082857622D91E("MISSMIC2"))
							{
								unk_0x1F000DD52A4C4208(iScriptParam_3, "beefsplitter_loop", "MISSMIC2", 1f, true, 0, 0, 0, 0);
								iLocal_2 = 1;
							}
						}
						break;
					
					case 1:
						break;
					
					case 2:
						break;
				}
			}
			else
			{
				func_1();
			}
		}
		else
		{
			func_1();
		}
	}
}

void func_1()//Position - 0xAF
{
	func_2("ob_abattoir Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0x4EA570997E107F35("MISSMIC2");
	unk_0x95E4B6F3ED223F5A();
}

void func_2(char* sParam0)//Position - 0xC8
{
	func_3(sParam0);
}

void func_3(char* sParam0)//Position - 0xD6
{
	if (unk_0x3362CDE8460ED38B(sParam0, sParam0))
	{
	}
}

