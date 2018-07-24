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
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
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
	var uLocal_60 = 0;
	var uLocal_61 = 10;
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
	var uLocal_72 = 2;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 8;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 8;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	float fLocal_94 = 0f;
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
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	var uLocal_110[130] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_111[130] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	var uLocal_115[4] = { 0, 0, 0, 0 };
	var uLocal_116[4] = { 0, 0, 0, 0 };
	int iLocal_117[4] = { 0, 0, 0, 0 };
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	vector3 vLocal_127[130] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	int iLocal_138[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_139 = 0;
	int iLocal_140[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	struct<2> Local_143 = { -1, -1 } ;
	struct<730> Local_144 = { 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
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
	struct<534> Local_165 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32 } ;
	var uLocal_166 = -1;
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
	var uLocal_188 = -1082130432;
	var uLocal_189 = 3;
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
	var uLocal_205 = -1;
	var uLocal_206 = 0;
	var uLocal_207 = -1;
	var uLocal_208 = -1;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = -1082130432;
	var uLocal_231 = 3;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = -1;
	var uLocal_248 = 0;
	var uLocal_249 = -1;
	var uLocal_250 = -1;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = -1082130432;
	var uLocal_273 = 3;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = -1;
	var uLocal_290 = 0;
	var uLocal_291 = -1;
	var uLocal_292 = -1;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = -1082130432;
	var uLocal_315 = 3;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = -1;
	var uLocal_332 = 0;
	var uLocal_333 = -1;
	var uLocal_334 = -1;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = -1082130432;
	var uLocal_357 = 3;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = -1;
	var uLocal_374 = 0;
	var uLocal_375 = -1;
	var uLocal_376 = -1;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = -1082130432;
	var uLocal_399 = 3;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = -1;
	var uLocal_416 = 0;
	var uLocal_417 = -1;
	var uLocal_418 = -1;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = -1082130432;
	var uLocal_441 = 3;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = -1;
	var uLocal_458 = 0;
	var uLocal_459 = -1;
	var uLocal_460 = -1;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = -1082130432;
	var uLocal_483 = 3;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = -1;
	var uLocal_500 = 0;
	var uLocal_501 = -1;
	var uLocal_502 = -1;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = -1082130432;
	var uLocal_525 = 3;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = -1;
	var uLocal_542 = 0;
	var uLocal_543 = -1;
	var uLocal_544 = -1;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = -1082130432;
	var uLocal_567 = 3;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = -1;
	var uLocal_584 = 0;
	var uLocal_585 = -1;
	var uLocal_586 = -1;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = -1082130432;
	var uLocal_609 = 3;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = -1;
	var uLocal_626 = 0;
	var uLocal_627 = -1;
	var uLocal_628 = -1;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = -1082130432;
	var uLocal_651 = 3;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = -1;
	var uLocal_668 = 0;
	var uLocal_669 = -1;
	var uLocal_670 = -1;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = -1082130432;
	var uLocal_693 = 3;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = -1;
	var uLocal_710 = 0;
	var uLocal_711 = -1;
	var uLocal_712 = -1;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = -1082130432;
	var uLocal_735 = 3;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = -1;
	var uLocal_752 = 0;
	var uLocal_753 = -1;
	var uLocal_754 = -1;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = -1082130432;
	var uLocal_777 = 3;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = -1;
	var uLocal_794 = 0;
	var uLocal_795 = -1;
	var uLocal_796 = -1;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = -1082130432;
	var uLocal_819 = 3;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = -1;
	var uLocal_836 = 0;
	var uLocal_837 = -1;
	var uLocal_838 = -1;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = -1082130432;
	var uLocal_861 = 3;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = -1;
	var uLocal_878 = 0;
	var uLocal_879 = -1;
	var uLocal_880 = -1;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = -1082130432;
	var uLocal_903 = 3;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = -1;
	var uLocal_920 = 0;
	var uLocal_921 = -1;
	var uLocal_922 = -1;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = -1082130432;
	var uLocal_945 = 3;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = -1;
	var uLocal_962 = 0;
	var uLocal_963 = -1;
	var uLocal_964 = -1;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = -1082130432;
	var uLocal_987 = 3;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = -1;
	var uLocal_1004 = 0;
	var uLocal_1005 = -1;
	var uLocal_1006 = -1;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = -1082130432;
	var uLocal_1029 = 3;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = -1;
	var uLocal_1046 = 0;
	var uLocal_1047 = -1;
	var uLocal_1048 = -1;
	var uLocal_1049 = 0;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = -1082130432;
	var uLocal_1071 = 3;
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = -1;
	var uLocal_1088 = 0;
	var uLocal_1089 = -1;
	var uLocal_1090 = -1;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = -1082130432;
	var uLocal_1113 = 3;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = -1;
	var uLocal_1130 = 0;
	var uLocal_1131 = -1;
	var uLocal_1132 = -1;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = -1082130432;
	var uLocal_1155 = 3;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = -1;
	var uLocal_1172 = 0;
	var uLocal_1173 = -1;
	var uLocal_1174 = -1;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = -1082130432;
	var uLocal_1197 = 3;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = -1;
	var uLocal_1214 = 0;
	var uLocal_1215 = -1;
	var uLocal_1216 = -1;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	var uLocal_1221 = 0;
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = -1082130432;
	var uLocal_1239 = 3;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 0;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = -1;
	var uLocal_1256 = 0;
	var uLocal_1257 = -1;
	var uLocal_1258 = -1;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = -1082130432;
	var uLocal_1281 = 3;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	var uLocal_1297 = -1;
	var uLocal_1298 = 0;
	var uLocal_1299 = -1;
	var uLocal_1300 = -1;
	var uLocal_1301 = 0;
	var uLocal_1302 = 0;
	var uLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = -1082130432;
	var uLocal_1323 = 3;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
	var uLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = 0;
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = 0;
	var uLocal_1339 = -1;
	var uLocal_1340 = 0;
	var uLocal_1341 = -1;
	var uLocal_1342 = -1;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
	var uLocal_1363 = 0;
	var uLocal_1364 = -1082130432;
	var uLocal_1365 = 3;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = -1;
	var uLocal_1382 = 0;
	var uLocal_1383 = -1;
	var uLocal_1384 = -1;
	var uLocal_1385 = 0;
	var uLocal_1386 = 0;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = -1082130432;
	var uLocal_1407 = 3;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	var uLocal_1417 = 0;
	var uLocal_1418 = 0;
	var uLocal_1419 = 0;
	var uLocal_1420 = 0;
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	var uLocal_1423 = -1;
	var uLocal_1424 = 0;
	var uLocal_1425 = -1;
	var uLocal_1426 = -1;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	var uLocal_1437 = 0;
	var uLocal_1438 = 0;
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = -1082130432;
	var uLocal_1449 = 3;
	var uLocal_1450 = 0;
	var uLocal_1451 = 0;
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 0;
	var uLocal_1463 = 0;
	var uLocal_1464 = 0;
	var uLocal_1465 = -1;
	var uLocal_1466 = 0;
	var uLocal_1467 = -1;
	var uLocal_1468 = -1;
	var uLocal_1469 = 0;
	var uLocal_1470 = 0;
	var uLocal_1471 = 0;
	var uLocal_1472 = 0;
	var uLocal_1473 = 0;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = 0;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 0;
	var uLocal_1490 = -1082130432;
	var uLocal_1491 = 3;
	var uLocal_1492 = 0;
	var uLocal_1493 = 0;
	var uLocal_1494 = 0;
	var uLocal_1495 = 0;
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
	var uLocal_1499 = 0;
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = 0;
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
	var uLocal_1507 = -1;
	var uLocal_1508 = 0;
	var uLocal_1509 = -1;
	struct<12> Local_1510 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<5> Local_1511[32];
	struct<21> Local_1512 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_94 = ((0.05f + 0.275f) - 0.01f);
	if (unk_0x7AF0088ABFA713B6())
	{
		if (!func_686(ScriptParam_1512))
		{
			func_649();
		}
	}
	while (true)
	{
		func_648();
		if (func_641() || func_639())
		{
			func_649();
		}
		func_612();
		switch (func_611(unk_0x822BEC8031773562()))
		{
			case 0:
				if (func_610() == 1)
				{
					if (func_609())
					{
						func_608(unk_0x822BEC8031773562(), 1);
					}
				}
				break;
			
			case 1:
				if (func_610() == 1)
				{
					func_126();
					func_114();
				}
				else if (func_610() == 3)
				{
					func_608(unk_0x822BEC8031773562(), 3);
				}
				break;
			
			case 3:
				func_649();
				break;
		}
		if (unk_0x0DE6397A2CB3EF75())
		{
			switch (func_610())
			{
				case 0:
					if (func_97())
					{
						func_96(1);
					}
					break;
				
				case 1:
					if (Local_144.f_8 == 6)
					{
						func_96(2);
					}
					else
					{
						func_3();
					}
					break;
				
				case 2:
					if (func_1(&uLocal_125, 1000, 0))
					{
						func_96(3);
					}
					break;
				
				case 3:
					func_649();
					break;
				}
		}
	}
}

int func_1(var uParam0, int iParam1, bool bParam2)//Position - 0x195
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_2(uParam0, bParam2, 0);
	if (unk_0x7AF0088ABFA713B6() && !bParam2)
	{
		if (unk_0xC40EDFF7541407A8(unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xC40EDFF7541407A8(unk_0xCCA9497DA4595710(unk_0x105601648511CC64(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_2(var uParam0, bool bParam1, bool bParam2)//Position - 0x1F3
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x7AF0088ABFA713B6() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xED678C85A82F0AB9();
			}
			else
			{
				*uParam0 = unk_0x1C44CABA911F93F7();
			}
		}
		else
		{
			*uParam0 = unk_0x105601648511CC64();
		}
		uParam0->f_1 = 1;
	}
}

void func_3()//Position - 0x238
{
	if (func_33(2, 0, 0, 0, 0))
	{
		if (!unk_0xFA30DFD0084E92FE(Local_144.f_2, 2))
		{
			Local_144.f_1 = unk_0xED678C85A82F0AB9();
			unk_0xF0059F27F7BB6680(&(Local_144.f_2), 2);
		}
	}
	switch (Local_144.f_8)
	{
		case 0:
			if (func_32())
			{
				if (func_24())
				{
					func_23(1);
				}
			}
			else
			{
				func_23(1);
			}
			break;
		
		case 1:
			if (func_1(&(Local_144.f_29B), Global_40001.f_2907, 0) || unk_0xFA30DFD0084E92FE(Local_144.f_2, 2))
			{
				func_23(2);
			}
			func_24();
			break;
		
		case 2:
			Local_144.f_9 = unk_0xED678C85A82F0AB9();
			func_23(3);
			break;
		
		case 3:
			if ((func_22() || func_1(&(Local_144.f_295), Global_40001.f_2906, 0)) || unk_0xFA30DFD0084E92FE(Local_144.f_2, 2))
			{
				if (!unk_0xFA30DFD0084E92FE(Local_144.f_2, 1) && func_21())
				{
					func_20(&(Local_144.f_295), 0, 0);
					unk_0xF0059F27F7BB6680(&(Local_144.f_2), 1);
				}
				else
				{
					func_23(4);
					Local_144.f_1 = unk_0xED678C85A82F0AB9();
				}
			}
			func_8();
			iLocal_106++;
			if (iLocal_106 >= Local_144.f_2C5)
			{
				iLocal_106 = 0;
			}
			func_24();
			break;
		
		case 4:
			if (func_1(&(Local_144.f_297), 20000, 0) || func_5())
			{
				if (func_32())
				{
					func_20(&(Local_144.f_29D), 0, 0);
					func_23(5);
				}
				else
				{
					func_23(6);
				}
			}
			func_24();
			break;
		
		case 5:
			if (func_4())
			{
				func_23(6);
			}
			break;
		
		case 6:
			break;
	}
}

int func_4()//Position - 0x3E4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x8EA6CABD14F1B89A(Local_144.f_2D9[iVar0 /*2*/].f_1) && !unk_0x1D403DFADBC2DE3C(unk_0xD14280F674B4DBF4(Local_144.f_2D9[iVar0 /*2*/].f_1), 0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_5()//Position - 0x432
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x81C86888AEA2F49B())
	{
		if (unk_0x05086B70D2CFEA6F(unk_0xCFA8A401AAD7BB5A(iVar0)))
		{
			iVar1 = unk_0x4ED43B67B3F05E0F(unk_0xCFA8A401AAD7BB5A(iVar0));
			if (!func_6(iVar1))
			{
				if ((!unk_0xFA30DFD0084E92FE(Local_1511[iVar0 /*5*/].f_2, 0) || Local_1511[iVar0 /*5*/].f_3 != 6) || (unk_0xFA30DFD0084E92FE(Local_144.f_2, 0) && !unk_0xFA30DFD0084E92FE(Local_1511[iVar0 /*5*/].f_2, 1)))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

bool func_6(int iParam0)//Position - 0x4BE
{
	if (func_7(iParam0))
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_18C80F[iParam0 /*558*/].f_1, 8);
}

bool func_7(int iParam0)//Position - 0x4E4
{
	return unk_0xFA30DFD0084E92FE(Global_18C80F[iParam0 /*558*/].f_1, 2);
}

void func_8()//Position - 0x4FC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = 0;
	while (iVar2 < unk_0x81C86888AEA2F49B())
	{
		if (unk_0x05086B70D2CFEA6F(unk_0xCFA8A401AAD7BB5A(iVar2)))
		{
			unk_0xF0059F27F7BB6680(&iVar3, iVar2);
		}
		else
		{
			func_19(iVar2);
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < unk_0x81C86888AEA2F49B())
	{
		if (unk_0xFA30DFD0084E92FE(iVar3, iVar2))
		{
			if (func_18(iVar2))
			{
				iVar1++;
			}
			iVar0++;
			func_15(iVar2);
			func_9(iVar2);
			unk_0xF0059F27F7BB6680(&(Local_144.f_2A1), iVar2);
		}
		iVar2++;
	}
	if (iVar0 > Local_144.f_2D7)
	{
		Local_144.f_2D7 = iVar0;
	}
	else
	{
		Local_144.f_2D6 = (Local_144.f_2D7 - iVar0);
	}
	if (iVar1 > Local_144.f_2D8)
	{
		Local_144.f_2D8 = iVar1;
	}
}

void func_9(int iParam0)//Position - 0x5BC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Local_1511[iParam0 /*5*/].f_4;
	iVar2 = -2;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (Local_144.f_2A2[iVar1] == iParam0)
		{
			iVar1 = 32;
		}
		else if (iVar2 >= -1)
		{
			if (iVar2 >= 0)
			{
				func_14(&(Local_144.f_2A2[iVar1]), &iVar2);
			}
		}
		else if (Local_144.f_2A2[iVar1] < 0 || iVar0 > Local_1511[Local_144.f_2A2[iVar1] /*5*/].f_4)
		{
			iVar2 = Local_144.f_2A2[iVar1];
			if (iVar0 != 0)
			{
				func_10(Local_144.f_2A2[iVar1], iParam0, iVar1);
			}
			Local_144.f_2A2[iVar1] = iParam0;
			iVar3 = iVar1 + 1;
			while (iVar3 <= 31)
			{
				if (Local_144.f_2A2[iVar3] == iParam0)
				{
					Local_144.f_2A2[iVar3] = -1;
				}
				iVar3++;
			}
		}
		iVar1++;
	}
}

void func_10(var uParam0, int iParam1, int iParam2)//Position - 0x6A5
{
	struct<14> Var0;
	int iVar1;
	
	iVar1 = unk_0x4ED43B67B3F05E0F(unk_0xCFA8A401AAD7BB5A(iParam1));
	if (iParam2 == 0)
	{
		Var0.f_2 = -1595111884;
		Var0.f_A = iVar1;
		func_11(Var0, func_12(1));
	}
}

void func_11(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)//Position - 0x6DC
{
	Param0 = -471892217;
	Param0.f_1 = unk_0xB5CEFD608600A09F();
	if (!iParam13 == 0)
	{
		unk_0x38E776D9FA75679B(1, &Param0, 14, iParam13);
	}
}

int func_12(int iParam0)//Position - 0x709
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x81C86888AEA2F49B())
	{
		if (unk_0x05086B70D2CFEA6F(unk_0xCFA8A401AAD7BB5A(iVar1)))
		{
			iVar2 = unk_0x4ED43B67B3F05E0F(unk_0xCFA8A401AAD7BB5A(iVar1));
			if (func_13(iVar2, 0, 0))
			{
				if (iVar2 != unk_0xB5CEFD608600A09F() || iParam0)
				{
					unk_0xF0059F27F7BB6680(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_13(int iParam0, bool bParam1, bool bParam2)//Position - 0x766
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

void func_14(var uParam0, int iParam1)//Position - 0x7B0
{
	*uParam0 = (*uParam0 + *iParam1);
	*iParam1 = (*uParam0 - *iParam1);
	*uParam0 = (*uParam0 - *iParam1);
}

void func_15(int iParam0)//Position - 0x7D6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = unk_0x4ED43B67B3F05E0F(unk_0xCFA8A401AAD7BB5A(iParam0));
	iVar0 = iVar3;
	if (Global_267214.f_127A.f_26[iVar0] >= 0)
	{
		iVar4 = Global_267214.f_127A.f_26[iVar0];
		iVar1 = Global_267214.f_127A.f_5[iVar0];
		if (!unk_0xFA30DFD0084E92FE(Local_144.f_3[func_17(iVar4)], func_16(iVar4)))
		{
			if (unk_0xFA30DFD0084E92FE(Global_267214.f_127A[func_17(iVar4)], func_16(iVar4)))
			{
				if (func_1(&uLocal_123, 750, 0))
				{
					if (iVar1 != 0)
					{
						if (iVar1 < iVar2 || iVar2 == 0)
						{
							iVar2 = iVar1;
							Local_144.f_A[iVar4 /*5*/].f_3 = iParam0;
							Global_267214.f_127A.f_26[iVar0] = -1;
							unk_0xF0059F27F7BB6680(&(Local_144.f_3[func_17(iVar4)]), func_16(iVar4));
							Local_144.f_2C4 = (Local_144.f_2C4 - 1);
						}
					}
				}
			}
		}
	}
}

int func_16(int iParam0)//Position - 0x8BE
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_17(iParam0) * 31);
}

int func_17(int iParam0)//Position - 0x8EF
{
	if (iParam0 < 31)
	{
		return 0;
	}
	else if (iParam0 < 62)
	{
		return 1;
	}
	return (iParam0 / 31);
}

int func_18(int iParam0)//Position - 0x915
{
	if (iParam0 >= 0 && iParam0 < 32)
	{
		return Local_1511[iParam0 /*5*/].f_4 > 0;
	}
	return 0;
}

void func_19(int iParam0)//Position - 0x93D
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFA30DFD0084E92FE(Local_144.f_2A1, iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Local_144.f_2A2[iVar0] == iParam0)
			{
				Local_144.f_2A2[iVar0] = -1;
				iVar0 = 32;
			}
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < Local_144.f_2C5)
		{
			if (Local_144.f_A[iVar1 /*5*/].f_3 == iParam0)
			{
				Local_144.f_A[iVar1 /*5*/].f_3 = -1;
			}
			iVar1++;
		}
		unk_0x7CB6FD92BE491AD9(&(Local_144.f_2A1), iParam0);
	}
}

void func_20(var uParam0, bool bParam1, bool bParam2)//Position - 0x9C4
{
	if (unk_0x7AF0088ABFA713B6() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0xED678C85A82F0AB9();
		}
		else
		{
			*uParam0 = unk_0x1C44CABA911F93F7();
		}
	}
	else
	{
		*uParam0 = unk_0x105601648511CC64();
	}
	uParam0->f_1 = 1;
}

int func_21()//Position - 0xA01
{
	return 0;
}

int func_22()//Position - 0xA0A
{
	if (Local_144.f_2C4 > 0)
	{
		return 0;
	}
	if (func_1(&(Local_144.f_29F), 750, 0))
	{
		unk_0xF0059F27F7BB6680(&(Local_144.f_2), 0);
		return 1;
	}
	return 0;
}

void func_23(int iParam0)//Position - 0xA40
{
	Local_144.f_8 = iParam0;
}

int func_24()//Position - 0xA4F
{
	struct<2> Var0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	
	if (func_32())
	{
		Var0 = { Local_144.f_2D9[iLocal_108 /*2*/] };
		if (func_31(Var0))
		{
			if (!unk_0x7FFE36DB9042AF23(Var0.f_1))
			{
				if (func_30(iLocal_108, &vVar1, &fVar2))
				{
					Local_144.f_2C9[iLocal_108] = func_27(iLocal_108);
					if (unk_0xFA30DFD0084E92FE(Local_1511[Local_144.f_2C9[iLocal_108] /*5*/].f_1, iLocal_108))
					{
						if (func_26(&(Local_144.f_2D9[iLocal_108 /*2*/].f_1), Var0, vVar1, fVar2, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0))
						{
							unk_0xD421BC740C5340C3(unk_0x19D7F09C2FABDDA0(Local_144.f_2D9[iLocal_108 /*2*/].f_1), 1);
							unk_0x656194E145691D3E(unk_0x19D7F09C2FABDDA0(Local_144.f_2D9[iLocal_108 /*2*/].f_1), 1);
							unk_0x251D94F557BABE92(unk_0x19D7F09C2FABDDA0(Local_144.f_2D9[iLocal_108 /*2*/].f_1), 0);
							func_25(unk_0x19D7F09C2FABDDA0(Local_144.f_2D9[iLocal_108 /*2*/].f_1), 1);
							if (unk_0x46032D09AA009EC4("Not_Allow_As_Saved_Veh", 3))
							{
								unk_0x3F9FE9BB735B1604(unk_0x19D7F09C2FABDDA0(Local_144.f_2D9[iLocal_108 /*2*/].f_1), "Not_Allow_As_Saved_Veh", 1);
							}
							if (unk_0x46032D09AA009EC4("MPBitset", 3))
							{
								if (unk_0x3C03CFD5DD1E2D97(unk_0x19D7F09C2FABDDA0(Local_144.f_2D9[iLocal_108 /*2*/].f_1), "MPBitset"))
								{
									iVar3 = unk_0x67CFC62D543B19EF(unk_0x19D7F09C2FABDDA0(Local_144.f_2D9[iLocal_108 /*2*/].f_1), "MPBitset");
								}
								unk_0xF0059F27F7BB6680(&iVar3, 10);
								unk_0xF0059F27F7BB6680(&iVar3, 11);
								unk_0x3F9FE9BB735B1604(unk_0x19D7F09C2FABDDA0(Local_144.f_2D9[iLocal_108 /*2*/].f_1), "MPBitset", iVar3);
							}
							Local_144.f_2C9[iLocal_108] = -1;
						}
					}
				}
			}
			iLocal_108++;
			if (iLocal_108 >= 10)
			{
				iLocal_108 = 0;
				return 1;
			}
		}
		return 0;
	}
	return 1;
}

void func_25(int iParam0, bool bParam1)//Position - 0xBE4
{
	int iVar0;
	
	if (unk_0x46032D09AA009EC4("MPBitset", 3))
	{
		if (unk_0x3C03CFD5DD1E2D97(iParam0, "MPBitset"))
		{
			iVar0 = unk_0x67CFC62D543B19EF(iParam0, "MPBitset");
		}
		if (bParam1)
		{
			unk_0xF0059F27F7BB6680(&iVar0, 13);
		}
		else
		{
			unk_0x7CB6FD92BE491AD9(&iVar0, 13);
		}
		unk_0x3F9FE9BB735B1604(iParam0, "MPBitset", iVar0);
	}
}

int func_26(var uParam0, int iParam1, vector3 vParam2, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)//Position - 0xC32
{
	float fVar0;
	int iVar1;
	
	if (!unk_0x4A09C6BA3AFA4242(iParam1))
	{
		return 0;
	}
	if (!unk_0x424470694C82EFFA(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == -32878452)
	{
		fVar0 = 20f;
	}
	if (bParam9)
	{
		unk_0xEDAD35A0D81ED3FB(vParam2, fVar0, 0, 0, 0, 0, false, 0);
	}
	iVar1 = unk_0x61C05BF08A1E0EFE(iParam1, vParam2, fParam3, iParam5, iParam4, iParam12);
	if (unk_0x724D816EA203A79E(iVar1))
	{
		*uParam0 = unk_0xD3495809C4827891(iVar1);
		Global_267214.f_17E0 = iVar1;
		if (unk_0x7FFE36DB9042AF23(*uParam0))
		{
			if (bParam13)
			{
				unk_0x03C1DBD85D4F7482(iVar1, 1);
			}
			unk_0x656194E145691D3E(iVar1, iParam8);
			if (unk_0x270072584099CC42(iVar1))
			{
				if (bParam6)
				{
					unk_0xF2A50F5F6E7737D8(*uParam0, 1);
				}
				else
				{
					unk_0xF2A50F5F6E7737D8(*uParam0, 0);
				}
				if (bParam11)
				{
					unk_0xE106CB3E79DC85D6(*uParam0, unk_0xB5CEFD608600A09F(), 1);
				}
			}
			unk_0x8D8F52BBEE186D6D(iVar1, bParam7);
			unk_0x9E9094D4A850A6F4(iVar1, 1);
			if (bParam10)
			{
				unk_0x64B0385195B407FC(iVar1);
				unk_0x1E6686599BFBEC90(iVar1, 5, 5, 1f);
			}
			return 1;
		}
	}
	return 0;
}

int func_27(int iParam0)//Position - 0xD2C
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	var uVar5;
	int iVar6;
	
	fVar2 = 1000000f;
	if (func_30(iParam0, &vVar4, &uVar5))
	{
		iVar0 = 0;
		while (iVar0 <= (unk_0x81C86888AEA2F49B() - 1))
		{
			if (unk_0x05086B70D2CFEA6F(unk_0xCFA8A401AAD7BB5A(iVar0)))
			{
				iVar6 = unk_0x4ED43B67B3F05E0F(unk_0xCFA8A401AAD7BB5A(iVar0));
				if (func_13(iVar6, 1, 1))
				{
					fVar3 = func_28(func_29(iVar6), vVar4);
					if (fVar3 < fVar2)
					{
						fVar2 = fVar3;
						iVar1 = iVar0;
					}
				}
			}
			iVar0++;
		}
	}
	return iVar1;
}

float func_28(vector3 vParam0, vector3 vParam1)//Position - 0xDA5
{
	vParam0.z = 0f;
	vParam1.z = 0f;
	return SYSTEM::VDIST(vParam0, vParam1);
}

Vector3 func_29(int iParam0)//Position - 0xDC3
{
	return unk_0x541C2AEF053615BC(unk_0xA95CF30C72EB526E(iParam0), 0);
}

int func_30(int iParam0, var uParam1, var uParam2)//Position - 0xDD6
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1729.582f, -2943.77f, 12.9443f };
			*uParam2 = 300.078f;
			break;
		
		case 1:
			*uParam1 = { 677.2984f, 769.7758f, 204.6846f };
			*uParam2 = 82.8903f;
			break;
		
		case 2:
			*uParam1 = { 1073.972f, 3003.889f, 40.5508f };
			*uParam2 = 333.2717f;
			break;
		
		case 3:
			*uParam1 = { 1928.635f, 4702.327f, 40.1958f };
			*uParam2 = 327.9112f;
			break;
		
		case 4:
			*uParam1 = { 1278.65f, 6579.366f, 1.505f };
			*uParam2 = 84.26f;
			break;
		
		case 5:
			*uParam1 = { -1700.407f, -829.8932f, 8.2542f };
			*uParam2 = 70.1811f;
			break;
		
		case 6:
			*uParam1 = { -2733.589f, 2925.563f, 1.2152f };
			*uParam2 = 176.5378f;
			break;
		
		case 7:
			*uParam1 = { 1493.418f, -2442.99f, 64.9693f };
			*uParam2 = 52.9918f;
			break;
		
		case 8:
			*uParam1 = { 569.0449f, -772.5692f, 10.4088f };
			*uParam2 = 179.3501f;
			break;
		
		case 9:
			*uParam1 = { -905.1526f, 5548.172f, 5.5251f };
			*uParam2 = 95.8361f;
			break;
		
		default:
			return 0;
	}
	return 1;
}

bool func_31(int iParam0)//Position - 0xF52
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xF243B7A14FCFD0F4(iParam0);
	return unk_0xD6513D668481290A(iParam0);
}

bool func_32()//Position - 0xF70
{
	return Local_144.f_2C3;
}

int func_33(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)//Position - 0xF7E
{
	if (func_95(unk_0xB5CEFD608600A09F(), 0) || func_92(unk_0xB5CEFD608600A09F(), 0))
	{
		if (func_91(unk_0xB5CEFD608600A09F()) || func_89(unk_0xB5CEFD608600A09F()))
		{
			bParam2 = false;
		}
	}
	if (unk_0xB46BE0E79661103C() < iParam0)
	{
		if (bParam2)
		{
			func_41(sParam3, sParam4, 1);
		}
		if (func_40(26, -1))
		{
			func_37(26, -1);
		}
		return 1;
	}
	if (func_36(&(Global_180634.f_12)))
	{
		if (!func_1(&(Global_180634.f_12), 7500, 0))
		{
			return 0;
		}
		func_35(&(Global_180634.f_12));
	}
	if (func_34())
	{
		if (bParam2)
		{
			func_41(sParam3, sParam4, 0);
		}
		if (func_40(26, -1))
		{
			func_37(26, -1);
		}
		return 1;
	}
	if (iParam1 && unk_0x3D4274189EB7E01E() < iParam0)
	{
		if (bParam2)
		{
			func_41(sParam3, sParam4, 1);
		}
		if (func_40(26, -1))
		{
			func_37(26, -1);
		}
		return 1;
	}
	return 0;
}

bool func_34()//Position - 0x1075
{
	return unk_0xFA30DFD0084E92FE(Global_180634.f_1, 0);
}

void func_35(var uParam0)//Position - 0x1088
{
	uParam0->f_1 = 0;
}

bool func_36(var uParam0)//Position - 0x1095
{
	return uParam0->f_1;
}

void func_37(int iParam0, int iParam1)//Position - 0x10A1
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_39();
	}
	switch (iParam0)
	{
		case 0:
			unk_0xCFDC109752603B38(0, iParam1);
			break;
		
		default:
			iVar1 = func_38(iParam1);
			iVar0 = unk_0x2DC92D46FC48E795(iVar1);
			if (unk_0xFA30DFD0084E92FE(iVar0, iParam0))
			{
				unk_0x7CB6FD92BE491AD9(&iVar0, iParam0);
				unk_0xCFDC109752603B38(iVar0, iParam1);
			}
			break;
	}
}

int func_38(int iParam0)//Position - 0x10FD
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_39();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 909;
			break;
		
		case 1:
			iVar0 = 910;
			break;
		
		case 2:
			iVar0 = 911;
			break;
		
		case 3:
			iVar0 = 912;
			break;
		
		case 4:
			iVar0 = 913;
			break;
	}
	return iVar0;
}

int func_39()//Position - 0x1160
{
	return Global_1407E0;
}

bool func_40(int iParam0, int iParam1)//Position - 0x116C
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_39();
	}
	iVar0 = func_38(iParam1);
	iVar1 = unk_0x2DC92D46FC48E795(iVar0);
	return unk_0xFA30DFD0084E92FE(iVar1, iParam0);
}

void func_41(char* sParam0, char* sParam1, bool bParam2)//Position - 0x1198
{
	if ((!unk_0xFA30DFD0084E92FE(Global_180634.f_1, 2) && !func_7(unk_0xB5CEFD608600A09F())) && !func_6(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0xF1734B55490E9045(sParam0))
		{
			sParam0 = "FMEVEN_NUM1";
		}
		if (unk_0xF1734B55490E9045(sParam1))
		{
			if (bParam2)
			{
				sParam1 = "FMEVEN_NUM2";
			}
			else
			{
				sParam1 = "FMEVEN_NUM3";
			}
		}
		func_42(66, sParam0, sParam1, 1, -1, 2, 1);
		unk_0xF0059F27F7BB6680(&(Global_180634.f_1), 2);
	}
}

int func_42(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x120E
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_10 = 1;
	Var0.f_47 = 1;
	Var0.f_48 = 2;
	Var0.f_4F = -1;
	func_88(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_47 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_48 = iParam5;
	Var0.f_10 = iParam6;
	return func_43(&Var0);
}

int func_43(var uParam0)//Position - 0x127E
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_252E21.f_BD1)
		{
			return 0;
		}
	}
	func_57(uParam0, uParam0->f_11);
	func_54(uParam0);
	if (func_53())
	{
		func_54(uParam0);
	}
	if (func_52(uParam0->f_1))
	{
		func_45();
		if (Global_252E21.f_A8F[0 /*80*/].f_2 == 0)
		{
			Global_252E21.f_A8F[0 /*80*/] = { *uParam0 };
			return 1;
		}
		if (((Global_252E21.f_A8F[0 /*80*/].f_1 == 13 || Global_252E21.f_A8F[0 /*80*/].f_1 == 53) || Global_252E21.f_A8F[0 /*80*/].f_1 == 54) || Global_252E21.f_A8F[0 /*80*/].f_1 == 58)
		{
			Global_252E21.f_A8F[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_252E21.f_A8F[iVar0 + 1 /*80*/] = { Global_252E21.f_A8F[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_252E21.f_A8F[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_252E21.f_A8F[iVar0 /*80*/].f_2 == 0)
		{
			Global_252E21.f_A8F[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_45();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				unk_0xF0059F27F7BB6680(&(Global_252E21.f_A8F[iVar0 /*80*/].f_45), 1);
				Global_252E21.f_A8F[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !unk_0xFA30DFD0084E92FE(uParam0->f_45, 7))
			{
				if (func_44(Global_252E21.f_A8F[iVar0 /*80*/].f_1))
				{
					Global_252E21.f_A8F[iVar0 /*80*/].f_2 = 5;
					unk_0xF0059F27F7BB6680(&(Global_252E21.f_A8F[iVar0 /*80*/].f_45), 0);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_44(int iParam0)//Position - 0x144F
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
			return 1;
		
		default:
	}
	return 0;
}

void func_45()//Position - 0x14CF
{
	bool bVar0;
	
	if (Global_252E21.f_BD2)
	{
		return;
	}
	if (!Global_1164E)
	{
		Global_1164E = 1;
		bVar0 = true;
	}
	func_46();
	if (bVar0)
	{
		Global_1164E = 0;
	}
}

void func_46()//Position - 0x1502
{
	Global_252E21.f_BD3 = 0;
	Global_252E21.f_BD3.f_242 = 0;
	func_50(&(Global_252E21.f_BD3.f_1));
	Global_252E21.f_BD3.f_1.f_1 = 0;
	func_47(&(Global_252E21.f_BD3.f_1));
}

void func_47(var uParam0)//Position - 0x1543
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
				if (unk_0x17FAADF9916EF741() && !func_49(0))
				{
					unk_0x829FA4611BD56B44(800);
				}
			}
		}
	}
	func_48(0);
}

void func_48(int iParam0)//Position - 0x15E9
{
	Global_11646 = iParam0;
	Global_11647 = iParam0;
}

bool func_49(bool bParam0)//Position - 0x15FD
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_1163A, 0);
}

void func_50(var uParam0)//Position - 0x1628
{
	func_51(uParam0);
	uParam0->f_23A = 0;
	uParam0->f_1F = 0;
	uParam0->f_38 = 0;
	uParam0->f_237 = 0;
	uParam0->f_239 = 0;
}

void func_51(var uParam0)//Position - 0x1652
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

int func_52(int iParam0)//Position - 0x16D1
{
	if ((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105)
	{
		return 1;
	}
	return 0;
}

bool func_53()//Position - 0x17D3
{
	return Global_255A46.f_10;
}

void func_54(var uParam0)//Position - 0x17E1
{
	if (func_56(uParam0->f_1))
	{
		uParam0->f_48 = func_55();
	}
}

int func_55()//Position - 0x17FC
{
	return 21;
}

int func_56(int iParam0)//Position - 0x1806
{
	switch (iParam0)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_57(var uParam0, int iParam1)//Position - 0x1898
{
	if (func_56(uParam0->f_1))
	{
		uParam0->f_49 = 1;
	}
	if (iParam1 == func_87() || !func_13(iParam1, 0, 1))
	{
		return;
	}
	if (func_44(uParam0->f_1))
	{
		if (uParam0->f_47 == 1)
		{
			uParam0->f_49 = func_58(iParam1, -2, 0, 0);
		}
	}
}

int func_58(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x18EE
{
	int iVar0;
	int iVar1;
	
	if (func_83(iParam0))
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
	if ((func_83(unk_0xB5CEFD608600A09F()) || (func_82() && func_81())) && !unk_0xFA30DFD0084E92FE(Global_267214.f_11E0, 31))
	{
		iVar1 = func_80();
		if (unk_0x724D816EA203A79E(iVar1))
		{
			if (unk_0x15DBD981998D4FE1(iVar1))
			{
				if (unk_0x5363B43856FA7779(iVar1) != -1)
				{
					if (func_13(unk_0x5363B43856FA7779(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x517823CA390A19F6()) && iParam1 < 4)
						{
							if (Global_440000.f_1DBFD[iParam1] != -1)
							{
								return func_78(iParam1, iParam0, 0);
							}
							else
							{
								return func_66(iParam0, unk_0x5363B43856FA7779(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_66(iParam0, unk_0x5363B43856FA7779(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x517823CA390A19F6()) && iParam1 < 4)
			{
				if (Global_440000.f_1DBFD[iParam1] != -1)
				{
					return func_78(iParam1, iParam0, 0);
				}
				else
				{
					return func_59(0, -1, 0);
				}
			}
			else
			{
				return func_59(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x517823CA390A19F6()) && iParam1 < 4)
	{
		if (Global_440000.f_1DBFD[iParam1] != -1)
		{
			return func_78(iParam1, iParam0, 0);
		}
		else
		{
			return func_66(iParam0, unk_0xB5CEFD608600A09F(), iParam1, bParam2, bParam3);
		}
	}
	return func_66(iParam0, unk_0xB5CEFD608600A09F(), iParam1, bParam2, bParam3);
}

int func_59(bool bParam0, int iParam1, bool bParam2)//Position - 0x1ABE
{
	return func_60(unk_0xB5CEFD608600A09F(), bParam0, iParam1, bParam2);
}

int func_60(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x1AD4
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
			if (func_65(iVar0, iParam2, 0) && !unk_0xFA30DFD0084E92FE(Global_440000.f_F, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_64(1);
				}
				else
				{
					return func_64(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xFA30DFD0084E92FE(Global_440000.f_4, 20))
			{
				return func_61(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_61(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_64(1);
	}
	return func_64(0);
}

int func_61(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x1B98
{
	int iVar0;
	
	iVar0 = func_63(iParam0, iParam1, iParam3);
	if (func_62(Global_440000.f_1EF38, 1))
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

int func_62(int iParam0, bool bParam1)//Position - 0x1CB0
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

int func_63(int iParam0, int iParam1, int iParam2)//Position - 0x1D01
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
			if (!func_65(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_64(bool bParam0)//Position - 0x1D48
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_65(int iParam0, int iParam1, int iParam2)//Position - 0x1D5F
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

int func_66(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x1F2A
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
			if (func_75(1))
			{
				iVar3 = func_71(iParam0);
				if (!iVar3 == -1)
				{
					return func_69(iVar3);
				}
			}
			if ((func_68(iParam1, iParam0, iVar0, 0) && !unk_0xFA30DFD0084E92FE(Global_440000.f_F, 18)) || ((func_65(unk_0x343CB262BF0CDF5A(iParam1), unk_0x343CB262BF0CDF5A(iParam0), 0) && unk_0xFA30DFD0084E92FE(Global_440000.f_F, 23)) && !unk_0xFA30DFD0084E92FE(Global_440000.f_F, 18)))
			{
				return func_64(1);
			}
			else if (unk_0xFA30DFD0084E92FE(Global_440000.f_F, 26))
			{
				return func_67(1);
			}
			else
			{
				return func_60(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1805D3 || Global_1805CA) || Global_18402B[iParam0 /*770*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1805D3 == 1 && Global_1805DD == 0))
			{
				return func_64(1);
			}
			else
			{
				return func_60(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1805CE && Global_1803FC.f_E == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_71(iParam0);
	if (!iVar4 == -1)
	{
		return func_69(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_67(bool bParam0)//Position - 0x20CE
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_68(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x20E5
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

int func_69(int iParam0)//Position - 0x215D
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_70(iParam0);
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

var func_70(int iParam0)//Position - 0x2220
{
	return Global_24E35D.f_817.f_2C[iParam0 /*2*/].f_1;
}

int func_71(int iParam0)//Position - 0x2237
{
	if (!iParam0 == func_87())
	{
		if (func_73(iParam0, 1))
		{
			return Global_24E35D.f_817.f_B[func_72(iParam0)];
		}
	}
	return -1;
}

int func_72(int iParam0)//Position - 0x2269
{
	if (iParam0 != func_87())
	{
		return Global_18C80F[iParam0 /*558*/].f_B;
	}
	return func_87();
}

bool func_73(int iParam0, bool bParam1)//Position - 0x228C
{
	if (!bParam1)
	{
		if (func_74(iParam0))
		{
			return 0;
		}
	}
	return Global_18C80F[iParam0 /*558*/].f_B != func_87();
}

int func_74(int iParam0)//Position - 0x22B7
{
	if (iParam0 != func_87())
	{
		if (Global_18C80F[iParam0 /*558*/].f_B != func_87())
		{
			return Global_18C80F[iParam0 /*558*/].f_B == iParam0;
		}
	}
	return 0;
}

int func_75(int iParam0)//Position - 0x22EC
{
	if ((func_77() || func_76()) || (func_53() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_76()//Position - 0x231B
{
	return Global_255A46.f_F;
}

var func_77()//Position - 0x2329
{
	return Global_255A46.f_E;
}

int func_78(int iParam0, int iParam1, bool bParam2)//Position - 0x2337
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_EF621.f_C[iParam0];
	if (func_75(1))
	{
		iVar2 = func_71(iParam1);
		if (!iVar2 == -1)
		{
			return func_69(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0xFA30DFD0084E92FE(Global_440000.f_62[iParam0 /*10231*/].f_14F1[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_87())
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
			iVar0 = func_60(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0xFA30DFD0084E92FE(Global_440000.f_15, 13))
		{
			iVar0 = func_79(iParam0);
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

int func_79(int iParam0)//Position - 0x249C
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

var func_80()//Position - 0x2571
{
	return Global_240006.f_2;
}

bool func_81()//Position - 0x257F
{
	return unk_0xFA30DFD0084E92FE(Global_240006, 4);
}

bool func_82()//Position - 0x2590
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_27.f_12, 14);
}

int func_83(int iParam0)//Position - 0x25AD
{
	if (func_85(iParam0, 0))
	{
		return 1;
	}
	if (func_84())
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

bool func_84()//Position - 0x25EF
{
	return unk_0xFA30DFD0084E92FE(Global_240006, 3);
}

bool func_85(int iParam0, int iParam1)//Position - 0x2600
{
	bool bVar0;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		bVar0 = func_86(-1, 0) == 8;
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

int func_86(int iParam0, bool bParam1)//Position - 0x264B
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_39();
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

int func_87()//Position - 0x268C
{
	return -1;
}

void func_88(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)//Position - 0x2695
{
	uParam1->f_11 = func_87();
	uParam1->f_12 = func_87();
	uParam1->f_13 = func_87();
	uParam1->f_14 = func_87();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_15), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_10 = 1;
	uParam1->f_3 = iParam2;
	uParam1->f_47 = 1;
	uParam1->f_4A = 1;
	uParam1->f_4B = 1;
	uParam1->f_4C = 0;
	uParam1->f_4D = 0;
	uParam1->f_49 = 0;
	StringCopy(&(uParam1->f_19), "", 64);
	StringCopy(&(uParam1->f_29), "", 64);
}

bool func_89(int iParam0)//Position - 0x2713
{
	return func_90(iParam0, 20);
}

bool func_90(int iParam0, int iParam1)//Position - 0x2723
{
	return unk_0xFA30DFD0084E92FE(Global_18C80F[iParam0 /*558*/].f_B.f_4, iParam1);
}

int func_91(int iParam0)//Position - 0x273E
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_90(iParam0, 9);
	}
	return 0;
}

int func_92(int iParam0, int iParam1)//Position - 0x275C
{
	if (Global_18C80F[iParam0 /*558*/].f_B.f_21 != -1 && func_93(Global_18C80F[iParam0 /*558*/].f_B.f_21))
	{
		return 1;
	}
	if (iParam1 && Global_18C80F[iParam0 /*558*/].f_B.f_20 != -1)
	{
		if (func_93(Global_18C80F[iParam0 /*558*/].f_B.f_20))
		{
			return 1;
		}
	}
	return 0;
}

int func_93(int iParam0)//Position - 0x27C2
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return func_94(iParam0, 0);
	return 0;
}

int func_94(int iParam0, int iParam1)//Position - 0x281C
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_95(int iParam0, int iParam1)//Position - 0x2871
{
	if (Global_18C80F[iParam0 /*558*/].f_B.f_21 != -1 || (iParam1 && Global_18C80F[iParam0 /*558*/].f_B.f_20 != -1))
	{
		return 1;
	}
	return 0;
}

void func_96(int iParam0)//Position - 0x28AC
{
	Local_144 = iParam0;
}

int func_97()//Position - 0x28B9
{
	int iVar0;
	
	if (func_1(&(Local_144.f_299), 750, 0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			Local_144.f_2A2[iVar0] = -1;
			iVar0++;
		}
		func_35(&(Local_144.f_295));
		func_100();
		if (func_32())
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				Local_144.f_2C9[iVar0] = func_27(iVar0);
				iVar0++;
			}
			func_98();
		}
		return 1;
	}
	return 0;
}

void func_98()//Position - 0x2931
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Local_144.f_2D9[iVar0 /*2*/] = func_99();
		iVar0++;
	}
}

int func_99()//Position - 0x295A
{
	int iVar0;
	
	iVar0 = unk_0x491B2241281A03B7(0, 2);
	switch (iVar0)
	{
		case 0:
			return joaat("maverick");
		
		case 1:
			return joaat("mammatus");
		
		default:
	}
	return 0;
}

void func_100()//Position - 0x298E
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	Local_144.f_2C5 = func_113();
	Local_144.f_2C4 = Local_144.f_2C5;
	Local_144.f_2C8 = func_109();
	Local_144.f_2C3 = func_106();
	iVar0 = func_105();
	if (Local_144.f_2C3)
	{
		iVar1 = 1;
	}
	func_102(func_104(132, Local_144.f_2C8, iVar1, 0));
	if (Local_144.f_2C8 == 1 && !Local_144.f_2C3)
	{
		Local_144.f_2C6 = 1;
	}
	iVar2 = 0;
	while (iVar2 < Local_144.f_2C5)
	{
		Local_144.f_A[iVar2 /*5*/].f_4 = iVar2;
		Local_144.f_A[iVar2 /*5*/] = { func_101(Local_144.f_2C8, Local_144.f_2C3, iVar0, iVar2) };
		iVar2++;
	}
}

Vector3 func_101(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x2A46
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return 623.5349f, 1614.651f, 283.748f;
							
							case 1:
								return 742.6324f, 1271.099f, 388.9925f;
							
							case 2:
								return 682.1757f, 1204.295f, 350.0934f;
							
							case 3:
								return 1779.28f, 668.7821f, 276.3788f;
							
							case 4:
								return 1927.214f, 129.7589f, 174.4281f;
							
							case 5:
								return 1056.943f, -699.1728f, 78.8831f;
							
							case 6:
								return 2026.536f, -1594.874f, 262.0831f;
							
							case 7:
								return 2139.424f, -2613.58f, 20.5914f;
							
							case 8:
								return 1041.685f, -2882.901f, 27.0959f;
							
							case 9:
								return 796.1402f, -2624.645f, 95.127f;
							
							case 10:
								return 504.6169f, -3311.801f, 22.9858f;
							
							case 11:
								return 416.9175f, -2684.419f, 10.1246f;
							
							case 12:
								return 561.767f, -2100.675f, 60.143f;
							
							case 13:
								return 872.454f, -1929.237f, 104.4083f;
							
							case 14:
								return 636.6328f, -1429.945f, 15.5f;
							
							case 15:
								return 591.386f, -852.2912f, 50.7211f;
							
							case 16:
								return 471.2209f, -102.4007f, 149.7505f;
							
							case 17:
								return 533.762f, 143.6576f, 125.7511f;
							
							case 18:
								return 1112.19f, 74.8892f, 117.7713f;
							
							case 19:
								return 683.9346f, 570.1795f, 165.7115f;
							
							case 20:
								return 1453.832f, 1113.675f, 134.9644f;
							
							case 21:
								return 1539.314f, 1716.172f, 125.0574f;
							
							case 22:
								return 1875.192f, 1698.918f, 109.9103f;
							
							case 23:
								return 2320.32f, 1669.402f, 86.7663f;
							
							case 24:
								return 2337.891f, 1358.536f, 100.8737f;
							
							case 25:
								return 2727.786f, 1558.729f, 83.66f;
							
							case 26:
								return 3112.177f, 1153.66f, 25.3827f;
							
							case 27:
								return 2580.817f, 476.8322f, 121.7549f;
							
							case 28:
								return 2458.7f, -384.0464f, 127.5513f;
							
							case 29:
								return 2381.206f, -939.2949f, 185.6516f;
							
							case 30:
								return 1669.294f, -1652.948f, 154.2478f;
							
							case 31:
								return 1096.793f, -1141.693f, 96.1055f;
							
							case 32:
								return 3042.9f, -291.4662f, 22.8304f;
							
							case 33:
								return 2645.351f, -1492.043f, 30.646f;
							
							case 34:
								return 1214.374f, -2353.274f, 66.8f;
							
							case 35:
								return 1841.616f, -2497.971f, 101.8039f;
							
							case 36:
								return 1872.035f, -761.149f, 105f;
							
							case 37:
								return 1657.665f, -413.7629f, 228.448f;
							
							case 38:
								return 1589.229f, -1981.901f, 161.2293f;
							
							case 39:
								return 991.7729f, -1477.064f, 60.0276f;
							
							case 40:
								return 2609.912f, -2096.358f, 35.0044f;
							
							case 41:
								return 1121.19f, 725.4341f, 170.3273f;
							
							case 42:
								return 2117.316f, 1024.085f, 197f;
							
							case 43:
								return 727.6708f, -452.6442f, 25f;
							
							case 44:
								return 1211.964f, -3285.54f, 19.5936f;
							
							case 45:
								return 1499.883f, -1276.207f, 131.5493f;
							
							case 46:
								return 3381.442f, -826.2608f, 42.8967f;
							
							case 47:
								return 1562.097f, 292.1506f, 494.2574f;
							
							case 48:
								return 2021.578f, -1993.689f, 120f;
							
							case 49:
								return 757.5558f, -1196.363f, 232.0553f;
							
							case 50:
								return 1887.774f, -3474.97f, 77.8727f;
							
							case 51:
								return 1083.224f, -229.6182f, 68.6364f;
							
							case 52:
								return 2344.084f, -406.1672f, 91f;
							
							case 53:
								return 2184.821f, 529.1252f, 241.1723f;
							
							case 54:
								return 1251.541f, -1883.809f, 50f;
							
							case 55:
								return 847.74f, 1781.903f, 160.9508f;
							
							case 56:
								return 288.3698f, -1601.346f, 52f;
							
							case 57:
								return 2648.131f, -731.5316f, 99.7f;
							
							case 58:
								return 1937.117f, 1337.446f, 529.8608f;
							
							case 59:
								return 1512.681f, -2539.276f, 208.3091f;
							
							case 60:
								return 2352.986f, -1763.908f, 136.1568f;
							
							case 61:
								return 2099.732f, -1212.728f, 178.3343f;
							
							case 62:
								return 1945.16f, -957.8221f, 96.04f;
							
							case 63:
								return 1872.81f, -830.1746f, 171.44f;
							
							case 64:
								return 1256.392f, -1571.629f, 90.566f;
							
							case 65:
								return 1818.023f, -244.6768f, 305.9837f;
							
							case 66:
								return 2839.051f, -748.0399f, 21.5008f;
							
							case 67:
								return 1268.646f, -2126.072f, 60.6975f;
							
							case 68:
								return 1088.679f, -1982.82f, 84.1204f;
							
							case 69:
								return 1597.218f, -2817.042f, 19.0498f;
							
							case 70:
								return 356.3379f, -2319.226f, 67.6058f;
							
							case 71:
								return 692.5012f, -2330.583f, 60.7022f;
							
							case 72:
								return 1070.4f, -1835.148f, 100.8235f;
							
							case 73:
								return 478.3501f, -1682.318f, 59.7763f;
							
							case 74:
								return 845.2267f, -2186.32f, 46.5743f;
							
							case 75:
								return 2651.639f, -1230.85f, 40.5824f;
							
							case 76:
								return 461.851f, -1460.173f, 65.7889f;
							
							case 77:
								return 775.8362f, -852.0386f, 31f;
							
							case 78:
								return 913.9593f, -976.4005f, 81.0321f;
							
							case 79:
								return 970.9194f, -2510.112f, 64f;
							
							case 80:
								return 1096.666f, 1222.327f, 202.4859f;
							
							case 81:
								return 1978.543f, 690.4552f, 174.2517f;
							
							case 82:
								return 1571.993f, -36.6251f, 140.5239f;
							
							case 83:
								return 918.2688f, -675.462f, 76.6019f;
							
							case 84:
								return 798.097f, -1194.02f, 32f;
							
							case 85:
								return 382.4527f, -31.8431f, 143.6312f;
							
							case 86:
								return 672.1725f, -1745.012f, 16f;
							
							case 87:
								return 620.2905f, -588.2725f, 22.6129f;
							
							case 88:
								return 1204.318f, 196.6229f, 79.9329f;
							
							case 89:
								return 2028.402f, -2179.396f, 105.5733f;
							
							case 90:
								return 1131.183f, -2929.769f, 33.2799f;
							
							case 91:
								return 654.5255f, -2634.736f, 26.063f;
							
							case 92:
								return 757.272f, -30.6019f, 66.9464f;
							
							case 93:
								return 262.5532f, -1046.969f, 73.6448f;
							
							case 94:
								return 638.4819f, -1021f, 43.5236f;
							
							case 95:
								return 351.6616f, -2758.046f, 29.2267f;
							
							case 96:
								return 1613.985f, -2243.761f, 136f;
							
							case 97:
								return 2947.746f, 792.9475f, 45f;
							
							case 98:
								return 2608.733f, 822.9318f, 118.6201f;
							
							case 99:
								return 1357.208f, 674.4443f, 100f;
							
							case 100:
								return 978.4934f, -2073.071f, 1000f;
							
							case 101:
								return 2848.513f, -2701.795f, 547.5851f;
							
							case 102:
								return 2322.219f, -2129.611f, 13.6809f;
							
							case 103:
								return 1248.603f, -2675.042f, 145.6704f;
							
							case 104:
								return 2052.692f, -252.931f, 228.334f;
							
							case 105:
								return 2394.902f, 388.1578f, 194.5342f;
							
							case 106:
								return 3337.711f, 56.3844f, 764.684f;
							
							case 107:
								return 1573.049f, 1472.569f, 179.2061f;
							
							case 108:
								return 1898.354f, 1020.671f, 277.9648f;
							
							case 109:
								return 745.1586f, 232.868f, 177.0828f;
							
							case 110:
								return 1551.579f, -685.6392f, 126f;
							
							case 111:
								return 2734.234f, 61.798f, 25.1296f;
							
							case 112:
								return 2404.63f, -1485.806f, 86.3959f;
							
							case 113:
								return 3033.16f, 321.8385f, 908.0805f;
							
							case 114:
								return 1353.323f, 373.6808f, 184.937f;
							
							case 115:
								return 1317.262f, -737.488f, 125.2729f;
							
							case 116:
								return 1737.696f, -966.1904f, 119.8332f;
							
							case 117:
								return 923.2643f, 978.5736f, 605.3384f;
							
							case 118:
								return 2823.777f, -1483.905f, 26.8193f;
							
							case 119:
								return 1333.475f, -275.2598f, 1000f;
							
							default:
						}
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return 2360.429f, 1273.094f, 63.9814f;
							
							case 1:
								return 2545.422f, 342.8004f, 107.4641f;
							
							case 2:
								return 2483.171f, -363.0696f, 92.7352f;
							
							case 3:
								return 1491.835f, -1005.532f, 50.5682f;
							
							case 4:
								return 1078.853f, -688.3618f, 56.6151f;
							
							case 5:
								return 657.7627f, -1500.858f, 8.6817f;
							
							case 6:
								return 1216.266f, -2907.278f, 4.8661f;
							
							case 7:
								return 958.6841f, -3079.094f, 13.3327f;
							
							case 8:
								return 459.5267f, -2429.235f, 4.7518f;
							
							case 9:
								return 1130.214f, -2082.811f, 30.0089f;
							
							case 10:
								return 1506.701f, -2135.637f, 75.4567f;
							
							case 11:
								return 1759.277f, -1579.97f, 117.9f;
							
							case 12:
								return 2510.45f, -1219.332f, 1.89f;
							
							case 13:
								return 2855.604f, -1339.602f, 14.7183f;
							
							case 14:
								return 2826.41f, -743.3448f, 0.3071f;
							
							case 15:
								return 1236.599f, -83.0057f, 58.7636f;
							
							case 16:
								return 1660.534f, 0.3033f, 172.7744f;
							
							case 17:
								return 1917.608f, 301.6851f, 161.8848f;
							
							case 18:
								return 2145.003f, 146.688f, 224.1061f;
							
							case 19:
								return 1456.737f, 1111.848f, 113.334f;
							
							case 20:
								return 1135.62f, 58.6667f, 79.7561f;
							
							case 21:
								return 680.794f, 559.0409f, 128.0462f;
							
							case 22:
								return 716.7936f, 141.21f, 79.7545f;
							
							case 23:
								return 875.606f, -476.7556f, 29.0746f;
							
							case 24:
								return 536.7303f, -2817.502f, 5.0421f;
							
							case 25:
								return 984.1771f, -2410.686f, 29.4333f;
							
							case 26:
								return 863.2344f, -2151.808f, 29.4816f;
							
							case 27:
								return 1002.942f, -1918.75f, 30.1432f;
							
							case 28:
								return 1183.313f, -1550.946f, 38.5953f;
							
							case 29:
								return 694.0918f, 1283.059f, 359.296f;
							
							case 30:
								return 745.2003f, 1199.09f, 325.4016f;
							
							case 31:
								return 887.6219f, 873.548f, 178.5657f;
							
							case 32:
								return 1828.967f, 1571.725f, 99.7219f;
							
							case 33:
								return 2805.81f, 1676.1f, 23.5193f;
							
							case 34:
								return 1405.691f, -601.7893f, 73.3473f;
							
							case 35:
								return 1710.367f, -464.7253f, 169.8001f;
							
							case 36:
								return 1946.392f, 1331.992f, 160.1707f;
							
							case 37:
								return 2271.38f, 1711.949f, 67.0413f;
							
							case 38:
								return 2307.003f, -1750.421f, 133.7737f;
							
							case 39:
								return 2172.226f, -1069.367f, 176.0087f;
							
							case 40:
								return 595.0312f, -851.27f, 40.4327f;
							
							case 41:
								return 456.9577f, -752.8668f, 26.3578f;
							
							case 42:
								return 531.9203f, -1034.797f, 27.2597f;
							
							case 43:
								return 1289.908f, -3341.78f, 4.9016f;
							
							case 44:
								return 533.8767f, -1969.171f, 23.9846f;
							
							case 45:
								return 689.5218f, -1774.186f, 8.6f;
							
							case 46:
								return 848.6605f, -1211.77f, 30.3237f;
							
							case 47:
								return 1874.741f, -2202.331f, 166.2907f;
							
							case 48:
								return 1458.76f, -2623.696f, 47.69f;
							
							case 49:
								return 1538.907f, 784.3685f, 76.4501f;
							
							case 50:
								return 800.149f, -109.5107f, 79.533f;
							
							case 51:
								return 2687.09f, 889.5835f, 76.4359f;
							
							case 52:
								return 939.7744f, -1496.824f, 29.1156f;
							
							case 53:
								return 547.5936f, -455.3327f, 23.7304f;
							
							case 54:
								return 709.3f, -2285f, 33.8f;
							
							case 55:
								return 454.0637f, -2177.92f, 4.9177f;
							
							case 56:
								return 1468.104f, -1759.198f, 78.3022f;
							
							case 57:
								return 1239.343f, -1097.545f, 37.5256f;
							
							case 58:
								return 851.4936f, -956.856f, 25.2824f;
							
							case 59:
								return 512.4025f, 221.9917f, 103.7442f;
							
							case 60:
								return 1545.082f, 1701.081f, 108.769f;
							
							case 61:
								return 1188.11f, 1556.979f, 107.8028f;
							
							case 62:
								return 1033.948f, -273.4799f, 49.8443f;
							
							case 63:
								return 743.4129f, -591.6385f, 26.0061f;
							
							case 64:
								return 1975.484f, -749.9232f, 96.2513f;
							
							case 65:
								return 1968.117f, 708.8224f, 161.8571f;
							
							case 66:
								return 2296.027f, 1152.222f, 64.0942f;
							
							case 67:
								return 2474.09f, 1484.103f, 35.2029f;
							
							case 68:
								return 482.1839f, 664.4731f, 195.1235f;
							
							case 69:
								return 1505.106f, -1271.169f, 121.655f;
							
							case 70:
								return 1220.729f, -1865.861f, 37.4982f;
							
							case 71:
								return 476.6311f, -1283.433f, 28.5393f;
							
							case 72:
								return 952.6752f, -2248.219f, 29.5831f;
							
							case 73:
								return 1434.707f, -2315.042f, 65.927f;
							
							case 74:
								return 1882.254f, -1873.208f, 191.477f;
							
							case 75:
								return 2014.572f, -1591.406f, 249.303f;
							
							case 76:
								return 1969.748f, -992.8931f, 79.6204f;
							
							case 77:
								return 2267.432f, -331.317f, 92.9784f;
							
							case 78:
								return 1205.465f, 336.8802f, 80.9909f;
							
							case 79:
								return 531.8229f, -27.4548f, 69.6295f;
							
							case 80:
								return 304.7162f, 262.4799f, 104.337f;
							
							case 81:
								return 572.4857f, -2147.293f, 7.9233f;
							
							case 82:
								return 1223.13f, -2338.621f, 59.8673f;
							
							case 83:
								return 1747.151f, -2679.91f, 1.4587f;
							
							case 84:
								return 939.6769f, -1342.533f, 11.4778f;
							
							case 85:
								return 1435.646f, -1476.472f, 62.2245f;
							
							case 86:
								return 2273.048f, -539.2752f, 102.9436f;
							
							case 87:
								return 1522.075f, -381.5488f, 200.3996f;
							
							case 88:
								return 2778.579f, 1073.328f, 0.6607f;
							
							case 89:
								return 609.4634f, -1333.589f, 20.7017f;
							
							case 90:
								return 1360.928f, -946.584f, 55.9209f;
							
							case 91:
								return 1147.373f, -431.5072f, 65.9987f;
							
							case 92:
								return 2391.644f, -932.7006f, 151.3306f;
							
							case 93:
								return 2897.51f, -314.7418f, 17.1346f;
							
							case 94:
								return 2963.361f, 513.4398f, 35.0981f;
							
							case 95:
								return 2415.814f, 763.4792f, 124.8302f;
							
							case 96:
								return 2054.985f, 953.5229f, 218.5845f;
							
							case 97:
								return 1522.831f, 461.3894f, 224.2793f;
							
							case 98:
								return 1301.596f, 1445.471f, 98.4293f;
							
							case 99:
								return 1071.843f, -1841.304f, 36.3069f;
							
							case 100:
								return 1133.087f, -2602.795f, 17.3834f;
							
							case 101:
								return 484.4286f, -3064.647f, 5.084f;
							
							case 102:
								return 1610.912f, -2385.55f, 90.6982f;
							
							case 103:
								return 695.2822f, -2534.997f, 17.6967f;
							
							case 104:
								return 554.7129f, -1634.238f, 26.9479f;
							
							case 105:
								return 1723.686f, -1038.606f, 129.0783f;
							
							case 106:
								return 2637.012f, -1863.213f, 17.7764f;
							
							case 107:
								return 2638.077f, 1346.641f, 25.4338f;
							
							case 108:
								return 1910.663f, 29.3172f, 159.5f;
							
							case 109:
								return 2952.967f, 797.8872f, 0.1f;
							
							case 110:
								return 2937.12f, 1471.532f, 0f;
							
							case 111:
								return 2348.98f, -2281.005f, 0.1697f;
							
							case 112:
								return 2681.416f, -1560.354f, -0.0123f;
							
							case 113:
								return 2812.644f, -27.1503f, 0.7016f;
							
							case 114:
								return 3201.036f, -102.7169f, 0.2f;
							
							case 115:
								return 651.1428f, -3112.596f, 0.0233f;
							
							case 116:
								return 2313.423f, -2194.061f, 0.025f;
							
							case 117:
								return 3055.192f, 185.0506f, 0.4391f;
							
							case 118:
								return 2729.46f, -1073.702f, 0.6712f;
							
							case 119:
								return 1423.506f, -2790.912f, 0.7109f;
							
							default:
						}
						break;
					}
			}
			break;
		
		case 1:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return -915.445f, -2520.007f, 58f;
							
							case 1:
								return -1343.719f, -3336.795f, 30.5601f;
							
							case 2:
								return -1336.239f, -3044.059f, 300.803f;
							
							case 3:
								return -1833.852f, -1191.057f, 41.1411f;
							
							case 4:
								return -1955.78f, 1776.57f, 195.8577f;
							
							case 5:
								return -2166.629f, 1607.567f, 260f;
							
							case 6:
								return -417.0685f, 1153.347f, 347.5894f;
							
							case 7:
								return -2503.341f, 754.9435f, 342.9515f;
							
							case 8:
								return -2626.127f, 136.1493f, 118.1611f;
							
							case 9:
								return -2246.804f, 266.7578f, 194.8923f;
							
							case 10:
								return -1364.038f, 56.9618f, 70.9416f;
							
							case 11:
								return -94.2512f, 880.448f, 265f;
							
							case 12:
								return -162.3738f, -999.6118f, 286.6717f;
							
							case 13:
								return 140.5345f, -698.5123f, 92.6658f;
							
							case 14:
								return -104.079f, -755.4847f, 59.1614f;
							
							case 15:
								return -284.6401f, -446.2669f, 91.5901f;
							
							case 16:
								return -795.1664f, -736.1061f, 78.6788f;
							
							case 17:
								return -971.361f, -1305.368f, 50f;
							
							case 18:
								return -1357.973f, -1476.396f, 40.9274f;
							
							case 19:
								return -2004.334f, -556.4324f, 20.3771f;
							
							case 20:
								return -1034.381f, 640.7464f, 163.7504f;
							
							case 21:
								return -1238.563f, -848.6133f, 89.7682f;
							
							case 22:
								return -1169.283f, -467.3812f, 69.0157f;
							
							case 23:
								return -324.4008f, -1968.694f, 71.7904f;
							
							case 24:
								return -269.9813f, -2425.728f, 95.05f;
							
							case 25:
								return 247.3292f, -3308.082f, 59.9012f;
							
							case 26:
								return 219.492f, -2318.923f, 43.917f;
							
							case 27:
								return 18.8233f, -1504f, 54.686f;
							
							case 28:
								return 8.9788f, 1715.057f, 249.4028f;
							
							case 29:
								return -667.7844f, 404.7751f, 125.5105f;
							
							case 30:
								return 216.2372f, 236.2603f, 125.7443f;
							
							case 31:
								return -3079.696f, 766.6476f, 33.988f;
							
							case 32:
								return -1105.589f, 1428.968f, 238.1016f;
							
							case 33:
								return -474.9906f, 1529.526f, 500.0109f;
							
							case 34:
								return -1621.841f, 929.212f, 193.8022f;
							
							case 35:
								return -767.9827f, -21.7202f, 69.0007f;
							
							case 36:
								return -472.9492f, -1444.143f, 92.8559f;
							
							case 37:
								return -1879.575f, -2634.001f, 11.491f;
							
							case 38:
								return -1459.734f, -2141.965f, 23.7189f;
							
							case 39:
								return -75.0934f, -818.6606f, 599.9617f;
							
							case 40:
								return -230.7478f, -241.4196f, 76.4557f;
							
							case 41:
								return -1608.013f, -537.3172f, 73.1431f;
							
							case 42:
								return -1806.964f, -125.5317f, 118.0094f;
							
							case 43:
								return -3170.222f, 1543.227f, 33.8091f;
							
							case 44:
								return -2753.087f, 1229.005f, 140.7239f;
							
							case 45:
								return -306.4009f, 202.0892f, 180.3099f;
							
							case 46:
								return 396.1246f, -1528.24f, 46.6041f;
							
							case 47:
								return 389.6704f, -356.0437f, 61.5436f;
							
							case 48:
								return 324.4086f, -988.9622f, 92.2799f;
							
							case 49:
								return -657.5551f, -1105.199f, 67.647f;
							
							case 50:
								return -439.2123f, -1003.071f, 58.7819f;
							
							case 51:
								return -208.3349f, -1800.983f, 12.0207f;
							
							case 52:
								return 104.7709f, -1940.293f, 33.3786f;
							
							case 53:
								return -80.1589f, 364.0139f, 180.4526f;
							
							case 54:
								return -1064.813f, 7.4781f, 69.6885f;
							
							case 55:
								return -1997.443f, 722.7387f, 175.1271f;
							
							case 56:
								return -254.3736f, -3074.535f, 75.4412f;
							
							case 57:
								return -830.1344f, -1880.055f, 33.9615f;
							
							case 58:
								return -2775.497f, -788.6588f, 36.447f;
							
							case 59:
								return 43.0406f, -413.7074f, 89.5811f;
							
							case 60:
								return -3209.421f, 1110.18f, 37.6606f;
							
							case 61:
								return -2256.718f, -339.6835f, 43.3005f;
							
							case 62:
								return -1957.094f, 1330.48f, 236.7105f;
							
							case 63:
								return -1030.221f, 996.1059f, 182.364f;
							
							case 64:
								return -1529.428f, 441.7661f, 134.8705f;
							
							case 65:
								return 145.6732f, 1154.994f, 253.3341f;
							
							case 66:
								return -520.5256f, 659.5372f, 177.0043f;
							
							case 67:
								return 18.1044f, 638.951f, 224.5906f;
							
							case 68:
								return 128.1127f, -27.8183f, 91.0755f;
							
							case 69:
								return -634.6116f, -367.6195f, 56.3093f;
							
							case 70:
								return -402.9568f, -655.0366f, 60.6586f;
							
							case 71:
								return -1034.505f, -1070.038f, 21.0905f;
							
							case 72:
								return -1013.909f, -1763.924f, 20.6112f;
							
							case 73:
								return -734.4069f, -1448.061f, 26.2766f;
							
							case 74:
								return -202.7723f, -1322.269f, 53.6863f;
							
							case 75:
								return 388.6693f, -1368.068f, 50.7767f;
							
							case 76:
								return -7.0116f, -2230.674f, 39.1959f;
							
							case 77:
								return 33.8391f, -2745.649f, 33.5782f;
							
							case 78:
								return -1100.793f, -2846.705f, 53.132f;
							
							case 79:
								return -1274.324f, -2448.849f, 99.9299f;
							
							case 80:
								return -473.7719f, -2675.318f, 19.2771f;
							
							case 81:
								return -727.3944f, -3494.9f, 23.1103f;
							
							case 82:
								return -1907.151f, -3034.577f, 39.2742f;
							
							case 83:
								return 416.2226f, -2912.834f, 5.0678f;
							
							case 84:
								return 414.82f, -2616.128f, 22.3517f;
							
							case 85:
								return 233.9356f, -1474.491f, 45.7138f;
							
							case 86:
								return 93.563f, -1189.746f, 51.969f;
							
							case 87:
								return -607.8086f, -2189.156f, 76.1713f;
							
							case 88:
								return -1106.939f, -2019.405f, 33.3166f;
							
							case 89:
								return -1210.83f, -1806.382f, 246.2572f;
							
							case 90:
								return -1309.448f, -1043.763f, 29.6876f;
							
							case 91:
								return -1618.367f, -827.8159f, 42.3072f;
							
							case 92:
								return -2257.555f, -9.0938f, 121.4433f;
							
							case 93:
								return -777.472f, -376.5067f, 72.7751f;
							
							case 94:
								return -1371.512f, -172.8742f, 99.1525f;
							
							case 95:
								return -1842.798f, 302.3257f, 105.5376f;
							
							case 96:
								return -1165.458f, 367.7476f, 95.3869f;
							
							case 97:
								return -3107.359f, 276.277f, 56.9633f;
							
							case 98:
								return -2548.786f, 1441.129f, 190.8976f;
							
							case 99:
								return -2644.523f, 1868.621f, 168.2627f;
							
							case 100:
								return -3029.234f, 1883.871f, 35.4705f;
							
							case 101:
								return -1119.207f, 1736.032f, 195.1095f;
							
							case 102:
								return -644.2039f, 1743.748f, 227.7433f;
							
							case 103:
								return -577.6026f, 2038.995f, 209.9244f;
							
							case 104:
								return -302.0078f, 1871.026f, 196.7599f;
							
							case 105:
								return 351.8685f, 1748.149f, 260.866f;
							
							case 106:
								return -11.935f, 1320.348f, 288.0058f;
							
							case 107:
								return 295.5885f, 753.7887f, 200.7135f;
							
							case 108:
								return 305.6451f, 501.4699f, 350.4832f;
							
							case 109:
								return 353.2237f, 58.5094f, 119.2648f;
							
							case 110:
								return 377.5104f, -695.2125f, 102.9432f;
							
							case 111:
								return 392.4507f, -1204.239f, 50f;
							
							case 112:
								return 397.6461f, -1929.781f, 43.4559f;
							
							case 113:
								return 470.8737f, -2451.431f, 30f;
							
							case 114:
								return -418.7521f, -2424.396f, 20.0582f;
							
							case 115:
								return -2440.527f, -1654.13f, 6.3248f;
							
							case 116:
								return -888.3994f, -2938.026f, 26.3869f;
							
							case 117:
								return -1374.637f, -2647.817f, 26.4425f;
							
							case 118:
								return -1082.177f, -620.1375f, 27.491f;
							
							case 119:
								return -1471.09f, 1324.141f, 193.4433f;
							
							default:
						}
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return -2303.138f, 218.8738f, 166.6017f;
							
							case 1:
								return -2994.291f, 39.7167f, 7.4636f;
							
							case 2:
								return -3410.2f, 967.5133f, 7.3517f;
							
							case 3:
								return -3041.96f, 1209.59f, 13.7743f;
							
							case 4:
								return -2502.529f, 756.2985f, 301.2459f;
							
							case 5:
								return -1352.546f, 120.6978f, 55.2388f;
							
							case 6:
								return -1729.21f, -193.1235f, 57.5038f;
							
							case 7:
								return -1635.4f, -1054.226f, 12.1522f;
							
							case 8:
								return -1268.607f, -1915.845f, 4.8616f;
							
							case 9:
								return -18.3427f, -1297.615f, 28.3575f;
							
							case 10:
								return -145.3585f, 930.7858f, 234.6711f;
							
							case 11:
								return -424.3762f, 1587.798f, 355.2649f;
							
							case 12:
								return -112.2256f, 354.4933f, 111.6961f;
							
							case 13:
								return 67.6185f, -673.5317f, 28.7056f;
							
							case 14:
								return 338.3054f, -1394.279f, 31.5093f;
							
							case 15:
								return -19.2884f, -1426.187f, 29.6575f;
							
							case 16:
								return -251.9772f, -2029.258f, 28.946f;
							
							case 17:
								return -432.7254f, -2440.489f, 5.0008f;
							
							case 18:
								return -956.3549f, -3053.302f, 12.9451f;
							
							case 19:
								return -1662.76f, -3177.918f, 12.9914f;
							
							case 20:
								return -457.7008f, -1507.786f, 12.0586f;
							
							case 21:
								return 188.8895f, 300.349f, 104.515f;
							
							case 22:
								return 3.4946f, -2452.885f, 13.4665f;
							
							case 23:
								return -966.3007f, -973.4243f, 2.876f;
							
							case 24:
								return -1536.435f, 868.5392f, 180.16f;
							
							case 25:
								return -1521.53f, 1493.765f, 110.5947f;
							
							case 26:
								return -1173.264f, -2037.82f, 12.776f;
							
							case 27:
								return -0.4394f, -1037.738f, 37.152f;
							
							case 28:
								return 137.7382f, -3092.8f, 4.8963f;
							
							case 29:
								return -1177.272f, -507.6518f, 34.5662f;
							
							case 30:
								return -575.4523f, -142.0386f, 36.2353f;
							
							case 31:
								return -723.2367f, 655.733f, 154.5475f;
							
							case 32:
								return -455.0906f, -999.9053f, 22.8657f;
							
							case 33:
								return -1133.934f, -1447.037f, 4f;
							
							case 34:
								return -231.0999f, -242.6378f, 49.0062f;
							
							case 35:
								return 69.8444f, -62.9348f, 67.8751f;
							
							case 36:
								return -1981.162f, -296.7468f, 47.1062f;
							
							case 37:
								return 98.9504f, -1979.664f, 19.6635f;
							
							case 38:
								return 324.168f, -2758.195f, 5.0028f;
							
							case 39:
								return 219.5919f, -2310.078f, 7.4018f;
							
							case 40:
								return -693.2001f, -592.6827f, 30.5552f;
							
							case 41:
								return -1044.535f, 500.5195f, 83.1617f;
							
							case 42:
								return -1792.464f, 395.7471f, 111.7909f;
							
							case 43:
								return -425.5935f, 1123.605f, 324.8547f;
							
							case 44:
								return -523.835f, -2902.068f, 5.0004f;
							
							case 45:
								return -1213.84f, -2724.547f, 12.9541f;
							
							case 46:
								return -656.7547f, -1708.686f, 23.8153f;
							
							case 47:
								return -1024.89f, 1012.239f, 159.6649f;
							
							case 48:
								return -850.8826f, 1708.716f, 193.9906f;
							
							case 49:
								return -2253.348f, 1324.29f, 291.0074f;
							
							case 50:
								return -876.7352f, -210.6213f, 38.2135f;
							
							case 51:
								return -309.9497f, -609.0406f, 32.5568f;
							
							case 52:
								return -743.9313f, -2283.372f, 12.06f;
							
							case 53:
								return -2971.731f, 584.4294f, 19.423f;
							
							case 54:
								return 288.4228f, -1601.137f, 30.2709f;
							
							case 55:
								return 97.6932f, -348.3357f, 41.3071f;
							
							case 56:
								return -1065.912f, -12.7356f, 49.4423f;
							
							case 57:
								return -388.1416f, -2283.256f, 6.6082f;
							
							case 58:
								return -1213.121f, -945.0177f, 1.1502f;
							
							case 59:
								return -1605.807f, -588.1375f, 32.1103f;
							
							case 60:
								return -1573.01f, 400.7232f, 106.194f;
							
							case 61:
								return -2751.19f, 1185.782f, 93.6924f;
							
							case 62:
								return 287.3323f, -3014.992f, 8.8106f;
							
							case 63:
								return -96.4867f, -2744.17f, 5.1062f;
							
							case 64:
								return -1350.788f, -1435.002f, 3.325f;
							
							case 65:
								return -156.4393f, -979.7114f, 20.2769f;
							
							case 66:
								return -671.3023f, 399.0416f, 101.68f;
							
							case 67:
								return 169.03f, 667.5479f, 205.7125f;
							
							case 68:
								return -726.8502f, -410.5149f, 34.5413f;
							
							case 69:
								return -671.4555f, -891.9421f, 23.4991f;
							
							case 70:
								return -190.4528f, 1299.355f, 302.9701f;
							
							case 71:
								return -1284.425f, -3403.299f, 12.9452f;
							
							case 72:
								return -825.6949f, -3337.779f, 12.9445f;
							
							case 73:
								return -1368.524f, -2335.062f, 12.9446f;
							
							case 74:
								return -1098.009f, -2415.526f, 12.9452f;
							
							case 75:
								return -1336.274f, -3044.103f, 12.9444f;
							
							case 76:
								return -821.012f, -1992.519f, 9.6439f;
							
							case 77:
								return -350.2334f, -2640.808f, 5.0003f;
							
							case 78:
								return -219.3889f, -2386.881f, 5.0014f;
							
							case 79:
								return 109.4531f, -2816.037f, 9.7899f;
							
							case 80:
								return 208.6273f, -3327.894f, 4.8177f;
							
							case 81:
								return 370.2768f, -2128.437f, 15.2365f;
							
							case 82:
								return -53.6978f, -1688.638f, 28.4917f;
							
							case 83:
								return -1009.052f, -1759.302f, 5.5498f;
							
							case 84:
								return -988.1508f, -2106.591f, 10.5382f;
							
							case 85:
								return -708.1929f, -1517.804f, 4.4121f;
							
							case 86:
								return -228.0423f, -1514.504f, 30.4622f;
							
							case 87:
								return 297.5852f, -1204.386f, 28.1985f;
							
							case 88:
								return 383.1396f, -904.1862f, 28.4376f;
							
							case 89:
								return -630.6f, -1071.2f, 21.7f;
							
							case 90:
								return -1207.432f, -1796.611f, 2.9086f;
							
							case 91:
								return -876.3531f, -1501.708f, 4.1775f;
							
							case 92:
								return -1271.531f, -1099.613f, 6.5852f;
							
							case 93:
								return -1730.83f, -725.0892f, 9.3941f;
							
							case 94:
								return -1431.005f, -271.0002f, 45.2077f;
							
							case 95:
								return -1966.816f, 182.3251f, 85.7706f;
							
							case 96:
								return -2293.777f, 371.4213f, 173.6017f;
							
							case 97:
								return -2156.688f, 1551.647f, 272.9088f;
							
							case 98:
								return -2780.149f, 1423.379f, 99.9284f;
							
							case 99:
								return -2587.936f, 1930.876f, 166.0052f;
							
							case 100:
								return -3017.571f, 1860.058f, 28.4173f;
							
							case 101:
								return 142.7543f, 1689.097f, 233.0739f;
							
							case 102:
								return 186.6585f, 1162.86f, 224.5946f;
							
							case 103:
								return -461.6094f, 640.4639f, 143.1886f;
							
							case 104:
								return -440.1514f, 184.2777f, 74.2476f;
							
							case 105:
								return -186.476f, 25.015f, 63.554f;
							
							case 106:
								return 26.7096f, -660.0318f, 30.6286f;
							
							case 107:
								return 156.6823f, -565.1396f, 42.893f;
							
							case 108:
								return -1834.908f, -1221.919f, 0.8054f;
							
							case 109:
								return -707.5134f, -1340.225f, -0.0558f;
							
							case 110:
								return -544.5794f, -2580.831f, 0.2096f;
							
							case 111:
								return 103.7708f, -2461.292f, 0.1193f;
							
							case 112:
								return -3046.133f, 1570.539f, -0.3275f;
							
							case 113:
								return -2241.345f, -530.6988f, -0.3275f;
							
							case 114:
								return 44.8316f, 844.4984f, 195.5816f;
							
							case 115:
								return -1894.231f, -2724.314f, -0.3275f;
							
							case 116:
								return -1029.441f, -1778.107f, -0.3275f;
							
							case 117:
								return -95.1061f, -2313.997f, 0.4963f;
							
							case 118:
								return -1546.054f, -1509.913f, 0.409f;
							
							case 119:
								return -1678.194f, -2238.986f, 0.9841f;
							
							default:
						}
						break;
					}
			}
			break;
		
		case 2:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return -1874.714f, 2055.242f, 164.0655f;
							
							case 1:
								return -2398.244f, 2197.323f, 103.0324f;
							
							case 2:
								return -2470.967f, 2693.007f, 16.093f;
							
							case 3:
								return -1417.126f, 2634.235f, 3.8116f;
							
							case 4:
								return -1617.519f, 3185.984f, 52.4819f;
							
							case 5:
								return -1187.536f, 3851.927f, 510.4073f;
							
							case 6:
								return -1243.21f, 4536.333f, 198.2652f;
							
							case 7:
								return -766.5436f, 4335.334f, 181.1521f;
							
							case 8:
								return -515.496f, 4425.549f, 56.3238f;
							
							case 9:
								return -210.6103f, 3651.887f, 80.5153f;
							
							case 10:
								return 90.0834f, 3766.962f, 52.4048f;
							
							case 11:
								return 267.8927f, 2866.58f, 81.5228f;
							
							case 12:
								return 180.018f, 2272.227f, 109.032f;
							
							case 13:
								return -618.2112f, 2031.457f, 238.4183f;
							
							case 14:
								return -1185.328f, 2439.395f, 110.052f;
							
							case 15:
								return -2881.416f, 3363.437f, 44.4458f;
							
							case 16:
								return -2188.789f, 4395.888f, 71.8569f;
							
							case 17:
								return -2166.268f, 5204.997f, 32.4229f;
							
							case 18:
								return 239.3275f, 5576.022f, 610.5799f;
							
							case 19:
								return -549.4456f, 5308.46f, 118.8087f;
							
							case 20:
								return -686.6255f, 5674.634f, 64.1394f;
							
							case 21:
								return 25.1643f, 7643.369f, 32.4106f;
							
							case 22:
								return -162.8882f, 6422.088f, 46.3268f;
							
							case 23:
								return 269.3018f, 5863.51f, 425.1252f;
							
							case 24:
								return 158.6423f, 4622.624f, 213.8925f;
							
							case 25:
								return 31.6062f, 4328.141f, 56.7127f;
							
							case 26:
								return -959.6198f, 4843.202f, 317.838f;
							
							case 27:
								return -1179.401f, 4926.922f, 230.3542f;
							
							case 28:
								return -1801.77f, 4513.373f, 40.2242f;
							
							case 29:
								return -2146.721f, 3964.171f, 111.159f;
							
							case 30:
								return -668.1703f, 3607.985f, 305.8568f;
							
							case 31:
								return -409.327f, 2963.414f, 38.182f;
							
							case 32:
								return -290.9469f, 2533.475f, 92.1749f;
							
							case 33:
								return -3029.401f, 1883.96f, 35.4066f;
							
							case 34:
								return -2597.654f, 1922.071f, 179.5395f;
							
							case 35:
								return 80.7072f, 5032.946f, 490.6172f;
							
							case 36:
								return -899.8328f, 6042.451f, 53.0212f;
							
							case 37:
								return -1576.676f, 5160.763f, 26.8806f;
							
							case 38:
								return 145.5836f, 6866.114f, 38.7097f;
							
							case 39:
								return -50.5306f, 6236.916f, 79.3327f;
							
							case 40:
								return -368.4536f, 6104.72f, 53f;
							
							case 41:
								return -1599.971f, 2104.185f, 80.8163f;
							
							case 42:
								return -1626.487f, 2585.598f, 12.1104f;
							
							case 43:
								return -2064f, 3361.181f, 48.6443f;
							
							case 44:
								return -2357.318f, 3250.916f, 117.4892f;
							
							case 45:
								return -2684.946f, 2304.948f, 39.1557f;
							
							case 46:
								return -772.2781f, 4704.552f, 242.9476f;
							
							case 47:
								return 125.5518f, 3365.379f, 35.8003f;
							
							case 48:
								return -113.0094f, 2803.876f, 67.1096f;
							
							case 49:
								return -179.3538f, 1907.562f, 221.1006f;
							
							case 50:
								return -1235.554f, 1879.036f, 150.8745f;
							
							case 51:
								return 341.9869f, 3569.314f, 63.2875f;
							
							case 52:
								return 391.3682f, 5485.655f, 1000f;
							
							case 53:
								return 311.9317f, 6432.635f, 80.2925f;
							
							case 54:
								return -292.9588f, 5839.533f, 129.366f;
							
							case 55:
								return -1502.468f, 5984.955f, 34.7383f;
							
							case 56:
								return -3449.053f, 2645.437f, 55.2519f;
							
							case 57:
								return -1096.963f, 3225.607f, 147.7444f;
							
							case 58:
								return -278.2971f, 6637.778f, 45.611f;
							
							case 59:
								return 297.8872f, 4013.252f, 33.872f;
							
							case 60:
								return -271.6442f, 5586.137f, 250.6218f;
							
							case 61:
								return -821f, 5419.5f, 58.4f;
							
							case 62:
								return -1734.6f, 3968.5f, 302.8f;
							
							case 63:
								return -2664.1f, 2594f, 3.8f;
							
							case 64:
								return -897.3f, 2797.5f, 28.3f;
							
							case 65:
								return -1158.6f, 4625.5f, 156.7f;
							
							case 66:
								return 618f, 6426.7f, 103.2f;
							
							case 67:
								return 435.1f, 6772.9f, 18.9f;
							
							case 68:
								return -677.8f, 6035f, 27.3f;
							
							case 69:
								return -1445.2f, 5428.6f, 53.5f;
							
							case 70:
								return -384.2f, 4711.1f, 278.4f;
							
							case 71:
								return 911.8f, 4338.1f, 61.8f;
							
							case 72:
								return 518.5f, 5944.8f, 525.2f;
							
							case 73:
								return -1631.5f, 4741.2f, 66.9f;
							
							case 74:
								return -1352.5f, 4147.1f, 125.1f;
							
							case 75:
								return -1138.5f, 2807.2f, 250.4f;
							
							case 76:
								return -540.3f, 4190.5f, 203.6f;
							
							case 77:
								return -166.9f, 4250.2f, 61.7f;
							
							case 78:
								return -88.2f, 4579f, 135.4f;
							
							case 79:
								return -3051.213f, 4178.12f, 72.7681f;
							
							case 80:
								return -2606.26f, 2993.814f, 30.4219f;
							
							case 81:
								return -2302.76f, 2011.211f, 153.3448f;
							
							case 82:
								return -2254.314f, 1680.506f, 298.8981f;
							
							case 83:
								return -1955.917f, 1772.408f, 201.629f;
							
							case 84:
								return -1751.763f, 1998.548f, 129.1121f;
							
							case 85:
								return -1453.889f, 2069.22f, 65.2848f;
							
							case 86:
								return -1479.386f, 2405.98f, 37.5402f;
							
							case 87:
								return -1041.601f, 3963.552f, 344.3259f;
							
							case 88:
								return -775.5471f, 4048.385f, 310.1201f;
							
							case 89:
								return -883.0366f, 4411.045f, 29.2546f;
							
							case 90:
								return -1215.23f, 4370.065f, 38.5217f;
							
							case 91:
								return -1269.523f, 4386.938f, 1000f;
							
							case 92:
								return -1508.03f, 4446.546f, 59.4166f;
							
							case 93:
								return -1449.331f, 4602.479f, 336.1419f;
							
							case 94:
								return -1640.183f, 5440.63f, 43.1539f;
							
							case 95:
								return -891.0049f, 5157.28f, 187.01f;
							
							case 96:
								return 724.7438f, 5251.831f, 586.2138f;
							
							case 97:
								return 537.1121f, 4647.938f, 274.9371f;
							
							case 98:
								return 64.3661f, 4022.363f, 575.3698f;
							
							case 99:
								return 907.8411f, 3627.435f, 53.8748f;
							
							case 100:
								return 591.9018f, 2977.436f, 82.2499f;
							
							case 101:
								return 259.6137f, 1788.459f, 256.6769f;
							
							case 102:
								return -2092.081f, 2518.016f, 800f;
							
							case 103:
								return -2536.684f, 1678.45f, 196.0372f;
							
							case 104:
								return 52.1855f, 7343.64f, 518.5611f;
							
							case 105:
								return -521.5972f, 6960.141f, 172.8203f;
							
							case 106:
								return -684.2739f, 6467.878f, 165.8478f;
							
							case 107:
								return -1060.232f, 5711.063f, 333.8782f;
							
							case 108:
								return -1786.052f, 5471.512f, 614.6761f;
							
							case 109:
								return -1501.189f, 3295.095f, 245.8079f;
							
							case 110:
								return -2149.145f, 3521.295f, 186.103f;
							
							case 111:
								return 887.6612f, 5610.092f, 697.7338f;
							
							case 112:
								return 451.4696f, 5020.989f, 610.8222f;
							
							case 113:
								return 693.6552f, 4097.276f, 53.8927f;
							
							case 114:
								return -99.6831f, 3960.636f, 80.8691f;
							
							case 115:
								return -579.6645f, 3979.675f, 136.2872f;
							
							case 116:
								return -996.2939f, 4194.288f, 151.0646f;
							
							case 117:
								return -1542.398f, 2886.044f, 1000f;
							
							case 118:
								return -3004.988f, 2333.1f, 209.9484f;
							
							case 119:
								return -3622.204f, 4740.62f, 19.17f;
							
							default:
						}
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return -2200.786f, 3429.213f, 31.6018f;
							
							case 1:
								return -1873.915f, 2090.595f, 139.9944f;
							
							case 2:
								return -1674.252f, 2301.497f, 59.0047f;
							
							case 3:
								return -506.3776f, 4358.938f, 66.4342f;
							
							case 4:
								return -83.7414f, 4580.993f, 122.1646f;
							
							case 5:
								return -207.3853f, 3598.517f, 60.323f;
							
							case 6:
								return 233.0533f, 3547.927f, 30.2697f;
							
							case 7:
								return 93.7029f, 3597.86f, 38.7393f;
							
							case 8:
								return 327f, 2858f, 42.4386f;
							
							case 9:
								return 158.1294f, 3136.305f, 42.4573f;
							
							case 10:
								return -210.5036f, 2955.358f, 28.941f;
							
							case 11:
								return -288.922f, 2524.722f, 73.6685f;
							
							case 12:
								return -734.5254f, 5594.983f, 34.288f;
							
							case 13:
								return 88.2503f, 6368.129f, 30.2271f;
							
							case 14:
								return -344.4945f, 6242.846f, 30.4877f;
							
							case 15:
								return -267.3751f, 6639.444f, 6.3939f;
							
							case 16:
								return -1444.47f, 5418.419f, 22.2866f;
							
							case 17:
								return -1611.041f, 5258.685f, 2.9791f;
							
							case 18:
								return -1823.203f, 4464.67f, 37.4717f;
							
							case 19:
								return -2488.111f, 2740.839f, 1.8909f;
							
							case 20:
								return -1626.549f, 2587.924f, 1.6362f;
							
							case 21:
								return -1575.299f, 2105.205f, 66.0545f;
							
							case 22:
								return -543.6063f, 1983.754f, 126.0263f;
							
							case 23:
								return -563.8864f, 1886.811f, 122.0349f;
							
							case 24:
								return -592.4536f, 2076.64f, 130.3709f;
							
							case 25:
								return -2497.361f, 2307.194f, 33.1315f;
							
							case 26:
								return -2584.923f, 1931.11f, 166.3129f;
							
							case 27:
								return -1618.161f, 3184.126f, 31.8513f;
							
							case 28:
								return -913.2203f, 2562.701f, 57.2099f;
							
							case 29:
								return -1163.923f, 2408.993f, 92.402f;
							
							case 30:
								return 188.3494f, 2295.03f, 92.7443f;
							
							case 31:
								return -96.8265f, 2224.75f, 159.4986f;
							
							case 32:
								return -834.779f, 4178.558f, 214.3525f;
							
							case 33:
								return -790.3221f, 2901.125f, 18.2471f;
							
							case 34:
								return -799.6998f, 3478.014f, 172.9345f;
							
							case 35:
								return -1347.726f, 4127.416f, 61.6295f;
							
							case 36:
								return -1364.709f, 4848.779f, 144.9459f;
							
							case 37:
								return -2168.336f, 5186.728f, 14.9725f;
							
							case 38:
								return -987.1982f, 5075.115f, 186.5395f;
							
							case 39:
								return 231.926f, 5246.831f, 601.2042f;
							
							case 40:
								return -1.0985f, 5029.458f, 446.6905f;
							
							case 41:
								return -134.3454f, 4916.509f, 353.0826f;
							
							case 42:
								return -434.7882f, 4885.861f, 189.7331f;
							
							case 43:
								return -592.1419f, 5361.79f, 69.3186f;
							
							case 44:
								return 64.7121f, 7052.296f, 15.7854f;
							
							case 45:
								return -577.7616f, 5954.945f, 25.1362f;
							
							case 46:
								return -945.8056f, 4613.758f, 238.1628f;
							
							case 47:
								return -2228.817f, 4218.248f, 45.7951f;
							
							case 48:
								return -2493.361f, 4193.219f, 1.0754f;
							
							case 49:
								return -3073.088f, 3200.413f, 0.9527f;
							
							case 50:
								return 376.4925f, 6630.836f, 27.7626f;
							
							case 51:
								return -1692.925f, 4597.169f, 46.8227f;
							
							case 52:
								return -2587.798f, 3193.551f, 12.9622f;
							
							case 53:
								return -922.5162f, 6131.097f, 6.1891f;
							
							case 54:
								return -112.5477f, 7285.785f, 16.1674f;
							
							case 55:
								return -170.1744f, 6049.716f, 30.1726f;
							
							case 56:
								return 57.7188f, 6673.076f, 30.9499f;
							
							case 57:
								return -501.3606f, 5567.93f, 70.0852f;
							
							case 58:
								return -292.4363f, 5839.495f, 120.8191f;
							
							case 59:
								return -436.1143f, 5707.903f, 61.0179f;
							
							case 60:
								return -494.1112f, 5290.479f, 79.6187f;
							
							case 61:
								return -421.0542f, 5187.812f, 122.5195f;
							
							case 62:
								return -835.7191f, 5261.788f, 79.1947f;
							
							case 63:
								return -873.3408f, 4786.007f, 299.4599f;
							
							case 64:
								return -299.7797f, 4676.5f, 245.6817f;
							
							case 65:
								return -903.4214f, 5176.086f, 153.3577f;
							
							case 66:
								return -869.6852f, 5553.71f, 1.4216f;
							
							case 67:
								return -1210.241f, 5228.673f, 88.4579f;
							
							case 68:
								return -1224.511f, 3854.173f, 488.3926f;
							
							case 69:
								return -688.3312f, 3764.984f, 272.5302f;
							
							case 70:
								return -1829.375f, 3982.997f, 271.9911f;
							
							case 71:
								return -2432.337f, 3535.94f, 33.3233f;
							
							case 72:
								return -1440.526f, 5106.688f, 62.4016f;
							
							case 73:
								return -2258.899f, 3831.759f, 118.1093f;
							
							case 74:
								return -1577.494f, 5162.519f, 18.6627f;
							
							case 75:
								return -2046.334f, 4525.601f, 27.6239f;
							
							case 76:
								return -2189.855f, 4616.937f, 0.5382f;
							
							case 77:
								return 423.4926f, 5613.09f, 765.7494f;
							
							case 78:
								return 501.2704f, 5598.329f, 795.0286f;
							
							case 79:
								return 625.9471f, 5675.894f, 747.5628f;
							
							case 80:
								return -555.5328f, 5321.449f, 72.5996f;
							
							case 81:
								return -685.9285f, 5233.738f, 92.4703f;
							
							case 82:
								return -213.783f, 6348.989f, 30.5355f;
							
							case 83:
								return -391.0858f, 6341.175f, 25.425f;
							
							case 84:
								return 0.9189f, 3691.594f, 38.5039f;
							
							case 85:
								return -225.4021f, 3664.75f, 63.4125f;
							
							case 86:
								return 714.1616f, 4136.578f, 34.7842f;
							
							case 87:
								return 825.1304f, 4223.49f, 50.8188f;
							
							case 88:
								return 858.3134f, 4423.847f, 30.2196f;
							
							case 89:
								return 335.1393f, 4373.471f, 63.3434f;
							
							case 90:
								return -1474.287f, 2687.972f, 16.6437f;
							
							case 91:
								return -1183.146f, 4927.809f, 222.0748f;
							
							case 92:
								return -892.4783f, 4529.449f, 113.9803f;
							
							case 93:
								return 761.0254f, 6455.407f, 30.7286f;
							
							case 94:
								return 370.5299f, 5453.183f, 691.2834f;
							
							case 95:
								return -376.5987f, 3840.778f, 73.9626f;
							
							case 96:
								return -2077.635f, 3390.068f, 30.1962f;
							
							case 97:
								return -2317.722f, 3398.114f, 29.7812f;
							
							case 98:
								return -2686.153f, 3554.439f, 1.0289f;
							
							case 99:
								return -1869.387f, 4649.492f, 56.0019f;
							
							case 100:
								return -1854.183f, 4809.846f, 1.9984f;
							
							case 101:
								return -683.5417f, 5823.635f, 16.3313f;
							
							case 102:
								return -790.6581f, 5479.023f, 25.889f;
							
							case 103:
								return 482.4343f, 6486.61f, 29.0864f;
							
							case 104:
								return 183.3372f, 7008.858f, 11.2392f;
							
							case 105:
								return 50.2346f, 4325.231f, 43.3996f;
							
							case 106:
								return -28.0941f, 4430.794f, 57.1619f;
							
							case 107:
								return -187.3603f, 4019.421f, 30.6801f;
							
							case 108:
								return -1804.935f, 5315.242f, 0.8688f;
							
							case 109:
								return 81.2546f, 4050.058f, 29.4f;
							
							case 110:
								return -1191.056f, 4389.15f, 4.3f;
							
							case 111:
								return -2188.334f, 2590.943f, -0.4f;
							
							case 112:
								return -2825.633f, 2358.091f, 0.5703f;
							
							case 113:
								return -2047.696f, 4852.304f, 0.6241f;
							
							case 114:
								return -2664.615f, 2597.589f, -0.4f;
							
							case 115:
								return 271.9201f, 7512.879f, -0.5084f;
							
							case 116:
								return -215.5849f, 4284.967f, 29.5257f;
							
							case 117:
								return -2879.157f, 2879.604f, 0.4205f;
							
							case 118:
								return -920.2339f, 5871.843f, 0.4382f;
							
							case 119:
								return -34.7086f, 7618.572f, 0.4933f;
							
							default:
						}
						break;
					}
			}
			break;
		
		case 3:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return 867.3339f, 4198.743f, 75f;
							
							case 1:
								return 1254.176f, 4848.075f, 247.0701f;
							
							case 2:
								return 1676.777f, 5140.256f, 160.2494f;
							
							case 3:
								return 1995.339f, 5021.67f, 68.695f;
							
							case 4:
								return 2599.952f, 5032.021f, 112.432f;
							
							case 5:
								return 2967.309f, 5197.417f, 148.5921f;
							
							case 6:
								return 2876.992f, 5911.252f, 378.2234f;
							
							case 7:
								return 3438.904f, 6144.417f, 10.0202f;
							
							case 8:
								return 3431.106f, 5174.187f, 46.1572f;
							
							case 9:
								return 4080.091f, 4476.533f, 17.0407f;
							
							case 10:
								return 3492.801f, 4619.894f, 65f;
							
							case 11:
								return 3378.036f, 4079.524f, 229.1767f;
							
							case 12:
								return 3944.403f, 3729.657f, 19.5046f;
							
							case 13:
								return 3556.383f, 3684.987f, 67.2346f;
							
							case 14:
								return 3296.121f, 3365.198f, 125f;
							
							case 15:
								return 3290f, 3140.437f, 275.7202f;
							
							case 16:
								return 2948.726f, 2791.748f, 48.6755f;
							
							case 17:
								return 1597.427f, 2599.171f, 95f;
							
							case 18:
								return 1397.009f, 2116.503f, 137.1597f;
							
							case 19:
								return 723.7358f, 2322.695f, 64.6875f;
							
							case 20:
								return 753.2642f, 2581.414f, 161f;
							
							case 21:
								return 564.4257f, 3392.354f, 96.1353f;
							
							case 22:
								return 1191.005f, 3400.265f, 78.9779f;
							
							case 23:
								return 1279.739f, 3100.26f, 53.8507f;
							
							case 24:
								return 1415.487f, 3833.477f, 52.6619f;
							
							case 25:
								return 1488.657f, 3946.224f, 305.2148f;
							
							case 26:
								return 2065.697f, 6451.615f, 149.8928f;
							
							case 27:
								return 2559.717f, 6155.792f, 171f;
							
							case 28:
								return 1502.546f, 6159.08f, 230.8224f;
							
							case 29:
								return 1163.891f, 5965.097f, 413.3012f;
							
							case 30:
								return 772.3428f, 5523.894f, 600f;
							
							case 31:
								return 501.8089f, 5604.274f, 1000.598f;
							
							case 32:
								return 1002.141f, 4786.271f, 185.7696f;
							
							case 33:
								return 587.414f, 5114.912f, 405f;
							
							case 34:
								return 1345.87f, 6384.963f, 52.4688f;
							
							case 35:
								return 754.4042f, 6466f, 49f;
							
							case 36:
								return 1042.216f, 6799.529f, 40.2945f;
							
							case 37:
								return 1779.115f, 5662.172f, 274f;
							
							case 38:
								return 2898.098f, 4327.457f, 107.9208f;
							
							case 39:
								return 2634.35f, 3661.461f, 111.1731f;
							
							case 40:
								return 2045.418f, 3429.524f, 56.3868f;
							
							case 41:
								return 1563.065f, 3572.822f, 41f;
							
							case 42:
								return 2276.492f, 1955.542f, 146.9525f;
							
							case 43:
								return 2379.747f, 2604.982f, 89.7836f;
							
							case 44:
								return 543.5116f, 3080.709f, 63f;
							
							case 45:
								return 2264.604f, 4455.955f, 62.2539f;
							
							case 46:
								return 2410.187f, 2908.336f, 373.9144f;
							
							case 47:
								return 3510.479f, 2569.052f, 16.1615f;
							
							case 48:
								return 3073.721f, 2084.079f, 30f;
							
							case 49:
								return 3319.34f, 2272.217f, 14.2949f;
							
							case 50:
								return 2822.12f, 4977.335f, 70f;
							
							case 51:
								return 1299.971f, 4219.281f, 41f;
							
							case 52:
								return 503.1913f, 4450.17f, 112f;
							
							case 53:
								return 2489.62f, 3760.053f, 53f;
							
							case 54:
								return 1824.499f, 2031.218f, 60.1953f;
							
							case 55:
								return 1153.765f, 2384.4f, 75.2003f;
							
							case 56:
								return 1339.664f, 2747.617f, 79.0765f;
							
							case 57:
								return 542.5154f, 2488.194f, 84.9932f;
							
							case 58:
								return 2767.542f, 2047.162f, 126.1494f;
							
							case 59:
								return 2061.36f, 3941.451f, 200f;
							
							case 60:
								return 873.5367f, 2867.737f, 73.5925f;
							
							case 61:
								return 1752.141f, 3052.542f, 78.6478f;
							
							case 62:
								return 2100.787f, 2339.885f, 133.921f;
							
							case 63:
								return 2738.826f, 3476.466f, 81.564f;
							
							case 64:
								return 2285.089f, 3289.129f, 86.2814f;
							
							case 65:
								return 1745.899f, 3756.127f, 53.8457f;
							
							case 66:
								return 2504.338f, 4418.758f, 55f;
							
							case 67:
								return 1552.003f, 2186.406f, 96f;
							
							case 68:
								return 2716.376f, 4132.656f, 63.7827f;
							
							case 69:
								return 3809.813f, 4462.08f, 36.1286f;
							
							case 70:
								return 3257.82f, 4308.541f, 140f;
							
							case 71:
								return 2268.876f, 5381.432f, 328.4639f;
							
							case 72:
								return 2236.389f, 5604.683f, 71.034f;
							
							case 73:
								return 1986.657f, 6201.739f, 66.4804f;
							
							case 74:
								return 3356.059f, 5696.29f, 20f;
							
							case 75:
								return 2457.263f, 6684.452f, 63.14f;
							
							case 76:
								return 1914.983f, 6702.233f, 14.7976f;
							
							case 77:
								return 2149.811f, 3844.999f, 88.0922f;
							
							case 78:
								return 1880.169f, 4244.354f, 80.3363f;
							
							case 79:
								return 1791.897f, 4595.955f, 48.6224f;
							
							case 80:
								return 1181.133f, 5151.417f, 772.3138f;
							
							case 81:
								return 431.2495f, 4768.536f, 665.041f;
							
							case 82:
								return 1410.651f, 6569.377f, 26.5039f;
							
							case 83:
								return 1522.466f, 6617.973f, 8f;
							
							case 84:
								return 2316.162f, 6378.738f, 143.7605f;
							
							case 85:
								return 3127.772f, 5566.866f, 317.7646f;
							
							case 86:
								return 3684.367f, 4916.152f, 618.67f;
							
							case 87:
								return 3941.761f, 4652.369f, 92.7624f;
							
							case 88:
								return 3900.581f, 4262.104f, 887.18f;
							
							case 89:
								return 3535.166f, 3778.242f, 46.4187f;
							
							case 90:
								return 3638.854f, 3108.953f, 8.7037f;
							
							case 91:
								return 931.8565f, 2446.375f, 59f;
							
							case 92:
								return 1052.214f, 2277.729f, 95.5547f;
							
							case 93:
								return 411.0964f, 4298.822f, 40.8556f;
							
							case 94:
								return 970.339f, 5647.13f, 650.7467f;
							
							case 95:
								return 2137.105f, 4785.519f, 59.9326f;
							
							case 96:
								return 2333.533f, 4801.554f, 467.9726f;
							
							case 97:
								return 2800.744f, 4745.392f, 370.3547f;
							
							case 98:
								return 2721.061f, 1556.416f, 101.1161f;
							
							case 99:
								return 1855.284f, 1600.665f, 116.8989f;
							
							case 100:
								return 1623.469f, 1518.122f, 294.3194f;
							
							case 101:
								return 923.4011f, 1635.348f, 218.3212f;
							
							case 102:
								return 829.6124f, 1892.871f, 135.5203f;
							
							case 103:
								return 1294.051f, 5675.865f, 472.5645f;
							
							case 104:
								return 1716.85f, 6416.637f, 81.5075f;
							
							case 105:
								return 2140.929f, 5892.89f, 161.9607f;
							
							case 106:
								return 1604.4f, 5793.905f, 429.8526f;
							
							case 107:
								return 1589.65f, 4160.215f, 883.122f;
							
							case 108:
								return 2191.156f, 4208.336f, 477.8802f;
							
							case 109:
								return 1427.64f, 4515.944f, 85.3721f;
							
							case 110:
								return 1206.398f, 4546.814f, 83.0875f;
							
							case 111:
								return 222.2962f, 4746.207f, 280.8666f;
							
							case 112:
								return 287.655f, 5361.114f, 659.2646f;
							
							case 113:
								return 194.6948f, 7393.709f, 1000f;
							
							case 114:
								return 469.5136f, 6745.105f, 14.1624f;
							
							case 115:
								return 537.5068f, 6663.253f, 447.8182f;
							
							case 116:
								return 3227.793f, 6940.11f, 111.4631f;
							
							case 117:
								return 3614.231f, 5883.145f, 9.5207f;
							
							case 118:
								return 3010.254f, 5697.739f, 463.4349f;
							
							case 119:
								return 2874.324f, 6196.489f, 1000f;
							
							default:
						}
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return 1581.963f, 2200.244f, 78.0226f;
							
							case 1:
								return 1104.104f, 2399.396f, 53.529f;
							
							case 2:
								return 1089.489f, 2132.943f, 57.0757f;
							
							case 3:
								return 932.5687f, 2434.264f, 49.6778f;
							
							case 4:
								return 586.3744f, 2935.313f, 39.9577f;
							
							case 5:
								return 437.5278f, 3537.285f, 32.3159f;
							
							case 6:
								return 917.2156f, 3648.117f, 35.1053f;
							
							case 7:
								return 1528.585f, 3916.301f, 30.6709f;
							
							case 8:
								return 1924.4f, 3468.064f, 50.6772f;
							
							case 9:
								return 2482.272f, 3761.54f, 40.6483f;
							
							case 10:
								return 2722.307f, 2895.323f, 46.873f;
							
							case 11:
								return 3021.258f, 2881.75f, 85.959f;
							
							case 12:
								return 2096.643f, 2504.604f, 89.6423f;
							
							case 13:
								return 2974.657f, 3485.959f, 70.4429f;
							
							case 14:
								return 3390.08f, 3704.603f, 34.9975f;
							
							case 15:
								return 2908.214f, 4342.968f, 49.3031f;
							
							case 16:
								return 1796.101f, 4920.626f, 47.3851f;
							
							case 17:
								return 2241.987f, 5382.81f, 144.0017f;
							
							case 18:
								return 2218.899f, 5946.263f, 49.634f;
							
							case 19:
								return 1601.463f, 6624.76f, 14.7707f;
							
							case 20:
								return 1406.928f, 6568.621f, 19.3763f;
							
							case 21:
								return 439.5467f, 6459.866f, 34.8699f;
							
							case 22:
								return 1503.687f, 6360.855f, 15.6193f;
							
							case 23:
								return 3316.647f, 5190.359f, 17.4152f;
							
							case 24:
								return 3632.89f, 5003.482f, 11.6053f;
							
							case 25:
								return 3057.659f, 5064.144f, 17.7153f;
							
							case 26:
								return 2822.534f, 4978.232f, 62.4826f;
							
							case 27:
								return 3930.095f, 4399.015f, 15.6116f;
							
							case 28:
								return 3859.284f, 4226.905f, 2.7151f;
							
							case 29:
								return 3692.684f, 4570.595f, 24.1191f;
							
							case 30:
								return 1830.916f, 2542.005f, 44.8856f;
							
							case 31:
								return 2424.308f, 3131.437f, 47.2055f;
							
							case 32:
								return 1340.228f, 2988.934f, 45.0809f;
							
							case 33:
								return 817.1245f, 3379.468f, 76.9467f;
							
							case 34:
								return 563.2202f, 2456.984f, 58.1331f;
							
							case 35:
								return 2041.713f, 2002.479f, 84.9881f;
							
							case 36:
								return 2431.854f, 1986.869f, 82.1812f;
							
							case 37:
								return 1190.872f, 3401.189f, 67.3338f;
							
							case 38:
								return 1943.983f, 3817.853f, 31.0619f;
							
							case 39:
								return 1977.679f, 3054.874f, 49.3235f;
							
							case 40:
								return 452.5827f, 5587.175f, 780.1891f;
							
							case 41:
								return 807.1406f, 5701.082f, 696.9146f;
							
							case 42:
								return 1600.868f, 5804.83f, 414.5815f;
							
							case 43:
								return 1412.016f, 5558.528f, 459.5185f;
							
							case 44:
								return 2279.983f, 5788.728f, 154.1637f;
							
							case 45:
								return 2346.173f, 4997.547f, 41.5868f;
							
							case 46:
								return 2391.918f, 4296.647f, 34.1954f;
							
							case 47:
								return 1364.943f, 4385.975f, 43.3491f;
							
							case 48:
								return 998.6568f, 4453.989f, 59.924f;
							
							case 49:
								return 1058.949f, 4219.405f, 34.273f;
							
							case 50:
								return 870.7486f, 6627.962f, 1.1131f;
							
							case 51:
								return 2721.632f, 4513.5f, 41.1966f;
							
							case 52:
								return 1219.444f, 2744.531f, 37.0054f;
							
							case 53:
								return 2564.32f, 2578.493f, 36.9367f;
							
							case 54:
								return 2827.744f, 5963.866f, 350.6364f;
							
							case 55:
								return 2946.397f, 5326.474f, 100.269f;
							
							case 56:
								return 2211.154f, 3593.324f, 55.1756f;
							
							case 57:
								return 3079.837f, 6027.145f, 129.2854f;
							
							case 58:
								return 3345.3f, 5555.332f, 17.907f;
							
							case 59:
								return 528.5965f, 3092.785f, 39.4652f;
							
							case 60:
								return 2184.891f, 3724.368f, 37.4901f;
							
							case 61:
								return 1471.091f, 4948.712f, 75.0594f;
							
							case 62:
								return 2713.996f, 4141.762f, 42.8723f;
							
							case 63:
								return 2476.558f, 5783.607f, 68.702f;
							
							case 64:
								return 2647.75f, 3281.402f, 54.2127f;
							
							case 65:
								return 2210.976f, 5610.793f, 52.8602f;
							
							case 66:
								return 2898.328f, 2389.586f, 170.4231f;
							
							case 67:
								return 2728.33f, 2616.292f, 95.3074f;
							
							case 68:
								return 1844.478f, 4591.953f, 29.6629f;
							
							case 69:
								return 2432.128f, 4616.881f, 28.1137f;
							
							case 70:
								return 2574.294f, 4653.86f, 33.0768f;
							
							case 71:
								return 1574.009f, 3591.066f, 34.3615f;
							
							case 72:
								return 2008.265f, 4986.431f, 40.3378f;
							
							case 73:
								return 1975.059f, 5182.086f, 46.8906f;
							
							case 74:
								return 1955.895f, 4620.182f, 39.6384f;
							
							case 75:
								return 2279.756f, 4846.217f, 39.2283f;
							
							case 76:
								return 2418.292f, 4784.674f, 33.6784f;
							
							case 77:
								return 2005.109f, 3765.983f, 31.1808f;
							
							case 78:
								return 1719.677f, 3692.743f, 33.513f;
							
							case 79:
								return 1530.711f, 3076.231f, 39.9815f;
							
							case 80:
								return 1686.366f, 3301.007f, 40.1368f;
							
							case 81:
								return 3481.603f, 3740.488f, 35.6427f;
							
							case 82:
								return 2392.425f, 3334.924f, 46.3672f;
							
							case 83:
								return 2192.154f, 3168.942f, 50.5572f;
							
							case 84:
								return 2354.496f, 2577.063f, 45.6677f;
							
							case 85:
								return 640.7736f, 2777.938f, 40.9601f;
							
							case 86:
								return 2768.528f, 1701.819f, 23.6943f;
							
							case 87:
								return 3239.663f, 3501.223f, 67.723f;
							
							case 88:
								return 2672.952f, 3516.45f, 51.712f;
							
							case 89:
								return 2619.962f, 3661.864f, 100.2808f;
							
							case 90:
								return 2437.504f, 4069.23f, 37.0001f;
							
							case 91:
								return 1685.598f, 6435.691f, 31.3515f;
							
							case 92:
								return 1417.653f, 3818.394f, 31.1351f;
							
							case 93:
								return 3300.7f, 5941.647f, 93.3217f;
							
							case 94:
								return 870.0084f, 2870.564f, 55.9249f;
							
							case 95:
								return 1352.413f, 6401.655f, 32.4101f;
							
							case 96:
								return 1960.858f, 5376.274f, 185.2074f;
							
							case 97:
								return 1974.847f, 6219.958f, 41.2546f;
							
							case 98:
								return 3684.152f, 3795.969f, 15.0641f;
							
							case 99:
								return 2625.796f, 2809.979f, 32.439f;
							
							case 100:
								return 1302.932f, 4234.541f, 32.9137f;
							
							case 101:
								return 577.5187f, 4169.561f, 37.8946f;
							
							case 102:
								return 1069.311f, 2259.363f, 43.4741f;
							
							case 103:
								return 1381.487f, 3633.717f, 34.0073f;
							
							case 104:
								return 3046.249f, 6219.229f, 111.0105f;
							
							case 105:
								return 985.3563f, 5642.3f, 627.7075f;
							
							case 106:
								return 2504.378f, 5178.088f, 67.6632f;
							
							case 107:
								return 2537.341f, 4476.488f, 36.1789f;
							
							case 108:
								return 1291.73f, 4112.564f, 29.6645f;
							
							case 109:
								return 2176.232f, 4605.335f, 29.194f;
							
							case 110:
								return 3456.624f, 5135.376f, -0.3837f;
							
							case 111:
								return 4054.226f, 4518.386f, 0.4f;
							
							case 112:
								return 1074.313f, 6738.594f, 1.3817f;
							
							case 113:
								return 409.7385f, 4290.737f, 29.5f;
							
							case 114:
								return 2551.275f, 6151.57f, 161.1609f;
							
							case 115:
								return 3646.335f, 2977.049f, 0.6928f;
							
							case 116:
								return 1938.372f, 4287.003f, 29.6693f;
							
							case 117:
								return 3630.215f, 5625.841f, 1.2201f;
							
							case 118:
								return 1582.613f, 6753.431f, 0.4436f;
							
							case 119:
								return 3449.314f, 2677.52f, 0.0895f;
							
							default:
						}
						break;
					}
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_102(var uParam0)//Position - 0x8552
{
	vector3 vVar0;
	int iVar1;
	
	vVar0.x = -2008494047;
	vVar0.y = unk_0xB5CEFD608600A09F();
	vVar0.z = uParam0;
	iVar1 = func_103(1, 1);
	if (!iVar1 == 0)
	{
		unk_0x38E776D9FA75679B(1, &vVar0, 3, iVar1);
	}
}

var func_103(int iParam0, bool bParam1)//Position - 0x858C
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x3171C34AB3FE6F2E(iVar1);
		if (func_13(iVar2, 0, 0))
		{
			if (iVar2 != unk_0xB5CEFD608600A09F() || iParam0)
			{
				if (bParam1)
				{
					unk_0xF0059F27F7BB6680(&uVar0, iVar1);
				}
				else if (!func_85(iVar2, 0))
				{
					unk_0xF0059F27F7BB6680(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_104(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x85F1
{
	switch (iParam0)
	{
		case 136:
		case 139:
		case 141:
		case 133:
		case 138:
		case 144:
		case 236:
			return iParam1;
		
		case 132:
			switch (iParam2)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						case 3:
							return 3;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						case 1:
							return 5;
						
						case 2:
							return 6;
						
						case 3:
							return 7;
						
						default:
					}
					break;
			}
			break;
		
		case 131:
			switch (iParam3)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 0;
								
								case 1:
									return 1;
								
								case 2:
									return 2;
								
								case 3:
									return 3;
								
								case 4:
									return 4;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									return 5;
								
								case 1:
									return 6;
								
								case 2:
									return 7;
								
								case 3:
									return 8;
								
								case 4:
									return 9;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									return 10;
								
								case 1:
									return 11;
								
								case 2:
									return 12;
								
								case 3:
									return 13;
								
								case 4:
									return 14;
								
								default:
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 0:
									return 15;
								
								case 1:
									return 16;
								
								case 2:
									return 17;
								
								case 3:
									return 18;
								
								case 4:
									return 19;
								
								default:
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 0:
									return 20;
								
								case 1:
									return 21;
								
								case 2:
									return 22;
								
								case 3:
									return 24;
								
								case 4:
									return 25;
								
								default:
							}
							break;
						
						case 5:
							switch (iParam2)
							{
								case 0:
									return 26;
								
								case 1:
									return 27;
								
								case 2:
									return 28;
								
								case 3:
									return 29;
								
								case 4:
									return 30;
								
								default:
							}
							break;
						
						case 6:
							switch (iParam2)
							{
								case 0:
									return 31;
								
								case 1:
									return 32;
								
								case 2:
									return 33;
								
								case 3:
									return 34;
								
								case 4:
									return 35;
								
								default:
							}
							break;
					}
					break;
				
				case 1:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 0;
								
								case 1:
									return 1;
								
								case 2:
									return 2;
								
								case 3:
									return 3;
								
								case 4:
									return 4;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									return 5;
								
								case 1:
									return 6;
								
								case 2:
									return 7;
								
								case 3:
									return 8;
								
								case 4:
									return 9;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									return 10;
								
								case 1:
									return 11;
								
								case 2:
									return 12;
								
								case 3:
									return 13;
								
								case 4:
									return 14;
								
								default:
							}
							break;
					}
					break;
				
				case 2:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 41;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 1:
									return 42;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 2:
									return 43;
								
								default:
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 3:
									return 44;
								
								default:
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 4:
									return 45;
								
								default:
							}
							break;
					}
					break;
			}
			break;
		
		case 129:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						case 3:
							return 3;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						case 1:
							return 5;
						
						case 2:
							return 6;
						
						case 3:
							return 7;
						
						case 4:
							return 8;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 12;
						
						case 1:
							return 13;
						
						case 2:
							return 14;
						
						case 3:
							return 15;
						
						case 4:
							return 16;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 17;
						
						case 1:
							return 18;
						
						case 2:
							return 19;
						
						case 3:
							return 20;
						
						case 4:
							return 21;
						
						default:
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 0:
							return 22;
						
						case 1:
							return 24;
						
						case 2:
							return 25;
						
						case 3:
							return 26;
						
						default:
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							return 27;
						
						case 1:
							return 28;
						
						case 2:
							return 29;
						
						default:
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							return 30;
						
						case 1:
							return 31;
						
						case 2:
							return 32;
						
						default:
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 0:
							return 33;
						
						case 1:
							return 34;
						
						case 2:
							return 35;
						
						case 3:
							return 36;
						
						default:
					}
					break;
				
				case 9:
					switch (iParam2)
					{
						case 0:
							return 37;
						
						case 1:
							return 38;
						
						case 2:
							return 39;
						
						case 3:
							return 40;
						
						default:
					}
					break;
			}
			break;
		
		case 140:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 4;
						
						case 2:
							return 5;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						case 1:
							return 7;
						
						case 2:
							return 8;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 12;
						
						case 1:
							return 13;
						
						case 2:
							return 14;
						
						default:
					}
					break;
			}
			break;
		
		case 146:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 4;
						
						case 2:
							return 5;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						case 1:
							return 7;
						
						case 2:
							return 8;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
			}
			break;
	}
	return -1;
}

int func_105()//Position - 0x8E56
{
	return unk_0x491B2241281A03B7(0, 1);
}

bool func_106()//Position - 0x8E64
{
	if (func_108(Local_144.f_2C8))
	{
		return 0;
	}
	else if (func_107(Local_144.f_2C8))
	{
		return 1;
	}
	return unk_0x491B2241281A03B7(0, 2) == 1;
}

int func_107(int iParam0)//Position - 0x8E99
{
	switch (iParam0)
	{
		case 0:
			return (Global_40001.f_2912 || Global_40001.f_290A);
		
		case 1:
			return (Global_40001.f_2911 || Global_40001.f_290A);
		
		case 2:
			return (Global_40001.f_290F || Global_40001.f_290A);
		
		case 3:
			return (Global_40001.f_2910 || Global_40001.f_290A);
		
		default:
	}
	return 0;
}

int func_108(int iParam0)//Position - 0x8F1D
{
	switch (iParam0)
	{
		case 0:
			return (Global_40001.f_290E || Global_40001.f_2909);
		
		case 1:
			return (Global_40001.f_290D || Global_40001.f_2909);
		
		case 2:
			return (Global_40001.f_290B || Global_40001.f_2909);
		
		case 3:
			return (Global_40001.f_290C || Global_40001.f_2909);
		
		default:
	}
	return 0;
}

int func_109()//Position - 0x8FA1
{
	var uVar0[4];
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iLocal_119 = 1;
	switch (iLocal_119)
	{
		case 0:
			return unk_0x491B2241281A03B7(0, 4);
			break;
		
		case 1:
			iVar1 = func_110(&uVar0);
			iVar2 = unk_0x491B2241281A03B7(0, iVar1);
			iVar3 = 0;
			while (iVar3 < 4)
			{
				if (iVar2 >= iVar4 && iVar2 < (uVar0[iVar3] + iVar4))
				{
					return iVar3;
				}
				iVar4 = (iVar4 + uVar0[iVar3]);
				iVar3++;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			break;
	}
	return unk_0x491B2241281A03B7(0, 4);
}

int func_110(var uParam0)//Position - 0x9039
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar4 = true;
	iVar0 = 0;
	while (iVar0 < unk_0x81C86888AEA2F49B())
	{
		if (unk_0x05086B70D2CFEA6F(unk_0xCFA8A401AAD7BB5A(iVar0)))
		{
			iVar6 = unk_0x4ED43B67B3F05E0F(unk_0xCFA8A401AAD7BB5A(iVar0));
			if (func_13(iVar6, 1, 1))
			{
				iVar7 = unk_0xA95CF30C72EB526E(iVar6);
				if (!unk_0x36CEFBE9B745A58D(iVar7))
				{
					iVar5 = 0;
					while (iVar5 < 4)
					{
						if (!func_112(iVar5))
						{
							if (func_111(iVar5, &vVar2, &vVar3))
							{
								if (unk_0xEDE30398504C632A(iVar7, vVar2, vVar3, 0, 0, 0))
								{
									bVar4 = false;
									(*uParam0)[iVar5]++;
									iVar1++;
								}
							}
						}
						iVar5++;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar4)
	{
		iVar5 = 0;
		while (iVar5 < 4)
		{
			if (!func_112(iVar5))
			{
				(*uParam0)[iVar5] = 1;
			}
			iVar5++;
		}
	}
	return iVar1;
}

int func_111(int iParam0, var uParam1, var uParam2)//Position - 0x910D
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 283f, -3946f, 0f };
			*uParam2 = { 4500f, 1924f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { -3747f, -3946f, 0f };
			*uParam2 = { 550f, 1868f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { -3747f, 1540f, 0f };
			*uParam2 = { 452.5f, 8022f, 0f };
			return 1;
		
		case 3:
			*uParam1 = { 268f, 1946f, 0f };
			*uParam2 = { 4500f, 8022f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

bool func_112(int iParam0)//Position - 0x91BD
{
	return (func_108(iParam0) && func_107(iParam0));
}

var func_113()//Position - 0x91D6
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < unk_0x81C86888AEA2F49B())
	{
		iVar2 = unk_0xCFA8A401AAD7BB5A(iVar0);
		if (unk_0x05086B70D2CFEA6F(iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= Global_40001.f_2917)
	{
		return Global_40001.f_28A5;
	}
	if (iVar1 >= Global_40001.f_2916)
	{
		return Global_40001.f_28A4;
	}
	if (iVar1 >= Global_40001.f_2915)
	{
		return Global_40001.f_2570;
	}
	return Global_40001.f_2570;
}

void func_114()//Position - 0x925C
{
	int iVar0;
	
	if (func_32())
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (Local_144.f_2C9[iVar0] == unk_0x6BAA0516CC970D99())
			{
				if (func_115(iVar0))
				{
					if (!unk_0xFA30DFD0084E92FE(Local_1511[unk_0x6BAA0516CC970D99() /*5*/].f_1, iVar0))
					{
						unk_0xF0059F27F7BB6680(&(Local_1511[unk_0x6BAA0516CC970D99() /*5*/].f_1), iVar0);
					}
				}
				else if (unk_0xFA30DFD0084E92FE(Local_1511[unk_0x6BAA0516CC970D99() /*5*/].f_1, iVar0))
				{
					unk_0x7CB6FD92BE491AD9(&(Local_1511[unk_0x6BAA0516CC970D99() /*5*/].f_1), iVar0);
				}
			}
			else if (unk_0xFA30DFD0084E92FE(Local_1511[unk_0x6BAA0516CC970D99() /*5*/].f_1, iVar0))
			{
				unk_0x7CB6FD92BE491AD9(&(Local_1511[unk_0x6BAA0516CC970D99() /*5*/].f_1), iVar0);
			}
			iVar0++;
		}
	}
}

int func_115(int iParam0)//Position - 0x930E
{
	vector3 vVar0;
	var uVar1;
	
	if (func_30(iParam0, &vVar0, &uVar1))
	{
		if (func_116(vVar0, 10f, 1065353216, 5f, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_116(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)//Position - 0x9353
{
	Global_24B2CE.f_2 = 0;
	if (fParam1 > 0f)
	{
		if (unk_0x38B362A95EA24163(vParam0, fParam1))
		{
			return 0;
		}
	}
	if (fParam2 > 0f)
	{
		if (unk_0xAE7193AAF1ECF1DB(vParam0.x, vParam0.y, (vParam0.z + 1f), fParam2) || unk_0xAE7193AAF1ECF1DB(vParam0, fParam2))
		{
			return 0;
		}
	}
	if (fParam3 > 0f)
	{
		if (unk_0x85BF1D9693A8E47F(vParam0, fParam3, iParam16))
		{
			return 0;
		}
	}
	Global_24B2CE.f_2++;
	if (bParam11)
	{
		if (unk_0x90629C6D0C640733(vParam0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_24B2CE.f_2++;
	if (fParam12 > 0f)
	{
		if (func_121(vParam0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_24B2CE.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_117(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_24B2CE.f_2++;
	return 1;
}

int func_117(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)//Position - 0x9464
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_13(unk_0xB5CEFD608600A09F(), 1, 1))
		{
			if (!unk_0x17FAADF9916EF741())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0xF0F2FC9DE291567F(func_119(unk_0xB5CEFD608600A09F()), vParam0, true) <= (fVar2 + fParam1))
				{
					if (unk_0x33CC9445B2DF9387(vParam0, fParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_13(iVar1, 1, 1))
		{
			if (!func_85(iVar1, 0) && unk_0x75206900382D1E30(unk_0xB5CEFD608600A09F(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0xB5CEFD608600A09F()))
				{
					if ((func_118(iVar1) || !bParam8) && !Global_24FB5C[iVar1 /*406*/].f_FF)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!unk_0x343CB262BF0CDF5A(iVar1) == -1)
							{
								if (unk_0x343CB262BF0CDF5A(iVar1) == unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && unk_0x343CB262BF0CDF5A(iVar1) != unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()))) || unk_0x343CB262BF0CDF5A(iVar1) == -1)
							{
								if (unk_0xF0F2FC9DE291567F(func_119(iVar1), vParam0, true) <= (fVar2 + fParam1))
								{
									if (unk_0xCFC6F6FA0A38CF65(iVar1, vParam0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x343CB262BF0CDF5A(iVar1) != iParam6 || unk_0x343CB262BF0CDF5A(iVar1) == -1)
						{
							if (unk_0xF0F2FC9DE291567F(func_119(iVar1), vParam0, true) <= (fVar2 + fParam1))
							{
								if (unk_0xCFC6F6FA0A38CF65(iVar1, vParam0, fParam1))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_118(int iParam0)//Position - 0x961B
{
	if (unk_0xE904009319A7A43E(unk_0xA95CF30C72EB526E(iParam0)) || Global_24FB5C[iParam0 /*406*/].f_F1)
	{
		return 1;
	}
	return 0;
}

Vector3 func_119(int iParam0)//Position - 0x9646
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_53() && Global_18402B[iVar0 /*770*/].f_2EA) && !func_120(Global_18402B[iVar0 /*770*/].f_2EB))
	{
		return Global_18402B[iVar0 /*770*/].f_2EB;
	}
	return func_29(iParam0);
}

int func_120(vector3 vParam0)//Position - 0x9699
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_121(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)//Position - 0x96C3
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && unk_0xB5CEFD608600A09F() != iVar1) || iParam6 == 0)
		{
			if (func_13(iVar1, bParam2, bParam3))
			{
				if (unk_0x75206900382D1E30(unk_0xB5CEFD608600A09F(), iVar1))
				{
					if (!bParam5 || (!unk_0x36CEFBE9B745A58D(unk_0xA95CF30C72EB526E(iVar1)) && func_118(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()) != unk_0x343CB262BF0CDF5A(iVar1))) || unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()) == -1)
						{
							if (((unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()) == -1 && uParam7) && bParam4) && func_122(iVar1))
							{
							}
							else if (unk_0x724D816EA203A79E(unk_0xA95CF30C72EB526E(iVar1)))
							{
								if (unk_0xF0F2FC9DE291567F(func_29(iVar1), vParam0, true) < fParam1)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_122(int iParam0)//Position - 0x97BF
{
	if (func_125(unk_0xB5CEFD608600A09F(), iParam0))
	{
		return 1;
	}
	Global_26210D = { func_124(iParam0) };
	if (unk_0xE140B7178EA00705(&Global_26210D))
	{
		return 1;
	}
	if (func_123(unk_0xB5CEFD608600A09F(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_123(int iParam0, int iParam1)//Position - 0x9806
{
	int iVar0;
	
	iVar0 = func_72(iParam0);
	if (!iVar0 == func_87())
	{
		if (iVar0 == func_72(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_124(int iParam0)//Position - 0x9831
{
	struct<13> Var0;
	
	unk_0xB7DBA2C6D2C3C41A(iParam0, &Var0, 13);
	return Var0;
}

int func_125(int iParam0, int iParam1)//Position - 0x9848
{
	if (unk_0xB9ACC1154C623363())
	{
		Global_26210D = { func_124(iParam0) };
		Global_26211A = { func_124(iParam1) };
		if (unk_0xD7F4457CECF10121(&Global_26210D))
		{
			if (unk_0xD7F4457CECF10121(&Global_26211A))
			{
				unk_0x24723877416AAAFC(&Global_2620C7, 35, &Global_26210D);
				unk_0x24723877416AAAFC(&Global_2620EA, 35, &Global_26211A);
				if (Global_2620C7 == Global_2620EA)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_126()//Position - 0x98B5
{
	int iVar0;
	int iVar1;
	
	func_605();
	if (func_603())
	{
		func_489();
	}
	if (func_488(unk_0xB5CEFD608600A09F()) || func_487(unk_0xB5CEFD608600A09F()))
	{
		func_486();
	}
	if ((!func_6(unk_0xB5CEFD608600A09F()) && !func_485(0)) && !func_485(func_484(132)))
	{
		if (func_461(0, 1, 1))
		{
			if (unk_0xFA30DFD0084E92FE(iLocal_109, 3))
			{
				unk_0x7CB6FD92BE491AD9(&iLocal_109, 3);
			}
			switch (Local_1511[unk_0x6BAA0516CC970D99() /*5*/].f_3)
			{
				case 0:
					if (Local_144.f_8 == 1)
					{
						func_460(1);
						func_459(1);
					}
					else if (Local_144.f_8 >= 2)
					{
						func_459(1);
					}
					break;
				
				case 1:
					func_455(6);
					if (Local_144.f_8 >= 2)
					{
						func_459(2);
					}
					func_455(2);
					func_453(0);
					func_451((Global_40001.f_2907 - func_452(&(Local_144.f_29B), 0, 0)));
					func_448(func_450((Global_40001.f_2907 - func_452(&(Local_144.f_29B), 0, 0)), 0), func_449(-1));
					func_428();
					break;
				
				case 2:
					if (Local_144.f_8 > 2)
					{
						func_460(0);
						func_410(132, 1065353216, 1065353216, 0, 0, 0, 0);
						if (!func_6(unk_0xB5CEFD608600A09F()))
						{
							func_409();
						}
						else
						{
							unk_0xF0059F27F7BB6680(&iLocal_109, 5);
						}
						if (Local_144.f_2C6)
						{
							func_408();
						}
						if (Local_144.f_2C3)
						{
							Global_267214.f_12C1 = 1;
						}
						else
						{
							Global_267214.f_12C1 = 0;
						}
						func_407();
						if (!func_6(unk_0xB5CEFD608600A09F()))
						{
							if (func_32())
							{
								func_392(678f, 794f, 206f, 8f, 0);
								func_392(1911.3f, 4714.6f, 41.1f, 8f, 0);
								func_392(688.5021f, 735.4581f, 181.296f, 8f, 0);
							}
						}
						func_459(3);
					}
					break;
				
				case 3:
					if (Local_144.f_8 > 3)
					{
						func_459(4);
					}
					else
					{
						if (!iLocal_129)
						{
							if (func_391())
							{
								iLocal_129 = 1;
							}
						}
						iVar1 = 0;
						while (iVar1 < Local_144.f_2C5)
						{
							if (uLocal_111[iVar1] || iLocal_129)
							{
								func_303(iVar1);
							}
							iVar1++;
						}
						iVar0 = 0;
						while (iVar0 < 3)
						{
							uLocal_111[iLocal_105] = func_302(iLocal_105);
							uLocal_110[iLocal_105] = func_300(iLocal_105);
							if (!uLocal_110[iLocal_105])
							{
								func_303(iLocal_105);
							}
							iLocal_105++;
							if (iLocal_105 >= Local_144.f_2C5)
							{
								iLocal_105 = 0;
							}
							iVar0++;
						}
						func_453(0);
						func_455(4);
						func_455(5);
						if (func_298(0) && !func_297(0))
						{
							func_296();
						}
						if ((!func_295(unk_0xB5CEFD608600A09F()) && !unk_0xE186ACC7BE9B244E()) && !unk_0x5107E30005FCFEA8())
						{
							func_294();
						}
						func_293();
					}
					func_290();
					func_289();
					func_409();
					func_271();
					func_428();
					break;
				
				case 4:
					func_180();
					func_164();
					func_163();
					func_453(1);
					func_162();
					func_271();
					if (func_151(&uLocal_131, !unk_0xFA30DFD0084E92FE(Local_144.f_2, 2)) || unk_0xFA30DFD0084E92FE(Local_144.f_2, 2))
					{
						if (func_32())
						{
							func_459(5);
						}
						else
						{
							func_459(6);
						}
					}
					break;
				
				case 5:
					if (Local_144.f_8 > 5)
					{
						func_459(6);
					}
					break;
				
				case 6:
					break;
			}
		}
		else
		{
			func_146();
		}
	}
	else
	{
		func_486();
		func_146();
	}
	func_133();
	func_128();
	func_127();
}

void func_127()//Position - 0x9C48
{
	struct<2> Var0;
	int iVar1;
	
	if (func_32())
	{
		Var0 = { Local_144.f_2D9[iLocal_120 /*2*/] };
		if (unk_0x7FFE36DB9042AF23(Var0.f_1))
		{
			iVar1 = unk_0x19D7F09C2FABDDA0(Var0.f_1);
			if (unk_0x4DF785C4DF542CD0(iVar1))
			{
				if (!unk_0xE59B7F5A03335350(iVar1, 0))
				{
					unk_0x1E7A09C1710FB071(&iVar1);
				}
			}
		}
		iLocal_120++;
		if (iLocal_120 >= 10)
		{
			iLocal_120 = 0;
			iLocal_142 = iLocal_141;
			iLocal_141 = 0;
		}
	}
}

void func_128()//Position - 0x9CB5
{
	if (Local_144.f_8 == 5)
	{
		if (func_36(&(Local_144.f_29D)))
		{
			if (unk_0x7FFE36DB9042AF23(Local_144.f_2D9[iLocal_120 /*2*/].f_1))
			{
				if (!unk_0x1D403DFADBC2DE3C(unk_0x19D7F09C2FABDDA0(Local_144.f_2D9[iLocal_120 /*2*/].f_1), 0))
				{
					if (!unk_0xFA30DFD0084E92FE(iLocal_139, iLocal_120))
					{
						unk_0xF0059F27F7BB6680(&iLocal_139, iLocal_120);
						iLocal_140[iLocal_120] = unk_0x2F079D1FC5F6CB99();
						unk_0xF2C27FE5A8B98CB5(iLocal_140[iLocal_120], "Explosion_Countdown", unk_0x19D7F09C2FABDDA0(Local_144.f_2D9[iLocal_120 /*2*/].f_1), "GTAO_FM_Events_Soundset", 0, 0);
						unk_0x8B34879B92B3B225(iLocal_140[iLocal_120], "Time", 30f);
					}
					if ((30000 - func_452(&(Local_144.f_29D), 0, 0)) >= 0)
					{
						if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), unk_0x19D7F09C2FABDDA0(Local_144.f_2D9[iLocal_120 /*2*/].f_1), 0))
						{
							func_455(3);
							iLocal_141 = 1;
						}
					}
					else if (unk_0x89B5CBCE9D131B32(Local_144.f_2D9[iLocal_120 /*2*/].f_1))
					{
						unk_0x5502708AECB47F5D(unk_0x19D7F09C2FABDDA0(Local_144.f_2D9[iLocal_120 /*2*/].f_1));
						unk_0x8195A15B79CC81A4(unk_0x19D7F09C2FABDDA0(Local_144.f_2D9[iLocal_120 /*2*/].f_1), 1, 0, -1);
					}
				}
				else if (unk_0xFA30DFD0084E92FE(iLocal_139, iLocal_120) && !unk_0x1BD5EE88F32433CD(iLocal_140[iLocal_120]))
				{
					unk_0x38FF8CB6377D36F6(iLocal_140[iLocal_120]);
				}
			}
			if (iLocal_142)
			{
				if (!func_83(unk_0xB5CEFD608600A09F()))
				{
					func_130(func_450((30000 - func_452(&(Local_144.f_29D), 0, 0)), 0), "HTV_DESTR", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
					func_129();
				}
			}
		}
	}
}

void func_129()//Position - 0x9E4C
{
	Global_14D262.f_440 = 1;
}

void func_130(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x9E5C
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_132(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_14D262.f_1 = 1;
		func_131(7, iVar0);
		Global_14D262.f_1124[iVar0] = uParam0;
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

void func_131(int iParam0, int iParam1)//Position - 0x9FAA
{
	unk_0xF0059F27F7BB6680(&(Global_14D262.f_17E7[iParam0]), iParam1);
}

bool func_132(int iParam0, int iParam1)//Position - 0x9FC3
{
	return unk_0xFA30DFD0084E92FE(Global_14D262.f_17E7[iParam0], iParam1);
}

void func_133()//Position - 0x9FDC
{
	char* sVar0;
	
	if (((func_13(unk_0xB5CEFD608600A09F(), 1, 1) && !func_6(unk_0xB5CEFD608600A09F())) && !func_487(unk_0xB5CEFD608600A09F())) && func_461(0, 1, 1))
	{
		if (Local_1511[unk_0x6BAA0516CC970D99() /*5*/].f_3 == 1)
		{
			if (Local_144.f_2C3)
			{
				sVar0 = "CPC_TILELA";
			}
			else
			{
				sVar0 = "CPC_TILEL";
			}
			if (func_32() && !unk_0x62083F80FA40AAD2(unk_0xBC25C936A095B5BA()))
			{
				func_134("CPC_PREPAIR", sVar0, func_145(), 0);
			}
			else
			{
				func_134("CPC_PREP", sVar0, func_145(), 0);
			}
		}
		else
		{
			func_407();
		}
	}
	else
	{
		func_407();
	}
}

int func_134(char* sParam0, char* sParam1, char* sParam2, bool bParam3)//Position - 0xA082
{
	if (unk_0xF1734B55490E9045(sParam0))
	{
		return 0;
	}
	if (unk_0xF5429F058A48A07C(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0xF1734B55490E9045(sParam1))
	{
		return 0;
	}
	if (unk_0xF5429F058A48A07C(sParam1) > 23)
	{
		return 0;
	}
	if (unk_0xF1734B55490E9045(sParam2))
	{
		return 0;
	}
	if (unk_0xF5429F058A48A07C(sParam2) > 23)
	{
		return 0;
	}
	if (func_144(sParam0, sParam1, sParam2))
	{
		return 0;
	}
	func_138();
	Global_140740 = 4;
	StringCopy(&(Global_140740.f_1), unk_0x1377080E9B0BD993(), 32);
	Global_140740.f_9 = unk_0x56BEECB328B6D29D(&(Global_140740.f_1));
	StringCopy(&(Global_140740.f_C), sParam0, 16);
	StringCopy(&(Global_140740.f_10), sParam1, 64);
	StringCopy(&(Global_140740.f_20), sParam2, 64);
	func_137();
	func_136(bParam3);
	func_135();
	return 1;
}

void func_135()//Position - 0xA141
{
	unk_0xF0059F27F7BB6680(&(Global_140740.f_3B), 1);
}

void func_136(bool bParam0)//Position - 0xA154
{
	if (bParam0)
	{
		unk_0xF0059F27F7BB6680(&(Global_140740.f_3B), 0);
		return;
	}
	unk_0x7CB6FD92BE491AD9(&(Global_140740.f_3B), 0);
}

void func_137()//Position - 0xA17A
{
	Global_140740.f_A = unk_0x863D0D1A37055D36(unk_0xED678C85A82F0AB9(), 86400000);
	Global_140740.f_B = unk_0xED678C85A82F0AB9();
}

void func_138()//Position - 0xA19F
{
	func_140();
	func_139(0);
}

void func_139(bool bParam0)//Position - 0xA1B0
{
	bool bVar0;
	
	bVar0 = unk_0x7AF0088ABFA713B6();
	Global_140740 = 20;
	StringCopy(&(Global_140740.f_1), "", 32);
	Global_140740.f_9 = 0;
	if (bVar0)
	{
		Global_140740.f_A = unk_0xED678C85A82F0AB9();
		Global_140740.f_B = unk_0xED678C85A82F0AB9();
	}
	StringCopy(&(Global_140740.f_C), "", 16);
	StringCopy(&(Global_140740.f_10), "", 64);
	StringCopy(&(Global_140740.f_20), "", 64);
	Global_140740.f_34 = 0;
	Global_140740.f_35 = 0;
	Global_140740.f_36 = 0;
	Global_140740.f_37 = -1;
	Global_140740.f_38 = 0;
	Global_140740.f_3B = 0;
	if (bParam0)
	{
		return;
	}
}

void func_140()//Position - 0xA242
{
	if (!func_143())
	{
	}
	if (func_142())
	{
		unk_0x0C2CA00C24C64582(&(Global_140740.f_C));
		func_141();
		unk_0xF633952844D6CF3D();
	}
}

void func_141()//Position - 0xA26B
{
	switch (Global_140740)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0xAA5C5BF0489E5553(Global_140740.f_34);
			return;
		
		case 2:
			unk_0xAA5C5BF0489E5553(Global_140740.f_34);
			unk_0xAA5C5BF0489E5553(Global_140740.f_35);
			return;
		
		case 3:
			unk_0xC9C304D0AABE1335(&(Global_140740.f_10));
			return;
		
		case 4:
			unk_0xC9C304D0AABE1335(&(Global_140740.f_10));
			unk_0xC9C304D0AABE1335(&(Global_140740.f_20));
			return;
		
		case 5:
			unk_0x607C19B90D297FE2(&(Global_140740.f_10));
			return;
		
		case 6:
			unk_0x449F0674640D94C0(Global_140740.f_38);
			unk_0x607C19B90D297FE2(&(Global_140740.f_10));
			return;
		
		case 7:
			unk_0xC9C304D0AABE1335(&(Global_140740.f_10));
			return;
		
		case 8:
			unk_0x449F0674640D94C0(Global_140740.f_38);
			unk_0xC9C304D0AABE1335(&(Global_140740.f_10));
			return;
		
		case 9:
			unk_0xA5CB8AC295293426(&(Global_140740.f_10));
			return;
		
		case 10:
			unk_0x607C19B90D297FE2(&(Global_140740.f_10));
			unk_0x607C19B90D297FE2(&(Global_140740.f_20));
			return;
		
		case 12:
			unk_0x607C19B90D297FE2(&(Global_140740.f_10));
			unk_0xC9C304D0AABE1335(&(Global_140740.f_20));
			return;
		
		case 13:
			unk_0x449F0674640D94C0(Global_140740.f_38);
			unk_0xC9C304D0AABE1335(&(Global_140740.f_10));
			unk_0x449F0674640D94C0(Global_140740.f_39);
			unk_0xC9C304D0AABE1335(&(Global_140740.f_20));
			return;
		
		case 11:
			unk_0xA5CB8AC295293426(&(Global_140740.f_10));
			return;
		
		case 14:
			unk_0x449F0674640D94C0(Global_140740.f_38);
			unk_0x607C19B90D297FE2(&(Global_140740.f_10));
			unk_0x449F0674640D94C0(Global_140740.f_38);
			unk_0xC9C304D0AABE1335(&(Global_140740.f_20));
			return;
		
		case 15:
			unk_0x449F0674640D94C0(Global_140740.f_38);
			unk_0x607C19B90D297FE2(&(Global_140740.f_10));
			unk_0x449F0674640D94C0(Global_140740.f_39);
			unk_0xC9C304D0AABE1335(&(Global_140740.f_20));
			return;
		
		case 17:
			unk_0x607C19B90D297FE2(&(Global_140740.f_10));
			unk_0x607C19B90D297FE2(&(Global_140740.f_20));
			unk_0x449F0674640D94C0(Global_140740.f_38);
			unk_0xC9C304D0AABE1335(&(Global_140740.f_30));
			return;
		
		case 16:
			unk_0x449F0674640D94C0(Global_140740.f_38);
			unk_0x607C19B90D297FE2(&(Global_140740.f_10));
			return;
		
		case 19:
			unk_0x449F0674640D94C0(Global_140740.f_38);
			unk_0xC9C304D0AABE1335(&(Global_140740.f_10));
			return;
		
		case 18:
			unk_0x607C19B90D297FE2(&(Global_140740.f_10));
			unk_0x449F0674640D94C0(Global_140740.f_38);
			unk_0xC9C304D0AABE1335(&(Global_140740.f_30));
			unk_0x607C19B90D297FE2(&(Global_140740.f_20));
			return;
		
		default:
	}
}

int func_142()//Position - 0xA4DD
{
	if (Global_140740 == 20)
	{
		return 0;
	}
	return 1;
}

int func_143()//Position - 0xA4F3
{
	if (!func_142())
	{
		return 0;
	}
	unk_0xE2CFC41F8121CE68(&(Global_140740.f_C));
	func_141();
	return unk_0x121EFFA2D57472F2();
}

bool func_144(char* sParam0, char* sParam1, char* sParam2)//Position - 0xA519
{
	if (!func_142())
	{
		return 0;
	}
	if (unk_0xF1734B55490E9045(sParam0))
	{
		return 0;
	}
	if (unk_0xF1734B55490E9045(sParam1))
	{
		return 0;
	}
	if (unk_0xF1734B55490E9045(sParam2))
	{
		return 0;
	}
	if (!unk_0x56BEECB328B6D29D(sParam0) == unk_0x56BEECB328B6D29D(&(Global_140740.f_C)))
	{
		return 0;
	}
	if (!unk_0x56BEECB328B6D29D(sParam1) == unk_0x56BEECB328B6D29D(&(Global_140740.f_10)))
	{
		return 0;
	}
	return unk_0x56BEECB328B6D29D(sParam2) == unk_0x56BEECB328B6D29D(&(Global_140740.f_20));
}

char* func_145()//Position - 0xA597
{
	switch (Local_144.f_2C8)
	{
		case 0:
			return "CPC_WARN0";
			break;
		
		case 1:
			return "CPC_WARN1";
			break;
		
		case 2:
			return "CPC_WARN2";
			break;
		
		case 3:
			return "CPC_WARN3";
			break;
	}
	return "";
}

void func_146()//Position - 0xA5E9
{
	if (!unk_0xFA30DFD0084E92FE(iLocal_109, 3))
	{
		iLocal_129 = 1;
		func_163();
		unk_0x98121A0800F4EA5E();
		func_453(1);
		func_150();
		func_148();
		unk_0xF0059F27F7BB6680(&iLocal_109, 3);
		func_147();
	}
}

void func_147()//Position - 0xA620
{
	Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_7 = 0;
}

void func_148()//Position - 0xA636
{
	if (Global_24D43C.f_6 == unk_0x8A55B15F4133C912())
	{
		func_149();
	}
}

void func_149()//Position - 0xA64F
{
	struct<28> Var0;
	
	if (unk_0x3C406FC829C1E14A(Global_24D43C.f_6))
	{
		if (!Global_24D43C.f_6 == unk_0x8A55B15F4133C912())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_15 = 1115815936;
	Var0.f_1B = -1082130432;
	Global_24D43C = { Var0 };
	Global_24D43C.f_6 = -1;
}

void func_150()//Position - 0xA6AC
{
	struct<6> Var0;
	
	if (Global_24B2CE.f_1E3.f_1 == unk_0x8A55B15F4133C912())
	{
		Global_24B2CE.f_1E3 = { Var0 };
	}
}

int func_151(var uParam0, bool bParam1)//Position - 0xA6D1
{
	bool bVar0;
	
	if (((*uParam0 > 0 && !func_161()) && !(func_95(unk_0xB5CEFD608600A09F(), 0) && (func_91(unk_0xB5CEFD608600A09F()) || func_160(unk_0xB5CEFD608600A09F())))) && !func_158(unk_0xB5CEFD608600A09F()))
	{
		func_157();
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_36(&(uParam0->f_3)))
			{
				func_2(&(uParam0->f_3), 0, 0);
			}
			else if (func_1(&(uParam0->f_3), 1000, 0))
			{
				unk_0xF0059F27F7BB6680(&(Global_180634.f_1), 25);
				if (bParam1)
				{
					unk_0xF0059F27F7BB6680(&(Global_267214.f_11DD), 0);
					func_2(&(uParam0->f_5), 0, 0);
				}
				func_2(&(uParam0->f_1), 0, 0);
				func_156(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_36(&(uParam0->f_5)))
			{
				if (func_1(&(uParam0->f_5), 3000, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_153();
				func_156(uParam0, 2);
			}
			break;
		
		case 2:
			func_153();
			if (func_1(&(uParam0->f_1), 15000, 0))
			{
				if (func_152("AMEV_LBD_HELP"))
				{
					unk_0x7456702622C62EA0(1);
				}
				func_156(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_1(&(uParam0->f_1), 23500, 0))
			{
				unk_0x7CB6FD92BE491AD9(&(Global_267214.f_11DD), 1);
				func_156(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0x7CB6FD92BE491AD9(&(Global_267214.f_11DD), 1);
			return 1;
	}
	return 0;
}

int func_152(char* sParam0)//Position - 0xA84C
{
	unk_0xF07D20149ECBC61E(sParam0);
	return unk_0xA66DBDA0A072514A(0);
}

void func_153()//Position - 0xA85F
{
	if (unk_0xFA30DFD0084E92FE(Global_267214.f_11DD, 0))
	{
		if (((((!unk_0x7382A6B79BD5F585() && !unk_0xFA30DFD0084E92FE(Global_267214.f_310, 2)) && func_13(unk_0xB5CEFD608600A09F(), 1, 1)) && !Global_10AB8) && !Global_CF9C) && !unk_0x17FAADF9916EF741())
		{
			unk_0xF0059F27F7BB6680(&(Global_267214.f_11DD), 1);
			func_155("AMEV_LBD_HELP", -1);
			func_154(1);
			unk_0x7CB6FD92BE491AD9(&(Global_267214.f_11DD), 0);
		}
	}
}

void func_154(int iParam0)//Position - 0xA8E1
{
	unk_0x652B3075D0E58C13(3, 21, 200, 0, 0);
	if (iParam0 && !func_161())
	{
		unk_0xC4BA30B532FE260F(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_155(char* sParam0, int iParam1)//Position - 0xA90E
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, 0, iParam1);
}

void func_156(var uParam0, int iParam1)//Position - 0xA925
{
	*uParam0 = iParam1;
}

void func_157()//Position - 0xA932
{
	Global_258664 = 1;
}

int func_158(int iParam0)//Position - 0xA93F
{
	if (iParam0 != func_87())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_159(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 2;
			}
		}
	}
	return 0;
}

int func_159(int iParam0)//Position - 0xA985
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
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
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
	}
	return -1;
}

bool func_160(int iParam0)//Position - 0xACD1
{
	return func_90(iParam0, 19);
}

bool func_161()//Position - 0xACE1
{
	return Global_252E21.f_A8F[0 /*80*/].f_1 != 0;
}

void func_162()//Position - 0xACF7
{
	if (unk_0xFA30DFD0084E92FE(Global_267214.f_126F, 1))
	{
		unk_0x7CB6FD92BE491AD9(&(Global_267214.f_126F), 1);
	}
	if (Global_267214.f_126F > 0)
	{
		unk_0x3857DADBD6EC8A54("FM_COUNTDOWN_30S_KILL");
		unk_0x3857DADBD6EC8A54("FM_COUNTDOWN_30S_FIRA");
		unk_0xC1300D0F3A74E20B("GTAO_FM_Events_30_Sec_Countdown_Scene");
		unk_0x1549CEF3D921CF97(1);
		Global_267214.f_126F = 0;
		unk_0x9B90420B04C07704("DisableFlightMusic", 0);
		unk_0x9B90420B04C07704("WantedMusicDisabled", 0);
		unk_0x9B90420B04C07704("AllowScoreAndRadio", 0);
		if (!unk_0x3362CDE8460ED38B(unk_0x1377080E9B0BD993(), "am_pi_menu"))
		{
			if (Global_267214.f_1279 > -1)
			{
				unk_0x26D344275839A25E(Global_267214.f_1279);
				Global_267214.f_1279 = -1;
			}
		}
	}
}

void func_163()//Position - 0xAD95
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_144.f_2C5)
	{
		if (unk_0x2DA8CA50A72528FB(vLocal_127[iVar0 /*3*/]))
		{
			unk_0x07B8ECB35A4ED3AC(&(vLocal_127[iVar0 /*3*/]));
			unk_0x2A6C7715B55EA005(vLocal_127[iVar0 /*3*/].f_1);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iLocal_117[iVar0] = 0;
		iVar0++;
	}
}

void func_164()//Position - 0xADF4
{
	char* sVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	
	if (!unk_0xFA30DFD0084E92FE(Local_1511[unk_0x6BAA0516CC970D99() /*5*/].f_2, 0) && (func_179() || unk_0xFA30DFD0084E92FE(Local_144.f_2, 2)))
	{
		if (func_56(func_178()))
		{
			func_177();
		}
		if (!unk_0xFA30DFD0084E92FE(Local_144.f_2, 2))
		{
			if (func_298(0))
			{
				if (func_297(0))
				{
					if (!unk_0xFA30DFD0084E92FE(Local_144.f_2, 0))
					{
						sVar0 = "CPC_END";
					}
					else
					{
						sVar0 = "CPC_ENDBONUS";
					}
					func_176(64, Local_1511[unk_0x6BAA0516CC970D99() /*5*/].f_4, sVar0, "AMCH_WIN", 1, 15000, -1082130432, 2);
				}
				else
				{
					iVar1 = unk_0xCFA8A401AAD7BB5A(Local_144.f_2A2[0]);
					if (unk_0x05086B70D2CFEA6F(iVar1))
					{
						iVar2 = unk_0x4ED43B67B3F05E0F(iVar1);
						if (func_297(1))
						{
							if (!unk_0xFA30DFD0084E92FE(Local_144.f_2, 0))
							{
								sVar0 = "CPC_2ND";
							}
							else
							{
								sVar0 = "CPC_2NDBONUS";
							}
							func_176(67, Local_1511[unk_0x6BAA0516CC970D99() /*5*/].f_4, sVar0, "CPC_OVER", 1, 15000, -1082130432, 2);
						}
						else if (func_297(2))
						{
							if (!unk_0xFA30DFD0084E92FE(Local_144.f_2, 0))
							{
								sVar0 = "CPC_3RD";
							}
							else
							{
								sVar0 = "CPC_3RDBONUS";
							}
							func_176(67, Local_1511[unk_0x6BAA0516CC970D99() /*5*/].f_4, sVar0, "CPC_OVER", 1, 15000, -1082130432, 2);
						}
						else
						{
							if (unk_0xFA30DFD0084E92FE(Local_144.f_2, 0) && Local_1511[unk_0x6BAA0516CC970D99() /*5*/].f_4 >= Global_40001.f_29A7)
							{
								sVar0 = "CPC_LOSEBONUS";
							}
							else
							{
								sVar0 = "CPC_LOSE";
							}
							sVar3 = unk_0xD885B2234FC72D62(iVar2);
							if (func_73(iVar2, 1))
							{
								sVar3 = func_167(iVar2);
							}
							func_166(66, Local_1511[Local_144.f_2A2[0] /*5*/].f_4, sVar0, sVar3, "CPC_OVER", 1, 15000, 2);
						}
					}
				}
			}
			else
			{
				func_42(66, "CPC_OVER", "CPC_NOWIN", 1, 15000, 2, 1);
			}
		}
		else
		{
			func_41("", "", 1);
		}
		unk_0xF0059F27F7BB6680(&(Local_1511[unk_0x6BAA0516CC970D99() /*5*/].f_2), 0);
		func_165(132);
	}
}

void func_165(int iParam0)//Position - 0xAFFA
{
	if (iParam0 == iParam0)
	{
	}
}

int func_166(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7)//Position - 0xB009
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_10 = 1;
	Var0.f_47 = 1;
	Var0.f_48 = 2;
	Var0.f_4F = -1;
	func_88(iParam0, &Var0, iParam1, sParam2, sParam4);
	StringCopy(&(Var0.f_19), sParam3, 64);
	Var0.f_47 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_48 = iParam7;
	return func_43(&Var0);
}

char* func_167(int iParam0)//Position - 0xB07C
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		sVar0 = func_175(&(Global_18C80F[iParam0 /*558*/].f_B.f_63));
		return sVar0;
	}
	if (Global_18C80F[iParam0 /*558*/].f_B.f_73 != Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_73)
	{
		sVar0 = func_170(iParam0, 0);
		return sVar0;
	}
	if (((func_90(iParam0, 28) || func_90(unk_0xB5CEFD608600A09F(), 28)) || func_169(iParam0)) && !func_168(iParam0))
	{
		return func_170(iParam0, 0);
	}
	iVar1 = func_72(iParam0);
	if (iVar1 != func_87())
	{
		if (iVar1 != unk_0xB5CEFD608600A09F())
		{
			if (!unk_0xF49912B78E2591B6() && !unk_0x7A3896EC51DA2E5E(0, -1, 1))
			{
				return func_170(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_87())
	{
		sVar0 = func_175(&(Global_18C80F[iVar1 /*558*/].f_B.f_63));
		if (unk_0xF1734B55490E9045(sVar0))
		{
			return func_170(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_168(int iParam0)//Position - 0xB182
{
	struct<13> Var0;
	
	Var0 = { func_124(iParam0) };
	if (unk_0xF49912B78E2591B6())
	{
		if (unk_0x5553DFDA03631860(0))
		{
			if (unk_0x43AECC0539840131(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_169(int iParam0)//Position - 0xB1B2
{
	struct<13> Var0;
	
	if (iParam0 != func_87())
	{
		Var0 = { func_124(iParam0) };
		if (unk_0xF7E138CFA19B55E7() || unk_0x8ACB0C3FACC09467())
		{
			if (unk_0x5553DFDA03631860(0))
			{
				return 0;
			}
		}
		else if (unk_0xF49912B78E2591B6())
		{
			if (unk_0x5553DFDA03631860(0))
			{
				if (unk_0x43AECC0539840131(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

char* func_170(int iParam0, bool bParam1)//Position - 0xB20B
{
	if (!bParam1)
	{
		if (func_172(iParam0, 1))
		{
			return func_171();
		}
	}
	return unk_0xFCB4C1AC11347344("GB_REST_ACC");
}

char* func_171()//Position - 0xB232
{
	return unk_0xFCB4C1AC11347344("GB_REST_ACCM");
}

bool func_172(int iParam0, bool bParam1)//Position - 0xB242
{
	return func_173(iParam0, bParam1, 1);
}

int func_173(int iParam0, bool bParam1, int iParam2)//Position - 0xB253
{
	int iVar0;
	
	if (iParam0 == func_87())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_174(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_18C80F[iParam0 /*558*/].f_B;
	if (iVar0 != func_87() && Global_18C80F[iVar0 /*558*/].f_B.f_199 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_174(int iParam0, int iParam1)//Position - 0xB2AF
{
	if (iParam0 != func_87())
	{
		if (Global_18C80F[iParam0 /*558*/].f_B != func_87())
		{
			if (Global_18C80F[iParam0 /*558*/].f_B == iParam0 && Global_18C80F[iParam0 /*558*/].f_B.f_199 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_175(var uParam0)//Position - 0xB2FE
{
	return uParam0;
}

int func_176(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xB308
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_10 = 1;
	Var0.f_47 = 1;
	Var0.f_48 = 2;
	Var0.f_4F = -1;
	func_88(iParam0, &Var0, iParam1, sParam2, sParam3);
	Var0.f_47 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_7 = iParam6;
	Var0.f_48 = iParam7;
	return func_43(&Var0);
}

void func_177()//Position - 0xB379
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_252E21.f_A8F[iVar0 /*80*/].f_2 != 0)
		{
			Global_252E21.f_A8F[iVar0 /*80*/].f_2 = 5;
			unk_0xF0059F27F7BB6680(&(Global_252E21.f_A8F[iVar0 /*80*/].f_45), 0);
		}
		iVar0++;
	}
}

int func_178()//Position - 0xB3C4
{
	return Global_252E21.f_A8F[0 /*80*/].f_1;
}

bool func_179()//Position - 0xB3D8
{
	return unk_0xFA30DFD0084E92FE(Global_180634.f_1, 25);
}

void func_180()//Position - 0xB3EC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	
	if (!unk_0xFA30DFD0084E92FE(Local_1511[unk_0x6BAA0516CC970D99() /*5*/].f_2, 1))
	{
		if (func_6(unk_0xB5CEFD608600A09F()))
		{
			unk_0xF0059F27F7BB6680(&(Local_1511[unk_0x6BAA0516CC970D99() /*5*/].f_2), 1);
			return;
		}
		if (func_487(unk_0xB5CEFD608600A09F()))
		{
			unk_0xF0059F27F7BB6680(&(Local_1511[unk_0x6BAA0516CC970D99() /*5*/].f_2), 1);
			return;
		}
		if (Local_1511[unk_0x6BAA0516CC970D99() /*5*/].f_4 >= Global_40001.f_29A7)
		{
			iVar3 = SYSTEM::FLOOR(((SYSTEM::TO_FLOAT((Local_144.f_1 - iLocal_107)) / 60f) / 1000f));
			if (iVar3 > Global_40001.f_2A48)
			{
				iVar3 = Global_40001.f_2A48;
			}
			else if (iVar3 < 1)
			{
				iVar3 = 1;
			}
			iVar2 = (func_270() * iVar3);
			iVar1 = (func_269() * iVar3);
		}
		else
		{
			func_267(0);
		}
		if (!unk_0xFA30DFD0084E92FE(Local_144.f_2, 2))
		{
			if (Local_1511[unk_0x6BAA0516CC970D99() /*5*/].f_4 >= Global_40001.f_29A7)
			{
				if (unk_0xFA30DFD0084E92FE(Local_144.f_2, 0))
				{
					iVar0 = (iVar0 + SYSTEM::ROUND((IntToFloat(func_266()) * Global_40001.f_2A53)));
				}
			}
			if (func_297(0))
			{
				Local_1510.f_5 = 1;
				iVar1 = (iVar1 + SYSTEM::ROUND((IntToFloat(func_265()) * Global_40001.f_2A54)));
			}
			if ((Local_144.f_2A2[0] != unk_0x6BAA0516CC970D99() && Local_144.f_2A2[1] != unk_0x6BAA0516CC970D99()) && Local_144.f_2A2[2] != unk_0x6BAA0516CC970D99())
			{
				if (Local_1511[unk_0x6BAA0516CC970D99() /*5*/].f_4 >= Global_40001.f_29A7)
				{
					func_267(1);
				}
			}
		}
		func_245(&iVar0, 1);
		iVar0 = (iVar0 + iVar2);
		if (iVar0 > 0)
		{
			if (func_244())
			{
				func_235(-59668082, iVar0, &uVar4, 0, 1, 0);
			}
			else
			{
				unk_0x98D5F29DCDF681F8(iVar0, "AM_CP_COLLECTION", &uVar5);
			}
		}
		Local_1510.f_6 = iVar0;
		if (!Global_40001.f_2A88)
		{
			if (Local_1510.f_6 > 0)
			{
				func_234(8, Local_1510.f_6);
			}
		}
		Global_2588F5 = iVar0;
		func_233();
		func_181(0, unk_0xBC25C936A095B5BA(), "", -1636175450, -1253457806, iVar1, 1, -1, 0, 0, 0);
		Local_1510.f_7 = (Local_1510.f_7 + iVar1);
		unk_0xF0059F27F7BB6680(&(Local_1511[unk_0x6BAA0516CC970D99() /*5*/].f_2), 1);
	}
}

int func_181(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0xB612
{
	return func_182(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_182(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0xB634
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_192(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x724D816EA203A79E(iParam1))
		{
			if (unk_0x386592AF38881675(iParam1))
			{
				iVar1 = unk_0x399F7937FFE4DEBF(iParam1);
				func_188(unk_0x823166D9421223CA(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_183(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_183(int iParam0, int iParam1, char* sParam2, int iParam3)//Position - 0xB6AD
{
	vector3 vVar0;
	
	vVar0 = { func_186(iParam0, 1) };
	if (iParam0 == func_185(unk_0xBC25C936A095B5BA()))
	{
		func_184(1);
	}
	func_188(vVar0, iParam1, 0, sParam2, iParam3);
}

void func_184(int iParam0)//Position - 0xB6E1
{
	Global_252E21.f_75D = iParam0;
}

int func_185(int iParam0)//Position - 0xB6F2
{
	return iParam0;
}

Vector3 func_186(int iParam0, bool bParam1)//Position - 0xB6FC
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	if (unk_0xAE9335ADE2B33DFC())
	{
		vVar1 = { unk_0x14C8316F37CF95AA(2) };
	}
	if (iParam0 == func_187(unk_0xBC25C936A095B5BA()) && unk_0x3D875C2512206692(unk_0xEBC6179F395EFBEB()) == 4)
	{
		vVar0 = { unk_0xA4455714F3DCE207(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		vVar0 = { unk_0x541C2AEF053615BC(iParam0, 0) };
	}
	fVar2 = 0f;
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		fVar2 = unk_0x349C94FFF43E2979(iParam0);
		if (unk_0x3D875C2512206692(unk_0xEBC6179F395EFBEB()) == 4)
		{
			fVar2 = vVar1.z;
		}
	}
	unk_0x2B3953EE61953843(unk_0x6F79ECA8C83E4357(iParam0), &vVar3, &vVar4);
	if (bParam1)
	{
		fVar5 = (vVar4.z + 0.18f);
	}
	else
	{
		fVar5 = (vVar3.z + 0.18f);
	}
	vVar0 = { unk_0x89D97EB4FAE4A574(vVar0, fVar2, 0f, 0f, fVar5) };
	return vVar0;
}

int func_187(int iParam0)//Position - 0xB7C0
{
	return iParam0;
}

void func_188(vector3 vParam0, int iParam1, int iParam2, char* sParam3, int iParam4)//Position - 0xB7CA
{
	int iVar0;
	int iVar1;
	
	if (iParam1 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_252E21.f_504[iVar0 /*30*/].f_6 == 0 || Global_252E21.f_504[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_252E21.f_504[iVar1 /*30*/] = { vParam0 };
			Global_252E21.f_504[iVar1 /*30*/].f_6 = 1;
			Global_252E21.f_504[iVar1 /*30*/].f_4 = func_191(Global_252E21.f_504[iVar1 /*30*/], &Global_14063D, &Global_14063E);
			Global_252E21.f_504[iVar1 /*30*/].f_7 = unk_0xED678C85A82F0AB9();
			Global_252E21.f_504[iVar1 /*30*/].f_3 = iParam1;
			Global_252E21.f_504[iVar1 /*30*/].f_8 = iParam2;
			Global_252E21.f_504[iVar1 /*30*/].f_9 = func_190();
			Global_252E21.f_504[iVar1 /*30*/].f_A = func_189();
			StringCopy(&(Global_252E21.f_504[iVar1 /*30*/].f_16), sParam3, 16);
			Global_252E21.f_504[iVar1 /*30*/].f_1A = unk_0x863D0D1A37055D36(unk_0xED678C85A82F0AB9(), iParam4);
		}
	}
}

int func_189()//Position - 0xB8E1
{
	if (Global_252E21.f_75D)
	{
		Global_252E21.f_75D = 0;
		return 1;
	}
	Global_252E21.f_75D = 0;
	return 0;
}

var func_190()//Position - 0xB90B
{
	var uVar0;
	
	uVar0 = Global_252E21.f_75F;
	Global_252E21.f_75F = 1;
	return uVar0;
}

float func_191(vector3 vParam0, var uParam1, var uParam2)//Position - 0xB926
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0xF0F2FC9DE291567F(unk_0x4E95580B2DDCC7A9(), vParam0, true);
	if (fVar0 < 5f)
	{
		*uParam1 = 0.402f;
		*uParam2 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam1 = 0.212f;
		*uParam2 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam1 = (fVar2 + 0.212f);
	*uParam2 = (fVar3 + 0.286f);
	return fVar1;
}

var func_192(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0xB9BF
{
	var uVar0;
	
	uVar0 = func_193(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_193(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0xB9E2
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_232(unk_0xB5CEFD608600A09F()) || func_231(unk_0xB5CEFD608600A09F()))
	{
		if (Global_40001.f_2340 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_40001.f_2340;
		}
	}
	else if (func_229() || func_226(unk_0xB5CEFD608600A09F()))
	{
		if (Global_40001.f_567F > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_40001.f_567F;
		}
	}
	else if (Global_40001.f_178A > 10000)
	{
		iVar2 = 10000;
	}
	else
	{
		iVar2 = Global_40001.f_178A;
	}
	if (func_225(sParam2))
	{
	}
	if (func_224())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_222(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_40001.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_221(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_219(0, &iVar1);
					break;
				
				case 3:
					func_219(1, &iVar1);
					break;
				
				case 1:
					func_217(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1992E3)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_214(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_203((func_213(unk_0xB5CEFD608600A09F()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x5FF267E54EB49897(iVar1, iParam8, iParam9);
				if (Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_27.f_2 != -1)
				{
					func_214(1165, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_198(iVar1);
				}
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_194((func_196(unk_0xB5CEFD608600A09F()) + iVar1));
			}
			else
			{
				func_194((func_196(unk_0xB5CEFD608600A09F()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_194(int iParam0)//Position - 0xBBE0
{
	if (func_224())
	{
		Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_D3.f_5 = iParam0;
		func_195(joaat("mpply_globalxp"), iParam0);
	}
}

void func_195(int iParam0, int iParam1)//Position - 0xBC0B
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, 1);
	}
}

int func_196(int iParam0)//Position - 0xBC27
{
	if (iParam0 > -1)
	{
		if (func_13(iParam0, 0, 1))
		{
			if (iParam0 == unk_0xB5CEFD608600A09F())
			{
				return func_197(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_18402B[iParam0 /*770*/].f_D3.f_5;
			}
		}
		else
		{
			return func_197(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_197(int iParam0)//Position - 0xBC78
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (unk_0x6CB99B97664C3727(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_198(int iParam0)//Position - 0xBC96
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_124(unk_0xB5CEFD608600A09F()) };
	if (unk_0xB9ACC1154C623363())
	{
		if (unk_0xD7F4457CECF10121(&Var0))
		{
			iVar1 = func_201(func_202(&Var0));
			if (iVar1 == 0)
			{
				func_200(&Global_14F5C9, iParam0);
				func_199(joaat("mpply_crew_local_xp_0"), Global_14F5C9);
			}
			else if (iVar1 == 1)
			{
				func_200(&Global_14F5CA, iParam0);
				func_199(joaat("mpply_crew_local_xp_1"), Global_14F5CA);
			}
			else if (iVar1 == 2)
			{
				func_200(&Global_14F5CB, iParam0);
				func_199(joaat("mpply_crew_local_xp_2"), Global_14F5CB);
			}
			else if (iVar1 == 3)
			{
				func_200(&Global_14F5CC, iParam0);
				func_199(joaat("mpply_crew_local_xp_3"), Global_14F5CC);
			}
			else if (iVar1 == 4)
			{
				func_200(&Global_14F5CD, iParam0);
				func_199(joaat("mpply_crew_local_xp_4"), Global_14F5CD);
			}
		}
	}
}

void func_199(int iParam0, int iParam1)//Position - 0xBD6A
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_14F5C4 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_14F5C6 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_14F5C6 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_14F5C7 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_14F5C8 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_14F5C9 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_14F5CA = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_14F5CB = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_14F5CC = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_14F5CD = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_14F5CE = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_14F5CF = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_14F5D0 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_14F5D1 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_14F5D2 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_14F5D3 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_14F5D4 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_200(var uParam0, int iParam1)//Position - 0xBE8F
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_201(int iParam0)//Position - 0xBEA0
{
	if (iParam0 == Global_14F5C4)
	{
		return 0;
	}
	else if (iParam0 == Global_14F5C5)
	{
		return 1;
	}
	else if (iParam0 == Global_14F5C6)
	{
		return 2;
	}
	else if (iParam0 == Global_14F5C7)
	{
		return 3;
	}
	else if (iParam0 == Global_14F5C8)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_202(var uParam0)//Position - 0xBEFD
{
	if (unk_0xB9ACC1154C623363())
	{
		if (unk_0xD7F4457CECF10121(uParam0))
		{
			return Global_25801B;
		}
	}
	return Global_25801B;
}

void func_203(int iParam0, int iParam1, int iParam2)//Position - 0xBF20
{
	if (func_224())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_40001.f_2320 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_14F642[func_212(-1)])
				{
					unk_0x5FF267E54EB49897(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_14F642[func_212(-1)])
				{
					return;
				}
			}
		}
		if (Global_40001.f_231F == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x5FF267E54EB49897(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_40001.f_231F == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x5FF267E54EB49897(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_211(unk_0xB5CEFD608600A09F()))
		{
			Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_D3.f_1 = iParam0;
			Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_D3.f_6 = func_209(iParam0, 1);
		}
		func_208(639, iParam0, -1, 1);
		func_207(640, func_209(iParam0, 1), -1, 1, 0);
		Global_14F642[func_212(-1)] = iParam0;
		func_204(7, 0);
	}
}

void func_204(int iParam0, int iParam1)//Position - 0xC041
{
	int iVar0;
	
	if (func_206(iParam0, iParam1))
	{
		iVar0 = func_205();
		Global_258004[iVar0] = iParam0;
	}
}

int func_205()//Position - 0xC064
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_258004[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_206(int iParam0, var uParam1)//Position - 0xC099
{
	if (Global_14084A)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_140856) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_207(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0xC11F
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_212(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, iParam3);
	}
}

void func_208(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xC14F
{
	int iVar0;
	
	iVar0 = Global_269BC5[iParam0 /*3*/][func_212(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_14F606[func_212(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_14F60C[func_212(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_14F612[func_212(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_14F618[func_212(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_14F5EE[func_212(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_14F5F4[func_212(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_14F5FA[func_212(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_14F600[func_212(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_14F5D6[func_212(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_14F5DC[func_212(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_14F5E2[func_212(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_14F5E8[func_212(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_14F61E[func_212(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_14F624[func_212(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_14F62A[func_212(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_14F630[func_212(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_14F636[func_212(iParam2)] = iParam1;
			break;
		
		case 7229:
			Global_14F63C[func_212(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_14F642[func_212(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_14F648[func_212(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_270CF3[0 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_270CF3[1 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 2925:
			Global_270CF3[2 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_270CF3[3 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 7818:
			Global_270D5E[func_212(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_14F64E[func_212(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_14F654[func_212(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_14F65A[func_212(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_14F660[func_212(iParam2)] = iParam1;
			break;
		
		case 3049:
			Global_270D27[0 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 3050:
			Global_270D27[1 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 3051:
			Global_270D27[2 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 3052:
			Global_270D27[3 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_270D27[4 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 3632:
			Global_270D61[0 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 3633:
			Global_270D61[1 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 3634:
			Global_270D61[2 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 3635:
			Global_270D61[3 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_270D61[4 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_270D71[0 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_270D71[1 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_270D71[2 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_270D71[3 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_270D71[4 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_270D27[5 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_270CF3[4 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 3659:
			Global_270D81[func_212(iParam2)] = iParam1;
			break;
		
		case 3660:
			Global_270D8A[func_212(iParam2)] = iParam1;
			break;
		
		case 3661:
			Global_270D84[func_212(iParam2)] = iParam1;
			break;
		
		case 3662:
			Global_270D8D[func_212(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_270D87[func_212(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_270D90[func_212(iParam2)] = iParam1;
			break;
		
		case 3685:
			Global_270D93[func_212(iParam2)] = iParam1;
			break;
		
		case 3225:
			Global_270D27[6 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 3226:
			Global_270CF3[5 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_270D27[7 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 3228:
			Global_270CF3[6 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 4015:
			Global_270D27[8 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 4016:
			Global_270CF3[7 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 4018:
			Global_270D27[9 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_270CF3[8 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_270D27[10 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_270CF3[9 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_270D27[11 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_270CF3[10 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 6105:
			Global_270D27[12 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 6106:
			Global_270CF3[11 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 6163:
			Global_270D27[13 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 6164:
			Global_270CF3[12 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 6541:
			Global_270D27[14 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 6542:
			Global_270CF3[13 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 6554:
			Global_270D27[15 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 6555:
			Global_270CF3[14 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 6557:
			Global_270D27[16 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_270CF3[15 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_270D27[17 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_270CF3[16 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_209(int iParam0, bool bParam1)//Position - 0xC909
{
	if (bParam1)
	{
	}
	return func_210(iParam0, 0);
}

int func_210(int iParam0, int iParam1)//Position - 0xC91D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_45E53[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_45E53[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_211(int iParam0)//Position - 0xC9DC
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xFA30DFD0084E92FE(Global_252E21.f_1, iParam0);
	}
	return 1;
}

int func_212(int iParam0)//Position - 0xCA01
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_39();
		if (iVar1 > -1)
		{
			Global_269AA6 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_269AA6 = 1;
		}
	}
	return iVar0;
}

int func_213(int iParam0)//Position - 0xCA35
{
	if (Global_1406D2.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xB5CEFD608600A09F())
			{
				return Global_14F642[func_212(-1)];
			}
			else if (func_211(iParam0))
			{
				return Global_18402B[iParam0 /*770*/].f_D3.f_1;
			}
		}
	}
	else
	{
		return Global_14F642[func_212(-1)];
	}
	return 0;
}

void func_214(int iParam0, int iParam1, int iParam2)//Position - 0xCA92
{
	int iVar0;
	
	iVar0 = func_216(iParam0, func_212(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_215(iParam0))
	{
		func_207(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_208(iParam0, iVar0, iParam2, 1);
	}
}

int func_215(int iParam0)//Position - 0xCAD4
{
	if (Global_14F5C3)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
			case 777:
			case 778:
			case 779:
			case 780:
			case 767:
			case 768:
			case 769:
			case 770:
			case 757:
			case 758:
			case 759:
			case 760:
			case 1303:
			case 7229:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 1236:
			case 1876:
			case 2267:
			case 2925:
			case 3054:
			case 7818:
			case 3049:
			case 3050:
			case 3051:
			case 3052:
			case 3053:
			case 3228:
			case 3230:
			case 3632:
			case 3633:
			case 3634:
			case 3635:
			case 3636:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3223:
			case 3217:
			case 3659:
			case 3660:
			case 3661:
			case 3662:
			case 3663:
			case 3664:
			case 3685:
			case 3226:
			case 3225:
			case 4016:
			case 4015:
			case 4019:
			case 4018:
			case 4022:
			case 4021:
			case 4025:
			case 4024:
			case 6106:
			case 6105:
			case 6164:
			case 6163:
			case 6529:
			case 6528:
			case 6542:
			case 6541:
			case 6555:
			case 6554:
			case 6558:
			case 6557:
			case 6561:
			case 6560:
				return 1;
				break;
			}
	}
	return 0;
}

int func_216(int iParam0, int iParam1, int iParam2)//Position - 0xCCCC
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_212(iParam1)];
	if (unk_0x6CB99B97664C3727(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_217(int iParam0)//Position - 0xCCFE
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F());
	iVar0 = 0;
	while (iVar0 < unk_0x81C86888AEA2F49B())
	{
		iVar4 = unk_0xCFA8A401AAD7BB5A(iVar0);
		if (unk_0x05086B70D2CFEA6F(iVar4))
		{
			iVar5 = unk_0x4ED43B67B3F05E0F(iVar4);
			if (unk_0x343CB262BF0CDF5A(iVar5) != -1)
			{
				if (unk_0x343CB262BF0CDF5A(iVar5) == iVar1 || func_65(unk_0x343CB262BF0CDF5A(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0xB5CEFD608600A09F())
					{
						if (func_125(unk_0xB5CEFD608600A09F(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_218(*iParam0, 100) * (10f * Global_40001.f_1079)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_218(*iParam0, 100) * (20f * Global_40001.f_1072)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_218(int iParam0, int iParam1)//Position - 0xCDE9
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_219(bool bParam0, int iParam1)//Position - 0xCE0A
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < unk_0x81C86888AEA2F49B())
		{
			iVar3 = iVar0;
			if (unk_0x05086B70D2CFEA6F(iVar3))
			{
				iVar4 = unk_0x4ED43B67B3F05E0F(iVar3);
				if (func_13(iVar4, 0, 1))
				{
					if (iVar4 != unk_0xB5CEFD608600A09F())
					{
						iVar1++;
						if (func_125(unk_0xB5CEFD608600A09F(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_13(iVar4, 1, 1))
			{
				if (iVar4 != unk_0xB5CEFD608600A09F())
				{
					if (func_220(unk_0xB5CEFD608600A09F(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_125(unk_0xB5CEFD608600A09F(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_218(*iParam1, 100) * (10f * Global_40001.f_1079)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_218(*iParam1, 100) * (20f * Global_40001.f_1072)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_220(int iParam0, int iParam1)//Position - 0xCF22
{
	return SYSTEM::VDIST(func_29(iParam0), func_29(iParam1));
	return 0f;
}

int func_221(int iParam0)//Position - 0xCF3E
{
	int iVar0;
	
	if (unk_0x8820DB58BCD4A148() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_218(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_222(int iParam0)//Position - 0xCF75
{
	if (iParam0 < 0)
	{
		if (unk_0xC40EDFF7541407A8(iParam0) > func_213(unk_0xB5CEFD608600A09F()))
		{
			iParam0 = -func_213(unk_0xB5CEFD608600A09F());
		}
	}
	if (func_223(8000, 0, 0) > 0)
	{
		if (func_223(8000, 0, 0) < (iParam0 + func_213(unk_0xB5CEFD608600A09F())))
		{
			iParam0 = (func_223(8000, 0, 0) - func_213(unk_0xB5CEFD608600A09F()));
		}
	}
	return iParam0;
}

int func_223(int iParam0, bool bParam1, int iParam2)//Position - 0xCFD9
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_45E53[iParam0];
}

int func_224()//Position - 0xD001
{
	return 1;
}

int func_225(char* sParam0)//Position - 0xD00A
{
	if (unk_0xEAEFBBEC1AEA464B(sParam0))
	{
		return 1;
	}
	else if (unk_0x3362CDE8460ED38B(sParam0, "") || unk_0x3362CDE8460ED38B(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_226(int iParam0)//Position - 0xD043
{
	return func_227(func_228(iParam0));
}

int func_227(int iParam0)//Position - 0xD055
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_228(int iParam0)//Position - 0xD06F
{
	if (func_95(iParam0, 0))
	{
		return Global_18C80F[iParam0 /*558*/].f_B.f_21;
	}
	return -1;
}

bool func_229()//Position - 0xD092
{
	if (unk_0x517823CA390A19F6())
	{
		return func_53();
	}
	return func_230(Global_440000.f_1EF38);
}

int func_230(int iParam0)//Position - 0xD0B6
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_40001.f_1385[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_231(int iParam0)//Position - 0xD0F0
{
	return Global_24FB5C[iParam0 /*406*/].f_6F == 2;
}

bool func_232(int iParam0)//Position - 0xD105
{
	return Global_24FB5C[iParam0 /*406*/].f_6F == 7;
}

void func_233()//Position - 0xD11A
{
	Global_258663 = 1;
}

void func_234(int iParam0, int iParam1)//Position - 0xD127
{
	if (iParam1 > 0)
	{
		if (Global_40001.f_5943 == 0 || Global_40001.f_5943 == 1)
		{
			if (!unk_0x8ACB0C3FACC09467() || Global_40001.f_5943 == 1)
			{
				Global_267214.f_110 = iParam0;
				if (iParam1 > Global_40001.f_1757)
				{
					iParam1 = Global_40001.f_1757;
				}
				Global_267214.f_111 = iParam1;
				Global_267214.f_112 = 0;
			}
		}
	}
}

void func_235(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0xD199
{
	int iVar0;
	
	if (!func_244())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
			if (iParam1 > 0)
			{
				func_236(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
			func_236(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_236(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xD65F
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_244())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x060D652F887827B8(func_39()) || unk_0xEBA8BD5AE6FF01CA())
		{
			Global_410B52 = 1;
			return 0;
		}
		if (Global_2584E7)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_410B53 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_41092C[iVar2 /*80*/].f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || unk_0x4EB807D82D2F9433(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0xCEA9F48EB9CF0CC7(iVar4))
		{
			*uParam0 = func_243(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_41092C[*uParam0 /*80*/].f_45 = 1;
					Global_41092C[*uParam0 /*80*/].f_49 = 1;
				}
			}
			Global_410B45 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_410B51 = 1;
			Global_410B54 = iParam4;
			Global_410B56 = iParam3;
			Global_410B57 = 1;
			Global_410B55 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_410B54 = iParam4;
			Global_410B56 = iParam3;
			Global_410B57 = 1;
			Global_410B55 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_242(1, iParam4);
			Global_410B51 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_237(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_237(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xD803
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xF0059F27F7BB6680(&(Global_24FB5C[unk_0xB5CEFD608600A09F() /*406*/].f_76.f_47), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_238(iParam0);
	}
}

void func_238(int iParam0)//Position - 0xD83B
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_244())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_241(iParam0))
		{
			if (!bVar0)
			{
				unk_0xC7150D5EF5AFC7C1();
			}
		}
		else if (!bVar0)
		{
			unk_0xA48F55B05F42FD2C(Global_41092C[iParam0 /*80*/]);
		}
		func_239(&(Global_41092C[iParam0 /*80*/]));
	}
}

void func_239(var uParam0)//Position - 0xD88D
{
	*uParam0 = 0;
	*uParam0 = 2147483647;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1593119440;
	uParam0->f_4 = -2085313189;
	uParam0->f_5 = 0;
	uParam0->f_6 = 1227573907;
	uParam0->f_7 = -1161833819;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	func_240(&(uParam0->f_8.f_3));
	func_240(&(uParam0->f_8.f_10));
	StringCopy(&(uParam0->f_8.f_1D), "", 32);
	StringCopy(&(uParam0->f_8.f_25), "", 24);
	StringCopy(&(uParam0->f_8.f_2B), "", 16);
	StringCopy(&(uParam0->f_8.f_2F), "", 16);
	uParam0->f_8.f_33 = 0;
	uParam0->f_8.f_34 = 0;
	uParam0->f_8.f_35 = 0;
	uParam0->f_8.f_36 = 0;
	uParam0->f_8.f_37 = 0;
	uParam0->f_8.f_38 = 0;
	uParam0->f_45 = 0;
	uParam0->f_46 = 0;
	uParam0->f_47 = 0;
	uParam0->f_48 = 0;
	uParam0->f_4A = 0;
	uParam0->f_49 = 0;
	uParam0->f_4B = 0;
	uParam0->f_4C = 0;
	uParam0->f_4D = 0;
	uParam0->f_4F = 0;
}

void func_240(var uParam0)//Position - 0xD983
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_A = 0;
	uParam0->f_B = 0;
	uParam0->f_C = 0;
}

int func_241(int iParam0)//Position - 0xD9CB
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_41092C[iParam0 /*80*/].f_5 == 1;
	}
	return 0;
}

void func_242(int iParam0, int iParam1)//Position - 0xD9F3
{
	Global_25897B = iParam1;
	Global_25897A = iParam0;
}

int func_243(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9)//Position - 0xDA07
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_41092C[iVar0 /*80*/].f_2 == 0)
		{
			if (!func_244())
			{
				iParam0 = iVar0 + 900;
			}
			Global_41092C[iVar0 /*80*/].f_2 = 1;
			Global_41092C[iVar0 /*80*/].f_1 = iParam5;
			Global_41092C[iVar0 /*80*/].f_3 = uParam1;
			Global_41092C[iVar0 /*80*/].f_4 = iParam2;
			Global_41092C[iVar0 /*80*/].f_7 = iParam3;
			Global_41092C[iVar0 /*80*/].f_5 = 0;
			Global_41092C[iVar0 /*80*/] = iParam0;
			Global_41092C[iVar0 /*80*/].f_6 = iParam4;
			Global_41092C[iVar0 /*80*/].f_48 = uParam8;
			Global_41092C[iVar0 /*80*/].f_47 = iParam7;
			Global_41092C[iVar0 /*80*/].f_4A = iParam9;
			Global_41092C[iVar0 /*80*/].f_49 = 0;
			Global_41092C[iVar0 /*80*/].f_4B = unk_0xC87A57742F7D3C06();
			Global_41092C[iVar0 /*80*/].f_4F = 0;
			Global_410B45 = 0;
			if (bParam6)
			{
				Global_41092C[iVar0 /*80*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_244()//Position - 0xDB00
{
	if (unk_0x8ACB0C3FACC09467())
	{
		return unk_0xC9D803F7D7E10861();
	}
	return 0;
}

void func_245(int iParam0, int iParam1)//Position - 0xDB17
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_264())
		{
			if (func_263(0))
			{
				if (!func_262(0))
				{
					if (unk_0x96B1061E8F3CBC9A(func_261()))
					{
						if (func_260() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_260());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_258(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_251("GB_BCUT_TICK1", func_261(), iVar0, 0, 0, 1, 1);
						}
						func_250(20);
						func_246(func_261(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_246(int iParam0, int iParam1, int iParam2)//Position - 0xDBB8
{
	struct<8> Var0;
	
	if (func_13(iParam0, 0, 1))
	{
		Var0 = 1838378015;
		Var0.f_1 = unk_0xB5CEFD608600A09F();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_249(iParam0);
		func_248(&(Var0.f_6), &(Var0.f_7));
		unk_0x38E776D9FA75679B(1, &Var0, 8, func_247(iParam0));
	}
}

int func_247(int iParam0)//Position - 0xDC0E
{
	var uVar0;
	
	unk_0xF0059F27F7BB6680(&uVar0, iParam0);
	return uVar0;
}

void func_248(var uParam0, var uParam1)//Position - 0xDC20
{
	*uParam0 = Global_190DD1.f_9;
	*uParam1 = Global_190DD1.f_A;
}

var func_249(int iParam0)//Position - 0xDC3A
{
	return Global_18C80F[iParam0 /*558*/].f_1EB;
}

void func_250(int iParam0)//Position - 0xDC4E
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xF0059F27F7BB6680(&(Global_267214.f_1312.f_7[iVar0]), iVar1);
}

int func_251(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)//Position - 0xDC77
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0x75206900382D1E30(unk_0xB5CEFD608600A09F(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0xD885B2234FC72D62(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0xD885B2234FC72D62(iParam1), 64);
		}
		if (unk_0xF1734B55490E9045(&Var1))
		{
		}
		unk_0x2E94302CFF011F2E(sParam0);
		unk_0x449F0674640D94C0(func_58(iParam1, -2, 1, 0));
		unk_0x607C19B90D297FE2(func_256(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x449F0674640D94C0(iParam3);
		}
		unk_0xAA5C5BF0489E5553(iParam2);
		iVar0 = unk_0x5E48BB10C6423FD5(0, 1);
		func_252(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_252(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0xDD0E
{
	int iVar0;
	
	if ((!func_255() || !unk_0x517823CA390A19F6()) || !func_85(unk_0xB5CEFD608600A09F(), 0))
	{
		return;
	}
	iVar0 = func_253(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_195C05.f_5[iVar0 /*53*/] = iParam0;
		Global_195C05.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_195C05.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_195C05.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_195C05.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_195C05.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_195C05.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_195C05.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_195C05.f_5[iVar0 /*53*/].f_C), sParam3, 64);
		StringCopy(&(Global_195C05.f_5[iVar0 /*53*/].f_1C[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_195C05.f_5[iVar0 /*53*/].f_1C[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_195C05.f_5[iVar0 /*53*/].f_1C[2 /*6*/]), sParam11, 24);
	}
}

int func_253(int iParam0)//Position - 0xDE16
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_195C05 - 1))
	{
		if (iParam0 > Global_195C05.f_5[iVar0 /*53*/].f_1)
		{
			func_254(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_195C05++;
	if (Global_195C05 > 5)
	{
		Global_195C05 = 5;
		return Global_195C05;
	}
	return (Global_195C05 - 1);
}

void func_254(int iParam0)//Position - 0xDE78
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_195C05.f_5[iVar0 /*53*/] = { Global_195C05.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_255()//Position - 0xDEB1
{
	return unk_0x7B2F21BFE86AEB61(-1762644250);
}

var func_256(char* sParam0)//Position - 0xDEC2
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_257(&cVar0);
}

var func_257(char[4] cParam0)//Position - 0xDEE6
{
	return cParam0;
}

void func_258(int iParam0, bool bParam1)//Position - 0xDEF0
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_259(1);
	}
	else
	{
		iVar1 = func_259(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_259(bool bParam0)//Position - 0xDF22
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_40001.f_2E03;
}

int func_260()//Position - 0xDF48
{
	return Global_40001.f_2E02;
}

int func_261()//Position - 0xDF57
{
	return Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B;
}

bool func_262(bool bParam0)//Position - 0xDF6C
{
	return func_172(unk_0xB5CEFD608600A09F(), bParam0);
}

bool func_263(bool bParam0)//Position - 0xDF7E
{
	return func_73(unk_0xB5CEFD608600A09F(), bParam0);
}

bool func_264()//Position - 0xDF90
{
	return func_74(unk_0xB5CEFD608600A09F());
}

int func_265()//Position - 0xDFA0
{
	return Global_40001.f_2996;
}

int func_266()//Position - 0xDFAF
{
	return Global_40001.f_2995;
}

void func_267(bool bParam0)//Position - 0xDFBE
{
	if (bParam0)
	{
		if (func_268(1))
		{
			unk_0xF0059F27F7BB6680(&Global_18064D, 1);
		}
	}
	else if (func_268(2))
	{
		unk_0xF0059F27F7BB6680(&Global_18064D, 2);
	}
}

int func_268(int iParam0)//Position - 0xDFF0
{
	int iVar0;
	
	iVar0 = func_216(2530, -1, 0);
	if (iParam0 == 0)
	{
		if ((unk_0xFA30DFD0084E92FE(iVar0, 0) && unk_0xFA30DFD0084E92FE(iVar0, 1)) && unk_0xFA30DFD0084E92FE(iVar0, 2))
		{
			return 0;
		}
	}
	else if (iParam0 == 1)
	{
		if ((unk_0xFA30DFD0084E92FE(iVar0, 3) && unk_0xFA30DFD0084E92FE(iVar0, 4)) && unk_0xFA30DFD0084E92FE(iVar0, 5))
		{
			return 0;
		}
	}
	else if (iParam0 == 2)
	{
		if ((unk_0xFA30DFD0084E92FE(iVar0, 6) && unk_0xFA30DFD0084E92FE(iVar0, 7)) && unk_0xFA30DFD0084E92FE(iVar0, 8))
		{
			return 0;
		}
	}
	else if (iParam0 == 3)
	{
		if ((unk_0xFA30DFD0084E92FE(iVar0, 9) && unk_0xFA30DFD0084E92FE(iVar0, 10)) && unk_0xFA30DFD0084E92FE(iVar0, 11))
		{
			return 0;
		}
	}
	return 1;
}

int func_269()//Position - 0xE0C1
{
	return Global_40001.f_29A9;
}

int func_270()//Position - 0xE0D0
{
	return Global_40001.f_29A8;
}

void func_271()//Position - 0xE0DF
{
	if (unk_0xFA30DFD0084E92FE(iLocal_109, 5))
	{
		func_272();
	}
	func_489();
}

void func_272()//Position - 0xE0F9
{
	int iVar0[3];
	int iVar1;
	var uVar2[3];
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11[3];
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	if (Local_144.f_2A2[0] > -1)
	{
		iVar9 = 0;
		iVar7 = 0;
		while (iVar7 < 3)
		{
			iVar0[iVar7] = func_87();
			iVar7++;
		}
		iVar7 = 0;
		while (iVar7 < 3)
		{
			if (Local_144.f_2A2[iVar7] > -1)
			{
				iVar12 = unk_0xCFA8A401AAD7BB5A(Local_144.f_2A2[iVar7]);
				if (unk_0x05086B70D2CFEA6F(iVar12))
				{
					iVar1 = unk_0x4ED43B67B3F05E0F(iVar12);
					if (func_13(iVar1, 0, 1))
					{
						if (!func_85(iVar1, 0))
						{
							iVar0[iVar7] = iVar1;
							uVar2[iVar7] = Local_1511[Local_144.f_2A2[iVar7] /*5*/].f_4;
							if (func_263(1))
							{
								if (func_73(iVar1, 1))
								{
									uVar11[iVar7] = func_58(iVar1, -2, 0, 0);
								}
							}
						}
					}
				}
			}
			iVar7++;
		}
		iVar8 = unk_0x6BAA0516CC970D99();
		if (func_83(unk_0xB5CEFD608600A09F()))
		{
			iVar13 = func_287();
			iVar14 = unk_0x5363B43856FA7779(iVar13);
			if (unk_0x96B1061E8F3CBC9A(iVar14))
			{
				iVar15 = unk_0xDE780EBA36114734(iVar14);
				if (unk_0x05086B70D2CFEA6F(iVar15))
				{
					iVar8 = iVar15;
				}
			}
		}
		iVar3 = func_450(0, Local_144.f_2C4);
		iVar4 = Local_144.f_2C5;
		iVar5 = func_450(0, Local_1511[iVar8 /*5*/].f_4);
		iVar6 = func_450(0, (Global_40001.f_2906 - func_452(&(Local_144.f_295), 0, 0)));
		func_286(iVar6);
		if (iVar6 > 30000)
		{
			iVar10 = 1;
		}
		else
		{
			iVar10 = 6;
		}
		func_273(iVar0[0], iVar0[1], iVar0[2], uVar2[0], uVar2[1], uVar2[2], iVar3, iVar4, iVar5, iVar6, &iVar9, iVar10, func_283(), uVar11[0], uVar11[1], uVar11[2]);
	}
}

void func_273(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, char* sParam12, var uParam13, var uParam14, var uParam15)//Position - 0xE2AA
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_280(0) == 0)
	{
		return;
	}
	func_279();
	iVar1 = 0;
	if (((Global_25848B[0] != iParam0 || Global_25848B[1] != iParam1) || Global_25848B[2] != iParam2) || *iParam10)
	{
		iVar1 = 1;
	}
	Global_25848B[0] = iParam0;
	Global_25848B[1] = iParam1;
	Global_25848B[2] = iParam2;
	Global_25848B[3] = 0;
	Global_25848B[4] = 0;
	if (Global_25848B[0] != func_87())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xD885B2234FC72D62(Global_25848B[0]);
			Global_258491[0 /*16*/] = { func_278(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_275(iParam3, &(Global_258491[0 /*16*/]), -1, 109, 8, 1, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, uParam13, 255, 0, 0, 0, 0, 1);
		}
	}
	if (Global_25848B[1] != func_87())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xD885B2234FC72D62(Global_25848B[1]);
			Global_258491[1 /*16*/] = { func_278(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_275(iParam4, &(Global_258491[1 /*16*/]), -1, 108, 7, 1, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, uParam14, 255, 0, 0, 0, 0, 1);
		}
	}
	if (Global_25848B[2] != func_87())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xD885B2234FC72D62(Global_25848B[2]);
			Global_258491[2 /*16*/] = { func_278(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_275(iParam5, &(Global_258491[2 /*16*/]), -1, 107, 6, 1, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, uParam15, 255, 0, 0, 0, 0, 1);
		}
	}
	func_274(iParam6, iParam7, "HUD_CHECKPOINTS", -1, 1, 5, 0, 0, 0, 0, 1, 1, 1, 0, 255, 0);
	if (func_487(unk_0xB5CEFD608600A09F()) == 0)
	{
		func_275(iParam8, "HUD_USCORE", -1, 1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_225(sParam12))
	{
		sVar2 = sParam12;
	}
	func_130(iParam9, sVar2, 0, 0, -1, 0, 3, 0, iParam11, 0, 0, 0, iParam11, 0, 0, 0, 0);
	*iParam10 = 0;
	func_129();
}

void func_274(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)//Position - 0xE4C6
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_132(4, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_14D262.f_1 = 1;
		func_131(4, iVar0);
		Global_14D262.f_C1A[iVar0] = iParam0;
		Global_14D262.f_C1A.f_AC[iVar0] = iParam1;
		StringCopy(&(Global_14D262.f_C1A.f_B[iVar0 /*16*/]), sParam2, 64);
		Global_14D262.f_C1A.f_B7[iVar0] = iParam3;
		Global_14D262.f_C1A.f_D8[iVar0] = iParam5;
		Global_14D262.f_C1A.f_C2[iVar0] = iParam4;
		Global_14D262.f_C1A.f_E3[iVar0] = iParam6;
		Global_14D262.f_C1A.f_10E[iVar0] = iParam7;
		Global_14D262.f_C1A.f_119[iVar0] = iParam8;
		Global_14D262.f_C1A.f_124[iVar0] = iParam9;
		Global_14D262.f_C1A.f_12F[iVar0] = iParam10;
		Global_14D262.f_C1A.f_13A[iVar0] = iParam11;
		Global_14D262.f_C1A.f_145[iVar0] = iParam13;
		Global_14D262.f_C1A.f_150[iVar0] = iParam14;
		Global_14D262.f_C1A.f_15B[iVar0] = iParam15;
		if (((iParam0 > 9 && iParam1 > 9) && unk_0x8ACB0C3FACC09467()) && iParam12)
		{
			Global_14D262.f_440 = 1;
		}
	}
}

void func_275(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24)//Position - 0xE620
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_132(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_14D262.f_1 = 1;
		func_131(6, iVar0);
		Global_14D262.f_EBA[iVar0] = iParam0;
		StringCopy(&(Global_14D262.f_EBA.f_B[iVar0 /*16*/]), sParam1, 64);
		Global_14D262.f_EBA.f_B7[iVar0] = iParam3;
		Global_14D262.f_EBA.f_AC[iVar0] = iParam2;
		Global_14D262.f_EBA.f_104[iVar0] = iParam4;
		Global_14D262.f_EBA.f_10F[iVar0] = iParam5;
		StringCopy(&(Global_14D262.f_EBA.f_11A[iVar0 /*16*/]), sParam6, 64);
		Global_14D262.f_EBA.f_1BB[iVar0] = iParam7;
		Global_14D262.f_EBA.f_1C6[iVar0] = iParam8;
		Global_14D262.f_EBA.f_1F1[iVar0] = iParam9;
		Global_14D262.f_EBA.f_1FC[iVar0] = iParam10;
		Global_14D262.f_EBA.f_CD[iVar0] = iParam11;
		Global_14D262.f_EBA.f_D8[iVar0] = iParam12;
		Global_14D262.f_EBA.f_E3[iVar0] = iParam13;
		Global_14D262.f_EBA.f_EE[iVar0] = iParam14;
		Global_14D262.f_EBA.f_F9[iVar0] = iParam15;
		Global_14D262.f_EBA.f_207[iVar0] = iParam16;
		Global_14D262.f_EBA.f_212[iVar0] = iParam17;
		Global_14D262.f_EBA.f_21D[iVar0] = iParam18;
		Global_14D262.f_EBA.f_228[iVar0] = iParam19;
		Global_14D262.f_EBA.f_233[iVar0] = iParam20;
		Global_14D262.f_EBA.f_23E[iVar0] = iParam21;
		Global_14D262.f_EBA.f_249[iVar0] = iParam22;
		Global_14D262.f_EBA.f_254[iVar0] = iParam23;
		Global_14D262.f_EBA.f_25F[iVar0] = iParam24;
		if (iParam15 == 5 && func_277())
		{
			Global_14D262.f_440 = 1;
		}
		if (unk_0x8ACB0C3FACC09467())
		{
			iVar2 = 0;
			unk_0x1BBB0A5225346008(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_14D262.f_444 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_14D262.f_443 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_14D262.f_440 = 1;
			}
			if (func_276())
			{
				Global_14D262.f_444 = 1;
			}
		}
	}
}

int func_276()//Position - 0xE882
{
	int iVar0;
	var uVar1;
	
	if (unk_0x8ACB0C3FACC09467())
	{
		unk_0x1BBB0A5225346008(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_277()//Position - 0xE8A6
{
	if (((unk_0x83D607D7994DEF3A() == 8 || unk_0x83D607D7994DEF3A() == 9) || unk_0x83D607D7994DEF3A() == 10) || unk_0x83D607D7994DEF3A() == 12)
	{
		return 1;
	}
	return 0;
}

struct<16> func_278(int iParam0, char* sParam1)//Position - 0xE8E4
{
	struct<16> Var0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, sParam1, 64);
			return Var0;
			break;
		
		case 1:
			StringCopy(&Var0, unk_0xFCB4C1AC11347344("HUD_POSFIRST"), 64);
			break;
		
		case 2:
			StringCopy(&Var0, unk_0xFCB4C1AC11347344("HUD_POSSECOND"), 64);
			break;
		
		case 3:
			StringCopy(&Var0, unk_0xFCB4C1AC11347344("HUD_POSTHIRD"), 64);
			break;
		
		case 4:
			StringCopy(&Var0, unk_0xFCB4C1AC11347344("HUD_POSFOURTH"), 64);
			break;
		
		case 5:
			StringCopy(&Var0, unk_0xFCB4C1AC11347344("HUD_POSFIFTH"), 64);
			break;
	}
	StringConCat(&Var0, " ", 64);
	StringConCat(&Var0, sParam1, 64);
	return Var0;
}

void func_279()//Position - 0xE986
{
	unk_0x4E0EC60D119222B1(8);
	unk_0x4E0EC60D119222B1(9);
	unk_0x4E0EC60D119222B1(6);
	unk_0x4E0EC60D119222B1(7);
	Global_258667 = 1;
}

int func_280(bool bParam0)//Position - 0xE9A9
{
	if (func_282())
	{
		return 0;
	}
	if (func_281())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_13(unk_0xB5CEFD608600A09F(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_281()//Position - 0xE9E0
{
	return Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_C4 != 0;
}

bool func_282()//Position - 0xE9F7
{
	return unk_0xFA30DFD0084E92FE(Global_240006, 12);
}

char* func_283()//Position - 0xEA09
{
	return "HUD_COUNTDOWN";
	switch (func_285(unk_0xB5CEFD608600A09F()))
	{
		case 131:
			return "AET_HOT_TARG";
		
		case 132:
			return "AET_CHK_COLL";
		
		case 133:
			switch (func_284())
			{
				case 0:
					return "AET_CHALL_LJ";
				
				case 1:
					return "AET_CHALL_LS";
				
				case 2:
					return "AET_CHALL_HS";
				
				case 3:
					return "AET_CHALL_LST";
				
				case 4:
					return "AET_CHALL_LW";
				
				case 5:
					return "AET_CHALL_NC";
				
				case 6:
					return "AET_CHALL_LP";
				
				case 7:
					return "AET_CHALL_VS";
				
				case 8:
					return "AET_CHALL_NM";
				
				case 9:
					return "AET_CHALL_RD";
				
				case 10:
					return "AET_CHALL_LF";
				
				case 11:
					return "AET_CHALL_LFL";
				
				case 12:
					return "AET_CHALL_LFI";
				
				case 13:
					return "AET_CHALL_LB";
				
				case 14:
					return "AET_CHALL_MB";
				
				case 15:
					return "AET_CHALL_HSH";
				
				case 16:
					return "AET_CHALL_DB";
				
				case 17:
					return "AET_CHALL_ML";
				
				case 18:
					return "AET_CHALL_LSN";
				
				default:
			}
			break;
		
		case 136:
			return "AET_PENNED";
		
		case 138:
			return "AET_PARCEL";
		
		case 139:
			return "AET_PROPERTY";
		
		case 140:
			return "AET_DDROP";
		
		case 141:
			return "AET_KCASTLE";
		
		case 144:
			return "AET_BLAST";
		
		case 129:
			return "AET_UWARF";
		
		case 146:
			return "AET_BEAST";
	}
	return "";
}

int func_284()//Position - 0xEBB3
{
	if (func_285(unk_0xB5CEFD608600A09F()) == 133)
	{
		return Global_267214.f_12C3;
	}
	return -1;
}

int func_285(int iParam0)//Position - 0xEBD6
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_18C80F[iVar0 /*558*/];
	}
	return -1;
}

void func_286(int iParam0)//Position - 0xEBF5
{
	if (IntToFloat(iParam0) < unk_0x11F9F9006143871A())
	{
		if (unk_0xFA30DFD0084E92FE(Global_267214.f_126F, 0))
		{
			if (!unk_0xF1734B55490E9045(&(Global_267214.f_1271)))
			{
				unk_0x4F9069EB2310944B(&(Global_267214.f_1271));
			}
			unk_0x1549CEF3D921CF97(1);
			unk_0x3857DADBD6EC8A54("FM_COUNTDOWN_30S_FIRA");
			unk_0xC1300D0F3A74E20B("GTAO_FM_Events_30_Sec_Countdown_Scene");
			unk_0x9B90420B04C07704("DisableFlightMusic", 0);
			unk_0x9B90420B04C07704("WantedMusicDisabled", 0);
			unk_0x9B90420B04C07704("AllowScoreAndRadio", 0);
			if (Global_267214.f_1279 > -1)
			{
				unk_0x26D344275839A25E(Global_267214.f_1279);
				Global_267214.f_1279 = -1;
			}
			Global_267214.f_126F = 0;
		}
	}
	else if (iParam0 < 30000)
	{
		if (unk_0xFA30DFD0084E92FE(Global_267214.f_126F, 0))
		{
			if (unk_0xFA30DFD0084E92FE(Global_267214.f_126F, 4))
			{
				if (!unk_0xFA30DFD0084E92FE(Global_267214.f_126F, 2))
				{
					if (unk_0x184DC585A2F8E4A2())
					{
						if ((!unk_0x3362CDE8460ED38B(unk_0x4D8215BCA285185C(unk_0x93DD0CE3F3963C56()), "OFF") && unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0)) && !unk_0xF1734B55490E9045(&(Global_267214.f_1271)))
						{
							StringCopy(&(Global_267214.f_1271), "", 32);
							unk_0x3857DADBD6EC8A54("FM_COUNTDOWN_30S_FIRA");
							unk_0xC1300D0F3A74E20B("GTAO_FM_Events_30_Sec_Countdown_Scene");
							unk_0x9B90420B04C07704("DisableFlightMusic", 0);
							unk_0x9B90420B04C07704("WantedMusicDisabled", 0);
							unk_0x9B90420B04C07704("AllowScoreAndRadio", 0);
							unk_0x1549CEF3D921CF97(1);
							unk_0xF0059F27F7BB6680(&(Global_267214.f_126F), 2);
						}
					}
				}
				else if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) && unk_0xFA30DFD0084E92FE(Global_267214.f_126F, 5))
				{
					unk_0x4F9069EB2310944B("OFF");
				}
			}
			else if (!unk_0xFA30DFD0084E92FE(Global_267214.f_126F, 1))
			{
				if (iParam0 < 10000)
				{
					unk_0x3857DADBD6EC8A54("FM_COUNTDOWN_10S");
				}
				else if (iParam0 < 20000)
				{
					unk_0x3857DADBD6EC8A54("FM_COUNTDOWN_20S");
				}
				else
				{
					unk_0x3857DADBD6EC8A54("FM_COUNTDOWN_30S");
				}
				unk_0xD6423910AAD8A379("GTAO_FM_Events_30_Sec_Countdown_Scene");
				unk_0xF0059F27F7BB6680(&(Global_267214.f_126F), 1);
			}
			else if (!unk_0xFA30DFD0084E92FE(Global_267214.f_126F, 4))
			{
				if (iParam0 < 27500)
				{
					if (unk_0xE32DCE487A4E2791() != 0)
					{
						if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) && !unk_0xDACE091F91A7F74E())
						{
							StringCopy(&(Global_267214.f_1271), unk_0x6451F9ED1F8684A5(), 32);
							unk_0x4F9069EB2310944B("OFF");
						}
						unk_0x1549CEF3D921CF97(1);
						unk_0xF0059F27F7BB6680(&(Global_267214.f_126F), 4);
					}
				}
			}
			if (iParam0 < 10000)
			{
				if (!unk_0xFA30DFD0084E92FE(Global_267214.f_126F, 3))
				{
					Global_267214.f_1279 = unk_0x2F079D1FC5F6CB99();
					unk_0xC4BA30B532FE260F(Global_267214.f_1279, "10S", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
					unk_0xF0059F27F7BB6680(&(Global_267214.f_126F), 3);
				}
			}
		}
		else if (iParam0 > 10000)
		{
			if (!unk_0xFA30DFD0084E92FE(Global_267214.f_126F, 0))
			{
				Global_267214.f_126F = 0;
				Global_267214.f_1279 = -1;
				unk_0x6FED2D1AA2EBF334("FM_COUNTDOWN_30S_KILL");
				unk_0x1549CEF3D921CF97(0);
				unk_0x3857DADBD6EC8A54("FM_PRE_COUNTDOWN_30S");
				unk_0x9B90420B04C07704("DisableFlightMusic", 1);
				unk_0x9B90420B04C07704("WantedMusicDisabled", 1);
				unk_0x9B90420B04C07704("AllowScoreAndRadio", 1);
				unk_0xF0059F27F7BB6680(&(Global_267214.f_126F), 0);
				if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) || unk_0xFA30DFD0084E92FE(Global_267214.f_126F, 2))
				{
					unk_0xF0059F27F7BB6680(&(Global_267214.f_126F), 2);
					unk_0xF0059F27F7BB6680(&(Global_267214.f_126F), 5);
				}
				else
				{
					unk_0x7CB6FD92BE491AD9(&(Global_267214.f_126F), 5);
					unk_0x7CB6FD92BE491AD9(&(Global_267214.f_126F), 2);
				}
			}
		}
	}
	else if (iParam0 < 40000 && iParam0 > 30000)
	{
		if (!unk_0xFA30DFD0084E92FE(Global_267214.f_126F, 0))
		{
			Global_267214.f_126F = 0;
			Global_267214.f_1279 = -1;
			unk_0x6FED2D1AA2EBF334("FM_COUNTDOWN_30S_KILL");
			unk_0x1549CEF3D921CF97(0);
			unk_0x3857DADBD6EC8A54("FM_PRE_COUNTDOWN_30S");
			unk_0x9B90420B04C07704("DisableFlightMusic", 1);
			unk_0x9B90420B04C07704("WantedMusicDisabled", 1);
			unk_0x9B90420B04C07704("AllowScoreAndRadio", 1);
			unk_0xF0059F27F7BB6680(&(Global_267214.f_126F), 0);
			if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
			{
				unk_0xF0059F27F7BB6680(&(Global_267214.f_126F), 2);
				unk_0xF0059F27F7BB6680(&(Global_267214.f_126F), 5);
			}
			else
			{
				unk_0x7CB6FD92BE491AD9(&(Global_267214.f_126F), 2);
				unk_0x7CB6FD92BE491AD9(&(Global_267214.f_126F), 5);
			}
		}
	}
}

var func_287()//Position - 0xEFD8
{
	if (unk_0x724D816EA203A79E(func_288()))
	{
		return func_288();
	}
	return func_80();
}

var func_288()//Position - 0xEFF6
{
	return Global_240006.f_3;
}

void func_289()//Position - 0xF004
{
	int iVar0;
	struct<42> Var1;
	int iVar2;
	int iVar3;
	var uVar4;
	
	Var1 = -1;
	Var1.f_16 = -1082130432;
	Var1.f_17 = 3;
	Var1.f_27 = -1;
	Var1.f_29 = -1;
	iVar0 = 0;
	while (iVar0 < unk_0x81C86888AEA2F49B())
	{
		Local_165.f_215[iVar0 /*42*/] = { Var1 };
		Local_165.f_215[iVar0 /*42*/].f_1 = func_87();
		if (Local_144.f_2A2[iVar0] > -1)
		{
			iVar3 = unk_0xCFA8A401AAD7BB5A(Local_144.f_2A2[iVar0]);
			if (unk_0x05086B70D2CFEA6F(iVar3))
			{
				iVar2 = unk_0x4ED43B67B3F05E0F(iVar3);
				if (!func_85(iVar2, 0))
				{
					Local_165.f_215[iVar0 /*42*/] = Local_144.f_2A2[iVar0];
					Local_165.f_215[iVar0 /*42*/].f_1 = iVar2;
					uVar4 = Local_1511[Local_144.f_2A2[iVar0] /*5*/].f_4;
					Local_165.f_215[iVar0 /*42*/].f_9 = uVar4;
					Local_165.f_215[iVar0 /*42*/].f_1F = -1;
				}
			}
		}
		iVar0++;
	}
}

void func_290()//Position - 0xF0F0
{
	if (Local_143 != -1 && Local_143.f_1 != -1)
	{
		if (unk_0x7121087DFC37DE0B() != func_292() && unk_0x05086B70D2CFEA6F(unk_0x7121087DFC37DE0B()))
		{
			func_291(Local_143.f_1, Local_143, func_247(unk_0x4ED43B67B3F05E0F(unk_0x7121087DFC37DE0B())));
			Local_143 = -1;
			Local_143.f_1 = -1;
		}
	}
}

void func_291(int iParam0, int iParam1, int iParam2)//Position - 0xF147
{
	struct<4> Var0;
	
	Var0 = -1500379167;
	Var0.f_1 = unk_0xB5CEFD608600A09F();
	Var0.f_2 = iParam0;
	Var0.f_3 = iParam1;
	if (!iParam2 == 0)
	{
		unk_0x38E776D9FA75679B(1, &Var0, 4, iParam2);
	}
}

int func_292()//Position - 0xF17F
{
	return -1;
}

void func_293()//Position - 0xF188
{
	if (func_297(0))
	{
		if (!unk_0xFA30DFD0084E92FE(iLocal_109, 4))
		{
			if (func_262(1))
			{
				unk_0xC4BA30B532FE260F(-1, "Enter_1st", "GTAO_Biker_Modes_Soundset", 0);
			}
			else
			{
				unk_0xC4BA30B532FE260F(-1, "Enter_1st", "GTAO_FM_Events_Soundset", 0);
			}
			unk_0xF0059F27F7BB6680(&iLocal_109, 4);
		}
	}
	else if (unk_0xFA30DFD0084E92FE(iLocal_109, 4))
	{
		if (func_262(1))
		{
			unk_0xC4BA30B532FE260F(-1, "Lose_1st", "GTAO_Biker_Modes_Soundset", 0);
		}
		else
		{
			unk_0xC4BA30B532FE260F(-1, "Lose_1st", "GTAO_FM_Events_Soundset", 0);
		}
		unk_0x7CB6FD92BE491AD9(&iLocal_109, 4);
	}
}

void func_294()//Position - 0xF20A
{
	unk_0xF0059F27F7BB6680(&(Global_267214.f_6BB), 26);
}

int func_295(int iParam0)//Position - 0xF21F
{
	if ((unk_0xFA30DFD0084E92FE(Global_24FB5C[iParam0 /*406*/].f_44.f_2, 9) && !(unk_0xFA30DFD0084E92FE(Global_24FB5C[iParam0 /*406*/].f_44.f_2, 6) && unk_0xFA30DFD0084E92FE(Global_24FB5C[iParam0 /*406*/].f_44.f_2, 7))) || ((unk_0xFA30DFD0084E92FE(Global_24FB5C[iParam0 /*406*/].f_44.f_2, 6) && !unk_0xFA30DFD0084E92FE(Global_24FB5C[iParam0 /*406*/].f_44.f_2, 7)) && !unk_0xFA30DFD0084E92FE(Global_24FB5C[iParam0 /*406*/].f_44.f_2, 9)))
	{
		return 1;
	}
	return 0;
}

void func_296()//Position - 0xF2BA
{
	unk_0xF0059F27F7BB6680(&(Global_267214.f_6BB), 19);
}

int func_297(int iParam0)//Position - 0xF2CF
{
	if (iParam0 >= 0)
	{
		if (Local_144.f_2A2[iParam0] == unk_0x6BAA0516CC970D99() && Local_1511[unk_0x6BAA0516CC970D99() /*5*/].f_4 > 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_298(int iParam0)//Position - 0xF306
{
	int iVar0;
	
	if (iParam0 >= 0)
	{
		iVar0 = Local_144.f_2A2[iParam0];
		if (iVar0 >= 0)
		{
			if (func_299(Local_1511[iVar0 /*5*/].f_4, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_299(int iParam0, int iParam1)//Position - 0xF33C
{
	return iParam0 > iParam1;
}

bool func_300(int iParam0)//Position - 0xF349
{
	return func_301(unk_0xBC25C936A095B5BA(), Local_144.f_A[iParam0 /*5*/], 1) < 500f;
}

float func_301(int iParam0, vector3 vParam1, bool bParam2)//Position - 0xF36B
{
	vector3 vVar0;
	
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		vVar0 = { unk_0x541C2AEF053615BC(iParam0, 1) };
	}
	else
	{
		vVar0 = { unk_0x541C2AEF053615BC(iParam0, 0) };
	}
	return unk_0xF0F2FC9DE291567F(vVar0, vParam1, bParam2);
}

bool func_302(int iParam0)//Position - 0xF3A5
{
	return func_301(unk_0xBC25C936A095B5BA(), Local_144.f_A[iParam0 /*5*/], 1) < 750f;
}

void func_303(int iParam0)//Position - 0xF3C7
{
	func_331(&(vLocal_127[iParam0 /*3*/]), Local_144.f_A[iParam0 /*5*/], iParam0);
	if (uLocal_110[iParam0])
	{
		func_326(Local_144.f_A[iParam0 /*5*/], iParam0);
		func_304(Local_144.f_A[iParam0 /*5*/], iParam0);
	}
}

void func_304(struct<4> Param0, var uParam1, int iParam2)//Position - 0xF412
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (Param0.f_3 == unk_0x6BAA0516CC970D99() && !unk_0xFA30DFD0084E92FE(uLocal_116[func_17(iParam2)], func_16(iParam2)))
	{
		Local_1511[unk_0x6BAA0516CC970D99() /*5*/].f_4++;
		if (iLocal_107 == 0)
		{
			iLocal_107 = unk_0xED678C85A82F0AB9();
		}
		iVar0 = func_324(SYSTEM::CEIL((IntToFloat(Local_1511[unk_0x6BAA0516CC970D99() /*5*/].f_4) / func_325())));
		iVar1 = func_322(SYSTEM::CEIL((IntToFloat(Local_1511[unk_0x6BAA0516CC970D99() /*5*/].f_4) / func_323())));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * Global_40001.f_2A53));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * Global_40001.f_2A54));
		if (func_32())
		{
			iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * func_321()));
			iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * func_320()));
		}
		if (func_244())
		{
			func_235(-59668082, iVar0, &uVar2, 0, 1, 0);
		}
		else
		{
			unk_0x98D5F29DCDF681F8(iVar0, "AM_CP_COLLECTION", &uVar3);
		}
		func_233();
		func_181(0, unk_0xBC25C936A095B5BA(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
		iLocal_118 = (iLocal_118 + iVar0);
		Global_2588F5 = iVar0;
		Local_1510.f_7 = (Local_1510.f_7 + iVar1);
		unk_0xF0059F27F7BB6680(&(uLocal_116[func_17(iParam2)]), func_16(iParam2));
		if (Local_1510.f_B == 0)
		{
			Local_1510.f_B = unk_0xB99C193A32DE341D();
		}
		func_305();
		unk_0xC4BA30B532FE260F(-1, "Checkpoint_Cash_Hit", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_305()//Position - 0xF57C
{
	if (!unk_0xFA30DFD0084E92FE(Local_1511[unk_0x6BAA0516CC970D99() /*5*/].f_2, 2))
	{
		unk_0xF0059F27F7BB6680(&(Local_1511[unk_0x6BAA0516CC970D99() /*5*/].f_2), 2);
		func_306(1);
	}
}

void func_306(bool bParam0)//Position - 0xF5AD
{
	var uVar0;
	
	if (bParam0)
	{
		if (!unk_0xFA30DFD0084E92FE(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_1, 7))
		{
			if ((!func_89(unk_0xB5CEFD608600A09F()) && !func_6(unk_0xB5CEFD608600A09F())) && !func_487(unk_0xB5CEFD608600A09F()))
			{
				if (func_319())
				{
					func_312(0);
					func_311();
				}
				if (func_485(0))
				{
					uVar0 = func_216(2476, -1, 0);
					unk_0x7CB6FD92BE491AD9(&uVar0, 0);
					func_311();
				}
				if (func_485(func_484(func_285(unk_0xB5CEFD608600A09F()))))
				{
					uVar0 = func_216(2476, -1, 0);
					unk_0x7CB6FD92BE491AD9(&uVar0, func_484(func_285(unk_0xB5CEFD608600A09F())));
					func_311();
				}
				if (func_310())
				{
					func_311();
				}
				if (func_285(unk_0xB5CEFD608600A09F()) > -1)
				{
					unk_0xF0059F27F7BB6680(&(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_1), 7);
					if (func_285(unk_0xB5CEFD608600A09F()) == 236)
					{
						func_309();
					}
				}
			}
		}
	}
	else if (unk_0xFA30DFD0084E92FE(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_1, 7))
	{
		unk_0x7CB6FD92BE491AD9(&(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_1), 7);
		func_307();
	}
}

void func_307()//Position - 0xF6C2
{
	if (func_308())
	{
		unk_0x7CB6FD92BE491AD9(&(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_1), 17);
	}
}

bool func_308()//Position - 0xF6E4
{
	return unk_0xFA30DFD0084E92FE(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_1, 17);
}

void func_309()//Position - 0xF6FF
{
	if (!func_308())
	{
		Global_267214.f_1818 = unk_0xED678C85A82F0AB9();
		unk_0xF0059F27F7BB6680(&(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_1), 17);
	}
}

int func_310()//Position - 0xF72D
{
	if (Global_252E21.f_47F.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_311()//Position - 0xF747
{
	if (func_310())
	{
		Global_252E21.f_47F.f_10 = 1;
	}
}

void func_312(int iParam0)//Position - 0xF760
{
	if (func_319())
	{
		if (iParam0 == 1)
		{
			if (Global_267214.f_111D == -1)
			{
				Global_267214.f_111D = 60000;
			}
			func_20(&(Global_267214.f_111B), 0, 0);
			if (Global_267214.f_1120 == -1)
			{
				Global_267214.f_1120 = 10000;
			}
			func_20(&(Global_267214.f_111E), 0, 0);
		}
		else
		{
			Global_1406A0 = 0;
			Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_8 = 0;
			func_318(1);
		}
		if ((!unk_0x517823CA390A19F6() && !func_317()) && !func_313(unk_0xB5CEFD608600A09F()))
		{
			Global_EF3AD = 0;
		}
	}
}

int func_313(int iParam0)//Position - 0xF7FA
{
	if (func_314(iParam0, 1))
	{
		if (Global_18402B[iParam0 /*770*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_314(int iParam0, bool bParam1)//Position - 0xF81E
{
	if (bParam1)
	{
		if (func_315(iParam0))
		{
			return 1;
		}
	}
	if (Global_18402B[iParam0 /*770*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_315(int iParam0)//Position - 0xF84A
{
	return func_316(iParam0);
}

bool func_316(int iParam0)//Position - 0xF858
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_D.f_1, 0);
}

bool func_317()//Position - 0xF872
{
	return Global_255A46.f_2D7;
}

void func_318(bool bParam0)//Position - 0xF881
{
	if (unk_0x7AF0088ABFA713B6())
	{
		if (!func_319())
		{
			if (func_13(unk_0xB5CEFD608600A09F(), 1, 0))
			{
				unk_0x0130A557FECA322C(unk_0xBC25C936A095B5BA(), 1);
				unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 342, false);
				unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 122, false);
			}
			unk_0xE8A86792404E8DB8(unk_0xB5CEFD608600A09F(), 1f);
			unk_0x6CF2954DEC49C61F(0);
			unk_0xEF791AEFDDE09A3D(1);
			if (Global_1406A0.f_1 == 0 || Global_1406A0.f_2 == 1)
			{
				Global_1406A0.f_2 = 0;
				if (bParam0)
				{
					unk_0x4D5701941275B494(0, 0);
				}
			}
		}
		else
		{
			if (func_13(unk_0xB5CEFD608600A09F(), 1, 1))
			{
				unk_0x0130A557FECA322C(unk_0xBC25C936A095B5BA(), 0);
				unk_0x8E25082A46F87892(unk_0xBC25C936A095B5BA(), joaat("weapon_unarmed"), true);
				unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 342, true);
				unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 122, true);
				unk_0xE8A86792404E8DB8(unk_0xB5CEFD608600A09F(), 0.5f);
				if (Global_1406A0.f_1 == 0 || Global_1406A0.f_2 == 1)
				{
					unk_0x4D5701941275B494(1, 0);
				}
			}
			unk_0x6CF2954DEC49C61F(1);
			unk_0xEF791AEFDDE09A3D(0);
		}
	}
}

bool func_319()//Position - 0xF97A
{
	return Global_1406A0;
}

float func_320()//Position - 0xF986
{
	return Global_40001.f_2998;
}

float func_321()//Position - 0xF995
{
	return Global_40001.f_2997;
}

var func_322(int iParam0)//Position - 0xF9A4
{
	switch (iParam0)
	{
		case 1:
			return Global_40001.f_29A3;
		
		case 2:
			return Global_40001.f_29A4;
		
		case 3:
			return Global_40001.f_29A5;
		
		case 4:
			return Global_40001.f_29A6;
		
		default:
	}
	return Global_40001.f_29A6;
}

float func_323()//Position - 0xF9FA
{
	return Global_40001.f_28A7;
}

var func_324(int iParam0)//Position - 0xFA09
{
	switch (iParam0)
	{
		case 1:
			return Global_40001.f_2999;
		
		case 2:
			return Global_40001.f_299A;
		
		case 3:
			return Global_40001.f_299B;
		
		case 4:
			return Global_40001.f_299C;
		
		case 5:
			return Global_40001.f_299D;
		
		case 6:
			return Global_40001.f_299E;
		
		case 7:
			return Global_40001.f_299F;
		
		case 8:
			return Global_40001.f_29A0;
		
		case 9:
		case 10:
		case 11:
		case 12:
			return Global_40001.f_29A1;
		
		default:
	}
	return Global_40001.f_29A2;
}

float func_325()//Position - 0xFAC1
{
	return Global_40001.f_28A6;
}

void func_326(vector3 vParam0, var uParam1, var uParam2, int iParam3)//Position - 0xFAD0
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (!unk_0xFA30DFD0084E92FE(Local_144.f_3[func_17(iParam3)], func_16(iParam3)))
	{
		if (!unk_0xFA30DFD0084E92FE(uLocal_115[func_17(iParam3)], func_16(iParam3)))
		{
			if (func_32())
			{
				fVar0 = 6f;
				fVar1 = 6f;
				fVar2 = 4f;
			}
			else
			{
				fVar0 = 3f;
				fVar1 = 2.5f;
				fVar2 = 2.8f;
			}
			if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vParam0 + Vector(fVar2, 0f, 0f), fVar1, fVar1, fVar0, 0, 1, 0))
			{
				if (func_327())
				{
					iLocal_114 = unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), Local_144.f_9);
					if (unk_0x7121087DFC37DE0B() != func_292() && unk_0x05086B70D2CFEA6F(unk_0x7121087DFC37DE0B()))
					{
						func_291(iLocal_114, iParam3, func_247(unk_0x4ED43B67B3F05E0F(unk_0x7121087DFC37DE0B())));
						Local_143 = -1;
						Local_143.f_1 = -1;
					}
					else
					{
						Local_143 = iParam3;
						Local_143.f_1 = iLocal_114;
					}
					unk_0xF0059F27F7BB6680(&(uLocal_115[func_17(iParam3)]), func_16(iParam3));
				}
			}
		}
		else if (func_1(&uLocal_121, 250, 0))
		{
			if (unk_0x7121087DFC37DE0B() != func_292() && unk_0x05086B70D2CFEA6F(unk_0x7121087DFC37DE0B()))
			{
				func_291(iLocal_114, iParam3, func_247(unk_0x4ED43B67B3F05E0F(unk_0x7121087DFC37DE0B())));
				Local_143.f_1 = -1;
				Local_143 = -1;
			}
			else
			{
				Local_143 = iParam3;
				Local_143.f_1 = iLocal_114;
			}
			func_35(&uLocal_121);
		}
	}
}

int func_327()//Position - 0xFC20
{
	if (!func_13(unk_0xB5CEFD608600A09F(), 1, 1))
	{
		return 0;
	}
	if (func_487(unk_0xB5CEFD608600A09F()))
	{
		if ((func_319() && !func_330()) || func_329(unk_0xB5CEFD608600A09F(), 21))
		{
			func_455(0);
		}
		else
		{
			func_455(7);
		}
		return 0;
	}
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		if (func_328(unk_0xBC25C936A095B5BA(), 0) != -1)
		{
			return 0;
		}
	}
	if (func_85(unk_0xB5CEFD608600A09F(), 0))
	{
		return 0;
	}
	if (!func_32())
	{
		if (unk_0x62083F80FA40AAD2(unk_0xBC25C936A095B5BA()))
		{
			func_455(1);
			return 0;
		}
	}
	return 1;
}

int func_328(int iParam0, int iParam1)//Position - 0xFCC1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (unk_0x5237AF95232D78C5(iParam0, iParam1))
		{
			iVar0 = unk_0x9FE9D386222EEE47(iParam0, iParam1);
			if (unk_0x724D816EA203A79E(iVar0))
			{
				iVar1 = unk_0x7C02672B11D4F65B(unk_0x6F79ECA8C83E4357(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x1AAF0C23233C57AF(iVar0, iVar3, 0))
					{
						if (unk_0x3187EF5798B5D209(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

bool func_329(int iParam0, int iParam1)//Position - 0xFD46
{
	return unk_0xFA30DFD0084E92FE(Global_24FB5C[iParam0 /*406*/].f_CC, iParam1);
}

bool func_330()//Position - 0xFD5F
{
	return Global_1406A0.f_1;
}

void func_331(int iParam0, vector3 vParam1, var uParam2, var uParam3, int iParam4)//Position - 0xFD6D
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	vVar0 = { vParam1 };
	unk_0xE45648BDBF3441F5(12, &iVar1, &iVar2, &iVar3, &uVar4);
	if (!unk_0xFA30DFD0084E92FE(uLocal_115[func_17(iParam4)], func_16(iParam4)) && !unk_0xFA30DFD0084E92FE(Local_144.f_3[func_17(iParam4)], func_16(iParam4)))
	{
		if (!unk_0x2DA8CA50A72528FB(*iParam0))
		{
			if (!func_390(vVar0, 0f, 0f, 0f, 0) && !func_390(vVar0, 0f, 0f, -2000f, 0))
			{
				*iParam0 = unk_0x390CF6C8AD6903B7(vVar0);
				unk_0xBF0E22F3E083C33D(*iParam0, 431);
				unk_0x12DB69036F6569F7(*iParam0, 9);
				unk_0x436D0272182E484D(*iParam0, "CPC_BLIP");
				func_338(*iParam0, 25, 1152319488, 1137180672);
				func_336(iParam0, 12);
				unk_0x222805B89367761E(*iParam0, 1);
			}
		}
		else if (unk_0xE186ACC7BE9B244E())
		{
			unk_0x7781946F1FC054FA(*iParam0, 255);
		}
		else
		{
			func_338(*iParam0, 25, 1152319488, 1137180672);
		}
		if (uLocal_111[iParam4])
		{
			if (!unk_0xFA30DFD0084E92FE(iLocal_117[func_17(iParam4)], func_16(iParam4)))
			{
				iVar5 = 52;
				if (func_32())
				{
					iParam0->f_1 = unk_0x36B796513B03DD2D(iVar5, vVar0 + Vector(4f, 0f, 0f), vVar0, 10f, iVar1, iVar2, iVar3, iParam0->f_2, 0);
					unk_0x73637D76F14E8643(iParam0->f_1, 7.5f, 7.5f, 100f);
				}
				else
				{
					iParam0->f_1 = unk_0x36B796513B03DD2D(iVar5, vVar0 + Vector(2.8f, 0f, 0f), vVar0, 5f, iVar1, iVar2, iVar3, iParam0->f_2, 0);
					unk_0x73637D76F14E8643(iParam0->f_1, 5f, 5f, 100f);
				}
				unk_0xF0059F27F7BB6680(&(iLocal_117[func_17(iParam4)]), func_16(iParam4));
			}
			else
			{
				func_335(&(iParam0->f_1), &(iParam0->f_2));
			}
			func_334(&vParam1);
		}
		else if (unk_0xFA30DFD0084E92FE(iLocal_117[func_17(iParam4)], func_16(iParam4)))
		{
			if (func_333(&(iParam0->f_1), &(iParam0->f_2)))
			{
				unk_0x2A6C7715B55EA005(iParam0->f_1);
				unk_0x7CB6FD92BE491AD9(&(iLocal_117[func_17(iParam4)]), func_16(iParam4));
			}
		}
	}
	else if (unk_0xFA30DFD0084E92FE(iLocal_117[func_17(iParam4)], func_16(iParam4)))
	{
		func_332(&(iParam0->f_1), &(iParam0->f_2), iParam0, iParam4);
	}
	else if (unk_0x2DA8CA50A72528FB(*iParam0))
	{
		unk_0x07B8ECB35A4ED3AC(iParam0);
	}
}

void func_332(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0xFFB9
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (*uParam0 != 0)
	{
		*uParam1 = (*uParam1 - 25);
		if (*uParam1 > 0)
		{
			unk_0xE45648BDBF3441F5(1, &uVar0, &uVar1, &uVar2, &uVar3);
			unk_0xCB8C65281BC495B3(*uParam0, uVar0, uVar1, uVar2, *uParam1);
			unk_0xF2BBD9C5DA174296(*uParam0, uVar0, uVar1, uVar2, *uParam1);
		}
		else
		{
			if (unk_0x2DA8CA50A72528FB(*iParam2))
			{
				unk_0x07B8ECB35A4ED3AC(iParam2);
			}
			unk_0x2A6C7715B55EA005(*uParam0);
			*uParam0 = 0;
			unk_0x7CB6FD92BE491AD9(&(iLocal_117[func_17(iParam3)]), func_16(iParam3));
		}
	}
}

int func_333(var uParam0, var uParam1)//Position - 0x1003D
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	*uParam1 = (*uParam1 - 10);
	if (*uParam1 > 0)
	{
		unk_0xE45648BDBF3441F5(12, &uVar0, &uVar1, &uVar2, &uVar3);
		unk_0xCB8C65281BC495B3(*uParam0, uVar0, uVar1, uVar2, *uParam1);
		unk_0xF2BBD9C5DA174296(*uParam0, uVar0, uVar1, uVar2, *uParam1);
		return 0;
	}
	else
	{
		return 1;
	}
	return 1;
}

void func_334(var uParam0)//Position - 0x1008F
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	iVar0 = 239;
	iVar1 = 250;
	iVar2 = 187;
	fVar3 = 5f;
	fVar5 = 64f;
	if (func_32())
	{
		fVar4 = 40f;
	}
	else
	{
		fVar4 = 15f;
	}
	if (!func_120(*uParam0))
	{
		*uParam0 = { *uParam0 + Vector(1.7f, 1.7f, 1.7f) };
		unk_0xD67B242A6B652531(*uParam0, iVar0, iVar1, iVar2, fVar4, fVar3, fVar5);
	}
}

int func_335(var uParam0, var uParam1)//Position - 0x100F4
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (*uParam1 < 175)
	{
		*uParam1 += 10;
		unk_0xE45648BDBF3441F5(12, &uVar0, &uVar1, &uVar2, &uVar3);
		unk_0xCB8C65281BC495B3(*uParam0, uVar0, uVar1, uVar2, *uParam1);
		unk_0xF2BBD9C5DA174296(*uParam0, uVar0, uVar1, uVar2, *uParam1);
		return 0;
	}
	else
	{
		return 1;
	}
	return 1;
}

void func_336(var uParam0, int iParam1)//Position - 0x10146
{
	int iVar0;
	
	if (unk_0x2DA8CA50A72528FB(*uParam0))
	{
		iVar0 = func_337(iParam1);
		unk_0x0D5352939CC40C16(*uParam0, iVar0);
	}
}

int func_337(int iParam0)//Position - 0x1016C
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

void func_338(int iParam0, int iParam1, float fParam2, float fParam3)//Position - 0x103D4
{
	unk_0x7781946F1FC054FA(iParam0, func_339(iParam0, iParam1, fParam2, fParam3));
}

int func_339(int iParam0, int iParam1, float fParam2, float fParam3)//Position - 0x103EE
{
	float fVar0;
	
	if (!func_295(Global_252E21))
	{
		fVar0 = func_343(iParam0, fParam3, fParam2);
		if (iParam1 == 0)
		{
			iParam1 = func_340();
		}
		return (SYSTEM::ROUND((SYSTEM::TO_FLOAT((255 - iParam1)) * fVar0)) + iParam1);
	}
	return 255;
}

int func_340()//Position - 0x10432
{
	if (func_341(Global_252E21, 1))
	{
		return 50;
	}
	return 0;
}

bool func_341(int iParam0, bool bParam1)//Position - 0x1044C
{
	if (Global_1406BF != 0)
	{
		return func_342(iParam0) != 0;
	}
	return func_314(iParam0, bParam1);
}

int func_342(int iParam0)//Position - 0x10472
{
	if (func_13(iParam0, 0, 1))
	{
		return Global_24FB5C[iParam0 /*406*/].f_1;
	}
	return 0;
}

float func_343(int iParam0, float fParam1, float fParam2)//Position - 0x10494
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar3;
	
	iVar0 = Global_252E21;
	vVar2 = { unk_0x5DC00ADB7E2FD7C2(iParam0) };
	vVar2.z = 0f;
	if ((Global_1417BB || func_389()) || func_388())
	{
		if (func_387(iVar0))
		{
			vVar3 = { func_346(iVar0) };
		}
		else if (func_345(iVar0))
		{
			vVar3 = { func_344(iVar0) };
		}
	}
	else
	{
		vVar3 = { unk_0x541C2AEF053615BC(unk_0xA95CF30C72EB526E(iVar0), 0) };
	}
	vVar3.z = 0f;
	fVar1 = SYSTEM::VMAG(vVar3 - vVar2);
	if (fVar1 < fParam1)
	{
		fVar1 = fParam1;
	}
	if (fVar1 > fParam2)
	{
		fVar1 = fParam2;
	}
	fVar1 = ((fVar1 - fParam1) / (fParam2 - fParam1));
	fVar1 = (fVar1 - 1f);
	fVar1 = (fVar1 * -1f);
	return fVar1;
}

Vector3 func_344(int iParam0)//Position - 0x1054E
{
	int iVar0;
	
	if (func_345(iParam0))
	{
		iVar0 = unk_0xA95CF30C72EB526E(iParam0);
		if (unk_0x724D816EA203A79E(iVar0))
		{
			return unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0);
		}
	}
	return 0f, 0f, 0f;
}

int func_345(int iParam0)//Position - 0x10582
{
	int iVar0;
	
	if (iParam0 != func_87())
	{
		if (func_13(iParam0, 1, 1))
		{
			iVar0 = unk_0xA95CF30C72EB526E(iParam0);
			if (unk_0x724D816EA203A79E(iVar0))
			{
				if (unk_0x4DBCE270B354E123(iVar0, 2056.204f, 2954.807f, -70.69892f, 110f, 90f, 15f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

Vector3 func_346(int iParam0)//Position - 0x105DE
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
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	if (iParam0 == func_87())
	{
	}
	if (func_386(iParam0))
	{
		iVar0 = func_385(iParam0);
		if (iVar0 != func_87())
		{
			if (!func_384(iVar0))
			{
				if (unk_0x724D816EA203A79E(Global_252E21.f_290[iVar0 /*3*/][1]))
				{
					return unk_0x541C2AEF053615BC(Global_252E21.f_290[iVar0 /*3*/][1], 0);
				}
				else
				{
					return Global_24FB5C[func_385(iParam0) /*406*/].f_131.f_5;
				}
			}
			else
			{
				iVar1 = func_380(iVar0);
				if (!iVar1 == -1)
				{
					return Global_197055.f_2A[iVar1 /*3*/];
				}
			}
		}
	}
	else if (func_379(iParam0))
	{
		if (unk_0x724D816EA203A79E(Global_267214.f_126))
		{
			return unk_0x541C2AEF053615BC(Global_267214.f_126, 0);
		}
	}
	else if (func_378(iParam0) && !func_377(iParam0))
	{
		iVar2 = Global_24FB5C[iParam0 /*406*/].f_131.f_4;
		if (iVar2 != func_87())
		{
			iVar3 = func_380(iVar2);
			if (!iVar3 == -1)
			{
				return Global_197055.f_2A[iVar3 /*3*/];
			}
		}
	}
	else if (func_376(iParam0) && !func_375(iParam0))
	{
		if (func_387(iParam0) && func_374())
		{
			return Global_197055.f_2A[Global_24FB5C[iParam0 /*406*/].f_131.f_1 /*3*/];
		}
		iVar4 = Global_24FB5C[iParam0 /*406*/].f_131.f_4;
		if (iVar4 != func_87())
		{
			if (func_373(iVar4))
			{
				iVar5 = func_369(iVar4);
				if (iVar5 != -1)
				{
					return Global_197055.f_2A[iVar5 /*3*/];
				}
			}
		}
	}
	else if (func_368(iParam0))
	{
		iVar6 = func_367(iParam0);
		if (iVar6 != func_87())
		{
			if (!func_366(iVar6))
			{
				if (unk_0x724D816EA203A79E(Global_252E21.f_2F1[iVar6]))
				{
					return unk_0x541C2AEF053615BC(Global_252E21.f_2F1[iVar6], 0);
				}
				else
				{
					return Global_24FB5C[func_367(iParam0) /*406*/].f_131.f_E;
				}
			}
			else
			{
				iVar7 = func_369(iVar6);
				if (!iVar7 == -1)
				{
					return Global_197055.f_2A[iVar7 /*3*/];
				}
			}
		}
	}
	else if (func_365(iParam0))
	{
		if (unk_0x724D816EA203A79E(Global_267214.f_128))
		{
			return unk_0x541C2AEF053615BC(Global_267214.f_128, 0);
		}
	}
	else if (func_364(iParam0) && !func_363(iParam0))
	{
		iVar8 = Global_24FB5C[iParam0 /*406*/].f_131.f_4;
		if (iVar8 != func_87())
		{
			if (func_362(iVar8))
			{
				iVar9 = func_358(iVar8);
				if (iVar9 != -1)
				{
					return func_357(iVar9);
				}
			}
		}
	}
	else if (func_356(iParam0) && !func_355(iParam0))
	{
		iVar10 = Global_24FB5C[iParam0 /*406*/].f_131.f_4;
		if (iVar10 != func_87())
		{
			if (func_354(iVar10))
			{
				iVar11 = func_350(iVar10);
				if (iVar11 != -1)
				{
					return Global_197055.f_2A[iVar11 /*3*/];
				}
			}
		}
	}
	else if (func_349(iParam0, 0))
	{
		iVar12 = func_348(iParam0);
		if (iVar12 != func_87())
		{
			if (!func_347(iVar12))
			{
				if (unk_0x724D816EA203A79E(Global_252E21.f_312[iVar12]))
				{
					return unk_0x541C2AEF053615BC(Global_252E21.f_312[iVar12], 0);
				}
				else
				{
					return Global_18C80F[func_348(iParam0) /*558*/].f_225;
				}
			}
			else
			{
				iVar13 = func_350(iVar12);
				if (!iVar13 == -1)
				{
					return Global_197055.f_2A[iVar13 /*3*/];
				}
			}
		}
	}
	if (func_364(iParam0))
	{
		return func_357(Global_24FB5C[iParam0 /*406*/].f_131.f_1);
	}
	return Global_197055.f_2A[Global_24FB5C[iParam0 /*406*/].f_131.f_1 /*3*/];
}

int func_347(int iParam0)//Position - 0x109AB
{
	if (iParam0 != func_87())
	{
		return unk_0xFA30DFD0084E92FE(Global_24FB5C[iParam0 /*406*/].f_131.f_15, 4);
	}
	return 0;
}

int func_348(int iParam0)//Position - 0x109D3
{
	if (iParam0 == func_87())
	{
		return iParam0;
	}
	return Global_24FB5C[iParam0 /*406*/].f_131.f_4;
}

int func_349(int iParam0, bool bParam1)//Position - 0x109F7
{
	int iVar0;
	
	if (bParam1)
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			if (unk_0x6F79ECA8C83E4357(iVar0) == -1988428699)
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_87())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1 && Global_24FB5C[iParam0 /*406*/].f_131.f_4 != func_87())
			{
				return func_159(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 12;
			}
		}
	}
	return 0;
}

int func_350(int iParam0)//Position - 0x10A85
{
	int iVar0;
	
	if (iParam0 != func_87())
	{
		iVar0 = func_353(iParam0);
		if (iVar0 != 0)
		{
			return func_351(iVar0);
		}
	}
	return -1;
}

int func_351(int iParam0)//Position - 0x10AAE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 122)
	{
		if (func_159(iVar0) == 11)
		{
			if (func_352(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_352(int iParam0)//Position - 0x10AE5
{
	switch (iParam0)
	{
		case 102:
			return 1;
		
		case 103:
			return 2;
		
		case 104:
			return 3;
		
		case 105:
			return 4;
		
		case 106:
			return 5;
		
		case 107:
			return 6;
		
		case 108:
			return 7;
		
		case 109:
			return 8;
		
		case 110:
			return 9;
		
		case 111:
			return 10;
		
		default:
	}
	return 0;
}

int func_353(int iParam0)//Position - 0x10B5C
{
	if (iParam0 != func_87())
	{
		return Global_18402B[iParam0 /*770*/].f_111.f_10A;
	}
	return 0;
}

int func_354(int iParam0)//Position - 0x10B80
{
	if (iParam0 != func_87())
	{
		if (Global_18402B[iParam0 /*770*/].f_111.f_10A != 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_355(int iParam0)//Position - 0x10BA9
{
	if (iParam0 != func_87())
	{
		if (func_356(iParam0) && Global_24FB5C[iParam0 /*406*/].f_131.f_4 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_356(int iParam0)//Position - 0x10BDE
{
	if (iParam0 != func_87())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_159(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 11;
			}
		}
	}
	return 0;
}

Vector3 func_357(int iParam0)//Position - 0x10C25
{
	switch (iParam0)
	{
		case 102:
			return 750.5f, -1322.3f, 26.2802f;
		
		case 103:
			return 331.9f, -974.9f, 30f;
		
		case 104:
			return -146f, -1270f, 28.3088f;
		
		case 105:
			return -17.7f, 225.7f, 106.7566f;
		
		case 106:
			return 894.4f, -2106.4f, 29.4768f;
		
		case 107:
			return -668f, -2431.5f, 12.9444f;
		
		case 108:
			return 213.4f, -3166.6f, 4.7903f;
		
		case 109:
			return 366.6f, 237.6f, 104.9f;
		
		case 110:
			return -1275.3f, -666.8f, 25.6332f;
		
		case 111:
			return -1188.8f, -1156.9f, 4.6582f;
		
		default:
	}
	return Global_197055.f_2A[iParam0 /*3*/];
}

int func_358(int iParam0)//Position - 0x10D30
{
	int iVar0;
	
	if (iParam0 != func_87())
	{
		iVar0 = func_361(iParam0);
		if (iVar0 != 0)
		{
			return func_359(iVar0);
		}
	}
	return -1;
}

int func_359(int iParam0)//Position - 0x10D59
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 122)
	{
		if (func_159(iVar0) == 11)
		{
			if (func_360(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_360(int iParam0)//Position - 0x10D90
{
	switch (iParam0)
	{
		case 102:
			return 1;
		
		case 103:
			return 2;
		
		case 104:
			return 3;
		
		case 105:
			return 4;
		
		case 106:
			return 5;
		
		case 107:
			return 6;
		
		case 108:
			return 7;
		
		case 109:
			return 8;
		
		case 110:
			return 9;
		
		case 111:
			return 10;
		
		default:
	}
	return 0;
}

int func_361(int iParam0)//Position - 0x10E07
{
	if (iParam0 != func_87())
	{
		return Global_18402B[iParam0 /*770*/].f_111.f_133;
	}
	return 0;
}

int func_362(int iParam0)//Position - 0x10E2B
{
	if (iParam0 != func_87())
	{
		return Global_18402B[iParam0 /*770*/].f_111.f_133 != 0;
	}
	return 0;
}

int func_363(int iParam0)//Position - 0x10E51
{
	if (iParam0 != func_87())
	{
		if (func_364(iParam0) && Global_24FB5C[iParam0 /*406*/].f_131.f_4 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_364(int iParam0)//Position - 0x10E86
{
	if (iParam0 != func_87())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_159(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 11;
			}
		}
	}
	return 0;
}

int func_365(int iParam0)//Position - 0x10ECD
{
	if (iParam0 != func_87())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_159(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 10;
			}
		}
	}
	return 0;
}

int func_366(int iParam0)//Position - 0x10F14
{
	if (iParam0 != func_87())
	{
		return unk_0xFA30DFD0084E92FE(Global_24FB5C[iParam0 /*406*/].f_131.f_A, 6);
	}
	return 0;
}

int func_367(int iParam0)//Position - 0x10F3C
{
	if (iParam0 == func_87())
	{
		return iParam0;
	}
	return Global_24FB5C[iParam0 /*406*/].f_131.f_4;
}

int func_368(int iParam0)//Position - 0x10F60
{
	if (iParam0 != func_87())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1 && Global_24FB5C[iParam0 /*406*/].f_131.f_4 != func_87())
			{
				return func_159(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 8;
			}
		}
	}
	return 0;
}

int func_369(int iParam0)//Position - 0x10FC0
{
	int iVar0;
	
	if (iParam0 == func_87())
	{
		return -1;
	}
	iVar0 = func_372(iParam0);
	if (!iVar0 == 0)
	{
		return func_370(iVar0);
	}
	return -1;
}

int func_370(int iParam0)//Position - 0x10FEF
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 122)
	{
		if (func_159(iVar0) == 9)
		{
			if (func_371(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_371(int iParam0)//Position - 0x11026
{
	switch (iParam0)
	{
		case 89:
			return 1;
		
		case 90:
			return 2;
		
		case 91:
			return 3;
		
		case 92:
			return 4;
		
		case 93:
			return 5;
		
		case 94:
			return 6;
		
		case 95:
			return 7;
		
		case 96:
			return 8;
		
		case 97:
			return 9;
		
		default:
	}
	return 0;
}

int func_372(int iParam0)//Position - 0x11092
{
	if (iParam0 == func_87())
	{
		return 0;
	}
	return Global_18402B[iParam0 /*770*/].f_111.f_100;
}

int func_373(int iParam0)//Position - 0x110B6
{
	if (iParam0 != func_87())
	{
		return Global_18402B[iParam0 /*770*/].f_111.f_100 != 0;
	}
	return 0;
}

int func_374()//Position - 0x110DC
{
	if (unk_0xFA30DFD0084E92FE(Global_197055.f_CDC, 13) || Global_197055.f_871)
	{
		return 1;
	}
	return 0;
}

int func_375(int iParam0)//Position - 0x11106
{
	if (iParam0 == func_87())
	{
		return 0;
	}
	if (func_376(iParam0) && Global_24FB5C[iParam0 /*406*/].f_131.f_4 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_376(int iParam0)//Position - 0x1113F
{
	if (iParam0 != func_87())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_159(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 9;
			}
		}
	}
	return 0;
}

int func_377(int iParam0)//Position - 0x11186
{
	if (iParam0 == func_87())
	{
		return 0;
	}
	if (func_378(iParam0) && Global_24FB5C[iParam0 /*406*/].f_131.f_4 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_378(int iParam0)//Position - 0x111BF
{
	if (iParam0 != func_87())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_159(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 4;
			}
		}
	}
	return 0;
}

int func_379(int iParam0)//Position - 0x11205
{
	if (iParam0 != func_87())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_159(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 6;
			}
		}
	}
	return 0;
}

int func_380(int iParam0)//Position - 0x1124B
{
	int iVar0;
	
	if (iParam0 == func_87())
	{
		return -1;
	}
	iVar0 = func_383(iParam0);
	if (!iVar0 == 0)
	{
		return func_381(iVar0);
	}
	return -1;
}

int func_381(int iParam0)//Position - 0x1127A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 122)
	{
		if (func_382(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_382(int iParam0)//Position - 0x112A6
{
	switch (iParam0)
	{
		case 22:
			return 1;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 3;
			break;
		
		case 25:
			return 4;
			break;
		
		case 26:
			return 5;
			break;
		
		case 27:
			return 6;
			break;
		
		case 28:
			return 7;
			break;
		
		case 29:
			return 8;
			break;
		
		case 30:
			return 9;
			break;
		
		case 31:
			return 10;
			break;
		
		case 32:
			return 11;
			break;
		
		case 33:
			return 12;
			break;
		
		case 34:
			return 13;
			break;
		
		case 35:
			return 14;
			break;
		
		case 36:
			return 15;
			break;
		
		case 37:
			return 16;
			break;
		
		case 38:
			return 17;
			break;
		
		case 39:
			return 18;
			break;
		
		case 40:
			return 19;
			break;
		
		case 41:
			return 20;
			break;
		
		case 70:
			return 21;
		
		case 71:
			return 22;
		
		case 72:
			return 23;
		
		case 73:
			return 24;
		
		case 74:
			return 25;
		
		case 75:
			return 26;
		
		case 76:
			return 27;
		
		case 77:
			return 28;
		
		case 78:
			return 29;
		
		case 79:
			return 30;
		
		case 80:
			return 31;
	}
	return 0;
}

int func_383(int iParam0)//Position - 0x11440
{
	if (iParam0 == func_87())
	{
		return 0;
	}
	return Global_18402B[iParam0 /*770*/].f_111.f_A8[5 /*12*/];
}

int func_384(int iParam0)//Position - 0x11466
{
	if (iParam0 != func_87())
	{
		return unk_0xFA30DFD0084E92FE(Global_24FB5C[iParam0 /*406*/].f_131, 6);
	}
	return 0;
}

int func_385(int iParam0)//Position - 0x1148C
{
	if (iParam0 == func_87())
	{
		return iParam0;
	}
	return Global_24FB5C[iParam0 /*406*/].f_131.f_4;
}

int func_386(int iParam0)//Position - 0x114B0
{
	if (iParam0 != func_87())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1 && Global_24FB5C[iParam0 /*406*/].f_131.f_4 != func_87())
			{
				return func_159(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 5;
			}
		}
	}
	return 0;
}

int func_387(int iParam0)//Position - 0x1150F
{
	if (iParam0 != func_87())
	{
		if (func_13(iParam0, 1, 1))
		{
			return Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1;
		}
		else if ((Global_140856 && iParam0 == unk_0xB5CEFD608600A09F()) && func_13(iParam0, 1, 0))
		{
			return Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1;
		}
	}
	return 0;
}

bool func_388()//Position - 0x11575
{
	return unk_0xFA30DFD0084E92FE(Global_1996AC, 5);
}

bool func_389()//Position - 0x11586
{
	return unk_0xFA30DFD0084E92FE(Global_1996AB, 1);
}

bool func_390(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x11597
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_391()//Position - 0x115DE
{
	if (func_295(unk_0xB5CEFD608600A09F()))
	{
		if (!unk_0xFA30DFD0084E92FE(iLocal_109, 2))
		{
			unk_0xF0059F27F7BB6680(&iLocal_109, 2);
			return 1;
		}
	}
	else if (unk_0xFA30DFD0084E92FE(iLocal_109, 2))
	{
		unk_0x7CB6FD92BE491AD9(&iLocal_109, 2);
		return 1;
	}
	return 0;
}

int func_392(vector3 vParam0, float fParam1, int iParam2)//Position - 0x11620
{
	int iVar0;
	
	iVar0 = -1;
	if (func_406() < 10)
	{
		iVar0 = func_405();
		func_393(vParam0, fParam1, iVar0, iParam2);
	}
	return iVar0;
}

void func_393(vector3 vParam0, var uParam1, int iParam2, var uParam3)//Position - 0x1164D
{
	func_394(vParam0, 0f, 0f, 0f, uParam1, 0, iParam2, uParam3);
}

void func_394(vector3 vParam0, vector3 vParam1, var uParam2, int iParam3, int iParam4, var uParam5)//Position - 0x11667
{
	struct<12> Var0;
	
	if (func_402(unk_0xB5CEFD608600A09F()) || uParam5)
	{
		if (Var0.f_A == 1)
		{
			func_401(&vParam0, &vParam1);
		}
		Var0 = { vParam0 };
		Var0.f_3 = { vParam1 };
		Var0.f_6 = uParam2;
		Var0.f_A = iParam3;
		if (func_396(Var0))
		{
			Global_24B2CE.f_2C.f_40 = func_342(unk_0xB5CEFD608600A09F());
			func_395(Var0, iParam4);
		}
	}
}

void func_395(struct<12> Param0, int iParam1)//Position - 0x116DD
{
	Global_24B2CE.f_169[iParam1 /*12*/] = { Param0 };
	Global_24B2CE.f_169[iParam1 /*12*/].f_9 = 1;
}

int func_396(struct<12> Param0)//Position - 0x11706
{
	struct<12> Var0[1];
	int iVar1;
	
	Var0[0 /*12*/] = { Param0 };
	Var0[0 /*12*/].f_9 = 1;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (Global_24B2CE.f_2C[iVar1 /*12*/].f_9 == 1)
		{
			if (!func_397(Global_24B2CE.f_2C[iVar1 /*12*/], &Var0))
			{
				return 0;
			}
		}
		iVar1++;
	}
	return 1;
}

int func_397(vector3 vParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10)//Position - 0x11766
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if ((uParam10[iVar0 /*12*/])->f_9)
		{
			switch ((uParam10[iVar0 /*12*/])->f_A)
			{
				case 0:
					switch (vParam0.f_A)
					{
						case 0:
							if (func_400(vParam0, vParam0.f_6, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_398(vParam0, vParam0.f_3, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 1:
					switch (vParam0.f_A)
					{
						case 0:
							if (func_400(vParam0, vParam0.f_6, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_398(vParam0, vParam0.f_3, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 2:
					break;
				}
		}
		iVar0++;
	}
	if (SYSTEM::VMAG(vParam0) == 0f)
	{
		return 0;
	}
	return 1;
}

bool func_398(vector3 vParam0, vector3 vParam1, vector3 vParam2, float fParam3)//Position - 0x1189F
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	fVar2 = (fParam3 * 0.7071068f);
	vVar0 = { vParam2 - Vector(fVar2, fVar2, fVar2) };
	vVar1 = { vParam2 + Vector(fVar2, fVar2, fVar2) };
	return func_399(vParam0, vParam1, vVar0, vVar1);
}

int func_399(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3)//Position - 0x118E3
{
	if (((((vParam0.x >= vParam2.x && vParam0.y >= vParam2.y) && vParam0.z >= vParam2.z) && vParam1.x <= vParam3.x) && vParam1.y <= vParam3.y) && vParam1.z <= vParam3.z)
	{
		return 1;
	}
	return 0;
}

int func_400(vector3 vParam0, float fParam1, vector3 vParam2, float fParam3)//Position - 0x1193A
{
	vector3 vVar0;
	
	vVar0 = { vParam2 - vParam0 };
	if ((SYSTEM::VMAG(vVar0) + fParam1) < fParam3)
	{
		return 1;
	}
	return 0;
}

void func_401(var uParam0, var uParam1)//Position - 0x11965
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (*uParam0 <= *uParam1)
	{
		vVar0.x = *uParam0;
		vVar1.x = *uParam1;
	}
	else
	{
		vVar0.x = *uParam1;
		vVar1.x = *uParam0;
	}
	if (uParam0->f_1 <= uParam1->f_1)
	{
		vVar0.y = uParam0->f_1;
		vVar1.y = uParam1->f_1;
	}
	else
	{
		vVar0.y = uParam1->f_1;
		vVar1.y = uParam0->f_1;
	}
	if (uParam0->f_2 <= uParam1->f_2)
	{
		vVar0.z = uParam0->f_2;
		vVar1.z = uParam1->f_2;
	}
	else
	{
		vVar0.z = uParam1->f_2;
		vVar1.z = uParam0->f_2;
	}
	*uParam0 = { vVar0 };
	*uParam1 = { vVar1 };
}

int func_402(int iParam0)//Position - 0x119FC
{
	if (((func_341(iParam0, 1) || func_404(iParam0)) || func_95(iParam0, 0)) || func_403(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_403(int iParam0)//Position - 0x11A38
{
	if (!func_13(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_18402B[iParam0 /*770*/].f_23;
}

int func_404(int iParam0)//Position - 0x11A5B
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_18C80F[iVar0 /*558*/] != -1;
	}
	return 0;
}

int func_405()//Position - 0x11A7C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!Global_24B2CE.f_169[iVar0 /*12*/].f_9)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_406()//Position - 0x11AAE
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_24B2CE.f_169[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_407()//Position - 0x11AE1
{
	if (!func_142())
	{
		return;
	}
	if (!unk_0x56BEECB328B6D29D(unk_0x1377080E9B0BD993()) == Global_140740.f_9)
	{
		return;
	}
	func_138();
}

void func_408()//Position - 0x11B0E
{
	Global_195F30 = 1;
	if (!unk_0xFA30DFD0084E92FE(Global_2692A7, 0))
	{
		unk_0xF0059F27F7BB6680(&Global_2692A7, 0);
		unk_0xF0059F27F7BB6680(&Global_195F31, 0);
	}
	if (!unk_0xFA30DFD0084E92FE(Global_2692A7, 1))
	{
		unk_0xF0059F27F7BB6680(&Global_2692A7, 1);
		unk_0xF0059F27F7BB6680(&Global_195F31, 1);
	}
	if (!unk_0xFA30DFD0084E92FE(Global_2692A7, 5))
	{
		unk_0xF0059F27F7BB6680(&Global_2692A7, 5);
		unk_0xF0059F27F7BB6680(&Global_195F31, 5);
	}
	if (unk_0x86BC948CAD7C61EF(-355737150))
	{
		unk_0xF72F6BB050622804(-355737150, 0, 0, 0);
	}
	if (unk_0x86BC948CAD7C61EF(-580979506))
	{
		unk_0xF72F6BB050622804(-580979506, 0, 0, 0);
	}
	if (unk_0x86BC948CAD7C61EF(-1426452475))
	{
		unk_0xF72F6BB050622804(-1426452475, 0, 0, 0);
	}
	if (unk_0x86BC948CAD7C61EF(745417724))
	{
		unk_0xF72F6BB050622804(745417724, 0, 0, 0);
	}
	if (unk_0x86BC948CAD7C61EF(-1305304906))
	{
		unk_0xF72F6BB050622804(-1305304906, 0, 0, 0);
	}
	if (unk_0x86BC948CAD7C61EF(-1543175077))
	{
		unk_0xF72F6BB050622804(-1543175077, 0, 0, 0);
	}
	if (unk_0x86BC948CAD7C61EF(-811770997))
	{
		unk_0xF72F6BB050622804(-811770997, 0, 0, 0);
	}
}

void func_409()//Position - 0x11C20
{
	char* sVar0;
	
	if (!unk_0xFA30DFD0084E92FE(iLocal_109, 5) && !unk_0x7382A6B79BD5F585())
	{
		if (Local_144.f_2C3)
		{
			sVar0 = "CPC_TITLEA";
		}
		else
		{
			sVar0 = "CPC_TITLE";
		}
		func_42(63, sVar0, "CPC_START", func_55(), -1, func_55(), 1);
		unk_0x621CEDEDDD531386();
		unk_0xF0059F27F7BB6680(&iLocal_109, 5);
	}
}

void func_410(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x11C77
{
	bool bVar0;
	
	unk_0x9B90420B04C07704("DisableFlightMusic", 1);
	if (iParam0 != 133)
	{
		unk_0x9B90420B04C07704("WantedMusicDisabled", 1);
	}
	Global_267214.f_1279 = -1;
	bVar0 = (func_95(unk_0xB5CEFD608600A09F(), 0) && func_91(unk_0xB5CEFD608600A09F()));
	if (bParam6)
	{
		func_427(21, 1);
	}
	else
	{
		func_426(iParam0, -1);
		if (func_7(unk_0xB5CEFD608600A09F()))
		{
			Global_180634.f_3 = iParam0;
		}
		else
		{
			func_425(iParam0);
		}
		Global_180634.f_4 = -1;
		if (func_7(unk_0xB5CEFD608600A09F()))
		{
			unk_0xF0059F27F7BB6680(&(Global_180634.f_1), 5);
		}
		if ((func_319() && !func_330()) || func_329(unk_0xB5CEFD608600A09F(), 21))
		{
			unk_0xF0059F27F7BB6680(&(Global_180634.f_1), 4);
		}
		unk_0x7CB6FD92BE491AD9(&(Global_180634.f_1), 17);
		unk_0xF0059F27F7BB6680(&(Global_180634.f_1), 20);
		if (func_424(iParam0))
		{
			func_423();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_420(fParam1);
		}
		if (fParam2 != 1f)
		{
			unk_0xDF53A66AEE1401AA(fParam2);
			if (iParam0 == 146)
			{
				unk_0xAEC867D0DBB7AFEB(0);
				unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 0, 0);
				unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
			}
		}
		if (func_418(iParam0))
		{
			unk_0xAEC867D0DBB7AFEB(0);
			unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 0, 0);
			unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
			unk_0xF0059F27F7BB6680(&(Global_180634.f_1), 8);
		}
		if (bParam3)
		{
			if (!Global_247C05)
			{
				func_416(1);
				if (func_268(0))
				{
					unk_0xF0059F27F7BB6680(&(Global_180634.f_1), 9);
				}
				unk_0xF0059F27F7BB6680(&(Global_180634.f_1), 14);
			}
		}
		if (bParam4)
		{
			func_414(1);
			unk_0xF0059F27F7BB6680(&(Global_180634.f_1), 12);
		}
		if (bParam5)
		{
			func_413();
			unk_0xF0059F27F7BB6680(&(Global_180634.f_1), 12);
		}
		if (!bParam6)
		{
			if (func_411(iParam0))
			{
				unk_0xF0059F27F7BB6680(&(Global_180634.f_1), 21);
			}
		}
	}
	Global_2620A0 = 1;
}

int func_411(int iParam0)//Position - 0x11E41
{
	switch (iParam0)
	{
		case 129:
		case 131:
		case 141:
		case 136:
		case 138:
		case 139:
		case 140:
		case 144:
		case 146:
		case 236:
			return 1;
		
		default:
	}
	if (func_412())
	{
		return 1;
	}
	return 0;
}

int func_412()//Position - 0x11E9C
{
	switch (func_284())
	{
		case 15:
		case 16:
		case 17:
		case 18:
			return 1;
		
		default:
	}
	return 0;
}

void func_413()//Position - 0x11ECA
{
	unk_0xF0059F27F7BB6680(&(Global_267214.f_1270), 0);
}

void func_414(bool bParam0)//Position - 0x11EDE
{
	int iVar0;
	
	if (bParam0)
	{
		Global_16B4F.f_8 = 1;
	}
	else
	{
		Global_16B4F.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 49)
	{
		func_415(iVar0);
		iVar0++;
	}
}

void func_415(int iParam0)//Position - 0x11F15
{
	Global_16B4F.f_A9[iParam0] = 1;
	Global_16B4F.f_A8 = 1;
}

void func_416(int iParam0)//Position - 0x11F2F
{
	if (func_417() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_247C05)
	{
		return;
	}
	Global_247C05 = iParam0;
	Global_247C07 = 0;
	Global_247C08 = 0;
}

int func_417()//Position - 0x11F64
{
	if ((((Global_EF3AE != -1 && Global_EF3AE != 33) && Global_EF3AE != 35) && Global_EF3AE != 37) && Global_EF3AE != 21)
	{
		return 1;
	}
	return 0;
}

int func_418(int iParam0)//Position - 0x11FAA
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_419(unk_0xB5CEFD608600A09F()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_419(int iParam0)//Position - 0x11FE8
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_18C80F[iVar0 /*558*/].f_1, 0);
	}
	return 0;
}

void func_420(float fParam0)//Position - 0x1200E
{
	float fVar0;
	
	if (unk_0x56BEECB328B6D29D(unk_0x1377080E9B0BD993()) == func_421())
	{
		return;
	}
	fVar0 = (Global_267214.f_130D - fParam0);
	if (unk_0x3C406FC829C1E14A(Global_267214.f_130E))
	{
		if (!Global_267214.f_130E == unk_0x8A55B15F4133C912() && unk_0x357058E632979E65(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_267214.f_130D = fParam0;
	Global_267214.f_130E = unk_0x8A55B15F4133C912();
}

int func_421()//Position - 0x1207A
{
	switch (func_422())
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

int func_422()//Position - 0x120AE
{
	return Global_62BD;
}

void func_423()//Position - 0x120B9
{
	Global_24FB5C[unk_0xB5CEFD608600A09F() /*406*/].f_C4 = 0;
	unk_0x7CB6FD92BE491AD9(&(Global_267214.f_11C3), 1);
}

int func_424(int iParam0)//Position - 0x120DB
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

void func_425(int iParam0)//Position - 0x120F5
{
	Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/] = iParam0;
}

void func_426(int iParam0, int iParam1)//Position - 0x1210A
{
	int iVar0;
	
	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_485(0) || func_485(func_484(iVar0)))
		{
			unk_0xF0059F27F7BB6680(&(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_1), 2);
		}
		else
		{
			unk_0x7CB6FD92BE491AD9(&(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_1), 2);
		}
	}
}

void func_427(int iParam0, bool bParam1)//Position - 0x12170
{
	if (bParam1)
	{
		if (!unk_0xFA30DFD0084E92FE(Global_24FB5C[unk_0xB5CEFD608600A09F() /*406*/].f_CC, iParam0))
		{
			unk_0xF0059F27F7BB6680(&(Global_24FB5C[unk_0xB5CEFD608600A09F() /*406*/].f_CC), iParam0);
		}
	}
	else if (unk_0xFA30DFD0084E92FE(Global_24FB5C[unk_0xB5CEFD608600A09F() /*406*/].f_CC, iParam0))
	{
		unk_0x7CB6FD92BE491AD9(&(Global_24FB5C[unk_0xB5CEFD608600A09F() /*406*/].f_CC), iParam0);
	}
}

void func_428()//Position - 0x121D3
{
	vector3 vVar0;
	var uVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	var uVar5;
	vector3 vVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;
	vector3 vVar10;
	float fVar11;
	
	if (func_13(unk_0xB5CEFD608600A09F(), 1, 1))
	{
		if ((!func_281() && !func_444(unk_0xB5CEFD608600A09F(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)) && !func_443(unk_0xB5CEFD608600A09F()))
		{
			fVar3 = 2.147484E+09f;
			iVar4 = -1;
			vVar6 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
			bVar7 = unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0);
			bVar8 = func_441();
			iVar2 = 0;
			while (iVar2 < 10)
			{
				iVar9 = Local_144.f_2D9[iVar2 /*2*/].f_1;
				if (unk_0x8EA6CABD14F1B89A(iVar9) && unk_0xE59B7F5A03335350(unk_0x19D7F09C2FABDDA0(iVar9), 0))
				{
					if (!bVar8)
					{
						if (bVar7 && unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0) == unk_0x19D7F09C2FABDDA0(iVar9))
						{
							func_306(1);
						}
					}
					if (func_30(iVar2, &vVar0, &uVar1))
					{
						vVar10 = { unk_0x541C2AEF053615BC(unk_0x19D7F09C2FABDDA0(iVar9), 1) };
						if (SYSTEM::VDIST(vVar10, vVar0) <= 10f)
						{
							if (func_440(vVar10))
							{
								unk_0xF0059F27F7BB6680(&uVar5, iVar2);
							}
							if (func_438(vVar10, vVar6))
							{
								if (!func_436(vVar0, 100f))
								{
									fVar11 = SYSTEM::VDIST(vVar10, vVar6);
									if (fVar11 < fVar3)
									{
										fVar3 = fVar11;
										iVar4 = iVar2;
									}
								}
							}
						}
					}
				}
				iVar2++;
			}
			Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_7 = uVar5;
			if ((unk_0x62083F80FA40AAD2(unk_0xBC25C936A095B5BA()) || (unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA()) && !unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()))) || Local_1511[unk_0x6BAA0516CC970D99() /*5*/].f_4 > 0)
			{
				if ((fVar3 < 2.147484E+09f && iVar4 >= 0) && iVar4 < 10)
				{
					if (func_30(iVar4, &vVar0, &uVar1))
					{
						iLocal_130 = 1;
						func_435(vVar0, 0f, 60f, 1, 20f, 0, 0, 10f, 1, 1, 0, 1, -1082130432);
						func_434(vVar0, 1, 0);
						func_430(10, 0, 0, 0, 0);
					}
				}
			}
			else
			{
				func_429();
			}
		}
		else
		{
			func_429();
		}
	}
}

void func_429()//Position - 0x123E4
{
	if (iLocal_130)
	{
		func_150();
		func_148();
		iLocal_130 = 0;
	}
}

void func_430(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x123FE
{
	if (Global_252E21.f_760.f_2B2.f_10 != func_87())
	{
		if (unk_0xFA30DFD0084E92FE(Global_24FB5C[Global_252E21.f_760.f_2B2.f_10 /*406*/].f_18C, 0) && func_431())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_24CF63 = 0;
	}
	Global_24B2CE.f_1E3 = iParam0;
	Global_24B2CE.f_1E3.f_1 = unk_0x8A55B15F4133C912();
	Global_24B2CE.f_1E3.f_2 = iParam1;
	Global_24B2CE.f_1E3.f_3 = iParam2;
	Global_24B2CE.f_1E3.f_4 = iParam3;
	Global_24B2CE.f_1E3.f_5 = iParam4;
}

int func_431()//Position - 0x1249D
{
	if (((func_228(unk_0xB5CEFD608600A09F()) == 229 || func_228(unk_0xB5CEFD608600A09F()) == 191) || func_433()) || func_432())
	{
		return 0;
	}
	return 1;
}

bool func_432()//Position - 0x124DD
{
	return Global_1805CE;
}

int func_433()//Position - 0x124E9
{
	if (Global_440000 == 6)
	{
		return 1;
	}
	return 0;
}

void func_434(vector3 vParam0, int iParam1, int iParam2)//Position - 0x124FE
{
	Global_24B2CE.f_2C.f_31 = { vParam0 };
	Global_24B2CE.f_2C.f_34 = iParam1;
	Global_24B2CE.f_2C.f_35 = iParam2;
}

void func_435(vector3 vParam0, float fParam1, float fParam2, int iParam3, float fParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)//Position - 0x12528
{
	struct<28> Var0;
	
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_15 = 1115815936;
	Var0.f_1B = -1082130432;
	if (unk_0x3C406FC829C1E14A(Global_24D43C.f_6))
	{
		if (!Global_24D43C.f_6 == unk_0x8A55B15F4133C912())
		{
			return;
		}
	}
	else
	{
		Global_24D43C.f_6 = unk_0x8A55B15F4133C912();
	}
	Var0.f_6 = Global_24D43C.f_6;
	Var0 = { vParam0 };
	Var0.f_5 = fParam1;
	Var0.f_4 = fParam2;
	Var0.f_7 = iParam3;
	Var0.f_3 = fParam4;
	Var0.f_8 = iParam6;
	Var0.f_9 = iParam5;
	Var0.f_A = 0;
	Var0.f_B = { 0f, 0f, 0f };
	Var0.f_E = { 0f, 0f, 0f };
	Var0.f_11 = 0f;
	Var0.f_15 = fParam7;
	Var0.f_16 = iParam8;
	if (func_402(unk_0xB5CEFD608600A09F()))
	{
		if (iParam11 || iParam5)
		{
			Var0.f_17 = 1;
		}
		else
		{
			Var0.f_17 = 0;
		}
	}
	else
	{
		Var0.f_17 = 0;
	}
	if (Var0.f_15 < 1f)
	{
		Var0.f_15 = 1f;
	}
	Var0.f_18 = iParam9;
	Var0.f_1A = iParam10;
	Var0.f_1B = iParam12;
	Global_24D43C = { Var0 };
}

bool func_436(vector3 vParam0, float fParam1)//Position - 0x12636
{
	return func_437(vParam0, fParam1, unk_0xB5CEFD608600A09F(), 0, 0);
}

int func_437(vector3 vParam0, float fParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x1264E
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam2 == iVar0 || iParam3 == 1)
		{
			iVar1 = iVar0;
			bVar2 = false;
			if (bParam4)
			{
				if (func_13(iVar1, 0, 1) && func_13(iParam2, 0, 1))
				{
					if (unk_0x343CB262BF0CDF5A(iVar1) == unk_0x343CB262BF0CDF5A(iParam2))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_13(iVar1, 0, 1) && func_13(iParam2, 0, 1))
				{
					if (Global_24E35D.f_105[iVar0])
					{
						if (SYSTEM::VDIST(Global_24E35D.f_83[iVar0 /*3*/], vParam0) < fParam1)
						{
							return 1;
						}
					}
					else if (SYSTEM::VDIST(func_29(iVar1), vParam0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_24E35D.f_105[iVar0])
				{
					if (SYSTEM::VDIST(Global_24E35D.f_83[iVar0 /*3*/], vParam0) < fParam1)
					{
						return 1;
					}
				}
				else if (func_13(iVar1, 0, 1))
				{
					if (SYSTEM::VDIST(func_29(iVar1), vParam0) < 1f)
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_438(vector3 vParam0, vector3 vParam1)//Position - 0x1276B
{
	vector3 vVar0;
	
	if (Local_144.f_8 == 3)
	{
		vVar0 = { func_439(Local_144.f_2C8) };
		if (SYSTEM::VDIST(vParam1, vVar0) < 3500f)
		{
			if (SYSTEM::VDIST(vParam0, vVar0) > 3500f)
			{
				return 0;
			}
		}
	}
	return 1;
}

Vector3 func_439(int iParam0)//Position - 0x127B9
{
	switch (iParam0)
	{
		case 0:
			return 1710.367f, -464.7253f, 169.8001f;
		
		case 1:
			return -966.3996f, -973.0624f, 2.8632f;
		
		case 2:
			return -1347.06f, 4123.072f, 62.2841f;
		
		case 3:
			return 1941.779f, 3847.167f, 34.3796f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_440(vector3 vParam0)//Position - 0x1282B
{
	vector3 vVar0;
	
	if (Local_144.f_8 == 3)
	{
		vVar0 = { func_439(Local_144.f_2C8) };
		if (SYSTEM::VDIST(vParam0, vVar0) > 2500f)
		{
			return 0;
		}
	}
	return 1;
}

int func_441()//Position - 0x12864
{
	if (((((func_442(unk_0xB5CEFD608600A09F()) || func_319()) || func_330()) || func_329(unk_0xB5CEFD608600A09F(), 21)) || func_7(unk_0xB5CEFD608600A09F())) || func_6(unk_0xB5CEFD608600A09F()))
	{
		return 1;
	}
	return 0;
}

int func_442(int iParam0)//Position - 0x128BC
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_18C80F[iVar0 /*558*/].f_1, 7);
	}
	return 0;
}

int func_443(int iParam0)//Position - 0x128E2
{
	if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_13, 14))
	{
		return 1;
	}
	if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_13, 11))
	{
		return 1;
	}
	return 0;
}

int func_444(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)//Position - 0x12921
{
	if (Global_18402B[iParam0 /*770*/].f_111.f_15 > 0)
	{
		if (bParam1)
		{
			if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_13, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (!bParam2)
	{
		if (func_447(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_158(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_446(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_378(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_445(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_376(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_368(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_364(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_356(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_349(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_445(int iParam0)//Position - 0x12A21
{
	if (iParam0 != func_87())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_159(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 7;
			}
		}
	}
	return 0;
}

int func_446(int iParam0)//Position - 0x12A67
{
	if (iParam0 != func_87())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_159(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 1;
			}
		}
	}
	return 0;
}

int func_447(int iParam0)//Position - 0x12AAD
{
	if (iParam0 != func_87())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_159(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 0;
			}
		}
	}
	return 0;
}

void func_448(var uParam0, char* sParam1)//Position - 0x12AF3
{
	char* sVar0;
	
	if (func_280(0) == 0)
	{
		return;
	}
	sVar0 = "HUD_STARTING";
	if (!func_225(sParam1))
	{
		sVar0 = sParam1;
	}
	func_130(uParam0, sVar0, 0, 0, -1, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
}

char* func_449(int iParam0)//Position - 0x12B32
{
	char* sVar0;
	
	sVar0 = unk_0x1377080E9B0BD993();
	return "HUD_STARTING";
	if (unk_0x3362CDE8460ED38B(sVar0, "am_hot_target"))
	{
		return "AST_HOT_TARG";
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "am_cp_collection"))
	{
		return "AST_CHK_COLL";
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "am_challenges"))
	{
		switch (iParam0)
		{
			case 0:
				return "AST_CHALL_LJ";
			
			case 1:
				return "AST_CHALL_LS";
			
			case 2:
				return "AST_CHALL_HS";
			
			case 3:
				return "AST_CHALL_LST";
			
			case 4:
				return "AST_CHALL_LW";
			
			case 5:
				return "AST_CHALL_NC";
			
			case 6:
				return "AST_CHALL_LP";
			
			case 7:
				return "AST_CHALL_VS";
			
			case 8:
				return "AST_CHALL_NM";
			
			case 9:
				return "AST_CHALL_RD";
			
			case 10:
				return "AST_CHALL_LF";
			
			case 11:
				return "AST_CHALL_LFL";
			
			case 12:
				return "AST_CHALL_LFI";
			
			case 13:
				return "AST_CHALL_LB";
			
			case 14:
				return "AST_CHALL_MB";
			
			case 15:
				return "AST_CHALL_HSH";
			
			case 16:
				return "AST_CHALL_DB";
			
			case 17:
				return "AST_CHALL_ML";
			
			case 18:
				return "AST_CHALL_LSN";
			
			default:
		}
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "am_penned_in"))
	{
		return "AST_PENNED";
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "am_pass_the_parcel"))
	{
		return "AST_PARCEL";
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "am_hot_property"))
	{
		return "AST_PROPERTY";
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "am_dead_drop"))
	{
		return "AST_DDROP";
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "am_king_of_the_castle"))
	{
		return "AST_KCASTLE";
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "AM_CRIMINAL_DAMAGE"))
	{
		return "AST_BLAST";
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "AM_KILL_LIST"))
	{
		return "AST_UWARF";
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "AM_HUNT_THE_BEAST"))
	{
		return "AST_BEAST";
	}
	return "";
}

int func_450(int iParam0, int iParam1)//Position - 0x12D3B
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void func_451(int iParam0)//Position - 0x12D51
{
	if (IntToFloat(iParam0) < unk_0x11F9F9006143871A())
	{
		Global_267214.f_126F = 0;
	}
	else if (iParam0 < 6000)
	{
		if (!unk_0xFA30DFD0084E92FE(Global_267214.f_126F, 1))
		{
			unk_0xC4BA30B532FE260F(-1, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", 0);
			Global_267214.f_126F = 0;
			unk_0xF0059F27F7BB6680(&(Global_267214.f_126F), 1);
		}
	}
}

int func_452(var uParam0, bool bParam1, bool bParam2)//Position - 0x12DA8
{
	if (unk_0x7AF0088ABFA713B6() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), *uParam0);
		}
		else
		{
			return unk_0xCCA9497DA4595710(unk_0x1C44CABA911F93F7(), *uParam0);
		}
	}
	return unk_0xCCA9497DA4595710(unk_0x105601648511CC64(), *uParam0);
}

void func_453(bool bParam0)//Position - 0x12DEF
{
	int iVar0;
	vector3 vVar1;
	
	if (func_32())
	{
		if (func_13(unk_0xB5CEFD608600A09F(), 1, 1))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (((!bParam0 && unk_0x8EA6CABD14F1B89A(Local_144.f_2D9[iVar0 /*2*/].f_1)) && unk_0xE59B7F5A03335350(unk_0x19D7F09C2FABDDA0(Local_144.f_2D9[iVar0 /*2*/].f_1), 0)) && unk_0x1AAF0C23233C57AF(unk_0x19D7F09C2FABDDA0(Local_144.f_2D9[iVar0 /*2*/].f_1), -1, 0))
				{
					if (!unk_0x2DA8CA50A72528FB(iLocal_138[iVar0]))
					{
						iLocal_138[iVar0] = unk_0x511FE22BCF5353CD(unk_0xD14280F674B4DBF4(Local_144.f_2D9[iVar0 /*2*/].f_1));
						unk_0x12DB69036F6569F7(iLocal_138[iVar0], 9);
						unk_0x436D0272182E484D(iLocal_138[iVar0], "AMCH_AC");
						unk_0xBF0E22F3E083C33D(iLocal_138[iVar0], func_454(iVar0));
						func_336(&(iLocal_138[iVar0]), 9);
					}
					else
					{
						vVar1 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
						if (SYSTEM::VDIST(vVar1, unk_0x541C2AEF053615BC(unk_0x19D7F09C2FABDDA0(Local_144.f_2D9[iVar0 /*2*/].f_1), 1)) <= 150f)
						{
							unk_0x222805B89367761E(iLocal_138[iVar0], 1);
						}
						else
						{
							unk_0x222805B89367761E(iLocal_138[iVar0], 0);
						}
					}
				}
				else if (unk_0x2DA8CA50A72528FB(iLocal_138[iVar0]))
				{
					unk_0x07B8ECB35A4ED3AC(&(iLocal_138[iVar0]));
				}
				iVar0++;
			}
		}
	}
}

int func_454(int iParam0)//Position - 0x12F3F
{
	switch (Local_144.f_2D9[iParam0 /*2*/])
	{
		case joaat("maverick"):
			return 64;
		
		case joaat("mammatus"):
			return 423;
		
		default:
	}
	return -1;
}

void func_455(int iParam0)//Position - 0x12F6E
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	
	if (!unk_0x7382A6B79BD5F585())
	{
		switch (iParam0)
		{
			case 0:
				if (!unk_0xFA30DFD0084E92FE(iLocal_128, iParam0))
				{
					if (!unk_0xE186ACC7BE9B244E())
					{
						func_458("CPC_PASSIVE", 30000);
						func_154(1);
						unk_0xF0059F27F7BB6680(&iLocal_128, iParam0);
					}
				}
				break;
			
			case 1:
				if (!unk_0xFA30DFD0084E92FE(iLocal_128, iParam0))
				{
					if (!unk_0xE186ACC7BE9B244E())
					{
						func_458("CPC_NOAIR", 30000);
						func_154(1);
						unk_0xF0059F27F7BB6680(&iLocal_128, iParam0);
					}
				}
				break;
			
			case 2:
				if (!unk_0xFA30DFD0084E92FE(iLocal_128, iParam0))
				{
					if ((!unk_0xE186ACC7BE9B244E() && !unk_0xF16DAFF595E80F7C()) && func_32())
					{
						func_458("AMCH_AIRAV", 30000);
						func_154(1);
						unk_0xF0059F27F7BB6680(&iLocal_128, iParam0);
					}
				}
				break;
			
			case 3:
				if (!unk_0xFA30DFD0084E92FE(iLocal_128, iParam0))
				{
					if (!unk_0xE186ACC7BE9B244E())
					{
						func_458("AMCH_BLOW", 30000);
						func_154(1);
						unk_0xF0059F27F7BB6680(&iLocal_128, iParam0);
					}
				}
				break;
			
			case 4:
				if (!unk_0xFA30DFD0084E92FE(iLocal_128, iParam0))
				{
					if (!unk_0xE186ACC7BE9B244E() && !func_457(63))
					{
						if (Local_144.f_2C3)
						{
							sVar0 = "CPC_HELPA";
						}
						else
						{
							sVar0 = "CPC_HELP";
						}
						func_458(sVar0, 30000);
						func_154(1);
						unk_0xF0059F27F7BB6680(&iLocal_128, iParam0);
					}
				}
				break;
			
			case 5:
				if (!unk_0xFA30DFD0084E92FE(iLocal_128, iParam0))
				{
					if (((!unk_0xE186ACC7BE9B244E() && !func_457(63)) && !unk_0xF16DAFF595E80F7C()) && unk_0xFA30DFD0084E92FE(iLocal_128, 4))
					{
						if (Local_144.f_2C3)
						{
							sVar1 = "CPC_HELPA2";
						}
						else
						{
							sVar1 = "CPC_HELP2";
						}
						func_458(sVar1, 30000);
						func_154(1);
						unk_0xF0059F27F7BB6680(&iLocal_128, iParam0);
					}
				}
				break;
			
			case 6:
				if (!unk_0xFA30DFD0084E92FE(iLocal_128, iParam0))
				{
					if (((!unk_0xE186ACC7BE9B244E() && !func_457(63)) && !unk_0xF16DAFF595E80F7C()) && unk_0xFA30DFD0084E92FE(iLocal_128, 5))
					{
						if (Local_144.f_2C3)
						{
							sVar2 = "CPC_WARNA";
						}
						else
						{
							sVar2 = "CPC_WARN";
						}
						func_456(sVar2, func_145(), 30000);
						func_154(1);
						unk_0xC4BA30B532FE260F(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", 0);
						unk_0xF0059F27F7BB6680(&iLocal_128, iParam0);
					}
				}
				break;
			
			case 7:
				if (!unk_0xFA30DFD0084E92FE(iLocal_128, iParam0))
				{
					if (!unk_0xE186ACC7BE9B244E())
					{
						func_458("CPC_PASSIV1", 30000);
						func_154(1);
						unk_0xF0059F27F7BB6680(&iLocal_128, iParam0);
					}
				}
				break;
			}
	}
}

void func_456(char* sParam0, char* sParam1, int iParam2)//Position - 0x131F5
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0xC9C304D0AABE1335(sParam1);
	unk_0x72F8FA06CC9EC899(0, 0, 0, iParam2);
}

bool func_457(int iParam0)//Position - 0x13212
{
	return Global_252E21.f_A8F[0 /*80*/].f_1 == iParam0;
}

void func_458(char* sParam0, int iParam1)//Position - 0x13229
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, 1, iParam1);
}

void func_459(int iParam0)//Position - 0x13240
{
	Local_1511[unk_0x6BAA0516CC970D99() /*5*/].f_3 = iParam0;
}

void func_460(bool bParam0)//Position - 0x13255
{
	if (bParam0)
	{
		unk_0xF0059F27F7BB6680(&(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_1), 4);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_1), 4);
	}
}

int func_461(bool bParam0, bool bParam1, bool bParam2)//Position - 0x13289
{
	if (func_483(unk_0xB5CEFD608600A09F(), 29))
	{
		return 0;
	}
	if (func_329(unk_0xB5CEFD608600A09F(), 21))
	{
		return 0;
	}
	if (unk_0x2F7EEEA6378AC19B())
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0xD92FE7FDA11C7334())
		{
			return 0;
		}
	}
	if (func_313(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	if (func_482())
	{
		return 0;
	}
	if (bParam2)
	{
		if (func_481(unk_0xB5CEFD608600A09F()))
		{
			return 0;
		}
	}
	if (func_480())
	{
		return 0;
	}
	if (bParam0)
	{
		if (func_89(unk_0xB5CEFD608600A09F()))
		{
			return 0;
		}
	}
	else if (func_473(unk_0xB5CEFD608600A09F()) == 3)
	{
		return 0;
	}
	if (func_472(unk_0xB5CEFD608600A09F()) != func_87() && func_472(unk_0xB5CEFD608600A09F()) == func_72(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	if (func_471(func_178()) && func_285(unk_0xB5CEFD608600A09F()) != 236)
	{
		return 0;
	}
	if (func_470())
	{
		return 0;
	}
	if (func_281())
	{
		return 0;
	}
	if (unk_0x517823CA390A19F6())
	{
		return 0;
	}
	if (func_315(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	if (!func_468())
	{
		return 0;
	}
	if (func_329(unk_0xB5CEFD608600A09F(), 0) || func_329(unk_0xB5CEFD608600A09F(), 3))
	{
		return 0;
	}
	if ((func_329(unk_0xB5CEFD608600A09F(), 12) || func_329(unk_0xB5CEFD608600A09F(), 14)) || func_329(unk_0xB5CEFD608600A09F(), 13))
	{
		return 0;
	}
	if (func_444(unk_0xB5CEFD608600A09F(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0) || func_386(unk_0xB5CEFD608600A09F()))
	{
		if (!func_388() && !Global_262215)
		{
			return 0;
		}
	}
	if (func_467(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	if (func_466())
	{
		return 0;
	}
	if (Global_193981)
	{
		return 0;
	}
	if (func_403(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	if (func_465())
	{
		return 0;
	}
	if (func_463(unk_0xB5CEFD608600A09F()) && Global_183ECC.f_AB)
	{
		return 0;
	}
	if (func_462())
	{
		return 0;
	}
	return 1;
}

bool func_462()//Position - 0x134A2
{
	return Global_197055.f_1C;
}

int func_463(int iParam0)//Position - 0x134B0
{
	if (func_464(Global_18402B[iParam0 /*770*/].f_111.f_15))
	{
		return 1;
	}
	return 0;
}

int func_464(int iParam0)//Position - 0x134D2
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_465()//Position - 0x13501
{
	if (Global_40E7E8.f_31D > -1)
	{
		return 1;
	}
	return 0;
}

bool func_466()//Position - 0x13519
{
	return Global_16B4F.f_142 > 0;
}

bool func_467(int iParam0)//Position - 0x1352A
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_13, 11);
}

int func_468()//Position - 0x13546
{
	if (func_469() == 0)
	{
		return 1;
	}
	return 0;
}

int func_469()//Position - 0x1355B
{
	return Global_1406D2.f_12;
}

bool func_470()//Position - 0x13569
{
	return Global_140856;
}

int func_471(int iParam0)//Position - 0x13575
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
			return 1;
		
		default:
	}
	return 0;
}

int func_472(int iParam0)//Position - 0x135B9
{
	return Global_18C80F[iParam0 /*558*/].f_B.f_23;
}

int func_473(int iParam0)//Position - 0x135CE
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_404(iParam0) && !func_7(iParam0)) && !unk_0xFA30DFD0084E92FE(Global_18C80F[iParam0 /*558*/].f_1, 8));
	bVar2 = func_89(iParam0);
	uVar3 = func_319();
	uVar4 = func_474();
	if ((bVar1 && (func_442(iParam0) || func_419(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_91(iParam0)) && !func_160(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_267214.f_1312.f_D0 != iVar0)
	{
		Global_267214.f_1312.f_D0 = iVar0;
	}
	return iVar0;
}

int func_474()//Position - 0x1368C
{
	if ((func_90(unk_0xB5CEFD608600A09F(), 21) || func_90(unk_0xB5CEFD608600A09F(), 22)) || func_478())
	{
		return 1;
	}
	if (func_476())
	{
		func_475(22);
		return 1;
	}
	return 0;
}

void func_475(int iParam0)//Position - 0x136D1
{
	unk_0xF0059F27F7BB6680(&(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_4), iParam0);
}

int func_476()//Position - 0x136EE
{
	if (func_95(unk_0xB5CEFD608600A09F(), 0))
	{
		if ((func_319() && !func_330()) || func_329(unk_0xB5CEFD608600A09F(), 21))
		{
			return 1;
		}
		else
		{
			func_477(27);
		}
	}
	return 0;
}

void func_477(int iParam0)//Position - 0x13731
{
	unk_0x7CB6FD92BE491AD9(&(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_4), iParam0);
}

int func_478()//Position - 0x1374E
{
	return func_479(306, -1);
}

int func_479(int iParam0, int iParam1)//Position - 0x1375E
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2705A2[iParam0 /*3*/][func_212(iParam1)];
	if (unk_0x9CADE88F210A0BAE(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_480()//Position - 0x1378A
{
	return Global_18402B[unk_0xB5CEFD608600A09F() /*770*/] == 5;
}

int func_481(int iParam0)//Position - 0x1379F
{
	if (Global_24FB5C[iParam0 /*406*/].f_101.f_4 != 0 || Global_24FB5C[iParam0 /*406*/].f_101.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_482()//Position - 0x137D3
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_27.f_12, 0);
}

bool func_483(int iParam0, int iParam1)//Position - 0x137EF
{
	return unk_0xFA30DFD0084E92FE(Global_18C80F[iParam0 /*558*/].f_B.f_5, iParam1);
}

int func_484(int iParam0)//Position - 0x1380A
{
	switch (iParam0)
	{
		case 131:
			return 10;
		
		case 132:
			return 1;
		
		case 133:
			return 2;
		
		case 136:
			return 11;
		
		case 138:
			return 5;
		
		case 139:
			return 6;
		
		case 129:
			return 8;
		
		case 140:
			return 4;
		
		case 141:
			return 9;
		
		case 144:
			return 3;
		
		case 146:
			return 7;
		
		case 236:
			return 12;
		
		default:
	}
	return Global_40001.f_59B8;
}

bool func_485(int iParam0)//Position - 0x1389D
{
	int iVar0;
	
	iVar0 = func_216(2476, -1, 0);
	return unk_0xFA30DFD0084E92FE(iVar0, iParam0);
}

void func_486()//Position - 0x138B8
{
	if (Local_1511[unk_0x6BAA0516CC970D99() /*5*/].f_4 != 0)
	{
		Local_1511[unk_0x6BAA0516CC970D99() /*5*/].f_4 = 0;
	}
}

bool func_487(int iParam0)//Position - 0x138DB
{
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		if ((func_319() && !func_330()) || func_329(unk_0xB5CEFD608600A09F(), 21))
		{
			return 1;
		}
		if (func_36(&(Global_180634.f_D)))
		{
			if (!func_1(&(Global_180634.f_D), Global_40001.f_E, 0))
			{
				return 1;
			}
			func_35(&(Global_180634.f_D));
		}
	}
	else if (unk_0xFA30DFD0084E92FE(Global_18C80F[iParam0 /*558*/].f_1, 10))
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_18C80F[iParam0 /*558*/].f_1, 9);
}

bool func_488(int iParam0)//Position - 0x1396D
{
	return func_85(iParam0, 0);
}

void func_489()//Position - 0x1397C
{
	func_490(&(Local_165.f_215), &Local_165, 26, &(Local_165.f_1), &(Local_165.f_74), -1, 0, 0);
}

void func_490(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)//Position - 0x139A0
{
	int iVar0;
	int iVar1[32];
	bool bVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	struct<4> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	struct<2> Var22;
	
	if (func_602(iParam2))
	{
		return;
	}
	fVar10 = -1f;
	iVar11 = -1;
	iVar12 = -1;
	iVar14 = 0;
	iVar15 = 0;
	uParam3->f_24 = 0;
	if (func_600() || iParam2 == 27)
	{
		if (func_557(iParam1, iParam2, uParam3, Global_180515, 0, func_603(), sParam7))
		{
			func_556(1);
			if ((!func_555() && !func_554()) || unk_0xFA30DFD0084E92FE(Global_267214.f_11DD, 1))
			{
				if (func_553())
				{
					func_552();
				}
				else
				{
					unk_0xC2EAD30963BDAA47(76, 84);
					if (uParam3->f_1B == 0)
					{
						func_551(1);
						Global_180515 = 0;
						iVar19 = -1;
						if (Global_1805CF != 1)
						{
							func_550(iParam1, 0, 0);
							if (unk_0xFA30DFD0084E92FE(uParam3->f_21, 7))
							{
								unk_0x7CB6FD92BE491AD9(&(uParam3->f_21), 7);
							}
						}
						if (iParam2 == 27)
						{
							iVar17 = 0;
							while (iVar17 < 32)
							{
								iVar1[iVar17] = -1;
								iVar17++;
							}
							iVar17 = 0;
							while (iVar17 < 32)
							{
								if (func_13(unk_0x3171C34AB3FE6F2E(iVar17), 0, 1))
								{
									iVar3 = unk_0x3171C34AB3FE6F2E(iVar17);
									if (!func_85(iVar3, 0))
									{
										if ((func_549(iVar3) || Global_24FB5C[iVar3 /*406*/].f_E8 != -1) || func_548(iVar3))
										{
											iVar9 = iVar3;
											if (func_74(iVar3))
											{
												iVar1[iVar9] = iVar20;
												iVar20++;
												iVar0++;
												func_545(&iVar1, iVar3, &iVar20, &iVar0);
											}
										}
									}
								}
								iVar17++;
							}
						}
						if (!func_92(unk_0xB5CEFD608600A09F(), 0) && func_228(unk_0xB5CEFD608600A09F()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							if (func_544())
							{
								if (func_13(unk_0x3171C34AB3FE6F2E(iVar17), 0, 1))
								{
									iVar3 = unk_0x3171C34AB3FE6F2E(iVar17);
								}
								else
								{
									iVar3 = func_87();
								}
							}
							else
							{
								iVar3 = (uParam0[iVar17 /*42*/])->f_1;
							}
							if ((func_543(iVar3) && func_540(iVar3, iParam2)) && func_13(iVar3, 0, 1))
							{
								iVar9 = iVar3;
								iVar7 = Global_18402B[iVar9 /*770*/].f_D3.f_6;
								Var6 = { func_535(iVar3) };
								if (iVar3 == unk_0xB5CEFD608600A09F())
								{
									uParam3->f_23 = iVar18;
								}
								StringCopy(&(uParam3->f_1), unk_0xD885B2234FC72D62(iVar3), 64);
								*(uParam4[iVar17 /*13*/]) = { func_124(iVar3) };
								iVar5 = func_529(iVar3);
								sVar4 = "";
								if (iVar5 != 0)
								{
									sVar4 = unk_0xF392EEDDF2FB749A(iVar5);
								}
								Global_180515++;
								if ((uParam0[iVar17 /*42*/])->f_16 != -1f)
								{
									fVar10 = (uParam0[iVar17 /*42*/])->f_16;
								}
								if ((uParam0[iVar17 /*42*/])->f_1F != -1)
								{
									iVar11 = (uParam0[iVar17 /*42*/])->f_1F;
								}
								if ((uParam0[iVar17 /*42*/])->f_29 != -1)
								{
									iVar12 = (uParam0[iVar17 /*42*/])->f_29;
								}
								iVar8 = (uParam0[iVar17 /*42*/])->f_9;
								if (((uParam0[iVar17 /*42*/])->f_9 != -1 || (uParam0[iVar17 /*42*/])->f_16 != -1f) || (uParam0[iVar17 /*42*/])->f_1F != -1)
								{
									if (!func_544())
									{
										iVar15 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_524(&iVar8, &fVar10, (uParam0[iVar17 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_68), func_523(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar13 = (uParam0[iVar17 /*42*/])->f_2 + 1;
									if (iVar19 != iVar13)
									{
										iVar19 = iVar13;
									}
									else
									{
										iVar13 = -2;
									}
								}
								iVar16 = func_522(iVar3, 0);
								if (bVar2)
								{
									if (func_73(iVar3, 1) && iVar1[iVar9] != -1)
									{
										iVar18 = iVar1[iVar9];
									}
									else
									{
										iVar18 = (iVar0 + iVar21);
										iVar21++;
									}
								}
								uParam3->f_26[iVar9 /*2*/].f_1 = iVar18;
								if ((uParam0[iVar17 /*42*/])->f_27 != -1)
								{
									StringCopy(&Var22, "UW_TM", 16);
									StringIntConCat(&Var22, (uParam0[iVar17 /*42*/])->f_27, 16);
								}
								if (func_521(iParam5))
								{
									func_520(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar8, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_28, iVar13, bParam6);
								}
								else
								{
									func_520(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar11, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_28, iVar13, bParam6);
								}
								unk_0xF0059F27F7BB6680(&iVar14, iVar3);
								iVar18++;
							}
							iVar17++;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							iVar3 = unk_0x3171C34AB3FE6F2E(iVar17);
							if (func_13(iVar3, 0, 1) && !unk_0xFA30DFD0084E92FE(iVar14, iVar3))
							{
								iVar3 = unk_0x3171C34AB3FE6F2E(iVar17);
							}
							else
							{
								iVar3 = func_87();
							}
							if (func_543(iVar3))
							{
								if (func_13(unk_0x3171C34AB3FE6F2E(iVar17), 0, 1))
								{
									iVar9 = iVar3;
									iVar7 = Global_18402B[iVar9 /*770*/].f_D3.f_6;
									Var6 = { func_535(iVar3) };
									*(uParam4[iVar17 /*13*/]) = { func_124(iVar3) };
									iVar5 = func_529(iVar3);
									sVar4 = "";
									if (iVar5 != 0)
									{
										sVar4 = unk_0xF392EEDDF2FB749A(iVar5);
									}
									Global_180515++;
									iVar16 = func_522(iVar3, 1);
									if (bVar2)
									{
										if (func_73(iVar3, 1))
										{
											iVar18 = iVar1[iVar17];
										}
										else
										{
											iVar18 = (iVar0 + iVar21);
											iVar21++;
										}
									}
									uParam3->f_26[iVar9 /*2*/].f_1 = iVar18;
									func_503(iVar3, unk_0xD885B2234FC72D62(iVar3), iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar16, iVar15);
									iVar18++;
								}
							}
							iVar17++;
						}
						if (unk_0xFA30DFD0084E92FE(uParam3->f_21, 11))
						{
							func_500(uParam3, iParam1);
						}
						func_35(&(uParam3->f_15));
						func_499();
						uParam3->f_1B = 2;
					}
					if (uParam3->f_1B == 2)
					{
						if (!unk_0xFA30DFD0084E92FE(uParam3->f_21, 7))
						{
							func_498(uParam3, iParam1);
							func_497(iParam1, 0, 1);
							unk_0xF0059F27F7BB6680(&(uParam3->f_21), 7);
						}
						func_498(uParam3, iParam1);
						if (!unk_0xFA30DFD0084E92FE(uParam3->f_21, 11))
						{
							unk_0xF0059F27F7BB6680(&(uParam3->f_21), 11);
						}
						if (func_493(uParam3))
						{
							Global_1805CF = 1;
						}
						func_491(uParam3);
						if (Global_1805CF == 1)
						{
							uParam3->f_1B = 0;
						}
						if (Global_1805CF == 2)
						{
							uParam3->f_1B = 0;
						}
					}
					if (unk_0xA7F138B5B1AB2CF6(*iParam1))
					{
						unk_0x996AC9A66B2A5A3F(7);
						unk_0x65E432C782E7E702(*iParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0x996AC9A66B2A5A3F(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_1B = 0;
			func_499();
			func_551(0);
			if (unk_0xFA30DFD0084E92FE(uParam3->f_21, 7))
			{
				unk_0x7CB6FD92BE491AD9(&(uParam3->f_21), 7);
			}
			if (unk_0xFA30DFD0084E92FE(uParam3->f_21, 10))
			{
				unk_0x7CB6FD92BE491AD9(&(uParam3->f_21), 10);
			}
		}
	}
	unk_0x2A025E7CEBB76D14();
}

void func_491(var uParam0)//Position - 0x13FF1
{
	if (!func_36(&(uParam0->f_15)))
	{
		func_2(&(uParam0->f_15), 0, 0);
	}
	else if (func_1(&(uParam0->f_15), 250, 0))
	{
		func_35(&(uParam0->f_15));
		func_492(0);
	}
}

void func_492(bool bParam0)//Position - 0x1402E
{
	if (bParam0)
	{
		if (Global_1805CF != 2)
		{
			Global_1805CF = 2;
		}
	}
	else
	{
		switch (Global_1805CF)
		{
			case 0:
				Global_1805CF = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_493(var uParam0)//Position - 0x14074
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0;
	iVar0 = uParam0->f_25;
	iVar3 = unk_0x3171C34AB3FE6F2E(uParam0->f_25);
	if (iVar3 != func_87() && func_13(iVar3, 0, 1))
	{
		Var2 = { func_124(iVar3) };
		iVar1 = func_496(uParam0, uParam0->f_25);
		if (func_495(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x926C9CB9879D0731(&Var2))
					{
						if (unk_0xF7C6C9F82039E424(&Var2))
						{
							iVar4 = 1;
							func_494(uParam0, iVar0, 2);
						}
					}
					else if (unk_0xCE838A0680E73021(&Var2))
					{
						iVar4 = 1;
						func_494(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x926C9CB9879D0731(&Var2))
					{
						if (!unk_0xF7C6C9F82039E424(&Var2))
						{
							iVar4 = 1;
							func_494(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar4 = 1;
						func_494(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x926C9CB9879D0731(&Var2))
					{
						if (!unk_0xCE838A0680E73021(&Var2))
						{
							iVar4 = 1;
							func_494(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0xCE838A0680E73021(&Var2))
					{
						iVar4 = 1;
						func_494(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_25++;
	if (uParam0->f_25 >= 32)
	{
		uParam0->f_25 = 0;
	}
	return iVar4;
}

void func_494(var uParam0, int iParam1, int iParam2)//Position - 0x141A1
{
	uParam0->f_26[iParam1 /*2*/] = iParam2;
}

bool func_495(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x141B3
{
	return unk_0x700A9F370C80C9E1(&uParam0, 13);
}

var func_496(var uParam0, int iParam1)//Position - 0x141C3
{
	return uParam0->f_26[iParam1 /*2*/];
}

void func_497(int iParam0, bool bParam1, int iParam2)//Position - 0x141D3
{
	if (unk_0x29CD142125FE177B(*iParam0, "COLLAPSE"))
	{
		unk_0x5E5DBD0A6623969E(bParam1);
		unk_0xF9FBC2F3F73D94C9();
	}
	if (iParam2 == 1)
	{
		if (unk_0x29CD142125FE177B(*iParam0, "DISPLAY_VIEW"))
		{
			unk_0xF9FBC2F3F73D94C9();
		}
	}
}

void func_498(var uParam0, int iParam1)//Position - 0x1420B
{
	if (!unk_0xFA30DFD0084E92FE(uParam0->f_21, 10))
	{
		unk_0x29CD142125FE177B(*iParam1, "SET_HIGHLIGHT");
		unk_0x1E1FB49121565EB6(uParam0->f_23);
		unk_0xF9FBC2F3F73D94C9();
		unk_0xF0059F27F7BB6680(&(uParam0->f_21), 10);
	}
}

void func_499()//Position - 0x14243
{
	if (Global_1805CF != 0)
	{
		Global_1805CF = 0;
	}
}

void func_500(var uParam0, int iParam1)//Position - 0x14258
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x3171C34AB3FE6F2E(iVar0);
		if (iVar2 != func_87())
		{
			if (func_13(iVar2, 0, 1))
			{
				if (uParam0->f_26[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_502(uParam0->f_26[iVar0 /*2*/], 0);
					func_501(iParam1, uParam0->f_26[iVar0 /*2*/].f_1, iVar1, Global_18402B[iVar0 /*770*/].f_D3.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_501(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x142CB
{
	if (unk_0xA7F138B5B1AB2CF6(*uParam0))
	{
		if (unk_0x29CD142125FE177B(*uParam0, "SET_ICON"))
		{
			unk_0x1E1FB49121565EB6(iParam1);
			unk_0x1E1FB49121565EB6(iParam2);
			if (iParam2 == 65)
			{
				unk_0x1E1FB49121565EB6(iParam3);
			}
			unk_0xF9FBC2F3F73D94C9();
		}
	}
}

int func_502(int iParam0, bool bParam1)//Position - 0x14308
{
	int iVar0;
	
	iVar0 = 65;
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_503(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)//Position - 0x1433C
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_519() && iParam4 < func_518())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_180517)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1805CF == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x29CD142125FE177B(*iParam2, sVar1))
		{
			unk_0x1E1FB49121565EB6(iParam4);
			if (unk_0xFA30DFD0084E92FE(uParam3->f_21, 8) || uParam3->f_6C == 6)
			{
				func_517("");
			}
			else
			{
				unk_0x1E1FB49121565EB6(iParam10);
			}
			func_517(sParam1);
			unk_0x1E1FB49121565EB6(iParam11);
			if (uParam3->f_6C == 6)
			{
				func_517("");
			}
			else
			{
				unk_0x1E1FB49121565EB6(65);
			}
			unk_0x1E1FB49121565EB6(-1);
			func_517("");
			if (uParam3->f_6C == 6)
			{
				func_517("");
			}
			else
			{
				func_517(&sParam5);
			}
			func_508(uParam3, iParam0);
			unk_0x6A664E53A192232C(sParam9);
			unk_0x6A664E53A192232C(sParam9);
			if (func_507(uParam3))
			{
				func_506("DPAD_FRIEND");
			}
			else if (func_505(uParam3))
			{
				func_506("DPAD_FRIEND");
			}
			else if (func_504(uParam3))
			{
				func_506("DPAD_CREW");
			}
			else
			{
				func_506("");
			}
			unk_0xF9FBC2F3F73D94C9();
		}
	}
}

bool func_504(var uParam0)//Position - 0x14466
{
	return unk_0xFA30DFD0084E92FE(uParam0->f_21, 6);
}

bool func_505(var uParam0)//Position - 0x14477
{
	return unk_0xFA30DFD0084E92FE(uParam0->f_21, 5);
}

void func_506(char* sParam0)//Position - 0x14488
{
	unk_0x57016C44F10111F0(sParam0);
	unk_0x64989E60CF560CA1();
}

int func_507(var uParam0)//Position - 0x1449A
{
	if (func_505(uParam0) && func_504(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_508(var uParam0, int iParam1)//Position - 0x144BB
{
	if (func_516(iParam1))
	{
		unk_0x1E1FB49121565EB6(121);
	}
	else if (func_512(iParam1))
	{
		unk_0x1E1FB49121565EB6(122);
	}
	else if (((unk_0xFA30DFD0084E92FE(Global_440000.f_1B, 15) && iParam1 > -1) && iParam1 < 32) && unk_0xFA30DFD0084E92FE(Global_24FB5C[iParam1 /*406*/].f_195, 0))
	{
		unk_0x1E1FB49121565EB6(123);
	}
	else
	{
		if (func_509())
		{
			uParam0->f_24 = 0;
		}
		unk_0x5E5DBD0A6623969E(uParam0->f_24);
	}
}

int func_509()//Position - 0x1453C
{
	if (unk_0x517823CA390A19F6())
	{
		if (func_510() || func_77())
		{
			return 1;
		}
	}
	return 0;
}

int func_510()//Position - 0x14561
{
	if (unk_0x517823CA390A19F6())
	{
		return func_77();
	}
	return func_511(Global_440000.f_1EF38);
}

int func_511(int iParam0)//Position - 0x14585
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_40001.f_1373[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_512(int iParam0)//Position - 0x145BF
{
	if ((func_13(iParam0, 0, 1) && func_513()) && func_172(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_513()//Position - 0x145EC
{
	if (func_404(unk_0xB5CEFD608600A09F()) || func_515())
	{
		if (!func_514(unk_0xB5CEFD608600A09F(), 236))
		{
			return 0;
		}
	}
	return 1;
}

int func_514(int iParam0, int iParam1)//Position - 0x1461C
{
	if (func_285(iParam0) == iParam1)
	{
		return func_442(iParam0);
	}
	return 0;
}

int func_515()//Position - 0x14639
{
	switch (func_228(unk_0xB5CEFD608600A09F()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_516(int iParam0)//Position - 0x14677
{
	if (func_509())
	{
		if (func_13(iParam0, 0, 1))
		{
			return func_74(iParam0);
		}
	}
	if ((func_13(iParam0, 0, 1) && func_513()) && func_174(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_517(char* sParam0)//Position - 0x146BF
{
	unk_0xCB30200B8055CA57(sParam0);
}

int func_518()//Position - 0x146CD
{
	int iVar0;
	
	if (Global_180517)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_519()//Position - 0x146E9
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_180517)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_520(int iParam0, int iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)//Position - 0x14701
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_519() && iParam3 < func_518())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_180517)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1805CF == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0xA7F138B5B1AB2CF6(*iParam1))
		{
			if (unk_0x29CD142125FE177B(*iParam1, sVar1))
			{
				unk_0x1E1FB49121565EB6(iParam3);
				if (unk_0xFA30DFD0084E92FE(uParam2->f_21, 8) || uParam2->f_6C == 6)
				{
					func_517("");
				}
				else
				{
					unk_0x1E1FB49121565EB6(iParam9);
				}
				if (uParam2->f_6C == 6 && !unk_0xF1734B55490E9045(sParam16))
				{
					func_506(sParam16);
				}
				else
				{
					func_517(&(uParam2->f_1));
				}
				unk_0x1E1FB49121565EB6(iParam11);
				if (uParam2->f_6C == 6)
				{
					func_517("");
				}
				else
				{
					unk_0x1E1FB49121565EB6(65);
				}
				if (iParam12 == 1)
				{
					unk_0x1E1FB49121565EB6(iVar0);
				}
				else
				{
					unk_0x1E1FB49121565EB6(-1);
				}
				if (func_544())
				{
					func_517("");
				}
				else if (uParam2->f_6C == 6 && !unk_0xF1734B55490E9045(sParam16))
				{
					unk_0x57016C44F10111F0("FM_AE_ONE_INT");
					unk_0xC9C304D0AABE1335(sParam16);
					unk_0xAA5C5BF0489E5553(iParam17);
					unk_0x64989E60CF560CA1();
				}
				else if (uParam2->f_6C == 5 && !unk_0xF1734B55490E9045(sParam16))
				{
					unk_0x57016C44F10111F0("FM_AE_ONE_INT");
					unk_0xC9C304D0AABE1335(sParam16);
					unk_0xAA5C5BF0489E5553(iParam17);
					unk_0x64989E60CF560CA1();
				}
				else if (uParam2->f_6C == 7 && !unk_0xF1734B55490E9045(sParam16))
				{
					unk_0x57016C44F10111F0("FM_AE_TWO_INT");
					unk_0xC9C304D0AABE1335(sParam16);
					unk_0xAA5C5BF0489E5553(iParam17);
					unk_0x64989E60CF560CA1();
				}
				else if (uParam2->f_6C == 8 && !unk_0xF1734B55490E9045(&(uParam2->f_68)))
				{
					unk_0x57016C44F10111F0("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0x3AE7CB4034BE212F(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						unk_0xAA5C5BF0489E5553(iParam10);
					}
					unk_0xC9C304D0AABE1335(&(uParam2->f_68));
					unk_0x64989E60CF560CA1();
				}
				else if (uParam2->f_6C == 9)
				{
					unk_0x57016C44F10111F0("FM_AE_CASH");
					unk_0xBCDE00BFDE9A5BD1(iParam10, 1);
					unk_0x64989E60CF560CA1();
				}
				else if (uParam2->f_6C == 10)
				{
					if (iParam10 == 0)
					{
						unk_0x57016C44F10111F0("FM_AE_CASH");
						unk_0xBCDE00BFDE9A5BD1(iParam10, 1);
						unk_0x64989E60CF560CA1();
					}
					else
					{
						unk_0x57016C44F10111F0("FM_NG_CASH");
						unk_0xBCDE00BFDE9A5BD1(iParam10, 1);
						unk_0x64989E60CF560CA1();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !unk_0xF1734B55490E9045(&(uParam2->f_68)))
					{
						func_506(&(uParam2->f_68));
					}
					else
					{
						func_517("");
					}
				}
				else if (iParam14 != -1)
				{
					unk_0x57016C44F10111F0("STRING");
					unk_0x4C36886AAFD04CF8(iParam14, 6);
					unk_0x64989E60CF560CA1();
				}
				else if (fParam13 != -1f)
				{
					unk_0x57016C44F10111F0("NUMBER");
					unk_0x3AE7CB4034BE212F(fParam13, 1);
					unk_0x64989E60CF560CA1();
				}
				else if (iParam10 != -1)
				{
					unk_0x1E1FB49121565EB6(iParam10);
				}
				else
				{
					func_517("");
				}
				if (uParam2->f_6C == 6)
				{
					func_517("");
				}
				else
				{
					func_517(&sParam4);
				}
				func_508(uParam2, iParam0);
				if (iParam12 == 1 || unk_0xF1734B55490E9045(sParam8))
				{
					func_517("");
					func_517("");
				}
				else
				{
					unk_0x6A664E53A192232C(sParam8);
					unk_0x6A664E53A192232C(sParam8);
				}
				if (func_507(uParam2))
				{
					func_506("DPAD_FRIEND");
				}
				else if (func_505(uParam2))
				{
					func_506("DPAD_FRIEND");
				}
				else if (func_504(uParam2))
				{
					func_506("DPAD_CREW");
				}
				else
				{
					func_506("");
				}
				unk_0xF9FBC2F3F73D94C9();
			}
		}
	}
}

int func_521(int iParam0)//Position - 0x14A5B
{
	return 0;
	switch (iParam0)
	{
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_522(int iParam0, bool bParam1)//Position - 0x14A7F
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_404(iParam0)) && !func_89(iParam0))
	{
		iVar0 = func_55();
	}
	iVar1 = func_71(iParam0);
	if (!iVar1 == -1)
	{
		return func_69(iVar1);
	}
	return iVar0;
}

char* func_523(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x14AC9
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0x8150E47F9B8C07E2())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 2:
			if (unk_0x8150E47F9B8C07E2())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_524(var uParam0, float fParam1, int iParam2, int iParam3)//Position - 0x14C56
{
	if (func_528(iParam3))
	{
		*fParam1 = (func_525(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_521(iParam3))
	{
		*fParam1 = (func_525(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_525(int iParam0, int iParam1)//Position - 0x14CA6
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0x8150E47F9B8C07E2())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_527(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		
		case 2:
			if (unk_0x8150E47F9B8C07E2())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_526(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(iParam1);
}

float func_526(float fParam0)//Position - 0x14D49
{
	return (fParam0 / 1.609344f);
}

float func_527(float fParam0)//Position - 0x14D59
{
	return (fParam0 / 0.3048f);
}

int func_528(int iParam0)//Position - 0x14D69
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_529(int iParam0)//Position - 0x14DC5
{
	int iVar0;
	
	iVar0 = func_532(iParam0);
	if (iVar0 == -1)
	{
		func_530(iParam0, 1);
		return 0;
	}
	Global_14FA05[iVar0 /*5*/].f_4 = 1;
	return Global_14FA05[iVar0 /*5*/].f_2;
}

void func_530(int iParam0, bool bParam1)//Position - 0x14DFB
{
	if (!func_13(iParam0, 0, 1))
	{
		return;
	}
	if (func_532(iParam0) != -1)
	{
		return;
	}
	if (Global_14FAA8)
	{
		if (iParam0 == Global_14FAA8.f_1)
		{
			return;
		}
	}
	if (func_531(iParam0))
	{
		return;
	}
	if (Global_14FACE >= 32)
	{
		return;
	}
	Global_14FAAD[Global_14FACE] = iParam0;
	Global_14FACE++;
	if (bParam1)
	{
	}
}

int func_531(int iParam0)//Position - 0x14E67
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_14FACE)
	{
		if (Global_14FAAD[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_532(int iParam0)//Position - 0x14E99
{
	int iVar0;
	
	if (!func_13(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_14FAA6 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_14FAA6)
	{
		if (Global_14FA05[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x516A8073F5BF5F0A(Global_14FA05[iVar0 /*5*/].f_2) && unk_0xEB606E770B747B2C(Global_14FA05[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_533(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_533(int iParam0)//Position - 0x14F18
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_14FAA6)
	{
		return;
	}
	if (unk_0x516A8073F5BF5F0A(Global_14FA05[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_14FA05[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar1, unk_0xF392EEDDF2FB749A(Global_14FA05[iParam0 /*5*/].f_2), 64);
			unk_0x8F5E9D20607FC4FF(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		unk_0x469C2D90A617CB9A(Global_14FA05[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_14FAA6)
	{
		Global_14FA05[iVar2 /*5*/] = { Global_14FA05[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_534(&(Global_14FA05[iVar2 /*5*/]));
	Global_14FAA6 = (Global_14FAA6 - 1);
}

void func_534(var uParam0)//Position - 0x14FCE
{
	*uParam0 = 0;
	uParam0->f_1 = func_87();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x7AF0088ABFA713B6())
	{
		uParam0->f_3 = unk_0xED678C85A82F0AB9();
	}
}

struct<4> func_535(int iParam0)//Position - 0x14FFB
{
	char cVar0[32];
	
	if (func_13(iParam0, 0, 1))
	{
		Global_26210D = { func_124(iParam0) };
		if (unk_0xF49912B78E2591B6())
		{
			if (func_495(Global_26210D))
			{
				if (!unk_0x43AECC0539840131(&Global_26210D))
				{
					return cVar0;
				}
			}
		}
		else if (!unk_0x5553DFDA03631860(0))
		{
			return cVar0;
		}
		if (func_539(&Global_26210D))
		{
			Global_2620C7 = { func_537(iParam0) };
			func_536(&Global_2620C7, &cVar0);
		}
	}
	return cVar0;
}

void func_536(var uParam0, char* sParam1)//Position - 0x1507C
{
	unk_0x6B97B73981ADFBF1(uParam0, 35, sParam1);
}

struct<35> func_537(int iParam0)//Position - 0x1508E
{
	struct<13> Var0;
	struct<35> Var1;
	
	if (func_538(iParam0))
	{
		return Global_140876[unk_0xB5CEFD608600A09F() /*35*/];
	}
	Var0 = { func_124(iParam0) };
	unk_0x24723877416AAAFC(&Var1, 35, &Var0);
	return Var1;
}

int func_538(int iParam0)//Position - 0x150CA
{
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		return 1;
	}
	return 0;
}

int func_539(var uParam0)//Position - 0x150E0
{
	if (unk_0x97EF4023B86C354F())
	{
		if (unk_0xB9ACC1154C623363() && unk_0xD7F4457CECF10121(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_540(int iParam0, int iParam1)//Position - 0x15106
{
	if (iParam1 == 26)
	{
		if ((func_7(iParam0) || func_542(iParam0)) || func_6(iParam0))
		{
			return 0;
		}
	}
	if (!func_541(iParam0))
	{
		return 0;
	}
	if ((!func_549(iParam0) && Global_24FB5C[iParam0 /*406*/].f_E8 == -1) && !func_548(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_541(int iParam0)//Position - 0x15175
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_8E, 22);
}

int func_542(int iParam0)//Position - 0x1518E
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0xFA30DFD0084E92FE(Global_18C80F[iParam0 /*558*/].f_1, 10) || unk_0xFA30DFD0084E92FE(Global_18C80F[iParam0 /*558*/].f_1, 9));
	}
	return 0;
}

int func_543(int iParam0)//Position - 0x151CC
{
	int iVar0;
	
	if (iParam0 == func_87())
	{
		return 0;
	}
	if (func_85(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xFA30DFD0084E92FE(Global_18402B[iVar0 /*770*/].f_8E, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_544()//Position - 0x15211
{
	switch (func_228(unk_0xB5CEFD608600A09F()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		
		default:
	}
	switch (func_285(unk_0xB5CEFD608600A09F()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_89(unk_0xB5CEFD608600A09F()))
	{
		switch (func_228(unk_0xB5CEFD608600A09F()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	if (func_514(unk_0xB5CEFD608600A09F(), 236))
	{
		return 1;
	}
	return 0;
}

void func_545(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1534D
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_13(unk_0x3171C34AB3FE6F2E(iVar0), 0, 1))
		{
			iVar1 = unk_0x3171C34AB3FE6F2E(iVar0);
			if (!func_85(iVar1, 0))
			{
				if ((func_549(iVar1) || Global_24FB5C[iVar1 /*406*/].f_E8 != -1) || func_548(iVar1))
				{
					if (func_546(iVar1, iParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_546(int iParam0, int iParam1, bool bParam2)//Position - 0x153D7
{
	if (iParam1 != func_87())
	{
		if (!bParam2)
		{
			if (func_547(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_18C80F[iParam0 /*558*/].f_B != func_87())
		{
			return iParam1 == Global_18C80F[iParam0 /*558*/].f_B;
		}
	}
	return 0;
}

int func_547(int iParam0, int iParam1)//Position - 0x15421
{
	if (iParam1 != func_87())
	{
		if (iParam0 != func_87())
		{
			if (Global_18C80F[iParam0 /*558*/].f_B != func_87())
			{
				if (Global_18C80F[iParam0 /*558*/].f_B == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

bool func_548(int iParam0)//Position - 0x15466
{
	return Global_18402B[iParam0 /*770*/].f_C4 != 0;
}

int func_549(int iParam0)//Position - 0x1547B
{
	if (func_13(iParam0, 0, 1))
	{
		if (func_13(unk_0xB5CEFD608600A09F(), 0, 1))
		{
			if (unk_0x75206900382D1E30(iParam0, unk_0xB5CEFD608600A09F()) || func_228(iParam0) == 233)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_550(int iParam0, int iParam1, int iParam2)//Position - 0x154BC
{
	if (unk_0xA7F138B5B1AB2CF6(*iParam0))
	{
		unk_0x29CD142125FE177B(*iParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x1E1FB49121565EB6(iParam1);
		unk_0x1E1FB49121565EB6(iParam2);
		unk_0xF9FBC2F3F73D94C9();
	}
}

void func_551(bool bParam0)//Position - 0x154EA
{
	if (bParam0)
	{
		if (Global_14CC7E.f_2 == 0)
		{
			Global_14CC7E.f_2 = 1;
		}
	}
	else if (Global_14CC7E.f_2 == 1)
	{
		Global_14CC7E.f_2 = 0;
	}
}

void func_552()//Position - 0x1551C
{
	if (unk_0xFA30DFD0084E92FE(Global_267214.f_11DD, 1))
	{
		if (func_161())
		{
			func_177();
		}
	}
}

int func_553()//Position - 0x1553E
{
	if (unk_0xFA30DFD0084E92FE(Global_267214.f_11DD, 0) && func_161())
	{
		return 1;
	}
	if (unk_0xFA30DFD0084E92FE(Global_267214.f_11DD, 1) && func_161())
	{
		return 1;
	}
	return 0;
}

int func_554()//Position - 0x1557F
{
	if (func_161())
	{
		if (func_44(Global_252E21.f_A8F[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_555()//Position - 0x155A6
{
	if (func_161())
	{
		if (func_56(Global_252E21.f_A8F[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_556(int iParam0)//Position - 0x155CD
{
	if (Global_14CC7E.f_1 != Global_14CC7E)
	{
		Global_14CC7E.f_1 = Global_14CC7E;
	}
	if (Global_14CC7E != iParam0)
	{
		Global_14CC7E = iParam0;
	}
}

int func_557(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)//Position - 0x155FB
{
	struct<4> Var0;
	char* sVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	char* sVar5;
	int iVar6;
	
	StringCopy(&Var0, "", 16);
	bVar3 = func_599(iParam1);
	if (iParam1 == 20)
	{
		bVar2 = true;
	}
	fVar4 = func_598();
	if (iParam1 == 26 || iParam1 == 27)
	{
		if (func_597())
		{
			if (func_596() > 0 && Global_180517)
			{
				unk_0xE9DBADA362313538();
				unk_0xE7918A3D05166D98(fVar4);
				unk_0x4E0EC60D119222B1(18);
				if (unk_0xF16DAFF595E80F7C())
				{
					unk_0x39CC55A2108C1AB0();
				}
				unk_0x4E0EC60D119222B1(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_587())
		{
			func_586(iParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0xFA30DFD0084E92FE(Global_267214.f_11E0, 26))
	{
		func_586(iParam0, uParam2, 1);
		return 0;
	}
	if (!func_36(&(uParam2->f_13)))
	{
		if (func_596() == 1)
		{
			func_585(bVar3, iParam0, 0);
			func_2(&(uParam2->f_13), 0, 0);
			func_586(iParam0, uParam2, 0);
			unk_0xF0059F27F7BB6680(&(Global_267214.f_11E1), 5);
		}
	}
	if (func_36(&(uParam2->f_13)) || bParam5)
	{
		if (unk_0xF16DAFF595E80F7C())
		{
			unk_0x39CC55A2108C1AB0();
		}
		unk_0x4E0EC60D119222B1(10);
		if (func_1(&(uParam2->f_13), 10000, 0) || (func_596() == 0 && !bParam5))
		{
			func_586(iParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar2 == 0)
			{
				func_584();
				if (iParam1 == 26 || iParam1 == 27)
				{
					unk_0xE9DBADA362313538();
				}
				unk_0x4E0EC60D119222B1(18);
			}
			if (!unk_0xFA30DFD0084E92FE(uParam2->f_21, 0))
			{
				if (bVar2 == 0)
				{
					func_584();
					if (iParam1 == 26 || iParam1 == 27)
					{
						unk_0xE9DBADA362313538();
					}
					unk_0x4E0EC60D119222B1(18);
				}
				unk_0xE7918A3D05166D98(fVar4);
				if (func_585(bVar3, iParam0, 0))
				{
					func_550(iParam0, 0, 0);
					sVar1 = func_582(iParam1, &(Global_440000.f_1EF3F), bParam4);
					Var0 = { func_580(iParam1) };
					if (bParam4)
					{
						func_577(iParam0, sVar1, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 26)
					{
						func_571(iParam0, func_574(uParam2), func_572(uParam2), -1);
					}
					else if (iParam1 == 27)
					{
						sVar5 = func_565(uParam2);
						if (!unk_0xF1734B55490E9045(sParam6))
						{
							sVar5 = sParam6;
						}
						func_563(iParam0, sVar5, func_564(), -1);
					}
					else if (func_509())
					{
						uParam2->f_22 = Global_180516;
						func_577(iParam0, sVar1, &Var0, 1, -1, Global_180516, 1);
					}
					else if (bVar2)
					{
						uParam2->f_22 = Global_180516;
						func_577(iParam0, sVar1, "", 0, -1, Global_180516, 1);
					}
					else
					{
						iVar6 = func_558(iParam1);
						func_577(iParam0, sVar1, &Var0, 1, iVar6, -1, 1);
					}
					unk_0xF0059F27F7BB6680(&(uParam2->f_21), 0);
				}
			}
			if (unk_0xFA30DFD0084E92FE(uParam2->f_21, 0))
			{
				Global_180515 = uParam3;
				Global_180514 = 1;
				unk_0xE7918A3D05166D98(fVar4);
				if (bVar2)
				{
					if (uParam2->f_22 != Global_180516)
					{
						unk_0x7CB6FD92BE491AD9(&(uParam2->f_21), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_558(int iParam0)//Position - 0x158CE
{
	int iVar0;
	
	iVar0 = -1;
	if (func_562())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 25:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
		case 11:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 12:
		case 13:
		case 14:
		case 17:
			iVar0 = 2;
			break;
		
		case 15:
			iVar0 = 17;
			break;
		
		case 16:
			iVar0 = 18;
			break;
		
		case 18:
			if (func_561(unk_0xB5CEFD608600A09F()))
			{
				iVar0 = 20;
			}
			if (func_560(unk_0xB5CEFD608600A09F()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_559(unk_0xB5CEFD608600A09F()))
	{
		iVar0 = 2;
	}
	if (func_229())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_559(int iParam0)//Position - 0x159DE
{
	return Global_24FB5C[iParam0 /*406*/].f_6F == 4;
}

bool func_560(int iParam0)//Position - 0x159F3
{
	return Global_24FB5C[iParam0 /*406*/].f_6F == 7;
}

bool func_561(int iParam0)//Position - 0x15A08
{
	return Global_24FB5C[iParam0 /*406*/].f_6F == 2;
}

bool func_562()//Position - 0x15A1D
{
	return Global_440000.f_1 == 0;
}

void func_563(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x15A2D
{
	if (unk_0xA7F138B5B1AB2CF6(*iParam0))
	{
		unk_0x29CD142125FE177B(*iParam0, "SET_TITLE");
		if (unk_0xF1734B55490E9045(sParam2))
		{
			func_506(sParam1);
		}
		else
		{
			unk_0x57016C44F10111F0("FM_AE_BRACKT");
			unk_0xC9C304D0AABE1335(sParam1);
			unk_0xC9C304D0AABE1335(sParam2);
			unk_0x64989E60CF560CA1();
		}
		func_506("");
		if (iParam3 != -1)
		{
			unk_0x1E1FB49121565EB6(iParam3);
		}
		unk_0xF9FBC2F3F73D94C9();
	}
}

char* func_564()//Position - 0x15A8C
{
	switch (func_228(unk_0xB5CEFD608600A09F()))
	{
		case 163:
			return "BD_SORT_1";
			break;
		
		case 160:
			return "BD_SORT_4";
			break;
		
		case 154:
			return "BD_SORT_3";
			break;
		
		case 155:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_565(var uParam0)//Position - 0x15AE4
{
	switch (uParam0->f_70)
	{
		case 0:
			return "GR_DPD_E";
			break;
		
		case 1:
			return "GR_DPD_F";
			break;
		
		case 2:
			return "GR_DPD_S";
			break;
	}
	switch (uParam0->f_6E)
	{
		case 0:
			return "GR_DPD_A";
			break;
		
		case 1:
			return "GR_DPD_B";
			break;
		
		case 2:
			return "GR_DPD_C";
			break;
		
		case 3:
			return "GR_DPD_D";
			break;
	}
	switch (func_228(unk_0xB5CEFD608600A09F()))
	{
		case 233:
			return "H2_DPAD_SET";
			break;
		
		case 180:
			return "GB_BIGUNLOAD_T";
			break;
		
		case 182:
			return "DEAL_DEALN";
			break;
		
		case 194:
			return "PI_BIK_13_0";
			break;
		
		case 189:
			return "PI_BIK_4_1";
			break;
		
		case 193:
			return "PI_BIK_13_1";
			break;
		
		case 205:
			return "PI_BIK_13_3";
			break;
		
		case 186:
			return "CELL_BIKER_CK";
			break;
		
		case 207:
			return "DV_SH_TITLE";
			break;
		
		case 208:
			return "BA_SH_TITLE";
			break;
		
		case 209:
			return "SHU_SH_TITLE";
			break;
		
		case 210:
			return "PI_BIK_13_4";
			break;
		
		case 183:
			return "CELL_BIKER_RESC";
			break;
		
		case 199:
			return "CELL_BIKER_SEAR";
			break;
		
		case 201:
			return "CELL_BIKER_STAN";
			break;
		
		case 142:
			return "PIM_MAGM210";
			break;
		
		case 163:
			return "PIM_MAGM608";
			break;
		
		case 160:
			return "PIM_MAGM604";
			break;
		
		case 154:
			return "PIM_MAGM602";
			break;
		
		case 155:
			return "PIM_MAGM603";
			break;
		
		case 148:
			if (func_567())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_262(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_262(1))
			{
				return "PI_BIK_3_2";
			}
			return "PIM_MAGM601";
			break;
		
		case 157:
			return "PIM_MAGM207";
			break;
		
		case 159:
			return "PIM_MAGM206";
			break;
		
		case 162:
			return "PIM_MAGM607";
			break;
		
		case 164:
			return "PIM_MAGM212";
			break;
		
		case 166:
			return "GB_DPAD_HEAD";
		
		case 167:
			return "GB_DPAD_BUY";
		
		case 168:
			return "GB_DPAD_SELL";
		
		case 169:
			return "GB_DPAD_DEF";
		
		case 170:
			return "GB_DPAD_AIR";
		
		case 171:
			return "GB_DPAD_CASH";
		
		case 172:
			return "GB_DPAD_SAL";
		
		case 173:
			return "GB_DPAD_FRA";
		
		case 178:
			return "VEX_TITLEa";
		
		case 188:
			return "VEX_TITLEb";
		
		case 218:
			return "FRT_MODE";
		
		case 217:
			return "FRT_TRNS";
		
		case 214:
			return "MODE_PLW";
		
		case 215:
			return "MODE_FUL";
		
		case 216:
			return "MODE_AA";
		
		case 219:
			return "MODE_VEL";
		
		case 220:
			return "MODE_RMP";
		
		case 221:
			return "MODE_STK";
		
		case 225:
			return "GR_TITLEL";
		
		case 226:
			return "GRS_TITLEL";
		
		case 227:
			return "GRD_TITLEL";
		
		case 195:
			return "GB_STEAL_T";
		
		case 198:
			return "SC_MENU_TITLE";
		
		case 190:
			return "GB_DPAD_BSEL";
		
		case 191:
			return "GB_DPAD_BDEF";
		
		case 185:
			return "GB_DPAD_GFH";
		
		case 197:
			return "GB_DPAD_JB";
		
		case 179:
			return "CELL_JOUST";
		
		case 200:
			return "CAG_BLIP";
		
		case 192:
			if (func_566(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_B0))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_566(int iParam0)//Position - 0x15F10
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

bool func_567()//Position - 0x15F42
{
	return (func_570() && func_568(func_569()));
}

int func_568(int iParam0)//Position - 0x15F5B
{
	return func_174(iParam0, 1);
}

int func_569()//Position - 0x15F6A
{
	return Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_23;
}

bool func_570()//Position - 0x15F81
{
	return Global_18402B[unk_0xB5CEFD608600A09F() /*770*/] == 148;
}

void func_571(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x15F97
{
	if (unk_0xA7F138B5B1AB2CF6(*iParam0))
	{
		unk_0x29CD142125FE177B(*iParam0, "SET_TITLE");
		if (unk_0xF1734B55490E9045(sParam2))
		{
			func_506(sParam1);
		}
		else if (func_285(unk_0xB5CEFD608600A09F()) == 133)
		{
			unk_0x57016C44F10111F0("FM_AE_BRACKT_C");
			unk_0xC9C304D0AABE1335(sParam1);
			unk_0xC9C304D0AABE1335(sParam2);
			unk_0x64989E60CF560CA1();
		}
		else
		{
			unk_0x57016C44F10111F0("FM_AE_BRACKT");
			unk_0xC9C304D0AABE1335(sParam1);
			unk_0xC9C304D0AABE1335(sParam2);
			unk_0x64989E60CF560CA1();
		}
		func_506("");
		if (iParam3 != -1)
		{
			unk_0x1E1FB49121565EB6(iParam3);
		}
		unk_0xF9FBC2F3F73D94C9();
	}
}

char* func_572(var uParam0)//Position - 0x1601E
{
	int iVar0;
	
	iVar0 = func_285(unk_0xB5CEFD608600A09F());
	if (func_573())
	{
		if (uParam0->f_67 != -1)
		{
			iVar0 = uParam0->f_67;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_284())
			{
				case 0:
					return "FM_AE_SORT_2";
				
				case 1:
					return "FM_AE_SORT_2";
				
				case 2:
					return "FM_AE_SORT_3";
				
				case 3:
					return "FM_AE_SORT_2";
				
				case 4:
					return "FM_AE_SORT_2";
				
				case 5:
					return "FM_AE_SORT_2";
				
				case 6:
					return "FM_AE_SORT_2";
				
				case 7:
					return "FM_AE_SORT_13";
				
				case 8:
					return "FM_AE_SORT_4";
				
				case 9:
					return "FM_AE_SORT_2";
				
				case 10:
					return "FM_AE_SORT_2";
				
				case 11:
					return "FM_AE_SORT_2";
				
				case 12:
					return "FM_AE_SORT_2";
				
				case 13:
					return "FM_AE_SORT_2";
				
				case 14:
					return "FM_AE_SORT_5";
				
				case 15:
					return "FM_AE_SORT_9";
				
				case 16:
					return "FM_AE_SORT_9";
				
				case 17:
					return "FM_AE_SORT_9";
				
				case 18:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10";
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5";
		
		case 144:
			return "FM_AE_SORT_1";
		
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

bool func_573()//Position - 0x161C9
{
	return Global_183FAC;
}

char* func_574(var uParam0)//Position - 0x161D5
{
	int iVar0;
	
	iVar0 = func_285(unk_0xB5CEFD608600A09F());
	if (func_573())
	{
		if (uParam0->f_67 != -1)
		{
			iVar0 = uParam0->f_67;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_576() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_576() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_284())
			{
				case 0:
					return "AMCH_0SLC";
				
				case 1:
					return "AMCH_1SLC";
				
				case 2:
					return "AMCH_2SLC";
				
				case 3:
					return "AMCH_3SLC";
				
				case 4:
					return "AMCH_4SLC";
				
				case 5:
					return "AMCH_5SLC";
				
				case 6:
					return "AMCH_6SLC";
				
				case 7:
					return "AMCH_7SLC";
				
				case 8:
					return "AMCH_8SLC";
				
				case 9:
					return "AMCH_12SLC";
				
				case 10:
					return "AMCH_13SLC";
				
				case 11:
					return "AMCH_15SLC";
				
				case 12:
					return "AMCH_16SLC";
				
				case 13:
					return "AMCH_23SLC";
				
				case 14:
					return "AMCH_9SLC";
				
				case 15:
					return "AMCH_19SLC";
				
				case 16:
					return "AMCH_20SLC";
				
				case 17:
					return "AMCH_21SLC";
				
				case 18:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10";
		
		case 138:
			return "PIM_TA4";
		
		case 139:
			return "PIM_TA5";
		
		case 140:
			return "PIM_TA3";
		
		case 141:
			return "PIM_TA8";
		
		case 144:
			return "PIM_TA2";
		
		case 129:
			if (func_575() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 146:
			return "PIM_TA6";
	}
	return "";
}

int func_575()//Position - 0x163C8
{
	return Global_267214.f_12C6;
}

int func_576()//Position - 0x163D7
{
	if (func_285(unk_0xB5CEFD608600A09F()) == 132)
	{
		return Global_267214.f_12C1;
	}
	return -1;
}

void func_577(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)//Position - 0x163FA
{
	int iVar0;
	int iVar1;
	
	if (unk_0xA7F138B5B1AB2CF6(*iParam0))
	{
		unk_0x29CD142125FE177B(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_517(sParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x57016C44F10111F0(sParam1);
			unk_0xAA5C5BF0489E5553(iParam5);
			unk_0x64989E60CF560CA1();
		}
		else
		{
			func_506(sParam1);
		}
		if (func_597() && iParam6)
		{
			if (func_579())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0x57016C44F10111F0("LBD_DPD_CNT");
			unk_0xAA5C5BF0489E5553(iVar0);
			unk_0xAA5C5BF0489E5553(iVar1);
			unk_0x64989E60CF560CA1();
		}
		else
		{
			func_506(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x1E1FB49121565EB6(iParam4);
			if (func_578(unk_0xB5CEFD608600A09F()))
			{
				unk_0x1E1FB49121565EB6(166);
			}
			else if (func_53())
			{
				unk_0x1E1FB49121565EB6(220);
			}
		}
		unk_0xF9FBC2F3F73D94C9();
	}
}

int func_578(int iParam0)//Position - 0x164BB
{
	if (func_561(iParam0) || func_560(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_579()//Position - 0x164DD
{
	return Global_180517;
}

struct<4> func_580(int iParam0)//Position - 0x164E9
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_581(unk_0xB5CEFD608600A09F()) || func_559(unk_0xB5CEFD608600A09F()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 12:
		case 13:
		case 14:
		case 17:
		case 15:
		case 16:
		case 18:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_440000.f_22, 16);
			break;
	}
	if (func_509() && unk_0x517823CA390A19F6())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_440000.f_22, 16);
	}
	return Var0;
}

bool func_581(int iParam0)//Position - 0x16584
{
	return Global_24FB5C[iParam0 /*406*/].f_6F == 5;
}

char* func_582(int iParam0, char* sParam1, bool bParam2)//Position - 0x16599
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_509() || unk_0xF1734B55490E9045(sParam1)))
	{
		uVar0 = func_583();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 24)
	{
		if (Global_1805E1 == 0)
		{
			Global_1805E1 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0xF1734B55490E9045(sParam1))
	{
		if (Global_1805E1 == 1)
		{
			Global_1805E1 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1805E1 == 0)
		{
			Global_1805E1 = 1;
		}
		switch (iParam0)
		{
			case 0:
				return "HUD_LBD_DM";
				break;
			
			case 1:
				return "HUD_LBD_TDM";
				break;
			
			case 5:
				return "HUD_LBD_GRCE";
				break;
			
			case 4:
			case 9:
			case 10:
			case 6:
			case 25:
			case 11:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 18:
			case 14:
			case 17:
			case 15:
			case 13:
			case 12:
			case 16:
			case 19:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 21:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_583()//Position - 0x166F7
{
	if (unk_0xB3132AD292C8DA36())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0x2C748E7CAA8D1D06())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0x9115F2BCE1FD06B6())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0x5CE1D384CAEEB356())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_584()//Position - 0x1673B
{
	Global_8FCD = 1;
}

bool func_585(bool bParam0, int iParam1, bool bParam2)//Position - 0x16747
{
	if (bParam0)
	{
		*iParam1 = unk_0x9934FEFB3B8C6DB8("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*iParam1 = unk_0x9934FEFB3B8C6DB8("MP_SPECTATOR_CARD");
	}
	else
	{
		*iParam1 = unk_0x9934FEFB3B8C6DB8("mp_matchmaking_card");
	}
	return unk_0xA7F138B5B1AB2CF6(*iParam1);
}

void func_586(int iParam0, var uParam1, bool bParam2)//Position - 0x16787
{
	unk_0x7CB6FD92BE491AD9(&(uParam1->f_21), 7);
	Global_180515 = 0;
	func_499();
	Global_180514 = 0;
	uParam1->f_1B = 0;
	if (bParam2)
	{
		if (func_36(&(uParam1->f_13)))
		{
			func_35(&(uParam1->f_13));
			unk_0x7CB6FD92BE491AD9(&(Global_267214.f_11E1), 5);
		}
	}
	if (unk_0xA7F138B5B1AB2CF6(*iParam0))
	{
		unk_0xB0B0FE33F4F22679(iParam0);
	}
	if (unk_0xFA30DFD0084E92FE(uParam1->f_21, 0))
	{
		unk_0x7CB6FD92BE491AD9(&(uParam1->f_21), 0);
	}
	unk_0xE7918A3D05166D98(0f);
}

int func_587()//Position - 0x167F9
{
	if (func_595())
	{
		return 0;
	}
	if (func_480())
	{
		return 0;
	}
	if (!func_593())
	{
		return 0;
	}
	if (!func_468())
	{
		return 0;
	}
	if (func_592(8, -1))
	{
		return 0;
	}
	if (func_596() == 2)
	{
		return 0;
	}
	if (Global_267214.f_11B1)
	{
		return 0;
	}
	if (func_281())
	{
		return 0;
	}
	else if (!func_314(unk_0xB5CEFD608600A09F(), 1) && Global_1403E4[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_591(1) || func_589(1)) || Global_4336.f_7C) || Global_4336)
	{
		return 0;
	}
	if (unk_0xE186ACC7BE9B244E())
	{
		return 0;
	}
	if (func_83(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	if (Global_193981)
	{
		return 0;
	}
	if (Global_193985)
	{
		return 0;
	}
	if (func_588(0))
	{
		return 0;
	}
	if (unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_111.f_13, 4))
	{
		return 0;
	}
	if (Global_14B1E6)
	{
		return 0;
	}
	if ((Global_199A7E.f_2C1.f_5 || Global_19A579.f_2C1.f_5) || Global_1996C1.f_2C1.f_5)
	{
		return 0;
	}
	return 1;
}

bool func_588(int iParam0)//Position - 0x16941
{
	return unk_0xFA30DFD0084E92FE(Global_267214.f_1312.f_25, iParam0);
}

int func_589(bool bParam0)//Position - 0x16958
{
	if (unk_0x546584EE3E61A6C6())
	{
		if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			if (func_590(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x8FCEEB789599BD9B(0, 25) || unk_0x8FCEEB789599BD9B(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_4336.f_82)
	{
		return 0;
	}
	if (unk_0x8FCEEB789599BD9B(0, 19) || (!bParam0 && unk_0xD3C4A010282C31F2(0, 19)))
	{
		return 1;
	}
	if (unk_0x8ACB0C3FACC09467())
	{
		if (((unk_0x8FCEEB789599BD9B(0, 166) || unk_0x8FCEEB789599BD9B(0, 167)) || unk_0x8FCEEB789599BD9B(0, 168)) || unk_0x8FCEEB789599BD9B(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0xD3C4A010282C31F2(0, 166) || unk_0xD3C4A010282C31F2(0, 167)) || unk_0xD3C4A010282C31F2(0, 168)) || unk_0xD3C4A010282C31F2(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_590(int iParam0)//Position - 0x16A43
{
	int iVar0;
	
	if (unk_0xADF4D6B0407B3CC1())
	{
		if (!unk_0x36CEFBE9B745A58D(iParam0))
		{
			unk_0x9CDD10270A1ACF6F(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == 177293209)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_591(bool bParam0)//Position - 0x16AA0
{
	if (bParam0)
	{
		return (Global_4336.f_4 && Global_4336.f_68 == 4);
	}
	return Global_4336.f_4;
}

bool func_592(int iParam0, int iParam1)//Position - 0x16AC9
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

int func_593()//Position - 0x16B04
{
	if (func_594())
	{
		return 1;
	}
	if (unk_0x17FAADF9916EF741())
	{
		return 0;
	}
	if (unk_0x422F9EDE839E6ABB() || unk_0x26641E1BFD792DBC())
	{
		return 0;
	}
	if (unk_0xF6023EB13558345B())
	{
		return 0;
	}
	return 1;
}

bool func_594()//Position - 0x16B43
{
	return Global_1406B6;
}

bool func_595()//Position - 0x16B4F
{
	return unk_0x105601648511CC64() <= Global_43C1.f_1671 + 100;
}

int func_596()//Position - 0x16B64
{
	return Global_14CC81.f_44;
}

int func_597()//Position - 0x16B72
{
	if (Global_180516 > 16)
	{
		return 1;
	}
	return 0;
}

float func_598()//Position - 0x16B88
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0xFAD6B644971DD747()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_599(int iParam0)//Position - 0x16BAC
{
	switch (iParam0)
	{
		case 20:
		case 26:
		case 27:
			return 1;
			break;
	}
	return 0;
}

int func_600()//Position - 0x16BD5
{
	if (func_603())
	{
		return 1;
	}
	if (func_6(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	if (func_573())
	{
		return 1;
	}
	if (func_404(unk_0xB5CEFD608600A09F()))
	{
		switch (func_285(unk_0xB5CEFD608600A09F()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			
			case 140:
				if (!func_601(unk_0xB5CEFD608600A09F()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_601(unk_0xB5CEFD608600A09F()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_601(unk_0xB5CEFD608600A09F()))
				{
					return 1;
				}
				break;
			
			case 175:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_601(int iParam0)//Position - 0x16CB0
{
	return unk_0xFA30DFD0084E92FE(Global_18C80F[iParam0 /*558*/].f_1, 4);
}

int func_602(int iParam0)//Position - 0x16CC8
{
	if (iParam0 == 27)
	{
		if ((func_404(unk_0xB5CEFD608600A09F()) && !func_89(unk_0xB5CEFD608600A09F())) && !func_514(unk_0xB5CEFD608600A09F(), 236))
		{
			return 1;
		}
	}
	if (iParam0 == 26)
	{
		if (func_95(unk_0xB5CEFD608600A09F(), 0) && func_89(unk_0xB5CEFD608600A09F()))
		{
			return 1;
		}
		if (func_473(unk_0xB5CEFD608600A09F()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_603()//Position - 0x16D39
{
	if (func_604(unk_0xB5CEFD608600A09F()))
	{
		return Global_141780;
	}
	return 0;
}

int func_604(int iParam0)//Position - 0x16D54
{
	if (unk_0x7AF0088ABFA713B6())
	{
		if (func_85(iParam0, 0))
		{
			return unk_0xE502970386494D01(iParam0);
		}
	}
	return 0;
}

void func_605()//Position - 0x16D77
{
	int iVar0;
	
	if (unk_0x05086B70D2CFEA6F(unk_0xCFA8A401AAD7BB5A(iLocal_113)))
	{
		iVar0 = unk_0x4ED43B67B3F05E0F(unk_0xCFA8A401AAD7BB5A(iLocal_113));
		if (unk_0x96B1061E8F3CBC9A(iVar0))
		{
			func_606(iVar0, 2);
		}
	}
	iLocal_113++;
	if (iLocal_113 >= unk_0x81C86888AEA2F49B())
	{
		iLocal_113 = 0;
	}
}

void func_606(int iParam0, int iParam1)//Position - 0x16DC0
{
	bool bVar0;
	
	if (unk_0xFA30DFD0084E92FE(Global_180634.f_1, 0))
	{
		return;
	}
	if (func_36(&(Global_180634.f_12)))
	{
		return;
	}
	if (unk_0xFA30DFD0084E92FE(Global_180634.f_2, iParam0))
	{
		if (Global_180634 < iParam1 && unk_0xFA30DFD0084E92FE(Global_180634.f_1, 1))
		{
			unk_0xF0059F27F7BB6680(&(Global_180634.f_1), 0);
			return;
		}
		if (Global_180634 != 0)
		{
			unk_0xF0059F27F7BB6680(&(Global_180634.f_1), 1);
		}
		Global_180634 = 0;
		Global_180634.f_2 = 0;
	}
	unk_0xF0059F27F7BB6680(&(Global_180634.f_2), iParam0);
	bVar0 = true;
	if (func_7(iParam0))
	{
		bVar0 = false;
	}
	if (func_607(iParam0))
	{
		bVar0 = false;
	}
	if (func_85(iParam0, 0))
	{
		bVar0 = false;
	}
	if (func_6(iParam0))
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		Global_180634++;
	}
}

bool func_607(int iParam0)//Position - 0x16E8E
{
	return unk_0xFA30DFD0084E92FE(Global_18C80F[iParam0 /*558*/].f_1, 10);
}

void func_608(int iParam0, int iParam1)//Position - 0x16EA7
{
	Local_1511[iParam0 /*5*/] = iParam1;
}

int func_609()//Position - 0x16EB8
{
	struct<71> Var0;
	int iVar1;
	int iVar2;
	
	Var0 = 4;
	Var0.f_5 = 32;
	Var0.f_26 = 32;
	Global_267214.f_127A = { Var0 };
	iVar1 = 0;
	while (iVar1 < 30)
	{
		Global_267214.f_127A.f_26[iVar1] = -1;
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		Local_165.f_215[iVar2 /*42*/].f_1 = func_87();
		iVar2++;
	}
	return 1;
}

int func_610()//Position - 0x16F29
{
	return Local_144;
}

int func_611(int iParam0)//Position - 0x16F34
{
	return Local_1511[iParam0 /*5*/];
}

void func_612()//Position - 0x16F43
{
	if (unk_0xFA30DFD0084E92FE(Global_180634.f_1, 6))
	{
		func_636();
		unk_0x7CB6FD92BE491AD9(&(Global_180634.f_1), 6);
	}
	if (!unk_0xFA30DFD0084E92FE(Global_180634.f_1, 7))
	{
		if (unk_0xFA30DFD0084E92FE(Global_180634.f_1, 4) || unk_0xFA30DFD0084E92FE(Global_180634.f_1, 16))
		{
			if (((!unk_0x7382A6B79BD5F585() && !unk_0xF16DAFF595E80F7C()) && !func_161()) && func_13(unk_0xB5CEFD608600A09F(), 1, 1))
			{
				unk_0xF0059F27F7BB6680(&(Global_180634.f_1), 7);
				func_155("FME_PASINT", 30000);
				func_154(1);
			}
		}
		else if (unk_0xFA30DFD0084E92FE(Global_180634.f_1, 17))
		{
			if (func_319() && !func_330())
			{
				unk_0x7CB6FD92BE491AD9(&(Global_180634.f_1), 17);
				unk_0xF0059F27F7BB6680(&(Global_180634.f_1), 16);
			}
		}
	}
	if (!unk_0xFA30DFD0084E92FE(Global_180634.f_1, 23))
	{
		if (((((!unk_0x7382A6B79BD5F585() && !unk_0xFA30DFD0084E92FE(Global_267214.f_310, 2)) && func_13(unk_0xB5CEFD608600A09F(), 1, 1)) && !Global_10AB8) && !Global_CF9C) && !unk_0xF16DAFF595E80F7C())
		{
			if (func_634())
			{
				func_155("AMEV_GA_RP", -1);
				if (func_228(unk_0xB5CEFD608600A09F()) != 200)
				{
					func_154(1);
				}
				unk_0xF0059F27F7BB6680(&(Global_180634.f_1), 23);
			}
		}
	}
	if (unk_0xE186ACC7BE9B244E() && unk_0x0352C1B6B66A87AC() == 15)
	{
		if (func_419(unk_0xB5CEFD608600A09F()))
		{
			if (!unk_0x7922FBF86CF76430(1344549371))
			{
				unk_0xFD1119221F75C876(1344549371);
			}
		}
		else if (unk_0x7922FBF86CF76430(1344549371))
		{
			unk_0xCB1E3206344A11E1(1344549371);
		}
	}
	if (unk_0xFA30DFD0084E92FE(Global_180634.f_1, 9))
	{
		if ((((!unk_0x7382A6B79BD5F585() && !unk_0xF16DAFF595E80F7C()) && !func_161()) && func_13(unk_0xB5CEFD608600A09F(), 1, 1)) && !func_329(unk_0xB5CEFD608600A09F(), 21))
		{
			unk_0x7CB6FD92BE491AD9(&(Global_180634.f_1), 9);
			func_633(0);
			func_155("FME_TBL00", -1);
			func_154(1);
		}
	}
	if (func_404(unk_0xB5CEFD608600A09F()))
	{
		if (!unk_0xFA30DFD0084E92FE(Global_180634.f_1, 18))
		{
			if ((func_329(unk_0xB5CEFD608600A09F(), 21) && unk_0xFA30DFD0084E92FE(Global_180634.f_1, 20)) && !unk_0xFA30DFD0084E92FE(Global_180634.f_1, 19))
			{
				unk_0xF0059F27F7BB6680(&(Global_180634.f_1), 18);
			}
		}
		else if (unk_0xFA30DFD0084E92FE(Global_180634.f_1, 18))
		{
			if (((((!unk_0x7382A6B79BD5F585() && !unk_0xF16DAFF595E80F7C()) && !func_161()) && func_13(unk_0xB5CEFD608600A09F(), 1, 1)) && unk_0x726D9204B160D23E()) && !Global_267214.f_12CF)
			{
				unk_0x7CB6FD92BE491AD9(&(Global_180634.f_1), 18);
				unk_0xF0059F27F7BB6680(&(Global_180634.f_1), 19);
				func_155("AMTT_RPAS", -1);
				func_154(1);
			}
		}
	}
	if (((((func_404(unk_0xB5CEFD608600A09F()) && !func_7(unk_0xB5CEFD608600A09F())) && func_285(unk_0xB5CEFD608600A09F()) != 146) && !func_6(unk_0xB5CEFD608600A09F())) && !func_487(unk_0xB5CEFD608600A09F())) && !func_623())
	{
		if (func_418(func_285(unk_0xB5CEFD608600A09F())))
		{
			unk_0x2C60B9CCB9A13F96(unk_0xB5CEFD608600A09F());
		}
		if (!unk_0xFA30DFD0084E92FE(Global_180634.f_1, 22))
		{
			unk_0xF0059F27F7BB6680(&(Global_180634.f_1), 22);
		}
		if (func_442(unk_0xB5CEFD608600A09F()) || func_412())
		{
			if (!unk_0xFA30DFD0084E92FE(Global_180634.f_1, 10))
			{
				if (func_621(func_285(unk_0xB5CEFD608600A09F())))
				{
					if (func_268(0) && !Global_247C05)
					{
						unk_0xF0059F27F7BB6680(&(Global_180634.f_1), 9);
					}
					if (!Global_247C05)
					{
						func_416(1);
						unk_0xF0059F27F7BB6680(&(Global_180634.f_1), 14);
					}
				}
				unk_0xF0059F27F7BB6680(&(Global_180634.f_1), 10);
			}
		}
		if (func_419(unk_0xB5CEFD608600A09F()))
		{
			if (!unk_0xFA30DFD0084E92FE(Global_180634.f_1, 11))
			{
				if (!Global_16B4F.f_8)
				{
					unk_0xF0059F27F7BB6680(&(Global_180634.f_1), 12);
					func_414(1);
				}
				if (!func_620())
				{
					unk_0xF0059F27F7BB6680(&(Global_180634.f_1), 13);
					func_413();
				}
				if (!Global_247C05)
				{
					unk_0xF0059F27F7BB6680(&(Global_180634.f_1), 14);
					if (func_268(0) && !Global_247C05)
					{
						unk_0xF0059F27F7BB6680(&(Global_180634.f_1), 9);
					}
					func_416(1);
				}
				unk_0xF0059F27F7BB6680(&(Global_180634.f_1), 11);
			}
		}
		else
		{
			func_618(0);
		}
	}
	else
	{
		func_618(1);
	}
	func_613();
	if (func_411(func_285(unk_0xB5CEFD608600A09F())) && !unk_0xFA30DFD0084E92FE(Global_180634.f_1, 21))
	{
		unk_0xF0059F27F7BB6680(&(Global_180634.f_1), 21);
	}
	if ((func_319() && !func_330()) || func_329(unk_0xB5CEFD608600A09F(), 21))
	{
		if (!unk_0xFA30DFD0084E92FE(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_1, 10))
		{
			unk_0xF0059F27F7BB6680(&(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_1), 10);
		}
	}
	else if (unk_0xFA30DFD0084E92FE(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_1, 10))
	{
		unk_0x7CB6FD92BE491AD9(&(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_1), 10);
	}
}

void func_613()//Position - 0x17463
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_161())
	{
		iVar2 = 63;
		iVar2 = 0;
		while (iVar2 < 83)
		{
			if (func_457(iVar2))
			{
				iVar0 = iVar2;
				if (iVar0 == 63 || iVar0 >= 81)
				{
					iVar1 = 15000;
				}
				else
				{
					iVar1 = 3000;
				}
				if (unk_0xFA30DFD0084E92FE(Global_180634.f_1, 26))
				{
					unk_0x7CB6FD92BE491AD9(&(Global_180634.f_1), 26);
				}
				func_614(iVar0, iVar1);
				iVar2 = 83;
			}
			iVar2++;
		}
	}
	else if (!unk_0xFA30DFD0084E92FE(Global_180634.f_1, 26))
	{
		func_35(&(Global_180634.f_16));
		unk_0xF0059F27F7BB6680(&(Global_180634.f_1), 26);
	}
}

void func_614(int iParam0, int iParam1)//Position - 0x17506
{
	if (!func_36(&(Global_180634.f_16)))
	{
		func_2(&(Global_180634.f_16), 0, 0);
	}
	else if (func_1(&(Global_180634.f_16), iParam1, 0))
	{
		if (func_596() > 0)
		{
			func_617(iParam0);
			if (func_152("AMEV_LBD_HELP"))
			{
				unk_0x7456702622C62EA0(1);
			}
			func_35(&(Global_180634.f_16));
		}
	}
	else
	{
		func_616(0);
		func_615();
	}
}

void func_615()//Position - 0x1756E
{
	Global_267214.f_11A6 = 0;
}

void func_616(int iParam0)//Position - 0x1757E
{
	Global_14CC81.f_44 = iParam0;
}

void func_617(int iParam0)//Position - 0x1758E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_252E21.f_A8F[iVar0 /*80*/].f_1 == iParam0)
		{
			Global_252E21.f_A8F[iVar0 /*80*/].f_2 = 5;
			unk_0xF0059F27F7BB6680(&(Global_252E21.f_A8F[iVar0 /*80*/].f_45), 0);
		}
		iVar0++;
	}
}

void func_618(int iParam0)//Position - 0x175DA
{
	if ((unk_0xFA30DFD0084E92FE(Global_180634.f_1, 11) || (unk_0xFA30DFD0084E92FE(Global_180634.f_1, 10) && iParam0)) || (unk_0xFA30DFD0084E92FE(Global_180634.f_1, 22) && iParam0))
	{
		if (unk_0xFA30DFD0084E92FE(Global_180634.f_1, 12))
		{
			unk_0x7CB6FD92BE491AD9(&(Global_180634.f_1), 12);
			func_414(0);
		}
		if (unk_0xFA30DFD0084E92FE(Global_180634.f_1, 13))
		{
			unk_0x7CB6FD92BE491AD9(&(Global_180634.f_1), 13);
			func_619();
		}
		if (unk_0xFA30DFD0084E92FE(Global_180634.f_1, 14) && !func_95(unk_0xB5CEFD608600A09F(), 0))
		{
			unk_0x7CB6FD92BE491AD9(&(Global_180634.f_1), 14);
			func_416(0);
		}
		unk_0x7CB6FD92BE491AD9(&(Global_180634.f_1), 11);
		unk_0x7CB6FD92BE491AD9(&(Global_180634.f_1), 10);
		unk_0x7CB6FD92BE491AD9(&(Global_180634.f_1), 22);
	}
}

void func_619()//Position - 0x176B5
{
	unk_0x7CB6FD92BE491AD9(&(Global_267214.f_1270), 0);
}

bool func_620()//Position - 0x176C9
{
	return unk_0xFA30DFD0084E92FE(Global_267214.f_1270, 0);
}

int func_621(int iParam0)//Position - 0x176DD
{
	switch (iParam0)
	{
		case 129:
		case 132:
		case 136:
		case 138:
		case 139:
		case 140:
		case 141:
			return 1;
		
		case 131:
		case 146:
			return func_419(unk_0xB5CEFD608600A09F());
		
		case 133:
			return (func_412() || func_622(func_284()));
		
		default:
	}
	return 0;
}

int func_622(int iParam0)//Position - 0x1774D
{
	switch (iParam0)
	{
		case 1:
		case 10:
		case 6:
		case 12:
		case 11:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_623()//Position - 0x17785
{
	if (((((((((func_632() || func_631()) || func_630()) || func_281()) || (func_629() && !unk_0x517823CA390A19F6())) || (func_626() && !func_625())) || Global_248A6D) || Global_248A6D.f_1 != 0) || Global_248AB7 != 0) || (func_624() == 2 && !unk_0x517823CA390A19F6()))
	{
		return 1;
	}
	return 0;
}

int func_624()//Position - 0x17819
{
	return Global_EF3AE;
}

bool func_625()//Position - 0x17825
{
	return unk_0xFA30DFD0084E92FE(Global_255A46.f_2, 27);
}

int func_626()//Position - 0x17839
{
	if (func_628() || func_627())
	{
		return Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_62 == 8;
	}
	return 0;
}

var func_627()//Position - 0x17866
{
	return Global_255A46.f_26E;
}

bool func_628()//Position - 0x17875
{
	return unk_0xFA30DFD0084E92FE(Global_255A46.f_2, 11);
}

bool func_629()//Position - 0x17889
{
	return unk_0xFA30DFD0084E92FE(Global_255A46, 5);
}

bool func_630()//Position - 0x1789A
{
	return unk_0xFA30DFD0084E92FE(Global_255A46, 2);
}

bool func_631()//Position - 0x178AB
{
	return unk_0xFA30DFD0084E92FE(Global_255A46, 20);
}

bool func_632()//Position - 0x178BD
{
	return Global_255A46.f_24A;
}

void func_633(int iParam0)//Position - 0x178CC
{
	int iVar0;
	
	iVar0 = func_216(2530, -1, 0);
	if (iParam0 == 0)
	{
		if (!unk_0xFA30DFD0084E92FE(iVar0, 0))
		{
			unk_0xF0059F27F7BB6680(&iVar0, 0);
		}
		else if (!unk_0xFA30DFD0084E92FE(iVar0, 1))
		{
			unk_0xF0059F27F7BB6680(&iVar0, 1);
		}
		else if (!unk_0xFA30DFD0084E92FE(iVar0, 2))
		{
			unk_0xF0059F27F7BB6680(&iVar0, 2);
		}
	}
	else if (iParam0 == 1)
	{
		if (!unk_0xFA30DFD0084E92FE(iVar0, 3))
		{
			unk_0xF0059F27F7BB6680(&iVar0, 3);
		}
		else if (!unk_0xFA30DFD0084E92FE(iVar0, 4))
		{
			unk_0xF0059F27F7BB6680(&iVar0, 4);
		}
		else if (!unk_0xFA30DFD0084E92FE(iVar0, 5))
		{
			unk_0xF0059F27F7BB6680(&iVar0, 5);
		}
	}
	else if (iParam0 == 2)
	{
		if (!unk_0xFA30DFD0084E92FE(iVar0, 6))
		{
			unk_0xF0059F27F7BB6680(&iVar0, 6);
		}
		else if (!unk_0xFA30DFD0084E92FE(iVar0, 7))
		{
			unk_0xF0059F27F7BB6680(&iVar0, 7);
		}
		else if (!unk_0xFA30DFD0084E92FE(iVar0, 8))
		{
			unk_0xF0059F27F7BB6680(&iVar0, 8);
		}
	}
	else if (iParam0 == 3)
	{
		if (!unk_0xFA30DFD0084E92FE(iVar0, 9))
		{
			unk_0xF0059F27F7BB6680(&iVar0, 9);
		}
		else if (!unk_0xFA30DFD0084E92FE(iVar0, 10))
		{
			unk_0xF0059F27F7BB6680(&iVar0, 10);
		}
		else if (!unk_0xFA30DFD0084E92FE(iVar0, 11))
		{
			unk_0xF0059F27F7BB6680(&iVar0, 11);
		}
	}
	func_207(2530, iVar0, -1, 1, 0);
}

int func_634()//Position - 0x17A04
{
	int iVar0;
	
	if (!func_36(&(Global_180634.f_F)))
	{
		func_2(&(Global_180634.f_F), 0, 0);
		Global_180634.f_11 = 0;
	}
	else if (func_1(&(Global_180634.f_F), 1000, 0))
	{
		if (unk_0x05086B70D2CFEA6F(unk_0xCFA8A401AAD7BB5A(Global_180634.f_11)))
		{
			iVar0 = unk_0x4ED43B67B3F05E0F(unk_0xCFA8A401AAD7BB5A(Global_180634.f_11));
			if (unk_0x96B1061E8F3CBC9A(iVar0))
			{
				if (func_13(iVar0, 1, 1) && func_635(iVar0, 6))
				{
					if (SYSTEM::VDIST(func_29(unk_0xB5CEFD608600A09F()), func_29(iVar0)) < 80f)
					{
						return 1;
					}
				}
			}
		}
		Global_180634.f_11++;
		if (Global_180634.f_11 >= 32)
		{
			Global_180634.f_11 = 0;
			func_35(&(Global_180634.f_F));
		}
	}
	return 0;
}

int func_635(int iParam0, int iParam1)//Position - 0x17ACC
{
	int iVar0;
	
	if (Global_1406BF != 0)
	{
		return 0;
	}
	if (!func_211(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_18402B[iVar0 /*770*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

void func_636()//Position - 0x17B05
{
	unk_0xAEC867D0DBB7AFEB(5);
	func_638();
	unk_0xDF53A66AEE1401AA(1f);
	unk_0x7CB6FD92BE491AD9(&(Global_180634.f_1), 8);
	func_637();
}

void func_637()//Position - 0x17B2B
{
	if (Global_195F30)
	{
		if (unk_0xFA30DFD0084E92FE(Global_195F31, 0))
		{
			unk_0x7CB6FD92BE491AD9(&Global_2692A7, 0);
		}
		if (unk_0xFA30DFD0084E92FE(Global_195F31, 1))
		{
			unk_0x7CB6FD92BE491AD9(&Global_2692A7, 1);
		}
		if (unk_0xFA30DFD0084E92FE(Global_195F31, 5))
		{
			unk_0x7CB6FD92BE491AD9(&Global_2692A7, 5);
		}
		if (unk_0x86BC948CAD7C61EF(-355737150))
		{
			unk_0xF72F6BB050622804(-355737150, 1, 0, 0);
		}
		if (unk_0x86BC948CAD7C61EF(-580979506))
		{
			unk_0xF72F6BB050622804(-580979506, 1, 0, 0);
		}
		if (unk_0x86BC948CAD7C61EF(-1426452475))
		{
			unk_0xF72F6BB050622804(-1426452475, 1, 0, 0);
		}
		if (unk_0x86BC948CAD7C61EF(745417724))
		{
			unk_0xF72F6BB050622804(745417724, 1, 0, 0);
		}
		if (unk_0x86BC948CAD7C61EF(-1305304906))
		{
			unk_0xF72F6BB050622804(-1305304906, 1, 0, 0);
		}
		if (unk_0x86BC948CAD7C61EF(-1543175077))
		{
			unk_0xF72F6BB050622804(-1543175077, 1, 0, 0);
		}
		if (unk_0x86BC948CAD7C61EF(-811770997))
		{
			unk_0xF72F6BB050622804(-811770997, 1, 0, 0);
		}
		Global_195F31 = 0;
	}
	Global_195F30 = 0;
}

void func_638()//Position - 0x17C2B
{
	if (unk_0x3C406FC829C1E14A(Global_267214.f_130E))
	{
		if (!Global_267214.f_130E == unk_0x8A55B15F4133C912() && Global_267214.f_130D < 1f)
		{
			return;
		}
	}
	Global_267214.f_130E = -1;
	Global_267214.f_130D = 1f;
}

int func_639()//Position - 0x17C72
{
	if (func_640())
	{
		return 1;
	}
	return 0;
}

bool func_640()//Position - 0x17C86
{
	return Global_180634.f_18;
}

int func_641()//Position - 0x17C94
{
	var uVar0;
	
	func_645(&uVar0);
	if (Global_14083F == 0)
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			return 1;
		}
	}
	if (func_644())
	{
		return 1;
	}
	if (Global_25891C)
	{
		return 1;
	}
	if (func_643())
	{
		return 1;
	}
	if (func_642(157))
	{
		if (!func_632())
		{
			return 1;
		}
	}
	if (func_642(155))
	{
		return 1;
	}
	if (!unk_0x57D316754A262B34())
	{
		return 1;
	}
	if (func_421() != 0)
	{
		if (unk_0xB731B8C5BCE89836(func_421()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_642(int iParam0)//Position - 0x17D1E
{
	if (unk_0xA1AC399BCBEE5B2D(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_643()//Position - 0x17D35
{
	return Global_258063;
}

bool func_644()//Position - 0x17D41
{
	return Global_255A46.f_245;
}

void func_645(var uParam0)//Position - 0x17D50
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
					func_646(iVar0);
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

void func_646(int iParam0)//Position - 0x17DC3
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x414AA1932D1C88E2(1, iParam0, &vVar0, 3))
	{
		if (func_13(vVar0.y, 1, 1))
		{
			iVar1 = unk_0xA95CF30C72EB526E(vVar0.y);
			if (unk_0x724D816EA203A79E(iVar1))
			{
				if (unk_0x5237AF95232D78C5(iVar1, 0))
				{
					iVar2 = unk_0x9FE9D386222EEE47(iVar1, 0);
					if (unk_0x403C891106DCABAF(iVar2, vVar0.z) && unk_0x32405B7614E36453())
					{
						if (func_647(iVar2, &bVar3))
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

int func_647(int iParam0, var uParam1)//Position - 0x17E44
{
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (!unk_0x5CAE759AE8219D20(iParam0))
		{
			if (unk_0x63B5FF8D34CBC98E(iParam0))
			{
				if (!unk_0xFF2234981505F7F4(unk_0x6F79ECA8C83E4357(iParam0)))
				{
					unk_0x77815D3407C6700D(iParam0, 0, 1);
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

void func_648()//Position - 0x17EA3
{
	SYSTEM::WAIT(0);
}

void func_649()//Position - 0x17EB0
{
	var uVar0[4];
	int iVar1;
	var uVar2;
	
	func_163();
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (unk_0xFA30DFD0084E92FE(iLocal_139, iVar1) && !unk_0x1BD5EE88F32433CD(iLocal_140[iVar1]))
		{
			unk_0x38FF8CB6377D36F6(iLocal_140[iVar1]);
			unk_0x26D344275839A25E(iLocal_140[iVar1]);
		}
		iVar1++;
	}
	func_407();
	func_460(0);
	func_652(132, 0, Local_144.f_8 == 6);
	func_427(22, 0);
	Global_267214.f_12C1 = -1;
	uVar0[0] = Local_144.f_3[0];
	uVar0[1] = Local_144.f_3[1];
	uVar0[2] = Local_144.f_3[2];
	uVar0[3] = Local_144.f_3[3];
	func_651(&(uVar0[0]));
	func_651(&(uVar0[1]));
	func_651(&(uVar0[2]));
	func_651(&(uVar0[3]));
	if (func_641())
	{
		Local_1510.f_5 = 5;
	}
	else if (unk_0xFA30DFD0084E92FE(Local_144.f_2, 2))
	{
		Local_1510.f_5 = 6;
	}
	else if (Local_1510.f_5 != 1)
	{
		Local_1510.f_5 = 2;
	}
	Local_1510 = Local_144.f_2D4;
	Local_1510.f_1 = Local_144.f_2D5;
	Local_1510.f_4 = Local_144.f_2D6;
	Local_1510.f_3 = Local_144.f_2D8;
	Local_1510.f_A = (unk_0xB99C193A32DE341D() - Local_1510.f_9);
	uVar2 = Local_144.f_2C8;
	if (Local_144.f_2C3)
	{
		uVar2 = Local_144.f_2C8 + 4;
	}
	if (!Global_40001.f_2A88)
	{
		if (Local_1510.f_6 > 0)
		{
		}
	}
	Local_1510.f_6 = (Local_1510.f_6 + iLocal_118);
	if (unk_0x6BAA0516CC970D99() != -1)
	{
		func_650(Local_1510, uVar2, Local_1511[unk_0x6BAA0516CC970D99() /*5*/].f_4, uVar0[0], uVar0[1], uVar0[2], uVar0[3]);
	}
	func_453(1);
	unk_0x95E4B6F3ED223F5A();
}

void func_650(struct<12> Param0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6)//Position - 0x1806E
{
	char* sVar0;
	struct<13> Var1;
	struct<14> Var2;
	struct<18> Var3;
	struct<14> Var4;
	struct<13> Var5;
	struct<14> Var6;
	struct<14> Var7;
	struct<16> Var8;
	struct<13> Var9;
	struct<14> Var10;
	struct<14> Var11;
	struct<13> Var12;
	
	sVar0 = unk_0x1377080E9B0BD993();
	if (Param0.f_9 == 0)
	{
		Param0.f_A = 0;
	}
	if (Param0.f_8 > Param0.f_9)
	{
		Param0.f_8 = Param0.f_9;
	}
	if (Global_11542)
	{
		if (unk_0x3362CDE8460ED38B(sVar0, "am_hot_target"))
		{
			Var1 = { Param0 };
			Var1.f_C = uParam1;
			unk_0x3F02404BB189D126(&Var1);
		}
		else if (unk_0x3362CDE8460ED38B(sVar0, "freemode"))
		{
			Var2 = { Param0 };
			Var2.f_C = uParam1;
			Var2.f_D = iParam2;
			unk_0x3F37A01E10EFBC82(&Var2);
		}
		else if (unk_0x3362CDE8460ED38B(sVar0, "am_cp_collection"))
		{
			Var3 = { Param0 };
			Var3.f_C = uParam1;
			Var3.f_D = iParam2;
			Var3.f_E = iParam3;
			Var3.f_F = uParam4;
			Var3.f_10 = uParam5;
			Var3.f_11 = uParam6;
			unk_0x9D30E1D8E183CBC3(&Var3);
		}
		else if (unk_0x3362CDE8460ED38B(sVar0, "am_challenges"))
		{
			Var4 = { Param0 };
			Var4.f_C = uParam1;
			Var4.f_D = SYSTEM::TO_FLOAT(iParam2);
			if (iParam3 == 1)
			{
				Var4.f_D = (Var4.f_D / 10f);
			}
			unk_0xC0312FB328DBF452(&Var4);
		}
		else if (unk_0x3362CDE8460ED38B(sVar0, "am_penned_in"))
		{
			unk_0x6B88EE97D205E33D(&Param0);
		}
		else if (unk_0x3362CDE8460ED38B(sVar0, "am_pass_the_parcel"))
		{
			Var5 = { Param0 };
			Var5.f_C = uParam1;
			unk_0x6188CC5679D9EC62(&Var5);
		}
		else if (unk_0x3362CDE8460ED38B(sVar0, "am_hot_property"))
		{
			Var6 = { Param0 };
			Var6.f_C = uParam1;
			Var6.f_D = iParam2;
			unk_0x0F05DB94C77F0394(&Var6);
		}
		else if (unk_0x3362CDE8460ED38B(sVar0, "am_dead_drop"))
		{
			Var7 = { Param0 };
			Var7.f_C = uParam1;
			Var7.f_D = iParam2;
			unk_0xB4DF36A99D88AB30(&Var7);
		}
		else if (unk_0x3362CDE8460ED38B(sVar0, "am_king_of_the_castle"))
		{
			Var8 = { Param0 };
			Var8.f_C = uParam1;
			Var8.f_D = iParam2;
			Var8.f_E = iParam3;
			Var8.f_F = uParam4;
			unk_0x5D48D4D7FEF5F15D(&Var8);
		}
		else if (unk_0x3362CDE8460ED38B(sVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var9 = { Param0 };
			Var9.f_C = uParam1;
			unk_0x72EF836BB244665D(&Var9);
		}
		else if (unk_0x3362CDE8460ED38B(sVar0, "AM_KILL_LIST"))
		{
			if (iParam3 == 0)
			{
				Var10 = { Param0 };
				Var10.f_C = uParam1;
				Var10.f_D = iParam2;
				unk_0x7A96074A38F0BFBD(&Var10);
			}
			else
			{
				Var11 = { Param0 };
				Var11.f_C = uParam1;
				Var11.f_D = iParam2;
				unk_0x71D1B9D601584712(&Var11);
			}
		}
		else if (unk_0x3362CDE8460ED38B(sVar0, "am_hunt_the_beast"))
		{
			Var12 = { Param0 };
			Var12.f_C = uParam1;
			unk_0x46BD47BFBC39CC53(&Var12);
		}
	}
}

void func_651(int iParam0)//Position - 0x182E3
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0xFA30DFD0084E92FE(*iParam0, iVar0))
		{
			unk_0x7CB6FD92BE491AD9(iParam0, iVar0);
		}
		else
		{
			unk_0xF0059F27F7BB6680(iParam0, iVar0);
		}
		iVar0++;
	}
}

void func_652(int iParam0, bool bParam1, bool bParam2)//Position - 0x1831D
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
	}
	if (unk_0xB5CEFD608600A09F() != -1)
	{
		if (unk_0xFA30DFD0084E92FE(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_1, 13))
		{
			unk_0x7CB6FD92BE491AD9(&(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_1), 13);
		}
		if (unk_0xFA30DFD0084E92FE(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_1, 14))
		{
			unk_0x7CB6FD92BE491AD9(&(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_1), 14);
		}
	}
	if (unk_0xFA30DFD0084E92FE(Global_180634.f_1, 21))
	{
		unk_0x7CB6FD92BE491AD9(&(Global_180634.f_1), 21);
	}
	func_682();
	unk_0x9B90420B04C07704("DisableFlightMusic", 0);
	unk_0x9B90420B04C07704("WantedMusicDisabled", 0);
	if (bParam1)
	{
		uVar0 = func_681(func_285(unk_0xB5CEFD608600A09F()));
		func_427(21, 0);
	}
	else
	{
		if ((bParam2 && unk_0xB5CEFD608600A09F() != -1) && func_680(unk_0xB5CEFD608600A09F()) >= 12)
		{
			func_679(2542, -1);
			iVar1 = func_216(2542, -1, 0);
			if (iVar1 == 2)
			{
				unk_0xF0059F27F7BB6680(&Global_18064E, 0);
			}
			else if (iVar1 == 4)
			{
				unk_0xF0059F27F7BB6680(&Global_18064E, 1);
			}
			else if (iVar1 == 6)
			{
				unk_0xF0059F27F7BB6680(&Global_18064E, 2);
			}
			else if (iVar1 == 8)
			{
				unk_0xF0059F27F7BB6680(&Global_18064E, 3);
			}
			else if (iVar1 == 10)
			{
				unk_0xF0059F27F7BB6680(&Global_18064E, 4);
			}
			else if (iVar1 == 12)
			{
				unk_0xF0059F27F7BB6680(&Global_18064E, 5);
			}
		}
		func_678();
		func_677();
		func_676();
		if ((!func_91(unk_0xB5CEFD608600A09F()) && !func_160(unk_0xB5CEFD608600A09F())) && !func_432())
		{
			func_660();
		}
		func_659();
		if (!unk_0xFA30DFD0084E92FE(Global_19693F.f_3, 0) && !unk_0xFA30DFD0084E92FE(Global_19693F.f_3, 1))
		{
			func_636();
		}
		func_658();
		unk_0x7CB6FD92BE491AD9(&(Global_267214.f_6C4), 2);
		func_162();
		func_147();
	}
	if (unk_0x7922FBF86CF76430(1344549371))
	{
		unk_0xCB1E3206344A11E1(1344549371);
	}
	if (!bParam1 || uVar0)
	{
		if ((unk_0xB5CEFD608600A09F() != -1 && !func_329(unk_0xB5CEFD608600A09F(), 21)) && !func_95(unk_0xB5CEFD608600A09F(), 0))
		{
			func_416(0);
			func_414(0);
			func_657();
		}
	}
	if (bParam2 && !bParam1)
	{
		if (func_40(26, -1))
		{
			Global_2588DC = -1;
			func_37(26, -1);
		}
	}
	if (!func_653())
	{
		Global_2620A0 = 1;
	}
}

int func_653()//Position - 0x1856F
{
	if (((((!func_578(unk_0xB5CEFD608600A09F()) && !func_559(unk_0xB5CEFD608600A09F())) && func_285(unk_0xB5CEFD608600A09F()) != 146) && !func_656()) && !func_655()) && !func_654(Global_440000.f_243FE))
	{
		return 0;
	}
	return 1;
}

bool func_654(int iParam0)//Position - 0x185D1
{
	return iParam0 == 57;
}

int func_655()//Position - 0x185DE
{
	if (Global_440000.f_1EF38 == Global_40001.f_2319)
	{
		return 1;
	}
	return 0;
}

int func_656()//Position - 0x185FF
{
	if ((Global_440000 == 0 && unk_0x517823CA390A19F6()) && (((((((Global_440000.f_5 != 0 || Global_440000.f_243FE > 0) || unk_0xFA30DFD0084E92FE(Global_440000.f_4, 15)) || unk_0xFA30DFD0084E92FE(Global_440000.f_4, 18)) || unk_0xFA30DFD0084E92FE(Global_440000.f_4, 19)) || unk_0xFA30DFD0084E92FE(Global_440000.f_4, 29)) || unk_0xFA30DFD0084E92FE(Global_440000.f_4, 28)) || unk_0xFA30DFD0084E92FE(Global_440000.f_5, 23)))
	{
		return 1;
	}
	return 0;
}

void func_657()//Position - 0x186A9
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1403FD)
	{
		if (unk_0xFA30DFD0084E92FE(Global_2401A9[iVar0 /*26*/].f_C, 11))
		{
			if (unk_0xFA30DFD0084E92FE(Global_2401A9[iVar0 /*26*/].f_D, 26))
			{
				unk_0x7CB6FD92BE491AD9(&(Global_2401A9[iVar0 /*26*/].f_D), 26);
			}
		}
		iVar0++;
	}
}

void func_658()//Position - 0x186FF
{
	struct<25> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_15 = -1;
	Global_180634 = { Var0 };
}

void func_659()//Position - 0x1872E
{
	var uVar0;
	
	Global_141780 = uVar0;
}

void func_660()//Position - 0x1873C
{
	unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_18), &Global_24C33D, 2);
	unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_1A), &Global_24C33F, 18);
	func_674();
	func_663(1, 1, 0);
	func_661();
}

void func_661()//Position - 0x18772
{
	func_662(0, 0);
}

void func_662(int iParam0, int iParam1)//Position - 0x18780
{
	Global_24B2CE.f_16 = iParam0;
	Global_24B2CE.f_17 = iParam1;
}

void func_663(bool bParam0, bool bParam1, bool bParam2)//Position - 0x18798
{
	if (bParam1)
	{
		unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_2C), &Global_24C351, 317);
	}
	else
	{
		Global_24B2CE.f_2C = { Global_24C351 };
		Global_24B2CE.f_2C.f_31 = { Global_24C351.f_31 };
		Global_24B2CE.f_2C.f_34 = Global_24C351.f_34;
		Global_24B2CE.f_2C.f_35 = Global_24C351.f_35;
	}
	if (bParam0)
	{
		func_673();
	}
	if (!bParam2)
	{
		func_665(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	}
	func_664(0);
	func_150();
}

void func_664(bool bParam0)//Position - 0x18837
{
	if (bParam0)
	{
		Global_24B2CE.f_2BD = 0;
	}
	else
	{
		Global_24B2CE.f_2BD = 1;
	}
}

void func_665(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x18857
{
	if (bParam0)
	{
		if (func_672())
		{
			func_671();
		}
		Global_24B2CE.f_2BE.f_203 = unk_0x8A55B15F4133C912();
		Global_24B2CE.f_2BE.f_1F8 = iParam1;
		Global_24B2CE.f_2BE.f_1F9 = iParam2;
		Global_24B2CE.f_2BE.f_1FA = iParam10;
		func_669();
		func_430(8, 0, 0, 0, 0);
		Global_24B2CE.f_2BE.f_1FB = iParam11;
		Global_24B2CE.f_2BE.f_1FE = iParam3;
		Global_24B2CE.f_2BE.f_1FF = iParam4;
		Global_24B2CE.f_2BE.f_1FC = iParam5;
		Global_24B2CE.f_2BE.f_1FD = iParam6;
		Global_24B2CE.f_2BE.f_200 = iParam7;
		Global_24B2CE.f_2BE.f_201 = iParam8;
		Global_24B2CE.f_2BE.f_202 = iParam9;
		Global_24B2CE.f_6C7 = 1;
	}
	else
	{
		func_666();
	}
}

void func_666()//Position - 0x1891E
{
	if (func_672() && !func_668())
	{
		func_671();
	}
	if (func_668())
	{
		func_667();
	}
	else
	{
		func_669();
		func_430(0, 0, 0, 0, 0);
		Global_24B2CE.f_6C7 = 0;
		Global_24B2CE.f_6C6 = 0;
	}
}

void func_667()//Position - 0x18966
{
	unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_2BE), &(Global_24B2CE.f_4C2), 516);
	Global_24B2CE.f_1E3 = { Global_24B2CE.f_1E9 };
	if (unk_0x8A55B15F4133C912() == Global_24B2CE.f_2BE.f_203)
	{
		Global_24B2CE.f_6C6 = 0;
	}
}

int func_668()//Position - 0x189AE
{
	if ((Global_24B2CE.f_6C6 && !unk_0x8A55B15F4133C912() == Global_24B2CE.f_4C2.f_203) && unk_0x3C406FC829C1E14A(Global_24B2CE.f_4C2.f_203))
	{
		return 1;
	}
	return 0;
}

void func_669()//Position - 0x189ED
{
	if (func_672() && !func_668())
	{
		func_671();
	}
	func_670();
	Global_24B2CE.f_2BE = 0;
}

void func_670()//Position - 0x18A16
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_24B2CE.f_2BE.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_671()//Position - 0x18A51
{
	if (func_668())
	{
		if (Global_24B2CE.f_2BE.f_203 == Global_24B2CE.f_4C2.f_203)
		{
			return;
		}
	}
	if (!unk_0x8A55B15F4133C912() == Global_24B2CE.f_2BE.f_203)
	{
		unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_4C2), &(Global_24B2CE.f_2BE), 516);
		Global_24B2CE.f_1E9 = { Global_24B2CE.f_1E3 };
		Global_24B2CE.f_6C6 = 1;
	}
}

int func_672()//Position - 0x18ABF
{
	if ((Global_24B2CE.f_6C7 && !unk_0x8A55B15F4133C912() == Global_24B2CE.f_2BE.f_203) && unk_0x3C406FC829C1E14A(Global_24B2CE.f_2BE.f_203))
	{
		return 1;
	}
	return 0;
}

void func_673()//Position - 0x18AFE
{
	unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_169), &Global_24C48E, 121);
}

void func_674()//Position - 0x18B17
{
	func_675();
	Global_24B2CE.f_8C4 = 0;
}

void func_675()//Position - 0x18B2B
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_24B2CE.f_8C5[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

void func_676()//Position - 0x18B57
{
	Global_267214.f_1270 = 0;
}

void func_677()//Position - 0x18B67
{
	if (unk_0xB5CEFD608600A09F() != -1)
	{
		Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_1 = 0;
	}
}

void func_678()//Position - 0x18B85
{
	int iVar0;
	
	iVar0 = unk_0xB5CEFD608600A09F();
	if (iVar0 != -1)
	{
		Global_18C80F[iVar0 /*558*/] = -1;
	}
}

void func_679(int iParam0, int iParam1)//Position - 0x18BA3
{
	int iVar0;
	
	iVar0 = func_216(iParam0, func_212(iParam1), 0);
	iVar0++;
	if (!func_215(iParam0))
	{
		func_207(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_208(iParam0, iVar0, iParam1, 1);
	}
}

int func_680(int iParam0)//Position - 0x18BE4
{
	return Global_18402B[iParam0 /*770*/].f_D3.f_6;
}

int func_681(int iParam0)//Position - 0x18BF9
{
	switch (iParam0)
	{
		case 133:
		case 132:
		case 138:
		case 144:
		case 140:
		case 139:
		case 131:
		case 141:
		case -1:
			return 1;
		
		case 146:
			if (func_419(unk_0xB5CEFD608600A09F()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_682()//Position - 0x18C5B
{
	if (unk_0xFA30DFD0084E92FE(Global_267214.f_6BC, 3) || unk_0xFA30DFD0084E92FE(Global_267214.f_6BC, 4))
	{
		if (unk_0x17FAADF9916EF741() || unk_0x422F9EDE839E6ABB())
		{
			unk_0x829FA4611BD56B44(800);
		}
	}
	if (unk_0xFA30DFD0084E92FE(Global_267214.f_6BC, 5))
	{
		unk_0x7CB6FD92BE491AD9(&(Global_267214.f_6BC), 5);
	}
	if (unk_0xFA30DFD0084E92FE(Global_267214.f_6BC, 3))
	{
		unk_0x7CB6FD92BE491AD9(&(Global_267214.f_6BC), 3);
	}
	if (unk_0xFA30DFD0084E92FE(Global_267214.f_6BC, 4))
	{
		unk_0x7CB6FD92BE491AD9(&(Global_267214.f_6BC), 4);
	}
	func_685(0);
	func_684(0);
	func_683(0);
}

void func_683(int iParam0)//Position - 0x18CFC
{
	if (Global_267214.f_119A != iParam0)
	{
		Global_267214.f_119A = iParam0;
	}
}

void func_684(bool bParam0)//Position - 0x18D19
{
	if (Global_267214.f_1199 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_267214.f_1199 = bParam0;
	}
}

void func_685(int iParam0)//Position - 0x18D3E
{
	if (Global_267214.f_1197 != iParam0)
	{
		Global_267214.f_1197 = iParam0;
	}
}

int func_686(struct<21> Param0)//Position - 0x18D5B
{
	func_694(func_695(Param0), Param0);
	unk_0x38A34821FCF0B79E(0);
	unk_0xA6E7E0EC9E48D44C(func_693(8));
	func_690(0, -1, 0);
	func_688(132);
	unk_0x76AE988734CA7760(&Local_144, 750);
	unk_0xE45D6A3FD6454198(&Local_1511, 161);
	unk_0x6C87EFD58B261C6F(0);
	if (!func_687())
	{
		func_649();
	}
	if (unk_0x0DE6397A2CB3EF75())
	{
		unk_0x498B26CF846D31E2(&(Local_144.f_2D4), &(Local_144.f_2D5));
	}
	Local_1510.f_2 = unk_0xB46BE0E79661103C();
	Local_1510.f_9 = unk_0xB99C193A32DE341D();
	Local_1510.f_8 = unk_0xB99C193A32DE341D();
	func_427(22, 1);
	return 1;
}

int func_687()//Position - 0x18DEE
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x7AF0088ABFA713B6())
		{
			return 0;
		}
		if (unk_0xB3E1B1F67FB95F04())
		{
			return 1;
		}
		if (func_644())
		{
			return 0;
		}
		if (func_642(155))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}

void func_688(int iParam0)//Position - 0x18E47
{
	func_658();
	func_689();
	func_676();
	Global_180634.f_4 = iParam0;
	Global_180634.f_5 = iParam0;
	func_426(iParam0, -1);
	func_20(&(Global_180634.f_12), 0, 0);
	Global_267214.f_11DD = 0;
	Global_25848B[0] = func_87();
	Global_25848B[1] = func_87();
	Global_25848B[2] = func_87();
	Global_25848B[3] = func_87();
	Global_25848B[4] = func_87();
	func_147();
	if (!func_471(func_178()))
	{
		func_177();
	}
	if (func_319() && !func_330())
	{
		unk_0xF0059F27F7BB6680(&(Global_180634.f_1), 16);
	}
	else
	{
		unk_0xF0059F27F7BB6680(&(Global_180634.f_1), 17);
	}
}

void func_689()//Position - 0x18EFD
{
	var uVar0;
	
	Global_18064D = uVar0;
}

int func_690(int iParam0, int iParam1, bool bParam2)//Position - 0x18F0B
{
	int iVar0;
	
	iVar0 = unk_0x4796DAD7A8894E2F();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_692();
			}
			else
			{
				return 0;
			}
		}
		if (!func_691())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x7AF0088ABFA713B6())
				{
					if (!bParam2)
					{
						func_692();
					}
					else
					{
						return 0;
					}
				}
				if (func_644())
				{
					if (!bParam2)
					{
						func_692();
					}
					else
					{
						return 0;
					}
				}
				if (func_642(155))
				{
					if (!bParam2)
					{
						func_692();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xF5F5C6DD66B0FB2A())
			{
				if (!bParam2)
				{
					func_692();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = unk_0x4796DAD7A8894E2F();
	}
	if (iParam1 > -1)
	{
		Global_1406F4 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			if (!bParam2)
			{
				func_692();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xF5F5C6DD66B0FB2A())
	{
		if (!bParam2)
		{
			func_692();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_691()//Position - 0x19020
{
	return Global_14083F;
}

void func_692()//Position - 0x1902C
{
	unk_0x95E4B6F3ED223F5A();
}

int func_693(int iParam0)//Position - 0x19038
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 1;
		
		case 2:
			return 1;
		
		case 3:
			return 1;
		
		case 4:
			return 1;
		
		case 5:
			return 1;
		
		case 6:
			return 0;
		
		case 7:
			return 1;
		
		case 8:
			return 10;
		
		case 9:
			return 10;
		
		case 10:
			return 1;
		
		case 11:
			return 6;
		
		case 12:
			return 0;
		
		case 13:
			return 1;
		
		case 14:
			return 0;
		
		case 15:
			return 0;
		
		case 16:
			return 0;
		
		case 17:
			return 0;
		
		case 18:
			return 0;
		
		case 19:
			return 0;
		
		default:
	}
	return 0;
}

void func_694(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x19112
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		func_692();
	}
	unk_0xBF463BC3D6FFDE31(iParam0, 0, Param1.f_10);
}

int func_695(int iParam0)//Position - 0x19131
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 8;
		
		case 91:
			return 32;
		
		case 92:
			return 8;
		
		case 93:
			return 8;
		
		case 101:
			return 8;
		
		case 94:
			return 8;
		
		case 95:
			return 32;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 8;
		
		case 99:
			return 32;
		
		case 100:
			return 32;
		
		case 102:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 8;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 32;
		
		case 114:
			return 8;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 32;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 8;
		
		case 123:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 124:
			return 32;
		
		case 125:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 136:
			return 32;
		
		case 137:
			return 32;
		
		case 126:
			return 32;
		
		case 127:
			return 32;
		
		case 131:
			return 32;
		
		case 129:
			return 32;
		
		case 130:
			return 32;
		
		case 134:
			return 32;
		
		case 135:
			return 32;
		
		case 132:
			return 32;
		
		case 133:
			return 32;
		
		case 138:
			return 32;
		
		case 139:
			return 32;
		
		case 140:
			return 32;
		
		case 141:
			return 32;
		
		case 142:
			return 2;
		
		case 147:
			return 1;
		
		case 143:
			return 2;
		
		case 144:
			return 4;
		
		case 145:
			return 2;
		
		case 146:
			return 2;
		
		case 128:
			return 1;
		
		case 148:
			return 2;
		
		case 149:
		case 150:
		case 151:
		case 152:
		case 153:
		case 154:
			return 0;
		
		case 158:
			return 1;
		
		case 155:
			return 4;
		
		case 156:
			return 16;
		
		case 157:
			return 32;
		
		default:
	}
	return 0;
}

