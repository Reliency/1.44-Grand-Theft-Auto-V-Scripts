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
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	float fLocal_41 = 0f;
	float fLocal_42 = 0f;
	vector3 vLocal_43 = { 0f, 0f, 0f };
	vector3 vLocal_44 = { 0f, 0f, 0f };
	vector3 vLocal_45 = { 0f, 0f, 0f };
	float fLocal_46 = 0f;
	vector3 vLocal_47 = { 0f, 0f, 0f };
	float fLocal_48 = 0f;
	vector3 vLocal_49 = { 0f, 0f, 0f };
	float fLocal_50 = 0f;
	float fLocal_51 = 0f;
	float fLocal_52 = 0f;
	var uLocal_53 = 16;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
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
	sLocal_18 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	fLocal_41 = 50f;
	fLocal_42 = 2500f;
	vLocal_43 = { 409.1539f, -1626.677f, 28.2928f };
	vLocal_45 = { 409.2747f, -1623.022f, 28.29278f };
	fLocal_46 = 202.6928f;
	vLocal_47 = { 415.6071f, -1647.604f, 28.2928f };
	fLocal_48 = 85.7173f;
	if (unk_0xE8A79675302ED812(18))
	{
		func_26();
	}
	if (unk_0xB731B8C5BCE89836(joaat("ambient_tonyacall5")) > 1)
	{
		unk_0x95E4B6F3ED223F5A();
	}
	while (true)
	{
		unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F());
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			vLocal_44 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
		}
		if (SYSTEM::VDIST2(vLocal_44, vLocal_43) > fLocal_42)
		{
			func_26();
		}
		switch (iLocal_37)
		{
			case 0:
				if (func_22())
				{
					iLocal_37 = 1;
				}
				break;
			
			case 1:
				unk_0x522053D86D6E1C7A("amb@world_human_stand_mobile@female@standing@call@enter");
				unk_0x522053D86D6E1C7A("amb@world_human_stand_mobile@female@standing@call@base");
				unk_0x522053D86D6E1C7A("amb@world_human_stand_mobile@female@standing@call@exit");
				unk_0xF243B7A14FCFD0F4(joaat("prop_phone_ing"));
				if (((unk_0xD6513D668481290A(joaat("prop_phone_ing")) && unk_0xF9E082857622D91E("amb@world_human_stand_mobile@female@standing@call@enter")) && unk_0xF9E082857622D91E("amb@world_human_stand_mobile@female@standing@call@base")) && unk_0xF9E082857622D91E("amb@world_human_stand_mobile@female@standing@call@exit"))
				{
					iLocal_37 = 2;
				}
				break;
			
			case 2:
				if (func_1())
				{
					iLocal_37 = 3;
				}
				break;
			
			case 3:
				func_26();
				break;
		}
		SYSTEM::WAIT(0);
	}
}

int func_1()//Position - 0x1AC
{
	vector3 vVar0;
	vector3 vVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		vVar0 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
	}
	if (!unk_0x1D403DFADBC2DE3C(iLocal_38, 0))
	{
		vVar1 = { unk_0x541C2AEF053615BC(iLocal_38, 1) };
	}
	else
	{
		vVar1 = { 408.5002f, -1624.583f, 29.2928f };
	}
	if ((SYSTEM::VDIST2(vVar0, vVar1) > 10000f || unk_0x1D403DFADBC2DE3C(iLocal_38, 0)) || func_21())
	{
		return 1;
	}
	switch (iLocal_40)
	{
		case 0:
			if (unk_0x724D816EA203A79E(iLocal_38) && !unk_0x1D403DFADBC2DE3C(iLocal_38, 0))
			{
				if (unk_0x4DBCE270B354E123(iLocal_38, vLocal_49, 1f, 1f, 1f, 0, 1, 0))
				{
					unk_0x02DAF06EA4F08219(&uVar3);
					unk_0xC5A6DFE2B8987B17(&uVar3);
					unk_0xC0FDCDB0DF739C50(0, fLocal_50, 0);
					unk_0xE896C0AD02364F2A(0, "amb@world_human_stand_mobile@female@standing@call@enter", "enter", 4f, -4f, -1, 0, 0, 0, 0, 0);
					unk_0xE896C0AD02364F2A(0, "amb@world_human_stand_mobile@female@standing@call@base", "base", 4f, -4f, -1, 1, 0, 0, 0, 0);
					unk_0x535008C596714F9E(uVar3);
					unk_0xA8E6405305C0D7DF(iLocal_38, uVar3);
					unk_0x02DAF06EA4F08219(&uVar3);
					iLocal_40 = 1;
				}
			}
			break;
		
		case 1:
			if (unk_0x724D816EA203A79E(iLocal_38) && !unk_0x1D403DFADBC2DE3C(iLocal_38, 0))
			{
				if (unk_0xD62938026B30481A(iLocal_38) == 1)
				{
					if (!unk_0x724D816EA203A79E(iLocal_39))
					{
						if (unk_0x96044E39418AAF17(iLocal_38, "amb@world_human_stand_mobile@female@standing@call@enter", "enter", 3))
						{
							fVar4 = unk_0x4A3B2CF8BADDD74E(iLocal_38, "amb@world_human_stand_mobile@female@standing@call@enter", "enter");
							if (fVar4 >= 0.157f)
							{
								iLocal_39 = unk_0xB6896943DA475493(joaat("prop_phone_ing"), 1f, 1f, 1f, true, true, 0);
								unk_0x5DBE04849460E608(iLocal_39, iLocal_38, unk_0xFA18E720A39243D0(iLocal_38, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
							}
						}
					}
				}
				else if (unk_0xD62938026B30481A(iLocal_38) == 2)
				{
					iVar2 = (unk_0x491B2241281A03B7(0, 65535) % 2);
					if (iVar2 == 0)
					{
						if (func_4(&uLocal_53, "TOWAUD", "TONYA_CALL5", 8, 0, 0, 0))
						{
							iLocal_40 = 2;
						}
					}
					else if (func_4(&uLocal_53, "TOWAUD", "TONYA_CALL6", 8, 0, 0, 0))
					{
						iLocal_40 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0x1D403DFADBC2DE3C(iLocal_38, 0))
			{
				if (!func_3())
				{
					unk_0x02DAF06EA4F08219(&uVar3);
					unk_0xC5A6DFE2B8987B17(&uVar3);
					unk_0xE896C0AD02364F2A(0, "amb@world_human_stand_mobile@female@standing@call@exit", "exit", 4f, -4f, -1, 0, 0, 0, 0, 0);
					unk_0xA3A7138EAD2268A0(0, "WORLD_HUMAN_SMOKING", -1, 1);
					unk_0x535008C596714F9E(uVar3);
					unk_0xA8E6405305C0D7DF(iLocal_38, uVar3);
					unk_0x02DAF06EA4F08219(&uVar3);
					iLocal_40 = 3;
				}
			}
			break;
		
		case 3:
			func_2();
			if (SYSTEM::VDIST2(vVar0, vVar1) < 25f)
			{
				if (unk_0x3D875C2512206692(0) != 4)
				{
					if (func_4(&uLocal_53, "TOWAUD", "TOW_MESS3", 8, 0, 0, 0))
					{
						SYSTEM::SETTIMERA(0);
						iLocal_40 = 4;
					}
				}
			}
			break;
		
		case 4:
			func_2();
			if (SYSTEM::TIMERA() > 10000)
			{
				iLocal_40 = 3;
			}
			break;
	}
	return 0;
}

void func_2()//Position - 0x456
{
	if (unk_0x724D816EA203A79E(iLocal_38) && !unk_0x1D403DFADBC2DE3C(iLocal_38, 0))
	{
		if (unk_0xD62938026B30481A(iLocal_38) == 1)
		{
			if (unk_0x724D816EA203A79E(iLocal_39))
			{
				unk_0xA35241BCE4C1A24B(&iLocal_39);
				unk_0x56F2E1B5599188FA(iLocal_38, unk_0xBC25C936A095B5BA(), -1, 0, 2);
			}
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_38) && !unk_0x1D403DFADBC2DE3C(iLocal_38, 0))
	{
		if (unk_0x724D816EA203A79E(iLocal_39))
		{
			if (unk_0xF4FCC3C1048FF2AB(iLocal_38, 993674639) == 1)
			{
				unk_0xA35241BCE4C1A24B(&iLocal_39);
			}
		}
	}
}

int func_3()//Position - 0x4CE
{
	if (Global_3DB8 != 0 || unk_0xE6711F601F11B66B())
	{
		return 1;
	}
	return 0;
}

bool func_4(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x4F0
{
	func_20(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_3DBF = 0;
	Global_3DC1 = 0;
	Global_3DC6 = 0;
	Global_4197 = 0;
	Global_4199 = 0;
	Global_419D = 0;
	Global_280001 = 0;
	return func_5(sParam2, iParam3, 0);
}

int func_5(char* sParam0, int iParam1, bool bParam2)//Position - 0x53E
{
	Global_3DB9 = 0;
	if (Global_3DB8 == 0 || Global_3DBA == 2)
	{
		if (Global_3DB8 != 0)
		{
			if (iParam1 > Global_3DBA)
			{
				if (Global_3DBF == 0)
				{
					unk_0x1E08809A5041F85B(false);
					Global_389D.f_1 = 3;
					Global_3DB8 = 0;
					Global_3DB9 = 1;
					Global_3DED = 0;
					Global_3DB4 = 0;
					Global_3DB5 = 0;
					Global_3DC3 = 0;
					Global_3DC2 = 0;
					Global_389C = 0;
				}
				else
				{
					func_19();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xE6711F601F11B66B())
		{
			return 0;
		}
		if (func_18(8, -1))
		{
			return 0;
		}
		Global_3E04 = { Global_3DFE };
		func_17();
		Global_3AF1 = { Global_3B96 };
		Global_3DBE = Global_3DBF;
		Global_3DC5 = Global_3DC6;
		Global_280002 = Global_280001;
		Global_3DC7 = { Global_3DD7 };
		Global_3DC0 = Global_3DC1;
		Global_4196 = Global_4197;
		Global_419E = { Global_41A4 };
		Global_4198 = Global_4199;
		Global_419A = Global_419B;
		Global_419C = Global_419D;
		Global_3C3B.f_172 = Global_4195;
		Global_3C3B.f_170 = Global_4193;
		Global_3C3B.f_171 = Global_4194;
		Global_3DB4 = Global_3DB5;
		if (Global_3DBE)
		{
			unk_0x7CB6FD92BE491AD9(&Global_93B, 20);
			unk_0x7CB6FD92BE491AD9(&Global_93C, 17);
			unk_0x7CB6FD92BE491AD9(&Global_93D, 0);
			if (bParam2)
			{
				func_10();
				if (Global_C60[Global_389D /*2811*/][0 /*281*/].f_103 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_389D.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_387B == 1)
			{
				return 0;
			}
			if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
			{
				if (unk_0xABB2AFD7539464EA(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (func_9())
				{
					return 0;
				}
				if (unk_0x7199482D96955B9E(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (unk_0x01666D754C368931(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (unk_0xE959459C9FB1C42E(unk_0xBC25C936A095B5BA(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_11542)
				{
					if (unk_0x149E9368A11035DE(unk_0xBC25C936A095B5BA()))
					{
						return 0;
					}
					if (unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F()))
					{
						return 0;
					}
					if (unk_0x042228744678C7D4(unk_0xBC25C936A095B5BA()))
					{
						return 0;
					}
					if (unk_0x36210078ECC9DC40(unk_0xB5CEFD608600A09F()))
					{
						return 0;
					}
				}
			}
			if (func_8())
			{
				return 0;
			}
			else
			{
				switch (Global_389D.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (unk_0xFA30DFD0084E92FE(Global_93B, 9))
				{
					return 0;
				}
			}
			func_7();
			Global_3DC2 = bParam2;
		}
		Global_3DBA = iParam1;
		StringCopy(&Global_3C3B, sParam0, 24);
		Global_394A = 0;
		func_6();
		return 1;
	}
	if (Global_3DB8 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_3DBA || iParam1 == Global_3DBA)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_19();
	}
	return 0;
}

void func_6()//Position - 0x80A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_394C[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x1E08809A5041F85B(false);
	Global_3DB8 = 1;
}

void func_7()//Position - 0x83B
{
	Global_3DED = Global_3DEC;
	Global_3DE7 = Global_3DE8;
	Global_3E16 = { Global_3E0A };
	Global_3E1C = { Global_3E10 };
	Global_3DEF = Global_3DEE;
	Global_3E34 = { Global_3E22 };
	Global_3E3A = { Global_3E28 };
	Global_3E40 = { Global_3E2E };
	Global_3E46 = { Global_3E4C };
	Global_68E = Global_68F;
	Global_690 = Global_691;
	Global_3DC3 = Global_3DC4;
	Global_3DC5 = Global_3DC6;
	Global_3DC7 = { Global_3DD7 };
	Global_3DBC = Global_3DBD;
	Global_41B0 = 0;
	Global_3DE9 = 0;
	Global_3DEA = 0;
	unk_0x7CB6FD92BE491AD9(&Global_93C, 16);
}

int func_8()//Position - 0x8D0
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_9()//Position - 0x8F7
{
	int iVar0;
	int iVar1;
	
	if (Global_11542)
	{
		iVar0 = 0;
		unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &iVar1, 1);
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xCDE05E3688DE990D() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0xA0747FCBCF1D1424(unk_0xBC25C936A095B5BA(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_10()//Position - 0x990
{
	if (func_16(14))
	{
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_19B04.f_6D75[0 /*29*/])
			{
				Global_389D = 0;
			}
			else if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_19B04.f_6D75[1 /*29*/])
			{
				Global_389D = 1;
			}
			else if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_19B04.f_6D75[2 /*29*/])
			{
				Global_389D = 2;
			}
			else
			{
				Global_389D = 0;
			}
		}
	}
	else
	{
		Global_389D = func_11();
		if (Global_389D == 145)
		{
			Global_389D = 3;
		}
		if (Global_11542)
		{
			Global_389D = 3;
		}
		if (Global_389D > 3)
		{
			Global_389D = 3;
		}
	}
}

var func_11()//Position - 0xA32
{
	func_12();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_12()//Position - 0xA4B
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_15(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_14(unk_0xBC25C936A095B5BA());
			if (func_13(iVar0) && (!func_16(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_13(Global_19B04.f_932.f_21B.f_10CD))
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

bool func_13(int iParam0)//Position - 0xB48
{
	return iParam0 < 3;
}

int func_14(int iParam0)//Position - 0xB54
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_15(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_15(int iParam0)//Position - 0xB91
{
	if (func_13(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_16(int iParam0)//Position - 0xBBB
{
	return Global_8C41 == iParam0;
}

void func_17()//Position - 0xBC9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_3AF1[iVar0 /*10*/] = 0;
		StringCopy(&(Global_3AF1[iVar0 /*10*/].f_1), "", 24);
		Global_3AF1[iVar0 /*10*/].f_7 = 0;
		Global_3AF1[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_3AF1.f_A1 = -99;
	Global_3AF1.f_A2 = { 0f, 0f, 0f };
}

bool func_18(int iParam0, int iParam1)//Position - 0xC20
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_14CC81.f_CB[iParam1];
			}
			break;
	}
	return unk_0xFA30DFD0084E92FE(Global_14CC81.f_418, iParam0);
}

void func_19()//Position - 0xC5B
{
	unk_0x5C7DC611411E2CF9();
	Global_41AB = 0;
	if ((unk_0x58E7DDFF8D17A82A() || Global_389D.f_1 == 9) || Global_389C == 1)
	{
		unk_0x1E08809A5041F85B(false);
		Global_3DB8 = 6;
		Global_389D.f_1 = 3;
		return;
	}
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x1E08809A5041F85B(true);
		Global_3DB8 = 6;
		return;
	}
}

void func_20(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0xCB2
{
	Global_3B96 = { *uParam0 };
	Global_68F = iParam1;
	StringCopy(&Global_3DFE, sParam2, 24);
	Global_4195 = uParam5;
	if (iParam3 == 0)
	{
		Global_4193 = 1;
		Global_4191 = 0;
	}
	else
	{
		Global_4193 = 0;
		Global_4191 = 1;
	}
	if (iParam4 == 0)
	{
		Global_4194 = 1;
		Global_4192 = 0;
	}
	else
	{
		Global_4194 = 0;
		Global_4192 = 1;
	}
}

int func_21()//Position - 0xD08
{
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0) && !unk_0x1D403DFADBC2DE3C(iLocal_38, 0))
	{
		if (unk_0xE921F8171F0733B3(unk_0xBC25C936A095B5BA(), iLocal_38) || unk_0x32E373675659FDB0(unk_0xBC25C936A095B5BA()))
		{
			if (unk_0x724D816EA203A79E(iLocal_39))
			{
				unk_0x17175087F2DB6AC8(iLocal_39, 1, 1);
			}
			unk_0x1E08809A5041F85B(false);
			if (unk_0xF4FCC3C1048FF2AB(iLocal_38, 1805844857) != 1)
			{
				unk_0x22321800954A532E(iLocal_38, 1);
				unk_0x5558ED6D4A2DEC93(iLocal_38, unk_0xBC25C936A095B5BA(), 1000f, -1, 0, 0);
				return 1;
			}
		}
	}
	return 0;
}

int func_22()//Position - 0xD89
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		vVar0 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
	}
	unk_0x50AE3E919DC9BC67(vVar0, fLocal_41, 1, 1, &iVar1, 0, 1, -1);
	if (unk_0x724D816EA203A79E(iVar1) && !unk_0x1D403DFADBC2DE3C(iVar1, 0))
	{
		iVar2 = unk_0x6F79ECA8C83E4357(iVar1);
		if (iVar2 == joaat("ig_tonya"))
		{
			iLocal_38 = iVar1;
			unk_0x77815D3407C6700D(iLocal_38, 1, 0);
			unk_0x8EF3D958386640FE(iLocal_38, 0);
			unk_0xB105531EDD3DE51B(iLocal_38, false);
			unk_0xF85FAED5BA864282(iLocal_38, "TONYA");
			unk_0x4106FAF8AA1D69D5(iLocal_38, 1862763509);
			func_25(&uLocal_53, 3, iLocal_38, "TONYA", 1, 1);
			func_24();
			if (!func_23(vLocal_49))
			{
				if (unk_0xF4FCC3C1048FF2AB(iLocal_38, 713668775) != 1)
				{
					unk_0x346129B364057FF6(iLocal_38, vLocal_49, 1f, -1, 0.25f, 0, fLocal_50);
					unk_0x22321800954A532E(iLocal_38, 1);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_23(vector3 vParam0)//Position - 0xE60
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_24()//Position - 0xE8A
{
	vector3 vVar0;
	
	if (unk_0x724D816EA203A79E(iLocal_38) && !unk_0x1D403DFADBC2DE3C(iLocal_38, 0))
	{
		vVar0 = { unk_0x541C2AEF053615BC(iLocal_38, 1) };
		if (func_23(vLocal_49))
		{
			fLocal_51 = SYSTEM::VDIST(vVar0, vLocal_45);
			fLocal_52 = SYSTEM::VDIST(vVar0, vLocal_47);
			if (fLocal_51 < fLocal_52)
			{
				vLocal_49 = { vLocal_45 };
				fLocal_50 = fLocal_46;
			}
			else
			{
				vLocal_49 = { vLocal_47 };
				fLocal_50 = fLocal_48;
			}
			if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
			{
				if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 407.4285f, -1626.572f, 27.29278f, 412.8245f, -1620.167f, 33.29278f, 6f, 0, 1, 0))
				{
					vLocal_49 = { vLocal_47 };
					fLocal_50 = fLocal_48;
				}
			}
		}
	}
}

void func_25(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0xF43
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_11542)
	{
		if (!unk_0x36CEFBE9B745A58D(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x8941EA87BBF38C6F(iParam2, 0);
			}
			else
			{
				unk_0x8941EA87BBF38C6F(iParam2, 1);
			}
		}
		if (!unk_0x36CEFBE9B745A58D(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x7C7F4D01B6DB297B(iParam2, 0);
			}
			else
			{
				unk_0x7C7F4D01B6DB297B(iParam2, 1);
			}
		}
	}
}

void func_26()//Position - 0xFDE
{
	unk_0x4EA570997E107F35("amb@world_human_stand_mobile@female@standing@call@enter");
	unk_0x4EA570997E107F35("amb@world_human_stand_mobile@female@standing@call@base");
	unk_0x4EA570997E107F35("amb@world_human_stand_mobile@female@standing@call@exit");
	unk_0x2CA123B0622F495C(joaat("prop_phone_ing"));
	if (unk_0x724D816EA203A79E(iLocal_38))
	{
		if (unk_0x41A5D6415E2CC10E(iLocal_38))
		{
			unk_0xF845620A03C7425B(&iLocal_38);
		}
		else
		{
			unk_0x02537C8C1BEEB477(&iLocal_38);
		}
	}
	unk_0x95E4B6F3ED223F5A();
}

