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
	var uLocal_30 = -1;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 1000;
	var uLocal_38 = 1000;
	var uLocal_39 = 0;
	bool bLocal_40 = 0;
	bool bLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	float fLocal_51 = 0f;
	float fLocal_52 = 0f;
	float fLocal_53 = 0f;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	float fLocal_58 = 0f;
	float fLocal_59 = 0f;
	float fLocal_60 = 0f;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	bool bLocal_77 = 0;
	bool bLocal_78 = 0;
	bool bLocal_79 = 0;
	bool bLocal_80 = 0;
	bool bLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	bool bLocal_84 = 0;
	bool bLocal_85 = 0;
	int iLocal_86 = 0;
	bool bLocal_87 = 0;
	bool bLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	bool bLocal_93 = 0;
	bool bLocal_94 = 0;
	bool bLocal_95 = 0;
	int iLocal_96 = 0;
	bool bLocal_97 = 0;
	var uLocal_98 = 0;
	bool bLocal_99 = 0;
	bool bLocal_100 = 0;
	bool bLocal_101 = 0;
	bool bLocal_102 = 0;
	bool bLocal_103 = 0;
	bool bLocal_104 = 0;
	bool bLocal_105 = 0;
	bool bLocal_106 = 0;
	bool bLocal_107 = 0;
	bool bLocal_108 = 0;
	float fLocal_109[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_110[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_111[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_112[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_113[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_114 = 0f;
	float fLocal_115 = 0f;
	float fLocal_116 = 0f;
	float fLocal_117 = 0f;
	float fLocal_118[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_119[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_120[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_121[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_122[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_123[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_124[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_125[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_126[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_127[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_128 = 0f;
	float fLocal_129 = 0f;
	float fLocal_130 = 0f;
	float fLocal_131 = 0f;
	float fLocal_132 = 0f;
	float fLocal_133 = 0f;
	float fLocal_134 = 0f;
	float fLocal_135 = 0f;
	float fLocal_136 = 0f;
	float fLocal_137 = 0f;
	float fLocal_138 = 0f;
	float fLocal_139 = 0f;
	float fLocal_140 = 0f;
	float fLocal_141 = 0f;
	float fLocal_142 = 0f;
	float fLocal_143 = 0f;
	float fLocal_144 = 0f;
	float fLocal_145 = 0f;
	float fLocal_146 = 0f;
	float fLocal_147 = 0f;
	float fLocal_148 = 0f;
	int iLocal_149[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_150[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_151[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_152[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_153[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_154[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_155[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	vector3 vLocal_173[175] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_174[15] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_175[35] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_176 = { 0f, 0f, 0f };
	vector3 vLocal_177 = { 0f, 0f, 0f };
	vector3 vLocal_178 = { 0f, 0f, 0f };
	vector3 vLocal_179 = { 0f, 0f, 0f };
	vector3 vLocal_180 = { 0f, 0f, 0f };
	vector3 vLocal_181 = { 0f, 0f, 0f };
	vector3 vLocal_182 = { 0f, 0f, 0f };
	vector3 vLocal_183 = { 0f, 0f, 0f };
	vector3 vLocal_184 = { 0f, 0f, 0f };
	char cLocal_185[64] = "";
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_196[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_197[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_198 = 0;
	int iLocal_199 = 0;
	int iLocal_200 = 0;
	int iLocal_201[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_202[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_203[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_204[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_205[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_206 = 0;
	int iLocal_207 = 0;
	int iLocal_208 = 0;
	var uLocal_209 = 12;
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
	int iLocal_222 = 0;
	int iLocal_223 = 0;
	int iLocal_224 = 0;
	int iLocal_225 = 0;
	int iLocal_226 = 0;
	int iLocal_227 = 0;
	int iLocal_228 = 0;
	int iLocal_229 = 0;
	int iLocal_230 = 0;
	int iLocal_231 = 0;
	int iLocal_232 = 0;
	int iLocal_233 = 0;
	int iLocal_234 = 0;
	int iLocal_235 = 0;
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	int iLocal_240 = 0;
	int iLocal_241 = 0;
	int iLocal_242 = 0;
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
	int iLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	int iLocal_265[4] = { 0, 0, 0, 0 };
	int iLocal_266 = 0;
	var uLocal_267[3] = { 0, 0, 0 };
	int iLocal_268[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275[2] = { 0, 0 };
	int iLocal_276[2] = { 0, 0 };
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280[2] = { 0, 0 };
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	int iLocal_283 = 0;
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	int iLocal_286[2] = { 0, 0 };
	int iLocal_287 = 0;
	int iLocal_288[2] = { 0, 0 };
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293[2] = { 0, 0 };
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	vector3 vLocal_306 = { 0f, 0f, 0f };
	vector3 vLocal_307 = { 0f, 0f, 0f };
	vector3 vLocal_308 = { 0f, 0f, 0f };
	vector3 vLocal_309 = { 0f, 0f, 0f };
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	vector3 vLocal_316 = { 0f, 0f, 0f };
	vector3 vLocal_317 = { 0f, 0f, 0f };
	vector3 vLocal_318 = { 0f, 0f, 0f };
	float fLocal_319 = 0f;
	float fLocal_320 = 0f;
	float fLocal_321 = 0f;
	float fLocal_322 = 0f;
	float fLocal_323 = 0f;
	float fLocal_324 = 0f;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	var uLocal_327 = 0;
	int iLocal_328 = 0;
	int iLocal_329 = 0;
	int iLocal_330 = 0;
	int iLocal_331 = 0;
	int iLocal_332 = 0;
	int iLocal_333 = 0;
	int iLocal_334 = 0;
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	int iLocal_341 = 0;
	int iLocal_342 = 0;
	int iLocal_343 = 0;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	int iLocal_359 = 0;
	int iLocal_360 = 0;
	int iLocal_361 = 0;
	int iLocal_362 = 0;
	int iLocal_363[3] = { 0, 0, 0 };
	int iLocal_364[2] = { 0, 0 };
	int iLocal_365 = 0;
	int iLocal_366 = 0;
	int iLocal_367 = 0;
	int iLocal_368 = 0;
	int iLocal_369 = 0;
	int iLocal_370 = 0;
	int iLocal_371 = 0;
	int iLocal_372 = 0;
	int iLocal_373 = 0;
	int iLocal_374 = 0;
	int iLocal_375 = 0;
	int iLocal_376 = 0;
	int iLocal_377 = 0;
	int iLocal_378 = 0;
	int iLocal_379 = 0;
	int iLocal_380 = 0;
	int iLocal_381 = 0;
	int iLocal_382 = 0;
	int iLocal_383 = 0;
	int iLocal_384 = 0;
	int iLocal_385 = 0;
	int iLocal_386 = 0;
	int iLocal_387 = 0;
	int iLocal_388 = 0;
	int iLocal_389 = 0;
	int iLocal_390 = 0;
	int iLocal_391 = 0;
	int iLocal_392 = 0;
	var uLocal_393 = 0;
	int iLocal_394 = 0;
	int iLocal_395 = 0;
	int iLocal_396 = 0;
	int iLocal_397[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_398 = 0;
	int iLocal_399 = 0;
	int iLocal_400 = 0;
	int iLocal_401 = 0;
	int iLocal_402 = 0;
	int iLocal_403 = 0;
	int iLocal_404 = 0;
	int iLocal_405 = 0;
	int iLocal_406 = 0;
	int iLocal_407 = 0;
	int iLocal_408 = 0;
	int iLocal_409 = 0;
	int iLocal_410 = 0;
	int iLocal_411 = 0;
	int iLocal_412 = 0;
	int iLocal_413[19] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_414 = 0;
	int iLocal_415 = 0;
	int iLocal_416 = 0;
	int iLocal_417 = 0;
	int iLocal_418 = 0;
	int iLocal_419 = 0;
	int iLocal_420 = 0;
	int iLocal_421 = 0;
	int iLocal_422 = 0;
	int iLocal_423 = 0;
	int iLocal_424 = 0;
	int iLocal_425 = 0;
	int iLocal_426 = 0;
	int iLocal_427 = 0;
	int iLocal_428 = 0;
	int iLocal_429[2] = { 0, 0 };
	int iLocal_430[2] = { 0, 0 };
	int iLocal_431 = 0;
	int iLocal_432 = 0;
	int iLocal_433 = 0;
	int iLocal_434 = 0;
	int iLocal_435[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_436[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_437 = 0;
	int iLocal_438 = 0;
	int iLocal_439 = 0;
	int iLocal_440 = 0;
	int iLocal_441 = 0;
	int iLocal_442 = 0;
	int iLocal_443 = 0;
	int iLocal_444 = 0;
	int iLocal_445 = 0;
	int iLocal_446 = 0;
	int iLocal_447[3] = { 0, 0, 0 };
	int iLocal_448[2] = { 0, 0 };
	int iLocal_449 = 0;
	int iLocal_450[4] = { 0, 0, 0, 0 };
	int iLocal_451 = 0;
	int iLocal_452 = 0;
	int iLocal_453 = 0;
	int iLocal_454 = 0;
	int iLocal_455 = 0;
	int iLocal_456 = 0;
	int iLocal_457 = 0;
	int iLocal_458 = 0;
	int iLocal_459 = 0;
	int iLocal_460 = 0;
	int iLocal_461 = 0;
	int iLocal_462 = 0;
	int iLocal_463 = 0;
	int iLocal_464 = 0;
	int iLocal_465[3] = { 0, 0, 0 };
	int iLocal_466[3] = { 0, 0, 0 };
	int iLocal_467 = 0;
	int iLocal_468 = 0;
	int iLocal_469 = 0;
	int iLocal_470 = 0;
	int iLocal_471 = 0;
	int iLocal_472 = 0;
	int iLocal_473 = 0;
	int iLocal_474 = 0;
	int iLocal_475 = 0;
	int iLocal_476 = 0;
	int iLocal_477 = 0;
	int iLocal_478 = 0;
	int iLocal_479 = 0;
	int iLocal_480 = 0;
	int iLocal_481 = 0;
	int iLocal_482 = 0;
	int iLocal_483 = 0;
	int iLocal_484 = 0;
	int iLocal_485 = 0;
	int iLocal_486 = 0;
	int iLocal_487[4] = { 0, 0, 0, 0 };
	int iLocal_488 = 0;
	char* sLocal_489 = NULL;
	var uLocal_490 = 16;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
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
	var uLocal_524 = 0;
	var uLocal_525 = 0;
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
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
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
	var uLocal_566 = 0;
	var uLocal_567 = 0;
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
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
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
	var uLocal_608 = 0;
	var uLocal_609 = 0;
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
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
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
	var uLocal_650 = 0;
	var uLocal_651 = 0;
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
	var uLocal_662 = 21;
	var uLocal_663 = 6;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	int iLocal_667[3] = { 0, 0, 0 };
	int iLocal_668 = 0;
	int iLocal_669 = 0;
	int iLocal_670 = 0;
	int iLocal_671 = 0;
	int iLocal_672 = 0;
	int iLocal_673 = 0;
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
	iLocal_55 = 3;
	fLocal_58 = 80f;
	fLocal_59 = 140f;
	fLocal_60 = 180f;
	iLocal_66 = 1;
	iLocal_67 = 65;
	iLocal_68 = 49;
	iLocal_69 = 64;
	iLocal_73 = unk_0xD736C0AC62BF73AD();
	iLocal_74 = unk_0x880E0FAC08C6FA65();
	bLocal_78 = true;
	bLocal_85 = true;
	bLocal_107 = true;
	fLocal_128 = 120f;
	fLocal_129 = 0f;
	fLocal_131 = 1f;
	fLocal_132 = 0f;
	fLocal_133 = 1f;
	fLocal_134 = 30f;
	fLocal_136 = 1f;
	fLocal_137 = 5f;
	fLocal_138 = 1f;
	fLocal_139 = 1f;
	fLocal_140 = 100f;
	fLocal_141 = 100f;
	fLocal_142 = 0f;
	fLocal_143 = 7000f;
	fLocal_144 = 0f;
	fLocal_145 = 0f;
	fLocal_146 = 0.3f;
	fLocal_147 = 0.5f;
	fLocal_148 = 50f;
	iLocal_159 = -1;
	iLocal_167 = -1;
	iLocal_168 = -1;
	vLocal_306 = { -1024.1f, -485.3321f, 35.9816f };
	vLocal_307 = { -428.0263f, -2153.577f, 9.2997f };
	vLocal_308 = { -498.7f, -2136.5f, 8.4f };
	vLocal_316 = { -272.8615f, -2186.932f, 9.3174f };
	fLocal_319 = 209.7233f;
	fLocal_320 = 90.947f;
	fLocal_323 = 46.7161f;
	if (func_423(0))
	{
		func_416(24, 0);
	}
	unk_0xCB8EEC006EBFC1E7(0);
	unk_0x34DAC25A04E24704("EXTRASUNNY", 20f);
	if (unk_0xE8A79675302ED812(3))
	{
		func_414(unk_0xBC25C936A095B5BA(), 0);
		unk_0x3857DADBD6EC8A54("TRV4_FAIL");
		func_412();
		func_410();
	}
	func_409(1);
	unk_0x25A523E067E06F54(1);
	iLocal_223 = 0;
	iLocal_222 = 0;
	while (true)
	{
		unk_0x2E94C9549322098D("M_LegalTrouble", 0);
		if (iLocal_249 > unk_0x105601648511CC64())
		{
			unk_0xE9B1C9E275C24095();
		}
		func_405();
		func_404();
		func_402();
		func_398();
		func_397();
		switch (iLocal_222)
		{
			case 0:
				func_393();
				break;
			
			case 1:
				func_348();
				break;
			
			case 2:
				func_342();
				break;
			
			case 3:
				func_339();
				break;
			
			case 4:
				func_244();
				break;
			
			case 5:
				func_232();
				break;
			
			case 6:
				func_226();
				break;
			
			case 7:
				func_216();
				break;
			
			case 8:
				func_5();
				break;
			
			case 9:
				break;
			
			case 10:
				break;
			
			case 11:
				break;
		}
		SYSTEM::WAIT(0);
		func_1();
	}
}

void func_1()//Position - 0x28A
{
	if (iLocal_411 == 0)
	{
		if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			func_4(unk_0xBC25C936A095B5BA(), 476);
			iLocal_411 = 1;
		}
	}
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			if (iLocal_412 == 0)
			{
				iLocal_289 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
				if (unk_0x724D816EA203A79E(iLocal_289))
				{
					if (unk_0xE59B7F5A03335350(iLocal_289, 0))
					{
						func_3(iLocal_289, -1);
						func_4(iLocal_289, 479);
						iLocal_412 = 1;
					}
				}
			}
		}
		else
		{
			func_4(0, 479);
			func_3(0, -1);
			if (iLocal_412 == 1)
			{
				iLocal_412 = 0;
			}
		}
	}
	if (iLocal_413[0] == 0)
	{
		if (unk_0x724D816EA203A79E(uLocal_267[0]))
		{
			if (unk_0x36CEFBE9B745A58D(uLocal_267[0]))
			{
				iLocal_233++;
				iLocal_413[0] = 1;
			}
		}
	}
	if (iLocal_413[1] == 0)
	{
		if (unk_0x724D816EA203A79E(uLocal_267[1]))
		{
			if (unk_0x36CEFBE9B745A58D(uLocal_267[1]))
			{
				iLocal_233++;
				iLocal_413[1] = 1;
			}
		}
	}
	if (iLocal_413[2] == 0)
	{
		if (unk_0x724D816EA203A79E(uLocal_267[2]))
		{
			if (unk_0x36CEFBE9B745A58D(uLocal_267[2]))
			{
				iLocal_233++;
				iLocal_413[2] = 1;
			}
		}
	}
	if (iLocal_413[3] == 0)
	{
		if (unk_0x724D816EA203A79E(iLocal_268[0]))
		{
			if (unk_0x36CEFBE9B745A58D(iLocal_268[0]))
			{
				iLocal_233++;
				iLocal_413[3] = 1;
			}
		}
	}
	if (iLocal_413[4] == 0)
	{
		if (unk_0x724D816EA203A79E(iLocal_268[1]))
		{
			if (unk_0x36CEFBE9B745A58D(iLocal_268[1]))
			{
				iLocal_233++;
				iLocal_413[4] = 1;
			}
		}
	}
	if (iLocal_413[5] == 0)
	{
		if (unk_0x724D816EA203A79E(iLocal_268[2]))
		{
			if (unk_0x36CEFBE9B745A58D(iLocal_268[2]))
			{
				iLocal_233++;
				iLocal_413[5] = 1;
			}
		}
	}
	if (iLocal_413[6] == 0)
	{
		if (unk_0x724D816EA203A79E(iLocal_268[3]))
		{
			if (unk_0x36CEFBE9B745A58D(iLocal_268[3]))
			{
				iLocal_233++;
				iLocal_413[6] = 1;
			}
		}
	}
	if (iLocal_413[7] == 0)
	{
		if (unk_0x724D816EA203A79E(iLocal_268[4]))
		{
			if (unk_0x36CEFBE9B745A58D(iLocal_268[4]))
			{
				iLocal_233++;
				iLocal_413[7] = 1;
			}
		}
	}
	if (iLocal_413[8] == 0)
	{
		if (unk_0x724D816EA203A79E(iLocal_268[5]))
		{
			if (unk_0x36CEFBE9B745A58D(iLocal_268[5]))
			{
				iLocal_233++;
				iLocal_413[8] = 1;
			}
		}
	}
	if (iLocal_413[9] == 0)
	{
		if (unk_0x724D816EA203A79E(iLocal_268[6]))
		{
			if (unk_0x36CEFBE9B745A58D(iLocal_268[6]))
			{
				iLocal_233++;
				iLocal_413[9] = 1;
			}
		}
	}
	if (iLocal_413[10] == 0)
	{
		if (unk_0x724D816EA203A79E(iLocal_268[7]))
		{
			if (unk_0x36CEFBE9B745A58D(iLocal_268[7]))
			{
				iLocal_233++;
				iLocal_413[10] = 1;
			}
		}
	}
	if (iLocal_413[11] == 0)
	{
		if (unk_0x724D816EA203A79E(iLocal_268[8]))
		{
			if (unk_0x36CEFBE9B745A58D(iLocal_268[8]))
			{
				iLocal_233++;
				iLocal_413[11] = 1;
			}
		}
	}
	if (iLocal_413[12] == 0)
	{
		if (unk_0x724D816EA203A79E(iLocal_268[9]))
		{
			if (unk_0x36CEFBE9B745A58D(iLocal_268[9]))
			{
				iLocal_233++;
				iLocal_413[12] = 1;
			}
		}
	}
	if (iLocal_413[13] == 0)
	{
		if (unk_0x724D816EA203A79E(iLocal_268[10]))
		{
			if (unk_0x36CEFBE9B745A58D(iLocal_268[10]))
			{
				iLocal_233++;
				iLocal_413[13] = 1;
			}
		}
	}
	if (iLocal_413[14] == 0)
	{
		if (unk_0x724D816EA203A79E(iLocal_272))
		{
			if (unk_0x36CEFBE9B745A58D(iLocal_272))
			{
				iLocal_233++;
				iLocal_413[14] = 1;
			}
		}
	}
	if (iLocal_413[15] == 0)
	{
		if (unk_0x724D816EA203A79E(iLocal_273))
		{
			if (unk_0x36CEFBE9B745A58D(iLocal_273))
			{
				iLocal_233++;
				iLocal_413[15] = 1;
			}
		}
	}
	if (iLocal_413[16] == 0)
	{
		if (unk_0x724D816EA203A79E(iLocal_274))
		{
			if (unk_0x36CEFBE9B745A58D(iLocal_274))
			{
				iLocal_233++;
				iLocal_413[16] = 1;
			}
		}
	}
	if (iLocal_413[17] == 0)
	{
		if (unk_0x724D816EA203A79E(iLocal_275[0]))
		{
			if (unk_0x36CEFBE9B745A58D(iLocal_275[0]))
			{
				iLocal_233++;
				iLocal_413[17] = 1;
			}
		}
	}
	if (iLocal_222 == 8)
	{
		if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) != 0)
		{
			if (iLocal_414 == 0)
			{
				func_2(482, 0);
				iLocal_414 = 1;
			}
		}
	}
}

void func_2(int iParam0, bool bParam1)//Position - 0x6EB
{
	int iVar0;
	
	Global_DAA9 = iParam0;
	if (!Global_DAA7)
	{
		Global_DAA7 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_109DE)
		{
			if (Global_109DF[iVar0 /*9*/] == iParam0)
			{
				Global_109DF[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_3(int iParam0, int iParam1)//Position - 0x735
{
	Global_DAAA = iParam0;
	Global_DAAB = iParam1;
}

void func_4(int iParam0, int iParam1)//Position - 0x747
{
	int iVar0;
	
	Global_DAAC = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_109DE)
	{
		if (iParam1 == -1 || Global_109DF[iVar0 /*9*/] == iParam1)
		{
			if (Global_109DF[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_109DF[iVar0 /*9*/].f_6 = iParam0;
				Global_109DF[iVar0 /*9*/].f_7 = 1;
				Global_109DF[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_5()//Position - 0x7B2
{
	if (unk_0x17FAADF9916EF741())
	{
		if (unk_0x724D816EA203A79E(iLocal_285))
		{
			unk_0x1C5BDB4E5D257D63(iLocal_285, 0, 0, 1);
		}
	}
	if (iLocal_223 > 0)
	{
		func_214();
	}
	if (iLocal_223 == 0)
	{
		if (iLocal_343 == 1)
		{
			func_117();
			iLocal_343 = 0;
		}
		func_25(3, "STAGE_EVADE_POLICE", 1, 0, 0, 1);
		iLocal_367 = 0;
		iLocal_368 = 0;
		iLocal_369 = 0;
		iLocal_344 = 0;
		iLocal_345 = 0;
		iLocal_346 = 0;
		iLocal_398 = 0;
		iLocal_399 = 0;
		iLocal_400 = 0;
		iLocal_418 = 0;
		iLocal_419 = 0;
		iLocal_423 = 0;
		iLocal_426 = 0;
		iLocal_227 = 0;
		unk_0x522053D86D6E1C7A("Misssolomon_3");
		unk_0xF243B7A14FCFD0F4(joaat("oracle2"));
		unk_0xF243B7A14FCFD0F4(joaat("baller2"));
		if (unk_0x2DA8CA50A72528FB(iLocal_297))
		{
			unk_0x07B8ECB35A4ED3AC(&iLocal_297);
		}
		if (unk_0x1E8349F219AC5AF9("Trev4_5"))
		{
			unk_0xC881DDFA077826BB("Trev4_5", 0, 1f, 1f);
			unk_0x4CE01E22F13D3913("Trev4_5");
		}
		if (unk_0x724D816EA203A79E(iLocal_279))
		{
			unk_0x1E7A09C1710FB071(&iLocal_279);
		}
		SYSTEM::SETTIMERA(0);
		if (unk_0x17FAADF9916EF741())
		{
			if (!func_24())
			{
				unk_0x8B6B50EADA01F251(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true));
			}
			func_21(0, -1, 1);
		}
		if (!unk_0x726D9204B160D23E())
		{
			unk_0x829FA4611BD56B44(800);
		}
		if (unk_0x724D816EA203A79E(iLocal_266))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_266))
			{
				unk_0xB105531EDD3DE51B(iLocal_266, true);
				unk_0x2E35C4FA5F0ED22F(iLocal_266, false);
			}
		}
		unk_0x3857DADBD6EC8A54("TRV4_LOSE_COPS");
		if (!unk_0x144E80F5C46A6B75("SOL_3_LOSE_COPS"))
		{
			unk_0xD6423910AAD8A379("SOL_3_LOSE_COPS");
		}
		unk_0xEB233A3B7635D2AC();
		func_20("TRV4_END1", 7500, 1);
		if (unk_0x144E80F5C46A6B75("SOL_3_ENGINE_DEATH_SCENE"))
		{
			unk_0xC1300D0F3A74E20B("SOL_3_ENGINE_DEATH_SCENE");
		}
		if (func_19(2))
		{
			func_18(2, 0);
		}
		iLocal_263 = unk_0x3F15B158E03C72E5(-948.4f, -2992.6f, 13.3f, 6f, 5f, 4f, 60f, 0, 7);
		if (unk_0x724D816EA203A79E(iLocal_284))
		{
			if (unk_0xE59B7F5A03335350(iLocal_284, 0))
			{
				unk_0x5EDBD463D700284F(iLocal_284, 0);
			}
		}
		if (unk_0x724D816EA203A79E(iLocal_285))
		{
			if (unk_0xE59B7F5A03335350(iLocal_285, 0))
			{
				unk_0x5EDBD463D700284F(iLocal_285, 0);
			}
		}
		unk_0xAEC867D0DBB7AFEB(5);
		unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 3, 0);
		unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
		func_17(&uLocal_490, 0, unk_0xBC25C936A095B5BA(), "MICHAEL", 0, 1);
		unk_0x9B90420B04C07704("PoliceScannerDisabled", 0);
		iLocal_223 = 1;
	}
	if (iLocal_223 == 1)
	{
		if (iLocal_418 == 0)
		{
			if (!unk_0x724D816EA203A79E(iLocal_293[0]))
			{
				if (unk_0xD6513D668481290A(joaat("oracle2")))
				{
					iLocal_293[0] = unk_0x61C05BF08A1E0EFE(joaat("oracle2"), -1025.596f, -2869.237f, 12.9585f, 241.0686f, true, true, false);
					unk_0xB71D41C0310C93DE(iLocal_293[0], true, 1);
					unk_0xF0A40F19AAB79E88(iLocal_293[0], 1084227584);
					unk_0x2CA123B0622F495C(joaat("oracle2"));
					iLocal_418 = 1;
				}
			}
		}
		if (iLocal_419 == 0)
		{
			if (!unk_0x724D816EA203A79E(iLocal_293[1]))
			{
				if (unk_0xD6513D668481290A(joaat("baller2")))
				{
					iLocal_293[1] = unk_0x61C05BF08A1E0EFE(joaat("baller2"), -971.4223f, -2903.354f, 12.9652f, 61.0213f, true, true, false);
					unk_0xB71D41C0310C93DE(iLocal_293[1], true, 1);
					unk_0xF0A40F19AAB79E88(iLocal_293[1], 1084227584);
					unk_0x2CA123B0622F495C(joaat("baller2"));
					iLocal_419 = 1;
				}
			}
		}
		if (unk_0x724D816EA203A79E(iLocal_293[0]))
		{
			if (unk_0xE59B7F5A03335350(iLocal_293[0], 0))
			{
				if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_293[0], 0))
				{
					if (!unk_0x144E80F5C46A6B75("SOL_3_LOSE_COPS_VEHICLE"))
					{
						unk_0xD6423910AAD8A379("SOL_3_LOSE_COPS_VEHICLE");
					}
				}
			}
			if (func_16(unk_0xBC25C936A095B5BA(), iLocal_293[0], 1) > 200f || unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_293[0], 0))
			{
				unk_0x1E7A09C1710FB071(&(iLocal_293[0]));
			}
		}
		if (unk_0x724D816EA203A79E(iLocal_293[1]))
		{
			if (unk_0xE59B7F5A03335350(iLocal_293[1], 0))
			{
				if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_293[1], 0))
				{
					if (!unk_0x144E80F5C46A6B75("SOL_3_LOSE_COPS_VEHICLE"))
					{
						unk_0xD6423910AAD8A379("SOL_3_LOSE_COPS_VEHICLE");
					}
				}
			}
			if (func_16(unk_0xBC25C936A095B5BA(), iLocal_293[1], 1) > 200f || unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_293[1], 0))
			{
				unk_0x1E7A09C1710FB071(&(iLocal_293[1]));
			}
		}
		if (iLocal_398 == 0)
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_268[0]))
			{
				func_14(iLocal_268[0], "SURROUNDED", 24);
				iLocal_398 = 1;
			}
		}
		if (iLocal_367 == 0)
		{
			if (SYSTEM::TIMERA() > 8000)
			{
				if (unk_0xE59B7F5A03335350(iLocal_286[0], 0))
				{
					unk_0x9E6D037EC3389728(iLocal_286[0], 68, "BB_Chase", 1);
					unk_0x2026EFFE4E1D8EDC(iLocal_286[0], 0f, 0f, 0.15f);
				}
				if (unk_0xE59B7F5A03335350(iLocal_286[1], 0))
				{
					unk_0x9E6D037EC3389728(iLocal_286[1], 69, "BB_Chase", 1);
					unk_0x2026EFFE4E1D8EDC(iLocal_286[1], 0f, 0f, 0.15f);
				}
				iLocal_367 = 1;
			}
		}
		else
		{
			if (unk_0xE59B7F5A03335350(iLocal_286[0], 0))
			{
				if (unk_0xB34E411B0A4BF096(iLocal_286[0]))
				{
					if (unk_0x5B80643EF917B728(iLocal_286[0]) > 5000f)
					{
						if (unk_0xB66CFDE6B830965A(iLocal_286[0]))
						{
							unk_0xD87F0F9CDF39238A(iLocal_286[0]);
						}
					}
				}
				else if (iLocal_368 == 0)
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_268[6]))
					{
						unk_0x2E35C4FA5F0ED22F(iLocal_268[6], false);
					}
					if (!unk_0x36CEFBE9B745A58D(iLocal_268[7]))
					{
						unk_0x2E35C4FA5F0ED22F(iLocal_268[7], false);
					}
					iLocal_368 = 1;
				}
			}
			if (unk_0xE59B7F5A03335350(iLocal_286[1], 0))
			{
				if (unk_0xB34E411B0A4BF096(iLocal_286[1]))
				{
					if (unk_0x5B80643EF917B728(iLocal_286[1]) > 5000f)
					{
						if (unk_0xB66CFDE6B830965A(iLocal_286[1]))
						{
							unk_0xD87F0F9CDF39238A(iLocal_286[1]);
						}
					}
				}
				else if (iLocal_369 == 0)
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_268[8]))
					{
						unk_0x2E35C4FA5F0ED22F(iLocal_268[8], false);
					}
					if (!unk_0x36CEFBE9B745A58D(iLocal_268[9]))
					{
						unk_0x2E35C4FA5F0ED22F(iLocal_268[9], false);
					}
					iLocal_369 = 1;
				}
			}
		}
		func_12();
		if (iLocal_423 == 0)
		{
			if (unk_0x724D816EA203A79E(iLocal_285))
			{
				if (unk_0xE59B7F5A03335350(iLocal_285, 0))
				{
					if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_285, 0))
					{
						unk_0x3857DADBD6EC8A54("TRV4_JET_ENTERED");
						if (!unk_0x144E80F5C46A6B75("SOL_3_LOSE_COPS_PLANE"))
						{
							unk_0xD6423910AAD8A379("SOL_3_LOSE_COPS_PLANE");
						}
						unk_0x1D1C393C7689E5A6(4f, 15f, 4);
						unk_0x1E7A09C1710FB071(&iLocal_285);
						iLocal_423 = 1;
					}
					else if (func_16(unk_0xBC25C936A095B5BA(), iLocal_285, 1) > 200f)
					{
						unk_0x1E7A09C1710FB071(&iLocal_285);
					}
				}
			}
		}
		if (iLocal_423 == 1)
		{
			if (unk_0x724D816EA203A79E(iLocal_285))
			{
				if (unk_0xE59B7F5A03335350(iLocal_285, 0))
				{
					if (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_285, 0))
					{
						if (unk_0x144E80F5C46A6B75("SOL_3_LOSE_COPS_PLANE"))
						{
							unk_0xC1300D0F3A74E20B("SOL_3_LOSE_COPS_PLANE");
						}
						unk_0x3857DADBD6EC8A54("TRV4_LOSE_COPS");
						iLocal_423 = 0;
					}
				}
			}
		}
		if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 0)
		{
			if (iLocal_426 == 0)
			{
				iLocal_235 = unk_0x105601648511CC64();
				iLocal_426 = 1;
			}
		}
		if (iLocal_426 == 1)
		{
			if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 0)
			{
				if (unk_0x105601648511CC64() > iLocal_235 + 3500)
				{
					if (unk_0x144E80F5C46A6B75("SOL_3_LOSE_COPS_PLANE"))
					{
						unk_0xC1300D0F3A74E20B("SOL_3_LOSE_COPS_PLANE");
					}
					if (unk_0x144E80F5C46A6B75("SOL_3_LOSE_COPS"))
					{
						unk_0xC1300D0F3A74E20B("SOL_3_LOSE_COPS");
					}
					if (unk_0x144E80F5C46A6B75("SOL_3_LOSE_COPS_VEHICLE"))
					{
						unk_0xC1300D0F3A74E20B("SOL_3_LOSE_COPS_VEHICLE");
					}
					unk_0x3857DADBD6EC8A54("TRV4_COPS_LOST");
					func_11(0, -1);
					func_6();
				}
			}
			else
			{
				iLocal_426 = 0;
			}
		}
	}
}

void func_6()//Position - 0xE96
{
	func_10(481, iLocal_233, 0);
	func_7(0, 0);
	func_410();
}

void func_7(bool bParam0, int iParam1)//Position - 0xEB3
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_DAA1)
	{
		Global_DAA1 = iParam1;
	}
	if (bParam0)
	{
		if ((func_423(0) && Global_11638.f_1 == 1) && func_9(Global_11638))
		{
		}
		else
		{
			Global_DA9F = 1;
		}
	}
	if (Global_19B04.f_2360 || func_423(0))
	{
		iVar0 = func_8();
		iVar1 = Global_1478C[iVar0 /*5*/];
		uVar2 = Global_1164F.f_6D[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_19B04.f_2360)
			{
			}
			return;
		}
		if (unk_0xFA30DFD0084E92FE(Global_1478C[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (unk_0xFA30DFD0084E92FE(Global_1478C[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0xF0059F27F7BB6680(&(Global_1478C[iVar0 /*5*/].f_1), 4);
		unk_0xF0059F27F7BB6680(&Global_1163A, 1);
		Global_1164A = uVar2;
		Global_1164B = unk_0x105601648511CC64();
	}
}

int func_8()//Position - 0xF89
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (unk_0xFA30DFD0084E92FE(Global_1478C[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_9(int iParam0)//Position - 0xFBE
{
	switch (iParam0)
	{
		case 71:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 91:
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

void func_10(int iParam0, int iParam1, bool bParam2)//Position - 0xFFC
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_109DE)
	{
		if (Global_109DF[iVar0 /*9*/] == iParam0)
		{
			if (bParam2)
			{
				Global_109DF[iVar0 /*9*/].f_1 = iParam1;
			}
			else
			{
				Global_109DF[iVar0 /*9*/].f_1 = (Global_109DF[iVar0 /*9*/].f_1 + iParam1);
			}
			return;
		}
		iVar0++;
	}
	if (Global_109DF[iVar0 /*9*/] != -1)
	{
		if (Global_DB80[Global_109DF[iVar0 /*9*/] /*13*/] == 3)
		{
			if (Global_109DF[iVar0 /*9*/].f_1 > 1)
			{
				Global_109DF[iVar0 /*9*/].f_1 = 1;
			}
			if (Global_109DF[iVar0 /*9*/].f_1 < 0)
			{
				Global_109DF[iVar0 /*9*/].f_1 = 0;
			}
		}
	}
}

void func_11(bool bParam0, int iParam1)//Position - 0x10A6
{
	int iVar0;
	
	if (Global_DAA7)
	{
	}
	Global_DAA7 = 0;
	if (bParam0)
	{
		Global_DAA8 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_109DE)
		{
			if (Global_DB80[Global_109DF[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_109DF[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_109DE)
		{
			if (Global_109DF[iVar0 /*9*/] > 0)
			{
				if (Global_109DF[iVar0 /*9*/] == iParam1)
				{
					Global_109DF[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

void func_12()//Position - 0x1140
{
	iLocal_231 = 0;
	while (iLocal_231 <= 9)
	{
		if (unk_0x724D816EA203A79E(iLocal_268[iLocal_231]))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_268[iLocal_231]))
			{
				if (!unk_0x5237AF95232D78C5(iLocal_268[iLocal_231], 0))
				{
					if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
					{
						if (func_13(unk_0xBC25C936A095B5BA(), iLocal_268[iLocal_231]) > 200f)
						{
							unk_0xA4E856A8CD53B8DF(iLocal_268[iLocal_231]);
							unk_0x02537C8C1BEEB477(&(iLocal_268[iLocal_231]));
						}
						else if (func_13(unk_0xBC25C936A095B5BA(), iLocal_268[iLocal_231]) > 20f)
						{
							if (unk_0xF4FCC3C1048FF2AB(iLocal_268[iLocal_231], -1207174364) != 1 && unk_0xF4FCC3C1048FF2AB(iLocal_268[iLocal_231], -1207174364) != 0)
							{
								unk_0xD0231395241DBA85(iLocal_268[iLocal_231], unk_0xBC25C936A095B5BA(), unk_0xBC25C936A095B5BA(), 2f, 1, 15f, 20f, 0, 0, -687903391);
							}
						}
						else if (unk_0xF4FCC3C1048FF2AB(iLocal_268[iLocal_231], 780511057) != 1 && unk_0xF4FCC3C1048FF2AB(iLocal_268[iLocal_231], 780511057) != 0)
						{
							unk_0xB8CBD998685C0685(iLocal_268[iLocal_231], unk_0xBC25C936A095B5BA(), 0, 16);
							unk_0x91629AC1E1F78419(iLocal_268[iLocal_231], 50, true);
						}
					}
					else if (func_13(unk_0xBC25C936A095B5BA(), iLocal_268[iLocal_231]) > 200f)
					{
						unk_0x02537C8C1BEEB477(&(iLocal_268[iLocal_231]));
					}
					else if (func_13(unk_0xBC25C936A095B5BA(), iLocal_268[iLocal_231]) > 5f)
					{
						if (unk_0xF4FCC3C1048FF2AB(iLocal_268[iLocal_231], -1207174364) != 1 && unk_0xF4FCC3C1048FF2AB(iLocal_268[iLocal_231], -1207174364) != 0)
						{
							unk_0xD0231395241DBA85(iLocal_268[iLocal_231], unk_0xBC25C936A095B5BA(), unk_0xBC25C936A095B5BA(), 2f, 1, 15f, 20f, 0, 0, -687903391);
						}
					}
					else if (unk_0xF4FCC3C1048FF2AB(iLocal_268[iLocal_231], 780511057) != 1 && unk_0xF4FCC3C1048FF2AB(iLocal_268[iLocal_231], 780511057) != 0)
					{
						unk_0xB8CBD998685C0685(iLocal_268[iLocal_231], unk_0xBC25C936A095B5BA(), 0, 16);
						unk_0x91629AC1E1F78419(iLocal_268[iLocal_231], 50, true);
					}
				}
			}
		}
		iLocal_231++;
	}
	if (iLocal_367 == 1)
	{
		if (iLocal_344 == 0)
		{
			if (unk_0x724D816EA203A79E(iLocal_286[0]))
			{
				if (unk_0xE59B7F5A03335350(iLocal_286[0], 0))
				{
					if (unk_0xB34E411B0A4BF096(iLocal_286[0]))
					{
					}
					else
					{
						if (unk_0x724D816EA203A79E(iLocal_268[6]))
						{
							if (!unk_0x36CEFBE9B745A58D(iLocal_268[6]))
							{
								unk_0x2E35C4FA5F0ED22F(iLocal_268[6], false);
								unk_0xA4E856A8CD53B8DF(iLocal_268[6]);
								unk_0xC5A6DFE2B8987B17(&iLocal_304);
								unk_0x932E201A82D2EDB8(0, iLocal_286[0], 256);
								unk_0xB8CBD998685C0685(0, unk_0xBC25C936A095B5BA(), 0, 16);
								unk_0x535008C596714F9E(iLocal_304);
								unk_0xA8E6405305C0D7DF(iLocal_268[6], iLocal_304);
								unk_0x02DAF06EA4F08219(&iLocal_304);
							}
						}
						if (unk_0x724D816EA203A79E(iLocal_268[7]))
						{
							if (!unk_0x36CEFBE9B745A58D(iLocal_268[7]))
							{
								unk_0x2E35C4FA5F0ED22F(iLocal_268[7], false);
								unk_0xA4E856A8CD53B8DF(iLocal_268[7]);
								unk_0xC5A6DFE2B8987B17(&iLocal_304);
								unk_0x932E201A82D2EDB8(0, iLocal_286[0], 256);
								unk_0xB8CBD998685C0685(0, unk_0xBC25C936A095B5BA(), 0, 16);
								unk_0x535008C596714F9E(iLocal_304);
								unk_0xA8E6405305C0D7DF(iLocal_268[7], iLocal_304);
								unk_0x02DAF06EA4F08219(&iLocal_304);
							}
						}
						iLocal_344 = 1;
					}
				}
			}
		}
		else if (iLocal_399 == 0)
		{
			if (unk_0x724D816EA203A79E(iLocal_286[0]))
			{
				if (unk_0xE59B7F5A03335350(iLocal_286[0], 0))
				{
					if (unk_0x724D816EA203A79E(iLocal_268[6]))
					{
						if (!unk_0x36CEFBE9B745A58D(iLocal_268[6]))
						{
							if (!unk_0x62F3A07C43FFB568(iLocal_268[6], iLocal_286[0], 0))
							{
								if (func_13(unk_0xBC25C936A095B5BA(), iLocal_268[6]) < 20f)
								{
									func_14(iLocal_268[6], "DRAW_GUN", 24);
									iLocal_399 = 1;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_345 == 0)
		{
			if (unk_0x724D816EA203A79E(iLocal_286[1]))
			{
				if (unk_0xE59B7F5A03335350(iLocal_286[1], 0))
				{
					if (unk_0xB34E411B0A4BF096(iLocal_286[1]))
					{
					}
					else
					{
						if (unk_0x724D816EA203A79E(iLocal_268[8]))
						{
							if (!unk_0x36CEFBE9B745A58D(iLocal_268[8]))
							{
								unk_0x2E35C4FA5F0ED22F(iLocal_268[8], false);
								unk_0xA4E856A8CD53B8DF(iLocal_268[8]);
								unk_0xC5A6DFE2B8987B17(&iLocal_304);
								unk_0x932E201A82D2EDB8(0, iLocal_286[1], 256);
								unk_0xB8CBD998685C0685(0, unk_0xBC25C936A095B5BA(), 0, 16);
								unk_0x535008C596714F9E(iLocal_304);
								unk_0xA8E6405305C0D7DF(iLocal_268[8], iLocal_304);
								unk_0x02DAF06EA4F08219(&iLocal_304);
							}
						}
						if (unk_0x724D816EA203A79E(iLocal_268[9]))
						{
							if (!unk_0x36CEFBE9B745A58D(iLocal_268[9]))
							{
								unk_0x2E35C4FA5F0ED22F(iLocal_268[9], false);
								unk_0xA4E856A8CD53B8DF(iLocal_268[9]);
								unk_0xC5A6DFE2B8987B17(&iLocal_304);
								unk_0x932E201A82D2EDB8(0, iLocal_286[1], 256);
								unk_0xB8CBD998685C0685(0, unk_0xBC25C936A095B5BA(), 0, 16);
								unk_0x535008C596714F9E(iLocal_304);
								unk_0xA8E6405305C0D7DF(iLocal_268[9], iLocal_304);
								unk_0x02DAF06EA4F08219(&iLocal_304);
							}
						}
						iLocal_345 = 1;
					}
				}
			}
		}
	}
	if (iLocal_346 == 0)
	{
		if (unk_0x724D816EA203A79E(iLocal_268[10]))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_268[10]))
			{
				if (func_13(unk_0xBC25C936A095B5BA(), iLocal_268[10]) > 200f)
				{
					unk_0x02537C8C1BEEB477(&(iLocal_268[iLocal_231]));
					unk_0x4EA570997E107F35("misssolomon_3");
				}
				else if (unk_0xF9E082857622D91E("misssolomon_3"))
				{
					if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), -923.2303f, -2948.004f, 12.9451f, 2f, 2f, 2f, false, true, 0))
					{
						if (!unk_0x36CEFBE9B745A58D(iLocal_268[10]))
						{
							unk_0xA4E856A8CD53B8DF(iLocal_268[10]);
							unk_0xC5A6DFE2B8987B17(&iLocal_304);
							unk_0xE896C0AD02364F2A(0, "misssolomon_3", "plyr_roll_left", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0xB8CBD998685C0685(0, unk_0xBC25C936A095B5BA(), 0, 16);
							unk_0x535008C596714F9E(iLocal_304);
							unk_0xA8E6405305C0D7DF(iLocal_268[10], iLocal_304);
							unk_0x02DAF06EA4F08219(&iLocal_304);
							iLocal_346 = 1;
						}
					}
				}
			}
		}
	}
}

float func_13(int iParam0, int iParam1)//Position - 0x170E
{
	return func_16(iParam0, iParam1, 1);
}

void func_14(int iParam0, char* sParam1, int iParam2)//Position - 0x171F
{
	unk_0x53D8178763EDCE60(iParam0, sParam1, func_15(iParam2), 1);
}

int func_15(int iParam0)//Position - 0x1736
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

float func_16(int iParam0, int iParam1, bool bParam2)//Position - 0x192B
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		vVar0 = { unk_0x541C2AEF053615BC(iParam0, true) };
	}
	else
	{
		vVar0 = { unk_0x541C2AEF053615BC(iParam0, false) };
	}
	if (!unk_0x1D403DFADBC2DE3C(iParam1, 0))
	{
		vVar1 = { unk_0x541C2AEF053615BC(iParam1, true) };
	}
	else
	{
		vVar1 = { unk_0x541C2AEF053615BC(iParam1, false) };
	}
	return unk_0xF0F2FC9DE291567F(vVar0, vVar1, bParam2);
}

void func_17(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x1989
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

void func_18(int iParam0, bool bParam1)//Position - 0x1A24
{
	if (unk_0xFA30DFD0084E92FE(Global_635B, iParam0))
	{
		if (!bParam1)
		{
			unk_0x7CB6FD92BE491AD9(&Global_635B, iParam0);
			StringCopy(&(Global_635C[iParam0 /*6*/]), "NULL", 24);
			Global_6393[iParam0] = bParam1;
		}
	}
}

int func_19(int iParam0)//Position - 0x1A5B
{
	if (unk_0xFA30DFD0084E92FE(Global_635B, iParam0))
	{
		return 1;
	}
	return 0;
}

void func_20(char* sParam0, int iParam1, int iParam2)//Position - 0x1A74
{
	iParam2 = iParam2;
	unk_0x3714DE83381EADC2(sParam0);
	unk_0x41D8F63F629E76BE(iParam1, 1);
}

void func_21(int iParam0, int iParam1, int iParam2)//Position - 0x1A8D
{
	if (func_23() && func_24())
	{
		while (Global_16B16 != 6)
		{
			SYSTEM::WAIT(0);
		}
		unk_0x121BBDEFA4F0C22B(0);
		if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				unk_0xF643D76BBEB27712(unk_0xBC25C936A095B5BA());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x724D816EA203A79E(iParam0))
				{
					if (unk_0xE59B7F5A03335350(iParam0, 0))
					{
						if (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iParam0, 0))
						{
							unk_0xBD53A029D0155A42(unk_0xBC25C936A095B5BA(), iParam0, iParam1);
							unk_0x2B9AEC08E469E384(0f, 1065353216);
							unk_0xF3F01A78937DC905(0f);
							SYSTEM::WAIT(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
			{
				unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
			}
		}
		unk_0x174DF5072163DD21();
		func_22(0);
	}
}

void func_22(int iParam0)//Position - 0x1B51
{
	if (iParam0 == 1)
	{
		unk_0xF0059F27F7BB6680(&(Global_16B1B.f_14), 13);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_16B1B.f_14), 13);
	}
}

int func_23()//Position - 0x1B7A
{
	if (Global_16B1B == 10 || Global_16B1B == 9)
	{
		return 1;
	}
	return 0;
}

bool func_24()//Position - 0x1B9E
{
	return unk_0xFA30DFD0084E92FE(Global_16B1B.f_14, 13);
}

void func_25(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x1BB2
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	int iVar4;
	var uVar5;
	int iVar6;
	
	if (iParam3 == 1)
	{
		if (!unk_0x3362CDE8460ED38B("FinaleC2", unk_0x1377080E9B0BD993()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_16B40)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_16B40)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_116(1);
		if (iParam0 <= Global_16B40)
		{
		}
		iVar1 = func_114(unk_0x1377080E9B0BD993(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_19B04.f_2360.f_14A[iVar1 /*6*/].f_1 = 0;
			iVar2 = func_112(iVar1);
			cVar3 = { Global_147B0[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_19B04.f_2360.f_63.f_CD[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			unk_0x1B7435D54924A668(&cVar3, iVar2, Global_16B40, iParam0);
		}
		else
		{
			iVar4 = func_107(unk_0x1377080E9B0BD993(), 1);
			if (iVar4 != -1)
			{
				Global_19B04.f_4871[iVar4 /*6*/].f_4 = 0;
				MemCopy(&uVar5, {func_106(iVar4)}, 4);
				unk_0x1B7435D54924A668(&uVar5, 0, Global_16B40, iParam0);
			}
			else
			{
				iVar6 = func_105(&(Global_16B1B.f_3));
				if (iVar6 > -1)
				{
					Global_19B04.f_617D.f_4[iVar6] = 0;
				}
			}
		}
		Global_154EE = iParam2;
		Global_16B40 = iParam0;
		func_26(iParam0, sParam1, iParam4, iParam5);
		if (unk_0x3362CDE8460ED38B(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_16B40)
	{
	}
}

void func_26(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x1D28
{
	func_27(&Global_181DF, unk_0x1377080E9B0BD993(), iParam0, uParam1, iParam3, iParam2);
}

void func_27(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x1D44
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_104();
	uParam0->f_1 = func_93();
	unk_0x6E1ECC86C790262C(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		func_67(&(uParam0->f_B35), 0);
		func_66(unk_0xBC25C936A095B5BA());
		func_59(unk_0xBC25C936A095B5BA(), 0);
		unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_11[iVar1] = Global_19B04.f_932.f_21B.f_126[iVar1];
		if (iVar1 == func_56())
		{
			func_49(unk_0xBC25C936A095B5BA(), &(uParam0->f_268[iVar1 /*65*/]), 1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_268[iVar1 /*65*/][iVar0] = Global_16A49[iVar1 /*65*/][iVar0];
				uParam0->f_268[iVar1 /*65*/].f_D[iVar0] = Global_16A49[iVar1 /*65*/].f_D[iVar0];
				iVar0++;
			}
			uParam0->f_268[iVar1 /*65*/].f_3B = Global_16A49[iVar1 /*65*/].f_3B;
			uParam0->f_268[iVar1 /*65*/].f_3C = Global_16A49[iVar1 /*65*/].f_3C;
			uParam0->f_268[iVar1 /*65*/].f_3D = Global_16A49[iVar1 /*65*/].f_3D;
			uParam0->f_268[iVar1 /*65*/].f_3E = Global_16A49[iVar1 /*65*/].f_3E;
			uParam0->f_268[iVar1 /*65*/].f_3F = Global_16A49[iVar1 /*65*/].f_3F;
			uParam0->f_268[iVar1 /*65*/].f_40 = Global_16A49[iVar1 /*65*/].f_40;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_268[iVar1 /*65*/].f_27[iVar0] = Global_16A49[iVar1 /*65*/].f_27[iVar0];
				uParam0->f_268[iVar1 /*65*/].f_31[iVar0] = Global_16A49[iVar1 /*65*/].f_31[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_32C[iVar1 /*472*/][iVar0 /*5*/] = { Global_19B04.f_932.f_21B.f_12A[iVar1 /*472*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			uParam0->f_32C[iVar1 /*472*/].f_DD[iVar0 /*5*/] = { Global_19B04.f_932.f_21B.f_12A[iVar1 /*472*/].f_DD[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				unk_0x6CB99B97664C3727(joaat("sp0_weap_purch_0"), &(uParam0->f_8B5[iVar1 /*32*/][0]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_purch_1"), &(uParam0->f_8B5[iVar1 /*32*/][1]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_8B5[iVar1 /*32*/].f_5[0]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_8B5[iVar1 /*32*/].f_5[1]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_8B5[iVar1 /*32*/].f_5[2]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_8B5[iVar1 /*32*/].f_5[3]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_8B5[iVar1 /*32*/].f_5[4]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[0]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[1]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[2]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[3]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[4]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[5]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[6]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[7]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[8]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[9]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[10]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[11]), -1);
				break;
			
			case 1:
				unk_0x6CB99B97664C3727(joaat("sp1_weap_purch_0"), &(uParam0->f_8B5[iVar1 /*32*/][0]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_purch_1"), &(uParam0->f_8B5[iVar1 /*32*/][1]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_8B5[iVar1 /*32*/].f_5[0]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_8B5[iVar1 /*32*/].f_5[1]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_8B5[iVar1 /*32*/].f_5[2]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_8B5[iVar1 /*32*/].f_5[3]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_8B5[iVar1 /*32*/].f_5[4]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[0]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[1]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[2]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[3]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[4]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[5]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[6]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[7]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[8]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[9]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[10]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[11]), -1);
				break;
			
			case 2:
				unk_0x6CB99B97664C3727(joaat("sp2_weap_purch_0"), &(uParam0->f_8B5[iVar1 /*32*/][0]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_purch_1"), &(uParam0->f_8B5[iVar1 /*32*/][1]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_8B5[iVar1 /*32*/].f_5[0]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_8B5[iVar1 /*32*/].f_5[1]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_8B5[iVar1 /*32*/].f_5[2]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_8B5[iVar1 /*32*/].f_5[3]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_8B5[iVar1 /*32*/].f_5[4]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[0]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[1]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[2]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[3]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[4]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[5]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[6]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[7]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[8]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[9]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[10]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_19B04.f_5037.f_E9[iVar1 /*69*/].f_1;
		uParam0->f_D[iVar1] = Global_CF95[iVar1];
		uParam0->f_19[0 /*295*/][iVar1 /*98*/] = { Global_19B04.f_932.f_21B.f_953[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_19[1 /*295*/][iVar1 /*98*/] = { Global_19B04.f_932.f_21B.f_953[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_B07[iVar1 /*15*/][iVar0] = Global_19B04.f_932.f_1ED[iVar1 /*15*/][iVar0];
			uParam0->f_B07[iVar1 /*15*/].f_5[iVar0] = Global_19B04.f_932.f_1ED[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_B07[iVar1 /*15*/].f_A[iVar0] = Global_19B04.f_932.f_1ED[iVar1 /*15*/].f_A[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_91A[iVar1 /*164*/][iVar0] = Global_19B04.f_932[iVar1 /*164*/][iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_4[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_8[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_C[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_C[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_10[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_10[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_14[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_14[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_18[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_18[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_1C[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_1C[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_20[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_24[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_28[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_2C[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_2C[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_30[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_30[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_34[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_34[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_38[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_38[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_3C[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_3C[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_40[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_44[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_48[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_4C[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_4C[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_50[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_50[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_54[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_54[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_58[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_58[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_5C[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_5C[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_60[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_64[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_68[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_6C[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_6C[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_70[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_70[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_74[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_74[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_78[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_78[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_7C[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_7C[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_80[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_84[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_88[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_8C[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_8C[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_90[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_90[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_94[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_94[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_98[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_98[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_9C[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_9C[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_A0[iVar0] = Global_19B04.f_932[iVar1 /*164*/].f_A0[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	unk_0x6CB99B97664C3727(joaat("sp0_special_ability"), &(uParam0->f_916[0]), -1);
	unk_0x6CB99B97664C3727(joaat("sp1_special_ability"), &(uParam0->f_916[1]), -1);
	unk_0x6CB99B97664C3727(joaat("sp2_special_ability"), &(uParam0->f_916[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_29(&(uParam0->f_B3B), uParam0, iParam5, 1, 1, 0);
	}
	func_28(&(uParam0->f_B95));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_28(var uParam0)//Position - 0x2BCC
{
	*uParam0 = Global_15B75;
	uParam0->f_1 = Global_15B76;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_29(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2BEE
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = unk_0xBC25C936A095B5BA();
	}
	if (unk_0x724D816EA203A79E(iParam2))
	{
		uParam1->f_5 = func_47(iParam2);
	}
	if (func_44(iParam2, &iVar0, iParam3, iParam5))
	{
		func_30(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0x724D816EA203A79E(iVar0))
	{
		if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
		{
			if (unk_0x5E87CB0495C97732(iVar0, joaat("skylift")) && unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iVar0, 0))
			{
				func_30(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_30(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x2C76
{
	if (unk_0xE59B7F5A03335350(iParam2, 0))
	{
		func_32(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_31(iParam2))
		{
			uParam1->f_3 = 1;
		}
		else
		{
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

int func_31(int iParam0)//Position - 0x2CB6
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_16B1B.f_16[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_32(var uParam0, int iParam1, int iParam2)//Position - 0x2CE4
{
	func_39(iParam1, &(uParam0->f_C));
	uParam0->f_7 = func_35(iParam1, 145, 0);
	uParam0->f_B = func_34(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_A)
		{
			uParam0->f_A = func_33(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { unk_0x541C2AEF053615BC(iParam1, true) };
		uParam0->f_6 = unk_0x349C94FFF43E2979(iParam1);
		uParam0->f_3 = { unk_0xB5D9AE572C19509E(iParam1) };
		if (unk_0x0C265B3C448E6954(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, true, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_11431 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_33(int iParam0)//Position - 0x2DC0
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x724D816EA203A79E(Global_110A8.f_1E4[iVar0]))
		{
			if (iParam0 == Global_110A8.f_1E4[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_34(int iParam0)//Position - 0x2E02
{
	int iVar0;
	
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 145;
	}
	if (!unk_0xE59B7F5A03335350(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x724D816EA203A79E(Global_1613F[iVar0]))
		{
			if (Global_1613F[iVar0] == iParam0)
			{
				return Global_16149[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_35(int iParam0, int iParam1, int iParam2)//Position - 0x2E65
{
	int iVar0;
	
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 0;
	}
	if (!unk_0xE59B7F5A03335350(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x724D816EA203A79E(Global_1613F[iVar0]))
		{
			if (Global_1613F[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_16149[iVar0])
				{
					if (iParam2 == 0 || unk_0x6F79ECA8C83E4357(iParam0) == func_36(iParam1, iParam2))
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

int func_36(int iParam0, int iParam1)//Position - 0x2EF3
{
	struct<82> Var0;
	
	if (func_38(iParam0))
	{
		Var0.f_B = 12;
		Var0.f_1F = 49;
		Var0.f_51 = 2;
		func_37(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_37(int iParam0, var uParam1, int iParam2)//Position - 0x2F35
{
	int iVar0;
	
	uParam1->f_58 = 1;
	uParam1->f_54 = 255;
	uParam1->f_55 = 255;
	uParam1->f_56 = 255;
	uParam1->f_61 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_19B04.f_2360.f_63.f_3A[128] && !Global_19B04.f_2360.f_63.f_3A[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_B[0] = 1;
					StringCopy(&(uParam1->f_1B), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_1B), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_1B), "BETTY 32", 16);
					if (Global_19B04.f_2360.f_63.f_3A[119])
					{
						uParam1->f_B[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_19B04.f_2360.f_63.f_3A[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_1B), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_A = 1;
					StringCopy(&(uParam1->f_1B), "FC1988", 16);
					uParam1->f_B[0] = 1;
					uParam1->f_B[1] = 1;
					uParam1->f_B[2] = 1;
					uParam1->f_B[3] = 1;
					uParam1->f_B[4] = 1;
					uParam1->f_B[5] = 1;
					uParam1->f_B[6] = 1;
					uParam1->f_B[7] = 1;
					uParam1->f_B[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

bool func_38(int iParam0)//Position - 0x3191
{
	return iParam0 < 3;
}

void func_39(int iParam0, var uParam1)//Position - 0x319D
{
	int iVar0;
	
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		func_43(uParam1);
		uParam1->f_42 = unk_0x6F79ECA8C83E4357(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x2232934AD664DD49(iParam0), 16);
		*uParam1 = unk_0x89FC8F09D6647DEC(iParam0);
		unk_0x87F182D2DA225F0D(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x375E42DA279E7FED(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x5F73107BDF663316(iParam0, &(uParam1->f_3E), &(uParam1->f_3F), &(uParam1->f_40));
		uParam1->f_41 = unk_0x2629793241883F74(iParam0);
		uParam1->f_43 = unk_0x0FF608FD384AF8FA(iParam0);
		uParam1->f_45 = unk_0xC2587DF549B15BB6(iParam0);
		uParam1->f_46 = unk_0xA3E58143095D5828(iParam0);
		unk_0x715BE0BE8D01B21C(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		unk_0x2774857472EBCE0F(iParam0, &(uParam1->f_4A), &(uParam1->f_4B), &(uParam1->f_4C));
		if (unk_0xFF7612EE8C5F1E19(iParam0, 2))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_4D), 28);
		}
		if (unk_0xFF7612EE8C5F1E19(iParam0, 3))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_4D), 29);
		}
		if (unk_0xFF7612EE8C5F1E19(iParam0, 0))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_4D), 30);
		}
		if (unk_0xFF7612EE8C5F1E19(iParam0, 1))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_4D), 31);
		}
		if (uParam1->f_41 == -1 && !func_42(uParam1->f_42))
		{
			uParam1->f_41 = 0;
		}
		if (unk_0x6DB86B1ADD81CED4(iParam0, 0))
		{
			uParam1->f_44 = unk_0xAA1A0B747CDFC807(iParam0);
		}
		if (unk_0xA19D269B4B5A1532(uParam1->f_42))
		{
			if (unk_0x9741AF87EDFF311C(iParam0))
			{
				switch (unk_0xBCD69B76B3E60BF5(iParam0))
				{
					case 3:
					case 0:
						unk_0x7CB6FD92BE491AD9(&(uParam1->f_4D), 23);
						unk_0xF0059F27F7BB6680(&(uParam1->f_4D), 22);
						break;
					
					case 4:
					case 1:
						unk_0x7CB6FD92BE491AD9(&(uParam1->f_4D), 23);
						unk_0x7CB6FD92BE491AD9(&(uParam1->f_4D), 22);
						break;
					
					case 5:
						unk_0xF0059F27F7BB6680(&(uParam1->f_4D), 23);
						break;
				}
			}
			else
			{
				unk_0xF0059F27F7BB6680(&(uParam1->f_4D), 23);
			}
		}
		if (!unk_0xB830044A99FABAAF(iParam0))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_4D), 9);
		}
		if (unk_0xA37E9F4E2795A88A(iParam0))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_4D), 10);
		}
		if (unk_0xFD22243DAFAFE349(iParam0))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_4D), 13);
			unk_0x103992E73728DA90(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		}
		if (unk_0x1EE004ED283345A0(iParam0))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_4D), 12);
		}
		func_41(&iParam0, &(uParam1->f_9), &(uParam1->f_3B));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xFC8A228C62614C5C(iParam0, iVar0 + 1))
			{
				unk_0xF0059F27F7BB6680(&(uParam1->f_4D), func_40(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x97413DC2A72A11B3(iParam0, 0))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_4D), 11);
		}
		else
		{
			unk_0x7CB6FD92BE491AD9(&(uParam1->f_4D), 11);
		}
		if (unk_0x3C03CFD5DD1E2D97(iParam0, "IgnoredByQuickSave") && unk_0x75236BEC3BDDE069(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_4D), 27);
		}
		else
		{
			unk_0x7CB6FD92BE491AD9(&(uParam1->f_4D), 27);
		}
	}
}

int func_40(int iParam0)//Position - 0x3448
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_41(int iParam0, var uParam1, var uParam2)//Position - 0x34F8
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xE59B7F5A03335350(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xA6BE0954FC6BAA16(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0x0ABA73B9B2E2F838(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x3EB14CBD49DA0017(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xC8B123E980199685(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xC8B123E980199685(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_42(int iParam0)//Position - 0x35D2
{
	switch (iParam0)
	{
		case joaat("granger"):
		case -998177792:
			return 1;
		
		default:
	}
	return 0;
}

void func_43(var uParam0)//Position - 0x35F2
{
	int iVar0;
	
	uParam0->f_42 = 0;
	uParam0->f_4D = 0;
	uParam0->f_41 = 0;
	uParam0->f_3E = 0;
	uParam0->f_3F = 0;
	uParam0->f_40 = 0;
	uParam0->f_4A = 0;
	uParam0->f_4B = 0;
	uParam0->f_4C = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_3B[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_43 = 0;
	uParam0->f_44 = 0;
	uParam0->f_45 = 0;
	uParam0->f_46 = 1;
	uParam0->f_47 = 0;
	uParam0->f_48 = 0;
	uParam0->f_49 = 0;
}

int func_44(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x36A3
{
	char* sVar0;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (!unk_0x36CEFBE9B745A58D(iParam0))
		{
			if (iParam0 == unk_0xBC25C936A095B5BA())
			{
				*uParam1 = unk_0x3E12B546F3F2597A();
			}
			else
			{
				*uParam1 = unk_0x9FE9D386222EEE47(iParam0, 1);
			}
			if (unk_0x724D816EA203A79E(*uParam1))
			{
				if (unk_0xE59B7F5A03335350(*uParam1, 0))
				{
					if (iParam2 == 0 || unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(*uParam1, true), unk_0x541C2AEF053615BC(iParam0, true), true) < 100f)
					{
						if (unk_0x5E87CB0495C97732(*uParam1, joaat("taxi")))
						{
							if (unk_0x3187EF5798B5D209(*uParam1, -1, 0) != iParam0 && unk_0x3187EF5798B5D209(*uParam1, -1, 0) != 0)
							{
								return 0;
							}
						}
						if (func_45(*uParam1, func_104(), 1))
						{
							sVar0 = unk_0x1377080E9B0BD993();
							if (!unk_0x3362CDE8460ED38B(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!unk_0x5237AF95232D78C5(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (unk_0x3C03CFD5DD1E2D97(*uParam1, "IgnoredByQuickSave"))
							{
								if (unk_0x75236BEC3BDDE069(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (unk_0x5E87CB0495C97732(*uParam1, joaat("blimp")))
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_45(int iParam0, int iParam1, bool bParam2)//Position - 0x37D2
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0x724D816EA203A79E(iParam0) || !unk_0xE59B7F5A03335350(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_46(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || unk_0xFA30DFD0084E92FE(Global_19B04.f_1C20[iVar2], 0))
		{
			if (unk_0x9945EE67AEC122F7(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_46(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x3843
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

int func_47(int iParam0)//Position - 0x391C
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_48(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_48(int iParam0)//Position - 0x3959
{
	if (func_38(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_49(int iParam0, var uParam1, int iParam2)//Position - 0x3983
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		iVar0 = func_47(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_55(iParam0, iVar1, &(uParam1->f_D[iVar1]), uParam1[iVar1], &(uParam1->f_1A[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_54(iParam0, iVar1, &(uParam1->f_27[iVar1]), &(uParam1->f_31[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_38(iVar0))
		{
			uParam1->f_3B = Global_19B04.f_932.f_21B[iVar0 /*65*/].f_3B;
			uParam1->f_3C = Global_19B04.f_932.f_21B[iVar0 /*65*/].f_3C;
			uParam1->f_3D = Global_19B04.f_932.f_21B[iVar0 /*65*/].f_3D;
			uParam1->f_3E = Global_19B04.f_932.f_21B[iVar0 /*65*/].f_3E;
			uParam1->f_3F = Global_19B04.f_932.f_21B[iVar0 /*65*/].f_3F;
			uParam1->f_40 = Global_19B04.f_932.f_21B[iVar0 /*65*/].f_40;
		}
		else if (unk_0x7AF0088ABFA713B6() && unk_0x6F79ECA8C83E4357(iParam0) == unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			if (func_53(161, -1))
			{
				uParam1->f_3B = func_50(2051, Global_11486, 0);
			}
			else
			{
				uParam1->f_3B = func_50(752, Global_11486, 0);
			}
			uParam1->f_3C = func_50(753, Global_11486, 0);
			uParam1->f_3D = func_50(754, Global_11486, 0);
		}
		if (unk_0x7AF0088ABFA713B6() && iParam0 == unk_0xBC25C936A095B5BA())
		{
			if (func_53(161, -1))
			{
				uParam1->f_3B = func_50(2051, Global_11486, 0);
			}
			else
			{
				uParam1->f_3B = func_50(752, Global_11486, 0);
			}
		}
	}
}

int func_50(int iParam0, int iParam1, int iParam2)//Position - 0x3B2D
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_51(iParam1)];
	if (unk_0x6CB99B97664C3727(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_51(var uParam0)//Position - 0x3B5F
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_52();
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

int func_52()//Position - 0x3B93
{
	return Global_1407E0;
}

int func_53(int iParam0, int iParam1)//Position - 0x3B9F
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2705A2[iParam0 /*3*/][func_51(iParam1)];
	if (unk_0x9CADE88F210A0BAE(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_54(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x3BCB
{
	int iVar0;
	
	iVar0 = func_47(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x35C830BCF2BF70BE(iParam0, iParam1);
		*uParam3 = unk_0x98F83843E924A56E(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (unk_0x4B4D220E2BCD09B8(iParam0) && unk_0xB2B29814741DDD85(iParam0) != -1)
				{
					*uParam2 = unk_0xB2B29814741DDD85(iParam0);
					*uParam3 = unk_0xC226620531B0B29B(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_55(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)//Position - 0x4114
{
	int iVar0;
	
	iVar0 = func_47(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0xA86A4D206EC8EB16(iParam0, iParam1);
		*uParam3 = unk_0x695D13ECF7DAEC22(iParam0, iParam1);
		*uParam4 = unk_0x41AF5D2DF638D88F(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

int func_56()//Position - 0x4355
{
	func_57();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_57()//Position - 0x436E
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_48(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_47(unk_0xBC25C936A095B5BA());
			if (func_38(iVar0) && (!func_58(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_38(Global_19B04.f_932.f_21B.f_10CD))
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

bool func_58(int iParam0)//Position - 0x446B
{
	return Global_8C41 == iParam0;
}

void func_59(int iParam0, bool bParam1)//Position - 0x4479
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_47(iParam0);
	if (func_38(iVar0) && !unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (iParam0 == unk_0xBC25C936A095B5BA())
		{
			func_60(iParam0, &(Global_19B04.f_932.f_21B.f_12A[iVar0 /*472*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_19B04.f_932.f_21B.f_6B3[iVar2 /*4*/][iVar0] = unk_0x45068B6398B7C15B(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0x2BCE278DDEEAB2EB();
					if (Global_19B04.f_932.f_21B.f_6B3[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_19B04.f_932.f_21B.f_6D4 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0x98ACC000724833AC(unk_0xB5CEFD608600A09F(), &iVar3);
			if (iVar0 == 0)
			{
				unk_0x3A57956BCE003880(joaat("sp0_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 1)
			{
				unk_0x3A57956BCE003880(joaat("sp1_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 2)
			{
				unk_0x3A57956BCE003880(joaat("sp2_parachute_current_tint"), iVar3, 1);
			}
		}
	}
}

void func_60(int iParam0, var uParam1)//Position - 0x456C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar5;
	int iVar6;
	struct<2> Var7;
	struct<4> Var8;
	int iVar9;
	int iVar10;
	
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*5*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_65(iVar0);
			if (iVar3 != 0)
			{
				Var4 = unk_0xFEBBB8B5E3A12A20(iParam0, func_65(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4 != 0 && Var4 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0x46C0645571D5BB21(iParam0, Var4);
					if (Var4 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = unk_0x5BA4FE244D010B3B(iParam0, Var4);
					Var4.f_4 = unk_0x8C4F3A254E8EA3BD(iParam0, Var4);
					if (Var4.f_1 == -1)
					{
						if (!unk_0xDBF94F25838DCE55(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_63(Var4, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0x1D3364A4FCD401E3(iParam0, Var4, iVar2))
						{
							unk_0xF0059F27F7BB6680(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_63(Var4, iVar1);
					}
				}
				*(uParam1[iVar0 /*5*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (50 - 1))
		{
			uParam1->f_DD[iVar0 /*5*/].f_1 = 0;
			iVar0++;
		}
		iVar6 = unk_0x8E3F7DC568AC987B();
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			if ((unk_0x6740839132C4BD08(iVar5, &Var7) && !func_62(Var7.f_1)) && iVar9 < 50)
			{
				if (!unk_0xD90F58A58682ED2F(Var7))
				{
					Var4 = Var7.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = unk_0x46C0645571D5BB21(iParam0, Var4);
					if (unk_0x7B2E29350659BE8E(iParam0, Var4, 0))
					{
						Var4.f_3 = unk_0x5BA4FE244D010B3B(iParam0, Var4);
						Var4.f_4 = unk_0x8C4F3A254E8EA3BD(iParam0, Var4);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0xDBF94F25838DCE55(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_DD[iVar9 /*5*/].f_1 = Var4.f_1;
					iVar10 = 0;
					iVar1 = 0;
					while (iVar1 < unk_0x24C19AF1AF00F6A0(iVar5))
					{
						if (unk_0x9278F82C9078D16B(iVar5, iVar1, &Var8))
						{
							if (!func_61(Var8.f_3))
							{
								if (unk_0x1D3364A4FCD401E3(iParam0, Var4, Var8.f_3))
								{
									unk_0xF0059F27F7BB6680(&(Var4.f_2), iVar10);
								}
								iVar10++;
							}
						}
						iVar1++;
					}
				}
				if (Var4 != 0)
				{
					if (!unk_0x7B2E29350659BE8E(iParam0, Var4, 0))
					{
						Var4 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_DD[iVar9 /*5*/] = { Var4 };
				iVar9++;
			}
			iVar5++;
		}
	}
}

int func_61(int iParam0)//Position - 0x47F6
{
	switch (iParam0)
	{
		case -1258515792:
		case 438243936:
		case -455079056:
		case 740920107:
		case -541616347:
		case 1809261196:
		case -1646538868:
		case -1290164948:
		case -964465134:
		case 1135718771:
		case 1253942266:
		case -403805974:
		case 691432737:
		case 987648331:
		case -431680535:
		case -847582310:
		case -92592218:
		case -494548326:
		case 730876697:
		case 583159708:
		case -1928503603:
		case 520557834:
			return 1;
			break;
	}
	return 0;
}

int func_62(int iParam0)//Position - 0x4891
{
	if (unk_0x7AF0088ABFA713B6())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return 0;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return 0;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return 0;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 0;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return 0;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return 0;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return 0;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return 0;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
				return 0;
				break;
			
			case -947031628:
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
			case joaat("weapon_flashlight"):
			case joaat("weapon_switchblade"):
			case joaat("weapon_revolver"):
			case joaat("weapon_dbshotgun"):
			case joaat("weapon_compactrifle"):
			case 317205821:
			case -1121678507:
			case 125959754:
			case -853065399:
			case -1169823560:
			case -1810795771:
			case 419712736:
			case -1746263880:
				return 1;
				break;
			}
	}
	return 0;
}

int func_63(int iParam0, int iParam1)//Position - 0x4A05
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<4> Var5;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 8:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 8:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 7:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 8:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 9:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		case -1121678507:
			switch (iParam1)
			{
				case 0:
					iVar0 = -2067221805;
					break;
				
				case 1:
					iVar0 = -1820405577;
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_64(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < unk_0x24C19AF1AF00F6A0(iVar1))
					{
						if (unk_0x9278F82C9078D16B(iVar1, iVar2, &Var5))
						{
							if (!func_61(Var5.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var5.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_64(int iParam0, var uParam1)//Position - 0x5576
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x8E3F7DC568AC987B();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x6740839132C4BD08(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_65(int iParam0)//Position - 0x55B1
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

void func_66(int iParam0)//Position - 0x5825
{
	int iVar0;
	
	iVar0 = func_47(iParam0);
	if (func_38(iVar0) && !unk_0x36CEFBE9B745A58D(iParam0))
	{
		Global_19B04.f_932.f_21B.f_126[iVar0] = unk_0x27C402B01C926499(iParam0);
	}
}

void func_67(var uParam0, int iParam1)//Position - 0x5861
{
	int iVar0;
	vector3 vVar1;
	var uVar2;
	int iVar3;
	
	*uParam0 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
	uParam0->f_3 = unk_0x349C94FFF43E2979(unk_0xBC25C936A095B5BA());
	uParam0->f_5 = unk_0xADC5538B9DCA2177(unk_0xBC25C936A095B5BA());
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		uParam0->f_4 = unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F());
	}
	if (SYSTEM::VDIST(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (SYSTEM::VDIST(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.472f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (unk_0xB731B8C5BCE89836(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (unk_0xFA30DFD0084E92FE(Global_1163A, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (unk_0xFA30DFD0084E92FE(Global_1163A, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (unk_0xFA30DFD0084E92FE(Global_1163A, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (unk_0xFA30DFD0084E92FE(Global_1163A, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA()) == unk_0x5E29F9399E0829A3(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, true, 0) || unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, true, 0))
	{
		*uParam0 = { -601.59f, 2099.197f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.376f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (SYSTEM::VDIST(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.932f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (SYSTEM::VDIST(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.93f, 2594.153f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 1)
	{
		if (func_71(&iVar0))
		{
			if (func_69(iVar0, &vVar1, &uVar2))
			{
				vVar1.z = (vVar1.z + 1f);
				*uParam0 = { vVar1 };
				uParam0->f_3 = uVar2;
			}
		}
		else if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, true, 0))
		{
			iVar3 = func_104();
			if (iVar3 == 0)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar3 == 1)
			{
				*uParam0 = { -68.5531f, -1824.377f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar3 == 2)
			{
				*uParam0 = { -220.8189f, -1162.302f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, true, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, true, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, true, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_68(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_68(vector3 vParam0, char* sParam1, vector3 vParam2)//Position - 0x5DBC
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xB47B61546691E6E3(vParam0))
	{
		iVar0 = unk_0x5E29F9399E0829A3(vParam2, sParam1);
		if (!unk_0xBF697FA7422C0621(iVar0))
		{
			return 0;
		}
		iVar1 = unk_0x77E1B0C83C9CC9DD(vParam0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_69(int iParam0, var uParam1, var uParam2)//Position - 0x5E00
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
		
		case 1:
			*uParam1 = { 129.8484f, -1716.528f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
		
		case 2:
			*uParam1 = { -1296.913f, -1120.999f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
		
		case 3:
			*uParam1 = { 1938.028f, 3718.736f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
		
		case 4:
			*uParam1 = { 1197.866f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
		
		case 5:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
		
		case 6:
			*uParam1 = { -287.7696f, 6238.081f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
		
		case 7:
			*uParam1 = { 99.2876f, -1395.16f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
		
		case 8:
			*uParam1 = { 1679.445f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
		
		case 9:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
		
		case 10:
			*uParam1 = { -1088.054f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
		
		case 11:
			*uParam1 = { 1194.163f, 2695.644f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
		
		case 12:
			*uParam1 = { -821.2829f, -1088.027f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
		
		case 13:
			*uParam1 = { -3.3416f, 6521.303f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
		
		case 14:
			*uParam1 = { -1208.417f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
		
		case 15:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
		
		case 16:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
		
		case 17:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
		
		case 18:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
		
		case 19:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
		
		case 20:
			*uParam1 = { -1461.355f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
		
		case 21:
			*uParam1 = { -1347.739f, -1278.573f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
		
		case 22:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
		
		case 23:
			*uParam1 = { 1858.774f, 3742.393f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
		
		case 24:
			*uParam1 = { -286.3272f, 6202.802f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
		
		case 25:
			*uParam1 = { -1161.596f, -1417.7f, 3.712f };
			*uParam2 = 246.9161f;
			break;
		
		case 26:
			*uParam1 = { 1308.952f, -1660.611f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
		
		case 27:
			*uParam1 = { -3161.585f, 1074.214f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
		
		case 28:
			*uParam1 = { 28.423f, -1110.814f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
		
		case 29:
			*uParam1 = { 1704.966f, 3749.709f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
		
		case 30:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
		
		case 31:
			*uParam1 = { 837.7854f, -1017.963f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
		
		case 32:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
		
		case 33:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
		
		case 34:
			*uParam1 = { -1323.06f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
		
		case 35:
			*uParam1 = { -1106.102f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
		
		case 36:
			*uParam1 = { -3157.932f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
		
		case 37:
			*uParam1 = { 2562.882f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
		
		case 38:
			*uParam1 = { 822.48f, -2142.875f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
		
		case 39:
			*uParam1 = { -1137.053f, -1993.916f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
		
		case 40:
			*uParam1 = { 717.8107f, -1084.081f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
		
		case 41:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
		
		case 42:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
		
		case 43:
			*uParam1 = { 1201.709f, 2664.813f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
		
		case 44:
			*uParam1 = { -200.1521f, -1297.502f, 30.296f };
			*uParam2 = 269.0687f;
			break;
		
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 48:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_70(*uParam1, 0f, 0f, 0f, 0);
}

bool func_70(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x64CB
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_71(var uParam0)//Position - 0x6512
{
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (func_92())
		{
			*uParam0 = func_77(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false), 6, -1, 0, 1, -1);
			if (func_76(*uParam0) && !func_72(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_72(int iParam0)//Position - 0x656D
{
	return func_73(iParam0, 0, 1);
}

int func_73(int iParam0, int iParam1, bool bParam2)//Position - 0x657D
{
	if (bParam2)
	{
		return unk_0xFA30DFD0084E92FE(Global_16B4F.f_531[iParam0], iParam1);
	}
	else if (unk_0x7AF0088ABFA713B6())
	{
		if (func_75() == 0)
		{
			return unk_0xFA30DFD0084E92FE(func_50(func_74(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xFA30DFD0084E92FE(Global_19B04.f_29C[iParam0], iParam1);
	}
	return 0;
}

int func_74(int iParam0)//Position - 0x65DD
{
	switch (iParam0)
	{
		case 0:
			return 827;
			break;
		
		case 1:
			return 828;
			break;
		
		case 2:
			return 829;
			break;
		
		case 3:
			return 830;
			break;
		
		case 4:
			return 831;
			break;
		
		case 5:
			return 832;
			break;
		
		case 6:
			return 833;
			break;
		
		case 7:
			return 834;
			break;
		
		case 8:
			return 835;
			break;
		
		case 9:
			return 836;
			break;
		
		case 10:
			return 837;
			break;
		
		case 11:
			return 838;
			break;
		
		case 12:
			return 839;
			break;
		
		case 13:
			return 840;
			break;
		
		case 14:
			return 841;
			break;
		
		case 15:
			return 843;
			break;
		
		case 16:
			return 844;
			break;
		
		case 17:
			return 845;
			break;
		
		case 18:
			return 846;
			break;
		
		case 19:
			return 847;
			break;
		
		case 20:
			return 848;
			break;
		
		case 21:
			return 849;
			break;
		
		case 22:
			return 850;
			break;
		
		case 23:
			return 851;
			break;
		
		case 24:
			return 852;
			break;
		
		case 25:
			return 853;
			break;
		
		case 26:
			return 854;
			break;
		
		case 27:
			return 855;
			break;
		
		case 28:
			return 856;
			break;
		
		case 29:
			return 857;
			break;
		
		case 30:
			return 858;
			break;
		
		case 31:
			return 859;
			break;
		
		case 32:
			return 860;
			break;
		
		case 33:
			return 861;
			break;
		
		case 34:
			return 862;
			break;
		
		case 35:
			return 863;
			break;
		
		case 36:
			return 864;
			break;
		
		case 37:
			return 865;
			break;
		
		case 38:
			return 866;
			break;
		
		case 39:
			return 867;
			break;
		
		case 40:
			return 871;
			break;
		
		case 41:
			return 872;
			break;
		
		case 42:
			return 873;
			break;
		
		case 43:
			return 874;
			break;
		
		case 44:
			return 7779;
			break;
		
		case 45:
			return 3804;
			break;
		
		case 46:
			return 5379;
			break;
		
		case 47:
			return 6151;
			break;
		
		case 48:
			return 7228;
			break;
		
		default:
			break;
	}
	return 8804;
}

int func_75()//Position - 0x68D1
{
	return Global_62BD;
}

int func_76(int iParam0)//Position - 0x68DC
{
	return func_73(iParam0, 5, 1);
}

int func_77(vector3 vParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)//Position - 0x68EC
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 48)
	{
		if (iParam1 == 6 || iParam1 == func_91(iVar0))
		{
			if (!bParam3 || func_90(iVar0))
			{
				fVar1 = unk_0xF0F2FC9DE291567F(vParam0, func_78(iVar0, 0), true);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam2) || iParam2 == -1)) && (iParam4 || iVar0 != 21)) && iVar0 != iParam5)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_78(int iParam0, bool bParam1)//Position - 0x698E
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
		
		case 45:
			return func_89(Global_1732A);
			break;
		
		case 46:
			if (Global_183F8F != func_88())
			{
				if (func_87(Global_183F8F))
				{
					return func_80(2, 2);
				}
				else if (func_79(Global_183F8F))
				{
					return func_80(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 47:
			return 510.1f, 4749.5f, -69f;
			break;
		
		case 48:
			return -1422.197f, -3015.803f, -79.1603f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_79(int iParam0)//Position - 0x6F48
{
	if (iParam0 != func_88())
	{
		if ((unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 0) || unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 1)) || unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_80(int iParam0, int iParam1)//Position - 0x6FA6
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar1 = { 1000000f, 1000000f, 1000000f };
	if (Global_183F8F != func_88())
	{
		if (iParam1 == 3)
		{
			if (func_81(iParam0, 1, &vVar0, 0, 0))
			{
				vVar1 = { vVar0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (unk_0xFA30DFD0084E92FE(Global_18402B[Global_183F8F /*770*/].f_111.f_F4, 4))
			{
				if (func_81(iParam0, 1, &vVar0, 0, 0))
				{
					vVar1 = { vVar0 };
				}
			}
			else if (unk_0xFA30DFD0084E92FE(Global_18402B[Global_183F8F /*770*/].f_111.f_F4, 5))
			{
				if (func_81(iParam0, 2, &vVar0, 0, 0))
				{
					vVar1 = { vVar0 };
				}
			}
		}
	}
	return vVar1;
}

int func_81(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)//Position - 0x7054
{
	struct<4> Var0;
	vector3 vVar1;
	struct<4> Var2;
	vector3 vVar3;
	
	if (!func_86(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_86(iParam1, &vVar1))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var2 = { func_84(iParam0) };
	}
	else
	{
		Var2 = { func_83(iParam0) };
	}
	vVar3 = { Var2 - Var0 };
	vVar3 = { func_82(vVar3, -Var0.f_3.f_2) };
	vVar3 = { func_82(vVar3, vVar1.f_3.f_2) };
	*uParam2 = { unk_0x89D97EB4FAE4A574(vVar1, 0f, vVar3) };
	uParam2->f_3 = { Var2.f_3 };
	return 1;
}

Vector3 func_82(vector3 vParam0, float fParam1)//Position - 0x70E9
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = SYSTEM::SIN(fParam1);
	fVar2 = SYSTEM::COS(fParam1);
	vVar0.x = ((vParam0.x * fVar2) - (vParam0.y * fVar1));
	vVar0.y = ((vParam0.x * fVar1) + (vParam0.y * fVar2));
	vVar0.z = vParam0.z;
	return vVar0;
}

struct<6> func_83(int iParam0)//Position - 0x712D
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 1:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 2:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 3:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 4:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 5:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 6:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 7:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 8:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
	}
	return Var0;
}

struct<6> func_84(int iParam0)//Position - 0x72B1
{
	return func_85(iParam0);
}

struct<6> func_85(int iParam0)//Position - 0x72BF
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1105.22f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			Var0 = { 1104.105f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 19:
			Var0 = { 1105.22f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 20:
			Var0 = { 1104.105f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 2:
			Var0 = { 1102f, -3011.925f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { 1103f, -3010f, -38.125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { 1103.213f, -3013.483f, -39.03f };
			Var0.f_3 = { 0f, 0f, 31.32f };
			break;
		
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101.408f, -3012.32f, -38.45339f };
			break;
		
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103.037f, -3012.318f, -39.99874f };
			break;
		
		case 7:
			Var0 = { 1105.645f, -3012.04f, -39.542f };
			Var0.f_3 = { 0f, 0f, -86.04f };
			break;
		
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104.063f, -3012.368f, -39.99875f };
			break;
		
		case 9:
			Var0 = { 1105.665f, -3012.334f, -38.50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 10:
			Var0 = { 1102.504f, -3012.35f, -39.341f };
			Var0.f_3 = { 0f, 0f, -96.48f };
			break;
		
		case 11:
			Var0 = { 1102.928f, -3012.693f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 12:
			Var0 = { 1102.942f, -3011.315f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 61:
			Var0 = { 1101.994f, -3012.878f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 62:
			Var0 = { 1103.152f, -3013.032f, -38.24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 13:
			Var0 = { 1102.465f, -3009.515f, -39.341f };
			Var0.f_3 = { 0f, 0f, -12.96f };
			break;
		
		case 14:
			Var0 = { 1102.917f, -3009.525f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 15:
			Var0 = { 1102.922f, -3010.887f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 63:
			Var0 = { 1101.682f, -3009.227f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { 1102.453f, -3008.51f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 16:
			Var0 = { 1104.684f, -3009.561f, -39.341f };
			Var0.f_3 = { 0f, 0f, 169.56f };
			break;
		
		case 17:
			Var0 = { 1104.34f, -3008.698f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 18:
			Var0 = { 1104.344f, -3009.618f, -37.98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 65:
			Var0 = { 1105.459f, -3009.793f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 66:
			Var0 = { 1104.783f, -3010.433f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 44:
			Var0 = { 1104.025f, -3007.316f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 21:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 22:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 23:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 24:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 25:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 26:
			Var0 = { 1102.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 27:
			Var0 = { 1102.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 28:
			Var0 = { 1105.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 29:
			Var0 = { 1105.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 30:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 31:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 32:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 33:
			Var0 = { 1102.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 34:
			Var0 = { 1102.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 35:
			Var0 = { 1105.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 36:
			Var0 = { 1105.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 37:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 38:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 39:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
		
		case 40:
			Var0 = { 1102.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 41:
			Var0 = { 1102.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 42:
			Var0 = { 1105.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 43:
			Var0 = { 1105.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 45:
			Var0 = { 1101f, -3011.9f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 46:
			Var0 = { 1102f, -3010f, -38.115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 47:
			Var0 = { 1105.174f, -3004.16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 48:
			Var0 = { 1105.175f, -3005.818f, -37.91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 49:
			Var0 = { 1106.6f, -3000.847f, -39.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 50:
			Var0 = { 1106.601f, -3002.171f, -37.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 51:
			Var0 = { 1101.95f, -3011.9f, -39.2f };
			Var0.f_3 = { 0f, 0f, 49.5f };
			break;
		
		case 52:
			Var0 = { 1101.95f, -3010f, -39.2f };
			Var0.f_3 = { 0f, 0f, 130.32f };
			break;
		
		case 53:
			Var0 = { 1105.16f, -3009.06f, -39.2f };
			Var0.f_3 = { 0f, 0f, -44.64f };
			break;
		
		case 54:
			Var0 = { 1102.476f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 55:
			Var0 = { 1099f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 56:
			Var0 = { 1103.593f, -3008.27f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 57:
			Var0 = { 1103.565f, -3014f, -39.988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 58:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 59:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 60:
			Var0 = { 1103.55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 67:
			Var0 = { 1103.55f, -3013.762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 68:
			Var0 = { 1103.55f, -3006.186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103.6f, -3013.933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_86(int iParam0, var uParam1)//Position - 0x7D86
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

int func_87(int iParam0)//Position - 0x7E08
{
	if (iParam0 != func_88())
	{
		if ((unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 3) || unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 4)) || unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 5))
		{
			return 1;
		}
	}
	return 0;
}

int func_88()//Position - 0x7E66
{
	return -1;
}

Vector3 func_89(int iParam0)//Position - 0x7E6F
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974.9542f, -3000.091f, -35f;
			break;
		
		case 6:
			return -1586.36f, -566.6f, 106.17f;
			break;
		
		case 7:
			return -1389.87f, -465.17f, 82.68f;
			break;
		
		case 8:
			return -145.81f, -590.2f, 171.13f;
			break;
		
		case 9:
			return -62.49f, -823.55f, 288.74f;
			break;
		
		case 4:
			return 1102.515f, -3158.888f, -38.5186f;
			break;
		
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
			break;
		
		case 10:
			return 1103.562f, -3000f, -40f;
			break;
		
		case 11:
			return 938.3077f, -3196.112f, -100f;
			break;
		
		case 12:
			return -1266.802f, -3014.836f, -49.4895f;
			break;
		
		case 13:
			return 520.0001f, 4750f, -70f;
			break;
		
		case 14:
			return 345.0041f, 4842.001f, -59.9997f;
			break;
		
		case 15:
			return -1604.664f, -3012.583f, -79.9999f;
			break;
		
		case 16:
			return -1421.015f, -3012.587f, -80f;
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_90(int iParam0)//Position - 0x8044
{
	return func_73(iParam0, 0, 0);
}

int func_91(int iParam0)//Position - 0x8054
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
	}
	return 6;
}

bool func_92()//Position - 0x82EE
{
	return Global_16B4F.f_141 > 0;
}

var func_93()//Position - 0x82FF
{
	var uVar0;
	
	func_103(&uVar0, unk_0xF40D00CD7B81C0A8());
	func_102(&uVar0, unk_0x7E09057438B9D216());
	func_101(&uVar0, unk_0x6E06C0DB9B43570D());
	func_96(&uVar0, unk_0xBE14F159908E4EE5());
	func_95(&uVar0, unk_0xDD6A91E47ED4D0CF());
	func_94(&uVar0, unk_0x4EEB3860BFC44B78());
	return uVar0;
}

void func_94(var uParam0, int iParam1)//Position - 0x8345
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_95(var uParam0, int iParam1)//Position - 0x83CB
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_96(var uParam0, int iParam1)//Position - 0x83FE
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_100(*uParam0);
	iVar1 = func_98(*uParam0);
	if (iParam1 < 1 || iParam1 > func_97(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_97(int iParam0, int iParam1)//Position - 0x844F
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_98(int iParam0)//Position - 0x84F1
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_99(unk_0xFA30DFD0084E92FE(iParam0, 31), -1, 1)) + 2011;
}

int func_99(bool bParam0, int iParam1, int iParam2)//Position - 0x8516
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_100(int iParam0)//Position - 0x852D
{
	return iParam0 & 15;
}

void func_101(var uParam0, int iParam1)//Position - 0x853A
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_102(var uParam0, int iParam1)//Position - 0x8574
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_103(var uParam0, int iParam1)//Position - 0x85AF
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_104()//Position - 0x85EB
{
	func_57();
	return Global_19B04.f_932.f_21B.f_10CD;
}

int func_105(char* sParam0)//Position - 0x8604
{
	if (unk_0x3362CDE8460ED38B("BailBond1", sParam0))
	{
		return 0;
	}
	else if (unk_0x3362CDE8460ED38B("BailBond2", sParam0))
	{
		return 1;
	}
	else if (unk_0x3362CDE8460ED38B("BailBond3", sParam0))
	{
		return 2;
	}
	else if (unk_0x3362CDE8460ED38B("BailBond4", sParam0))
	{
		return 3;
	}
	return -1;
}

struct<2> func_106(int iParam0)//Position - 0x865A
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_107(char* sParam0, int iParam1)//Position - 0x8AA7
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = unk_0x56BEECB328B6D29D(sParam0);
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < 63)
	{
		iVar0 = iVar3;
		func_108(iVar0, &sVar1);
		if (unk_0x56BEECB328B6D29D(sVar1) == iVar2)
		{
			return iVar0;
		}
		iVar3++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

void func_108(int iParam0, var uParam1)//Position - 0x8AF0
{
	switch (iParam0)
	{
		case 0:
			func_109(uParam1, "Abigail1", func_111(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 1:
			func_109(uParam1, "Abigail2", func_111(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 2:
			func_109(uParam1, "Barry1", func_111(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 3:
			func_109(uParam1, "Barry2", func_111(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_110(iParam0), 1, 1);
			break;
		
		case 4:
			func_109(uParam1, "Barry3", func_111(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 5:
			func_109(uParam1, "Barry3A", func_111(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 6:
			func_109(uParam1, "Barry3C", func_111(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 7:
			func_109(uParam1, "Barry4", func_111(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_110(iParam0), 0, 0);
			break;
		
		case 8:
			func_109(uParam1, "Dreyfuss1", func_111(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 9:
			func_109(uParam1, "Epsilon1", func_111(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 10:
			func_109(uParam1, "Epsilon2", func_111(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 11:
			func_109(uParam1, "Epsilon3", func_111(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 12:
			func_109(uParam1, "Epsilon4", func_111(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 13:
			func_109(uParam1, "Epsilon5", func_111(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 14:
			func_109(uParam1, "Epsilon6", func_111(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 15:
			func_109(uParam1, "Epsilon7", func_111(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 16:
			func_109(uParam1, "Epsilon8", func_111(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 17:
			func_109(uParam1, "Extreme1", func_111(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 18:
			func_109(uParam1, "Extreme2", func_111(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 19:
			func_109(uParam1, "Extreme3", func_111(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 20:
			func_109(uParam1, "Extreme4", func_111(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 21:
			func_109(uParam1, "Fanatic1", func_111(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_110(iParam0), 1, 0);
			break;
		
		case 22:
			func_109(uParam1, "Fanatic2", func_111(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_110(iParam0), 1, 0);
			break;
		
		case 23:
			func_109(uParam1, "Fanatic3", func_111(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_110(iParam0), 0, 1);
			break;
		
		case 24:
			func_109(uParam1, "Hao1", func_111(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_110(iParam0), 0, 1);
			break;
		
		case 25:
			func_109(uParam1, "Hunting1", func_111(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 26:
			func_109(uParam1, "Hunting2", func_111(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 27:
			func_109(uParam1, "Josh1", func_111(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 28:
			func_109(uParam1, "Josh2", func_111(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_110(iParam0), 1, 1);
			break;
		
		case 29:
			func_109(uParam1, "Josh3", func_111(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_110(iParam0), 1, 1);
			break;
		
		case 30:
			func_109(uParam1, "Josh4", func_111(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 31:
			func_109(uParam1, "Maude1", func_111(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 32:
			func_109(uParam1, "Minute1", func_111(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 33:
			func_109(uParam1, "Minute2", func_111(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 34:
			func_109(uParam1, "Minute3", func_111(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 35:
			func_109(uParam1, "MrsPhilips1", func_111(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 36:
			func_109(uParam1, "MrsPhilips2", func_111(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 37:
			func_109(uParam1, "Nigel1", func_111(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 38:
			func_109(uParam1, "Nigel1A", func_111(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_110(iParam0), 1, 1);
			break;
		
		case 39:
			func_109(uParam1, "Nigel1B", func_111(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_110(iParam0), 1, 1);
			break;
		
		case 40:
			func_109(uParam1, "Nigel1C", func_111(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_110(iParam0), 1, 1);
			break;
		
		case 41:
			func_109(uParam1, "Nigel1D", func_111(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_110(iParam0), 1, 1);
			break;
		
		case 42:
			func_109(uParam1, "Nigel2", func_111(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_110(iParam0), 1, 1);
			break;
		
		case 43:
			func_109(uParam1, "Nigel3", func_111(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_110(iParam0), 1, 1);
			break;
		
		case 44:
			func_109(uParam1, "Omega1", func_111(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 45:
			func_109(uParam1, "Omega2", func_111(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 46:
			func_109(uParam1, "Paparazzo1", func_111(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 47:
			func_109(uParam1, "Paparazzo2", func_111(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 48:
			func_109(uParam1, "Paparazzo3", func_111(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 49:
			func_109(uParam1, "Paparazzo3A", func_111(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 50:
			func_109(uParam1, "Paparazzo3B", func_111(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 51:
			func_109(uParam1, "Paparazzo4", func_111(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 52:
			func_109(uParam1, "Rampage1", func_111(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 54:
			func_109(uParam1, "Rampage3", func_111(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 55:
			func_109(uParam1, "Rampage4", func_111(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 56:
			func_109(uParam1, "Rampage5", func_111(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 53:
			func_109(uParam1, "Rampage2", func_111(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 57:
			func_109(uParam1, "TheLastOne", func_111(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 58:
			func_109(uParam1, "Tonya1", func_111(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 59:
			func_109(uParam1, "Tonya2", func_111(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 60:
			func_109(uParam1, "Tonya3", func_111(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 61:
			func_109(uParam1, "Tonya4", func_111(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 62:
			func_109(uParam1, "Tonya5", func_111(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_109(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0x9D37
{
	uParam0->f_4 = iParam4;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam3;
	uParam0->f_5 = iParam5;
	uParam0->f_6 = { vParam6 };
	uParam0->f_9 = iParam7;
	StringCopy(&(uParam0->f_A), sParam8, 16);
	uParam0->f_E = iParam9;
	uParam0->f_F = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 24);
	uParam0->f_16 = iParam12;
	uParam0->f_17 = iParam13;
	uParam0->f_18 = iParam14;
	uParam0->f_19 = iParam15;
	uParam0->f_1A = iParam16;
	uParam0->f_1B = iParam17;
	uParam0->f_1C = iParam18;
	uParam0->f_1D = uParam19;
	uParam0->f_1E = iParam20;
	uParam0->f_1F = iParam21;
}

int func_110(int iParam0)//Position - 0x9DC8
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_111(int iParam0)//Position - 0xA10E
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_106(iParam0) };
	if (unk_0xF1734B55490E9045(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

int func_112(int iParam0)//Position - 0xA146
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_113(Global_19B04.f_2360.f_63.f_CD[10]);
			break;
		
		case 74:
		case 75:
			return func_113(Global_19B04.f_2360.f_63.f_CD[8]);
			break;
		
		case 84:
		case 85:
			return func_113(Global_19B04.f_2360.f_63.f_CD[11]);
			break;
		
		case 90:
			return func_113(Global_19B04.f_2360.f_63.f_CD[7]);
			break;
		
		case 93:
			return func_113(Global_19B04.f_2360.f_63.f_CD[9]);
			break;
	}
	return 0;
}

int func_113(int iParam0)//Position - 0xA202
{
	switch (iParam0)
	{
		case 1:
		case 3:
		case 5:
		case 6:
		case 8:
			return 0;
			break;
		
		case 2:
		case 4:
		case 7:
		case 9:
			return 1;
			break;
	}
	return -1;
}

int func_114(char* sParam0, bool bParam1)//Position - 0xA256
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x56BEECB328B6D29D(sParam0);
	iVar1 = func_115(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_115(int iParam0, bool bParam1)//Position - 0xA280
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_147B0[iVar0 /*34*/].f_6 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	if (!bParam1)
	{
	}
	return -1;
}

void func_116(bool bParam0)//Position - 0xA2B6
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_19B04.f_5037.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_19B04.f_5037.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_19B04.f_5037.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_19B04.f_5037.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_19B04.f_5037.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_19B04.f_5037.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_CF9D[iVar0 /*3*/][0] = Global_19B04.f_5037[iVar0];
		Global_CF9D.f_1F[iVar0 /*3*/][0] = Global_19B04.f_5037.f_B[iVar0];
		Global_CF9D.f_3E[iVar0 /*3*/][0] = Global_19B04.f_5037.f_16[iVar0];
		Global_CF9D.f_5D[iVar0 /*3*/][0] = Global_19B04.f_5037.f_21[iVar0];
		Global_CF9D.f_7C[iVar0 /*3*/][0] = Global_19B04.f_5037.f_2C[iVar0];
		Global_CF9D.f_9B[iVar0 /*3*/][0] = Global_19B04.f_5037.f_37[iVar0];
		Global_CF9D.f_BA[iVar0 /*3*/][0] = Global_19B04.f_5037.f_42[iVar0];
		Global_CF9D.f_D9[iVar0 /*3*/][0] = Global_19B04.f_5037.f_4D[iVar0];
		Global_CF9D.f_F8[iVar0 /*3*/][0] = Global_19B04.f_5037.f_58[iVar0];
		if (!bParam0)
		{
			Global_CF9D[iVar0 /*3*/][1] = Global_19B04.f_5037[iVar0];
			Global_CF9D.f_1F[iVar0 /*3*/][1] = Global_19B04.f_5037.f_B[iVar0];
			Global_CF9D.f_3E[iVar0 /*3*/][1] = Global_19B04.f_5037.f_16[iVar0];
			Global_CF9D.f_5D[iVar0 /*3*/][1] = Global_19B04.f_5037.f_21[iVar0];
			Global_CF9D.f_7C[iVar0 /*3*/][1] = Global_19B04.f_5037.f_2C[iVar0];
			Global_CF9D.f_9B[iVar0 /*3*/][1] = Global_19B04.f_5037.f_37[iVar0];
			Global_CF9D.f_BA[iVar0 /*3*/][1] = Global_19B04.f_5037.f_42[iVar0];
			Global_CF9D.f_D9[iVar0 /*3*/][1] = Global_19B04.f_5037.f_4D[iVar0];
			Global_CF9D.f_F8[iVar0 /*3*/][1] = Global_19B04.f_5037.f_58[iVar0];
		}
		iVar0++;
	}
}

void func_117()//Position - 0xA538
{
	unk_0xB5975A608C626487("EXTRASUNNY");
	func_213();
	func_185();
	func_119();
	if (!func_24())
	{
		func_118();
	}
	iLocal_349 = 1;
	unk_0xF3F01A78937DC905(0f);
}

void func_118()//Position - 0xA567
{
	switch (iLocal_222)
	{
		case 2:
			unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
			unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), -1019.579f, -484.872f, 36.0795f, 1, false, 0, 1);
			unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), 93.7701f);
			break;
		
		case 3:
			if (unk_0xE59B7F5A03335350(iLocal_279, 0))
			{
				if (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_279, 0))
				{
					unk_0xBD53A029D0155A42(unk_0xBC25C936A095B5BA(), iLocal_279, -1);
				}
				unk_0x65E471E4A2D56226(iLocal_279, 3000, 0);
				unk_0x06D93FD5E4D394CF(iLocal_279, false, true, false, false, false, false, 0, false);
			}
			break;
		
		case 5:
			unk_0x49D46EE47C9CCB66(unk_0xBC25C936A095B5BA());
			unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), -935.4413f, -2928.061f, 12.9451f, 1, false, 0, 1);
			unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), 178.466f);
			unk_0xB71D41C0310C93DE(unk_0xBC25C936A095B5BA(), true, 1);
			break;
		
		case 8:
			unk_0x49D46EE47C9CCB66(unk_0xBC25C936A095B5BA());
			unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), -937.5466f, -2968.713f, 12.9451f, 1, false, 0, 1);
			unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), 111.5016f);
			unk_0xB71D41C0310C93DE(unk_0xBC25C936A095B5BA(), true, 1);
			break;
	}
}

void func_119()//Position - 0xA680
{
	switch (iLocal_222)
	{
		case 2:
			unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 0, 0);
			unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
			unk_0x6C5F5B5F6894CCE3(-1026.8f, -492.1f, 36f, 18f, 1, 0, 0, false);
			unk_0x379ACE23D404525C(-1042.5f, -500f, 41f, -1019.5f, -475f, 34f, false, 1);
			unk_0xDD56BACCCF835044(-1042.5f, -500f, 41f, -1019.5f, -475f, 34f, 0);
			unk_0xF243B7A14FCFD0F4(joaat("rapidgt"));
			unk_0xF243B7A14FCFD0F4(joaat("surano"));
			unk_0xF243B7A14FCFD0F4(joaat("carbonizzare"));
			while ((!unk_0xD6513D668481290A(joaat("rapidgt")) || !unk_0xD6513D668481290A(joaat("surano"))) || !unk_0xD6513D668481290A(joaat("carbonizzare")))
			{
				SYSTEM::WAIT(0);
			}
			if (!unk_0x724D816EA203A79E(iLocal_279))
			{
				unk_0x6C5F5B5F6894CCE3(vLocal_306, 5f, 1, 0, 0, false);
				iLocal_279 = unk_0x61C05BF08A1E0EFE(joaat("rapidgt"), vLocal_306, fLocal_319, true, true, false);
				unk_0x914C5DE0B15B8B59(iLocal_279, 112, 112);
				unk_0x65E471E4A2D56226(iLocal_279, 3000, 0);
				unk_0xDB35A2F9333ABEC5(iLocal_279, true);
				unk_0x2CA123B0622F495C(joaat("rapidgt"));
				unk_0x8510BC031C24B862(joaat("rapidgt"), true);
				unk_0x656194E145691D3E(iLocal_279, true);
				unk_0xA73D1278857991A2(iLocal_279, true);
			}
			if (!unk_0x724D816EA203A79E(iLocal_290))
			{
				if (unk_0xD6513D668481290A(joaat("surano")))
				{
					unk_0x6C5F5B5F6894CCE3(-1037.398f, -491.6539f, 35.5545f, 5f, 1, 0, 0, false);
					iLocal_290 = unk_0x61C05BF08A1E0EFE(joaat("surano"), -1037.398f, -491.6539f, 35.5545f, 208.889f, true, true, false);
					unk_0x914C5DE0B15B8B59(iLocal_290, 0, 0);
					unk_0x65E471E4A2D56226(iLocal_290, 3000, 0);
					unk_0xDB35A2F9333ABEC5(iLocal_290, true);
					unk_0x2CA123B0622F495C(joaat("surano"));
					unk_0x8510BC031C24B862(joaat("surano"), true);
					unk_0xA73D1278857991A2(iLocal_290, true);
				}
			}
			if (!unk_0x724D816EA203A79E(iLocal_291))
			{
				if (unk_0xD6513D668481290A(joaat("carbonizzare")))
				{
					unk_0x6C5F5B5F6894CCE3(vLocal_306, 5f, 1, 0, 0, false);
					iLocal_291 = unk_0x61C05BF08A1E0EFE(joaat("carbonizzare"), -1033.938f, -489.7475f, 35.8323f, 207.1758f, true, true, false);
					unk_0x914C5DE0B15B8B59(iLocal_291, 89, 89);
					unk_0x65E471E4A2D56226(iLocal_291, 3000, 0);
					unk_0xDB35A2F9333ABEC5(iLocal_291, true);
					unk_0x2CA123B0622F495C(joaat("carbonizzare"));
					unk_0x8510BC031C24B862(joaat("carbonizzare"), true);
					unk_0xA73D1278857991A2(iLocal_291, true);
				}
			}
			break;
		
		case 3:
			unk_0x6FED2D1AA2EBF334("TRV4_CHASE");
			unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 0, 0);
			unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
			func_182();
			unk_0x6C5F5B5F6894CCE3(vLocal_307, 200f, 1, 0, 0, false);
			if (!unk_0x724D816EA203A79E(iLocal_278))
			{
				iLocal_278 = unk_0x61C05BF08A1E0EFE(joaat("cogcabrio"), vLocal_307, fLocal_320, true, true, false);
				unk_0x06D93FD5E4D394CF(iLocal_278, true, true, true, true, true, false, 0, false);
				unk_0x914C5DE0B15B8B59(iLocal_278, 27, 27);
				unk_0x2CA123B0622F495C(joaat("cogcabrio"));
				unk_0x55662F9F262C2F9B(iLocal_278, "SOL_3_MOLLY_CAR_Group", 0);
			}
			if (!unk_0x724D816EA203A79E(iLocal_264))
			{
				iLocal_264 = unk_0xFD8987C090669BD5(iLocal_278, 26, joaat("ig_molly"), -1, 1, true);
				unk_0x06D93FD5E4D394CF(iLocal_264, true, true, true, true, true, false, 0, false);
				unk_0x1E5C2A1EAB944289(iLocal_264, true);
				unk_0xB105531EDD3DE51B(iLocal_264, false);
				unk_0x2CA123B0622F495C(joaat("ig_molly"));
				unk_0x4106FAF8AA1D69D5(iLocal_264, 1862763509);
			}
			if (func_23())
			{
				if (!unk_0x724D816EA203A79E(iLocal_279))
				{
					if (func_181())
					{
						if (!unk_0x8C1A6E7D5F410F4A(func_180()) && !unk_0xA19D269B4B5A1532(func_180()))
						{
							iLocal_279 = func_140(vLocal_316, fLocal_323);
							unk_0x2CA123B0622F495C(func_180());
							unk_0xA73D1278857991A2(iLocal_279, true);
						}
						else
						{
							iLocal_279 = unk_0x61C05BF08A1E0EFE(joaat("rapidgt"), vLocal_316, fLocal_323, true, true, false);
							unk_0x914C5DE0B15B8B59(iLocal_279, 112, 112);
						}
					}
					else
					{
						iLocal_279 = unk_0x61C05BF08A1E0EFE(joaat("rapidgt"), vLocal_316, fLocal_323, true, true, false);
						unk_0x914C5DE0B15B8B59(iLocal_279, 112, 112);
					}
					unk_0x65E471E4A2D56226(iLocal_279, 3000, 0);
					unk_0xDB35A2F9333ABEC5(iLocal_279, true);
					unk_0x06D93FD5E4D394CF(iLocal_279, false, true, false, false, false, false, 0, false);
					unk_0x656194E145691D3E(iLocal_279, true);
					unk_0x2CA123B0622F495C(joaat("rapidgt"));
					unk_0xA73D1278857991A2(iLocal_279, true);
				}
			}
			else if (!unk_0x724D816EA203A79E(iLocal_279))
			{
				iLocal_279 = unk_0x61C05BF08A1E0EFE(joaat("rapidgt"), vLocal_316, fLocal_323, true, true, false);
				unk_0x914C5DE0B15B8B59(iLocal_279, 112, 112);
				unk_0x2CA123B0622F495C(joaat("rapidgt"));
				unk_0x65E471E4A2D56226(iLocal_279, 3000, 0);
				unk_0xDB35A2F9333ABEC5(iLocal_279, true);
				unk_0x06D93FD5E4D394CF(iLocal_279, false, true, false, false, false, false, 0, false);
				unk_0x656194E145691D3E(iLocal_279, true);
				unk_0xA73D1278857991A2(iLocal_279, true);
			}
			break;
		
		case 5:
			iLocal_350 = 0;
			unk_0x6C5F5B5F6894CCE3(-973.3f, -2967.7f, 13.5f, 100f, 1, 0, 0, false);
			SYSTEM::SETTIMERA(0);
			unk_0xF243B7A14FCFD0F4(joaat("jet"));
			unk_0xF243B7A14FCFD0F4(joaat("shamal"));
			unk_0x44840FD68E426678("BB_MOLLY_2");
			unk_0xF243B7A14FCFD0F4(joaat("s_m_y_airworker"));
			unk_0xF243B7A14FCFD0F4(joaat("s_m_y_cop_01"));
			unk_0xF243B7A14FCFD0F4(joaat("police3"));
			unk_0xF243B7A14FCFD0F4(joaat("ig_molly"));
			unk_0xF243B7A14FCFD0F4(joaat("cogcabrio"));
			unk_0xF243B7A14FCFD0F4(joaat("rapidgt"));
			unk_0xF243B7A14FCFD0F4(joaat("prop_cs_film_reel_01"));
			unk_0x1B2A7C8188ADBE04(68, "BB_Chase");
			unk_0x1B2A7C8188ADBE04(69, "BB_Chase");
			unk_0x44840FD68E426678("Trev4_5");
			unk_0xA8396BF0E2C53C39();
			unk_0x522053D86D6E1C7A("move_f@film_reel_arms");
			unk_0x522053D86D6E1C7A("misssolomon_3");
			while (((((((((((((((!unk_0xD6513D668481290A(joaat("jet")) || !unk_0xD6513D668481290A(joaat("shamal"))) || !unk_0x1E8349F219AC5AF9("BB_MOLLY_2")) || !unk_0xD6513D668481290A(joaat("s_m_y_airworker"))) || !unk_0xD6513D668481290A(joaat("s_m_y_cop_01"))) || !unk_0xD6513D668481290A(joaat("police3"))) || !unk_0xD6513D668481290A(joaat("ig_molly"))) || !unk_0xD6513D668481290A(joaat("cogcabrio"))) || !unk_0xD6513D668481290A(joaat("rapidgt"))) || !unk_0xD6513D668481290A(joaat("prop_cs_film_reel_01"))) || !unk_0x00D24B3F2A5CD22C(68, "BB_Chase")) || !unk_0x00D24B3F2A5CD22C(69, "BB_Chase")) || !unk_0x1E8349F219AC5AF9("Trev4_5")) || !unk_0x95654D7A61CD43DE()) || !unk_0xF9E082857622D91E("move_f@film_reel_arms")) || !unk_0xF9E082857622D91E("misssolomon_3"))
			{
				SYSTEM::WAIT(0);
			}
			if (!unk_0x724D816EA203A79E(iLocal_264))
			{
				iLocal_264 = unk_0x01B3635C3E8EDD81(26, joaat("ig_molly"), -920.5093f, -2943.93f, 12.9451f, 157.6203f, 1, true);
				unk_0x1E5C2A1EAB944289(iLocal_264, true);
				unk_0xB105531EDD3DE51B(iLocal_264, false);
				unk_0x2E35C4FA5F0ED22F(iLocal_264, true);
				unk_0x2CA123B0622F495C(joaat("ig_molly"));
				unk_0xB71D41C0310C93DE(iLocal_264, true, 1);
				unk_0x4106FAF8AA1D69D5(iLocal_264, 1862763509);
			}
			iLocal_295 = unk_0xB6896943DA475493(joaat("prop_cs_film_reel_01"), -929f, -2917f, 13f, true, true, false);
			unk_0x5DBE04849460E608(iLocal_295, iLocal_264, unk_0xFA18E720A39243D0(iLocal_264, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			if (!unk_0x724D816EA203A79E(iLocal_284))
			{
				iLocal_284 = unk_0x61C05BF08A1E0EFE(joaat("jet"), -952.1345f, -2990.269f, 12.9451f, 240.7726f, true, true, false);
				unk_0x7170EF3CEB4D0224(iLocal_284, 2);
				unk_0x8300C56586249382(iLocal_284, 0);
				unk_0x346478B12F69D4E3(iLocal_284, true);
				unk_0x06D93FD5E4D394CF(iLocal_284, true, true, true, true, true, false, 0, false);
				unk_0x2CA123B0622F495C(joaat("jet"));
				unk_0xAF9FC4463EA3090B(iLocal_284, 500);
			}
			if (func_23())
			{
				if (func_181())
				{
					func_138();
					while (!func_125())
					{
						SYSTEM::WAIT(0);
					}
				}
				if (!unk_0x724D816EA203A79E(iLocal_279))
				{
					if (func_181())
					{
						iLocal_279 = func_140(-918.6263f, -2926.631f, 12.9666f, 43.1705f);
						unk_0x656194E145691D3E(iLocal_279, true);
						unk_0x2CA123B0622F495C(func_180());
						unk_0xA73D1278857991A2(iLocal_279, true);
					}
					else
					{
						iLocal_279 = unk_0x61C05BF08A1E0EFE(joaat("rapidgt"), -918.6263f, -2926.631f, 12.9666f, 43.1705f, true, true, false);
						unk_0x914C5DE0B15B8B59(iLocal_279, 112, 112);
						unk_0x656194E145691D3E(iLocal_279, true);
						unk_0x2CA123B0622F495C(joaat("rapidgt"));
						unk_0xA73D1278857991A2(iLocal_279, true);
					}
				}
			}
			else if (!unk_0x724D816EA203A79E(iLocal_279))
			{
				iLocal_279 = unk_0x61C05BF08A1E0EFE(joaat("rapidgt"), -918.6263f, -2926.631f, 12.9666f, 43.1705f, true, true, false);
				unk_0x914C5DE0B15B8B59(iLocal_279, 112, 112);
				unk_0x2CA123B0622F495C(joaat("rapidgt"));
				unk_0x656194E145691D3E(iLocal_279, true);
				unk_0xA73D1278857991A2(iLocal_279, true);
			}
			if (!unk_0x724D816EA203A79E(iLocal_278))
			{
				iLocal_278 = unk_0x61C05BF08A1E0EFE(joaat("cogcabrio"), -928.3279f, -2916.16f, 12.945f, 61.7688f, true, true, false);
				unk_0x914C5DE0B15B8B59(iLocal_278, 27, 27);
				unk_0x2CA123B0622F495C(joaat("cogcabrio"));
			}
			if (!unk_0x724D816EA203A79E(iLocal_281))
			{
				iLocal_281 = unk_0x61C05BF08A1E0EFE(joaat("police3"), -924.2796f, -2914.371f, 12.945f, 86.6188f, true, true, false);
			}
			if (!unk_0x724D816EA203A79E(iLocal_272))
			{
				iLocal_272 = unk_0x01B3635C3E8EDD81(6, joaat("s_m_y_cop_01"), -922.942f, -2912.509f, 12.945f, 156.2652f, 1, true);
				unk_0x7A535CE1F001F3FE(iLocal_272, joaat("weapon_pistol"), 1000, true, true);
				func_124(iLocal_272, 0);
				unk_0x2CA123B0622F495C(joaat("s_m_y_cop_01"));
			}
			SYSTEM::SETTIMERA(0);
			func_123(2, 1);
			iLocal_358 = 1;
			break;
		
		case 8:
			unk_0x6C5F5B5F6894CCE3(-973.3f, -2967.7f, 13.5f, 100f, 1, 0, 0, false);
			SYSTEM::SETTIMERA(0);
			iLocal_350 = 0;
			iLocal_358 = 0;
			iLocal_337 = 0;
			unk_0xF243B7A14FCFD0F4(joaat("jet"));
			unk_0xF243B7A14FCFD0F4(joaat("s_m_y_airworker"));
			unk_0xF243B7A14FCFD0F4(joaat("shamal"));
			unk_0xF243B7A14FCFD0F4(joaat("s_m_y_cop_01"));
			unk_0xF243B7A14FCFD0F4(joaat("police3"));
			unk_0xF243B7A14FCFD0F4(joaat("cogcabrio"));
			unk_0xF243B7A14FCFD0F4(joaat("rapidgt"));
			unk_0xF243B7A14FCFD0F4(joaat("prop_jet_bloodsplat_01"));
			unk_0x1B2A7C8188ADBE04(68, "BB_Chase");
			unk_0x1B2A7C8188ADBE04(69, "BB_Chase");
			unk_0xA8396BF0E2C53C39();
			while ((((((((((!unk_0xD6513D668481290A(joaat("jet")) || !unk_0xD6513D668481290A(joaat("s_m_y_airworker"))) || !unk_0xD6513D668481290A(joaat("shamal"))) || !unk_0xD6513D668481290A(joaat("s_m_y_cop_01"))) || !unk_0xD6513D668481290A(joaat("police3"))) || !unk_0xD6513D668481290A(joaat("cogcabrio"))) || !unk_0xD6513D668481290A(joaat("rapidgt"))) || !unk_0xD6513D668481290A(joaat("prop_jet_bloodsplat_01"))) || !unk_0x00D24B3F2A5CD22C(68, "BB_Chase")) || !unk_0x00D24B3F2A5CD22C(69, "BB_Chase")) || !unk_0x95654D7A61CD43DE())
			{
				SYSTEM::WAIT(0);
			}
			func_122();
			if (func_23())
			{
				if (func_181())
				{
					func_138();
					while (!func_125())
					{
						SYSTEM::WAIT(0);
					}
				}
				if (!unk_0x724D816EA203A79E(iLocal_279))
				{
					if (func_181())
					{
						iLocal_279 = func_140(-918.6263f, -2926.631f, 12.9666f, 43.1705f);
						unk_0x656194E145691D3E(iLocal_279, true);
						unk_0x2CA123B0622F495C(func_180());
						unk_0xA73D1278857991A2(iLocal_279, true);
					}
					else
					{
						iLocal_279 = unk_0x61C05BF08A1E0EFE(joaat("rapidgt"), -918.6263f, -2926.631f, 12.9666f, 43.1705f, true, true, false);
						unk_0x914C5DE0B15B8B59(iLocal_279, 112, 112);
						unk_0x656194E145691D3E(iLocal_279, true);
						unk_0x2CA123B0622F495C(joaat("rapidgt"));
						unk_0xA73D1278857991A2(iLocal_279, true);
					}
				}
			}
			else if (!unk_0x724D816EA203A79E(iLocal_279))
			{
				iLocal_279 = unk_0x61C05BF08A1E0EFE(joaat("rapidgt"), -918.6263f, -2926.631f, 12.9666f, 43.1705f, true, true, false);
				unk_0x914C5DE0B15B8B59(iLocal_279, 112, 112);
				unk_0x2CA123B0622F495C(joaat("rapidgt"));
				unk_0x656194E145691D3E(iLocal_279, true);
				unk_0xA73D1278857991A2(iLocal_279, true);
			}
			if (!unk_0x724D816EA203A79E(iLocal_278))
			{
				iLocal_278 = unk_0x61C05BF08A1E0EFE(joaat("cogcabrio"), -928.3279f, -2916.16f, 12.945f, 61.7688f, true, true, false);
				unk_0x914C5DE0B15B8B59(iLocal_278, 27, 27);
				unk_0x2CA123B0622F495C(joaat("cogcabrio"));
			}
			if (!unk_0x724D816EA203A79E(iLocal_281))
			{
				iLocal_281 = unk_0x61C05BF08A1E0EFE(joaat("police3"), -924.2796f, -2914.371f, 12.945f, 86.6188f, true, true, false);
			}
			if (!unk_0x724D816EA203A79E(iLocal_272))
			{
				iLocal_272 = unk_0x01B3635C3E8EDD81(6, joaat("s_m_y_cop_01"), -922.942f, -2912.509f, 12.945f, 156.2652f, 1, true);
				unk_0x7A535CE1F001F3FE(iLocal_272, joaat("weapon_pistol"), 1000, true, true);
				func_124(iLocal_272, 0);
				unk_0x2CA123B0622F495C(joaat("s_m_y_cop_01"));
			}
			if (!unk_0x724D816EA203A79E(iLocal_294))
			{
				iLocal_294 = unk_0xB6896943DA475493(joaat("prop_jet_bloodsplat_01"), -946.4231f, -2979.826f, 12.9264f, true, true, false);
				unk_0x784C605D172817C8(iLocal_294, 0f, 0f, -121.5948f, 2, 1);
				unk_0xC239B590ECA50DD0(iLocal_294, 0f, 0f, 0.8729f, -0.4879f);
				unk_0x2CA123B0622F495C(joaat("prop_jet_bloodsplat_01"));
			}
			if (!unk_0x724D816EA203A79E(iLocal_284))
			{
				iLocal_284 = unk_0x61C05BF08A1E0EFE(joaat("jet"), -952.1345f, -2990.269f, 12.9451f, 240.7726f, true, true, false);
				unk_0x7170EF3CEB4D0224(iLocal_284, 2);
				unk_0x8300C56586249382(iLocal_284, 0);
				unk_0x346478B12F69D4E3(iLocal_284, true);
				unk_0x06D93FD5E4D394CF(iLocal_284, true, true, true, true, true, false, 0, false);
				unk_0x2CA123B0622F495C(joaat("jet"));
				iLocal_672 = unk_0xD0F8470A5BFEECF7("scr_trev4_747_engine_damage", iLocal_284, -11.956f, 10.528f, -7.657f, 0f, 2f, 0f, 1065353216, 0, 0, 0);
				unk_0xAF9FC4463EA3090B(iLocal_284, 500);
			}
			if (!unk_0x724D816EA203A79E(iLocal_266))
			{
				iLocal_266 = unk_0x01B3635C3E8EDD81(26, joaat("s_m_y_airworker"), -933.8942f, -2965.785f, 12.9451f, 331.7339f, 1, true);
				func_17(&uLocal_490, 4, iLocal_266, "HangerWorker", 0, 1);
				unk_0x2CA123B0622F495C(joaat("s_m_y_airworker"));
				unk_0xB105531EDD3DE51B(iLocal_266, true);
				unk_0x2E35C4FA5F0ED22F(iLocal_266, true);
				unk_0x5558ED6D4A2DEC93(iLocal_266, unk_0xBC25C936A095B5BA(), 150f, -1, 0, 0);
				unk_0x22321800954A532E(iLocal_266, true);
				unk_0x06D93FD5E4D394CF(iLocal_266, false, false, false, false, false, false, 0, false);
				unk_0x02537C8C1BEEB477(&iLocal_266);
			}
			if (func_121(0) == 0 || func_121(0) == joaat("weapon_unarmed"))
			{
				func_120(1);
			}
			break;
	}
}

void func_120(bool bParam0)//Position - 0xB413
{
	int iVar0;
	
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		iVar0 = unk_0xB954E92A91E95906(unk_0xBC25C936A095B5BA(), 0);
		if (iVar0 != joaat("weapon_unarmed"))
		{
			unk_0x8E25082A46F87892(unk_0xBC25C936A095B5BA(), iVar0, bParam0);
		}
	}
}

int func_121(int iParam0)//Position - 0xB448
{
	if (Global_16B40 > 0)
	{
		return Global_181DF.f_15[iParam0];
	}
	return Global_17646.f_15[iParam0];
}

void func_122()//Position - 0xB472
{
	if (iLocal_337 == 0)
	{
		if (!unk_0x724D816EA203A79E(iLocal_286[0]))
		{
			iLocal_286[0] = unk_0x61C05BF08A1E0EFE(joaat("police3"), -994.5278f, -2903.285f, 12.9447f, 158.7951f, true, true, false);
			unk_0x2487C8A04B65E2BD(iLocal_286[0], 0);
		}
		if (!unk_0x724D816EA203A79E(iLocal_268[0]))
		{
			iLocal_268[0] = unk_0x01B3635C3E8EDD81(6, joaat("s_m_y_cop_01"), -969.06f, -2955.186f, 12.945f, 241.1703f, 1, true);
			unk_0x7A535CE1F001F3FE(iLocal_268[0], joaat("weapon_pistol"), 1000, true, true);
			unk_0xFC3C88E2313FA926(iLocal_268[0], 20);
			unk_0xB71D41C0310C93DE(iLocal_268[0], true, 1);
			unk_0x57D65255D3D3B6A7(iLocal_268[0], unk_0xBC25C936A095B5BA(), -1, 1);
			func_124(iLocal_268[0], 0);
		}
		if (!unk_0x724D816EA203A79E(iLocal_285))
		{
			iLocal_285 = unk_0x61C05BF08A1E0EFE(joaat("shamal"), -968.3718f, -2952.298f, 12.9451f, 114.9439f, true, true, false);
			unk_0xF0A40F19AAB79E88(iLocal_285, 1084227584);
			unk_0x2CA123B0622F495C(joaat("shamal"));
			unk_0x65E471E4A2D56226(iLocal_285, 2000, 0);
			unk_0x1C5BDB4E5D257D63(iLocal_285, 0, 0, 1);
		}
		if (!unk_0x724D816EA203A79E(iLocal_268[6]))
		{
			iLocal_268[6] = unk_0xFD8987C090669BD5(iLocal_286[0], 6, joaat("s_m_y_cop_01"), 0, 1, true);
			unk_0x7A535CE1F001F3FE(iLocal_268[6], joaat("weapon_pistol"), 1000, true, true);
			unk_0xFC3C88E2313FA926(iLocal_268[6], 20);
			unk_0xB71D41C0310C93DE(iLocal_268[6], true, 1);
			unk_0x2E35C4FA5F0ED22F(iLocal_268[6], true);
			func_124(iLocal_268[6], 0);
		}
		if (!unk_0x724D816EA203A79E(iLocal_268[7]))
		{
			iLocal_268[7] = unk_0xFD8987C090669BD5(iLocal_286[0], 6, joaat("s_m_y_cop_01"), -1, 1, true);
			unk_0x7A535CE1F001F3FE(iLocal_268[7], joaat("weapon_pistol"), 1000, true, true);
			unk_0xFC3C88E2313FA926(iLocal_268[7], 20);
			unk_0xB71D41C0310C93DE(iLocal_268[7], true, 1);
			unk_0x2E35C4FA5F0ED22F(iLocal_268[7], true);
			func_124(iLocal_268[7], 0);
		}
		if (!unk_0x724D816EA203A79E(iLocal_286[1]))
		{
			iLocal_286[1] = unk_0x61C05BF08A1E0EFE(joaat("police3"), -962.2432f, -2864.16f, 12.9447f, 149.5586f, true, true, false);
			unk_0x2487C8A04B65E2BD(iLocal_286[1], 0);
		}
		if (!unk_0x724D816EA203A79E(iLocal_268[8]))
		{
			iLocal_268[8] = unk_0xFD8987C090669BD5(iLocal_286[1], 6, joaat("s_m_y_cop_01"), 0, 1, true);
			unk_0x7A535CE1F001F3FE(iLocal_268[8], joaat("weapon_pistol"), 1000, true, true);
			unk_0xFC3C88E2313FA926(iLocal_268[8], 20);
			unk_0xB71D41C0310C93DE(iLocal_268[8], true, 1);
			unk_0x2E35C4FA5F0ED22F(iLocal_268[8], true);
			func_124(iLocal_268[8], 0);
		}
		if (!unk_0x724D816EA203A79E(iLocal_268[9]))
		{
			iLocal_268[9] = unk_0xFD8987C090669BD5(iLocal_286[1], 6, joaat("s_m_y_cop_01"), -1, 1, true);
			unk_0x7A535CE1F001F3FE(iLocal_268[9], joaat("weapon_pistol"), 1000, true, true);
			unk_0xFC3C88E2313FA926(iLocal_268[9], 20);
			unk_0xB71D41C0310C93DE(iLocal_268[9], true, 1);
			unk_0x2E35C4FA5F0ED22F(iLocal_268[9], true);
			func_124(iLocal_268[9], 0);
		}
		if (!unk_0x724D816EA203A79E(iLocal_268[10]))
		{
			iLocal_268[10] = unk_0x01B3635C3E8EDD81(6, joaat("s_m_y_cop_01"), -922.1185f, -2939.595f, 12.9451f, 156.1408f, 1, true);
			unk_0x7A535CE1F001F3FE(iLocal_268[10], joaat("weapon_pistol"), 1000, true, true);
			unk_0xFC3C88E2313FA926(iLocal_268[10], 20);
			unk_0xB71D41C0310C93DE(iLocal_268[10], true, 1);
			unk_0x2E35C4FA5F0ED22F(iLocal_268[10], true);
			func_124(iLocal_268[10], 0);
			unk_0x5845955B5CBDB595(iLocal_268[10], 1);
		}
		iLocal_337 = 1;
	}
}

void func_123(int iParam0, int iParam1)//Position - 0xB812
{
	unk_0xF0059F27F7BB6680(&Global_635B, iParam0);
	StringCopy(&(Global_635C[iParam0 /*6*/]), unk_0x1377080E9B0BD993(), 24);
	Global_6393[iParam0] = iParam1;
}

void func_124(int iParam0, bool bParam1)//Position - 0xB839
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 64)
		{
			if (Global_DABD[iVar0 /*2*/] != 0)
			{
				if (Global_DABD[iVar0 /*2*/] == iParam0)
				{
					return;
				}
			}
			iVar0++;
		}
	}
	if (64 == Global_DABC)
	{
		return;
	}
	iVar1 = -1;
	iVar2 = 0;
	while (iVar1 == -1 && iVar2 != 64)
	{
		if (Global_DABD[iVar2 /*2*/] == 0)
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (iVar1 == -1)
	{
		return;
	}
	Global_DABD[iVar1 /*2*/] = iParam0;
	Global_DABD[iVar1 /*2*/].f_1 = 7;
	Global_DABC++;
}

bool func_125()//Position - 0xB8D4
{
	return func_126(&(Global_181DF.f_B3B));
}

int func_126(var uParam0)//Position - 0xB8E7
{
	if (func_127(uParam0))
	{
		if (unk_0xD6513D668481290A(uParam0->f_C.f_42))
		{
			return 1;
		}
		else
		{
			return 0;
		}
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_127(var uParam0)//Position - 0xB91C
{
	if (uParam0->f_C.f_42 == 0)
	{
		return 0;
	}
	if (!func_129(uParam0->f_C.f_42, 0))
	{
		return 0;
	}
	if (uParam0->f_C.f_42 == joaat("stunt") && func_128(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

int func_128(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0xB97B
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

int func_129(int iParam0, bool bParam1)//Position - 0xB9F6
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x6067F058A4B0729F(iParam0))
	{
		return 0;
	}
	if ((((((iParam0 == joaat("dominator2") && !unk_0x7AF0088ABFA713B6()) || (iParam0 == joaat("buffalo3") && !unk_0x7AF0088ABFA713B6())) || (iParam0 == joaat("gauntlet2") && !unk_0x7AF0088ABFA713B6())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x7AF0088ABFA713B6())) || iParam0 == joaat("blista3"))
	{
		if (!func_137())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0xDF84CF7530FA6525())
		{
			if (unk_0x62A638D88F7B7D88(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0xD90F58A58682ED2F(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_136() && !func_135()) && !func_134()) && !func_133()) && !func_137())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xF49912B78E2591B6() || unk_0x8ACB0C3FACC09467()) || unk_0xF7E138CFA19B55E7())
		{
		}
		else if (!func_134())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_132(iParam0))
		{
			return 0;
		}
	}
	if (!func_130(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_130(int iParam0)//Position - 0xBB84
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_131())
	{
		return 1;
	}
	unk_0xC4F4FCDFF2D3ABE9(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0xD541643C038E7321(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_131()//Position - 0xBC50
{
	if (unk_0x8ACB0C3FACC09467())
	{
		return unk_0xC9D803F7D7E10861();
	}
	return 0;
}

int func_132(int iParam0)//Position - 0xBC67
{
	int iVar0;
	int iVar1;
	
	if (Global_262135)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0xB99C193A32DE341D();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_40001.f_1766 && !Global_40001.f_300B) && iVar1 < Global_40001.f_300C)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_40001.f_351D && iVar1 < Global_40001.f_3529)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_40001.f_3519 && iVar1 < Global_40001.f_3525)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_40001.f_351A && iVar1 < Global_40001.f_3526)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_40001.f_351B && iVar1 < Global_40001.f_3527)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_40001.f_351C && iVar1 < Global_40001.f_3528)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_40001.f_351E && iVar1 < Global_40001.f_352A)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_40001.f_351F && iVar1 < Global_40001.f_3522)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_40001.f_3520 && iVar1 < Global_40001.f_3523)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_40001.f_3521 && iVar1 < Global_40001.f_3524)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_40001.f_3F64 && iVar1 < Global_40001.f_3F41)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_40001.f_3F5F && iVar1 < Global_40001.f_3F3C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_40001.f_3F63 && iVar1 < Global_40001.f_3F40)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_40001.f_3F62 && iVar1 < Global_40001.f_3F3F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_40001.f_3F5C && iVar1 < Global_40001.f_3F39)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_40001.f_3F5D && iVar1 < Global_40001.f_3F3A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_40001.f_3F60 && iVar1 < Global_40001.f_3F3D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_40001.f_3F61 && iVar1 < Global_40001.f_3F3E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_40001.f_3F5E && iVar1 < Global_40001.f_3F3B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_40001.f_3F66 && iVar1 < Global_40001.f_3F43)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_40001.f_3F67 && iVar1 < Global_40001.f_3F44)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_40001.f_3F5B && iVar1 < Global_40001.f_3F38)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_40001.f_3F5A && iVar1 < Global_40001.f_3F37)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_40001.f_3F59 && iVar1 < Global_40001.f_3F36)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_40001.f_3F65 && iVar1 < Global_40001.f_3F42)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_40001.f_3F68 && iVar1 < Global_40001.f_3F45)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_40001.f_3F69 && iVar1 < Global_40001.f_3F46)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_40001.f_3F6A && iVar1 < Global_40001.f_3F47)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_40001.f_3F6B && iVar1 < Global_40001.f_3F48)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_40001.f_3FFC && iVar1 < Global_40001.f_4012)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_40001.f_3FFD && iVar1 < Global_40001.f_4013)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_40001.f_3FFE && iVar1 < Global_40001.f_4014)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_40001.f_3FFF && iVar1 < Global_40001.f_4015)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_40001.f_4000 && iVar1 < Global_40001.f_4016)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_40001.f_4001 && iVar1 < Global_40001.f_4017)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_40001.f_4003 && iVar1 < Global_40001.f_4018)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_40001.f_4004 && iVar1 < Global_40001.f_4019)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_40001.f_4005 && iVar1 < Global_40001.f_401A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_40001.f_4006 && iVar1 < Global_40001.f_401B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_40001.f_4007 && iVar1 < Global_40001.f_401C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_40001.f_4008 && iVar1 < Global_40001.f_401D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_40001.f_4009 && iVar1 < Global_40001.f_401E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_40001.f_400F && iVar1 < Global_40001.f_4025)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_40001.f_400C && iVar1 < Global_40001.f_4021)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_40001.f_400D && iVar1 < Global_40001.f_4022)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_40001.f_400E && iVar1 < Global_40001.f_4023)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_40001.f_4002 && iVar1 < Global_40001.f_4024)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_40001.f_4010 && iVar1 < Global_40001.f_4026)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_40001.f_400A && iVar1 < Global_40001.f_401F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_40001.f_400B && iVar1 < Global_40001.f_4020)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_40001.f_4011 && iVar1 < Global_40001.f_4027)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_40001.f_466D && iVar1 < Global_40001.f_46CF)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_40001.f_466E && iVar1 < Global_40001.f_46D0)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_40001.f_466F && iVar1 < Global_40001.f_46D1)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_40001.f_4670 && iVar1 < Global_40001.f_46D2)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_40001.f_4671 && iVar1 < Global_40001.f_46D3)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_40001.f_4672 && iVar1 < Global_40001.f_46D4)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_40001.f_4673 && iVar1 < Global_40001.f_46D5)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_40001.f_4674 && iVar1 < Global_40001.f_46D6)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_40001.f_4675 && iVar1 < Global_40001.f_46D7)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_40001.f_4676 && iVar1 < Global_40001.f_46D8)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_40001.f_4677 && iVar1 < Global_40001.f_46D9)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_40001.f_4678 && iVar1 < Global_40001.f_46DA)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_40001.f_4679 && iVar1 < Global_40001.f_46DB)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_40001.f_467A && iVar1 < Global_40001.f_46DC)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_40001.f_467B && iVar1 < Global_40001.f_46DD)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_40001.f_467C && iVar1 < Global_40001.f_46DE)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_40001.f_467D && iVar1 < Global_40001.f_46DF)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_40001.f_467E && iVar1 < Global_40001.f_46E0)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_40001.f_467F && iVar1 < Global_40001.f_46E1)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_40001.f_4680 && iVar1 < Global_40001.f_46E2)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_40001.f_4681 && iVar1 < Global_40001.f_46E3)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_40001.f_4682 && iVar1 < Global_40001.f_46E4)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_40001.f_4683 && iVar1 < Global_40001.f_46E5)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_40001.f_4684 && iVar1 < Global_40001.f_46E6)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_40001.f_4685 && iVar1 < Global_40001.f_46E7)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1234311532)
	{
		if (!Global_40001.f_4AA6 && iVar1 < Global_40001.f_4AA2)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1405937764)
	{
		if (!Global_40001.f_4AA7 && iVar1 < Global_40001.f_4AA3)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 719660200)
	{
		if (!Global_40001.f_4AA8 && iVar1 < Global_40001.f_4AA4)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -982130927)
	{
		if (!Global_40001.f_4AA9 && iVar1 < Global_40001.f_4AA5)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 917809321)
	{
		if (!Global_40001.f_4E15 && iVar1 < Global_40001.f_4E1D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 223240013)
	{
		if (!Global_40001.f_4E16 && iVar1 < Global_40001.f_4E1E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1504306544)
	{
		if (!Global_40001.f_4E17 && iVar1 < Global_40001.f_4E1F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1939284556)
	{
		if (!Global_40001.f_4E18 && iVar1 < Global_40001.f_4E20)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 159274291)
	{
		if (!Global_40001.f_4E19 && iVar1 < Global_40001.f_4E21)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 433954513)
	{
		if (!Global_40001.f_4E1A && iVar1 < Global_40001.f_4E22)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1763555241)
	{
		if (!Global_40001.f_511E && iVar1 < Global_40001.f_5132)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -749299473)
	{
		if (!Global_40001.f_512A && iVar1 < Global_40001.f_513E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -975345305)
	{
		if (!Global_40001.f_5121 && iVar1 < Global_40001.f_5135)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1700874274)
	{
		if (!Global_40001.f_512B && iVar1 < Global_40001.f_513F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -392675425)
	{
		if (!Global_40001.f_511F && iVar1 < Global_40001.f_5133)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1043222410)
	{
		if (!Global_40001.f_512F && iVar1 < Global_40001.f_5143)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1386191424)
	{
		if (!Global_40001.f_512D && iVar1 < Global_40001.f_5141)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1565978651)
	{
		if (!Global_40001.f_512E && iVar1 < Global_40001.f_5142)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1036591958)
	{
		if (!Global_40001.f_5129 && iVar1 < Global_40001.f_513D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -32878452)
	{
		if (!Global_40001.f_5130 && iVar1 < Global_40001.f_5144)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -42959138)
	{
		if (!Global_40001.f_512C && iVar1 < Global_40001.f_5140)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1984275979)
	{
		if (!Global_40001.f_5128 && iVar1 < Global_40001.f_513C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1007528109)
	{
		if (!Global_40001.f_5120 && iVar1 < Global_40001.f_5134)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1523619738)
	{
		if (!Global_40001.f_5122 && iVar1 < Global_40001.f_5136)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1392481335)
	{
		if (!Global_40001.f_5123 && iVar1 < Global_40001.f_5137)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -998177792)
	{
		if (!Global_40001.f_5124 && iVar1 < Global_40001.f_5138)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1242608589)
	{
		if (!Global_40001.f_5125 && iVar1 < Global_40001.f_5139)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1841130506)
	{
		if (!Global_40001.f_5126 && iVar1 < Global_40001.f_513A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2049897956)
	{
		if (!Global_40001.f_5127 && iVar1 < Global_40001.f_513B)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1483171323)
	{
		if (!Global_40001.f_54DF && iVar1 < Global_40001.f_54FB)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 886810209)
	{
		if (!Global_40001.f_54E0 && iVar1 < Global_40001.f_54FC)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1693015116)
	{
		if (!Global_40001.f_54E1 && iVar1 < Global_40001.f_54FD)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -692292317)
	{
		if (!Global_40001.f_54E2 && iVar1 < Global_40001.f_54FE)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1435527158)
	{
		if (!Global_40001.f_54E3 && iVar1 < Global_40001.f_54FF)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1181327175)
	{
		if (!Global_40001.f_54E4 && iVar1 < Global_40001.f_5500)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1489874736)
	{
		if (!Global_40001.f_54E5 && iVar1 < Global_40001.f_5501)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -212993243)
	{
		if (!Global_40001.f_54E6 && iVar1 < Global_40001.f_5502)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 447548909)
	{
		if (!Global_40001.f_54E7 && iVar1 < Global_40001.f_5503)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1561920505)
	{
		if (!Global_40001.f_54E8 && iVar1 < Global_40001.f_5504)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1848994066)
	{
		if (!Global_40001.f_54E9 && iVar1 < Global_40001.f_5505)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1741861769)
	{
		if (!Global_40001.f_54EA && iVar1 < Global_40001.f_5506)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1104234922)
	{
		if (!Global_40001.f_54EB && iVar1 < Global_40001.f_5507)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1871995513)
	{
		if (!Global_40001.f_54EC && iVar1 < Global_40001.f_5508)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1352136073)
	{
		if (!Global_40001.f_54ED && iVar1 < Global_40001.f_5509)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -313185164)
	{
		if (!Global_40001.f_54EE && iVar1 < Global_40001.f_550A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2079788230)
	{
		if (!Global_40001.f_54EF && iVar1 < Global_40001.f_550B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 600450546)
	{
		if (!Global_40001.f_54F0 && iVar1 < Global_40001.f_550C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -410205223)
	{
		if (!Global_40001.f_54F1 && iVar1 < Global_40001.f_550D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 867799010)
	{
		if (!Global_40001.f_54F2 && iVar1 < Global_40001.f_550E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1529242755)
	{
		if (!Global_40001.f_54F3 && iVar1 < Global_40001.f_550F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 903794909)
	{
		if (!Global_40001.f_54F4 && iVar1 < Global_40001.f_5510)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1532697517)
	{
		if (!Global_40001.f_54F5 && iVar1 < Global_40001.f_5511)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 15219735)
	{
		if (!Global_40001.f_54F6 && iVar1 < Global_40001.f_5512)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 661493923)
	{
		if (!Global_40001.f_54F7 && iVar1 < Global_40001.f_5513)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 838982985)
	{
		if (!Global_40001.f_54F8 && iVar1 < Global_40001.f_5514)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -391595372)
	{
		if (!Global_40001.f_54F9 && iVar1 < Global_40001.f_5515)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -121446169)
	{
		if (!Global_40001.f_54FA && iVar1 < Global_40001.f_5516)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1909189272)
	{
		if (!Global_40001.f_597B && iVar1 < Global_40001.f_598B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1617472902)
	{
		if (!Global_40001.f_597C && iVar1 < Global_40001.f_598C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1267543371)
	{
		if (!Global_40001.f_5980 && iVar1 < Global_40001.f_5990)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 931280609)
	{
		if (!Global_40001.f_5983 && iVar1 < Global_40001.f_5993)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1046206681)
	{
		if (!Global_40001.f_5988 && iVar1 < Global_40001.f_5998)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1259134696)
	{
		if (!Global_40001.f_5982 && iVar1 < Global_40001.f_5992)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1115909093)
	{
		if (!Global_40001.f_597A && iVar1 < Global_40001.f_598A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1031562256)
	{
		if (!Global_40001.f_5981 && iVar1 < Global_40001.f_5991)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -376434238)
	{
		if (!Global_40001.f_5987 && iVar1 < Global_40001.f_5997)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -986944621)
	{
		if (!Global_40001.f_5986 && iVar1 < Global_40001.f_5996)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1134706562)
	{
		if (!Global_40001.f_597D && iVar1 < Global_40001.f_598D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2120700196)
	{
		if (!Global_40001.f_597F && iVar1 < Global_40001.f_598F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -214906006)
	{
		if (!Global_40001.f_5989 && iVar1 < Global_40001.f_5999)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -988501280)
	{
		if (!Global_40001.f_5985 && iVar1 < Global_40001.f_5995)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1254014755)
	{
		if (!Global_40001.f_597E && iVar1 < Global_40001.f_598E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -726768679)
	{
		if (!Global_40001.f_5984 && iVar1 < Global_40001.f_5994)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1988428699)
	{
		if (!Global_40001.f_59D5 && iVar1 < Global_40001.f_59C8)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 345756458)
	{
		if (!Global_40001.f_59D6 && iVar1 < Global_40001.f_59C9)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1945374990)
	{
		if (!Global_40001.f_59DB && iVar1 < Global_40001.f_59CE)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1653666139)
	{
		if (!Global_40001.f_59DA && iVar1 < Global_40001.f_59CD)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 500482303)
	{
		if (!Global_40001.f_59D8 && iVar1 < Global_40001.f_59CB)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2044532910)
	{
		if (!Global_40001.f_59DE && iVar1 < Global_40001.f_59D1)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -638562243)
	{
		if (!Global_40001.f_59E0 && iVar1 < Global_40001.f_59D3)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1692272545)
	{
		if (!Global_40001.f_59E1 && iVar1 < Global_40001.f_59D4)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2069146067)
	{
		if (!Global_40001.f_59DF && iVar1 < Global_40001.f_59D2)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -420911112)
	{
		if (!Global_40001.f_59D7 && iVar1 < Global_40001.f_59CA)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 321186144)
	{
		if (!Global_40001.f_59D9 && iVar1 < Global_40001.f_59CC)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -54332285)
	{
		if (!Global_40001.f_59DD && iVar1 < Global_40001.f_59D0)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -307958377)
	{
		if (!Global_40001.f_59DC && iVar1 < Global_40001.f_59CF)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_133()//Position - 0xD70F
{
	return 0;
}

int func_134()//Position - 0xD718
{
	return 1;
}

int func_135()//Position - 0xD721
{
	return 1;
}

int func_136()//Position - 0xD72A
{
	if (unk_0x7B2F21BFE86AEB61(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_137()//Position - 0xD743
{
	int iVar0;
	
	if (unk_0x7E3A4CFA5545546C())
	{
		if (unk_0x6EFCE916927099A8())
		{
			if (unk_0x0D618527B2B8660A())
			{
				unk_0x6CB99B97664C3727(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				unk_0xF0059F27F7BB6680(&iVar0, 2);
				unk_0xF0059F27F7BB6680(&iVar0, 4);
				unk_0xF0059F27F7BB6680(&iVar0, 6);
				unk_0xF0059F27F7BB6680(&Global_19, 2);
				unk_0xF0059F27F7BB6680(&Global_19, 4);
				unk_0xF0059F27F7BB6680(&Global_19, 6);
				unk_0x3A57956BCE003880(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (unk_0x7A4B76D06AAF8132())
				{
					iVar0 = unk_0x2DC92D46FC48E795(866);
					unk_0xF0059F27F7BB6680(&iVar0, 0);
					unk_0x973C4C95367920C1(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_231F0 == 2)
	{
		return 1;
	}
	else if (Global_231F0 == 3)
	{
		return 0;
	}
	if (unk_0x7A4B76D06AAF8132())
	{
		if (unk_0xFA30DFD0084E92FE(unk_0x2DC92D46FC48E795(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_138()//Position - 0xD7FE
{
	func_139(&(Global_181DF.f_B3B));
}

void func_139(var uParam0)//Position - 0xD811
{
	if (func_127(uParam0))
	{
		unk_0xF243B7A14FCFD0F4(uParam0->f_C.f_42);
	}
}

int func_140(vector3 vParam0, float fParam1)//Position - 0xD82F
{
	return func_141(&(Global_181DF.f_B3B), vParam0, fParam1, 0);
}

int func_141(var uParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0xD849
{
	int iVar0;
	vector3 vVar1;
	bool bVar2;
	var uVar3;
	int iVar4;
	
	if (func_127(uParam0))
	{
		if (func_70(vParam1, 0f, 0f, 0f, 0))
		{
			vParam1 = { *uParam0 };
			fParam2 = uParam0->f_6;
		}
		if (uParam0->f_C.f_42 == joaat("monster") || uParam0->f_C.f_42 == joaat("marshall"))
		{
			if (unk_0x7352105EC4D7541F(vParam1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, 0, true))
			{
				vParam1 = { -850.93f, 158.82f, 65.7f };
				fParam2 = 89.5f;
			}
		}
		if (func_126(uParam0))
		{
			unk_0x6C5F5B5F6894CCE3(vParam1, 5f, 1, 0, 0, false);
			func_179(vParam1, 5f, 0);
			iVar0 = unk_0x61C05BF08A1E0EFE(uParam0->f_C.f_42, vParam1, fParam2, true, true, false);
			if (unk_0x724D816EA203A79E(iVar0))
			{
				vVar1 = { unk_0x541C2AEF053615BC(iVar0, true) };
				if (SYSTEM::VDIST2(vVar1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					unk_0xD5874E4A4BF782FC(iVar0, vParam1, 0, 0, 1);
				}
				func_162(iVar0, &(uParam0->f_C), 0, 1);
				bVar2 = true;
				if (unk_0xE7B3A320107C1379(uParam0->f_C.f_42) || unk_0x7974165A9BC75283(uParam0->f_C.f_42))
				{
					if (!unk_0xD841AD3F7B98FC00(vParam1.x, vParam1.y, (vParam1.z + 30f), vParam1.x, vParam1.y, (vParam1.z - 30f), &uVar3))
					{
						bVar2 = false;
					}
				}
				if (bVar2)
				{
					unk_0xF0A40F19AAB79E88(iVar0, 1084227584);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam3)
					{
						if (unk_0x7C28D15641461C68(unk_0x6F79ECA8C83E4357(iVar0)))
						{
							func_161(uParam0->f_B, 1);
						}
						else if (unk_0x7512ED01F3F46714(unk_0x6F79ECA8C83E4357(iVar0)))
						{
							func_161(uParam0->f_B, 2);
						}
					}
					unk_0x551DF575AE9A2969(iVar0, 0);
					unk_0x2487C8A04B65E2BD(iVar0, 0);
					unk_0xA73D1278857991A2(iVar0, true);
					func_160(iVar0, uParam0->f_B);
				}
				else if ((!func_158(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_A) && unk_0x3362CDE8460ED38B(unk_0x1377080E9B0BD993(), "startup_positioning"))
				{
					iVar4 = func_157(iVar0);
					if (iVar4 == -1)
					{
						uParam0->f_A = 0;
					}
					else
					{
						func_152(iVar4);
					}
				}
				if (((Global_16B1B != 13 && Global_16B1B != 10) && Global_16B1B != 11) && Global_16B1B != 12)
				{
					if (unk_0x56BEECB328B6D29D(&(Global_16B1B.f_3)) == Global_11484)
					{
						if (uParam0->f_C.f_42 == Global_19B04.f_7F22.f_45[21 /*78*/].f_42)
						{
							func_149(24, 0);
							func_152(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_142(iVar0, uParam0->f_B);
				}
				unk_0x2CA123B0622F495C(uParam0->f_C.f_42);
				vVar1 = { unk_0x541C2AEF053615BC(iVar0, true) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_142(int iParam0, int iParam1)//Position - 0xDAFB
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_143(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0x3187EF5798B5D209(iParam0, -1, 0);
		if (!unk_0x724D816EA203A79E(iVar0))
		{
			iVar0 = unk_0xE293D7F16E1815E8(iParam0, -1);
		}
		if (unk_0x724D816EA203A79E(iVar0) && !unk_0x36CEFBE9B745A58D(iVar0))
		{
			if (unk_0x6F79ECA8C83E4357(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x6F79ECA8C83E4357(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x6F79ECA8C83E4357(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_19B04.f_932.f_21B.f_10CD;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x6F79ECA8C83E4357(iParam0) == Global_19B04.f_7F22.f_13AE[iVar1 /*157*/][iVar2 /*78*/].f_42)
			{
				if (!unk_0xF1734B55490E9045(&(Global_19B04.f_7F22.f_13AE[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x3362CDE8460ED38B(unk_0x2232934AD664DD49(iParam0), &(Global_19B04.f_7F22.f_13AE[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_19B04.f_7F22.f_13AE[iVar1 /*157*/][iVar2 /*78*/].f_42 = 0;
						Global_19B04.f_7F22.f_15D8[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (unk_0x6F79ECA8C83E4357(iParam0) == Global_19B04.f_7F22.f_15E0[iVar1 /*78*/].f_42)
		{
			if (!unk_0xF1734B55490E9045(&(Global_19B04.f_7F22.f_15E0[iVar1 /*78*/].f_1)))
			{
				if (unk_0x3362CDE8460ED38B(unk_0x2232934AD664DD49(iParam0), &(Global_19B04.f_7F22.f_15E0[iVar1 /*78*/].f_1)))
				{
					Global_19B04.f_7F22.f_15E0[iVar1 /*78*/].f_42 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_19B04.f_7F22.f_15D6 = iParam1;
	Global_11431 = iParam0;
	Global_19B04.f_7F22.f_15D4 = 1;
	func_39(iParam0, &(Global_19B04.f_7F22.f_1586));
}

int func_143(int iParam0)//Position - 0xDCFD
{
	if ((((((((((!unk_0x724D816EA203A79E(iParam0) || !unk_0xE59B7F5A03335350(iParam0, 0)) || func_45(iParam0, 0, 0)) || func_45(iParam0, 1, 0)) || func_45(iParam0, 2, 0)) || func_34(iParam0) != 145) || func_148(iParam0)) || func_147(iParam0)) || func_146(iParam0)) || func_145(iParam0)) || !func_144(unk_0x6F79ECA8C83E4357(iParam0)))
	{
		if (func_147(iParam0))
		{
		}
		if (func_147(iParam0))
		{
		}
		if (func_45(iParam0, 0, 0))
		{
		}
		if (func_45(iParam0, 1, 0))
		{
		}
		if (func_45(iParam0, 2, 0))
		{
		}
		if (func_34(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_144(int iParam0)//Position - 0xDDDA
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_129(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0xE7B3A320107C1379(iParam0) || unk_0xA19D269B4B5A1532(iParam0)) || unk_0x8C1A6E7D5F410F4A(iParam0)) || unk_0xFF2234981505F7F4(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case 1938952078:
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_145(int iParam0)//Position - 0xDF8B
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x6F79ECA8C83E4357(iParam0);
	sVar1 = unk_0x2232934AD664DD49(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x3362CDE8460ED38B(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_129(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_146(int iParam0)//Position - 0xDFD1
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x724D816EA203A79E(Global_1615D[iVar0]))
		{
			if (Global_1615D[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_147(int iParam0)//Position - 0xE00C
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(iParam0) && unk_0xE59B7F5A03335350(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x724D816EA203A79E(Global_1613F[iVar0]) && unk_0xE59B7F5A03335350(Global_1613F[iVar0], 0))
			{
				if (Global_1613F[iVar0] == iParam0 && unk_0x6F79ECA8C83E4357(Global_1613F[iVar0]) == unk_0x6F79ECA8C83E4357(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_148(int iParam0)//Position - 0xE088
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(Global_110A8.f_1E4[24]))
	{
		if (iParam0 == Global_110A8.f_1E4[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x724D816EA203A79E(Global_110A8.f_1E4[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_110A8.f_1E4[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_149(int iParam0, bool bParam1)//Position - 0xE170
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_151(iParam0, 0))
		{
			func_150(iParam0, 1, 0);
			func_150(iParam0, 2, 0);
			func_150(iParam0, 3, 0);
			func_150(iParam0, 4, 0);
			func_150(iParam0, 0, 1);
			Global_110A8[iParam0] = 1;
		}
	}
	else
	{
		func_150(iParam0, 0, 0);
	}
}

void func_150(int iParam0, int iParam1, bool bParam2)//Position - 0xE1CD
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xF0059F27F7BB6680(&(Global_19B04.f_7F22[iParam0]), iParam1);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_7F22[iParam0]), iParam1);
	}
}

bool func_151(int iParam0, int iParam1)//Position - 0xE208
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_19B04.f_7F22[iParam0], iParam1);
}

void func_152(int iParam0)//Position - 0xE22B
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_156(&(Global_110A8.f_22B[0 /*21*/]), iParam0))
	{
		if (unk_0x724D816EA203A79E(Global_110A8.f_8B[iParam0]))
		{
			bVar0 = true;
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0xE59B7F5A03335350(Global_110A8.f_8B[iParam0], 0))
				{
					if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Global_110A8.f_8B[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0x77815D3407C6700D(Global_110A8.f_8B[iParam0], true, 1);
				unk_0xCF6040807CC0E4A5(&(Global_110A8.f_8B[iParam0]));
			}
		}
		Global_110A8[iParam0] = 1;
		if (unk_0xFA30DFD0084E92FE(Global_110A8.f_22B[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_151(iParam0, 0)) && Global_11435.f_42 == 0) && Global_19B04.f_7F22.f_7A6[Global_110A8.f_22B[0 /*21*/].f_E] != 0) && Global_19B04.f_7F22.f_7A6[Global_110A8.f_22B[0 /*21*/].f_E] > 3) && (!func_154(0, Global_110A8.f_22B[0 /*21*/].f_C) || !func_154(1, Global_110A8.f_22B[0 /*21*/].f_C)))
			{
				func_153(&(Global_19B04.f_7F22.f_45[Global_110A8.f_22B[0 /*21*/].f_E /*78*/]), &Global_11435);
				Global_11483 = Global_19B04.f_7F22.f_15D7;
			}
			func_149(iParam0, 0);
		}
	}
}

void func_153(var uParam0, var uParam1)//Position - 0xE39D
{
	uParam1->f_42 = uParam0->f_42;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_3B = { uParam0->f_3B };
	uParam1->f_3E = uParam0->f_3E;
	uParam1->f_3F = uParam0->f_3F;
	uParam1->f_40 = uParam0->f_40;
	uParam1->f_41 = uParam0->f_41;
	uParam1->f_4D = uParam0->f_4D;
	uParam1->f_43 = uParam0->f_43;
	uParam1->f_45 = uParam0->f_45;
	uParam1->f_44 = uParam0->f_44;
	uParam1->f_47 = uParam0->f_47;
	uParam1->f_48 = uParam0->f_48;
	uParam1->f_49 = uParam0->f_49;
	uParam1->f_4A = uParam0->f_4A;
	uParam1->f_4B = uParam0->f_4B;
	uParam1->f_4C = uParam0->f_4C;
}

int func_154(int iParam0, int iParam1)//Position - 0xE469
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_155(&(Global_19B04.f_7F22.f_13AE[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_129(Global_19B04.f_7F22.f_13AE[iVar0 /*157*/][iParam0 /*78*/].f_42, 0);
}

int func_155(var uParam0)//Position - 0xE4DB
{
	return *uParam0;
}

int func_156(var uParam0, int iParam1)//Position - 0xE4E6
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_A = 0;
	uParam0->f_B = 0;
	uParam0->f_C = 145;
	uParam0->f_D = -1;
	uParam0->f_E = 0;
	uParam0->f_F = { 0f, 0f, 0f };
	uParam0->f_12 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_36(0, 1);
			uParam0->f_C = 0;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_36(0, 1);
			uParam0->f_C = 0;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_36(1, 1);
			uParam0->f_C = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_36(1, 2);
			uParam0->f_C = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 19);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_36(1, 1);
			uParam0->f_C = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_36(1, 2);
			uParam0->f_C = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 19);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_36(2, 1);
			uParam0->f_C = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_36(2, 1);
			uParam0->f_C = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_36(2, 1);
			uParam0->f_C = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_E = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_C = 0;
			uParam0->f_D = 359;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_E = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_C = 1;
			uParam0->f_D = 359;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_E = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_C = 2;
			uParam0->f_D = 359;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_E = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_C = 0;
			uParam0->f_D = 356;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 22);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_E = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_C = 1;
			uParam0->f_D = 356;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 22);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_E = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_C = 2;
			uParam0->f_D = 356;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 22);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_E = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_C = 0;
			uParam0->f_D = 360;
			uParam0->f_F = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_12 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_E = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_C = 1;
			uParam0->f_D = 360;
			uParam0->f_F = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_12 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_E = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_C = 2;
			uParam0->f_D = 360;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_E = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = 0;
			uParam0->f_D = 357;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 24);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_E = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = 1;
			uParam0->f_D = 357;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 24);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_E = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = 2;
			uParam0->f_D = 357;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 24);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_E = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = (0 + iVar1);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 27);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 24);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_E = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = (0 + iVar1);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 27);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 24);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_E = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = (0 + iVar1);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 27);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 24);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_E = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 11);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 13);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_E = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 11);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 13);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_A = 126;
			uParam0->f_B = 126;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 9);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_A = 157;
			uParam0->f_B = 157;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 9);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = 1938952078;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_D = 308;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 2);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 30);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_D = 404;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 2);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 22);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_137())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_D = 401;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 13);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 2);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 1);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_137())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_D = 401;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 13);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 2);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 1);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_D = 308;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 30);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 30);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0xFA30DFD0084E92FE(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_19B04.f_7F22.f_45[uParam0->f_E /*78*/].f_42;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_70(Global_19B04.f_7F22.f_748[uParam0->f_E /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_19B04.f_7F22.f_748[uParam0->f_E /*3*/] };
		}
		if (Global_19B04.f_7F22.f_78E[uParam0->f_E] != -1f)
		{
			uParam0->f_3 = Global_19B04.f_7F22.f_78E[uParam0->f_E];
		}
	}
	if (unk_0xFA30DFD0084E92FE(uParam0->f_9, 19))
	{
		if (!func_70(Global_19B04.f_932.f_21B.f_DF0[1 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_19B04.f_932.f_21B.f_DF0[1 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_19B04.f_932.f_21B.f_E05[1 /*4*/][uParam0->f_C];
		}
	}
	else if (unk_0xFA30DFD0084E92FE(uParam0->f_9, 20))
	{
		if (!func_70(Global_19B04.f_932.f_21B.f_DF0[0 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_19B04.f_932.f_21B.f_DF0[0 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_19B04.f_932.f_21B.f_E05[0 /*4*/][uParam0->f_C];
		}
	}
	return iVar0;
}

int func_157(int iParam0)//Position - 0xFBDE
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((unk_0x724D816EA203A79E(Global_110A8.f_1E4[iVar0]) && !unk_0x1D403DFADBC2DE3C(Global_110A8.f_1E4[iVar0], 0)) && unk_0xE59B7F5A03335350(Global_110A8.f_1E4[iVar0], 0))
		{
			unk_0x87F182D2DA225F0D(iParam0, &iVar1, &iVar2);
			unk_0x87F182D2DA225F0D(Global_110A8.f_1E4[iVar0], &iVar3, &iVar4);
			if (((unk_0x6F79ECA8C83E4357(iParam0) == unk_0x6F79ECA8C83E4357(Global_110A8.f_1E4[iVar0]) && unk_0x0FF608FD384AF8FA(iParam0) == unk_0x0FF608FD384AF8FA(Global_110A8.f_1E4[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_158(int iParam0, vector3 vParam1, bool bParam2)//Position - 0xFCA1
{
	int iVar0;
	var uVar1[3];
	int iVar2;
	int iVar3;
	
	iVar0 = unk_0x6F79ECA8C83E4357(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_159(iParam0, Global_110A8.f_8B[38], 0))
			{
				func_152(38);
				return 1;
			}
			break;
		
		case 1938952078:
			if (func_159(iParam0, Global_110A8.f_8B[43], 1))
			{
				func_152(43);
				return 1;
			}
			break;
		
		case joaat("cuban800"):
			iVar2 = unk_0xD7F48BFEBC0E3FB2(unk_0xBC25C936A095B5BA(), &uVar1);
			iVar3 = 0;
			while (iVar3 <= (iVar2 - 1))
			{
				if (func_159(iParam0, uVar1[iVar3], 1) && func_128(unk_0x541C2AEF053615BC(uVar1[iVar3], true), 2136.133f, 4780.563f, 39.9702f, 5f, 0))
				{
					if ((!bParam2 || func_70(vParam1, 0f, 0f, 0f, 0)) || unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(iParam0, true), unk_0x541C2AEF053615BC(uVar1[iVar3], true), true) < 10f)
					{
						unk_0xCF6040807CC0E4A5(&iParam0);
						return 1;
					}
					else
					{
						return 0;
					}
				}
				iVar3++;
			}
			break;
		
		case joaat("luxor2"):
			if ((unk_0x724D816EA203A79E(Global_110A8.f_1E4[14]) && unk_0xE59B7F5A03335350(iParam0, 0)) && unk_0xE59B7F5A03335350(Global_110A8.f_1E4[14], 0))
			{
				if (unk_0x6F79ECA8C83E4357(Global_110A8.f_1E4[14]) == joaat("luxor2") && unk_0x0FF608FD384AF8FA(iParam0) == unk_0x0FF608FD384AF8FA(Global_110A8.f_1E4[14]))
				{
					func_152(14);
					return 1;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((unk_0x724D816EA203A79E(Global_110A8.f_1E4[20]) && unk_0xE59B7F5A03335350(iParam0, 0)) && unk_0xE59B7F5A03335350(Global_110A8.f_1E4[20], 0))
			{
				if (unk_0x6F79ECA8C83E4357(Global_110A8.f_1E4[20]) == joaat("swift2") && unk_0x0FF608FD384AF8FA(iParam0) == unk_0x0FF608FD384AF8FA(Global_110A8.f_1E4[20]))
				{
					func_152(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_159(int iParam0, int iParam1, bool bParam2)//Position - 0xFEA9
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((unk_0x724D816EA203A79E(iParam1) && !unk_0x1D403DFADBC2DE3C(iParam1, 0)) && unk_0xE59B7F5A03335350(iParam1, 0))
	{
		if (bParam2)
		{
			unk_0x87F182D2DA225F0D(iParam0, &iVar0, &iVar1);
			unk_0x87F182D2DA225F0D(iParam1, &iVar2, &iVar3);
			if (iVar0 == iVar2 && iVar1 == iVar3)
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_160(int iParam0, int iParam1)//Position - 0xFF0A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0x724D816EA203A79E(Global_1613F[iVar0]))
		{
			Global_1613F[iVar0] = iParam0;
			Global_16149[iVar0] = iParam1;
			Global_16153[iVar0] = unk_0x6F79ECA8C83E4357(iParam0);
			if (unk_0x7C28D15641461C68(Global_16153[iVar0]))
			{
				Global_1616F[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_1616F[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_161(int iParam0, int iParam1)//Position - 0xFF8C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x724D816EA203A79E(Global_1613F[iVar0]))
		{
			if (iParam0 == 145 || Global_16149[iVar0] == iParam0)
			{
				if (iParam1 == 0 || unk_0x6F79ECA8C83E4357(Global_1613F[iVar0]) == func_36(iParam0, iParam1))
				{
					if (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Global_1613F[iVar0], 0))
					{
						unk_0x77815D3407C6700D(Global_1613F[iVar0], false, 1);
						unk_0xCF6040807CC0E4A5(&(Global_1613F[iVar0]));
						Global_16149[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_162(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x1002E
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		if (!func_171(iParam0))
		{
			if (unk_0x56BEECB328B6D29D(&(uParam1->f_1)) != 0)
			{
				unk_0xEA0AB6C644C58C1D(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < unk_0xECE72A06BBAC88B0())
			{
				unk_0x5EDEB04A454C1C0C(iParam0, *uParam1);
			}
		}
		if (uParam1->f_42 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_42 == joaat("casco"))
		{
			iVar0 = 1;
			if (unk_0xFA30DFD0084E92FE(uParam1->f_4D, func_40(iVar0 + 1)))
			{
			}
			else
			{
				unk_0xF0059F27F7BB6680(&(uParam1->f_4D), func_40(iVar0 + 1));
			}
		}
		else if (uParam1->f_42 == joaat("sandking") || uParam1->f_42 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (unk_0xFA30DFD0084E92FE(uParam1->f_4D, func_40(iVar1 + 1)))
			{
			}
			else
			{
				unk_0xF0059F27F7BB6680(&(uParam1->f_4D), func_40(iVar1 + 1));
			}
		}
		if (uParam1->f_42 == 433954513)
		{
			unk_0x3621427A534C7FA0(iParam0, 0);
			if (unk_0x3EB14CBD49DA0017(iParam0, 5) != -1)
			{
				unk_0x3621427A534C7FA0(iParam0, 1);
			}
		}
		if (unk_0xFA30DFD0084E92FE(uParam1->f_4D, 13))
		{
			unk_0x1A45B6F1C5FA21FC(iParam0, uParam1->f_47, uParam1->f_48, uParam1->f_49);
		}
		else
		{
			unk_0xF07FAC3A3C7FE9ED(iParam0);
		}
		if (unk_0xFA30DFD0084E92FE(uParam1->f_4D, 12))
		{
			unk_0x28CD156B832945DC(iParam0, uParam1->f_47, uParam1->f_48, uParam1->f_49);
		}
		else
		{
			unk_0xC90D824D356A7AF3(iParam0);
		}
		unk_0x914C5DE0B15B8B59(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0x4C59702AC1076A88(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0xFA30DFD0084E92FE(uParam1->f_4D, 15) || func_170(iParam0)) || (((uParam1->f_3E == 0 && uParam1->f_3F == 0) && uParam1->f_40 == 0) && uParam1->f_9[20] > 0)) && func_169())
		{
			uParam1->f_3E = 0;
			uParam1->f_3F = 0;
			uParam1->f_40 = 0;
		}
		else if ((uParam1->f_3E == 0 && uParam1->f_3F == 0) && uParam1->f_40 == 0)
		{
			uParam1->f_3E = 255;
			uParam1->f_3F = 255;
			uParam1->f_40 = 255;
		}
		unk_0x05D05A0BAA6CA8B1(iParam0, uParam1->f_3E, uParam1->f_3F, uParam1->f_40);
		if (uParam1->f_41 == -1 && !func_42(uParam1->f_42))
		{
			unk_0x84A3F4F29630A320(iParam0, 0);
		}
		else
		{
			unk_0x84A3F4F29630A320(iParam0, 0);
			unk_0x84A3F4F29630A320(iParam0, uParam1->f_41);
		}
		unk_0xE82050D41B744FF3(iParam0, !unk_0xFA30DFD0084E92FE(uParam1->f_4D, 9));
		if (bParam2)
		{
			unk_0xD421BC740C5340C3(iParam0, uParam1->f_46);
		}
		unk_0x13CA55A989DEB72C(iParam0, uParam1->f_4A, uParam1->f_4B, uParam1->f_4C);
		unk_0x200ACC5C718FF287(iParam0, 2, unk_0xFA30DFD0084E92FE(uParam1->f_4D, 28));
		unk_0x200ACC5C718FF287(iParam0, 3, unk_0xFA30DFD0084E92FE(uParam1->f_4D, 29));
		unk_0x200ACC5C718FF287(iParam0, 0, unk_0xFA30DFD0084E92FE(uParam1->f_4D, 30));
		unk_0x200ACC5C718FF287(iParam0, 1, unk_0xFA30DFD0084E92FE(uParam1->f_4D, 31));
		unk_0x8D8F52BBEE186D6D(iParam0, unk_0xFA30DFD0084E92FE(uParam1->f_4D, 10));
		if (unk_0x294CD98C461C2594(iParam0) > 1 && uParam1->f_43 >= 0)
		{
			unk_0x7170EF3CEB4D0224(iParam0, uParam1->f_43);
		}
		if (uParam1->f_45 > -1 && uParam1->f_45 < 255)
		{
			if (!unk_0x2B4DE5C0D509B0F9(unk_0x6F79ECA8C83E4357(iParam0)))
			{
				if (unk_0x7512ED01F3F46714(unk_0x6F79ECA8C83E4357(iParam0)))
				{
					if (uParam1->f_45 == 6)
					{
						func_168(iParam0, uParam1->f_45);
					}
				}
				else
				{
					func_168(iParam0, uParam1->f_45);
				}
			}
		}
		if (unk_0x6DB86B1ADD81CED4(iParam0, 0))
		{
			if ((uParam1->f_44 == 0 || uParam1->f_44 == 3) || uParam1->f_44 == 5)
			{
				unk_0x53A9885CA864BB82(iParam0, 1);
			}
			else
			{
				unk_0x7868CAB0703DB40F(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_163(&iParam0, &(uParam1->f_9), &(uParam1->f_3B));
		}
		if (!unk_0x8C1A6E7D5F410F4A(uParam1->f_42) && !unk_0xE7B3A320107C1379(uParam1->f_42))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (unk_0xFA30DFD0084E92FE(uParam1->f_4D, func_40(iVar2 + 1)))
				{
					if (!unk_0xFC8A228C62614C5C(iParam0, iVar2 + 1))
					{
						unk_0xE54F7105CEA81918(iParam0, iVar2 + 1, false);
					}
				}
				else if (unk_0xFC8A228C62614C5C(iParam0, iVar2 + 1))
				{
					unk_0xE54F7105CEA81918(iParam0, iVar2 + 1, true);
				}
				iVar2++;
			}
		}
		if ((unk_0x6F79ECA8C83E4357(iParam0) == joaat("sheava") || unk_0x6F79ECA8C83E4357(iParam0) == joaat("omnis")) || unk_0x6F79ECA8C83E4357(iParam0) == joaat("le7b"))
		{
			if (unk_0x3EB14CBD49DA0017(iParam0, 0) == -1)
			{
				unk_0xE54F7105CEA81918(iParam0, 1, false);
			}
		}
		if (((unk_0xA19D269B4B5A1532(uParam1->f_42) && unk_0x86AFA41F8E0E6D36(iParam0)) && !unk_0x5E87CB0495C97732(iParam0, -2118308144)) && !((((Global_440000.f_C7AE == 6 || Global_440000.f_C7AE == 7) || Global_440000.f_C7AE == 18) || Global_440000.f_C7AE == 19) && Global_440000.f_2 == 20))
		{
			if (!unk_0xFA30DFD0084E92FE(uParam1->f_4D, 23))
			{
				if (unk_0xFA30DFD0084E92FE(uParam1->f_4D, 22))
				{
					unk_0xA1EE8501940C1D3E(iParam0, 2);
				}
				else
				{
					unk_0xA1EE8501940C1D3E(iParam0, 3);
				}
			}
			else
			{
				unk_0xA1EE8501940C1D3E(iParam0, 4);
			}
		}
		if (unk_0xFA30DFD0084E92FE(uParam1->f_4D, 27))
		{
			unk_0xE9A905ADFD5BC8A0(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0xE9A905ADFD5BC8A0(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_163(int iParam0, var uParam1, var uParam2)//Position - 0x1057E
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xE59B7F5A03335350(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xA6BE0954FC6BAA16(*iParam0) == 0)
	{
		return 0;
	}
	unk_0x1345B3BF11EDB0CF(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			unk_0xB25E25030D61B529(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (unk_0x3EB14CBD49DA0017(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0xD2AB1F868ED95E27(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0x5C9F67BE33A5A3EE(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0x5C9F67BE33A5A3EE(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0x5C9F67BE33A5A3EE(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_167(unk_0x6F79ECA8C83E4357(*iParam0), 1) && unk_0x3EB14CBD49DA0017(*iParam0, 24) != func_166(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0x5C9F67BE33A5A3EE(*iParam0, 24, func_166(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_165(iParam0);
	if (func_164(*iParam0))
	{
		unk_0xDB35A2F9333ABEC5(*iParam0, true);
		unk_0xA73D1278857991A2(*iParam0, true);
	}
	return 1;
}

int func_164(int iParam0)//Position - 0x106FC
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((unk_0x724D816EA203A79E(iParam0) && unk_0xE59B7F5A03335350(iParam0, 0)) && unk_0xA6BE0954FC6BAA16(iParam0) > 0)
	{
		unk_0x1345B3BF11EDB0CF(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0x3EB14CBD49DA0017(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0x0E4EDFA1D564AF9D(iParam0, iVar1, unk_0x3EB14CBD49DA0017(iParam0, iVar1)), 16);
				iVar2 = unk_0x56BEECB328B6D29D(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0x56BEECB328B6D29D("MNU_CAGE") || iVar2 == unk_0x56BEECB328B6D29D("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_165(var uParam0)//Position - 0x107D8
{
	switch (unk_0x6F79ECA8C83E4357(*uParam0))
	{
		case -1700874274:
			if (unk_0x3EB14CBD49DA0017(*uParam0, 4) == 0)
			{
				unk_0x5C9F67BE33A5A3EE(*uParam0, 13, 0, false);
			}
			else
			{
				unk_0xD2AB1F868ED95E27(*uParam0, 13);
			}
			break;
	}
}

int func_166(int iParam0, int iParam1)//Position - 0x10818
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0x724D816EA203A79E(iParam0) && unk_0xE59B7F5A03335350(iParam0, 0))
	{
		switch (unk_0x6F79ECA8C83E4357(iParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
				{
					case 0:
						return 0;
						break;
					
					case 1:
						return 1;
						break;
					
					case 2:
						return 2;
						break;
					
					case 3:
						return 3;
						break;
					
					case 4:
						return 4;
						break;
					
					case 5:
						return 4;
						break;
				}
				break;
			
			case joaat("faction3"):
				return 3;
				break;
		}
		iVar0 = unk_0x34374BDFA570F489(iParam0, 38);
		iVar1 = unk_0x34374BDFA570F489(iParam0, 24);
		fVar2 = (SYSTEM::TO_FLOAT(iParam1 + 1) / SYSTEM::TO_FLOAT(iVar0));
		iVar3 = (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

int func_167(int iParam0, int iParam1)//Position - 0x108FD
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_40001.f_351A)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_40001.f_351B)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_40001.f_3519)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_40001.f_351C)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_40001.f_351E)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_40001.f_351D)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_40001.f_4677)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_40001.f_4679)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_40001.f_467D)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_40001.f_467A)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_40001.f_4681)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_40001.f_467F)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_40001.f_4684)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case 1356124575:
			if (Global_40001.f_4E1B)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case -1924433270:
			if (Global_40001.f_4E1C)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
	}
	return 0;
}

void func_168(int iParam0, int iParam1)//Position - 0x10B70
{
	int iVar0;
	int iVar1;
	
	if (unk_0xA6BE0954FC6BAA16(iParam0) > 0)
	{
		unk_0x1345B3BF11EDB0CF(iParam0, 0);
		iVar0 = unk_0x3EB14CBD49DA0017(iParam0, 24);
		iVar1 = unk_0xC8B123E980199685(iParam0, 24);
		unk_0xD2F70373DBF15801(iParam0, iParam1);
		if (unk_0x6F79ECA8C83E4357(iParam0) == joaat("tornado6"))
		{
			return;
		}
		if (iVar0 == -1)
		{
			unk_0xD2AB1F868ED95E27(iParam0, 24);
		}
		else
		{
			unk_0x5C9F67BE33A5A3EE(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

bool func_169()//Position - 0x10BD5
{
	return unk_0x7B2F21BFE86AEB61(-1691188696);
}

int func_170(int iParam0)//Position - 0x10BE6
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (unk_0xE59B7F5A03335350(iParam0, 0))
		{
			if (unk_0x46032D09AA009EC4("MPBitset", 3))
			{
				if (unk_0x3C03CFD5DD1E2D97(iParam0, "MPBitset"))
				{
					iVar0 = unk_0x67CFC62D543B19EF(iParam0, "MPBitset");
				}
				return unk_0xFA30DFD0084E92FE(iVar0, 4);
			}
		}
	}
	return 0;
}

int func_171(int iParam0)//Position - 0x10C31
{
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		if (!func_177(unk_0xB5CEFD608600A09F(), -1))
		{
			iParam0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
		}
	}
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 0;
	}
	if (unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0xE59B7F5A03335350(iParam0, 0))
	{
		return 0;
	}
	if (func_173(unk_0xB5CEFD608600A09F()) == 3)
	{
		if (unk_0x724D816EA203A79E(iParam0) && unk_0xE59B7F5A03335350(iParam0, 0))
		{
			if (func_172(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_172(int iParam0)//Position - 0x10CB8
{
	if (unk_0x46032D09AA009EC4("FMDeliverableID", 3))
	{
		if (unk_0x3C03CFD5DD1E2D97(iParam0, "FMDeliverableID"))
		{
			return unk_0x67CFC62D543B19EF(iParam0, "FMDeliverableID");
		}
	}
	return -1;
}

int func_173(int iParam0)//Position - 0x10CE7
{
	if (func_176(iParam0) == 233)
	{
		return func_174(iParam0);
	}
	return -1;
}

int func_174(int iParam0)//Position - 0x10D04
{
	if (func_175(iParam0, 0))
	{
		return Global_18C80F[iParam0 /*558*/].f_B.f_B0;
	}
	return -1;
}

int func_175(int iParam0, int iParam1)//Position - 0x10D27
{
	if (Global_18C80F[iParam0 /*558*/].f_B.f_21 != -1 || (iParam1 && Global_18C80F[iParam0 /*558*/].f_B.f_20 != -1))
	{
		return 1;
	}
	return 0;
}

int func_176(int iParam0)//Position - 0x10D62
{
	if (func_175(iParam0, 0))
	{
		return Global_18C80F[iParam0 /*558*/].f_B.f_21;
	}
	return -1;
}

int func_177(int iParam0, int iParam1)//Position - 0x10D85
{
	int iVar0;
	
	if (func_178(iParam0, 1, 1))
	{
		if (unk_0x5237AF95232D78C5(unk_0xA95CF30C72EB526E(iParam0), 0))
		{
			iVar0 = unk_0x9FE9D386222EEE47(unk_0xA95CF30C72EB526E(iParam0), 0);
			if (unk_0xE59B7F5A03335350(iVar0, 0))
			{
				if (unk_0xBC25C936A095B5BA() == unk_0x3187EF5798B5D209(iVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_178(int iParam0, bool bParam1, bool bParam2)//Position - 0x10DD2
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

void func_179(vector3 vParam0, float fParam1, bool bParam2)//Position - 0x10E1C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_156(&(Global_110A8.f_22B[0 /*21*/]), iVar0))
		{
			if (unk_0xF0F2FC9DE291567F(vParam0, Global_110A8.f_22B[0 /*21*/], bParam2) <= fParam1)
			{
				func_152(iVar0);
			}
		}
		iVar0++;
	}
}

var func_180()//Position - 0x10E6C
{
	return Global_181DF.f_B3B.f_C.f_42;
}

bool func_181()//Position - 0x10E7F
{
	return func_127(&(Global_181DF.f_B3B));
}

void func_182()//Position - 0x10E92
{
	iLocal_305 = unk_0x9934FEFB3B8C6DB8("BREAKING_NEWS");
	unk_0xF243B7A14FCFD0F4(joaat("jet"));
	unk_0xF243B7A14FCFD0F4(joaat("police3"));
	unk_0xF243B7A14FCFD0F4(joaat("maverick"));
	unk_0xF243B7A14FCFD0F4(joaat("bison"));
	unk_0xF243B7A14FCFD0F4(joaat("blista"));
	unk_0xF243B7A14FCFD0F4(joaat("ig_molly"));
	unk_0xF243B7A14FCFD0F4(joaat("cogcabrio"));
	unk_0xF243B7A14FCFD0F4(joaat("rapidgt"));
	unk_0x1B2A7C8188ADBE04(45, "BB_Chase");
	unk_0x1B2A7C8188ADBE04(35, "BB_Chase");
	unk_0x1B2A7C8188ADBE04(2, "BB_Chase");
	unk_0x1B2A7C8188ADBE04(54, "BB_Chase");
	unk_0x1B2A7C8188ADBE04(55, "BB_Chase");
	unk_0x1B2A7C8188ADBE04(67, "BB_Chase");
	func_184(1, "BB_Chase");
	if (func_23())
	{
		if (func_181())
		{
			if (!unk_0x8C1A6E7D5F410F4A(func_180()) && !unk_0xA19D269B4B5A1532(func_180()))
			{
				func_138();
				while (!func_125())
				{
					SYSTEM::WAIT(0);
				}
			}
		}
	}
	while (((((((!unk_0xD6513D668481290A(joaat("jet")) || !unk_0xD6513D668481290A(joaat("police3"))) || !unk_0xD6513D668481290A(joaat("maverick"))) || !unk_0xD6513D668481290A(joaat("bison"))) || !unk_0xD6513D668481290A(joaat("blista"))) || !unk_0xD6513D668481290A(joaat("ig_molly"))) || !unk_0xD6513D668481290A(joaat("cogcabrio"))) || !unk_0xD6513D668481290A(joaat("rapidgt")))
	{
		SYSTEM::WAIT(0);
	}
	while (!unk_0xA7F138B5B1AB2CF6(iLocal_305) || !func_183(1, "BB_Chase"))
	{
		SYSTEM::WAIT(0);
	}
	while (((((!unk_0x00D24B3F2A5CD22C(45, "BB_Chase") || !unk_0x00D24B3F2A5CD22C(35, "BB_Chase")) || !unk_0x00D24B3F2A5CD22C(2, "BB_Chase")) || !unk_0x00D24B3F2A5CD22C(54, "BB_Chase")) || !unk_0x00D24B3F2A5CD22C(55, "BB_Chase")) || !unk_0x00D24B3F2A5CD22C(67, "BB_Chase"))
	{
		SYSTEM::WAIT(0);
	}
}

bool func_183(int iParam0, char* sParam1)//Position - 0x11067
{
	return unk_0x00D24B3F2A5CD22C(iParam0, sParam1);
}

void func_184(int iParam0, char* sParam1)//Position - 0x11077
{
	unk_0x1B2A7C8188ADBE04(iParam0, sParam1);
}

void func_185()//Position - 0x11087
{
	func_211();
	func_209();
	unk_0xEB233A3B7635D2AC();
	unk_0xAF0732277B825027(0);
	unk_0x78108840729CEAEE(0);
	unk_0x4AED68BFACFB14CB(true);
	if (unk_0x86BC948CAD7C61EF(iLocal_262))
	{
		unk_0x906C49077ACDA06A(iLocal_262);
	}
	if (unk_0x2A0D5F9585271A68(iLocal_263))
	{
		unk_0x5BF83EEC9AFDCD0E(iLocal_263);
	}
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), -1019.579f, -484.872f, 36.0795f, 1, false, 0, 1);
		unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), 93.7701f);
	}
	if (unk_0x724D816EA203A79E(iLocal_279))
	{
		if (unk_0xE59B7F5A03335350(iLocal_279, 0))
		{
			if (unk_0xB34E411B0A4BF096(iLocal_279))
			{
				unk_0xD87F0F9CDF39238A(iLocal_279);
			}
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_278))
	{
		if (unk_0xE59B7F5A03335350(iLocal_278, 0))
		{
			unk_0x38E412DB4A45B900(iLocal_278, 0);
			if (unk_0xB34E411B0A4BF096(iLocal_278))
			{
				unk_0xD87F0F9CDF39238A(iLocal_278);
			}
		}
	}
	if (unk_0x2F1B39E315395385(iLocal_668))
	{
		unk_0x2CA8D9DC16C6AF09(iLocal_668, 0);
	}
	if (unk_0x2F1B39E315395385(iLocal_669))
	{
		unk_0x2CA8D9DC16C6AF09(iLocal_669, 0);
	}
	if (unk_0x2F1B39E315395385(iLocal_670))
	{
		unk_0x2CA8D9DC16C6AF09(iLocal_670, 0);
	}
	if (unk_0x2F1B39E315395385(iLocal_671))
	{
		unk_0x2CA8D9DC16C6AF09(iLocal_671, 0);
	}
	if (unk_0x2F1B39E315395385(iLocal_672))
	{
		unk_0x2CA8D9DC16C6AF09(iLocal_672, 0);
	}
	if (unk_0x2F1B39E315395385(iLocal_667[0]))
	{
		unk_0x2CA8D9DC16C6AF09(iLocal_667[0], 0);
	}
	if (unk_0x2F1B39E315395385(iLocal_667[1]))
	{
		unk_0x2CA8D9DC16C6AF09(iLocal_667[1], 0);
	}
	if (unk_0x2F1B39E315395385(iLocal_667[2]))
	{
		unk_0x2CA8D9DC16C6AF09(iLocal_667[2], 0);
	}
	unk_0x8E5F062750135AD1();
	if (unk_0x724D816EA203A79E(iLocal_264))
	{
		unk_0xF845620A03C7425B(&iLocal_264);
	}
	if (unk_0x724D816EA203A79E(iLocal_266))
	{
		unk_0xF845620A03C7425B(&iLocal_266);
	}
	if (unk_0x724D816EA203A79E(iLocal_269))
	{
		unk_0xF845620A03C7425B(&iLocal_269);
	}
	if (unk_0x724D816EA203A79E(iLocal_270))
	{
		unk_0xF845620A03C7425B(&iLocal_270);
	}
	if (unk_0x724D816EA203A79E(iLocal_271))
	{
		unk_0xF845620A03C7425B(&iLocal_271);
	}
	if (unk_0x724D816EA203A79E(iLocal_272))
	{
		unk_0xF845620A03C7425B(&iLocal_272);
	}
	if (unk_0x724D816EA203A79E(iLocal_273))
	{
		unk_0xF845620A03C7425B(&iLocal_273);
	}
	if (unk_0x724D816EA203A79E(iLocal_274))
	{
		unk_0xF845620A03C7425B(&iLocal_274);
	}
	if (unk_0x724D816EA203A79E(iLocal_265[0]))
	{
		unk_0xF845620A03C7425B(&(iLocal_265[0]));
	}
	if (unk_0x724D816EA203A79E(iLocal_265[1]))
	{
		unk_0xF845620A03C7425B(&(iLocal_265[1]));
	}
	if (unk_0x724D816EA203A79E(iLocal_265[2]))
	{
		unk_0xF845620A03C7425B(&(iLocal_265[2]));
	}
	if (unk_0x724D816EA203A79E(iLocal_265[3]))
	{
		unk_0xF845620A03C7425B(&(iLocal_265[3]));
	}
	if (unk_0x724D816EA203A79E(uLocal_267[0]))
	{
		unk_0xF845620A03C7425B(&(uLocal_267[0]));
	}
	if (unk_0x724D816EA203A79E(uLocal_267[1]))
	{
		unk_0xF845620A03C7425B(&(uLocal_267[1]));
	}
	if (unk_0x724D816EA203A79E(uLocal_267[2]))
	{
		unk_0xF845620A03C7425B(&(uLocal_267[2]));
	}
	if (unk_0x724D816EA203A79E(iLocal_268[0]))
	{
		unk_0xF845620A03C7425B(&(iLocal_268[0]));
	}
	if (unk_0x724D816EA203A79E(iLocal_268[1]))
	{
		unk_0xF845620A03C7425B(&(iLocal_268[1]));
	}
	if (unk_0x724D816EA203A79E(iLocal_268[2]))
	{
		unk_0xF845620A03C7425B(&(iLocal_268[2]));
	}
	if (unk_0x724D816EA203A79E(iLocal_268[3]))
	{
		unk_0xF845620A03C7425B(&(iLocal_268[3]));
	}
	if (unk_0x724D816EA203A79E(iLocal_268[4]))
	{
		unk_0xF845620A03C7425B(&(iLocal_268[4]));
	}
	if (unk_0x724D816EA203A79E(iLocal_268[5]))
	{
		unk_0xF845620A03C7425B(&(iLocal_268[5]));
	}
	if (unk_0x724D816EA203A79E(iLocal_268[6]))
	{
		unk_0xF845620A03C7425B(&(iLocal_268[6]));
	}
	if (unk_0x724D816EA203A79E(iLocal_268[7]))
	{
		unk_0xF845620A03C7425B(&(iLocal_268[7]));
	}
	if (unk_0x724D816EA203A79E(iLocal_268[8]))
	{
		unk_0xF845620A03C7425B(&(iLocal_268[8]));
	}
	if (unk_0x724D816EA203A79E(iLocal_268[9]))
	{
		unk_0xF845620A03C7425B(&(iLocal_268[9]));
	}
	if (unk_0x724D816EA203A79E(iLocal_268[10]))
	{
		unk_0xF845620A03C7425B(&(iLocal_268[10]));
	}
	if (unk_0x724D816EA203A79E(iLocal_275[0]))
	{
		unk_0xF845620A03C7425B(&(iLocal_275[0]));
	}
	if (unk_0x724D816EA203A79E(iLocal_276[0]))
	{
		unk_0xF845620A03C7425B(&(iLocal_276[0]));
	}
	if (unk_0x724D816EA203A79E(iLocal_276[1]))
	{
		unk_0xF845620A03C7425B(&(iLocal_276[1]));
	}
	if (unk_0x724D816EA203A79E(iLocal_278))
	{
		unk_0xCF6040807CC0E4A5(&iLocal_278);
	}
	if (unk_0x724D816EA203A79E(iLocal_279))
	{
		if (!unk_0x5CAE759AE8219D20(iLocal_279))
		{
			unk_0x77815D3407C6700D(iLocal_279, true, 0);
		}
		unk_0xCF6040807CC0E4A5(&iLocal_279);
	}
	if (unk_0x724D816EA203A79E(iLocal_282))
	{
		unk_0xCF6040807CC0E4A5(&iLocal_282);
	}
	if (unk_0x724D816EA203A79E(iLocal_283))
	{
		unk_0xCF6040807CC0E4A5(&iLocal_283);
	}
	if (unk_0x724D816EA203A79E(iLocal_284))
	{
		unk_0xCF6040807CC0E4A5(&iLocal_284);
	}
	if (unk_0x724D816EA203A79E(iLocal_285))
	{
		unk_0xCF6040807CC0E4A5(&iLocal_285);
	}
	if (unk_0x724D816EA203A79E(iLocal_287))
	{
		unk_0xCF6040807CC0E4A5(&iLocal_287);
	}
	if (unk_0x724D816EA203A79E(iLocal_289))
	{
		unk_0xCF6040807CC0E4A5(&iLocal_289);
	}
	if (unk_0x724D816EA203A79E(iLocal_293[0]))
	{
		unk_0xCF6040807CC0E4A5(&(iLocal_293[0]));
	}
	if (unk_0x724D816EA203A79E(iLocal_293[1]))
	{
		unk_0xCF6040807CC0E4A5(&(iLocal_293[1]));
	}
	if (unk_0x724D816EA203A79E(iLocal_280[0]))
	{
		unk_0xCF6040807CC0E4A5(&(iLocal_280[0]));
	}
	if (unk_0x724D816EA203A79E(iLocal_280[1]))
	{
		unk_0xCF6040807CC0E4A5(&(iLocal_280[1]));
	}
	if (unk_0x724D816EA203A79E(iLocal_293[0]))
	{
		unk_0xCF6040807CC0E4A5(&(iLocal_293[0]));
	}
	if (unk_0x724D816EA203A79E(iLocal_293[1]))
	{
		unk_0xCF6040807CC0E4A5(&(iLocal_293[1]));
	}
	if (unk_0x724D816EA203A79E(iLocal_286[0]))
	{
		unk_0xCF6040807CC0E4A5(&(iLocal_286[0]));
	}
	if (unk_0x724D816EA203A79E(iLocal_286[1]))
	{
		unk_0xCF6040807CC0E4A5(&(iLocal_286[1]));
	}
	if (unk_0x724D816EA203A79E(iLocal_288[0]))
	{
		unk_0xCF6040807CC0E4A5(&(iLocal_288[0]));
	}
	if (unk_0x724D816EA203A79E(iLocal_281))
	{
		unk_0xCF6040807CC0E4A5(&iLocal_281);
	}
	if (unk_0x724D816EA203A79E(iLocal_294))
	{
		unk_0xA35241BCE4C1A24B(&iLocal_294);
	}
	if (unk_0x724D816EA203A79E(iLocal_295))
	{
		unk_0xA35241BCE4C1A24B(&iLocal_295);
	}
	if (unk_0x724D816EA203A79E(iLocal_296))
	{
		unk_0xA35241BCE4C1A24B(&iLocal_296);
	}
	unk_0xC32C243942383443();
	if (unk_0x144E80F5C46A6B75("SOL_3_DRIVE_TO_AIRPORT"))
	{
		unk_0xC1300D0F3A74E20B("SOL_3_DRIVE_TO_AIRPORT");
	}
	if (unk_0x144E80F5C46A6B75("SOL_3_MAIN_CHASE"))
	{
		unk_0xC1300D0F3A74E20B("SOL_3_MAIN_CHASE");
	}
	if (unk_0x144E80F5C46A6B75("SOL_3_CHOPPER_CAM"))
	{
		unk_0xC1300D0F3A74E20B("SOL_3_CHOPPER_CAM");
	}
	if (unk_0x144E80F5C46A6B75("SOL_3_HELI_TAKEOFF"))
	{
		unk_0xC1300D0F3A74E20B("SOL_3_HELI_TAKEOFF");
	}
	if (unk_0x144E80F5C46A6B75("SOL_3_EVENT_TANKER_CRASH"))
	{
		unk_0xC1300D0F3A74E20B("SOL_3_EVENT_TANKER_CRASH");
	}
	if (unk_0x144E80F5C46A6B75("SOL_3_CAR_JET_ENGINE"))
	{
		unk_0xC1300D0F3A74E20B("SOL_3_CAR_JET_ENGINE");
	}
	if (unk_0x144E80F5C46A6B75("SOL_3_PLANE_ON_FIRE"))
	{
		unk_0xC1300D0F3A74E20B("SOL_3_PLANE_ON_FIRE");
	}
	if (unk_0x144E80F5C46A6B75("SOL_3_EVENT_JET_LANDING"))
	{
		unk_0xC1300D0F3A74E20B("SOL_3_EVENT_JET_LANDING");
	}
	if (unk_0x144E80F5C46A6B75("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION"))
	{
		unk_0xC1300D0F3A74E20B("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION");
	}
	if (unk_0x144E80F5C46A6B75("SOL_3_ARRIVE_AT_HANGAR"))
	{
		unk_0xC1300D0F3A74E20B("SOL_3_ARRIVE_AT_HANGAR");
	}
	if (unk_0x144E80F5C46A6B75("SOL_3_ON_FOOT_CHASE"))
	{
		unk_0xC1300D0F3A74E20B("SOL_3_ON_FOOT_CHASE");
	}
	if (unk_0x144E80F5C46A6B75("SOL_3_LOSE_COPS"))
	{
		unk_0xC1300D0F3A74E20B("SOL_3_LOSE_COPS");
	}
	if (unk_0x144E80F5C46A6B75("SOL_3_LOSE_COPS_PLANE"))
	{
		unk_0xC1300D0F3A74E20B("SOL_3_LOSE_COPS_PLANE");
	}
	if (unk_0x144E80F5C46A6B75("SOL_3_LOSE_COPS_VEHICLE"))
	{
		unk_0xC1300D0F3A74E20B("SOL_3_LOSE_COPS_VEHICLE");
	}
	if (unk_0x144E80F5C46A6B75("SOL_3_ENGINE_DEATH_SCENE"))
	{
		unk_0xC1300D0F3A74E20B("SOL_3_ENGINE_DEATH_SCENE");
	}
	unk_0x38FF8CB6377D36F6(iLocal_253);
	unk_0x38FF8CB6377D36F6(iLocal_255);
	unk_0x38FF8CB6377D36F6(iLocal_256);
	unk_0x38FF8CB6377D36F6(iLocal_257);
	unk_0x38FF8CB6377D36F6(iLocal_258);
	unk_0x38FF8CB6377D36F6(iLocal_259);
	unk_0x38FF8CB6377D36F6(iLocal_260);
	unk_0x38FF8CB6377D36F6(iLocal_261);
	unk_0x38FF8CB6377D36F6(iLocal_254);
	func_207(&uLocal_28, 0, 0);
	if (unk_0xEF0E25DA0CB6E8FF(iLocal_301))
	{
		unk_0x4EC087603E1DEF9C(iLocal_301, 0);
	}
	if (unk_0xEF0E25DA0CB6E8FF(iLocal_302))
	{
		unk_0x4EC087603E1DEF9C(iLocal_302, 0);
	}
	if (unk_0xEF0E25DA0CB6E8FF(iLocal_303))
	{
		unk_0x4EC087603E1DEF9C(iLocal_303, 0);
	}
	func_186(1, 1);
	unk_0x4EA570997E107F35("misssolomon_3");
	unk_0x4EA570997E107F35("amb@world_human_clipboard@male@base");
	unk_0x4EA570997E107F35("missheist_agency3aig_lift_waitped_a");
	unk_0x4F5DAC981AF98536(1, "BB_CHASE");
	unk_0x4F5DAC981AF98536(2, "BB_Chase");
	unk_0x4F5DAC981AF98536(9, "BB_CHASE");
	unk_0x4F5DAC981AF98536(35, "BB_Chase");
	unk_0x4F5DAC981AF98536(45, "BB_Chase");
	unk_0x4F5DAC981AF98536(54, "BB_Chase");
	unk_0x4F5DAC981AF98536(55, "BB_Chase");
	unk_0x4F5DAC981AF98536(61, "BB_CHASE");
	unk_0x4F5DAC981AF98536(63, "BB_CHASE");
	unk_0x4F5DAC981AF98536(64, "BB_CHASE");
	unk_0x4F5DAC981AF98536(67, "BB_Chase");
	unk_0x4F5DAC981AF98536(68, "BB_CHASE");
	unk_0x4F5DAC981AF98536(69, "BB_Chase");
	unk_0xB0B0FE33F4F22679(&iLocal_305);
	unk_0x786556581D95BCB2("digitalOverlay");
}

void func_186(bool bParam0, bool bParam1)//Position - 0x11853
{
	if (!unk_0xF1734B55490E9045(&cLocal_185))
	{
		iLocal_91 = 0;
		func_206();
		unk_0x926FDA90094AA5FA(iLocal_194);
		unk_0x832ADB79A274D4E9(-9999f, -9999f, -9999f, 9999f, 9999f, 9999f, true);
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			unk_0xC26F3DBF9AB3C8CB(unk_0xB5CEFD608600A09F(), 1f);
			unk_0x635083B90B1A9C63(unk_0xB5CEFD608600A09F(), 1);
			unk_0x6E52C7765A0F4382(true);
		}
		if (bLocal_107)
		{
			unk_0x2CA123B0622F495C(func_205());
		}
		unk_0x2CA123B0622F495C(func_204());
		unk_0x2CA123B0622F495C(func_203());
		unk_0x2CA123B0622F495C(func_202());
		if (!unk_0x17FAADF9916EF741() && !bParam0)
		{
			func_201();
			func_200();
			func_197();
		}
		else
		{
			func_193();
			func_192();
		}
		if (bParam1)
		{
			func_187(0);
		}
	}
}

void func_187(bool bParam0)//Position - 0x1190F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 49)
	{
		func_188(iVar0, bParam0);
		iVar0++;
	}
}

void func_188(int iParam0, bool bParam1)//Position - 0x11932
{
	if (bParam1)
	{
		if (!func_73(iParam0, 2, 1))
		{
			func_191(iParam0, 2, 1);
		}
	}
	else if (func_73(iParam0, 2, 1))
	{
		func_189(iParam0, 2, 1);
	}
}

void func_189(int iParam0, int iParam1, bool bParam2)//Position - 0x11969
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0x7CB6FD92BE491AD9(&(Global_16B4F.f_531[iParam0]), iParam1);
	}
	else if (unk_0x7AF0088ABFA713B6())
	{
		if (func_75() == 0)
		{
			iVar0 = func_50(func_74(iParam0), -1, 0);
			unk_0x7CB6FD92BE491AD9(&iVar0, iParam1);
			func_190(func_74(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_29C[iParam0]), iParam1);
	}
}

void func_190(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x119D2
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_51(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, iParam3);
	}
}

void func_191(int iParam0, int iParam1, bool bParam2)//Position - 0x11A02
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0xF0059F27F7BB6680(&(Global_16B4F.f_531[iParam0]), iParam1);
	}
	else if (unk_0x7AF0088ABFA713B6())
	{
		if (func_75() == 0)
		{
			iVar0 = func_50(func_74(iParam0), -1, 0);
			unk_0xF0059F27F7BB6680(&iVar0, iParam1);
			func_190(func_74(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xF0059F27F7BB6680(&(Global_19B04.f_29C[iParam0]), iParam1);
	}
}

void func_192()//Position - 0x11A6B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 175)
	{
		iLocal_201[iVar0] = 0;
		vLocal_173[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_109[iVar0] = 0f;
		fLocal_110[iVar0] = 0f;
		fLocal_111[iVar0] = 0f;
		fLocal_112[iVar0] = 0f;
		iLocal_149[iVar0] = 0;
		fLocal_113[iVar0] = 0f;
		iLocal_150[iVar0] = 0;
		iLocal_195[iVar0] = 0;
		iLocal_151[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		iLocal_202[iVar0] = 0;
		iVar0++;
	}
	iLocal_156 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		iLocal_203[iVar0] = 0;
		vLocal_174[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_124[iVar0] = 0f;
		fLocal_125[iVar0] = 0f;
		fLocal_126[iVar0] = 0f;
		fLocal_127[iVar0] = 0f;
		iLocal_155[iVar0] = 0;
		iLocal_196[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iLocal_205[iVar0] = 0;
		iVar0++;
	}
	iLocal_158 = 0;
	iVar0 = 0;
	while (iVar0 < 35)
	{
		iLocal_204[iVar0] = 0;
		vLocal_175[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_118[iVar0] = 0f;
		fLocal_119[iVar0] = 0f;
		fLocal_120[iVar0] = 0f;
		fLocal_121[iVar0] = 0f;
		iLocal_152[iVar0] = 0;
		fLocal_122[iVar0] = 0f;
		iLocal_153[iVar0] = 0;
		iLocal_197[iVar0] = 0;
		iLocal_154[iVar0] = 0;
		iVar0++;
	}
	iLocal_157 = 0;
	iLocal_160 = 0;
	iLocal_163 = 0;
	iLocal_164 = 0;
	iLocal_165 = 0;
}

void func_193()//Position - 0x11BF8
{
	func_196();
	func_195();
	func_194();
}

void func_194()//Position - 0x11C0C
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (unk_0x724D816EA203A79E(iLocal_204[iVar0]))
		{
			if (unk_0xE59B7F5A03335350(iLocal_204[iVar0], 0))
			{
				if (unk_0xB34E411B0A4BF096(iLocal_204[iVar0]))
				{
					unk_0xD87F0F9CDF39238A(iLocal_204[iVar0]);
				}
				iVar1 = unk_0x3187EF5798B5D209(iLocal_204[iVar0], -1, 0);
				if (unk_0x724D816EA203A79E(iVar1) && iVar1 != unk_0xBC25C936A095B5BA())
				{
					if (unk_0x5CAE759AE8219D20(iVar1))
					{
						unk_0xF845620A03C7425B(&iVar1);
					}
				}
			}
			if (unk_0x5CAE759AE8219D20(iLocal_204[iVar0]))
			{
				unk_0xCF6040807CC0E4A5(&(iLocal_204[iVar0]));
			}
		}
		iLocal_153[iVar0] = 0;
		if (!bLocal_87 && !bLocal_100)
		{
			if (iLocal_152[iVar0] > 0)
			{
				unk_0x4F5DAC981AF98536(iLocal_152[iVar0], &cLocal_185);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!iLocal_197[iVar0] == 0)
		{
			unk_0x2CA123B0622F495C(iLocal_197[iVar0]);
		}
		iVar0++;
	}
}

void func_195()//Position - 0x11D03
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0x724D816EA203A79E(iLocal_203[iVar0]))
		{
			if (unk_0x5CAE759AE8219D20(iLocal_203[iVar0]))
			{
				unk_0xCF6040807CC0E4A5(&(iLocal_203[iVar0]));
			}
		}
		iLocal_155[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!iLocal_196[iVar0] == 0)
		{
			unk_0x2CA123B0622F495C(iLocal_196[iVar0]);
		}
		iVar0++;
	}
	iLocal_161 = 0;
	iLocal_158 = 0;
}

void func_196()//Position - 0x11D80
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 175)
	{
		if (unk_0x724D816EA203A79E(iLocal_201[iVar0]))
		{
			if (unk_0xE59B7F5A03335350(iLocal_201[iVar0], 0))
			{
				if (unk_0xB34E411B0A4BF096(iLocal_201[iVar0]))
				{
					unk_0xD87F0F9CDF39238A(iLocal_201[iVar0]);
				}
				iVar1 = unk_0x3187EF5798B5D209(iLocal_201[iVar0], -1, 0);
				if (unk_0x724D816EA203A79E(iVar1) && iVar1 != unk_0xBC25C936A095B5BA())
				{
					if (unk_0x5CAE759AE8219D20(iVar1))
					{
						unk_0xF845620A03C7425B(&iVar1);
					}
				}
			}
			if (unk_0x5CAE759AE8219D20(iLocal_201[iVar0]))
			{
				unk_0xCF6040807CC0E4A5(&(iLocal_201[iVar0]));
			}
		}
		if (!bLocal_87 && !bLocal_100)
		{
			if (iLocal_149[iVar0] > 0)
			{
				unk_0x4F5DAC981AF98536(iLocal_149[iVar0], &cLocal_185);
			}
		}
		iLocal_150[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 175)
	{
		if (!iLocal_195[iVar0] == 0)
		{
			unk_0x2CA123B0622F495C(iLocal_195[iVar0]);
		}
		iVar0++;
	}
	iLocal_160 = 0;
	iLocal_156 = 0;
}

void func_197()//Position - 0x11E7F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (unk_0x724D816EA203A79E(iLocal_204[iVar0]))
		{
			if (unk_0xE59B7F5A03335350(iLocal_204[iVar0], 0))
			{
				if (unk_0xB34E411B0A4BF096(iLocal_204[iVar0]))
				{
					unk_0xD87F0F9CDF39238A(iLocal_204[iVar0]);
				}
			}
			func_199(iLocal_204[iVar0]);
			func_198(iLocal_204[iVar0]);
		}
		iLocal_153[iVar0] = 0;
		iLocal_154[iVar0] = 0;
		if (!bLocal_87 && !bLocal_100)
		{
			if (iLocal_152[iVar0] > 0)
			{
				unk_0x4F5DAC981AF98536(iLocal_152[iVar0], &cLocal_185);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!iLocal_197[iVar0] == 0)
		{
			unk_0x2CA123B0622F495C(iLocal_197[iVar0]);
		}
		iVar0++;
	}
	iLocal_162 = 0;
}

void func_198(int iParam0)//Position - 0x11F4C
{
	if (unk_0x724D816EA203A79E(iParam0))
	{
		unk_0x1E7A09C1710FB071(&iParam0);
	}
}

void func_199(int iParam0)//Position - 0x11F63
{
	float fVar0;
	int iVar1;
	
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		iVar1 = unk_0x3187EF5798B5D209(iParam0, -1, 0);
		if (!unk_0x36CEFBE9B745A58D(iVar1))
		{
			if (!iVar1 == unk_0xBC25C936A095B5BA())
			{
				fVar0 = unk_0x8910237449BB6F79(iParam0);
				if (fVar0 < 8f)
				{
					fVar0 = 8f;
				}
				if (fVar0 > 62.9f)
				{
					fVar0 = 62.9f;
				}
				unk_0x488EB206498BC561(iVar1, iParam0, 0, 1, fVar0, 786603, 5f, 5f, 1);
				unk_0xABA7AE40608505F2(iVar1, 8192, true);
				if (bLocal_108)
				{
					unk_0xABA7AE40608505F2(iVar1, 65536, true);
					unk_0xABA7AE40608505F2(iVar1, 2, false);
				}
				unk_0x91629AC1E1F78419(iVar1, 6, false);
			}
		}
	}
}

void func_200()//Position - 0x11FFD
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0x724D816EA203A79E(iLocal_203[iVar0]))
		{
			if (!unk_0x1D403DFADBC2DE3C(iLocal_203[iVar0], 0))
			{
				unk_0xD434A01DEA38A939(iLocal_203[iVar0], true, 0);
			}
			func_198(iLocal_203[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!iLocal_196[iVar0] == 0)
		{
			unk_0x2CA123B0622F495C(iLocal_196[iVar0]);
		}
		iVar0++;
	}
	iLocal_161 = 0;
	iLocal_158 = 0;
}

void func_201()//Position - 0x12081
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 175)
	{
		if (unk_0x724D816EA203A79E(iLocal_201[iVar0]))
		{
			if (!unk_0x1D403DFADBC2DE3C(iLocal_201[iVar0], 0))
			{
				unk_0xD434A01DEA38A939(iLocal_201[iVar0], true, 0);
			}
			if (unk_0xE59B7F5A03335350(iLocal_201[iVar0], 0))
			{
				if (unk_0xB34E411B0A4BF096(iLocal_201[iVar0]))
				{
					unk_0xD87F0F9CDF39238A(iLocal_201[iVar0]);
				}
			}
			func_199(iLocal_201[iVar0]);
			func_198(iLocal_201[iVar0]);
		}
		iLocal_150[iVar0] = 0;
		iLocal_151[iVar0] = 0;
		if (!bLocal_87 && !bLocal_100)
		{
			if (iLocal_149[iVar0] > 0)
			{
				unk_0x4F5DAC981AF98536(iLocal_149[iVar0], &cLocal_185);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 175)
	{
		if (!iLocal_195[iVar0] == 0)
		{
			unk_0x2CA123B0622F495C(iLocal_195[iVar0]);
		}
		iVar0++;
	}
	iLocal_160 = 0;
	iLocal_156 = 0;
}

int func_202()//Position - 0x1216F
{
	return joaat("s_m_y_cop_01");
}

int func_203()//Position - 0x1217C
{
	return joaat("police");
}

int func_204()//Position - 0x12189
{
	return joaat("sultan");
}

int func_205()//Position - 0x12196
{
	if (iLocal_198 == 0)
	{
		return joaat("a_m_y_business_01");
	}
	return iLocal_198;
}

void func_206()//Position - 0x121B3
{
	unk_0xF7D229BABED096C4();
	unk_0x2525D113E78EFBAA(-1);
	unk_0x35FE2210421A8E6E(1);
	unk_0x0631F3E6D895E7E5(1);
	unk_0x598D851D7D0D2BA3(1f);
	unk_0xA7F63A62AD048372(3);
	unk_0x1A8FF13FA68ECF72(3);
}

void func_207(var uParam0, int iParam1, int iParam2)//Position - 0x121DD
{
	char* sVar0;
	
	if (unk_0x7AF0088ABFA713B6())
	{
		if (unk_0xFA30DFD0084E92FE(Global_267214.f_11E0, 26))
		{
			return;
		}
	}
	if (unk_0xBFFAD293E2DA992B())
	{
		unk_0xF04F2EB4128A4367(iParam2);
		unk_0x1A058EB0D1ACEC78("FocusIn");
		unk_0xC1300D0F3A74E20B("HINT_CAM_SCENE");
		if (uParam0->f_B)
		{
			unk_0x9216004FAC08D1DC("FocusOut", 0, 0);
			unk_0xC4BA30B532FE260F(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_B = 0;
		}
	}
	unk_0x4AED68BFACFB14CB(true);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0xEAEFBBEC1AEA464B(sVar0))
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0xEAEFBBEC1AEA464B(uParam0->f_3))
	{
		if (func_208(uParam0->f_3))
		{
			unk_0x7456702622C62EA0(1);
		}
	}
	if (!unk_0xEAEFBBEC1AEA464B(sVar0))
	{
		if (func_208(sVar0))
		{
			unk_0x7456702622C62EA0(1);
		}
	}
}

int func_208(char* sParam0)//Position - 0x122BA
{
	unk_0xF07D20149ECBC61E(sParam0);
	return unk_0xA66DBDA0A072514A(0);
}

void func_209()//Position - 0x122CD
{
	Global_394A = 0;
	func_210();
}

void func_210()//Position - 0x122DD
{
	unk_0x5C7DC611411E2CF9();
	Global_41AB = 0;
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x1E08809A5041F85B(false);
		Global_3DB8 = 6;
	}
}

void func_211()//Position - 0x122FE
{
	Global_394A = 0;
	func_212();
}

void func_212()//Position - 0x1230E
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

void func_213()//Position - 0x12365
{
	if (unk_0x2DA8CA50A72528FB(iLocal_297))
	{
		unk_0x07B8ECB35A4ED3AC(&iLocal_297);
	}
	if (unk_0x2DA8CA50A72528FB(iLocal_298))
	{
		unk_0x07B8ECB35A4ED3AC(&iLocal_298);
	}
	if (unk_0x2DA8CA50A72528FB(iLocal_299))
	{
		unk_0x07B8ECB35A4ED3AC(&iLocal_299);
	}
	if (unk_0x2DA8CA50A72528FB(iLocal_300))
	{
		unk_0x07B8ECB35A4ED3AC(&iLocal_300);
	}
}

void func_214()//Position - 0x123B1
{
	if (iLocal_486 == 0)
	{
		if (unk_0x724D816EA203A79E(iLocal_266))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_266))
			{
				if (unk_0xD9C1758D86688CEA(iLocal_266, unk_0xBC25C936A095B5BA(), 0))
				{
					iLocal_486 = 1;
				}
			}
		}
	}
	if (iLocal_486 == 0)
	{
		if (iLocal_456 == 0)
		{
			if (unk_0x724D816EA203A79E(iLocal_266))
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_266))
				{
					if (unk_0x724D816EA203A79E(iLocal_264))
					{
						if (!unk_0x36CEFBE9B745A58D(iLocal_264))
						{
							if (unk_0x4FB6F74D29923289(iLocal_264))
							{
								if (unk_0x1B2D2A4BABD674C5(iLocal_264) > 18)
								{
									if (unk_0x724D816EA203A79E(iLocal_296))
									{
										if (unk_0xE7E55F7532DEE345(iLocal_296))
										{
											unk_0x17175087F2DB6AC8(iLocal_296, 1, true);
										}
									}
									iLocal_252 = unk_0xD0D858E538FD01C3(-932.847f, -2978.498f, 13.946f, 0f, 0f, 16.56f, 2);
									unk_0xB62398E536F695FC(iLocal_266, iLocal_252, "misssolomon_3", "_action", 1000f, -1000f, 4, 0, 1148846080, 0);
									unk_0x56F2E1B5599188FA(iLocal_266, unk_0xBC25C936A095B5BA(), 9000, 1024, 3);
									iLocal_456 = 1;
									iLocal_457 = 0;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_456 == 1 && iLocal_458 == 0)
		{
			if (unk_0x724D816EA203A79E(iLocal_266))
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_266))
				{
					if (unk_0x77FC50899603581D(iLocal_252))
					{
						if (!iLocal_457)
						{
							if (unk_0x8FD30584EB38411B(iLocal_252) > 0.25f)
							{
								func_17(&uLocal_490, 4, iLocal_266, "HangerWorker", 0, 1);
								func_215(iLocal_266, "T1M4_BCAA", "HangerWorker", 11);
								iLocal_457 = 1;
							}
						}
						if (unk_0x8FD30584EB38411B(iLocal_252) > 0.99f)
						{
							iLocal_252 = unk_0xD0D858E538FD01C3(-932.847f, -2978.498f, 13.946f, 0f, 0f, 16.56f, 2);
							unk_0xB62398E536F695FC(iLocal_266, iLocal_252, "misssolomon_3", "_react_to_death", 1000f, -1.5f, 3, 16, 1148846080, 0);
							iLocal_458 = 1;
						}
					}
				}
			}
		}
		if (iLocal_458 == 1 && iLocal_461 == 0)
		{
			if (unk_0x724D816EA203A79E(iLocal_266))
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_266))
				{
					if (unk_0x77FC50899603581D(iLocal_252))
					{
						if (unk_0x619CCA1A6FD0BC87(iLocal_266, unk_0x56BEECB328B6D29D("ENDS_IN_RUN")))
						{
							unk_0xC5A6DFE2B8987B17(&iLocal_304);
							unk_0x03A13CB10449EA1B(0, -1115154469, 0);
							unk_0xDF14F570C0180463(0, -1001.9f, -2954.3f, 13.1f, 3f, -1, 40000f, 3f);
							unk_0x5558ED6D4A2DEC93(0, unk_0xBC25C936A095B5BA(), 200f, -1, 0, 0);
							unk_0x535008C596714F9E(iLocal_304);
							unk_0xA8E6405305C0D7DF(iLocal_266, iLocal_304);
							unk_0x02DAF06EA4F08219(&iLocal_304);
							unk_0x3E2B7D349B5735D3(iLocal_266, -1115154469, false, 0, 0);
							iLocal_461 = 1;
						}
					}
				}
			}
		}
	}
	else if (iLocal_461 == 0)
	{
		if (unk_0x724D816EA203A79E(iLocal_266))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_266))
			{
				unk_0xC5A6DFE2B8987B17(&iLocal_304);
				unk_0xDF14F570C0180463(0, -1001.9f, -2954.3f, 13.1f, 3f, -1, 40000f, 3f);
				unk_0x5558ED6D4A2DEC93(0, unk_0xBC25C936A095B5BA(), 200f, -1, 0, 0);
				unk_0x535008C596714F9E(iLocal_304);
				unk_0xA8E6405305C0D7DF(iLocal_266, iLocal_304);
				unk_0x02DAF06EA4F08219(&iLocal_304);
				iLocal_461 = 1;
			}
		}
	}
}

void func_215(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x12691
{
	unk_0x7E80A36CD8BDF4D1(iParam0, sParam1, sParam2, func_15(iParam3), 0);
}

void func_216()//Position - 0x126AA
{
	if (iLocal_223 == 0)
	{
		iLocal_225 = 0;
		iLocal_253 = unk_0x2F079D1FC5F6CB99();
		unk_0x04DD7A558FCF2C34("TRV_4_MCS_2", 8);
		unk_0xF243B7A14FCFD0F4(joaat("prop_jet_bloodsplat_01"));
		if (unk_0x1E8349F219AC5AF9("Trev4_5"))
		{
			unk_0xC881DDFA077826BB("Trev4_5", 0, 0.5f, 1f);
		}
		if (!unk_0x726D9204B160D23E())
		{
			unk_0x829FA4611BD56B44(800);
		}
		iLocal_223 = 1;
	}
	if (iLocal_223 == 1)
	{
		switch (iLocal_225)
		{
			case 0:
				while (!unk_0xDC9E16E99286F31D())
				{
					SYSTEM::WAIT(0);
				}
				unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 0);
				if (!unk_0x36CEFBE9B745A58D(iLocal_264))
				{
					unk_0x538BB037E00A3AD9(iLocal_264, "Molly", 1, joaat("ig_molly"), 0);
				}
				if (!unk_0x36CEFBE9B745A58D(iLocal_266))
				{
					unk_0x538BB037E00A3AD9(iLocal_266, "Airworker_Tackle_trevor", 0, joaat("s_m_y_airworker"), 0);
				}
				if (unk_0xE59B7F5A03335350(iLocal_284, 0))
				{
					unk_0x538BB037E00A3AD9(iLocal_284, "JET_TRV4", 0, joaat("jet"), 0);
				}
				func_217(1, 1, 1, 0, 0);
				unk_0x3857DADBD6EC8A54("TRV4_SUCK_CS");
				unk_0x93B1CB6BD50812C7(0);
				iLocal_225++;
				break;
			
			case 1:
				func_122();
				if (unk_0x3F3252765FE36DA8("JET_TRV4", joaat("jet")))
				{
					if (unk_0xE59B7F5A03335350(iLocal_284, 0))
					{
						if (!unk_0x1D403DFADBC2DE3C(iLocal_284, 0))
						{
							unk_0x346478B12F69D4E3(iLocal_284, true);
						}
					}
				}
				if (unk_0x3F3252765FE36DA8("Airworker_Tackle_trevor", joaat("s_m_y_airworker")))
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_266))
					{
						unk_0x2E35C4FA5F0ED22F(iLocal_266, true);
						unk_0x5558ED6D4A2DEC93(iLocal_266, unk_0xBC25C936A095B5BA(), 150f, -1, 0, 0);
						unk_0x1E5C2A1EAB944289(iLocal_266, false);
						unk_0xB105531EDD3DE51B(iLocal_266, true);
						unk_0x06D93FD5E4D394CF(iLocal_266, false, false, false, false, false, false, 0, false);
					}
				}
				if (unk_0x3F3252765FE36DA8("Michael", 0))
				{
					func_122();
					func_120(1);
				}
				if (!unk_0x102F1A3BD4B68933())
				{
					iLocal_336 = 1;
					if (!unk_0x724D816EA203A79E(iLocal_294))
					{
						if (unk_0xD6513D668481290A(joaat("prop_jet_bloodsplat_01")))
						{
							iLocal_294 = unk_0xB6896943DA475493(joaat("prop_jet_bloodsplat_01"), -946.4231f, -2979.826f, 12.9264f, true, true, false);
							unk_0x784C605D172817C8(iLocal_294, 0f, 0f, -121.5948f, 2, 1);
							unk_0xC239B590ECA50DD0(iLocal_294, 0f, 0f, 0.8729f, -0.4879f);
							unk_0x2CA123B0622F495C(joaat("prop_jet_bloodsplat_01"));
						}
					}
					unk_0xD5E53AA0828339DA(0);
					func_217(0, 1, 1, 0, 0);
					unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
					if (!unk_0x7B2E29350659BE8E(unk_0xBC25C936A095B5BA(), 0, 2))
					{
						unk_0x7A535CE1F001F3FE(unk_0xBC25C936A095B5BA(), joaat("weapon_smg"), 150, true, true);
					}
					iLocal_223 = 2;
				}
				break;
			}
	}
	if (iLocal_223 == 2)
	{
		iLocal_223 = 0;
		iLocal_222 = 8;
	}
}

void func_217(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x12908
{
	if (bParam0)
	{
		unk_0x0D2E9062E966BE4F(unk_0xB5CEFD608600A09F());
		unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 1);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 1);
		func_225(1);
		unk_0x32FF237D69EB5489();
		unk_0x3169E2C5E6A096BC();
		if (Global_389D.f_1 > 3)
		{
			if (unk_0x58E7DDFF8D17A82A())
			{
				unk_0x1E08809A5041F85B(false);
			}
			if (!func_224())
			{
				Global_389D.f_1 = 3;
			}
			Global_3DB8 = 5;
		}
		func_223(1, iParam3, iParam2, 0);
		Global_DAA5 = 1;
		Global_10ABB = 1;
		Global_11540 = 1;
	}
	else
	{
		func_225(0);
		unk_0xCB50D125C355ED9C();
		Global_DAA5 = 0;
		if (bParam1)
		{
			unk_0x7FF4F08CAB3344B1();
		}
		unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 0);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 0);
		func_223(0, iParam3, iParam2, 0);
		if (unk_0x7AF0088ABFA713B6())
		{
			if ((((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_221(unk_0xB5CEFD608600A09F())) && !func_219(unk_0xB5CEFD608600A09F(), 0)) && !func_218()) && !bParam4)
			{
				unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), false);
			}
		}
		else if ((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_221(unk_0xB5CEFD608600A09F())) && !bParam4)
		{
			unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), false);
		}
		Global_11540 = 0;
	}
}

bool func_218()//Position - 0x12A31
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_27.f_12, 14);
}

bool func_219(int iParam0, int iParam1)//Position - 0x12A4E
{
	bool bVar0;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		bVar0 = func_220(-1, 0) == 8;
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

int func_220(int iParam0, bool bParam1)//Position - 0x12A99
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_52();
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

int func_221(int iParam0)//Position - 0x12ADA
{
	if (func_219(iParam0, 0))
	{
		return 1;
	}
	if (func_222())
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

bool func_222()//Position - 0x12B1C
{
	return unk_0xFA30DFD0084E92FE(Global_240006, 3);
}

int func_223(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x12B2D
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x8ACB0C3FACC09467())
	{
		if (unk_0xB34A6828EBD4A1D8() != iParam0 && iParam2)
		{
			unk_0x22506029183A78EC(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_224()//Position - 0x12B60
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_225(int iParam0)//Position - 0x12B87
{
	if (iParam0 == 1)
	{
		unk_0xF0059F27F7BB6680(&Global_93B, 13);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&Global_93B, 13);
	}
}

void func_226()//Position - 0x12BAA
{
	if (iLocal_442 == 0)
	{
		if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -926.0258f, -2958.615f, 12.46467f, -930.6525f, -2956.061f, 16.45945f, 2.75f, 0, true, 0))
		{
			iLocal_442 = 1;
		}
	}
	else if (iLocal_446 == 0)
	{
		unk_0xBBC4195AD74D153D(0, 22, 1);
		unk_0xBBC4195AD74D153D(0, 25, 1);
		if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -938.5178f, -2972.022f, 12.46715f, -934.1034f, -2974.613f, 15.96715f, 5.25f, 0, true, 0))
		{
			unk_0xDBA0F5674ACCE43C(unk_0xBC25C936A095B5BA(), 0f);
		}
		else
		{
			if (fLocal_324 < 1f)
			{
				fLocal_324 = 1f;
			}
			fLocal_324 = (fLocal_324 * 0.975f);
			unk_0xDBA0F5674ACCE43C(unk_0xBC25C936A095B5BA(), fLocal_324);
		}
	}
	if (iLocal_223 > 0)
	{
		func_214();
	}
	if (iLocal_223 == 0)
	{
		iLocal_337 = 0;
		iLocal_338 = 0;
		iLocal_339 = 0;
		iLocal_340 = 0;
		iLocal_342 = 0;
		iLocal_358 = 0;
		iLocal_420 = 0;
		iLocal_421 = 0;
		iLocal_422 = 0;
		iLocal_428 = 0;
		iLocal_443 = 0;
		iLocal_444 = 0;
		iLocal_445 = 0;
		iLocal_446 = 0;
		iLocal_447[0] = 0;
		iLocal_448[0] = 0;
		iLocal_447[1] = 0;
		iLocal_448[1] = 0;
		iLocal_447[2] = 0;
		iLocal_456 = 0;
		iLocal_458 = 0;
		iLocal_459 = 0;
		iLocal_460 = 0;
		iLocal_461 = 0;
		iLocal_464 = 0;
		iLocal_484 = 0;
		iLocal_486 = 0;
		iLocal_487[3] = 0;
		unk_0xF243B7A14FCFD0F4(joaat("prop_jet_bloodsplat_01"));
		unk_0x394EE83EEDDF9A95("V_60_HangerRm");
		unk_0xAEC867D0DBB7AFEB(5);
		unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 3, 0);
		unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
		if (unk_0x724D816EA203A79E(iLocal_264))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_264))
			{
				if (unk_0x4FB6F74D29923289(iLocal_264))
				{
					unk_0x1E13970C5D4719E3(iLocal_264, 3f, 1);
				}
			}
		}
		if (!unk_0x726D9204B160D23E())
		{
			unk_0x829FA4611BD56B44(800);
		}
		iLocal_223 = 1;
	}
	if (iLocal_223 == 1)
	{
		if (iLocal_428 == 0)
		{
			if (unk_0x284F2ACE6839D3C0("Trv_4_747", false, -1))
			{
				iLocal_428 = 1;
			}
		}
		if (iLocal_420 == 0)
		{
			if (unk_0x724D816EA203A79E(iLocal_264))
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_264))
				{
					if (unk_0x4FB6F74D29923289(iLocal_264))
					{
						if (unk_0x1B2D2A4BABD674C5(iLocal_264) > 20)
						{
							if (unk_0x724D816EA203A79E(iLocal_284))
							{
								if (unk_0xE59B7F5A03335350(iLocal_284, 0))
								{
									func_231(&iLocal_284);
									unk_0x10B5C0C7337B8420(iLocal_253, "Trevor_4_747_Jet_Engine", -937.77f, -2981.36f, 15.44f, 0, 0, 0, 0);
									unk_0x2D655AA68FA1736B(iLocal_284, true, false, 0);
									iLocal_420 = 1;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_443 == 0)
		{
			if (unk_0x724D816EA203A79E(iLocal_264))
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_264))
				{
					if (unk_0x4FB6F74D29923289(iLocal_264))
					{
						if (unk_0x1B2D2A4BABD674C5(iLocal_264) > 23)
						{
							unk_0xA4E856A8CD53B8DF(iLocal_264);
							if (unk_0x724D816EA203A79E(iLocal_284))
							{
								if (unk_0xE59B7F5A03335350(iLocal_284, 0))
								{
									if (!unk_0x144E80F5C46A6B75("SOL_3_ENGINE_DEATH_SCENE"))
									{
										unk_0xD6423910AAD8A379("SOL_3_ENGINE_DEATH_SCENE");
									}
									iLocal_251 = unk_0xD0D858E538FD01C3(0f, 0f, 0f, 0f, 0f, 0f, 2);
									unk_0x510CBEAEC917268A(iLocal_251, iLocal_284, unk_0xB5B60A04E1654409(iLocal_284, "chassis_Control"));
									unk_0xB62398E536F695FC(iLocal_264, iLocal_251, "MISSSOLOMON_3", "molly_death", 1.5f, -8f, 4, 0, 1148846080, 0);
									unk_0x69D4A898629B0BDA(iLocal_251, true);
									iLocal_443 = 1;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_444 == 0)
		{
			if (unk_0x724D816EA203A79E(iLocal_264))
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_264))
				{
					if (iLocal_443 == 1)
					{
						vLocal_318 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
						if (vLocal_318.y < -2965f)
						{
							unk_0x1DE00CFB4CAEB978(iLocal_264, 0f, 0f, 0f, 1, 6000, 1000, 2000, 0);
							unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 0);
							unk_0x85DB484A637CEAB9(unk_0xBC25C936A095B5BA(), iLocal_264, 0);
							unk_0x56F2E1B5599188FA(unk_0xBC25C936A095B5BA(), iLocal_264, 4000, 48, 4);
							iLocal_444 = 1;
						}
					}
				}
			}
		}
		else if (iLocal_445 == 0)
		{
			if (!unk_0x724D816EA203A79E(iLocal_264))
			{
				unk_0xF04F2EB4128A4367(0);
				unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
				if (unk_0x724D816EA203A79E(iLocal_268[0]))
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_268[0]))
					{
						unk_0xA4E856A8CD53B8DF(iLocal_268[0]);
						unk_0x2E35C4FA5F0ED22F(iLocal_268[0], false);
					}
				}
				iLocal_445 = 1;
			}
		}
		if (iLocal_422 == 0)
		{
			if (unk_0x724D816EA203A79E(iLocal_264))
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_264))
				{
					if (unk_0x724D816EA203A79E(iLocal_295))
					{
						if (unk_0xB6A16B5E7EB81F9B(iLocal_295, iLocal_264))
						{
							if (unk_0x96044E39418AAF17(iLocal_264, "MISSSOLOMON_3", "molly_death", 3))
							{
								if (unk_0x8FD30584EB38411B(iLocal_251) > 0.59f)
								{
									unk_0x17175087F2DB6AC8(iLocal_295, 1, true);
									if (unk_0x2DA8CA50A72528FB(iLocal_297))
									{
										unk_0x07B8ECB35A4ED3AC(&iLocal_297);
									}
									if (!unk_0x2DA8CA50A72528FB(iLocal_300))
									{
										func_215(iLocal_264, "HIGH_FALL", "WAVELOAD_PAIN_FEMALE", 11);
										if (unk_0x144E80F5C46A6B75("SOL_3_ON_FOOT_CHASE"))
										{
											unk_0xC1300D0F3A74E20B("SOL_3_ON_FOOT_CHASE");
										}
										if (!unk_0x144E80F5C46A6B75("SOL_3_LOSE_COPS"))
										{
											unk_0xD6423910AAD8A379("SOL_3_LOSE_COPS");
										}
										SYSTEM::SETTIMERB(0);
										iLocal_422 = 1;
									}
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_446 == 0)
		{
			if (iLocal_422 == 1 && SYSTEM::TIMERB() > 2500)
			{
				iLocal_300 = func_228(iLocal_295);
				func_20("SOL3_GOD1", 7500, -1);
				SYSTEM::SETTIMERB(0);
				iLocal_446 = 1;
			}
		}
		if (iLocal_487[3] == 0)
		{
			if (iLocal_446 == 1 && iLocal_445 == 1)
			{
				if (SYSTEM::TIMERB() > 2500)
				{
					unk_0x1D1C393C7689E5A6(10f, 1073741824, 3);
					iLocal_487[3] = 1;
				}
			}
		}
		if (iLocal_421 == 0)
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_264))
			{
				if (unk_0x96044E39418AAF17(iLocal_264, "MISSSOLOMON_3", "molly_death", 3))
				{
					if (unk_0x8FD30584EB38411B(iLocal_251) > 0.89f)
					{
						if (unk_0x724D816EA203A79E(iLocal_284))
						{
							if (unk_0xE59B7F5A03335350(iLocal_284, 0))
							{
								unk_0xF845620A03C7425B(&iLocal_264);
								unk_0xF3E9344C2BE59F6E("scr_trev4_747_blood_impact", iLocal_284, -12.5793f, 12.2f, -7.09421f, 0f, 0f, 0f, 1f, 0, 0, 0);
								iLocal_673 = unk_0xD0F8470A5BFEECF7("scr_trev4_747_exhaust_plane_misfire", iLocal_284, -12.6323f, 8.1153f, -7.0876f, 0f, 0f, 0f, 1f, 0, 0, 0);
								unk_0x10B5C0C7337B8420(iLocal_254, "Trevor_4_747_Man_Sucked_In", -938.6f, -2984.13f, 15.47f, 0, 0, 0, 0);
								iLocal_234 = unk_0x105601648511CC64();
								iLocal_421 = 1;
							}
						}
					}
				}
			}
		}
		else
		{
			if (unk_0x105601648511CC64() > iLocal_234 + 574)
			{
				if (!unk_0x724D816EA203A79E(iLocal_294))
				{
					if (unk_0xD6513D668481290A(joaat("prop_jet_bloodsplat_01")))
					{
						iLocal_294 = unk_0xB6896943DA475493(joaat("prop_jet_bloodsplat_01"), -946.4231f, -2979.826f, 12.9264f, true, true, false);
						unk_0x784C605D172817C8(iLocal_294, 0f, 0f, -121.5948f, 2, 1);
						unk_0xC239B590ECA50DD0(iLocal_294, 0f, 0f, 0.8729f, -0.4879f);
						unk_0x2CA123B0622F495C(joaat("prop_jet_bloodsplat_01"));
					}
				}
				if (iLocal_484 == 0)
				{
					if (unk_0x724D816EA203A79E(iLocal_284))
					{
						if (unk_0xE59B7F5A03335350(iLocal_284, 0))
						{
							unk_0xF3E9344C2BE59F6E("scr_trev4_747_engine_debris", iLocal_284, -12.6286f, 6.85353f, -7.13622f, 180f, 0f, 0f, 1f, 0, 0, 0);
							unk_0x2D655AA68FA1736B(iLocal_284, false, false, 0);
							func_227();
							unk_0x38FF8CB6377D36F6(iLocal_253);
							iLocal_484 = 1;
						}
					}
				}
			}
			if (iLocal_447[0] == 0)
			{
				if (unk_0x105601648511CC64() > iLocal_234 + 300)
				{
					if (unk_0x2F1B39E315395385(iLocal_673))
					{
						unk_0x2CA8D9DC16C6AF09(iLocal_673, 0);
					}
					iLocal_447[0] = 1;
				}
			}
			else if (iLocal_448[0] == 0)
			{
				if (unk_0x105601648511CC64() > iLocal_234 + 700)
				{
					if (unk_0x724D816EA203A79E(iLocal_284))
					{
						if (unk_0xE59B7F5A03335350(iLocal_284, 0))
						{
							iLocal_673 = unk_0xD0F8470A5BFEECF7("scr_trev4_747_exhaust_plane_misfire", iLocal_284, -12.6323f, 8.1153f, -7.0876f, 0f, 0f, 0f, 1f, 0, 0, 0);
							iLocal_448[0] = 1;
						}
					}
				}
			}
			else if (iLocal_447[1] == 0)
			{
				if (unk_0x105601648511CC64() > iLocal_234 + 1000)
				{
					if (unk_0x2F1B39E315395385(iLocal_673))
					{
						unk_0x2CA8D9DC16C6AF09(iLocal_673, 0);
					}
					iLocal_447[1] = 1;
				}
			}
			else if (iLocal_448[1] == 0)
			{
				if (unk_0x105601648511CC64() > iLocal_234 + 1400)
				{
					if (unk_0x724D816EA203A79E(iLocal_284))
					{
						if (unk_0xE59B7F5A03335350(iLocal_284, 0))
						{
							iLocal_673 = unk_0xD0F8470A5BFEECF7("scr_trev4_747_exhaust_plane_misfire", iLocal_284, -12.6323f, 8.1153f, -7.0876f, 0f, 0f, 0f, 1f, 0, 0, 0);
							iLocal_672 = unk_0xD0F8470A5BFEECF7("scr_trev4_747_engine_damage", iLocal_284, -11.956f, 10.528f, -7.657f, 0f, 2f, 0f, 1065353216, 0, 0, 0);
							iLocal_448[1] = 1;
						}
					}
				}
			}
			else if (iLocal_447[2] == 0)
			{
				if (unk_0x105601648511CC64() > iLocal_234 + 3500)
				{
					if (unk_0x2F1B39E315395385(iLocal_673))
					{
						unk_0x2CA8D9DC16C6AF09(iLocal_673, 0);
					}
					if (unk_0x724D816EA203A79E(iLocal_284))
					{
						if (unk_0xE59B7F5A03335350(iLocal_284, 0))
						{
							unk_0x06D93FD5E4D394CF(iLocal_284, false, false, false, false, false, false, 0, false);
						}
					}
					iLocal_447[2] = 1;
				}
			}
		}
		if (iLocal_459 == 0)
		{
			if (iLocal_422 == 1)
			{
				if (iLocal_460 == 0)
				{
					if (!unk_0x2A348A3A98B80B13(iLocal_295))
					{
						iLocal_244 = unk_0x105601648511CC64();
						iLocal_460 = 1;
					}
				}
				else if (unk_0x105601648511CC64() > iLocal_244 + 2000)
				{
					unk_0x346478B12F69D4E3(iLocal_295, true);
					iLocal_459 = 1;
				}
			}
		}
		if (iLocal_464 == 0)
		{
			if (!unk_0x724D816EA203A79E(iLocal_264))
			{
				if (unk_0x724D816EA203A79E(iLocal_284))
				{
					unk_0x346478B12F69D4E3(iLocal_284, false);
					iLocal_464 = 1;
				}
			}
		}
		if (unk_0x724D816EA203A79E(iLocal_295))
		{
			if (unk_0x2DA8CA50A72528FB(iLocal_300))
			{
				if (func_16(unk_0xBC25C936A095B5BA(), iLocal_295, 1) < 1.5f && !unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
				{
					unk_0xC4BA30B532FE260F(-1, "PICK_UP", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					unk_0x07B8ECB35A4ED3AC(&iLocal_300);
					unk_0xA35241BCE4C1A24B(&iLocal_295);
					func_122();
					iLocal_223 = 0;
					iLocal_222 = 8;
				}
			}
		}
	}
}

void func_227()//Position - 0x134A8
{
	if (unk_0x2F1B39E315395385(iLocal_668))
	{
		unk_0x2CA8D9DC16C6AF09(iLocal_668, 0);
	}
	if (unk_0x2F1B39E315395385(iLocal_669))
	{
		unk_0x2CA8D9DC16C6AF09(iLocal_669, 0);
	}
	if (unk_0x2F1B39E315395385(iLocal_670))
	{
		unk_0x2CA8D9DC16C6AF09(iLocal_670, 0);
	}
	if (unk_0x2F1B39E315395385(iLocal_671))
	{
		unk_0x2CA8D9DC16C6AF09(iLocal_671, 0);
	}
}

int func_228(int iParam0)//Position - 0x134F8
{
	return func_229(iParam0, 1, 0);
}

int func_229(int iParam0, bool bParam1, bool bParam2)//Position - 0x13508
{
	int iVar0;
	
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x511FE22BCF5353CD(iParam0);
	if (unk_0xD27AC0E9B78CFDD7(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(iVar0, func_230(unk_0x7AF0088ABFA713B6(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xF9C2945DB5BAB4BF(iVar0, bParam1);
		}
		else
		{
			unk_0x0D5352939CC40C16(iVar0, 2);
		}
	}
	else if (unk_0x386592AF38881675(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(iVar0, func_230(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
		unk_0xF9C2945DB5BAB4BF(iVar0, bParam1);
	}
	else if (unk_0xB12D030810E8447D(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(iVar0, func_230(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_230(bool bParam0, float fParam1, float fParam2)//Position - 0x135AC
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_231(int iParam0)//Position - 0x135C3
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	
	if (!unk_0x1D403DFADBC2DE3C(*iParam0, 0))
	{
		vVar0 = { 22.6057f, -2.10018f, -6.22841f };
		vVar1 = { 12.6349f, 7.89711f, -7.09742f };
		vVar2 = { -22.5879f, -2.2931f, -6.22542f };
		vVar3 = { -12.6675f, 8.15519f, -6.98833f };
		vVar4 = { 180f, 0f, 0f };
		iLocal_668 = unk_0xD0F8470A5BFEECF7("scr_trev4_747_engine_heathaze", *iParam0, vVar0, vVar4, 1065353216, 0, 0, 0);
		iLocal_669 = unk_0xD0F8470A5BFEECF7("scr_trev4_747_engine_heathaze", *iParam0, vVar1, vVar4, 1065353216, 0, 0, 0);
		iLocal_670 = unk_0xD0F8470A5BFEECF7("scr_trev4_747_engine_heathaze", *iParam0, vVar2, vVar4, 1065353216, 0, 0, 0);
		iLocal_671 = unk_0xD0F8470A5BFEECF7("scr_trev4_747_engine_heathaze", *iParam0, vVar3, vVar4, 1065353216, 0, 0, 0);
	}
}

void func_232()//Position - 0x136A6
{
	if (unk_0x724D816EA203A79E(iLocal_264))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_264))
		{
			if (unk_0x4FB6F74D29923289(iLocal_264))
			{
				if (func_16(unk_0xBC25C936A095B5BA(), iLocal_264, 1) < 17f)
				{
					unk_0x1E13970C5D4719E3(iLocal_264, 3f, 1);
				}
				if (func_16(unk_0xBC25C936A095B5BA(), iLocal_264, 1) < 22f && func_16(unk_0xBC25C936A095B5BA(), iLocal_264, 1) > 17f)
				{
					unk_0x1E13970C5D4719E3(iLocal_264, 2f, 1);
				}
				if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), -921.7f, -2946.4f, 13.4f, true) > 8f && !unk_0xD1DC4B08247A4317(iLocal_264))
				{
					if (func_16(unk_0xBC25C936A095B5BA(), iLocal_264, 1) > 22f)
					{
						unk_0x1E13970C5D4719E3(iLocal_264, 1f, 1);
					}
				}
				else if (func_16(unk_0xBC25C936A095B5BA(), iLocal_264, 1) > 22f)
				{
					unk_0x1E13970C5D4719E3(iLocal_264, 2f, 1);
				}
			}
		}
	}
	if (iLocal_223 > 0)
	{
		if (iLocal_442 == 0)
		{
			if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -926.0258f, -2958.615f, 12.46467f, -930.6525f, -2956.061f, 16.45945f, 2.75f, 0, true, 0))
			{
				iLocal_442 = 1;
			}
		}
		else
		{
			unk_0xBBC4195AD74D153D(0, 22, 1);
			unk_0xBBC4195AD74D153D(0, 25, 1);
			if (fLocal_324 < 1f)
			{
				fLocal_324 = 1f;
			}
			fLocal_324 = (fLocal_324 * 0.98f);
			unk_0xDBA0F5674ACCE43C(unk_0xBC25C936A095B5BA(), fLocal_324);
		}
		if (!unk_0x724D816EA203A79E(iLocal_284))
		{
			unk_0xF243B7A14FCFD0F4(joaat("jet"));
			if (unk_0xD6513D668481290A(joaat("jet")))
			{
				iLocal_284 = unk_0x61C05BF08A1E0EFE(joaat("jet"), -952.1345f, -2990.269f, 12.9451f, 240.7726f, true, true, false);
				unk_0x7170EF3CEB4D0224(iLocal_284, 2);
				unk_0x8300C56586249382(iLocal_284, 0);
				unk_0x346478B12F69D4E3(iLocal_284, true);
				unk_0x06D93FD5E4D394CF(iLocal_284, true, true, true, true, true, false, 0, false);
				unk_0x2CA123B0622F495C(joaat("jet"));
				unk_0xAF9FC4463EA3090B(iLocal_284, 500);
			}
		}
		if (!unk_0x724D816EA203A79E(iLocal_266))
		{
			unk_0xF243B7A14FCFD0F4(joaat("s_m_y_airworker"));
			unk_0x522053D86D6E1C7A("misssolomon_3");
			unk_0xF243B7A14FCFD0F4(joaat("p_amb_clipboard_01"));
			if ((unk_0xD6513D668481290A(joaat("s_m_y_airworker")) && unk_0xF9E082857622D91E("misssolomon_3")) && unk_0xD6513D668481290A(joaat("p_amb_clipboard_01")))
			{
				iLocal_266 = unk_0x01B3635C3E8EDD81(26, joaat("s_m_y_airworker"), -932.1812f, -2967.947f, 12.9451f, 170.7182f, 1, true);
				unk_0x06D93FD5E4D394CF(iLocal_266, false, false, false, false, false, false, 0, false);
				unk_0xB105531EDD3DE51B(iLocal_266, false);
				unk_0x2E35C4FA5F0ED22F(iLocal_266, true);
				func_17(&uLocal_490, 4, iLocal_266, "HangerWorker", 0, 1);
				iLocal_296 = unk_0xB6896943DA475493(joaat("p_amb_clipboard_01"), -932.1812f, -2967.947f, 12.9451f, true, true, false);
				unk_0x5DBE04849460E608(iLocal_296, iLocal_266, unk_0xFA18E720A39243D0(iLocal_264, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				iLocal_252 = unk_0xD0D858E538FD01C3(-932.847f, -2978.498f, 13.946f, 0f, 0f, 16.56f, 2);
				unk_0xB62398E536F695FC(iLocal_266, iLocal_252, "misssolomon_3", "_start_loop", 1000f, -8f, 68, 0, 1148846080, 0);
				unk_0x2CA123B0622F495C(joaat("s_m_y_airworker"));
				unk_0x2CA123B0622F495C(joaat("p_amb_clipboard_01"));
			}
		}
		if (!unk_0x724D816EA203A79E(iLocal_268[0]))
		{
			unk_0xF243B7A14FCFD0F4(joaat("s_m_y_cop_01"));
			if (unk_0xD6513D668481290A(joaat("s_m_y_cop_01")))
			{
				iLocal_268[0] = unk_0x01B3635C3E8EDD81(6, joaat("s_m_y_cop_01"), -969.06f, -2955.186f, 12.945f, 241.1703f, 1, true);
				unk_0x7A535CE1F001F3FE(iLocal_268[0], joaat("weapon_pistol"), 1000, true, true);
				unk_0xFC3C88E2313FA926(iLocal_268[0], 20);
				unk_0xB71D41C0310C93DE(iLocal_268[0], true, 1);
				unk_0x2E35C4FA5F0ED22F(iLocal_268[0], true);
				unk_0x57D65255D3D3B6A7(iLocal_268[0], unk_0xBC25C936A095B5BA(), -1, 1);
				func_124(iLocal_268[0], 0);
			}
		}
		if (!unk_0x724D816EA203A79E(iLocal_285))
		{
			unk_0xF243B7A14FCFD0F4(joaat("shamal"));
			if (unk_0xD6513D668481290A(joaat("shamal")))
			{
				iLocal_285 = unk_0x61C05BF08A1E0EFE(joaat("shamal"), -968.3718f, -2952.298f, 12.9451f, 114.9439f, true, true, false);
				unk_0x1C5BDB4E5D257D63(iLocal_285, 0, 0, 1);
				unk_0xF0A40F19AAB79E88(iLocal_285, 1084227584);
				unk_0x2CA123B0622F495C(joaat("shamal"));
				unk_0x65E471E4A2D56226(iLocal_285, 2000, 0);
			}
		}
		if (unk_0x724D816EA203A79E(iLocal_285))
		{
			if (unk_0xE59B7F5A03335350(iLocal_285, 0))
			{
				if (func_16(unk_0xBC25C936A095B5BA(), iLocal_285, 1) > 5f)
				{
					unk_0x1C5BDB4E5D257D63(iLocal_285, 0, 0, 0);
				}
			}
		}
	}
	if (iLocal_223 == 0)
	{
		func_25(2, "STAGE_ON_FOOT_CHASE", 0, 0, 0, 1);
		if (iLocal_343 == 1)
		{
			if (!unk_0x17FAADF9916EF741())
			{
				unk_0x7A41D32A383895D8(0);
			}
			func_117();
			func_17(&uLocal_490, 0, unk_0xBC25C936A095B5BA(), "MICHAEL", 0, 1);
			iLocal_343 = 0;
		}
		iLocal_400 = 0;
		iLocal_401 = 0;
		iLocal_442 = 0;
		fLocal_324 = 3f;
		iLocal_227 = 0;
		func_186(0, 1);
		unk_0x4F5DAC981AF98536(45, "BB_CHASE");
		unk_0x4F5DAC981AF98536(35, "BB_CHASE");
		unk_0x4F5DAC981AF98536(2, "BB_CHASE");
		unk_0x4F5DAC981AF98536(54, "BB_CHASE");
		unk_0x4F5DAC981AF98536(1, "BB_CHASE");
		unk_0x4F5DAC981AF98536(9, "BB_CHASE");
		unk_0x4F5DAC981AF98536(61, "BB_CHASE");
		unk_0x4F5DAC981AF98536(63, "BB_CHASE");
		unk_0x4F5DAC981AF98536(64, "BB_CHASE");
		unk_0xB0B0FE33F4F22679(&iLocal_305);
		unk_0x786556581D95BCB2("digitalOverlay");
		if (unk_0x724D816EA203A79E(iLocal_278))
		{
			unk_0x38E412DB4A45B900(iLocal_278, 0);
			unk_0x1E7A09C1710FB071(&iLocal_278);
		}
		if (unk_0x724D816EA203A79E(iLocal_287))
		{
			unk_0xCF6040807CC0E4A5(&iLocal_287);
		}
		if (unk_0x724D816EA203A79E(iLocal_276[0]))
		{
			unk_0xF845620A03C7425B(&(iLocal_276[0]));
		}
		if (unk_0x724D816EA203A79E(iLocal_280[0]))
		{
			unk_0xCF6040807CC0E4A5(&(iLocal_280[0]));
		}
		unk_0x439BFE94B7ECD8C0(0);
		unk_0x6C23D8FD3FB29BAA(1);
		if (!unk_0x36CEFBE9B745A58D(iLocal_264))
		{
			if (!unk_0x2DA8CA50A72528FB(iLocal_297))
			{
				iLocal_297 = unk_0x511FE22BCF5353CD(iLocal_264);
				unk_0xF9C2945DB5BAB4BF(iLocal_297, true);
			}
		}
		unk_0x9B90420B04C07704("PoliceScannerDisabled", 1);
		if (iLocal_363[2] == 1)
		{
			if (!unk_0x1BD5EE88F32433CD(iLocal_261))
			{
				unk_0x38FF8CB6377D36F6(iLocal_261);
			}
			unk_0x26D344275839A25E(iLocal_261);
			iLocal_390 = 0;
			iLocal_363[2] = 0;
		}
		unk_0xAEC867D0DBB7AFEB(5);
		unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 3, 0);
		unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
		unk_0x3857DADBD6EC8A54("TRV4_RUN");
		if (!unk_0x724D816EA203A79E(iLocal_284))
		{
			unk_0xF243B7A14FCFD0F4(joaat("jet"));
		}
		if (!unk_0x724D816EA203A79E(iLocal_266))
		{
			unk_0xF243B7A14FCFD0F4(joaat("s_m_y_airworker"));
		}
		unk_0xF243B7A14FCFD0F4(joaat("shamal"));
		unk_0xF243B7A14FCFD0F4(joaat("s_m_y_cop_01"));
		unk_0xF243B7A14FCFD0F4(joaat("police3"));
		unk_0xF243B7A14FCFD0F4(joaat("p_amb_clipboard_01"));
		unk_0x1B2A7C8188ADBE04(68, "BB_Chase");
		unk_0x1B2A7C8188ADBE04(69, "BB_Chase");
		unk_0x522053D86D6E1C7A("misssolomon_3");
		SYSTEM::SETTIMERA(0);
		if (unk_0x1E8349F219AC5AF9("Trev4_5"))
		{
			unk_0xC881DDFA077826BB("Trev4_5", 1, 1f, 1f);
		}
		if (unk_0x17FAADF9916EF741())
		{
			if (!func_24())
			{
				unk_0x8B6B50EADA01F251(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true));
			}
			func_21(0, -1, 1);
			func_20("TRV4_CHASE1", 7500, 1);
		}
		if (!unk_0x726D9204B160D23E())
		{
			unk_0x829FA4611BD56B44(800);
		}
		iLocal_223 = 1;
	}
	if (iLocal_223 == 1)
	{
		iLocal_223 = 2;
	}
	if (iLocal_223 == 2)
	{
		if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), -880.365f, -2942.26f, 14f, 9.55f, 15.69f, 5f, false, true, 0))
		{
			func_233("TRV4_FAIL1");
		}
		if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), -945.725f, -2893.15f, 14f, 4.5f, 9.56f, 5f, false, true, 0))
		{
			func_233("TRV4_FAIL1");
		}
		if (SYSTEM::TIMERA() > 15000)
		{
			func_233("TRV4_FAIL1");
		}
		if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), -932.1196f, -2934.317f, 12.9448f, 2f, 2f, 2f, false, true, 0))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_264))
			{
				if (!unk_0x4FB6F74D29923289(iLocal_264))
				{
					unk_0xB0C1A00D86375366(iLocal_264, "BB_MOLLY_2", 10, 4, -1);
					unk_0xE896C0AD02364F2A(iLocal_264, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, 0, 0, 0, 0);
				}
			}
			SYSTEM::SETTIMERA(0);
			iLocal_223 = 3;
		}
	}
	if (iLocal_223 == 3)
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_264))
		{
			if (unk_0x4FB6F74D29923289(iLocal_264))
			{
				if (unk_0x1B2D2A4BABD674C5(iLocal_264) > 18 && iLocal_405 == 0)
				{
					iLocal_350 = 0;
					unk_0x1E13970C5D4719E3(iLocal_264, 3f, 1);
					iLocal_223 = 0;
					iLocal_222 = 6;
				}
			}
		}
		if (SYSTEM::TIMERA() > 50000)
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_264))
			{
				unk_0x49D46EE47C9CCB66(iLocal_264);
				unk_0x641B19E156645A92(iLocal_264, -932.5f, -2964.1f, 13.4f, 1, false, 0, 1);
				unk_0xB0C1A00D86375366(iLocal_264, "BB_MOLLY_2", 18, 4, -1);
				unk_0xE896C0AD02364F2A(iLocal_264, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, 0, 0, 0, 0);
				iLocal_350 = 0;
				iLocal_223 = 0;
				iLocal_222 = 6;
			}
		}
	}
}

void func_233(char* sParam0)//Position - 0x13F03
{
	if (iLocal_405 == 0)
	{
		if (iLocal_334)
		{
			func_223(0, 1, 1, 0);
			unk_0x348665177DBFB93B(iLocal_301, false);
			unk_0x062C9995BFD27B2A(false, false, 3000, 1, 0, 0);
			unk_0x43F06392C4EF25E0(true);
			if (unk_0x144E80F5C46A6B75("SOL_3_CHOPPER_CAM"))
			{
				unk_0xC1300D0F3A74E20B("SOL_3_CHOPPER_CAM");
			}
			unk_0x38FF8CB6377D36F6(iLocal_261);
			func_243();
			unk_0x6C23D8FD3FB29BAA(1);
			iLocal_363[2] = 0;
			iLocal_334 = 0;
		}
		unk_0x3857DADBD6EC8A54("TRV4_FAIL");
		sLocal_489 = sParam0;
		unk_0xEB233A3B7635D2AC();
		func_211();
		func_209();
		func_234(sLocal_489);
		iLocal_405 = 1;
	}
}

void func_234(char* sParam0)//Position - 0x13F8C
{
	func_242(sParam0);
	func_235(0);
}

void func_235(int iParam0)//Position - 0x13F9F
{
	int iVar0;
	
	if (Global_19B04.f_2360 || func_423(0))
	{
		iVar0 = func_8();
		if (!func_236(iVar0))
		{
			return;
		}
		unk_0xF0059F27F7BB6680(&(Global_1478C[iVar0 /*5*/].f_1), 5);
		Global_16B3F = iParam0;
	}
}

int func_236(int iParam0)//Position - 0x13FE4
{
	int iVar0;
	int iVar1;
	
	func_241();
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		unk_0x31E433A1F2A666D9(5000);
	}
	iVar0 = Global_1478C[iParam0 /*5*/];
	iVar1 = Global_1164F.f_6D[iVar0 /*4*/];
	func_240(iVar1, 1);
	unk_0xD0D466F17C0F30DB(unk_0xB5CEFD608600A09F());
	unk_0xD50A43D7C495F078(unk_0xB5CEFD608600A09F());
	func_237(&(Global_19B04.f_932.f_21B), iVar1);
	if (Global_154EB == Global_16B40)
	{
		Global_19B04.f_2360.f_14A[iVar1 /*6*/].f_1++;
	}
	if (!unk_0xFA30DFD0084E92FE(Global_147B0[iVar1 /*34*/].f_F, 1))
	{
		if (!unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			unk_0xC63520BF0B3FB162(0);
		}
	}
	Global_19B04.f_2360.f_14A[iVar1 /*6*/].f_2++;
	Global_154EB = Global_16B40;
	if (iParam0 == -1)
	{
		if (Global_19B04.f_2360)
		{
		}
		return 0;
	}
	if (unk_0xFA30DFD0084E92FE(Global_1478C[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (unk_0xFA30DFD0084E92FE(Global_1478C[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_237(var uParam0, int iParam1)//Position - 0x140FC
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar3;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_19B04.f_4848[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0xFA30DFD0084E92FE(Global_19B04.f_2360.f_63.f_DB[0], 9))
		{
		}
		else
		{
			vVar2 = { 0f, 0f, 0f };
			fVar3 = 0f;
			if (!func_239(Global_19B04.f_4848[iVar0], &vVar2, &fVar3))
			{
				Global_19B04.f_4848[iVar0] = 318;
				func_238(&(uParam0->f_8E4[iVar0]));
				uParam0->f_8E8[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_8F2[iVar0] = 0f;
				uParam0->f_8F6[iVar0] = 0;
				uParam0->f_8FA[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_904[iVar0] = 0;
				Global_1617A[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_1617A[iVar0 /*29*/].f_9 = 0f;
				Global_1617A[iVar0 /*29*/].f_C = 0f;
				Global_1617A[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_1617A[iVar0 /*29*/].f_A = 0f;
				Global_1617A[iVar0 /*29*/].f_D = 0f;
				Global_1617A[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_1617A[iVar0 /*29*/].f_B = 0f;
				Global_1617A[iVar0 /*29*/].f_E = 0f;
				Global_1617A[iVar0 /*29*/].f_11 = { 0f, 0f, 0f };
				Global_1617A[iVar0 /*29*/].f_1A = 0f;
				Global_1617A[iVar0 /*29*/].f_14 = { 0f, 0f, 0f };
				Global_1617A[iVar0 /*29*/].f_1B = 0f;
				Global_1617A[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_1617A[iVar0 /*29*/].f_1C = 0f;
			}
		}
		iVar0++;
	}
}

void func_238(var uParam0)//Position - 0x142C5
{
	*uParam0 = -15;
}

int func_239(int iParam0, var uParam1, float fParam2)//Position - 0x142D3
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_239(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_239(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_240(int iParam0, bool bParam1)//Position - 0x14C42
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_1542D[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_1542D[iParam0 /*2*/] = 0;
	}
}

void func_241()//Position - 0x14C80
{
	Global_16B3E = 1;
	if (unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1))
	{
		if (unk_0xF1734B55490E9045(&Global_1162A))
		{
			switch (func_104())
			{
				case 0:
					StringCopy(&Global_1162A, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_1162A, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_1162A, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_1162E, "", 16);
		}
		Global_16B3E = 0;
	}
	else if (!unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0xF1734B55490E9045(&Global_1162A))
		{
			switch (func_104())
			{
				case 0:
					StringCopy(&Global_1162A, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_1162A, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_1162A, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_1162E, "", 16);
		}
		Global_16B3E = 0;
		unk_0xF0059F27F7BB6680(&(Global_16B1B.f_14), 25);
	}
}

void func_242(char* sParam0)//Position - 0x14D6F
{
	if (!unk_0xF1734B55490E9045(sParam0))
	{
		if (unk_0x5D29F91E567588E2(sParam0) <= 16)
		{
			StringCopy(&Global_1162A, sParam0, 16);
			StringCopy(&Global_1162E, "", 16);
			if (unk_0xD31A96FC53460BE2())
			{
				unk_0x632B3D2D98BE2D44();
			}
		}
	}
}

void func_243()//Position - 0x14DAF
{
	Global_DAA6 = 0;
}

void func_244()//Position - 0x14DBB
{
	if (!unk_0x724D816EA203A79E(iLocal_284))
	{
		if (unk_0x724D816EA203A79E(iLocal_278))
		{
			if (unk_0xE59B7F5A03335350(iLocal_278, 0))
			{
				if (unk_0xB34E411B0A4BF096(iLocal_278))
				{
					if (unk_0x5B80643EF917B728(iLocal_278) > 30000f)
					{
						unk_0xF243B7A14FCFD0F4(joaat("jet"));
						if (unk_0xD6513D668481290A(joaat("jet")))
						{
							iLocal_284 = unk_0x61C05BF08A1E0EFE(joaat("jet"), -952.1345f, -2990.269f, 12.9451f, 240.7726f, true, true, false);
							unk_0x7170EF3CEB4D0224(iLocal_284, 2);
							unk_0x8300C56586249382(iLocal_284, 0);
							unk_0x346478B12F69D4E3(iLocal_284, true);
							unk_0x06D93FD5E4D394CF(iLocal_284, true, true, true, true, true, false, 0, false);
							unk_0x2CA123B0622F495C(joaat("jet"));
							unk_0xAF9FC4463EA3090B(iLocal_284, 500);
						}
					}
				}
			}
		}
	}
	func_338();
	if (unk_0x2DA8CA50A72528FB(iLocal_297))
	{
		func_337(iLocal_297, iLocal_264, 300f, 0.9f, 0);
	}
	if (iLocal_223 == 0)
	{
		if (iLocal_224 < 2)
		{
			unk_0xF4A30F1D854C959D(unk_0xBC25C936A095B5BA(), 0);
		}
		func_336();
		func_304();
		if (iLocal_395 == 0)
		{
			if (unk_0x724D816EA203A79E(iLocal_204[20]))
			{
				if (unk_0xE59B7F5A03335350(iLocal_204[20], 0))
				{
					unk_0x2D655AA68FA1736B(iLocal_204[20], true, true, 0);
					unk_0x251A179731E0D207(iLocal_204[20]);
					iLocal_395 = 1;
				}
			}
		}
		func_303();
		func_302();
		if (iLocal_347 == 0)
		{
			if (unk_0x724D816EA203A79E(iLocal_278))
			{
				if (unk_0xE59B7F5A03335350(iLocal_278, 0))
				{
					if (unk_0xB34E411B0A4BF096(iLocal_278))
					{
						func_301(iLocal_301, iLocal_287, "BB_Chase", 1);
						iLocal_347 = 1;
					}
				}
			}
		}
		else if (unk_0xE59B7F5A03335350(iLocal_278, 0))
		{
			if (unk_0xB34E411B0A4BF096(iLocal_278))
			{
				func_300(iLocal_301, iLocal_287, fLocal_321);
				unk_0x9DF315A9EFFF87AC(iLocal_301, 45f);
			}
		}
		if (iLocal_335 == 0)
		{
			if (unk_0xE59B7F5A03335350(iLocal_278, 0))
			{
				if (unk_0xB34E411B0A4BF096(iLocal_278))
				{
					if ((unk_0x5B80643EF917B728(iLocal_278) > 15000f && unk_0x5B80643EF917B728(iLocal_278) < 125464f) && func_292(1, 0, 0))
					{
						iLocal_350 = 1;
						if (iLocal_405 == 0)
						{
							unk_0x7456702622C62EA0(1);
							func_291("TRV4_HELP1", -1);
							func_286(1);
							func_207(&uLocal_28, 0, 0);
							unk_0x4AED68BFACFB14CB(false);
							iLocal_335 = 1;
						}
					}
				}
			}
		}
		else if (unk_0xE59B7F5A03335350(iLocal_278, 0))
		{
			if (unk_0xB34E411B0A4BF096(iLocal_278))
			{
				if (unk_0xA7F138B5B1AB2CF6(iLocal_305) && func_183(1, "BB_Chase"))
				{
					if (((unk_0x5B80643EF917B728(iLocal_278) > 15000f && unk_0x5B80643EF917B728(iLocal_278) < 125464f) && iLocal_405 == 0) && unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
					{
						func_264();
					}
					if (unk_0x5B80643EF917B728(iLocal_278) > 125464f || !unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
					{
						if (iLocal_334)
						{
							unk_0x7456702622C62EA0(1);
							func_223(0, 1, 1, 0);
							unk_0x348665177DBFB93B(iLocal_301, false);
							unk_0x062C9995BFD27B2A(false, false, 3000, 1, 0, 0);
							unk_0x43F06392C4EF25E0(true);
							if (unk_0x144E80F5C46A6B75("SOL_3_CHOPPER_CAM"))
							{
								unk_0xC1300D0F3A74E20B("SOL_3_CHOPPER_CAM");
							}
							unk_0x38FF8CB6377D36F6(iLocal_261);
							func_243();
							unk_0x6C23D8FD3FB29BAA(1);
							iLocal_363[2] = 0;
							iLocal_334 = 0;
						}
					}
				}
			}
		}
		switch (iLocal_224)
		{
			case 0:
				if (iLocal_487[0] == 0)
				{
					if (unk_0xE59B7F5A03335350(iLocal_278, 0))
					{
						if (unk_0xB34E411B0A4BF096(iLocal_278))
						{
							if (unk_0x5B80643EF917B728(iLocal_278) > 44255f && unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), -1187.3f, -2847.8f, 13.6f, true) < 100f)
							{
								unk_0x1D1C393C7689E5A6(10f, 1073741824, 3);
								iLocal_487[0] = 1;
							}
						}
					}
				}
				if (iLocal_487[1] == 0)
				{
					if (unk_0xE59B7F5A03335350(iLocal_278, 0))
					{
						if (unk_0xB34E411B0A4BF096(iLocal_278))
						{
							if (unk_0x5B80643EF917B728(iLocal_278) > 52875f && unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), -1349f, -2720f, 14f, true) < 50f)
							{
								unk_0x1D1C393C7689E5A6(6f, 1073741824, 3);
								iLocal_487[1] = 1;
							}
						}
					}
				}
				if (iLocal_487[2] == 0)
				{
					if (unk_0xE59B7F5A03335350(iLocal_278, 0))
					{
						if (unk_0xB34E411B0A4BF096(iLocal_278))
						{
							if (unk_0x5B80643EF917B728(iLocal_278) > 87085f && unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), -1507f, -2520f, 14f, true) < 70f)
							{
								unk_0x1D1C393C7689E5A6(10f, 1073741824, 3);
								iLocal_487[2] = 1;
							}
						}
					}
				}
				func_263();
				func_262();
				if (!unk_0x144E80F5C46A6B75("SOL_3_PLANE_ON_FIRE"))
				{
					if (unk_0x724D816EA203A79E(iLocal_278))
					{
						if (unk_0xE59B7F5A03335350(iLocal_278, 0))
						{
							if (unk_0xB34E411B0A4BF096(iLocal_278))
							{
								if (unk_0x5B80643EF917B728(iLocal_278) > 64280f && unk_0x5B80643EF917B728(iLocal_278) < 72000f)
								{
									if (unk_0xF0F2FC9DE291567F(-1149.6f, -2323.7f, 22.5f, unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), true) < 130f)
									{
										unk_0xD6423910AAD8A379("SOL_3_PLANE_ON_FIRE");
									}
								}
							}
						}
					}
				}
				else if (unk_0x724D816EA203A79E(iLocal_278))
				{
					if (unk_0xE59B7F5A03335350(iLocal_278, 0))
					{
						if (unk_0xB34E411B0A4BF096(iLocal_278))
						{
							if (unk_0x5B80643EF917B728(iLocal_278) > 72500f)
							{
								unk_0xC1300D0F3A74E20B("SOL_3_PLANE_ON_FIRE");
							}
						}
					}
				}
				if (!unk_0x144E80F5C46A6B75("SOL_3_EVENT_JET_LANDING"))
				{
					if (unk_0x724D816EA203A79E(iLocal_278))
					{
						if (unk_0xE59B7F5A03335350(iLocal_278, 0))
						{
							if (unk_0xB34E411B0A4BF096(iLocal_278))
							{
								if (unk_0x5B80643EF917B728(iLocal_278) > 78000f && unk_0x5B80643EF917B728(iLocal_278) < 85000f)
								{
									unk_0xD6423910AAD8A379("SOL_3_EVENT_JET_LANDING");
								}
							}
						}
					}
				}
				else if (unk_0x724D816EA203A79E(iLocal_278))
				{
					if (unk_0xE59B7F5A03335350(iLocal_278, 0))
					{
						if (unk_0xB34E411B0A4BF096(iLocal_278))
						{
							if (unk_0x5B80643EF917B728(iLocal_278) > 85500f)
							{
								unk_0xC1300D0F3A74E20B("SOL_3_EVENT_JET_LANDING");
							}
						}
					}
				}
				if (!unk_0x144E80F5C46A6B75("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION"))
				{
					if (unk_0x724D816EA203A79E(iLocal_278))
					{
						if (unk_0xE59B7F5A03335350(iLocal_278, 0))
						{
							if (unk_0xB34E411B0A4BF096(iLocal_278))
							{
								if (unk_0x5B80643EF917B728(iLocal_278) > 100000f && unk_0x5B80643EF917B728(iLocal_278) < 107000f)
								{
									unk_0xD6423910AAD8A379("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION");
								}
							}
						}
					}
				}
				else if (unk_0x724D816EA203A79E(iLocal_278))
				{
					if (unk_0xE59B7F5A03335350(iLocal_278, 0))
					{
						if (unk_0xB34E411B0A4BF096(iLocal_278))
						{
							if (unk_0x5B80643EF917B728(iLocal_278) > 107500f)
							{
								unk_0xC1300D0F3A74E20B("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION");
							}
						}
					}
				}
				if (unk_0x724D816EA203A79E(iLocal_278))
				{
					if (unk_0xE59B7F5A03335350(iLocal_278, 0))
					{
						if (unk_0xB34E411B0A4BF096(iLocal_278))
						{
							if (unk_0x5B80643EF917B728(iLocal_278) < 10000f)
							{
								func_261();
							}
						}
					}
				}
				if (unk_0xE59B7F5A03335350(iLocal_278, 0))
				{
					if (unk_0xB34E411B0A4BF096(iLocal_278))
					{
						if (unk_0x5B80643EF917B728(iLocal_278) < 30000f)
						{
							func_260(iLocal_278, unk_0x5B80643EF917B728(iLocal_278));
						}
					}
				}
				if (iLocal_408 == 0)
				{
					if (unk_0xE59B7F5A03335350(iLocal_278, 0))
					{
						if (unk_0xB34E411B0A4BF096(iLocal_278))
						{
							if (unk_0x5B80643EF917B728(iLocal_278) > 22000f)
							{
								unk_0x6FED2D1AA2EBF334("TRV4_AIRPORT_ENTERED");
								iLocal_408 = 1;
							}
						}
					}
				}
				else if (iLocal_409 == 0)
				{
					if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -940.8253f, -2858.602f, 11.94482f, -1001.272f, -2823.764f, 21.00674f, 5.75f, 0, true, 0))
					{
						unk_0x3857DADBD6EC8A54("TRV4_AIRPORT_ENTERED");
						iLocal_409 = 1;
					}
				}
				if (iLocal_341 == 0)
				{
					if (unk_0xE59B7F5A03335350(iLocal_278, 0))
					{
						if (func_16(iLocal_278, unk_0xBC25C936A095B5BA(), 1) < 170f && unk_0xD1DC4B08247A4317(iLocal_278))
						{
							if (unk_0x2DA8CA50A72528FB(iLocal_299))
							{
								unk_0x07B8ECB35A4ED3AC(&iLocal_299);
							}
							if (unk_0x144E80F5C46A6B75("SOL_3_DRIVE_TO_AIRPORT"))
							{
								unk_0xC1300D0F3A74E20B("SOL_3_DRIVE_TO_AIRPORT");
							}
							if (!unk_0x144E80F5C46A6B75("SOL_3_MAIN_CHASE"))
							{
								unk_0xD6423910AAD8A379("SOL_3_MAIN_CHASE");
							}
							if (!unk_0x2DA8CA50A72528FB(iLocal_297))
							{
								if (!unk_0x36CEFBE9B745A58D(iLocal_264))
								{
									iLocal_297 = unk_0x511FE22BCF5353CD(iLocal_264);
									unk_0xF9C2945DB5BAB4BF(iLocal_297, true);
								}
							}
							unk_0x5499DFC49A11E05F();
							if (!unk_0x4B8E3E5901E59EB8())
							{
								func_20("TRV4_CHASE2", 7500, 1);
								func_25(1, "STAGE_CHASE_START", 0, 0, 0, 1);
								unk_0x3857DADBD6EC8A54("TRV4_CHASE");
								iLocal_341 = 1;
							}
						}
					}
					if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -536.0366f, -2102.793f, 5.672412f, -464.5755f, -2165.133f, 14.75182f, 65.25f, 0, true, 0))
					{
						if (unk_0x2DA8CA50A72528FB(iLocal_299))
						{
							unk_0x07B8ECB35A4ED3AC(&iLocal_299);
						}
						if (!unk_0x2DA8CA50A72528FB(iLocal_297))
						{
							if (!unk_0x36CEFBE9B745A58D(iLocal_264))
							{
								iLocal_297 = unk_0x511FE22BCF5353CD(iLocal_264);
								unk_0xF9C2945DB5BAB4BF(iLocal_297, true);
							}
						}
						unk_0x5499DFC49A11E05F();
						if (!unk_0x4B8E3E5901E59EB8())
						{
							func_20("TRV4_CHASE2", 7500, 1);
							func_25(1, "STAGE_CHASE_START", 0, 0, 0, 1);
							unk_0x3857DADBD6EC8A54("TRV4_CHASE");
							iLocal_341 = 1;
						}
					}
				}
				else if (unk_0xE59B7F5A03335350(iLocal_278, 0))
				{
					if (unk_0xB34E411B0A4BF096(iLocal_278))
					{
						if (unk_0x5B80643EF917B728(iLocal_278) < 15000f)
						{
						}
					}
				}
				if (iLocal_326 == 0)
				{
					unk_0xF243B7A14FCFD0F4(joaat("jet"));
					if (unk_0xD6513D668481290A(joaat("jet")))
					{
						if (unk_0xE59B7F5A03335350(iLocal_278, 0))
						{
							if (unk_0xB34E411B0A4BF096(iLocal_278))
							{
								if (unk_0x5B80643EF917B728(iLocal_278) > 18490f)
								{
									iLocal_280[1] = unk_0x61C05BF08A1E0EFE(joaat("jet"), -441.3117f, -3435.736f, 409.9454f, 148.3975f, true, true, false);
									unk_0x9E6D037EC3389728(iLocal_280[1], 2, "BB_Chase", 1);
									unk_0x2CA123B0622F495C(joaat("jet"));
									iLocal_326 = 1;
								}
							}
						}
					}
				}
				else if (unk_0x724D816EA203A79E(iLocal_280[1]))
				{
					if (unk_0xE59B7F5A03335350(iLocal_280[1], 0))
					{
						if (unk_0xB34E411B0A4BF096(iLocal_280[1]))
						{
							unk_0x821B5D8CB4B20F84(iLocal_280[1], fLocal_321);
							if (unk_0x5B80643EF917B728(iLocal_280[1]) > 20000f)
							{
								if (func_16(unk_0xBC25C936A095B5BA(), iLocal_280[1], 1) > 200f && !unk_0xD1DC4B08247A4317(iLocal_280[1]))
								{
									unk_0xD87F0F9CDF39238A(iLocal_280[1]);
									if (unk_0x724D816EA203A79E(iLocal_276[1]))
									{
										unk_0xF845620A03C7425B(&(iLocal_276[1]));
									}
									unk_0xCF6040807CC0E4A5(&(iLocal_280[1]));
									iLocal_249 = unk_0x105601648511CC64() + 1000;
								}
							}
							if (unk_0x724D816EA203A79E(iLocal_280[1]))
							{
								if (unk_0x5B80643EF917B728(iLocal_280[1]) > 31543f)
								{
									unk_0xD87F0F9CDF39238A(iLocal_280[1]);
									unk_0x346478B12F69D4E3(iLocal_280[1], true);
								}
							}
						}
						else if (func_16(unk_0xBC25C936A095B5BA(), iLocal_280[1], 1) > 200f && !unk_0xD1DC4B08247A4317(iLocal_280[1]))
						{
							if (unk_0x724D816EA203A79E(iLocal_276[1]))
							{
								unk_0xF845620A03C7425B(&(iLocal_276[1]));
							}
							unk_0xCF6040807CC0E4A5(&(iLocal_280[1]));
							iLocal_249 = unk_0x105601648511CC64() + 1000;
						}
					}
				}
				if (iLocal_432 == 0)
				{
					if (!unk_0x724D816EA203A79E(iLocal_283))
					{
						if (unk_0xE59B7F5A03335350(iLocal_278, 0))
						{
							if (unk_0xB34E411B0A4BF096(iLocal_278))
							{
								if (unk_0x5B80643EF917B728(iLocal_278) > 23000f)
								{
									unk_0xF243B7A14FCFD0F4(joaat("tanker"));
									if (unk_0xD6513D668481290A(joaat("tanker")))
									{
										iLocal_283 = unk_0x61C05BF08A1E0EFE(joaat("tanker"), -1325f, -2779f, 14f, 233.9563f, true, true, false);
										unk_0x2CA123B0622F495C(joaat("tanker"));
										unk_0x914C5DE0B15B8B59(iLocal_283, 57, 57);
										iLocal_432 = 1;
									}
								}
							}
						}
					}
				}
				if (unk_0x724D816EA203A79E(iLocal_204[1]))
				{
					if (unk_0xE59B7F5A03335350(iLocal_204[1], 0))
					{
						if (unk_0xB34E411B0A4BF096(iLocal_204[1]))
						{
							if (unk_0x5B80643EF917B728(iLocal_204[1]) > 13000f)
							{
								if (iLocal_370 == 0)
								{
									fLocal_123[1] = 0.5f;
									iLocal_269 = unk_0x3187EF5798B5D209(iLocal_204[1], -1, 0);
									iLocal_370 = 1;
								}
							}
						}
					}
				}
				if (iLocal_332 == 0)
				{
					unk_0x30FE708AC8604C55(-1325f, -2779f, 14f);
					if (unk_0x724D816EA203A79E(iLocal_204[1]))
					{
						if (iLocal_361 == 0)
						{
							unk_0x914C5DE0B15B8B59(iLocal_204[1], 57, 57);
							iLocal_361 = 1;
						}
						if (unk_0x724D816EA203A79E(iLocal_283))
						{
							if (!unk_0x1D403DFADBC2DE3C(iLocal_204[1], 0))
							{
								if (!unk_0x1D403DFADBC2DE3C(iLocal_283, 0))
								{
									if (unk_0xB34E411B0A4BF096(iLocal_204[1]))
									{
										unk_0x0A0AE625CFB21683(iLocal_204[1], iLocal_283, 1065353216);
									}
								}
							}
						}
					}
					if (unk_0x724D816EA203A79E(iLocal_283))
					{
						if (unk_0x724D816EA203A79E(iLocal_278))
						{
							if (unk_0xE59B7F5A03335350(iLocal_278, 0))
							{
								if (unk_0xB34E411B0A4BF096(iLocal_278))
								{
									if (unk_0x5B80643EF917B728(iLocal_278) > 41430f)
									{
										unk_0x17175087F2DB6AC8(iLocal_283, 1, true);
										iLocal_332 = 1;
									}
								}
							}
						}
					}
				}
				else if (iLocal_373 == 0)
				{
					if (unk_0xE59B7F5A03335350(iLocal_204[1], 0))
					{
						if (unk_0xE59B7F5A03335350(iLocal_278, 0))
						{
							if (unk_0xB34E411B0A4BF096(iLocal_278))
							{
								if (unk_0x5B80643EF917B728(iLocal_278) > 42700f)
								{
									if (unk_0x724D816EA203A79E(iLocal_269))
									{
										if (!unk_0x36CEFBE9B745A58D(iLocal_269))
										{
											unk_0x65E471E4A2D56226(iLocal_269, 0, 0);
										}
									}
									if (unk_0xB34E411B0A4BF096(iLocal_204[1]))
									{
										unk_0xD87F0F9CDF39238A(iLocal_204[1]);
										iLocal_373 = 1;
									}
								}
							}
						}
					}
				}
				if (unk_0x724D816EA203A79E(iLocal_278))
				{
					if (unk_0xE59B7F5A03335350(iLocal_278, 0))
					{
						if (unk_0xB34E411B0A4BF096(iLocal_278))
						{
							if (iLocal_467 == 0)
							{
								if (unk_0x5B80643EF917B728(iLocal_278) > 38000f)
								{
									if (unk_0x724D816EA203A79E(iLocal_204[1]) && unk_0xE59B7F5A03335350(iLocal_204[1], 0))
									{
										unk_0xF2C27FE5A8B98CB5(-1, "Trevor_4_747_Tanker_Horn", iLocal_204[1], 0, 0, 0);
										iLocal_467 = 1;
									}
								}
							}
							if (iLocal_363[1] == 0)
							{
								if (unk_0x5B80643EF917B728(iLocal_278) > 39000f)
								{
									if (!unk_0x144E80F5C46A6B75("SOL_3_EVENT_TANKER_CRASH"))
									{
										unk_0xD6423910AAD8A379("SOL_3_EVENT_TANKER_CRASH");
									}
									if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
									{
										unk_0x06D93FD5E4D394CF(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), false, true, true, false, false, false, 0, false);
									}
									iLocal_363[1] = 1;
								}
							}
							if (iLocal_403 == 0)
							{
								if (unk_0x5B80643EF917B728(iLocal_278) > 41611f)
								{
									if (unk_0x724D816EA203A79E(iLocal_283))
									{
										if (!unk_0x1D403DFADBC2DE3C(iLocal_283, 0))
										{
											if (unk_0x724D816EA203A79E(iLocal_204[7]))
											{
												if (!unk_0x1D403DFADBC2DE3C(iLocal_204[7], 0))
												{
													unk_0xF2C27FE5A8B98CB5(-1, "Trevor_4_747_Tanker_Explosion", iLocal_283, 0, 0, 0);
													unk_0xD87F0F9CDF39238A(iLocal_204[7]);
													unk_0x59DBD01514218697(iLocal_204[7], 1, 0);
													unk_0x59DBD01514218697(iLocal_283, 1, 0);
													unk_0xFB3EF14E3F131640(-1221f, -2852f, 17f, 14, 1f, 1, 0, 1f, 0);
													unk_0xFB3EF14E3F131640(-1212f, -2855f, 14.34f, 14, 1f, 1, 0, 1f, 0);
													unk_0x1E7A09C1710FB071(&iLocal_283);
													unk_0x1E7A09C1710FB071(&(iLocal_204[1]));
													iLocal_403 = 1;
												}
											}
										}
									}
								}
							}
							if (iLocal_364[1] == 0)
							{
								if (unk_0x5B80643EF917B728(iLocal_278) > 43204f)
								{
									if (unk_0x144E80F5C46A6B75("SOL_3_EVENT_TANKER_CRASH"))
									{
										unk_0xC1300D0F3A74E20B("SOL_3_EVENT_TANKER_CRASH");
									}
									unk_0xDA70546257A3ED8B("SCRIPT\Trv_4_747_Tanker_Explosion");
									if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
									{
										unk_0x06D93FD5E4D394CF(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), false, false, false, false, false, false, 0, false);
									}
									iLocal_364[1] = 1;
								}
							}
						}
					}
				}
				if (!unk_0x144E80F5C46A6B75("SOL_3_HELI_TAKEOFF"))
				{
					if (unk_0x724D816EA203A79E(iLocal_204[0]))
					{
						if (unk_0xE59B7F5A03335350(iLocal_204[0], 0))
						{
							if (unk_0x724D816EA203A79E(iLocal_278))
							{
								if (unk_0xE59B7F5A03335350(iLocal_278, 0))
								{
									if (unk_0xB34E411B0A4BF096(iLocal_278))
									{
										if (unk_0x5B80643EF917B728(iLocal_278) > 36000f && unk_0x5B80643EF917B728(iLocal_278) < 40000f)
										{
											unk_0xD6423910AAD8A379("SOL_3_HELI_TAKEOFF");
										}
									}
								}
							}
						}
					}
				}
				else if (unk_0x724D816EA203A79E(iLocal_204[0]))
				{
					if (unk_0xE59B7F5A03335350(iLocal_204[0], 0))
					{
						if (unk_0x724D816EA203A79E(iLocal_278))
						{
							if (unk_0xE59B7F5A03335350(iLocal_278, 0))
							{
								if (unk_0xB34E411B0A4BF096(iLocal_278))
								{
									if (unk_0x5B80643EF917B728(iLocal_278) > 43204f)
									{
										unk_0xC1300D0F3A74E20B("SOL_3_HELI_TAKEOFF");
									}
								}
							}
						}
					}
				}
				if (iLocal_325 == 0)
				{
					if (unk_0xE59B7F5A03335350(iLocal_278, 0))
					{
						if (unk_0xB34E411B0A4BF096(iLocal_278))
						{
							if (unk_0x5B80643EF917B728(iLocal_278) > 60500f)
							{
								unk_0xF243B7A14FCFD0F4(joaat("jet"));
							}
							if (unk_0x5B80643EF917B728(iLocal_278) > 66500f)
							{
								if (unk_0xD6513D668481290A(joaat("jet")))
								{
									iLocal_280[0] = unk_0x61C05BF08A1E0EFE(joaat("jet"), -1119.072f, -1864.548f, -8.2205f, 148.3975f, true, true, false);
									unk_0x1E5C2A1EAB944289(iLocal_280[0], true);
									unk_0x7170EF3CEB4D0224(iLocal_280[0], 2);
									unk_0x9E6D037EC3389728(iLocal_280[0], 35, "BB_Chase", 1);
									unk_0x57C1D06186DCC318(iLocal_280[0], 3491f);
									unk_0x2CA123B0622F495C(joaat("jet"));
									iLocal_325 = 1;
								}
							}
						}
					}
				}
				else if (unk_0x724D816EA203A79E(iLocal_280[0]))
				{
					if (unk_0xE59B7F5A03335350(iLocal_280[0], 0))
					{
						if (unk_0xE59B7F5A03335350(iLocal_278, 0))
						{
							if (unk_0xB34E411B0A4BF096(iLocal_278))
							{
								if (unk_0xB34E411B0A4BF096(iLocal_280[0]))
								{
									unk_0x821B5D8CB4B20F84(iLocal_280[0], fLocal_321);
									if (unk_0x5B80643EF917B728(iLocal_278) > 80000f)
									{
										if (func_16(iLocal_280[0], unk_0xBC25C936A095B5BA(), 1) > 200f)
										{
											unk_0xD87F0F9CDF39238A(iLocal_280[0]);
										}
									}
								}
								else if (unk_0x5B80643EF917B728(iLocal_278) > 80000f)
								{
									if (func_16(iLocal_280[0], unk_0xBC25C936A095B5BA(), 1) > 200f && !unk_0xD1DC4B08247A4317(iLocal_280[0]))
									{
										if (unk_0x724D816EA203A79E(iLocal_276[0]))
										{
											unk_0xF845620A03C7425B(&(iLocal_276[0]));
										}
										unk_0xCF6040807CC0E4A5(&(iLocal_280[0]));
										iLocal_249 = unk_0x105601648511CC64() + 1000;
									}
								}
							}
						}
					}
				}
				if (iLocal_392 == 0)
				{
					if (iLocal_391 == 0)
					{
						if (unk_0x724D816EA203A79E(iLocal_278))
						{
							if (unk_0xE59B7F5A03335350(iLocal_278, 0))
							{
								if (unk_0xB34E411B0A4BF096(iLocal_278))
								{
									if (unk_0x5B80643EF917B728(iLocal_278) > 50000f)
									{
										unk_0xF243B7A14FCFD0F4(joaat("s_m_y_airworker"));
										unk_0x522053D86D6E1C7A("misstrevor4");
										if (unk_0xD6513D668481290A(joaat("s_m_y_airworker")))
										{
											iLocal_270 = unk_0x01B3635C3E8EDD81(26, joaat("s_m_y_airworker"), -1170.541f, -2507.111f, 12.9455f, 218.3035f, 1, true);
											iLocal_271 = unk_0x01B3635C3E8EDD81(26, joaat("s_m_y_airworker"), -1168.264f, -2508.715f, 12.9455f, 70.7735f, 1, true);
											unk_0x2E35C4FA5F0ED22F(iLocal_270, true);
											unk_0x2E35C4FA5F0ED22F(iLocal_271, true);
											unk_0x2CA123B0622F495C(joaat("s_m_y_airworker"));
											iLocal_391 = 1;
										}
									}
								}
							}
						}
					}
					else if (unk_0x724D816EA203A79E(iLocal_278))
					{
						if (unk_0xE59B7F5A03335350(iLocal_278, 0))
						{
							if (unk_0xB34E411B0A4BF096(iLocal_278))
							{
								if (unk_0x5B80643EF917B728(iLocal_278) > 58000f)
								{
									if (!unk_0x36CEFBE9B745A58D(iLocal_270))
									{
										if (unk_0xF9E082857622D91E("misstrevor4"))
										{
											if (!unk_0x96044E39418AAF17(iLocal_270, "misstrevor4", "dive_clear_goon1", 3))
											{
												unk_0xE896C0AD02364F2A(iLocal_270, "misstrevor4", "dive_clear_goon1", 8f, -8f, -1, 0, 0, 0, 0, 0);
											}
										}
									}
									if (!unk_0x36CEFBE9B745A58D(iLocal_271))
									{
										if (unk_0xF9E082857622D91E("misstrevor4"))
										{
											if (!unk_0x96044E39418AAF17(iLocal_271, "misstrevor4", "dive_clear_goon2", 3))
											{
												unk_0xE896C0AD02364F2A(iLocal_271, "misstrevor4", "dive_clear_goon2", 8f, -8f, -1, 0, 0, 0, 0, 0);
											}
										}
									}
									iLocal_392 = 1;
								}
							}
						}
					}
				}
				else if (unk_0x724D816EA203A79E(iLocal_270))
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_270))
					{
						if (!unk_0x96044E39418AAF17(iLocal_270, "misstrevor4", "dive_clear_goon1", 3))
						{
							if (unk_0x724D816EA203A79E(iLocal_271))
							{
								if (!unk_0x36CEFBE9B745A58D(iLocal_271))
								{
									if (!unk_0x96044E39418AAF17(iLocal_271, "misstrevor4", "dive_clear_goon2", 3))
									{
										unk_0x4EA570997E107F35("misstrevor4");
										unk_0x02537C8C1BEEB477(&iLocal_270);
										unk_0x02537C8C1BEEB477(&iLocal_271);
									}
								}
							}
						}
					}
				}
				if (unk_0x724D816EA203A79E(iLocal_204[8]))
				{
					if (unk_0xE59B7F5A03335350(iLocal_204[8], 0))
					{
						if (unk_0xB34E411B0A4BF096(iLocal_204[8]))
						{
							if (unk_0x724D816EA203A79E(iLocal_278))
							{
								if (unk_0xE59B7F5A03335350(iLocal_278, 0))
								{
									if (unk_0xB34E411B0A4BF096(iLocal_278))
									{
										if (unk_0x5B80643EF917B728(iLocal_278) > 50200f)
										{
											if (iLocal_328 == 0)
											{
												unk_0x821B5D8CB4B20F84(iLocal_204[8], 1f);
												if (func_16(unk_0xBC25C936A095B5BA(), iLocal_204[8], 1) < 100f)
												{
													unk_0x2991B7F8ABC4BB0C(0.3f);
													iLocal_366 = 0;
													if (!unk_0x144E80F5C46A6B75("SOL_3_CAR_JET_ENGINE"))
													{
														unk_0xD6423910AAD8A379("SOL_3_CAR_JET_ENGINE");
													}
													unk_0xD2ABD8B4F99E3AEC(iLocal_204[8], 0f, 0f, 0f, 1, 1500, 500, 100);
												}
												unk_0xB71D41C0310C93DE(iLocal_204[8], true, 1);
												unk_0xF162EEE556542AB7(iLocal_204[8], 1, 0);
												unk_0xF2C27FE5A8B98CB5(iLocal_255, "Trevor_4_747_Flying_Car", iLocal_204[8], 0, 0, 0);
												SYSTEM::SETTIMERB(0);
												iLocal_328 = 1;
											}
										}
										if (iLocal_328 == 1)
										{
											if (SYSTEM::TIMERB() > 662)
											{
												if (unk_0x144E80F5C46A6B75("SOL_3_CAR_JET_ENGINE"))
												{
													unk_0xC1300D0F3A74E20B("SOL_3_CAR_JET_ENGINE");
												}
												unk_0x2991B7F8ABC4BB0C(1f);
												iLocal_366 = 1;
											}
											if (SYSTEM::TIMERB() > 1872)
											{
												unk_0xD87F0F9CDF39238A(iLocal_204[8]);
											}
										}
									}
								}
							}
						}
						else if (unk_0x724D816EA203A79E(iLocal_278))
						{
							if (unk_0xE59B7F5A03335350(iLocal_278, 0))
							{
								if (unk_0xB34E411B0A4BF096(iLocal_278))
								{
									if (unk_0x5B80643EF917B728(iLocal_278) > 50200f)
									{
										if (!unk_0x2A348A3A98B80B13(iLocal_204[8]))
										{
											if (iLocal_378 == 0)
											{
												unk_0xF2C27FE5A8B98CB5(iLocal_255, "Trevor_4_747_Carsplosion", iLocal_204[8], 0, 0, 0);
												unk_0x59DBD01514218697(iLocal_204[8], 1, 0);
												iLocal_378 = 1;
											}
										}
									}
								}
							}
						}
					}
					else if (iLocal_366 == 0)
					{
						if (iLocal_328 == 1)
						{
							if (SYSTEM::TIMERB() > 662)
							{
								if (unk_0x144E80F5C46A6B75("SOL_3_CAR_JET_ENGINE"))
								{
									unk_0xC1300D0F3A74E20B("SOL_3_CAR_JET_ENGINE");
								}
								unk_0x2991B7F8ABC4BB0C(1f);
								iLocal_366 = 1;
							}
						}
					}
				}
				else if (iLocal_366 == 0)
				{
					if (iLocal_328 == 1)
					{
						if (SYSTEM::TIMERB() > 662)
						{
							if (unk_0x144E80F5C46A6B75("SOL_3_CAR_JET_ENGINE"))
							{
								unk_0xC1300D0F3A74E20B("SOL_3_CAR_JET_ENGINE");
							}
							unk_0x2991B7F8ABC4BB0C(1f);
							iLocal_366 = 1;
						}
					}
				}
				if (unk_0x724D816EA203A79E(iLocal_204[11]))
				{
					if (unk_0xE59B7F5A03335350(iLocal_204[11], 0))
					{
						if (unk_0xB34E411B0A4BF096(iLocal_204[11]))
						{
							if (unk_0x724D816EA203A79E(iLocal_278))
							{
								if (unk_0xE59B7F5A03335350(iLocal_278, 0))
								{
									if (unk_0xB34E411B0A4BF096(iLocal_278))
									{
										if (unk_0x5B80643EF917B728(iLocal_278) > 82683f)
										{
											if (iLocal_329 == 0)
											{
												unk_0xF2C27FE5A8B98CB5(iLocal_257, "Trevor_4_747_Flying_Car", iLocal_204[11], 0, 0, 0);
												iLocal_329 = 1;
												SYSTEM::SETTIMERB(0);
											}
											if (iLocal_329 == 1)
											{
												if (SYSTEM::TIMERB() > 1872)
												{
													if (!unk_0x2A348A3A98B80B13(iLocal_204[11]))
													{
														unk_0xD87F0F9CDF39238A(iLocal_204[11]);
													}
												}
											}
										}
									}
								}
							}
						}
						else if (iLocal_329 == 1)
						{
							if (iLocal_379 == 0)
							{
								if (!unk_0x2A348A3A98B80B13(iLocal_204[11]))
								{
									unk_0xF2C27FE5A8B98CB5(iLocal_257, "Trevor_4_747_Carsplosion", iLocal_204[11], 0, 0, 0);
									unk_0x59DBD01514218697(iLocal_204[11], 1, 0);
									iLocal_379 = 1;
								}
							}
						}
					}
				}
				if (unk_0x724D816EA203A79E(iLocal_204[12]))
				{
					if (unk_0xE59B7F5A03335350(iLocal_204[12], 0))
					{
						if (unk_0xB34E411B0A4BF096(iLocal_204[12]))
						{
							if (unk_0x724D816EA203A79E(iLocal_278))
							{
								if (unk_0xE59B7F5A03335350(iLocal_278, 0))
								{
									if (unk_0xB34E411B0A4BF096(iLocal_278))
									{
										if (unk_0x5B80643EF917B728(iLocal_278) > 82463f)
										{
											if (iLocal_330 == 0)
											{
												unk_0xF2C27FE5A8B98CB5(iLocal_258, "Trevor_4_747_Flying_Car", iLocal_204[12], 0, 0, 0);
												iLocal_330 = 1;
												SYSTEM::SETTIMERB(0);
											}
											if (iLocal_330 == 1)
											{
												if (SYSTEM::TIMERB() > 1000)
												{
													if (!unk_0x2A348A3A98B80B13(iLocal_204[12]))
													{
														unk_0xD87F0F9CDF39238A(iLocal_204[12]);
													}
												}
											}
										}
									}
								}
							}
							if (iLocal_463 == 0)
							{
								if (unk_0xB34E411B0A4BF096(iLocal_204[12]))
								{
									if (unk_0x5B80643EF917B728(iLocal_204[12]) > 22216f && func_16(iLocal_279, iLocal_204[12], 1) < 90f)
									{
										unk_0x2991B7F8ABC4BB0C(0.3f);
										unk_0xD2ABD8B4F99E3AEC(iLocal_204[12], 0f, 0f, 0f, 1, 2000, 1000, 500);
										iLocal_245 = unk_0x105601648511CC64();
										iLocal_463 = 1;
									}
								}
							}
						}
						else if (iLocal_330 == 1)
						{
							if (iLocal_380 == 0)
							{
								if (!unk_0x2A348A3A98B80B13(iLocal_204[12]))
								{
									unk_0xF2C27FE5A8B98CB5(iLocal_258, "Trevor_4_747_Carsplosion", iLocal_204[12], 0, 0, 0);
									unk_0x59DBD01514218697(iLocal_204[12], 1, 0);
									iLocal_380 = 1;
								}
							}
						}
					}
				}
				if (iLocal_463 == 1)
				{
				}
				if (iLocal_462 == 0 && iLocal_463 == 1)
				{
					if (unk_0x724D816EA203A79E(iLocal_204[12]))
					{
						if (unk_0xE59B7F5A03335350(iLocal_204[12], 0))
						{
							vLocal_317 = { unk_0x541C2AEF053615BC(iLocal_204[12], true) };
						}
					}
					vLocal_318 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
					if (unk_0x105601648511CC64() > iLocal_245 + 1579 || vLocal_318.y < vLocal_317.y)
					{
						unk_0x2991B7F8ABC4BB0C(1f);
						unk_0xF04F2EB4128A4367(0);
						iLocal_462 = 1;
					}
				}
				if (unk_0x724D816EA203A79E(iLocal_278))
				{
					if (unk_0xE59B7F5A03335350(iLocal_278, 0))
					{
						if (unk_0xB34E411B0A4BF096(iLocal_278))
						{
							if (unk_0x5B80643EF917B728(iLocal_278) > 105000f && unk_0x5B80643EF917B728(iLocal_278) < 113000f)
							{
								unk_0x30FE708AC8604C55(-1172.3f, -3027.5f, 13.3f);
							}
						}
					}
				}
				if (unk_0x724D816EA203A79E(iLocal_204[13]))
				{
					if (unk_0xE59B7F5A03335350(iLocal_204[13], 0))
					{
						if (unk_0xB34E411B0A4BF096(iLocal_204[13]))
						{
							if (unk_0x724D816EA203A79E(iLocal_278))
							{
								if (unk_0xE59B7F5A03335350(iLocal_278, 0))
								{
									if (unk_0xB34E411B0A4BF096(iLocal_278))
									{
										if (unk_0x5B80643EF917B728(iLocal_278) > 108830f)
										{
											unk_0x156B8835BE8B6B6C(iLocal_204[13], false);
											unk_0xB71D41C0310C93DE(iLocal_204[13], true, 1);
											unk_0x656194E145691D3E(iLocal_204[13], false);
											SYSTEM::SETTIMERA(0);
											iLocal_431 = 1;
										}
									}
								}
							}
						}
						else if (iLocal_431 == 1)
						{
							unk_0x65E471E4A2D56226(iLocal_204[13], 0, 0);
							unk_0x0BD7089C3E314AEA(iLocal_204[13], true);
							unk_0x65E471E4A2D56226(unk_0x3187EF5798B5D209(iLocal_204[13], -1, 0), 0, 0);
						}
					}
				}
				if (iLocal_427 == 0)
				{
					if (unk_0x724D816EA203A79E(iLocal_204[5]))
					{
						if (unk_0xE59B7F5A03335350(iLocal_204[5], 0))
						{
							unk_0x7170EF3CEB4D0224(iLocal_204[5], 0);
							unk_0x1E5C2A1EAB944289(iLocal_204[5], true);
							iLocal_427 = 1;
						}
					}
				}
				if (unk_0x724D816EA203A79E(iLocal_204[15]))
				{
					if (unk_0xE59B7F5A03335350(iLocal_204[15], 0))
					{
						if (unk_0xB34E411B0A4BF096(iLocal_204[15]))
						{
							if (unk_0x724D816EA203A79E(iLocal_278))
							{
								if (unk_0xE59B7F5A03335350(iLocal_278, 0))
								{
									if (unk_0xB34E411B0A4BF096(iLocal_278))
									{
										if (unk_0x5B80643EF917B728(iLocal_278) > 104989f)
										{
											unk_0xD87F0F9CDF39238A(iLocal_204[15]);
											func_258(iLocal_204[15], -0.04f, -2.21f, 0.887f, 0f, -1f, 0f, 5f, 1);
											func_258(iLocal_204[15], 0.44f, -0.802f, 15.303f, 0f, 0f, 0f, 12f, 1);
											unk_0x59DBD01514218697(iLocal_204[15], 1, 0);
											unk_0x1D1C393C7689E5A6(4f, 4f, 4);
											unk_0xF2C27FE5A8B98CB5(-1, "Trevor_4_747_Carsplosion", iLocal_204[15], 0, 0, 0);
											unk_0xDA70546257A3ED8B("SCRIPT\Trv_4_747_Cop_Cars");
										}
									}
								}
							}
						}
					}
				}
				if (unk_0x724D816EA203A79E(iLocal_278))
				{
					if (unk_0xE59B7F5A03335350(iLocal_278, 0))
					{
						if (unk_0xB34E411B0A4BF096(iLocal_278))
						{
							if (unk_0x5B80643EF917B728(iLocal_278) > 112000f)
							{
								unk_0x44840FD68E426678("BB_MOLLY_2");
								unk_0x522053D86D6E1C7A("misssolomon_3");
								unk_0x522053D86D6E1C7A("move_f@film_reel_arms");
								iLocal_224 = 1;
							}
						}
					}
				}
				break;
			
			case 1:
				if (iLocal_439 == 0)
				{
					if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -887.1561f, -2957.106f, 12.46766f, -848.108f, -2997.588f, 18.23435f, 5f, 0, true, 0))
					{
						iLocal_439 = 1;
					}
				}
				if (unk_0x724D816EA203A79E(iLocal_288[0]))
				{
					if (unk_0xE59B7F5A03335350(iLocal_288[0], 0))
					{
						unk_0x38E412DB4A45B900(iLocal_288[0], 0);
						unk_0x1E7A09C1710FB071(&(iLocal_288[0]));
					}
				}
				if (unk_0x724D816EA203A79E(iLocal_275[0]))
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_275[0]))
					{
						unk_0xA4E856A8CD53B8DF(iLocal_275[0]);
						unk_0x02537C8C1BEEB477(&(iLocal_275[0]));
					}
				}
				if (iLocal_394 == 0)
				{
					if (unk_0x724D816EA203A79E(iLocal_278))
					{
						if (unk_0xE59B7F5A03335350(iLocal_278, 0))
						{
							if (unk_0xB34E411B0A4BF096(iLocal_278))
							{
								if (unk_0x5B80643EF917B728(iLocal_278) > 115000f)
								{
									unk_0x44840FD68E426678("Trev4_5");
									unk_0xF243B7A14FCFD0F4(joaat("prop_cs_film_reel_01"));
									if (!unk_0x719413B40BB63D86())
									{
										unk_0x1732A8A5D2D39430(-930.7f, -2916.9f, 13.4f, 10f, 0);
									}
									iLocal_394 = 1;
								}
							}
						}
					}
				}
				if (iLocal_405 == 0)
				{
					if (unk_0x724D816EA203A79E(iLocal_278))
					{
						if (unk_0xE59B7F5A03335350(iLocal_278, 0))
						{
							if (unk_0xB34E411B0A4BF096(iLocal_278))
							{
								if (unk_0x5B80643EF917B728(iLocal_278) > 120000f)
								{
									if (!unk_0x144E80F5C46A6B75("SOL_3_ARRIVE_AT_HANGAR"))
									{
										unk_0xD6423910AAD8A379("SOL_3_ARRIVE_AT_HANGAR");
									}
									unk_0x14137149076C8055(iLocal_278);
								}
								if (unk_0x5B80643EF917B728(iLocal_278) > 125513f)
								{
									unk_0xD87F0F9CDF39238A(iLocal_278);
									unk_0x346478B12F69D4E3(iLocal_278, true);
									func_257();
									unk_0x02DD9F29D9655E48();
									unk_0x4BDC021CD4295F17(-833.86f, -2564.17f, 13.43f, -814.37f, -2521.04f, 12.94f, true, 0);
									unk_0xC1300D0F3A74E20B("TREVOR_4_MAIN_CHASE");
									if (!unk_0xEF0E25DA0CB6E8FF(iLocal_303))
									{
										iLocal_303 = unk_0x578D5D08EC980893("DEFAULT_SCRIPTED_CAMERA", false);
									}
									if (!unk_0xEF0E25DA0CB6E8FF(iLocal_302))
									{
										iLocal_302 = unk_0x578D5D08EC980893("DEFAULT_SCRIPTED_CAMERA", false);
									}
									iLocal_236 = unk_0x105601648511CC64();
									unk_0x4AED68BFACFB14CB(true);
									unk_0xAF0732277B825027(0);
									iLocal_224 = 2;
								}
							}
						}
					}
				}
				break;
			
			case 2:
				vLocal_318 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
				unk_0x14137149076C8055(iLocal_278);
				if (iLocal_439 == 0)
				{
					if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -887.1561f, -2957.106f, 12.46766f, -848.108f, -2997.588f, 18.23435f, 5f, 0, true, 0))
					{
						iLocal_439 = 1;
					}
				}
				if (iLocal_405 == 0)
				{
					if (unk_0xF0F2FC9DE291567F(vLocal_318, -930.7f, -2916.9f, 13.4f, true) < 45f)
					{
						iLocal_224 = 3;
					}
					if (unk_0x724D816EA203A79E(iLocal_278))
					{
						if (unk_0xD1DC4B08247A4317(iLocal_278))
						{
							if (iLocal_439 == 1)
							{
								iLocal_224 = 3;
							}
						}
					}
					if (unk_0x105601648511CC64() > iLocal_236 + 5000 && iLocal_439 == 1)
					{
						iLocal_224 = 3;
					}
				}
				break;
			
			case 3:
				if (unk_0x719413B40BB63D86())
				{
					unk_0x13D5880CBA449AA9();
				}
				unk_0x14137149076C8055(iLocal_278);
				if (!unk_0x36CEFBE9B745A58D(iLocal_264))
				{
					if (unk_0x96044E39418AAF17(iLocal_264, "misssolomon_3", "molly_escapes_car_mol", 3))
					{
					}
				}
				if (iLocal_415 == 0)
				{
					if (unk_0x724D816EA203A79E(iLocal_278))
					{
						if (unk_0xE59B7F5A03335350(iLocal_278, 0))
						{
							if (!unk_0xB34E411B0A4BF096(iLocal_278))
							{
								if (unk_0xF9E082857622D91E("misssolomon_3"))
								{
									if (!unk_0x36CEFBE9B745A58D(iLocal_264))
									{
										if (!unk_0x724D816EA203A79E(iLocal_295))
										{
											if (unk_0xD6513D668481290A(joaat("prop_cs_film_reel_01")))
											{
												iLocal_295 = unk_0xB6896943DA475493(joaat("prop_cs_film_reel_01"), -929f, -2917f, 13f, true, true, false);
												unk_0x5DBE04849460E608(iLocal_295, iLocal_264, unk_0xFA18E720A39243D0(iLocal_264, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
											}
										}
										if (!unk_0x96044E39418AAF17(iLocal_264, "misssolomon_3", "molly_escapes_car_mol", 3))
										{
											unk_0x346478B12F69D4E3(iLocal_278, false);
											iLocal_250 = unk_0xD0D858E538FD01C3(-929.492f, -2913.472f, 14.16f, 0f, 0f, -28.96f, 2);
											unk_0xBEBE356CCD6268A1(iLocal_278, iLocal_250, "molly_escapes_car_car", "misssolomon_3", 8f, -8f, 0, 1000f);
											unk_0xB62398E536F695FC(iLocal_264, iLocal_250, "misssolomon_3", "molly_escapes_car_mol", 1000f, -1000f, 5, 0, 1148846080, 0);
											unk_0x69D4A898629B0BDA(iLocal_250, false);
											unk_0x3857DADBD6EC8A54("TRV4_EXIT_CARS");
										}
										else
										{
											iLocal_415 = 1;
										}
									}
								}
							}
						}
					}
				}
				if (iLocal_417 == 0)
				{
					if (iLocal_415 == 1)
					{
						if (!unk_0x36CEFBE9B745A58D(iLocal_264))
						{
							if (unk_0x0C265B3C448E6954(iLocal_264, -937.6656f, -2927.864f, 12.77007f, -934.8479f, -2929.484f, 14.46523f, 1.5f, 0, true, 0))
							{
								if (unk_0x96044E39418AAF17(iLocal_264, "misssolomon_3", "molly_escapes_car_mol", 3))
								{
									unk_0x6C3BE67B02D72CDC(iLocal_264, -1000f, 1);
								}
								unk_0x49D46EE47C9CCB66(iLocal_264);
								unk_0x2E35C4FA5F0ED22F(iLocal_264, true);
								unk_0x641B19E156645A92(iLocal_264, -934.8388f, -2932.831f, 12.9649f, 1, false, 0, 1);
								unk_0x019CE76D5286C95C(iLocal_264, 236.5739f);
								unk_0xB0C1A00D86375366(iLocal_264, "BB_MOLLY_2", 1, 4, -1);
								if (unk_0xF9E082857622D91E("move_f@film_reel_arms"))
								{
									unk_0xE896C0AD02364F2A(iLocal_264, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, 0, 0, 0, 0);
								}
								iLocal_417 = 1;
							}
						}
					}
				}
				if (iLocal_405 == 0)
				{
					if (iLocal_425 == 0)
					{
						if (iLocal_424 == 0)
						{
							if (!unk_0x36CEFBE9B745A58D(iLocal_264))
							{
								if (unk_0x96044E39418AAF17(iLocal_264, "misssolomon_3", "molly_escapes_car_mol", 3))
								{
									if (unk_0x8FD30584EB38411B(iLocal_250) > 0.18f || unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), -930.7f, -2916.9f, 13.4f, true) < 10f)
									{
										iLocal_225 = 0;
										iLocal_424 = 1;
									}
								}
							}
						}
						while (iLocal_424 == 1)
						{
							unk_0x2E94C9549322098D("M_LegalTrouble", 0);
							switch (iLocal_225)
							{
								case 0:
									unk_0x9961B404F89D0597(iLocal_303, -927.0851f, -2921.173f, 13.66304f, 1.738541f, 1.294743f, 28.05799f, 34.66404f, 0, 1, 1, 2);
									unk_0x9961B404F89D0597(iLocal_302, -927.0851f, -2921.173f, 13.66304f, 1.738541f, 1.294742f, 32.59915f, 34.66404f, 0, 1, 1, 2);
									unk_0xAE099C1ADC89C331(iLocal_302, iLocal_303, 4000, 1, 1);
									unk_0x43F06392C4EF25E0(false);
									unk_0x59B038076F830627(false);
									unk_0x062C9995BFD27B2A(true, false, 3000, 1, 0, 0);
									if (unk_0x724D816EA203A79E(iLocal_287))
									{
										unk_0xCF6040807CC0E4A5(&iLocal_287);
									}
									if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
									{
										unk_0x641B19E156645A92(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), -918.6157f, -2926.646f, 12.9667f, 1, false, 0, 1);
										unk_0x019CE76D5286C95C(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 47.9465f);
									}
									else
									{
										unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), -918.6157f, -2926.646f, 12.9667f, 1, false, 0, 1);
										unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), 47.9465f);
									}
									if (!unk_0x36CEFBE9B745A58D(iLocal_264))
									{
										func_17(&uLocal_490, 2, iLocal_264, "MOLLY", 0, 1);
										unk_0xCF27C3A90021C5A5(iLocal_264, 1);
									}
									unk_0x1D1C393C7689E5A6(4f, 0f, 3);
									unk_0xF3C7BD26F94560D9(4);
									unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 0);
									iLocal_451 = 0;
									iLocal_225++;
									break;
								
								case 1:
									if (!unk_0x36CEFBE9B745A58D(iLocal_264))
									{
										if (unk_0x96044E39418AAF17(iLocal_264, "misssolomon_3", "molly_escapes_car_mol", 3))
										{
											if (iLocal_451 == 0)
											{
												if (unk_0x8FD30584EB38411B(iLocal_250) > 0.3f)
												{
													if (func_256(&uLocal_490, "T1M4AUD", "SOL3_GETOUT", 7, 0, 0, 0))
													{
														unk_0x1D1C393C7689E5A6(6f, 7f, 4);
														iLocal_451 = 1;
													}
												}
											}
											if (unk_0x8FD30584EB38411B(iLocal_250) > 0.5f)
											{
												unk_0x9961B404F89D0597(iLocal_303, -926.0932f, -2916.891f, 14.47074f, -3.471637f, 1.294743f, 125.8315f, 34.66404f, 0, 1, 1, 2);
												unk_0x9961B404F89D0597(iLocal_302, -926.0932f, -2916.891f, 14.47074f, -3.471636f, 1.294743f, 135.4584f, 34.66404f, 0, 1, 1, 2);
												unk_0xAE099C1ADC89C331(iLocal_302, iLocal_303, 4000, 1, 1);
												iLocal_248 = unk_0x105601648511CC64();
												iLocal_225++;
											}
										}
									}
									break;
								
								case 2:
									if (!unk_0x36CEFBE9B745A58D(iLocal_264))
									{
										if (unk_0x96044E39418AAF17(iLocal_264, "misssolomon_3", "molly_escapes_car_mol", 3))
										{
											if ((iLocal_248 != -1 && unk_0x3D875C2512206692(0) == 4) && (unk_0x105601648511CC64() - iLocal_248) >= 2230)
											{
												unk_0x9216004FAC08D1DC("CamPushInNeutral", 0, 0);
												unk_0xC4BA30B532FE260F(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
												iLocal_248 = -1;
											}
											if (unk_0x8FD30584EB38411B(iLocal_250) > 0.85f)
											{
												unk_0x59B038076F830627(true);
												unk_0x43F06392C4EF25E0(true);
												unk_0x062C9995BFD27B2A(false, false, 3000, 1, 0, 0);
												unk_0xF3F01A78937DC905(0f);
												iLocal_262 = 346732587;
												unk_0x0DE091F0061B5F19(iLocal_262, joaat("v_ilev_ss_door5_r"), -935.641f, -2927.185f, 14.0945f, 1, 1, 0);
												unk_0xC0D8311F0A9723A0(iLocal_262, 1f, 0, 1);
												unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
												if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
												{
													unk_0x932E201A82D2EDB8(unk_0xBC25C936A095B5BA(), unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0);
													if (unk_0x3D875C2512206692(1) != 4 && unk_0x3D875C2512206692(0) == 4)
													{
														unk_0x2EB4D46478766D87(unk_0xBC25C936A095B5BA(), 1, 0);
													}
												}
												unk_0xCF27C3A90021C5A5(iLocal_264, 0);
												unk_0x1E463345CF429A99();
												unk_0x1D1C393C7689E5A6(0f, 4f, 3);
												iLocal_237 = unk_0x105601648511CC64();
												iLocal_424 = 0;
												iLocal_425 = 1;
												iLocal_225++;
											}
										}
									}
									break;
							}
							SYSTEM::WAIT(0);
						}
					}
				}
				if (iLocal_425 == 1)
				{
					unk_0xF72F6BB050622804(iLocal_262, 5, 0, 1);
					if (iLocal_468 == 0)
					{
						if (unk_0x724D816EA203A79E(iLocal_264))
						{
							if (!unk_0x36CEFBE9B745A58D(iLocal_264))
							{
								if (unk_0x4DBCE270B354E123(iLocal_264, -935.3f, -2927.3f, 13f, 1.5f, 1.5f, 2f, false, true, 0))
								{
									unk_0x10B5C0C7337B8420(-1, "Trevor_4_747_Molly_Open_Doors", -935.1f, -2927.6f, 13.2f, 0, 0, 0, 0);
									iLocal_468 = 1;
								}
							}
						}
					}
				}
				if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
				{
					if (unk_0x144E80F5C46A6B75("SOL_3_MAIN_CHASE"))
					{
						unk_0xC1300D0F3A74E20B("SOL_3_MAIN_CHASE");
					}
					if (unk_0x144E80F5C46A6B75("SOL_3_ARRIVE_AT_HANGAR"))
					{
						unk_0xC1300D0F3A74E20B("SOL_3_ARRIVE_AT_HANGAR");
					}
					if (!unk_0x144E80F5C46A6B75("SOL_3_ON_FOOT_CHASE"))
					{
						unk_0xD6423910AAD8A379("SOL_3_ON_FOOT_CHASE");
					}
				}
				if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
				{
					func_245();
				}
				if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -929.7908f, -2928.213f, 12.19499f, -935.7283f, -2924.685f, 15.44832f, 4.75f, 0, true, 1))
				{
					if (iLocal_417 == 0)
					{
						if (!unk_0x36CEFBE9B745A58D(iLocal_264))
						{
							if (unk_0x96044E39418AAF17(iLocal_264, "misssolomon_3", "molly_escapes_car_mol", 3))
							{
								unk_0x6C3BE67B02D72CDC(iLocal_264, -1000f, 1);
							}
							unk_0x49D46EE47C9CCB66(iLocal_264);
							unk_0x2E35C4FA5F0ED22F(iLocal_264, true);
							unk_0x641B19E156645A92(iLocal_264, -934.8388f, -2932.831f, 12.9649f, 1, false, 0, 1);
							unk_0x019CE76D5286C95C(iLocal_264, 236.5739f);
							unk_0xB0C1A00D86375366(iLocal_264, "BB_MOLLY_2", 1, 4, -1);
							if (unk_0xF9E082857622D91E("move_f@film_reel_arms"))
							{
								unk_0xE896C0AD02364F2A(iLocal_264, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, 0, 0, 0, 0);
							}
							iLocal_417 = 1;
						}
					}
					if (unk_0x724D816EA203A79E(iLocal_284))
					{
						unk_0xCF6040807CC0E4A5(&iLocal_284);
					}
					iLocal_223 = 0;
					iLocal_225 = 0;
					iLocal_222 = 5;
				}
				break;
			}
	}
}

void func_245()//Position - 0x17287
{
	if (iLocal_401 == 0)
	{
		if (unk_0x724D816EA203A79E(iLocal_204[14]))
		{
			if (unk_0xE59B7F5A03335350(iLocal_204[14], 0))
			{
				iLocal_272 = unk_0x3187EF5798B5D209(iLocal_204[14], -1, 0);
				unk_0x7A535CE1F001F3FE(iLocal_272, joaat("weapon_pistol"), 1000, true, true);
				unk_0x77815D3407C6700D(iLocal_272, true, 0);
				unk_0x2E35C4FA5F0ED22F(iLocal_272, true);
				unk_0xFC3C88E2313FA926(iLocal_272, 5);
				unk_0x65E471E4A2D56226(iLocal_272, 150, 0);
				func_17(&uLocal_490, 3, iLocal_272, "TREV4POLICE3", 0, 1);
			}
		}
		iLocal_401 = 1;
	}
	else if (iLocal_400 == 0)
	{
		if (unk_0x724D816EA203A79E(iLocal_272))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_272))
			{
				unk_0xA4E856A8CD53B8DF(iLocal_272);
				unk_0xE95574194EEDAEF7(iLocal_272, unk_0x541C2AEF053615BC(iLocal_272, true), 5f, 0, 0);
				unk_0xC5A6DFE2B8987B17(&iLocal_304);
				unk_0xA3981DED4FC2E56E(0, 0, 0);
				unk_0x40DD085221F706D0(0, unk_0xBC25C936A095B5BA(), 5000, 1);
				unk_0xB8CBD998685C0685(0, unk_0xBC25C936A095B5BA(), 0, 16);
				unk_0x535008C596714F9E(iLocal_304);
				unk_0xA8E6405305C0D7DF(iLocal_272, iLocal_304);
				unk_0x02DAF06EA4F08219(&iLocal_304);
				iLocal_400 = 1;
			}
		}
	}
	else if (iLocal_434 == 0)
	{
		if (unk_0x724D816EA203A79E(iLocal_272))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_272))
			{
				if (!unk_0x5237AF95232D78C5(iLocal_272, 0) && func_13(unk_0xBC25C936A095B5BA(), iLocal_272) < 20f)
				{
					if (!func_255())
					{
						if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
						{
							func_17(&uLocal_490, 4, iLocal_272, "SOL3COP", 0, 1);
							if (func_246(&uLocal_490, "T1M4AUD", "SOL3_MOLPOL", "SOL3_MOLPOL_2", 7, 0, 0))
							{
								iLocal_434 = 1;
							}
						}
					}
				}
			}
		}
	}
}

bool func_246(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x17411
{
	func_254(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_3DBF = 0;
	Global_3DC6 = 0;
	Global_3DC1 = 0;
	Global_4197 = 1;
	Global_4199 = 0;
	Global_419D = 0;
	StringCopy(&Global_41A4, sParam3, 24);
	Global_280001 = 0;
	return func_247(sParam2, iParam4, 0);
}

int func_247(char* sParam0, int iParam1, bool bParam2)//Position - 0x17465
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
					func_212();
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
		if (func_253(8, -1))
		{
			return 0;
		}
		Global_3E04 = { Global_3DFE };
		func_252();
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
				func_251();
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
				if (func_250())
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
			if (func_224())
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
			func_249();
			Global_3DC2 = bParam2;
		}
		Global_3DBA = iParam1;
		StringCopy(&Global_3C3B, sParam0, 24);
		Global_394A = 0;
		func_248();
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
		func_212();
	}
	return 0;
}

void func_248()//Position - 0x17731
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

void func_249()//Position - 0x17763
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

int func_250()//Position - 0x177F8
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

void func_251()//Position - 0x17891
{
	if (func_58(14))
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
		Global_389D = func_104();
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

void func_252()//Position - 0x17933
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

bool func_253(int iParam0, int iParam1)//Position - 0x1798B
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

void func_254(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x179C6
{
	Global_3B96 = { *uParam0 };
	Global_68F = iParam1;
	StringCopy(&Global_3DFE, sParam2, 24);
	Global_4195 = iParam5;
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

int func_255()//Position - 0x17A1C
{
	if (Global_3DB8 != 0 || unk_0xE6711F601F11B66B())
	{
		return 1;
	}
	return 0;
}

bool func_256(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x17A3E
{
	func_254(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_247(sParam2, iParam3, 0);
}

void func_257()//Position - 0x17A8C
{
	if (unk_0x2F1B39E315395385(iLocal_667[0]))
	{
		unk_0x2CA8D9DC16C6AF09(iLocal_667[0], 0);
	}
	if (unk_0x2F1B39E315395385(iLocal_667[1]))
	{
		unk_0x2CA8D9DC16C6AF09(iLocal_667[1], 0);
	}
	if (unk_0x2F1B39E315395385(iLocal_667[2]))
	{
		unk_0x2CA8D9DC16C6AF09(iLocal_667[2], 0);
	}
	if (iLocal_381 == 1)
	{
		unk_0x26D344275839A25E(iLocal_259);
		iLocal_389 = 0;
	}
}

void func_258(int iParam0, vector3 vParam1, vector3 vParam2, float fParam3, bool bParam4)//Position - 0x17AEE
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		if (unk_0xB34E411B0A4BF096(iParam0))
		{
			unk_0xD87F0F9CDF39238A(iParam0);
		}
		vVar1 = { unk_0x541C2AEF053615BC(iParam0, true) };
		if (bParam4)
		{
			vVar0 = { unk_0xA4455714F3DCE207(iParam0, vParam1) };
		}
		else
		{
			vVar0 = { vParam1 };
		}
		vVar2 = { func_259(vVar0 - vVar1) };
		vVar2 = { vVar2 * Vector(fParam3, fParam3, fParam3) };
		unk_0x5EBD7EB63AD5FB1D(iParam0, 3, vVar2, vParam2, 0, 0, 1, 1, 0, 1);
	}
}

Vector3 func_259(vector3 vParam0)//Position - 0x17B6B
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

void func_260(int iParam0, float fParam1)//Position - 0x17BAA
{
	int iVar0;
	vector3 vVar1;
	
	if (iLocal_166 < 15)
	{
		if (iLocal_166 == 0)
		{
			vLocal_181 = { 99999.9f, 99999.9f, 99999.9f };
			vLocal_182 = { -99999.9f, -99999.9f, -99999.9f };
		}
		if (unk_0xE59B7F5A03335350(iParam0, 0))
		{
			if (unk_0xB34E411B0A4BF096(iParam0))
			{
				iVar0 = unk_0x47296952F125937B(iParam0);
				vVar1 = { unk_0xE69565EA6CC00034(iVar0, (fParam1 + (SYSTEM::TO_FLOAT((iLocal_166 - 1)) * 2000f))) };
				if (vVar1.x < vLocal_181.x)
				{
					vLocal_181.x = vVar1.x;
				}
				if (vVar1.y < vLocal_181.y)
				{
					vLocal_181.y = vVar1.y;
				}
				if (vVar1.z < vLocal_181.z)
				{
					vLocal_181.z = vVar1.z;
				}
				if (vVar1.x > vLocal_182.x)
				{
					vLocal_182.x = vVar1.x;
				}
				if (vVar1.y > vLocal_182.y)
				{
					vLocal_182.y = vVar1.y;
				}
				if (vVar1.z > vLocal_182.z)
				{
					vLocal_182.z = vVar1.z;
				}
			}
		}
		iLocal_166++;
	}
	else if (!bLocal_106)
	{
		unk_0x832ADB79A274D4E9(-9999.9f, -9999.9f, -9999.9f, 9999.9f, 9999.9f, 9999.9f, true);
		vLocal_181 = { vLocal_181 + Vector((fLocal_148 * -1f), (fLocal_148 * -1f), (fLocal_148 * -1f)) };
		vLocal_182 = { vLocal_182 + Vector(fLocal_148, fLocal_148, fLocal_148) };
		vLocal_179 = { vLocal_181 };
		vLocal_180 = { vLocal_182 };
		unk_0x6935EBF9868982DC(vLocal_179, vLocal_180, false, 0);
		iLocal_166 = 0;
	}
}

void func_261()//Position - 0x17D1E
{
	iLocal_89 = 1;
}

void func_262()//Position - 0x17D29
{
	if (iLocal_331 == 0)
	{
		if (unk_0x724D816EA203A79E(iLocal_278))
		{
			if (unk_0xB34E411B0A4BF096(iLocal_278))
			{
				if (unk_0x5B80643EF917B728(iLocal_278) > 55000f)
				{
					unk_0xF243B7A14FCFD0F4(1938952078);
					unk_0xF243B7A14FCFD0F4(joaat("s_m_y_fireman_01"));
					unk_0x522053D86D6E1C7A("missheist_agency3aig_lift_waitped_a");
					if ((unk_0xD6513D668481290A(1938952078) && unk_0xD6513D668481290A(joaat("s_m_y_fireman_01"))) && unk_0xF9E082857622D91E("missheist_agency3aig_lift_waitped_a"))
					{
						if (!unk_0x724D816EA203A79E(iLocal_282))
						{
							unk_0x6C5F5B5F6894CCE3(-1129.566f, -2319.888f, 12.9445f, 10f, 0, 0, 0, false);
							iLocal_282 = unk_0x61C05BF08A1E0EFE(1938952078, -1129.566f, -2319.888f, 12.9445f, 16.5423f, true, true, false);
						}
						iLocal_667[0] = unk_0xED4F33DE9A6C0964("scr_trev4_trailer_fire", -1151f, -2311f, 15f, 0f, 0f, 0f, 1065353216, 0, 0, 0, 0);
						if (iLocal_381 == 0)
						{
							unk_0x10B5C0C7337B8420(iLocal_259, "Trevor_4_747_Loud_Fire", -1151f, -2311f, 15f, 0, 0, 0, 0);
							iLocal_381 = 1;
						}
						iLocal_667[1] = unk_0xED4F33DE9A6C0964("scr_trev4_trailer_fire", -1140f, -2328f, 18f, 0f, 0f, 0f, 1065353216, 0, 0, 0, 0);
						iLocal_667[2] = unk_0xED4F33DE9A6C0964("scr_trev4_trailer_fire", -1150f, -2327f, 19f, 0f, 0f, 0f, 1065353216, 0, 0, 0, 0);
						if (!unk_0x724D816EA203A79E(iLocal_265[0]))
						{
							iLocal_265[0] = unk_0xFD8987C090669BD5(iLocal_282, 21, joaat("s_m_y_fireman_01"), -1, 1, true);
							unk_0x2E35C4FA5F0ED22F(iLocal_265[0], true);
							unk_0x22321800954A532E(iLocal_265[0], true);
							unk_0x0F5785C647DA0152(iLocal_265[0], -1147.07f, -2320.65f, 18.93f, 1101004800);
						}
						if (!unk_0x724D816EA203A79E(iLocal_265[1]))
						{
							iLocal_265[1] = unk_0x01B3635C3E8EDD81(21, joaat("s_m_y_fireman_01"), -1138.313f, -2313.277f, 12.9445f, 155.4271f, 1, true);
							unk_0xE896C0AD02364F2A(iLocal_265[1], "missheist_agency3aig_lift_waitped_a", "idle_b", 8f, -8f, -1, 9, 0, 0, 0, 0);
							unk_0x2E35C4FA5F0ED22F(iLocal_265[1], true);
							unk_0x22321800954A532E(iLocal_265[1], true);
						}
						if (!unk_0x724D816EA203A79E(iLocal_265[2]))
						{
							iLocal_265[2] = unk_0x01B3635C3E8EDD81(21, joaat("s_m_y_fireman_01"), -1145.362f, -2309.387f, 12.9445f, 96.0786f, 1, true);
							unk_0xE896C0AD02364F2A(iLocal_265[2], "missheist_agency3aig_lift_waitped_a", "idle_a", 8f, -8f, -1, 9, 0, 0, 0, 0);
							unk_0x2E35C4FA5F0ED22F(iLocal_265[2], true);
							unk_0x22321800954A532E(iLocal_265[2], true);
						}
						if (!unk_0x724D816EA203A79E(iLocal_265[3]))
						{
							iLocal_265[3] = unk_0x01B3635C3E8EDD81(21, joaat("s_m_y_fireman_01"), -1147.461f, -2314.511f, 13.1518f, 57.8707f, 1, true);
							unk_0xE896C0AD02364F2A(iLocal_265[3], "missheist_agency3aig_lift_waitped_a", "idle_c", 8f, -8f, -1, 9, 0, 0, 0, 0);
							unk_0x2E35C4FA5F0ED22F(iLocal_265[3], true);
							unk_0x22321800954A532E(iLocal_265[3], true);
						}
						unk_0x2CA123B0622F495C(joaat("s_m_y_fireman_01"));
						unk_0x2CA123B0622F495C(1938952078);
						iLocal_331 = 1;
					}
				}
			}
		}
	}
	if (iLocal_331 == 1)
	{
		if (iLocal_465[0] == 0)
		{
			if (unk_0x724D816EA203A79E(iLocal_265[1]))
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_265[1]))
				{
					if (iLocal_466[0] == 0)
					{
						if (unk_0x96044E39418AAF17(iLocal_265[1], "missheist_agency3aig_lift_waitped_a", "idle_b", 3))
						{
							iLocal_466[0] = 1;
						}
					}
					if (iLocal_466[0] == 1)
					{
						if (!unk_0x96044E39418AAF17(iLocal_265[1], "missheist_agency3aig_lift_waitped_a", "idle_b", 3))
						{
							unk_0xEE7131C3C73E7282(iLocal_265[1], -1);
							unk_0x22321800954A532E(iLocal_265[1], true);
							unk_0x2E35C4FA5F0ED22F(iLocal_265[1], false);
							iLocal_465[0] = 1;
						}
					}
				}
			}
		}
		if (iLocal_465[1] == 0)
		{
			if (unk_0x724D816EA203A79E(iLocal_265[2]))
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_265[2]))
				{
					if (iLocal_466[1] == 0)
					{
						if (unk_0x96044E39418AAF17(iLocal_265[2], "missheist_agency3aig_lift_waitped_a", "idle_a", 3))
						{
							iLocal_466[1] = 1;
						}
					}
					if (iLocal_466[1] == 1)
					{
						if (!unk_0x96044E39418AAF17(iLocal_265[2], "missheist_agency3aig_lift_waitped_a", "idle_a", 3))
						{
							unk_0xEE7131C3C73E7282(iLocal_265[2], -1);
							unk_0x22321800954A532E(iLocal_265[2], true);
							unk_0x2E35C4FA5F0ED22F(iLocal_265[2], false);
							iLocal_465[1] = 1;
						}
					}
				}
			}
		}
		if (iLocal_465[2] == 0)
		{
			if (unk_0x724D816EA203A79E(iLocal_265[3]))
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_265[3]))
				{
					if (iLocal_466[2] == 0)
					{
						if (unk_0x96044E39418AAF17(iLocal_265[3], "missheist_agency3aig_lift_waitped_a", "idle_c", 3))
						{
							iLocal_466[2] = 1;
						}
					}
					if (iLocal_466[2] == 1)
					{
						if (!unk_0x96044E39418AAF17(iLocal_265[3], "missheist_agency3aig_lift_waitped_a", "idle_c", 3))
						{
							unk_0xEE7131C3C73E7282(iLocal_265[3], -1);
							unk_0x22321800954A532E(iLocal_265[3], true);
							unk_0x2E35C4FA5F0ED22F(iLocal_265[3], false);
							iLocal_465[2] = 1;
						}
					}
				}
			}
		}
	}
}

void func_263()//Position - 0x1820B
{
	if (iLocal_402 == 0)
	{
		unk_0xF243B7A14FCFD0F4(joaat("police3"));
		unk_0xF243B7A14FCFD0F4(joaat("s_m_y_cop_01"));
		unk_0x1B2A7C8188ADBE04(1, "BB_AIChase");
		if (unk_0xD6513D668481290A(joaat("police3")) && unk_0xD6513D668481290A(joaat("s_m_y_cop_01")))
		{
			if (unk_0xE59B7F5A03335350(iLocal_278, 0))
			{
				if (unk_0xB34E411B0A4BF096(iLocal_278))
				{
					if (unk_0x5B80643EF917B728(iLocal_278) > 15500f)
					{
						unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 2, 0);
						unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
						iLocal_288[0] = unk_0x61C05BF08A1E0EFE(joaat("police3"), -847.2593f, -2379.987f, 15.9304f, 196.4921f, true, true, false);
						iLocal_275[0] = unk_0xFD8987C090669BD5(iLocal_288[0], 6, joaat("s_m_y_cop_01"), -1, 1, true);
						unk_0x2E35C4FA5F0ED22F(iLocal_275[0], true);
						unk_0x55662F9F262C2F9B(iLocal_288[0], "SOL_3_POLICE_CARS_Group", 0);
						func_124(iLocal_275[0], 0);
						unk_0x2D655AA68FA1736B(iLocal_288[0], true, true, 0);
						unk_0x9E6D037EC3389728(iLocal_288[0], 1, "BB_AIChase", 1);
						unk_0x7A535CE1F001F3FE(iLocal_275[0], joaat("weapon_pistol"), 1000, true, true);
						unk_0x0FB6723EA68C0881(iLocal_288[0], true);
						unk_0x2CA123B0622F495C(joaat("police3"));
						unk_0x2CA123B0622F495C(joaat("s_m_y_cop_01"));
						iLocal_402 = 1;
					}
				}
			}
		}
	}
	if (iLocal_402 == 1)
	{
		if (iLocal_429[0] == 0)
		{
			if (unk_0x724D816EA203A79E(iLocal_288[0]))
			{
				if (unk_0xE59B7F5A03335350(iLocal_288[0], 0))
				{
					if (unk_0xB34E411B0A4BF096(iLocal_288[0]))
					{
						unk_0x821B5D8CB4B20F84(iLocal_288[0], fLocal_321);
						if (unk_0x5B80643EF917B728(iLocal_288[0]) > 13000f)
						{
							unk_0xD87F0F9CDF39238A(iLocal_288[0]);
						}
					}
					else if (unk_0x724D816EA203A79E(iLocal_275[0]))
					{
						if (!unk_0x36CEFBE9B745A58D(iLocal_275[0]))
						{
							unk_0x2E35C4FA5F0ED22F(iLocal_275[0], true);
							if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
							{
								unk_0x8EF644F0EDA55FB7(iLocal_275[0], unk_0xBC25C936A095B5BA());
								unk_0x22321800954A532E(iLocal_275[0], true);
							}
							else
							{
								unk_0xB8CBD998685C0685(iLocal_275[0], unk_0xBC25C936A095B5BA(), 0, 16);
								unk_0x22321800954A532E(iLocal_275[0], true);
							}
							unk_0x4F5DAC981AF98536(1, "BB_AIChase");
							iLocal_238 = unk_0x105601648511CC64();
							iLocal_429[0] = 1;
						}
					}
				}
			}
		}
		if (iLocal_430[0] == 0)
		{
			if (iLocal_429[0] == 1)
			{
				if (unk_0x105601648511CC64() > iLocal_238 + 500)
				{
					if (unk_0x724D816EA203A79E(iLocal_275[0]))
					{
						if (!unk_0x36CEFBE9B745A58D(iLocal_275[0]))
						{
							if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
							{
								unk_0x1ADDCB77FC10E656(iLocal_275[0], 16, 1);
								unk_0x1ADDCB77FC10E656(iLocal_275[0], 1, 1);
								iLocal_430[0] = 1;
							}
							else
							{
								iLocal_430[0] = 1;
							}
						}
					}
				}
			}
		}
	}
}

void func_264()//Position - 0x18496
{
	if (!iLocal_333)
	{
		if (unk_0xE59B7F5A03335350(iLocal_204[20], 0))
		{
			iLocal_301 = unk_0x578D5D08EC980893("DEFAULT_SCRIPTED_CAMERA", false);
			unk_0x348665177DBFB93B(iLocal_301, true);
			iLocal_334 = 0;
			iLocal_333 = 1;
		}
	}
	else if (func_279(&uLocal_28, 1, 0, 0) && iLocal_405 == 0)
	{
		if (unk_0xF16DAFF595E80F7C())
		{
			unk_0x7456702622C62EA0(1);
		}
		if (func_255())
		{
			unk_0xEB233A3B7635D2AC();
			func_209();
		}
		if (iLocal_363[2] == 0)
		{
			if (!unk_0x144E80F5C46A6B75("SOL_3_CHOPPER_CAM"))
			{
				unk_0xD6423910AAD8A379("SOL_3_CHOPPER_CAM");
			}
			unk_0xC4BA30B532FE260F(iLocal_261, "Trevor_4_747_TV", 0, true);
			iLocal_363[2] = 1;
		}
		func_270(1, 1, 30, 5, 0);
		if (iLocal_352 == 0)
		{
			unk_0x29CD142125FE177B(iLocal_305, "SET_TEXT");
			func_269("TRV4_NEWS1");
			func_269("");
			unk_0xF9FBC2F3F73D94C9();
			iLocal_352 = 1;
		}
		if (iLocal_353 == 0)
		{
			unk_0x29CD142125FE177B(iLocal_305, "SET_SCROLL_TEXT");
			unk_0xD44E04EBBDC4CE88(1f);
			unk_0xD44E04EBBDC4CE88(0f);
			func_269("TRV4_NEWS2");
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(iLocal_305, "SET_SCROLL_TEXT");
			unk_0xD44E04EBBDC4CE88(0f);
			unk_0xD44E04EBBDC4CE88(0f);
			func_269("TRV4_NEWS6");
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(iLocal_305, "SET_SCROLL_TEXT");
			unk_0xD44E04EBBDC4CE88(0f);
			unk_0xD44E04EBBDC4CE88(1f);
			func_269("TRV4_NEWS7");
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(iLocal_305, "SET_SCROLL_TEXT");
			unk_0xD44E04EBBDC4CE88(0f);
			unk_0xD44E04EBBDC4CE88(2f);
			func_269("TRV4_NEWS8");
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(iLocal_305, "SET_SCROLL_TEXT");
			unk_0xD44E04EBBDC4CE88(0f);
			unk_0xD44E04EBBDC4CE88(3f);
			func_269("TRV4_NEWS9");
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(iLocal_305, "SET_SCROLL_TEXT");
			unk_0xD44E04EBBDC4CE88(0f);
			unk_0xD44E04EBBDC4CE88(4f);
			func_269("TRV4_NEWS10");
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(iLocal_305, "DISPLAY_SCROLL_TEXT");
			unk_0xD44E04EBBDC4CE88(1f);
			unk_0xD44E04EBBDC4CE88(0f);
			unk_0xF9FBC2F3F73D94C9();
			iLocal_243 = (unk_0x105601648511CC64() - 5000);
			iLocal_353 = 1;
		}
		if (unk_0x105601648511CC64() > iLocal_243 + 5000)
		{
			func_268();
			iLocal_243 = unk_0x105601648511CC64();
		}
		if (iLocal_354 == 0)
		{
			if (unk_0xE59B7F5A03335350(iLocal_278, 0))
			{
				if (unk_0xB34E411B0A4BF096(iLocal_278))
				{
					if (unk_0x5B80643EF917B728(iLocal_278) > 25000f && unk_0x5B80643EF917B728(iLocal_278) < 50000f)
					{
						unk_0x29CD142125FE177B(iLocal_305, "SET_SCROLL_TEXT");
						unk_0xD44E04EBBDC4CE88(1f);
						unk_0xD44E04EBBDC4CE88(1f);
						func_269("TRV4_NEWS5");
						unk_0xF9FBC2F3F73D94C9();
						unk_0x29CD142125FE177B(iLocal_305, "DISPLAY_SCROLL_TEXT");
						unk_0xD44E04EBBDC4CE88(1f);
						unk_0xD44E04EBBDC4CE88(1f);
						unk_0xF9FBC2F3F73D94C9();
						iLocal_354 = 1;
					}
				}
			}
		}
		if (iLocal_355 == 0)
		{
			if (unk_0xE59B7F5A03335350(iLocal_278, 0))
			{
				if (unk_0xB34E411B0A4BF096(iLocal_278))
				{
					if (unk_0x5B80643EF917B728(iLocal_278) > 77600f && unk_0x5B80643EF917B728(iLocal_278) < 115000f)
					{
						unk_0x29CD142125FE177B(iLocal_305, "SET_SCROLL_TEXT");
						unk_0xD44E04EBBDC4CE88(1f);
						unk_0xD44E04EBBDC4CE88(2f);
						func_269("TRV4_NEWS3");
						unk_0xF9FBC2F3F73D94C9();
						unk_0x29CD142125FE177B(iLocal_305, "DISPLAY_SCROLL_TEXT");
						unk_0xD44E04EBBDC4CE88(1f);
						unk_0xD44E04EBBDC4CE88(2f);
						unk_0xF9FBC2F3F73D94C9();
						iLocal_355 = 1;
					}
				}
			}
		}
		if (iLocal_356 == 0)
		{
			if (unk_0xE59B7F5A03335350(iLocal_278, 0))
			{
				if (unk_0xB34E411B0A4BF096(iLocal_278))
				{
					if (unk_0x5B80643EF917B728(iLocal_278) > 115000f)
					{
						unk_0x29CD142125FE177B(iLocal_305, "SET_SCROLL_TEXT");
						unk_0xD44E04EBBDC4CE88(1f);
						unk_0xD44E04EBBDC4CE88(3f);
						func_269("TRV4_NEWS4");
						unk_0xF9FBC2F3F73D94C9();
						unk_0x29CD142125FE177B(iLocal_305, "DISPLAY_SCROLL_TEXT");
						unk_0xD44E04EBBDC4CE88(1f);
						unk_0xD44E04EBBDC4CE88(3f);
						unk_0xF9FBC2F3F73D94C9();
						iLocal_356 = 1;
					}
				}
			}
		}
		unk_0xF14A31FD690DC3B0(iLocal_226);
		unk_0x4B6031094354FED6(iLocal_305, 255, 255, 255, 0, 0);
		if (iLocal_334 == 0)
		{
			func_223(1, 1, 1, 0);
			unk_0x2FB83B8BD6C05FD2(iLocal_301, "ROAD_VIBRATION_SHAKE", 1f);
			unk_0x348665177DBFB93B(iLocal_301, true);
			unk_0x062C9995BFD27B2A(true, false, 3000, 1, 0, 0);
			unk_0x43F06392C4EF25E0(false);
			unk_0xD50A43D7C495F078(unk_0xB5CEFD608600A09F());
			func_267();
			iLocal_334 = 1;
		}
		func_265();
		unk_0x4E0EC60D119222B1(6);
		unk_0x4E0EC60D119222B1(7);
		unk_0x4E0EC60D119222B1(8);
		unk_0x4E0EC60D119222B1(9);
		unk_0x4E0EC60D119222B1(1);
		unk_0x4E0EC60D119222B1(2);
		unk_0x4E0EC60D119222B1(15);
		unk_0x4E0EC60D119222B1(3);
		unk_0xBBC4195AD74D153D(0, 85, 1);
		unk_0x6C23D8FD3FB29BAA(0);
	}
	else if (iLocal_334)
	{
		func_223(0, 1, 1, 0);
		unk_0x348665177DBFB93B(iLocal_301, false);
		unk_0x062C9995BFD27B2A(false, false, 3000, 1, 0, 0);
		unk_0x43F06392C4EF25E0(true);
		if (unk_0x144E80F5C46A6B75("SOL_3_CHOPPER_CAM"))
		{
			unk_0xC1300D0F3A74E20B("SOL_3_CHOPPER_CAM");
		}
		unk_0x38FF8CB6377D36F6(iLocal_261);
		func_243();
		unk_0x6C23D8FD3FB29BAA(1);
		iLocal_363[2] = 0;
		iLocal_334 = 0;
	}
}

void func_265()//Position - 0x188D6
{
	unk_0x2423B13D9CFAD1DD();
	func_266();
}

void func_266()//Position - 0x188E6
{
	Global_4336.f_86 = 1;
}

void func_267()//Position - 0x188F4
{
	Global_DAA6 = 1;
}

void func_268()//Position - 0x18900
{
	if (iLocal_228 > 4)
	{
		iLocal_228 = 0;
	}
	unk_0x29CD142125FE177B(iLocal_305, "DISPLAY_SCROLL_TEXT");
	unk_0x1E1FB49121565EB6(0);
	unk_0x1E1FB49121565EB6(iLocal_228);
	unk_0xF9FBC2F3F73D94C9();
	iLocal_228++;
}

void func_269(char* sParam0)//Position - 0x18937
{
	unk_0x57016C44F10111F0(sParam0);
	unk_0x64989E60CF560CA1();
}

void func_270(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4)//Position - 0x18949
{
	if (!func_278())
	{
		func_278();
	}
	else if (bParam0)
	{
		if (iParam4 == 1)
		{
			if (iLocal_50 <= 225 && iLocal_44 == 0)
			{
				iLocal_50 += 30;
				if (iLocal_50 >= 225)
				{
					iLocal_44 = 1;
				}
			}
			else if (iLocal_50 >= 30)
			{
				iLocal_50 = (iLocal_50 - 30);
				if (iLocal_50 <= 30)
				{
					iLocal_44 = 0;
				}
			}
		}
		func_277(1, 200);
		if (iLocal_48 <= iParam2 && iLocal_43 == 0)
		{
			iLocal_48++;
			func_274(1, iLocal_48);
			if (iLocal_48 == iParam2)
			{
				iLocal_43 = 1;
				iLocal_49 = unk_0x491B2241281A03B7(iParam3, iParam2);
			}
		}
		else if (iLocal_48 > 0)
		{
			if (iLocal_48 > iLocal_49)
			{
				iLocal_48 = (iLocal_48 - 1);
				func_274(1, iLocal_48);
				if (iLocal_48 == iLocal_49)
				{
					iLocal_43 = 0;
				}
			}
		}
		if (bParam1)
		{
			func_271(1, 40, 1, 1, 1);
		}
	}
}

void func_271(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x18A17
{
	if (!func_278())
	{
		func_278();
	}
	else if (bParam0)
	{
		if (bParam2)
		{
			if (!func_273(0))
			{
				func_272(0);
			}
			else
			{
				unk_0x51DA985AC0B70E2E("digitalOverlay", "nscuzz1", 0.5f, fLocal_51, 1f, 0.2f, 0f, 255, 255, 255, iParam1, 0);
			}
			if (fLocal_51 < 1f)
			{
				fLocal_51 = (fLocal_51 + 0.01f);
			}
			else
			{
				fLocal_51 = 0f;
			}
		}
		if (bParam3)
		{
			if (!func_273(1))
			{
				func_272(1);
			}
			else
			{
				unk_0x51DA985AC0B70E2E("digitalOverlay", "nscuzz2", 0.5f, fLocal_52, 1f, 0.2f, 0f, 255, 255, 255, iParam1, 0);
			}
			if (fLocal_52 < 1f)
			{
				fLocal_52 = (fLocal_52 + 0.02f);
			}
			else
			{
				fLocal_52 = 0f;
			}
		}
		if (bParam4)
		{
			if (!func_273(2))
			{
				func_272(2);
			}
			else
			{
				unk_0x51DA985AC0B70E2E("digitalOverlay", "nscuzz3", 0.5f, fLocal_53, 1f, 0.2f, 0f, 255, 255, 255, iParam1, 0);
			}
			if (fLocal_53 < 1f)
			{
				fLocal_53 = (fLocal_53 + 0.028f);
			}
			else
			{
				fLocal_53 = 0f;
			}
		}
	}
}

void func_272(int iParam0)//Position - 0x18B1E
{
	if (iParam0 < 32)
	{
		unk_0xF0059F27F7BB6680(&iLocal_54, iParam0);
	}
}

int func_273(int iParam0)//Position - 0x18B38
{
	if (unk_0xFA30DFD0084E92FE(iLocal_54, iParam0))
	{
		return 1;
	}
	return 0;
}

void func_274(bool bParam0, int iParam1)//Position - 0x18B50
{
	if (!func_278())
	{
		func_278();
	}
	else if (bParam0)
	{
		iLocal_46 = func_276(5);
		iLocal_45 = unk_0x491B2241281A03B7(0, 4);
		while (iLocal_47 == iLocal_46)
		{
			iLocal_46 = func_276(5);
		}
		if (iLocal_46 == 0)
		{
			if (!func_273(3))
			{
				func_272(3);
			}
			else
			{
				unk_0x51DA985AC0B70E2E("digitalOverlay", "Static1", 0.5f, 0.5f, (1f * func_275(bLocal_40)), (1f * func_275(bLocal_41)), 0f, 255, 255, 255, iParam1, 0);
			}
		}
		if (iLocal_46 == 1)
		{
			if (!func_273(4))
			{
				func_272(4);
			}
			else
			{
				unk_0x51DA985AC0B70E2E("digitalOverlay", "Static2", 0.5f, 0.5f, (1f * func_275(bLocal_40)), (1f * func_275(bLocal_41)), 0f, 255, 255, 255, iParam1, 0);
			}
		}
		if (iLocal_46 == 2)
		{
			if (!func_273(5))
			{
				func_272(5);
			}
			else
			{
				unk_0x51DA985AC0B70E2E("digitalOverlay", "Static3", 0.5f, 0.5f, (1f * func_275(bLocal_40)), (1f * func_275(bLocal_41)), 0f, 255, 255, 255, iParam1, 0);
			}
		}
		if (iLocal_46 == 3)
		{
			if (!func_273(6))
			{
				func_272(6);
			}
			else
			{
				unk_0x51DA985AC0B70E2E("digitalOverlay", "Static4", 0.5f, 0.5f, (1f * func_275(bLocal_40)), (1f * func_275(bLocal_41)), 0f, 255, 255, 255, iParam1, 0);
			}
		}
		if (iLocal_46 == 4)
		{
			if (!func_273(7))
			{
				func_272(7);
			}
			else
			{
				unk_0x51DA985AC0B70E2E("digitalOverlay", "Static5", 0.5f, 0.5f, (1f * func_275(bLocal_40)), (1f * func_275(bLocal_41)), 0f, 255, 255, 255, iParam1, 0);
			}
		}
	}
}

float func_275(bool bParam0)//Position - 0x18CE6
{
	if (bParam0)
	{
		return -1f;
	}
	else
	{
		return 1f;
	}
	return 1f;
}

int func_276(int iParam0)//Position - 0x18CFF
{
	if (unk_0x491B2241281A03B7(0, 50) > 25)
	{
		bLocal_40 = true;
	}
	else
	{
		bLocal_40 = false;
	}
	if (unk_0x491B2241281A03B7(0, 50) > 25)
	{
		bLocal_41 = true;
	}
	else
	{
		bLocal_41 = false;
	}
	return unk_0x491B2241281A03B7(0, iParam0);
}

void func_277(bool bParam0, int iParam1)//Position - 0x18D38
{
	if (!func_278())
	{
		func_278();
	}
	else if (bParam0)
	{
		if (iLocal_42)
		{
			if (!func_273(8))
			{
				func_272(8);
			}
			else
			{
				unk_0x51DA985AC0B70E2E("digitalOverlay", "nscanline1", 0.5f, 0.5f, 1f, 1f, 0f, 255, 255, 255, iParam1, 0);
			}
			iLocal_42 = 0;
		}
		else
		{
			if (!func_273(8))
			{
				func_272(8);
			}
			else
			{
				unk_0x51DA985AC0B70E2E("digitalOverlay", "nscanline1", 0.5f, 0.5f, -1f, -1f, 0f, 255, 255, 255, iParam1, 0);
			}
			iLocal_42 = 1;
		}
	}
}

int func_278()//Position - 0x18DC9
{
	unk_0x8AA3F48A15444B98("digitalOverlay", false);
	if (unk_0x499783D01578C2D2("digitalOverlay"))
	{
		return 1;
	}
	return 0;
}

int func_279(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x18DEA
{
	if (uParam0->f_1)
	{
		if (unk_0x105601648511CC64() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
				{
					if (func_285(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x105601648511CC64();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_284(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x105601648511CC64();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_284(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x105601648511CC64();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_285(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x105601648511CC64();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_283(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x105601648511CC64() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
					{
						if (!func_285(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x105601648511CC64();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_284(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x105601648511CC64();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_284(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x105601648511CC64();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_285(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x105601648511CC64();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
				{
					if (!func_285(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_284(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_284(bParam1, bParam2, bParam3) || unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1) || unk_0x74BCB6EDB1FFBFBA(unk_0xBC25C936A095B5BA(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_285(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x105601648511CC64() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
					{
						if (func_282(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_281(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1) || func_281(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1) || unk_0x74BCB6EDB1FFBFBA(unk_0xBC25C936A095B5BA(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_282(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_283(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_292(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_280();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

void func_280()//Position - 0x19156
{
	unk_0xF0059F27F7BB6680(&Global_93C, 4);
}

int func_281(bool bParam0, bool bParam1, bool bParam2)//Position - 0x19166
{
	if (!func_292(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		if (!unk_0xE1C3A331B6951C3D(unk_0xB5CEFD608600A09F()))
		{
			unk_0xBBC4195AD74D153D(0, 140, 1);
			unk_0xBBC4195AD74D153D(0, 80, 1);
			if (unk_0xCB3E71B7B7FACCAF(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_282(bool bParam0, bool bParam1, bool bParam2)//Position - 0x191B8
{
	if (!func_292(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0xBBC4195AD74D153D(0, 80, 1);
		if (unk_0xE92D56CE0416C875())
		{
			if (unk_0xCB3E71B7B7FACCAF(0, 80))
			{
				unk_0x4AED68BFACFB14CB(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_283(var uParam0)//Position - 0x19201
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_A / 2);
		if (uParam0->f_2 + iVar0) > unk_0x105601648511CC64()
		{
			return 1;
		}
	}
	return 0;
}

int func_284(bool bParam0, bool bParam1, bool bParam2)//Position - 0x1922C
{
	if (!func_292(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		if (!unk_0xE1C3A331B6951C3D(unk_0xB5CEFD608600A09F()))
		{
			unk_0xBBC4195AD74D153D(0, 140, 1);
			unk_0xBBC4195AD74D153D(0, 80, 1);
			if (unk_0xD3C4A010282C31F2(0, 80) && unk_0x105601648511CC64() > Global_74)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_285(bool bParam0, bool bParam1, bool bParam2)//Position - 0x1928B
{
	if (!func_292(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0xBBC4195AD74D153D(0, 80, 1);
		if (unk_0xE92D56CE0416C875())
		{
			if (unk_0xD3C4A010282C31F2(0, 80) && unk_0x105601648511CC64() > Global_74)
			{
				unk_0x4AED68BFACFB14CB(false);
				return 1;
			}
		}
	}
	return 0;
}

void func_286(bool bParam0)//Position - 0x192E1
{
	if (bParam0)
	{
		func_290();
		if (Global_389D.f_1 == 10 || Global_389D.f_1 == 9)
		{
			unk_0xF0059F27F7BB6680(&Global_93C, 16);
		}
		Global_389D.f_1 = 1;
		if (func_289(0))
		{
			func_287(0);
		}
	}
	else if (Global_389D.f_1 == 1)
	{
		if (!Global_389D.f_1 == 0)
		{
			Global_389D.f_1 = 3;
		}
	}
}

void func_287(int iParam0)//Position - 0x19344
{
	if (Global_3943)
	{
		func_288(0, 0);
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
	if (!func_224())
	{
		Global_389D.f_1 = 3;
	}
}

void func_288(bool bParam0, bool bParam1)//Position - 0x193B4
{
	if (bParam0)
	{
		if (func_289(0))
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

int func_289(int iParam0)//Position - 0x19428
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

void func_290()//Position - 0x19482
{
	if (Global_389D.f_1 == 9 || Global_389D.f_1 == 10)
	{
		Global_3DED = 0;
		Global_3DE9 = 1;
	}
}

void func_291(char* sParam0, int iParam1)//Position - 0x194AB
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, true, iParam1);
}

int func_292(bool bParam0, bool bParam1, bool bParam2)//Position - 0x194C2
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x7930B3E9C919E90F())
	{
		return 0;
	}
	if (func_289(0))
	{
		return 0;
	}
	if (func_299())
	{
		return 0;
	}
	if (unk_0xF32BA80A2DED1FC6())
	{
		return 0;
	}
	if (Global_10AB8)
	{
		return 0;
	}
	if (unk_0xB731B8C5BCE89836(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_CF9C)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
		{
			if (unk_0x11030C52A0DDFF8C(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x3D875C2512206692(3) == 3 || unk_0x3D875C2512206692(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xE3CA72BD77D43B09(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x3D875C2512206692(6) == 3 || unk_0x3D875C2512206692(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x57379381A330B2FF(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x3D875C2512206692(4) == 3 || unk_0x3D875C2512206692(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xD3A0CD3AD9C3D22A(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x3D875C2512206692(5) == 3 || unk_0x3D875C2512206692(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x5CFC8E6CC224744A(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x3D875C2512206692(2) == 3 || unk_0x3D875C2512206692(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x621126C4FACA4770() == 3 || unk_0x621126C4FACA4770() == 4)
			{
				return 0;
			}
			if (unk_0x4FD86C3E23A67AB9())
			{
				return 0;
			}
		}
	}
	if ((func_298() || func_297(Global_440000.f_243FE)) || func_296())
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			iVar1 = func_295(unk_0xBC25C936A095B5BA(), 0);
			if (((unk_0xE8E192A5EFE0253F(iVar0, iVar1) || (unk_0x6F79ECA8C83E4357(iVar0) == 562680400 && iVar1 != -1)) || (unk_0x6F79ECA8C83E4357(iVar0) == 1181327175 && iVar1 != -1)) || (((unk_0x6F79ECA8C83E4357(iVar0) == -1693015116 && iVar1 == 0) && func_294(iVar0, 10)) && unk_0x3EB14CBD49DA0017(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (func_293(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	return 1;
}

int func_293(int iParam0)//Position - 0x19710
{
	if (iParam0 != func_88())
	{
		if (func_178(iParam0, 1, 1))
		{
			return Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1;
		}
		else if ((Global_140856 && iParam0 == unk_0xB5CEFD608600A09F()) && func_178(iParam0, 1, 0))
		{
			return Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1;
		}
	}
	return 0;
}

int func_294(int iParam0, int iParam1)//Position - 0x19776
{
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		if (unk_0xA6BE0954FC6BAA16(iParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 1;
					break;
				
				default:
					if (unk_0x34374BDFA570F489(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_295(int iParam0, int iParam1)//Position - 0x197D8
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

var func_296()//Position - 0x1985D
{
	return Global_255A46.f_10;
}

bool func_297(int iParam0)//Position - 0x1986B
{
	return iParam0 == 51;
}

var func_298()//Position - 0x19878
{
	return Global_255A46.f_F;
}

bool func_299()//Position - 0x19886
{
	return unk_0x105601648511CC64() <= Global_43C1.f_1671 + 100;
}

void func_300(int iParam0, int iParam1, float fParam2)//Position - 0x1989B
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!unk_0x1D403DFADBC2DE3C(iParam1, 0))
	{
		if (unk_0xB34E411B0A4BF096(iParam1))
		{
			unk_0x821B5D8CB4B20F84(iParam1, fParam2);
			vVar0 = { unk_0x541C2AEF053615BC(iParam1, true) };
			vVar1 = { unk_0xD7490CDEF40F3DA2(iParam1, 2) };
			unk_0x6125108F6208C1F6(iParam0, vVar0);
			unk_0x3553F2A72957724E(iParam0, vVar1, 2);
		}
	}
}

void func_301(int iParam0, int iParam1, char* sParam2, int iParam3)//Position - 0x198EA
{
	vector3 vVar0;
	
	if (!unk_0x1D403DFADBC2DE3C(iParam1, 0))
	{
		unk_0xDC078F87049ECECE(iParam1, false, 0);
		unk_0xD434A01DEA38A939(iParam1, false, 0);
		unk_0x1E5C2A1EAB944289(iParam1, true);
		unk_0x06D93FD5E4D394CF(iParam1, true, true, true, true, true, false, 0, false);
		unk_0x9E6D037EC3389728(iParam1, iParam3, sParam2, 1);
		vVar0 = { unk_0x541C2AEF053615BC(iParam1, true) };
		unk_0x6125108F6208C1F6(iParam0, vVar0);
		unk_0x3553F2A72957724E(iParam0, unk_0xD7490CDEF40F3DA2(iParam1, 2), 2);
	}
}

void func_302()//Position - 0x19953
{
	if (iLocal_260 != -1)
	{
		if (iLocal_382 == 1)
		{
			if (iLocal_374 == 0)
			{
				unk_0x26D344275839A25E(iLocal_260);
				iLocal_384 = 0;
				iLocal_374 = 1;
			}
		}
	}
	if (iLocal_255 != -1)
	{
		if (iLocal_378 == 1)
		{
			if (iLocal_376 == 0)
			{
				unk_0x26D344275839A25E(iLocal_255);
				iLocal_385 = 0;
				iLocal_376 = 1;
			}
		}
	}
	if (iLocal_256 != -1)
	{
		if (iLocal_383 == 1)
		{
			if (iLocal_365 == 0)
			{
				unk_0x26D344275839A25E(iLocal_256);
				iLocal_386 = 0;
				iLocal_365 = 1;
			}
		}
	}
	if (iLocal_257 != -1)
	{
		if (iLocal_379 == 1)
		{
			if (iLocal_375 == 0)
			{
				unk_0x26D344275839A25E(iLocal_257);
				iLocal_387 = 0;
				iLocal_375 = 1;
			}
		}
	}
	if (iLocal_258 != -1)
	{
		if (iLocal_380 == 1)
		{
			if (iLocal_377 == 0)
			{
				unk_0x26D344275839A25E(iLocal_258);
				iLocal_388 = 0;
				iLocal_377 = 1;
			}
		}
	}
}

void func_303()//Position - 0x19A0F
{
	if (unk_0x724D816EA203A79E(iLocal_204[19]))
	{
		if (!unk_0x1D403DFADBC2DE3C(iLocal_204[19], 0))
		{
			if (!unk_0xAAED47028764A78D(iLocal_204[19]))
			{
				unk_0x0FB6723EA68C0881(iLocal_204[19], true);
			}
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_204[7]))
	{
		if (!unk_0x1D403DFADBC2DE3C(iLocal_204[7], 0))
		{
			if (!unk_0xAAED47028764A78D(iLocal_204[7]))
			{
				unk_0x0FB6723EA68C0881(iLocal_204[7], true);
			}
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_204[8]))
	{
		if (!unk_0x1D403DFADBC2DE3C(iLocal_204[8], 0))
		{
			if (!unk_0xAAED47028764A78D(iLocal_204[8]))
			{
				unk_0x0FB6723EA68C0881(iLocal_204[8], true);
			}
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_204[9]))
	{
		if (!unk_0x1D403DFADBC2DE3C(iLocal_204[9], 0))
		{
			if (!unk_0xAAED47028764A78D(iLocal_204[9]))
			{
				unk_0x0FB6723EA68C0881(iLocal_204[9], true);
			}
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_204[10]))
	{
		if (!unk_0x1D403DFADBC2DE3C(iLocal_204[10], 0))
		{
			if (!unk_0xAAED47028764A78D(iLocal_204[10]))
			{
				unk_0x0FB6723EA68C0881(iLocal_204[10], true);
			}
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_204[11]))
	{
		if (!unk_0x1D403DFADBC2DE3C(iLocal_204[11], 0))
		{
			if (!unk_0xAAED47028764A78D(iLocal_204[11]))
			{
				unk_0x0FB6723EA68C0881(iLocal_204[11], true);
			}
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_204[13]))
	{
		if (!unk_0x1D403DFADBC2DE3C(iLocal_204[13], 0))
		{
			if (!unk_0xAAED47028764A78D(iLocal_204[13]))
			{
				unk_0x0FB6723EA68C0881(iLocal_204[13], true);
			}
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_204[14]))
	{
		if (!unk_0x1D403DFADBC2DE3C(iLocal_204[14], 0))
		{
			if (!unk_0xAAED47028764A78D(iLocal_204[14]))
			{
				unk_0x0FB6723EA68C0881(iLocal_204[14], true);
			}
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_204[15]))
	{
		if (!unk_0x1D403DFADBC2DE3C(iLocal_204[15], 0))
		{
			if (!unk_0xAAED47028764A78D(iLocal_204[15]))
			{
				unk_0x0FB6723EA68C0881(iLocal_204[15], true);
			}
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_204[16]))
	{
		if (!unk_0x1D403DFADBC2DE3C(iLocal_204[16], 0))
		{
			if (!unk_0xAAED47028764A78D(iLocal_204[16]))
			{
				unk_0x0FB6723EA68C0881(iLocal_204[16], true);
			}
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_204[17]))
	{
		if (!unk_0x1D403DFADBC2DE3C(iLocal_204[17], 0))
		{
			if (!unk_0xAAED47028764A78D(iLocal_204[17]))
			{
				unk_0x0FB6723EA68C0881(iLocal_204[17], true);
			}
		}
	}
}

void func_304()//Position - 0x19C86
{
	if (func_335())
	{
		fLocal_322 = 0.5f;
	}
	else if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		if (unk_0x2D175DF90F6F05C3(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)) > 40f)
		{
			fLocal_322 = 0.85f;
		}
		else
		{
			fLocal_322 = 0.9f;
		}
	}
	else
	{
		fLocal_322 = 0.9f;
	}
	if (!unk_0x1D403DFADBC2DE3C(iLocal_278, 0))
	{
		if (unk_0xE59B7F5A03335350(iLocal_278, 0))
		{
			if (unk_0xB34E411B0A4BF096(iLocal_278))
			{
				if (iLocal_357 == 0)
				{
					if (unk_0x5B80643EF917B728(iLocal_278) < 10000f)
					{
						if (func_16(unk_0xBC25C936A095B5BA(), iLocal_278, 1) < 100f || unk_0xD1DC4B08247A4317(iLocal_278))
						{
							func_331(iLocal_278, unk_0xBC25C936A095B5BA(), &fLocal_321, 1f, 40f, 55f, 100f, 1.7f, 1f, fLocal_322, 0);
							unk_0x821B5D8CB4B20F84(iLocal_278, fLocal_321);
							func_305(iLocal_278, fLocal_321);
						}
						else
						{
							func_331(iLocal_278, unk_0xBC25C936A095B5BA(), &fLocal_321, 0.6f, 40f, 50f, 60f, 1.7f, 1f, fLocal_322, 0);
							unk_0x821B5D8CB4B20F84(iLocal_278, fLocal_321);
							func_305(iLocal_278, fLocal_321);
						}
					}
				}
				else if (func_16(unk_0xBC25C936A095B5BA(), iLocal_278, 1) > 175f)
				{
					fLocal_321 = 0.6f;
					unk_0x821B5D8CB4B20F84(iLocal_278, fLocal_321);
					func_305(iLocal_278, fLocal_321);
				}
				else if (unk_0x5B80643EF917B728(iLocal_278) < 10000f)
				{
					func_331(iLocal_278, unk_0xBC25C936A095B5BA(), &fLocal_321, 1f, 25f, 40f, 180f, 1.7f, 1f, fLocal_322, 0);
					unk_0x821B5D8CB4B20F84(iLocal_278, fLocal_321);
					func_305(iLocal_278, fLocal_321);
				}
				if (unk_0x5B80643EF917B728(iLocal_278) > 10000f && unk_0x5B80643EF917B728(iLocal_278) < 23000f)
				{
					if (unk_0xE59B7F5A03335350(iLocal_204[8], 0))
					{
						func_331(iLocal_204[8], unk_0xBC25C936A095B5BA(), &fLocal_321, 1f, 25f, 30f, 50f, 1.7f, 0.5f, fLocal_322, 1);
						unk_0x821B5D8CB4B20F84(iLocal_278, fLocal_321);
						func_305(iLocal_278, fLocal_321);
					}
					else
					{
						func_331(iLocal_278, unk_0xBC25C936A095B5BA(), &fLocal_321, 1f, 25f, 35f, 180f, 1.7f, 0.5f, fLocal_322, 1);
						unk_0x821B5D8CB4B20F84(iLocal_278, fLocal_321);
						func_305(iLocal_278, fLocal_321);
					}
				}
				if (unk_0x5B80643EF917B728(iLocal_278) > 23000f && unk_0x5B80643EF917B728(iLocal_278) < 32000f)
				{
					if (unk_0x724D816EA203A79E(iLocal_204[7]))
					{
						if (unk_0xE59B7F5A03335350(iLocal_204[7], 0))
						{
							func_331(iLocal_204[7], unk_0xBC25C936A095B5BA(), &fLocal_321, 1f, 20f, 30f, 100f, 1.8f, 1f, fLocal_322, 0);
							unk_0x821B5D8CB4B20F84(iLocal_278, fLocal_321);
							func_305(iLocal_278, fLocal_321);
						}
						else if (unk_0x724D816EA203A79E(iLocal_204[8]))
						{
							if (unk_0xE59B7F5A03335350(iLocal_204[8], 0))
							{
								func_331(iLocal_204[8], unk_0xBC25C936A095B5BA(), &fLocal_321, 1f, 10f, 20f, 40f, 1.8f, 1f, fLocal_322, 0);
								unk_0x821B5D8CB4B20F84(iLocal_278, fLocal_321);
								func_305(iLocal_278, fLocal_321);
							}
							else
							{
								func_331(iLocal_278, unk_0xBC25C936A095B5BA(), &fLocal_321, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_322, 0);
								unk_0x821B5D8CB4B20F84(iLocal_278, fLocal_321);
								func_305(iLocal_278, fLocal_321);
							}
						}
						else
						{
							func_331(iLocal_278, unk_0xBC25C936A095B5BA(), &fLocal_321, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_322, 0);
							unk_0x821B5D8CB4B20F84(iLocal_278, fLocal_321);
							func_305(iLocal_278, fLocal_321);
						}
					}
					else if (unk_0x724D816EA203A79E(iLocal_204[8]))
					{
						if (unk_0xE59B7F5A03335350(iLocal_204[8], 0))
						{
							func_331(iLocal_204[8], unk_0xBC25C936A095B5BA(), &fLocal_321, 1f, 10f, 20f, 40f, 1.8f, 1f, fLocal_322, 0);
							unk_0x821B5D8CB4B20F84(iLocal_278, fLocal_321);
							func_305(iLocal_278, fLocal_321);
						}
						else
						{
							func_331(iLocal_278, unk_0xBC25C936A095B5BA(), &fLocal_321, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_322, 0);
							unk_0x821B5D8CB4B20F84(iLocal_278, fLocal_321);
							func_305(iLocal_278, fLocal_321);
						}
					}
					else
					{
						func_331(iLocal_278, unk_0xBC25C936A095B5BA(), &fLocal_321, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_322, 0);
						unk_0x821B5D8CB4B20F84(iLocal_278, fLocal_321);
						func_305(iLocal_278, fLocal_321);
					}
				}
				if (unk_0x5B80643EF917B728(iLocal_278) > 32000f && unk_0x5B80643EF917B728(iLocal_278) < 39000f)
				{
					if (unk_0x724D816EA203A79E(iLocal_204[7]))
					{
						if (unk_0xE59B7F5A03335350(iLocal_204[7], 0))
						{
							func_331(iLocal_204[7], unk_0xBC25C936A095B5BA(), &fLocal_321, 1f, 22f, 25f, 100f, 1.8f, 0.5f, fLocal_322, 1);
							unk_0x821B5D8CB4B20F84(iLocal_278, fLocal_321);
							func_305(iLocal_278, fLocal_321);
						}
						else
						{
							func_331(iLocal_278, unk_0xBC25C936A095B5BA(), &fLocal_321, 1f, 25f, 35f, 150f, 1.8f, 0.5f, fLocal_322, 1);
							unk_0x821B5D8CB4B20F84(iLocal_278, fLocal_321);
							func_305(iLocal_278, fLocal_321);
						}
					}
					else
					{
						func_331(iLocal_278, unk_0xBC25C936A095B5BA(), &fLocal_321, 1f, 25f, 35f, 150f, 1.8f, 0.5f, fLocal_322, 1);
						unk_0x821B5D8CB4B20F84(iLocal_278, fLocal_321);
						func_305(iLocal_278, fLocal_321);
					}
				}
				if (unk_0x5B80643EF917B728(iLocal_278) > 39000f && unk_0x5B80643EF917B728(iLocal_278) < 56000f)
				{
					if (unk_0xE59B7F5A03335350(iLocal_204[8], 0))
					{
						func_331(iLocal_204[8], unk_0xBC25C936A095B5BA(), &fLocal_321, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_322, 0);
						unk_0x821B5D8CB4B20F84(iLocal_278, fLocal_321);
						func_305(iLocal_278, fLocal_321);
					}
					else
					{
						func_331(iLocal_278, unk_0xBC25C936A095B5BA(), &fLocal_321, 1f, 25f, 35f, 150f, 1.8f, 1f, fLocal_322, 0);
						unk_0x821B5D8CB4B20F84(iLocal_278, fLocal_321);
						func_305(iLocal_278, fLocal_321);
					}
				}
				if (unk_0x5B80643EF917B728(iLocal_278) > 56000f && unk_0x5B80643EF917B728(iLocal_278) < 65000f)
				{
					if (unk_0xE59B7F5A03335350(iLocal_204[11], 0))
					{
						func_331(iLocal_204[11], unk_0xBC25C936A095B5BA(), &fLocal_321, 1f, 25f, 30f, 100f, 1.8f, 1f, fLocal_322, 0);
						unk_0x821B5D8CB4B20F84(iLocal_278, fLocal_321);
						func_305(iLocal_278, fLocal_321);
					}
					else
					{
						func_331(iLocal_278, unk_0xBC25C936A095B5BA(), &fLocal_321, 1f, 25f, 35f, 100f, 1.8f, 1f, fLocal_322, 0);
						unk_0x821B5D8CB4B20F84(iLocal_278, fLocal_321);
						func_305(iLocal_278, fLocal_321);
					}
				}
				if (unk_0x5B80643EF917B728(iLocal_278) > 65000f && unk_0x5B80643EF917B728(iLocal_278) < 90000f)
				{
					if (unk_0x724D816EA203A79E(iLocal_204[13]))
					{
						if (unk_0xE59B7F5A03335350(iLocal_204[13], 0))
						{
							func_331(iLocal_204[13], unk_0xBC25C936A095B5BA(), &fLocal_321, 1f, 30f, 35f, 50f, 1.8f, 1f, fLocal_322, 0);
							unk_0x821B5D8CB4B20F84(iLocal_278, fLocal_321);
							func_305(iLocal_278, fLocal_321);
						}
						else
						{
							func_331(iLocal_278, unk_0xBC25C936A095B5BA(), &fLocal_321, 1f, 45f, 55f, 150f, 1.8f, 1f, fLocal_322, 0);
							unk_0x821B5D8CB4B20F84(iLocal_278, fLocal_321);
							func_305(iLocal_278, fLocal_321);
						}
					}
					else
					{
						func_331(iLocal_278, unk_0xBC25C936A095B5BA(), &fLocal_321, 1f, 45f, 55f, 150f, 1.8f, 1f, fLocal_322, 0);
						unk_0x821B5D8CB4B20F84(iLocal_278, fLocal_321);
						func_305(iLocal_278, fLocal_321);
					}
				}
				if (unk_0x5B80643EF917B728(iLocal_278) > 90000f && unk_0x5B80643EF917B728(iLocal_278) < 110000f)
				{
					func_331(iLocal_278, unk_0xBC25C936A095B5BA(), &fLocal_321, 1f, 60f, 70f, 150f, 1.5f, 0.5f, fLocal_322, 1);
					unk_0x821B5D8CB4B20F84(iLocal_278, fLocal_321);
					func_305(iLocal_278, fLocal_321);
				}
				if (unk_0x5B80643EF917B728(iLocal_278) > 110000f)
				{
					func_331(iLocal_278, unk_0xBC25C936A095B5BA(), &fLocal_321, 1f, 100f, 120f, 150f, 1.6f, 1f, fLocal_322, 0);
					unk_0x821B5D8CB4B20F84(iLocal_278, fLocal_321);
					func_305(iLocal_278, fLocal_321);
				}
			}
		}
	}
}

void func_305(int iParam0, float fParam1)//Position - 0x1A53D
{
	float fVar0;
	vector3 vVar1;
	int iVar2;
	
	fVar0 = unk_0x11F9F9006143871A();
	fVar0 = (fVar0 * 1000f);
	bLocal_106 = false;
	if (!bLocal_88)
	{
		if (bLocal_87)
		{
			func_330();
			if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
			{
				vVar1 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
				unk_0x6C5F5B5F6894CCE3(vVar1, 1000f, 1, 0, 0, false);
			}
			bLocal_88 = true;
		}
	}
	else if (!bLocal_87)
	{
		func_206();
		bLocal_88 = false;
	}
	if (bLocal_87)
	{
		fParam1 = 1f;
		unk_0x598D851D7D0D2BA3(0f);
	}
	if (!bLocal_81)
	{
		if (iLocal_76)
		{
			fLocal_133 = 0f;
		}
		else
		{
			fLocal_133 = 1f;
		}
		if (unk_0xE59B7F5A03335350(iParam0, 0))
		{
			if (unk_0xB34E411B0A4BF096(iParam0))
			{
				if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
				{
					if (func_329(unk_0xBC25C936A095B5BA(), iParam0))
					{
						iLocal_86 = 1;
					}
					else
					{
						iLocal_86 = 0;
					}
				}
				fLocal_130 = unk_0x5B80643EF917B728(iParam0);
				unk_0x821B5D8CB4B20F84(iParam0, ((fParam1 * fLocal_131) * fLocal_133));
				if (bLocal_85)
				{
					func_328(iParam0, fLocal_130);
					func_327(iParam0, fLocal_140);
					if (fLocal_135 > 1000f)
					{
						if (iLocal_172 == 0)
						{
							func_326(iParam0, fLocal_140);
						}
						fVar0 = ((fLocal_130 + 4000f) + (SYSTEM::TO_FLOAT(iLocal_172) * 2000f));
						func_325(iParam0, fVar0, fLocal_134);
						iLocal_172++;
						if (iLocal_172 > 2)
						{
							fLocal_135 = 0f;
						}
					}
					else
					{
						iLocal_172 = 0;
						fLocal_135 = (fLocal_135 + (unk_0x11F9F9006143871A() * 1000f));
					}
				}
			}
		}
		iVar2 = 0;
		if (unk_0xE59B7F5A03335350(iParam0, 0))
		{
			if (unk_0xB34E411B0A4BF096(iParam0))
			{
				iVar2 = 1;
			}
		}
		if (fLocal_130 == 0f || unk_0x17FAADF9916EF741())
		{
			iVar2 = 1;
		}
		if (iVar2 && !bLocal_93)
		{
			if (!iLocal_75)
			{
				func_322(iParam0, ((fParam1 * fLocal_131) * fLocal_133), 0);
				if (!iLocal_96)
				{
				}
				iLocal_96 = 0;
			}
			if (bLocal_78)
			{
				func_321(iParam0);
			}
			if (!iLocal_75)
			{
				func_308(iParam0, ((fParam1 * fLocal_131) * fLocal_133), 0);
			}
		}
		if (iLocal_83)
		{
			if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
			{
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
				{
					iLocal_206 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
					vLocal_176 = { unk_0x541C2AEF053615BC(iLocal_206, true) };
					unk_0x4A162BFE80EDA54D(iLocal_206, &fLocal_114, &fLocal_115, &fLocal_116, &fLocal_117);
				}
			}
			iLocal_83 = 0;
		}
		if (iLocal_82)
		{
			if (unk_0x724D816EA203A79E(iLocal_206))
			{
				func_198(iLocal_207);
				iLocal_207 = iLocal_206;
			}
			if (unk_0xE59B7F5A03335350(iLocal_207, 0))
			{
				unk_0x641B19E156645A92(iLocal_207, vLocal_176, 1, false, 0, 1);
				unk_0xC239B590ECA50DD0(iLocal_207, fLocal_114, fLocal_115, fLocal_116, fLocal_117);
			}
			fLocal_129 = fLocal_132;
			iLocal_75 = 1;
			iLocal_82 = 0;
		}
		if (iLocal_75)
		{
			while (!func_306(&iParam0, fLocal_129))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_76 = 1;
		}
		if (iLocal_89)
		{
			iLocal_89 = 0;
		}
	}
}

int func_306(int iParam0, float fParam1)//Position - 0x1A7D8
{
	if (!iLocal_90)
	{
		iLocal_75 = 1;
		func_193();
		if (unk_0xE59B7F5A03335350(*iParam0, 0))
		{
			if (unk_0xB34E411B0A4BF096(*iParam0))
			{
				unk_0xD87F0F9CDF39238A(*iParam0);
				unk_0x3F91283C7E2D2183(*iParam0);
			}
			if (!iLocal_159 == -1)
			{
				while (!func_307(iParam0, iLocal_159, fParam1, 1, 0, 0, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				if (!bLocal_80)
				{
					iLocal_76 = 1;
					fLocal_133 = 0f;
					iLocal_160 = 0;
					iLocal_162 = 0;
					iLocal_161 = 0;
					iLocal_156 = 0;
					iLocal_157 = 0;
					iLocal_158 = 0;
					iLocal_163 = 0;
					iLocal_164 = 0;
					iLocal_165 = 0;
				}
			}
		}
		iLocal_90 = 1;
	}
	else
	{
		if (unk_0xE59B7F5A03335350(*iParam0, 0))
		{
			if (unk_0xB34E411B0A4BF096(*iParam0))
			{
				unk_0x821B5D8CB4B20F84(*iParam0, ((1f * fLocal_131) * fLocal_133));
				func_307(iParam0, iLocal_159, fParam1, 1, 0, 0, 0, 0);
			}
		}
		fLocal_130 = fParam1;
		iLocal_166 = 0;
		iLocal_169 = 0;
		fLocal_145 = 0f;
		fLocal_144 = 0f;
		func_308(*iParam0, ((1f * fLocal_131) * fLocal_133), 1);
		func_322(*iParam0, ((1f * fLocal_131) * fLocal_133), 1);
		func_321(*iParam0);
		if ((iLocal_163 == 0 && iLocal_164 == 0) && iLocal_165 == 0)
		{
			iLocal_76 = 0;
			iLocal_75 = 0;
			iLocal_90 = 0;
			return 1;
		}
	}
	return 0;
}

int func_307(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x1A90A
{
	float fVar0;
	
	if (iParam1 > 0)
	{
		unk_0x1B2A7C8188ADBE04(iParam1, &cLocal_185);
		if (unk_0x00D24B3F2A5CD22C(iParam1, &cLocal_185))
		{
			if (unk_0xE59B7F5A03335350(*uParam0, 0))
			{
				if (!unk_0xB34E411B0A4BF096(*uParam0))
				{
					unk_0x346478B12F69D4E3(*uParam0, false);
					if (bParam4)
					{
						unk_0xE37240B7B5886F43(*uParam0, iParam1, &cLocal_185, 10f, 786603);
					}
					else
					{
						if (iParam1 != iLocal_167 && iParam1 != iLocal_168)
						{
							if (bParam7)
							{
								unk_0x9CBD4853E502D342(*uParam0, iParam1, &cLocal_185, 2 | 4, 0, 786603);
							}
							else if (bParam6)
							{
								unk_0x9CBD4853E502D342(*uParam0, iParam1, &cLocal_185, 1 | 4, 0, 786603);
							}
							else
							{
								unk_0x9E6D037EC3389728(*uParam0, iParam1, &cLocal_185, 1);
							}
						}
						else
						{
							unk_0x9E6D037EC3389728(*uParam0, iParam1, &cLocal_185, 1);
						}
						unk_0x57C1D06186DCC318(*uParam0, fParam2);
						if (bParam5)
						{
							unk_0xC1C651D8C6AF61E6(*uParam0, 1);
						}
						return 1;
					}
				}
				else if (unk_0x47296952F125937B(*uParam0) == unk_0xE42C8D4CE70B2D35(iParam1, &cLocal_185))
				{
					fVar0 = unk_0x5B80643EF917B728(*uParam0);
					unk_0x57C1D06186DCC318(*uParam0, (fParam2 - fVar0));
					if (!bParam3)
					{
						unk_0xD87F0F9CDF39238A(*uParam0);
						unk_0x1B2A7C8188ADBE04(iParam1, &cLocal_185);
					}
					if (bParam5)
					{
						unk_0xC1C651D8C6AF61E6(*uParam0, 1);
					}
					return 1;
				}
				else
				{
					unk_0xD87F0F9CDF39238A(*uParam0);
					unk_0x346478B12F69D4E3(*uParam0, false);
					if (bParam4)
					{
						unk_0xE37240B7B5886F43(*uParam0, iParam1, &cLocal_185, 10f, 786603);
					}
					else if (iParam1 != iLocal_167 && iParam1 != iLocal_168)
					{
						if (bParam7)
						{
							unk_0x9CBD4853E502D342(*uParam0, iParam1, &cLocal_185, 2 | 4, 0, 786603);
						}
						else if (bParam6)
						{
							unk_0x9CBD4853E502D342(*uParam0, iParam1, &cLocal_185, 1 | 4, 0, 786603);
						}
						else
						{
							unk_0x9E6D037EC3389728(*uParam0, iParam1, &cLocal_185, 1);
						}
					}
					else
					{
						unk_0x9E6D037EC3389728(*uParam0, iParam1, &cLocal_185, 1);
					}
					unk_0x57C1D06186DCC318(*uParam0, fParam2);
					if (bParam5)
					{
						unk_0xC1C651D8C6AF61E6(*uParam0, 1);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_308(int iParam0, float fParam1, bool bParam2)//Position - 0x1AAF0
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	var uVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	
	bVar9 = unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F());
	bVar10 = unk_0x451E6C7D03F23009();
	uVar11 = unk_0x5C9E0DAF2A1EEF29();
	bVar12 = false;
	if (bVar9)
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			iVar2 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
		}
		vVar5 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
	}
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		iVar0 = iLocal_162;
		while (iVar0 < 35)
		{
			if (iLocal_153[iVar0] != 99)
			{
				if (iLocal_153[iVar0] == 0)
				{
					if (iLocal_152[iVar0] > 0)
					{
						if (!iLocal_75)
						{
							if (fLocal_130 > (fLocal_122[iVar0] - (7000f * fParam1)))
							{
								if (func_320(iLocal_197[iVar0]))
								{
									unk_0xF0059F27F7BB6680(&(iLocal_154[iVar0]), 0);
								}
								else if (unk_0x7512ED01F3F46714(iLocal_197[iVar0]))
								{
									unk_0xF0059F27F7BB6680(&(iLocal_154[iVar0]), 2);
								}
								unk_0x7CB6FD92BE491AD9(&(iLocal_154[iVar0]), 1);
								iLocal_153[iVar0]++;
								iLocal_164++;
							}
						}
						else
						{
							fVar6 = (fLocal_130 - fLocal_122[iVar0]);
							fVar6 = (fVar6 * fLocal_123[iVar0]);
							if (fVar6 >= 0f)
							{
								if (fVar6 < func_319(iLocal_152[iVar0]))
								{
									if (func_320(iLocal_197[iVar0]))
									{
										unk_0xF0059F27F7BB6680(&(iLocal_154[iVar0]), 0);
									}
									else if (unk_0x7512ED01F3F46714(iLocal_197[iVar0]))
									{
										unk_0xF0059F27F7BB6680(&(iLocal_154[iVar0]), 2);
									}
									unk_0x7CB6FD92BE491AD9(&(iLocal_154[iVar0]), 1);
									iLocal_153[iVar0]++;
									iLocal_164++;
								}
								else
								{
									iLocal_153[iVar0] = 99;
								}
							}
						}
					}
					else
					{
						iLocal_153[iVar0] = 99;
					}
				}
				else if (iLocal_153[iVar0] == 1)
				{
					bVar8 = false;
					unk_0x1B2A7C8188ADBE04(iLocal_152[iVar0], &cLocal_185);
					if (unk_0xFA30DFD0084E92FE(iLocal_154[iVar0], 0))
					{
						unk_0xF243B7A14FCFD0F4(func_202());
						bVar8 = unk_0xD6513D668481290A(func_202());
					}
					else if (!bLocal_102 && ((!unk_0xFA30DFD0084E92FE(iLocal_154[iVar0], 2) && bVar10) || (unk_0xFA30DFD0084E92FE(iLocal_154[iVar0], 2) && uVar11)))
					{
						bVar8 = true;
					}
					else
					{
						unk_0xF243B7A14FCFD0F4(func_205());
						bVar8 = unk_0xD6513D668481290A(func_205());
					}
					if (bVar8)
					{
						if (!unk_0x724D816EA203A79E(iLocal_204[iVar0]))
						{
							unk_0xF243B7A14FCFD0F4(iLocal_197[iVar0]);
							if (unk_0xD6513D668481290A(iLocal_197[iVar0]) && unk_0x00D24B3F2A5CD22C(iLocal_152[iVar0], &cLocal_185))
							{
								if (fLocal_130 >= (fLocal_122[iVar0] - (fLocal_143 * fParam1)))
								{
									if ((iLocal_89 || bParam2) || (!bLocal_106 && !func_318(vLocal_175[iVar0 /*3*/], vVar5, 5f, fLocal_141)))
									{
										if (bLocal_85)
										{
											func_317(vLocal_175[iVar0 /*3*/], vVar5, fLocal_134);
										}
										iLocal_204[iVar0] = unk_0x61C05BF08A1E0EFE(iLocal_197[iVar0], vLocal_175[iVar0 /*3*/], 0f, false, false, false);
										if (iLocal_197[iVar0] == joaat("polmav"))
										{
											unk_0x7170EF3CEB4D0224(iLocal_204[iVar0], 0);
										}
										if (uLocal_98 && !unk_0xFA30DFD0084E92FE(iLocal_154[iVar0], 0))
										{
											func_316(iLocal_204[iVar0]);
										}
										if (unk_0xFA30DFD0084E92FE(iLocal_154[iVar0], 3))
										{
											unk_0x656194E145691D3E(iLocal_204[iVar0], true);
										}
										unk_0xD5874E4A4BF782FC(iLocal_204[iVar0], vLocal_175[iVar0 /*3*/], 0, 0, 1);
										unk_0xC239B590ECA50DD0(iLocal_204[iVar0], fLocal_118[iVar0], fLocal_119[iVar0], fLocal_120[iVar0], fLocal_121[iVar0]);
										if (unk_0x7C28D15641461C68(iLocal_197[iVar0]) || unk_0x7512ED01F3F46714(iLocal_197[iVar0]))
										{
											unk_0xF0A40F19AAB79E88(iLocal_204[iVar0], 1084227584);
										}
										if (!unk_0xFA30DFD0084E92FE(iLocal_154[iVar0], 0))
										{
											unk_0x2D655AA68FA1736B(iLocal_204[iVar0], true, true, 0);
											if (unk_0x6E06C0DB9B43570D() > 19 || unk_0x6E06C0DB9B43570D() < 7)
											{
												unk_0x93D3868AE0D83B7C(iLocal_204[iVar0], 3);
											}
										}
										unk_0x346478B12F69D4E3(iLocal_204[iVar0], true);
										unk_0x2CA123B0622F495C(iLocal_197[iVar0]);
										iLocal_164 = (iLocal_164 - 1);
										iLocal_153[iVar0]++;
										bLocal_106 = true;
									}
								}
							}
						}
						else if (!unk_0x1D403DFADBC2DE3C(iLocal_204[iVar0], 0) && unk_0xE59B7F5A03335350(iLocal_204[iVar0], 0))
						{
							unk_0xD5874E4A4BF782FC(iLocal_204[iVar0], vLocal_175[iVar0 /*3*/], 0, 0, 1);
							unk_0xC239B590ECA50DD0(iLocal_204[iVar0], fLocal_118[iVar0], fLocal_119[iVar0], fLocal_120[iVar0], fLocal_121[iVar0]);
							if (unk_0x7C28D15641461C68(iLocal_197[iVar0]) || unk_0x7512ED01F3F46714(iLocal_197[iVar0]))
							{
								unk_0xF0A40F19AAB79E88(iLocal_204[iVar0], 1084227584);
							}
							unk_0x346478B12F69D4E3(iLocal_204[iVar0], true);
							unk_0x2CA123B0622F495C(iLocal_197[iVar0]);
							iLocal_164 = (iLocal_164 - 1);
							iLocal_153[iVar0]++;
						}
					}
				}
				else if (iLocal_153[iVar0] == 2)
				{
					unk_0x1B2A7C8188ADBE04(iLocal_152[iVar0], &cLocal_185);
					if (!unk_0xFA30DFD0084E92FE(iLocal_154[iVar0], 1))
					{
						bVar8 = false;
						if (unk_0xFA30DFD0084E92FE(iLocal_154[iVar0], 0))
						{
							unk_0xF243B7A14FCFD0F4(func_202());
							bVar8 = unk_0xD6513D668481290A(func_202());
							iVar13 = 2;
						}
						else if (!bLocal_102 && ((!unk_0xFA30DFD0084E92FE(iLocal_154[iVar0], 2) && bVar10) || (unk_0xFA30DFD0084E92FE(iLocal_154[iVar0], 2) && uVar11)))
						{
							bVar8 = true;
							iVar13 = 1;
						}
						else
						{
							unk_0xF243B7A14FCFD0F4(func_205());
							bVar8 = unk_0xD6513D668481290A(func_205());
							iVar13 = 0;
						}
						if (!unk_0x1D403DFADBC2DE3C(iLocal_204[iVar0], 0))
						{
							if (!bLocal_106 && unk_0x1AAF0C23233C57AF(iLocal_204[iVar0], -1, 0))
							{
								if (bVar8)
								{
									if ((SYSTEM::VDIST2(unk_0x541C2AEF053615BC(iLocal_204[iVar0], true), vVar5) < 10000f || bParam2) || iLocal_89)
									{
										func_314(&(iLocal_204[iVar0]), iVar13, 1);
										unk_0xF0059F27F7BB6680(&(iLocal_154[iVar0]), 1);
									}
								}
							}
						}
					}
					if (unk_0xE59B7F5A03335350(iLocal_204[iVar0], 0))
					{
						if (fLocal_130 >= fLocal_122[iVar0])
						{
							if (14 > iLocal_157)
							{
								fVar6 = (fLocal_130 - fLocal_122[iVar0]);
								fVar6 = (fVar6 * fLocal_123[iVar0]);
								if (unk_0x00D24B3F2A5CD22C(iLocal_152[iVar0], &cLocal_185))
								{
									if (fVar6 < unk_0x2FB219F9AD4BD760(iLocal_152[iVar0], &cLocal_185))
									{
										vVar3 = { unk_0x541C2AEF053615BC(iLocal_204[iVar0], true) };
										vVar4 = { unk_0x87DF5F0B1BCDA381(iLocal_152[iVar0], fVar6, &cLocal_185) };
										if (((!func_318(vVar3, vVar5, 5f, fLocal_141) && func_318(vVar4, vVar5, 5f, fLocal_141)) && !iLocal_89) && !bParam2)
										{
											if (!unk_0xFA30DFD0084E92FE(iLocal_154[iVar0], 1))
											{
												func_314(&(iLocal_204[iVar0]), iVar13, 1);
											}
											iLocal_157++;
											iLocal_153[iVar0]++;
										}
										else if (((!bLocal_106 || unk_0xFA30DFD0084E92FE(iLocal_154[iVar0], 1)) || iLocal_89) || bParam2)
										{
											if (func_307(&(iLocal_204[iVar0]), iLocal_152[iVar0], fVar6, 1, 0, 0, bLocal_104, bLocal_103))
											{
												unk_0x821B5D8CB4B20F84(iLocal_204[iVar0], (fParam1 * fLocal_123[iVar0]));
												if (unk_0xE59B7F5A03335350(iLocal_204[iVar0], 0))
												{
													if (unk_0xFA30DFD0084E92FE(iLocal_154[iVar0], 0))
													{
														unk_0x2D655AA68FA1736B(iLocal_204[iVar0], true, true, 0);
														unk_0x0FB6723EA68C0881(iLocal_204[iVar0], true);
														unk_0x93D3868AE0D83B7C(iLocal_204[iVar0], 2);
														if (!unk_0x7512ED01F3F46714(iLocal_197[iVar0]))
														{
															unk_0x1A40AA7E9E62F2DD(iLocal_204[iVar0], 1);
														}
													}
												}
												if (!unk_0xFA30DFD0084E92FE(iLocal_154[iVar0], 1))
												{
													func_314(&(iLocal_204[iVar0]), iVar13, 1);
												}
												iLocal_157++;
												iLocal_153[iVar0]++;
											}
										}
									}
									else
									{
										if (!unk_0xFA30DFD0084E92FE(iLocal_154[iVar0], 1))
										{
											func_314(&(iLocal_204[iVar0]), iVar13, 1);
										}
										iLocal_157++;
										iLocal_153[iVar0]++;
									}
								}
							}
							else
							{
								if (!unk_0xFA30DFD0084E92FE(iLocal_154[iVar0], 1))
								{
									func_314(&(iLocal_204[iVar0]), iVar13, 1);
								}
								iLocal_157++;
								iLocal_153[iVar0]++;
							}
						}
					}
					else
					{
						if (!unk_0xFA30DFD0084E92FE(iLocal_154[iVar0], 1))
						{
							func_314(&(iLocal_204[iVar0]), iVar13, 1);
						}
						iLocal_157++;
						iLocal_153[iVar0]++;
					}
				}
				else if (iLocal_153[iVar0] == 3)
				{
					if (unk_0xE59B7F5A03335350(iLocal_204[iVar0], 0))
					{
						if (unk_0xB34E411B0A4BF096(iLocal_204[iVar0]))
						{
							iVar1 = unk_0x3187EF5798B5D209(iLocal_204[iVar0], -1, 0);
							if (!unk_0x36CEFBE9B745A58D(iVar1))
							{
								if (bVar9)
								{
									if (((!bLocal_79 && !iLocal_76) && !bLocal_95) && (((!bLocal_104 && !bLocal_103) && unk_0xE921F8171F0733B3(unk_0xBC25C936A095B5BA(), iLocal_204[iVar0])) || func_313(iLocal_204[iVar0])))
									{
										if (unk_0x724D816EA203A79E(iVar2))
										{
											bVar8 = false;
											if (bLocal_97)
											{
												bVar8 = true;
											}
											else
											{
												fVar7 = unk_0x8910237449BB6F79(iVar2);
												if (fVar7 < 1f)
												{
													bVar8 = true;
												}
												else if (unk_0x357058E632979E65((fVar7 - unk_0x8910237449BB6F79(iLocal_204[iVar0]))) > 15f)
												{
													bVar8 = true;
												}
												else if (!func_312(iLocal_204[iVar0], iVar2, 45f))
												{
													bVar8 = true;
												}
												else if (func_310(iVar2, iLocal_204[iVar0], 0))
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												func_309(iLocal_204[iVar0]);
												iLocal_153[iVar0]++;
											}
										}
									}
									else
									{
										unk_0x821B5D8CB4B20F84(iLocal_204[iVar0], (fParam1 * fLocal_123[iVar0]));
									}
								}
							}
							else
							{
								unk_0xD87F0F9CDF39238A(iLocal_204[iVar0]);
							}
						}
						else
						{
							iLocal_153[iVar0]++;
						}
					}
					else
					{
						iLocal_153[iVar0]++;
					}
				}
				else if (iLocal_153[iVar0] == 4)
				{
					if (unk_0xE59B7F5A03335350(iLocal_204[iVar0], 0))
					{
						if (!unk_0xB34E411B0A4BF096(iLocal_204[iVar0]))
						{
							iLocal_153[iVar0]++;
						}
						else
						{
							iVar1 = unk_0x3187EF5798B5D209(iLocal_204[iVar0], -1, 0);
							if (!unk_0x36CEFBE9B745A58D(iVar1))
							{
								unk_0x821B5D8CB4B20F84(iLocal_204[iVar0], (fParam1 * fLocal_123[iVar0]));
							}
							else
							{
								unk_0xD87F0F9CDF39238A(iLocal_204[iVar0]);
							}
							if (unk_0x00D24B3F2A5CD22C(iLocal_152[iVar0], &cLocal_185))
							{
								if (fLocal_130 > (fLocal_122[iVar0] + unk_0x2FB219F9AD4BD760(iLocal_152[iVar0], &cLocal_185)))
								{
									unk_0xD87F0F9CDF39238A(iLocal_204[iVar0]);
								}
							}
							else
							{
								unk_0xD87F0F9CDF39238A(iLocal_204[iVar0]);
							}
						}
					}
					else
					{
						iLocal_153[iVar0]++;
					}
				}
				else if (iLocal_153[iVar0] == 5)
				{
					if (!iLocal_204[iVar0] == iLocal_208)
					{
						if (unk_0xE59B7F5A03335350(iLocal_204[iVar0], 0))
						{
							iVar1 = unk_0x3187EF5798B5D209(iLocal_204[iVar0], -1, 0);
							if (!unk_0x36CEFBE9B745A58D(iVar1))
							{
								iVar14 = unk_0xF4FCC3C1048FF2AB(iVar1, 242628503);
								if (iVar14 == 7)
								{
									fVar7 = unk_0x8910237449BB6F79(iLocal_204[iVar0]);
									if (fVar7 < 8f)
									{
										fVar7 = 8f;
									}
									if (fVar7 > 62.9f)
									{
										fVar7 = 62.9f;
									}
									unk_0xE36D78F8D1781255(iVar1, fVar7);
								}
							}
						}
						if (!bLocal_87 && !bLocal_100)
						{
							if (iLocal_152[iVar0] > 0)
							{
								unk_0x4F5DAC981AF98536(iLocal_152[iVar0], &cLocal_185);
							}
						}
						if (!bLocal_77)
						{
							if (!bLocal_105)
							{
								func_198(iLocal_204[iVar0]);
							}
						}
						else if (unk_0x724D816EA203A79E(iLocal_204[iVar0]))
						{
							unk_0xCF6040807CC0E4A5(&(iLocal_204[iVar0]));
						}
					}
					iLocal_157 = (iLocal_157 - 1);
					iLocal_153[iVar0] = 99;
				}
				if (!bVar12)
				{
					iLocal_162 = iVar0;
					bVar12 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_197();
	}
}

void func_309(int iParam0)//Position - 0x1B701
{
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		func_199(iParam0);
		unk_0x6D7523100DA5D907(iParam0, 786603);
	}
}

int func_310(int iParam0, int iParam1, bool bParam2)//Position - 0x1B723
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		vVar0 = { unk_0x541C2AEF053615BC(iParam0, true) };
	}
	if (unk_0xE59B7F5A03335350(iParam1, 0))
	{
		vVar1 = { unk_0x541C2AEF053615BC(iParam1, true) };
		if (bParam2)
		{
			vVar5 = { unk_0xB5D9AE572C19509E(iParam1) };
			vVar4 = { vVar5 / FtoV(SYSTEM::VMAG(vVar5)) };
		}
		else
		{
			vVar2 = { unk_0xA4455714F3DCE207(iParam1, 0f, 5f, 0f) };
			vVar4 = { vVar2 - vVar1 };
		}
	}
	vVar3 = { vVar1 - vVar0 };
	vVar3.z = 0f;
	vVar4.z = 0f;
	if (func_311(vVar3, vVar4) < 0f)
	{
		return 1;
	}
	return 0;
}

float func_311(vector3 vParam0, vector3 vParam1)//Position - 0x1B7C0
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

int func_312(int iParam0, int iParam1, float fParam2)//Position - 0x1B7E1
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		vVar0 = { unk_0xA43418B5859810A6(iParam0, 0) };
	}
	else
	{
		return 0;
	}
	if (unk_0xE59B7F5A03335350(iParam1, 0))
	{
		vVar1 = { unk_0xA43418B5859810A6(iParam1, 0) };
	}
	else
	{
		return 0;
	}
	vVar0.z = 0f;
	vVar1.z = 0f;
	fVar2 = func_311(vVar0, vVar1);
	if (fVar2 < 0f)
	{
		return 0;
	}
	fVar2 = unk_0x77211CE25DED4FDB(vVar0.x, vVar0.y, vVar1.x, vVar1.y);
	if (!fVar2 < fParam2)
	{
		return 0;
	}
	return 1;
}

int func_313(int iParam0)//Position - 0x1B864
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bLocal_101)
	{
		iVar1 = unk_0x3E12B546F3F2597A();
		if (!unk_0x1D403DFADBC2DE3C(iVar1, 0))
		{
			iVar2 = unk_0x6F79ECA8C83E4357(iVar1);
			if (iVar2 == joaat("phantom"))
			{
				if (unk_0x6E80E5225F67328D(iVar1))
				{
					if (unk_0xA6705B5DA0B723DE(iVar1, &iVar0))
					{
						if (unk_0xE59B7F5A03335350(iVar0, 0))
						{
							if (unk_0xE921F8171F0733B3(iVar0, iParam0))
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_314(var uParam0, int iParam1, bool bParam2)//Position - 0x1B8C2
{
	int iVar0;
	
	if (!unk_0x1D403DFADBC2DE3C(*uParam0, 0))
	{
		if (unk_0x1AAF0C23233C57AF(*uParam0, -1, 0))
		{
			if (iParam1 == 2)
			{
				iVar0 = unk_0xFD8987C090669BD5(*uParam0, 6, func_202(), -1, 0, false);
				unk_0x4106FAF8AA1D69D5(iVar0, iLocal_194);
				unk_0x2CA123B0622F495C(func_202());
			}
			else if (iParam1 == 1)
			{
				iVar0 = unk_0xD11996326E5BD97E(*uParam0, 1);
				if (unk_0x7512ED01F3F46714(unk_0x6F79ECA8C83E4357(*uParam0)))
				{
					unk_0x92C13E9A4A1DA028(iVar0, 1, 4096, -1);
				}
			}
			else
			{
				iVar0 = unk_0xFD8987C090669BD5(*uParam0, 4, func_205(), -1, 0, false);
				if (bLocal_107)
				{
					unk_0x2CA123B0622F495C(func_205());
				}
			}
			if (bParam2)
			{
				unk_0xF82197F205B9D8FD(iVar0, true);
				unk_0x751846449040F7EC(iVar0, 0);
				unk_0xC8FD3EBBB90E8D7F(iVar0, 32, false);
			}
			if (bLocal_108)
			{
				unk_0xABA7AE40608505F2(iVar0, 8192, true);
				unk_0xABA7AE40608505F2(iVar0, 65536, true);
				unk_0xABA7AE40608505F2(iVar0, 2, false);
				unk_0xD7E19B03E0EB54E5(*uParam0, 1);
			}
			unk_0x2E35C4FA5F0ED22F(iVar0, true);
			func_315(iVar0);
			bLocal_106 = true;
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_315(int iParam0)//Position - 0x1B9B9
{
	if (unk_0x724D816EA203A79E(iParam0))
	{
		unk_0x02537C8C1BEEB477(&iParam0);
	}
}

void func_316(int iParam0)//Position - 0x1B9D0
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x491B2241281A03B7(0, 12);
	if (iLocal_199 >= -1 && iLocal_200 >= -1)
	{
		while (iVar0 == iLocal_199 || iVar0 == iLocal_200)
		{
			iVar0++;
		}
	}
	else if (iLocal_199 >= -1)
	{
		if (iVar0 == iLocal_199)
		{
			iVar0++;
		}
	}
	iVar1 = iVar0;
	switch (iVar1)
	{
		case 0:
			unk_0x914C5DE0B15B8B59(iParam0, 0, 0);
			break;
		
		case 1:
			unk_0x914C5DE0B15B8B59(iParam0, 2, 2);
			break;
		
		case 2:
			unk_0x914C5DE0B15B8B59(iParam0, 4, 4);
			break;
		
		case 3:
			unk_0x914C5DE0B15B8B59(iParam0, 27, 27);
			break;
		
		case 4:
			unk_0x914C5DE0B15B8B59(iParam0, 7, 7);
			break;
		
		case 5:
			unk_0x914C5DE0B15B8B59(iParam0, 73, 73);
			break;
		
		case 6:
			unk_0x914C5DE0B15B8B59(iParam0, 68, 68);
			break;
		
		case 7:
			unk_0x914C5DE0B15B8B59(iParam0, 62, 62);
			break;
		
		case 8:
			unk_0x914C5DE0B15B8B59(iParam0, 132, 132);
			break;
		
		case 9:
			unk_0x914C5DE0B15B8B59(iParam0, 117, 0);
			break;
		
		case 10:
			unk_0x914C5DE0B15B8B59(iParam0, 52, 52);
			break;
		
		case 11:
			unk_0x914C5DE0B15B8B59(iParam0, 88, 88);
			break;
		
		case 12:
			unk_0x914C5DE0B15B8B59(iParam0, 1, 1);
			break;
		
		case 13:
			unk_0x914C5DE0B15B8B59(iParam0, 36, 36);
			break;
		
		case 14:
			unk_0x914C5DE0B15B8B59(iParam0, 95, 95);
			break;
		
		default:
			unk_0x914C5DE0B15B8B59(iParam0, 73, 73);
			break;
	}
}

void func_317(vector3 vParam0, vector3 vParam1, float fParam2)//Position - 0x1BB49
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	if (!bLocal_88)
	{
		if (!func_318(vParam0, vParam1, fParam2, 200f))
		{
			if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
			{
				iVar1 = unk_0x3E12B546F3F2597A();
				if (!unk_0x1D403DFADBC2DE3C(iVar1, 0))
				{
					if (unk_0x4DBCE270B354E123(iVar1, vParam0, fParam2, fParam2, fParam2, false, true, 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0xEDAD35A0D81ED3FB(vParam0, fParam2, 0, 0, 0, 0, false, 0);
			}
		}
	}
}

int func_318(vector3 vParam0, vector3 vParam1, float fParam2, float fParam3)//Position - 0x1BBBB
{
	if (!unk_0x17FAADF9916EF741())
	{
		if (!bLocal_88)
		{
			if (!iLocal_75)
			{
				if (SYSTEM::VMAG2(vParam1 - vParam0) - fParam2) < (fParam3 * fParam3)
				{
					if (unk_0x33CC9445B2DF9387(vParam0, fParam2))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

float func_319(int iParam0)//Position - 0x1BC02
{
	float fVar0;
	
	unk_0x1B2A7C8188ADBE04(iParam0, &cLocal_185);
	while (!unk_0x00D24B3F2A5CD22C(iParam0, &cLocal_185))
	{
		SYSTEM::WAIT(0);
	}
	fVar0 = unk_0x2FB219F9AD4BD760(iParam0, &cLocal_185);
	unk_0x4F5DAC981AF98536(iParam0, &cLocal_185);
	return fVar0;
}

int func_320(int iParam0)//Position - 0x1BC3E
{
	if (((((((iParam0 == joaat("police") || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("policeb")) || iParam0 == joaat("policet")) || iParam0 == joaat("polmav")) || iParam0 == joaat("pranger")) || iParam0 == joaat("sheriff"))
	{
		return 1;
	}
	return 0;
}

void func_321(int iParam0)//Position - 0x1BCB8
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	bool bVar3;
	bool bVar4;
	
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		vVar1 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
	}
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		bVar3 = false;
		bVar4 = false;
		iVar0 = iLocal_161;
		while (iVar0 < 15)
		{
			switch (iLocal_155[iVar0])
			{
				case 0:
					if (!iLocal_196[iVar0] == 0)
					{
						if (unk_0x4DBCE270B354E123(iParam0, vLocal_174[iVar0 /*3*/], fLocal_128, fLocal_128, fLocal_128, false, true, 0))
						{
							iLocal_163++;
							iLocal_155[iVar0]++;
						}
					}
					else
					{
						iLocal_155[iVar0] = 99;
					}
					break;
				
				case 1:
					if (6 > iLocal_158)
					{
						if (!unk_0x724D816EA203A79E(iLocal_203[iVar0]))
						{
							unk_0xF243B7A14FCFD0F4(iLocal_196[iVar0]);
							if (unk_0xD6513D668481290A(iLocal_196[iVar0]))
							{
								if ((iLocal_75 || iLocal_89) || (!bLocal_106 && !func_318(vLocal_174[iVar0 /*3*/], vVar1, 5f, fLocal_141)))
								{
									if (bLocal_85)
									{
										func_317(vLocal_174[iVar0 /*3*/], vVar1, fLocal_134);
									}
									iLocal_203[iVar0] = unk_0x61C05BF08A1E0EFE(iLocal_196[iVar0], vLocal_174[iVar0 /*3*/], 0f, false, false, false);
									if (iLocal_196[iVar0] == joaat("polmav"))
									{
										unk_0x7170EF3CEB4D0224(iLocal_203[iVar0], 0);
									}
									unk_0xC239B590ECA50DD0(iLocal_203[iVar0], fLocal_124[iVar0], fLocal_125[iVar0], fLocal_126[iVar0], fLocal_127[iVar0]);
									unk_0x2CA123B0622F495C(iLocal_196[iVar0]);
									if (unk_0x5E87CB0495C97732(iLocal_203[iVar0], func_203()))
									{
										unk_0x0FB6723EA68C0881(iLocal_203[iVar0], true);
										if (!unk_0x7512ED01F3F46714(iLocal_196[iVar0]))
										{
											unk_0x1A40AA7E9E62F2DD(iLocal_203[iVar0], 1);
										}
									}
									if (unk_0x5E87CB0495C97732(iLocal_203[iVar0], func_204()))
									{
										unk_0x914C5DE0B15B8B59(iLocal_203[iVar0], 0, 0);
									}
									unk_0x656194E145691D3E(iLocal_203[iVar0], true);
									iLocal_163 = (iLocal_163 - 1);
									iLocal_158++;
									iLocal_155[iVar0]++;
									bLocal_106 = true;
								}
							}
						}
						else
						{
							iLocal_163 = (iLocal_163 - 1);
							iLocal_158++;
							iLocal_155[iVar0]++;
						}
					}
					break;
				
				case 2:
					if (!bVar3)
					{
						if (unk_0xE59B7F5A03335350(iLocal_203[iVar0], 0))
						{
							vVar2 = { unk_0x541C2AEF053615BC(iLocal_203[iVar0], true) };
						}
						if (fLocal_142 == 0f || SYSTEM::VDIST2(vVar1, vVar2) < (fLocal_142 * fLocal_142))
						{
							if (!func_310(iLocal_203[iVar0], iParam0, 0))
							{
								if (!bLocal_77)
								{
									func_198(iLocal_203[iVar0]);
								}
								else
								{
									unk_0xCF6040807CC0E4A5(&(iLocal_203[iVar0]));
								}
								iLocal_158 = (iLocal_158 - 1);
								iLocal_155[iVar0] = 99;
								bVar3 = true;
							}
						}
					}
					break;
			}
			if (iLocal_155[iVar0] != 99)
			{
				if (!bVar4)
				{
					iLocal_161 = iVar0;
					bVar4 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_200();
	}
}

void func_322(int iParam0, float fParam1, int iParam2)//Position - 0x1BFAF
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	vector3 vVar6;
	vector3 vVar7;
	vector3 vVar8;
	float fVar9;
	float fVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	var uVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	bool bVar18;
	vector3 vVar19;
	
	iVar5 = 0;
	bVar12 = unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F());
	bVar13 = unk_0x451E6C7D03F23009();
	uVar14 = unk_0x5C9E0DAF2A1EEF29();
	if (bVar12)
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			iVar5 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
		}
		vVar8 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
	}
	iVar1 = 0;
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		if (unk_0xB34E411B0A4BF096(iParam0))
		{
			fLocal_130 = unk_0x5B80643EF917B728(iParam0);
		}
		iVar16 = -1;
		bVar17 = false;
		bVar18 = false;
		iVar0 = iLocal_160;
		while (iVar0 < 175 && !bVar17)
		{
			if (iLocal_150[iVar0] != 99)
			{
				if (iLocal_150[iVar0] == 0)
				{
					if (iLocal_149[iVar0] > 0 && iLocal_195[iVar0] != 0)
					{
						if (!iLocal_75)
						{
							if (fLocal_130 < (fLocal_113[iVar0] + 20000f))
							{
								if (fLocal_130 >= (fLocal_113[iVar0] - (7000f * fParam1)))
								{
									if (func_320(iLocal_195[iVar0]))
									{
										unk_0xF0059F27F7BB6680(&(iLocal_151[iVar0]), 0);
									}
									else if (unk_0x7512ED01F3F46714(iLocal_195[iVar0]))
									{
										unk_0xF0059F27F7BB6680(&(iLocal_151[iVar0]), 2);
									}
									unk_0x7CB6FD92BE491AD9(&(iLocal_151[iVar0]), 1);
									iLocal_165++;
									iLocal_150[iVar0]++;
								}
								else if (iVar1 > 2)
								{
									bVar17 = true;
								}
								else
								{
									iVar1++;
								}
							}
							else
							{
								func_324(iVar0, 1090519040);
							}
						}
						else
						{
							fVar9 = (fLocal_130 - fLocal_113[iVar0]);
							if (fVar9 >= 0f)
							{
								if (fVar9 < func_319(iLocal_149[iVar0]))
								{
									if (func_320(iLocal_195[iVar0]))
									{
										unk_0xF0059F27F7BB6680(&(iLocal_151[iVar0]), 0);
									}
									else if (unk_0x7512ED01F3F46714(iLocal_195[iVar0]))
									{
										unk_0xF0059F27F7BB6680(&(iLocal_151[iVar0]), 2);
									}
									unk_0x7CB6FD92BE491AD9(&(iLocal_151[iVar0]), 1);
									iLocal_165++;
									iLocal_150[iVar0]++;
								}
								else
								{
									func_324(iVar0, 1090519040);
								}
							}
						}
					}
					else
					{
						func_324(iVar0, 1090519040);
					}
				}
				else if (iLocal_150[iVar0] == 1)
				{
					unk_0x1B2A7C8188ADBE04(iLocal_149[iVar0], &cLocal_185);
					bVar11 = false;
					if (unk_0xFA30DFD0084E92FE(iLocal_151[iVar0], 0))
					{
						unk_0xF243B7A14FCFD0F4(func_202());
						if (unk_0xD6513D668481290A(func_202()))
						{
							bVar11 = true;
						}
					}
					else if (!bLocal_102 && ((!unk_0xFA30DFD0084E92FE(iLocal_151[iVar0], 2) && bVar13) || (unk_0xFA30DFD0084E92FE(iLocal_151[iVar0], 2) && uVar14)))
					{
						bVar11 = true;
					}
					else
					{
						unk_0xF243B7A14FCFD0F4(func_205());
						bVar11 = unk_0xD6513D668481290A(func_205());
					}
					if (!unk_0x724D816EA203A79E(iLocal_201[iVar0]))
					{
						unk_0xF243B7A14FCFD0F4(iLocal_195[iVar0]);
						if ((unk_0xD6513D668481290A(iLocal_195[iVar0]) && unk_0x00D24B3F2A5CD22C(iLocal_149[iVar0], &cLocal_185)) && bVar11)
						{
							if (fLocal_130 >= (fLocal_113[iVar0] - (fLocal_143 * fParam1)))
							{
								if ((iLocal_89 || iParam2) || (!bLocal_106 && !func_318(vLocal_173[iVar0 /*3*/], vVar8, 5f, fLocal_141)))
								{
									if (bLocal_85)
									{
										func_317(vLocal_173[iVar0 /*3*/], vVar8, fLocal_134);
									}
									iLocal_201[iVar0] = unk_0x61C05BF08A1E0EFE(iLocal_195[iVar0], vLocal_173[iVar0 /*3*/], 0f, false, false, false);
									if (iLocal_195[iVar0] == joaat("polmav"))
									{
										unk_0x7170EF3CEB4D0224(iLocal_201[iVar0], 0);
									}
									if (uLocal_98 && !unk_0xFA30DFD0084E92FE(iLocal_151[iVar0], 0))
									{
										func_316(iLocal_201[iVar0]);
									}
									unk_0xD5874E4A4BF782FC(iLocal_201[iVar0], vLocal_173[iVar0 /*3*/], 0, 0, 1);
									unk_0xC239B590ECA50DD0(iLocal_201[iVar0], fLocal_109[iVar0], fLocal_110[iVar0], fLocal_111[iVar0], fLocal_112[iVar0]);
									if (unk_0x7C28D15641461C68(iLocal_195[iVar0]) || unk_0x7512ED01F3F46714(iLocal_195[iVar0]))
									{
										unk_0xF0A40F19AAB79E88(iLocal_201[iVar0], 1084227584);
									}
									if (unk_0xFA30DFD0084E92FE(iLocal_151[iVar0], 3))
									{
										unk_0x656194E145691D3E(iLocal_201[iVar0], true);
									}
									if (!unk_0xFA30DFD0084E92FE(iLocal_151[iVar0], 0))
									{
										unk_0x2D655AA68FA1736B(iLocal_201[iVar0], true, true, 0);
										if (unk_0x6E06C0DB9B43570D() > 19 || unk_0x6E06C0DB9B43570D() < 7)
										{
											unk_0x93D3868AE0D83B7C(iLocal_201[iVar0], 3);
										}
									}
									unk_0x346478B12F69D4E3(iLocal_201[iVar0], true);
									unk_0xF82197F205B9D8FD(iLocal_201[iVar0], true);
									unk_0x2CA123B0622F495C(iLocal_195[iVar0]);
									iLocal_165 = (iLocal_165 - 1);
									iLocal_150[iVar0]++;
									bLocal_106 = true;
								}
								else if (fLocal_130 > fLocal_113[iVar0])
								{
									iLocal_165 = (iLocal_165 - 1);
									func_324(iVar0, 1090519040);
								}
							}
						}
					}
				}
				else if (iLocal_150[iVar0] == 2)
				{
					bVar11 = false;
					if (((iVar3 < 8 && (iVar0 > iLocal_171 || iLocal_171 == 0)) || iLocal_89) || iParam2)
					{
						if (!unk_0xFA30DFD0084E92FE(iLocal_151[iVar0], 1))
						{
							if (unk_0xFA30DFD0084E92FE(iLocal_151[iVar0], 0))
							{
								unk_0xF243B7A14FCFD0F4(func_202());
								bVar11 = unk_0xD6513D668481290A(func_202());
								iVar15 = 2;
							}
							else if (!bLocal_102 && ((!unk_0xFA30DFD0084E92FE(iLocal_151[iVar0], 2) && bVar13) || (unk_0xFA30DFD0084E92FE(iLocal_151[iVar0], 2) && uVar14)))
							{
								bVar11 = true;
								iVar15 = 1;
							}
							else
							{
								unk_0xF243B7A14FCFD0F4(func_205());
								bVar11 = unk_0xD6513D668481290A(func_205());
								iVar15 = 0;
							}
							if (!unk_0x1D403DFADBC2DE3C(iLocal_201[iVar0], 0))
							{
								if (!bLocal_106 && unk_0x1AAF0C23233C57AF(iLocal_201[iVar0], -1, 0))
								{
									if (bVar11)
									{
										if ((SYSTEM::VDIST2(unk_0x541C2AEF053615BC(iLocal_201[iVar0], true), vVar8) < 10000f || iParam2) || iLocal_89)
										{
											func_314(&(iLocal_201[iVar0]), iVar15, 0);
											unk_0xF0059F27F7BB6680(&(iLocal_151[iVar0]), 1);
										}
									}
								}
							}
						}
						if (unk_0xE59B7F5A03335350(iLocal_201[iVar0], 0))
						{
							unk_0x1B2A7C8188ADBE04(iLocal_149[iVar0], &cLocal_185);
							if (fLocal_130 >= fLocal_113[iVar0])
							{
								if (12 > iLocal_156)
								{
									fVar9 = (fLocal_130 - fLocal_113[iVar0]);
									if (unk_0x00D24B3F2A5CD22C(iLocal_149[iVar0], &cLocal_185))
									{
										if (fVar9 < unk_0x2FB219F9AD4BD760(iLocal_149[iVar0], &cLocal_185))
										{
											vVar6 = { unk_0x541C2AEF053615BC(iLocal_201[iVar0], true) };
											vVar7 = { unk_0x87DF5F0B1BCDA381(iLocal_149[iVar0], fVar9, &cLocal_185) };
											if (!func_318(vVar6, vVar8, 5f, fLocal_141) && func_318(vVar7, vVar8, 5f, fLocal_141))
											{
												if (!unk_0xFA30DFD0084E92FE(iLocal_151[iVar0], 1))
												{
													func_314(&(iLocal_201[iVar0]), iVar15, 0);
												}
												func_324(iVar0, 1090519040);
											}
											else if (((!bLocal_106 || unk_0xFA30DFD0084E92FE(iLocal_151[iVar0], 1)) || iLocal_89) || iParam2)
											{
												if (func_307(&(iLocal_201[iVar0]), iLocal_149[iVar0], fVar9, 1, 0, 0, 1, bLocal_103))
												{
													if (!unk_0xFA30DFD0084E92FE(iLocal_151[iVar0], 1))
													{
														func_314(&(iLocal_201[iVar0]), iVar15, 0);
													}
													unk_0xD434A01DEA38A939(iLocal_201[iVar0], true, 0);
													unk_0x821B5D8CB4B20F84(iLocal_201[iVar0], fParam1);
													iLocal_156++;
													iLocal_150[iVar0]++;
												}
											}
										}
										else
										{
											if (!unk_0xFA30DFD0084E92FE(iLocal_151[iVar0], 1))
											{
												func_314(&(iLocal_201[iVar0]), iVar15, 0);
											}
											func_324(iVar0, 1090519040);
										}
									}
									else if (fVar9 > unk_0x2FB219F9AD4BD760(iLocal_149[iVar0], &cLocal_185))
									{
										if (!unk_0xFA30DFD0084E92FE(iLocal_151[iVar0], 1))
										{
											func_314(&(iLocal_201[iVar0]), iVar15, 0);
										}
										func_324(iVar0, 1090519040);
									}
								}
								else
								{
									if (!unk_0xFA30DFD0084E92FE(iLocal_151[iVar0], 1))
									{
										func_314(&(iLocal_201[iVar0]), iVar15, 0);
									}
									func_324(iVar0, 1090519040);
								}
							}
							else if (iLocal_86 && !bLocal_94)
							{
								if (!unk_0xFA30DFD0084E92FE(iLocal_151[iVar0], 1))
								{
									func_314(&(iLocal_201[iVar0]), iVar15, 0);
								}
								func_324(iVar0, 1090519040);
							}
						}
						else
						{
							if (!unk_0xFA30DFD0084E92FE(iLocal_151[iVar0], 1))
							{
								func_314(&(iLocal_201[iVar0]), iVar15, 0);
							}
							func_324(iVar0, 1090519040);
						}
						iVar3++;
						iLocal_171 = iVar0;
					}
				}
				else if (iLocal_150[iVar0] == 3)
				{
					if (unk_0xE59B7F5A03335350(iLocal_201[iVar0], 0))
					{
						if (unk_0xB34E411B0A4BF096(iLocal_201[iVar0]))
						{
							iVar4 = unk_0x3187EF5798B5D209(iLocal_201[iVar0], -1, 0);
							if (!unk_0x36CEFBE9B745A58D(iVar4))
							{
								if (bVar12)
								{
									bVar18 = false;
									if (!bLocal_84)
									{
										if ((!bLocal_79 && !iLocal_76) && func_313(iLocal_201[iVar0]))
										{
											if (iVar2 < 3 && (iVar0 > iLocal_170 || iLocal_170 == 0))
											{
												if (!unk_0x1D403DFADBC2DE3C(iVar5, 0))
												{
													bVar11 = false;
													if (!func_323(iLocal_201[iVar0], iVar5) || func_310(iVar5, iLocal_201[iVar0], 0))
													{
														bVar18 = true;
													}
												}
												iLocal_170 = iVar0;
												iVar2++;
											}
										}
										else if (((!bLocal_99 && !unk_0xFA30DFD0084E92FE(iLocal_151[iVar0], 4)) && iVar2 < 3) && (iVar0 > iLocal_170 || iLocal_170 == 0))
										{
											vVar19 = { unk_0x1483995DFFF0DEEA(iParam0, unk_0x541C2AEF053615BC(iLocal_201[iVar0], true)) };
											if (vVar19.y < 0f)
											{
												if (unk_0x357058E632979E65(vVar19.y) > unk_0x357058E632979E65(vVar19.x))
												{
													bVar18 = true;
												}
											}
											iVar2++;
											iLocal_170 = iVar0;
										}
									}
									if (bVar18)
									{
										func_309(iLocal_201[iVar0]);
										iLocal_150[iVar0]++;
									}
									else
									{
										unk_0x821B5D8CB4B20F84(iLocal_201[iVar0], fParam1);
									}
								}
							}
							else
							{
								unk_0xD87F0F9CDF39238A(iLocal_201[iVar0]);
							}
						}
						else
						{
							iLocal_150[iVar0]++;
						}
					}
					else
					{
						iLocal_150[iVar0]++;
					}
				}
				else if (iLocal_150[iVar0] == 4)
				{
					if (unk_0xE59B7F5A03335350(iLocal_201[iVar0], 0))
					{
						if (!unk_0xB34E411B0A4BF096(iLocal_201[iVar0]))
						{
							iLocal_150[iVar0]++;
						}
						else
						{
							iVar4 = unk_0x3187EF5798B5D209(iLocal_201[iVar0], -1, 0);
							if (!unk_0x36CEFBE9B745A58D(iVar4))
							{
								unk_0x821B5D8CB4B20F84(iLocal_201[iVar0], fParam1);
							}
							else
							{
								unk_0xD87F0F9CDF39238A(iLocal_201[iVar0]);
							}
							if (unk_0x00D24B3F2A5CD22C(iLocal_149[iVar0], &cLocal_185))
							{
								if (fLocal_130 > (fLocal_113[iVar0] + unk_0x2FB219F9AD4BD760(iLocal_149[iVar0], &cLocal_185)))
								{
									unk_0xD87F0F9CDF39238A(iLocal_201[iVar0]);
								}
							}
							else
							{
								unk_0xD87F0F9CDF39238A(iLocal_201[iVar0]);
							}
						}
					}
					else
					{
						iLocal_150[iVar0]++;
					}
				}
				else if (iLocal_150[iVar0] == 5)
				{
					if (!unk_0x1D403DFADBC2DE3C(iLocal_201[iVar0], 0))
					{
						fVar10 = unk_0x8910237449BB6F79(iLocal_201[iVar0]);
					}
					iLocal_156 = (iLocal_156 - 1);
					func_324(iVar0, fVar10);
				}
				if (iVar16 == -1)
				{
					iVar16 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar16 != -1)
		{
			iLocal_160 = iVar16;
		}
		if (iVar2 < 3)
		{
			iLocal_170 = 0;
		}
		if (iVar3 < 8)
		{
			iLocal_171 = 0;
		}
	}
	else
	{
		func_201();
	}
}

int func_323(int iParam0, int iParam1)//Position - 0x1CB27
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		vVar0 = { unk_0xA43418B5859810A6(iParam0, 0) };
	}
	else
	{
		return 0;
	}
	if (unk_0xE59B7F5A03335350(iParam1, 0))
	{
		vVar1 = { unk_0xA43418B5859810A6(iParam1, 0) };
	}
	else
	{
		return 0;
	}
	vVar0.z = 0f;
	vVar1.z = 0f;
	fVar2 = func_311(vVar0, vVar1);
	if (fVar2 < 0f)
	{
		return 0;
	}
	return 1;
}

void func_324(int iParam0, float fParam1)//Position - 0x1CB8B
{
	int iVar0;
	
	if (!iLocal_195[iParam0] == 0)
	{
		unk_0x2CA123B0622F495C(iLocal_195[iParam0]);
	}
	if (!unk_0x1D403DFADBC2DE3C(iLocal_201[iParam0], 0))
	{
		unk_0xD434A01DEA38A939(iLocal_201[iParam0], true, 0);
		unk_0x346478B12F69D4E3(iLocal_201[iParam0], false);
		iVar0 = unk_0x3187EF5798B5D209(iLocal_201[iParam0], -1, 0);
		if (!unk_0x36CEFBE9B745A58D(iVar0) && iVar0 != unk_0xBC25C936A095B5BA())
		{
			unk_0x2E35C4FA5F0ED22F(iVar0, false);
			if (fParam1 < 8f)
			{
				fParam1 = 8f;
			}
			if (fParam1 > 62.9f)
			{
				fParam1 = 62.9f;
			}
			unk_0x488EB206498BC561(iVar0, iLocal_201[iParam0], 0, 1, fParam1, 786603, 5f, 5f, 1);
			unk_0xABA7AE40608505F2(iVar0, 8192, true);
			if (bLocal_108)
			{
				unk_0xABA7AE40608505F2(iVar0, 65536, true);
				unk_0xABA7AE40608505F2(iVar0, 2, false);
			}
			unk_0x91629AC1E1F78419(iVar0, 6, false);
			unk_0xE36D78F8D1781255(iVar0, fParam1);
		}
	}
	if (!bLocal_77)
	{
		if (!bLocal_105)
		{
			func_315(iVar0);
			func_198(iLocal_201[iParam0]);
		}
	}
	else
	{
		if (unk_0x724D816EA203A79E(iVar0))
		{
			unk_0xF845620A03C7425B(&iVar0);
		}
		if (unk_0x724D816EA203A79E(iLocal_201[iParam0]))
		{
			unk_0xCF6040807CC0E4A5(&(iLocal_201[iParam0]));
		}
	}
	if (!bLocal_87 && !bLocal_100)
	{
		if (iLocal_149[iParam0] > 0)
		{
			unk_0x4F5DAC981AF98536(iLocal_149[iParam0], &cLocal_185);
		}
	}
	iLocal_150[iParam0] = 99;
}

void func_325(int iParam0, float fParam1, float fParam2)//Position - 0x1CCE6
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		vVar4 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
	}
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		if (unk_0xB34E411B0A4BF096(iParam0))
		{
			iVar0 = unk_0x47296952F125937B(iParam0);
			vVar1 = { unk_0xE69565EA6CC00034(iVar0, fParam1) };
			vVar2 = { unk_0x541C2AEF053615BC(iParam0, true) };
			vVar3 = { vVar2 - vVar1 };
			fVar5 = SYSTEM::VMAG(vVar3);
			if (fVar5 > fParam2)
			{
				fVar5 = fParam2;
			}
			func_317(vVar1, vVar4, fVar5);
		}
	}
}

void func_326(int iParam0, float fParam1)//Position - 0x1CD69
{
	if (!bLocal_88)
	{
		if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
		{
			if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
			{
				if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(iParam0, true), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true)) > (fParam1 * fParam1))
				{
					unk_0xA7F63A62AD048372(1);
				}
				else
				{
					unk_0xA7F63A62AD048372(0);
				}
			}
		}
	}
}

void func_327(int iParam0, float fParam1)//Position - 0x1CDB7
{
	if (!bLocal_88)
	{
		if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
		{
			if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
			{
				if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(iParam0, true), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true)) > (fParam1 * fParam1))
				{
					unk_0x598D851D7D0D2BA3(1f);
				}
				else
				{
					unk_0x598D851D7D0D2BA3(0f);
				}
			}
		}
	}
}

void func_328(int iParam0, float fParam1)//Position - 0x1CE05
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0) && unk_0xB34E411B0A4BF096(iParam0))
	{
		fVar1 = (fLocal_144 + 2000f);
		fVar2 = (fLocal_145 + 2000f);
		bVar4 = false;
		if (fVar1 < (fParam1 + 25000f))
		{
			iVar0 = unk_0x47296952F125937B(iParam0);
			if (fVar1 <= unk_0x6FFB46A34B481360(iVar0))
			{
				if (iLocal_166 == 0)
				{
					vLocal_181 = { unk_0xE69565EA6CC00034(iVar0, fLocal_144) };
					iLocal_166++;
				}
				else if (iLocal_166 == 1)
				{
					vLocal_182 = { unk_0xE69565EA6CC00034(iVar0, fVar1) };
					iLocal_166++;
				}
				else if (!bLocal_106)
				{
					if (vLocal_181.x > vLocal_182.x)
					{
						fVar3 = vLocal_181.x;
						vLocal_181.x = vLocal_182.x;
						vLocal_182.x = fVar3;
					}
					if (vLocal_181.y > vLocal_182.y)
					{
						fVar3 = vLocal_181.y;
						vLocal_181.y = vLocal_182.y;
						vLocal_182.y = fVar3;
					}
					if (vLocal_181.z > vLocal_182.z)
					{
						fVar3 = vLocal_181.z;
						vLocal_181.z = vLocal_182.z;
						vLocal_182.z = fVar3;
					}
					vLocal_181 = { vLocal_181 - Vector(fLocal_148, fLocal_148, fLocal_148) };
					vLocal_182 = { vLocal_182 + Vector(fLocal_148, fLocal_148, fLocal_148) };
					unk_0x6935EBF9868982DC(vLocal_181, vLocal_182, false, 0);
					fLocal_144 = fVar1;
					iLocal_166 = 0;
				}
			}
		}
		if (fVar2 < (fParam1 - 8000f))
		{
			iVar0 = unk_0x47296952F125937B(iParam0);
			if (iLocal_169 == 0)
			{
				vLocal_183 = { unk_0xE69565EA6CC00034(iVar0, fLocal_145) };
				iLocal_169++;
			}
			else if (iLocal_169 == 1)
			{
				vLocal_184 = { unk_0xE69565EA6CC00034(iVar0, fVar2) };
				iLocal_169++;
			}
			else if (!bLocal_106 && !bVar4)
			{
				if (vLocal_183.x > vLocal_184.x)
				{
					fVar3 = vLocal_183.x;
					vLocal_183.x = vLocal_184.x;
					vLocal_184.x = fVar3;
				}
				if (vLocal_183.y > vLocal_184.y)
				{
					fVar3 = vLocal_183.y;
					vLocal_183.y = vLocal_184.y;
					vLocal_184.y = fVar3;
				}
				if (vLocal_183.z > vLocal_184.z)
				{
					fVar3 = vLocal_183.z;
					vLocal_183.z = vLocal_184.z;
					vLocal_184.z = fVar3;
				}
				vLocal_183 = { vLocal_183 - Vector(fLocal_148, fLocal_148, fLocal_148) };
				vLocal_184 = { vLocal_184 + Vector(fLocal_148, fLocal_148, fLocal_148) };
				unk_0x832ADB79A274D4E9(vLocal_183, vLocal_184, true);
				fLocal_145 = fVar2;
				iLocal_169 = 0;
			}
		}
	}
}

int func_329(int iParam0, int iParam1)//Position - 0x1D053
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (!unk_0x1D403DFADBC2DE3C(iParam1, 0))
		{
			if (unk_0x62F3A07C43FFB568(iParam0, iParam1, 0))
			{
				return 0;
			}
		}
	}
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		vVar0 = { unk_0x541C2AEF053615BC(iParam0, true) };
	}
	if (unk_0xE59B7F5A03335350(iParam1, 0))
	{
		vVar1 = { unk_0x541C2AEF053615BC(iParam1, true) };
		vVar2 = { unk_0xA4455714F3DCE207(iParam1, 0f, 5f, 0f) };
		vVar4 = { vVar2 - vVar1 };
	}
	vVar3 = { vVar1 - vVar0 };
	vVar3.z = 0f;
	vVar4.z = 0f;
	fVar5 = func_311(vVar3, vVar4);
	if (fVar5 < 0f)
	{
		return 1;
	}
	return 0;
}

void func_330()//Position - 0x1D0F6
{
	unk_0x379ACE23D404525C(-9000f, -9000f, -1000f, 9000f, 9000f, 1500f, false, 1);
	unk_0x2525D113E78EFBAA(0);
	unk_0x35FE2210421A8E6E(0);
	unk_0x0631F3E6D895E7E5(0);
	unk_0x598D851D7D0D2BA3(0f);
	unk_0xA7F63A62AD048372(0);
	unk_0x1A8FF13FA68ECF72(3);
}

void func_331(int iParam0, int iParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, bool bParam10)//Position - 0x1D140
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	
	if (iLocal_91 == 0)
	{
		if (*fParam2 < fParam3)
		{
			*fParam2 = fParam3;
			iLocal_91 = 1;
		}
	}
	if (fParam8 < 0f)
	{
		fParam8 = fLocal_139;
	}
	fVar0 = (fParam3 * fParam7);
	if (!fVar0 > fParam3)
	{
		fVar0 = (fParam3 + 0.1f);
	}
	fVar5 = (fParam3 * fParam9);
	fVar6 = (((fParam6 - fParam5) * 0.4f) + fParam5);
	fVar2 = func_334(iParam0, iParam1);
	if (fVar2 < 0f)
	{
		fVar2 = (fVar2 * -1f);
	}
	fVar3 = fVar2;
	if (fVar3 < fParam4)
	{
		fVar3 = fParam4;
	}
	if (fVar3 > fVar6)
	{
		fVar3 = fVar6;
	}
	fVar4 = fParam3;
	if (!unk_0x1D403DFADBC2DE3C(iParam1, 0))
	{
		if (func_329(iParam1, iParam0))
		{
			if (unk_0x5237AF95232D78C5(iParam1, 0))
			{
				fVar4 = fVar0;
			}
			else if (fVar2 < 50f)
			{
				fVar4 = fParam3;
			}
			else
			{
				fVar4 = fVar0;
			}
		}
		else if (fVar2 < fParam5)
		{
			if (func_333(iParam0, iParam1) < fParam5)
			{
				fVar1 = func_332(iParam0, iParam1);
				fVar1 = (fVar1 + -15f);
				if (fVar1 < 0f)
				{
					fVar1 = 0f;
				}
				if (fVar1 > 75f)
				{
					fVar1 = 75f;
				}
				fVar7 = ((75f - fVar1) / 75f);
			}
			else
			{
				fVar7 = 1f;
			}
			fVar4 = ((((((fParam5 - fParam4) - (fVar3 - fParam4)) / (fParam5 - fParam4)) * (fVar0 - fParam3)) * fVar7) + fParam3);
		}
		else if (fVar2 > fParam6)
		{
			fVar4 = fVar5;
			iLocal_92 = 1;
		}
		else if (iLocal_92)
		{
			if (fVar2 < fVar6)
			{
				fVar4 = fParam3;
				iLocal_92 = 0;
			}
			else
			{
				fVar4 = fVar5;
			}
		}
		else
		{
			fVar4 = fParam3;
		}
	}
	fVar1 = (fVar4 - *fParam2);
	if (fVar1 > 0f)
	{
		fVar1 = unk_0x11F9F9006143871A();
		fVar8 = ((fLocal_146 * fParam3) * fVar1);
		fVar1 = (fVar4 - *fParam2);
		if (fVar1 > fVar8)
		{
			fVar1 = fVar8;
		}
		*fParam2 = (*fParam2 + fVar1);
	}
	else
	{
		fVar1 = unk_0x11F9F9006143871A();
		fVar8 = ((fLocal_147 * fParam3) * fVar1);
		fVar1 = (fVar4 - *fParam2);
		if (fVar1 < (fVar8 * -1f))
		{
			fVar1 = (fVar8 * -1f);
		}
		*fParam2 = (*fParam2 + fVar1);
	}
	if (bParam10)
	{
		if (!unk_0x36CEFBE9B745A58D(iParam1))
		{
			if (unk_0x5237AF95232D78C5(iParam1, 0))
			{
				iVar9 = unk_0x9FE9D386222EEE47(iParam1, 0);
				if (!unk_0x1D403DFADBC2DE3C(iVar9, 0))
				{
					iVar10 = unk_0x6F79ECA8C83E4357(iVar9);
					if (unk_0x7C28D15641461C68(iVar10) || unk_0x7512ED01F3F46714(iVar10))
					{
						if (unk_0xE59B7F5A03335350(iVar9, 0))
						{
							fVar1 = fVar4;
							if (fVar1 < fParam3)
							{
								fVar1 = fParam3;
							}
							fVar1 = (fVar1 - fParam3);
							fVar1 = (fVar1 / (fVar0 - fParam3));
							fVar1 = (fVar1 * fParam8);
							fVar1 = (fVar1 * (fLocal_137 - fLocal_138));
							fVar1 = (fVar1 + fLocal_138);
							fLocal_136 = fVar1;
							if (fLocal_136 < fLocal_138)
							{
								fLocal_136 = fLocal_138;
							}
							if (fLocal_136 > fLocal_137)
							{
								fLocal_136 = fLocal_137;
							}
							unk_0xC26F3DBF9AB3C8CB(unk_0xB5CEFD608600A09F(), fLocal_136);
						}
					}
				}
			}
		}
	}
}

float func_332(int iParam0, int iParam1)//Position - 0x1D3F7
{
	struct<2> Var0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	int iVar5;
	
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		Var0 = unk_0xB56E720468F8EB8D(iParam0);
		Var0.f_1 = unk_0x080E685AA7E5D1F1(iParam0);
	}
	if (!unk_0x1D403DFADBC2DE3C(iParam1, 0))
	{
		vVar1 = { unk_0x541C2AEF053615BC(iParam1, true) };
		if (unk_0x5237AF95232D78C5(iParam1, 0))
		{
			iVar5 = unk_0x9FE9D386222EEE47(iParam1, 0);
			vVar3.x = unk_0xB56E720468F8EB8D(iVar5);
			vVar3.y = unk_0x080E685AA7E5D1F1(iVar5);
		}
		else
		{
			vVar2 = { unk_0xA4455714F3DCE207(iParam1, 0f, 5f, 0f) };
			vVar3 = { vVar2 - vVar1 };
		}
	}
	fVar4 = unk_0x77211CE25DED4FDB(Var0, Var0.f_1, vVar3.x, vVar3.y);
	return fVar4;
}

float func_333(int iParam0, int iParam1)//Position - 0x1D488
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		vVar0 = { unk_0x541C2AEF053615BC(iParam0, true) };
	}
	if (!unk_0x1D403DFADBC2DE3C(iParam1, 0))
	{
		vVar1 = { unk_0x541C2AEF053615BC(iParam1, true) };
	}
	vVar2 = { vVar1 - vVar0 };
	vVar2.z = 0f;
	fVar3 = SYSTEM::VMAG(vVar2);
	return fVar3;
}

float func_334(int iParam0, int iParam1)//Position - 0x1D4DA
{
	struct<2> Var0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		Var0 = unk_0xB56E720468F8EB8D(iParam0);
		Var0.f_1 = unk_0x080E685AA7E5D1F1(iParam0);
		vVar2 = { unk_0x541C2AEF053615BC(iParam0, true) };
	}
	if (!unk_0x1D403DFADBC2DE3C(iParam1, 0))
	{
		vVar3 = { unk_0x541C2AEF053615BC(iParam1, true) };
	}
	vVar1 = { vVar3 - vVar2 };
	fVar4 = unk_0x77211CE25DED4FDB(vVar1.x, vVar1.y, Var0, Var0.f_1);
	fVar4 = (fVar4 + -90f);
	if (fVar4 < 0f)
	{
		fVar4 = (fVar4 * -1f);
	}
	vVar1.z = 0f;
	return (SYSTEM::VMAG(vVar1) * SYSTEM::SIN(fVar4));
}

int func_335()//Position - 0x1D569
{
	if (unk_0x724D816EA203A79E(iLocal_278))
	{
		if (unk_0xE59B7F5A03335350(iLocal_278, 0))
		{
			if (!unk_0xD1DC4B08247A4317(iLocal_278))
			{
				iLocal_396 = 1;
			}
			else
			{
				iLocal_396 = 0;
			}
		}
		else
		{
			iLocal_396 = 1;
		}
	}
	else
	{
		iLocal_396 = 1;
	}
	iLocal_232 = 0;
	while (iLocal_232 <= 24)
	{
		if (unk_0x724D816EA203A79E(iLocal_204[iLocal_232]))
		{
			if (unk_0xE59B7F5A03335350(iLocal_204[iLocal_232], 0))
			{
				if (!unk_0xD1DC4B08247A4317(iLocal_204[iLocal_232]))
				{
					iLocal_397[iLocal_232] = 1;
				}
				else
				{
					iLocal_397[iLocal_232] = 0;
				}
			}
			else
			{
				iLocal_397[iLocal_232] = 1;
			}
		}
		else
		{
			iLocal_397[iLocal_232] = 1;
		}
		iLocal_232++;
	}
	if (((((((((((((((((((((((((iLocal_396 == 1 && iLocal_397[0] == 1) && iLocal_397[1] == 1) && iLocal_397[2] == 1) && iLocal_397[3] == 1) && iLocal_397[4] == 1) && iLocal_397[5] == 1) && iLocal_397[6] == 1) && iLocal_397[7] == 1) && iLocal_397[8] == 1) && iLocal_397[9] == 1) && iLocal_397[10] == 1) && iLocal_397[11] == 1) && iLocal_397[12] == 1) && iLocal_397[13] == 1) && iLocal_397[14] == 1) && iLocal_397[15] == 1) && iLocal_397[16] == 1) && iLocal_397[17] == 1) && iLocal_397[18] == 1) && iLocal_397[19] == 1) && iLocal_397[20] == 1) && iLocal_397[21] == 1) && iLocal_397[22] == 1) && iLocal_397[23] == 1) && iLocal_397[24] == 1)
	{
		return 1;
	}
	return 0;
}

void func_336()//Position - 0x1D783
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	
	if (unk_0x724D816EA203A79E(iLocal_204[4]))
	{
		if (unk_0xE59B7F5A03335350(iLocal_204[4], 0))
		{
			if (unk_0xB34E411B0A4BF096(iLocal_204[4]))
			{
				vLocal_309 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
				vVar1 = { unk_0x541C2AEF053615BC(iLocal_204[4], true) };
				if (vLocal_309.x < (vVar1.x - 10f) && !unk_0xD1DC4B08247A4317(iLocal_204[4]))
				{
					unk_0xD87F0F9CDF39238A(iLocal_204[4]);
					unk_0x1E7A09C1710FB071(&(iLocal_204[4]));
				}
			}
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_204[3]))
	{
		if (unk_0xE59B7F5A03335350(iLocal_204[3], 0))
		{
			if (unk_0xB34E411B0A4BF096(iLocal_204[3]))
			{
				vLocal_309 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
				vVar0 = { unk_0x541C2AEF053615BC(iLocal_204[3], true) };
				if (vLocal_309.x < (vVar0.x - 10f) && !unk_0xD1DC4B08247A4317(iLocal_204[3]))
				{
					unk_0xD87F0F9CDF39238A(iLocal_204[3]);
					unk_0x1E7A09C1710FB071(&(iLocal_204[3]));
				}
			}
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_204[21]))
	{
		if (unk_0xE59B7F5A03335350(iLocal_204[21], 0))
		{
			if (unk_0xB34E411B0A4BF096(iLocal_204[21]))
			{
				vLocal_309 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
				vVar2 = { unk_0x541C2AEF053615BC(iLocal_204[21], true) };
				if (vLocal_309.x < (vVar2.x - 10f) && !unk_0xD1DC4B08247A4317(iLocal_204[21]))
				{
					unk_0xD87F0F9CDF39238A(iLocal_204[21]);
					unk_0x1E7A09C1710FB071(&(iLocal_204[21]));
				}
			}
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_204[0]))
	{
		if (unk_0xE59B7F5A03335350(iLocal_204[0], 0))
		{
			if (unk_0x724D816EA203A79E(iLocal_278))
			{
				if (unk_0xE59B7F5A03335350(iLocal_278, 0))
				{
					if (unk_0xB34E411B0A4BF096(iLocal_278))
					{
						if (unk_0x5B80643EF917B728(iLocal_278) > 50000f && !unk_0xD1DC4B08247A4317(iLocal_204[0]))
						{
							if (unk_0xB34E411B0A4BF096(iLocal_204[0]))
							{
								unk_0xD87F0F9CDF39238A(iLocal_204[0]);
							}
							unk_0x1E7A09C1710FB071(&(iLocal_204[0]));
						}
					}
				}
			}
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_282))
	{
		if (unk_0xE59B7F5A03335350(iLocal_282, 0))
		{
			if (unk_0x724D816EA203A79E(iLocal_278))
			{
				if (unk_0xE59B7F5A03335350(iLocal_278, 0))
				{
					if (unk_0xB34E411B0A4BF096(iLocal_278))
					{
						if (unk_0x5B80643EF917B728(iLocal_278) > 90000f && !unk_0xD1DC4B08247A4317(iLocal_282))
						{
							unk_0x2CA8D9DC16C6AF09(iLocal_667[0], 0);
							unk_0x2CA8D9DC16C6AF09(iLocal_667[1], 0);
							unk_0x2CA8D9DC16C6AF09(iLocal_667[2], 0);
							if (unk_0x724D816EA203A79E(iLocal_265[0]))
							{
								unk_0x02537C8C1BEEB477(&(iLocal_265[0]));
							}
							if (unk_0x724D816EA203A79E(iLocal_265[1]))
							{
								unk_0x02537C8C1BEEB477(&(iLocal_265[1]));
							}
							if (unk_0x724D816EA203A79E(iLocal_265[2]))
							{
								unk_0x02537C8C1BEEB477(&(iLocal_265[2]));
							}
							if (unk_0x724D816EA203A79E(iLocal_265[3]))
							{
								unk_0x02537C8C1BEEB477(&(iLocal_265[3]));
							}
							unk_0x1E7A09C1710FB071(&iLocal_282);
							unk_0x4EA570997E107F35("missheist_agency3aig_lift_waitped_a");
						}
					}
				}
			}
		}
	}
}

void func_337(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4)//Position - 0x1DA52
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (unk_0x2DA8CA50A72528FB(iParam0))
	{
		if ((unk_0x724D816EA203A79E(iParam1) && unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA())) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			if (unk_0xD27AC0E9B78CFDD7(iParam1))
			{
				if (unk_0xE59B7F5A03335350(unk_0x233ED4CD1F1A42C1(iParam1), 0))
				{
					fVar1 = unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), unk_0x541C2AEF053615BC(iParam1, true), true);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = SYSTEM::ROUND((255f * ((fVar1 - fVar2) / (fParam2 - fVar2))));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0x7A6BBF86FCBBCF7E(iParam0, true);
						unk_0x7781946F1FC054FA(iParam0, (255 - iVar0));
					}
					else
					{
						unk_0x7A6BBF86FCBBCF7E(iParam0, false);
						unk_0x7781946F1FC054FA(iParam0, 255);
					}
				}
			}
			else if (unk_0x386592AF38881675(iParam1))
			{
				if (!unk_0x36CEFBE9B745A58D(unk_0x399F7937FFE4DEBF(iParam1)))
				{
					fVar1 = unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), unk_0x541C2AEF053615BC(iParam1, true), true);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = SYSTEM::ROUND(((255f * (fVar1 - fVar2)) / (fParam2 - fVar2)));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0x7A6BBF86FCBBCF7E(iParam0, true);
						unk_0x7781946F1FC054FA(iParam0, (255 - iVar0));
					}
					else
					{
						unk_0x7A6BBF86FCBBCF7E(iParam0, false);
						unk_0x7781946F1FC054FA(iParam0, 255);
					}
				}
			}
		}
	}
}

void func_338()//Position - 0x1DBAB
{
	if (unk_0x724D816EA203A79E(iLocal_204[2]))
	{
		if (unk_0xE59B7F5A03335350(iLocal_204[2], 0))
		{
			if (unk_0x724D816EA203A79E(iLocal_278))
			{
				if (unk_0xE59B7F5A03335350(iLocal_278, 0))
				{
					if (unk_0xB34E411B0A4BF096(iLocal_278))
					{
						if (unk_0x5B80643EF917B728(iLocal_278) < 50530f)
						{
							if (!unk_0x8ADE344330B6F916(iLocal_204[2]))
							{
								unk_0x2D655AA68FA1736B(iLocal_204[2], true, true, 0);
							}
						}
						else if (unk_0x8ADE344330B6F916(iLocal_204[2]))
						{
							unk_0x2D655AA68FA1736B(iLocal_204[2], false, false, 0);
						}
					}
				}
			}
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_204[5]))
	{
		if (unk_0xE59B7F5A03335350(iLocal_204[5], 0))
		{
			if (!unk_0x8ADE344330B6F916(iLocal_204[5]))
			{
				unk_0x2D655AA68FA1736B(iLocal_204[5], true, true, 0);
			}
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_280[0]))
	{
		if (unk_0xE59B7F5A03335350(iLocal_280[0], 0))
		{
			if (!unk_0x8ADE344330B6F916(iLocal_280[0]))
			{
				unk_0x2D655AA68FA1736B(iLocal_280[0], true, true, 0);
			}
			if (unk_0x1AAF0C23233C57AF(iLocal_280[0], -1, 0))
			{
				if (!unk_0x724D816EA203A79E(iLocal_276[0]))
				{
					unk_0xF243B7A14FCFD0F4(joaat("s_m_m_gentransport"));
					if (unk_0xD6513D668481290A(joaat("s_m_m_gentransport")))
					{
						iLocal_276[0] = unk_0xFD8987C090669BD5(iLocal_280[0], 26, joaat("s_m_m_gentransport"), -1, 1, true);
						unk_0x2CA123B0622F495C(joaat("s_m_m_gentransport"));
					}
				}
			}
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_280[1]))
	{
		if (unk_0xE59B7F5A03335350(iLocal_280[1], 0))
		{
			if (!unk_0x8ADE344330B6F916(iLocal_280[1]))
			{
				unk_0x2D655AA68FA1736B(iLocal_280[1], true, true, 0);
			}
			if (unk_0x1AAF0C23233C57AF(iLocal_280[1], -1, 0))
			{
				if (!unk_0x724D816EA203A79E(iLocal_276[1]))
				{
					unk_0xF243B7A14FCFD0F4(joaat("s_m_m_gentransport"));
					if (unk_0xD6513D668481290A(joaat("s_m_m_gentransport")))
					{
						iLocal_276[1] = unk_0xFD8987C090669BD5(iLocal_280[1], 26, joaat("s_m_m_gentransport"), -1, 1, true);
						unk_0x2CA123B0622F495C(joaat("s_m_m_gentransport"));
					}
				}
			}
		}
	}
}

void func_339()//Position - 0x1DD81
{
	if (iLocal_223 == 0)
	{
		unk_0x284F2ACE6839D3C0("SCRIPT\Trv_4_747_Cop_Cars", false, -1);
		unk_0x284F2ACE6839D3C0("SCRIPT\Trv_4_747_Plane_Explosion", false, -1);
		unk_0x284F2ACE6839D3C0("SCRIPT\Trv_4_747_Tanker_Explosion", false, -1);
		unk_0x284F2ACE6839D3C0("SCRIPT\TV_Monitors", false, -1);
		if (iLocal_385 == 0)
		{
			iLocal_255 = unk_0x2F079D1FC5F6CB99();
			iLocal_385 = 1;
		}
		if (iLocal_386 == 0)
		{
			iLocal_256 = unk_0x2F079D1FC5F6CB99();
			iLocal_386 = 1;
		}
		if (iLocal_387 == 0)
		{
			iLocal_257 = unk_0x2F079D1FC5F6CB99();
			iLocal_387 = 1;
		}
		if (iLocal_388 == 0)
		{
			iLocal_258 = unk_0x2F079D1FC5F6CB99();
			iLocal_388 = 1;
		}
		if (iLocal_389 == 0)
		{
			iLocal_259 = unk_0x2F079D1FC5F6CB99();
			iLocal_389 = 1;
		}
		if (iLocal_384 == 0)
		{
			iLocal_260 = unk_0x2F079D1FC5F6CB99();
			iLocal_384 = 1;
		}
		if (iLocal_390 == 0)
		{
			iLocal_261 = unk_0x2F079D1FC5F6CB99();
			iLocal_390 = 1;
		}
		if (iLocal_343 == 1)
		{
			func_117();
			iLocal_343 = 0;
		}
		if (!unk_0xEF0E25DA0CB6E8FF(iLocal_301))
		{
			iLocal_301 = unk_0x578D5D08EC980893("DEFAULT_SCRIPTED_CAMERA", true);
			unk_0x9DF315A9EFFF87AC(iLocal_301, 40f);
		}
		iLocal_341 = 0;
		iLocal_335 = 0;
		iLocal_347 = 0;
		iLocal_331 = 0;
		iLocal_326 = 0;
		iLocal_332 = 0;
		iLocal_325 = 0;
		iLocal_361 = 0;
		iLocal_363[0] = 0;
		iLocal_364[0] = 0;
		iLocal_363[1] = 0;
		iLocal_364[1] = 0;
		iLocal_363[2] = 0;
		iLocal_365 = 0;
		iLocal_366 = 0;
		iLocal_329 = 0;
		iLocal_330 = 0;
		iLocal_328 = 0;
		iLocal_370 = 0;
		iLocal_373 = 0;
		iLocal_374 = 0;
		iLocal_375 = 0;
		iLocal_377 = 0;
		iLocal_376 = 0;
		iLocal_378 = 0;
		iLocal_379 = 0;
		iLocal_380 = 0;
		iLocal_381 = 0;
		iLocal_382 = 0;
		iLocal_383 = 0;
		iLocal_391 = 0;
		iLocal_392 = 0;
		iLocal_394 = 0;
		iLocal_395 = 0;
		iLocal_402 = 0;
		iLocal_403 = 0;
		iLocal_467 = 0;
		iLocal_349 = 1;
		iLocal_350 = 1;
		iLocal_358 = 1;
		iLocal_408 = 0;
		iLocal_409 = 0;
		iLocal_415 = 0;
		iLocal_417 = 0;
		iLocal_424 = 0;
		iLocal_425 = 0;
		iLocal_427 = 0;
		iLocal_429[0] = 0;
		iLocal_429[1] = 0;
		iLocal_430[0] = 0;
		iLocal_430[1] = 0;
		iLocal_431 = 0;
		iLocal_432 = 0;
		iLocal_434 = 0;
		iLocal_439 = 0;
		iLocal_440 = 0;
		iLocal_441 = 0;
		iLocal_462 = 0;
		iLocal_463 = 0;
		iLocal_468 = 0;
		iLocal_227 = 0;
		iLocal_240 = 0;
		iLocal_231 = 0;
		while (iLocal_231 <= 2)
		{
			iLocal_465[iLocal_231] = 0;
			iLocal_466[iLocal_231] = 0;
			iLocal_231++;
		}
		iLocal_231 = 0;
		while (iLocal_231 <= 2)
		{
			iLocal_487[iLocal_231] = 0;
			iLocal_231++;
		}
		iLocal_231 = 0;
		while (iLocal_231 <= 6)
		{
			iLocal_435[iLocal_231] = 0;
			iLocal_436[iLocal_231] = 0;
			iLocal_231++;
		}
		unk_0xA8396BF0E2C53C39();
		iLocal_89 = 1;
		bLocal_95 = true;
		func_278();
		iLocal_226 = unk_0xECF3C87B07EE1C98();
		unk_0x6C5F5B5F6894CCE3(-823.71f, -2548.2f, 13.75f, 20f, 1, 0, 0, false);
		unk_0xF16F7C45E0B1B52B(-833.86f, -2564.17f, 13.43f, -814.37f, -2521.04f, 12.94f);
		unk_0x4BDC021CD4295F17(-833.86f, -2564.17f, 13.43f, -814.37f, -2521.04f, 12.94f, false, 0);
		unk_0x6935EBF9868982DC(-482f, -2118f, 6f, -1072f, -2724f, 17f, false, 1);
		func_123(2, 1);
		func_341("BB_Chase", 45, 0, 1);
		unk_0xAEC867D0DBB7AFEB(3);
		func_17(&uLocal_490, 0, unk_0xBC25C936A095B5BA(), "MICHAEL", 0, 1);
		if (unk_0x17FAADF9916EF741())
		{
			if (!func_24())
			{
				unk_0x8B6B50EADA01F251(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true));
			}
			func_21(iLocal_279, -1, 1);
		}
		iLocal_224 = 0;
		iLocal_223 = 1;
	}
	if (iLocal_223 == 1)
	{
		unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
		func_340();
		iLocal_223 = 2;
	}
	if (iLocal_223 == 2)
	{
		if (!unk_0x724D816EA203A79E(iLocal_287))
		{
			iLocal_287 = unk_0x61C05BF08A1E0EFE(joaat("blista"), 0f, 0f, 1f, 0f, true, true, false);
		}
		while (!unk_0x00D24B3F2A5CD22C(45, "BB_Chase"))
		{
			SYSTEM::WAIT(0);
		}
		if (unk_0x17FAADF9916EF741())
		{
			if (unk_0xE59B7F5A03335350(iLocal_279, 0))
			{
				unk_0x2D655AA68FA1736B(iLocal_279, true, true, 0);
				unk_0xA4DFFFD5B234240D(iLocal_279, 30f);
				unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
			}
		}
		if (unk_0x724D816EA203A79E(iLocal_278))
		{
			if (unk_0xE59B7F5A03335350(iLocal_278, 0))
			{
				unk_0x9E6D037EC3389728(iLocal_278, 45, "BB_Chase", 1);
				SYSTEM::SETTIMERB(0);
				func_261();
				unk_0xAF0732277B825027(2);
				if (unk_0x724D816EA203A79E(iLocal_279))
				{
					if (unk_0xE59B7F5A03335350(iLocal_279, 0))
					{
						unk_0x1E7A09C1710FB071(&iLocal_279);
					}
				}
				if (!unk_0x726D9204B160D23E())
				{
					unk_0x829FA4611BD56B44(800);
				}
				iLocal_223 = 0;
				iLocal_222 = 4;
			}
		}
	}
}

void func_340()//Position - 0x1E1C0
{
	vLocal_174[0 /*3*/] = { -583.6427f, -2157.497f, 5.7947f };
	fLocal_124[0] = -0.0003f;
	fLocal_125[0] = -0.0085f;
	fLocal_126[0] = 0.9998f;
	fLocal_127[0] = 0.0158f;
	iLocal_196[0] = joaat("blista");
	vLocal_173[4 /*3*/] = { -827.2035f, -2575.697f, 13.5688f };
	fLocal_109[4] = 0.0004f;
	fLocal_110[4] = -0.0003f;
	fLocal_111[4] = -0.2526f;
	fLocal_112[4] = 0.9676f;
	iLocal_149[4] = 50;
	fLocal_113[4] = 20310f;
	iLocal_195[4] = joaat("manana");
	vLocal_174[1 /*3*/] = { -1033.717f, -2949.014f, 13.4922f };
	fLocal_124[1] = 0.0032f;
	fLocal_125[1] = -0.0003f;
	fLocal_126[1] = -0.0255f;
	fLocal_127[1] = 0.9997f;
	iLocal_196[1] = joaat("bison2");
	vLocal_175[0 /*3*/] = { -1178.365f, -2845.981f, 13.9027f };
	fLocal_118[0] = 0.0018f;
	fLocal_119[0] = 0.0123f;
	fLocal_120[0] = 0.9644f;
	fLocal_121[0] = 0.2642f;
	iLocal_152[0] = 9;
	fLocal_122[0] = 22357f;
	fLocal_123[0] = 1f;
	iLocal_197[0] = joaat("buzzard");
	vLocal_175[1 /*3*/] = { -1376.197f, -2755.167f, 14.0646f };
	fLocal_118[1] = -0.0012f;
	fLocal_119[1] = 0.0013f;
	fLocal_120[1] = 0.8439f;
	fLocal_121[1] = -0.5365f;
	iLocal_152[1] = 10;
	fLocal_122[1] = 27135f;
	fLocal_123[1] = 1f;
	iLocal_197[1] = joaat("packer");
	vLocal_175[2 /*3*/] = { -1342.543f, -2688.482f, 22.8254f };
	fLocal_118[2] = 0.0057f;
	fLocal_119[2] = -0.0014f;
	fLocal_120[2] = -0.2451f;
	fLocal_121[2] = 0.9695f;
	iLocal_152[2] = 11;
	fLocal_122[2] = 35135f;
	fLocal_123[2] = 1f;
	iLocal_197[2] = joaat("jet");
	vLocal_175[3 /*3*/] = { -898.3506f, -2698.965f, 20.159f };
	fLocal_118[3] = 0.0065f;
	fLocal_119[3] = 0.0191f;
	fLocal_120[3] = -0.2629f;
	fLocal_121[3] = 0.9646f;
	iLocal_152[3] = 3;
	fLocal_122[3] = 6764f;
	fLocal_123[3] = 1f;
	iLocal_197[3] = joaat("bus");
	vLocal_175[4 /*3*/] = { -576.655f, -2231.905f, 5.2834f };
	fLocal_118[4] = 0.0043f;
	fLocal_119[4] = 0.0331f;
	fLocal_120[4] = -0.3125f;
	fLocal_121[4] = 0.9493f;
	iLocal_152[4] = 4;
	fLocal_122[4] = 2102f;
	fLocal_123[4] = 1f;
	iLocal_197[4] = joaat("bison");
	vLocal_175[5 /*3*/] = { -994.9925f, -3154.125f, 23.1145f };
	fLocal_118[5] = 0.0056f;
	fLocal_119[5] = 0.0029f;
	fLocal_120[5] = 0.4915f;
	fLocal_121[5] = 0.8708f;
	iLocal_152[5] = 21;
	fLocal_122[5] = 92500f;
	fLocal_123[5] = 1f;
	iLocal_197[5] = joaat("jet");
	vLocal_175[7 /*3*/] = { -553.3315f, -2073.951f, 6.8909f };
	fLocal_118[7] = 0.0072f;
	fLocal_119[7] = 0.0176f;
	fLocal_120[7] = 0.9739f;
	fLocal_121[7] = -0.2263f;
	iLocal_152[7] = 54;
	fLocal_122[7] = 0f;
	fLocal_123[7] = 1f;
	iLocal_197[7] = joaat("police3");
	vLocal_175[8 /*3*/] = { -561.7264f, -2076.761f, 6.7664f };
	fLocal_118[8] = -0.027f;
	fLocal_119[8] = 0.0016f;
	fLocal_120[8] = 0.9169f;
	fLocal_121[8] = -0.3981f;
	iLocal_152[8] = 108;
	fLocal_122[8] = 150f;
	fLocal_123[8] = 1f;
	iLocal_197[8] = joaat("police3");
	vLocal_175[11 /*3*/] = { -1563.918f, -2745.409f, 13.5643f };
	fLocal_118[11] = -0.0022f;
	fLocal_119[11] = -0.0019f;
	fLocal_120[11] = 0.928f;
	fLocal_121[11] = -0.3726f;
	iLocal_152[11] = 111;
	fLocal_122[11] = 36000f;
	fLocal_123[11] = 1f;
	iLocal_197[11] = joaat("police3");
	vLocal_175[12 /*3*/] = { -1026.024f, -2336.396f, 13.5678f };
	fLocal_118[12] = -0.0083f;
	fLocal_119[12] = -0.0054f;
	fLocal_120[12] = 0.55f;
	fLocal_121[12] = 0.8351f;
	iLocal_152[12] = 112;
	fLocal_122[12] = 60000f;
	fLocal_123[12] = 1f;
	iLocal_197[12] = joaat("police3");
	vLocal_175[13 /*3*/] = { -1013.316f, -2340.457f, 13.5678f };
	fLocal_118[13] = -0.0086f;
	fLocal_119[13] = -0.005f;
	fLocal_120[13] = 0.5052f;
	fLocal_121[13] = 0.8629f;
	iLocal_152[13] = 113;
	fLocal_122[13] = 60000f;
	fLocal_123[13] = 1f;
	iLocal_197[13] = joaat("police3");
	vLocal_175[14 /*3*/] = { -1221.049f, -2731.169f, 13.5681f };
	fLocal_118[14] = -0.0083f;
	fLocal_119[14] = -0.0057f;
	fLocal_120[14] = 0.6469f;
	fLocal_121[14] = 0.7625f;
	iLocal_152[14] = 61;
	fLocal_122[14] = 80000f;
	fLocal_123[14] = 1f;
	iLocal_197[14] = joaat("police3");
	vLocal_175[15 /*3*/] = { -1227.203f, -2735.872f, 13.568f };
	fLocal_118[15] = -0.0041f;
	fLocal_119[15] = -0.0091f;
	fLocal_120[15] = 0.9133f;
	fLocal_121[15] = 0.4072f;
	iLocal_152[15] = 62;
	fLocal_122[15] = 80000f;
	fLocal_123[15] = 1f;
	iLocal_197[15] = joaat("police3");
	vLocal_175[19 /*3*/] = { -1240.048f, -2203.457f, 14.0347f };
	fLocal_118[19] = 0.0002f;
	fLocal_119[19] = 0.0018f;
	fLocal_120[19] = 0.9611f;
	fLocal_121[19] = -0.2763f;
	iLocal_152[19] = 66;
	fLocal_122[19] = 55125f;
	fLocal_123[19] = 1f;
	iLocal_197[19] = 1938952078;
	vLocal_175[20 /*3*/] = { -438.0192f, -2060.751f, 73.6354f };
	fLocal_118[20] = -0.0005f;
	fLocal_119[20] = 0.0018f;
	fLocal_120[20] = 0.9559f;
	fLocal_121[20] = 0.2938f;
	iLocal_152[20] = 67;
	fLocal_122[20] = 0f;
	fLocal_123[20] = 1f;
	iLocal_197[20] = joaat("maverick");
	vLocal_175[21 /*3*/] = { -546.8047f, -2187.925f, 5.8819f };
	fLocal_118[21] = -0.0252f;
	fLocal_119[21] = -0.0034f;
	fLocal_120[21] = 0.9369f;
	fLocal_121[21] = 0.3487f;
	iLocal_152[21] = 5;
	fLocal_122[21] = 3834f;
	fLocal_123[21] = 1f;
	iLocal_197[21] = joaat("blista");
	vLocal_175[22 /*3*/] = { -1001.674f, -2947.732f, 13.3947f };
	fLocal_118[22] = 0.001f;
	fLocal_119[22] = -0.0004f;
	fLocal_120[22] = 0.8616f;
	fLocal_121[22] = 0.5075f;
	iLocal_152[22] = 6;
	fLocal_122[22] = 20176f;
	fLocal_123[22] = 1f;
	iLocal_197[22] = joaat("airtug");
	vLocal_175[23 /*3*/] = { -1249.588f, -2525.9f, 13.3942f };
	fLocal_118[23] = 0.001f;
	fLocal_119[23] = -0.0001f;
	fLocal_120[23] = 0.9749f;
	fLocal_121[23] = -0.2228f;
	iLocal_152[23] = 7;
	fLocal_122[23] = 48538f;
	fLocal_123[23] = 1f;
	iLocal_197[23] = joaat("airtug");
	vLocal_175[24 /*3*/] = { -1362.538f, -2625.609f, 13.3895f };
	fLocal_118[24] = -0.0001f;
	fLocal_119[24] = 0.0018f;
	fLocal_120[24] = 0.5344f;
	fLocal_121[24] = 0.8452f;
	iLocal_152[24] = 8;
	fLocal_122[24] = 75112f;
	fLocal_123[24] = 1f;
	iLocal_197[24] = joaat("airtug");
}

void func_341(char* sParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x1EAD2
{
	vector3 vVar0;
	
	StringCopy(&cLocal_185, sParam0, 64);
	bLocal_85 = true;
	iLocal_90 = 0;
	iLocal_156 = 0;
	iLocal_157 = 0;
	iLocal_158 = 0;
	iLocal_159 = iParam1;
	iLocal_160 = 0;
	iLocal_161 = 0;
	iLocal_162 = 0;
	iLocal_166 = 0;
	iLocal_169 = 0;
	iLocal_167 = -1;
	iLocal_168 = -1;
	iLocal_170 = 0;
	iLocal_171 = 0;
	fLocal_144 = 0f;
	fLocal_145 = 0f;
	fLocal_130 = 0f;
	iLocal_91 = 0;
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		vVar0 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
		vLocal_177.x = (vVar0.x - 100f);
		vLocal_177.y = (vVar0.y - 100f);
		vLocal_177.z = (vVar0.z - 100f);
		vLocal_178.x = (vVar0.x + 100f);
		vLocal_178.y = (vVar0.y + 100f);
		vLocal_178.z = (vVar0.z + 100f);
		unk_0x6935EBF9868982DC(vLocal_177, vLocal_178, false, 0);
		if (bParam2)
		{
			unk_0xEDAD35A0D81ED3FB(vVar0, 500f, 0, 0, 0, 0, false, 0);
		}
	}
	unk_0xB2CB6EAA6B280A84("rgh_traffic", &iLocal_194);
	func_330();
	if (bParam3)
	{
		func_187(1);
	}
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		unk_0x635083B90B1A9C63(unk_0xB5CEFD608600A09F(), 0);
		unk_0x6E52C7765A0F4382(false);
	}
	func_192();
}

void func_342()//Position - 0x1EBF4
{
	if (iLocal_223 == 0)
	{
		unk_0x1D1C393C7689E5A6(0f, 14f, 4);
		if (iLocal_343 == 1)
		{
			func_117();
			iLocal_343 = 0;
		}
		iLocal_357 = 0;
		iLocal_358 = 0;
		iLocal_360 = 0;
		iLocal_362 = 0;
		iLocal_372 = 0;
		iLocal_325 = 0;
		iLocal_326 = 0;
		iLocal_329 = 0;
		iLocal_331 = 0;
		iLocal_332 = 0;
		iLocal_333 = 0;
		iLocal_334 = 0;
		iLocal_335 = 0;
		iLocal_336 = 0;
		iLocal_341 = 0;
		iLocal_350 = 0;
		iLocal_348 = 0;
		iLocal_407 = 0;
		iLocal_410 = 0;
		iLocal_449 = 0;
		iLocal_371 = 0;
		iLocal_349 = 1;
		iLocal_227 = 0;
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			iLocal_359 = 1;
		}
		else
		{
			iLocal_359 = 0;
		}
		func_17(&uLocal_490, 0, unk_0xBC25C936A095B5BA(), "MICHAEL", 0, 1);
		unk_0x78108840729CEAEE(1);
		unk_0x6935EBF9868982DC(-617f, -2274f, 0f, -406.01f, -2044f, 15f, false, 1);
		iLocal_230 = unk_0x105601648511CC64();
		if (unk_0x17FAADF9916EF741())
		{
			if (!func_24())
			{
				unk_0x8B6B50EADA01F251(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true));
			}
			func_21(0, -1, 1);
			unk_0x1E7A09C1710FB071(&iLocal_279);
			unk_0x1E7A09C1710FB071(&iLocal_290);
			unk_0x1E7A09C1710FB071(&iLocal_291);
		}
		if (!unk_0x726D9204B160D23E())
		{
			unk_0x829FA4611BD56B44(800);
		}
		if (!unk_0x2DA8CA50A72528FB(iLocal_299))
		{
			iLocal_299 = func_347(vLocal_308, 0);
		}
		unk_0x3857DADBD6EC8A54("TRV4_GAMEPLAY_START");
		vLocal_318 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
		iLocal_223 = 1;
	}
	if (iLocal_223 == 1)
	{
		if (iLocal_348 == 0 && iLocal_362 == 1)
		{
			if (!func_255() || !unk_0x11D38424F1DD3B8F())
			{
				func_20("TRV4_GO1", 7500, 1);
				iLocal_348 = 1;
			}
		}
		if (iLocal_371 == 0 && !func_346())
		{
			if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), vLocal_308, true) < 800f)
			{
				iLocal_229 = unk_0x491B2241281A03B7(0, 2);
				if (iLocal_229 == 0)
				{
					unk_0xB4513103F3EB41DB("SCRIPTED_SCANNER_REPORT_Sol_3_01", 0f);
					unk_0x1D1C393C7689E5A6(0f, 6f, 3);
					iLocal_371 = 1;
				}
				if (iLocal_229 == 1)
				{
					unk_0xB4513103F3EB41DB("SCRIPTED_SCANNER_REPORT_Sol_3_02", 0f);
					unk_0x1D1C393C7689E5A6(0f, 6f, 3);
					iLocal_371 = 1;
				}
			}
		}
		if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), vLocal_308, true) < 600f)
		{
			if (!unk_0x724D816EA203A79E(iLocal_278))
			{
				unk_0xF243B7A14FCFD0F4(joaat("cogcabrio"));
				if (unk_0xD6513D668481290A(joaat("cogcabrio")))
				{
					iLocal_278 = unk_0x61C05BF08A1E0EFE(joaat("cogcabrio"), -428.0226f, -2153.558f, 9.2992f, 90.9098f, true, true, false);
					unk_0x06D93FD5E4D394CF(iLocal_278, false, true, true, true, false, false, 0, false);
					unk_0x914C5DE0B15B8B59(iLocal_278, 27, 27);
					unk_0x2CA123B0622F495C(joaat("cogcabrio"));
					unk_0x55662F9F262C2F9B(iLocal_278, "SOL_3_MOLLY_CAR_Group", 0);
				}
			}
			if (!unk_0x724D816EA203A79E(iLocal_264))
			{
				unk_0xF243B7A14FCFD0F4(joaat("ig_molly"));
				if (unk_0xD6513D668481290A(joaat("ig_molly")))
				{
					if (unk_0x724D816EA203A79E(iLocal_278))
					{
						if (unk_0xE59B7F5A03335350(iLocal_278, 0))
						{
							iLocal_264 = unk_0xFD8987C090669BD5(iLocal_278, 26, joaat("ig_molly"), -1, 1, true);
							unk_0x1E5C2A1EAB944289(iLocal_264, true);
							unk_0xB105531EDD3DE51B(iLocal_264, false);
							unk_0x2CA123B0622F495C(joaat("cogcabrio"));
							unk_0x2CA123B0622F495C(joaat("ig_molly"));
							unk_0x4106FAF8AA1D69D5(iLocal_264, 1862763509);
							iLocal_358 = 1;
						}
					}
				}
			}
		}
		else
		{
			if (unk_0x724D816EA203A79E(iLocal_264))
			{
				unk_0xF845620A03C7425B(&iLocal_264);
			}
			if (unk_0x724D816EA203A79E(iLocal_278))
			{
				unk_0xCF6040807CC0E4A5(&iLocal_278);
			}
		}
		if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), vLocal_308, true) < 500f)
		{
			if (iLocal_360 == 0)
			{
				iLocal_305 = unk_0x9934FEFB3B8C6DB8("BREAKING_NEWS");
				unk_0xF243B7A14FCFD0F4(joaat("police3"));
				unk_0xF243B7A14FCFD0F4(joaat("maverick"));
				unk_0xF243B7A14FCFD0F4(joaat("bison"));
				unk_0xF243B7A14FCFD0F4(joaat("blista"));
				unk_0x1B2A7C8188ADBE04(45, "BB_Chase");
				unk_0x1B2A7C8188ADBE04(35, "BB_Chase");
				unk_0x1B2A7C8188ADBE04(2, "BB_Chase");
				unk_0x1B2A7C8188ADBE04(54, "BB_Chase");
				unk_0x1B2A7C8188ADBE04(55, "BB_Chase");
				unk_0x1B2A7C8188ADBE04(67, "BB_Chase");
				func_184(1, "BB_Chase");
				unk_0x6FED2D1AA2EBF334("TRV4_CHASE");
				iLocal_360 = 1;
			}
		}
		else if (iLocal_360 == 1)
		{
			unk_0x2CA123B0622F495C(joaat("police3"));
			unk_0x2CA123B0622F495C(joaat("maverick"));
			unk_0x2CA123B0622F495C(joaat("bison"));
			unk_0x2CA123B0622F495C(joaat("blista"));
			unk_0x4F5DAC981AF98536(45, "BB_Chase");
			unk_0x4F5DAC981AF98536(35, "BB_Chase");
			unk_0x4F5DAC981AF98536(2, "BB_Chase");
			unk_0x4F5DAC981AF98536(54, "BB_Chase");
			unk_0x4F5DAC981AF98536(55, "BB_Chase");
			unk_0x4F5DAC981AF98536(67, "BB_Chase");
			func_345(1, "BB_Chase");
			unk_0x748798F6C2AB96B7("TRV4_CHASE");
			iLocal_360 = 0;
		}
		if (iLocal_372 == 0)
		{
			if (unk_0x105601648511CC64() > (iLocal_230 + 135000))
			{
				unk_0xEB233A3B7635D2AC();
				func_20("TRV4_WARN1", 7500, 1);
				iLocal_230 = unk_0x105601648511CC64();
				iLocal_372 = 1;
			}
		}
		if (iLocal_372 == 1)
		{
			if (unk_0x105601648511CC64() > (iLocal_230 + 135000))
			{
				func_233("TRV4_FAIL1");
			}
		}
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			if (!unk_0x144E80F5C46A6B75("SOL_3_DRIVE_TO_AIRPORT"))
			{
				unk_0xD6423910AAD8A379("SOL_3_DRIVE_TO_AIRPORT");
			}
			if (iLocal_407 == 0)
			{
				unk_0x3857DADBD6EC8A54("TRV4_CAR_ENTERED");
				iLocal_407 = 1;
			}
			if (!unk_0x724D816EA203A79E(iLocal_279))
			{
				iLocal_279 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
				unk_0x06D93FD5E4D394CF(iLocal_279, false, true, false, false, false, false, 0, false);
				unk_0x0E622862E5E566BB(iLocal_279);
				unk_0xA73D1278857991A2(iLocal_279, true);
			}
		}
		else if (unk_0x724D816EA203A79E(iLocal_279))
		{
			if (unk_0xE59B7F5A03335350(iLocal_279, 0))
			{
				if (iLocal_359 == 0)
				{
					unk_0x06D93FD5E4D394CF(iLocal_279, false, false, false, false, false, false, 0, false);
					iLocal_359 = 1;
				}
				if (iLocal_351 == 1)
				{
					unk_0xBF86DE1BFE3AA5CF(iLocal_279);
					iLocal_351 = 0;
				}
				if (unk_0xB248FAA35ED47DB9(iLocal_279, 1))
				{
					unk_0x1E7A09C1710FB071(&iLocal_279);
				}
			}
		}
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			if (iLocal_410 == 0)
			{
				unk_0x4EA6E0B87A131736(156, 1, 0);
				unk_0xF4CB4FB11E3A61E4(-244f, -1842.74f, 28.48f);
				unk_0xF4CB4FB11E3A61E4(-1.5f, -2014.4f, 11.5f);
				unk_0xF4CB4FB11E3A61E4(-498.7f, -2136.5f, 8.4f);
				unk_0xA2F21B9C95E0F635(1);
				iLocal_410 = 1;
			}
		}
		else if (iLocal_410 == 1)
		{
			unk_0xA2F21B9C95E0F635(0);
			iLocal_410 = 0;
		}
		if ((iLocal_360 == 1 && unk_0x724D816EA203A79E(iLocal_278)) && unk_0x724D816EA203A79E(iLocal_264))
		{
			if (unk_0xE59B7F5A03335350(iLocal_278, 0))
			{
				if (unk_0x3D3F3014B0F74446(iLocal_278, func_344(unk_0xBC25C936A095B5BA()), 0))
				{
					func_343();
					iLocal_223 = 0;
					iLocal_225 = 0;
					iLocal_222 = 3;
				}
			}
			if (unk_0xE59B7F5A03335350(iLocal_278, 0))
			{
				if (unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), iLocal_278))
				{
					func_343();
					iLocal_223 = 0;
					iLocal_225 = 0;
					iLocal_222 = 3;
				}
			}
			if (unk_0xE59B7F5A03335350(iLocal_278, 0))
			{
				if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), unk_0x541C2AEF053615BC(iLocal_278, true), 200f, 132f, 100f, false, true, 0))
				{
					iLocal_357 = 0;
					func_343();
					iLocal_223 = 0;
					iLocal_225 = 0;
					iLocal_222 = 3;
				}
			}
			if (unk_0xE59B7F5A03335350(iLocal_278, 0))
			{
				if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), -577f, -2051.5f, 7f, 84f, 87.5f, 15f, false, true, 0))
				{
					iLocal_357 = 1;
					func_343();
					iLocal_223 = 0;
					iLocal_225 = 0;
					iLocal_222 = 3;
				}
			}
			if (unk_0xE59B7F5A03335350(iLocal_278, 0))
			{
				if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), -703.5f, -1969.5f, 10f, 53.5f, 62.5f, 10f, false, true, 0))
				{
					unk_0x5499DFC49A11E05F();
					unk_0x78108840729CEAEE(0);
					iLocal_357 = 1;
					func_343();
					iLocal_223 = 0;
					iLocal_225 = 0;
					iLocal_222 = 3;
				}
			}
		}
	}
}

void func_343()//Position - 0x1F304
{
	while (((!unk_0xD6513D668481290A(joaat("police3")) || !unk_0xD6513D668481290A(joaat("maverick"))) || !unk_0xD6513D668481290A(joaat("bison"))) || !unk_0xD6513D668481290A(joaat("blista")))
	{
		SYSTEM::WAIT(0);
	}
	while (((((!unk_0x00D24B3F2A5CD22C(45, "BB_Chase") || !unk_0x00D24B3F2A5CD22C(35, "BB_Chase")) || !unk_0x00D24B3F2A5CD22C(2, "BB_Chase")) || !unk_0x00D24B3F2A5CD22C(54, "BB_Chase")) || !unk_0x00D24B3F2A5CD22C(55, "BB_Chase")) || !unk_0x00D24B3F2A5CD22C(67, "BB_Chase"))
	{
		SYSTEM::WAIT(0);
	}
}

var func_344(int iParam0)//Position - 0x1F3B0
{
	var uVar0;
	
	unk_0x9CDD10270A1ACF6F(iParam0, &uVar0, 1);
	return uVar0;
}

void func_345(int iParam0, char* sParam1)//Position - 0x1F3C4
{
	unk_0x4F5DAC981AF98536(iParam0, sParam1);
}

int func_346()//Position - 0x1F3D4
{
	if (Global_3DB8 == 4)
	{
		if (unk_0x58E7DDFF8D17A82A())
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_347(vector3 vParam0, bool bParam1)//Position - 0x1F3F9
{
	int iVar0;
	
	iVar0 = unk_0x390CF6C8AD6903B7(vParam0);
	unk_0x3F5F1772D71D5EC4(iVar0, func_230(unk_0x7AF0088ABFA713B6(), 1f, 1f));
	unk_0x0BBAABB52887CF8C(iVar0, bParam1);
	return iVar0;
}

void func_348()//Position - 0x1F425
{
	if (iLocal_223 == 0)
	{
		iLocal_336 = 1;
		iLocal_416 = 0;
		iLocal_433 = 0;
		iLocal_437 = 0;
		while (iLocal_336 == 1)
		{
			unk_0x2E94C9549322098D("M_LegalTrouble", 0);
			switch (iLocal_225)
			{
				case 0:
					unk_0x04DD7A558FCF2C34("sol_3_int", 8);
					if (func_392())
					{
						while (!func_364(61, &uLocal_655, 0, 1, 0, 0, 0))
						{
							SYSTEM::WAIT(0);
						}
						iLocal_406 = 0;
						unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 0);
						func_217(1, 1, 1, 0, 0);
						unk_0x538BB037E00A3AD9(unk_0xBC25C936A095B5BA(), "Michael", 0, 0, 0);
						if (unk_0x724D816EA203A79E(Global_15DFD[0]))
						{
							if (unk_0xE59B7F5A03335350(Global_15DFD[0], 0))
							{
								unk_0x77815D3407C6700D(Global_15DFD[0], true, 1);
								iLocal_279 = Global_15DFD[0];
							}
						}
						if (unk_0x724D816EA203A79E(Global_15DFD[1]))
						{
							if (unk_0xE59B7F5A03335350(Global_15DFD[1], 0))
							{
								unk_0x77815D3407C6700D(Global_15DFD[1], true, 1);
								iLocal_290 = Global_15DFD[1];
							}
						}
						if (unk_0x724D816EA203A79E(Global_15DFD[2]))
						{
							if (unk_0xE59B7F5A03335350(Global_15DFD[2], 0))
							{
								unk_0x77815D3407C6700D(Global_15DFD[2], true, 1);
								iLocal_291 = Global_15DFD[2];
							}
						}
						if (unk_0x724D816EA203A79E(Global_15DFD[3]))
						{
							if (unk_0xE59B7F5A03335350(Global_15DFD[3], 0))
							{
								unk_0x77815D3407C6700D(Global_15DFD[3], true, 1);
								iLocal_292 = Global_15DFD[3];
							}
						}
						unk_0x93B1CB6BD50812C7(0);
						unk_0xF3C7BD26F94560D9(4);
						func_363();
						if (!unk_0x726D9204B160D23E())
						{
							unk_0x829FA4611BD56B44(250);
						}
						iLocal_225++;
					}
					break;
				
				case 1:
					if (iLocal_416 == 0)
					{
						if (unk_0x102F1A3BD4B68933())
						{
							if (iLocal_437 == 0)
							{
								if (unk_0x724D816EA203A79E(iLocal_292))
								{
									if (unk_0xE59B7F5A03335350(iLocal_292, 0))
									{
										if (unk_0x8C1A6E7D5F410F4A(unk_0x6F79ECA8C83E4357(iLocal_292)))
										{
											unk_0xA1EE8501940C1D3E(iLocal_292, 2);
											unk_0x641B19E156645A92(iLocal_292, -1048.722f, -506.8387f, 35.0386f, 1, false, 0, 1);
											unk_0x019CE76D5286C95C(iLocal_292, 357.1288f);
											unk_0x127F627F30266DD9(iLocal_292, 1);
											unk_0xF0A40F19AAB79E88(iLocal_292, 1084227584);
											func_353(-1048.722f, -506.8387f, 35.0386f, 357.1288f, 0, 145);
											iLocal_437 = 1;
										}
										if (((unk_0x7C28D15641461C68(unk_0x6F79ECA8C83E4357(iLocal_292)) || unk_0x7512ED01F3F46714(unk_0x6F79ECA8C83E4357(iLocal_292))) || unk_0x2B4DE5C0D509B0F9(unk_0x6F79ECA8C83E4357(iLocal_292))) || unk_0x89B9572166100905(unk_0x6F79ECA8C83E4357(iLocal_292)))
										{
											if ((((((((unk_0x6F79ECA8C83E4357(iLocal_292) != joaat("bus") && unk_0x6F79ECA8C83E4357(iLocal_292) != joaat("pounder")) && unk_0x6F79ECA8C83E4357(iLocal_292) != joaat("packer")) && unk_0x6F79ECA8C83E4357(iLocal_292) != joaat("airbus")) && unk_0x6F79ECA8C83E4357(iLocal_292) != joaat("ambulance")) && unk_0x6F79ECA8C83E4357(iLocal_292) != joaat("barracks")) && unk_0x6F79ECA8C83E4357(iLocal_292) != joaat("barracks2")) && unk_0x6F79ECA8C83E4357(iLocal_292) != joaat("benson")) && unk_0x6F79ECA8C83E4357(iLocal_292) != joaat("biff"))
											{
												unk_0x641B19E156645A92(iLocal_292, -1027.657f, -486.6945f, 35.9571f, 1, false, 0, 1);
												unk_0x019CE76D5286C95C(iLocal_292, 207.7515f);
												unk_0xF0A40F19AAB79E88(iLocal_292, 1084227584);
												func_353(-1027.657f, -486.6945f, 35.9571f, 207.7515f, 0, 145);
												iLocal_437 = 1;
											}
										}
										if ((((!unk_0x8C1A6E7D5F410F4A(unk_0x6F79ECA8C83E4357(iLocal_292)) && !unk_0x7C28D15641461C68(unk_0x6F79ECA8C83E4357(iLocal_292))) && !unk_0x7512ED01F3F46714(unk_0x6F79ECA8C83E4357(iLocal_292))) && !unk_0x2B4DE5C0D509B0F9(unk_0x6F79ECA8C83E4357(iLocal_292))) && !unk_0x89B9572166100905(unk_0x6F79ECA8C83E4357(iLocal_292)))
										{
											unk_0xCF6040807CC0E4A5(&iLocal_292);
											iLocal_437 = 1;
										}
									}
								}
							}
							func_351(&uLocal_655, 0, 0, 2000, 1, 1, 0, 1);
							iLocal_416 = 1;
						}
					}
					if (iLocal_406 == 0)
					{
						unk_0xB2CB6EAA6B280A84("SecGuards", &iLocal_488);
						unk_0xA902E18EDF6FA0C8(5, 1862763509, iLocal_488);
						unk_0xA902E18EDF6FA0C8(5, iLocal_488, 1862763509);
						unk_0x900CF084251DED26("TREV4", 0);
						iLocal_406 = 1;
					}
					if (iLocal_433 == 0)
					{
						if (unk_0x866EAD7E27D8D0F8())
						{
							unk_0xF643D76BBEB27712(unk_0xBC25C936A095B5BA());
							unk_0xAC9B0ED8D915D62B(unk_0xBC25C936A095B5BA());
							unk_0xC70E4601A4F9E28B(unk_0xBC25C936A095B5BA());
							if (unk_0xADE6C4641AFD481C() > 120000)
							{
								unk_0x3857DADBD6EC8A54("TRV4_START");
								iLocal_433 = 1;
							}
						}
					}
					if (unk_0x3F3252765FE36DA8("Michael", 0))
					{
						unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), -1012.268f, -480.0742f, 38.9757f, 1, false, 0, 1);
						unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), 121.4087f);
						unk_0x56EDA6006F1B166D(unk_0xB5CEFD608600A09F(), 2f, 3000, 0f, 1, 0);
						unk_0x2EB4D46478766D87(unk_0xBC25C936A095B5BA(), 0, 0);
						unk_0x3E2B7D349B5735D3(unk_0xBC25C936A095B5BA(), -530524, false, 0, 0);
					}
					if (unk_0x4B088956DA856645(0))
					{
						unk_0xF3F01A78937DC905(0f);
					}
					if (!unk_0x102F1A3BD4B68933())
					{
						func_350(61);
						if (iLocal_433 == 0)
						{
							unk_0x3857DADBD6EC8A54("TRV4_START_CS_SKIP");
							iLocal_433 = 1;
						}
						unk_0x1E463345CF429A99();
						func_217(0, 1, 1, 0, 0);
						iLocal_225++;
					}
					break;
				
				case 2:
					unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
					if (unk_0x724D816EA203A79E(iLocal_279))
					{
						if (unk_0xE59B7F5A03335350(iLocal_279, 0))
						{
							if (unk_0xB248FAA35ED47DB9(iLocal_279, 1))
							{
								unk_0x1E7A09C1710FB071(&iLocal_279);
							}
						}
					}
					if (unk_0x724D816EA203A79E(iLocal_290))
					{
						if (unk_0xE59B7F5A03335350(iLocal_290, 0))
						{
							if (unk_0xB248FAA35ED47DB9(iLocal_290, 1))
							{
								unk_0x1E7A09C1710FB071(&iLocal_290);
							}
						}
					}
					if (unk_0x724D816EA203A79E(iLocal_291))
					{
						if (unk_0xE59B7F5A03335350(iLocal_291, 0))
						{
							if (unk_0xB248FAA35ED47DB9(iLocal_291, 1))
							{
								unk_0x1E7A09C1710FB071(&iLocal_291);
							}
						}
					}
					func_349();
					iLocal_336 = 0;
					iLocal_225 = 0;
					iLocal_223 = 0;
					iLocal_222 = 2;
					break;
			}
			SYSTEM::WAIT(0);
		}
	}
}

void func_349()//Position - 0x1F9AF
{
	Global_DAA5 = 0;
}

void func_350(int iParam0)//Position - 0x1F9BB
{
	if (Global_15FA6 != -1)
	{
		if (iParam0 == Global_15FA6)
		{
			Global_15FAA = 1;
			return;
		}
	}
}

void func_351(var uParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x1F9DF
{
	int iVar0;
	
	if (iParam4 == 1)
	{
		unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()), 64);
	}
	if (!unk_0x866EAD7E27D8D0F8())
	{
		unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), !bParam1, 0);
	}
	if (bParam7)
	{
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			unk_0x9965F1612928953B(unk_0xBC25C936A095B5BA(), 1);
		}
	}
	if (!bParam1 && iParam6)
	{
		unk_0x9CB4DD3D88846081(0, 0, 3, 0);
	}
	else
	{
		unk_0x062C9995BFD27B2A(bParam1, bParam2, iParam3, 1, 0, 0);
	}
	if (bParam1)
	{
		unk_0x7456702622C62EA0(1);
	}
	else
	{
		if (unk_0xEF0E25DA0CB6E8FF(uParam0->f_4))
		{
			if (unk_0xEDEA6C8F42EE05F6(uParam0->f_4))
			{
				unk_0x348665177DBFB93B(uParam0->f_4, false);
			}
			unk_0x4EC087603E1DEF9C(uParam0->f_4, 1);
		}
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			unk_0xDC078F87049ECECE(unk_0xBC25C936A095B5BA(), true, 0);
		}
		iVar0 = unk_0x3E12B546F3F2597A();
		if (unk_0x724D816EA203A79E(iVar0))
		{
			unk_0xDC078F87049ECECE(iVar0, true, 0);
		}
		unk_0xDA70546257A3ED8B("TIME_LAPSE");
		if (unk_0x144E80F5C46A6B75("TOD_SHIFT_SCENE"))
		{
			unk_0x38FF8CB6377D36F6(uParam0->f_A);
			unk_0xDA70546257A3ED8B("TIME_LAPSE");
			unk_0xC1300D0F3A74E20B("TOD_SHIFT_SCENE");
		}
	}
	func_217(bParam1, 1, 0, 0, 0);
	func_352();
	if (!bParam1 && iParam5)
	{
		if (uParam0->f_5)
		{
			unk_0xC2BB4D344E887586(uParam0->f_7, 0, 0);
		}
		else
		{
			unk_0xC2BB4D344E887586(uParam0->f_8, 0, 0);
		}
	}
	if (!bParam1)
	{
		if (unk_0x17FAADF9916EF741())
		{
			unk_0x829FA4611BD56B44(250);
		}
	}
	if (!bParam1)
	{
		if (Global_19B04.f_7F22.f_12C1 != -15)
		{
			Global_19B04.f_7F22.f_12C1 = func_93();
		}
	}
}

void func_352()//Position - 0x1FB51
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		unk_0x8C563C8EA840EA02(Global_19B04.f_3720[iVar0 /*104*/].f_10);
		iVar0++;
	}
}

void func_353(vector3 vParam0, float fParam1, int iParam2, int iParam3)//Position - 0x1FB7D
{
	vector3 vVar0;
	var uVar1;
	
	if (unk_0x724D816EA203A79E(Global_17646.f_4))
	{
		if (unk_0xE59B7F5A03335350(Global_17646.f_4, 0))
		{
			if (func_362(24) != Global_17646.f_4)
			{
				if (iParam2 == 1)
				{
					if (func_359(unk_0x541C2AEF053615BC(Global_17646.f_4, true), iParam3, &vVar0, &uVar1))
					{
						vParam0 = { vVar0 };
						fParam1 = uVar1;
					}
				}
				func_354(Global_17646.f_4, vParam0, fParam1, 24, 0);
			}
		}
	}
}

void func_354(int iParam0, vector3 vParam1, float fParam2, int iParam3, bool bParam4)//Position - 0x1FBF8
{
	struct<60> Var0;
	
	if (unk_0x724D816EA203A79E(iParam0) && unk_0xE59B7F5A03335350(iParam0, 0))
	{
		if (iParam3 != 24 && iParam3 != 25)
		{
			return;
		}
		if (iParam3 == 24)
		{
			if (unk_0x724D816EA203A79E(Global_110A8.f_1E4[25]) && unk_0xE59B7F5A03335350(Global_110A8.f_1E4[25], 0))
			{
				if (Global_110A8.f_1E4[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam4)
		{
			if ((unk_0x10A01B0B02B273EF(iParam0) || unk_0x6F79ECA8C83E4357(iParam0) == joaat("bus")) || unk_0x6F79ECA8C83E4357(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_358(iParam3);
		Var0.f_9 = 49;
		Var0.f_3B = 2;
		func_39(iParam0, &Var0);
		if (func_70(vParam1, 0f, 0f, 0f, 0))
		{
			vParam1 = { unk_0x541C2AEF053615BC(iParam0, true) };
			fParam2 = unk_0x349C94FFF43E2979(iParam0);
		}
		if (iParam3 == 24)
		{
			if (unk_0x56BEECB328B6D29D(unk_0x1377080E9B0BD993()) != joaat("vehicle_gen_controller"))
			{
				Global_11484 = unk_0x56BEECB328B6D29D(unk_0x1377080E9B0BD993());
			}
		}
		func_356(iParam3, &Var0, vParam1, fParam2, func_34(iParam0));
		func_355(iParam3, iParam0, 0);
	}
}

void func_355(int iParam0, int iParam1, int iParam2)//Position - 0x1FD21
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_156(&(Global_110A8.f_22B[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0xFA30DFD0084E92FE(Global_110A8.f_22B[0 /*21*/].f_9, 12) && !unk_0xFA30DFD0084E92FE(Global_110A8.f_22B[0 /*21*/].f_9, 10))
	{
		if (Global_110A8.f_22B[0 /*21*/].f_4 != unk_0x6F79ECA8C83E4357(iParam1))
		{
			return;
		}
	}
	if (Global_11433 != -1 && Global_11433 != iParam0)
	{
		return;
	}
	if (unk_0x724D816EA203A79E(iParam1))
	{
		if (unk_0xE59B7F5A03335350(iParam1, 0))
		{
			if (!unk_0x5CAE759AE8219D20(iParam1))
			{
				unk_0x77815D3407C6700D(iParam1, true, 1);
			}
			if (iParam0 == 24)
			{
				Global_19B04.f_7F22.f_12C1 = func_93();
			}
			if (iParam1 != Global_110A8.f_8B[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_362(iParam0);
					if ((unk_0x724D816EA203A79E(iVar0) && unk_0xE59B7F5A03335350(iVar0, 0)) && iParam1 != iVar0)
					{
						func_142(iVar0, 145);
					}
				}
				Global_11432 = iParam1;
				Global_11433 = iParam0;
				Global_11434 = iParam2;
			}
		}
	}
}

void func_356(int iParam0, var uParam1, vector3 vParam2, float fParam3, int iParam4)//Position - 0x1FE3E
{
	if (func_156(&(Global_110A8.f_22B[0 /*21*/]), iParam0))
	{
		if (unk_0xFA30DFD0084E92FE(Global_110A8.f_22B[0 /*21*/].f_9, 10))
		{
			func_357(iParam0);
			func_153(uParam1, &(Global_19B04.f_7F22.f_45[Global_110A8.f_22B[0 /*21*/].f_E /*78*/]));
			if (unk_0xFA30DFD0084E92FE(Global_110A8.f_22B[0 /*21*/].f_9, 11))
			{
				Global_19B04.f_7F22.f_748[Global_110A8.f_22B[0 /*21*/].f_E /*3*/] = { vParam2 };
				Global_19B04.f_7F22.f_78E[Global_110A8.f_22B[0 /*21*/].f_E] = fParam3;
			}
			else
			{
				Global_19B04.f_7F22.f_748[Global_110A8.f_22B[0 /*21*/].f_E /*3*/] = { 0f, 0f, 0f };
				Global_19B04.f_7F22.f_78E[Global_110A8.f_22B[0 /*21*/].f_E] = -1f;
			}
			Global_19B04.f_7F22.f_7A6[Global_110A8.f_22B[0 /*21*/].f_E] = iParam4 + 1;
			func_149(iParam0, 1);
		}
	}
}

void func_357(int iParam0)//Position - 0x1FF3D
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_156(&(Global_110A8.f_22B[0 /*21*/]), iParam0))
	{
		if (unk_0x724D816EA203A79E(Global_110A8.f_8B[iParam0]))
		{
			unk_0x77815D3407C6700D(Global_110A8.f_8B[iParam0], true, 1);
			unk_0x1E7A09C1710FB071(&(Global_110A8.f_8B[iParam0]));
			Global_110A8.f_8B[iParam0] = 0;
		}
		if (unk_0xFA30DFD0084E92FE(Global_110A8.f_22B[0 /*21*/].f_9, 13))
		{
			func_149(iParam0, 0);
		}
	}
}

void func_358(int iParam0)//Position - 0x1FFB7
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_357(iParam0);
	func_149(iParam0, 0);
}

int func_359(vector3 vParam0, int iParam1, var uParam2, var uParam3)//Position - 0x1FFDE
{
	int iVar0;
	
	iVar0 = func_360(vParam0, iParam1, 1);
	switch (iVar0)
	{
		case 0:
			*uParam2 = { -827.351f, 157.785f, 68.2143f };
			*uParam3 = 85.1509f;
			return 1;
			break;
		
		case 1:
		case 2:
			*uParam2 = { 1992.523f, 3813.916f, 31.1008f };
			*uParam3 = 122.1498f;
			return 1;
			break;
		
		case 3:
			*uParam2 = { -1184.258f, -1496.556f, 3.3895f };
			*uParam3 = 303.2098f;
			return 1;
			break;
		
		case 4:
			*uParam2 = { 118.1067f, -1325.906f, 28.3706f };
			*uParam3 = 123.5016f;
			return 1;
			break;
		
		case 5:
			*uParam2 = { -18.118f, -1455.126f, 29.5004f };
			*uParam3 = 273.2822f;
			return 1;
			break;
		
		case 6:
			*uParam2 = { 1.5947f, 543.4017f, 173.4644f };
			*uParam3 = 310.7556f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

int func_360(vector3 vParam0, int iParam1, int iParam2)//Position - 0x20102
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (Global_1584A[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_1584A[iVar0 /*10*/].f_9 == iParam1 || iParam1 == 145)
			{
				if (func_361(iVar0) || iParam2 == 0)
				{
					fVar1 = unk_0xF0F2FC9DE291567F(vParam0, Global_1584A[iVar0 /*10*/].f_3, true);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

bool func_361(int iParam0)//Position - 0x20191
{
	return unk_0xFA30DFD0084E92FE(Global_19B04.f_1C20[iParam0], 0);
}

int func_362(int iParam0)//Position - 0x201A9
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_110A8.f_8B[iParam0];
}

void func_363()//Position - 0x201C5
{
	Global_DAA5 = 1;
}

bool func_364(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x201D1
{
	struct<2> Var0;
	
	func_391(iParam0, &Var0);
	func_390(iParam0, &Var0, &(Var0.f_1));
	return func_365(uParam1, &Var0, bParam2, bParam3, bParam4, bParam5, bParam6);
}

int func_365(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x201FF
{
	int iVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	
	uParam0->f_7 = *uParam1;
	uParam0->f_8 = uParam1->f_1;
	if ((func_423(0) && !bParam2) && !bParam4)
	{
		if (uParam0->f_5)
		{
			unk_0xC2BB4D344E887586(uParam0->f_7, 0, 0);
		}
		else
		{
			unk_0xC2BB4D344E887586(uParam0->f_8, 0, 0);
		}
		return 1;
	}
	if (uParam0->f_2 == 0)
	{
		if (uParam0->f_7 != -1 && uParam0->f_8 != -1)
		{
			if (bParam2 || !func_388(uParam0->f_8, uParam0->f_7))
			{
				if (unk_0xF25512B8A510B0E1("TIME_LAPSE", 0, -1))
				{
					uParam0->f_6 = 0;
					uParam0->f_2 = 1;
				}
			}
			else
			{
				uParam0->f_2 = -1;
				return 1;
			}
		}
		else
		{
			uParam0->f_2 = -1;
			return 1;
		}
	}
	unk_0xDE7B9CB38D019BF0();
	unk_0x4E0EC60D119222B1(7);
	unk_0xF8F756483107049E(0f);
	if (uParam0->f_2 == 1)
	{
		if (bParam2)
		{
			unk_0x4EC087603E1DEF9C(uParam0->f_4, 0);
			uParam0->f_4 = unk_0x578D5D08EC980893("DEFAULT_SPLINE_CAMERA", false);
			unk_0xAAD57F72AF23F964(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_F, 3, 2);
			if (uParam1->f_11 < 0)
			{
				unk_0xAAD57F72AF23F964(uParam0->f_4, uParam1->f_8, uParam1->f_B, uParam1->f_F, 3, 2);
			}
			else
			{
				unk_0xAAD57F72AF23F964(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_F, 3, 2);
			}
			unk_0x9DF315A9EFFF87AC(uParam0->f_4, uParam1->f_E);
			unk_0x348665177DBFB93B(uParam0->f_4, true);
			if (!bParam6)
			{
				if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
				{
					unk_0xDC078F87049ECECE(unk_0xBC25C936A095B5BA(), false, 0);
				}
				iVar0 = unk_0x3E12B546F3F2597A();
				if (unk_0x724D816EA203A79E(iVar0))
				{
					if (!unk_0x5CAE759AE8219D20(iVar0))
					{
						unk_0x77815D3407C6700D(iVar0, true, 0);
					}
					unk_0xDC078F87049ECECE(iVar0, false, 0);
				}
			}
			fVar1 = unk_0x99200FD48DC740AA(uParam0->f_4);
			unk_0x31F042DC27C8DECE();
			unk_0xD2A8FC9FE0044C83(uParam1->f_2, fVar1, 0);
			unk_0x5DEC86EE2E34A59D(uParam1->f_2, fVar1);
			unk_0x6A54FD861D871600(uParam1->f_2, fVar1);
			if (bParam3)
			{
				unk_0x6C5F5B5F6894CCE3(uParam1->f_2, 5000f, 1, 1, 0, false);
			}
			func_387(&(uParam0->f_1), 0, 0, 0, unk_0xBE14F159908E4EE5(), unk_0xDD6A91E47ED4D0CF(), unk_0x4EEB3860BFC44B78());
			func_351(uParam0, 1, 0, 2000, 1, 1, 0, 1);
			uParam0->f_2 = 2;
		}
		else if (!func_388(uParam0->f_7, uParam0->f_8))
		{
			if (uParam0->f_5)
			{
				unk_0x4EC087603E1DEF9C(uParam0->f_4, 0);
				uParam0->f_4 = unk_0x578D5D08EC980893("DEFAULT_SPLINE_CAMERA", false);
				unk_0xAAD57F72AF23F964(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_F, 3, 2);
				if (uParam1->f_11 < 0)
				{
					unk_0xAAD57F72AF23F964(uParam0->f_4, uParam1->f_8, uParam1->f_B, uParam1->f_F, 3, 2);
				}
				else
				{
					unk_0xAAD57F72AF23F964(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_F, 3, 2);
				}
				unk_0x9DF315A9EFFF87AC(uParam0->f_4, uParam1->f_E);
				unk_0x348665177DBFB93B(uParam0->f_4, true);
				if (!bParam6)
				{
					if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
					{
						unk_0xDC078F87049ECECE(unk_0xBC25C936A095B5BA(), false, 0);
					}
					iVar2 = unk_0x3E12B546F3F2597A();
					if (unk_0x724D816EA203A79E(iVar2))
					{
						if (!unk_0x5CAE759AE8219D20(iVar2))
						{
							unk_0x77815D3407C6700D(iVar2, true, 0);
						}
						unk_0xDC078F87049ECECE(iVar2, false, 0);
					}
				}
				fVar3 = unk_0x99200FD48DC740AA(uParam0->f_4);
				unk_0x31F042DC27C8DECE();
				unk_0xD2A8FC9FE0044C83(uParam1->f_2, fVar3, 0);
				unk_0x5DEC86EE2E34A59D(uParam1->f_2, fVar3);
				unk_0x6A54FD861D871600(uParam1->f_2, fVar3);
				if (bParam3)
				{
					unk_0x6C5F5B5F6894CCE3(uParam1->f_2, 5000f, 1, 1, 0, false);
				}
				func_387(&(uParam0->f_1), 0, 0, 8, unk_0xBE14F159908E4EE5(), unk_0xDD6A91E47ED4D0CF(), unk_0x4EEB3860BFC44B78());
				func_351(uParam0, 1, 0, 2000, 1, 1, 0, 1);
				uParam0->f_2 = 2;
			}
			else
			{
				unk_0xDA70546257A3ED8B("TIME_LAPSE");
				uParam0->f_2 = -1;
				return 1;
			}
		}
		else if (!uParam0->f_5)
		{
			unk_0x4EC087603E1DEF9C(uParam0->f_4, 0);
			uParam0->f_4 = unk_0x578D5D08EC980893("DEFAULT_SPLINE_CAMERA", false);
			unk_0xAAD57F72AF23F964(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_F, 3, 2);
			if (uParam1->f_11 < 0)
			{
				unk_0xAAD57F72AF23F964(uParam0->f_4, uParam1->f_8, uParam1->f_B, uParam1->f_F, 3, 2);
			}
			else
			{
				unk_0xAAD57F72AF23F964(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_F, 3, 2);
			}
			unk_0x9DF315A9EFFF87AC(uParam0->f_4, uParam1->f_E);
			unk_0x0EE3BD85F728F360(uParam0->f_4, 3);
			unk_0x348665177DBFB93B(uParam0->f_4, true);
			if (!bParam6)
			{
				if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
				{
					unk_0xDC078F87049ECECE(unk_0xBC25C936A095B5BA(), false, 0);
				}
				iVar4 = unk_0x3E12B546F3F2597A();
				if (unk_0x724D816EA203A79E(iVar4))
				{
					if (!unk_0x5CAE759AE8219D20(iVar4))
					{
						unk_0x77815D3407C6700D(iVar4, true, 0);
					}
					unk_0xDC078F87049ECECE(iVar4, false, 0);
				}
			}
			fVar5 = unk_0x99200FD48DC740AA(uParam0->f_4);
			unk_0x31F042DC27C8DECE();
			unk_0xD2A8FC9FE0044C83(uParam1->f_2, fVar5, 0);
			unk_0x5DEC86EE2E34A59D(uParam1->f_2, fVar5);
			unk_0x6A54FD861D871600(uParam1->f_2, fVar5);
			if (bParam3)
			{
				unk_0x6C5F5B5F6894CCE3(uParam1->f_2, 5000f, 0, 1, 0, false);
			}
			func_387(&(uParam0->f_1), 0, 0, 0, unk_0xBE14F159908E4EE5(), unk_0xDD6A91E47ED4D0CF(), unk_0x4EEB3860BFC44B78());
			func_351(uParam0, 1, 0, 2000, 1, 1, 0, 1);
			uParam0->f_2 = 2;
		}
		else
		{
			unk_0xDA70546257A3ED8B("TIME_LAPSE");
			uParam0->f_2 = -1;
			return 1;
		}
	}
	if (uParam0->f_2 == 2)
	{
		if (bParam3)
		{
			unk_0x6C5F5B5F6894CCE3(uParam1->f_2, 5000f, 0, 1, 0, false);
		}
		if (!uParam0->f_5)
		{
			if (func_368(uParam0->f_8, 0, &(uParam1->f_12), &(uParam1->f_16), uParam0, -1082130432, 0, 1, 1065353216))
			{
				if (uParam1->f_11 < 0)
				{
					uParam0->f_9 = unk_0x105601648511CC64();
					uParam0->f_2 = 3;
				}
				else
				{
					uParam0->f_4 = unk_0x578D5D08EC980893("DEFAULT_SPLINE_CAMERA", false);
					unk_0xAAD57F72AF23F964(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_F, 3, 2);
					unk_0xAAD57F72AF23F964(uParam0->f_4, uParam1->f_8, uParam1->f_B, uParam1->f_F, 3, 2);
					unk_0x9DF315A9EFFF87AC(uParam0->f_4, uParam1->f_E);
					unk_0x0EE3BD85F728F360(uParam0->f_4, 3);
					unk_0x348665177DBFB93B(uParam0->f_4, true);
					uParam0->f_9 = unk_0x105601648511CC64();
					uParam0->f_2 = 22;
				}
			}
		}
		else if (func_368(uParam0->f_7, 0, &(uParam1->f_12), &(uParam1->f_16), uParam0, -1082130432, 0, 1, 1065353216))
		{
			if (uParam1->f_11 < 0)
			{
				uParam0->f_9 = unk_0x105601648511CC64();
				uParam0->f_2 = 3;
			}
			else
			{
				uParam0->f_4 = unk_0x578D5D08EC980893("DEFAULT_SPLINE_CAMERA", false);
				unk_0xAAD57F72AF23F964(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_F, 3, 2);
				unk_0xAAD57F72AF23F964(uParam0->f_4, uParam1->f_8, uParam1->f_B, uParam1->f_F, 3, 2);
				unk_0x9DF315A9EFFF87AC(uParam0->f_4, uParam1->f_E);
				unk_0x0EE3BD85F728F360(uParam0->f_4, 3);
				unk_0x348665177DBFB93B(uParam0->f_4, true);
				uParam0->f_9 = unk_0x105601648511CC64();
				uParam0->f_2 = 22;
			}
		}
		if (!bParam5)
		{
			if (func_366(1000) || uParam0->f_6)
			{
				uParam0->f_6 = 1;
				if (!unk_0x422F9EDE839E6ABB())
				{
					unk_0x7A41D32A383895D8(250);
				}
				if (!unk_0x17FAADF9916EF741())
				{
					unk_0xDE7B9CB38D019BF0();
					unk_0x4E0EC60D119222B1(7);
					return 0;
				}
				if (uParam0->f_3 != 0)
				{
					func_368(uParam0->f_7, 0, &(uParam1->f_12), &(uParam1->f_16), uParam0, 1f, 0, 1, 1065353216);
				}
				uParam0->f_2 = 4;
			}
		}
	}
	if (uParam0->f_2 == 22)
	{
		if (bParam3)
		{
			unk_0x6C5F5B5F6894CCE3(uParam1->f_2, 5000f, 0, 1, 0, false);
		}
		if (unk_0xEF0E25DA0CB6E8FF(uParam0->f_4) && unk_0x16BE1286447174A9(uParam0->f_4))
		{
		}
		else
		{
			uParam0->f_9 = unk_0x105601648511CC64();
			uParam0->f_2 = 3;
		}
		if (!bParam5)
		{
			if (func_366(1000) || uParam0->f_6)
			{
				uParam0->f_6 = 1;
				if (!unk_0x422F9EDE839E6ABB())
				{
					unk_0x7A41D32A383895D8(250);
				}
				if (!unk_0x17FAADF9916EF741())
				{
					unk_0xDE7B9CB38D019BF0();
					unk_0x4E0EC60D119222B1(7);
					return 0;
				}
				uParam0->f_2 = 4;
			}
		}
	}
	if (uParam0->f_2 == 3)
	{
		if (bParam3)
		{
			unk_0x6C5F5B5F6894CCE3(uParam1->f_2, 5000f, 0, 1, 0, false);
		}
		if (uParam0->f_9 + 1000 > unk_0x105601648511CC64())
		{
			uParam0->f_2 = 4;
		}
	}
	if (uParam0->f_2 == 4)
	{
		uParam0->f_6 = 0;
		uParam0->f_2 = -1;
		return 1;
	}
	if (uParam0->f_2 == -1)
	{
		return 1;
	}
	return 0;
}

int func_366(int iParam0)//Position - 0x209B2
{
	if (unk_0x726D9204B160D23E())
	{
		if ((unk_0x105601648511CC64() - Global_1C) > iParam0)
		{
			Global_1B = unk_0x105601648511CC64();
		}
		Global_1C = unk_0x105601648511CC64();
		if ((unk_0x105601648511CC64() - Global_1B) > iParam0)
		{
			if (func_367())
			{
				Global_1B = unk_0x105601648511CC64();
				return 1;
			}
		}
	}
	return 0;
}

int func_367()//Position - 0x209FC
{
	if (unk_0xE186ACC7BE9B244E())
	{
		return 0;
	}
	if (unk_0x694514BD37EC4E94(0, 18) || unk_0x694514BD37EC4E94(2, 18))
	{
		return 1;
	}
	return 0;
}

int func_368(int iParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, float fParam5, int iParam6, bool bParam7, float fParam8)//Position - 0x20A2E
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	
	fVar0 = -1f;
	switch (uParam4->f_3)
	{
		case 0:
			*uParam4 = func_93();
			iVar5 = func_93();
			func_101(&iVar5, iParam0);
			func_102(&iVar5, iParam1);
			func_103(&iVar5, 0);
			if (func_385(*uParam4, iVar5))
			{
				func_384(&iVar5, 0, 0, 0, 1, 0, 0);
			}
			func_382(*uParam4, iVar5, &iVar1, &iVar2, &iVar3, &uVar6, &uVar7, &uVar8);
			uParam4->f_B = ((iVar1 + iVar2 * 60) + (iVar3 + iParam6) * 3600);
			func_375((SYSTEM::TO_FLOAT(uParam4->f_B) / 3600f));
			if (bParam7)
			{
				unk_0x6181F5E08459A9AA(0.6f);
				unk_0x66F05C65F48B55AF(0);
				unk_0xC325E1B6F956BE1A(0);
			}
			func_374();
			uParam4->f_A = unk_0x2F079D1FC5F6CB99();
			unk_0xC4BA30B532FE260F(uParam4->f_A, "TIME_LAPSE_MASTER", 0, true);
			unk_0xD6423910AAD8A379("TOD_SHIFT_SCENE");
			func_352();
			uParam4->f_3++;
			break;
		
		case 1:
		case 2:
			if ((unk_0xEF0E25DA0CB6E8FF(uParam4->f_4) && unk_0x16BE1286447174A9(uParam4->f_4)) || !(fParam5 >= 0.99f || fParam5 == -1f))
			{
				if (unk_0xEF0E25DA0CB6E8FF(uParam4->f_4) && unk_0x16BE1286447174A9(uParam4->f_4))
				{
					fVar0 = unk_0x11173DE1BDC2E73C(uParam4->f_4);
				}
				else if (!(fParam5 >= 0.99f || fParam5 == -1f))
				{
					fVar0 = fParam5;
				}
				else
				{
					fVar0 = -1f;
				}
				if (fVar0 >= 0.5f)
				{
					if (uParam4->f_3 == 1)
					{
						if (unk_0x56BEECB328B6D29D(sParam2) != 0)
						{
							unk_0x34DAC25A04E24704(sParam2, fParam8);
						}
						if (unk_0x56BEECB328B6D29D(sParam3) != 0)
						{
							unk_0x5D4CFAB81AB232CA();
							unk_0xCF6DC60B0555118D(sParam3, 0);
						}
						uParam4->f_3 = 2;
					}
				}
			}
			if (fVar0 >= 0.99f || fVar0 == -1f)
			{
				iVar5 = *uParam4;
				func_384(&iVar5, uParam4->f_B, 0, 0, 0, 0, 0);
				unk_0xC2BB4D344E887586(func_373(iVar5), func_372(iVar5), func_371(iVar5));
				if (bParam7)
				{
					unk_0x7FF4F08CAB3344B1();
				}
				unk_0x38FF8CB6377D36F6(uParam4->f_A);
				unk_0xDA70546257A3ED8B("TIME_LAPSE");
				if (bParam7)
				{
					unk_0xC325E1B6F956BE1A(1);
					unk_0x66F05C65F48B55AF(1);
				}
				return 1;
			}
			fVar11 = fVar0;
			fVar9 = 0.1f;
			fVar10 = 0.9f;
			fVar12 = func_370(((fVar11 - fVar9) / (fVar10 - fVar9)), 0f, 1f);
			iVar4 = SYSTEM::ROUND((IntToFloat(uParam4->f_B) * fVar12));
			iVar5 = *uParam4;
			func_384(&iVar5, iVar4, 0, 0, 0, 0, 0);
			unk_0xC2BB4D344E887586(func_373(iVar5), func_372(iVar5), func_371(iVar5));
			if (func_369(iVar5) != unk_0xBE14F159908E4EE5())
			{
				unk_0x9AB7C330ACFB4394(func_369(iVar5), func_100(iVar5), func_98(iVar5));
			}
			func_265();
			unk_0x4C6F2776AE2C21F9(6);
			break;
	}
	return 0;
}

int func_369(int iParam0)//Position - 0x20CC3
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

float func_370(float fParam0, float fParam1, float fParam2)//Position - 0x20CD5
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_371(int iParam0)//Position - 0x20CFC
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_372(int iParam0)//Position - 0x20D0F
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_373(int iParam0)//Position - 0x20D22
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_374()//Position - 0x20D35
{
	int iVar0;
	
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		return 0;
	}
	if (!unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()))
	{
		return 0;
	}
	iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
	if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
	{
		return 0;
	}
	unk_0x004811915F93A42D(iVar0, "OFF");
	return 1;
}

void func_375(float fParam0)//Position - 0x20D83
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_381(&(Global_19B04.f_469A.f_AF[iVar0 /*19*/].f_5)))
		{
			func_376(&(Global_19B04.f_469A.f_AF[iVar0 /*19*/].f_5), (fParam0 * 60f));
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_381(&(Global_19B04.f_469A.f_16A[iVar1 /*3*/])))
		{
			func_376(&(Global_19B04.f_469A.f_16A[iVar1 /*3*/]), (fParam0 * 60f));
		}
		iVar1++;
	}
	unk_0x8FC2F3CD3A70C300();
}

void func_376(int iParam0, float fParam1)//Position - 0x20E14
{
	if (func_381(iParam0))
	{
		func_377(iParam0, (func_379(iParam0) + fParam1));
	}
}

void func_377(int iParam0, float fParam1)//Position - 0x20E37
{
	iParam0->f_1 = (func_378(unk_0xFA30DFD0084E92FE(*iParam0, 4)) - fParam1);
	unk_0xF0059F27F7BB6680(iParam0, 1);
	unk_0x7CB6FD92BE491AD9(iParam0, 2);
	iParam0->f_2 = 0f;
}

float func_378(bool bParam0)//Position - 0x20E65
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(unk_0x105601648511CC64());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x7AF0088ABFA713B6())
	{
		iVar2 = unk_0xED678C85A82F0AB9();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(unk_0x105601648511CC64()) / 1000f);
}

float func_379(var uParam0)//Position - 0x20EBD
{
	if (func_381(uParam0))
	{
		if (func_380(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_378(unk_0xFA30DFD0084E92FE(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_380(var uParam0)//Position - 0x20EFC
{
	return unk_0xFA30DFD0084E92FE(*uParam0, 2);
}

bool func_381(var uParam0)//Position - 0x20F0C
{
	return unk_0xFA30DFD0084E92FE(*uParam0, 1);
}

void func_382(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x20F1C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_385(iParam0, iParam1))
	{
		iVar0 = func_100(iParam1);
		iVar1 = func_98(iParam0);
		iVar2 = (func_98(iParam0) - func_98(iParam1));
		iVar3 = (func_100(iParam0) - func_100(iParam1));
		iVar4 = (func_369(iParam0) - func_369(iParam1));
		iVar5 = (func_373(iParam0) - func_373(iParam1));
		iVar6 = (func_372(iParam0) - func_372(iParam1));
		iVar7 = (func_371(iParam0) - func_371(iParam1));
	}
	else
	{
		iVar0 = func_100(iParam0);
		iVar1 = func_98(iParam1);
		iVar2 = (func_98(iParam1) - func_98(iParam0));
		iVar3 = (func_100(iParam1) - func_100(iParam0));
		iVar4 = (func_369(iParam1) - func_369(iParam0));
		iVar5 = (func_373(iParam1) - func_373(iParam0));
		iVar6 = (func_372(iParam1) - func_372(iParam0));
		iVar7 = (func_371(iParam1) - func_371(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_97(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_383(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_383(float fParam0, float fParam1, float fParam2)//Position - 0x2111D
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(SYSTEM::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

void func_384(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x2115F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_98(*iParam0);
	iVar1 = func_100(*iParam0);
	iVar2 = func_369(*iParam0);
	iVar3 = func_373(*iParam0);
	iVar4 = func_372(*iParam0);
	iVar5 = func_371(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_97(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_97(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_387(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_385(int iParam0, int iParam1)//Position - 0x212E1
{
	int iVar0;
	int iVar1;
	
	if (!func_386(iParam1) || !func_386(iParam0))
	{
		return 1;
	}
	iVar0 = func_98(iParam0);
	iVar1 = func_98(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_100(iParam0);
	iVar1 = func_100(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_369(iParam0);
	iVar1 = func_369(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_373(iParam0);
	iVar1 = func_373(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_372(iParam0);
	iVar1 = func_372(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_371(iParam0);
	iVar1 = func_371(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_386(int iParam0)//Position - 0x213ED
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_371(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_372(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_373(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_98(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_100(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_369(iParam0);
	if (iVar5 < 1 || iVar5 > func_97(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_387(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x214C9
{
	func_103(uParam0, iParam1);
	func_102(uParam0, iParam2);
	func_101(uParam0, iParam3);
	func_95(uParam0, iParam5);
	func_96(uParam0, iParam4);
	func_94(uParam0, iParam6);
}

bool func_388(int iParam0, int iParam1)//Position - 0x21501
{
	return func_389(unk_0x6E06C0DB9B43570D(), iParam0, iParam1);
}

int func_389(int iParam0, int iParam1, int iParam2)//Position - 0x21515
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return 0;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return 0;
	}
	if (iParam1 == iParam2)
	{
		return 1;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	if (!bVar0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	return 0;
}

void func_390(int iParam0, var uParam1, var uParam2)//Position - 0x215BE
{
	switch (iParam0)
	{
		case 65:
			*uParam1 = 20;
			*uParam2 = 22;
			break;
		
		case 27:
			*uParam1 = 20;
			*uParam2 = 20;
			break;
		
		default:
			*uParam1 = Global_147B0[iParam0 /*34*/].f_E;
			*uParam2 = Global_147B0[iParam0 /*34*/].f_D;
			break;
	}
}

void func_391(int iParam0, var uParam1)//Position - 0x21610
{
	uParam1->f_11 = -1;
	switch (iParam0)
	{
		case 1:
		case 2:
			uParam1->f_2 = { -58.1338f, -1115.653f, 25.8856f };
			uParam1->f_5 = { 18.4907f, 0f, 3.566f };
			uParam1->f_8 = { -58.3857f, -1115.083f, 26.0824f };
			uParam1->f_B = { 18.4907f, 0f, 2.0628f };
			uParam1->f_E = 40.0256f;
			uParam1->f_F = 4000;
			StringCopy(&(uParam1->f_12), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_16), "cirrocumulus", 16);
			uParam1->f_10 = 0;
			break;
		
		case 17:
		case 18:
			uParam1->f_2 = { -830.1f, 171.4f, 71.5f };
			uParam1->f_5 = { 17.5f, 0f, -76f };
			uParam1->f_8 = { -829.5f, 171.6f, 71.7f };
			uParam1->f_B = { 17.9f, 0f, -75.4f };
			uParam1->f_E = 47.9931f;
			uParam1->f_F = 6600;
			uParam1->f_10 = 0;
			StringCopy(&(uParam1->f_12), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_16), "cirrocumulus", 16);
			break;
		
		case 21:
		case 22:
			uParam1->f_2 = { -776.5807f, 181.1033f, 72.2059f };
			uParam1->f_5 = { 11.8135f, 0f, 95.7275f };
			uParam1->f_8 = { -776.8288f, 181.0926f, 72.2551f };
			uParam1->f_B = { 11.8134f, 0f, 95.7284f };
			uParam1->f_E = 46.7255f;
			uParam1->f_F = 5500;
			uParam1->f_10 = 0;
			StringCopy(&(uParam1->f_12), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_16), "cirrocumulus", 16);
			break;
		
		case 20:
			switch (func_104())
			{
				case 0:
					uParam1->f_2 = { -846.3013f, 186.777f, 72.0316f };
					uParam1->f_5 = { 4.202026f, 0f, -111.2882f };
					uParam1->f_8 = { -846.1907f, 186.7339f, 72.0403f };
					uParam1->f_B = { 4.202f, 0f, -111.2882f };
					uParam1->f_E = 47f;
					uParam1->f_F = 5500;
					uParam1->f_10 = 0;
					break;
				
				case 2:
					uParam1->f_2 = { -846.3013f, 186.777f, 72.0316f };
					uParam1->f_5 = { 4.202026f, 0f, -111.2882f };
					uParam1->f_8 = { -846.1907f, 186.7339f, 72.0403f };
					uParam1->f_B = { 4.202f, 0f, -111.2882f };
					uParam1->f_E = 47f;
					uParam1->f_F = 5500;
					uParam1->f_10 = 0;
					break;
			}
			break;
		
		case 40:
			uParam1->f_2 = { -8.0845f, -1450.367f, 36.8585f };
			uParam1->f_5 = { 13.3776f, 0f, 4.513f };
			uParam1->f_8 = { -9.0519f, -1450.444f, 36.8585f };
			uParam1->f_B = { 13.3776f, 0f, 4.513f };
			uParam1->f_E = 39.9659f;
			uParam1->f_F = 7200;
			uParam1->f_10 = 0;
			break;
		
		case 27:
			uParam1->f_2 = { -1576.132f, 5160.888f, 24.1175f };
			uParam1->f_5 = { 4.8389f, -0.011f, 92.1057f };
			uParam1->f_8 = { -1576.132f, 5160.888f, 24.1175f };
			uParam1->f_B = { 4.8389f, -0.011f, 92.1057f };
			uParam1->f_E = 40f;
			uParam1->f_F = 7200;
			uParam1->f_10 = 0;
			break;
		
		case 43:
			uParam1->f_2 = { -7.205f, -1471.656f, 31.1614f };
			uParam1->f_5 = { 9.3776f, 0f, 11.4737f };
			uParam1->f_8 = { -7.2909f, -1471.232f, 31.2546f };
			uParam1->f_B = { 9.3776f, 0f, 11.4737f };
			uParam1->f_E = 38.5265f;
			uParam1->f_F = 5000;
			uParam1->f_10 = 0;
			break;
		
		case 61:
			uParam1->f_2 = { -1060.658f, -464.0052f, 44.994f };
			uParam1->f_5 = { 5.6441f, 0f, -138.7474f };
			uParam1->f_8 = { -1060.658f, -464.0052f, 44.994f };
			uParam1->f_B = { 4.8242f, 0f, -118.3167f };
			uParam1->f_E = 37f;
			uParam1->f_F = 5000;
			uParam1->f_10 = 0;
			break;
		
		case 91:
		case 93:
			uParam1->f_2 = { 1406.112f, 3590.231f, 34.4113f };
			uParam1->f_5 = { 17.5005f, 0f, 55.9579f };
			uParam1->f_8 = { 1405.673f, 3590.525f, 34.4113f };
			uParam1->f_B = { 18.4979f, 0f, 55.9579f };
			uParam1->f_E = 56.3199f;
			uParam1->f_F = 6000;
			uParam1->f_10 = 0;
			break;
		
		case 69:
		case 86:
		case 90:
			uParam1->f_2 = { 739.1493f, -990.3961f, 29.85194f };
			uParam1->f_5 = { 17.19917f, 0f, 44.21184f };
			uParam1->f_8 = { 738.4197f, -989.6462f, 30.17581f };
			uParam1->f_B = { 17.19917f, 0f, 44.21184f };
			uParam1->f_E = 47.56362f;
			uParam1->f_F = 6000;
			StringCopy(&(uParam1->f_12), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_16), "cirrocumulus", 16);
			uParam1->f_10 = 0;
			break;
		
		case 70:
			uParam1->f_2 = { 2503.9f, -288.8f, 112.8f };
			uParam1->f_5 = { -0.2f, 0f, -169.6f };
			uParam1->f_8 = { 2503.9f, -288.8f, 112.8f };
			uParam1->f_B = { -0.2f, 0f, -169.6f };
			uParam1->f_E = 47.6f;
			uParam1->f_F = 5000;
			StringCopy(&(uParam1->f_12), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_16), "cirrocumulus", 16);
			uParam1->f_10 = 1;
			break;
		
		case 45:
			uParam1->f_2 = { -458.5666f, 1010.097f, 316.3736f };
			uParam1->f_5 = { 14.47186f, 0f, -18.28884f };
			uParam1->f_8 = { -457.3f, 1011.6f, 316.9f };
			uParam1->f_B = { 14.5f, 0f, -18.5f };
			uParam1->f_E = 50f;
			uParam1->f_F = 6000;
			uParam1->f_10 = 0;
			break;
		
		case 49:
			uParam1->f_2 = { -723.9982f, -155.7184f, 38.12362f };
			uParam1->f_5 = { 30.12048f, 0f, -99.11243f };
			uParam1->f_8 = { -722.4385f, -155.7817f, 37.4443f };
			uParam1->f_B = { 2.0429f, 0f, -101.5132f };
			uParam1->f_E = 45f;
			uParam1->f_F = 6000;
			uParam1->f_10 = 0;
			break;
		
		case 9:
			switch (func_104())
			{
				case 2:
					uParam1->f_2 = { 416.3221f, -960.2586f, 30.6696f };
					uParam1->f_5 = { 21.5747f, 0f, -135.2969f };
					uParam1->f_8 = { 416.8894f, -960.832f, 30.9887f };
					uParam1->f_B = { 21.9916f, 0f, -135.2969f };
					uParam1->f_E = 47.1057f;
					uParam1->f_F = 6000;
					uParam1->f_10 = 0;
					break;
				
				case 1:
					uParam1->f_2 = { 1393.363f, -2052.581f, 65.4054f };
					uParam1->f_5 = { 2.5107f, 0f, 51.1167f };
					uParam1->f_8 = { 1393.456f, -2052.656f, 68.146f };
					uParam1->f_B = { 2.5107f, 0f, 51.1167f };
					uParam1->f_E = 35.9859f;
					uParam1->f_F = 6000;
					uParam1->f_10 = 0;
					break;
			}
			break;
		
		case 30:
			uParam1->f_2 = { 59.3f, -751.7f, 46.8f };
			uParam1->f_5 = { 61.9f, 0f, -63.8f };
			uParam1->f_8 = { 59.3f, -751.7f, 46.8f };
			uParam1->f_B = { 61.9f, 0f, -63.8f };
			uParam1->f_E = 46.6f;
			uParam1->f_F = 6000;
			uParam1->f_10 = 0;
			break;
		
		case 39:
			uParam1->f_2 = { 3841.93f, 4464.658f, 2.6587f };
			uParam1->f_5 = { 8.4859f, 0.0024f, 143.0775f };
			uParam1->f_8 = { 3842.54f, 4464.184f, 2.6587f };
			uParam1->f_B = { 8.4859f, 0.0024f, 142.0089f };
			uParam1->f_E = 34.1544f;
			uParam1->f_F = 3000;
			uParam1->f_10 = 0;
			break;
		
		case 71:
			uParam1->f_2 = { -1193.1f, -1525.3f, 4.4f };
			uParam1->f_5 = { 9.4f, 0f, -78.8f };
			uParam1->f_8 = { -1192.2f, -1525.1f, 4.4f };
			uParam1->f_B = { 9.4f, 0f, -78.5f };
			uParam1->f_E = 30.4f;
			uParam1->f_F = 6000;
			uParam1->f_10 = 0;
			break;
		
		case 74:
			uParam1->f_2 = { -24.2f, -2417.6f, 7.8f };
			uParam1->f_5 = { 10.4f, 0f, 80.4f };
			uParam1->f_8 = { -23.8f, -2414.8f, 7.8f };
			uParam1->f_B = { 10.4f, 0f, 81.4f };
			uParam1->f_E = 48.1095f;
			uParam1->f_F = 6000;
			uParam1->f_10 = 0;
			break;
		
		case 84:
		case 85:
		case 65:
			uParam1->f_2 = { 146.9733f, -1310.644f, 30.85177f };
			uParam1->f_5 = { 16.26885f, -2.1E-05f, 45.00475f };
			uParam1->f_8 = { 146.9733f, -1310.644f, 30.85177f };
			uParam1->f_B = { 16.26885f, -2.1E-05f, 45.00475f };
			uParam1->f_E = 39.4027f;
			uParam1->f_F = 6000;
			uParam1->f_10 = 0;
			break;
		
		case 62:
		case 15:
		case 16:
			uParam1->f_2 = { 1998.215f, 3816.983f, 33.0117f };
			uParam1->f_5 = { 5.9088f, 0f, 89.1989f };
			uParam1->f_8 = { 1997.154f, 3817.004f, 33.1215f };
			uParam1->f_B = { 5.9088f, 0f, 89.1989f };
			uParam1->f_E = 36.8186f;
			uParam1->f_F = 6000;
			uParam1->f_10 = 0;
			if (iParam0 == 62)
			{
				if (func_104() != 2)
				{
					uParam1->f_2 = { 0f, 0f, 0f };
					uParam1->f_5 = { 0f, 0f, 0f };
					uParam1->f_8 = { 0f, 0f, 0f };
					uParam1->f_B = { 0f, 0f, 0f };
					uParam1->f_E = -1f;
					uParam1->f_F = -1;
					uParam1->f_10 = 0;
				}
			}
			break;
		
		case 63:
			uParam1->f_2 = { 1576f, 3363.9f, 55.5f };
			uParam1->f_5 = { 0.5f, 0f, -123.8f };
			uParam1->f_8 = { 1575.2f, 3364.4f, 49.2f };
			uParam1->f_B = { -4.3f, 0f, -124.1f };
			uParam1->f_E = 50f;
			uParam1->f_F = 8000;
			uParam1->f_10 = 0;
			break;
		
		case 64:
			uParam1->f_2 = { 1566f, 3378.8f, 42.8f };
			uParam1->f_5 = { -2.4f, 0f, -126.3f };
			uParam1->f_8 = { 1567.6f, 3376.9f, 45f };
			uParam1->f_B = { 1.6f, 0f, -124.6f };
			uParam1->f_E = 34.7f;
			uParam1->f_F = 8000;
			uParam1->f_10 = 0;
			break;
		
		case 24:
			uParam1->f_2 = { 1339.573f, -2550.873f, 56.28254f };
			uParam1->f_5 = { -2.348373f, -2.1E-05f, 159.736f };
			uParam1->f_8 = { 1334.491f, -2549.345f, 47.69109f };
			uParam1->f_B = { 2.789334f, -2.1E-05f, -156.4397f };
			uParam1->f_E = 25.66f;
			uParam1->f_F = 8000;
			uParam1->f_10 = 0;
			break;
		
		case 25:
			uParam1->f_2 = { 2383.651f, 2624.787f, 46.9527f };
			uParam1->f_5 = { 14.6191f, 0f, 64.366f };
			uParam1->f_8 = { 2383.929f, 2622.802f, 47.2707f };
			uParam1->f_B = { 33.17714f, -0.13073f, 12.31436f };
			uParam1->f_E = 35.31843f;
			uParam1->f_F = 6000;
			uParam1->f_10 = 0;
			break;
		
		case 26:
			uParam1->f_2 = { 1755.519f, -1474.981f, 126.1743f };
			uParam1->f_5 = { 4.5341f, 0f, 89.6405f };
			uParam1->f_8 = { 1772.26f, -1475.085f, 125.9465f };
			uParam1->f_B = { 5.8327f, 0f, 89.6405f };
			uParam1->f_E = 32.7f;
			uParam1->f_F = 6500;
			uParam1->f_10 = 0;
			break;
		
		case 3:
			uParam1->f_2 = { -1514.257f, -947.7281f, 15.0253f };
			uParam1->f_5 = { -3.5807f, -0.0001f, -46.3209f };
			uParam1->f_8 = { -1512.601f, -949.2796f, 14.8827f };
			uParam1->f_B = { -4.7682f, -0.0001f, -34.1393f };
			uParam1->f_E = 29.9555f;
			uParam1->f_F = 6000;
			uParam1->f_10 = 0;
			break;
		
		case 4:
			uParam1->f_2 = { -698.2578f, -934.4238f, 31.6909f };
			uParam1->f_5 = { -22.0467f, 0f, 32.1888f };
			uParam1->f_8 = { -697.8695f, -935.0406f, 31.9861f };
			uParam1->f_B = { -20.6093f, 0f, 32.1888f };
			uParam1->f_E = 30f;
			uParam1->f_F = 6000;
			uParam1->f_10 = 0;
			break;
		
		case 5:
			uParam1->f_2 = { 221.8613f, -830.6434f, 45.3154f };
			uParam1->f_5 = { -13.9263f, 0f, 140.7092f };
			uParam1->f_8 = { 227.5233f, -832.8285f, 45.3154f };
			uParam1->f_B = { -13.9263f, 0f, 140.7092f };
			uParam1->f_E = 35f;
			uParam1->f_F = 6000;
			uParam1->f_10 = 0;
			break;
		
		case 6:
			uParam1->f_2 = { -23.3747f, -120.3161f, 64.139f };
			uParam1->f_5 = { -5.7232f, 0f, 5.1015f };
			uParam1->f_8 = { -22.5824f, -122.52f, 64.139f };
			uParam1->f_B = { -5.7232f, 0f, 6.6362f };
			uParam1->f_E = 35f;
			uParam1->f_F = 6000;
			uParam1->f_10 = 0;
			break;
		
		case 7:
			uParam1->f_2 = { 803.5977f, -1075.869f, 37.1981f };
			uParam1->f_5 = { -10.7685f, 0f, -38.1705f };
			uParam1->f_8 = { 803.5977f, -1075.869f, 32.7981f };
			uParam1->f_B = { -10.7685f, 0f, -38.1705f };
			uParam1->f_E = 35f;
			uParam1->f_F = 6000;
			uParam1->f_10 = 0;
			break;
		
		default:
			uParam1->f_2 = { 0f, 0f, 0f };
			uParam1->f_5 = { 0f, 0f, 0f };
			uParam1->f_8 = { 0f, 0f, 0f };
			uParam1->f_B = { 0f, 0f, 0f };
			uParam1->f_E = -1f;
			uParam1->f_F = -1;
			uParam1->f_10 = 0;
			break;
	}
	if (unk_0x56BEECB328B6D29D("RAIN") == unk_0x8E0A76DAE8D6BBA5())
	{
		if (unk_0xF1734B55490E9045(&(uParam1->f_12)))
		{
			StringCopy(&(uParam1->f_12), "EXTRASUNNY", 16);
		}
		if (unk_0xF1734B55490E9045(&(uParam1->f_16)))
		{
			StringCopy(&(uParam1->f_16), "cirrocumulus", 16);
		}
	}
}

bool func_392()//Position - 0x224F9
{
	bool bVar0;
	
	bVar0 = unk_0xDC9E16E99286F31D();
	if (!Global_11541)
	{
		if (!bVar0)
		{
			Global_11541 = 1;
		}
	}
	return bVar0;
}

void func_393()//Position - 0x2251C
{
	unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
	if (!func_23())
	{
		if (func_423(0))
		{
			unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 0, 0);
			unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
			unk_0xF243B7A14FCFD0F4(joaat("rapidgt"));
			unk_0xF243B7A14FCFD0F4(joaat("surano"));
			unk_0xF243B7A14FCFD0F4(joaat("carbonizzare"));
			while ((!unk_0xD6513D668481290A(joaat("rapidgt")) || !unk_0xD6513D668481290A(joaat("surano"))) || !unk_0xD6513D668481290A(joaat("carbonizzare")))
			{
				SYSTEM::WAIT(0);
			}
			if (!unk_0x724D816EA203A79E(iLocal_279))
			{
				unk_0x6C5F5B5F6894CCE3(vLocal_306, 5f, 1, 0, 0, false);
				iLocal_279 = unk_0x61C05BF08A1E0EFE(joaat("rapidgt"), vLocal_306, fLocal_319, true, true, false);
				unk_0x914C5DE0B15B8B59(iLocal_279, 112, 112);
				unk_0x65E471E4A2D56226(iLocal_279, 3000, 0);
				unk_0xDB35A2F9333ABEC5(iLocal_279, true);
				unk_0x2CA123B0622F495C(joaat("rapidgt"));
				unk_0x8510BC031C24B862(joaat("rapidgt"), true);
				unk_0x656194E145691D3E(iLocal_279, true);
				unk_0xA73D1278857991A2(iLocal_279, true);
			}
			if (!unk_0x724D816EA203A79E(iLocal_290))
			{
				if (unk_0xD6513D668481290A(joaat("surano")))
				{
					unk_0x6C5F5B5F6894CCE3(-1037.398f, -491.6539f, 35.5545f, 5f, 1, 0, 0, false);
					iLocal_290 = unk_0x61C05BF08A1E0EFE(joaat("surano"), -1037.398f, -491.6539f, 35.5545f, 208.889f, true, true, false);
					unk_0x914C5DE0B15B8B59(iLocal_290, 0, 0);
					unk_0x65E471E4A2D56226(iLocal_290, 3000, 0);
					unk_0xDB35A2F9333ABEC5(iLocal_290, true);
					unk_0x2CA123B0622F495C(joaat("surano"));
					unk_0x8510BC031C24B862(joaat("surano"), true);
					unk_0xA73D1278857991A2(iLocal_290, true);
				}
			}
			if (!unk_0x724D816EA203A79E(iLocal_291))
			{
				if (unk_0xD6513D668481290A(joaat("carbonizzare")))
				{
					unk_0x6C5F5B5F6894CCE3(vLocal_306, 5f, 1, 0, 0, false);
					iLocal_291 = unk_0x61C05BF08A1E0EFE(joaat("carbonizzare"), -1033.938f, -489.7475f, 35.8323f, 207.1758f, true, true, false);
					unk_0x914C5DE0B15B8B59(iLocal_291, 89, 89);
					unk_0x65E471E4A2D56226(iLocal_291, 3000, 0);
					unk_0xDB35A2F9333ABEC5(iLocal_291, true);
					unk_0x2CA123B0622F495C(joaat("carbonizzare"));
					unk_0x8510BC031C24B862(joaat("carbonizzare"), true);
					unk_0xA73D1278857991A2(iLocal_291, true);
				}
			}
		}
		iLocal_223 = 0;
		iLocal_225 = 0;
		iLocal_343 = 0;
		iLocal_222 = 1;
	}
	else
	{
		unk_0xB2CB6EAA6B280A84("SecGuards", &iLocal_488);
		unk_0xA902E18EDF6FA0C8(5, 1862763509, iLocal_488);
		unk_0xA902E18EDF6FA0C8(5, iLocal_488, 1862763509);
		if (Global_154ED == 1)
		{
			if (func_396() == 0)
			{
				func_395(vLocal_316, fLocal_323, 1, 0);
				iLocal_223 = 0;
				iLocal_343 = 1;
				unk_0x3857DADBD6EC8A54("TRV4_START_RT");
				iLocal_222 = 3;
			}
			if (func_396() == 1)
			{
				func_395(-935.4413f, -2928.061f, 12.9451f, 178.466f, 1, 0);
				iLocal_223 = 0;
				iLocal_343 = 1;
				unk_0x3857DADBD6EC8A54("TRV4_FOOT_CHASE_RT");
				iLocal_222 = 5;
			}
			if (func_396() == 2)
			{
				func_395(-937.5466f, -2968.713f, 12.9451f, 111.5016f, 1, 0);
				iLocal_223 = 0;
				iLocal_343 = 1;
				unk_0x3857DADBD6EC8A54("TRV4_EVADE_RT");
				iLocal_222 = 8;
			}
			if (func_396() == 3)
			{
				func_395(-920.0547f, -2744.661f, 12.9322f, 357.1374f, 1, 0);
				func_394();
			}
		}
		else
		{
			if (func_396() == 0)
			{
				func_395(-1019.579f, -484.872f, 36.0795f, 93.7701f, 1, 0);
				iLocal_223 = 0;
				iLocal_343 = 1;
				unk_0x3857DADBD6EC8A54("TRV4_START_RT");
				iLocal_222 = 2;
			}
			if (func_396() == 1)
			{
				func_395(vLocal_316, fLocal_323, 1, 0);
				iLocal_223 = 0;
				iLocal_343 = 1;
				unk_0x3857DADBD6EC8A54("TRV4_START_RT");
				iLocal_222 = 3;
			}
			if (func_396() == 2)
			{
				func_395(-935.4413f, -2928.061f, 12.9451f, 178.466f, 1, 0);
				iLocal_223 = 0;
				iLocal_343 = 1;
				unk_0x3857DADBD6EC8A54("TRV4_FOOT_CHASE_RT");
				iLocal_222 = 5;
			}
			if (func_396() == 3)
			{
				func_395(-937.5466f, -2968.713f, 12.9451f, 111.5016f, 1, 0);
				iLocal_223 = 0;
				iLocal_343 = 1;
				unk_0x3857DADBD6EC8A54("TRV4_EVADE_RT");
				iLocal_222 = 8;
			}
		}
		unk_0x900CF084251DED26("TREV4", 0);
		while (!unk_0xFA9040D29FE330BD(0))
		{
			SYSTEM::WAIT(0);
		}
	}
}

void func_394()//Position - 0x22909
{
	if (iLocal_223 == 0)
	{
		unk_0x6C5F5B5F6894CCE3(-920.0547f, -2744.662f, 12.8434f, 20f, 1, 0, 0, false);
		unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 0, 0);
		unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
		iLocal_223++;
	}
	if (iLocal_223 == 1)
	{
		unk_0x8B6B50EADA01F251(-920.0547f, -2744.662f, 12.8434f);
		if (!unk_0x726D9204B160D23E())
		{
			func_21(0, -1, 1);
			unk_0x829FA4611BD56B44(800);
		}
		func_6();
	}
}

void func_395(vector3 vParam0, float fParam1, int iParam2, int iParam3)//Position - 0x22983
{
	if (func_23())
	{
		unk_0x6C87EFD58B261C6F(0);
		unk_0x7CB6FD92BE491AD9(&(Global_16B1B.f_14), 2);
		unk_0x121BBDEFA4F0C22B(1);
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 0);
		}
		Global_16B17 = { vParam0 };
		Global_16B1A = fParam1;
		Global_16B16 = 1;
		if (iParam2 == 1)
		{
			unk_0xF0059F27F7BB6680(&(Global_16B1B.f_14), 14);
		}
		else
		{
			unk_0x7CB6FD92BE491AD9(&(Global_16B1B.f_14), 14);
		}
		if (iParam3 == 1)
		{
			unk_0xF0059F27F7BB6680(&(Global_16B1B.f_14), 24);
		}
		else
		{
			unk_0x7CB6FD92BE491AD9(&(Global_16B1B.f_14), 24);
		}
		func_22(1);
	}
}

int func_396()//Position - 0x22A18
{
	if (!Global_16B1B == 10 && !Global_16B1B == 9)
	{
		return 0;
	}
	return Global_16B1B.f_2;
}

void func_397()//Position - 0x22A42
{
	if (iLocal_435[0] == 0)
	{
		if (unk_0x724D816EA203A79E(iLocal_204[7]))
		{
			if (unk_0xE59B7F5A03335350(iLocal_204[7], 0))
			{
				unk_0x55662F9F262C2F9B(iLocal_204[7], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_435[0] = 1;
			}
		}
	}
	if (iLocal_436[0] == 0)
	{
		if (iLocal_435[0] == 1)
		{
			if (unk_0x724D816EA203A79E(iLocal_204[7]))
			{
				if (!unk_0xE59B7F5A03335350(iLocal_204[7], 0))
				{
					unk_0x38E412DB4A45B900(iLocal_204[7], 0);
					iLocal_436[0] = 1;
				}
				else if (iLocal_222 == 5)
				{
					unk_0x38E412DB4A45B900(iLocal_204[7], 0);
					iLocal_436[0] = 1;
				}
			}
			else
			{
				iLocal_436[0] = 1;
			}
		}
	}
	if (iLocal_435[1] == 0)
	{
		if (unk_0x724D816EA203A79E(iLocal_204[8]))
		{
			if (unk_0xE59B7F5A03335350(iLocal_204[8], 0))
			{
				unk_0x55662F9F262C2F9B(iLocal_204[8], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_435[1] = 1;
			}
		}
	}
	if (iLocal_436[1] == 0)
	{
		if (iLocal_435[1] == 1)
		{
			if (unk_0x724D816EA203A79E(iLocal_204[8]))
			{
				if (!unk_0xE59B7F5A03335350(iLocal_204[8], 0))
				{
					unk_0x38E412DB4A45B900(iLocal_204[8], 0);
					iLocal_436[1] = 1;
				}
				else if (iLocal_222 == 5)
				{
					unk_0x38E412DB4A45B900(iLocal_204[8], 0);
					iLocal_436[1] = 1;
				}
			}
			else
			{
				iLocal_436[1] = 1;
			}
		}
	}
	if (iLocal_435[2] == 0)
	{
		if (unk_0x724D816EA203A79E(iLocal_204[11]))
		{
			if (unk_0xE59B7F5A03335350(iLocal_204[11], 0))
			{
				unk_0x55662F9F262C2F9B(iLocal_204[11], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_435[2] = 1;
			}
		}
	}
	if (iLocal_436[2] == 0)
	{
		if (iLocal_435[2] == 1)
		{
			if (unk_0x724D816EA203A79E(iLocal_204[11]))
			{
				if (!unk_0xE59B7F5A03335350(iLocal_204[11], 0))
				{
					unk_0x38E412DB4A45B900(iLocal_204[11], 0);
					iLocal_436[2] = 1;
				}
				else if (iLocal_222 == 5)
				{
					unk_0x38E412DB4A45B900(iLocal_204[11], 0);
					iLocal_436[2] = 1;
				}
			}
			else
			{
				iLocal_436[2] = 1;
			}
		}
	}
	if (iLocal_435[3] == 0)
	{
		if (unk_0x724D816EA203A79E(iLocal_204[12]))
		{
			if (unk_0xE59B7F5A03335350(iLocal_204[12], 0))
			{
				unk_0x55662F9F262C2F9B(iLocal_204[12], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_435[3] = 1;
			}
		}
	}
	if (iLocal_436[3] == 0)
	{
		if (iLocal_435[3] == 1)
		{
			if (unk_0x724D816EA203A79E(iLocal_204[12]))
			{
				if (!unk_0xE59B7F5A03335350(iLocal_204[12], 0))
				{
					unk_0x38E412DB4A45B900(iLocal_204[12], 0);
					iLocal_436[3] = 1;
				}
				else if (iLocal_222 == 5)
				{
					unk_0x38E412DB4A45B900(iLocal_204[12], 0);
					iLocal_436[3] = 1;
				}
			}
			else
			{
				iLocal_436[3] = 1;
			}
		}
	}
	if (iLocal_435[4] == 0)
	{
		if (unk_0x724D816EA203A79E(iLocal_204[13]))
		{
			if (unk_0xE59B7F5A03335350(iLocal_204[13], 0))
			{
				unk_0x55662F9F262C2F9B(iLocal_204[13], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_435[4] = 1;
			}
		}
	}
	if (iLocal_436[4] == 0)
	{
		if (iLocal_435[4] == 1)
		{
			if (unk_0x724D816EA203A79E(iLocal_204[13]))
			{
				if (!unk_0xE59B7F5A03335350(iLocal_204[13], 0))
				{
					unk_0x38E412DB4A45B900(iLocal_204[13], 0);
					iLocal_436[4] = 1;
				}
				else if (iLocal_222 == 5)
				{
					unk_0x38E412DB4A45B900(iLocal_204[13], 0);
					iLocal_436[4] = 1;
				}
			}
			else
			{
				iLocal_436[4] = 1;
			}
		}
	}
	if (iLocal_435[5] == 0)
	{
		if (unk_0x724D816EA203A79E(iLocal_204[14]))
		{
			if (unk_0xE59B7F5A03335350(iLocal_204[14], 0))
			{
				unk_0x55662F9F262C2F9B(iLocal_204[14], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_435[5] = 1;
			}
		}
	}
	if (iLocal_436[5] == 0)
	{
		if (iLocal_435[5] == 1)
		{
			if (unk_0x724D816EA203A79E(iLocal_204[14]))
			{
				if (!unk_0xE59B7F5A03335350(iLocal_204[14], 0))
				{
					unk_0x38E412DB4A45B900(iLocal_204[14], 0);
					iLocal_436[5] = 1;
				}
				else if (iLocal_222 == 5)
				{
					unk_0x38E412DB4A45B900(iLocal_204[14], 0);
					iLocal_436[5] = 1;
				}
			}
			else
			{
				iLocal_436[5] = 1;
			}
		}
	}
	if (iLocal_435[6] == 0)
	{
		if (unk_0x724D816EA203A79E(iLocal_204[15]))
		{
			if (unk_0xE59B7F5A03335350(iLocal_204[15], 0))
			{
				unk_0x55662F9F262C2F9B(iLocal_204[15], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_435[6] = 1;
			}
		}
	}
	if (iLocal_436[6] == 0)
	{
		if (iLocal_435[6] == 1)
		{
			if (unk_0x724D816EA203A79E(iLocal_204[15]))
			{
				if (!unk_0xE59B7F5A03335350(iLocal_204[15], 0))
				{
					unk_0x38E412DB4A45B900(iLocal_204[15], 0);
					iLocal_436[6] = 1;
				}
				else if (iLocal_222 == 5)
				{
					unk_0x38E412DB4A45B900(iLocal_204[15], 0);
					iLocal_436[6] = 1;
				}
			}
			else
			{
				iLocal_436[6] = 1;
			}
		}
	}
}

void func_398()//Position - 0x22EE9
{
	switch (iLocal_222)
	{
		case 2:
			if (iLocal_223 > 0)
			{
				if (iLocal_227 == 0)
				{
					iLocal_362 = 0;
					iLocal_449 = 0;
					iLocal_472 = 0;
					iLocal_473 = 0;
					func_17(&uLocal_490, 1, 0, "Devin", 0, 1);
					func_17(&uLocal_490, 0, unk_0xBC25C936A095B5BA(), "Michael", 0, 1);
					iLocal_227 = 1;
				}
				if (iLocal_227 == 1)
				{
					if (iLocal_362 == 0)
					{
						if (unk_0xF0F2FC9DE291567F(vLocal_318, unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), true) > 2f)
						{
							if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
							{
								if (func_256(&uLocal_490, "T1M4AUD", "T1M4_CHASE", 3, 0, 0, 0))
								{
									iLocal_362 = 1;
								}
							}
						}
					}
					if (iLocal_449 == 0)
					{
						if (unk_0xF0F2FC9DE291567F(vLocal_318, unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), true) > 100f)
						{
							if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
							{
								if (func_401(&uLocal_490, 29, "T1M4AUD", "SOL3_DEVCALL", 7, 0, 0, 1))
								{
									unk_0x1D1C393C7689E5A6(4f, 10f, 4);
									iLocal_449 = 1;
								}
							}
						}
					}
					if (iLocal_472 == 0 && iLocal_449 == 1)
					{
						if (func_400())
						{
							if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
							{
								if (func_256(&uLocal_490, "T1M4AUD", "T1M4_REACT", 3, 0, 0, 0))
								{
									iLocal_472 = 1;
								}
							}
						}
					}
					if (iLocal_473 == 0)
					{
						if (unk_0x724D816EA203A79E(iLocal_278))
						{
							if (unk_0xE59B7F5A03335350(iLocal_278, 0))
							{
								if (func_16(unk_0xBC25C936A095B5BA(), iLocal_278, 1) < 200f && unk_0xD1DC4B08247A4317(iLocal_278))
								{
									if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
									{
										if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
										{
											if (func_256(&uLocal_490, "T1M4AUD", "T1M4_CHASE2", 3, 0, 0, 0))
											{
												unk_0x1D1C393C7689E5A6(3f, 12f, 4);
												iLocal_473 = 1;
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (iLocal_223 >= 0)
			{
				if (iLocal_227 == 0)
				{
					iLocal_450[0] = 0;
					iLocal_450[1] = 0;
					iLocal_450[2] = 0;
					iLocal_450[3] = 0;
					iLocal_469 = 0;
					iLocal_470 = 0;
					iLocal_471 = 0;
					iLocal_474 = 0;
					iLocal_475 = 0;
					iLocal_476 = 0;
					iLocal_477 = 0;
					iLocal_478 = 0;
					iLocal_241 = unk_0x105601648511CC64();
					func_17(&uLocal_490, 0, unk_0xBC25C936A095B5BA(), "Michael", 0, 1);
					func_17(&uLocal_490, 4, 0, "SOL3COP", 0, 1);
					iLocal_227 = 1;
				}
				if (iLocal_227 == 1)
				{
					if (iLocal_473 == 0)
					{
						if (unk_0x724D816EA203A79E(iLocal_278))
						{
							if (unk_0xE59B7F5A03335350(iLocal_278, 0))
							{
								if (func_16(unk_0xBC25C936A095B5BA(), iLocal_278, 1) < 200f && unk_0xD1DC4B08247A4317(iLocal_278))
								{
									if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
									{
										if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
										{
											if (func_256(&uLocal_490, "T1M4AUD", "T1M4_CHASE2", 3, 0, 0, 0))
											{
												iLocal_473 = 1;
											}
										}
									}
								}
							}
						}
					}
					if (unk_0x724D816EA203A79E(iLocal_278))
					{
						if (unk_0xE59B7F5A03335350(iLocal_278, 0))
						{
							if (unk_0xB34E411B0A4BF096(iLocal_278))
							{
								if (iLocal_450[0] == 0)
								{
									if (unk_0xE59B7F5A03335350(iLocal_204[7], 0) || unk_0xE59B7F5A03335350(iLocal_204[8], 0))
									{
										if (unk_0x5B80643EF917B728(iLocal_278) > 7000f && unk_0x5B80643EF917B728(iLocal_278) < 28000f)
										{
											if (!func_255())
											{
												if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
												{
													if (func_256(&uLocal_490, "T1M4AUD", "T1M4_POLICE", 7, 0, 0, 0))
													{
														iLocal_450[0] = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_450[1] == 0)
								{
									if (unk_0xE59B7F5A03335350(iLocal_204[7], 0) || unk_0xE59B7F5A03335350(iLocal_204[8], 0))
									{
										if (unk_0x5B80643EF917B728(iLocal_278) > 28000f && unk_0x5B80643EF917B728(iLocal_278) < 34500f)
										{
											if (!func_255())
											{
												if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
												{
													if (func_256(&uLocal_490, "T1M4AUD", "T1M4_POLICE2", 7, 0, 0, 0))
													{
														unk_0x1D1C393C7689E5A6(4f, 4f, 4);
														iLocal_450[1] = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_450[2] == 0)
								{
									if (unk_0xE59B7F5A03335350(iLocal_204[7], 0) || unk_0xE59B7F5A03335350(iLocal_204[8], 0))
									{
										if (unk_0x5B80643EF917B728(iLocal_278) > 36000f && unk_0x5B80643EF917B728(iLocal_278) < 41000f)
										{
											if (!func_255())
											{
												if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
												{
													if (func_256(&uLocal_490, "T1M4AUD", "T1M4_POLICE3", 7, 0, 0, 0))
													{
														unk_0x1D1C393C7689E5A6(2f, 4f, 4);
														iLocal_450[2] = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_470 == 0)
								{
									if (unk_0x5B80643EF917B728(iLocal_278) > 41000f && unk_0x5B80643EF917B728(iLocal_278) < 43500f)
									{
										if (unk_0x724D816EA203A79E(iLocal_283) && unk_0xD1DC4B08247A4317(iLocal_283))
										{
											if (!func_255())
											{
												if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
												{
													if (func_256(&uLocal_490, "T1M4AUD", "T1M4_BOOM", 7, 0, 0, 0))
													{
														unk_0x1D1C393C7689E5A6(4f, 4f, 4);
														iLocal_470 = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_471 == 0)
								{
									if (unk_0x5B80643EF917B728(iLocal_278) > 50509f && unk_0x5B80643EF917B728(iLocal_278) < 50872f)
									{
										if (unk_0x724D816EA203A79E(iLocal_283) && unk_0xD1DC4B08247A4317(iLocal_283))
										{
											if (!func_255())
											{
												if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
												{
													if (func_256(&uLocal_490, "T1M4AUD", "T1M4_BLOW", 7, 0, 0, 0))
													{
														iLocal_471 = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_450[3] == 0)
								{
									if (unk_0x5B80643EF917B728(iLocal_278) > 58000f && unk_0x5B80643EF917B728(iLocal_278) < 68000f)
									{
										if (!func_255())
										{
											if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
											{
												if (func_256(&uLocal_490, "T1M4AUD", "T1M4_POLICE4", 7, 0, 0, 0))
												{
													iLocal_450[3] = 1;
												}
											}
										}
									}
								}
								if (iLocal_474 == 0 && iLocal_450[3] == 1)
								{
									if (unk_0x5B80643EF917B728(iLocal_278) < 76000f)
									{
										if (!func_255())
										{
											if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
											{
												if (func_256(&uLocal_490, "T1M4AUD", "T1M4_CHASE3", 7, 0, 0, 0))
												{
													iLocal_474 = 1;
												}
											}
										}
									}
								}
								if (iLocal_469 == 0)
								{
									if (unk_0x5B80643EF917B728(iLocal_278) > 80000f && unk_0x5B80643EF917B728(iLocal_278) < 82000f)
									{
										if (unk_0x724D816EA203A79E(iLocal_280[0]))
										{
											if (unk_0xE59B7F5A03335350(iLocal_280[0], 0))
											{
												if (unk_0xD1DC4B08247A4317(iLocal_280[0]))
												{
													if (!func_255())
													{
														if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
														{
															if (func_256(&uLocal_490, "T1M4AUD", "T1M4_CHASE4", 7, 0, 0, 0))
															{
																unk_0x1D1C393C7689E5A6(3f, 10f, 4);
																iLocal_469 = 1;
															}
														}
													}
												}
											}
										}
									}
								}
								if (iLocal_475 == 0)
								{
									if (unk_0x5B80643EF917B728(iLocal_278) > 82100f && unk_0x5B80643EF917B728(iLocal_278) < 83500f)
									{
										if (unk_0x724D816EA203A79E(iLocal_204[11]))
										{
											if (unk_0xD1DC4B08247A4317(iLocal_204[11]))
											{
												if (!func_255())
												{
													if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
													{
														if (func_256(&uLocal_490, "T1M4AUD", "T1M4_CHASE5", 7, 0, 0, 0))
														{
															iLocal_475 = 1;
														}
													}
												}
											}
										}
										else if (unk_0x724D816EA203A79E(iLocal_204[12]))
										{
											if (unk_0xD1DC4B08247A4317(iLocal_204[12]))
											{
												if (!func_255())
												{
													if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
													{
														if (func_256(&uLocal_490, "T1M4AUD", "T1M4_CHASE5", 7, 0, 0, 0))
														{
															iLocal_475 = 1;
														}
													}
												}
											}
										}
									}
								}
								if (iLocal_478 == 0)
								{
									if ((unk_0x5B80643EF917B728(iLocal_278) > 101891f && unk_0x5B80643EF917B728(iLocal_278) < 105000f) && unk_0xD1DC4B08247A4317(iLocal_278))
									{
										if (!func_255())
										{
											if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
											{
												if (func_256(&uLocal_490, "T1M4AUD", "T1M4_CHASE7", 7, 0, 0, 0))
												{
													unk_0x1D1C393C7689E5A6(3f, 10f, 4);
													iLocal_478 = 1;
												}
											}
										}
									}
								}
								if (((unk_0x5B80643EF917B728(iLocal_278) > 105500f && unk_0x5B80643EF917B728(iLocal_278) < 119000f) && unk_0x105601648511CC64() > iLocal_241 + 7000) && iLocal_477 == 0)
								{
									if (!func_255())
									{
										if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
										{
											if (func_256(&uLocal_490, "T1M4AUD", "T1M4_POLICE5", 7, 0, 0, 0))
											{
												iLocal_241 = unk_0x105601648511CC64();
												iLocal_477 = 1;
											}
										}
									}
								}
								if (iLocal_476 == 0 && iLocal_477 == 1)
								{
									if (!func_255())
									{
										if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
										{
											if (func_256(&uLocal_490, "T1M4AUD", "T1M4_CHASE6", 7, 0, 0, 0))
											{
												iLocal_476 = 1;
											}
										}
									}
								}
								if (((unk_0x5B80643EF917B728(iLocal_278) > 105500f && unk_0x5B80643EF917B728(iLocal_278) < 119000f) && unk_0x105601648511CC64() > iLocal_241 + 7000) && iLocal_476 == 1)
								{
									if (!func_255())
									{
										if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
										{
											if (func_256(&uLocal_490, "T1M4AUD", "T1M4_POLICE5", 7, 0, 0, 0))
											{
												iLocal_241 = unk_0x105601648511CC64();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 5:
			if (iLocal_223 > 0)
			{
				if (iLocal_227 == 0)
				{
					iLocal_452 = 0;
					iLocal_479 = 0;
					iLocal_485 = 0;
					iLocal_480 = 1;
					iLocal_246 = unk_0x105601648511CC64();
					func_17(&uLocal_490, 0, unk_0xBC25C936A095B5BA(), "Michael", 0, 1);
					if (!unk_0x36CEFBE9B745A58D(iLocal_264))
					{
						func_17(&uLocal_490, 2, iLocal_264, "MOLLY", 0, 1);
					}
					iLocal_227 = 1;
				}
				if (iLocal_227 == 1)
				{
					if (iLocal_485 == 0)
					{
						unk_0xCF4F61BDF848F1C9("T1M4_BBAA", "AIRPORTANNO", -939.5f, -2932.2f, 16f, "SPEECH_PARAMS_FORCE_FRONTEND");
						iLocal_485 = 1;
					}
					if (iLocal_480 == 1)
					{
						if (iLocal_452 == 0)
						{
							if (!func_255())
							{
								if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
								{
									if (func_256(&uLocal_490, "T1M4AUD", "SOL3_RUNS", 7, 0, 0, 0))
									{
										unk_0x1D1C393C7689E5A6(4f, 6f, 4);
										iLocal_242 = unk_0x105601648511CC64();
										iLocal_452 = 1;
										iLocal_479 = 1;
										iLocal_480 = 0;
									}
								}
							}
						}
						if (unk_0x105601648511CC64() > iLocal_242 + 5000)
						{
							if (!func_255())
							{
								if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
								{
									if (func_256(&uLocal_490, "T1M4AUD", "SOL3_RUNS", 7, 0, 0, 0))
									{
										unk_0x1D1C393C7689E5A6(4f, 6f, 4);
										iLocal_242 = unk_0x105601648511CC64();
									}
								}
							}
						}
					}
					if (iLocal_479 == 1 && unk_0x105601648511CC64() > iLocal_246 + 4000)
					{
						if (!func_255())
						{
							if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
							{
								if (func_256(&uLocal_490, "T1M4AUD", "T1M4_SHOUT1", 7, 0, 0, 0))
								{
									unk_0x1D1C393C7689E5A6(4f, 6f, 4);
									iLocal_246 = unk_0x105601648511CC64();
									iLocal_480 = 1;
									iLocal_479 = 0;
								}
							}
						}
					}
				}
			}
			break;
		
		case 6:
			if (iLocal_223 > 0)
			{
				if (iLocal_227 == 0)
				{
					iLocal_453 = 0;
					iLocal_454 = 0;
					iLocal_455 = 0;
					iLocal_481 = 0;
					iLocal_482 = 0;
					func_17(&uLocal_490, 0, unk_0xBC25C936A095B5BA(), "Michael", 0, 1);
					if (!unk_0x36CEFBE9B745A58D(iLocal_264))
					{
						func_17(&uLocal_490, 2, iLocal_264, "MOLLY", 0, 1);
					}
					iLocal_227 = 1;
				}
				if (iLocal_227 == 1)
				{
					if (iLocal_453 == 0)
					{
						if (!func_255())
						{
							if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
							{
								if (func_256(&uLocal_490, "T1M4AUD", "SOL3_PAST", 7, 0, 0, 0))
								{
									iLocal_453 = 1;
								}
							}
						}
					}
					if (iLocal_453 == 1 && iLocal_455 == 0)
					{
						if (!func_255())
						{
							if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
							{
								if (func_256(&uLocal_490, "T1M4AUD", "SOL3_WATCH", 7, 0, 0, 0))
								{
									iLocal_455 = 1;
								}
							}
						}
					}
					if (iLocal_454 == 0)
					{
						if (unk_0x724D816EA203A79E(iLocal_264))
						{
							if (!unk_0x36CEFBE9B745A58D(iLocal_264))
							{
								if (unk_0x77FC50899603581D(iLocal_251))
								{
									if (unk_0x8FD30584EB38411B(iLocal_251) > 0.65f && unk_0x8FD30584EB38411B(iLocal_251) < 0.835f)
									{
										if (!func_255())
										{
											if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
											{
												if (func_256(&uLocal_490, "T1M4AUD", "SOL3_SUCKS", 7, 0, 0, 0))
												{
													unk_0x1D1C393C7689E5A6(8f, 8f, 4);
													iLocal_454 = 1;
												}
											}
										}
									}
								}
							}
						}
					}
					if (iLocal_481 == 0)
					{
						if (!unk_0x724D816EA203A79E(iLocal_264))
						{
							if (!func_255())
							{
								if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
								{
									if (func_256(&uLocal_490, "T1M4AUD", "T1M4_SMUSH", 7, 0, 0, 0))
									{
										iLocal_481 = 1;
									}
								}
							}
						}
					}
					if (iLocal_481 == 1 && iLocal_482 == 0)
					{
						if (!func_255())
						{
							if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
							{
								if (func_256(&uLocal_490, "T1M4AUD", "T1M4_SMUSH2", 7, 0, 0, 0))
								{
									iLocal_482 = 1;
								}
							}
						}
					}
				}
			}
			break;
		
		case 8:
			if (iLocal_223 > 0)
			{
				if (iLocal_227 == 0)
				{
					iLocal_483 = 0;
					iLocal_247 = unk_0x105601648511CC64();
					func_17(&uLocal_490, 0, unk_0xBC25C936A095B5BA(), "Michael", 0, 1);
					iLocal_227 = 1;
				}
				if (iLocal_227 == 1)
				{
					if (iLocal_483 == 0)
					{
						if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
						{
							iLocal_277 = func_399(unk_0xBC25C936A095B5BA(), -1533126372, 0, 0, 28);
							if (unk_0x724D816EA203A79E(iLocal_277))
							{
								if (func_16(unk_0xBC25C936A095B5BA(), iLocal_277, 1) < 40f)
								{
									if (!func_255())
									{
										if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
										{
											if (func_256(&uLocal_490, "T1M4AUD", "T1M4_COPS", 7, 0, 0, 0))
											{
												iLocal_483 = 1;
											}
										}
									}
								}
							}
						}
					}
					if (iLocal_483 == 1 && unk_0x105601648511CC64() > iLocal_247 + 5000)
					{
						if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
						{
							iLocal_277 = func_399(unk_0xBC25C936A095B5BA(), -1533126372, 0, 0, 28);
							if (unk_0x724D816EA203A79E(iLocal_277))
							{
								if (func_16(unk_0xBC25C936A095B5BA(), iLocal_277, 1) < 40f)
								{
									if (!func_255())
									{
										if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
										{
											if (func_256(&uLocal_490, "T1M4AUD", "T1M4_COPS", 7, 0, 0, 0))
											{
												iLocal_247 = unk_0x105601648511CC64();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
	}
}

int func_399(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x23CFF
{
	int iVar0[16];
	int iVar1;
	
	iVar1 = 0;
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		unk_0x252B0CBDBF5803ED(iParam0, &iVar0, iParam4);
		iVar1 = 0;
		while (iVar1 <= (iVar0 - 1))
		{
			if (unk_0x724D816EA203A79E(iVar0[iVar1]))
			{
				if (!unk_0x36CEFBE9B745A58D(iVar0[iVar1]))
				{
					if (unk_0x84788C4CA5E15BDC(iVar0[iVar1]) == iParam1)
					{
						if (iParam2 <= 0)
						{
							if (iParam3 == 1)
							{
								if (unk_0xD1DC4B08247A4317(iVar0[iVar1]))
								{
									return iVar0[iVar1];
								}
							}
							else
							{
								return iVar0[iVar1];
							}
						}
						else if (iVar1 + iParam2) <= (iVar0 - 1)
						{
							if (unk_0x724D816EA203A79E(iVar0[(iVar1 + iParam2)]))
							{
								if (!unk_0x36CEFBE9B745A58D(iVar0[(iVar1 + iParam2)]))
								{
									if (unk_0x84788C4CA5E15BDC(iVar0[(iVar1 + iParam2)]) == iParam1)
									{
										if (iParam3 == 1)
										{
											if (unk_0xD1DC4B08247A4317(iVar0[(iVar1 + iParam2)]))
											{
												return iVar0[(iVar1 + iParam2)];
											}
										}
										else
										{
											return iVar0[(iVar1 + iParam2)];
										}
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_400()//Position - 0x23E06
{
	if (Global_3DB8 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_401(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x23E1D
{
	func_254(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_3DE8 = 1;
	Global_3DBF = 1;
	Global_3DC6 = 0;
	Global_3DC1 = 0;
	Global_4197 = 0;
	Global_4199 = 0;
	Global_419D = 0;
	Global_3DBD = 0;
	Global_3DEC = 0;
	Global_3DEE = 0;
	Global_280001 = 0;
	return func_247(sParam3, iParam4, bParam7);
}

void func_402()//Position - 0x23E6B
{
	if (((iLocal_222 == 4 || iLocal_222 == 5) || iLocal_222 == 8) || iLocal_222 == 6)
	{
		if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			if (func_403(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 2, 200, 0))
			{
				unk_0xC87F56DCAF19EC70(unk_0xB5CEFD608600A09F());
				unk_0xAEEA080912A0AB35(unk_0xB5CEFD608600A09F());
			}
		}
	}
	if (iLocal_441 == 0)
	{
		if (iLocal_222 == 4)
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				if (func_403(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 2, 200, 0))
				{
					unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 3, 0);
					unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
					iLocal_441 = 1;
				}
			}
		}
	}
}

int func_403(vector3 vParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x23F12
{
	vector3 vVar0[15];
	vector3 vVar1[15];
	float fVar2[15];
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar5 = 0;
	switch (iParam1)
	{
		case 1:
			vVar0[0 /*3*/] = { -1332.211f, 100.4608f, 40.38437f };
			vVar1[0 /*3*/] = { -1094.238f, 148.4274f, 73f };
			fVar2[0] = 171.25f;
			vVar0[1 /*3*/] = { -999.7344f, -110.2231f, 25.25706f };
			vVar1[1 /*3*/] = { -1149.494f, 109.2558f, 73f };
			fVar2[1] = 132f;
			vVar0[2 /*3*/] = { -1035.113f, -84.95885f, 28.2746f };
			vVar1[2 /*3*/] = { -1261.103f, 50.08148f, 73f };
			fVar2[2] = 132f;
			iVar3 = 3;
			break;
		
		case 2:
			vVar0[0 /*3*/] = { -804.3439f, -3346.5f, 10f };
			vVar1[0 /*3*/] = { -1816.954f, -2768.893f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 247f;
			vVar0[1 /*3*/] = { -1911.488f, -2934.197f, 10f };
			vVar1[1 /*3*/] = { -968.6236f, -3477.748f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 149f;
			vVar0[2 /*3*/] = { -844.9433f, -2802.785f, 10f };
			vVar1[2 /*3*/] = { -1011.081f, -3086.904f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 185.5f;
			vVar0[3 /*3*/] = { -1021.086f, -2952.277f, 10f };
			vVar1[3 /*3*/] = { -1599.008f, -2616.271f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 250f;
			vVar0[4 /*3*/] = { -1027.136f, -2436.457f, 10f };
			vVar1[4 /*3*/] = { -1392.61f, -2226.763f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 193.5f;
			vVar0[5 /*3*/] = { -1497.549f, -2408.712f, 10f };
			vVar1[5 /*3*/] = { -1136.917f, -2617.955f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 234.5f;
			vVar0[6 /*3*/] = { -982.7924f, -2831.709f, 12.93313f };
			vVar1[6 /*3*/] = { -966.4677f, -2803.458f, 16.68313f };
			fVar2[6] = 16f;
			vVar0[7 /*3*/] = { -1110.083f, -3496.806f, 12f };
			vVar1[7 /*3*/] = { -1955.298f, -3010.431f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 80f;
			vVar0[8 /*3*/] = { -1886.899f, -3193.024f, 12f };
			vVar1[8 /*3*/] = { -1836.143f, -3105.268f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 142f;
			vVar0[9 /*3*/] = { -1134.337f, -3535.648f, 12f };
			vVar1[9 /*3*/] = { -1259.649f, -3463.486f, IntToFloat((250 + iParam2)) };
			fVar2[9] = 30.75f;
			vVar0[10 /*3*/] = { -969.1279f, -3463.899f, 12f };
			vVar1[10 /*3*/] = { -896.3734f, -3505.715f, IntToFloat((250 + iParam2)) };
			fVar2[10] = 150f;
			vVar0[11 /*3*/] = { -1369.491f, -2173.579f, 10f };
			vVar1[11 /*3*/] = { -1685.626f, -2720.364f, IntToFloat((250 + iParam2)) };
			fVar2[11] = 29.25f;
			vVar0[12 /*3*/] = { -1010.926f, -3550.943f, 10f };
			vVar1[12 /*3*/] = { -1110.198f, -3493.617f, IntToFloat((250 + iParam2)) };
			fVar2[12] = 43f;
			iVar3 = 13;
			break;
		
		case 3:
			vVar0[0 /*3*/] = { -1773.944f, 3287.334f, 30f };
			vVar1[0 /*3*/] = { -2029.776f, 2845.083f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 255f;
			vVar0[1 /*3*/] = { -2725.889f, 3291.099f, 30f };
			vVar1[1 /*3*/] = { -2009.182f, 2879.835f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 180f;
			vVar0[2 /*3*/] = { -2442.026f, 3326.699f, 30f };
			vVar1[2 /*3*/] = { -2033.928f, 3089.049f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 205f;
			vVar0[3 /*3*/] = { -1917.165f, 3374.209f, 30f };
			vVar1[3 /*3*/] = { -2016.791f, 3195.058f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 86.25f;
			vVar0[4 /*3*/] = { -2192.753f, 3373.278f, 30f };
			vVar1[4 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 150.5f;
			vVar0[5 /*3*/] = { -2077.663f, 3344.514f, 30f };
			vVar1[5 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 140.5f;
			vVar0[6 /*3*/] = { -2861.755f, 3352.661f, 30f };
			vVar1[6 /*3*/] = { -2715.871f, 3269.916f, IntToFloat((250 + iParam2)) };
			fVar2[6] = 90f;
			vVar0[7 /*3*/] = { -2005.574f, 3364.533f, 30f };
			vVar1[7 /*3*/] = { -1977.569f, 3330.888f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 100f;
			vVar0[8 /*3*/] = { -1682.235f, 3004.285f, 30f };
			vVar1[8 /*3*/] = { -1942.747f, 2947.441f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 248.75f;
			vVar0[9 /*3*/] = { -2393.295f, 2936.406f, 31.6801f };
			vVar1[9 /*3*/] = { -2453.037f, 3006.863f, 52.31003f };
			fVar2[9] = 128f;
			vVar0[10 /*3*/] = { -2347.185f, 3023.83f, 31.56573f };
			vVar1[10 /*3*/] = { -2517.33f, 2989.063f, 49.95644f };
			fVar2[10] = 127.25f;
			vVar0[11 /*3*/] = { -2259.922f, 3358.04f, 29.99972f };
			vVar1[11 /*3*/] = { -2299.772f, 3385.79f, 38.06014f };
			fVar2[11] = 16f;
			vVar0[12 /*3*/] = { -2476.309f, 3363.914f, 31.67933f };
			vVar1[12 /*3*/] = { -2431.981f, 3287.669f, 39.97826f };
			fVar2[12] = 214.25f;
			vVar0[13 /*3*/] = { -2103.081f, 2797.783f, 29.37864f };
			vVar1[13 /*3*/] = { -2096.821f, 2874.423f, 57.80989f };
			fVar2[13] = 65.75f;
			if (bParam3)
			{
				iVar6 = iParam2;
			}
			else
			{
				iVar6 = 0;
			}
			vVar1[9 /*3*/].f_2 = (vVar1[9 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[10 /*3*/].f_2 = (vVar1[10 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[11 /*3*/].f_2 = (vVar1[11 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[12 /*3*/].f_2 = (vVar1[12 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[13 /*3*/].f_2 = (vVar1[13 /*3*/].f_2 + IntToFloat(iVar6));
			iVar3 = 14;
			break;
		
		case 4:
			vVar0[0 /*3*/] = { 1541.607f, 2527.555f, 40f };
			vVar1[0 /*3*/] = { 1815.575f, 2535.06f, IntToFloat((150 + iParam2)) };
			fVar2[0] = 114f;
			vVar0[1 /*3*/] = { 1788.879f, 2445.727f, 40f };
			vVar1[1 /*3*/] = { 1716.96f, 2502.957f, IntToFloat((150 + iParam2)) };
			fVar2[1] = 88.5f;
			vVar0[2 /*3*/] = { 1601.157f, 2436.244f, 40f };
			vVar1[2 /*3*/] = { 1650.078f, 2515.923f, IntToFloat((150 + iParam2)) };
			fVar2[2] = 133.25f;
			vVar0[3 /*3*/] = { 1706.331f, 2407.597f, 40f };
			vVar1[3 /*3*/] = { 1698.555f, 2460.208f, IntToFloat((150 + iParam2)) };
			fVar2[3] = 104.5f;
			vVar0[4 /*3*/] = { 1712.452f, 2756.218f, 40f };
			vVar1[4 /*3*/] = { 1718.848f, 2589.162f, IntToFloat((150 + iParam2)) };
			fVar2[4] = 121.75f;
			vVar0[5 /*3*/] = { 1830.228f, 2661.24f, 40f };
			vVar1[5 /*3*/] = { 1774.812f, 2679.419f, IntToFloat((150 + iParam2)) };
			fVar2[5] = 84.5f;
			vVar0[6 /*3*/] = { 1559.05f, 2632.22f, 40f };
			vVar1[6 /*3*/] = { 1657.208f, 2595.484f, IntToFloat((150 + iParam2)) };
			fVar2[6] = 103.75f;
			vVar0[7 /*3*/] = { 1612.021f, 2716.869f, 40f };
			vVar1[7 /*3*/] = { 1657.165f, 2669.721f, IntToFloat((150 + iParam2)) };
			fVar2[7] = 104.25f;
			vVar0[8 /*3*/] = { 1809.872f, 2729.827f, 40f };
			vVar1[8 /*3*/] = { 1789.855f, 2705.037f, IntToFloat((150 + iParam2)) };
			fVar2[8] = 91f;
			vVar0[9 /*3*/] = { 1818.789f, 2605.948f, 40f };
			vVar1[9 /*3*/] = { 1783.114f, 2606.783f, IntToFloat((150 + iParam2)) };
			fVar2[9] = 51.25f;
			iVar3 = 10;
			break;
		
		case 5:
			vVar0[0 /*3*/] = { 3411.002f, 3663.185f, 20f };
			vVar1[0 /*3*/] = { 3615.583f, 3626.194f, IntToFloat((40 + iParam2)) };
			fVar2[0] = 45.75f;
			vVar0[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			vVar1[1 /*3*/] = { 3643.801f, 3694.362f, IntToFloat((40 + iParam2)) };
			fVar2[1] = 99f;
			vVar0[2 /*3*/] = { 3446.036f, 3795.688f, 20f };
			vVar1[2 /*3*/] = { 3650.914f, 3766.152f, IntToFloat((40 + iParam2)) };
			fVar2[2] = 81.5f;
			iVar3 = 3;
			break;
		
		case 6:
			vVar0[0 /*3*/] = { 526.053f, -3391.497f, -10f };
			vVar1[0 /*3*/] = { 523.2289f, -3118.678f, IntToFloat((10 + iParam2)) };
			fVar2[0] = 120f;
			vVar0[1 /*3*/] = { 459.4397f, -3199.99f, 4.819676f };
			vVar1[1 /*3*/] = { 593.8928f, -3199.998f, 30.06926f };
			fVar2[1] = 170f;
			vVar0[2 /*3*/] = { 552.8467f, -3111.054f, 4.819394f };
			vVar1[2 /*3*/] = { 585.3137f, -3111.844f, 17.56923f };
			fVar2[2] = 12.5f;
			vVar0[3 /*3*/] = { 598.4666f, -3140.147f, 4.819257f };
			vVar1[3 /*3*/] = { 597.4973f, -3117.063f, 17.31926f };
			fVar2[3] = 9.75f;
			iVar3 = 4;
			break;
		
		case 7:
			vVar0[0 /*3*/] = { -1108.55f, -570.8798f, 20f };
			vVar1[0 /*3*/] = { -1187.811f, -477.5037f, IntToFloat((50 + iParam2)) };
			fVar2[0] = 162f;
			vVar0[1 /*3*/] = { -1201.378f, -485.9673f, 20f };
			vVar1[1 /*3*/] = { -1215.796f, -464.8281f, IntToFloat((50 + iParam2)) };
			fVar2[1] = 124f;
			vVar0[2 /*3*/] = { -985.6311f, -525.4233f, 20f };
			vVar1[2 /*3*/] = { -1013.393f, -475.2057f, IntToFloat((50 + iParam2)) };
			fVar2[2] = 55f;
			vVar0[3 /*3*/] = { -1055.849f, -477.8226f, 20f };
			vVar1[3 /*3*/] = { -1073.333f, -498.717f, IntToFloat((50 + iParam2)) };
			fVar2[3] = 142f;
			iVar3 = 4;
			break;
		
		case 8:
			vVar0[0 /*3*/] = { 461.5684f, -984.572f, 29.43951f };
			vVar1[0 /*3*/] = { 471.17f, -984.4292f, 40.14212f };
			fVar2[0] = 7.75f;
			vVar0[1 /*3*/] = { 457.3404f, -984.756f, 34.43951f };
			vVar1[1 /*3*/] = { 457.2084f, -993.7189f, 29.38958f };
			fVar2[1] = 14.75f;
			vVar0[2 /*3*/] = { 477.6227f, -986.6f, 40.00819f };
			vVar1[2 /*3*/] = { 424.8687f, -986.3279f, 48.71241f };
			fVar2[2] = 31.5f;
			vVar0[3 /*3*/] = { 474.3889f, -974.4613f, 39.55761f };
			vVar1[3 /*3*/] = { 474.0358f, -1021.972f, 49.10033f };
			fVar2[3] = 30.5f;
			vVar0[4 /*3*/] = { 442.1768f, -974.1888f, 29.68951f };
			vVar1[4 /*3*/] = { 442.1855f, -979.8635f, 33.43951f };
			fVar2[4] = 6.75f;
			iVar3 = 5;
			break;
	}
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		if (unk_0x7352105EC4D7541F(vParam0, vVar0[iVar4 /*3*/], vVar1[iVar4 /*3*/], fVar2[iVar4], iVar5, true))
		{
			return 1;
		}
		iVar4++;
	}
	return 0;
}

void func_404()//Position - 0x24C6B
{
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			iLocal_279 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
		}
	}
}

void func_405()//Position - 0x24C97
{
	if (iLocal_349 == 1)
	{
		if (iLocal_222 == 4)
		{
			if (iLocal_224 > 1 && iLocal_424 == 0)
			{
				if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -828.6987f, -2938.073f, 12.21745f, -807.6911f, -2905.148f, 16.35626f, 28f, 0, true, 0))
				{
					func_233("TRV4_FAIL1");
				}
			}
		}
		if (iLocal_222 == 6)
		{
			if (unk_0x724D816EA203A79E(iLocal_295))
			{
				if (unk_0x2DA8CA50A72528FB(iLocal_300))
				{
					if (func_16(unk_0xBC25C936A095B5BA(), iLocal_295, 1) > 100f)
					{
						func_233("TRV4_FAIL6");
					}
				}
			}
		}
		if (iLocal_222 == 4)
		{
			if (iLocal_224 == 2)
			{
				if (unk_0x105601648511CC64() > iLocal_236 + 7000 && iLocal_439 == 0)
				{
					func_233("TRV4_FAIL1");
				}
			}
		}
		if (iLocal_222 == 4)
		{
			if (unk_0x724D816EA203A79E(iLocal_278))
			{
				if (unk_0xE59B7F5A03335350(iLocal_278, 0))
				{
					if (unk_0xB34E411B0A4BF096(iLocal_278))
					{
						if (unk_0x5B80643EF917B728(iLocal_278) > 62000f && unk_0x5B80643EF917B728(iLocal_278) < 77000f)
						{
							if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), -1219f, -2570f, 13f, true) < 210f)
							{
								if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
								{
									if (unk_0x349C94FFF43E2979(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)) < 200f && unk_0x349C94FFF43E2979(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)) > 125f)
									{
										if (iLocal_438 == 0)
										{
											iLocal_239 = unk_0x105601648511CC64();
											iLocal_438 = 1;
										}
										if (iLocal_438 == 1 && unk_0x105601648511CC64() > iLocal_239 + 4000)
										{
											func_233("TRV4_FAIL1");
										}
									}
									else if (iLocal_438 == 1)
									{
										iLocal_438 = 0;
									}
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_222 == 5 || iLocal_222 == 6)
		{
			if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), -928.9f, -2935f, 13f, true) < 5f && !unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()))
			{
				func_233("TRV4_FAIL1");
			}
		}
		if (iLocal_222 == 2 || iLocal_222 == 4)
		{
			if (unk_0xE3CA72BD77D43B09(unk_0xBC25C936A095B5BA()) || unk_0x57379381A330B2FF(unk_0xBC25C936A095B5BA()))
			{
				if (func_403(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 2, 200, 0))
				{
					func_233("TRV4_FAIL2");
				}
				else if (!func_208("TRV4_HELP3"))
				{
					func_408("TRV4_HELP3");
				}
			}
			else if (func_208("TRV4_HELP3"))
			{
				unk_0x7456702622C62EA0(1);
			}
		}
		if (unk_0x724D816EA203A79E(iLocal_278))
		{
			if (!unk_0xE59B7F5A03335350(iLocal_278, 0))
			{
				if (unk_0x724D816EA203A79E(iLocal_264))
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_264))
					{
						unk_0x1E5C2A1EAB944289(iLocal_264, false);
						unk_0x65E471E4A2D56226(iLocal_264, 0, 0);
					}
				}
			}
		}
		if (iLocal_358 == 1)
		{
			if (unk_0x724D816EA203A79E(iLocal_264))
			{
				if (unk_0x36CEFBE9B745A58D(iLocal_264))
				{
					func_233("TRV4_FAIL3");
				}
			}
		}
		if (iLocal_222 == 4)
		{
			if (iLocal_350 == 1)
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_264))
				{
					if (func_13(unk_0xBC25C936A095B5BA(), iLocal_264) > 300f)
					{
						if (iLocal_404 == 1)
						{
							unk_0xEB233A3B7635D2AC();
							func_20("TRV4_WARN1", 7500, 1);
							iLocal_404 = 0;
						}
					}
					else if (iLocal_404 == 0)
					{
						iLocal_404 = 1;
					}
					if (unk_0xE59B7F5A03335350(iLocal_278, 0))
					{
						if (unk_0xB34E411B0A4BF096(iLocal_278))
						{
							if (unk_0x5B80643EF917B728(iLocal_278) < 40000f)
							{
								if (func_13(unk_0xBC25C936A095B5BA(), iLocal_264) > 400f)
								{
									func_233("TRV4_FAIL1");
								}
							}
							else if (func_13(unk_0xBC25C936A095B5BA(), iLocal_264) > 350f)
							{
								func_233("TRV4_FAIL1");
							}
						}
					}
				}
			}
			if (iLocal_224 == 3)
			{
				if (iLocal_425 == 1)
				{
					if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), -934.4f, -2927.2f, 13.2f, true) > 25f || unk_0x105601648511CC64() > iLocal_237 + 12000)
					{
						func_233("TRV4_FAIL1");
					}
				}
			}
		}
		if (iLocal_222 == 2 || iLocal_222 == 4)
		{
			if (unk_0xEBE910FA7CB6EAF0(unk_0xBC25C936A095B5BA()))
			{
				func_233("TRV4_FAIL1");
			}
		}
		if (iLocal_222 == 4)
		{
			if (unk_0xE59B7F5A03335350(iLocal_278, 0))
			{
				if (unk_0xB34E411B0A4BF096(iLocal_278))
				{
					if (unk_0x5B80643EF917B728(iLocal_278) > 111509f)
					{
						if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -1070.838f, -2942.241f, 12.19534f, -1009.038f, -2977.609f, 17.44443f, 89.5f, 0, true, 0))
						{
							func_233("TRV4_FAIL1");
						}
					}
					if (unk_0x5B80643EF917B728(iLocal_278) > 122000f)
					{
						if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
						{
							if (unk_0x8730A01B72F31307(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)))
							{
								if (iLocal_440 == 0)
								{
									iLocal_240 = unk_0x105601648511CC64();
									iLocal_440 = 1;
								}
								if (iLocal_440 == 1)
								{
									if (unk_0x105601648511CC64() > iLocal_240 + 4000)
									{
										func_233("TRV4_FAIL1");
									}
								}
							}
							else
							{
								iLocal_440 = 0;
							}
						}
					}
				}
			}
		}
		if (iLocal_222 == 2)
		{
			if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -803.4108f, -2173.417f, -1.911488f, -605.6846f, -2358.229f, 27.32842f, 250f, 0, true, 0))
			{
				func_233("TRV4_FAIL1");
			}
		}
		if (iLocal_405 == 1)
		{
			if (func_407())
			{
				func_406();
			}
		}
	}
}

void func_406()//Position - 0x251A6
{
	func_414(unk_0xBC25C936A095B5BA(), 0);
	func_410();
}

int func_407()//Position - 0x251BB
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_16B1B == 7 || Global_16B1B == 8)
	{
		return 1;
	}
	return 0;
}

void func_408(char* sParam0)//Position - 0x251E8
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 1, true, -1);
}

void func_409(bool bParam0)//Position - 0x251FE
{
	if (bParam0)
	{
		StringCopy(&Global_19754, unk_0x1377080E9B0BD993(), 24);
		Global_1974E = 1;
	}
	else
	{
		StringCopy(&Global_19754, "NULL", 24);
		Global_1974E = 0;
	}
}

void func_410()//Position - 0x2522A
{
	func_416(24, 1);
	unk_0x9B90420B04C07704("PoliceScannerDisabled", 0);
	unk_0x379ACE23D404525C(-1042.5f, -500f, 41f, -1019.5f, -475f, 34f, true, 1);
	func_411();
	func_207(&uLocal_28, 0, 0);
	unk_0xAF0732277B825027(0);
	unk_0x78108840729CEAEE(0);
	unk_0xC32C243942383443();
	if (unk_0x724D816EA203A79E(iLocal_287))
	{
		unk_0xCF6040807CC0E4A5(&iLocal_287);
	}
	func_409(0);
	if (unk_0x2A0D5F9585271A68(iLocal_263))
	{
		unk_0x5BF83EEC9AFDCD0E(iLocal_263);
	}
	if (unk_0x724D816EA203A79E(iLocal_264))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_264))
		{
			unk_0x22321800954A532E(iLocal_264, true);
		}
		unk_0x02537C8C1BEEB477(&iLocal_264);
	}
	if (unk_0x724D816EA203A79E(iLocal_266))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_266))
		{
			unk_0x22321800954A532E(iLocal_266, true);
		}
		unk_0x02537C8C1BEEB477(&iLocal_266);
	}
	if (unk_0x724D816EA203A79E(iLocal_269))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_269))
		{
			unk_0x22321800954A532E(iLocal_269, true);
		}
		unk_0x02537C8C1BEEB477(&iLocal_269);
	}
	if (unk_0x724D816EA203A79E(iLocal_270))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_270))
		{
			unk_0x22321800954A532E(iLocal_270, true);
		}
		unk_0x02537C8C1BEEB477(&iLocal_270);
	}
	if (unk_0x724D816EA203A79E(iLocal_271))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_271))
		{
			unk_0x22321800954A532E(iLocal_271, true);
		}
		unk_0x02537C8C1BEEB477(&iLocal_271);
	}
	if (unk_0x724D816EA203A79E(iLocal_272))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_272))
		{
			unk_0x22321800954A532E(iLocal_272, true);
		}
		unk_0x02537C8C1BEEB477(&iLocal_272);
	}
	if (unk_0x724D816EA203A79E(iLocal_273))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_273))
		{
			unk_0x22321800954A532E(iLocal_273, true);
		}
		unk_0x02537C8C1BEEB477(&iLocal_273);
	}
	if (unk_0x724D816EA203A79E(iLocal_274))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_274))
		{
			unk_0x22321800954A532E(iLocal_274, true);
		}
		unk_0x02537C8C1BEEB477(&iLocal_274);
	}
	if (unk_0x724D816EA203A79E(iLocal_265[0]))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_265[0]))
		{
			unk_0x22321800954A532E(iLocal_265[0], true);
		}
		unk_0x02537C8C1BEEB477(&(iLocal_265[0]));
	}
	if (unk_0x724D816EA203A79E(iLocal_265[1]))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_265[1]))
		{
			unk_0x22321800954A532E(iLocal_265[1], true);
		}
		unk_0x02537C8C1BEEB477(&(iLocal_265[1]));
	}
	if (unk_0x724D816EA203A79E(iLocal_265[2]))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_265[2]))
		{
			unk_0x22321800954A532E(iLocal_265[2], true);
		}
		unk_0x02537C8C1BEEB477(&(iLocal_265[2]));
	}
	if (unk_0x724D816EA203A79E(iLocal_265[3]))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_265[3]))
		{
			unk_0x22321800954A532E(iLocal_265[3], true);
		}
		unk_0x02537C8C1BEEB477(&(iLocal_265[3]));
	}
	if (unk_0x724D816EA203A79E(uLocal_267[0]))
	{
		if (!unk_0x36CEFBE9B745A58D(uLocal_267[0]))
		{
			unk_0x22321800954A532E(uLocal_267[0], true);
		}
		unk_0x02537C8C1BEEB477(&(uLocal_267[0]));
	}
	if (unk_0x724D816EA203A79E(uLocal_267[1]))
	{
		if (!unk_0x36CEFBE9B745A58D(uLocal_267[1]))
		{
			unk_0x22321800954A532E(uLocal_267[1], true);
		}
		unk_0x02537C8C1BEEB477(&(uLocal_267[1]));
	}
	if (unk_0x724D816EA203A79E(uLocal_267[2]))
	{
		if (!unk_0x36CEFBE9B745A58D(uLocal_267[2]))
		{
			unk_0x22321800954A532E(uLocal_267[2], true);
		}
		unk_0x02537C8C1BEEB477(&(uLocal_267[2]));
	}
	if (unk_0x724D816EA203A79E(iLocal_268[0]))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_268[0]))
		{
			unk_0x22321800954A532E(iLocal_268[0], true);
		}
		unk_0x02537C8C1BEEB477(&(iLocal_268[0]));
	}
	if (unk_0x724D816EA203A79E(iLocal_268[1]))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_268[1]))
		{
			unk_0x22321800954A532E(iLocal_268[1], true);
		}
		unk_0x02537C8C1BEEB477(&(iLocal_268[1]));
	}
	if (unk_0x724D816EA203A79E(iLocal_268[2]))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_268[2]))
		{
			unk_0x22321800954A532E(iLocal_268[2], true);
		}
		unk_0x02537C8C1BEEB477(&(iLocal_268[2]));
	}
	if (unk_0x724D816EA203A79E(iLocal_268[3]))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_268[3]))
		{
			unk_0x22321800954A532E(iLocal_268[3], true);
		}
		unk_0x02537C8C1BEEB477(&(iLocal_268[3]));
	}
	if (unk_0x724D816EA203A79E(iLocal_268[4]))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_268[4]))
		{
			unk_0x22321800954A532E(iLocal_268[4], true);
		}
		unk_0x02537C8C1BEEB477(&(iLocal_268[4]));
	}
	if (unk_0x724D816EA203A79E(iLocal_268[5]))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_268[5]))
		{
			unk_0x22321800954A532E(iLocal_268[5], true);
		}
		unk_0x02537C8C1BEEB477(&(iLocal_268[5]));
	}
	if (unk_0x724D816EA203A79E(iLocal_268[6]))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_268[6]))
		{
			unk_0x22321800954A532E(iLocal_268[6], true);
		}
		unk_0x02537C8C1BEEB477(&(iLocal_268[6]));
	}
	if (unk_0x724D816EA203A79E(iLocal_268[7]))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_268[7]))
		{
			unk_0x22321800954A532E(iLocal_268[7], true);
		}
		unk_0x02537C8C1BEEB477(&(iLocal_268[7]));
	}
	if (unk_0x724D816EA203A79E(iLocal_268[8]))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_268[8]))
		{
			unk_0x22321800954A532E(iLocal_268[8], true);
		}
		unk_0x02537C8C1BEEB477(&(iLocal_268[8]));
	}
	if (unk_0x724D816EA203A79E(iLocal_268[9]))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_268[9]))
		{
			unk_0x22321800954A532E(iLocal_268[9], true);
		}
		unk_0x02537C8C1BEEB477(&(iLocal_268[9]));
	}
	if (unk_0x724D816EA203A79E(iLocal_268[10]))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_268[10]))
		{
			unk_0x22321800954A532E(iLocal_268[10], true);
		}
		unk_0x02537C8C1BEEB477(&(iLocal_268[10]));
	}
	if (unk_0x724D816EA203A79E(iLocal_275[0]))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_275[0]))
		{
			unk_0x22321800954A532E(iLocal_275[0], true);
		}
		unk_0x02537C8C1BEEB477(&(iLocal_275[0]));
	}
	if (unk_0x724D816EA203A79E(iLocal_276[0]))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_276[0]))
		{
			unk_0x22321800954A532E(iLocal_276[0], true);
		}
		unk_0x02537C8C1BEEB477(&(iLocal_276[0]));
	}
	if (unk_0x724D816EA203A79E(iLocal_276[1]))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_276[1]))
		{
			unk_0x22321800954A532E(iLocal_276[1], true);
		}
		unk_0x02537C8C1BEEB477(&(iLocal_276[1]));
	}
	if (unk_0x724D816EA203A79E(iLocal_278))
	{
		unk_0x1E7A09C1710FB071(&iLocal_278);
	}
	if (unk_0x724D816EA203A79E(iLocal_279))
	{
		if (unk_0xB248FAA35ED47DB9(iLocal_279, 0))
		{
			unk_0x1E7A09C1710FB071(&iLocal_279);
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_282))
	{
		unk_0x1E7A09C1710FB071(&iLocal_282);
	}
	if (unk_0x724D816EA203A79E(iLocal_283))
	{
		unk_0x1E7A09C1710FB071(&iLocal_283);
	}
	if (unk_0x724D816EA203A79E(iLocal_284))
	{
		unk_0x1E7A09C1710FB071(&iLocal_284);
	}
	if (unk_0x724D816EA203A79E(iLocal_285))
	{
		unk_0x1E7A09C1710FB071(&iLocal_285);
	}
	if (unk_0x724D816EA203A79E(iLocal_287))
	{
		unk_0x1E7A09C1710FB071(&iLocal_287);
	}
	if (unk_0x724D816EA203A79E(iLocal_289))
	{
		if (unk_0xB248FAA35ED47DB9(iLocal_289, 0))
		{
			unk_0x1E7A09C1710FB071(&iLocal_289);
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_293[0]))
	{
		unk_0x1E7A09C1710FB071(&(iLocal_293[0]));
	}
	if (unk_0x724D816EA203A79E(iLocal_293[1]))
	{
		unk_0x1E7A09C1710FB071(&(iLocal_293[1]));
	}
	if (unk_0x724D816EA203A79E(iLocal_280[0]))
	{
		unk_0x1E7A09C1710FB071(&(iLocal_280[0]));
	}
	if (unk_0x724D816EA203A79E(iLocal_280[1]))
	{
		unk_0x1E7A09C1710FB071(&(iLocal_280[1]));
	}
	if (unk_0x724D816EA203A79E(iLocal_293[0]))
	{
		unk_0x1E7A09C1710FB071(&(iLocal_293[0]));
	}
	if (unk_0x724D816EA203A79E(iLocal_293[1]))
	{
		unk_0x1E7A09C1710FB071(&(iLocal_293[1]));
	}
	if (unk_0x724D816EA203A79E(iLocal_286[0]))
	{
		unk_0x1E7A09C1710FB071(&(iLocal_286[0]));
	}
	if (unk_0x724D816EA203A79E(iLocal_286[1]))
	{
		unk_0x1E7A09C1710FB071(&(iLocal_286[1]));
	}
	if (unk_0x724D816EA203A79E(iLocal_288[0]))
	{
		unk_0x1E7A09C1710FB071(&(iLocal_288[0]));
	}
	if (unk_0x724D816EA203A79E(iLocal_281))
	{
		unk_0x1E7A09C1710FB071(&iLocal_281);
	}
	unk_0x748798F6C2AB96B7("TRV4_START");
	unk_0x748798F6C2AB96B7("TRV4_GAMEPLAY_START");
	unk_0x748798F6C2AB96B7("TRV4_START_CS_SKIP");
	unk_0x748798F6C2AB96B7("TRV4_START_RT");
	unk_0x748798F6C2AB96B7("TRV4_FOOT_CHASE_RT");
	unk_0x748798F6C2AB96B7("TRV4_EVADE_RT");
	unk_0x748798F6C2AB96B7("TRV4_CAR_ENTERED");
	unk_0x748798F6C2AB96B7("TRV4_AIRPORT_ENTERED");
	unk_0x748798F6C2AB96B7("TRV4_CHASE");
	unk_0x748798F6C2AB96B7("TRV4_JET_ENTERED");
	if (unk_0x86BC948CAD7C61EF(iLocal_262))
	{
		unk_0x906C49077ACDA06A(iLocal_262);
	}
	if (unk_0x2F1B39E315395385(iLocal_672))
	{
		unk_0x0DDA5155C0628144(iLocal_672, 0);
	}
	unk_0x5499DFC49A11E05F();
	unk_0xB0B0FE33F4F22679(&iLocal_305);
	unk_0x786556581D95BCB2("digitalOverlay");
	unk_0x6935EBF9868982DC(-617f, -2274f, 0f, -406.01f, -2044f, 15f, true, 1);
	unk_0x6935EBF9868982DC(-482f, -2118f, 6f, -1072f, -2724f, 17f, true, 1);
	if (unk_0x1E8349F219AC5AF9("Trev4_5"))
	{
		unk_0xC881DDFA077826BB("Trev4_5", 0, 0.5f, 1f);
	}
	unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
	unk_0x2991B7F8ABC4BB0C(1f);
	unk_0x43F06392C4EF25E0(true);
	unk_0x59B038076F830627(true);
	unk_0x4EA570997E107F35("missheist_agency3aig_lift_waitped_a");
	func_286(0);
	unk_0x4AED68BFACFB14CB(true);
	if (func_19(2))
	{
		func_18(2, 0);
	}
	unk_0x95E4B6F3ED223F5A();
}

void func_411()//Position - 0x25A64
{
	int iVar0;
	
	Global_DABC = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		Global_DABD[iVar0 /*2*/] = 0;
		iVar0++;
	}
}

void func_412()//Position - 0x25A8E
{
	int iVar0;
	
	if (unk_0xACE95AD318CE412B("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_19B04.f_2360 || func_423(0))
	{
		if (!func_413())
		{
			iVar0 = func_8();
			if (iVar0 != -1)
			{
				if (!func_236(iVar0))
				{
					return;
				}
				unk_0xF0059F27F7BB6680(&(Global_1478C[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_241();
		}
	}
}

int func_413()//Position - 0x25AFF
{
	if (((Global_16B1B == 13 || Global_16B1B == 10) || Global_16B1B == 11) || Global_16B1B == 12)
	{
		return 0;
	}
	return 1;
}

void func_414(int iParam0, int iParam1)//Position - 0x25B3D
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (unk_0x9CDD10270A1ACF6F(iParam0, &iVar0, 0))
		{
			if (iVar0 != 0 && iVar0 != joaat("weapon_unarmed"))
			{
				if (!func_415(iParam1, iVar0))
				{
					iVar0 = 0;
				}
			}
		}
	}
	if (Global_16B40 > 0)
	{
		Global_181DF.f_15[iParam1] = iVar0;
	}
	else
	{
		Global_17646.f_15[iParam1] = iVar0;
	}
}

int func_415(int iParam0, int iParam1)//Position - 0x25BA3
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_16B40 > 0)
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			if (Global_181DF.f_32C[iParam0 /*472*/][iVar0 /*5*/] == iParam1)
			{
				if (Global_181DF.f_32C[iParam0 /*472*/][iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			if (Global_181DF.f_32C[iParam0 /*472*/].f_DD[iVar0 /*5*/] == iParam1)
			{
				if (Global_181DF.f_32C[iParam0 /*472*/].f_DD[iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			if (Global_17646.f_32C[iParam0 /*472*/][iVar0 /*5*/] == iParam1)
			{
				if (Global_17646.f_32C[iParam0 /*472*/][iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			if (Global_17646.f_32C[iParam0 /*472*/].f_DD[iVar0 /*5*/] == iParam1)
			{
				if (Global_17646.f_32C[iParam0 /*472*/].f_DD[iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_416(int iParam0, bool bParam1)//Position - 0x25CD6
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_420(iParam0, &iVar1);
	if (!unk_0x3362CDE8460ED38B("NONE", sVar0) && iVar1 != 0)
	{
		if (bParam1)
		{
			if (unk_0x00BCFC51EF781989(iVar1))
			{
				return;
			}
			if (unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA()) == iVar1)
			{
				func_419(iParam0, 1);
				return;
			}
		}
		else
		{
			if (!unk_0x00BCFC51EF781989(iVar1))
			{
				return;
			}
			if (func_417(iParam0))
			{
				func_419(iParam0, 0);
			}
		}
		unk_0xAA5EF3021E488A5D(iVar1, bParam1);
		if (bParam1)
		{
		}
	}
}

int func_417(int iParam0)//Position - 0x25D61
{
	struct<2> Var0;
	
	Var0 = { func_418(iParam0) };
	if (Var0.f_1 != -1 && unk_0xFA30DFD0084E92FE(Global_7BC3[Var0.f_1], Var0))
	{
		return 1;
	}
	return 0;
}

struct<2> func_418(var uParam0)//Position - 0x25D95
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	
	iVar0 = uParam0;
	iVar1 = 0;
	iVar2 = 0;
	Var3 = -1;
	Var3.f_1 = -1;
	while (iVar1 < 6)
	{
		iVar2 += 32;
		if (iVar0 < iVar2)
		{
			Var3.f_1 = iVar1;
			Var3 = (iVar0 - Var3.f_1 * 32);
			return Var3;
		}
		iVar1++;
	}
	return Var3;
}

void func_419(int iParam0, bool bParam1)//Position - 0x25DE7
{
	struct<2> Var0;
	
	Var0 = { func_418(iParam0) };
	if (Var0.f_1 == -1)
	{
		return;
	}
	if (bParam1)
	{
		unk_0xF0059F27F7BB6680(&(Global_7BC3[Var0.f_1]), Var0);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_7BC3[Var0.f_1]), Var0);
	}
}

var func_420(int iParam0, int iParam1)//Position - 0x25E2A
{
	struct<5> Var0;
	
	Var0 = { func_421(iParam0) };
	*iParam1 = unk_0x5E29F9399E0829A3(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_421(int iParam0)//Position - 0x25E4F
{
	struct<5> Var0;
	vector3 vVar1;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -447.4833f, 280.3197f, 77.5215f };
			Var0.f_3 = "v_comedy";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 1:
			Var0 = { -1906.786f, -573.7576f, 19.0773f };
			Var0.f_3 = "v_psycheoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 2:
			Var0 = { 1399.973f, 1148.756f, 113.3336f };
			Var0.f_3 = "v_ranch";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 3:
			Var0 = { -598.6379f, -1608.399f, 26.0108f };
			Var0.f_3 = "v_recycle";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 4:
			Var0 = { -556.5089f, 286.3181f, 81.1763f };
			Var0.f_3 = "v_rockclub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 5:
			Var0 = { -111.7116f, -11.912f, 69.5196f };
			Var0.f_3 = "v_janitor";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 6:
			Var0 = { 1274.934f, -1714.726f, 53.7715f };
			Var0.f_3 = "v_lesters";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 7:
			Var0 = { 147.433f, -2201.37f, 3.688f };
			Var0.f_3 = "v_torture";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 8:
			Var0 = { 320.9934f, 265.2515f, 82.1221f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Vinewood)";
			break;
		
		case 9:
			Var0 = { -1425.564f, -244.3f, 15.8053f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Morningwood)";
			break;
		
		case 10:
			Var0 = { 377.153f, -717.567f, 10.0536f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Downtown)";
			break;
		
		case 11:
			Var0 = { 245.1564f, 370.211f, 104.7382f };
			Var0.f_3 = "v_epsilonism";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 12:
			Var0 = { 173.1176f, -1003.279f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 13:
			Var0 = { 199.9715f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 14:
			Var0 = { 228.6058f, -992.0537f, -99.9999f };
			Var0.f_3 = "v_garagel";
			Var0.f_3 = "hei_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 15:
			Var0 = { 1854.254f, 3686.739f, 33.2671f };
			Var0.f_3 = "v_sheriff";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 16:
			Var0 = { -444.8907f, 6013.587f, 30.7164f };
			Var0.f_3 = "v_sheriff2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 17:
			Var0 = { 3522.845f, 3707.965f, 19.9918f };
			Var0.f_3 = "v_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 18:
			Var0 = { 717.2994f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 19:
			Var0 = { 717.299f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweatempty";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 20:
			Var0 = { 2449.785f, 4983.825f, 45.8106f };
			Var0.f_3 = "v_farmhouse";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1087.195f, -1988.445f, 28.649f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 23:
			Var0 = { 982.233f, -2160.382f, 28.4761f };
			Var0.f_3 = "v_abattoir";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 21:
			Var0 = { 479.0568f, -1316.825f, 28.2038f };
			Var0.f_3 = "v_chopshop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 24:
			Var0 = { -1005.663f, -478.3461f, 49.0265f };
			Var0.f_3 = "v_58_sol_office";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 25:
			vVar1 = { func_422(1, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			vVar1 = { func_422(2, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			vVar1 = { func_422(3, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			vVar1 = { func_422(4, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			vVar1 = { func_422(5, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			vVar1 = { func_422(6, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			vVar1 = { func_422(7, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 32:
			Var0 = { Global_100449[34 /*1951*/].f_92.f_5ED + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 33:
			vVar1 = { func_422(35, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			vVar1 = { func_422(36, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			vVar1 = { func_422(37, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			vVar1 = { func_422(38, 0) };
			Var0 = { -20.1f, -580.8f, 91.3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			vVar1 = { func_422(39, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			vVar1 = { func_422(40, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			vVar1 = { func_422(41, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			vVar1 = { func_422(42, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			vVar1 = { func_422(43, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (17)";
			break;
		
		case 42:
			Var0 = { -470.3754f, -698.5207f, 51.5276f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (18)";
			break;
		
		case 43:
			Var0 = { -460.6133f, -691.5562f, 69.9067f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (19)";
			break;
		
		case 44:
			Var0 = { 300.633f, -997.4288f, -99.9727f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (20)";
			break;
		
		case 49:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (1)";
			break;
		
		case 50:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (2)";
			break;
		
		case 51:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (3)";
			break;
		
		case 52:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (4)";
			break;
		
		case 53:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (5)";
			break;
		
		case 54:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (7)";
			break;
		
		case 55:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (8)";
			break;
		
		case 56:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (10)";
			break;
		
		case 57:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (12)";
			break;
		
		case 58:
			Var0 = { 374.2012f, 416.9688f, 142.5991f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (13)";
			break;
		
		case 45:
			Var0 = { -16.29585f, -684.0385f, 33.50832f };
			Var0.f_3 = "dt1_03_carpark";
			Var0.f_4 = "dt1_03_carpark";
			break;
		
		case 46:
			Var0 = { 341.1f, -1000f, -99.2f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = "v_apart_midspaz";
			break;
		
		case 47:
			Var0 = { 199.9716f, -1018.954f, -100f };
			Var0.f_3 = "v_garagem_sp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 48:
			Var0 = { -1388.001f, -618.4197f, 30.8196f };
			Var0.f_3 = "v_bahama";
			Var0.f_4 = Var0.f_3;
			break;
	}
	switch (iParam0)
	{
		case 59:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 60:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 61:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 62:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 63:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 64:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 65:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 66:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 67:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 68:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 69:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 70:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 71:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 72:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 73:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 74:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 75:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 76:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 77:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 78:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 79:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 80:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 81:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 82:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 83:
			vVar1 = { func_422(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 84:
			vVar1 = { func_422(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 85:
			vVar1 = { func_422(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 86:
			vVar1 = { func_422(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 87:
			vVar1 = { func_422(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 88:
			vVar1 = { func_422(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 89:
			vVar1 = { func_422(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 90:
			vVar1 = { func_422(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 91:
			vVar1 = { func_422(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 92:
			vVar1 = { func_422(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 93:
			vVar1 = { func_422(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 94:
			vVar1 = { func_422(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 95:
			vVar1 = { func_422(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 96:
			vVar1 = { func_422(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 97:
			vVar1 = { func_422(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 98:
			vVar1 = { func_422(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 99:
			vVar1 = { func_422(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 100:
			vVar1 = { func_422(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 101:
			vVar1 = { func_422(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 102:
			vVar1 = { func_422(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 103:
			vVar1 = { func_422(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 104:
			vVar1 = { func_422(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 105:
			vVar1 = { func_422(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 106:
			vVar1 = { func_422(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 107:
			vVar1 = { func_422(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 108:
			vVar1 = { func_422(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 109:
			vVar1 = { func_422(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 110:
			vVar1 = { func_422(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 111:
			vVar1 = { func_422(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 112:
			vVar1 = { func_422(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 113:
			vVar1 = { func_422(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 114:
			vVar1 = { func_422(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 115:
			vVar1 = { func_422(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 116:
			vVar1 = { func_422(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 117:
			vVar1 = { func_422(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 118:
			vVar1 = { func_422(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 119:
			vVar1 = { func_422(91, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 120:
			vVar1 = { func_422(97, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 121:
			vVar1 = { func_422(103, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 122:
			vVar1 = { func_422(104, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 123:
			vVar1 = { func_422(105, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 124:
			vVar1 = { func_422(106, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 125:
			vVar1 = { func_422(107, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 126:
			vVar1 = { func_422(108, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 127:
			vVar1 = { func_422(109, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 128:
			vVar1 = { func_422(110, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 129:
			vVar1 = { func_422(111, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 130:
			vVar1 = { func_422(112, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 131:
			vVar1 = { func_422(113, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 132:
			vVar1 = { func_422(114, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 133:
			vVar1 = { func_422(103, 1) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 134:
			vVar1 = { func_422(106, 1) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 135:
			vVar1 = { func_422(109, 1) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 136:
			vVar1 = { func_422(112, 1) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 137:
			Var0 = { 938.3077f, -3196.112f, -100f };
			Var0.f_3 = "gr_grdlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 138:
			Var0 = { 512.5f, 4852f, -62.6f };
			Var0.f_3 = "xm_x17dlc_int_sub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 139:
			Var0 = { 2047f, 2942f, -61.9f };
			Var0.f_3 = "xm_x17dlc_int_facility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 140:
			Var0 = { -1047.6f, -232.3503f, 38.0135f };
			Var0.f_3 = "v_faceoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1100f, -2004f, 37f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 141:
			Var0 = { 361f, 6306f, -159f };
			Var0.f_3 = "xm_x17dlc_int_silo_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 142:
			Var0 = { 305f, 6298f, -160f };
			Var0.f_3 = "xm_x17dlc_int_silo_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 143:
			Var0 = { 244f, 6163f, -159f };
			Var0.f_3 = "xm_x17dlc_int_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 144:
			Var0 = { 2168f, 2920f, -84f };
			Var0.f_3 = "xm_x17dlc_int_facility2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 145:
			Var0 = { 446f, 5922f, -158f };
			Var0.f_3 = "xm_x17dlc_int_bse_tun";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 146:
			Var0 = { 252f, 5972f, -156f };
			Var0.f_3 = "xm_x17dlc_int_base_loop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 147:
			Var0 = { 682f, 5959f, -152f };
			Var0.f_3 = "xm_x17dlc_int_base_ent";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 148:
			Var0 = { 551f, 5939f, -158f };
			Var0.f_3 = "xm_x17dlc_int_base";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 149:
			Var0 = { 520.0001f, 4750f, -70f };
			Var0.f_3 = "xm_x17dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 150:
			Var0 = { -1266.802f, -3014.849f, -49.4903f };
			Var0.f_3 = "sm_smugdlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 151:
			Var0 = { 974.9203f, -3000.065f, -40.647f };
			Var0.f_3 = "imp_impexp_intwaremed";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 152:
			Var0 = { 969.5376f, -3000.411f, -48.647f };
			Var0.f_3 = "imp_impexp_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 153:
			Var0 = { 1094.997f, -3100.012f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_s_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 154:
			Var0 = { 1059.995f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_m_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 155:
			Var0 = { 1010.008f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_l_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 156:
			Var0 = { 372.6707f, 405.5235f, 144.5326f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 157:
			Var0 = { -282.0588f, -955.17f, 85.3036f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 158:
			Var0 = { 342.7946f, -997.4225f, -99.7444f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 159:
			Var0 = { 260.3268f, -997.4298f, -100.0086f };
			Var0.f_3 = "v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 160:
			Var0 = { 108.2369f, -753.5364f, 233.1523f };
			Var0.f_3 = "v_fib01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 161:
			Var0 = { 135.3226f, -746.3677f, 253.1523f };
			Var0.f_3 = "v_fib03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 162:
			Var0 = { 108.2572f, -753.5342f, 44.7548f };
			Var0.f_3 = "v_office_lobby";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 163:
			Var0 = { 228.6161f, -992.053f, -99.9999f };
			Var0.f_3 = "heist_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 164:
			Var0 = { 199.9716f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 165:
			Var0 = { 173.1165f, -1003.28f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 166:
			Var0 = { 575f, 4750f, -60f };
			Var0.f_3 = "xm_v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 167:
			Var0 = { 600f, 4750f, -60f };
			Var0.f_3 = "xm_v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 168:
			Var0 = { 630f, 4750f, -60f };
			Var0.f_3 = "xm_v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 169:
			Var0 = { 1257f, 4796.7f, -39.1f };
			Var0.f_3 = "xm_x17dlc_int_tun_entry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 170:
			Var0 = { 694.4f, 5898.9f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 171:
			Var0 = { 1121.8f, 5516.3f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 172:
			Var0 = { 1279.6f, 5233.2f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 173:
			Var0 = { 1158.6f, 5467.1f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 174:
			Var0 = { 705.9f, 5838.5f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 175:
			Var0 = { 1316.5f, 5184f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 176:
			Var0 = { 1248f, 5276.1f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 177:
			Var0 = { 1090.2f, 5559.2f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 178:
			Var0 = { 1261f, 4808.6f, -39.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 179:
			Var0 = { 721.8f, 5781.4f, -146.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 180:
			Var0 = { 780.8f, 5703.4f, -136.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 181:
			Var0 = { 868.1f, 5659.2f, -126.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 182:
			Var0 = { 1218.2f, 5321.2f, -85.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 183:
			Var0 = { 1278.5f, 4859.7f, -44.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 184:
			Var0 = { 1187.2f, 5419.8f, -96.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 185:
			Var0 = { 1344.7f, 5136.4f, -75.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 186:
			Var0 = { 1363.4f, 5039.5f, -65.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 187:
			Var0 = { 1049.3f, 5602.1f, -107.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 188:
			Var0 = { 1337.8f, 4944.3f, -55.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 189:
			Var0 = { 961.5f, 5646.9f, -117.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 190:
			Var0 = { 345.0041f, 4842.001f, -59.9997f };
			Var0.f_3 = "xm_x17dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 191:
			Var0 = { 279.9322f, -1337.49f, 23.7419f };
			Var0.f_3 = "v_coroner";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 192:
			Var0 = { -1604.664f, -3012.583f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_01_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 193:
			Var0 = { -1505.783f, -3012.587f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_02_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 194:
			Var0 = { -630.4205f, -236.7843f, 37.057f };
			Var0.f_3 = "V_JEWEL2";
			Var0.f_4 = Var0.f_3;
			break;
		
		default:
			break;
	}
	return Var0;
}

struct<6> func_422(int iParam0, bool bParam1)//Position - 0x28143
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case -1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 2:
			Var0 = { -761.0982f, 317.6259f, 169.5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { -761.1888f, 317.6295f, 216.0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { -795.3856f, 340.0188f, 152.7941f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 61:
			Var0 = { -778.5056f, 332.3779f, 212.1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 5:
			Var0 = { -258.1807f, -950.6853f, 70.0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 6:
			Var0 = { -285.0051f, -957.6552f, 85.3035f };
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		
		case 7:
			Var0 = { -1471.882f, -530.7484f, 62.34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 34:
			Var0 = { -1471.882f, -530.7484f, 49.72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 62:
			Var0 = { -1463.15f, -540.2369f, 74.2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 35:
			Var0 = { -885.3702f, -451.4775f, 119.327f };
			Var0.f_3 = { 0f, 0f, 27.55617f };
			break;
		
		case 36:
			Var0 = { -913.0385f, -438.4284f, 114.3997f };
			Var0.f_3 = { 0f, 0f, -153.3093f };
			break;
		
		case 37:
			Var0 = { -892.5499f, -430.4789f, 88.25368f };
			Var0.f_3 = { 0f, 0f, 116.9193f };
			break;
		
		case 38:
			Var0 = { -35.0462f, -576.317f, 82.90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 39:
			Var0 = { -10.3788f, -590.7431f, 93.02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 65:
			Var0 = { -22.2487f, -589.1461f, 80.2305f };
			Var0.f_3 = { 0f, 0f, 69.88f };
			break;
		
		case 40:
			Var0 = { -900.6311f, -376.7462f, 78.27306f };
			Var0.f_3 = { 0f, 0f, 26.92611f };
			break;
		
		case 41:
			Var0 = { -929.483f, -374.5104f, 102.2329f };
			Var0.f_3 = { 0f, 0f, -152.5531f };
			break;
		
		case 63:
			Var0 = { -914.4202f, -375.8189f, 114.4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 42:
			Var0 = { -617.1647f, 64.6042f, 100.8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 43:
			Var0 = { -584.2015f, 42.7133f, 86.4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { -609.5665f, 50.2203f, 98.3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 73:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		
		case 74:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = { 0f, 0f, -63.5f };
			break;
		
		case 75:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = { 0f, 0f, -71.5f };
			break;
		
		case 76:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = { 0f, 0f, 40.5f };
			break;
		
		case 77:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		
		case 78:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = { 0f, 0f, -14.5f };
			break;
		
		case 79:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		
		case 80:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = { 0f, 0f, 4.5f };
			break;
		
		case 81:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 82:
			Var0 = { 374.2012f, 416.9688f, 142.6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		
		case 83:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 84:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 85:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 86:
			Var0 = { -1573.098f, -4085.806f, 9.7851f };
			Var0.f_3 = { 0f, 0f, 162f };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342.8157f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260.3297f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 87:
			Var0 = { -1572.187f, -570.8315f, 109.9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		
		case 88:
			Var0 = { -1383.954f, -476.7112f, 73.507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		
		case 89:
			Var0 = { -138.0029f, -629.739f, 170.2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		
		case 90:
			Var0 = { -74.8895f, -817.6883f, 244.8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			Var0 = { 1100.764f, -3159.384f, -34.9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var0 = { 1005.806f, -3157.67f, -36.0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 103:
			if (!bParam1)
			{
				Var0 = { -1576.571f, -569.7595f, 85.5f };
				Var0.f_3 = { 0f, 0f, 36.1f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 104:
			if (!bParam1)
			{
				Var0 = { -1571.254f, -566.5865f, 85.5f };
				Var0.f_3 = { 0f, 0f, -53.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 105:
			if (!bParam1)
			{
				Var0 = { -1568.098f, -571.9171f, 85.5f };
				Var0.f_3 = { 0f, 0f, -143.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 106:
			if (!bParam1)
			{
				Var0 = { -1384.518f, -475.8657f, 56.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 107:
			if (!bParam1)
			{
				Var0 = { -1384.538f, -475.8829f, 48.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 108:
			if (!bParam1)
			{
				Var0 = { -1378.994f, -477.2481f, 56.1f };
				Var0.f_3 = { 0f, 0f, -81.1f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 109:
			if (!bParam1)
			{
				Var0 = { -186.5683f, -576.4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96.16f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 110:
			if (!bParam1)
			{
				Var0 = { -113.886f, -564.3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110.96f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 111:
			if (!bParam1)
			{
				Var0 = { -134.6568f, -635.1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9.04f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 112:
			if (!bParam1)
			{
				Var0 = { -79.0479f, -822.6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 113:
			if (!bParam1)
			{
				Var0 = { -70.3086f, -819.5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 114:
			if (!bParam1)
			{
				Var0 = { -79.9861f, -818.425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}
	return Var0;
}

bool func_423(bool bParam0)//Position - 0x28CF9
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_1163A, 0);
}

